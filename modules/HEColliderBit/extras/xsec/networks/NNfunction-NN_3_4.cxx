#include "NNfunction-NN_3_4.h"
#include <cmath>

double NNfunction-NN_3_4::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3595)/15.1547;
   input1 = (in1 - -32.5122)/279.157;
   input2 = (in2 - 234.849)/208.133;
   input3 = (in3 - -25.1829)/850.742;
   input4 = (in4 - 1085.31)/924.804;
   input5 = (in5 - 938.715)/951.919;
   input6 = (in6 - 948.124)/951.929;
   input7 = (in7 - 965.812)/931.901;
   input8 = (in8 - 943.245)/978.031;
   input9 = (in9 - 927.256)/961.929;
   input10 = (in10 - 987.135)/951.308;
   input11 = (in11 - 590.81)/789.237;
   input12 = (in12 - 728.164)/872.106;
   input13 = (in13 - 504.14)/525.746;
   input14 = (in14 - 703.558)/803.885;
   input15 = (in15 - 707.06)/800.084;
   input16 = (in16 - 539.932)/575.362;
   input17 = (in17 - 742.823)/887.674;
   input18 = (in18 - 747.035)/896.531;
   input19 = (in19 - 765.93)/860.392;
   input20 = (in20 - -7.30595)/494.9;
   input21 = (in21 - -4.9371)/1142.32;
   input22 = (in22 - -2.52776)/1201.09;
   input23 = (in23 - -42.4812)/256.045;
   switch(index) {
     case 0:
         return neuron0x1407760();
     default:
         return 0.;
   }
}

double NNfunction-NN_3_4::Value(int index, double* input) {
   input0 = (input[0] - 23.3595)/15.1547;
   input1 = (input[1] - -32.5122)/279.157;
   input2 = (input[2] - 234.849)/208.133;
   input3 = (input[3] - -25.1829)/850.742;
   input4 = (input[4] - 1085.31)/924.804;
   input5 = (input[5] - 938.715)/951.919;
   input6 = (input[6] - 948.124)/951.929;
   input7 = (input[7] - 965.812)/931.901;
   input8 = (input[8] - 943.245)/978.031;
   input9 = (input[9] - 927.256)/961.929;
   input10 = (input[10] - 987.135)/951.308;
   input11 = (input[11] - 590.81)/789.237;
   input12 = (input[12] - 728.164)/872.106;
   input13 = (input[13] - 504.14)/525.746;
   input14 = (input[14] - 703.558)/803.885;
   input15 = (input[15] - 707.06)/800.084;
   input16 = (input[16] - 539.932)/575.362;
   input17 = (input[17] - 742.823)/887.674;
   input18 = (input[18] - 747.035)/896.531;
   input19 = (input[19] - 765.93)/860.392;
   input20 = (input[20] - -7.30595)/494.9;
   input21 = (input[21] - -4.9371)/1142.32;
   input22 = (input[22] - -2.52776)/1201.09;
   input23 = (input[23] - -42.4812)/256.045;
   switch(index) {
     case 0:
         return neuron0x1407760();
     default:
         return 0.;
   }
}

double NNfunction-NN_3_4::neuron0x13d3820() {
   return input0;
}

double NNfunction-NN_3_4::neuron0x13d3b60() {
   return input1;
}

double NNfunction-NN_3_4::neuron0x13d3ea0() {
   return input2;
}

double NNfunction-NN_3_4::neuron0x13d41e0() {
   return input3;
}

double NNfunction-NN_3_4::neuron0x13d4520() {
   return input4;
}

double NNfunction-NN_3_4::neuron0x13d4860() {
   return input5;
}

double NNfunction-NN_3_4::neuron0x13d4ba0() {
   return input6;
}

double NNfunction-NN_3_4::neuron0x13d4ee0() {
   return input7;
}

double NNfunction-NN_3_4::neuron0x13d5220() {
   return input8;
}

double NNfunction-NN_3_4::neuron0x13d5560() {
   return input9;
}

double NNfunction-NN_3_4::neuron0x13d58a0() {
   return input10;
}

double NNfunction-NN_3_4::neuron0x13d5be0() {
   return input11;
}

double NNfunction-NN_3_4::neuron0x13d5f20() {
   return input12;
}

double NNfunction-NN_3_4::neuron0x13d6260() {
   return input13;
}

double NNfunction-NN_3_4::neuron0x13d65a0() {
   return input14;
}

double NNfunction-NN_3_4::neuron0x13d68e0() {
   return input15;
}

double NNfunction-NN_3_4::neuron0x13d6c20() {
   return input16;
}

double NNfunction-NN_3_4::neuron0x13d7180() {
   return input17;
}

double NNfunction-NN_3_4::neuron0x13d73a0() {
   return input18;
}

double NNfunction-NN_3_4::neuron0x13d76e0() {
   return input19;
}

double NNfunction-NN_3_4::neuron0x13d7a20() {
   return input20;
}

double NNfunction-NN_3_4::neuron0x13d7d60() {
   return input21;
}

double NNfunction-NN_3_4::neuron0x13d80a0() {
   return input22;
}

double NNfunction-NN_3_4::neuron0x13d83e0() {
   return input23;
}

double NNfunction-NN_3_4::input0x13d8880() {
   double input = -0.658818;
   input += synapse0x1193690();
   input += synapse0x13d36e0();
   input += synapse0x13d3720();
   input += synapse0x13d8b30();
   input += synapse0x13d8b70();
   input += synapse0x13d8bb0();
   input += synapse0x13d8bf0();
   input += synapse0x13d8c30();
   input += synapse0x13d8c70();
   input += synapse0x13d8cb0();
   input += synapse0x13d8cf0();
   input += synapse0x13d8d30();
   input += synapse0x13d8d70();
   input += synapse0x13d8db0();
   input += synapse0x13d8df0();
   input += synapse0x13d8e30();
   input += synapse0x13d3650();
   input += synapse0x13d3690();
   input += synapse0x1184f30();
   input += synapse0x1184f70();
   input += synapse0x13d9090();
   input += synapse0x13d90d0();
   input += synapse0x13d9110();
   input += synapse0x13d9150();
   return input;
}

