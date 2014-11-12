#include "NNfunction_nn_chi1_chi2.h"
#include <cmath>

double NNfunction_nn_chi1_chi2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6689)/15.0193;
   input1 = (in1 - 24.0772)/948.388;
   input2 = (in2 - 466.497)/545.134;
   input3 = (in3 - 136.777)/731.239;
   input4 = (in4 - 1013.45)/896.09;
   input5 = (in5 - 922.873)/930.263;
   input6 = (in6 - 927.141)/929.035;
   input7 = (in7 - 923.496)/905.745;
   input8 = (in8 - 930.915)/943.718;
   input9 = (in9 - 921.252)/933.671;
   input10 = (in10 - 934.574)/908.364;
   input11 = (in11 - 820.459)/856.168;
   input12 = (in12 - 844.074)/867.194;
   input13 = (in13 - 615.649)/577.972;
   input14 = (in14 - 847.642)/840.46;
   input15 = (in15 - 845.451)/841.229;
   input16 = (in16 - 577.295)/543.702;
   input17 = (in17 - 863.232)/885.792;
   input18 = (in18 - 860.569)/886.635;
   input19 = (in19 - 860.081)/837.218;
   input20 = (in20 - -113.557)/450.214;
   input21 = (in21 - -147.896)/1008.71;
   input22 = (in22 - 0.984195)/1038.47;
   input23 = (in23 - -56.0213)/432.766;
   switch(index) {
     case 0:
         return neuron0x3c4e960();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_chi2::Value(int index, double* input) {
   input0 = (input[0] - 23.6689)/15.0193;
   input1 = (input[1] - 24.0772)/948.388;
   input2 = (input[2] - 466.497)/545.134;
   input3 = (input[3] - 136.777)/731.239;
   input4 = (input[4] - 1013.45)/896.09;
   input5 = (input[5] - 922.873)/930.263;
   input6 = (input[6] - 927.141)/929.035;
   input7 = (input[7] - 923.496)/905.745;
   input8 = (input[8] - 930.915)/943.718;
   input9 = (input[9] - 921.252)/933.671;
   input10 = (input[10] - 934.574)/908.364;
   input11 = (input[11] - 820.459)/856.168;
   input12 = (input[12] - 844.074)/867.194;
   input13 = (input[13] - 615.649)/577.972;
   input14 = (input[14] - 847.642)/840.46;
   input15 = (input[15] - 845.451)/841.229;
   input16 = (input[16] - 577.295)/543.702;
   input17 = (input[17] - 863.232)/885.792;
   input18 = (input[18] - 860.569)/886.635;
   input19 = (input[19] - 860.081)/837.218;
   input20 = (input[20] - -113.557)/450.214;
   input21 = (input[21] - -147.896)/1008.71;
   input22 = (input[22] - 0.984195)/1038.47;
   input23 = (input[23] - -56.0213)/432.766;
   switch(index) {
     case 0:
         return neuron0x3c4e960();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_chi2::neuron0x3c199d0() {
   return input0;
}

double NNfunction_nn_chi1_chi2::neuron0x3c19c80() {
   return input1;
}

double NNfunction_nn_chi1_chi2::neuron0x3c19fc0() {
   return input2;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1a300() {
   return input3;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1a640() {
   return input4;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1a980() {
   return input5;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1acc0() {
   return input6;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1b000() {
   return input7;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1b340() {
   return input8;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1b680() {
   return input9;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1b9c0() {
   return input10;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1bd00() {
   return input11;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1c040() {
   return input12;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1c380() {
   return input13;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1c6c0() {
   return input14;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1ca00() {
   return input15;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1cd40() {
   return input16;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1d2a0() {
   return input17;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1d5e0() {
   return input18;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1d920() {
   return input19;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1dc60() {
   return input20;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1dfa0() {
   return input21;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1e2e0() {
   return input22;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1e620() {
   return input23;
}

double NNfunction_nn_chi1_chi2::input0x3c1ea90() {
   double input = 0.458373;
   input += synapse0x3c1edd0();
   input += synapse0x3c1ee10();
   input += synapse0x3c1ee50();
   input += synapse0x3c1ee90();
   input += synapse0x3c1eed0();
   input += synapse0x3c1ef10();
   input += synapse0x3c1ef50();
   input += synapse0x3c1ef90();
   input += synapse0x3c1efd0();
   input += synapse0x3c1f010();
   input += synapse0x3c1f050();
   input += synapse0x3c1f090();
   input += synapse0x3c1f0d0();
   input += synapse0x3c1f110();
   input += synapse0x3c1f150();
   input += synapse0x3c1f190();
   input += synapse0x3c1ec20();
   input += synapse0x3c1ec60();
   input += synapse0x39d5e60();
   input += synapse0x39d5ea0();
   input += synapse0x3c1f1d0();
   input += synapse0x3c1f210();
   input += synapse0x3c1f250();
   input += synapse0x3c1f290();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1ea90() {
   double input = input0x3c1ea90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c1f2d0() {
   double input = 3.18315;
   input += synapse0x3c1f610();
   input += synapse0x3c1f650();
   input += synapse0x3c1f690();
   input += synapse0x3c1f6d0();
   input += synapse0x3c1f710();
   input += synapse0x3c1f750();
   input += synapse0x3c1f790();
   input += synapse0x3c1f7d0();
   input += synapse0x3c1f810();
   input += synapse0x39d5cb0();
   input += synapse0x39d5cf0();
   input += synapse0x39d5d30();
   input += synapse0x39d5d70();
   input += synapse0x3c1fa60();
   input += synapse0x3c1faa0();
   input += synapse0x3c1fae0();
   input += synapse0x3c1f460();
   input += synapse0x3c1f4a0();
   input += synapse0x3c1fc30();
   input += synapse0x3c1fc70();
   input += synapse0x3c1fcb0();
   input += synapse0x3c1fcf0();
   input += synapse0x3c1fd30();
   input += synapse0x3c1fd70();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1f2d0() {
   double input = input0x3c1f2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c1fdb0() {
   double input = 4.47008;
   input += synapse0x3c200f0();
   input += synapse0x3c20130();
   input += synapse0x3c20170();
   input += synapse0x3c201b0();
   input += synapse0x3c201f0();
   input += synapse0x3c20230();
   input += synapse0x3c20270();
   input += synapse0x3c202b0();
   input += synapse0x3c202f0();
   input += synapse0x3c20330();
   input += synapse0x3c20370();
   input += synapse0x3c203b0();
   input += synapse0x3c203f0();
   input += synapse0x3c20430();
   input += synapse0x3c20470();
   input += synapse0x3c204b0();
   input += synapse0x3c1ff40();
   input += synapse0x3c1ff80();
   input += synapse0x294df10();
   input += synapse0x39e3a80();
   input += synapse0x39e3ac0();
   input += synapse0x3c223e0();
   input += synapse0x3c22420();
   input += synapse0x3c19710();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1fdb0() {
   double input = input0x3c1fdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c1f850() {
   double input = -6.60451;
   input += synapse0x3c197e0();
   input += synapse0x39e4300();
   input += synapse0x3c1f9e0();
   input += synapse0x3c1fa20();
   input += synapse0x3c20600();
   input += synapse0x3c20640();
   input += synapse0x3c20680();
   input += synapse0x3c206c0();
   input += synapse0x3c20700();
   input += synapse0x3c20740();
   input += synapse0x3c20780();
   input += synapse0x3c207c0();
   input += synapse0x3c20800();
   input += synapse0x3c20840();
   input += synapse0x3c20880();
   input += synapse0x3c208c0();
   input += synapse0x3c19750();
   input += synapse0x3c19790();
   input += synapse0x3c20a10();
   input += synapse0x3c20a50();
   input += synapse0x3c20a90();
   input += synapse0x3c20ad0();
   input += synapse0x3c20b10();
   input += synapse0x3c20b50();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c1f850() {
   double input = input0x3c1f850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c20b90() {
   double input = -4.29678;
   input += synapse0x3c20ed0();
   input += synapse0x3c20f10();
   input += synapse0x3c20f50();
   input += synapse0x3c20f90();
   input += synapse0x3c20fd0();
   input += synapse0x3c21010();
   input += synapse0x3c21050();
   input += synapse0x3c21090();
   input += synapse0x3c210d0();
   input += synapse0x3c21110();
   input += synapse0x3c21150();
   input += synapse0x3c21190();
   input += synapse0x3c211d0();
   input += synapse0x3c21210();
   input += synapse0x3c21250();
   input += synapse0x3c21290();
   input += synapse0x3c213e0();
   input += synapse0x3c20d20();
   input += synapse0x3c20d60();
   input += synapse0x3c22520();
   input += synapse0x3c22560();
   input += synapse0x3c225a0();
   input += synapse0x3c225e0();
   input += synapse0x3c22620();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c20b90() {
   double input = input0x3c20b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c22660() {
   double input = 3.551;
   input += synapse0x3c229a0();
   input += synapse0x3c229e0();
   input += synapse0x3c22a20();
   input += synapse0x3c22a60();
   input += synapse0x3c22aa0();
   input += synapse0x3c22ae0();
   input += synapse0x3c22b20();
   input += synapse0x3c22b60();
   input += synapse0x3c22ba0();
   input += synapse0x39e3dd0();
   input += synapse0x39e3e10();
   input += synapse0x39e3e50();
   input += synapse0x39e3e90();
   input += synapse0x39e3ed0();
   input += synapse0x39e3f10();
   input += synapse0x39e3f50();
   input += synapse0x3c227f0();
   input += synapse0x3c22830();
   input += synapse0x39e40a0();
   input += synapse0x39e40e0();
   input += synapse0x39e4120();
   input += synapse0x39e4160();
   input += synapse0x39e41a0();
   input += synapse0x3c233f0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c22660() {
   double input = input0x3c22660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c23430() {
   double input = 2.30413;
   input += synapse0x3c23770();
   input += synapse0x3c237b0();
   input += synapse0x3c237f0();
   input += synapse0x3c23830();
   input += synapse0x3c23870();
   input += synapse0x3c238b0();
   input += synapse0x3c238f0();
   input += synapse0x3c23930();
   input += synapse0x3c23970();
   input += synapse0x3c239b0();
   input += synapse0x3c239f0();
   input += synapse0x3c23a30();
   input += synapse0x3c23a70();
   input += synapse0x3c23ab0();
   input += synapse0x3c23af0();
   input += synapse0x3c23b30();
   input += synapse0x3c235c0();
   input += synapse0x3c23600();
   input += synapse0x3c23c80();
   input += synapse0x3c23cc0();
   input += synapse0x3c23d00();
   input += synapse0x3c23d40();
   input += synapse0x3c23d80();
   input += synapse0x3c23dc0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c23430() {
   double input = input0x3c23430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c23e00() {
   double input = -3.36657;
   input += synapse0x3c24140();
   input += synapse0x3c24180();
   input += synapse0x3c241c0();
   input += synapse0x3c24200();
   input += synapse0x3c24240();
   input += synapse0x3c24280();
   input += synapse0x3c242c0();
   input += synapse0x3c24300();
   input += synapse0x3c24340();
   input += synapse0x3c24380();
   input += synapse0x3c243c0();
   input += synapse0x3c24400();
   input += synapse0x3c24440();
   input += synapse0x3c24480();
   input += synapse0x3c244c0();
   input += synapse0x3c24500();
   input += synapse0x3c23f90();
   input += synapse0x3c23fd0();
   input += synapse0x3c24650();
   input += synapse0x3c24690();
   input += synapse0x3c246d0();
   input += synapse0x3c24710();
   input += synapse0x3c24750();
   input += synapse0x3c24790();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c23e00() {
   double input = input0x3c23e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c247d0() {
   double input = -1.78242;
   input += synapse0x3c1d190();
   input += synapse0x3c1d1d0();
   input += synapse0x3c1d210();
   input += synapse0x3c1d250();
   input += synapse0x3c24d20();
   input += synapse0x3c24d60();
   input += synapse0x3c24da0();
   input += synapse0x3c24de0();
   input += synapse0x3c24e20();
   input += synapse0x3c24e60();
   input += synapse0x3c24ea0();
   input += synapse0x3c24ee0();
   input += synapse0x3c24f20();
   input += synapse0x3c24f60();
   input += synapse0x3c24fa0();
   input += synapse0x3c24fe0();
   input += synapse0x3c24960();
   input += synapse0x3c249a0();
   input += synapse0x3c25130();
   input += synapse0x3c25170();
   input += synapse0x3c251b0();
   input += synapse0x3c251f0();
   input += synapse0x3c25230();
   input += synapse0x3c25270();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c247d0() {
   double input = input0x3c247d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c252b0() {
   double input = -9.11632;
   input += synapse0x3c255f0();
   input += synapse0x3c25630();
   input += synapse0x3c25670();
   input += synapse0x3c256b0();
   input += synapse0x3c256f0();
   input += synapse0x3c25730();
   input += synapse0x3c25770();
   input += synapse0x3c257b0();
   input += synapse0x3c257f0();
   input += synapse0x3c25830();
   input += synapse0x3c25870();
   input += synapse0x3c258b0();
   input += synapse0x3c258f0();
   input += synapse0x3c25930();
   input += synapse0x3c25970();
   input += synapse0x3c259b0();
   input += synapse0x3c25440();
   input += synapse0x3c25480();
   input += synapse0x3c25b00();
   input += synapse0x3c25b40();
   input += synapse0x3c25b80();
   input += synapse0x3c25bc0();
   input += synapse0x3c25c00();
   input += synapse0x3c25c40();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c252b0() {
   double input = input0x3c252b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c25c80() {
   double input = 3.10373;
   input += synapse0x3c25fc0();
   input += synapse0x3c26000();
   input += synapse0x3c26040();
   input += synapse0x3c26080();
   input += synapse0x3c260c0();
   input += synapse0x3c26100();
   input += synapse0x3c26140();
   input += synapse0x3c26180();
   input += synapse0x3c261c0();
   input += synapse0x3c26200();
   input += synapse0x3c26240();
   input += synapse0x3c26280();
   input += synapse0x3c262c0();
   input += synapse0x3c26300();
   input += synapse0x3c26340();
   input += synapse0x3c26380();
   input += synapse0x3c25e10();
   input += synapse0x3c25e50();
   input += synapse0x3c22be0();
   input += synapse0x3c22c20();
   input += synapse0x3c22c60();
   input += synapse0x3c22ca0();
   input += synapse0x3c22ce0();
   input += synapse0x3c22d20();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c25c80() {
   double input = input0x3c25c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c22d60() {
   double input = 2.0854;
   input += synapse0x3c230a0();
   input += synapse0x3c230e0();
   input += synapse0x3c23120();
   input += synapse0x3c23160();
   input += synapse0x3c231a0();
   input += synapse0x3c231e0();
   input += synapse0x3c23220();
   input += synapse0x3c23260();
   input += synapse0x3c232a0();
   input += synapse0x3c232e0();
   input += synapse0x3c23320();
   input += synapse0x3c23360();
   input += synapse0x3c233a0();
   input += synapse0x3c274e0();
   input += synapse0x3c27520();
   input += synapse0x3c27560();
   input += synapse0x3c22ef0();
   input += synapse0x3c22f30();
   input += synapse0x3c276b0();
   input += synapse0x3c276f0();
   input += synapse0x3c27730();
   input += synapse0x3c27770();
   input += synapse0x3c277b0();
   input += synapse0x3c277f0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c22d60() {
   double input = input0x3c22d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c27830() {
   double input = 4.82495;
   input += synapse0x3c27b70();
   input += synapse0x3c27bb0();
   input += synapse0x3c27bf0();
   input += synapse0x3c27c30();
   input += synapse0x3c27c70();
   input += synapse0x3c27cb0();
   input += synapse0x3c27cf0();
   input += synapse0x3c27d30();
   input += synapse0x3c27d70();
   input += synapse0x3c27db0();
   input += synapse0x3c27df0();
   input += synapse0x3c27e30();
   input += synapse0x3c27e70();
   input += synapse0x3c27eb0();
   input += synapse0x3c27ef0();
   input += synapse0x3c27f30();
   input += synapse0x3c279c0();
   input += synapse0x3c27a00();
   input += synapse0x3c28080();
   input += synapse0x3c280c0();
   input += synapse0x3c28100();
   input += synapse0x3c28140();
   input += synapse0x3c28180();
   input += synapse0x3c281c0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c27830() {
   double input = input0x3c27830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c28200() {
   double input = 0.775548;
   input += synapse0x3c28540();
   input += synapse0x3c28580();
   input += synapse0x3c285c0();
   input += synapse0x3c28600();
   input += synapse0x3c28640();
   input += synapse0x3c28680();
   input += synapse0x3c286c0();
   input += synapse0x3c28700();
   input += synapse0x3c28740();
   input += synapse0x3c28780();
   input += synapse0x3c287c0();
   input += synapse0x3c28800();
   input += synapse0x3c28840();
   input += synapse0x3c28880();
   input += synapse0x3c288c0();
   input += synapse0x3c28900();
   input += synapse0x3c28390();
   input += synapse0x3c283d0();
   input += synapse0x3c28a50();
   input += synapse0x3c28a90();
   input += synapse0x3c28ad0();
   input += synapse0x3c28b10();
   input += synapse0x3c28b50();
   input += synapse0x3c28b90();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c28200() {
   double input = input0x3c28200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c28bd0() {
   double input = -5.37803;
   input += synapse0x3c28f10();
   input += synapse0x3c28f50();
   input += synapse0x3c28f90();
   input += synapse0x3c28fd0();
   input += synapse0x3c29010();
   input += synapse0x3c29050();
   input += synapse0x3c29090();
   input += synapse0x3c290d0();
   input += synapse0x3c29110();
   input += synapse0x3c29150();
   input += synapse0x3c29190();
   input += synapse0x3c291d0();
   input += synapse0x3c29210();
   input += synapse0x3c29250();
   input += synapse0x3c29290();
   input += synapse0x3c292d0();
   input += synapse0x3c28d60();
   input += synapse0x3c28da0();
   input += synapse0x3c29420();
   input += synapse0x3c29460();
   input += synapse0x3c294a0();
   input += synapse0x3c294e0();
   input += synapse0x3c29520();
   input += synapse0x3c29560();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c28bd0() {
   double input = input0x3c28bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c295a0() {
   double input = 1.16604;
   input += synapse0x3c298e0();
   input += synapse0x3c19b60();
   input += synapse0x3c19ba0();
   input += synapse0x3c19ea0();
   input += synapse0x3c19ee0();
   input += synapse0x3c1a1e0();
   input += synapse0x3c1a220();
   input += synapse0x3c1a520();
   input += synapse0x3c1a560();
   input += synapse0x3c1a860();
   input += synapse0x3c1a8a0();
   input += synapse0x3c1aba0();
   input += synapse0x3c1abe0();
   input += synapse0x3c1aee0();
   input += synapse0x3c1af20();
   input += synapse0x3c1b220();
   input += synapse0x3c1b260();
   input += synapse0x3c1b560();
   input += synapse0x3c1b5a0();
   input += synapse0x3c1b8a0();
   input += synapse0x3c1b8e0();
   input += synapse0x3c1bbe0();
   input += synapse0x3c1bc20();
   input += synapse0x3c1bf20();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c295a0() {
   double input = input0x3c295a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2b3b0() {
   double input = -1.46896;
   input += synapse0x3c1bf60();
   input += synapse0x3c1cc20();
   input += synapse0x3c1cc60();
   input += synapse0x3c29730();
   input += synapse0x3c29770();
   input += synapse0x3c1cf60();
   input += synapse0x3c1cfa0();
   input += synapse0x3c1d4c0();
   input += synapse0x3c1d500();
   input += synapse0x3c1d800();
   input += synapse0x3c1d840();
   input += synapse0x3c1db40();
   input += synapse0x3c1db80();
   input += synapse0x3c1de80();
   input += synapse0x3c1dec0();
   input += synapse0x3c1e1c0();
   input += synapse0x3c1e200();
   input += synapse0x3c1e500();
   input += synapse0x3c1e540();
   input += synapse0x3c1e840();
   input += synapse0x3c1e880();
   input += synapse0x3c1c260();
   input += synapse0x3c1c2a0();
   input += synapse0x3c2b650();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2b3b0() {
   double input = input0x3c2b3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2b690() {
   double input = -1.13711;
   input += synapse0x3c2b9d0();
   input += synapse0x3c2ba10();
   input += synapse0x3c2ba50();
   input += synapse0x3c2ba90();
   input += synapse0x3c2bad0();
   input += synapse0x3c2bb10();
   input += synapse0x3c2bb50();
   input += synapse0x3c2bb90();
   input += synapse0x3c2bbd0();
   input += synapse0x3c2bc10();
   input += synapse0x3c2bc50();
   input += synapse0x3c2bc90();
   input += synapse0x3c2bcd0();
   input += synapse0x3c2bd10();
   input += synapse0x3c2bd50();
   input += synapse0x3c2bd90();
   input += synapse0x3c2b820();
   input += synapse0x3c2b860();
   input += synapse0x3c2bee0();
   input += synapse0x3c2bf20();
   input += synapse0x3c2bf60();
   input += synapse0x3c2bfa0();
   input += synapse0x3c2bfe0();
   input += synapse0x3c2c020();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2b690() {
   double input = input0x3c2b690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2c060() {
   double input = 3.22273;
   input += synapse0x3c2c3a0();
   input += synapse0x3c2c3e0();
   input += synapse0x3c2c420();
   input += synapse0x3c2c460();
   input += synapse0x3c2c4a0();
   input += synapse0x3c2c4e0();
   input += synapse0x3c2c520();
   input += synapse0x3c2c560();
   input += synapse0x3c2c5a0();
   input += synapse0x3c2c5e0();
   input += synapse0x3c2c620();
   input += synapse0x3c2c660();
   input += synapse0x3c2c6a0();
   input += synapse0x3c2c6e0();
   input += synapse0x3c2c720();
   input += synapse0x3c2c760();
   input += synapse0x3c2c1f0();
   input += synapse0x3c2c230();
   input += synapse0x3c2c8b0();
   input += synapse0x3c2c8f0();
   input += synapse0x3c2c930();
   input += synapse0x3c2c970();
   input += synapse0x3c2c9b0();
   input += synapse0x3c2c9f0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2c060() {
   double input = input0x3c2c060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2ca30() {
   double input = -2.99171;
   input += synapse0x3c2cd70();
   input += synapse0x3c2cdb0();
   input += synapse0x3c2cdf0();
   input += synapse0x3c2ce30();
   input += synapse0x3c2ce70();
   input += synapse0x3c2ceb0();
   input += synapse0x3c2cef0();
   input += synapse0x3c2cf30();
   input += synapse0x3c2cf70();
   input += synapse0x3c2cfb0();
   input += synapse0x3c2cff0();
   input += synapse0x3c2d030();
   input += synapse0x3c2d070();
   input += synapse0x3c2d0b0();
   input += synapse0x3c2d0f0();
   input += synapse0x3c2d130();
   input += synapse0x3c2cbc0();
   input += synapse0x3c2cc00();
   input += synapse0x3c2d280();
   input += synapse0x3c2d2c0();
   input += synapse0x3c2d300();
   input += synapse0x3c2d340();
   input += synapse0x3c2d380();
   input += synapse0x3c2d3c0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2ca30() {
   double input = input0x3c2ca30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2d400() {
   double input = -10.686;
   input += synapse0x3c2d740();
   input += synapse0x3c2d780();
   input += synapse0x3c2d7c0();
   input += synapse0x3c2d800();
   input += synapse0x3c2d840();
   input += synapse0x3c2d880();
   input += synapse0x3c2d8c0();
   input += synapse0x3c2d900();
   input += synapse0x3c2d940();
   input += synapse0x3c2d980();
   input += synapse0x3c2d9c0();
   input += synapse0x3c2da00();
   input += synapse0x3c2da40();
   input += synapse0x3c2da80();
   input += synapse0x3c2dac0();
   input += synapse0x3c2db00();
   input += synapse0x3c2d590();
   input += synapse0x3c2d5d0();
   input += synapse0x3c2dc50();
   input += synapse0x3c2dc90();
   input += synapse0x3c2dcd0();
   input += synapse0x3c2dd10();
   input += synapse0x3c2dd50();
   input += synapse0x3c2dd90();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2d400() {
   double input = input0x3c2d400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2ddd0() {
   double input = 0.1719;
   input += synapse0x3c2e110();
   input += synapse0x3c2e150();
   input += synapse0x3c2e190();
   input += synapse0x3c2e1d0();
   input += synapse0x3c2e210();
   input += synapse0x3c2e250();
   input += synapse0x3c2e290();
   input += synapse0x3c2e2d0();
   input += synapse0x3c2e310();
   input += synapse0x3c264d0();
   input += synapse0x3c26510();
   input += synapse0x3c26550();
   input += synapse0x3c26590();
   input += synapse0x3c265d0();
   input += synapse0x3c26610();
   input += synapse0x3c26650();
   input += synapse0x3c2df60();
   input += synapse0x3c2dfa0();
   input += synapse0x3c267a0();
   input += synapse0x3c267e0();
   input += synapse0x3c26820();
   input += synapse0x3c26860();
   input += synapse0x3c268a0();
   input += synapse0x3c268e0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2ddd0() {
   double input = input0x3c2ddd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c26920() {
   double input = 3.26369;
   input += synapse0x3c26c60();
   input += synapse0x3c26ca0();
   input += synapse0x3c26ce0();
   input += synapse0x3c26d20();
   input += synapse0x3c26d60();
   input += synapse0x3c26da0();
   input += synapse0x3c26de0();
   input += synapse0x3c26e20();
   input += synapse0x3c26e60();
   input += synapse0x3c26ea0();
   input += synapse0x3c26ee0();
   input += synapse0x3c26f20();
   input += synapse0x3c26f60();
   input += synapse0x3c26fa0();
   input += synapse0x3c26fe0();
   input += synapse0x3c27020();
   input += synapse0x3c26ab0();
   input += synapse0x3c26af0();
   input += synapse0x3c27170();
   input += synapse0x3c271b0();
   input += synapse0x3c271f0();
   input += synapse0x3c27230();
   input += synapse0x3c27270();
   input += synapse0x3c272b0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c26920() {
   double input = input0x3c26920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c272f0() {
   double input = 2.12937;
   input += synapse0x3c27480();
   input += synapse0x3c30510();
   input += synapse0x3c30550();
   input += synapse0x3c30590();
   input += synapse0x3c305d0();
   input += synapse0x3c30610();
   input += synapse0x3c30650();
   input += synapse0x3c30690();
   input += synapse0x3c306d0();
   input += synapse0x3c30710();
   input += synapse0x3c30750();
   input += synapse0x3c30790();
   input += synapse0x3c307d0();
   input += synapse0x3c30810();
   input += synapse0x3c30850();
   input += synapse0x3c30890();
   input += synapse0x3c30360();
   input += synapse0x3c303a0();
   input += synapse0x3c309e0();
   input += synapse0x3c30a20();
   input += synapse0x3c30a60();
   input += synapse0x3c30aa0();
   input += synapse0x3c30ae0();
   input += synapse0x3c30b20();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c272f0() {
   double input = input0x3c272f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c30b60() {
   double input = -0.984029;
   input += synapse0x3c30ea0();
   input += synapse0x3c30ee0();
   input += synapse0x3c30f20();
   input += synapse0x3c30f60();
   input += synapse0x3c30fa0();
   input += synapse0x3c30fe0();
   input += synapse0x3c31020();
   input += synapse0x3c31060();
   input += synapse0x3c310a0();
   input += synapse0x3c310e0();
   input += synapse0x3c31120();
   input += synapse0x3c31160();
   input += synapse0x3c311a0();
   input += synapse0x3c311e0();
   input += synapse0x3c31220();
   input += synapse0x3c31260();
   input += synapse0x3c30cf0();
   input += synapse0x3c30d30();
   input += synapse0x3c313b0();
   input += synapse0x3c313f0();
   input += synapse0x3c31430();
   input += synapse0x3c31470();
   input += synapse0x3c314b0();
   input += synapse0x3c314f0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c30b60() {
   double input = input0x3c30b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c31530() {
   double input = -0.595022;
   input += synapse0x3c31870();
   input += synapse0x3c318b0();
   input += synapse0x3c318f0();
   input += synapse0x3c31930();
   input += synapse0x3c31970();
   input += synapse0x3c319b0();
   input += synapse0x3c319f0();
   input += synapse0x3c31a30();
   input += synapse0x3c31a70();
   input += synapse0x3c31ab0();
   input += synapse0x3c31af0();
   input += synapse0x3c31b30();
   input += synapse0x3c31b70();
   input += synapse0x3c31bb0();
   input += synapse0x3c31bf0();
   input += synapse0x3c31c30();
   input += synapse0x3c316c0();
   input += synapse0x3c31700();
   input += synapse0x3c31d80();
   input += synapse0x3c31dc0();
   input += synapse0x3c31e00();
   input += synapse0x3c31e40();
   input += synapse0x3c31e80();
   input += synapse0x3c31ec0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c31530() {
   double input = input0x3c31530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c31f00() {
   double input = 2.65146;
   input += synapse0x3c32240();
   input += synapse0x3c32280();
   input += synapse0x3c322c0();
   input += synapse0x3c32300();
   input += synapse0x3c32340();
   input += synapse0x3c32380();
   input += synapse0x3c323c0();
   input += synapse0x3c32400();
   input += synapse0x3c32440();
   input += synapse0x3c32480();
   input += synapse0x3c324c0();
   input += synapse0x3c32500();
   input += synapse0x3c32540();
   input += synapse0x3c32580();
   input += synapse0x3c325c0();
   input += synapse0x3c32600();
   input += synapse0x3c32090();
   input += synapse0x3c320d0();
   input += synapse0x3c32750();
   input += synapse0x3c32790();
   input += synapse0x3c327d0();
   input += synapse0x3c32810();
   input += synapse0x3c32850();
   input += synapse0x3c32890();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c31f00() {
   double input = input0x3c31f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c328d0() {
   double input = 2.97633;
   input += synapse0x3c32c10();
   input += synapse0x3c32c50();
   input += synapse0x3c32c90();
   input += synapse0x3c32cd0();
   input += synapse0x3c32d10();
   input += synapse0x3c32d50();
   input += synapse0x3c32d90();
   input += synapse0x3c32dd0();
   input += synapse0x3c32e10();
   input += synapse0x3c32e50();
   input += synapse0x3c32e90();
   input += synapse0x3c32ed0();
   input += synapse0x3c32f10();
   input += synapse0x3c32f50();
   input += synapse0x3c32f90();
   input += synapse0x3c32fd0();
   input += synapse0x3c32a60();
   input += synapse0x3c32aa0();
   input += synapse0x3c33120();
   input += synapse0x3c33160();
   input += synapse0x3c331a0();
   input += synapse0x3c331e0();
   input += synapse0x3c33220();
   input += synapse0x3c33260();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c328d0() {
   double input = input0x3c328d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c332a0() {
   double input = 1.06803;
   input += synapse0x3c335e0();
   input += synapse0x3c33620();
   input += synapse0x3c33660();
   input += synapse0x3c336a0();
   input += synapse0x3c336e0();
   input += synapse0x3c33720();
   input += synapse0x3c33760();
   input += synapse0x3c337a0();
   input += synapse0x3c337e0();
   input += synapse0x3c33820();
   input += synapse0x3c33860();
   input += synapse0x3c338a0();
   input += synapse0x3c338e0();
   input += synapse0x3c33920();
   input += synapse0x3c33960();
   input += synapse0x3c339a0();
   input += synapse0x3c33430();
   input += synapse0x3c33470();
   input += synapse0x3c33af0();
   input += synapse0x3c33b30();
   input += synapse0x3c33b70();
   input += synapse0x3c33bb0();
   input += synapse0x3c33bf0();
   input += synapse0x3c33c30();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c332a0() {
   double input = input0x3c332a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c33c70() {
   double input = -1.42308;
   input += synapse0x3c33fb0();
   input += synapse0x3c33ff0();
   input += synapse0x3c34030();
   input += synapse0x3c34070();
   input += synapse0x3c340b0();
   input += synapse0x3c340f0();
   input += synapse0x3c34130();
   input += synapse0x3c34170();
   input += synapse0x3c341b0();
   input += synapse0x3c341f0();
   input += synapse0x3c34230();
   input += synapse0x3c34270();
   input += synapse0x3c342b0();
   input += synapse0x3c342f0();
   input += synapse0x3c34330();
   input += synapse0x3c34370();
   input += synapse0x3c33e00();
   input += synapse0x3c33e40();
   input += synapse0x3c344c0();
   input += synapse0x3c34500();
   input += synapse0x3c34540();
   input += synapse0x3c34580();
   input += synapse0x3c345c0();
   input += synapse0x3c34600();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c33c70() {
   double input = input0x3c33c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c34640() {
   double input = 2.18879;
   input += synapse0x3c34980();
   input += synapse0x3c349c0();
   input += synapse0x3c34a00();
   input += synapse0x3c34a40();
   input += synapse0x3c34a80();
   input += synapse0x3c34ac0();
   input += synapse0x3c34b00();
   input += synapse0x3c34b40();
   input += synapse0x3c34b80();
   input += synapse0x3c34bc0();
   input += synapse0x3c34c00();
   input += synapse0x3c34c40();
   input += synapse0x3c34c80();
   input += synapse0x3c34cc0();
   input += synapse0x3c34d00();
   input += synapse0x3c34d40();
   input += synapse0x3c347d0();
   input += synapse0x3c34810();
   input += synapse0x3c34e90();
   input += synapse0x3c34ed0();
   input += synapse0x3c34f10();
   input += synapse0x3c34f50();
   input += synapse0x3c34f90();
   input += synapse0x3c34fd0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c34640() {
   double input = input0x3c34640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c35010() {
   double input = 0.422634;
   input += synapse0x3c35350();
   input += synapse0x3c29920();
   input += synapse0x3c29960();
   input += synapse0x3c299a0();
   input += synapse0x3c29bf0();
   input += synapse0x3c29c30();
   input += synapse0x3c29c70();
   input += synapse0x3c29ec0();
   input += synapse0x3c29f00();
   input += synapse0x3c2a150();
   input += synapse0x3c2a190();
   input += synapse0x3c2a1d0();
   input += synapse0x3c2a420();
   input += synapse0x3c2a460();
   input += synapse0x3c2a6b0();
   input += synapse0x3c2a6f0();
   input += synapse0x3c351a0();
   input += synapse0x3c351e0();
   input += synapse0x3c2a840();
   input += synapse0x3c2ad50();
   input += synapse0x3c2ad90();
   input += synapse0x3c2add0();
   input += synapse0x3c2b020();
   input += synapse0x3c2b060();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c35010() {
   double input = input0x3c35010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2b0a0() {
   double input = -1.67836;
   input += synapse0x3c2a910();
   input += synapse0x3c2a950();
   input += synapse0x3c2a990();
   input += synapse0x3c2a9d0();
   input += synapse0x3c2b350();
   input += synapse0x3c376a0();
   input += synapse0x3c376e0();
   input += synapse0x3c37720();
   input += synapse0x3c37760();
   input += synapse0x3c377a0();
   input += synapse0x3c377e0();
   input += synapse0x3c37820();
   input += synapse0x3c37860();
   input += synapse0x3c378a0();
   input += synapse0x3c378e0();
   input += synapse0x3c37920();
   input += synapse0x3c2b230();
   input += synapse0x3c2b270();
   input += synapse0x3c37a70();
   input += synapse0x3c37ab0();
   input += synapse0x3c37af0();
   input += synapse0x3c37b30();
   input += synapse0x3c37b70();
   input += synapse0x3c37bb0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2b0a0() {
   double input = input0x3c2b0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c37bf0() {
   double input = -0.463697;
   input += synapse0x3c37f30();
   input += synapse0x3c37f70();
   input += synapse0x3c37fb0();
   input += synapse0x3c37ff0();
   input += synapse0x3c38030();
   input += synapse0x3c38070();
   input += synapse0x3c380b0();
   input += synapse0x3c380f0();
   input += synapse0x3c38130();
   input += synapse0x3c38170();
   input += synapse0x3c381b0();
   input += synapse0x3c381f0();
   input += synapse0x3c38230();
   input += synapse0x3c38270();
   input += synapse0x3c382b0();
   input += synapse0x3c382f0();
   input += synapse0x3c37d80();
   input += synapse0x3c37dc0();
   input += synapse0x3c38440();
   input += synapse0x3c38480();
   input += synapse0x3c384c0();
   input += synapse0x3c38500();
   input += synapse0x3c38540();
   input += synapse0x3c38580();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c37bf0() {
   double input = input0x3c37bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c385c0() {
   double input = -1.12017;
   input += synapse0x3c38900();
   input += synapse0x3c38940();
   input += synapse0x3c38980();
   input += synapse0x3c389c0();
   input += synapse0x3c38a00();
   input += synapse0x3c38a40();
   input += synapse0x3c38a80();
   input += synapse0x3c38ac0();
   input += synapse0x3c38b00();
   input += synapse0x3c38b40();
   input += synapse0x3c38b80();
   input += synapse0x3c38bc0();
   input += synapse0x3c38c00();
   input += synapse0x3c38c40();
   input += synapse0x3c38c80();
   input += synapse0x3c38cc0();
   input += synapse0x3c38750();
   input += synapse0x3c38790();
   input += synapse0x3c38e10();
   input += synapse0x3c38e50();
   input += synapse0x3c38e90();
   input += synapse0x3c38ed0();
   input += synapse0x3c38f10();
   input += synapse0x3c38f50();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c385c0() {
   double input = input0x3c385c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c38f90() {
   double input = -0.411292;
   input += synapse0x3c392d0();
   input += synapse0x3c39310();
   input += synapse0x3c39350();
   input += synapse0x3c39390();
   input += synapse0x3c393d0();
   input += synapse0x3c39410();
   input += synapse0x3c39450();
   input += synapse0x3c39490();
   input += synapse0x3c394d0();
   input += synapse0x3c39510();
   input += synapse0x3c39550();
   input += synapse0x3c39590();
   input += synapse0x3c395d0();
   input += synapse0x3c39610();
   input += synapse0x3c39650();
   input += synapse0x3c39690();
   input += synapse0x3c39120();
   input += synapse0x3c39160();
   input += synapse0x3c397e0();
   input += synapse0x3c39820();
   input += synapse0x3c39860();
   input += synapse0x3c398a0();
   input += synapse0x3c398e0();
   input += synapse0x3c39920();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c38f90() {
   double input = input0x3c38f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c39960() {
   double input = 1.00719;
   input += synapse0x3c39ca0();
   input += synapse0x3c39ce0();
   input += synapse0x3c39d20();
   input += synapse0x3c39d60();
   input += synapse0x3c39da0();
   input += synapse0x3c39de0();
   input += synapse0x3c39e20();
   input += synapse0x3c39e60();
   input += synapse0x3c39ea0();
   input += synapse0x3c39ee0();
   input += synapse0x3c39f20();
   input += synapse0x3c39f60();
   input += synapse0x3c39fa0();
   input += synapse0x3c39fe0();
   input += synapse0x3c3a020();
   input += synapse0x3c3a060();
   input += synapse0x3c39af0();
   input += synapse0x3c39b30();
   input += synapse0x3c3a1b0();
   input += synapse0x3c3a1f0();
   input += synapse0x3c3a230();
   input += synapse0x3c3a270();
   input += synapse0x3c3a2b0();
   input += synapse0x3c3a2f0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c39960() {
   double input = input0x3c39960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c3a330() {
   double input = -0.694117;
   input += synapse0x3c3a670();
   input += synapse0x3c3a6b0();
   input += synapse0x3c3a6f0();
   input += synapse0x3c3a730();
   input += synapse0x3c3a770();
   input += synapse0x3c3a7b0();
   input += synapse0x3c3a7f0();
   input += synapse0x3c3a830();
   input += synapse0x3c3a870();
   input += synapse0x3c3a8b0();
   input += synapse0x3c3a8f0();
   input += synapse0x3c3a930();
   input += synapse0x3c3a970();
   input += synapse0x3c3a9b0();
   input += synapse0x3c3a9f0();
   input += synapse0x3c3aa30();
   input += synapse0x3c3a4c0();
   input += synapse0x3c3a500();
   input += synapse0x3c3ab80();
   input += synapse0x3c3abc0();
   input += synapse0x3c3ac00();
   input += synapse0x3c3ac40();
   input += synapse0x3c3ac80();
   input += synapse0x3c3acc0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c3a330() {
   double input = input0x3c3a330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c3ad00() {
   double input = -0.650936;
   input += synapse0x3c3b040();
   input += synapse0x3c3b080();
   input += synapse0x3c3b0c0();
   input += synapse0x3c3b100();
   input += synapse0x3c3b140();
   input += synapse0x3c3b180();
   input += synapse0x3c3b1c0();
   input += synapse0x3c3b200();
   input += synapse0x3c3b240();
   input += synapse0x3c3b280();
   input += synapse0x3c3b2c0();
   input += synapse0x3c3b300();
   input += synapse0x3c3b340();
   input += synapse0x3c3b380();
   input += synapse0x3c3b3c0();
   input += synapse0x3c3b400();
   input += synapse0x3c3ae90();
   input += synapse0x3c3aed0();
   input += synapse0x3c3b550();
   input += synapse0x3c3b590();
   input += synapse0x3c3b5d0();
   input += synapse0x3c3b610();
   input += synapse0x3c3b650();
   input += synapse0x3c3b690();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c3ad00() {
   double input = input0x3c3ad00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c3b6d0() {
   double input = -1.30683;
   input += synapse0x3c3ba10();
   input += synapse0x3c3ba50();
   input += synapse0x3c3ba90();
   input += synapse0x3c3bad0();
   input += synapse0x3c3bb10();
   input += synapse0x3c3bb50();
   input += synapse0x3c3bb90();
   input += synapse0x3c3bbd0();
   input += synapse0x3c3bc10();
   input += synapse0x3c3bc50();
   input += synapse0x3c3bc90();
   input += synapse0x3c3bcd0();
   input += synapse0x3c3bd10();
   input += synapse0x3c3bd50();
   input += synapse0x3c3bd90();
   input += synapse0x3c3bdd0();
   input += synapse0x3c3b860();
   input += synapse0x3c3b8a0();
   input += synapse0x3c3bf20();
   input += synapse0x3c3bf60();
   input += synapse0x3c3bfa0();
   input += synapse0x3c3bfe0();
   input += synapse0x3c3c020();
   input += synapse0x3c3c060();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c3b6d0() {
   double input = input0x3c3b6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c3c0a0() {
   double input = -0.455021;
   input += synapse0x3c24b10();
   input += synapse0x3c24b50();
   input += synapse0x3c24b90();
   input += synapse0x3c24bd0();
   input += synapse0x3c24c10();
   input += synapse0x3c24c50();
   input += synapse0x3c24c90();
   input += synapse0x3c24cd0();
   input += synapse0x3c3c7f0();
   input += synapse0x3c3c830();
   input += synapse0x3c3c870();
   input += synapse0x3c3c8b0();
   input += synapse0x3c3c8f0();
   input += synapse0x3c3c930();
   input += synapse0x3c3c970();
   input += synapse0x3c3c9b0();
   input += synapse0x3c3c230();
   input += synapse0x3c3c270();
   input += synapse0x3c3cb00();
   input += synapse0x3c3cb40();
   input += synapse0x3c3cb80();
   input += synapse0x3c3cbc0();
   input += synapse0x3c3cc00();
   input += synapse0x3c3cc40();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c3c0a0() {
   double input = input0x3c3c0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c3cc80() {
   double input = 3.44724;
   input += synapse0x3c3cfc0();
   input += synapse0x3c3d000();
   input += synapse0x3c3d040();
   input += synapse0x3c3d080();
   input += synapse0x3c3d0c0();
   input += synapse0x3c3d100();
   input += synapse0x3c3d140();
   input += synapse0x3c3d180();
   input += synapse0x3c3d1c0();
   input += synapse0x3c3d200();
   input += synapse0x3c3d240();
   input += synapse0x3c3d280();
   input += synapse0x3c3d2c0();
   input += synapse0x3c3d300();
   input += synapse0x3c3d340();
   input += synapse0x3c3d380();
   input += synapse0x3c3ce10();
   input += synapse0x3c3ce50();
   input += synapse0x3c3d4d0();
   input += synapse0x3c3d510();
   input += synapse0x3c3d550();
   input += synapse0x3c3d590();
   input += synapse0x3c3d5d0();
   input += synapse0x3c3d610();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c3cc80() {
   double input = input0x3c3cc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c3d650() {
   double input = -0.53363;
   input += synapse0x3c3d990();
   input += synapse0x3c3d9d0();
   input += synapse0x3c3da10();
   input += synapse0x3c3da50();
   input += synapse0x3c3da90();
   input += synapse0x3c3dad0();
   input += synapse0x3c3db10();
   input += synapse0x3c3db50();
   input += synapse0x3c3db90();
   input += synapse0x3c3dbd0();
   input += synapse0x3c3dc10();
   input += synapse0x3c3dc50();
   input += synapse0x3c3dc90();
   input += synapse0x3c3dcd0();
   input += synapse0x3c3dd10();
   input += synapse0x3c3dd50();
   input += synapse0x3c3d7e0();
   input += synapse0x3c3d820();
   input += synapse0x3c2e350();
   input += synapse0x3c2e390();
   input += synapse0x3c2e3d0();
   input += synapse0x3c2e410();
   input += synapse0x3c2e450();
   input += synapse0x3c2e490();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c3d650() {
   double input = input0x3c3d650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2e4d0() {
   double input = -7.14789;
   input += synapse0x3c2e810();
   input += synapse0x3c2e850();
   input += synapse0x3c2e890();
   input += synapse0x3c2e8d0();
   input += synapse0x3c2e910();
   input += synapse0x3c2e950();
   input += synapse0x3c2e990();
   input += synapse0x3c2e9d0();
   input += synapse0x3c2ea10();
   input += synapse0x3c2ea50();
   input += synapse0x3c2ea90();
   input += synapse0x3c2ead0();
   input += synapse0x3c2eb10();
   input += synapse0x3c2eb50();
   input += synapse0x3c2eb90();
   input += synapse0x3c2ebd0();
   input += synapse0x3c2e660();
   input += synapse0x3c2e6a0();
   input += synapse0x3c2ed20();
   input += synapse0x3c2ed60();
   input += synapse0x3c2eda0();
   input += synapse0x3c2ede0();
   input += synapse0x3c2ee20();
   input += synapse0x3c2ee60();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2e4d0() {
   double input = input0x3c2e4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2eea0() {
   double input = -2.57941;
   input += synapse0x3c2f1e0();
   input += synapse0x3c2f220();
   input += synapse0x3c2f260();
   input += synapse0x3c2f2a0();
   input += synapse0x3c2f2e0();
   input += synapse0x3c2f320();
   input += synapse0x3c2f360();
   input += synapse0x3c2f3a0();
   input += synapse0x3c2f3e0();
   input += synapse0x3c2f420();
   input += synapse0x3c2f460();
   input += synapse0x3c2f4a0();
   input += synapse0x3c2f4e0();
   input += synapse0x3c2f520();
   input += synapse0x3c2f560();
   input += synapse0x3c2f5a0();
   input += synapse0x3c2f030();
   input += synapse0x3c2f070();
   input += synapse0x3c2f6f0();
   input += synapse0x3c2f730();
   input += synapse0x3c2f770();
   input += synapse0x3c2f7b0();
   input += synapse0x3c2f7f0();
   input += synapse0x3c2f830();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2eea0() {
   double input = input0x3c2eea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c2f870() {
   double input = 6.49954;
   input += synapse0x3c2fbb0();
   input += synapse0x3c2fbf0();
   input += synapse0x3c2fc30();
   input += synapse0x3c2fc70();
   input += synapse0x3c2fcb0();
   input += synapse0x3c2fcf0();
   input += synapse0x3c2fd30();
   input += synapse0x3c2fd70();
   input += synapse0x3c2fdb0();
   input += synapse0x3c2fdf0();
   input += synapse0x3c2fe30();
   input += synapse0x3c2fe70();
   input += synapse0x3c2feb0();
   input += synapse0x3c2fef0();
   input += synapse0x3c2ff30();
   input += synapse0x3c2ff70();
   input += synapse0x3c2fa00();
   input += synapse0x3c2fa40();
   input += synapse0x3c300c0();
   input += synapse0x3c30100();
   input += synapse0x3c30140();
   input += synapse0x3c30180();
   input += synapse0x3c301c0();
   input += synapse0x3c30200();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c2f870() {
   double input = input0x3c2f870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c41eb0() {
   double input = 2.11396;
   input += synapse0x3c420d0();
   input += synapse0x3c42110();
   input += synapse0x3c42150();
   input += synapse0x3c42190();
   input += synapse0x3c421d0();
   input += synapse0x3c42210();
   input += synapse0x3c42250();
   input += synapse0x3c42290();
   input += synapse0x3c422d0();
   input += synapse0x3c42310();
   input += synapse0x3c42350();
   input += synapse0x3c42390();
   input += synapse0x3c423d0();
   input += synapse0x3c42410();
   input += synapse0x3c42450();
   input += synapse0x3c42490();
   input += synapse0x3c30240();
   input += synapse0x3c30280();
   input += synapse0x3c425e0();
   input += synapse0x3c42620();
   input += synapse0x3c42660();
   input += synapse0x3c426a0();
   input += synapse0x3c426e0();
   input += synapse0x3c42720();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c41eb0() {
   double input = input0x3c41eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c42760() {
   double input = -1.13175;
   input += synapse0x3c42aa0();
   input += synapse0x3c42ae0();
   input += synapse0x3c42b20();
   input += synapse0x3c42b60();
   input += synapse0x3c42ba0();
   input += synapse0x3c42be0();
   input += synapse0x3c42c20();
   input += synapse0x3c42c60();
   input += synapse0x3c42ca0();
   input += synapse0x3c42ce0();
   input += synapse0x3c42d20();
   input += synapse0x3c42d60();
   input += synapse0x3c42da0();
   input += synapse0x3c42de0();
   input += synapse0x3c42e20();
   input += synapse0x3c42e60();
   input += synapse0x3c428f0();
   input += synapse0x3c42930();
   input += synapse0x3c42fb0();
   input += synapse0x3c42ff0();
   input += synapse0x3c43030();
   input += synapse0x3c43070();
   input += synapse0x3c430b0();
   input += synapse0x3c430f0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c42760() {
   double input = input0x3c42760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c43130() {
   double input = -0.634987;
   input += synapse0x3c43470();
   input += synapse0x3c434b0();
   input += synapse0x3c434f0();
   input += synapse0x3c43530();
   input += synapse0x3c43570();
   input += synapse0x3c435b0();
   input += synapse0x3c435f0();
   input += synapse0x3c43630();
   input += synapse0x3c43670();
   input += synapse0x3c436b0();
   input += synapse0x3c436f0();
   input += synapse0x3c43730();
   input += synapse0x3c43770();
   input += synapse0x3c437b0();
   input += synapse0x3c437f0();
   input += synapse0x3c43830();
   input += synapse0x3c432c0();
   input += synapse0x3c43300();
   input += synapse0x3c43980();
   input += synapse0x3c439c0();
   input += synapse0x3c43a00();
   input += synapse0x3c43a40();
   input += synapse0x3c43a80();
   input += synapse0x3c43ac0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c43130() {
   double input = input0x3c43130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c43b00() {
   double input = -1.99458;
   input += synapse0x3c43e40();
   input += synapse0x3c43e80();
   input += synapse0x3c43ec0();
   input += synapse0x3c43f00();
   input += synapse0x3c43f40();
   input += synapse0x3c43f80();
   input += synapse0x3c43fc0();
   input += synapse0x3c44000();
   input += synapse0x3c44040();
   input += synapse0x3c44080();
   input += synapse0x3c440c0();
   input += synapse0x3c44100();
   input += synapse0x3c44140();
   input += synapse0x3c44180();
   input += synapse0x3c441c0();
   input += synapse0x3c44200();
   input += synapse0x3c43c90();
   input += synapse0x3c43cd0();
   input += synapse0x3c44350();
   input += synapse0x3c44390();
   input += synapse0x3c443d0();
   input += synapse0x3c44410();
   input += synapse0x3c44450();
   input += synapse0x3c44490();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c43b00() {
   double input = input0x3c43b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c4ad00() {
   double input = -5.3312;
   input += synapse0x39e4270();
   input += synapse0x39e42b0();
   input += synapse0x3c20e40();
   input += synapse0x3c20e80();
   input += synapse0x3c22910();
   input += synapse0x3c22950();
   input += synapse0x3c236e0();
   input += synapse0x3c23720();
   input += synapse0x3c240b0();
   input += synapse0x3c240f0();
   input += synapse0x3c24a80();
   input += synapse0x3c24ac0();
   input += synapse0x3c25560();
   input += synapse0x3c255a0();
   input += synapse0x3c25f30();
   input += synapse0x3c25f70();
   input += synapse0x3c23010();
   input += synapse0x3c23050();
   input += synapse0x3c27ae0();
   input += synapse0x3c27b20();
   input += synapse0x3c284b0();
   input += synapse0x3c284f0();
   input += synapse0x3c28e80();
   input += synapse0x3c28ec0();
   input += synapse0x3c29850();
   input += synapse0x3c29890();
   input += synapse0x3c1c8e0();
   input += synapse0x3c1c920();
   input += synapse0x3c2b940();
   input += synapse0x3c2b980();
   input += synapse0x3c2c310();
   input += synapse0x3c2c350();
   input += synapse0x3c2cce0();
   input += synapse0x3c2cd20();
   input += synapse0x3c2d6b0();
   input += synapse0x3c2d6f0();
   input += synapse0x3c2e080();
   input += synapse0x3c2e0c0();
   input += synapse0x3c26bd0();
   input += synapse0x3c26c10();
   input += synapse0x3c30480();
   input += synapse0x3c304c0();
   input += synapse0x3c30e10();
   input += synapse0x3c30e50();
   input += synapse0x3c317e0();
   input += synapse0x3c31820();
   input += synapse0x3c321b0();
   input += synapse0x3c321f0();
   input += synapse0x3c32b80();
   input += synapse0x3c32bc0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c4ad00() {
   double input = input0x3c4ad00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c4b0a0() {
   double input = 3.45356;
   input += synapse0x3c352c0();
   input += synapse0x3c35300();
   input += synapse0x3c2a880();
   input += synapse0x3c2a8c0();
   input += synapse0x3c37ea0();
   input += synapse0x3c37ee0();
   input += synapse0x3c38870();
   input += synapse0x3c388b0();
   input += synapse0x3c39240();
   input += synapse0x3c39280();
   input += synapse0x3c39c10();
   input += synapse0x3c39c50();
   input += synapse0x3c3a5e0();
   input += synapse0x3c3a620();
   input += synapse0x3c3afb0();
   input += synapse0x3c3aff0();
   input += synapse0x3c3b980();
   input += synapse0x3c3b9c0();
   input += synapse0x3c3c350();
   input += synapse0x3c3c390();
   input += synapse0x3c3cf30();
   input += synapse0x3c3cf70();
   input += synapse0x3c3d900();
   input += synapse0x3c3d940();
   input += synapse0x3c2e780();
   input += synapse0x3c2e7c0();
   input += synapse0x3c2f150();
   input += synapse0x3c2f190();
   input += synapse0x3c2fb20();
   input += synapse0x3c2fb60();
   input += synapse0x3c42040();
   input += synapse0x3c42080();
   input += synapse0x3c42a10();
   input += synapse0x3c42a50();
   input += synapse0x3c433e0();
   input += synapse0x3c43420();
   input += synapse0x3c43db0();
   input += synapse0x3c43df0();
   input += synapse0x3c1ed40();
   input += synapse0x3c1ed80();
   input += synapse0x3c33550();
   input += synapse0x3c33590();
   input += synapse0x3c444d0();
   input += synapse0x3c44510();
   input += synapse0x3c44550();
   input += synapse0x3c44590();
   input += synapse0x3c4b440();
   input += synapse0x3c4b480();
   input += synapse0x3c4b4c0();
   input += synapse0x3c4b500();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c4b0a0() {
   double input = input0x3c4b0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c4b540() {
   double input = 3.87591;
   input += synapse0x3c4b880();
   input += synapse0x3c4b8c0();
   input += synapse0x3c4b900();
   input += synapse0x3c4b940();
   input += synapse0x3c4b980();
   input += synapse0x3c4b9c0();
   input += synapse0x3c4ba00();
   input += synapse0x3c4ba40();
   input += synapse0x3c4ba80();
   input += synapse0x3c4bac0();
   input += synapse0x3c4bb00();
   input += synapse0x3c4bb40();
   input += synapse0x3c4bb80();
   input += synapse0x3c4bbc0();
   input += synapse0x3c4bc00();
   input += synapse0x3c4bc40();
   input += synapse0x3c4b6d0();
   input += synapse0x3c4b710();
   input += synapse0x3c4bd90();
   input += synapse0x3c4bdd0();
   input += synapse0x3c4be10();
   input += synapse0x3c4be50();
   input += synapse0x3c4be90();
   input += synapse0x3c4bed0();
   input += synapse0x3c4bf10();
   input += synapse0x3c4bf50();
   input += synapse0x3c4bf90();
   input += synapse0x3c4bfd0();
   input += synapse0x3c4c010();
   input += synapse0x3c4c050();
   input += synapse0x3c4c090();
   input += synapse0x3c4c0d0();
   input += synapse0x3c4bc80();
   input += synapse0x3c4bcc0();
   input += synapse0x3c4bd00();
   input += synapse0x3c4bd40();
   input += synapse0x3c4c320();
   input += synapse0x3c4c360();
   input += synapse0x3c4c3a0();
   input += synapse0x3c4c3e0();
   input += synapse0x3c4c420();
   input += synapse0x3c4c460();
   input += synapse0x3c4c4a0();
   input += synapse0x3c4c4e0();
   input += synapse0x3c4c520();
   input += synapse0x3c4c560();
   input += synapse0x3c4c5a0();
   input += synapse0x3c4c5e0();
   input += synapse0x3c4c620();
   input += synapse0x3c4c660();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c4b540() {
   double input = input0x3c4b540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c4c6a0() {
   double input = 2.9297;
   input += synapse0x3c4c9e0();
   input += synapse0x3c4ca20();
   input += synapse0x3c4ca60();
   input += synapse0x3c4caa0();
   input += synapse0x3c4cae0();
   input += synapse0x3c4cb20();
   input += synapse0x3c4cb60();
   input += synapse0x3c4cba0();
   input += synapse0x3c4cbe0();
   input += synapse0x3c4cc20();
   input += synapse0x3c4cc60();
   input += synapse0x3c4cca0();
   input += synapse0x3c4cce0();
   input += synapse0x3c4cd20();
   input += synapse0x3c4cd60();
   input += synapse0x3c4cda0();
   input += synapse0x3c4c830();
   input += synapse0x3c4c870();
   input += synapse0x3c4cef0();
   input += synapse0x3c4cf30();
   input += synapse0x3c4cf70();
   input += synapse0x3c4cfb0();
   input += synapse0x3c4cff0();
   input += synapse0x3c4d030();
   input += synapse0x3c4d070();
   input += synapse0x3c4d0b0();
   input += synapse0x3c4d0f0();
   input += synapse0x3c4d130();
   input += synapse0x3c4d170();
   input += synapse0x3c4d1b0();
   input += synapse0x3c4d1f0();
   input += synapse0x3c4d230();
   input += synapse0x3c4cde0();
   input += synapse0x3c4ce20();
   input += synapse0x3c4ce60();
   input += synapse0x3c4cea0();
   input += synapse0x3c4d480();
   input += synapse0x3c4d4c0();
   input += synapse0x3c4d500();
   input += synapse0x3c4d540();
   input += synapse0x3c4d580();
   input += synapse0x3c4d5c0();
   input += synapse0x3c4d600();
   input += synapse0x3c4d640();
   input += synapse0x3c4d680();
   input += synapse0x3c4d6c0();
   input += synapse0x3c4d700();
   input += synapse0x3c4d740();
   input += synapse0x3c4d780();
   input += synapse0x3c4d7c0();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c4c6a0() {
   double input = input0x3c4c6a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c4d800() {
   double input = 2.57726;
   input += synapse0x3c4db40();
   input += synapse0x3c4db80();
   input += synapse0x3c4dbc0();
   input += synapse0x3c4dc00();
   input += synapse0x3c4dc40();
   input += synapse0x3c4dc80();
   input += synapse0x3c4dcc0();
   input += synapse0x3c4dd00();
   input += synapse0x3c4dd40();
   input += synapse0x3c4dd80();
   input += synapse0x3c4ddc0();
   input += synapse0x3c4de00();
   input += synapse0x3c4de40();
   input += synapse0x3c4de80();
   input += synapse0x3c4dec0();
   input += synapse0x3c4df00();
   input += synapse0x3c4d990();
   input += synapse0x3c4d9d0();
   input += synapse0x3c4e050();
   input += synapse0x3c4e090();
   input += synapse0x3c4e0d0();
   input += synapse0x3c4e110();
   input += synapse0x3c4e150();
   input += synapse0x3c4e190();
   input += synapse0x3c4e1d0();
   input += synapse0x3c4e210();
   input += synapse0x3c4e250();
   input += synapse0x3c4e290();
   input += synapse0x3c4e2d0();
   input += synapse0x3c4e310();
   input += synapse0x3c4e350();
   input += synapse0x3c4e390();
   input += synapse0x3c4df40();
   input += synapse0x3c4df80();
   input += synapse0x3c4dfc0();
   input += synapse0x3c4e000();
   input += synapse0x3c4e5e0();
   input += synapse0x3c4e620();
   input += synapse0x3c4e660();
   input += synapse0x3c4e6a0();
   input += synapse0x3c4e6e0();
   input += synapse0x3c4e720();
   input += synapse0x3c4e760();
   input += synapse0x3c4e7a0();
   input += synapse0x3c4e7e0();
   input += synapse0x3c4e820();
   input += synapse0x3c4e860();
   input += synapse0x3c4e8a0();
   input += synapse0x3c4e8e0();
   input += synapse0x3c4e920();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c4d800() {
   double input = input0x3c4d800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi2::input0x3c4e960() {
   double input = 3.06489;
   input += synapse0x3c4eb80();
   input += synapse0x3c4ebc0();
   input += synapse0x3c4ec00();
   input += synapse0x3c4ec40();
   input += synapse0x3c4ec80();
   return input;
}

double NNfunction_nn_chi1_chi2::neuron0x3c4e960() {
   double input = input0x3c4e960();
   return (input * 1)+0;
}

double NNfunction_nn_chi1_chi2::synapse0x3c1edd0() {
   return (neuron0x3c199d0()*-0.297221);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ee10() {
   return (neuron0x3c19c80()*0.26411);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ee50() {
   return (neuron0x3c19fc0()*-1.45484);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ee90() {
   return (neuron0x3c1a300()*-0.0153518);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1eed0() {
   return (neuron0x3c1a640()*-0.0876722);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ef10() {
   return (neuron0x3c1a980()*-0.15414);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ef50() {
   return (neuron0x3c1acc0()*-0.21366);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ef90() {
   return (neuron0x3c1b000()*0.0177704);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1efd0() {
   return (neuron0x3c1b340()*0.227865);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f010() {
   return (neuron0x3c1b680()*-0.0136104);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f050() {
   return (neuron0x3c1b9c0()*-0.299835);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f090() {
   return (neuron0x3c1bd00()*-1.22969);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f0d0() {
   return (neuron0x3c1c040()*-0.732808);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f110() {
   return (neuron0x3c1c380()*-0.0444467);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f150() {
   return (neuron0x3c1c6c0()*-0.131437);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f190() {
   return (neuron0x3c1ca00()*-0.708307);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ec20() {
   return (neuron0x3c1cd40()*-0.0633096);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ec60() {
   return (neuron0x3c1d2a0()*0.310379);
}

double NNfunction_nn_chi1_chi2::synapse0x39d5e60() {
   return (neuron0x3c1d5e0()*-0.658998);
}

double NNfunction_nn_chi1_chi2::synapse0x39d5ea0() {
   return (neuron0x3c1d920()*-0.112034);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f1d0() {
   return (neuron0x3c1dc60()*-0.364284);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f210() {
   return (neuron0x3c1dfa0()*-0.31545);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f250() {
   return (neuron0x3c1e2e0()*0.117787);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f290() {
   return (neuron0x3c1e620()*-2.32909);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f610() {
   return (neuron0x3c199d0()*0.336221);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f650() {
   return (neuron0x3c19c80()*-0.946226);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f690() {
   return (neuron0x3c19fc0()*-2.91418);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f6d0() {
   return (neuron0x3c1a300()*-1.85703);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f710() {
   return (neuron0x3c1a640()*-0.151512);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f750() {
   return (neuron0x3c1a980()*0.820593);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f790() {
   return (neuron0x3c1acc0()*1.06439);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f7d0() {
   return (neuron0x3c1b000()*0.798437);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f810() {
   return (neuron0x3c1b340()*0.854368);
}

double NNfunction_nn_chi1_chi2::synapse0x39d5cb0() {
   return (neuron0x3c1b680()*0.525864);
}

double NNfunction_nn_chi1_chi2::synapse0x39d5cf0() {
   return (neuron0x3c1b9c0()*1.29011);
}

double NNfunction_nn_chi1_chi2::synapse0x39d5d30() {
   return (neuron0x3c1bd00()*-1.07733);
}

double NNfunction_nn_chi1_chi2::synapse0x39d5d70() {
   return (neuron0x3c1c040()*-1.65434);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1fa60() {
   return (neuron0x3c1c380()*-1.16928);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1faa0() {
   return (neuron0x3c1c6c0()*0.939186);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1fae0() {
   return (neuron0x3c1ca00()*0.180877);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f460() {
   return (neuron0x3c1cd40()*0.116804);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f4a0() {
   return (neuron0x3c1d2a0()*-0.38951);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1fc30() {
   return (neuron0x3c1d5e0()*0.64142);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1fc70() {
   return (neuron0x3c1d920()*-0.351642);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1fcb0() {
   return (neuron0x3c1dc60()*2.5648);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1fcf0() {
   return (neuron0x3c1dfa0()*0.0457895);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1fd30() {
   return (neuron0x3c1e2e0()*-2.01693);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1fd70() {
   return (neuron0x3c1e620()*-1.68558);
}

double NNfunction_nn_chi1_chi2::synapse0x3c200f0() {
   return (neuron0x3c199d0()*0.0671438);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20130() {
   return (neuron0x3c19c80()*-7.01375);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20170() {
   return (neuron0x3c19fc0()*1.15586);
}

double NNfunction_nn_chi1_chi2::synapse0x3c201b0() {
   return (neuron0x3c1a300()*-0.221437);
}

double NNfunction_nn_chi1_chi2::synapse0x3c201f0() {
   return (neuron0x3c1a640()*0.0632846);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20230() {
   return (neuron0x3c1a980()*-0.0108423);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20270() {
   return (neuron0x3c1acc0()*-0.05399);
}

double NNfunction_nn_chi1_chi2::synapse0x3c202b0() {
   return (neuron0x3c1b000()*-0.145927);
}

double NNfunction_nn_chi1_chi2::synapse0x3c202f0() {
   return (neuron0x3c1b340()*0.0817564);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20330() {
   return (neuron0x3c1b680()*-0.0769145);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20370() {
   return (neuron0x3c1b9c0()*0.023081);
}

double NNfunction_nn_chi1_chi2::synapse0x3c203b0() {
   return (neuron0x3c1bd00()*0.0753411);
}

double NNfunction_nn_chi1_chi2::synapse0x3c203f0() {
   return (neuron0x3c1c040()*-0.255857);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20430() {
   return (neuron0x3c1c380()*-0.149039);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20470() {
   return (neuron0x3c1c6c0()*0.0676309);
}

double NNfunction_nn_chi1_chi2::synapse0x3c204b0() {
   return (neuron0x3c1ca00()*-7.5343e-05);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ff40() {
   return (neuron0x3c1cd40()*-0.0439314);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ff80() {
   return (neuron0x3c1d2a0()*-0.0585436);
}

double NNfunction_nn_chi1_chi2::synapse0x294df10() {
   return (neuron0x3c1d5e0()*0.0785954);
}

double NNfunction_nn_chi1_chi2::synapse0x39e3a80() {
   return (neuron0x3c1d920()*-0.135811);
}

double NNfunction_nn_chi1_chi2::synapse0x39e3ac0() {
   return (neuron0x3c1dc60()*0.241418);
}

double NNfunction_nn_chi1_chi2::synapse0x3c223e0() {
   return (neuron0x3c1dfa0()*-0.0295226);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22420() {
   return (neuron0x3c1e2e0()*-0.118336);
}

double NNfunction_nn_chi1_chi2::synapse0x3c19710() {
   return (neuron0x3c1e620()*-5.60872);
}

double NNfunction_nn_chi1_chi2::synapse0x3c197e0() {
   return (neuron0x3c199d0()*1.41106);
}

double NNfunction_nn_chi1_chi2::synapse0x39e4300() {
   return (neuron0x3c19c80()*0.272028);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1f9e0() {
   return (neuron0x3c19fc0()*-1.02785);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1fa20() {
   return (neuron0x3c1a300()*1.7387);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20600() {
   return (neuron0x3c1a640()*0.465817);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20640() {
   return (neuron0x3c1a980()*0.241819);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20680() {
   return (neuron0x3c1acc0()*-0.038357);
}

double NNfunction_nn_chi1_chi2::synapse0x3c206c0() {
   return (neuron0x3c1b000()*0.0234374);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20700() {
   return (neuron0x3c1b340()*0.314451);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20740() {
   return (neuron0x3c1b680()*-0.14517);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20780() {
   return (neuron0x3c1b9c0()*-0.977202);
}

double NNfunction_nn_chi1_chi2::synapse0x3c207c0() {
   return (neuron0x3c1bd00()*0.821251);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20800() {
   return (neuron0x3c1c040()*0.753641);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20840() {
   return (neuron0x3c1c380()*0.887662);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20880() {
   return (neuron0x3c1c6c0()*0.507146);
}

double NNfunction_nn_chi1_chi2::synapse0x3c208c0() {
   return (neuron0x3c1ca00()*0.349234);
}

double NNfunction_nn_chi1_chi2::synapse0x3c19750() {
   return (neuron0x3c1cd40()*0.700854);
}

double NNfunction_nn_chi1_chi2::synapse0x3c19790() {
   return (neuron0x3c1d2a0()*0.687501);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20a10() {
   return (neuron0x3c1d5e0()*0.516758);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20a50() {
   return (neuron0x3c1d920()*0.554492);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20a90() {
   return (neuron0x3c1dc60()*-0.296113);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20ad0() {
   return (neuron0x3c1dfa0()*-0.330942);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20b10() {
   return (neuron0x3c1e2e0()*0.59581);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20b50() {
   return (neuron0x3c1e620()*-16.2382);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20ed0() {
   return (neuron0x3c199d0()*0.213958);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20f10() {
   return (neuron0x3c19c80()*-0.00982159);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20f50() {
   return (neuron0x3c19fc0()*-1.1998);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20f90() {
   return (neuron0x3c1a300()*0.171157);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20fd0() {
   return (neuron0x3c1a640()*-0.132228);
}

double NNfunction_nn_chi1_chi2::synapse0x3c21010() {
   return (neuron0x3c1a980()*0.0214384);
}

double NNfunction_nn_chi1_chi2::synapse0x3c21050() {
   return (neuron0x3c1acc0()*0.0319821);
}

double NNfunction_nn_chi1_chi2::synapse0x3c21090() {
   return (neuron0x3c1b000()*0.0232542);
}

double NNfunction_nn_chi1_chi2::synapse0x3c210d0() {
   return (neuron0x3c1b340()*0.120622);
}

double NNfunction_nn_chi1_chi2::synapse0x3c21110() {
   return (neuron0x3c1b680()*-0.00393731);
}

double NNfunction_nn_chi1_chi2::synapse0x3c21150() {
   return (neuron0x3c1b9c0()*0.0147264);
}

double NNfunction_nn_chi1_chi2::synapse0x3c21190() {
   return (neuron0x3c1bd00()*-4.31909);
}

double NNfunction_nn_chi1_chi2::synapse0x3c211d0() {
   return (neuron0x3c1c040()*0.136919);
}

double NNfunction_nn_chi1_chi2::synapse0x3c21210() {
   return (neuron0x3c1c380()*0.35866);
}

double NNfunction_nn_chi1_chi2::synapse0x3c21250() {
   return (neuron0x3c1c6c0()*-0.0276547);
}

double NNfunction_nn_chi1_chi2::synapse0x3c21290() {
   return (neuron0x3c1ca00()*-0.0916918);
}

double NNfunction_nn_chi1_chi2::synapse0x3c213e0() {
   return (neuron0x3c1cd40()*0.15062);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20d20() {
   return (neuron0x3c1d2a0()*-0.0294822);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20d60() {
   return (neuron0x3c1d5e0()*0.0665316);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22520() {
   return (neuron0x3c1d920()*0.0492611);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22560() {
   return (neuron0x3c1dc60()*-0.186747);
}

double NNfunction_nn_chi1_chi2::synapse0x3c225a0() {
   return (neuron0x3c1dfa0()*-0.233853);
}

double NNfunction_nn_chi1_chi2::synapse0x3c225e0() {
   return (neuron0x3c1e2e0()*-0.113615);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22620() {
   return (neuron0x3c1e620()*-8.17929);
}

double NNfunction_nn_chi1_chi2::synapse0x3c229a0() {
   return (neuron0x3c199d0()*-0.0120778);
}

double NNfunction_nn_chi1_chi2::synapse0x3c229e0() {
   return (neuron0x3c19c80()*-0.00935609);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22a20() {
   return (neuron0x3c19fc0()*0.0581176);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22a60() {
   return (neuron0x3c1a300()*0.020106);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22aa0() {
   return (neuron0x3c1a640()*-0.00689254);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22ae0() {
   return (neuron0x3c1a980()*-0.0137665);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22b20() {
   return (neuron0x3c1acc0()*-0.00524992);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22b60() {
   return (neuron0x3c1b000()*-0.00226839);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22ba0() {
   return (neuron0x3c1b340()*-0.00931791);
}

double NNfunction_nn_chi1_chi2::synapse0x39e3dd0() {
   return (neuron0x3c1b680()*-0.00693665);
}

double NNfunction_nn_chi1_chi2::synapse0x39e3e10() {
   return (neuron0x3c1b9c0()*-0.0201081);
}

double NNfunction_nn_chi1_chi2::synapse0x39e3e50() {
   return (neuron0x3c1bd00()*-0.112298);
}

double NNfunction_nn_chi1_chi2::synapse0x39e3e90() {
   return (neuron0x3c1c040()*-0.00650198);
}

double NNfunction_nn_chi1_chi2::synapse0x39e3ed0() {
   return (neuron0x3c1c380()*-0.0199272);
}

double NNfunction_nn_chi1_chi2::synapse0x39e3f10() {
   return (neuron0x3c1c6c0()*0.00610491);
}

double NNfunction_nn_chi1_chi2::synapse0x39e3f50() {
   return (neuron0x3c1ca00()*0.00658046);
}

double NNfunction_nn_chi1_chi2::synapse0x3c227f0() {
   return (neuron0x3c1cd40()*-0.0106205);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22830() {
   return (neuron0x3c1d2a0()*-0.00464998);
}

double NNfunction_nn_chi1_chi2::synapse0x39e40a0() {
   return (neuron0x3c1d5e0()*-0.0131346);
}

double NNfunction_nn_chi1_chi2::synapse0x39e40e0() {
   return (neuron0x3c1d920()*-0.0134169);
}

double NNfunction_nn_chi1_chi2::synapse0x39e4120() {
   return (neuron0x3c1dc60()*0.00378059);
}

double NNfunction_nn_chi1_chi2::synapse0x39e4160() {
   return (neuron0x3c1dfa0()*-0.00534142);
}

double NNfunction_nn_chi1_chi2::synapse0x39e41a0() {
   return (neuron0x3c1e2e0()*0.0054971);
}

double NNfunction_nn_chi1_chi2::synapse0x3c233f0() {
   return (neuron0x3c1e620()*3.76733);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23770() {
   return (neuron0x3c199d0()*0.449258);
}

double NNfunction_nn_chi1_chi2::synapse0x3c237b0() {
   return (neuron0x3c19c80()*0.375311);
}

double NNfunction_nn_chi1_chi2::synapse0x3c237f0() {
   return (neuron0x3c19fc0()*-0.588119);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23830() {
   return (neuron0x3c1a300()*-5.56496);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23870() {
   return (neuron0x3c1a640()*1.40542);
}

double NNfunction_nn_chi1_chi2::synapse0x3c238b0() {
   return (neuron0x3c1a980()*-0.0301495);
}

double NNfunction_nn_chi1_chi2::synapse0x3c238f0() {
   return (neuron0x3c1acc0()*1.50279);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23930() {
   return (neuron0x3c1b000()*1.57877);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23970() {
   return (neuron0x3c1b340()*-0.546043);
}

double NNfunction_nn_chi1_chi2::synapse0x3c239b0() {
   return (neuron0x3c1b680()*-0.25814);
}

double NNfunction_nn_chi1_chi2::synapse0x3c239f0() {
   return (neuron0x3c1b9c0()*1.77757);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23a30() {
   return (neuron0x3c1bd00()*-1.52706);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23a70() {
   return (neuron0x3c1c040()*-1.29973);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23ab0() {
   return (neuron0x3c1c380()*-1.03321);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23af0() {
   return (neuron0x3c1c6c0()*-0.620413);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23b30() {
   return (neuron0x3c1ca00()*0.925816);
}

double NNfunction_nn_chi1_chi2::synapse0x3c235c0() {
   return (neuron0x3c1cd40()*-1.01004);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23600() {
   return (neuron0x3c1d2a0()*0.315255);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23c80() {
   return (neuron0x3c1d5e0()*-0.975514);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23cc0() {
   return (neuron0x3c1d920()*-0.897487);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23d00() {
   return (neuron0x3c1dc60()*3.68592);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23d40() {
   return (neuron0x3c1dfa0()*0.400354);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23d80() {
   return (neuron0x3c1e2e0()*-1.25228);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23dc0() {
   return (neuron0x3c1e620()*0.724135);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24140() {
   return (neuron0x3c199d0()*0.105178);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24180() {
   return (neuron0x3c19c80()*1.21923);
}

double NNfunction_nn_chi1_chi2::synapse0x3c241c0() {
   return (neuron0x3c19fc0()*1.49155);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24200() {
   return (neuron0x3c1a300()*1.95347);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24240() {
   return (neuron0x3c1a640()*0.0307278);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24280() {
   return (neuron0x3c1a980()*-1.47916);
}

double NNfunction_nn_chi1_chi2::synapse0x3c242c0() {
   return (neuron0x3c1acc0()*-1.28181);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24300() {
   return (neuron0x3c1b000()*-0.775205);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24340() {
   return (neuron0x3c1b340()*-0.809984);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24380() {
   return (neuron0x3c1b680()*-0.995059);
}

double NNfunction_nn_chi1_chi2::synapse0x3c243c0() {
   return (neuron0x3c1b9c0()*-1.62067);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24400() {
   return (neuron0x3c1bd00()*1.3574);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24440() {
   return (neuron0x3c1c040()*2.06072);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24480() {
   return (neuron0x3c1c380()*1.81447);
}

double NNfunction_nn_chi1_chi2::synapse0x3c244c0() {
   return (neuron0x3c1c6c0()*-1.32806);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24500() {
   return (neuron0x3c1ca00()*-0.459541);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23f90() {
   return (neuron0x3c1cd40()*-0.0571603);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23fd0() {
   return (neuron0x3c1d2a0()*0.950766);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24650() {
   return (neuron0x3c1d5e0()*-0.623883);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24690() {
   return (neuron0x3c1d920()*0.855109);
}

double NNfunction_nn_chi1_chi2::synapse0x3c246d0() {
   return (neuron0x3c1dc60()*-3.041);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24710() {
   return (neuron0x3c1dfa0()*0.0372671);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24750() {
   return (neuron0x3c1e2e0()*2.35432);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24790() {
   return (neuron0x3c1e620()*1.87249);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1d190() {
   return (neuron0x3c199d0()*0.898052);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1d1d0() {
   return (neuron0x3c19c80()*0.534491);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1d210() {
   return (neuron0x3c19fc0()*-0.801189);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1d250() {
   return (neuron0x3c1a300()*-0.215414);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24d20() {
   return (neuron0x3c1a640()*0.222981);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24d60() {
   return (neuron0x3c1a980()*-0.15931);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24da0() {
   return (neuron0x3c1acc0()*-0.627235);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24de0() {
   return (neuron0x3c1b000()*0.234812);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24e20() {
   return (neuron0x3c1b340()*1.17274);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24e60() {
   return (neuron0x3c1b680()*0.199898);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24ea0() {
   return (neuron0x3c1b9c0()*-0.609635);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24ee0() {
   return (neuron0x3c1bd00()*2.84001);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24f20() {
   return (neuron0x3c1c040()*-2.39305);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24f60() {
   return (neuron0x3c1c380()*-0.426132);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24fa0() {
   return (neuron0x3c1c6c0()*-0.120682);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24fe0() {
   return (neuron0x3c1ca00()*-0.355946);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24960() {
   return (neuron0x3c1cd40()*-0.154126);
}

double NNfunction_nn_chi1_chi2::synapse0x3c249a0() {
   return (neuron0x3c1d2a0()*-0.321651);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25130() {
   return (neuron0x3c1d5e0()*1.58069);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25170() {
   return (neuron0x3c1d920()*0.153031);
}

double NNfunction_nn_chi1_chi2::synapse0x3c251b0() {
   return (neuron0x3c1dc60()*0.226732);
}

double NNfunction_nn_chi1_chi2::synapse0x3c251f0() {
   return (neuron0x3c1dfa0()*-0.308907);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25230() {
   return (neuron0x3c1e2e0()*0.764432);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25270() {
   return (neuron0x3c1e620()*-3.73323);
}

double NNfunction_nn_chi1_chi2::synapse0x3c255f0() {
   return (neuron0x3c199d0()*-0.0835715);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25630() {
   return (neuron0x3c19c80()*0.00516404);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25670() {
   return (neuron0x3c19fc0()*-9.70903);
}

double NNfunction_nn_chi1_chi2::synapse0x3c256b0() {
   return (neuron0x3c1a300()*-0.000583597);
}

double NNfunction_nn_chi1_chi2::synapse0x3c256f0() {
   return (neuron0x3c1a640()*0.0128869);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25730() {
   return (neuron0x3c1a980()*0.00195832);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25770() {
   return (neuron0x3c1acc0()*0.0510703);
}

double NNfunction_nn_chi1_chi2::synapse0x3c257b0() {
   return (neuron0x3c1b000()*0.0089844);
}

double NNfunction_nn_chi1_chi2::synapse0x3c257f0() {
   return (neuron0x3c1b340()*0.0437373);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25830() {
   return (neuron0x3c1b680()*0.04383);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25870() {
   return (neuron0x3c1b9c0()*-0.00937928);
}

double NNfunction_nn_chi1_chi2::synapse0x3c258b0() {
   return (neuron0x3c1bd00()*0.0303735);
}

double NNfunction_nn_chi1_chi2::synapse0x3c258f0() {
   return (neuron0x3c1c040()*0.0748349);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25930() {
   return (neuron0x3c1c380()*0.0396908);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25970() {
   return (neuron0x3c1c6c0()*0.0300778);
}

double NNfunction_nn_chi1_chi2::synapse0x3c259b0() {
   return (neuron0x3c1ca00()*0.0386023);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25440() {
   return (neuron0x3c1cd40()*0.00561649);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25480() {
   return (neuron0x3c1d2a0()*0.0491243);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25b00() {
   return (neuron0x3c1d5e0()*0.0141652);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25b40() {
   return (neuron0x3c1d920()*0.00485587);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25b80() {
   return (neuron0x3c1dc60()*-0.0115148);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25bc0() {
   return (neuron0x3c1dfa0()*0.000728086);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25c00() {
   return (neuron0x3c1e2e0()*-0.0470606);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25c40() {
   return (neuron0x3c1e620()*-0.0172265);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25fc0() {
   return (neuron0x3c199d0()*0.0397409);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26000() {
   return (neuron0x3c19c80()*-0.0135829);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26040() {
   return (neuron0x3c19fc0()*3.20763);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26080() {
   return (neuron0x3c1a300()*0.0128074);
}

double NNfunction_nn_chi1_chi2::synapse0x3c260c0() {
   return (neuron0x3c1a640()*-0.0142479);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26100() {
   return (neuron0x3c1a980()*0.00364229);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26140() {
   return (neuron0x3c1acc0()*-0.0459763);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26180() {
   return (neuron0x3c1b000()*0.0186297);
}

double NNfunction_nn_chi1_chi2::synapse0x3c261c0() {
   return (neuron0x3c1b340()*-0.0734814);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26200() {
   return (neuron0x3c1b680()*-0.0526876);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26240() {
   return (neuron0x3c1b9c0()*0.02322);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26280() {
   return (neuron0x3c1bd00()*-0.0772744);
}

double NNfunction_nn_chi1_chi2::synapse0x3c262c0() {
   return (neuron0x3c1c040()*-0.053804);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26300() {
   return (neuron0x3c1c380()*-0.0651738);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26340() {
   return (neuron0x3c1c6c0()*-0.0103782);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26380() {
   return (neuron0x3c1ca00()*0.0109458);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25e10() {
   return (neuron0x3c1cd40()*0.0053597);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25e50() {
   return (neuron0x3c1d2a0()*-0.0722506);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22be0() {
   return (neuron0x3c1d5e0()*-0.0109265);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22c20() {
   return (neuron0x3c1d920()*-0.00996987);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22c60() {
   return (neuron0x3c1dc60()*-0.0248057);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22ca0() {
   return (neuron0x3c1dfa0()*0.0297395);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22ce0() {
   return (neuron0x3c1e2e0()*0.0479738);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22d20() {
   return (neuron0x3c1e620()*4.45955);
}

double NNfunction_nn_chi1_chi2::synapse0x3c230a0() {
   return (neuron0x3c199d0()*0.00602097);
}

double NNfunction_nn_chi1_chi2::synapse0x3c230e0() {
   return (neuron0x3c19c80()*22.1283);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23120() {
   return (neuron0x3c19fc0()*0.211818);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23160() {
   return (neuron0x3c1a300()*0.0286314);
}

double NNfunction_nn_chi1_chi2::synapse0x3c231a0() {
   return (neuron0x3c1a640()*0.0295802);
}

double NNfunction_nn_chi1_chi2::synapse0x3c231e0() {
   return (neuron0x3c1a980()*0.0193858);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23220() {
   return (neuron0x3c1acc0()*0.0169627);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23260() {
   return (neuron0x3c1b000()*-0.00647311);
}

double NNfunction_nn_chi1_chi2::synapse0x3c232a0() {
   return (neuron0x3c1b340()*0.0202228);
}

double NNfunction_nn_chi1_chi2::synapse0x3c232e0() {
   return (neuron0x3c1b680()*0.00518169);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23320() {
   return (neuron0x3c1b9c0()*-0.0263547);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23360() {
   return (neuron0x3c1bd00()*-0.011657);
}

double NNfunction_nn_chi1_chi2::synapse0x3c233a0() {
   return (neuron0x3c1c040()*-0.00378177);
}

double NNfunction_nn_chi1_chi2::synapse0x3c274e0() {
   return (neuron0x3c1c380()*0.0392642);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27520() {
   return (neuron0x3c1c6c0()*0.0340014);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27560() {
   return (neuron0x3c1ca00()*0.0252121);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22ef0() {
   return (neuron0x3c1cd40()*0.00211078);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22f30() {
   return (neuron0x3c1d2a0()*-0.00693953);
}

double NNfunction_nn_chi1_chi2::synapse0x3c276b0() {
   return (neuron0x3c1d5e0()*-0.00692828);
}

double NNfunction_nn_chi1_chi2::synapse0x3c276f0() {
   return (neuron0x3c1d920()*-0.0191396);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27730() {
   return (neuron0x3c1dc60()*-0.0350067);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27770() {
   return (neuron0x3c1dfa0()*0.0321587);
}

double NNfunction_nn_chi1_chi2::synapse0x3c277b0() {
   return (neuron0x3c1e2e0()*0.0284522);
}

double NNfunction_nn_chi1_chi2::synapse0x3c277f0() {
   return (neuron0x3c1e620()*-0.0616133);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27b70() {
   return (neuron0x3c199d0()*-0.00881879);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27bb0() {
   return (neuron0x3c19c80()*-0.0790089);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27bf0() {
   return (neuron0x3c19fc0()*1.54065);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27c30() {
   return (neuron0x3c1a300()*0.0120964);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27c70() {
   return (neuron0x3c1a640()*-0.0280974);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27cb0() {
   return (neuron0x3c1a980()*-0.0661926);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27cf0() {
   return (neuron0x3c1acc0()*0.044575);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27d30() {
   return (neuron0x3c1b000()*0.00295662);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27d70() {
   return (neuron0x3c1b340()*0.00514203);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27db0() {
   return (neuron0x3c1b680()*-0.012899);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27df0() {
   return (neuron0x3c1b9c0()*-0.0128579);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27e30() {
   return (neuron0x3c1bd00()*1.62099);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27e70() {
   return (neuron0x3c1c040()*-0.0334024);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27eb0() {
   return (neuron0x3c1c380()*0.0300203);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27ef0() {
   return (neuron0x3c1c6c0()*-0.0253939);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27f30() {
   return (neuron0x3c1ca00()*-0.0155529);
}

double NNfunction_nn_chi1_chi2::synapse0x3c279c0() {
   return (neuron0x3c1cd40()*-0.031738);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27a00() {
   return (neuron0x3c1d2a0()*-0.0264471);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28080() {
   return (neuron0x3c1d5e0()*0.0131484);
}

double NNfunction_nn_chi1_chi2::synapse0x3c280c0() {
   return (neuron0x3c1d920()*-0.00705146);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28100() {
   return (neuron0x3c1dc60()*0.00990866);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28140() {
   return (neuron0x3c1dfa0()*-0.0077266);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28180() {
   return (neuron0x3c1e2e0()*0.0238619);
}

double NNfunction_nn_chi1_chi2::synapse0x3c281c0() {
   return (neuron0x3c1e620()*-4.83482);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28540() {
   return (neuron0x3c199d0()*0.23158);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28580() {
   return (neuron0x3c19c80()*-0.974736);
}

double NNfunction_nn_chi1_chi2::synapse0x3c285c0() {
   return (neuron0x3c19fc0()*4.5064);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28600() {
   return (neuron0x3c1a300()*1.57242);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28640() {
   return (neuron0x3c1a640()*-0.0871314);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28680() {
   return (neuron0x3c1a980()*-0.659025);
}

double NNfunction_nn_chi1_chi2::synapse0x3c286c0() {
   return (neuron0x3c1acc0()*0.641883);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28700() {
   return (neuron0x3c1b000()*0.717188);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28740() {
   return (neuron0x3c1b340()*-1.10698);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28780() {
   return (neuron0x3c1b680()*0.628457);
}

double NNfunction_nn_chi1_chi2::synapse0x3c287c0() {
   return (neuron0x3c1b9c0()*-0.138494);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28800() {
   return (neuron0x3c1bd00()*2.24062);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28840() {
   return (neuron0x3c1c040()*-1.78082);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28880() {
   return (neuron0x3c1c380()*-1.51795);
}

double NNfunction_nn_chi1_chi2::synapse0x3c288c0() {
   return (neuron0x3c1c6c0()*1.41774);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28900() {
   return (neuron0x3c1ca00()*0.360681);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28390() {
   return (neuron0x3c1cd40()*0.943815);
}

double NNfunction_nn_chi1_chi2::synapse0x3c283d0() {
   return (neuron0x3c1d2a0()*-0.291574);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28a50() {
   return (neuron0x3c1d5e0()*0.702785);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28a90() {
   return (neuron0x3c1d920()*-1.74931);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28ad0() {
   return (neuron0x3c1dc60()*-1.82592);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28b10() {
   return (neuron0x3c1dfa0()*0.711015);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28b50() {
   return (neuron0x3c1e2e0()*0.670765);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28b90() {
   return (neuron0x3c1e620()*2.11182);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28f10() {
   return (neuron0x3c199d0()*0.0690653);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28f50() {
   return (neuron0x3c19c80()*-0.0810309);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28f90() {
   return (neuron0x3c19fc0()*-1.20215);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28fd0() {
   return (neuron0x3c1a300()*0.123178);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29010() {
   return (neuron0x3c1a640()*-0.0101747);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29050() {
   return (neuron0x3c1a980()*-0.0262267);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29090() {
   return (neuron0x3c1acc0()*0.00672448);
}

double NNfunction_nn_chi1_chi2::synapse0x3c290d0() {
   return (neuron0x3c1b000()*0.011081);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29110() {
   return (neuron0x3c1b340()*-0.0237611);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29150() {
   return (neuron0x3c1b680()*0.00644611);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29190() {
   return (neuron0x3c1b9c0()*-0.100302);
}

double NNfunction_nn_chi1_chi2::synapse0x3c291d0() {
   return (neuron0x3c1bd00()*0.709289);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29210() {
   return (neuron0x3c1c040()*-4.2624);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29250() {
   return (neuron0x3c1c380()*0.0329623);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29290() {
   return (neuron0x3c1c6c0()*0.145386);
}

double NNfunction_nn_chi1_chi2::synapse0x3c292d0() {
   return (neuron0x3c1ca00()*-0.0660325);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28d60() {
   return (neuron0x3c1cd40()*0.0283774);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28da0() {
   return (neuron0x3c1d2a0()*-0.110707);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29420() {
   return (neuron0x3c1d5e0()*-0.0739499);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29460() {
   return (neuron0x3c1d920()*0.0486249);
}

double NNfunction_nn_chi1_chi2::synapse0x3c294a0() {
   return (neuron0x3c1dc60()*-0.133241);
}

double NNfunction_nn_chi1_chi2::synapse0x3c294e0() {
   return (neuron0x3c1dfa0()*-0.102224);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29520() {
   return (neuron0x3c1e2e0()*-0.00669024);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29560() {
   return (neuron0x3c1e620()*0.0123736);
}

double NNfunction_nn_chi1_chi2::synapse0x3c298e0() {
   return (neuron0x3c199d0()*-0.531084);
}

double NNfunction_nn_chi1_chi2::synapse0x3c19b60() {
   return (neuron0x3c19c80()*-0.890967);
}

double NNfunction_nn_chi1_chi2::synapse0x3c19ba0() {
   return (neuron0x3c19fc0()*-0.0282262);
}

double NNfunction_nn_chi1_chi2::synapse0x3c19ea0() {
   return (neuron0x3c1a300()*-0.424429);
}

double NNfunction_nn_chi1_chi2::synapse0x3c19ee0() {
   return (neuron0x3c1a640()*0.170216);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1a1e0() {
   return (neuron0x3c1a980()*0.256932);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1a220() {
   return (neuron0x3c1acc0()*-1.36318);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1a520() {
   return (neuron0x3c1b000()*0.798296);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1a560() {
   return (neuron0x3c1b340()*0.0646569);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1a860() {
   return (neuron0x3c1b680()*-0.614481);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1a8a0() {
   return (neuron0x3c1b9c0()*-1.92448);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1aba0() {
   return (neuron0x3c1bd00()*-0.547255);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1abe0() {
   return (neuron0x3c1c040()*-0.295456);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1aee0() {
   return (neuron0x3c1c380()*1.1748);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1af20() {
   return (neuron0x3c1c6c0()*0.15805);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1b220() {
   return (neuron0x3c1ca00()*-0.924649);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1b260() {
   return (neuron0x3c1cd40()*-0.672112);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1b560() {
   return (neuron0x3c1d2a0()*-0.543474);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1b5a0() {
   return (neuron0x3c1d5e0()*-0.38079);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1b8a0() {
   return (neuron0x3c1d920()*-1.44736);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1b8e0() {
   return (neuron0x3c1dc60()*-1.21895);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1bbe0() {
   return (neuron0x3c1dfa0()*-0.934026);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1bc20() {
   return (neuron0x3c1e2e0()*0.0767565);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1bf20() {
   return (neuron0x3c1e620()*-0.707428);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1bf60() {
   return (neuron0x3c199d0()*1.30481);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1cc20() {
   return (neuron0x3c19c80()*-1.58813);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1cc60() {
   return (neuron0x3c19fc0()*1.56148);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29730() {
   return (neuron0x3c1a300()*-0.243994);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29770() {
   return (neuron0x3c1a640()*0.375402);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1cf60() {
   return (neuron0x3c1a980()*-0.91278);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1cfa0() {
   return (neuron0x3c1acc0()*0.601229);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1d4c0() {
   return (neuron0x3c1b000()*0.563274);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1d500() {
   return (neuron0x3c1b340()*-0.0590814);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1d800() {
   return (neuron0x3c1b680()*0.266339);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1d840() {
   return (neuron0x3c1b9c0()*-0.232538);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1db40() {
   return (neuron0x3c1bd00()*2.1118);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1db80() {
   return (neuron0x3c1c040()*-0.657558);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1de80() {
   return (neuron0x3c1c380()*-1.05423);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1dec0() {
   return (neuron0x3c1c6c0()*1.02835);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1e1c0() {
   return (neuron0x3c1ca00()*-1.05815);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1e200() {
   return (neuron0x3c1cd40()*0.402712);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1e500() {
   return (neuron0x3c1d2a0()*0.875842);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1e540() {
   return (neuron0x3c1d5e0()*-0.00219504);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1e840() {
   return (neuron0x3c1d920()*-1.04094);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1e880() {
   return (neuron0x3c1dc60()*-1.98398);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1c260() {
   return (neuron0x3c1dfa0()*-0.200384);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1c2a0() {
   return (neuron0x3c1e2e0()*0.756058);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b650() {
   return (neuron0x3c1e620()*0.505226);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b9d0() {
   return (neuron0x3c199d0()*0.504992);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ba10() {
   return (neuron0x3c19c80()*-0.387209);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ba50() {
   return (neuron0x3c19fc0()*0.381508);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ba90() {
   return (neuron0x3c1a300()*0.0691683);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bad0() {
   return (neuron0x3c1a640()*0.125428);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bb10() {
   return (neuron0x3c1a980()*0.546377);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bb50() {
   return (neuron0x3c1acc0()*-0.233402);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bb90() {
   return (neuron0x3c1b000()*0.0486987);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bbd0() {
   return (neuron0x3c1b340()*-0.321094);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bc10() {
   return (neuron0x3c1b680()*-1.45307);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bc50() {
   return (neuron0x3c1b9c0()*-0.601087);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bc90() {
   return (neuron0x3c1bd00()*-0.899603);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bcd0() {
   return (neuron0x3c1c040()*2.11016);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bd10() {
   return (neuron0x3c1c380()*2.38773);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bd50() {
   return (neuron0x3c1c6c0()*-0.0116961);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bd90() {
   return (neuron0x3c1ca00()*-1.83336);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b820() {
   return (neuron0x3c1cd40()*2.48971);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b860() {
   return (neuron0x3c1d2a0()*0.0460401);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bee0() {
   return (neuron0x3c1d5e0()*1.05547);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bf20() {
   return (neuron0x3c1d920()*-0.615492);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bf60() {
   return (neuron0x3c1dc60()*-2.36328);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bfa0() {
   return (neuron0x3c1dfa0()*1.64389);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2bfe0() {
   return (neuron0x3c1e2e0()*2.19901);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c020() {
   return (neuron0x3c1e620()*-0.130813);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c3a0() {
   return (neuron0x3c199d0()*0.0270304);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c3e0() {
   return (neuron0x3c19c80()*-5.95496);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c420() {
   return (neuron0x3c19fc0()*-0.0804078);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c460() {
   return (neuron0x3c1a300()*-0.0433927);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c4a0() {
   return (neuron0x3c1a640()*-0.134465);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c4e0() {
   return (neuron0x3c1a980()*0.0178659);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c520() {
   return (neuron0x3c1acc0()*0.0569377);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c560() {
   return (neuron0x3c1b000()*-0.0976086);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c5a0() {
   return (neuron0x3c1b340()*-0.0953604);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c5e0() {
   return (neuron0x3c1b680()*-0.0631356);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c620() {
   return (neuron0x3c1b9c0()*-0.0857365);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c660() {
   return (neuron0x3c1bd00()*1.34704);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c6a0() {
   return (neuron0x3c1c040()*0.171879);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c6e0() {
   return (neuron0x3c1c380()*0.222191);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c720() {
   return (neuron0x3c1c6c0()*0.016949);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c760() {
   return (neuron0x3c1ca00()*0.108295);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c1f0() {
   return (neuron0x3c1cd40()*-0.0684919);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c230() {
   return (neuron0x3c1d2a0()*0.0443433);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c8b0() {
   return (neuron0x3c1d5e0()*0.0234526);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c8f0() {
   return (neuron0x3c1d920()*0.031334);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c930() {
   return (neuron0x3c1dc60()*-0.000587058);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c970() {
   return (neuron0x3c1dfa0()*-0.00285508);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c9b0() {
   return (neuron0x3c1e2e0()*-0.0614712);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c9f0() {
   return (neuron0x3c1e620()*3.94697);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cd70() {
   return (neuron0x3c199d0()*-0.324207);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cdb0() {
   return (neuron0x3c19c80()*1.93968);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cdf0() {
   return (neuron0x3c19fc0()*4.01289);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ce30() {
   return (neuron0x3c1a300()*3.85059);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ce70() {
   return (neuron0x3c1a640()*2.00624);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ceb0() {
   return (neuron0x3c1a980()*-1.06954);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cef0() {
   return (neuron0x3c1acc0()*-0.845029);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cf30() {
   return (neuron0x3c1b000()*-1.72293);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cf70() {
   return (neuron0x3c1b340()*-0.0920955);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cfb0() {
   return (neuron0x3c1b680()*-0.500211);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cff0() {
   return (neuron0x3c1b9c0()*-2.44968);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d030() {
   return (neuron0x3c1bd00()*0.453975);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d070() {
   return (neuron0x3c1c040()*1.02354);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d0b0() {
   return (neuron0x3c1c380()*0.267044);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d0f0() {
   return (neuron0x3c1c6c0()*-0.497182);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d130() {
   return (neuron0x3c1ca00()*0.295312);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cbc0() {
   return (neuron0x3c1cd40()*-0.576324);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cc00() {
   return (neuron0x3c1d2a0()*0.560182);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d280() {
   return (neuron0x3c1d5e0()*0.686413);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d2c0() {
   return (neuron0x3c1d920()*0.0435389);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d300() {
   return (neuron0x3c1dc60()*-2.81734);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d340() {
   return (neuron0x3c1dfa0()*-0.40133);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d380() {
   return (neuron0x3c1e2e0()*0.41006);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d3c0() {
   return (neuron0x3c1e620()*0.0869255);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d740() {
   return (neuron0x3c199d0()*-4.29969);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d780() {
   return (neuron0x3c19c80()*-0.042684);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d7c0() {
   return (neuron0x3c19fc0()*-4.80898);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d800() {
   return (neuron0x3c1a300()*0.0781145);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d840() {
   return (neuron0x3c1a640()*-0.0371049);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d880() {
   return (neuron0x3c1a980()*-0.0860272);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d8c0() {
   return (neuron0x3c1acc0()*0.0552623);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d900() {
   return (neuron0x3c1b000()*-0.0664629);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d940() {
   return (neuron0x3c1b340()*0.0261964);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d980() {
   return (neuron0x3c1b680()*0.111156);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d9c0() {
   return (neuron0x3c1b9c0()*0.0280671);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2da00() {
   return (neuron0x3c1bd00()*-0.0251147);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2da40() {
   return (neuron0x3c1c040()*0.0710467);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2da80() {
   return (neuron0x3c1c380()*-0.128036);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2dac0() {
   return (neuron0x3c1c6c0()*-0.132239);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2db00() {
   return (neuron0x3c1ca00()*0.0566229);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d590() {
   return (neuron0x3c1cd40()*-0.051531);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d5d0() {
   return (neuron0x3c1d2a0()*-0.105357);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2dc50() {
   return (neuron0x3c1d5e0()*-0.014767);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2dc90() {
   return (neuron0x3c1d920()*-0.0496624);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2dcd0() {
   return (neuron0x3c1dc60()*-0.0468141);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2dd10() {
   return (neuron0x3c1dfa0()*-0.0144709);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2dd50() {
   return (neuron0x3c1e2e0()*-0.0389678);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2dd90() {
   return (neuron0x3c1e620()*0.155153);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e110() {
   return (neuron0x3c199d0()*0.021052);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e150() {
   return (neuron0x3c19c80()*-20.9541);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e190() {
   return (neuron0x3c19fc0()*-0.184044);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e1d0() {
   return (neuron0x3c1a300()*-0.00610222);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e210() {
   return (neuron0x3c1a640()*0.0219196);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e250() {
   return (neuron0x3c1a980()*-0.0237057);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e290() {
   return (neuron0x3c1acc0()*-0.0218098);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e2d0() {
   return (neuron0x3c1b000()*0.00544162);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e310() {
   return (neuron0x3c1b340()*-0.0197992);
}

double NNfunction_nn_chi1_chi2::synapse0x3c264d0() {
   return (neuron0x3c1b680()*0.00583769);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26510() {
   return (neuron0x3c1b9c0()*-0.00175638);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26550() {
   return (neuron0x3c1bd00()*-0.0474816);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26590() {
   return (neuron0x3c1c040()*0.0346403);
}

double NNfunction_nn_chi1_chi2::synapse0x3c265d0() {
   return (neuron0x3c1c380()*-0.0563753);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26610() {
   return (neuron0x3c1c6c0()*-0.0855268);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26650() {
   return (neuron0x3c1ca00()*-0.0593483);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2df60() {
   return (neuron0x3c1cd40()*-0.0534687);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2dfa0() {
   return (neuron0x3c1d2a0()*-0.0144044);
}

double NNfunction_nn_chi1_chi2::synapse0x3c267a0() {
   return (neuron0x3c1d5e0()*-0.00922198);
}

double NNfunction_nn_chi1_chi2::synapse0x3c267e0() {
   return (neuron0x3c1d920()*0.0216601);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26820() {
   return (neuron0x3c1dc60()*0.0126375);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26860() {
   return (neuron0x3c1dfa0()*0.00903954);
}

double NNfunction_nn_chi1_chi2::synapse0x3c268a0() {
   return (neuron0x3c1e2e0()*-0.00380915);
}

double NNfunction_nn_chi1_chi2::synapse0x3c268e0() {
   return (neuron0x3c1e620()*-4.71181);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26c60() {
   return (neuron0x3c199d0()*0.00464304);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26ca0() {
   return (neuron0x3c19c80()*-0.0157825);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26ce0() {
   return (neuron0x3c19fc0()*1.54325);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26d20() {
   return (neuron0x3c1a300()*-0.0116494);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26d60() {
   return (neuron0x3c1a640()*0.00314872);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26da0() {
   return (neuron0x3c1a980()*-0.00590546);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26de0() {
   return (neuron0x3c1acc0()*-0.00315113);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26e20() {
   return (neuron0x3c1b000()*0.00871887);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26e60() {
   return (neuron0x3c1b340()*0.027665);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26ea0() {
   return (neuron0x3c1b680()*-0.00849896);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26ee0() {
   return (neuron0x3c1b9c0()*0.00443823);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26f20() {
   return (neuron0x3c1bd00()*2.02886);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26f60() {
   return (neuron0x3c1c040()*-0.0277312);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26fa0() {
   return (neuron0x3c1c380()*-0.0306168);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26fe0() {
   return (neuron0x3c1c6c0()*-0.0149312);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27020() {
   return (neuron0x3c1ca00()*-0.0293444);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26ab0() {
   return (neuron0x3c1cd40()*-0.00817729);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26af0() {
   return (neuron0x3c1d2a0()*0.0202458);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27170() {
   return (neuron0x3c1d5e0()*0.00148205);
}

double NNfunction_nn_chi1_chi2::synapse0x3c271b0() {
   return (neuron0x3c1d920()*-0.0119653);
}

double NNfunction_nn_chi1_chi2::synapse0x3c271f0() {
   return (neuron0x3c1dc60()*-0.00192815);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27230() {
   return (neuron0x3c1dfa0()*-0.00135592);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27270() {
   return (neuron0x3c1e2e0()*0.0151164);
}

double NNfunction_nn_chi1_chi2::synapse0x3c272b0() {
   return (neuron0x3c1e620()*-0.0333421);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27480() {
   return (neuron0x3c199d0()*-0.0218009);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30510() {
   return (neuron0x3c19c80()*-3.49808);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30550() {
   return (neuron0x3c19fc0()*0.102485);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30590() {
   return (neuron0x3c1a300()*-0.0572492);
}

double NNfunction_nn_chi1_chi2::synapse0x3c305d0() {
   return (neuron0x3c1a640()*-0.0319347);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30610() {
   return (neuron0x3c1a980()*0.0595051);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30650() {
   return (neuron0x3c1acc0()*-0.0120219);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30690() {
   return (neuron0x3c1b000()*-0.0369219);
}

double NNfunction_nn_chi1_chi2::synapse0x3c306d0() {
   return (neuron0x3c1b340()*0.0343128);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30710() {
   return (neuron0x3c1b680()*0.0299326);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30750() {
   return (neuron0x3c1b9c0()*0.0162862);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30790() {
   return (neuron0x3c1bd00()*0.11475);
}

double NNfunction_nn_chi1_chi2::synapse0x3c307d0() {
   return (neuron0x3c1c040()*-0.0605147);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30810() {
   return (neuron0x3c1c380()*0.000479681);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30850() {
   return (neuron0x3c1c6c0()*-0.114064);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30890() {
   return (neuron0x3c1ca00()*-0.0403087);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30360() {
   return (neuron0x3c1cd40()*-0.0280975);
}

double NNfunction_nn_chi1_chi2::synapse0x3c303a0() {
   return (neuron0x3c1d2a0()*0.000169186);
}

double NNfunction_nn_chi1_chi2::synapse0x3c309e0() {
   return (neuron0x3c1d5e0()*-0.0607901);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30a20() {
   return (neuron0x3c1d920()*-0.0572998);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30a60() {
   return (neuron0x3c1dc60()*0.110787);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30aa0() {
   return (neuron0x3c1dfa0()*0.0297445);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30ae0() {
   return (neuron0x3c1e2e0()*-0.0253013);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30b20() {
   return (neuron0x3c1e620()*0.0500493);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30ea0() {
   return (neuron0x3c199d0()*0.37196);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30ee0() {
   return (neuron0x3c19c80()*-5.04972);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30f20() {
   return (neuron0x3c19fc0()*-1.02908);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30f60() {
   return (neuron0x3c1a300()*0.0103343);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30fa0() {
   return (neuron0x3c1a640()*-0.0898383);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30fe0() {
   return (neuron0x3c1a980()*-0.0345388);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31020() {
   return (neuron0x3c1acc0()*-0.0421777);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31060() {
   return (neuron0x3c1b000()*-0.0488212);
}

double NNfunction_nn_chi1_chi2::synapse0x3c310a0() {
   return (neuron0x3c1b340()*-0.0202853);
}

double NNfunction_nn_chi1_chi2::synapse0x3c310e0() {
   return (neuron0x3c1b680()*-0.039152);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31120() {
   return (neuron0x3c1b9c0()*-0.046351);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31160() {
   return (neuron0x3c1bd00()*0.301151);
}

double NNfunction_nn_chi1_chi2::synapse0x3c311a0() {
   return (neuron0x3c1c040()*0.147429);
}

double NNfunction_nn_chi1_chi2::synapse0x3c311e0() {
   return (neuron0x3c1c380()*0.0232443);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31220() {
   return (neuron0x3c1c6c0()*0.0212899);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31260() {
   return (neuron0x3c1ca00()*0.115463);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30cf0() {
   return (neuron0x3c1cd40()*0.00016599);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30d30() {
   return (neuron0x3c1d2a0()*0.012749);
}

double NNfunction_nn_chi1_chi2::synapse0x3c313b0() {
   return (neuron0x3c1d5e0()*0.0344356);
}

double NNfunction_nn_chi1_chi2::synapse0x3c313f0() {
   return (neuron0x3c1d920()*0.0761832);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31430() {
   return (neuron0x3c1dc60()*0.0295194);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31470() {
   return (neuron0x3c1dfa0()*0.0127339);
}

double NNfunction_nn_chi1_chi2::synapse0x3c314b0() {
   return (neuron0x3c1e2e0()*-0.00951784);
}

double NNfunction_nn_chi1_chi2::synapse0x3c314f0() {
   return (neuron0x3c1e620()*-2.29149);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31870() {
   return (neuron0x3c199d0()*-0.00396097);
}

double NNfunction_nn_chi1_chi2::synapse0x3c318b0() {
   return (neuron0x3c19c80()*0.0034841);
}

double NNfunction_nn_chi1_chi2::synapse0x3c318f0() {
   return (neuron0x3c19fc0()*0.0255775);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31930() {
   return (neuron0x3c1a300()*-0.000963625);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31970() {
   return (neuron0x3c1a640()*-0.0022285);
}

double NNfunction_nn_chi1_chi2::synapse0x3c319b0() {
   return (neuron0x3c1a980()*-0.00176618);
}

double NNfunction_nn_chi1_chi2::synapse0x3c319f0() {
   return (neuron0x3c1acc0()*-0.00323309);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31a30() {
   return (neuron0x3c1b000()*-0.00224647);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31a70() {
   return (neuron0x3c1b340()*-0.00378006);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31ab0() {
   return (neuron0x3c1b680()*-0.00424486);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31af0() {
   return (neuron0x3c1b9c0()*-0.00657885);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31b30() {
   return (neuron0x3c1bd00()*0.0032081);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31b70() {
   return (neuron0x3c1c040()*-0.00496721);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31bb0() {
   return (neuron0x3c1c380()*0.00611728);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31bf0() {
   return (neuron0x3c1c6c0()*-0.00282363);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31c30() {
   return (neuron0x3c1ca00()*-0.0099453);
}

double NNfunction_nn_chi1_chi2::synapse0x3c316c0() {
   return (neuron0x3c1cd40()*-0.00443455);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31700() {
   return (neuron0x3c1d2a0()*-0.00101158);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31d80() {
   return (neuron0x3c1d5e0()*-0.0105723);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31dc0() {
   return (neuron0x3c1d920()*-0.00148943);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31e00() {
   return (neuron0x3c1dc60()*-0.00622232);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31e40() {
   return (neuron0x3c1dfa0()*-0.00644902);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31e80() {
   return (neuron0x3c1e2e0()*0.0010928);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31ec0() {
   return (neuron0x3c1e620()*2.13776);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32240() {
   return (neuron0x3c199d0()*0.305401);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32280() {
   return (neuron0x3c19c80()*-1.76778);
}

double NNfunction_nn_chi1_chi2::synapse0x3c322c0() {
   return (neuron0x3c19fc0()*-3.55896);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32300() {
   return (neuron0x3c1a300()*-3.65456);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32340() {
   return (neuron0x3c1a640()*-1.66656);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32380() {
   return (neuron0x3c1a980()*0.998666);
}

double NNfunction_nn_chi1_chi2::synapse0x3c323c0() {
   return (neuron0x3c1acc0()*0.747704);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32400() {
   return (neuron0x3c1b000()*1.67435);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32440() {
   return (neuron0x3c1b340()*0.141954);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32480() {
   return (neuron0x3c1b680()*0.511445);
}

double NNfunction_nn_chi1_chi2::synapse0x3c324c0() {
   return (neuron0x3c1b9c0()*2.26953);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32500() {
   return (neuron0x3c1bd00()*-0.426755);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32540() {
   return (neuron0x3c1c040()*-0.934262);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32580() {
   return (neuron0x3c1c380()*-0.299042);
}

double NNfunction_nn_chi1_chi2::synapse0x3c325c0() {
   return (neuron0x3c1c6c0()*0.431926);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32600() {
   return (neuron0x3c1ca00()*-0.329414);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32090() {
   return (neuron0x3c1cd40()*0.489371);
}

double NNfunction_nn_chi1_chi2::synapse0x3c320d0() {
   return (neuron0x3c1d2a0()*-0.501173);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32750() {
   return (neuron0x3c1d5e0()*-0.584426);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32790() {
   return (neuron0x3c1d920()*-0.0298619);
}

double NNfunction_nn_chi1_chi2::synapse0x3c327d0() {
   return (neuron0x3c1dc60()*2.85562);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32810() {
   return (neuron0x3c1dfa0()*0.537746);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32850() {
   return (neuron0x3c1e2e0()*-0.310206);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32890() {
   return (neuron0x3c1e620()*-0.0670553);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32c10() {
   return (neuron0x3c199d0()*0.340239);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32c50() {
   return (neuron0x3c19c80()*-0.544282);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32c90() {
   return (neuron0x3c19fc0()*-2.61345);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32cd0() {
   return (neuron0x3c1a300()*-4.81694);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32d10() {
   return (neuron0x3c1a640()*0.0209551);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32d50() {
   return (neuron0x3c1a980()*-2.61026);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32d90() {
   return (neuron0x3c1acc0()*0.243833);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32dd0() {
   return (neuron0x3c1b000()*1.2503);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32e10() {
   return (neuron0x3c1b340()*0.385934);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32e50() {
   return (neuron0x3c1b680()*1.87031);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32e90() {
   return (neuron0x3c1b9c0()*0.792003);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32ed0() {
   return (neuron0x3c1bd00()*-2.18563);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32f10() {
   return (neuron0x3c1c040()*1.16274);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32f50() {
   return (neuron0x3c1c380()*-0.570617);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32f90() {
   return (neuron0x3c1c6c0()*0.481158);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32fd0() {
   return (neuron0x3c1ca00()*-0.481365);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32a60() {
   return (neuron0x3c1cd40()*-1.94413);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32aa0() {
   return (neuron0x3c1d2a0()*3.10692);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33120() {
   return (neuron0x3c1d5e0()*0.634235);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33160() {
   return (neuron0x3c1d920()*-0.762066);
}

double NNfunction_nn_chi1_chi2::synapse0x3c331a0() {
   return (neuron0x3c1dc60()*1.01744);
}

double NNfunction_nn_chi1_chi2::synapse0x3c331e0() {
   return (neuron0x3c1dfa0()*0.942247);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33220() {
   return (neuron0x3c1e2e0()*-4.61771);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33260() {
   return (neuron0x3c1e620()*0.0997228);
}

double NNfunction_nn_chi1_chi2::synapse0x3c335e0() {
   return (neuron0x3c199d0()*-0.000485638);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33620() {
   return (neuron0x3c19c80()*7.23718);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33660() {
   return (neuron0x3c19fc0()*3.97443);
}

double NNfunction_nn_chi1_chi2::synapse0x3c336a0() {
   return (neuron0x3c1a300()*-0.143862);
}

double NNfunction_nn_chi1_chi2::synapse0x3c336e0() {
   return (neuron0x3c1a640()*-0.0638362);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33720() {
   return (neuron0x3c1a980()*0.150083);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33760() {
   return (neuron0x3c1acc0()*-0.036487);
}

double NNfunction_nn_chi1_chi2::synapse0x3c337a0() {
   return (neuron0x3c1b000()*-0.0247968);
}

double NNfunction_nn_chi1_chi2::synapse0x3c337e0() {
   return (neuron0x3c1b340()*0.0386655);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33820() {
   return (neuron0x3c1b680()*-0.0482934);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33860() {
   return (neuron0x3c1b9c0()*-0.0248472);
}

double NNfunction_nn_chi1_chi2::synapse0x3c338a0() {
   return (neuron0x3c1bd00()*1.33493);
}

double NNfunction_nn_chi1_chi2::synapse0x3c338e0() {
   return (neuron0x3c1c040()*0.297357);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33920() {
   return (neuron0x3c1c380()*-0.00415908);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33960() {
   return (neuron0x3c1c6c0()*-0.0223359);
}

double NNfunction_nn_chi1_chi2::synapse0x3c339a0() {
   return (neuron0x3c1ca00()*0.0418052);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33430() {
   return (neuron0x3c1cd40()*0.0318025);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33470() {
   return (neuron0x3c1d2a0()*-0.0586014);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33af0() {
   return (neuron0x3c1d5e0()*-0.137787);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33b30() {
   return (neuron0x3c1d920()*-0.0748169);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33b70() {
   return (neuron0x3c1dc60()*0.0847734);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33bb0() {
   return (neuron0x3c1dfa0()*0.0803518);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33bf0() {
   return (neuron0x3c1e2e0()*-0.191463);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33c30() {
   return (neuron0x3c1e620()*0.0637032);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33fb0() {
   return (neuron0x3c199d0()*-0.0583825);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33ff0() {
   return (neuron0x3c19c80()*1.0667);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34030() {
   return (neuron0x3c19fc0()*1.74726);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34070() {
   return (neuron0x3c1a300()*2.88005);
}

double NNfunction_nn_chi1_chi2::synapse0x3c340b0() {
   return (neuron0x3c1a640()*-0.304683);
}

double NNfunction_nn_chi1_chi2::synapse0x3c340f0() {
   return (neuron0x3c1a980()*-1.33977);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34130() {
   return (neuron0x3c1acc0()*-1.02242);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34170() {
   return (neuron0x3c1b000()*-1.29372);
}

double NNfunction_nn_chi1_chi2::synapse0x3c341b0() {
   return (neuron0x3c1b340()*-0.0447447);
}

double NNfunction_nn_chi1_chi2::synapse0x3c341f0() {
   return (neuron0x3c1b680()*-0.152244);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34230() {
   return (neuron0x3c1b9c0()*-1.7016);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34270() {
   return (neuron0x3c1bd00()*1.06201);
}

double NNfunction_nn_chi1_chi2::synapse0x3c342b0() {
   return (neuron0x3c1c040()*0.69816);
}

double NNfunction_nn_chi1_chi2::synapse0x3c342f0() {
   return (neuron0x3c1c380()*0.420172);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34330() {
   return (neuron0x3c1c6c0()*-0.317939);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34370() {
   return (neuron0x3c1ca00()*-0.269205);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33e00() {
   return (neuron0x3c1cd40()*0.149802);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33e40() {
   return (neuron0x3c1d2a0()*-0.076095);
}

double NNfunction_nn_chi1_chi2::synapse0x3c344c0() {
   return (neuron0x3c1d5e0()*0.710737);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34500() {
   return (neuron0x3c1d920()*0.107086);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34540() {
   return (neuron0x3c1dc60()*-3.35111);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34580() {
   return (neuron0x3c1dfa0()*-1.11082);
}

double NNfunction_nn_chi1_chi2::synapse0x3c345c0() {
   return (neuron0x3c1e2e0()*0.13774);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34600() {
   return (neuron0x3c1e620()*-0.109573);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34980() {
   return (neuron0x3c199d0()*-0.0388021);
}

double NNfunction_nn_chi1_chi2::synapse0x3c349c0() {
   return (neuron0x3c19c80()*0.00813432);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34a00() {
   return (neuron0x3c19fc0()*0.0148795);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34a40() {
   return (neuron0x3c1a300()*-0.0014884);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34a80() {
   return (neuron0x3c1a640()*0.00056093);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34ac0() {
   return (neuron0x3c1a980()*0.00342407);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34b00() {
   return (neuron0x3c1acc0()*-0.000539395);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34b40() {
   return (neuron0x3c1b000()*-0.00754837);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34b80() {
   return (neuron0x3c1b340()*0.00158335);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34bc0() {
   return (neuron0x3c1b680()*-0.00501727);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34c00() {
   return (neuron0x3c1b9c0()*0.0033801);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34c40() {
   return (neuron0x3c1bd00()*0.0292858);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34c80() {
   return (neuron0x3c1c040()*-0.000527212);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34cc0() {
   return (neuron0x3c1c380()*0.00131693);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34d00() {
   return (neuron0x3c1c6c0()*0.00373091);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34d40() {
   return (neuron0x3c1ca00()*-0.00854404);
}

double NNfunction_nn_chi1_chi2::synapse0x3c347d0() {
   return (neuron0x3c1cd40()*0.00873508);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34810() {
   return (neuron0x3c1d2a0()*0.0037441);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34e90() {
   return (neuron0x3c1d5e0()*0.00643259);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34ed0() {
   return (neuron0x3c1d920()*0.00374176);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34f10() {
   return (neuron0x3c1dc60()*-0.0085388);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34f50() {
   return (neuron0x3c1dfa0()*-0.00978787);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34f90() {
   return (neuron0x3c1e2e0()*-0.0113214);
}

double NNfunction_nn_chi1_chi2::synapse0x3c34fd0() {
   return (neuron0x3c1e620()*-18.6696);
}

double NNfunction_nn_chi1_chi2::synapse0x3c35350() {
   return (neuron0x3c199d0()*0.175676);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29920() {
   return (neuron0x3c19c80()*0.156678);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29960() {
   return (neuron0x3c19fc0()*-2.11456);
}

double NNfunction_nn_chi1_chi2::synapse0x3c299a0() {
   return (neuron0x3c1a300()*-0.0755345);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29bf0() {
   return (neuron0x3c1a640()*-0.0767494);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29c30() {
   return (neuron0x3c1a980()*0.0490762);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29c70() {
   return (neuron0x3c1acc0()*-0.024408);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29ec0() {
   return (neuron0x3c1b000()*-0.0668727);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29f00() {
   return (neuron0x3c1b340()*0.093386);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a150() {
   return (neuron0x3c1b680()*0.0925644);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a190() {
   return (neuron0x3c1b9c0()*0.0505191);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a1d0() {
   return (neuron0x3c1bd00()*2.14772);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a420() {
   return (neuron0x3c1c040()*-0.244773);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a460() {
   return (neuron0x3c1c380()*0.105865);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a6b0() {
   return (neuron0x3c1c6c0()*-0.0265442);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a6f0() {
   return (neuron0x3c1ca00()*0.0715254);
}

double NNfunction_nn_chi1_chi2::synapse0x3c351a0() {
   return (neuron0x3c1cd40()*-0.0578548);
}

double NNfunction_nn_chi1_chi2::synapse0x3c351e0() {
   return (neuron0x3c1d2a0()*-0.0816406);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a840() {
   return (neuron0x3c1d5e0()*0.0314708);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ad50() {
   return (neuron0x3c1d920()*-0.0462993);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ad90() {
   return (neuron0x3c1dc60()*0.187946);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2add0() {
   return (neuron0x3c1dfa0()*-0.044641);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b020() {
   return (neuron0x3c1e2e0()*-0.101166);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b060() {
   return (neuron0x3c1e620()*0.0930476);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a910() {
   return (neuron0x3c199d0()*0.134473);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a950() {
   return (neuron0x3c19c80()*31.7426);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a990() {
   return (neuron0x3c19fc0()*0.567714);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a9d0() {
   return (neuron0x3c1a300()*0.0163372);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b350() {
   return (neuron0x3c1a640()*-0.00137287);
}

double NNfunction_nn_chi1_chi2::synapse0x3c376a0() {
   return (neuron0x3c1a980()*0.00716464);
}

double NNfunction_nn_chi1_chi2::synapse0x3c376e0() {
   return (neuron0x3c1acc0()*-0.0324461);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37720() {
   return (neuron0x3c1b000()*-0.0220907);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37760() {
   return (neuron0x3c1b340()*0.0387184);
}

double NNfunction_nn_chi1_chi2::synapse0x3c377a0() {
   return (neuron0x3c1b680()*-0.0278835);
}

double NNfunction_nn_chi1_chi2::synapse0x3c377e0() {
   return (neuron0x3c1b9c0()*0.0235184);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37820() {
   return (neuron0x3c1bd00()*-0.0590561);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37860() {
   return (neuron0x3c1c040()*-0.000539739);
}

double NNfunction_nn_chi1_chi2::synapse0x3c378a0() {
   return (neuron0x3c1c380()*0.0310563);
}

double NNfunction_nn_chi1_chi2::synapse0x3c378e0() {
   return (neuron0x3c1c6c0()*0.0294987);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37920() {
   return (neuron0x3c1ca00()*0.0243597);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b230() {
   return (neuron0x3c1cd40()*0.0336022);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b270() {
   return (neuron0x3c1d2a0()*0.000927171);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37a70() {
   return (neuron0x3c1d5e0()*-0.017791);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37ab0() {
   return (neuron0x3c1d920()*-0.0290074);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37af0() {
   return (neuron0x3c1dc60()*0.0399451);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37b30() {
   return (neuron0x3c1dfa0()*0.0124629);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37b70() {
   return (neuron0x3c1e2e0()*0.0218796);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37bb0() {
   return (neuron0x3c1e620()*8.80045);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37f30() {
   return (neuron0x3c199d0()*-0.108029);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37f70() {
   return (neuron0x3c19c80()*0.430488);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37fb0() {
   return (neuron0x3c19fc0()*-0.442469);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37ff0() {
   return (neuron0x3c1a300()*-1.2073);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38030() {
   return (neuron0x3c1a640()*0.704475);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38070() {
   return (neuron0x3c1a980()*0.890235);
}

double NNfunction_nn_chi1_chi2::synapse0x3c380b0() {
   return (neuron0x3c1acc0()*0.935882);
}

double NNfunction_nn_chi1_chi2::synapse0x3c380f0() {
   return (neuron0x3c1b000()*0.953232);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38130() {
   return (neuron0x3c1b340()*0.260328);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38170() {
   return (neuron0x3c1b680()*1.87202);
}

double NNfunction_nn_chi1_chi2::synapse0x3c381b0() {
   return (neuron0x3c1b9c0()*1.63426);
}

double NNfunction_nn_chi1_chi2::synapse0x3c381f0() {
   return (neuron0x3c1bd00()*-0.216409);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38230() {
   return (neuron0x3c1c040()*-2.30905);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38270() {
   return (neuron0x3c1c380()*-2.46194);
}

double NNfunction_nn_chi1_chi2::synapse0x3c382b0() {
   return (neuron0x3c1c6c0()*-0.0966227);
}

double NNfunction_nn_chi1_chi2::synapse0x3c382f0() {
   return (neuron0x3c1ca00()*0.741051);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37d80() {
   return (neuron0x3c1cd40()*-0.937687);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37dc0() {
   return (neuron0x3c1d2a0()*-1.42616);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38440() {
   return (neuron0x3c1d5e0()*-0.357191);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38480() {
   return (neuron0x3c1d920()*-0.841869);
}

double NNfunction_nn_chi1_chi2::synapse0x3c384c0() {
   return (neuron0x3c1dc60()*3.06811);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38500() {
   return (neuron0x3c1dfa0()*-0.68063);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38540() {
   return (neuron0x3c1e2e0()*-1.80375);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38580() {
   return (neuron0x3c1e620()*-2.11348);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38900() {
   return (neuron0x3c199d0()*0.0110257);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38940() {
   return (neuron0x3c19c80()*-17.7032);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38980() {
   return (neuron0x3c19fc0()*-0.270095);
}

double NNfunction_nn_chi1_chi2::synapse0x3c389c0() {
   return (neuron0x3c1a300()*-0.0184838);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38a00() {
   return (neuron0x3c1a640()*-0.0443059);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38a40() {
   return (neuron0x3c1a980()*-0.0161463);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38a80() {
   return (neuron0x3c1acc0()*-0.0161851);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38ac0() {
   return (neuron0x3c1b000()*-0.0111534);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38b00() {
   return (neuron0x3c1b340()*-0.0134698);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38b40() {
   return (neuron0x3c1b680()*-0.0140793);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38b80() {
   return (neuron0x3c1b9c0()*0.0222765);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38bc0() {
   return (neuron0x3c1bd00()*0.140612);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38c00() {
   return (neuron0x3c1c040()*0.00634924);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38c40() {
   return (neuron0x3c1c380()*-0.027834);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38c80() {
   return (neuron0x3c1c6c0()*-0.00720347);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38cc0() {
   return (neuron0x3c1ca00()*0.00365277);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38750() {
   return (neuron0x3c1cd40()*-0.000139357);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38790() {
   return (neuron0x3c1d2a0()*0.00534187);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38e10() {
   return (neuron0x3c1d5e0()*0.00932321);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38e50() {
   return (neuron0x3c1d920()*0.0236913);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38e90() {
   return (neuron0x3c1dc60()*0.0267166);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38ed0() {
   return (neuron0x3c1dfa0()*-0.0323028);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38f10() {
   return (neuron0x3c1e2e0()*-0.0244032);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38f50() {
   return (neuron0x3c1e620()*0.106918);
}

double NNfunction_nn_chi1_chi2::synapse0x3c392d0() {
   return (neuron0x3c199d0()*0.808862);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39310() {
   return (neuron0x3c19c80()*-1.40043);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39350() {
   return (neuron0x3c19fc0()*-4.79057);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39390() {
   return (neuron0x3c1a300()*-2.06512);
}

double NNfunction_nn_chi1_chi2::synapse0x3c393d0() {
   return (neuron0x3c1a640()*0.74911);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39410() {
   return (neuron0x3c1a980()*0.477803);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39450() {
   return (neuron0x3c1acc0()*-1.32163);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39490() {
   return (neuron0x3c1b000()*0.531714);
}

double NNfunction_nn_chi1_chi2::synapse0x3c394d0() {
   return (neuron0x3c1b340()*1.3268);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39510() {
   return (neuron0x3c1b680()*0.0867969);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39550() {
   return (neuron0x3c1b9c0()*1.13435);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39590() {
   return (neuron0x3c1bd00()*-3.50729);
}

double NNfunction_nn_chi1_chi2::synapse0x3c395d0() {
   return (neuron0x3c1c040()*-0.467107);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39610() {
   return (neuron0x3c1c380()*0.515005);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39650() {
   return (neuron0x3c1c6c0()*0.167321);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39690() {
   return (neuron0x3c1ca00()*-0.367655);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39120() {
   return (neuron0x3c1cd40()*-1.04478);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39160() {
   return (neuron0x3c1d2a0()*0.375641);
}

double NNfunction_nn_chi1_chi2::synapse0x3c397e0() {
   return (neuron0x3c1d5e0()*0.797351);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39820() {
   return (neuron0x3c1d920()*0.128119);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39860() {
   return (neuron0x3c1dc60()*0.0982203);
}

double NNfunction_nn_chi1_chi2::synapse0x3c398a0() {
   return (neuron0x3c1dfa0()*-0.290342);
}

double NNfunction_nn_chi1_chi2::synapse0x3c398e0() {
   return (neuron0x3c1e2e0()*-0.0925483);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39920() {
   return (neuron0x3c1e620()*5.94016);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39ca0() {
   return (neuron0x3c199d0()*-0.107253);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39ce0() {
   return (neuron0x3c19c80()*0.06264);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39d20() {
   return (neuron0x3c19fc0()*-5.43341);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39d60() {
   return (neuron0x3c1a300()*0.0709119);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39da0() {
   return (neuron0x3c1a640()*-0.0179089);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39de0() {
   return (neuron0x3c1a980()*-0.00153223);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39e20() {
   return (neuron0x3c1acc0()*-0.000121586);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39e60() {
   return (neuron0x3c1b000()*0.0953157);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39ea0() {
   return (neuron0x3c1b340()*-0.0130822);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39ee0() {
   return (neuron0x3c1b680()*-0.149341);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39f20() {
   return (neuron0x3c1b9c0()*-0.0853548);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39f60() {
   return (neuron0x3c1bd00()*0.278138);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39fa0() {
   return (neuron0x3c1c040()*0.151568);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39fe0() {
   return (neuron0x3c1c380()*0.106031);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a020() {
   return (neuron0x3c1c6c0()*0.176872);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a060() {
   return (neuron0x3c1ca00()*0.144443);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39af0() {
   return (neuron0x3c1cd40()*-0.00700604);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39b30() {
   return (neuron0x3c1d2a0()*0.0479401);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a1b0() {
   return (neuron0x3c1d5e0()*0.0453528);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a1f0() {
   return (neuron0x3c1d920()*0.118216);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a230() {
   return (neuron0x3c1dc60()*-0.0835058);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a270() {
   return (neuron0x3c1dfa0()*0.0540903);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a2b0() {
   return (neuron0x3c1e2e0()*0.028193);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a2f0() {
   return (neuron0x3c1e620()*-3.27811);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a670() {
   return (neuron0x3c199d0()*-0.00589353);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a6b0() {
   return (neuron0x3c19c80()*-0.00211539);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a6f0() {
   return (neuron0x3c19fc0()*0.00570395);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a730() {
   return (neuron0x3c1a300()*-0.00350894);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a770() {
   return (neuron0x3c1a640()*0.00554373);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a7b0() {
   return (neuron0x3c1a980()*-0.005249);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a7f0() {
   return (neuron0x3c1acc0()*0.000591403);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a830() {
   return (neuron0x3c1b000()*0.00310837);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a870() {
   return (neuron0x3c1b340()*6.9466e-05);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a8b0() {
   return (neuron0x3c1b680()*0.000862436);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a8f0() {
   return (neuron0x3c1b9c0()*-0.00552582);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a930() {
   return (neuron0x3c1bd00()*-0.0377135);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a970() {
   return (neuron0x3c1c040()*-0.00242543);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a9b0() {
   return (neuron0x3c1c380()*-0.00641543);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a9f0() {
   return (neuron0x3c1c6c0()*0.00408159);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3aa30() {
   return (neuron0x3c1ca00()*0.00807471);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a4c0() {
   return (neuron0x3c1cd40()*-0.00256756);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a500() {
   return (neuron0x3c1d2a0()*0.00133365);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ab80() {
   return (neuron0x3c1d5e0()*0.00127036);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3abc0() {
   return (neuron0x3c1d920()*-0.00501253);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ac00() {
   return (neuron0x3c1dc60()*0.0102441);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ac40() {
   return (neuron0x3c1dfa0()*0.0049375);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ac80() {
   return (neuron0x3c1e2e0()*-0.00488818);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3acc0() {
   return (neuron0x3c1e620()*-4.7883);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b040() {
   return (neuron0x3c199d0()*0.444206);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b080() {
   return (neuron0x3c19c80()*0.296563);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b0c0() {
   return (neuron0x3c19fc0()*-4.81404);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b100() {
   return (neuron0x3c1a300()*-0.00335246);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b140() {
   return (neuron0x3c1a640()*-0.395219);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b180() {
   return (neuron0x3c1a980()*0.48323);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b1c0() {
   return (neuron0x3c1acc0()*-0.433751);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b200() {
   return (neuron0x3c1b000()*0.168147);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b240() {
   return (neuron0x3c1b340()*-0.109232);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b280() {
   return (neuron0x3c1b680()*0.00605159);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b2c0() {
   return (neuron0x3c1b9c0()*0.0560604);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b300() {
   return (neuron0x3c1bd00()*6.18701);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b340() {
   return (neuron0x3c1c040()*-0.830471);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b380() {
   return (neuron0x3c1c380()*0.248784);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b3c0() {
   return (neuron0x3c1c6c0()*0.0860593);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b400() {
   return (neuron0x3c1ca00()*-0.0986811);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ae90() {
   return (neuron0x3c1cd40()*-0.270258);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3aed0() {
   return (neuron0x3c1d2a0()*-0.582225);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b550() {
   return (neuron0x3c1d5e0()*-0.782289);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b590() {
   return (neuron0x3c1d920()*0.127793);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b5d0() {
   return (neuron0x3c1dc60()*0.445063);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b610() {
   return (neuron0x3c1dfa0()*-0.254027);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b650() {
   return (neuron0x3c1e2e0()*-0.261753);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b690() {
   return (neuron0x3c1e620()*4.66756);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ba10() {
   return (neuron0x3c199d0()*0.0317449);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ba50() {
   return (neuron0x3c19c80()*-4.35021);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ba90() {
   return (neuron0x3c19fc0()*0.0252726);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bad0() {
   return (neuron0x3c1a300()*0.0348342);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bb10() {
   return (neuron0x3c1a640()*0.00293782);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bb50() {
   return (neuron0x3c1a980()*-0.0244733);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bb90() {
   return (neuron0x3c1acc0()*-0.0318442);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bbd0() {
   return (neuron0x3c1b000()*0.0170756);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bc10() {
   return (neuron0x3c1b340()*-0.00576266);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bc50() {
   return (neuron0x3c1b680()*-0.00480525);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bc90() {
   return (neuron0x3c1b9c0()*-0.0385963);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bcd0() {
   return (neuron0x3c1bd00()*0.236239);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bd10() {
   return (neuron0x3c1c040()*0.0674015);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bd50() {
   return (neuron0x3c1c380()*-0.00195104);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bd90() {
   return (neuron0x3c1c6c0()*0.0239985);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bdd0() {
   return (neuron0x3c1ca00()*0.0387379);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b860() {
   return (neuron0x3c1cd40()*-0.00577806);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b8a0() {
   return (neuron0x3c1d2a0()*-0.00838967);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bf20() {
   return (neuron0x3c1d5e0()*-0.00997814);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bf60() {
   return (neuron0x3c1d920()*-0.00390974);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bfa0() {
   return (neuron0x3c1dc60()*-0.0372037);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3bfe0() {
   return (neuron0x3c1dfa0()*-0.00315009);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c020() {
   return (neuron0x3c1e2e0()*0.0123718);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c060() {
   return (neuron0x3c1e620()*0.0388791);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24b10() {
   return (neuron0x3c199d0()*1.41378);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24b50() {
   return (neuron0x3c19c80()*0.553096);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24b90() {
   return (neuron0x3c19fc0()*-2.00575);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24bd0() {
   return (neuron0x3c1a300()*-0.135692);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24c10() {
   return (neuron0x3c1a640()*-0.490315);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24c50() {
   return (neuron0x3c1a980()*0.136788);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24c90() {
   return (neuron0x3c1acc0()*0.223981);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24cd0() {
   return (neuron0x3c1b000()*0.225321);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c7f0() {
   return (neuron0x3c1b340()*0.672117);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c830() {
   return (neuron0x3c1b680()*0.0772275);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c870() {
   return (neuron0x3c1b9c0()*0.303333);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c8b0() {
   return (neuron0x3c1bd00()*1.91759);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c8f0() {
   return (neuron0x3c1c040()*-0.523149);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c930() {
   return (neuron0x3c1c380()*0.315598);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c970() {
   return (neuron0x3c1c6c0()*-0.349825);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c9b0() {
   return (neuron0x3c1ca00()*-0.127359);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c230() {
   return (neuron0x3c1cd40()*0.346238);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c270() {
   return (neuron0x3c1d2a0()*-0.439366);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3cb00() {
   return (neuron0x3c1d5e0()*0.567886);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3cb40() {
   return (neuron0x3c1d920()*-0.299063);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3cb80() {
   return (neuron0x3c1dc60()*0.0154965);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3cbc0() {
   return (neuron0x3c1dfa0()*0.214894);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3cc00() {
   return (neuron0x3c1e2e0()*-0.154944);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3cc40() {
   return (neuron0x3c1e620()*-0.247759);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3cfc0() {
   return (neuron0x3c199d0()*0.459313);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d000() {
   return (neuron0x3c19c80()*-0.616623);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d040() {
   return (neuron0x3c19fc0()*-2.96047);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d080() {
   return (neuron0x3c1a300()*-4.98432);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d0c0() {
   return (neuron0x3c1a640()*-0.120668);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d100() {
   return (neuron0x3c1a980()*-2.90884);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d140() {
   return (neuron0x3c1acc0()*0.165326);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d180() {
   return (neuron0x3c1b000()*1.37805);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d1c0() {
   return (neuron0x3c1b340()*0.455862);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d200() {
   return (neuron0x3c1b680()*1.81205);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d240() {
   return (neuron0x3c1b9c0()*0.77329);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d280() {
   return (neuron0x3c1bd00()*-2.00055);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d2c0() {
   return (neuron0x3c1c040()*1.10194);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d300() {
   return (neuron0x3c1c380()*-0.631497);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d340() {
   return (neuron0x3c1c6c0()*0.531215);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d380() {
   return (neuron0x3c1ca00()*-0.496032);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ce10() {
   return (neuron0x3c1cd40()*-2.12667);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3ce50() {
   return (neuron0x3c1d2a0()*3.48144);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d4d0() {
   return (neuron0x3c1d5e0()*0.577121);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d510() {
   return (neuron0x3c1d920()*-0.914924);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d550() {
   return (neuron0x3c1dc60()*1.21014);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d590() {
   return (neuron0x3c1dfa0()*1.09939);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d5d0() {
   return (neuron0x3c1e2e0()*-4.52483);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d610() {
   return (neuron0x3c1e620()*0.110382);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d990() {
   return (neuron0x3c199d0()*1.26992);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d9d0() {
   return (neuron0x3c19c80()*1.13752);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3da10() {
   return (neuron0x3c19fc0()*5.24415);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3da50() {
   return (neuron0x3c1a300()*1.41246);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3da90() {
   return (neuron0x3c1a640()*0.615891);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3dad0() {
   return (neuron0x3c1a980()*0.808294);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3db10() {
   return (neuron0x3c1acc0()*0.124375);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3db50() {
   return (neuron0x3c1b000()*-1.43396);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3db90() {
   return (neuron0x3c1b340()*-1.93175);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3dbd0() {
   return (neuron0x3c1b680()*-0.11844);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3dc10() {
   return (neuron0x3c1b9c0()*1.29098);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3dc50() {
   return (neuron0x3c1bd00()*-0.198289);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3dc90() {
   return (neuron0x3c1c040()*-0.958202);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3dcd0() {
   return (neuron0x3c1c380()*1.75305);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3dd10() {
   return (neuron0x3c1c6c0()*-0.314171);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3dd50() {
   return (neuron0x3c1ca00()*1.06739);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d7e0() {
   return (neuron0x3c1cd40()*0.275052);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d820() {
   return (neuron0x3c1d2a0()*-0.630342);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e350() {
   return (neuron0x3c1d5e0()*-0.101018);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e390() {
   return (neuron0x3c1d920()*1.34094);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e3d0() {
   return (neuron0x3c1dc60()*-0.281874);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e410() {
   return (neuron0x3c1dfa0()*-0.663301);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e450() {
   return (neuron0x3c1e2e0()*0.48892);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e490() {
   return (neuron0x3c1e620()*6.83229);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e810() {
   return (neuron0x3c199d0()*-0.045411);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e850() {
   return (neuron0x3c19c80()*0.195959);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e890() {
   return (neuron0x3c19fc0()*-3.28908);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e8d0() {
   return (neuron0x3c1a300()*-0.0598254);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e910() {
   return (neuron0x3c1a640()*0.0802594);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e950() {
   return (neuron0x3c1a980()*0.0460513);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e990() {
   return (neuron0x3c1acc0()*-0.0589028);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e9d0() {
   return (neuron0x3c1b000()*-0.0392867);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ea10() {
   return (neuron0x3c1b340()*-0.0293318);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ea50() {
   return (neuron0x3c1b680()*-0.0258768);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ea90() {
   return (neuron0x3c1b9c0()*0.00206228);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ead0() {
   return (neuron0x3c1bd00()*-1.45217);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2eb10() {
   return (neuron0x3c1c040()*0.0497558);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2eb50() {
   return (neuron0x3c1c380()*-0.0510116);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2eb90() {
   return (neuron0x3c1c6c0()*0.0302395);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ebd0() {
   return (neuron0x3c1ca00()*0.010521);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e660() {
   return (neuron0x3c1cd40()*0.0543004);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e6a0() {
   return (neuron0x3c1d2a0()*0.0871989);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ed20() {
   return (neuron0x3c1d5e0()*0.00564123);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ed60() {
   return (neuron0x3c1d920()*0.0326267);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2eda0() {
   return (neuron0x3c1dc60()*-0.0477028);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ede0() {
   return (neuron0x3c1dfa0()*-0.00503149);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ee20() {
   return (neuron0x3c1e2e0()*-0.0146102);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ee60() {
   return (neuron0x3c1e620()*5.53184);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f1e0() {
   return (neuron0x3c199d0()*-0.133267);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f220() {
   return (neuron0x3c19c80()*-0.0666608);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f260() {
   return (neuron0x3c19fc0()*-0.0165999);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f2a0() {
   return (neuron0x3c1a300()*-0.00844773);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f2e0() {
   return (neuron0x3c1a640()*-0.0306878);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f320() {
   return (neuron0x3c1a980()*0.00013654);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f360() {
   return (neuron0x3c1acc0()*-0.0014937);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f3a0() {
   return (neuron0x3c1b000()*0.00500293);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f3e0() {
   return (neuron0x3c1b340()*-0.0326198);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f420() {
   return (neuron0x3c1b680()*0.013795);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f460() {
   return (neuron0x3c1b9c0()*-0.10279);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f4a0() {
   return (neuron0x3c1bd00()*-0.581811);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f4e0() {
   return (neuron0x3c1c040()*-0.163276);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f520() {
   return (neuron0x3c1c380()*-0.065865);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f560() {
   return (neuron0x3c1c6c0()*0.140008);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f5a0() {
   return (neuron0x3c1ca00()*0.0665207);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f030() {
   return (neuron0x3c1cd40()*-0.0257296);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f070() {
   return (neuron0x3c1d2a0()*0.0258171);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f6f0() {
   return (neuron0x3c1d5e0()*0.00144634);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f730() {
   return (neuron0x3c1d920()*-0.0389543);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f770() {
   return (neuron0x3c1dc60()*0.123949);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f7b0() {
   return (neuron0x3c1dfa0()*0.0175887);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f7f0() {
   return (neuron0x3c1e2e0()*-0.138856);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f830() {
   return (neuron0x3c1e620()*-9.1753);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fbb0() {
   return (neuron0x3c199d0()*-0.824932);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fbf0() {
   return (neuron0x3c19c80()*-0.115918);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fc30() {
   return (neuron0x3c19fc0()*2.51108);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fc70() {
   return (neuron0x3c1a300()*-0.514479);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fcb0() {
   return (neuron0x3c1a640()*-0.102409);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fcf0() {
   return (neuron0x3c1a980()*-0.271428);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fd30() {
   return (neuron0x3c1acc0()*-0.195859);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fd70() {
   return (neuron0x3c1b000()*-0.134625);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fdb0() {
   return (neuron0x3c1b340()*-0.180412);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fdf0() {
   return (neuron0x3c1b680()*0.0528154);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fe30() {
   return (neuron0x3c1b9c0()*0.0354551);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fe70() {
   return (neuron0x3c1bd00()*-0.505041);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2feb0() {
   return (neuron0x3c1c040()*-0.441823);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fef0() {
   return (neuron0x3c1c380()*-0.405397);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ff30() {
   return (neuron0x3c1c6c0()*-0.0393425);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2ff70() {
   return (neuron0x3c1ca00()*-0.166108);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fa00() {
   return (neuron0x3c1cd40()*-0.406829);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fa40() {
   return (neuron0x3c1d2a0()*-0.376101);
}

double NNfunction_nn_chi1_chi2::synapse0x3c300c0() {
   return (neuron0x3c1d5e0()*-0.41843);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30100() {
   return (neuron0x3c1d920()*-0.387328);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30140() {
   return (neuron0x3c1dc60()*0.135863);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30180() {
   return (neuron0x3c1dfa0()*-0.0649813);
}

double NNfunction_nn_chi1_chi2::synapse0x3c301c0() {
   return (neuron0x3c1e2e0()*0.0453447);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30200() {
   return (neuron0x3c1e620()*5.76988);
}

double NNfunction_nn_chi1_chi2::synapse0x3c420d0() {
   return (neuron0x3c199d0()*-0.0764709);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42110() {
   return (neuron0x3c19c80()*24.9436);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42150() {
   return (neuron0x3c19fc0()*0.941055);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42190() {
   return (neuron0x3c1a300()*0.0191593);
}

double NNfunction_nn_chi1_chi2::synapse0x3c421d0() {
   return (neuron0x3c1a640()*0.0736303);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42210() {
   return (neuron0x3c1a980()*0.0234993);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42250() {
   return (neuron0x3c1acc0()*0.0230533);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42290() {
   return (neuron0x3c1b000()*-0.00606045);
}

double NNfunction_nn_chi1_chi2::synapse0x3c422d0() {
   return (neuron0x3c1b340()*-0.0020962);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42310() {
   return (neuron0x3c1b680()*-0.0406601);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42350() {
   return (neuron0x3c1b9c0()*-0.0380933);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42390() {
   return (neuron0x3c1bd00()*-0.1099);
}

double NNfunction_nn_chi1_chi2::synapse0x3c423d0() {
   return (neuron0x3c1c040()*-0.0715249);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42410() {
   return (neuron0x3c1c380()*0.0516552);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42450() {
   return (neuron0x3c1c6c0()*-0.00903754);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42490() {
   return (neuron0x3c1ca00()*0.0663843);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30240() {
   return (neuron0x3c1cd40()*0.0135526);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30280() {
   return (neuron0x3c1d2a0()*-0.00496572);
}

double NNfunction_nn_chi1_chi2::synapse0x3c425e0() {
   return (neuron0x3c1d5e0()*-0.0098976);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42620() {
   return (neuron0x3c1d920()*-0.0873562);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42660() {
   return (neuron0x3c1dc60()*-0.0261331);
}

double NNfunction_nn_chi1_chi2::synapse0x3c426a0() {
   return (neuron0x3c1dfa0()*0.0160854);
}

double NNfunction_nn_chi1_chi2::synapse0x3c426e0() {
   return (neuron0x3c1e2e0()*-0.0523899);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42720() {
   return (neuron0x3c1e620()*-8.64715);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42aa0() {
   return (neuron0x3c199d0()*-0.056734);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42ae0() {
   return (neuron0x3c19c80()*-0.00203983);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42b20() {
   return (neuron0x3c19fc0()*-3.5202);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42b60() {
   return (neuron0x3c1a300()*0.025134);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42ba0() {
   return (neuron0x3c1a640()*-0.00608926);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42be0() {
   return (neuron0x3c1a980()*-0.0172384);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42c20() {
   return (neuron0x3c1acc0()*-0.0337855);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42c60() {
   return (neuron0x3c1b000()*-0.00852672);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42ca0() {
   return (neuron0x3c1b340()*0.0075075);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42ce0() {
   return (neuron0x3c1b680()*-0.0124632);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42d20() {
   return (neuron0x3c1b9c0()*-0.0555906);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42d60() {
   return (neuron0x3c1bd00()*-0.351937);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42da0() {
   return (neuron0x3c1c040()*-0.0269682);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42de0() {
   return (neuron0x3c1c380()*0.0536962);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42e20() {
   return (neuron0x3c1c6c0()*0.0441715);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42e60() {
   return (neuron0x3c1ca00()*0.0536577);
}

double NNfunction_nn_chi1_chi2::synapse0x3c428f0() {
   return (neuron0x3c1cd40()*-0.0117617);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42930() {
   return (neuron0x3c1d2a0()*-0.00140195);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42fb0() {
   return (neuron0x3c1d5e0()*-0.0167194);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42ff0() {
   return (neuron0x3c1d920()*0.0190988);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43030() {
   return (neuron0x3c1dc60()*0.0413496);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43070() {
   return (neuron0x3c1dfa0()*0.00180212);
}

double NNfunction_nn_chi1_chi2::synapse0x3c430b0() {
   return (neuron0x3c1e2e0()*-0.0212463);
}

double NNfunction_nn_chi1_chi2::synapse0x3c430f0() {
   return (neuron0x3c1e620()*-0.253955);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43470() {
   return (neuron0x3c199d0()*0.0899597);
}

double NNfunction_nn_chi1_chi2::synapse0x3c434b0() {
   return (neuron0x3c19c80()*0.710771);
}

double NNfunction_nn_chi1_chi2::synapse0x3c434f0() {
   return (neuron0x3c19fc0()*-1.75091);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43530() {
   return (neuron0x3c1a300()*-1.81266);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43570() {
   return (neuron0x3c1a640()*-0.0821306);
}

double NNfunction_nn_chi1_chi2::synapse0x3c435b0() {
   return (neuron0x3c1a980()*-0.333571);
}

double NNfunction_nn_chi1_chi2::synapse0x3c435f0() {
   return (neuron0x3c1acc0()*1.24284);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43630() {
   return (neuron0x3c1b000()*0.278463);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43670() {
   return (neuron0x3c1b340()*0.00398088);
}

double NNfunction_nn_chi1_chi2::synapse0x3c436b0() {
   return (neuron0x3c1b680()*1.13079);
}

double NNfunction_nn_chi1_chi2::synapse0x3c436f0() {
   return (neuron0x3c1b9c0()*0.760149);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43730() {
   return (neuron0x3c1bd00()*-0.748436);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43770() {
   return (neuron0x3c1c040()*0.747794);
}

double NNfunction_nn_chi1_chi2::synapse0x3c437b0() {
   return (neuron0x3c1c380()*-0.103791);
}

double NNfunction_nn_chi1_chi2::synapse0x3c437f0() {
   return (neuron0x3c1c6c0()*-0.260755);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43830() {
   return (neuron0x3c1ca00()*-1.29506);
}

double NNfunction_nn_chi1_chi2::synapse0x3c432c0() {
   return (neuron0x3c1cd40()*-0.453347);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43300() {
   return (neuron0x3c1d2a0()*0.396091);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43980() {
   return (neuron0x3c1d5e0()*0.51616);
}

double NNfunction_nn_chi1_chi2::synapse0x3c439c0() {
   return (neuron0x3c1d920()*0.888352);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43a00() {
   return (neuron0x3c1dc60()*-0.288008);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43a40() {
   return (neuron0x3c1dfa0()*-0.508571);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43a80() {
   return (neuron0x3c1e2e0()*-2.57443);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43ac0() {
   return (neuron0x3c1e620()*-0.320526);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43e40() {
   return (neuron0x3c199d0()*0.00240459);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43e80() {
   return (neuron0x3c19c80()*0.825961);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43ec0() {
   return (neuron0x3c19fc0()*-1.04229);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43f00() {
   return (neuron0x3c1a300()*-1.24734);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43f40() {
   return (neuron0x3c1a640()*0.210172);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43f80() {
   return (neuron0x3c1a980()*0.179434);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43fc0() {
   return (neuron0x3c1acc0()*-0.335098);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44000() {
   return (neuron0x3c1b000()*-0.0224162);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44040() {
   return (neuron0x3c1b340()*1.11215);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44080() {
   return (neuron0x3c1b680()*-0.320421);
}

double NNfunction_nn_chi1_chi2::synapse0x3c440c0() {
   return (neuron0x3c1b9c0()*0.425619);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44100() {
   return (neuron0x3c1bd00()*-0.698685);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44140() {
   return (neuron0x3c1c040()*0.486653);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44180() {
   return (neuron0x3c1c380()*0.355954);
}

double NNfunction_nn_chi1_chi2::synapse0x3c441c0() {
   return (neuron0x3c1c6c0()*-0.817589);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44200() {
   return (neuron0x3c1ca00()*-0.155211);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43c90() {
   return (neuron0x3c1cd40()*-0.150767);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43cd0() {
   return (neuron0x3c1d2a0()*0.373666);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44350() {
   return (neuron0x3c1d5e0()*-0.762941);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44390() {
   return (neuron0x3c1d920()*-0.438114);
}

double NNfunction_nn_chi1_chi2::synapse0x3c443d0() {
   return (neuron0x3c1dc60()*0.485749);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44410() {
   return (neuron0x3c1dfa0()*-0.106342);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44450() {
   return (neuron0x3c1e2e0()*0.1208);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44490() {
   return (neuron0x3c1e620()*-1.78713);
}

double NNfunction_nn_chi1_chi2::synapse0x39e4270() {
   return (neuron0x3c1ea90()*0.320153);
}

double NNfunction_nn_chi1_chi2::synapse0x39e42b0() {
   return (neuron0x3c1f2d0()*0.64915);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20e40() {
   return (neuron0x3c1fdb0()*1.62155);
}

double NNfunction_nn_chi1_chi2::synapse0x3c20e80() {
   return (neuron0x3c1f850()*0.137617);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22910() {
   return (neuron0x3c20b90()*0.847911);
}

double NNfunction_nn_chi1_chi2::synapse0x3c22950() {
   return (neuron0x3c22660()*3.73805);
}

double NNfunction_nn_chi1_chi2::synapse0x3c236e0() {
   return (neuron0x3c23430()*-0.271422);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23720() {
   return (neuron0x3c23e00()*0.782149);
}

double NNfunction_nn_chi1_chi2::synapse0x3c240b0() {
   return (neuron0x3c247d0()*0.348648);
}

double NNfunction_nn_chi1_chi2::synapse0x3c240f0() {
   return (neuron0x3c252b0()*-4.34647);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24a80() {
   return (neuron0x3c25c80()*2.56888);
}

double NNfunction_nn_chi1_chi2::synapse0x3c24ac0() {
   return (neuron0x3c22d60()*-0.741595);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25560() {
   return (neuron0x3c27830()*-3.81383);
}

double NNfunction_nn_chi1_chi2::synapse0x3c255a0() {
   return (neuron0x3c28200()*0.375867);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25f30() {
   return (neuron0x3c28bd0()*-1.00478);
}

double NNfunction_nn_chi1_chi2::synapse0x3c25f70() {
   return (neuron0x3c295a0()*-0.0630408);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23010() {
   return (neuron0x3c2b3b0()*-0.175875);
}

double NNfunction_nn_chi1_chi2::synapse0x3c23050() {
   return (neuron0x3c2b690()*0.163028);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27ae0() {
   return (neuron0x3c2c060()*2.9768);
}

double NNfunction_nn_chi1_chi2::synapse0x3c27b20() {
   return (neuron0x3c2ca30()*-2.534);
}

double NNfunction_nn_chi1_chi2::synapse0x3c284b0() {
   return (neuron0x3c2d400()*-4.77974);
}

double NNfunction_nn_chi1_chi2::synapse0x3c284f0() {
   return (neuron0x3c2ddd0()*8.36837);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28e80() {
   return (neuron0x3c26920()*1.04019);
}

double NNfunction_nn_chi1_chi2::synapse0x3c28ec0() {
   return (neuron0x3c272f0()*-3.42862);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29850() {
   return (neuron0x3c30b60()*-3.22308);
}

double NNfunction_nn_chi1_chi2::synapse0x3c29890() {
   return (neuron0x3c31530()*-1.7335);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1c8e0() {
   return (neuron0x3c31f00()*-2.79697);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1c920() {
   return (neuron0x3c328d0()*-1.82255);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b940() {
   return (neuron0x3c332a0()*0.888342);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2b980() {
   return (neuron0x3c33c70()*-0.467329);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c310() {
   return (neuron0x3c34640()*0.385034);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2c350() {
   return (neuron0x3c35010()*1.97324);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cce0() {
   return (neuron0x3c2b0a0()*10.7479);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2cd20() {
   return (neuron0x3c37bf0()*0.266636);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d6b0() {
   return (neuron0x3c385c0()*-1.39516);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2d6f0() {
   return (neuron0x3c38f90()*-0.439892);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e080() {
   return (neuron0x3c39960()*2.05556);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e0c0() {
   return (neuron0x3c3a330()*-8.80981);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26bd0() {
   return (neuron0x3c3ad00()*-0.912633);
}

double NNfunction_nn_chi1_chi2::synapse0x3c26c10() {
   return (neuron0x3c3b6d0()*5.25092);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30480() {
   return (neuron0x3c3c0a0()*-0.270803);
}

double NNfunction_nn_chi1_chi2::synapse0x3c304c0() {
   return (neuron0x3c3cc80()*1.84388);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30e10() {
   return (neuron0x3c3d650()*0.497908);
}

double NNfunction_nn_chi1_chi2::synapse0x3c30e50() {
   return (neuron0x3c2e4d0()*-3.48809);
}

double NNfunction_nn_chi1_chi2::synapse0x3c317e0() {
   return (neuron0x3c2eea0()*3.64116);
}

double NNfunction_nn_chi1_chi2::synapse0x3c31820() {
   return (neuron0x3c2f870()*-0.283487);
}

double NNfunction_nn_chi1_chi2::synapse0x3c321b0() {
   return (neuron0x3c41eb0()*-1.34121);
}

double NNfunction_nn_chi1_chi2::synapse0x3c321f0() {
   return (neuron0x3c42760()*-3.02625);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32b80() {
   return (neuron0x3c43130()*0.338929);
}

double NNfunction_nn_chi1_chi2::synapse0x3c32bc0() {
   return (neuron0x3c43b00()*0.576183);
}

double NNfunction_nn_chi1_chi2::synapse0x3c352c0() {
   return (neuron0x3c1ea90()*0.260731);
}

double NNfunction_nn_chi1_chi2::synapse0x3c35300() {
   return (neuron0x3c1f2d0()*0.348493);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a880() {
   return (neuron0x3c1fdb0()*1.02265);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2a8c0() {
   return (neuron0x3c1f850()*0.0529835);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37ea0() {
   return (neuron0x3c20b90()*0.70541);
}

double NNfunction_nn_chi1_chi2::synapse0x3c37ee0() {
   return (neuron0x3c22660()*5.11437);
}

double NNfunction_nn_chi1_chi2::synapse0x3c38870() {
   return (neuron0x3c23430()*-0.134458);
}

double NNfunction_nn_chi1_chi2::synapse0x3c388b0() {
   return (neuron0x3c23e00()*0.327218);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39240() {
   return (neuron0x3c247d0()*0.164316);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39280() {
   return (neuron0x3c252b0()*-6.91415);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39c10() {
   return (neuron0x3c25c80()*0.848351);
}

double NNfunction_nn_chi1_chi2::synapse0x3c39c50() {
   return (neuron0x3c22d60()*-3.1451);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a5e0() {
   return (neuron0x3c27830()*-1.42628);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3a620() {
   return (neuron0x3c28200()*0.166297);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3afb0() {
   return (neuron0x3c28bd0()*-0.545422);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3aff0() {
   return (neuron0x3c295a0()*-0.0551087);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b980() {
   return (neuron0x3c2b3b0()*-0.120938);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3b9c0() {
   return (neuron0x3c2b690()*0.101023);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c350() {
   return (neuron0x3c2c060()*1.05916);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3c390() {
   return (neuron0x3c2ca30()*-0.997101);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3cf30() {
   return (neuron0x3c2d400()*-3.05196);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3cf70() {
   return (neuron0x3c2ddd0()*0.843196);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d900() {
   return (neuron0x3c26920()*2.04124);
}

double NNfunction_nn_chi1_chi2::synapse0x3c3d940() {
   return (neuron0x3c272f0()*-1.73098);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e780() {
   return (neuron0x3c30b60()*-0.673804);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2e7c0() {
   return (neuron0x3c31530()*2.86405);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f150() {
   return (neuron0x3c31f00()*-1.113);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2f190() {
   return (neuron0x3c328d0()*-0.763859);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fb20() {
   return (neuron0x3c332a0()*0.574446);
}

double NNfunction_nn_chi1_chi2::synapse0x3c2fb60() {
   return (neuron0x3c33c70()*-0.222618);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42040() {
   return (neuron0x3c34640()*-9.17299);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42080() {
   return (neuron0x3c35010()*0.864641);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42a10() {
   return (neuron0x3c2b0a0()*0.378692);
}

double NNfunction_nn_chi1_chi2::synapse0x3c42a50() {
   return (neuron0x3c37bf0()*0.109499);
}

double NNfunction_nn_chi1_chi2::synapse0x3c433e0() {
   return (neuron0x3c385c0()*-4.302);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43420() {
   return (neuron0x3c38f90()*-0.168018);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43db0() {
   return (neuron0x3c39960()*0.862091);
}

double NNfunction_nn_chi1_chi2::synapse0x3c43df0() {
   return (neuron0x3c3a330()*-3.5236);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ed40() {
   return (neuron0x3c3ad00()*-0.38159);
}

double NNfunction_nn_chi1_chi2::synapse0x3c1ed80() {
   return (neuron0x3c3b6d0()*2.22051);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33550() {
   return (neuron0x3c3c0a0()*-0.178653);
}

double NNfunction_nn_chi1_chi2::synapse0x3c33590() {
   return (neuron0x3c3cc80()*0.749363);
}

double NNfunction_nn_chi1_chi2::synapse0x3c444d0() {
   return (neuron0x3c3d650()*0.215647);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44510() {
   return (neuron0x3c2e4d0()*1.03571);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44550() {
   return (neuron0x3c2eea0()*1.74554);
}

double NNfunction_nn_chi1_chi2::synapse0x3c44590() {
   return (neuron0x3c2f870()*-0.0188378);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b440() {
   return (neuron0x3c41eb0()*0.387792);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b480() {
   return (neuron0x3c42760()*-0.785053);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b4c0() {
   return (neuron0x3c43130()*0.125325);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b500() {
   return (neuron0x3c43b00()*0.208781);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b880() {
   return (neuron0x3c1ea90()*0.198025);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b8c0() {
   return (neuron0x3c1f2d0()*0.209477);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b900() {
   return (neuron0x3c1fdb0()*0.51892);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b940() {
   return (neuron0x3c1f850()*0.0206764);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b980() {
   return (neuron0x3c20b90()*0.503786);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b9c0() {
   return (neuron0x3c22660()*-0.657421);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ba00() {
   return (neuron0x3c23430()*-0.115173);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ba40() {
   return (neuron0x3c23e00()*0.173381);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ba80() {
   return (neuron0x3c247d0()*0.10061);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bac0() {
   return (neuron0x3c252b0()*0.274022);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bb00() {
   return (neuron0x3c25c80()*1.41816);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bb40() {
   return (neuron0x3c22d60()*-3.62732);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bb80() {
   return (neuron0x3c27830()*-3.01015);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bbc0() {
   return (neuron0x3c28200()*0.0699808);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bc00() {
   return (neuron0x3c28bd0()*-0.179905);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bc40() {
   return (neuron0x3c295a0()*-0.0769255);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b6d0() {
   return (neuron0x3c2b3b0()*-0.0672229);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4b710() {
   return (neuron0x3c2b690()*0.0948462);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bd90() {
   return (neuron0x3c2c060()*0.690915);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bdd0() {
   return (neuron0x3c2ca30()*-0.60815);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4be10() {
   return (neuron0x3c2d400()*-0.169932);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4be50() {
   return (neuron0x3c2ddd0()*0.000292707);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4be90() {
   return (neuron0x3c26920()*1.10759);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bed0() {
   return (neuron0x3c272f0()*-0.860333);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bf10() {
   return (neuron0x3c30b60()*-0.193294);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bf50() {
   return (neuron0x3c31530()*3.40878);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bf90() {
   return (neuron0x3c31f00()*-0.693469);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bfd0() {
   return (neuron0x3c328d0()*-0.361489);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c010() {
   return (neuron0x3c332a0()*0.391805);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c050() {
   return (neuron0x3c33c70()*-0.143115);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c090() {
   return (neuron0x3c34640()*0.264394);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c0d0() {
   return (neuron0x3c35010()*0.7021);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bc80() {
   return (neuron0x3c2b0a0()*0.412348);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bcc0() {
   return (neuron0x3c37bf0()*0.0882324);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bd00() {
   return (neuron0x3c385c0()*-3.97559);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4bd40() {
   return (neuron0x3c38f90()*-0.0521093);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c320() {
   return (neuron0x3c39960()*0.631407);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c360() {
   return (neuron0x3c3a330()*2.97228);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c3a0() {
   return (neuron0x3c3ad00()*-0.270168);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c3e0() {
   return (neuron0x3c3b6d0()*1.2835);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c420() {
   return (neuron0x3c3c0a0()*-0.14628);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c460() {
   return (neuron0x3c3cc80()*0.352457);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c4a0() {
   return (neuron0x3c3d650()*0.109681);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c4e0() {
   return (neuron0x3c2e4d0()*-2.1705);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c520() {
   return (neuron0x3c2eea0()*0.354467);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c560() {
   return (neuron0x3c2f870()*-0.0358573);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c5a0() {
   return (neuron0x3c41eb0()*0.134875);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c5e0() {
   return (neuron0x3c42760()*-0.916449);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c620() {
   return (neuron0x3c43130()*0.0750891);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c660() {
   return (neuron0x3c43b00()*0.10313);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c9e0() {
   return (neuron0x3c1ea90()*-0.407841);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ca20() {
   return (neuron0x3c1f2d0()*-0.509463);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ca60() {
   return (neuron0x3c1fdb0()*-1.32454);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4caa0() {
   return (neuron0x3c1f850()*-5.01013);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cae0() {
   return (neuron0x3c20b90()*-0.37181);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cb20() {
   return (neuron0x3c22660()*2.8206);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cb60() {
   return (neuron0x3c23430()*0.16494);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cba0() {
   return (neuron0x3c23e00()*-0.54597);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cbe0() {
   return (neuron0x3c247d0()*-0.222868);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cc20() {
   return (neuron0x3c252b0()*3.79179);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cc60() {
   return (neuron0x3c25c80()*-0.39267);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cca0() {
   return (neuron0x3c22d60()*0.369542);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cce0() {
   return (neuron0x3c27830()*4.13615);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cd20() {
   return (neuron0x3c28200()*-0.224758);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cd60() {
   return (neuron0x3c28bd0()*0.911099);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cda0() {
   return (neuron0x3c295a0()*0.0173132);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c830() {
   return (neuron0x3c2b3b0()*0.142525);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4c870() {
   return (neuron0x3c2b690()*-0.0975379);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cef0() {
   return (neuron0x3c2c060()*-1.55229);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cf30() {
   return (neuron0x3c2ca30()*2.2641);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cf70() {
   return (neuron0x3c2d400()*-0.439085);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cfb0() {
   return (neuron0x3c2ddd0()*-2.97599);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cff0() {
   return (neuron0x3c26920()*-1.802);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d030() {
   return (neuron0x3c272f0()*2.19876);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d070() {
   return (neuron0x3c30b60()*1.04601);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d0b0() {
   return (neuron0x3c31530()*1.21579);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d0f0() {
   return (neuron0x3c31f00()*2.45487);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d130() {
   return (neuron0x3c328d0()*1.13096);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d170() {
   return (neuron0x3c332a0()*-0.794151);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d1b0() {
   return (neuron0x3c33c70()*0.350852);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d1f0() {
   return (neuron0x3c34640()*-13.8549);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d230() {
   return (neuron0x3c35010()*-1.17256);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cde0() {
   return (neuron0x3c2b0a0()*0.390565);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ce20() {
   return (neuron0x3c37bf0()*-0.146762);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ce60() {
   return (neuron0x3c385c0()*1.5048);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4cea0() {
   return (neuron0x3c38f90()*0.26679);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d480() {
   return (neuron0x3c39960()*-1.26638);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d4c0() {
   return (neuron0x3c3a330()*1.92022);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d500() {
   return (neuron0x3c3ad00()*0.425103);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d540() {
   return (neuron0x3c3b6d0()*-3.09468);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d580() {
   return (neuron0x3c3c0a0()*0.330835);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d5c0() {
   return (neuron0x3c3cc80()*-1.07326);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d600() {
   return (neuron0x3c3d650()*-0.308981);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d640() {
   return (neuron0x3c2e4d0()*4.0315);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d680() {
   return (neuron0x3c2eea0()*-2.52324);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d6c0() {
   return (neuron0x3c2f870()*-5.12671);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d700() {
   return (neuron0x3c41eb0()*-3.84845);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d740() {
   return (neuron0x3c42760()*1.12177);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d780() {
   return (neuron0x3c43130()*-0.190948);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d7c0() {
   return (neuron0x3c43b00()*-0.291794);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4db40() {
   return (neuron0x3c1ea90()*-0.0562781);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4db80() {
   return (neuron0x3c1f2d0()*-0.172367);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dbc0() {
   return (neuron0x3c1fdb0()*-0.429836);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dc00() {
   return (neuron0x3c1f850()*-0.0476935);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dc40() {
   return (neuron0x3c20b90()*-0.264904);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dc80() {
   return (neuron0x3c22660()*0.704978);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dcc0() {
   return (neuron0x3c23430()*0.0486743);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dd00() {
   return (neuron0x3c23e00()*-0.220069);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dd40() {
   return (neuron0x3c247d0()*-0.0967121);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dd80() {
   return (neuron0x3c252b0()*1.60137);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ddc0() {
   return (neuron0x3c25c80()*-0.279883);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4de00() {
   return (neuron0x3c22d60()*-0.452971);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4de40() {
   return (neuron0x3c27830()*1.30987);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4de80() {
   return (neuron0x3c28200()*-0.110284);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dec0() {
   return (neuron0x3c28bd0()*0.496846);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4df00() {
   return (neuron0x3c295a0()*-0.000631298);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d990() {
   return (neuron0x3c2b3b0()*0.0430394);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4d9d0() {
   return (neuron0x3c2b690()*-0.0196263);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e050() {
   return (neuron0x3c2c060()*-0.617511);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e090() {
   return (neuron0x3c2ca30()*0.939048);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e0d0() {
   return (neuron0x3c2d400()*0.273697);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e110() {
   return (neuron0x3c2ddd0()*-0.134144);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e150() {
   return (neuron0x3c26920()*-1.29833);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e190() {
   return (neuron0x3c272f0()*0.873488);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e1d0() {
   return (neuron0x3c30b60()*0.594397);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e210() {
   return (neuron0x3c31530()*-2.7287);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e250() {
   return (neuron0x3c31f00()*1.00127);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e290() {
   return (neuron0x3c328d0()*0.550187);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e2d0() {
   return (neuron0x3c332a0()*-0.188974);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e310() {
   return (neuron0x3c33c70()*0.124385);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e350() {
   return (neuron0x3c34640()*0.963825);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e390() {
   return (neuron0x3c35010()*-0.302347);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4df40() {
   return (neuron0x3c2b0a0()*0.298908);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4df80() {
   return (neuron0x3c37bf0()*-0.0541279);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4dfc0() {
   return (neuron0x3c385c0()*-0.0353927);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e000() {
   return (neuron0x3c38f90()*0.136117);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e5e0() {
   return (neuron0x3c39960()*-0.361836);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e620() {
   return (neuron0x3c3a330()*0.0322043);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e660() {
   return (neuron0x3c3ad00()*0.131541);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e6a0() {
   return (neuron0x3c3b6d0()*-1.15815);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e6e0() {
   return (neuron0x3c3c0a0()*0.0943739);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e720() {
   return (neuron0x3c3cc80()*-0.533863);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e760() {
   return (neuron0x3c3d650()*-0.137379);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e7a0() {
   return (neuron0x3c2e4d0()*1.37245);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e7e0() {
   return (neuron0x3c2eea0()*-1.33918);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e820() {
   return (neuron0x3c2f870()*0.0545);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e860() {
   return (neuron0x3c41eb0()*-0.431794);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e8a0() {
   return (neuron0x3c42760()*-0.196503);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e8e0() {
   return (neuron0x3c43130()*-0.0731432);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4e920() {
   return (neuron0x3c43b00()*-0.123606);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4eb80() {
   return (neuron0x3c4ad00()*2.15411);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ebc0() {
   return (neuron0x3c4b0a0()*4.28857);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ec00() {
   return (neuron0x3c4b540()*-14.953);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ec40() {
   return (neuron0x3c4c6a0()*-5.0166);
}

double NNfunction_nn_chi1_chi2::synapse0x3c4ec80() {
   return (neuron0x3c4d800()*8.79441);
}

