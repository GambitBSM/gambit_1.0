#include "NNfunction_NG_6.h"
#include <cmath>

double NNfunction_NG_6::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5263)/15.2266;
   input1 = (in1 - -8.14455)/1170.42;
   input2 = (in2 - 526.367)/492.651;
   input3 = (in3 - -26.7908)/739.656;
   input4 = (in4 - 1024.83)/926.673;
   input5 = (in5 - 889.503)/947.163;
   input6 = (in6 - 897.961)/947.211;
   input7 = (in7 - 909.713)/925.439;
   input8 = (in8 - 921.136)/972.276;
   input9 = (in9 - 908.498)/958.712;
   input10 = (in10 - 960.929)/947.022;
   input11 = (in11 - 565.372)/696.239;
   input12 = (in12 - 711.476)/854.916;
   input13 = (in13 - 484.054)/499.374;
   input14 = (in14 - 714.948)/803.799;
   input15 = (in15 - 719.095)/807.243;
   input16 = (in16 - 538.525)/561.899;
   input17 = (in17 - 758.565)/898.874;
   input18 = (in18 - 754.696)/897.135;
   input19 = (in19 - 775.015)/854.771;
   input20 = (in20 - -4.30046)/485.957;
   input21 = (in21 - -7.27219)/1137.73;
   input22 = (in22 - -0.638381)/1198.5;
   input23 = (in23 - -105.041)/300.377;
   switch(index) {
     case 0:
         return neuron0x3282af0();
     default:
         return 0.;
   }
}

double NNfunction_NG_6::Value(int index, double* input) {
   input0 = (input[0] - 23.5263)/15.2266;
   input1 = (input[1] - -8.14455)/1170.42;
   input2 = (input[2] - 526.367)/492.651;
   input3 = (input[3] - -26.7908)/739.656;
   input4 = (input[4] - 1024.83)/926.673;
   input5 = (input[5] - 889.503)/947.163;
   input6 = (input[6] - 897.961)/947.211;
   input7 = (input[7] - 909.713)/925.439;
   input8 = (input[8] - 921.136)/972.276;
   input9 = (input[9] - 908.498)/958.712;
   input10 = (input[10] - 960.929)/947.022;
   input11 = (input[11] - 565.372)/696.239;
   input12 = (input[12] - 711.476)/854.916;
   input13 = (input[13] - 484.054)/499.374;
   input14 = (input[14] - 714.948)/803.799;
   input15 = (input[15] - 719.095)/807.243;
   input16 = (input[16] - 538.525)/561.899;
   input17 = (input[17] - 758.565)/898.874;
   input18 = (input[18] - 754.696)/897.135;
   input19 = (input[19] - 775.015)/854.771;
   input20 = (input[20] - -4.30046)/485.957;
   input21 = (input[21] - -7.27219)/1137.73;
   input22 = (input[22] - -0.638381)/1198.5;
   input23 = (input[23] - -105.041)/300.377;
   switch(index) {
     case 0:
         return neuron0x3282af0();
     default:
         return 0.;
   }
}

double NNfunction_NG_6::neuron0x324ebb0() {
   return input0;
}

double NNfunction_NG_6::neuron0x324eef0() {
   return input1;
}

double NNfunction_NG_6::neuron0x324f230() {
   return input2;
}

double NNfunction_NG_6::neuron0x324f570() {
   return input3;
}

double NNfunction_NG_6::neuron0x324f8b0() {
   return input4;
}

double NNfunction_NG_6::neuron0x324fbf0() {
   return input5;
}

double NNfunction_NG_6::neuron0x324ff30() {
   return input6;
}

double NNfunction_NG_6::neuron0x3250270() {
   return input7;
}

double NNfunction_NG_6::neuron0x32505b0() {
   return input8;
}

double NNfunction_NG_6::neuron0x32508f0() {
   return input9;
}

double NNfunction_NG_6::neuron0x3250c30() {
   return input10;
}

double NNfunction_NG_6::neuron0x3250f70() {
   return input11;
}

double NNfunction_NG_6::neuron0x32512b0() {
   return input12;
}

double NNfunction_NG_6::neuron0x32515f0() {
   return input13;
}

double NNfunction_NG_6::neuron0x3251930() {
   return input14;
}

double NNfunction_NG_6::neuron0x3251c70() {
   return input15;
}

double NNfunction_NG_6::neuron0x3251fb0() {
   return input16;
}

double NNfunction_NG_6::neuron0x3252510() {
   return input17;
}

double NNfunction_NG_6::neuron0x3252730() {
   return input18;
}

double NNfunction_NG_6::neuron0x3252a70() {
   return input19;
}

double NNfunction_NG_6::neuron0x3252db0() {
   return input20;
}

double NNfunction_NG_6::neuron0x32530f0() {
   return input21;
}

double NNfunction_NG_6::neuron0x3253430() {
   return input22;
}

double NNfunction_NG_6::neuron0x3253770() {
   return input23;
}

double NNfunction_NG_6::input0x3253c10() {
   double input = -0.903098;
   input += synapse0x300ea20();
   input += synapse0x324ea70();
   input += synapse0x324eab0();
   input += synapse0x3253ec0();
   input += synapse0x3253f00();
   input += synapse0x3253f40();
   input += synapse0x3253f80();
   input += synapse0x3253fc0();
   input += synapse0x3254000();
   input += synapse0x3254040();
   input += synapse0x3254080();
   input += synapse0x32540c0();
   input += synapse0x3254100();
   input += synapse0x3254140();
   input += synapse0x3254180();
   input += synapse0x32541c0();
   input += synapse0x324e9e0();
   input += synapse0x324ea20();
   input += synapse0x3000280();
   input += synapse0x30002c0();
   input += synapse0x3254420();
   input += synapse0x3254460();
   input += synapse0x32544a0();
   input += synapse0x32544e0();
   return input;
}

