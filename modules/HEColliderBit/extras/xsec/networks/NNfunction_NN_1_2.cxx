#include "NNfunction_NN_1_2.h"
#include <cmath>

double NNfunction_NN_1_2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5105)/15.249;
   input1 = (in1 - -7.58127)/1169.44;
   input2 = (in2 - 628.518)/611.097;
   input3 = (in3 - -35.0881)/838.525;
   input4 = (in4 - 1101.63)/971.327;
   input5 = (in5 - 909.698)/959.905;
   input6 = (in6 - 916.217)/958.154;
   input7 = (in7 - 932.989)/941.793;
   input8 = (in8 - 928.312)/975.176;
   input9 = (in9 - 913.709)/960.339;
   input10 = (in10 - 982.292)/954.222;
   input11 = (in11 - 693.682)/850.713;
   input12 = (in12 - 729.676)/872.527;
   input13 = (in13 - 497.247)/516.845;
   input14 = (in14 - 737.841)/830.914;
   input15 = (in15 - 734.428)/831.537;
   input16 = (in16 - 539.527)/571.552;
   input17 = (in17 - 761.934)/902.437;
   input18 = (in18 - 757.767)/903.11;
   input19 = (in19 - 798.017)/874.978;
   input20 = (in20 - -1.37204)/483.757;
   input21 = (in21 - -3.59523)/1151.09;
   input22 = (in22 - -1.0088)/1206.8;
   input23 = (in23 - -128.801)/465.419;
   switch(index) {
     case 0:
         return neuron0x1aad1c0();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_2::Value(int index, double* input) {
   input0 = (input[0] - 23.5105)/15.249;
   input1 = (input[1] - -7.58127)/1169.44;
   input2 = (input[2] - 628.518)/611.097;
   input3 = (input[3] - -35.0881)/838.525;
   input4 = (input[4] - 1101.63)/971.327;
   input5 = (input[5] - 909.698)/959.905;
   input6 = (input[6] - 916.217)/958.154;
   input7 = (input[7] - 932.989)/941.793;
   input8 = (input[8] - 928.312)/975.176;
   input9 = (input[9] - 913.709)/960.339;
   input10 = (input[10] - 982.292)/954.222;
   input11 = (input[11] - 693.682)/850.713;
   input12 = (input[12] - 729.676)/872.527;
   input13 = (input[13] - 497.247)/516.845;
   input14 = (input[14] - 737.841)/830.914;
   input15 = (input[15] - 734.428)/831.537;
   input16 = (input[16] - 539.527)/571.552;
   input17 = (input[17] - 761.934)/902.437;
   input18 = (input[18] - 757.767)/903.11;
   input19 = (input[19] - 798.017)/874.978;
   input20 = (input[20] - -1.37204)/483.757;
   input21 = (input[21] - -3.59523)/1151.09;
   input22 = (input[22] - -1.0088)/1206.8;
   input23 = (input[23] - -128.801)/465.419;
   switch(index) {
     case 0:
         return neuron0x1aad1c0();
     default:
         return 0.;
   }
}

double NNfunction_NN_1_2::neuron0x1a78230() {
   return input0;
}

double NNfunction_NN_1_2::neuron0x1a784e0() {
   return input1;
}

double NNfunction_NN_1_2::neuron0x1a78820() {
   return input2;
}

double NNfunction_NN_1_2::neuron0x1a78b60() {
   return input3;
}

double NNfunction_NN_1_2::neuron0x1a78ea0() {
   return input4;
}

double NNfunction_NN_1_2::neuron0x1a791e0() {
   return input5;
}

double NNfunction_NN_1_2::neuron0x1a79520() {
   return input6;
}

double NNfunction_NN_1_2::neuron0x1a79860() {
   return input7;
}

double NNfunction_NN_1_2::neuron0x1a79ba0() {
   return input8;
}

double NNfunction_NN_1_2::neuron0x1a79ee0() {
   return input9;
}

double NNfunction_NN_1_2::neuron0x1a7a220() {
   return input10;
}

double NNfunction_NN_1_2::neuron0x1a7a560() {
   return input11;
}

double NNfunction_NN_1_2::neuron0x1a7a8a0() {
   return input12;
}

double NNfunction_NN_1_2::neuron0x1a7abe0() {
   return input13;
}

double NNfunction_NN_1_2::neuron0x1a7af20() {
   return input14;
}

double NNfunction_NN_1_2::neuron0x1a7b260() {
   return input15;
}

double NNfunction_NN_1_2::neuron0x1a7b5a0() {
   return input16;
}

double NNfunction_NN_1_2::neuron0x1a7bb00() {
   return input17;
}

double NNfunction_NN_1_2::neuron0x1a7be40() {
   return input18;
}

double NNfunction_NN_1_2::neuron0x1a7c180() {
   return input19;
}

double NNfunction_NN_1_2::neuron0x1a7c4c0() {
   return input20;
}

double NNfunction_NN_1_2::neuron0x1a7c800() {
   return input21;
}

double NNfunction_NN_1_2::neuron0x1a7cb40() {
   return input22;
}

double NNfunction_NN_1_2::neuron0x1a7ce80() {
   return input23;
}

double NNfunction_NN_1_2::input0x1a7d2f0() {
   double input = 0.510792;
   input += synapse0x1a7d630();
   input += synapse0x1a7d670();
   input += synapse0x1a7d6b0();
   input += synapse0x1a7d6f0();
   input += synapse0x1a7d730();
   input += synapse0x1a7d770();
   input += synapse0x1a7d7b0();
   input += synapse0x1a7d7f0();
   input += synapse0x1a7d830();
   input += synapse0x1a7d870();
   input += synapse0x1a7d8b0();
   input += synapse0x1a7d8f0();
   input += synapse0x1a7d930();
   input += synapse0x1a7d970();
   input += synapse0x1a7d9b0();
   input += synapse0x1a7d9f0();
   input += synapse0x1a7d480();
   input += synapse0x1a7d4c0();
   input += synapse0x182a940();
   input += synapse0x182a980();
   input += synapse0x1a7da30();
   input += synapse0x1a7da70();
   input += synapse0x1a7dab0();
   input += synapse0x1a7daf0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a7d2f0() {
   double input = input0x1a7d2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a7db30() {
   double input = -0.152291;
   input += synapse0x1a7de70();
   input += synapse0x1a7deb0();
   input += synapse0x1a7def0();
   input += synapse0x1a7df30();
   input += synapse0x1a7df70();
   input += synapse0x1a7dfb0();
   input += synapse0x1a7dff0();
   input += synapse0x1a7e030();
   input += synapse0x1a7e070();
   input += synapse0x182a790();
   input += synapse0x182a7d0();
   input += synapse0x182a810();
   input += synapse0x182a850();
   input += synapse0x1a7e2c0();
   input += synapse0x1a7e300();
   input += synapse0x1a7e340();
   input += synapse0x1a7dcc0();
   input += synapse0x1a7dd00();
   input += synapse0x1a7e490();
   input += synapse0x1a7e4d0();
   input += synapse0x1a7e510();
   input += synapse0x1a7e550();
   input += synapse0x1a7e590();
   input += synapse0x1a7e5d0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a7db30() {
   double input = input0x1a7db30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a7e610() {
   double input = -0.32267;
   input += synapse0x1a7e950();
   input += synapse0x1a7e990();
   input += synapse0x1a7e9d0();
   input += synapse0x1a7ea10();
   input += synapse0x1a7ea50();
   input += synapse0x1a7ea90();
   input += synapse0x1a7ead0();
   input += synapse0x1a7eb10();
   input += synapse0x1a7eb50();
   input += synapse0x1a7eb90();
   input += synapse0x1a7ebd0();
   input += synapse0x1a7ec10();
   input += synapse0x1a7ec50();
   input += synapse0x1a7ec90();
   input += synapse0x1a7ecd0();
   input += synapse0x1a7ed10();
   input += synapse0x1a7e7a0();
   input += synapse0x1a7e7e0();
   input += synapse0x18387a0();
   input += synapse0x18387e0();
   input += synapse0x1a80c40();
   input += synapse0x1a80c80();
   input += synapse0x1a77f70();
   input += synapse0x1a77fb0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a7e610() {
   double input = input0x1a7e610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1838f20() {
   double input = -0.871093;
   input += synapse0x18390b0();
   input += synapse0x1a7e1d0();
   input += synapse0x1a7e210();
   input += synapse0x1a7e250();
   input += synapse0x1a7ee60();
   input += synapse0x1a7eea0();
   input += synapse0x1a7eee0();
   input += synapse0x1a7ef20();
   input += synapse0x1a7ef60();
   input += synapse0x1a7efa0();
   input += synapse0x1a7efe0();
   input += synapse0x1a7f020();
   input += synapse0x1a7f060();
   input += synapse0x1a7f0a0();
   input += synapse0x1a7f0e0();
   input += synapse0x1a7f120();
   input += synapse0x1a77ff0();
   input += synapse0x1a78030();
   input += synapse0x1a7f270();
   input += synapse0x1a7f2b0();
   input += synapse0x1a7f2f0();
   input += synapse0x1a7f330();
   input += synapse0x1a7f370();
   input += synapse0x1a7f3b0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1838f20() {
   double input = input0x1838f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a7f3f0() {
   double input = -0.98055;
   input += synapse0x1a7f730();
   input += synapse0x1a7f770();
   input += synapse0x1a7f7b0();
   input += synapse0x1a7f7f0();
   input += synapse0x1a7f830();
   input += synapse0x1a7f870();
   input += synapse0x1a7f8b0();
   input += synapse0x1a7f8f0();
   input += synapse0x1a7f930();
   input += synapse0x1a7f970();
   input += synapse0x1a7f9b0();
   input += synapse0x1a7f9f0();
   input += synapse0x1a7fa30();
   input += synapse0x1a7fa70();
   input += synapse0x1a7fab0();
   input += synapse0x1a7faf0();
   input += synapse0x1a7fc40();
   input += synapse0x1a7f580();
   input += synapse0x1a7f5c0();
   input += synapse0x1a80d80();
   input += synapse0x1a80dc0();
   input += synapse0x1a80e00();
   input += synapse0x1a80e40();
   input += synapse0x1a80e80();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a7f3f0() {
   double input = input0x1a7f3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a80ec0() {
   double input = 0.290109;
   input += synapse0x1a81200();
   input += synapse0x1a81240();
   input += synapse0x1a81280();
   input += synapse0x1a812c0();
   input += synapse0x1a81300();
   input += synapse0x1a81340();
   input += synapse0x1a81380();
   input += synapse0x1a813c0();
   input += synapse0x1a81400();
   input += synapse0x1838b10();
   input += synapse0x1838b50();
   input += synapse0x1838b90();
   input += synapse0x1838bd0();
   input += synapse0x1838c10();
   input += synapse0x1838c50();
   input += synapse0x1838c90();
   input += synapse0x1a81050();
   input += synapse0x1a81090();
   input += synapse0x1838de0();
   input += synapse0x1838e20();
   input += synapse0x1838e60();
   input += synapse0x1838ea0();
   input += synapse0x1838ee0();
   input += synapse0x1a81c50();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a80ec0() {
   double input = input0x1a80ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a81c90() {
   double input = -0.493217;
   input += synapse0x1a81fd0();
   input += synapse0x1a82010();
   input += synapse0x1a82050();
   input += synapse0x1a82090();
   input += synapse0x1a820d0();
   input += synapse0x1a82110();
   input += synapse0x1a82150();
   input += synapse0x1a82190();
   input += synapse0x1a821d0();
   input += synapse0x1a82210();
   input += synapse0x1a82250();
   input += synapse0x1a82290();
   input += synapse0x1a822d0();
   input += synapse0x1a82310();
   input += synapse0x1a82350();
   input += synapse0x1a82390();
   input += synapse0x1a81e20();
   input += synapse0x1a81e60();
   input += synapse0x1a824e0();
   input += synapse0x1a82520();
   input += synapse0x1a82560();
   input += synapse0x1a825a0();
   input += synapse0x1a825e0();
   input += synapse0x1a82620();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a81c90() {
   double input = input0x1a81c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a82660() {
   double input = 3.46967;
   input += synapse0x1a829a0();
   input += synapse0x1a829e0();
   input += synapse0x1a82a20();
   input += synapse0x1a82a60();
   input += synapse0x1a82aa0();
   input += synapse0x1a82ae0();
   input += synapse0x1a82b20();
   input += synapse0x1a82b60();
   input += synapse0x1a82ba0();
   input += synapse0x1a82be0();
   input += synapse0x1a82c20();
   input += synapse0x1a82c60();
   input += synapse0x1a82ca0();
   input += synapse0x1a82ce0();
   input += synapse0x1a82d20();
   input += synapse0x1a82d60();
   input += synapse0x1a827f0();
   input += synapse0x1a82830();
   input += synapse0x1a82eb0();
   input += synapse0x1a82ef0();
   input += synapse0x1a82f30();
   input += synapse0x1a82f70();
   input += synapse0x1a82fb0();
   input += synapse0x1a82ff0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a82660() {
   double input = input0x1a82660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a83030() {
   double input = -2.14863;
   input += synapse0x1a7b9f0();
   input += synapse0x1a7ba30();
   input += synapse0x1a7ba70();
   input += synapse0x1a7bab0();
   input += synapse0x1a83580();
   input += synapse0x1a835c0();
   input += synapse0x1a83600();
   input += synapse0x1a83640();
   input += synapse0x1a83680();
   input += synapse0x1a836c0();
   input += synapse0x1a83700();
   input += synapse0x1a83740();
   input += synapse0x1a83780();
   input += synapse0x1a837c0();
   input += synapse0x1a83800();
   input += synapse0x1a83840();
   input += synapse0x1a831c0();
   input += synapse0x1a83200();
   input += synapse0x1a83990();
   input += synapse0x1a839d0();
   input += synapse0x1a83a10();
   input += synapse0x1a83a50();
   input += synapse0x1a83a90();
   input += synapse0x1a83ad0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a83030() {
   double input = input0x1a83030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a83b10() {
   double input = -1.22581;
   input += synapse0x1a83e50();
   input += synapse0x1a83e90();
   input += synapse0x1a83ed0();
   input += synapse0x1a83f10();
   input += synapse0x1a83f50();
   input += synapse0x1a83f90();
   input += synapse0x1a83fd0();
   input += synapse0x1a84010();
   input += synapse0x1a84050();
   input += synapse0x1a84090();
   input += synapse0x1a840d0();
   input += synapse0x1a84110();
   input += synapse0x1a84150();
   input += synapse0x1a84190();
   input += synapse0x1a841d0();
   input += synapse0x1a84210();
   input += synapse0x1a83ca0();
   input += synapse0x1a83ce0();
   input += synapse0x1a84360();
   input += synapse0x1a843a0();
   input += synapse0x1a843e0();
   input += synapse0x1a84420();
   input += synapse0x1a84460();
   input += synapse0x1a844a0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a83b10() {
   double input = input0x1a83b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a844e0() {
   double input = 2.75429;
   input += synapse0x1a84820();
   input += synapse0x1a84860();
   input += synapse0x1a848a0();
   input += synapse0x1a848e0();
   input += synapse0x1a84920();
   input += synapse0x1a84960();
   input += synapse0x1a849a0();
   input += synapse0x1a849e0();
   input += synapse0x1a84a20();
   input += synapse0x1a84a60();
   input += synapse0x1a84aa0();
   input += synapse0x1a84ae0();
   input += synapse0x1a84b20();
   input += synapse0x1a84b60();
   input += synapse0x1a84ba0();
   input += synapse0x1a84be0();
   input += synapse0x1a84670();
   input += synapse0x1a846b0();
   input += synapse0x1a81440();
   input += synapse0x1a81480();
   input += synapse0x1a814c0();
   input += synapse0x1a81500();
   input += synapse0x1a81540();
   input += synapse0x1a81580();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a844e0() {
   double input = input0x1a844e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a815c0() {
   double input = -0.495065;
   input += synapse0x1a81900();
   input += synapse0x1a81940();
   input += synapse0x1a81980();
   input += synapse0x1a819c0();
   input += synapse0x1a81a00();
   input += synapse0x1a81a40();
   input += synapse0x1a81a80();
   input += synapse0x1a81ac0();
   input += synapse0x1a81b00();
   input += synapse0x1a81b40();
   input += synapse0x1a81b80();
   input += synapse0x1a81bc0();
   input += synapse0x1a81c00();
   input += synapse0x1a85d40();
   input += synapse0x1a85d80();
   input += synapse0x1a85dc0();
   input += synapse0x1a81750();
   input += synapse0x1a81790();
   input += synapse0x1a85f10();
   input += synapse0x1a85f50();
   input += synapse0x1a85f90();
   input += synapse0x1a85fd0();
   input += synapse0x1a86010();
   input += synapse0x1a86050();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a815c0() {
   double input = input0x1a815c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a86090() {
   double input = -0.533528;
   input += synapse0x1a863d0();
   input += synapse0x1a86410();
   input += synapse0x1a86450();
   input += synapse0x1a86490();
   input += synapse0x1a864d0();
   input += synapse0x1a86510();
   input += synapse0x1a86550();
   input += synapse0x1a86590();
   input += synapse0x1a865d0();
   input += synapse0x1a86610();
   input += synapse0x1a86650();
   input += synapse0x1a86690();
   input += synapse0x1a866d0();
   input += synapse0x1a86710();
   input += synapse0x1a86750();
   input += synapse0x1a86790();
   input += synapse0x1a86220();
   input += synapse0x1a86260();
   input += synapse0x1a868e0();
   input += synapse0x1a86920();
   input += synapse0x1a86960();
   input += synapse0x1a869a0();
   input += synapse0x1a869e0();
   input += synapse0x1a86a20();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a86090() {
   double input = input0x1a86090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a86a60() {
   double input = -0.526138;
   input += synapse0x1a86da0();
   input += synapse0x1a86de0();
   input += synapse0x1a86e20();
   input += synapse0x1a86e60();
   input += synapse0x1a86ea0();
   input += synapse0x1a86ee0();
   input += synapse0x1a86f20();
   input += synapse0x1a86f60();
   input += synapse0x1a86fa0();
   input += synapse0x1a86fe0();
   input += synapse0x1a87020();
   input += synapse0x1a87060();
   input += synapse0x1a870a0();
   input += synapse0x1a870e0();
   input += synapse0x1a87120();
   input += synapse0x1a87160();
   input += synapse0x1a86bf0();
   input += synapse0x1a86c30();
   input += synapse0x1a872b0();
   input += synapse0x1a872f0();
   input += synapse0x1a87330();
   input += synapse0x1a87370();
   input += synapse0x1a873b0();
   input += synapse0x1a873f0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a86a60() {
   double input = input0x1a86a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a87430() {
   double input = -2.97279;
   input += synapse0x1a87770();
   input += synapse0x1a877b0();
   input += synapse0x1a877f0();
   input += synapse0x1a87830();
   input += synapse0x1a87870();
   input += synapse0x1a878b0();
   input += synapse0x1a878f0();
   input += synapse0x1a87930();
   input += synapse0x1a87970();
   input += synapse0x1a879b0();
   input += synapse0x1a879f0();
   input += synapse0x1a87a30();
   input += synapse0x1a87a70();
   input += synapse0x1a87ab0();
   input += synapse0x1a87af0();
   input += synapse0x1a87b30();
   input += synapse0x1a875c0();
   input += synapse0x1a87600();
   input += synapse0x1a87c80();
   input += synapse0x1a87cc0();
   input += synapse0x1a87d00();
   input += synapse0x1a87d40();
   input += synapse0x1a87d80();
   input += synapse0x1a87dc0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a87430() {
   double input = input0x1a87430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a87e00() {
   double input = 1.92436;
   input += synapse0x1a88140();
   input += synapse0x1a783c0();
   input += synapse0x1a78400();
   input += synapse0x1a78700();
   input += synapse0x1a78740();
   input += synapse0x1a78a40();
   input += synapse0x1a78a80();
   input += synapse0x1a78d80();
   input += synapse0x1a78dc0();
   input += synapse0x1a790c0();
   input += synapse0x1a79100();
   input += synapse0x1a79400();
   input += synapse0x1a79440();
   input += synapse0x1a79740();
   input += synapse0x1a79780();
   input += synapse0x1a79a80();
   input += synapse0x1a79ac0();
   input += synapse0x1a79dc0();
   input += synapse0x1a79e00();
   input += synapse0x1a7a100();
   input += synapse0x1a7a140();
   input += synapse0x1a7a440();
   input += synapse0x1a7a480();
   input += synapse0x1a7a780();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a87e00() {
   double input = input0x1a87e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a89c10() {
   double input = 0.825468;
   input += synapse0x1a7a7c0();
   input += synapse0x1a7b480();
   input += synapse0x1a7b4c0();
   input += synapse0x1a87f90();
   input += synapse0x1a87fd0();
   input += synapse0x1a7b7c0();
   input += synapse0x1a7b800();
   input += synapse0x1a7bd20();
   input += synapse0x1a7bd60();
   input += synapse0x1a7c060();
   input += synapse0x1a7c0a0();
   input += synapse0x1a7c3a0();
   input += synapse0x1a7c3e0();
   input += synapse0x1a7c6e0();
   input += synapse0x1a7c720();
   input += synapse0x1a7ca20();
   input += synapse0x1a7ca60();
   input += synapse0x1a7cd60();
   input += synapse0x1a7cda0();
   input += synapse0x1a7d0a0();
   input += synapse0x1a7d0e0();
   input += synapse0x1a7aac0();
   input += synapse0x1a7ab00();
   input += synapse0x1a89eb0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a89c10() {
   double input = input0x1a89c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a89ef0() {
   double input = -2.14591;
   input += synapse0x1a8a230();
   input += synapse0x1a8a270();
   input += synapse0x1a8a2b0();
   input += synapse0x1a8a2f0();
   input += synapse0x1a8a330();
   input += synapse0x1a8a370();
   input += synapse0x1a8a3b0();
   input += synapse0x1a8a3f0();
   input += synapse0x1a8a430();
   input += synapse0x1a8a470();
   input += synapse0x1a8a4b0();
   input += synapse0x1a8a4f0();
   input += synapse0x1a8a530();
   input += synapse0x1a8a570();
   input += synapse0x1a8a5b0();
   input += synapse0x1a8a5f0();
   input += synapse0x1a8a080();
   input += synapse0x1a8a0c0();
   input += synapse0x1a8a740();
   input += synapse0x1a8a780();
   input += synapse0x1a8a7c0();
   input += synapse0x1a8a800();
   input += synapse0x1a8a840();
   input += synapse0x1a8a880();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a89ef0() {
   double input = input0x1a89ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a8a8c0() {
   double input = 0.757898;
   input += synapse0x1a8ac00();
   input += synapse0x1a8ac40();
   input += synapse0x1a8ac80();
   input += synapse0x1a8acc0();
   input += synapse0x1a8ad00();
   input += synapse0x1a8ad40();
   input += synapse0x1a8ad80();
   input += synapse0x1a8adc0();
   input += synapse0x1a8ae00();
   input += synapse0x1a8ae40();
   input += synapse0x1a8ae80();
   input += synapse0x1a8aec0();
   input += synapse0x1a8af00();
   input += synapse0x1a8af40();
   input += synapse0x1a8af80();
   input += synapse0x1a8afc0();
   input += synapse0x1a8aa50();
   input += synapse0x1a8aa90();
   input += synapse0x1a8b110();
   input += synapse0x1a8b150();
   input += synapse0x1a8b190();
   input += synapse0x1a8b1d0();
   input += synapse0x1a8b210();
   input += synapse0x1a8b250();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a8a8c0() {
   double input = input0x1a8a8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a8b290() {
   double input = -3.44182;
   input += synapse0x1a8b5d0();
   input += synapse0x1a8b610();
   input += synapse0x1a8b650();
   input += synapse0x1a8b690();
   input += synapse0x1a8b6d0();
   input += synapse0x1a8b710();
   input += synapse0x1a8b750();
   input += synapse0x1a8b790();
   input += synapse0x1a8b7d0();
   input += synapse0x1a8b810();
   input += synapse0x1a8b850();
   input += synapse0x1a8b890();
   input += synapse0x1a8b8d0();
   input += synapse0x1a8b910();
   input += synapse0x1a8b950();
   input += synapse0x1a8b990();
   input += synapse0x1a8b420();
   input += synapse0x1a8b460();
   input += synapse0x1a8bae0();
   input += synapse0x1a8bb20();
   input += synapse0x1a8bb60();
   input += synapse0x1a8bba0();
   input += synapse0x1a8bbe0();
   input += synapse0x1a8bc20();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a8b290() {
   double input = input0x1a8b290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a8bc60() {
   double input = 0.73165;
   input += synapse0x1a8bfa0();
   input += synapse0x1a8bfe0();
   input += synapse0x1a8c020();
   input += synapse0x1a8c060();
   input += synapse0x1a8c0a0();
   input += synapse0x1a8c0e0();
   input += synapse0x1a8c120();
   input += synapse0x1a8c160();
   input += synapse0x1a8c1a0();
   input += synapse0x1a8c1e0();
   input += synapse0x1a8c220();
   input += synapse0x1a8c260();
   input += synapse0x1a8c2a0();
   input += synapse0x1a8c2e0();
   input += synapse0x1a8c320();
   input += synapse0x1a8c360();
   input += synapse0x1a8bdf0();
   input += synapse0x1a8be30();
   input += synapse0x1a8c4b0();
   input += synapse0x1a8c4f0();
   input += synapse0x1a8c530();
   input += synapse0x1a8c570();
   input += synapse0x1a8c5b0();
   input += synapse0x1a8c5f0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a8bc60() {
   double input = input0x1a8bc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a8c630() {
   double input = 0.417765;
   input += synapse0x1a8c970();
   input += synapse0x1a8c9b0();
   input += synapse0x1a8c9f0();
   input += synapse0x1a8ca30();
   input += synapse0x1a8ca70();
   input += synapse0x1a8cab0();
   input += synapse0x1a8caf0();
   input += synapse0x1a8cb30();
   input += synapse0x1a8cb70();
   input += synapse0x1a84d30();
   input += synapse0x1a84d70();
   input += synapse0x1a84db0();
   input += synapse0x1a84df0();
   input += synapse0x1a84e30();
   input += synapse0x1a84e70();
   input += synapse0x1a84eb0();
   input += synapse0x1a8c7c0();
   input += synapse0x1a8c800();
   input += synapse0x1a85000();
   input += synapse0x1a85040();
   input += synapse0x1a85080();
   input += synapse0x1a850c0();
   input += synapse0x1a85100();
   input += synapse0x1a85140();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a8c630() {
   double input = input0x1a8c630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a85180() {
   double input = -4.78803;
   input += synapse0x1a854c0();
   input += synapse0x1a85500();
   input += synapse0x1a85540();
   input += synapse0x1a85580();
   input += synapse0x1a855c0();
   input += synapse0x1a85600();
   input += synapse0x1a85640();
   input += synapse0x1a85680();
   input += synapse0x1a856c0();
   input += synapse0x1a85700();
   input += synapse0x1a85740();
   input += synapse0x1a85780();
   input += synapse0x1a857c0();
   input += synapse0x1a85800();
   input += synapse0x1a85840();
   input += synapse0x1a85880();
   input += synapse0x1a85310();
   input += synapse0x1a85350();
   input += synapse0x1a859d0();
   input += synapse0x1a85a10();
   input += synapse0x1a85a50();
   input += synapse0x1a85a90();
   input += synapse0x1a85ad0();
   input += synapse0x1a85b10();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a85180() {
   double input = input0x1a85180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a85b50() {
   double input = 0.508352;
   input += synapse0x1a85ce0();
   input += synapse0x1a8ed70();
   input += synapse0x1a8edb0();
   input += synapse0x1a8edf0();
   input += synapse0x1a8ee30();
   input += synapse0x1a8ee70();
   input += synapse0x1a8eeb0();
   input += synapse0x1a8eef0();
   input += synapse0x1a8ef30();
   input += synapse0x1a8ef70();
   input += synapse0x1a8efb0();
   input += synapse0x1a8eff0();
   input += synapse0x1a8f030();
   input += synapse0x1a8f070();
   input += synapse0x1a8f0b0();
   input += synapse0x1a8f0f0();
   input += synapse0x1a8ebc0();
   input += synapse0x1a8ec00();
   input += synapse0x1a8f240();
   input += synapse0x1a8f280();
   input += synapse0x1a8f2c0();
   input += synapse0x1a8f300();
   input += synapse0x1a8f340();
   input += synapse0x1a8f380();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a85b50() {
   double input = input0x1a85b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a8f3c0() {
   double input = -0.99679;
   input += synapse0x1a8f700();
   input += synapse0x1a8f740();
   input += synapse0x1a8f780();
   input += synapse0x1a8f7c0();
   input += synapse0x1a8f800();
   input += synapse0x1a8f840();
   input += synapse0x1a8f880();
   input += synapse0x1a8f8c0();
   input += synapse0x1a8f900();
   input += synapse0x1a8f940();
   input += synapse0x1a8f980();
   input += synapse0x1a8f9c0();
   input += synapse0x1a8fa00();
   input += synapse0x1a8fa40();
   input += synapse0x1a8fa80();
   input += synapse0x1a8fac0();
   input += synapse0x1a8f550();
   input += synapse0x1a8f590();
   input += synapse0x1a8fc10();
   input += synapse0x1a8fc50();
   input += synapse0x1a8fc90();
   input += synapse0x1a8fcd0();
   input += synapse0x1a8fd10();
   input += synapse0x1a8fd50();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a8f3c0() {
   double input = input0x1a8f3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a8fd90() {
   double input = 1.17308;
   input += synapse0x1a900d0();
   input += synapse0x1a90110();
   input += synapse0x1a90150();
   input += synapse0x1a90190();
   input += synapse0x1a901d0();
   input += synapse0x1a90210();
   input += synapse0x1a90250();
   input += synapse0x1a90290();
   input += synapse0x1a902d0();
   input += synapse0x1a90310();
   input += synapse0x1a90350();
   input += synapse0x1a90390();
   input += synapse0x1a903d0();
   input += synapse0x1a90410();
   input += synapse0x1a90450();
   input += synapse0x1a90490();
   input += synapse0x1a8ff20();
   input += synapse0x1a8ff60();
   input += synapse0x1a905e0();
   input += synapse0x1a90620();
   input += synapse0x1a90660();
   input += synapse0x1a906a0();
   input += synapse0x1a906e0();
   input += synapse0x1a90720();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a8fd90() {
   double input = input0x1a8fd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a90760() {
   double input = -0.500606;
   input += synapse0x1a90aa0();
   input += synapse0x1a90ae0();
   input += synapse0x1a90b20();
   input += synapse0x1a90b60();
   input += synapse0x1a90ba0();
   input += synapse0x1a90be0();
   input += synapse0x1a90c20();
   input += synapse0x1a90c60();
   input += synapse0x1a90ca0();
   input += synapse0x1a90ce0();
   input += synapse0x1a90d20();
   input += synapse0x1a90d60();
   input += synapse0x1a90da0();
   input += synapse0x1a90de0();
   input += synapse0x1a90e20();
   input += synapse0x1a90e60();
   input += synapse0x1a908f0();
   input += synapse0x1a90930();
   input += synapse0x1a90fb0();
   input += synapse0x1a90ff0();
   input += synapse0x1a91030();
   input += synapse0x1a91070();
   input += synapse0x1a910b0();
   input += synapse0x1a910f0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a90760() {
   double input = input0x1a90760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a91130() {
   double input = 5.08049;
   input += synapse0x1a91470();
   input += synapse0x1a914b0();
   input += synapse0x1a914f0();
   input += synapse0x1a91530();
   input += synapse0x1a91570();
   input += synapse0x1a915b0();
   input += synapse0x1a915f0();
   input += synapse0x1a91630();
   input += synapse0x1a91670();
   input += synapse0x1a916b0();
   input += synapse0x1a916f0();
   input += synapse0x1a91730();
   input += synapse0x1a91770();
   input += synapse0x1a917b0();
   input += synapse0x1a917f0();
   input += synapse0x1a91830();
   input += synapse0x1a912c0();
   input += synapse0x1a91300();
   input += synapse0x1a91980();
   input += synapse0x1a919c0();
   input += synapse0x1a91a00();
   input += synapse0x1a91a40();
   input += synapse0x1a91a80();
   input += synapse0x1a91ac0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a91130() {
   double input = input0x1a91130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a91b00() {
   double input = -0.79629;
   input += synapse0x1a91e40();
   input += synapse0x1a91e80();
   input += synapse0x1a91ec0();
   input += synapse0x1a91f00();
   input += synapse0x1a91f40();
   input += synapse0x1a91f80();
   input += synapse0x1a91fc0();
   input += synapse0x1a92000();
   input += synapse0x1a92040();
   input += synapse0x1a92080();
   input += synapse0x1a920c0();
   input += synapse0x1a92100();
   input += synapse0x1a92140();
   input += synapse0x1a92180();
   input += synapse0x1a921c0();
   input += synapse0x1a92200();
   input += synapse0x1a91c90();
   input += synapse0x1a91cd0();
   input += synapse0x1a92350();
   input += synapse0x1a92390();
   input += synapse0x1a923d0();
   input += synapse0x1a92410();
   input += synapse0x1a92450();
   input += synapse0x1a92490();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a91b00() {
   double input = input0x1a91b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a924d0() {
   double input = 5.00801;
   input += synapse0x1a92810();
   input += synapse0x1a92850();
   input += synapse0x1a92890();
   input += synapse0x1a928d0();
   input += synapse0x1a92910();
   input += synapse0x1a92950();
   input += synapse0x1a92990();
   input += synapse0x1a929d0();
   input += synapse0x1a92a10();
   input += synapse0x1a92a50();
   input += synapse0x1a92a90();
   input += synapse0x1a92ad0();
   input += synapse0x1a92b10();
   input += synapse0x1a92b50();
   input += synapse0x1a92b90();
   input += synapse0x1a92bd0();
   input += synapse0x1a92660();
   input += synapse0x1a926a0();
   input += synapse0x1a92d20();
   input += synapse0x1a92d60();
   input += synapse0x1a92da0();
   input += synapse0x1a92de0();
   input += synapse0x1a92e20();
   input += synapse0x1a92e60();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a924d0() {
   double input = input0x1a924d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a92ea0() {
   double input = -2.79812;
   input += synapse0x1a931e0();
   input += synapse0x1a93220();
   input += synapse0x1a93260();
   input += synapse0x1a932a0();
   input += synapse0x1a932e0();
   input += synapse0x1a93320();
   input += synapse0x1a93360();
   input += synapse0x1a933a0();
   input += synapse0x1a933e0();
   input += synapse0x1a93420();
   input += synapse0x1a93460();
   input += synapse0x1a934a0();
   input += synapse0x1a934e0();
   input += synapse0x1a93520();
   input += synapse0x1a93560();
   input += synapse0x1a935a0();
   input += synapse0x1a93030();
   input += synapse0x1a93070();
   input += synapse0x1a936f0();
   input += synapse0x1a93730();
   input += synapse0x1a93770();
   input += synapse0x1a937b0();
   input += synapse0x1a937f0();
   input += synapse0x1a93830();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a92ea0() {
   double input = input0x1a92ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a93870() {
   double input = 0.865211;
   input += synapse0x1a93bb0();
   input += synapse0x1a88180();
   input += synapse0x1a881c0();
   input += synapse0x1a88200();
   input += synapse0x1a88450();
   input += synapse0x1a88490();
   input += synapse0x1a884d0();
   input += synapse0x1a88720();
   input += synapse0x1a88760();
   input += synapse0x1a889b0();
   input += synapse0x1a889f0();
   input += synapse0x1a88a30();
   input += synapse0x1a88c80();
   input += synapse0x1a88cc0();
   input += synapse0x1a88f10();
   input += synapse0x1a88f50();
   input += synapse0x1a93a00();
   input += synapse0x1a93a40();
   input += synapse0x1a890a0();
   input += synapse0x1a895b0();
   input += synapse0x1a895f0();
   input += synapse0x1a89630();
   input += synapse0x1a89880();
   input += synapse0x1a898c0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a93870() {
   double input = input0x1a93870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a89900() {
   double input = -0.358065;
   input += synapse0x1a89170();
   input += synapse0x1a891b0();
   input += synapse0x1a891f0();
   input += synapse0x1a89230();
   input += synapse0x1a89bb0();
   input += synapse0x1a95f00();
   input += synapse0x1a95f40();
   input += synapse0x1a95f80();
   input += synapse0x1a95fc0();
   input += synapse0x1a96000();
   input += synapse0x1a96040();
   input += synapse0x1a96080();
   input += synapse0x1a960c0();
   input += synapse0x1a96100();
   input += synapse0x1a96140();
   input += synapse0x1a96180();
   input += synapse0x1a89a90();
   input += synapse0x1a89ad0();
   input += synapse0x1a962d0();
   input += synapse0x1a96310();
   input += synapse0x1a96350();
   input += synapse0x1a96390();
   input += synapse0x1a963d0();
   input += synapse0x1a96410();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a89900() {
   double input = input0x1a89900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a96450() {
   double input = -0.18975;
   input += synapse0x1a96790();
   input += synapse0x1a967d0();
   input += synapse0x1a96810();
   input += synapse0x1a96850();
   input += synapse0x1a96890();
   input += synapse0x1a968d0();
   input += synapse0x1a96910();
   input += synapse0x1a96950();
   input += synapse0x1a96990();
   input += synapse0x1a969d0();
   input += synapse0x1a96a10();
   input += synapse0x1a96a50();
   input += synapse0x1a96a90();
   input += synapse0x1a96ad0();
   input += synapse0x1a96b10();
   input += synapse0x1a96b50();
   input += synapse0x1a965e0();
   input += synapse0x1a96620();
   input += synapse0x1a96ca0();
   input += synapse0x1a96ce0();
   input += synapse0x1a96d20();
   input += synapse0x1a96d60();
   input += synapse0x1a96da0();
   input += synapse0x1a96de0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a96450() {
   double input = input0x1a96450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a96e20() {
   double input = -1.6592;
   input += synapse0x1a97160();
   input += synapse0x1a971a0();
   input += synapse0x1a971e0();
   input += synapse0x1a97220();
   input += synapse0x1a97260();
   input += synapse0x1a972a0();
   input += synapse0x1a972e0();
   input += synapse0x1a97320();
   input += synapse0x1a97360();
   input += synapse0x1a973a0();
   input += synapse0x1a973e0();
   input += synapse0x1a97420();
   input += synapse0x1a97460();
   input += synapse0x1a974a0();
   input += synapse0x1a974e0();
   input += synapse0x1a97520();
   input += synapse0x1a96fb0();
   input += synapse0x1a96ff0();
   input += synapse0x1a97670();
   input += synapse0x1a976b0();
   input += synapse0x1a976f0();
   input += synapse0x1a97730();
   input += synapse0x1a97770();
   input += synapse0x1a977b0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a96e20() {
   double input = input0x1a96e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a977f0() {
   double input = -3.05863;
   input += synapse0x1a97b30();
   input += synapse0x1a97b70();
   input += synapse0x1a97bb0();
   input += synapse0x1a97bf0();
   input += synapse0x1a97c30();
   input += synapse0x1a97c70();
   input += synapse0x1a97cb0();
   input += synapse0x1a97cf0();
   input += synapse0x1a97d30();
   input += synapse0x1a97d70();
   input += synapse0x1a97db0();
   input += synapse0x1a97df0();
   input += synapse0x1a97e30();
   input += synapse0x1a97e70();
   input += synapse0x1a97eb0();
   input += synapse0x1a97ef0();
   input += synapse0x1a97980();
   input += synapse0x1a979c0();
   input += synapse0x1a98040();
   input += synapse0x1a98080();
   input += synapse0x1a980c0();
   input += synapse0x1a98100();
   input += synapse0x1a98140();
   input += synapse0x1a98180();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a977f0() {
   double input = input0x1a977f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a981c0() {
   double input = 2.77429;
   input += synapse0x1a98500();
   input += synapse0x1a98540();
   input += synapse0x1a98580();
   input += synapse0x1a985c0();
   input += synapse0x1a98600();
   input += synapse0x1a98640();
   input += synapse0x1a98680();
   input += synapse0x1a986c0();
   input += synapse0x1a98700();
   input += synapse0x1a98740();
   input += synapse0x1a98780();
   input += synapse0x1a987c0();
   input += synapse0x1a98800();
   input += synapse0x1a98840();
   input += synapse0x1a98880();
   input += synapse0x1a988c0();
   input += synapse0x1a98350();
   input += synapse0x1a98390();
   input += synapse0x1a98a10();
   input += synapse0x1a98a50();
   input += synapse0x1a98a90();
   input += synapse0x1a98ad0();
   input += synapse0x1a98b10();
   input += synapse0x1a98b50();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a981c0() {
   double input = input0x1a981c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a98b90() {
   double input = -0.350735;
   input += synapse0x1a98ed0();
   input += synapse0x1a98f10();
   input += synapse0x1a98f50();
   input += synapse0x1a98f90();
   input += synapse0x1a98fd0();
   input += synapse0x1a99010();
   input += synapse0x1a99050();
   input += synapse0x1a99090();
   input += synapse0x1a990d0();
   input += synapse0x1a99110();
   input += synapse0x1a99150();
   input += synapse0x1a99190();
   input += synapse0x1a991d0();
   input += synapse0x1a99210();
   input += synapse0x1a99250();
   input += synapse0x1a99290();
   input += synapse0x1a98d20();
   input += synapse0x1a98d60();
   input += synapse0x1a993e0();
   input += synapse0x1a99420();
   input += synapse0x1a99460();
   input += synapse0x1a994a0();
   input += synapse0x1a994e0();
   input += synapse0x1a99520();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a98b90() {
   double input = input0x1a98b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a99560() {
   double input = 0.110683;
   input += synapse0x1a998a0();
   input += synapse0x1a998e0();
   input += synapse0x1a99920();
   input += synapse0x1a99960();
   input += synapse0x1a999a0();
   input += synapse0x1a999e0();
   input += synapse0x1a99a20();
   input += synapse0x1a99a60();
   input += synapse0x1a99aa0();
   input += synapse0x1a99ae0();
   input += synapse0x1a99b20();
   input += synapse0x1a99b60();
   input += synapse0x1a99ba0();
   input += synapse0x1a99be0();
   input += synapse0x1a99c20();
   input += synapse0x1a99c60();
   input += synapse0x1a996f0();
   input += synapse0x1a99730();
   input += synapse0x1a99db0();
   input += synapse0x1a99df0();
   input += synapse0x1a99e30();
   input += synapse0x1a99e70();
   input += synapse0x1a99eb0();
   input += synapse0x1a99ef0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a99560() {
   double input = input0x1a99560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a99f30() {
   double input = 0.448767;
   input += synapse0x1a9a270();
   input += synapse0x1a9a2b0();
   input += synapse0x1a9a2f0();
   input += synapse0x1a9a330();
   input += synapse0x1a9a370();
   input += synapse0x1a9a3b0();
   input += synapse0x1a9a3f0();
   input += synapse0x1a9a430();
   input += synapse0x1a9a470();
   input += synapse0x1a9a4b0();
   input += synapse0x1a9a4f0();
   input += synapse0x1a9a530();
   input += synapse0x1a9a570();
   input += synapse0x1a9a5b0();
   input += synapse0x1a9a5f0();
   input += synapse0x1a9a630();
   input += synapse0x1a9a0c0();
   input += synapse0x1a9a100();
   input += synapse0x1a9a780();
   input += synapse0x1a9a7c0();
   input += synapse0x1a9a800();
   input += synapse0x1a9a840();
   input += synapse0x1a9a880();
   input += synapse0x1a9a8c0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a99f30() {
   double input = input0x1a99f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a9a900() {
   double input = 0.885926;
   input += synapse0x1a83370();
   input += synapse0x1a833b0();
   input += synapse0x1a833f0();
   input += synapse0x1a83430();
   input += synapse0x1a83470();
   input += synapse0x1a834b0();
   input += synapse0x1a834f0();
   input += synapse0x1a83530();
   input += synapse0x1a9b050();
   input += synapse0x1a9b090();
   input += synapse0x1a9b0d0();
   input += synapse0x1a9b110();
   input += synapse0x1a9b150();
   input += synapse0x1a9b190();
   input += synapse0x1a9b1d0();
   input += synapse0x1a9b210();
   input += synapse0x1a9aa90();
   input += synapse0x1a9aad0();
   input += synapse0x1a9b360();
   input += synapse0x1a9b3a0();
   input += synapse0x1a9b3e0();
   input += synapse0x1a9b420();
   input += synapse0x1a9b460();
   input += synapse0x1a9b4a0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a9a900() {
   double input = input0x1a9a900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a9b4e0() {
   double input = -0.294844;
   input += synapse0x1a9b820();
   input += synapse0x1a9b860();
   input += synapse0x1a9b8a0();
   input += synapse0x1a9b8e0();
   input += synapse0x1a9b920();
   input += synapse0x1a9b960();
   input += synapse0x1a9b9a0();
   input += synapse0x1a9b9e0();
   input += synapse0x1a9ba20();
   input += synapse0x1a9ba60();
   input += synapse0x1a9baa0();
   input += synapse0x1a9bae0();
   input += synapse0x1a9bb20();
   input += synapse0x1a9bb60();
   input += synapse0x1a9bba0();
   input += synapse0x1a9bbe0();
   input += synapse0x1a9b670();
   input += synapse0x1a9b6b0();
   input += synapse0x1a9bd30();
   input += synapse0x1a9bd70();
   input += synapse0x1a9bdb0();
   input += synapse0x1a9bdf0();
   input += synapse0x1a9be30();
   input += synapse0x1a9be70();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a9b4e0() {
   double input = input0x1a9b4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a9beb0() {
   double input = 5.68124;
   input += synapse0x1a9c1f0();
   input += synapse0x1a9c230();
   input += synapse0x1a9c270();
   input += synapse0x1a9c2b0();
   input += synapse0x1a9c2f0();
   input += synapse0x1a9c330();
   input += synapse0x1a9c370();
   input += synapse0x1a9c3b0();
   input += synapse0x1a9c3f0();
   input += synapse0x1a9c430();
   input += synapse0x1a9c470();
   input += synapse0x1a9c4b0();
   input += synapse0x1a9c4f0();
   input += synapse0x1a9c530();
   input += synapse0x1a9c570();
   input += synapse0x1a9c5b0();
   input += synapse0x1a9c040();
   input += synapse0x1a9c080();
   input += synapse0x1a8cbb0();
   input += synapse0x1a8cbf0();
   input += synapse0x1a8cc30();
   input += synapse0x1a8cc70();
   input += synapse0x1a8ccb0();
   input += synapse0x1a8ccf0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a9beb0() {
   double input = input0x1a9beb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a8cd30() {
   double input = -0.457617;
   input += synapse0x1a8d070();
   input += synapse0x1a8d0b0();
   input += synapse0x1a8d0f0();
   input += synapse0x1a8d130();
   input += synapse0x1a8d170();
   input += synapse0x1a8d1b0();
   input += synapse0x1a8d1f0();
   input += synapse0x1a8d230();
   input += synapse0x1a8d270();
   input += synapse0x1a8d2b0();
   input += synapse0x1a8d2f0();
   input += synapse0x1a8d330();
   input += synapse0x1a8d370();
   input += synapse0x1a8d3b0();
   input += synapse0x1a8d3f0();
   input += synapse0x1a8d430();
   input += synapse0x1a8cec0();
   input += synapse0x1a8cf00();
   input += synapse0x1a8d580();
   input += synapse0x1a8d5c0();
   input += synapse0x1a8d600();
   input += synapse0x1a8d640();
   input += synapse0x1a8d680();
   input += synapse0x1a8d6c0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a8cd30() {
   double input = input0x1a8cd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a8d700() {
   double input = -0.657957;
   input += synapse0x1a8da40();
   input += synapse0x1a8da80();
   input += synapse0x1a8dac0();
   input += synapse0x1a8db00();
   input += synapse0x1a8db40();
   input += synapse0x1a8db80();
   input += synapse0x1a8dbc0();
   input += synapse0x1a8dc00();
   input += synapse0x1a8dc40();
   input += synapse0x1a8dc80();
   input += synapse0x1a8dcc0();
   input += synapse0x1a8dd00();
   input += synapse0x1a8dd40();
   input += synapse0x1a8dd80();
   input += synapse0x1a8ddc0();
   input += synapse0x1a8de00();
   input += synapse0x1a8d890();
   input += synapse0x1a8d8d0();
   input += synapse0x1a8df50();
   input += synapse0x1a8df90();
   input += synapse0x1a8dfd0();
   input += synapse0x1a8e010();
   input += synapse0x1a8e050();
   input += synapse0x1a8e090();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a8d700() {
   double input = input0x1a8d700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1a8e0d0() {
   double input = 0.0668326;
   input += synapse0x1a8e410();
   input += synapse0x1a8e450();
   input += synapse0x1a8e490();
   input += synapse0x1a8e4d0();
   input += synapse0x1a8e510();
   input += synapse0x1a8e550();
   input += synapse0x1a8e590();
   input += synapse0x1a8e5d0();
   input += synapse0x1a8e610();
   input += synapse0x1a8e650();
   input += synapse0x1a8e690();
   input += synapse0x1a8e6d0();
   input += synapse0x1a8e710();
   input += synapse0x1a8e750();
   input += synapse0x1a8e790();
   input += synapse0x1a8e7d0();
   input += synapse0x1a8e260();
   input += synapse0x1a8e2a0();
   input += synapse0x1a8e920();
   input += synapse0x1a8e960();
   input += synapse0x1a8e9a0();
   input += synapse0x1a8e9e0();
   input += synapse0x1a8ea20();
   input += synapse0x1a8ea60();
   return input;
}

double NNfunction_NN_1_2::neuron0x1a8e0d0() {
   double input = input0x1a8e0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aa0710() {
   double input = 0.0702586;
   input += synapse0x1aa0930();
   input += synapse0x1aa0970();
   input += synapse0x1aa09b0();
   input += synapse0x1aa09f0();
   input += synapse0x1aa0a30();
   input += synapse0x1aa0a70();
   input += synapse0x1aa0ab0();
   input += synapse0x1aa0af0();
   input += synapse0x1aa0b30();
   input += synapse0x1aa0b70();
   input += synapse0x1aa0bb0();
   input += synapse0x1aa0bf0();
   input += synapse0x1aa0c30();
   input += synapse0x1aa0c70();
   input += synapse0x1aa0cb0();
   input += synapse0x1aa0cf0();
   input += synapse0x1a8eaa0();
   input += synapse0x1a8eae0();
   input += synapse0x1aa0e40();
   input += synapse0x1aa0e80();
   input += synapse0x1aa0ec0();
   input += synapse0x1aa0f00();
   input += synapse0x1aa0f40();
   input += synapse0x1aa0f80();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aa0710() {
   double input = input0x1aa0710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aa0fc0() {
   double input = 0.298363;
   input += synapse0x1aa1300();
   input += synapse0x1aa1340();
   input += synapse0x1aa1380();
   input += synapse0x1aa13c0();
   input += synapse0x1aa1400();
   input += synapse0x1aa1440();
   input += synapse0x1aa1480();
   input += synapse0x1aa14c0();
   input += synapse0x1aa1500();
   input += synapse0x1aa1540();
   input += synapse0x1aa1580();
   input += synapse0x1aa15c0();
   input += synapse0x1aa1600();
   input += synapse0x1aa1640();
   input += synapse0x1aa1680();
   input += synapse0x1aa16c0();
   input += synapse0x1aa1150();
   input += synapse0x1aa1190();
   input += synapse0x1aa1810();
   input += synapse0x1aa1850();
   input += synapse0x1aa1890();
   input += synapse0x1aa18d0();
   input += synapse0x1aa1910();
   input += synapse0x1aa1950();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aa0fc0() {
   double input = input0x1aa0fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aa1990() {
   double input = -5.39769;
   input += synapse0x1aa1cd0();
   input += synapse0x1aa1d10();
   input += synapse0x1aa1d50();
   input += synapse0x1aa1d90();
   input += synapse0x1aa1dd0();
   input += synapse0x1aa1e10();
   input += synapse0x1aa1e50();
   input += synapse0x1aa1e90();
   input += synapse0x1aa1ed0();
   input += synapse0x1aa1f10();
   input += synapse0x1aa1f50();
   input += synapse0x1aa1f90();
   input += synapse0x1aa1fd0();
   input += synapse0x1aa2010();
   input += synapse0x1aa2050();
   input += synapse0x1aa2090();
   input += synapse0x1aa1b20();
   input += synapse0x1aa1b60();
   input += synapse0x1aa21e0();
   input += synapse0x1aa2220();
   input += synapse0x1aa2260();
   input += synapse0x1aa22a0();
   input += synapse0x1aa22e0();
   input += synapse0x1aa2320();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aa1990() {
   double input = input0x1aa1990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aa2360() {
   double input = -0.348773;
   input += synapse0x1aa26a0();
   input += synapse0x1aa26e0();
   input += synapse0x1aa2720();
   input += synapse0x1aa2760();
   input += synapse0x1aa27a0();
   input += synapse0x1aa27e0();
   input += synapse0x1aa2820();
   input += synapse0x1aa2860();
   input += synapse0x1aa28a0();
   input += synapse0x1aa28e0();
   input += synapse0x1aa2920();
   input += synapse0x1aa2960();
   input += synapse0x1aa29a0();
   input += synapse0x1aa29e0();
   input += synapse0x1aa2a20();
   input += synapse0x1aa2a60();
   input += synapse0x1aa24f0();
   input += synapse0x1aa2530();
   input += synapse0x1aa2bb0();
   input += synapse0x1aa2bf0();
   input += synapse0x1aa2c30();
   input += synapse0x1aa2c70();
   input += synapse0x1aa2cb0();
   input += synapse0x1aa2cf0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aa2360() {
   double input = input0x1aa2360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aa9560() {
   double input = -1.08498;
   input += synapse0x1a7e140();
   input += synapse0x1a7e180();
   input += synapse0x1a7f6a0();
   input += synapse0x1a7f6e0();
   input += synapse0x1a81170();
   input += synapse0x1a811b0();
   input += synapse0x1a81f40();
   input += synapse0x1a81f80();
   input += synapse0x1a82910();
   input += synapse0x1a82950();
   input += synapse0x1a832e0();
   input += synapse0x1a83320();
   input += synapse0x1a83dc0();
   input += synapse0x1a83e00();
   input += synapse0x1a84790();
   input += synapse0x1a847d0();
   input += synapse0x1a81870();
   input += synapse0x1a818b0();
   input += synapse0x1a86340();
   input += synapse0x1a86380();
   input += synapse0x1a86d10();
   input += synapse0x1a86d50();
   input += synapse0x1a876e0();
   input += synapse0x1a87720();
   input += synapse0x1a880b0();
   input += synapse0x1a880f0();
   input += synapse0x1a7b140();
   input += synapse0x1a7b180();
   input += synapse0x1a8a1a0();
   input += synapse0x1a8a1e0();
   input += synapse0x1a8ab70();
   input += synapse0x1a8abb0();
   input += synapse0x1a8b540();
   input += synapse0x1a8b580();
   input += synapse0x1a8bf10();
   input += synapse0x1a8bf50();
   input += synapse0x1a8c8e0();
   input += synapse0x1a8c920();
   input += synapse0x1a85430();
   input += synapse0x1a85470();
   input += synapse0x1a8ece0();
   input += synapse0x1a8ed20();
   input += synapse0x1a8f670();
   input += synapse0x1a8f6b0();
   input += synapse0x1a90040();
   input += synapse0x1a90080();
   input += synapse0x1a90a10();
   input += synapse0x1a90a50();
   input += synapse0x1a913e0();
   input += synapse0x1a91420();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aa9560() {
   double input = input0x1aa9560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aa9900() {
   double input = 0.429984;
   input += synapse0x1a93b20();
   input += synapse0x1a93b60();
   input += synapse0x1a890e0();
   input += synapse0x1a89120();
   input += synapse0x1a96700();
   input += synapse0x1a96740();
   input += synapse0x1a970d0();
   input += synapse0x1a97110();
   input += synapse0x1a97aa0();
   input += synapse0x1a97ae0();
   input += synapse0x1a98470();
   input += synapse0x1a984b0();
   input += synapse0x1a98e40();
   input += synapse0x1a98e80();
   input += synapse0x1a99810();
   input += synapse0x1a99850();
   input += synapse0x1a9a1e0();
   input += synapse0x1a9a220();
   input += synapse0x1a9abb0();
   input += synapse0x1a9abf0();
   input += synapse0x1a9b790();
   input += synapse0x1a9b7d0();
   input += synapse0x1a9c160();
   input += synapse0x1a9c1a0();
   input += synapse0x1a8cfe0();
   input += synapse0x1a8d020();
   input += synapse0x1a8d9b0();
   input += synapse0x1a8d9f0();
   input += synapse0x1a8e380();
   input += synapse0x1a8e3c0();
   input += synapse0x1aa08a0();
   input += synapse0x1aa08e0();
   input += synapse0x1aa1270();
   input += synapse0x1aa12b0();
   input += synapse0x1aa1c40();
   input += synapse0x1aa1c80();
   input += synapse0x1aa2610();
   input += synapse0x1aa2650();
   input += synapse0x1a7d5a0();
   input += synapse0x1a7d5e0();
   input += synapse0x1a91db0();
   input += synapse0x1a91df0();
   input += synapse0x1aa2d30();
   input += synapse0x1aa2d70();
   input += synapse0x1aa2db0();
   input += synapse0x1aa2df0();
   input += synapse0x1aa9ca0();
   input += synapse0x1aa9ce0();
   input += synapse0x1aa9d20();
   input += synapse0x1aa9d60();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aa9900() {
   double input = input0x1aa9900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aa9da0() {
   double input = -0.97539;
   input += synapse0x1aaa0e0();
   input += synapse0x1aaa120();
   input += synapse0x1aaa160();
   input += synapse0x1aaa1a0();
   input += synapse0x1aaa1e0();
   input += synapse0x1aaa220();
   input += synapse0x1aaa260();
   input += synapse0x1aaa2a0();
   input += synapse0x1aaa2e0();
   input += synapse0x1aaa320();
   input += synapse0x1aaa360();
   input += synapse0x1aaa3a0();
   input += synapse0x1aaa3e0();
   input += synapse0x1aaa420();
   input += synapse0x1aaa460();
   input += synapse0x1aaa4a0();
   input += synapse0x1aa9f30();
   input += synapse0x1aa9f70();
   input += synapse0x1aaa5f0();
   input += synapse0x1aaa630();
   input += synapse0x1aaa670();
   input += synapse0x1aaa6b0();
   input += synapse0x1aaa6f0();
   input += synapse0x1aaa730();
   input += synapse0x1aaa770();
   input += synapse0x1aaa7b0();
   input += synapse0x1aaa7f0();
   input += synapse0x1aaa830();
   input += synapse0x1aaa870();
   input += synapse0x1aaa8b0();
   input += synapse0x1aaa8f0();
   input += synapse0x1aaa930();
   input += synapse0x1aaa4e0();
   input += synapse0x1aaa520();
   input += synapse0x1aaa560();
   input += synapse0x1aaa5a0();
   input += synapse0x1aaab80();
   input += synapse0x1aaabc0();
   input += synapse0x1aaac00();
   input += synapse0x1aaac40();
   input += synapse0x1aaac80();
   input += synapse0x1aaacc0();
   input += synapse0x1aaad00();
   input += synapse0x1aaad40();
   input += synapse0x1aaad80();
   input += synapse0x1aaadc0();
   input += synapse0x1aaae00();
   input += synapse0x1aaae40();
   input += synapse0x1aaae80();
   input += synapse0x1aaaec0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aa9da0() {
   double input = input0x1aa9da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aaaf00() {
   double input = -0.803008;
   input += synapse0x1aab240();
   input += synapse0x1aab280();
   input += synapse0x1aab2c0();
   input += synapse0x1aab300();
   input += synapse0x1aab340();
   input += synapse0x1aab380();
   input += synapse0x1aab3c0();
   input += synapse0x1aab400();
   input += synapse0x1aab440();
   input += synapse0x1aab480();
   input += synapse0x1aab4c0();
   input += synapse0x1aab500();
   input += synapse0x1aab540();
   input += synapse0x1aab580();
   input += synapse0x1aab5c0();
   input += synapse0x1aab600();
   input += synapse0x1aab090();
   input += synapse0x1aab0d0();
   input += synapse0x1aab750();
   input += synapse0x1aab790();
   input += synapse0x1aab7d0();
   input += synapse0x1aab810();
   input += synapse0x1aab850();
   input += synapse0x1aab890();
   input += synapse0x1aab8d0();
   input += synapse0x1aab910();
   input += synapse0x1aab950();
   input += synapse0x1aab990();
   input += synapse0x1aab9d0();
   input += synapse0x1aaba10();
   input += synapse0x1aaba50();
   input += synapse0x1aaba90();
   input += synapse0x1aab640();
   input += synapse0x1aab680();
   input += synapse0x1aab6c0();
   input += synapse0x1aab700();
   input += synapse0x1aabce0();
   input += synapse0x1aabd20();
   input += synapse0x1aabd60();
   input += synapse0x1aabda0();
   input += synapse0x1aabde0();
   input += synapse0x1aabe20();
   input += synapse0x1aabe60();
   input += synapse0x1aabea0();
   input += synapse0x1aabee0();
   input += synapse0x1aabf20();
   input += synapse0x1aabf60();
   input += synapse0x1aabfa0();
   input += synapse0x1aabfe0();
   input += synapse0x1aac020();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aaaf00() {
   double input = input0x1aaaf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aac060() {
   double input = 1.29016;
   input += synapse0x1aac3a0();
   input += synapse0x1aac3e0();
   input += synapse0x1aac420();
   input += synapse0x1aac460();
   input += synapse0x1aac4a0();
   input += synapse0x1aac4e0();
   input += synapse0x1aac520();
   input += synapse0x1aac560();
   input += synapse0x1aac5a0();
   input += synapse0x1aac5e0();
   input += synapse0x1aac620();
   input += synapse0x1aac660();
   input += synapse0x1aac6a0();
   input += synapse0x1aac6e0();
   input += synapse0x1aac720();
   input += synapse0x1aac760();
   input += synapse0x1aac1f0();
   input += synapse0x1aac230();
   input += synapse0x1aac8b0();
   input += synapse0x1aac8f0();
   input += synapse0x1aac930();
   input += synapse0x1aac970();
   input += synapse0x1aac9b0();
   input += synapse0x1aac9f0();
   input += synapse0x1aaca30();
   input += synapse0x1aaca70();
   input += synapse0x1aacab0();
   input += synapse0x1aacaf0();
   input += synapse0x1aacb30();
   input += synapse0x1aacb70();
   input += synapse0x1aacbb0();
   input += synapse0x1aacbf0();
   input += synapse0x1aac7a0();
   input += synapse0x1aac7e0();
   input += synapse0x1aac820();
   input += synapse0x1aac860();
   input += synapse0x1aace40();
   input += synapse0x1aace80();
   input += synapse0x1aacec0();
   input += synapse0x1aacf00();
   input += synapse0x1aacf40();
   input += synapse0x1aacf80();
   input += synapse0x1aacfc0();
   input += synapse0x1aad000();
   input += synapse0x1aad040();
   input += synapse0x1aad080();
   input += synapse0x1aad0c0();
   input += synapse0x1aad100();
   input += synapse0x1aad140();
   input += synapse0x1aad180();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aac060() {
   double input = input0x1aac060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_1_2::input0x1aad1c0() {
   double input = -7.57486;
   input += synapse0x1aad3e0();
   input += synapse0x1aad420();
   input += synapse0x1aad460();
   input += synapse0x1aad4a0();
   input += synapse0x1aad4e0();
   return input;
}

double NNfunction_NN_1_2::neuron0x1aad1c0() {
   double input = input0x1aad1c0();
   return (input * 1)+0;
}

double NNfunction_NN_1_2::synapse0x1a7d630() {
   return (neuron0x1a78230()*0.136585);
}

double NNfunction_NN_1_2::synapse0x1a7d670() {
   return (neuron0x1a784e0()*-0.381171);
}

double NNfunction_NN_1_2::synapse0x1a7d6b0() {
   return (neuron0x1a78820()*-0.345631);
}

double NNfunction_NN_1_2::synapse0x1a7d6f0() {
   return (neuron0x1a78b60()*0.61533);
}

double NNfunction_NN_1_2::synapse0x1a7d730() {
   return (neuron0x1a78ea0()*-0.292124);
}

double NNfunction_NN_1_2::synapse0x1a7d770() {
   return (neuron0x1a791e0()*0.0547046);
}

double NNfunction_NN_1_2::synapse0x1a7d7b0() {
   return (neuron0x1a79520()*0.237624);
}

double NNfunction_NN_1_2::synapse0x1a7d7f0() {
   return (neuron0x1a79860()*-0.082906);
}

double NNfunction_NN_1_2::synapse0x1a7d830() {
   return (neuron0x1a79ba0()*0.337866);
}

double NNfunction_NN_1_2::synapse0x1a7d870() {
   return (neuron0x1a79ee0()*0.282762);
}

double NNfunction_NN_1_2::synapse0x1a7d8b0() {
   return (neuron0x1a7a220()*-0.45231);
}

double NNfunction_NN_1_2::synapse0x1a7d8f0() {
   return (neuron0x1a7a560()*0.0855596);
}

double NNfunction_NN_1_2::synapse0x1a7d930() {
   return (neuron0x1a7a8a0()*0.19438);
}

double NNfunction_NN_1_2::synapse0x1a7d970() {
   return (neuron0x1a7abe0()*0.00786006);
}

double NNfunction_NN_1_2::synapse0x1a7d9b0() {
   return (neuron0x1a7af20()*-0.204723);
}

double NNfunction_NN_1_2::synapse0x1a7d9f0() {
   return (neuron0x1a7b260()*0.040294);
}

double NNfunction_NN_1_2::synapse0x1a7d480() {
   return (neuron0x1a7b5a0()*-0.141282);
}

double NNfunction_NN_1_2::synapse0x1a7d4c0() {
   return (neuron0x1a7bb00()*-0.133363);
}

double NNfunction_NN_1_2::synapse0x182a940() {
   return (neuron0x1a7be40()*0.0246011);
}

double NNfunction_NN_1_2::synapse0x182a980() {
   return (neuron0x1a7c180()*-0.0705247);
}

double NNfunction_NN_1_2::synapse0x1a7da30() {
   return (neuron0x1a7c4c0()*0.448444);
}

double NNfunction_NN_1_2::synapse0x1a7da70() {
   return (neuron0x1a7c800()*-0.254755);
}

double NNfunction_NN_1_2::synapse0x1a7dab0() {
   return (neuron0x1a7cb40()*0.0458837);
}

double NNfunction_NN_1_2::synapse0x1a7daf0() {
   return (neuron0x1a7ce80()*0.981417);
}

double NNfunction_NN_1_2::synapse0x1a7de70() {
   return (neuron0x1a78230()*-0.0199893);
}

double NNfunction_NN_1_2::synapse0x1a7deb0() {
   return (neuron0x1a784e0()*0.0563268);
}

double NNfunction_NN_1_2::synapse0x1a7def0() {
   return (neuron0x1a78820()*-0.399398);
}

double NNfunction_NN_1_2::synapse0x1a7df30() {
   return (neuron0x1a78b60()*-0.0465691);
}

double NNfunction_NN_1_2::synapse0x1a7df70() {
   return (neuron0x1a78ea0()*-0.00689755);
}

double NNfunction_NN_1_2::synapse0x1a7dfb0() {
   return (neuron0x1a791e0()*0.0411443);
}

double NNfunction_NN_1_2::synapse0x1a7dff0() {
   return (neuron0x1a79520()*0.051198);
}

double NNfunction_NN_1_2::synapse0x1a7e030() {
   return (neuron0x1a79860()*0.0281403);
}

double NNfunction_NN_1_2::synapse0x1a7e070() {
   return (neuron0x1a79ba0()*0.00550698);
}

double NNfunction_NN_1_2::synapse0x182a790() {
   return (neuron0x1a79ee0()*-0.00696271);
}

double NNfunction_NN_1_2::synapse0x182a7d0() {
   return (neuron0x1a7a220()*0.0023831);
}

double NNfunction_NN_1_2::synapse0x182a810() {
   return (neuron0x1a7a560()*-0.789848);
}

double NNfunction_NN_1_2::synapse0x182a850() {
   return (neuron0x1a7a8a0()*0.119473);
}

double NNfunction_NN_1_2::synapse0x1a7e2c0() {
   return (neuron0x1a7abe0()*0.0227965);
}

double NNfunction_NN_1_2::synapse0x1a7e300() {
   return (neuron0x1a7af20()*-0.0466892);
}

double NNfunction_NN_1_2::synapse0x1a7e340() {
   return (neuron0x1a7b260()*0.0173619);
}

double NNfunction_NN_1_2::synapse0x1a7dcc0() {
   return (neuron0x1a7b5a0()*0.0128872);
}

double NNfunction_NN_1_2::synapse0x1a7dd00() {
   return (neuron0x1a7bb00()*0.0183781);
}

double NNfunction_NN_1_2::synapse0x1a7e490() {
   return (neuron0x1a7be40()*0.00661581);
}

double NNfunction_NN_1_2::synapse0x1a7e4d0() {
   return (neuron0x1a7c180()*-0.0134357);
}

double NNfunction_NN_1_2::synapse0x1a7e510() {
   return (neuron0x1a7c4c0()*-0.00666746);
}

double NNfunction_NN_1_2::synapse0x1a7e550() {
   return (neuron0x1a7c800()*0.0286998);
}

double NNfunction_NN_1_2::synapse0x1a7e590() {
   return (neuron0x1a7cb40()*-0.00381348);
}

double NNfunction_NN_1_2::synapse0x1a7e5d0() {
   return (neuron0x1a7ce80()*-2.26349);
}

double NNfunction_NN_1_2::synapse0x1a7e950() {
   return (neuron0x1a78230()*0.443638);
}

double NNfunction_NN_1_2::synapse0x1a7e990() {
   return (neuron0x1a784e0()*0.101338);
}

double NNfunction_NN_1_2::synapse0x1a7e9d0() {
   return (neuron0x1a78820()*0.57063);
}

double NNfunction_NN_1_2::synapse0x1a7ea10() {
   return (neuron0x1a78b60()*-0.369225);
}

double NNfunction_NN_1_2::synapse0x1a7ea50() {
   return (neuron0x1a78ea0()*0.0388128);
}

double NNfunction_NN_1_2::synapse0x1a7ea90() {
   return (neuron0x1a791e0()*-0.371579);
}

double NNfunction_NN_1_2::synapse0x1a7ead0() {
   return (neuron0x1a79520()*-0.193387);
}

double NNfunction_NN_1_2::synapse0x1a7eb10() {
   return (neuron0x1a79860()*0.166572);
}

double NNfunction_NN_1_2::synapse0x1a7eb50() {
   return (neuron0x1a79ba0()*0.165835);
}

double NNfunction_NN_1_2::synapse0x1a7eb90() {
   return (neuron0x1a79ee0()*-0.547024);
}

double NNfunction_NN_1_2::synapse0x1a7ebd0() {
   return (neuron0x1a7a220()*0.0586452);
}

double NNfunction_NN_1_2::synapse0x1a7ec10() {
   return (neuron0x1a7a560()*0.783193);
}

double NNfunction_NN_1_2::synapse0x1a7ec50() {
   return (neuron0x1a7a8a0()*-0.0850387);
}

double NNfunction_NN_1_2::synapse0x1a7ec90() {
   return (neuron0x1a7abe0()*-0.598549);
}

double NNfunction_NN_1_2::synapse0x1a7ecd0() {
   return (neuron0x1a7af20()*-0.620525);
}

double NNfunction_NN_1_2::synapse0x1a7ed10() {
   return (neuron0x1a7b260()*0.32162);
}

double NNfunction_NN_1_2::synapse0x1a7e7a0() {
   return (neuron0x1a7b5a0()*-0.47014);
}

double NNfunction_NN_1_2::synapse0x1a7e7e0() {
   return (neuron0x1a7bb00()*0.092686);
}

double NNfunction_NN_1_2::synapse0x18387a0() {
   return (neuron0x1a7be40()*0.0946778);
}

double NNfunction_NN_1_2::synapse0x18387e0() {
   return (neuron0x1a7c180()*-0.346657);
}

double NNfunction_NN_1_2::synapse0x1a80c40() {
   return (neuron0x1a7c4c0()*0.301698);
}

double NNfunction_NN_1_2::synapse0x1a80c80() {
   return (neuron0x1a7c800()*0.272773);
}

double NNfunction_NN_1_2::synapse0x1a77f70() {
   return (neuron0x1a7cb40()*-0.257749);
}

double NNfunction_NN_1_2::synapse0x1a77fb0() {
   return (neuron0x1a7ce80()*-0.803321);
}

double NNfunction_NN_1_2::synapse0x18390b0() {
   return (neuron0x1a78230()*0.0225652);
}

double NNfunction_NN_1_2::synapse0x1a7e1d0() {
   return (neuron0x1a784e0()*0.125881);
}

double NNfunction_NN_1_2::synapse0x1a7e210() {
   return (neuron0x1a78820()*-0.380181);
}

double NNfunction_NN_1_2::synapse0x1a7e250() {
   return (neuron0x1a78b60()*0.0717064);
}

double NNfunction_NN_1_2::synapse0x1a7ee60() {
   return (neuron0x1a78ea0()*-0.00156077);
}

double NNfunction_NN_1_2::synapse0x1a7eea0() {
   return (neuron0x1a791e0()*0.0519805);
}

double NNfunction_NN_1_2::synapse0x1a7eee0() {
   return (neuron0x1a79520()*-0.0336767);
}

double NNfunction_NN_1_2::synapse0x1a7ef20() {
   return (neuron0x1a79860()*0.0190761);
}

double NNfunction_NN_1_2::synapse0x1a7ef60() {
   return (neuron0x1a79ba0()*0.000153432);
}

double NNfunction_NN_1_2::synapse0x1a7efa0() {
   return (neuron0x1a79ee0()*0.0331352);
}

double NNfunction_NN_1_2::synapse0x1a7efe0() {
   return (neuron0x1a7a220()*0.0323338);
}

double NNfunction_NN_1_2::synapse0x1a7f020() {
   return (neuron0x1a7a560()*0.0213807);
}

double NNfunction_NN_1_2::synapse0x1a7f060() {
   return (neuron0x1a7a8a0()*-0.271843);
}

double NNfunction_NN_1_2::synapse0x1a7f0a0() {
   return (neuron0x1a7abe0()*-0.0467338);
}

double NNfunction_NN_1_2::synapse0x1a7f0e0() {
   return (neuron0x1a7af20()*0.036517);
}

double NNfunction_NN_1_2::synapse0x1a7f120() {
   return (neuron0x1a7b260()*-0.024541);
}

double NNfunction_NN_1_2::synapse0x1a77ff0() {
   return (neuron0x1a7b5a0()*-0.00837445);
}

double NNfunction_NN_1_2::synapse0x1a78030() {
   return (neuron0x1a7bb00()*-0.00798146);
}

double NNfunction_NN_1_2::synapse0x1a7f270() {
   return (neuron0x1a7be40()*-0.0362012);
}

double NNfunction_NN_1_2::synapse0x1a7f2b0() {
   return (neuron0x1a7c180()*0.0407799);
}

double NNfunction_NN_1_2::synapse0x1a7f2f0() {
   return (neuron0x1a7c4c0()*-0.0447627);
}

double NNfunction_NN_1_2::synapse0x1a7f330() {
   return (neuron0x1a7c800()*-0.0282386);
}

double NNfunction_NN_1_2::synapse0x1a7f370() {
   return (neuron0x1a7cb40()*-0.0264854);
}

double NNfunction_NN_1_2::synapse0x1a7f3b0() {
   return (neuron0x1a7ce80()*-3.2211);
}

double NNfunction_NN_1_2::synapse0x1a7f730() {
   return (neuron0x1a78230()*-0.0215659);
}

double NNfunction_NN_1_2::synapse0x1a7f770() {
   return (neuron0x1a784e0()*8.25813);
}

double NNfunction_NN_1_2::synapse0x1a7f7b0() {
   return (neuron0x1a78820()*-0.627573);
}

double NNfunction_NN_1_2::synapse0x1a7f7f0() {
   return (neuron0x1a78b60()*-0.0154604);
}

double NNfunction_NN_1_2::synapse0x1a7f830() {
   return (neuron0x1a78ea0()*-0.0232053);
}

double NNfunction_NN_1_2::synapse0x1a7f870() {
   return (neuron0x1a791e0()*-0.0371826);
}

double NNfunction_NN_1_2::synapse0x1a7f8b0() {
   return (neuron0x1a79520()*-0.0546997);
}

double NNfunction_NN_1_2::synapse0x1a7f8f0() {
   return (neuron0x1a79860()*0.00184394);
}

double NNfunction_NN_1_2::synapse0x1a7f930() {
   return (neuron0x1a79ba0()*0.0129661);
}

double NNfunction_NN_1_2::synapse0x1a7f970() {
   return (neuron0x1a79ee0()*0.0147159);
}

double NNfunction_NN_1_2::synapse0x1a7f9b0() {
   return (neuron0x1a7a220()*-0.0330033);
}

double NNfunction_NN_1_2::synapse0x1a7f9f0() {
   return (neuron0x1a7a560()*0.083834);
}

double NNfunction_NN_1_2::synapse0x1a7fa30() {
   return (neuron0x1a7a8a0()*-0.061591);
}

double NNfunction_NN_1_2::synapse0x1a7fa70() {
   return (neuron0x1a7abe0()*-0.0624332);
}

double NNfunction_NN_1_2::synapse0x1a7fab0() {
   return (neuron0x1a7af20()*0.026027);
}

double NNfunction_NN_1_2::synapse0x1a7faf0() {
   return (neuron0x1a7b260()*0.0132679);
}

double NNfunction_NN_1_2::synapse0x1a7fc40() {
   return (neuron0x1a7b5a0()*0.0155152);
}

double NNfunction_NN_1_2::synapse0x1a7f580() {
   return (neuron0x1a7bb00()*-0.0667054);
}

double NNfunction_NN_1_2::synapse0x1a7f5c0() {
   return (neuron0x1a7be40()*-0.00595846);
}

double NNfunction_NN_1_2::synapse0x1a80d80() {
   return (neuron0x1a7c180()*-0.015374);
}

double NNfunction_NN_1_2::synapse0x1a80dc0() {
   return (neuron0x1a7c4c0()*-0.0048076);
}

double NNfunction_NN_1_2::synapse0x1a80e00() {
   return (neuron0x1a7c800()*0.00944034);
}

double NNfunction_NN_1_2::synapse0x1a80e40() {
   return (neuron0x1a7cb40()*-0.00416902);
}

double NNfunction_NN_1_2::synapse0x1a80e80() {
   return (neuron0x1a7ce80()*-2.80521);
}

double NNfunction_NN_1_2::synapse0x1a81200() {
   return (neuron0x1a78230()*0.0257046);
}

double NNfunction_NN_1_2::synapse0x1a81240() {
   return (neuron0x1a784e0()*0.590954);
}

double NNfunction_NN_1_2::synapse0x1a81280() {
   return (neuron0x1a78820()*-0.230586);
}

double NNfunction_NN_1_2::synapse0x1a812c0() {
   return (neuron0x1a78b60()*-0.734177);
}

double NNfunction_NN_1_2::synapse0x1a81300() {
   return (neuron0x1a78ea0()*0.0707899);
}

double NNfunction_NN_1_2::synapse0x1a81340() {
   return (neuron0x1a791e0()*-0.140624);
}

double NNfunction_NN_1_2::synapse0x1a81380() {
   return (neuron0x1a79520()*-0.123279);
}

double NNfunction_NN_1_2::synapse0x1a813c0() {
   return (neuron0x1a79860()*-0.0545391);
}

double NNfunction_NN_1_2::synapse0x1a81400() {
   return (neuron0x1a79ba0()*-0.0520719);
}

double NNfunction_NN_1_2::synapse0x1838b10() {
   return (neuron0x1a79ee0()*-0.35527);
}

double NNfunction_NN_1_2::synapse0x1838b50() {
   return (neuron0x1a7a220()*-0.116601);
}

double NNfunction_NN_1_2::synapse0x1838b90() {
   return (neuron0x1a7a560()*-0.713864);
}

double NNfunction_NN_1_2::synapse0x1838bd0() {
   return (neuron0x1a7a8a0()*-0.379448);
}

double NNfunction_NN_1_2::synapse0x1838c10() {
   return (neuron0x1a7abe0()*0.157817);
}

double NNfunction_NN_1_2::synapse0x1838c50() {
   return (neuron0x1a7af20()*-0.115484);
}

double NNfunction_NN_1_2::synapse0x1838c90() {
   return (neuron0x1a7b260()*0.0397033);
}

double NNfunction_NN_1_2::synapse0x1a81050() {
   return (neuron0x1a7b5a0()*-0.0880018);
}

double NNfunction_NN_1_2::synapse0x1a81090() {
   return (neuron0x1a7bb00()*-0.0774673);
}

double NNfunction_NN_1_2::synapse0x1838de0() {
   return (neuron0x1a7be40()*-0.0716996);
}

double NNfunction_NN_1_2::synapse0x1838e20() {
   return (neuron0x1a7c180()*-0.185026);
}

double NNfunction_NN_1_2::synapse0x1838e60() {
   return (neuron0x1a7c4c0()*0.0163758);
}

double NNfunction_NN_1_2::synapse0x1838ea0() {
   return (neuron0x1a7c800()*0.0688445);
}

double NNfunction_NN_1_2::synapse0x1838ee0() {
   return (neuron0x1a7cb40()*-0.071526);
}

double NNfunction_NN_1_2::synapse0x1a81c50() {
   return (neuron0x1a7ce80()*-0.35649);
}

double NNfunction_NN_1_2::synapse0x1a81fd0() {
   return (neuron0x1a78230()*-0.0503235);
}

double NNfunction_NN_1_2::synapse0x1a82010() {
   return (neuron0x1a784e0()*0.142263);
}

double NNfunction_NN_1_2::synapse0x1a82050() {
   return (neuron0x1a78820()*0.253704);
}

double NNfunction_NN_1_2::synapse0x1a82090() {
   return (neuron0x1a78b60()*0.0217056);
}

double NNfunction_NN_1_2::synapse0x1a820d0() {
   return (neuron0x1a78ea0()*-0.115143);
}

double NNfunction_NN_1_2::synapse0x1a82110() {
   return (neuron0x1a791e0()*-0.311365);
}

double NNfunction_NN_1_2::synapse0x1a82150() {
   return (neuron0x1a79520()*0.106178);
}

double NNfunction_NN_1_2::synapse0x1a82190() {
   return (neuron0x1a79860()*0.376797);
}

double NNfunction_NN_1_2::synapse0x1a821d0() {
   return (neuron0x1a79ba0()*0.331226);
}

double NNfunction_NN_1_2::synapse0x1a82210() {
   return (neuron0x1a79ee0()*0.311563);
}

double NNfunction_NN_1_2::synapse0x1a82250() {
   return (neuron0x1a7a220()*0.44727);
}

double NNfunction_NN_1_2::synapse0x1a82290() {
   return (neuron0x1a7a560()*0.480283);
}

double NNfunction_NN_1_2::synapse0x1a822d0() {
   return (neuron0x1a7a8a0()*-0.133894);
}

double NNfunction_NN_1_2::synapse0x1a82310() {
   return (neuron0x1a7abe0()*-0.158928);
}

double NNfunction_NN_1_2::synapse0x1a82350() {
   return (neuron0x1a7af20()*0.0824422);
}

double NNfunction_NN_1_2::synapse0x1a82390() {
   return (neuron0x1a7b260()*-0.344376);
}

double NNfunction_NN_1_2::synapse0x1a81e20() {
   return (neuron0x1a7b5a0()*-0.394038);
}

double NNfunction_NN_1_2::synapse0x1a81e60() {
   return (neuron0x1a7bb00()*-0.0884741);
}

double NNfunction_NN_1_2::synapse0x1a824e0() {
   return (neuron0x1a7be40()*-0.102096);
}

double NNfunction_NN_1_2::synapse0x1a82520() {
   return (neuron0x1a7c180()*0.0503677);
}

double NNfunction_NN_1_2::synapse0x1a82560() {
   return (neuron0x1a7c4c0()*-0.349711);
}

double NNfunction_NN_1_2::synapse0x1a825a0() {
   return (neuron0x1a7c800()*0.557444);
}

double NNfunction_NN_1_2::synapse0x1a825e0() {
   return (neuron0x1a7cb40()*-0.283491);
}

double NNfunction_NN_1_2::synapse0x1a82620() {
   return (neuron0x1a7ce80()*-0.954735);
}

double NNfunction_NN_1_2::synapse0x1a829a0() {
   return (neuron0x1a78230()*0.0342995);
}

double NNfunction_NN_1_2::synapse0x1a829e0() {
   return (neuron0x1a784e0()*-0.0327421);
}

double NNfunction_NN_1_2::synapse0x1a82a20() {
   return (neuron0x1a78820()*1.54698);
}

double NNfunction_NN_1_2::synapse0x1a82a60() {
   return (neuron0x1a78b60()*-0.00955317);
}

double NNfunction_NN_1_2::synapse0x1a82aa0() {
   return (neuron0x1a78ea0()*-0.00151847);
}

double NNfunction_NN_1_2::synapse0x1a82ae0() {
   return (neuron0x1a791e0()*-0.00539717);
}

double NNfunction_NN_1_2::synapse0x1a82b20() {
   return (neuron0x1a79520()*0.00923563);
}

double NNfunction_NN_1_2::synapse0x1a82b60() {
   return (neuron0x1a79860()*-0.0129395);
}

double NNfunction_NN_1_2::synapse0x1a82ba0() {
   return (neuron0x1a79ba0()*0.0210085);
}

double NNfunction_NN_1_2::synapse0x1a82be0() {
   return (neuron0x1a79ee0()*0.0175392);
}

double NNfunction_NN_1_2::synapse0x1a82c20() {
   return (neuron0x1a7a220()*0.0137186);
}

double NNfunction_NN_1_2::synapse0x1a82c60() {
   return (neuron0x1a7a560()*2.2071);
}

double NNfunction_NN_1_2::synapse0x1a82ca0() {
   return (neuron0x1a7a8a0()*-0.0959004);
}

double NNfunction_NN_1_2::synapse0x1a82ce0() {
   return (neuron0x1a7abe0()*-0.0127635);
}

double NNfunction_NN_1_2::synapse0x1a82d20() {
   return (neuron0x1a7af20()*-0.0141977);
}

double NNfunction_NN_1_2::synapse0x1a82d60() {
   return (neuron0x1a7b260()*-0.0157626);
}

double NNfunction_NN_1_2::synapse0x1a827f0() {
   return (neuron0x1a7b5a0()*-0.0111898);
}

double NNfunction_NN_1_2::synapse0x1a82830() {
   return (neuron0x1a7bb00()*0.00114303);
}

double NNfunction_NN_1_2::synapse0x1a82eb0() {
   return (neuron0x1a7be40()*0.0059029);
}

double NNfunction_NN_1_2::synapse0x1a82ef0() {
   return (neuron0x1a7c180()*-0.0129244);
}

double NNfunction_NN_1_2::synapse0x1a82f30() {
   return (neuron0x1a7c4c0()*-0.00010089);
}

double NNfunction_NN_1_2::synapse0x1a82f70() {
   return (neuron0x1a7c800()*-0.00877445);
}

double NNfunction_NN_1_2::synapse0x1a82fb0() {
   return (neuron0x1a7cb40()*-0.00305845);
}

double NNfunction_NN_1_2::synapse0x1a82ff0() {
   return (neuron0x1a7ce80()*-0.00915436);
}

double NNfunction_NN_1_2::synapse0x1a7b9f0() {
   return (neuron0x1a78230()*0.0479207);
}

double NNfunction_NN_1_2::synapse0x1a7ba30() {
   return (neuron0x1a784e0()*1.67714);
}

double NNfunction_NN_1_2::synapse0x1a7ba70() {
   return (neuron0x1a78820()*-0.362307);
}

double NNfunction_NN_1_2::synapse0x1a7bab0() {
   return (neuron0x1a78b60()*-0.0676732);
}

double NNfunction_NN_1_2::synapse0x1a83580() {
   return (neuron0x1a78ea0()*-0.0795744);
}

double NNfunction_NN_1_2::synapse0x1a835c0() {
   return (neuron0x1a791e0()*-0.00665208);
}

double NNfunction_NN_1_2::synapse0x1a83600() {
   return (neuron0x1a79520()*0.017569);
}

double NNfunction_NN_1_2::synapse0x1a83640() {
   return (neuron0x1a79860()*0.0273559);
}

double NNfunction_NN_1_2::synapse0x1a83680() {
   return (neuron0x1a79ba0()*-0.00782397);
}

double NNfunction_NN_1_2::synapse0x1a836c0() {
   return (neuron0x1a79ee0()*0.0292093);
}

double NNfunction_NN_1_2::synapse0x1a83700() {
   return (neuron0x1a7a220()*0.0230534);
}

double NNfunction_NN_1_2::synapse0x1a83740() {
   return (neuron0x1a7a560()*-0.0736782);
}

double NNfunction_NN_1_2::synapse0x1a83780() {
   return (neuron0x1a7a8a0()*0.0720652);
}

double NNfunction_NN_1_2::synapse0x1a837c0() {
   return (neuron0x1a7abe0()*0.052924);
}

double NNfunction_NN_1_2::synapse0x1a83800() {
   return (neuron0x1a7af20()*-0.0397762);
}

double NNfunction_NN_1_2::synapse0x1a83840() {
   return (neuron0x1a7b260()*-0.0312199);
}

double NNfunction_NN_1_2::synapse0x1a831c0() {
   return (neuron0x1a7b5a0()*-0.0317128);
}

double NNfunction_NN_1_2::synapse0x1a83200() {
   return (neuron0x1a7bb00()*0.0466618);
}

double NNfunction_NN_1_2::synapse0x1a83990() {
   return (neuron0x1a7be40()*-0.00699497);
}

double NNfunction_NN_1_2::synapse0x1a839d0() {
   return (neuron0x1a7c180()*0.0310301);
}

double NNfunction_NN_1_2::synapse0x1a83a10() {
   return (neuron0x1a7c4c0()*-0.0243975);
}

double NNfunction_NN_1_2::synapse0x1a83a50() {
   return (neuron0x1a7c800()*-0.0707782);
}

double NNfunction_NN_1_2::synapse0x1a83a90() {
   return (neuron0x1a7cb40()*0.022379);
}

double NNfunction_NN_1_2::synapse0x1a83ad0() {
   return (neuron0x1a7ce80()*3.57674);
}

double NNfunction_NN_1_2::synapse0x1a83e50() {
   return (neuron0x1a78230()*0.00658878);
}

double NNfunction_NN_1_2::synapse0x1a83e90() {
   return (neuron0x1a784e0()*-5.34399);
}

double NNfunction_NN_1_2::synapse0x1a83ed0() {
   return (neuron0x1a78820()*-0.640098);
}

double NNfunction_NN_1_2::synapse0x1a83f10() {
   return (neuron0x1a78b60()*0.00275162);
}

double NNfunction_NN_1_2::synapse0x1a83f50() {
   return (neuron0x1a78ea0()*-0.0169421);
}

double NNfunction_NN_1_2::synapse0x1a83f90() {
   return (neuron0x1a791e0()*0.000781638);
}

double NNfunction_NN_1_2::synapse0x1a83fd0() {
   return (neuron0x1a79520()*0.0025927);
}

double NNfunction_NN_1_2::synapse0x1a84010() {
   return (neuron0x1a79860()*0.00893602);
}

double NNfunction_NN_1_2::synapse0x1a84050() {
   return (neuron0x1a79ba0()*-0.000126722);
}

double NNfunction_NN_1_2::synapse0x1a84090() {
   return (neuron0x1a79ee0()*0.012475);
}

double NNfunction_NN_1_2::synapse0x1a840d0() {
   return (neuron0x1a7a220()*0.0129859);
}

double NNfunction_NN_1_2::synapse0x1a84110() {
   return (neuron0x1a7a560()*-0.0874527);
}

double NNfunction_NN_1_2::synapse0x1a84150() {
   return (neuron0x1a7a8a0()*-0.0163947);
}

double NNfunction_NN_1_2::synapse0x1a84190() {
   return (neuron0x1a7abe0()*0.0170788);
}

double NNfunction_NN_1_2::synapse0x1a841d0() {
   return (neuron0x1a7af20()*-0.0146226);
}

double NNfunction_NN_1_2::synapse0x1a84210() {
   return (neuron0x1a7b260()*-0.00574443);
}

double NNfunction_NN_1_2::synapse0x1a83ca0() {
   return (neuron0x1a7b5a0()*-0.00944873);
}

double NNfunction_NN_1_2::synapse0x1a83ce0() {
   return (neuron0x1a7bb00()*0.0145454);
}

double NNfunction_NN_1_2::synapse0x1a84360() {
   return (neuron0x1a7be40()*-0.00733336);
}

double NNfunction_NN_1_2::synapse0x1a843a0() {
   return (neuron0x1a7c180()*0.0390073);
}

double NNfunction_NN_1_2::synapse0x1a843e0() {
   return (neuron0x1a7c4c0()*-0.00942456);
}

double NNfunction_NN_1_2::synapse0x1a84420() {
   return (neuron0x1a7c800()*-0.00432638);
}

double NNfunction_NN_1_2::synapse0x1a84460() {
   return (neuron0x1a7cb40()*-0.0116393);
}

double NNfunction_NN_1_2::synapse0x1a844a0() {
   return (neuron0x1a7ce80()*3.06303);
}

double NNfunction_NN_1_2::synapse0x1a84820() {
   return (neuron0x1a78230()*-0.0344274);
}

double NNfunction_NN_1_2::synapse0x1a84860() {
   return (neuron0x1a784e0()*0.121883);
}

double NNfunction_NN_1_2::synapse0x1a848a0() {
   return (neuron0x1a78820()*-0.0565682);
}

double NNfunction_NN_1_2::synapse0x1a848e0() {
   return (neuron0x1a78b60()*-0.0186115);
}

double NNfunction_NN_1_2::synapse0x1a84920() {
   return (neuron0x1a78ea0()*0.00628861);
}

double NNfunction_NN_1_2::synapse0x1a84960() {
   return (neuron0x1a791e0()*0.0149972);
}

double NNfunction_NN_1_2::synapse0x1a849a0() {
   return (neuron0x1a79520()*0.0272542);
}

double NNfunction_NN_1_2::synapse0x1a849e0() {
   return (neuron0x1a79860()*0.0020094);
}

double NNfunction_NN_1_2::synapse0x1a84a20() {
   return (neuron0x1a79ba0()*-0.00927244);
}

double NNfunction_NN_1_2::synapse0x1a84a60() {
   return (neuron0x1a79ee0()*-0.0106372);
}

double NNfunction_NN_1_2::synapse0x1a84aa0() {
   return (neuron0x1a7a220()*0.0181084);
}

double NNfunction_NN_1_2::synapse0x1a84ae0() {
   return (neuron0x1a7a560()*0.0282865);
}

double NNfunction_NN_1_2::synapse0x1a84b20() {
   return (neuron0x1a7a8a0()*0.0220625);
}

double NNfunction_NN_1_2::synapse0x1a84b60() {
   return (neuron0x1a7abe0()*0.0193865);
}

double NNfunction_NN_1_2::synapse0x1a84ba0() {
   return (neuron0x1a7af20()*0.00218713);
}

double NNfunction_NN_1_2::synapse0x1a84be0() {
   return (neuron0x1a7b260()*-0.00690845);
}

double NNfunction_NN_1_2::synapse0x1a84670() {
   return (neuron0x1a7b5a0()*0.00062487);
}

double NNfunction_NN_1_2::synapse0x1a846b0() {
   return (neuron0x1a7bb00()*0.0119793);
}

double NNfunction_NN_1_2::synapse0x1a81440() {
   return (neuron0x1a7be40()*-0.0102153);
}

double NNfunction_NN_1_2::synapse0x1a81480() {
   return (neuron0x1a7c180()*0.0241485);
}

double NNfunction_NN_1_2::synapse0x1a814c0() {
   return (neuron0x1a7c4c0()*-0.000758289);
}

double NNfunction_NN_1_2::synapse0x1a81500() {
   return (neuron0x1a7c800()*0.00603551);
}

double NNfunction_NN_1_2::synapse0x1a81540() {
   return (neuron0x1a7cb40()*0.0139244);
}

double NNfunction_NN_1_2::synapse0x1a81580() {
   return (neuron0x1a7ce80()*-5.98301);
}

double NNfunction_NN_1_2::synapse0x1a81900() {
   return (neuron0x1a78230()*-0.118306);
}

double NNfunction_NN_1_2::synapse0x1a81940() {
   return (neuron0x1a784e0()*-0.00637751);
}

double NNfunction_NN_1_2::synapse0x1a81980() {
   return (neuron0x1a78820()*-0.407825);
}

double NNfunction_NN_1_2::synapse0x1a819c0() {
   return (neuron0x1a78b60()*-0.0141623);
}

double NNfunction_NN_1_2::synapse0x1a81a00() {
   return (neuron0x1a78ea0()*-0.0157127);
}

double NNfunction_NN_1_2::synapse0x1a81a40() {
   return (neuron0x1a791e0()*-0.00725898);
}

double NNfunction_NN_1_2::synapse0x1a81a80() {
   return (neuron0x1a79520()*0.0335038);
}

double NNfunction_NN_1_2::synapse0x1a81ac0() {
   return (neuron0x1a79860()*0.00760661);
}

double NNfunction_NN_1_2::synapse0x1a81b00() {
   return (neuron0x1a79ba0()*0.00402533);
}

double NNfunction_NN_1_2::synapse0x1a81b40() {
   return (neuron0x1a79ee0()*-0.00538151);
}

double NNfunction_NN_1_2::synapse0x1a81b80() {
   return (neuron0x1a7a220()*-0.0200868);
}

double NNfunction_NN_1_2::synapse0x1a81bc0() {
   return (neuron0x1a7a560()*0.107522);
}

double NNfunction_NN_1_2::synapse0x1a81c00() {
   return (neuron0x1a7a8a0()*0.00816132);
}

double NNfunction_NN_1_2::synapse0x1a85d40() {
   return (neuron0x1a7abe0()*0.0231158);
}

double NNfunction_NN_1_2::synapse0x1a85d80() {
   return (neuron0x1a7af20()*0.00301206);
}

double NNfunction_NN_1_2::synapse0x1a85dc0() {
   return (neuron0x1a7b260()*0.0126309);
}

double NNfunction_NN_1_2::synapse0x1a81750() {
   return (neuron0x1a7b5a0()*-0.0169135);
}

double NNfunction_NN_1_2::synapse0x1a81790() {
   return (neuron0x1a7bb00()*0.00311966);
}

double NNfunction_NN_1_2::synapse0x1a85f10() {
   return (neuron0x1a7be40()*0.00894191);
}

double NNfunction_NN_1_2::synapse0x1a85f50() {
   return (neuron0x1a7c180()*-0.00854432);
}

double NNfunction_NN_1_2::synapse0x1a85f90() {
   return (neuron0x1a7c4c0()*0.0192145);
}

double NNfunction_NN_1_2::synapse0x1a85fd0() {
   return (neuron0x1a7c800()*0.0113068);
}

double NNfunction_NN_1_2::synapse0x1a86010() {
   return (neuron0x1a7cb40()*-0.0080853);
}

double NNfunction_NN_1_2::synapse0x1a86050() {
   return (neuron0x1a7ce80()*-2.21563);
}

double NNfunction_NN_1_2::synapse0x1a863d0() {
   return (neuron0x1a78230()*-0.069938);
}

double NNfunction_NN_1_2::synapse0x1a86410() {
   return (neuron0x1a784e0()*11.5373);
}

double NNfunction_NN_1_2::synapse0x1a86450() {
   return (neuron0x1a78820()*0.339051);
}

double NNfunction_NN_1_2::synapse0x1a86490() {
   return (neuron0x1a78b60()*-0.00640509);
}

double NNfunction_NN_1_2::synapse0x1a864d0() {
   return (neuron0x1a78ea0()*-0.0165064);
}

double NNfunction_NN_1_2::synapse0x1a86510() {
   return (neuron0x1a791e0()*-0.0145494);
}

double NNfunction_NN_1_2::synapse0x1a86550() {
   return (neuron0x1a79520()*0.0127211);
}

double NNfunction_NN_1_2::synapse0x1a86590() {
   return (neuron0x1a79860()*0.00382177);
}

double NNfunction_NN_1_2::synapse0x1a865d0() {
   return (neuron0x1a79ba0()*0.00624391);
}

double NNfunction_NN_1_2::synapse0x1a86610() {
   return (neuron0x1a79ee0()*-0.0415291);
}

double NNfunction_NN_1_2::synapse0x1a86650() {
   return (neuron0x1a7a220()*0.000374845);
}

double NNfunction_NN_1_2::synapse0x1a86690() {
   return (neuron0x1a7a560()*-0.0661071);
}

double NNfunction_NN_1_2::synapse0x1a866d0() {
   return (neuron0x1a7a8a0()*-0.0117773);
}

double NNfunction_NN_1_2::synapse0x1a86710() {
   return (neuron0x1a7abe0()*0.021606);
}

double NNfunction_NN_1_2::synapse0x1a86750() {
   return (neuron0x1a7af20()*-0.00778534);
}

double NNfunction_NN_1_2::synapse0x1a86790() {
   return (neuron0x1a7b260()*0.00774983);
}

double NNfunction_NN_1_2::synapse0x1a86220() {
   return (neuron0x1a7b5a0()*0.00594054);
}

double NNfunction_NN_1_2::synapse0x1a86260() {
   return (neuron0x1a7bb00()*-0.0100406);
}

double NNfunction_NN_1_2::synapse0x1a868e0() {
   return (neuron0x1a7be40()*-0.00377027);
}

double NNfunction_NN_1_2::synapse0x1a86920() {
   return (neuron0x1a7c180()*-0.0230912);
}

double NNfunction_NN_1_2::synapse0x1a86960() {
   return (neuron0x1a7c4c0()*0.0249991);
}

double NNfunction_NN_1_2::synapse0x1a869a0() {
   return (neuron0x1a7c800()*0.0151764);
}

double NNfunction_NN_1_2::synapse0x1a869e0() {
   return (neuron0x1a7cb40()*-0.0176147);
}

double NNfunction_NN_1_2::synapse0x1a86a20() {
   return (neuron0x1a7ce80()*3.99858);
}

double NNfunction_NN_1_2::synapse0x1a86da0() {
   return (neuron0x1a78230()*0.0577958);
}

double NNfunction_NN_1_2::synapse0x1a86de0() {
   return (neuron0x1a784e0()*-0.0524594);
}

double NNfunction_NN_1_2::synapse0x1a86e20() {
   return (neuron0x1a78820()*-0.0577958);
}

double NNfunction_NN_1_2::synapse0x1a86e60() {
   return (neuron0x1a78b60()*0.16535);
}

double NNfunction_NN_1_2::synapse0x1a86ea0() {
   return (neuron0x1a78ea0()*0.460591);
}

double NNfunction_NN_1_2::synapse0x1a86ee0() {
   return (neuron0x1a791e0()*0.144233);
}

double NNfunction_NN_1_2::synapse0x1a86f20() {
   return (neuron0x1a79520()*0.777804);
}

double NNfunction_NN_1_2::synapse0x1a86f60() {
   return (neuron0x1a79860()*-0.322012);
}

double NNfunction_NN_1_2::synapse0x1a86fa0() {
   return (neuron0x1a79ba0()*0.0272922);
}

double NNfunction_NN_1_2::synapse0x1a86fe0() {
   return (neuron0x1a79ee0()*-0.671211);
}

double NNfunction_NN_1_2::synapse0x1a87020() {
   return (neuron0x1a7a220()*0.165993);
}

double NNfunction_NN_1_2::synapse0x1a87060() {
   return (neuron0x1a7a560()*-0.11042);
}

double NNfunction_NN_1_2::synapse0x1a870a0() {
   return (neuron0x1a7a8a0()*-0.738178);
}

double NNfunction_NN_1_2::synapse0x1a870e0() {
   return (neuron0x1a7abe0()*-0.0492856);
}

double NNfunction_NN_1_2::synapse0x1a87120() {
   return (neuron0x1a7af20()*0.104541);
}

double NNfunction_NN_1_2::synapse0x1a87160() {
   return (neuron0x1a7b260()*-0.454003);
}

double NNfunction_NN_1_2::synapse0x1a86bf0() {
   return (neuron0x1a7b5a0()*0.162119);
}

double NNfunction_NN_1_2::synapse0x1a86c30() {
   return (neuron0x1a7bb00()*-0.0392257);
}

double NNfunction_NN_1_2::synapse0x1a872b0() {
   return (neuron0x1a7be40()*0.25275);
}

double NNfunction_NN_1_2::synapse0x1a872f0() {
   return (neuron0x1a7c180()*-0.358734);
}

double NNfunction_NN_1_2::synapse0x1a87330() {
   return (neuron0x1a7c4c0()*-0.369911);
}

double NNfunction_NN_1_2::synapse0x1a87370() {
   return (neuron0x1a7c800()*-0.233828);
}

double NNfunction_NN_1_2::synapse0x1a873b0() {
   return (neuron0x1a7cb40()*0.43063);
}

double NNfunction_NN_1_2::synapse0x1a873f0() {
   return (neuron0x1a7ce80()*-0.242327);
}

double NNfunction_NN_1_2::synapse0x1a87770() {
   return (neuron0x1a78230()*-0.0103014);
}

double NNfunction_NN_1_2::synapse0x1a877b0() {
   return (neuron0x1a784e0()*4.90297);
}

double NNfunction_NN_1_2::synapse0x1a877f0() {
   return (neuron0x1a78820()*-1.98859);
}

double NNfunction_NN_1_2::synapse0x1a87830() {
   return (neuron0x1a78b60()*0.0211185);
}

double NNfunction_NN_1_2::synapse0x1a87870() {
   return (neuron0x1a78ea0()*-0.0317248);
}

double NNfunction_NN_1_2::synapse0x1a878b0() {
   return (neuron0x1a791e0()*0.00527876);
}

double NNfunction_NN_1_2::synapse0x1a878f0() {
   return (neuron0x1a79520()*-0.04393);
}

double NNfunction_NN_1_2::synapse0x1a87930() {
   return (neuron0x1a79860()*-0.00507969);
}

double NNfunction_NN_1_2::synapse0x1a87970() {
   return (neuron0x1a79ba0()*0.0174387);
}

double NNfunction_NN_1_2::synapse0x1a879b0() {
   return (neuron0x1a79ee0()*-0.0354117);
}

double NNfunction_NN_1_2::synapse0x1a879f0() {
   return (neuron0x1a7a220()*0.0126469);
}

double NNfunction_NN_1_2::synapse0x1a87a30() {
   return (neuron0x1a7a560()*-0.369691);
}

double NNfunction_NN_1_2::synapse0x1a87a70() {
   return (neuron0x1a7a8a0()*-0.0593005);
}

double NNfunction_NN_1_2::synapse0x1a87ab0() {
   return (neuron0x1a7abe0()*-0.045254);
}

double NNfunction_NN_1_2::synapse0x1a87af0() {
   return (neuron0x1a7af20()*-0.0153162);
}

double NNfunction_NN_1_2::synapse0x1a87b30() {
   return (neuron0x1a7b260()*-0.00105673);
}

double NNfunction_NN_1_2::synapse0x1a875c0() {
   return (neuron0x1a7b5a0()*-0.0107681);
}

double NNfunction_NN_1_2::synapse0x1a87600() {
   return (neuron0x1a7bb00()*0.000425392);
}

double NNfunction_NN_1_2::synapse0x1a87c80() {
   return (neuron0x1a7be40()*0.00940869);
}

double NNfunction_NN_1_2::synapse0x1a87cc0() {
   return (neuron0x1a7c180()*0.0370987);
}

double NNfunction_NN_1_2::synapse0x1a87d00() {
   return (neuron0x1a7c4c0()*-0.0329795);
}

double NNfunction_NN_1_2::synapse0x1a87d40() {
   return (neuron0x1a7c800()*-0.0161345);
}

double NNfunction_NN_1_2::synapse0x1a87d80() {
   return (neuron0x1a7cb40()*-0.0076681);
}

double NNfunction_NN_1_2::synapse0x1a87dc0() {
   return (neuron0x1a7ce80()*3.71883);
}

double NNfunction_NN_1_2::synapse0x1a88140() {
   return (neuron0x1a78230()*0.0195729);
}

double NNfunction_NN_1_2::synapse0x1a783c0() {
   return (neuron0x1a784e0()*0.057327);
}

double NNfunction_NN_1_2::synapse0x1a78400() {
   return (neuron0x1a78820()*0.298863);
}

double NNfunction_NN_1_2::synapse0x1a78700() {
   return (neuron0x1a78b60()*0.00475211);
}

double NNfunction_NN_1_2::synapse0x1a78740() {
   return (neuron0x1a78ea0()*0.0133831);
}

double NNfunction_NN_1_2::synapse0x1a78a40() {
   return (neuron0x1a791e0()*0.00974722);
}

double NNfunction_NN_1_2::synapse0x1a78a80() {
   return (neuron0x1a79520()*0.0700347);
}

double NNfunction_NN_1_2::synapse0x1a78d80() {
   return (neuron0x1a79860()*0.0115529);
}

double NNfunction_NN_1_2::synapse0x1a78dc0() {
   return (neuron0x1a79ba0()*0.0221405);
}

double NNfunction_NN_1_2::synapse0x1a790c0() {
   return (neuron0x1a79ee0()*0.00597614);
}

double NNfunction_NN_1_2::synapse0x1a79100() {
   return (neuron0x1a7a220()*-0.00344531);
}

double NNfunction_NN_1_2::synapse0x1a79400() {
   return (neuron0x1a7a560()*0.735709);
}

double NNfunction_NN_1_2::synapse0x1a79440() {
   return (neuron0x1a7a8a0()*0.0824062);
}

double NNfunction_NN_1_2::synapse0x1a79740() {
   return (neuron0x1a7abe0()*-0.00818713);
}

double NNfunction_NN_1_2::synapse0x1a79780() {
   return (neuron0x1a7af20()*-0.05996);
}

double NNfunction_NN_1_2::synapse0x1a79a80() {
   return (neuron0x1a7b260()*0.0221487);
}

double NNfunction_NN_1_2::synapse0x1a79ac0() {
   return (neuron0x1a7b5a0()*-0.0315478);
}

double NNfunction_NN_1_2::synapse0x1a79dc0() {
   return (neuron0x1a7bb00()*0.0140187);
}

double NNfunction_NN_1_2::synapse0x1a79e00() {
   return (neuron0x1a7be40()*0.0277466);
}

double NNfunction_NN_1_2::synapse0x1a7a100() {
   return (neuron0x1a7c180()*-0.00241799);
}

double NNfunction_NN_1_2::synapse0x1a7a140() {
   return (neuron0x1a7c4c0()*0.0255991);
}

double NNfunction_NN_1_2::synapse0x1a7a440() {
   return (neuron0x1a7c800()*0.0152667);
}

double NNfunction_NN_1_2::synapse0x1a7a480() {
   return (neuron0x1a7cb40()*-0.0178405);
}

double NNfunction_NN_1_2::synapse0x1a7a780() {
   return (neuron0x1a7ce80()*-2.06632);
}

double NNfunction_NN_1_2::synapse0x1a7a7c0() {
   return (neuron0x1a78230()*0.0239429);
}

double NNfunction_NN_1_2::synapse0x1a7b480() {
   return (neuron0x1a784e0()*-0.18852);
}

double NNfunction_NN_1_2::synapse0x1a7b4c0() {
   return (neuron0x1a78820()*0.131184);
}

double NNfunction_NN_1_2::synapse0x1a87f90() {
   return (neuron0x1a78b60()*-0.0143599);
}

double NNfunction_NN_1_2::synapse0x1a87fd0() {
   return (neuron0x1a78ea0()*0.0366719);
}

double NNfunction_NN_1_2::synapse0x1a7b7c0() {
   return (neuron0x1a791e0()*0.0124311);
}

double NNfunction_NN_1_2::synapse0x1a7b800() {
   return (neuron0x1a79520()*-0.0429005);
}

double NNfunction_NN_1_2::synapse0x1a7bd20() {
   return (neuron0x1a79860()*0.0056928);
}

double NNfunction_NN_1_2::synapse0x1a7bd60() {
   return (neuron0x1a79ba0()*0.00534952);
}

double NNfunction_NN_1_2::synapse0x1a7c060() {
   return (neuron0x1a79ee0()*0.0453252);
}

double NNfunction_NN_1_2::synapse0x1a7c0a0() {
   return (neuron0x1a7a220()*-0.0550352);
}

double NNfunction_NN_1_2::synapse0x1a7c3a0() {
   return (neuron0x1a7a560()*-0.337783);
}

double NNfunction_NN_1_2::synapse0x1a7c3e0() {
   return (neuron0x1a7a8a0()*-0.0283962);
}

double NNfunction_NN_1_2::synapse0x1a7c6e0() {
   return (neuron0x1a7abe0()*-0.00941592);
}

double NNfunction_NN_1_2::synapse0x1a7c720() {
   return (neuron0x1a7af20()*0.0238398);
}

double NNfunction_NN_1_2::synapse0x1a7ca20() {
   return (neuron0x1a7b260()*-0.00164121);
}

double NNfunction_NN_1_2::synapse0x1a7ca60() {
   return (neuron0x1a7b5a0()*-0.0188781);
}

double NNfunction_NN_1_2::synapse0x1a7cd60() {
   return (neuron0x1a7bb00()*-0.0315869);
}

double NNfunction_NN_1_2::synapse0x1a7cda0() {
   return (neuron0x1a7be40()*-0.019886);
}

double NNfunction_NN_1_2::synapse0x1a7d0a0() {
   return (neuron0x1a7c180()*-0.0288244);
}

double NNfunction_NN_1_2::synapse0x1a7d0e0() {
   return (neuron0x1a7c4c0()*-0.00536478);
}

double NNfunction_NN_1_2::synapse0x1a7aac0() {
   return (neuron0x1a7c800()*-0.019709);
}

double NNfunction_NN_1_2::synapse0x1a7ab00() {
   return (neuron0x1a7cb40()*0.0360316);
}

double NNfunction_NN_1_2::synapse0x1a89eb0() {
   return (neuron0x1a7ce80()*-1.12605);
}

double NNfunction_NN_1_2::synapse0x1a8a230() {
   return (neuron0x1a78230()*0.0271784);
}

double NNfunction_NN_1_2::synapse0x1a8a270() {
   return (neuron0x1a784e0()*-4.35263);
}

double NNfunction_NN_1_2::synapse0x1a8a2b0() {
   return (neuron0x1a78820()*-0.494519);
}

double NNfunction_NN_1_2::synapse0x1a8a2f0() {
   return (neuron0x1a78b60()*0.0195023);
}

double NNfunction_NN_1_2::synapse0x1a8a330() {
   return (neuron0x1a78ea0()*-0.0159858);
}

double NNfunction_NN_1_2::synapse0x1a8a370() {
   return (neuron0x1a791e0()*-0.0293831);
}

double NNfunction_NN_1_2::synapse0x1a8a3b0() {
   return (neuron0x1a79520()*0.00330427);
}

double NNfunction_NN_1_2::synapse0x1a8a3f0() {
   return (neuron0x1a79860()*0.0189331);
}

double NNfunction_NN_1_2::synapse0x1a8a430() {
   return (neuron0x1a79ba0()*0.000397611);
}

double NNfunction_NN_1_2::synapse0x1a8a470() {
   return (neuron0x1a79ee0()*0.00253417);
}

double NNfunction_NN_1_2::synapse0x1a8a4b0() {
   return (neuron0x1a7a220()*-0.00825341);
}

double NNfunction_NN_1_2::synapse0x1a8a4f0() {
   return (neuron0x1a7a560()*-0.0310432);
}

double NNfunction_NN_1_2::synapse0x1a8a530() {
   return (neuron0x1a7a8a0()*0.0125084);
}

double NNfunction_NN_1_2::synapse0x1a8a570() {
   return (neuron0x1a7abe0()*-0.00867104);
}

double NNfunction_NN_1_2::synapse0x1a8a5b0() {
   return (neuron0x1a7af20()*-0.0132171);
}

double NNfunction_NN_1_2::synapse0x1a8a5f0() {
   return (neuron0x1a7b260()*-0.00619017);
}

double NNfunction_NN_1_2::synapse0x1a8a080() {
   return (neuron0x1a7b5a0()*-0.00261648);
}

double NNfunction_NN_1_2::synapse0x1a8a0c0() {
   return (neuron0x1a7bb00()*0.01768);
}

double NNfunction_NN_1_2::synapse0x1a8a740() {
   return (neuron0x1a7be40()*-0.0110795);
}

double NNfunction_NN_1_2::synapse0x1a8a780() {
   return (neuron0x1a7c180()*0.00758746);
}

double NNfunction_NN_1_2::synapse0x1a8a7c0() {
   return (neuron0x1a7c4c0()*0.00370313);
}

double NNfunction_NN_1_2::synapse0x1a8a800() {
   return (neuron0x1a7c800()*0.0132216);
}

double NNfunction_NN_1_2::synapse0x1a8a840() {
   return (neuron0x1a7cb40()*-0.014469);
}

double NNfunction_NN_1_2::synapse0x1a8a880() {
   return (neuron0x1a7ce80()*2.18068);
}

double NNfunction_NN_1_2::synapse0x1a8ac00() {
   return (neuron0x1a78230()*-0.136503);
}

double NNfunction_NN_1_2::synapse0x1a8ac40() {
   return (neuron0x1a784e0()*-18.9653);
}

double NNfunction_NN_1_2::synapse0x1a8ac80() {
   return (neuron0x1a78820()*-0.39637);
}

double NNfunction_NN_1_2::synapse0x1a8acc0() {
   return (neuron0x1a78b60()*-0.0185485);
}

double NNfunction_NN_1_2::synapse0x1a8ad00() {
   return (neuron0x1a78ea0()*-0.0185148);
}

double NNfunction_NN_1_2::synapse0x1a8ad40() {
   return (neuron0x1a791e0()*-7.27059e-05);
}

double NNfunction_NN_1_2::synapse0x1a8ad80() {
   return (neuron0x1a79520()*0.0401336);
}

double NNfunction_NN_1_2::synapse0x1a8adc0() {
   return (neuron0x1a79860()*-0.00351795);
}

double NNfunction_NN_1_2::synapse0x1a8ae00() {
   return (neuron0x1a79ba0()*-0.0334418);
}

double NNfunction_NN_1_2::synapse0x1a8ae40() {
   return (neuron0x1a79ee0()*0.019909);
}

double NNfunction_NN_1_2::synapse0x1a8ae80() {
   return (neuron0x1a7a220()*-0.0181559);
}

double NNfunction_NN_1_2::synapse0x1a8aec0() {
   return (neuron0x1a7a560()*-0.0545018);
}

double NNfunction_NN_1_2::synapse0x1a8af00() {
   return (neuron0x1a7a8a0()*0.0120885);
}

double NNfunction_NN_1_2::synapse0x1a8af40() {
   return (neuron0x1a7abe0()*-0.00328113);
}

double NNfunction_NN_1_2::synapse0x1a8af80() {
   return (neuron0x1a7af20()*0.0546888);
}

double NNfunction_NN_1_2::synapse0x1a8afc0() {
   return (neuron0x1a7b260()*-0.00159205);
}

double NNfunction_NN_1_2::synapse0x1a8aa50() {
   return (neuron0x1a7b5a0()*-0.0210087);
}

double NNfunction_NN_1_2::synapse0x1a8aa90() {
   return (neuron0x1a7bb00()*0.0309392);
}

double NNfunction_NN_1_2::synapse0x1a8b110() {
   return (neuron0x1a7be40()*-0.00930819);
}

double NNfunction_NN_1_2::synapse0x1a8b150() {
   return (neuron0x1a7c180()*-0.0192581);
}

double NNfunction_NN_1_2::synapse0x1a8b190() {
   return (neuron0x1a7c4c0()*-0.0134526);
}

double NNfunction_NN_1_2::synapse0x1a8b1d0() {
   return (neuron0x1a7c800()*0.0113259);
}

double NNfunction_NN_1_2::synapse0x1a8b210() {
   return (neuron0x1a7cb40()*0.00922954);
}

double NNfunction_NN_1_2::synapse0x1a8b250() {
   return (neuron0x1a7ce80()*-0.0990063);
}

double NNfunction_NN_1_2::synapse0x1a8b5d0() {
   return (neuron0x1a78230()*0.0569423);
}

double NNfunction_NN_1_2::synapse0x1a8b610() {
   return (neuron0x1a784e0()*0.102882);
}

double NNfunction_NN_1_2::synapse0x1a8b650() {
   return (neuron0x1a78820()*-3.15738);
}

double NNfunction_NN_1_2::synapse0x1a8b690() {
   return (neuron0x1a78b60()*0.0297821);
}

double NNfunction_NN_1_2::synapse0x1a8b6d0() {
   return (neuron0x1a78ea0()*0.0463287);
}

double NNfunction_NN_1_2::synapse0x1a8b710() {
   return (neuron0x1a791e0()*0.000670821);
}

double NNfunction_NN_1_2::synapse0x1a8b750() {
   return (neuron0x1a79520()*0.00817034);
}

double NNfunction_NN_1_2::synapse0x1a8b790() {
   return (neuron0x1a79860()*-0.00655779);
}

double NNfunction_NN_1_2::synapse0x1a8b7d0() {
   return (neuron0x1a79ba0()*0.00196093);
}

double NNfunction_NN_1_2::synapse0x1a8b810() {
   return (neuron0x1a79ee0()*-0.00889864);
}

double NNfunction_NN_1_2::synapse0x1a8b850() {
   return (neuron0x1a7a220()*-0.0516181);
}

double NNfunction_NN_1_2::synapse0x1a8b890() {
   return (neuron0x1a7a560()*-2.26853);
}

double NNfunction_NN_1_2::synapse0x1a8b8d0() {
   return (neuron0x1a7a8a0()*0.0477542);
}

double NNfunction_NN_1_2::synapse0x1a8b910() {
   return (neuron0x1a7abe0()*-0.00649754);
}

double NNfunction_NN_1_2::synapse0x1a8b950() {
   return (neuron0x1a7af20()*0.0159973);
}

double NNfunction_NN_1_2::synapse0x1a8b990() {
   return (neuron0x1a7b260()*0.00575741);
}

double NNfunction_NN_1_2::synapse0x1a8b420() {
   return (neuron0x1a7b5a0()*-0.00796005);
}

double NNfunction_NN_1_2::synapse0x1a8b460() {
   return (neuron0x1a7bb00()*0.00572048);
}

double NNfunction_NN_1_2::synapse0x1a8bae0() {
   return (neuron0x1a7be40()*-0.0280343);
}

double NNfunction_NN_1_2::synapse0x1a8bb20() {
   return (neuron0x1a7c180()*0.0302283);
}

double NNfunction_NN_1_2::synapse0x1a8bb60() {
   return (neuron0x1a7c4c0()*0.0168695);
}

double NNfunction_NN_1_2::synapse0x1a8bba0() {
   return (neuron0x1a7c800()*-0.0129035);
}

double NNfunction_NN_1_2::synapse0x1a8bbe0() {
   return (neuron0x1a7cb40()*-0.0142214);
}

double NNfunction_NN_1_2::synapse0x1a8bc20() {
   return (neuron0x1a7ce80()*-4.40119);
}

double NNfunction_NN_1_2::synapse0x1a8bfa0() {
   return (neuron0x1a78230()*-1.11988);
}

double NNfunction_NN_1_2::synapse0x1a8bfe0() {
   return (neuron0x1a784e0()*0.000882364);
}

double NNfunction_NN_1_2::synapse0x1a8c020() {
   return (neuron0x1a78820()*-0.196951);
}

double NNfunction_NN_1_2::synapse0x1a8c060() {
   return (neuron0x1a78b60()*-0.0177564);
}

double NNfunction_NN_1_2::synapse0x1a8c0a0() {
   return (neuron0x1a78ea0()*0.0361737);
}

double NNfunction_NN_1_2::synapse0x1a8c0e0() {
   return (neuron0x1a791e0()*-0.0282628);
}

double NNfunction_NN_1_2::synapse0x1a8c120() {
   return (neuron0x1a79520()*0.0464363);
}

double NNfunction_NN_1_2::synapse0x1a8c160() {
   return (neuron0x1a79860()*-0.050704);
}

double NNfunction_NN_1_2::synapse0x1a8c1a0() {
   return (neuron0x1a79ba0()*0.0194991);
}

double NNfunction_NN_1_2::synapse0x1a8c1e0() {
   return (neuron0x1a79ee0()*0.0601482);
}

double NNfunction_NN_1_2::synapse0x1a8c220() {
   return (neuron0x1a7a220()*0.0269438);
}

double NNfunction_NN_1_2::synapse0x1a8c260() {
   return (neuron0x1a7a560()*0.0558649);
}

double NNfunction_NN_1_2::synapse0x1a8c2a0() {
   return (neuron0x1a7a8a0()*0.00477284);
}

double NNfunction_NN_1_2::synapse0x1a8c2e0() {
   return (neuron0x1a7abe0()*0.0156077);
}

double NNfunction_NN_1_2::synapse0x1a8c320() {
   return (neuron0x1a7af20()*0.0233529);
}

double NNfunction_NN_1_2::synapse0x1a8c360() {
   return (neuron0x1a7b260()*0.00140982);
}

double NNfunction_NN_1_2::synapse0x1a8bdf0() {
   return (neuron0x1a7b5a0()*0.0549249);
}

double NNfunction_NN_1_2::synapse0x1a8be30() {
   return (neuron0x1a7bb00()*0.00555911);
}

double NNfunction_NN_1_2::synapse0x1a8c4b0() {
   return (neuron0x1a7be40()*-0.0577443);
}

double NNfunction_NN_1_2::synapse0x1a8c4f0() {
   return (neuron0x1a7c180()*-0.0410977);
}

double NNfunction_NN_1_2::synapse0x1a8c530() {
   return (neuron0x1a7c4c0()*0.0554316);
}

double NNfunction_NN_1_2::synapse0x1a8c570() {
   return (neuron0x1a7c800()*-0.0251406);
}

double NNfunction_NN_1_2::synapse0x1a8c5b0() {
   return (neuron0x1a7cb40()*0.0127924);
}

double NNfunction_NN_1_2::synapse0x1a8c5f0() {
   return (neuron0x1a7ce80()*0.346947);
}

double NNfunction_NN_1_2::synapse0x1a8c970() {
   return (neuron0x1a78230()*0.219229);
}

double NNfunction_NN_1_2::synapse0x1a8c9b0() {
   return (neuron0x1a784e0()*0.275135);
}

double NNfunction_NN_1_2::synapse0x1a8c9f0() {
   return (neuron0x1a78820()*-0.470128);
}

double NNfunction_NN_1_2::synapse0x1a8ca30() {
   return (neuron0x1a78b60()*0.0106579);
}

double NNfunction_NN_1_2::synapse0x1a8ca70() {
   return (neuron0x1a78ea0()*0.286908);
}

double NNfunction_NN_1_2::synapse0x1a8cab0() {
   return (neuron0x1a791e0()*-0.365098);
}

double NNfunction_NN_1_2::synapse0x1a8caf0() {
   return (neuron0x1a79520()*-0.000154895);
}

double NNfunction_NN_1_2::synapse0x1a8cb30() {
   return (neuron0x1a79860()*-0.311403);
}

double NNfunction_NN_1_2::synapse0x1a8cb70() {
   return (neuron0x1a79ba0()*0.0723534);
}

double NNfunction_NN_1_2::synapse0x1a84d30() {
   return (neuron0x1a79ee0()*0.320489);
}

double NNfunction_NN_1_2::synapse0x1a84d70() {
   return (neuron0x1a7a220()*-0.106416);
}

double NNfunction_NN_1_2::synapse0x1a84db0() {
   return (neuron0x1a7a560()*0.113405);
}

double NNfunction_NN_1_2::synapse0x1a84df0() {
   return (neuron0x1a7a8a0()*0.024678);
}

double NNfunction_NN_1_2::synapse0x1a84e30() {
   return (neuron0x1a7abe0()*-0.350542);
}

double NNfunction_NN_1_2::synapse0x1a84e70() {
   return (neuron0x1a7af20()*0.224624);
}

double NNfunction_NN_1_2::synapse0x1a84eb0() {
   return (neuron0x1a7b260()*-0.344209);
}

double NNfunction_NN_1_2::synapse0x1a8c7c0() {
   return (neuron0x1a7b5a0()*0.167336);
}

double NNfunction_NN_1_2::synapse0x1a8c800() {
   return (neuron0x1a7bb00()*0.0411258);
}

double NNfunction_NN_1_2::synapse0x1a85000() {
   return (neuron0x1a7be40()*-0.200737);
}

double NNfunction_NN_1_2::synapse0x1a85040() {
   return (neuron0x1a7c180()*-0.0659118);
}

double NNfunction_NN_1_2::synapse0x1a85080() {
   return (neuron0x1a7c4c0()*-0.238923);
}

double NNfunction_NN_1_2::synapse0x1a850c0() {
   return (neuron0x1a7c800()*-0.109537);
}

double NNfunction_NN_1_2::synapse0x1a85100() {
   return (neuron0x1a7cb40()*-0.18295);
}

double NNfunction_NN_1_2::synapse0x1a85140() {
   return (neuron0x1a7ce80()*0.095244);
}

double NNfunction_NN_1_2::synapse0x1a854c0() {
   return (neuron0x1a78230()*0.0749714);
}

double NNfunction_NN_1_2::synapse0x1a85500() {
   return (neuron0x1a784e0()*-0.0130632);
}

double NNfunction_NN_1_2::synapse0x1a85540() {
   return (neuron0x1a78820()*0.0766572);
}

double NNfunction_NN_1_2::synapse0x1a85580() {
   return (neuron0x1a78b60()*0.0061421);
}

double NNfunction_NN_1_2::synapse0x1a855c0() {
   return (neuron0x1a78ea0()*-0.00209615);
}

double NNfunction_NN_1_2::synapse0x1a85600() {
   return (neuron0x1a791e0()*-0.00810205);
}

double NNfunction_NN_1_2::synapse0x1a85640() {
   return (neuron0x1a79520()*-0.00912579);
}

double NNfunction_NN_1_2::synapse0x1a85680() {
   return (neuron0x1a79860()*0.00538414);
}

double NNfunction_NN_1_2::synapse0x1a856c0() {
   return (neuron0x1a79ba0()*-0.00569365);
}

double NNfunction_NN_1_2::synapse0x1a85700() {
   return (neuron0x1a79ee0()*-0.00391653);
}

double NNfunction_NN_1_2::synapse0x1a85740() {
   return (neuron0x1a7a220()*-0.00179915);
}

double NNfunction_NN_1_2::synapse0x1a85780() {
   return (neuron0x1a7a560()*-0.024826);
}

double NNfunction_NN_1_2::synapse0x1a857c0() {
   return (neuron0x1a7a8a0()*0.00140555);
}

double NNfunction_NN_1_2::synapse0x1a85800() {
   return (neuron0x1a7abe0()*-6.98601e-05);
}

double NNfunction_NN_1_2::synapse0x1a85840() {
   return (neuron0x1a7af20()*0.000291705);
}

double NNfunction_NN_1_2::synapse0x1a85880() {
   return (neuron0x1a7b260()*-0.00320945);
}

double NNfunction_NN_1_2::synapse0x1a85310() {
   return (neuron0x1a7b5a0()*-0.00752545);
}

double NNfunction_NN_1_2::synapse0x1a85350() {
   return (neuron0x1a7bb00()*-0.00542691);
}

double NNfunction_NN_1_2::synapse0x1a859d0() {
   return (neuron0x1a7be40()*-0.00248205);
}

double NNfunction_NN_1_2::synapse0x1a85a10() {
   return (neuron0x1a7c180()*-0.00732254);
}

double NNfunction_NN_1_2::synapse0x1a85a50() {
   return (neuron0x1a7c4c0()*0.00748121);
}

double NNfunction_NN_1_2::synapse0x1a85a90() {
   return (neuron0x1a7c800()*0.00880324);
}

double NNfunction_NN_1_2::synapse0x1a85ad0() {
   return (neuron0x1a7cb40()*0.0107893);
}

double NNfunction_NN_1_2::synapse0x1a85b10() {
   return (neuron0x1a7ce80()*13.3128);
}

double NNfunction_NN_1_2::synapse0x1a85ce0() {
   return (neuron0x1a78230()*-0.0519564);
}

double NNfunction_NN_1_2::synapse0x1a8ed70() {
   return (neuron0x1a784e0()*0.0246069);
}

double NNfunction_NN_1_2::synapse0x1a8edb0() {
   return (neuron0x1a78820()*-0.0532766);
}

double NNfunction_NN_1_2::synapse0x1a8edf0() {
   return (neuron0x1a78b60()*-0.0120896);
}

double NNfunction_NN_1_2::synapse0x1a8ee30() {
   return (neuron0x1a78ea0()*-0.0135509);
}

double NNfunction_NN_1_2::synapse0x1a8ee70() {
   return (neuron0x1a791e0()*-0.00303373);
}

double NNfunction_NN_1_2::synapse0x1a8eeb0() {
   return (neuron0x1a79520()*-0.010806);
}

double NNfunction_NN_1_2::synapse0x1a8eef0() {
   return (neuron0x1a79860()*-0.00634111);
}

double NNfunction_NN_1_2::synapse0x1a8ef30() {
   return (neuron0x1a79ba0()*0.00309251);
}

double NNfunction_NN_1_2::synapse0x1a8ef70() {
   return (neuron0x1a79ee0()*0.0155293);
}

double NNfunction_NN_1_2::synapse0x1a8efb0() {
   return (neuron0x1a7a220()*-0.00754976);
}

double NNfunction_NN_1_2::synapse0x1a8eff0() {
   return (neuron0x1a7a560()*0.00844466);
}

double NNfunction_NN_1_2::synapse0x1a8f030() {
   return (neuron0x1a7a8a0()*-0.0153143);
}

double NNfunction_NN_1_2::synapse0x1a8f070() {
   return (neuron0x1a7abe0()*-0.0159092);
}

double NNfunction_NN_1_2::synapse0x1a8f0b0() {
   return (neuron0x1a7af20()*0.0182835);
}

double NNfunction_NN_1_2::synapse0x1a8f0f0() {
   return (neuron0x1a7b260()*-0.000470844);
}

double NNfunction_NN_1_2::synapse0x1a8ebc0() {
   return (neuron0x1a7b5a0()*0.00880284);
}

double NNfunction_NN_1_2::synapse0x1a8ec00() {
   return (neuron0x1a7bb00()*0.0133345);
}

double NNfunction_NN_1_2::synapse0x1a8f240() {
   return (neuron0x1a7be40()*0.0084302);
}

double NNfunction_NN_1_2::synapse0x1a8f280() {
   return (neuron0x1a7c180()*0.0072251);
}

double NNfunction_NN_1_2::synapse0x1a8f2c0() {
   return (neuron0x1a7c4c0()*-0.0209215);
}

double NNfunction_NN_1_2::synapse0x1a8f300() {
   return (neuron0x1a7c800()*-0.0138274);
}

double NNfunction_NN_1_2::synapse0x1a8f340() {
   return (neuron0x1a7cb40()*0.00749546);
}

double NNfunction_NN_1_2::synapse0x1a8f380() {
   return (neuron0x1a7ce80()*-7.37261);
}

double NNfunction_NN_1_2::synapse0x1a8f700() {
   return (neuron0x1a78230()*0.0216222);
}

double NNfunction_NN_1_2::synapse0x1a8f740() {
   return (neuron0x1a784e0()*4.3765);
}

double NNfunction_NN_1_2::synapse0x1a8f780() {
   return (neuron0x1a78820()*-0.0125624);
}

double NNfunction_NN_1_2::synapse0x1a8f7c0() {
   return (neuron0x1a78b60()*-0.00199566);
}

double NNfunction_NN_1_2::synapse0x1a8f800() {
   return (neuron0x1a78ea0()*-0.0267486);
}

double NNfunction_NN_1_2::synapse0x1a8f840() {
   return (neuron0x1a791e0()*-0.0143891);
}

double NNfunction_NN_1_2::synapse0x1a8f880() {
   return (neuron0x1a79520()*0.00383384);
}

double NNfunction_NN_1_2::synapse0x1a8f8c0() {
   return (neuron0x1a79860()*-0.00219099);
}

double NNfunction_NN_1_2::synapse0x1a8f900() {
   return (neuron0x1a79ba0()*-0.00703216);
}

double NNfunction_NN_1_2::synapse0x1a8f940() {
   return (neuron0x1a79ee0()*-0.00509861);
}

double NNfunction_NN_1_2::synapse0x1a8f980() {
   return (neuron0x1a7a220()*-0.000572158);
}

double NNfunction_NN_1_2::synapse0x1a8f9c0() {
   return (neuron0x1a7a560()*0.0521064);
}

double NNfunction_NN_1_2::synapse0x1a8fa00() {
   return (neuron0x1a7a8a0()*0.0241691);
}

double NNfunction_NN_1_2::synapse0x1a8fa40() {
   return (neuron0x1a7abe0()*-0.0108096);
}

double NNfunction_NN_1_2::synapse0x1a8fa80() {
   return (neuron0x1a7af20()*0.0137075);
}

double NNfunction_NN_1_2::synapse0x1a8fac0() {
   return (neuron0x1a7b260()*-0.00565218);
}

double NNfunction_NN_1_2::synapse0x1a8f550() {
   return (neuron0x1a7b5a0()*0.00969583);
}

double NNfunction_NN_1_2::synapse0x1a8f590() {
   return (neuron0x1a7bb00()*-0.00114713);
}

double NNfunction_NN_1_2::synapse0x1a8fc10() {
   return (neuron0x1a7be40()*0.00655929);
}

double NNfunction_NN_1_2::synapse0x1a8fc50() {
   return (neuron0x1a7c180()*-0.0104404);
}

double NNfunction_NN_1_2::synapse0x1a8fc90() {
   return (neuron0x1a7c4c0()*-0.00305653);
}

double NNfunction_NN_1_2::synapse0x1a8fcd0() {
   return (neuron0x1a7c800()*-0.000892601);
}

double NNfunction_NN_1_2::synapse0x1a8fd10() {
   return (neuron0x1a7cb40()*0.00299892);
}

double NNfunction_NN_1_2::synapse0x1a8fd50() {
   return (neuron0x1a7ce80()*-0.0347069);
}

double NNfunction_NN_1_2::synapse0x1a900d0() {
   return (neuron0x1a78230()*0.334472);
}

double NNfunction_NN_1_2::synapse0x1a90110() {
   return (neuron0x1a784e0()*-0.048104);
}

double NNfunction_NN_1_2::synapse0x1a90150() {
   return (neuron0x1a78820()*-0.183508);
}

double NNfunction_NN_1_2::synapse0x1a90190() {
   return (neuron0x1a78b60()*0.000743143);
}

double NNfunction_NN_1_2::synapse0x1a901d0() {
   return (neuron0x1a78ea0()*-0.0179029);
}

double NNfunction_NN_1_2::synapse0x1a90210() {
   return (neuron0x1a791e0()*0.0091006);
}

double NNfunction_NN_1_2::synapse0x1a90250() {
   return (neuron0x1a79520()*0.0125389);
}

double NNfunction_NN_1_2::synapse0x1a90290() {
   return (neuron0x1a79860()*0.0196273);
}

double NNfunction_NN_1_2::synapse0x1a902d0() {
   return (neuron0x1a79ba0()*-0.000752494);
}

double NNfunction_NN_1_2::synapse0x1a90310() {
   return (neuron0x1a79ee0()*-0.0175505);
}

double NNfunction_NN_1_2::synapse0x1a90350() {
   return (neuron0x1a7a220()*-0.0117629);
}

double NNfunction_NN_1_2::synapse0x1a90390() {
   return (neuron0x1a7a560()*-0.00259425);
}

double NNfunction_NN_1_2::synapse0x1a903d0() {
   return (neuron0x1a7a8a0()*0.00264605);
}

double NNfunction_NN_1_2::synapse0x1a90410() {
   return (neuron0x1a7abe0()*0.0104209);
}

double NNfunction_NN_1_2::synapse0x1a90450() {
   return (neuron0x1a7af20()*0.00390463);
}

double NNfunction_NN_1_2::synapse0x1a90490() {
   return (neuron0x1a7b260()*-0.0117716);
}

double NNfunction_NN_1_2::synapse0x1a8ff20() {
   return (neuron0x1a7b5a0()*-0.0100288);
}

double NNfunction_NN_1_2::synapse0x1a8ff60() {
   return (neuron0x1a7bb00()*-0.0117014);
}

double NNfunction_NN_1_2::synapse0x1a905e0() {
   return (neuron0x1a7be40()*0.0262112);
}

double NNfunction_NN_1_2::synapse0x1a90620() {
   return (neuron0x1a7c180()*0.00376639);
}

double NNfunction_NN_1_2::synapse0x1a90660() {
   return (neuron0x1a7c4c0()*0.0108185);
}

double NNfunction_NN_1_2::synapse0x1a906a0() {
   return (neuron0x1a7c800()*0.0124962);
}

double NNfunction_NN_1_2::synapse0x1a906e0() {
   return (neuron0x1a7cb40()*0.00861721);
}

double NNfunction_NN_1_2::synapse0x1a90720() {
   return (neuron0x1a7ce80()*1.47705);
}

double NNfunction_NN_1_2::synapse0x1a90aa0() {
   return (neuron0x1a78230()*0.0352352);
}

double NNfunction_NN_1_2::synapse0x1a90ae0() {
   return (neuron0x1a784e0()*0.0590699);
}

double NNfunction_NN_1_2::synapse0x1a90b20() {
   return (neuron0x1a78820()*0.913788);
}

double NNfunction_NN_1_2::synapse0x1a90b60() {
   return (neuron0x1a78b60()*0.10061);
}

double NNfunction_NN_1_2::synapse0x1a90ba0() {
   return (neuron0x1a78ea0()*0.04129);
}

double NNfunction_NN_1_2::synapse0x1a90be0() {
   return (neuron0x1a791e0()*0.0512379);
}

double NNfunction_NN_1_2::synapse0x1a90c20() {
   return (neuron0x1a79520()*0.0576463);
}

double NNfunction_NN_1_2::synapse0x1a90c60() {
   return (neuron0x1a79860()*-0.040596);
}

double NNfunction_NN_1_2::synapse0x1a90ca0() {
   return (neuron0x1a79ba0()*0.074022);
}

double NNfunction_NN_1_2::synapse0x1a90ce0() {
   return (neuron0x1a79ee0()*-0.0852596);
}

double NNfunction_NN_1_2::synapse0x1a90d20() {
   return (neuron0x1a7a220()*-0.0146964);
}

double NNfunction_NN_1_2::synapse0x1a90d60() {
   return (neuron0x1a7a560()*1.83093);
}

double NNfunction_NN_1_2::synapse0x1a90da0() {
   return (neuron0x1a7a8a0()*-0.298519);
}

double NNfunction_NN_1_2::synapse0x1a90de0() {
   return (neuron0x1a7abe0()*-0.0458326);
}

double NNfunction_NN_1_2::synapse0x1a90e20() {
   return (neuron0x1a7af20()*0.00671795);
}

double NNfunction_NN_1_2::synapse0x1a90e60() {
   return (neuron0x1a7b260()*0.0483115);
}

double NNfunction_NN_1_2::synapse0x1a908f0() {
   return (neuron0x1a7b5a0()*-0.111094);
}

double NNfunction_NN_1_2::synapse0x1a90930() {
   return (neuron0x1a7bb00()*-0.0612069);
}

double NNfunction_NN_1_2::synapse0x1a90fb0() {
   return (neuron0x1a7be40()*-0.0329128);
}

double NNfunction_NN_1_2::synapse0x1a90ff0() {
   return (neuron0x1a7c180()*0.0104112);
}

double NNfunction_NN_1_2::synapse0x1a91030() {
   return (neuron0x1a7c4c0()*-0.0689722);
}

double NNfunction_NN_1_2::synapse0x1a91070() {
   return (neuron0x1a7c800()*-0.0237021);
}

double NNfunction_NN_1_2::synapse0x1a910b0() {
   return (neuron0x1a7cb40()*-0.103376);
}

double NNfunction_NN_1_2::synapse0x1a910f0() {
   return (neuron0x1a7ce80()*-1.20537);
}

double NNfunction_NN_1_2::synapse0x1a91470() {
   return (neuron0x1a78230()*-0.0702632);
}

double NNfunction_NN_1_2::synapse0x1a914b0() {
   return (neuron0x1a784e0()*-0.18809);
}

double NNfunction_NN_1_2::synapse0x1a914f0() {
   return (neuron0x1a78820()*3.73775);
}

double NNfunction_NN_1_2::synapse0x1a91530() {
   return (neuron0x1a78b60()*0.0367975);
}

double NNfunction_NN_1_2::synapse0x1a91570() {
   return (neuron0x1a78ea0()*-0.0527288);
}

double NNfunction_NN_1_2::synapse0x1a915b0() {
   return (neuron0x1a791e0()*-0.0060677);
}

double NNfunction_NN_1_2::synapse0x1a915f0() {
   return (neuron0x1a79520()*0.0149293);
}

double NNfunction_NN_1_2::synapse0x1a91630() {
   return (neuron0x1a79860()*-0.012929);
}

double NNfunction_NN_1_2::synapse0x1a91670() {
   return (neuron0x1a79ba0()*0.00444623);
}

double NNfunction_NN_1_2::synapse0x1a916b0() {
   return (neuron0x1a79ee0()*-0.0213873);
}

double NNfunction_NN_1_2::synapse0x1a916f0() {
   return (neuron0x1a7a220()*0.0271514);
}

double NNfunction_NN_1_2::synapse0x1a91730() {
   return (neuron0x1a7a560()*1.57113);
}

double NNfunction_NN_1_2::synapse0x1a91770() {
   return (neuron0x1a7a8a0()*0.0925139);
}

double NNfunction_NN_1_2::synapse0x1a917b0() {
   return (neuron0x1a7abe0()*0.0582159);
}

double NNfunction_NN_1_2::synapse0x1a917f0() {
   return (neuron0x1a7af20()*-0.0558482);
}

double NNfunction_NN_1_2::synapse0x1a91830() {
   return (neuron0x1a7b260()*0.0102581);
}

double NNfunction_NN_1_2::synapse0x1a912c0() {
   return (neuron0x1a7b5a0()*0.0102107);
}

double NNfunction_NN_1_2::synapse0x1a91300() {
   return (neuron0x1a7bb00()*0.0134647);
}

double NNfunction_NN_1_2::synapse0x1a91980() {
   return (neuron0x1a7be40()*0.0100271);
}

double NNfunction_NN_1_2::synapse0x1a919c0() {
   return (neuron0x1a7c180()*-0.0302422);
}

double NNfunction_NN_1_2::synapse0x1a91a00() {
   return (neuron0x1a7c4c0()*0.016263);
}

double NNfunction_NN_1_2::synapse0x1a91a40() {
   return (neuron0x1a7c800()*0.00635936);
}

double NNfunction_NN_1_2::synapse0x1a91a80() {
   return (neuron0x1a7cb40()*0.0102197);
}

double NNfunction_NN_1_2::synapse0x1a91ac0() {
   return (neuron0x1a7ce80()*5.0104);
}

double NNfunction_NN_1_2::synapse0x1a91e40() {
   return (neuron0x1a78230()*0.0771763);
}

double NNfunction_NN_1_2::synapse0x1a91e80() {
   return (neuron0x1a784e0()*-4.00314);
}

double NNfunction_NN_1_2::synapse0x1a91ec0() {
   return (neuron0x1a78820()*0.121938);
}

double NNfunction_NN_1_2::synapse0x1a91f00() {
   return (neuron0x1a78b60()*-0.00147803);
}

double NNfunction_NN_1_2::synapse0x1a91f40() {
   return (neuron0x1a78ea0()*-0.052061);
}

double NNfunction_NN_1_2::synapse0x1a91f80() {
   return (neuron0x1a791e0()*-0.0286506);
}

double NNfunction_NN_1_2::synapse0x1a91fc0() {
   return (neuron0x1a79520()*-0.010962);
}

double NNfunction_NN_1_2::synapse0x1a92000() {
   return (neuron0x1a79860()*-0.00953946);
}

double NNfunction_NN_1_2::synapse0x1a92040() {
   return (neuron0x1a79ba0()*-0.00901276);
}

double NNfunction_NN_1_2::synapse0x1a92080() {
   return (neuron0x1a79ee0()*0.00272777);
}

double NNfunction_NN_1_2::synapse0x1a920c0() {
   return (neuron0x1a7a220()*-0.00291512);
}

double NNfunction_NN_1_2::synapse0x1a92100() {
   return (neuron0x1a7a560()*0.230937);
}

double NNfunction_NN_1_2::synapse0x1a92140() {
   return (neuron0x1a7a8a0()*0.0297108);
}

double NNfunction_NN_1_2::synapse0x1a92180() {
   return (neuron0x1a7abe0()*-0.00508654);
}

double NNfunction_NN_1_2::synapse0x1a921c0() {
   return (neuron0x1a7af20()*-0.0135346);
}

double NNfunction_NN_1_2::synapse0x1a92200() {
   return (neuron0x1a7b260()*-0.0437842);
}

double NNfunction_NN_1_2::synapse0x1a91c90() {
   return (neuron0x1a7b5a0()*0.00916563);
}

double NNfunction_NN_1_2::synapse0x1a91cd0() {
   return (neuron0x1a7bb00()*0.00469056);
}

double NNfunction_NN_1_2::synapse0x1a92350() {
   return (neuron0x1a7be40()*-0.0156415);
}

double NNfunction_NN_1_2::synapse0x1a92390() {
   return (neuron0x1a7c180()*-0.0144773);
}

double NNfunction_NN_1_2::synapse0x1a923d0() {
   return (neuron0x1a7c4c0()*-0.0080505);
}

double NNfunction_NN_1_2::synapse0x1a92410() {
   return (neuron0x1a7c800()*0.0112376);
}

double NNfunction_NN_1_2::synapse0x1a92450() {
   return (neuron0x1a7cb40()*-0.0100439);
}

double NNfunction_NN_1_2::synapse0x1a92490() {
   return (neuron0x1a7ce80()*-0.015887);
}

double NNfunction_NN_1_2::synapse0x1a92810() {
   return (neuron0x1a78230()*-0.0472192);
}

double NNfunction_NN_1_2::synapse0x1a92850() {
   return (neuron0x1a784e0()*0.0161202);
}

double NNfunction_NN_1_2::synapse0x1a92890() {
   return (neuron0x1a78820()*-0.0390277);
}

double NNfunction_NN_1_2::synapse0x1a928d0() {
   return (neuron0x1a78b60()*0.00160442);
}

double NNfunction_NN_1_2::synapse0x1a92910() {
   return (neuron0x1a78ea0()*-0.00285089);
}

double NNfunction_NN_1_2::synapse0x1a92950() {
   return (neuron0x1a791e0()*-0.00281726);
}

double NNfunction_NN_1_2::synapse0x1a92990() {
   return (neuron0x1a79520()*0.00339355);
}

double NNfunction_NN_1_2::synapse0x1a929d0() {
   return (neuron0x1a79860()*-0.0017833);
}

double NNfunction_NN_1_2::synapse0x1a92a10() {
   return (neuron0x1a79ba0()*0.00574472);
}

double NNfunction_NN_1_2::synapse0x1a92a50() {
   return (neuron0x1a79ee0()*0.00745081);
}

double NNfunction_NN_1_2::synapse0x1a92a90() {
   return (neuron0x1a7a220()*-0.0095238);
}

double NNfunction_NN_1_2::synapse0x1a92ad0() {
   return (neuron0x1a7a560()*-0.0128069);
}

double NNfunction_NN_1_2::synapse0x1a92b10() {
   return (neuron0x1a7a8a0()*-0.00530062);
}

double NNfunction_NN_1_2::synapse0x1a92b50() {
   return (neuron0x1a7abe0()*-0.00508883);
}

double NNfunction_NN_1_2::synapse0x1a92b90() {
   return (neuron0x1a7af20()*0.00910639);
}

double NNfunction_NN_1_2::synapse0x1a92bd0() {
   return (neuron0x1a7b260()*0.00820563);
}

double NNfunction_NN_1_2::synapse0x1a92660() {
   return (neuron0x1a7b5a0()*0.0019691);
}

double NNfunction_NN_1_2::synapse0x1a926a0() {
   return (neuron0x1a7bb00()*0.00937809);
}

double NNfunction_NN_1_2::synapse0x1a92d20() {
   return (neuron0x1a7be40()*0.0072393);
}

double NNfunction_NN_1_2::synapse0x1a92d60() {
   return (neuron0x1a7c180()*0.00225251);
}

double NNfunction_NN_1_2::synapse0x1a92da0() {
   return (neuron0x1a7c4c0()*-0.0064399);
}

double NNfunction_NN_1_2::synapse0x1a92de0() {
   return (neuron0x1a7c800()*-0.014322);
}

double NNfunction_NN_1_2::synapse0x1a92e20() {
   return (neuron0x1a7cb40()*-0.011332);
}

double NNfunction_NN_1_2::synapse0x1a92e60() {
   return (neuron0x1a7ce80()*-15.366);
}

double NNfunction_NN_1_2::synapse0x1a931e0() {
   return (neuron0x1a78230()*-0.17083);
}

double NNfunction_NN_1_2::synapse0x1a93220() {
   return (neuron0x1a784e0()*-0.0602468);
}

double NNfunction_NN_1_2::synapse0x1a93260() {
   return (neuron0x1a78820()*-4.52691);
}

double NNfunction_NN_1_2::synapse0x1a932a0() {
   return (neuron0x1a78b60()*0.0282224);
}

double NNfunction_NN_1_2::synapse0x1a932e0() {
   return (neuron0x1a78ea0()*-0.00577398);
}

double NNfunction_NN_1_2::synapse0x1a93320() {
   return (neuron0x1a791e0()*-0.0349139);
}

double NNfunction_NN_1_2::synapse0x1a93360() {
   return (neuron0x1a79520()*0.000334835);
}

double NNfunction_NN_1_2::synapse0x1a933a0() {
   return (neuron0x1a79860()*-0.0424872);
}

double NNfunction_NN_1_2::synapse0x1a933e0() {
   return (neuron0x1a79ba0()*0.0369487);
}

double NNfunction_NN_1_2::synapse0x1a93420() {
   return (neuron0x1a79ee0()*0.0447557);
}

double NNfunction_NN_1_2::synapse0x1a93460() {
   return (neuron0x1a7a220()*0.0392763);
}

double NNfunction_NN_1_2::synapse0x1a934a0() {
   return (neuron0x1a7a560()*-0.0886127);
}

double NNfunction_NN_1_2::synapse0x1a934e0() {
   return (neuron0x1a7a8a0()*-0.0106086);
}

double NNfunction_NN_1_2::synapse0x1a93520() {
   return (neuron0x1a7abe0()*-0.0250015);
}

double NNfunction_NN_1_2::synapse0x1a93560() {
   return (neuron0x1a7af20()*0.00938117);
}

double NNfunction_NN_1_2::synapse0x1a935a0() {
   return (neuron0x1a7b260()*-0.0329415);
}

double NNfunction_NN_1_2::synapse0x1a93030() {
   return (neuron0x1a7b5a0()*-0.021714);
}

double NNfunction_NN_1_2::synapse0x1a93070() {
   return (neuron0x1a7bb00()*-0.0376139);
}

double NNfunction_NN_1_2::synapse0x1a936f0() {
   return (neuron0x1a7be40()*-0.0214929);
}

double NNfunction_NN_1_2::synapse0x1a93730() {
   return (neuron0x1a7c180()*-0.0091212);
}

double NNfunction_NN_1_2::synapse0x1a93770() {
   return (neuron0x1a7c4c0()*0.00947063);
}

double NNfunction_NN_1_2::synapse0x1a937b0() {
   return (neuron0x1a7c800()*0.0209987);
}

double NNfunction_NN_1_2::synapse0x1a937f0() {
   return (neuron0x1a7cb40()*0.0246509);
}

double NNfunction_NN_1_2::synapse0x1a93830() {
   return (neuron0x1a7ce80()*2.13434);
}

double NNfunction_NN_1_2::synapse0x1a93bb0() {
   return (neuron0x1a78230()*0.0704685);
}

double NNfunction_NN_1_2::synapse0x1a88180() {
   return (neuron0x1a784e0()*2.26519);
}

double NNfunction_NN_1_2::synapse0x1a881c0() {
   return (neuron0x1a78820()*-0.807888);
}

double NNfunction_NN_1_2::synapse0x1a88200() {
   return (neuron0x1a78b60()*-0.00530783);
}

double NNfunction_NN_1_2::synapse0x1a88450() {
   return (neuron0x1a78ea0()*0.00833236);
}

double NNfunction_NN_1_2::synapse0x1a88490() {
   return (neuron0x1a791e0()*0.0178484);
}

double NNfunction_NN_1_2::synapse0x1a884d0() {
   return (neuron0x1a79520()*0.0796668);
}

double NNfunction_NN_1_2::synapse0x1a88720() {
   return (neuron0x1a79860()*-0.00605713);
}

double NNfunction_NN_1_2::synapse0x1a88760() {
   return (neuron0x1a79ba0()*0.046137);
}

double NNfunction_NN_1_2::synapse0x1a889b0() {
   return (neuron0x1a79ee0()*-0.051493);
}

double NNfunction_NN_1_2::synapse0x1a889f0() {
   return (neuron0x1a7a220()*-0.0313469);
}

double NNfunction_NN_1_2::synapse0x1a88a30() {
   return (neuron0x1a7a560()*-0.0919453);
}

double NNfunction_NN_1_2::synapse0x1a88c80() {
   return (neuron0x1a7a8a0()*-0.110532);
}

double NNfunction_NN_1_2::synapse0x1a88cc0() {
   return (neuron0x1a7abe0()*0.0050143);
}

double NNfunction_NN_1_2::synapse0x1a88f10() {
   return (neuron0x1a7af20()*-0.0738565);
}

double NNfunction_NN_1_2::synapse0x1a88f50() {
   return (neuron0x1a7b260()*0.122092);
}

double NNfunction_NN_1_2::synapse0x1a93a00() {
   return (neuron0x1a7b5a0()*-0.00484445);
}

double NNfunction_NN_1_2::synapse0x1a93a40() {
   return (neuron0x1a7bb00()*0.0166231);
}

double NNfunction_NN_1_2::synapse0x1a890a0() {
   return (neuron0x1a7be40()*0.0446457);
}

double NNfunction_NN_1_2::synapse0x1a895b0() {
   return (neuron0x1a7c180()*-0.057778);
}

double NNfunction_NN_1_2::synapse0x1a895f0() {
   return (neuron0x1a7c4c0()*0.118302);
}

double NNfunction_NN_1_2::synapse0x1a89630() {
   return (neuron0x1a7c800()*0.0855313);
}

double NNfunction_NN_1_2::synapse0x1a89880() {
   return (neuron0x1a7cb40()*0.0379766);
}

double NNfunction_NN_1_2::synapse0x1a898c0() {
   return (neuron0x1a7ce80()*-2.33936);
}

double NNfunction_NN_1_2::synapse0x1a89170() {
   return (neuron0x1a78230()*-0.0118459);
}

double NNfunction_NN_1_2::synapse0x1a891b0() {
   return (neuron0x1a784e0()*-0.492509);
}

double NNfunction_NN_1_2::synapse0x1a891f0() {
   return (neuron0x1a78820()*0.621928);
}

double NNfunction_NN_1_2::synapse0x1a89230() {
   return (neuron0x1a78b60()*0.0856696);
}

double NNfunction_NN_1_2::synapse0x1a89bb0() {
   return (neuron0x1a78ea0()*0.0184943);
}

double NNfunction_NN_1_2::synapse0x1a95f00() {
   return (neuron0x1a791e0()*0.383026);
}

double NNfunction_NN_1_2::synapse0x1a95f40() {
   return (neuron0x1a79520()*0.102293);
}

double NNfunction_NN_1_2::synapse0x1a95f80() {
   return (neuron0x1a79860()*-0.404768);
}

double NNfunction_NN_1_2::synapse0x1a95fc0() {
   return (neuron0x1a79ba0()*-0.269757);
}

double NNfunction_NN_1_2::synapse0x1a96000() {
   return (neuron0x1a79ee0()*0.365851);
}

double NNfunction_NN_1_2::synapse0x1a96040() {
   return (neuron0x1a7a220()*-0.667305);
}

double NNfunction_NN_1_2::synapse0x1a96080() {
   return (neuron0x1a7a560()*-0.244868);
}

double NNfunction_NN_1_2::synapse0x1a960c0() {
   return (neuron0x1a7a8a0()*-0.222931);
}

double NNfunction_NN_1_2::synapse0x1a96100() {
   return (neuron0x1a7abe0()*0.0913568);
}

double NNfunction_NN_1_2::synapse0x1a96140() {
   return (neuron0x1a7af20()*0.0610412);
}

double NNfunction_NN_1_2::synapse0x1a96180() {
   return (neuron0x1a7b260()*0.224181);
}

double NNfunction_NN_1_2::synapse0x1a89a90() {
   return (neuron0x1a7b5a0()*0.0774684);
}

double NNfunction_NN_1_2::synapse0x1a89ad0() {
   return (neuron0x1a7bb00()*0.0759072);
}

double NNfunction_NN_1_2::synapse0x1a962d0() {
   return (neuron0x1a7be40()*0.129401);
}

double NNfunction_NN_1_2::synapse0x1a96310() {
   return (neuron0x1a7c180()*0.207984);
}

double NNfunction_NN_1_2::synapse0x1a96350() {
   return (neuron0x1a7c4c0()*0.383044);
}

double NNfunction_NN_1_2::synapse0x1a96390() {
   return (neuron0x1a7c800()*-0.245036);
}

double NNfunction_NN_1_2::synapse0x1a963d0() {
   return (neuron0x1a7cb40()*-0.343236);
}

double NNfunction_NN_1_2::synapse0x1a96410() {
   return (neuron0x1a7ce80()*-0.497798);
}

double NNfunction_NN_1_2::synapse0x1a96790() {
   return (neuron0x1a78230()*0.0717636);
}

double NNfunction_NN_1_2::synapse0x1a967d0() {
   return (neuron0x1a784e0()*0.22946);
}

double NNfunction_NN_1_2::synapse0x1a96810() {
   return (neuron0x1a78820()*-0.0123706);
}

double NNfunction_NN_1_2::synapse0x1a96850() {
   return (neuron0x1a78b60()*0.0954159);
}

double NNfunction_NN_1_2::synapse0x1a96890() {
   return (neuron0x1a78ea0()*0.275729);
}

double NNfunction_NN_1_2::synapse0x1a968d0() {
   return (neuron0x1a791e0()*-0.507738);
}

double NNfunction_NN_1_2::synapse0x1a96910() {
   return (neuron0x1a79520()*0.327623);
}

double NNfunction_NN_1_2::synapse0x1a96950() {
   return (neuron0x1a79860()*-0.118106);
}

double NNfunction_NN_1_2::synapse0x1a96990() {
   return (neuron0x1a79ba0()*-0.23949);
}

double NNfunction_NN_1_2::synapse0x1a969d0() {
   return (neuron0x1a79ee0()*0.182767);
}

double NNfunction_NN_1_2::synapse0x1a96a10() {
   return (neuron0x1a7a220()*-0.250976);
}

double NNfunction_NN_1_2::synapse0x1a96a50() {
   return (neuron0x1a7a560()*-0.0669604);
}

double NNfunction_NN_1_2::synapse0x1a96a90() {
   return (neuron0x1a7a8a0()*-0.201887);
}

double NNfunction_NN_1_2::synapse0x1a96ad0() {
   return (neuron0x1a7abe0()*-0.305915);
}

double NNfunction_NN_1_2::synapse0x1a96b10() {
   return (neuron0x1a7af20()*-0.223303);
}

double NNfunction_NN_1_2::synapse0x1a96b50() {
   return (neuron0x1a7b260()*-0.107203);
}

double NNfunction_NN_1_2::synapse0x1a965e0() {
   return (neuron0x1a7b5a0()*-0.227026);
}

double NNfunction_NN_1_2::synapse0x1a96620() {
   return (neuron0x1a7bb00()*0.314527);
}

double NNfunction_NN_1_2::synapse0x1a96ca0() {
   return (neuron0x1a7be40()*0.0713835);
}

double NNfunction_NN_1_2::synapse0x1a96ce0() {
   return (neuron0x1a7c180()*-0.519937);
}

double NNfunction_NN_1_2::synapse0x1a96d20() {
   return (neuron0x1a7c4c0()*-0.191047);
}

double NNfunction_NN_1_2::synapse0x1a96d60() {
   return (neuron0x1a7c800()*0.213912);
}

double NNfunction_NN_1_2::synapse0x1a96da0() {
   return (neuron0x1a7cb40()*-0.00856803);
}

double NNfunction_NN_1_2::synapse0x1a96de0() {
   return (neuron0x1a7ce80()*1.67995);
}

double NNfunction_NN_1_2::synapse0x1a97160() {
   return (neuron0x1a78230()*0.0486447);
}

double NNfunction_NN_1_2::synapse0x1a971a0() {
   return (neuron0x1a784e0()*1.76056);
}

double NNfunction_NN_1_2::synapse0x1a971e0() {
   return (neuron0x1a78820()*0.14515);
}

double NNfunction_NN_1_2::synapse0x1a97220() {
   return (neuron0x1a78b60()*-0.0367185);
}

double NNfunction_NN_1_2::synapse0x1a97260() {
   return (neuron0x1a78ea0()*-0.113328);
}

double NNfunction_NN_1_2::synapse0x1a972a0() {
   return (neuron0x1a791e0()*-0.00100067);
}

double NNfunction_NN_1_2::synapse0x1a972e0() {
   return (neuron0x1a79520()*-0.0195053);
}

double NNfunction_NN_1_2::synapse0x1a97320() {
   return (neuron0x1a79860()*-0.0114487);
}

double NNfunction_NN_1_2::synapse0x1a97360() {
   return (neuron0x1a79ba0()*-0.0168461);
}

double NNfunction_NN_1_2::synapse0x1a973a0() {
   return (neuron0x1a79ee0()*0.0133005);
}

double NNfunction_NN_1_2::synapse0x1a973e0() {
   return (neuron0x1a7a220()*0.0570158);
}

double NNfunction_NN_1_2::synapse0x1a97420() {
   return (neuron0x1a7a560()*0.131623);
}

double NNfunction_NN_1_2::synapse0x1a97460() {
   return (neuron0x1a7a8a0()*0.0717908);
}

double NNfunction_NN_1_2::synapse0x1a974a0() {
   return (neuron0x1a7abe0()*0.0227464);
}

double NNfunction_NN_1_2::synapse0x1a974e0() {
   return (neuron0x1a7af20()*-0.0226755);
}

double NNfunction_NN_1_2::synapse0x1a97520() {
   return (neuron0x1a7b260()*-0.000149384);
}

double NNfunction_NN_1_2::synapse0x1a96fb0() {
   return (neuron0x1a7b5a0()*-0.0152073);
}

double NNfunction_NN_1_2::synapse0x1a96ff0() {
   return (neuron0x1a7bb00()*0.0307974);
}

double NNfunction_NN_1_2::synapse0x1a97670() {
   return (neuron0x1a7be40()*0.0148975);
}

double NNfunction_NN_1_2::synapse0x1a976b0() {
   return (neuron0x1a7c180()*0.0149096);
}

double NNfunction_NN_1_2::synapse0x1a976f0() {
   return (neuron0x1a7c4c0()*-0.0466908);
}

double NNfunction_NN_1_2::synapse0x1a97730() {
   return (neuron0x1a7c800()*-0.044677);
}

double NNfunction_NN_1_2::synapse0x1a97770() {
   return (neuron0x1a7cb40()*-0.0297439);
}

double NNfunction_NN_1_2::synapse0x1a977b0() {
   return (neuron0x1a7ce80()*2.66616);
}

double NNfunction_NN_1_2::synapse0x1a97b30() {
   return (neuron0x1a78230()*-0.131941);
}

double NNfunction_NN_1_2::synapse0x1a97b70() {
   return (neuron0x1a784e0()*-0.052006);
}

double NNfunction_NN_1_2::synapse0x1a97bb0() {
   return (neuron0x1a78820()*-4.13299);
}

double NNfunction_NN_1_2::synapse0x1a97bf0() {
   return (neuron0x1a78b60()*0.0196021);
}

double NNfunction_NN_1_2::synapse0x1a97c30() {
   return (neuron0x1a78ea0()*-0.00196734);
}

double NNfunction_NN_1_2::synapse0x1a97c70() {
   return (neuron0x1a791e0()*-0.0282738);
}

double NNfunction_NN_1_2::synapse0x1a97cb0() {
   return (neuron0x1a79520()*0.0036612);
}

double NNfunction_NN_1_2::synapse0x1a97cf0() {
   return (neuron0x1a79860()*-0.033293);
}

double NNfunction_NN_1_2::synapse0x1a97d30() {
   return (neuron0x1a79ba0()*0.0342165);
}

double NNfunction_NN_1_2::synapse0x1a97d70() {
   return (neuron0x1a79ee0()*0.0352956);
}

double NNfunction_NN_1_2::synapse0x1a97db0() {
   return (neuron0x1a7a220()*0.032757);
}

double NNfunction_NN_1_2::synapse0x1a97df0() {
   return (neuron0x1a7a560()*-0.0444342);
}

double NNfunction_NN_1_2::synapse0x1a97e30() {
   return (neuron0x1a7a8a0()*-0.0137297);
}

double NNfunction_NN_1_2::synapse0x1a97e70() {
   return (neuron0x1a7abe0()*-0.0179202);
}

double NNfunction_NN_1_2::synapse0x1a97eb0() {
   return (neuron0x1a7af20()*0.0062871);
}

double NNfunction_NN_1_2::synapse0x1a97ef0() {
   return (neuron0x1a7b260()*-0.0335193);
}

double NNfunction_NN_1_2::synapse0x1a97980() {
   return (neuron0x1a7b5a0()*-0.0127819);
}

double NNfunction_NN_1_2::synapse0x1a979c0() {
   return (neuron0x1a7bb00()*-0.0264147);
}

double NNfunction_NN_1_2::synapse0x1a98040() {
   return (neuron0x1a7be40()*-0.0150943);
}

double NNfunction_NN_1_2::synapse0x1a98080() {
   return (neuron0x1a7c180()*-0.00784936);
}

double NNfunction_NN_1_2::synapse0x1a980c0() {
   return (neuron0x1a7c4c0()*0.00324851);
}

double NNfunction_NN_1_2::synapse0x1a98100() {
   return (neuron0x1a7c800()*0.0107281);
}

double NNfunction_NN_1_2::synapse0x1a98140() {
   return (neuron0x1a7cb40()*0.0165571);
}

double NNfunction_NN_1_2::synapse0x1a98180() {
   return (neuron0x1a7ce80()*2.0057);
}

double NNfunction_NN_1_2::synapse0x1a98500() {
   return (neuron0x1a78230()*0.00214292);
}

double NNfunction_NN_1_2::synapse0x1a98540() {
   return (neuron0x1a784e0()*-4.53304);
}

double NNfunction_NN_1_2::synapse0x1a98580() {
   return (neuron0x1a78820()*1.55659);
}

double NNfunction_NN_1_2::synapse0x1a985c0() {
   return (neuron0x1a78b60()*0.0202385);
}

double NNfunction_NN_1_2::synapse0x1a98600() {
   return (neuron0x1a78ea0()*0.0145273);
}

double NNfunction_NN_1_2::synapse0x1a98640() {
   return (neuron0x1a791e0()*0.0194563);
}

double NNfunction_NN_1_2::synapse0x1a98680() {
   return (neuron0x1a79520()*0.017707);
}

double NNfunction_NN_1_2::synapse0x1a986c0() {
   return (neuron0x1a79860()*-0.00482007);
}

double NNfunction_NN_1_2::synapse0x1a98700() {
   return (neuron0x1a79ba0()*-0.00206111);
}

double NNfunction_NN_1_2::synapse0x1a98740() {
   return (neuron0x1a79ee0()*0.023091);
}

double NNfunction_NN_1_2::synapse0x1a98780() {
   return (neuron0x1a7a220()*0.0056421);
}

double NNfunction_NN_1_2::synapse0x1a987c0() {
   return (neuron0x1a7a560()*0.26936);
}

double NNfunction_NN_1_2::synapse0x1a98800() {
   return (neuron0x1a7a8a0()*0.0314218);
}

double NNfunction_NN_1_2::synapse0x1a98840() {
   return (neuron0x1a7abe0()*0.0190172);
}

double NNfunction_NN_1_2::synapse0x1a98880() {
   return (neuron0x1a7af20()*0.0215521);
}

double NNfunction_NN_1_2::synapse0x1a988c0() {
   return (neuron0x1a7b260()*0.00369616);
}

double NNfunction_NN_1_2::synapse0x1a98350() {
   return (neuron0x1a7b5a0()*0.00776001);
}

double NNfunction_NN_1_2::synapse0x1a98390() {
   return (neuron0x1a7bb00()*0.00410402);
}

double NNfunction_NN_1_2::synapse0x1a98a10() {
   return (neuron0x1a7be40()*-0.00321432);
}

double NNfunction_NN_1_2::synapse0x1a98a50() {
   return (neuron0x1a7c180()*-0.0103948);
}

double NNfunction_NN_1_2::synapse0x1a98a90() {
   return (neuron0x1a7c4c0()*0.015368);
}

double NNfunction_NN_1_2::synapse0x1a98ad0() {
   return (neuron0x1a7c800()*0.00408135);
}

double NNfunction_NN_1_2::synapse0x1a98b10() {
   return (neuron0x1a7cb40()*-0.00986006);
}

double NNfunction_NN_1_2::synapse0x1a98b50() {
   return (neuron0x1a7ce80()*-2.37994);
}

double NNfunction_NN_1_2::synapse0x1a98ed0() {
   return (neuron0x1a78230()*-0.0330569);
}

double NNfunction_NN_1_2::synapse0x1a98f10() {
   return (neuron0x1a784e0()*-20.9879);
}

double NNfunction_NN_1_2::synapse0x1a98f50() {
   return (neuron0x1a78820()*-0.323728);
}

double NNfunction_NN_1_2::synapse0x1a98f90() {
   return (neuron0x1a78b60()*-0.0252149);
}

double NNfunction_NN_1_2::synapse0x1a98fd0() {
   return (neuron0x1a78ea0()*-0.0321639);
}

double NNfunction_NN_1_2::synapse0x1a99010() {
   return (neuron0x1a791e0()*0.0336131);
}

double NNfunction_NN_1_2::synapse0x1a99050() {
   return (neuron0x1a79520()*0.00446857);
}

double NNfunction_NN_1_2::synapse0x1a99090() {
   return (neuron0x1a79860()*-0.0201151);
}

double NNfunction_NN_1_2::synapse0x1a990d0() {
   return (neuron0x1a79ba0()*-0.0265354);
}

double NNfunction_NN_1_2::synapse0x1a99110() {
   return (neuron0x1a79ee0()*0.0349243);
}

double NNfunction_NN_1_2::synapse0x1a99150() {
   return (neuron0x1a7a220()*-0.0121201);
}

double NNfunction_NN_1_2::synapse0x1a99190() {
   return (neuron0x1a7a560()*-0.0163783);
}

double NNfunction_NN_1_2::synapse0x1a991d0() {
   return (neuron0x1a7a8a0()*0.00982962);
}

double NNfunction_NN_1_2::synapse0x1a99210() {
   return (neuron0x1a7abe0()*0.00145343);
}

double NNfunction_NN_1_2::synapse0x1a99250() {
   return (neuron0x1a7af20()*0.0615937);
}

double NNfunction_NN_1_2::synapse0x1a99290() {
   return (neuron0x1a7b260()*-0.0324962);
}

double NNfunction_NN_1_2::synapse0x1a98d20() {
   return (neuron0x1a7b5a0()*-0.0367668);
}

double NNfunction_NN_1_2::synapse0x1a98d60() {
   return (neuron0x1a7bb00()*0.0423398);
}

double NNfunction_NN_1_2::synapse0x1a993e0() {
   return (neuron0x1a7be40()*0.00195769);
}

double NNfunction_NN_1_2::synapse0x1a99420() {
   return (neuron0x1a7c180()*0.0111428);
}

double NNfunction_NN_1_2::synapse0x1a99460() {
   return (neuron0x1a7c4c0()*-0.0350675);
}

double NNfunction_NN_1_2::synapse0x1a994a0() {
   return (neuron0x1a7c800()*-0.00987804);
}

double NNfunction_NN_1_2::synapse0x1a994e0() {
   return (neuron0x1a7cb40()*0.0352922);
}

double NNfunction_NN_1_2::synapse0x1a99520() {
   return (neuron0x1a7ce80()*5.16018);
}

double NNfunction_NN_1_2::synapse0x1a998a0() {
   return (neuron0x1a78230()*-0.145025);
}

double NNfunction_NN_1_2::synapse0x1a998e0() {
   return (neuron0x1a784e0()*0.0699422);
}

double NNfunction_NN_1_2::synapse0x1a99920() {
   return (neuron0x1a78820()*0.353031);
}

double NNfunction_NN_1_2::synapse0x1a99960() {
   return (neuron0x1a78b60()*-0.0713663);
}

double NNfunction_NN_1_2::synapse0x1a999a0() {
   return (neuron0x1a78ea0()*0.512912);
}

double NNfunction_NN_1_2::synapse0x1a999e0() {
   return (neuron0x1a791e0()*-0.0687676);
}

double NNfunction_NN_1_2::synapse0x1a99a20() {
   return (neuron0x1a79520()*0.129294);
}

double NNfunction_NN_1_2::synapse0x1a99a60() {
   return (neuron0x1a79860()*-0.26729);
}

double NNfunction_NN_1_2::synapse0x1a99aa0() {
   return (neuron0x1a79ba0()*0.347158);
}

double NNfunction_NN_1_2::synapse0x1a99ae0() {
   return (neuron0x1a79ee0()*-0.0629628);
}

double NNfunction_NN_1_2::synapse0x1a99b20() {
   return (neuron0x1a7a220()*-0.067277);
}

double NNfunction_NN_1_2::synapse0x1a99b60() {
   return (neuron0x1a7a560()*0.140164);
}

double NNfunction_NN_1_2::synapse0x1a99ba0() {
   return (neuron0x1a7a8a0()*0.671757);
}

double NNfunction_NN_1_2::synapse0x1a99be0() {
   return (neuron0x1a7abe0()*-0.348743);
}

double NNfunction_NN_1_2::synapse0x1a99c20() {
   return (neuron0x1a7af20()*0.218011);
}

double NNfunction_NN_1_2::synapse0x1a99c60() {
   return (neuron0x1a7b260()*0.210395);
}

double NNfunction_NN_1_2::synapse0x1a996f0() {
   return (neuron0x1a7b5a0()*0.0385767);
}

double NNfunction_NN_1_2::synapse0x1a99730() {
   return (neuron0x1a7bb00()*-0.108441);
}

double NNfunction_NN_1_2::synapse0x1a99db0() {
   return (neuron0x1a7be40()*-0.505862);
}

double NNfunction_NN_1_2::synapse0x1a99df0() {
   return (neuron0x1a7c180()*0.398499);
}

double NNfunction_NN_1_2::synapse0x1a99e30() {
   return (neuron0x1a7c4c0()*-0.195371);
}

double NNfunction_NN_1_2::synapse0x1a99e70() {
   return (neuron0x1a7c800()*0.241499);
}

double NNfunction_NN_1_2::synapse0x1a99eb0() {
   return (neuron0x1a7cb40()*-0.218274);
}

double NNfunction_NN_1_2::synapse0x1a99ef0() {
   return (neuron0x1a7ce80()*0.167928);
}

double NNfunction_NN_1_2::synapse0x1a9a270() {
   return (neuron0x1a78230()*-0.0442371);
}

double NNfunction_NN_1_2::synapse0x1a9a2b0() {
   return (neuron0x1a784e0()*-0.0237391);
}

double NNfunction_NN_1_2::synapse0x1a9a2f0() {
   return (neuron0x1a78820()*-0.405434);
}

double NNfunction_NN_1_2::synapse0x1a9a330() {
   return (neuron0x1a78b60()*0.496617);
}

double NNfunction_NN_1_2::synapse0x1a9a370() {
   return (neuron0x1a78ea0()*-0.14845);
}

double NNfunction_NN_1_2::synapse0x1a9a3b0() {
   return (neuron0x1a791e0()*-0.0259467);
}

double NNfunction_NN_1_2::synapse0x1a9a3f0() {
   return (neuron0x1a79520()*0.193538);
}

double NNfunction_NN_1_2::synapse0x1a9a430() {
   return (neuron0x1a79860()*-0.0830561);
}

double NNfunction_NN_1_2::synapse0x1a9a470() {
   return (neuron0x1a79ba0()*0.112739);
}

double NNfunction_NN_1_2::synapse0x1a9a4b0() {
   return (neuron0x1a79ee0()*0.106532);
}

double NNfunction_NN_1_2::synapse0x1a9a4f0() {
   return (neuron0x1a7a220()*-0.092148);
}

double NNfunction_NN_1_2::synapse0x1a9a530() {
   return (neuron0x1a7a560()*-0.912918);
}

double NNfunction_NN_1_2::synapse0x1a9a570() {
   return (neuron0x1a7a8a0()*-0.125806);
}

double NNfunction_NN_1_2::synapse0x1a9a5b0() {
   return (neuron0x1a7abe0()*0.0255085);
}

double NNfunction_NN_1_2::synapse0x1a9a5f0() {
   return (neuron0x1a7af20()*0.122559);
}

double NNfunction_NN_1_2::synapse0x1a9a630() {
   return (neuron0x1a7b260()*-0.01366);
}

double NNfunction_NN_1_2::synapse0x1a9a0c0() {
   return (neuron0x1a7b5a0()*-0.201624);
}

double NNfunction_NN_1_2::synapse0x1a9a100() {
   return (neuron0x1a7bb00()*-0.324254);
}

double NNfunction_NN_1_2::synapse0x1a9a780() {
   return (neuron0x1a7be40()*0.104866);
}

double NNfunction_NN_1_2::synapse0x1a9a7c0() {
   return (neuron0x1a7c180()*0.0863637);
}

double NNfunction_NN_1_2::synapse0x1a9a800() {
   return (neuron0x1a7c4c0()*-0.217632);
}

double NNfunction_NN_1_2::synapse0x1a9a840() {
   return (neuron0x1a7c800()*-0.121501);
}

double NNfunction_NN_1_2::synapse0x1a9a880() {
   return (neuron0x1a7cb40()*-0.0971462);
}

double NNfunction_NN_1_2::synapse0x1a9a8c0() {
   return (neuron0x1a7ce80()*1.50149);
}

double NNfunction_NN_1_2::synapse0x1a83370() {
   return (neuron0x1a78230()*-0.0368684);
}

double NNfunction_NN_1_2::synapse0x1a833b0() {
   return (neuron0x1a784e0()*-7.20552);
}

double NNfunction_NN_1_2::synapse0x1a833f0() {
   return (neuron0x1a78820()*-0.191788);
}

double NNfunction_NN_1_2::synapse0x1a83430() {
   return (neuron0x1a78b60()*-0.0042311);
}

double NNfunction_NN_1_2::synapse0x1a83470() {
   return (neuron0x1a78ea0()*0.0284887);
}

double NNfunction_NN_1_2::synapse0x1a834b0() {
   return (neuron0x1a791e0()*-0.018316);
}

double NNfunction_NN_1_2::synapse0x1a834f0() {
   return (neuron0x1a79520()*-0.0105106);
}

double NNfunction_NN_1_2::synapse0x1a83530() {
   return (neuron0x1a79860()*0.00872811);
}

double NNfunction_NN_1_2::synapse0x1a9b050() {
   return (neuron0x1a79ba0()*0.00661187);
}

double NNfunction_NN_1_2::synapse0x1a9b090() {
   return (neuron0x1a79ee0()*0.0402677);
}

double NNfunction_NN_1_2::synapse0x1a9b0d0() {
   return (neuron0x1a7a220()*-0.0148854);
}

double NNfunction_NN_1_2::synapse0x1a9b110() {
   return (neuron0x1a7a560()*-0.0175031);
}

double NNfunction_NN_1_2::synapse0x1a9b150() {
   return (neuron0x1a7a8a0()*-0.00845084);
}

double NNfunction_NN_1_2::synapse0x1a9b190() {
   return (neuron0x1a7abe0()*-0.0495297);
}

double NNfunction_NN_1_2::synapse0x1a9b1d0() {
   return (neuron0x1a7af20()*0.0460586);
}

double NNfunction_NN_1_2::synapse0x1a9b210() {
   return (neuron0x1a7b260()*0.0268114);
}

double NNfunction_NN_1_2::synapse0x1a9aa90() {
   return (neuron0x1a7b5a0()*0.00377965);
}

double NNfunction_NN_1_2::synapse0x1a9aad0() {
   return (neuron0x1a7bb00()*-0.0352251);
}

double NNfunction_NN_1_2::synapse0x1a9b360() {
   return (neuron0x1a7be40()*-0.000559837);
}

double NNfunction_NN_1_2::synapse0x1a9b3a0() {
   return (neuron0x1a7c180()*-0.00352205);
}

double NNfunction_NN_1_2::synapse0x1a9b3e0() {
   return (neuron0x1a7c4c0()*-0.0293905);
}

double NNfunction_NN_1_2::synapse0x1a9b420() {
   return (neuron0x1a7c800()*-0.0081027);
}

double NNfunction_NN_1_2::synapse0x1a9b460() {
   return (neuron0x1a7cb40()*0.000389309);
}

double NNfunction_NN_1_2::synapse0x1a9b4a0() {
   return (neuron0x1a7ce80()*-2.53254);
}

double NNfunction_NN_1_2::synapse0x1a9b820() {
   return (neuron0x1a78230()*0.373576);
}

double NNfunction_NN_1_2::synapse0x1a9b860() {
   return (neuron0x1a784e0()*-0.127306);
}

double NNfunction_NN_1_2::synapse0x1a9b8a0() {
   return (neuron0x1a78820()*0.0138887);
}

double NNfunction_NN_1_2::synapse0x1a9b8e0() {
   return (neuron0x1a78b60()*-0.149116);
}

double NNfunction_NN_1_2::synapse0x1a9b920() {
   return (neuron0x1a78ea0()*-0.0854153);
}

double NNfunction_NN_1_2::synapse0x1a9b960() {
   return (neuron0x1a791e0()*-0.267854);
}

double NNfunction_NN_1_2::synapse0x1a9b9a0() {
   return (neuron0x1a79520()*0.37906);
}

double NNfunction_NN_1_2::synapse0x1a9b9e0() {
   return (neuron0x1a79860()*0.0306585);
}

double NNfunction_NN_1_2::synapse0x1a9ba20() {
   return (neuron0x1a79ba0()*0.177484);
}

double NNfunction_NN_1_2::synapse0x1a9ba60() {
   return (neuron0x1a79ee0()*0.161296);
}

double NNfunction_NN_1_2::synapse0x1a9baa0() {
   return (neuron0x1a7a220()*-0.154447);
}

double NNfunction_NN_1_2::synapse0x1a9bae0() {
   return (neuron0x1a7a560()*-0.252948);
}

double NNfunction_NN_1_2::synapse0x1a9bb20() {
   return (neuron0x1a7a8a0()*0.107247);
}

double NNfunction_NN_1_2::synapse0x1a9bb60() {
   return (neuron0x1a7abe0()*0.235018);
}

double NNfunction_NN_1_2::synapse0x1a9bba0() {
   return (neuron0x1a7af20()*-0.241027);
}

double NNfunction_NN_1_2::synapse0x1a9bbe0() {
   return (neuron0x1a7b260()*-0.0509026);
}

double NNfunction_NN_1_2::synapse0x1a9b670() {
   return (neuron0x1a7b5a0()*-0.544249);
}

double NNfunction_NN_1_2::synapse0x1a9b6b0() {
   return (neuron0x1a7bb00()*-0.158575);
}

double NNfunction_NN_1_2::synapse0x1a9bd30() {
   return (neuron0x1a7be40()*-0.189009);
}

double NNfunction_NN_1_2::synapse0x1a9bd70() {
   return (neuron0x1a7c180()*-0.104998);
}

double NNfunction_NN_1_2::synapse0x1a9bdb0() {
   return (neuron0x1a7c4c0()*-0.226661);
}

double NNfunction_NN_1_2::synapse0x1a9bdf0() {
   return (neuron0x1a7c800()*-0.0769873);
}

double NNfunction_NN_1_2::synapse0x1a9be30() {
   return (neuron0x1a7cb40()*-0.179178);
}

double NNfunction_NN_1_2::synapse0x1a9be70() {
   return (neuron0x1a7ce80()*1.36494);
}

double NNfunction_NN_1_2::synapse0x1a9c1f0() {
   return (neuron0x1a78230()*0.195175);
}

double NNfunction_NN_1_2::synapse0x1a9c230() {
   return (neuron0x1a784e0()*0.0182444);
}

double NNfunction_NN_1_2::synapse0x1a9c270() {
   return (neuron0x1a78820()*5.2725);
}

double NNfunction_NN_1_2::synapse0x1a9c2b0() {
   return (neuron0x1a78b60()*0.0229932);
}

double NNfunction_NN_1_2::synapse0x1a9c2f0() {
   return (neuron0x1a78ea0()*-0.00245448);
}

double NNfunction_NN_1_2::synapse0x1a9c330() {
   return (neuron0x1a791e0()*0.0207863);
}

double NNfunction_NN_1_2::synapse0x1a9c370() {
   return (neuron0x1a79520()*-0.00772914);
}

double NNfunction_NN_1_2::synapse0x1a9c3b0() {
   return (neuron0x1a79860()*0.0135283);
}

double NNfunction_NN_1_2::synapse0x1a9c3f0() {
   return (neuron0x1a79ba0()*-0.014057);
}

double NNfunction_NN_1_2::synapse0x1a9c430() {
   return (neuron0x1a79ee0()*-0.0129533);
}

double NNfunction_NN_1_2::synapse0x1a9c470() {
   return (neuron0x1a7a220()*-0.0269634);
}

double NNfunction_NN_1_2::synapse0x1a9c4b0() {
   return (neuron0x1a7a560()*-0.154123);
}

double NNfunction_NN_1_2::synapse0x1a9c4f0() {
   return (neuron0x1a7a8a0()*0.0145587);
}

double NNfunction_NN_1_2::synapse0x1a9c530() {
   return (neuron0x1a7abe0()*-0.00628859);
}

double NNfunction_NN_1_2::synapse0x1a9c570() {
   return (neuron0x1a7af20()*0.00296547);
}

double NNfunction_NN_1_2::synapse0x1a9c5b0() {
   return (neuron0x1a7b260()*0.0117057);
}

double NNfunction_NN_1_2::synapse0x1a9c040() {
   return (neuron0x1a7b5a0()*0.0201652);
}

double NNfunction_NN_1_2::synapse0x1a9c080() {
   return (neuron0x1a7bb00()*0.00131719);
}

double NNfunction_NN_1_2::synapse0x1a8cbb0() {
   return (neuron0x1a7be40()*-0.0111702);
}

double NNfunction_NN_1_2::synapse0x1a8cbf0() {
   return (neuron0x1a7c180()*-0.00478778);
}

double NNfunction_NN_1_2::synapse0x1a8cc30() {
   return (neuron0x1a7c4c0()*0.0395958);
}

double NNfunction_NN_1_2::synapse0x1a8cc70() {
   return (neuron0x1a7c800()*0.0193123);
}

double NNfunction_NN_1_2::synapse0x1a8ccb0() {
   return (neuron0x1a7cb40()*-0.00101145);
}

double NNfunction_NN_1_2::synapse0x1a8ccf0() {
   return (neuron0x1a7ce80()*3.81212);
}

double NNfunction_NN_1_2::synapse0x1a8d070() {
   return (neuron0x1a78230()*-0.18934);
}

double NNfunction_NN_1_2::synapse0x1a8d0b0() {
   return (neuron0x1a784e0()*-0.0116232);
}

double NNfunction_NN_1_2::synapse0x1a8d0f0() {
   return (neuron0x1a78820()*-0.165293);
}

double NNfunction_NN_1_2::synapse0x1a8d130() {
   return (neuron0x1a78b60()*-0.0277889);
}

double NNfunction_NN_1_2::synapse0x1a8d170() {
   return (neuron0x1a78ea0()*-0.0132773);
}

double NNfunction_NN_1_2::synapse0x1a8d1b0() {
   return (neuron0x1a791e0()*-0.0134723);
}

double NNfunction_NN_1_2::synapse0x1a8d1f0() {
   return (neuron0x1a79520()*0.0239988);
}

double NNfunction_NN_1_2::synapse0x1a8d230() {
   return (neuron0x1a79860()*0.0281461);
}

double NNfunction_NN_1_2::synapse0x1a8d270() {
   return (neuron0x1a79ba0()*0.00671329);
}

double NNfunction_NN_1_2::synapse0x1a8d2b0() {
   return (neuron0x1a79ee0()*0.0228402);
}

double NNfunction_NN_1_2::synapse0x1a8d2f0() {
   return (neuron0x1a7a220()*-0.0151727);
}

double NNfunction_NN_1_2::synapse0x1a8d330() {
   return (neuron0x1a7a560()*0.137299);
}

double NNfunction_NN_1_2::synapse0x1a8d370() {
   return (neuron0x1a7a8a0()*0.0289835);
}

double NNfunction_NN_1_2::synapse0x1a8d3b0() {
   return (neuron0x1a7abe0()*-0.00165743);
}

double NNfunction_NN_1_2::synapse0x1a8d3f0() {
   return (neuron0x1a7af20()*-0.050285);
}

double NNfunction_NN_1_2::synapse0x1a8d430() {
   return (neuron0x1a7b260()*0.0104693);
}

double NNfunction_NN_1_2::synapse0x1a8cec0() {
   return (neuron0x1a7b5a0()*-0.0153351);
}

double NNfunction_NN_1_2::synapse0x1a8cf00() {
   return (neuron0x1a7bb00()*0.0354642);
}

double NNfunction_NN_1_2::synapse0x1a8d580() {
   return (neuron0x1a7be40()*-0.0218785);
}

double NNfunction_NN_1_2::synapse0x1a8d5c0() {
   return (neuron0x1a7c180()*-0.00659917);
}

double NNfunction_NN_1_2::synapse0x1a8d600() {
   return (neuron0x1a7c4c0()*0.0084458);
}

double NNfunction_NN_1_2::synapse0x1a8d640() {
   return (neuron0x1a7c800()*0.022391);
}

double NNfunction_NN_1_2::synapse0x1a8d680() {
   return (neuron0x1a7cb40()*-0.0299195);
}

double NNfunction_NN_1_2::synapse0x1a8d6c0() {
   return (neuron0x1a7ce80()*-1.34253);
}

double NNfunction_NN_1_2::synapse0x1a8da40() {
   return (neuron0x1a78230()*-0.130899);
}

double NNfunction_NN_1_2::synapse0x1a8da80() {
   return (neuron0x1a784e0()*0.0628099);
}

double NNfunction_NN_1_2::synapse0x1a8dac0() {
   return (neuron0x1a78820()*-0.222733);
}

double NNfunction_NN_1_2::synapse0x1a8db00() {
   return (neuron0x1a78b60()*0.169471);
}

double NNfunction_NN_1_2::synapse0x1a8db40() {
   return (neuron0x1a78ea0()*0.0261546);
}

double NNfunction_NN_1_2::synapse0x1a8db80() {
   return (neuron0x1a791e0()*-0.0374166);
}

double NNfunction_NN_1_2::synapse0x1a8dbc0() {
   return (neuron0x1a79520()*0.0598201);
}

double NNfunction_NN_1_2::synapse0x1a8dc00() {
   return (neuron0x1a79860()*-0.0999483);
}

double NNfunction_NN_1_2::synapse0x1a8dc40() {
   return (neuron0x1a79ba0()*0.123498);
}

double NNfunction_NN_1_2::synapse0x1a8dc80() {
   return (neuron0x1a79ee0()*0.00166574);
}

double NNfunction_NN_1_2::synapse0x1a8dcc0() {
   return (neuron0x1a7a220()*0.0986597);
}

double NNfunction_NN_1_2::synapse0x1a8dd00() {
   return (neuron0x1a7a560()*-0.142119);
}

double NNfunction_NN_1_2::synapse0x1a8dd40() {
   return (neuron0x1a7a8a0()*-0.378255);
}

double NNfunction_NN_1_2::synapse0x1a8dd80() {
   return (neuron0x1a7abe0()*-0.0539677);
}

double NNfunction_NN_1_2::synapse0x1a8ddc0() {
   return (neuron0x1a7af20()*-0.0748582);
}

double NNfunction_NN_1_2::synapse0x1a8de00() {
   return (neuron0x1a7b260()*0.00263693);
}

double NNfunction_NN_1_2::synapse0x1a8d890() {
   return (neuron0x1a7b5a0()*-0.0605879);
}

double NNfunction_NN_1_2::synapse0x1a8d8d0() {
   return (neuron0x1a7bb00()*-0.0711583);
}

double NNfunction_NN_1_2::synapse0x1a8df50() {
   return (neuron0x1a7be40()*-0.0738384);
}

double NNfunction_NN_1_2::synapse0x1a8df90() {
   return (neuron0x1a7c180()*0.111626);
}

double NNfunction_NN_1_2::synapse0x1a8dfd0() {
   return (neuron0x1a7c4c0()*-0.0813136);
}

double NNfunction_NN_1_2::synapse0x1a8e010() {
   return (neuron0x1a7c800()*-0.066673);
}

double NNfunction_NN_1_2::synapse0x1a8e050() {
   return (neuron0x1a7cb40()*-0.12828);
}

double NNfunction_NN_1_2::synapse0x1a8e090() {
   return (neuron0x1a7ce80()*-0.838821);
}

double NNfunction_NN_1_2::synapse0x1a8e410() {
   return (neuron0x1a78230()*0.0155229);
}

double NNfunction_NN_1_2::synapse0x1a8e450() {
   return (neuron0x1a784e0()*0.07302);
}

double NNfunction_NN_1_2::synapse0x1a8e490() {
   return (neuron0x1a78820()*-0.686852);
}

double NNfunction_NN_1_2::synapse0x1a8e4d0() {
   return (neuron0x1a78b60()*-0.208294);
}

double NNfunction_NN_1_2::synapse0x1a8e510() {
   return (neuron0x1a78ea0()*0.267681);
}

double NNfunction_NN_1_2::synapse0x1a8e550() {
   return (neuron0x1a791e0()*0.00717859);
}

double NNfunction_NN_1_2::synapse0x1a8e590() {
   return (neuron0x1a79520()*0.223049);
}

double NNfunction_NN_1_2::synapse0x1a8e5d0() {
   return (neuron0x1a79860()*0.1605);
}

double NNfunction_NN_1_2::synapse0x1a8e610() {
   return (neuron0x1a79ba0()*0.157423);
}

double NNfunction_NN_1_2::synapse0x1a8e650() {
   return (neuron0x1a79ee0()*0.672853);
}

double NNfunction_NN_1_2::synapse0x1a8e690() {
   return (neuron0x1a7a220()*0.468766);
}

double NNfunction_NN_1_2::synapse0x1a8e6d0() {
   return (neuron0x1a7a560()*0.0770094);
}

double NNfunction_NN_1_2::synapse0x1a8e710() {
   return (neuron0x1a7a8a0()*-0.0146081);
}

double NNfunction_NN_1_2::synapse0x1a8e750() {
   return (neuron0x1a7abe0()*-0.475635);
}

double NNfunction_NN_1_2::synapse0x1a8e790() {
   return (neuron0x1a7af20()*-0.376418);
}

double NNfunction_NN_1_2::synapse0x1a8e7d0() {
   return (neuron0x1a7b260()*-0.358348);
}

double NNfunction_NN_1_2::synapse0x1a8e260() {
   return (neuron0x1a7b5a0()*0.103851);
}

double NNfunction_NN_1_2::synapse0x1a8e2a0() {
   return (neuron0x1a7bb00()*0.0260353);
}

double NNfunction_NN_1_2::synapse0x1a8e920() {
   return (neuron0x1a7be40()*-0.120789);
}

double NNfunction_NN_1_2::synapse0x1a8e960() {
   return (neuron0x1a7c180()*0.702389);
}

double NNfunction_NN_1_2::synapse0x1a8e9a0() {
   return (neuron0x1a7c4c0()*-0.0961877);
}

double NNfunction_NN_1_2::synapse0x1a8e9e0() {
   return (neuron0x1a7c800()*-0.254473);
}

double NNfunction_NN_1_2::synapse0x1a8ea20() {
   return (neuron0x1a7cb40()*-0.383559);
}

double NNfunction_NN_1_2::synapse0x1a8ea60() {
   return (neuron0x1a7ce80()*1.24365);
}

double NNfunction_NN_1_2::synapse0x1aa0930() {
   return (neuron0x1a78230()*-0.168394);
}

double NNfunction_NN_1_2::synapse0x1aa0970() {
   return (neuron0x1a784e0()*-0.484504);
}

double NNfunction_NN_1_2::synapse0x1aa09b0() {
   return (neuron0x1a78820()*-0.0691328);
}

double NNfunction_NN_1_2::synapse0x1aa09f0() {
   return (neuron0x1a78b60()*0.355404);
}

double NNfunction_NN_1_2::synapse0x1aa0a30() {
   return (neuron0x1a78ea0()*-0.0946699);
}

double NNfunction_NN_1_2::synapse0x1aa0a70() {
   return (neuron0x1a791e0()*0.190729);
}

double NNfunction_NN_1_2::synapse0x1aa0ab0() {
   return (neuron0x1a79520()*0.180605);
}

double NNfunction_NN_1_2::synapse0x1aa0af0() {
   return (neuron0x1a79860()*0.0176449);
}

double NNfunction_NN_1_2::synapse0x1aa0b30() {
   return (neuron0x1a79ba0()*0.048359);
}

double NNfunction_NN_1_2::synapse0x1aa0b70() {
   return (neuron0x1a79ee0()*0.294349);
}

double NNfunction_NN_1_2::synapse0x1aa0bb0() {
   return (neuron0x1a7a220()*-0.0124248);
}

double NNfunction_NN_1_2::synapse0x1aa0bf0() {
   return (neuron0x1a7a560()*0.371113);
}

double NNfunction_NN_1_2::synapse0x1aa0c30() {
   return (neuron0x1a7a8a0()*0.207306);
}

double NNfunction_NN_1_2::synapse0x1aa0c70() {
   return (neuron0x1a7abe0()*-0.0458727);
}

double NNfunction_NN_1_2::synapse0x1aa0cb0() {
   return (neuron0x1a7af20()*0.0194241);
}

double NNfunction_NN_1_2::synapse0x1aa0cf0() {
   return (neuron0x1a7b260()*-0.0537632);
}

double NNfunction_NN_1_2::synapse0x1a8eaa0() {
   return (neuron0x1a7b5a0()*0.190796);
}

double NNfunction_NN_1_2::synapse0x1a8eae0() {
   return (neuron0x1a7bb00()*0.0486429);
}

double NNfunction_NN_1_2::synapse0x1aa0e40() {
   return (neuron0x1a7be40()*-0.0518902);
}

double NNfunction_NN_1_2::synapse0x1aa0e80() {
   return (neuron0x1a7c180()*0.0821507);
}

double NNfunction_NN_1_2::synapse0x1aa0ec0() {
   return (neuron0x1a7c4c0()*0.140653);
}

double NNfunction_NN_1_2::synapse0x1aa0f00() {
   return (neuron0x1a7c800()*0.00564601);
}

double NNfunction_NN_1_2::synapse0x1aa0f40() {
   return (neuron0x1a7cb40()*0.00948142);
}

double NNfunction_NN_1_2::synapse0x1aa0f80() {
   return (neuron0x1a7ce80()*0.489337);
}

double NNfunction_NN_1_2::synapse0x1aa1300() {
   return (neuron0x1a78230()*0.0554601);
}

double NNfunction_NN_1_2::synapse0x1aa1340() {
   return (neuron0x1a784e0()*-0.111266);
}

double NNfunction_NN_1_2::synapse0x1aa1380() {
   return (neuron0x1a78820()*0.0247049);
}

double NNfunction_NN_1_2::synapse0x1aa13c0() {
   return (neuron0x1a78b60()*-0.128217);
}

double NNfunction_NN_1_2::synapse0x1aa1400() {
   return (neuron0x1a78ea0()*0.0925839);
}

double NNfunction_NN_1_2::synapse0x1aa1440() {
   return (neuron0x1a791e0()*-0.0332267);
}

double NNfunction_NN_1_2::synapse0x1aa1480() {
   return (neuron0x1a79520()*0.201351);
}

double NNfunction_NN_1_2::synapse0x1aa14c0() {
   return (neuron0x1a79860()*-0.044814);
}

double NNfunction_NN_1_2::synapse0x1aa1500() {
   return (neuron0x1a79ba0()*-0.0867379);
}

double NNfunction_NN_1_2::synapse0x1aa1540() {
   return (neuron0x1a79ee0()*-0.0708223);
}

double NNfunction_NN_1_2::synapse0x1aa1580() {
   return (neuron0x1a7a220()*0.0540014);
}

double NNfunction_NN_1_2::synapse0x1aa15c0() {
   return (neuron0x1a7a560()*-0.249519);
}

double NNfunction_NN_1_2::synapse0x1aa1600() {
   return (neuron0x1a7a8a0()*0.202608);
}

double NNfunction_NN_1_2::synapse0x1aa1640() {
   return (neuron0x1a7abe0()*0.0306759);
}

double NNfunction_NN_1_2::synapse0x1aa1680() {
   return (neuron0x1a7af20()*-0.375392);
}

double NNfunction_NN_1_2::synapse0x1aa16c0() {
   return (neuron0x1a7b260()*-0.205401);
}

double NNfunction_NN_1_2::synapse0x1aa1150() {
   return (neuron0x1a7b5a0()*0.364421);
}

double NNfunction_NN_1_2::synapse0x1aa1190() {
   return (neuron0x1a7bb00()*0.0245848);
}

double NNfunction_NN_1_2::synapse0x1aa1810() {
   return (neuron0x1a7be40()*0.0731932);
}

double NNfunction_NN_1_2::synapse0x1aa1850() {
   return (neuron0x1a7c180()*-0.105012);
}

double NNfunction_NN_1_2::synapse0x1aa1890() {
   return (neuron0x1a7c4c0()*0.187401);
}

double NNfunction_NN_1_2::synapse0x1aa18d0() {
   return (neuron0x1a7c800()*-0.226313);
}

double NNfunction_NN_1_2::synapse0x1aa1910() {
   return (neuron0x1a7cb40()*0.105547);
}

double NNfunction_NN_1_2::synapse0x1aa1950() {
   return (neuron0x1a7ce80()*1.05956);
}

double NNfunction_NN_1_2::synapse0x1aa1cd0() {
   return (neuron0x1a78230()*-0.142801);
}

double NNfunction_NN_1_2::synapse0x1aa1d10() {
   return (neuron0x1a784e0()*-0.0323766);
}

double NNfunction_NN_1_2::synapse0x1aa1d50() {
   return (neuron0x1a78820()*-4.35423);
}

double NNfunction_NN_1_2::synapse0x1aa1d90() {
   return (neuron0x1a78b60()*0.0312985);
}

double NNfunction_NN_1_2::synapse0x1aa1dd0() {
   return (neuron0x1a78ea0()*0.00389156);
}

double NNfunction_NN_1_2::synapse0x1aa1e10() {
   return (neuron0x1a791e0()*-0.0179444);
}

double NNfunction_NN_1_2::synapse0x1aa1e50() {
   return (neuron0x1a79520()*0.00277904);
}

double NNfunction_NN_1_2::synapse0x1aa1e90() {
   return (neuron0x1a79860()*-0.0154995);
}

double NNfunction_NN_1_2::synapse0x1aa1ed0() {
   return (neuron0x1a79ba0()*0.0308481);
}

double NNfunction_NN_1_2::synapse0x1aa1f10() {
   return (neuron0x1a79ee0()*0.0232561);
}

double NNfunction_NN_1_2::synapse0x1aa1f50() {
   return (neuron0x1a7a220()*0.0267172);
}

double NNfunction_NN_1_2::synapse0x1aa1f90() {
   return (neuron0x1a7a560()*-0.0635791);
}

double NNfunction_NN_1_2::synapse0x1aa1fd0() {
   return (neuron0x1a7a8a0()*0.00382598);
}

double NNfunction_NN_1_2::synapse0x1aa2010() {
   return (neuron0x1a7abe0()*-0.0195676);
}

double NNfunction_NN_1_2::synapse0x1aa2050() {
   return (neuron0x1a7af20()*-0.00602554);
}

double NNfunction_NN_1_2::synapse0x1aa2090() {
   return (neuron0x1a7b260()*-0.0246109);
}

double NNfunction_NN_1_2::synapse0x1aa1b20() {
   return (neuron0x1a7b5a0()*0.00199204);
}

double NNfunction_NN_1_2::synapse0x1aa1b60() {
   return (neuron0x1a7bb00()*-0.0147698);
}

double NNfunction_NN_1_2::synapse0x1aa21e0() {
   return (neuron0x1a7be40()*-0.0272637);
}

double NNfunction_NN_1_2::synapse0x1aa2220() {
   return (neuron0x1a7c180()*-0.010856);
}

double NNfunction_NN_1_2::synapse0x1aa2260() {
   return (neuron0x1a7c4c0()*0.000477535);
}

double NNfunction_NN_1_2::synapse0x1aa22a0() {
   return (neuron0x1a7c800()*0.0125148);
}

double NNfunction_NN_1_2::synapse0x1aa22e0() {
   return (neuron0x1a7cb40()*-0.00345893);
}

double NNfunction_NN_1_2::synapse0x1aa2320() {
   return (neuron0x1a7ce80()*3.30756);
}

double NNfunction_NN_1_2::synapse0x1aa26a0() {
   return (neuron0x1a78230()*0.0738362);
}

double NNfunction_NN_1_2::synapse0x1aa26e0() {
   return (neuron0x1a784e0()*6.05411);
}

double NNfunction_NN_1_2::synapse0x1aa2720() {
   return (neuron0x1a78820()*-0.593216);
}

double NNfunction_NN_1_2::synapse0x1aa2760() {
   return (neuron0x1a78b60()*0.00829764);
}

double NNfunction_NN_1_2::synapse0x1aa27a0() {
   return (neuron0x1a78ea0()*-0.0558229);
}

double NNfunction_NN_1_2::synapse0x1aa27e0() {
   return (neuron0x1a791e0()*-0.0157977);
}

double NNfunction_NN_1_2::synapse0x1aa2820() {
   return (neuron0x1a79520()*0.0044647);
}

double NNfunction_NN_1_2::synapse0x1aa2860() {
   return (neuron0x1a79860()*-0.012935);
}

double NNfunction_NN_1_2::synapse0x1aa28a0() {
   return (neuron0x1a79ba0()*0.003784);
}

double NNfunction_NN_1_2::synapse0x1aa28e0() {
   return (neuron0x1a79ee0()*-0.00988698);
}

double NNfunction_NN_1_2::synapse0x1aa2920() {
   return (neuron0x1a7a220()*0.000470691);
}

double NNfunction_NN_1_2::synapse0x1aa2960() {
   return (neuron0x1a7a560()*0.0557344);
}

double NNfunction_NN_1_2::synapse0x1aa29a0() {
   return (neuron0x1a7a8a0()*-0.0239839);
}

double NNfunction_NN_1_2::synapse0x1aa29e0() {
   return (neuron0x1a7abe0()*-0.00731928);
}

double NNfunction_NN_1_2::synapse0x1aa2a20() {
   return (neuron0x1a7af20()*-0.00378622);
}

double NNfunction_NN_1_2::synapse0x1aa2a60() {
   return (neuron0x1a7b260()*-0.00707097);
}

double NNfunction_NN_1_2::synapse0x1aa24f0() {
   return (neuron0x1a7b5a0()*-0.00217145);
}

double NNfunction_NN_1_2::synapse0x1aa2530() {
   return (neuron0x1a7bb00()*-0.0152466);
}

double NNfunction_NN_1_2::synapse0x1aa2bb0() {
   return (neuron0x1a7be40()*0.00425989);
}

double NNfunction_NN_1_2::synapse0x1aa2bf0() {
   return (neuron0x1a7c180()*0.014664);
}

double NNfunction_NN_1_2::synapse0x1aa2c30() {
   return (neuron0x1a7c4c0()*0.00509295);
}

double NNfunction_NN_1_2::synapse0x1aa2c70() {
   return (neuron0x1a7c800()*-0.00354183);
}

double NNfunction_NN_1_2::synapse0x1aa2cb0() {
   return (neuron0x1a7cb40()*-0.00262579);
}

double NNfunction_NN_1_2::synapse0x1aa2cf0() {
   return (neuron0x1a7ce80()*0.0165292);
}

double NNfunction_NN_1_2::synapse0x1a7e140() {
   return (neuron0x1a7d2f0()*-0.376908);
}

double NNfunction_NN_1_2::synapse0x1a7e180() {
   return (neuron0x1a7db30()*-0.351095);
}

double NNfunction_NN_1_2::synapse0x1a7f6a0() {
   return (neuron0x1a7e610()*-0.523689);
}

double NNfunction_NN_1_2::synapse0x1a7f6e0() {
   return (neuron0x1838f20()*-0.403121);
}

double NNfunction_NN_1_2::synapse0x1a81170() {
   return (neuron0x1a7f3f0()*-0.283593);
}

double NNfunction_NN_1_2::synapse0x1a811b0() {
   return (neuron0x1a80ec0()*-0.682334);
}

double NNfunction_NN_1_2::synapse0x1a81f40() {
   return (neuron0x1a81c90()*-0.66216);
}

double NNfunction_NN_1_2::synapse0x1a81f80() {
   return (neuron0x1a82660()*-1.13504);
}

double NNfunction_NN_1_2::synapse0x1a82910() {
   return (neuron0x1a83030()*-0.776923);
}

double NNfunction_NN_1_2::synapse0x1a82950() {
   return (neuron0x1a83b10()*-0.324294);
}

double NNfunction_NN_1_2::synapse0x1a832e0() {
   return (neuron0x1a844e0()*-0.33176);
}

double NNfunction_NN_1_2::synapse0x1a83320() {
   return (neuron0x1a815c0()*-0.0292988);
}

double NNfunction_NN_1_2::synapse0x1a83dc0() {
   return (neuron0x1a86090()*-0.303101);
}

double NNfunction_NN_1_2::synapse0x1a83e00() {
   return (neuron0x1a86a60()*-0.833252);
}

double NNfunction_NN_1_2::synapse0x1a84790() {
   return (neuron0x1a87430()*0.0949739);
}

double NNfunction_NN_1_2::synapse0x1a847d0() {
   return (neuron0x1a87e00()*-1.27453);
}

double NNfunction_NN_1_2::synapse0x1a81870() {
   return (neuron0x1a89c10()*-0.699729);
}

double NNfunction_NN_1_2::synapse0x1a818b0() {
   return (neuron0x1a89ef0()*-0.486894);
}

double NNfunction_NN_1_2::synapse0x1a86340() {
   return (neuron0x1a8a8c0()*-0.299719);
}

double NNfunction_NN_1_2::synapse0x1a86380() {
   return (neuron0x1a8b290()*-0.465652);
}

double NNfunction_NN_1_2::synapse0x1a86d10() {
   return (neuron0x1a8bc60()*-0.139882);
}

double NNfunction_NN_1_2::synapse0x1a86d50() {
   return (neuron0x1a8c630()*-0.436521);
}

double NNfunction_NN_1_2::synapse0x1a876e0() {
   return (neuron0x1a85180()*-1.37753);
}

double NNfunction_NN_1_2::synapse0x1a87720() {
   return (neuron0x1a85b50()*-0.289129);
}

double NNfunction_NN_1_2::synapse0x1a880b0() {
   return (neuron0x1a8f3c0()*-0.350117);
}

double NNfunction_NN_1_2::synapse0x1a880f0() {
   return (neuron0x1a8fd90()*-0.855509);
}

double NNfunction_NN_1_2::synapse0x1a7b140() {
   return (neuron0x1a90760()*-0.151957);
}

double NNfunction_NN_1_2::synapse0x1a7b180() {
   return (neuron0x1a91130()*-1.01054);
}

double NNfunction_NN_1_2::synapse0x1a8a1a0() {
   return (neuron0x1a91b00()*0.11004);
}

double NNfunction_NN_1_2::synapse0x1a8a1e0() {
   return (neuron0x1a924d0()*0.348449);
}

double NNfunction_NN_1_2::synapse0x1a8ab70() {
   return (neuron0x1a92ea0()*-0.845172);
}

double NNfunction_NN_1_2::synapse0x1a8abb0() {
   return (neuron0x1a93870()*-1.16078);
}

double NNfunction_NN_1_2::synapse0x1a8b540() {
   return (neuron0x1a89900()*-0.0605863);
}

double NNfunction_NN_1_2::synapse0x1a8b580() {
   return (neuron0x1a96450()*-0.306337);
}

double NNfunction_NN_1_2::synapse0x1a8bf10() {
   return (neuron0x1a96e20()*-0.557892);
}

double NNfunction_NN_1_2::synapse0x1a8bf50() {
   return (neuron0x1a977f0()*-0.598026);
}

double NNfunction_NN_1_2::synapse0x1a8c8e0() {
   return (neuron0x1a981c0()*-0.347372);
}

double NNfunction_NN_1_2::synapse0x1a8c920() {
   return (neuron0x1a98b90()*-1.06495);
}

double NNfunction_NN_1_2::synapse0x1a85430() {
   return (neuron0x1a99560()*0.409315);
}

double NNfunction_NN_1_2::synapse0x1a85470() {
   return (neuron0x1a99f30()*-0.291122);
}

double NNfunction_NN_1_2::synapse0x1a8ece0() {
   return (neuron0x1a9a900()*0.0313909);
}

double NNfunction_NN_1_2::synapse0x1a8ed20() {
   return (neuron0x1a9b4e0()*-0.65639);
}

double NNfunction_NN_1_2::synapse0x1a8f670() {
   return (neuron0x1a9beb0()*-0.55941);
}

double NNfunction_NN_1_2::synapse0x1a8f6b0() {
   return (neuron0x1a8cd30()*-0.339403);
}

double NNfunction_NN_1_2::synapse0x1a90040() {
   return (neuron0x1a8d700()*-1.0801);
}

double NNfunction_NN_1_2::synapse0x1a90080() {
   return (neuron0x1a8e0d0()*-0.156202);
}

double NNfunction_NN_1_2::synapse0x1a90a10() {
   return (neuron0x1aa0710()*-0.21002);
}

double NNfunction_NN_1_2::synapse0x1a90a50() {
   return (neuron0x1aa0fc0()*-0.537201);
}

double NNfunction_NN_1_2::synapse0x1a913e0() {
   return (neuron0x1aa1990()*-1.44105);
}

double NNfunction_NN_1_2::synapse0x1a91420() {
   return (neuron0x1aa2360()*-0.675779);
}

double NNfunction_NN_1_2::synapse0x1a93b20() {
   return (neuron0x1a7d2f0()*-0.0784451);
}

double NNfunction_NN_1_2::synapse0x1a93b60() {
   return (neuron0x1a7db30()*-0.595882);
}

double NNfunction_NN_1_2::synapse0x1a890e0() {
   return (neuron0x1a7e610()*0.0420355);
}

double NNfunction_NN_1_2::synapse0x1a89120() {
   return (neuron0x1838f20()*-0.540118);
}

double NNfunction_NN_1_2::synapse0x1a96700() {
   return (neuron0x1a7f3f0()*-0.332838);
}

double NNfunction_NN_1_2::synapse0x1a96740() {
   return (neuron0x1a80ec0()*0.141088);
}

double NNfunction_NN_1_2::synapse0x1a970d0() {
   return (neuron0x1a81c90()*-0.0470202);
}

double NNfunction_NN_1_2::synapse0x1a97110() {
   return (neuron0x1a82660()*-0.905954);
}

double NNfunction_NN_1_2::synapse0x1a97aa0() {
   return (neuron0x1a83030()*-0.394446);
}

double NNfunction_NN_1_2::synapse0x1a97ae0() {
   return (neuron0x1a83b10()*-1.14385);
}

double NNfunction_NN_1_2::synapse0x1a98470() {
   return (neuron0x1a844e0()*1.06438);
}

double NNfunction_NN_1_2::synapse0x1a984b0() {
   return (neuron0x1a815c0()*-0.495131);
}

double NNfunction_NN_1_2::synapse0x1a98e40() {
   return (neuron0x1a86090()*-0.588137);
}

double NNfunction_NN_1_2::synapse0x1a98e80() {
   return (neuron0x1a86a60()*0.0180364);
}

double NNfunction_NN_1_2::synapse0x1a99810() {
   return (neuron0x1a87430()*-0.76092);
}

double NNfunction_NN_1_2::synapse0x1a99850() {
   return (neuron0x1a87e00()*0.734504);
}

double NNfunction_NN_1_2::synapse0x1a9a1e0() {
   return (neuron0x1a89c10()*0.63248);
}

double NNfunction_NN_1_2::synapse0x1a9a220() {
   return (neuron0x1a89ef0()*0.841964);
}

double NNfunction_NN_1_2::synapse0x1a9abb0() {
   return (neuron0x1a8a8c0()*0.449343);
}

double NNfunction_NN_1_2::synapse0x1a9abf0() {
   return (neuron0x1a8b290()*-0.745007);
}

double NNfunction_NN_1_2::synapse0x1a9b790() {
   return (neuron0x1a8bc60()*-0.0779316);
}

double NNfunction_NN_1_2::synapse0x1a9b7d0() {
   return (neuron0x1a8c630()*0.09562);
}

double NNfunction_NN_1_2::synapse0x1a9c160() {
   return (neuron0x1a85180()*1.50742);
}

double NNfunction_NN_1_2::synapse0x1a9c1a0() {
   return (neuron0x1a85b50()*-1.60323);
}

double NNfunction_NN_1_2::synapse0x1a8cfe0() {
   return (neuron0x1a8f3c0()*-1.41589);
}

double NNfunction_NN_1_2::synapse0x1a8d020() {
   return (neuron0x1a8fd90()*0.398765);
}

double NNfunction_NN_1_2::synapse0x1a8d9b0() {
   return (neuron0x1a90760()*-0.21099);
}

double NNfunction_NN_1_2::synapse0x1a8d9f0() {
   return (neuron0x1a91130()*-0.943174);
}

double NNfunction_NN_1_2::synapse0x1a8e380() {
   return (neuron0x1a91b00()*-0.716138);
}

double NNfunction_NN_1_2::synapse0x1a8e3c0() {
   return (neuron0x1a924d0()*3.06354);
}

double NNfunction_NN_1_2::synapse0x1aa08a0() {
   return (neuron0x1a92ea0()*-1.11835);
}

double NNfunction_NN_1_2::synapse0x1aa08e0() {
   return (neuron0x1a93870()*-0.147355);
}

double NNfunction_NN_1_2::synapse0x1aa1270() {
   return (neuron0x1a89900()*-0.0496957);
}

double NNfunction_NN_1_2::synapse0x1aa12b0() {
   return (neuron0x1a96450()*-0.0566729);
}

double NNfunction_NN_1_2::synapse0x1aa1c40() {
   return (neuron0x1a96e20()*0.57988);
}

double NNfunction_NN_1_2::synapse0x1aa1c80() {
   return (neuron0x1a977f0()*1.62832);
}

double NNfunction_NN_1_2::synapse0x1aa2610() {
   return (neuron0x1a981c0()*-1.10075);
}

double NNfunction_NN_1_2::synapse0x1aa2650() {
   return (neuron0x1a98b90()*-0.207685);
}

double NNfunction_NN_1_2::synapse0x1a7d5a0() {
   return (neuron0x1a99560()*-0.0685582);
}

double NNfunction_NN_1_2::synapse0x1a7d5e0() {
   return (neuron0x1a99f30()*0.124291);
}

double NNfunction_NN_1_2::synapse0x1a91db0() {
   return (neuron0x1a9a900()*-0.197502);
}

double NNfunction_NN_1_2::synapse0x1a91df0() {
   return (neuron0x1a9b4e0()*-0.0680197);
}

double NNfunction_NN_1_2::synapse0x1aa2d30() {
   return (neuron0x1a9beb0()*0.0412392);
}

double NNfunction_NN_1_2::synapse0x1aa2d70() {
   return (neuron0x1a8cd30()*1.13658);
}

double NNfunction_NN_1_2::synapse0x1aa2db0() {
   return (neuron0x1a8d700()*0.24541);
}

double NNfunction_NN_1_2::synapse0x1aa2df0() {
   return (neuron0x1a8e0d0()*-0.0450947);
}

double NNfunction_NN_1_2::synapse0x1aa9ca0() {
   return (neuron0x1aa0710()*0.237897);
}

double NNfunction_NN_1_2::synapse0x1aa9ce0() {
   return (neuron0x1aa0fc0()*-0.0625098);
}

double NNfunction_NN_1_2::synapse0x1aa9d20() {
   return (neuron0x1aa1990()*-0.719537);
}

double NNfunction_NN_1_2::synapse0x1aa9d60() {
   return (neuron0x1aa2360()*0.995286);
}

double NNfunction_NN_1_2::synapse0x1aaa0e0() {
   return (neuron0x1a7d2f0()*-0.494609);
}

double NNfunction_NN_1_2::synapse0x1aaa120() {
   return (neuron0x1a7db30()*-0.159264);
}

double NNfunction_NN_1_2::synapse0x1aaa160() {
   return (neuron0x1a7e610()*-0.551454);
}

double NNfunction_NN_1_2::synapse0x1aaa1a0() {
   return (neuron0x1838f20()*0.0191519);
}

double NNfunction_NN_1_2::synapse0x1aaa1e0() {
   return (neuron0x1a7f3f0()*0.0574656);
}

double NNfunction_NN_1_2::synapse0x1aaa220() {
   return (neuron0x1a80ec0()*-0.194705);
}

double NNfunction_NN_1_2::synapse0x1aaa260() {
   return (neuron0x1a81c90()*-0.516669);
}

double NNfunction_NN_1_2::synapse0x1aaa2a0() {
   return (neuron0x1a82660()*-0.446744);
}

double NNfunction_NN_1_2::synapse0x1aaa2e0() {
   return (neuron0x1a83030()*-0.420183);
}

double NNfunction_NN_1_2::synapse0x1aaa320() {
   return (neuron0x1a83b10()*-0.0465284);
}

double NNfunction_NN_1_2::synapse0x1aaa360() {
   return (neuron0x1a844e0()*-0.0858197);
}

double NNfunction_NN_1_2::synapse0x1aaa3a0() {
   return (neuron0x1a815c0()*-0.227555);
}

double NNfunction_NN_1_2::synapse0x1aaa3e0() {
   return (neuron0x1a86090()*-0.712877);
}

double NNfunction_NN_1_2::synapse0x1aaa420() {
   return (neuron0x1a86a60()*-0.512669);
}

double NNfunction_NN_1_2::synapse0x1aaa460() {
   return (neuron0x1a87430()*-0.295567);
}

double NNfunction_NN_1_2::synapse0x1aaa4a0() {
   return (neuron0x1a87e00()*0.128332);
}

double NNfunction_NN_1_2::synapse0x1aa9f30() {
   return (neuron0x1a89c10()*-0.116082);
}

double NNfunction_NN_1_2::synapse0x1aa9f70() {
   return (neuron0x1a89ef0()*-0.431461);
}

double NNfunction_NN_1_2::synapse0x1aaa5f0() {
   return (neuron0x1a8a8c0()*0.441309);
}

double NNfunction_NN_1_2::synapse0x1aaa630() {
   return (neuron0x1a8b290()*-0.474971);
}

double NNfunction_NN_1_2::synapse0x1aaa670() {
   return (neuron0x1a8bc60()*-0.762561);
}

double NNfunction_NN_1_2::synapse0x1aaa6b0() {
   return (neuron0x1a8c630()*-0.566108);
}

double NNfunction_NN_1_2::synapse0x1aaa6f0() {
   return (neuron0x1a85180()*-0.498912);
}

double NNfunction_NN_1_2::synapse0x1aaa730() {
   return (neuron0x1a85b50()*0.208149);
}

double NNfunction_NN_1_2::synapse0x1aaa770() {
   return (neuron0x1a8f3c0()*-0.134515);
}

double NNfunction_NN_1_2::synapse0x1aaa7b0() {
   return (neuron0x1a8fd90()*-0.818445);
}

double NNfunction_NN_1_2::synapse0x1aaa7f0() {
   return (neuron0x1a90760()*-0.737399);
}

double NNfunction_NN_1_2::synapse0x1aaa830() {
   return (neuron0x1a91130()*-0.403004);
}

double NNfunction_NN_1_2::synapse0x1aaa870() {
   return (neuron0x1a91b00()*0.0294064);
}

double NNfunction_NN_1_2::synapse0x1aaa8b0() {
   return (neuron0x1a924d0()*-0.335637);
}

double NNfunction_NN_1_2::synapse0x1aaa8f0() {
   return (neuron0x1a92ea0()*-0.901841);
}

double NNfunction_NN_1_2::synapse0x1aaa930() {
   return (neuron0x1a93870()*-0.437296);
}

double NNfunction_NN_1_2::synapse0x1aaa4e0() {
   return (neuron0x1a89900()*-0.497845);
}

double NNfunction_NN_1_2::synapse0x1aaa520() {
   return (neuron0x1a96450()*-0.752391);
}

double NNfunction_NN_1_2::synapse0x1aaa560() {
   return (neuron0x1a96e20()*-0.544974);
}

double NNfunction_NN_1_2::synapse0x1aaa5a0() {
   return (neuron0x1a977f0()*0.209237);
}

double NNfunction_NN_1_2::synapse0x1aaab80() {
   return (neuron0x1a981c0()*-0.488747);
}

double NNfunction_NN_1_2::synapse0x1aaabc0() {
   return (neuron0x1a98b90()*-0.510855);
}

double NNfunction_NN_1_2::synapse0x1aaac00() {
   return (neuron0x1a99560()*0.153469);
}

double NNfunction_NN_1_2::synapse0x1aaac40() {
   return (neuron0x1a99f30()*-0.169379);
}

double NNfunction_NN_1_2::synapse0x1aaac80() {
   return (neuron0x1a9a900()*-0.151417);
}

double NNfunction_NN_1_2::synapse0x1aaacc0() {
   return (neuron0x1a9b4e0()*-0.0594972);
}

double NNfunction_NN_1_2::synapse0x1aaad00() {
   return (neuron0x1a9beb0()*-0.242504);
}

double NNfunction_NN_1_2::synapse0x1aaad40() {
   return (neuron0x1a8cd30()*0.194861);
}

double NNfunction_NN_1_2::synapse0x1aaad80() {
   return (neuron0x1a8d700()*0.266334);
}

double NNfunction_NN_1_2::synapse0x1aaadc0() {
   return (neuron0x1a8e0d0()*-0.0387324);
}

double NNfunction_NN_1_2::synapse0x1aaae00() {
   return (neuron0x1aa0710()*-0.650967);
}

double NNfunction_NN_1_2::synapse0x1aaae40() {
   return (neuron0x1aa0fc0()*-0.770498);
}

double NNfunction_NN_1_2::synapse0x1aaae80() {
   return (neuron0x1aa1990()*-0.877261);
}

double NNfunction_NN_1_2::synapse0x1aaaec0() {
   return (neuron0x1aa2360()*-0.0503953);
}

double NNfunction_NN_1_2::synapse0x1aab240() {
   return (neuron0x1a7d2f0()*-0.697623);
}

double NNfunction_NN_1_2::synapse0x1aab280() {
   return (neuron0x1a7db30()*-0.525791);
}

double NNfunction_NN_1_2::synapse0x1aab2c0() {
   return (neuron0x1a7e610()*0.303738);
}

double NNfunction_NN_1_2::synapse0x1aab300() {
   return (neuron0x1838f20()*-0.363636);
}

double NNfunction_NN_1_2::synapse0x1aab340() {
   return (neuron0x1a7f3f0()*-0.63638);
}

double NNfunction_NN_1_2::synapse0x1aab380() {
   return (neuron0x1a80ec0()*0.244524);
}

double NNfunction_NN_1_2::synapse0x1aab3c0() {
   return (neuron0x1a81c90()*-0.561616);
}

double NNfunction_NN_1_2::synapse0x1aab400() {
   return (neuron0x1a82660()*-0.259078);
}

double NNfunction_NN_1_2::synapse0x1aab440() {
   return (neuron0x1a83030()*-0.979544);
}

double NNfunction_NN_1_2::synapse0x1aab480() {
   return (neuron0x1a83b10()*-0.856753);
}

double NNfunction_NN_1_2::synapse0x1aab4c0() {
   return (neuron0x1a844e0()*-0.576013);
}

double NNfunction_NN_1_2::synapse0x1aab500() {
   return (neuron0x1a815c0()*-0.122505);
}

double NNfunction_NN_1_2::synapse0x1aab540() {
   return (neuron0x1a86090()*-0.337001);
}

double NNfunction_NN_1_2::synapse0x1aab580() {
   return (neuron0x1a86a60()*0.319806);
}

double NNfunction_NN_1_2::synapse0x1aab5c0() {
   return (neuron0x1a87430()*-0.488597);
}

double NNfunction_NN_1_2::synapse0x1aab600() {
   return (neuron0x1a87e00()*0.118001);
}

double NNfunction_NN_1_2::synapse0x1aab090() {
   return (neuron0x1a89c10()*0.341194);
}

double NNfunction_NN_1_2::synapse0x1aab0d0() {
   return (neuron0x1a89ef0()*-0.262142);
}

double NNfunction_NN_1_2::synapse0x1aab750() {
   return (neuron0x1a8a8c0()*-0.400165);
}

double NNfunction_NN_1_2::synapse0x1aab790() {
   return (neuron0x1a8b290()*0.071076);
}

double NNfunction_NN_1_2::synapse0x1aab7d0() {
   return (neuron0x1a8bc60()*-0.923646);
}

double NNfunction_NN_1_2::synapse0x1aab810() {
   return (neuron0x1a8c630()*-0.493916);
}

double NNfunction_NN_1_2::synapse0x1aab850() {
   return (neuron0x1a85180()*-0.739577);
}

double NNfunction_NN_1_2::synapse0x1aab890() {
   return (neuron0x1a85b50()*-0.1634);
}

double NNfunction_NN_1_2::synapse0x1aab8d0() {
   return (neuron0x1a8f3c0()*-0.230487);
}

double NNfunction_NN_1_2::synapse0x1aab910() {
   return (neuron0x1a8fd90()*-0.527598);
}

double NNfunction_NN_1_2::synapse0x1aab950() {
   return (neuron0x1a90760()*-0.568746);
}

double NNfunction_NN_1_2::synapse0x1aab990() {
   return (neuron0x1a91130()*-0.0010521);
}

double NNfunction_NN_1_2::synapse0x1aab9d0() {
   return (neuron0x1a91b00()*-0.800593);
}

double NNfunction_NN_1_2::synapse0x1aaba10() {
   return (neuron0x1a924d0()*-0.620293);
}

double NNfunction_NN_1_2::synapse0x1aaba50() {
   return (neuron0x1a92ea0()*-0.895181);
}

double NNfunction_NN_1_2::synapse0x1aaba90() {
   return (neuron0x1a93870()*-0.247094);
}

double NNfunction_NN_1_2::synapse0x1aab640() {
   return (neuron0x1a89900()*-0.594178);
}

double NNfunction_NN_1_2::synapse0x1aab680() {
   return (neuron0x1a96450()*-0.0618627);
}

double NNfunction_NN_1_2::synapse0x1aab6c0() {
   return (neuron0x1a96e20()*-0.679836);
}

double NNfunction_NN_1_2::synapse0x1aab700() {
   return (neuron0x1a977f0()*-0.0729735);
}

double NNfunction_NN_1_2::synapse0x1aabce0() {
   return (neuron0x1a981c0()*0.0380785);
}

double NNfunction_NN_1_2::synapse0x1aabd20() {
   return (neuron0x1a98b90()*-0.93641);
}

double NNfunction_NN_1_2::synapse0x1aabd60() {
   return (neuron0x1a99560()*-0.839052);
}

double NNfunction_NN_1_2::synapse0x1aabda0() {
   return (neuron0x1a99f30()*-0.45099);
}

double NNfunction_NN_1_2::synapse0x1aabde0() {
   return (neuron0x1a9a900()*0.116942);
}

double NNfunction_NN_1_2::synapse0x1aabe20() {
   return (neuron0x1a9b4e0()*-0.624546);
}

double NNfunction_NN_1_2::synapse0x1aabe60() {
   return (neuron0x1a9beb0()*-0.926486);
}

double NNfunction_NN_1_2::synapse0x1aabea0() {
   return (neuron0x1a8cd30()*-0.382167);
}

double NNfunction_NN_1_2::synapse0x1aabee0() {
   return (neuron0x1a8d700()*-0.455343);
}

double NNfunction_NN_1_2::synapse0x1aabf20() {
   return (neuron0x1a8e0d0()*-0.868087);
}

double NNfunction_NN_1_2::synapse0x1aabf60() {
   return (neuron0x1aa0710()*-0.73196);
}

double NNfunction_NN_1_2::synapse0x1aabfa0() {
   return (neuron0x1aa0fc0()*-0.200166);
}

double NNfunction_NN_1_2::synapse0x1aabfe0() {
   return (neuron0x1aa1990()*-0.715261);
}

double NNfunction_NN_1_2::synapse0x1aac020() {
   return (neuron0x1aa2360()*-0.678609);
}

double NNfunction_NN_1_2::synapse0x1aac3a0() {
   return (neuron0x1a7d2f0()*-0.154792);
}

double NNfunction_NN_1_2::synapse0x1aac3e0() {
   return (neuron0x1a7db30()*-1.52918);
}

double NNfunction_NN_1_2::synapse0x1aac420() {
   return (neuron0x1a7e610()*0.086459);
}

double NNfunction_NN_1_2::synapse0x1aac460() {
   return (neuron0x1838f20()*-1.25532);
}

double NNfunction_NN_1_2::synapse0x1aac4a0() {
   return (neuron0x1a7f3f0()*0.0610117);
}

double NNfunction_NN_1_2::synapse0x1aac4e0() {
   return (neuron0x1a80ec0()*0.317445);
}

double NNfunction_NN_1_2::synapse0x1aac520() {
   return (neuron0x1a81c90()*0.00065995);
}

double NNfunction_NN_1_2::synapse0x1aac560() {
   return (neuron0x1a82660()*-1.90986);
}

double NNfunction_NN_1_2::synapse0x1aac5a0() {
   return (neuron0x1a83030()*-0.994514);
}

double NNfunction_NN_1_2::synapse0x1aac5e0() {
   return (neuron0x1a83b10()*-2.91199);
}

double NNfunction_NN_1_2::synapse0x1aac620() {
   return (neuron0x1a844e0()*3.82932);
}

double NNfunction_NN_1_2::synapse0x1aac660() {
   return (neuron0x1a815c0()*0.60866);
}

double NNfunction_NN_1_2::synapse0x1aac6a0() {
   return (neuron0x1a86090()*-3.72869);
}

double NNfunction_NN_1_2::synapse0x1aac6e0() {
   return (neuron0x1a86a60()*0.0243631);
}

double NNfunction_NN_1_2::synapse0x1aac720() {
   return (neuron0x1a87430()*-1.76552);
}

double NNfunction_NN_1_2::synapse0x1aac760() {
   return (neuron0x1a87e00()*1.39402);
}

double NNfunction_NN_1_2::synapse0x1aac1f0() {
   return (neuron0x1a89c10()*1.83286);
}

double NNfunction_NN_1_2::synapse0x1aac230() {
   return (neuron0x1a89ef0()*2.07239);
}

double NNfunction_NN_1_2::synapse0x1aac8b0() {
   return (neuron0x1a8a8c0()*5.45606);
}

double NNfunction_NN_1_2::synapse0x1aac8f0() {
   return (neuron0x1a8b290()*-1.71473);
}

double NNfunction_NN_1_2::synapse0x1aac930() {
   return (neuron0x1a8bc60()*-0.850959);
}

double NNfunction_NN_1_2::synapse0x1aac970() {
   return (neuron0x1a8c630()*0.171262);
}

double NNfunction_NN_1_2::synapse0x1aac9b0() {
   return (neuron0x1a85180()*-5.51986);
}

double NNfunction_NN_1_2::synapse0x1aac9f0() {
   return (neuron0x1a85b50()*-3.14287);
}

double NNfunction_NN_1_2::synapse0x1aaca30() {
   return (neuron0x1a8f3c0()*-3.71361);
}

double NNfunction_NN_1_2::synapse0x1aaca70() {
   return (neuron0x1a8fd90()*-0.995458);
}

double NNfunction_NN_1_2::synapse0x1aacab0() {
   return (neuron0x1a90760()*-0.523256);
}

double NNfunction_NN_1_2::synapse0x1aacaf0() {
   return (neuron0x1a91130()*-2.24221);
}

double NNfunction_NN_1_2::synapse0x1aacb30() {
   return (neuron0x1a91b00()*-1.84518);
}

double NNfunction_NN_1_2::synapse0x1aacb70() {
   return (neuron0x1a924d0()*9.31592);
}

double NNfunction_NN_1_2::synapse0x1aacbb0() {
   return (neuron0x1a92ea0()*0.101982);
}

double NNfunction_NN_1_2::synapse0x1aacbf0() {
   return (neuron0x1a93870()*-0.447864);
}

double NNfunction_NN_1_2::synapse0x1aac7a0() {
   return (neuron0x1a89900()*-0.0897818);
}

double NNfunction_NN_1_2::synapse0x1aac7e0() {
   return (neuron0x1a96450()*-0.116582);
}

double NNfunction_NN_1_2::synapse0x1aac820() {
   return (neuron0x1a96e20()*1.41006);
}

double NNfunction_NN_1_2::synapse0x1aac860() {
   return (neuron0x1a977f0()*-0.770738);
}

double NNfunction_NN_1_2::synapse0x1aace40() {
   return (neuron0x1a981c0()*-2.62118);
}

double NNfunction_NN_1_2::synapse0x1aace80() {
   return (neuron0x1a98b90()*-6.05191);
}

double NNfunction_NN_1_2::synapse0x1aacec0() {
   return (neuron0x1a99560()*-0.121528);
}

double NNfunction_NN_1_2::synapse0x1aacf00() {
   return (neuron0x1a99f30()*0.216644);
}

double NNfunction_NN_1_2::synapse0x1aacf40() {
   return (neuron0x1a9a900()*-1.62638);
}

double NNfunction_NN_1_2::synapse0x1aacf80() {
   return (neuron0x1a9b4e0()*-0.174701);
}

double NNfunction_NN_1_2::synapse0x1aacfc0() {
   return (neuron0x1a9beb0()*-0.999303);
}

double NNfunction_NN_1_2::synapse0x1aad000() {
   return (neuron0x1a8cd30()*1.75982);
}

double NNfunction_NN_1_2::synapse0x1aad040() {
   return (neuron0x1a8d700()*0.617745);
}

double NNfunction_NN_1_2::synapse0x1aad080() {
   return (neuron0x1a8e0d0()*-0.141789);
}

double NNfunction_NN_1_2::synapse0x1aad0c0() {
   return (neuron0x1aa0710()*0.572009);
}

double NNfunction_NN_1_2::synapse0x1aad100() {
   return (neuron0x1aa0fc0()*0.0313181);
}

double NNfunction_NN_1_2::synapse0x1aad140() {
   return (neuron0x1aa1990()*2.12791);
}

double NNfunction_NN_1_2::synapse0x1aad180() {
   return (neuron0x1aa2360()*1.63271);
}

double NNfunction_NN_1_2::synapse0x1aad3e0() {
   return (neuron0x1aa9560()*-0.284769);
}

double NNfunction_NN_1_2::synapse0x1aad420() {
   return (neuron0x1aa9900()*17.2559);
}

double NNfunction_NN_1_2::synapse0x1aad460() {
   return (neuron0x1aa9da0()*1.258);
}

double NNfunction_NN_1_2::synapse0x1aad4a0() {
   return (neuron0x1aaaf00()*-0.486885);
}

double NNfunction_NN_1_2::synapse0x1aad4e0() {
   return (neuron0x1aac060()*-7.0334);
}

