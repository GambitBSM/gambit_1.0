#include "NNfunction_t1t1.h"
#include <cmath>

double NNfunction_t1t1::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6219)/15.3495;
   input1 = (in1 - 0.316242)/1167.94;
   input2 = (in2 - 664.587)/631.338;
   input3 = (in3 - -44.1606)/837.496;
   input4 = (in4 - 1076.3)/969.026;
   input5 = (in5 - 910.513)/962.326;
   input6 = (in6 - 918.236)/963.349;
   input7 = (in7 - 938.162)/943.415;
   input8 = (in8 - 928.068)/973.161;
   input9 = (in9 - 914.701)/959.271;
   input10 = (in10 - 986.034)/952.652;
   input11 = (in11 - 727.33)/870.92;
   input12 = (in12 - 730.877)/873.828;
   input13 = (in13 - 489.684)/494.618;
   input14 = (in14 - 739.023)/835.194;
   input15 = (in15 - 739.721)/833.779;
   input16 = (in16 - 529.106)/553.448;
   input17 = (in17 - 760.172)/901.713;
   input18 = (in18 - 757.99)/903.436;
   input19 = (in19 - 803.661)/877.528;
   input20 = (in20 - -3.53608)/490.26;
   input21 = (in21 - 1.17377)/1155.77;
   input22 = (in22 - -0.358906)/1204.04;
   input23 = (in23 - -205.014)/607.947;
   switch(index) {
     case 0:
         return neuron0x379ed70();
     default:
         return 0.;
   }
}

double NNfunction_t1t1::Value(int index, double* input) {
   input0 = (input[0] - 23.6219)/15.3495;
   input1 = (input[1] - 0.316242)/1167.94;
   input2 = (input[2] - 664.587)/631.338;
   input3 = (input[3] - -44.1606)/837.496;
   input4 = (input[4] - 1076.3)/969.026;
   input5 = (input[5] - 910.513)/962.326;
   input6 = (input[6] - 918.236)/963.349;
   input7 = (input[7] - 938.162)/943.415;
   input8 = (input[8] - 928.068)/973.161;
   input9 = (input[9] - 914.701)/959.271;
   input10 = (input[10] - 986.034)/952.652;
   input11 = (input[11] - 727.33)/870.92;
   input12 = (input[12] - 730.877)/873.828;
   input13 = (input[13] - 489.684)/494.618;
   input14 = (input[14] - 739.023)/835.194;
   input15 = (input[15] - 739.721)/833.779;
   input16 = (input[16] - 529.106)/553.448;
   input17 = (input[17] - 760.172)/901.713;
   input18 = (input[18] - 757.99)/903.436;
   input19 = (input[19] - 803.661)/877.528;
   input20 = (input[20] - -3.53608)/490.26;
   input21 = (input[21] - 1.17377)/1155.77;
   input22 = (input[22] - -0.358906)/1204.04;
   input23 = (input[23] - -205.014)/607.947;
   switch(index) {
     case 0:
         return neuron0x379ed70();
     default:
         return 0.;
   }
}

double NNfunction_t1t1::neuron0x376ae60() {
   return input0;
}

double NNfunction_t1t1::neuron0x376b1a0() {
   return input1;
}

double NNfunction_t1t1::neuron0x376b4e0() {
   return input2;
}

double NNfunction_t1t1::neuron0x376b820() {
   return input3;
}

double NNfunction_t1t1::neuron0x376bb60() {
   return input4;
}

double NNfunction_t1t1::neuron0x376bea0() {
   return input5;
}

double NNfunction_t1t1::neuron0x376c1e0() {
   return input6;
}

double NNfunction_t1t1::neuron0x376c520() {
   return input7;
}

double NNfunction_t1t1::neuron0x376c860() {
   return input8;
}

double NNfunction_t1t1::neuron0x376cba0() {
   return input9;
}

double NNfunction_t1t1::neuron0x376cee0() {
   return input10;
}

double NNfunction_t1t1::neuron0x376d220() {
   return input11;
}

double NNfunction_t1t1::neuron0x376d560() {
   return input12;
}

double NNfunction_t1t1::neuron0x376d8a0() {
   return input13;
}

double NNfunction_t1t1::neuron0x376dbe0() {
   return input14;
}

double NNfunction_t1t1::neuron0x376df20() {
   return input15;
}

double NNfunction_t1t1::neuron0x376e260() {
   return input16;
}

double NNfunction_t1t1::neuron0x376e7c0() {
   return input17;
}

double NNfunction_t1t1::neuron0x376e9e0() {
   return input18;
}

double NNfunction_t1t1::neuron0x376ed20() {
   return input19;
}

double NNfunction_t1t1::neuron0x376f060() {
   return input20;
}

double NNfunction_t1t1::neuron0x376f3a0() {
   return input21;
}

double NNfunction_t1t1::neuron0x376f6e0() {
   return input22;
}

double NNfunction_t1t1::neuron0x376fa20() {
   return input23;
}

double NNfunction_t1t1::input0x376fe90() {
   double input = -0.411773;
   input += synapse0x376ad20();
   input += synapse0x376ad60();
   input += synapse0x3770140();
   input += synapse0x3770180();
   input += synapse0x37701c0();
   input += synapse0x3770200();
   input += synapse0x3770240();
   input += synapse0x3770280();
   input += synapse0x37702c0();
   input += synapse0x3770300();
   input += synapse0x3770340();
   input += synapse0x3770380();
   input += synapse0x37703c0();
   input += synapse0x3770400();
   input += synapse0x3770440();
   input += synapse0x3770480();
   input += synapse0x376ac90();
   input += synapse0x376acd0();
   input += synapse0x351c910();
   input += synapse0x351c950();
   input += synapse0x37706e0();
   input += synapse0x3770720();
   input += synapse0x3770760();
   input += synapse0x37707a0();
   return input;
}

