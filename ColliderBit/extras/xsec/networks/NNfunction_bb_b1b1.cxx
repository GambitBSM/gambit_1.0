#include "NNfunction_bb_b1b1.h"
#include <cmath>

double NNfunction_bb_b1b1::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5264)/15.2693;
   input1 = (in1 - 33.3761)/972.613;
   input2 = (in2 - 522.692)/570.197;
   input3 = (in3 - 145.872)/767.69;
   input4 = (in4 - 941.366)/844.72;
   input5 = (in5 - 827.676)/834.528;
   input6 = (in6 - 832.571)/835.168;
   input7 = (in7 - 836.711)/821.127;
   input8 = (in8 - 832.657)/850.048;
   input9 = (in9 - 822.505)/837.73;
   input10 = (in10 - 848.518)/840.005;
   input11 = (in11 - 765.688)/751.692;
   input12 = (in12 - 766.834)/751.891;
   input13 = (in13 - 532.756)/425.939;
   input14 = (in14 - 766.823)/717.641;
   input15 = (in15 - 768.05)/717.311;
   input16 = (in16 - 543.32)/490.824;
   input17 = (in17 - 783.481)/774.701;
   input18 = (in18 - 781.671)/775.385;
   input19 = (in19 - 766.068)/722.628;
   input20 = (in20 - -132.857)/490.477;
   input21 = (in21 - -171.167)/1074.04;
   input22 = (in22 - -10.8561)/1083.62;
   input23 = (in23 - -90.7922)/583.152;
   switch(index) {
     case 0:
         return neuron0x32980f0();
     default:
         return 0.;
   }
}

double NNfunction_bb_b1b1::Value(int index, double* input) {
   input0 = (input[0] - 23.5264)/15.2693;
   input1 = (input[1] - 33.3761)/972.613;
   input2 = (input[2] - 522.692)/570.197;
   input3 = (input[3] - 145.872)/767.69;
   input4 = (input[4] - 941.366)/844.72;
   input5 = (input[5] - 827.676)/834.528;
   input6 = (input[6] - 832.571)/835.168;
   input7 = (input[7] - 836.711)/821.127;
   input8 = (input[8] - 832.657)/850.048;
   input9 = (input[9] - 822.505)/837.73;
   input10 = (input[10] - 848.518)/840.005;
   input11 = (input[11] - 765.688)/751.692;
   input12 = (input[12] - 766.834)/751.891;
   input13 = (input[13] - 532.756)/425.939;
   input14 = (input[14] - 766.823)/717.641;
   input15 = (input[15] - 768.05)/717.311;
   input16 = (input[16] - 543.32)/490.824;
   input17 = (input[17] - 783.481)/774.701;
   input18 = (input[18] - 781.671)/775.385;
   input19 = (input[19] - 766.068)/722.628;
   input20 = (input[20] - -132.857)/490.477;
   input21 = (input[21] - -171.167)/1074.04;
   input22 = (input[22] - -10.8561)/1083.62;
   input23 = (input[23] - -90.7922)/583.152;
   switch(index) {
     case 0:
         return neuron0x32980f0();
     default:
         return 0.;
   }
}

double NNfunction_bb_b1b1::neuron0x3263160() {
   return input0;
}

double NNfunction_bb_b1b1::neuron0x3263410() {
   return input1;
}

double NNfunction_bb_b1b1::neuron0x3263750() {
   return input2;
}

double NNfunction_bb_b1b1::neuron0x3263a90() {
   return input3;
}

double NNfunction_bb_b1b1::neuron0x3263dd0() {
   return input4;
}

double NNfunction_bb_b1b1::neuron0x3264110() {
   return input5;
}

double NNfunction_bb_b1b1::neuron0x3264450() {
   return input6;
}

double NNfunction_bb_b1b1::neuron0x3264790() {
   return input7;
}

double NNfunction_bb_b1b1::neuron0x3264ad0() {
   return input8;
}

double NNfunction_bb_b1b1::neuron0x3264e10() {
   return input9;
}

double NNfunction_bb_b1b1::neuron0x3265150() {
   return input10;
}

double NNfunction_bb_b1b1::neuron0x3265490() {
   return input11;
}

double NNfunction_bb_b1b1::neuron0x32657d0() {
   return input12;
}

double NNfunction_bb_b1b1::neuron0x3265b10() {
   return input13;
}

double NNfunction_bb_b1b1::neuron0x3265e50() {
   return input14;
}

double NNfunction_bb_b1b1::neuron0x3266190() {
   return input15;
}

double NNfunction_bb_b1b1::neuron0x32664d0() {
   return input16;
}

double NNfunction_bb_b1b1::neuron0x3266a30() {
   return input17;
}

double NNfunction_bb_b1b1::neuron0x3266c50() {
   return input18;
}

double NNfunction_bb_b1b1::neuron0x3266f90() {
   return input19;
}

double NNfunction_bb_b1b1::neuron0x32672d0() {
   return input20;
}

double NNfunction_bb_b1b1::neuron0x3267610() {
   return input21;
}

double NNfunction_bb_b1b1::neuron0x3267950() {
   return input22;
}

double NNfunction_bb_b1b1::neuron0x3267c90() {
   return input23;
}

