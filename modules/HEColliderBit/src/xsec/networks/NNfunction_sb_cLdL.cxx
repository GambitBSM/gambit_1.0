#include "NNfunction_sb_cLdL.h"
#include <cmath>

double NNfunction_sb_cLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4724)/15.3054;
   input1 = (in1 - -0.440816)/1143.4;
   input2 = (in2 - 665.373)/618.852;
   input3 = (in3 - -53.1457)/780.647;
   input4 = (in4 - 1028.63)/933.569;
   input5 = (in5 - 878.046)/932.441;
   input6 = (in6 - 886.024)/930.972;
   input7 = (in7 - 911.243)/922.253;
   input8 = (in8 - 922.982)/975.042;
   input9 = (in9 - 893.872)/953.959;
   input10 = (in10 - 983.462)/957.554;
   input11 = (in11 - 327.501)/319.62;
   input12 = (in12 - 327.165)/317.925;
   input13 = (in13 - 499.828)/513.166;
   input14 = (in14 - 695.927)/790.263;
   input15 = (in15 - 695.622)/791.491;
   input16 = (in16 - 529.096)/551.21;
   input17 = (in17 - 766.85)/906.013;
   input18 = (in18 - 753.582)/904.544;
   input19 = (in19 - 799.625)/876.016;
   input20 = (in20 - -4.35432)/485.024;
   input21 = (in21 - 2.79683)/1158.86;
   input22 = (in22 - 7.99225)/1204.24;
   input23 = (in23 - -196.125)/595.177;
   switch(index) {
     case 0:
         return neuron0x128a4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLdL::Value(int index, double* input) {
   input0 = (input[0] - 23.4724)/15.3054;
   input1 = (input[1] - -0.440816)/1143.4;
   input2 = (input[2] - 665.373)/618.852;
   input3 = (input[3] - -53.1457)/780.647;
   input4 = (input[4] - 1028.63)/933.569;
   input5 = (input[5] - 878.046)/932.441;
   input6 = (input[6] - 886.024)/930.972;
   input7 = (input[7] - 911.243)/922.253;
   input8 = (input[8] - 922.982)/975.042;
   input9 = (input[9] - 893.872)/953.959;
   input10 = (input[10] - 983.462)/957.554;
   input11 = (input[11] - 327.501)/319.62;
   input12 = (input[12] - 327.165)/317.925;
   input13 = (input[13] - 499.828)/513.166;
   input14 = (input[14] - 695.927)/790.263;
   input15 = (input[15] - 695.622)/791.491;
   input16 = (input[16] - 529.096)/551.21;
   input17 = (input[17] - 766.85)/906.013;
   input18 = (input[18] - 753.582)/904.544;
   input19 = (input[19] - 799.625)/876.016;
   input20 = (input[20] - -4.35432)/485.024;
   input21 = (input[21] - 2.79683)/1158.86;
   input22 = (input[22] - 7.99225)/1204.24;
   input23 = (input[23] - -196.125)/595.177;
   switch(index) {
     case 0:
         return neuron0x128a4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLdL::neuron0x1256570() {
   return input0;
}

double NNfunction_sb_cLdL::neuron0x12568b0() {
   return input1;
}

double NNfunction_sb_cLdL::neuron0x1256bf0() {
   return input2;
}

double NNfunction_sb_cLdL::neuron0x1256f30() {
   return input3;
}

double NNfunction_sb_cLdL::neuron0x1257270() {
   return input4;
}

double NNfunction_sb_cLdL::neuron0x12575b0() {
   return input5;
}

double NNfunction_sb_cLdL::neuron0x12578f0() {
   return input6;
}

double NNfunction_sb_cLdL::neuron0x1257c30() {
   return input7;
}

double NNfunction_sb_cLdL::neuron0x1257f70() {
   return input8;
}

double NNfunction_sb_cLdL::neuron0x12582b0() {
   return input9;
}

double NNfunction_sb_cLdL::neuron0x12585f0() {
   return input10;
}

double NNfunction_sb_cLdL::neuron0x1258930() {
   return input11;
}

double NNfunction_sb_cLdL::neuron0x1258c70() {
   return input12;
}

double NNfunction_sb_cLdL::neuron0x1258fb0() {
   return input13;
}

double NNfunction_sb_cLdL::neuron0x12592f0() {
   return input14;
}

double NNfunction_sb_cLdL::neuron0x1259630() {
   return input15;
}

double NNfunction_sb_cLdL::neuron0x1259970() {
   return input16;
}

double NNfunction_sb_cLdL::neuron0x1259ed0() {
   return input17;
}

double NNfunction_sb_cLdL::neuron0x125a0f0() {
   return input18;
}

double NNfunction_sb_cLdL::neuron0x125a430() {
   return input19;
}

double NNfunction_sb_cLdL::neuron0x125a770() {
   return input20;
}

double NNfunction_sb_cLdL::neuron0x125aab0() {
   return input21;
}

double NNfunction_sb_cLdL::neuron0x125adf0() {
   return input22;
}

double NNfunction_sb_cLdL::neuron0x125b130() {
   return input23;
}

double NNfunction_sb_cLdL::input0x125b5d0() {
   double input = 0.108844;
   input += synapse0x10163e0();
   input += synapse0x1256430();
   input += synapse0x1256470();
   input += synapse0x125b880();
   input += synapse0x125b8c0();
   input += synapse0x125b900();
   input += synapse0x125b940();
   input += synapse0x125b980();
   input += synapse0x125b9c0();
   input += synapse0x125ba00();
   input += synapse0x125ba40();
   input += synapse0x125ba80();
   input += synapse0x125bac0();
   input += synapse0x125bb00();
   input += synapse0x125bb40();
   input += synapse0x125bb80();
   input += synapse0x12563a0();
   input += synapse0x12563e0();
   input += synapse0x1007c80();
   input += synapse0x1007cc0();
   input += synapse0x125bde0();
   input += synapse0x125be20();
   input += synapse0x125be60();
   input += synapse0x125bea0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x125b5d0() {
   double input = input0x125b5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x125bee0() {
   double input = 0.31765;
   input += synapse0x125c220();
   input += synapse0x125c260();
   input += synapse0x125c2a0();
   input += synapse0x125c2e0();
   input += synapse0x125c320();
   input += synapse0x125c360();
   input += synapse0x125c3a0();
   input += synapse0x125c3e0();
   input += synapse0x125c420();
   input += synapse0x125bcd0();
   input += synapse0x125bd10();
   input += synapse0x125bd50();
   input += synapse0x125bd90();
   input += synapse0x125c670();
   input += synapse0x125c6b0();
   input += synapse0x125c6f0();
   input += synapse0x125c070();
   input += synapse0x125c0b0();
   input += synapse0x125c840();
   input += synapse0x125c880();
   input += synapse0x125c8c0();
   input += synapse0x125c900();
   input += synapse0x125c940();
   input += synapse0x125c980();
   return input;
}

double NNfunction_sb_cLdL::neuron0x125bee0() {
   double input = input0x125bee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x125c9c0() {
   double input = -0.156723;
   input += synapse0x125cd00();
   input += synapse0x125cd40();
   input += synapse0x125cd80();
   input += synapse0x125cdc0();
   input += synapse0x125ce00();
   input += synapse0x125ce40();
   input += synapse0x125ce80();
   input += synapse0x125cec0();
   input += synapse0x125cf00();
   input += synapse0x125cf40();
   input += synapse0x125cf80();
   input += synapse0x125cfc0();
   input += synapse0x125d000();
   input += synapse0x125d040();
   input += synapse0x125d080();
   input += synapse0x125d0c0();
   input += synapse0x125cb50();
   input += synapse0x125cb90();
   input += synapse0x1015ad0();
   input += synapse0x1015b10();
   input += synapse0x1245600();
   input += synapse0x1245640();
   input += synapse0x1245680();
   input += synapse0x12564b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x125c9c0() {
   double input = input0x125c9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1016250() {
   double input = -0.565624;
   input += synapse0x125c610();
   input += synapse0x12564f0();
   input += synapse0x1256530();
   input += synapse0x125d210();
   input += synapse0x125d250();
   input += synapse0x125d290();
   input += synapse0x125d2d0();
   input += synapse0x125d310();
   input += synapse0x125d350();
   input += synapse0x125d390();
   input += synapse0x125d3d0();
   input += synapse0x125d410();
   input += synapse0x125d450();
   input += synapse0x125d490();
   input += synapse0x125d4d0();
   input += synapse0x125d510();
   input += synapse0x125c460();
   input += synapse0x125c4a0();
   input += synapse0x125d660();
   input += synapse0x125d6a0();
   input += synapse0x125d6e0();
   input += synapse0x125d720();
   input += synapse0x125d760();
   input += synapse0x125d7a0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1016250() {
   double input = input0x1016250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x125d7e0() {
   double input = -0.715281;
   input += synapse0x125db20();
   input += synapse0x125db60();
   input += synapse0x125dba0();
   input += synapse0x125dbe0();
   input += synapse0x125dc20();
   input += synapse0x125dc60();
   input += synapse0x125dca0();
   input += synapse0x125dce0();
   input += synapse0x125dd20();
   input += synapse0x125dd60();
   input += synapse0x125dda0();
   input += synapse0x125dde0();
   input += synapse0x125de20();
   input += synapse0x125de60();
   input += synapse0x125dea0();
   input += synapse0x125dee0();
   input += synapse0x125d970();
   input += synapse0x125d9b0();
   input += synapse0x125e030();
   input += synapse0x125e070();
   input += synapse0x125e0b0();
   input += synapse0x125e0f0();
   input += synapse0x125e130();
   input += synapse0x125e170();
   return input;
}

double NNfunction_sb_cLdL::neuron0x125d7e0() {
   double input = input0x125d7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x125e1b0() {
   double input = -0.853542;
   input += synapse0x125e4f0();
   input += synapse0x125e530();
   input += synapse0x125e570();
   input += synapse0x125e5b0();
   input += synapse0x125e5f0();
   input += synapse0x125e630();
   input += synapse0x125e670();
   input += synapse0x125e6b0();
   input += synapse0x125e6f0();
   input += synapse0x1015e40();
   input += synapse0x1015e80();
   input += synapse0x1015ec0();
   input += synapse0x1015f00();
   input += synapse0x1015f40();
   input += synapse0x1015f80();
   input += synapse0x1015fc0();
   input += synapse0x125e340();
   input += synapse0x125e380();
   input += synapse0x1016110();
   input += synapse0x1016150();
   input += synapse0x1016190();
   input += synapse0x10161d0();
   input += synapse0x1016210();
   input += synapse0x125ef40();
   return input;
}

double NNfunction_sb_cLdL::neuron0x125e1b0() {
   double input = input0x125e1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x125ef80() {
   double input = 4.5784;
   input += synapse0x125f2c0();
   input += synapse0x125f300();
   input += synapse0x125f340();
   input += synapse0x125f380();
   input += synapse0x125f3c0();
   input += synapse0x125f400();
   input += synapse0x125f440();
   input += synapse0x125f480();
   input += synapse0x125f4c0();
   input += synapse0x125f500();
   input += synapse0x125f540();
   input += synapse0x125f580();
   input += synapse0x125f5c0();
   input += synapse0x125f600();
   input += synapse0x125f640();
   input += synapse0x125f680();
   input += synapse0x125f110();
   input += synapse0x125f150();
   input += synapse0x125f7d0();
   input += synapse0x125f810();
   input += synapse0x125f850();
   input += synapse0x125f890();
   input += synapse0x125f8d0();
   input += synapse0x125f910();
   return input;
}

double NNfunction_sb_cLdL::neuron0x125ef80() {
   double input = input0x125ef80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x125f950() {
   double input = -0.609374;
   input += synapse0x125fc90();
   input += synapse0x125fcd0();
   input += synapse0x125fd10();
   input += synapse0x125fd50();
   input += synapse0x125fd90();
   input += synapse0x125fdd0();
   input += synapse0x125fe10();
   input += synapse0x125fe50();
   input += synapse0x125fe90();
   input += synapse0x125fed0();
   input += synapse0x125ff10();
   input += synapse0x125ff50();
   input += synapse0x125ff90();
   input += synapse0x125ffd0();
   input += synapse0x1260010();
   input += synapse0x1260050();
   input += synapse0x125fae0();
   input += synapse0x125fb20();
   input += synapse0x12601a0();
   input += synapse0x12601e0();
   input += synapse0x1260220();
   input += synapse0x1260260();
   input += synapse0x12602a0();
   input += synapse0x12602e0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x125f950() {
   double input = input0x125f950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1260320() {
   double input = 1.34583;
   input += synapse0x1259dc0();
   input += synapse0x1259e00();
   input += synapse0x1259e40();
   input += synapse0x1259e80();
   input += synapse0x1260870();
   input += synapse0x12608b0();
   input += synapse0x12608f0();
   input += synapse0x1260930();
   input += synapse0x1260970();
   input += synapse0x12609b0();
   input += synapse0x12609f0();
   input += synapse0x1260a30();
   input += synapse0x1260a70();
   input += synapse0x1260ab0();
   input += synapse0x1260af0();
   input += synapse0x1260b30();
   input += synapse0x12604b0();
   input += synapse0x12604f0();
   input += synapse0x1260c80();
   input += synapse0x1260cc0();
   input += synapse0x1260d00();
   input += synapse0x1260d40();
   input += synapse0x1260d80();
   input += synapse0x1260dc0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1260320() {
   double input = input0x1260320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1260e00() {
   double input = 0.458209;
   input += synapse0x1261140();
   input += synapse0x1261180();
   input += synapse0x12611c0();
   input += synapse0x1261200();
   input += synapse0x1261240();
   input += synapse0x1261280();
   input += synapse0x12612c0();
   input += synapse0x1261300();
   input += synapse0x1261340();
   input += synapse0x1261380();
   input += synapse0x12613c0();
   input += synapse0x1261400();
   input += synapse0x1261440();
   input += synapse0x1261480();
   input += synapse0x12614c0();
   input += synapse0x1261500();
   input += synapse0x1260f90();
   input += synapse0x1260fd0();
   input += synapse0x1261650();
   input += synapse0x1261690();
   input += synapse0x12616d0();
   input += synapse0x1261710();
   input += synapse0x1261750();
   input += synapse0x1261790();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1260e00() {
   double input = input0x1260e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x12617d0() {
   double input = 3.37051;
   input += synapse0x1261b10();
   input += synapse0x1261b50();
   input += synapse0x1261b90();
   input += synapse0x1261bd0();
   input += synapse0x1261c10();
   input += synapse0x1261c50();
   input += synapse0x1261c90();
   input += synapse0x1261cd0();
   input += synapse0x1261d10();
   input += synapse0x1261d50();
   input += synapse0x1261d90();
   input += synapse0x1261dd0();
   input += synapse0x1261e10();
   input += synapse0x1261e50();
   input += synapse0x1261e90();
   input += synapse0x1261ed0();
   input += synapse0x1261960();
   input += synapse0x12619a0();
   input += synapse0x125e730();
   input += synapse0x125e770();
   input += synapse0x125e7b0();
   input += synapse0x125e7f0();
   input += synapse0x125e830();
   input += synapse0x125e870();
   return input;
}

double NNfunction_sb_cLdL::neuron0x12617d0() {
   double input = input0x12617d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x125e8b0() {
   double input = -0.473035;
   input += synapse0x125ebf0();
   input += synapse0x125ec30();
   input += synapse0x125ec70();
   input += synapse0x125ecb0();
   input += synapse0x125ecf0();
   input += synapse0x125ed30();
   input += synapse0x125ed70();
   input += synapse0x125edb0();
   input += synapse0x125edf0();
   input += synapse0x125ee30();
   input += synapse0x125ee70();
   input += synapse0x125eeb0();
   input += synapse0x125eef0();
   input += synapse0x1263030();
   input += synapse0x1263070();
   input += synapse0x12630b0();
   input += synapse0x125ea40();
   input += synapse0x125ea80();
   input += synapse0x1263200();
   input += synapse0x1263240();
   input += synapse0x1263280();
   input += synapse0x12632c0();
   input += synapse0x1263300();
   input += synapse0x1263340();
   return input;
}

double NNfunction_sb_cLdL::neuron0x125e8b0() {
   double input = input0x125e8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1263380() {
   double input = -0.534332;
   input += synapse0x12636c0();
   input += synapse0x1263700();
   input += synapse0x1263740();
   input += synapse0x1263780();
   input += synapse0x12637c0();
   input += synapse0x1263800();
   input += synapse0x1263840();
   input += synapse0x1263880();
   input += synapse0x12638c0();
   input += synapse0x1263900();
   input += synapse0x1263940();
   input += synapse0x1263980();
   input += synapse0x12639c0();
   input += synapse0x1263a00();
   input += synapse0x1263a40();
   input += synapse0x1263a80();
   input += synapse0x1263510();
   input += synapse0x1263550();
   input += synapse0x1263bd0();
   input += synapse0x1263c10();
   input += synapse0x1263c50();
   input += synapse0x1263c90();
   input += synapse0x1263cd0();
   input += synapse0x1263d10();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1263380() {
   double input = input0x1263380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1263d50() {
   double input = 0.519504;
   input += synapse0x1264090();
   input += synapse0x12640d0();
   input += synapse0x1264110();
   input += synapse0x1264150();
   input += synapse0x1264190();
   input += synapse0x12641d0();
   input += synapse0x1264210();
   input += synapse0x1264250();
   input += synapse0x1264290();
   input += synapse0x12642d0();
   input += synapse0x1264310();
   input += synapse0x1264350();
   input += synapse0x1264390();
   input += synapse0x12643d0();
   input += synapse0x1264410();
   input += synapse0x1264450();
   input += synapse0x1263ee0();
   input += synapse0x1263f20();
   input += synapse0x12645a0();
   input += synapse0x12645e0();
   input += synapse0x1264620();
   input += synapse0x1264660();
   input += synapse0x12646a0();
   input += synapse0x12646e0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1263d50() {
   double input = input0x1263d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1264720() {
   double input = -0.341933;
   input += synapse0x1264a60();
   input += synapse0x1264aa0();
   input += synapse0x1264ae0();
   input += synapse0x1264b20();
   input += synapse0x1264b60();
   input += synapse0x1264ba0();
   input += synapse0x1264be0();
   input += synapse0x1264c20();
   input += synapse0x1264c60();
   input += synapse0x1264ca0();
   input += synapse0x1264ce0();
   input += synapse0x1264d20();
   input += synapse0x1264d60();
   input += synapse0x1264da0();
   input += synapse0x1264de0();
   input += synapse0x1264e20();
   input += synapse0x12648b0();
   input += synapse0x12648f0();
   input += synapse0x1264f70();
   input += synapse0x1264fb0();
   input += synapse0x1264ff0();
   input += synapse0x1265030();
   input += synapse0x1265070();
   input += synapse0x12650b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1264720() {
   double input = input0x1264720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x12650f0() {
   double input = -4.13193;
   input += synapse0x1265430();
   input += synapse0x1256790();
   input += synapse0x12567d0();
   input += synapse0x1256ad0();
   input += synapse0x1256b10();
   input += synapse0x1256e10();
   input += synapse0x1256e50();
   input += synapse0x1257150();
   input += synapse0x1257190();
   input += synapse0x1257490();
   input += synapse0x12574d0();
   input += synapse0x12577d0();
   input += synapse0x1257810();
   input += synapse0x1257b10();
   input += synapse0x1257b50();
   input += synapse0x1257e50();
   input += synapse0x1257e90();
   input += synapse0x1258190();
   input += synapse0x12581d0();
   input += synapse0x12584d0();
   input += synapse0x1258510();
   input += synapse0x1258810();
   input += synapse0x1258850();
   input += synapse0x1258b50();
   return input;
}

double NNfunction_sb_cLdL::neuron0x12650f0() {
   double input = input0x12650f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1266f00() {
   double input = -0.0894112;
   input += synapse0x1258b90();
   input += synapse0x1259850();
   input += synapse0x1259890();
   input += synapse0x1265280();
   input += synapse0x12652c0();
   input += synapse0x1259b90();
   input += synapse0x1259bd0();
   input += synapse0x1007b60();
   input += synapse0x1007ba0();
   input += synapse0x125a310();
   input += synapse0x125a350();
   input += synapse0x125a650();
   input += synapse0x125a690();
   input += synapse0x125a990();
   input += synapse0x125a9d0();
   input += synapse0x125acd0();
   input += synapse0x125ad10();
   input += synapse0x125b010();
   input += synapse0x125b050();
   input += synapse0x125b350();
   input += synapse0x125b390();
   input += synapse0x1258e90();
   input += synapse0x1258ed0();
   input += synapse0x12671a0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1266f00() {
   double input = input0x1266f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x12671e0() {
   double input = 0.129305;
   input += synapse0x1267520();
   input += synapse0x1267560();
   input += synapse0x12675a0();
   input += synapse0x12675e0();
   input += synapse0x1267620();
   input += synapse0x1267660();
   input += synapse0x12676a0();
   input += synapse0x12676e0();
   input += synapse0x1267720();
   input += synapse0x1267760();
   input += synapse0x12677a0();
   input += synapse0x12677e0();
   input += synapse0x1267820();
   input += synapse0x1267860();
   input += synapse0x12678a0();
   input += synapse0x12678e0();
   input += synapse0x1267370();
   input += synapse0x12673b0();
   input += synapse0x1267a30();
   input += synapse0x1267a70();
   input += synapse0x1267ab0();
   input += synapse0x1267af0();
   input += synapse0x1267b30();
   input += synapse0x1267b70();
   return input;
}

double NNfunction_sb_cLdL::neuron0x12671e0() {
   double input = input0x12671e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1267bb0() {
   double input = 0.330183;
   input += synapse0x1267ef0();
   input += synapse0x1267f30();
   input += synapse0x1267f70();
   input += synapse0x1267fb0();
   input += synapse0x1267ff0();
   input += synapse0x1268030();
   input += synapse0x1268070();
   input += synapse0x12680b0();
   input += synapse0x12680f0();
   input += synapse0x1268130();
   input += synapse0x1268170();
   input += synapse0x12681b0();
   input += synapse0x12681f0();
   input += synapse0x1268230();
   input += synapse0x1268270();
   input += synapse0x12682b0();
   input += synapse0x1267d40();
   input += synapse0x1267d80();
   input += synapse0x1268400();
   input += synapse0x1268440();
   input += synapse0x1268480();
   input += synapse0x12684c0();
   input += synapse0x1268500();
   input += synapse0x1268540();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1267bb0() {
   double input = input0x1267bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1268580() {
   double input = 0.492869;
   input += synapse0x12688c0();
   input += synapse0x1268900();
   input += synapse0x1268940();
   input += synapse0x1268980();
   input += synapse0x12689c0();
   input += synapse0x1268a00();
   input += synapse0x1268a40();
   input += synapse0x1268a80();
   input += synapse0x1268ac0();
   input += synapse0x1268b00();
   input += synapse0x1268b40();
   input += synapse0x1268b80();
   input += synapse0x1268bc0();
   input += synapse0x1268c00();
   input += synapse0x1268c40();
   input += synapse0x1268c80();
   input += synapse0x1268710();
   input += synapse0x1268750();
   input += synapse0x1268dd0();
   input += synapse0x1268e10();
   input += synapse0x1268e50();
   input += synapse0x1268e90();
   input += synapse0x1268ed0();
   input += synapse0x1268f10();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1268580() {
   double input = input0x1268580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1268f50() {
   double input = 0.182403;
   input += synapse0x1269290();
   input += synapse0x12692d0();
   input += synapse0x1269310();
   input += synapse0x1269350();
   input += synapse0x1269390();
   input += synapse0x12693d0();
   input += synapse0x1269410();
   input += synapse0x1269450();
   input += synapse0x1269490();
   input += synapse0x12694d0();
   input += synapse0x1269510();
   input += synapse0x1269550();
   input += synapse0x1269590();
   input += synapse0x12695d0();
   input += synapse0x1269610();
   input += synapse0x1269650();
   input += synapse0x12690e0();
   input += synapse0x1269120();
   input += synapse0x12697a0();
   input += synapse0x12697e0();
   input += synapse0x1269820();
   input += synapse0x1269860();
   input += synapse0x12698a0();
   input += synapse0x12698e0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1268f50() {
   double input = input0x1268f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1269920() {
   double input = -1.05799;
   input += synapse0x1269c60();
   input += synapse0x1269ca0();
   input += synapse0x1269ce0();
   input += synapse0x1269d20();
   input += synapse0x1269d60();
   input += synapse0x1269da0();
   input += synapse0x1269de0();
   input += synapse0x1269e20();
   input += synapse0x1269e60();
   input += synapse0x1262020();
   input += synapse0x1262060();
   input += synapse0x12620a0();
   input += synapse0x12620e0();
   input += synapse0x1262120();
   input += synapse0x1262160();
   input += synapse0x12621a0();
   input += synapse0x1269ab0();
   input += synapse0x1269af0();
   input += synapse0x12622f0();
   input += synapse0x1262330();
   input += synapse0x1262370();
   input += synapse0x12623b0();
   input += synapse0x12623f0();
   input += synapse0x1262430();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1269920() {
   double input = input0x1269920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1262470() {
   double input = 0.65254;
   input += synapse0x12627b0();
   input += synapse0x12627f0();
   input += synapse0x1262830();
   input += synapse0x1262870();
   input += synapse0x12628b0();
   input += synapse0x12628f0();
   input += synapse0x1262930();
   input += synapse0x1262970();
   input += synapse0x12629b0();
   input += synapse0x12629f0();
   input += synapse0x1262a30();
   input += synapse0x1262a70();
   input += synapse0x1262ab0();
   input += synapse0x1262af0();
   input += synapse0x1262b30();
   input += synapse0x1262b70();
   input += synapse0x1262600();
   input += synapse0x1262640();
   input += synapse0x1262cc0();
   input += synapse0x1262d00();
   input += synapse0x1262d40();
   input += synapse0x1262d80();
   input += synapse0x1262dc0();
   input += synapse0x1262e00();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1262470() {
   double input = input0x1262470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1262e40() {
   double input = 0.348239;
   input += synapse0x1262fd0();
   input += synapse0x126c060();
   input += synapse0x126c0a0();
   input += synapse0x126c0e0();
   input += synapse0x126c120();
   input += synapse0x126c160();
   input += synapse0x126c1a0();
   input += synapse0x126c1e0();
   input += synapse0x126c220();
   input += synapse0x126c260();
   input += synapse0x126c2a0();
   input += synapse0x126c2e0();
   input += synapse0x126c320();
   input += synapse0x126c360();
   input += synapse0x126c3a0();
   input += synapse0x126c3e0();
   input += synapse0x126beb0();
   input += synapse0x126bef0();
   input += synapse0x126c530();
   input += synapse0x126c570();
   input += synapse0x126c5b0();
   input += synapse0x126c5f0();
   input += synapse0x126c630();
   input += synapse0x126c670();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1262e40() {
   double input = input0x1262e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x126c6b0() {
   double input = -0.0597454;
   input += synapse0x126c9f0();
   input += synapse0x126ca30();
   input += synapse0x126ca70();
   input += synapse0x126cab0();
   input += synapse0x126caf0();
   input += synapse0x126cb30();
   input += synapse0x126cb70();
   input += synapse0x126cbb0();
   input += synapse0x126cbf0();
   input += synapse0x126cc30();
   input += synapse0x126cc70();
   input += synapse0x126ccb0();
   input += synapse0x126ccf0();
   input += synapse0x126cd30();
   input += synapse0x126cd70();
   input += synapse0x126cdb0();
   input += synapse0x126c840();
   input += synapse0x126c880();
   input += synapse0x126cf00();
   input += synapse0x126cf40();
   input += synapse0x126cf80();
   input += synapse0x126cfc0();
   input += synapse0x126d000();
   input += synapse0x126d040();
   return input;
}

double NNfunction_sb_cLdL::neuron0x126c6b0() {
   double input = input0x126c6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x126d080() {
   double input = 4.93572;
   input += synapse0x126d3c0();
   input += synapse0x126d400();
   input += synapse0x126d440();
   input += synapse0x126d480();
   input += synapse0x126d4c0();
   input += synapse0x126d500();
   input += synapse0x126d540();
   input += synapse0x126d580();
   input += synapse0x126d5c0();
   input += synapse0x126d600();
   input += synapse0x126d640();
   input += synapse0x126d680();
   input += synapse0x126d6c0();
   input += synapse0x126d700();
   input += synapse0x126d740();
   input += synapse0x126d780();
   input += synapse0x126d210();
   input += synapse0x126d250();
   input += synapse0x126d8d0();
   input += synapse0x126d910();
   input += synapse0x126d950();
   input += synapse0x126d990();
   input += synapse0x126d9d0();
   input += synapse0x126da10();
   return input;
}

double NNfunction_sb_cLdL::neuron0x126d080() {
   double input = input0x126d080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x126da50() {
   double input = 0.351243;
   input += synapse0x126dd90();
   input += synapse0x126ddd0();
   input += synapse0x126de10();
   input += synapse0x126de50();
   input += synapse0x126de90();
   input += synapse0x126ded0();
   input += synapse0x126df10();
   input += synapse0x126df50();
   input += synapse0x126df90();
   input += synapse0x126dfd0();
   input += synapse0x126e010();
   input += synapse0x126e050();
   input += synapse0x126e090();
   input += synapse0x126e0d0();
   input += synapse0x126e110();
   input += synapse0x126e150();
   input += synapse0x126dbe0();
   input += synapse0x126dc20();
   input += synapse0x126e2a0();
   input += synapse0x126e2e0();
   input += synapse0x126e320();
   input += synapse0x126e360();
   input += synapse0x126e3a0();
   input += synapse0x126e3e0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x126da50() {
   double input = input0x126da50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x126e420() {
   double input = 0.857996;
   input += synapse0x126e760();
   input += synapse0x126e7a0();
   input += synapse0x126e7e0();
   input += synapse0x126e820();
   input += synapse0x126e860();
   input += synapse0x126e8a0();
   input += synapse0x126e8e0();
   input += synapse0x126e920();
   input += synapse0x126e960();
   input += synapse0x126e9a0();
   input += synapse0x126e9e0();
   input += synapse0x126ea20();
   input += synapse0x126ea60();
   input += synapse0x126eaa0();
   input += synapse0x126eae0();
   input += synapse0x126eb20();
   input += synapse0x126e5b0();
   input += synapse0x126e5f0();
   input += synapse0x126ec70();
   input += synapse0x126ecb0();
   input += synapse0x126ecf0();
   input += synapse0x126ed30();
   input += synapse0x126ed70();
   input += synapse0x126edb0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x126e420() {
   double input = input0x126e420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x126edf0() {
   double input = 2.00887;
   input += synapse0x126f130();
   input += synapse0x126f170();
   input += synapse0x126f1b0();
   input += synapse0x126f1f0();
   input += synapse0x126f230();
   input += synapse0x126f270();
   input += synapse0x126f2b0();
   input += synapse0x126f2f0();
   input += synapse0x126f330();
   input += synapse0x126f370();
   input += synapse0x126f3b0();
   input += synapse0x126f3f0();
   input += synapse0x126f430();
   input += synapse0x126f470();
   input += synapse0x126f4b0();
   input += synapse0x126f4f0();
   input += synapse0x126ef80();
   input += synapse0x126efc0();
   input += synapse0x126f640();
   input += synapse0x126f680();
   input += synapse0x126f6c0();
   input += synapse0x126f700();
   input += synapse0x126f740();
   input += synapse0x126f780();
   return input;
}

double NNfunction_sb_cLdL::neuron0x126edf0() {
   double input = input0x126edf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x126f7c0() {
   double input = 2.0136;
   input += synapse0x126fb00();
   input += synapse0x126fb40();
   input += synapse0x126fb80();
   input += synapse0x126fbc0();
   input += synapse0x126fc00();
   input += synapse0x126fc40();
   input += synapse0x126fc80();
   input += synapse0x126fcc0();
   input += synapse0x126fd00();
   input += synapse0x126fd40();
   input += synapse0x126fd80();
   input += synapse0x126fdc0();
   input += synapse0x126fe00();
   input += synapse0x126fe40();
   input += synapse0x126fe80();
   input += synapse0x126fec0();
   input += synapse0x126f950();
   input += synapse0x126f990();
   input += synapse0x1270010();
   input += synapse0x1270050();
   input += synapse0x1270090();
   input += synapse0x12700d0();
   input += synapse0x1270110();
   input += synapse0x1270150();
   return input;
}

double NNfunction_sb_cLdL::neuron0x126f7c0() {
   double input = input0x126f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1270190() {
   double input = 0.0495811;
   input += synapse0x12704d0();
   input += synapse0x1270510();
   input += synapse0x1270550();
   input += synapse0x1270590();
   input += synapse0x12705d0();
   input += synapse0x1270610();
   input += synapse0x1270650();
   input += synapse0x1270690();
   input += synapse0x12706d0();
   input += synapse0x1270710();
   input += synapse0x1270750();
   input += synapse0x1270790();
   input += synapse0x12707d0();
   input += synapse0x1270810();
   input += synapse0x1270850();
   input += synapse0x1270890();
   input += synapse0x1270320();
   input += synapse0x1270360();
   input += synapse0x12709e0();
   input += synapse0x1270a20();
   input += synapse0x1270a60();
   input += synapse0x1270aa0();
   input += synapse0x1270ae0();
   input += synapse0x1270b20();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1270190() {
   double input = input0x1270190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1270b60() {
   double input = -0.111619;
   input += synapse0x1270ea0();
   input += synapse0x1265470();
   input += synapse0x12654b0();
   input += synapse0x12654f0();
   input += synapse0x1265740();
   input += synapse0x1265780();
   input += synapse0x12657c0();
   input += synapse0x1265a10();
   input += synapse0x1265a50();
   input += synapse0x1265ca0();
   input += synapse0x1265ce0();
   input += synapse0x1265d20();
   input += synapse0x1265f70();
   input += synapse0x1265fb0();
   input += synapse0x1266200();
   input += synapse0x1266240();
   input += synapse0x1270cf0();
   input += synapse0x1270d30();
   input += synapse0x1266390();
   input += synapse0x12668a0();
   input += synapse0x12668e0();
   input += synapse0x1266920();
   input += synapse0x1266b70();
   input += synapse0x1266bb0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1270b60() {
   double input = input0x1270b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1266bf0() {
   double input = -0.357475;
   input += synapse0x1266460();
   input += synapse0x12664a0();
   input += synapse0x12664e0();
   input += synapse0x1266520();
   input += synapse0x1266ea0();
   input += synapse0x12731f0();
   input += synapse0x1273230();
   input += synapse0x1273270();
   input += synapse0x12732b0();
   input += synapse0x12732f0();
   input += synapse0x1273330();
   input += synapse0x1273370();
   input += synapse0x12733b0();
   input += synapse0x12733f0();
   input += synapse0x1273430();
   input += synapse0x1273470();
   input += synapse0x1266d80();
   input += synapse0x1266dc0();
   input += synapse0x12735c0();
   input += synapse0x1273600();
   input += synapse0x1273640();
   input += synapse0x1273680();
   input += synapse0x12736c0();
   input += synapse0x1273700();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1266bf0() {
   double input = input0x1266bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1273740() {
   double input = 3.55187;
   input += synapse0x1273a80();
   input += synapse0x1273ac0();
   input += synapse0x1273b00();
   input += synapse0x1273b40();
   input += synapse0x1273b80();
   input += synapse0x1273bc0();
   input += synapse0x1273c00();
   input += synapse0x1273c40();
   input += synapse0x1273c80();
   input += synapse0x1273cc0();
   input += synapse0x1273d00();
   input += synapse0x1273d40();
   input += synapse0x1273d80();
   input += synapse0x1273dc0();
   input += synapse0x1273e00();
   input += synapse0x1273e40();
   input += synapse0x12738d0();
   input += synapse0x1273910();
   input += synapse0x1273f90();
   input += synapse0x1273fd0();
   input += synapse0x1274010();
   input += synapse0x1274050();
   input += synapse0x1274090();
   input += synapse0x12740d0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1273740() {
   double input = input0x1273740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1274110() {
   double input = 0.927758;
   input += synapse0x1274450();
   input += synapse0x1274490();
   input += synapse0x12744d0();
   input += synapse0x1274510();
   input += synapse0x1274550();
   input += synapse0x1274590();
   input += synapse0x12745d0();
   input += synapse0x1274610();
   input += synapse0x1274650();
   input += synapse0x1274690();
   input += synapse0x12746d0();
   input += synapse0x1274710();
   input += synapse0x1274750();
   input += synapse0x1274790();
   input += synapse0x12747d0();
   input += synapse0x1274810();
   input += synapse0x12742a0();
   input += synapse0x12742e0();
   input += synapse0x1274960();
   input += synapse0x12749a0();
   input += synapse0x12749e0();
   input += synapse0x1274a20();
   input += synapse0x1274a60();
   input += synapse0x1274aa0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1274110() {
   double input = input0x1274110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1274ae0() {
   double input = 0.608026;
   input += synapse0x1274e20();
   input += synapse0x1274e60();
   input += synapse0x1274ea0();
   input += synapse0x1274ee0();
   input += synapse0x1274f20();
   input += synapse0x1274f60();
   input += synapse0x1274fa0();
   input += synapse0x1274fe0();
   input += synapse0x1275020();
   input += synapse0x1275060();
   input += synapse0x12750a0();
   input += synapse0x12750e0();
   input += synapse0x1275120();
   input += synapse0x1275160();
   input += synapse0x12751a0();
   input += synapse0x12751e0();
   input += synapse0x1274c70();
   input += synapse0x1274cb0();
   input += synapse0x1275330();
   input += synapse0x1275370();
   input += synapse0x12753b0();
   input += synapse0x12753f0();
   input += synapse0x1275430();
   input += synapse0x1275470();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1274ae0() {
   double input = input0x1274ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x12754b0() {
   double input = 1.96592;
   input += synapse0x12757f0();
   input += synapse0x1275830();
   input += synapse0x1275870();
   input += synapse0x12758b0();
   input += synapse0x12758f0();
   input += synapse0x1275930();
   input += synapse0x1275970();
   input += synapse0x12759b0();
   input += synapse0x12759f0();
   input += synapse0x1275a30();
   input += synapse0x1275a70();
   input += synapse0x1275ab0();
   input += synapse0x1275af0();
   input += synapse0x1275b30();
   input += synapse0x1275b70();
   input += synapse0x1275bb0();
   input += synapse0x1275640();
   input += synapse0x1275680();
   input += synapse0x1275d00();
   input += synapse0x1275d40();
   input += synapse0x1275d80();
   input += synapse0x1275dc0();
   input += synapse0x1275e00();
   input += synapse0x1275e40();
   return input;
}

double NNfunction_sb_cLdL::neuron0x12754b0() {
   double input = input0x12754b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1275e80() {
   double input = -0.565146;
   input += synapse0x12761c0();
   input += synapse0x1276200();
   input += synapse0x1276240();
   input += synapse0x1276280();
   input += synapse0x12762c0();
   input += synapse0x1276300();
   input += synapse0x1276340();
   input += synapse0x1276380();
   input += synapse0x12763c0();
   input += synapse0x1276400();
   input += synapse0x1276440();
   input += synapse0x1276480();
   input += synapse0x12764c0();
   input += synapse0x1276500();
   input += synapse0x1276540();
   input += synapse0x1276580();
   input += synapse0x1276010();
   input += synapse0x1276050();
   input += synapse0x12766d0();
   input += synapse0x1276710();
   input += synapse0x1276750();
   input += synapse0x1276790();
   input += synapse0x12767d0();
   input += synapse0x1276810();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1275e80() {
   double input = input0x1275e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1276850() {
   double input = 0.513178;
   input += synapse0x1276b90();
   input += synapse0x1276bd0();
   input += synapse0x1276c10();
   input += synapse0x1276c50();
   input += synapse0x1276c90();
   input += synapse0x1276cd0();
   input += synapse0x1276d10();
   input += synapse0x1276d50();
   input += synapse0x1276d90();
   input += synapse0x1276dd0();
   input += synapse0x1276e10();
   input += synapse0x1276e50();
   input += synapse0x1276e90();
   input += synapse0x1276ed0();
   input += synapse0x1276f10();
   input += synapse0x1276f50();
   input += synapse0x12769e0();
   input += synapse0x1276a20();
   input += synapse0x12770a0();
   input += synapse0x12770e0();
   input += synapse0x1277120();
   input += synapse0x1277160();
   input += synapse0x12771a0();
   input += synapse0x12771e0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1276850() {
   double input = input0x1276850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1277220() {
   double input = -0.355083;
   input += synapse0x1277560();
   input += synapse0x12775a0();
   input += synapse0x12775e0();
   input += synapse0x1277620();
   input += synapse0x1277660();
   input += synapse0x12776a0();
   input += synapse0x12776e0();
   input += synapse0x1277720();
   input += synapse0x1277760();
   input += synapse0x12777a0();
   input += synapse0x12777e0();
   input += synapse0x1277820();
   input += synapse0x1277860();
   input += synapse0x12778a0();
   input += synapse0x12778e0();
   input += synapse0x1277920();
   input += synapse0x12773b0();
   input += synapse0x12773f0();
   input += synapse0x1277a70();
   input += synapse0x1277ab0();
   input += synapse0x1277af0();
   input += synapse0x1277b30();
   input += synapse0x1277b70();
   input += synapse0x1277bb0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1277220() {
   double input = input0x1277220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1277bf0() {
   double input = -0.236806;
   input += synapse0x1260660();
   input += synapse0x12606a0();
   input += synapse0x12606e0();
   input += synapse0x1260720();
   input += synapse0x1260760();
   input += synapse0x12607a0();
   input += synapse0x12607e0();
   input += synapse0x1260820();
   input += synapse0x1278340();
   input += synapse0x1278380();
   input += synapse0x12783c0();
   input += synapse0x1278400();
   input += synapse0x1278440();
   input += synapse0x1278480();
   input += synapse0x12784c0();
   input += synapse0x1278500();
   input += synapse0x1277d80();
   input += synapse0x1277dc0();
   input += synapse0x1278650();
   input += synapse0x1278690();
   input += synapse0x12786d0();
   input += synapse0x1278710();
   input += synapse0x1278750();
   input += synapse0x1278790();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1277bf0() {
   double input = input0x1277bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x12787d0() {
   double input = -0.532077;
   input += synapse0x1278b10();
   input += synapse0x1278b50();
   input += synapse0x1278b90();
   input += synapse0x1278bd0();
   input += synapse0x1278c10();
   input += synapse0x1278c50();
   input += synapse0x1278c90();
   input += synapse0x1278cd0();
   input += synapse0x1278d10();
   input += synapse0x1278d50();
   input += synapse0x1278d90();
   input += synapse0x1278dd0();
   input += synapse0x1278e10();
   input += synapse0x1278e50();
   input += synapse0x1278e90();
   input += synapse0x1278ed0();
   input += synapse0x1278960();
   input += synapse0x12789a0();
   input += synapse0x1279020();
   input += synapse0x1279060();
   input += synapse0x12790a0();
   input += synapse0x12790e0();
   input += synapse0x1279120();
   input += synapse0x1279160();
   return input;
}

double NNfunction_sb_cLdL::neuron0x12787d0() {
   double input = input0x12787d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x12791a0() {
   double input = 3.63005;
   input += synapse0x12794e0();
   input += synapse0x1279520();
   input += synapse0x1279560();
   input += synapse0x12795a0();
   input += synapse0x12795e0();
   input += synapse0x1279620();
   input += synapse0x1279660();
   input += synapse0x12796a0();
   input += synapse0x12796e0();
   input += synapse0x1279720();
   input += synapse0x1279760();
   input += synapse0x12797a0();
   input += synapse0x12797e0();
   input += synapse0x1279820();
   input += synapse0x1279860();
   input += synapse0x12798a0();
   input += synapse0x1279330();
   input += synapse0x1279370();
   input += synapse0x1269ea0();
   input += synapse0x1269ee0();
   input += synapse0x1269f20();
   input += synapse0x1269f60();
   input += synapse0x1269fa0();
   input += synapse0x1269fe0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x12791a0() {
   double input = input0x12791a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x126a020() {
   double input = 0.348658;
   input += synapse0x126a360();
   input += synapse0x126a3a0();
   input += synapse0x126a3e0();
   input += synapse0x126a420();
   input += synapse0x126a460();
   input += synapse0x126a4a0();
   input += synapse0x126a4e0();
   input += synapse0x126a520();
   input += synapse0x126a560();
   input += synapse0x126a5a0();
   input += synapse0x126a5e0();
   input += synapse0x126a620();
   input += synapse0x126a660();
   input += synapse0x126a6a0();
   input += synapse0x126a6e0();
   input += synapse0x126a720();
   input += synapse0x126a1b0();
   input += synapse0x126a1f0();
   input += synapse0x126a870();
   input += synapse0x126a8b0();
   input += synapse0x126a8f0();
   input += synapse0x126a930();
   input += synapse0x126a970();
   input += synapse0x126a9b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x126a020() {
   double input = input0x126a020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x126a9f0() {
   double input = -0.348029;
   input += synapse0x126ad30();
   input += synapse0x126ad70();
   input += synapse0x126adb0();
   input += synapse0x126adf0();
   input += synapse0x126ae30();
   input += synapse0x126ae70();
   input += synapse0x126aeb0();
   input += synapse0x126aef0();
   input += synapse0x126af30();
   input += synapse0x126af70();
   input += synapse0x126afb0();
   input += synapse0x126aff0();
   input += synapse0x126b030();
   input += synapse0x126b070();
   input += synapse0x126b0b0();
   input += synapse0x126b0f0();
   input += synapse0x126ab80();
   input += synapse0x126abc0();
   input += synapse0x126b240();
   input += synapse0x126b280();
   input += synapse0x126b2c0();
   input += synapse0x126b300();
   input += synapse0x126b340();
   input += synapse0x126b380();
   return input;
}

double NNfunction_sb_cLdL::neuron0x126a9f0() {
   double input = input0x126a9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x126b3c0() {
   double input = -0.847987;
   input += synapse0x126b700();
   input += synapse0x126b740();
   input += synapse0x126b780();
   input += synapse0x126b7c0();
   input += synapse0x126b800();
   input += synapse0x126b840();
   input += synapse0x126b880();
   input += synapse0x126b8c0();
   input += synapse0x126b900();
   input += synapse0x126b940();
   input += synapse0x126b980();
   input += synapse0x126b9c0();
   input += synapse0x126ba00();
   input += synapse0x126ba40();
   input += synapse0x126ba80();
   input += synapse0x126bac0();
   input += synapse0x126b550();
   input += synapse0x126b590();
   input += synapse0x126bc10();
   input += synapse0x126bc50();
   input += synapse0x126bc90();
   input += synapse0x126bcd0();
   input += synapse0x126bd10();
   input += synapse0x126bd50();
   return input;
}

double NNfunction_sb_cLdL::neuron0x126b3c0() {
   double input = input0x126b3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x127da00() {
   double input = 0.351726;
   input += synapse0x127dc20();
   input += synapse0x127dc60();
   input += synapse0x127dca0();
   input += synapse0x127dce0();
   input += synapse0x127dd20();
   input += synapse0x127dd60();
   input += synapse0x127dda0();
   input += synapse0x127dde0();
   input += synapse0x127de20();
   input += synapse0x127de60();
   input += synapse0x127dea0();
   input += synapse0x127dee0();
   input += synapse0x127df20();
   input += synapse0x127df60();
   input += synapse0x127dfa0();
   input += synapse0x127dfe0();
   input += synapse0x126bd90();
   input += synapse0x126bdd0();
   input += synapse0x127e130();
   input += synapse0x127e170();
   input += synapse0x127e1b0();
   input += synapse0x127e1f0();
   input += synapse0x127e230();
   input += synapse0x127e270();
   return input;
}

double NNfunction_sb_cLdL::neuron0x127da00() {
   double input = input0x127da00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x127e2b0() {
   double input = -1.19976;
   input += synapse0x127e5f0();
   input += synapse0x127e630();
   input += synapse0x127e670();
   input += synapse0x127e6b0();
   input += synapse0x127e6f0();
   input += synapse0x127e730();
   input += synapse0x127e770();
   input += synapse0x127e7b0();
   input += synapse0x127e7f0();
   input += synapse0x127e830();
   input += synapse0x127e870();
   input += synapse0x127e8b0();
   input += synapse0x127e8f0();
   input += synapse0x127e930();
   input += synapse0x127e970();
   input += synapse0x127e9b0();
   input += synapse0x127e440();
   input += synapse0x127e480();
   input += synapse0x127eb00();
   input += synapse0x127eb40();
   input += synapse0x127eb80();
   input += synapse0x127ebc0();
   input += synapse0x127ec00();
   input += synapse0x127ec40();
   return input;
}

double NNfunction_sb_cLdL::neuron0x127e2b0() {
   double input = input0x127e2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x127ec80() {
   double input = 1.25326;
   input += synapse0x127efc0();
   input += synapse0x127f000();
   input += synapse0x127f040();
   input += synapse0x127f080();
   input += synapse0x127f0c0();
   input += synapse0x127f100();
   input += synapse0x127f140();
   input += synapse0x127f180();
   input += synapse0x127f1c0();
   input += synapse0x127f200();
   input += synapse0x127f240();
   input += synapse0x127f280();
   input += synapse0x127f2c0();
   input += synapse0x127f300();
   input += synapse0x127f340();
   input += synapse0x127f380();
   input += synapse0x127ee10();
   input += synapse0x127ee50();
   input += synapse0x127f4d0();
   input += synapse0x127f510();
   input += synapse0x127f550();
   input += synapse0x127f590();
   input += synapse0x127f5d0();
   input += synapse0x127f610();
   return input;
}

double NNfunction_sb_cLdL::neuron0x127ec80() {
   double input = input0x127ec80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x127f650() {
   double input = -0.0108443;
   input += synapse0x127f990();
   input += synapse0x127f9d0();
   input += synapse0x127fa10();
   input += synapse0x127fa50();
   input += synapse0x127fa90();
   input += synapse0x127fad0();
   input += synapse0x127fb10();
   input += synapse0x127fb50();
   input += synapse0x127fb90();
   input += synapse0x127fbd0();
   input += synapse0x127fc10();
   input += synapse0x127fc50();
   input += synapse0x127fc90();
   input += synapse0x127fcd0();
   input += synapse0x127fd10();
   input += synapse0x127fd50();
   input += synapse0x127f7e0();
   input += synapse0x127f820();
   input += synapse0x127fea0();
   input += synapse0x127fee0();
   input += synapse0x127ff20();
   input += synapse0x127ff60();
   input += synapse0x127ffa0();
   input += synapse0x127ffe0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x127f650() {
   double input = input0x127f650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1286850() {
   double input = -0.540177;
   input += synapse0x125c580();
   input += synapse0x125c5c0();
   input += synapse0x125da90();
   input += synapse0x125dad0();
   input += synapse0x125e460();
   input += synapse0x125e4a0();
   input += synapse0x125f230();
   input += synapse0x125f270();
   input += synapse0x125fc00();
   input += synapse0x125fc40();
   input += synapse0x12605d0();
   input += synapse0x1260610();
   input += synapse0x12610b0();
   input += synapse0x12610f0();
   input += synapse0x1261a80();
   input += synapse0x1261ac0();
   input += synapse0x125eb60();
   input += synapse0x125eba0();
   input += synapse0x1263630();
   input += synapse0x1263670();
   input += synapse0x1264000();
   input += synapse0x1264040();
   input += synapse0x12649d0();
   input += synapse0x1264a10();
   input += synapse0x12653a0();
   input += synapse0x12653e0();
   input += synapse0x1259510();
   input += synapse0x1259550();
   input += synapse0x1267490();
   input += synapse0x12674d0();
   input += synapse0x1267e60();
   input += synapse0x1267ea0();
   input += synapse0x1268830();
   input += synapse0x1268870();
   input += synapse0x1269200();
   input += synapse0x1269240();
   input += synapse0x1269bd0();
   input += synapse0x1269c10();
   input += synapse0x1262720();
   input += synapse0x1262760();
   input += synapse0x126bfd0();
   input += synapse0x126c010();
   input += synapse0x126c960();
   input += synapse0x126c9a0();
   input += synapse0x126d330();
   input += synapse0x126d370();
   input += synapse0x126dd00();
   input += synapse0x126dd40();
   input += synapse0x126e6d0();
   input += synapse0x126e710();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1286850() {
   double input = input0x1286850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1286bf0() {
   double input = -0.897207;
   input += synapse0x1270e10();
   input += synapse0x1270e50();
   input += synapse0x12663d0();
   input += synapse0x1266410();
   input += synapse0x12739f0();
   input += synapse0x1273a30();
   input += synapse0x12743c0();
   input += synapse0x1274400();
   input += synapse0x1274d90();
   input += synapse0x1274dd0();
   input += synapse0x1275760();
   input += synapse0x12757a0();
   input += synapse0x1276130();
   input += synapse0x1276170();
   input += synapse0x1276b00();
   input += synapse0x1276b40();
   input += synapse0x12774d0();
   input += synapse0x1277510();
   input += synapse0x1277ea0();
   input += synapse0x1277ee0();
   input += synapse0x1278a80();
   input += synapse0x1278ac0();
   input += synapse0x1279450();
   input += synapse0x1279490();
   input += synapse0x126a2d0();
   input += synapse0x126a310();
   input += synapse0x126aca0();
   input += synapse0x126ace0();
   input += synapse0x126b670();
   input += synapse0x126b6b0();
   input += synapse0x127db90();
   input += synapse0x127dbd0();
   input += synapse0x127e560();
   input += synapse0x127e5a0();
   input += synapse0x127ef30();
   input += synapse0x127ef70();
   input += synapse0x127f900();
   input += synapse0x127f940();
   input += synapse0x125b7f0();
   input += synapse0x125b830();
   input += synapse0x126f0a0();
   input += synapse0x126f0e0();
   input += synapse0x1280020();
   input += synapse0x1280060();
   input += synapse0x12800a0();
   input += synapse0x12800e0();
   input += synapse0x1286f90();
   input += synapse0x1286fd0();
   input += synapse0x1287010();
   input += synapse0x1287050();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1286bf0() {
   double input = input0x1286bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1287090() {
   double input = 0.647126;
   input += synapse0x12873d0();
   input += synapse0x1287410();
   input += synapse0x1287450();
   input += synapse0x1287490();
   input += synapse0x12874d0();
   input += synapse0x1287510();
   input += synapse0x1287550();
   input += synapse0x1287590();
   input += synapse0x12875d0();
   input += synapse0x1287610();
   input += synapse0x1287650();
   input += synapse0x1287690();
   input += synapse0x12876d0();
   input += synapse0x1287710();
   input += synapse0x1287750();
   input += synapse0x1287790();
   input += synapse0x1287220();
   input += synapse0x1287260();
   input += synapse0x12878e0();
   input += synapse0x1287920();
   input += synapse0x1287960();
   input += synapse0x12879a0();
   input += synapse0x12879e0();
   input += synapse0x1287a20();
   input += synapse0x1287a60();
   input += synapse0x1287aa0();
   input += synapse0x1287ae0();
   input += synapse0x1287b20();
   input += synapse0x1287b60();
   input += synapse0x1287ba0();
   input += synapse0x1287be0();
   input += synapse0x1287c20();
   input += synapse0x12877d0();
   input += synapse0x1287810();
   input += synapse0x1287850();
   input += synapse0x1287890();
   input += synapse0x1287e70();
   input += synapse0x1287eb0();
   input += synapse0x1287ef0();
   input += synapse0x1287f30();
   input += synapse0x1287f70();
   input += synapse0x1287fb0();
   input += synapse0x1287ff0();
   input += synapse0x1288030();
   input += synapse0x1288070();
   input += synapse0x12880b0();
   input += synapse0x12880f0();
   input += synapse0x1288130();
   input += synapse0x1288170();
   input += synapse0x12881b0();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1287090() {
   double input = input0x1287090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x12881f0() {
   double input = 0.539544;
   input += synapse0x1288530();
   input += synapse0x1288570();
   input += synapse0x12885b0();
   input += synapse0x12885f0();
   input += synapse0x1288630();
   input += synapse0x1288670();
   input += synapse0x12886b0();
   input += synapse0x12886f0();
   input += synapse0x1288730();
   input += synapse0x1288770();
   input += synapse0x12887b0();
   input += synapse0x12887f0();
   input += synapse0x1288830();
   input += synapse0x1288870();
   input += synapse0x12888b0();
   input += synapse0x12888f0();
   input += synapse0x1288380();
   input += synapse0x12883c0();
   input += synapse0x1288a40();
   input += synapse0x1288a80();
   input += synapse0x1288ac0();
   input += synapse0x1288b00();
   input += synapse0x1288b40();
   input += synapse0x1288b80();
   input += synapse0x1288bc0();
   input += synapse0x1288c00();
   input += synapse0x1288c40();
   input += synapse0x1288c80();
   input += synapse0x1288cc0();
   input += synapse0x1288d00();
   input += synapse0x1288d40();
   input += synapse0x1288d80();
   input += synapse0x1288930();
   input += synapse0x1288970();
   input += synapse0x12889b0();
   input += synapse0x12889f0();
   input += synapse0x1288fd0();
   input += synapse0x1289010();
   input += synapse0x1289050();
   input += synapse0x1289090();
   input += synapse0x12890d0();
   input += synapse0x1289110();
   input += synapse0x1289150();
   input += synapse0x1289190();
   input += synapse0x12891d0();
   input += synapse0x1289210();
   input += synapse0x1289250();
   input += synapse0x1289290();
   input += synapse0x12892d0();
   input += synapse0x1289310();
   return input;
}

double NNfunction_sb_cLdL::neuron0x12881f0() {
   double input = input0x12881f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x1289350() {
   double input = -1.18736;
   input += synapse0x1289690();
   input += synapse0x12896d0();
   input += synapse0x1289710();
   input += synapse0x1289750();
   input += synapse0x1289790();
   input += synapse0x12897d0();
   input += synapse0x1289810();
   input += synapse0x1289850();
   input += synapse0x1289890();
   input += synapse0x12898d0();
   input += synapse0x1289910();
   input += synapse0x1289950();
   input += synapse0x1289990();
   input += synapse0x12899d0();
   input += synapse0x1289a10();
   input += synapse0x1289a50();
   input += synapse0x12894e0();
   input += synapse0x1289520();
   input += synapse0x1289ba0();
   input += synapse0x1289be0();
   input += synapse0x1289c20();
   input += synapse0x1289c60();
   input += synapse0x1289ca0();
   input += synapse0x1289ce0();
   input += synapse0x1289d20();
   input += synapse0x1289d60();
   input += synapse0x1289da0();
   input += synapse0x1289de0();
   input += synapse0x1289e20();
   input += synapse0x1289e60();
   input += synapse0x1289ea0();
   input += synapse0x1289ee0();
   input += synapse0x1289a90();
   input += synapse0x1289ad0();
   input += synapse0x1289b10();
   input += synapse0x1289b50();
   input += synapse0x128a130();
   input += synapse0x128a170();
   input += synapse0x128a1b0();
   input += synapse0x128a1f0();
   input += synapse0x128a230();
   input += synapse0x128a270();
   input += synapse0x128a2b0();
   input += synapse0x128a2f0();
   input += synapse0x128a330();
   input += synapse0x128a370();
   input += synapse0x128a3b0();
   input += synapse0x128a3f0();
   input += synapse0x128a430();
   input += synapse0x128a470();
   return input;
}

double NNfunction_sb_cLdL::neuron0x1289350() {
   double input = input0x1289350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdL::input0x128a4b0() {
   double input = 1.68876;
   input += synapse0x125b590();
   input += synapse0x128a6d0();
   input += synapse0x128a710();
   input += synapse0x128a750();
   input += synapse0x128a790();
   return input;
}

double NNfunction_sb_cLdL::neuron0x128a4b0() {
   double input = input0x128a4b0();
   return (input * 1)+0;
}

double NNfunction_sb_cLdL::synapse0x10163e0() {
   return (neuron0x1256570()*-0.124585);
}

double NNfunction_sb_cLdL::synapse0x1256430() {
   return (neuron0x12568b0()*-0.490928);
}

double NNfunction_sb_cLdL::synapse0x1256470() {
   return (neuron0x1256bf0()*0.845416);
}

double NNfunction_sb_cLdL::synapse0x125b880() {
   return (neuron0x1256f30()*0.140214);
}

double NNfunction_sb_cLdL::synapse0x125b8c0() {
   return (neuron0x1257270()*-0.63157);
}

double NNfunction_sb_cLdL::synapse0x125b900() {
   return (neuron0x12575b0()*0.164515);
}

double NNfunction_sb_cLdL::synapse0x125b940() {
   return (neuron0x12578f0()*-0.0458059);
}

double NNfunction_sb_cLdL::synapse0x125b980() {
   return (neuron0x1257c30()*0.148634);
}

double NNfunction_sb_cLdL::synapse0x125b9c0() {
   return (neuron0x1257f70()*0.0978329);
}

double NNfunction_sb_cLdL::synapse0x125ba00() {
   return (neuron0x12582b0()*0.44005);
}

double NNfunction_sb_cLdL::synapse0x125ba40() {
   return (neuron0x12585f0()*-0.223199);
}

double NNfunction_sb_cLdL::synapse0x125ba80() {
   return (neuron0x1258930()*-0.354816);
}

double NNfunction_sb_cLdL::synapse0x125bac0() {
   return (neuron0x1258c70()*-0.612898);
}

double NNfunction_sb_cLdL::synapse0x125bb00() {
   return (neuron0x1258fb0()*-0.0460693);
}

double NNfunction_sb_cLdL::synapse0x125bb40() {
   return (neuron0x12592f0()*1.07643);
}

double NNfunction_sb_cLdL::synapse0x125bb80() {
   return (neuron0x1259630()*-0.295492);
}

double NNfunction_sb_cLdL::synapse0x12563a0() {
   return (neuron0x1259970()*0.00700898);
}

double NNfunction_sb_cLdL::synapse0x12563e0() {
   return (neuron0x1259ed0()*-0.121897);
}

double NNfunction_sb_cLdL::synapse0x1007c80() {
   return (neuron0x125a0f0()*-0.00270127);
}

double NNfunction_sb_cLdL::synapse0x1007cc0() {
   return (neuron0x125a430()*0.378441);
}

double NNfunction_sb_cLdL::synapse0x125bde0() {
   return (neuron0x125a770()*-0.596037);
}

double NNfunction_sb_cLdL::synapse0x125be20() {
   return (neuron0x125aab0()*-0.4681);
}

double NNfunction_sb_cLdL::synapse0x125be60() {
   return (neuron0x125adf0()*-0.507165);
}

double NNfunction_sb_cLdL::synapse0x125bea0() {
   return (neuron0x125b130()*0.301118);
}

double NNfunction_sb_cLdL::synapse0x125c220() {
   return (neuron0x1256570()*0.521338);
}

double NNfunction_sb_cLdL::synapse0x125c260() {
   return (neuron0x12568b0()*0.221061);
}

double NNfunction_sb_cLdL::synapse0x125c2a0() {
   return (neuron0x1256bf0()*-0.163872);
}

double NNfunction_sb_cLdL::synapse0x125c2e0() {
   return (neuron0x1256f30()*-0.26866);
}

double NNfunction_sb_cLdL::synapse0x125c320() {
   return (neuron0x1257270()*-0.389782);
}

double NNfunction_sb_cLdL::synapse0x125c360() {
   return (neuron0x12575b0()*0.0413404);
}

double NNfunction_sb_cLdL::synapse0x125c3a0() {
   return (neuron0x12578f0()*-0.0883083);
}

double NNfunction_sb_cLdL::synapse0x125c3e0() {
   return (neuron0x1257c30()*0.372076);
}

double NNfunction_sb_cLdL::synapse0x125c420() {
   return (neuron0x1257f70()*-0.222664);
}

double NNfunction_sb_cLdL::synapse0x125bcd0() {
   return (neuron0x12582b0()*-0.888476);
}

double NNfunction_sb_cLdL::synapse0x125bd10() {
   return (neuron0x12585f0()*-0.174373);
}

double NNfunction_sb_cLdL::synapse0x125bd50() {
   return (neuron0x1258930()*-0.183386);
}

double NNfunction_sb_cLdL::synapse0x125bd90() {
   return (neuron0x1258c70()*-0.764388);
}

double NNfunction_sb_cLdL::synapse0x125c670() {
   return (neuron0x1258fb0()*-0.581458);
}

double NNfunction_sb_cLdL::synapse0x125c6b0() {
   return (neuron0x12592f0()*-0.180675);
}

double NNfunction_sb_cLdL::synapse0x125c6f0() {
   return (neuron0x1259630()*-0.0941843);
}

double NNfunction_sb_cLdL::synapse0x125c070() {
   return (neuron0x1259970()*0.154094);
}

double NNfunction_sb_cLdL::synapse0x125c0b0() {
   return (neuron0x1259ed0()*0.0613614);
}

double NNfunction_sb_cLdL::synapse0x125c840() {
   return (neuron0x125a0f0()*-0.352489);
}

double NNfunction_sb_cLdL::synapse0x125c880() {
   return (neuron0x125a430()*0.516796);
}

double NNfunction_sb_cLdL::synapse0x125c8c0() {
   return (neuron0x125a770()*0.0584036);
}

double NNfunction_sb_cLdL::synapse0x125c900() {
   return (neuron0x125aab0()*0.174329);
}

double NNfunction_sb_cLdL::synapse0x125c940() {
   return (neuron0x125adf0()*-0.0524967);
}

double NNfunction_sb_cLdL::synapse0x125c980() {
   return (neuron0x125b130()*0.190652);
}

double NNfunction_sb_cLdL::synapse0x125cd00() {
   return (neuron0x1256570()*-0.491026);
}

double NNfunction_sb_cLdL::synapse0x125cd40() {
   return (neuron0x12568b0()*-1.10775);
}

double NNfunction_sb_cLdL::synapse0x125cd80() {
   return (neuron0x1256bf0()*0.0913252);
}

double NNfunction_sb_cLdL::synapse0x125cdc0() {
   return (neuron0x1256f30()*-0.185248);
}

double NNfunction_sb_cLdL::synapse0x125ce00() {
   return (neuron0x1257270()*-0.433773);
}

double NNfunction_sb_cLdL::synapse0x125ce40() {
   return (neuron0x12575b0()*0.651399);
}

double NNfunction_sb_cLdL::synapse0x125ce80() {
   return (neuron0x12578f0()*0.349629);
}

double NNfunction_sb_cLdL::synapse0x125cec0() {
   return (neuron0x1257c30()*0.629449);
}

double NNfunction_sb_cLdL::synapse0x125cf00() {
   return (neuron0x1257f70()*-0.281572);
}

double NNfunction_sb_cLdL::synapse0x125cf40() {
   return (neuron0x12582b0()*-0.349959);
}

double NNfunction_sb_cLdL::synapse0x125cf80() {
   return (neuron0x12585f0()*0.286269);
}

double NNfunction_sb_cLdL::synapse0x125cfc0() {
   return (neuron0x1258930()*-0.300613);
}

double NNfunction_sb_cLdL::synapse0x125d000() {
   return (neuron0x1258c70()*-0.346874);
}

double NNfunction_sb_cLdL::synapse0x125d040() {
   return (neuron0x1258fb0()*-0.0127256);
}

double NNfunction_sb_cLdL::synapse0x125d080() {
   return (neuron0x12592f0()*0.805421);
}

double NNfunction_sb_cLdL::synapse0x125d0c0() {
   return (neuron0x1259630()*-0.482066);
}

double NNfunction_sb_cLdL::synapse0x125cb50() {
   return (neuron0x1259970()*-0.242178);
}

double NNfunction_sb_cLdL::synapse0x125cb90() {
   return (neuron0x1259ed0()*-0.919934);
}

double NNfunction_sb_cLdL::synapse0x1015ad0() {
   return (neuron0x125a0f0()*-0.323418);
}

double NNfunction_sb_cLdL::synapse0x1015b10() {
   return (neuron0x125a430()*0.285219);
}

double NNfunction_sb_cLdL::synapse0x1245600() {
   return (neuron0x125a770()*0.601413);
}

double NNfunction_sb_cLdL::synapse0x1245640() {
   return (neuron0x125aab0()*0.111357);
}

double NNfunction_sb_cLdL::synapse0x1245680() {
   return (neuron0x125adf0()*-0.472101);
}

double NNfunction_sb_cLdL::synapse0x12564b0() {
   return (neuron0x125b130()*0.17022);
}

double NNfunction_sb_cLdL::synapse0x125c610() {
   return (neuron0x1256570()*0.225564);
}

double NNfunction_sb_cLdL::synapse0x12564f0() {
   return (neuron0x12568b0()*-0.352829);
}

double NNfunction_sb_cLdL::synapse0x1256530() {
   return (neuron0x1256bf0()*1.34477);
}

double NNfunction_sb_cLdL::synapse0x125d210() {
   return (neuron0x1256f30()*-1.06302);
}

double NNfunction_sb_cLdL::synapse0x125d250() {
   return (neuron0x1257270()*0.0222527);
}

double NNfunction_sb_cLdL::synapse0x125d290() {
   return (neuron0x12575b0()*0.344607);
}

double NNfunction_sb_cLdL::synapse0x125d2d0() {
   return (neuron0x12578f0()*0.0432874);
}

double NNfunction_sb_cLdL::synapse0x125d310() {
   return (neuron0x1257c30()*0.117863);
}

double NNfunction_sb_cLdL::synapse0x125d350() {
   return (neuron0x1257f70()*0.051874);
}

double NNfunction_sb_cLdL::synapse0x125d390() {
   return (neuron0x12582b0()*0.0316587);
}

double NNfunction_sb_cLdL::synapse0x125d3d0() {
   return (neuron0x12585f0()*-0.1035);
}

double NNfunction_sb_cLdL::synapse0x125d410() {
   return (neuron0x1258930()*0.0303611);
}

double NNfunction_sb_cLdL::synapse0x125d450() {
   return (neuron0x1258c70()*0.378669);
}

double NNfunction_sb_cLdL::synapse0x125d490() {
   return (neuron0x1258fb0()*0.1947);
}

double NNfunction_sb_cLdL::synapse0x125d4d0() {
   return (neuron0x12592f0()*0.117786);
}

double NNfunction_sb_cLdL::synapse0x125d510() {
   return (neuron0x1259630()*-0.00358016);
}

double NNfunction_sb_cLdL::synapse0x125c460() {
   return (neuron0x1259970()*0.133795);
}

double NNfunction_sb_cLdL::synapse0x125c4a0() {
   return (neuron0x1259ed0()*-0.124274);
}

double NNfunction_sb_cLdL::synapse0x125d660() {
   return (neuron0x125a0f0()*-0.109352);
}

double NNfunction_sb_cLdL::synapse0x125d6a0() {
   return (neuron0x125a430()*-0.278054);
}

double NNfunction_sb_cLdL::synapse0x125d6e0() {
   return (neuron0x125a770()*0.424289);
}

double NNfunction_sb_cLdL::synapse0x125d720() {
   return (neuron0x125aab0()*0.0378154);
}

double NNfunction_sb_cLdL::synapse0x125d760() {
   return (neuron0x125adf0()*-0.110002);
}

double NNfunction_sb_cLdL::synapse0x125d7a0() {
   return (neuron0x125b130()*0.123547);
}

double NNfunction_sb_cLdL::synapse0x125db20() {
   return (neuron0x1256570()*-0.13947);
}

double NNfunction_sb_cLdL::synapse0x125db60() {
   return (neuron0x12568b0()*-0.298234);
}

double NNfunction_sb_cLdL::synapse0x125dba0() {
   return (neuron0x1256bf0()*0.492092);
}

double NNfunction_sb_cLdL::synapse0x125dbe0() {
   return (neuron0x1256f30()*0.614766);
}

double NNfunction_sb_cLdL::synapse0x125dc20() {
   return (neuron0x1257270()*0.0294474);
}

double NNfunction_sb_cLdL::synapse0x125dc60() {
   return (neuron0x12575b0()*-0.706148);
}

double NNfunction_sb_cLdL::synapse0x125dca0() {
   return (neuron0x12578f0()*0.0620827);
}

double NNfunction_sb_cLdL::synapse0x125dce0() {
   return (neuron0x1257c30()*-0.286009);
}

double NNfunction_sb_cLdL::synapse0x125dd20() {
   return (neuron0x1257f70()*0.181527);
}

double NNfunction_sb_cLdL::synapse0x125dd60() {
   return (neuron0x12582b0()*-0.0588276);
}

double NNfunction_sb_cLdL::synapse0x125dda0() {
   return (neuron0x12585f0()*0.159921);
}

double NNfunction_sb_cLdL::synapse0x125dde0() {
   return (neuron0x1258930()*-0.238534);
}

double NNfunction_sb_cLdL::synapse0x125de20() {
   return (neuron0x1258c70()*0.210062);
}

double NNfunction_sb_cLdL::synapse0x125de60() {
   return (neuron0x1258fb0()*0.138905);
}

double NNfunction_sb_cLdL::synapse0x125dea0() {
   return (neuron0x12592f0()*0.490606);
}

double NNfunction_sb_cLdL::synapse0x125dee0() {
   return (neuron0x1259630()*0.0779512);
}

double NNfunction_sb_cLdL::synapse0x125d970() {
   return (neuron0x1259970()*0.165714);
}

double NNfunction_sb_cLdL::synapse0x125d9b0() {
   return (neuron0x1259ed0()*-0.157771);
}

double NNfunction_sb_cLdL::synapse0x125e030() {
   return (neuron0x125a0f0()*0.472362);
}

double NNfunction_sb_cLdL::synapse0x125e070() {
   return (neuron0x125a430()*-0.15297);
}

double NNfunction_sb_cLdL::synapse0x125e0b0() {
   return (neuron0x125a770()*0.208003);
}

double NNfunction_sb_cLdL::synapse0x125e0f0() {
   return (neuron0x125aab0()*-0.349926);
}

double NNfunction_sb_cLdL::synapse0x125e130() {
   return (neuron0x125adf0()*-0.609234);
}

double NNfunction_sb_cLdL::synapse0x125e170() {
   return (neuron0x125b130()*-0.321712);
}

double NNfunction_sb_cLdL::synapse0x125e4f0() {
   return (neuron0x1256570()*-0.0227619);
}

double NNfunction_sb_cLdL::synapse0x125e530() {
   return (neuron0x12568b0()*0.000616);
}

double NNfunction_sb_cLdL::synapse0x125e570() {
   return (neuron0x1256bf0()*0.585519);
}

double NNfunction_sb_cLdL::synapse0x125e5b0() {
   return (neuron0x1256f30()*0.213882);
}

double NNfunction_sb_cLdL::synapse0x125e5f0() {
   return (neuron0x1257270()*-0.00595915);
}

double NNfunction_sb_cLdL::synapse0x125e630() {
   return (neuron0x12575b0()*0.0374631);
}

double NNfunction_sb_cLdL::synapse0x125e670() {
   return (neuron0x12578f0()*-0.0197343);
}

double NNfunction_sb_cLdL::synapse0x125e6b0() {
   return (neuron0x1257c30()*-0.00181402);
}

double NNfunction_sb_cLdL::synapse0x125e6f0() {
   return (neuron0x1257f70()*0.0120056);
}

double NNfunction_sb_cLdL::synapse0x1015e40() {
   return (neuron0x12582b0()*0.00963997);
}

double NNfunction_sb_cLdL::synapse0x1015e80() {
   return (neuron0x12585f0()*0.00682596);
}

double NNfunction_sb_cLdL::synapse0x1015ec0() {
   return (neuron0x1258930()*0.154794);
}

double NNfunction_sb_cLdL::synapse0x1015f00() {
   return (neuron0x1258c70()*0.204245);
}

double NNfunction_sb_cLdL::synapse0x1015f40() {
   return (neuron0x1258fb0()*0.0383835);
}

double NNfunction_sb_cLdL::synapse0x1015f80() {
   return (neuron0x12592f0()*0.00493813);
}

double NNfunction_sb_cLdL::synapse0x1015fc0() {
   return (neuron0x1259630()*0.017253);
}

double NNfunction_sb_cLdL::synapse0x125e340() {
   return (neuron0x1259970()*0.0623555);
}

double NNfunction_sb_cLdL::synapse0x125e380() {
   return (neuron0x1259ed0()*-0.00872367);
}

double NNfunction_sb_cLdL::synapse0x1016110() {
   return (neuron0x125a0f0()*0.00116318);
}

double NNfunction_sb_cLdL::synapse0x1016150() {
   return (neuron0x125a430()*-0.0127611);
}

double NNfunction_sb_cLdL::synapse0x1016190() {
   return (neuron0x125a770()*-0.00770316);
}

double NNfunction_sb_cLdL::synapse0x10161d0() {
   return (neuron0x125aab0()*0.00456451);
}

double NNfunction_sb_cLdL::synapse0x1016210() {
   return (neuron0x125adf0()*-0.0016812);
}

double NNfunction_sb_cLdL::synapse0x125ef40() {
   return (neuron0x125b130()*0.0137962);
}

double NNfunction_sb_cLdL::synapse0x125f2c0() {
   return (neuron0x1256570()*-0.0344599);
}

double NNfunction_sb_cLdL::synapse0x125f300() {
   return (neuron0x12568b0()*0.0189844);
}

double NNfunction_sb_cLdL::synapse0x125f340() {
   return (neuron0x1256bf0()*-0.0591774);
}

double NNfunction_sb_cLdL::synapse0x125f380() {
   return (neuron0x1256f30()*-2.05963);
}

double NNfunction_sb_cLdL::synapse0x125f3c0() {
   return (neuron0x1257270()*0.044059);
}

double NNfunction_sb_cLdL::synapse0x125f400() {
   return (neuron0x12575b0()*0.0158387);
}

double NNfunction_sb_cLdL::synapse0x125f440() {
   return (neuron0x12578f0()*-0.0211408);
}

double NNfunction_sb_cLdL::synapse0x125f480() {
   return (neuron0x1257c30()*-0.0735643);
}

double NNfunction_sb_cLdL::synapse0x125f4c0() {
   return (neuron0x1257f70()*-0.0262984);
}

double NNfunction_sb_cLdL::synapse0x125f500() {
   return (neuron0x12582b0()*-0.000101977);
}

double NNfunction_sb_cLdL::synapse0x125f540() {
   return (neuron0x12585f0()*-0.029716);
}

double NNfunction_sb_cLdL::synapse0x125f580() {
   return (neuron0x1258930()*-0.0712267);
}

double NNfunction_sb_cLdL::synapse0x125f5c0() {
   return (neuron0x1258c70()*-0.0095522);
}

double NNfunction_sb_cLdL::synapse0x125f600() {
   return (neuron0x1258fb0()*0.0268029);
}

double NNfunction_sb_cLdL::synapse0x125f640() {
   return (neuron0x12592f0()*-0.0388707);
}

double NNfunction_sb_cLdL::synapse0x125f680() {
   return (neuron0x1259630()*0.0330618);
}

double NNfunction_sb_cLdL::synapse0x125f110() {
   return (neuron0x1259970()*0.0701365);
}

double NNfunction_sb_cLdL::synapse0x125f150() {
   return (neuron0x1259ed0()*-0.0622806);
}

double NNfunction_sb_cLdL::synapse0x125f7d0() {
   return (neuron0x125a0f0()*-0.0507101);
}

double NNfunction_sb_cLdL::synapse0x125f810() {
   return (neuron0x125a430()*-0.0680526);
}

double NNfunction_sb_cLdL::synapse0x125f850() {
   return (neuron0x125a770()*-0.0134079);
}

double NNfunction_sb_cLdL::synapse0x125f890() {
   return (neuron0x125aab0()*-0.00193557);
}

double NNfunction_sb_cLdL::synapse0x125f8d0() {
   return (neuron0x125adf0()*0.00298088);
}

double NNfunction_sb_cLdL::synapse0x125f910() {
   return (neuron0x125b130()*0.0484555);
}

double NNfunction_sb_cLdL::synapse0x125fc90() {
   return (neuron0x1256570()*-0.212189);
}

double NNfunction_sb_cLdL::synapse0x125fcd0() {
   return (neuron0x12568b0()*-0.224862);
}

double NNfunction_sb_cLdL::synapse0x125fd10() {
   return (neuron0x1256bf0()*-0.514159);
}

double NNfunction_sb_cLdL::synapse0x125fd50() {
   return (neuron0x1256f30()*-1.13986);
}

double NNfunction_sb_cLdL::synapse0x125fd90() {
   return (neuron0x1257270()*-0.481456);
}

double NNfunction_sb_cLdL::synapse0x125fdd0() {
   return (neuron0x12575b0()*0.669506);
}

double NNfunction_sb_cLdL::synapse0x125fe10() {
   return (neuron0x12578f0()*-0.339942);
}

double NNfunction_sb_cLdL::synapse0x125fe50() {
   return (neuron0x1257c30()*0.348663);
}

double NNfunction_sb_cLdL::synapse0x125fe90() {
   return (neuron0x1257f70()*-0.287422);
}

double NNfunction_sb_cLdL::synapse0x125fed0() {
   return (neuron0x12582b0()*0.403493);
}

double NNfunction_sb_cLdL::synapse0x125ff10() {
   return (neuron0x12585f0()*0.162584);
}

double NNfunction_sb_cLdL::synapse0x125ff50() {
   return (neuron0x1258930()*0.329739);
}

double NNfunction_sb_cLdL::synapse0x125ff90() {
   return (neuron0x1258c70()*-0.609691);
}

double NNfunction_sb_cLdL::synapse0x125ffd0() {
   return (neuron0x1258fb0()*-0.860832);
}

double NNfunction_sb_cLdL::synapse0x1260010() {
   return (neuron0x12592f0()*-0.283115);
}

double NNfunction_sb_cLdL::synapse0x1260050() {
   return (neuron0x1259630()*-0.140286);
}

double NNfunction_sb_cLdL::synapse0x125fae0() {
   return (neuron0x1259970()*0.228949);
}

double NNfunction_sb_cLdL::synapse0x125fb20() {
   return (neuron0x1259ed0()*0.424141);
}

double NNfunction_sb_cLdL::synapse0x12601a0() {
   return (neuron0x125a0f0()*-0.689479);
}

double NNfunction_sb_cLdL::synapse0x12601e0() {
   return (neuron0x125a430()*0.392437);
}

double NNfunction_sb_cLdL::synapse0x1260220() {
   return (neuron0x125a770()*0.567555);
}

double NNfunction_sb_cLdL::synapse0x1260260() {
   return (neuron0x125aab0()*0.308362);
}

double NNfunction_sb_cLdL::synapse0x12602a0() {
   return (neuron0x125adf0()*-0.247007);
}

double NNfunction_sb_cLdL::synapse0x12602e0() {
   return (neuron0x125b130()*-0.45043);
}

double NNfunction_sb_cLdL::synapse0x1259dc0() {
   return (neuron0x1256570()*-0.477093);
}

double NNfunction_sb_cLdL::synapse0x1259e00() {
   return (neuron0x12568b0()*-0.21261);
}

double NNfunction_sb_cLdL::synapse0x1259e40() {
   return (neuron0x1256bf0()*0.737366);
}

double NNfunction_sb_cLdL::synapse0x1259e80() {
   return (neuron0x1256f30()*0.631487);
}

double NNfunction_sb_cLdL::synapse0x1260870() {
   return (neuron0x1257270()*-0.39098);
}

double NNfunction_sb_cLdL::synapse0x12608b0() {
   return (neuron0x12575b0()*-0.202685);
}

double NNfunction_sb_cLdL::synapse0x12608f0() {
   return (neuron0x12578f0()*0.823877);
}

double NNfunction_sb_cLdL::synapse0x1260930() {
   return (neuron0x1257c30()*-0.977128);
}

double NNfunction_sb_cLdL::synapse0x1260970() {
   return (neuron0x1257f70()*-0.555866);
}

double NNfunction_sb_cLdL::synapse0x12609b0() {
   return (neuron0x12582b0()*0.055525);
}

double NNfunction_sb_cLdL::synapse0x12609f0() {
   return (neuron0x12585f0()*-0.347418);
}

double NNfunction_sb_cLdL::synapse0x1260a30() {
   return (neuron0x1258930()*-0.556159);
}

double NNfunction_sb_cLdL::synapse0x1260a70() {
   return (neuron0x1258c70()*0.505283);
}

double NNfunction_sb_cLdL::synapse0x1260ab0() {
   return (neuron0x1258fb0()*0.377373);
}

double NNfunction_sb_cLdL::synapse0x1260af0() {
   return (neuron0x12592f0()*0.293531);
}

double NNfunction_sb_cLdL::synapse0x1260b30() {
   return (neuron0x1259630()*0.27423);
}

double NNfunction_sb_cLdL::synapse0x12604b0() {
   return (neuron0x1259970()*-0.563393);
}

double NNfunction_sb_cLdL::synapse0x12604f0() {
   return (neuron0x1259ed0()*-0.329463);
}

double NNfunction_sb_cLdL::synapse0x1260c80() {
   return (neuron0x125a0f0()*-0.240508);
}

double NNfunction_sb_cLdL::synapse0x1260cc0() {
   return (neuron0x125a430()*-0.241754);
}

double NNfunction_sb_cLdL::synapse0x1260d00() {
   return (neuron0x125a770()*-0.165778);
}

double NNfunction_sb_cLdL::synapse0x1260d40() {
   return (neuron0x125aab0()*0.180659);
}

double NNfunction_sb_cLdL::synapse0x1260d80() {
   return (neuron0x125adf0()*-0.0984326);
}

double NNfunction_sb_cLdL::synapse0x1260dc0() {
   return (neuron0x125b130()*0.687697);
}

double NNfunction_sb_cLdL::synapse0x1261140() {
   return (neuron0x1256570()*-0.4354);
}

double NNfunction_sb_cLdL::synapse0x1261180() {
   return (neuron0x12568b0()*0.653786);
}

double NNfunction_sb_cLdL::synapse0x12611c0() {
   return (neuron0x1256bf0()*-0.201849);
}

double NNfunction_sb_cLdL::synapse0x1261200() {
   return (neuron0x1256f30()*-0.742581);
}

double NNfunction_sb_cLdL::synapse0x1261240() {
   return (neuron0x1257270()*-0.259537);
}

double NNfunction_sb_cLdL::synapse0x1261280() {
   return (neuron0x12575b0()*0.122246);
}

double NNfunction_sb_cLdL::synapse0x12612c0() {
   return (neuron0x12578f0()*0.016748);
}

double NNfunction_sb_cLdL::synapse0x1261300() {
   return (neuron0x1257c30()*-0.0835232);
}

double NNfunction_sb_cLdL::synapse0x1261340() {
   return (neuron0x1257f70()*0.458584);
}

double NNfunction_sb_cLdL::synapse0x1261380() {
   return (neuron0x12582b0()*0.114057);
}

double NNfunction_sb_cLdL::synapse0x12613c0() {
   return (neuron0x12585f0()*-0.121307);
}

double NNfunction_sb_cLdL::synapse0x1261400() {
   return (neuron0x1258930()*-0.426376);
}

double NNfunction_sb_cLdL::synapse0x1261440() {
   return (neuron0x1258c70()*-0.097842);
}

double NNfunction_sb_cLdL::synapse0x1261480() {
   return (neuron0x1258fb0()*0.558498);
}

double NNfunction_sb_cLdL::synapse0x12614c0() {
   return (neuron0x12592f0()*0.331851);
}

double NNfunction_sb_cLdL::synapse0x1261500() {
   return (neuron0x1259630()*0.187177);
}

double NNfunction_sb_cLdL::synapse0x1260f90() {
   return (neuron0x1259970()*0.137486);
}

double NNfunction_sb_cLdL::synapse0x1260fd0() {
   return (neuron0x1259ed0()*0.0159055);
}

double NNfunction_sb_cLdL::synapse0x1261650() {
   return (neuron0x125a0f0()*0.339249);
}

double NNfunction_sb_cLdL::synapse0x1261690() {
   return (neuron0x125a430()*-0.0258257);
}

double NNfunction_sb_cLdL::synapse0x12616d0() {
   return (neuron0x125a770()*0.102145);
}

double NNfunction_sb_cLdL::synapse0x1261710() {
   return (neuron0x125aab0()*0.123681);
}

double NNfunction_sb_cLdL::synapse0x1261750() {
   return (neuron0x125adf0()*0.308992);
}

double NNfunction_sb_cLdL::synapse0x1261790() {
   return (neuron0x125b130()*-0.33027);
}

double NNfunction_sb_cLdL::synapse0x1261b10() {
   return (neuron0x1256570()*0.176836);
}

double NNfunction_sb_cLdL::synapse0x1261b50() {
   return (neuron0x12568b0()*0.039924);
}

double NNfunction_sb_cLdL::synapse0x1261b90() {
   return (neuron0x1256bf0()*-0.0420181);
}

double NNfunction_sb_cLdL::synapse0x1261bd0() {
   return (neuron0x1256f30()*1.32947);
}

double NNfunction_sb_cLdL::synapse0x1261c10() {
   return (neuron0x1257270()*-0.0491216);
}

double NNfunction_sb_cLdL::synapse0x1261c50() {
   return (neuron0x12575b0()*0.0449613);
}

double NNfunction_sb_cLdL::synapse0x1261c90() {
   return (neuron0x12578f0()*-0.0620615);
}

double NNfunction_sb_cLdL::synapse0x1261cd0() {
   return (neuron0x1257c30()*0.0213436);
}

double NNfunction_sb_cLdL::synapse0x1261d10() {
   return (neuron0x1257f70()*0.0587953);
}

double NNfunction_sb_cLdL::synapse0x1261d50() {
   return (neuron0x12582b0()*0.201447);
}

double NNfunction_sb_cLdL::synapse0x1261d90() {
   return (neuron0x12585f0()*0.0317184);
}

double NNfunction_sb_cLdL::synapse0x1261dd0() {
   return (neuron0x1258930()*-0.192195);
}

double NNfunction_sb_cLdL::synapse0x1261e10() {
   return (neuron0x1258c70()*-0.262546);
}

double NNfunction_sb_cLdL::synapse0x1261e50() {
   return (neuron0x1258fb0()*0.493056);
}

double NNfunction_sb_cLdL::synapse0x1261e90() {
   return (neuron0x12592f0()*-0.039002);
}

double NNfunction_sb_cLdL::synapse0x1261ed0() {
   return (neuron0x1259630()*-0.256101);
}

double NNfunction_sb_cLdL::synapse0x1261960() {
   return (neuron0x1259970()*0.496897);
}

double NNfunction_sb_cLdL::synapse0x12619a0() {
   return (neuron0x1259ed0()*-0.034422);
}

double NNfunction_sb_cLdL::synapse0x125e730() {
   return (neuron0x125a0f0()*-0.0399671);
}

double NNfunction_sb_cLdL::synapse0x125e770() {
   return (neuron0x125a430()*-0.0417732);
}

double NNfunction_sb_cLdL::synapse0x125e7b0() {
   return (neuron0x125a770()*0.295056);
}

double NNfunction_sb_cLdL::synapse0x125e7f0() {
   return (neuron0x125aab0()*0.15924);
}

double NNfunction_sb_cLdL::synapse0x125e830() {
   return (neuron0x125adf0()*0.05712);
}

double NNfunction_sb_cLdL::synapse0x125e870() {
   return (neuron0x125b130()*0.092039);
}

double NNfunction_sb_cLdL::synapse0x125ebf0() {
   return (neuron0x1256570()*-0.0205903);
}

double NNfunction_sb_cLdL::synapse0x125ec30() {
   return (neuron0x12568b0()*0.0608152);
}

double NNfunction_sb_cLdL::synapse0x125ec70() {
   return (neuron0x1256bf0()*-0.590697);
}

double NNfunction_sb_cLdL::synapse0x125ecb0() {
   return (neuron0x1256f30()*-3.00067);
}

double NNfunction_sb_cLdL::synapse0x125ecf0() {
   return (neuron0x1257270()*0.0159985);
}

double NNfunction_sb_cLdL::synapse0x125ed30() {
   return (neuron0x12575b0()*-0.0472309);
}

double NNfunction_sb_cLdL::synapse0x125ed70() {
   return (neuron0x12578f0()*-0.0703951);
}

double NNfunction_sb_cLdL::synapse0x125edb0() {
   return (neuron0x1257c30()*-0.0358103);
}

double NNfunction_sb_cLdL::synapse0x125edf0() {
   return (neuron0x1257f70()*-0.0770789);
}

double NNfunction_sb_cLdL::synapse0x125ee30() {
   return (neuron0x12582b0()*-0.0203418);
}

double NNfunction_sb_cLdL::synapse0x125ee70() {
   return (neuron0x12585f0()*-0.195601);
}

double NNfunction_sb_cLdL::synapse0x125eeb0() {
   return (neuron0x1258930()*0.0926087);
}

double NNfunction_sb_cLdL::synapse0x125eef0() {
   return (neuron0x1258c70()*0.293273);
}

double NNfunction_sb_cLdL::synapse0x1263030() {
   return (neuron0x1258fb0()*-0.299884);
}

double NNfunction_sb_cLdL::synapse0x1263070() {
   return (neuron0x12592f0()*-0.120865);
}

double NNfunction_sb_cLdL::synapse0x12630b0() {
   return (neuron0x1259630()*0.043375);
}

double NNfunction_sb_cLdL::synapse0x125ea40() {
   return (neuron0x1259970()*-0.143168);
}

double NNfunction_sb_cLdL::synapse0x125ea80() {
   return (neuron0x1259ed0()*-0.0651978);
}

double NNfunction_sb_cLdL::synapse0x1263200() {
   return (neuron0x125a0f0()*-0.0734115);
}

double NNfunction_sb_cLdL::synapse0x1263240() {
   return (neuron0x125a430()*-0.0977969);
}

double NNfunction_sb_cLdL::synapse0x1263280() {
   return (neuron0x125a770()*-0.156139);
}

double NNfunction_sb_cLdL::synapse0x12632c0() {
   return (neuron0x125aab0()*0.0234462);
}

double NNfunction_sb_cLdL::synapse0x1263300() {
   return (neuron0x125adf0()*-0.00845825);
}

double NNfunction_sb_cLdL::synapse0x1263340() {
   return (neuron0x125b130()*0.0205839);
}

double NNfunction_sb_cLdL::synapse0x12636c0() {
   return (neuron0x1256570()*0.0417571);
}

double NNfunction_sb_cLdL::synapse0x1263700() {
   return (neuron0x12568b0()*0.173587);
}

double NNfunction_sb_cLdL::synapse0x1263740() {
   return (neuron0x1256bf0()*-0.119539);
}

double NNfunction_sb_cLdL::synapse0x1263780() {
   return (neuron0x1256f30()*-0.562355);
}

double NNfunction_sb_cLdL::synapse0x12637c0() {
   return (neuron0x1257270()*0.0230683);
}

double NNfunction_sb_cLdL::synapse0x1263800() {
   return (neuron0x12575b0()*-0.0400443);
}

double NNfunction_sb_cLdL::synapse0x1263840() {
   return (neuron0x12578f0()*-0.14204);
}

double NNfunction_sb_cLdL::synapse0x1263880() {
   return (neuron0x1257c30()*-0.0472792);
}

double NNfunction_sb_cLdL::synapse0x12638c0() {
   return (neuron0x1257f70()*0.0759893);
}

double NNfunction_sb_cLdL::synapse0x1263900() {
   return (neuron0x12582b0()*-0.0107253);
}

double NNfunction_sb_cLdL::synapse0x1263940() {
   return (neuron0x12585f0()*0.0203931);
}

double NNfunction_sb_cLdL::synapse0x1263980() {
   return (neuron0x1258930()*0.232492);
}

double NNfunction_sb_cLdL::synapse0x12639c0() {
   return (neuron0x1258c70()*0.492513);
}

double NNfunction_sb_cLdL::synapse0x1263a00() {
   return (neuron0x1258fb0()*-0.0210463);
}

double NNfunction_sb_cLdL::synapse0x1263a40() {
   return (neuron0x12592f0()*-0.143206);
}

double NNfunction_sb_cLdL::synapse0x1263a80() {
   return (neuron0x1259630()*-0.263353);
}

double NNfunction_sb_cLdL::synapse0x1263510() {
   return (neuron0x1259970()*-0.0400501);
}

double NNfunction_sb_cLdL::synapse0x1263550() {
   return (neuron0x1259ed0()*-0.0820654);
}

double NNfunction_sb_cLdL::synapse0x1263bd0() {
   return (neuron0x125a0f0()*0.0660678);
}

double NNfunction_sb_cLdL::synapse0x1263c10() {
   return (neuron0x125a430()*0.17043);
}

double NNfunction_sb_cLdL::synapse0x1263c50() {
   return (neuron0x125a770()*-0.123734);
}

double NNfunction_sb_cLdL::synapse0x1263c90() {
   return (neuron0x125aab0()*-0.233397);
}

double NNfunction_sb_cLdL::synapse0x1263cd0() {
   return (neuron0x125adf0()*0.148698);
}

double NNfunction_sb_cLdL::synapse0x1263d10() {
   return (neuron0x125b130()*0.0918773);
}

double NNfunction_sb_cLdL::synapse0x1264090() {
   return (neuron0x1256570()*-0.416422);
}

double NNfunction_sb_cLdL::synapse0x12640d0() {
   return (neuron0x12568b0()*-0.157626);
}

double NNfunction_sb_cLdL::synapse0x1264110() {
   return (neuron0x1256bf0()*0.180965);
}

double NNfunction_sb_cLdL::synapse0x1264150() {
   return (neuron0x1256f30()*0.115578);
}

double NNfunction_sb_cLdL::synapse0x1264190() {
   return (neuron0x1257270()*-0.178455);
}

double NNfunction_sb_cLdL::synapse0x12641d0() {
   return (neuron0x12575b0()*0.367823);
}

double NNfunction_sb_cLdL::synapse0x1264210() {
   return (neuron0x12578f0()*-0.170372);
}

double NNfunction_sb_cLdL::synapse0x1264250() {
   return (neuron0x1257c30()*-0.258883);
}

double NNfunction_sb_cLdL::synapse0x1264290() {
   return (neuron0x1257f70()*-0.17872);
}

double NNfunction_sb_cLdL::synapse0x12642d0() {
   return (neuron0x12582b0()*0.209056);
}

double NNfunction_sb_cLdL::synapse0x1264310() {
   return (neuron0x12585f0()*-0.296586);
}

double NNfunction_sb_cLdL::synapse0x1264350() {
   return (neuron0x1258930()*-0.403959);
}

double NNfunction_sb_cLdL::synapse0x1264390() {
   return (neuron0x1258c70()*-0.677579);
}

double NNfunction_sb_cLdL::synapse0x12643d0() {
   return (neuron0x1258fb0()*-0.277795);
}

double NNfunction_sb_cLdL::synapse0x1264410() {
   return (neuron0x12592f0()*-0.361116);
}

double NNfunction_sb_cLdL::synapse0x1264450() {
   return (neuron0x1259630()*-0.305868);
}

double NNfunction_sb_cLdL::synapse0x1263ee0() {
   return (neuron0x1259970()*-0.26357);
}

double NNfunction_sb_cLdL::synapse0x1263f20() {
   return (neuron0x1259ed0()*0.435657);
}

double NNfunction_sb_cLdL::synapse0x12645a0() {
   return (neuron0x125a0f0()*0.627601);
}

double NNfunction_sb_cLdL::synapse0x12645e0() {
   return (neuron0x125a430()*0.310226);
}

double NNfunction_sb_cLdL::synapse0x1264620() {
   return (neuron0x125a770()*-0.513481);
}

double NNfunction_sb_cLdL::synapse0x1264660() {
   return (neuron0x125aab0()*0.220841);
}

double NNfunction_sb_cLdL::synapse0x12646a0() {
   return (neuron0x125adf0()*0.330998);
}

double NNfunction_sb_cLdL::synapse0x12646e0() {
   return (neuron0x125b130()*0.769989);
}

double NNfunction_sb_cLdL::synapse0x1264a60() {
   return (neuron0x1256570()*0.047942);
}

double NNfunction_sb_cLdL::synapse0x1264aa0() {
   return (neuron0x12568b0()*0.341047);
}

double NNfunction_sb_cLdL::synapse0x1264ae0() {
   return (neuron0x1256bf0()*0.210987);
}

double NNfunction_sb_cLdL::synapse0x1264b20() {
   return (neuron0x1256f30()*0.612125);
}

double NNfunction_sb_cLdL::synapse0x1264b60() {
   return (neuron0x1257270()*-0.660684);
}

double NNfunction_sb_cLdL::synapse0x1264ba0() {
   return (neuron0x12575b0()*0.123605);
}

double NNfunction_sb_cLdL::synapse0x1264be0() {
   return (neuron0x12578f0()*0.0585891);
}

double NNfunction_sb_cLdL::synapse0x1264c20() {
   return (neuron0x1257c30()*-0.386747);
}

double NNfunction_sb_cLdL::synapse0x1264c60() {
   return (neuron0x1257f70()*0.415614);
}

double NNfunction_sb_cLdL::synapse0x1264ca0() {
   return (neuron0x12582b0()*-0.797428);
}

double NNfunction_sb_cLdL::synapse0x1264ce0() {
   return (neuron0x12585f0()*-0.400407);
}

double NNfunction_sb_cLdL::synapse0x1264d20() {
   return (neuron0x1258930()*0.557487);
}

double NNfunction_sb_cLdL::synapse0x1264d60() {
   return (neuron0x1258c70()*0.791957);
}

double NNfunction_sb_cLdL::synapse0x1264da0() {
   return (neuron0x1258fb0()*0.200338);
}

double NNfunction_sb_cLdL::synapse0x1264de0() {
   return (neuron0x12592f0()*-0.0751383);
}

double NNfunction_sb_cLdL::synapse0x1264e20() {
   return (neuron0x1259630()*0.984701);
}

double NNfunction_sb_cLdL::synapse0x12648b0() {
   return (neuron0x1259970()*-0.208213);
}

double NNfunction_sb_cLdL::synapse0x12648f0() {
   return (neuron0x1259ed0()*0.464552);
}

double NNfunction_sb_cLdL::synapse0x1264f70() {
   return (neuron0x125a0f0()*0.714255);
}

double NNfunction_sb_cLdL::synapse0x1264fb0() {
   return (neuron0x125a430()*0.0187829);
}

double NNfunction_sb_cLdL::synapse0x1264ff0() {
   return (neuron0x125a770()*0.552108);
}

double NNfunction_sb_cLdL::synapse0x1265030() {
   return (neuron0x125aab0()*-0.0331325);
}

double NNfunction_sb_cLdL::synapse0x1265070() {
   return (neuron0x125adf0()*-0.608274);
}

double NNfunction_sb_cLdL::synapse0x12650b0() {
   return (neuron0x125b130()*-0.285773);
}

double NNfunction_sb_cLdL::synapse0x1265430() {
   return (neuron0x1256570()*0.0147511);
}

double NNfunction_sb_cLdL::synapse0x1256790() {
   return (neuron0x12568b0()*0.0355688);
}

double NNfunction_sb_cLdL::synapse0x12567d0() {
   return (neuron0x1256bf0()*-0.150755);
}

double NNfunction_sb_cLdL::synapse0x1256ad0() {
   return (neuron0x1256f30()*-1.58332);
}

double NNfunction_sb_cLdL::synapse0x1256b10() {
   return (neuron0x1257270()*0.0234316);
}

double NNfunction_sb_cLdL::synapse0x1256e10() {
   return (neuron0x12575b0()*-0.00551799);
}

double NNfunction_sb_cLdL::synapse0x1256e50() {
   return (neuron0x12578f0()*0.0122385);
}

double NNfunction_sb_cLdL::synapse0x1257150() {
   return (neuron0x1257c30()*-0.0284736);
}

double NNfunction_sb_cLdL::synapse0x1257190() {
   return (neuron0x1257f70()*-0.0220769);
}

double NNfunction_sb_cLdL::synapse0x1257490() {
   return (neuron0x12582b0()*-0.0459557);
}

double NNfunction_sb_cLdL::synapse0x12574d0() {
   return (neuron0x12585f0()*0.0165217);
}

double NNfunction_sb_cLdL::synapse0x12577d0() {
   return (neuron0x1258930()*-0.336671);
}

double NNfunction_sb_cLdL::synapse0x1257810() {
   return (neuron0x1258c70()*-0.392475);
}

double NNfunction_sb_cLdL::synapse0x1257b10() {
   return (neuron0x1258fb0()*-0.0432866);
}

double NNfunction_sb_cLdL::synapse0x1257b50() {
   return (neuron0x12592f0()*-0.0197266);
}

double NNfunction_sb_cLdL::synapse0x1257e50() {
   return (neuron0x1259630()*0.0532866);
}

double NNfunction_sb_cLdL::synapse0x1257e90() {
   return (neuron0x1259970()*-0.0338274);
}

double NNfunction_sb_cLdL::synapse0x1258190() {
   return (neuron0x1259ed0()*0.0602908);
}

double NNfunction_sb_cLdL::synapse0x12581d0() {
   return (neuron0x125a0f0()*-0.00302805);
}

double NNfunction_sb_cLdL::synapse0x12584d0() {
   return (neuron0x125a430()*0.046593);
}

double NNfunction_sb_cLdL::synapse0x1258510() {
   return (neuron0x125a770()*-0.0534197);
}

double NNfunction_sb_cLdL::synapse0x1258810() {
   return (neuron0x125aab0()*0.0138242);
}

double NNfunction_sb_cLdL::synapse0x1258850() {
   return (neuron0x125adf0()*0.00130196);
}

double NNfunction_sb_cLdL::synapse0x1258b50() {
   return (neuron0x125b130()*-0.0104289);
}

double NNfunction_sb_cLdL::synapse0x1258b90() {
   return (neuron0x1256570()*0.144045);
}

double NNfunction_sb_cLdL::synapse0x1259850() {
   return (neuron0x12568b0()*0.395453);
}

double NNfunction_sb_cLdL::synapse0x1259890() {
   return (neuron0x1256bf0()*0.0454408);
}

double NNfunction_sb_cLdL::synapse0x1265280() {
   return (neuron0x1256f30()*0.203524);
}

double NNfunction_sb_cLdL::synapse0x12652c0() {
   return (neuron0x1257270()*-0.0462338);
}

double NNfunction_sb_cLdL::synapse0x1259b90() {
   return (neuron0x12575b0()*0.0841024);
}

double NNfunction_sb_cLdL::synapse0x1259bd0() {
   return (neuron0x12578f0()*0.386972);
}

double NNfunction_sb_cLdL::synapse0x1007b60() {
   return (neuron0x1257c30()*-0.365819);
}

double NNfunction_sb_cLdL::synapse0x1007ba0() {
   return (neuron0x1257f70()*0.193186);
}

double NNfunction_sb_cLdL::synapse0x125a310() {
   return (neuron0x12582b0()*-0.008533);
}

double NNfunction_sb_cLdL::synapse0x125a350() {
   return (neuron0x12585f0()*0.219959);
}

double NNfunction_sb_cLdL::synapse0x125a650() {
   return (neuron0x1258930()*-0.560844);
}

double NNfunction_sb_cLdL::synapse0x125a690() {
   return (neuron0x1258c70()*-0.423591);
}

double NNfunction_sb_cLdL::synapse0x125a990() {
   return (neuron0x1258fb0()*-0.885812);
}

double NNfunction_sb_cLdL::synapse0x125a9d0() {
   return (neuron0x12592f0()*-0.0807599);
}

double NNfunction_sb_cLdL::synapse0x125acd0() {
   return (neuron0x1259630()*-0.70541);
}

double NNfunction_sb_cLdL::synapse0x125ad10() {
   return (neuron0x1259970()*-0.369575);
}

double NNfunction_sb_cLdL::synapse0x125b010() {
   return (neuron0x1259ed0()*0.195147);
}

double NNfunction_sb_cLdL::synapse0x125b050() {
   return (neuron0x125a0f0()*-0.205628);
}

double NNfunction_sb_cLdL::synapse0x125b350() {
   return (neuron0x125a430()*-0.771581);
}

double NNfunction_sb_cLdL::synapse0x125b390() {
   return (neuron0x125a770()*-0.291064);
}

double NNfunction_sb_cLdL::synapse0x1258e90() {
   return (neuron0x125aab0()*0.234851);
}

double NNfunction_sb_cLdL::synapse0x1258ed0() {
   return (neuron0x125adf0()*0.449241);
}

double NNfunction_sb_cLdL::synapse0x12671a0() {
   return (neuron0x125b130()*-0.569604);
}

double NNfunction_sb_cLdL::synapse0x1267520() {
   return (neuron0x1256570()*0.00976455);
}

double NNfunction_sb_cLdL::synapse0x1267560() {
   return (neuron0x12568b0()*-0.00112045);
}

double NNfunction_sb_cLdL::synapse0x12675a0() {
   return (neuron0x1256bf0()*-0.00563568);
}

double NNfunction_sb_cLdL::synapse0x12675e0() {
   return (neuron0x1256f30()*3.9174);
}

double NNfunction_sb_cLdL::synapse0x1267620() {
   return (neuron0x1257270()*0.00755415);
}

double NNfunction_sb_cLdL::synapse0x1267660() {
   return (neuron0x12575b0()*0.0067262);
}

double NNfunction_sb_cLdL::synapse0x12676a0() {
   return (neuron0x12578f0()*0.00138858);
}

double NNfunction_sb_cLdL::synapse0x12676e0() {
   return (neuron0x1257c30()*0.00685376);
}

double NNfunction_sb_cLdL::synapse0x1267720() {
   return (neuron0x1257f70()*-0.000634837);
}

double NNfunction_sb_cLdL::synapse0x1267760() {
   return (neuron0x12582b0()*0.0195878);
}

double NNfunction_sb_cLdL::synapse0x12677a0() {
   return (neuron0x12585f0()*-0.0233393);
}

double NNfunction_sb_cLdL::synapse0x12677e0() {
   return (neuron0x1258930()*-0.199107);
}

double NNfunction_sb_cLdL::synapse0x1267820() {
   return (neuron0x1258c70()*-0.174931);
}

double NNfunction_sb_cLdL::synapse0x1267860() {
   return (neuron0x1258fb0()*0.00271832);
}

double NNfunction_sb_cLdL::synapse0x12678a0() {
   return (neuron0x12592f0()*0.0253177);
}

double NNfunction_sb_cLdL::synapse0x12678e0() {
   return (neuron0x1259630()*0.0216674);
}

double NNfunction_sb_cLdL::synapse0x1267370() {
   return (neuron0x1259970()*0.00713914);
}

double NNfunction_sb_cLdL::synapse0x12673b0() {
   return (neuron0x1259ed0()*-0.000551241);
}

double NNfunction_sb_cLdL::synapse0x1267a30() {
   return (neuron0x125a0f0()*0.00972885);
}

double NNfunction_sb_cLdL::synapse0x1267a70() {
   return (neuron0x125a430()*-0.0288854);
}

double NNfunction_sb_cLdL::synapse0x1267ab0() {
   return (neuron0x125a770()*0.00578688);
}

double NNfunction_sb_cLdL::synapse0x1267af0() {
   return (neuron0x125aab0()*0.00453168);
}

double NNfunction_sb_cLdL::synapse0x1267b30() {
   return (neuron0x125adf0()*-0.0163788);
}

double NNfunction_sb_cLdL::synapse0x1267b70() {
   return (neuron0x125b130()*0.0121571);
}

double NNfunction_sb_cLdL::synapse0x1267ef0() {
   return (neuron0x1256570()*0.32077);
}

double NNfunction_sb_cLdL::synapse0x1267f30() {
   return (neuron0x12568b0()*-0.53658);
}

double NNfunction_sb_cLdL::synapse0x1267f70() {
   return (neuron0x1256bf0()*-0.735379);
}

double NNfunction_sb_cLdL::synapse0x1267fb0() {
   return (neuron0x1256f30()*-0.178658);
}

double NNfunction_sb_cLdL::synapse0x1267ff0() {
   return (neuron0x1257270()*0.247178);
}

double NNfunction_sb_cLdL::synapse0x1268030() {
   return (neuron0x12575b0()*-0.220849);
}

double NNfunction_sb_cLdL::synapse0x1268070() {
   return (neuron0x12578f0()*-0.431233);
}

double NNfunction_sb_cLdL::synapse0x12680b0() {
   return (neuron0x1257c30()*0.792592);
}

double NNfunction_sb_cLdL::synapse0x12680f0() {
   return (neuron0x1257f70()*0.151928);
}

double NNfunction_sb_cLdL::synapse0x1268130() {
   return (neuron0x12582b0()*-0.279183);
}

double NNfunction_sb_cLdL::synapse0x1268170() {
   return (neuron0x12585f0()*-0.177387);
}

double NNfunction_sb_cLdL::synapse0x12681b0() {
   return (neuron0x1258930()*-0.121934);
}

double NNfunction_sb_cLdL::synapse0x12681f0() {
   return (neuron0x1258c70()*0.216672);
}

double NNfunction_sb_cLdL::synapse0x1268230() {
   return (neuron0x1258fb0()*0.0743095);
}

double NNfunction_sb_cLdL::synapse0x1268270() {
   return (neuron0x12592f0()*-0.209167);
}

double NNfunction_sb_cLdL::synapse0x12682b0() {
   return (neuron0x1259630()*0.0971269);
}

double NNfunction_sb_cLdL::synapse0x1267d40() {
   return (neuron0x1259970()*-0.0851793);
}

double NNfunction_sb_cLdL::synapse0x1267d80() {
   return (neuron0x1259ed0()*-0.0892783);
}

double NNfunction_sb_cLdL::synapse0x1268400() {
   return (neuron0x125a0f0()*-0.76254);
}

double NNfunction_sb_cLdL::synapse0x1268440() {
   return (neuron0x125a430()*0.393142);
}

double NNfunction_sb_cLdL::synapse0x1268480() {
   return (neuron0x125a770()*-0.435118);
}

double NNfunction_sb_cLdL::synapse0x12684c0() {
   return (neuron0x125aab0()*-0.120384);
}

double NNfunction_sb_cLdL::synapse0x1268500() {
   return (neuron0x125adf0()*0.0565729);
}

double NNfunction_sb_cLdL::synapse0x1268540() {
   return (neuron0x125b130()*-0.216417);
}

double NNfunction_sb_cLdL::synapse0x12688c0() {
   return (neuron0x1256570()*-0.035261);
}

double NNfunction_sb_cLdL::synapse0x1268900() {
   return (neuron0x12568b0()*0.107592);
}

double NNfunction_sb_cLdL::synapse0x1268940() {
   return (neuron0x1256bf0()*-0.271742);
}

double NNfunction_sb_cLdL::synapse0x1268980() {
   return (neuron0x1256f30()*0.961287);
}

double NNfunction_sb_cLdL::synapse0x12689c0() {
   return (neuron0x1257270()*0.0594545);
}

double NNfunction_sb_cLdL::synapse0x1268a00() {
   return (neuron0x12575b0()*0.120665);
}

double NNfunction_sb_cLdL::synapse0x1268a40() {
   return (neuron0x12578f0()*-0.200422);
}

double NNfunction_sb_cLdL::synapse0x1268a80() {
   return (neuron0x1257c30()*-0.127633);
}

double NNfunction_sb_cLdL::synapse0x1268ac0() {
   return (neuron0x1257f70()*0.0539953);
}

double NNfunction_sb_cLdL::synapse0x1268b00() {
   return (neuron0x12582b0()*0.0304101);
}

double NNfunction_sb_cLdL::synapse0x1268b40() {
   return (neuron0x12585f0()*-0.0326135);
}

double NNfunction_sb_cLdL::synapse0x1268b80() {
   return (neuron0x1258930()*-0.113639);
}

double NNfunction_sb_cLdL::synapse0x1268bc0() {
   return (neuron0x1258c70()*-0.230903);
}

double NNfunction_sb_cLdL::synapse0x1268c00() {
   return (neuron0x1258fb0()*-0.0603921);
}

double NNfunction_sb_cLdL::synapse0x1268c40() {
   return (neuron0x12592f0()*-0.0489774);
}

double NNfunction_sb_cLdL::synapse0x1268c80() {
   return (neuron0x1259630()*-0.0344794);
}

double NNfunction_sb_cLdL::synapse0x1268710() {
   return (neuron0x1259970()*0.281787);
}

double NNfunction_sb_cLdL::synapse0x1268750() {
   return (neuron0x1259ed0()*-0.0551615);
}

double NNfunction_sb_cLdL::synapse0x1268dd0() {
   return (neuron0x125a0f0()*-0.182174);
}

double NNfunction_sb_cLdL::synapse0x1268e10() {
   return (neuron0x125a430()*-0.326779);
}

double NNfunction_sb_cLdL::synapse0x1268e50() {
   return (neuron0x125a770()*-0.0696538);
}

double NNfunction_sb_cLdL::synapse0x1268e90() {
   return (neuron0x125aab0()*-0.148583);
}

double NNfunction_sb_cLdL::synapse0x1268ed0() {
   return (neuron0x125adf0()*-0.0390127);
}

double NNfunction_sb_cLdL::synapse0x1268f10() {
   return (neuron0x125b130()*0.0348164);
}

double NNfunction_sb_cLdL::synapse0x1269290() {
   return (neuron0x1256570()*-0.17343);
}

double NNfunction_sb_cLdL::synapse0x12692d0() {
   return (neuron0x12568b0()*-0.778582);
}

double NNfunction_sb_cLdL::synapse0x1269310() {
   return (neuron0x1256bf0()*-0.274455);
}

double NNfunction_sb_cLdL::synapse0x1269350() {
   return (neuron0x1256f30()*0.552926);
}

double NNfunction_sb_cLdL::synapse0x1269390() {
   return (neuron0x1257270()*0.303771);
}

double NNfunction_sb_cLdL::synapse0x12693d0() {
   return (neuron0x12575b0()*-0.56807);
}

double NNfunction_sb_cLdL::synapse0x1269410() {
   return (neuron0x12578f0()*-0.619673);
}

double NNfunction_sb_cLdL::synapse0x1269450() {
   return (neuron0x1257c30()*0.0632661);
}

double NNfunction_sb_cLdL::synapse0x1269490() {
   return (neuron0x1257f70()*0.362333);
}

double NNfunction_sb_cLdL::synapse0x12694d0() {
   return (neuron0x12582b0()*0.657435);
}

double NNfunction_sb_cLdL::synapse0x1269510() {
   return (neuron0x12585f0()*0.461641);
}

double NNfunction_sb_cLdL::synapse0x1269550() {
   return (neuron0x1258930()*-0.18993);
}

double NNfunction_sb_cLdL::synapse0x1269590() {
   return (neuron0x1258c70()*-0.475183);
}

double NNfunction_sb_cLdL::synapse0x12695d0() {
   return (neuron0x1258fb0()*0.0631656);
}

double NNfunction_sb_cLdL::synapse0x1269610() {
   return (neuron0x12592f0()*-0.0326216);
}

double NNfunction_sb_cLdL::synapse0x1269650() {
   return (neuron0x1259630()*-0.500256);
}

double NNfunction_sb_cLdL::synapse0x12690e0() {
   return (neuron0x1259970()*0.200717);
}

double NNfunction_sb_cLdL::synapse0x1269120() {
   return (neuron0x1259ed0()*-0.231164);
}

double NNfunction_sb_cLdL::synapse0x12697a0() {
   return (neuron0x125a0f0()*-0.506805);
}

double NNfunction_sb_cLdL::synapse0x12697e0() {
   return (neuron0x125a430()*-0.609755);
}

double NNfunction_sb_cLdL::synapse0x1269820() {
   return (neuron0x125a770()*-0.360995);
}

double NNfunction_sb_cLdL::synapse0x1269860() {
   return (neuron0x125aab0()*-0.363162);
}

double NNfunction_sb_cLdL::synapse0x12698a0() {
   return (neuron0x125adf0()*0.110339);
}

double NNfunction_sb_cLdL::synapse0x12698e0() {
   return (neuron0x125b130()*-0.858318);
}

double NNfunction_sb_cLdL::synapse0x1269c60() {
   return (neuron0x1256570()*-0.0290621);
}

double NNfunction_sb_cLdL::synapse0x1269ca0() {
   return (neuron0x12568b0()*0.335642);
}

double NNfunction_sb_cLdL::synapse0x1269ce0() {
   return (neuron0x1256bf0()*0.247133);
}

double NNfunction_sb_cLdL::synapse0x1269d20() {
   return (neuron0x1256f30()*-0.0478175);
}

double NNfunction_sb_cLdL::synapse0x1269d60() {
   return (neuron0x1257270()*0.522057);
}

double NNfunction_sb_cLdL::synapse0x1269da0() {
   return (neuron0x12575b0()*-0.135805);
}

double NNfunction_sb_cLdL::synapse0x1269de0() {
   return (neuron0x12578f0()*0.00906377);
}

double NNfunction_sb_cLdL::synapse0x1269e20() {
   return (neuron0x1257c30()*0.0809163);
}

double NNfunction_sb_cLdL::synapse0x1269e60() {
   return (neuron0x1257f70()*0.195807);
}

double NNfunction_sb_cLdL::synapse0x1262020() {
   return (neuron0x12582b0()*-0.286928);
}

double NNfunction_sb_cLdL::synapse0x1262060() {
   return (neuron0x12585f0()*0.165889);
}

double NNfunction_sb_cLdL::synapse0x12620a0() {
   return (neuron0x1258930()*-0.583755);
}

double NNfunction_sb_cLdL::synapse0x12620e0() {
   return (neuron0x1258c70()*-0.989392);
}

double NNfunction_sb_cLdL::synapse0x1262120() {
   return (neuron0x1258fb0()*0.174413);
}

double NNfunction_sb_cLdL::synapse0x1262160() {
   return (neuron0x12592f0()*-0.637543);
}

double NNfunction_sb_cLdL::synapse0x12621a0() {
   return (neuron0x1259630()*-0.444934);
}

double NNfunction_sb_cLdL::synapse0x1269ab0() {
   return (neuron0x1259970()*0.229836);
}

double NNfunction_sb_cLdL::synapse0x1269af0() {
   return (neuron0x1259ed0()*0.398272);
}

double NNfunction_sb_cLdL::synapse0x12622f0() {
   return (neuron0x125a0f0()*0.0648362);
}

double NNfunction_sb_cLdL::synapse0x1262330() {
   return (neuron0x125a430()*0.839076);
}

double NNfunction_sb_cLdL::synapse0x1262370() {
   return (neuron0x125a770()*-0.251828);
}

double NNfunction_sb_cLdL::synapse0x12623b0() {
   return (neuron0x125aab0()*-0.240071);
}

double NNfunction_sb_cLdL::synapse0x12623f0() {
   return (neuron0x125adf0()*-0.0762529);
}

double NNfunction_sb_cLdL::synapse0x1262430() {
   return (neuron0x125b130()*-0.158398);
}

double NNfunction_sb_cLdL::synapse0x12627b0() {
   return (neuron0x1256570()*0.0354299);
}

double NNfunction_sb_cLdL::synapse0x12627f0() {
   return (neuron0x12568b0()*-0.0280249);
}

double NNfunction_sb_cLdL::synapse0x1262830() {
   return (neuron0x1256bf0()*0.132297);
}

double NNfunction_sb_cLdL::synapse0x1262870() {
   return (neuron0x1256f30()*0.179734);
}

double NNfunction_sb_cLdL::synapse0x12628b0() {
   return (neuron0x1257270()*0.231201);
}

double NNfunction_sb_cLdL::synapse0x12628f0() {
   return (neuron0x12575b0()*0.218749);
}

double NNfunction_sb_cLdL::synapse0x1262930() {
   return (neuron0x12578f0()*-0.379851);
}

double NNfunction_sb_cLdL::synapse0x1262970() {
   return (neuron0x1257c30()*0.0171171);
}

double NNfunction_sb_cLdL::synapse0x12629b0() {
   return (neuron0x1257f70()*0.145816);
}

double NNfunction_sb_cLdL::synapse0x12629f0() {
   return (neuron0x12582b0()*-0.521852);
}

double NNfunction_sb_cLdL::synapse0x1262a30() {
   return (neuron0x12585f0()*0.0738468);
}

double NNfunction_sb_cLdL::synapse0x1262a70() {
   return (neuron0x1258930()*-0.0576079);
}

double NNfunction_sb_cLdL::synapse0x1262ab0() {
   return (neuron0x1258c70()*-0.596127);
}

double NNfunction_sb_cLdL::synapse0x1262af0() {
   return (neuron0x1258fb0()*0.852492);
}

double NNfunction_sb_cLdL::synapse0x1262b30() {
   return (neuron0x12592f0()*-0.382238);
}

double NNfunction_sb_cLdL::synapse0x1262b70() {
   return (neuron0x1259630()*0.854256);
}

double NNfunction_sb_cLdL::synapse0x1262600() {
   return (neuron0x1259970()*0.685196);
}

double NNfunction_sb_cLdL::synapse0x1262640() {
   return (neuron0x1259ed0()*-0.367117);
}

double NNfunction_sb_cLdL::synapse0x1262cc0() {
   return (neuron0x125a0f0()*-0.788013);
}

double NNfunction_sb_cLdL::synapse0x1262d00() {
   return (neuron0x125a430()*0.27168);
}

double NNfunction_sb_cLdL::synapse0x1262d40() {
   return (neuron0x125a770()*-0.555221);
}

double NNfunction_sb_cLdL::synapse0x1262d80() {
   return (neuron0x125aab0()*-0.30141);
}

double NNfunction_sb_cLdL::synapse0x1262dc0() {
   return (neuron0x125adf0()*0.191724);
}

double NNfunction_sb_cLdL::synapse0x1262e00() {
   return (neuron0x125b130()*0.533353);
}

double NNfunction_sb_cLdL::synapse0x1262fd0() {
   return (neuron0x1256570()*0.115875);
}

double NNfunction_sb_cLdL::synapse0x126c060() {
   return (neuron0x12568b0()*-0.230153);
}

double NNfunction_sb_cLdL::synapse0x126c0a0() {
   return (neuron0x1256bf0()*0.213885);
}

double NNfunction_sb_cLdL::synapse0x126c0e0() {
   return (neuron0x1256f30()*-0.412603);
}

double NNfunction_sb_cLdL::synapse0x126c120() {
   return (neuron0x1257270()*0.14535);
}

double NNfunction_sb_cLdL::synapse0x126c160() {
   return (neuron0x12575b0()*0.224398);
}

double NNfunction_sb_cLdL::synapse0x126c1a0() {
   return (neuron0x12578f0()*-0.0697138);
}

double NNfunction_sb_cLdL::synapse0x126c1e0() {
   return (neuron0x1257c30()*0.307442);
}

double NNfunction_sb_cLdL::synapse0x126c220() {
   return (neuron0x1257f70()*-0.24967);
}

double NNfunction_sb_cLdL::synapse0x126c260() {
   return (neuron0x12582b0()*-0.167173);
}

double NNfunction_sb_cLdL::synapse0x126c2a0() {
   return (neuron0x12585f0()*-0.000983853);
}

double NNfunction_sb_cLdL::synapse0x126c2e0() {
   return (neuron0x1258930()*-0.0938682);
}

double NNfunction_sb_cLdL::synapse0x126c320() {
   return (neuron0x1258c70()*-0.00797771);
}

double NNfunction_sb_cLdL::synapse0x126c360() {
   return (neuron0x1258fb0()*-0.432339);
}

double NNfunction_sb_cLdL::synapse0x126c3a0() {
   return (neuron0x12592f0()*-0.129354);
}

double NNfunction_sb_cLdL::synapse0x126c3e0() {
   return (neuron0x1259630()*0.341004);
}

double NNfunction_sb_cLdL::synapse0x126beb0() {
   return (neuron0x1259970()*0.115213);
}

double NNfunction_sb_cLdL::synapse0x126bef0() {
   return (neuron0x1259ed0()*0.388077);
}

double NNfunction_sb_cLdL::synapse0x126c530() {
   return (neuron0x125a0f0()*-0.100451);
}

double NNfunction_sb_cLdL::synapse0x126c570() {
   return (neuron0x125a430()*-0.234626);
}

double NNfunction_sb_cLdL::synapse0x126c5b0() {
   return (neuron0x125a770()*0.148775);
}

double NNfunction_sb_cLdL::synapse0x126c5f0() {
   return (neuron0x125aab0()*0.216827);
}

double NNfunction_sb_cLdL::synapse0x126c630() {
   return (neuron0x125adf0()*-0.541009);
}

double NNfunction_sb_cLdL::synapse0x126c670() {
   return (neuron0x125b130()*-0.0839208);
}

double NNfunction_sb_cLdL::synapse0x126c9f0() {
   return (neuron0x1256570()*0.0138183);
}

double NNfunction_sb_cLdL::synapse0x126ca30() {
   return (neuron0x12568b0()*-0.0290173);
}

double NNfunction_sb_cLdL::synapse0x126ca70() {
   return (neuron0x1256bf0()*0.88104);
}

double NNfunction_sb_cLdL::synapse0x126cab0() {
   return (neuron0x1256f30()*0.216003);
}

double NNfunction_sb_cLdL::synapse0x126caf0() {
   return (neuron0x1257270()*0.00498632);
}

double NNfunction_sb_cLdL::synapse0x126cb30() {
   return (neuron0x12575b0()*0.0424885);
}

double NNfunction_sb_cLdL::synapse0x126cb70() {
   return (neuron0x12578f0()*-0.0155161);
}

double NNfunction_sb_cLdL::synapse0x126cbb0() {
   return (neuron0x1257c30()*0.0291968);
}

double NNfunction_sb_cLdL::synapse0x126cbf0() {
   return (neuron0x1257f70()*0.00406161);
}

double NNfunction_sb_cLdL::synapse0x126cc30() {
   return (neuron0x12582b0()*0.00868378);
}

double NNfunction_sb_cLdL::synapse0x126cc70() {
   return (neuron0x12585f0()*0.0278395);
}

double NNfunction_sb_cLdL::synapse0x126ccb0() {
   return (neuron0x1258930()*-0.135925);
}

double NNfunction_sb_cLdL::synapse0x126ccf0() {
   return (neuron0x1258c70()*-0.0759797);
}

double NNfunction_sb_cLdL::synapse0x126cd30() {
   return (neuron0x1258fb0()*0.0392744);
}

double NNfunction_sb_cLdL::synapse0x126cd70() {
   return (neuron0x12592f0()*0.0111577);
}

double NNfunction_sb_cLdL::synapse0x126cdb0() {
   return (neuron0x1259630()*-0.0208601);
}

double NNfunction_sb_cLdL::synapse0x126c840() {
   return (neuron0x1259970()*0.0194142);
}

double NNfunction_sb_cLdL::synapse0x126c880() {
   return (neuron0x1259ed0()*-0.00965204);
}

double NNfunction_sb_cLdL::synapse0x126cf00() {
   return (neuron0x125a0f0()*0.00244583);
}

double NNfunction_sb_cLdL::synapse0x126cf40() {
   return (neuron0x125a430()*-0.00421129);
}

double NNfunction_sb_cLdL::synapse0x126cf80() {
   return (neuron0x125a770()*0.0245105);
}

double NNfunction_sb_cLdL::synapse0x126cfc0() {
   return (neuron0x125aab0()*-0.0289655);
}

double NNfunction_sb_cLdL::synapse0x126d000() {
   return (neuron0x125adf0()*0.00644222);
}

double NNfunction_sb_cLdL::synapse0x126d040() {
   return (neuron0x125b130()*-0.00563043);
}

double NNfunction_sb_cLdL::synapse0x126d3c0() {
   return (neuron0x1256570()*-0.0613847);
}

double NNfunction_sb_cLdL::synapse0x126d400() {
   return (neuron0x12568b0()*0.0118474);
}

double NNfunction_sb_cLdL::synapse0x126d440() {
   return (neuron0x1256bf0()*-0.169557);
}

double NNfunction_sb_cLdL::synapse0x126d480() {
   return (neuron0x1256f30()*2.36729);
}

double NNfunction_sb_cLdL::synapse0x126d4c0() {
   return (neuron0x1257270()*-0.0184532);
}

double NNfunction_sb_cLdL::synapse0x126d500() {
   return (neuron0x12575b0()*-0.0209087);
}

double NNfunction_sb_cLdL::synapse0x126d540() {
   return (neuron0x12578f0()*-0.0708259);
}

double NNfunction_sb_cLdL::synapse0x126d580() {
   return (neuron0x1257c30()*-0.0133202);
}

double NNfunction_sb_cLdL::synapse0x126d5c0() {
   return (neuron0x1257f70()*-0.0425417);
}

double NNfunction_sb_cLdL::synapse0x126d600() {
   return (neuron0x12582b0()*-0.0386732);
}

double NNfunction_sb_cLdL::synapse0x126d640() {
   return (neuron0x12585f0()*0.00745503);
}

double NNfunction_sb_cLdL::synapse0x126d680() {
   return (neuron0x1258930()*0.0374427);
}

double NNfunction_sb_cLdL::synapse0x126d6c0() {
   return (neuron0x1258c70()*0.0891952);
}

double NNfunction_sb_cLdL::synapse0x126d700() {
   return (neuron0x1258fb0()*-0.136953);
}

double NNfunction_sb_cLdL::synapse0x126d740() {
   return (neuron0x12592f0()*-0.0376188);
}

double NNfunction_sb_cLdL::synapse0x126d780() {
   return (neuron0x1259630()*-0.00114484);
}

double NNfunction_sb_cLdL::synapse0x126d210() {
   return (neuron0x1259970()*-0.0846905);
}

double NNfunction_sb_cLdL::synapse0x126d250() {
   return (neuron0x1259ed0()*-0.0297862);
}

double NNfunction_sb_cLdL::synapse0x126d8d0() {
   return (neuron0x125a0f0()*-0.0264789);
}

double NNfunction_sb_cLdL::synapse0x126d910() {
   return (neuron0x125a430()*0.022092);
}

double NNfunction_sb_cLdL::synapse0x126d950() {
   return (neuron0x125a770()*-0.0456754);
}

double NNfunction_sb_cLdL::synapse0x126d990() {
   return (neuron0x125aab0()*0.00165362);
}

double NNfunction_sb_cLdL::synapse0x126d9d0() {
   return (neuron0x125adf0()*0.0197718);
}

double NNfunction_sb_cLdL::synapse0x126da10() {
   return (neuron0x125b130()*0.0813764);
}

double NNfunction_sb_cLdL::synapse0x126dd90() {
   return (neuron0x1256570()*0.663631);
}

double NNfunction_sb_cLdL::synapse0x126ddd0() {
   return (neuron0x12568b0()*-0.463316);
}

double NNfunction_sb_cLdL::synapse0x126de10() {
   return (neuron0x1256bf0()*0.629025);
}

double NNfunction_sb_cLdL::synapse0x126de50() {
   return (neuron0x1256f30()*0.00281673);
}

double NNfunction_sb_cLdL::synapse0x126de90() {
   return (neuron0x1257270()*0.326163);
}

double NNfunction_sb_cLdL::synapse0x126ded0() {
   return (neuron0x12575b0()*-0.2108);
}

double NNfunction_sb_cLdL::synapse0x126df10() {
   return (neuron0x12578f0()*-0.0186482);
}

double NNfunction_sb_cLdL::synapse0x126df50() {
   return (neuron0x1257c30()*-0.0748273);
}

double NNfunction_sb_cLdL::synapse0x126df90() {
   return (neuron0x1257f70()*-0.705877);
}

double NNfunction_sb_cLdL::synapse0x126dfd0() {
   return (neuron0x12582b0()*0.453119);
}

double NNfunction_sb_cLdL::synapse0x126e010() {
   return (neuron0x12585f0()*0.0759789);
}

double NNfunction_sb_cLdL::synapse0x126e050() {
   return (neuron0x1258930()*0.895197);
}

double NNfunction_sb_cLdL::synapse0x126e090() {
   return (neuron0x1258c70()*-0.128456);
}

double NNfunction_sb_cLdL::synapse0x126e0d0() {
   return (neuron0x1258fb0()*-0.581127);
}

double NNfunction_sb_cLdL::synapse0x126e110() {
   return (neuron0x12592f0()*-0.0696425);
}

double NNfunction_sb_cLdL::synapse0x126e150() {
   return (neuron0x1259630()*-0.165926);
}

double NNfunction_sb_cLdL::synapse0x126dbe0() {
   return (neuron0x1259970()*-0.0547615);
}

double NNfunction_sb_cLdL::synapse0x126dc20() {
   return (neuron0x1259ed0()*0.300523);
}

double NNfunction_sb_cLdL::synapse0x126e2a0() {
   return (neuron0x125a0f0()*-0.0636071);
}

double NNfunction_sb_cLdL::synapse0x126e2e0() {
   return (neuron0x125a430()*0.48926);
}

double NNfunction_sb_cLdL::synapse0x126e320() {
   return (neuron0x125a770()*-0.237446);
}

double NNfunction_sb_cLdL::synapse0x126e360() {
   return (neuron0x125aab0()*0.160674);
}

double NNfunction_sb_cLdL::synapse0x126e3a0() {
   return (neuron0x125adf0()*0.19032);
}

double NNfunction_sb_cLdL::synapse0x126e3e0() {
   return (neuron0x125b130()*0.681608);
}

double NNfunction_sb_cLdL::synapse0x126e760() {
   return (neuron0x1256570()*0.0218754);
}

double NNfunction_sb_cLdL::synapse0x126e7a0() {
   return (neuron0x12568b0()*-0.00440046);
}

double NNfunction_sb_cLdL::synapse0x126e7e0() {
   return (neuron0x1256bf0()*-0.0199674);
}

double NNfunction_sb_cLdL::synapse0x126e820() {
   return (neuron0x1256f30()*-6.64638);
}

double NNfunction_sb_cLdL::synapse0x126e860() {
   return (neuron0x1257270()*0.00693778);
}

double NNfunction_sb_cLdL::synapse0x126e8a0() {
   return (neuron0x12575b0()*0.00640808);
}

double NNfunction_sb_cLdL::synapse0x126e8e0() {
   return (neuron0x12578f0()*0.0242203);
}

double NNfunction_sb_cLdL::synapse0x126e920() {
   return (neuron0x1257c30()*-0.0033697);
}

double NNfunction_sb_cLdL::synapse0x126e960() {
   return (neuron0x1257f70()*-0.0453942);
}

double NNfunction_sb_cLdL::synapse0x126e9a0() {
   return (neuron0x12582b0()*-0.0167475);
}

double NNfunction_sb_cLdL::synapse0x126e9e0() {
   return (neuron0x12585f0()*0.0335194);
}

double NNfunction_sb_cLdL::synapse0x126ea20() {
   return (neuron0x1258930()*-0.0156023);
}

double NNfunction_sb_cLdL::synapse0x126ea60() {
   return (neuron0x1258c70()*-0.024964);
}

double NNfunction_sb_cLdL::synapse0x126eaa0() {
   return (neuron0x1258fb0()*-0.00588837);
}

double NNfunction_sb_cLdL::synapse0x126eae0() {
   return (neuron0x12592f0()*-0.0277322);
}

double NNfunction_sb_cLdL::synapse0x126eb20() {
   return (neuron0x1259630()*-0.0278813);
}

double NNfunction_sb_cLdL::synapse0x126e5b0() {
   return (neuron0x1259970()*0.0181349);
}

double NNfunction_sb_cLdL::synapse0x126e5f0() {
   return (neuron0x1259ed0()*0.00646401);
}

double NNfunction_sb_cLdL::synapse0x126ec70() {
   return (neuron0x125a0f0()*-0.0313728);
}

double NNfunction_sb_cLdL::synapse0x126ecb0() {
   return (neuron0x125a430()*0.0470782);
}

double NNfunction_sb_cLdL::synapse0x126ecf0() {
   return (neuron0x125a770()*0.00584254);
}

double NNfunction_sb_cLdL::synapse0x126ed30() {
   return (neuron0x125aab0()*0.0533566);
}

double NNfunction_sb_cLdL::synapse0x126ed70() {
   return (neuron0x125adf0()*-0.00378224);
}

double NNfunction_sb_cLdL::synapse0x126edb0() {
   return (neuron0x125b130()*-0.0044092);
}

double NNfunction_sb_cLdL::synapse0x126f130() {
   return (neuron0x1256570()*0.0337556);
}

double NNfunction_sb_cLdL::synapse0x126f170() {
   return (neuron0x12568b0()*-0.00555354);
}

double NNfunction_sb_cLdL::synapse0x126f1b0() {
   return (neuron0x1256bf0()*-0.0719772);
}

double NNfunction_sb_cLdL::synapse0x126f1f0() {
   return (neuron0x1256f30()*0.401846);
}

double NNfunction_sb_cLdL::synapse0x126f230() {
   return (neuron0x1257270()*-0.00450366);
}

double NNfunction_sb_cLdL::synapse0x126f270() {
   return (neuron0x12575b0()*0.0107589);
}

double NNfunction_sb_cLdL::synapse0x126f2b0() {
   return (neuron0x12578f0()*0.00494973);
}

double NNfunction_sb_cLdL::synapse0x126f2f0() {
   return (neuron0x1257c30()*-0.00357887);
}

double NNfunction_sb_cLdL::synapse0x126f330() {
   return (neuron0x1257f70()*0.0040249);
}

double NNfunction_sb_cLdL::synapse0x126f370() {
   return (neuron0x12582b0()*0.00627628);
}

double NNfunction_sb_cLdL::synapse0x126f3b0() {
   return (neuron0x12585f0()*0.0393156);
}

double NNfunction_sb_cLdL::synapse0x126f3f0() {
   return (neuron0x1258930()*1.11735);
}

double NNfunction_sb_cLdL::synapse0x126f430() {
   return (neuron0x1258c70()*1.38696);
}

double NNfunction_sb_cLdL::synapse0x126f470() {
   return (neuron0x1258fb0()*0.0439317);
}

double NNfunction_sb_cLdL::synapse0x126f4b0() {
   return (neuron0x12592f0()*0.00218928);
}

double NNfunction_sb_cLdL::synapse0x126f4f0() {
   return (neuron0x1259630()*0.0162033);
}

double NNfunction_sb_cLdL::synapse0x126ef80() {
   return (neuron0x1259970()*0.0497383);
}

double NNfunction_sb_cLdL::synapse0x126efc0() {
   return (neuron0x1259ed0()*-0.00808991);
}

double NNfunction_sb_cLdL::synapse0x126f640() {
   return (neuron0x125a0f0()*-0.00954607);
}

double NNfunction_sb_cLdL::synapse0x126f680() {
   return (neuron0x125a430()*-0.0301601);
}

double NNfunction_sb_cLdL::synapse0x126f6c0() {
   return (neuron0x125a770()*0.0193706);
}

double NNfunction_sb_cLdL::synapse0x126f700() {
   return (neuron0x125aab0()*0.0339642);
}

double NNfunction_sb_cLdL::synapse0x126f740() {
   return (neuron0x125adf0()*-0.0226597);
}

double NNfunction_sb_cLdL::synapse0x126f780() {
   return (neuron0x125b130()*-0.0137379);
}

double NNfunction_sb_cLdL::synapse0x126fb00() {
   return (neuron0x1256570()*0.00308694);
}

double NNfunction_sb_cLdL::synapse0x126fb40() {
   return (neuron0x12568b0()*-0.000758658);
}

double NNfunction_sb_cLdL::synapse0x126fb80() {
   return (neuron0x1256bf0()*0.00366752);
}

double NNfunction_sb_cLdL::synapse0x126fbc0() {
   return (neuron0x1256f30()*0.00629568);
}

double NNfunction_sb_cLdL::synapse0x126fc00() {
   return (neuron0x1257270()*-0.00107388);
}

double NNfunction_sb_cLdL::synapse0x126fc40() {
   return (neuron0x12575b0()*0.0111949);
}

double NNfunction_sb_cLdL::synapse0x126fc80() {
   return (neuron0x12578f0()*-0.0042089);
}

double NNfunction_sb_cLdL::synapse0x126fcc0() {
   return (neuron0x1257c30()*-0.00281649);
}

double NNfunction_sb_cLdL::synapse0x126fd00() {
   return (neuron0x1257f70()*0.00048972);
}

double NNfunction_sb_cLdL::synapse0x126fd40() {
   return (neuron0x12582b0()*-0.00305241);
}

double NNfunction_sb_cLdL::synapse0x126fd80() {
   return (neuron0x12585f0()*0.000274295);
}

double NNfunction_sb_cLdL::synapse0x126fdc0() {
   return (neuron0x1258930()*-0.71891);
}

double NNfunction_sb_cLdL::synapse0x126fe00() {
   return (neuron0x1258c70()*1.00255);
}

double NNfunction_sb_cLdL::synapse0x126fe40() {
   return (neuron0x1258fb0()*-0.00155086);
}

double NNfunction_sb_cLdL::synapse0x126fe80() {
   return (neuron0x12592f0()*0.00437799);
}

double NNfunction_sb_cLdL::synapse0x126fec0() {
   return (neuron0x1259630()*0.0120115);
}

double NNfunction_sb_cLdL::synapse0x126f950() {
   return (neuron0x1259970()*-0.000314588);
}

double NNfunction_sb_cLdL::synapse0x126f990() {
   return (neuron0x1259ed0()*0.00397881);
}

double NNfunction_sb_cLdL::synapse0x1270010() {
   return (neuron0x125a0f0()*0.0170362);
}

double NNfunction_sb_cLdL::synapse0x1270050() {
   return (neuron0x125a430()*0.00251913);
}

double NNfunction_sb_cLdL::synapse0x1270090() {
   return (neuron0x125a770()*-0.0137523);
}

double NNfunction_sb_cLdL::synapse0x12700d0() {
   return (neuron0x125aab0()*0.00243777);
}

double NNfunction_sb_cLdL::synapse0x1270110() {
   return (neuron0x125adf0()*0.00190671);
}

double NNfunction_sb_cLdL::synapse0x1270150() {
   return (neuron0x125b130()*-0.00388414);
}

double NNfunction_sb_cLdL::synapse0x12704d0() {
   return (neuron0x1256570()*0.020056);
}

double NNfunction_sb_cLdL::synapse0x1270510() {
   return (neuron0x12568b0()*-0.541865);
}

double NNfunction_sb_cLdL::synapse0x1270550() {
   return (neuron0x1256bf0()*-0.205074);
}

double NNfunction_sb_cLdL::synapse0x1270590() {
   return (neuron0x1256f30()*0.703216);
}

double NNfunction_sb_cLdL::synapse0x12705d0() {
   return (neuron0x1257270()*0.0876688);
}

double NNfunction_sb_cLdL::synapse0x1270610() {
   return (neuron0x12575b0()*-0.199715);
}

double NNfunction_sb_cLdL::synapse0x1270650() {
   return (neuron0x12578f0()*-0.128003);
}

double NNfunction_sb_cLdL::synapse0x1270690() {
   return (neuron0x1257c30()*0.277511);
}

double NNfunction_sb_cLdL::synapse0x12706d0() {
   return (neuron0x1257f70()*-0.172691);
}

double NNfunction_sb_cLdL::synapse0x1270710() {
   return (neuron0x12582b0()*0.38607);
}

double NNfunction_sb_cLdL::synapse0x1270750() {
   return (neuron0x12585f0()*-0.677618);
}

double NNfunction_sb_cLdL::synapse0x1270790() {
   return (neuron0x1258930()*0.548304);
}

double NNfunction_sb_cLdL::synapse0x12707d0() {
   return (neuron0x1258c70()*0.417143);
}

double NNfunction_sb_cLdL::synapse0x1270810() {
   return (neuron0x1258fb0()*-0.377169);
}

double NNfunction_sb_cLdL::synapse0x1270850() {
   return (neuron0x12592f0()*-0.712289);
}

double NNfunction_sb_cLdL::synapse0x1270890() {
   return (neuron0x1259630()*-0.333156);
}

double NNfunction_sb_cLdL::synapse0x1270320() {
   return (neuron0x1259970()*0.215902);
}

double NNfunction_sb_cLdL::synapse0x1270360() {
   return (neuron0x1259ed0()*0.421335);
}

double NNfunction_sb_cLdL::synapse0x12709e0() {
   return (neuron0x125a0f0()*-0.0216312);
}

double NNfunction_sb_cLdL::synapse0x1270a20() {
   return (neuron0x125a430()*-0.00357256);
}

double NNfunction_sb_cLdL::synapse0x1270a60() {
   return (neuron0x125a770()*-0.00194028);
}

double NNfunction_sb_cLdL::synapse0x1270aa0() {
   return (neuron0x125aab0()*0.759402);
}

double NNfunction_sb_cLdL::synapse0x1270ae0() {
   return (neuron0x125adf0()*-0.000518817);
}

double NNfunction_sb_cLdL::synapse0x1270b20() {
   return (neuron0x125b130()*-0.0654888);
}

double NNfunction_sb_cLdL::synapse0x1270ea0() {
   return (neuron0x1256570()*-0.0618495);
}

double NNfunction_sb_cLdL::synapse0x1265470() {
   return (neuron0x12568b0()*0.409616);
}

double NNfunction_sb_cLdL::synapse0x12654b0() {
   return (neuron0x1256bf0()*0.296911);
}

double NNfunction_sb_cLdL::synapse0x12654f0() {
   return (neuron0x1256f30()*0.428313);
}

double NNfunction_sb_cLdL::synapse0x1265740() {
   return (neuron0x1257270()*-0.775222);
}

double NNfunction_sb_cLdL::synapse0x1265780() {
   return (neuron0x12575b0()*0.295135);
}

double NNfunction_sb_cLdL::synapse0x12657c0() {
   return (neuron0x12578f0()*-0.216517);
}

double NNfunction_sb_cLdL::synapse0x1265a10() {
   return (neuron0x1257c30()*-0.291089);
}

double NNfunction_sb_cLdL::synapse0x1265a50() {
   return (neuron0x1257f70()*-0.00367704);
}

double NNfunction_sb_cLdL::synapse0x1265ca0() {
   return (neuron0x12582b0()*-0.596582);
}

double NNfunction_sb_cLdL::synapse0x1265ce0() {
   return (neuron0x12585f0()*-0.0136616);
}

double NNfunction_sb_cLdL::synapse0x1265d20() {
   return (neuron0x1258930()*-0.610005);
}

double NNfunction_sb_cLdL::synapse0x1265f70() {
   return (neuron0x1258c70()*-0.905601);
}

double NNfunction_sb_cLdL::synapse0x1265fb0() {
   return (neuron0x1258fb0()*0.281403);
}

double NNfunction_sb_cLdL::synapse0x1266200() {
   return (neuron0x12592f0()*0.464359);
}

double NNfunction_sb_cLdL::synapse0x1266240() {
   return (neuron0x1259630()*0.860456);
}

double NNfunction_sb_cLdL::synapse0x1270cf0() {
   return (neuron0x1259970()*0.599844);
}

double NNfunction_sb_cLdL::synapse0x1270d30() {
   return (neuron0x1259ed0()*-0.268013);
}

double NNfunction_sb_cLdL::synapse0x1266390() {
   return (neuron0x125a0f0()*0.0305215);
}

double NNfunction_sb_cLdL::synapse0x12668a0() {
   return (neuron0x125a430()*-0.336719);
}

double NNfunction_sb_cLdL::synapse0x12668e0() {
   return (neuron0x125a770()*-0.292563);
}

double NNfunction_sb_cLdL::synapse0x1266920() {
   return (neuron0x125aab0()*-0.482991);
}

double NNfunction_sb_cLdL::synapse0x1266b70() {
   return (neuron0x125adf0()*-0.104912);
}

double NNfunction_sb_cLdL::synapse0x1266bb0() {
   return (neuron0x125b130()*-0.0660826);
}

double NNfunction_sb_cLdL::synapse0x1266460() {
   return (neuron0x1256570()*-0.106757);
}

double NNfunction_sb_cLdL::synapse0x12664a0() {
   return (neuron0x12568b0()*0.103113);
}

double NNfunction_sb_cLdL::synapse0x12664e0() {
   return (neuron0x1256bf0()*-0.312631);
}

double NNfunction_sb_cLdL::synapse0x1266520() {
   return (neuron0x1256f30()*1.13808);
}

double NNfunction_sb_cLdL::synapse0x1266ea0() {
   return (neuron0x1257270()*-0.0346258);
}

double NNfunction_sb_cLdL::synapse0x12731f0() {
   return (neuron0x12575b0()*-0.00429394);
}

double NNfunction_sb_cLdL::synapse0x1273230() {
   return (neuron0x12578f0()*0.0974841);
}

double NNfunction_sb_cLdL::synapse0x1273270() {
   return (neuron0x1257c30()*0.0520014);
}

double NNfunction_sb_cLdL::synapse0x12732b0() {
   return (neuron0x1257f70()*0.0510026);
}

double NNfunction_sb_cLdL::synapse0x12732f0() {
   return (neuron0x12582b0()*-0.0548358);
}

double NNfunction_sb_cLdL::synapse0x1273330() {
   return (neuron0x12585f0()*-0.0013583);
}

double NNfunction_sb_cLdL::synapse0x1273370() {
   return (neuron0x1258930()*-0.849092);
}

double NNfunction_sb_cLdL::synapse0x12733b0() {
   return (neuron0x1258c70()*-1.08335);
}

double NNfunction_sb_cLdL::synapse0x12733f0() {
   return (neuron0x1258fb0()*-0.0267861);
}

double NNfunction_sb_cLdL::synapse0x1273430() {
   return (neuron0x12592f0()*-0.242638);
}

double NNfunction_sb_cLdL::synapse0x1273470() {
   return (neuron0x1259630()*-0.150508);
}

double NNfunction_sb_cLdL::synapse0x1266d80() {
   return (neuron0x1259970()*0.0764722);
}

double NNfunction_sb_cLdL::synapse0x1266dc0() {
   return (neuron0x1259ed0()*0.102794);
}

double NNfunction_sb_cLdL::synapse0x12735c0() {
   return (neuron0x125a0f0()*-0.142498);
}

double NNfunction_sb_cLdL::synapse0x1273600() {
   return (neuron0x125a430()*0.143565);
}

double NNfunction_sb_cLdL::synapse0x1273640() {
   return (neuron0x125a770()*0.0932647);
}

double NNfunction_sb_cLdL::synapse0x1273680() {
   return (neuron0x125aab0()*0.0271277);
}

double NNfunction_sb_cLdL::synapse0x12736c0() {
   return (neuron0x125adf0()*0.135029);
}

double NNfunction_sb_cLdL::synapse0x1273700() {
   return (neuron0x125b130()*0.119254);
}

double NNfunction_sb_cLdL::synapse0x1273a80() {
   return (neuron0x1256570()*0.146678);
}

double NNfunction_sb_cLdL::synapse0x1273ac0() {
   return (neuron0x12568b0()*0.0329037);
}

double NNfunction_sb_cLdL::synapse0x1273b00() {
   return (neuron0x1256bf0()*-0.0666281);
}

double NNfunction_sb_cLdL::synapse0x1273b40() {
   return (neuron0x1256f30()*1.16992);
}

double NNfunction_sb_cLdL::synapse0x1273b80() {
   return (neuron0x1257270()*-0.0383134);
}

double NNfunction_sb_cLdL::synapse0x1273bc0() {
   return (neuron0x12575b0()*0.0378962);
}

double NNfunction_sb_cLdL::synapse0x1273c00() {
   return (neuron0x12578f0()*-0.0477146);
}

double NNfunction_sb_cLdL::synapse0x1273c40() {
   return (neuron0x1257c30()*0.0170708);
}

double NNfunction_sb_cLdL::synapse0x1273c80() {
   return (neuron0x1257f70()*0.0396316);
}

double NNfunction_sb_cLdL::synapse0x1273cc0() {
   return (neuron0x12582b0()*0.174334);
}

double NNfunction_sb_cLdL::synapse0x1273d00() {
   return (neuron0x12585f0()*0.0293512);
}

double NNfunction_sb_cLdL::synapse0x1273d40() {
   return (neuron0x1258930()*-0.15439);
}

double NNfunction_sb_cLdL::synapse0x1273d80() {
   return (neuron0x1258c70()*-0.191991);
}

double NNfunction_sb_cLdL::synapse0x1273dc0() {
   return (neuron0x1258fb0()*0.470143);
}

double NNfunction_sb_cLdL::synapse0x1273e00() {
   return (neuron0x12592f0()*-0.0573036);
}

double NNfunction_sb_cLdL::synapse0x1273e40() {
   return (neuron0x1259630()*-0.254391);
}

double NNfunction_sb_cLdL::synapse0x12738d0() {
   return (neuron0x1259970()*0.475655);
}

double NNfunction_sb_cLdL::synapse0x1273910() {
   return (neuron0x1259ed0()*-0.0608607);
}

double NNfunction_sb_cLdL::synapse0x1273f90() {
   return (neuron0x125a0f0()*-0.0728693);
}

double NNfunction_sb_cLdL::synapse0x1273fd0() {
   return (neuron0x125a430()*-0.0387091);
}

double NNfunction_sb_cLdL::synapse0x1274010() {
   return (neuron0x125a770()*0.280049);
}

double NNfunction_sb_cLdL::synapse0x1274050() {
   return (neuron0x125aab0()*0.136034);
}

double NNfunction_sb_cLdL::synapse0x1274090() {
   return (neuron0x125adf0()*0.0498603);
}

double NNfunction_sb_cLdL::synapse0x12740d0() {
   return (neuron0x125b130()*0.0908847);
}

double NNfunction_sb_cLdL::synapse0x1274450() {
   return (neuron0x1256570()*-0.020164);
}

double NNfunction_sb_cLdL::synapse0x1274490() {
   return (neuron0x12568b0()*-0.0074533);
}

double NNfunction_sb_cLdL::synapse0x12744d0() {
   return (neuron0x1256bf0()*-0.0203079);
}

double NNfunction_sb_cLdL::synapse0x1274510() {
   return (neuron0x1256f30()*0.1308);
}

double NNfunction_sb_cLdL::synapse0x1274550() {
   return (neuron0x1257270()*0.0091327);
}

double NNfunction_sb_cLdL::synapse0x1274590() {
   return (neuron0x12575b0()*-0.0203209);
}

double NNfunction_sb_cLdL::synapse0x12745d0() {
   return (neuron0x12578f0()*-0.0089548);
}

double NNfunction_sb_cLdL::synapse0x1274610() {
   return (neuron0x1257c30()*-0.0111591);
}

double NNfunction_sb_cLdL::synapse0x1274650() {
   return (neuron0x1257f70()*-0.0106114);
}

double NNfunction_sb_cLdL::synapse0x1274690() {
   return (neuron0x12582b0()*-0.0104284);
}

double NNfunction_sb_cLdL::synapse0x12746d0() {
   return (neuron0x12585f0()*0.00253225);
}

double NNfunction_sb_cLdL::synapse0x1274710() {
   return (neuron0x1258930()*-0.411156);
}

double NNfunction_sb_cLdL::synapse0x1274750() {
   return (neuron0x1258c70()*-0.515049);
}

double NNfunction_sb_cLdL::synapse0x1274790() {
   return (neuron0x1258fb0()*-0.0313286);
}

double NNfunction_sb_cLdL::synapse0x12747d0() {
   return (neuron0x12592f0()*-0.0304031);
}

double NNfunction_sb_cLdL::synapse0x1274810() {
   return (neuron0x1259630()*-0.0169733);
}

double NNfunction_sb_cLdL::synapse0x12742a0() {
   return (neuron0x1259970()*-0.027192);
}

double NNfunction_sb_cLdL::synapse0x12742e0() {
   return (neuron0x1259ed0()*-0.0148702);
}

double NNfunction_sb_cLdL::synapse0x1274960() {
   return (neuron0x125a0f0()*-0.0193979);
}

double NNfunction_sb_cLdL::synapse0x12749a0() {
   return (neuron0x125a430()*-0.00172328);
}

double NNfunction_sb_cLdL::synapse0x12749e0() {
   return (neuron0x125a770()*-0.00192992);
}

double NNfunction_sb_cLdL::synapse0x1274a20() {
   return (neuron0x125aab0()*-0.00817386);
}

double NNfunction_sb_cLdL::synapse0x1274a60() {
   return (neuron0x125adf0()*0.00902279);
}

double NNfunction_sb_cLdL::synapse0x1274aa0() {
   return (neuron0x125b130()*0.00508262);
}

double NNfunction_sb_cLdL::synapse0x1274e20() {
   return (neuron0x1256570()*-0.504212);
}

double NNfunction_sb_cLdL::synapse0x1274e60() {
   return (neuron0x12568b0()*-0.64671);
}

double NNfunction_sb_cLdL::synapse0x1274ea0() {
   return (neuron0x1256bf0()*-0.543393);
}

double NNfunction_sb_cLdL::synapse0x1274ee0() {
   return (neuron0x1256f30()*-0.71678);
}

double NNfunction_sb_cLdL::synapse0x1274f20() {
   return (neuron0x1257270()*-0.411796);
}

double NNfunction_sb_cLdL::synapse0x1274f60() {
   return (neuron0x12575b0()*0.379689);
}

double NNfunction_sb_cLdL::synapse0x1274fa0() {
   return (neuron0x12578f0()*0.327213);
}

double NNfunction_sb_cLdL::synapse0x1274fe0() {
   return (neuron0x1257c30()*0.657526);
}

double NNfunction_sb_cLdL::synapse0x1275020() {
   return (neuron0x1257f70()*-0.406916);
}

double NNfunction_sb_cLdL::synapse0x1275060() {
   return (neuron0x12582b0()*-0.344724);
}

double NNfunction_sb_cLdL::synapse0x12750a0() {
   return (neuron0x12585f0()*0.35688);
}

double NNfunction_sb_cLdL::synapse0x12750e0() {
   return (neuron0x1258930()*0.150692);
}

double NNfunction_sb_cLdL::synapse0x1275120() {
   return (neuron0x1258c70()*-0.88225);
}

double NNfunction_sb_cLdL::synapse0x1275160() {
   return (neuron0x1258fb0()*-0.077761);
}

double NNfunction_sb_cLdL::synapse0x12751a0() {
   return (neuron0x12592f0()*0.227433);
}

double NNfunction_sb_cLdL::synapse0x12751e0() {
   return (neuron0x1259630()*0.456577);
}

double NNfunction_sb_cLdL::synapse0x1274c70() {
   return (neuron0x1259970()*0.00972517);
}

double NNfunction_sb_cLdL::synapse0x1274cb0() {
   return (neuron0x1259ed0()*0.227131);
}

double NNfunction_sb_cLdL::synapse0x1275330() {
   return (neuron0x125a0f0()*-0.676597);
}

double NNfunction_sb_cLdL::synapse0x1275370() {
   return (neuron0x125a430()*0.343393);
}

double NNfunction_sb_cLdL::synapse0x12753b0() {
   return (neuron0x125a770()*0.490672);
}

double NNfunction_sb_cLdL::synapse0x12753f0() {
   return (neuron0x125aab0()*-0.340696);
}

double NNfunction_sb_cLdL::synapse0x1275430() {
   return (neuron0x125adf0()*-0.364459);
}

double NNfunction_sb_cLdL::synapse0x1275470() {
   return (neuron0x125b130()*0.302342);
}

double NNfunction_sb_cLdL::synapse0x12757f0() {
   return (neuron0x1256570()*0.0159894);
}

double NNfunction_sb_cLdL::synapse0x1275830() {
   return (neuron0x12568b0()*0.0181179);
}

double NNfunction_sb_cLdL::synapse0x1275870() {
   return (neuron0x1256bf0()*-0.00432088);
}

double NNfunction_sb_cLdL::synapse0x12758b0() {
   return (neuron0x1256f30()*-0.631996);
}

double NNfunction_sb_cLdL::synapse0x12758f0() {
   return (neuron0x1257270()*0.0216297);
}

double NNfunction_sb_cLdL::synapse0x1275930() {
   return (neuron0x12575b0()*0.0109859);
}

double NNfunction_sb_cLdL::synapse0x1275970() {
   return (neuron0x12578f0()*0.00640084);
}

double NNfunction_sb_cLdL::synapse0x12759b0() {
   return (neuron0x1257c30()*-0.00694053);
}

double NNfunction_sb_cLdL::synapse0x12759f0() {
   return (neuron0x1257f70()*-0.0153388);
}

double NNfunction_sb_cLdL::synapse0x1275a30() {
   return (neuron0x12582b0()*0.0196036);
}

double NNfunction_sb_cLdL::synapse0x1275a70() {
   return (neuron0x12585f0()*-0.0107442);
}

double NNfunction_sb_cLdL::synapse0x1275ab0() {
   return (neuron0x1258930()*0.0592644);
}

double NNfunction_sb_cLdL::synapse0x1275af0() {
   return (neuron0x1258c70()*0.0924321);
}

double NNfunction_sb_cLdL::synapse0x1275b30() {
   return (neuron0x1258fb0()*0.00992559);
}

double NNfunction_sb_cLdL::synapse0x1275b70() {
   return (neuron0x12592f0()*0.150061);
}

double NNfunction_sb_cLdL::synapse0x1275bb0() {
   return (neuron0x1259630()*0.196625);
}

double NNfunction_sb_cLdL::synapse0x1275640() {
   return (neuron0x1259970()*0.0170197);
}

double NNfunction_sb_cLdL::synapse0x1275680() {
   return (neuron0x1259ed0()*0.129625);
}

double NNfunction_sb_cLdL::synapse0x1275d00() {
   return (neuron0x125a0f0()*0.134497);
}

double NNfunction_sb_cLdL::synapse0x1275d40() {
   return (neuron0x125a430()*-0.055998);
}

double NNfunction_sb_cLdL::synapse0x1275d80() {
   return (neuron0x125a770()*0.00329002);
}

double NNfunction_sb_cLdL::synapse0x1275dc0() {
   return (neuron0x125aab0()*0.0205333);
}

double NNfunction_sb_cLdL::synapse0x1275e00() {
   return (neuron0x125adf0()*-0.00930459);
}

double NNfunction_sb_cLdL::synapse0x1275e40() {
   return (neuron0x125b130()*0.0134698);
}

double NNfunction_sb_cLdL::synapse0x12761c0() {
   return (neuron0x1256570()*0.330052);
}

double NNfunction_sb_cLdL::synapse0x1276200() {
   return (neuron0x12568b0()*-0.138136);
}

double NNfunction_sb_cLdL::synapse0x1276240() {
   return (neuron0x1256bf0()*-0.0933876);
}

double NNfunction_sb_cLdL::synapse0x1276280() {
   return (neuron0x1256f30()*-0.165257);
}

double NNfunction_sb_cLdL::synapse0x12762c0() {
   return (neuron0x1257270()*-0.0945035);
}

double NNfunction_sb_cLdL::synapse0x1276300() {
   return (neuron0x12575b0()*0.304165);
}

double NNfunction_sb_cLdL::synapse0x1276340() {
   return (neuron0x12578f0()*0.269088);
}

double NNfunction_sb_cLdL::synapse0x1276380() {
   return (neuron0x1257c30()*0.0288039);
}

double NNfunction_sb_cLdL::synapse0x12763c0() {
   return (neuron0x1257f70()*-0.981625);
}

double NNfunction_sb_cLdL::synapse0x1276400() {
   return (neuron0x12582b0()*-0.696446);
}

double NNfunction_sb_cLdL::synapse0x1276440() {
   return (neuron0x12585f0()*-0.629497);
}

double NNfunction_sb_cLdL::synapse0x1276480() {
   return (neuron0x1258930()*0.595534);
}

double NNfunction_sb_cLdL::synapse0x12764c0() {
   return (neuron0x1258c70()*-0.028907);
}

double NNfunction_sb_cLdL::synapse0x1276500() {
   return (neuron0x1258fb0()*-0.77782);
}

double NNfunction_sb_cLdL::synapse0x1276540() {
   return (neuron0x12592f0()*-0.183362);
}

double NNfunction_sb_cLdL::synapse0x1276580() {
   return (neuron0x1259630()*0.156557);
}

double NNfunction_sb_cLdL::synapse0x1276010() {
   return (neuron0x1259970()*1.0558);
}

double NNfunction_sb_cLdL::synapse0x1276050() {
   return (neuron0x1259ed0()*0.247113);
}

double NNfunction_sb_cLdL::synapse0x12766d0() {
   return (neuron0x125a0f0()*0.362998);
}

double NNfunction_sb_cLdL::synapse0x1276710() {
   return (neuron0x125a430()*0.309984);
}

double NNfunction_sb_cLdL::synapse0x1276750() {
   return (neuron0x125a770()*0.47517);
}

double NNfunction_sb_cLdL::synapse0x1276790() {
   return (neuron0x125aab0()*0.819826);
}

double NNfunction_sb_cLdL::synapse0x12767d0() {
   return (neuron0x125adf0()*-0.21702);
}

double NNfunction_sb_cLdL::synapse0x1276810() {
   return (neuron0x125b130()*0.434235);
}

double NNfunction_sb_cLdL::synapse0x1276b90() {
   return (neuron0x1256570()*-0.106015);
}

double NNfunction_sb_cLdL::synapse0x1276bd0() {
   return (neuron0x12568b0()*-0.0606776);
}

double NNfunction_sb_cLdL::synapse0x1276c10() {
   return (neuron0x1256bf0()*-0.00360177);
}

double NNfunction_sb_cLdL::synapse0x1276c50() {
   return (neuron0x1256f30()*-0.3417);
}

double NNfunction_sb_cLdL::synapse0x1276c90() {
   return (neuron0x1257270()*-0.116988);
}

double NNfunction_sb_cLdL::synapse0x1276cd0() {
   return (neuron0x12575b0()*0.101739);
}

double NNfunction_sb_cLdL::synapse0x1276d10() {
   return (neuron0x12578f0()*-0.200637);
}

double NNfunction_sb_cLdL::synapse0x1276d50() {
   return (neuron0x1257c30()*-0.0813359);
}

double NNfunction_sb_cLdL::synapse0x1276d90() {
   return (neuron0x1257f70()*0.221405);
}

double NNfunction_sb_cLdL::synapse0x1276dd0() {
   return (neuron0x12582b0()*0.0792499);
}

double NNfunction_sb_cLdL::synapse0x1276e10() {
   return (neuron0x12585f0()*-0.0246793);
}

double NNfunction_sb_cLdL::synapse0x1276e50() {
   return (neuron0x1258930()*-0.204815);
}

double NNfunction_sb_cLdL::synapse0x1276e90() {
   return (neuron0x1258c70()*-0.128858);
}

double NNfunction_sb_cLdL::synapse0x1276ed0() {
   return (neuron0x1258fb0()*0.0165876);
}

double NNfunction_sb_cLdL::synapse0x1276f10() {
   return (neuron0x12592f0()*0.0326356);
}

double NNfunction_sb_cLdL::synapse0x1276f50() {
   return (neuron0x1259630()*-0.162757);
}

double NNfunction_sb_cLdL::synapse0x12769e0() {
   return (neuron0x1259970()*0.208701);
}

double NNfunction_sb_cLdL::synapse0x1276a20() {
   return (neuron0x1259ed0()*-0.073372);
}

double NNfunction_sb_cLdL::synapse0x12770a0() {
   return (neuron0x125a0f0()*-0.344119);
}

double NNfunction_sb_cLdL::synapse0x12770e0() {
   return (neuron0x125a430()*-0.472943);
}

double NNfunction_sb_cLdL::synapse0x1277120() {
   return (neuron0x125a770()*-0.13139);
}

double NNfunction_sb_cLdL::synapse0x1277160() {
   return (neuron0x125aab0()*-0.318642);
}

double NNfunction_sb_cLdL::synapse0x12771a0() {
   return (neuron0x125adf0()*0.0398697);
}

double NNfunction_sb_cLdL::synapse0x12771e0() {
   return (neuron0x125b130()*-0.098299);
}

double NNfunction_sb_cLdL::synapse0x1277560() {
   return (neuron0x1256570()*-0.084668);
}

double NNfunction_sb_cLdL::synapse0x12775a0() {
   return (neuron0x12568b0()*0.368953);
}

double NNfunction_sb_cLdL::synapse0x12775e0() {
   return (neuron0x1256bf0()*0.475874);
}

double NNfunction_sb_cLdL::synapse0x1277620() {
   return (neuron0x1256f30()*-0.883287);
}

double NNfunction_sb_cLdL::synapse0x1277660() {
   return (neuron0x1257270()*0.562303);
}

double NNfunction_sb_cLdL::synapse0x12776a0() {
   return (neuron0x12575b0()*0.05741);
}

double NNfunction_sb_cLdL::synapse0x12776e0() {
   return (neuron0x12578f0()*0.189976);
}

double NNfunction_sb_cLdL::synapse0x1277720() {
   return (neuron0x1257c30()*-0.215237);
}

double NNfunction_sb_cLdL::synapse0x1277760() {
   return (neuron0x1257f70()*-0.388332);
}

double NNfunction_sb_cLdL::synapse0x12777a0() {
   return (neuron0x12582b0()*-0.149452);
}

double NNfunction_sb_cLdL::synapse0x12777e0() {
   return (neuron0x12585f0()*0.140206);
}

double NNfunction_sb_cLdL::synapse0x1277820() {
   return (neuron0x1258930()*-0.32737);
}

double NNfunction_sb_cLdL::synapse0x1277860() {
   return (neuron0x1258c70()*0.00928645);
}

double NNfunction_sb_cLdL::synapse0x12778a0() {
   return (neuron0x1258fb0()*-0.0504127);
}

double NNfunction_sb_cLdL::synapse0x12778e0() {
   return (neuron0x12592f0()*-0.0992671);
}

double NNfunction_sb_cLdL::synapse0x1277920() {
   return (neuron0x1259630()*0.0889978);
}

double NNfunction_sb_cLdL::synapse0x12773b0() {
   return (neuron0x1259970()*-0.050537);
}

double NNfunction_sb_cLdL::synapse0x12773f0() {
   return (neuron0x1259ed0()*-0.0277798);
}

double NNfunction_sb_cLdL::synapse0x1277a70() {
   return (neuron0x125a0f0()*0.974939);
}

double NNfunction_sb_cLdL::synapse0x1277ab0() {
   return (neuron0x125a430()*0.688235);
}

double NNfunction_sb_cLdL::synapse0x1277af0() {
   return (neuron0x125a770()*-0.124801);
}

double NNfunction_sb_cLdL::synapse0x1277b30() {
   return (neuron0x125aab0()*-0.154425);
}

double NNfunction_sb_cLdL::synapse0x1277b70() {
   return (neuron0x125adf0()*0.368996);
}

double NNfunction_sb_cLdL::synapse0x1277bb0() {
   return (neuron0x125b130()*-0.616425);
}

double NNfunction_sb_cLdL::synapse0x1260660() {
   return (neuron0x1256570()*-0.0145298);
}

double NNfunction_sb_cLdL::synapse0x12606a0() {
   return (neuron0x12568b0()*-0.0223666);
}

double NNfunction_sb_cLdL::synapse0x12606e0() {
   return (neuron0x1256bf0()*0.0277981);
}

double NNfunction_sb_cLdL::synapse0x1260720() {
   return (neuron0x1256f30()*0.101383);
}

double NNfunction_sb_cLdL::synapse0x1260760() {
   return (neuron0x1257270()*0.0478623);
}

double NNfunction_sb_cLdL::synapse0x12607a0() {
   return (neuron0x12575b0()*-0.0385521);
}

double NNfunction_sb_cLdL::synapse0x12607e0() {
   return (neuron0x12578f0()*-0.0077341);
}

double NNfunction_sb_cLdL::synapse0x1260820() {
   return (neuron0x1257c30()*0.0094652);
}

double NNfunction_sb_cLdL::synapse0x1278340() {
   return (neuron0x1257f70()*-0.0235969);
}

double NNfunction_sb_cLdL::synapse0x1278380() {
   return (neuron0x12582b0()*-0.0263288);
}

double NNfunction_sb_cLdL::synapse0x12783c0() {
   return (neuron0x12585f0()*-0.00825703);
}

double NNfunction_sb_cLdL::synapse0x1278400() {
   return (neuron0x1258930()*0.289445);
}

double NNfunction_sb_cLdL::synapse0x1278440() {
   return (neuron0x1258c70()*-1.16647);
}

double NNfunction_sb_cLdL::synapse0x1278480() {
   return (neuron0x1258fb0()*-0.000563428);
}

double NNfunction_sb_cLdL::synapse0x12784c0() {
   return (neuron0x12592f0()*-0.0227503);
}

double NNfunction_sb_cLdL::synapse0x1278500() {
   return (neuron0x1259630()*-0.0171791);
}

double NNfunction_sb_cLdL::synapse0x1277d80() {
   return (neuron0x1259970()*0.0266817);
}

double NNfunction_sb_cLdL::synapse0x1277dc0() {
   return (neuron0x1259ed0()*-0.0264272);
}

double NNfunction_sb_cLdL::synapse0x1278650() {
   return (neuron0x125a0f0()*-0.0596011);
}

double NNfunction_sb_cLdL::synapse0x1278690() {
   return (neuron0x125a430()*0.00191011);
}

double NNfunction_sb_cLdL::synapse0x12786d0() {
   return (neuron0x125a770()*0.0146921);
}

double NNfunction_sb_cLdL::synapse0x1278710() {
   return (neuron0x125aab0()*0.00932192);
}

double NNfunction_sb_cLdL::synapse0x1278750() {
   return (neuron0x125adf0()*0.00175864);
}

double NNfunction_sb_cLdL::synapse0x1278790() {
   return (neuron0x125b130()*0.0172662);
}

double NNfunction_sb_cLdL::synapse0x1278b10() {
   return (neuron0x1256570()*0.198465);
}

double NNfunction_sb_cLdL::synapse0x1278b50() {
   return (neuron0x12568b0()*-0.290682);
}

double NNfunction_sb_cLdL::synapse0x1278b90() {
   return (neuron0x1256bf0()*0.0583906);
}

double NNfunction_sb_cLdL::synapse0x1278bd0() {
   return (neuron0x1256f30()*0.288511);
}

double NNfunction_sb_cLdL::synapse0x1278c10() {
   return (neuron0x1257270()*0.572165);
}

double NNfunction_sb_cLdL::synapse0x1278c50() {
   return (neuron0x12575b0()*-0.0579902);
}

double NNfunction_sb_cLdL::synapse0x1278c90() {
   return (neuron0x12578f0()*-0.166347);
}

double NNfunction_sb_cLdL::synapse0x1278cd0() {
   return (neuron0x1257c30()*0.204328);
}

double NNfunction_sb_cLdL::synapse0x1278d10() {
   return (neuron0x1257f70()*-0.0446659);
}

double NNfunction_sb_cLdL::synapse0x1278d50() {
   return (neuron0x12582b0()*-0.0825206);
}

double NNfunction_sb_cLdL::synapse0x1278d90() {
   return (neuron0x12585f0()*0.0300758);
}

double NNfunction_sb_cLdL::synapse0x1278dd0() {
   return (neuron0x1258930()*-0.299675);
}

double NNfunction_sb_cLdL::synapse0x1278e10() {
   return (neuron0x1258c70()*-0.00224498);
}

double NNfunction_sb_cLdL::synapse0x1278e50() {
   return (neuron0x1258fb0()*0.496371);
}

double NNfunction_sb_cLdL::synapse0x1278e90() {
   return (neuron0x12592f0()*-0.344351);
}

double NNfunction_sb_cLdL::synapse0x1278ed0() {
   return (neuron0x1259630()*0.662099);
}

double NNfunction_sb_cLdL::synapse0x1278960() {
   return (neuron0x1259970()*-0.0123731);
}

double NNfunction_sb_cLdL::synapse0x12789a0() {
   return (neuron0x1259ed0()*-0.648839);
}

double NNfunction_sb_cLdL::synapse0x1279020() {
   return (neuron0x125a0f0()*-0.486992);
}

double NNfunction_sb_cLdL::synapse0x1279060() {
   return (neuron0x125a430()*-0.320774);
}

double NNfunction_sb_cLdL::synapse0x12790a0() {
   return (neuron0x125a770()*-0.215624);
}

double NNfunction_sb_cLdL::synapse0x12790e0() {
   return (neuron0x125aab0()*-0.199101);
}

double NNfunction_sb_cLdL::synapse0x1279120() {
   return (neuron0x125adf0()*0.395837);
}

double NNfunction_sb_cLdL::synapse0x1279160() {
   return (neuron0x125b130()*0.598444);
}

double NNfunction_sb_cLdL::synapse0x12794e0() {
   return (neuron0x1256570()*-0.0118041);
}

double NNfunction_sb_cLdL::synapse0x1279520() {
   return (neuron0x12568b0()*0.0134156);
}

double NNfunction_sb_cLdL::synapse0x1279560() {
   return (neuron0x1256bf0()*-0.0160163);
}

double NNfunction_sb_cLdL::synapse0x12795a0() {
   return (neuron0x1256f30()*-2.48777);
}

double NNfunction_sb_cLdL::synapse0x12795e0() {
   return (neuron0x1257270()*0.0395399);
}

double NNfunction_sb_cLdL::synapse0x1279620() {
   return (neuron0x12575b0()*0.0156931);
}

double NNfunction_sb_cLdL::synapse0x1279660() {
   return (neuron0x12578f0()*-0.00795364);
}

double NNfunction_sb_cLdL::synapse0x12796a0() {
   return (neuron0x1257c30()*-0.0428591);
}

double NNfunction_sb_cLdL::synapse0x12796e0() {
   return (neuron0x1257f70()*-0.0211986);
}

double NNfunction_sb_cLdL::synapse0x1279720() {
   return (neuron0x12582b0()*0.0192603);
}

double NNfunction_sb_cLdL::synapse0x1279760() {
   return (neuron0x12585f0()*-0.0296276);
}

double NNfunction_sb_cLdL::synapse0x12797a0() {
   return (neuron0x1258930()*-0.0316442);
}

double NNfunction_sb_cLdL::synapse0x12797e0() {
   return (neuron0x1258c70()*0.01514);
}

double NNfunction_sb_cLdL::synapse0x1279820() {
   return (neuron0x1258fb0()*0.037191);
}

double NNfunction_sb_cLdL::synapse0x1279860() {
   return (neuron0x12592f0()*0.0336582);
}

double NNfunction_sb_cLdL::synapse0x12798a0() {
   return (neuron0x1259630()*0.0840369);
}

double NNfunction_sb_cLdL::synapse0x1279330() {
   return (neuron0x1259970()*0.0566702);
}

double NNfunction_sb_cLdL::synapse0x1279370() {
   return (neuron0x1259ed0()*-0.00194345);
}

double NNfunction_sb_cLdL::synapse0x1269ea0() {
   return (neuron0x125a0f0()*0.0152322);
}

double NNfunction_sb_cLdL::synapse0x1269ee0() {
   return (neuron0x125a430()*-0.076883);
}

double NNfunction_sb_cLdL::synapse0x1269f20() {
   return (neuron0x125a770()*0.00768315);
}

double NNfunction_sb_cLdL::synapse0x1269f60() {
   return (neuron0x125aab0()*0.00947363);
}

double NNfunction_sb_cLdL::synapse0x1269fa0() {
   return (neuron0x125adf0()*-0.0124475);
}

double NNfunction_sb_cLdL::synapse0x1269fe0() {
   return (neuron0x125b130()*0.036986);
}

double NNfunction_sb_cLdL::synapse0x126a360() {
   return (neuron0x1256570()*0.0176028);
}

double NNfunction_sb_cLdL::synapse0x126a3a0() {
   return (neuron0x12568b0()*-0.122575);
}

double NNfunction_sb_cLdL::synapse0x126a3e0() {
   return (neuron0x1256bf0()*0.120966);
}

double NNfunction_sb_cLdL::synapse0x126a420() {
   return (neuron0x1256f30()*-0.719803);
}

double NNfunction_sb_cLdL::synapse0x126a460() {
   return (neuron0x1257270()*0.117209);
}

double NNfunction_sb_cLdL::synapse0x126a4a0() {
   return (neuron0x12575b0()*-0.0789672);
}

double NNfunction_sb_cLdL::synapse0x126a4e0() {
   return (neuron0x12578f0()*-0.0931072);
}

double NNfunction_sb_cLdL::synapse0x126a520() {
   return (neuron0x1257c30()*-0.0457181);
}

double NNfunction_sb_cLdL::synapse0x126a560() {
   return (neuron0x1257f70()*-0.0658245);
}

double NNfunction_sb_cLdL::synapse0x126a5a0() {
   return (neuron0x12582b0()*-0.0490413);
}

double NNfunction_sb_cLdL::synapse0x126a5e0() {
   return (neuron0x12585f0()*0.0161533);
}

double NNfunction_sb_cLdL::synapse0x126a620() {
   return (neuron0x1258930()*0.689566);
}

double NNfunction_sb_cLdL::synapse0x126a660() {
   return (neuron0x1258c70()*1.00263);
}

double NNfunction_sb_cLdL::synapse0x126a6a0() {
   return (neuron0x1258fb0()*-0.0055801);
}

double NNfunction_sb_cLdL::synapse0x126a6e0() {
   return (neuron0x12592f0()*0.157251);
}

double NNfunction_sb_cLdL::synapse0x126a720() {
   return (neuron0x1259630()*0.0861276);
}

double NNfunction_sb_cLdL::synapse0x126a1b0() {
   return (neuron0x1259970()*-0.0484009);
}

double NNfunction_sb_cLdL::synapse0x126a1f0() {
   return (neuron0x1259ed0()*-0.199302);
}

double NNfunction_sb_cLdL::synapse0x126a870() {
   return (neuron0x125a0f0()*0.018);
}

double NNfunction_sb_cLdL::synapse0x126a8b0() {
   return (neuron0x125a430()*-0.129412);
}

double NNfunction_sb_cLdL::synapse0x126a8f0() {
   return (neuron0x125a770()*-0.10477);
}

double NNfunction_sb_cLdL::synapse0x126a930() {
   return (neuron0x125aab0()*-0.0171955);
}

double NNfunction_sb_cLdL::synapse0x126a970() {
   return (neuron0x125adf0()*-0.129915);
}

double NNfunction_sb_cLdL::synapse0x126a9b0() {
   return (neuron0x125b130()*-0.0806826);
}

double NNfunction_sb_cLdL::synapse0x126ad30() {
   return (neuron0x1256570()*0.294493);
}

double NNfunction_sb_cLdL::synapse0x126ad70() {
   return (neuron0x12568b0()*-0.125669);
}

double NNfunction_sb_cLdL::synapse0x126adb0() {
   return (neuron0x1256bf0()*0.118087);
}

double NNfunction_sb_cLdL::synapse0x126adf0() {
   return (neuron0x1256f30()*-0.3377);
}

double NNfunction_sb_cLdL::synapse0x126ae30() {
   return (neuron0x1257270()*-0.135759);
}

double NNfunction_sb_cLdL::synapse0x126ae70() {
   return (neuron0x12575b0()*-0.755066);
}

double NNfunction_sb_cLdL::synapse0x126aeb0() {
   return (neuron0x12578f0()*-0.402226);
}

double NNfunction_sb_cLdL::synapse0x126aef0() {
   return (neuron0x1257c30()*0.497084);
}

double NNfunction_sb_cLdL::synapse0x126af30() {
   return (neuron0x1257f70()*-0.11463);
}

double NNfunction_sb_cLdL::synapse0x126af70() {
   return (neuron0x12582b0()*0.197904);
}

double NNfunction_sb_cLdL::synapse0x126afb0() {
   return (neuron0x12585f0()*-0.0118861);
}

double NNfunction_sb_cLdL::synapse0x126aff0() {
   return (neuron0x1258930()*-0.189405);
}

double NNfunction_sb_cLdL::synapse0x126b030() {
   return (neuron0x1258c70()*0.096421);
}

double NNfunction_sb_cLdL::synapse0x126b070() {
   return (neuron0x1258fb0()*0.594587);
}

double NNfunction_sb_cLdL::synapse0x126b0b0() {
   return (neuron0x12592f0()*0.638746);
}

double NNfunction_sb_cLdL::synapse0x126b0f0() {
   return (neuron0x1259630()*0.598891);
}

double NNfunction_sb_cLdL::synapse0x126ab80() {
   return (neuron0x1259970()*0.350769);
}

double NNfunction_sb_cLdL::synapse0x126abc0() {
   return (neuron0x1259ed0()*-0.364858);
}

double NNfunction_sb_cLdL::synapse0x126b240() {
   return (neuron0x125a0f0()*0.284615);
}

double NNfunction_sb_cLdL::synapse0x126b280() {
   return (neuron0x125a430()*0.42018);
}

double NNfunction_sb_cLdL::synapse0x126b2c0() {
   return (neuron0x125a770()*0.537656);
}

double NNfunction_sb_cLdL::synapse0x126b300() {
   return (neuron0x125aab0()*-0.0162138);
}

double NNfunction_sb_cLdL::synapse0x126b340() {
   return (neuron0x125adf0()*-0.888843);
}

double NNfunction_sb_cLdL::synapse0x126b380() {
   return (neuron0x125b130()*0.194744);
}

double NNfunction_sb_cLdL::synapse0x126b700() {
   return (neuron0x1256570()*-0.358507);
}

double NNfunction_sb_cLdL::synapse0x126b740() {
   return (neuron0x12568b0()*-0.362199);
}

double NNfunction_sb_cLdL::synapse0x126b780() {
   return (neuron0x1256bf0()*-0.833803);
}

double NNfunction_sb_cLdL::synapse0x126b7c0() {
   return (neuron0x1256f30()*0.80143);
}

double NNfunction_sb_cLdL::synapse0x126b800() {
   return (neuron0x1257270()*-0.309132);
}

double NNfunction_sb_cLdL::synapse0x126b840() {
   return (neuron0x12575b0()*0.534632);
}

double NNfunction_sb_cLdL::synapse0x126b880() {
   return (neuron0x12578f0()*-0.0814361);
}

double NNfunction_sb_cLdL::synapse0x126b8c0() {
   return (neuron0x1257c30()*-0.224571);
}

double NNfunction_sb_cLdL::synapse0x126b900() {
   return (neuron0x1257f70()*0.208486);
}

double NNfunction_sb_cLdL::synapse0x126b940() {
   return (neuron0x12582b0()*0.469194);
}

double NNfunction_sb_cLdL::synapse0x126b980() {
   return (neuron0x12585f0()*-0.12584);
}

double NNfunction_sb_cLdL::synapse0x126b9c0() {
   return (neuron0x1258930()*-0.0471235);
}

double NNfunction_sb_cLdL::synapse0x126ba00() {
   return (neuron0x1258c70()*0.709746);
}

double NNfunction_sb_cLdL::synapse0x126ba40() {
   return (neuron0x1258fb0()*0.115895);
}

double NNfunction_sb_cLdL::synapse0x126ba80() {
   return (neuron0x12592f0()*0.477109);
}

double NNfunction_sb_cLdL::synapse0x126bac0() {
   return (neuron0x1259630()*0.695897);
}

double NNfunction_sb_cLdL::synapse0x126b550() {
   return (neuron0x1259970()*-0.0353198);
}

double NNfunction_sb_cLdL::synapse0x126b590() {
   return (neuron0x1259ed0()*-0.0714512);
}

double NNfunction_sb_cLdL::synapse0x126bc10() {
   return (neuron0x125a0f0()*0.448728);
}

double NNfunction_sb_cLdL::synapse0x126bc50() {
   return (neuron0x125a430()*-0.508919);
}

double NNfunction_sb_cLdL::synapse0x126bc90() {
   return (neuron0x125a770()*0.0207424);
}

double NNfunction_sb_cLdL::synapse0x126bcd0() {
   return (neuron0x125aab0()*-0.175335);
}

double NNfunction_sb_cLdL::synapse0x126bd10() {
   return (neuron0x125adf0()*0.019562);
}

double NNfunction_sb_cLdL::synapse0x126bd50() {
   return (neuron0x125b130()*-0.0477723);
}

double NNfunction_sb_cLdL::synapse0x127dc20() {
   return (neuron0x1256570()*0.00149078);
}

double NNfunction_sb_cLdL::synapse0x127dc60() {
   return (neuron0x12568b0()*0.00631315);
}

double NNfunction_sb_cLdL::synapse0x127dca0() {
   return (neuron0x1256bf0()*-0.0629644);
}

double NNfunction_sb_cLdL::synapse0x127dce0() {
   return (neuron0x1256f30()*-0.0111381);
}

double NNfunction_sb_cLdL::synapse0x127dd20() {
   return (neuron0x1257270()*-0.0148698);
}

double NNfunction_sb_cLdL::synapse0x127dd60() {
   return (neuron0x12575b0()*-0.0276563);
}

double NNfunction_sb_cLdL::synapse0x127dda0() {
   return (neuron0x12578f0()*-0.00577119);
}

double NNfunction_sb_cLdL::synapse0x127dde0() {
   return (neuron0x1257c30()*-0.0082096);
}

double NNfunction_sb_cLdL::synapse0x127de20() {
   return (neuron0x1257f70()*0.0207167);
}

double NNfunction_sb_cLdL::synapse0x127de60() {
   return (neuron0x12582b0()*0.018926);
}

double NNfunction_sb_cLdL::synapse0x127dea0() {
   return (neuron0x12585f0()*0.0360002);
}

double NNfunction_sb_cLdL::synapse0x127dee0() {
   return (neuron0x1258930()*-1.61585);
}

double NNfunction_sb_cLdL::synapse0x127df20() {
   return (neuron0x1258c70()*0.592501);
}

double NNfunction_sb_cLdL::synapse0x127df60() {
   return (neuron0x1258fb0()*-0.0260199);
}

double NNfunction_sb_cLdL::synapse0x127dfa0() {
   return (neuron0x12592f0()*-0.0112067);
}

double NNfunction_sb_cLdL::synapse0x127dfe0() {
   return (neuron0x1259630()*-0.0271709);
}

double NNfunction_sb_cLdL::synapse0x126bd90() {
   return (neuron0x1259970()*-0.000622258);
}

double NNfunction_sb_cLdL::synapse0x126bdd0() {
   return (neuron0x1259ed0()*-0.00207589);
}

double NNfunction_sb_cLdL::synapse0x127e130() {
   return (neuron0x125a0f0()*0.0464477);
}

double NNfunction_sb_cLdL::synapse0x127e170() {
   return (neuron0x125a430()*-0.0140876);
}

double NNfunction_sb_cLdL::synapse0x127e1b0() {
   return (neuron0x125a770()*0.0493125);
}

double NNfunction_sb_cLdL::synapse0x127e1f0() {
   return (neuron0x125aab0()*0.0524965);
}

double NNfunction_sb_cLdL::synapse0x127e230() {
   return (neuron0x125adf0()*0.0124083);
}

double NNfunction_sb_cLdL::synapse0x127e270() {
   return (neuron0x125b130()*-0.030802);
}

double NNfunction_sb_cLdL::synapse0x127e5f0() {
   return (neuron0x1256570()*0.00186806);
}

double NNfunction_sb_cLdL::synapse0x127e630() {
   return (neuron0x12568b0()*-0.00983953);
}

double NNfunction_sb_cLdL::synapse0x127e670() {
   return (neuron0x1256bf0()*-0.0167086);
}

double NNfunction_sb_cLdL::synapse0x127e6b0() {
   return (neuron0x1256f30()*3.12146);
}

double NNfunction_sb_cLdL::synapse0x127e6f0() {
   return (neuron0x1257270()*0.00605476);
}

double NNfunction_sb_cLdL::synapse0x127e730() {
   return (neuron0x12575b0()*-0.00151587);
}

double NNfunction_sb_cLdL::synapse0x127e770() {
   return (neuron0x12578f0()*0.00819686);
}

double NNfunction_sb_cLdL::synapse0x127e7b0() {
   return (neuron0x1257c30()*-0.00594183);
}

double NNfunction_sb_cLdL::synapse0x127e7f0() {
   return (neuron0x1257f70()*-0.0247743);
}

double NNfunction_sb_cLdL::synapse0x127e830() {
   return (neuron0x12582b0()*-0.01576);
}

double NNfunction_sb_cLdL::synapse0x127e870() {
   return (neuron0x12585f0()*-0.000631457);
}

double NNfunction_sb_cLdL::synapse0x127e8b0() {
   return (neuron0x1258930()*0.0778234);
}

double NNfunction_sb_cLdL::synapse0x127e8f0() {
   return (neuron0x1258c70()*0.0861249);
}

double NNfunction_sb_cLdL::synapse0x127e930() {
   return (neuron0x1258fb0()*-0.0157982);
}

double NNfunction_sb_cLdL::synapse0x127e970() {
   return (neuron0x12592f0()*-0.0298911);
}

double NNfunction_sb_cLdL::synapse0x127e9b0() {
   return (neuron0x1259630()*-0.0294459);
}

double NNfunction_sb_cLdL::synapse0x127e440() {
   return (neuron0x1259970()*-0.011115);
}

double NNfunction_sb_cLdL::synapse0x127e480() {
   return (neuron0x1259ed0()*-0.0287752);
}

double NNfunction_sb_cLdL::synapse0x127eb00() {
   return (neuron0x125a0f0()*-0.0408128);
}

double NNfunction_sb_cLdL::synapse0x127eb40() {
   return (neuron0x125a430()*0.00821207);
}

double NNfunction_sb_cLdL::synapse0x127eb80() {
   return (neuron0x125a770()*-0.0170922);
}

double NNfunction_sb_cLdL::synapse0x127ebc0() {
   return (neuron0x125aab0()*0.00520898);
}

double NNfunction_sb_cLdL::synapse0x127ec00() {
   return (neuron0x125adf0()*-0.0164163);
}

double NNfunction_sb_cLdL::synapse0x127ec40() {
   return (neuron0x125b130()*-0.00568487);
}

double NNfunction_sb_cLdL::synapse0x127efc0() {
   return (neuron0x1256570()*-0.516896);
}

double NNfunction_sb_cLdL::synapse0x127f000() {
   return (neuron0x12568b0()*0.606425);
}

double NNfunction_sb_cLdL::synapse0x127f040() {
   return (neuron0x1256bf0()*0.164048);
}

double NNfunction_sb_cLdL::synapse0x127f080() {
   return (neuron0x1256f30()*1.19388);
}

double NNfunction_sb_cLdL::synapse0x127f0c0() {
   return (neuron0x1257270()*0.237097);
}

double NNfunction_sb_cLdL::synapse0x127f100() {
   return (neuron0x12575b0()*0.694623);
}

double NNfunction_sb_cLdL::synapse0x127f140() {
   return (neuron0x12578f0()*0.513832);
}

double NNfunction_sb_cLdL::synapse0x127f180() {
   return (neuron0x1257c30()*0.0398584);
}

double NNfunction_sb_cLdL::synapse0x127f1c0() {
   return (neuron0x1257f70()*0.247926);
}

double NNfunction_sb_cLdL::synapse0x127f200() {
   return (neuron0x12582b0()*0.415294);
}

double NNfunction_sb_cLdL::synapse0x127f240() {
   return (neuron0x12585f0()*0.374436);
}

double NNfunction_sb_cLdL::synapse0x127f280() {
   return (neuron0x1258930()*-1.11895);
}

double NNfunction_sb_cLdL::synapse0x127f2c0() {
   return (neuron0x1258c70()*-0.903388);
}

double NNfunction_sb_cLdL::synapse0x127f300() {
   return (neuron0x1258fb0()*0.0291195);
}

double NNfunction_sb_cLdL::synapse0x127f340() {
   return (neuron0x12592f0()*-0.17131);
}

double NNfunction_sb_cLdL::synapse0x127f380() {
   return (neuron0x1259630()*0.695251);
}

double NNfunction_sb_cLdL::synapse0x127ee10() {
   return (neuron0x1259970()*-0.262953);
}

double NNfunction_sb_cLdL::synapse0x127ee50() {
   return (neuron0x1259ed0()*0.338741);
}

double NNfunction_sb_cLdL::synapse0x127f4d0() {
   return (neuron0x125a0f0()*0.642601);
}

double NNfunction_sb_cLdL::synapse0x127f510() {
   return (neuron0x125a430()*0.333015);
}

double NNfunction_sb_cLdL::synapse0x127f550() {
   return (neuron0x125a770()*0.382953);
}

double NNfunction_sb_cLdL::synapse0x127f590() {
   return (neuron0x125aab0()*-0.582805);
}

double NNfunction_sb_cLdL::synapse0x127f5d0() {
   return (neuron0x125adf0()*-0.0404066);
}

double NNfunction_sb_cLdL::synapse0x127f610() {
   return (neuron0x125b130()*-0.229706);
}

double NNfunction_sb_cLdL::synapse0x127f990() {
   return (neuron0x1256570()*0.0530499);
}

double NNfunction_sb_cLdL::synapse0x127f9d0() {
   return (neuron0x12568b0()*0.104598);
}

double NNfunction_sb_cLdL::synapse0x127fa10() {
   return (neuron0x1256bf0()*0.1311);
}

double NNfunction_sb_cLdL::synapse0x127fa50() {
   return (neuron0x1256f30()*0.0138022);
}

double NNfunction_sb_cLdL::synapse0x127fa90() {
   return (neuron0x1257270()*0.0199124);
}

double NNfunction_sb_cLdL::synapse0x127fad0() {
   return (neuron0x12575b0()*0.0922297);
}

double NNfunction_sb_cLdL::synapse0x127fb10() {
   return (neuron0x12578f0()*0.0338112);
}

double NNfunction_sb_cLdL::synapse0x127fb50() {
   return (neuron0x1257c30()*0.0229121);
}

double NNfunction_sb_cLdL::synapse0x127fb90() {
   return (neuron0x1257f70()*-0.00201712);
}

double NNfunction_sb_cLdL::synapse0x127fbd0() {
   return (neuron0x12582b0()*-0.0536784);
}

double NNfunction_sb_cLdL::synapse0x127fc10() {
   return (neuron0x12585f0()*-0.00556325);
}

double NNfunction_sb_cLdL::synapse0x127fc50() {
   return (neuron0x1258930()*0.554139);
}

double NNfunction_sb_cLdL::synapse0x127fc90() {
   return (neuron0x1258c70()*-0.273917);
}

double NNfunction_sb_cLdL::synapse0x127fcd0() {
   return (neuron0x1258fb0()*0.014347);
}

double NNfunction_sb_cLdL::synapse0x127fd10() {
   return (neuron0x12592f0()*0.0859203);
}

double NNfunction_sb_cLdL::synapse0x127fd50() {
   return (neuron0x1259630()*0.0405712);
}

double NNfunction_sb_cLdL::synapse0x127f7e0() {
   return (neuron0x1259970()*-0.0735344);
}

double NNfunction_sb_cLdL::synapse0x127f820() {
   return (neuron0x1259ed0()*0.0108726);
}

double NNfunction_sb_cLdL::synapse0x127fea0() {
   return (neuron0x125a0f0()*-0.037364);
}

double NNfunction_sb_cLdL::synapse0x127fee0() {
   return (neuron0x125a430()*0.00602752);
}

double NNfunction_sb_cLdL::synapse0x127ff20() {
   return (neuron0x125a770()*-0.100923);
}

double NNfunction_sb_cLdL::synapse0x127ff60() {
   return (neuron0x125aab0()*-0.113765);
}

double NNfunction_sb_cLdL::synapse0x127ffa0() {
   return (neuron0x125adf0()*0.0102581);
}

double NNfunction_sb_cLdL::synapse0x127ffe0() {
   return (neuron0x125b130()*-0.0270187);
}

double NNfunction_sb_cLdL::synapse0x125c580() {
   return (neuron0x125b5d0()*-0.829808);
}

double NNfunction_sb_cLdL::synapse0x125c5c0() {
   return (neuron0x125bee0()*0.865219);
}

double NNfunction_sb_cLdL::synapse0x125da90() {
   return (neuron0x125c9c0()*0.838615);
}

double NNfunction_sb_cLdL::synapse0x125dad0() {
   return (neuron0x1016250()*-1.24277);
}

double NNfunction_sb_cLdL::synapse0x125e460() {
   return (neuron0x125d7e0()*0.910321);
}

double NNfunction_sb_cLdL::synapse0x125e4a0() {
   return (neuron0x125e1b0()*0.106002);
}

double NNfunction_sb_cLdL::synapse0x125f230() {
   return (neuron0x125ef80()*-0.894577);
}

double NNfunction_sb_cLdL::synapse0x125f270() {
   return (neuron0x125f950()*0.767417);
}

double NNfunction_sb_cLdL::synapse0x125fc00() {
   return (neuron0x1260320()*0.587466);
}

double NNfunction_sb_cLdL::synapse0x125fc40() {
   return (neuron0x1260e00()*0.872304);
}

double NNfunction_sb_cLdL::synapse0x12605d0() {
   return (neuron0x12617d0()*-0.0988468);
}

double NNfunction_sb_cLdL::synapse0x1260610() {
   return (neuron0x125e8b0()*-1.65438);
}

double NNfunction_sb_cLdL::synapse0x12610b0() {
   return (neuron0x1263380()*0.214512);
}

double NNfunction_sb_cLdL::synapse0x12610f0() {
   return (neuron0x1263d50()*-0.513193);
}

double NNfunction_sb_cLdL::synapse0x1261a80() {
   return (neuron0x1264720()*-0.561978);
}

double NNfunction_sb_cLdL::synapse0x1261ac0() {
   return (neuron0x12650f0()*-0.903115);
}

double NNfunction_sb_cLdL::synapse0x125eb60() {
   return (neuron0x1266f00()*-0.877307);
}

double NNfunction_sb_cLdL::synapse0x125eba0() {
   return (neuron0x12671e0()*1.26145);
}

double NNfunction_sb_cLdL::synapse0x1263630() {
   return (neuron0x1267bb0()*-0.375013);
}

double NNfunction_sb_cLdL::synapse0x1263670() {
   return (neuron0x1268580()*0.412648);
}

double NNfunction_sb_cLdL::synapse0x1264000() {
   return (neuron0x1268f50()*-0.765775);
}

double NNfunction_sb_cLdL::synapse0x1264040() {
   return (neuron0x1269920()*1.1999);
}

double NNfunction_sb_cLdL::synapse0x12649d0() {
   return (neuron0x1262470()*-0.79107);
}

double NNfunction_sb_cLdL::synapse0x1264a10() {
   return (neuron0x1262e40()*0.550563);
}

double NNfunction_sb_cLdL::synapse0x12653a0() {
   return (neuron0x126c6b0()*0.132894);
}

double NNfunction_sb_cLdL::synapse0x12653e0() {
   return (neuron0x126d080()*1.01233);
}

double NNfunction_sb_cLdL::synapse0x1259510() {
   return (neuron0x126da50()*1.03594);
}

double NNfunction_sb_cLdL::synapse0x1259550() {
   return (neuron0x126e420()*-5.04548);
}

double NNfunction_sb_cLdL::synapse0x1267490() {
   return (neuron0x126edf0()*1.84493);
}

double NNfunction_sb_cLdL::synapse0x12674d0() {
   return (neuron0x126f7c0()*0.657874);
}

double NNfunction_sb_cLdL::synapse0x1267e60() {
   return (neuron0x1270190()*0.71546);
}

double NNfunction_sb_cLdL::synapse0x1267ea0() {
   return (neuron0x1270b60()*0.772743);
}

double NNfunction_sb_cLdL::synapse0x1268830() {
   return (neuron0x1266bf0()*-0.248548);
}

double NNfunction_sb_cLdL::synapse0x1268870() {
   return (neuron0x1273740()*0.0635936);
}

double NNfunction_sb_cLdL::synapse0x1269200() {
   return (neuron0x1274110()*0.375671);
}

double NNfunction_sb_cLdL::synapse0x1269240() {
   return (neuron0x1274ae0()*-0.901474);
}

double NNfunction_sb_cLdL::synapse0x1269bd0() {
   return (neuron0x12754b0()*-0.334934);
}

double NNfunction_sb_cLdL::synapse0x1269c10() {
   return (neuron0x1275e80()*-0.775297);
}

double NNfunction_sb_cLdL::synapse0x1262720() {
   return (neuron0x1276850()*0.454753);
}

double NNfunction_sb_cLdL::synapse0x1262760() {
   return (neuron0x1277220()*-0.645097);
}

double NNfunction_sb_cLdL::synapse0x126bfd0() {
   return (neuron0x1277bf0()*0.832277);
}

double NNfunction_sb_cLdL::synapse0x126c010() {
   return (neuron0x12787d0()*0.92269);
}

double NNfunction_sb_cLdL::synapse0x126c960() {
   return (neuron0x12791a0()*-1.79451);
}

double NNfunction_sb_cLdL::synapse0x126c9a0() {
   return (neuron0x126a020()*0.0175585);
}

double NNfunction_sb_cLdL::synapse0x126d330() {
   return (neuron0x126a9f0()*-0.715547);
}

double NNfunction_sb_cLdL::synapse0x126d370() {
   return (neuron0x126b3c0()*0.896316);
}

double NNfunction_sb_cLdL::synapse0x126dd00() {
   return (neuron0x127da00()*0.720691);
}

double NNfunction_sb_cLdL::synapse0x126dd40() {
   return (neuron0x127e2b0()*1.15621);
}

double NNfunction_sb_cLdL::synapse0x126e6d0() {
   return (neuron0x127ec80()*-0.456302);
}

double NNfunction_sb_cLdL::synapse0x126e710() {
   return (neuron0x127f650()*0.878402);
}

double NNfunction_sb_cLdL::synapse0x1270e10() {
   return (neuron0x125b5d0()*-0.589961);
}

double NNfunction_sb_cLdL::synapse0x1270e50() {
   return (neuron0x125bee0()*-0.627468);
}

double NNfunction_sb_cLdL::synapse0x12663d0() {
   return (neuron0x125c9c0()*-0.246621);
}

double NNfunction_sb_cLdL::synapse0x1266410() {
   return (neuron0x1016250()*-0.204329);
}

double NNfunction_sb_cLdL::synapse0x12739f0() {
   return (neuron0x125d7e0()*-1.2858);
}

double NNfunction_sb_cLdL::synapse0x1273a30() {
   return (neuron0x125e1b0()*-0.909246);
}

double NNfunction_sb_cLdL::synapse0x12743c0() {
   return (neuron0x125ef80()*-0.168551);
}

double NNfunction_sb_cLdL::synapse0x1274400() {
   return (neuron0x125f950()*0.37393);
}

double NNfunction_sb_cLdL::synapse0x1274d90() {
   return (neuron0x1260320()*-1.27152);
}

double NNfunction_sb_cLdL::synapse0x1274dd0() {
   return (neuron0x1260e00()*-0.522264);
}

double NNfunction_sb_cLdL::synapse0x1275760() {
   return (neuron0x12617d0()*-1.15117);
}

double NNfunction_sb_cLdL::synapse0x12757a0() {
   return (neuron0x125e8b0()*0.670519);
}

double NNfunction_sb_cLdL::synapse0x1276130() {
   return (neuron0x1263380()*0.0421426);
}

double NNfunction_sb_cLdL::synapse0x1276170() {
   return (neuron0x1263d50()*-1.05006);
}

double NNfunction_sb_cLdL::synapse0x1276b00() {
   return (neuron0x1264720()*-0.0209324);
}

double NNfunction_sb_cLdL::synapse0x1276b40() {
   return (neuron0x12650f0()*0.466949);
}

double NNfunction_sb_cLdL::synapse0x12774d0() {
   return (neuron0x1266f00()*-0.438875);
}

double NNfunction_sb_cLdL::synapse0x1277510() {
   return (neuron0x12671e0()*-1.41997);
}

double NNfunction_sb_cLdL::synapse0x1277ea0() {
   return (neuron0x1267bb0()*-0.127282);
}

double NNfunction_sb_cLdL::synapse0x1277ee0() {
   return (neuron0x1268580()*-0.475077);
}

double NNfunction_sb_cLdL::synapse0x1278a80() {
   return (neuron0x1268f50()*-0.521874);
}

double NNfunction_sb_cLdL::synapse0x1278ac0() {
   return (neuron0x1269920()*-0.183316);
}

double NNfunction_sb_cLdL::synapse0x1279450() {
   return (neuron0x1262470()*-0.157135);
}

double NNfunction_sb_cLdL::synapse0x1279490() {
   return (neuron0x1262e40()*0.158251);
}

double NNfunction_sb_cLdL::synapse0x126a2d0() {
   return (neuron0x126c6b0()*-0.820165);
}

double NNfunction_sb_cLdL::synapse0x126a310() {
   return (neuron0x126d080()*-0.155314);
}

double NNfunction_sb_cLdL::synapse0x126aca0() {
   return (neuron0x126da50()*-0.286986);
}

double NNfunction_sb_cLdL::synapse0x126ace0() {
   return (neuron0x126e420()*0.854714);
}

double NNfunction_sb_cLdL::synapse0x126b670() {
   return (neuron0x126edf0()*0.133229);
}

double NNfunction_sb_cLdL::synapse0x126b6b0() {
   return (neuron0x126f7c0()*-0.253645);
}

double NNfunction_sb_cLdL::synapse0x127db90() {
   return (neuron0x1270190()*-0.417783);
}

double NNfunction_sb_cLdL::synapse0x127dbd0() {
   return (neuron0x1270b60()*-1.04603);
}

double NNfunction_sb_cLdL::synapse0x127e560() {
   return (neuron0x1266bf0()*-0.558478);
}

double NNfunction_sb_cLdL::synapse0x127e5a0() {
   return (neuron0x1273740()*0.208442);
}

double NNfunction_sb_cLdL::synapse0x127ef30() {
   return (neuron0x1274110()*-0.978021);
}

double NNfunction_sb_cLdL::synapse0x127ef70() {
   return (neuron0x1274ae0()*-0.472443);
}

double NNfunction_sb_cLdL::synapse0x127f900() {
   return (neuron0x12754b0()*-0.410671);
}

double NNfunction_sb_cLdL::synapse0x127f940() {
   return (neuron0x1275e80()*-0.267211);
}

double NNfunction_sb_cLdL::synapse0x125b7f0() {
   return (neuron0x1276850()*-0.330965);
}

double NNfunction_sb_cLdL::synapse0x125b830() {
   return (neuron0x1277220()*-1.26304);
}

double NNfunction_sb_cLdL::synapse0x126f0a0() {
   return (neuron0x1277bf0()*-0.191934);
}

double NNfunction_sb_cLdL::synapse0x126f0e0() {
   return (neuron0x12787d0()*0.310024);
}

double NNfunction_sb_cLdL::synapse0x1280020() {
   return (neuron0x12791a0()*0.0712012);
}

double NNfunction_sb_cLdL::synapse0x1280060() {
   return (neuron0x126a020()*0.323228);
}

double NNfunction_sb_cLdL::synapse0x12800a0() {
   return (neuron0x126a9f0()*-0.386564);
}

double NNfunction_sb_cLdL::synapse0x12800e0() {
   return (neuron0x126b3c0()*-1.07689);
}

double NNfunction_sb_cLdL::synapse0x1286f90() {
   return (neuron0x127da00()*-0.324958);
}

double NNfunction_sb_cLdL::synapse0x1286fd0() {
   return (neuron0x127e2b0()*-0.689717);
}

double NNfunction_sb_cLdL::synapse0x1287010() {
   return (neuron0x127ec80()*-0.646802);
}

double NNfunction_sb_cLdL::synapse0x1287050() {
   return (neuron0x127f650()*0.355885);
}

double NNfunction_sb_cLdL::synapse0x12873d0() {
   return (neuron0x125b5d0()*0.10278);
}

double NNfunction_sb_cLdL::synapse0x1287410() {
   return (neuron0x125bee0()*-0.0530928);
}

double NNfunction_sb_cLdL::synapse0x1287450() {
   return (neuron0x125c9c0()*-0.0724136);
}

double NNfunction_sb_cLdL::synapse0x1287490() {
   return (neuron0x1016250()*0.0552371);
}

double NNfunction_sb_cLdL::synapse0x12874d0() {
   return (neuron0x125d7e0()*-0.0332936);
}

double NNfunction_sb_cLdL::synapse0x1287510() {
   return (neuron0x125e1b0()*0.738254);
}

double NNfunction_sb_cLdL::synapse0x1287550() {
   return (neuron0x125ef80()*-4.32765);
}

double NNfunction_sb_cLdL::synapse0x1287590() {
   return (neuron0x125f950()*-0.0150573);
}

double NNfunction_sb_cLdL::synapse0x12875d0() {
   return (neuron0x1260320()*-0.0593326);
}

double NNfunction_sb_cLdL::synapse0x1287610() {
   return (neuron0x1260e00()*-0.0294148);
}

double NNfunction_sb_cLdL::synapse0x1287650() {
   return (neuron0x12617d0()*1.31143);
}

double NNfunction_sb_cLdL::synapse0x1287690() {
   return (neuron0x125e8b0()*-0.0535203);
}

double NNfunction_sb_cLdL::synapse0x12876d0() {
   return (neuron0x1263380()*-0.186765);
}

double NNfunction_sb_cLdL::synapse0x1287710() {
   return (neuron0x1263d50()*-0.0503113);
}

double NNfunction_sb_cLdL::synapse0x1287750() {
   return (neuron0x1264720()*0.0812436);
}

double NNfunction_sb_cLdL::synapse0x1287790() {
   return (neuron0x12650f0()*-1.57212);
}

double NNfunction_sb_cLdL::synapse0x1287220() {
   return (neuron0x1266f00()*-0.0165283);
}

double NNfunction_sb_cLdL::synapse0x1287260() {
   return (neuron0x12671e0()*1.5702);
}

double NNfunction_sb_cLdL::synapse0x12878e0() {
   return (neuron0x1267bb0()*-0.00134209);
}

double NNfunction_sb_cLdL::synapse0x1287920() {
   return (neuron0x1268580()*0.108712);
}

double NNfunction_sb_cLdL::synapse0x1287960() {
   return (neuron0x1268f50()*0.038419);
}

double NNfunction_sb_cLdL::synapse0x12879a0() {
   return (neuron0x1269920()*-0.111571);
}

double NNfunction_sb_cLdL::synapse0x12879e0() {
   return (neuron0x1262470()*-0.0214789);
}

double NNfunction_sb_cLdL::synapse0x1287a20() {
   return (neuron0x1262e40()*-0.0356688);
}

double NNfunction_sb_cLdL::synapse0x1287a60() {
   return (neuron0x126c6b0()*-0.6464);
}

double NNfunction_sb_cLdL::synapse0x1287aa0() {
   return (neuron0x126d080()*0.155006);
}

double NNfunction_sb_cLdL::synapse0x1287ae0() {
   return (neuron0x126da50()*0.014386);
}

double NNfunction_sb_cLdL::synapse0x1287b20() {
   return (neuron0x126e420()*1.40175);
}

double NNfunction_sb_cLdL::synapse0x1287b60() {
   return (neuron0x126edf0()*0.175253);
}

double NNfunction_sb_cLdL::synapse0x1287ba0() {
   return (neuron0x126f7c0()*1.11268);
}

double NNfunction_sb_cLdL::synapse0x1287be0() {
   return (neuron0x1270190()*-0.0476096);
}

double NNfunction_sb_cLdL::synapse0x1287c20() {
   return (neuron0x1270b60()*-0.033238);
}

double NNfunction_sb_cLdL::synapse0x12877d0() {
   return (neuron0x1266bf0()*-0.342308);
}

double NNfunction_sb_cLdL::synapse0x1287810() {
   return (neuron0x1273740()*-1.56687);
}

double NNfunction_sb_cLdL::synapse0x1287850() {
   return (neuron0x1274110()*1.60965);
}

double NNfunction_sb_cLdL::synapse0x1287890() {
   return (neuron0x1274ae0()*0.0169867);
}

double NNfunction_sb_cLdL::synapse0x1287e70() {
   return (neuron0x12754b0()*-1.79737);
}

double NNfunction_sb_cLdL::synapse0x1287eb0() {
   return (neuron0x1275e80()*0.0254686);
}

double NNfunction_sb_cLdL::synapse0x1287ef0() {
   return (neuron0x1276850()*-0.203235);
}

double NNfunction_sb_cLdL::synapse0x1287f30() {
   return (neuron0x1277220()*0.0165666);
}

double NNfunction_sb_cLdL::synapse0x1287f70() {
   return (neuron0x1277bf0()*0.735066);
}

double NNfunction_sb_cLdL::synapse0x1287fb0() {
   return (neuron0x12787d0()*-0.0284596);
}

double NNfunction_sb_cLdL::synapse0x1287ff0() {
   return (neuron0x12791a0()*2.10806);
}

double NNfunction_sb_cLdL::synapse0x1288030() {
   return (neuron0x126a020()*-0.196402);
}

double NNfunction_sb_cLdL::synapse0x1288070() {
   return (neuron0x126a9f0()*-0.0338742);
}

double NNfunction_sb_cLdL::synapse0x12880b0() {
   return (neuron0x126b3c0()*0.0085126);
}

double NNfunction_sb_cLdL::synapse0x12880f0() {
   return (neuron0x127da00()*0.36742);
}

double NNfunction_sb_cLdL::synapse0x1288130() {
   return (neuron0x127e2b0()*-1.4691);
}

double NNfunction_sb_cLdL::synapse0x1288170() {
   return (neuron0x127ec80()*-0.0215364);
}

double NNfunction_sb_cLdL::synapse0x12881b0() {
   return (neuron0x127f650()*0.503147);
}

double NNfunction_sb_cLdL::synapse0x1288530() {
   return (neuron0x125b5d0()*0.349308);
}

double NNfunction_sb_cLdL::synapse0x1288570() {
   return (neuron0x125bee0()*-0.0637487);
}

double NNfunction_sb_cLdL::synapse0x12885b0() {
   return (neuron0x125c9c0()*-0.194535);
}

double NNfunction_sb_cLdL::synapse0x12885f0() {
   return (neuron0x1016250()*0.0517589);
}

double NNfunction_sb_cLdL::synapse0x1288630() {
   return (neuron0x125d7e0()*-0.0131764);
}

double NNfunction_sb_cLdL::synapse0x1288670() {
   return (neuron0x125e1b0()*-0.198359);
}

double NNfunction_sb_cLdL::synapse0x12886b0() {
   return (neuron0x125ef80()*0.159219);
}

double NNfunction_sb_cLdL::synapse0x12886f0() {
   return (neuron0x125f950()*0.125846);
}

double NNfunction_sb_cLdL::synapse0x1288730() {
   return (neuron0x1260320()*-0.139737);
}

double NNfunction_sb_cLdL::synapse0x1288770() {
   return (neuron0x1260e00()*0.396218);
}

double NNfunction_sb_cLdL::synapse0x12887b0() {
   return (neuron0x12617d0()*-0.409777);
}

double NNfunction_sb_cLdL::synapse0x12887f0() {
   return (neuron0x125e8b0()*-0.318625);
}

double NNfunction_sb_cLdL::synapse0x1288830() {
   return (neuron0x1263380()*-0.0203992);
}

double NNfunction_sb_cLdL::synapse0x1288870() {
   return (neuron0x1263d50()*-0.528611);
}

double NNfunction_sb_cLdL::synapse0x12888b0() {
   return (neuron0x1264720()*0.312239);
}

double NNfunction_sb_cLdL::synapse0x12888f0() {
   return (neuron0x12650f0()*-0.394915);
}

double NNfunction_sb_cLdL::synapse0x1288380() {
   return (neuron0x1266f00()*-0.364083);
}

double NNfunction_sb_cLdL::synapse0x12883c0() {
   return (neuron0x12671e0()*-0.612074);
}

double NNfunction_sb_cLdL::synapse0x1288a40() {
   return (neuron0x1267bb0()*-0.111892);
}

double NNfunction_sb_cLdL::synapse0x1288a80() {
   return (neuron0x1268580()*0.233377);
}

double NNfunction_sb_cLdL::synapse0x1288ac0() {
   return (neuron0x1268f50()*-0.0754747);
}

double NNfunction_sb_cLdL::synapse0x1288b00() {
   return (neuron0x1269920()*-0.323338);
}

double NNfunction_sb_cLdL::synapse0x1288b40() {
   return (neuron0x1262470()*-0.373965);
}

double NNfunction_sb_cLdL::synapse0x1288b80() {
   return (neuron0x1262e40()*0.0676265);
}

double NNfunction_sb_cLdL::synapse0x1288bc0() {
   return (neuron0x126c6b0()*0.175592);
}

double NNfunction_sb_cLdL::synapse0x1288c00() {
   return (neuron0x126d080()*-0.0323546);
}

double NNfunction_sb_cLdL::synapse0x1288c40() {
   return (neuron0x126da50()*0.379631);
}

double NNfunction_sb_cLdL::synapse0x1288c80() {
   return (neuron0x126e420()*0.281361);
}

double NNfunction_sb_cLdL::synapse0x1288cc0() {
   return (neuron0x126edf0()*0.30534);
}

double NNfunction_sb_cLdL::synapse0x1288d00() {
   return (neuron0x126f7c0()*-0.252713);
}

double NNfunction_sb_cLdL::synapse0x1288d40() {
   return (neuron0x1270190()*-0.0632417);
}

double NNfunction_sb_cLdL::synapse0x1288d80() {
   return (neuron0x1270b60()*-0.0566809);
}

double NNfunction_sb_cLdL::synapse0x1288930() {
   return (neuron0x1266bf0()*-0.498605);
}

double NNfunction_sb_cLdL::synapse0x1288970() {
   return (neuron0x1273740()*0.606105);
}

double NNfunction_sb_cLdL::synapse0x12889b0() {
   return (neuron0x1274110()*-0.532451);
}

double NNfunction_sb_cLdL::synapse0x12889f0() {
   return (neuron0x1274ae0()*-0.145134);
}

double NNfunction_sb_cLdL::synapse0x1288fd0() {
   return (neuron0x12754b0()*0.119249);
}

double NNfunction_sb_cLdL::synapse0x1289010() {
   return (neuron0x1275e80()*-0.095316);
}

double NNfunction_sb_cLdL::synapse0x1289050() {
   return (neuron0x1276850()*-0.294944);
}

double NNfunction_sb_cLdL::synapse0x1289090() {
   return (neuron0x1277220()*-0.0656467);
}

double NNfunction_sb_cLdL::synapse0x12890d0() {
   return (neuron0x1277bf0()*-0.469084);
}

double NNfunction_sb_cLdL::synapse0x1289110() {
   return (neuron0x12787d0()*0.0475624);
}

double NNfunction_sb_cLdL::synapse0x1289150() {
   return (neuron0x12791a0()*0.862941);
}

double NNfunction_sb_cLdL::synapse0x1289190() {
   return (neuron0x126a020()*0.790525);
}

double NNfunction_sb_cLdL::synapse0x12891d0() {
   return (neuron0x126a9f0()*-0.356819);
}

double NNfunction_sb_cLdL::synapse0x1289210() {
   return (neuron0x126b3c0()*0.241072);
}

double NNfunction_sb_cLdL::synapse0x1289250() {
   return (neuron0x127da00()*-0.611958);
}

double NNfunction_sb_cLdL::synapse0x1289290() {
   return (neuron0x127e2b0()*0.196992);
}

double NNfunction_sb_cLdL::synapse0x12892d0() {
   return (neuron0x127ec80()*-0.277221);
}

double NNfunction_sb_cLdL::synapse0x1289310() {
   return (neuron0x127f650()*0.116341);
}

double NNfunction_sb_cLdL::synapse0x1289690() {
   return (neuron0x125b5d0()*0.766292);
}

double NNfunction_sb_cLdL::synapse0x12896d0() {
   return (neuron0x125bee0()*-0.783483);
}

double NNfunction_sb_cLdL::synapse0x1289710() {
   return (neuron0x125c9c0()*-0.705044);
}

double NNfunction_sb_cLdL::synapse0x1289750() {
   return (neuron0x1016250()*0.958238);
}

double NNfunction_sb_cLdL::synapse0x1289790() {
   return (neuron0x125d7e0()*-0.771549);
}

double NNfunction_sb_cLdL::synapse0x12897d0() {
   return (neuron0x125e1b0()*-2.05238);
}

double NNfunction_sb_cLdL::synapse0x1289810() {
   return (neuron0x125ef80()*-0.369248);
}

double NNfunction_sb_cLdL::synapse0x1289850() {
   return (neuron0x125f950()*-0.624172);
}

double NNfunction_sb_cLdL::synapse0x1289890() {
   return (neuron0x1260320()*-0.494367);
}

double NNfunction_sb_cLdL::synapse0x12898d0() {
   return (neuron0x1260e00()*-0.866533);
}

double NNfunction_sb_cLdL::synapse0x1289910() {
   return (neuron0x12617d0()*-0.569982);
}

double NNfunction_sb_cLdL::synapse0x1289950() {
   return (neuron0x125e8b0()*1.70974);
}

double NNfunction_sb_cLdL::synapse0x1289990() {
   return (neuron0x1263380()*-1.16601);
}

double NNfunction_sb_cLdL::synapse0x12899d0() {
   return (neuron0x1263d50()*0.495965);
}

double NNfunction_sb_cLdL::synapse0x1289a10() {
   return (neuron0x1264720()*0.522561);
}

double NNfunction_sb_cLdL::synapse0x1289a50() {
   return (neuron0x12650f0()*-1.22887);
}

double NNfunction_sb_cLdL::synapse0x12894e0() {
   return (neuron0x1266f00()*0.717319);
}

double NNfunction_sb_cLdL::synapse0x1289520() {
   return (neuron0x12671e0()*-3.34485);
}

double NNfunction_sb_cLdL::synapse0x1289ba0() {
   return (neuron0x1267bb0()*0.372346);
}

double NNfunction_sb_cLdL::synapse0x1289be0() {
   return (neuron0x1268580()*0.91906);
}

double NNfunction_sb_cLdL::synapse0x1289c20() {
   return (neuron0x1268f50()*0.692118);
}

double NNfunction_sb_cLdL::synapse0x1289c60() {
   return (neuron0x1269920()*-0.984522);
}

double NNfunction_sb_cLdL::synapse0x1289ca0() {
   return (neuron0x1262470()*0.615612);
}

double NNfunction_sb_cLdL::synapse0x1289ce0() {
   return (neuron0x1262e40()*-0.8067);
}

double NNfunction_sb_cLdL::synapse0x1289d20() {
   return (neuron0x126c6b0()*1.75825);
}

double NNfunction_sb_cLdL::synapse0x1289d60() {
   return (neuron0x126d080()*4.5212);
}

double NNfunction_sb_cLdL::synapse0x1289da0() {
   return (neuron0x126da50()*-0.858569);
}

double NNfunction_sb_cLdL::synapse0x1289de0() {
   return (neuron0x126e420()*3.56805);
}

double NNfunction_sb_cLdL::synapse0x1289e20() {
   return (neuron0x126edf0()*0.601214);
}

double NNfunction_sb_cLdL::synapse0x1289e60() {
   return (neuron0x126f7c0()*0.863234);
}

double NNfunction_sb_cLdL::synapse0x1289ea0() {
   return (neuron0x1270190()*-0.586199);
}

double NNfunction_sb_cLdL::synapse0x1289ee0() {
   return (neuron0x1270b60()*-0.5996);
}

double NNfunction_sb_cLdL::synapse0x1289a90() {
   return (neuron0x1266bf0()*0.720038);
}

double NNfunction_sb_cLdL::synapse0x1289ad0() {
   return (neuron0x1273740()*2.43372);
}

double NNfunction_sb_cLdL::synapse0x1289b10() {
   return (neuron0x1274110()*-1.69044);
}

double NNfunction_sb_cLdL::synapse0x1289b50() {
   return (neuron0x1274ae0()*0.750466);
}

double NNfunction_sb_cLdL::synapse0x128a130() {
   return (neuron0x12754b0()*0.0540232);
}

double NNfunction_sb_cLdL::synapse0x128a170() {
   return (neuron0x1275e80()*0.64493);
}

double NNfunction_sb_cLdL::synapse0x128a1b0() {
   return (neuron0x1276850()*-1.29744);
}

double NNfunction_sb_cLdL::synapse0x128a1f0() {
   return (neuron0x1277220()*0.475468);
}

double NNfunction_sb_cLdL::synapse0x128a230() {
   return (neuron0x1277bf0()*-0.0263264);
}

double NNfunction_sb_cLdL::synapse0x128a270() {
   return (neuron0x12787d0()*-0.777953);
}

double NNfunction_sb_cLdL::synapse0x128a2b0() {
   return (neuron0x12791a0()*-4.14227);
}

double NNfunction_sb_cLdL::synapse0x128a2f0() {
   return (neuron0x126a020()*0.237166);
}

double NNfunction_sb_cLdL::synapse0x128a330() {
   return (neuron0x126a9f0()*0.570704);
}

double NNfunction_sb_cLdL::synapse0x128a370() {
   return (neuron0x126b3c0()*-0.76889);
}

double NNfunction_sb_cLdL::synapse0x128a3b0() {
   return (neuron0x127da00()*-0.260474);
}

double NNfunction_sb_cLdL::synapse0x128a3f0() {
   return (neuron0x127e2b0()*-2.06301);
}

double NNfunction_sb_cLdL::synapse0x128a430() {
   return (neuron0x127ec80()*0.410984);
}

double NNfunction_sb_cLdL::synapse0x128a470() {
   return (neuron0x127f650()*-0.178632);
}

double NNfunction_sb_cLdL::synapse0x125b590() {
   return (neuron0x1286850()*-6.95916);
}

double NNfunction_sb_cLdL::synapse0x128a6d0() {
   return (neuron0x1286bf0()*-4.44492);
}

double NNfunction_sb_cLdL::synapse0x128a710() {
   return (neuron0x1287090()*9.76168);
}

double NNfunction_sb_cLdL::synapse0x128a750() {
   return (neuron0x12881f0()*-1.63455);
}

double NNfunction_sb_cLdL::synapse0x128a790() {
   return (neuron0x1289350()*-8.74489);
}