double NNfunction_t1t1::neuron0x376fe90() {
   double input = input0x376fe90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x37707e0() {
   double input = -1.13202;
   input += synapse0x3770b20();
   input += synapse0x3770b60();
   input += synapse0x3770ba0();
   input += synapse0x3770be0();
   input += synapse0x3770c20();
   input += synapse0x3770c60();
   input += synapse0x3770ca0();
   input += synapse0x3770ce0();
   input += synapse0x3770d20();
   input += synapse0x37705d0();
   input += synapse0x3770610();
   input += synapse0x3770650();
   input += synapse0x3770690();
   input += synapse0x3770f70();
   input += synapse0x3770fb0();
   input += synapse0x3770ff0();
   input += synapse0x3770970();
   input += synapse0x37709b0();
   input += synapse0x3771140();
   input += synapse0x3771180();
   input += synapse0x37711c0();
   input += synapse0x3771200();
   input += synapse0x3771240();
   input += synapse0x3771280();
   return input;
}

double NNfunction_t1t1::neuron0x37707e0() {
   double input = input0x37707e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x37712c0() {
   double input = 1.29634;
   input += synapse0x3771600();
   input += synapse0x3771640();
   input += synapse0x3771680();
   input += synapse0x37716c0();
   input += synapse0x3771700();
   input += synapse0x3771740();
   input += synapse0x3771780();
   input += synapse0x37717c0();
   input += synapse0x3771800();
   input += synapse0x3771840();
   input += synapse0x3771880();
   input += synapse0x37718c0();
   input += synapse0x3771900();
   input += synapse0x3771940();
   input += synapse0x3771980();
   input += synapse0x37719c0();
   input += synapse0x3771450();
   input += synapse0x3771490();
   input += synapse0x351cd40();
   input += synapse0x352a460();
   input += synapse0x352a4a0();
   input += synapse0x3759ef0();
   input += synapse0x3759f30();
   input += synapse0x3759f70();
   return input;
}

double NNfunction_t1t1::neuron0x37712c0() {
   double input = input0x37712c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3770d60() {
   double input = 5.44469;
   input += synapse0x352ad00();
   input += synapse0x3770ef0();
   input += synapse0x3770f30();
   input += synapse0x3771b10();
   input += synapse0x3771b50();
   input += synapse0x3771b90();
   input += synapse0x3771bd0();
   input += synapse0x3771c10();
   input += synapse0x3771c50();
   input += synapse0x3771c90();
   input += synapse0x3771cd0();
   input += synapse0x3771d10();
   input += synapse0x3771d50();
   input += synapse0x3771d90();
   input += synapse0x3771dd0();
   input += synapse0x3771e10();
   input += synapse0x376ada0();
   input += synapse0x376ade0();
   input += synapse0x376ae20();
   input += synapse0x3771f60();
   input += synapse0x3771fa0();
   input += synapse0x3771fe0();
   input += synapse0x3772020();
   input += synapse0x3772060();
   return input;
}

double NNfunction_t1t1::neuron0x3770d60() {
   double input = input0x3770d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x37720a0() {
   double input = 0.720025;
   input += synapse0x37723e0();
   input += synapse0x3772420();
   input += synapse0x3772460();
   input += synapse0x37724a0();
   input += synapse0x37724e0();
   input += synapse0x3772520();
   input += synapse0x3772560();
   input += synapse0x37725a0();
   input += synapse0x37725e0();
   input += synapse0x3772620();
   input += synapse0x3772660();
   input += synapse0x37726a0();
   input += synapse0x37726e0();
   input += synapse0x3772720();
   input += synapse0x3772760();
   input += synapse0x37727a0();
   input += synapse0x3772230();
   input += synapse0x3772270();
   input += synapse0x37728f0();
   input += synapse0x3772930();
   input += synapse0x3772970();
   input += synapse0x37729b0();
   input += synapse0x37729f0();
   input += synapse0x3772a30();
   return input;
}

double NNfunction_t1t1::neuron0x37720a0() {
   double input = input0x37720a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3772a70() {
   double input = -1.82454;
   input += synapse0x3772db0();
   input += synapse0x3772df0();
   input += synapse0x3772e30();
   input += synapse0x3772e70();
   input += synapse0x3772eb0();
   input += synapse0x3772ef0();
   input += synapse0x3772f30();
   input += synapse0x3772f70();
   input += synapse0x3772fb0();
   input += synapse0x352a7d0();
   input += synapse0x352a810();
   input += synapse0x352a850();
   input += synapse0x352a890();
   input += synapse0x352a8d0();
   input += synapse0x352a910();
   input += synapse0x352a950();
   input += synapse0x3772c00();
   input += synapse0x3772c40();
   input += synapse0x352aaa0();
   input += synapse0x352aae0();
   input += synapse0x352ab20();
   input += synapse0x352ab60();
   input += synapse0x352aba0();
   input += synapse0x3773800();
   return input;
}

double NNfunction_t1t1::neuron0x3772a70() {
   double input = input0x3772a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3773840() {
   double input = 2.67853;
   input += synapse0x3773b80();
   input += synapse0x3773bc0();
   input += synapse0x3773c00();
   input += synapse0x3773c40();
   input += synapse0x3773c80();
   input += synapse0x3773cc0();
   input += synapse0x3773d00();
   input += synapse0x3773d40();
   input += synapse0x3773d80();
   input += synapse0x3773dc0();
   input += synapse0x3773e00();
   input += synapse0x3773e40();
   input += synapse0x3773e80();
   input += synapse0x3773ec0();
   input += synapse0x3773f00();
   input += synapse0x3773f40();
   input += synapse0x37739d0();
   input += synapse0x3773a10();
   input += synapse0x3774090();
   input += synapse0x37740d0();
   input += synapse0x3774110();
   input += synapse0x3774150();
   input += synapse0x3774190();
   input += synapse0x37741d0();
   return input;
}

double NNfunction_t1t1::neuron0x3773840() {
   double input = input0x3773840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3774210() {
   double input = 0.670601;
   input += synapse0x3774550();
   input += synapse0x3774590();
   input += synapse0x37745d0();
   input += synapse0x3774610();
   input += synapse0x3774650();
   input += synapse0x3774690();
   input += synapse0x37746d0();
   input += synapse0x3774710();
   input += synapse0x3774750();
   input += synapse0x3774790();
   input += synapse0x37747d0();
   input += synapse0x3774810();
   input += synapse0x3774850();
   input += synapse0x3774890();
   input += synapse0x37748d0();
   input += synapse0x3774910();
   input += synapse0x37743a0();
   input += synapse0x37743e0();
   input += synapse0x3774a60();
   input += synapse0x3774aa0();
   input += synapse0x3774ae0();
   input += synapse0x3774b20();
   input += synapse0x3774b60();
   input += synapse0x3774ba0();
   return input;
}

double NNfunction_t1t1::neuron0x3774210() {
   double input = input0x3774210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3774be0() {
   double input = 0.287436;
   input += synapse0x376e6b0();
   input += synapse0x376e6f0();
   input += synapse0x376e730();
   input += synapse0x376e770();
   input += synapse0x3775130();
   input += synapse0x3775170();
   input += synapse0x37751b0();
   input += synapse0x37751f0();
   input += synapse0x3775230();
   input += synapse0x3775270();
   input += synapse0x37752b0();
   input += synapse0x37752f0();
   input += synapse0x3775330();
   input += synapse0x3775370();
   input += synapse0x37753b0();
   input += synapse0x37753f0();
   input += synapse0x3774d70();
   input += synapse0x3774db0();
   input += synapse0x3775540();
   input += synapse0x3775580();
   input += synapse0x37755c0();
   input += synapse0x3775600();
   input += synapse0x3775640();
   input += synapse0x3775680();
   return input;
}

double NNfunction_t1t1::neuron0x3774be0() {
   double input = input0x3774be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x37756c0() {
   double input = 3.52721;
   input += synapse0x3775a00();
   input += synapse0x3775a40();
   input += synapse0x3775a80();
   input += synapse0x3775ac0();
   input += synapse0x3775b00();
   input += synapse0x3775b40();
   input += synapse0x3775b80();
   input += synapse0x3775bc0();
   input += synapse0x3775c00();
   input += synapse0x3775c40();
   input += synapse0x3775c80();
   input += synapse0x3775cc0();
   input += synapse0x3775d00();
   input += synapse0x3775d40();
   input += synapse0x3775d80();
   input += synapse0x3775dc0();
   input += synapse0x3775850();
   input += synapse0x3775890();
   input += synapse0x3775f10();
   input += synapse0x3775f50();
   input += synapse0x3775f90();
   input += synapse0x3775fd0();
   input += synapse0x3776010();
   input += synapse0x3776050();
   return input;
}

double NNfunction_t1t1::neuron0x37756c0() {
   double input = input0x37756c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3776090() {
   double input = -0.159653;
   input += synapse0x37763d0();
   input += synapse0x3776410();
   input += synapse0x3776450();
   input += synapse0x3776490();
   input += synapse0x37764d0();
   input += synapse0x3776510();
   input += synapse0x3776550();
   input += synapse0x3776590();
   input += synapse0x37765d0();
   input += synapse0x3776610();
   input += synapse0x3776650();
   input += synapse0x3776690();
   input += synapse0x37766d0();
   input += synapse0x3776710();
   input += synapse0x3776750();
   input += synapse0x3776790();
   input += synapse0x3776220();
   input += synapse0x3776260();
   input += synapse0x3772ff0();
   input += synapse0x3773030();
   input += synapse0x3773070();
   input += synapse0x37730b0();
   input += synapse0x37730f0();
   input += synapse0x3773130();
   return input;
}

double NNfunction_t1t1::neuron0x3776090() {
   double input = input0x3776090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3773170() {
   double input = -6.38259;
   input += synapse0x37734b0();
   input += synapse0x37734f0();
   input += synapse0x3773530();
   input += synapse0x3773570();
   input += synapse0x37735b0();
   input += synapse0x37735f0();
   input += synapse0x3773630();
   input += synapse0x3773670();
   input += synapse0x37736b0();
   input += synapse0x37736f0();
   input += synapse0x3773730();
   input += synapse0x3773770();
   input += synapse0x37737b0();
   input += synapse0x37778f0();
   input += synapse0x3777930();
   input += synapse0x3777970();
   input += synapse0x3773300();
   input += synapse0x3773340();
   input += synapse0x3777ac0();
   input += synapse0x3777b00();
   input += synapse0x3777b40();
   input += synapse0x3777b80();
   input += synapse0x3777bc0();
   input += synapse0x3777c00();
   return input;
}

double NNfunction_t1t1::neuron0x3773170() {
   double input = input0x3773170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3777c40() {
   double input = -1.0783;
   input += synapse0x3777f80();
   input += synapse0x3777fc0();
   input += synapse0x3778000();
   input += synapse0x3778040();
   input += synapse0x3778080();
   input += synapse0x37780c0();
   input += synapse0x3778100();
   input += synapse0x3778140();
   input += synapse0x3778180();
   input += synapse0x37781c0();
   input += synapse0x3778200();
   input += synapse0x3778240();
   input += synapse0x3778280();
   input += synapse0x37782c0();
   input += synapse0x3778300();
   input += synapse0x3778340();
   input += synapse0x3777dd0();
   input += synapse0x3777e10();
   input += synapse0x3778490();
   input += synapse0x37784d0();
   input += synapse0x3778510();
   input += synapse0x3778550();
   input += synapse0x3778590();
   input += synapse0x37785d0();
   return input;
}

double NNfunction_t1t1::neuron0x3777c40() {
   double input = input0x3777c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3778610() {
   double input = 1.16938;
   input += synapse0x3778950();
   input += synapse0x3778990();
   input += synapse0x37789d0();
   input += synapse0x3778a10();
   input += synapse0x3778a50();
   input += synapse0x3778a90();
   input += synapse0x3778ad0();
   input += synapse0x3778b10();
   input += synapse0x3778b50();
   input += synapse0x3778b90();
   input += synapse0x3778bd0();
   input += synapse0x3778c10();
   input += synapse0x3778c50();
   input += synapse0x3778c90();
   input += synapse0x3778cd0();
   input += synapse0x3778d10();
   input += synapse0x37787a0();
   input += synapse0x37787e0();
   input += synapse0x3778e60();
   input += synapse0x3778ea0();
   input += synapse0x3778ee0();
   input += synapse0x3778f20();
   input += synapse0x3778f60();
   input += synapse0x3778fa0();
   return input;
}

double NNfunction_t1t1::neuron0x3778610() {
   double input = input0x3778610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3778fe0() {
   double input = 2.38183;
   input += synapse0x3779320();
   input += synapse0x3779360();
   input += synapse0x37793a0();
   input += synapse0x37793e0();
   input += synapse0x3779420();
   input += synapse0x3779460();
   input += synapse0x37794a0();
   input += synapse0x37794e0();
   input += synapse0x3779520();
   input += synapse0x3779560();
   input += synapse0x37795a0();
   input += synapse0x37795e0();
   input += synapse0x3779620();
   input += synapse0x3779660();
   input += synapse0x37796a0();
   input += synapse0x37796e0();
   input += synapse0x3779170();
   input += synapse0x37791b0();
   input += synapse0x3779830();
   input += synapse0x3779870();
   input += synapse0x37798b0();
   input += synapse0x37798f0();
   input += synapse0x3779930();
   input += synapse0x3779970();
   return input;
}

double NNfunction_t1t1::neuron0x3778fe0() {
   double input = input0x3778fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x37799b0() {
   double input = -2.12009;
   input += synapse0x3779cf0();
   input += synapse0x376b080();
   input += synapse0x376b0c0();
   input += synapse0x376b3c0();
   input += synapse0x376b400();
   input += synapse0x376b700();
   input += synapse0x376b740();
   input += synapse0x376ba40();
   input += synapse0x376ba80();
   input += synapse0x376bd80();
   input += synapse0x376bdc0();
   input += synapse0x376c0c0();
   input += synapse0x376c100();
   input += synapse0x376c400();
   input += synapse0x376c440();
   input += synapse0x376c740();
   input += synapse0x376c780();
   input += synapse0x376ca80();
   input += synapse0x376cac0();
   input += synapse0x376cdc0();
   input += synapse0x376ce00();
   input += synapse0x376d100();
   input += synapse0x376d140();
   input += synapse0x376d440();
   return input;
}

double NNfunction_t1t1::neuron0x37799b0() {
   double input = input0x37799b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377b7c0() {
   double input = 2.07603;
   input += synapse0x376d480();
   input += synapse0x376e140();
   input += synapse0x376e180();
   input += synapse0x3779b40();
   input += synapse0x3779b80();
   input += synapse0x376e480();
   input += synapse0x376e4c0();
   input += synapse0x351c7f0();
   input += synapse0x351c830();
   input += synapse0x376ec00();
   input += synapse0x376ec40();
   input += synapse0x376ef40();
   input += synapse0x376ef80();
   input += synapse0x376f280();
   input += synapse0x376f2c0();
   input += synapse0x376f5c0();
   input += synapse0x376f600();
   input += synapse0x376f900();
   input += synapse0x376f940();
   input += synapse0x376fc40();
   input += synapse0x376fc80();
   input += synapse0x376d780();
   input += synapse0x376d7c0();
   input += synapse0x377ba60();
   return input;
}

double NNfunction_t1t1::neuron0x377b7c0() {
   double input = input0x377b7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377baa0() {
   double input = 3.26871;
   input += synapse0x377bde0();
   input += synapse0x377be20();
   input += synapse0x377be60();
   input += synapse0x377bea0();
   input += synapse0x377bee0();
   input += synapse0x377bf20();
   input += synapse0x377bf60();
   input += synapse0x377bfa0();
   input += synapse0x377bfe0();
   input += synapse0x377c020();
   input += synapse0x377c060();
   input += synapse0x377c0a0();
   input += synapse0x377c0e0();
   input += synapse0x377c120();
   input += synapse0x377c160();
   input += synapse0x377c1a0();
   input += synapse0x377bc30();
   input += synapse0x377bc70();
   input += synapse0x377c2f0();
   input += synapse0x377c330();
   input += synapse0x377c370();
   input += synapse0x377c3b0();
   input += synapse0x377c3f0();
   input += synapse0x377c430();
   return input;
}

double NNfunction_t1t1::neuron0x377baa0() {
   double input = input0x377baa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377c470() {
   double input = -2.15938;
   input += synapse0x377c7b0();
   input += synapse0x377c7f0();
   input += synapse0x377c830();
   input += synapse0x377c870();
   input += synapse0x377c8b0();
   input += synapse0x377c8f0();
   input += synapse0x377c930();
   input += synapse0x377c970();
   input += synapse0x377c9b0();
   input += synapse0x377c9f0();
   input += synapse0x377ca30();
   input += synapse0x377ca70();
   input += synapse0x377cab0();
   input += synapse0x377caf0();
   input += synapse0x377cb30();
   input += synapse0x377cb70();
   input += synapse0x377c600();
   input += synapse0x377c640();
   input += synapse0x377ccc0();
   input += synapse0x377cd00();
   input += synapse0x377cd40();
   input += synapse0x377cd80();
   input += synapse0x377cdc0();
   input += synapse0x377ce00();
   return input;
}

double NNfunction_t1t1::neuron0x377c470() {
   double input = input0x377c470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377ce40() {
   double input = 0.64736;
   input += synapse0x377d180();
   input += synapse0x377d1c0();
   input += synapse0x377d200();
   input += synapse0x377d240();
   input += synapse0x377d280();
   input += synapse0x377d2c0();
   input += synapse0x377d300();
   input += synapse0x377d340();
   input += synapse0x377d380();
   input += synapse0x377d3c0();
   input += synapse0x377d400();
   input += synapse0x377d440();
   input += synapse0x377d480();
   input += synapse0x377d4c0();
   input += synapse0x377d500();
   input += synapse0x377d540();
   input += synapse0x377cfd0();
   input += synapse0x377d010();
   input += synapse0x377d690();
   input += synapse0x377d6d0();
   input += synapse0x377d710();
   input += synapse0x377d750();
   input += synapse0x377d790();
   input += synapse0x377d7d0();
   return input;
}

double NNfunction_t1t1::neuron0x377ce40() {
   double input = input0x377ce40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377d810() {
   double input = -1.9069;
   input += synapse0x377db50();
   input += synapse0x377db90();
   input += synapse0x377dbd0();
   input += synapse0x377dc10();
   input += synapse0x377dc50();
   input += synapse0x377dc90();
   input += synapse0x377dcd0();
   input += synapse0x377dd10();
   input += synapse0x377dd50();
   input += synapse0x377dd90();
   input += synapse0x377ddd0();
   input += synapse0x377de10();
   input += synapse0x377de50();
   input += synapse0x377de90();
   input += synapse0x377ded0();
   input += synapse0x377df10();
   input += synapse0x377d9a0();
   input += synapse0x377d9e0();
   input += synapse0x377e060();
   input += synapse0x377e0a0();
   input += synapse0x377e0e0();
   input += synapse0x377e120();
   input += synapse0x377e160();
   input += synapse0x377e1a0();
   return input;
}

double NNfunction_t1t1::neuron0x377d810() {
   double input = input0x377d810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377e1e0() {
   double input = -2.23209;
   input += synapse0x377e520();
   input += synapse0x377e560();
   input += synapse0x377e5a0();
   input += synapse0x377e5e0();
   input += synapse0x377e620();
   input += synapse0x377e660();
   input += synapse0x377e6a0();
   input += synapse0x377e6e0();
   input += synapse0x377e720();
   input += synapse0x37768e0();
   input += synapse0x3776920();
   input += synapse0x3776960();
   input += synapse0x37769a0();
   input += synapse0x37769e0();
   input += synapse0x3776a20();
   input += synapse0x3776a60();
   input += synapse0x377e370();
   input += synapse0x377e3b0();
   input += synapse0x3776bb0();
   input += synapse0x3776bf0();
   input += synapse0x3776c30();
   input += synapse0x3776c70();
   input += synapse0x3776cb0();
   input += synapse0x3776cf0();
   return input;
}

double NNfunction_t1t1::neuron0x377e1e0() {
   double input = input0x377e1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3776d30() {
   double input = -0.725345;
   input += synapse0x3777070();
   input += synapse0x37770b0();
   input += synapse0x37770f0();
   input += synapse0x3777130();
   input += synapse0x3777170();
   input += synapse0x37771b0();
   input += synapse0x37771f0();
   input += synapse0x3777230();
   input += synapse0x3777270();
   input += synapse0x37772b0();
   input += synapse0x37772f0();
   input += synapse0x3777330();
   input += synapse0x3777370();
   input += synapse0x37773b0();
   input += synapse0x37773f0();
   input += synapse0x3777430();
   input += synapse0x3776ec0();
   input += synapse0x3776f00();
   input += synapse0x3777580();
   input += synapse0x37775c0();
   input += synapse0x3777600();
   input += synapse0x3777640();
   input += synapse0x3777680();
   input += synapse0x37776c0();
   return input;
}

double NNfunction_t1t1::neuron0x3776d30() {
   double input = input0x3776d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3777700() {
   double input = 1.30757;
   input += synapse0x3777890();
   input += synapse0x3780920();
   input += synapse0x3780960();
   input += synapse0x37809a0();
   input += synapse0x37809e0();
   input += synapse0x3780a20();
   input += synapse0x3780a60();
   input += synapse0x3780aa0();
   input += synapse0x3780ae0();
   input += synapse0x3780b20();
   input += synapse0x3780b60();
   input += synapse0x3780ba0();
   input += synapse0x3780be0();
   input += synapse0x3780c20();
   input += synapse0x3780c60();
   input += synapse0x3780ca0();
   input += synapse0x3780770();
   input += synapse0x37807b0();
   input += synapse0x3780df0();
   input += synapse0x3780e30();
   input += synapse0x3780e70();
   input += synapse0x3780eb0();
   input += synapse0x3780ef0();
   input += synapse0x3780f30();
   return input;
}

double NNfunction_t1t1::neuron0x3777700() {
   double input = input0x3777700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3780f70() {
   double input = -1.40638;
   input += synapse0x37812b0();
   input += synapse0x37812f0();
   input += synapse0x3781330();
   input += synapse0x3781370();
   input += synapse0x37813b0();
   input += synapse0x37813f0();
   input += synapse0x3781430();
   input += synapse0x3781470();
   input += synapse0x37814b0();
   input += synapse0x37814f0();
   input += synapse0x3781530();
   input += synapse0x3781570();
   input += synapse0x37815b0();
   input += synapse0x37815f0();
   input += synapse0x3781630();
   input += synapse0x3781670();
   input += synapse0x3781100();
   input += synapse0x3781140();
   input += synapse0x37817c0();
   input += synapse0x3781800();
   input += synapse0x3781840();
   input += synapse0x3781880();
   input += synapse0x37818c0();
   input += synapse0x3781900();
   return input;
}

double NNfunction_t1t1::neuron0x3780f70() {
   double input = input0x3780f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3781940() {
   double input = 0.922738;
   input += synapse0x3781c80();
   input += synapse0x3781cc0();
   input += synapse0x3781d00();
   input += synapse0x3781d40();
   input += synapse0x3781d80();
   input += synapse0x3781dc0();
   input += synapse0x3781e00();
   input += synapse0x3781e40();
   input += synapse0x3781e80();
   input += synapse0x3781ec0();
   input += synapse0x3781f00();
   input += synapse0x3781f40();
   input += synapse0x3781f80();
   input += synapse0x3781fc0();
   input += synapse0x3782000();
   input += synapse0x3782040();
   input += synapse0x3781ad0();
   input += synapse0x3781b10();
   input += synapse0x3782190();
   input += synapse0x37821d0();
   input += synapse0x3782210();
   input += synapse0x3782250();
   input += synapse0x3782290();
   input += synapse0x37822d0();
   return input;
}

double NNfunction_t1t1::neuron0x3781940() {
   double input = input0x3781940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3782310() {
   double input = -2.91839;
   input += synapse0x3782650();
   input += synapse0x3782690();
   input += synapse0x37826d0();
   input += synapse0x3782710();
   input += synapse0x3782750();
   input += synapse0x3782790();
   input += synapse0x37827d0();
   input += synapse0x3782810();
   input += synapse0x3782850();
   input += synapse0x3782890();
   input += synapse0x37828d0();
   input += synapse0x3782910();
   input += synapse0x3782950();
   input += synapse0x3782990();
   input += synapse0x37829d0();
   input += synapse0x3782a10();
   input += synapse0x37824a0();
   input += synapse0x37824e0();
   input += synapse0x3782b60();
   input += synapse0x3782ba0();
   input += synapse0x3782be0();
   input += synapse0x3782c20();
   input += synapse0x3782c60();
   input += synapse0x3782ca0();
   return input;
}

double NNfunction_t1t1::neuron0x3782310() {
   double input = input0x3782310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3782ce0() {
   double input = -0.514004;
   input += synapse0x3783020();
   input += synapse0x3783060();
   input += synapse0x37830a0();
   input += synapse0x37830e0();
   input += synapse0x3783120();
   input += synapse0x3783160();
   input += synapse0x37831a0();
   input += synapse0x37831e0();
   input += synapse0x3783220();
   input += synapse0x3783260();
   input += synapse0x37832a0();
   input += synapse0x37832e0();
   input += synapse0x3783320();
   input += synapse0x3783360();
   input += synapse0x37833a0();
   input += synapse0x37833e0();
   input += synapse0x3782e70();
   input += synapse0x3782eb0();
   input += synapse0x3783530();
   input += synapse0x3783570();
   input += synapse0x37835b0();
   input += synapse0x37835f0();
   input += synapse0x3783630();
   input += synapse0x3783670();
   return input;
}

double NNfunction_t1t1::neuron0x3782ce0() {
   double input = input0x3782ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x37836b0() {
   double input = 0.7191;
   input += synapse0x37839f0();
   input += synapse0x3783a30();
   input += synapse0x3783a70();
   input += synapse0x3783ab0();
   input += synapse0x3783af0();
   input += synapse0x3783b30();
   input += synapse0x3783b70();
   input += synapse0x3783bb0();
   input += synapse0x3783bf0();
   input += synapse0x3783c30();
   input += synapse0x3783c70();
   input += synapse0x3783cb0();
   input += synapse0x3783cf0();
   input += synapse0x3783d30();
   input += synapse0x3783d70();
   input += synapse0x3783db0();
   input += synapse0x3783840();
   input += synapse0x3783880();
   input += synapse0x3783f00();
   input += synapse0x3783f40();
   input += synapse0x3783f80();
   input += synapse0x3783fc0();
   input += synapse0x3784000();
   input += synapse0x3784040();
   return input;
}

double NNfunction_t1t1::neuron0x37836b0() {
   double input = input0x37836b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3784080() {
   double input = 2.68851;
   input += synapse0x37843c0();
   input += synapse0x3784400();
   input += synapse0x3784440();
   input += synapse0x3784480();
   input += synapse0x37844c0();
   input += synapse0x3784500();
   input += synapse0x3784540();
   input += synapse0x3784580();
   input += synapse0x37845c0();
   input += synapse0x3784600();
   input += synapse0x3784640();
   input += synapse0x3784680();
   input += synapse0x37846c0();
   input += synapse0x3784700();
   input += synapse0x3784740();
   input += synapse0x3784780();
   input += synapse0x3784210();
   input += synapse0x3784250();
   input += synapse0x37848d0();
   input += synapse0x3784910();
   input += synapse0x3784950();
   input += synapse0x3784990();
   input += synapse0x37849d0();
   input += synapse0x3784a10();
   return input;
}

double NNfunction_t1t1::neuron0x3784080() {
   double input = input0x3784080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3784a50() {
   double input = 0.0398898;
   input += synapse0x3784d90();
   input += synapse0x3784dd0();
   input += synapse0x3784e10();
   input += synapse0x3784e50();
   input += synapse0x3784e90();
   input += synapse0x3784ed0();
   input += synapse0x3784f10();
   input += synapse0x3784f50();
   input += synapse0x3784f90();
   input += synapse0x3784fd0();
   input += synapse0x3785010();
   input += synapse0x3785050();
   input += synapse0x3785090();
   input += synapse0x37850d0();
   input += synapse0x3785110();
   input += synapse0x3785150();
   input += synapse0x3784be0();
   input += synapse0x3784c20();
   input += synapse0x37852a0();
   input += synapse0x37852e0();
   input += synapse0x3785320();
   input += synapse0x3785360();
   input += synapse0x37853a0();
   input += synapse0x37853e0();
   return input;
}

double NNfunction_t1t1::neuron0x3784a50() {
   double input = input0x3784a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3785420() {
   double input = -1.32142;
   input += synapse0x3785760();
   input += synapse0x3779d30();
   input += synapse0x3779d70();
   input += synapse0x3779db0();
   input += synapse0x377a000();
   input += synapse0x377a040();
   input += synapse0x377a080();
   input += synapse0x377a2d0();
   input += synapse0x377a310();
   input += synapse0x377a560();
   input += synapse0x377a5a0();
   input += synapse0x377a5e0();
   input += synapse0x377a830();
   input += synapse0x377a870();
   input += synapse0x377aac0();
   input += synapse0x377ab00();
   input += synapse0x37855b0();
   input += synapse0x37855f0();
   input += synapse0x377ac50();
   input += synapse0x377b160();
   input += synapse0x377b1a0();
   input += synapse0x377b1e0();
   input += synapse0x377b430();
   input += synapse0x377b470();
   return input;
}

double NNfunction_t1t1::neuron0x3785420() {
   double input = input0x3785420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377b4b0() {
   double input = -0.623354;
   input += synapse0x377ad20();
   input += synapse0x377ad60();
   input += synapse0x377ada0();
   input += synapse0x377ade0();
   input += synapse0x377b760();
   input += synapse0x3787ab0();
   input += synapse0x3787af0();
   input += synapse0x3787b30();
   input += synapse0x3787b70();
   input += synapse0x3787bb0();
   input += synapse0x3787bf0();
   input += synapse0x3787c30();
   input += synapse0x3787c70();
   input += synapse0x3787cb0();
   input += synapse0x3787cf0();
   input += synapse0x3787d30();
   input += synapse0x377b640();
   input += synapse0x377b680();
   input += synapse0x3787e80();
   input += synapse0x3787ec0();
   input += synapse0x3787f00();
   input += synapse0x3787f40();
   input += synapse0x3787f80();
   input += synapse0x3787fc0();
   return input;
}

double NNfunction_t1t1::neuron0x377b4b0() {
   double input = input0x377b4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3788000() {
   double input = 1.62599;
   input += synapse0x3788340();
   input += synapse0x3788380();
   input += synapse0x37883c0();
   input += synapse0x3788400();
   input += synapse0x3788440();
   input += synapse0x3788480();
   input += synapse0x37884c0();
   input += synapse0x3788500();
   input += synapse0x3788540();
   input += synapse0x3788580();
   input += synapse0x37885c0();
   input += synapse0x3788600();
   input += synapse0x3788640();
   input += synapse0x3788680();
   input += synapse0x37886c0();
   input += synapse0x3788700();
   input += synapse0x3788190();
   input += synapse0x37881d0();
   input += synapse0x3788850();
   input += synapse0x3788890();
   input += synapse0x37888d0();
   input += synapse0x3788910();
   input += synapse0x3788950();
   input += synapse0x3788990();
   return input;
}

double NNfunction_t1t1::neuron0x3788000() {
   double input = input0x3788000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x37889d0() {
   double input = 1.57866;
   input += synapse0x3788d10();
   input += synapse0x3788d50();
   input += synapse0x3788d90();
   input += synapse0x3788dd0();
   input += synapse0x3788e10();
   input += synapse0x3788e50();
   input += synapse0x3788e90();
   input += synapse0x3788ed0();
   input += synapse0x3788f10();
   input += synapse0x3788f50();
   input += synapse0x3788f90();
   input += synapse0x3788fd0();
   input += synapse0x3789010();
   input += synapse0x3789050();
   input += synapse0x3789090();
   input += synapse0x37890d0();
   input += synapse0x3788b60();
   input += synapse0x3788ba0();
   input += synapse0x3789220();
   input += synapse0x3789260();
   input += synapse0x37892a0();
   input += synapse0x37892e0();
   input += synapse0x3789320();
   input += synapse0x3789360();
   return input;
}

double NNfunction_t1t1::neuron0x37889d0() {
   double input = input0x37889d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x37893a0() {
   double input = -0.959514;
   input += synapse0x37896e0();
   input += synapse0x3789720();
   input += synapse0x3789760();
   input += synapse0x37897a0();
   input += synapse0x37897e0();
   input += synapse0x3789820();
   input += synapse0x3789860();
   input += synapse0x37898a0();
   input += synapse0x37898e0();
   input += synapse0x3789920();
   input += synapse0x3789960();
   input += synapse0x37899a0();
   input += synapse0x37899e0();
   input += synapse0x3789a20();
   input += synapse0x3789a60();
   input += synapse0x3789aa0();
   input += synapse0x3789530();
   input += synapse0x3789570();
   input += synapse0x3789bf0();
   input += synapse0x3789c30();
   input += synapse0x3789c70();
   input += synapse0x3789cb0();
   input += synapse0x3789cf0();
   input += synapse0x3789d30();
   return input;
}

double NNfunction_t1t1::neuron0x37893a0() {
   double input = input0x37893a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3789d70() {
   double input = 0.260571;
   input += synapse0x378a0b0();
   input += synapse0x378a0f0();
   input += synapse0x378a130();
   input += synapse0x378a170();
   input += synapse0x378a1b0();
   input += synapse0x378a1f0();
   input += synapse0x378a230();
   input += synapse0x378a270();
   input += synapse0x378a2b0();
   input += synapse0x378a2f0();
   input += synapse0x378a330();
   input += synapse0x378a370();
   input += synapse0x378a3b0();
   input += synapse0x378a3f0();
   input += synapse0x378a430();
   input += synapse0x378a470();
   input += synapse0x3789f00();
   input += synapse0x3789f40();
   input += synapse0x378a5c0();
   input += synapse0x378a600();
   input += synapse0x378a640();
   input += synapse0x378a680();
   input += synapse0x378a6c0();
   input += synapse0x378a700();
   return input;
}

double NNfunction_t1t1::neuron0x3789d70() {
   double input = input0x3789d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x378a740() {
   double input = -2.98612;
   input += synapse0x378aa80();
   input += synapse0x378aac0();
   input += synapse0x378ab00();
   input += synapse0x378ab40();
   input += synapse0x378ab80();
   input += synapse0x378abc0();
   input += synapse0x378ac00();
   input += synapse0x378ac40();
   input += synapse0x378ac80();
   input += synapse0x378acc0();
   input += synapse0x378ad00();
   input += synapse0x378ad40();
   input += synapse0x378ad80();
   input += synapse0x378adc0();
   input += synapse0x378ae00();
   input += synapse0x378ae40();
   input += synapse0x378a8d0();
   input += synapse0x378a910();
   input += synapse0x378af90();
   input += synapse0x378afd0();
   input += synapse0x378b010();
   input += synapse0x378b050();
   input += synapse0x378b090();
   input += synapse0x378b0d0();
   return input;
}

double NNfunction_t1t1::neuron0x378a740() {
   double input = input0x378a740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x378b110() {
   double input = 0.047268;
   input += synapse0x378b450();
   input += synapse0x378b490();
   input += synapse0x378b4d0();
   input += synapse0x378b510();
   input += synapse0x378b550();
   input += synapse0x378b590();
   input += synapse0x378b5d0();
   input += synapse0x378b610();
   input += synapse0x378b650();
   input += synapse0x378b690();
   input += synapse0x378b6d0();
   input += synapse0x378b710();
   input += synapse0x378b750();
   input += synapse0x378b790();
   input += synapse0x378b7d0();
   input += synapse0x378b810();
   input += synapse0x378b2a0();
   input += synapse0x378b2e0();
   input += synapse0x378b960();
   input += synapse0x378b9a0();
   input += synapse0x378b9e0();
   input += synapse0x378ba20();
   input += synapse0x378ba60();
   input += synapse0x378baa0();
   return input;
}

double NNfunction_t1t1::neuron0x378b110() {
   double input = input0x378b110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x378bae0() {
   double input = 1.71678;
   input += synapse0x378be20();
   input += synapse0x378be60();
   input += synapse0x378bea0();
   input += synapse0x378bee0();
   input += synapse0x378bf20();
   input += synapse0x378bf60();
   input += synapse0x378bfa0();
   input += synapse0x378bfe0();
   input += synapse0x378c020();
   input += synapse0x378c060();
   input += synapse0x378c0a0();
   input += synapse0x378c0e0();
   input += synapse0x378c120();
   input += synapse0x378c160();
   input += synapse0x378c1a0();
   input += synapse0x378c1e0();
   input += synapse0x378bc70();
   input += synapse0x378bcb0();
   input += synapse0x378c330();
   input += synapse0x378c370();
   input += synapse0x378c3b0();
   input += synapse0x378c3f0();
   input += synapse0x378c430();
   input += synapse0x378c470();
   return input;
}

double NNfunction_t1t1::neuron0x378bae0() {
   double input = input0x378bae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x378c4b0() {
   double input = -0.011505;
   input += synapse0x3774f20();
   input += synapse0x3774f60();
   input += synapse0x3774fa0();
   input += synapse0x3774fe0();
   input += synapse0x3775020();
   input += synapse0x3775060();
   input += synapse0x37750a0();
   input += synapse0x37750e0();
   input += synapse0x378cc00();
   input += synapse0x378cc40();
   input += synapse0x378cc80();
   input += synapse0x378ccc0();
   input += synapse0x378cd00();
   input += synapse0x378cd40();
   input += synapse0x378cd80();
   input += synapse0x378cdc0();
   input += synapse0x378c640();
   input += synapse0x378c680();
   input += synapse0x378cf10();
   input += synapse0x378cf50();
   input += synapse0x378cf90();
   input += synapse0x378cfd0();
   input += synapse0x378d010();
   input += synapse0x378d050();
   return input;
}

double NNfunction_t1t1::neuron0x378c4b0() {
   double input = input0x378c4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x378d090() {
   double input = -0.356297;
   input += synapse0x378d3d0();
   input += synapse0x378d410();
   input += synapse0x378d450();
   input += synapse0x378d490();
   input += synapse0x378d4d0();
   input += synapse0x378d510();
   input += synapse0x378d550();
   input += synapse0x378d590();
   input += synapse0x378d5d0();
   input += synapse0x378d610();
   input += synapse0x378d650();
   input += synapse0x378d690();
   input += synapse0x378d6d0();
   input += synapse0x378d710();
   input += synapse0x378d750();
   input += synapse0x378d790();
   input += synapse0x378d220();
   input += synapse0x378d260();
   input += synapse0x378d8e0();
   input += synapse0x378d920();
   input += synapse0x378d960();
   input += synapse0x378d9a0();
   input += synapse0x378d9e0();
   input += synapse0x378da20();
   return input;
}

double NNfunction_t1t1::neuron0x378d090() {
   double input = input0x378d090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x378da60() {
   double input = -1.39776;
   input += synapse0x378dda0();
   input += synapse0x378dde0();
   input += synapse0x378de20();
   input += synapse0x378de60();
   input += synapse0x378dea0();
   input += synapse0x378dee0();
   input += synapse0x378df20();
   input += synapse0x378df60();
   input += synapse0x378dfa0();
   input += synapse0x378dfe0();
   input += synapse0x378e020();
   input += synapse0x378e060();
   input += synapse0x378e0a0();
   input += synapse0x378e0e0();
   input += synapse0x378e120();
   input += synapse0x378e160();
   input += synapse0x378dbf0();
   input += synapse0x378dc30();
   input += synapse0x377e760();
   input += synapse0x377e7a0();
   input += synapse0x377e7e0();
   input += synapse0x377e820();
   input += synapse0x377e860();
   input += synapse0x377e8a0();
   return input;
}

double NNfunction_t1t1::neuron0x378da60() {
   double input = input0x378da60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377e8e0() {
   double input = -1.2955;
   input += synapse0x377ec20();
   input += synapse0x377ec60();
   input += synapse0x377eca0();
   input += synapse0x377ece0();
   input += synapse0x377ed20();
   input += synapse0x377ed60();
   input += synapse0x377eda0();
   input += synapse0x377ede0();
   input += synapse0x377ee20();
   input += synapse0x377ee60();
   input += synapse0x377eea0();
   input += synapse0x377eee0();
   input += synapse0x377ef20();
   input += synapse0x377ef60();
   input += synapse0x377efa0();
   input += synapse0x377efe0();
   input += synapse0x377ea70();
   input += synapse0x377eab0();
   input += synapse0x377f130();
   input += synapse0x377f170();
   input += synapse0x377f1b0();
   input += synapse0x377f1f0();
   input += synapse0x377f230();
   input += synapse0x377f270();
   return input;
}

double NNfunction_t1t1::neuron0x377e8e0() {
   double input = input0x377e8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377f2b0() {
   double input = 1.73218;
   input += synapse0x377f5f0();
   input += synapse0x377f630();
   input += synapse0x377f670();
   input += synapse0x377f6b0();
   input += synapse0x377f6f0();
   input += synapse0x377f730();
   input += synapse0x377f770();
   input += synapse0x377f7b0();
   input += synapse0x377f7f0();
   input += synapse0x377f830();
   input += synapse0x377f870();
   input += synapse0x377f8b0();
   input += synapse0x377f8f0();
   input += synapse0x377f930();
   input += synapse0x377f970();
   input += synapse0x377f9b0();
   input += synapse0x377f440();
   input += synapse0x377f480();
   input += synapse0x377fb00();
   input += synapse0x377fb40();
   input += synapse0x377fb80();
   input += synapse0x377fbc0();
   input += synapse0x377fc00();
   input += synapse0x377fc40();
   return input;
}

double NNfunction_t1t1::neuron0x377f2b0() {
   double input = input0x377f2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x377fc80() {
   double input = -0.424321;
   input += synapse0x377ffc0();
   input += synapse0x3780000();
   input += synapse0x3780040();
   input += synapse0x3780080();
   input += synapse0x37800c0();
   input += synapse0x3780100();
   input += synapse0x3780140();
   input += synapse0x3780180();
   input += synapse0x37801c0();
   input += synapse0x3780200();
   input += synapse0x3780240();
   input += synapse0x3780280();
   input += synapse0x37802c0();
   input += synapse0x3780300();
   input += synapse0x3780340();
   input += synapse0x3780380();
   input += synapse0x377fe10();
   input += synapse0x377fe50();
   input += synapse0x37804d0();
   input += synapse0x3780510();
   input += synapse0x3780550();
   input += synapse0x3780590();
   input += synapse0x37805d0();
   input += synapse0x3780610();
   return input;
}

double NNfunction_t1t1::neuron0x377fc80() {
   double input = input0x377fc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x37922c0() {
   double input = 1.00677;
   input += synapse0x37924e0();
   input += synapse0x3792520();
   input += synapse0x3792560();
   input += synapse0x37925a0();
   input += synapse0x37925e0();
   input += synapse0x3792620();
   input += synapse0x3792660();
   input += synapse0x37926a0();
   input += synapse0x37926e0();
   input += synapse0x3792720();
   input += synapse0x3792760();
   input += synapse0x37927a0();
   input += synapse0x37927e0();
   input += synapse0x3792820();
   input += synapse0x3792860();
   input += synapse0x37928a0();
   input += synapse0x3780650();
   input += synapse0x3780690();
   input += synapse0x37929f0();
   input += synapse0x3792a30();
   input += synapse0x3792a70();
   input += synapse0x3792ab0();
   input += synapse0x3792af0();
   input += synapse0x3792b30();
   return input;
}

double NNfunction_t1t1::neuron0x37922c0() {
   double input = input0x37922c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3792b70() {
   double input = 0.253665;
   input += synapse0x3792eb0();
   input += synapse0x3792ef0();
   input += synapse0x3792f30();
   input += synapse0x3792f70();
   input += synapse0x3792fb0();
   input += synapse0x3792ff0();
   input += synapse0x3793030();
   input += synapse0x3793070();
   input += synapse0x37930b0();
   input += synapse0x37930f0();
   input += synapse0x3793130();
   input += synapse0x3793170();
   input += synapse0x37931b0();
   input += synapse0x37931f0();
   input += synapse0x3793230();
   input += synapse0x3793270();
   input += synapse0x3792d00();
   input += synapse0x3792d40();
   input += synapse0x37933c0();
   input += synapse0x3793400();
   input += synapse0x3793440();
   input += synapse0x3793480();
   input += synapse0x37934c0();
   input += synapse0x3793500();
   return input;
}

double NNfunction_t1t1::neuron0x3792b70() {
   double input = input0x3792b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3793540() {
   double input = -2.4508;
   input += synapse0x3793880();
   input += synapse0x37938c0();
   input += synapse0x3793900();
   input += synapse0x3793940();
   input += synapse0x3793980();
   input += synapse0x37939c0();
   input += synapse0x3793a00();
   input += synapse0x3793a40();
   input += synapse0x3793a80();
   input += synapse0x3793ac0();
   input += synapse0x3793b00();
   input += synapse0x3793b40();
   input += synapse0x3793b80();
   input += synapse0x3793bc0();
   input += synapse0x3793c00();
   input += synapse0x3793c40();
   input += synapse0x37936d0();
   input += synapse0x3793710();
   input += synapse0x3793d90();
   input += synapse0x3793dd0();
   input += synapse0x3793e10();
   input += synapse0x3793e50();
   input += synapse0x3793e90();
   input += synapse0x3793ed0();
   return input;
}

double NNfunction_t1t1::neuron0x3793540() {
   double input = input0x3793540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x3793f10() {
   double input = -0.990156;
   input += synapse0x3794250();
   input += synapse0x3794290();
   input += synapse0x37942d0();
   input += synapse0x3794310();
   input += synapse0x3794350();
   input += synapse0x3794390();
   input += synapse0x37943d0();
   input += synapse0x3794410();
   input += synapse0x3794450();
   input += synapse0x3794490();
   input += synapse0x37944d0();
   input += synapse0x3794510();
   input += synapse0x3794550();
   input += synapse0x3794590();
   input += synapse0x37945d0();
   input += synapse0x3794610();
   input += synapse0x37940a0();
   input += synapse0x37940e0();
   input += synapse0x3794760();
   input += synapse0x37947a0();
   input += synapse0x37947e0();
   input += synapse0x3794820();
   input += synapse0x3794860();
   input += synapse0x37948a0();
   return input;
}

double NNfunction_t1t1::neuron0x3793f10() {
   double input = input0x3793f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x379b110() {
   double input = -0.967697;
   input += synapse0x352ac70();
   input += synapse0x352acb0();
   input += synapse0x3772350();
   input += synapse0x3772390();
   input += synapse0x3772d20();
   input += synapse0x3772d60();
   input += synapse0x3773af0();
   input += synapse0x3773b30();
   input += synapse0x37744c0();
   input += synapse0x3774500();
   input += synapse0x3774e90();
   input += synapse0x3774ed0();
   input += synapse0x3775970();
   input += synapse0x37759b0();
   input += synapse0x3776340();
   input += synapse0x3776380();
   input += synapse0x3773420();
   input += synapse0x3773460();
   input += synapse0x3777ef0();
   input += synapse0x3777f30();
   input += synapse0x37788c0();
   input += synapse0x3778900();
   input += synapse0x3779290();
   input += synapse0x37792d0();
   input += synapse0x3779c60();
   input += synapse0x3779ca0();
   input += synapse0x376de00();
   input += synapse0x376de40();
   input += synapse0x377bd50();
   input += synapse0x377bd90();
   input += synapse0x377c720();
   input += synapse0x377c760();
   input += synapse0x377d0f0();
   input += synapse0x377d130();
   input += synapse0x377dac0();
   input += synapse0x377db00();
   input += synapse0x377e490();
   input += synapse0x377e4d0();
   input += synapse0x3776fe0();
   input += synapse0x3777020();
   input += synapse0x3780890();
   input += synapse0x37808d0();
   input += synapse0x3781220();
   input += synapse0x3781260();
   input += synapse0x3781bf0();
   input += synapse0x3781c30();
   input += synapse0x37825c0();
   input += synapse0x3782600();
   input += synapse0x3782f90();
   input += synapse0x3782fd0();
   return input;
}

double NNfunction_t1t1::neuron0x379b110() {
   double input = input0x379b110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x379b4b0() {
   double input = 1.64094;
   input += synapse0x37856d0();
   input += synapse0x3785710();
   input += synapse0x377ac90();
   input += synapse0x377acd0();
   input += synapse0x37882b0();
   input += synapse0x37882f0();
   input += synapse0x3788c80();
   input += synapse0x3788cc0();
   input += synapse0x3789650();
   input += synapse0x3789690();
   input += synapse0x378a020();
   input += synapse0x378a060();
   input += synapse0x378a9f0();
   input += synapse0x378aa30();
   input += synapse0x378b3c0();
   input += synapse0x378b400();
   input += synapse0x378bd90();
   input += synapse0x378bdd0();
   input += synapse0x378c760();
   input += synapse0x378c7a0();
   input += synapse0x378d340();
   input += synapse0x378d380();
   input += synapse0x378dd10();
   input += synapse0x378dd50();
   input += synapse0x377eb90();
   input += synapse0x377ebd0();
   input += synapse0x377f560();
   input += synapse0x377f5a0();
   input += synapse0x377ff30();
   input += synapse0x377ff70();
   input += synapse0x3792450();
   input += synapse0x3792490();
   input += synapse0x3792e20();
   input += synapse0x3792e60();
   input += synapse0x37937f0();
   input += synapse0x3793830();
   input += synapse0x37941c0();
   input += synapse0x3794200();
   input += synapse0x37700b0();
   input += synapse0x37700f0();
   input += synapse0x3783960();
   input += synapse0x37839a0();
   input += synapse0x37948e0();
   input += synapse0x3794920();
   input += synapse0x3794960();
   input += synapse0x37949a0();
   input += synapse0x379b850();
   input += synapse0x379b890();
   input += synapse0x379b8d0();
   input += synapse0x379b910();
   return input;
}

double NNfunction_t1t1::neuron0x379b4b0() {
   double input = input0x379b4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x379b950() {
   double input = 1.44944;
   input += synapse0x379bc90();
   input += synapse0x379bcd0();
   input += synapse0x379bd10();
   input += synapse0x379bd50();
   input += synapse0x379bd90();
   input += synapse0x379bdd0();
   input += synapse0x379be10();
   input += synapse0x379be50();
   input += synapse0x379be90();
   input += synapse0x379bed0();
   input += synapse0x379bf10();
   input += synapse0x379bf50();
   input += synapse0x379bf90();
   input += synapse0x379bfd0();
   input += synapse0x379c010();
   input += synapse0x379c050();
   input += synapse0x379bae0();
   input += synapse0x379bb20();
   input += synapse0x379c1a0();
   input += synapse0x379c1e0();
   input += synapse0x379c220();
   input += synapse0x379c260();
   input += synapse0x379c2a0();
   input += synapse0x379c2e0();
   input += synapse0x379c320();
   input += synapse0x379c360();
   input += synapse0x379c3a0();
   input += synapse0x379c3e0();
   input += synapse0x379c420();
   input += synapse0x379c460();
   input += synapse0x379c4a0();
   input += synapse0x379c4e0();
   input += synapse0x379c090();
   input += synapse0x379c0d0();
   input += synapse0x379c110();
   input += synapse0x379c150();
   input += synapse0x379c730();
   input += synapse0x379c770();
   input += synapse0x379c7b0();
   input += synapse0x379c7f0();
   input += synapse0x379c830();
   input += synapse0x379c870();
   input += synapse0x379c8b0();
   input += synapse0x379c8f0();
   input += synapse0x379c930();
   input += synapse0x379c970();
   input += synapse0x379c9b0();
   input += synapse0x379c9f0();
   input += synapse0x379ca30();
   input += synapse0x379ca70();
   return input;
}

double NNfunction_t1t1::neuron0x379b950() {
   double input = input0x379b950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x379cab0() {
   double input = 0.391886;
   input += synapse0x379cdf0();
   input += synapse0x379ce30();
   input += synapse0x379ce70();
   input += synapse0x379ceb0();
   input += synapse0x379cef0();
   input += synapse0x379cf30();
   input += synapse0x379cf70();
   input += synapse0x379cfb0();
   input += synapse0x379cff0();
   input += synapse0x379d030();
   input += synapse0x379d070();
   input += synapse0x379d0b0();
   input += synapse0x379d0f0();
   input += synapse0x379d130();
   input += synapse0x379d170();
   input += synapse0x379d1b0();
   input += synapse0x379cc40();
   input += synapse0x379cc80();
   input += synapse0x379d300();
   input += synapse0x379d340();
   input += synapse0x379d380();
   input += synapse0x379d3c0();
   input += synapse0x379d400();
   input += synapse0x379d440();
   input += synapse0x379d480();
   input += synapse0x379d4c0();
   input += synapse0x379d500();
   input += synapse0x379d540();
   input += synapse0x379d580();
   input += synapse0x379d5c0();
   input += synapse0x379d600();
   input += synapse0x379d640();
   input += synapse0x379d1f0();
   input += synapse0x379d230();
   input += synapse0x379d270();
   input += synapse0x379d2b0();
   input += synapse0x379d890();
   input += synapse0x379d8d0();
   input += synapse0x379d910();
   input += synapse0x379d950();
   input += synapse0x379d990();
   input += synapse0x379d9d0();
   input += synapse0x379da10();
   input += synapse0x379da50();
   input += synapse0x379da90();
   input += synapse0x379dad0();
   input += synapse0x379db10();
   input += synapse0x379db50();
   input += synapse0x379db90();
   input += synapse0x379dbd0();
   return input;
}

double NNfunction_t1t1::neuron0x379cab0() {
   double input = input0x379cab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x379dc10() {
   double input = 0.617062;
   input += synapse0x379df50();
   input += synapse0x379df90();
   input += synapse0x379dfd0();
   input += synapse0x379e010();
   input += synapse0x379e050();
   input += synapse0x379e090();
   input += synapse0x379e0d0();
   input += synapse0x379e110();
   input += synapse0x379e150();
   input += synapse0x379e190();
   input += synapse0x379e1d0();
   input += synapse0x379e210();
   input += synapse0x379e250();
   input += synapse0x379e290();
   input += synapse0x379e2d0();
   input += synapse0x379e310();
   input += synapse0x379dda0();
   input += synapse0x379dde0();
   input += synapse0x379e460();
   input += synapse0x379e4a0();
   input += synapse0x379e4e0();
   input += synapse0x379e520();
   input += synapse0x379e560();
   input += synapse0x379e5a0();
   input += synapse0x379e5e0();
   input += synapse0x379e620();
   input += synapse0x379e660();
   input += synapse0x379e6a0();
   input += synapse0x379e6e0();
   input += synapse0x379e720();
   input += synapse0x379e760();
   input += synapse0x379e7a0();
   input += synapse0x379e350();
   input += synapse0x379e390();
   input += synapse0x379e3d0();
   input += synapse0x379e410();
   input += synapse0x379e9f0();
   input += synapse0x379ea30();
   input += synapse0x379ea70();
   input += synapse0x379eab0();
   input += synapse0x379eaf0();
   input += synapse0x379eb30();
   input += synapse0x379eb70();
   input += synapse0x379ebb0();
   input += synapse0x379ebf0();
   input += synapse0x379ec30();
   input += synapse0x379ec70();
   input += synapse0x379ecb0();
   input += synapse0x379ecf0();
   input += synapse0x379ed30();
   return input;
}

double NNfunction_t1t1::neuron0x379dc10() {
   double input = input0x379dc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_t1t1::input0x379ed70() {
   double input = 6.34755;
   input += synapse0x379ef90();
   input += synapse0x379efd0();
   input += synapse0x379f010();
   input += synapse0x379f050();
   input += synapse0x379f090();
   return input;
}

double NNfunction_t1t1::neuron0x379ed70() {
   double input = input0x379ed70();
   return (input * 1)+0;
}

double NNfunction_t1t1::synapse0x376ad20() {
   return (neuron0x376ae60()*-0.289813);
}

double NNfunction_t1t1::synapse0x376ad60() {
   return (neuron0x376b1a0()*0.0182869);
}

double NNfunction_t1t1::synapse0x3770140() {
   return (neuron0x376b4e0()*0.0148839);
}

double NNfunction_t1t1::synapse0x3770180() {
   return (neuron0x376b820()*0.0485602);
}

double NNfunction_t1t1::synapse0x37701c0() {
   return (neuron0x376bb60()*0.12611);
}

double NNfunction_t1t1::synapse0x3770200() {
   return (neuron0x376bea0()*-1.3955);
}

double NNfunction_t1t1::synapse0x3770240() {
   return (neuron0x376c1e0()*0.0768997);
}

double NNfunction_t1t1::synapse0x3770280() {
   return (neuron0x376c520()*-0.0730035);
}

double NNfunction_t1t1::synapse0x37702c0() {
   return (neuron0x376c860()*-0.05317);
}

double NNfunction_t1t1::synapse0x3770300() {
   return (neuron0x376cba0()*0.0291772);
}

double NNfunction_t1t1::synapse0x3770340() {
   return (neuron0x376cee0()*-0.0185388);
}

double NNfunction_t1t1::synapse0x3770380() {
   return (neuron0x376d220()*-0.0190516);
}

double NNfunction_t1t1::synapse0x37703c0() {
   return (neuron0x376d560()*0.104077);
}

double NNfunction_t1t1::synapse0x3770400() {
   return (neuron0x376d8a0()*-0.261843);
}

double NNfunction_t1t1::synapse0x3770440() {
   return (neuron0x376dbe0()*0.375922);
}

double NNfunction_t1t1::synapse0x3770480() {
   return (neuron0x376df20()*-0.100994);
}

double NNfunction_t1t1::synapse0x376ac90() {
   return (neuron0x376e260()*0.651334);
}

double NNfunction_t1t1::synapse0x376acd0() {
   return (neuron0x376e7c0()*-0.215034);
}

double NNfunction_t1t1::synapse0x351c910() {
   return (neuron0x376e9e0()*-0.294294);
}

double NNfunction_t1t1::synapse0x351c950() {
   return (neuron0x376ed20()*-0.0454155);
}

double NNfunction_t1t1::synapse0x37706e0() {
   return (neuron0x376f060()*0.294644);
}

double NNfunction_t1t1::synapse0x3770720() {
   return (neuron0x376f3a0()*-0.0595634);
}

double NNfunction_t1t1::synapse0x3770760() {
   return (neuron0x376f6e0()*-0.0400787);
}

double NNfunction_t1t1::synapse0x37707a0() {
   return (neuron0x376fa20()*0.0270635);
}

double NNfunction_t1t1::synapse0x3770b20() {
   return (neuron0x376ae60()*0.153367);
}

double NNfunction_t1t1::synapse0x3770b60() {
   return (neuron0x376b1a0()*-0.0098967);
}

double NNfunction_t1t1::synapse0x3770ba0() {
   return (neuron0x376b4e0()*-0.0164241);
}

double NNfunction_t1t1::synapse0x3770be0() {
   return (neuron0x376b820()*-0.0802459);
}

double NNfunction_t1t1::synapse0x3770c20() {
   return (neuron0x376bb60()*0.0454215);
}

double NNfunction_t1t1::synapse0x3770c60() {
   return (neuron0x376bea0()*0.0530363);
}

double NNfunction_t1t1::synapse0x3770ca0() {
   return (neuron0x376c1e0()*0.0289865);
}

double NNfunction_t1t1::synapse0x3770ce0() {
   return (neuron0x376c520()*0.0278027);
}

double NNfunction_t1t1::synapse0x3770d20() {
   return (neuron0x376c860()*-0.0207934);
}

double NNfunction_t1t1::synapse0x37705d0() {
   return (neuron0x376cba0()*-0.0124019);
}

double NNfunction_t1t1::synapse0x3770610() {
   return (neuron0x376cee0()*-0.0484878);
}

double NNfunction_t1t1::synapse0x3770650() {
   return (neuron0x376d220()*-0.0376091);
}

double NNfunction_t1t1::synapse0x3770690() {
   return (neuron0x376d560()*0.0015844);
}

double NNfunction_t1t1::synapse0x3770f70() {
   return (neuron0x376d8a0()*-1.52574);
}

double NNfunction_t1t1::synapse0x3770fb0() {
   return (neuron0x376dbe0()*0.00913067);
}

double NNfunction_t1t1::synapse0x3770ff0() {
   return (neuron0x376df20()*0.0348762);
}

double NNfunction_t1t1::synapse0x3770970() {
   return (neuron0x376e260()*-0.723444);
}

double NNfunction_t1t1::synapse0x37709b0() {
   return (neuron0x376e7c0()*-0.0354172);
}

double NNfunction_t1t1::synapse0x3771140() {
   return (neuron0x376e9e0()*-0.0436453);
}

double NNfunction_t1t1::synapse0x3771180() {
   return (neuron0x376ed20()*-0.0395713);
}

double NNfunction_t1t1::synapse0x37711c0() {
   return (neuron0x376f060()*2.62193);
}

double NNfunction_t1t1::synapse0x3771200() {
   return (neuron0x376f3a0()*0.0379807);
}

double NNfunction_t1t1::synapse0x3771240() {
   return (neuron0x376f6e0()*0.000641001);
}

double NNfunction_t1t1::synapse0x3771280() {
   return (neuron0x376fa20()*-0.129343);
}

double NNfunction_t1t1::synapse0x3771600() {
   return (neuron0x376ae60()*-0.0303434);
}

double NNfunction_t1t1::synapse0x3771640() {
   return (neuron0x376b1a0()*-0.00422603);
}

double NNfunction_t1t1::synapse0x3771680() {
   return (neuron0x376b4e0()*-0.0252658);
}

double NNfunction_t1t1::synapse0x37716c0() {
   return (neuron0x376b820()*3.31551);
}

double NNfunction_t1t1::synapse0x3771700() {
   return (neuron0x376bb60()*-0.0215081);
}

double NNfunction_t1t1::synapse0x3771740() {
   return (neuron0x376bea0()*-0.0158648);
}

double NNfunction_t1t1::synapse0x3771780() {
   return (neuron0x376c1e0()*0.00712386);
}

double NNfunction_t1t1::synapse0x37717c0() {
   return (neuron0x376c520()*0.0333465);
}

double NNfunction_t1t1::synapse0x3771800() {
   return (neuron0x376c860()*0.0118098);
}

double NNfunction_t1t1::synapse0x3771840() {
   return (neuron0x376cba0()*0.014532);
}

double NNfunction_t1t1::synapse0x3771880() {
   return (neuron0x376cee0()*-0.0197793);
}

double NNfunction_t1t1::synapse0x37718c0() {
   return (neuron0x376d220()*-0.0154494);
}

double NNfunction_t1t1::synapse0x3771900() {
   return (neuron0x376d560()*0.0237931);
}

double NNfunction_t1t1::synapse0x3771940() {
   return (neuron0x376d8a0()*-0.0786017);
}

double NNfunction_t1t1::synapse0x3771980() {
   return (neuron0x376dbe0()*-0.00368519);
}

double NNfunction_t1t1::synapse0x37719c0() {
   return (neuron0x376df20()*-0.00165388);
}

double NNfunction_t1t1::synapse0x3771450() {
   return (neuron0x376e260()*-0.114984);
}

double NNfunction_t1t1::synapse0x3771490() {
   return (neuron0x376e7c0()*-0.00917859);
}

double NNfunction_t1t1::synapse0x351cd40() {
   return (neuron0x376e9e0()*-0.0122534);
}

double NNfunction_t1t1::synapse0x352a460() {
   return (neuron0x376ed20()*0.029516);
}

double NNfunction_t1t1::synapse0x352a4a0() {
   return (neuron0x376f060()*0.442515);
}

double NNfunction_t1t1::synapse0x3759ef0() {
   return (neuron0x376f3a0()*-0.0178943);
}

double NNfunction_t1t1::synapse0x3759f30() {
   return (neuron0x376f6e0()*-0.00922832);
}

double NNfunction_t1t1::synapse0x3759f70() {
   return (neuron0x376fa20()*0.0974498);
}

double NNfunction_t1t1::synapse0x352ad00() {
   return (neuron0x376ae60()*0.0718883);
}

double NNfunction_t1t1::synapse0x3770ef0() {
   return (neuron0x376b1a0()*-0.0130346);
}

double NNfunction_t1t1::synapse0x3770f30() {
   return (neuron0x376b4e0()*0.0178999);
}

double NNfunction_t1t1::synapse0x3771b10() {
   return (neuron0x376b820()*-2.57285);
}

double NNfunction_t1t1::synapse0x3771b50() {
   return (neuron0x376bb60()*0.0429131);
}

double NNfunction_t1t1::synapse0x3771b90() {
   return (neuron0x376bea0()*0.0525785);
}

double NNfunction_t1t1::synapse0x3771bd0() {
   return (neuron0x376c1e0()*-0.0146488);
}

double NNfunction_t1t1::synapse0x3771c10() {
   return (neuron0x376c520()*-0.0111307);
}

double NNfunction_t1t1::synapse0x3771c50() {
   return (neuron0x376c860()*-0.0130265);
}

double NNfunction_t1t1::synapse0x3771c90() {
   return (neuron0x376cba0()*0.0426829);
}

double NNfunction_t1t1::synapse0x3771cd0() {
   return (neuron0x376cee0()*0.0403605);
}

double NNfunction_t1t1::synapse0x3771d10() {
   return (neuron0x376d220()*0.00756657);
}

double NNfunction_t1t1::synapse0x3771d50() {
   return (neuron0x376d560()*-0.0262042);
}

double NNfunction_t1t1::synapse0x3771d90() {
   return (neuron0x376d8a0()*-0.110475);
}

double NNfunction_t1t1::synapse0x3771dd0() {
   return (neuron0x376dbe0()*0.0547603);
}

double NNfunction_t1t1::synapse0x3771e10() {
   return (neuron0x376df20()*0.0121866);
}

double NNfunction_t1t1::synapse0x376ada0() {
   return (neuron0x376e260()*-0.0479066);
}

double NNfunction_t1t1::synapse0x376ade0() {
   return (neuron0x376e7c0()*0.0105968);
}

double NNfunction_t1t1::synapse0x376ae20() {
   return (neuron0x376e9e0()*0.0341698);
}

double NNfunction_t1t1::synapse0x3771f60() {
   return (neuron0x376ed20()*-0.0331705);
}

double NNfunction_t1t1::synapse0x3771fa0() {
   return (neuron0x376f060()*-0.613394);
}

double NNfunction_t1t1::synapse0x3771fe0() {
   return (neuron0x376f3a0()*-0.0540512);
}

double NNfunction_t1t1::synapse0x3772020() {
   return (neuron0x376f6e0()*-0.0192642);
}

double NNfunction_t1t1::synapse0x3772060() {
   return (neuron0x376fa20()*-0.287278);
}

double NNfunction_t1t1::synapse0x37723e0() {
   return (neuron0x376ae60()*-0.073326);
}

double NNfunction_t1t1::synapse0x3772420() {
   return (neuron0x376b1a0()*0.0594258);
}

double NNfunction_t1t1::synapse0x3772460() {
   return (neuron0x376b4e0()*-0.113605);
}

double NNfunction_t1t1::synapse0x37724a0() {
   return (neuron0x376b820()*-0.0140253);
}

double NNfunction_t1t1::synapse0x37724e0() {
   return (neuron0x376bb60()*-0.0224662);
}

double NNfunction_t1t1::synapse0x3772520() {
   return (neuron0x376bea0()*-0.0711039);
}

double NNfunction_t1t1::synapse0x3772560() {
   return (neuron0x376c1e0()*-0.0223055);
}

double NNfunction_t1t1::synapse0x37725a0() {
   return (neuron0x376c520()*-0.0825486);
}

double NNfunction_t1t1::synapse0x37725e0() {
   return (neuron0x376c860()*0.00846043);
}

double NNfunction_t1t1::synapse0x3772620() {
   return (neuron0x376cba0()*0.0867);
}

double NNfunction_t1t1::synapse0x3772660() {
   return (neuron0x376cee0()*0.107641);
}

double NNfunction_t1t1::synapse0x37726a0() {
   return (neuron0x376d220()*0.00711506);
}

double NNfunction_t1t1::synapse0x37726e0() {
   return (neuron0x376d560()*0.000353366);
}

double NNfunction_t1t1::synapse0x3772720() {
   return (neuron0x376d8a0()*6.06581);
}

double NNfunction_t1t1::synapse0x3772760() {
   return (neuron0x376dbe0()*-0.0646617);
}

double NNfunction_t1t1::synapse0x37727a0() {
   return (neuron0x376df20()*-0.0515827);
}

double NNfunction_t1t1::synapse0x3772230() {
   return (neuron0x376e260()*-4.07892);
}

double NNfunction_t1t1::synapse0x3772270() {
   return (neuron0x376e7c0()*-0.0275849);
}

double NNfunction_t1t1::synapse0x37728f0() {
   return (neuron0x376e9e0()*0.00989752);
}

double NNfunction_t1t1::synapse0x3772930() {
   return (neuron0x376ed20()*0.0919665);
}

double NNfunction_t1t1::synapse0x3772970() {
   return (neuron0x376f060()*0.118557);
}

double NNfunction_t1t1::synapse0x37729b0() {
   return (neuron0x376f3a0()*0.0188321);
}

double NNfunction_t1t1::synapse0x37729f0() {
   return (neuron0x376f6e0()*-0.0296438);
}

double NNfunction_t1t1::synapse0x3772a30() {
   return (neuron0x376fa20()*-0.0212463);
}

double NNfunction_t1t1::synapse0x3772db0() {
   return (neuron0x376ae60()*-0.223555);
}

double NNfunction_t1t1::synapse0x3772df0() {
   return (neuron0x376b1a0()*0.0870789);
}

double NNfunction_t1t1::synapse0x3772e30() {
   return (neuron0x376b4e0()*-0.0375112);
}

double NNfunction_t1t1::synapse0x3772e70() {
   return (neuron0x376b820()*-0.0252552);
}

double NNfunction_t1t1::synapse0x3772eb0() {
   return (neuron0x376bb60()*-0.197462);
}

double NNfunction_t1t1::synapse0x3772ef0() {
   return (neuron0x376bea0()*-0.0201631);
}

double NNfunction_t1t1::synapse0x3772f30() {
   return (neuron0x376c1e0()*0.0222537);
}

double NNfunction_t1t1::synapse0x3772f70() {
   return (neuron0x376c520()*0.0323105);
}

double NNfunction_t1t1::synapse0x3772fb0() {
   return (neuron0x376c860()*0.0714912);
}

double NNfunction_t1t1::synapse0x352a7d0() {
   return (neuron0x376cba0()*-0.210346);
}

double NNfunction_t1t1::synapse0x352a810() {
   return (neuron0x376cee0()*-0.146586);
}

double NNfunction_t1t1::synapse0x352a850() {
   return (neuron0x376d220()*-0.0411122);
}

double NNfunction_t1t1::synapse0x352a890() {
   return (neuron0x376d560()*-0.294767);
}

double NNfunction_t1t1::synapse0x352a8d0() {
   return (neuron0x376d8a0()*-0.32931);
}

double NNfunction_t1t1::synapse0x352a910() {
   return (neuron0x376dbe0()*-0.0211086);
}

double NNfunction_t1t1::synapse0x352a950() {
   return (neuron0x376df20()*-0.0521654);
}

double NNfunction_t1t1::synapse0x3772c00() {
   return (neuron0x376e260()*0.612257);
}

double NNfunction_t1t1::synapse0x3772c40() {
   return (neuron0x376e7c0()*0.0767689);
}

double NNfunction_t1t1::synapse0x352aaa0() {
   return (neuron0x376e9e0()*0.00488939);
}

double NNfunction_t1t1::synapse0x352aae0() {
   return (neuron0x376ed20()*-0.0750005);
}

double NNfunction_t1t1::synapse0x352ab20() {
   return (neuron0x376f060()*0.12261);
}

double NNfunction_t1t1::synapse0x352ab60() {
   return (neuron0x376f3a0()*-0.0182282);
}

double NNfunction_t1t1::synapse0x352aba0() {
   return (neuron0x376f6e0()*-0.00367749);
}

double NNfunction_t1t1::synapse0x3773800() {
   return (neuron0x376fa20()*-0.602146);
}

double NNfunction_t1t1::synapse0x3773b80() {
   return (neuron0x376ae60()*-0.000522967);
}

double NNfunction_t1t1::synapse0x3773bc0() {
   return (neuron0x376b1a0()*0.0862105);
}

double NNfunction_t1t1::synapse0x3773c00() {
   return (neuron0x376b4e0()*0.0314746);
}

double NNfunction_t1t1::synapse0x3773c40() {
   return (neuron0x376b820()*0.353294);
}

double NNfunction_t1t1::synapse0x3773c80() {
   return (neuron0x376bb60()*0.0862722);
}

double NNfunction_t1t1::synapse0x3773cc0() {
   return (neuron0x376bea0()*-0.0452502);
}

double NNfunction_t1t1::synapse0x3773d00() {
   return (neuron0x376c1e0()*-0.00457789);
}

double NNfunction_t1t1::synapse0x3773d40() {
   return (neuron0x376c520()*-0.00272971);
}

double NNfunction_t1t1::synapse0x3773d80() {
   return (neuron0x376c860()*-0.0700522);
}

double NNfunction_t1t1::synapse0x3773dc0() {
   return (neuron0x376cba0()*0.0208443);
}

double NNfunction_t1t1::synapse0x3773e00() {
   return (neuron0x376cee0()*0.0593846);
}

double NNfunction_t1t1::synapse0x3773e40() {
   return (neuron0x376d220()*-0.497014);
}

double NNfunction_t1t1::synapse0x3773e80() {
   return (neuron0x376d560()*-0.125495);
}

double NNfunction_t1t1::synapse0x3773ec0() {
   return (neuron0x376d8a0()*-0.179084);
}

double NNfunction_t1t1::synapse0x3773f00() {
   return (neuron0x376dbe0()*0.0197615);
}

double NNfunction_t1t1::synapse0x3773f40() {
   return (neuron0x376df20()*0.0642171);
}

double NNfunction_t1t1::synapse0x37739d0() {
   return (neuron0x376e260()*0.00896768);
}

double NNfunction_t1t1::synapse0x3773a10() {
   return (neuron0x376e7c0()*0.125141);
}

double NNfunction_t1t1::synapse0x3774090() {
   return (neuron0x376e9e0()*0.0929086);
}

double NNfunction_t1t1::synapse0x37740d0() {
   return (neuron0x376ed20()*-0.00181505);
}

double NNfunction_t1t1::synapse0x3774110() {
   return (neuron0x376f060()*0.0227586);
}

double NNfunction_t1t1::synapse0x3774150() {
   return (neuron0x376f3a0()*-0.00326883);
}

double NNfunction_t1t1::synapse0x3774190() {
   return (neuron0x376f6e0()*-0.0617404);
}

double NNfunction_t1t1::synapse0x37741d0() {
   return (neuron0x376fa20()*0.131728);
}

double NNfunction_t1t1::synapse0x3774550() {
   return (neuron0x376ae60()*0.139392);
}

double NNfunction_t1t1::synapse0x3774590() {
   return (neuron0x376b1a0()*0.0121206);
}

double NNfunction_t1t1::synapse0x37745d0() {
   return (neuron0x376b4e0()*0.141055);
}

double NNfunction_t1t1::synapse0x3774610() {
   return (neuron0x376b820()*-0.0337164);
}

double NNfunction_t1t1::synapse0x3774650() {
   return (neuron0x376bb60()*0.456216);
}

double NNfunction_t1t1::synapse0x3774690() {
   return (neuron0x376bea0()*0.011831);
}

double NNfunction_t1t1::synapse0x37746d0() {
   return (neuron0x376c1e0()*-0.00239977);
}

double NNfunction_t1t1::synapse0x3774710() {
   return (neuron0x376c520()*0.0269069);
}

double NNfunction_t1t1::synapse0x3774750() {
   return (neuron0x376c860()*0.0249147);
}

double NNfunction_t1t1::synapse0x3774790() {
   return (neuron0x376cba0()*-0.0239923);
}

double NNfunction_t1t1::synapse0x37747d0() {
   return (neuron0x376cee0()*-0.0170448);
}

double NNfunction_t1t1::synapse0x3774810() {
   return (neuron0x376d220()*-0.0237408);
}

double NNfunction_t1t1::synapse0x3774850() {
   return (neuron0x376d560()*-0.00320903);
}

double NNfunction_t1t1::synapse0x3774890() {
   return (neuron0x376d8a0()*0.153891);
}

double NNfunction_t1t1::synapse0x37748d0() {
   return (neuron0x376dbe0()*0.00697154);
}

double NNfunction_t1t1::synapse0x3774910() {
   return (neuron0x376df20()*-0.00034328);
}

double NNfunction_t1t1::synapse0x37743a0() {
   return (neuron0x376e260()*0.22087);
}

double NNfunction_t1t1::synapse0x37743e0() {
   return (neuron0x376e7c0()*0.0190393);
}

double NNfunction_t1t1::synapse0x3774a60() {
   return (neuron0x376e9e0()*0.00689851);
}

double NNfunction_t1t1::synapse0x3774aa0() {
   return (neuron0x376ed20()*0.00438489);
}

double NNfunction_t1t1::synapse0x3774ae0() {
   return (neuron0x376f060()*-0.0166141);
}

double NNfunction_t1t1::synapse0x3774b20() {
   return (neuron0x376f3a0()*-0.00463399);
}

double NNfunction_t1t1::synapse0x3774b60() {
   return (neuron0x376f6e0()*0.0274061);
}

double NNfunction_t1t1::synapse0x3774ba0() {
   return (neuron0x376fa20()*1.46184);
}

double NNfunction_t1t1::synapse0x376e6b0() {
   return (neuron0x376ae60()*0.191235);
}

double NNfunction_t1t1::synapse0x376e6f0() {
   return (neuron0x376b1a0()*-0.0617758);
}

double NNfunction_t1t1::synapse0x376e730() {
   return (neuron0x376b4e0()*0.0394969);
}

double NNfunction_t1t1::synapse0x376e770() {
   return (neuron0x376b820()*-0.0434664);
}

double NNfunction_t1t1::synapse0x3775130() {
   return (neuron0x376bb60()*-0.0542642);
}

double NNfunction_t1t1::synapse0x3775170() {
   return (neuron0x376bea0()*-0.155964);
}

double NNfunction_t1t1::synapse0x37751b0() {
   return (neuron0x376c1e0()*0.0679903);
}

double NNfunction_t1t1::synapse0x37751f0() {
   return (neuron0x376c520()*0.0693057);
}

double NNfunction_t1t1::synapse0x3775230() {
   return (neuron0x376c860()*0.0891114);
}

double NNfunction_t1t1::synapse0x3775270() {
   return (neuron0x376cba0()*0.0663519);
}

double NNfunction_t1t1::synapse0x37752b0() {
   return (neuron0x376cee0()*0.0401425);
}

double NNfunction_t1t1::synapse0x37752f0() {
   return (neuron0x376d220()*-0.0469076);
}

double NNfunction_t1t1::synapse0x3775330() {
   return (neuron0x376d560()*0.0572352);
}

double NNfunction_t1t1::synapse0x3775370() {
   return (neuron0x376d8a0()*0.300476);
}

double NNfunction_t1t1::synapse0x37753b0() {
   return (neuron0x376dbe0()*-0.0436671);
}

double NNfunction_t1t1::synapse0x37753f0() {
   return (neuron0x376df20()*1.10316);
}

double NNfunction_t1t1::synapse0x3774d70() {
   return (neuron0x376e260()*-0.178901);
}

double NNfunction_t1t1::synapse0x3774db0() {
   return (neuron0x376e7c0()*0.108438);
}

double NNfunction_t1t1::synapse0x3775540() {
   return (neuron0x376e9e0()*0.0772308);
}

double NNfunction_t1t1::synapse0x3775580() {
   return (neuron0x376ed20()*0.0344506);
}

double NNfunction_t1t1::synapse0x37755c0() {
   return (neuron0x376f060()*0.0816638);
}

double NNfunction_t1t1::synapse0x3775600() {
   return (neuron0x376f3a0()*0.0589542);
}

double NNfunction_t1t1::synapse0x3775640() {
   return (neuron0x376f6e0()*0.0582087);
}

double NNfunction_t1t1::synapse0x3775680() {
   return (neuron0x376fa20()*0.115999);
}

double NNfunction_t1t1::synapse0x3775a00() {
   return (neuron0x376ae60()*0.314644);
}

double NNfunction_t1t1::synapse0x3775a40() {
   return (neuron0x376b1a0()*0.0368471);
}

double NNfunction_t1t1::synapse0x3775a80() {
   return (neuron0x376b4e0()*-0.0113817);
}

double NNfunction_t1t1::synapse0x3775ac0() {
   return (neuron0x376b820()*0.218144);
}

double NNfunction_t1t1::synapse0x3775b00() {
   return (neuron0x376bb60()*0.207742);
}

double NNfunction_t1t1::synapse0x3775b40() {
   return (neuron0x376bea0()*0.0857256);
}

double NNfunction_t1t1::synapse0x3775b80() {
   return (neuron0x376c1e0()*-0.0103562);
}

double NNfunction_t1t1::synapse0x3775bc0() {
   return (neuron0x376c520()*0.0708061);
}

double NNfunction_t1t1::synapse0x3775c00() {
   return (neuron0x376c860()*-0.0901187);
}

double NNfunction_t1t1::synapse0x3775c40() {
   return (neuron0x376cba0()*-0.178508);
}

double NNfunction_t1t1::synapse0x3775c80() {
   return (neuron0x376cee0()*-0.0678896);
}

double NNfunction_t1t1::synapse0x3775cc0() {
   return (neuron0x376d220()*-0.0233642);
}

double NNfunction_t1t1::synapse0x3775d00() {
   return (neuron0x376d560()*0.0421971);
}

double NNfunction_t1t1::synapse0x3775d40() {
   return (neuron0x376d8a0()*0.648136);
}

double NNfunction_t1t1::synapse0x3775d80() {
   return (neuron0x376dbe0()*0.0215042);
}

double NNfunction_t1t1::synapse0x3775dc0() {
   return (neuron0x376df20()*0.016466);
}

double NNfunction_t1t1::synapse0x3775850() {
   return (neuron0x376e260()*0.389025);
}

double NNfunction_t1t1::synapse0x3775890() {
   return (neuron0x376e7c0()*-0.0146807);
}

double NNfunction_t1t1::synapse0x3775f10() {
   return (neuron0x376e9e0()*-0.0991837);
}

double NNfunction_t1t1::synapse0x3775f50() {
   return (neuron0x376ed20()*-0.0134105);
}

double NNfunction_t1t1::synapse0x3775f90() {
   return (neuron0x376f060()*-1.58599);
}

double NNfunction_t1t1::synapse0x3775fd0() {
   return (neuron0x376f3a0()*-0.0262422);
}

double NNfunction_t1t1::synapse0x3776010() {
   return (neuron0x376f6e0()*-0.00667556);
}

double NNfunction_t1t1::synapse0x3776050() {
   return (neuron0x376fa20()*0.301198);
}

double NNfunction_t1t1::synapse0x37763d0() {
   return (neuron0x376ae60()*-0.162102);
}

double NNfunction_t1t1::synapse0x3776410() {
   return (neuron0x376b1a0()*0.0790831);
}

double NNfunction_t1t1::synapse0x3776450() {
   return (neuron0x376b4e0()*-0.141048);
}

double NNfunction_t1t1::synapse0x3776490() {
   return (neuron0x376b820()*0.0558556);
}

double NNfunction_t1t1::synapse0x37764d0() {
   return (neuron0x376bb60()*0.046587);
}

double NNfunction_t1t1::synapse0x3776510() {
   return (neuron0x376bea0()*-0.122737);
}

double NNfunction_t1t1::synapse0x3776550() {
   return (neuron0x376c1e0()*0.0932338);
}

double NNfunction_t1t1::synapse0x3776590() {
   return (neuron0x376c520()*0.130877);
}

double NNfunction_t1t1::synapse0x37765d0() {
   return (neuron0x376c860()*-0.0435215);
}

double NNfunction_t1t1::synapse0x3776610() {
   return (neuron0x376cba0()*-0.0361847);
}

double NNfunction_t1t1::synapse0x3776650() {
   return (neuron0x376cee0()*0.113955);
}

double NNfunction_t1t1::synapse0x3776690() {
   return (neuron0x376d220()*-0.0403737);
}

double NNfunction_t1t1::synapse0x37766d0() {
   return (neuron0x376d560()*-0.0599576);
}

double NNfunction_t1t1::synapse0x3776710() {
   return (neuron0x376d8a0()*-0.264345);
}

double NNfunction_t1t1::synapse0x3776750() {
   return (neuron0x376dbe0()*-1.05032);
}

double NNfunction_t1t1::synapse0x3776790() {
   return (neuron0x376df20()*0.0914211);
}

double NNfunction_t1t1::synapse0x3776220() {
   return (neuron0x376e260()*0.330233);
}

double NNfunction_t1t1::synapse0x3776260() {
   return (neuron0x376e7c0()*0.0657257);
}

double NNfunction_t1t1::synapse0x3772ff0() {
   return (neuron0x376e9e0()*-0.10917);
}

double NNfunction_t1t1::synapse0x3773030() {
   return (neuron0x376ed20()*0.0149443);
}

double NNfunction_t1t1::synapse0x3773070() {
   return (neuron0x376f060()*-0.158066);
}

double NNfunction_t1t1::synapse0x37730b0() {
   return (neuron0x376f3a0()*0.0483382);
}

double NNfunction_t1t1::synapse0x37730f0() {
   return (neuron0x376f6e0()*-0.0301512);
}

double NNfunction_t1t1::synapse0x3773130() {
   return (neuron0x376fa20()*0.146944);
}

double NNfunction_t1t1::synapse0x37734b0() {
   return (neuron0x376ae60()*0.0162008);
}

double NNfunction_t1t1::synapse0x37734f0() {
   return (neuron0x376b1a0()*0.0259068);
}

double NNfunction_t1t1::synapse0x3773530() {
   return (neuron0x376b4e0()*-0.0195834);
}

double NNfunction_t1t1::synapse0x3773570() {
   return (neuron0x376b820()*-3.03402);
}

double NNfunction_t1t1::synapse0x37735b0() {
   return (neuron0x376bb60()*-0.033799);
}

double NNfunction_t1t1::synapse0x37735f0() {
   return (neuron0x376bea0()*-0.0137336);
}

double NNfunction_t1t1::synapse0x3773630() {
   return (neuron0x376c1e0()*0.0120768);
}

double NNfunction_t1t1::synapse0x3773670() {
   return (neuron0x376c520()*0.0317205);
}

double NNfunction_t1t1::synapse0x37736b0() {
   return (neuron0x376c860()*0.0029387);
}

double NNfunction_t1t1::synapse0x37736f0() {
   return (neuron0x376cba0()*0.00461973);
}

double NNfunction_t1t1::synapse0x3773730() {
   return (neuron0x376cee0()*-0.0224473);
}

double NNfunction_t1t1::synapse0x3773770() {
   return (neuron0x376d220()*-0.0631356);
}

double NNfunction_t1t1::synapse0x37737b0() {
   return (neuron0x376d560()*-0.0124086);
}

double NNfunction_t1t1::synapse0x37778f0() {
   return (neuron0x376d8a0()*-0.156688);
}

double NNfunction_t1t1::synapse0x3777930() {
   return (neuron0x376dbe0()*-0.035328);
}

double NNfunction_t1t1::synapse0x3777970() {
   return (neuron0x376df20()*-0.0295573);
}

double NNfunction_t1t1::synapse0x3773300() {
   return (neuron0x376e260()*-0.199548);
}

double NNfunction_t1t1::synapse0x3773340() {
   return (neuron0x376e7c0()*-0.025426);
}

double NNfunction_t1t1::synapse0x3777ac0() {
   return (neuron0x376e9e0()*-0.0414051);
}

double NNfunction_t1t1::synapse0x3777b00() {
   return (neuron0x376ed20()*0.0121444);
}

double NNfunction_t1t1::synapse0x3777b40() {
   return (neuron0x376f060()*0.0249401);
}

double NNfunction_t1t1::synapse0x3777b80() {
   return (neuron0x376f3a0()*-0.0312667);
}

double NNfunction_t1t1::synapse0x3777bc0() {
   return (neuron0x376f6e0()*-0.0225924);
}

double NNfunction_t1t1::synapse0x3777c00() {
   return (neuron0x376fa20()*0.19195);
}

double NNfunction_t1t1::synapse0x3777f80() {
   return (neuron0x376ae60()*0.00506485);
}

double NNfunction_t1t1::synapse0x3777fc0() {
   return (neuron0x376b1a0()*-0.00221447);
}

double NNfunction_t1t1::synapse0x3778000() {
   return (neuron0x376b4e0()*0.112284);
}

double NNfunction_t1t1::synapse0x3778040() {
   return (neuron0x376b820()*-0.0107284);
}

double NNfunction_t1t1::synapse0x3778080() {
   return (neuron0x376bb60()*0.0324342);
}

double NNfunction_t1t1::synapse0x37780c0() {
   return (neuron0x376bea0()*0.0137429);
}

double NNfunction_t1t1::synapse0x3778100() {
   return (neuron0x376c1e0()*-0.00618237);
}

double NNfunction_t1t1::synapse0x3778140() {
   return (neuron0x376c520()*-0.002374);
}

double NNfunction_t1t1::synapse0x3778180() {
   return (neuron0x376c860()*0.0115536);
}

double NNfunction_t1t1::synapse0x37781c0() {
   return (neuron0x376cba0()*0.00152239);
}

double NNfunction_t1t1::synapse0x3778200() {
   return (neuron0x376cee0()*0.00450983);
}

double NNfunction_t1t1::synapse0x3778240() {
   return (neuron0x376d220()*-0.0112144);
}

double NNfunction_t1t1::synapse0x3778280() {
   return (neuron0x376d560()*-0.0121972);
}

double NNfunction_t1t1::synapse0x37782c0() {
   return (neuron0x376d8a0()*-3.35093);
}

double NNfunction_t1t1::synapse0x3778300() {
   return (neuron0x376dbe0()*0.00153743);
}

double NNfunction_t1t1::synapse0x3778340() {
   return (neuron0x376df20()*0.0153278);
}

double NNfunction_t1t1::synapse0x3777dd0() {
   return (neuron0x376e260()*0.322523);
}

double NNfunction_t1t1::synapse0x3777e10() {
   return (neuron0x376e7c0()*-0.00882175);
}

double NNfunction_t1t1::synapse0x3778490() {
   return (neuron0x376e9e0()*-0.010972);
}

double NNfunction_t1t1::synapse0x37784d0() {
   return (neuron0x376ed20()*0.0461021);
}

double NNfunction_t1t1::synapse0x3778510() {
   return (neuron0x376f060()*0.0393219);
}

double NNfunction_t1t1::synapse0x3778550() {
   return (neuron0x376f3a0()*0.00700346);
}

double NNfunction_t1t1::synapse0x3778590() {
   return (neuron0x376f6e0()*0.00347868);
}

double NNfunction_t1t1::synapse0x37785d0() {
   return (neuron0x376fa20()*-0.0462287);
}

double NNfunction_t1t1::synapse0x3778950() {
   return (neuron0x376ae60()*1.50197);
}

double NNfunction_t1t1::synapse0x3778990() {
   return (neuron0x376b1a0()*-0.117524);
}

double NNfunction_t1t1::synapse0x37789d0() {
   return (neuron0x376b4e0()*-0.171929);
}

double NNfunction_t1t1::synapse0x3778a10() {
   return (neuron0x376b820()*-0.0141614);
}

double NNfunction_t1t1::synapse0x3778a50() {
   return (neuron0x376bb60()*-0.0265452);
}

double NNfunction_t1t1::synapse0x3778a90() {
   return (neuron0x376bea0()*0.012677);
}

double NNfunction_t1t1::synapse0x3778ad0() {
   return (neuron0x376c1e0()*-0.00258554);
}

double NNfunction_t1t1::synapse0x3778b10() {
   return (neuron0x376c520()*-0.0309716);
}

double NNfunction_t1t1::synapse0x3778b50() {
   return (neuron0x376c860()*0.0324244);
}

double NNfunction_t1t1::synapse0x3778b90() {
   return (neuron0x376cba0()*0.122015);
}

double NNfunction_t1t1::synapse0x3778bd0() {
   return (neuron0x376cee0()*0.0598152);
}

double NNfunction_t1t1::synapse0x3778c10() {
   return (neuron0x376d220()*-0.00791632);
}

double NNfunction_t1t1::synapse0x3778c50() {
   return (neuron0x376d560()*0.00695882);
}

double NNfunction_t1t1::synapse0x3778c90() {
   return (neuron0x376d8a0()*0.829224);
}

double NNfunction_t1t1::synapse0x3778cd0() {
   return (neuron0x376dbe0()*0.0431667);
}

double NNfunction_t1t1::synapse0x3778d10() {
   return (neuron0x376df20()*-0.00845684);
}

double NNfunction_t1t1::synapse0x37787a0() {
   return (neuron0x376e260()*-0.354937);
}

double NNfunction_t1t1::synapse0x37787e0() {
   return (neuron0x376e7c0()*0.0212258);
}

double NNfunction_t1t1::synapse0x3778e60() {
   return (neuron0x376e9e0()*0.0535249);
}

double NNfunction_t1t1::synapse0x3778ea0() {
   return (neuron0x376ed20()*-0.0367383);
}

double NNfunction_t1t1::synapse0x3778ee0() {
   return (neuron0x376f060()*-1.86843);
}

double NNfunction_t1t1::synapse0x3778f20() {
   return (neuron0x376f3a0()*-0.00743634);
}

double NNfunction_t1t1::synapse0x3778f60() {
   return (neuron0x376f6e0()*-0.00487651);
}

double NNfunction_t1t1::synapse0x3778fa0() {
   return (neuron0x376fa20()*0.713459);
}

double NNfunction_t1t1::synapse0x3779320() {
   return (neuron0x376ae60()*-0.0704436);
}

double NNfunction_t1t1::synapse0x3779360() {
   return (neuron0x376b1a0()*0.552695);
}

double NNfunction_t1t1::synapse0x37793a0() {
   return (neuron0x376b4e0()*0.0366767);
}

double NNfunction_t1t1::synapse0x37793e0() {
   return (neuron0x376b820()*-0.01073);
}

double NNfunction_t1t1::synapse0x3779420() {
   return (neuron0x376bb60()*0.247158);
}

double NNfunction_t1t1::synapse0x3779460() {
   return (neuron0x376bea0()*-0.00222957);
}

double NNfunction_t1t1::synapse0x37794a0() {
   return (neuron0x376c1e0()*-0.0537397);
}

double NNfunction_t1t1::synapse0x37794e0() {
   return (neuron0x376c520()*-0.0644275);
}

double NNfunction_t1t1::synapse0x3779520() {
   return (neuron0x376c860()*-0.201902);
}

double NNfunction_t1t1::synapse0x3779560() {
   return (neuron0x376cba0()*0.0847618);
}

double NNfunction_t1t1::synapse0x37795a0() {
   return (neuron0x376cee0()*-0.163334);
}

double NNfunction_t1t1::synapse0x37795e0() {
   return (neuron0x376d220()*0.0442291);
}

double NNfunction_t1t1::synapse0x3779620() {
   return (neuron0x376d560()*0.079463);
}

double NNfunction_t1t1::synapse0x3779660() {
   return (neuron0x376d8a0()*0.0478644);
}

double NNfunction_t1t1::synapse0x37796a0() {
   return (neuron0x376dbe0()*0.0357651);
}

double NNfunction_t1t1::synapse0x37796e0() {
   return (neuron0x376df20()*-0.0183548);
}

double NNfunction_t1t1::synapse0x3779170() {
   return (neuron0x376e260()*-0.00325637);
}

double NNfunction_t1t1::synapse0x37791b0() {
   return (neuron0x376e7c0()*0.00464305);
}

double NNfunction_t1t1::synapse0x3779830() {
   return (neuron0x376e9e0()*0.058217);
}

double NNfunction_t1t1::synapse0x3779870() {
   return (neuron0x376ed20()*-0.0187093);
}

double NNfunction_t1t1::synapse0x37798b0() {
   return (neuron0x376f060()*-0.105699);
}

double NNfunction_t1t1::synapse0x37798f0() {
   return (neuron0x376f3a0()*-0.0127626);
}

double NNfunction_t1t1::synapse0x3779930() {
   return (neuron0x376f6e0()*0.0106639);
}

double NNfunction_t1t1::synapse0x3779970() {
   return (neuron0x376fa20()*-0.41813);
}

double NNfunction_t1t1::synapse0x3779cf0() {
   return (neuron0x376ae60()*0.0345793);
}

double NNfunction_t1t1::synapse0x376b080() {
   return (neuron0x376b1a0()*-0.0569898);
}

double NNfunction_t1t1::synapse0x376b0c0() {
   return (neuron0x376b4e0()*-0.14106);
}

double NNfunction_t1t1::synapse0x376b3c0() {
   return (neuron0x376b820()*0.856256);
}

double NNfunction_t1t1::synapse0x376b400() {
   return (neuron0x376bb60()*-0.0502792);
}

double NNfunction_t1t1::synapse0x376b700() {
   return (neuron0x376bea0()*0.0351237);
}

double NNfunction_t1t1::synapse0x376b740() {
   return (neuron0x376c1e0()*-0.0167737);
}

double NNfunction_t1t1::synapse0x376ba40() {
   return (neuron0x376c520()*0.0581125);
}

double NNfunction_t1t1::synapse0x376ba80() {
   return (neuron0x376c860()*0.0507545);
}

double NNfunction_t1t1::synapse0x376bd80() {
   return (neuron0x376cba0()*0.0745282);
}

double NNfunction_t1t1::synapse0x376bdc0() {
   return (neuron0x376cee0()*0.0384102);
}

double NNfunction_t1t1::synapse0x376c0c0() {
   return (neuron0x376d220()*0.0553111);
}

double NNfunction_t1t1::synapse0x376c100() {
   return (neuron0x376d560()*-0.0155664);
}

double NNfunction_t1t1::synapse0x376c400() {
   return (neuron0x376d8a0()*0.0314311);
}

double NNfunction_t1t1::synapse0x376c440() {
   return (neuron0x376dbe0()*0.0123646);
}

double NNfunction_t1t1::synapse0x376c740() {
   return (neuron0x376df20()*-0.0327738);
}

double NNfunction_t1t1::synapse0x376c780() {
   return (neuron0x376e260()*-0.152365);
}

double NNfunction_t1t1::synapse0x376ca80() {
   return (neuron0x376e7c0()*-0.0281021);
}

double NNfunction_t1t1::synapse0x376cac0() {
   return (neuron0x376e9e0()*0.0196588);
}

double NNfunction_t1t1::synapse0x376cdc0() {
   return (neuron0x376ed20()*-0.0377834);
}

double NNfunction_t1t1::synapse0x376ce00() {
   return (neuron0x376f060()*-0.350795);
}

double NNfunction_t1t1::synapse0x376d100() {
   return (neuron0x376f3a0()*-0.0722914);
}

double NNfunction_t1t1::synapse0x376d140() {
   return (neuron0x376f6e0()*-0.0435796);
}

double NNfunction_t1t1::synapse0x376d440() {
   return (neuron0x376fa20()*-0.498688);
}

double NNfunction_t1t1::synapse0x376d480() {
   return (neuron0x376ae60()*1.24167);
}

double NNfunction_t1t1::synapse0x376e140() {
   return (neuron0x376b1a0()*-0.0588193);
}

double NNfunction_t1t1::synapse0x376e180() {
   return (neuron0x376b4e0()*-0.180546);
}

double NNfunction_t1t1::synapse0x3779b40() {
   return (neuron0x376b820()*0.0705379);
}

double NNfunction_t1t1::synapse0x3779b80() {
   return (neuron0x376bb60()*0.0213681);
}

double NNfunction_t1t1::synapse0x376e480() {
   return (neuron0x376bea0()*0.0987939);
}

double NNfunction_t1t1::synapse0x376e4c0() {
   return (neuron0x376c1e0()*-0.115098);
}

double NNfunction_t1t1::synapse0x351c7f0() {
   return (neuron0x376c520()*0.0189484);
}

double NNfunction_t1t1::synapse0x351c830() {
   return (neuron0x376c860()*-0.0382265);
}

double NNfunction_t1t1::synapse0x376ec00() {
   return (neuron0x376cba0()*0.00856215);
}

double NNfunction_t1t1::synapse0x376ec40() {
   return (neuron0x376cee0()*-0.0268622);
}

double NNfunction_t1t1::synapse0x376ef40() {
   return (neuron0x376d220()*-0.0491943);
}

double NNfunction_t1t1::synapse0x376ef80() {
   return (neuron0x376d560()*0.0129654);
}

double NNfunction_t1t1::synapse0x376f280() {
   return (neuron0x376d8a0()*0.630061);
}

double NNfunction_t1t1::synapse0x376f2c0() {
   return (neuron0x376dbe0()*-0.128122);
}

double NNfunction_t1t1::synapse0x376f5c0() {
   return (neuron0x376df20()*-0.0737602);
}

double NNfunction_t1t1::synapse0x376f600() {
   return (neuron0x376e260()*0.510374);
}

double NNfunction_t1t1::synapse0x376f900() {
   return (neuron0x376e7c0()*0.0514447);
}

double NNfunction_t1t1::synapse0x376f940() {
   return (neuron0x376e9e0()*-0.0405086);
}

double NNfunction_t1t1::synapse0x376fc40() {
   return (neuron0x376ed20()*0.0631188);
}

double NNfunction_t1t1::synapse0x376fc80() {
   return (neuron0x376f060()*0.970814);
}

double NNfunction_t1t1::synapse0x376d780() {
   return (neuron0x376f3a0()*-0.0716085);
}

double NNfunction_t1t1::synapse0x376d7c0() {
   return (neuron0x376f6e0()*-0.00709761);
}

double NNfunction_t1t1::synapse0x377ba60() {
   return (neuron0x376fa20()*0.270255);
}

double NNfunction_t1t1::synapse0x377bde0() {
   return (neuron0x376ae60()*-0.0645433);
}

double NNfunction_t1t1::synapse0x377be20() {
   return (neuron0x376b1a0()*0.0224898);
}

double NNfunction_t1t1::synapse0x377be60() {
   return (neuron0x376b4e0()*-0.0114381);
}

double NNfunction_t1t1::synapse0x377bea0() {
   return (neuron0x376b820()*-0.0237936);
}

double NNfunction_t1t1::synapse0x377bee0() {
   return (neuron0x376bb60()*0.296799);
}

double NNfunction_t1t1::synapse0x377bf20() {
   return (neuron0x376bea0()*0.0534911);
}

double NNfunction_t1t1::synapse0x377bf60() {
   return (neuron0x376c1e0()*0.0165955);
}

double NNfunction_t1t1::synapse0x377bfa0() {
   return (neuron0x376c520()*0.0165977);
}

double NNfunction_t1t1::synapse0x377bfe0() {
   return (neuron0x376c860()*-0.000907236);
}

double NNfunction_t1t1::synapse0x377c020() {
   return (neuron0x376cba0()*-0.0146999);
}

double NNfunction_t1t1::synapse0x377c060() {
   return (neuron0x376cee0()*0.101933);
}

double NNfunction_t1t1::synapse0x377c0a0() {
   return (neuron0x376d220()*0.0557078);
}

double NNfunction_t1t1::synapse0x377c0e0() {
   return (neuron0x376d560()*-0.158133);
}

double NNfunction_t1t1::synapse0x377c120() {
   return (neuron0x376d8a0()*0.583566);
}

double NNfunction_t1t1::synapse0x377c160() {
   return (neuron0x376dbe0()*0.051612);
}

double NNfunction_t1t1::synapse0x377c1a0() {
   return (neuron0x376df20()*0.0583632);
}

double NNfunction_t1t1::synapse0x377bc30() {
   return (neuron0x376e260()*0.559356);
}

double NNfunction_t1t1::synapse0x377bc70() {
   return (neuron0x376e7c0()*-0.0308724);
}

double NNfunction_t1t1::synapse0x377c2f0() {
   return (neuron0x376e9e0()*-0.0310182);
}

double NNfunction_t1t1::synapse0x377c330() {
   return (neuron0x376ed20()*0.0247417);
}

double NNfunction_t1t1::synapse0x377c370() {
   return (neuron0x376f060()*0.866705);
}

double NNfunction_t1t1::synapse0x377c3b0() {
   return (neuron0x376f3a0()*-0.0223118);
}

double NNfunction_t1t1::synapse0x377c3f0() {
   return (neuron0x376f6e0()*-0.00813567);
}

double NNfunction_t1t1::synapse0x377c430() {
   return (neuron0x376fa20()*-0.712148);
}

double NNfunction_t1t1::synapse0x377c7b0() {
   return (neuron0x376ae60()*0.36779);
}

double NNfunction_t1t1::synapse0x377c7f0() {
   return (neuron0x376b1a0()*0.0482407);
}

double NNfunction_t1t1::synapse0x377c830() {
   return (neuron0x376b4e0()*0.39621);
}

double NNfunction_t1t1::synapse0x377c870() {
   return (neuron0x376b820()*0.085311);
}

double NNfunction_t1t1::synapse0x377c8b0() {
   return (neuron0x376bb60()*-0.21377);
}

double NNfunction_t1t1::synapse0x377c8f0() {
   return (neuron0x376bea0()*-0.00297836);
}

double NNfunction_t1t1::synapse0x377c930() {
   return (neuron0x376c1e0()*0.000173841);
}

double NNfunction_t1t1::synapse0x377c970() {
   return (neuron0x376c520()*-0.0272311);
}

double NNfunction_t1t1::synapse0x377c9b0() {
   return (neuron0x376c860()*0.00241039);
}

double NNfunction_t1t1::synapse0x377c9f0() {
   return (neuron0x376cba0()*0.0145636);
}

double NNfunction_t1t1::synapse0x377ca30() {
   return (neuron0x376cee0()*-0.0640431);
}

double NNfunction_t1t1::synapse0x377ca70() {
   return (neuron0x376d220()*-0.0473235);
}

double NNfunction_t1t1::synapse0x377cab0() {
   return (neuron0x376d560()*-0.00466933);
}

double NNfunction_t1t1::synapse0x377caf0() {
   return (neuron0x376d8a0()*-0.287325);
}

double NNfunction_t1t1::synapse0x377cb30() {
   return (neuron0x376dbe0()*0.00517912);
}

double NNfunction_t1t1::synapse0x377cb70() {
   return (neuron0x376df20()*-0.0136645);
}

double NNfunction_t1t1::synapse0x377c600() {
   return (neuron0x376e260()*-0.213735);
}

double NNfunction_t1t1::synapse0x377c640() {
   return (neuron0x376e7c0()*-0.0121576);
}

double NNfunction_t1t1::synapse0x377ccc0() {
   return (neuron0x376e9e0()*-0.0134154);
}

double NNfunction_t1t1::synapse0x377cd00() {
   return (neuron0x376ed20()*0.0553824);
}

double NNfunction_t1t1::synapse0x377cd40() {
   return (neuron0x376f060()*0.118915);
}

double NNfunction_t1t1::synapse0x377cd80() {
   return (neuron0x376f3a0()*0.061065);
}

double NNfunction_t1t1::synapse0x377cdc0() {
   return (neuron0x376f6e0()*0.00610965);
}

double NNfunction_t1t1::synapse0x377ce00() {
   return (neuron0x376fa20()*-0.721008);
}

double NNfunction_t1t1::synapse0x377d180() {
   return (neuron0x376ae60()*0.975085);
}

double NNfunction_t1t1::synapse0x377d1c0() {
   return (neuron0x376b1a0()*0.0348386);
}

double NNfunction_t1t1::synapse0x377d200() {
   return (neuron0x376b4e0()*0.0415487);
}

double NNfunction_t1t1::synapse0x377d240() {
   return (neuron0x376b820()*-0.0252227);
}

double NNfunction_t1t1::synapse0x377d280() {
   return (neuron0x376bb60()*0.163523);
}

double NNfunction_t1t1::synapse0x377d2c0() {
   return (neuron0x376bea0()*0.107368);
}

double NNfunction_t1t1::synapse0x377d300() {
   return (neuron0x376c1e0()*-0.0263272);
}

double NNfunction_t1t1::synapse0x377d340() {
   return (neuron0x376c520()*0.0530079);
}

double NNfunction_t1t1::synapse0x377d380() {
   return (neuron0x376c860()*-0.0176836);
}

double NNfunction_t1t1::synapse0x377d3c0() {
   return (neuron0x376cba0()*-0.0461317);
}

double NNfunction_t1t1::synapse0x377d400() {
   return (neuron0x376cee0()*0.0448009);
}

double NNfunction_t1t1::synapse0x377d440() {
   return (neuron0x376d220()*0.00195804);
}

double NNfunction_t1t1::synapse0x377d480() {
   return (neuron0x376d560()*0.0727165);
}

double NNfunction_t1t1::synapse0x377d4c0() {
   return (neuron0x376d8a0()*-0.583619);
}

double NNfunction_t1t1::synapse0x377d500() {
   return (neuron0x376dbe0()*0.0308387);
}

double NNfunction_t1t1::synapse0x377d540() {
   return (neuron0x376df20()*0.00664733);
}

double NNfunction_t1t1::synapse0x377cfd0() {
   return (neuron0x376e260()*0.215875);
}

double NNfunction_t1t1::synapse0x377d010() {
   return (neuron0x376e7c0()*-0.0359258);
}

double NNfunction_t1t1::synapse0x377d690() {
   return (neuron0x376e9e0()*-0.0390638);
}

double NNfunction_t1t1::synapse0x377d6d0() {
   return (neuron0x376ed20()*-0.0116693);
}

double NNfunction_t1t1::synapse0x377d710() {
   return (neuron0x376f060()*0.679182);
}

double NNfunction_t1t1::synapse0x377d750() {
   return (neuron0x376f3a0()*0.0384781);
}

double NNfunction_t1t1::synapse0x377d790() {
   return (neuron0x376f6e0()*-0.0358257);
}

double NNfunction_t1t1::synapse0x377d7d0() {
   return (neuron0x376fa20()*-1.04147);
}

double NNfunction_t1t1::synapse0x377db50() {
   return (neuron0x376ae60()*0.554229);
}

double NNfunction_t1t1::synapse0x377db90() {
   return (neuron0x376b1a0()*0.0497588);
}

double NNfunction_t1t1::synapse0x377dbd0() {
   return (neuron0x376b4e0()*-0.00518076);
}

double NNfunction_t1t1::synapse0x377dc10() {
   return (neuron0x376b820()*0.0591873);
}

double NNfunction_t1t1::synapse0x377dc50() {
   return (neuron0x376bb60()*0.0673623);
}

double NNfunction_t1t1::synapse0x377dc90() {
   return (neuron0x376bea0()*-0.0267179);
}

double NNfunction_t1t1::synapse0x377dcd0() {
   return (neuron0x376c1e0()*0.00873922);
}

double NNfunction_t1t1::synapse0x377dd10() {
   return (neuron0x376c520()*-0.0698478);
}

double NNfunction_t1t1::synapse0x377dd50() {
   return (neuron0x376c860()*0.0275365);
}

double NNfunction_t1t1::synapse0x377dd90() {
   return (neuron0x376cba0()*0.0256998);
}

double NNfunction_t1t1::synapse0x377ddd0() {
   return (neuron0x376cee0()*-0.0293093);
}

double NNfunction_t1t1::synapse0x377de10() {
   return (neuron0x376d220()*-0.114455);
}

double NNfunction_t1t1::synapse0x377de50() {
   return (neuron0x376d560()*-0.0119693);
}

double NNfunction_t1t1::synapse0x377de90() {
   return (neuron0x376d8a0()*1.68829);
}

double NNfunction_t1t1::synapse0x377ded0() {
   return (neuron0x376dbe0()*7.06034e-05);
}

double NNfunction_t1t1::synapse0x377df10() {
   return (neuron0x376df20()*0.00576656);
}

double NNfunction_t1t1::synapse0x377d9a0() {
   return (neuron0x376e260()*0.0375922);
}

double NNfunction_t1t1::synapse0x377d9e0() {
   return (neuron0x376e7c0()*-0.0316697);
}

double NNfunction_t1t1::synapse0x377e060() {
   return (neuron0x376e9e0()*0.0123848);
}

double NNfunction_t1t1::synapse0x377e0a0() {
   return (neuron0x376ed20()*0.677281);
}

double NNfunction_t1t1::synapse0x377e0e0() {
   return (neuron0x376f060()*0.23031);
}

double NNfunction_t1t1::synapse0x377e120() {
   return (neuron0x376f3a0()*0.0349834);
}

double NNfunction_t1t1::synapse0x377e160() {
   return (neuron0x376f6e0()*0.0127661);
}

double NNfunction_t1t1::synapse0x377e1a0() {
   return (neuron0x376fa20()*-0.0170559);
}

double NNfunction_t1t1::synapse0x377e520() {
   return (neuron0x376ae60()*-0.055065);
}

double NNfunction_t1t1::synapse0x377e560() {
   return (neuron0x376b1a0()*0.000845826);
}

double NNfunction_t1t1::synapse0x377e5a0() {
   return (neuron0x376b4e0()*-0.0563863);
}

double NNfunction_t1t1::synapse0x377e5e0() {
   return (neuron0x376b820()*-0.00503921);
}

double NNfunction_t1t1::synapse0x377e620() {
   return (neuron0x376bb60()*-0.440712);
}

double NNfunction_t1t1::synapse0x377e660() {
   return (neuron0x376bea0()*0.0131317);
}

double NNfunction_t1t1::synapse0x377e6a0() {
   return (neuron0x376c1e0()*0.0255019);
}

double NNfunction_t1t1::synapse0x377e6e0() {
   return (neuron0x376c520()*0.0113242);
}

double NNfunction_t1t1::synapse0x377e720() {
   return (neuron0x376c860()*-0.0153559);
}

double NNfunction_t1t1::synapse0x37768e0() {
   return (neuron0x376cba0()*-0.0158016);
}

double NNfunction_t1t1::synapse0x3776920() {
   return (neuron0x376cee0()*0.0439707);
}

double NNfunction_t1t1::synapse0x3776960() {
   return (neuron0x376d220()*0.0196946);
}

double NNfunction_t1t1::synapse0x37769a0() {
   return (neuron0x376d560()*0.00687012);
}

double NNfunction_t1t1::synapse0x37769e0() {
   return (neuron0x376d8a0()*-0.0929306);
}

double NNfunction_t1t1::synapse0x3776a20() {
   return (neuron0x376dbe0()*0.0277136);
}

double NNfunction_t1t1::synapse0x3776a60() {
   return (neuron0x376df20()*-0.00291811);
}

double NNfunction_t1t1::synapse0x377e370() {
   return (neuron0x376e260()*-0.13118);
}

double NNfunction_t1t1::synapse0x377e3b0() {
   return (neuron0x376e7c0()*-0.00442707);
}

double NNfunction_t1t1::synapse0x3776bb0() {
   return (neuron0x376e9e0()*0.00168797);
}

double NNfunction_t1t1::synapse0x3776bf0() {
   return (neuron0x376ed20()*-0.0426675);
}

double NNfunction_t1t1::synapse0x3776c30() {
   return (neuron0x376f060()*0.0279368);
}

double NNfunction_t1t1::synapse0x3776c70() {
   return (neuron0x376f3a0()*-0.0185092);
}

double NNfunction_t1t1::synapse0x3776cb0() {
   return (neuron0x376f6e0()*0.00812548);
}

double NNfunction_t1t1::synapse0x3776cf0() {
   return (neuron0x376fa20()*1.90388);
}

double NNfunction_t1t1::synapse0x3777070() {
   return (neuron0x376ae60()*0.132271);
}

double NNfunction_t1t1::synapse0x37770b0() {
   return (neuron0x376b1a0()*-0.0346811);
}

double NNfunction_t1t1::synapse0x37770f0() {
   return (neuron0x376b4e0()*0.00418888);
}

double NNfunction_t1t1::synapse0x3777130() {
   return (neuron0x376b820()*0.127859);
}

double NNfunction_t1t1::synapse0x3777170() {
   return (neuron0x376bb60()*0.0324272);
}

double NNfunction_t1t1::synapse0x37771b0() {
   return (neuron0x376bea0()*0.0843341);
}

double NNfunction_t1t1::synapse0x37771f0() {
   return (neuron0x376c1e0()*0.0676712);
}

double NNfunction_t1t1::synapse0x3777230() {
   return (neuron0x376c520()*0.050476);
}

double NNfunction_t1t1::synapse0x3777270() {
   return (neuron0x376c860()*-0.0194271);
}

double NNfunction_t1t1::synapse0x37772b0() {
   return (neuron0x376cba0()*-0.101878);
}

double NNfunction_t1t1::synapse0x37772f0() {
   return (neuron0x376cee0()*-0.0588431);
}

double NNfunction_t1t1::synapse0x3777330() {
   return (neuron0x376d220()*0.0420744);
}

double NNfunction_t1t1::synapse0x3777370() {
   return (neuron0x376d560()*0.0024035);
}

double NNfunction_t1t1::synapse0x37773b0() {
   return (neuron0x376d8a0()*1.66008);
}

double NNfunction_t1t1::synapse0x37773f0() {
   return (neuron0x376dbe0()*0.0925596);
}

double NNfunction_t1t1::synapse0x3777430() {
   return (neuron0x376df20()*0.0602371);
}

double NNfunction_t1t1::synapse0x3776ec0() {
   return (neuron0x376e260()*0.727536);
}

double NNfunction_t1t1::synapse0x3776f00() {
   return (neuron0x376e7c0()*-0.00936122);
}

double NNfunction_t1t1::synapse0x3777580() {
   return (neuron0x376e9e0()*-0.0337932);
}

double NNfunction_t1t1::synapse0x37775c0() {
   return (neuron0x376ed20()*-0.191317);
}

double NNfunction_t1t1::synapse0x3777600() {
   return (neuron0x376f060()*0.0185257);
}

double NNfunction_t1t1::synapse0x3777640() {
   return (neuron0x376f3a0()*-0.0703147);
}

double NNfunction_t1t1::synapse0x3777680() {
   return (neuron0x376f6e0()*0.00517689);
}

double NNfunction_t1t1::synapse0x37776c0() {
   return (neuron0x376fa20()*0.144092);
}

double NNfunction_t1t1::synapse0x3777890() {
   return (neuron0x376ae60()*0.00890296);
}

double NNfunction_t1t1::synapse0x3780920() {
   return (neuron0x376b1a0()*-0.0304397);
}

double NNfunction_t1t1::synapse0x3780960() {
   return (neuron0x376b4e0()*0.182215);
}

double NNfunction_t1t1::synapse0x37809a0() {
   return (neuron0x376b820()*0.0297572);
}

double NNfunction_t1t1::synapse0x37809e0() {
   return (neuron0x376bb60()*-0.117218);
}

double NNfunction_t1t1::synapse0x3780a20() {
   return (neuron0x376bea0()*-0.00375159);
}

double NNfunction_t1t1::synapse0x3780a60() {
   return (neuron0x376c1e0()*-0.0266417);
}

double NNfunction_t1t1::synapse0x3780aa0() {
   return (neuron0x376c520()*-0.00284433);
}

double NNfunction_t1t1::synapse0x3780ae0() {
   return (neuron0x376c860()*0.0357191);
}

double NNfunction_t1t1::synapse0x3780b20() {
   return (neuron0x376cba0()*-0.0732258);
}

double NNfunction_t1t1::synapse0x3780b60() {
   return (neuron0x376cee0()*-0.0315601);
}

double NNfunction_t1t1::synapse0x3780ba0() {
   return (neuron0x376d220()*0.017372);
}

double NNfunction_t1t1::synapse0x3780be0() {
   return (neuron0x376d560()*-0.0199159);
}

double NNfunction_t1t1::synapse0x3780c20() {
   return (neuron0x376d8a0()*-0.470975);
}

double NNfunction_t1t1::synapse0x3780c60() {
   return (neuron0x376dbe0()*0.0439298);
}

double NNfunction_t1t1::synapse0x3780ca0() {
   return (neuron0x376df20()*0.0459343);
}

double NNfunction_t1t1::synapse0x3780770() {
   return (neuron0x376e260()*-0.35364);
}

double NNfunction_t1t1::synapse0x37807b0() {
   return (neuron0x376e7c0()*0.00614432);
}

double NNfunction_t1t1::synapse0x3780df0() {
   return (neuron0x376e9e0()*0.0276327);
}

double NNfunction_t1t1::synapse0x3780e30() {
   return (neuron0x376ed20()*-0.00960796);
}

double NNfunction_t1t1::synapse0x3780e70() {
   return (neuron0x376f060()*0.0121495);
}

double NNfunction_t1t1::synapse0x3780eb0() {
   return (neuron0x376f3a0()*-0.0132127);
}

double NNfunction_t1t1::synapse0x3780ef0() {
   return (neuron0x376f6e0()*0.0329532);
}

double NNfunction_t1t1::synapse0x3780f30() {
   return (neuron0x376fa20()*-0.00750504);
}

double NNfunction_t1t1::synapse0x37812b0() {
   return (neuron0x376ae60()*-0.145795);
}

double NNfunction_t1t1::synapse0x37812f0() {
   return (neuron0x376b1a0()*0.00979185);
}

double NNfunction_t1t1::synapse0x3781330() {
   return (neuron0x376b4e0()*-0.00590421);
}

double NNfunction_t1t1::synapse0x3781370() {
   return (neuron0x376b820()*-0.132138);
}

double NNfunction_t1t1::synapse0x37813b0() {
   return (neuron0x376bb60()*-0.0996494);
}

double NNfunction_t1t1::synapse0x37813f0() {
   return (neuron0x376bea0()*-0.00578129);
}

double NNfunction_t1t1::synapse0x3781430() {
   return (neuron0x376c1e0()*-0.0161401);
}

double NNfunction_t1t1::synapse0x3781470() {
   return (neuron0x376c520()*0.00115101);
}

double NNfunction_t1t1::synapse0x37814b0() {
   return (neuron0x376c860()*-0.0197785);
}

double NNfunction_t1t1::synapse0x37814f0() {
   return (neuron0x376cba0()*0.0174714);
}

double NNfunction_t1t1::synapse0x3781530() {
   return (neuron0x376cee0()*-0.0121092);
}

double NNfunction_t1t1::synapse0x3781570() {
   return (neuron0x376d220()*-0.0143989);
}

double NNfunction_t1t1::synapse0x37815b0() {
   return (neuron0x376d560()*0.012717);
}

double NNfunction_t1t1::synapse0x37815f0() {
   return (neuron0x376d8a0()*0.1369);
}

double NNfunction_t1t1::synapse0x3781630() {
   return (neuron0x376dbe0()*-0.0201652);
}

double NNfunction_t1t1::synapse0x3781670() {
   return (neuron0x376df20()*0.00417591);
}

double NNfunction_t1t1::synapse0x3781100() {
   return (neuron0x376e260()*0.391142);
}

double NNfunction_t1t1::synapse0x3781140() {
   return (neuron0x376e7c0()*0.0204591);
}

double NNfunction_t1t1::synapse0x37817c0() {
   return (neuron0x376e9e0()*-0.0154786);
}

double NNfunction_t1t1::synapse0x3781800() {
   return (neuron0x376ed20()*-0.033387);
}

double NNfunction_t1t1::synapse0x3781840() {
   return (neuron0x376f060()*2.45726);
}

double NNfunction_t1t1::synapse0x3781880() {
   return (neuron0x376f3a0()*-0.00264013);
}

double NNfunction_t1t1::synapse0x37818c0() {
   return (neuron0x376f6e0()*-0.00879111);
}

double NNfunction_t1t1::synapse0x3781900() {
   return (neuron0x376fa20()*-0.235364);
}

double NNfunction_t1t1::synapse0x3781c80() {
   return (neuron0x376ae60()*0.107235);
}

double NNfunction_t1t1::synapse0x3781cc0() {
   return (neuron0x376b1a0()*-0.145322);
}

double NNfunction_t1t1::synapse0x3781d00() {
   return (neuron0x376b4e0()*-0.0565319);
}

double NNfunction_t1t1::synapse0x3781d40() {
   return (neuron0x376b820()*-0.355346);
}

double NNfunction_t1t1::synapse0x3781d80() {
   return (neuron0x376bb60()*-0.0492613);
}

double NNfunction_t1t1::synapse0x3781dc0() {
   return (neuron0x376bea0()*0.0442399);
}

double NNfunction_t1t1::synapse0x3781e00() {
   return (neuron0x376c1e0()*-0.0214775);
}

double NNfunction_t1t1::synapse0x3781e40() {
   return (neuron0x376c520()*0.0215946);
}

double NNfunction_t1t1::synapse0x3781e80() {
   return (neuron0x376c860()*-0.033998);
}

double NNfunction_t1t1::synapse0x3781ec0() {
   return (neuron0x376cba0()*0.0767369);
}

double NNfunction_t1t1::synapse0x3781f00() {
   return (neuron0x376cee0()*0.234778);
}

double NNfunction_t1t1::synapse0x3781f40() {
   return (neuron0x376d220()*-0.0752339);
}

double NNfunction_t1t1::synapse0x3781f80() {
   return (neuron0x376d560()*-0.232652);
}

double NNfunction_t1t1::synapse0x3781fc0() {
   return (neuron0x376d8a0()*0.297576);
}

double NNfunction_t1t1::synapse0x3782000() {
   return (neuron0x376dbe0()*-0.0541805);
}

double NNfunction_t1t1::synapse0x3782040() {
   return (neuron0x376df20()*-0.0151219);
}

double NNfunction_t1t1::synapse0x3781ad0() {
   return (neuron0x376e260()*-0.325776);
}

double NNfunction_t1t1::synapse0x3781b10() {
   return (neuron0x376e7c0()*-0.112032);
}

double NNfunction_t1t1::synapse0x3782190() {
   return (neuron0x376e9e0()*0.0174736);
}

double NNfunction_t1t1::synapse0x37821d0() {
   return (neuron0x376ed20()*0.0169861);
}

double NNfunction_t1t1::synapse0x3782210() {
   return (neuron0x376f060()*-0.51666);
}

double NNfunction_t1t1::synapse0x3782250() {
   return (neuron0x376f3a0()*0.0570819);
}

double NNfunction_t1t1::synapse0x3782290() {
   return (neuron0x376f6e0()*0.0198564);
}

double NNfunction_t1t1::synapse0x37822d0() {
   return (neuron0x376fa20()*-0.57911);
}

double NNfunction_t1t1::synapse0x3782650() {
   return (neuron0x376ae60()*0.113686);
}

double NNfunction_t1t1::synapse0x3782690() {
   return (neuron0x376b1a0()*0.49845);
}

double NNfunction_t1t1::synapse0x37826d0() {
   return (neuron0x376b4e0()*-0.056111);
}

double NNfunction_t1t1::synapse0x3782710() {
   return (neuron0x376b820()*0.064443);
}

double NNfunction_t1t1::synapse0x3782750() {
   return (neuron0x376bb60()*-0.303527);
}

double NNfunction_t1t1::synapse0x3782790() {
   return (neuron0x376bea0()*0.0354881);
}

double NNfunction_t1t1::synapse0x37827d0() {
   return (neuron0x376c1e0()*-0.00330002);
}

double NNfunction_t1t1::synapse0x3782810() {
   return (neuron0x376c520()*0.0482093);
}

double NNfunction_t1t1::synapse0x3782850() {
   return (neuron0x376c860()*0.0485623);
}

double NNfunction_t1t1::synapse0x3782890() {
   return (neuron0x376cba0()*-0.0127504);
}

double NNfunction_t1t1::synapse0x37828d0() {
   return (neuron0x376cee0()*0.277751);
}

double NNfunction_t1t1::synapse0x3782910() {
   return (neuron0x376d220()*0.0648286);
}

double NNfunction_t1t1::synapse0x3782950() {
   return (neuron0x376d560()*-0.126799);
}

double NNfunction_t1t1::synapse0x3782990() {
   return (neuron0x376d8a0()*0.0743006);
}

double NNfunction_t1t1::synapse0x37829d0() {
   return (neuron0x376dbe0()*-0.131226);
}

double NNfunction_t1t1::synapse0x3782a10() {
   return (neuron0x376df20()*-0.0303567);
}

double NNfunction_t1t1::synapse0x37824a0() {
   return (neuron0x376e260()*-0.239423);
}

double NNfunction_t1t1::synapse0x37824e0() {
   return (neuron0x376e7c0()*0.150425);
}

double NNfunction_t1t1::synapse0x3782b60() {
   return (neuron0x376e9e0()*0.082255);
}

double NNfunction_t1t1::synapse0x3782ba0() {
   return (neuron0x376ed20()*0.0604916);
}

double NNfunction_t1t1::synapse0x3782be0() {
   return (neuron0x376f060()*-0.0157432);
}

double NNfunction_t1t1::synapse0x3782c20() {
   return (neuron0x376f3a0()*0.00540471);
}

double NNfunction_t1t1::synapse0x3782c60() {
   return (neuron0x376f6e0()*-0.0261893);
}

double NNfunction_t1t1::synapse0x3782ca0() {
   return (neuron0x376fa20()*0.609488);
}

double NNfunction_t1t1::synapse0x3783020() {
   return (neuron0x376ae60()*0.0444068);
}

double NNfunction_t1t1::synapse0x3783060() {
   return (neuron0x376b1a0()*0.00491296);
}

double NNfunction_t1t1::synapse0x37830a0() {
   return (neuron0x376b4e0()*-0.0361217);
}

double NNfunction_t1t1::synapse0x37830e0() {
   return (neuron0x376b820()*-0.00683583);
}

double NNfunction_t1t1::synapse0x3783120() {
   return (neuron0x376bb60()*0.131514);
}

double NNfunction_t1t1::synapse0x3783160() {
   return (neuron0x376bea0()*0.0181891);
}

double NNfunction_t1t1::synapse0x37831a0() {
   return (neuron0x376c1e0()*0.195818);
}

double NNfunction_t1t1::synapse0x37831e0() {
   return (neuron0x376c520()*-0.24481);
}

double NNfunction_t1t1::synapse0x3783220() {
   return (neuron0x376c860()*-0.00813851);
}

double NNfunction_t1t1::synapse0x3783260() {
   return (neuron0x376cba0()*-0.00874431);
}

double NNfunction_t1t1::synapse0x37832a0() {
   return (neuron0x376cee0()*0.00323354);
}

double NNfunction_t1t1::synapse0x37832e0() {
   return (neuron0x376d220()*0.0825876);
}

double NNfunction_t1t1::synapse0x3783320() {
   return (neuron0x376d560()*-0.0247543);
}

double NNfunction_t1t1::synapse0x3783360() {
   return (neuron0x376d8a0()*0.823281);
}

double NNfunction_t1t1::synapse0x37833a0() {
   return (neuron0x376dbe0()*0.0223388);
}

double NNfunction_t1t1::synapse0x37833e0() {
   return (neuron0x376df20()*0.0106173);
}

double NNfunction_t1t1::synapse0x3782e70() {
   return (neuron0x376e260()*2.68745);
}

double NNfunction_t1t1::synapse0x3782eb0() {
   return (neuron0x376e7c0()*-0.0696388);
}

double NNfunction_t1t1::synapse0x3783530() {
   return (neuron0x376e9e0()*-0.0199743);
}

double NNfunction_t1t1::synapse0x3783570() {
   return (neuron0x376ed20()*-0.00740487);
}

double NNfunction_t1t1::synapse0x37835b0() {
   return (neuron0x376f060()*0.080947);
}

double NNfunction_t1t1::synapse0x37835f0() {
   return (neuron0x376f3a0()*0.0053887);
}

double NNfunction_t1t1::synapse0x3783630() {
   return (neuron0x376f6e0()*-0.0229706);
}

double NNfunction_t1t1::synapse0x3783670() {
   return (neuron0x376fa20()*0.0972941);
}

double NNfunction_t1t1::synapse0x37839f0() {
   return (neuron0x376ae60()*1.18336);
}

double NNfunction_t1t1::synapse0x3783a30() {
   return (neuron0x376b1a0()*0.0134573);
}

double NNfunction_t1t1::synapse0x3783a70() {
   return (neuron0x376b4e0()*-0.067128);
}

double NNfunction_t1t1::synapse0x3783ab0() {
   return (neuron0x376b820()*-0.0787769);
}

double NNfunction_t1t1::synapse0x3783af0() {
   return (neuron0x376bb60()*0.26069);
}

double NNfunction_t1t1::synapse0x3783b30() {
   return (neuron0x376bea0()*0.0366345);
}

double NNfunction_t1t1::synapse0x3783b70() {
   return (neuron0x376c1e0()*0.0255071);
}

double NNfunction_t1t1::synapse0x3783bb0() {
   return (neuron0x376c520()*0.0741628);
}

double NNfunction_t1t1::synapse0x3783bf0() {
   return (neuron0x376c860()*-0.0931762);
}

double NNfunction_t1t1::synapse0x3783c30() {
   return (neuron0x376cba0()*-0.0409119);
}

double NNfunction_t1t1::synapse0x3783c70() {
   return (neuron0x376cee0()*0.0283154);
}

double NNfunction_t1t1::synapse0x3783cb0() {
   return (neuron0x376d220()*0.00982566);
}

double NNfunction_t1t1::synapse0x3783cf0() {
   return (neuron0x376d560()*-0.0365644);
}

double NNfunction_t1t1::synapse0x3783d30() {
   return (neuron0x376d8a0()*-0.893067);
}

double NNfunction_t1t1::synapse0x3783d70() {
   return (neuron0x376dbe0()*0.00282197);
}

double NNfunction_t1t1::synapse0x3783db0() {
   return (neuron0x376df20()*0.0512594);
}

double NNfunction_t1t1::synapse0x3783840() {
   return (neuron0x376e260()*0.424706);
}

double NNfunction_t1t1::synapse0x3783880() {
   return (neuron0x376e7c0()*-0.0258165);
}

double NNfunction_t1t1::synapse0x3783f00() {
   return (neuron0x376e9e0()*-0.0934355);
}

double NNfunction_t1t1::synapse0x3783f40() {
   return (neuron0x376ed20()*0.178234);
}

double NNfunction_t1t1::synapse0x3783f80() {
   return (neuron0x376f060()*-0.451294);
}

double NNfunction_t1t1::synapse0x3783fc0() {
   return (neuron0x376f3a0()*-0.119284);
}

double NNfunction_t1t1::synapse0x3784000() {
   return (neuron0x376f6e0()*-0.0985275);
}

double NNfunction_t1t1::synapse0x3784040() {
   return (neuron0x376fa20()*0.473932);
}

double NNfunction_t1t1::synapse0x37843c0() {
   return (neuron0x376ae60()*-0.0368057);
}

double NNfunction_t1t1::synapse0x3784400() {
   return (neuron0x376b1a0()*0.0624704);
}

double NNfunction_t1t1::synapse0x3784440() {
   return (neuron0x376b4e0()*-0.599707);
}

double NNfunction_t1t1::synapse0x3784480() {
   return (neuron0x376b820()*-0.171277);
}

double NNfunction_t1t1::synapse0x37844c0() {
   return (neuron0x376bb60()*0.13582);
}

double NNfunction_t1t1::synapse0x3784500() {
   return (neuron0x376bea0()*-0.0639611);
}

double NNfunction_t1t1::synapse0x3784540() {
   return (neuron0x376c1e0()*-0.0200851);
}

double NNfunction_t1t1::synapse0x3784580() {
   return (neuron0x376c520()*-0.0381202);
}

double NNfunction_t1t1::synapse0x37845c0() {
   return (neuron0x376c860()*0.0402899);
}

double NNfunction_t1t1::synapse0x3784600() {
   return (neuron0x376cba0()*0.0224098);
}

double NNfunction_t1t1::synapse0x3784640() {
   return (neuron0x376cee0()*-0.0638258);
}

double NNfunction_t1t1::synapse0x3784680() {
   return (neuron0x376d220()*-0.00200238);
}

double NNfunction_t1t1::synapse0x37846c0() {
   return (neuron0x376d560()*0.0561751);
}

double NNfunction_t1t1::synapse0x3784700() {
   return (neuron0x376d8a0()*0.481189);
}

double NNfunction_t1t1::synapse0x3784740() {
   return (neuron0x376dbe0()*-0.10214);
}

double NNfunction_t1t1::synapse0x3784780() {
   return (neuron0x376df20()*-0.0616726);
}

double NNfunction_t1t1::synapse0x3784210() {
   return (neuron0x376e260()*0.0111664);
}

double NNfunction_t1t1::synapse0x3784250() {
   return (neuron0x376e7c0()*0.0230835);
}

double NNfunction_t1t1::synapse0x37848d0() {
   return (neuron0x376e9e0()*0.018896);
}

double NNfunction_t1t1::synapse0x3784910() {
   return (neuron0x376ed20()*0.0616652);
}

double NNfunction_t1t1::synapse0x3784950() {
   return (neuron0x376f060()*0.0635953);
}

double NNfunction_t1t1::synapse0x3784990() {
   return (neuron0x376f3a0()*0.0427219);
}

double NNfunction_t1t1::synapse0x37849d0() {
   return (neuron0x376f6e0()*0.000939176);
}

double NNfunction_t1t1::synapse0x3784a10() {
   return (neuron0x376fa20()*-0.562374);
}

double NNfunction_t1t1::synapse0x3784d90() {
   return (neuron0x376ae60()*-0.0619416);
}

double NNfunction_t1t1::synapse0x3784dd0() {
   return (neuron0x376b1a0()*-0.27232);
}

double NNfunction_t1t1::synapse0x3784e10() {
   return (neuron0x376b4e0()*-0.0545309);
}

double NNfunction_t1t1::synapse0x3784e50() {
   return (neuron0x376b820()*0.125949);
}

double NNfunction_t1t1::synapse0x3784e90() {
   return (neuron0x376bb60()*-0.11217);
}

double NNfunction_t1t1::synapse0x3784ed0() {
   return (neuron0x376bea0()*0.0279854);
}

double NNfunction_t1t1::synapse0x3784f10() {
   return (neuron0x376c1e0()*0.0015897);
}

double NNfunction_t1t1::synapse0x3784f50() {
   return (neuron0x376c520()*-0.0881724);
}

double NNfunction_t1t1::synapse0x3784f90() {
   return (neuron0x376c860()*-0.63352);
}

double NNfunction_t1t1::synapse0x3784fd0() {
   return (neuron0x376cba0()*-0.0469812);
}

double NNfunction_t1t1::synapse0x3785010() {
   return (neuron0x376cee0()*-0.0502461);
}

double NNfunction_t1t1::synapse0x3785050() {
   return (neuron0x376d220()*0.15025);
}

double NNfunction_t1t1::synapse0x3785090() {
   return (neuron0x376d560()*-0.175522);
}

double NNfunction_t1t1::synapse0x37850d0() {
   return (neuron0x376d8a0()*-0.355056);
}

double NNfunction_t1t1::synapse0x3785110() {
   return (neuron0x376dbe0()*-0.0440004);
}

double NNfunction_t1t1::synapse0x3785150() {
   return (neuron0x376df20()*-0.0461182);
}

double NNfunction_t1t1::synapse0x3784be0() {
   return (neuron0x376e260()*1.15458);
}

double NNfunction_t1t1::synapse0x3784c20() {
   return (neuron0x376e7c0()*0.0664777);
}

double NNfunction_t1t1::synapse0x37852a0() {
   return (neuron0x376e9e0()*0.122844);
}

double NNfunction_t1t1::synapse0x37852e0() {
   return (neuron0x376ed20()*0.0664019);
}

double NNfunction_t1t1::synapse0x3785320() {
   return (neuron0x376f060()*0.107305);
}

double NNfunction_t1t1::synapse0x3785360() {
   return (neuron0x376f3a0()*-0.0216876);
}

double NNfunction_t1t1::synapse0x37853a0() {
   return (neuron0x376f6e0()*0.0112885);
}

double NNfunction_t1t1::synapse0x37853e0() {
   return (neuron0x376fa20()*0.213642);
}

double NNfunction_t1t1::synapse0x3785760() {
   return (neuron0x376ae60()*-0.0550295);
}

double NNfunction_t1t1::synapse0x3779d30() {
   return (neuron0x376b1a0()*-0.00468991);
}

double NNfunction_t1t1::synapse0x3779d70() {
   return (neuron0x376b4e0()*1.08139);
}

double NNfunction_t1t1::synapse0x3779db0() {
   return (neuron0x376b820()*-0.0843998);
}

double NNfunction_t1t1::synapse0x377a000() {
   return (neuron0x376bb60()*0.0439924);
}

double NNfunction_t1t1::synapse0x377a040() {
   return (neuron0x376bea0()*0.0713511);
}

double NNfunction_t1t1::synapse0x377a080() {
   return (neuron0x376c1e0()*0.0356587);
}

double NNfunction_t1t1::synapse0x377a2d0() {
   return (neuron0x376c520()*-0.0220673);
}

double NNfunction_t1t1::synapse0x377a310() {
   return (neuron0x376c860()*0.0147759);
}

double NNfunction_t1t1::synapse0x377a560() {
   return (neuron0x376cba0()*-0.0337613);
}

double NNfunction_t1t1::synapse0x377a5a0() {
   return (neuron0x376cee0()*-0.0710405);
}

double NNfunction_t1t1::synapse0x377a5e0() {
   return (neuron0x376d220()*-0.0202348);
}

double NNfunction_t1t1::synapse0x377a830() {
   return (neuron0x376d560()*-0.0968263);
}

double NNfunction_t1t1::synapse0x377a870() {
   return (neuron0x376d8a0()*-2.06112);
}

double NNfunction_t1t1::synapse0x377aac0() {
   return (neuron0x376dbe0()*0.098135);
}

double NNfunction_t1t1::synapse0x377ab00() {
   return (neuron0x376df20()*0.0727668);
}

double NNfunction_t1t1::synapse0x37855b0() {
   return (neuron0x376e260()*1.25372);
}

double NNfunction_t1t1::synapse0x37855f0() {
   return (neuron0x376e7c0()*-0.0016478);
}

double NNfunction_t1t1::synapse0x377ac50() {
   return (neuron0x376e9e0()*-0.0473468);
}

double NNfunction_t1t1::synapse0x377b160() {
   return (neuron0x376ed20()*-0.0963562);
}

double NNfunction_t1t1::synapse0x377b1a0() {
   return (neuron0x376f060()*0.164289);
}

double NNfunction_t1t1::synapse0x377b1e0() {
   return (neuron0x376f3a0()*-0.00396012);
}

double NNfunction_t1t1::synapse0x377b430() {
   return (neuron0x376f6e0()*0.0346844);
}

double NNfunction_t1t1::synapse0x377b470() {
   return (neuron0x376fa20()*-0.289781);
}

double NNfunction_t1t1::synapse0x377ad20() {
   return (neuron0x376ae60()*-0.239373);
}

double NNfunction_t1t1::synapse0x377ad60() {
   return (neuron0x376b1a0()*-0.0168989);
}

double NNfunction_t1t1::synapse0x377ada0() {
   return (neuron0x376b4e0()*-0.069851);
}

double NNfunction_t1t1::synapse0x377ade0() {
   return (neuron0x376b820()*-0.123358);
}

double NNfunction_t1t1::synapse0x377b760() {
   return (neuron0x376bb60()*-0.052592);
}

double NNfunction_t1t1::synapse0x3787ab0() {
   return (neuron0x376bea0()*0.0841158);
}

double NNfunction_t1t1::synapse0x3787af0() {
   return (neuron0x376c1e0()*-0.00611247);
}

double NNfunction_t1t1::synapse0x3787b30() {
   return (neuron0x376c520()*-0.0495101);
}

double NNfunction_t1t1::synapse0x3787b70() {
   return (neuron0x376c860()*0.01546);
}

double NNfunction_t1t1::synapse0x3787bb0() {
   return (neuron0x376cba0()*0.000464131);
}

double NNfunction_t1t1::synapse0x3787bf0() {
   return (neuron0x376cee0()*0.0024029);
}

double NNfunction_t1t1::synapse0x3787c30() {
   return (neuron0x376d220()*0.029875);
}

double NNfunction_t1t1::synapse0x3787c70() {
   return (neuron0x376d560()*0.00166102);
}

double NNfunction_t1t1::synapse0x3787cb0() {
   return (neuron0x376d8a0()*0.64312);
}

double NNfunction_t1t1::synapse0x3787cf0() {
   return (neuron0x376dbe0()*-0.0184031);
}

double NNfunction_t1t1::synapse0x3787d30() {
   return (neuron0x376df20()*0.0169765);
}

double NNfunction_t1t1::synapse0x377b640() {
   return (neuron0x376e260()*-0.805706);
}

double NNfunction_t1t1::synapse0x377b680() {
   return (neuron0x376e7c0()*0.0130545);
}

double NNfunction_t1t1::synapse0x3787e80() {
   return (neuron0x376e9e0()*0.186837);
}

double NNfunction_t1t1::synapse0x3787ec0() {
   return (neuron0x376ed20()*1.29231);
}

double NNfunction_t1t1::synapse0x3787f00() {
   return (neuron0x376f060()*-0.215508);
}

double NNfunction_t1t1::synapse0x3787f40() {
   return (neuron0x376f3a0()*-0.116363);
}

double NNfunction_t1t1::synapse0x3787f80() {
   return (neuron0x376f6e0()*0.0872099);
}

double NNfunction_t1t1::synapse0x3787fc0() {
   return (neuron0x376fa20()*-0.290723);
}

double NNfunction_t1t1::synapse0x3788340() {
   return (neuron0x376ae60()*-0.0355367);
}

double NNfunction_t1t1::synapse0x3788380() {
   return (neuron0x376b1a0()*-0.00306058);
}

double NNfunction_t1t1::synapse0x37883c0() {
   return (neuron0x376b4e0()*0.0122627);
}

double NNfunction_t1t1::synapse0x3788400() {
   return (neuron0x376b820()*-2.67764);
}

double NNfunction_t1t1::synapse0x3788440() {
   return (neuron0x376bb60()*-0.0103505);
}

double NNfunction_t1t1::synapse0x3788480() {
   return (neuron0x376bea0()*-0.019767);
}

double NNfunction_t1t1::synapse0x37884c0() {
   return (neuron0x376c1e0()*0.00867397);
}

double NNfunction_t1t1::synapse0x3788500() {
   return (neuron0x376c520()*0.0147558);
}

double NNfunction_t1t1::synapse0x3788540() {
   return (neuron0x376c860()*-0.000177978);
}

double NNfunction_t1t1::synapse0x3788580() {
   return (neuron0x376cba0()*-0.00681551);
}

double NNfunction_t1t1::synapse0x37885c0() {
   return (neuron0x376cee0()*-0.0119337);
}

double NNfunction_t1t1::synapse0x3788600() {
   return (neuron0x376d220()*0.00493608);
}

double NNfunction_t1t1::synapse0x3788640() {
   return (neuron0x376d560()*0.0299395);
}

double NNfunction_t1t1::synapse0x3788680() {
   return (neuron0x376d8a0()*0.0214715);
}

double NNfunction_t1t1::synapse0x37886c0() {
   return (neuron0x376dbe0()*-0.0104339);
}

double NNfunction_t1t1::synapse0x3788700() {
   return (neuron0x376df20()*-0.00151385);
}

double NNfunction_t1t1::synapse0x3788190() {
   return (neuron0x376e260()*0.013161);
}

double NNfunction_t1t1::synapse0x37881d0() {
   return (neuron0x376e7c0()*-0.000582707);
}

double NNfunction_t1t1::synapse0x3788850() {
   return (neuron0x376e9e0()*-0.0110131);
}

double NNfunction_t1t1::synapse0x3788890() {
   return (neuron0x376ed20()*0.00861306);
}

double NNfunction_t1t1::synapse0x37888d0() {
   return (neuron0x376f060()*0.0622283);
}

double NNfunction_t1t1::synapse0x3788910() {
   return (neuron0x376f3a0()*0.01263);
}

double NNfunction_t1t1::synapse0x3788950() {
   return (neuron0x376f6e0()*0.0107265);
}

double NNfunction_t1t1::synapse0x3788990() {
   return (neuron0x376fa20()*0.175912);
}

double NNfunction_t1t1::synapse0x3788d10() {
   return (neuron0x376ae60()*-0.247125);
}

double NNfunction_t1t1::synapse0x3788d50() {
   return (neuron0x376b1a0()*-0.0135906);
}

double NNfunction_t1t1::synapse0x3788d90() {
   return (neuron0x376b4e0()*-0.153543);
}

double NNfunction_t1t1::synapse0x3788dd0() {
   return (neuron0x376b820()*-0.0645656);
}

double NNfunction_t1t1::synapse0x3788e10() {
   return (neuron0x376bb60()*0.637112);
}

double NNfunction_t1t1::synapse0x3788e50() {
   return (neuron0x376bea0()*0.0410375);
}

double NNfunction_t1t1::synapse0x3788e90() {
   return (neuron0x376c1e0()*0.28404);
}

double NNfunction_t1t1::synapse0x3788ed0() {
   return (neuron0x376c520()*0.00429519);
}

double NNfunction_t1t1::synapse0x3788f10() {
   return (neuron0x376c860()*0.0150502);
}

double NNfunction_t1t1::synapse0x3788f50() {
   return (neuron0x376cba0()*0.0687508);
}

double NNfunction_t1t1::synapse0x3788f90() {
   return (neuron0x376cee0()*-0.0286393);
}

double NNfunction_t1t1::synapse0x3788fd0() {
   return (neuron0x376d220()*0.0422097);
}

double NNfunction_t1t1::synapse0x3789010() {
   return (neuron0x376d560()*-0.0862055);
}

double NNfunction_t1t1::synapse0x3789050() {
   return (neuron0x376d8a0()*-0.594857);
}

double NNfunction_t1t1::synapse0x3789090() {
   return (neuron0x376dbe0()*0.0988099);
}

double NNfunction_t1t1::synapse0x37890d0() {
   return (neuron0x376df20()*-0.00796727);
}

double NNfunction_t1t1::synapse0x3788b60() {
   return (neuron0x376e260()*-1.19243);
}

double NNfunction_t1t1::synapse0x3788ba0() {
   return (neuron0x376e7c0()*0.0201994);
}

double NNfunction_t1t1::synapse0x3789220() {
   return (neuron0x376e9e0()*-0.020946);
}

double NNfunction_t1t1::synapse0x3789260() {
   return (neuron0x376ed20()*-0.0762572);
}

double NNfunction_t1t1::synapse0x37892a0() {
   return (neuron0x376f060()*-0.0760524);
}

double NNfunction_t1t1::synapse0x37892e0() {
   return (neuron0x376f3a0()*-0.0721792);
}

double NNfunction_t1t1::synapse0x3789320() {
   return (neuron0x376f6e0()*-0.0158339);
}

double NNfunction_t1t1::synapse0x3789360() {
   return (neuron0x376fa20()*0.0144294);
}

double NNfunction_t1t1::synapse0x37896e0() {
   return (neuron0x376ae60()*-0.633499);
}

double NNfunction_t1t1::synapse0x3789720() {
   return (neuron0x376b1a0()*-0.110607);
}

double NNfunction_t1t1::synapse0x3789760() {
   return (neuron0x376b4e0()*-0.0338709);
}

double NNfunction_t1t1::synapse0x37897a0() {
   return (neuron0x376b820()*0.186087);
}

double NNfunction_t1t1::synapse0x37897e0() {
   return (neuron0x376bb60()*0.0887451);
}

double NNfunction_t1t1::synapse0x3789820() {
   return (neuron0x376bea0()*0.043367);
}

double NNfunction_t1t1::synapse0x3789860() {
   return (neuron0x376c1e0()*-0.159406);
}

double NNfunction_t1t1::synapse0x37898a0() {
   return (neuron0x376c520()*-0.0634634);
}

double NNfunction_t1t1::synapse0x37898e0() {
   return (neuron0x376c860()*-0.0625115);
}

double NNfunction_t1t1::synapse0x3789920() {
   return (neuron0x376cba0()*0.220782);
}

double NNfunction_t1t1::synapse0x3789960() {
   return (neuron0x376cee0()*-0.146119);
}

double NNfunction_t1t1::synapse0x37899a0() {
   return (neuron0x376d220()*-0.212542);
}

double NNfunction_t1t1::synapse0x37899e0() {
   return (neuron0x376d560()*-0.0974292);
}

double NNfunction_t1t1::synapse0x3789a20() {
   return (neuron0x376d8a0()*0.304812);
}

double NNfunction_t1t1::synapse0x3789a60() {
   return (neuron0x376dbe0()*-0.163845);
}

double NNfunction_t1t1::synapse0x3789aa0() {
   return (neuron0x376df20()*0.0168065);
}

double NNfunction_t1t1::synapse0x3789530() {
   return (neuron0x376e260()*0.309179);
}

double NNfunction_t1t1::synapse0x3789570() {
   return (neuron0x376e7c0()*0.0507467);
}

double NNfunction_t1t1::synapse0x3789bf0() {
   return (neuron0x376e9e0()*-0.0317301);
}

double NNfunction_t1t1::synapse0x3789c30() {
   return (neuron0x376ed20()*0.129034);
}

double NNfunction_t1t1::synapse0x3789c70() {
   return (neuron0x376f060()*-1.27893);
}

double NNfunction_t1t1::synapse0x3789cb0() {
   return (neuron0x376f3a0()*-0.0206591);
}

double NNfunction_t1t1::synapse0x3789cf0() {
   return (neuron0x376f6e0()*0.0760084);
}

double NNfunction_t1t1::synapse0x3789d30() {
   return (neuron0x376fa20()*-0.133928);
}

double NNfunction_t1t1::synapse0x378a0b0() {
   return (neuron0x376ae60()*0.0358438);
}

double NNfunction_t1t1::synapse0x378a0f0() {
   return (neuron0x376b1a0()*0.012519);
}

double NNfunction_t1t1::synapse0x378a130() {
   return (neuron0x376b4e0()*-0.101602);
}

double NNfunction_t1t1::synapse0x378a170() {
   return (neuron0x376b820()*-0.00627541);
}

double NNfunction_t1t1::synapse0x378a1b0() {
   return (neuron0x376bb60()*-0.109265);
}

double NNfunction_t1t1::synapse0x378a1f0() {
   return (neuron0x376bea0()*-0.0319238);
}

double NNfunction_t1t1::synapse0x378a230() {
   return (neuron0x376c1e0()*0.0481499);
}

double NNfunction_t1t1::synapse0x378a270() {
   return (neuron0x376c520()*-0.00764209);
}

double NNfunction_t1t1::synapse0x378a2b0() {
   return (neuron0x376c860()*-0.0114827);
}

double NNfunction_t1t1::synapse0x378a2f0() {
   return (neuron0x376cba0()*-9.76542e-05);
}

double NNfunction_t1t1::synapse0x378a330() {
   return (neuron0x376cee0()*-0.00574073);
}

double NNfunction_t1t1::synapse0x378a370() {
   return (neuron0x376d220()*-0.0260839);
}

double NNfunction_t1t1::synapse0x378a3b0() {
   return (neuron0x376d560()*-0.0154703);
}

double NNfunction_t1t1::synapse0x378a3f0() {
   return (neuron0x376d8a0()*-0.854973);
}

double NNfunction_t1t1::synapse0x378a430() {
   return (neuron0x376dbe0()*-0.00585445);
}

double NNfunction_t1t1::synapse0x378a470() {
   return (neuron0x376df20()*-0.0493964);
}

double NNfunction_t1t1::synapse0x3789f00() {
   return (neuron0x376e260()*3.51457);
}

double NNfunction_t1t1::synapse0x3789f40() {
   return (neuron0x376e7c0()*0.011712);
}

double NNfunction_t1t1::synapse0x378a5c0() {
   return (neuron0x376e9e0()*0.0240939);
}

double NNfunction_t1t1::synapse0x378a600() {
   return (neuron0x376ed20()*-0.0230483);
}

double NNfunction_t1t1::synapse0x378a640() {
   return (neuron0x376f060()*0.157354);
}

double NNfunction_t1t1::synapse0x378a680() {
   return (neuron0x376f3a0()*-0.0105844);
}

double NNfunction_t1t1::synapse0x378a6c0() {
   return (neuron0x376f6e0()*0.015002);
}

double NNfunction_t1t1::synapse0x378a700() {
   return (neuron0x376fa20()*0.0187581);
}

double NNfunction_t1t1::synapse0x378aa80() {
   return (neuron0x376ae60()*-0.166794);
}

double NNfunction_t1t1::synapse0x378aac0() {
   return (neuron0x376b1a0()*-0.0599257);
}

double NNfunction_t1t1::synapse0x378ab00() {
   return (neuron0x376b4e0()*-0.104636);
}

double NNfunction_t1t1::synapse0x378ab40() {
   return (neuron0x376b820()*-0.143861);
}

double NNfunction_t1t1::synapse0x378ab80() {
   return (neuron0x376bb60()*-0.157857);
}

double NNfunction_t1t1::synapse0x378abc0() {
   return (neuron0x376bea0()*0.0388411);
}

double NNfunction_t1t1::synapse0x378ac00() {
   return (neuron0x376c1e0()*-0.104774);
}

double NNfunction_t1t1::synapse0x378ac40() {
   return (neuron0x376c520()*0.096237);
}

double NNfunction_t1t1::synapse0x378ac80() {
   return (neuron0x376c860()*-0.109198);
}

double NNfunction_t1t1::synapse0x378acc0() {
   return (neuron0x376cba0()*-0.137406);
}

double NNfunction_t1t1::synapse0x378ad00() {
   return (neuron0x376cee0()*0.125746);
}

double NNfunction_t1t1::synapse0x378ad40() {
   return (neuron0x376d220()*-0.184248);
}

double NNfunction_t1t1::synapse0x378ad80() {
   return (neuron0x376d560()*0.458808);
}

double NNfunction_t1t1::synapse0x378adc0() {
   return (neuron0x376d8a0()*-0.0741294);
}

double NNfunction_t1t1::synapse0x378ae00() {
   return (neuron0x376dbe0()*-0.0498355);
}

double NNfunction_t1t1::synapse0x378ae40() {
   return (neuron0x376df20()*0.0285087);
}

double NNfunction_t1t1::synapse0x378a8d0() {
   return (neuron0x376e260()*-0.113278);
}

double NNfunction_t1t1::synapse0x378a910() {
   return (neuron0x376e7c0()*0.12557);
}

double NNfunction_t1t1::synapse0x378af90() {
   return (neuron0x376e9e0()*0.0324307);
}

double NNfunction_t1t1::synapse0x378afd0() {
   return (neuron0x376ed20()*0.00640002);
}

double NNfunction_t1t1::synapse0x378b010() {
   return (neuron0x376f060()*0.411624);
}

double NNfunction_t1t1::synapse0x378b050() {
   return (neuron0x376f3a0()*-0.0515107);
}

double NNfunction_t1t1::synapse0x378b090() {
   return (neuron0x376f6e0()*-0.0395526);
}

double NNfunction_t1t1::synapse0x378b0d0() {
   return (neuron0x376fa20()*-0.694022);
}

double NNfunction_t1t1::synapse0x378b450() {
   return (neuron0x376ae60()*0.382673);
}

double NNfunction_t1t1::synapse0x378b490() {
   return (neuron0x376b1a0()*0.0421214);
}

double NNfunction_t1t1::synapse0x378b4d0() {
   return (neuron0x376b4e0()*0.252518);
}

double NNfunction_t1t1::synapse0x378b510() {
   return (neuron0x376b820()*-0.0653672);
}

double NNfunction_t1t1::synapse0x378b550() {
   return (neuron0x376bb60()*-0.513743);
}

double NNfunction_t1t1::synapse0x378b590() {
   return (neuron0x376bea0()*-0.134193);
}

double NNfunction_t1t1::synapse0x378b5d0() {
   return (neuron0x376c1e0()*0.355644);
}

double NNfunction_t1t1::synapse0x378b610() {
   return (neuron0x376c520()*0.0252628);
}

double NNfunction_t1t1::synapse0x378b650() {
   return (neuron0x376c860()*0.181869);
}

double NNfunction_t1t1::synapse0x378b690() {
   return (neuron0x376cba0()*-0.0344794);
}

double NNfunction_t1t1::synapse0x378b6d0() {
   return (neuron0x376cee0()*0.0827739);
}

double NNfunction_t1t1::synapse0x378b710() {
   return (neuron0x376d220()*0.0435829);
}

double NNfunction_t1t1::synapse0x378b750() {
   return (neuron0x376d560()*-0.0406552);
}

double NNfunction_t1t1::synapse0x378b790() {
   return (neuron0x376d8a0()*0.088584);
}

double NNfunction_t1t1::synapse0x378b7d0() {
   return (neuron0x376dbe0()*-0.0145239);
}

double NNfunction_t1t1::synapse0x378b810() {
   return (neuron0x376df20()*-0.144082);
}

double NNfunction_t1t1::synapse0x378b2a0() {
   return (neuron0x376e260()*-1.44917);
}

double NNfunction_t1t1::synapse0x378b2e0() {
   return (neuron0x376e7c0()*0.0155317);
}

double NNfunction_t1t1::synapse0x378b960() {
   return (neuron0x376e9e0()*0.0308192);
}

double NNfunction_t1t1::synapse0x378b9a0() {
   return (neuron0x376ed20()*-0.0377285);
}

double NNfunction_t1t1::synapse0x378b9e0() {
   return (neuron0x376f060()*0.214079);
}

double NNfunction_t1t1::synapse0x378ba20() {
   return (neuron0x376f3a0()*0.0730535);
}

double NNfunction_t1t1::synapse0x378ba60() {
   return (neuron0x376f6e0()*0.0161273);
}

double NNfunction_t1t1::synapse0x378baa0() {
   return (neuron0x376fa20()*0.109567);
}

double NNfunction_t1t1::synapse0x378be20() {
   return (neuron0x376ae60()*0.45459);
}

double NNfunction_t1t1::synapse0x378be60() {
   return (neuron0x376b1a0()*-0.0323465);
}

double NNfunction_t1t1::synapse0x378bea0() {
   return (neuron0x376b4e0()*0.210043);
}

double NNfunction_t1t1::synapse0x378bee0() {
   return (neuron0x376b820()*-0.058139);
}

double NNfunction_t1t1::synapse0x378bf20() {
   return (neuron0x376bb60()*0.0538121);
}

double NNfunction_t1t1::synapse0x378bf60() {
   return (neuron0x376bea0()*0.0271739);
}

double NNfunction_t1t1::synapse0x378bfa0() {
   return (neuron0x376c1e0()*0.137338);
}

double NNfunction_t1t1::synapse0x378bfe0() {
   return (neuron0x376c520()*0.0335007);
}

double NNfunction_t1t1::synapse0x378c020() {
   return (neuron0x376c860()*-0.025664);
}

double NNfunction_t1t1::synapse0x378c060() {
   return (neuron0x376cba0()*-0.0526825);
}

double NNfunction_t1t1::synapse0x378c0a0() {
   return (neuron0x376cee0()*0.080699);
}

double NNfunction_t1t1::synapse0x378c0e0() {
   return (neuron0x376d220()*0.0666506);
}

double NNfunction_t1t1::synapse0x378c120() {
   return (neuron0x376d560()*-0.0563394);
}

double NNfunction_t1t1::synapse0x378c160() {
   return (neuron0x376d8a0()*-1.81787);
}

double NNfunction_t1t1::synapse0x378c1a0() {
   return (neuron0x376dbe0()*0.00545428);
}

double NNfunction_t1t1::synapse0x378c1e0() {
   return (neuron0x376df20()*0.103487);
}

double NNfunction_t1t1::synapse0x378bc70() {
   return (neuron0x376e260()*2.04937);
}

double NNfunction_t1t1::synapse0x378bcb0() {
   return (neuron0x376e7c0()*-0.0214166);
}

double NNfunction_t1t1::synapse0x378c330() {
   return (neuron0x376e9e0()*-0.101106);
}

double NNfunction_t1t1::synapse0x378c370() {
   return (neuron0x376ed20()*-0.137053);
}

double NNfunction_t1t1::synapse0x378c3b0() {
   return (neuron0x376f060()*-0.868512);
}

double NNfunction_t1t1::synapse0x378c3f0() {
   return (neuron0x376f3a0()*0.0980787);
}

double NNfunction_t1t1::synapse0x378c430() {
   return (neuron0x376f6e0()*-0.0598888);
}

double NNfunction_t1t1::synapse0x378c470() {
   return (neuron0x376fa20()*0.319203);
}

double NNfunction_t1t1::synapse0x3774f20() {
   return (neuron0x376ae60()*-0.166482);
}

double NNfunction_t1t1::synapse0x3774f60() {
   return (neuron0x376b1a0()*0.254348);
}

double NNfunction_t1t1::synapse0x3774fa0() {
   return (neuron0x376b4e0()*0.045532);
}

double NNfunction_t1t1::synapse0x3774fe0() {
   return (neuron0x376b820()*0.163104);
}

double NNfunction_t1t1::synapse0x3775020() {
   return (neuron0x376bb60()*-0.0257102);
}

double NNfunction_t1t1::synapse0x3775060() {
   return (neuron0x376bea0()*-0.252633);
}

double NNfunction_t1t1::synapse0x37750a0() {
   return (neuron0x376c1e0()*0.00483857);
}

double NNfunction_t1t1::synapse0x37750e0() {
   return (neuron0x376c520()*0.0412552);
}

double NNfunction_t1t1::synapse0x378cc00() {
   return (neuron0x376c860()*-0.177069);
}

double NNfunction_t1t1::synapse0x378cc40() {
   return (neuron0x376cba0()*0.071595);
}

double NNfunction_t1t1::synapse0x378cc80() {
   return (neuron0x376cee0()*0.109465);
}

double NNfunction_t1t1::synapse0x378ccc0() {
   return (neuron0x376d220()*-0.131997);
}

double NNfunction_t1t1::synapse0x378cd00() {
   return (neuron0x376d560()*-0.0462705);
}

double NNfunction_t1t1::synapse0x378cd40() {
   return (neuron0x376d8a0()*-0.251212);
}

double NNfunction_t1t1::synapse0x378cd80() {
   return (neuron0x376dbe0()*-0.052196);
}

double NNfunction_t1t1::synapse0x378cdc0() {
   return (neuron0x376df20()*-0.0515432);
}

double NNfunction_t1t1::synapse0x378c640() {
   return (neuron0x376e260()*0.840644);
}

double NNfunction_t1t1::synapse0x378c680() {
   return (neuron0x376e7c0()*-0.0478209);
}

double NNfunction_t1t1::synapse0x378cf10() {
   return (neuron0x376e9e0()*-1.1429);
}

double NNfunction_t1t1::synapse0x378cf50() {
   return (neuron0x376ed20()*0.12389);
}

double NNfunction_t1t1::synapse0x378cf90() {
   return (neuron0x376f060()*0.00322885);
}

double NNfunction_t1t1::synapse0x378cfd0() {
   return (neuron0x376f3a0()*-0.0605508);
}

double NNfunction_t1t1::synapse0x378d010() {
   return (neuron0x376f6e0()*-0.0284773);
}

double NNfunction_t1t1::synapse0x378d050() {
   return (neuron0x376fa20()*-0.243005);
}

double NNfunction_t1t1::synapse0x378d3d0() {
   return (neuron0x376ae60()*0.102526);
}

double NNfunction_t1t1::synapse0x378d410() {
   return (neuron0x376b1a0()*-0.0204362);
}

double NNfunction_t1t1::synapse0x378d450() {
   return (neuron0x376b4e0()*-0.892395);
}

double NNfunction_t1t1::synapse0x378d490() {
   return (neuron0x376b820()*0.101128);
}

double NNfunction_t1t1::synapse0x378d4d0() {
   return (neuron0x376bb60()*-0.201426);
}

double NNfunction_t1t1::synapse0x378d510() {
   return (neuron0x376bea0()*0.0687493);
}

double NNfunction_t1t1::synapse0x378d550() {
   return (neuron0x376c1e0()*0.076823);
}

double NNfunction_t1t1::synapse0x378d590() {
   return (neuron0x376c520()*-0.0157931);
}

double NNfunction_t1t1::synapse0x378d5d0() {
   return (neuron0x376c860()*-0.046774);
}

double NNfunction_t1t1::synapse0x378d610() {
   return (neuron0x376cba0()*-0.0170416);
}

double NNfunction_t1t1::synapse0x378d650() {
   return (neuron0x376cee0()*0.0160373);
}

double NNfunction_t1t1::synapse0x378d690() {
   return (neuron0x376d220()*0.00117198);
}

double NNfunction_t1t1::synapse0x378d6d0() {
   return (neuron0x376d560()*-0.0602659);
}

double NNfunction_t1t1::synapse0x378d710() {
   return (neuron0x376d8a0()*0.395726);
}

double NNfunction_t1t1::synapse0x378d750() {
   return (neuron0x376dbe0()*0.140607);
}

double NNfunction_t1t1::synapse0x378d790() {
   return (neuron0x376df20()*0.0748789);
}

double NNfunction_t1t1::synapse0x378d220() {
   return (neuron0x376e260()*-0.00514882);
}

double NNfunction_t1t1::synapse0x378d260() {
   return (neuron0x376e7c0()*-0.00199823);
}

double NNfunction_t1t1::synapse0x378d8e0() {
   return (neuron0x376e9e0()*-0.00477381);
}

double NNfunction_t1t1::synapse0x378d920() {
   return (neuron0x376ed20()*-0.0102337);
}

double NNfunction_t1t1::synapse0x378d960() {
   return (neuron0x376f060()*0.0289434);
}

double NNfunction_t1t1::synapse0x378d9a0() {
   return (neuron0x376f3a0()*-0.000249604);
}

double NNfunction_t1t1::synapse0x378d9e0() {
   return (neuron0x376f6e0()*-0.00399698);
}

double NNfunction_t1t1::synapse0x378da20() {
   return (neuron0x376fa20()*0.055843);
}

double NNfunction_t1t1::synapse0x378dda0() {
   return (neuron0x376ae60()*-1.30422);
}

double NNfunction_t1t1::synapse0x378dde0() {
   return (neuron0x376b1a0()*0.0717582);
}

double NNfunction_t1t1::synapse0x378de20() {
   return (neuron0x376b4e0()*0.25337);
}

double NNfunction_t1t1::synapse0x378de60() {
   return (neuron0x376b820()*0.00470696);
}

double NNfunction_t1t1::synapse0x378dea0() {
   return (neuron0x376bb60()*-0.0723413);
}

double NNfunction_t1t1::synapse0x378dee0() {
   return (neuron0x376bea0()*-0.000522197);
}

double NNfunction_t1t1::synapse0x378df20() {
   return (neuron0x376c1e0()*0.00357283);
}

double NNfunction_t1t1::synapse0x378df60() {
   return (neuron0x376c520()*-0.03431);
}

double NNfunction_t1t1::synapse0x378dfa0() {
   return (neuron0x376c860()*-0.0119109);
}

double NNfunction_t1t1::synapse0x378dfe0() {
   return (neuron0x376cba0()*-0.12557);
}

double NNfunction_t1t1::synapse0x378e020() {
   return (neuron0x376cee0()*-0.0218169);
}

double NNfunction_t1t1::synapse0x378e060() {
   return (neuron0x376d220()*0.0852192);
}

double NNfunction_t1t1::synapse0x378e0a0() {
   return (neuron0x376d560()*0.0298934);
}

double NNfunction_t1t1::synapse0x378e0e0() {
   return (neuron0x376d8a0()*-0.578235);
}

double NNfunction_t1t1::synapse0x378e120() {
   return (neuron0x376dbe0()*-0.0374259);
}

double NNfunction_t1t1::synapse0x378e160() {
   return (neuron0x376df20()*0.0197382);
}

double NNfunction_t1t1::synapse0x378dbf0() {
   return (neuron0x376e260()*0.363241);
}

double NNfunction_t1t1::synapse0x378dc30() {
   return (neuron0x376e7c0()*0.0024431);
}

double NNfunction_t1t1::synapse0x377e760() {
   return (neuron0x376e9e0()*-0.0403352);
}

double NNfunction_t1t1::synapse0x377e7a0() {
   return (neuron0x376ed20()*-0.0860762);
}

double NNfunction_t1t1::synapse0x377e7e0() {
   return (neuron0x376f060()*1.71571);
}

double NNfunction_t1t1::synapse0x377e820() {
   return (neuron0x376f3a0()*0.0623032);
}

double NNfunction_t1t1::synapse0x377e860() {
   return (neuron0x376f6e0()*0.0733491);
}

double NNfunction_t1t1::synapse0x377e8a0() {
   return (neuron0x376fa20()*0.261671);
}

double NNfunction_t1t1::synapse0x377ec20() {
   return (neuron0x376ae60()*0.085634);
}

double NNfunction_t1t1::synapse0x377ec60() {
   return (neuron0x376b1a0()*0.0179499);
}

double NNfunction_t1t1::synapse0x377eca0() {
   return (neuron0x376b4e0()*-0.0835194);
}

double NNfunction_t1t1::synapse0x377ece0() {
   return (neuron0x376b820()*0.118744);
}

double NNfunction_t1t1::synapse0x377ed20() {
   return (neuron0x376bb60()*-0.052322);
}

double NNfunction_t1t1::synapse0x377ed60() {
   return (neuron0x376bea0()*0.0202788);
}

double NNfunction_t1t1::synapse0x377eda0() {
   return (neuron0x376c1e0()*-0.0017784);
}

double NNfunction_t1t1::synapse0x377ede0() {
   return (neuron0x376c520()*0.00980156);
}

double NNfunction_t1t1::synapse0x377ee20() {
   return (neuron0x376c860()*0.0185603);
}

double NNfunction_t1t1::synapse0x377ee60() {
   return (neuron0x376cba0()*-0.0797807);
}

double NNfunction_t1t1::synapse0x377eea0() {
   return (neuron0x376cee0()*0.00651352);
}

double NNfunction_t1t1::synapse0x377eee0() {
   return (neuron0x376d220()*0.0699106);
}

double NNfunction_t1t1::synapse0x377ef20() {
   return (neuron0x376d560()*0.0460148);
}

double NNfunction_t1t1::synapse0x377ef60() {
   return (neuron0x376d8a0()*-1.99205);
}

double NNfunction_t1t1::synapse0x377efa0() {
   return (neuron0x376dbe0()*0.0426287);
}

double NNfunction_t1t1::synapse0x377efe0() {
   return (neuron0x376df20()*-0.00732407);
}

double NNfunction_t1t1::synapse0x377ea70() {
   return (neuron0x376e260()*-1.10758);
}

double NNfunction_t1t1::synapse0x377eab0() {
   return (neuron0x376e7c0()*0.0626345);
}

double NNfunction_t1t1::synapse0x377f130() {
   return (neuron0x376e9e0()*-0.0300726);
}

double NNfunction_t1t1::synapse0x377f170() {
   return (neuron0x376ed20()*-0.0338379);
}

double NNfunction_t1t1::synapse0x377f1b0() {
   return (neuron0x376f060()*-5.29208);
}

double NNfunction_t1t1::synapse0x377f1f0() {
   return (neuron0x376f3a0()*0.0115845);
}

double NNfunction_t1t1::synapse0x377f230() {
   return (neuron0x376f6e0()*-0.0401788);
}

double NNfunction_t1t1::synapse0x377f270() {
   return (neuron0x376fa20()*0.970213);
}

double NNfunction_t1t1::synapse0x377f5f0() {
   return (neuron0x376ae60()*-0.0195947);
}

double NNfunction_t1t1::synapse0x377f630() {
   return (neuron0x376b1a0()*-0.0236023);
}

double NNfunction_t1t1::synapse0x377f670() {
   return (neuron0x376b4e0()*0.0273314);
}

double NNfunction_t1t1::synapse0x377f6b0() {
   return (neuron0x376b820()*-0.132914);
}

double NNfunction_t1t1::synapse0x377f6f0() {
   return (neuron0x376bb60()*0.0349924);
}

double NNfunction_t1t1::synapse0x377f730() {
   return (neuron0x376bea0()*-0.0402255);
}

double NNfunction_t1t1::synapse0x377f770() {
   return (neuron0x376c1e0()*-0.0727058);
}

double NNfunction_t1t1::synapse0x377f7b0() {
   return (neuron0x376c520()*-0.616999);
}

double NNfunction_t1t1::synapse0x377f7f0() {
   return (neuron0x376c860()*-0.0838659);
}

double NNfunction_t1t1::synapse0x377f830() {
   return (neuron0x376cba0()*0.046252);
}

double NNfunction_t1t1::synapse0x377f870() {
   return (neuron0x376cee0()*-0.0682497);
}

double NNfunction_t1t1::synapse0x377f8b0() {
   return (neuron0x376d220()*-2.9876e-05);
}

double NNfunction_t1t1::synapse0x377f8f0() {
   return (neuron0x376d560()*-0.0159564);
}

double NNfunction_t1t1::synapse0x377f930() {
   return (neuron0x376d8a0()*-0.597081);
}

double NNfunction_t1t1::synapse0x377f970() {
   return (neuron0x376dbe0()*-0.0713249);
}

double NNfunction_t1t1::synapse0x377f9b0() {
   return (neuron0x376df20()*0.015758);
}

double NNfunction_t1t1::synapse0x377f440() {
   return (neuron0x376e260()*-1.37299);
}

double NNfunction_t1t1::synapse0x377f480() {
   return (neuron0x376e7c0()*0.108244);
}

double NNfunction_t1t1::synapse0x377fb00() {
   return (neuron0x376e9e0()*0.0635147);
}

double NNfunction_t1t1::synapse0x377fb40() {
   return (neuron0x376ed20()*-0.0200545);
}

double NNfunction_t1t1::synapse0x377fb80() {
   return (neuron0x376f060()*-0.0726342);
}

double NNfunction_t1t1::synapse0x377fbc0() {
   return (neuron0x376f3a0()*-0.037508);
}

double NNfunction_t1t1::synapse0x377fc00() {
   return (neuron0x376f6e0()*0.089043);
}

double NNfunction_t1t1::synapse0x377fc40() {
   return (neuron0x376fa20()*-0.0506964);
}

double NNfunction_t1t1::synapse0x377ffc0() {
   return (neuron0x376ae60()*-0.137226);
}

double NNfunction_t1t1::synapse0x3780000() {
   return (neuron0x376b1a0()*0.199898);
}

double NNfunction_t1t1::synapse0x3780040() {
   return (neuron0x376b4e0()*-0.0616957);
}

double NNfunction_t1t1::synapse0x3780080() {
   return (neuron0x376b820()*0.149889);
}

double NNfunction_t1t1::synapse0x37800c0() {
   return (neuron0x376bb60()*-0.163632);
}

double NNfunction_t1t1::synapse0x3780100() {
   return (neuron0x376bea0()*-0.0909981);
}

double NNfunction_t1t1::synapse0x3780140() {
   return (neuron0x376c1e0()*-0.0455511);
}

double NNfunction_t1t1::synapse0x3780180() {
   return (neuron0x376c520()*0.0768122);
}

double NNfunction_t1t1::synapse0x37801c0() {
   return (neuron0x376c860()*-0.024908);
}

double NNfunction_t1t1::synapse0x3780200() {
   return (neuron0x376cba0()*-0.11933);
}

double NNfunction_t1t1::synapse0x3780240() {
   return (neuron0x376cee0()*0.0450557);
}

double NNfunction_t1t1::synapse0x3780280() {
   return (neuron0x376d220()*-0.1204);
}

double NNfunction_t1t1::synapse0x37802c0() {
   return (neuron0x376d560()*0.0669816);
}

double NNfunction_t1t1::synapse0x3780300() {
   return (neuron0x376d8a0()*0.0795368);
}

double NNfunction_t1t1::synapse0x3780340() {
   return (neuron0x376dbe0()*0.0351302);
}

double NNfunction_t1t1::synapse0x3780380() {
   return (neuron0x376df20()*-0.093959);
}

double NNfunction_t1t1::synapse0x377fe10() {
   return (neuron0x376e260()*0.786505);
}

double NNfunction_t1t1::synapse0x377fe50() {
   return (neuron0x376e7c0()*-0.641972);
}

double NNfunction_t1t1::synapse0x37804d0() {
   return (neuron0x376e9e0()*0.0278142);
}

double NNfunction_t1t1::synapse0x3780510() {
   return (neuron0x376ed20()*0.0983315);
}

double NNfunction_t1t1::synapse0x3780550() {
   return (neuron0x376f060()*0.3188);
}

double NNfunction_t1t1::synapse0x3780590() {
   return (neuron0x376f3a0()*-0.0381456);
}

double NNfunction_t1t1::synapse0x37805d0() {
   return (neuron0x376f6e0()*-0.0320971);
}

double NNfunction_t1t1::synapse0x3780610() {
   return (neuron0x376fa20()*0.074336);
}

double NNfunction_t1t1::synapse0x37924e0() {
   return (neuron0x376ae60()*-0.00784234);
}

double NNfunction_t1t1::synapse0x3792520() {
   return (neuron0x376b1a0()*-0.0517254);
}

double NNfunction_t1t1::synapse0x3792560() {
   return (neuron0x376b4e0()*0.0419515);
}

double NNfunction_t1t1::synapse0x37925a0() {
   return (neuron0x376b820()*-0.0163481);
}

double NNfunction_t1t1::synapse0x37925e0() {
   return (neuron0x376bb60()*0.178245);
}

double NNfunction_t1t1::synapse0x3792620() {
   return (neuron0x376bea0()*0.0536457);
}

double NNfunction_t1t1::synapse0x3792660() {
   return (neuron0x376c1e0()*-0.0035128);
}

double NNfunction_t1t1::synapse0x37926a0() {
   return (neuron0x376c520()*0.0440658);
}

double NNfunction_t1t1::synapse0x37926e0() {
   return (neuron0x376c860()*0.00109595);
}

double NNfunction_t1t1::synapse0x3792720() {
   return (neuron0x376cba0()*-0.0397776);
}

double NNfunction_t1t1::synapse0x3792760() {
   return (neuron0x376cee0()*-0.0477521);
}

double NNfunction_t1t1::synapse0x37927a0() {
   return (neuron0x376d220()*-0.0123077);
}

double NNfunction_t1t1::synapse0x37927e0() {
   return (neuron0x376d560()*-0.0323912);
}

double NNfunction_t1t1::synapse0x3792820() {
   return (neuron0x376d8a0()*-0.878741);
}

double NNfunction_t1t1::synapse0x3792860() {
   return (neuron0x376dbe0()*0.0100751);
}

double NNfunction_t1t1::synapse0x37928a0() {
   return (neuron0x376df20()*0.0105747);
}

double NNfunction_t1t1::synapse0x3780650() {
   return (neuron0x376e260()*-0.285742);
}

double NNfunction_t1t1::synapse0x3780690() {
   return (neuron0x376e7c0()*0.00498676);
}

double NNfunction_t1t1::synapse0x37929f0() {
   return (neuron0x376e9e0()*-0.0756411);
}

double NNfunction_t1t1::synapse0x3792a30() {
   return (neuron0x376ed20()*0.0541395);
}

double NNfunction_t1t1::synapse0x3792a70() {
   return (neuron0x376f060()*1.09307);
}

double NNfunction_t1t1::synapse0x3792ab0() {
   return (neuron0x376f3a0()*0.0205972);
}

double NNfunction_t1t1::synapse0x3792af0() {
   return (neuron0x376f6e0()*-0.0261461);
}

double NNfunction_t1t1::synapse0x3792b30() {
   return (neuron0x376fa20()*-0.192239);
}

double NNfunction_t1t1::synapse0x3792eb0() {
   return (neuron0x376ae60()*-0.0291651);
}

double NNfunction_t1t1::synapse0x3792ef0() {
   return (neuron0x376b1a0()*0.0162533);
}

double NNfunction_t1t1::synapse0x3792f30() {
   return (neuron0x376b4e0()*-0.263982);
}

double NNfunction_t1t1::synapse0x3792f70() {
   return (neuron0x376b820()*0.0813128);
}

double NNfunction_t1t1::synapse0x3792fb0() {
   return (neuron0x376bb60()*0.0832874);
}

double NNfunction_t1t1::synapse0x3792ff0() {
   return (neuron0x376bea0()*-0.0109519);
}

double NNfunction_t1t1::synapse0x3793030() {
   return (neuron0x376c1e0()*-0.0135091);
}

double NNfunction_t1t1::synapse0x3793070() {
   return (neuron0x376c520()*-0.00255353);
}

double NNfunction_t1t1::synapse0x37930b0() {
   return (neuron0x376c860()*-0.0721326);
}

double NNfunction_t1t1::synapse0x37930f0() {
   return (neuron0x376cba0()*0.0953114);
}

double NNfunction_t1t1::synapse0x3793130() {
   return (neuron0x376cee0()*0.0706601);
}

double NNfunction_t1t1::synapse0x3793170() {
   return (neuron0x376d220()*0.0096139);
}

double NNfunction_t1t1::synapse0x37931b0() {
   return (neuron0x376d560()*0.030779);
}

double NNfunction_t1t1::synapse0x37931f0() {
   return (neuron0x376d8a0()*-0.470687);
}

double NNfunction_t1t1::synapse0x3793230() {
   return (neuron0x376dbe0()*-0.102498);
}

double NNfunction_t1t1::synapse0x3793270() {
   return (neuron0x376df20()*-0.0857597);
}

double NNfunction_t1t1::synapse0x3792d00() {
   return (neuron0x376e260()*-0.0560362);
}

double NNfunction_t1t1::synapse0x3792d40() {
   return (neuron0x376e7c0()*0.00264986);
}

double NNfunction_t1t1::synapse0x37933c0() {
   return (neuron0x376e9e0()*-0.0175524);
}

double NNfunction_t1t1::synapse0x3793400() {
   return (neuron0x376ed20()*0.032141);
}

double NNfunction_t1t1::synapse0x3793440() {
   return (neuron0x376f060()*0.0772841);
}

double NNfunction_t1t1::synapse0x3793480() {
   return (neuron0x376f3a0()*0.0501656);
}

double NNfunction_t1t1::synapse0x37934c0() {
   return (neuron0x376f6e0()*-0.0562358);
}

double NNfunction_t1t1::synapse0x3793500() {
   return (neuron0x376fa20()*-0.0521275);
}

double NNfunction_t1t1::synapse0x3793880() {
   return (neuron0x376ae60()*0.000387094);
}

double NNfunction_t1t1::synapse0x37938c0() {
   return (neuron0x376b1a0()*-0.0106206);
}

double NNfunction_t1t1::synapse0x3793900() {
   return (neuron0x376b4e0()*0.0384891);
}

double NNfunction_t1t1::synapse0x3793940() {
   return (neuron0x376b820()*-0.0111021);
}

double NNfunction_t1t1::synapse0x3793980() {
   return (neuron0x376bb60()*0.0961966);
}

double NNfunction_t1t1::synapse0x37939c0() {
   return (neuron0x376bea0()*0.0193073);
}

double NNfunction_t1t1::synapse0x3793a00() {
   return (neuron0x376c1e0()*-0.0117032);
}

double NNfunction_t1t1::synapse0x3793a40() {
   return (neuron0x376c520()*0.0232342);
}

double NNfunction_t1t1::synapse0x3793a80() {
   return (neuron0x376c860()*0.0306668);
}

double NNfunction_t1t1::synapse0x3793ac0() {
   return (neuron0x376cba0()*0.00531366);
}

double NNfunction_t1t1::synapse0x3793b00() {
   return (neuron0x376cee0()*0.000346961);
}

double NNfunction_t1t1::synapse0x3793b40() {
   return (neuron0x376d220()*0.0129573);
}

double NNfunction_t1t1::synapse0x3793b80() {
   return (neuron0x376d560()*-0.00258314);
}

double NNfunction_t1t1::synapse0x3793bc0() {
   return (neuron0x376d8a0()*0.291027);
}

double NNfunction_t1t1::synapse0x3793c00() {
   return (neuron0x376dbe0()*-0.0132273);
}

double NNfunction_t1t1::synapse0x3793c40() {
   return (neuron0x376df20()*0.00414502);
}

double NNfunction_t1t1::synapse0x37936d0() {
   return (neuron0x376e260()*-5.44109);
}

double NNfunction_t1t1::synapse0x3793710() {
   return (neuron0x376e7c0()*-0.00913893);
}

double NNfunction_t1t1::synapse0x3793d90() {
   return (neuron0x376e9e0()*-0.0016244);
}

double NNfunction_t1t1::synapse0x3793dd0() {
   return (neuron0x376ed20()*-0.00434844);
}

double NNfunction_t1t1::synapse0x3793e10() {
   return (neuron0x376f060()*-0.132827);
}

double NNfunction_t1t1::synapse0x3793e50() {
   return (neuron0x376f3a0()*-0.00907782);
}

double NNfunction_t1t1::synapse0x3793e90() {
   return (neuron0x376f6e0()*-0.0079203);
}

double NNfunction_t1t1::synapse0x3793ed0() {
   return (neuron0x376fa20()*-0.078822);
}

double NNfunction_t1t1::synapse0x3794250() {
   return (neuron0x376ae60()*-0.270538);
}

double NNfunction_t1t1::synapse0x3794290() {
   return (neuron0x376b1a0()*-0.0250775);
}

double NNfunction_t1t1::synapse0x37942d0() {
   return (neuron0x376b4e0()*-0.0737044);
}

double NNfunction_t1t1::synapse0x3794310() {
   return (neuron0x376b820()*0.112723);
}

double NNfunction_t1t1::synapse0x3794350() {
   return (neuron0x376bb60()*0.381028);
}

double NNfunction_t1t1::synapse0x3794390() {
   return (neuron0x376bea0()*0.0449523);
}

double NNfunction_t1t1::synapse0x37943d0() {
   return (neuron0x376c1e0()*-0.0476398);
}

double NNfunction_t1t1::synapse0x3794410() {
   return (neuron0x376c520()*-0.0206087);
}

double NNfunction_t1t1::synapse0x3794450() {
   return (neuron0x376c860()*0.0807017);
}

double NNfunction_t1t1::synapse0x3794490() {
   return (neuron0x376cba0()*0.0735707);
}

double NNfunction_t1t1::synapse0x37944d0() {
   return (neuron0x376cee0()*0.137693);
}

double NNfunction_t1t1::synapse0x3794510() {
   return (neuron0x376d220()*0.107339);
}

double NNfunction_t1t1::synapse0x3794550() {
   return (neuron0x376d560()*-0.0195735);
}

double NNfunction_t1t1::synapse0x3794590() {
   return (neuron0x376d8a0()*-0.472277);
}

double NNfunction_t1t1::synapse0x37945d0() {
   return (neuron0x376dbe0()*-0.14682);
}

double NNfunction_t1t1::synapse0x3794610() {
   return (neuron0x376df20()*-0.0706583);
}

double NNfunction_t1t1::synapse0x37940a0() {
   return (neuron0x376e260()*-0.599736);
}

double NNfunction_t1t1::synapse0x37940e0() {
   return (neuron0x376e7c0()*0.0995958);
}

double NNfunction_t1t1::synapse0x3794760() {
   return (neuron0x376e9e0()*0.0343553);
}

double NNfunction_t1t1::synapse0x37947a0() {
   return (neuron0x376ed20()*0.147482);
}

double NNfunction_t1t1::synapse0x37947e0() {
   return (neuron0x376f060()*-0.504411);
}

double NNfunction_t1t1::synapse0x3794820() {
   return (neuron0x376f3a0()*0.172305);
}

double NNfunction_t1t1::synapse0x3794860() {
   return (neuron0x376f6e0()*-0.128534);
}

double NNfunction_t1t1::synapse0x37948a0() {
   return (neuron0x376fa20()*-0.646167);
}

double NNfunction_t1t1::synapse0x352ac70() {
   return (neuron0x376fe90()*-0.0337194);
}

double NNfunction_t1t1::synapse0x352acb0() {
   return (neuron0x37707e0()*0.490251);
}

double NNfunction_t1t1::synapse0x3772350() {
   return (neuron0x37712c0()*-0.273433);
}

double NNfunction_t1t1::synapse0x3772390() {
   return (neuron0x3770d60()*0.300754);
}

double NNfunction_t1t1::synapse0x3772d20() {
   return (neuron0x37720a0()*0.474125);
}

double NNfunction_t1t1::synapse0x3772d60() {
   return (neuron0x3772a70()*-0.451039);
}

double NNfunction_t1t1::synapse0x3773af0() {
   return (neuron0x3773840()*-0.201096);
}

double NNfunction_t1t1::synapse0x3773b30() {
   return (neuron0x3774210()*-0.392323);
}

double NNfunction_t1t1::synapse0x37744c0() {
   return (neuron0x3774be0()*0.0747664);
}

double NNfunction_t1t1::synapse0x3774500() {
   return (neuron0x37756c0()*2.11133);
}

double NNfunction_t1t1::synapse0x3774e90() {
   return (neuron0x3776090()*0.00333929);
}

double NNfunction_t1t1::synapse0x3774ed0() {
   return (neuron0x3773170()*0.393404);
}

double NNfunction_t1t1::synapse0x3775970() {
   return (neuron0x3777c40()*-1.33144);
}

double NNfunction_t1t1::synapse0x37759b0() {
   return (neuron0x3778610()*-0.729407);
}

double NNfunction_t1t1::synapse0x3776340() {
   return (neuron0x3778fe0()*-0.114112);
}

double NNfunction_t1t1::synapse0x3776380() {
   return (neuron0x37799b0()*0.260015);
}

double NNfunction_t1t1::synapse0x3773420() {
   return (neuron0x377b7c0()*0.669934);
}

double NNfunction_t1t1::synapse0x3773460() {
   return (neuron0x377baa0()*1.34214);
}

double NNfunction_t1t1::synapse0x3777ef0() {
   return (neuron0x377c470()*0.190927);
}

double NNfunction_t1t1::synapse0x3777f30() {
   return (neuron0x377ce40()*-0.581002);
}

double NNfunction_t1t1::synapse0x37788c0() {
   return (neuron0x377d810()*0.3113);
}

double NNfunction_t1t1::synapse0x3778900() {
   return (neuron0x377e1e0()*-0.0400517);
}

double NNfunction_t1t1::synapse0x3779290() {
   return (neuron0x3776d30()*-0.336164);
}

double NNfunction_t1t1::synapse0x37792d0() {
   return (neuron0x3777700()*-0.574527);
}

double NNfunction_t1t1::synapse0x3779c60() {
   return (neuron0x3780f70()*-1.52777);
}

double NNfunction_t1t1::synapse0x3779ca0() {
   return (neuron0x3781940()*-0.150005);
}

double NNfunction_t1t1::synapse0x376de00() {
   return (neuron0x3782310()*-0.080352);
}

double NNfunction_t1t1::synapse0x376de40() {
   return (neuron0x3782ce0()*-0.630437);
}

double NNfunction_t1t1::synapse0x377bd50() {
   return (neuron0x37836b0()*-0.565047);
}

double NNfunction_t1t1::synapse0x377bd90() {
   return (neuron0x3784080()*-0.343593);
}

double NNfunction_t1t1::synapse0x377c720() {
   return (neuron0x3784a50()*-0.0823091);
}

double NNfunction_t1t1::synapse0x377c760() {
   return (neuron0x3785420()*0.362427);
}

double NNfunction_t1t1::synapse0x377d0f0() {
   return (neuron0x377b4b0()*-0.0630609);
}

double NNfunction_t1t1::synapse0x377d130() {
   return (neuron0x3788000()*-0.208062);
}

double NNfunction_t1t1::synapse0x377dac0() {
   return (neuron0x37889d0()*0.0250565);
}

double NNfunction_t1t1::synapse0x377db00() {
   return (neuron0x37893a0()*-0.579658);
}

double NNfunction_t1t1::synapse0x377e490() {
   return (neuron0x3789d70()*0.493748);
}

double NNfunction_t1t1::synapse0x377e4d0() {
   return (neuron0x378a740()*-0.368467);
}

double NNfunction_t1t1::synapse0x3776fe0() {
   return (neuron0x378b110()*-0.379407);
}

double NNfunction_t1t1::synapse0x3777020() {
   return (neuron0x378bae0()*-0.0854069);
}

double NNfunction_t1t1::synapse0x3780890() {
   return (neuron0x378c4b0()*-0.027739);
}

double NNfunction_t1t1::synapse0x37808d0() {
   return (neuron0x378d090()*-0.202753);
}

double NNfunction_t1t1::synapse0x3781220() {
   return (neuron0x378da60()*-0.864287);
}

double NNfunction_t1t1::synapse0x3781260() {
   return (neuron0x377e8e0()*0.285844);
}

double NNfunction_t1t1::synapse0x3781bf0() {
   return (neuron0x377f2b0()*0.102145);
}

double NNfunction_t1t1::synapse0x3781c30() {
   return (neuron0x377fc80()*-0.137567);
}

double NNfunction_t1t1::synapse0x37825c0() {
   return (neuron0x37922c0()*1.37851);
}

double NNfunction_t1t1::synapse0x3782600() {
   return (neuron0x3792b70()*-0.0624501);
}

double NNfunction_t1t1::synapse0x3782f90() {
   return (neuron0x3793540()*-1.48413);
}

double NNfunction_t1t1::synapse0x3782fd0() {
   return (neuron0x3793f10()*-0.0206837);
}

double NNfunction_t1t1::synapse0x37856d0() {
   return (neuron0x376fe90()*-0.726879);
}

double NNfunction_t1t1::synapse0x3785710() {
   return (neuron0x37707e0()*-5.232);
}

double NNfunction_t1t1::synapse0x377ac90() {
   return (neuron0x37712c0()*3.43523);
}

double NNfunction_t1t1::synapse0x377acd0() {
   return (neuron0x3770d60()*-5.2022);
}

double NNfunction_t1t1::synapse0x37882b0() {
   return (neuron0x37720a0()*-0.464987);
}

double NNfunction_t1t1::synapse0x37882f0() {
   return (neuron0x3772a70()*3.19156);
}

double NNfunction_t1t1::synapse0x3788c80() {
   return (neuron0x3773840()*-3.55914);
}

double NNfunction_t1t1::synapse0x3788cc0() {
   return (neuron0x3774210()*4.64299);
}

double NNfunction_t1t1::synapse0x3789650() {
   return (neuron0x3774be0()*0.775314);
}

double NNfunction_t1t1::synapse0x3789690() {
   return (neuron0x37756c0()*-5.33355);
}

double NNfunction_t1t1::synapse0x378a020() {
   return (neuron0x3776090()*-0.883355);
}

double NNfunction_t1t1::synapse0x378a060() {
   return (neuron0x3773170()*6.13221);
}

double NNfunction_t1t1::synapse0x378a9f0() {
   return (neuron0x3777c40()*4.79097);
}

double NNfunction_t1t1::synapse0x378aa30() {
   return (neuron0x3778610()*2.68319);
}

double NNfunction_t1t1::synapse0x378b3c0() {
   return (neuron0x3778fe0()*-2.46486);
}

double NNfunction_t1t1::synapse0x378b400() {
   return (neuron0x37799b0()*4.03025);
}

double NNfunction_t1t1::synapse0x378bd90() {
   return (neuron0x377b7c0()*-2.2828);
}

double NNfunction_t1t1::synapse0x378bdd0() {
   return (neuron0x377baa0()*-5.28632);
}

double NNfunction_t1t1::synapse0x378c760() {
   return (neuron0x377c470()*3.2596);
}

double NNfunction_t1t1::synapse0x378c7a0() {
   return (neuron0x377ce40()*2.50664);
}

double NNfunction_t1t1::synapse0x378d340() {
   return (neuron0x377d810()*-1.09419);
}

double NNfunction_t1t1::synapse0x378d380() {
   return (neuron0x377e1e0()*-4.15391);
}

double NNfunction_t1t1::synapse0x378dd10() {
   return (neuron0x3776d30()*-3.29929);
}

double NNfunction_t1t1::synapse0x378dd50() {
   return (neuron0x3777700()*2.121);
}

double NNfunction_t1t1::synapse0x377eb90() {
   return (neuron0x3780f70()*5.87387);
}

double NNfunction_t1t1::synapse0x377ebd0() {
   return (neuron0x3781940()*-2.51554);
}

double NNfunction_t1t1::synapse0x377f560() {
   return (neuron0x3782310()*3.0956);
}

double NNfunction_t1t1::synapse0x377f5a0() {
   return (neuron0x3782ce0()*-3.42626);
}

double NNfunction_t1t1::synapse0x377ff30() {
   return (neuron0x37836b0()*2.40898);
}

double NNfunction_t1t1::synapse0x377ff70() {
   return (neuron0x3784080()*-3.96438);
}

double NNfunction_t1t1::synapse0x3792450() {
   return (neuron0x3784a50()*1.99803);
}

double NNfunction_t1t1::synapse0x3792490() {
   return (neuron0x3785420()*-1.8765);
}

double NNfunction_t1t1::synapse0x3792e20() {
   return (neuron0x377b4b0()*-0.974979);
}

double NNfunction_t1t1::synapse0x3792e60() {
   return (neuron0x3788000()*5.36482);
}

double NNfunction_t1t1::synapse0x37937f0() {
   return (neuron0x37889d0()*4.12706);
}

double NNfunction_t1t1::synapse0x3793830() {
   return (neuron0x37893a0()*2.67311);
}

double NNfunction_t1t1::synapse0x37941c0() {
   return (neuron0x3789d70()*-1.38194);
}

double NNfunction_t1t1::synapse0x3794200() {
   return (neuron0x378a740()*3.77107);
}

double NNfunction_t1t1::synapse0x37700b0() {
   return (neuron0x378b110()*2.10098);
}

double NNfunction_t1t1::synapse0x37700f0() {
   return (neuron0x378bae0()*-2.11448);
}

double NNfunction_t1t1::synapse0x3783960() {
   return (neuron0x378c4b0()*0.983202);
}

double NNfunction_t1t1::synapse0x37839a0() {
   return (neuron0x378d090()*2.43545);
}

double NNfunction_t1t1::synapse0x37948e0() {
   return (neuron0x378da60()*2.8701);
}

double NNfunction_t1t1::synapse0x3794920() {
   return (neuron0x377e8e0()*-2.35612);
}

double NNfunction_t1t1::synapse0x3794960() {
   return (neuron0x377f2b0()*2.88589);
}

double NNfunction_t1t1::synapse0x37949a0() {
   return (neuron0x377fc80()*2.08125);
}

double NNfunction_t1t1::synapse0x379b850() {
   return (neuron0x37922c0()*-5.48283);
}

double NNfunction_t1t1::synapse0x379b890() {
   return (neuron0x3792b70()*-2.48491);
}

double NNfunction_t1t1::synapse0x379b8d0() {
   return (neuron0x3793540()*2.65182);
}

double NNfunction_t1t1::synapse0x379b910() {
   return (neuron0x3793f10()*2.97807);
}

double NNfunction_t1t1::synapse0x379bc90() {
   return (neuron0x376fe90()*0.532932);
}

double NNfunction_t1t1::synapse0x379bcd0() {
   return (neuron0x37707e0()*-0.0988327);
}

double NNfunction_t1t1::synapse0x379bd10() {
   return (neuron0x37712c0()*-1.21415);
}

double NNfunction_t1t1::synapse0x379bd50() {
   return (neuron0x3770d60()*1.56141);
}

double NNfunction_t1t1::synapse0x379bd90() {
   return (neuron0x37720a0()*-2.20621);
}

double NNfunction_t1t1::synapse0x379bdd0() {
   return (neuron0x3772a70()*-2.6983);
}

double NNfunction_t1t1::synapse0x379be10() {
   return (neuron0x3773840()*1.8818);
}

double NNfunction_t1t1::synapse0x379be50() {
   return (neuron0x3774210()*-2.05776);
}

double NNfunction_t1t1::synapse0x379be90() {
   return (neuron0x3774be0()*-0.92632);
}

double NNfunction_t1t1::synapse0x379bed0() {
   return (neuron0x37756c0()*0.314616);
}

double NNfunction_t1t1::synapse0x379bf10() {
   return (neuron0x3776090()*1.00975);
}

double NNfunction_t1t1::synapse0x379bf50() {
   return (neuron0x3773170()*-3.11466);
}

double NNfunction_t1t1::synapse0x379bf90() {
   return (neuron0x3777c40()*0.79708);
}

double NNfunction_t1t1::synapse0x379bfd0() {
   return (neuron0x3778610()*0.366969);
}

double NNfunction_t1t1::synapse0x379c010() {
   return (neuron0x3778fe0()*2.70222);
}

double NNfunction_t1t1::synapse0x379c050() {
   return (neuron0x37799b0()*-2.54175);
}

double NNfunction_t1t1::synapse0x379bae0() {
   return (neuron0x377b7c0()*-0.654184);
}

double NNfunction_t1t1::synapse0x379bb20() {
   return (neuron0x377baa0()*1.01891);
}

double NNfunction_t1t1::synapse0x379c1a0() {
   return (neuron0x377c470()*-1.1297);
}

double NNfunction_t1t1::synapse0x379c1e0() {
   return (neuron0x377ce40()*0.688312);
}

double NNfunction_t1t1::synapse0x379c220() {
   return (neuron0x377d810()*-0.562598);
}

double NNfunction_t1t1::synapse0x379c260() {
   return (neuron0x377e1e0()*2.64498);
}

double NNfunction_t1t1::synapse0x379c2a0() {
   return (neuron0x3776d30()*0.677522);
}

double NNfunction_t1t1::synapse0x379c2e0() {
   return (neuron0x3777700()*1.39187);
}

double NNfunction_t1t1::synapse0x379c320() {
   return (neuron0x3780f70()*0.153944);
}

double NNfunction_t1t1::synapse0x379c360() {
   return (neuron0x3781940()*1.51128);
}

double NNfunction_t1t1::synapse0x379c3a0() {
   return (neuron0x3782310()*-2.24503);
}

double NNfunction_t1t1::synapse0x379c3e0() {
   return (neuron0x3782ce0()*2.18098);
}

double NNfunction_t1t1::synapse0x379c420() {
   return (neuron0x37836b0()*0.860961);
}

double NNfunction_t1t1::synapse0x379c460() {
   return (neuron0x3784080()*0.625102);
}

double NNfunction_t1t1::synapse0x379c4a0() {
   return (neuron0x3784a50()*-1.06562);
}

double NNfunction_t1t1::synapse0x379c4e0() {
   return (neuron0x3785420()*0.237867);
}

double NNfunction_t1t1::synapse0x379c090() {
   return (neuron0x377b4b0()*0.421809);
}

double NNfunction_t1t1::synapse0x379c0d0() {
   return (neuron0x3788000()*-2.29701);
}

double NNfunction_t1t1::synapse0x379c110() {
   return (neuron0x37889d0()*-0.742213);
}

double NNfunction_t1t1::synapse0x379c150() {
   return (neuron0x37893a0()*0.219767);
}

double NNfunction_t1t1::synapse0x379c730() {
   return (neuron0x3789d70()*0.591695);
}

double NNfunction_t1t1::synapse0x379c770() {
   return (neuron0x378a740()*-1.26149);
}

double NNfunction_t1t1::synapse0x379c7b0() {
   return (neuron0x378b110()*-0.794103);
}

double NNfunction_t1t1::synapse0x379c7f0() {
   return (neuron0x378bae0()*0.131176);
}

double NNfunction_t1t1::synapse0x379c830() {
   return (neuron0x378c4b0()*-0.543448);
}

double NNfunction_t1t1::synapse0x379c870() {
   return (neuron0x378d090()*0.390926);
}

double NNfunction_t1t1::synapse0x379c8b0() {
   return (neuron0x378da60()*0.975082);
}

double NNfunction_t1t1::synapse0x379c8f0() {
   return (neuron0x377e8e0()*-0.247778);
}

double NNfunction_t1t1::synapse0x379c930() {
   return (neuron0x377f2b0()*-1.53337);
}

double NNfunction_t1t1::synapse0x379c970() {
   return (neuron0x377fc80()*-1.0111);
}

double NNfunction_t1t1::synapse0x379c9b0() {
   return (neuron0x37922c0()*0.670185);
}

double NNfunction_t1t1::synapse0x379c9f0() {
   return (neuron0x3792b70()*-1.12877);
}

double NNfunction_t1t1::synapse0x379ca30() {
   return (neuron0x3793540()*-1.13633);
}

double NNfunction_t1t1::synapse0x379ca70() {
   return (neuron0x3793f10()*-0.420033);
}

double NNfunction_t1t1::synapse0x379cdf0() {
   return (neuron0x376fe90()*-0.0775752);
}

double NNfunction_t1t1::synapse0x379ce30() {
   return (neuron0x37707e0()*0.335341);
}

double NNfunction_t1t1::synapse0x379ce70() {
   return (neuron0x37712c0()*-1.49617);
}

double NNfunction_t1t1::synapse0x379ceb0() {
   return (neuron0x3770d60()*2.1792);
}

double NNfunction_t1t1::synapse0x379cef0() {
   return (neuron0x37720a0()*1.96232);
}

double NNfunction_t1t1::synapse0x379cf30() {
   return (neuron0x3772a70()*0.435046);
}

double NNfunction_t1t1::synapse0x379cf70() {
   return (neuron0x3773840()*0.709304);
}

double NNfunction_t1t1::synapse0x379cfb0() {
   return (neuron0x3774210()*-0.957012);
}

double NNfunction_t1t1::synapse0x379cff0() {
   return (neuron0x3774be0()*0.260075);
}

double NNfunction_t1t1::synapse0x379d030() {
   return (neuron0x37756c0()*0.256839);
}

double NNfunction_t1t1::synapse0x379d070() {
   return (neuron0x3776090()*-0.446045);
}

double NNfunction_t1t1::synapse0x379d0b0() {
   return (neuron0x3773170()*-3.26157);
}

double NNfunction_t1t1::synapse0x379d0f0() {
   return (neuron0x3777c40()*-3.24672);
}

double NNfunction_t1t1::synapse0x379d130() {
   return (neuron0x3778610()*0.156103);
}

double NNfunction_t1t1::synapse0x379d170() {
   return (neuron0x3778fe0()*-0.266467);
}

double NNfunction_t1t1::synapse0x379d1b0() {
   return (neuron0x37799b0()*-2.00781);
}

double NNfunction_t1t1::synapse0x379cc40() {
   return (neuron0x377b7c0()*0.315785);
}

double NNfunction_t1t1::synapse0x379cc80() {
   return (neuron0x377baa0()*0.191062);
}

double NNfunction_t1t1::synapse0x379d300() {
   return (neuron0x377c470()*-2.35661);
}

double NNfunction_t1t1::synapse0x379d340() {
   return (neuron0x377ce40()*-0.449756);
}

double NNfunction_t1t1::synapse0x379d380() {
   return (neuron0x377d810()*2.17981);
}

double NNfunction_t1t1::synapse0x379d3c0() {
   return (neuron0x377e1e0()*1.13969);
}

double NNfunction_t1t1::synapse0x379d400() {
   return (neuron0x3776d30()*1.67209);
}

double NNfunction_t1t1::synapse0x379d440() {
   return (neuron0x3777700()*-1.1636);
}

double NNfunction_t1t1::synapse0x379d480() {
   return (neuron0x3780f70()*0.16641);
}

double NNfunction_t1t1::synapse0x379d4c0() {
   return (neuron0x3781940()*0.695363);
}

double NNfunction_t1t1::synapse0x379d500() {
   return (neuron0x3782310()*-0.0701517);
}

double NNfunction_t1t1::synapse0x379d540() {
   return (neuron0x3782ce0()*-0.040092);
}

double NNfunction_t1t1::synapse0x379d580() {
   return (neuron0x37836b0()*0.138318);
}

double NNfunction_t1t1::synapse0x379d5c0() {
   return (neuron0x3784080()*3.31009);
}

double NNfunction_t1t1::synapse0x379d600() {
   return (neuron0x3784a50()*-0.072477);
}

double NNfunction_t1t1::synapse0x379d640() {
   return (neuron0x3785420()*0.389654);
}

double NNfunction_t1t1::synapse0x379d1f0() {
   return (neuron0x377b4b0()*0.0761818);
}

double NNfunction_t1t1::synapse0x379d230() {
   return (neuron0x3788000()*-2.47329);
}

double NNfunction_t1t1::synapse0x379d270() {
   return (neuron0x37889d0()*-0.0699124);
}

double NNfunction_t1t1::synapse0x379d2b0() {
   return (neuron0x37893a0()*-0.0197462);
}

double NNfunction_t1t1::synapse0x379d890() {
   return (neuron0x3789d70()*0.453039);
}

double NNfunction_t1t1::synapse0x379d8d0() {
   return (neuron0x378a740()*-0.58664);
}

double NNfunction_t1t1::synapse0x379d910() {
   return (neuron0x378b110()*0.455876);
}

double NNfunction_t1t1::synapse0x379d950() {
   return (neuron0x378bae0()*0.337146);
}

double NNfunction_t1t1::synapse0x379d990() {
   return (neuron0x378c4b0()*0.108556);
}

double NNfunction_t1t1::synapse0x379d9d0() {
   return (neuron0x378d090()*-2.23792);
}

double NNfunction_t1t1::synapse0x379da10() {
   return (neuron0x378da60()*0.167944);
}

double NNfunction_t1t1::synapse0x379da50() {
   return (neuron0x377e8e0()*-0.0501838);
}

double NNfunction_t1t1::synapse0x379da90() {
   return (neuron0x377f2b0()*0.144822);
}

double NNfunction_t1t1::synapse0x379dad0() {
   return (neuron0x377fc80()*0.128132);
}

double NNfunction_t1t1::synapse0x379db10() {
   return (neuron0x37922c0()*-0.243328);
}

double NNfunction_t1t1::synapse0x379db50() {
   return (neuron0x3792b70()*1.37761);
}

double NNfunction_t1t1::synapse0x379db90() {
   return (neuron0x3793540()*2.39996);
}

double NNfunction_t1t1::synapse0x379dbd0() {
   return (neuron0x3793f10()*-0.162792);
}

double NNfunction_t1t1::synapse0x379df50() {
   return (neuron0x376fe90()*-0.0259594);
}

double NNfunction_t1t1::synapse0x379df90() {
   return (neuron0x37707e0()*0.100817);
}

double NNfunction_t1t1::synapse0x379dfd0() {
   return (neuron0x37712c0()*-0.0595242);
}

double NNfunction_t1t1::synapse0x379e010() {
   return (neuron0x3770d60()*0.103873);
}

double NNfunction_t1t1::synapse0x379e050() {
   return (neuron0x37720a0()*-0.337981);
}

double NNfunction_t1t1::synapse0x379e090() {
   return (neuron0x3772a70()*-0.131952);
}

double NNfunction_t1t1::synapse0x379e0d0() {
   return (neuron0x3773840()*0.120662);
}

double NNfunction_t1t1::synapse0x379e110() {
   return (neuron0x3774210()*0.0251628);
}

double NNfunction_t1t1::synapse0x379e150() {
   return (neuron0x3774be0()*0.0453931);
}

double NNfunction_t1t1::synapse0x379e190() {
   return (neuron0x37756c0()*0.673347);
}

double NNfunction_t1t1::synapse0x379e1d0() {
   return (neuron0x3776090()*-0.019311);
}

double NNfunction_t1t1::synapse0x379e210() {
   return (neuron0x3773170()*0.501605);
}

double NNfunction_t1t1::synapse0x379e250() {
   return (neuron0x3777c40()*1.07132);
}

double NNfunction_t1t1::synapse0x379e290() {
   return (neuron0x3778610()*-0.252905);
}

double NNfunction_t1t1::synapse0x379e2d0() {
   return (neuron0x3778fe0()*-0.0778179);
}

double NNfunction_t1t1::synapse0x379e310() {
   return (neuron0x37799b0()*0.17858);
}

double NNfunction_t1t1::synapse0x379dda0() {
   return (neuron0x377b7c0()*0.196993);
}

double NNfunction_t1t1::synapse0x379dde0() {
   return (neuron0x377baa0()*-0.232167);
}

double NNfunction_t1t1::synapse0x379e460() {
   return (neuron0x377c470()*0.357701);
}

double NNfunction_t1t1::synapse0x379e4a0() {
   return (neuron0x377ce40()*-0.164973);
}

double NNfunction_t1t1::synapse0x379e4e0() {
   return (neuron0x377d810()*-0.0421104);
}

double NNfunction_t1t1::synapse0x379e520() {
   return (neuron0x377e1e0()*-0.161093);
}

double NNfunction_t1t1::synapse0x379e560() {
   return (neuron0x3776d30()*-0.239995);
}

double NNfunction_t1t1::synapse0x379e5a0() {
   return (neuron0x3777700()*1.65526);
}

double NNfunction_t1t1::synapse0x379e5e0() {
   return (neuron0x3780f70()*-0.530494);
}

double NNfunction_t1t1::synapse0x379e620() {
   return (neuron0x3781940()*-0.229586);
}

double NNfunction_t1t1::synapse0x379e660() {
   return (neuron0x3782310()*0.109586);
}

double NNfunction_t1t1::synapse0x379e6a0() {
   return (neuron0x3782ce0()*-0.410856);
}

double NNfunction_t1t1::synapse0x379e6e0() {
   return (neuron0x37836b0()*-0.0106424);
}

double NNfunction_t1t1::synapse0x379e720() {
   return (neuron0x3784080()*-0.285922);
}

double NNfunction_t1t1::synapse0x379e760() {
   return (neuron0x3784a50()*-0.064786);
}

double NNfunction_t1t1::synapse0x379e7a0() {
   return (neuron0x3785420()*0.344351);
}

double NNfunction_t1t1::synapse0x379e350() {
   return (neuron0x377b4b0()*-0.0238995);
}

double NNfunction_t1t1::synapse0x379e390() {
   return (neuron0x3788000()*0.151557);
}

double NNfunction_t1t1::synapse0x379e3d0() {
   return (neuron0x37889d0()*0.22825);
}

double NNfunction_t1t1::synapse0x379e410() {
   return (neuron0x37893a0()*-0.0729129);
}

double NNfunction_t1t1::synapse0x379e9f0() {
   return (neuron0x3789d70()*-1.25588);
}

double NNfunction_t1t1::synapse0x379ea30() {
   return (neuron0x378a740()*-0.106634);
}

double NNfunction_t1t1::synapse0x379ea70() {
   return (neuron0x378b110()*0.107554);
}

double NNfunction_t1t1::synapse0x379eab0() {
   return (neuron0x378bae0()*-0.464704);
}

double NNfunction_t1t1::synapse0x379eaf0() {
   return (neuron0x378c4b0()*0.0147044);
}

double NNfunction_t1t1::synapse0x379eb30() {
   return (neuron0x378d090()*0.235262);
}

double NNfunction_t1t1::synapse0x379eb70() {
   return (neuron0x378da60()*-0.285345);
}

double NNfunction_t1t1::synapse0x379ebb0() {
   return (neuron0x377e8e0()*0.088009);
}

double NNfunction_t1t1::synapse0x379ebf0() {
   return (neuron0x377f2b0()*0.107998);
}

double NNfunction_t1t1::synapse0x379ec30() {
   return (neuron0x377fc80()*0.0388232);
}

double NNfunction_t1t1::synapse0x379ec70() {
   return (neuron0x37922c0()*0.334756);
}

double NNfunction_t1t1::synapse0x379ecb0() {
   return (neuron0x3792b70()*1.40085);
}

double NNfunction_t1t1::synapse0x379ecf0() {
   return (neuron0x3793540()*0.592243);
}

double NNfunction_t1t1::synapse0x379ed30() {
   return (neuron0x3793f10()*0.00964245);
}

double NNfunction_t1t1::synapse0x379ef90() {
   return (neuron0x379b110()*-2.91028);
}

double NNfunction_t1t1::synapse0x379efd0() {
   return (neuron0x379b4b0()*14.7477);
}

double NNfunction_t1t1::synapse0x379f010() {
   return (neuron0x379b950()*-6.63784);
}

double NNfunction_t1t1::synapse0x379f050() {
   return (neuron0x379cab0()*-5.07924);
}

double NNfunction_t1t1::synapse0x379f090() {
   return (neuron0x379dc10()*6.33959);
}