double NNfunction_NG_6::neuron0x3253c10() {
   double input = input0x3253c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3254520() {
   double input = -3.68154;
   input += synapse0x3254860();
   input += synapse0x32548a0();
   input += synapse0x32548e0();
   input += synapse0x3254920();
   input += synapse0x3254960();
   input += synapse0x32549a0();
   input += synapse0x32549e0();
   input += synapse0x3254a20();
   input += synapse0x3254a60();
   input += synapse0x3254310();
   input += synapse0x3254350();
   input += synapse0x3254390();
   input += synapse0x32543d0();
   input += synapse0x3254cb0();
   input += synapse0x3254cf0();
   input += synapse0x3254d30();
   input += synapse0x32546b0();
   input += synapse0x32546f0();
   input += synapse0x3254e80();
   input += synapse0x3254ec0();
   input += synapse0x3254f00();
   input += synapse0x3254f40();
   input += synapse0x3254f80();
   input += synapse0x3254fc0();
   return input;
}

double NNfunction_NG_6::neuron0x3254520() {
   double input = input0x3254520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3255000() {
   double input = 0.200553;
   input += synapse0x3255340();
   input += synapse0x3255380();
   input += synapse0x32553c0();
   input += synapse0x3255400();
   input += synapse0x3255440();
   input += synapse0x3255480();
   input += synapse0x32554c0();
   input += synapse0x3255500();
   input += synapse0x3255540();
   input += synapse0x3255580();
   input += synapse0x32555c0();
   input += synapse0x3255600();
   input += synapse0x3255640();
   input += synapse0x3255680();
   input += synapse0x32556c0();
   input += synapse0x3255700();
   input += synapse0x3255190();
   input += synapse0x32551d0();
   input += synapse0x300e0f0();
   input += synapse0x300e130();
   input += synapse0x323dc40();
   input += synapse0x323dc80();
   input += synapse0x323dcc0();
   input += synapse0x324eaf0();
   return input;
}

double NNfunction_NG_6::neuron0x3255000() {
   double input = input0x3255000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x300e890() {
   double input = 1.35251;
   input += synapse0x3254c50();
   input += synapse0x324eb30();
   input += synapse0x324eb70();
   input += synapse0x3255850();
   input += synapse0x3255890();
   input += synapse0x32558d0();
   input += synapse0x3255910();
   input += synapse0x3255950();
   input += synapse0x3255990();
   input += synapse0x32559d0();
   input += synapse0x3255a10();
   input += synapse0x3255a50();
   input += synapse0x3255a90();
   input += synapse0x3255ad0();
   input += synapse0x3255b10();
   input += synapse0x3255b50();
   input += synapse0x3254aa0();
   input += synapse0x3254ae0();
   input += synapse0x3255ca0();
   input += synapse0x3255ce0();
   input += synapse0x3255d20();
   input += synapse0x3255d60();
   input += synapse0x3255da0();
   input += synapse0x3255de0();
   return input;
}

double NNfunction_NG_6::neuron0x300e890() {
   double input = input0x300e890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3255e20() {
   double input = -1.68746;
   input += synapse0x3256160();
   input += synapse0x32561a0();
   input += synapse0x32561e0();
   input += synapse0x3256220();
   input += synapse0x3256260();
   input += synapse0x32562a0();
   input += synapse0x32562e0();
   input += synapse0x3256320();
   input += synapse0x3256360();
   input += synapse0x32563a0();
   input += synapse0x32563e0();
   input += synapse0x3256420();
   input += synapse0x3256460();
   input += synapse0x32564a0();
   input += synapse0x32564e0();
   input += synapse0x3256520();
   input += synapse0x3255fb0();
   input += synapse0x3255ff0();
   input += synapse0x3256670();
   input += synapse0x32566b0();
   input += synapse0x32566f0();
   input += synapse0x3256730();
   input += synapse0x3256770();
   input += synapse0x32567b0();
   return input;
}

double NNfunction_NG_6::neuron0x3255e20() {
   double input = input0x3255e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x32567f0() {
   double input = 1.65841;
   input += synapse0x3256b30();
   input += synapse0x3256b70();
   input += synapse0x3256bb0();
   input += synapse0x3256bf0();
   input += synapse0x3256c30();
   input += synapse0x3256c70();
   input += synapse0x3256cb0();
   input += synapse0x3256cf0();
   input += synapse0x3256d30();
   input += synapse0x300e480();
   input += synapse0x300e4c0();
   input += synapse0x300e500();
   input += synapse0x300e540();
   input += synapse0x300e580();
   input += synapse0x300e5c0();
   input += synapse0x300e600();
   input += synapse0x3256980();
   input += synapse0x32569c0();
   input += synapse0x300e750();
   input += synapse0x300e790();
   input += synapse0x300e7d0();
   input += synapse0x300e810();
   input += synapse0x300e850();
   input += synapse0x3257580();
   return input;
}

double NNfunction_NG_6::neuron0x32567f0() {
   double input = input0x32567f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x32575c0() {
   double input = 1.05055;
   input += synapse0x3257900();
   input += synapse0x3257940();
   input += synapse0x3257980();
   input += synapse0x32579c0();
   input += synapse0x3257a00();
   input += synapse0x3257a40();
   input += synapse0x3257a80();
   input += synapse0x3257ac0();
   input += synapse0x3257b00();
   input += synapse0x3257b40();
   input += synapse0x3257b80();
   input += synapse0x3257bc0();
   input += synapse0x3257c00();
   input += synapse0x3257c40();
   input += synapse0x3257c80();
   input += synapse0x3257cc0();
   input += synapse0x3257750();
   input += synapse0x3257790();
   input += synapse0x3257e10();
   input += synapse0x3257e50();
   input += synapse0x3257e90();
   input += synapse0x3257ed0();
   input += synapse0x3257f10();
   input += synapse0x3257f50();
   return input;
}

double NNfunction_NG_6::neuron0x32575c0() {
   double input = input0x32575c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3257f90() {
   double input = -2.38568;
   input += synapse0x32582d0();
   input += synapse0x3258310();
   input += synapse0x3258350();
   input += synapse0x3258390();
   input += synapse0x32583d0();
   input += synapse0x3258410();
   input += synapse0x3258450();
   input += synapse0x3258490();
   input += synapse0x32584d0();
   input += synapse0x3258510();
   input += synapse0x3258550();
   input += synapse0x3258590();
   input += synapse0x32585d0();
   input += synapse0x3258610();
   input += synapse0x3258650();
   input += synapse0x3258690();
   input += synapse0x3258120();
   input += synapse0x3258160();
   input += synapse0x32587e0();
   input += synapse0x3258820();
   input += synapse0x3258860();
   input += synapse0x32588a0();
   input += synapse0x32588e0();
   input += synapse0x3258920();
   return input;
}

double NNfunction_NG_6::neuron0x3257f90() {
   double input = input0x3257f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3258960() {
   double input = -0.302554;
   input += synapse0x3252400();
   input += synapse0x3252440();
   input += synapse0x3252480();
   input += synapse0x32524c0();
   input += synapse0x3258eb0();
   input += synapse0x3258ef0();
   input += synapse0x3258f30();
   input += synapse0x3258f70();
   input += synapse0x3258fb0();
   input += synapse0x3258ff0();
   input += synapse0x3259030();
   input += synapse0x3259070();
   input += synapse0x32590b0();
   input += synapse0x32590f0();
   input += synapse0x3259130();
   input += synapse0x3259170();
   input += synapse0x3258af0();
   input += synapse0x3258b30();
   input += synapse0x32592c0();
   input += synapse0x3259300();
   input += synapse0x3259340();
   input += synapse0x3259380();
   input += synapse0x32593c0();
   input += synapse0x3259400();
   return input;
}

double NNfunction_NG_6::neuron0x3258960() {
   double input = input0x3258960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3259440() {
   double input = -1.28713;
   input += synapse0x3259780();
   input += synapse0x32597c0();
   input += synapse0x3259800();
   input += synapse0x3259840();
   input += synapse0x3259880();
   input += synapse0x32598c0();
   input += synapse0x3259900();
   input += synapse0x3259940();
   input += synapse0x3259980();
   input += synapse0x32599c0();
   input += synapse0x3259a00();
   input += synapse0x3259a40();
   input += synapse0x3259a80();
   input += synapse0x3259ac0();
   input += synapse0x3259b00();
   input += synapse0x3259b40();
   input += synapse0x32595d0();
   input += synapse0x3259610();
   input += synapse0x3259c90();
   input += synapse0x3259cd0();
   input += synapse0x3259d10();
   input += synapse0x3259d50();
   input += synapse0x3259d90();
   input += synapse0x3259dd0();
   return input;
}

double NNfunction_NG_6::neuron0x3259440() {
   double input = input0x3259440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3259e10() {
   double input = 0.256146;
   input += synapse0x325a150();
   input += synapse0x325a190();
   input += synapse0x325a1d0();
   input += synapse0x325a210();
   input += synapse0x325a250();
   input += synapse0x325a290();
   input += synapse0x325a2d0();
   input += synapse0x325a310();
   input += synapse0x325a350();
   input += synapse0x325a390();
   input += synapse0x325a3d0();
   input += synapse0x325a410();
   input += synapse0x325a450();
   input += synapse0x325a490();
   input += synapse0x325a4d0();
   input += synapse0x325a510();
   input += synapse0x3259fa0();
   input += synapse0x3259fe0();
   input += synapse0x3256d70();
   input += synapse0x3256db0();
   input += synapse0x3256df0();
   input += synapse0x3256e30();
   input += synapse0x3256e70();
   input += synapse0x3256eb0();
   return input;
}

double NNfunction_NG_6::neuron0x3259e10() {
   double input = input0x3259e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3256ef0() {
   double input = -0.406195;
   input += synapse0x3257230();
   input += synapse0x3257270();
   input += synapse0x32572b0();
   input += synapse0x32572f0();
   input += synapse0x3257330();
   input += synapse0x3257370();
   input += synapse0x32573b0();
   input += synapse0x32573f0();
   input += synapse0x3257430();
   input += synapse0x3257470();
   input += synapse0x32574b0();
   input += synapse0x32574f0();
   input += synapse0x3257530();
   input += synapse0x325b670();
   input += synapse0x325b6b0();
   input += synapse0x325b6f0();
   input += synapse0x3257080();
   input += synapse0x32570c0();
   input += synapse0x325b840();
   input += synapse0x325b880();
   input += synapse0x325b8c0();
   input += synapse0x325b900();
   input += synapse0x325b940();
   input += synapse0x325b980();
   return input;
}

double NNfunction_NG_6::neuron0x3256ef0() {
   double input = input0x3256ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x325b9c0() {
   double input = 0.0783319;
   input += synapse0x325bd00();
   input += synapse0x325bd40();
   input += synapse0x325bd80();
   input += synapse0x325bdc0();
   input += synapse0x325be00();
   input += synapse0x325be40();
   input += synapse0x325be80();
   input += synapse0x325bec0();
   input += synapse0x325bf00();
   input += synapse0x325bf40();
   input += synapse0x325bf80();
   input += synapse0x325bfc0();
   input += synapse0x325c000();
   input += synapse0x325c040();
   input += synapse0x325c080();
   input += synapse0x325c0c0();
   input += synapse0x325bb50();
   input += synapse0x325bb90();
   input += synapse0x325c210();
   input += synapse0x325c250();
   input += synapse0x325c290();
   input += synapse0x325c2d0();
   input += synapse0x325c310();
   input += synapse0x325c350();
   return input;
}

double NNfunction_NG_6::neuron0x325b9c0() {
   double input = input0x325b9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x325c390() {
   double input = -2.03381;
   input += synapse0x325c6d0();
   input += synapse0x325c710();
   input += synapse0x325c750();
   input += synapse0x325c790();
   input += synapse0x325c7d0();
   input += synapse0x325c810();
   input += synapse0x325c850();
   input += synapse0x325c890();
   input += synapse0x325c8d0();
   input += synapse0x325c910();
   input += synapse0x325c950();
   input += synapse0x325c990();
   input += synapse0x325c9d0();
   input += synapse0x325ca10();
   input += synapse0x325ca50();
   input += synapse0x325ca90();
   input += synapse0x325c520();
   input += synapse0x325c560();
   input += synapse0x325cbe0();
   input += synapse0x325cc20();
   input += synapse0x325cc60();
   input += synapse0x325cca0();
   input += synapse0x325cce0();
   input += synapse0x325cd20();
   return input;
}

double NNfunction_NG_6::neuron0x325c390() {
   double input = input0x325c390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x325cd60() {
   double input = -0.00613143;
   input += synapse0x325d0a0();
   input += synapse0x325d0e0();
   input += synapse0x325d120();
   input += synapse0x325d160();
   input += synapse0x325d1a0();
   input += synapse0x325d1e0();
   input += synapse0x325d220();
   input += synapse0x325d260();
   input += synapse0x325d2a0();
   input += synapse0x325d2e0();
   input += synapse0x325d320();
   input += synapse0x325d360();
   input += synapse0x325d3a0();
   input += synapse0x325d3e0();
   input += synapse0x325d420();
   input += synapse0x325d460();
   input += synapse0x325cef0();
   input += synapse0x325cf30();
   input += synapse0x325d5b0();
   input += synapse0x325d5f0();
   input += synapse0x325d630();
   input += synapse0x325d670();
   input += synapse0x325d6b0();
   input += synapse0x325d6f0();
   return input;
}

double NNfunction_NG_6::neuron0x325cd60() {
   double input = input0x325cd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x325d730() {
   double input = 0.217948;
   input += synapse0x325da70();
   input += synapse0x324edd0();
   input += synapse0x324ee10();
   input += synapse0x324f110();
   input += synapse0x324f150();
   input += synapse0x324f450();
   input += synapse0x324f490();
   input += synapse0x324f790();
   input += synapse0x324f7d0();
   input += synapse0x324fad0();
   input += synapse0x324fb10();
   input += synapse0x324fe10();
   input += synapse0x324fe50();
   input += synapse0x3250150();
   input += synapse0x3250190();
   input += synapse0x3250490();
   input += synapse0x32504d0();
   input += synapse0x32507d0();
   input += synapse0x3250810();
   input += synapse0x3250b10();
   input += synapse0x3250b50();
   input += synapse0x3250e50();
   input += synapse0x3250e90();
   input += synapse0x3251190();
   return input;
}

double NNfunction_NG_6::neuron0x325d730() {
   double input = input0x325d730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x325f540() {
   double input = -0.116354;
   input += synapse0x32511d0();
   input += synapse0x3251e90();
   input += synapse0x3251ed0();
   input += synapse0x325d8c0();
   input += synapse0x325d900();
   input += synapse0x32521d0();
   input += synapse0x3252210();
   input += synapse0x3000160();
   input += synapse0x30001a0();
   input += synapse0x3252950();
   input += synapse0x3252990();
   input += synapse0x3252c90();
   input += synapse0x3252cd0();
   input += synapse0x3252fd0();
   input += synapse0x3253010();
   input += synapse0x3253310();
   input += synapse0x3253350();
   input += synapse0x3253650();
   input += synapse0x3253690();
   input += synapse0x3253990();
   input += synapse0x32539d0();
   input += synapse0x32514d0();
   input += synapse0x3251510();
   input += synapse0x325f7e0();
   return input;
}

double NNfunction_NG_6::neuron0x325f540() {
   double input = input0x325f540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x325f820() {
   double input = -0.239051;
   input += synapse0x325fb60();
   input += synapse0x325fba0();
   input += synapse0x325fbe0();
   input += synapse0x325fc20();
   input += synapse0x325fc60();
   input += synapse0x325fca0();
   input += synapse0x325fce0();
   input += synapse0x325fd20();
   input += synapse0x325fd60();
   input += synapse0x325fda0();
   input += synapse0x325fde0();
   input += synapse0x325fe20();
   input += synapse0x325fe60();
   input += synapse0x325fea0();
   input += synapse0x325fee0();
   input += synapse0x325ff20();
   input += synapse0x325f9b0();
   input += synapse0x325f9f0();
   input += synapse0x3260070();
   input += synapse0x32600b0();
   input += synapse0x32600f0();
   input += synapse0x3260130();
   input += synapse0x3260170();
   input += synapse0x32601b0();
   return input;
}

double NNfunction_NG_6::neuron0x325f820() {
   double input = input0x325f820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x32601f0() {
   double input = -0.315127;
   input += synapse0x3260530();
   input += synapse0x3260570();
   input += synapse0x32605b0();
   input += synapse0x32605f0();
   input += synapse0x3260630();
   input += synapse0x3260670();
   input += synapse0x32606b0();
   input += synapse0x32606f0();
   input += synapse0x3260730();
   input += synapse0x3260770();
   input += synapse0x32607b0();
   input += synapse0x32607f0();
   input += synapse0x3260830();
   input += synapse0x3260870();
   input += synapse0x32608b0();
   input += synapse0x32608f0();
   input += synapse0x3260380();
   input += synapse0x32603c0();
   input += synapse0x3260a40();
   input += synapse0x3260a80();
   input += synapse0x3260ac0();
   input += synapse0x3260b00();
   input += synapse0x3260b40();
   input += synapse0x3260b80();
   return input;
}

double NNfunction_NG_6::neuron0x32601f0() {
   double input = input0x32601f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3260bc0() {
   double input = 0.246518;
   input += synapse0x3260f00();
   input += synapse0x3260f40();
   input += synapse0x3260f80();
   input += synapse0x3260fc0();
   input += synapse0x3261000();
   input += synapse0x3261040();
   input += synapse0x3261080();
   input += synapse0x32610c0();
   input += synapse0x3261100();
   input += synapse0x3261140();
   input += synapse0x3261180();
   input += synapse0x32611c0();
   input += synapse0x3261200();
   input += synapse0x3261240();
   input += synapse0x3261280();
   input += synapse0x32612c0();
   input += synapse0x3260d50();
   input += synapse0x3260d90();
   input += synapse0x3261410();
   input += synapse0x3261450();
   input += synapse0x3261490();
   input += synapse0x32614d0();
   input += synapse0x3261510();
   input += synapse0x3261550();
   return input;
}

double NNfunction_NG_6::neuron0x3260bc0() {
   double input = input0x3260bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3261590() {
   double input = -0.0845774;
   input += synapse0x32618d0();
   input += synapse0x3261910();
   input += synapse0x3261950();
   input += synapse0x3261990();
   input += synapse0x32619d0();
   input += synapse0x3261a10();
   input += synapse0x3261a50();
   input += synapse0x3261a90();
   input += synapse0x3261ad0();
   input += synapse0x3261b10();
   input += synapse0x3261b50();
   input += synapse0x3261b90();
   input += synapse0x3261bd0();
   input += synapse0x3261c10();
   input += synapse0x3261c50();
   input += synapse0x3261c90();
   input += synapse0x3261720();
   input += synapse0x3261760();
   input += synapse0x3261de0();
   input += synapse0x3261e20();
   input += synapse0x3261e60();
   input += synapse0x3261ea0();
   input += synapse0x3261ee0();
   input += synapse0x3261f20();
   return input;
}

double NNfunction_NG_6::neuron0x3261590() {
   double input = input0x3261590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3261f60() {
   double input = -3.64044;
   input += synapse0x32622a0();
   input += synapse0x32622e0();
   input += synapse0x3262320();
   input += synapse0x3262360();
   input += synapse0x32623a0();
   input += synapse0x32623e0();
   input += synapse0x3262420();
   input += synapse0x3262460();
   input += synapse0x32624a0();
   input += synapse0x325a660();
   input += synapse0x325a6a0();
   input += synapse0x325a6e0();
   input += synapse0x325a720();
   input += synapse0x325a760();
   input += synapse0x325a7a0();
   input += synapse0x325a7e0();
   input += synapse0x32620f0();
   input += synapse0x3262130();
   input += synapse0x325a930();
   input += synapse0x325a970();
   input += synapse0x325a9b0();
   input += synapse0x325a9f0();
   input += synapse0x325aa30();
   input += synapse0x325aa70();
   return input;
}

double NNfunction_NG_6::neuron0x3261f60() {
   double input = input0x3261f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x325aab0() {
   double input = -2.88656;
   input += synapse0x325adf0();
   input += synapse0x325ae30();
   input += synapse0x325ae70();
   input += synapse0x325aeb0();
   input += synapse0x325aef0();
   input += synapse0x325af30();
   input += synapse0x325af70();
   input += synapse0x325afb0();
   input += synapse0x325aff0();
   input += synapse0x325b030();
   input += synapse0x325b070();
   input += synapse0x325b0b0();
   input += synapse0x325b0f0();
   input += synapse0x325b130();
   input += synapse0x325b170();
   input += synapse0x325b1b0();
   input += synapse0x325ac40();
   input += synapse0x325ac80();
   input += synapse0x325b300();
   input += synapse0x325b340();
   input += synapse0x325b380();
   input += synapse0x325b3c0();
   input += synapse0x325b400();
   input += synapse0x325b440();
   return input;
}

double NNfunction_NG_6::neuron0x325aab0() {
   double input = input0x325aab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x325b480() {
   double input = -0.74672;
   input += synapse0x325b610();
   input += synapse0x32646a0();
   input += synapse0x32646e0();
   input += synapse0x3264720();
   input += synapse0x3264760();
   input += synapse0x32647a0();
   input += synapse0x32647e0();
   input += synapse0x3264820();
   input += synapse0x3264860();
   input += synapse0x32648a0();
   input += synapse0x32648e0();
   input += synapse0x3264920();
   input += synapse0x3264960();
   input += synapse0x32649a0();
   input += synapse0x32649e0();
   input += synapse0x3264a20();
   input += synapse0x32644f0();
   input += synapse0x3264530();
   input += synapse0x3264b70();
   input += synapse0x3264bb0();
   input += synapse0x3264bf0();
   input += synapse0x3264c30();
   input += synapse0x3264c70();
   input += synapse0x3264cb0();
   return input;
}

double NNfunction_NG_6::neuron0x325b480() {
   double input = input0x325b480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3264cf0() {
   double input = 1.15732;
   input += synapse0x3265030();
   input += synapse0x3265070();
   input += synapse0x32650b0();
   input += synapse0x32650f0();
   input += synapse0x3265130();
   input += synapse0x3265170();
   input += synapse0x32651b0();
   input += synapse0x32651f0();
   input += synapse0x3265230();
   input += synapse0x3265270();
   input += synapse0x32652b0();
   input += synapse0x32652f0();
   input += synapse0x3265330();
   input += synapse0x3265370();
   input += synapse0x32653b0();
   input += synapse0x32653f0();
   input += synapse0x3264e80();
   input += synapse0x3264ec0();
   input += synapse0x3265540();
   input += synapse0x3265580();
   input += synapse0x32655c0();
   input += synapse0x3265600();
   input += synapse0x3265640();
   input += synapse0x3265680();
   return input;
}

double NNfunction_NG_6::neuron0x3264cf0() {
   double input = input0x3264cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x32656c0() {
   double input = -0.347107;
   input += synapse0x3265a00();
   input += synapse0x3265a40();
   input += synapse0x3265a80();
   input += synapse0x3265ac0();
   input += synapse0x3265b00();
   input += synapse0x3265b40();
   input += synapse0x3265b80();
   input += synapse0x3265bc0();
   input += synapse0x3265c00();
   input += synapse0x3265c40();
   input += synapse0x3265c80();
   input += synapse0x3265cc0();
   input += synapse0x3265d00();
   input += synapse0x3265d40();
   input += synapse0x3265d80();
   input += synapse0x3265dc0();
   input += synapse0x3265850();
   input += synapse0x3265890();
   input += synapse0x3265f10();
   input += synapse0x3265f50();
   input += synapse0x3265f90();
   input += synapse0x3265fd0();
   input += synapse0x3266010();
   input += synapse0x3266050();
   return input;
}

double NNfunction_NG_6::neuron0x32656c0() {
   double input = input0x32656c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3266090() {
   double input = 1.61091;
   input += synapse0x32663d0();
   input += synapse0x3266410();
   input += synapse0x3266450();
   input += synapse0x3266490();
   input += synapse0x32664d0();
   input += synapse0x3266510();
   input += synapse0x3266550();
   input += synapse0x3266590();
   input += synapse0x32665d0();
   input += synapse0x3266610();
   input += synapse0x3266650();
   input += synapse0x3266690();
   input += synapse0x32666d0();
   input += synapse0x3266710();
   input += synapse0x3266750();
   input += synapse0x3266790();
   input += synapse0x3266220();
   input += synapse0x3266260();
   input += synapse0x32668e0();
   input += synapse0x3266920();
   input += synapse0x3266960();
   input += synapse0x32669a0();
   input += synapse0x32669e0();
   input += synapse0x3266a20();
   return input;
}

double NNfunction_NG_6::neuron0x3266090() {
   double input = input0x3266090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3266a60() {
   double input = 0.0209196;
   input += synapse0x3266da0();
   input += synapse0x3266de0();
   input += synapse0x3266e20();
   input += synapse0x3266e60();
   input += synapse0x3266ea0();
   input += synapse0x3266ee0();
   input += synapse0x3266f20();
   input += synapse0x3266f60();
   input += synapse0x3266fa0();
   input += synapse0x3266fe0();
   input += synapse0x3267020();
   input += synapse0x3267060();
   input += synapse0x32670a0();
   input += synapse0x32670e0();
   input += synapse0x3267120();
   input += synapse0x3267160();
   input += synapse0x3266bf0();
   input += synapse0x3266c30();
   input += synapse0x32672b0();
   input += synapse0x32672f0();
   input += synapse0x3267330();
   input += synapse0x3267370();
   input += synapse0x32673b0();
   input += synapse0x32673f0();
   return input;
}

double NNfunction_NG_6::neuron0x3266a60() {
   double input = input0x3266a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3267430() {
   double input = 0.220657;
   input += synapse0x3267770();
   input += synapse0x32677b0();
   input += synapse0x32677f0();
   input += synapse0x3267830();
   input += synapse0x3267870();
   input += synapse0x32678b0();
   input += synapse0x32678f0();
   input += synapse0x3267930();
   input += synapse0x3267970();
   input += synapse0x32679b0();
   input += synapse0x32679f0();
   input += synapse0x3267a30();
   input += synapse0x3267a70();
   input += synapse0x3267ab0();
   input += synapse0x3267af0();
   input += synapse0x3267b30();
   input += synapse0x32675c0();
   input += synapse0x3267600();
   input += synapse0x3267c80();
   input += synapse0x3267cc0();
   input += synapse0x3267d00();
   input += synapse0x3267d40();
   input += synapse0x3267d80();
   input += synapse0x3267dc0();
   return input;
}

double NNfunction_NG_6::neuron0x3267430() {
   double input = input0x3267430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3267e00() {
   double input = 0.479463;
   input += synapse0x3268140();
   input += synapse0x3268180();
   input += synapse0x32681c0();
   input += synapse0x3268200();
   input += synapse0x3268240();
   input += synapse0x3268280();
   input += synapse0x32682c0();
   input += synapse0x3268300();
   input += synapse0x3268340();
   input += synapse0x3268380();
   input += synapse0x32683c0();
   input += synapse0x3268400();
   input += synapse0x3268440();
   input += synapse0x3268480();
   input += synapse0x32684c0();
   input += synapse0x3268500();
   input += synapse0x3267f90();
   input += synapse0x3267fd0();
   input += synapse0x3268650();
   input += synapse0x3268690();
   input += synapse0x32686d0();
   input += synapse0x3268710();
   input += synapse0x3268750();
   input += synapse0x3268790();
   return input;
}

double NNfunction_NG_6::neuron0x3267e00() {
   double input = input0x3267e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x32687d0() {
   double input = -0.755223;
   input += synapse0x3268b10();
   input += synapse0x3268b50();
   input += synapse0x3268b90();
   input += synapse0x3268bd0();
   input += synapse0x3268c10();
   input += synapse0x3268c50();
   input += synapse0x3268c90();
   input += synapse0x3268cd0();
   input += synapse0x3268d10();
   input += synapse0x3268d50();
   input += synapse0x3268d90();
   input += synapse0x3268dd0();
   input += synapse0x3268e10();
   input += synapse0x3268e50();
   input += synapse0x3268e90();
   input += synapse0x3268ed0();
   input += synapse0x3268960();
   input += synapse0x32689a0();
   input += synapse0x3269020();
   input += synapse0x3269060();
   input += synapse0x32690a0();
   input += synapse0x32690e0();
   input += synapse0x3269120();
   input += synapse0x3269160();
   return input;
}

double NNfunction_NG_6::neuron0x32687d0() {
   double input = input0x32687d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x32691a0() {
   double input = 0.0449292;
   input += synapse0x32694e0();
   input += synapse0x325dab0();
   input += synapse0x325daf0();
   input += synapse0x325db30();
   input += synapse0x325dd80();
   input += synapse0x325ddc0();
   input += synapse0x325de00();
   input += synapse0x325e050();
   input += synapse0x325e090();
   input += synapse0x325e2e0();
   input += synapse0x325e320();
   input += synapse0x325e360();
   input += synapse0x325e5b0();
   input += synapse0x325e5f0();
   input += synapse0x325e840();
   input += synapse0x325e880();
   input += synapse0x3269330();
   input += synapse0x3269370();
   input += synapse0x325e9d0();
   input += synapse0x325eee0();
   input += synapse0x325ef20();
   input += synapse0x325ef60();
   input += synapse0x325f1b0();
   input += synapse0x325f1f0();
   return input;
}

double NNfunction_NG_6::neuron0x32691a0() {
   double input = input0x32691a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x325f230() {
   double input = 3.09313;
   input += synapse0x325eaa0();
   input += synapse0x325eae0();
   input += synapse0x325eb20();
   input += synapse0x325eb60();
   input += synapse0x325f4e0();
   input += synapse0x326b830();
   input += synapse0x326b870();
   input += synapse0x326b8b0();
   input += synapse0x326b8f0();
   input += synapse0x326b930();
   input += synapse0x326b970();
   input += synapse0x326b9b0();
   input += synapse0x326b9f0();
   input += synapse0x326ba30();
   input += synapse0x326ba70();
   input += synapse0x326bab0();
   input += synapse0x325f3c0();
   input += synapse0x325f400();
   input += synapse0x326bc00();
   input += synapse0x326bc40();
   input += synapse0x326bc80();
   input += synapse0x326bcc0();
   input += synapse0x326bd00();
   input += synapse0x326bd40();
   return input;
}

double NNfunction_NG_6::neuron0x325f230() {
   double input = input0x325f230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x326bd80() {
   double input = -0.100219;
   input += synapse0x326c0c0();
   input += synapse0x326c100();
   input += synapse0x326c140();
   input += synapse0x326c180();
   input += synapse0x326c1c0();
   input += synapse0x326c200();
   input += synapse0x326c240();
   input += synapse0x326c280();
   input += synapse0x326c2c0();
   input += synapse0x326c300();
   input += synapse0x326c340();
   input += synapse0x326c380();
   input += synapse0x326c3c0();
   input += synapse0x326c400();
   input += synapse0x326c440();
   input += synapse0x326c480();
   input += synapse0x326bf10();
   input += synapse0x326bf50();
   input += synapse0x326c5d0();
   input += synapse0x326c610();
   input += synapse0x326c650();
   input += synapse0x326c690();
   input += synapse0x326c6d0();
   input += synapse0x326c710();
   return input;
}

double NNfunction_NG_6::neuron0x326bd80() {
   double input = input0x326bd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x326c750() {
   double input = 0.741294;
   input += synapse0x326ca90();
   input += synapse0x326cad0();
   input += synapse0x326cb10();
   input += synapse0x326cb50();
   input += synapse0x326cb90();
   input += synapse0x326cbd0();
   input += synapse0x326cc10();
   input += synapse0x326cc50();
   input += synapse0x326cc90();
   input += synapse0x326ccd0();
   input += synapse0x326cd10();
   input += synapse0x326cd50();
   input += synapse0x326cd90();
   input += synapse0x326cdd0();
   input += synapse0x326ce10();
   input += synapse0x326ce50();
   input += synapse0x326c8e0();
   input += synapse0x326c920();
   input += synapse0x326cfa0();
   input += synapse0x326cfe0();
   input += synapse0x326d020();
   input += synapse0x326d060();
   input += synapse0x326d0a0();
   input += synapse0x326d0e0();
   return input;
}

double NNfunction_NG_6::neuron0x326c750() {
   double input = input0x326c750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x326d120() {
   double input = 2.99653;
   input += synapse0x326d460();
   input += synapse0x326d4a0();
   input += synapse0x326d4e0();
   input += synapse0x326d520();
   input += synapse0x326d560();
   input += synapse0x326d5a0();
   input += synapse0x326d5e0();
   input += synapse0x326d620();
   input += synapse0x326d660();
   input += synapse0x326d6a0();
   input += synapse0x326d6e0();
   input += synapse0x326d720();
   input += synapse0x326d760();
   input += synapse0x326d7a0();
   input += synapse0x326d7e0();
   input += synapse0x326d820();
   input += synapse0x326d2b0();
   input += synapse0x326d2f0();
   input += synapse0x326d970();
   input += synapse0x326d9b0();
   input += synapse0x326d9f0();
   input += synapse0x326da30();
   input += synapse0x326da70();
   input += synapse0x326dab0();
   return input;
}

double NNfunction_NG_6::neuron0x326d120() {
   double input = input0x326d120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x326daf0() {
   double input = -1.0237;
   input += synapse0x326de30();
   input += synapse0x326de70();
   input += synapse0x326deb0();
   input += synapse0x326def0();
   input += synapse0x326df30();
   input += synapse0x326df70();
   input += synapse0x326dfb0();
   input += synapse0x326dff0();
   input += synapse0x326e030();
   input += synapse0x326e070();
   input += synapse0x326e0b0();
   input += synapse0x326e0f0();
   input += synapse0x326e130();
   input += synapse0x326e170();
   input += synapse0x326e1b0();
   input += synapse0x326e1f0();
   input += synapse0x326dc80();
   input += synapse0x326dcc0();
   input += synapse0x326e340();
   input += synapse0x326e380();
   input += synapse0x326e3c0();
   input += synapse0x326e400();
   input += synapse0x326e440();
   input += synapse0x326e480();
   return input;
}

double NNfunction_NG_6::neuron0x326daf0() {
   double input = input0x326daf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x326e4c0() {
   double input = -0.237446;
   input += synapse0x326e800();
   input += synapse0x326e840();
   input += synapse0x326e880();
   input += synapse0x326e8c0();
   input += synapse0x326e900();
   input += synapse0x326e940();
   input += synapse0x326e980();
   input += synapse0x326e9c0();
   input += synapse0x326ea00();
   input += synapse0x326ea40();
   input += synapse0x326ea80();
   input += synapse0x326eac0();
   input += synapse0x326eb00();
   input += synapse0x326eb40();
   input += synapse0x326eb80();
   input += synapse0x326ebc0();
   input += synapse0x326e650();
   input += synapse0x326e690();
   input += synapse0x326ed10();
   input += synapse0x326ed50();
   input += synapse0x326ed90();
   input += synapse0x326edd0();
   input += synapse0x326ee10();
   input += synapse0x326ee50();
   return input;
}

double NNfunction_NG_6::neuron0x326e4c0() {
   double input = input0x326e4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x326ee90() {
   double input = 0.73623;
   input += synapse0x326f1d0();
   input += synapse0x326f210();
   input += synapse0x326f250();
   input += synapse0x326f290();
   input += synapse0x326f2d0();
   input += synapse0x326f310();
   input += synapse0x326f350();
   input += synapse0x326f390();
   input += synapse0x326f3d0();
   input += synapse0x326f410();
   input += synapse0x326f450();
   input += synapse0x326f490();
   input += synapse0x326f4d0();
   input += synapse0x326f510();
   input += synapse0x326f550();
   input += synapse0x326f590();
   input += synapse0x326f020();
   input += synapse0x326f060();
   input += synapse0x326f6e0();
   input += synapse0x326f720();
   input += synapse0x326f760();
   input += synapse0x326f7a0();
   input += synapse0x326f7e0();
   input += synapse0x326f820();
   return input;
}

double NNfunction_NG_6::neuron0x326ee90() {
   double input = input0x326ee90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x326f860() {
   double input = -3.4759;
   input += synapse0x326fba0();
   input += synapse0x326fbe0();
   input += synapse0x326fc20();
   input += synapse0x326fc60();
   input += synapse0x326fca0();
   input += synapse0x326fce0();
   input += synapse0x326fd20();
   input += synapse0x326fd60();
   input += synapse0x326fda0();
   input += synapse0x326fde0();
   input += synapse0x326fe20();
   input += synapse0x326fe60();
   input += synapse0x326fea0();
   input += synapse0x326fee0();
   input += synapse0x326ff20();
   input += synapse0x326ff60();
   input += synapse0x326f9f0();
   input += synapse0x326fa30();
   input += synapse0x32700b0();
   input += synapse0x32700f0();
   input += synapse0x3270130();
   input += synapse0x3270170();
   input += synapse0x32701b0();
   input += synapse0x32701f0();
   return input;
}

double NNfunction_NG_6::neuron0x326f860() {
   double input = input0x326f860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3270230() {
   double input = -0.317509;
   input += synapse0x3258ca0();
   input += synapse0x3258ce0();
   input += synapse0x3258d20();
   input += synapse0x3258d60();
   input += synapse0x3258da0();
   input += synapse0x3258de0();
   input += synapse0x3258e20();
   input += synapse0x3258e60();
   input += synapse0x3270980();
   input += synapse0x32709c0();
   input += synapse0x3270a00();
   input += synapse0x3270a40();
   input += synapse0x3270a80();
   input += synapse0x3270ac0();
   input += synapse0x3270b00();
   input += synapse0x3270b40();
   input += synapse0x32703c0();
   input += synapse0x3270400();
   input += synapse0x3270c90();
   input += synapse0x3270cd0();
   input += synapse0x3270d10();
   input += synapse0x3270d50();
   input += synapse0x3270d90();
   input += synapse0x3270dd0();
   return input;
}

double NNfunction_NG_6::neuron0x3270230() {
   double input = input0x3270230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3270e10() {
   double input = -0.551047;
   input += synapse0x3271150();
   input += synapse0x3271190();
   input += synapse0x32711d0();
   input += synapse0x3271210();
   input += synapse0x3271250();
   input += synapse0x3271290();
   input += synapse0x32712d0();
   input += synapse0x3271310();
   input += synapse0x3271350();
   input += synapse0x3271390();
   input += synapse0x32713d0();
   input += synapse0x3271410();
   input += synapse0x3271450();
   input += synapse0x3271490();
   input += synapse0x32714d0();
   input += synapse0x3271510();
   input += synapse0x3270fa0();
   input += synapse0x3270fe0();
   input += synapse0x3271660();
   input += synapse0x32716a0();
   input += synapse0x32716e0();
   input += synapse0x3271720();
   input += synapse0x3271760();
   input += synapse0x32717a0();
   return input;
}

double NNfunction_NG_6::neuron0x3270e10() {
   double input = input0x3270e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x32717e0() {
   double input = -0.0237445;
   input += synapse0x3271b20();
   input += synapse0x3271b60();
   input += synapse0x3271ba0();
   input += synapse0x3271be0();
   input += synapse0x3271c20();
   input += synapse0x3271c60();
   input += synapse0x3271ca0();
   input += synapse0x3271ce0();
   input += synapse0x3271d20();
   input += synapse0x3271d60();
   input += synapse0x3271da0();
   input += synapse0x3271de0();
   input += synapse0x3271e20();
   input += synapse0x3271e60();
   input += synapse0x3271ea0();
   input += synapse0x3271ee0();
   input += synapse0x3271970();
   input += synapse0x32719b0();
   input += synapse0x32624e0();
   input += synapse0x3262520();
   input += synapse0x3262560();
   input += synapse0x32625a0();
   input += synapse0x32625e0();
   input += synapse0x3262620();
   return input;
}

double NNfunction_NG_6::neuron0x32717e0() {
   double input = input0x32717e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3262660() {
   double input = 0.0920582;
   input += synapse0x32629a0();
   input += synapse0x32629e0();
   input += synapse0x3262a20();
   input += synapse0x3262a60();
   input += synapse0x3262aa0();
   input += synapse0x3262ae0();
   input += synapse0x3262b20();
   input += synapse0x3262b60();
   input += synapse0x3262ba0();
   input += synapse0x3262be0();
   input += synapse0x3262c20();
   input += synapse0x3262c60();
   input += synapse0x3262ca0();
   input += synapse0x3262ce0();
   input += synapse0x3262d20();
   input += synapse0x3262d60();
   input += synapse0x32627f0();
   input += synapse0x3262830();
   input += synapse0x3262eb0();
   input += synapse0x3262ef0();
   input += synapse0x3262f30();
   input += synapse0x3262f70();
   input += synapse0x3262fb0();
   input += synapse0x3262ff0();
   return input;
}

double NNfunction_NG_6::neuron0x3262660() {
   double input = input0x3262660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3263030() {
   double input = -0.746697;
   input += synapse0x3263370();
   input += synapse0x32633b0();
   input += synapse0x32633f0();
   input += synapse0x3263430();
   input += synapse0x3263470();
   input += synapse0x32634b0();
   input += synapse0x32634f0();
   input += synapse0x3263530();
   input += synapse0x3263570();
   input += synapse0x32635b0();
   input += synapse0x32635f0();
   input += synapse0x3263630();
   input += synapse0x3263670();
   input += synapse0x32636b0();
   input += synapse0x32636f0();
   input += synapse0x3263730();
   input += synapse0x32631c0();
   input += synapse0x3263200();
   input += synapse0x3263880();
   input += synapse0x32638c0();
   input += synapse0x3263900();
   input += synapse0x3263940();
   input += synapse0x3263980();
   input += synapse0x32639c0();
   return input;
}

double NNfunction_NG_6::neuron0x3263030() {
   double input = input0x3263030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3263a00() {
   double input = 0.0661919;
   input += synapse0x3263d40();
   input += synapse0x3263d80();
   input += synapse0x3263dc0();
   input += synapse0x3263e00();
   input += synapse0x3263e40();
   input += synapse0x3263e80();
   input += synapse0x3263ec0();
   input += synapse0x3263f00();
   input += synapse0x3263f40();
   input += synapse0x3263f80();
   input += synapse0x3263fc0();
   input += synapse0x3264000();
   input += synapse0x3264040();
   input += synapse0x3264080();
   input += synapse0x32640c0();
   input += synapse0x3264100();
   input += synapse0x3263b90();
   input += synapse0x3263bd0();
   input += synapse0x3264250();
   input += synapse0x3264290();
   input += synapse0x32642d0();
   input += synapse0x3264310();
   input += synapse0x3264350();
   input += synapse0x3264390();
   return input;
}

double NNfunction_NG_6::neuron0x3263a00() {
   double input = input0x3263a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3276040() {
   double input = -0.58761;
   input += synapse0x3276260();
   input += synapse0x32762a0();
   input += synapse0x32762e0();
   input += synapse0x3276320();
   input += synapse0x3276360();
   input += synapse0x32763a0();
   input += synapse0x32763e0();
   input += synapse0x3276420();
   input += synapse0x3276460();
   input += synapse0x32764a0();
   input += synapse0x32764e0();
   input += synapse0x3276520();
   input += synapse0x3276560();
   input += synapse0x32765a0();
   input += synapse0x32765e0();
   input += synapse0x3276620();
   input += synapse0x32643d0();
   input += synapse0x3264410();
   input += synapse0x3276770();
   input += synapse0x32767b0();
   input += synapse0x32767f0();
   input += synapse0x3276830();
   input += synapse0x3276870();
   input += synapse0x32768b0();
   return input;
}

double NNfunction_NG_6::neuron0x3276040() {
   double input = input0x3276040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x32768f0() {
   double input = -0.414217;
   input += synapse0x3276c30();
   input += synapse0x3276c70();
   input += synapse0x3276cb0();
   input += synapse0x3276cf0();
   input += synapse0x3276d30();
   input += synapse0x3276d70();
   input += synapse0x3276db0();
   input += synapse0x3276df0();
   input += synapse0x3276e30();
   input += synapse0x3276e70();
   input += synapse0x3276eb0();
   input += synapse0x3276ef0();
   input += synapse0x3276f30();
   input += synapse0x3276f70();
   input += synapse0x3276fb0();
   input += synapse0x3276ff0();
   input += synapse0x3276a80();
   input += synapse0x3276ac0();
   input += synapse0x3277140();
   input += synapse0x3277180();
   input += synapse0x32771c0();
   input += synapse0x3277200();
   input += synapse0x3277240();
   input += synapse0x3277280();
   return input;
}

double NNfunction_NG_6::neuron0x32768f0() {
   double input = input0x32768f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x32772c0() {
   double input = -0.0976985;
   input += synapse0x3277600();
   input += synapse0x3277640();
   input += synapse0x3277680();
   input += synapse0x32776c0();
   input += synapse0x3277700();
   input += synapse0x3277740();
   input += synapse0x3277780();
   input += synapse0x32777c0();
   input += synapse0x3277800();
   input += synapse0x3277840();
   input += synapse0x3277880();
   input += synapse0x32778c0();
   input += synapse0x3277900();
   input += synapse0x3277940();
   input += synapse0x3277980();
   input += synapse0x32779c0();
   input += synapse0x3277450();
   input += synapse0x3277490();
   input += synapse0x3277b10();
   input += synapse0x3277b50();
   input += synapse0x3277b90();
   input += synapse0x3277bd0();
   input += synapse0x3277c10();
   input += synapse0x3277c50();
   return input;
}

double NNfunction_NG_6::neuron0x32772c0() {
   double input = input0x32772c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3277c90() {
   double input = 0.323015;
   input += synapse0x3277fd0();
   input += synapse0x3278010();
   input += synapse0x3278050();
   input += synapse0x3278090();
   input += synapse0x32780d0();
   input += synapse0x3278110();
   input += synapse0x3278150();
   input += synapse0x3278190();
   input += synapse0x32781d0();
   input += synapse0x3278210();
   input += synapse0x3278250();
   input += synapse0x3278290();
   input += synapse0x32782d0();
   input += synapse0x3278310();
   input += synapse0x3278350();
   input += synapse0x3278390();
   input += synapse0x3277e20();
   input += synapse0x3277e60();
   input += synapse0x32784e0();
   input += synapse0x3278520();
   input += synapse0x3278560();
   input += synapse0x32785a0();
   input += synapse0x32785e0();
   input += synapse0x3278620();
   return input;
}

double NNfunction_NG_6::neuron0x3277c90() {
   double input = input0x3277c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x327ee90() {
   double input = 1.45077;
   input += synapse0x3254bc0();
   input += synapse0x3254c00();
   input += synapse0x32560d0();
   input += synapse0x3256110();
   input += synapse0x3256aa0();
   input += synapse0x3256ae0();
   input += synapse0x3257870();
   input += synapse0x32578b0();
   input += synapse0x3258240();
   input += synapse0x3258280();
   input += synapse0x3258c10();
   input += synapse0x3258c50();
   input += synapse0x32596f0();
   input += synapse0x3259730();
   input += synapse0x325a0c0();
   input += synapse0x325a100();
   input += synapse0x32571a0();
   input += synapse0x32571e0();
   input += synapse0x325bc70();
   input += synapse0x325bcb0();
   input += synapse0x325c640();
   input += synapse0x325c680();
   input += synapse0x325d010();
   input += synapse0x325d050();
   input += synapse0x325d9e0();
   input += synapse0x325da20();
   input += synapse0x3251b50();
   input += synapse0x3251b90();
   input += synapse0x325fad0();
   input += synapse0x325fb10();
   input += synapse0x32604a0();
   input += synapse0x32604e0();
   input += synapse0x3260e70();
   input += synapse0x3260eb0();
   input += synapse0x3261840();
   input += synapse0x3261880();
   input += synapse0x3262210();
   input += synapse0x3262250();
   input += synapse0x325ad60();
   input += synapse0x325ada0();
   input += synapse0x3264610();
   input += synapse0x3264650();
   input += synapse0x3264fa0();
   input += synapse0x3264fe0();
   input += synapse0x3265970();
   input += synapse0x32659b0();
   input += synapse0x3266340();
   input += synapse0x3266380();
   input += synapse0x3266d10();
   input += synapse0x3266d50();
   return input;
}

double NNfunction_NG_6::neuron0x327ee90() {
   double input = input0x327ee90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x327f230() {
   double input = -0.246651;
   input += synapse0x3269450();
   input += synapse0x3269490();
   input += synapse0x325ea10();
   input += synapse0x325ea50();
   input += synapse0x326c030();
   input += synapse0x326c070();
   input += synapse0x326ca00();
   input += synapse0x326ca40();
   input += synapse0x326d3d0();
   input += synapse0x326d410();
   input += synapse0x326dda0();
   input += synapse0x326dde0();
   input += synapse0x326e770();
   input += synapse0x326e7b0();
   input += synapse0x326f140();
   input += synapse0x326f180();
   input += synapse0x326fb10();
   input += synapse0x326fb50();
   input += synapse0x32704e0();
   input += synapse0x3270520();
   input += synapse0x32710c0();
   input += synapse0x3271100();
   input += synapse0x3271a90();
   input += synapse0x3271ad0();
   input += synapse0x3262910();
   input += synapse0x3262950();
   input += synapse0x32632e0();
   input += synapse0x3263320();
   input += synapse0x3263cb0();
   input += synapse0x3263cf0();
   input += synapse0x32761d0();
   input += synapse0x3276210();
   input += synapse0x3276ba0();
   input += synapse0x3276be0();
   input += synapse0x3277570();
   input += synapse0x32775b0();
   input += synapse0x3277f40();
   input += synapse0x3277f80();
   input += synapse0x3253e30();
   input += synapse0x3253e70();
   input += synapse0x32676e0();
   input += synapse0x3267720();
   input += synapse0x3278660();
   input += synapse0x32786a0();
   input += synapse0x32786e0();
   input += synapse0x3278720();
   input += synapse0x327f5d0();
   input += synapse0x327f610();
   input += synapse0x327f650();
   input += synapse0x327f690();
   return input;
}

double NNfunction_NG_6::neuron0x327f230() {
   double input = input0x327f230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x327f6d0() {
   double input = -0.207484;
   input += synapse0x327fa10();
   input += synapse0x327fa50();
   input += synapse0x327fa90();
   input += synapse0x327fad0();
   input += synapse0x327fb10();
   input += synapse0x327fb50();
   input += synapse0x327fb90();
   input += synapse0x327fbd0();
   input += synapse0x327fc10();
   input += synapse0x327fc50();
   input += synapse0x327fc90();
   input += synapse0x327fcd0();
   input += synapse0x327fd10();
   input += synapse0x327fd50();
   input += synapse0x327fd90();
   input += synapse0x327fdd0();
   input += synapse0x327f860();
   input += synapse0x327f8a0();
   input += synapse0x327ff20();
   input += synapse0x327ff60();
   input += synapse0x327ffa0();
   input += synapse0x327ffe0();
   input += synapse0x3280020();
   input += synapse0x3280060();
   input += synapse0x32800a0();
   input += synapse0x32800e0();
   input += synapse0x3280120();
   input += synapse0x3280160();
   input += synapse0x32801a0();
   input += synapse0x32801e0();
   input += synapse0x3280220();
   input += synapse0x3280260();
   input += synapse0x327fe10();
   input += synapse0x327fe50();
   input += synapse0x327fe90();
   input += synapse0x327fed0();
   input += synapse0x32804b0();
   input += synapse0x32804f0();
   input += synapse0x3280530();
   input += synapse0x3280570();
   input += synapse0x32805b0();
   input += synapse0x32805f0();
   input += synapse0x3280630();
   input += synapse0x3280670();
   input += synapse0x32806b0();
   input += synapse0x32806f0();
   input += synapse0x3280730();
   input += synapse0x3280770();
   input += synapse0x32807b0();
   input += synapse0x32807f0();
   return input;
}

double NNfunction_NG_6::neuron0x327f6d0() {
   double input = input0x327f6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3280830() {
   double input = -0.611619;
   input += synapse0x3280b70();
   input += synapse0x3280bb0();
   input += synapse0x3280bf0();
   input += synapse0x3280c30();
   input += synapse0x3280c70();
   input += synapse0x3280cb0();
   input += synapse0x3280cf0();
   input += synapse0x3280d30();
   input += synapse0x3280d70();
   input += synapse0x3280db0();
   input += synapse0x3280df0();
   input += synapse0x3280e30();
   input += synapse0x3280e70();
   input += synapse0x3280eb0();
   input += synapse0x3280ef0();
   input += synapse0x3280f30();
   input += synapse0x32809c0();
   input += synapse0x3280a00();
   input += synapse0x3281080();
   input += synapse0x32810c0();
   input += synapse0x3281100();
   input += synapse0x3281140();
   input += synapse0x3281180();
   input += synapse0x32811c0();
   input += synapse0x3281200();
   input += synapse0x3281240();
   input += synapse0x3281280();
   input += synapse0x32812c0();
   input += synapse0x3281300();
   input += synapse0x3281340();
   input += synapse0x3281380();
   input += synapse0x32813c0();
   input += synapse0x3280f70();
   input += synapse0x3280fb0();
   input += synapse0x3280ff0();
   input += synapse0x3281030();
   input += synapse0x3281610();
   input += synapse0x3281650();
   input += synapse0x3281690();
   input += synapse0x32816d0();
   input += synapse0x3281710();
   input += synapse0x3281750();
   input += synapse0x3281790();
   input += synapse0x32817d0();
   input += synapse0x3281810();
   input += synapse0x3281850();
   input += synapse0x3281890();
   input += synapse0x32818d0();
   input += synapse0x3281910();
   input += synapse0x3281950();
   return input;
}

double NNfunction_NG_6::neuron0x3280830() {
   double input = input0x3280830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3281990() {
   double input = -0.0181295;
   input += synapse0x3281cd0();
   input += synapse0x3281d10();
   input += synapse0x3281d50();
   input += synapse0x3281d90();
   input += synapse0x3281dd0();
   input += synapse0x3281e10();
   input += synapse0x3281e50();
   input += synapse0x3281e90();
   input += synapse0x3281ed0();
   input += synapse0x3281f10();
   input += synapse0x3281f50();
   input += synapse0x3281f90();
   input += synapse0x3281fd0();
   input += synapse0x3282010();
   input += synapse0x3282050();
   input += synapse0x3282090();
   input += synapse0x3281b20();
   input += synapse0x3281b60();
   input += synapse0x32821e0();
   input += synapse0x3282220();
   input += synapse0x3282260();
   input += synapse0x32822a0();
   input += synapse0x32822e0();
   input += synapse0x3282320();
   input += synapse0x3282360();
   input += synapse0x32823a0();
   input += synapse0x32823e0();
   input += synapse0x3282420();
   input += synapse0x3282460();
   input += synapse0x32824a0();
   input += synapse0x32824e0();
   input += synapse0x3282520();
   input += synapse0x32820d0();
   input += synapse0x3282110();
   input += synapse0x3282150();
   input += synapse0x3282190();
   input += synapse0x3282770();
   input += synapse0x32827b0();
   input += synapse0x32827f0();
   input += synapse0x3282830();
   input += synapse0x3282870();
   input += synapse0x32828b0();
   input += synapse0x32828f0();
   input += synapse0x3282930();
   input += synapse0x3282970();
   input += synapse0x32829b0();
   input += synapse0x32829f0();
   input += synapse0x3282a30();
   input += synapse0x3282a70();
   input += synapse0x3282ab0();
   return input;
}

double NNfunction_NG_6::neuron0x3281990() {
   double input = input0x3281990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_6::input0x3282af0() {
   double input = 6.60748;
   input += synapse0x3253bd0();
   input += synapse0x3282d10();
   input += synapse0x3282d50();
   input += synapse0x3282d90();
   input += synapse0x3282dd0();
   return input;
}

double NNfunction_NG_6::neuron0x3282af0() {
   double input = input0x3282af0();
   return (input * 1)+0;
}

double NNfunction_NG_6::synapse0x300ea20() {
   return (neuron0x324ebb0()*-0.0129453);
}

double NNfunction_NG_6::synapse0x324ea70() {
   return (neuron0x324eef0()*0.0117039);
}

double NNfunction_NG_6::synapse0x324eab0() {
   return (neuron0x324f230()*-2.04765);
}

double NNfunction_NG_6::synapse0x3253ec0() {
   return (neuron0x324f570()*0.0396874);
}

double NNfunction_NG_6::synapse0x3253f00() {
   return (neuron0x324f8b0()*0.00125578);
}

double NNfunction_NG_6::synapse0x3253f40() {
   return (neuron0x324fbf0()*0.00599506);
}

double NNfunction_NG_6::synapse0x3253f80() {
   return (neuron0x324ff30()*-0.0120942);
}

double NNfunction_NG_6::synapse0x3253fc0() {
   return (neuron0x3250270()*-0.0185548);
}

double NNfunction_NG_6::synapse0x3254000() {
   return (neuron0x32505b0()*-0.00820724);
}

double NNfunction_NG_6::synapse0x3254040() {
   return (neuron0x32508f0()*0.00080266);
}

double NNfunction_NG_6::synapse0x3254080() {
   return (neuron0x3250c30()*-0.00131783);
}

double NNfunction_NG_6::synapse0x32540c0() {
   return (neuron0x3250f70()*0.0274273);
}

double NNfunction_NG_6::synapse0x3254100() {
   return (neuron0x32512b0()*0.00313521);
}

double NNfunction_NG_6::synapse0x3254140() {
   return (neuron0x32515f0()*-0.000235694);
}

double NNfunction_NG_6::synapse0x3254180() {
   return (neuron0x3251930()*0.000130267);
}

double NNfunction_NG_6::synapse0x32541c0() {
   return (neuron0x3251c70()*-0.000469683);
}

double NNfunction_NG_6::synapse0x324e9e0() {
   return (neuron0x3251fb0()*0.00859974);
}

double NNfunction_NG_6::synapse0x324ea20() {
   return (neuron0x3252510()*0.00912588);
}

double NNfunction_NG_6::synapse0x3000280() {
   return (neuron0x3252730()*0.00646084);
}

double NNfunction_NG_6::synapse0x30002c0() {
   return (neuron0x3252a70()*0.000686201);
}

double NNfunction_NG_6::synapse0x3254420() {
   return (neuron0x3252db0()*0.0070023);
}

double NNfunction_NG_6::synapse0x3254460() {
   return (neuron0x32530f0()*0.00298017);
}

double NNfunction_NG_6::synapse0x32544a0() {
   return (neuron0x3253430()*0.00628646);
}

double NNfunction_NG_6::synapse0x32544e0() {
   return (neuron0x3253770()*1.95732);
}

double NNfunction_NG_6::synapse0x3254860() {
   return (neuron0x324ebb0()*-0.0410165);
}

double NNfunction_NG_6::synapse0x32548a0() {
   return (neuron0x324eef0()*0.018528);
}

double NNfunction_NG_6::synapse0x32548e0() {
   return (neuron0x324f230()*-5.50134);
}

double NNfunction_NG_6::synapse0x3254920() {
   return (neuron0x324f570()*-0.00712515);
}

double NNfunction_NG_6::synapse0x3254960() {
   return (neuron0x324f8b0()*0.0145132);
}

double NNfunction_NG_6::synapse0x32549a0() {
   return (neuron0x324fbf0()*-0.00357194);
}

double NNfunction_NG_6::synapse0x32549e0() {
   return (neuron0x324ff30()*-0.00873865);
}

double NNfunction_NG_6::synapse0x3254a20() {
   return (neuron0x3250270()*-0.0129336);
}

double NNfunction_NG_6::synapse0x3254a60() {
   return (neuron0x32505b0()*0.0117885);
}

double NNfunction_NG_6::synapse0x3254310() {
   return (neuron0x32508f0()*-0.00638922);
}

double NNfunction_NG_6::synapse0x3254350() {
   return (neuron0x3250c30()*0.00916104);
}

double NNfunction_NG_6::synapse0x3254390() {
   return (neuron0x3250f70()*-0.0248705);
}

double NNfunction_NG_6::synapse0x32543d0() {
   return (neuron0x32512b0()*-0.0111902);
}

double NNfunction_NG_6::synapse0x3254cb0() {
   return (neuron0x32515f0()*-0.0102605);
}

double NNfunction_NG_6::synapse0x3254cf0() {
   return (neuron0x3251930()*-0.0028898);
}

double NNfunction_NG_6::synapse0x3254d30() {
   return (neuron0x3251c70()*-0.0021002);
}

double NNfunction_NG_6::synapse0x32546b0() {
   return (neuron0x3251fb0()*0.0114552);
}

double NNfunction_NG_6::synapse0x32546f0() {
   return (neuron0x3252510()*0.0038087);
}

double NNfunction_NG_6::synapse0x3254e80() {
   return (neuron0x3252730()*0.00409628);
}

double NNfunction_NG_6::synapse0x3254ec0() {
   return (neuron0x3252a70()*0.000478512);
}

double NNfunction_NG_6::synapse0x3254f00() {
   return (neuron0x3252db0()*0.00876639);
}

double NNfunction_NG_6::synapse0x3254f40() {
   return (neuron0x32530f0()*0.0139392);
}

double NNfunction_NG_6::synapse0x3254f80() {
   return (neuron0x3253430()*-0.0074535);
}

double NNfunction_NG_6::synapse0x3254fc0() {
   return (neuron0x3253770()*-3.35558);
}

double NNfunction_NG_6::synapse0x3255340() {
   return (neuron0x324ebb0()*0.0473145);
}

double NNfunction_NG_6::synapse0x3255380() {
   return (neuron0x324eef0()*0.00798973);
}

double NNfunction_NG_6::synapse0x32553c0() {
   return (neuron0x324f230()*0.967365);
}

double NNfunction_NG_6::synapse0x3255400() {
   return (neuron0x324f570()*-0.0855346);
}

double NNfunction_NG_6::synapse0x3255440() {
   return (neuron0x324f8b0()*0.0299859);
}

double NNfunction_NG_6::synapse0x3255480() {
   return (neuron0x324fbf0()*0.0101984);
}

double NNfunction_NG_6::synapse0x32554c0() {
   return (neuron0x324ff30()*0.00439307);
}

double NNfunction_NG_6::synapse0x3255500() {
   return (neuron0x3250270()*-0.0113819);
}

double NNfunction_NG_6::synapse0x3255540() {
   return (neuron0x32505b0()*0.00478487);
}

double NNfunction_NG_6::synapse0x3255580() {
   return (neuron0x32508f0()*-0.0132222);
}

double NNfunction_NG_6::synapse0x32555c0() {
   return (neuron0x3250c30()*-0.0127871);
}

double NNfunction_NG_6::synapse0x3255600() {
   return (neuron0x3250f70()*-0.917041);
}

double NNfunction_NG_6::synapse0x3255640() {
   return (neuron0x32512b0()*0.0666018);
}

double NNfunction_NG_6::synapse0x3255680() {
   return (neuron0x32515f0()*-0.0788432);
}

double NNfunction_NG_6::synapse0x32556c0() {
   return (neuron0x3251930()*0.0678978);
}

double NNfunction_NG_6::synapse0x3255700() {
   return (neuron0x3251c70()*0.0364241);
}

double NNfunction_NG_6::synapse0x3255190() {
   return (neuron0x3251fb0()*-0.0472366);
}

double NNfunction_NG_6::synapse0x32551d0() {
   return (neuron0x3252510()*0.0879358);
}

double NNfunction_NG_6::synapse0x300e0f0() {
   return (neuron0x3252730()*0.0488416);
}

double NNfunction_NG_6::synapse0x300e130() {
   return (neuron0x3252a70()*0.00929602);
}

double NNfunction_NG_6::synapse0x323dc40() {
   return (neuron0x3252db0()*0.00575082);
}

double NNfunction_NG_6::synapse0x323dc80() {
   return (neuron0x32530f0()*0.00371691);
}

double NNfunction_NG_6::synapse0x323dcc0() {
   return (neuron0x3253430()*-0.00745655);
}

double NNfunction_NG_6::synapse0x324eaf0() {
   return (neuron0x3253770()*-0.413361);
}

double NNfunction_NG_6::synapse0x3254c50() {
   return (neuron0x324ebb0()*-0.0391672);
}

double NNfunction_NG_6::synapse0x324eb30() {
   return (neuron0x324eef0()*-0.0198429);
}

double NNfunction_NG_6::synapse0x324eb70() {
   return (neuron0x324f230()*0.572451);
}

double NNfunction_NG_6::synapse0x3255850() {
   return (neuron0x324f570()*-0.0255796);
}

double NNfunction_NG_6::synapse0x3255890() {
   return (neuron0x324f8b0()*-0.0149439);
}

double NNfunction_NG_6::synapse0x32558d0() {
   return (neuron0x324fbf0()*0.00551208);
}

double NNfunction_NG_6::synapse0x3255910() {
   return (neuron0x324ff30()*-0.014987);
}

double NNfunction_NG_6::synapse0x3255950() {
   return (neuron0x3250270()*0.00349104);
}

double NNfunction_NG_6::synapse0x3255990() {
   return (neuron0x32505b0()*0.00472163);
}

double NNfunction_NG_6::synapse0x32559d0() {
   return (neuron0x32508f0()*-0.0105202);
}

double NNfunction_NG_6::synapse0x3255a10() {
   return (neuron0x3250c30()*-0.0139676);
}

double NNfunction_NG_6::synapse0x3255a50() {
   return (neuron0x3250f70()*0.996309);
}

double NNfunction_NG_6::synapse0x3255a90() {
   return (neuron0x32512b0()*-0.122309);
}

double NNfunction_NG_6::synapse0x3255ad0() {
   return (neuron0x32515f0()*0.0335478);
}

double NNfunction_NG_6::synapse0x3255b10() {
   return (neuron0x3251930()*0.00579361);
}

double NNfunction_NG_6::synapse0x3255b50() {
   return (neuron0x3251c70()*0.0125293);
}

double NNfunction_NG_6::synapse0x3254aa0() {
   return (neuron0x3251fb0()*0.00998031);
}

double NNfunction_NG_6::synapse0x3254ae0() {
   return (neuron0x3252510()*0.00499258);
}

double NNfunction_NG_6::synapse0x3255ca0() {
   return (neuron0x3252730()*0.0106969);
}

double NNfunction_NG_6::synapse0x3255ce0() {
   return (neuron0x3252a70()*-0.00707639);
}

double NNfunction_NG_6::synapse0x3255d20() {
   return (neuron0x3252db0()*0.0126142);
}

double NNfunction_NG_6::synapse0x3255d60() {
   return (neuron0x32530f0()*-0.00716611);
}

double NNfunction_NG_6::synapse0x3255da0() {
   return (neuron0x3253430()*-0.0134079);
}

double NNfunction_NG_6::synapse0x3255de0() {
   return (neuron0x3253770()*0.733936);
}

double NNfunction_NG_6::synapse0x3256160() {
   return (neuron0x324ebb0()*-0.00186146);
}

double NNfunction_NG_6::synapse0x32561a0() {
   return (neuron0x324eef0()*0.00306321);
}

double NNfunction_NG_6::synapse0x32561e0() {
   return (neuron0x324f230()*0.0394376);
}

double NNfunction_NG_6::synapse0x3256220() {
   return (neuron0x324f570()*1.16323);
}

double NNfunction_NG_6::synapse0x3256260() {
   return (neuron0x324f8b0()*0.000949663);
}

double NNfunction_NG_6::synapse0x32562a0() {
   return (neuron0x324fbf0()*0.00278242);
}

double NNfunction_NG_6::synapse0x32562e0() {
   return (neuron0x324ff30()*0.00556821);
}

double NNfunction_NG_6::synapse0x3256320() {
   return (neuron0x3250270()*-0.00161634);
}

double NNfunction_NG_6::synapse0x3256360() {
   return (neuron0x32505b0()*0.00713089);
}

double NNfunction_NG_6::synapse0x32563a0() {
   return (neuron0x32508f0()*0.00339815);
}

double NNfunction_NG_6::synapse0x32563e0() {
   return (neuron0x3250c30()*0.000266624);
}

double NNfunction_NG_6::synapse0x3256420() {
   return (neuron0x3250f70()*-0.0148897);
}

double NNfunction_NG_6::synapse0x3256460() {
   return (neuron0x32512b0()*-0.0339744);
}

double NNfunction_NG_6::synapse0x32564a0() {
   return (neuron0x32515f0()*0.00103043);
}

double NNfunction_NG_6::synapse0x32564e0() {
   return (neuron0x3251930()*0.00429516);
}

double NNfunction_NG_6::synapse0x3256520() {
   return (neuron0x3251c70()*0.00195587);
}

double NNfunction_NG_6::synapse0x3255fb0() {
   return (neuron0x3251fb0()*-0.00187778);
}

double NNfunction_NG_6::synapse0x3255ff0() {
   return (neuron0x3252510()*0.00694629);
}

double NNfunction_NG_6::synapse0x3256670() {
   return (neuron0x3252730()*0.00368724);
}

double NNfunction_NG_6::synapse0x32566b0() {
   return (neuron0x3252a70()*0.00503519);
}

double NNfunction_NG_6::synapse0x32566f0() {
   return (neuron0x3252db0()*-0.000214929);
}

double NNfunction_NG_6::synapse0x3256730() {
   return (neuron0x32530f0()*0.00393213);
}

double NNfunction_NG_6::synapse0x3256770() {
   return (neuron0x3253430()*6.00449e-05);
}

double NNfunction_NG_6::synapse0x32567b0() {
   return (neuron0x3253770()*-0.0377972);
}

double NNfunction_NG_6::synapse0x3256b30() {
   return (neuron0x324ebb0()*-0.00438021);
}

double NNfunction_NG_6::synapse0x3256b70() {
   return (neuron0x324eef0()*0.00824071);
}

double NNfunction_NG_6::synapse0x3256bb0() {
   return (neuron0x324f230()*-0.0899809);
}

double NNfunction_NG_6::synapse0x3256bf0() {
   return (neuron0x324f570()*0.104245);
}

double NNfunction_NG_6::synapse0x3256c30() {
   return (neuron0x324f8b0()*-0.0128704);
}

double NNfunction_NG_6::synapse0x3256c70() {
   return (neuron0x324fbf0()*0.000862051);
}

double NNfunction_NG_6::synapse0x3256cb0() {
   return (neuron0x324ff30()*0.00524125);
}

double NNfunction_NG_6::synapse0x3256cf0() {
   return (neuron0x3250270()*-0.0029613);
}

double NNfunction_NG_6::synapse0x3256d30() {
   return (neuron0x32505b0()*0.0135058);
}

double NNfunction_NG_6::synapse0x300e480() {
   return (neuron0x32508f0()*-0.00317625);
}

double NNfunction_NG_6::synapse0x300e4c0() {
   return (neuron0x3250c30()*0.00202939);
}

double NNfunction_NG_6::synapse0x300e500() {
   return (neuron0x3250f70()*-0.286331);
}

double NNfunction_NG_6::synapse0x300e540() {
   return (neuron0x32512b0()*-0.0585807);
}

double NNfunction_NG_6::synapse0x300e580() {
   return (neuron0x32515f0()*0.00166425);
}

double NNfunction_NG_6::synapse0x300e5c0() {
   return (neuron0x3251930()*-0.0146929);
}

double NNfunction_NG_6::synapse0x300e600() {
   return (neuron0x3251c70()*-0.0116954);
}

double NNfunction_NG_6::synapse0x3256980() {
   return (neuron0x3251fb0()*-0.00763925);
}

double NNfunction_NG_6::synapse0x32569c0() {
   return (neuron0x3252510()*-0.00678294);
}

double NNfunction_NG_6::synapse0x300e750() {
   return (neuron0x3252730()*-0.00488542);
}

double NNfunction_NG_6::synapse0x300e790() {
   return (neuron0x3252a70()*-0.00104332);
}

double NNfunction_NG_6::synapse0x300e7d0() {
   return (neuron0x3252db0()*-0.00583285);
}

double NNfunction_NG_6::synapse0x300e810() {
   return (neuron0x32530f0()*0.00434588);
}

double NNfunction_NG_6::synapse0x300e850() {
   return (neuron0x3253430()*-0.00305413);
}

double NNfunction_NG_6::synapse0x3257580() {
   return (neuron0x3253770()*0.411085);
}

double NNfunction_NG_6::synapse0x3257900() {
   return (neuron0x324ebb0()*0.0487232);
}

double NNfunction_NG_6::synapse0x3257940() {
   return (neuron0x324eef0()*-0.0347604);
}

double NNfunction_NG_6::synapse0x3257980() {
   return (neuron0x324f230()*-0.261915);
}

double NNfunction_NG_6::synapse0x32579c0() {
   return (neuron0x324f570()*1.06417);
}

double NNfunction_NG_6::synapse0x3257a00() {
   return (neuron0x324f8b0()*-0.0294189);
}

double NNfunction_NG_6::synapse0x3257a40() {
   return (neuron0x324fbf0()*0.0621128);
}

double NNfunction_NG_6::synapse0x3257a80() {
   return (neuron0x324ff30()*0.119247);
}

double NNfunction_NG_6::synapse0x3257ac0() {
   return (neuron0x3250270()*0.0454366);
}

double NNfunction_NG_6::synapse0x3257b00() {
   return (neuron0x32505b0()*-0.130617);
}

double NNfunction_NG_6::synapse0x3257b40() {
   return (neuron0x32508f0()*-0.054967);
}

double NNfunction_NG_6::synapse0x3257b80() {
   return (neuron0x3250c30()*0.017433);
}

double NNfunction_NG_6::synapse0x3257bc0() {
   return (neuron0x3250f70()*0.141289);
}

double NNfunction_NG_6::synapse0x3257c00() {
   return (neuron0x32512b0()*0.071187);
}

double NNfunction_NG_6::synapse0x3257c40() {
   return (neuron0x32515f0()*-0.0947583);
}

double NNfunction_NG_6::synapse0x3257c80() {
   return (neuron0x3251930()*0.0148593);
}

double NNfunction_NG_6::synapse0x3257cc0() {
   return (neuron0x3251c70()*0.033829);
}

double NNfunction_NG_6::synapse0x3257750() {
   return (neuron0x3251fb0()*-0.0536923);
}

double NNfunction_NG_6::synapse0x3257790() {
   return (neuron0x3252510()*0.0474739);
}

double NNfunction_NG_6::synapse0x3257e10() {
   return (neuron0x3252730()*-0.0501906);
}

double NNfunction_NG_6::synapse0x3257e50() {
   return (neuron0x3252a70()*0.0513836);
}

double NNfunction_NG_6::synapse0x3257e90() {
   return (neuron0x3252db0()*-0.0104541);
}

double NNfunction_NG_6::synapse0x3257ed0() {
   return (neuron0x32530f0()*0.0561037);
}

double NNfunction_NG_6::synapse0x3257f10() {
   return (neuron0x3253430()*0.00801272);
}

double NNfunction_NG_6::synapse0x3257f50() {
   return (neuron0x3253770()*1.5398);
}

double NNfunction_NG_6::synapse0x32582d0() {
   return (neuron0x324ebb0()*-0.0103617);
}

double NNfunction_NG_6::synapse0x3258310() {
   return (neuron0x324eef0()*-0.00145949);
}

double NNfunction_NG_6::synapse0x3258350() {
   return (neuron0x324f230()*0.0489745);
}

double NNfunction_NG_6::synapse0x3258390() {
   return (neuron0x324f570()*-0.0936513);
}

double NNfunction_NG_6::synapse0x32583d0() {
   return (neuron0x324f8b0()*0.00450762);
}

double NNfunction_NG_6::synapse0x3258410() {
   return (neuron0x324fbf0()*0.00265803);
}

double NNfunction_NG_6::synapse0x3258450() {
   return (neuron0x324ff30()*-0.00531543);
}

double NNfunction_NG_6::synapse0x3258490() {
   return (neuron0x3250270()*0.0044812);
}

double NNfunction_NG_6::synapse0x32584d0() {
   return (neuron0x32505b0()*-0.00175824);
}

double NNfunction_NG_6::synapse0x3258510() {
   return (neuron0x32508f0()*-0.00928044);
}

double NNfunction_NG_6::synapse0x3258550() {
   return (neuron0x3250c30()*-0.00567658);
}

double NNfunction_NG_6::synapse0x3258590() {
   return (neuron0x3250f70()*0.047632);
}

double NNfunction_NG_6::synapse0x32585d0() {
   return (neuron0x32512b0()*-0.000148993);
}

double NNfunction_NG_6::synapse0x3258610() {
   return (neuron0x32515f0()*-0.000328879);
}

double NNfunction_NG_6::synapse0x3258650() {
   return (neuron0x3251930()*0.00651966);
}

double NNfunction_NG_6::synapse0x3258690() {
   return (neuron0x3251c70()*0.00897641);
}

double NNfunction_NG_6::synapse0x3258120() {
   return (neuron0x3251fb0()*0.000250126);
}

double NNfunction_NG_6::synapse0x3258160() {
   return (neuron0x3252510()*0.000217849);
}

double NNfunction_NG_6::synapse0x32587e0() {
   return (neuron0x3252730()*0.00451674);
}

double NNfunction_NG_6::synapse0x3258820() {
   return (neuron0x3252a70()*0.00380909);
}

double NNfunction_NG_6::synapse0x3258860() {
   return (neuron0x3252db0()*0.00601586);
}

double NNfunction_NG_6::synapse0x32588a0() {
   return (neuron0x32530f0()*0.00223578);
}

double NNfunction_NG_6::synapse0x32588e0() {
   return (neuron0x3253430()*-0.00117772);
}

double NNfunction_NG_6::synapse0x3258920() {
   return (neuron0x3253770()*0.657995);
}

double NNfunction_NG_6::synapse0x3252400() {
   return (neuron0x324ebb0()*0.19006);
}

double NNfunction_NG_6::synapse0x3252440() {
   return (neuron0x324eef0()*0.181523);
}

double NNfunction_NG_6::synapse0x3252480() {
   return (neuron0x324f230()*0.0242864);
}

double NNfunction_NG_6::synapse0x32524c0() {
   return (neuron0x324f570()*0.807849);
}

double NNfunction_NG_6::synapse0x3258eb0() {
   return (neuron0x324f8b0()*-0.17387);
}

double NNfunction_NG_6::synapse0x3258ef0() {
   return (neuron0x324fbf0()*0.272921);
}

double NNfunction_NG_6::synapse0x3258f30() {
   return (neuron0x324ff30()*-0.195111);
}

double NNfunction_NG_6::synapse0x3258f70() {
   return (neuron0x3250270()*-0.17577);
}

double NNfunction_NG_6::synapse0x3258fb0() {
   return (neuron0x32505b0()*0.142938);
}

double NNfunction_NG_6::synapse0x3258ff0() {
   return (neuron0x32508f0()*-0.159096);
}

double NNfunction_NG_6::synapse0x3259030() {
   return (neuron0x3250c30()*0.203406);
}

double NNfunction_NG_6::synapse0x3259070() {
   return (neuron0x3250f70()*-0.0444466);
}

double NNfunction_NG_6::synapse0x32590b0() {
   return (neuron0x32512b0()*0.230204);
}

double NNfunction_NG_6::synapse0x32590f0() {
   return (neuron0x32515f0()*0.135079);
}

double NNfunction_NG_6::synapse0x3259130() {
   return (neuron0x3251930()*-0.144525);
}

double NNfunction_NG_6::synapse0x3259170() {
   return (neuron0x3251c70()*-0.119271);
}

double NNfunction_NG_6::synapse0x3258af0() {
   return (neuron0x3251fb0()*0.0843606);
}

double NNfunction_NG_6::synapse0x3258b30() {
   return (neuron0x3252510()*-0.0621863);
}

double NNfunction_NG_6::synapse0x32592c0() {
   return (neuron0x3252730()*0.0307228);
}

double NNfunction_NG_6::synapse0x3259300() {
   return (neuron0x3252a70()*0.264634);
}

double NNfunction_NG_6::synapse0x3259340() {
   return (neuron0x3252db0()*-0.0389093);
}

double NNfunction_NG_6::synapse0x3259380() {
   return (neuron0x32530f0()*0.0974912);
}

double NNfunction_NG_6::synapse0x32593c0() {
   return (neuron0x3253430()*-0.0210983);
}

double NNfunction_NG_6::synapse0x3259400() {
   return (neuron0x3253770()*0.108509);
}

double NNfunction_NG_6::synapse0x3259780() {
   return (neuron0x324ebb0()*-0.00564227);
}

double NNfunction_NG_6::synapse0x32597c0() {
   return (neuron0x324eef0()*0.00676212);
}

double NNfunction_NG_6::synapse0x3259800() {
   return (neuron0x324f230()*0.0567888);
}

double NNfunction_NG_6::synapse0x3259840() {
   return (neuron0x324f570()*-1.20178);
}

double NNfunction_NG_6::synapse0x3259880() {
   return (neuron0x324f8b0()*-0.00381773);
}

double NNfunction_NG_6::synapse0x32598c0() {
   return (neuron0x324fbf0()*0.00285237);
}

double NNfunction_NG_6::synapse0x3259900() {
   return (neuron0x324ff30()*0.00667012);
}

double NNfunction_NG_6::synapse0x3259940() {
   return (neuron0x3250270()*-0.00449499);
}

double NNfunction_NG_6::synapse0x3259980() {
   return (neuron0x32505b0()*0.0110214);
}

double NNfunction_NG_6::synapse0x32599c0() {
   return (neuron0x32508f0()*0.00590452);
}

double NNfunction_NG_6::synapse0x3259a00() {
   return (neuron0x3250c30()*0.0028235);
}

double NNfunction_NG_6::synapse0x3259a40() {
   return (neuron0x3250f70()*-0.0121852);
}

double NNfunction_NG_6::synapse0x3259a80() {
   return (neuron0x32512b0()*0.0188683);
}

double NNfunction_NG_6::synapse0x3259ac0() {
   return (neuron0x32515f0()*0.00510588);
}

double NNfunction_NG_6::synapse0x3259b00() {
   return (neuron0x3251930()*0.000521685);
}

double NNfunction_NG_6::synapse0x3259b40() {
   return (neuron0x3251c70()*-0.0033866);
}

double NNfunction_NG_6::synapse0x32595d0() {
   return (neuron0x3251fb0()*-0.00205895);
}

double NNfunction_NG_6::synapse0x3259610() {
   return (neuron0x3252510()*0.00345136);
}

double NNfunction_NG_6::synapse0x3259c90() {
   return (neuron0x3252730()*0.00567208);
}

double NNfunction_NG_6::synapse0x3259cd0() {
   return (neuron0x3252a70()*0.010322);
}

double NNfunction_NG_6::synapse0x3259d10() {
   return (neuron0x3252db0()*-0.00422188);
}

double NNfunction_NG_6::synapse0x3259d50() {
   return (neuron0x32530f0()*0.00699786);
}

double NNfunction_NG_6::synapse0x3259d90() {
   return (neuron0x3253430()*0.00116303);
}

double NNfunction_NG_6::synapse0x3259dd0() {
   return (neuron0x3253770()*-0.0711446);
}

double NNfunction_NG_6::synapse0x325a150() {
   return (neuron0x324ebb0()*-0.0150551);
}

double NNfunction_NG_6::synapse0x325a190() {
   return (neuron0x324eef0()*0.0160357);
}

double NNfunction_NG_6::synapse0x325a1d0() {
   return (neuron0x324f230()*-1.4973);
}

double NNfunction_NG_6::synapse0x325a210() {
   return (neuron0x324f570()*-0.047356);
}

double NNfunction_NG_6::synapse0x325a250() {
   return (neuron0x324f8b0()*-0.024781);
}

double NNfunction_NG_6::synapse0x325a290() {
   return (neuron0x324fbf0()*-0.00664603);
}

double NNfunction_NG_6::synapse0x325a2d0() {
   return (neuron0x324ff30()*-0.00743647);
}

double NNfunction_NG_6::synapse0x325a310() {
   return (neuron0x3250270()*-0.013337);
}

double NNfunction_NG_6::synapse0x325a350() {
   return (neuron0x32505b0()*-0.00357866);
}

double NNfunction_NG_6::synapse0x325a390() {
   return (neuron0x32508f0()*0.00821991);
}

double NNfunction_NG_6::synapse0x325a3d0() {
   return (neuron0x3250c30()*0.00716332);
}

double NNfunction_NG_6::synapse0x325a410() {
   return (neuron0x3250f70()*-0.102096);
}

double NNfunction_NG_6::synapse0x325a450() {
   return (neuron0x32512b0()*-0.0555795);
}

double NNfunction_NG_6::synapse0x325a490() {
   return (neuron0x32515f0()*0.0382866);
}

double NNfunction_NG_6::synapse0x325a4d0() {
   return (neuron0x3251930()*-0.047215);
}

double NNfunction_NG_6::synapse0x325a510() {
   return (neuron0x3251c70()*-0.0515947);
}

double NNfunction_NG_6::synapse0x3259fa0() {
   return (neuron0x3251fb0()*0.0268017);
}

double NNfunction_NG_6::synapse0x3259fe0() {
   return (neuron0x3252510()*-0.0415617);
}

double NNfunction_NG_6::synapse0x3256d70() {
   return (neuron0x3252730()*-0.043639);
}

double NNfunction_NG_6::synapse0x3256db0() {
   return (neuron0x3252a70()*-0.00600749);
}

double NNfunction_NG_6::synapse0x3256df0() {
   return (neuron0x3252db0()*-0.00801468);
}

double NNfunction_NG_6::synapse0x3256e30() {
   return (neuron0x32530f0()*0.00162615);
}

double NNfunction_NG_6::synapse0x3256e70() {
   return (neuron0x3253430()*0.00477654);
}

double NNfunction_NG_6::synapse0x3256eb0() {
   return (neuron0x3253770()*0.226579);
}

double NNfunction_NG_6::synapse0x3257230() {
   return (neuron0x324ebb0()*0.0122499);
}

double NNfunction_NG_6::synapse0x3257270() {
   return (neuron0x324eef0()*-0.0179813);
}

double NNfunction_NG_6::synapse0x32572b0() {
   return (neuron0x324f230()*0.564422);
}

double NNfunction_NG_6::synapse0x32572f0() {
   return (neuron0x324f570()*-1.48956);
}

double NNfunction_NG_6::synapse0x3257330() {
   return (neuron0x324f8b0()*-0.011017);
}

double NNfunction_NG_6::synapse0x3257370() {
   return (neuron0x324fbf0()*0.00154916);
}

double NNfunction_NG_6::synapse0x32573b0() {
   return (neuron0x324ff30()*-0.0251677);
}

double NNfunction_NG_6::synapse0x32573f0() {
   return (neuron0x3250270()*0.00210832);
}

double NNfunction_NG_6::synapse0x3257430() {
   return (neuron0x32505b0()*-0.00564841);
}

double NNfunction_NG_6::synapse0x3257470() {
   return (neuron0x32508f0()*0.000822097);
}

double NNfunction_NG_6::synapse0x32574b0() {
   return (neuron0x3250c30()*-0.0133564);
}

double NNfunction_NG_6::synapse0x32574f0() {
   return (neuron0x3250f70()*1.16852);
}

double NNfunction_NG_6::synapse0x3257530() {
   return (neuron0x32512b0()*-0.176675);
}

double NNfunction_NG_6::synapse0x325b670() {
   return (neuron0x32515f0()*0.0149597);
}

double NNfunction_NG_6::synapse0x325b6b0() {
   return (neuron0x3251930()*-0.00327376);
}

double NNfunction_NG_6::synapse0x325b6f0() {
   return (neuron0x3251c70()*-0.010874);
}

double NNfunction_NG_6::synapse0x3257080() {
   return (neuron0x3251fb0()*0.00352716);
}

double NNfunction_NG_6::synapse0x32570c0() {
   return (neuron0x3252510()*-0.0345171);
}

double NNfunction_NG_6::synapse0x325b840() {
   return (neuron0x3252730()*-0.0088932);
}

double NNfunction_NG_6::synapse0x325b880() {
   return (neuron0x3252a70()*-0.000699581);
}

double NNfunction_NG_6::synapse0x325b8c0() {
   return (neuron0x3252db0()*0.0152755);
}

double NNfunction_NG_6::synapse0x325b900() {
   return (neuron0x32530f0()*0.0202108);
}

double NNfunction_NG_6::synapse0x325b940() {
   return (neuron0x3253430()*0.00143185);
}

double NNfunction_NG_6::synapse0x325b980() {
   return (neuron0x3253770()*-0.081229);
}

double NNfunction_NG_6::synapse0x325bd00() {
   return (neuron0x324ebb0()*-0.0190159);
}

double NNfunction_NG_6::synapse0x325bd40() {
   return (neuron0x324eef0()*0.349911);
}

double NNfunction_NG_6::synapse0x325bd80() {
   return (neuron0x324f230()*-0.306495);
}

double NNfunction_NG_6::synapse0x325bdc0() {
   return (neuron0x324f570()*-1.14667);
}

double NNfunction_NG_6::synapse0x325be00() {
   return (neuron0x324f8b0()*0.249053);
}

double NNfunction_NG_6::synapse0x325be40() {
   return (neuron0x324fbf0()*0.240422);
}

double NNfunction_NG_6::synapse0x325be80() {
   return (neuron0x324ff30()*-0.194065);
}

double NNfunction_NG_6::synapse0x325bec0() {
   return (neuron0x3250270()*-0.118556);
}

double NNfunction_NG_6::synapse0x325bf00() {
   return (neuron0x32505b0()*-0.165974);
}

double NNfunction_NG_6::synapse0x325bf40() {
   return (neuron0x32508f0()*0.111107);
}

double NNfunction_NG_6::synapse0x325bf80() {
   return (neuron0x3250c30()*0.0629999);
}

double NNfunction_NG_6::synapse0x325bfc0() {
   return (neuron0x3250f70()*-0.460158);
}

double NNfunction_NG_6::synapse0x325c000() {
   return (neuron0x32512b0()*0.12032);
}

double NNfunction_NG_6::synapse0x325c040() {
   return (neuron0x32515f0()*0.0314636);
}

double NNfunction_NG_6::synapse0x325c080() {
   return (neuron0x3251930()*0.188163);
}

double NNfunction_NG_6::synapse0x325c0c0() {
   return (neuron0x3251c70()*0.31956);
}

double NNfunction_NG_6::synapse0x325bb50() {
   return (neuron0x3251fb0()*0.0773731);
}

double NNfunction_NG_6::synapse0x325bb90() {
   return (neuron0x3252510()*0.273879);
}

double NNfunction_NG_6::synapse0x325c210() {
   return (neuron0x3252730()*0.090681);
}

double NNfunction_NG_6::synapse0x325c250() {
   return (neuron0x3252a70()*-0.254373);
}

double NNfunction_NG_6::synapse0x325c290() {
   return (neuron0x3252db0()*0.200767);
}

double NNfunction_NG_6::synapse0x325c2d0() {
   return (neuron0x32530f0()*0.0591037);
}

double NNfunction_NG_6::synapse0x325c310() {
   return (neuron0x3253430()*0.00798214);
}

double NNfunction_NG_6::synapse0x325c350() {
   return (neuron0x3253770()*-0.220686);
}

double NNfunction_NG_6::synapse0x325c6d0() {
   return (neuron0x324ebb0()*-0.0142237);
}

double NNfunction_NG_6::synapse0x325c710() {
   return (neuron0x324eef0()*-0.0148363);
}

double NNfunction_NG_6::synapse0x325c750() {
   return (neuron0x324f230()*-0.892141);
}

double NNfunction_NG_6::synapse0x325c790() {
   return (neuron0x324f570()*0.156021);
}

double NNfunction_NG_6::synapse0x325c7d0() {
   return (neuron0x324f8b0()*-0.00573907);
}

double NNfunction_NG_6::synapse0x325c810() {
   return (neuron0x324fbf0()*-0.00386514);
}

double NNfunction_NG_6::synapse0x325c850() {
   return (neuron0x324ff30()*-0.00729161);
}

double NNfunction_NG_6::synapse0x325c890() {
   return (neuron0x3250270()*-0.0032172);
}

double NNfunction_NG_6::synapse0x325c8d0() {
   return (neuron0x32505b0()*-0.010095);
}

double NNfunction_NG_6::synapse0x325c910() {
   return (neuron0x32508f0()*0.00460349);
}

double NNfunction_NG_6::synapse0x325c950() {
   return (neuron0x3250c30()*-0.00617664);
}

double NNfunction_NG_6::synapse0x325c990() {
   return (neuron0x3250f70()*0.229266);
}

double NNfunction_NG_6::synapse0x325c9d0() {
   return (neuron0x32512b0()*-1.06806);
}

double NNfunction_NG_6::synapse0x325ca10() {
   return (neuron0x32515f0()*-0.0231402);
}

double NNfunction_NG_6::synapse0x325ca50() {
   return (neuron0x3251930()*-0.000773826);
}

double NNfunction_NG_6::synapse0x325ca90() {
   return (neuron0x3251c70()*-0.000680581);
}

double NNfunction_NG_6::synapse0x325c520() {
   return (neuron0x3251fb0()*-0.0234399);
}

double NNfunction_NG_6::synapse0x325c560() {
   return (neuron0x3252510()*-0.0131025);
}

double NNfunction_NG_6::synapse0x325cbe0() {
   return (neuron0x3252730()*-0.00365181);
}

double NNfunction_NG_6::synapse0x325cc20() {
   return (neuron0x3252a70()*-0.0105341);
}

double NNfunction_NG_6::synapse0x325cc60() {
   return (neuron0x3252db0()*0.00961162);
}

double NNfunction_NG_6::synapse0x325cca0() {
   return (neuron0x32530f0()*0.00658486);
}

double NNfunction_NG_6::synapse0x325cce0() {
   return (neuron0x3253430()*-0.000684778);
}

double NNfunction_NG_6::synapse0x325cd20() {
   return (neuron0x3253770()*0.115407);
}

double NNfunction_NG_6::synapse0x325d0a0() {
   return (neuron0x324ebb0()*0.0421934);
}

double NNfunction_NG_6::synapse0x325d0e0() {
   return (neuron0x324eef0()*-0.06348);
}

double NNfunction_NG_6::synapse0x325d120() {
   return (neuron0x324f230()*0.574434);
}

double NNfunction_NG_6::synapse0x325d160() {
   return (neuron0x324f570()*0.129252);
}

double NNfunction_NG_6::synapse0x325d1a0() {
   return (neuron0x324f8b0()*-0.000720027);
}

double NNfunction_NG_6::synapse0x325d1e0() {
   return (neuron0x324fbf0()*-0.0119091);
}

double NNfunction_NG_6::synapse0x325d220() {
   return (neuron0x324ff30()*-0.0691681);
}

double NNfunction_NG_6::synapse0x325d260() {
   return (neuron0x3250270()*-0.0519535);
}

double NNfunction_NG_6::synapse0x325d2a0() {
   return (neuron0x32505b0()*-0.0114967);
}

double NNfunction_NG_6::synapse0x325d2e0() {
   return (neuron0x32508f0()*-0.0522486);
}

double NNfunction_NG_6::synapse0x325d320() {
   return (neuron0x3250c30()*-0.00244151);
}

double NNfunction_NG_6::synapse0x325d360() {
   return (neuron0x3250f70()*-0.658078);
}

double NNfunction_NG_6::synapse0x325d3a0() {
   return (neuron0x32512b0()*1.6724);
}

double NNfunction_NG_6::synapse0x325d3e0() {
   return (neuron0x32515f0()*0.0710405);
}

double NNfunction_NG_6::synapse0x325d420() {
   return (neuron0x3251930()*-0.0899079);
}

double NNfunction_NG_6::synapse0x325d460() {
   return (neuron0x3251c70()*-0.0705422);
}

double NNfunction_NG_6::synapse0x325cef0() {
   return (neuron0x3251fb0()*-0.0477395);
}

double NNfunction_NG_6::synapse0x325cf30() {
   return (neuron0x3252510()*-0.0922422);
}

double NNfunction_NG_6::synapse0x325d5b0() {
   return (neuron0x3252730()*0.0291437);
}

double NNfunction_NG_6::synapse0x325d5f0() {
   return (neuron0x3252a70()*0.0151781);
}

double NNfunction_NG_6::synapse0x325d630() {
   return (neuron0x3252db0()*0.0460765);
}

double NNfunction_NG_6::synapse0x325d670() {
   return (neuron0x32530f0()*0.0568);
}

double NNfunction_NG_6::synapse0x325d6b0() {
   return (neuron0x3253430()*0.00175268);
}

double NNfunction_NG_6::synapse0x325d6f0() {
   return (neuron0x3253770()*-0.031401);
}

double NNfunction_NG_6::synapse0x325da70() {
   return (neuron0x324ebb0()*0.344622);
}

double NNfunction_NG_6::synapse0x324edd0() {
   return (neuron0x324eef0()*0.203414);
}

double NNfunction_NG_6::synapse0x324ee10() {
   return (neuron0x324f230()*0.119236);
}

double NNfunction_NG_6::synapse0x324f110() {
   return (neuron0x324f570()*0.221866);
}

double NNfunction_NG_6::synapse0x324f150() {
   return (neuron0x324f8b0()*0.145354);
}

double NNfunction_NG_6::synapse0x324f450() {
   return (neuron0x324fbf0()*-0.0318477);
}

double NNfunction_NG_6::synapse0x324f490() {
   return (neuron0x324ff30()*-0.0107673);
}

double NNfunction_NG_6::synapse0x324f790() {
   return (neuron0x3250270()*-0.108886);
}

double NNfunction_NG_6::synapse0x324f7d0() {
   return (neuron0x32505b0()*-0.318884);
}

double NNfunction_NG_6::synapse0x324fad0() {
   return (neuron0x32508f0()*0.120588);
}

double NNfunction_NG_6::synapse0x324fb10() {
   return (neuron0x3250c30()*-0.154952);
}

double NNfunction_NG_6::synapse0x324fe10() {
   return (neuron0x3250f70()*0.166145);
}

double NNfunction_NG_6::synapse0x324fe50() {
   return (neuron0x32512b0()*0.37975);
}

double NNfunction_NG_6::synapse0x3250150() {
   return (neuron0x32515f0()*-0.325147);
}

double NNfunction_NG_6::synapse0x3250190() {
   return (neuron0x3251930()*-0.00273798);
}

double NNfunction_NG_6::synapse0x3250490() {
   return (neuron0x3251c70()*-0.414413);
}

double NNfunction_NG_6::synapse0x32504d0() {
   return (neuron0x3251fb0()*0.200676);
}

double NNfunction_NG_6::synapse0x32507d0() {
   return (neuron0x3252510()*-0.0348752);
}

double NNfunction_NG_6::synapse0x3250810() {
   return (neuron0x3252730()*-0.293639);
}

double NNfunction_NG_6::synapse0x3250b10() {
   return (neuron0x3252a70()*-0.222251);
}

double NNfunction_NG_6::synapse0x3250b50() {
   return (neuron0x3252db0()*0.278582);
}

double NNfunction_NG_6::synapse0x3250e50() {
   return (neuron0x32530f0()*0.13215);
}

double NNfunction_NG_6::synapse0x3250e90() {
   return (neuron0x3253430()*0.463299);
}

double NNfunction_NG_6::synapse0x3251190() {
   return (neuron0x3253770()*0.111324);
}

double NNfunction_NG_6::synapse0x32511d0() {
   return (neuron0x324ebb0()*-0.0232962);
}

double NNfunction_NG_6::synapse0x3251e90() {
   return (neuron0x324eef0()*-0.0359851);
}

double NNfunction_NG_6::synapse0x3251ed0() {
   return (neuron0x324f230()*-0.0978295);
}

double NNfunction_NG_6::synapse0x325d8c0() {
   return (neuron0x324f570()*2.17073);
}

double NNfunction_NG_6::synapse0x325d900() {
   return (neuron0x324f8b0()*0.038682);
}

double NNfunction_NG_6::synapse0x32521d0() {
   return (neuron0x324fbf0()*-0.0913814);
}

double NNfunction_NG_6::synapse0x3252210() {
   return (neuron0x324ff30()*-0.0757764);
}

double NNfunction_NG_6::synapse0x3000160() {
   return (neuron0x3250270()*0.122232);
}

double NNfunction_NG_6::synapse0x30001a0() {
   return (neuron0x32505b0()*0.133853);
}

double NNfunction_NG_6::synapse0x3252950() {
   return (neuron0x32508f0()*-0.0198308);
}

double NNfunction_NG_6::synapse0x3252990() {
   return (neuron0x3250c30()*-0.0490251);
}

double NNfunction_NG_6::synapse0x3252c90() {
   return (neuron0x3250f70()*0.17292);
}

double NNfunction_NG_6::synapse0x3252cd0() {
   return (neuron0x32512b0()*-0.436052);
}

double NNfunction_NG_6::synapse0x3252fd0() {
   return (neuron0x32515f0()*-0.0547256);
}

double NNfunction_NG_6::synapse0x3253010() {
   return (neuron0x3251930()*0.0772631);
}

double NNfunction_NG_6::synapse0x3253310() {
   return (neuron0x3251c70()*0.11417);
}

double NNfunction_NG_6::synapse0x3253350() {
   return (neuron0x3251fb0()*-0.0894021);
}

double NNfunction_NG_6::synapse0x3253650() {
   return (neuron0x3252510()*-0.0565512);
}

double NNfunction_NG_6::synapse0x3253690() {
   return (neuron0x3252730()*0.090747);
}

double NNfunction_NG_6::synapse0x3253990() {
   return (neuron0x3252a70()*-0.067299);
}

double NNfunction_NG_6::synapse0x32539d0() {
   return (neuron0x3252db0()*0.00640534);
}

double NNfunction_NG_6::synapse0x32514d0() {
   return (neuron0x32530f0()*0.031469);
}

double NNfunction_NG_6::synapse0x3251510() {
   return (neuron0x3253430()*-0.0184873);
}

double NNfunction_NG_6::synapse0x325f7e0() {
   return (neuron0x3253770()*-0.0117014);
}

double NNfunction_NG_6::synapse0x325fb60() {
   return (neuron0x324ebb0()*0.00393964);
}

double NNfunction_NG_6::synapse0x325fba0() {
   return (neuron0x324eef0()*0.0134414);
}

double NNfunction_NG_6::synapse0x325fbe0() {
   return (neuron0x324f230()*-0.0269343);
}

double NNfunction_NG_6::synapse0x325fc20() {
   return (neuron0x324f570()*1.90555);
}

double NNfunction_NG_6::synapse0x325fc60() {
   return (neuron0x324f8b0()*0.00162872);
}

double NNfunction_NG_6::synapse0x325fca0() {
   return (neuron0x324fbf0()*-0.00265601);
}

double NNfunction_NG_6::synapse0x325fce0() {
   return (neuron0x324ff30()*0.0091371);
}

double NNfunction_NG_6::synapse0x325fd20() {
   return (neuron0x3250270()*-0.00694387);
}

double NNfunction_NG_6::synapse0x325fd60() {
   return (neuron0x32505b0()*0.0116739);
}

double NNfunction_NG_6::synapse0x325fda0() {
   return (neuron0x32508f0()*0.00219081);
}

double NNfunction_NG_6::synapse0x325fde0() {
   return (neuron0x3250c30()*0.00497089);
}

double NNfunction_NG_6::synapse0x325fe20() {
   return (neuron0x3250f70()*-0.866299);
}

double NNfunction_NG_6::synapse0x325fe60() {
   return (neuron0x32512b0()*0.473794);
}

double NNfunction_NG_6::synapse0x325fea0() {
   return (neuron0x32515f0()*0.00199501);
}

double NNfunction_NG_6::synapse0x325fee0() {
   return (neuron0x3251930()*0.0042756);
}

double NNfunction_NG_6::synapse0x325ff20() {
   return (neuron0x3251c70()*0.011691);
}

double NNfunction_NG_6::synapse0x325f9b0() {
   return (neuron0x3251fb0()*0.0154359);
}

double NNfunction_NG_6::synapse0x325f9f0() {
   return (neuron0x3252510()*0.0311584);
}

double NNfunction_NG_6::synapse0x3260070() {
   return (neuron0x3252730()*0.0199399);
}

double NNfunction_NG_6::synapse0x32600b0() {
   return (neuron0x3252a70()*0.00229039);
}

double NNfunction_NG_6::synapse0x32600f0() {
   return (neuron0x3252db0()*-0.00676563);
}

double NNfunction_NG_6::synapse0x3260130() {
   return (neuron0x32530f0()*-0.0011687);
}

double NNfunction_NG_6::synapse0x3260170() {
   return (neuron0x3253430()*0.0048087);
}

double NNfunction_NG_6::synapse0x32601b0() {
   return (neuron0x3253770()*0.0550357);
}

double NNfunction_NG_6::synapse0x3260530() {
   return (neuron0x324ebb0()*0.00927514);
}

double NNfunction_NG_6::synapse0x3260570() {
   return (neuron0x324eef0()*-0.00672124);
}

double NNfunction_NG_6::synapse0x32605b0() {
   return (neuron0x324f230()*0.146377);
}

double NNfunction_NG_6::synapse0x32605f0() {
   return (neuron0x324f570()*-0.038726);
}

double NNfunction_NG_6::synapse0x3260630() {
   return (neuron0x324f8b0()*0.00295417);
}

double NNfunction_NG_6::synapse0x3260670() {
   return (neuron0x324fbf0()*-0.000153156);
}

double NNfunction_NG_6::synapse0x32606b0() {
   return (neuron0x324ff30()*-0.0106257);
}

double NNfunction_NG_6::synapse0x32606f0() {
   return (neuron0x3250270()*-0.000865796);
}

double NNfunction_NG_6::synapse0x3260730() {
   return (neuron0x32505b0()*-0.00269663);
}

double NNfunction_NG_6::synapse0x3260770() {
   return (neuron0x32508f0()*-0.0116335);
}

double NNfunction_NG_6::synapse0x32607b0() {
   return (neuron0x3250c30()*-0.00694732);
}

double NNfunction_NG_6::synapse0x32607f0() {
   return (neuron0x3250f70()*0.0714391);
}

double NNfunction_NG_6::synapse0x3260830() {
   return (neuron0x32512b0()*0.0475058);
}

double NNfunction_NG_6::synapse0x3260870() {
   return (neuron0x32515f0()*-0.00256736);
}

double NNfunction_NG_6::synapse0x32608b0() {
   return (neuron0x3251930()*0.0072624);
}

double NNfunction_NG_6::synapse0x32608f0() {
   return (neuron0x3251c70()*0.0118464);
}

double NNfunction_NG_6::synapse0x3260380() {
   return (neuron0x3251fb0()*-0.00523719);
}

double NNfunction_NG_6::synapse0x32603c0() {
   return (neuron0x3252510()*0.00749177);
}

double NNfunction_NG_6::synapse0x3260a40() {
   return (neuron0x3252730()*0.00229549);
}

double NNfunction_NG_6::synapse0x3260a80() {
   return (neuron0x3252a70()*0.00290056);
}

double NNfunction_NG_6::synapse0x3260ac0() {
   return (neuron0x3252db0()*-0.00399927);
}

double NNfunction_NG_6::synapse0x3260b00() {
   return (neuron0x32530f0()*-0.00996922);
}

double NNfunction_NG_6::synapse0x3260b40() {
   return (neuron0x3253430()*-0.00227558);
}

double NNfunction_NG_6::synapse0x3260b80() {
   return (neuron0x3253770()*-0.947155);
}

double NNfunction_NG_6::synapse0x3260f00() {
   return (neuron0x324ebb0()*0.00733712);
}

double NNfunction_NG_6::synapse0x3260f40() {
   return (neuron0x324eef0()*0.000294699);
}

double NNfunction_NG_6::synapse0x3260f80() {
   return (neuron0x324f230()*-0.254434);
}

double NNfunction_NG_6::synapse0x3260fc0() {
   return (neuron0x324f570()*0.0061637);
}

double NNfunction_NG_6::synapse0x3261000() {
   return (neuron0x324f8b0()*0.00293359);
}

double NNfunction_NG_6::synapse0x3261040() {
   return (neuron0x324fbf0()*-0.00324447);
}

double NNfunction_NG_6::synapse0x3261080() {
   return (neuron0x324ff30()*-0.00598869);
}

double NNfunction_NG_6::synapse0x32610c0() {
   return (neuron0x3250270()*0.000881639);
}

double NNfunction_NG_6::synapse0x3261100() {
   return (neuron0x32505b0()*0.000128303);
}

double NNfunction_NG_6::synapse0x3261140() {
   return (neuron0x32508f0()*-0.0104186);
}

double NNfunction_NG_6::synapse0x3261180() {
   return (neuron0x3250c30()*-0.00602229);
}

double NNfunction_NG_6::synapse0x32611c0() {
   return (neuron0x3250f70()*0.035622);
}

double NNfunction_NG_6::synapse0x3261200() {
   return (neuron0x32512b0()*0.00279127);
}

double NNfunction_NG_6::synapse0x3261240() {
   return (neuron0x32515f0()*-0.00427279);
}

double NNfunction_NG_6::synapse0x3261280() {
   return (neuron0x3251930()*0.00252247);
}

double NNfunction_NG_6::synapse0x32612c0() {
   return (neuron0x3251c70()*0.010671);
}

double NNfunction_NG_6::synapse0x3260d50() {
   return (neuron0x3251fb0()*-0.000700101);
}

double NNfunction_NG_6::synapse0x3260d90() {
   return (neuron0x3252510()*-0.00116095);
}

double NNfunction_NG_6::synapse0x3261410() {
   return (neuron0x3252730()*0.00237807);
}

double NNfunction_NG_6::synapse0x3261450() {
   return (neuron0x3252a70()*0.00265213);
}

double NNfunction_NG_6::synapse0x3261490() {
   return (neuron0x3252db0()*-0.00494315);
}

double NNfunction_NG_6::synapse0x32614d0() {
   return (neuron0x32530f0()*-0.00362339);
}

double NNfunction_NG_6::synapse0x3261510() {
   return (neuron0x3253430()*-0.00156129);
}

double NNfunction_NG_6::synapse0x3261550() {
   return (neuron0x3253770()*-1.07264);
}

double NNfunction_NG_6::synapse0x32618d0() {
   return (neuron0x324ebb0()*0.00359714);
}

double NNfunction_NG_6::synapse0x3261910() {
   return (neuron0x324eef0()*0.000727269);
}

double NNfunction_NG_6::synapse0x3261950() {
   return (neuron0x324f230()*-1.17832);
}

double NNfunction_NG_6::synapse0x3261990() {
   return (neuron0x324f570()*-0.126696);
}

double NNfunction_NG_6::synapse0x32619d0() {
   return (neuron0x324f8b0()*0.0016267);
}

double NNfunction_NG_6::synapse0x3261a10() {
   return (neuron0x324fbf0()*0.0176381);
}

double NNfunction_NG_6::synapse0x3261a50() {
   return (neuron0x324ff30()*0.00310103);
}

double NNfunction_NG_6::synapse0x3261a90() {
   return (neuron0x3250270()*-0.00179577);
}

double NNfunction_NG_6::synapse0x3261ad0() {
   return (neuron0x32505b0()*0.0136972);
}

double NNfunction_NG_6::synapse0x3261b10() {
   return (neuron0x32508f0()*-0.0183154);
}

double NNfunction_NG_6::synapse0x3261b50() {
   return (neuron0x3250c30()*-0.0214335);
}

double NNfunction_NG_6::synapse0x3261b90() {
   return (neuron0x3250f70()*-2.00818);
}

double NNfunction_NG_6::synapse0x3261bd0() {
   return (neuron0x32512b0()*0.12263);
}

double NNfunction_NG_6::synapse0x3261c10() {
   return (neuron0x32515f0()*-0.0751916);
}

double NNfunction_NG_6::synapse0x3261c50() {
   return (neuron0x3251930()*0.0132551);
}

double NNfunction_NG_6::synapse0x3261c90() {
   return (neuron0x3251c70()*-0.017363);
}

double NNfunction_NG_6::synapse0x3261720() {
   return (neuron0x3251fb0()*-0.0517813);
}

double NNfunction_NG_6::synapse0x3261760() {
   return (neuron0x3252510()*-0.0116976);
}

double NNfunction_NG_6::synapse0x3261de0() {
   return (neuron0x3252730()*-0.0109362);
}

double NNfunction_NG_6::synapse0x3261e20() {
   return (neuron0x3252a70()*-0.00182939);
}

double NNfunction_NG_6::synapse0x3261e60() {
   return (neuron0x3252db0()*0.0118656);
}

double NNfunction_NG_6::synapse0x3261ea0() {
   return (neuron0x32530f0()*0.0264178);
}

double NNfunction_NG_6::synapse0x3261ee0() {
   return (neuron0x3253430()*-0.00741002);
}

double NNfunction_NG_6::synapse0x3261f20() {
   return (neuron0x3253770()*0.50571);
}

double NNfunction_NG_6::synapse0x32622a0() {
   return (neuron0x324ebb0()*-0.024381);
}

double NNfunction_NG_6::synapse0x32622e0() {
   return (neuron0x324eef0()*-0.000785748);
}

double NNfunction_NG_6::synapse0x3262320() {
   return (neuron0x324f230()*-3.41817);
}

double NNfunction_NG_6::synapse0x3262360() {
   return (neuron0x324f570()*0.00885815);
}

double NNfunction_NG_6::synapse0x32623a0() {
   return (neuron0x324f8b0()*-0.00938698);
}

double NNfunction_NG_6::synapse0x32623e0() {
   return (neuron0x324fbf0()*-0.00769128);
}

double NNfunction_NG_6::synapse0x3262420() {
   return (neuron0x324ff30()*-0.00330047);
}

double NNfunction_NG_6::synapse0x3262460() {
   return (neuron0x3250270()*0.000804113);
}

double NNfunction_NG_6::synapse0x32624a0() {
   return (neuron0x32505b0()*-0.00602028);
}

double NNfunction_NG_6::synapse0x325a660() {
   return (neuron0x32508f0()*-0.00190246);
}

double NNfunction_NG_6::synapse0x325a6a0() {
   return (neuron0x3250c30()*-0.000465342);
}

double NNfunction_NG_6::synapse0x325a6e0() {
   return (neuron0x3250f70()*-0.0252838);
}

double NNfunction_NG_6::synapse0x325a720() {
   return (neuron0x32512b0()*0.00388642);
}

double NNfunction_NG_6::synapse0x325a760() {
   return (neuron0x32515f0()*-0.00873091);
}

double NNfunction_NG_6::synapse0x325a7a0() {
   return (neuron0x3251930()*0.00569381);
}

double NNfunction_NG_6::synapse0x325a7e0() {
   return (neuron0x3251c70()*0.00850811);
}

double NNfunction_NG_6::synapse0x32620f0() {
   return (neuron0x3251fb0()*-0.00368854);
}

double NNfunction_NG_6::synapse0x3262130() {
   return (neuron0x3252510()*0.011829);
}

double NNfunction_NG_6::synapse0x325a930() {
   return (neuron0x3252730()*-0.00156786);
}

double NNfunction_NG_6::synapse0x325a970() {
   return (neuron0x3252a70()*0.00103699);
}

double NNfunction_NG_6::synapse0x325a9b0() {
   return (neuron0x3252db0()*0.00322585);
}

double NNfunction_NG_6::synapse0x325a9f0() {
   return (neuron0x32530f0()*-0.00406764);
}

double NNfunction_NG_6::synapse0x325aa30() {
   return (neuron0x3253430()*-0.00472719);
}

double NNfunction_NG_6::synapse0x325aa70() {
   return (neuron0x3253770()*2.75835);
}

double NNfunction_NG_6::synapse0x325adf0() {
   return (neuron0x324ebb0()*-0.0234211);
}

double NNfunction_NG_6::synapse0x325ae30() {
   return (neuron0x324eef0()*-0.000192275);
}

double NNfunction_NG_6::synapse0x325ae70() {
   return (neuron0x324f230()*-2.08451);
}

double NNfunction_NG_6::synapse0x325aeb0() {
   return (neuron0x324f570()*-0.00061743);
}

double NNfunction_NG_6::synapse0x325aef0() {
   return (neuron0x324f8b0()*-0.00497902);
}

double NNfunction_NG_6::synapse0x325af30() {
   return (neuron0x324fbf0()*-0.00540136);
}

double NNfunction_NG_6::synapse0x325af70() {
   return (neuron0x324ff30()*-6.1585e-05);
}

double NNfunction_NG_6::synapse0x325afb0() {
   return (neuron0x3250270()*0.00325195);
}

double NNfunction_NG_6::synapse0x325aff0() {
   return (neuron0x32505b0()*-0.00429206);
}

double NNfunction_NG_6::synapse0x325b030() {
   return (neuron0x32508f0()*-0.00703898);
}

double NNfunction_NG_6::synapse0x325b070() {
   return (neuron0x3250c30()*-0.000547123);
}

double NNfunction_NG_6::synapse0x325b0b0() {
   return (neuron0x3250f70()*-0.0191881);
}

double NNfunction_NG_6::synapse0x325b0f0() {
   return (neuron0x32512b0()*0.0273385);
}

double NNfunction_NG_6::synapse0x325b130() {
   return (neuron0x32515f0()*-0.00826136);
}

double NNfunction_NG_6::synapse0x325b170() {
   return (neuron0x3251930()*-0.0053547);
}

double NNfunction_NG_6::synapse0x325b1b0() {
   return (neuron0x3251c70()*0.00243469);
}

double NNfunction_NG_6::synapse0x325ac40() {
   return (neuron0x3251fb0()*-0.00799906);
}

double NNfunction_NG_6::synapse0x325ac80() {
   return (neuron0x3252510()*-0.00276191);
}

double NNfunction_NG_6::synapse0x325b300() {
   return (neuron0x3252730()*-0.000899763);
}

double NNfunction_NG_6::synapse0x325b340() {
   return (neuron0x3252a70()*-0.00327109);
}

double NNfunction_NG_6::synapse0x325b380() {
   return (neuron0x3252db0()*-0.00457621);
}

double NNfunction_NG_6::synapse0x325b3c0() {
   return (neuron0x32530f0()*-0.00210009);
}

double NNfunction_NG_6::synapse0x325b400() {
   return (neuron0x3253430()*-0.00869018);
}

double NNfunction_NG_6::synapse0x325b440() {
   return (neuron0x3253770()*2.0702);
}

double NNfunction_NG_6::synapse0x325b610() {
   return (neuron0x324ebb0()*-0.0288171);
}

double NNfunction_NG_6::synapse0x32646a0() {
   return (neuron0x324eef0()*0.00889891);
}

double NNfunction_NG_6::synapse0x32646e0() {
   return (neuron0x324f230()*0.0651328);
}

double NNfunction_NG_6::synapse0x3264720() {
   return (neuron0x324f570()*-1.72999);
}

double NNfunction_NG_6::synapse0x3264760() {
   return (neuron0x324f8b0()*0.0159097);
}

double NNfunction_NG_6::synapse0x32647a0() {
   return (neuron0x324fbf0()*0.013919);
}

double NNfunction_NG_6::synapse0x32647e0() {
   return (neuron0x324ff30()*0.0220138);
}

double NNfunction_NG_6::synapse0x3264820() {
   return (neuron0x3250270()*0.0049493);
}

double NNfunction_NG_6::synapse0x3264860() {
   return (neuron0x32505b0()*-0.00436793);
}

double NNfunction_NG_6::synapse0x32648a0() {
   return (neuron0x32508f0()*0.000609561);
}

double NNfunction_NG_6::synapse0x32648e0() {
   return (neuron0x3250c30()*0.0194005);
}

double NNfunction_NG_6::synapse0x3264920() {
   return (neuron0x3250f70()*0.471382);
}

double NNfunction_NG_6::synapse0x3264960() {
   return (neuron0x32512b0()*-0.137946);
}

double NNfunction_NG_6::synapse0x32649a0() {
   return (neuron0x32515f0()*-0.0194319);
}

double NNfunction_NG_6::synapse0x32649e0() {
   return (neuron0x3251930()*0.0172658);
}

double NNfunction_NG_6::synapse0x3264a20() {
   return (neuron0x3251c70()*-0.00671239);
}

double NNfunction_NG_6::synapse0x32644f0() {
   return (neuron0x3251fb0()*-0.0330715);
}

double NNfunction_NG_6::synapse0x3264530() {
   return (neuron0x3252510()*0.0176283);
}

double NNfunction_NG_6::synapse0x3264b70() {
   return (neuron0x3252730()*0.0171275);
}

double NNfunction_NG_6::synapse0x3264bb0() {
   return (neuron0x3252a70()*0.0268563);
}

double NNfunction_NG_6::synapse0x3264bf0() {
   return (neuron0x3252db0()*-0.0236752);
}

double NNfunction_NG_6::synapse0x3264c30() {
   return (neuron0x32530f0()*-0.00105014);
}

double NNfunction_NG_6::synapse0x3264c70() {
   return (neuron0x3253430()*-0.0170602);
}

double NNfunction_NG_6::synapse0x3264cb0() {
   return (neuron0x3253770()*0.034561);
}

double NNfunction_NG_6::synapse0x3265030() {
   return (neuron0x324ebb0()*-0.0238153);
}

double NNfunction_NG_6::synapse0x3265070() {
   return (neuron0x324eef0()*0.0403554);
}

double NNfunction_NG_6::synapse0x32650b0() {
   return (neuron0x324f230()*2.43964);
}

double NNfunction_NG_6::synapse0x32650f0() {
   return (neuron0x324f570()*0.0112852);
}

double NNfunction_NG_6::synapse0x3265130() {
   return (neuron0x324f8b0()*0.021536);
}

double NNfunction_NG_6::synapse0x3265170() {
   return (neuron0x324fbf0()*0.0101984);
}

double NNfunction_NG_6::synapse0x32651b0() {
   return (neuron0x324ff30()*0.00744439);
}

double NNfunction_NG_6::synapse0x32651f0() {
   return (neuron0x3250270()*0.0019218);
}

double NNfunction_NG_6::synapse0x3265230() {
   return (neuron0x32505b0()*0.00194552);
}

double NNfunction_NG_6::synapse0x3265270() {
   return (neuron0x32508f0()*0.00640509);
}

double NNfunction_NG_6::synapse0x32652b0() {
   return (neuron0x3250c30()*-0.00132336);
}

double NNfunction_NG_6::synapse0x32652f0() {
   return (neuron0x3250f70()*0.00688717);
}

double NNfunction_NG_6::synapse0x3265330() {
   return (neuron0x32512b0()*0.0642852);
}

double NNfunction_NG_6::synapse0x3265370() {
   return (neuron0x32515f0()*-0.00815078);
}

double NNfunction_NG_6::synapse0x32653b0() {
   return (neuron0x3251930()*-0.0122698);
}

double NNfunction_NG_6::synapse0x32653f0() {
   return (neuron0x3251c70()*0.0126312);
}

double NNfunction_NG_6::synapse0x3264e80() {
   return (neuron0x3251fb0()*-0.0103087);
}

double NNfunction_NG_6::synapse0x3264ec0() {
   return (neuron0x3252510()*-0.0176614);
}

double NNfunction_NG_6::synapse0x3265540() {
   return (neuron0x3252730()*0.00376136);
}

double NNfunction_NG_6::synapse0x3265580() {
   return (neuron0x3252a70()*-0.0145795);
}

double NNfunction_NG_6::synapse0x32655c0() {
   return (neuron0x3252db0()*0.0196119);
}

double NNfunction_NG_6::synapse0x3265600() {
   return (neuron0x32530f0()*0.0105855);
}

double NNfunction_NG_6::synapse0x3265640() {
   return (neuron0x3253430()*0.00477464);
}

double NNfunction_NG_6::synapse0x3265680() {
   return (neuron0x3253770()*2.30856);
}

double NNfunction_NG_6::synapse0x3265a00() {
   return (neuron0x324ebb0()*-0.00919868);
}

double NNfunction_NG_6::synapse0x3265a40() {
   return (neuron0x324eef0()*-0.0317383);
}

double NNfunction_NG_6::synapse0x3265a80() {
   return (neuron0x324f230()*-0.298535);
}

double NNfunction_NG_6::synapse0x3265ac0() {
   return (neuron0x324f570()*-2.53235);
}

double NNfunction_NG_6::synapse0x3265b00() {
   return (neuron0x324f8b0()*0.0102097);
}

double NNfunction_NG_6::synapse0x3265b40() {
   return (neuron0x324fbf0()*-0.0131149);
}

double NNfunction_NG_6::synapse0x3265b80() {
   return (neuron0x324ff30()*0.0107319);
}

double NNfunction_NG_6::synapse0x3265bc0() {
   return (neuron0x3250270()*0.0458996);
}

double NNfunction_NG_6::synapse0x3265c00() {
   return (neuron0x32505b0()*0.0231517);
}

double NNfunction_NG_6::synapse0x3265c40() {
   return (neuron0x32508f0()*0.0142423);
}

double NNfunction_NG_6::synapse0x3265c80() {
   return (neuron0x3250c30()*-0.0271075);
}

double NNfunction_NG_6::synapse0x3265cc0() {
   return (neuron0x3250f70()*0.0138525);
}

double NNfunction_NG_6::synapse0x3265d00() {
   return (neuron0x32512b0()*-1.1549);
}

double NNfunction_NG_6::synapse0x3265d40() {
   return (neuron0x32515f0()*-0.0174083);
}

double NNfunction_NG_6::synapse0x3265d80() {
   return (neuron0x3251930()*0.0298911);
}

double NNfunction_NG_6::synapse0x3265dc0() {
   return (neuron0x3251c70()*0.0569913);
}

double NNfunction_NG_6::synapse0x3265850() {
   return (neuron0x3251fb0()*-0.00834617);
}

double NNfunction_NG_6::synapse0x3265890() {
   return (neuron0x3252510()*-0.00706634);
}

double NNfunction_NG_6::synapse0x3265f10() {
   return (neuron0x3252730()*0.00929484);
}

double NNfunction_NG_6::synapse0x3265f50() {
   return (neuron0x3252a70()*-0.0103667);
}

double NNfunction_NG_6::synapse0x3265f90() {
   return (neuron0x3252db0()*-0.0218532);
}

double NNfunction_NG_6::synapse0x3265fd0() {
   return (neuron0x32530f0()*-0.0145031);
}

double NNfunction_NG_6::synapse0x3266010() {
   return (neuron0x3253430()*0.0224534);
}

double NNfunction_NG_6::synapse0x3266050() {
   return (neuron0x3253770()*-0.116465);
}

double NNfunction_NG_6::synapse0x32663d0() {
   return (neuron0x324ebb0()*0.022585);
}

double NNfunction_NG_6::synapse0x3266410() {
   return (neuron0x324eef0()*0.0248457);
}

double NNfunction_NG_6::synapse0x3266450() {
   return (neuron0x324f230()*0.961669);
}

double NNfunction_NG_6::synapse0x3266490() {
   return (neuron0x324f570()*-0.0805026);
}

double NNfunction_NG_6::synapse0x32664d0() {
   return (neuron0x324f8b0()*0.0106721);
}

double NNfunction_NG_6::synapse0x3266510() {
   return (neuron0x324fbf0()*0.00367799);
}

double NNfunction_NG_6::synapse0x3266550() {
   return (neuron0x324ff30()*0.00834164);
}

double NNfunction_NG_6::synapse0x3266590() {
   return (neuron0x3250270()*0.00222083);
}

double NNfunction_NG_6::synapse0x32665d0() {
   return (neuron0x32505b0()*0.0171598);
}

double NNfunction_NG_6::synapse0x3266610() {
   return (neuron0x32508f0()*-0.00522403);
}

double NNfunction_NG_6::synapse0x3266650() {
   return (neuron0x3250c30()*0.0105889);
}

double NNfunction_NG_6::synapse0x3266690() {
   return (neuron0x3250f70()*-0.491432);
}

double NNfunction_NG_6::synapse0x32666d0() {
   return (neuron0x32512b0()*1.36551);
}

double NNfunction_NG_6::synapse0x3266710() {
   return (neuron0x32515f0()*0.0243295);
}

double NNfunction_NG_6::synapse0x3266750() {
   return (neuron0x3251930()*-0.000363868);
}

double NNfunction_NG_6::synapse0x3266790() {
   return (neuron0x3251c70()*-0.00697724);
}

double NNfunction_NG_6::synapse0x3266220() {
   return (neuron0x3251fb0()*0.0265744);
}

double NNfunction_NG_6::synapse0x3266260() {
   return (neuron0x3252510()*0.0150081);
}

double NNfunction_NG_6::synapse0x32668e0() {
   return (neuron0x3252730()*0.00650294);
}

double NNfunction_NG_6::synapse0x3266920() {
   return (neuron0x3252a70()*0.017472);
}

double NNfunction_NG_6::synapse0x3266960() {
   return (neuron0x3252db0()*-0.00921337);
}

double NNfunction_NG_6::synapse0x32669a0() {
   return (neuron0x32530f0()*-0.00756822);
}

double NNfunction_NG_6::synapse0x32669e0() {
   return (neuron0x3253430()*0.00296955);
}

double NNfunction_NG_6::synapse0x3266a20() {
   return (neuron0x3253770()*-0.0405976);
}

double NNfunction_NG_6::synapse0x3266da0() {
   return (neuron0x324ebb0()*0.26105);
}

double NNfunction_NG_6::synapse0x3266de0() {
   return (neuron0x324eef0()*-0.157023);
}

double NNfunction_NG_6::synapse0x3266e20() {
   return (neuron0x324f230()*0.0661861);
}

double NNfunction_NG_6::synapse0x3266e60() {
   return (neuron0x324f570()*0.144325);
}

double NNfunction_NG_6::synapse0x3266ea0() {
   return (neuron0x324f8b0()*-0.07007);
}

double NNfunction_NG_6::synapse0x3266ee0() {
   return (neuron0x324fbf0()*-0.238666);
}

double NNfunction_NG_6::synapse0x3266f20() {
   return (neuron0x324ff30()*0.159322);
}

double NNfunction_NG_6::synapse0x3266f60() {
   return (neuron0x3250270()*0.219295);
}

double NNfunction_NG_6::synapse0x3266fa0() {
   return (neuron0x32505b0()*-0.300707);
}

double NNfunction_NG_6::synapse0x3266fe0() {
   return (neuron0x32508f0()*-0.0336392);
}

double NNfunction_NG_6::synapse0x3267020() {
   return (neuron0x3250c30()*-0.143612);
}

double NNfunction_NG_6::synapse0x3267060() {
   return (neuron0x3250f70()*-0.34841);
}

double NNfunction_NG_6::synapse0x32670a0() {
   return (neuron0x32512b0()*-0.0586577);
}

double NNfunction_NG_6::synapse0x32670e0() {
   return (neuron0x32515f0()*0.0784215);
}

double NNfunction_NG_6::synapse0x3267120() {
   return (neuron0x3251930()*-0.240111);
}

double NNfunction_NG_6::synapse0x3267160() {
   return (neuron0x3251c70()*0.308008);
}

double NNfunction_NG_6::synapse0x3266bf0() {
   return (neuron0x3251fb0()*-0.0189583);
}

double NNfunction_NG_6::synapse0x3266c30() {
   return (neuron0x3252510()*-0.302195);
}

double NNfunction_NG_6::synapse0x32672b0() {
   return (neuron0x3252730()*0.353328);
}

double NNfunction_NG_6::synapse0x32672f0() {
   return (neuron0x3252a70()*-0.174087);
}

double NNfunction_NG_6::synapse0x3267330() {
   return (neuron0x3252db0()*0.251985);
}

double NNfunction_NG_6::synapse0x3267370() {
   return (neuron0x32530f0()*0.0472165);
}

double NNfunction_NG_6::synapse0x32673b0() {
   return (neuron0x3253430()*-0.0585607);
}

double NNfunction_NG_6::synapse0x32673f0() {
   return (neuron0x3253770()*-0.486248);
}

double NNfunction_NG_6::synapse0x3267770() {
   return (neuron0x324ebb0()*0.0511276);
}

double NNfunction_NG_6::synapse0x32677b0() {
   return (neuron0x324eef0()*0.0202439);
}

double NNfunction_NG_6::synapse0x32677f0() {
   return (neuron0x324f230()*-0.029249);
}

double NNfunction_NG_6::synapse0x3267830() {
   return (neuron0x324f570()*-4.71374);
}

double NNfunction_NG_6::synapse0x3267870() {
   return (neuron0x324f8b0()*0.00623027);
}

double NNfunction_NG_6::synapse0x32678b0() {
   return (neuron0x324fbf0()*0.0246073);
}

double NNfunction_NG_6::synapse0x32678f0() {
   return (neuron0x324ff30()*0.0230712);
}

double NNfunction_NG_6::synapse0x3267930() {
   return (neuron0x3250270()*0.00143398);
}

double NNfunction_NG_6::synapse0x3267970() {
   return (neuron0x32505b0()*-0.0128067);
}

double NNfunction_NG_6::synapse0x32679b0() {
   return (neuron0x32508f0()*-0.0115544);
}

double NNfunction_NG_6::synapse0x32679f0() {
   return (neuron0x3250c30()*-0.0626065);
}

double NNfunction_NG_6::synapse0x3267a30() {
   return (neuron0x3250f70()*0.448378);
}

double NNfunction_NG_6::synapse0x3267a70() {
   return (neuron0x32512b0()*-0.196587);
}

double NNfunction_NG_6::synapse0x3267ab0() {
   return (neuron0x32515f0()*-0.0432256);
}

double NNfunction_NG_6::synapse0x3267af0() {
   return (neuron0x3251930()*0.0130344);
}

double NNfunction_NG_6::synapse0x3267b30() {
   return (neuron0x3251c70()*0.0793522);
}

double NNfunction_NG_6::synapse0x32675c0() {
   return (neuron0x3251fb0()*0.0405681);
}

double NNfunction_NG_6::synapse0x3267600() {
   return (neuron0x3252510()*0.0109076);
}

double NNfunction_NG_6::synapse0x3267c80() {
   return (neuron0x3252730()*0.0440762);
}

double NNfunction_NG_6::synapse0x3267cc0() {
   return (neuron0x3252a70()*-0.0560327);
}

double NNfunction_NG_6::synapse0x3267d00() {
   return (neuron0x3252db0()*0.0453961);
}

double NNfunction_NG_6::synapse0x3267d40() {
   return (neuron0x32530f0()*0.0207276);
}

double NNfunction_NG_6::synapse0x3267d80() {
   return (neuron0x3253430()*-0.0180267);
}

double NNfunction_NG_6::synapse0x3267dc0() {
   return (neuron0x3253770()*-0.00164198);
}

double NNfunction_NG_6::synapse0x3268140() {
   return (neuron0x324ebb0()*0.107451);
}

double NNfunction_NG_6::synapse0x3268180() {
   return (neuron0x324eef0()*0.117431);
}

double NNfunction_NG_6::synapse0x32681c0() {
   return (neuron0x324f230()*0.0931867);
}

double NNfunction_NG_6::synapse0x3268200() {
   return (neuron0x324f570()*-0.845093);
}

double NNfunction_NG_6::synapse0x3268240() {
   return (neuron0x324f8b0()*-0.361634);
}

double NNfunction_NG_6::synapse0x3268280() {
   return (neuron0x324fbf0()*-0.09283);
}

double NNfunction_NG_6::synapse0x32682c0() {
   return (neuron0x324ff30()*-0.103643);
}

double NNfunction_NG_6::synapse0x3268300() {
   return (neuron0x3250270()*0.0484143);
}

double NNfunction_NG_6::synapse0x3268340() {
   return (neuron0x32505b0()*0.00536938);
}

double NNfunction_NG_6::synapse0x3268380() {
   return (neuron0x32508f0()*0.0790194);
}

double NNfunction_NG_6::synapse0x32683c0() {
   return (neuron0x3250c30()*-0.00697777);
}

double NNfunction_NG_6::synapse0x3268400() {
   return (neuron0x3250f70()*0.150048);
}

double NNfunction_NG_6::synapse0x3268440() {
   return (neuron0x32512b0()*0.00800794);
}

double NNfunction_NG_6::synapse0x3268480() {
   return (neuron0x32515f0()*-0.114014);
}

double NNfunction_NG_6::synapse0x32684c0() {
   return (neuron0x3251930()*0.447557);
}

double NNfunction_NG_6::synapse0x3268500() {
   return (neuron0x3251c70()*-0.274285);
}

double NNfunction_NG_6::synapse0x3267f90() {
   return (neuron0x3251fb0()*-0.193427);
}

double NNfunction_NG_6::synapse0x3267fd0() {
   return (neuron0x3252510()*0.316268);
}

double NNfunction_NG_6::synapse0x3268650() {
   return (neuron0x3252730()*0.254577);
}

double NNfunction_NG_6::synapse0x3268690() {
   return (neuron0x3252a70()*0.0947688);
}

double NNfunction_NG_6::synapse0x32686d0() {
   return (neuron0x3252db0()*-0.387438);
}

double NNfunction_NG_6::synapse0x3268710() {
   return (neuron0x32530f0()*-0.463874);
}

double NNfunction_NG_6::synapse0x3268750() {
   return (neuron0x3253430()*0.0179656);
}

double NNfunction_NG_6::synapse0x3268790() {
   return (neuron0x3253770()*0.125328);
}

double NNfunction_NG_6::synapse0x3268b10() {
   return (neuron0x324ebb0()*-0.00316282);
}

double NNfunction_NG_6::synapse0x3268b50() {
   return (neuron0x324eef0()*-0.0241354);
}

double NNfunction_NG_6::synapse0x3268b90() {
   return (neuron0x324f230()*-0.595899);
}

double NNfunction_NG_6::synapse0x3268bd0() {
   return (neuron0x324f570()*0.281363);
}

double NNfunction_NG_6::synapse0x3268c10() {
   return (neuron0x324f8b0()*0.0269957);
}

double NNfunction_NG_6::synapse0x3268c50() {
   return (neuron0x324fbf0()*0.0117161);
}

double NNfunction_NG_6::synapse0x3268c90() {
   return (neuron0x324ff30()*-0.0384687);
}

double NNfunction_NG_6::synapse0x3268cd0() {
   return (neuron0x3250270()*-0.000360837);
}

double NNfunction_NG_6::synapse0x3268d10() {
   return (neuron0x32505b0()*-0.0128593);
}

double NNfunction_NG_6::synapse0x3268d50() {
   return (neuron0x32508f0()*-0.00537504);
}

double NNfunction_NG_6::synapse0x3268d90() {
   return (neuron0x3250c30()*-0.00159462);
}

double NNfunction_NG_6::synapse0x3268dd0() {
   return (neuron0x3250f70()*-0.0982815);
}

double NNfunction_NG_6::synapse0x3268e10() {
   return (neuron0x32512b0()*0.298339);
}

double NNfunction_NG_6::synapse0x3268e50() {
   return (neuron0x32515f0()*-0.0848618);
}

double NNfunction_NG_6::synapse0x3268e90() {
   return (neuron0x3251930()*0.155938);
}

double NNfunction_NG_6::synapse0x3268ed0() {
   return (neuron0x3251c70()*0.166118);
}

double NNfunction_NG_6::synapse0x3268960() {
   return (neuron0x3251fb0()*-0.0827784);
}

double NNfunction_NG_6::synapse0x32689a0() {
   return (neuron0x3252510()*0.193517);
}

double NNfunction_NG_6::synapse0x3269020() {
   return (neuron0x3252730()*0.13157);
}

double NNfunction_NG_6::synapse0x3269060() {
   return (neuron0x3252a70()*0.0223655);
}

double NNfunction_NG_6::synapse0x32690a0() {
   return (neuron0x3252db0()*0.0406122);
}

double NNfunction_NG_6::synapse0x32690e0() {
   return (neuron0x32530f0()*-0.0126374);
}

double NNfunction_NG_6::synapse0x3269120() {
   return (neuron0x3253430()*0.017845);
}

double NNfunction_NG_6::synapse0x3269160() {
   return (neuron0x3253770()*0.235165);
}

double NNfunction_NG_6::synapse0x32694e0() {
   return (neuron0x324ebb0()*0.00494096);
}

double NNfunction_NG_6::synapse0x325dab0() {
   return (neuron0x324eef0()*0.117166);
}

double NNfunction_NG_6::synapse0x325daf0() {
   return (neuron0x324f230()*0.291066);
}

double NNfunction_NG_6::synapse0x325db30() {
   return (neuron0x324f570()*0.153333);
}

double NNfunction_NG_6::synapse0x325dd80() {
   return (neuron0x324f8b0()*0.0830278);
}

double NNfunction_NG_6::synapse0x325ddc0() {
   return (neuron0x324fbf0()*-0.190333);
}

double NNfunction_NG_6::synapse0x325de00() {
   return (neuron0x324ff30()*0.201392);
}

double NNfunction_NG_6::synapse0x325e050() {
   return (neuron0x3250270()*0.0775107);
}

double NNfunction_NG_6::synapse0x325e090() {
   return (neuron0x32505b0()*-0.00719645);
}

double NNfunction_NG_6::synapse0x325e2e0() {
   return (neuron0x32508f0()*-0.113737);
}

double NNfunction_NG_6::synapse0x325e320() {
   return (neuron0x3250c30()*-0.0782137);
}

double NNfunction_NG_6::synapse0x325e360() {
   return (neuron0x3250f70()*0.303803);
}

double NNfunction_NG_6::synapse0x325e5b0() {
   return (neuron0x32512b0()*0.165797);
}

double NNfunction_NG_6::synapse0x325e5f0() {
   return (neuron0x32515f0()*0.00791517);
}

double NNfunction_NG_6::synapse0x325e840() {
   return (neuron0x3251930()*0.0943422);
}

double NNfunction_NG_6::synapse0x325e880() {
   return (neuron0x3251c70()*0.442647);
}

double NNfunction_NG_6::synapse0x3269330() {
   return (neuron0x3251fb0()*-0.174847);
}

double NNfunction_NG_6::synapse0x3269370() {
   return (neuron0x3252510()*-0.0787096);
}

double NNfunction_NG_6::synapse0x325e9d0() {
   return (neuron0x3252730()*0.319302);
}

double NNfunction_NG_6::synapse0x325eee0() {
   return (neuron0x3252a70()*-0.101732);
}

double NNfunction_NG_6::synapse0x325ef20() {
   return (neuron0x3252db0()*0.100502);
}

double NNfunction_NG_6::synapse0x325ef60() {
   return (neuron0x32530f0()*0.0111978);
}

double NNfunction_NG_6::synapse0x325f1b0() {
   return (neuron0x3253430()*-0.0830826);
}

double NNfunction_NG_6::synapse0x325f1f0() {
   return (neuron0x3253770()*0.098369);
}

double NNfunction_NG_6::synapse0x325eaa0() {
   return (neuron0x324ebb0()*-0.0189147);
}

double NNfunction_NG_6::synapse0x325eae0() {
   return (neuron0x324eef0()*0.0114209);
}

double NNfunction_NG_6::synapse0x325eb20() {
   return (neuron0x324f230()*0.20654);
}

double NNfunction_NG_6::synapse0x325eb60() {
   return (neuron0x324f570()*0.0968391);
}

double NNfunction_NG_6::synapse0x325f4e0() {
   return (neuron0x324f8b0()*-0.0198746);
}

double NNfunction_NG_6::synapse0x326b830() {
   return (neuron0x324fbf0()*0.00216082);
}

double NNfunction_NG_6::synapse0x326b870() {
   return (neuron0x324ff30()*-0.00501861);
}

double NNfunction_NG_6::synapse0x326b8b0() {
   return (neuron0x3250270()*0.000910282);
}

double NNfunction_NG_6::synapse0x326b8f0() {
   return (neuron0x32505b0()*-0.00343154);
}

double NNfunction_NG_6::synapse0x326b930() {
   return (neuron0x32508f0()*0.0134239);
}

double NNfunction_NG_6::synapse0x326b970() {
   return (neuron0x3250c30()*0.0145501);
}

double NNfunction_NG_6::synapse0x326b9b0() {
   return (neuron0x3250f70()*2.87516);
}

double NNfunction_NG_6::synapse0x326b9f0() {
   return (neuron0x32512b0()*-0.197373);
}

double NNfunction_NG_6::synapse0x326ba30() {
   return (neuron0x32515f0()*0.0563864);
}

double NNfunction_NG_6::synapse0x326ba70() {
   return (neuron0x3251930()*-0.0208496);
}

double NNfunction_NG_6::synapse0x326bab0() {
   return (neuron0x3251c70()*-0.00372092);
}

double NNfunction_NG_6::synapse0x325f3c0() {
   return (neuron0x3251fb0()*0.0216227);
}

double NNfunction_NG_6::synapse0x325f400() {
   return (neuron0x3252510()*-0.0246716);
}

double NNfunction_NG_6::synapse0x326bc00() {
   return (neuron0x3252730()*-0.0137749);
}

double NNfunction_NG_6::synapse0x326bc40() {
   return (neuron0x3252a70()*0.00832328);
}

double NNfunction_NG_6::synapse0x326bc80() {
   return (neuron0x3252db0()*-0.00703034);
}

double NNfunction_NG_6::synapse0x326bcc0() {
   return (neuron0x32530f0()*-0.00702891);
}

double NNfunction_NG_6::synapse0x326bd00() {
   return (neuron0x3253430()*0.0120712);
}

double NNfunction_NG_6::synapse0x326bd40() {
   return (neuron0x3253770()*0.0205926);
}

double NNfunction_NG_6::synapse0x326c0c0() {
   return (neuron0x324ebb0()*-0.0160368);
}

double NNfunction_NG_6::synapse0x326c100() {
   return (neuron0x324eef0()*-0.0260594);
}

double NNfunction_NG_6::synapse0x326c140() {
   return (neuron0x324f230()*-1.7546);
}

double NNfunction_NG_6::synapse0x326c180() {
   return (neuron0x324f570()*0.0898864);
}

double NNfunction_NG_6::synapse0x326c1c0() {
   return (neuron0x324f8b0()*0.0324261);
}

double NNfunction_NG_6::synapse0x326c200() {
   return (neuron0x324fbf0()*-0.00145684);
}

double NNfunction_NG_6::synapse0x326c240() {
   return (neuron0x324ff30()*-0.0131876);
}

double NNfunction_NG_6::synapse0x326c280() {
   return (neuron0x3250270()*0.00838175);
}

double NNfunction_NG_6::synapse0x326c2c0() {
   return (neuron0x32505b0()*0.0109161);
}

double NNfunction_NG_6::synapse0x326c300() {
   return (neuron0x32508f0()*-0.0213984);
}

double NNfunction_NG_6::synapse0x326c340() {
   return (neuron0x3250c30()*-0.00557676);
}

double NNfunction_NG_6::synapse0x326c380() {
   return (neuron0x3250f70()*-0.258693);
}

double NNfunction_NG_6::synapse0x326c3c0() {
   return (neuron0x32512b0()*0.396621);
}

double NNfunction_NG_6::synapse0x326c400() {
   return (neuron0x32515f0()*-0.0531066);
}

double NNfunction_NG_6::synapse0x326c440() {
   return (neuron0x3251930()*0.177148);
}

double NNfunction_NG_6::synapse0x326c480() {
   return (neuron0x3251c70()*0.1839);
}

double NNfunction_NG_6::synapse0x326bf10() {
   return (neuron0x3251fb0()*-0.0264715);
}

double NNfunction_NG_6::synapse0x326bf50() {
   return (neuron0x3252510()*0.187972);
}

double NNfunction_NG_6::synapse0x326c5d0() {
   return (neuron0x3252730()*0.170008);
}

double NNfunction_NG_6::synapse0x326c610() {
   return (neuron0x3252a70()*0.00107819);
}

double NNfunction_NG_6::synapse0x326c650() {
   return (neuron0x3252db0()*0.0287819);
}

double NNfunction_NG_6::synapse0x326c690() {
   return (neuron0x32530f0()*-0.0128411);
}

double NNfunction_NG_6::synapse0x326c6d0() {
   return (neuron0x3253430()*-0.017477);
}

double NNfunction_NG_6::synapse0x326c710() {
   return (neuron0x3253770()*0.27768);
}

double NNfunction_NG_6::synapse0x326ca90() {
   return (neuron0x324ebb0()*0.00807028);
}

double NNfunction_NG_6::synapse0x326cad0() {
   return (neuron0x324eef0()*0.00160734);
}

double NNfunction_NG_6::synapse0x326cb10() {
   return (neuron0x324f230()*0.517055);
}

double NNfunction_NG_6::synapse0x326cb50() {
   return (neuron0x324f570()*-0.0169825);
}

double NNfunction_NG_6::synapse0x326cb90() {
   return (neuron0x324f8b0()*0.00331244);
}

double NNfunction_NG_6::synapse0x326cbd0() {
   return (neuron0x324fbf0()*-0.00229139);
}

double NNfunction_NG_6::synapse0x326cc10() {
   return (neuron0x324ff30()*-0.00202289);
}

double NNfunction_NG_6::synapse0x326cc50() {
   return (neuron0x3250270()*-0.00111694);
}

double NNfunction_NG_6::synapse0x326cc90() {
   return (neuron0x32505b0()*-0.00665997);
}

double NNfunction_NG_6::synapse0x326ccd0() {
   return (neuron0x32508f0()*0.00947025);
}

double NNfunction_NG_6::synapse0x326cd10() {
   return (neuron0x3250c30()*0.0102138);
}

double NNfunction_NG_6::synapse0x326cd50() {
   return (neuron0x3250f70()*0.998658);
}

double NNfunction_NG_6::synapse0x326cd90() {
   return (neuron0x32512b0()*-0.0838657);
}

double NNfunction_NG_6::synapse0x326cdd0() {
   return (neuron0x32515f0()*0.0191314);
}

double NNfunction_NG_6::synapse0x326ce10() {
   return (neuron0x3251930()*0.00183549);
}

double NNfunction_NG_6::synapse0x326ce50() {
   return (neuron0x3251c70()*0.00832234);
}

double NNfunction_NG_6::synapse0x326c8e0() {
   return (neuron0x3251fb0()*0.0188043);
}

double NNfunction_NG_6::synapse0x326c920() {
   return (neuron0x3252510()*0.00472919);
}

double NNfunction_NG_6::synapse0x326cfa0() {
   return (neuron0x3252730()*0.00716587);
}

double NNfunction_NG_6::synapse0x326cfe0() {
   return (neuron0x3252a70()*0.00512023);
}

double NNfunction_NG_6::synapse0x326d020() {
   return (neuron0x3252db0()*-0.00329652);
}

double NNfunction_NG_6::synapse0x326d060() {
   return (neuron0x32530f0()*-0.00252169);
}

double NNfunction_NG_6::synapse0x326d0a0() {
   return (neuron0x3253430()*0.00816512);
}

double NNfunction_NG_6::synapse0x326d0e0() {
   return (neuron0x3253770()*-0.403145);
}

double NNfunction_NG_6::synapse0x326d460() {
   return (neuron0x324ebb0()*-0.0220699);
}

double NNfunction_NG_6::synapse0x326d4a0() {
   return (neuron0x324eef0()*-0.0052922);
}

double NNfunction_NG_6::synapse0x326d4e0() {
   return (neuron0x324f230()*3.51888);
}

double NNfunction_NG_6::synapse0x326d520() {
   return (neuron0x324f570()*-0.0106227);
}

double NNfunction_NG_6::synapse0x326d560() {
   return (neuron0x324f8b0()*0.0210117);
}

double NNfunction_NG_6::synapse0x326d5a0() {
   return (neuron0x324fbf0()*0.0154474);
}

double NNfunction_NG_6::synapse0x326d5e0() {
   return (neuron0x324ff30()*0.0044801);
}

double NNfunction_NG_6::synapse0x326d620() {
   return (neuron0x3250270()*-0.0001976);
}

double NNfunction_NG_6::synapse0x326d660() {
   return (neuron0x32505b0()*0.00059214);
}

double NNfunction_NG_6::synapse0x326d6a0() {
   return (neuron0x32508f0()*-0.0034692);
}

double NNfunction_NG_6::synapse0x326d6e0() {
   return (neuron0x3250c30()*-0.00273768);
}

double NNfunction_NG_6::synapse0x326d720() {
   return (neuron0x3250f70()*0.103303);
}

double NNfunction_NG_6::synapse0x326d760() {
   return (neuron0x32512b0()*0.0278544);
}

double NNfunction_NG_6::synapse0x326d7a0() {
   return (neuron0x32515f0()*0.0063186);
}

double NNfunction_NG_6::synapse0x326d7e0() {
   return (neuron0x3251930()*-0.00428112);
}

double NNfunction_NG_6::synapse0x326d820() {
   return (neuron0x3251c70()*-0.00890382);
}

double NNfunction_NG_6::synapse0x326d2b0() {
   return (neuron0x3251fb0()*-0.000502557);
}

double NNfunction_NG_6::synapse0x326d2f0() {
   return (neuron0x3252510()*-0.0101984);
}

double NNfunction_NG_6::synapse0x326d970() {
   return (neuron0x3252730()*0.00248672);
}

double NNfunction_NG_6::synapse0x326d9b0() {
   return (neuron0x3252a70()*-0.00347634);
}

double NNfunction_NG_6::synapse0x326d9f0() {
   return (neuron0x3252db0()*-0.00512874);
}

double NNfunction_NG_6::synapse0x326da30() {
   return (neuron0x32530f0()*0.00212749);
}

double NNfunction_NG_6::synapse0x326da70() {
   return (neuron0x3253430()*-0.00652912);
}

double NNfunction_NG_6::synapse0x326dab0() {
   return (neuron0x3253770()*-1.14565);
}

double NNfunction_NG_6::synapse0x326de30() {
   return (neuron0x324ebb0()*-0.0415467);
}

double NNfunction_NG_6::synapse0x326de70() {
   return (neuron0x324eef0()*-0.0109672);
}

double NNfunction_NG_6::synapse0x326deb0() {
   return (neuron0x324f230()*-0.900238);
}

double NNfunction_NG_6::synapse0x326def0() {
   return (neuron0x324f570()*-0.0578886);
}

double NNfunction_NG_6::synapse0x326df30() {
   return (neuron0x324f8b0()*0.0185304);
}

double NNfunction_NG_6::synapse0x326df70() {
   return (neuron0x324fbf0()*-0.0145981);
}

double NNfunction_NG_6::synapse0x326dfb0() {
   return (neuron0x324ff30()*0.0145227);
}

double NNfunction_NG_6::synapse0x326dff0() {
   return (neuron0x3250270()*-0.00982269);
}

double NNfunction_NG_6::synapse0x326e030() {
   return (neuron0x32505b0()*-0.00170925);
}

double NNfunction_NG_6::synapse0x326e070() {
   return (neuron0x32508f0()*0.0330656);
}

double NNfunction_NG_6::synapse0x326e0b0() {
   return (neuron0x3250c30()*-0.0234858);
}

double NNfunction_NG_6::synapse0x326e0f0() {
   return (neuron0x3250f70()*0.436112);
}

double NNfunction_NG_6::synapse0x326e130() {
   return (neuron0x32512b0()*0.137761);
}

double NNfunction_NG_6::synapse0x326e170() {
   return (neuron0x32515f0()*0.0126384);
}

double NNfunction_NG_6::synapse0x326e1b0() {
   return (neuron0x3251930()*0.0167731);
}

double NNfunction_NG_6::synapse0x326e1f0() {
   return (neuron0x3251c70()*0.0186885);
}

double NNfunction_NG_6::synapse0x326dc80() {
   return (neuron0x3251fb0()*0.0531495);
}

double NNfunction_NG_6::synapse0x326dcc0() {
   return (neuron0x3252510()*-0.0134939);
}

double NNfunction_NG_6::synapse0x326e340() {
   return (neuron0x3252730()*0.00129671);
}

double NNfunction_NG_6::synapse0x326e380() {
   return (neuron0x3252a70()*-0.0436679);
}

double NNfunction_NG_6::synapse0x326e3c0() {
   return (neuron0x3252db0()*0.0358416);
}

double NNfunction_NG_6::synapse0x326e400() {
   return (neuron0x32530f0()*-0.014256);
}

double NNfunction_NG_6::synapse0x326e440() {
   return (neuron0x3253430()*-0.0146359);
}

double NNfunction_NG_6::synapse0x326e480() {
   return (neuron0x3253770()*-1.19984);
}

double NNfunction_NG_6::synapse0x326e800() {
   return (neuron0x324ebb0()*0.0489832);
}

double NNfunction_NG_6::synapse0x326e840() {
   return (neuron0x324eef0()*0.104776);
}

double NNfunction_NG_6::synapse0x326e880() {
   return (neuron0x324f230()*0.109943);
}

double NNfunction_NG_6::synapse0x326e8c0() {
   return (neuron0x324f570()*1.09874);
}

double NNfunction_NG_6::synapse0x326e900() {
   return (neuron0x324f8b0()*-0.0930066);
}

double NNfunction_NG_6::synapse0x326e940() {
   return (neuron0x324fbf0()*-0.0724616);
}

double NNfunction_NG_6::synapse0x326e980() {
   return (neuron0x324ff30()*0.00257469);
}

double NNfunction_NG_6::synapse0x326e9c0() {
   return (neuron0x3250270()*0.0274306);
}

double NNfunction_NG_6::synapse0x326ea00() {
   return (neuron0x32505b0()*-0.017618);
}

double NNfunction_NG_6::synapse0x326ea40() {
   return (neuron0x32508f0()*-0.0332316);
}

double NNfunction_NG_6::synapse0x326ea80() {
   return (neuron0x3250c30()*0.241641);
}

double NNfunction_NG_6::synapse0x326eac0() {
   return (neuron0x3250f70()*-0.0184578);
}

double NNfunction_NG_6::synapse0x326eb00() {
   return (neuron0x32512b0()*-0.933623);
}

double NNfunction_NG_6::synapse0x326eb40() {
   return (neuron0x32515f0()*0.140665);
}

double NNfunction_NG_6::synapse0x326eb80() {
   return (neuron0x3251930()*0.0537359);
}

double NNfunction_NG_6::synapse0x326ebc0() {
   return (neuron0x3251c70()*0.0676467);
}

double NNfunction_NG_6::synapse0x326e650() {
   return (neuron0x3251fb0()*0.233223);
}

double NNfunction_NG_6::synapse0x326e690() {
   return (neuron0x3252510()*-0.0268432);
}

double NNfunction_NG_6::synapse0x326ed10() {
   return (neuron0x3252730()*-0.0166686);
}

double NNfunction_NG_6::synapse0x326ed50() {
   return (neuron0x3252a70()*0.45202);
}

double NNfunction_NG_6::synapse0x326ed90() {
   return (neuron0x3252db0()*-0.194076);
}

double NNfunction_NG_6::synapse0x326edd0() {
   return (neuron0x32530f0()*-0.0911064);
}

double NNfunction_NG_6::synapse0x326ee10() {
   return (neuron0x3253430()*-0.135041);
}

double NNfunction_NG_6::synapse0x326ee50() {
   return (neuron0x3253770()*-0.149992);
}

double NNfunction_NG_6::synapse0x326f1d0() {
   return (neuron0x324ebb0()*0.00435173);
}

double NNfunction_NG_6::synapse0x326f210() {
   return (neuron0x324eef0()*-0.00221789);
}

double NNfunction_NG_6::synapse0x326f250() {
   return (neuron0x324f230()*-0.0314801);
}

double NNfunction_NG_6::synapse0x326f290() {
   return (neuron0x324f570()*-3.15773);
}

double NNfunction_NG_6::synapse0x326f2d0() {
   return (neuron0x324f8b0()*0.000456969);
}

double NNfunction_NG_6::synapse0x326f310() {
   return (neuron0x324fbf0()*0.00166931);
}

double NNfunction_NG_6::synapse0x326f350() {
   return (neuron0x324ff30()*-0.00264987);
}

double NNfunction_NG_6::synapse0x326f390() {
   return (neuron0x3250270()*-0.00103127);
}

double NNfunction_NG_6::synapse0x326f3d0() {
   return (neuron0x32505b0()*-0.00786563);
}

double NNfunction_NG_6::synapse0x326f410() {
   return (neuron0x32508f0()*-0.00256172);
}

double NNfunction_NG_6::synapse0x326f450() {
   return (neuron0x3250c30()*-0.00655718);
}

double NNfunction_NG_6::synapse0x326f490() {
   return (neuron0x3250f70()*0.033548);
}

double NNfunction_NG_6::synapse0x326f4d0() {
   return (neuron0x32512b0()*-0.112861);
}

double NNfunction_NG_6::synapse0x326f510() {
   return (neuron0x32515f0()*-0.0036182);
}

double NNfunction_NG_6::synapse0x326f550() {
   return (neuron0x3251930()*0.00846603);
}

double NNfunction_NG_6::synapse0x326f590() {
   return (neuron0x3251c70()*0.0136537);
}

double NNfunction_NG_6::synapse0x326f020() {
   return (neuron0x3251fb0()*0.00396291);
}

double NNfunction_NG_6::synapse0x326f060() {
   return (neuron0x3252510()*0.00659075);
}

double NNfunction_NG_6::synapse0x326f6e0() {
   return (neuron0x3252730()*0.00651238);
}

double NNfunction_NG_6::synapse0x326f720() {
   return (neuron0x3252a70()*-0.00629163);
}

double NNfunction_NG_6::synapse0x326f760() {
   return (neuron0x3252db0()*0.00925633);
}

double NNfunction_NG_6::synapse0x326f7a0() {
   return (neuron0x32530f0()*-0.00129823);
}

double NNfunction_NG_6::synapse0x326f7e0() {
   return (neuron0x3253430()*-0.00449159);
}

double NNfunction_NG_6::synapse0x326f820() {
   return (neuron0x3253770()*0.0158308);
}

double NNfunction_NG_6::synapse0x326fba0() {
   return (neuron0x324ebb0()*-0.0275783);
}

double NNfunction_NG_6::synapse0x326fbe0() {
   return (neuron0x324eef0()*0.00969474);
}

double NNfunction_NG_6::synapse0x326fc20() {
   return (neuron0x324f230()*-4.61205);
}

double NNfunction_NG_6::synapse0x326fc60() {
   return (neuron0x324f570()*-0.00814194);
}

double NNfunction_NG_6::synapse0x326fca0() {
   return (neuron0x324f8b0()*0.0091705);
}

double NNfunction_NG_6::synapse0x326fce0() {
   return (neuron0x324fbf0()*-0.0054633);
}

double NNfunction_NG_6::synapse0x326fd20() {
   return (neuron0x324ff30()*-0.00815081);
}

double NNfunction_NG_6::synapse0x326fd60() {
   return (neuron0x3250270()*-0.0106746);
}

double NNfunction_NG_6::synapse0x326fda0() {
   return (neuron0x32505b0()*0.00984002);
}

double NNfunction_NG_6::synapse0x326fde0() {
   return (neuron0x32508f0()*-0.00354146);
}

double NNfunction_NG_6::synapse0x326fe20() {
   return (neuron0x3250c30()*0.00545498);
}

double NNfunction_NG_6::synapse0x326fe60() {
   return (neuron0x3250f70()*-0.0352218);
}

double NNfunction_NG_6::synapse0x326fea0() {
   return (neuron0x32512b0()*-0.0113753);
}

double NNfunction_NG_6::synapse0x326fee0() {
   return (neuron0x32515f0()*-0.0099054);
}

double NNfunction_NG_6::synapse0x326ff20() {
   return (neuron0x3251930()*0.000860472);
}

double NNfunction_NG_6::synapse0x326ff60() {
   return (neuron0x3251c70()*-0.00243544);
}

double NNfunction_NG_6::synapse0x326f9f0() {
   return (neuron0x3251fb0()*0.0101955);
}

double NNfunction_NG_6::synapse0x326fa30() {
   return (neuron0x3252510()*0.00382547);
}

double NNfunction_NG_6::synapse0x32700b0() {
   return (neuron0x3252730()*0.00423815);
}

double NNfunction_NG_6::synapse0x32700f0() {
   return (neuron0x3252a70()*9.32377e-05);
}

double NNfunction_NG_6::synapse0x3270130() {
   return (neuron0x3252db0()*0.00628327);
}

double NNfunction_NG_6::synapse0x3270170() {
   return (neuron0x32530f0()*0.0104703);
}

double NNfunction_NG_6::synapse0x32701b0() {
   return (neuron0x3253430()*-0.00471615);
}

double NNfunction_NG_6::synapse0x32701f0() {
   return (neuron0x3253770()*-2.69224);
}

double NNfunction_NG_6::synapse0x3258ca0() {
   return (neuron0x324ebb0()*-0.216815);
}

double NNfunction_NG_6::synapse0x3258ce0() {
   return (neuron0x324eef0()*-0.0588539);
}

double NNfunction_NG_6::synapse0x3258d20() {
   return (neuron0x324f230()*0.132258);
}

double NNfunction_NG_6::synapse0x3258d60() {
   return (neuron0x324f570()*-1.45531);
}

double NNfunction_NG_6::synapse0x3258da0() {
   return (neuron0x324f8b0()*0.156643);
}

double NNfunction_NG_6::synapse0x3258de0() {
   return (neuron0x324fbf0()*-0.264275);
}

double NNfunction_NG_6::synapse0x3258e20() {
   return (neuron0x324ff30()*-0.00284533);
}

double NNfunction_NG_6::synapse0x3258e60() {
   return (neuron0x3250270()*0.0768684);
}

double NNfunction_NG_6::synapse0x3270980() {
   return (neuron0x32505b0()*0.096813);
}

double NNfunction_NG_6::synapse0x32709c0() {
   return (neuron0x32508f0()*-0.0886627);
}

double NNfunction_NG_6::synapse0x3270a00() {
   return (neuron0x3250c30()*0.00536794);
}

double NNfunction_NG_6::synapse0x3270a40() {
   return (neuron0x3250f70()*-0.5286);
}

double NNfunction_NG_6::synapse0x3270a80() {
   return (neuron0x32512b0()*-0.0798077);
}

double NNfunction_NG_6::synapse0x3270ac0() {
   return (neuron0x32515f0()*-0.0985511);
}

double NNfunction_NG_6::synapse0x3270b00() {
   return (neuron0x3251930()*-0.01517);
}

double NNfunction_NG_6::synapse0x3270b40() {
   return (neuron0x3251c70()*0.243169);
}

double NNfunction_NG_6::synapse0x32703c0() {
   return (neuron0x3251fb0()*-0.0884997);
}

double NNfunction_NG_6::synapse0x3270400() {
   return (neuron0x3252510()*-0.0669828);
}

double NNfunction_NG_6::synapse0x3270c90() {
   return (neuron0x3252730()*0.189783);
}

double NNfunction_NG_6::synapse0x3270cd0() {
   return (neuron0x3252a70()*0.00874938);
}

double NNfunction_NG_6::synapse0x3270d10() {
   return (neuron0x3252db0()*-0.05116);
}

double NNfunction_NG_6::synapse0x3270d50() {
   return (neuron0x32530f0()*0.0644466);
}

double NNfunction_NG_6::synapse0x3270d90() {
   return (neuron0x3253430()*-0.0875416);
}

double NNfunction_NG_6::synapse0x3270dd0() {
   return (neuron0x3253770()*-0.0529687);
}

double NNfunction_NG_6::synapse0x3271150() {
   return (neuron0x324ebb0()*-0.250769);
}

double NNfunction_NG_6::synapse0x3271190() {
   return (neuron0x324eef0()*-0.219679);
}

double NNfunction_NG_6::synapse0x32711d0() {
   return (neuron0x324f230()*0.172965);
}

double NNfunction_NG_6::synapse0x3271210() {
   return (neuron0x324f570()*0.861757);
}

double NNfunction_NG_6::synapse0x3271250() {
   return (neuron0x324f8b0()*-0.295364);
}

double NNfunction_NG_6::synapse0x3271290() {
   return (neuron0x324fbf0()*-0.188189);
}

double NNfunction_NG_6::synapse0x32712d0() {
   return (neuron0x324ff30()*-0.156349);
}

double NNfunction_NG_6::synapse0x3271310() {
   return (neuron0x3250270()*0.0257198);
}

double NNfunction_NG_6::synapse0x3271350() {
   return (neuron0x32505b0()*-0.134971);
}

double NNfunction_NG_6::synapse0x3271390() {
   return (neuron0x32508f0()*0.301622);
}

double NNfunction_NG_6::synapse0x32713d0() {
   return (neuron0x3250c30()*0.166777);
}

double NNfunction_NG_6::synapse0x3271410() {
   return (neuron0x3250f70()*0.458563);
}

double NNfunction_NG_6::synapse0x3271450() {
   return (neuron0x32512b0()*0.226235);
}

double NNfunction_NG_6::synapse0x3271490() {
   return (neuron0x32515f0()*0.317851);
}

double NNfunction_NG_6::synapse0x32714d0() {
   return (neuron0x3251930()*-0.316619);
}

double NNfunction_NG_6::synapse0x3271510() {
   return (neuron0x3251c70()*-0.178245);
}

double NNfunction_NG_6::synapse0x3270fa0() {
   return (neuron0x3251fb0()*0.267254);
}

double NNfunction_NG_6::synapse0x3270fe0() {
   return (neuron0x3252510()*0.352155);
}

double NNfunction_NG_6::synapse0x3271660() {
   return (neuron0x3252730()*0.240051);
}

double NNfunction_NG_6::synapse0x32716a0() {
   return (neuron0x3252a70()*0.194804);
}

double NNfunction_NG_6::synapse0x32716e0() {
   return (neuron0x3252db0()*-0.0278044);
}

double NNfunction_NG_6::synapse0x3271720() {
   return (neuron0x32530f0()*-0.20748);
}

double NNfunction_NG_6::synapse0x3271760() {
   return (neuron0x3253430()*-0.111248);
}

double NNfunction_NG_6::synapse0x32717a0() {
   return (neuron0x3253770()*0.0330595);
}

double NNfunction_NG_6::synapse0x3271b20() {
   return (neuron0x324ebb0()*-0.00422441);
}

double NNfunction_NG_6::synapse0x3271b60() {
   return (neuron0x324eef0()*-0.00909163);
}

double NNfunction_NG_6::synapse0x3271ba0() {
   return (neuron0x324f230()*-0.0370878);
}

double NNfunction_NG_6::synapse0x3271be0() {
   return (neuron0x324f570()*2.50868);
}

double NNfunction_NG_6::synapse0x3271c20() {
   return (neuron0x324f8b0()*0.144219);
}

double NNfunction_NG_6::synapse0x3271c60() {
   return (neuron0x324fbf0()*-0.0890375);
}

double NNfunction_NG_6::synapse0x3271ca0() {
   return (neuron0x324ff30()*0.0118971);
}

double NNfunction_NG_6::synapse0x3271ce0() {
   return (neuron0x3250270()*-0.0627582);
}

double NNfunction_NG_6::synapse0x3271d20() {
   return (neuron0x32505b0()*0.00848034);
}

double NNfunction_NG_6::synapse0x3271d60() {
   return (neuron0x32508f0()*0.0395599);
}

double NNfunction_NG_6::synapse0x3271da0() {
   return (neuron0x3250c30()*-0.152004);
}

double NNfunction_NG_6::synapse0x3271de0() {
   return (neuron0x3250f70()*0.281713);
}

double NNfunction_NG_6::synapse0x3271e20() {
   return (neuron0x32512b0()*0.17832);
}

double NNfunction_NG_6::synapse0x3271e60() {
   return (neuron0x32515f0()*-0.125934);
}

double NNfunction_NG_6::synapse0x3271ea0() {
   return (neuron0x3251930()*0.06114);
}

double NNfunction_NG_6::synapse0x3271ee0() {
   return (neuron0x3251c70()*0.211357);
}

double NNfunction_NG_6::synapse0x3271970() {
   return (neuron0x3251fb0()*-0.0582447);
}

double NNfunction_NG_6::synapse0x32719b0() {
   return (neuron0x3252510()*0.164249);
}

double NNfunction_NG_6::synapse0x32624e0() {
   return (neuron0x3252730()*0.0129822);
}

double NNfunction_NG_6::synapse0x3262520() {
   return (neuron0x3252a70()*-0.164488);
}

double NNfunction_NG_6::synapse0x3262560() {
   return (neuron0x3252db0()*-0.00479399);
}

double NNfunction_NG_6::synapse0x32625a0() {
   return (neuron0x32530f0()*0.0156852);
}

double NNfunction_NG_6::synapse0x32625e0() {
   return (neuron0x3253430()*0.0148882);
}

double NNfunction_NG_6::synapse0x3262620() {
   return (neuron0x3253770()*0.0515439);
}

double NNfunction_NG_6::synapse0x32629a0() {
   return (neuron0x324ebb0()*-0.24678);
}

double NNfunction_NG_6::synapse0x32629e0() {
   return (neuron0x324eef0()*0.242958);
}

double NNfunction_NG_6::synapse0x3262a20() {
   return (neuron0x324f230()*0.323955);
}

double NNfunction_NG_6::synapse0x3262a60() {
   return (neuron0x324f570()*0.529306);
}

double NNfunction_NG_6::synapse0x3262aa0() {
   return (neuron0x324f8b0()*-0.0968677);
}

double NNfunction_NG_6::synapse0x3262ae0() {
   return (neuron0x324fbf0()*0.234048);
}

double NNfunction_NG_6::synapse0x3262b20() {
   return (neuron0x324ff30()*0.148613);
}

double NNfunction_NG_6::synapse0x3262b60() {
   return (neuron0x3250270()*0.192967);
}

double NNfunction_NG_6::synapse0x3262ba0() {
   return (neuron0x32505b0()*-0.00639509);
}

double NNfunction_NG_6::synapse0x3262be0() {
   return (neuron0x32508f0()*0.171267);
}

double NNfunction_NG_6::synapse0x3262c20() {
   return (neuron0x3250c30()*-0.0260291);
}

double NNfunction_NG_6::synapse0x3262c60() {
   return (neuron0x3250f70()*-0.147211);
}

double NNfunction_NG_6::synapse0x3262ca0() {
   return (neuron0x32512b0()*-0.312244);
}

double NNfunction_NG_6::synapse0x3262ce0() {
   return (neuron0x32515f0()*0.0915224);
}

double NNfunction_NG_6::synapse0x3262d20() {
   return (neuron0x3251930()*-0.156659);
}

double NNfunction_NG_6::synapse0x3262d60() {
   return (neuron0x3251c70()*-0.297364);
}

double NNfunction_NG_6::synapse0x32627f0() {
   return (neuron0x3251fb0()*0.207718);
}

double NNfunction_NG_6::synapse0x3262830() {
   return (neuron0x3252510()*-0.0474975);
}

double NNfunction_NG_6::synapse0x3262eb0() {
   return (neuron0x3252730()*-0.0809316);
}

double NNfunction_NG_6::synapse0x3262ef0() {
   return (neuron0x3252a70()*-0.357498);
}

double NNfunction_NG_6::synapse0x3262f30() {
   return (neuron0x3252db0()*0.00223222);
}

double NNfunction_NG_6::synapse0x3262f70() {
   return (neuron0x32530f0()*0.105626);
}

double NNfunction_NG_6::synapse0x3262fb0() {
   return (neuron0x3253430()*0.13272);
}

double NNfunction_NG_6::synapse0x3262ff0() {
   return (neuron0x3253770()*-0.452378);
}

double NNfunction_NG_6::synapse0x3263370() {
   return (neuron0x324ebb0()*-0.00490177);
}

double NNfunction_NG_6::synapse0x32633b0() {
   return (neuron0x324eef0()*-0.00155413);
}

double NNfunction_NG_6::synapse0x32633f0() {
   return (neuron0x324f230()*0.0211095);
}

double NNfunction_NG_6::synapse0x3263430() {
   return (neuron0x324f570()*-3.51229);
}

double NNfunction_NG_6::synapse0x3263470() {
   return (neuron0x324f8b0()*0.00584281);
}

double NNfunction_NG_6::synapse0x32634b0() {
   return (neuron0x324fbf0()*0.000102186);
}

double NNfunction_NG_6::synapse0x32634f0() {
   return (neuron0x324ff30()*0.00689512);
}

double NNfunction_NG_6::synapse0x3263530() {
   return (neuron0x3250270()*0.00444456);
}

double NNfunction_NG_6::synapse0x3263570() {
   return (neuron0x32505b0()*0.00362304);
}

double NNfunction_NG_6::synapse0x32635b0() {
   return (neuron0x32508f0()*-0.00696324);
}

double NNfunction_NG_6::synapse0x32635f0() {
   return (neuron0x3250c30()*0.00861782);
}

double NNfunction_NG_6::synapse0x3263630() {
   return (neuron0x3250f70()*0.0702773);
}

double NNfunction_NG_6::synapse0x3263670() {
   return (neuron0x32512b0()*0.0523658);
}

double NNfunction_NG_6::synapse0x32636b0() {
   return (neuron0x32515f0()*-0.00810014);
}

double NNfunction_NG_6::synapse0x32636f0() {
   return (neuron0x3251930()*-0.00324673);
}

double NNfunction_NG_6::synapse0x3263730() {
   return (neuron0x3251c70()*-0.00877175);
}

double NNfunction_NG_6::synapse0x32631c0() {
   return (neuron0x3251fb0()*-0.00983734);
}

double NNfunction_NG_6::synapse0x3263200() {
   return (neuron0x3252510()*-0.0060968);
}

double NNfunction_NG_6::synapse0x3263880() {
   return (neuron0x3252730()*0.00174755);
}

double NNfunction_NG_6::synapse0x32638c0() {
   return (neuron0x3252a70()*0.00583485);
}

double NNfunction_NG_6::synapse0x3263900() {
   return (neuron0x3252db0()*-0.00147207);
}

double NNfunction_NG_6::synapse0x3263940() {
   return (neuron0x32530f0()*-0.000410386);
}

double NNfunction_NG_6::synapse0x3263980() {
   return (neuron0x3253430()*-0.00276516);
}

double NNfunction_NG_6::synapse0x32639c0() {
   return (neuron0x3253770()*0.00546547);
}

double NNfunction_NG_6::synapse0x3263d40() {
   return (neuron0x324ebb0()*-0.150782);
}

double NNfunction_NG_6::synapse0x3263d80() {
   return (neuron0x324eef0()*0.0388068);
}

double NNfunction_NG_6::synapse0x3263dc0() {
   return (neuron0x324f230()*-0.108027);
}

double NNfunction_NG_6::synapse0x3263e00() {
   return (neuron0x324f570()*0.990554);
}

double NNfunction_NG_6::synapse0x3263e40() {
   return (neuron0x324f8b0()*0.139241);
}

double NNfunction_NG_6::synapse0x3263e80() {
   return (neuron0x324fbf0()*0.277714);
}

double NNfunction_NG_6::synapse0x3263ec0() {
   return (neuron0x324ff30()*-0.102746);
}

double NNfunction_NG_6::synapse0x3263f00() {
   return (neuron0x3250270()*-0.112698);
}

double NNfunction_NG_6::synapse0x3263f40() {
   return (neuron0x32505b0()*-0.161675);
}

double NNfunction_NG_6::synapse0x3263f80() {
   return (neuron0x32508f0()*-0.162264);
}

double NNfunction_NG_6::synapse0x3263fc0() {
   return (neuron0x3250c30()*-0.00541481);
}

double NNfunction_NG_6::synapse0x3264000() {
   return (neuron0x3250f70()*-0.834604);
}

double NNfunction_NG_6::synapse0x3264040() {
   return (neuron0x32512b0()*-0.0546796);
}

double NNfunction_NG_6::synapse0x3264080() {
   return (neuron0x32515f0()*-0.315068);
}

double NNfunction_NG_6::synapse0x32640c0() {
   return (neuron0x3251930()*0.333016);
}

double NNfunction_NG_6::synapse0x3264100() {
   return (neuron0x3251c70()*0.0405228);
}

double NNfunction_NG_6::synapse0x3263b90() {
   return (neuron0x3251fb0()*0.124182);
}

double NNfunction_NG_6::synapse0x3263bd0() {
   return (neuron0x3252510()*-0.311992);
}

double NNfunction_NG_6::synapse0x3264250() {
   return (neuron0x3252730()*0.27857);
}

double NNfunction_NG_6::synapse0x3264290() {
   return (neuron0x3252a70()*-0.0763554);
}

double NNfunction_NG_6::synapse0x32642d0() {
   return (neuron0x3252db0()*0.109965);
}

double NNfunction_NG_6::synapse0x3264310() {
   return (neuron0x32530f0()*-0.163007);
}

double NNfunction_NG_6::synapse0x3264350() {
   return (neuron0x3253430()*-0.160839);
}

double NNfunction_NG_6::synapse0x3264390() {
   return (neuron0x3253770()*0.0625248);
}

double NNfunction_NG_6::synapse0x3276260() {
   return (neuron0x324ebb0()*-0.00469161);
}

double NNfunction_NG_6::synapse0x32762a0() {
   return (neuron0x324eef0()*-0.00398359);
}

double NNfunction_NG_6::synapse0x32762e0() {
   return (neuron0x324f230()*0.393691);
}

double NNfunction_NG_6::synapse0x3276320() {
   return (neuron0x324f570()*1.58688);
}

double NNfunction_NG_6::synapse0x3276360() {
   return (neuron0x324f8b0()*0.011965);
}

double NNfunction_NG_6::synapse0x32763a0() {
   return (neuron0x324fbf0()*0.00970146);
}

double NNfunction_NG_6::synapse0x32763e0() {
   return (neuron0x324ff30()*-0.00377276);
}

double NNfunction_NG_6::synapse0x3276420() {
   return (neuron0x3250270()*-0.000564137);
}

double NNfunction_NG_6::synapse0x3276460() {
   return (neuron0x32505b0()*0.0084414);
}

double NNfunction_NG_6::synapse0x32764a0() {
   return (neuron0x32508f0()*0.0190913);
}

double NNfunction_NG_6::synapse0x32764e0() {
   return (neuron0x3250c30()*-0.00969269);
}

double NNfunction_NG_6::synapse0x3276520() {
   return (neuron0x3250f70()*0.995141);
}

double NNfunction_NG_6::synapse0x3276560() {
   return (neuron0x32512b0()*-0.218043);
}

double NNfunction_NG_6::synapse0x32765a0() {
   return (neuron0x32515f0()*0.0136891);
}

double NNfunction_NG_6::synapse0x32765e0() {
   return (neuron0x3251930()*0.00744193);
}

double NNfunction_NG_6::synapse0x3276620() {
   return (neuron0x3251c70()*-0.0189053);
}

double NNfunction_NG_6::synapse0x32643d0() {
   return (neuron0x3251fb0()*-0.00314626);
}

double NNfunction_NG_6::synapse0x3264410() {
   return (neuron0x3252510()*-0.0020127);
}

double NNfunction_NG_6::synapse0x3276770() {
   return (neuron0x3252730()*-0.01679);
}

double NNfunction_NG_6::synapse0x32767b0() {
   return (neuron0x3252a70()*0.00425335);
}

double NNfunction_NG_6::synapse0x32767f0() {
   return (neuron0x3252db0()*0.00172408);
}

double NNfunction_NG_6::synapse0x3276830() {
   return (neuron0x32530f0()*0.002355);
}

double NNfunction_NG_6::synapse0x3276870() {
   return (neuron0x3253430()*-0.00887762);
}

double NNfunction_NG_6::synapse0x32768b0() {
   return (neuron0x3253770()*0.00559491);
}

double NNfunction_NG_6::synapse0x3276c30() {
   return (neuron0x324ebb0()*-0.0082147);
}

double NNfunction_NG_6::synapse0x3276c70() {
   return (neuron0x324eef0()*-0.00803323);
}

double NNfunction_NG_6::synapse0x3276cb0() {
   return (neuron0x324f230()*-0.360664);
}

double NNfunction_NG_6::synapse0x3276cf0() {
   return (neuron0x324f570()*1.73132);
}

double NNfunction_NG_6::synapse0x3276d30() {
   return (neuron0x324f8b0()*0.0159339);
}

double NNfunction_NG_6::synapse0x3276d70() {
   return (neuron0x324fbf0()*0.028105);
}

double NNfunction_NG_6::synapse0x3276db0() {
   return (neuron0x324ff30()*0.0324883);
}

double NNfunction_NG_6::synapse0x3276df0() {
   return (neuron0x3250270()*-0.0286866);
}

double NNfunction_NG_6::synapse0x3276e30() {
   return (neuron0x32505b0()*-0.000741219);
}

double NNfunction_NG_6::synapse0x3276e70() {
   return (neuron0x32508f0()*0.00912655);
}

double NNfunction_NG_6::synapse0x3276eb0() {
   return (neuron0x3250c30()*-0.0188287);
}

double NNfunction_NG_6::synapse0x3276ef0() {
   return (neuron0x3250f70()*-0.107098);
}

double NNfunction_NG_6::synapse0x3276f30() {
   return (neuron0x32512b0()*-0.676687);
}

double NNfunction_NG_6::synapse0x3276f70() {
   return (neuron0x32515f0()*0.00123124);
}

double NNfunction_NG_6::synapse0x3276fb0() {
   return (neuron0x3251930()*0.0291531);
}

double NNfunction_NG_6::synapse0x3276ff0() {
   return (neuron0x3251c70()*0.00105045);
}

double NNfunction_NG_6::synapse0x3276a80() {
   return (neuron0x3251fb0()*-0.0141685);
}

double NNfunction_NG_6::synapse0x3276ac0() {
   return (neuron0x3252510()*0.0387442);
}

double NNfunction_NG_6::synapse0x3277140() {
   return (neuron0x3252730()*-0.00856779);
}

double NNfunction_NG_6::synapse0x3277180() {
   return (neuron0x3252a70()*0.00440245);
}

double NNfunction_NG_6::synapse0x32771c0() {
   return (neuron0x3252db0()*0.0127708);
}

double NNfunction_NG_6::synapse0x3277200() {
   return (neuron0x32530f0()*-0.0135108);
}

double NNfunction_NG_6::synapse0x3277240() {
   return (neuron0x3253430()*0.014266);
}

double NNfunction_NG_6::synapse0x3277280() {
   return (neuron0x3253770()*0.0875034);
}

double NNfunction_NG_6::synapse0x3277600() {
   return (neuron0x324ebb0()*-0.00115005);
}

double NNfunction_NG_6::synapse0x3277640() {
   return (neuron0x324eef0()*0.00981951);
}

double NNfunction_NG_6::synapse0x3277680() {
   return (neuron0x324f230()*-0.0215883);
}

double NNfunction_NG_6::synapse0x32776c0() {
   return (neuron0x324f570()*-1.98906);
}

double NNfunction_NG_6::synapse0x3277700() {
   return (neuron0x324f8b0()*-0.00927695);
}

double NNfunction_NG_6::synapse0x3277740() {
   return (neuron0x324fbf0()*0.000115777);
}

double NNfunction_NG_6::synapse0x3277780() {
   return (neuron0x324ff30()*0.0100055);
}

double NNfunction_NG_6::synapse0x32777c0() {
   return (neuron0x3250270()*-0.0104442);
}

double NNfunction_NG_6::synapse0x3277800() {
   return (neuron0x32505b0()*-0.0108932);
}

double NNfunction_NG_6::synapse0x3277840() {
   return (neuron0x32508f0()*-0.0119297);
}

double NNfunction_NG_6::synapse0x3277880() {
   return (neuron0x3250c30()*0.0140892);
}

double NNfunction_NG_6::synapse0x32778c0() {
   return (neuron0x3250f70()*-0.898694);
}

double NNfunction_NG_6::synapse0x3277900() {
   return (neuron0x32512b0()*0.495135);
}

double NNfunction_NG_6::synapse0x3277940() {
   return (neuron0x32515f0()*-0.0065359);
}

double NNfunction_NG_6::synapse0x3277980() {
   return (neuron0x3251930()*0.000673022);
}

double NNfunction_NG_6::synapse0x32779c0() {
   return (neuron0x3251c70()*0.0200765);
}

double NNfunction_NG_6::synapse0x3277450() {
   return (neuron0x3251fb0()*0.00660084);
}

double NNfunction_NG_6::synapse0x3277490() {
   return (neuron0x3252510()*0.0255424);
}

double NNfunction_NG_6::synapse0x3277b10() {
   return (neuron0x3252730()*0.0282193);
}

double NNfunction_NG_6::synapse0x3277b50() {
   return (neuron0x3252a70()*0.00876981);
}

double NNfunction_NG_6::synapse0x3277b90() {
   return (neuron0x3252db0()*-0.00546796);
}

double NNfunction_NG_6::synapse0x3277bd0() {
   return (neuron0x32530f0()*0.00355612);
}

double NNfunction_NG_6::synapse0x3277c10() {
   return (neuron0x3253430()*0.0106271);
}

double NNfunction_NG_6::synapse0x3277c50() {
   return (neuron0x3253770()*0.0125319);
}

double NNfunction_NG_6::synapse0x3277fd0() {
   return (neuron0x324ebb0()*-0.1086);
}

double NNfunction_NG_6::synapse0x3278010() {
   return (neuron0x324eef0()*0.0530784);
}

double NNfunction_NG_6::synapse0x3278050() {
   return (neuron0x324f230()*0.218015);
}

double NNfunction_NG_6::synapse0x3278090() {
   return (neuron0x324f570()*-0.251478);
}

double NNfunction_NG_6::synapse0x32780d0() {
   return (neuron0x324f8b0()*-0.240183);
}

double NNfunction_NG_6::synapse0x3278110() {
   return (neuron0x324fbf0()*-0.0140966);
}

double NNfunction_NG_6::synapse0x3278150() {
   return (neuron0x324ff30()*-0.0950572);
}

double NNfunction_NG_6::synapse0x3278190() {
   return (neuron0x3250270()*-0.206847);
}

double NNfunction_NG_6::synapse0x32781d0() {
   return (neuron0x32505b0()*-0.193437);
}

double NNfunction_NG_6::synapse0x3278210() {
   return (neuron0x32508f0()*0.320676);
}

double NNfunction_NG_6::synapse0x3278250() {
   return (neuron0x3250c30()*-0.0959209);
}

double NNfunction_NG_6::synapse0x3278290() {
   return (neuron0x3250f70()*0.44907);
}

double NNfunction_NG_6::synapse0x32782d0() {
   return (neuron0x32512b0()*0.895945);
}

double NNfunction_NG_6::synapse0x3278310() {
   return (neuron0x32515f0()*0.202804);
}

double NNfunction_NG_6::synapse0x3278350() {
   return (neuron0x3251930()*-0.0996956);
}

double NNfunction_NG_6::synapse0x3278390() {
   return (neuron0x3251c70()*-0.249593);
}

double NNfunction_NG_6::synapse0x3277e20() {
   return (neuron0x3251fb0()*0.00633749);
}

double NNfunction_NG_6::synapse0x3277e60() {
   return (neuron0x3252510()*-0.165444);
}

double NNfunction_NG_6::synapse0x32784e0() {
   return (neuron0x3252730()*0.179196);
}

double NNfunction_NG_6::synapse0x3278520() {
   return (neuron0x3252a70()*0.147648);
}

double NNfunction_NG_6::synapse0x3278560() {
   return (neuron0x3252db0()*0.123644);
}

double NNfunction_NG_6::synapse0x32785a0() {
   return (neuron0x32530f0()*-0.152435);
}

double NNfunction_NG_6::synapse0x32785e0() {
   return (neuron0x3253430()*0.170176);
}

double NNfunction_NG_6::synapse0x3278620() {
   return (neuron0x3253770()*0.301106);
}

double NNfunction_NG_6::synapse0x3254bc0() {
   return (neuron0x3253c10()*-0.333574);
}

double NNfunction_NG_6::synapse0x3254c00() {
   return (neuron0x3254520()*-1.33349);
}

double NNfunction_NG_6::synapse0x32560d0() {
   return (neuron0x3255000()*0.218442);
}

double NNfunction_NG_6::synapse0x3256110() {
   return (neuron0x300e890()*0.493533);
}

double NNfunction_NG_6::synapse0x3256aa0() {
   return (neuron0x3255e20()*2.58054);
}

double NNfunction_NG_6::synapse0x3256ae0() {
   return (neuron0x32567f0()*-1.74778);
}

double NNfunction_NG_6::synapse0x3257870() {
   return (neuron0x32575c0()*0.0799272);
}

double NNfunction_NG_6::synapse0x32578b0() {
   return (neuron0x3257f90()*2.93118);
}

double NNfunction_NG_6::synapse0x3258240() {
   return (neuron0x3258960()*-0.00862642);
}

double NNfunction_NG_6::synapse0x3258280() {
   return (neuron0x3259440()*1.97545);
}

double NNfunction_NG_6::synapse0x3258c10() {
   return (neuron0x3259e10()*0.564668);
}

double NNfunction_NG_6::synapse0x3258c50() {
   return (neuron0x3256ef0()*-0.409996);
}

double NNfunction_NG_6::synapse0x32596f0() {
   return (neuron0x325b9c0()*0.00495728);
}

double NNfunction_NG_6::synapse0x3259730() {
   return (neuron0x325c390()*-1.17682);
}

double NNfunction_NG_6::synapse0x325a0c0() {
   return (neuron0x325cd60()*-0.039216);
}

double NNfunction_NG_6::synapse0x325a100() {
   return (neuron0x325d730()*-0.00156214);
}

double NNfunction_NG_6::synapse0x32571a0() {
   return (neuron0x325f540()*-0.106298);
}

double NNfunction_NG_6::synapse0x32571e0() {
   return (neuron0x325f820()*-0.6997);
}

double NNfunction_NG_6::synapse0x325bc70() {
   return (neuron0x32601f0()*1.87229);
}

double NNfunction_NG_6::synapse0x325bcb0() {
   return (neuron0x3260bc0()*-1.94292);
}

double NNfunction_NG_6::synapse0x325c640() {
   return (neuron0x3261590()*0.334354);
}

double NNfunction_NG_6::synapse0x325c680() {
   return (neuron0x3261f60()*-1.49062);
}

double NNfunction_NG_6::synapse0x325d010() {
   return (neuron0x325aab0()*1.58139);
}

double NNfunction_NG_6::synapse0x325d050() {
   return (neuron0x325b480()*-0.450458);
}

double NNfunction_NG_6::synapse0x325d9e0() {
   return (neuron0x3264cf0()*0.305889);
}

double NNfunction_NG_6::synapse0x325da20() {
   return (neuron0x32656c0()*-0.0927529);
}

double NNfunction_NG_6::synapse0x3251b50() {
   return (neuron0x3266090()*-0.732067);
}

double NNfunction_NG_6::synapse0x3251b90() {
   return (neuron0x3266a60()*-0.00868271);
}

double NNfunction_NG_6::synapse0x325fad0() {
   return (neuron0x3267430()*0.153308);
}

double NNfunction_NG_6::synapse0x325fb10() {
   return (neuron0x3267e00()*0.0108323);
}

double NNfunction_NG_6::synapse0x32604a0() {
   return (neuron0x32687d0()*-0.179368);
}

double NNfunction_NG_6::synapse0x32604e0() {
   return (neuron0x32691a0()*0.00376333);
}

double NNfunction_NG_6::synapse0x3260e70() {
   return (neuron0x325f230()*-0.190257);
}

double NNfunction_NG_6::synapse0x3260eb0() {
   return (neuron0x326bd80()*0.302805);
}

double NNfunction_NG_6::synapse0x3261840() {
   return (neuron0x326c750()*1.67275);
}

double NNfunction_NG_6::synapse0x3261880() {
   return (neuron0x326d120()*-0.725822);
}

double NNfunction_NG_6::synapse0x3262210() {
   return (neuron0x326daf0()*-0.0867396);
}

double NNfunction_NG_6::synapse0x3262250() {
   return (neuron0x326e4c0()*-0.0250954);
}

double NNfunction_NG_6::synapse0x325ad60() {
   return (neuron0x326ee90()*-1.45114);
}

double NNfunction_NG_6::synapse0x325ada0() {
   return (neuron0x326f860()*1.90914);
}

double NNfunction_NG_6::synapse0x3264610() {
   return (neuron0x3270230()*-0.00246981);
}

double NNfunction_NG_6::synapse0x3264650() {
   return (neuron0x3270e10()*0.00940463);
}

double NNfunction_NG_6::synapse0x3264fa0() {
   return (neuron0x32717e0()*0.0270546);
}

double NNfunction_NG_6::synapse0x3264fe0() {
   return (neuron0x3262660()*-0.0232682);
}

double NNfunction_NG_6::synapse0x3265970() {
   return (neuron0x3263030()*1.11658);
}

double NNfunction_NG_6::synapse0x32659b0() {
   return (neuron0x3263a00()*0.0020125);
}

double NNfunction_NG_6::synapse0x3266340() {
   return (neuron0x3276040()*-0.527178);
}

double NNfunction_NG_6::synapse0x3266380() {
   return (neuron0x32768f0()*-0.240707);
}

double NNfunction_NG_6::synapse0x3266d10() {
   return (neuron0x32772c0()*-0.636352);
}

double NNfunction_NG_6::synapse0x3266d50() {
   return (neuron0x3277c90()*0.0125759);
}

double NNfunction_NG_6::synapse0x3269450() {
   return (neuron0x3253c10()*-1.16471);
}

double NNfunction_NG_6::synapse0x3269490() {
   return (neuron0x3254520()*-0.188922);
}

double NNfunction_NG_6::synapse0x325ea10() {
   return (neuron0x3255000()*0.284565);
}

double NNfunction_NG_6::synapse0x325ea50() {
   return (neuron0x300e890()*-0.65774);
}

double NNfunction_NG_6::synapse0x326c030() {
   return (neuron0x3255e20()*0.5442);
}

double NNfunction_NG_6::synapse0x326c070() {
   return (neuron0x32567f0()*-0.0036145);
}

double NNfunction_NG_6::synapse0x326ca00() {
   return (neuron0x32575c0()*-0.313696);
}

double NNfunction_NG_6::synapse0x326ca40() {
   return (neuron0x3257f90()*0.295977);
}

double NNfunction_NG_6::synapse0x326d3d0() {
   return (neuron0x3258960()*0.0666881);
}

double NNfunction_NG_6::synapse0x326d410() {
   return (neuron0x3259440()*0.27034);
}

double NNfunction_NG_6::synapse0x326dda0() {
   return (neuron0x3259e10()*-0.253535);
}

double NNfunction_NG_6::synapse0x326dde0() {
   return (neuron0x3256ef0()*0.259528);
}

double NNfunction_NG_6::synapse0x326e770() {
   return (neuron0x325b9c0()*-0.0140264);
}

double NNfunction_NG_6::synapse0x326e7b0() {
   return (neuron0x325c390()*-0.163489);
}

double NNfunction_NG_6::synapse0x326f140() {
   return (neuron0x325cd60()*0.396189);
}

double NNfunction_NG_6::synapse0x326f180() {
   return (neuron0x325d730()*-0.00890895);
}

double NNfunction_NG_6::synapse0x326fb10() {
   return (neuron0x325f540()*0.369594);
}

double NNfunction_NG_6::synapse0x326fb50() {
   return (neuron0x325f820()*0.281487);
}

double NNfunction_NG_6::synapse0x32704e0() {
   return (neuron0x32601f0()*0.560834);
}

double NNfunction_NG_6::synapse0x3270520() {
   return (neuron0x3260bc0()*-0.157473);
}

double NNfunction_NG_6::synapse0x32710c0() {
   return (neuron0x3261590()*-0.883346);
}

double NNfunction_NG_6::synapse0x3271100() {
   return (neuron0x3261f60()*-0.123254);
}

double NNfunction_NG_6::synapse0x3271a90() {
   return (neuron0x325aab0()*-1.30607);
}

double NNfunction_NG_6::synapse0x3271ad0() {
   return (neuron0x325b480()*0.375403);
}

double NNfunction_NG_6::synapse0x3262910() {
   return (neuron0x3264cf0()*-0.105625);
}

double NNfunction_NG_6::synapse0x3262950() {
   return (neuron0x32656c0()*0.314423);
}

double NNfunction_NG_6::synapse0x32632e0() {
   return (neuron0x3266090()*0.203458);
}

double NNfunction_NG_6::synapse0x3263320() {
   return (neuron0x3266a60()*0.0339259);
}

double NNfunction_NG_6::synapse0x3263cb0() {
   return (neuron0x3267430()*0.271285);
}

double NNfunction_NG_6::synapse0x3263cf0() {
   return (neuron0x3267e00()*-0.0807037);
}

double NNfunction_NG_6::synapse0x32761d0() {
   return (neuron0x32687d0()*-0.226681);
}

double NNfunction_NG_6::synapse0x3276210() {
   return (neuron0x32691a0()*0.199346);
}

double NNfunction_NG_6::synapse0x3276ba0() {
   return (neuron0x325f230()*-1.03667);
}

double NNfunction_NG_6::synapse0x3276be0() {
   return (neuron0x326bd80()*-0.931396);
}

double NNfunction_NG_6::synapse0x3277570() {
   return (neuron0x326c750()*-0.451503);
}

double NNfunction_NG_6::synapse0x32775b0() {
   return (neuron0x326d120()*0.99744);
}

double NNfunction_NG_6::synapse0x3277f40() {
   return (neuron0x326daf0()*-0.423029);
}

double NNfunction_NG_6::synapse0x3277f80() {
   return (neuron0x326e4c0()*0.173056);
}

double NNfunction_NG_6::synapse0x3253e30() {
   return (neuron0x326ee90()*0.68021);
}

double NNfunction_NG_6::synapse0x3253e70() {
   return (neuron0x326f860()*1.18228);
}

double NNfunction_NG_6::synapse0x32676e0() {
   return (neuron0x3270230()*-0.134025);
}

double NNfunction_NG_6::synapse0x3267720() {
   return (neuron0x3270e10()*-0.0166163);
}

double NNfunction_NG_6::synapse0x3278660() {
   return (neuron0x32717e0()*0.22366);
}

double NNfunction_NG_6::synapse0x32786a0() {
   return (neuron0x3262660()*0.24852);
}

double NNfunction_NG_6::synapse0x32786e0() {
   return (neuron0x3263030()*-0.710339);
}

double NNfunction_NG_6::synapse0x3278720() {
   return (neuron0x3263a00()*-0.0369126);
}

double NNfunction_NG_6::synapse0x327f5d0() {
   return (neuron0x3276040()*-0.128014);
}

double NNfunction_NG_6::synapse0x327f610() {
   return (neuron0x32768f0()*-0.145431);
}

double NNfunction_NG_6::synapse0x327f650() {
   return (neuron0x32772c0()*-0.109341);
}

double NNfunction_NG_6::synapse0x327f690() {
   return (neuron0x3277c90()*-0.0221589);
}

double NNfunction_NG_6::synapse0x327fa10() {
   return (neuron0x3253c10()*-0.258378);
}

double NNfunction_NG_6::synapse0x327fa50() {
   return (neuron0x3254520()*-0.864205);
}

double NNfunction_NG_6::synapse0x327fa90() {
   return (neuron0x3255000()*-0.279195);
}

double NNfunction_NG_6::synapse0x327fad0() {
   return (neuron0x300e890()*-0.00961601);
}

double NNfunction_NG_6::synapse0x327fb10() {
   return (neuron0x3255e20()*-0.67206);
}

double NNfunction_NG_6::synapse0x327fb50() {
   return (neuron0x32567f0()*0.157102);
}

double NNfunction_NG_6::synapse0x327fb90() {
   return (neuron0x32575c0()*-1.17917);
}

double NNfunction_NG_6::synapse0x327fbd0() {
   return (neuron0x3257f90()*1.88242);
}

double NNfunction_NG_6::synapse0x327fc10() {
   return (neuron0x3258960()*-0.477845);
}

double NNfunction_NG_6::synapse0x327fc50() {
   return (neuron0x3259440()*1.70771);
}

double NNfunction_NG_6::synapse0x327fc90() {
   return (neuron0x3259e10()*0.11989);
}

double NNfunction_NG_6::synapse0x327fcd0() {
   return (neuron0x3256ef0()*1.34252);
}

double NNfunction_NG_6::synapse0x327fd10() {
   return (neuron0x325b9c0()*0.494769);
}

double NNfunction_NG_6::synapse0x327fd50() {
   return (neuron0x325c390()*-1.22124);
}

double NNfunction_NG_6::synapse0x327fd90() {
   return (neuron0x325cd60()*-0.968681);
}

double NNfunction_NG_6::synapse0x327fdd0() {
   return (neuron0x325d730()*-0.251374);
}

double NNfunction_NG_6::synapse0x327f860() {
   return (neuron0x325f540()*-1.67749);
}

double NNfunction_NG_6::synapse0x327f8a0() {
   return (neuron0x325f820()*-1.05588);
}

double NNfunction_NG_6::synapse0x327ff20() {
   return (neuron0x32601f0()*-0.232136);
}

double NNfunction_NG_6::synapse0x327ff60() {
   return (neuron0x3260bc0()*-1.15754);
}

double NNfunction_NG_6::synapse0x327ffa0() {
   return (neuron0x3261590()*0.418074);
}

double NNfunction_NG_6::synapse0x327ffe0() {
   return (neuron0x3261f60()*-0.800203);
}

double NNfunction_NG_6::synapse0x3280020() {
   return (neuron0x325aab0()*-0.133328);
}

double NNfunction_NG_6::synapse0x3280060() {
   return (neuron0x325b480()*0.487901);
}

double NNfunction_NG_6::synapse0x32800a0() {
   return (neuron0x3264cf0()*0.380873);
}

double NNfunction_NG_6::synapse0x32800e0() {
   return (neuron0x32656c0()*0.764541);
}

double NNfunction_NG_6::synapse0x3280120() {
   return (neuron0x3266090()*0.27445);
}

double NNfunction_NG_6::synapse0x3280160() {
   return (neuron0x3266a60()*-0.0633322);
}

double NNfunction_NG_6::synapse0x32801a0() {
   return (neuron0x3267430()*2.85223);
}

double NNfunction_NG_6::synapse0x32801e0() {
   return (neuron0x3267e00()*0.241751);
}

double NNfunction_NG_6::synapse0x3280220() {
   return (neuron0x32687d0()*-0.438741);
}

double NNfunction_NG_6::synapse0x3280260() {
   return (neuron0x32691a0()*-0.766658);
}

double NNfunction_NG_6::synapse0x327fe10() {
   return (neuron0x325f230()*1.00339);
}

double NNfunction_NG_6::synapse0x327fe50() {
   return (neuron0x326bd80()*0.212889);
}

double NNfunction_NG_6::synapse0x327fe90() {
   return (neuron0x326c750()*0.68936);
}

double NNfunction_NG_6::synapse0x327fed0() {
   return (neuron0x326d120()*-1.06951);
}

double NNfunction_NG_6::synapse0x32804b0() {
   return (neuron0x326daf0()*0.281539);
}

double NNfunction_NG_6::synapse0x32804f0() {
   return (neuron0x326e4c0()*-0.833142);
}

double NNfunction_NG_6::synapse0x3280530() {
   return (neuron0x326ee90()*2.04203);
}

double NNfunction_NG_6::synapse0x3280570() {
   return (neuron0x326f860()*0.966475);
}

double NNfunction_NG_6::synapse0x32805b0() {
   return (neuron0x3270230()*1.03559);
}

double NNfunction_NG_6::synapse0x32805f0() {
   return (neuron0x3270e10()*-0.470803);
}

double NNfunction_NG_6::synapse0x3280630() {
   return (neuron0x32717e0()*-1.78177);
}

double NNfunction_NG_6::synapse0x3280670() {
   return (neuron0x3262660()*-0.622154);
}

double NNfunction_NG_6::synapse0x32806b0() {
   return (neuron0x3263030()*2.09504);
}

double NNfunction_NG_6::synapse0x32806f0() {
   return (neuron0x3263a00()*-0.537773);
}

double NNfunction_NG_6::synapse0x3280730() {
   return (neuron0x3276040()*-1.81942);
}

double NNfunction_NG_6::synapse0x3280770() {
   return (neuron0x32768f0()*-1.24385);
}

double NNfunction_NG_6::synapse0x32807b0() {
   return (neuron0x32772c0()*1.34857);
}

double NNfunction_NG_6::synapse0x32807f0() {
   return (neuron0x3277c90()*0.217671);
}

double NNfunction_NG_6::synapse0x3280b70() {
   return (neuron0x3253c10()*-0.892912);
}

double NNfunction_NG_6::synapse0x3280bb0() {
   return (neuron0x3254520()*-0.398316);
}

double NNfunction_NG_6::synapse0x3280bf0() {
   return (neuron0x3255000()*0.792045);
}

double NNfunction_NG_6::synapse0x3280c30() {
   return (neuron0x300e890()*-0.166431);
}

double NNfunction_NG_6::synapse0x3280c70() {
   return (neuron0x3255e20()*0.412805);
}

double NNfunction_NG_6::synapse0x3280cb0() {
   return (neuron0x32567f0()*-0.612558);
}

double NNfunction_NG_6::synapse0x3280cf0() {
   return (neuron0x32575c0()*-0.603957);
}

double NNfunction_NG_6::synapse0x3280d30() {
   return (neuron0x3257f90()*0.235322);
}

double NNfunction_NG_6::synapse0x3280d70() {
   return (neuron0x3258960()*-0.211368);
}

double NNfunction_NG_6::synapse0x3280db0() {
   return (neuron0x3259440()*0.926365);
}

double NNfunction_NG_6::synapse0x3280df0() {
   return (neuron0x3259e10()*-0.535278);
}

double NNfunction_NG_6::synapse0x3280e30() {
   return (neuron0x3256ef0()*0.295799);
}

double NNfunction_NG_6::synapse0x3280e70() {
   return (neuron0x325b9c0()*-0.0966061);
}

double NNfunction_NG_6::synapse0x3280eb0() {
   return (neuron0x325c390()*-0.795095);
}

double NNfunction_NG_6::synapse0x3280ef0() {
   return (neuron0x325cd60()*-0.0828479);
}

double NNfunction_NG_6::synapse0x3280f30() {
   return (neuron0x325d730()*-0.149708);
}

double NNfunction_NG_6::synapse0x32809c0() {
   return (neuron0x325f540()*-0.583593);
}

double NNfunction_NG_6::synapse0x3280a00() {
   return (neuron0x325f820()*0.457668);
}

double NNfunction_NG_6::synapse0x3281080() {
   return (neuron0x32601f0()*0.427574);
}

double NNfunction_NG_6::synapse0x32810c0() {
   return (neuron0x3260bc0()*-0.675305);
}

double NNfunction_NG_6::synapse0x3281100() {
   return (neuron0x3261590()*-0.507289);
}

double NNfunction_NG_6::synapse0x3281140() {
   return (neuron0x3261f60()*-1.06774);
}

double NNfunction_NG_6::synapse0x3281180() {
   return (neuron0x325aab0()*-0.65936);
}

double NNfunction_NG_6::synapse0x32811c0() {
   return (neuron0x325b480()*0.626062);
}

double NNfunction_NG_6::synapse0x3281200() {
   return (neuron0x3264cf0()*-0.558218);
}

double NNfunction_NG_6::synapse0x3281240() {
   return (neuron0x32656c0()*-0.487922);
}

double NNfunction_NG_6::synapse0x3281280() {
   return (neuron0x3266090()*0.511435);
}

double NNfunction_NG_6::synapse0x32812c0() {
   return (neuron0x3266a60()*0.248385);
}

double NNfunction_NG_6::synapse0x3281300() {
   return (neuron0x3267430()*0.125354);
}

double NNfunction_NG_6::synapse0x3281340() {
   return (neuron0x3267e00()*0.209294);
}

double NNfunction_NG_6::synapse0x3281380() {
   return (neuron0x32687d0()*-0.731323);
}

double NNfunction_NG_6::synapse0x32813c0() {
   return (neuron0x32691a0()*-0.0618504);
}

double NNfunction_NG_6::synapse0x3280f70() {
   return (neuron0x325f230()*-0.217092);
}

double NNfunction_NG_6::synapse0x3280fb0() {
   return (neuron0x326bd80()*-0.445088);
}

double NNfunction_NG_6::synapse0x3280ff0() {
   return (neuron0x326c750()*0.230436);
}

double NNfunction_NG_6::synapse0x3281030() {
   return (neuron0x326d120()*-0.40268);
}

double NNfunction_NG_6::synapse0x3281610() {
   return (neuron0x326daf0()*-0.252593);
}

double NNfunction_NG_6::synapse0x3281650() {
   return (neuron0x326e4c0()*0.161112);
}

double NNfunction_NG_6::synapse0x3281690() {
   return (neuron0x326ee90()*-0.26796);
}

double NNfunction_NG_6::synapse0x32816d0() {
   return (neuron0x326f860()*-0.295721);
}

double NNfunction_NG_6::synapse0x3281710() {
   return (neuron0x3270230()*-0.104179);
}

double NNfunction_NG_6::synapse0x3281750() {
   return (neuron0x3270e10()*-0.105141);
}

double NNfunction_NG_6::synapse0x3281790() {
   return (neuron0x32717e0()*-0.253556);
}

double NNfunction_NG_6::synapse0x32817d0() {
   return (neuron0x3262660()*0.145023);
}

double NNfunction_NG_6::synapse0x3281810() {
   return (neuron0x3263030()*0.289428);
}

double NNfunction_NG_6::synapse0x3281850() {
   return (neuron0x3263a00()*0.0121726);
}

double NNfunction_NG_6::synapse0x3281890() {
   return (neuron0x3276040()*-0.368767);
}

double NNfunction_NG_6::synapse0x32818d0() {
   return (neuron0x32768f0()*-0.384515);
}

double NNfunction_NG_6::synapse0x3281910() {
   return (neuron0x32772c0()*-0.114023);
}

double NNfunction_NG_6::synapse0x3281950() {
   return (neuron0x3277c90()*-0.467508);
}

double NNfunction_NG_6::synapse0x3281cd0() {
   return (neuron0x3253c10()*-0.494539);
}

double NNfunction_NG_6::synapse0x3281d10() {
   return (neuron0x3254520()*-0.116914);
}

double NNfunction_NG_6::synapse0x3281d50() {
   return (neuron0x3255000()*-0.283906);
}

double NNfunction_NG_6::synapse0x3281d90() {
   return (neuron0x300e890()*-0.00349742);
}

double NNfunction_NG_6::synapse0x3281dd0() {
   return (neuron0x3255e20()*1.62861);
}

double NNfunction_NG_6::synapse0x3281e10() {
   return (neuron0x32567f0()*-0.176547);
}

double NNfunction_NG_6::synapse0x3281e50() {
   return (neuron0x32575c0()*0.756991);
}

double NNfunction_NG_6::synapse0x3281e90() {
   return (neuron0x3257f90()*-0.699992);
}

double NNfunction_NG_6::synapse0x3281ed0() {
   return (neuron0x3258960()*0.623507);
}

double NNfunction_NG_6::synapse0x3281f10() {
   return (neuron0x3259440()*-1.24327);
}

double NNfunction_NG_6::synapse0x3281f50() {
   return (neuron0x3259e10()*-0.0703997);
}

double NNfunction_NG_6::synapse0x3281f90() {
   return (neuron0x3256ef0()*-1.41735);
}

double NNfunction_NG_6::synapse0x3281fd0() {
   return (neuron0x325b9c0()*-0.380695);
}

double NNfunction_NG_6::synapse0x3282010() {
   return (neuron0x325c390()*-0.260402);
}

double NNfunction_NG_6::synapse0x3282050() {
   return (neuron0x325cd60()*-0.605928);
}

double NNfunction_NG_6::synapse0x3282090() {
   return (neuron0x325d730()*0.143216);
}

double NNfunction_NG_6::synapse0x3281b20() {
   return (neuron0x325f540()*1.16639);
}

double NNfunction_NG_6::synapse0x3281b60() {
   return (neuron0x325f820()*0.57829);
}

double NNfunction_NG_6::synapse0x32821e0() {
   return (neuron0x32601f0()*1.896);
}

double NNfunction_NG_6::synapse0x3282220() {
   return (neuron0x3260bc0()*-1.06807);
}

double NNfunction_NG_6::synapse0x3282260() {
   return (neuron0x3261590()*0.192845);
}

double NNfunction_NG_6::synapse0x32822a0() {
   return (neuron0x3261f60()*-0.4131);
}

double NNfunction_NG_6::synapse0x32822e0() {
   return (neuron0x325aab0()*1.05989);
}

double NNfunction_NG_6::synapse0x3282320() {
   return (neuron0x325b480()*-0.920231);
}

double NNfunction_NG_6::synapse0x3282360() {
   return (neuron0x3264cf0()*0.372618);
}

double NNfunction_NG_6::synapse0x32823a0() {
   return (neuron0x32656c0()*-2.19091);
}

double NNfunction_NG_6::synapse0x32823e0() {
   return (neuron0x3266090()*-0.238367);
}

double NNfunction_NG_6::synapse0x3282420() {
   return (neuron0x3266a60()*0.45195);
}

double NNfunction_NG_6::synapse0x3282460() {
   return (neuron0x3267430()*-3.21134);
}

double NNfunction_NG_6::synapse0x32824a0() {
   return (neuron0x3267e00()*-0.0849701);
}

double NNfunction_NG_6::synapse0x32824e0() {
   return (neuron0x32687d0()*0.683262);
}

double NNfunction_NG_6::synapse0x3282520() {
   return (neuron0x32691a0()*0.0705615);
}

double NNfunction_NG_6::synapse0x32820d0() {
   return (neuron0x325f230()*1.59373);
}

double NNfunction_NG_6::synapse0x3282110() {
   return (neuron0x326bd80()*-0.419965);
}

double NNfunction_NG_6::synapse0x3282150() {
   return (neuron0x326c750()*0.372049);
}

double NNfunction_NG_6::synapse0x3282190() {
   return (neuron0x326d120()*0.0784257);
}

double NNfunction_NG_6::synapse0x3282770() {
   return (neuron0x326daf0()*0.698343);
}

double NNfunction_NG_6::synapse0x32827b0() {
   return (neuron0x326e4c0()*0.362857);
}

double NNfunction_NG_6::synapse0x32827f0() {
   return (neuron0x326ee90()*-1.98653);
}

double NNfunction_NG_6::synapse0x3282830() {
   return (neuron0x326f860()*0.284641);
}

double NNfunction_NG_6::synapse0x3282870() {
   return (neuron0x3270230()*-0.311819);
}

double NNfunction_NG_6::synapse0x32828b0() {
   return (neuron0x3270e10()*0.164896);
}

double NNfunction_NG_6::synapse0x32828f0() {
   return (neuron0x32717e0()*1.42261);
}

double NNfunction_NG_6::synapse0x3282930() {
   return (neuron0x3262660()*0.377429);
}

double NNfunction_NG_6::synapse0x3282970() {
   return (neuron0x3263030()*-2.13184);
}

double NNfunction_NG_6::synapse0x32829b0() {
   return (neuron0x3263a00()*0.430683);
}

double NNfunction_NG_6::synapse0x32829f0() {
   return (neuron0x3276040()*1.24299);
}

double NNfunction_NG_6::synapse0x3282a30() {
   return (neuron0x32768f0()*1.43788);
}

double NNfunction_NG_6::synapse0x3282a70() {
   return (neuron0x32772c0()*-1.52828);
}

double NNfunction_NG_6::synapse0x3282ab0() {
   return (neuron0x3277c90()*-0.197588);
}

double NNfunction_NG_6::synapse0x3253bd0() {
   return (neuron0x327ee90()*-9.97268);
}

double NNfunction_NG_6::synapse0x3282d10() {
   return (neuron0x327f230()*-1.54139);
}

double NNfunction_NG_6::synapse0x3282d50() {
   return (neuron0x327f6d0()*-2.8354);
}

double NNfunction_NG_6::synapse0x3282d90() {
   return (neuron0x3280830()*-0.942708);
}

double NNfunction_NG_6::synapse0x3282dd0() {
   return (neuron0x3281990()*-2.9267);
}