double NNfunction-NN_3_4::neuron0x13d8880() {
   double input = input0x13d8880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13d9190() {
   double input = -0.218801;
   input += synapse0x13d94d0();
   input += synapse0x13d9510();
   input += synapse0x13d9550();
   input += synapse0x13d9590();
   input += synapse0x13d95d0();
   input += synapse0x13d9610();
   input += synapse0x13d9650();
   input += synapse0x13d9690();
   input += synapse0x13d96d0();
   input += synapse0x13d8f80();
   input += synapse0x13d8fc0();
   input += synapse0x13d9000();
   input += synapse0x13d9040();
   input += synapse0x13d9920();
   input += synapse0x13d9960();
   input += synapse0x13d99a0();
   input += synapse0x13d9320();
   input += synapse0x13d9360();
   input += synapse0x13d9af0();
   input += synapse0x13d9b30();
   input += synapse0x13d9b70();
   input += synapse0x13d9bb0();
   input += synapse0x13d9bf0();
   input += synapse0x13d9c30();
   return input;
}

double NNfunction-NN_3_4::neuron0x13d9190() {
   double input = input0x13d9190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13d9c70() {
   double input = -0.862528;
   input += synapse0x13d9fb0();
   input += synapse0x13d9ff0();
   input += synapse0x13da030();
   input += synapse0x13da070();
   input += synapse0x13da0b0();
   input += synapse0x13da0f0();
   input += synapse0x13da130();
   input += synapse0x13da170();
   input += synapse0x13da1b0();
   input += synapse0x13da1f0();
   input += synapse0x13da230();
   input += synapse0x13da270();
   input += synapse0x13da2b0();
   input += synapse0x13da2f0();
   input += synapse0x13da330();
   input += synapse0x13da370();
   input += synapse0x13d9e00();
   input += synapse0x13d9e40();
   input += synapse0x1192d80();
   input += synapse0x1192dc0();
   input += synapse0x13c28b0();
   input += synapse0x13c28f0();
   input += synapse0x13c2930();
   input += synapse0x13d3760();
   return input;
}

double NNfunction-NN_3_4::neuron0x13d9c70() {
   double input = input0x13d9c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x1193500() {
   double input = 0.734258;
   input += synapse0x13d98c0();
   input += synapse0x13d37a0();
   input += synapse0x13d37e0();
   input += synapse0x13da4c0();
   input += synapse0x13da500();
   input += synapse0x13da540();
   input += synapse0x13da580();
   input += synapse0x13da5c0();
   input += synapse0x13da600();
   input += synapse0x13da640();
   input += synapse0x13da680();
   input += synapse0x13da6c0();
   input += synapse0x13da700();
   input += synapse0x13da740();
   input += synapse0x13da780();
   input += synapse0x13da7c0();
   input += synapse0x13d9710();
   input += synapse0x13d9750();
   input += synapse0x13da910();
   input += synapse0x13da950();
   input += synapse0x13da990();
   input += synapse0x13da9d0();
   input += synapse0x13daa10();
   input += synapse0x13daa50();
   return input;
}

double NNfunction-NN_3_4::neuron0x1193500() {
   double input = input0x1193500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13daa90() {
   double input = 0.133101;
   input += synapse0x13dadd0();
   input += synapse0x13dae10();
   input += synapse0x13dae50();
   input += synapse0x13dae90();
   input += synapse0x13daed0();
   input += synapse0x13daf10();
   input += synapse0x13daf50();
   input += synapse0x13daf90();
   input += synapse0x13dafd0();
   input += synapse0x13db010();
   input += synapse0x13db050();
   input += synapse0x13db090();
   input += synapse0x13db0d0();
   input += synapse0x13db110();
   input += synapse0x13db150();
   input += synapse0x13db190();
   input += synapse0x13dac20();
   input += synapse0x13dac60();
   input += synapse0x13db2e0();
   input += synapse0x13db320();
   input += synapse0x13db360();
   input += synapse0x13db3a0();
   input += synapse0x13db3e0();
   input += synapse0x13db420();
   return input;
}

double NNfunction-NN_3_4::neuron0x13daa90() {
   double input = input0x13daa90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13db460() {
   double input = 3.72832;
   input += synapse0x13db7a0();
   input += synapse0x13db7e0();
   input += synapse0x13db820();
   input += synapse0x13db860();
   input += synapse0x13db8a0();
   input += synapse0x13db8e0();
   input += synapse0x13db920();
   input += synapse0x13db960();
   input += synapse0x13db9a0();
   input += synapse0x11930f0();
   input += synapse0x1193130();
   input += synapse0x1193170();
   input += synapse0x11931b0();
   input += synapse0x11931f0();
   input += synapse0x1193230();
   input += synapse0x1193270();
   input += synapse0x13db5f0();
   input += synapse0x13db630();
   input += synapse0x11933c0();
   input += synapse0x1193400();
   input += synapse0x1193440();
   input += synapse0x1193480();
   input += synapse0x11934c0();
   input += synapse0x13dc1f0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13db460() {
   double input = input0x13db460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13dc230() {
   double input = 1.21106;
   input += synapse0x13dc570();
   input += synapse0x13dc5b0();
   input += synapse0x13dc5f0();
   input += synapse0x13dc630();
   input += synapse0x13dc670();
   input += synapse0x13dc6b0();
   input += synapse0x13dc6f0();
   input += synapse0x13dc730();
   input += synapse0x13dc770();
   input += synapse0x13dc7b0();
   input += synapse0x13dc7f0();
   input += synapse0x13dc830();
   input += synapse0x13dc870();
   input += synapse0x13dc8b0();
   input += synapse0x13dc8f0();
   input += synapse0x13dc930();
   input += synapse0x13dc3c0();
   input += synapse0x13dc400();
   input += synapse0x13dca80();
   input += synapse0x13dcac0();
   input += synapse0x13dcb00();
   input += synapse0x13dcb40();
   input += synapse0x13dcb80();
   input += synapse0x13dcbc0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13dc230() {
   double input = input0x13dc230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13dcc00() {
   double input = -0.029713;
   input += synapse0x13dcf40();
   input += synapse0x13dcf80();
   input += synapse0x13dcfc0();
   input += synapse0x13dd000();
   input += synapse0x13dd040();
   input += synapse0x13dd080();
   input += synapse0x13dd0c0();
   input += synapse0x13dd100();
   input += synapse0x13dd140();
   input += synapse0x13dd180();
   input += synapse0x13dd1c0();
   input += synapse0x13dd200();
   input += synapse0x13dd240();
   input += synapse0x13dd280();
   input += synapse0x13dd2c0();
   input += synapse0x13dd300();
   input += synapse0x13dcd90();
   input += synapse0x13dcdd0();
   input += synapse0x13dd450();
   input += synapse0x13dd490();
   input += synapse0x13dd4d0();
   input += synapse0x13dd510();
   input += synapse0x13dd550();
   input += synapse0x13dd590();
   return input;
}

double NNfunction-NN_3_4::neuron0x13dcc00() {
   double input = input0x13dcc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13dd5d0() {
   double input = -1.21483;
   input += synapse0x13d7070();
   input += synapse0x13d70b0();
   input += synapse0x13d70f0();
   input += synapse0x13d7130();
   input += synapse0x13ddb20();
   input += synapse0x13ddb60();
   input += synapse0x13ddba0();
   input += synapse0x13ddbe0();
   input += synapse0x13ddc20();
   input += synapse0x13ddc60();
   input += synapse0x13ddca0();
   input += synapse0x13ddce0();
   input += synapse0x13ddd20();
   input += synapse0x13ddd60();
   input += synapse0x13ddda0();
   input += synapse0x13ddde0();
   input += synapse0x13dd760();
   input += synapse0x13dd7a0();
   input += synapse0x13ddf30();
   input += synapse0x13ddf70();
   input += synapse0x13ddfb0();
   input += synapse0x13ddff0();
   input += synapse0x13de030();
   input += synapse0x13de070();
   return input;
}

double NNfunction-NN_3_4::neuron0x13dd5d0() {
   double input = input0x13dd5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13de0b0() {
   double input = 0.912877;
   input += synapse0x13de3f0();
   input += synapse0x13de430();
   input += synapse0x13de470();
   input += synapse0x13de4b0();
   input += synapse0x13de4f0();
   input += synapse0x13de530();
   input += synapse0x13de570();
   input += synapse0x13de5b0();
   input += synapse0x13de5f0();
   input += synapse0x13de630();
   input += synapse0x13de670();
   input += synapse0x13de6b0();
   input += synapse0x13de6f0();
   input += synapse0x13de730();
   input += synapse0x13de770();
   input += synapse0x13de7b0();
   input += synapse0x13de240();
   input += synapse0x13de280();
   input += synapse0x13de900();
   input += synapse0x13de940();
   input += synapse0x13de980();
   input += synapse0x13de9c0();
   input += synapse0x13dea00();
   input += synapse0x13dea40();
   return input;
}

double NNfunction-NN_3_4::neuron0x13de0b0() {
   double input = input0x13de0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13dea80() {
   double input = -3.56695;
   input += synapse0x13dedc0();
   input += synapse0x13dee00();
   input += synapse0x13dee40();
   input += synapse0x13dee80();
   input += synapse0x13deec0();
   input += synapse0x13def00();
   input += synapse0x13def40();
   input += synapse0x13def80();
   input += synapse0x13defc0();
   input += synapse0x13df000();
   input += synapse0x13df040();
   input += synapse0x13df080();
   input += synapse0x13df0c0();
   input += synapse0x13df100();
   input += synapse0x13df140();
   input += synapse0x13df180();
   input += synapse0x13dec10();
   input += synapse0x13dec50();
   input += synapse0x13db9e0();
   input += synapse0x13dba20();
   input += synapse0x13dba60();
   input += synapse0x13dbaa0();
   input += synapse0x13dbae0();
   input += synapse0x13dbb20();
   return input;
}

double NNfunction-NN_3_4::neuron0x13dea80() {
   double input = input0x13dea80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13dbb60() {
   double input = -1.25786;
   input += synapse0x13dbea0();
   input += synapse0x13dbee0();
   input += synapse0x13dbf20();
   input += synapse0x13dbf60();
   input += synapse0x13dbfa0();
   input += synapse0x13dbfe0();
   input += synapse0x13dc020();
   input += synapse0x13dc060();
   input += synapse0x13dc0a0();
   input += synapse0x13dc0e0();
   input += synapse0x13dc120();
   input += synapse0x13dc160();
   input += synapse0x13dc1a0();
   input += synapse0x13e02e0();
   input += synapse0x13e0320();
   input += synapse0x13e0360();
   input += synapse0x13dbcf0();
   input += synapse0x13dbd30();
   input += synapse0x13e04b0();
   input += synapse0x13e04f0();
   input += synapse0x13e0530();
   input += synapse0x13e0570();
   input += synapse0x13e05b0();
   input += synapse0x13e05f0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13dbb60() {
   double input = input0x13dbb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e0630() {
   double input = 1.82962;
   input += synapse0x13e0970();
   input += synapse0x13e09b0();
   input += synapse0x13e09f0();
   input += synapse0x13e0a30();
   input += synapse0x13e0a70();
   input += synapse0x13e0ab0();
   input += synapse0x13e0af0();
   input += synapse0x13e0b30();
   input += synapse0x13e0b70();
   input += synapse0x13e0bb0();
   input += synapse0x13e0bf0();
   input += synapse0x13e0c30();
   input += synapse0x13e0c70();
   input += synapse0x13e0cb0();
   input += synapse0x13e0cf0();
   input += synapse0x13e0d30();
   input += synapse0x13e07c0();
   input += synapse0x13e0800();
   input += synapse0x13e0e80();
   input += synapse0x13e0ec0();
   input += synapse0x13e0f00();
   input += synapse0x13e0f40();
   input += synapse0x13e0f80();
   input += synapse0x13e0fc0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e0630() {
   double input = input0x13e0630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e1000() {
   double input = -0.274018;
   input += synapse0x13e1340();
   input += synapse0x13e1380();
   input += synapse0x13e13c0();
   input += synapse0x13e1400();
   input += synapse0x13e1440();
   input += synapse0x13e1480();
   input += synapse0x13e14c0();
   input += synapse0x13e1500();
   input += synapse0x13e1540();
   input += synapse0x13e1580();
   input += synapse0x13e15c0();
   input += synapse0x13e1600();
   input += synapse0x13e1640();
   input += synapse0x13e1680();
   input += synapse0x13e16c0();
   input += synapse0x13e1700();
   input += synapse0x13e1190();
   input += synapse0x13e11d0();
   input += synapse0x13e1850();
   input += synapse0x13e1890();
   input += synapse0x13e18d0();
   input += synapse0x13e1910();
   input += synapse0x13e1950();
   input += synapse0x13e1990();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e1000() {
   double input = input0x13e1000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e19d0() {
   double input = 0.149196;
   input += synapse0x13e1d10();
   input += synapse0x13e1d50();
   input += synapse0x13e1d90();
   input += synapse0x13e1dd0();
   input += synapse0x13e1e10();
   input += synapse0x13e1e50();
   input += synapse0x13e1e90();
   input += synapse0x13e1ed0();
   input += synapse0x13e1f10();
   input += synapse0x13e1f50();
   input += synapse0x13e1f90();
   input += synapse0x13e1fd0();
   input += synapse0x13e2010();
   input += synapse0x13e2050();
   input += synapse0x13e2090();
   input += synapse0x13e20d0();
   input += synapse0x13e1b60();
   input += synapse0x13e1ba0();
   input += synapse0x13e2220();
   input += synapse0x13e2260();
   input += synapse0x13e22a0();
   input += synapse0x13e22e0();
   input += synapse0x13e2320();
   input += synapse0x13e2360();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e19d0() {
   double input = input0x13e19d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e23a0() {
   double input = 3.89753;
   input += synapse0x13e26e0();
   input += synapse0x13d3a40();
   input += synapse0x13d3a80();
   input += synapse0x13d3d80();
   input += synapse0x13d3dc0();
   input += synapse0x13d40c0();
   input += synapse0x13d4100();
   input += synapse0x13d4400();
   input += synapse0x13d4440();
   input += synapse0x13d4740();
   input += synapse0x13d4780();
   input += synapse0x13d4a80();
   input += synapse0x13d4ac0();
   input += synapse0x13d4dc0();
   input += synapse0x13d4e00();
   input += synapse0x13d5100();
   input += synapse0x13d5140();
   input += synapse0x13d5440();
   input += synapse0x13d5480();
   input += synapse0x13d5780();
   input += synapse0x13d57c0();
   input += synapse0x13d5ac0();
   input += synapse0x13d5b00();
   input += synapse0x13d5e00();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e23a0() {
   double input = input0x13e23a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e41b0() {
   double input = -0.554452;
   input += synapse0x13d5e40();
   input += synapse0x13d6b00();
   input += synapse0x13d6b40();
   input += synapse0x13e2530();
   input += synapse0x13e2570();
   input += synapse0x13d6e40();
   input += synapse0x13d6e80();
   input += synapse0x1184e10();
   input += synapse0x1184e50();
   input += synapse0x13d75c0();
   input += synapse0x13d7600();
   input += synapse0x13d7900();
   input += synapse0x13d7940();
   input += synapse0x13d7c40();
   input += synapse0x13d7c80();
   input += synapse0x13d7f80();
   input += synapse0x13d7fc0();
   input += synapse0x13d82c0();
   input += synapse0x13d8300();
   input += synapse0x13d8600();
   input += synapse0x13d8640();
   input += synapse0x13d6140();
   input += synapse0x13d6180();
   input += synapse0x13e4450();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e41b0() {
   double input = input0x13e41b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e4490() {
   double input = 0.479693;
   input += synapse0x13e47d0();
   input += synapse0x13e4810();
   input += synapse0x13e4850();
   input += synapse0x13e4890();
   input += synapse0x13e48d0();
   input += synapse0x13e4910();
   input += synapse0x13e4950();
   input += synapse0x13e4990();
   input += synapse0x13e49d0();
   input += synapse0x13e4a10();
   input += synapse0x13e4a50();
   input += synapse0x13e4a90();
   input += synapse0x13e4ad0();
   input += synapse0x13e4b10();
   input += synapse0x13e4b50();
   input += synapse0x13e4b90();
   input += synapse0x13e4620();
   input += synapse0x13e4660();
   input += synapse0x13e4ce0();
   input += synapse0x13e4d20();
   input += synapse0x13e4d60();
   input += synapse0x13e4da0();
   input += synapse0x13e4de0();
   input += synapse0x13e4e20();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e4490() {
   double input = input0x13e4490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e4e60() {
   double input = -1.74263;
   input += synapse0x13e51a0();
   input += synapse0x13e51e0();
   input += synapse0x13e5220();
   input += synapse0x13e5260();
   input += synapse0x13e52a0();
   input += synapse0x13e52e0();
   input += synapse0x13e5320();
   input += synapse0x13e5360();
   input += synapse0x13e53a0();
   input += synapse0x13e53e0();
   input += synapse0x13e5420();
   input += synapse0x13e5460();
   input += synapse0x13e54a0();
   input += synapse0x13e54e0();
   input += synapse0x13e5520();
   input += synapse0x13e5560();
   input += synapse0x13e4ff0();
   input += synapse0x13e5030();
   input += synapse0x13e56b0();
   input += synapse0x13e56f0();
   input += synapse0x13e5730();
   input += synapse0x13e5770();
   input += synapse0x13e57b0();
   input += synapse0x13e57f0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e4e60() {
   double input = input0x13e4e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e5830() {
   double input = 0.921394;
   input += synapse0x13e5b70();
   input += synapse0x13e5bb0();
   input += synapse0x13e5bf0();
   input += synapse0x13e5c30();
   input += synapse0x13e5c70();
   input += synapse0x13e5cb0();
   input += synapse0x13e5cf0();
   input += synapse0x13e5d30();
   input += synapse0x13e5d70();
   input += synapse0x13e5db0();
   input += synapse0x13e5df0();
   input += synapse0x13e5e30();
   input += synapse0x13e5e70();
   input += synapse0x13e5eb0();
   input += synapse0x13e5ef0();
   input += synapse0x13e5f30();
   input += synapse0x13e59c0();
   input += synapse0x13e5a00();
   input += synapse0x13e6080();
   input += synapse0x13e60c0();
   input += synapse0x13e6100();
   input += synapse0x13e6140();
   input += synapse0x13e6180();
   input += synapse0x13e61c0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e5830() {
   double input = input0x13e5830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e6200() {
   double input = -0.998241;
   input += synapse0x13e6540();
   input += synapse0x13e6580();
   input += synapse0x13e65c0();
   input += synapse0x13e6600();
   input += synapse0x13e6640();
   input += synapse0x13e6680();
   input += synapse0x13e66c0();
   input += synapse0x13e6700();
   input += synapse0x13e6740();
   input += synapse0x13e6780();
   input += synapse0x13e67c0();
   input += synapse0x13e6800();
   input += synapse0x13e6840();
   input += synapse0x13e6880();
   input += synapse0x13e68c0();
   input += synapse0x13e6900();
   input += synapse0x13e6390();
   input += synapse0x13e63d0();
   input += synapse0x13e6a50();
   input += synapse0x13e6a90();
   input += synapse0x13e6ad0();
   input += synapse0x13e6b10();
   input += synapse0x13e6b50();
   input += synapse0x13e6b90();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e6200() {
   double input = input0x13e6200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e6bd0() {
   double input = -0.715365;
   input += synapse0x13e6f10();
   input += synapse0x13e6f50();
   input += synapse0x13e6f90();
   input += synapse0x13e6fd0();
   input += synapse0x13e7010();
   input += synapse0x13e7050();
   input += synapse0x13e7090();
   input += synapse0x13e70d0();
   input += synapse0x13e7110();
   input += synapse0x13df2d0();
   input += synapse0x13df310();
   input += synapse0x13df350();
   input += synapse0x13df390();
   input += synapse0x13df3d0();
   input += synapse0x13df410();
   input += synapse0x13df450();
   input += synapse0x13e6d60();
   input += synapse0x13e6da0();
   input += synapse0x13df5a0();
   input += synapse0x13df5e0();
   input += synapse0x13df620();
   input += synapse0x13df660();
   input += synapse0x13df6a0();
   input += synapse0x13df6e0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e6bd0() {
   double input = input0x13e6bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13df720() {
   double input = -2.58917;
   input += synapse0x13dfa60();
   input += synapse0x13dfaa0();
   input += synapse0x13dfae0();
   input += synapse0x13dfb20();
   input += synapse0x13dfb60();
   input += synapse0x13dfba0();
   input += synapse0x13dfbe0();
   input += synapse0x13dfc20();
   input += synapse0x13dfc60();
   input += synapse0x13dfca0();
   input += synapse0x13dfce0();
   input += synapse0x13dfd20();
   input += synapse0x13dfd60();
   input += synapse0x13dfda0();
   input += synapse0x13dfde0();
   input += synapse0x13dfe20();
   input += synapse0x13df8b0();
   input += synapse0x13df8f0();
   input += synapse0x13dff70();
   input += synapse0x13dffb0();
   input += synapse0x13dfff0();
   input += synapse0x13e0030();
   input += synapse0x13e0070();
   input += synapse0x13e00b0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13df720() {
   double input = input0x13df720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e00f0() {
   double input = 1.349;
   input += synapse0x13e0280();
   input += synapse0x13e9310();
   input += synapse0x13e9350();
   input += synapse0x13e9390();
   input += synapse0x13e93d0();
   input += synapse0x13e9410();
   input += synapse0x13e9450();
   input += synapse0x13e9490();
   input += synapse0x13e94d0();
   input += synapse0x13e9510();
   input += synapse0x13e9550();
   input += synapse0x13e9590();
   input += synapse0x13e95d0();
   input += synapse0x13e9610();
   input += synapse0x13e9650();
   input += synapse0x13e9690();
   input += synapse0x13e9160();
   input += synapse0x13e91a0();
   input += synapse0x13e97e0();
   input += synapse0x13e9820();
   input += synapse0x13e9860();
   input += synapse0x13e98a0();
   input += synapse0x13e98e0();
   input += synapse0x13e9920();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e00f0() {
   double input = input0x13e00f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e9960() {
   double input = -0.17389;
   input += synapse0x13e9ca0();
   input += synapse0x13e9ce0();
   input += synapse0x13e9d20();
   input += synapse0x13e9d60();
   input += synapse0x13e9da0();
   input += synapse0x13e9de0();
   input += synapse0x13e9e20();
   input += synapse0x13e9e60();
   input += synapse0x13e9ea0();
   input += synapse0x13e9ee0();
   input += synapse0x13e9f20();
   input += synapse0x13e9f60();
   input += synapse0x13e9fa0();
   input += synapse0x13e9fe0();
   input += synapse0x13ea020();
   input += synapse0x13ea060();
   input += synapse0x13e9af0();
   input += synapse0x13e9b30();
   input += synapse0x13ea1b0();
   input += synapse0x13ea1f0();
   input += synapse0x13ea230();
   input += synapse0x13ea270();
   input += synapse0x13ea2b0();
   input += synapse0x13ea2f0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e9960() {
   double input = input0x13e9960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13ea330() {
   double input = -0.0493395;
   input += synapse0x13ea670();
   input += synapse0x13ea6b0();
   input += synapse0x13ea6f0();
   input += synapse0x13ea730();
   input += synapse0x13ea770();
   input += synapse0x13ea7b0();
   input += synapse0x13ea7f0();
   input += synapse0x13ea830();
   input += synapse0x13ea870();
   input += synapse0x13ea8b0();
   input += synapse0x13ea8f0();
   input += synapse0x13ea930();
   input += synapse0x13ea970();
   input += synapse0x13ea9b0();
   input += synapse0x13ea9f0();
   input += synapse0x13eaa30();
   input += synapse0x13ea4c0();
   input += synapse0x13ea500();
   input += synapse0x13eab80();
   input += synapse0x13eabc0();
   input += synapse0x13eac00();
   input += synapse0x13eac40();
   input += synapse0x13eac80();
   input += synapse0x13eacc0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13ea330() {
   double input = input0x13ea330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13ead00() {
   double input = 0.0699734;
   input += synapse0x13eb040();
   input += synapse0x13eb080();
   input += synapse0x13eb0c0();
   input += synapse0x13eb100();
   input += synapse0x13eb140();
   input += synapse0x13eb180();
   input += synapse0x13eb1c0();
   input += synapse0x13eb200();
   input += synapse0x13eb240();
   input += synapse0x13eb280();
   input += synapse0x13eb2c0();
   input += synapse0x13eb300();
   input += synapse0x13eb340();
   input += synapse0x13eb380();
   input += synapse0x13eb3c0();
   input += synapse0x13eb400();
   input += synapse0x13eae90();
   input += synapse0x13eaed0();
   input += synapse0x13eb550();
   input += synapse0x13eb590();
   input += synapse0x13eb5d0();
   input += synapse0x13eb610();
   input += synapse0x13eb650();
   input += synapse0x13eb690();
   return input;
}

double NNfunction-NN_3_4::neuron0x13ead00() {
   double input = input0x13ead00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13eb6d0() {
   double input = 0.811765;
   input += synapse0x13eba10();
   input += synapse0x13eba50();
   input += synapse0x13eba90();
   input += synapse0x13ebad0();
   input += synapse0x13ebb10();
   input += synapse0x13ebb50();
   input += synapse0x13ebb90();
   input += synapse0x13ebbd0();
   input += synapse0x13ebc10();
   input += synapse0x13ebc50();
   input += synapse0x13ebc90();
   input += synapse0x13ebcd0();
   input += synapse0x13ebd10();
   input += synapse0x13ebd50();
   input += synapse0x13ebd90();
   input += synapse0x13ebdd0();
   input += synapse0x13eb860();
   input += synapse0x13eb8a0();
   input += synapse0x13ebf20();
   input += synapse0x13ebf60();
   input += synapse0x13ebfa0();
   input += synapse0x13ebfe0();
   input += synapse0x13ec020();
   input += synapse0x13ec060();
   return input;
}

double NNfunction-NN_3_4::neuron0x13eb6d0() {
   double input = input0x13eb6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13ec0a0() {
   double input = -0.0593789;
   input += synapse0x13ec3e0();
   input += synapse0x13ec420();
   input += synapse0x13ec460();
   input += synapse0x13ec4a0();
   input += synapse0x13ec4e0();
   input += synapse0x13ec520();
   input += synapse0x13ec560();
   input += synapse0x13ec5a0();
   input += synapse0x13ec5e0();
   input += synapse0x13ec620();
   input += synapse0x13ec660();
   input += synapse0x13ec6a0();
   input += synapse0x13ec6e0();
   input += synapse0x13ec720();
   input += synapse0x13ec760();
   input += synapse0x13ec7a0();
   input += synapse0x13ec230();
   input += synapse0x13ec270();
   input += synapse0x13ec8f0();
   input += synapse0x13ec930();
   input += synapse0x13ec970();
   input += synapse0x13ec9b0();
   input += synapse0x13ec9f0();
   input += synapse0x13eca30();
   return input;
}

double NNfunction-NN_3_4::neuron0x13ec0a0() {
   double input = input0x13ec0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13eca70() {
   double input = -0.381336;
   input += synapse0x13ecdb0();
   input += synapse0x13ecdf0();
   input += synapse0x13ece30();
   input += synapse0x13ece70();
   input += synapse0x13eceb0();
   input += synapse0x13ecef0();
   input += synapse0x13ecf30();
   input += synapse0x13ecf70();
   input += synapse0x13ecfb0();
   input += synapse0x13ecff0();
   input += synapse0x13ed030();
   input += synapse0x13ed070();
   input += synapse0x13ed0b0();
   input += synapse0x13ed0f0();
   input += synapse0x13ed130();
   input += synapse0x13ed170();
   input += synapse0x13ecc00();
   input += synapse0x13ecc40();
   input += synapse0x13ed2c0();
   input += synapse0x13ed300();
   input += synapse0x13ed340();
   input += synapse0x13ed380();
   input += synapse0x13ed3c0();
   input += synapse0x13ed400();
   return input;
}

double NNfunction-NN_3_4::neuron0x13eca70() {
   double input = input0x13eca70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13ed440() {
   double input = -2.19401;
   input += synapse0x13ed780();
   input += synapse0x13ed7c0();
   input += synapse0x13ed800();
   input += synapse0x13ed840();
   input += synapse0x13ed880();
   input += synapse0x13ed8c0();
   input += synapse0x13ed900();
   input += synapse0x13ed940();
   input += synapse0x13ed980();
   input += synapse0x13ed9c0();
   input += synapse0x13eda00();
   input += synapse0x13eda40();
   input += synapse0x13eda80();
   input += synapse0x13edac0();
   input += synapse0x13edb00();
   input += synapse0x13edb40();
   input += synapse0x13ed5d0();
   input += synapse0x13ed610();
   input += synapse0x13edc90();
   input += synapse0x13edcd0();
   input += synapse0x13edd10();
   input += synapse0x13edd50();
   input += synapse0x13edd90();
   input += synapse0x13eddd0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13ed440() {
   double input = input0x13ed440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13ede10() {
   double input = -0.913265;
   input += synapse0x13ee150();
   input += synapse0x13e2720();
   input += synapse0x13e2760();
   input += synapse0x13e27a0();
   input += synapse0x13e29f0();
   input += synapse0x13e2a30();
   input += synapse0x13e2a70();
   input += synapse0x13e2cc0();
   input += synapse0x13e2d00();
   input += synapse0x13e2f50();
   input += synapse0x13e2f90();
   input += synapse0x13e2fd0();
   input += synapse0x13e3220();
   input += synapse0x13e3260();
   input += synapse0x13e34b0();
   input += synapse0x13e34f0();
   input += synapse0x13edfa0();
   input += synapse0x13edfe0();
   input += synapse0x13e3640();
   input += synapse0x13e3b50();
   input += synapse0x13e3b90();
   input += synapse0x13e3bd0();
   input += synapse0x13e3e20();
   input += synapse0x13e3e60();
   return input;
}

double NNfunction-NN_3_4::neuron0x13ede10() {
   double input = input0x13ede10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e3ea0() {
   double input = -1.47098;
   input += synapse0x13e3710();
   input += synapse0x13e3750();
   input += synapse0x13e3790();
   input += synapse0x13e37d0();
   input += synapse0x13e4150();
   input += synapse0x13f04a0();
   input += synapse0x13f04e0();
   input += synapse0x13f0520();
   input += synapse0x13f0560();
   input += synapse0x13f05a0();
   input += synapse0x13f05e0();
   input += synapse0x13f0620();
   input += synapse0x13f0660();
   input += synapse0x13f06a0();
   input += synapse0x13f06e0();
   input += synapse0x13f0720();
   input += synapse0x13e4030();
   input += synapse0x13e4070();
   input += synapse0x13f0870();
   input += synapse0x13f08b0();
   input += synapse0x13f08f0();
   input += synapse0x13f0930();
   input += synapse0x13f0970();
   input += synapse0x13f09b0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e3ea0() {
   double input = input0x13e3ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f09f0() {
   double input = -2.25534;
   input += synapse0x13f0d30();
   input += synapse0x13f0d70();
   input += synapse0x13f0db0();
   input += synapse0x13f0df0();
   input += synapse0x13f0e30();
   input += synapse0x13f0e70();
   input += synapse0x13f0eb0();
   input += synapse0x13f0ef0();
   input += synapse0x13f0f30();
   input += synapse0x13f0f70();
   input += synapse0x13f0fb0();
   input += synapse0x13f0ff0();
   input += synapse0x13f1030();
   input += synapse0x13f1070();
   input += synapse0x13f10b0();
   input += synapse0x13f10f0();
   input += synapse0x13f0b80();
   input += synapse0x13f0bc0();
   input += synapse0x13f1240();
   input += synapse0x13f1280();
   input += synapse0x13f12c0();
   input += synapse0x13f1300();
   input += synapse0x13f1340();
   input += synapse0x13f1380();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f09f0() {
   double input = input0x13f09f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f13c0() {
   double input = -2.37951;
   input += synapse0x13f1700();
   input += synapse0x13f1740();
   input += synapse0x13f1780();
   input += synapse0x13f17c0();
   input += synapse0x13f1800();
   input += synapse0x13f1840();
   input += synapse0x13f1880();
   input += synapse0x13f18c0();
   input += synapse0x13f1900();
   input += synapse0x13f1940();
   input += synapse0x13f1980();
   input += synapse0x13f19c0();
   input += synapse0x13f1a00();
   input += synapse0x13f1a40();
   input += synapse0x13f1a80();
   input += synapse0x13f1ac0();
   input += synapse0x13f1550();
   input += synapse0x13f1590();
   input += synapse0x13f1c10();
   input += synapse0x13f1c50();
   input += synapse0x13f1c90();
   input += synapse0x13f1cd0();
   input += synapse0x13f1d10();
   input += synapse0x13f1d50();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f13c0() {
   double input = input0x13f13c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f1d90() {
   double input = -0.0830072;
   input += synapse0x13f20d0();
   input += synapse0x13f2110();
   input += synapse0x13f2150();
   input += synapse0x13f2190();
   input += synapse0x13f21d0();
   input += synapse0x13f2210();
   input += synapse0x13f2250();
   input += synapse0x13f2290();
   input += synapse0x13f22d0();
   input += synapse0x13f2310();
   input += synapse0x13f2350();
   input += synapse0x13f2390();
   input += synapse0x13f23d0();
   input += synapse0x13f2410();
   input += synapse0x13f2450();
   input += synapse0x13f2490();
   input += synapse0x13f1f20();
   input += synapse0x13f1f60();
   input += synapse0x13f25e0();
   input += synapse0x13f2620();
   input += synapse0x13f2660();
   input += synapse0x13f26a0();
   input += synapse0x13f26e0();
   input += synapse0x13f2720();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f1d90() {
   double input = input0x13f1d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f2760() {
   double input = -2.96702;
   input += synapse0x13f2aa0();
   input += synapse0x13f2ae0();
   input += synapse0x13f2b20();
   input += synapse0x13f2b60();
   input += synapse0x13f2ba0();
   input += synapse0x13f2be0();
   input += synapse0x13f2c20();
   input += synapse0x13f2c60();
   input += synapse0x13f2ca0();
   input += synapse0x13f2ce0();
   input += synapse0x13f2d20();
   input += synapse0x13f2d60();
   input += synapse0x13f2da0();
   input += synapse0x13f2de0();
   input += synapse0x13f2e20();
   input += synapse0x13f2e60();
   input += synapse0x13f28f0();
   input += synapse0x13f2930();
   input += synapse0x13f2fb0();
   input += synapse0x13f2ff0();
   input += synapse0x13f3030();
   input += synapse0x13f3070();
   input += synapse0x13f30b0();
   input += synapse0x13f30f0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f2760() {
   double input = input0x13f2760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f3130() {
   double input = -3.02883;
   input += synapse0x13f3470();
   input += synapse0x13f34b0();
   input += synapse0x13f34f0();
   input += synapse0x13f3530();
   input += synapse0x13f3570();
   input += synapse0x13f35b0();
   input += synapse0x13f35f0();
   input += synapse0x13f3630();
   input += synapse0x13f3670();
   input += synapse0x13f36b0();
   input += synapse0x13f36f0();
   input += synapse0x13f3730();
   input += synapse0x13f3770();
   input += synapse0x13f37b0();
   input += synapse0x13f37f0();
   input += synapse0x13f3830();
   input += synapse0x13f32c0();
   input += synapse0x13f3300();
   input += synapse0x13f3980();
   input += synapse0x13f39c0();
   input += synapse0x13f3a00();
   input += synapse0x13f3a40();
   input += synapse0x13f3a80();
   input += synapse0x13f3ac0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f3130() {
   double input = input0x13f3130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f3b00() {
   double input = -2.70506;
   input += synapse0x13f3e40();
   input += synapse0x13f3e80();
   input += synapse0x13f3ec0();
   input += synapse0x13f3f00();
   input += synapse0x13f3f40();
   input += synapse0x13f3f80();
   input += synapse0x13f3fc0();
   input += synapse0x13f4000();
   input += synapse0x13f4040();
   input += synapse0x13f4080();
   input += synapse0x13f40c0();
   input += synapse0x13f4100();
   input += synapse0x13f4140();
   input += synapse0x13f4180();
   input += synapse0x13f41c0();
   input += synapse0x13f4200();
   input += synapse0x13f3c90();
   input += synapse0x13f3cd0();
   input += synapse0x13f4350();
   input += synapse0x13f4390();
   input += synapse0x13f43d0();
   input += synapse0x13f4410();
   input += synapse0x13f4450();
   input += synapse0x13f4490();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f3b00() {
   double input = input0x13f3b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f44d0() {
   double input = -0.00274359;
   input += synapse0x13f4810();
   input += synapse0x13f4850();
   input += synapse0x13f4890();
   input += synapse0x13f48d0();
   input += synapse0x13f4910();
   input += synapse0x13f4950();
   input += synapse0x13f4990();
   input += synapse0x13f49d0();
   input += synapse0x13f4a10();
   input += synapse0x13f4a50();
   input += synapse0x13f4a90();
   input += synapse0x13f4ad0();
   input += synapse0x13f4b10();
   input += synapse0x13f4b50();
   input += synapse0x13f4b90();
   input += synapse0x13f4bd0();
   input += synapse0x13f4660();
   input += synapse0x13f46a0();
   input += synapse0x13f4d20();
   input += synapse0x13f4d60();
   input += synapse0x13f4da0();
   input += synapse0x13f4de0();
   input += synapse0x13f4e20();
   input += synapse0x13f4e60();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f44d0() {
   double input = input0x13f44d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f4ea0() {
   double input = -0.865592;
   input += synapse0x13dd910();
   input += synapse0x13dd950();
   input += synapse0x13dd990();
   input += synapse0x13dd9d0();
   input += synapse0x13dda10();
   input += synapse0x13dda50();
   input += synapse0x13dda90();
   input += synapse0x13ddad0();
   input += synapse0x13f55f0();
   input += synapse0x13f5630();
   input += synapse0x13f5670();
   input += synapse0x13f56b0();
   input += synapse0x13f56f0();
   input += synapse0x13f5730();
   input += synapse0x13f5770();
   input += synapse0x13f57b0();
   input += synapse0x13f5030();
   input += synapse0x13f5070();
   input += synapse0x13f5900();
   input += synapse0x13f5940();
   input += synapse0x13f5980();
   input += synapse0x13f59c0();
   input += synapse0x13f5a00();
   input += synapse0x13f5a40();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f4ea0() {
   double input = input0x13f4ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f5a80() {
   double input = 1.42796;
   input += synapse0x13f5dc0();
   input += synapse0x13f5e00();
   input += synapse0x13f5e40();
   input += synapse0x13f5e80();
   input += synapse0x13f5ec0();
   input += synapse0x13f5f00();
   input += synapse0x13f5f40();
   input += synapse0x13f5f80();
   input += synapse0x13f5fc0();
   input += synapse0x13f6000();
   input += synapse0x13f6040();
   input += synapse0x13f6080();
   input += synapse0x13f60c0();
   input += synapse0x13f6100();
   input += synapse0x13f6140();
   input += synapse0x13f6180();
   input += synapse0x13f5c10();
   input += synapse0x13f5c50();
   input += synapse0x13f62d0();
   input += synapse0x13f6310();
   input += synapse0x13f6350();
   input += synapse0x13f6390();
   input += synapse0x13f63d0();
   input += synapse0x13f6410();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f5a80() {
   double input = input0x13f5a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13f6450() {
   double input = -0.096462;
   input += synapse0x13f6790();
   input += synapse0x13f67d0();
   input += synapse0x13f6810();
   input += synapse0x13f6850();
   input += synapse0x13f6890();
   input += synapse0x13f68d0();
   input += synapse0x13f6910();
   input += synapse0x13f6950();
   input += synapse0x13f6990();
   input += synapse0x13f69d0();
   input += synapse0x13f6a10();
   input += synapse0x13f6a50();
   input += synapse0x13f6a90();
   input += synapse0x13f6ad0();
   input += synapse0x13f6b10();
   input += synapse0x13f6b50();
   input += synapse0x13f65e0();
   input += synapse0x13f6620();
   input += synapse0x13e7150();
   input += synapse0x13e7190();
   input += synapse0x13e71d0();
   input += synapse0x13e7210();
   input += synapse0x13e7250();
   input += synapse0x13e7290();
   return input;
}

double NNfunction-NN_3_4::neuron0x13f6450() {
   double input = input0x13f6450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e72d0() {
   double input = -1.54128;
   input += synapse0x13e7610();
   input += synapse0x13e7650();
   input += synapse0x13e7690();
   input += synapse0x13e76d0();
   input += synapse0x13e7710();
   input += synapse0x13e7750();
   input += synapse0x13e7790();
   input += synapse0x13e77d0();
   input += synapse0x13e7810();
   input += synapse0x13e7850();
   input += synapse0x13e7890();
   input += synapse0x13e78d0();
   input += synapse0x13e7910();
   input += synapse0x13e7950();
   input += synapse0x13e7990();
   input += synapse0x13e79d0();
   input += synapse0x13e7460();
   input += synapse0x13e74a0();
   input += synapse0x13e7b20();
   input += synapse0x13e7b60();
   input += synapse0x13e7ba0();
   input += synapse0x13e7be0();
   input += synapse0x13e7c20();
   input += synapse0x13e7c60();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e72d0() {
   double input = input0x13e72d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e7ca0() {
   double input = 6.13071;
   input += synapse0x13e7fe0();
   input += synapse0x13e8020();
   input += synapse0x13e8060();
   input += synapse0x13e80a0();
   input += synapse0x13e80e0();
   input += synapse0x13e8120();
   input += synapse0x13e8160();
   input += synapse0x13e81a0();
   input += synapse0x13e81e0();
   input += synapse0x13e8220();
   input += synapse0x13e8260();
   input += synapse0x13e82a0();
   input += synapse0x13e82e0();
   input += synapse0x13e8320();
   input += synapse0x13e8360();
   input += synapse0x13e83a0();
   input += synapse0x13e7e30();
   input += synapse0x13e7e70();
   input += synapse0x13e84f0();
   input += synapse0x13e8530();
   input += synapse0x13e8570();
   input += synapse0x13e85b0();
   input += synapse0x13e85f0();
   input += synapse0x13e8630();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e7ca0() {
   double input = input0x13e7ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13e8670() {
   double input = 0.100495;
   input += synapse0x13e89b0();
   input += synapse0x13e89f0();
   input += synapse0x13e8a30();
   input += synapse0x13e8a70();
   input += synapse0x13e8ab0();
   input += synapse0x13e8af0();
   input += synapse0x13e8b30();
   input += synapse0x13e8b70();
   input += synapse0x13e8bb0();
   input += synapse0x13e8bf0();
   input += synapse0x13e8c30();
   input += synapse0x13e8c70();
   input += synapse0x13e8cb0();
   input += synapse0x13e8cf0();
   input += synapse0x13e8d30();
   input += synapse0x13e8d70();
   input += synapse0x13e8800();
   input += synapse0x13e8840();
   input += synapse0x13e8ec0();
   input += synapse0x13e8f00();
   input += synapse0x13e8f40();
   input += synapse0x13e8f80();
   input += synapse0x13e8fc0();
   input += synapse0x13e9000();
   return input;
}

double NNfunction-NN_3_4::neuron0x13e8670() {
   double input = input0x13e8670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13facb0() {
   double input = -1.03659;
   input += synapse0x13faed0();
   input += synapse0x13faf10();
   input += synapse0x13faf50();
   input += synapse0x13faf90();
   input += synapse0x13fafd0();
   input += synapse0x13fb010();
   input += synapse0x13fb050();
   input += synapse0x13fb090();
   input += synapse0x13fb0d0();
   input += synapse0x13fb110();
   input += synapse0x13fb150();
   input += synapse0x13fb190();
   input += synapse0x13fb1d0();
   input += synapse0x13fb210();
   input += synapse0x13fb250();
   input += synapse0x13fb290();
   input += synapse0x13e9040();
   input += synapse0x13e9080();
   input += synapse0x13fb3e0();
   input += synapse0x13fb420();
   input += synapse0x13fb460();
   input += synapse0x13fb4a0();
   input += synapse0x13fb4e0();
   input += synapse0x13fb520();
   return input;
}

double NNfunction-NN_3_4::neuron0x13facb0() {
   double input = input0x13facb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13fb560() {
   double input = -1.05224;
   input += synapse0x13fb8a0();
   input += synapse0x13fb8e0();
   input += synapse0x13fb920();
   input += synapse0x13fb960();
   input += synapse0x13fb9a0();
   input += synapse0x13fb9e0();
   input += synapse0x13fba20();
   input += synapse0x13fba60();
   input += synapse0x13fbaa0();
   input += synapse0x13fbae0();
   input += synapse0x13fbb20();
   input += synapse0x13fbb60();
   input += synapse0x13fbba0();
   input += synapse0x13fbbe0();
   input += synapse0x13fbc20();
   input += synapse0x13fbc60();
   input += synapse0x13fb6f0();
   input += synapse0x13fb730();
   input += synapse0x13fbdb0();
   input += synapse0x13fbdf0();
   input += synapse0x13fbe30();
   input += synapse0x13fbe70();
   input += synapse0x13fbeb0();
   input += synapse0x13fbef0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13fb560() {
   double input = input0x13fb560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13fbf30() {
   double input = -1.89791;
   input += synapse0x13fc270();
   input += synapse0x13fc2b0();
   input += synapse0x13fc2f0();
   input += synapse0x13fc330();
   input += synapse0x13fc370();
   input += synapse0x13fc3b0();
   input += synapse0x13fc3f0();
   input += synapse0x13fc430();
   input += synapse0x13fc470();
   input += synapse0x13fc4b0();
   input += synapse0x13fc4f0();
   input += synapse0x13fc530();
   input += synapse0x13fc570();
   input += synapse0x13fc5b0();
   input += synapse0x13fc5f0();
   input += synapse0x13fc630();
   input += synapse0x13fc0c0();
   input += synapse0x13fc100();
   input += synapse0x13fc780();
   input += synapse0x13fc7c0();
   input += synapse0x13fc800();
   input += synapse0x13fc840();
   input += synapse0x13fc880();
   input += synapse0x13fc8c0();
   return input;
}

double NNfunction-NN_3_4::neuron0x13fbf30() {
   double input = input0x13fbf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x13fc900() {
   double input = 1.5325;
   input += synapse0x13fcc40();
   input += synapse0x13fcc80();
   input += synapse0x13fccc0();
   input += synapse0x13fcd00();
   input += synapse0x13fcd40();
   input += synapse0x13fcd80();
   input += synapse0x13fcdc0();
   input += synapse0x13fce00();
   input += synapse0x13fce40();
   input += synapse0x13fce80();
   input += synapse0x13fcec0();
   input += synapse0x13fcf00();
   input += synapse0x13fcf40();
   input += synapse0x13fcf80();
   input += synapse0x13fcfc0();
   input += synapse0x13fd000();
   input += synapse0x13fca90();
   input += synapse0x13fcad0();
   input += synapse0x13fd150();
   input += synapse0x13fd190();
   input += synapse0x13fd1d0();
   input += synapse0x13fd210();
   input += synapse0x13fd250();
   input += synapse0x13fd290();
   return input;
}

double NNfunction-NN_3_4::neuron0x13fc900() {
   double input = input0x13fc900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x1403b00() {
   double input = -0.229269;
   input += synapse0x13d9830();
   input += synapse0x13d9870();
   input += synapse0x13dad40();
   input += synapse0x13dad80();
   input += synapse0x13db710();
   input += synapse0x13db750();
   input += synapse0x13dc4e0();
   input += synapse0x13dc520();
   input += synapse0x13dceb0();
   input += synapse0x13dcef0();
   input += synapse0x13dd880();
   input += synapse0x13dd8c0();
   input += synapse0x13de360();
   input += synapse0x13de3a0();
   input += synapse0x13ded30();
   input += synapse0x13ded70();
   input += synapse0x13dbe10();
   input += synapse0x13dbe50();
   input += synapse0x13e08e0();
   input += synapse0x13e0920();
   input += synapse0x13e12b0();
   input += synapse0x13e12f0();
   input += synapse0x13e1c80();
   input += synapse0x13e1cc0();
   input += synapse0x13e2650();
   input += synapse0x13e2690();
   input += synapse0x13d67c0();
   input += synapse0x13d6800();
   input += synapse0x13e4740();
   input += synapse0x13e4780();
   input += synapse0x13e5110();
   input += synapse0x13e5150();
   input += synapse0x13e5ae0();
   input += synapse0x13e5b20();
   input += synapse0x13e64b0();
   input += synapse0x13e64f0();
   input += synapse0x13e6e80();
   input += synapse0x13e6ec0();
   input += synapse0x13df9d0();
   input += synapse0x13dfa10();
   input += synapse0x13e9280();
   input += synapse0x13e92c0();
   input += synapse0x13e9c10();
   input += synapse0x13e9c50();
   input += synapse0x13ea5e0();
   input += synapse0x13ea620();
   input += synapse0x13eafb0();
   input += synapse0x13eaff0();
   input += synapse0x13eb980();
   input += synapse0x13eb9c0();
   return input;
}

double NNfunction-NN_3_4::neuron0x1403b00() {
   double input = input0x1403b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x1403ea0() {
   double input = 0.0911139;
   input += synapse0x13ee0c0();
   input += synapse0x13ee100();
   input += synapse0x13e3680();
   input += synapse0x13e36c0();
   input += synapse0x13f0ca0();
   input += synapse0x13f0ce0();
   input += synapse0x13f1670();
   input += synapse0x13f16b0();
   input += synapse0x13f2040();
   input += synapse0x13f2080();
   input += synapse0x13f2a10();
   input += synapse0x13f2a50();
   input += synapse0x13f33e0();
   input += synapse0x13f3420();
   input += synapse0x13f3db0();
   input += synapse0x13f3df0();
   input += synapse0x13f4780();
   input += synapse0x13f47c0();
   input += synapse0x13f5150();
   input += synapse0x13f5190();
   input += synapse0x13f5d30();
   input += synapse0x13f5d70();
   input += synapse0x13f6700();
   input += synapse0x13f6740();
   input += synapse0x13e7580();
   input += synapse0x13e75c0();
   input += synapse0x13e7f50();
   input += synapse0x13e7f90();
   input += synapse0x13e8920();
   input += synapse0x13e8960();
   input += synapse0x13fae40();
   input += synapse0x13fae80();
   input += synapse0x13fb810();
   input += synapse0x13fb850();
   input += synapse0x13fc1e0();
   input += synapse0x13fc220();
   input += synapse0x13fcbb0();
   input += synapse0x13fcbf0();
   input += synapse0x13d8aa0();
   input += synapse0x13d8ae0();
   input += synapse0x13ec350();
   input += synapse0x13ec390();
   input += synapse0x13fd2d0();
   input += synapse0x13fd310();
   input += synapse0x13fd350();
   input += synapse0x13fd390();
   input += synapse0x1404240();
   input += synapse0x1404280();
   input += synapse0x14042c0();
   input += synapse0x1404300();
   return input;
}

double NNfunction-NN_3_4::neuron0x1403ea0() {
   double input = input0x1403ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x1404340() {
   double input = 0.731323;
   input += synapse0x1404680();
   input += synapse0x14046c0();
   input += synapse0x1404700();
   input += synapse0x1404740();
   input += synapse0x1404780();
   input += synapse0x14047c0();
   input += synapse0x1404800();
   input += synapse0x1404840();
   input += synapse0x1404880();
   input += synapse0x14048c0();
   input += synapse0x1404900();
   input += synapse0x1404940();
   input += synapse0x1404980();
   input += synapse0x14049c0();
   input += synapse0x1404a00();
   input += synapse0x1404a40();
   input += synapse0x14044d0();
   input += synapse0x1404510();
   input += synapse0x1404b90();
   input += synapse0x1404bd0();
   input += synapse0x1404c10();
   input += synapse0x1404c50();
   input += synapse0x1404c90();
   input += synapse0x1404cd0();
   input += synapse0x1404d10();
   input += synapse0x1404d50();
   input += synapse0x1404d90();
   input += synapse0x1404dd0();
   input += synapse0x1404e10();
   input += synapse0x1404e50();
   input += synapse0x1404e90();
   input += synapse0x1404ed0();
   input += synapse0x1404a80();
   input += synapse0x1404ac0();
   input += synapse0x1404b00();
   input += synapse0x1404b40();
   input += synapse0x1405120();
   input += synapse0x1405160();
   input += synapse0x14051a0();
   input += synapse0x14051e0();
   input += synapse0x1405220();
   input += synapse0x1405260();
   input += synapse0x14052a0();
   input += synapse0x14052e0();
   input += synapse0x1405320();
   input += synapse0x1405360();
   input += synapse0x14053a0();
   input += synapse0x14053e0();
   input += synapse0x1405420();
   input += synapse0x1405460();
   return input;
}

double NNfunction-NN_3_4::neuron0x1404340() {
   double input = input0x1404340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x14054a0() {
   double input = 0.616616;
   input += synapse0x14057e0();
   input += synapse0x1405820();
   input += synapse0x1405860();
   input += synapse0x14058a0();
   input += synapse0x14058e0();
   input += synapse0x1405920();
   input += synapse0x1405960();
   input += synapse0x14059a0();
   input += synapse0x14059e0();
   input += synapse0x1405a20();
   input += synapse0x1405a60();
   input += synapse0x1405aa0();
   input += synapse0x1405ae0();
   input += synapse0x1405b20();
   input += synapse0x1405b60();
   input += synapse0x1405ba0();
   input += synapse0x1405630();
   input += synapse0x1405670();
   input += synapse0x1405cf0();
   input += synapse0x1405d30();
   input += synapse0x1405d70();
   input += synapse0x1405db0();
   input += synapse0x1405df0();
   input += synapse0x1405e30();
   input += synapse0x1405e70();
   input += synapse0x1405eb0();
   input += synapse0x1405ef0();
   input += synapse0x1405f30();
   input += synapse0x1405f70();
   input += synapse0x1405fb0();
   input += synapse0x1405ff0();
   input += synapse0x1406030();
   input += synapse0x1405be0();
   input += synapse0x1405c20();
   input += synapse0x1405c60();
   input += synapse0x1405ca0();
   input += synapse0x1406280();
   input += synapse0x14062c0();
   input += synapse0x1406300();
   input += synapse0x1406340();
   input += synapse0x1406380();
   input += synapse0x14063c0();
   input += synapse0x1406400();
   input += synapse0x1406440();
   input += synapse0x1406480();
   input += synapse0x14064c0();
   input += synapse0x1406500();
   input += synapse0x1406540();
   input += synapse0x1406580();
   input += synapse0x14065c0();
   return input;
}

double NNfunction-NN_3_4::neuron0x14054a0() {
   double input = input0x14054a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x1406600() {
   double input = -0.0939681;
   input += synapse0x1406940();
   input += synapse0x1406980();
   input += synapse0x14069c0();
   input += synapse0x1406a00();
   input += synapse0x1406a40();
   input += synapse0x1406a80();
   input += synapse0x1406ac0();
   input += synapse0x1406b00();
   input += synapse0x1406b40();
   input += synapse0x1406b80();
   input += synapse0x1406bc0();
   input += synapse0x1406c00();
   input += synapse0x1406c40();
   input += synapse0x1406c80();
   input += synapse0x1406cc0();
   input += synapse0x1406d00();
   input += synapse0x1406790();
   input += synapse0x14067d0();
   input += synapse0x1406e50();
   input += synapse0x1406e90();
   input += synapse0x1406ed0();
   input += synapse0x1406f10();
   input += synapse0x1406f50();
   input += synapse0x1406f90();
   input += synapse0x1406fd0();
   input += synapse0x1407010();
   input += synapse0x1407050();
   input += synapse0x1407090();
   input += synapse0x14070d0();
   input += synapse0x1407110();
   input += synapse0x1407150();
   input += synapse0x1407190();
   input += synapse0x1406d40();
   input += synapse0x1406d80();
   input += synapse0x1406dc0();
   input += synapse0x1406e00();
   input += synapse0x14073e0();
   input += synapse0x1407420();
   input += synapse0x1407460();
   input += synapse0x14074a0();
   input += synapse0x14074e0();
   input += synapse0x1407520();
   input += synapse0x1407560();
   input += synapse0x14075a0();
   input += synapse0x14075e0();
   input += synapse0x1407620();
   input += synapse0x1407660();
   input += synapse0x14076a0();
   input += synapse0x14076e0();
   input += synapse0x1407720();
   return input;
}

double NNfunction-NN_3_4::neuron0x1406600() {
   double input = input0x1406600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_4::input0x1407760() {
   double input = 6.55081;
   input += synapse0x13d8840();
   input += synapse0x1407980();
   input += synapse0x14079c0();
   input += synapse0x1407a00();
   input += synapse0x1407a40();
   return input;
}

double NNfunction-NN_3_4::neuron0x1407760() {
   double input = input0x1407760();
   return (input * 1)+0;
}

double NNfunction-NN_3_4::synapse0x1193690() {
   return (neuron0x13d3820()*0.0183676);
}

double NNfunction-NN_3_4::synapse0x13d36e0() {
   return (neuron0x13d3b60()*-1.87721);
}

double NNfunction-NN_3_4::synapse0x13d3720() {
   return (neuron0x13d3ea0()*1.12066);
}

double NNfunction-NN_3_4::synapse0x13d8b30() {
   return (neuron0x13d41e0()*-0.0225269);
}

double NNfunction-NN_3_4::synapse0x13d8b70() {
   return (neuron0x13d4520()*-0.00908292);
}

double NNfunction-NN_3_4::synapse0x13d8bb0() {
   return (neuron0x13d4860()*0.0399394);
}

double NNfunction-NN_3_4::synapse0x13d8bf0() {
   return (neuron0x13d4ba0()*-0.0222193);
}

double NNfunction-NN_3_4::synapse0x13d8c30() {
   return (neuron0x13d4ee0()*-0.0127789);
}

double NNfunction-NN_3_4::synapse0x13d8c70() {
   return (neuron0x13d5220()*-0.0304463);
}

double NNfunction-NN_3_4::synapse0x13d8cb0() {
   return (neuron0x13d5560()*-0.0190111);
}

double NNfunction-NN_3_4::synapse0x13d8cf0() {
   return (neuron0x13d58a0()*0.0370051);
}

double NNfunction-NN_3_4::synapse0x13d8d30() {
   return (neuron0x13d5be0()*0.25112);
}

double NNfunction-NN_3_4::synapse0x13d8d70() {
   return (neuron0x13d5f20()*0.0287549);
}

double NNfunction-NN_3_4::synapse0x13d8db0() {
   return (neuron0x13d6260()*0.0428357);
}

double NNfunction-NN_3_4::synapse0x13d8df0() {
   return (neuron0x13d65a0()*0.0972186);
}

double NNfunction-NN_3_4::synapse0x13d8e30() {
   return (neuron0x13d68e0()*0.0565116);
}

double NNfunction-NN_3_4::synapse0x13d3650() {
   return (neuron0x13d6c20()*0.0129308);
}

double NNfunction-NN_3_4::synapse0x13d3690() {
   return (neuron0x13d7180()*-0.00428968);
}

double NNfunction-NN_3_4::synapse0x1184f30() {
   return (neuron0x13d73a0()*0.0215841);
}

double NNfunction-NN_3_4::synapse0x1184f70() {
   return (neuron0x13d76e0()*-0.0186313);
}

double NNfunction-NN_3_4::synapse0x13d9090() {
   return (neuron0x13d7a20()*0.0310591);
}

double NNfunction-NN_3_4::synapse0x13d90d0() {
   return (neuron0x13d7d60()*-0.0156611);
}

double NNfunction-NN_3_4::synapse0x13d9110() {
   return (neuron0x13d80a0()*0.0480701);
}

double NNfunction-NN_3_4::synapse0x13d9150() {
   return (neuron0x13d83e0()*-1.98067);
}

double NNfunction-NN_3_4::synapse0x13d94d0() {
   return (neuron0x13d3820()*0.244894);
}

double NNfunction-NN_3_4::synapse0x13d9510() {
   return (neuron0x13d3b60()*-1.43466);
}

double NNfunction-NN_3_4::synapse0x13d9550() {
   return (neuron0x13d3ea0()*0.546005);
}

double NNfunction-NN_3_4::synapse0x13d9590() {
   return (neuron0x13d41e0()*-0.122062);
}

double NNfunction-NN_3_4::synapse0x13d95d0() {
   return (neuron0x13d4520()*0.185468);
}

double NNfunction-NN_3_4::synapse0x13d9610() {
   return (neuron0x13d4860()*0.707988);
}

double NNfunction-NN_3_4::synapse0x13d9650() {
   return (neuron0x13d4ba0()*-0.32636);
}

double NNfunction-NN_3_4::synapse0x13d9690() {
   return (neuron0x13d4ee0()*-0.105083);
}

double NNfunction-NN_3_4::synapse0x13d96d0() {
   return (neuron0x13d5220()*0.293621);
}

double NNfunction-NN_3_4::synapse0x13d8f80() {
   return (neuron0x13d5560()*0.150211);
}

double NNfunction-NN_3_4::synapse0x13d8fc0() {
   return (neuron0x13d58a0()*-0.39248);
}

double NNfunction-NN_3_4::synapse0x13d9000() {
   return (neuron0x13d5be0()*-0.131903);
}

double NNfunction-NN_3_4::synapse0x13d9040() {
   return (neuron0x13d5f20()*-0.246161);
}

double NNfunction-NN_3_4::synapse0x13d9920() {
   return (neuron0x13d6260()*-0.252696);
}

double NNfunction-NN_3_4::synapse0x13d9960() {
   return (neuron0x13d65a0()*0.707768);
}

double NNfunction-NN_3_4::synapse0x13d99a0() {
   return (neuron0x13d68e0()*1.24435);
}

double NNfunction-NN_3_4::synapse0x13d9320() {
   return (neuron0x13d6c20()*-0.317621);
}

double NNfunction-NN_3_4::synapse0x13d9360() {
   return (neuron0x13d7180()*-0.451757);
}

double NNfunction-NN_3_4::synapse0x13d9af0() {
   return (neuron0x13d73a0()*0.736207);
}

double NNfunction-NN_3_4::synapse0x13d9b30() {
   return (neuron0x13d76e0()*0.57409);
}

double NNfunction-NN_3_4::synapse0x13d9b70() {
   return (neuron0x13d7a20()*0.0426693);
}

double NNfunction-NN_3_4::synapse0x13d9bb0() {
   return (neuron0x13d7d60()*0.27634);
}

double NNfunction-NN_3_4::synapse0x13d9bf0() {
   return (neuron0x13d80a0()*-0.914983);
}

double NNfunction-NN_3_4::synapse0x13d9c30() {
   return (neuron0x13d83e0()*-0.930441);
}

double NNfunction-NN_3_4::synapse0x13d9fb0() {
   return (neuron0x13d3820()*-0.737762);
}

double NNfunction-NN_3_4::synapse0x13d9ff0() {
   return (neuron0x13d3b60()*-0.253705);
}

double NNfunction-NN_3_4::synapse0x13da030() {
   return (neuron0x13d3ea0()*-0.678423);
}

double NNfunction-NN_3_4::synapse0x13da070() {
   return (neuron0x13d41e0()*0.273457);
}

double NNfunction-NN_3_4::synapse0x13da0b0() {
   return (neuron0x13d4520()*-0.0616989);
}

double NNfunction-NN_3_4::synapse0x13da0f0() {
   return (neuron0x13d4860()*0.458389);
}

double NNfunction-NN_3_4::synapse0x13da130() {
   return (neuron0x13d4ba0()*-0.433223);
}

double NNfunction-NN_3_4::synapse0x13da170() {
   return (neuron0x13d4ee0()*-0.10998);
}

double NNfunction-NN_3_4::synapse0x13da1b0() {
   return (neuron0x13d5220()*-0.0644988);
}

double NNfunction-NN_3_4::synapse0x13da1f0() {
   return (neuron0x13d5560()*-0.184934);
}

double NNfunction-NN_3_4::synapse0x13da230() {
   return (neuron0x13d58a0()*0.741256);
}

double NNfunction-NN_3_4::synapse0x13da270() {
   return (neuron0x13d5be0()*-0.277182);
}

double NNfunction-NN_3_4::synapse0x13da2b0() {
   return (neuron0x13d5f20()*0.738934);
}

double NNfunction-NN_3_4::synapse0x13da2f0() {
   return (neuron0x13d6260()*-0.257055);
}

double NNfunction-NN_3_4::synapse0x13da330() {
   return (neuron0x13d65a0()*-0.70516);
}

double NNfunction-NN_3_4::synapse0x13da370() {
   return (neuron0x13d68e0()*0.504558);
}

double NNfunction-NN_3_4::synapse0x13d9e00() {
   return (neuron0x13d6c20()*0.238916);
}

double NNfunction-NN_3_4::synapse0x13d9e40() {
   return (neuron0x13d7180()*-0.465216);
}

double NNfunction-NN_3_4::synapse0x1192d80() {
   return (neuron0x13d73a0()*0.508756);
}

double NNfunction-NN_3_4::synapse0x1192dc0() {
   return (neuron0x13d76e0()*0.014305);
}

double NNfunction-NN_3_4::synapse0x13c28b0() {
   return (neuron0x13d7a20()*-0.699794);
}

double NNfunction-NN_3_4::synapse0x13c28f0() {
   return (neuron0x13d7d60()*0.602419);
}

double NNfunction-NN_3_4::synapse0x13c2930() {
   return (neuron0x13d80a0()*-0.646429);
}

double NNfunction-NN_3_4::synapse0x13d3760() {
   return (neuron0x13d83e0()*0.23075);
}

double NNfunction-NN_3_4::synapse0x13d98c0() {
   return (neuron0x13d3820()*0.0429465);
}

double NNfunction-NN_3_4::synapse0x13d37a0() {
   return (neuron0x13d3b60()*-0.607637);
}

double NNfunction-NN_3_4::synapse0x13d37e0() {
   return (neuron0x13d3ea0()*1.80233);
}

double NNfunction-NN_3_4::synapse0x13da4c0() {
   return (neuron0x13d41e0()*-0.191429);
}

double NNfunction-NN_3_4::synapse0x13da500() {
   return (neuron0x13d4520()*-0.0256245);
}

double NNfunction-NN_3_4::synapse0x13da540() {
   return (neuron0x13d4860()*0.151617);
}

double NNfunction-NN_3_4::synapse0x13da580() {
   return (neuron0x13d4ba0()*-0.0132498);
}

double NNfunction-NN_3_4::synapse0x13da5c0() {
   return (neuron0x13d4ee0()*-0.00934355);
}

double NNfunction-NN_3_4::synapse0x13da600() {
   return (neuron0x13d5220()*-0.000928694);
}

double NNfunction-NN_3_4::synapse0x13da640() {
   return (neuron0x13d5560()*-0.0125068);
}

double NNfunction-NN_3_4::synapse0x13da680() {
   return (neuron0x13d58a0()*0.00334189);
}

double NNfunction-NN_3_4::synapse0x13da6c0() {
   return (neuron0x13d5be0()*-0.628516);
}

double NNfunction-NN_3_4::synapse0x13da700() {
   return (neuron0x13d5f20()*0.0825542);
}

double NNfunction-NN_3_4::synapse0x13da740() {
   return (neuron0x13d6260()*-0.0269948);
}

double NNfunction-NN_3_4::synapse0x13da780() {
   return (neuron0x13d65a0()*0.0304091);
}

double NNfunction-NN_3_4::synapse0x13da7c0() {
   return (neuron0x13d68e0()*-0.104398);
}

double NNfunction-NN_3_4::synapse0x13d9710() {
   return (neuron0x13d6c20()*0.20369);
}

double NNfunction-NN_3_4::synapse0x13d9750() {
   return (neuron0x13d7180()*0.0921505);
}

double NNfunction-NN_3_4::synapse0x13da910() {
   return (neuron0x13d73a0()*-0.0413086);
}

double NNfunction-NN_3_4::synapse0x13da950() {
   return (neuron0x13d76e0()*0.00737757);
}

double NNfunction-NN_3_4::synapse0x13da990() {
   return (neuron0x13d7a20()*-0.00610099);
}

double NNfunction-NN_3_4::synapse0x13da9d0() {
   return (neuron0x13d7d60()*-0.121192);
}

double NNfunction-NN_3_4::synapse0x13daa10() {
   return (neuron0x13d80a0()*-0.0375095);
}

double NNfunction-NN_3_4::synapse0x13daa50() {
   return (neuron0x13d83e0()*-3.30304);
}

double NNfunction-NN_3_4::synapse0x13dadd0() {
   return (neuron0x13d3820()*-0.0757038);
}

double NNfunction-NN_3_4::synapse0x13dae10() {
   return (neuron0x13d3b60()*1.41741);
}

double NNfunction-NN_3_4::synapse0x13dae50() {
   return (neuron0x13d3ea0()*-0.968674);
}

double NNfunction-NN_3_4::synapse0x13dae90() {
   return (neuron0x13d41e0()*0.015548);
}

double NNfunction-NN_3_4::synapse0x13daed0() {
   return (neuron0x13d4520()*-0.0101988);
}

double NNfunction-NN_3_4::synapse0x13daf10() {
   return (neuron0x13d4860()*0.0246088);
}

double NNfunction-NN_3_4::synapse0x13daf50() {
   return (neuron0x13d4ba0()*-0.0344044);
}

double NNfunction-NN_3_4::synapse0x13daf90() {
   return (neuron0x13d4ee0()*-0.0148237);
}

double NNfunction-NN_3_4::synapse0x13dafd0() {
   return (neuron0x13d5220()*0.0102949);
}

double NNfunction-NN_3_4::synapse0x13db010() {
   return (neuron0x13d5560()*0.0642007);
}

double NNfunction-NN_3_4::synapse0x13db050() {
   return (neuron0x13d58a0()*-0.0320904);
}

double NNfunction-NN_3_4::synapse0x13db090() {
   return (neuron0x13d5be0()*0.251743);
}

double NNfunction-NN_3_4::synapse0x13db0d0() {
   return (neuron0x13d5f20()*0.026215);
}

double NNfunction-NN_3_4::synapse0x13db110() {
   return (neuron0x13d6260()*-0.0220004);
}

double NNfunction-NN_3_4::synapse0x13db150() {
   return (neuron0x13d65a0()*0.115158);
}

double NNfunction-NN_3_4::synapse0x13db190() {
   return (neuron0x13d68e0()*0.0189726);
}

double NNfunction-NN_3_4::synapse0x13dac20() {
   return (neuron0x13d6c20()*-0.0166136);
}

double NNfunction-NN_3_4::synapse0x13dac60() {
   return (neuron0x13d7180()*-0.0406685);
}

double NNfunction-NN_3_4::synapse0x13db2e0() {
   return (neuron0x13d73a0()*-0.00218116);
}

double NNfunction-NN_3_4::synapse0x13db320() {
   return (neuron0x13d76e0()*0.0188205);
}

double NNfunction-NN_3_4::synapse0x13db360() {
   return (neuron0x13d7a20()*0.0614237);
}

double NNfunction-NN_3_4::synapse0x13db3a0() {
   return (neuron0x13d7d60()*-0.0289176);
}

double NNfunction-NN_3_4::synapse0x13db3e0() {
   return (neuron0x13d80a0()*0.0197549);
}

double NNfunction-NN_3_4::synapse0x13db420() {
   return (neuron0x13d83e0()*-0.553707);
}

double NNfunction-NN_3_4::synapse0x13db7a0() {
   return (neuron0x13d3820()*-0.041033);
}

double NNfunction-NN_3_4::synapse0x13db7e0() {
   return (neuron0x13d3b60()*5.35892);
}

double NNfunction-NN_3_4::synapse0x13db820() {
   return (neuron0x13d3ea0()*2.7109);
}

double NNfunction-NN_3_4::synapse0x13db860() {
   return (neuron0x13d41e0()*0.00181449);
}

double NNfunction-NN_3_4::synapse0x13db8a0() {
   return (neuron0x13d4520()*0.0259551);
}

double NNfunction-NN_3_4::synapse0x13db8e0() {
   return (neuron0x13d4860()*-0.00629787);
}

double NNfunction-NN_3_4::synapse0x13db920() {
   return (neuron0x13d4ba0()*0.0273882);
}

double NNfunction-NN_3_4::synapse0x13db960() {
   return (neuron0x13d4ee0()*0.0118173);
}

double NNfunction-NN_3_4::synapse0x13db9a0() {
   return (neuron0x13d5220()*0.0117743);
}

double NNfunction-NN_3_4::synapse0x11930f0() {
   return (neuron0x13d5560()*-0.0251316);
}

double NNfunction-NN_3_4::synapse0x1193130() {
   return (neuron0x13d58a0()*0.0185852);
}

double NNfunction-NN_3_4::synapse0x1193170() {
   return (neuron0x13d5be0()*-0.0991426);
}

double NNfunction-NN_3_4::synapse0x11931b0() {
   return (neuron0x13d5f20()*-0.0713991);
}

double NNfunction-NN_3_4::synapse0x11931f0() {
   return (neuron0x13d6260()*0.0195293);
}

double NNfunction-NN_3_4::synapse0x1193230() {
   return (neuron0x13d65a0()*0.0534472);
}

double NNfunction-NN_3_4::synapse0x1193270() {
   return (neuron0x13d68e0()*0.0207532);
}

double NNfunction-NN_3_4::synapse0x13db5f0() {
   return (neuron0x13d6c20()*-0.0478839);
}

double NNfunction-NN_3_4::synapse0x13db630() {
   return (neuron0x13d7180()*0.0282452);
}

double NNfunction-NN_3_4::synapse0x11933c0() {
   return (neuron0x13d73a0()*0.0359699);
}

double NNfunction-NN_3_4::synapse0x1193400() {
   return (neuron0x13d76e0()*0.0299935);
}

double NNfunction-NN_3_4::synapse0x1193440() {
   return (neuron0x13d7a20()*-0.0132103);
}

double NNfunction-NN_3_4::synapse0x1193480() {
   return (neuron0x13d7d60()*0.0432853);
}

double NNfunction-NN_3_4::synapse0x11934c0() {
   return (neuron0x13d80a0()*0.0481346);
}

double NNfunction-NN_3_4::synapse0x13dc1f0() {
   return (neuron0x13d83e0()*-7.82705);
}

double NNfunction-NN_3_4::synapse0x13dc570() {
   return (neuron0x13d3820()*-0.0182923);
}

double NNfunction-NN_3_4::synapse0x13dc5b0() {
   return (neuron0x13d3b60()*2.86602);
}

double NNfunction-NN_3_4::synapse0x13dc5f0() {
   return (neuron0x13d3ea0()*-0.0644564);
}

double NNfunction-NN_3_4::synapse0x13dc630() {
   return (neuron0x13d41e0()*-0.0256448);
}

double NNfunction-NN_3_4::synapse0x13dc670() {
   return (neuron0x13d4520()*-0.006959);
}

double NNfunction-NN_3_4::synapse0x13dc6b0() {
   return (neuron0x13d4860()*0.0243779);
}

double NNfunction-NN_3_4::synapse0x13dc6f0() {
   return (neuron0x13d4ba0()*0.0179678);
}

double NNfunction-NN_3_4::synapse0x13dc730() {
   return (neuron0x13d4ee0()*-0.0342766);
}

double NNfunction-NN_3_4::synapse0x13dc770() {
   return (neuron0x13d5220()*-0.0115511);
}

double NNfunction-NN_3_4::synapse0x13dc7b0() {
   return (neuron0x13d5560()*0.00460871);
}

double NNfunction-NN_3_4::synapse0x13dc7f0() {
   return (neuron0x13d58a0()*-0.017205);
}

double NNfunction-NN_3_4::synapse0x13dc830() {
   return (neuron0x13d5be0()*-0.0520091);
}

double NNfunction-NN_3_4::synapse0x13dc870() {
   return (neuron0x13d5f20()*-0.00477432);
}

double NNfunction-NN_3_4::synapse0x13dc8b0() {
   return (neuron0x13d6260()*-0.020466);
}

double NNfunction-NN_3_4::synapse0x13dc8f0() {
   return (neuron0x13d65a0()*0.00103573);
}

double NNfunction-NN_3_4::synapse0x13dc930() {
   return (neuron0x13d68e0()*-0.028371);
}

double NNfunction-NN_3_4::synapse0x13dc3c0() {
   return (neuron0x13d6c20()*0.000458691);
}

double NNfunction-NN_3_4::synapse0x13dc400() {
   return (neuron0x13d7180()*0.0163363);
}

double NNfunction-NN_3_4::synapse0x13dca80() {
   return (neuron0x13d73a0()*-0.0127413);
}

double NNfunction-NN_3_4::synapse0x13dcac0() {
   return (neuron0x13d76e0()*-0.0465251);
}

double NNfunction-NN_3_4::synapse0x13dcb00() {
   return (neuron0x13d7a20()*-0.00929952);
}

double NNfunction-NN_3_4::synapse0x13dcb40() {
   return (neuron0x13d7d60()*-0.0453139);
}

double NNfunction-NN_3_4::synapse0x13dcb80() {
   return (neuron0x13d80a0()*-0.0117805);
}

double NNfunction-NN_3_4::synapse0x13dcbc0() {
   return (neuron0x13d83e0()*-3.49447);
}

double NNfunction-NN_3_4::synapse0x13dcf40() {
   return (neuron0x13d3820()*0.131389);
}

double NNfunction-NN_3_4::synapse0x13dcf80() {
   return (neuron0x13d3b60()*1.54602);
}

double NNfunction-NN_3_4::synapse0x13dcfc0() {
   return (neuron0x13d3ea0()*0.665264);
}

double NNfunction-NN_3_4::synapse0x13dd000() {
   return (neuron0x13d41e0()*0.311191);
}

double NNfunction-NN_3_4::synapse0x13dd040() {
   return (neuron0x13d4520()*-1.15436);
}

double NNfunction-NN_3_4::synapse0x13dd080() {
   return (neuron0x13d4860()*0.268844);
}

double NNfunction-NN_3_4::synapse0x13dd0c0() {
   return (neuron0x13d4ba0()*-0.38935);
}

double NNfunction-NN_3_4::synapse0x13dd100() {
   return (neuron0x13d4ee0()*-0.561919);
}

double NNfunction-NN_3_4::synapse0x13dd140() {
   return (neuron0x13d5220()*-0.628679);
}

double NNfunction-NN_3_4::synapse0x13dd180() {
   return (neuron0x13d5560()*0.284445);
}

double NNfunction-NN_3_4::synapse0x13dd1c0() {
   return (neuron0x13d58a0()*-1.1911);
}

double NNfunction-NN_3_4::synapse0x13dd200() {
   return (neuron0x13d5be0()*0.425219);
}

double NNfunction-NN_3_4::synapse0x13dd240() {
   return (neuron0x13d5f20()*-0.560305);
}

double NNfunction-NN_3_4::synapse0x13dd280() {
   return (neuron0x13d6260()*0.0597774);
}

double NNfunction-NN_3_4::synapse0x13dd2c0() {
   return (neuron0x13d65a0()*-0.596232);
}

double NNfunction-NN_3_4::synapse0x13dd300() {
   return (neuron0x13d68e0()*-0.810791);
}

double NNfunction-NN_3_4::synapse0x13dcd90() {
   return (neuron0x13d6c20()*0.169684);
}

double NNfunction-NN_3_4::synapse0x13dcdd0() {
   return (neuron0x13d7180()*-0.188566);
}

double NNfunction-NN_3_4::synapse0x13dd450() {
   return (neuron0x13d73a0()*0.124965);
}

double NNfunction-NN_3_4::synapse0x13dd490() {
   return (neuron0x13d76e0()*-0.0644336);
}

double NNfunction-NN_3_4::synapse0x13dd4d0() {
   return (neuron0x13d7a20()*-0.524516);
}

double NNfunction-NN_3_4::synapse0x13dd510() {
   return (neuron0x13d7d60()*0.124123);
}

double NNfunction-NN_3_4::synapse0x13dd550() {
   return (neuron0x13d80a0()*0.0295282);
}

double NNfunction-NN_3_4::synapse0x13dd590() {
   return (neuron0x13d83e0()*-0.346537);
}

double NNfunction-NN_3_4::synapse0x13d7070() {
   return (neuron0x13d3820()*-0.00584243);
}

double NNfunction-NN_3_4::synapse0x13d70b0() {
   return (neuron0x13d3b60()*0.558357);
}

double NNfunction-NN_3_4::synapse0x13d70f0() {
   return (neuron0x13d3ea0()*-0.166301);
}

double NNfunction-NN_3_4::synapse0x13d7130() {
   return (neuron0x13d41e0()*-0.103213);
}

double NNfunction-NN_3_4::synapse0x13ddb20() {
   return (neuron0x13d4520()*0.0231306);
}

double NNfunction-NN_3_4::synapse0x13ddb60() {
   return (neuron0x13d4860()*0.03252);
}

double NNfunction-NN_3_4::synapse0x13ddba0() {
   return (neuron0x13d4ba0()*-0.017516);
}

double NNfunction-NN_3_4::synapse0x13ddbe0() {
   return (neuron0x13d4ee0()*-0.014067);
}

double NNfunction-NN_3_4::synapse0x13ddc20() {
   return (neuron0x13d5220()*0.0102016);
}

double NNfunction-NN_3_4::synapse0x13ddc60() {
   return (neuron0x13d5560()*-0.0138319);
}

double NNfunction-NN_3_4::synapse0x13ddca0() {
   return (neuron0x13d58a0()*-0.00635598);
}

double NNfunction-NN_3_4::synapse0x13ddce0() {
   return (neuron0x13d5be0()*-0.314171);
}

double NNfunction-NN_3_4::synapse0x13ddd20() {
   return (neuron0x13d5f20()*-0.0415654);
}

double NNfunction-NN_3_4::synapse0x13ddd60() {
   return (neuron0x13d6260()*-0.0369402);
}

double NNfunction-NN_3_4::synapse0x13ddda0() {
   return (neuron0x13d65a0()*-0.00446956);
}

double NNfunction-NN_3_4::synapse0x13ddde0() {
   return (neuron0x13d68e0()*0.0290004);
}

double NNfunction-NN_3_4::synapse0x13dd760() {
   return (neuron0x13d6c20()*-0.00908477);
}

double NNfunction-NN_3_4::synapse0x13dd7a0() {
   return (neuron0x13d7180()*-0.0136359);
}

double NNfunction-NN_3_4::synapse0x13ddf30() {
   return (neuron0x13d73a0()*0.0140142);
}

double NNfunction-NN_3_4::synapse0x13ddf70() {
   return (neuron0x13d76e0()*-0.0269114);
}

double NNfunction-NN_3_4::synapse0x13ddfb0() {
   return (neuron0x13d7a20()*0.0226292);
}

double NNfunction-NN_3_4::synapse0x13ddff0() {
   return (neuron0x13d7d60()*-0.00915566);
}

double NNfunction-NN_3_4::synapse0x13de030() {
   return (neuron0x13d80a0()*-0.00078452);
}

double NNfunction-NN_3_4::synapse0x13de070() {
   return (neuron0x13d83e0()*0.567059);
}

double NNfunction-NN_3_4::synapse0x13de3f0() {
   return (neuron0x13d3820()*-0.209358);
}

double NNfunction-NN_3_4::synapse0x13de430() {
   return (neuron0x13d3b60()*0.197089);
}

double NNfunction-NN_3_4::synapse0x13de470() {
   return (neuron0x13d3ea0()*0.225596);
}

double NNfunction-NN_3_4::synapse0x13de4b0() {
   return (neuron0x13d41e0()*-0.254518);
}

double NNfunction-NN_3_4::synapse0x13de4f0() {
   return (neuron0x13d4520()*0.11557);
}

double NNfunction-NN_3_4::synapse0x13de530() {
   return (neuron0x13d4860()*0.194269);
}

double NNfunction-NN_3_4::synapse0x13de570() {
   return (neuron0x13d4ba0()*0.0820079);
}

double NNfunction-NN_3_4::synapse0x13de5b0() {
   return (neuron0x13d4ee0()*0.157633);
}

double NNfunction-NN_3_4::synapse0x13de5f0() {
   return (neuron0x13d5220()*-0.481919);
}

double NNfunction-NN_3_4::synapse0x13de630() {
   return (neuron0x13d5560()*-0.16099);
}

double NNfunction-NN_3_4::synapse0x13de670() {
   return (neuron0x13d58a0()*0.227815);
}

double NNfunction-NN_3_4::synapse0x13de6b0() {
   return (neuron0x13d5be0()*0.0617953);
}

double NNfunction-NN_3_4::synapse0x13de6f0() {
   return (neuron0x13d5f20()*-0.12021);
}

double NNfunction-NN_3_4::synapse0x13de730() {
   return (neuron0x13d6260()*0.166451);
}

double NNfunction-NN_3_4::synapse0x13de770() {
   return (neuron0x13d65a0()*0.439969);
}

double NNfunction-NN_3_4::synapse0x13de7b0() {
   return (neuron0x13d68e0()*0.437114);
}

double NNfunction-NN_3_4::synapse0x13de240() {
   return (neuron0x13d6c20()*0.0295133);
}

double NNfunction-NN_3_4::synapse0x13de280() {
   return (neuron0x13d7180()*0.0491006);
}

double NNfunction-NN_3_4::synapse0x13de900() {
   return (neuron0x13d73a0()*-0.00875298);
}

double NNfunction-NN_3_4::synapse0x13de940() {
   return (neuron0x13d76e0()*-0.097788);
}

double NNfunction-NN_3_4::synapse0x13de980() {
   return (neuron0x13d7a20()*0.143127);
}

double NNfunction-NN_3_4::synapse0x13de9c0() {
   return (neuron0x13d7d60()*0.0109194);
}

double NNfunction-NN_3_4::synapse0x13dea00() {
   return (neuron0x13d80a0()*0.100159);
}

double NNfunction-NN_3_4::synapse0x13dea40() {
   return (neuron0x13d83e0()*-1.49036);
}

double NNfunction-NN_3_4::synapse0x13dedc0() {
   return (neuron0x13d3820()*0.00221526);
}

double NNfunction-NN_3_4::synapse0x13dee00() {
   return (neuron0x13d3b60()*0.00771548);
}

double NNfunction-NN_3_4::synapse0x13dee40() {
   return (neuron0x13d3ea0()*-2.08451);
}

double NNfunction-NN_3_4::synapse0x13dee80() {
   return (neuron0x13d41e0()*-0.0108561);
}

double NNfunction-NN_3_4::synapse0x13deec0() {
   return (neuron0x13d4520()*-0.00454718);
}

double NNfunction-NN_3_4::synapse0x13def00() {
   return (neuron0x13d4860()*-0.00568592);
}

double NNfunction-NN_3_4::synapse0x13def40() {
   return (neuron0x13d4ba0()*-0.00732771);
}

double NNfunction-NN_3_4::synapse0x13def80() {
   return (neuron0x13d4ee0()*-0.000226);
}

double NNfunction-NN_3_4::synapse0x13defc0() {
   return (neuron0x13d5220()*-0.000588169);
}

double NNfunction-NN_3_4::synapse0x13df000() {
   return (neuron0x13d5560()*0.00163436);
}

double NNfunction-NN_3_4::synapse0x13df040() {
   return (neuron0x13d58a0()*0.0147993);
}

double NNfunction-NN_3_4::synapse0x13df080() {
   return (neuron0x13d5be0()*0.193075);
}

double NNfunction-NN_3_4::synapse0x13df0c0() {
   return (neuron0x13d5f20()*-0.0280602);
}

double NNfunction-NN_3_4::synapse0x13df100() {
   return (neuron0x13d6260()*-0.0164845);
}

double NNfunction-NN_3_4::synapse0x13df140() {
   return (neuron0x13d65a0()*0.0179584);
}

double NNfunction-NN_3_4::synapse0x13df180() {
   return (neuron0x13d68e0()*-0.00282947);
}

double NNfunction-NN_3_4::synapse0x13dec10() {
   return (neuron0x13d6c20()*-0.00184725);
}

double NNfunction-NN_3_4::synapse0x13dec50() {
   return (neuron0x13d7180()*0.00292099);
}

double NNfunction-NN_3_4::synapse0x13db9e0() {
   return (neuron0x13d73a0()*-0.00148687);
}

double NNfunction-NN_3_4::synapse0x13dba20() {
   return (neuron0x13d76e0()*-0.00106207);
}

double NNfunction-NN_3_4::synapse0x13dba60() {
   return (neuron0x13d7a20()*-0.00830827);
}

double NNfunction-NN_3_4::synapse0x13dbaa0() {
   return (neuron0x13d7d60()*0.010814);
}

double NNfunction-NN_3_4::synapse0x13dbae0() {
   return (neuron0x13d80a0()*-0.015022);
}

double NNfunction-NN_3_4::synapse0x13dbb20() {
   return (neuron0x13d83e0()*1.89984);
}

double NNfunction-NN_3_4::synapse0x13dbea0() {
   return (neuron0x13d3820()*-0.00840505);
}

double NNfunction-NN_3_4::synapse0x13dbee0() {
   return (neuron0x13d3b60()*-0.729061);
}

double NNfunction-NN_3_4::synapse0x13dbf20() {
   return (neuron0x13d3ea0()*-1.54504);
}

double NNfunction-NN_3_4::synapse0x13dbf60() {
   return (neuron0x13d41e0()*-0.0183686);
}

double NNfunction-NN_3_4::synapse0x13dbfa0() {
   return (neuron0x13d4520()*-0.0140803);
}

double NNfunction-NN_3_4::synapse0x13dbfe0() {
   return (neuron0x13d4860()*0.0062715);
}

double NNfunction-NN_3_4::synapse0x13dc020() {
   return (neuron0x13d4ba0()*0.0168815);
}

double NNfunction-NN_3_4::synapse0x13dc060() {
   return (neuron0x13d4ee0()*-0.00289752);
}

double NNfunction-NN_3_4::synapse0x13dc0a0() {
   return (neuron0x13d5220()*-0.00153052);
}

double NNfunction-NN_3_4::synapse0x13dc0e0() {
   return (neuron0x13d5560()*0.00173289);
}

double NNfunction-NN_3_4::synapse0x13dc120() {
   return (neuron0x13d58a0()*0.0174041);
}

double NNfunction-NN_3_4::synapse0x13dc160() {
   return (neuron0x13d5be0()*0.253685);
}

double NNfunction-NN_3_4::synapse0x13dc1a0() {
   return (neuron0x13d5f20()*-0.0104463);
}

double NNfunction-NN_3_4::synapse0x13e02e0() {
   return (neuron0x13d6260()*0.0109182);
}

double NNfunction-NN_3_4::synapse0x13e0320() {
   return (neuron0x13d65a0()*-0.00148112);
}

double NNfunction-NN_3_4::synapse0x13e0360() {
   return (neuron0x13d68e0()*0.0107249);
}

double NNfunction-NN_3_4::synapse0x13dbcf0() {
   return (neuron0x13d6c20()*0.00768995);
}

double NNfunction-NN_3_4::synapse0x13dbd30() {
   return (neuron0x13d7180()*0.014534);
}

double NNfunction-NN_3_4::synapse0x13e04b0() {
   return (neuron0x13d73a0()*0.00098775);
}

double NNfunction-NN_3_4::synapse0x13e04f0() {
   return (neuron0x13d76e0()*0.00377949);
}

double NNfunction-NN_3_4::synapse0x13e0530() {
   return (neuron0x13d7a20()*-0.00259385);
}

double NNfunction-NN_3_4::synapse0x13e0570() {
   return (neuron0x13d7d60()*0.000529386);
}

double NNfunction-NN_3_4::synapse0x13e05b0() {
   return (neuron0x13d80a0()*-0.011544);
}

double NNfunction-NN_3_4::synapse0x13e05f0() {
   return (neuron0x13d83e0()*1.41314);
}

double NNfunction-NN_3_4::synapse0x13e0970() {
   return (neuron0x13d3820()*-0.305222);
}

double NNfunction-NN_3_4::synapse0x13e09b0() {
   return (neuron0x13d3b60()*-0.0958447);
}

double NNfunction-NN_3_4::synapse0x13e09f0() {
   return (neuron0x13d3ea0()*-0.115456);
}

double NNfunction-NN_3_4::synapse0x13e0a30() {
   return (neuron0x13d41e0()*-0.168734);
}

double NNfunction-NN_3_4::synapse0x13e0a70() {
   return (neuron0x13d4520()*-0.00530326);
}

double NNfunction-NN_3_4::synapse0x13e0ab0() {
   return (neuron0x13d4860()*0.0906895);
}

double NNfunction-NN_3_4::synapse0x13e0af0() {
   return (neuron0x13d4ba0()*-0.0069594);
}

double NNfunction-NN_3_4::synapse0x13e0b30() {
   return (neuron0x13d4ee0()*-0.0443839);
}

double NNfunction-NN_3_4::synapse0x13e0b70() {
   return (neuron0x13d5220()*-0.12234);
}

double NNfunction-NN_3_4::synapse0x13e0bb0() {
   return (neuron0x13d5560()*-0.0791354);
}

double NNfunction-NN_3_4::synapse0x13e0bf0() {
   return (neuron0x13d58a0()*0.239255);
}

double NNfunction-NN_3_4::synapse0x13e0c30() {
   return (neuron0x13d5be0()*-0.211357);
}

double NNfunction-NN_3_4::synapse0x13e0c70() {
   return (neuron0x13d5f20()*-0.0993889);
}

double NNfunction-NN_3_4::synapse0x13e0cb0() {
   return (neuron0x13d6260()*0.246996);
}

double NNfunction-NN_3_4::synapse0x13e0cf0() {
   return (neuron0x13d65a0()*-0.0711239);
}

double NNfunction-NN_3_4::synapse0x13e0d30() {
   return (neuron0x13d68e0()*-0.0116266);
}

double NNfunction-NN_3_4::synapse0x13e07c0() {
   return (neuron0x13d6c20()*0.126526);
}

double NNfunction-NN_3_4::synapse0x13e0800() {
   return (neuron0x13d7180()*-0.0556154);
}

double NNfunction-NN_3_4::synapse0x13e0e80() {
   return (neuron0x13d73a0()*0.163578);
}

double NNfunction-NN_3_4::synapse0x13e0ec0() {
   return (neuron0x13d76e0()*-0.112789);
}

double NNfunction-NN_3_4::synapse0x13e0f00() {
   return (neuron0x13d7a20()*-0.0994466);
}

double NNfunction-NN_3_4::synapse0x13e0f40() {
   return (neuron0x13d7d60()*-0.152763);
}

double NNfunction-NN_3_4::synapse0x13e0f80() {
   return (neuron0x13d80a0()*-0.0916547);
}

double NNfunction-NN_3_4::synapse0x13e0fc0() {
   return (neuron0x13d83e0()*-1.35783);
}

double NNfunction-NN_3_4::synapse0x13e1340() {
   return (neuron0x13d3820()*-0.221617);
}

double NNfunction-NN_3_4::synapse0x13e1380() {
   return (neuron0x13d3b60()*0.62318);
}

double NNfunction-NN_3_4::synapse0x13e13c0() {
   return (neuron0x13d3ea0()*0.276241);
}

double NNfunction-NN_3_4::synapse0x13e1400() {
   return (neuron0x13d41e0()*0.606413);
}

double NNfunction-NN_3_4::synapse0x13e1440() {
   return (neuron0x13d4520()*0.0353687);
}

double NNfunction-NN_3_4::synapse0x13e1480() {
   return (neuron0x13d4860()*0.0299865);
}

double NNfunction-NN_3_4::synapse0x13e14c0() {
   return (neuron0x13d4ba0()*0.410771);
}

double NNfunction-NN_3_4::synapse0x13e1500() {
   return (neuron0x13d4ee0()*-0.0153349);
}

double NNfunction-NN_3_4::synapse0x13e1540() {
   return (neuron0x13d5220()*0.279684);
}

double NNfunction-NN_3_4::synapse0x13e1580() {
   return (neuron0x13d5560()*-0.102768);
}

double NNfunction-NN_3_4::synapse0x13e15c0() {
   return (neuron0x13d58a0()*-0.163163);
}

double NNfunction-NN_3_4::synapse0x13e1600() {
   return (neuron0x13d5be0()*0.640519);
}

double NNfunction-NN_3_4::synapse0x13e1640() {
   return (neuron0x13d5f20()*0.227985);
}

double NNfunction-NN_3_4::synapse0x13e1680() {
   return (neuron0x13d6260()*0.0178353);
}

double NNfunction-NN_3_4::synapse0x13e16c0() {
   return (neuron0x13d65a0()*-0.159725);
}

double NNfunction-NN_3_4::synapse0x13e1700() {
   return (neuron0x13d68e0()*-0.0569552);
}

double NNfunction-NN_3_4::synapse0x13e1190() {
   return (neuron0x13d6c20()*0.0329324);
}

double NNfunction-NN_3_4::synapse0x13e11d0() {
   return (neuron0x13d7180()*-0.17456);
}

double NNfunction-NN_3_4::synapse0x13e1850() {
   return (neuron0x13d73a0()*-0.0380342);
}

double NNfunction-NN_3_4::synapse0x13e1890() {
   return (neuron0x13d76e0()*0.270103);
}

double NNfunction-NN_3_4::synapse0x13e18d0() {
   return (neuron0x13d7a20()*0.132858);
}

double NNfunction-NN_3_4::synapse0x13e1910() {
   return (neuron0x13d7d60()*0.190958);
}

double NNfunction-NN_3_4::synapse0x13e1950() {
   return (neuron0x13d80a0()*-0.128415);
}

double NNfunction-NN_3_4::synapse0x13e1990() {
   return (neuron0x13d83e0()*-1.05574);
}

double NNfunction-NN_3_4::synapse0x13e1d10() {
   return (neuron0x13d3820()*-0.374262);
}

double NNfunction-NN_3_4::synapse0x13e1d50() {
   return (neuron0x13d3b60()*1.19677);
}

double NNfunction-NN_3_4::synapse0x13e1d90() {
   return (neuron0x13d3ea0()*-0.359213);
}

double NNfunction-NN_3_4::synapse0x13e1dd0() {
   return (neuron0x13d41e0()*0.0135326);
}

double NNfunction-NN_3_4::synapse0x13e1e10() {
   return (neuron0x13d4520()*-0.212174);
}

double NNfunction-NN_3_4::synapse0x13e1e50() {
   return (neuron0x13d4860()*-0.576841);
}

double NNfunction-NN_3_4::synapse0x13e1e90() {
   return (neuron0x13d4ba0()*0.563244);
}

double NNfunction-NN_3_4::synapse0x13e1ed0() {
   return (neuron0x13d4ee0()*0.0534679);
}

double NNfunction-NN_3_4::synapse0x13e1f10() {
   return (neuron0x13d5220()*-0.15032);
}

double NNfunction-NN_3_4::synapse0x13e1f50() {
   return (neuron0x13d5560()*-0.304247);
}

double NNfunction-NN_3_4::synapse0x13e1f90() {
   return (neuron0x13d58a0()*0.343057);
}

double NNfunction-NN_3_4::synapse0x13e1fd0() {
   return (neuron0x13d5be0()*-0.124317);
}

double NNfunction-NN_3_4::synapse0x13e2010() {
   return (neuron0x13d5f20()*0.125603);
}

double NNfunction-NN_3_4::synapse0x13e2050() {
   return (neuron0x13d6260()*0.423428);
}

double NNfunction-NN_3_4::synapse0x13e2090() {
   return (neuron0x13d65a0()*-0.698092);
}

double NNfunction-NN_3_4::synapse0x13e20d0() {
   return (neuron0x13d68e0()*-0.968813);
}

double NNfunction-NN_3_4::synapse0x13e1b60() {
   return (neuron0x13d6c20()*0.427);
}

double NNfunction-NN_3_4::synapse0x13e1ba0() {
   return (neuron0x13d7180()*0.693461);
}

double NNfunction-NN_3_4::synapse0x13e2220() {
   return (neuron0x13d73a0()*-0.768038);
}

double NNfunction-NN_3_4::synapse0x13e2260() {
   return (neuron0x13d76e0()*-0.38646);
}

double NNfunction-NN_3_4::synapse0x13e22a0() {
   return (neuron0x13d7a20()*0.0713419);
}

double NNfunction-NN_3_4::synapse0x13e22e0() {
   return (neuron0x13d7d60()*-0.133764);
}

double NNfunction-NN_3_4::synapse0x13e2320() {
   return (neuron0x13d80a0()*0.906079);
}

double NNfunction-NN_3_4::synapse0x13e2360() {
   return (neuron0x13d83e0()*0.623372);
}

double NNfunction-NN_3_4::synapse0x13e26e0() {
   return (neuron0x13d3820()*0.0413815);
}

double NNfunction-NN_3_4::synapse0x13d3a40() {
   return (neuron0x13d3b60()*-2.19076);
}

double NNfunction-NN_3_4::synapse0x13d3a80() {
   return (neuron0x13d3ea0()*1.52793);
}

double NNfunction-NN_3_4::synapse0x13d3d80() {
   return (neuron0x13d41e0()*-0.0121901);
}

double NNfunction-NN_3_4::synapse0x13d3dc0() {
   return (neuron0x13d4520()*0.0222293);
}

double NNfunction-NN_3_4::synapse0x13d40c0() {
   return (neuron0x13d4860()*0.0267286);
}

double NNfunction-NN_3_4::synapse0x13d4100() {
   return (neuron0x13d4ba0()*0.0394285);
}

double NNfunction-NN_3_4::synapse0x13d4400() {
   return (neuron0x13d4ee0()*-0.0099153);
}

double NNfunction-NN_3_4::synapse0x13d4440() {
   return (neuron0x13d5220()*-0.0471477);
}

double NNfunction-NN_3_4::synapse0x13d4740() {
   return (neuron0x13d5560()*-0.0343836);
}

double NNfunction-NN_3_4::synapse0x13d4780() {
   return (neuron0x13d58a0()*0.0192366);
}

double NNfunction-NN_3_4::synapse0x13d4a80() {
   return (neuron0x13d5be0()*-0.00100815);
}

double NNfunction-NN_3_4::synapse0x13d4ac0() {
   return (neuron0x13d5f20()*-0.0209017);
}

double NNfunction-NN_3_4::synapse0x13d4dc0() {
   return (neuron0x13d6260()*0.0242028);
}

double NNfunction-NN_3_4::synapse0x13d4e00() {
   return (neuron0x13d65a0()*0.0182772);
}

double NNfunction-NN_3_4::synapse0x13d5100() {
   return (neuron0x13d68e0()*0.0142639);
}

double NNfunction-NN_3_4::synapse0x13d5140() {
   return (neuron0x13d6c20()*-0.0159789);
}

double NNfunction-NN_3_4::synapse0x13d5440() {
   return (neuron0x13d7180()*0.0121597);
}

double NNfunction-NN_3_4::synapse0x13d5480() {
   return (neuron0x13d73a0()*0.0206516);
}

double NNfunction-NN_3_4::synapse0x13d5780() {
   return (neuron0x13d76e0()*-0.0352494);
}

double NNfunction-NN_3_4::synapse0x13d57c0() {
   return (neuron0x13d7a20()*0.0175825);
}

double NNfunction-NN_3_4::synapse0x13d5ac0() {
   return (neuron0x13d7d60()*-0.00586016);
}

double NNfunction-NN_3_4::synapse0x13d5b00() {
   return (neuron0x13d80a0()*0.0263237);
}

double NNfunction-NN_3_4::synapse0x13d5e00() {
   return (neuron0x13d83e0()*0.0435311);
}

double NNfunction-NN_3_4::synapse0x13d5e40() {
   return (neuron0x13d3820()*-0.0864737);
}

double NNfunction-NN_3_4::synapse0x13d6b00() {
   return (neuron0x13d3b60()*0.398685);
}

double NNfunction-NN_3_4::synapse0x13d6b40() {
   return (neuron0x13d3ea0()*-0.946367);
}

double NNfunction-NN_3_4::synapse0x13e2530() {
   return (neuron0x13d41e0()*0.0537621);
}

double NNfunction-NN_3_4::synapse0x13e2570() {
   return (neuron0x13d4520()*0.396078);
}

double NNfunction-NN_3_4::synapse0x13d6e40() {
   return (neuron0x13d4860()*-0.281021);
}

double NNfunction-NN_3_4::synapse0x13d6e80() {
   return (neuron0x13d4ba0()*0.18059);
}

double NNfunction-NN_3_4::synapse0x1184e10() {
   return (neuron0x13d4ee0()*0.0630967);
}

double NNfunction-NN_3_4::synapse0x1184e50() {
   return (neuron0x13d5220()*0.158264);
}

double NNfunction-NN_3_4::synapse0x13d75c0() {
   return (neuron0x13d5560()*0.104139);
}

double NNfunction-NN_3_4::synapse0x13d7600() {
   return (neuron0x13d58a0()*-0.222513);
}

double NNfunction-NN_3_4::synapse0x13d7900() {
   return (neuron0x13d5be0()*-0.93227);
}

double NNfunction-NN_3_4::synapse0x13d7940() {
   return (neuron0x13d5f20()*0.358565);
}

double NNfunction-NN_3_4::synapse0x13d7c40() {
   return (neuron0x13d6260()*0.401359);
}

double NNfunction-NN_3_4::synapse0x13d7c80() {
   return (neuron0x13d65a0()*-1.19893);
}

double NNfunction-NN_3_4::synapse0x13d7f80() {
   return (neuron0x13d68e0()*-0.239284);
}

double NNfunction-NN_3_4::synapse0x13d7fc0() {
   return (neuron0x13d6c20()*-1.17853);
}

double NNfunction-NN_3_4::synapse0x13d82c0() {
   return (neuron0x13d7180()*-0.341753);
}

double NNfunction-NN_3_4::synapse0x13d8300() {
   return (neuron0x13d73a0()*0.15307);
}

double NNfunction-NN_3_4::synapse0x13d8600() {
   return (neuron0x13d76e0()*0.596481);
}

double NNfunction-NN_3_4::synapse0x13d8640() {
   return (neuron0x13d7a20()*-0.0700538);
}

double NNfunction-NN_3_4::synapse0x13d6140() {
   return (neuron0x13d7d60()*0.353852);
}

double NNfunction-NN_3_4::synapse0x13d6180() {
   return (neuron0x13d80a0()*-0.46015);
}

double NNfunction-NN_3_4::synapse0x13e4450() {
   return (neuron0x13d83e0()*0.757665);
}

double NNfunction-NN_3_4::synapse0x13e47d0() {
   return (neuron0x13d3820()*0.00257495);
}

double NNfunction-NN_3_4::synapse0x13e4810() {
   return (neuron0x13d3b60()*0.0776747);
}

double NNfunction-NN_3_4::synapse0x13e4850() {
   return (neuron0x13d3ea0()*-0.60238);
}

double NNfunction-NN_3_4::synapse0x13e4890() {
   return (neuron0x13d41e0()*-0.0742323);
}

double NNfunction-NN_3_4::synapse0x13e48d0() {
   return (neuron0x13d4520()*-0.00331773);
}

double NNfunction-NN_3_4::synapse0x13e4910() {
   return (neuron0x13d4860()*0.012811);
}

double NNfunction-NN_3_4::synapse0x13e4950() {
   return (neuron0x13d4ba0()*-0.0086847);
}

double NNfunction-NN_3_4::synapse0x13e4990() {
   return (neuron0x13d4ee0()*-0.0270212);
}

double NNfunction-NN_3_4::synapse0x13e49d0() {
   return (neuron0x13d5220()*0.0181385);
}

double NNfunction-NN_3_4::synapse0x13e4a10() {
   return (neuron0x13d5560()*-0.00481689);
}

double NNfunction-NN_3_4::synapse0x13e4a50() {
   return (neuron0x13d58a0()*-0.00641959);
}

double NNfunction-NN_3_4::synapse0x13e4a90() {
   return (neuron0x13d5be0()*2.04858);
}

double NNfunction-NN_3_4::synapse0x13e4ad0() {
   return (neuron0x13d5f20()*-0.0139922);
}

double NNfunction-NN_3_4::synapse0x13e4b10() {
   return (neuron0x13d6260()*0.0148451);
}

double NNfunction-NN_3_4::synapse0x13e4b50() {
   return (neuron0x13d65a0()*0.0557941);
}

double NNfunction-NN_3_4::synapse0x13e4b90() {
   return (neuron0x13d68e0()*0.0409116);
}

double NNfunction-NN_3_4::synapse0x13e4620() {
   return (neuron0x13d6c20()*-0.0301554);
}

double NNfunction-NN_3_4::synapse0x13e4660() {
   return (neuron0x13d7180()*-0.0345181);
}

double NNfunction-NN_3_4::synapse0x13e4ce0() {
   return (neuron0x13d73a0()*-0.00758768);
}

double NNfunction-NN_3_4::synapse0x13e4d20() {
   return (neuron0x13d76e0()*0.0275718);
}

double NNfunction-NN_3_4::synapse0x13e4d60() {
   return (neuron0x13d7a20()*-0.0137549);
}

double NNfunction-NN_3_4::synapse0x13e4da0() {
   return (neuron0x13d7d60()*-0.00450323);
}

double NNfunction-NN_3_4::synapse0x13e4de0() {
   return (neuron0x13d80a0()*0.0416307);
}

double NNfunction-NN_3_4::synapse0x13e4e20() {
   return (neuron0x13d83e0()*-1.48132);
}

double NNfunction-NN_3_4::synapse0x13e51a0() {
   return (neuron0x13d3820()*-0.0483554);
}

double NNfunction-NN_3_4::synapse0x13e51e0() {
   return (neuron0x13d3b60()*-0.65813);
}

double NNfunction-NN_3_4::synapse0x13e5220() {
   return (neuron0x13d3ea0()*0.131875);
}

double NNfunction-NN_3_4::synapse0x13e5260() {
   return (neuron0x13d41e0()*-0.0348121);
}

double NNfunction-NN_3_4::synapse0x13e52a0() {
   return (neuron0x13d4520()*-0.00289865);
}

double NNfunction-NN_3_4::synapse0x13e52e0() {
   return (neuron0x13d4860()*-0.0133931);
}

double NNfunction-NN_3_4::synapse0x13e5320() {
   return (neuron0x13d4ba0()*-0.00587029);
}

double NNfunction-NN_3_4::synapse0x13e5360() {
   return (neuron0x13d4ee0()*0.00981189);
}

double NNfunction-NN_3_4::synapse0x13e53a0() {
   return (neuron0x13d5220()*0.00581268);
}

double NNfunction-NN_3_4::synapse0x13e53e0() {
   return (neuron0x13d5560()*0.0159906);
}

double NNfunction-NN_3_4::synapse0x13e5420() {
   return (neuron0x13d58a0()*-0.0101416);
}

double NNfunction-NN_3_4::synapse0x13e5460() {
   return (neuron0x13d5be0()*0.247466);
}

double NNfunction-NN_3_4::synapse0x13e54a0() {
   return (neuron0x13d5f20()*0.0294606);
}

double NNfunction-NN_3_4::synapse0x13e54e0() {
   return (neuron0x13d6260()*0.0268104);
}

double NNfunction-NN_3_4::synapse0x13e5520() {
   return (neuron0x13d65a0()*0.00321672);
}

double NNfunction-NN_3_4::synapse0x13e5560() {
   return (neuron0x13d68e0()*-0.00202193);
}

double NNfunction-NN_3_4::synapse0x13e4ff0() {
   return (neuron0x13d6c20()*0.00369861);
}

double NNfunction-NN_3_4::synapse0x13e5030() {
   return (neuron0x13d7180()*-0.0183468);
}

double NNfunction-NN_3_4::synapse0x13e56b0() {
   return (neuron0x13d73a0()*-0.00523259);
}

double NNfunction-NN_3_4::synapse0x13e56f0() {
   return (neuron0x13d76e0()*0.0113445);
}

double NNfunction-NN_3_4::synapse0x13e5730() {
   return (neuron0x13d7a20()*0.000390144);
}

double NNfunction-NN_3_4::synapse0x13e5770() {
   return (neuron0x13d7d60()*-0.00386237);
}

double NNfunction-NN_3_4::synapse0x13e57b0() {
   return (neuron0x13d80a0()*-0.00364111);
}

double NNfunction-NN_3_4::synapse0x13e57f0() {
   return (neuron0x13d83e0()*0.734927);
}

double NNfunction-NN_3_4::synapse0x13e5b70() {
   return (neuron0x13d3820()*0.0380433);
}

double NNfunction-NN_3_4::synapse0x13e5bb0() {
   return (neuron0x13d3b60()*0.0390566);
}

double NNfunction-NN_3_4::synapse0x13e5bf0() {
   return (neuron0x13d3ea0()*1.19311);
}

double NNfunction-NN_3_4::synapse0x13e5c30() {
   return (neuron0x13d41e0()*-0.0709162);
}

double NNfunction-NN_3_4::synapse0x13e5c70() {
   return (neuron0x13d4520()*-0.00809106);
}

double NNfunction-NN_3_4::synapse0x13e5cb0() {
   return (neuron0x13d4860()*0.010115);
}

double NNfunction-NN_3_4::synapse0x13e5cf0() {
   return (neuron0x13d4ba0()*0.0148844);
}

double NNfunction-NN_3_4::synapse0x13e5d30() {
   return (neuron0x13d4ee0()*-0.000208642);
}

double NNfunction-NN_3_4::synapse0x13e5d70() {
   return (neuron0x13d5220()*0.0123733);
}

double NNfunction-NN_3_4::synapse0x13e5db0() {
   return (neuron0x13d5560()*0.0100998);
}

double NNfunction-NN_3_4::synapse0x13e5df0() {
   return (neuron0x13d58a0()*-0.0017775);
}

double NNfunction-NN_3_4::synapse0x13e5e30() {
   return (neuron0x13d5be0()*-0.125715);
}

double NNfunction-NN_3_4::synapse0x13e5e70() {
   return (neuron0x13d5f20()*0.0199394);
}

double NNfunction-NN_3_4::synapse0x13e5eb0() {
   return (neuron0x13d6260()*0.00355413);
}

double NNfunction-NN_3_4::synapse0x13e5ef0() {
   return (neuron0x13d65a0()*-0.0200259);
}

double NNfunction-NN_3_4::synapse0x13e5f30() {
   return (neuron0x13d68e0()*-0.0374471);
}

double NNfunction-NN_3_4::synapse0x13e59c0() {
   return (neuron0x13d6c20()*0.0299558);
}

double NNfunction-NN_3_4::synapse0x13e5a00() {
   return (neuron0x13d7180()*0.019416);
}

double NNfunction-NN_3_4::synapse0x13e6080() {
   return (neuron0x13d73a0()*-0.00303509);
}

double NNfunction-NN_3_4::synapse0x13e60c0() {
   return (neuron0x13d76e0()*-0.00699394);
}

double NNfunction-NN_3_4::synapse0x13e6100() {
   return (neuron0x13d7a20()*-0.0145546);
}

double NNfunction-NN_3_4::synapse0x13e6140() {
   return (neuron0x13d7d60()*-0.0166743);
}

double NNfunction-NN_3_4::synapse0x13e6180() {
   return (neuron0x13d80a0()*-0.00352038);
}

double NNfunction-NN_3_4::synapse0x13e61c0() {
   return (neuron0x13d83e0()*-2.35539);
}

double NNfunction-NN_3_4::synapse0x13e6540() {
   return (neuron0x13d3820()*-0.0365673);
}

double NNfunction-NN_3_4::synapse0x13e6580() {
   return (neuron0x13d3b60()*0.00555054);
}

double NNfunction-NN_3_4::synapse0x13e65c0() {
   return (neuron0x13d3ea0()*-0.140024);
}

double NNfunction-NN_3_4::synapse0x13e6600() {
   return (neuron0x13d41e0()*-1.75943);
}

double NNfunction-NN_3_4::synapse0x13e6640() {
   return (neuron0x13d4520()*-0.033543);
}

double NNfunction-NN_3_4::synapse0x13e6680() {
   return (neuron0x13d4860()*0.00662542);
}

double NNfunction-NN_3_4::synapse0x13e66c0() {
   return (neuron0x13d4ba0()*-0.0100988);
}

double NNfunction-NN_3_4::synapse0x13e6700() {
   return (neuron0x13d4ee0()*-0.00320488);
}

double NNfunction-NN_3_4::synapse0x13e6740() {
   return (neuron0x13d5220()*-0.025095);
}

double NNfunction-NN_3_4::synapse0x13e6780() {
   return (neuron0x13d5560()*-0.00420063);
}

double NNfunction-NN_3_4::synapse0x13e67c0() {
   return (neuron0x13d58a0()*-0.0133107);
}

double NNfunction-NN_3_4::synapse0x13e6800() {
   return (neuron0x13d5be0()*-0.132228);
}

double NNfunction-NN_3_4::synapse0x13e6840() {
   return (neuron0x13d5f20()*-0.0619912);
}

double NNfunction-NN_3_4::synapse0x13e6880() {
   return (neuron0x13d6260()*0.00105393);
}

double NNfunction-NN_3_4::synapse0x13e68c0() {
   return (neuron0x13d65a0()*-0.0156949);
}

double NNfunction-NN_3_4::synapse0x13e6900() {
   return (neuron0x13d68e0()*0.0343917);
}

double NNfunction-NN_3_4::synapse0x13e6390() {
   return (neuron0x13d6c20()*0.0590533);
}

double NNfunction-NN_3_4::synapse0x13e63d0() {
   return (neuron0x13d7180()*-0.0521037);
}

double NNfunction-NN_3_4::synapse0x13e6a50() {
   return (neuron0x13d73a0()*-0.0436452);
}

double NNfunction-NN_3_4::synapse0x13e6a90() {
   return (neuron0x13d76e0()*-0.0251602);
}

double NNfunction-NN_3_4::synapse0x13e6ad0() {
   return (neuron0x13d7a20()*0.00225381);
}

double NNfunction-NN_3_4::synapse0x13e6b10() {
   return (neuron0x13d7d60()*0.0078464);
}

double NNfunction-NN_3_4::synapse0x13e6b50() {
   return (neuron0x13d80a0()*0.060087);
}

double NNfunction-NN_3_4::synapse0x13e6b90() {
   return (neuron0x13d83e0()*0.0304539);
}

double NNfunction-NN_3_4::synapse0x13e6f10() {
   return (neuron0x13d3820()*-0.0916507);
}

double NNfunction-NN_3_4::synapse0x13e6f50() {
   return (neuron0x13d3b60()*-6.00462);
}

double NNfunction-NN_3_4::synapse0x13e6f90() {
   return (neuron0x13d3ea0()*2.21606);
}

double NNfunction-NN_3_4::synapse0x13e6fd0() {
   return (neuron0x13d41e0()*0.0582786);
}

double NNfunction-NN_3_4::synapse0x13e7010() {
   return (neuron0x13d4520()*-0.0848286);
}

double NNfunction-NN_3_4::synapse0x13e7050() {
   return (neuron0x13d4860()*0.00974297);
}

double NNfunction-NN_3_4::synapse0x13e7090() {
   return (neuron0x13d4ba0()*0.0101808);
}

double NNfunction-NN_3_4::synapse0x13e70d0() {
   return (neuron0x13d4ee0()*0.0861852);
}

double NNfunction-NN_3_4::synapse0x13e7110() {
   return (neuron0x13d5220()*0.00301102);
}

double NNfunction-NN_3_4::synapse0x13df2d0() {
   return (neuron0x13d5560()*-0.0367375);
}

double NNfunction-NN_3_4::synapse0x13df310() {
   return (neuron0x13d58a0()*0.0665395);
}

double NNfunction-NN_3_4::synapse0x13df350() {
   return (neuron0x13d5be0()*-2.15499);
}

double NNfunction-NN_3_4::synapse0x13df390() {
   return (neuron0x13d5f20()*0.00865063);
}

double NNfunction-NN_3_4::synapse0x13df3d0() {
   return (neuron0x13d6260()*0.0114268);
}

double NNfunction-NN_3_4::synapse0x13df410() {
   return (neuron0x13d65a0()*0.189126);
}

double NNfunction-NN_3_4::synapse0x13df450() {
   return (neuron0x13d68e0()*-0.00464507);
}

double NNfunction-NN_3_4::synapse0x13e6d60() {
   return (neuron0x13d6c20()*0.0225637);
}

double NNfunction-NN_3_4::synapse0x13e6da0() {
   return (neuron0x13d7180()*0.0102996);
}

double NNfunction-NN_3_4::synapse0x13df5a0() {
   return (neuron0x13d73a0()*-0.0155225);
}

double NNfunction-NN_3_4::synapse0x13df5e0() {
   return (neuron0x13d76e0()*0.00485158);
}

double NNfunction-NN_3_4::synapse0x13df620() {
   return (neuron0x13d7a20()*0.035643);
}

double NNfunction-NN_3_4::synapse0x13df660() {
   return (neuron0x13d7d60()*-0.0451561);
}

double NNfunction-NN_3_4::synapse0x13df6a0() {
   return (neuron0x13d80a0()*-0.00629047);
}

double NNfunction-NN_3_4::synapse0x13df6e0() {
   return (neuron0x13d83e0()*-5.86473);
}

double NNfunction-NN_3_4::synapse0x13dfa60() {
   return (neuron0x13d3820()*0.0348772);
}

double NNfunction-NN_3_4::synapse0x13dfaa0() {
   return (neuron0x13d3b60()*-0.558517);
}

double NNfunction-NN_3_4::synapse0x13dfae0() {
   return (neuron0x13d3ea0()*0.158469);
}

double NNfunction-NN_3_4::synapse0x13dfb20() {
   return (neuron0x13d41e0()*-0.0167785);
}

double NNfunction-NN_3_4::synapse0x13dfb60() {
   return (neuron0x13d4520()*0.00160885);
}

double NNfunction-NN_3_4::synapse0x13dfba0() {
   return (neuron0x13d4860()*0.00067733);
}

double NNfunction-NN_3_4::synapse0x13dfbe0() {
   return (neuron0x13d4ba0()*0.0029633);
}

double NNfunction-NN_3_4::synapse0x13dfc20() {
   return (neuron0x13d4ee0()*0.00715768);
}

double NNfunction-NN_3_4::synapse0x13dfc60() {
   return (neuron0x13d5220()*-3.1913e-05);
}

double NNfunction-NN_3_4::synapse0x13dfca0() {
   return (neuron0x13d5560()*-0.00565458);
}

double NNfunction-NN_3_4::synapse0x13dfce0() {
   return (neuron0x13d58a0()*0.00537261);
}

double NNfunction-NN_3_4::synapse0x13dfd20() {
   return (neuron0x13d5be0()*-0.026134);
}

double NNfunction-NN_3_4::synapse0x13dfd60() {
   return (neuron0x13d5f20()*0.00821937);
}

double NNfunction-NN_3_4::synapse0x13dfda0() {
   return (neuron0x13d6260()*-0.00781555);
}

double NNfunction-NN_3_4::synapse0x13dfde0() {
   return (neuron0x13d65a0()*0.0145458);
}

double NNfunction-NN_3_4::synapse0x13dfe20() {
   return (neuron0x13d68e0()*0.0198188);
}

double NNfunction-NN_3_4::synapse0x13df8b0() {
   return (neuron0x13d6c20()*0.0193471);
}

double NNfunction-NN_3_4::synapse0x13df8f0() {
   return (neuron0x13d7180()*0.0159934);
}

double NNfunction-NN_3_4::synapse0x13dff70() {
   return (neuron0x13d73a0()*-0.00593026);
}

double NNfunction-NN_3_4::synapse0x13dffb0() {
   return (neuron0x13d76e0()*-0.00205748);
}

double NNfunction-NN_3_4::synapse0x13dfff0() {
   return (neuron0x13d7a20()*-0.00175631);
}

double NNfunction-NN_3_4::synapse0x13e0030() {
   return (neuron0x13d7d60()*0.0123213);
}

double NNfunction-NN_3_4::synapse0x13e0070() {
   return (neuron0x13d80a0()*0.0103172);
}

double NNfunction-NN_3_4::synapse0x13e00b0() {
   return (neuron0x13d83e0()*-1.37907);
}

double NNfunction-NN_3_4::synapse0x13e0280() {
   return (neuron0x13d3820()*0.0803103);
}

double NNfunction-NN_3_4::synapse0x13e9310() {
   return (neuron0x13d3b60()*-2.27744);
}

double NNfunction-NN_3_4::synapse0x13e9350() {
   return (neuron0x13d3ea0()*-0.729091);
}

double NNfunction-NN_3_4::synapse0x13e9390() {
   return (neuron0x13d41e0()*0.0270993);
}

double NNfunction-NN_3_4::synapse0x13e93d0() {
   return (neuron0x13d4520()*-0.00351035);
}

double NNfunction-NN_3_4::synapse0x13e9410() {
   return (neuron0x13d4860()*-0.0262159);
}

double NNfunction-NN_3_4::synapse0x13e9450() {
   return (neuron0x13d4ba0()*-0.0256613);
}

double NNfunction-NN_3_4::synapse0x13e9490() {
   return (neuron0x13d4ee0()*-0.0172373);
}

double NNfunction-NN_3_4::synapse0x13e94d0() {
   return (neuron0x13d5220()*0.00178375);
}

double NNfunction-NN_3_4::synapse0x13e9510() {
   return (neuron0x13d5560()*0.0560596);
}

double NNfunction-NN_3_4::synapse0x13e9550() {
   return (neuron0x13d58a0()*-0.00885031);
}

double NNfunction-NN_3_4::synapse0x13e9590() {
   return (neuron0x13d5be0()*1.19714);
}

double NNfunction-NN_3_4::synapse0x13e95d0() {
   return (neuron0x13d5f20()*0.026259);
}

double NNfunction-NN_3_4::synapse0x13e9610() {
   return (neuron0x13d6260()*0.0332297);
}

double NNfunction-NN_3_4::synapse0x13e9650() {
   return (neuron0x13d65a0()*0.0443139);
}

double NNfunction-NN_3_4::synapse0x13e9690() {
   return (neuron0x13d68e0()*-0.0599428);
}

double NNfunction-NN_3_4::synapse0x13e9160() {
   return (neuron0x13d6c20()*-0.0820988);
}

double NNfunction-NN_3_4::synapse0x13e91a0() {
   return (neuron0x13d7180()*0.0490794);
}

double NNfunction-NN_3_4::synapse0x13e97e0() {
   return (neuron0x13d73a0()*-0.0192146);
}

double NNfunction-NN_3_4::synapse0x13e9820() {
   return (neuron0x13d76e0()*0.0815801);
}

double NNfunction-NN_3_4::synapse0x13e9860() {
   return (neuron0x13d7a20()*-0.0126384);
}

double NNfunction-NN_3_4::synapse0x13e98a0() {
   return (neuron0x13d7d60()*-0.0082023);
}

double NNfunction-NN_3_4::synapse0x13e98e0() {
   return (neuron0x13d80a0()*-0.0402319);
}

double NNfunction-NN_3_4::synapse0x13e9920() {
   return (neuron0x13d83e0()*-2.48088);
}

double NNfunction-NN_3_4::synapse0x13e9ca0() {
   return (neuron0x13d3820()*0.085136);
}

double NNfunction-NN_3_4::synapse0x13e9ce0() {
   return (neuron0x13d3b60()*4.88807);
}

double NNfunction-NN_3_4::synapse0x13e9d20() {
   return (neuron0x13d3ea0()*-0.397612);
}

double NNfunction-NN_3_4::synapse0x13e9d60() {
   return (neuron0x13d41e0()*-0.0123258);
}

double NNfunction-NN_3_4::synapse0x13e9da0() {
   return (neuron0x13d4520()*-0.00973245);
}

double NNfunction-NN_3_4::synapse0x13e9de0() {
   return (neuron0x13d4860()*0.0140566);
}

double NNfunction-NN_3_4::synapse0x13e9e20() {
   return (neuron0x13d4ba0()*0.0123829);
}

double NNfunction-NN_3_4::synapse0x13e9e60() {
   return (neuron0x13d4ee0()*-0.00801274);
}

double NNfunction-NN_3_4::synapse0x13e9ea0() {
   return (neuron0x13d5220()*-0.0196862);
}

double NNfunction-NN_3_4::synapse0x13e9ee0() {
   return (neuron0x13d5560()*-0.0408003);
}

double NNfunction-NN_3_4::synapse0x13e9f20() {
   return (neuron0x13d58a0()*0.0359235);
}

double NNfunction-NN_3_4::synapse0x13e9f60() {
   return (neuron0x13d5be0()*0.192544);
}

double NNfunction-NN_3_4::synapse0x13e9fa0() {
   return (neuron0x13d5f20()*0.0606937);
}

double NNfunction-NN_3_4::synapse0x13e9fe0() {
   return (neuron0x13d6260()*0.0263401);
}

double NNfunction-NN_3_4::synapse0x13ea020() {
   return (neuron0x13d65a0()*0.175638);
}

double NNfunction-NN_3_4::synapse0x13ea060() {
   return (neuron0x13d68e0()*0.0181864);
}

double NNfunction-NN_3_4::synapse0x13e9af0() {
   return (neuron0x13d6c20()*0.0325584);
}

double NNfunction-NN_3_4::synapse0x13e9b30() {
   return (neuron0x13d7180()*0.0180645);
}

double NNfunction-NN_3_4::synapse0x13ea1b0() {
   return (neuron0x13d73a0()*0.00125446);
}

double NNfunction-NN_3_4::synapse0x13ea1f0() {
   return (neuron0x13d76e0()*-0.0479465);
}

double NNfunction-NN_3_4::synapse0x13ea230() {
   return (neuron0x13d7a20()*-0.0163766);
}

double NNfunction-NN_3_4::synapse0x13ea270() {
   return (neuron0x13d7d60()*-0.0113851);
}

double NNfunction-NN_3_4::synapse0x13ea2b0() {
   return (neuron0x13d80a0()*0.0137737);
}

double NNfunction-NN_3_4::synapse0x13ea2f0() {
   return (neuron0x13d83e0()*4.80201);
}

double NNfunction-NN_3_4::synapse0x13ea670() {
   return (neuron0x13d3820()*0.172231);
}

double NNfunction-NN_3_4::synapse0x13ea6b0() {
   return (neuron0x13d3b60()*0.0866667);
}

double NNfunction-NN_3_4::synapse0x13ea6f0() {
   return (neuron0x13d3ea0()*0.302043);
}

double NNfunction-NN_3_4::synapse0x13ea730() {
   return (neuron0x13d41e0()*-0.410195);
}

double NNfunction-NN_3_4::synapse0x13ea770() {
   return (neuron0x13d4520()*-0.582651);
}

double NNfunction-NN_3_4::synapse0x13ea7b0() {
   return (neuron0x13d4860()*0.270869);
}

double NNfunction-NN_3_4::synapse0x13ea7f0() {
   return (neuron0x13d4ba0()*-0.0351717);
}

double NNfunction-NN_3_4::synapse0x13ea830() {
   return (neuron0x13d4ee0()*-0.0650326);
}

double NNfunction-NN_3_4::synapse0x13ea870() {
   return (neuron0x13d5220()*-0.106424);
}

double NNfunction-NN_3_4::synapse0x13ea8b0() {
   return (neuron0x13d5560()*-0.198042);
}

double NNfunction-NN_3_4::synapse0x13ea8f0() {
   return (neuron0x13d58a0()*-0.111005);
}

double NNfunction-NN_3_4::synapse0x13ea930() {
   return (neuron0x13d5be0()*0.487837);
}

double NNfunction-NN_3_4::synapse0x13ea970() {
   return (neuron0x13d5f20()*-0.272715);
}

double NNfunction-NN_3_4::synapse0x13ea9b0() {
   return (neuron0x13d6260()*-0.0385443);
}

double NNfunction-NN_3_4::synapse0x13ea9f0() {
   return (neuron0x13d65a0()*0.0513775);
}

double NNfunction-NN_3_4::synapse0x13eaa30() {
   return (neuron0x13d68e0()*0.208687);
}

double NNfunction-NN_3_4::synapse0x13ea4c0() {
   return (neuron0x13d6c20()*-0.0791132);
}

double NNfunction-NN_3_4::synapse0x13ea500() {
   return (neuron0x13d7180()*-0.478194);
}

double NNfunction-NN_3_4::synapse0x13eab80() {
   return (neuron0x13d73a0()*0.0507876);
}

double NNfunction-NN_3_4::synapse0x13eabc0() {
   return (neuron0x13d76e0()*0.0348894);
}

double NNfunction-NN_3_4::synapse0x13eac00() {
   return (neuron0x13d7a20()*0.350537);
}

double NNfunction-NN_3_4::synapse0x13eac40() {
   return (neuron0x13d7d60()*-0.446314);
}

double NNfunction-NN_3_4::synapse0x13eac80() {
   return (neuron0x13d80a0()*0.443796);
}

double NNfunction-NN_3_4::synapse0x13eacc0() {
   return (neuron0x13d83e0()*-0.0134213);
}

double NNfunction-NN_3_4::synapse0x13eb040() {
   return (neuron0x13d3820()*0.0109612);
}

double NNfunction-NN_3_4::synapse0x13eb080() {
   return (neuron0x13d3b60()*-6.27055);
}

double NNfunction-NN_3_4::synapse0x13eb0c0() {
   return (neuron0x13d3ea0()*-0.607625);
}

double NNfunction-NN_3_4::synapse0x13eb100() {
   return (neuron0x13d41e0()*0.0306363);
}

double NNfunction-NN_3_4::synapse0x13eb140() {
   return (neuron0x13d4520()*-0.029617);
}

double NNfunction-NN_3_4::synapse0x13eb180() {
   return (neuron0x13d4860()*-0.0264444);
}

double NNfunction-NN_3_4::synapse0x13eb1c0() {
   return (neuron0x13d4ba0()*-0.00891255);
}

double NNfunction-NN_3_4::synapse0x13eb200() {
   return (neuron0x13d4ee0()*0.00726664);
}

double NNfunction-NN_3_4::synapse0x13eb240() {
   return (neuron0x13d5220()*-0.000389277);
}

double NNfunction-NN_3_4::synapse0x13eb280() {
   return (neuron0x13d5560()*-0.0191665);
}

double NNfunction-NN_3_4::synapse0x13eb2c0() {
   return (neuron0x13d58a0()*0.0339389);
}

double NNfunction-NN_3_4::synapse0x13eb300() {
   return (neuron0x13d5be0()*0.0627403);
}

double NNfunction-NN_3_4::synapse0x13eb340() {
   return (neuron0x13d5f20()*0.0199191);
}

double NNfunction-NN_3_4::synapse0x13eb380() {
   return (neuron0x13d6260()*0.018544);
}

double NNfunction-NN_3_4::synapse0x13eb3c0() {
   return (neuron0x13d65a0()*-0.0298923);
}

double NNfunction-NN_3_4::synapse0x13eb400() {
   return (neuron0x13d68e0()*0.0207768);
}

double NNfunction-NN_3_4::synapse0x13eae90() {
   return (neuron0x13d6c20()*0.0265164);
}

double NNfunction-NN_3_4::synapse0x13eaed0() {
   return (neuron0x13d7180()*-0.0247662);
}

double NNfunction-NN_3_4::synapse0x13eb550() {
   return (neuron0x13d73a0()*-0.00348697);
}

double NNfunction-NN_3_4::synapse0x13eb590() {
   return (neuron0x13d76e0()*0.0273692);
}

double NNfunction-NN_3_4::synapse0x13eb5d0() {
   return (neuron0x13d7a20()*0.0189615);
}

double NNfunction-NN_3_4::synapse0x13eb610() {
   return (neuron0x13d7d60()*0.0073448);
}

double NNfunction-NN_3_4::synapse0x13eb650() {
   return (neuron0x13d80a0()*-0.0277196);
}

double NNfunction-NN_3_4::synapse0x13eb690() {
   return (neuron0x13d83e0()*6.70021);
}

double NNfunction-NN_3_4::synapse0x13eba10() {
   return (neuron0x13d3820()*-0.0241975);
}

double NNfunction-NN_3_4::synapse0x13eba50() {
   return (neuron0x13d3b60()*0.533924);
}

double NNfunction-NN_3_4::synapse0x13eba90() {
   return (neuron0x13d3ea0()*-0.2213);
}

double NNfunction-NN_3_4::synapse0x13ebad0() {
   return (neuron0x13d41e0()*0.00782818);
}

double NNfunction-NN_3_4::synapse0x13ebb10() {
   return (neuron0x13d4520()*-0.0100807);
}

double NNfunction-NN_3_4::synapse0x13ebb50() {
   return (neuron0x13d4860()*0.0193093);
}

double NNfunction-NN_3_4::synapse0x13ebb90() {
   return (neuron0x13d4ba0()*-0.0209293);
}

double NNfunction-NN_3_4::synapse0x13ebbd0() {
   return (neuron0x13d4ee0()*-0.00779166);
}

double NNfunction-NN_3_4::synapse0x13ebc10() {
   return (neuron0x13d5220()*-0.00761493);
}

double NNfunction-NN_3_4::synapse0x13ebc50() {
   return (neuron0x13d5560()*0.0298941);
}

double NNfunction-NN_3_4::synapse0x13ebc90() {
   return (neuron0x13d58a0()*-0.00121429);
}

double NNfunction-NN_3_4::synapse0x13ebcd0() {
   return (neuron0x13d5be0()*0.311618);
}

double NNfunction-NN_3_4::synapse0x13ebd10() {
   return (neuron0x13d5f20()*0.0170145);
}

double NNfunction-NN_3_4::synapse0x13ebd50() {
   return (neuron0x13d6260()*0.0413949);
}

double NNfunction-NN_3_4::synapse0x13ebd90() {
   return (neuron0x13d65a0()*0.0503305);
}

double NNfunction-NN_3_4::synapse0x13ebdd0() {
   return (neuron0x13d68e0()*0.00764434);
}

double NNfunction-NN_3_4::synapse0x13eb860() {
   return (neuron0x13d6c20()*-0.0195656);
}

double NNfunction-NN_3_4::synapse0x13eb8a0() {
   return (neuron0x13d7180()*-0.0367741);
}

double NNfunction-NN_3_4::synapse0x13ebf20() {
   return (neuron0x13d73a0()*0.00861047);
}

double NNfunction-NN_3_4::synapse0x13ebf60() {
   return (neuron0x13d76e0()*0.0167087);
}

double NNfunction-NN_3_4::synapse0x13ebfa0() {
   return (neuron0x13d7a20()*0.027792);
}

double NNfunction-NN_3_4::synapse0x13ebfe0() {
   return (neuron0x13d7d60()*-0.0136554);
}

double NNfunction-NN_3_4::synapse0x13ec020() {
   return (neuron0x13d80a0()*0.0139716);
}

double NNfunction-NN_3_4::synapse0x13ec060() {
   return (neuron0x13d83e0()*2.33112);
}

double NNfunction-NN_3_4::synapse0x13ec3e0() {
   return (neuron0x13d3820()*0.44998);
}

double NNfunction-NN_3_4::synapse0x13ec420() {
   return (neuron0x13d3b60()*-0.0736155);
}

double NNfunction-NN_3_4::synapse0x13ec460() {
   return (neuron0x13d3ea0()*-0.298309);
}

double NNfunction-NN_3_4::synapse0x13ec4a0() {
   return (neuron0x13d41e0()*0.0842253);
}

double NNfunction-NN_3_4::synapse0x13ec4e0() {
   return (neuron0x13d4520()*-0.256653);
}

double NNfunction-NN_3_4::synapse0x13ec520() {
   return (neuron0x13d4860()*-0.140119);
}

double NNfunction-NN_3_4::synapse0x13ec560() {
   return (neuron0x13d4ba0()*-0.30651);
}

double NNfunction-NN_3_4::synapse0x13ec5a0() {
   return (neuron0x13d4ee0()*0.000974854);
}

double NNfunction-NN_3_4::synapse0x13ec5e0() {
   return (neuron0x13d5220()*0.164236);
}

double NNfunction-NN_3_4::synapse0x13ec620() {
   return (neuron0x13d5560()*0.223924);
}

double NNfunction-NN_3_4::synapse0x13ec660() {
   return (neuron0x13d58a0()*-0.206958);
}

double NNfunction-NN_3_4::synapse0x13ec6a0() {
   return (neuron0x13d5be0()*0.331544);
}

double NNfunction-NN_3_4::synapse0x13ec6e0() {
   return (neuron0x13d5f20()*0.401419);
}

double NNfunction-NN_3_4::synapse0x13ec720() {
   return (neuron0x13d6260()*-0.471148);
}

double NNfunction-NN_3_4::synapse0x13ec760() {
   return (neuron0x13d65a0()*0.169853);
}

double NNfunction-NN_3_4::synapse0x13ec7a0() {
   return (neuron0x13d68e0()*0.1611);
}

double NNfunction-NN_3_4::synapse0x13ec230() {
   return (neuron0x13d6c20()*0.368798);
}

double NNfunction-NN_3_4::synapse0x13ec270() {
   return (neuron0x13d7180()*-0.0036168);
}

double NNfunction-NN_3_4::synapse0x13ec8f0() {
   return (neuron0x13d73a0()*-0.156576);
}

double NNfunction-NN_3_4::synapse0x13ec930() {
   return (neuron0x13d76e0()*0.0981786);
}

double NNfunction-NN_3_4::synapse0x13ec970() {
   return (neuron0x13d7a20()*0.117124);
}

double NNfunction-NN_3_4::synapse0x13ec9b0() {
   return (neuron0x13d7d60()*0.23559);
}

double NNfunction-NN_3_4::synapse0x13ec9f0() {
   return (neuron0x13d80a0()*0.132071);
}

double NNfunction-NN_3_4::synapse0x13eca30() {
   return (neuron0x13d83e0()*-0.00418956);
}

double NNfunction-NN_3_4::synapse0x13ecdb0() {
   return (neuron0x13d3820()*0.0621119);
}

double NNfunction-NN_3_4::synapse0x13ecdf0() {
   return (neuron0x13d3b60()*0.214536);
}

double NNfunction-NN_3_4::synapse0x13ece30() {
   return (neuron0x13d3ea0()*-0.780182);
}

double NNfunction-NN_3_4::synapse0x13ece70() {
   return (neuron0x13d41e0()*0.216034);
}

double NNfunction-NN_3_4::synapse0x13eceb0() {
   return (neuron0x13d4520()*-0.946561);
}

double NNfunction-NN_3_4::synapse0x13ecef0() {
   return (neuron0x13d4860()*0.73946);
}

double NNfunction-NN_3_4::synapse0x13ecf30() {
   return (neuron0x13d4ba0()*-0.257078);
}

double NNfunction-NN_3_4::synapse0x13ecf70() {
   return (neuron0x13d4ee0()*0.0679341);
}

double NNfunction-NN_3_4::synapse0x13ecfb0() {
   return (neuron0x13d5220()*0.291909);
}

double NNfunction-NN_3_4::synapse0x13ecff0() {
   return (neuron0x13d5560()*0.0324072);
}

double NNfunction-NN_3_4::synapse0x13ed030() {
   return (neuron0x13d58a0()*-0.545489);
}

double NNfunction-NN_3_4::synapse0x13ed070() {
   return (neuron0x13d5be0()*-0.138391);
}

double NNfunction-NN_3_4::synapse0x13ed0b0() {
   return (neuron0x13d5f20()*0.0638146);
}

double NNfunction-NN_3_4::synapse0x13ed0f0() {
   return (neuron0x13d6260()*-0.362594);
}

double NNfunction-NN_3_4::synapse0x13ed130() {
   return (neuron0x13d65a0()*-0.65959);
}

double NNfunction-NN_3_4::synapse0x13ed170() {
   return (neuron0x13d68e0()*-0.0468983);
}

double NNfunction-NN_3_4::synapse0x13ecc00() {
   return (neuron0x13d6c20()*0.0157932);
}

double NNfunction-NN_3_4::synapse0x13ecc40() {
   return (neuron0x13d7180()*0.946585);
}

double NNfunction-NN_3_4::synapse0x13ed2c0() {
   return (neuron0x13d73a0()*0.488087);
}

double NNfunction-NN_3_4::synapse0x13ed300() {
   return (neuron0x13d76e0()*-0.167201);
}

double NNfunction-NN_3_4::synapse0x13ed340() {
   return (neuron0x13d7a20()*-0.158214);
}

double NNfunction-NN_3_4::synapse0x13ed380() {
   return (neuron0x13d7d60()*0.0867155);
}

double NNfunction-NN_3_4::synapse0x13ed3c0() {
   return (neuron0x13d80a0()*0.648995);
}

double NNfunction-NN_3_4::synapse0x13ed400() {
   return (neuron0x13d83e0()*0.752567);
}

double NNfunction-NN_3_4::synapse0x13ed780() {
   return (neuron0x13d3820()*-0.143375);
}

double NNfunction-NN_3_4::synapse0x13ed7c0() {
   return (neuron0x13d3b60()*1.55772);
}

double NNfunction-NN_3_4::synapse0x13ed800() {
   return (neuron0x13d3ea0()*-0.279823);
}

double NNfunction-NN_3_4::synapse0x13ed840() {
   return (neuron0x13d41e0()*-0.0969251);
}

double NNfunction-NN_3_4::synapse0x13ed880() {
   return (neuron0x13d4520()*-0.0779798);
}

double NNfunction-NN_3_4::synapse0x13ed8c0() {
   return (neuron0x13d4860()*0.250536);
}

double NNfunction-NN_3_4::synapse0x13ed900() {
   return (neuron0x13d4ba0()*0.0749468);
}

double NNfunction-NN_3_4::synapse0x13ed940() {
   return (neuron0x13d4ee0()*-0.00561484);
}

double NNfunction-NN_3_4::synapse0x13ed980() {
   return (neuron0x13d5220()*-0.16096);
}

double NNfunction-NN_3_4::synapse0x13ed9c0() {
   return (neuron0x13d5560()*-0.00938111);
}

double NNfunction-NN_3_4::synapse0x13eda00() {
   return (neuron0x13d58a0()*0.0654694);
}

double NNfunction-NN_3_4::synapse0x13eda40() {
   return (neuron0x13d5be0()*0.195078);
}

double NNfunction-NN_3_4::synapse0x13eda80() {
   return (neuron0x13d5f20()*-0.12593);
}

double NNfunction-NN_3_4::synapse0x13edac0() {
   return (neuron0x13d6260()*-0.129753);
}

double NNfunction-NN_3_4::synapse0x13edb00() {
   return (neuron0x13d65a0()*0.995901);
}

double NNfunction-NN_3_4::synapse0x13edb40() {
   return (neuron0x13d68e0()*0.172744);
}

double NNfunction-NN_3_4::synapse0x13ed5d0() {
   return (neuron0x13d6c20()*0.212883);
}

double NNfunction-NN_3_4::synapse0x13ed610() {
   return (neuron0x13d7180()*-0.0691367);
}

double NNfunction-NN_3_4::synapse0x13edc90() {
   return (neuron0x13d73a0()*-0.0199091);
}

double NNfunction-NN_3_4::synapse0x13edcd0() {
   return (neuron0x13d76e0()*-0.119789);
}

double NNfunction-NN_3_4::synapse0x13edd10() {
   return (neuron0x13d7a20()*0.257477);
}

double NNfunction-NN_3_4::synapse0x13edd50() {
   return (neuron0x13d7d60()*-0.127954);
}

double NNfunction-NN_3_4::synapse0x13edd90() {
   return (neuron0x13d80a0()*0.0986921);
}

double NNfunction-NN_3_4::synapse0x13eddd0() {
   return (neuron0x13d83e0()*0.660167);
}

double NNfunction-NN_3_4::synapse0x13ee150() {
   return (neuron0x13d3820()*0.00544804);
}

double NNfunction-NN_3_4::synapse0x13e2720() {
   return (neuron0x13d3b60()*3.78234);
}

double NNfunction-NN_3_4::synapse0x13e2760() {
   return (neuron0x13d3ea0()*-1.07626);
}

double NNfunction-NN_3_4::synapse0x13e27a0() {
   return (neuron0x13d41e0()*-0.036081);
}

double NNfunction-NN_3_4::synapse0x13e29f0() {
   return (neuron0x13d4520()*0.0344961);
}

double NNfunction-NN_3_4::synapse0x13e2a30() {
   return (neuron0x13d4860()*0.0183543);
}

double NNfunction-NN_3_4::synapse0x13e2a70() {
   return (neuron0x13d4ba0()*-0.0100322);
}

double NNfunction-NN_3_4::synapse0x13e2cc0() {
   return (neuron0x13d4ee0()*-0.026612);
}

double NNfunction-NN_3_4::synapse0x13e2d00() {
   return (neuron0x13d5220()*0.0346179);
}

double NNfunction-NN_3_4::synapse0x13e2f50() {
   return (neuron0x13d5560()*-0.00068971);
}

double NNfunction-NN_3_4::synapse0x13e2f90() {
   return (neuron0x13d58a0()*-0.0290279);
}

double NNfunction-NN_3_4::synapse0x13e2fd0() {
   return (neuron0x13d5be0()*0.0254531);
}

double NNfunction-NN_3_4::synapse0x13e3220() {
   return (neuron0x13d5f20()*0.0218776);
}

double NNfunction-NN_3_4::synapse0x13e3260() {
   return (neuron0x13d6260()*-0.0361119);
}

double NNfunction-NN_3_4::synapse0x13e34b0() {
   return (neuron0x13d65a0()*-0.0547899);
}

double NNfunction-NN_3_4::synapse0x13e34f0() {
   return (neuron0x13d68e0()*0.00304803);
}

double NNfunction-NN_3_4::synapse0x13edfa0() {
   return (neuron0x13d6c20()*0.017809);
}

double NNfunction-NN_3_4::synapse0x13edfe0() {
   return (neuron0x13d7180()*-0.0577734);
}

double NNfunction-NN_3_4::synapse0x13e3640() {
   return (neuron0x13d73a0()*-0.0121756);
}

double NNfunction-NN_3_4::synapse0x13e3b50() {
   return (neuron0x13d76e0()*-0.0374799);
}

double NNfunction-NN_3_4::synapse0x13e3b90() {
   return (neuron0x13d7a20()*-0.00568904);
}

double NNfunction-NN_3_4::synapse0x13e3bd0() {
   return (neuron0x13d7d60()*-0.00861471);
}

double NNfunction-NN_3_4::synapse0x13e3e20() {
   return (neuron0x13d80a0()*0.0117418);
}

double NNfunction-NN_3_4::synapse0x13e3e60() {
   return (neuron0x13d83e0()*5.77264);
}

double NNfunction-NN_3_4::synapse0x13e3710() {
   return (neuron0x13d3820()*0.0213317);
}

double NNfunction-NN_3_4::synapse0x13e3750() {
   return (neuron0x13d3b60()*7.52626);
}

double NNfunction-NN_3_4::synapse0x13e3790() {
   return (neuron0x13d3ea0()*2.57994);
}

double NNfunction-NN_3_4::synapse0x13e37d0() {
   return (neuron0x13d41e0()*-0.0494799);
}

double NNfunction-NN_3_4::synapse0x13e4150() {
   return (neuron0x13d4520()*0.0160795);
}

double NNfunction-NN_3_4::synapse0x13f04a0() {
   return (neuron0x13d4860()*-0.0254408);
}

double NNfunction-NN_3_4::synapse0x13f04e0() {
   return (neuron0x13d4ba0()*0.079882);
}

double NNfunction-NN_3_4::synapse0x13f0520() {
   return (neuron0x13d4ee0()*-0.0462181);
}

double NNfunction-NN_3_4::synapse0x13f0560() {
   return (neuron0x13d5220()*0.0141814);
}

double NNfunction-NN_3_4::synapse0x13f05a0() {
   return (neuron0x13d5560()*-0.0141443);
}

double NNfunction-NN_3_4::synapse0x13f05e0() {
   return (neuron0x13d58a0()*0.0478916);
}

double NNfunction-NN_3_4::synapse0x13f0620() {
   return (neuron0x13d5be0()*-0.155609);
}

double NNfunction-NN_3_4::synapse0x13f0660() {
   return (neuron0x13d5f20()*0.0155049);
}

double NNfunction-NN_3_4::synapse0x13f06a0() {
   return (neuron0x13d6260()*-0.0492749);
}

double NNfunction-NN_3_4::synapse0x13f06e0() {
   return (neuron0x13d65a0()*0.133142);
}

double NNfunction-NN_3_4::synapse0x13f0720() {
   return (neuron0x13d68e0()*0.071895);
}

double NNfunction-NN_3_4::synapse0x13e4030() {
   return (neuron0x13d6c20()*0.0759377);
}

double NNfunction-NN_3_4::synapse0x13e4070() {
   return (neuron0x13d7180()*-0.0791529);
}

double NNfunction-NN_3_4::synapse0x13f0870() {
   return (neuron0x13d73a0()*0.0424588);
}

double NNfunction-NN_3_4::synapse0x13f08b0() {
   return (neuron0x13d76e0()*-0.0447511);
}

double NNfunction-NN_3_4::synapse0x13f08f0() {
   return (neuron0x13d7a20()*0.0935561);
}

double NNfunction-NN_3_4::synapse0x13f0930() {
   return (neuron0x13d7d60()*0.00437909);
}

double NNfunction-NN_3_4::synapse0x13f0970() {
   return (neuron0x13d80a0()*0.120645);
}

double NNfunction-NN_3_4::synapse0x13f09b0() {
   return (neuron0x13d83e0()*7.63106);
}

double NNfunction-NN_3_4::synapse0x13f0d30() {
   return (neuron0x13d3820()*-0.0767238);
}

double NNfunction-NN_3_4::synapse0x13f0d70() {
   return (neuron0x13d3b60()*-1.422);
}

double NNfunction-NN_3_4::synapse0x13f0db0() {
   return (neuron0x13d3ea0()*1.06129);
}

double NNfunction-NN_3_4::synapse0x13f0df0() {
   return (neuron0x13d41e0()*-0.0101459);
}

double NNfunction-NN_3_4::synapse0x13f0e30() {
   return (neuron0x13d4520()*-0.004645);
}

double NNfunction-NN_3_4::synapse0x13f0e70() {
   return (neuron0x13d4860()*-0.0621843);
}

double NNfunction-NN_3_4::synapse0x13f0eb0() {
   return (neuron0x13d4ba0()*-0.00818127);
}

double NNfunction-NN_3_4::synapse0x13f0ef0() {
   return (neuron0x13d4ee0()*0.0258738);
}

double NNfunction-NN_3_4::synapse0x13f0f30() {
   return (neuron0x13d5220()*0.0931791);
}

double NNfunction-NN_3_4::synapse0x13f0f70() {
   return (neuron0x13d5560()*-0.0321379);
}

double NNfunction-NN_3_4::synapse0x13f0fb0() {
   return (neuron0x13d58a0()*0.0220007);
}

double NNfunction-NN_3_4::synapse0x13f0ff0() {
   return (neuron0x13d5be0()*-0.811359);
}

double NNfunction-NN_3_4::synapse0x13f1030() {
   return (neuron0x13d5f20()*0.00557182);
}

double NNfunction-NN_3_4::synapse0x13f1070() {
   return (neuron0x13d6260()*0.027588);
}

double NNfunction-NN_3_4::synapse0x13f10b0() {
   return (neuron0x13d65a0()*-0.134147);
}

double NNfunction-NN_3_4::synapse0x13f10f0() {
   return (neuron0x13d68e0()*-0.0440543);
}

double NNfunction-NN_3_4::synapse0x13f0b80() {
   return (neuron0x13d6c20()*0.005325);
}

double NNfunction-NN_3_4::synapse0x13f0bc0() {
   return (neuron0x13d7180()*-0.0331657);
}

double NNfunction-NN_3_4::synapse0x13f1240() {
   return (neuron0x13d73a0()*0.0241625);
}

double NNfunction-NN_3_4::synapse0x13f1280() {
   return (neuron0x13d76e0()*0.010826);
}

double NNfunction-NN_3_4::synapse0x13f12c0() {
   return (neuron0x13d7a20()*-0.0315102);
}

double NNfunction-NN_3_4::synapse0x13f1300() {
   return (neuron0x13d7d60()*-0.0107458);
}

double NNfunction-NN_3_4::synapse0x13f1340() {
   return (neuron0x13d80a0()*-0.000863921);
}

double NNfunction-NN_3_4::synapse0x13f1380() {
   return (neuron0x13d83e0()*2.91692);
}

double NNfunction-NN_3_4::synapse0x13f1700() {
   return (neuron0x13d3820()*0.0390279);
}

double NNfunction-NN_3_4::synapse0x13f1740() {
   return (neuron0x13d3b60()*2.75362);
}

double NNfunction-NN_3_4::synapse0x13f1780() {
   return (neuron0x13d3ea0()*-2.09174);
}

double NNfunction-NN_3_4::synapse0x13f17c0() {
   return (neuron0x13d41e0()*0.034353);
}

double NNfunction-NN_3_4::synapse0x13f1800() {
   return (neuron0x13d4520()*-0.0570325);
}

double NNfunction-NN_3_4::synapse0x13f1840() {
   return (neuron0x13d4860()*0.0352169);
}

double NNfunction-NN_3_4::synapse0x13f1880() {
   return (neuron0x13d4ba0()*-0.0276435);
}

double NNfunction-NN_3_4::synapse0x13f18c0() {
   return (neuron0x13d4ee0()*-0.0488151);
}

double NNfunction-NN_3_4::synapse0x13f1900() {
   return (neuron0x13d5220()*0.0736793);
}

double NNfunction-NN_3_4::synapse0x13f1940() {
   return (neuron0x13d5560()*-0.0491908);
}

double NNfunction-NN_3_4::synapse0x13f1980() {
   return (neuron0x13d58a0()*0.077071);
}

double NNfunction-NN_3_4::synapse0x13f19c0() {
   return (neuron0x13d5be0()*0.235053);
}

double NNfunction-NN_3_4::synapse0x13f1a00() {
   return (neuron0x13d5f20()*0.105288);
}

double NNfunction-NN_3_4::synapse0x13f1a40() {
   return (neuron0x13d6260()*-0.0470399);
}

double NNfunction-NN_3_4::synapse0x13f1a80() {
   return (neuron0x13d65a0()*-0.0581277);
}

double NNfunction-NN_3_4::synapse0x13f1ac0() {
   return (neuron0x13d68e0()*-0.0418372);
}

double NNfunction-NN_3_4::synapse0x13f1550() {
   return (neuron0x13d6c20()*-0.0575557);
}

double NNfunction-NN_3_4::synapse0x13f1590() {
   return (neuron0x13d7180()*0.0377997);
}

double NNfunction-NN_3_4::synapse0x13f1c10() {
   return (neuron0x13d73a0()*0.0618975);
}

double NNfunction-NN_3_4::synapse0x13f1c50() {
   return (neuron0x13d76e0()*0.0498157);
}

double NNfunction-NN_3_4::synapse0x13f1c90() {
   return (neuron0x13d7a20()*-0.042065);
}

double NNfunction-NN_3_4::synapse0x13f1cd0() {
   return (neuron0x13d7d60()*-0.0582068);
}

double NNfunction-NN_3_4::synapse0x13f1d10() {
   return (neuron0x13d80a0()*0.0576842);
}

double NNfunction-NN_3_4::synapse0x13f1d50() {
   return (neuron0x13d83e0()*0.387639);
}

double NNfunction-NN_3_4::synapse0x13f20d0() {
   return (neuron0x13d3820()*-0.206322);
}

double NNfunction-NN_3_4::synapse0x13f2110() {
   return (neuron0x13d3b60()*-0.181276);
}

double NNfunction-NN_3_4::synapse0x13f2150() {
   return (neuron0x13d3ea0()*0.140127);
}

double NNfunction-NN_3_4::synapse0x13f2190() {
   return (neuron0x13d41e0()*0.0163984);
}

double NNfunction-NN_3_4::synapse0x13f21d0() {
   return (neuron0x13d4520()*0.154923);
}

double NNfunction-NN_3_4::synapse0x13f2210() {
   return (neuron0x13d4860()*0.319867);
}

double NNfunction-NN_3_4::synapse0x13f2250() {
   return (neuron0x13d4ba0()*0.0993949);
}

double NNfunction-NN_3_4::synapse0x13f2290() {
   return (neuron0x13d4ee0()*0.162119);
}

double NNfunction-NN_3_4::synapse0x13f22d0() {
   return (neuron0x13d5220()*-0.0579791);
}

double NNfunction-NN_3_4::synapse0x13f2310() {
   return (neuron0x13d5560()*-0.264037);
}

double NNfunction-NN_3_4::synapse0x13f2350() {
   return (neuron0x13d58a0()*-0.300187);
}

double NNfunction-NN_3_4::synapse0x13f2390() {
   return (neuron0x13d5be0()*-0.306079);
}

double NNfunction-NN_3_4::synapse0x13f23d0() {
   return (neuron0x13d5f20()*-0.730829);
}

double NNfunction-NN_3_4::synapse0x13f2410() {
   return (neuron0x13d6260()*-0.0356861);
}

double NNfunction-NN_3_4::synapse0x13f2450() {
   return (neuron0x13d65a0()*0.997656);
}

double NNfunction-NN_3_4::synapse0x13f2490() {
   return (neuron0x13d68e0()*0.122196);
}

double NNfunction-NN_3_4::synapse0x13f1f20() {
   return (neuron0x13d6c20()*-0.0432377);
}

double NNfunction-NN_3_4::synapse0x13f1f60() {
   return (neuron0x13d7180()*0.0613408);
}

double NNfunction-NN_3_4::synapse0x13f25e0() {
   return (neuron0x13d73a0()*-0.265728);
}

double NNfunction-NN_3_4::synapse0x13f2620() {
   return (neuron0x13d76e0()*-0.366653);
}

double NNfunction-NN_3_4::synapse0x13f2660() {
   return (neuron0x13d7a20()*0.0737659);
}

double NNfunction-NN_3_4::synapse0x13f26a0() {
   return (neuron0x13d7d60()*-0.223387);
}

double NNfunction-NN_3_4::synapse0x13f26e0() {
   return (neuron0x13d80a0()*0.0408932);
}

double NNfunction-NN_3_4::synapse0x13f2720() {
   return (neuron0x13d83e0()*-0.165023);
}

double NNfunction-NN_3_4::synapse0x13f2aa0() {
   return (neuron0x13d3820()*0.0420347);
}

double NNfunction-NN_3_4::synapse0x13f2ae0() {
   return (neuron0x13d3b60()*0.241245);
}

double NNfunction-NN_3_4::synapse0x13f2b20() {
   return (neuron0x13d3ea0()*-3.16555);
}

double NNfunction-NN_3_4::synapse0x13f2b60() {
   return (neuron0x13d41e0()*0.0227704);
}

double NNfunction-NN_3_4::synapse0x13f2ba0() {
   return (neuron0x13d4520()*0.0143845);
}

double NNfunction-NN_3_4::synapse0x13f2be0() {
   return (neuron0x13d4860()*-0.0380319);
}

double NNfunction-NN_3_4::synapse0x13f2c20() {
   return (neuron0x13d4ba0()*0.00206172);
}

double NNfunction-NN_3_4::synapse0x13f2c60() {
   return (neuron0x13d4ee0()*0.00132522);
}

double NNfunction-NN_3_4::synapse0x13f2ca0() {
   return (neuron0x13d5220()*0.00886764);
}

double NNfunction-NN_3_4::synapse0x13f2ce0() {
   return (neuron0x13d5560()*-0.0161953);
}

double NNfunction-NN_3_4::synapse0x13f2d20() {
   return (neuron0x13d58a0()*0.008843);
}

double NNfunction-NN_3_4::synapse0x13f2d60() {
   return (neuron0x13d5be0()*0.242911);
}

double NNfunction-NN_3_4::synapse0x13f2da0() {
   return (neuron0x13d5f20()*0.0117887);
}

double NNfunction-NN_3_4::synapse0x13f2de0() {
   return (neuron0x13d6260()*-0.0110901);
}

double NNfunction-NN_3_4::synapse0x13f2e20() {
   return (neuron0x13d65a0()*0.0257656);
}

double NNfunction-NN_3_4::synapse0x13f2e60() {
   return (neuron0x13d68e0()*-0.00249787);
}

double NNfunction-NN_3_4::synapse0x13f28f0() {
   return (neuron0x13d6c20()*0.031366);
}

double NNfunction-NN_3_4::synapse0x13f2930() {
   return (neuron0x13d7180()*-0.00233825);
}

double NNfunction-NN_3_4::synapse0x13f2fb0() {
   return (neuron0x13d73a0()*0.00174538);
}

double NNfunction-NN_3_4::synapse0x13f2ff0() {
   return (neuron0x13d76e0()*0.0110059);
}

double NNfunction-NN_3_4::synapse0x13f3030() {
   return (neuron0x13d7a20()*0.0213693);
}

double NNfunction-NN_3_4::synapse0x13f3070() {
   return (neuron0x13d7d60()*-0.00136824);
}

double NNfunction-NN_3_4::synapse0x13f30b0() {
   return (neuron0x13d80a0()*-0.00613595);
}

double NNfunction-NN_3_4::synapse0x13f30f0() {
   return (neuron0x13d83e0()*-4.9263);
}

double NNfunction-NN_3_4::synapse0x13f3470() {
   return (neuron0x13d3820()*-0.0514419);
}

double NNfunction-NN_3_4::synapse0x13f34b0() {
   return (neuron0x13d3b60()*-2.71382);
}

double NNfunction-NN_3_4::synapse0x13f34f0() {
   return (neuron0x13d3ea0()*2.73817);
}

double NNfunction-NN_3_4::synapse0x13f3530() {
   return (neuron0x13d41e0()*-0.0243478);
}

double NNfunction-NN_3_4::synapse0x13f3570() {
   return (neuron0x13d4520()*-0.0424912);
}

double NNfunction-NN_3_4::synapse0x13f35b0() {
   return (neuron0x13d4860()*0.0474146);
}

double NNfunction-NN_3_4::synapse0x13f35f0() {
   return (neuron0x13d4ba0()*0.0140772);
}

double NNfunction-NN_3_4::synapse0x13f3630() {
   return (neuron0x13d4ee0()*-0.0239854);
}

double NNfunction-NN_3_4::synapse0x13f3670() {
   return (neuron0x13d5220()*0.0166468);
}

double NNfunction-NN_3_4::synapse0x13f36b0() {
   return (neuron0x13d5560()*-0.0329308);
}

double NNfunction-NN_3_4::synapse0x13f36f0() {
   return (neuron0x13d58a0()*0.000773578);
}

double NNfunction-NN_3_4::synapse0x13f3730() {
   return (neuron0x13d5be0()*-3.92965);
}

double NNfunction-NN_3_4::synapse0x13f3770() {
   return (neuron0x13d5f20()*-0.022892);
}

double NNfunction-NN_3_4::synapse0x13f37b0() {
   return (neuron0x13d6260()*0.0170487);
}

double NNfunction-NN_3_4::synapse0x13f37f0() {
   return (neuron0x13d65a0()*0.0176257);
}

double NNfunction-NN_3_4::synapse0x13f3830() {
   return (neuron0x13d68e0()*0.0363592);
}

double NNfunction-NN_3_4::synapse0x13f32c0() {
   return (neuron0x13d6c20()*0.046776);
}

double NNfunction-NN_3_4::synapse0x13f3300() {
   return (neuron0x13d7180()*-0.00760107);
}

double NNfunction-NN_3_4::synapse0x13f3980() {
   return (neuron0x13d73a0()*0.0159237);
}

double NNfunction-NN_3_4::synapse0x13f39c0() {
   return (neuron0x13d76e0()*-0.0155638);
}

double NNfunction-NN_3_4::synapse0x13f3a00() {
   return (neuron0x13d7a20()*0.0166851);
}

double NNfunction-NN_3_4::synapse0x13f3a40() {
   return (neuron0x13d7d60()*-0.0177198);
}

double NNfunction-NN_3_4::synapse0x13f3a80() {
   return (neuron0x13d80a0()*0.00613499);
}

double NNfunction-NN_3_4::synapse0x13f3ac0() {
   return (neuron0x13d83e0()*1.87782);
}

double NNfunction-NN_3_4::synapse0x13f3e40() {
   return (neuron0x13d3820()*-0.0507493);
}

double NNfunction-NN_3_4::synapse0x13f3e80() {
   return (neuron0x13d3b60()*-0.329271);
}

double NNfunction-NN_3_4::synapse0x13f3ec0() {
   return (neuron0x13d3ea0()*0.420265);
}

double NNfunction-NN_3_4::synapse0x13f3f00() {
   return (neuron0x13d41e0()*0.0359338);
}

double NNfunction-NN_3_4::synapse0x13f3f40() {
   return (neuron0x13d4520()*-0.0264131);
}

double NNfunction-NN_3_4::synapse0x13f3f80() {
   return (neuron0x13d4860()*-0.0250988);
}

double NNfunction-NN_3_4::synapse0x13f3fc0() {
   return (neuron0x13d4ba0()*0.00378356);
}

double NNfunction-NN_3_4::synapse0x13f4000() {
   return (neuron0x13d4ee0()*-0.00353356);
}

double NNfunction-NN_3_4::synapse0x13f4040() {
   return (neuron0x13d5220()*-0.0347646);
}

double NNfunction-NN_3_4::synapse0x13f4080() {
   return (neuron0x13d5560()*-0.00553509);
}

double NNfunction-NN_3_4::synapse0x13f40c0() {
   return (neuron0x13d58a0()*-0.0169844);
}

double NNfunction-NN_3_4::synapse0x13f4100() {
   return (neuron0x13d5be0()*-3.27175);
}

double NNfunction-NN_3_4::synapse0x13f4140() {
   return (neuron0x13d5f20()*0.0896294);
}

double NNfunction-NN_3_4::synapse0x13f4180() {
   return (neuron0x13d6260()*-0.0300799);
}

double NNfunction-NN_3_4::synapse0x13f41c0() {
   return (neuron0x13d65a0()*0.0569076);
}

double NNfunction-NN_3_4::synapse0x13f4200() {
   return (neuron0x13d68e0()*-0.00919716);
}

double NNfunction-NN_3_4::synapse0x13f3c90() {
   return (neuron0x13d6c20()*-0.00375994);
}

double NNfunction-NN_3_4::synapse0x13f3cd0() {
   return (neuron0x13d7180()*0.0168852);
}

double NNfunction-NN_3_4::synapse0x13f4350() {
   return (neuron0x13d73a0()*-0.0307101);
}

double NNfunction-NN_3_4::synapse0x13f4390() {
   return (neuron0x13d76e0()*0.0311599);
}

double NNfunction-NN_3_4::synapse0x13f43d0() {
   return (neuron0x13d7a20()*-0.0257481);
}

double NNfunction-NN_3_4::synapse0x13f4410() {
   return (neuron0x13d7d60()*-0.00319256);
}

double NNfunction-NN_3_4::synapse0x13f4450() {
   return (neuron0x13d80a0()*-0.043617);
}

double NNfunction-NN_3_4::synapse0x13f4490() {
   return (neuron0x13d83e0()*3.17152);
}

double NNfunction-NN_3_4::synapse0x13f4810() {
   return (neuron0x13d3820()*0.0138112);
}

double NNfunction-NN_3_4::synapse0x13f4850() {
   return (neuron0x13d3b60()*2.5465);
}

double NNfunction-NN_3_4::synapse0x13f4890() {
   return (neuron0x13d3ea0()*-2.91436);
}

double NNfunction-NN_3_4::synapse0x13f48d0() {
   return (neuron0x13d41e0()*0.0380073);
}

double NNfunction-NN_3_4::synapse0x13f4910() {
   return (neuron0x13d4520()*0.0481431);
}

double NNfunction-NN_3_4::synapse0x13f4950() {
   return (neuron0x13d4860()*0.0623013);
}

double NNfunction-NN_3_4::synapse0x13f4990() {
   return (neuron0x13d4ba0()*-0.133383);
}

double NNfunction-NN_3_4::synapse0x13f49d0() {
   return (neuron0x13d4ee0()*0.0247829);
}

double NNfunction-NN_3_4::synapse0x13f4a10() {
   return (neuron0x13d5220()*0.0162511);
}

double NNfunction-NN_3_4::synapse0x13f4a50() {
   return (neuron0x13d5560()*0.0607295);
}

double NNfunction-NN_3_4::synapse0x13f4a90() {
   return (neuron0x13d58a0()*-0.0487914);
}

double NNfunction-NN_3_4::synapse0x13f4ad0() {
   return (neuron0x13d5be0()*3.98519);
}

double NNfunction-NN_3_4::synapse0x13f4b10() {
   return (neuron0x13d5f20()*-0.0729788);
}

double NNfunction-NN_3_4::synapse0x13f4b50() {
   return (neuron0x13d6260()*-0.0416072);
}

double NNfunction-NN_3_4::synapse0x13f4b90() {
   return (neuron0x13d65a0()*-0.0949941);
}

double NNfunction-NN_3_4::synapse0x13f4bd0() {
   return (neuron0x13d68e0()*0.0679841);
}

double NNfunction-NN_3_4::synapse0x13f4660() {
   return (neuron0x13d6c20()*-0.0879961);
}

double NNfunction-NN_3_4::synapse0x13f46a0() {
   return (neuron0x13d7180()*-0.0158377);
}

double NNfunction-NN_3_4::synapse0x13f4d20() {
   return (neuron0x13d73a0()*-0.00364522);
}

double NNfunction-NN_3_4::synapse0x13f4d60() {
   return (neuron0x13d76e0()*-0.0332073);
}

double NNfunction-NN_3_4::synapse0x13f4da0() {
   return (neuron0x13d7a20()*0.0508171);
}

double NNfunction-NN_3_4::synapse0x13f4de0() {
   return (neuron0x13d7d60()*-0.0456739);
}

double NNfunction-NN_3_4::synapse0x13f4e20() {
   return (neuron0x13d80a0()*-0.0408062);
}

double NNfunction-NN_3_4::synapse0x13f4e60() {
   return (neuron0x13d83e0()*-1.35569);
}

double NNfunction-NN_3_4::synapse0x13dd910() {
   return (neuron0x13d3820()*-0.02382);
}

double NNfunction-NN_3_4::synapse0x13dd950() {
   return (neuron0x13d3b60()*-0.993071);
}

double NNfunction-NN_3_4::synapse0x13dd990() {
   return (neuron0x13d3ea0()*0.185899);
}

double NNfunction-NN_3_4::synapse0x13dd9d0() {
   return (neuron0x13d41e0()*0.0762352);
}

double NNfunction-NN_3_4::synapse0x13dda10() {
   return (neuron0x13d4520()*-0.0626142);
}

double NNfunction-NN_3_4::synapse0x13dda50() {
   return (neuron0x13d4860()*-0.0931136);
}

double NNfunction-NN_3_4::synapse0x13dda90() {
   return (neuron0x13d4ba0()*0.162554);
}

double NNfunction-NN_3_4::synapse0x13ddad0() {
   return (neuron0x13d4ee0()*0.091613);
}

double NNfunction-NN_3_4::synapse0x13f55f0() {
   return (neuron0x13d5220()*-0.0512574);
}

double NNfunction-NN_3_4::synapse0x13f5630() {
   return (neuron0x13d5560()*-0.0642191);
}

double NNfunction-NN_3_4::synapse0x13f5670() {
   return (neuron0x13d58a0()*-0.134175);
}

double NNfunction-NN_3_4::synapse0x13f56b0() {
   return (neuron0x13d5be0()*0.626282);
}

double NNfunction-NN_3_4::synapse0x13f56f0() {
   return (neuron0x13d5f20()*-0.231494);
}

double NNfunction-NN_3_4::synapse0x13f5730() {
   return (neuron0x13d6260()*0.0538293);
}

double NNfunction-NN_3_4::synapse0x13f5770() {
   return (neuron0x13d65a0()*-2.25485);
}

double NNfunction-NN_3_4::synapse0x13f57b0() {
   return (neuron0x13d68e0()*-0.101863);
}

double NNfunction-NN_3_4::synapse0x13f5030() {
   return (neuron0x13d6c20()*-0.00431125);
}

double NNfunction-NN_3_4::synapse0x13f5070() {
   return (neuron0x13d7180()*0.157873);
}

double NNfunction-NN_3_4::synapse0x13f5900() {
   return (neuron0x13d73a0()*-0.0820852);
}

double NNfunction-NN_3_4::synapse0x13f5940() {
   return (neuron0x13d76e0()*0.0832491);
}

double NNfunction-NN_3_4::synapse0x13f5980() {
   return (neuron0x13d7a20()*-0.0313493);
}

double NNfunction-NN_3_4::synapse0x13f59c0() {
   return (neuron0x13d7d60()*0.00711792);
}

double NNfunction-NN_3_4::synapse0x13f5a00() {
   return (neuron0x13d80a0()*-0.0533227);
}

double NNfunction-NN_3_4::synapse0x13f5a40() {
   return (neuron0x13d83e0()*-1.69902);
}

double NNfunction-NN_3_4::synapse0x13f5dc0() {
   return (neuron0x13d3820()*0.0357456);
}

double NNfunction-NN_3_4::synapse0x13f5e00() {
   return (neuron0x13d3b60()*-0.116106);
}

double NNfunction-NN_3_4::synapse0x13f5e40() {
   return (neuron0x13d3ea0()*-0.378847);
}

double NNfunction-NN_3_4::synapse0x13f5e80() {
   return (neuron0x13d41e0()*-0.00721106);
}

double NNfunction-NN_3_4::synapse0x13f5ec0() {
   return (neuron0x13d4520()*0.0180324);
}

double NNfunction-NN_3_4::synapse0x13f5f00() {
   return (neuron0x13d4860()*0.00826552);
}

double NNfunction-NN_3_4::synapse0x13f5f40() {
   return (neuron0x13d4ba0()*0.00348958);
}

double NNfunction-NN_3_4::synapse0x13f5f80() {
   return (neuron0x13d4ee0()*-0.00602797);
}

double NNfunction-NN_3_4::synapse0x13f5fc0() {
   return (neuron0x13d5220()*-0.00684933);
}

double NNfunction-NN_3_4::synapse0x13f6000() {
   return (neuron0x13d5560()*0.000568939);
}

double NNfunction-NN_3_4::synapse0x13f6040() {
   return (neuron0x13d58a0()*0.00927379);
}

double NNfunction-NN_3_4::synapse0x13f6080() {
   return (neuron0x13d5be0()*0.0556689);
}

double NNfunction-NN_3_4::synapse0x13f60c0() {
   return (neuron0x13d5f20()*-0.0474403);
}

double NNfunction-NN_3_4::synapse0x13f6100() {
   return (neuron0x13d6260()*0.0136413);
}

double NNfunction-NN_3_4::synapse0x13f6140() {
   return (neuron0x13d65a0()*0.00174588);
}

double NNfunction-NN_3_4::synapse0x13f6180() {
   return (neuron0x13d68e0()*-0.00223712);
}

double NNfunction-NN_3_4::synapse0x13f5c10() {
   return (neuron0x13d6c20()*-0.0284553);
}

double NNfunction-NN_3_4::synapse0x13f5c50() {
   return (neuron0x13d7180()*-0.0251757);
}

double NNfunction-NN_3_4::synapse0x13f62d0() {
   return (neuron0x13d73a0()*-0.011845);
}

double NNfunction-NN_3_4::synapse0x13f6310() {
   return (neuron0x13d76e0()*0.00166559);
}

double NNfunction-NN_3_4::synapse0x13f6350() {
   return (neuron0x13d7a20()*0.00306504);
}

double NNfunction-NN_3_4::synapse0x13f6390() {
   return (neuron0x13d7d60()*-0.0232606);
}

double NNfunction-NN_3_4::synapse0x13f63d0() {
   return (neuron0x13d80a0()*0.00498983);
}

double NNfunction-NN_3_4::synapse0x13f6410() {
   return (neuron0x13d83e0()*-3.39756);
}

double NNfunction-NN_3_4::synapse0x13f6790() {
   return (neuron0x13d3820()*0.27416);
}

double NNfunction-NN_3_4::synapse0x13f67d0() {
   return (neuron0x13d3b60()*0.571647);
}

double NNfunction-NN_3_4::synapse0x13f6810() {
   return (neuron0x13d3ea0()*0.0190735);
}

double NNfunction-NN_3_4::synapse0x13f6850() {
   return (neuron0x13d41e0()*-0.00908588);
}

double NNfunction-NN_3_4::synapse0x13f6890() {
   return (neuron0x13d4520()*0.832525);
}

double NNfunction-NN_3_4::synapse0x13f68d0() {
   return (neuron0x13d4860()*0.427932);
}

double NNfunction-NN_3_4::synapse0x13f6910() {
   return (neuron0x13d4ba0()*-0.616032);
}

double NNfunction-NN_3_4::synapse0x13f6950() {
   return (neuron0x13d4ee0()*-0.322485);
}

double NNfunction-NN_3_4::synapse0x13f6990() {
   return (neuron0x13d5220()*0.234086);
}

double NNfunction-NN_3_4::synapse0x13f69d0() {
   return (neuron0x13d5560()*0.451097);
}

double NNfunction-NN_3_4::synapse0x13f6a10() {
   return (neuron0x13d58a0()*-0.612377);
}

double NNfunction-NN_3_4::synapse0x13f6a50() {
   return (neuron0x13d5be0()*-0.792703);
}

double NNfunction-NN_3_4::synapse0x13f6a90() {
   return (neuron0x13d5f20()*0.160413);
}

double NNfunction-NN_3_4::synapse0x13f6ad0() {
   return (neuron0x13d6260()*-0.867955);
}

double NNfunction-NN_3_4::synapse0x13f6b10() {
   return (neuron0x13d65a0()*-0.428523);
}

double NNfunction-NN_3_4::synapse0x13f6b50() {
   return (neuron0x13d68e0()*-0.624122);
}

double NNfunction-NN_3_4::synapse0x13f65e0() {
   return (neuron0x13d6c20()*-0.492326);
}

double NNfunction-NN_3_4::synapse0x13f6620() {
   return (neuron0x13d7180()*1.23391);
}

double NNfunction-NN_3_4::synapse0x13e7150() {
   return (neuron0x13d73a0()*0.480761);
}

double NNfunction-NN_3_4::synapse0x13e7190() {
   return (neuron0x13d76e0()*-0.385596);
}

double NNfunction-NN_3_4::synapse0x13e71d0() {
   return (neuron0x13d7a20()*-0.57059);
}

double NNfunction-NN_3_4::synapse0x13e7210() {
   return (neuron0x13d7d60()*0.627928);
}

double NNfunction-NN_3_4::synapse0x13e7250() {
   return (neuron0x13d80a0()*0.437265);
}

double NNfunction-NN_3_4::synapse0x13e7290() {
   return (neuron0x13d83e0()*0.00182241);
}

double NNfunction-NN_3_4::synapse0x13e7610() {
   return (neuron0x13d3820()*0.0185053);
}

double NNfunction-NN_3_4::synapse0x13e7650() {
   return (neuron0x13d3b60()*-0.844276);
}

double NNfunction-NN_3_4::synapse0x13e7690() {
   return (neuron0x13d3ea0()*0.659535);
}

double NNfunction-NN_3_4::synapse0x13e76d0() {
   return (neuron0x13d41e0()*-0.0595502);
}

double NNfunction-NN_3_4::synapse0x13e7710() {
   return (neuron0x13d4520()*0.0154828);
}

double NNfunction-NN_3_4::synapse0x13e7750() {
   return (neuron0x13d4860()*0.0353769);
}

double NNfunction-NN_3_4::synapse0x13e7790() {
   return (neuron0x13d4ba0()*0.115386);
}

double NNfunction-NN_3_4::synapse0x13e77d0() {
   return (neuron0x13d4ee0()*-0.0571584);
}

double NNfunction-NN_3_4::synapse0x13e7810() {
   return (neuron0x13d5220()*-0.134082);
}

double NNfunction-NN_3_4::synapse0x13e7850() {
   return (neuron0x13d5560()*0.0168529);
}

double NNfunction-NN_3_4::synapse0x13e7890() {
   return (neuron0x13d58a0()*-0.00592113);
}

double NNfunction-NN_3_4::synapse0x13e78d0() {
   return (neuron0x13d5be0()*-0.129716);
}

double NNfunction-NN_3_4::synapse0x13e7910() {
   return (neuron0x13d5f20()*-0.0268176);
}

double NNfunction-NN_3_4::synapse0x13e7950() {
   return (neuron0x13d6260()*-0.0308697);
}

double NNfunction-NN_3_4::synapse0x13e7990() {
   return (neuron0x13d65a0()*0.115276);
}

double NNfunction-NN_3_4::synapse0x13e79d0() {
   return (neuron0x13d68e0()*0.0433107);
}

double NNfunction-NN_3_4::synapse0x13e7460() {
   return (neuron0x13d6c20()*0.0687049);
}

double NNfunction-NN_3_4::synapse0x13e74a0() {
   return (neuron0x13d7180()*0.0460021);
}

double NNfunction-NN_3_4::synapse0x13e7b20() {
   return (neuron0x13d73a0()*-0.0963993);
}

double NNfunction-NN_3_4::synapse0x13e7b60() {
   return (neuron0x13d76e0()*0.0171763);
}

double NNfunction-NN_3_4::synapse0x13e7ba0() {
   return (neuron0x13d7a20()*0.0662329);
}

double NNfunction-NN_3_4::synapse0x13e7be0() {
   return (neuron0x13d7d60()*0.0344698);
}

double NNfunction-NN_3_4::synapse0x13e7c20() {
   return (neuron0x13d80a0()*-0.0536559);
}

double NNfunction-NN_3_4::synapse0x13e7c60() {
   return (neuron0x13d83e0()*1.05534);
}

double NNfunction-NN_3_4::synapse0x13e7fe0() {
   return (neuron0x13d3820()*0.0299976);
}

double NNfunction-NN_3_4::synapse0x13e8020() {
   return (neuron0x13d3b60()*-4.77693);
}

double NNfunction-NN_3_4::synapse0x13e8060() {
   return (neuron0x13d3ea0()*4.25885);
}

double NNfunction-NN_3_4::synapse0x13e80a0() {
   return (neuron0x13d41e0()*-0.0363125);
}

double NNfunction-NN_3_4::synapse0x13e80e0() {
   return (neuron0x13d4520()*0.0819734);
}

double NNfunction-NN_3_4::synapse0x13e8120() {
   return (neuron0x13d4860()*-0.0312077);
}

double NNfunction-NN_3_4::synapse0x13e8160() {
   return (neuron0x13d4ba0()*0.0406362);
}

double NNfunction-NN_3_4::synapse0x13e81a0() {
   return (neuron0x13d4ee0()*0.0645486);
}

double NNfunction-NN_3_4::synapse0x13e81e0() {
   return (neuron0x13d5220()*-0.0527903);
}

double NNfunction-NN_3_4::synapse0x13e8220() {
   return (neuron0x13d5560()*-0.00324627);
}

double NNfunction-NN_3_4::synapse0x13e8260() {
   return (neuron0x13d58a0()*-0.0593389);
}

double NNfunction-NN_3_4::synapse0x13e82a0() {
   return (neuron0x13d5be0()*0.433439);
}

double NNfunction-NN_3_4::synapse0x13e82e0() {
   return (neuron0x13d5f20()*-0.0484246);
}

double NNfunction-NN_3_4::synapse0x13e8320() {
   return (neuron0x13d6260()*-0.00546592);
}

double NNfunction-NN_3_4::synapse0x13e8360() {
   return (neuron0x13d65a0()*-0.0923817);
}

double NNfunction-NN_3_4::synapse0x13e83a0() {
   return (neuron0x13d68e0()*0.0507609);
}

double NNfunction-NN_3_4::synapse0x13e7e30() {
   return (neuron0x13d6c20()*0.00519143);
}

double NNfunction-NN_3_4::synapse0x13e7e70() {
   return (neuron0x13d7180()*0.00191462);
}

double NNfunction-NN_3_4::synapse0x13e84f0() {
   return (neuron0x13d73a0()*0.0249807);
}

double NNfunction-NN_3_4::synapse0x13e8530() {
   return (neuron0x13d76e0()*-0.0281367);
}

double NNfunction-NN_3_4::synapse0x13e8570() {
   return (neuron0x13d7a20()*0.0462033);
}

double NNfunction-NN_3_4::synapse0x13e85b0() {
   return (neuron0x13d7d60()*0.0782453);
}

double NNfunction-NN_3_4::synapse0x13e85f0() {
   return (neuron0x13d80a0()*-0.0329002);
}

double NNfunction-NN_3_4::synapse0x13e8630() {
   return (neuron0x13d83e0()*-0.391986);
}

double NNfunction-NN_3_4::synapse0x13e89b0() {
   return (neuron0x13d3820()*0.746582);
}

double NNfunction-NN_3_4::synapse0x13e89f0() {
   return (neuron0x13d3b60()*1.23741);
}

double NNfunction-NN_3_4::synapse0x13e8a30() {
   return (neuron0x13d3ea0()*-0.185237);
}

double NNfunction-NN_3_4::synapse0x13e8a70() {
   return (neuron0x13d41e0()*0.672478);
}

double NNfunction-NN_3_4::synapse0x13e8ab0() {
   return (neuron0x13d4520()*0.373096);
}

double NNfunction-NN_3_4::synapse0x13e8af0() {
   return (neuron0x13d4860()*0.128642);
}

double NNfunction-NN_3_4::synapse0x13e8b30() {
   return (neuron0x13d4ba0()*-0.650439);
}

double NNfunction-NN_3_4::synapse0x13e8b70() {
   return (neuron0x13d4ee0()*-0.229626);
}

double NNfunction-NN_3_4::synapse0x13e8bb0() {
   return (neuron0x13d5220()*0.406548);
}

double NNfunction-NN_3_4::synapse0x13e8bf0() {
   return (neuron0x13d5560()*-0.299315);
}

double NNfunction-NN_3_4::synapse0x13e8c30() {
   return (neuron0x13d58a0()*0.273557);
}

double NNfunction-NN_3_4::synapse0x13e8c70() {
   return (neuron0x13d5be0()*-0.276579);
}

double NNfunction-NN_3_4::synapse0x13e8cb0() {
   return (neuron0x13d5f20()*-0.0558953);
}

double NNfunction-NN_3_4::synapse0x13e8cf0() {
   return (neuron0x13d6260()*0.133014);
}

double NNfunction-NN_3_4::synapse0x13e8d30() {
   return (neuron0x13d65a0()*-0.569941);
}

double NNfunction-NN_3_4::synapse0x13e8d70() {
   return (neuron0x13d68e0()*0.726625);
}

double NNfunction-NN_3_4::synapse0x13e8800() {
   return (neuron0x13d6c20()*0.302591);
}

double NNfunction-NN_3_4::synapse0x13e8840() {
   return (neuron0x13d7180()*-0.577258);
}

double NNfunction-NN_3_4::synapse0x13e8ec0() {
   return (neuron0x13d73a0()*-0.349189);
}

double NNfunction-NN_3_4::synapse0x13e8f00() {
   return (neuron0x13d76e0()*0.319977);
}

double NNfunction-NN_3_4::synapse0x13e8f40() {
   return (neuron0x13d7a20()*0.234183);
}

double NNfunction-NN_3_4::synapse0x13e8f80() {
   return (neuron0x13d7d60()*0.0261042);
}

double NNfunction-NN_3_4::synapse0x13e8fc0() {
   return (neuron0x13d80a0()*0.234801);
}

double NNfunction-NN_3_4::synapse0x13e9000() {
   return (neuron0x13d83e0()*-1.49237);
}

double NNfunction-NN_3_4::synapse0x13faed0() {
   return (neuron0x13d3820()*0.0568873);
}

double NNfunction-NN_3_4::synapse0x13faf10() {
   return (neuron0x13d3b60()*-0.134263);
}

double NNfunction-NN_3_4::synapse0x13faf50() {
   return (neuron0x13d3ea0()*-2.14408);
}

double NNfunction-NN_3_4::synapse0x13faf90() {
   return (neuron0x13d41e0()*-0.0107774);
}

double NNfunction-NN_3_4::synapse0x13fafd0() {
   return (neuron0x13d4520()*-0.00991357);
}

double NNfunction-NN_3_4::synapse0x13fb010() {
   return (neuron0x13d4860()*0.0145514);
}

double NNfunction-NN_3_4::synapse0x13fb050() {
   return (neuron0x13d4ba0()*0.00468258);
}

double NNfunction-NN_3_4::synapse0x13fb090() {
   return (neuron0x13d4ee0()*0.0129857);
}

double NNfunction-NN_3_4::synapse0x13fb0d0() {
   return (neuron0x13d5220()*0.0316517);
}

double NNfunction-NN_3_4::synapse0x13fb110() {
   return (neuron0x13d5560()*-0.014454);
}

double NNfunction-NN_3_4::synapse0x13fb150() {
   return (neuron0x13d58a0()*-0.00847937);
}

double NNfunction-NN_3_4::synapse0x13fb190() {
   return (neuron0x13d5be0()*-0.34702);
}

double NNfunction-NN_3_4::synapse0x13fb1d0() {
   return (neuron0x13d5f20()*-0.0212489);
}

double NNfunction-NN_3_4::synapse0x13fb210() {
   return (neuron0x13d6260()*-0.0533826);
}

double NNfunction-NN_3_4::synapse0x13fb250() {
   return (neuron0x13d65a0()*0.000150358);
}

double NNfunction-NN_3_4::synapse0x13fb290() {
   return (neuron0x13d68e0()*0.0356535);
}

double NNfunction-NN_3_4::synapse0x13e9040() {
   return (neuron0x13d6c20()*0.0275649);
}

double NNfunction-NN_3_4::synapse0x13e9080() {
   return (neuron0x13d7180()*0.00222141);
}

double NNfunction-NN_3_4::synapse0x13fb3e0() {
   return (neuron0x13d73a0()*-0.00253009);
}

double NNfunction-NN_3_4::synapse0x13fb420() {
   return (neuron0x13d76e0()*-0.0104189);
}

double NNfunction-NN_3_4::synapse0x13fb460() {
   return (neuron0x13d7a20()*0.0170828);
}

double NNfunction-NN_3_4::synapse0x13fb4a0() {
   return (neuron0x13d7d60()*-0.00655543);
}

double NNfunction-NN_3_4::synapse0x13fb4e0() {
   return (neuron0x13d80a0()*0.0248027);
}

double NNfunction-NN_3_4::synapse0x13fb520() {
   return (neuron0x13d83e0()*-4.90676);
}

double NNfunction-NN_3_4::synapse0x13fb8a0() {
   return (neuron0x13d3820()*0.0471953);
}

double NNfunction-NN_3_4::synapse0x13fb8e0() {
   return (neuron0x13d3b60()*-2.79575);
}

double NNfunction-NN_3_4::synapse0x13fb920() {
   return (neuron0x13d3ea0()*0.508433);
}

double NNfunction-NN_3_4::synapse0x13fb960() {
   return (neuron0x13d41e0()*0.0361461);
}

double NNfunction-NN_3_4::synapse0x13fb9a0() {
   return (neuron0x13d4520()*0.00795619);
}

double NNfunction-NN_3_4::synapse0x13fb9e0() {
   return (neuron0x13d4860()*0.00380257);
}

double NNfunction-NN_3_4::synapse0x13fba20() {
   return (neuron0x13d4ba0()*-0.0118149);
}

double NNfunction-NN_3_4::synapse0x13fba60() {
   return (neuron0x13d4ee0()*0.0321828);
}

double NNfunction-NN_3_4::synapse0x13fbaa0() {
   return (neuron0x13d5220()*-0.0307644);
}

double NNfunction-NN_3_4::synapse0x13fbae0() {
   return (neuron0x13d5560()*-0.0065101);
}

double NNfunction-NN_3_4::synapse0x13fbb20() {
   return (neuron0x13d58a0()*0.0317825);
}

double NNfunction-NN_3_4::synapse0x13fbb60() {
   return (neuron0x13d5be0()*0.0831672);
}

double NNfunction-NN_3_4::synapse0x13fbba0() {
   return (neuron0x13d5f20()*-0.0210361);
}

double NNfunction-NN_3_4::synapse0x13fbbe0() {
   return (neuron0x13d6260()*0.0378812);
}

double NNfunction-NN_3_4::synapse0x13fbc20() {
   return (neuron0x13d65a0()*0.0336226);
}

double NNfunction-NN_3_4::synapse0x13fbc60() {
   return (neuron0x13d68e0()*0.0454807);
}

double NNfunction-NN_3_4::synapse0x13fb6f0() {
   return (neuron0x13d6c20()*-0.00517709);
}

double NNfunction-NN_3_4::synapse0x13fb730() {
   return (neuron0x13d7180()*-0.01122);
}

double NNfunction-NN_3_4::synapse0x13fbdb0() {
   return (neuron0x13d73a0()*0.0209938);
}

double NNfunction-NN_3_4::synapse0x13fbdf0() {
   return (neuron0x13d76e0()*0.0355128);
}

double NNfunction-NN_3_4::synapse0x13fbe30() {
   return (neuron0x13d7a20()*0.0105927);
}

double NNfunction-NN_3_4::synapse0x13fbe70() {
   return (neuron0x13d7d60()*0.0288351);
}

double NNfunction-NN_3_4::synapse0x13fbeb0() {
   return (neuron0x13d80a0()*0.040789);
}

double NNfunction-NN_3_4::synapse0x13fbef0() {
   return (neuron0x13d83e0()*2.72403);
}

double NNfunction-NN_3_4::synapse0x13fc270() {
   return (neuron0x13d3820()*-0.0438716);
}

double NNfunction-NN_3_4::synapse0x13fc2b0() {
   return (neuron0x13d3b60()*0.0239612);
}

double NNfunction-NN_3_4::synapse0x13fc2f0() {
   return (neuron0x13d3ea0()*-0.11091);
}

double NNfunction-NN_3_4::synapse0x13fc330() {
   return (neuron0x13d41e0()*-3.48207);
}

double NNfunction-NN_3_4::synapse0x13fc370() {
   return (neuron0x13d4520()*-0.0313081);
}

double NNfunction-NN_3_4::synapse0x13fc3b0() {
   return (neuron0x13d4860()*0.00864198);
}

double NNfunction-NN_3_4::synapse0x13fc3f0() {
   return (neuron0x13d4ba0()*-0.00810998);
}

double NNfunction-NN_3_4::synapse0x13fc430() {
   return (neuron0x13d4ee0()*-0.000129223);
}

double NNfunction-NN_3_4::synapse0x13fc470() {
   return (neuron0x13d5220()*-0.0491026);
}

double NNfunction-NN_3_4::synapse0x13fc4b0() {
   return (neuron0x13d5560()*-0.00630749);
}

double NNfunction-NN_3_4::synapse0x13fc4f0() {
   return (neuron0x13d58a0()*-0.0288379);
}

double NNfunction-NN_3_4::synapse0x13fc530() {
   return (neuron0x13d5be0()*-0.142478);
}

double NNfunction-NN_3_4::synapse0x13fc570() {
   return (neuron0x13d5f20()*-0.0852333);
}

double NNfunction-NN_3_4::synapse0x13fc5b0() {
   return (neuron0x13d6260()*0.0223463);
}

double NNfunction-NN_3_4::synapse0x13fc5f0() {
   return (neuron0x13d65a0()*-0.00882521);
}

double NNfunction-NN_3_4::synapse0x13fc630() {
   return (neuron0x13d68e0()*0.0455879);
}

double NNfunction-NN_3_4::synapse0x13fc0c0() {
   return (neuron0x13d6c20()*0.102404);
}

double NNfunction-NN_3_4::synapse0x13fc100() {
   return (neuron0x13d7180()*-0.0727324);
}

double NNfunction-NN_3_4::synapse0x13fc780() {
   return (neuron0x13d73a0()*-0.0785946);
}

double NNfunction-NN_3_4::synapse0x13fc7c0() {
   return (neuron0x13d76e0()*-0.0298445);
}

double NNfunction-NN_3_4::synapse0x13fc800() {
   return (neuron0x13d7a20()*0.000977343);
}

double NNfunction-NN_3_4::synapse0x13fc840() {
   return (neuron0x13d7d60()*0.0180058);
}

double NNfunction-NN_3_4::synapse0x13fc880() {
   return (neuron0x13d80a0()*0.0823276);
}

double NNfunction-NN_3_4::synapse0x13fc8c0() {
   return (neuron0x13d83e0()*-0.0182598);
}

double NNfunction-NN_3_4::synapse0x13fcc40() {
   return (neuron0x13d3820()*0.0548034);
}

double NNfunction-NN_3_4::synapse0x13fcc80() {
   return (neuron0x13d3b60()*-0.698885);
}

double NNfunction-NN_3_4::synapse0x13fccc0() {
   return (neuron0x13d3ea0()*-0.896423);
}

double NNfunction-NN_3_4::synapse0x13fcd00() {
   return (neuron0x13d41e0()*0.0344442);
}

double NNfunction-NN_3_4::synapse0x13fcd40() {
   return (neuron0x13d4520()*-0.00269147);
}

double NNfunction-NN_3_4::synapse0x13fcd80() {
   return (neuron0x13d4860()*0.0183107);
}

double NNfunction-NN_3_4::synapse0x13fcdc0() {
   return (neuron0x13d4ba0()*-0.00424522);
}

double NNfunction-NN_3_4::synapse0x13fce00() {
   return (neuron0x13d4ee0()*-0.0243477);
}

double NNfunction-NN_3_4::synapse0x13fce40() {
   return (neuron0x13d5220()*-0.0042706);
}

double NNfunction-NN_3_4::synapse0x13fce80() {
   return (neuron0x13d5560()*0.00968662);
}

double NNfunction-NN_3_4::synapse0x13fcec0() {
   return (neuron0x13d58a0()*-0.0177214);
}

double NNfunction-NN_3_4::synapse0x13fcf00() {
   return (neuron0x13d5be0()*-0.210253);
}

double NNfunction-NN_3_4::synapse0x13fcf40() {
   return (neuron0x13d5f20()*-0.0374475);
}

double NNfunction-NN_3_4::synapse0x13fcf80() {
   return (neuron0x13d6260()*-0.0551352);
}

double NNfunction-NN_3_4::synapse0x13fcfc0() {
   return (neuron0x13d65a0()*0.012842);
}

double NNfunction-NN_3_4::synapse0x13fd000() {
   return (neuron0x13d68e0()*0.00776584);
}

double NNfunction-NN_3_4::synapse0x13fca90() {
   return (neuron0x13d6c20()*0.000879082);
}

double NNfunction-NN_3_4::synapse0x13fcad0() {
   return (neuron0x13d7180()*0.0263183);
}

double NNfunction-NN_3_4::synapse0x13fd150() {
   return (neuron0x13d73a0()*0.00229616);
}

double NNfunction-NN_3_4::synapse0x13fd190() {
   return (neuron0x13d76e0()*-0.0152248);
}

double NNfunction-NN_3_4::synapse0x13fd1d0() {
   return (neuron0x13d7a20()*0.0236418);
}

double NNfunction-NN_3_4::synapse0x13fd210() {
   return (neuron0x13d7d60()*0.00774757);
}

double NNfunction-NN_3_4::synapse0x13fd250() {
   return (neuron0x13d80a0()*0.0129669);
}

double NNfunction-NN_3_4::synapse0x13fd290() {
   return (neuron0x13d83e0()*-1.06022);
}

double NNfunction-NN_3_4::synapse0x13d9830() {
   return (neuron0x13d8880()*-3.33906);
}

double NNfunction-NN_3_4::synapse0x13d9870() {
   return (neuron0x13d9190()*-1.01115);
}

double NNfunction-NN_3_4::synapse0x13dad40() {
   return (neuron0x13d9c70()*-0.191822);
}

double NNfunction-NN_3_4::synapse0x13dad80() {
   return (neuron0x1193500()*-1.76709);
}

double NNfunction-NN_3_4::synapse0x13db710() {
   return (neuron0x13daa90()*1.21936);
}

double NNfunction-NN_3_4::synapse0x13db750() {
   return (neuron0x13db460()*-2.47578);
}

double NNfunction-NN_3_4::synapse0x13dc4e0() {
   return (neuron0x13dc230()*-0.806115);
}

double NNfunction-NN_3_4::synapse0x13dc520() {
   return (neuron0x13dcc00()*0.344619);
}

double NNfunction-NN_3_4::synapse0x13dceb0() {
   return (neuron0x13dd5d0()*1.01828);
}

double NNfunction-NN_3_4::synapse0x13dcef0() {
   return (neuron0x13de0b0()*0.0599675);
}

double NNfunction-NN_3_4::synapse0x13dd880() {
   return (neuron0x13dea80()*-0.0226599);
}

double NNfunction-NN_3_4::synapse0x13dd8c0() {
   return (neuron0x13dbb60()*-0.472188);
}

double NNfunction-NN_3_4::synapse0x13de360() {
   return (neuron0x13e0630()*-1.83821);
}

double NNfunction-NN_3_4::synapse0x13de3a0() {
   return (neuron0x13e1000()*-0.182785);
}

double NNfunction-NN_3_4::synapse0x13ded30() {
   return (neuron0x13e19d0()*-1.11426);
}

double NNfunction-NN_3_4::synapse0x13ded70() {
   return (neuron0x13e23a0()*-1.06068);
}

double NNfunction-NN_3_4::synapse0x13dbe10() {
   return (neuron0x13e41b0()*-0.465051);
}

double NNfunction-NN_3_4::synapse0x13dbe50() {
   return (neuron0x13e4490()*-0.284693);
}

double NNfunction-NN_3_4::synapse0x13e08e0() {
   return (neuron0x13e4e60()*-0.00699527);
}

double NNfunction-NN_3_4::synapse0x13e0920() {
   return (neuron0x13e5830()*1.87971);
}

double NNfunction-NN_3_4::synapse0x13e12b0() {
   return (neuron0x13e6200()*0.285706);
}

double NNfunction-NN_3_4::synapse0x13e12f0() {
   return (neuron0x13e6bd0()*-1.28015);
}

double NNfunction-NN_3_4::synapse0x13e1c80() {
   return (neuron0x13df720()*-0.277918);
}

double NNfunction-NN_3_4::synapse0x13e1cc0() {
   return (neuron0x13e00f0()*-0.919159);
}

double NNfunction-NN_3_4::synapse0x13e2650() {
   return (neuron0x13e9960()*3.2004);
}

double NNfunction-NN_3_4::synapse0x13e2690() {
   return (neuron0x13ea330()*-1.22884);
}

double NNfunction-NN_3_4::synapse0x13d67c0() {
   return (neuron0x13ead00()*-3.81294);
}

double NNfunction-NN_3_4::synapse0x13d6800() {
   return (neuron0x13eb6d0()*-0.23976);
}

double NNfunction-NN_3_4::synapse0x13e4740() {
   return (neuron0x13ec0a0()*-1.45417);
}

double NNfunction-NN_3_4::synapse0x13e4780() {
   return (neuron0x13eca70()*0.818328);
}

double NNfunction-NN_3_4::synapse0x13e5110() {
   return (neuron0x13ed440()*0.717751);
}

double NNfunction-NN_3_4::synapse0x13e5150() {
   return (neuron0x13ede10()*-0.0140622);
}

double NNfunction-NN_3_4::synapse0x13e5ae0() {
   return (neuron0x13e3ea0()*3.30111);
}

double NNfunction-NN_3_4::synapse0x13e5b20() {
   return (neuron0x13f09f0()*0.939275);
}

double NNfunction-NN_3_4::synapse0x13e64b0() {
   return (neuron0x13f13c0()*1.59987);
}

double NNfunction-NN_3_4::synapse0x13e64f0() {
   return (neuron0x13f1d90()*-0.692784);
}

double NNfunction-NN_3_4::synapse0x13e6e80() {
   return (neuron0x13f2760()*-1.98136);
}

double NNfunction-NN_3_4::synapse0x13e6ec0() {
   return (neuron0x13f3130()*-0.188179);
}

double NNfunction-NN_3_4::synapse0x13df9d0() {
   return (neuron0x13f3b00()*0.927636);
}

double NNfunction-NN_3_4::synapse0x13dfa10() {
   return (neuron0x13f44d0()*1.44514);
}

double NNfunction-NN_3_4::synapse0x13e9280() {
   return (neuron0x13f4ea0()*0.354019);
}

double NNfunction-NN_3_4::synapse0x13e92c0() {
   return (neuron0x13f5a80()*1.65442);
}

double NNfunction-NN_3_4::synapse0x13e9c10() {
   return (neuron0x13f6450()*-0.738384);
}

double NNfunction-NN_3_4::synapse0x13e9c50() {
   return (neuron0x13e72d0()*0.20283);
}

double NNfunction-NN_3_4::synapse0x13ea5e0() {
   return (neuron0x13e7ca0()*2.14552);
}

double NNfunction-NN_3_4::synapse0x13ea620() {
   return (neuron0x13e8670()*0.628623);
}

double NNfunction-NN_3_4::synapse0x13eafb0() {
   return (neuron0x13facb0()*0.358802);
}

double NNfunction-NN_3_4::synapse0x13eaff0() {
   return (neuron0x13fb560()*-0.599501);
}

double NNfunction-NN_3_4::synapse0x13eb980() {
   return (neuron0x13fbf30()*0.236186);
}

double NNfunction-NN_3_4::synapse0x13eb9c0() {
   return (neuron0x13fc900()*-1.02676);
}

double NNfunction-NN_3_4::synapse0x13ee0c0() {
   return (neuron0x13d8880()*0.980966);
}

double NNfunction-NN_3_4::synapse0x13ee100() {
   return (neuron0x13d9190()*0.423628);
}

double NNfunction-NN_3_4::synapse0x13e3680() {
   return (neuron0x13d9c70()*0.174616);
}

double NNfunction-NN_3_4::synapse0x13e36c0() {
   return (neuron0x1193500()*0.48316);
}

double NNfunction-NN_3_4::synapse0x13f0ca0() {
   return (neuron0x13daa90()*0.985036);
}

double NNfunction-NN_3_4::synapse0x13f0ce0() {
   return (neuron0x13db460()*-0.353063);
}

double NNfunction-NN_3_4::synapse0x13f1670() {
   return (neuron0x13dc230()*-0.45982);
}

double NNfunction-NN_3_4::synapse0x13f16b0() {
   return (neuron0x13dcc00()*-0.113969);
}

double NNfunction-NN_3_4::synapse0x13f2040() {
   return (neuron0x13dd5d0()*0.467634);
}

double NNfunction-NN_3_4::synapse0x13f2080() {
   return (neuron0x13de0b0()*-0.737228);
}

double NNfunction-NN_3_4::synapse0x13f2a10() {
   return (neuron0x13dea80()*1.05313);
}

double NNfunction-NN_3_4::synapse0x13f2a50() {
   return (neuron0x13dbb60()*-0.401205);
}

double NNfunction-NN_3_4::synapse0x13f33e0() {
   return (neuron0x13e0630()*0.389707);
}

double NNfunction-NN_3_4::synapse0x13f3420() {
   return (neuron0x13e1000()*-0.21717);
}

double NNfunction-NN_3_4::synapse0x13f3db0() {
   return (neuron0x13e19d0()*0.475764);
}

double NNfunction-NN_3_4::synapse0x13f3df0() {
   return (neuron0x13e23a0()*-1.1146);
}

double NNfunction-NN_3_4::synapse0x13f4780() {
   return (neuron0x13e41b0()*0.119479);
}

double NNfunction-NN_3_4::synapse0x13f47c0() {
   return (neuron0x13e4490()*-0.598831);
}

double NNfunction-NN_3_4::synapse0x13f5150() {
   return (neuron0x13e4e60()*-0.0875999);
}

double NNfunction-NN_3_4::synapse0x13f5190() {
   return (neuron0x13e5830()*-0.317708);
}

double NNfunction-NN_3_4::synapse0x13f5d30() {
   return (neuron0x13e6200()*-0.382742);
}

double NNfunction-NN_3_4::synapse0x13f5d70() {
   return (neuron0x13e6bd0()*0.308854);
}

double NNfunction-NN_3_4::synapse0x13f6700() {
   return (neuron0x13df720()*2.85027);
}

double NNfunction-NN_3_4::synapse0x13f6740() {
   return (neuron0x13e00f0()*-0.56167);
}

double NNfunction-NN_3_4::synapse0x13e7580() {
   return (neuron0x13e9960()*-0.245217);
}

double NNfunction-NN_3_4::synapse0x13e75c0() {
   return (neuron0x13ea330()*0.278777);
}

double NNfunction-NN_3_4::synapse0x13e7f50() {
   return (neuron0x13ead00()*1.80326);
}

double NNfunction-NN_3_4::synapse0x13e7f90() {
   return (neuron0x13eb6d0()*-0.545264);
}

double NNfunction-NN_3_4::synapse0x13e8920() {
   return (neuron0x13ec0a0()*0.238836);
}

double NNfunction-NN_3_4::synapse0x13e8960() {
   return (neuron0x13eca70()*-0.231574);
}

double NNfunction-NN_3_4::synapse0x13fae40() {
   return (neuron0x13ed440()*-0.594149);
}

double NNfunction-NN_3_4::synapse0x13fae80() {
   return (neuron0x13ede10()*-0.720627);
}

double NNfunction-NN_3_4::synapse0x13fb810() {
   return (neuron0x13e3ea0()*-0.230386);
}

double NNfunction-NN_3_4::synapse0x13fb850() {
   return (neuron0x13f09f0()*-1.14239);
}

double NNfunction-NN_3_4::synapse0x13fc1e0() {
   return (neuron0x13f13c0()*-0.230394);
}

double NNfunction-NN_3_4::synapse0x13fc220() {
   return (neuron0x13f1d90()*0.333106);
}

double NNfunction-NN_3_4::synapse0x13fcbb0() {
   return (neuron0x13f2760()*-1.58107);
}

double NNfunction-NN_3_4::synapse0x13fcbf0() {
   return (neuron0x13f3130()*1.06495);
}

double NNfunction-NN_3_4::synapse0x13d8aa0() {
   return (neuron0x13f3b00()*-0.556712);
}

double NNfunction-NN_3_4::synapse0x13d8ae0() {
   return (neuron0x13f44d0()*-0.443187);
}

double NNfunction-NN_3_4::synapse0x13ec350() {
   return (neuron0x13f4ea0()*0.127809);
}

double NNfunction-NN_3_4::synapse0x13ec390() {
   return (neuron0x13f5a80()*-0.286769);
}

double NNfunction-NN_3_4::synapse0x13fd2d0() {
   return (neuron0x13f6450()*0.121212);
}

double NNfunction-NN_3_4::synapse0x13fd310() {
   return (neuron0x13e72d0()*0.460673);
}

double NNfunction-NN_3_4::synapse0x13fd350() {
   return (neuron0x13e7ca0()*0.459234);
}

double NNfunction-NN_3_4::synapse0x13fd390() {
   return (neuron0x13e8670()*-0.237972);
}

double NNfunction-NN_3_4::synapse0x1404240() {
   return (neuron0x13facb0()*-0.216755);
}

double NNfunction-NN_3_4::synapse0x1404280() {
   return (neuron0x13fb560()*2.82331);
}

double NNfunction-NN_3_4::synapse0x14042c0() {
   return (neuron0x13fbf30()*0.189399);
}

double NNfunction-NN_3_4::synapse0x1404300() {
   return (neuron0x13fc900()*-0.937281);
}

double NNfunction-NN_3_4::synapse0x1404680() {
   return (neuron0x13d8880()*-0.0213659);
}

double NNfunction-NN_3_4::synapse0x14046c0() {
   return (neuron0x13d9190()*-0.458166);
}

double NNfunction-NN_3_4::synapse0x1404700() {
   return (neuron0x13d9c70()*-0.204589);
}

double NNfunction-NN_3_4::synapse0x1404740() {
   return (neuron0x1193500()*-0.17762);
}

double NNfunction-NN_3_4::synapse0x1404780() {
   return (neuron0x13daa90()*-0.594217);
}

double NNfunction-NN_3_4::synapse0x14047c0() {
   return (neuron0x13db460()*4.8728);
}

double NNfunction-NN_3_4::synapse0x1404800() {
   return (neuron0x13dc230()*1.38758);
}

double NNfunction-NN_3_4::synapse0x1404840() {
   return (neuron0x13dcc00()*0.240278);
}

double NNfunction-NN_3_4::synapse0x1404880() {
   return (neuron0x13dd5d0()*0.909551);
}

double NNfunction-NN_3_4::synapse0x14048c0() {
   return (neuron0x13de0b0()*0.529409);
}

double NNfunction-NN_3_4::synapse0x1404900() {
   return (neuron0x13dea80()*0.480672);
}

double NNfunction-NN_3_4::synapse0x1404940() {
   return (neuron0x13dbb60()*-0.24295);
}

double NNfunction-NN_3_4::synapse0x1404980() {
   return (neuron0x13e0630()*-0.959516);
}

double NNfunction-NN_3_4::synapse0x14049c0() {
   return (neuron0x13e1000()*0.469942);
}

double NNfunction-NN_3_4::synapse0x1404a00() {
   return (neuron0x13e19d0()*-0.49004);
}

double NNfunction-NN_3_4::synapse0x1404a40() {
   return (neuron0x13e23a0()*-2.59013);
}

double NNfunction-NN_3_4::synapse0x14044d0() {
   return (neuron0x13e41b0()*-0.194083);
}

double NNfunction-NN_3_4::synapse0x1404510() {
   return (neuron0x13e4490()*-1.44539);
}

double NNfunction-NN_3_4::synapse0x1404b90() {
   return (neuron0x13e4e60()*-0.337909);
}

double NNfunction-NN_3_4::synapse0x1404bd0() {
   return (neuron0x13e5830()*-0.0843436);
}

double NNfunction-NN_3_4::synapse0x1404c10() {
   return (neuron0x13e6200()*1.2692);
}

double NNfunction-NN_3_4::synapse0x1404c50() {
   return (neuron0x13e6bd0()*0.105165);
}

double NNfunction-NN_3_4::synapse0x1404c90() {
   return (neuron0x13df720()*1.8825);
}

double NNfunction-NN_3_4::synapse0x1404cd0() {
   return (neuron0x13e00f0()*0.137282);
}

double NNfunction-NN_3_4::synapse0x1404d10() {
   return (neuron0x13e9960()*-1.3126);
}

double NNfunction-NN_3_4::synapse0x1404d50() {
   return (neuron0x13ea330()*-0.440714);
}

double NNfunction-NN_3_4::synapse0x1404d90() {
   return (neuron0x13ead00()*-0.98965);
}

double NNfunction-NN_3_4::synapse0x1404dd0() {
   return (neuron0x13eb6d0()*-1.00343);
}

double NNfunction-NN_3_4::synapse0x1404e10() {
   return (neuron0x13ec0a0()*-0.515504);
}

double NNfunction-NN_3_4::synapse0x1404e50() {
   return (neuron0x13eca70()*0.166122);
}

double NNfunction-NN_3_4::synapse0x1404e90() {
   return (neuron0x13ed440()*0.706186);
}

double NNfunction-NN_3_4::synapse0x1404ed0() {
   return (neuron0x13ede10()*0.113874);
}

double NNfunction-NN_3_4::synapse0x1404a80() {
   return (neuron0x13e3ea0()*1.00101);
}

double NNfunction-NN_3_4::synapse0x1404ac0() {
   return (neuron0x13f09f0()*-2.08696);
}

double NNfunction-NN_3_4::synapse0x1404b00() {
   return (neuron0x13f13c0()*1.62588);
}

double NNfunction-NN_3_4::synapse0x1404b40() {
   return (neuron0x13f1d90()*-0.359916);
}

double NNfunction-NN_3_4::synapse0x1405120() {
   return (neuron0x13f2760()*-2.18194);
}

double NNfunction-NN_3_4::synapse0x1405160() {
   return (neuron0x13f3130()*-0.223403);
}

double NNfunction-NN_3_4::synapse0x14051a0() {
   return (neuron0x13f3b00()*-0.0510505);
}

double NNfunction-NN_3_4::synapse0x14051e0() {
   return (neuron0x13f44d0()*0.733605);
}

double NNfunction-NN_3_4::synapse0x1405220() {
   return (neuron0x13f4ea0()*-0.108782);
}

double NNfunction-NN_3_4::synapse0x1405260() {
   return (neuron0x13f5a80()*-0.764076);
}

double NNfunction-NN_3_4::synapse0x14052a0() {
   return (neuron0x13f6450()*-0.160198);
}

double NNfunction-NN_3_4::synapse0x14052e0() {
   return (neuron0x13e72d0()*-1.50571);
}

double NNfunction-NN_3_4::synapse0x1405320() {
   return (neuron0x13e7ca0()*1.95189);
}

double NNfunction-NN_3_4::synapse0x1405360() {
   return (neuron0x13e8670()*0.292909);
}

double NNfunction-NN_3_4::synapse0x14053a0() {
   return (neuron0x13facb0()*-0.0664126);
}

double NNfunction-NN_3_4::synapse0x14053e0() {
   return (neuron0x13fb560()*-2.09692);
}

double NNfunction-NN_3_4::synapse0x1405420() {
   return (neuron0x13fbf30()*-0.701818);
}

double NNfunction-NN_3_4::synapse0x1405460() {
   return (neuron0x13fc900()*-2.19601);
}

double NNfunction-NN_3_4::synapse0x14057e0() {
   return (neuron0x13d8880()*1.54357);
}

double NNfunction-NN_3_4::synapse0x1405820() {
   return (neuron0x13d9190()*-0.176203);
}

double NNfunction-NN_3_4::synapse0x1405860() {
   return (neuron0x13d9c70()*-0.126662);
}

double NNfunction-NN_3_4::synapse0x14058a0() {
   return (neuron0x1193500()*-0.512034);
}

double NNfunction-NN_3_4::synapse0x14058e0() {
   return (neuron0x13daa90()*-1.47695);
}

double NNfunction-NN_3_4::synapse0x1405920() {
   return (neuron0x13db460()*0.630619);
}

double NNfunction-NN_3_4::synapse0x1405960() {
   return (neuron0x13dc230()*2.74879);
}

double NNfunction-NN_3_4::synapse0x14059a0() {
   return (neuron0x13dcc00()*0.0613587);
}

double NNfunction-NN_3_4::synapse0x14059e0() {
   return (neuron0x13dd5d0()*1.45224);
}

double NNfunction-NN_3_4::synapse0x1405a20() {
   return (neuron0x13de0b0()*0.425769);
}

double NNfunction-NN_3_4::synapse0x1405a60() {
   return (neuron0x13dea80()*0.760976);
}

double NNfunction-NN_3_4::synapse0x1405aa0() {
   return (neuron0x13dbb60()*-1.94804);
}

double NNfunction-NN_3_4::synapse0x1405ae0() {
   return (neuron0x13e0630()*-0.212471);
}

double NNfunction-NN_3_4::synapse0x1405b20() {
   return (neuron0x13e1000()*0.280593);
}

double NNfunction-NN_3_4::synapse0x1405b60() {
   return (neuron0x13e19d0()*-0.181382);
}

double NNfunction-NN_3_4::synapse0x1405ba0() {
   return (neuron0x13e23a0()*-0.572282);
}

double NNfunction-NN_3_4::synapse0x1405630() {
   return (neuron0x13e41b0()*-0.107967);
}

double NNfunction-NN_3_4::synapse0x1405670() {
   return (neuron0x13e4490()*0.67283);
}

double NNfunction-NN_3_4::synapse0x1405cf0() {
   return (neuron0x13e4e60()*2.20746);
}

double NNfunction-NN_3_4::synapse0x1405d30() {
   return (neuron0x13e5830()*2.103);
}

double NNfunction-NN_3_4::synapse0x1405d70() {
   return (neuron0x13e6200()*-0.218202);
}

double NNfunction-NN_3_4::synapse0x1405db0() {
   return (neuron0x13e6bd0()*1.68657);
}

double NNfunction-NN_3_4::synapse0x1405df0() {
   return (neuron0x13df720()*1.88199);
}

double NNfunction-NN_3_4::synapse0x1405e30() {
   return (neuron0x13e00f0()*0.324974);
}

double NNfunction-NN_3_4::synapse0x1405e70() {
   return (neuron0x13e9960()*-2.02169);
}

double NNfunction-NN_3_4::synapse0x1405eb0() {
   return (neuron0x13ea330()*-0.0802658);
}

double NNfunction-NN_3_4::synapse0x1405ef0() {
   return (neuron0x13ead00()*2.09715);
}

double NNfunction-NN_3_4::synapse0x1405f30() {
   return (neuron0x13eb6d0()*-2.06015);
}

double NNfunction-NN_3_4::synapse0x1405f70() {
   return (neuron0x13ec0a0()*-0.126388);
}

double NNfunction-NN_3_4::synapse0x1405fb0() {
   return (neuron0x13eca70()*0.0801113);
}

double NNfunction-NN_3_4::synapse0x1405ff0() {
   return (neuron0x13ed440()*0.249199);
}

double NNfunction-NN_3_4::synapse0x1406030() {
   return (neuron0x13ede10()*1.14014);
}

double NNfunction-NN_3_4::synapse0x1405be0() {
   return (neuron0x13e3ea0()*-0.61985);
}

double NNfunction-NN_3_4::synapse0x1405c20() {
   return (neuron0x13f09f0()*0.498684);
}

double NNfunction-NN_3_4::synapse0x1405c60() {
   return (neuron0x13f13c0()*0.196902);
}

double NNfunction-NN_3_4::synapse0x1405ca0() {
   return (neuron0x13f1d90()*-0.214533);
}

double NNfunction-NN_3_4::synapse0x1406280() {
   return (neuron0x13f2760()*0.598373);
}

double NNfunction-NN_3_4::synapse0x14062c0() {
   return (neuron0x13f3130()*0.053621);
}

double NNfunction-NN_3_4::synapse0x1406300() {
   return (neuron0x13f3b00()*0.544191);
}

double NNfunction-NN_3_4::synapse0x1406340() {
   return (neuron0x13f44d0()*0.348275);
}

double NNfunction-NN_3_4::synapse0x1406380() {
   return (neuron0x13f4ea0()*-0.374474);
}

double NNfunction-NN_3_4::synapse0x14063c0() {
   return (neuron0x13f5a80()*-0.71307);
}

double NNfunction-NN_3_4::synapse0x1406400() {
   return (neuron0x13f6450()*-0.0213548);
}

double NNfunction-NN_3_4::synapse0x1406440() {
   return (neuron0x13e72d0()*0.0392831);
}

double NNfunction-NN_3_4::synapse0x1406480() {
   return (neuron0x13e7ca0()*-0.490139);
}

double NNfunction-NN_3_4::synapse0x14064c0() {
   return (neuron0x13e8670()*0.0703096);
}

double NNfunction-NN_3_4::synapse0x1406500() {
   return (neuron0x13facb0()*-0.670082);
}

double NNfunction-NN_3_4::synapse0x1406540() {
   return (neuron0x13fb560()*0.469525);
}

double NNfunction-NN_3_4::synapse0x1406580() {
   return (neuron0x13fbf30()*0.0562381);
}

double NNfunction-NN_3_4::synapse0x14065c0() {
   return (neuron0x13fc900()*0.0725382);
}

double NNfunction-NN_3_4::synapse0x1406940() {
   return (neuron0x13d8880()*0.63163);
}

double NNfunction-NN_3_4::synapse0x1406980() {
   return (neuron0x13d9190()*0.110116);
}

double NNfunction-NN_3_4::synapse0x14069c0() {
   return (neuron0x13d9c70()*0.043426);
}

double NNfunction-NN_3_4::synapse0x1406a00() {
   return (neuron0x1193500()*-0.123256);
}

double NNfunction-NN_3_4::synapse0x1406a40() {
   return (neuron0x13daa90()*1.15926);
}

double NNfunction-NN_3_4::synapse0x1406a80() {
   return (neuron0x13db460()*0.0653769);
}

double NNfunction-NN_3_4::synapse0x1406ac0() {
   return (neuron0x13dc230()*0.253099);
}

double NNfunction-NN_3_4::synapse0x1406b00() {
   return (neuron0x13dcc00()*-0.083827);
}

double NNfunction-NN_3_4::synapse0x1406b40() {
   return (neuron0x13dd5d0()*1.10462);
}

double NNfunction-NN_3_4::synapse0x1406b80() {
   return (neuron0x13de0b0()*-0.031906);
}

double NNfunction-NN_3_4::synapse0x1406bc0() {
   return (neuron0x13dea80()*4.15693);
}

double NNfunction-NN_3_4::synapse0x1406c00() {
   return (neuron0x13dbb60()*0.822108);
}

double NNfunction-NN_3_4::synapse0x1406c40() {
   return (neuron0x13e0630()*0.234677);
}

double NNfunction-NN_3_4::synapse0x1406c80() {
   return (neuron0x13e1000()*-0.234146);
}

double NNfunction-NN_3_4::synapse0x1406cc0() {
   return (neuron0x13e19d0()*0.100437);
}

double NNfunction-NN_3_4::synapse0x1406d00() {
   return (neuron0x13e23a0()*0.408899);
}

double NNfunction-NN_3_4::synapse0x1406790() {
   return (neuron0x13e41b0()*0.0912789);
}

double NNfunction-NN_3_4::synapse0x14067d0() {
   return (neuron0x13e4490()*1.37498);
}

double NNfunction-NN_3_4::synapse0x1406e50() {
   return (neuron0x13e4e60()*2.10227);
}

double NNfunction-NN_3_4::synapse0x1406e90() {
   return (neuron0x13e5830()*1.90594);
}

double NNfunction-NN_3_4::synapse0x1406ed0() {
   return (neuron0x13e6200()*-2.11732);
}

double NNfunction-NN_3_4::synapse0x1406f10() {
   return (neuron0x13e6bd0()*-0.185839);
}

double NNfunction-NN_3_4::synapse0x1406f50() {
   return (neuron0x13df720()*1.43931);
}

double NNfunction-NN_3_4::synapse0x1406f90() {
   return (neuron0x13e00f0()*1.03001);
}

double NNfunction-NN_3_4::synapse0x1406fd0() {
   return (neuron0x13e9960()*1.0792);
}

double NNfunction-NN_3_4::synapse0x1407010() {
   return (neuron0x13ea330()*0.256455);
}

double NNfunction-NN_3_4::synapse0x1407050() {
   return (neuron0x13ead00()*0.862549);
}

double NNfunction-NN_3_4::synapse0x1407090() {
   return (neuron0x13eb6d0()*-1.19451);
}

double NNfunction-NN_3_4::synapse0x14070d0() {
   return (neuron0x13ec0a0()*0.154993);
}

double NNfunction-NN_3_4::synapse0x1407110() {
   return (neuron0x13eca70()*-0.0452126);
}

double NNfunction-NN_3_4::synapse0x1407150() {
   return (neuron0x13ed440()*-0.369778);
}

double NNfunction-NN_3_4::synapse0x1407190() {
   return (neuron0x13ede10()*1.06662);
}

double NNfunction-NN_3_4::synapse0x1406d40() {
   return (neuron0x13e3ea0()*-0.0852457);
}

double NNfunction-NN_3_4::synapse0x1406d80() {
   return (neuron0x13f09f0()*0.746805);
}

double NNfunction-NN_3_4::synapse0x1406dc0() {
   return (neuron0x13f13c0()*-1.66448);
}

double NNfunction-NN_3_4::synapse0x1406e00() {
   return (neuron0x13f1d90()*0.0553658);
}

double NNfunction-NN_3_4::synapse0x14073e0() {
   return (neuron0x13f2760()*1.06288);
}

double NNfunction-NN_3_4::synapse0x1407420() {
   return (neuron0x13f3130()*-1.35611);
}

double NNfunction-NN_3_4::synapse0x1407460() {
   return (neuron0x13f3b00()*-1.03419);
}

double NNfunction-NN_3_4::synapse0x14074a0() {
   return (neuron0x13f44d0()*-0.616917);
}

double NNfunction-NN_3_4::synapse0x14074e0() {
   return (neuron0x13f4ea0()*0.02598);
}

double NNfunction-NN_3_4::synapse0x1407520() {
   return (neuron0x13f5a80()*-1.9486);
}

double NNfunction-NN_3_4::synapse0x1407560() {
   return (neuron0x13f6450()*0.064542);
}

double NNfunction-NN_3_4::synapse0x14075a0() {
   return (neuron0x13e72d0()*0.661604);
}

double NNfunction-NN_3_4::synapse0x14075e0() {
   return (neuron0x13e7ca0()*-1.84388);
}

double NNfunction-NN_3_4::synapse0x1407620() {
   return (neuron0x13e8670()*-0.10717);
}

double NNfunction-NN_3_4::synapse0x1407660() {
   return (neuron0x13facb0()*-0.855982);
}

double NNfunction-NN_3_4::synapse0x14076a0() {
   return (neuron0x13fb560()*0.166022);
}

double NNfunction-NN_3_4::synapse0x14076e0() {
   return (neuron0x13fbf30()*1.31085);
}

double NNfunction-NN_3_4::synapse0x1407720() {
   return (neuron0x13fc900()*-1.13283);
}

double NNfunction-NN_3_4::synapse0x13d8840() {
   return (neuron0x1403b00()*-1.3493);
}

double NNfunction-NN_3_4::synapse0x1407980() {
   return (neuron0x1403ea0()*-3.34786);
}

double NNfunction-NN_3_4::synapse0x14079c0() {
   return (neuron0x1404340()*-3.1538);
}

double NNfunction-NN_3_4::synapse0x1407a00() {
   return (neuron0x14054a0()*-4.61797);
}

double NNfunction-NN_3_4::synapse0x1407a40() {
   return (neuron0x1406600()*-3.28818);
}