double NNfunction_bb_b1b1::input0x3268100() {
   double input = 1.51818;
   input += synapse0x3268440();
   input += synapse0x3268480();
   input += synapse0x32684c0();
   input += synapse0x3268500();
   input += synapse0x3268540();
   input += synapse0x3268580();
   input += synapse0x32685c0();
   input += synapse0x3268600();
   input += synapse0x3268640();
   input += synapse0x3268680();
   input += synapse0x32686c0();
   input += synapse0x3268700();
   input += synapse0x3268740();
   input += synapse0x3268780();
   input += synapse0x32687c0();
   input += synapse0x3268800();
   input += synapse0x3268290();
   input += synapse0x32682d0();
   input += synapse0x202b450();
   input += synapse0x202b490();
   input += synapse0x3268950();
   input += synapse0x3268990();
   input += synapse0x32689d0();
   input += synapse0x3268a10();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3268100() {
   double input = input0x3268100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3268a50() {
   double input = 4.05413;
   input += synapse0x3268d90();
   input += synapse0x3268dd0();
   input += synapse0x3268e10();
   input += synapse0x3268e50();
   input += synapse0x3268e90();
   input += synapse0x3268ed0();
   input += synapse0x3268f10();
   input += synapse0x3268f50();
   input += synapse0x3268f90();
   input += synapse0x3268840();
   input += synapse0x3268880();
   input += synapse0x32688c0();
   input += synapse0x3268900();
   input += synapse0x32691e0();
   input += synapse0x3269220();
   input += synapse0x3269260();
   input += synapse0x3268be0();
   input += synapse0x3268c20();
   input += synapse0x32693b0();
   input += synapse0x32693f0();
   input += synapse0x3269430();
   input += synapse0x3269470();
   input += synapse0x32694b0();
   input += synapse0x32694f0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3268a50() {
   double input = input0x3268a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3269530() {
   double input = 0.952399;
   input += synapse0x3269870();
   input += synapse0x32698b0();
   input += synapse0x32698f0();
   input += synapse0x3269930();
   input += synapse0x3269970();
   input += synapse0x32699b0();
   input += synapse0x32699f0();
   input += synapse0x3269a30();
   input += synapse0x3269a70();
   input += synapse0x3269ab0();
   input += synapse0x3269af0();
   input += synapse0x3269b30();
   input += synapse0x3269b70();
   input += synapse0x3269bb0();
   input += synapse0x3269bf0();
   input += synapse0x3269c30();
   input += synapse0x32696c0();
   input += synapse0x3269700();
   input += synapse0x301f9d0();
   input += synapse0x302d2a0();
   input += synapse0x302d2e0();
   input += synapse0x326bb70();
   input += synapse0x326bbb0();
   input += synapse0x3262ea0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3269530() {
   double input = input0x3269530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3268fd0() {
   double input = 1.14055;
   input += synapse0x3262f70();
   input += synapse0x302db20();
   input += synapse0x3269160();
   input += synapse0x32691a0();
   input += synapse0x3269d80();
   input += synapse0x3269dc0();
   input += synapse0x3269e00();
   input += synapse0x3269e40();
   input += synapse0x3269e80();
   input += synapse0x3269ec0();
   input += synapse0x3269f00();
   input += synapse0x3269f40();
   input += synapse0x3269f80();
   input += synapse0x3269fc0();
   input += synapse0x326a000();
   input += synapse0x326a040();
   input += synapse0x3262ee0();
   input += synapse0x3262f20();
   input += synapse0x326a190();
   input += synapse0x326a1d0();
   input += synapse0x326a210();
   input += synapse0x326a250();
   input += synapse0x326a290();
   input += synapse0x326a2d0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3268fd0() {
   double input = input0x3268fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x326a310() {
   double input = -2.29768;
   input += synapse0x326a650();
   input += synapse0x326a690();
   input += synapse0x326a6d0();
   input += synapse0x326a710();
   input += synapse0x326a750();
   input += synapse0x326a790();
   input += synapse0x326a7d0();
   input += synapse0x326a810();
   input += synapse0x326a850();
   input += synapse0x326a890();
   input += synapse0x326a8d0();
   input += synapse0x326a910();
   input += synapse0x326a950();
   input += synapse0x326a990();
   input += synapse0x326a9d0();
   input += synapse0x326aa10();
   input += synapse0x326ab60();
   input += synapse0x326a4a0();
   input += synapse0x326a4e0();
   input += synapse0x326bcb0();
   input += synapse0x326bcf0();
   input += synapse0x326bd30();
   input += synapse0x326bd70();
   input += synapse0x326bdb0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x326a310() {
   double input = input0x326a310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x326bdf0() {
   double input = 4.65473;
   input += synapse0x326c130();
   input += synapse0x326c170();
   input += synapse0x326c1b0();
   input += synapse0x326c1f0();
   input += synapse0x326c230();
   input += synapse0x326c270();
   input += synapse0x326c2b0();
   input += synapse0x326c2f0();
   input += synapse0x326c330();
   input += synapse0x302d5f0();
   input += synapse0x302d630();
   input += synapse0x302d670();
   input += synapse0x302d6b0();
   input += synapse0x302d6f0();
   input += synapse0x302d730();
   input += synapse0x302d770();
   input += synapse0x326bf80();
   input += synapse0x326bfc0();
   input += synapse0x302d8c0();
   input += synapse0x302d900();
   input += synapse0x302d940();
   input += synapse0x302d980();
   input += synapse0x302d9c0();
   input += synapse0x326cb80();
   return input;
}

double NNfunction_bb_b1b1::neuron0x326bdf0() {
   double input = input0x326bdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x326cbc0() {
   double input = 1.01287;
   input += synapse0x326cf00();
   input += synapse0x326cf40();
   input += synapse0x326cf80();
   input += synapse0x326cfc0();
   input += synapse0x326d000();
   input += synapse0x326d040();
   input += synapse0x326d080();
   input += synapse0x326d0c0();
   input += synapse0x326d100();
   input += synapse0x326d140();
   input += synapse0x326d180();
   input += synapse0x326d1c0();
   input += synapse0x326d200();
   input += synapse0x326d240();
   input += synapse0x326d280();
   input += synapse0x326d2c0();
   input += synapse0x326cd50();
   input += synapse0x326cd90();
   input += synapse0x326d410();
   input += synapse0x326d450();
   input += synapse0x326d490();
   input += synapse0x326d4d0();
   input += synapse0x326d510();
   input += synapse0x326d550();
   return input;
}

double NNfunction_bb_b1b1::neuron0x326cbc0() {
   double input = input0x326cbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x326d590() {
   double input = -2.48382;
   input += synapse0x326d8d0();
   input += synapse0x326d910();
   input += synapse0x326d950();
   input += synapse0x326d990();
   input += synapse0x326d9d0();
   input += synapse0x326da10();
   input += synapse0x326da50();
   input += synapse0x326da90();
   input += synapse0x326dad0();
   input += synapse0x326db10();
   input += synapse0x326db50();
   input += synapse0x326db90();
   input += synapse0x326dbd0();
   input += synapse0x326dc10();
   input += synapse0x326dc50();
   input += synapse0x326dc90();
   input += synapse0x326d720();
   input += synapse0x326d760();
   input += synapse0x326dde0();
   input += synapse0x326de20();
   input += synapse0x326de60();
   input += synapse0x326dea0();
   input += synapse0x326dee0();
   input += synapse0x326df20();
   return input;
}

double NNfunction_bb_b1b1::neuron0x326d590() {
   double input = input0x326d590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x326df60() {
   double input = -0.571307;
   input += synapse0x3266920();
   input += synapse0x3266960();
   input += synapse0x32669a0();
   input += synapse0x32669e0();
   input += synapse0x326e4b0();
   input += synapse0x326e4f0();
   input += synapse0x326e530();
   input += synapse0x326e570();
   input += synapse0x326e5b0();
   input += synapse0x326e5f0();
   input += synapse0x326e630();
   input += synapse0x326e670();
   input += synapse0x326e6b0();
   input += synapse0x326e6f0();
   input += synapse0x326e730();
   input += synapse0x326e770();
   input += synapse0x326e0f0();
   input += synapse0x326e130();
   input += synapse0x326e8c0();
   input += synapse0x326e900();
   input += synapse0x326e940();
   input += synapse0x326e980();
   input += synapse0x326e9c0();
   input += synapse0x326ea00();
   return input;
}

double NNfunction_bb_b1b1::neuron0x326df60() {
   double input = input0x326df60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x326ea40() {
   double input = -0.399145;
   input += synapse0x326ed80();
   input += synapse0x326edc0();
   input += synapse0x326ee00();
   input += synapse0x326ee40();
   input += synapse0x326ee80();
   input += synapse0x326eec0();
   input += synapse0x326ef00();
   input += synapse0x326ef40();
   input += synapse0x326ef80();
   input += synapse0x326efc0();
   input += synapse0x326f000();
   input += synapse0x326f040();
   input += synapse0x326f080();
   input += synapse0x326f0c0();
   input += synapse0x326f100();
   input += synapse0x326f140();
   input += synapse0x326ebd0();
   input += synapse0x326ec10();
   input += synapse0x326f290();
   input += synapse0x326f2d0();
   input += synapse0x326f310();
   input += synapse0x326f350();
   input += synapse0x326f390();
   input += synapse0x326f3d0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x326ea40() {
   double input = input0x326ea40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x326f410() {
   double input = 1.30689;
   input += synapse0x326f750();
   input += synapse0x326f790();
   input += synapse0x326f7d0();
   input += synapse0x326f810();
   input += synapse0x326f850();
   input += synapse0x326f890();
   input += synapse0x326f8d0();
   input += synapse0x326f910();
   input += synapse0x326f950();
   input += synapse0x326f990();
   input += synapse0x326f9d0();
   input += synapse0x326fa10();
   input += synapse0x326fa50();
   input += synapse0x326fa90();
   input += synapse0x326fad0();
   input += synapse0x326fb10();
   input += synapse0x326f5a0();
   input += synapse0x326f5e0();
   input += synapse0x326c370();
   input += synapse0x326c3b0();
   input += synapse0x326c3f0();
   input += synapse0x326c430();
   input += synapse0x326c470();
   input += synapse0x326c4b0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x326f410() {
   double input = input0x326f410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x326c4f0() {
   double input = 1.29191;
   input += synapse0x326c830();
   input += synapse0x326c870();
   input += synapse0x326c8b0();
   input += synapse0x326c8f0();
   input += synapse0x326c930();
   input += synapse0x326c970();
   input += synapse0x326c9b0();
   input += synapse0x326c9f0();
   input += synapse0x326ca30();
   input += synapse0x326ca70();
   input += synapse0x326cab0();
   input += synapse0x326caf0();
   input += synapse0x326cb30();
   input += synapse0x3270c70();
   input += synapse0x3270cb0();
   input += synapse0x3270cf0();
   input += synapse0x326c680();
   input += synapse0x326c6c0();
   input += synapse0x3270e40();
   input += synapse0x3270e80();
   input += synapse0x3270ec0();
   input += synapse0x3270f00();
   input += synapse0x3270f40();
   input += synapse0x3270f80();
   return input;
}

double NNfunction_bb_b1b1::neuron0x326c4f0() {
   double input = input0x326c4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3270fc0() {
   double input = -1.54052;
   input += synapse0x3271300();
   input += synapse0x3271340();
   input += synapse0x3271380();
   input += synapse0x32713c0();
   input += synapse0x3271400();
   input += synapse0x3271440();
   input += synapse0x3271480();
   input += synapse0x32714c0();
   input += synapse0x3271500();
   input += synapse0x3271540();
   input += synapse0x3271580();
   input += synapse0x32715c0();
   input += synapse0x3271600();
   input += synapse0x3271640();
   input += synapse0x3271680();
   input += synapse0x32716c0();
   input += synapse0x3271150();
   input += synapse0x3271190();
   input += synapse0x3271810();
   input += synapse0x3271850();
   input += synapse0x3271890();
   input += synapse0x32718d0();
   input += synapse0x3271910();
   input += synapse0x3271950();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3270fc0() {
   double input = input0x3270fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3271990() {
   double input = -5.33922;
   input += synapse0x3271cd0();
   input += synapse0x3271d10();
   input += synapse0x3271d50();
   input += synapse0x3271d90();
   input += synapse0x3271dd0();
   input += synapse0x3271e10();
   input += synapse0x3271e50();
   input += synapse0x3271e90();
   input += synapse0x3271ed0();
   input += synapse0x3271f10();
   input += synapse0x3271f50();
   input += synapse0x3271f90();
   input += synapse0x3271fd0();
   input += synapse0x3272010();
   input += synapse0x3272050();
   input += synapse0x3272090();
   input += synapse0x3271b20();
   input += synapse0x3271b60();
   input += synapse0x32721e0();
   input += synapse0x3272220();
   input += synapse0x3272260();
   input += synapse0x32722a0();
   input += synapse0x32722e0();
   input += synapse0x3272320();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3271990() {
   double input = input0x3271990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3272360() {
   double input = -1.91529;
   input += synapse0x32726a0();
   input += synapse0x32726e0();
   input += synapse0x3272720();
   input += synapse0x3272760();
   input += synapse0x32727a0();
   input += synapse0x32727e0();
   input += synapse0x3272820();
   input += synapse0x3272860();
   input += synapse0x32728a0();
   input += synapse0x32728e0();
   input += synapse0x3272920();
   input += synapse0x3272960();
   input += synapse0x32729a0();
   input += synapse0x32729e0();
   input += synapse0x3272a20();
   input += synapse0x3272a60();
   input += synapse0x32724f0();
   input += synapse0x3272530();
   input += synapse0x3272bb0();
   input += synapse0x3272bf0();
   input += synapse0x3272c30();
   input += synapse0x3272c70();
   input += synapse0x3272cb0();
   input += synapse0x3272cf0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3272360() {
   double input = input0x3272360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3272d30() {
   double input = 0.236309;
   input += synapse0x3273070();
   input += synapse0x32632f0();
   input += synapse0x3263330();
   input += synapse0x3263630();
   input += synapse0x3263670();
   input += synapse0x3263970();
   input += synapse0x32639b0();
   input += synapse0x3263cb0();
   input += synapse0x3263cf0();
   input += synapse0x3263ff0();
   input += synapse0x3264030();
   input += synapse0x3264330();
   input += synapse0x3264370();
   input += synapse0x3264670();
   input += synapse0x32646b0();
   input += synapse0x32649b0();
   input += synapse0x32649f0();
   input += synapse0x3264cf0();
   input += synapse0x3264d30();
   input += synapse0x3265030();
   input += synapse0x3265070();
   input += synapse0x3265370();
   input += synapse0x32653b0();
   input += synapse0x32656b0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3272d30() {
   double input = input0x3272d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3274b40() {
   double input = 1.99856;
   input += synapse0x32656f0();
   input += synapse0x32663b0();
   input += synapse0x32663f0();
   input += synapse0x3272ec0();
   input += synapse0x3272f00();
   input += synapse0x32666f0();
   input += synapse0x3266730();
   input += synapse0x201c580();
   input += synapse0x201c5c0();
   input += synapse0x3266e70();
   input += synapse0x3266eb0();
   input += synapse0x32671b0();
   input += synapse0x32671f0();
   input += synapse0x32674f0();
   input += synapse0x3267530();
   input += synapse0x3267830();
   input += synapse0x3267870();
   input += synapse0x3267b70();
   input += synapse0x3267bb0();
   input += synapse0x3267eb0();
   input += synapse0x3267ef0();
   input += synapse0x32659f0();
   input += synapse0x3265a30();
   input += synapse0x3274de0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3274b40() {
   double input = input0x3274b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3274e20() {
   double input = -1.96621;
   input += synapse0x3275160();
   input += synapse0x32751a0();
   input += synapse0x32751e0();
   input += synapse0x3275220();
   input += synapse0x3275260();
   input += synapse0x32752a0();
   input += synapse0x32752e0();
   input += synapse0x3275320();
   input += synapse0x3275360();
   input += synapse0x32753a0();
   input += synapse0x32753e0();
   input += synapse0x3275420();
   input += synapse0x3275460();
   input += synapse0x32754a0();
   input += synapse0x32754e0();
   input += synapse0x3275520();
   input += synapse0x3274fb0();
   input += synapse0x3274ff0();
   input += synapse0x3275670();
   input += synapse0x32756b0();
   input += synapse0x32756f0();
   input += synapse0x3275730();
   input += synapse0x3275770();
   input += synapse0x32757b0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3274e20() {
   double input = input0x3274e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x32757f0() {
   double input = -8.55169;
   input += synapse0x3275b30();
   input += synapse0x3275b70();
   input += synapse0x3275bb0();
   input += synapse0x3275bf0();
   input += synapse0x3275c30();
   input += synapse0x3275c70();
   input += synapse0x3275cb0();
   input += synapse0x3275cf0();
   input += synapse0x3275d30();
   input += synapse0x3275d70();
   input += synapse0x3275db0();
   input += synapse0x3275df0();
   input += synapse0x3275e30();
   input += synapse0x3275e70();
   input += synapse0x3275eb0();
   input += synapse0x3275ef0();
   input += synapse0x3275980();
   input += synapse0x32759c0();
   input += synapse0x3276040();
   input += synapse0x3276080();
   input += synapse0x32760c0();
   input += synapse0x3276100();
   input += synapse0x3276140();
   input += synapse0x3276180();
   return input;
}

double NNfunction_bb_b1b1::neuron0x32757f0() {
   double input = input0x32757f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x32761c0() {
   double input = -0.939049;
   input += synapse0x3276500();
   input += synapse0x3276540();
   input += synapse0x3276580();
   input += synapse0x32765c0();
   input += synapse0x3276600();
   input += synapse0x3276640();
   input += synapse0x3276680();
   input += synapse0x32766c0();
   input += synapse0x3276700();
   input += synapse0x3276740();
   input += synapse0x3276780();
   input += synapse0x32767c0();
   input += synapse0x3276800();
   input += synapse0x3276840();
   input += synapse0x3276880();
   input += synapse0x32768c0();
   input += synapse0x3276350();
   input += synapse0x3276390();
   input += synapse0x3276a10();
   input += synapse0x3276a50();
   input += synapse0x3276a90();
   input += synapse0x3276ad0();
   input += synapse0x3276b10();
   input += synapse0x3276b50();
   return input;
}

double NNfunction_bb_b1b1::neuron0x32761c0() {
   double input = input0x32761c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3276b90() {
   double input = 2.08337;
   input += synapse0x3276ed0();
   input += synapse0x3276f10();
   input += synapse0x3276f50();
   input += synapse0x3276f90();
   input += synapse0x3276fd0();
   input += synapse0x3277010();
   input += synapse0x3277050();
   input += synapse0x3277090();
   input += synapse0x32770d0();
   input += synapse0x3277110();
   input += synapse0x3277150();
   input += synapse0x3277190();
   input += synapse0x32771d0();
   input += synapse0x3277210();
   input += synapse0x3277250();
   input += synapse0x3277290();
   input += synapse0x3276d20();
   input += synapse0x3276d60();
   input += synapse0x32773e0();
   input += synapse0x3277420();
   input += synapse0x3277460();
   input += synapse0x32774a0();
   input += synapse0x32774e0();
   input += synapse0x3277520();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3276b90() {
   double input = input0x3276b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3277560() {
   double input = 2.5193;
   input += synapse0x32778a0();
   input += synapse0x32778e0();
   input += synapse0x3277920();
   input += synapse0x3277960();
   input += synapse0x32779a0();
   input += synapse0x32779e0();
   input += synapse0x3277a20();
   input += synapse0x3277a60();
   input += synapse0x3277aa0();
   input += synapse0x326fc60();
   input += synapse0x326fca0();
   input += synapse0x326fce0();
   input += synapse0x326fd20();
   input += synapse0x326fd60();
   input += synapse0x326fda0();
   input += synapse0x326fde0();
   input += synapse0x32776f0();
   input += synapse0x3277730();
   input += synapse0x326ff30();
   input += synapse0x326ff70();
   input += synapse0x326ffb0();
   input += synapse0x326fff0();
   input += synapse0x3270030();
   input += synapse0x3270070();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3277560() {
   double input = input0x3277560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x32700b0() {
   double input = -2.91804;
   input += synapse0x32703f0();
   input += synapse0x3270430();
   input += synapse0x3270470();
   input += synapse0x32704b0();
   input += synapse0x32704f0();
   input += synapse0x3270530();
   input += synapse0x3270570();
   input += synapse0x32705b0();
   input += synapse0x32705f0();
   input += synapse0x3270630();
   input += synapse0x3270670();
   input += synapse0x32706b0();
   input += synapse0x32706f0();
   input += synapse0x3270730();
   input += synapse0x3270770();
   input += synapse0x32707b0();
   input += synapse0x3270240();
   input += synapse0x3270280();
   input += synapse0x3270900();
   input += synapse0x3270940();
   input += synapse0x3270980();
   input += synapse0x32709c0();
   input += synapse0x3270a00();
   input += synapse0x3270a40();
   return input;
}

double NNfunction_bb_b1b1::neuron0x32700b0() {
   double input = input0x32700b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3270a80() {
   double input = 1.30845;
   input += synapse0x3270c10();
   input += synapse0x3279ca0();
   input += synapse0x3279ce0();
   input += synapse0x3279d20();
   input += synapse0x3279d60();
   input += synapse0x3279da0();
   input += synapse0x3279de0();
   input += synapse0x3279e20();
   input += synapse0x3279e60();
   input += synapse0x3279ea0();
   input += synapse0x3279ee0();
   input += synapse0x3279f20();
   input += synapse0x3279f60();
   input += synapse0x3279fa0();
   input += synapse0x3279fe0();
   input += synapse0x327a020();
   input += synapse0x3279af0();
   input += synapse0x3279b30();
   input += synapse0x327a170();
   input += synapse0x327a1b0();
   input += synapse0x327a1f0();
   input += synapse0x327a230();
   input += synapse0x327a270();
   input += synapse0x327a2b0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3270a80() {
   double input = input0x3270a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x327a2f0() {
   double input = -0.424438;
   input += synapse0x327a630();
   input += synapse0x327a670();
   input += synapse0x327a6b0();
   input += synapse0x327a6f0();
   input += synapse0x327a730();
   input += synapse0x327a770();
   input += synapse0x327a7b0();
   input += synapse0x327a7f0();
   input += synapse0x327a830();
   input += synapse0x327a870();
   input += synapse0x327a8b0();
   input += synapse0x327a8f0();
   input += synapse0x327a930();
   input += synapse0x327a970();
   input += synapse0x327a9b0();
   input += synapse0x327a9f0();
   input += synapse0x327a480();
   input += synapse0x327a4c0();
   input += synapse0x327ab40();
   input += synapse0x327ab80();
   input += synapse0x327abc0();
   input += synapse0x327ac00();
   input += synapse0x327ac40();
   input += synapse0x327ac80();
   return input;
}

double NNfunction_bb_b1b1::neuron0x327a2f0() {
   double input = input0x327a2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x327acc0() {
   double input = -8.00135;
   input += synapse0x327b000();
   input += synapse0x327b040();
   input += synapse0x327b080();
   input += synapse0x327b0c0();
   input += synapse0x327b100();
   input += synapse0x327b140();
   input += synapse0x327b180();
   input += synapse0x327b1c0();
   input += synapse0x327b200();
   input += synapse0x327b240();
   input += synapse0x327b280();
   input += synapse0x327b2c0();
   input += synapse0x327b300();
   input += synapse0x327b340();
   input += synapse0x327b380();
   input += synapse0x327b3c0();
   input += synapse0x327ae50();
   input += synapse0x327ae90();
   input += synapse0x327b510();
   input += synapse0x327b550();
   input += synapse0x327b590();
   input += synapse0x327b5d0();
   input += synapse0x327b610();
   input += synapse0x327b650();
   return input;
}

double NNfunction_bb_b1b1::neuron0x327acc0() {
   double input = input0x327acc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x327b690() {
   double input = 1.16758;
   input += synapse0x327b9d0();
   input += synapse0x327ba10();
   input += synapse0x327ba50();
   input += synapse0x327ba90();
   input += synapse0x327bad0();
   input += synapse0x327bb10();
   input += synapse0x327bb50();
   input += synapse0x327bb90();
   input += synapse0x327bbd0();
   input += synapse0x327bc10();
   input += synapse0x327bc50();
   input += synapse0x327bc90();
   input += synapse0x327bcd0();
   input += synapse0x327bd10();
   input += synapse0x327bd50();
   input += synapse0x327bd90();
   input += synapse0x327b820();
   input += synapse0x327b860();
   input += synapse0x327bee0();
   input += synapse0x327bf20();
   input += synapse0x327bf60();
   input += synapse0x327bfa0();
   input += synapse0x327bfe0();
   input += synapse0x327c020();
   return input;
}

double NNfunction_bb_b1b1::neuron0x327b690() {
   double input = input0x327b690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x327c060() {
   double input = -0.144087;
   input += synapse0x327c3a0();
   input += synapse0x327c3e0();
   input += synapse0x327c420();
   input += synapse0x327c460();
   input += synapse0x327c4a0();
   input += synapse0x327c4e0();
   input += synapse0x327c520();
   input += synapse0x327c560();
   input += synapse0x327c5a0();
   input += synapse0x327c5e0();
   input += synapse0x327c620();
   input += synapse0x327c660();
   input += synapse0x327c6a0();
   input += synapse0x327c6e0();
   input += synapse0x327c720();
   input += synapse0x327c760();
   input += synapse0x327c1f0();
   input += synapse0x327c230();
   input += synapse0x327c8b0();
   input += synapse0x327c8f0();
   input += synapse0x327c930();
   input += synapse0x327c970();
   input += synapse0x327c9b0();
   input += synapse0x327c9f0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x327c060() {
   double input = input0x327c060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x327ca30() {
   double input = -1.67118;
   input += synapse0x327cd70();
   input += synapse0x327cdb0();
   input += synapse0x327cdf0();
   input += synapse0x327ce30();
   input += synapse0x327ce70();
   input += synapse0x327ceb0();
   input += synapse0x327cef0();
   input += synapse0x327cf30();
   input += synapse0x327cf70();
   input += synapse0x327cfb0();
   input += synapse0x327cff0();
   input += synapse0x327d030();
   input += synapse0x327d070();
   input += synapse0x327d0b0();
   input += synapse0x327d0f0();
   input += synapse0x327d130();
   input += synapse0x327cbc0();
   input += synapse0x327cc00();
   input += synapse0x327d280();
   input += synapse0x327d2c0();
   input += synapse0x327d300();
   input += synapse0x327d340();
   input += synapse0x327d380();
   input += synapse0x327d3c0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x327ca30() {
   double input = input0x327ca30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x327d400() {
   double input = 4.56061;
   input += synapse0x327d740();
   input += synapse0x327d780();
   input += synapse0x327d7c0();
   input += synapse0x327d800();
   input += synapse0x327d840();
   input += synapse0x327d880();
   input += synapse0x327d8c0();
   input += synapse0x327d900();
   input += synapse0x327d940();
   input += synapse0x327d980();
   input += synapse0x327d9c0();
   input += synapse0x327da00();
   input += synapse0x327da40();
   input += synapse0x327da80();
   input += synapse0x327dac0();
   input += synapse0x327db00();
   input += synapse0x327d590();
   input += synapse0x327d5d0();
   input += synapse0x327dc50();
   input += synapse0x327dc90();
   input += synapse0x327dcd0();
   input += synapse0x327dd10();
   input += synapse0x327dd50();
   input += synapse0x327dd90();
   return input;
}

double NNfunction_bb_b1b1::neuron0x327d400() {
   double input = input0x327d400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x327ddd0() {
   double input = -0.64579;
   input += synapse0x327e110();
   input += synapse0x327e150();
   input += synapse0x327e190();
   input += synapse0x327e1d0();
   input += synapse0x327e210();
   input += synapse0x327e250();
   input += synapse0x327e290();
   input += synapse0x327e2d0();
   input += synapse0x327e310();
   input += synapse0x327e350();
   input += synapse0x327e390();
   input += synapse0x327e3d0();
   input += synapse0x327e410();
   input += synapse0x327e450();
   input += synapse0x327e490();
   input += synapse0x327e4d0();
   input += synapse0x327df60();
   input += synapse0x327dfa0();
   input += synapse0x327e620();
   input += synapse0x327e660();
   input += synapse0x327e6a0();
   input += synapse0x327e6e0();
   input += synapse0x327e720();
   input += synapse0x327e760();
   return input;
}

double NNfunction_bb_b1b1::neuron0x327ddd0() {
   double input = input0x327ddd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x327e7a0() {
   double input = -5.46285;
   input += synapse0x327eae0();
   input += synapse0x32730b0();
   input += synapse0x32730f0();
   input += synapse0x3273130();
   input += synapse0x3273380();
   input += synapse0x32733c0();
   input += synapse0x3273400();
   input += synapse0x3273650();
   input += synapse0x3273690();
   input += synapse0x32738e0();
   input += synapse0x3273920();
   input += synapse0x3273960();
   input += synapse0x3273bb0();
   input += synapse0x3273bf0();
   input += synapse0x3273e40();
   input += synapse0x3273e80();
   input += synapse0x327e930();
   input += synapse0x327e970();
   input += synapse0x3273fd0();
   input += synapse0x32744e0();
   input += synapse0x3274520();
   input += synapse0x3274560();
   input += synapse0x32747b0();
   input += synapse0x32747f0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x327e7a0() {
   double input = input0x327e7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3274830() {
   double input = -2.02798;
   input += synapse0x32740a0();
   input += synapse0x32740e0();
   input += synapse0x3274120();
   input += synapse0x3274160();
   input += synapse0x3274ae0();
   input += synapse0x3280e30();
   input += synapse0x3280e70();
   input += synapse0x3280eb0();
   input += synapse0x3280ef0();
   input += synapse0x3280f30();
   input += synapse0x3280f70();
   input += synapse0x3280fb0();
   input += synapse0x3280ff0();
   input += synapse0x3281030();
   input += synapse0x3281070();
   input += synapse0x32810b0();
   input += synapse0x32749c0();
   input += synapse0x3274a00();
   input += synapse0x3281200();
   input += synapse0x3281240();
   input += synapse0x3281280();
   input += synapse0x32812c0();
   input += synapse0x3281300();
   input += synapse0x3281340();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3274830() {
   double input = input0x3274830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3281380() {
   double input = 0.70402;
   input += synapse0x32816c0();
   input += synapse0x3281700();
   input += synapse0x3281740();
   input += synapse0x3281780();
   input += synapse0x32817c0();
   input += synapse0x3281800();
   input += synapse0x3281840();
   input += synapse0x3281880();
   input += synapse0x32818c0();
   input += synapse0x3281900();
   input += synapse0x3281940();
   input += synapse0x3281980();
   input += synapse0x32819c0();
   input += synapse0x3281a00();
   input += synapse0x3281a40();
   input += synapse0x3281a80();
   input += synapse0x3281510();
   input += synapse0x3281550();
   input += synapse0x3281bd0();
   input += synapse0x3281c10();
   input += synapse0x3281c50();
   input += synapse0x3281c90();
   input += synapse0x3281cd0();
   input += synapse0x3281d10();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3281380() {
   double input = input0x3281380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3281d50() {
   double input = 1.8219;
   input += synapse0x3282090();
   input += synapse0x32820d0();
   input += synapse0x3282110();
   input += synapse0x3282150();
   input += synapse0x3282190();
   input += synapse0x32821d0();
   input += synapse0x3282210();
   input += synapse0x3282250();
   input += synapse0x3282290();
   input += synapse0x32822d0();
   input += synapse0x3282310();
   input += synapse0x3282350();
   input += synapse0x3282390();
   input += synapse0x32823d0();
   input += synapse0x3282410();
   input += synapse0x3282450();
   input += synapse0x3281ee0();
   input += synapse0x3281f20();
   input += synapse0x32825a0();
   input += synapse0x32825e0();
   input += synapse0x3282620();
   input += synapse0x3282660();
   input += synapse0x32826a0();
   input += synapse0x32826e0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3281d50() {
   double input = input0x3281d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3282720() {
   double input = 1.87251;
   input += synapse0x3282a60();
   input += synapse0x3282aa0();
   input += synapse0x3282ae0();
   input += synapse0x3282b20();
   input += synapse0x3282b60();
   input += synapse0x3282ba0();
   input += synapse0x3282be0();
   input += synapse0x3282c20();
   input += synapse0x3282c60();
   input += synapse0x3282ca0();
   input += synapse0x3282ce0();
   input += synapse0x3282d20();
   input += synapse0x3282d60();
   input += synapse0x3282da0();
   input += synapse0x3282de0();
   input += synapse0x3282e20();
   input += synapse0x32828b0();
   input += synapse0x32828f0();
   input += synapse0x3282f70();
   input += synapse0x3282fb0();
   input += synapse0x3282ff0();
   input += synapse0x3283030();
   input += synapse0x3283070();
   input += synapse0x32830b0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3282720() {
   double input = input0x3282720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x32830f0() {
   double input = -1.22895;
   input += synapse0x3283430();
   input += synapse0x3283470();
   input += synapse0x32834b0();
   input += synapse0x32834f0();
   input += synapse0x3283530();
   input += synapse0x3283570();
   input += synapse0x32835b0();
   input += synapse0x32835f0();
   input += synapse0x3283630();
   input += synapse0x3283670();
   input += synapse0x32836b0();
   input += synapse0x32836f0();
   input += synapse0x3283730();
   input += synapse0x3283770();
   input += synapse0x32837b0();
   input += synapse0x32837f0();
   input += synapse0x3283280();
   input += synapse0x32832c0();
   input += synapse0x3283940();
   input += synapse0x3283980();
   input += synapse0x32839c0();
   input += synapse0x3283a00();
   input += synapse0x3283a40();
   input += synapse0x3283a80();
   return input;
}

double NNfunction_bb_b1b1::neuron0x32830f0() {
   double input = input0x32830f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3283ac0() {
   double input = 1.03681;
   input += synapse0x3283e00();
   input += synapse0x3283e40();
   input += synapse0x3283e80();
   input += synapse0x3283ec0();
   input += synapse0x3283f00();
   input += synapse0x3283f40();
   input += synapse0x3283f80();
   input += synapse0x3283fc0();
   input += synapse0x3284000();
   input += synapse0x3284040();
   input += synapse0x3284080();
   input += synapse0x32840c0();
   input += synapse0x3284100();
   input += synapse0x3284140();
   input += synapse0x3284180();
   input += synapse0x32841c0();
   input += synapse0x3283c50();
   input += synapse0x3283c90();
   input += synapse0x3284310();
   input += synapse0x3284350();
   input += synapse0x3284390();
   input += synapse0x32843d0();
   input += synapse0x3284410();
   input += synapse0x3284450();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3283ac0() {
   double input = input0x3283ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3284490() {
   double input = -0.8945;
   input += synapse0x32847d0();
   input += synapse0x3284810();
   input += synapse0x3284850();
   input += synapse0x3284890();
   input += synapse0x32848d0();
   input += synapse0x3284910();
   input += synapse0x3284950();
   input += synapse0x3284990();
   input += synapse0x32849d0();
   input += synapse0x3284a10();
   input += synapse0x3284a50();
   input += synapse0x3284a90();
   input += synapse0x3284ad0();
   input += synapse0x3284b10();
   input += synapse0x3284b50();
   input += synapse0x3284b90();
   input += synapse0x3284620();
   input += synapse0x3284660();
   input += synapse0x3284ce0();
   input += synapse0x3284d20();
   input += synapse0x3284d60();
   input += synapse0x3284da0();
   input += synapse0x3284de0();
   input += synapse0x3284e20();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3284490() {
   double input = input0x3284490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3284e60() {
   double input = 2.21391;
   input += synapse0x32851a0();
   input += synapse0x32851e0();
   input += synapse0x3285220();
   input += synapse0x3285260();
   input += synapse0x32852a0();
   input += synapse0x32852e0();
   input += synapse0x3285320();
   input += synapse0x3285360();
   input += synapse0x32853a0();
   input += synapse0x32853e0();
   input += synapse0x3285420();
   input += synapse0x3285460();
   input += synapse0x32854a0();
   input += synapse0x32854e0();
   input += synapse0x3285520();
   input += synapse0x3285560();
   input += synapse0x3284ff0();
   input += synapse0x3285030();
   input += synapse0x32856b0();
   input += synapse0x32856f0();
   input += synapse0x3285730();
   input += synapse0x3285770();
   input += synapse0x32857b0();
   input += synapse0x32857f0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3284e60() {
   double input = input0x3284e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3285830() {
   double input = -2.22461;
   input += synapse0x326e2a0();
   input += synapse0x326e2e0();
   input += synapse0x326e320();
   input += synapse0x326e360();
   input += synapse0x326e3a0();
   input += synapse0x326e3e0();
   input += synapse0x326e420();
   input += synapse0x326e460();
   input += synapse0x3285f80();
   input += synapse0x3285fc0();
   input += synapse0x3286000();
   input += synapse0x3286040();
   input += synapse0x3286080();
   input += synapse0x32860c0();
   input += synapse0x3286100();
   input += synapse0x3286140();
   input += synapse0x32859c0();
   input += synapse0x3285a00();
   input += synapse0x3286290();
   input += synapse0x32862d0();
   input += synapse0x3286310();
   input += synapse0x3286350();
   input += synapse0x3286390();
   input += synapse0x32863d0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3285830() {
   double input = input0x3285830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3286410() {
   double input = -0.907326;
   input += synapse0x3286750();
   input += synapse0x3286790();
   input += synapse0x32867d0();
   input += synapse0x3286810();
   input += synapse0x3286850();
   input += synapse0x3286890();
   input += synapse0x32868d0();
   input += synapse0x3286910();
   input += synapse0x3286950();
   input += synapse0x3286990();
   input += synapse0x32869d0();
   input += synapse0x3286a10();
   input += synapse0x3286a50();
   input += synapse0x3286a90();
   input += synapse0x3286ad0();
   input += synapse0x3286b10();
   input += synapse0x32865a0();
   input += synapse0x32865e0();
   input += synapse0x3286c60();
   input += synapse0x3286ca0();
   input += synapse0x3286ce0();
   input += synapse0x3286d20();
   input += synapse0x3286d60();
   input += synapse0x3286da0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3286410() {
   double input = input0x3286410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3286de0() {
   double input = 0.902184;
   input += synapse0x3287120();
   input += synapse0x3287160();
   input += synapse0x32871a0();
   input += synapse0x32871e0();
   input += synapse0x3287220();
   input += synapse0x3287260();
   input += synapse0x32872a0();
   input += synapse0x32872e0();
   input += synapse0x3287320();
   input += synapse0x3287360();
   input += synapse0x32873a0();
   input += synapse0x32873e0();
   input += synapse0x3287420();
   input += synapse0x3287460();
   input += synapse0x32874a0();
   input += synapse0x32874e0();
   input += synapse0x3286f70();
   input += synapse0x3286fb0();
   input += synapse0x3277ae0();
   input += synapse0x3277b20();
   input += synapse0x3277b60();
   input += synapse0x3277ba0();
   input += synapse0x3277be0();
   input += synapse0x3277c20();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3286de0() {
   double input = input0x3286de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3277c60() {
   double input = -0.100242;
   input += synapse0x3277fa0();
   input += synapse0x3277fe0();
   input += synapse0x3278020();
   input += synapse0x3278060();
   input += synapse0x32780a0();
   input += synapse0x32780e0();
   input += synapse0x3278120();
   input += synapse0x3278160();
   input += synapse0x32781a0();
   input += synapse0x32781e0();
   input += synapse0x3278220();
   input += synapse0x3278260();
   input += synapse0x32782a0();
   input += synapse0x32782e0();
   input += synapse0x3278320();
   input += synapse0x3278360();
   input += synapse0x3277df0();
   input += synapse0x3277e30();
   input += synapse0x32784b0();
   input += synapse0x32784f0();
   input += synapse0x3278530();
   input += synapse0x3278570();
   input += synapse0x32785b0();
   input += synapse0x32785f0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3277c60() {
   double input = input0x3277c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3278630() {
   double input = 1.00144;
   input += synapse0x3278970();
   input += synapse0x32789b0();
   input += synapse0x32789f0();
   input += synapse0x3278a30();
   input += synapse0x3278a70();
   input += synapse0x3278ab0();
   input += synapse0x3278af0();
   input += synapse0x3278b30();
   input += synapse0x3278b70();
   input += synapse0x3278bb0();
   input += synapse0x3278bf0();
   input += synapse0x3278c30();
   input += synapse0x3278c70();
   input += synapse0x3278cb0();
   input += synapse0x3278cf0();
   input += synapse0x3278d30();
   input += synapse0x32787c0();
   input += synapse0x3278800();
   input += synapse0x3278e80();
   input += synapse0x3278ec0();
   input += synapse0x3278f00();
   input += synapse0x3278f40();
   input += synapse0x3278f80();
   input += synapse0x3278fc0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3278630() {
   double input = input0x3278630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3279000() {
   double input = 2.15414;
   input += synapse0x3279340();
   input += synapse0x3279380();
   input += synapse0x32793c0();
   input += synapse0x3279400();
   input += synapse0x3279440();
   input += synapse0x3279480();
   input += synapse0x32794c0();
   input += synapse0x3279500();
   input += synapse0x3279540();
   input += synapse0x3279580();
   input += synapse0x32795c0();
   input += synapse0x3279600();
   input += synapse0x3279640();
   input += synapse0x3279680();
   input += synapse0x32796c0();
   input += synapse0x3279700();
   input += synapse0x3279190();
   input += synapse0x32791d0();
   input += synapse0x3279850();
   input += synapse0x3279890();
   input += synapse0x32798d0();
   input += synapse0x3279910();
   input += synapse0x3279950();
   input += synapse0x3279990();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3279000() {
   double input = input0x3279000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x328b640() {
   double input = 2.68711;
   input += synapse0x328b860();
   input += synapse0x328b8a0();
   input += synapse0x328b8e0();
   input += synapse0x328b920();
   input += synapse0x328b960();
   input += synapse0x328b9a0();
   input += synapse0x328b9e0();
   input += synapse0x328ba20();
   input += synapse0x328ba60();
   input += synapse0x328baa0();
   input += synapse0x328bae0();
   input += synapse0x328bb20();
   input += synapse0x328bb60();
   input += synapse0x328bba0();
   input += synapse0x328bbe0();
   input += synapse0x328bc20();
   input += synapse0x32799d0();
   input += synapse0x3279a10();
   input += synapse0x328bd70();
   input += synapse0x328bdb0();
   input += synapse0x328bdf0();
   input += synapse0x328be30();
   input += synapse0x328be70();
   input += synapse0x328beb0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x328b640() {
   double input = input0x328b640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x328bef0() {
   double input = -2.48298;
   input += synapse0x328c230();
   input += synapse0x328c270();
   input += synapse0x328c2b0();
   input += synapse0x328c2f0();
   input += synapse0x328c330();
   input += synapse0x328c370();
   input += synapse0x328c3b0();
   input += synapse0x328c3f0();
   input += synapse0x328c430();
   input += synapse0x328c470();
   input += synapse0x328c4b0();
   input += synapse0x328c4f0();
   input += synapse0x328c530();
   input += synapse0x328c570();
   input += synapse0x328c5b0();
   input += synapse0x328c5f0();
   input += synapse0x328c080();
   input += synapse0x328c0c0();
   input += synapse0x328c740();
   input += synapse0x328c780();
   input += synapse0x328c7c0();
   input += synapse0x328c800();
   input += synapse0x328c840();
   input += synapse0x328c880();
   return input;
}

double NNfunction_bb_b1b1::neuron0x328bef0() {
   double input = input0x328bef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x328c8c0() {
   double input = 3.16691;
   input += synapse0x328cc00();
   input += synapse0x328cc40();
   input += synapse0x328cc80();
   input += synapse0x328ccc0();
   input += synapse0x328cd00();
   input += synapse0x328cd40();
   input += synapse0x328cd80();
   input += synapse0x328cdc0();
   input += synapse0x328ce00();
   input += synapse0x328ce40();
   input += synapse0x328ce80();
   input += synapse0x328cec0();
   input += synapse0x328cf00();
   input += synapse0x328cf40();
   input += synapse0x328cf80();
   input += synapse0x328cfc0();
   input += synapse0x328ca50();
   input += synapse0x328ca90();
   input += synapse0x328d110();
   input += synapse0x328d150();
   input += synapse0x328d190();
   input += synapse0x328d1d0();
   input += synapse0x328d210();
   input += synapse0x328d250();
   return input;
}

double NNfunction_bb_b1b1::neuron0x328c8c0() {
   double input = input0x328c8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x328d290() {
   double input = 1.72943;
   input += synapse0x328d5d0();
   input += synapse0x328d610();
   input += synapse0x328d650();
   input += synapse0x328d690();
   input += synapse0x328d6d0();
   input += synapse0x328d710();
   input += synapse0x328d750();
   input += synapse0x328d790();
   input += synapse0x328d7d0();
   input += synapse0x328d810();
   input += synapse0x328d850();
   input += synapse0x328d890();
   input += synapse0x328d8d0();
   input += synapse0x328d910();
   input += synapse0x328d950();
   input += synapse0x328d990();
   input += synapse0x328d420();
   input += synapse0x328d460();
   input += synapse0x328dae0();
   input += synapse0x328db20();
   input += synapse0x328db60();
   input += synapse0x328dba0();
   input += synapse0x328dbe0();
   input += synapse0x328dc20();
   return input;
}

double NNfunction_bb_b1b1::neuron0x328d290() {
   double input = input0x328d290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3294490() {
   double input = -0.707015;
   input += synapse0x302da90();
   input += synapse0x302dad0();
   input += synapse0x326a5c0();
   input += synapse0x326a600();
   input += synapse0x326c0a0();
   input += synapse0x326c0e0();
   input += synapse0x326ce70();
   input += synapse0x326ceb0();
   input += synapse0x326d840();
   input += synapse0x326d880();
   input += synapse0x326e210();
   input += synapse0x326e250();
   input += synapse0x326ecf0();
   input += synapse0x326ed30();
   input += synapse0x326f6c0();
   input += synapse0x326f700();
   input += synapse0x326c7a0();
   input += synapse0x326c7e0();
   input += synapse0x3271270();
   input += synapse0x32712b0();
   input += synapse0x3271c40();
   input += synapse0x3271c80();
   input += synapse0x3272610();
   input += synapse0x3272650();
   input += synapse0x3272fe0();
   input += synapse0x3273020();
   input += synapse0x3266070();
   input += synapse0x32660b0();
   input += synapse0x32750d0();
   input += synapse0x3275110();
   input += synapse0x3275aa0();
   input += synapse0x3275ae0();
   input += synapse0x3276470();
   input += synapse0x32764b0();
   input += synapse0x3276e40();
   input += synapse0x3276e80();
   input += synapse0x3277810();
   input += synapse0x3277850();
   input += synapse0x3270360();
   input += synapse0x32703a0();
   input += synapse0x3279c10();
   input += synapse0x3279c50();
   input += synapse0x327a5a0();
   input += synapse0x327a5e0();
   input += synapse0x327af70();
   input += synapse0x327afb0();
   input += synapse0x327b940();
   input += synapse0x327b980();
   input += synapse0x327c310();
   input += synapse0x327c350();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3294490() {
   double input = input0x3294490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3294830() {
   double input = 0.823536;
   input += synapse0x327ea50();
   input += synapse0x327ea90();
   input += synapse0x3274010();
   input += synapse0x3274050();
   input += synapse0x3281630();
   input += synapse0x3281670();
   input += synapse0x3282000();
   input += synapse0x3282040();
   input += synapse0x32829d0();
   input += synapse0x3282a10();
   input += synapse0x32833a0();
   input += synapse0x32833e0();
   input += synapse0x3283d70();
   input += synapse0x3283db0();
   input += synapse0x3284740();
   input += synapse0x3284780();
   input += synapse0x3285110();
   input += synapse0x3285150();
   input += synapse0x3285ae0();
   input += synapse0x3285b20();
   input += synapse0x32866c0();
   input += synapse0x3286700();
   input += synapse0x3287090();
   input += synapse0x32870d0();
   input += synapse0x3277f10();
   input += synapse0x3277f50();
   input += synapse0x32788e0();
   input += synapse0x3278920();
   input += synapse0x32792b0();
   input += synapse0x32792f0();
   input += synapse0x328b7d0();
   input += synapse0x328b810();
   input += synapse0x328c1a0();
   input += synapse0x328c1e0();
   input += synapse0x328cb70();
   input += synapse0x328cbb0();
   input += synapse0x328d540();
   input += synapse0x328d580();
   input += synapse0x32683b0();
   input += synapse0x32683f0();
   input += synapse0x327cce0();
   input += synapse0x327cd20();
   input += synapse0x328dc60();
   input += synapse0x328dca0();
   input += synapse0x328dce0();
   input += synapse0x328dd20();
   input += synapse0x3294bd0();
   input += synapse0x3294c10();
   input += synapse0x3294c50();
   input += synapse0x3294c90();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3294830() {
   double input = input0x3294830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3294cd0() {
   double input = -0.363373;
   input += synapse0x3295010();
   input += synapse0x3295050();
   input += synapse0x3295090();
   input += synapse0x32950d0();
   input += synapse0x3295110();
   input += synapse0x3295150();
   input += synapse0x3295190();
   input += synapse0x32951d0();
   input += synapse0x3295210();
   input += synapse0x3295250();
   input += synapse0x3295290();
   input += synapse0x32952d0();
   input += synapse0x3295310();
   input += synapse0x3295350();
   input += synapse0x3295390();
   input += synapse0x32953d0();
   input += synapse0x3294e60();
   input += synapse0x3294ea0();
   input += synapse0x3295520();
   input += synapse0x3295560();
   input += synapse0x32955a0();
   input += synapse0x32955e0();
   input += synapse0x3295620();
   input += synapse0x3295660();
   input += synapse0x32956a0();
   input += synapse0x32956e0();
   input += synapse0x3295720();
   input += synapse0x3295760();
   input += synapse0x32957a0();
   input += synapse0x32957e0();
   input += synapse0x3295820();
   input += synapse0x3295860();
   input += synapse0x3295410();
   input += synapse0x3295450();
   input += synapse0x3295490();
   input += synapse0x32954d0();
   input += synapse0x3295ab0();
   input += synapse0x3295af0();
   input += synapse0x3295b30();
   input += synapse0x3295b70();
   input += synapse0x3295bb0();
   input += synapse0x3295bf0();
   input += synapse0x3295c30();
   input += synapse0x3295c70();
   input += synapse0x3295cb0();
   input += synapse0x3295cf0();
   input += synapse0x3295d30();
   input += synapse0x3295d70();
   input += synapse0x3295db0();
   input += synapse0x3295df0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3294cd0() {
   double input = input0x3294cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3295e30() {
   double input = 1.60713;
   input += synapse0x3296170();
   input += synapse0x32961b0();
   input += synapse0x32961f0();
   input += synapse0x3296230();
   input += synapse0x3296270();
   input += synapse0x32962b0();
   input += synapse0x32962f0();
   input += synapse0x3296330();
   input += synapse0x3296370();
   input += synapse0x32963b0();
   input += synapse0x32963f0();
   input += synapse0x3296430();
   input += synapse0x3296470();
   input += synapse0x32964b0();
   input += synapse0x32964f0();
   input += synapse0x3296530();
   input += synapse0x3295fc0();
   input += synapse0x3296000();
   input += synapse0x3296680();
   input += synapse0x32966c0();
   input += synapse0x3296700();
   input += synapse0x3296740();
   input += synapse0x3296780();
   input += synapse0x32967c0();
   input += synapse0x3296800();
   input += synapse0x3296840();
   input += synapse0x3296880();
   input += synapse0x32968c0();
   input += synapse0x3296900();
   input += synapse0x3296940();
   input += synapse0x3296980();
   input += synapse0x32969c0();
   input += synapse0x3296570();
   input += synapse0x32965b0();
   input += synapse0x32965f0();
   input += synapse0x3296630();
   input += synapse0x3296c10();
   input += synapse0x3296c50();
   input += synapse0x3296c90();
   input += synapse0x3296cd0();
   input += synapse0x3296d10();
   input += synapse0x3296d50();
   input += synapse0x3296d90();
   input += synapse0x3296dd0();
   input += synapse0x3296e10();
   input += synapse0x3296e50();
   input += synapse0x3296e90();
   input += synapse0x3296ed0();
   input += synapse0x3296f10();
   input += synapse0x3296f50();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3295e30() {
   double input = input0x3295e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x3296f90() {
   double input = -1.68533;
   input += synapse0x32972d0();
   input += synapse0x3297310();
   input += synapse0x3297350();
   input += synapse0x3297390();
   input += synapse0x32973d0();
   input += synapse0x3297410();
   input += synapse0x3297450();
   input += synapse0x3297490();
   input += synapse0x32974d0();
   input += synapse0x3297510();
   input += synapse0x3297550();
   input += synapse0x3297590();
   input += synapse0x32975d0();
   input += synapse0x3297610();
   input += synapse0x3297650();
   input += synapse0x3297690();
   input += synapse0x3297120();
   input += synapse0x3297160();
   input += synapse0x32977e0();
   input += synapse0x3297820();
   input += synapse0x3297860();
   input += synapse0x32978a0();
   input += synapse0x32978e0();
   input += synapse0x3297920();
   input += synapse0x3297960();
   input += synapse0x32979a0();
   input += synapse0x32979e0();
   input += synapse0x3297a20();
   input += synapse0x3297a60();
   input += synapse0x3297aa0();
   input += synapse0x3297ae0();
   input += synapse0x3297b20();
   input += synapse0x32976d0();
   input += synapse0x3297710();
   input += synapse0x3297750();
   input += synapse0x3297790();
   input += synapse0x3297d70();
   input += synapse0x3297db0();
   input += synapse0x3297df0();
   input += synapse0x3297e30();
   input += synapse0x3297e70();
   input += synapse0x3297eb0();
   input += synapse0x3297ef0();
   input += synapse0x3297f30();
   input += synapse0x3297f70();
   input += synapse0x3297fb0();
   input += synapse0x3297ff0();
   input += synapse0x3298030();
   input += synapse0x3298070();
   input += synapse0x32980b0();
   return input;
}

double NNfunction_bb_b1b1::neuron0x3296f90() {
   double input = input0x3296f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_bb_b1b1::input0x32980f0() {
   double input = 4.07455;
   input += synapse0x3298310();
   input += synapse0x3298350();
   input += synapse0x3298390();
   input += synapse0x32983d0();
   input += synapse0x3298410();
   return input;
}

double NNfunction_bb_b1b1::neuron0x32980f0() {
   double input = input0x32980f0();
   return (input * 1)+0;
}

double NNfunction_bb_b1b1::synapse0x3268440() {
   return (neuron0x3263160()*0.0170291);
}

double NNfunction_bb_b1b1::synapse0x3268480() {
   return (neuron0x3263410()*-0.0114302);
}

double NNfunction_bb_b1b1::synapse0x32684c0() {
   return (neuron0x3263750()*0.0440969);
}

double NNfunction_bb_b1b1::synapse0x3268500() {
   return (neuron0x3263a90()*0.0303725);
}

double NNfunction_bb_b1b1::synapse0x3268540() {
   return (neuron0x3263dd0()*-0.0177107);
}

double NNfunction_bb_b1b1::synapse0x3268580() {
   return (neuron0x3264110()*0.0380969);
}

double NNfunction_bb_b1b1::synapse0x32685c0() {
   return (neuron0x3264450()*-0.0751491);
}

double NNfunction_bb_b1b1::synapse0x3268600() {
   return (neuron0x3264790()*0.00378624);
}

double NNfunction_bb_b1b1::synapse0x3268640() {
   return (neuron0x3264ad0()*0.0161115);
}

double NNfunction_bb_b1b1::synapse0x3268680() {
   return (neuron0x3264e10()*0.0265427);
}

double NNfunction_bb_b1b1::synapse0x32686c0() {
   return (neuron0x3265150()*-0.00369934);
}

double NNfunction_bb_b1b1::synapse0x3268700() {
   return (neuron0x3265490()*-0.000316085);
}

double NNfunction_bb_b1b1::synapse0x3268740() {
   return (neuron0x32657d0()*-0.0102128);
}

double NNfunction_bb_b1b1::synapse0x3268780() {
   return (neuron0x3265b10()*-4.0906);
}

double NNfunction_bb_b1b1::synapse0x32687c0() {
   return (neuron0x3265e50()*-0.0122271);
}

double NNfunction_bb_b1b1::synapse0x3268800() {
   return (neuron0x3266190()*-0.00138367);
}

double NNfunction_bb_b1b1::synapse0x3268290() {
   return (neuron0x32664d0()*-0.0476753);
}

double NNfunction_bb_b1b1::synapse0x32682d0() {
   return (neuron0x3266a30()*-0.00601013);
}

double NNfunction_bb_b1b1::synapse0x202b450() {
   return (neuron0x3266c50()*0.00120933);
}

double NNfunction_bb_b1b1::synapse0x202b490() {
   return (neuron0x3266f90()*7.08782);
}

double NNfunction_bb_b1b1::synapse0x3268950() {
   return (neuron0x32672d0()*0.00371411);
}

double NNfunction_bb_b1b1::synapse0x3268990() {
   return (neuron0x3267610()*-0.00293456);
}

double NNfunction_bb_b1b1::synapse0x32689d0() {
   return (neuron0x3267950()*-0.0145248);
}

double NNfunction_bb_b1b1::synapse0x3268a10() {
   return (neuron0x3267c90()*0.0413014);
}

double NNfunction_bb_b1b1::synapse0x3268d90() {
   return (neuron0x3263160()*-0.124131);
}

double NNfunction_bb_b1b1::synapse0x3268dd0() {
   return (neuron0x3263410()*-0.0126015);
}

double NNfunction_bb_b1b1::synapse0x3268e10() {
   return (neuron0x3263750()*-0.0949986);
}

double NNfunction_bb_b1b1::synapse0x3268e50() {
   return (neuron0x3263a90()*0.020806);
}

double NNfunction_bb_b1b1::synapse0x3268e90() {
   return (neuron0x3263dd0()*-0.055647);
}

double NNfunction_bb_b1b1::synapse0x3268ed0() {
   return (neuron0x3264110()*0.0621231);
}

double NNfunction_bb_b1b1::synapse0x3268f10() {
   return (neuron0x3264450()*-0.100815);
}

double NNfunction_bb_b1b1::synapse0x3268f50() {
   return (neuron0x3264790()*0.0337385);
}

double NNfunction_bb_b1b1::synapse0x3268f90() {
   return (neuron0x3264ad0()*0.0476673);
}

double NNfunction_bb_b1b1::synapse0x3268840() {
   return (neuron0x3264e10()*-0.00575949);
}

double NNfunction_bb_b1b1::synapse0x3268880() {
   return (neuron0x3265150()*-0.0361668);
}

double NNfunction_bb_b1b1::synapse0x32688c0() {
   return (neuron0x3265490()*0.0201848);
}

double NNfunction_bb_b1b1::synapse0x3268900() {
   return (neuron0x32657d0()*-0.0142431);
}

double NNfunction_bb_b1b1::synapse0x32691e0() {
   return (neuron0x3265b10()*-4.43989);
}

double NNfunction_bb_b1b1::synapse0x3269220() {
   return (neuron0x3265e50()*-0.00526493);
}

double NNfunction_bb_b1b1::synapse0x3269260() {
   return (neuron0x3266190()*0.00774369);
}

double NNfunction_bb_b1b1::synapse0x3268be0() {
   return (neuron0x32664d0()*-0.0282017);
}

double NNfunction_bb_b1b1::synapse0x3268c20() {
   return (neuron0x3266a30()*-0.0232793);
}

double NNfunction_bb_b1b1::synapse0x32693b0() {
   return (neuron0x3266c50()*0.0151564);
}

double NNfunction_bb_b1b1::synapse0x32693f0() {
   return (neuron0x3266f90()*8.73475);
}

double NNfunction_bb_b1b1::synapse0x3269430() {
   return (neuron0x32672d0()*-0.0024032);
}

double NNfunction_bb_b1b1::synapse0x3269470() {
   return (neuron0x3267610()*0.00624777);
}

double NNfunction_bb_b1b1::synapse0x32694b0() {
   return (neuron0x3267950()*-0.015494);
}

double NNfunction_bb_b1b1::synapse0x32694f0() {
   return (neuron0x3267c90()*0.14652);
}

double NNfunction_bb_b1b1::synapse0x3269870() {
   return (neuron0x3263160()*-0.325634);
}

double NNfunction_bb_b1b1::synapse0x32698b0() {
   return (neuron0x3263410()*0.00338466);
}

double NNfunction_bb_b1b1::synapse0x32698f0() {
   return (neuron0x3263750()*-0.0656055);
}

double NNfunction_bb_b1b1::synapse0x3269930() {
   return (neuron0x3263a90()*-0.1372);
}

double NNfunction_bb_b1b1::synapse0x3269970() {
   return (neuron0x3263dd0()*0.0580688);
}

double NNfunction_bb_b1b1::synapse0x32699b0() {
   return (neuron0x3264110()*0.0267683);
}

double NNfunction_bb_b1b1::synapse0x32699f0() {
   return (neuron0x3264450()*0.0277093);
}

double NNfunction_bb_b1b1::synapse0x3269a30() {
   return (neuron0x3264790()*-0.00735219);
}

double NNfunction_bb_b1b1::synapse0x3269a70() {
   return (neuron0x3264ad0()*0.0132735);
}

double NNfunction_bb_b1b1::synapse0x3269ab0() {
   return (neuron0x3264e10()*0.0218482);
}

double NNfunction_bb_b1b1::synapse0x3269af0() {
   return (neuron0x3265150()*0.0171831);
}

double NNfunction_bb_b1b1::synapse0x3269b30() {
   return (neuron0x3265490()*-0.00671269);
}

double NNfunction_bb_b1b1::synapse0x3269b70() {
   return (neuron0x32657d0()*-0.00912969);
}

double NNfunction_bb_b1b1::synapse0x3269bb0() {
   return (neuron0x3265b10()*0.794375);
}

double NNfunction_bb_b1b1::synapse0x3269bf0() {
   return (neuron0x3265e50()*0.0136144);
}

double NNfunction_bb_b1b1::synapse0x3269c30() {
   return (neuron0x3266190()*0.0169257);
}

double NNfunction_bb_b1b1::synapse0x32696c0() {
   return (neuron0x32664d0()*0.018419);
}

double NNfunction_bb_b1b1::synapse0x3269700() {
   return (neuron0x3266a30()*0.0294982);
}

double NNfunction_bb_b1b1::synapse0x301f9d0() {
   return (neuron0x3266c50()*0.0276388);
}

double NNfunction_bb_b1b1::synapse0x302d2a0() {
   return (neuron0x3266f90()*1.00043);
}

double NNfunction_bb_b1b1::synapse0x302d2e0() {
   return (neuron0x32672d0()*0.000370365);
}

double NNfunction_bb_b1b1::synapse0x326bb70() {
   return (neuron0x3267610()*-0.308751);
}

double NNfunction_bb_b1b1::synapse0x326bbb0() {
   return (neuron0x3267950()*-0.00833824);
}

double NNfunction_bb_b1b1::synapse0x3262ea0() {
   return (neuron0x3267c90()*2.75312);
}

double NNfunction_bb_b1b1::synapse0x3262f70() {
   return (neuron0x3263160()*-0.0671401);
}

double NNfunction_bb_b1b1::synapse0x302db20() {
   return (neuron0x3263410()*-0.00730667);
}

double NNfunction_bb_b1b1::synapse0x3269160() {
   return (neuron0x3263750()*0.0479588);
}

double NNfunction_bb_b1b1::synapse0x32691a0() {
   return (neuron0x3263a90()*-0.0346321);
}

double NNfunction_bb_b1b1::synapse0x3269d80() {
   return (neuron0x3263dd0()*-0.0212239);
}

double NNfunction_bb_b1b1::synapse0x3269dc0() {
   return (neuron0x3264110()*0.00676279);
}

double NNfunction_bb_b1b1::synapse0x3269e00() {
   return (neuron0x3264450()*0.00459162);
}

double NNfunction_bb_b1b1::synapse0x3269e40() {
   return (neuron0x3264790()*-0.000272652);
}

double NNfunction_bb_b1b1::synapse0x3269e80() {
   return (neuron0x3264ad0()*-0.00274322);
}

double NNfunction_bb_b1b1::synapse0x3269ec0() {
   return (neuron0x3264e10()*-0.00768469);
}

double NNfunction_bb_b1b1::synapse0x3269f00() {
   return (neuron0x3265150()*-0.0192452);
}

double NNfunction_bb_b1b1::synapse0x3269f40() {
   return (neuron0x3265490()*-0.0128949);
}

double NNfunction_bb_b1b1::synapse0x3269f80() {
   return (neuron0x32657d0()*-0.0111049);
}

double NNfunction_bb_b1b1::synapse0x3269fc0() {
   return (neuron0x3265b10()*-0.317685);
}

double NNfunction_bb_b1b1::synapse0x326a000() {
   return (neuron0x3265e50()*-0.0136411);
}

double NNfunction_bb_b1b1::synapse0x326a040() {
   return (neuron0x3266190()*0.0152091);
}

double NNfunction_bb_b1b1::synapse0x3262ee0() {
   return (neuron0x32664d0()*-0.0425777);
}

double NNfunction_bb_b1b1::synapse0x3262f20() {
   return (neuron0x3266a30()*-0.00863012);
}

double NNfunction_bb_b1b1::synapse0x326a190() {
   return (neuron0x3266c50()*-0.00731787);
}

double NNfunction_bb_b1b1::synapse0x326a1d0() {
   return (neuron0x3266f90()*-0.469742);
}

double NNfunction_bb_b1b1::synapse0x326a210() {
   return (neuron0x32672d0()*0.00909567);
}

double NNfunction_bb_b1b1::synapse0x326a250() {
   return (neuron0x3267610()*0.00618962);
}

double NNfunction_bb_b1b1::synapse0x326a290() {
   return (neuron0x3267950()*0.00362371);
}

double NNfunction_bb_b1b1::synapse0x326a2d0() {
   return (neuron0x3267c90()*-0.0225498);
}

double NNfunction_bb_b1b1::synapse0x326a650() {
   return (neuron0x3263160()*0.193091);
}

double NNfunction_bb_b1b1::synapse0x326a690() {
   return (neuron0x3263410()*0.127883);
}

double NNfunction_bb_b1b1::synapse0x326a6d0() {
   return (neuron0x3263750()*0.433559);
}

double NNfunction_bb_b1b1::synapse0x326a710() {
   return (neuron0x3263a90()*2.50621);
}

double NNfunction_bb_b1b1::synapse0x326a750() {
   return (neuron0x3263dd0()*-0.0511287);
}

double NNfunction_bb_b1b1::synapse0x326a790() {
   return (neuron0x3264110()*0.0884343);
}

double NNfunction_bb_b1b1::synapse0x326a7d0() {
   return (neuron0x3264450()*0.176781);
}

double NNfunction_bb_b1b1::synapse0x326a810() {
   return (neuron0x3264790()*0.0385538);
}

double NNfunction_bb_b1b1::synapse0x326a850() {
   return (neuron0x3264ad0()*-0.0228099);
}

double NNfunction_bb_b1b1::synapse0x326a890() {
   return (neuron0x3264e10()*-0.0363845);
}

double NNfunction_bb_b1b1::synapse0x326a8d0() {
   return (neuron0x3265150()*0.041715);
}

double NNfunction_bb_b1b1::synapse0x326a910() {
   return (neuron0x3265490()*-0.0103087);
}

double NNfunction_bb_b1b1::synapse0x326a950() {
   return (neuron0x32657d0()*-0.0919739);
}

double NNfunction_bb_b1b1::synapse0x326a990() {
   return (neuron0x3265b10()*-0.962648);
}

double NNfunction_bb_b1b1::synapse0x326a9d0() {
   return (neuron0x3265e50()*0.0660282);
}

double NNfunction_bb_b1b1::synapse0x326aa10() {
   return (neuron0x3266190()*0.0122886);
}

double NNfunction_bb_b1b1::synapse0x326ab60() {
   return (neuron0x32664d0()*-0.161503);
}

double NNfunction_bb_b1b1::synapse0x326a4a0() {
   return (neuron0x3266a30()*0.0260887);
}

double NNfunction_bb_b1b1::synapse0x326a4e0() {
   return (neuron0x3266c50()*0.0152012);
}

double NNfunction_bb_b1b1::synapse0x326bcb0() {
   return (neuron0x3266f90()*-0.749453);
}

double NNfunction_bb_b1b1::synapse0x326bcf0() {
   return (neuron0x32672d0()*0.108014);
}

double NNfunction_bb_b1b1::synapse0x326bd30() {
   return (neuron0x3267610()*0.123098);
}

double NNfunction_bb_b1b1::synapse0x326bd70() {
   return (neuron0x3267950()*0.0754423);
}

double NNfunction_bb_b1b1::synapse0x326bdb0() {
   return (neuron0x3267c90()*-0.0933829);
}

double NNfunction_bb_b1b1::synapse0x326c130() {
   return (neuron0x3263160()*-0.0296442);
}

double NNfunction_bb_b1b1::synapse0x326c170() {
   return (neuron0x3263410()*0.0216584);
}

double NNfunction_bb_b1b1::synapse0x326c1b0() {
   return (neuron0x3263750()*0.0387239);
}

double NNfunction_bb_b1b1::synapse0x326c1f0() {
   return (neuron0x3263a90()*-0.122125);
}

double NNfunction_bb_b1b1::synapse0x326c230() {
   return (neuron0x3263dd0()*0.125349);
}

double NNfunction_bb_b1b1::synapse0x326c270() {
   return (neuron0x3264110()*-0.0335949);
}

double NNfunction_bb_b1b1::synapse0x326c2b0() {
   return (neuron0x3264450()*0.00614694);
}

double NNfunction_bb_b1b1::synapse0x326c2f0() {
   return (neuron0x3264790()*-0.00675001);
}

double NNfunction_bb_b1b1::synapse0x326c330() {
   return (neuron0x3264ad0()*0.0467086);
}

double NNfunction_bb_b1b1::synapse0x302d5f0() {
   return (neuron0x3264e10()*-0.0517856);
}

double NNfunction_bb_b1b1::synapse0x302d630() {
   return (neuron0x3265150()*0.0768772);
}

double NNfunction_bb_b1b1::synapse0x302d670() {
   return (neuron0x3265490()*0.0105803);
}

double NNfunction_bb_b1b1::synapse0x302d6b0() {
   return (neuron0x32657d0()*0.0349393);
}

double NNfunction_bb_b1b1::synapse0x302d6f0() {
   return (neuron0x3265b10()*1.50904);
}

double NNfunction_bb_b1b1::synapse0x302d730() {
   return (neuron0x3265e50()*-0.0603738);
}

double NNfunction_bb_b1b1::synapse0x302d770() {
   return (neuron0x3266190()*-0.021526);
}

double NNfunction_bb_b1b1::synapse0x326bf80() {
   return (neuron0x32664d0()*0.0353475);
}

double NNfunction_bb_b1b1::synapse0x326bfc0() {
   return (neuron0x3266a30()*0.0300979);
}

double NNfunction_bb_b1b1::synapse0x302d8c0() {
   return (neuron0x3266c50()*0.0342232);
}

double NNfunction_bb_b1b1::synapse0x302d900() {
   return (neuron0x3266f90()*3.14802);
}

double NNfunction_bb_b1b1::synapse0x302d940() {
   return (neuron0x32672d0()*0.0155149);
}

double NNfunction_bb_b1b1::synapse0x302d980() {
   return (neuron0x3267610()*-0.0497464);
}

double NNfunction_bb_b1b1::synapse0x302d9c0() {
   return (neuron0x3267950()*-0.0293942);
}

double NNfunction_bb_b1b1::synapse0x326cb80() {
   return (neuron0x3267c90()*0.00992864);
}

double NNfunction_bb_b1b1::synapse0x326cf00() {
   return (neuron0x3263160()*-0.0147213);
}

double NNfunction_bb_b1b1::synapse0x326cf40() {
   return (neuron0x3263410()*-0.000979889);
}

double NNfunction_bb_b1b1::synapse0x326cf80() {
   return (neuron0x3263750()*-0.0257883);
}

double NNfunction_bb_b1b1::synapse0x326cfc0() {
   return (neuron0x3263a90()*-0.0298428);
}

double NNfunction_bb_b1b1::synapse0x326d000() {
   return (neuron0x3263dd0()*-0.00502466);
}

double NNfunction_bb_b1b1::synapse0x326d040() {
   return (neuron0x3264110()*0.00348667);
}

double NNfunction_bb_b1b1::synapse0x326d080() {
   return (neuron0x3264450()*0.0167467);
}

double NNfunction_bb_b1b1::synapse0x326d0c0() {
   return (neuron0x3264790()*-0.00678396);
}

double NNfunction_bb_b1b1::synapse0x326d100() {
   return (neuron0x3264ad0()*-0.00294865);
}

double NNfunction_bb_b1b1::synapse0x326d140() {
   return (neuron0x3264e10()*0.0118869);
}

double NNfunction_bb_b1b1::synapse0x326d180() {
   return (neuron0x3265150()*0.00159839);
}

double NNfunction_bb_b1b1::synapse0x326d1c0() {
   return (neuron0x3265490()*0.00261534);
}

double NNfunction_bb_b1b1::synapse0x326d200() {
   return (neuron0x32657d0()*-0.00831003);
}

double NNfunction_bb_b1b1::synapse0x326d240() {
   return (neuron0x3265b10()*1.63765);
}

double NNfunction_bb_b1b1::synapse0x326d280() {
   return (neuron0x3265e50()*0.00519149);
}

double NNfunction_bb_b1b1::synapse0x326d2c0() {
   return (neuron0x3266190()*-0.00620683);
}

double NNfunction_bb_b1b1::synapse0x326cd50() {
   return (neuron0x32664d0()*0.074293);
}

double NNfunction_bb_b1b1::synapse0x326cd90() {
   return (neuron0x3266a30()*-0.000336152);
}

double NNfunction_bb_b1b1::synapse0x326d410() {
   return (neuron0x3266c50()*-0.0027514);
}

double NNfunction_bb_b1b1::synapse0x326d450() {
   return (neuron0x3266f90()*-0.465422);
}

double NNfunction_bb_b1b1::synapse0x326d490() {
   return (neuron0x32672d0()*0.0045625);
}

double NNfunction_bb_b1b1::synapse0x326d4d0() {
   return (neuron0x3267610()*-0.00151585);
}

double NNfunction_bb_b1b1::synapse0x326d510() {
   return (neuron0x3267950()*0.00219496);
}

double NNfunction_bb_b1b1::synapse0x326d550() {
   return (neuron0x3267c90()*-0.0249527);
}

double NNfunction_bb_b1b1::synapse0x326d8d0() {
   return (neuron0x3263160()*-0.210293);
}

double NNfunction_bb_b1b1::synapse0x326d910() {
   return (neuron0x3263410()*0.324785);
}

double NNfunction_bb_b1b1::synapse0x326d950() {
   return (neuron0x3263750()*0.499864);
}

double NNfunction_bb_b1b1::synapse0x326d990() {
   return (neuron0x3263a90()*0.129195);
}

double NNfunction_bb_b1b1::synapse0x326d9d0() {
   return (neuron0x3263dd0()*0.0327669);
}

double NNfunction_bb_b1b1::synapse0x326da10() {
   return (neuron0x3264110()*-0.423836);
}

double NNfunction_bb_b1b1::synapse0x326da50() {
   return (neuron0x3264450()*-0.556561);
}

double NNfunction_bb_b1b1::synapse0x326da90() {
   return (neuron0x3264790()*0.83474);
}

double NNfunction_bb_b1b1::synapse0x326dad0() {
   return (neuron0x3264ad0()*-0.314619);
}

double NNfunction_bb_b1b1::synapse0x326db10() {
   return (neuron0x3264e10()*-0.118682);
}

double NNfunction_bb_b1b1::synapse0x326db50() {
   return (neuron0x3265150()*-0.221758);
}

double NNfunction_bb_b1b1::synapse0x326db90() {
   return (neuron0x3265490()*0.195507);
}

double NNfunction_bb_b1b1::synapse0x326dbd0() {
   return (neuron0x32657d0()*0.650655);
}

double NNfunction_bb_b1b1::synapse0x326dc10() {
   return (neuron0x3265b10()*0.60563);
}

double NNfunction_bb_b1b1::synapse0x326dc50() {
   return (neuron0x3265e50()*-1.02333);
}

double NNfunction_bb_b1b1::synapse0x326dc90() {
   return (neuron0x3266190()*0.627994);
}

double NNfunction_bb_b1b1::synapse0x326d720() {
   return (neuron0x32664d0()*-0.374215);
}

double NNfunction_bb_b1b1::synapse0x326d760() {
   return (neuron0x3266a30()*-0.358447);
}

double NNfunction_bb_b1b1::synapse0x326dde0() {
   return (neuron0x3266c50()*-0.307625);
}

double NNfunction_bb_b1b1::synapse0x326de20() {
   return (neuron0x3266f90()*-0.815437);
}

double NNfunction_bb_b1b1::synapse0x326de60() {
   return (neuron0x32672d0()*-0.156565);
}

double NNfunction_bb_b1b1::synapse0x326dea0() {
   return (neuron0x3267610()*-0.0674868);
}

double NNfunction_bb_b1b1::synapse0x326dee0() {
   return (neuron0x3267950()*-0.370722);
}

double NNfunction_bb_b1b1::synapse0x326df20() {
   return (neuron0x3267c90()*-0.935695);
}

double NNfunction_bb_b1b1::synapse0x3266920() {
   return (neuron0x3263160()*-0.0988674);
}

double NNfunction_bb_b1b1::synapse0x3266960() {
   return (neuron0x3263410()*0.0847622);
}

double NNfunction_bb_b1b1::synapse0x32669a0() {
   return (neuron0x3263750()*0.395893);
}

double NNfunction_bb_b1b1::synapse0x32669e0() {
   return (neuron0x3263a90()*-0.134213);
}

double NNfunction_bb_b1b1::synapse0x326e4b0() {
   return (neuron0x3263dd0()*-0.057133);
}

double NNfunction_bb_b1b1::synapse0x326e4f0() {
   return (neuron0x3264110()*0.0276161);
}

double NNfunction_bb_b1b1::synapse0x326e530() {
   return (neuron0x3264450()*-0.0181662);
}

double NNfunction_bb_b1b1::synapse0x326e570() {
   return (neuron0x3264790()*-0.0559409);
}

double NNfunction_bb_b1b1::synapse0x326e5b0() {
   return (neuron0x3264ad0()*-0.0390161);
}

double NNfunction_bb_b1b1::synapse0x326e5f0() {
   return (neuron0x3264e10()*0.000343645);
}

double NNfunction_bb_b1b1::synapse0x326e630() {
   return (neuron0x3265150()*-0.0559802);
}

double NNfunction_bb_b1b1::synapse0x326e670() {
   return (neuron0x3265490()*-0.0175609);
}

double NNfunction_bb_b1b1::synapse0x326e6b0() {
   return (neuron0x32657d0()*-0.0452008);
}

double NNfunction_bb_b1b1::synapse0x326e6f0() {
   return (neuron0x3265b10()*0.469922);
}

double NNfunction_bb_b1b1::synapse0x326e730() {
   return (neuron0x3265e50()*-0.215891);
}

double NNfunction_bb_b1b1::synapse0x326e770() {
   return (neuron0x3266190()*0.166668);
}

double NNfunction_bb_b1b1::synapse0x326e0f0() {
   return (neuron0x32664d0()*0.0128528);
}

double NNfunction_bb_b1b1::synapse0x326e130() {
   return (neuron0x3266a30()*-0.00570544);
}

double NNfunction_bb_b1b1::synapse0x326e8c0() {
   return (neuron0x3266c50()*0.0426878);
}

double NNfunction_bb_b1b1::synapse0x326e900() {
   return (neuron0x3266f90()*-0.136178);
}

double NNfunction_bb_b1b1::synapse0x326e940() {
   return (neuron0x32672d0()*-0.11722);
}

double NNfunction_bb_b1b1::synapse0x326e980() {
   return (neuron0x3267610()*0.0419672);
}

double NNfunction_bb_b1b1::synapse0x326e9c0() {
   return (neuron0x3267950()*0.0626621);
}

double NNfunction_bb_b1b1::synapse0x326ea00() {
   return (neuron0x3267c90()*0.594004);
}

double NNfunction_bb_b1b1::synapse0x326ed80() {
   return (neuron0x3263160()*-0.149527);
}

double NNfunction_bb_b1b1::synapse0x326edc0() {
   return (neuron0x3263410()*0.0184174);
}

double NNfunction_bb_b1b1::synapse0x326ee00() {
   return (neuron0x3263750()*0.0946713);
}

double NNfunction_bb_b1b1::synapse0x326ee40() {
   return (neuron0x3263a90()*0.147962);
}

double NNfunction_bb_b1b1::synapse0x326ee80() {
   return (neuron0x3263dd0()*-0.0274932);
}

double NNfunction_bb_b1b1::synapse0x326eec0() {
   return (neuron0x3264110()*0.0253086);
}

double NNfunction_bb_b1b1::synapse0x326ef00() {
   return (neuron0x3264450()*0.0766085);
}

double NNfunction_bb_b1b1::synapse0x326ef40() {
   return (neuron0x3264790()*-0.0677305);
}

double NNfunction_bb_b1b1::synapse0x326ef80() {
   return (neuron0x3264ad0()*-0.0614912);
}

double NNfunction_bb_b1b1::synapse0x326efc0() {
   return (neuron0x3264e10()*0.0389862);
}

double NNfunction_bb_b1b1::synapse0x326f000() {
   return (neuron0x3265150()*-0.0175409);
}

double NNfunction_bb_b1b1::synapse0x326f040() {
   return (neuron0x3265490()*0.0237443);
}

double NNfunction_bb_b1b1::synapse0x326f080() {
   return (neuron0x32657d0()*-0.033149);
}

double NNfunction_bb_b1b1::synapse0x326f0c0() {
   return (neuron0x3265b10()*0.708152);
}

double NNfunction_bb_b1b1::synapse0x326f100() {
   return (neuron0x3265e50()*0.0275756);
}

double NNfunction_bb_b1b1::synapse0x326f140() {
   return (neuron0x3266190()*-0.0589358);
}

double NNfunction_bb_b1b1::synapse0x326ebd0() {
   return (neuron0x32664d0()*0.0406772);
}

double NNfunction_bb_b1b1::synapse0x326ec10() {
   return (neuron0x3266a30()*0.0592302);
}

double NNfunction_bb_b1b1::synapse0x326f290() {
   return (neuron0x3266c50()*0.00556959);
}

double NNfunction_bb_b1b1::synapse0x326f2d0() {
   return (neuron0x3266f90()*1.12036);
}

double NNfunction_bb_b1b1::synapse0x326f310() {
   return (neuron0x32672d0()*-0.0906264);
}

double NNfunction_bb_b1b1::synapse0x326f350() {
   return (neuron0x3267610()*-0.0164064);
}

double NNfunction_bb_b1b1::synapse0x326f390() {
   return (neuron0x3267950()*0.0467903);
}

double NNfunction_bb_b1b1::synapse0x326f3d0() {
   return (neuron0x3267c90()*0.568542);
}

double NNfunction_bb_b1b1::synapse0x326f750() {
   return (neuron0x3263160()*0.088777);
}

double NNfunction_bb_b1b1::synapse0x326f790() {
   return (neuron0x3263410()*-0.0422832);
}

double NNfunction_bb_b1b1::synapse0x326f7d0() {
   return (neuron0x3263750()*-0.652222);
}

double NNfunction_bb_b1b1::synapse0x326f810() {
   return (neuron0x3263a90()*-0.178466);
}

double NNfunction_bb_b1b1::synapse0x326f850() {
   return (neuron0x3263dd0()*0.0759915);
}

double NNfunction_bb_b1b1::synapse0x326f890() {
   return (neuron0x3264110()*0.00411203);
}

double NNfunction_bb_b1b1::synapse0x326f8d0() {
   return (neuron0x3264450()*0.02525);
}

double NNfunction_bb_b1b1::synapse0x326f910() {
   return (neuron0x3264790()*0.160777);
}

double NNfunction_bb_b1b1::synapse0x326f950() {
   return (neuron0x3264ad0()*0.0624654);
}

double NNfunction_bb_b1b1::synapse0x326f990() {
   return (neuron0x3264e10()*0.00605343);
}

double NNfunction_bb_b1b1::synapse0x326f9d0() {
   return (neuron0x3265150()*0.0759752);
}

double NNfunction_bb_b1b1::synapse0x326fa10() {
   return (neuron0x3265490()*-0.020179);
}

double NNfunction_bb_b1b1::synapse0x326fa50() {
   return (neuron0x32657d0()*0.0271232);
}

double NNfunction_bb_b1b1::synapse0x326fa90() {
   return (neuron0x3265b10()*-0.39629);
}

double NNfunction_bb_b1b1::synapse0x326fad0() {
   return (neuron0x3265e50()*-0.0439765);
}

double NNfunction_bb_b1b1::synapse0x326fb10() {
   return (neuron0x3266190()*0.10214);
}

double NNfunction_bb_b1b1::synapse0x326f5a0() {
   return (neuron0x32664d0()*0.122493);
}

double NNfunction_bb_b1b1::synapse0x326f5e0() {
   return (neuron0x3266a30()*0.0196056);
}

double NNfunction_bb_b1b1::synapse0x326c370() {
   return (neuron0x3266c50()*-0.0090588);
}

double NNfunction_bb_b1b1::synapse0x326c3b0() {
   return (neuron0x3266f90()*0.369873);
}

double NNfunction_bb_b1b1::synapse0x326c3f0() {
   return (neuron0x32672d0()*-0.11673);
}

double NNfunction_bb_b1b1::synapse0x326c430() {
   return (neuron0x3267610()*0.0628857);
}

double NNfunction_bb_b1b1::synapse0x326c470() {
   return (neuron0x3267950()*0.0405398);
}

double NNfunction_bb_b1b1::synapse0x326c4b0() {
   return (neuron0x3267c90()*0.259697);
}

double NNfunction_bb_b1b1::synapse0x326c830() {
   return (neuron0x3263160()*0.140746);
}

double NNfunction_bb_b1b1::synapse0x326c870() {
   return (neuron0x3263410()*-0.0190823);
}

double NNfunction_bb_b1b1::synapse0x326c8b0() {
   return (neuron0x3263750()*-0.243207);
}

double NNfunction_bb_b1b1::synapse0x326c8f0() {
   return (neuron0x3263a90()*-0.180548);
}

double NNfunction_bb_b1b1::synapse0x326c930() {
   return (neuron0x3263dd0()*0.151221);
}

double NNfunction_bb_b1b1::synapse0x326c970() {
   return (neuron0x3264110()*0.00427363);
}

double NNfunction_bb_b1b1::synapse0x326c9b0() {
   return (neuron0x3264450()*-0.052898);
}

double NNfunction_bb_b1b1::synapse0x326c9f0() {
   return (neuron0x3264790()*0.0191453);
}

double NNfunction_bb_b1b1::synapse0x326ca30() {
   return (neuron0x3264ad0()*0.229051);
}

double NNfunction_bb_b1b1::synapse0x326ca70() {
   return (neuron0x3264e10()*0.103291);
}

double NNfunction_bb_b1b1::synapse0x326cab0() {
   return (neuron0x3265150()*0.536743);
}

double NNfunction_bb_b1b1::synapse0x326caf0() {
   return (neuron0x3265490()*-0.0626157);
}

double NNfunction_bb_b1b1::synapse0x326cb30() {
   return (neuron0x32657d0()*-0.105966);
}

double NNfunction_bb_b1b1::synapse0x3270c70() {
   return (neuron0x3265b10()*-0.776987);
}

double NNfunction_bb_b1b1::synapse0x3270cb0() {
   return (neuron0x3265e50()*0.0671505);
}

double NNfunction_bb_b1b1::synapse0x3270cf0() {
   return (neuron0x3266190()*-0.00300796);
}

double NNfunction_bb_b1b1::synapse0x326c680() {
   return (neuron0x32664d0()*-0.693673);
}

double NNfunction_bb_b1b1::synapse0x326c6c0() {
   return (neuron0x3266a30()*0.135062);
}

double NNfunction_bb_b1b1::synapse0x3270e40() {
   return (neuron0x3266c50()*-0.120725);
}

double NNfunction_bb_b1b1::synapse0x3270e80() {
   return (neuron0x3266f90()*0.613526);
}

double NNfunction_bb_b1b1::synapse0x3270ec0() {
   return (neuron0x32672d0()*0.0472561);
}

double NNfunction_bb_b1b1::synapse0x3270f00() {
   return (neuron0x3267610()*0.0136848);
}

double NNfunction_bb_b1b1::synapse0x3270f40() {
   return (neuron0x3267950()*-0.0473968);
}

double NNfunction_bb_b1b1::synapse0x3270f80() {
   return (neuron0x3267c90()*-0.0661051);
}

double NNfunction_bb_b1b1::synapse0x3271300() {
   return (neuron0x3263160()*1.37457);
}

double NNfunction_bb_b1b1::synapse0x3271340() {
   return (neuron0x3263410()*0.784664);
}

double NNfunction_bb_b1b1::synapse0x3271380() {
   return (neuron0x3263750()*0.898514);
}

double NNfunction_bb_b1b1::synapse0x32713c0() {
   return (neuron0x3263a90()*0.0394405);
}

double NNfunction_bb_b1b1::synapse0x3271400() {
   return (neuron0x3263dd0()*0.521261);
}

double NNfunction_bb_b1b1::synapse0x3271440() {
   return (neuron0x3264110()*-1.00962);
}

double NNfunction_bb_b1b1::synapse0x3271480() {
   return (neuron0x3264450()*-0.514661);
}

double NNfunction_bb_b1b1::synapse0x32714c0() {
   return (neuron0x3264790()*0.283686);
}

double NNfunction_bb_b1b1::synapse0x3271500() {
   return (neuron0x3264ad0()*-2.12714);
}

double NNfunction_bb_b1b1::synapse0x3271540() {
   return (neuron0x3264e10()*0.62354);
}

double NNfunction_bb_b1b1::synapse0x3271580() {
   return (neuron0x3265150()*1.10553);
}

double NNfunction_bb_b1b1::synapse0x32715c0() {
   return (neuron0x3265490()*0.614185);
}

double NNfunction_bb_b1b1::synapse0x3271600() {
   return (neuron0x32657d0()*-0.0302211);
}

double NNfunction_bb_b1b1::synapse0x3271640() {
   return (neuron0x3265b10()*-0.839433);
}

double NNfunction_bb_b1b1::synapse0x3271680() {
   return (neuron0x3265e50()*-0.341892);
}

double NNfunction_bb_b1b1::synapse0x32716c0() {
   return (neuron0x3266190()*0.106935);
}

double NNfunction_bb_b1b1::synapse0x3271150() {
   return (neuron0x32664d0()*1.51172);
}

double NNfunction_bb_b1b1::synapse0x3271190() {
   return (neuron0x3266a30()*-1.8816);
}

double NNfunction_bb_b1b1::synapse0x3271810() {
   return (neuron0x3266c50()*0.654606);
}

double NNfunction_bb_b1b1::synapse0x3271850() {
   return (neuron0x3266f90()*0.388997);
}

double NNfunction_bb_b1b1::synapse0x3271890() {
   return (neuron0x32672d0()*-0.260373);
}

double NNfunction_bb_b1b1::synapse0x32718d0() {
   return (neuron0x3267610()*0.322041);
}

double NNfunction_bb_b1b1::synapse0x3271910() {
   return (neuron0x3267950()*-0.381423);
}

double NNfunction_bb_b1b1::synapse0x3271950() {
   return (neuron0x3267c90()*0.620726);
}

double NNfunction_bb_b1b1::synapse0x3271cd0() {
   return (neuron0x3263160()*0.128622);
}

double NNfunction_bb_b1b1::synapse0x3271d10() {
   return (neuron0x3263410()*-0.00301389);
}

double NNfunction_bb_b1b1::synapse0x3271d50() {
   return (neuron0x3263750()*-0.0554595);
}

double NNfunction_bb_b1b1::synapse0x3271d90() {
   return (neuron0x3263a90()*-0.00441957);
}

double NNfunction_bb_b1b1::synapse0x3271dd0() {
   return (neuron0x3263dd0()*0.0204242);
}

double NNfunction_bb_b1b1::synapse0x3271e10() {
   return (neuron0x3264110()*0.00190864);
}

double NNfunction_bb_b1b1::synapse0x3271e50() {
   return (neuron0x3264450()*0.0305327);
}

double NNfunction_bb_b1b1::synapse0x3271e90() {
   return (neuron0x3264790()*0.0387941);
}

double NNfunction_bb_b1b1::synapse0x3271ed0() {
   return (neuron0x3264ad0()*-0.0160731);
}

double NNfunction_bb_b1b1::synapse0x3271f10() {
   return (neuron0x3264e10()*-0.016875);
}

double NNfunction_bb_b1b1::synapse0x3271f50() {
   return (neuron0x3265150()*-0.0224459);
}

double NNfunction_bb_b1b1::synapse0x3271f90() {
   return (neuron0x3265490()*0.00315195);
}

double NNfunction_bb_b1b1::synapse0x3271fd0() {
   return (neuron0x32657d0()*0.00920361);
}

double NNfunction_bb_b1b1::synapse0x3272010() {
   return (neuron0x3265b10()*0.316402);
}

double NNfunction_bb_b1b1::synapse0x3272050() {
   return (neuron0x3265e50()*0.0207156);
}

double NNfunction_bb_b1b1::synapse0x3272090() {
   return (neuron0x3266190()*0.00727803);
}

double NNfunction_bb_b1b1::synapse0x3271b20() {
   return (neuron0x32664d0()*0.0204744);
}

double NNfunction_bb_b1b1::synapse0x3271b60() {
   return (neuron0x3266a30()*0.00114683);
}

double NNfunction_bb_b1b1::synapse0x32721e0() {
   return (neuron0x3266c50()*0.00110433);
}

double NNfunction_bb_b1b1::synapse0x3272220() {
   return (neuron0x3266f90()*-6.39396);
}

double NNfunction_bb_b1b1::synapse0x3272260() {
   return (neuron0x32672d0()*-0.0143578);
}

double NNfunction_bb_b1b1::synapse0x32722a0() {
   return (neuron0x3267610()*-0.0028072);
}

double NNfunction_bb_b1b1::synapse0x32722e0() {
   return (neuron0x3267950()*-0.00328638);
}

double NNfunction_bb_b1b1::synapse0x3272320() {
   return (neuron0x3267c90()*0.00614562);
}

double NNfunction_bb_b1b1::synapse0x32726a0() {
   return (neuron0x3263160()*-0.401137);
}

double NNfunction_bb_b1b1::synapse0x32726e0() {
   return (neuron0x3263410()*-0.414334);
}

double NNfunction_bb_b1b1::synapse0x3272720() {
   return (neuron0x3263750()*0.798088);
}

double NNfunction_bb_b1b1::synapse0x3272760() {
   return (neuron0x3263a90()*0.0373701);
}

double NNfunction_bb_b1b1::synapse0x32727a0() {
   return (neuron0x3263dd0()*0.00880028);
}

double NNfunction_bb_b1b1::synapse0x32727e0() {
   return (neuron0x3264110()*0.053704);
}

double NNfunction_bb_b1b1::synapse0x3272820() {
   return (neuron0x3264450()*-0.0243929);
}

double NNfunction_bb_b1b1::synapse0x3272860() {
   return (neuron0x3264790()*-0.279202);
}

double NNfunction_bb_b1b1::synapse0x32728a0() {
   return (neuron0x3264ad0()*-1.84413);
}

double NNfunction_bb_b1b1::synapse0x32728e0() {
   return (neuron0x3264e10()*0.232072);
}

double NNfunction_bb_b1b1::synapse0x3272920() {
   return (neuron0x3265150()*0.357284);
}

double NNfunction_bb_b1b1::synapse0x3272960() {
   return (neuron0x3265490()*0.061226);
}

double NNfunction_bb_b1b1::synapse0x32729a0() {
   return (neuron0x32657d0()*-0.150756);
}

double NNfunction_bb_b1b1::synapse0x32729e0() {
   return (neuron0x3265b10()*-0.312827);
}

double NNfunction_bb_b1b1::synapse0x3272a20() {
   return (neuron0x3265e50()*-0.126545);
}

double NNfunction_bb_b1b1::synapse0x3272a60() {
   return (neuron0x3266190()*-0.412376);
}

double NNfunction_bb_b1b1::synapse0x32724f0() {
   return (neuron0x32664d0()*-0.14518);
}

double NNfunction_bb_b1b1::synapse0x3272530() {
   return (neuron0x3266a30()*0.100521);
}

double NNfunction_bb_b1b1::synapse0x3272bb0() {
   return (neuron0x3266c50()*-0.0345109);
}

double NNfunction_bb_b1b1::synapse0x3272bf0() {
   return (neuron0x3266f90()*-1.17282);
}

double NNfunction_bb_b1b1::synapse0x3272c30() {
   return (neuron0x32672d0()*0.177053);
}

double NNfunction_bb_b1b1::synapse0x3272c70() {
   return (neuron0x3267610()*-0.154717);
}

double NNfunction_bb_b1b1::synapse0x3272cb0() {
   return (neuron0x3267950()*-0.38335);
}

double NNfunction_bb_b1b1::synapse0x3272cf0() {
   return (neuron0x3267c90()*-0.568309);
}

double NNfunction_bb_b1b1::synapse0x3273070() {
   return (neuron0x3263160()*0.0227432);
}

double NNfunction_bb_b1b1::synapse0x32632f0() {
   return (neuron0x3263410()*-0.0823518);
}

double NNfunction_bb_b1b1::synapse0x3263330() {
   return (neuron0x3263750()*1.0266);
}

double NNfunction_bb_b1b1::synapse0x3263630() {
   return (neuron0x3263a90()*0.00438014);
}

double NNfunction_bb_b1b1::synapse0x3263670() {
   return (neuron0x3263dd0()*-0.0407056);
}

double NNfunction_bb_b1b1::synapse0x3263970() {
   return (neuron0x3264110()*-0.00143024);
}

double NNfunction_bb_b1b1::synapse0x32639b0() {
   return (neuron0x3264450()*-0.0237614);
}

double NNfunction_bb_b1b1::synapse0x3263cb0() {
   return (neuron0x3264790()*0.136087);
}

double NNfunction_bb_b1b1::synapse0x3263cf0() {
   return (neuron0x3264ad0()*0.0210348);
}

double NNfunction_bb_b1b1::synapse0x3263ff0() {
   return (neuron0x3264e10()*-0.0208553);
}

double NNfunction_bb_b1b1::synapse0x3264030() {
   return (neuron0x3265150()*-0.0163923);
}

double NNfunction_bb_b1b1::synapse0x3264330() {
   return (neuron0x3265490()*-0.0836571);
}

double NNfunction_bb_b1b1::synapse0x3264370() {
   return (neuron0x32657d0()*-0.0186615);
}

double NNfunction_bb_b1b1::synapse0x3264670() {
   return (neuron0x3265b10()*-0.491546);
}

double NNfunction_bb_b1b1::synapse0x32646b0() {
   return (neuron0x3265e50()*-0.0500962);
}

double NNfunction_bb_b1b1::synapse0x32649b0() {
   return (neuron0x3266190()*0.00941495);
}

double NNfunction_bb_b1b1::synapse0x32649f0() {
   return (neuron0x32664d0()*0.13165);
}

double NNfunction_bb_b1b1::synapse0x3264cf0() {
   return (neuron0x3266a30()*-0.0408961);
}

double NNfunction_bb_b1b1::synapse0x3264d30() {
   return (neuron0x3266c50()*-0.0505317);
}

double NNfunction_bb_b1b1::synapse0x3265030() {
   return (neuron0x3266f90()*-0.347937);
}

double NNfunction_bb_b1b1::synapse0x3265070() {
   return (neuron0x32672d0()*-0.00384426);
}

double NNfunction_bb_b1b1::synapse0x3265370() {
   return (neuron0x3267610()*0.0659765);
}

double NNfunction_bb_b1b1::synapse0x32653b0() {
   return (neuron0x3267950()*0.00381712);
}

double NNfunction_bb_b1b1::synapse0x32656b0() {
   return (neuron0x3267c90()*0.130166);
}

double NNfunction_bb_b1b1::synapse0x32656f0() {
   return (neuron0x3263160()*-0.611942);
}

double NNfunction_bb_b1b1::synapse0x32663b0() {
   return (neuron0x3263410()*-0.0663637);
}

double NNfunction_bb_b1b1::synapse0x32663f0() {
   return (neuron0x3263750()*-0.106265);
}

double NNfunction_bb_b1b1::synapse0x3272ec0() {
   return (neuron0x3263a90()*-0.083936);
}

double NNfunction_bb_b1b1::synapse0x3272f00() {
   return (neuron0x3263dd0()*0.0608297);
}

double NNfunction_bb_b1b1::synapse0x32666f0() {
   return (neuron0x3264110()*-0.00802282);
}

double NNfunction_bb_b1b1::synapse0x3266730() {
   return (neuron0x3264450()*0.0153869);
}

double NNfunction_bb_b1b1::synapse0x201c580() {
   return (neuron0x3264790()*-0.0666763);
}

double NNfunction_bb_b1b1::synapse0x201c5c0() {
   return (neuron0x3264ad0()*-0.0553012);
}

double NNfunction_bb_b1b1::synapse0x3266e70() {
   return (neuron0x3264e10()*-0.141941);
}

double NNfunction_bb_b1b1::synapse0x3266eb0() {
   return (neuron0x3265150()*-0.0121102);
}

double NNfunction_bb_b1b1::synapse0x32671b0() {
   return (neuron0x3265490()*0.00607647);
}

double NNfunction_bb_b1b1::synapse0x32671f0() {
   return (neuron0x32657d0()*0.002695);
}

double NNfunction_bb_b1b1::synapse0x32674f0() {
   return (neuron0x3265b10()*0.723533);
}

double NNfunction_bb_b1b1::synapse0x3267530() {
   return (neuron0x3265e50()*0.0564703);
}

double NNfunction_bb_b1b1::synapse0x3267830() {
   return (neuron0x3266190()*0.0819943);
}

double NNfunction_bb_b1b1::synapse0x3267870() {
   return (neuron0x32664d0()*0.0912272);
}

double NNfunction_bb_b1b1::synapse0x3267b70() {
   return (neuron0x3266a30()*-0.0565986);
}

double NNfunction_bb_b1b1::synapse0x3267bb0() {
   return (neuron0x3266c50()*-0.0273985);
}

double NNfunction_bb_b1b1::synapse0x3267eb0() {
   return (neuron0x3266f90()*-0.640486);
}

double NNfunction_bb_b1b1::synapse0x3267ef0() {
   return (neuron0x32672d0()*-0.104778);
}

double NNfunction_bb_b1b1::synapse0x32659f0() {
   return (neuron0x3267610()*-0.57123);
}

double NNfunction_bb_b1b1::synapse0x3265a30() {
   return (neuron0x3267950()*0.00505273);
}

double NNfunction_bb_b1b1::synapse0x3274de0() {
   return (neuron0x3267c90()*0.908123);
}

double NNfunction_bb_b1b1::synapse0x3275160() {
   return (neuron0x3263160()*0.244871);
}

double NNfunction_bb_b1b1::synapse0x32751a0() {
   return (neuron0x3263410()*-0.033002);
}

double NNfunction_bb_b1b1::synapse0x32751e0() {
   return (neuron0x3263750()*-0.0565282);
}

double NNfunction_bb_b1b1::synapse0x3275220() {
   return (neuron0x3263a90()*-0.139759);
}

double NNfunction_bb_b1b1::synapse0x3275260() {
   return (neuron0x3263dd0()*0.107315);
}

double NNfunction_bb_b1b1::synapse0x32752a0() {
   return (neuron0x3264110()*-0.0614458);
}

double NNfunction_bb_b1b1::synapse0x32752e0() {
   return (neuron0x3264450()*-0.00914895);
}

double NNfunction_bb_b1b1::synapse0x3275320() {
   return (neuron0x3264790()*-0.0363887);
}

double NNfunction_bb_b1b1::synapse0x3275360() {
   return (neuron0x3264ad0()*0.0166845);
}

double NNfunction_bb_b1b1::synapse0x32753a0() {
   return (neuron0x3264e10()*0.574839);
}

double NNfunction_bb_b1b1::synapse0x32753e0() {
   return (neuron0x3265150()*-0.0661545);
}

double NNfunction_bb_b1b1::synapse0x3275420() {
   return (neuron0x3265490()*0.00331989);
}

double NNfunction_bb_b1b1::synapse0x3275460() {
   return (neuron0x32657d0()*-0.0152313);
}

double NNfunction_bb_b1b1::synapse0x32754a0() {
   return (neuron0x3265b10()*-0.455868);
}

double NNfunction_bb_b1b1::synapse0x32754e0() {
   return (neuron0x3265e50()*-0.235825);
}

double NNfunction_bb_b1b1::synapse0x3275520() {
   return (neuron0x3266190()*-0.0819728);
}

double NNfunction_bb_b1b1::synapse0x3274fb0() {
   return (neuron0x32664d0()*-0.015633);
}

double NNfunction_bb_b1b1::synapse0x3274ff0() {
   return (neuron0x3266a30()*0.0723713);
}

double NNfunction_bb_b1b1::synapse0x3275670() {
   return (neuron0x3266c50()*-0.0403569);
}

double NNfunction_bb_b1b1::synapse0x32756b0() {
   return (neuron0x3266f90()*0.800459);
}

double NNfunction_bb_b1b1::synapse0x32756f0() {
   return (neuron0x32672d0()*0.10331);
}

double NNfunction_bb_b1b1::synapse0x3275730() {
   return (neuron0x3267610()*0.367969);
}

double NNfunction_bb_b1b1::synapse0x3275770() {
   return (neuron0x3267950()*0.0155571);
}

double NNfunction_bb_b1b1::synapse0x32757b0() {
   return (neuron0x3267c90()*-0.442282);
}

double NNfunction_bb_b1b1::synapse0x3275b30() {
   return (neuron0x3263160()*-0.185211);
}

double NNfunction_bb_b1b1::synapse0x3275b70() {
   return (neuron0x3263410()*-0.00064149);
}

double NNfunction_bb_b1b1::synapse0x3275bb0() {
   return (neuron0x3263750()*-0.0675619);
}

double NNfunction_bb_b1b1::synapse0x3275bf0() {
   return (neuron0x3263a90()*-3.24191);
}

double NNfunction_bb_b1b1::synapse0x3275c30() {
   return (neuron0x3263dd0()*0.0161798);
}

double NNfunction_bb_b1b1::synapse0x3275c70() {
   return (neuron0x3264110()*-0.0155584);
}

double NNfunction_bb_b1b1::synapse0x3275cb0() {
   return (neuron0x3264450()*0.00524405);
}

double NNfunction_bb_b1b1::synapse0x3275cf0() {
   return (neuron0x3264790()*0.00562478);
}

double NNfunction_bb_b1b1::synapse0x3275d30() {
   return (neuron0x3264ad0()*-0.00243326);
}

double NNfunction_bb_b1b1::synapse0x3275d70() {
   return (neuron0x3264e10()*0.022463);
}

double NNfunction_bb_b1b1::synapse0x3275db0() {
   return (neuron0x3265150()*0.00101149);
}

double NNfunction_bb_b1b1::synapse0x3275df0() {
   return (neuron0x3265490()*-0.00806507);
}

double NNfunction_bb_b1b1::synapse0x3275e30() {
   return (neuron0x32657d0()*0.0203895);
}

double NNfunction_bb_b1b1::synapse0x3275e70() {
   return (neuron0x3265b10()*0.0964549);
}

double NNfunction_bb_b1b1::synapse0x3275eb0() {
   return (neuron0x3265e50()*-0.008833);
}

double NNfunction_bb_b1b1::synapse0x3275ef0() {
   return (neuron0x3266190()*0.0415417);
}

double NNfunction_bb_b1b1::synapse0x3275980() {
   return (neuron0x32664d0()*-0.0229497);
}

double NNfunction_bb_b1b1::synapse0x32759c0() {
   return (neuron0x3266a30()*0.00159777);
}

double NNfunction_bb_b1b1::synapse0x3276040() {
   return (neuron0x3266c50()*-0.0214345);
}

double NNfunction_bb_b1b1::synapse0x3276080() {
   return (neuron0x3266f90()*0.317412);
}

double NNfunction_bb_b1b1::synapse0x32760c0() {
   return (neuron0x32672d0()*0.0792852);
}

double NNfunction_bb_b1b1::synapse0x3276100() {
   return (neuron0x3267610()*-0.0539293);
}

double NNfunction_bb_b1b1::synapse0x3276140() {
   return (neuron0x3267950()*-0.00565244);
}

double NNfunction_bb_b1b1::synapse0x3276180() {
   return (neuron0x3267c90()*-0.0878186);
}

double NNfunction_bb_b1b1::synapse0x3276500() {
   return (neuron0x3263160()*0.213959);
}

double NNfunction_bb_b1b1::synapse0x3276540() {
   return (neuron0x3263410()*-0.0398864);
}

double NNfunction_bb_b1b1::synapse0x3276580() {
   return (neuron0x3263750()*-0.0273709);
}

double NNfunction_bb_b1b1::synapse0x32765c0() {
   return (neuron0x3263a90()*-0.017066);
}

double NNfunction_bb_b1b1::synapse0x3276600() {
   return (neuron0x3263dd0()*0.082522);
}

double NNfunction_bb_b1b1::synapse0x3276640() {
   return (neuron0x3264110()*0.014843);
}

double NNfunction_bb_b1b1::synapse0x3276680() {
   return (neuron0x3264450()*-0.0292151);
}

double NNfunction_bb_b1b1::synapse0x32766c0() {
   return (neuron0x3264790()*0.02161);
}

double NNfunction_bb_b1b1::synapse0x3276700() {
   return (neuron0x3264ad0()*0.0290059);
}

double NNfunction_bb_b1b1::synapse0x3276740() {
   return (neuron0x3264e10()*0.0210244);
}

double NNfunction_bb_b1b1::synapse0x3276780() {
   return (neuron0x3265150()*-0.00723843);
}

double NNfunction_bb_b1b1::synapse0x32767c0() {
   return (neuron0x3265490()*-0.0084361);
}

double NNfunction_bb_b1b1::synapse0x3276800() {
   return (neuron0x32657d0()*-0.0124936);
}

double NNfunction_bb_b1b1::synapse0x3276840() {
   return (neuron0x3265b10()*0.261464);
}

double NNfunction_bb_b1b1::synapse0x3276880() {
   return (neuron0x3265e50()*-0.0242648);
}

double NNfunction_bb_b1b1::synapse0x32768c0() {
   return (neuron0x3266190()*0.0415274);
}

double NNfunction_bb_b1b1::synapse0x3276350() {
   return (neuron0x32664d0()*-0.0285275);
}

double NNfunction_bb_b1b1::synapse0x3276390() {
   return (neuron0x3266a30()*-0.00345387);
}

double NNfunction_bb_b1b1::synapse0x3276a10() {
   return (neuron0x3266c50()*0.0014208);
}

double NNfunction_bb_b1b1::synapse0x3276a50() {
   return (neuron0x3266f90()*-1.44379);
}

double NNfunction_bb_b1b1::synapse0x3276a90() {
   return (neuron0x32672d0()*-0.0752139);
}

double NNfunction_bb_b1b1::synapse0x3276ad0() {
   return (neuron0x3267610()*-0.488609);
}

double NNfunction_bb_b1b1::synapse0x3276b10() {
   return (neuron0x3267950()*-0.046566);
}

double NNfunction_bb_b1b1::synapse0x3276b50() {
   return (neuron0x3267c90()*3.20054);
}

double NNfunction_bb_b1b1::synapse0x3276ed0() {
   return (neuron0x3263160()*0.272002);
}

double NNfunction_bb_b1b1::synapse0x3276f10() {
   return (neuron0x3263410()*-0.00898006);
}

double NNfunction_bb_b1b1::synapse0x3276f50() {
   return (neuron0x3263750()*-0.298674);
}

double NNfunction_bb_b1b1::synapse0x3276f90() {
   return (neuron0x3263a90()*0.0519323);
}

double NNfunction_bb_b1b1::synapse0x3276fd0() {
   return (neuron0x3263dd0()*-0.0945543);
}

double NNfunction_bb_b1b1::synapse0x3277010() {
   return (neuron0x3264110()*-0.00482558);
}

double NNfunction_bb_b1b1::synapse0x3277050() {
   return (neuron0x3264450()*0.0215764);
}

double NNfunction_bb_b1b1::synapse0x3277090() {
   return (neuron0x3264790()*-0.0840684);
}

double NNfunction_bb_b1b1::synapse0x32770d0() {
   return (neuron0x3264ad0()*-0.00319576);
}

double NNfunction_bb_b1b1::synapse0x3277110() {
   return (neuron0x3264e10()*0.0497992);
}

double NNfunction_bb_b1b1::synapse0x3277150() {
   return (neuron0x3265150()*0.0132398);
}

double NNfunction_bb_b1b1::synapse0x3277190() {
   return (neuron0x3265490()*-0.0353886);
}

double NNfunction_bb_b1b1::synapse0x32771d0() {
   return (neuron0x32657d0()*-0.0330297);
}

double NNfunction_bb_b1b1::synapse0x3277210() {
   return (neuron0x3265b10()*0.258832);
}

double NNfunction_bb_b1b1::synapse0x3277250() {
   return (neuron0x3265e50()*-0.224304);
}

double NNfunction_bb_b1b1::synapse0x3277290() {
   return (neuron0x3266190()*-0.105903);
}

double NNfunction_bb_b1b1::synapse0x3276d20() {
   return (neuron0x32664d0()*0.202299);
}

double NNfunction_bb_b1b1::synapse0x3276d60() {
   return (neuron0x3266a30()*-0.0121334);
}

double NNfunction_bb_b1b1::synapse0x32773e0() {
   return (neuron0x3266c50()*0.0133835);
}

double NNfunction_bb_b1b1::synapse0x3277420() {
   return (neuron0x3266f90()*-0.355663);
}

double NNfunction_bb_b1b1::synapse0x3277460() {
   return (neuron0x32672d0()*0.0823048);
}

double NNfunction_bb_b1b1::synapse0x32774a0() {
   return (neuron0x3267610()*0.0237054);
}

double NNfunction_bb_b1b1::synapse0x32774e0() {
   return (neuron0x3267950()*0.00317609);
}

double NNfunction_bb_b1b1::synapse0x3277520() {
   return (neuron0x3267c90()*-0.348202);
}

double NNfunction_bb_b1b1::synapse0x32778a0() {
   return (neuron0x3263160()*-0.675196);
}

double NNfunction_bb_b1b1::synapse0x32778e0() {
   return (neuron0x3263410()*0.0236133);
}

double NNfunction_bb_b1b1::synapse0x3277920() {
   return (neuron0x3263750()*0.0737949);
}

double NNfunction_bb_b1b1::synapse0x3277960() {
   return (neuron0x3263a90()*-0.0212081);
}

double NNfunction_bb_b1b1::synapse0x32779a0() {
   return (neuron0x3263dd0()*-0.524594);
}

double NNfunction_bb_b1b1::synapse0x32779e0() {
   return (neuron0x3264110()*-0.0166199);
}

double NNfunction_bb_b1b1::synapse0x3277a20() {
   return (neuron0x3264450()*-0.0324517);
}

double NNfunction_bb_b1b1::synapse0x3277a60() {
   return (neuron0x3264790()*-0.0136746);
}

double NNfunction_bb_b1b1::synapse0x3277aa0() {
   return (neuron0x3264ad0()*0.034198);
}

double NNfunction_bb_b1b1::synapse0x326fc60() {
   return (neuron0x3264e10()*0.0178909);
}

double NNfunction_bb_b1b1::synapse0x326fca0() {
   return (neuron0x3265150()*-0.00874502);
}

double NNfunction_bb_b1b1::synapse0x326fce0() {
   return (neuron0x3265490()*-0.0176323);
}

double NNfunction_bb_b1b1::synapse0x326fd20() {
   return (neuron0x32657d0()*0.00410718);
}

double NNfunction_bb_b1b1::synapse0x326fd60() {
   return (neuron0x3265b10()*0.0150344);
}

double NNfunction_bb_b1b1::synapse0x326fda0() {
   return (neuron0x3265e50()*-0.0159028);
}

double NNfunction_bb_b1b1::synapse0x326fde0() {
   return (neuron0x3266190()*-0.0185767);
}

double NNfunction_bb_b1b1::synapse0x32776f0() {
   return (neuron0x32664d0()*0.0587249);
}

double NNfunction_bb_b1b1::synapse0x3277730() {
   return (neuron0x3266a30()*0.0252991);
}

double NNfunction_bb_b1b1::synapse0x326ff30() {
   return (neuron0x3266c50()*0.0101738);
}

double NNfunction_bb_b1b1::synapse0x326ff70() {
   return (neuron0x3266f90()*-0.0247516);
}

double NNfunction_bb_b1b1::synapse0x326ffb0() {
   return (neuron0x32672d0()*-0.052639);
}

double NNfunction_bb_b1b1::synapse0x326fff0() {
   return (neuron0x3267610()*-0.0925915);
}

double NNfunction_bb_b1b1::synapse0x3270030() {
   return (neuron0x3267950()*-0.000525429);
}

double NNfunction_bb_b1b1::synapse0x3270070() {
   return (neuron0x3267c90()*-0.0479424);
}

double NNfunction_bb_b1b1::synapse0x32703f0() {
   return (neuron0x3263160()*0.0255206);
}

double NNfunction_bb_b1b1::synapse0x3270430() {
   return (neuron0x3263410()*-0.00544911);
}

double NNfunction_bb_b1b1::synapse0x3270470() {
   return (neuron0x3263750()*-0.231398);
}

double NNfunction_bb_b1b1::synapse0x32704b0() {
   return (neuron0x3263a90()*-0.078015);
}

double NNfunction_bb_b1b1::synapse0x32704f0() {
   return (neuron0x3263dd0()*-0.226268);
}

double NNfunction_bb_b1b1::synapse0x3270530() {
   return (neuron0x3264110()*-0.0742425);
}

double NNfunction_bb_b1b1::synapse0x3270570() {
   return (neuron0x3264450()*0.0605794);
}

double NNfunction_bb_b1b1::synapse0x32705b0() {
   return (neuron0x3264790()*0.00411032);
}

double NNfunction_bb_b1b1::synapse0x32705f0() {
   return (neuron0x3264ad0()*-0.0233576);
}

double NNfunction_bb_b1b1::synapse0x3270630() {
   return (neuron0x3264e10()*-0.000936349);
}

double NNfunction_bb_b1b1::synapse0x3270670() {
   return (neuron0x3265150()*-0.0616983);
}

double NNfunction_bb_b1b1::synapse0x32706b0() {
   return (neuron0x3265490()*-0.131222);
}

double NNfunction_bb_b1b1::synapse0x32706f0() {
   return (neuron0x32657d0()*-0.103115);
}

double NNfunction_bb_b1b1::synapse0x3270730() {
   return (neuron0x3265b10()*2.09178);
}

double NNfunction_bb_b1b1::synapse0x3270770() {
   return (neuron0x3265e50()*0.0407478);
}

double NNfunction_bb_b1b1::synapse0x32707b0() {
   return (neuron0x3266190()*0.0491503);
}

double NNfunction_bb_b1b1::synapse0x3270240() {
   return (neuron0x32664d0()*-0.0637941);
}

double NNfunction_bb_b1b1::synapse0x3270280() {
   return (neuron0x3266a30()*-0.0610635);
}

double NNfunction_bb_b1b1::synapse0x3270900() {
   return (neuron0x3266c50()*0.00631293);
}

double NNfunction_bb_b1b1::synapse0x3270940() {
   return (neuron0x3266f90()*-3.97623);
}

double NNfunction_bb_b1b1::synapse0x3270980() {
   return (neuron0x32672d0()*0.0998378);
}

double NNfunction_bb_b1b1::synapse0x32709c0() {
   return (neuron0x3267610()*0.184782);
}

double NNfunction_bb_b1b1::synapse0x3270a00() {
   return (neuron0x3267950()*0.0245751);
}

double NNfunction_bb_b1b1::synapse0x3270a40() {
   return (neuron0x3267c90()*-1.29355);
}

double NNfunction_bb_b1b1::synapse0x3270c10() {
   return (neuron0x3263160()*-0.00535915);
}

double NNfunction_bb_b1b1::synapse0x3279ca0() {
   return (neuron0x3263410()*0.0150071);
}

double NNfunction_bb_b1b1::synapse0x3279ce0() {
   return (neuron0x3263750()*-0.034276);
}

double NNfunction_bb_b1b1::synapse0x3279d20() {
   return (neuron0x3263a90()*-0.00114185);
}

double NNfunction_bb_b1b1::synapse0x3279d60() {
   return (neuron0x3263dd0()*-0.0517149);
}

double NNfunction_bb_b1b1::synapse0x3279da0() {
   return (neuron0x3264110()*-0.0175647);
}

double NNfunction_bb_b1b1::synapse0x3279de0() {
   return (neuron0x3264450()*0.0283097);
}

double NNfunction_bb_b1b1::synapse0x3279e20() {
   return (neuron0x3264790()*-0.0637954);
}

double NNfunction_bb_b1b1::synapse0x3279e60() {
   return (neuron0x3264ad0()*-0.0236888);
}

double NNfunction_bb_b1b1::synapse0x3279ea0() {
   return (neuron0x3264e10()*-0.0370555);
}

double NNfunction_bb_b1b1::synapse0x3279ee0() {
   return (neuron0x3265150()*-0.0445739);
}

double NNfunction_bb_b1b1::synapse0x3279f20() {
   return (neuron0x3265490()*-0.00355071);
}

double NNfunction_bb_b1b1::synapse0x3279f60() {
   return (neuron0x32657d0()*-0.0004497);
}

double NNfunction_bb_b1b1::synapse0x3279fa0() {
   return (neuron0x3265b10()*1.17969);
}

double NNfunction_bb_b1b1::synapse0x3279fe0() {
   return (neuron0x3265e50()*0.0259167);
}

double NNfunction_bb_b1b1::synapse0x327a020() {
   return (neuron0x3266190()*0.0382164);
}

double NNfunction_bb_b1b1::synapse0x3279af0() {
   return (neuron0x32664d0()*-0.732646);
}

double NNfunction_bb_b1b1::synapse0x3279b30() {
   return (neuron0x3266a30()*0.00818983);
}

double NNfunction_bb_b1b1::synapse0x327a170() {
   return (neuron0x3266c50()*-0.00408089);
}

double NNfunction_bb_b1b1::synapse0x327a1b0() {
   return (neuron0x3266f90()*-0.531286);
}

double NNfunction_bb_b1b1::synapse0x327a1f0() {
   return (neuron0x32672d0()*0.00701127);
}

double NNfunction_bb_b1b1::synapse0x327a230() {
   return (neuron0x3267610()*-0.0515927);
}

double NNfunction_bb_b1b1::synapse0x327a270() {
   return (neuron0x3267950()*0.0289724);
}

double NNfunction_bb_b1b1::synapse0x327a2b0() {
   return (neuron0x3267c90()*-0.0742753);
}

double NNfunction_bb_b1b1::synapse0x327a630() {
   return (neuron0x3263160()*-0.613019);
}

double NNfunction_bb_b1b1::synapse0x327a670() {
   return (neuron0x3263410()*0.0182655);
}

double NNfunction_bb_b1b1::synapse0x327a6b0() {
   return (neuron0x3263750()*-0.23865);
}

double NNfunction_bb_b1b1::synapse0x327a6f0() {
   return (neuron0x3263a90()*0.00626525);
}

double NNfunction_bb_b1b1::synapse0x327a730() {
   return (neuron0x3263dd0()*-0.147293);
}

double NNfunction_bb_b1b1::synapse0x327a770() {
   return (neuron0x3264110()*-0.015465);
}

double NNfunction_bb_b1b1::synapse0x327a7b0() {
   return (neuron0x3264450()*-0.0436165);
}

double NNfunction_bb_b1b1::synapse0x327a7f0() {
   return (neuron0x3264790()*-0.025392);
}

double NNfunction_bb_b1b1::synapse0x327a830() {
   return (neuron0x3264ad0()*0.0233353);
}

double NNfunction_bb_b1b1::synapse0x327a870() {
   return (neuron0x3264e10()*-0.00617649);
}

double NNfunction_bb_b1b1::synapse0x327a8b0() {
   return (neuron0x3265150()*0.0485465);
}

double NNfunction_bb_b1b1::synapse0x327a8f0() {
   return (neuron0x3265490()*0.022811);
}

double NNfunction_bb_b1b1::synapse0x327a930() {
   return (neuron0x32657d0()*0.0411882);
}

double NNfunction_bb_b1b1::synapse0x327a970() {
   return (neuron0x3265b10()*-0.442289);
}

double NNfunction_bb_b1b1::synapse0x327a9b0() {
   return (neuron0x3265e50()*-0.0344565);
}

double NNfunction_bb_b1b1::synapse0x327a9f0() {
   return (neuron0x3266190()*-0.0136471);
}

double NNfunction_bb_b1b1::synapse0x327a480() {
   return (neuron0x32664d0()*0.0476469);
}

double NNfunction_bb_b1b1::synapse0x327a4c0() {
   return (neuron0x3266a30()*-0.0228945);
}

double NNfunction_bb_b1b1::synapse0x327ab40() {
   return (neuron0x3266c50()*0.0279962);
}

double NNfunction_bb_b1b1::synapse0x327ab80() {
   return (neuron0x3266f90()*0.873419);
}

double NNfunction_bb_b1b1::synapse0x327abc0() {
   return (neuron0x32672d0()*0.0178299);
}

double NNfunction_bb_b1b1::synapse0x327ac00() {
   return (neuron0x3267610()*-0.0450856);
}

double NNfunction_bb_b1b1::synapse0x327ac40() {
   return (neuron0x3267950()*-0.0238984);
}

double NNfunction_bb_b1b1::synapse0x327ac80() {
   return (neuron0x3267c90()*-0.208354);
}

double NNfunction_bb_b1b1::synapse0x327b000() {
   return (neuron0x3263160()*-0.254702);
}

double NNfunction_bb_b1b1::synapse0x327b040() {
   return (neuron0x3263410()*0.0288429);
}

double NNfunction_bb_b1b1::synapse0x327b080() {
   return (neuron0x3263750()*-0.0426267);
}

double NNfunction_bb_b1b1::synapse0x327b0c0() {
   return (neuron0x3263a90()*4.04827);
}

double NNfunction_bb_b1b1::synapse0x327b100() {
   return (neuron0x3263dd0()*0.0763275);
}

double NNfunction_bb_b1b1::synapse0x327b140() {
   return (neuron0x3264110()*0.00335165);
}

double NNfunction_bb_b1b1::synapse0x327b180() {
   return (neuron0x3264450()*0.0164575);
}

double NNfunction_bb_b1b1::synapse0x327b1c0() {
   return (neuron0x3264790()*0.00940134);
}

double NNfunction_bb_b1b1::synapse0x327b200() {
   return (neuron0x3264ad0()*-0.0123824);
}

double NNfunction_bb_b1b1::synapse0x327b240() {
   return (neuron0x3264e10()*0.0340519);
}

double NNfunction_bb_b1b1::synapse0x327b280() {
   return (neuron0x3265150()*-0.0355083);
}

double NNfunction_bb_b1b1::synapse0x327b2c0() {
   return (neuron0x3265490()*0.00754826);
}

double NNfunction_bb_b1b1::synapse0x327b300() {
   return (neuron0x32657d0()*-0.00440932);
}

double NNfunction_bb_b1b1::synapse0x327b340() {
   return (neuron0x3265b10()*0.354183);
}

double NNfunction_bb_b1b1::synapse0x327b380() {
   return (neuron0x3265e50()*-0.00401085);
}

double NNfunction_bb_b1b1::synapse0x327b3c0() {
   return (neuron0x3266190()*0.00686878);
}

double NNfunction_bb_b1b1::synapse0x327ae50() {
   return (neuron0x32664d0()*0.055189);
}

double NNfunction_bb_b1b1::synapse0x327ae90() {
   return (neuron0x3266a30()*0.00271844);
}

double NNfunction_bb_b1b1::synapse0x327b510() {
   return (neuron0x3266c50()*0.0117541);
}

double NNfunction_bb_b1b1::synapse0x327b550() {
   return (neuron0x3266f90()*0.616859);
}

double NNfunction_bb_b1b1::synapse0x327b590() {
   return (neuron0x32672d0()*-0.0650705);
}

double NNfunction_bb_b1b1::synapse0x327b5d0() {
   return (neuron0x3267610()*-0.0869741);
}

double NNfunction_bb_b1b1::synapse0x327b610() {
   return (neuron0x3267950()*-0.0414189);
}

double NNfunction_bb_b1b1::synapse0x327b650() {
   return (neuron0x3267c90()*0.249024);
}

double NNfunction_bb_b1b1::synapse0x327b9d0() {
   return (neuron0x3263160()*-0.052968);
}

double NNfunction_bb_b1b1::synapse0x327ba10() {
   return (neuron0x3263410()*0.229868);
}

double NNfunction_bb_b1b1::synapse0x327ba50() {
   return (neuron0x3263750()*-0.148382);
}

double NNfunction_bb_b1b1::synapse0x327ba90() {
   return (neuron0x3263a90()*-0.0141351);
}

double NNfunction_bb_b1b1::synapse0x327bad0() {
   return (neuron0x3263dd0()*0.0305474);
}

double NNfunction_bb_b1b1::synapse0x327bb10() {
   return (neuron0x3264110()*-0.0198372);
}

double NNfunction_bb_b1b1::synapse0x327bb50() {
   return (neuron0x3264450()*-0.135272);
}

double NNfunction_bb_b1b1::synapse0x327bb90() {
   return (neuron0x3264790()*0.0658766);
}

double NNfunction_bb_b1b1::synapse0x327bbd0() {
   return (neuron0x3264ad0()*0.0403814);
}

double NNfunction_bb_b1b1::synapse0x327bc10() {
   return (neuron0x3264e10()*-0.118724);
}

double NNfunction_bb_b1b1::synapse0x327bc50() {
   return (neuron0x3265150()*0.000211311);
}

double NNfunction_bb_b1b1::synapse0x327bc90() {
   return (neuron0x3265490()*-0.0811526);
}

double NNfunction_bb_b1b1::synapse0x327bcd0() {
   return (neuron0x32657d0()*-0.0528682);
}

double NNfunction_bb_b1b1::synapse0x327bd10() {
   return (neuron0x3265b10()*0.457084);
}

double NNfunction_bb_b1b1::synapse0x327bd50() {
   return (neuron0x3265e50()*0.230734);
}

double NNfunction_bb_b1b1::synapse0x327bd90() {
   return (neuron0x3266190()*0.0959027);
}

double NNfunction_bb_b1b1::synapse0x327b820() {
   return (neuron0x32664d0()*0.231044);
}

double NNfunction_bb_b1b1::synapse0x327b860() {
   return (neuron0x3266a30()*-0.00358051);
}

double NNfunction_bb_b1b1::synapse0x327bee0() {
   return (neuron0x3266c50()*0.0428157);
}

double NNfunction_bb_b1b1::synapse0x327bf20() {
   return (neuron0x3266f90()*-0.35334);
}

double NNfunction_bb_b1b1::synapse0x327bf60() {
   return (neuron0x32672d0()*-0.00545656);
}

double NNfunction_bb_b1b1::synapse0x327bfa0() {
   return (neuron0x3267610()*-0.229897);
}

double NNfunction_bb_b1b1::synapse0x327bfe0() {
   return (neuron0x3267950()*-0.0368128);
}

double NNfunction_bb_b1b1::synapse0x327c020() {
   return (neuron0x3267c90()*-0.0339342);
}

double NNfunction_bb_b1b1::synapse0x327c3a0() {
   return (neuron0x3263160()*0.078323);
}

double NNfunction_bb_b1b1::synapse0x327c3e0() {
   return (neuron0x3263410()*-0.0593388);
}

double NNfunction_bb_b1b1::synapse0x327c420() {
   return (neuron0x3263750()*-0.19893);
}

double NNfunction_bb_b1b1::synapse0x327c460() {
   return (neuron0x3263a90()*-0.215472);
}

double NNfunction_bb_b1b1::synapse0x327c4a0() {
   return (neuron0x3263dd0()*-0.0331307);
}

double NNfunction_bb_b1b1::synapse0x327c4e0() {
   return (neuron0x3264110()*0.0558576);
}

double NNfunction_bb_b1b1::synapse0x327c520() {
   return (neuron0x3264450()*-1.71018);
}

double NNfunction_bb_b1b1::synapse0x327c560() {
   return (neuron0x3264790()*-0.0528557);
}

double NNfunction_bb_b1b1::synapse0x327c5a0() {
   return (neuron0x3264ad0()*-0.229786);
}

double NNfunction_bb_b1b1::synapse0x327c5e0() {
   return (neuron0x3264e10()*0.0570649);
}

double NNfunction_bb_b1b1::synapse0x327c620() {
   return (neuron0x3265150()*0.0730398);
}

double NNfunction_bb_b1b1::synapse0x327c660() {
   return (neuron0x3265490()*-0.138572);
}

double NNfunction_bb_b1b1::synapse0x327c6a0() {
   return (neuron0x32657d0()*-0.0496117);
}

double NNfunction_bb_b1b1::synapse0x327c6e0() {
   return (neuron0x3265b10()*0.128675);
}

double NNfunction_bb_b1b1::synapse0x327c720() {
   return (neuron0x3265e50()*0.0958852);
}

double NNfunction_bb_b1b1::synapse0x327c760() {
   return (neuron0x3266190()*-0.583033);
}

double NNfunction_bb_b1b1::synapse0x327c1f0() {
   return (neuron0x32664d0()*0.0287762);
}

double NNfunction_bb_b1b1::synapse0x327c230() {
   return (neuron0x3266a30()*0.0783496);
}

double NNfunction_bb_b1b1::synapse0x327c8b0() {
   return (neuron0x3266c50()*-0.158829);
}

double NNfunction_bb_b1b1::synapse0x327c8f0() {
   return (neuron0x3266f90()*0.730935);
}

double NNfunction_bb_b1b1::synapse0x327c930() {
   return (neuron0x32672d0()*0.257);
}

double NNfunction_bb_b1b1::synapse0x327c970() {
   return (neuron0x3267610()*0.0128103);
}

double NNfunction_bb_b1b1::synapse0x327c9b0() {
   return (neuron0x3267950()*0.146368);
}

double NNfunction_bb_b1b1::synapse0x327c9f0() {
   return (neuron0x3267c90()*0.554299);
}

double NNfunction_bb_b1b1::synapse0x327cd70() {
   return (neuron0x3263160()*-0.43398);
}

double NNfunction_bb_b1b1::synapse0x327cdb0() {
   return (neuron0x3263410()*0.0217579);
}

double NNfunction_bb_b1b1::synapse0x327cdf0() {
   return (neuron0x3263750()*-0.00570609);
}

double NNfunction_bb_b1b1::synapse0x327ce30() {
   return (neuron0x3263a90()*0.0845512);
}

double NNfunction_bb_b1b1::synapse0x327ce70() {
   return (neuron0x3263dd0()*0.804317);
}

double NNfunction_bb_b1b1::synapse0x327ceb0() {
   return (neuron0x3264110()*-0.0397999);
}

double NNfunction_bb_b1b1::synapse0x327cef0() {
   return (neuron0x3264450()*-0.0174297);
}

double NNfunction_bb_b1b1::synapse0x327cf30() {
   return (neuron0x3264790()*0.0493904);
}

double NNfunction_bb_b1b1::synapse0x327cf70() {
   return (neuron0x3264ad0()*0.044115);
}

double NNfunction_bb_b1b1::synapse0x327cfb0() {
   return (neuron0x3264e10()*-0.00785731);
}

double NNfunction_bb_b1b1::synapse0x327cff0() {
   return (neuron0x3265150()*-0.0656739);
}

double NNfunction_bb_b1b1::synapse0x327d030() {
   return (neuron0x3265490()*-0.0378249);
}

double NNfunction_bb_b1b1::synapse0x327d070() {
   return (neuron0x32657d0()*-0.0452301);
}

double NNfunction_bb_b1b1::synapse0x327d0b0() {
   return (neuron0x3265b10()*0.146412);
}

double NNfunction_bb_b1b1::synapse0x327d0f0() {
   return (neuron0x3265e50()*0.0393228);
}

double NNfunction_bb_b1b1::synapse0x327d130() {
   return (neuron0x3266190()*-0.00418949);
}

double NNfunction_bb_b1b1::synapse0x327cbc0() {
   return (neuron0x32664d0()*-0.0234128);
}

double NNfunction_bb_b1b1::synapse0x327cc00() {
   return (neuron0x3266a30()*0.00814944);
}

double NNfunction_bb_b1b1::synapse0x327d280() {
   return (neuron0x3266c50()*-0.0103371);
}

double NNfunction_bb_b1b1::synapse0x327d2c0() {
   return (neuron0x3266f90()*0.316204);
}

double NNfunction_bb_b1b1::synapse0x327d300() {
   return (neuron0x32672d0()*0.0179274);
}

double NNfunction_bb_b1b1::synapse0x327d340() {
   return (neuron0x3267610()*-0.832258);
}

double NNfunction_bb_b1b1::synapse0x327d380() {
   return (neuron0x3267950()*-0.0634212);
}

double NNfunction_bb_b1b1::synapse0x327d3c0() {
   return (neuron0x3267c90()*-0.191252);
}

double NNfunction_bb_b1b1::synapse0x327d740() {
   return (neuron0x3263160()*-0.122669);
}

double NNfunction_bb_b1b1::synapse0x327d780() {
   return (neuron0x3263410()*-0.0249272);
}

double NNfunction_bb_b1b1::synapse0x327d7c0() {
   return (neuron0x3263750()*0.0283207);
}

double NNfunction_bb_b1b1::synapse0x327d800() {
   return (neuron0x3263a90()*3.54489);
}

double NNfunction_bb_b1b1::synapse0x327d840() {
   return (neuron0x3263dd0()*0.034831);
}

double NNfunction_bb_b1b1::synapse0x327d880() {
   return (neuron0x3264110()*0.053333);
}

double NNfunction_bb_b1b1::synapse0x327d8c0() {
   return (neuron0x3264450()*-0.00917531);
}

double NNfunction_bb_b1b1::synapse0x327d900() {
   return (neuron0x3264790()*-0.0169194);
}

double NNfunction_bb_b1b1::synapse0x327d940() {
   return (neuron0x3264ad0()*-0.0470742);
}

double NNfunction_bb_b1b1::synapse0x327d980() {
   return (neuron0x3264e10()*-0.0214281);
}

double NNfunction_bb_b1b1::synapse0x327d9c0() {
   return (neuron0x3265150()*0.0173357);
}

double NNfunction_bb_b1b1::synapse0x327da00() {
   return (neuron0x3265490()*-0.158437);
}

double NNfunction_bb_b1b1::synapse0x327da40() {
   return (neuron0x32657d0()*-0.0524483);
}

double NNfunction_bb_b1b1::synapse0x327da80() {
   return (neuron0x3265b10()*0.891011);
}

double NNfunction_bb_b1b1::synapse0x327dac0() {
   return (neuron0x3265e50()*-0.0980573);
}

double NNfunction_bb_b1b1::synapse0x327db00() {
   return (neuron0x3266190()*-0.0887487);
}

double NNfunction_bb_b1b1::synapse0x327d590() {
   return (neuron0x32664d0()*-0.0473503);
}

double NNfunction_bb_b1b1::synapse0x327d5d0() {
   return (neuron0x3266a30()*-0.00516163);
}

double NNfunction_bb_b1b1::synapse0x327dc50() {
   return (neuron0x3266c50()*-0.115933);
}

double NNfunction_bb_b1b1::synapse0x327dc90() {
   return (neuron0x3266f90()*0.799376);
}

double NNfunction_bb_b1b1::synapse0x327dcd0() {
   return (neuron0x32672d0()*-0.209746);
}

double NNfunction_bb_b1b1::synapse0x327dd10() {
   return (neuron0x3267610()*0.0497275);
}

double NNfunction_bb_b1b1::synapse0x327dd50() {
   return (neuron0x3267950()*0.0658561);
}

double NNfunction_bb_b1b1::synapse0x327dd90() {
   return (neuron0x3267c90()*-0.534529);
}

double NNfunction_bb_b1b1::synapse0x327e110() {
   return (neuron0x3263160()*0.204667);
}

double NNfunction_bb_b1b1::synapse0x327e150() {
   return (neuron0x3263410()*0.0182119);
}

double NNfunction_bb_b1b1::synapse0x327e190() {
   return (neuron0x3263750()*-0.00249767);
}

double NNfunction_bb_b1b1::synapse0x327e1d0() {
   return (neuron0x3263a90()*0.0436055);
}

double NNfunction_bb_b1b1::synapse0x327e210() {
   return (neuron0x3263dd0()*0.562318);
}

double NNfunction_bb_b1b1::synapse0x327e250() {
   return (neuron0x3264110()*-0.026807);
}

double NNfunction_bb_b1b1::synapse0x327e290() {
   return (neuron0x3264450()*0.0409765);
}

double NNfunction_bb_b1b1::synapse0x327e2d0() {
   return (neuron0x3264790()*0.0873171);
}

double NNfunction_bb_b1b1::synapse0x327e310() {
   return (neuron0x3264ad0()*0.0163502);
}

double NNfunction_bb_b1b1::synapse0x327e350() {
   return (neuron0x3264e10()*-0.0244103);
}

double NNfunction_bb_b1b1::synapse0x327e390() {
   return (neuron0x3265150()*-0.0242717);
}

double NNfunction_bb_b1b1::synapse0x327e3d0() {
   return (neuron0x3265490()*-0.0134016);
}

double NNfunction_bb_b1b1::synapse0x327e410() {
   return (neuron0x32657d0()*-0.0171087);
}

double NNfunction_bb_b1b1::synapse0x327e450() {
   return (neuron0x3265b10()*0.155066);
}

double NNfunction_bb_b1b1::synapse0x327e490() {
   return (neuron0x3265e50()*-0.0269712);
}

double NNfunction_bb_b1b1::synapse0x327e4d0() {
   return (neuron0x3266190()*-0.0244055);
}

double NNfunction_bb_b1b1::synapse0x327df60() {
   return (neuron0x32664d0()*-0.0619243);
}

double NNfunction_bb_b1b1::synapse0x327dfa0() {
   return (neuron0x3266a30()*-0.00143277);
}

double NNfunction_bb_b1b1::synapse0x327e620() {
   return (neuron0x3266c50()*-0.0112131);
}

double NNfunction_bb_b1b1::synapse0x327e660() {
   return (neuron0x3266f90()*0.248331);
}

double NNfunction_bb_b1b1::synapse0x327e6a0() {
   return (neuron0x32672d0()*0.0603648);
}

double NNfunction_bb_b1b1::synapse0x327e6e0() {
   return (neuron0x3267610()*-0.778697);
}

double NNfunction_bb_b1b1::synapse0x327e720() {
   return (neuron0x3267950()*-0.0518257);
}

double NNfunction_bb_b1b1::synapse0x327e760() {
   return (neuron0x3267c90()*-0.16065);
}

double NNfunction_bb_b1b1::synapse0x327eae0() {
   return (neuron0x3263160()*0.0307417);
}

double NNfunction_bb_b1b1::synapse0x32730b0() {
   return (neuron0x3263410()*0.0173683);
}

double NNfunction_bb_b1b1::synapse0x32730f0() {
   return (neuron0x3263750()*0.169052);
}

double NNfunction_bb_b1b1::synapse0x3273130() {
   return (neuron0x3263a90()*0.030365);
}

double NNfunction_bb_b1b1::synapse0x3273380() {
   return (neuron0x3263dd0()*-0.0341729);
}

double NNfunction_bb_b1b1::synapse0x32733c0() {
   return (neuron0x3264110()*-0.00976539);
}

double NNfunction_bb_b1b1::synapse0x3273400() {
   return (neuron0x3264450()*0.0224075);
}

double NNfunction_bb_b1b1::synapse0x3273650() {
   return (neuron0x3264790()*0.0176649);
}

double NNfunction_bb_b1b1::synapse0x3273690() {
   return (neuron0x3264ad0()*-1.38766e-05);
}

double NNfunction_bb_b1b1::synapse0x32738e0() {
   return (neuron0x3264e10()*0.0231431);
}

double NNfunction_bb_b1b1::synapse0x3273920() {
   return (neuron0x3265150()*0.0302391);
}

double NNfunction_bb_b1b1::synapse0x3273960() {
   return (neuron0x3265490()*0.0250089);
}

double NNfunction_bb_b1b1::synapse0x3273bb0() {
   return (neuron0x32657d0()*0.0434288);
}

double NNfunction_bb_b1b1::synapse0x3273bf0() {
   return (neuron0x3265b10()*-5.94523);
}

double NNfunction_bb_b1b1::synapse0x3273e40() {
   return (neuron0x3265e50()*0.0348131);
}

double NNfunction_bb_b1b1::synapse0x3273e80() {
   return (neuron0x3266190()*-0.0106998);
}

double NNfunction_bb_b1b1::synapse0x327e930() {
   return (neuron0x32664d0()*-0.101564);
}

double NNfunction_bb_b1b1::synapse0x327e970() {
   return (neuron0x3266a30()*-0.0152127);
}

double NNfunction_bb_b1b1::synapse0x3273fd0() {
   return (neuron0x3266c50()*0.00321765);
}

double NNfunction_bb_b1b1::synapse0x32744e0() {
   return (neuron0x3266f90()*0.112496);
}

double NNfunction_bb_b1b1::synapse0x3274520() {
   return (neuron0x32672d0()*0.00901995);
}

double NNfunction_bb_b1b1::synapse0x3274560() {
   return (neuron0x3267610()*-0.0368235);
}

double NNfunction_bb_b1b1::synapse0x32747b0() {
   return (neuron0x3267950()*-0.0163146);
}

double NNfunction_bb_b1b1::synapse0x32747f0() {
   return (neuron0x3267c90()*-0.000917148);
}

double NNfunction_bb_b1b1::synapse0x32740a0() {
   return (neuron0x3263160()*0.0718439);
}

double NNfunction_bb_b1b1::synapse0x32740e0() {
   return (neuron0x3263410()*0.0148522);
}

double NNfunction_bb_b1b1::synapse0x3274120() {
   return (neuron0x3263750()*0.437009);
}

double NNfunction_bb_b1b1::synapse0x3274160() {
   return (neuron0x3263a90()*-0.0689421);
}

double NNfunction_bb_b1b1::synapse0x3274ae0() {
   return (neuron0x3263dd0()*0.0290483);
}

double NNfunction_bb_b1b1::synapse0x3280e30() {
   return (neuron0x3264110()*-0.00345947);
}

double NNfunction_bb_b1b1::synapse0x3280e70() {
   return (neuron0x3264450()*0.0174037);
}

double NNfunction_bb_b1b1::synapse0x3280eb0() {
   return (neuron0x3264790()*-0.146734);
}

double NNfunction_bb_b1b1::synapse0x3280ef0() {
   return (neuron0x3264ad0()*-0.0579979);
}

double NNfunction_bb_b1b1::synapse0x3280f30() {
   return (neuron0x3264e10()*0.0726072);
}

double NNfunction_bb_b1b1::synapse0x3280f70() {
   return (neuron0x3265150()*0.00582273);
}

double NNfunction_bb_b1b1::synapse0x3280fb0() {
   return (neuron0x3265490()*-0.0193656);
}

double NNfunction_bb_b1b1::synapse0x3280ff0() {
   return (neuron0x32657d0()*-0.00701473);
}

double NNfunction_bb_b1b1::synapse0x3281030() {
   return (neuron0x3265b10()*-0.748019);
}

double NNfunction_bb_b1b1::synapse0x3281070() {
   return (neuron0x3265e50()*0.0411915);
}

double NNfunction_bb_b1b1::synapse0x32810b0() {
   return (neuron0x3266190()*0.0184142);
}

double NNfunction_bb_b1b1::synapse0x32749c0() {
   return (neuron0x32664d0()*-0.0555423);
}

double NNfunction_bb_b1b1::synapse0x3274a00() {
   return (neuron0x3266a30()*-0.0189564);
}

double NNfunction_bb_b1b1::synapse0x3281200() {
   return (neuron0x3266c50()*0.00510221);
}

double NNfunction_bb_b1b1::synapse0x3281240() {
   return (neuron0x3266f90()*0.928727);
}

double NNfunction_bb_b1b1::synapse0x3281280() {
   return (neuron0x32672d0()*-0.0410351);
}

double NNfunction_bb_b1b1::synapse0x32812c0() {
   return (neuron0x3267610()*-0.130148);
}

double NNfunction_bb_b1b1::synapse0x3281300() {
   return (neuron0x3267950()*-0.0121834);
}

double NNfunction_bb_b1b1::synapse0x3281340() {
   return (neuron0x3267c90()*-0.0270342);
}

double NNfunction_bb_b1b1::synapse0x32816c0() {
   return (neuron0x3263160()*-0.621364);
}

double NNfunction_bb_b1b1::synapse0x3281700() {
   return (neuron0x3263410()*0.0259365);
}

double NNfunction_bb_b1b1::synapse0x3281740() {
   return (neuron0x3263750()*-0.00652358);
}

double NNfunction_bb_b1b1::synapse0x3281780() {
   return (neuron0x3263a90()*-0.0243883);
}

double NNfunction_bb_b1b1::synapse0x32817c0() {
   return (neuron0x3263dd0()*0.69042);
}

double NNfunction_bb_b1b1::synapse0x3281800() {
   return (neuron0x3264110()*0.0367308);
}

double NNfunction_bb_b1b1::synapse0x3281840() {
   return (neuron0x3264450()*-0.0215749);
}

double NNfunction_bb_b1b1::synapse0x3281880() {
   return (neuron0x3264790()*0.00549994);
}

double NNfunction_bb_b1b1::synapse0x32818c0() {
   return (neuron0x3264ad0()*0.0124777);
}

double NNfunction_bb_b1b1::synapse0x3281900() {
   return (neuron0x3264e10()*-0.0190333);
}

double NNfunction_bb_b1b1::synapse0x3281940() {
   return (neuron0x3265150()*-0.018453);
}

double NNfunction_bb_b1b1::synapse0x3281980() {
   return (neuron0x3265490()*-0.00837386);
}

double NNfunction_bb_b1b1::synapse0x32819c0() {
   return (neuron0x32657d0()*-0.0306191);
}

double NNfunction_bb_b1b1::synapse0x3281a00() {
   return (neuron0x3265b10()*0.227753);
}

double NNfunction_bb_b1b1::synapse0x3281a40() {
   return (neuron0x3265e50()*-0.0221383);
}

double NNfunction_bb_b1b1::synapse0x3281a80() {
   return (neuron0x3266190()*-0.00537548);
}

double NNfunction_bb_b1b1::synapse0x3281510() {
   return (neuron0x32664d0()*0.0221313);
}

double NNfunction_bb_b1b1::synapse0x3281550() {
   return (neuron0x3266a30()*0.0223546);
}

double NNfunction_bb_b1b1::synapse0x3281bd0() {
   return (neuron0x3266c50()*-0.000131272);
}

double NNfunction_bb_b1b1::synapse0x3281c10() {
   return (neuron0x3266f90()*0.32769);
}

double NNfunction_bb_b1b1::synapse0x3281c50() {
   return (neuron0x32672d0()*0.0141132);
}

double NNfunction_bb_b1b1::synapse0x3281c90() {
   return (neuron0x3267610()*0.0939825);
}

double NNfunction_bb_b1b1::synapse0x3281cd0() {
   return (neuron0x3267950()*0.0381513);
}

double NNfunction_bb_b1b1::synapse0x3281d10() {
   return (neuron0x3267c90()*-0.134909);
}

double NNfunction_bb_b1b1::synapse0x3282090() {
   return (neuron0x3263160()*0.115663);
}

double NNfunction_bb_b1b1::synapse0x32820d0() {
   return (neuron0x3263410()*0.000701767);
}

double NNfunction_bb_b1b1::synapse0x3282110() {
   return (neuron0x3263750()*-0.857171);
}

double NNfunction_bb_b1b1::synapse0x3282150() {
   return (neuron0x3263a90()*0.0361628);
}

double NNfunction_bb_b1b1::synapse0x3282190() {
   return (neuron0x3263dd0()*-0.00177731);
}

double NNfunction_bb_b1b1::synapse0x32821d0() {
   return (neuron0x3264110()*0.0108557);
}

double NNfunction_bb_b1b1::synapse0x3282210() {
   return (neuron0x3264450()*-0.00747852);
}

double NNfunction_bb_b1b1::synapse0x3282250() {
   return (neuron0x3264790()*0.0117726);
}

double NNfunction_bb_b1b1::synapse0x3282290() {
   return (neuron0x3264ad0()*-0.0143086);
}

double NNfunction_bb_b1b1::synapse0x32822d0() {
   return (neuron0x3264e10()*-0.034252);
}

double NNfunction_bb_b1b1::synapse0x3282310() {
   return (neuron0x3265150()*-0.0188854);
}

double NNfunction_bb_b1b1::synapse0x3282350() {
   return (neuron0x3265490()*0.0125121);
}

double NNfunction_bb_b1b1::synapse0x3282390() {
   return (neuron0x32657d0()*0.00548935);
}

double NNfunction_bb_b1b1::synapse0x32823d0() {
   return (neuron0x3265b10()*1.19408);
}

double NNfunction_bb_b1b1::synapse0x3282410() {
   return (neuron0x3265e50()*0.0204433);
}

double NNfunction_bb_b1b1::synapse0x3282450() {
   return (neuron0x3266190()*0.0122945);
}

double NNfunction_bb_b1b1::synapse0x3281ee0() {
   return (neuron0x32664d0()*-0.0486612);
}

double NNfunction_bb_b1b1::synapse0x3281f20() {
   return (neuron0x3266a30()*0.0137104);
}

double NNfunction_bb_b1b1::synapse0x32825a0() {
   return (neuron0x3266c50()*-0.00177189);
}

double NNfunction_bb_b1b1::synapse0x32825e0() {
   return (neuron0x3266f90()*-0.603877);
}

double NNfunction_bb_b1b1::synapse0x3282620() {
   return (neuron0x32672d0()*0.0326221);
}

double NNfunction_bb_b1b1::synapse0x3282660() {
   return (neuron0x3267610()*-0.00628431);
}

double NNfunction_bb_b1b1::synapse0x32826a0() {
   return (neuron0x3267950()*0.0219719);
}

double NNfunction_bb_b1b1::synapse0x32826e0() {
   return (neuron0x3267c90()*-0.0153484);
}

double NNfunction_bb_b1b1::synapse0x3282a60() {
   return (neuron0x3263160()*0.758785);
}

double NNfunction_bb_b1b1::synapse0x3282aa0() {
   return (neuron0x3263410()*0.185812);
}

double NNfunction_bb_b1b1::synapse0x3282ae0() {
   return (neuron0x3263750()*0.338345);
}

double NNfunction_bb_b1b1::synapse0x3282b20() {
   return (neuron0x3263a90()*-0.0605139);
}

double NNfunction_bb_b1b1::synapse0x3282b60() {
   return (neuron0x3263dd0()*0.126105);
}

double NNfunction_bb_b1b1::synapse0x3282ba0() {
   return (neuron0x3264110()*-0.06814);
}

double NNfunction_bb_b1b1::synapse0x3282be0() {
   return (neuron0x3264450()*-0.324168);
}

double NNfunction_bb_b1b1::synapse0x3282c20() {
   return (neuron0x3264790()*-0.368167);
}

double NNfunction_bb_b1b1::synapse0x3282c60() {
   return (neuron0x3264ad0()*0.0749543);
}

double NNfunction_bb_b1b1::synapse0x3282ca0() {
   return (neuron0x3264e10()*0.166409);
}

double NNfunction_bb_b1b1::synapse0x3282ce0() {
   return (neuron0x3265150()*-0.0285953);
}

double NNfunction_bb_b1b1::synapse0x3282d20() {
   return (neuron0x3265490()*0.195191);
}

double NNfunction_bb_b1b1::synapse0x3282d60() {
   return (neuron0x32657d0()*-0.219144);
}

double NNfunction_bb_b1b1::synapse0x3282da0() {
   return (neuron0x3265b10()*3.38);
}

double NNfunction_bb_b1b1::synapse0x3282de0() {
   return (neuron0x3265e50()*-0.546969);
}

double NNfunction_bb_b1b1::synapse0x3282e20() {
   return (neuron0x3266190()*0.239409);
}

double NNfunction_bb_b1b1::synapse0x32828b0() {
   return (neuron0x32664d0()*-1.73342);
}

double NNfunction_bb_b1b1::synapse0x32828f0() {
   return (neuron0x3266a30()*0.104638);
}

double NNfunction_bb_b1b1::synapse0x3282f70() {
   return (neuron0x3266c50()*-0.0275807);
}

double NNfunction_bb_b1b1::synapse0x3282fb0() {
   return (neuron0x3266f90()*0.059282);
}

double NNfunction_bb_b1b1::synapse0x3282ff0() {
   return (neuron0x32672d0()*-0.170174);
}

double NNfunction_bb_b1b1::synapse0x3283030() {
   return (neuron0x3267610()*-0.118724);
}

double NNfunction_bb_b1b1::synapse0x3283070() {
   return (neuron0x3267950()*0.27971);
}

double NNfunction_bb_b1b1::synapse0x32830b0() {
   return (neuron0x3267c90()*-0.071436);
}

double NNfunction_bb_b1b1::synapse0x3283430() {
   return (neuron0x3263160()*0.057895);
}

double NNfunction_bb_b1b1::synapse0x3283470() {
   return (neuron0x3263410()*0.00259081);
}

double NNfunction_bb_b1b1::synapse0x32834b0() {
   return (neuron0x3263750()*0.118975);
}

double NNfunction_bb_b1b1::synapse0x32834f0() {
   return (neuron0x3263a90()*3.83728);
}

double NNfunction_bb_b1b1::synapse0x3283530() {
   return (neuron0x3263dd0()*-0.00102315);
}

double NNfunction_bb_b1b1::synapse0x3283570() {
   return (neuron0x3264110()*0.0397052);
}

double NNfunction_bb_b1b1::synapse0x32835b0() {
   return (neuron0x3264450()*0.00904579);
}

double NNfunction_bb_b1b1::synapse0x32835f0() {
   return (neuron0x3264790()*0.00426331);
}

double NNfunction_bb_b1b1::synapse0x3283630() {
   return (neuron0x3264ad0()*0.00155719);
}

double NNfunction_bb_b1b1::synapse0x3283670() {
   return (neuron0x3264e10()*-0.00660212);
}

double NNfunction_bb_b1b1::synapse0x32836b0() {
   return (neuron0x3265150()*0.0107178);
}

double NNfunction_bb_b1b1::synapse0x32836f0() {
   return (neuron0x3265490()*-0.0567246);
}

double NNfunction_bb_b1b1::synapse0x3283730() {
   return (neuron0x32657d0()*-0.0687106);
}

double NNfunction_bb_b1b1::synapse0x3283770() {
   return (neuron0x3265b10()*-0.385116);
}

double NNfunction_bb_b1b1::synapse0x32837b0() {
   return (neuron0x3265e50()*-0.0338716);
}

double NNfunction_bb_b1b1::synapse0x32837f0() {
   return (neuron0x3266190()*-0.0379882);
}

double NNfunction_bb_b1b1::synapse0x3283280() {
   return (neuron0x32664d0()*-0.052223);
}

double NNfunction_bb_b1b1::synapse0x32832c0() {
   return (neuron0x3266a30()*-0.0302403);
}

double NNfunction_bb_b1b1::synapse0x3283940() {
   return (neuron0x3266c50()*-0.0331508);
}

double NNfunction_bb_b1b1::synapse0x3283980() {
   return (neuron0x3266f90()*-0.492655);
}

double NNfunction_bb_b1b1::synapse0x32839c0() {
   return (neuron0x32672d0()*0.00144623);
}

double NNfunction_bb_b1b1::synapse0x3283a00() {
   return (neuron0x3267610()*0.023348);
}

double NNfunction_bb_b1b1::synapse0x3283a40() {
   return (neuron0x3267950()*0.0358257);
}

double NNfunction_bb_b1b1::synapse0x3283a80() {
   return (neuron0x3267c90()*0.155893);
}

double NNfunction_bb_b1b1::synapse0x3283e00() {
   return (neuron0x3263160()*-0.455729);
}

double NNfunction_bb_b1b1::synapse0x3283e40() {
   return (neuron0x3263410()*0.033046);
}

double NNfunction_bb_b1b1::synapse0x3283e80() {
   return (neuron0x3263750()*0.0567953);
}

double NNfunction_bb_b1b1::synapse0x3283ec0() {
   return (neuron0x3263a90()*-0.0239412);
}

double NNfunction_bb_b1b1::synapse0x3283f00() {
   return (neuron0x3263dd0()*0.684901);
}

double NNfunction_bb_b1b1::synapse0x3283f40() {
   return (neuron0x3264110()*0.0533204);
}

double NNfunction_bb_b1b1::synapse0x3283f80() {
   return (neuron0x3264450()*-0.0306366);
}

double NNfunction_bb_b1b1::synapse0x3283fc0() {
   return (neuron0x3264790()*-0.0068355);
}

double NNfunction_bb_b1b1::synapse0x3284000() {
   return (neuron0x3264ad0()*0.0240319);
}

double NNfunction_bb_b1b1::synapse0x3284040() {
   return (neuron0x3264e10()*-0.0123022);
}

double NNfunction_bb_b1b1::synapse0x3284080() {
   return (neuron0x3265150()*0.00129086);
}

double NNfunction_bb_b1b1::synapse0x32840c0() {
   return (neuron0x3265490()*0.0145752);
}

double NNfunction_bb_b1b1::synapse0x3284100() {
   return (neuron0x32657d0()*-0.0102084);
}

double NNfunction_bb_b1b1::synapse0x3284140() {
   return (neuron0x3265b10()*0.201318);
}

double NNfunction_bb_b1b1::synapse0x3284180() {
   return (neuron0x3265e50()*-0.0193797);
}

double NNfunction_bb_b1b1::synapse0x32841c0() {
   return (neuron0x3266190()*0.0203276);
}

double NNfunction_bb_b1b1::synapse0x3283c50() {
   return (neuron0x32664d0()*-0.0481685);
}

double NNfunction_bb_b1b1::synapse0x3283c90() {
   return (neuron0x3266a30()*-0.0185426);
}

double NNfunction_bb_b1b1::synapse0x3284310() {
   return (neuron0x3266c50()*0.014141);
}

double NNfunction_bb_b1b1::synapse0x3284350() {
   return (neuron0x3266f90()*0.431769);
}

double NNfunction_bb_b1b1::synapse0x3284390() {
   return (neuron0x32672d0()*-0.044206);
}

double NNfunction_bb_b1b1::synapse0x32843d0() {
   return (neuron0x3267610()*0.921567);
}

double NNfunction_bb_b1b1::synapse0x3284410() {
   return (neuron0x3267950()*0.0554154);
}

double NNfunction_bb_b1b1::synapse0x3284450() {
   return (neuron0x3267c90()*0.224472);
}

double NNfunction_bb_b1b1::synapse0x32847d0() {
   return (neuron0x3263160()*-0.125111);
}

double NNfunction_bb_b1b1::synapse0x3284810() {
   return (neuron0x3263410()*-0.0215935);
}

double NNfunction_bb_b1b1::synapse0x3284850() {
   return (neuron0x3263750()*0.0279173);
}

double NNfunction_bb_b1b1::synapse0x3284890() {
   return (neuron0x3263a90()*-0.0810787);
}

double NNfunction_bb_b1b1::synapse0x32848d0() {
   return (neuron0x3263dd0()*-0.0273984);
}

double NNfunction_bb_b1b1::synapse0x3284910() {
   return (neuron0x3264110()*-0.0137834);
}

double NNfunction_bb_b1b1::synapse0x3284950() {
   return (neuron0x3264450()*-0.00413419);
}

double NNfunction_bb_b1b1::synapse0x3284990() {
   return (neuron0x3264790()*-0.0443151);
}

double NNfunction_bb_b1b1::synapse0x32849d0() {
   return (neuron0x3264ad0()*-0.00270517);
}

double NNfunction_bb_b1b1::synapse0x3284a10() {
   return (neuron0x3264e10()*-0.0291339);
}

double NNfunction_bb_b1b1::synapse0x3284a50() {
   return (neuron0x3265150()*0.0703494);
}

double NNfunction_bb_b1b1::synapse0x3284a90() {
   return (neuron0x3265490()*-0.0139028);
}

double NNfunction_bb_b1b1::synapse0x3284ad0() {
   return (neuron0x32657d0()*0.00502349);
}

double NNfunction_bb_b1b1::synapse0x3284b10() {
   return (neuron0x3265b10()*2.33456);
}

double NNfunction_bb_b1b1::synapse0x3284b50() {
   return (neuron0x3265e50()*0.000756963);
}

double NNfunction_bb_b1b1::synapse0x3284b90() {
   return (neuron0x3266190()*0.0559631);
}

double NNfunction_bb_b1b1::synapse0x3284620() {
   return (neuron0x32664d0()*-0.0162307);
}

double NNfunction_bb_b1b1::synapse0x3284660() {
   return (neuron0x3266a30()*-0.00948273);
}

double NNfunction_bb_b1b1::synapse0x3284ce0() {
   return (neuron0x3266c50()*0.0467718);
}

double NNfunction_bb_b1b1::synapse0x3284d20() {
   return (neuron0x3266f90()*-1.65193);
}

double NNfunction_bb_b1b1::synapse0x3284d60() {
   return (neuron0x32672d0()*0.0553602);
}

double NNfunction_bb_b1b1::synapse0x3284da0() {
   return (neuron0x3267610()*0.0439156);
}

double NNfunction_bb_b1b1::synapse0x3284de0() {
   return (neuron0x3267950()*-0.00753357);
}

double NNfunction_bb_b1b1::synapse0x3284e20() {
   return (neuron0x3267c90()*-0.178108);
}

double NNfunction_bb_b1b1::synapse0x32851a0() {
   return (neuron0x3263160()*-0.199846);
}

double NNfunction_bb_b1b1::synapse0x32851e0() {
   return (neuron0x3263410()*-0.849725);
}

double NNfunction_bb_b1b1::synapse0x3285220() {
   return (neuron0x3263750()*-0.678607);
}

double NNfunction_bb_b1b1::synapse0x3285260() {
   return (neuron0x3263a90()*1.83966);
}

double NNfunction_bb_b1b1::synapse0x32852a0() {
   return (neuron0x3263dd0()*0.513841);
}

double NNfunction_bb_b1b1::synapse0x32852e0() {
   return (neuron0x3264110()*-0.842596);
}

double NNfunction_bb_b1b1::synapse0x3285320() {
   return (neuron0x3264450()*0.0438739);
}

double NNfunction_bb_b1b1::synapse0x3285360() {
   return (neuron0x3264790()*1.12406);
}

double NNfunction_bb_b1b1::synapse0x32853a0() {
   return (neuron0x3264ad0()*1.19612);
}

double NNfunction_bb_b1b1::synapse0x32853e0() {
   return (neuron0x3264e10()*-0.377905);
}

double NNfunction_bb_b1b1::synapse0x3285420() {
   return (neuron0x3265150()*0.0284768);
}

double NNfunction_bb_b1b1::synapse0x3285460() {
   return (neuron0x3265490()*0.78324);
}

double NNfunction_bb_b1b1::synapse0x32854a0() {
   return (neuron0x32657d0()*2.71176);
}

double NNfunction_bb_b1b1::synapse0x32854e0() {
   return (neuron0x3265b10()*1.33938);
}

double NNfunction_bb_b1b1::synapse0x3285520() {
   return (neuron0x3265e50()*-0.546591);
}

double NNfunction_bb_b1b1::synapse0x3285560() {
   return (neuron0x3266190()*0.759644);
}

double NNfunction_bb_b1b1::synapse0x3284ff0() {
   return (neuron0x32664d0()*0.754134);
}

double NNfunction_bb_b1b1::synapse0x3285030() {
   return (neuron0x3266a30()*0.775636);
}

double NNfunction_bb_b1b1::synapse0x32856b0() {
   return (neuron0x3266c50()*0.896798);
}

double NNfunction_bb_b1b1::synapse0x32856f0() {
   return (neuron0x3266f90()*-0.878437);
}

double NNfunction_bb_b1b1::synapse0x3285730() {
   return (neuron0x32672d0()*0.50328);
}

double NNfunction_bb_b1b1::synapse0x3285770() {
   return (neuron0x3267610()*0.486219);
}

double NNfunction_bb_b1b1::synapse0x32857b0() {
   return (neuron0x3267950()*-0.264761);
}

double NNfunction_bb_b1b1::synapse0x32857f0() {
   return (neuron0x3267c90()*0.615854);
}

double NNfunction_bb_b1b1::synapse0x326e2a0() {
   return (neuron0x3263160()*0.0894463);
}

double NNfunction_bb_b1b1::synapse0x326e2e0() {
   return (neuron0x3263410()*0.00401886);
}

double NNfunction_bb_b1b1::synapse0x326e320() {
   return (neuron0x3263750()*0.0131303);
}

double NNfunction_bb_b1b1::synapse0x326e360() {
   return (neuron0x3263a90()*-3.21764);
}

double NNfunction_bb_b1b1::synapse0x326e3a0() {
   return (neuron0x3263dd0()*-0.019008);
}

double NNfunction_bb_b1b1::synapse0x326e3e0() {
   return (neuron0x3264110()*-0.000820657);
}

double NNfunction_bb_b1b1::synapse0x326e420() {
   return (neuron0x3264450()*-0.021487);
}

double NNfunction_bb_b1b1::synapse0x326e460() {
   return (neuron0x3264790()*-0.0041476);
}

double NNfunction_bb_b1b1::synapse0x3285f80() {
   return (neuron0x3264ad0()*0.00416605);
}

double NNfunction_bb_b1b1::synapse0x3285fc0() {
   return (neuron0x3264e10()*-0.0168492);
}

double NNfunction_bb_b1b1::synapse0x3286000() {
   return (neuron0x3265150()*0.000733659);
}

double NNfunction_bb_b1b1::synapse0x3286040() {
   return (neuron0x3265490()*-0.0102052);
}

double NNfunction_bb_b1b1::synapse0x3286080() {
   return (neuron0x32657d0()*-0.0318254);
}

double NNfunction_bb_b1b1::synapse0x32860c0() {
   return (neuron0x3265b10()*-0.261416);
}

double NNfunction_bb_b1b1::synapse0x3286100() {
   return (neuron0x3265e50()*-0.00127388);
}

double NNfunction_bb_b1b1::synapse0x3286140() {
   return (neuron0x3266190()*-0.0111803);
}

double NNfunction_bb_b1b1::synapse0x32859c0() {
   return (neuron0x32664d0()*0.00561966);
}

double NNfunction_bb_b1b1::synapse0x3285a00() {
   return (neuron0x3266a30()*-0.0186758);
}

double NNfunction_bb_b1b1::synapse0x3286290() {
   return (neuron0x3266c50()*0.00517723);
}

double NNfunction_bb_b1b1::synapse0x32862d0() {
   return (neuron0x3266f90()*-0.402018);
}

double NNfunction_bb_b1b1::synapse0x3286310() {
   return (neuron0x32672d0()*0.0330847);
}

double NNfunction_bb_b1b1::synapse0x3286350() {
   return (neuron0x3267610()*0.0365574);
}

double NNfunction_bb_b1b1::synapse0x3286390() {
   return (neuron0x3267950()*0.013978);
}

double NNfunction_bb_b1b1::synapse0x32863d0() {
   return (neuron0x3267c90()*-0.0205203);
}

double NNfunction_bb_b1b1::synapse0x3286750() {
   return (neuron0x3263160()*-0.223714);
}

double NNfunction_bb_b1b1::synapse0x3286790() {
   return (neuron0x3263410()*0.0150813);
}

double NNfunction_bb_b1b1::synapse0x32867d0() {
   return (neuron0x3263750()*0.263201);
}

double NNfunction_bb_b1b1::synapse0x3286810() {
   return (neuron0x3263a90()*-0.246163);
}

double NNfunction_bb_b1b1::synapse0x3286850() {
   return (neuron0x3263dd0()*-0.0421006);
}

double NNfunction_bb_b1b1::synapse0x3286890() {
   return (neuron0x3264110()*-0.0860013);
}

double NNfunction_bb_b1b1::synapse0x32868d0() {
   return (neuron0x3264450()*0.212613);
}

double NNfunction_bb_b1b1::synapse0x3286910() {
   return (neuron0x3264790()*0.0637815);
}

double NNfunction_bb_b1b1::synapse0x3286950() {
   return (neuron0x3264ad0()*-0.107327);
}

double NNfunction_bb_b1b1::synapse0x3286990() {
   return (neuron0x3264e10()*0.0085671);
}

double NNfunction_bb_b1b1::synapse0x32869d0() {
   return (neuron0x3265150()*-0.0536407);
}

double NNfunction_bb_b1b1::synapse0x3286a10() {
   return (neuron0x3265490()*-0.0127879);
}

double NNfunction_bb_b1b1::synapse0x3286a50() {
   return (neuron0x32657d0()*-0.0437807);
}

double NNfunction_bb_b1b1::synapse0x3286a90() {
   return (neuron0x3265b10()*0.160472);
}

double NNfunction_bb_b1b1::synapse0x3286ad0() {
   return (neuron0x3265e50()*0.0841367);
}

double NNfunction_bb_b1b1::synapse0x3286b10() {
   return (neuron0x3266190()*-0.523693);
}

double NNfunction_bb_b1b1::synapse0x32865a0() {
   return (neuron0x32664d0()*0.298734);
}

double NNfunction_bb_b1b1::synapse0x32865e0() {
   return (neuron0x3266a30()*-0.00184277);
}

double NNfunction_bb_b1b1::synapse0x3286c60() {
   return (neuron0x3266c50()*0.00992574);
}

double NNfunction_bb_b1b1::synapse0x3286ca0() {
   return (neuron0x3266f90()*-0.198142);
}

double NNfunction_bb_b1b1::synapse0x3286ce0() {
   return (neuron0x32672d0()*-0.229676);
}

double NNfunction_bb_b1b1::synapse0x3286d20() {
   return (neuron0x3267610()*-0.0362881);
}

double NNfunction_bb_b1b1::synapse0x3286d60() {
   return (neuron0x3267950()*-0.0198183);
}

double NNfunction_bb_b1b1::synapse0x3286da0() {
   return (neuron0x3267c90()*0.677675);
}

double NNfunction_bb_b1b1::synapse0x3287120() {
   return (neuron0x3263160()*0.145535);
}

double NNfunction_bb_b1b1::synapse0x3287160() {
   return (neuron0x3263410()*-0.0178494);
}

double NNfunction_bb_b1b1::synapse0x32871a0() {
   return (neuron0x3263750()*-0.335048);
}

double NNfunction_bb_b1b1::synapse0x32871e0() {
   return (neuron0x3263a90()*0.0782584);
}

double NNfunction_bb_b1b1::synapse0x3287220() {
   return (neuron0x3263dd0()*0.18059);
}

double NNfunction_bb_b1b1::synapse0x3287260() {
   return (neuron0x3264110()*-0.0276646);
}

double NNfunction_bb_b1b1::synapse0x32872a0() {
   return (neuron0x3264450()*0.0066437);
}

double NNfunction_bb_b1b1::synapse0x32872e0() {
   return (neuron0x3264790()*0.0566111);
}

double NNfunction_bb_b1b1::synapse0x3287320() {
   return (neuron0x3264ad0()*0.0968097);
}

double NNfunction_bb_b1b1::synapse0x3287360() {
   return (neuron0x3264e10()*0.0271485);
}

double NNfunction_bb_b1b1::synapse0x32873a0() {
   return (neuron0x3265150()*0.168799);
}

double NNfunction_bb_b1b1::synapse0x32873e0() {
   return (neuron0x3265490()*0.0623108);
}

double NNfunction_bb_b1b1::synapse0x3287420() {
   return (neuron0x32657d0()*0.0678389);
}

double NNfunction_bb_b1b1::synapse0x3287460() {
   return (neuron0x3265b10()*-0.630349);
}

double NNfunction_bb_b1b1::synapse0x32874a0() {
   return (neuron0x3265e50()*0.0267031);
}

double NNfunction_bb_b1b1::synapse0x32874e0() {
   return (neuron0x3266190()*-0.0494257);
}

double NNfunction_bb_b1b1::synapse0x3286f70() {
   return (neuron0x32664d0()*0.842017);
}

double NNfunction_bb_b1b1::synapse0x3286fb0() {
   return (neuron0x3266a30()*0.0918308);
}

double NNfunction_bb_b1b1::synapse0x3277ae0() {
   return (neuron0x3266c50()*0.10132);
}

double NNfunction_bb_b1b1::synapse0x3277b20() {
   return (neuron0x3266f90()*-0.526981);
}

double NNfunction_bb_b1b1::synapse0x3277b60() {
   return (neuron0x32672d0()*0.0302243);
}

double NNfunction_bb_b1b1::synapse0x3277ba0() {
   return (neuron0x3267610()*0.0788625);
}

double NNfunction_bb_b1b1::synapse0x3277be0() {
   return (neuron0x3267950()*0.0100571);
}

double NNfunction_bb_b1b1::synapse0x3277c20() {
   return (neuron0x3267c90()*0.16583);
}

double NNfunction_bb_b1b1::synapse0x3277fa0() {
   return (neuron0x3263160()*-0.532311);
}

double NNfunction_bb_b1b1::synapse0x3277fe0() {
   return (neuron0x3263410()*-0.0373124);
}

double NNfunction_bb_b1b1::synapse0x3278020() {
   return (neuron0x3263750()*0.00700149);
}

double NNfunction_bb_b1b1::synapse0x3278060() {
   return (neuron0x3263a90()*-3.19041);
}

double NNfunction_bb_b1b1::synapse0x32780a0() {
   return (neuron0x3263dd0()*0.177793);
}

double NNfunction_bb_b1b1::synapse0x32780e0() {
   return (neuron0x3264110()*0.0361876);
}

double NNfunction_bb_b1b1::synapse0x3278120() {
   return (neuron0x3264450()*-0.00791397);
}

double NNfunction_bb_b1b1::synapse0x3278160() {
   return (neuron0x3264790()*0.0414483);
}

double NNfunction_bb_b1b1::synapse0x32781a0() {
   return (neuron0x3264ad0()*-0.0376702);
}

double NNfunction_bb_b1b1::synapse0x32781e0() {
   return (neuron0x3264e10()*-0.00497689);
}

double NNfunction_bb_b1b1::synapse0x3278220() {
   return (neuron0x3265150()*-0.064115);
}

double NNfunction_bb_b1b1::synapse0x3278260() {
   return (neuron0x3265490()*-0.117988);
}

double NNfunction_bb_b1b1::synapse0x32782a0() {
   return (neuron0x32657d0()*-0.0422127);
}

double NNfunction_bb_b1b1::synapse0x32782e0() {
   return (neuron0x3265b10()*-0.118715);
}

double NNfunction_bb_b1b1::synapse0x3278320() {
   return (neuron0x3265e50()*-0.0739362);
}

double NNfunction_bb_b1b1::synapse0x3278360() {
   return (neuron0x3266190()*0.00850832);
}

double NNfunction_bb_b1b1::synapse0x3277df0() {
   return (neuron0x32664d0()*-0.0365512);
}

double NNfunction_bb_b1b1::synapse0x3277e30() {
   return (neuron0x3266a30()*-0.0772243);
}

double NNfunction_bb_b1b1::synapse0x32784b0() {
   return (neuron0x3266c50()*-0.058199);
}

double NNfunction_bb_b1b1::synapse0x32784f0() {
   return (neuron0x3266f90()*0.386957);
}

double NNfunction_bb_b1b1::synapse0x3278530() {
   return (neuron0x32672d0()*0.0269076);
}

double NNfunction_bb_b1b1::synapse0x3278570() {
   return (neuron0x3267610()*-0.115026);
}

double NNfunction_bb_b1b1::synapse0x32785b0() {
   return (neuron0x3267950()*0.0187081);
}

double NNfunction_bb_b1b1::synapse0x32785f0() {
   return (neuron0x3267c90()*0.469759);
}

double NNfunction_bb_b1b1::synapse0x3278970() {
   return (neuron0x3263160()*0.871558);
}

double NNfunction_bb_b1b1::synapse0x32789b0() {
   return (neuron0x3263410()*-0.0219797);
}

double NNfunction_bb_b1b1::synapse0x32789f0() {
   return (neuron0x3263750()*0.0397);
}

double NNfunction_bb_b1b1::synapse0x3278a30() {
   return (neuron0x3263a90()*-0.157234);
}

double NNfunction_bb_b1b1::synapse0x3278a70() {
   return (neuron0x3263dd0()*-0.217959);
}

double NNfunction_bb_b1b1::synapse0x3278ab0() {
   return (neuron0x3264110()*-0.00276399);
}

double NNfunction_bb_b1b1::synapse0x3278af0() {
   return (neuron0x3264450()*0.012996);
}

double NNfunction_bb_b1b1::synapse0x3278b30() {
   return (neuron0x3264790()*-0.00550313);
}

double NNfunction_bb_b1b1::synapse0x3278b70() {
   return (neuron0x3264ad0()*-0.0222503);
}

double NNfunction_bb_b1b1::synapse0x3278bb0() {
   return (neuron0x3264e10()*-0.0163621);
}

double NNfunction_bb_b1b1::synapse0x3278bf0() {
   return (neuron0x3265150()*0.0190554);
}

double NNfunction_bb_b1b1::synapse0x3278c30() {
   return (neuron0x3265490()*0.00797299);
}

double NNfunction_bb_b1b1::synapse0x3278c70() {
   return (neuron0x32657d0()*0.0228818);
}

double NNfunction_bb_b1b1::synapse0x3278cb0() {
   return (neuron0x3265b10()*0.562081);
}

double NNfunction_bb_b1b1::synapse0x3278cf0() {
   return (neuron0x3265e50()*0.01995);
}

double NNfunction_bb_b1b1::synapse0x3278d30() {
   return (neuron0x3266190()*-0.0198437);
}

double NNfunction_bb_b1b1::synapse0x32787c0() {
   return (neuron0x32664d0()*-0.016399);
}

double NNfunction_bb_b1b1::synapse0x3278800() {
   return (neuron0x3266a30()*0.00774125);
}

double NNfunction_bb_b1b1::synapse0x3278e80() {
   return (neuron0x3266c50()*-0.00143598);
}

double NNfunction_bb_b1b1::synapse0x3278ec0() {
   return (neuron0x3266f90()*-0.121274);
}

double NNfunction_bb_b1b1::synapse0x3278f00() {
   return (neuron0x32672d0()*-0.0669809);
}

double NNfunction_bb_b1b1::synapse0x3278f40() {
   return (neuron0x3267610()*-0.00877257);
}

double NNfunction_bb_b1b1::synapse0x3278f80() {
   return (neuron0x3267950()*0.00281226);
}

double NNfunction_bb_b1b1::synapse0x3278fc0() {
   return (neuron0x3267c90()*0.969861);
}

double NNfunction_bb_b1b1::synapse0x3279340() {
   return (neuron0x3263160()*0.284621);
}

double NNfunction_bb_b1b1::synapse0x3279380() {
   return (neuron0x3263410()*0.0295031);
}

double NNfunction_bb_b1b1::synapse0x32793c0() {
   return (neuron0x3263750()*0.00117791);
}

double NNfunction_bb_b1b1::synapse0x3279400() {
   return (neuron0x3263a90()*-0.0596125);
}

double NNfunction_bb_b1b1::synapse0x3279440() {
   return (neuron0x3263dd0()*0.743657);
}

double NNfunction_bb_b1b1::synapse0x3279480() {
   return (neuron0x3264110()*0.0531972);
}

double NNfunction_bb_b1b1::synapse0x32794c0() {
   return (neuron0x3264450()*0.0117858);
}

double NNfunction_bb_b1b1::synapse0x3279500() {
   return (neuron0x3264790()*0.00534476);
}

double NNfunction_bb_b1b1::synapse0x3279540() {
   return (neuron0x3264ad0()*0.00529753);
}

double NNfunction_bb_b1b1::synapse0x3279580() {
   return (neuron0x3264e10()*0.0115882);
}

double NNfunction_bb_b1b1::synapse0x32795c0() {
   return (neuron0x3265150()*0.027528);
}

double NNfunction_bb_b1b1::synapse0x3279600() {
   return (neuron0x3265490()*0.0185773);
}

double NNfunction_bb_b1b1::synapse0x3279640() {
   return (neuron0x32657d0()*-0.020932);
}

double NNfunction_bb_b1b1::synapse0x3279680() {
   return (neuron0x3265b10()*0.574919);
}

double NNfunction_bb_b1b1::synapse0x32796c0() {
   return (neuron0x3265e50()*-0.00537147);
}

double NNfunction_bb_b1b1::synapse0x3279700() {
   return (neuron0x3266190()*0.00980295);
}

double NNfunction_bb_b1b1::synapse0x3279190() {
   return (neuron0x32664d0()*0.0164693);
}

double NNfunction_bb_b1b1::synapse0x32791d0() {
   return (neuron0x3266a30()*-0.0201075);
}

double NNfunction_bb_b1b1::synapse0x3279850() {
   return (neuron0x3266c50()*0.0127267);
}

double NNfunction_bb_b1b1::synapse0x3279890() {
   return (neuron0x3266f90()*0.464316);
}

double NNfunction_bb_b1b1::synapse0x32798d0() {
   return (neuron0x32672d0()*0.00584797);
}

double NNfunction_bb_b1b1::synapse0x3279910() {
   return (neuron0x3267610()*0.938143);
}

double NNfunction_bb_b1b1::synapse0x3279950() {
   return (neuron0x3267950()*0.0124173);
}

double NNfunction_bb_b1b1::synapse0x3279990() {
   return (neuron0x3267c90()*0.466943);
}

double NNfunction_bb_b1b1::synapse0x328b860() {
   return (neuron0x3263160()*-0.430941);
}

double NNfunction_bb_b1b1::synapse0x328b8a0() {
   return (neuron0x3263410()*0.118082);
}

double NNfunction_bb_b1b1::synapse0x328b8e0() {
   return (neuron0x3263750()*0.0895071);
}

double NNfunction_bb_b1b1::synapse0x328b920() {
   return (neuron0x3263a90()*-0.0723057);
}

double NNfunction_bb_b1b1::synapse0x328b960() {
   return (neuron0x3263dd0()*-0.0500723);
}

double NNfunction_bb_b1b1::synapse0x328b9a0() {
   return (neuron0x3264110()*-0.0118621);
}

double NNfunction_bb_b1b1::synapse0x328b9e0() {
   return (neuron0x3264450()*-0.037907);
}

double NNfunction_bb_b1b1::synapse0x328ba20() {
   return (neuron0x3264790()*0.00198503);
}

double NNfunction_bb_b1b1::synapse0x328ba60() {
   return (neuron0x3264ad0()*0.0976139);
}

double NNfunction_bb_b1b1::synapse0x328baa0() {
   return (neuron0x3264e10()*0.0192671);
}

double NNfunction_bb_b1b1::synapse0x328bae0() {
   return (neuron0x3265150()*0.0256794);
}

double NNfunction_bb_b1b1::synapse0x328bb20() {
   return (neuron0x3265490()*0.0268364);
}

double NNfunction_bb_b1b1::synapse0x328bb60() {
   return (neuron0x32657d0()*0.0195825);
}

double NNfunction_bb_b1b1::synapse0x328bba0() {
   return (neuron0x3265b10()*-0.0411984);
}

double NNfunction_bb_b1b1::synapse0x328bbe0() {
   return (neuron0x3265e50()*-0.195217);
}

double NNfunction_bb_b1b1::synapse0x328bc20() {
   return (neuron0x3266190()*-0.12004);
}

double NNfunction_bb_b1b1::synapse0x32799d0() {
   return (neuron0x32664d0()*-0.00646493);
}

double NNfunction_bb_b1b1::synapse0x3279a10() {
   return (neuron0x3266a30()*0.0585849);
}

double NNfunction_bb_b1b1::synapse0x328bd70() {
   return (neuron0x3266c50()*0.0555557);
}

double NNfunction_bb_b1b1::synapse0x328bdb0() {
   return (neuron0x3266f90()*1.52802);
}

double NNfunction_bb_b1b1::synapse0x328bdf0() {
   return (neuron0x32672d0()*-0.0439478);
}

double NNfunction_bb_b1b1::synapse0x328be30() {
   return (neuron0x3267610()*-0.0163571);
}

double NNfunction_bb_b1b1::synapse0x328be70() {
   return (neuron0x3267950()*-0.0201385);
}

double NNfunction_bb_b1b1::synapse0x328beb0() {
   return (neuron0x3267c90()*0.0863491);
}

double NNfunction_bb_b1b1::synapse0x328c230() {
   return (neuron0x3263160()*0.0316991);
}

double NNfunction_bb_b1b1::synapse0x328c270() {
   return (neuron0x3263410()*0.00869416);
}

double NNfunction_bb_b1b1::synapse0x328c2b0() {
   return (neuron0x3263750()*0.0783889);
}

double NNfunction_bb_b1b1::synapse0x328c2f0() {
   return (neuron0x3263a90()*0.0645299);
}

double NNfunction_bb_b1b1::synapse0x328c330() {
   return (neuron0x3263dd0()*-0.0114706);
}

double NNfunction_bb_b1b1::synapse0x328c370() {
   return (neuron0x3264110()*0.0183516);
}

double NNfunction_bb_b1b1::synapse0x328c3b0() {
   return (neuron0x3264450()*-0.0330835);
}

double NNfunction_bb_b1b1::synapse0x328c3f0() {
   return (neuron0x3264790()*-0.0050425);
}

double NNfunction_bb_b1b1::synapse0x328c430() {
   return (neuron0x3264ad0()*0.0176402);
}

double NNfunction_bb_b1b1::synapse0x328c470() {
   return (neuron0x3264e10()*0.000895701);
}

double NNfunction_bb_b1b1::synapse0x328c4b0() {
   return (neuron0x3265150()*0.00291243);
}

double NNfunction_bb_b1b1::synapse0x328c4f0() {
   return (neuron0x3265490()*0.0108637);
}

double NNfunction_bb_b1b1::synapse0x328c530() {
   return (neuron0x32657d0()*0.00319755);
}

double NNfunction_bb_b1b1::synapse0x328c570() {
   return (neuron0x3265b10()*0.77203);
}

double NNfunction_bb_b1b1::synapse0x328c5b0() {
   return (neuron0x3265e50()*-0.00417672);
}

double NNfunction_bb_b1b1::synapse0x328c5f0() {
   return (neuron0x3266190()*-0.00755149);
}

double NNfunction_bb_b1b1::synapse0x328c080() {
   return (neuron0x32664d0()*-0.0329881);
}

double NNfunction_bb_b1b1::synapse0x328c0c0() {
   return (neuron0x3266a30()*-0.0219474);
}

double NNfunction_bb_b1b1::synapse0x328c740() {
   return (neuron0x3266c50()*-0.00787258);
}

double NNfunction_bb_b1b1::synapse0x328c780() {
   return (neuron0x3266f90()*-4.06262);
}

double NNfunction_bb_b1b1::synapse0x328c7c0() {
   return (neuron0x32672d0()*-0.0220485);
}

double NNfunction_bb_b1b1::synapse0x328c800() {
   return (neuron0x3267610()*-0.00532059);
}

double NNfunction_bb_b1b1::synapse0x328c840() {
   return (neuron0x3267950()*-0.0110558);
}

double NNfunction_bb_b1b1::synapse0x328c880() {
   return (neuron0x3267c90()*0.0854309);
}

double NNfunction_bb_b1b1::synapse0x328cc00() {
   return (neuron0x3263160()*-0.597005);
}

double NNfunction_bb_b1b1::synapse0x328cc40() {
   return (neuron0x3263410()*-0.000842198);
}

double NNfunction_bb_b1b1::synapse0x328cc80() {
   return (neuron0x3263750()*-0.277994);
}

double NNfunction_bb_b1b1::synapse0x328ccc0() {
   return (neuron0x3263a90()*-0.204258);
}

double NNfunction_bb_b1b1::synapse0x328cd00() {
   return (neuron0x3263dd0()*0.818204);
}

double NNfunction_bb_b1b1::synapse0x328cd40() {
   return (neuron0x3264110()*0.0941453);
}

double NNfunction_bb_b1b1::synapse0x328cd80() {
   return (neuron0x3264450()*-0.075151);
}

double NNfunction_bb_b1b1::synapse0x328cdc0() {
   return (neuron0x3264790()*0.0299425);
}

double NNfunction_bb_b1b1::synapse0x328ce00() {
   return (neuron0x3264ad0()*-0.0810364);
}

double NNfunction_bb_b1b1::synapse0x328ce40() {
   return (neuron0x3264e10()*0.0519269);
}

double NNfunction_bb_b1b1::synapse0x328ce80() {
   return (neuron0x3265150()*-0.0981279);
}

double NNfunction_bb_b1b1::synapse0x328cec0() {
   return (neuron0x3265490()*-0.11384);
}

double NNfunction_bb_b1b1::synapse0x328cf00() {
   return (neuron0x32657d0()*-0.0476236);
}

double NNfunction_bb_b1b1::synapse0x328cf40() {
   return (neuron0x3265b10()*1.56339);
}

double NNfunction_bb_b1b1::synapse0x328cf80() {
   return (neuron0x3265e50()*-0.00277105);
}

double NNfunction_bb_b1b1::synapse0x328cfc0() {
   return (neuron0x3266190()*0.0402431);
}

double NNfunction_bb_b1b1::synapse0x328ca50() {
   return (neuron0x32664d0()*0.336046);
}

double NNfunction_bb_b1b1::synapse0x328ca90() {
   return (neuron0x3266a30()*-0.100479);
}

double NNfunction_bb_b1b1::synapse0x328d110() {
   return (neuron0x3266c50()*-0.0699391);
}

double NNfunction_bb_b1b1::synapse0x328d150() {
   return (neuron0x3266f90()*0.128668);
}

double NNfunction_bb_b1b1::synapse0x328d190() {
   return (neuron0x32672d0()*-0.0377586);
}

double NNfunction_bb_b1b1::synapse0x328d1d0() {
   return (neuron0x3267610()*-0.143253);
}

double NNfunction_bb_b1b1::synapse0x328d210() {
   return (neuron0x3267950()*-0.10781);
}

double NNfunction_bb_b1b1::synapse0x328d250() {
   return (neuron0x3267c90()*0.954715);
}

double NNfunction_bb_b1b1::synapse0x328d5d0() {
   return (neuron0x3263160()*-0.479196);
}

double NNfunction_bb_b1b1::synapse0x328d610() {
   return (neuron0x3263410()*0.0360661);
}

double NNfunction_bb_b1b1::synapse0x328d650() {
   return (neuron0x3263750()*-0.293252);
}

double NNfunction_bb_b1b1::synapse0x328d690() {
   return (neuron0x3263a90()*-0.333437);
}

double NNfunction_bb_b1b1::synapse0x328d6d0() {
   return (neuron0x3263dd0()*-0.384545);
}

double NNfunction_bb_b1b1::synapse0x328d710() {
   return (neuron0x3264110()*-0.136149);
}

double NNfunction_bb_b1b1::synapse0x328d750() {
   return (neuron0x3264450()*1.20092);
}

double NNfunction_bb_b1b1::synapse0x328d790() {
   return (neuron0x3264790()*0.0126045);
}

double NNfunction_bb_b1b1::synapse0x328d7d0() {
   return (neuron0x3264ad0()*-0.045277);
}

double NNfunction_bb_b1b1::synapse0x328d810() {
   return (neuron0x3264e10()*0.129585);
}

double NNfunction_bb_b1b1::synapse0x328d850() {
   return (neuron0x3265150()*-0.00661998);
}

double NNfunction_bb_b1b1::synapse0x328d890() {
   return (neuron0x3265490()*-0.121863);
}

double NNfunction_bb_b1b1::synapse0x328d8d0() {
   return (neuron0x32657d0()*-0.011996);
}

double NNfunction_bb_b1b1::synapse0x328d910() {
   return (neuron0x3265b10()*2.40343);
}

double NNfunction_bb_b1b1::synapse0x328d950() {
   return (neuron0x3265e50()*-0.052755);
}

double NNfunction_bb_b1b1::synapse0x328d990() {
   return (neuron0x3266190()*-0.350747);
}

double NNfunction_bb_b1b1::synapse0x328d420() {
   return (neuron0x32664d0()*0.181544);
}

double NNfunction_bb_b1b1::synapse0x328d460() {
   return (neuron0x3266a30()*0.235209);
}

double NNfunction_bb_b1b1::synapse0x328dae0() {
   return (neuron0x3266c50()*-0.106034);
}

double NNfunction_bb_b1b1::synapse0x328db20() {
   return (neuron0x3266f90()*0.288034);
}

double NNfunction_bb_b1b1::synapse0x328db60() {
   return (neuron0x32672d0()*0.0565876);
}

double NNfunction_bb_b1b1::synapse0x328dba0() {
   return (neuron0x3267610()*-0.429971);
}

double NNfunction_bb_b1b1::synapse0x328dbe0() {
   return (neuron0x3267950()*-0.071917);
}

double NNfunction_bb_b1b1::synapse0x328dc20() {
   return (neuron0x3267c90()*0.230492);
}

double NNfunction_bb_b1b1::synapse0x302da90() {
   return (neuron0x3268100()*1.11732);
}

double NNfunction_bb_b1b1::synapse0x302dad0() {
   return (neuron0x3268a50()*-0.0975623);
}

double NNfunction_bb_b1b1::synapse0x326a5c0() {
   return (neuron0x3269530()*0.165969);
}

double NNfunction_bb_b1b1::synapse0x326a600() {
   return (neuron0x3268fd0()*-0.380366);
}

double NNfunction_bb_b1b1::synapse0x326c0a0() {
   return (neuron0x326a310()*-0.0898072);
}

double NNfunction_bb_b1b1::synapse0x326c0e0() {
   return (neuron0x326bdf0()*-0.502769);
}

double NNfunction_bb_b1b1::synapse0x326ce70() {
   return (neuron0x326cbc0()*0.961028);
}

double NNfunction_bb_b1b1::synapse0x326ceb0() {
   return (neuron0x326d590()*0.0478202);
}

double NNfunction_bb_b1b1::synapse0x326d840() {
   return (neuron0x326df60()*0.619975);
}

double NNfunction_bb_b1b1::synapse0x326d880() {
   return (neuron0x326ea40()*0.0567791);
}

double NNfunction_bb_b1b1::synapse0x326e210() {
   return (neuron0x326f410()*-0.739413);
}

double NNfunction_bb_b1b1::synapse0x326e250() {
   return (neuron0x326c4f0()*0.167349);
}

double NNfunction_bb_b1b1::synapse0x326ecf0() {
   return (neuron0x3270fc0()*0.00680115);
}

double NNfunction_bb_b1b1::synapse0x326ed30() {
   return (neuron0x3271990()*-0.543859);
}

double NNfunction_bb_b1b1::synapse0x326f6c0() {
   return (neuron0x3272360()*-0.113326);
}

double NNfunction_bb_b1b1::synapse0x326f700() {
   return (neuron0x3272d30()*-0.315491);
}

double NNfunction_bb_b1b1::synapse0x326c7a0() {
   return (neuron0x3274b40()*-0.399987);
}

double NNfunction_bb_b1b1::synapse0x326c7e0() {
   return (neuron0x3274e20()*-0.244068);
}

double NNfunction_bb_b1b1::synapse0x3271270() {
   return (neuron0x32757f0()*1.97338);
}

double NNfunction_bb_b1b1::synapse0x32712b0() {
   return (neuron0x32761c0()*-0.160523);
}

double NNfunction_bb_b1b1::synapse0x3271c40() {
   return (neuron0x3276b90()*-1.0718);
}

double NNfunction_bb_b1b1::synapse0x3271c80() {
   return (neuron0x3277560()*1.04868);
}

double NNfunction_bb_b1b1::synapse0x3272610() {
   return (neuron0x32700b0()*0.0527377);
}

double NNfunction_bb_b1b1::synapse0x3272650() {
   return (neuron0x3270a80()*-0.4262);
}

double NNfunction_bb_b1b1::synapse0x3272fe0() {
   return (neuron0x327a2f0()*-0.635531);
}

double NNfunction_bb_b1b1::synapse0x3273020() {
   return (neuron0x327acc0()*0.752126);
}

double NNfunction_bb_b1b1::synapse0x3266070() {
   return (neuron0x327b690()*-0.54391);
}

double NNfunction_bb_b1b1::synapse0x32660b0() {
   return (neuron0x327c060()*0.0566281);
}

double NNfunction_bb_b1b1::synapse0x32750d0() {
   return (neuron0x327ca30()*-0.349481);
}

double NNfunction_bb_b1b1::synapse0x3275110() {
   return (neuron0x327d400()*0.0871384);
}

double NNfunction_bb_b1b1::synapse0x3275aa0() {
   return (neuron0x327ddd0()*0.535018);
}

double NNfunction_bb_b1b1::synapse0x3275ae0() {
   return (neuron0x327e7a0()*-2.10344);
}

double NNfunction_bb_b1b1::synapse0x3276470() {
   return (neuron0x3274830()*0.163983);
}

double NNfunction_bb_b1b1::synapse0x32764b0() {
   return (neuron0x3281380()*-0.485391);
}

double NNfunction_bb_b1b1::synapse0x3276e40() {
   return (neuron0x3281d50()*1.01324);
}

double NNfunction_bb_b1b1::synapse0x3276e80() {
   return (neuron0x3282720()*-0.0637454);
}

double NNfunction_bb_b1b1::synapse0x3277810() {
   return (neuron0x32830f0()*-0.439964);
}

double NNfunction_bb_b1b1::synapse0x3277850() {
   return (neuron0x3283ac0()*0.384219);
}

double NNfunction_bb_b1b1::synapse0x3270360() {
   return (neuron0x3284490()*1.22006);
}

double NNfunction_bb_b1b1::synapse0x32703a0() {
   return (neuron0x3284e60()*0.0218271);
}

double NNfunction_bb_b1b1::synapse0x3279c10() {
   return (neuron0x3285830()*-0.854073);
}

double NNfunction_bb_b1b1::synapse0x3279c50() {
   return (neuron0x3286410()*0.10443);
}

double NNfunction_bb_b1b1::synapse0x327a5a0() {
   return (neuron0x3286de0()*0.168095);
}

double NNfunction_bb_b1b1::synapse0x327a5e0() {
   return (neuron0x3277c60()*0.349722);
}

double NNfunction_bb_b1b1::synapse0x327af70() {
   return (neuron0x3278630()*-0.427144);
}

double NNfunction_bb_b1b1::synapse0x327afb0() {
   return (neuron0x3279000()*-0.326817);
}

double NNfunction_bb_b1b1::synapse0x327b940() {
   return (neuron0x328b640()*0.070922);
}

double NNfunction_bb_b1b1::synapse0x327b980() {
   return (neuron0x328bef0()*-1.63057);
}

double NNfunction_bb_b1b1::synapse0x327c310() {
   return (neuron0x328c8c0()*0.143715);
}

double NNfunction_bb_b1b1::synapse0x327c350() {
   return (neuron0x328d290()*-0.0343283);
}

double NNfunction_bb_b1b1::synapse0x327ea50() {
   return (neuron0x3268100()*0.517142);
}

double NNfunction_bb_b1b1::synapse0x327ea90() {
   return (neuron0x3268a50()*-0.851023);
}

double NNfunction_bb_b1b1::synapse0x3274010() {
   return (neuron0x3269530()*-1.2343);
}

double NNfunction_bb_b1b1::synapse0x3274050() {
   return (neuron0x3268fd0()*0.890516);
}

double NNfunction_bb_b1b1::synapse0x3281630() {
   return (neuron0x326a310()*3.72649);
}

double NNfunction_bb_b1b1::synapse0x3281670() {
   return (neuron0x326bdf0()*2.98324);
}

double NNfunction_bb_b1b1::synapse0x3282000() {
   return (neuron0x326cbc0()*-1.54709);
}

double NNfunction_bb_b1b1::synapse0x3282040() {
   return (neuron0x326d590()*1.45598);
}

double NNfunction_bb_b1b1::synapse0x32829d0() {
   return (neuron0x326df60()*2.16368);
}

double NNfunction_bb_b1b1::synapse0x3282a10() {
   return (neuron0x326ea40()*0.24263);
}

double NNfunction_bb_b1b1::synapse0x32833a0() {
   return (neuron0x326f410()*-1.85689);
}

double NNfunction_bb_b1b1::synapse0x32833e0() {
   return (neuron0x326c4f0()*1.90947);
}

double NNfunction_bb_b1b1::synapse0x3283d70() {
   return (neuron0x3270fc0()*-0.884642);
}

double NNfunction_bb_b1b1::synapse0x3283db0() {
   return (neuron0x3271990()*2.52885);
}

double NNfunction_bb_b1b1::synapse0x3284740() {
   return (neuron0x3272360()*0.21527);
}

double NNfunction_bb_b1b1::synapse0x3284780() {
   return (neuron0x3272d30()*-3.14809);
}

double NNfunction_bb_b1b1::synapse0x3285110() {
   return (neuron0x3274b40()*-0.404959);
}

double NNfunction_bb_b1b1::synapse0x3285150() {
   return (neuron0x3274e20()*0.990224);
}

double NNfunction_bb_b1b1::synapse0x3285ae0() {
   return (neuron0x32757f0()*0.870911);
}

double NNfunction_bb_b1b1::synapse0x3285b20() {
   return (neuron0x32761c0()*-0.0763299);
}

double NNfunction_bb_b1b1::synapse0x32866c0() {
   return (neuron0x3276b90()*-0.703705);
}

double NNfunction_bb_b1b1::synapse0x3286700() {
   return (neuron0x3277560()*0.841481);
}

double NNfunction_bb_b1b1::synapse0x3287090() {
   return (neuron0x32700b0()*1.50089);
}

double NNfunction_bb_b1b1::synapse0x32870d0() {
   return (neuron0x3270a80()*-0.0136475);
}

double NNfunction_bb_b1b1::synapse0x3277f10() {
   return (neuron0x327a2f0()*-0.983878);
}

double NNfunction_bb_b1b1::synapse0x3277f50() {
   return (neuron0x327acc0()*-0.0292087);
}

double NNfunction_bb_b1b1::synapse0x32788e0() {
   return (neuron0x327b690()*-1.05883);
}

double NNfunction_bb_b1b1::synapse0x3278920() {
   return (neuron0x327c060()*-1.1523);
}

double NNfunction_bb_b1b1::synapse0x32792b0() {
   return (neuron0x327ca30()*1.26678);
}

double NNfunction_bb_b1b1::synapse0x32792f0() {
   return (neuron0x327d400()*-0.694776);
}

double NNfunction_bb_b1b1::synapse0x328b7d0() {
   return (neuron0x327ddd0()*-0.0583491);
}

double NNfunction_bb_b1b1::synapse0x328b810() {
   return (neuron0x327e7a0()*-0.311506);
}

double NNfunction_bb_b1b1::synapse0x328c1a0() {
   return (neuron0x3274830()*1.83546);
}

double NNfunction_bb_b1b1::synapse0x328c1e0() {
   return (neuron0x3281380()*0.667336);
}

double NNfunction_bb_b1b1::synapse0x328cb70() {
   return (neuron0x3281d50()*1.0733);
}

double NNfunction_bb_b1b1::synapse0x328cbb0() {
   return (neuron0x3282720()*-2.57165);
}

double NNfunction_bb_b1b1::synapse0x328d540() {
   return (neuron0x32830f0()*-3.20705);
}

double NNfunction_bb_b1b1::synapse0x328d580() {
   return (neuron0x3283ac0()*-1.05162);
}

double NNfunction_bb_b1b1::synapse0x32683b0() {
   return (neuron0x3284490()*-1.84986);
}

double NNfunction_bb_b1b1::synapse0x32683f0() {
   return (neuron0x3284e60()*-1.03074);
}

double NNfunction_bb_b1b1::synapse0x327cce0() {
   return (neuron0x3285830()*-2.43844);
}

double NNfunction_bb_b1b1::synapse0x327cd20() {
   return (neuron0x3286410()*0.981649);
}

double NNfunction_bb_b1b1::synapse0x328dc60() {
   return (neuron0x3286de0()*0.856069);
}

double NNfunction_bb_b1b1::synapse0x328dca0() {
   return (neuron0x3277c60()*2.10225);
}

double NNfunction_bb_b1b1::synapse0x328dce0() {
   return (neuron0x3278630()*-3.74425);
}

double NNfunction_bb_b1b1::synapse0x328dd20() {
   return (neuron0x3279000()*0.00761555);
}

double NNfunction_bb_b1b1::synapse0x3294bd0() {
   return (neuron0x328b640()*-2.5369);
}

double NNfunction_bb_b1b1::synapse0x3294c10() {
   return (neuron0x328bef0()*0.154715);
}

double NNfunction_bb_b1b1::synapse0x3294c50() {
   return (neuron0x328c8c0()*-5.50252);
}

double NNfunction_bb_b1b1::synapse0x3294c90() {
   return (neuron0x328d290()*-1.98919);
}

double NNfunction_bb_b1b1::synapse0x3295010() {
   return (neuron0x3268100()*0.841427);
}

double NNfunction_bb_b1b1::synapse0x3295050() {
   return (neuron0x3268a50()*-0.447644);
}

double NNfunction_bb_b1b1::synapse0x3295090() {
   return (neuron0x3269530()*0.135533);
}

double NNfunction_bb_b1b1::synapse0x32950d0() {
   return (neuron0x3268fd0()*1.64102);
}

double NNfunction_bb_b1b1::synapse0x3295110() {
   return (neuron0x326a310()*-0.0383232);
}

double NNfunction_bb_b1b1::synapse0x3295150() {
   return (neuron0x326bdf0()*0.126504);
}

double NNfunction_bb_b1b1::synapse0x3295190() {
   return (neuron0x326cbc0()*-0.805387);
}

double NNfunction_bb_b1b1::synapse0x32951d0() {
   return (neuron0x326d590()*0.0350245);
}

double NNfunction_bb_b1b1::synapse0x3295210() {
   return (neuron0x326df60()*0.352759);
}

double NNfunction_bb_b1b1::synapse0x3295250() {
   return (neuron0x326ea40()*-0.0540073);
}

double NNfunction_bb_b1b1::synapse0x3295290() {
   return (neuron0x326f410()*-0.44342);
}

double NNfunction_bb_b1b1::synapse0x32952d0() {
   return (neuron0x326c4f0()*0.136913);
}

double NNfunction_bb_b1b1::synapse0x3295310() {
   return (neuron0x3270fc0()*0.00644489);
}

double NNfunction_bb_b1b1::synapse0x3295350() {
   return (neuron0x3271990()*0.738461);
}

double NNfunction_bb_b1b1::synapse0x3295390() {
   return (neuron0x3272360()*-0.0535236);
}

double NNfunction_bb_b1b1::synapse0x32953d0() {
   return (neuron0x3272d30()*-0.358314);
}

double NNfunction_bb_b1b1::synapse0x3294e60() {
   return (neuron0x3274b40()*-0.275026);
}

double NNfunction_bb_b1b1::synapse0x3294ea0() {
   return (neuron0x3274e20()*-0.160387);
}

double NNfunction_bb_b1b1::synapse0x3295520() {
   return (neuron0x32757f0()*1.05866);
}

double NNfunction_bb_b1b1::synapse0x3295560() {
   return (neuron0x32761c0()*-0.108277);
}

double NNfunction_bb_b1b1::synapse0x32955a0() {
   return (neuron0x3276b90()*-0.698868);
}

double NNfunction_bb_b1b1::synapse0x32955e0() {
   return (neuron0x3277560()*0.716329);
}

double NNfunction_bb_b1b1::synapse0x3295620() {
   return (neuron0x32700b0()*0.0885279);
}

double NNfunction_bb_b1b1::synapse0x3295660() {
   return (neuron0x3270a80()*-0.450814);
}

double NNfunction_bb_b1b1::synapse0x32956a0() {
   return (neuron0x327a2f0()*-0.43564);
}

double NNfunction_bb_b1b1::synapse0x32956e0() {
   return (neuron0x327acc0()*0.438967);
}

double NNfunction_bb_b1b1::synapse0x3295720() {
   return (neuron0x327b690()*-0.333048);
}

double NNfunction_bb_b1b1::synapse0x3295760() {
   return (neuron0x327c060()*0.0358507);
}

double NNfunction_bb_b1b1::synapse0x32957a0() {
   return (neuron0x327ca30()*-0.276408);
}

double NNfunction_bb_b1b1::synapse0x32957e0() {
   return (neuron0x327d400()*-0.00159245);
}

double NNfunction_bb_b1b1::synapse0x3295820() {
   return (neuron0x327ddd0()*0.397206);
}

double NNfunction_bb_b1b1::synapse0x3295860() {
   return (neuron0x327e7a0()*-0.0844017);
}

double NNfunction_bb_b1b1::synapse0x3295410() {
   return (neuron0x3274830()*0.319897);
}

double NNfunction_bb_b1b1::synapse0x3295450() {
   return (neuron0x3281380()*-0.319858);
}

double NNfunction_bb_b1b1::synapse0x3295490() {
   return (neuron0x3281d50()*0.67832);
}

double NNfunction_bb_b1b1::synapse0x32954d0() {
   return (neuron0x3282720()*-0.0241507);
}

double NNfunction_bb_b1b1::synapse0x3295ab0() {
   return (neuron0x32830f0()*-0.290641);
}

double NNfunction_bb_b1b1::synapse0x3295af0() {
   return (neuron0x3283ac0()*0.270353);
}

double NNfunction_bb_b1b1::synapse0x3295b30() {
   return (neuron0x3284490()*0.363793);
}

double NNfunction_bb_b1b1::synapse0x3295b70() {
   return (neuron0x3284e60()*0.0110729);
}

double NNfunction_bb_b1b1::synapse0x3295bb0() {
   return (neuron0x3285830()*-0.547584);
}

double NNfunction_bb_b1b1::synapse0x3295bf0() {
   return (neuron0x3286410()*0.116209);
}

double NNfunction_bb_b1b1::synapse0x3295c30() {
   return (neuron0x3286de0()*0.24851);
}

double NNfunction_bb_b1b1::synapse0x3295c70() {
   return (neuron0x3277c60()*0.193681);
}

double NNfunction_bb_b1b1::synapse0x3295cb0() {
   return (neuron0x3278630()*-0.293354);
}

double NNfunction_bb_b1b1::synapse0x3295cf0() {
   return (neuron0x3279000()*-0.231346);
}

double NNfunction_bb_b1b1::synapse0x3295d30() {
   return (neuron0x328b640()*-0.258631);
}

double NNfunction_bb_b1b1::synapse0x3295d70() {
   return (neuron0x328bef0()*0.0493687);
}

double NNfunction_bb_b1b1::synapse0x3295db0() {
   return (neuron0x328c8c0()*-0.0225022);
}

double NNfunction_bb_b1b1::synapse0x3295df0() {
   return (neuron0x328d290()*-0.00492956);
}

double NNfunction_bb_b1b1::synapse0x3296170() {
   return (neuron0x3268100()*-4.62821);
}

double NNfunction_bb_b1b1::synapse0x32961b0() {
   return (neuron0x3268a50()*3.07199);
}

double NNfunction_bb_b1b1::synapse0x32961f0() {
   return (neuron0x3269530()*1.19457);
}

double NNfunction_bb_b1b1::synapse0x3296230() {
   return (neuron0x3268fd0()*-2.34226);
}

double NNfunction_bb_b1b1::synapse0x3296270() {
   return (neuron0x326a310()*-1.68618);
}

double NNfunction_bb_b1b1::synapse0x32962b0() {
   return (neuron0x326bdf0()*1.44893);
}

double NNfunction_bb_b1b1::synapse0x32962f0() {
   return (neuron0x326cbc0()*1.30882);
}

double NNfunction_bb_b1b1::synapse0x3296330() {
   return (neuron0x326d590()*-0.457286);
}

double NNfunction_bb_b1b1::synapse0x3296370() {
   return (neuron0x326df60()*-2.1555);
}

double NNfunction_bb_b1b1::synapse0x32963b0() {
   return (neuron0x326ea40()*2.8212);
}

double NNfunction_bb_b1b1::synapse0x32963f0() {
   return (neuron0x326f410()*2.60226);
}

double NNfunction_bb_b1b1::synapse0x3296430() {
   return (neuron0x326c4f0()*-1.45241);
}

double NNfunction_bb_b1b1::synapse0x3296470() {
   return (neuron0x3270fc0()*0.165031);
}

double NNfunction_bb_b1b1::synapse0x32964b0() {
   return (neuron0x3271990()*-3.30973);
}

double NNfunction_bb_b1b1::synapse0x32964f0() {
   return (neuron0x3272360()*0.306843);
}

double NNfunction_bb_b1b1::synapse0x3296530() {
   return (neuron0x3272d30()*1.76707);
}

double NNfunction_bb_b1b1::synapse0x3295fc0() {
   return (neuron0x3274b40()*0.599017);
}

double NNfunction_bb_b1b1::synapse0x3296000() {
   return (neuron0x3274e20()*1.2091);
}

double NNfunction_bb_b1b1::synapse0x3296680() {
   return (neuron0x32757f0()*-0.539454);
}

double NNfunction_bb_b1b1::synapse0x32966c0() {
   return (neuron0x32761c0()*-0.905107);
}

double NNfunction_bb_b1b1::synapse0x3296700() {
   return (neuron0x3276b90()*1.60723);
}

double NNfunction_bb_b1b1::synapse0x3296740() {
   return (neuron0x3277560()*0.188388);
}

double NNfunction_bb_b1b1::synapse0x3296780() {
   return (neuron0x32700b0()*-1.19723);
}

double NNfunction_bb_b1b1::synapse0x32967c0() {
   return (neuron0x3270a80()*1.72995);
}

double NNfunction_bb_b1b1::synapse0x3296800() {
   return (neuron0x327a2f0()*-0.467847);
}

double NNfunction_bb_b1b1::synapse0x3296840() {
   return (neuron0x327acc0()*0.158751);
}

double NNfunction_bb_b1b1::synapse0x3296880() {
   return (neuron0x327b690()*1.94903);
}

double NNfunction_bb_b1b1::synapse0x32968c0() {
   return (neuron0x327c060()*-0.193336);
}

double NNfunction_bb_b1b1::synapse0x3296900() {
   return (neuron0x327ca30()*-0.39727);
}

double NNfunction_bb_b1b1::synapse0x3296940() {
   return (neuron0x327d400()*1.367);
}

double NNfunction_bb_b1b1::synapse0x3296980() {
   return (neuron0x327ddd0()*0.527139);
}

double NNfunction_bb_b1b1::synapse0x32969c0() {
   return (neuron0x327e7a0()*-0.237061);
}

double NNfunction_bb_b1b1::synapse0x3296570() {
   return (neuron0x3274830()*-1.14053);
}

double NNfunction_bb_b1b1::synapse0x32965b0() {
   return (neuron0x3281380()*-0.905793);
}

double NNfunction_bb_b1b1::synapse0x32965f0() {
   return (neuron0x3281d50()*-2.24393);
}

double NNfunction_bb_b1b1::synapse0x3296630() {
   return (neuron0x3282720()*0.439442);
}

double NNfunction_bb_b1b1::synapse0x3296c10() {
   return (neuron0x32830f0()*-1.35152);
}

double NNfunction_bb_b1b1::synapse0x3296c50() {
   return (neuron0x3283ac0()*0.245694);
}

double NNfunction_bb_b1b1::synapse0x3296c90() {
   return (neuron0x3284490()*-0.766173);
}

double NNfunction_bb_b1b1::synapse0x3296cd0() {
   return (neuron0x3284e60()*0.202554);
}

double NNfunction_bb_b1b1::synapse0x3296d10() {
   return (neuron0x3285830()*0.965848);
}

double NNfunction_bb_b1b1::synapse0x3296d50() {
   return (neuron0x3286410()*-1.13);
}

double NNfunction_bb_b1b1::synapse0x3296d90() {
   return (neuron0x3286de0()*-1.30897);
}

double NNfunction_bb_b1b1::synapse0x3296dd0() {
   return (neuron0x3277c60()*-2.26474);
}

double NNfunction_bb_b1b1::synapse0x3296e10() {
   return (neuron0x3278630()*-0.75571);
}

double NNfunction_bb_b1b1::synapse0x3296e50() {
   return (neuron0x3279000()*0.16461);
}

double NNfunction_bb_b1b1::synapse0x3296e90() {
   return (neuron0x328b640()*1.19259);
}

double NNfunction_bb_b1b1::synapse0x3296ed0() {
   return (neuron0x328bef0()*0.445462);
}

double NNfunction_bb_b1b1::synapse0x3296f10() {
   return (neuron0x328c8c0()*1.24308);
}

double NNfunction_bb_b1b1::synapse0x3296f50() {
   return (neuron0x328d290()*0.232979);
}

double NNfunction_bb_b1b1::synapse0x32972d0() {
   return (neuron0x3268100()*-3.85098);
}

double NNfunction_bb_b1b1::synapse0x3297310() {
   return (neuron0x3268a50()*2.29689);
}

double NNfunction_bb_b1b1::synapse0x3297350() {
   return (neuron0x3269530()*-2.07433);
}

double NNfunction_bb_b1b1::synapse0x3297390() {
   return (neuron0x3268fd0()*-6.04437);
}

double NNfunction_bb_b1b1::synapse0x32973d0() {
   return (neuron0x326a310()*-3.02304);
}

double NNfunction_bb_b1b1::synapse0x3297410() {
   return (neuron0x326bdf0()*-5.58969);
}

double NNfunction_bb_b1b1::synapse0x3297450() {
   return (neuron0x326cbc0()*2.197);
}

double NNfunction_bb_b1b1::synapse0x3297490() {
   return (neuron0x326d590()*-0.487591);
}

double NNfunction_bb_b1b1::synapse0x32974d0() {
   return (neuron0x326df60()*-5.25073);
}

double NNfunction_bb_b1b1::synapse0x3297510() {
   return (neuron0x326ea40()*5.86502);
}

double NNfunction_bb_b1b1::synapse0x3297550() {
   return (neuron0x326f410()*3.50371);
}

double NNfunction_bb_b1b1::synapse0x3297590() {
   return (neuron0x326c4f0()*-1.66317);
}

double NNfunction_bb_b1b1::synapse0x32975d0() {
   return (neuron0x3270fc0()*0.269013);
}

double NNfunction_bb_b1b1::synapse0x3297610() {
   return (neuron0x3271990()*-3.18175);
}

double NNfunction_bb_b1b1::synapse0x3297650() {
   return (neuron0x3272360()*0.370734);
}

double NNfunction_bb_b1b1::synapse0x3297690() {
   return (neuron0x3272d30()*3.48253);
}

double NNfunction_bb_b1b1::synapse0x3297120() {
   return (neuron0x3274b40()*2.99995);
}

double NNfunction_bb_b1b1::synapse0x3297160() {
   return (neuron0x3274e20()*2.43981);
}

double NNfunction_bb_b1b1::synapse0x32977e0() {
   return (neuron0x32757f0()*-9.24889);
}

double NNfunction_bb_b1b1::synapse0x3297820() {
   return (neuron0x32761c0()*1.66643);
}

double NNfunction_bb_b1b1::synapse0x3297860() {
   return (neuron0x3276b90()*6.24005);
}

double NNfunction_bb_b1b1::synapse0x32978a0() {
   return (neuron0x3277560()*-6.13995);
}

double NNfunction_bb_b1b1::synapse0x32978e0() {
   return (neuron0x32700b0()*-2.37852);
}

double NNfunction_bb_b1b1::synapse0x3297920() {
   return (neuron0x3270a80()*3.47902);
}

double NNfunction_bb_b1b1::synapse0x3297960() {
   return (neuron0x327a2f0()*4.6481);
}

double NNfunction_bb_b1b1::synapse0x32979a0() {
   return (neuron0x327acc0()*-6.05928);
}

double NNfunction_bb_b1b1::synapse0x32979e0() {
   return (neuron0x327b690()*4.54912);
}

double NNfunction_bb_b1b1::synapse0x3297a20() {
   return (neuron0x327c060()*-0.557212);
}

double NNfunction_bb_b1b1::synapse0x3297a60() {
   return (neuron0x327ca30()*3.37);
}

double NNfunction_bb_b1b1::synapse0x3297aa0() {
   return (neuron0x327d400()*2.90358);
}

double NNfunction_bb_b1b1::synapse0x3297ae0() {
   return (neuron0x327ddd0()*-4.41371);
}

double NNfunction_bb_b1b1::synapse0x3297b20() {
   return (neuron0x327e7a0()*-1.80469);
}

double NNfunction_bb_b1b1::synapse0x32976d0() {
   return (neuron0x3274830()*-5.88682);
}

double NNfunction_bb_b1b1::synapse0x3297710() {
   return (neuron0x3281380()*5.18247);
}

double NNfunction_bb_b1b1::synapse0x3297750() {
   return (neuron0x3281d50()*-7.16612);
}

double NNfunction_bb_b1b1::synapse0x3297790() {
   return (neuron0x3282720()*0.0435902);
}

double NNfunction_bb_b1b1::synapse0x3297d70() {
   return (neuron0x32830f0()*5.32039);
}

double NNfunction_bb_b1b1::synapse0x3297db0() {
   return (neuron0x3283ac0()*-3.94629);
}

double NNfunction_bb_b1b1::synapse0x3297df0() {
   return (neuron0x3284490()*3.86459);
}

double NNfunction_bb_b1b1::synapse0x3297e30() {
   return (neuron0x3284e60()*0.264055);
}

double NNfunction_bb_b1b1::synapse0x3297e70() {
   return (neuron0x3285830()*9.32051);
}

double NNfunction_bb_b1b1::synapse0x3297eb0() {
   return (neuron0x3286410()*-2.51846);
}

double NNfunction_bb_b1b1::synapse0x3297ef0() {
   return (neuron0x3286de0()*-3.14324);
}

double NNfunction_bb_b1b1::synapse0x3297f30() {
   return (neuron0x3277c60()*-3.06598);
}

double NNfunction_bb_b1b1::synapse0x3297f70() {
   return (neuron0x3278630()*3.69117);
}

double NNfunction_bb_b1b1::synapse0x3297fb0() {
   return (neuron0x3279000()*2.95786);
}

double NNfunction_bb_b1b1::synapse0x3297ff0() {
   return (neuron0x328b640()*5.70646);
}

double NNfunction_bb_b1b1::synapse0x3298030() {
   return (neuron0x328bef0()*-4.4342);
}

double NNfunction_bb_b1b1::synapse0x3298070() {
   return (neuron0x328c8c0()*0.0966911);
}

double NNfunction_bb_b1b1::synapse0x32980b0() {
   return (neuron0x328d290()*0.540675);
}

double NNfunction_bb_b1b1::synapse0x3298310() {
   return (neuron0x3294490()*-6.51579);
}

double NNfunction_bb_b1b1::synapse0x3298350() {
   return (neuron0x3294830()*9.82117);
}

double NNfunction_bb_b1b1::synapse0x3298390() {
   return (neuron0x3294cd0()*11.9584);
}

double NNfunction_bb_b1b1::synapse0x32983d0() {
   return (neuron0x3295e30()*9.53017);
}

double NNfunction_bb_b1b1::synapse0x3298410() {
   return (neuron0x3296f90()*-17.8458);
}

