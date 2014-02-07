#include "NNfunction_sb_sLsR.h"
#include <cmath>

double NNfunction_sb_sLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6501)/15.3623;
   input1 = (in1 - 6.31253)/1137.46;
   input2 = (in2 - 668.109)/627.494;
   input3 = (in3 - -57.5968)/822.388;
   input4 = (in4 - 1042.95)/943.465;
   input5 = (in5 - 878.247)/928.432;
   input6 = (in6 - 887.143)/932.427;
   input7 = (in7 - 910.021)/918.768;
   input8 = (in8 - 920.297)/977.625;
   input9 = (in9 - 894.508)/958.723;
   input10 = (in10 - 986.73)/961.568;
   input11 = (in11 - 718.58)/866.875;
   input12 = (in12 - 315.706)/304.311;
   input13 = (in13 - 497.116)/512.357;
   input14 = (in14 - 707.357)/803.834;
   input15 = (in15 - 696.675)/798.828;
   input16 = (in16 - 522.697)/545.87;
   input17 = (in17 - 769.558)/907.21;
   input18 = (in18 - 308.458)/302.193;
   input19 = (in19 - 805.204)/886.775;
   input20 = (in20 - -8.99066)/487.422;
   input21 = (in21 - 7.05467)/1155.66;
   input22 = (in22 - -2.62749)/1193.92;
   input23 = (in23 - -200.49)/597.382;
   switch(index) {
     case 0:
         return neuron0x1ca04a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLsR::Value(int index, double* input) {
   input0 = (input[0] - 23.6501)/15.3623;
   input1 = (input[1] - 6.31253)/1137.46;
   input2 = (input[2] - 668.109)/627.494;
   input3 = (input[3] - -57.5968)/822.388;
   input4 = (input[4] - 1042.95)/943.465;
   input5 = (input[5] - 878.247)/928.432;
   input6 = (input[6] - 887.143)/932.427;
   input7 = (input[7] - 910.021)/918.768;
   input8 = (input[8] - 920.297)/977.625;
   input9 = (input[9] - 894.508)/958.723;
   input10 = (input[10] - 986.73)/961.568;
   input11 = (input[11] - 718.58)/866.875;
   input12 = (input[12] - 315.706)/304.311;
   input13 = (input[13] - 497.116)/512.357;
   input14 = (input[14] - 707.357)/803.834;
   input15 = (input[15] - 696.675)/798.828;
   input16 = (input[16] - 522.697)/545.87;
   input17 = (input[17] - 769.558)/907.21;
   input18 = (input[18] - 308.458)/302.193;
   input19 = (input[19] - 805.204)/886.775;
   input20 = (input[20] - -8.99066)/487.422;
   input21 = (input[21] - 7.05467)/1155.66;
   input22 = (input[22] - -2.62749)/1193.92;
   input23 = (input[23] - -200.49)/597.382;
   switch(index) {
     case 0:
         return neuron0x1ca04a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLsR::neuron0x1c6c560() {
   return input0;
}

double NNfunction_sb_sLsR::neuron0x1c6c8a0() {
   return input1;
}

double NNfunction_sb_sLsR::neuron0x1c6cbe0() {
   return input2;
}

double NNfunction_sb_sLsR::neuron0x1c6cf20() {
   return input3;
}

double NNfunction_sb_sLsR::neuron0x1c6d260() {
   return input4;
}

double NNfunction_sb_sLsR::neuron0x1c6d5a0() {
   return input5;
}

double NNfunction_sb_sLsR::neuron0x1c6d8e0() {
   return input6;
}

double NNfunction_sb_sLsR::neuron0x1c6dc20() {
   return input7;
}

double NNfunction_sb_sLsR::neuron0x1c6df60() {
   return input8;
}

double NNfunction_sb_sLsR::neuron0x1c6e2a0() {
   return input9;
}

double NNfunction_sb_sLsR::neuron0x1c6e5e0() {
   return input10;
}

double NNfunction_sb_sLsR::neuron0x1c6e920() {
   return input11;
}

double NNfunction_sb_sLsR::neuron0x1c6ec60() {
   return input12;
}

double NNfunction_sb_sLsR::neuron0x1c6efa0() {
   return input13;
}

double NNfunction_sb_sLsR::neuron0x1c6f2e0() {
   return input14;
}

double NNfunction_sb_sLsR::neuron0x1c6f620() {
   return input15;
}

double NNfunction_sb_sLsR::neuron0x1c6f960() {
   return input16;
}

double NNfunction_sb_sLsR::neuron0x1c6fec0() {
   return input17;
}

double NNfunction_sb_sLsR::neuron0x1c700e0() {
   return input18;
}

double NNfunction_sb_sLsR::neuron0x1c70420() {
   return input19;
}

double NNfunction_sb_sLsR::neuron0x1c70760() {
   return input20;
}

double NNfunction_sb_sLsR::neuron0x1c70aa0() {
   return input21;
}

double NNfunction_sb_sLsR::neuron0x1c70de0() {
   return input22;
}

double NNfunction_sb_sLsR::neuron0x1c71120() {
   return input23;
}

double NNfunction_sb_sLsR::input0x1c715c0() {
   double input = -0.657508;
   input += synapse0x1a2c3d0();
   input += synapse0x1c6c420();
   input += synapse0x1c6c460();
   input += synapse0x1c71870();
   input += synapse0x1c718b0();
   input += synapse0x1c718f0();
   input += synapse0x1c71930();
   input += synapse0x1c71970();
   input += synapse0x1c719b0();
   input += synapse0x1c719f0();
   input += synapse0x1c71a30();
   input += synapse0x1c71a70();
   input += synapse0x1c71ab0();
   input += synapse0x1c71af0();
   input += synapse0x1c71b30();
   input += synapse0x1c71b70();
   input += synapse0x1c6c390();
   input += synapse0x1c6c3d0();
   input += synapse0x1a1dc70();
   input += synapse0x1a1dcb0();
   input += synapse0x1c71dd0();
   input += synapse0x1c71e10();
   input += synapse0x1c71e50();
   input += synapse0x1c71e90();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c715c0() {
   double input = input0x1c715c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c71ed0() {
   double input = 0.522522;
   input += synapse0x1c72210();
   input += synapse0x1c72250();
   input += synapse0x1c72290();
   input += synapse0x1c722d0();
   input += synapse0x1c72310();
   input += synapse0x1c72350();
   input += synapse0x1c72390();
   input += synapse0x1c723d0();
   input += synapse0x1c72410();
   input += synapse0x1c71cc0();
   input += synapse0x1c71d00();
   input += synapse0x1c71d40();
   input += synapse0x1c71d80();
   input += synapse0x1c72660();
   input += synapse0x1c726a0();
   input += synapse0x1c726e0();
   input += synapse0x1c72060();
   input += synapse0x1c720a0();
   input += synapse0x1c72830();
   input += synapse0x1c72870();
   input += synapse0x1c728b0();
   input += synapse0x1c728f0();
   input += synapse0x1c72930();
   input += synapse0x1c72970();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c71ed0() {
   double input = input0x1c71ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c729b0() {
   double input = 2.38064;
   input += synapse0x1c72cf0();
   input += synapse0x1c72d30();
   input += synapse0x1c72d70();
   input += synapse0x1c72db0();
   input += synapse0x1c72df0();
   input += synapse0x1c72e30();
   input += synapse0x1c72e70();
   input += synapse0x1c72eb0();
   input += synapse0x1c72ef0();
   input += synapse0x1c72f30();
   input += synapse0x1c72f70();
   input += synapse0x1c72fb0();
   input += synapse0x1c72ff0();
   input += synapse0x1c73030();
   input += synapse0x1c73070();
   input += synapse0x1c730b0();
   input += synapse0x1c72b40();
   input += synapse0x1c72b80();
   input += synapse0x1a2bac0();
   input += synapse0x1a2bb00();
   input += synapse0x1c5b5f0();
   input += synapse0x1c5b630();
   input += synapse0x1c5b670();
   input += synapse0x1c6c4a0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c729b0() {
   double input = input0x1c729b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1a2c240() {
   double input = -0.672071;
   input += synapse0x1c72600();
   input += synapse0x1c6c4e0();
   input += synapse0x1c6c520();
   input += synapse0x1c73200();
   input += synapse0x1c73240();
   input += synapse0x1c73280();
   input += synapse0x1c732c0();
   input += synapse0x1c73300();
   input += synapse0x1c73340();
   input += synapse0x1c73380();
   input += synapse0x1c733c0();
   input += synapse0x1c73400();
   input += synapse0x1c73440();
   input += synapse0x1c73480();
   input += synapse0x1c734c0();
   input += synapse0x1c73500();
   input += synapse0x1c72450();
   input += synapse0x1c72490();
   input += synapse0x1c73650();
   input += synapse0x1c73690();
   input += synapse0x1c736d0();
   input += synapse0x1c73710();
   input += synapse0x1c73750();
   input += synapse0x1c73790();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1a2c240() {
   double input = input0x1a2c240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c737d0() {
   double input = -0.459772;
   input += synapse0x1c73b10();
   input += synapse0x1c73b50();
   input += synapse0x1c73b90();
   input += synapse0x1c73bd0();
   input += synapse0x1c73c10();
   input += synapse0x1c73c50();
   input += synapse0x1c73c90();
   input += synapse0x1c73cd0();
   input += synapse0x1c73d10();
   input += synapse0x1c73d50();
   input += synapse0x1c73d90();
   input += synapse0x1c73dd0();
   input += synapse0x1c73e10();
   input += synapse0x1c73e50();
   input += synapse0x1c73e90();
   input += synapse0x1c73ed0();
   input += synapse0x1c73960();
   input += synapse0x1c739a0();
   input += synapse0x1c74020();
   input += synapse0x1c74060();
   input += synapse0x1c740a0();
   input += synapse0x1c740e0();
   input += synapse0x1c74120();
   input += synapse0x1c74160();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c737d0() {
   double input = input0x1c737d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c741a0() {
   double input = 1.06994;
   input += synapse0x1c744e0();
   input += synapse0x1c74520();
   input += synapse0x1c74560();
   input += synapse0x1c745a0();
   input += synapse0x1c745e0();
   input += synapse0x1c74620();
   input += synapse0x1c74660();
   input += synapse0x1c746a0();
   input += synapse0x1c746e0();
   input += synapse0x1a2be30();
   input += synapse0x1a2be70();
   input += synapse0x1a2beb0();
   input += synapse0x1a2bef0();
   input += synapse0x1a2bf30();
   input += synapse0x1a2bf70();
   input += synapse0x1a2bfb0();
   input += synapse0x1c74330();
   input += synapse0x1c74370();
   input += synapse0x1a2c100();
   input += synapse0x1a2c140();
   input += synapse0x1a2c180();
   input += synapse0x1a2c1c0();
   input += synapse0x1a2c200();
   input += synapse0x1c74f30();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c741a0() {
   double input = input0x1c741a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c74f70() {
   double input = -0.0352822;
   input += synapse0x1c752b0();
   input += synapse0x1c752f0();
   input += synapse0x1c75330();
   input += synapse0x1c75370();
   input += synapse0x1c753b0();
   input += synapse0x1c753f0();
   input += synapse0x1c75430();
   input += synapse0x1c75470();
   input += synapse0x1c754b0();
   input += synapse0x1c754f0();
   input += synapse0x1c75530();
   input += synapse0x1c75570();
   input += synapse0x1c755b0();
   input += synapse0x1c755f0();
   input += synapse0x1c75630();
   input += synapse0x1c75670();
   input += synapse0x1c75100();
   input += synapse0x1c75140();
   input += synapse0x1c757c0();
   input += synapse0x1c75800();
   input += synapse0x1c75840();
   input += synapse0x1c75880();
   input += synapse0x1c758c0();
   input += synapse0x1c75900();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c74f70() {
   double input = input0x1c74f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c75940() {
   double input = 0.936584;
   input += synapse0x1c75c80();
   input += synapse0x1c75cc0();
   input += synapse0x1c75d00();
   input += synapse0x1c75d40();
   input += synapse0x1c75d80();
   input += synapse0x1c75dc0();
   input += synapse0x1c75e00();
   input += synapse0x1c75e40();
   input += synapse0x1c75e80();
   input += synapse0x1c75ec0();
   input += synapse0x1c75f00();
   input += synapse0x1c75f40();
   input += synapse0x1c75f80();
   input += synapse0x1c75fc0();
   input += synapse0x1c76000();
   input += synapse0x1c76040();
   input += synapse0x1c75ad0();
   input += synapse0x1c75b10();
   input += synapse0x1c76190();
   input += synapse0x1c761d0();
   input += synapse0x1c76210();
   input += synapse0x1c76250();
   input += synapse0x1c76290();
   input += synapse0x1c762d0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c75940() {
   double input = input0x1c75940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c76310() {
   double input = -0.144792;
   input += synapse0x1c6fdb0();
   input += synapse0x1c6fdf0();
   input += synapse0x1c6fe30();
   input += synapse0x1c6fe70();
   input += synapse0x1c76860();
   input += synapse0x1c768a0();
   input += synapse0x1c768e0();
   input += synapse0x1c76920();
   input += synapse0x1c76960();
   input += synapse0x1c769a0();
   input += synapse0x1c769e0();
   input += synapse0x1c76a20();
   input += synapse0x1c76a60();
   input += synapse0x1c76aa0();
   input += synapse0x1c76ae0();
   input += synapse0x1c76b20();
   input += synapse0x1c764a0();
   input += synapse0x1c764e0();
   input += synapse0x1c76c70();
   input += synapse0x1c76cb0();
   input += synapse0x1c76cf0();
   input += synapse0x1c76d30();
   input += synapse0x1c76d70();
   input += synapse0x1c76db0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c76310() {
   double input = input0x1c76310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c76df0() {
   double input = 0.392076;
   input += synapse0x1c77130();
   input += synapse0x1c77170();
   input += synapse0x1c771b0();
   input += synapse0x1c771f0();
   input += synapse0x1c77230();
   input += synapse0x1c77270();
   input += synapse0x1c772b0();
   input += synapse0x1c772f0();
   input += synapse0x1c77330();
   input += synapse0x1c77370();
   input += synapse0x1c773b0();
   input += synapse0x1c773f0();
   input += synapse0x1c77430();
   input += synapse0x1c77470();
   input += synapse0x1c774b0();
   input += synapse0x1c774f0();
   input += synapse0x1c76f80();
   input += synapse0x1c76fc0();
   input += synapse0x1c77640();
   input += synapse0x1c77680();
   input += synapse0x1c776c0();
   input += synapse0x1c77700();
   input += synapse0x1c77740();
   input += synapse0x1c77780();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c76df0() {
   double input = input0x1c76df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c777c0() {
   double input = -2.04134;
   input += synapse0x1c77b00();
   input += synapse0x1c77b40();
   input += synapse0x1c77b80();
   input += synapse0x1c77bc0();
   input += synapse0x1c77c00();
   input += synapse0x1c77c40();
   input += synapse0x1c77c80();
   input += synapse0x1c77cc0();
   input += synapse0x1c77d00();
   input += synapse0x1c77d40();
   input += synapse0x1c77d80();
   input += synapse0x1c77dc0();
   input += synapse0x1c77e00();
   input += synapse0x1c77e40();
   input += synapse0x1c77e80();
   input += synapse0x1c77ec0();
   input += synapse0x1c77950();
   input += synapse0x1c77990();
   input += synapse0x1c74720();
   input += synapse0x1c74760();
   input += synapse0x1c747a0();
   input += synapse0x1c747e0();
   input += synapse0x1c74820();
   input += synapse0x1c74860();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c777c0() {
   double input = input0x1c777c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c748a0() {
   double input = 0.93732;
   input += synapse0x1c74be0();
   input += synapse0x1c74c20();
   input += synapse0x1c74c60();
   input += synapse0x1c74ca0();
   input += synapse0x1c74ce0();
   input += synapse0x1c74d20();
   input += synapse0x1c74d60();
   input += synapse0x1c74da0();
   input += synapse0x1c74de0();
   input += synapse0x1c74e20();
   input += synapse0x1c74e60();
   input += synapse0x1c74ea0();
   input += synapse0x1c74ee0();
   input += synapse0x1c79020();
   input += synapse0x1c79060();
   input += synapse0x1c790a0();
   input += synapse0x1c74a30();
   input += synapse0x1c74a70();
   input += synapse0x1c791f0();
   input += synapse0x1c79230();
   input += synapse0x1c79270();
   input += synapse0x1c792b0();
   input += synapse0x1c792f0();
   input += synapse0x1c79330();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c748a0() {
   double input = input0x1c748a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c79370() {
   double input = 0.650281;
   input += synapse0x1c796b0();
   input += synapse0x1c796f0();
   input += synapse0x1c79730();
   input += synapse0x1c79770();
   input += synapse0x1c797b0();
   input += synapse0x1c797f0();
   input += synapse0x1c79830();
   input += synapse0x1c79870();
   input += synapse0x1c798b0();
   input += synapse0x1c798f0();
   input += synapse0x1c79930();
   input += synapse0x1c79970();
   input += synapse0x1c799b0();
   input += synapse0x1c799f0();
   input += synapse0x1c79a30();
   input += synapse0x1c79a70();
   input += synapse0x1c79500();
   input += synapse0x1c79540();
   input += synapse0x1c79bc0();
   input += synapse0x1c79c00();
   input += synapse0x1c79c40();
   input += synapse0x1c79c80();
   input += synapse0x1c79cc0();
   input += synapse0x1c79d00();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c79370() {
   double input = input0x1c79370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c79d40() {
   double input = -0.342715;
   input += synapse0x1c7a080();
   input += synapse0x1c7a0c0();
   input += synapse0x1c7a100();
   input += synapse0x1c7a140();
   input += synapse0x1c7a180();
   input += synapse0x1c7a1c0();
   input += synapse0x1c7a200();
   input += synapse0x1c7a240();
   input += synapse0x1c7a280();
   input += synapse0x1c7a2c0();
   input += synapse0x1c7a300();
   input += synapse0x1c7a340();
   input += synapse0x1c7a380();
   input += synapse0x1c7a3c0();
   input += synapse0x1c7a400();
   input += synapse0x1c7a440();
   input += synapse0x1c79ed0();
   input += synapse0x1c79f10();
   input += synapse0x1c7a590();
   input += synapse0x1c7a5d0();
   input += synapse0x1c7a610();
   input += synapse0x1c7a650();
   input += synapse0x1c7a690();
   input += synapse0x1c7a6d0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c79d40() {
   double input = input0x1c79d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c7a710() {
   double input = 0.323806;
   input += synapse0x1c7aa50();
   input += synapse0x1c7aa90();
   input += synapse0x1c7aad0();
   input += synapse0x1c7ab10();
   input += synapse0x1c7ab50();
   input += synapse0x1c7ab90();
   input += synapse0x1c7abd0();
   input += synapse0x1c7ac10();
   input += synapse0x1c7ac50();
   input += synapse0x1c7ac90();
   input += synapse0x1c7acd0();
   input += synapse0x1c7ad10();
   input += synapse0x1c7ad50();
   input += synapse0x1c7ad90();
   input += synapse0x1c7add0();
   input += synapse0x1c7ae10();
   input += synapse0x1c7a8a0();
   input += synapse0x1c7a8e0();
   input += synapse0x1c7af60();
   input += synapse0x1c7afa0();
   input += synapse0x1c7afe0();
   input += synapse0x1c7b020();
   input += synapse0x1c7b060();
   input += synapse0x1c7b0a0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c7a710() {
   double input = input0x1c7a710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c7b0e0() {
   double input = 0.775249;
   input += synapse0x1c7b420();
   input += synapse0x1c6c780();
   input += synapse0x1c6c7c0();
   input += synapse0x1c6cac0();
   input += synapse0x1c6cb00();
   input += synapse0x1c6ce00();
   input += synapse0x1c6ce40();
   input += synapse0x1c6d140();
   input += synapse0x1c6d180();
   input += synapse0x1c6d480();
   input += synapse0x1c6d4c0();
   input += synapse0x1c6d7c0();
   input += synapse0x1c6d800();
   input += synapse0x1c6db00();
   input += synapse0x1c6db40();
   input += synapse0x1c6de40();
   input += synapse0x1c6de80();
   input += synapse0x1c6e180();
   input += synapse0x1c6e1c0();
   input += synapse0x1c6e4c0();
   input += synapse0x1c6e500();
   input += synapse0x1c6e800();
   input += synapse0x1c6e840();
   input += synapse0x1c6eb40();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c7b0e0() {
   double input = input0x1c7b0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c7cef0() {
   double input = 0.601616;
   input += synapse0x1c6eb80();
   input += synapse0x1c6f840();
   input += synapse0x1c6f880();
   input += synapse0x1c7b270();
   input += synapse0x1c7b2b0();
   input += synapse0x1c6fb80();
   input += synapse0x1c6fbc0();
   input += synapse0x1a1db50();
   input += synapse0x1a1db90();
   input += synapse0x1c70300();
   input += synapse0x1c70340();
   input += synapse0x1c70640();
   input += synapse0x1c70680();
   input += synapse0x1c70980();
   input += synapse0x1c709c0();
   input += synapse0x1c70cc0();
   input += synapse0x1c70d00();
   input += synapse0x1c71000();
   input += synapse0x1c71040();
   input += synapse0x1c71340();
   input += synapse0x1c71380();
   input += synapse0x1c6ee80();
   input += synapse0x1c6eec0();
   input += synapse0x1c7d190();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c7cef0() {
   double input = input0x1c7cef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c7d1d0() {
   double input = -0.560826;
   input += synapse0x1c7d510();
   input += synapse0x1c7d550();
   input += synapse0x1c7d590();
   input += synapse0x1c7d5d0();
   input += synapse0x1c7d610();
   input += synapse0x1c7d650();
   input += synapse0x1c7d690();
   input += synapse0x1c7d6d0();
   input += synapse0x1c7d710();
   input += synapse0x1c7d750();
   input += synapse0x1c7d790();
   input += synapse0x1c7d7d0();
   input += synapse0x1c7d810();
   input += synapse0x1c7d850();
   input += synapse0x1c7d890();
   input += synapse0x1c7d8d0();
   input += synapse0x1c7d360();
   input += synapse0x1c7d3a0();
   input += synapse0x1c7da20();
   input += synapse0x1c7da60();
   input += synapse0x1c7daa0();
   input += synapse0x1c7dae0();
   input += synapse0x1c7db20();
   input += synapse0x1c7db60();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c7d1d0() {
   double input = input0x1c7d1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c7dba0() {
   double input = 3.21759;
   input += synapse0x1c7dee0();
   input += synapse0x1c7df20();
   input += synapse0x1c7df60();
   input += synapse0x1c7dfa0();
   input += synapse0x1c7dfe0();
   input += synapse0x1c7e020();
   input += synapse0x1c7e060();
   input += synapse0x1c7e0a0();
   input += synapse0x1c7e0e0();
   input += synapse0x1c7e120();
   input += synapse0x1c7e160();
   input += synapse0x1c7e1a0();
   input += synapse0x1c7e1e0();
   input += synapse0x1c7e220();
   input += synapse0x1c7e260();
   input += synapse0x1c7e2a0();
   input += synapse0x1c7dd30();
   input += synapse0x1c7dd70();
   input += synapse0x1c7e3f0();
   input += synapse0x1c7e430();
   input += synapse0x1c7e470();
   input += synapse0x1c7e4b0();
   input += synapse0x1c7e4f0();
   input += synapse0x1c7e530();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c7dba0() {
   double input = input0x1c7dba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c7e570() {
   double input = -1.42923;
   input += synapse0x1c7e8b0();
   input += synapse0x1c7e8f0();
   input += synapse0x1c7e930();
   input += synapse0x1c7e970();
   input += synapse0x1c7e9b0();
   input += synapse0x1c7e9f0();
   input += synapse0x1c7ea30();
   input += synapse0x1c7ea70();
   input += synapse0x1c7eab0();
   input += synapse0x1c7eaf0();
   input += synapse0x1c7eb30();
   input += synapse0x1c7eb70();
   input += synapse0x1c7ebb0();
   input += synapse0x1c7ebf0();
   input += synapse0x1c7ec30();
   input += synapse0x1c7ec70();
   input += synapse0x1c7e700();
   input += synapse0x1c7e740();
   input += synapse0x1c7edc0();
   input += synapse0x1c7ee00();
   input += synapse0x1c7ee40();
   input += synapse0x1c7ee80();
   input += synapse0x1c7eec0();
   input += synapse0x1c7ef00();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c7e570() {
   double input = input0x1c7e570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c7ef40() {
   double input = 0.763204;
   input += synapse0x1c7f280();
   input += synapse0x1c7f2c0();
   input += synapse0x1c7f300();
   input += synapse0x1c7f340();
   input += synapse0x1c7f380();
   input += synapse0x1c7f3c0();
   input += synapse0x1c7f400();
   input += synapse0x1c7f440();
   input += synapse0x1c7f480();
   input += synapse0x1c7f4c0();
   input += synapse0x1c7f500();
   input += synapse0x1c7f540();
   input += synapse0x1c7f580();
   input += synapse0x1c7f5c0();
   input += synapse0x1c7f600();
   input += synapse0x1c7f640();
   input += synapse0x1c7f0d0();
   input += synapse0x1c7f110();
   input += synapse0x1c7f790();
   input += synapse0x1c7f7d0();
   input += synapse0x1c7f810();
   input += synapse0x1c7f850();
   input += synapse0x1c7f890();
   input += synapse0x1c7f8d0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c7ef40() {
   double input = input0x1c7ef40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c7f910() {
   double input = -2.00611;
   input += synapse0x1c7fc50();
   input += synapse0x1c7fc90();
   input += synapse0x1c7fcd0();
   input += synapse0x1c7fd10();
   input += synapse0x1c7fd50();
   input += synapse0x1c7fd90();
   input += synapse0x1c7fdd0();
   input += synapse0x1c7fe10();
   input += synapse0x1c7fe50();
   input += synapse0x1c78010();
   input += synapse0x1c78050();
   input += synapse0x1c78090();
   input += synapse0x1c780d0();
   input += synapse0x1c78110();
   input += synapse0x1c78150();
   input += synapse0x1c78190();
   input += synapse0x1c7faa0();
   input += synapse0x1c7fae0();
   input += synapse0x1c782e0();
   input += synapse0x1c78320();
   input += synapse0x1c78360();
   input += synapse0x1c783a0();
   input += synapse0x1c783e0();
   input += synapse0x1c78420();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c7f910() {
   double input = input0x1c7f910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c78460() {
   double input = 0.830236;
   input += synapse0x1c787a0();
   input += synapse0x1c787e0();
   input += synapse0x1c78820();
   input += synapse0x1c78860();
   input += synapse0x1c788a0();
   input += synapse0x1c788e0();
   input += synapse0x1c78920();
   input += synapse0x1c78960();
   input += synapse0x1c789a0();
   input += synapse0x1c789e0();
   input += synapse0x1c78a20();
   input += synapse0x1c78a60();
   input += synapse0x1c78aa0();
   input += synapse0x1c78ae0();
   input += synapse0x1c78b20();
   input += synapse0x1c78b60();
   input += synapse0x1c785f0();
   input += synapse0x1c78630();
   input += synapse0x1c78cb0();
   input += synapse0x1c78cf0();
   input += synapse0x1c78d30();
   input += synapse0x1c78d70();
   input += synapse0x1c78db0();
   input += synapse0x1c78df0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c78460() {
   double input = input0x1c78460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c78e30() {
   double input = 0.692433;
   input += synapse0x1c78fc0();
   input += synapse0x1c82050();
   input += synapse0x1c82090();
   input += synapse0x1c820d0();
   input += synapse0x1c82110();
   input += synapse0x1c82150();
   input += synapse0x1c82190();
   input += synapse0x1c821d0();
   input += synapse0x1c82210();
   input += synapse0x1c82250();
   input += synapse0x1c82290();
   input += synapse0x1c822d0();
   input += synapse0x1c82310();
   input += synapse0x1c82350();
   input += synapse0x1c82390();
   input += synapse0x1c823d0();
   input += synapse0x1c81ea0();
   input += synapse0x1c81ee0();
   input += synapse0x1c82520();
   input += synapse0x1c82560();
   input += synapse0x1c825a0();
   input += synapse0x1c825e0();
   input += synapse0x1c82620();
   input += synapse0x1c82660();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c78e30() {
   double input = input0x1c78e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c826a0() {
   double input = 0.230822;
   input += synapse0x1c829e0();
   input += synapse0x1c82a20();
   input += synapse0x1c82a60();
   input += synapse0x1c82aa0();
   input += synapse0x1c82ae0();
   input += synapse0x1c82b20();
   input += synapse0x1c82b60();
   input += synapse0x1c82ba0();
   input += synapse0x1c82be0();
   input += synapse0x1c82c20();
   input += synapse0x1c82c60();
   input += synapse0x1c82ca0();
   input += synapse0x1c82ce0();
   input += synapse0x1c82d20();
   input += synapse0x1c82d60();
   input += synapse0x1c82da0();
   input += synapse0x1c82830();
   input += synapse0x1c82870();
   input += synapse0x1c82ef0();
   input += synapse0x1c82f30();
   input += synapse0x1c82f70();
   input += synapse0x1c82fb0();
   input += synapse0x1c82ff0();
   input += synapse0x1c83030();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c826a0() {
   double input = input0x1c826a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c83070() {
   double input = 0.974681;
   input += synapse0x1c833b0();
   input += synapse0x1c833f0();
   input += synapse0x1c83430();
   input += synapse0x1c83470();
   input += synapse0x1c834b0();
   input += synapse0x1c834f0();
   input += synapse0x1c83530();
   input += synapse0x1c83570();
   input += synapse0x1c835b0();
   input += synapse0x1c835f0();
   input += synapse0x1c83630();
   input += synapse0x1c83670();
   input += synapse0x1c836b0();
   input += synapse0x1c836f0();
   input += synapse0x1c83730();
   input += synapse0x1c83770();
   input += synapse0x1c83200();
   input += synapse0x1c83240();
   input += synapse0x1c838c0();
   input += synapse0x1c83900();
   input += synapse0x1c83940();
   input += synapse0x1c83980();
   input += synapse0x1c839c0();
   input += synapse0x1c83a00();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c83070() {
   double input = input0x1c83070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c83a40() {
   double input = -0.0669424;
   input += synapse0x1c83d80();
   input += synapse0x1c83dc0();
   input += synapse0x1c83e00();
   input += synapse0x1c83e40();
   input += synapse0x1c83e80();
   input += synapse0x1c83ec0();
   input += synapse0x1c83f00();
   input += synapse0x1c83f40();
   input += synapse0x1c83f80();
   input += synapse0x1c83fc0();
   input += synapse0x1c84000();
   input += synapse0x1c84040();
   input += synapse0x1c84080();
   input += synapse0x1c840c0();
   input += synapse0x1c84100();
   input += synapse0x1c84140();
   input += synapse0x1c83bd0();
   input += synapse0x1c83c10();
   input += synapse0x1c84290();
   input += synapse0x1c842d0();
   input += synapse0x1c84310();
   input += synapse0x1c84350();
   input += synapse0x1c84390();
   input += synapse0x1c843d0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c83a40() {
   double input = input0x1c83a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c84410() {
   double input = 1.10581;
   input += synapse0x1c84750();
   input += synapse0x1c84790();
   input += synapse0x1c847d0();
   input += synapse0x1c84810();
   input += synapse0x1c84850();
   input += synapse0x1c84890();
   input += synapse0x1c848d0();
   input += synapse0x1c84910();
   input += synapse0x1c84950();
   input += synapse0x1c84990();
   input += synapse0x1c849d0();
   input += synapse0x1c84a10();
   input += synapse0x1c84a50();
   input += synapse0x1c84a90();
   input += synapse0x1c84ad0();
   input += synapse0x1c84b10();
   input += synapse0x1c845a0();
   input += synapse0x1c845e0();
   input += synapse0x1c84c60();
   input += synapse0x1c84ca0();
   input += synapse0x1c84ce0();
   input += synapse0x1c84d20();
   input += synapse0x1c84d60();
   input += synapse0x1c84da0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c84410() {
   double input = input0x1c84410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c84de0() {
   double input = 0.250386;
   input += synapse0x1c85120();
   input += synapse0x1c85160();
   input += synapse0x1c851a0();
   input += synapse0x1c851e0();
   input += synapse0x1c85220();
   input += synapse0x1c85260();
   input += synapse0x1c852a0();
   input += synapse0x1c852e0();
   input += synapse0x1c85320();
   input += synapse0x1c85360();
   input += synapse0x1c853a0();
   input += synapse0x1c853e0();
   input += synapse0x1c85420();
   input += synapse0x1c85460();
   input += synapse0x1c854a0();
   input += synapse0x1c854e0();
   input += synapse0x1c84f70();
   input += synapse0x1c84fb0();
   input += synapse0x1c85630();
   input += synapse0x1c85670();
   input += synapse0x1c856b0();
   input += synapse0x1c856f0();
   input += synapse0x1c85730();
   input += synapse0x1c85770();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c84de0() {
   double input = input0x1c84de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c857b0() {
   double input = 0.0146105;
   input += synapse0x1c85af0();
   input += synapse0x1c85b30();
   input += synapse0x1c85b70();
   input += synapse0x1c85bb0();
   input += synapse0x1c85bf0();
   input += synapse0x1c85c30();
   input += synapse0x1c85c70();
   input += synapse0x1c85cb0();
   input += synapse0x1c85cf0();
   input += synapse0x1c85d30();
   input += synapse0x1c85d70();
   input += synapse0x1c85db0();
   input += synapse0x1c85df0();
   input += synapse0x1c85e30();
   input += synapse0x1c85e70();
   input += synapse0x1c85eb0();
   input += synapse0x1c85940();
   input += synapse0x1c85980();
   input += synapse0x1c86000();
   input += synapse0x1c86040();
   input += synapse0x1c86080();
   input += synapse0x1c860c0();
   input += synapse0x1c86100();
   input += synapse0x1c86140();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c857b0() {
   double input = input0x1c857b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c86180() {
   double input = 0.524827;
   input += synapse0x1c864c0();
   input += synapse0x1c86500();
   input += synapse0x1c86540();
   input += synapse0x1c86580();
   input += synapse0x1c865c0();
   input += synapse0x1c86600();
   input += synapse0x1c86640();
   input += synapse0x1c86680();
   input += synapse0x1c866c0();
   input += synapse0x1c86700();
   input += synapse0x1c86740();
   input += synapse0x1c86780();
   input += synapse0x1c867c0();
   input += synapse0x1c86800();
   input += synapse0x1c86840();
   input += synapse0x1c86880();
   input += synapse0x1c86310();
   input += synapse0x1c86350();
   input += synapse0x1c869d0();
   input += synapse0x1c86a10();
   input += synapse0x1c86a50();
   input += synapse0x1c86a90();
   input += synapse0x1c86ad0();
   input += synapse0x1c86b10();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c86180() {
   double input = input0x1c86180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c86b50() {
   double input = 0.922779;
   input += synapse0x1c86e90();
   input += synapse0x1c7b460();
   input += synapse0x1c7b4a0();
   input += synapse0x1c7b4e0();
   input += synapse0x1c7b730();
   input += synapse0x1c7b770();
   input += synapse0x1c7b7b0();
   input += synapse0x1c7ba00();
   input += synapse0x1c7ba40();
   input += synapse0x1c7bc90();
   input += synapse0x1c7bcd0();
   input += synapse0x1c7bd10();
   input += synapse0x1c7bf60();
   input += synapse0x1c7bfa0();
   input += synapse0x1c7c1f0();
   input += synapse0x1c7c230();
   input += synapse0x1c86ce0();
   input += synapse0x1c86d20();
   input += synapse0x1c7c380();
   input += synapse0x1c7c890();
   input += synapse0x1c7c8d0();
   input += synapse0x1c7c910();
   input += synapse0x1c7cb60();
   input += synapse0x1c7cba0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c86b50() {
   double input = input0x1c86b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c7cbe0() {
   double input = 0.596146;
   input += synapse0x1c7c450();
   input += synapse0x1c7c490();
   input += synapse0x1c7c4d0();
   input += synapse0x1c7c510();
   input += synapse0x1c7ce90();
   input += synapse0x1c891e0();
   input += synapse0x1c89220();
   input += synapse0x1c89260();
   input += synapse0x1c892a0();
   input += synapse0x1c892e0();
   input += synapse0x1c89320();
   input += synapse0x1c89360();
   input += synapse0x1c893a0();
   input += synapse0x1c893e0();
   input += synapse0x1c89420();
   input += synapse0x1c89460();
   input += synapse0x1c7cd70();
   input += synapse0x1c7cdb0();
   input += synapse0x1c895b0();
   input += synapse0x1c895f0();
   input += synapse0x1c89630();
   input += synapse0x1c89670();
   input += synapse0x1c896b0();
   input += synapse0x1c896f0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c7cbe0() {
   double input = input0x1c7cbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c89730() {
   double input = 0.715183;
   input += synapse0x1c89a70();
   input += synapse0x1c89ab0();
   input += synapse0x1c89af0();
   input += synapse0x1c89b30();
   input += synapse0x1c89b70();
   input += synapse0x1c89bb0();
   input += synapse0x1c89bf0();
   input += synapse0x1c89c30();
   input += synapse0x1c89c70();
   input += synapse0x1c89cb0();
   input += synapse0x1c89cf0();
   input += synapse0x1c89d30();
   input += synapse0x1c89d70();
   input += synapse0x1c89db0();
   input += synapse0x1c89df0();
   input += synapse0x1c89e30();
   input += synapse0x1c898c0();
   input += synapse0x1c89900();
   input += synapse0x1c89f80();
   input += synapse0x1c89fc0();
   input += synapse0x1c8a000();
   input += synapse0x1c8a040();
   input += synapse0x1c8a080();
   input += synapse0x1c8a0c0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c89730() {
   double input = input0x1c89730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c8a100() {
   double input = -1.08311;
   input += synapse0x1c8a440();
   input += synapse0x1c8a480();
   input += synapse0x1c8a4c0();
   input += synapse0x1c8a500();
   input += synapse0x1c8a540();
   input += synapse0x1c8a580();
   input += synapse0x1c8a5c0();
   input += synapse0x1c8a600();
   input += synapse0x1c8a640();
   input += synapse0x1c8a680();
   input += synapse0x1c8a6c0();
   input += synapse0x1c8a700();
   input += synapse0x1c8a740();
   input += synapse0x1c8a780();
   input += synapse0x1c8a7c0();
   input += synapse0x1c8a800();
   input += synapse0x1c8a290();
   input += synapse0x1c8a2d0();
   input += synapse0x1c8a950();
   input += synapse0x1c8a990();
   input += synapse0x1c8a9d0();
   input += synapse0x1c8aa10();
   input += synapse0x1c8aa50();
   input += synapse0x1c8aa90();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c8a100() {
   double input = input0x1c8a100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c8aad0() {
   double input = 0.282244;
   input += synapse0x1c8ae10();
   input += synapse0x1c8ae50();
   input += synapse0x1c8ae90();
   input += synapse0x1c8aed0();
   input += synapse0x1c8af10();
   input += synapse0x1c8af50();
   input += synapse0x1c8af90();
   input += synapse0x1c8afd0();
   input += synapse0x1c8b010();
   input += synapse0x1c8b050();
   input += synapse0x1c8b090();
   input += synapse0x1c8b0d0();
   input += synapse0x1c8b110();
   input += synapse0x1c8b150();
   input += synapse0x1c8b190();
   input += synapse0x1c8b1d0();
   input += synapse0x1c8ac60();
   input += synapse0x1c8aca0();
   input += synapse0x1c8b320();
   input += synapse0x1c8b360();
   input += synapse0x1c8b3a0();
   input += synapse0x1c8b3e0();
   input += synapse0x1c8b420();
   input += synapse0x1c8b460();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c8aad0() {
   double input = input0x1c8aad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c8b4a0() {
   double input = 0.139172;
   input += synapse0x1c8b7e0();
   input += synapse0x1c8b820();
   input += synapse0x1c8b860();
   input += synapse0x1c8b8a0();
   input += synapse0x1c8b8e0();
   input += synapse0x1c8b920();
   input += synapse0x1c8b960();
   input += synapse0x1c8b9a0();
   input += synapse0x1c8b9e0();
   input += synapse0x1c8ba20();
   input += synapse0x1c8ba60();
   input += synapse0x1c8baa0();
   input += synapse0x1c8bae0();
   input += synapse0x1c8bb20();
   input += synapse0x1c8bb60();
   input += synapse0x1c8bba0();
   input += synapse0x1c8b630();
   input += synapse0x1c8b670();
   input += synapse0x1c8bcf0();
   input += synapse0x1c8bd30();
   input += synapse0x1c8bd70();
   input += synapse0x1c8bdb0();
   input += synapse0x1c8bdf0();
   input += synapse0x1c8be30();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c8b4a0() {
   double input = input0x1c8b4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c8be70() {
   double input = 0.637753;
   input += synapse0x1c8c1b0();
   input += synapse0x1c8c1f0();
   input += synapse0x1c8c230();
   input += synapse0x1c8c270();
   input += synapse0x1c8c2b0();
   input += synapse0x1c8c2f0();
   input += synapse0x1c8c330();
   input += synapse0x1c8c370();
   input += synapse0x1c8c3b0();
   input += synapse0x1c8c3f0();
   input += synapse0x1c8c430();
   input += synapse0x1c8c470();
   input += synapse0x1c8c4b0();
   input += synapse0x1c8c4f0();
   input += synapse0x1c8c530();
   input += synapse0x1c8c570();
   input += synapse0x1c8c000();
   input += synapse0x1c8c040();
   input += synapse0x1c8c6c0();
   input += synapse0x1c8c700();
   input += synapse0x1c8c740();
   input += synapse0x1c8c780();
   input += synapse0x1c8c7c0();
   input += synapse0x1c8c800();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c8be70() {
   double input = input0x1c8be70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c8c840() {
   double input = 1.34086;
   input += synapse0x1c8cb80();
   input += synapse0x1c8cbc0();
   input += synapse0x1c8cc00();
   input += synapse0x1c8cc40();
   input += synapse0x1c8cc80();
   input += synapse0x1c8ccc0();
   input += synapse0x1c8cd00();
   input += synapse0x1c8cd40();
   input += synapse0x1c8cd80();
   input += synapse0x1c8cdc0();
   input += synapse0x1c8ce00();
   input += synapse0x1c8ce40();
   input += synapse0x1c8ce80();
   input += synapse0x1c8cec0();
   input += synapse0x1c8cf00();
   input += synapse0x1c8cf40();
   input += synapse0x1c8c9d0();
   input += synapse0x1c8ca10();
   input += synapse0x1c8d090();
   input += synapse0x1c8d0d0();
   input += synapse0x1c8d110();
   input += synapse0x1c8d150();
   input += synapse0x1c8d190();
   input += synapse0x1c8d1d0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c8c840() {
   double input = input0x1c8c840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c8d210() {
   double input = -0.628612;
   input += synapse0x1c8d550();
   input += synapse0x1c8d590();
   input += synapse0x1c8d5d0();
   input += synapse0x1c8d610();
   input += synapse0x1c8d650();
   input += synapse0x1c8d690();
   input += synapse0x1c8d6d0();
   input += synapse0x1c8d710();
   input += synapse0x1c8d750();
   input += synapse0x1c8d790();
   input += synapse0x1c8d7d0();
   input += synapse0x1c8d810();
   input += synapse0x1c8d850();
   input += synapse0x1c8d890();
   input += synapse0x1c8d8d0();
   input += synapse0x1c8d910();
   input += synapse0x1c8d3a0();
   input += synapse0x1c8d3e0();
   input += synapse0x1c8da60();
   input += synapse0x1c8daa0();
   input += synapse0x1c8dae0();
   input += synapse0x1c8db20();
   input += synapse0x1c8db60();
   input += synapse0x1c8dba0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c8d210() {
   double input = input0x1c8d210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c8dbe0() {
   double input = 0.011947;
   input += synapse0x1c76650();
   input += synapse0x1c76690();
   input += synapse0x1c766d0();
   input += synapse0x1c76710();
   input += synapse0x1c76750();
   input += synapse0x1c76790();
   input += synapse0x1c767d0();
   input += synapse0x1c76810();
   input += synapse0x1c8e330();
   input += synapse0x1c8e370();
   input += synapse0x1c8e3b0();
   input += synapse0x1c8e3f0();
   input += synapse0x1c8e430();
   input += synapse0x1c8e470();
   input += synapse0x1c8e4b0();
   input += synapse0x1c8e4f0();
   input += synapse0x1c8dd70();
   input += synapse0x1c8ddb0();
   input += synapse0x1c8e640();
   input += synapse0x1c8e680();
   input += synapse0x1c8e6c0();
   input += synapse0x1c8e700();
   input += synapse0x1c8e740();
   input += synapse0x1c8e780();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c8dbe0() {
   double input = input0x1c8dbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c8e7c0() {
   double input = -0.945995;
   input += synapse0x1c8eb00();
   input += synapse0x1c8eb40();
   input += synapse0x1c8eb80();
   input += synapse0x1c8ebc0();
   input += synapse0x1c8ec00();
   input += synapse0x1c8ec40();
   input += synapse0x1c8ec80();
   input += synapse0x1c8ecc0();
   input += synapse0x1c8ed00();
   input += synapse0x1c8ed40();
   input += synapse0x1c8ed80();
   input += synapse0x1c8edc0();
   input += synapse0x1c8ee00();
   input += synapse0x1c8ee40();
   input += synapse0x1c8ee80();
   input += synapse0x1c8eec0();
   input += synapse0x1c8e950();
   input += synapse0x1c8e990();
   input += synapse0x1c8f010();
   input += synapse0x1c8f050();
   input += synapse0x1c8f090();
   input += synapse0x1c8f0d0();
   input += synapse0x1c8f110();
   input += synapse0x1c8f150();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c8e7c0() {
   double input = input0x1c8e7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c8f190() {
   double input = -1.65768;
   input += synapse0x1c8f4d0();
   input += synapse0x1c8f510();
   input += synapse0x1c8f550();
   input += synapse0x1c8f590();
   input += synapse0x1c8f5d0();
   input += synapse0x1c8f610();
   input += synapse0x1c8f650();
   input += synapse0x1c8f690();
   input += synapse0x1c8f6d0();
   input += synapse0x1c8f710();
   input += synapse0x1c8f750();
   input += synapse0x1c8f790();
   input += synapse0x1c8f7d0();
   input += synapse0x1c8f810();
   input += synapse0x1c8f850();
   input += synapse0x1c8f890();
   input += synapse0x1c8f320();
   input += synapse0x1c8f360();
   input += synapse0x1c7fe90();
   input += synapse0x1c7fed0();
   input += synapse0x1c7ff10();
   input += synapse0x1c7ff50();
   input += synapse0x1c7ff90();
   input += synapse0x1c7ffd0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c8f190() {
   double input = input0x1c8f190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c80010() {
   double input = -0.504091;
   input += synapse0x1c80350();
   input += synapse0x1c80390();
   input += synapse0x1c803d0();
   input += synapse0x1c80410();
   input += synapse0x1c80450();
   input += synapse0x1c80490();
   input += synapse0x1c804d0();
   input += synapse0x1c80510();
   input += synapse0x1c80550();
   input += synapse0x1c80590();
   input += synapse0x1c805d0();
   input += synapse0x1c80610();
   input += synapse0x1c80650();
   input += synapse0x1c80690();
   input += synapse0x1c806d0();
   input += synapse0x1c80710();
   input += synapse0x1c801a0();
   input += synapse0x1c801e0();
   input += synapse0x1c80860();
   input += synapse0x1c808a0();
   input += synapse0x1c808e0();
   input += synapse0x1c80920();
   input += synapse0x1c80960();
   input += synapse0x1c809a0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c80010() {
   double input = input0x1c80010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c809e0() {
   double input = 0.591499;
   input += synapse0x1c80d20();
   input += synapse0x1c80d60();
   input += synapse0x1c80da0();
   input += synapse0x1c80de0();
   input += synapse0x1c80e20();
   input += synapse0x1c80e60();
   input += synapse0x1c80ea0();
   input += synapse0x1c80ee0();
   input += synapse0x1c80f20();
   input += synapse0x1c80f60();
   input += synapse0x1c80fa0();
   input += synapse0x1c80fe0();
   input += synapse0x1c81020();
   input += synapse0x1c81060();
   input += synapse0x1c810a0();
   input += synapse0x1c810e0();
   input += synapse0x1c80b70();
   input += synapse0x1c80bb0();
   input += synapse0x1c81230();
   input += synapse0x1c81270();
   input += synapse0x1c812b0();
   input += synapse0x1c812f0();
   input += synapse0x1c81330();
   input += synapse0x1c81370();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c809e0() {
   double input = input0x1c809e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c813b0() {
   double input = 1.92335;
   input += synapse0x1c816f0();
   input += synapse0x1c81730();
   input += synapse0x1c81770();
   input += synapse0x1c817b0();
   input += synapse0x1c817f0();
   input += synapse0x1c81830();
   input += synapse0x1c81870();
   input += synapse0x1c818b0();
   input += synapse0x1c818f0();
   input += synapse0x1c81930();
   input += synapse0x1c81970();
   input += synapse0x1c819b0();
   input += synapse0x1c819f0();
   input += synapse0x1c81a30();
   input += synapse0x1c81a70();
   input += synapse0x1c81ab0();
   input += synapse0x1c81540();
   input += synapse0x1c81580();
   input += synapse0x1c81c00();
   input += synapse0x1c81c40();
   input += synapse0x1c81c80();
   input += synapse0x1c81cc0();
   input += synapse0x1c81d00();
   input += synapse0x1c81d40();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c813b0() {
   double input = input0x1c813b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c939f0() {
   double input = -0.136566;
   input += synapse0x1c93c10();
   input += synapse0x1c93c50();
   input += synapse0x1c93c90();
   input += synapse0x1c93cd0();
   input += synapse0x1c93d10();
   input += synapse0x1c93d50();
   input += synapse0x1c93d90();
   input += synapse0x1c93dd0();
   input += synapse0x1c93e10();
   input += synapse0x1c93e50();
   input += synapse0x1c93e90();
   input += synapse0x1c93ed0();
   input += synapse0x1c93f10();
   input += synapse0x1c93f50();
   input += synapse0x1c93f90();
   input += synapse0x1c93fd0();
   input += synapse0x1c81d80();
   input += synapse0x1c81dc0();
   input += synapse0x1c94120();
   input += synapse0x1c94160();
   input += synapse0x1c941a0();
   input += synapse0x1c941e0();
   input += synapse0x1c94220();
   input += synapse0x1c94260();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c939f0() {
   double input = input0x1c939f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c942a0() {
   double input = 2.52075;
   input += synapse0x1c945e0();
   input += synapse0x1c94620();
   input += synapse0x1c94660();
   input += synapse0x1c946a0();
   input += synapse0x1c946e0();
   input += synapse0x1c94720();
   input += synapse0x1c94760();
   input += synapse0x1c947a0();
   input += synapse0x1c947e0();
   input += synapse0x1c94820();
   input += synapse0x1c94860();
   input += synapse0x1c948a0();
   input += synapse0x1c948e0();
   input += synapse0x1c94920();
   input += synapse0x1c94960();
   input += synapse0x1c949a0();
   input += synapse0x1c94430();
   input += synapse0x1c94470();
   input += synapse0x1c94af0();
   input += synapse0x1c94b30();
   input += synapse0x1c94b70();
   input += synapse0x1c94bb0();
   input += synapse0x1c94bf0();
   input += synapse0x1c94c30();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c942a0() {
   double input = input0x1c942a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c94c70() {
   double input = -0.727691;
   input += synapse0x1c94fb0();
   input += synapse0x1c94ff0();
   input += synapse0x1c95030();
   input += synapse0x1c95070();
   input += synapse0x1c950b0();
   input += synapse0x1c950f0();
   input += synapse0x1c95130();
   input += synapse0x1c95170();
   input += synapse0x1c951b0();
   input += synapse0x1c951f0();
   input += synapse0x1c95230();
   input += synapse0x1c95270();
   input += synapse0x1c952b0();
   input += synapse0x1c952f0();
   input += synapse0x1c95330();
   input += synapse0x1c95370();
   input += synapse0x1c94e00();
   input += synapse0x1c94e40();
   input += synapse0x1c954c0();
   input += synapse0x1c95500();
   input += synapse0x1c95540();
   input += synapse0x1c95580();
   input += synapse0x1c955c0();
   input += synapse0x1c95600();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c94c70() {
   double input = input0x1c94c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c95640() {
   double input = 5.00057;
   input += synapse0x1c95980();
   input += synapse0x1c959c0();
   input += synapse0x1c95a00();
   input += synapse0x1c95a40();
   input += synapse0x1c95a80();
   input += synapse0x1c95ac0();
   input += synapse0x1c95b00();
   input += synapse0x1c95b40();
   input += synapse0x1c95b80();
   input += synapse0x1c95bc0();
   input += synapse0x1c95c00();
   input += synapse0x1c95c40();
   input += synapse0x1c95c80();
   input += synapse0x1c95cc0();
   input += synapse0x1c95d00();
   input += synapse0x1c95d40();
   input += synapse0x1c957d0();
   input += synapse0x1c95810();
   input += synapse0x1c95e90();
   input += synapse0x1c95ed0();
   input += synapse0x1c95f10();
   input += synapse0x1c95f50();
   input += synapse0x1c95f90();
   input += synapse0x1c95fd0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c95640() {
   double input = input0x1c95640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c9c840() {
   double input = 1.12948;
   input += synapse0x1c72570();
   input += synapse0x1c725b0();
   input += synapse0x1c73a80();
   input += synapse0x1c73ac0();
   input += synapse0x1c74450();
   input += synapse0x1c74490();
   input += synapse0x1c75220();
   input += synapse0x1c75260();
   input += synapse0x1c75bf0();
   input += synapse0x1c75c30();
   input += synapse0x1c765c0();
   input += synapse0x1c76600();
   input += synapse0x1c770a0();
   input += synapse0x1c770e0();
   input += synapse0x1c77a70();
   input += synapse0x1c77ab0();
   input += synapse0x1c74b50();
   input += synapse0x1c74b90();
   input += synapse0x1c79620();
   input += synapse0x1c79660();
   input += synapse0x1c79ff0();
   input += synapse0x1c7a030();
   input += synapse0x1c7a9c0();
   input += synapse0x1c7aa00();
   input += synapse0x1c7b390();
   input += synapse0x1c7b3d0();
   input += synapse0x1c6f500();
   input += synapse0x1c6f540();
   input += synapse0x1c7d480();
   input += synapse0x1c7d4c0();
   input += synapse0x1c7de50();
   input += synapse0x1c7de90();
   input += synapse0x1c7e820();
   input += synapse0x1c7e860();
   input += synapse0x1c7f1f0();
   input += synapse0x1c7f230();
   input += synapse0x1c7fbc0();
   input += synapse0x1c7fc00();
   input += synapse0x1c78710();
   input += synapse0x1c78750();
   input += synapse0x1c81fc0();
   input += synapse0x1c82000();
   input += synapse0x1c82950();
   input += synapse0x1c82990();
   input += synapse0x1c83320();
   input += synapse0x1c83360();
   input += synapse0x1c83cf0();
   input += synapse0x1c83d30();
   input += synapse0x1c846c0();
   input += synapse0x1c84700();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c9c840() {
   double input = input0x1c9c840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c9cbe0() {
   double input = 0.0457113;
   input += synapse0x1c86e00();
   input += synapse0x1c86e40();
   input += synapse0x1c7c3c0();
   input += synapse0x1c7c400();
   input += synapse0x1c899e0();
   input += synapse0x1c89a20();
   input += synapse0x1c8a3b0();
   input += synapse0x1c8a3f0();
   input += synapse0x1c8ad80();
   input += synapse0x1c8adc0();
   input += synapse0x1c8b750();
   input += synapse0x1c8b790();
   input += synapse0x1c8c120();
   input += synapse0x1c8c160();
   input += synapse0x1c8caf0();
   input += synapse0x1c8cb30();
   input += synapse0x1c8d4c0();
   input += synapse0x1c8d500();
   input += synapse0x1c8de90();
   input += synapse0x1c8ded0();
   input += synapse0x1c8ea70();
   input += synapse0x1c8eab0();
   input += synapse0x1c8f440();
   input += synapse0x1c8f480();
   input += synapse0x1c802c0();
   input += synapse0x1c80300();
   input += synapse0x1c80c90();
   input += synapse0x1c80cd0();
   input += synapse0x1c81660();
   input += synapse0x1c816a0();
   input += synapse0x1c93b80();
   input += synapse0x1c93bc0();
   input += synapse0x1c94550();
   input += synapse0x1c94590();
   input += synapse0x1c94f20();
   input += synapse0x1c94f60();
   input += synapse0x1c958f0();
   input += synapse0x1c95930();
   input += synapse0x1c717e0();
   input += synapse0x1c71820();
   input += synapse0x1c85090();
   input += synapse0x1c850d0();
   input += synapse0x1c96010();
   input += synapse0x1c96050();
   input += synapse0x1c96090();
   input += synapse0x1c960d0();
   input += synapse0x1c9cf80();
   input += synapse0x1c9cfc0();
   input += synapse0x1c9d000();
   input += synapse0x1c9d040();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c9cbe0() {
   double input = input0x1c9cbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c9d080() {
   double input = -0.296753;
   input += synapse0x1c9d3c0();
   input += synapse0x1c9d400();
   input += synapse0x1c9d440();
   input += synapse0x1c9d480();
   input += synapse0x1c9d4c0();
   input += synapse0x1c9d500();
   input += synapse0x1c9d540();
   input += synapse0x1c9d580();
   input += synapse0x1c9d5c0();
   input += synapse0x1c9d600();
   input += synapse0x1c9d640();
   input += synapse0x1c9d680();
   input += synapse0x1c9d6c0();
   input += synapse0x1c9d700();
   input += synapse0x1c9d740();
   input += synapse0x1c9d780();
   input += synapse0x1c9d210();
   input += synapse0x1c9d250();
   input += synapse0x1c9d8d0();
   input += synapse0x1c9d910();
   input += synapse0x1c9d950();
   input += synapse0x1c9d990();
   input += synapse0x1c9d9d0();
   input += synapse0x1c9da10();
   input += synapse0x1c9da50();
   input += synapse0x1c9da90();
   input += synapse0x1c9dad0();
   input += synapse0x1c9db10();
   input += synapse0x1c9db50();
   input += synapse0x1c9db90();
   input += synapse0x1c9dbd0();
   input += synapse0x1c9dc10();
   input += synapse0x1c9d7c0();
   input += synapse0x1c9d800();
   input += synapse0x1c9d840();
   input += synapse0x1c9d880();
   input += synapse0x1c9de60();
   input += synapse0x1c9dea0();
   input += synapse0x1c9dee0();
   input += synapse0x1c9df20();
   input += synapse0x1c9df60();
   input += synapse0x1c9dfa0();
   input += synapse0x1c9dfe0();
   input += synapse0x1c9e020();
   input += synapse0x1c9e060();
   input += synapse0x1c9e0a0();
   input += synapse0x1c9e0e0();
   input += synapse0x1c9e120();
   input += synapse0x1c9e160();
   input += synapse0x1c9e1a0();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c9d080() {
   double input = input0x1c9d080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c9e1e0() {
   double input = -0.320656;
   input += synapse0x1c9e520();
   input += synapse0x1c9e560();
   input += synapse0x1c9e5a0();
   input += synapse0x1c9e5e0();
   input += synapse0x1c9e620();
   input += synapse0x1c9e660();
   input += synapse0x1c9e6a0();
   input += synapse0x1c9e6e0();
   input += synapse0x1c9e720();
   input += synapse0x1c9e760();
   input += synapse0x1c9e7a0();
   input += synapse0x1c9e7e0();
   input += synapse0x1c9e820();
   input += synapse0x1c9e860();
   input += synapse0x1c9e8a0();
   input += synapse0x1c9e8e0();
   input += synapse0x1c9e370();
   input += synapse0x1c9e3b0();
   input += synapse0x1c9ea30();
   input += synapse0x1c9ea70();
   input += synapse0x1c9eab0();
   input += synapse0x1c9eaf0();
   input += synapse0x1c9eb30();
   input += synapse0x1c9eb70();
   input += synapse0x1c9ebb0();
   input += synapse0x1c9ebf0();
   input += synapse0x1c9ec30();
   input += synapse0x1c9ec70();
   input += synapse0x1c9ecb0();
   input += synapse0x1c9ecf0();
   input += synapse0x1c9ed30();
   input += synapse0x1c9ed70();
   input += synapse0x1c9e920();
   input += synapse0x1c9e960();
   input += synapse0x1c9e9a0();
   input += synapse0x1c9e9e0();
   input += synapse0x1c9efc0();
   input += synapse0x1c9f000();
   input += synapse0x1c9f040();
   input += synapse0x1c9f080();
   input += synapse0x1c9f0c0();
   input += synapse0x1c9f100();
   input += synapse0x1c9f140();
   input += synapse0x1c9f180();
   input += synapse0x1c9f1c0();
   input += synapse0x1c9f200();
   input += synapse0x1c9f240();
   input += synapse0x1c9f280();
   input += synapse0x1c9f2c0();
   input += synapse0x1c9f300();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c9e1e0() {
   double input = input0x1c9e1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1c9f340() {
   double input = -1.37919;
   input += synapse0x1c9f680();
   input += synapse0x1c9f6c0();
   input += synapse0x1c9f700();
   input += synapse0x1c9f740();
   input += synapse0x1c9f780();
   input += synapse0x1c9f7c0();
   input += synapse0x1c9f800();
   input += synapse0x1c9f840();
   input += synapse0x1c9f880();
   input += synapse0x1c9f8c0();
   input += synapse0x1c9f900();
   input += synapse0x1c9f940();
   input += synapse0x1c9f980();
   input += synapse0x1c9f9c0();
   input += synapse0x1c9fa00();
   input += synapse0x1c9fa40();
   input += synapse0x1c9f4d0();
   input += synapse0x1c9f510();
   input += synapse0x1c9fb90();
   input += synapse0x1c9fbd0();
   input += synapse0x1c9fc10();
   input += synapse0x1c9fc50();
   input += synapse0x1c9fc90();
   input += synapse0x1c9fcd0();
   input += synapse0x1c9fd10();
   input += synapse0x1c9fd50();
   input += synapse0x1c9fd90();
   input += synapse0x1c9fdd0();
   input += synapse0x1c9fe10();
   input += synapse0x1c9fe50();
   input += synapse0x1c9fe90();
   input += synapse0x1c9fed0();
   input += synapse0x1c9fa80();
   input += synapse0x1c9fac0();
   input += synapse0x1c9fb00();
   input += synapse0x1c9fb40();
   input += synapse0x1ca0120();
   input += synapse0x1ca0160();
   input += synapse0x1ca01a0();
   input += synapse0x1ca01e0();
   input += synapse0x1ca0220();
   input += synapse0x1ca0260();
   input += synapse0x1ca02a0();
   input += synapse0x1ca02e0();
   input += synapse0x1ca0320();
   input += synapse0x1ca0360();
   input += synapse0x1ca03a0();
   input += synapse0x1ca03e0();
   input += synapse0x1ca0420();
   input += synapse0x1ca0460();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1c9f340() {
   double input = input0x1c9f340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLsR::input0x1ca04a0() {
   double input = 3.49842;
   input += synapse0x1c71580();
   input += synapse0x1ca06c0();
   input += synapse0x1ca0700();
   input += synapse0x1ca0740();
   input += synapse0x1ca0780();
   return input;
}

double NNfunction_sb_sLsR::neuron0x1ca04a0() {
   double input = input0x1ca04a0();
   return (input * 1)+0;
}

double NNfunction_sb_sLsR::synapse0x1a2c3d0() {
   return (neuron0x1c6c560()*0.244374);
}

double NNfunction_sb_sLsR::synapse0x1c6c420() {
   return (neuron0x1c6c8a0()*-0.310416);
}

double NNfunction_sb_sLsR::synapse0x1c6c460() {
   return (neuron0x1c6cbe0()*-0.269496);
}

double NNfunction_sb_sLsR::synapse0x1c71870() {
   return (neuron0x1c6cf20()*0.129449);
}

double NNfunction_sb_sLsR::synapse0x1c718b0() {
   return (neuron0x1c6d260()*-0.231116);
}

double NNfunction_sb_sLsR::synapse0x1c718f0() {
   return (neuron0x1c6d5a0()*-0.125836);
}

double NNfunction_sb_sLsR::synapse0x1c71930() {
   return (neuron0x1c6d8e0()*0.0188026);
}

double NNfunction_sb_sLsR::synapse0x1c71970() {
   return (neuron0x1c6dc20()*0.189781);
}

double NNfunction_sb_sLsR::synapse0x1c719b0() {
   return (neuron0x1c6df60()*-0.157286);
}

double NNfunction_sb_sLsR::synapse0x1c719f0() {
   return (neuron0x1c6e2a0()*0.0476117);
}

double NNfunction_sb_sLsR::synapse0x1c71a30() {
   return (neuron0x1c6e5e0()*0.0053054);
}

double NNfunction_sb_sLsR::synapse0x1c71a70() {
   return (neuron0x1c6e920()*-0.106687);
}

double NNfunction_sb_sLsR::synapse0x1c71ab0() {
   return (neuron0x1c6ec60()*-0.196378);
}

double NNfunction_sb_sLsR::synapse0x1c71af0() {
   return (neuron0x1c6efa0()*-0.104959);
}

double NNfunction_sb_sLsR::synapse0x1c71b30() {
   return (neuron0x1c6f2e0()*-0.585796);
}

double NNfunction_sb_sLsR::synapse0x1c71b70() {
   return (neuron0x1c6f620()*-0.322122);
}

double NNfunction_sb_sLsR::synapse0x1c6c390() {
   return (neuron0x1c6f960()*-0.507207);
}

double NNfunction_sb_sLsR::synapse0x1c6c3d0() {
   return (neuron0x1c6fec0()*-0.0916451);
}

double NNfunction_sb_sLsR::synapse0x1a1dc70() {
   return (neuron0x1c700e0()*0.160361);
}

double NNfunction_sb_sLsR::synapse0x1a1dcb0() {
   return (neuron0x1c70420()*-0.0127169);
}

double NNfunction_sb_sLsR::synapse0x1c71dd0() {
   return (neuron0x1c70760()*0.0240819);
}

double NNfunction_sb_sLsR::synapse0x1c71e10() {
   return (neuron0x1c70aa0()*0.197275);
}

double NNfunction_sb_sLsR::synapse0x1c71e50() {
   return (neuron0x1c70de0()*-0.056401);
}

double NNfunction_sb_sLsR::synapse0x1c71e90() {
   return (neuron0x1c71120()*0.0377312);
}

double NNfunction_sb_sLsR::synapse0x1c72210() {
   return (neuron0x1c6c560()*0.00685389);
}

double NNfunction_sb_sLsR::synapse0x1c72250() {
   return (neuron0x1c6c8a0()*0.00117509);
}

double NNfunction_sb_sLsR::synapse0x1c72290() {
   return (neuron0x1c6cbe0()*0.0380438);
}

double NNfunction_sb_sLsR::synapse0x1c722d0() {
   return (neuron0x1c6cf20()*0.226933);
}

double NNfunction_sb_sLsR::synapse0x1c72310() {
   return (neuron0x1c6d260()*-9.79432e-05);
}

double NNfunction_sb_sLsR::synapse0x1c72350() {
   return (neuron0x1c6d5a0()*-0.0225293);
}

double NNfunction_sb_sLsR::synapse0x1c72390() {
   return (neuron0x1c6d8e0()*-0.0282593);
}

double NNfunction_sb_sLsR::synapse0x1c723d0() {
   return (neuron0x1c6dc20()*0.0223696);
}

double NNfunction_sb_sLsR::synapse0x1c72410() {
   return (neuron0x1c6df60()*-0.0251248);
}

double NNfunction_sb_sLsR::synapse0x1c71cc0() {
   return (neuron0x1c6e2a0()*-0.0284707);
}

double NNfunction_sb_sLsR::synapse0x1c71d00() {
   return (neuron0x1c6e5e0()*-0.0206189);
}

double NNfunction_sb_sLsR::synapse0x1c71d40() {
   return (neuron0x1c6e920()*-0.0179953);
}

double NNfunction_sb_sLsR::synapse0x1c71d80() {
   return (neuron0x1c6ec60()*-1.61001);
}

double NNfunction_sb_sLsR::synapse0x1c72660() {
   return (neuron0x1c6efa0()*-0.0293355);
}

double NNfunction_sb_sLsR::synapse0x1c726a0() {
   return (neuron0x1c6f2e0()*0.0248197);
}

double NNfunction_sb_sLsR::synapse0x1c726e0() {
   return (neuron0x1c6f620()*-0.058413);
}

double NNfunction_sb_sLsR::synapse0x1c72060() {
   return (neuron0x1c6f960()*0.0174008);
}

double NNfunction_sb_sLsR::synapse0x1c720a0() {
   return (neuron0x1c6fec0()*-0.029014);
}

double NNfunction_sb_sLsR::synapse0x1c72830() {
   return (neuron0x1c700e0()*0.820206);
}

double NNfunction_sb_sLsR::synapse0x1c72870() {
   return (neuron0x1c70420()*0.000562179);
}

double NNfunction_sb_sLsR::synapse0x1c728b0() {
   return (neuron0x1c70760()*0.0215424);
}

double NNfunction_sb_sLsR::synapse0x1c728f0() {
   return (neuron0x1c70aa0()*-0.00011118);
}

double NNfunction_sb_sLsR::synapse0x1c72930() {
   return (neuron0x1c70de0()*0.0281189);
}

double NNfunction_sb_sLsR::synapse0x1c72970() {
   return (neuron0x1c71120()*-0.00138403);
}

double NNfunction_sb_sLsR::synapse0x1c72cf0() {
   return (neuron0x1c6c560()*-0.0817907);
}

double NNfunction_sb_sLsR::synapse0x1c72d30() {
   return (neuron0x1c6c8a0()*0.0229195);
}

double NNfunction_sb_sLsR::synapse0x1c72d70() {
   return (neuron0x1c6cbe0()*0.445978);
}

double NNfunction_sb_sLsR::synapse0x1c72db0() {
   return (neuron0x1c6cf20()*1.25133);
}

double NNfunction_sb_sLsR::synapse0x1c72df0() {
   return (neuron0x1c6d260()*-0.200497);
}

double NNfunction_sb_sLsR::synapse0x1c72e30() {
   return (neuron0x1c6d5a0()*-0.253007);
}

double NNfunction_sb_sLsR::synapse0x1c72e70() {
   return (neuron0x1c6d8e0()*-0.00706257);
}

double NNfunction_sb_sLsR::synapse0x1c72eb0() {
   return (neuron0x1c6dc20()*-0.0447306);
}

double NNfunction_sb_sLsR::synapse0x1c72ef0() {
   return (neuron0x1c6df60()*0.0542589);
}

double NNfunction_sb_sLsR::synapse0x1c72f30() {
   return (neuron0x1c6e2a0()*0.34877);
}

double NNfunction_sb_sLsR::synapse0x1c72f70() {
   return (neuron0x1c6e5e0()*-0.0590205);
}

double NNfunction_sb_sLsR::synapse0x1c72fb0() {
   return (neuron0x1c6e920()*0.267524);
}

double NNfunction_sb_sLsR::synapse0x1c72ff0() {
   return (neuron0x1c6ec60()*-0.243976);
}

double NNfunction_sb_sLsR::synapse0x1c73030() {
   return (neuron0x1c6efa0()*-0.224945);
}

double NNfunction_sb_sLsR::synapse0x1c73070() {
   return (neuron0x1c6f2e0()*-0.181448);
}

double NNfunction_sb_sLsR::synapse0x1c730b0() {
   return (neuron0x1c6f620()*0.291364);
}

double NNfunction_sb_sLsR::synapse0x1c72b40() {
   return (neuron0x1c6f960()*-0.334567);
}

double NNfunction_sb_sLsR::synapse0x1c72b80() {
   return (neuron0x1c6fec0()*0.182184);
}

double NNfunction_sb_sLsR::synapse0x1a2bac0() {
   return (neuron0x1c700e0()*-0.706434);
}

double NNfunction_sb_sLsR::synapse0x1a2bb00() {
   return (neuron0x1c70420()*0.133222);
}

double NNfunction_sb_sLsR::synapse0x1c5b5f0() {
   return (neuron0x1c70760()*-0.0905022);
}

double NNfunction_sb_sLsR::synapse0x1c5b630() {
   return (neuron0x1c70aa0()*-0.300315);
}

double NNfunction_sb_sLsR::synapse0x1c5b670() {
   return (neuron0x1c70de0()*-0.188692);
}

double NNfunction_sb_sLsR::synapse0x1c6c4a0() {
   return (neuron0x1c71120()*-0.0458959);
}

double NNfunction_sb_sLsR::synapse0x1c72600() {
   return (neuron0x1c6c560()*-0.115536);
}

double NNfunction_sb_sLsR::synapse0x1c6c4e0() {
   return (neuron0x1c6c8a0()*0.302784);
}

double NNfunction_sb_sLsR::synapse0x1c6c520() {
   return (neuron0x1c6cbe0()*-0.201054);
}

double NNfunction_sb_sLsR::synapse0x1c73200() {
   return (neuron0x1c6cf20()*0.689253);
}

double NNfunction_sb_sLsR::synapse0x1c73240() {
   return (neuron0x1c6d260()*0.243686);
}

double NNfunction_sb_sLsR::synapse0x1c73280() {
   return (neuron0x1c6d5a0()*-0.174706);
}

double NNfunction_sb_sLsR::synapse0x1c732c0() {
   return (neuron0x1c6d8e0()*0.0970095);
}

double NNfunction_sb_sLsR::synapse0x1c73300() {
   return (neuron0x1c6dc20()*0.233498);
}

double NNfunction_sb_sLsR::synapse0x1c73340() {
   return (neuron0x1c6df60()*0.089659);
}

double NNfunction_sb_sLsR::synapse0x1c73380() {
   return (neuron0x1c6e2a0()*0.0632269);
}

double NNfunction_sb_sLsR::synapse0x1c733c0() {
   return (neuron0x1c6e5e0()*-0.669749);
}

double NNfunction_sb_sLsR::synapse0x1c73400() {
   return (neuron0x1c6e920()*0.331665);
}

double NNfunction_sb_sLsR::synapse0x1c73440() {
   return (neuron0x1c6ec60()*-0.546517);
}

double NNfunction_sb_sLsR::synapse0x1c73480() {
   return (neuron0x1c6efa0()*0.386245);
}

double NNfunction_sb_sLsR::synapse0x1c734c0() {
   return (neuron0x1c6f2e0()*0.636549);
}

double NNfunction_sb_sLsR::synapse0x1c73500() {
   return (neuron0x1c6f620()*0.374642);
}

double NNfunction_sb_sLsR::synapse0x1c72450() {
   return (neuron0x1c6f960()*0.0226451);
}

double NNfunction_sb_sLsR::synapse0x1c72490() {
   return (neuron0x1c6fec0()*0.279793);
}

double NNfunction_sb_sLsR::synapse0x1c73650() {
   return (neuron0x1c700e0()*-0.265108);
}

double NNfunction_sb_sLsR::synapse0x1c73690() {
   return (neuron0x1c70420()*0.0496234);
}

double NNfunction_sb_sLsR::synapse0x1c736d0() {
   return (neuron0x1c70760()*0.545513);
}

double NNfunction_sb_sLsR::synapse0x1c73710() {
   return (neuron0x1c70aa0()*0.213725);
}

double NNfunction_sb_sLsR::synapse0x1c73750() {
   return (neuron0x1c70de0()*0.201374);
}

double NNfunction_sb_sLsR::synapse0x1c73790() {
   return (neuron0x1c71120()*0.170896);
}

double NNfunction_sb_sLsR::synapse0x1c73b10() {
   return (neuron0x1c6c560()*-0.232006);
}

double NNfunction_sb_sLsR::synapse0x1c73b50() {
   return (neuron0x1c6c8a0()*0.122357);
}

double NNfunction_sb_sLsR::synapse0x1c73b90() {
   return (neuron0x1c6cbe0()*0.210712);
}

double NNfunction_sb_sLsR::synapse0x1c73bd0() {
   return (neuron0x1c6cf20()*-0.68254);
}

double NNfunction_sb_sLsR::synapse0x1c73c10() {
   return (neuron0x1c6d260()*0.538501);
}

double NNfunction_sb_sLsR::synapse0x1c73c50() {
   return (neuron0x1c6d5a0()*0.0716531);
}

double NNfunction_sb_sLsR::synapse0x1c73c90() {
   return (neuron0x1c6d8e0()*-0.0456393);
}

double NNfunction_sb_sLsR::synapse0x1c73cd0() {
   return (neuron0x1c6dc20()*-0.299503);
}

double NNfunction_sb_sLsR::synapse0x1c73d10() {
   return (neuron0x1c6df60()*-0.0129831);
}

double NNfunction_sb_sLsR::synapse0x1c73d50() {
   return (neuron0x1c6e2a0()*-0.023448);
}

double NNfunction_sb_sLsR::synapse0x1c73d90() {
   return (neuron0x1c6e5e0()*0.22045);
}

double NNfunction_sb_sLsR::synapse0x1c73dd0() {
   return (neuron0x1c6e920()*0.220263);
}

double NNfunction_sb_sLsR::synapse0x1c73e10() {
   return (neuron0x1c6ec60()*-0.387805);
}

double NNfunction_sb_sLsR::synapse0x1c73e50() {
   return (neuron0x1c6efa0()*-0.0435237);
}

double NNfunction_sb_sLsR::synapse0x1c73e90() {
   return (neuron0x1c6f2e0()*0.537368);
}

double NNfunction_sb_sLsR::synapse0x1c73ed0() {
   return (neuron0x1c6f620()*0.483185);
}

double NNfunction_sb_sLsR::synapse0x1c73960() {
   return (neuron0x1c6f960()*-0.684044);
}

double NNfunction_sb_sLsR::synapse0x1c739a0() {
   return (neuron0x1c6fec0()*1.0435);
}

double NNfunction_sb_sLsR::synapse0x1c74020() {
   return (neuron0x1c700e0()*-0.471425);
}

double NNfunction_sb_sLsR::synapse0x1c74060() {
   return (neuron0x1c70420()*0.428197);
}

double NNfunction_sb_sLsR::synapse0x1c740a0() {
   return (neuron0x1c70760()*-0.00354907);
}

double NNfunction_sb_sLsR::synapse0x1c740e0() {
   return (neuron0x1c70aa0()*0.549);
}

double NNfunction_sb_sLsR::synapse0x1c74120() {
   return (neuron0x1c70de0()*0.184767);
}

double NNfunction_sb_sLsR::synapse0x1c74160() {
   return (neuron0x1c71120()*-0.0534747);
}

double NNfunction_sb_sLsR::synapse0x1c744e0() {
   return (neuron0x1c6c560()*0.00623543);
}

double NNfunction_sb_sLsR::synapse0x1c74520() {
   return (neuron0x1c6c8a0()*0.0251166);
}

double NNfunction_sb_sLsR::synapse0x1c74560() {
   return (neuron0x1c6cbe0()*0.0797322);
}

double NNfunction_sb_sLsR::synapse0x1c745a0() {
   return (neuron0x1c6cf20()*-0.273228);
}

double NNfunction_sb_sLsR::synapse0x1c745e0() {
   return (neuron0x1c6d260()*0.0275716);
}

double NNfunction_sb_sLsR::synapse0x1c74620() {
   return (neuron0x1c6d5a0()*0.00816746);
}

double NNfunction_sb_sLsR::synapse0x1c74660() {
   return (neuron0x1c6d8e0()*0.0348441);
}

double NNfunction_sb_sLsR::synapse0x1c746a0() {
   return (neuron0x1c6dc20()*-0.0289345);
}

double NNfunction_sb_sLsR::synapse0x1c746e0() {
   return (neuron0x1c6df60()*-0.0321963);
}

double NNfunction_sb_sLsR::synapse0x1a2be30() {
   return (neuron0x1c6e2a0()*-0.0191706);
}

double NNfunction_sb_sLsR::synapse0x1a2be70() {
   return (neuron0x1c6e5e0()*0.0123178);
}

double NNfunction_sb_sLsR::synapse0x1a2beb0() {
   return (neuron0x1c6e920()*-0.0723573);
}

double NNfunction_sb_sLsR::synapse0x1a2bef0() {
   return (neuron0x1c6ec60()*-0.803606);
}

double NNfunction_sb_sLsR::synapse0x1a2bf30() {
   return (neuron0x1c6efa0()*-0.0226174);
}

double NNfunction_sb_sLsR::synapse0x1a2bf70() {
   return (neuron0x1c6f2e0()*-0.0212646);
}

double NNfunction_sb_sLsR::synapse0x1a2bfb0() {
   return (neuron0x1c6f620()*-0.00411054);
}

double NNfunction_sb_sLsR::synapse0x1c74330() {
   return (neuron0x1c6f960()*-0.0276897);
}

double NNfunction_sb_sLsR::synapse0x1c74370() {
   return (neuron0x1c6fec0()*-0.0396189);
}

double NNfunction_sb_sLsR::synapse0x1a2c100() {
   return (neuron0x1c700e0()*0.0582268);
}

double NNfunction_sb_sLsR::synapse0x1a2c140() {
   return (neuron0x1c70420()*-0.0159269);
}

double NNfunction_sb_sLsR::synapse0x1a2c180() {
   return (neuron0x1c70760()*0.0202516);
}

double NNfunction_sb_sLsR::synapse0x1a2c1c0() {
   return (neuron0x1c70aa0()*0.0157911);
}

double NNfunction_sb_sLsR::synapse0x1a2c200() {
   return (neuron0x1c70de0()*-0.01966);
}

double NNfunction_sb_sLsR::synapse0x1c74f30() {
   return (neuron0x1c71120()*0.0106665);
}

double NNfunction_sb_sLsR::synapse0x1c752b0() {
   return (neuron0x1c6c560()*-0.00650853);
}

double NNfunction_sb_sLsR::synapse0x1c752f0() {
   return (neuron0x1c6c8a0()*0.0240466);
}

double NNfunction_sb_sLsR::synapse0x1c75330() {
   return (neuron0x1c6cbe0()*-0.924041);
}

double NNfunction_sb_sLsR::synapse0x1c75370() {
   return (neuron0x1c6cf20()*-0.0111062);
}

double NNfunction_sb_sLsR::synapse0x1c753b0() {
   return (neuron0x1c6d260()*-0.00826764);
}

double NNfunction_sb_sLsR::synapse0x1c753f0() {
   return (neuron0x1c6d5a0()*-0.0248692);
}

double NNfunction_sb_sLsR::synapse0x1c75430() {
   return (neuron0x1c6d8e0()*0.00235309);
}

double NNfunction_sb_sLsR::synapse0x1c75470() {
   return (neuron0x1c6dc20()*0.0333362);
}

double NNfunction_sb_sLsR::synapse0x1c754b0() {
   return (neuron0x1c6df60()*-0.000858338);
}

double NNfunction_sb_sLsR::synapse0x1c754f0() {
   return (neuron0x1c6e2a0()*0.0395781);
}

double NNfunction_sb_sLsR::synapse0x1c75530() {
   return (neuron0x1c6e5e0()*-0.0315566);
}

double NNfunction_sb_sLsR::synapse0x1c75570() {
   return (neuron0x1c6e920()*-0.0674512);
}

double NNfunction_sb_sLsR::synapse0x1c755b0() {
   return (neuron0x1c6ec60()*0.407644);
}

double NNfunction_sb_sLsR::synapse0x1c755f0() {
   return (neuron0x1c6efa0()*-0.0144981);
}

double NNfunction_sb_sLsR::synapse0x1c75630() {
   return (neuron0x1c6f2e0()*-0.0228236);
}

double NNfunction_sb_sLsR::synapse0x1c75670() {
   return (neuron0x1c6f620()*0.0363786);
}

double NNfunction_sb_sLsR::synapse0x1c75100() {
   return (neuron0x1c6f960()*0.00353881);
}

double NNfunction_sb_sLsR::synapse0x1c75140() {
   return (neuron0x1c6fec0()*-0.00173092);
}

double NNfunction_sb_sLsR::synapse0x1c757c0() {
   return (neuron0x1c700e0()*-0.134699);
}

double NNfunction_sb_sLsR::synapse0x1c75800() {
   return (neuron0x1c70420()*-0.00834872);
}

double NNfunction_sb_sLsR::synapse0x1c75840() {
   return (neuron0x1c70760()*-0.0199612);
}

double NNfunction_sb_sLsR::synapse0x1c75880() {
   return (neuron0x1c70aa0()*-0.0385479);
}

double NNfunction_sb_sLsR::synapse0x1c758c0() {
   return (neuron0x1c70de0()*0.00451303);
}

double NNfunction_sb_sLsR::synapse0x1c75900() {
   return (neuron0x1c71120()*-0.00949065);
}

double NNfunction_sb_sLsR::synapse0x1c75c80() {
   return (neuron0x1c6c560()*0.0102672);
}

double NNfunction_sb_sLsR::synapse0x1c75cc0() {
   return (neuron0x1c6c8a0()*0.00302743);
}

double NNfunction_sb_sLsR::synapse0x1c75d00() {
   return (neuron0x1c6cbe0()*-0.00910491);
}

double NNfunction_sb_sLsR::synapse0x1c75d40() {
   return (neuron0x1c6cf20()*0.391709);
}

double NNfunction_sb_sLsR::synapse0x1c75d80() {
   return (neuron0x1c6d260()*0.0289025);
}

double NNfunction_sb_sLsR::synapse0x1c75dc0() {
   return (neuron0x1c6d5a0()*0.0156774);
}

double NNfunction_sb_sLsR::synapse0x1c75e00() {
   return (neuron0x1c6d8e0()*0.0216803);
}

double NNfunction_sb_sLsR::synapse0x1c75e40() {
   return (neuron0x1c6dc20()*-0.00981427);
}

double NNfunction_sb_sLsR::synapse0x1c75e80() {
   return (neuron0x1c6df60()*0.0262079);
}

double NNfunction_sb_sLsR::synapse0x1c75ec0() {
   return (neuron0x1c6e2a0()*0.0241407);
}

double NNfunction_sb_sLsR::synapse0x1c75f00() {
   return (neuron0x1c6e5e0()*-0.0182621);
}

double NNfunction_sb_sLsR::synapse0x1c75f40() {
   return (neuron0x1c6e920()*-0.0322004);
}

double NNfunction_sb_sLsR::synapse0x1c75f80() {
   return (neuron0x1c6ec60()*0.935352);
}

double NNfunction_sb_sLsR::synapse0x1c75fc0() {
   return (neuron0x1c6efa0()*-0.0142531);
}

double NNfunction_sb_sLsR::synapse0x1c76000() {
   return (neuron0x1c6f2e0()*-0.0302555);
}

double NNfunction_sb_sLsR::synapse0x1c76040() {
   return (neuron0x1c6f620()*0.0082901);
}

double NNfunction_sb_sLsR::synapse0x1c75ad0() {
   return (neuron0x1c6f960()*0.00349075);
}

double NNfunction_sb_sLsR::synapse0x1c75b10() {
   return (neuron0x1c6fec0()*0.00177099);
}

double NNfunction_sb_sLsR::synapse0x1c76190() {
   return (neuron0x1c700e0()*-1.60149);
}

double NNfunction_sb_sLsR::synapse0x1c761d0() {
   return (neuron0x1c70420()*-0.0111897);
}

double NNfunction_sb_sLsR::synapse0x1c76210() {
   return (neuron0x1c70760()*0.0168984);
}

double NNfunction_sb_sLsR::synapse0x1c76250() {
   return (neuron0x1c70aa0()*0.010849);
}

double NNfunction_sb_sLsR::synapse0x1c76290() {
   return (neuron0x1c70de0()*-0.00508477);
}

double NNfunction_sb_sLsR::synapse0x1c762d0() {
   return (neuron0x1c71120()*-0.010233);
}

double NNfunction_sb_sLsR::synapse0x1c6fdb0() {
   return (neuron0x1c6c560()*0.3806);
}

double NNfunction_sb_sLsR::synapse0x1c6fdf0() {
   return (neuron0x1c6c8a0()*-0.544254);
}

double NNfunction_sb_sLsR::synapse0x1c6fe30() {
   return (neuron0x1c6cbe0()*0.0143594);
}

double NNfunction_sb_sLsR::synapse0x1c6fe70() {
   return (neuron0x1c6cf20()*-0.133623);
}

double NNfunction_sb_sLsR::synapse0x1c76860() {
   return (neuron0x1c6d260()*-0.158047);
}

double NNfunction_sb_sLsR::synapse0x1c768a0() {
   return (neuron0x1c6d5a0()*-0.139955);
}

double NNfunction_sb_sLsR::synapse0x1c768e0() {
   return (neuron0x1c6d8e0()*0.503871);
}

double NNfunction_sb_sLsR::synapse0x1c76920() {
   return (neuron0x1c6dc20()*-0.472733);
}

double NNfunction_sb_sLsR::synapse0x1c76960() {
   return (neuron0x1c6df60()*0.134291);
}

double NNfunction_sb_sLsR::synapse0x1c769a0() {
   return (neuron0x1c6e2a0()*-0.174012);
}

double NNfunction_sb_sLsR::synapse0x1c769e0() {
   return (neuron0x1c6e5e0()*0.611157);
}

double NNfunction_sb_sLsR::synapse0x1c76a20() {
   return (neuron0x1c6e920()*-0.535565);
}

double NNfunction_sb_sLsR::synapse0x1c76a60() {
   return (neuron0x1c6ec60()*-0.152581);
}

double NNfunction_sb_sLsR::synapse0x1c76aa0() {
   return (neuron0x1c6efa0()*-0.351379);
}

double NNfunction_sb_sLsR::synapse0x1c76ae0() {
   return (neuron0x1c6f2e0()*0.182004);
}

double NNfunction_sb_sLsR::synapse0x1c76b20() {
   return (neuron0x1c6f620()*-0.474549);
}

double NNfunction_sb_sLsR::synapse0x1c764a0() {
   return (neuron0x1c6f960()*0.465778);
}

double NNfunction_sb_sLsR::synapse0x1c764e0() {
   return (neuron0x1c6fec0()*0.155507);
}

double NNfunction_sb_sLsR::synapse0x1c76c70() {
   return (neuron0x1c700e0()*0.401026);
}

double NNfunction_sb_sLsR::synapse0x1c76cb0() {
   return (neuron0x1c70420()*-0.772517);
}

double NNfunction_sb_sLsR::synapse0x1c76cf0() {
   return (neuron0x1c70760()*0.373207);
}

double NNfunction_sb_sLsR::synapse0x1c76d30() {
   return (neuron0x1c70aa0()*-0.614618);
}

double NNfunction_sb_sLsR::synapse0x1c76d70() {
   return (neuron0x1c70de0()*0.131534);
}

double NNfunction_sb_sLsR::synapse0x1c76db0() {
   return (neuron0x1c71120()*0.132208);
}

double NNfunction_sb_sLsR::synapse0x1c77130() {
   return (neuron0x1c6c560()*-0.174728);
}

double NNfunction_sb_sLsR::synapse0x1c77170() {
   return (neuron0x1c6c8a0()*0.251837);
}

double NNfunction_sb_sLsR::synapse0x1c771b0() {
   return (neuron0x1c6cbe0()*-0.0679881);
}

double NNfunction_sb_sLsR::synapse0x1c771f0() {
   return (neuron0x1c6cf20()*0.436236);
}

double NNfunction_sb_sLsR::synapse0x1c77230() {
   return (neuron0x1c6d260()*-0.213118);
}

double NNfunction_sb_sLsR::synapse0x1c77270() {
   return (neuron0x1c6d5a0()*-0.0650627);
}

double NNfunction_sb_sLsR::synapse0x1c772b0() {
   return (neuron0x1c6d8e0()*-0.455401);
}

double NNfunction_sb_sLsR::synapse0x1c772f0() {
   return (neuron0x1c6dc20()*0.0863834);
}

double NNfunction_sb_sLsR::synapse0x1c77330() {
   return (neuron0x1c6df60()*-0.100545);
}

double NNfunction_sb_sLsR::synapse0x1c77370() {
   return (neuron0x1c6e2a0()*0.0449971);
}

double NNfunction_sb_sLsR::synapse0x1c773b0() {
   return (neuron0x1c6e5e0()*0.0124371);
}

double NNfunction_sb_sLsR::synapse0x1c773f0() {
   return (neuron0x1c6e920()*0.140895);
}

double NNfunction_sb_sLsR::synapse0x1c77430() {
   return (neuron0x1c6ec60()*0.043066);
}

double NNfunction_sb_sLsR::synapse0x1c77470() {
   return (neuron0x1c6efa0()*0.0353423);
}

double NNfunction_sb_sLsR::synapse0x1c774b0() {
   return (neuron0x1c6f2e0()*-0.353331);
}

double NNfunction_sb_sLsR::synapse0x1c774f0() {
   return (neuron0x1c6f620()*0.461943);
}

double NNfunction_sb_sLsR::synapse0x1c76f80() {
   return (neuron0x1c6f960()*0.349345);
}

double NNfunction_sb_sLsR::synapse0x1c76fc0() {
   return (neuron0x1c6fec0()*0.0371508);
}

double NNfunction_sb_sLsR::synapse0x1c77640() {
   return (neuron0x1c700e0()*0.0561114);
}

double NNfunction_sb_sLsR::synapse0x1c77680() {
   return (neuron0x1c70420()*-0.166859);
}

double NNfunction_sb_sLsR::synapse0x1c776c0() {
   return (neuron0x1c70760()*-0.15338);
}

double NNfunction_sb_sLsR::synapse0x1c77700() {
   return (neuron0x1c70aa0()*-0.0513798);
}

double NNfunction_sb_sLsR::synapse0x1c77740() {
   return (neuron0x1c70de0()*0.212323);
}

double NNfunction_sb_sLsR::synapse0x1c77780() {
   return (neuron0x1c71120()*0.0403262);
}

double NNfunction_sb_sLsR::synapse0x1c77b00() {
   return (neuron0x1c6c560()*0.0282693);
}

double NNfunction_sb_sLsR::synapse0x1c77b40() {
   return (neuron0x1c6c8a0()*-0.0280711);
}

double NNfunction_sb_sLsR::synapse0x1c77b80() {
   return (neuron0x1c6cbe0()*0.0553408);
}

double NNfunction_sb_sLsR::synapse0x1c77bc0() {
   return (neuron0x1c6cf20()*0.653003);
}

double NNfunction_sb_sLsR::synapse0x1c77c00() {
   return (neuron0x1c6d260()*0.0136847);
}

double NNfunction_sb_sLsR::synapse0x1c77c40() {
   return (neuron0x1c6d5a0()*0.0397464);
}

double NNfunction_sb_sLsR::synapse0x1c77c80() {
   return (neuron0x1c6d8e0()*0.0650431);
}

double NNfunction_sb_sLsR::synapse0x1c77cc0() {
   return (neuron0x1c6dc20()*0.0521725);
}

double NNfunction_sb_sLsR::synapse0x1c77d00() {
   return (neuron0x1c6df60()*0.0113066);
}

double NNfunction_sb_sLsR::synapse0x1c77d40() {
   return (neuron0x1c6e2a0()*0.00883446);
}

double NNfunction_sb_sLsR::synapse0x1c77d80() {
   return (neuron0x1c6e5e0()*0.00768444);
}

double NNfunction_sb_sLsR::synapse0x1c77dc0() {
   return (neuron0x1c6e920()*0.168725);
}

double NNfunction_sb_sLsR::synapse0x1c77e00() {
   return (neuron0x1c6ec60()*-0.0927359);
}

double NNfunction_sb_sLsR::synapse0x1c77e40() {
   return (neuron0x1c6efa0()*-0.0544167);
}

double NNfunction_sb_sLsR::synapse0x1c77e80() {
   return (neuron0x1c6f2e0()*0.091);
}

double NNfunction_sb_sLsR::synapse0x1c77ec0() {
   return (neuron0x1c6f620()*0.143162);
}

double NNfunction_sb_sLsR::synapse0x1c77950() {
   return (neuron0x1c6f960()*-0.0523264);
}

double NNfunction_sb_sLsR::synapse0x1c77990() {
   return (neuron0x1c6fec0()*0.0989225);
}

double NNfunction_sb_sLsR::synapse0x1c74720() {
   return (neuron0x1c700e0()*-0.106927);
}

double NNfunction_sb_sLsR::synapse0x1c74760() {
   return (neuron0x1c70420()*0.0173204);
}

double NNfunction_sb_sLsR::synapse0x1c747a0() {
   return (neuron0x1c70760()*-0.0234299);
}

double NNfunction_sb_sLsR::synapse0x1c747e0() {
   return (neuron0x1c70aa0()*-0.00508966);
}

double NNfunction_sb_sLsR::synapse0x1c74820() {
   return (neuron0x1c70de0()*-0.0129903);
}

double NNfunction_sb_sLsR::synapse0x1c74860() {
   return (neuron0x1c71120()*-0.0211716);
}

double NNfunction_sb_sLsR::synapse0x1c74be0() {
   return (neuron0x1c6c560()*0.0536003);
}

double NNfunction_sb_sLsR::synapse0x1c74c20() {
   return (neuron0x1c6c8a0()*0.145367);
}

double NNfunction_sb_sLsR::synapse0x1c74c60() {
   return (neuron0x1c6cbe0()*-0.00388055);
}

double NNfunction_sb_sLsR::synapse0x1c74ca0() {
   return (neuron0x1c6cf20()*-1.95383);
}

double NNfunction_sb_sLsR::synapse0x1c74ce0() {
   return (neuron0x1c6d260()*0.171388);
}

double NNfunction_sb_sLsR::synapse0x1c74d20() {
   return (neuron0x1c6d5a0()*0.104253);
}

double NNfunction_sb_sLsR::synapse0x1c74d60() {
   return (neuron0x1c6d8e0()*0.0376992);
}

double NNfunction_sb_sLsR::synapse0x1c74da0() {
   return (neuron0x1c6dc20()*-0.0822966);
}

double NNfunction_sb_sLsR::synapse0x1c74de0() {
   return (neuron0x1c6df60()*-0.0356939);
}

double NNfunction_sb_sLsR::synapse0x1c74e20() {
   return (neuron0x1c6e2a0()*-0.198767);
}

double NNfunction_sb_sLsR::synapse0x1c74e60() {
   return (neuron0x1c6e5e0()*-0.0754347);
}

double NNfunction_sb_sLsR::synapse0x1c74ea0() {
   return (neuron0x1c6e920()*-0.101954);
}

double NNfunction_sb_sLsR::synapse0x1c74ee0() {
   return (neuron0x1c6ec60()*-0.438443);
}

double NNfunction_sb_sLsR::synapse0x1c79020() {
   return (neuron0x1c6efa0()*-0.0831465);
}

double NNfunction_sb_sLsR::synapse0x1c79060() {
   return (neuron0x1c6f2e0()*0.0174574);
}

double NNfunction_sb_sLsR::synapse0x1c790a0() {
   return (neuron0x1c6f620()*0.0388569);
}

double NNfunction_sb_sLsR::synapse0x1c74a30() {
   return (neuron0x1c6f960()*-0.096962);
}

double NNfunction_sb_sLsR::synapse0x1c74a70() {
   return (neuron0x1c6fec0()*0.0159728);
}

double NNfunction_sb_sLsR::synapse0x1c791f0() {
   return (neuron0x1c700e0()*-0.501695);
}

double NNfunction_sb_sLsR::synapse0x1c79230() {
   return (neuron0x1c70420()*-0.06892);
}

double NNfunction_sb_sLsR::synapse0x1c79270() {
   return (neuron0x1c70760()*0.133623);
}

double NNfunction_sb_sLsR::synapse0x1c792b0() {
   return (neuron0x1c70aa0()*0.115871);
}

double NNfunction_sb_sLsR::synapse0x1c792f0() {
   return (neuron0x1c70de0()*0.0454045);
}

double NNfunction_sb_sLsR::synapse0x1c79330() {
   return (neuron0x1c71120()*-0.0635548);
}

double NNfunction_sb_sLsR::synapse0x1c796b0() {
   return (neuron0x1c6c560()*0.0143927);
}

double NNfunction_sb_sLsR::synapse0x1c796f0() {
   return (neuron0x1c6c8a0()*0.0344141);
}

double NNfunction_sb_sLsR::synapse0x1c79730() {
   return (neuron0x1c6cbe0()*-0.000230759);
}

double NNfunction_sb_sLsR::synapse0x1c79770() {
   return (neuron0x1c6cf20()*-2.07239);
}

double NNfunction_sb_sLsR::synapse0x1c797b0() {
   return (neuron0x1c6d260()*-0.0022168);
}

double NNfunction_sb_sLsR::synapse0x1c797f0() {
   return (neuron0x1c6d5a0()*0.027557);
}

double NNfunction_sb_sLsR::synapse0x1c79830() {
   return (neuron0x1c6d8e0()*0.0517014);
}

double NNfunction_sb_sLsR::synapse0x1c79870() {
   return (neuron0x1c6dc20()*-0.0354866);
}

double NNfunction_sb_sLsR::synapse0x1c798b0() {
   return (neuron0x1c6df60()*-0.0281324);
}

double NNfunction_sb_sLsR::synapse0x1c798f0() {
   return (neuron0x1c6e2a0()*-0.016426);
}

double NNfunction_sb_sLsR::synapse0x1c79930() {
   return (neuron0x1c6e5e0()*-0.0327772);
}

double NNfunction_sb_sLsR::synapse0x1c79970() {
   return (neuron0x1c6e920()*-0.0473943);
}

double NNfunction_sb_sLsR::synapse0x1c799b0() {
   return (neuron0x1c6ec60()*1.02532);
}

double NNfunction_sb_sLsR::synapse0x1c799f0() {
   return (neuron0x1c6efa0()*-0.00497477);
}

double NNfunction_sb_sLsR::synapse0x1c79a30() {
   return (neuron0x1c6f2e0()*-0.0479133);
}

double NNfunction_sb_sLsR::synapse0x1c79a70() {
   return (neuron0x1c6f620()*0.0126695);
}

double NNfunction_sb_sLsR::synapse0x1c79500() {
   return (neuron0x1c6f960()*-0.0093533);
}

double NNfunction_sb_sLsR::synapse0x1c79540() {
   return (neuron0x1c6fec0()*-0.0036136);
}

double NNfunction_sb_sLsR::synapse0x1c79bc0() {
   return (neuron0x1c700e0()*-0.805748);
}

double NNfunction_sb_sLsR::synapse0x1c79c00() {
   return (neuron0x1c70420()*0.0346138);
}

double NNfunction_sb_sLsR::synapse0x1c79c40() {
   return (neuron0x1c70760()*0.012595);
}

double NNfunction_sb_sLsR::synapse0x1c79c80() {
   return (neuron0x1c70aa0()*-0.00195899);
}

double NNfunction_sb_sLsR::synapse0x1c79cc0() {
   return (neuron0x1c70de0()*-0.00504464);
}

double NNfunction_sb_sLsR::synapse0x1c79d00() {
   return (neuron0x1c71120()*-0.014977);
}

double NNfunction_sb_sLsR::synapse0x1c7a080() {
   return (neuron0x1c6c560()*-0.175722);
}

double NNfunction_sb_sLsR::synapse0x1c7a0c0() {
   return (neuron0x1c6c8a0()*-0.453924);
}

double NNfunction_sb_sLsR::synapse0x1c7a100() {
   return (neuron0x1c6cbe0()*-0.150329);
}

double NNfunction_sb_sLsR::synapse0x1c7a140() {
   return (neuron0x1c6cf20()*0.482606);
}

double NNfunction_sb_sLsR::synapse0x1c7a180() {
   return (neuron0x1c6d260()*0.175783);
}

double NNfunction_sb_sLsR::synapse0x1c7a1c0() {
   return (neuron0x1c6d5a0()*0.214816);
}

double NNfunction_sb_sLsR::synapse0x1c7a200() {
   return (neuron0x1c6d8e0()*0.108568);
}

double NNfunction_sb_sLsR::synapse0x1c7a240() {
   return (neuron0x1c6dc20()*-0.0599787);
}

double NNfunction_sb_sLsR::synapse0x1c7a280() {
   return (neuron0x1c6df60()*0.07983);
}

double NNfunction_sb_sLsR::synapse0x1c7a2c0() {
   return (neuron0x1c6e2a0()*-0.606015);
}

double NNfunction_sb_sLsR::synapse0x1c7a300() {
   return (neuron0x1c6e5e0()*-0.37064);
}

double NNfunction_sb_sLsR::synapse0x1c7a340() {
   return (neuron0x1c6e920()*0.247609);
}

double NNfunction_sb_sLsR::synapse0x1c7a380() {
   return (neuron0x1c6ec60()*-0.0615633);
}

double NNfunction_sb_sLsR::synapse0x1c7a3c0() {
   return (neuron0x1c6efa0()*0.16578);
}

double NNfunction_sb_sLsR::synapse0x1c7a400() {
   return (neuron0x1c6f2e0()*0.0571067);
}

double NNfunction_sb_sLsR::synapse0x1c7a440() {
   return (neuron0x1c6f620()*0.0737884);
}

double NNfunction_sb_sLsR::synapse0x1c79ed0() {
   return (neuron0x1c6f960()*-0.125311);
}

double NNfunction_sb_sLsR::synapse0x1c79f10() {
   return (neuron0x1c6fec0()*0.0225331);
}

double NNfunction_sb_sLsR::synapse0x1c7a590() {
   return (neuron0x1c700e0()*0.677575);
}

double NNfunction_sb_sLsR::synapse0x1c7a5d0() {
   return (neuron0x1c70420()*-0.00409893);
}

double NNfunction_sb_sLsR::synapse0x1c7a610() {
   return (neuron0x1c70760()*-0.0573248);
}

double NNfunction_sb_sLsR::synapse0x1c7a650() {
   return (neuron0x1c70aa0()*0.0231227);
}

double NNfunction_sb_sLsR::synapse0x1c7a690() {
   return (neuron0x1c70de0()*-0.332187);
}

double NNfunction_sb_sLsR::synapse0x1c7a6d0() {
   return (neuron0x1c71120()*0.178007);
}

double NNfunction_sb_sLsR::synapse0x1c7aa50() {
   return (neuron0x1c6c560()*-0.0570661);
}

double NNfunction_sb_sLsR::synapse0x1c7aa90() {
   return (neuron0x1c6c8a0()*-0.664232);
}

double NNfunction_sb_sLsR::synapse0x1c7aad0() {
   return (neuron0x1c6cbe0()*0.320302);
}

double NNfunction_sb_sLsR::synapse0x1c7ab10() {
   return (neuron0x1c6cf20()*-0.368432);
}

double NNfunction_sb_sLsR::synapse0x1c7ab50() {
   return (neuron0x1c6d260()*-0.39353);
}

double NNfunction_sb_sLsR::synapse0x1c7ab90() {
   return (neuron0x1c6d5a0()*-0.431574);
}

double NNfunction_sb_sLsR::synapse0x1c7abd0() {
   return (neuron0x1c6d8e0()*1.08224);
}

double NNfunction_sb_sLsR::synapse0x1c7ac10() {
   return (neuron0x1c6dc20()*-0.704409);
}

double NNfunction_sb_sLsR::synapse0x1c7ac50() {
   return (neuron0x1c6df60()*0.539706);
}

double NNfunction_sb_sLsR::synapse0x1c7ac90() {
   return (neuron0x1c6e2a0()*-0.362151);
}

double NNfunction_sb_sLsR::synapse0x1c7acd0() {
   return (neuron0x1c6e5e0()*-0.451089);
}

double NNfunction_sb_sLsR::synapse0x1c7ad10() {
   return (neuron0x1c6e920()*-0.0800123);
}

double NNfunction_sb_sLsR::synapse0x1c7ad50() {
   return (neuron0x1c6ec60()*-0.770874);
}

double NNfunction_sb_sLsR::synapse0x1c7ad90() {
   return (neuron0x1c6efa0()*0.728435);
}

double NNfunction_sb_sLsR::synapse0x1c7add0() {
   return (neuron0x1c6f2e0()*0.416861);
}

double NNfunction_sb_sLsR::synapse0x1c7ae10() {
   return (neuron0x1c6f620()*0.972256);
}

double NNfunction_sb_sLsR::synapse0x1c7a8a0() {
   return (neuron0x1c6f960()*0.249092);
}

double NNfunction_sb_sLsR::synapse0x1c7a8e0() {
   return (neuron0x1c6fec0()*-0.732183);
}

double NNfunction_sb_sLsR::synapse0x1c7af60() {
   return (neuron0x1c700e0()*-0.352792);
}

double NNfunction_sb_sLsR::synapse0x1c7afa0() {
   return (neuron0x1c70420()*0.469322);
}

double NNfunction_sb_sLsR::synapse0x1c7afe0() {
   return (neuron0x1c70760()*0.352905);
}

double NNfunction_sb_sLsR::synapse0x1c7b020() {
   return (neuron0x1c70aa0()*0.126551);
}

double NNfunction_sb_sLsR::synapse0x1c7b060() {
   return (neuron0x1c70de0()*0.186865);
}

double NNfunction_sb_sLsR::synapse0x1c7b0a0() {
   return (neuron0x1c71120()*-0.0953911);
}

double NNfunction_sb_sLsR::synapse0x1c7b420() {
   return (neuron0x1c6c560()*0.206267);
}

double NNfunction_sb_sLsR::synapse0x1c6c780() {
   return (neuron0x1c6c8a0()*0.0636638);
}

double NNfunction_sb_sLsR::synapse0x1c6c7c0() {
   return (neuron0x1c6cbe0()*0.317273);
}

double NNfunction_sb_sLsR::synapse0x1c6cac0() {
   return (neuron0x1c6cf20()*-0.120026);
}

double NNfunction_sb_sLsR::synapse0x1c6cb00() {
   return (neuron0x1c6d260()*-0.235547);
}

double NNfunction_sb_sLsR::synapse0x1c6ce00() {
   return (neuron0x1c6d5a0()*-0.220474);
}

double NNfunction_sb_sLsR::synapse0x1c6ce40() {
   return (neuron0x1c6d8e0()*0.376824);
}

double NNfunction_sb_sLsR::synapse0x1c6d140() {
   return (neuron0x1c6dc20()*-0.12407);
}

double NNfunction_sb_sLsR::synapse0x1c6d180() {
   return (neuron0x1c6df60()*0.395032);
}

double NNfunction_sb_sLsR::synapse0x1c6d480() {
   return (neuron0x1c6e2a0()*0.174224);
}

double NNfunction_sb_sLsR::synapse0x1c6d4c0() {
   return (neuron0x1c6e5e0()*0.0737505);
}

double NNfunction_sb_sLsR::synapse0x1c6d7c0() {
   return (neuron0x1c6e920()*-0.914717);
}

double NNfunction_sb_sLsR::synapse0x1c6d800() {
   return (neuron0x1c6ec60()*0.662197);
}

double NNfunction_sb_sLsR::synapse0x1c6db00() {
   return (neuron0x1c6efa0()*-0.651806);
}

double NNfunction_sb_sLsR::synapse0x1c6db40() {
   return (neuron0x1c6f2e0()*-0.153073);
}

double NNfunction_sb_sLsR::synapse0x1c6de40() {
   return (neuron0x1c6f620()*-0.0542083);
}

double NNfunction_sb_sLsR::synapse0x1c6de80() {
   return (neuron0x1c6f960()*-0.44204);
}

double NNfunction_sb_sLsR::synapse0x1c6e180() {
   return (neuron0x1c6fec0()*0.319935);
}

double NNfunction_sb_sLsR::synapse0x1c6e1c0() {
   return (neuron0x1c700e0()*0.349419);
}

double NNfunction_sb_sLsR::synapse0x1c6e4c0() {
   return (neuron0x1c70420()*0.379056);
}

double NNfunction_sb_sLsR::synapse0x1c6e500() {
   return (neuron0x1c70760()*0.381886);
}

double NNfunction_sb_sLsR::synapse0x1c6e800() {
   return (neuron0x1c70aa0()*-0.41841);
}

double NNfunction_sb_sLsR::synapse0x1c6e840() {
   return (neuron0x1c70de0()*0.198043);
}

double NNfunction_sb_sLsR::synapse0x1c6eb40() {
   return (neuron0x1c71120()*0.0570256);
}

double NNfunction_sb_sLsR::synapse0x1c6eb80() {
   return (neuron0x1c6c560()*0.447606);
}

double NNfunction_sb_sLsR::synapse0x1c6f840() {
   return (neuron0x1c6c8a0()*-0.0277722);
}

double NNfunction_sb_sLsR::synapse0x1c6f880() {
   return (neuron0x1c6cbe0()*0.14046);
}

double NNfunction_sb_sLsR::synapse0x1c7b270() {
   return (neuron0x1c6cf20()*0.621594);
}

double NNfunction_sb_sLsR::synapse0x1c7b2b0() {
   return (neuron0x1c6d260()*0.741039);
}

double NNfunction_sb_sLsR::synapse0x1c6fb80() {
   return (neuron0x1c6d5a0()*-0.127714);
}

double NNfunction_sb_sLsR::synapse0x1c6fbc0() {
   return (neuron0x1c6d8e0()*0.0156456);
}

double NNfunction_sb_sLsR::synapse0x1a1db50() {
   return (neuron0x1c6dc20()*-0.409783);
}

double NNfunction_sb_sLsR::synapse0x1a1db90() {
   return (neuron0x1c6df60()*-0.000314353);
}

double NNfunction_sb_sLsR::synapse0x1c70300() {
   return (neuron0x1c6e2a0()*-0.203603);
}

double NNfunction_sb_sLsR::synapse0x1c70340() {
   return (neuron0x1c6e5e0()*-0.224276);
}

double NNfunction_sb_sLsR::synapse0x1c70640() {
   return (neuron0x1c6e920()*-0.281482);
}

double NNfunction_sb_sLsR::synapse0x1c70680() {
   return (neuron0x1c6ec60()*-0.314059);
}

double NNfunction_sb_sLsR::synapse0x1c70980() {
   return (neuron0x1c6efa0()*-0.500739);
}

double NNfunction_sb_sLsR::synapse0x1c709c0() {
   return (neuron0x1c6f2e0()*-0.272449);
}

double NNfunction_sb_sLsR::synapse0x1c70cc0() {
   return (neuron0x1c6f620()*0.413938);
}

double NNfunction_sb_sLsR::synapse0x1c70d00() {
   return (neuron0x1c6f960()*0.289012);
}

double NNfunction_sb_sLsR::synapse0x1c71000() {
   return (neuron0x1c6fec0()*-0.15939);
}

double NNfunction_sb_sLsR::synapse0x1c71040() {
   return (neuron0x1c700e0()*-0.119012);
}

double NNfunction_sb_sLsR::synapse0x1c71340() {
   return (neuron0x1c70420()*-0.111817);
}

double NNfunction_sb_sLsR::synapse0x1c71380() {
   return (neuron0x1c70760()*0.0117168);
}

double NNfunction_sb_sLsR::synapse0x1c6ee80() {
   return (neuron0x1c70aa0()*0.0921582);
}

double NNfunction_sb_sLsR::synapse0x1c6eec0() {
   return (neuron0x1c70de0()*0.0601611);
}

double NNfunction_sb_sLsR::synapse0x1c7d190() {
   return (neuron0x1c71120()*0.12153);
}

double NNfunction_sb_sLsR::synapse0x1c7d510() {
   return (neuron0x1c6c560()*0.325653);
}

double NNfunction_sb_sLsR::synapse0x1c7d550() {
   return (neuron0x1c6c8a0()*-0.271668);
}

double NNfunction_sb_sLsR::synapse0x1c7d590() {
   return (neuron0x1c6cbe0()*0.0188459);
}

double NNfunction_sb_sLsR::synapse0x1c7d5d0() {
   return (neuron0x1c6cf20()*-0.369563);
}

double NNfunction_sb_sLsR::synapse0x1c7d610() {
   return (neuron0x1c6d260()*-0.541898);
}

double NNfunction_sb_sLsR::synapse0x1c7d650() {
   return (neuron0x1c6d5a0()*0.335586);
}

double NNfunction_sb_sLsR::synapse0x1c7d690() {
   return (neuron0x1c6d8e0()*-0.234135);
}

double NNfunction_sb_sLsR::synapse0x1c7d6d0() {
   return (neuron0x1c6dc20()*-1.07785);
}

double NNfunction_sb_sLsR::synapse0x1c7d710() {
   return (neuron0x1c6df60()*-0.41496);
}

double NNfunction_sb_sLsR::synapse0x1c7d750() {
   return (neuron0x1c6e2a0()*-0.0298091);
}

double NNfunction_sb_sLsR::synapse0x1c7d790() {
   return (neuron0x1c6e5e0()*-0.00310453);
}

double NNfunction_sb_sLsR::synapse0x1c7d7d0() {
   return (neuron0x1c6e920()*0.545142);
}

double NNfunction_sb_sLsR::synapse0x1c7d810() {
   return (neuron0x1c6ec60()*-0.283633);
}

double NNfunction_sb_sLsR::synapse0x1c7d850() {
   return (neuron0x1c6efa0()*0.24008);
}

double NNfunction_sb_sLsR::synapse0x1c7d890() {
   return (neuron0x1c6f2e0()*0.22139);
}

double NNfunction_sb_sLsR::synapse0x1c7d8d0() {
   return (neuron0x1c6f620()*0.247586);
}

double NNfunction_sb_sLsR::synapse0x1c7d360() {
   return (neuron0x1c6f960()*-0.0954848);
}

double NNfunction_sb_sLsR::synapse0x1c7d3a0() {
   return (neuron0x1c6fec0()*0.338961);
}

double NNfunction_sb_sLsR::synapse0x1c7da20() {
   return (neuron0x1c700e0()*0.0537916);
}

double NNfunction_sb_sLsR::synapse0x1c7da60() {
   return (neuron0x1c70420()*-0.0420352);
}

double NNfunction_sb_sLsR::synapse0x1c7daa0() {
   return (neuron0x1c70760()*0.534904);
}

double NNfunction_sb_sLsR::synapse0x1c7dae0() {
   return (neuron0x1c70aa0()*-0.10516);
}

double NNfunction_sb_sLsR::synapse0x1c7db20() {
   return (neuron0x1c70de0()*-0.107536);
}

double NNfunction_sb_sLsR::synapse0x1c7db60() {
   return (neuron0x1c71120()*0.205165);
}

double NNfunction_sb_sLsR::synapse0x1c7dee0() {
   return (neuron0x1c6c560()*-0.0486453);
}

double NNfunction_sb_sLsR::synapse0x1c7df20() {
   return (neuron0x1c6c8a0()*-0.251664);
}

double NNfunction_sb_sLsR::synapse0x1c7df60() {
   return (neuron0x1c6cbe0()*-0.361653);
}

double NNfunction_sb_sLsR::synapse0x1c7dfa0() {
   return (neuron0x1c6cf20()*1.58905);
}

double NNfunction_sb_sLsR::synapse0x1c7dfe0() {
   return (neuron0x1c6d260()*-0.0662042);
}

double NNfunction_sb_sLsR::synapse0x1c7e020() {
   return (neuron0x1c6d5a0()*0.0771391);
}

double NNfunction_sb_sLsR::synapse0x1c7e060() {
   return (neuron0x1c6d8e0()*-0.102771);
}

double NNfunction_sb_sLsR::synapse0x1c7e0a0() {
   return (neuron0x1c6dc20()*0.00524654);
}

double NNfunction_sb_sLsR::synapse0x1c7e0e0() {
   return (neuron0x1c6df60()*-0.00439995);
}

double NNfunction_sb_sLsR::synapse0x1c7e120() {
   return (neuron0x1c6e2a0()*0.0601684);
}

double NNfunction_sb_sLsR::synapse0x1c7e160() {
   return (neuron0x1c6e5e0()*-0.0823752);
}

double NNfunction_sb_sLsR::synapse0x1c7e1a0() {
   return (neuron0x1c6e920()*0.0316401);
}

double NNfunction_sb_sLsR::synapse0x1c7e1e0() {
   return (neuron0x1c6ec60()*-0.0806993);
}

double NNfunction_sb_sLsR::synapse0x1c7e220() {
   return (neuron0x1c6efa0()*0.115346);
}

double NNfunction_sb_sLsR::synapse0x1c7e260() {
   return (neuron0x1c6f2e0()*-0.0474475);
}

double NNfunction_sb_sLsR::synapse0x1c7e2a0() {
   return (neuron0x1c6f620()*-0.183256);
}

double NNfunction_sb_sLsR::synapse0x1c7dd30() {
   return (neuron0x1c6f960()*0.121296);
}

double NNfunction_sb_sLsR::synapse0x1c7dd70() {
   return (neuron0x1c6fec0()*-0.0784335);
}

double NNfunction_sb_sLsR::synapse0x1c7e3f0() {
   return (neuron0x1c700e0()*-0.0627601);
}

double NNfunction_sb_sLsR::synapse0x1c7e430() {
   return (neuron0x1c70420()*0.050032);
}

double NNfunction_sb_sLsR::synapse0x1c7e470() {
   return (neuron0x1c70760()*-0.00641849);
}

double NNfunction_sb_sLsR::synapse0x1c7e4b0() {
   return (neuron0x1c70aa0()*-0.0475029);
}

double NNfunction_sb_sLsR::synapse0x1c7e4f0() {
   return (neuron0x1c70de0()*-0.0385909);
}

double NNfunction_sb_sLsR::synapse0x1c7e530() {
   return (neuron0x1c71120()*0.0724485);
}

double NNfunction_sb_sLsR::synapse0x1c7e8b0() {
   return (neuron0x1c6c560()*0.0378687);
}

double NNfunction_sb_sLsR::synapse0x1c7e8f0() {
   return (neuron0x1c6c8a0()*0.0146321);
}

double NNfunction_sb_sLsR::synapse0x1c7e930() {
   return (neuron0x1c6cbe0()*-0.0386628);
}

double NNfunction_sb_sLsR::synapse0x1c7e970() {
   return (neuron0x1c6cf20()*-0.303409);
}

double NNfunction_sb_sLsR::synapse0x1c7e9b0() {
   return (neuron0x1c6d260()*0.00325444);
}

double NNfunction_sb_sLsR::synapse0x1c7e9f0() {
   return (neuron0x1c6d5a0()*0.0110109);
}

double NNfunction_sb_sLsR::synapse0x1c7ea30() {
   return (neuron0x1c6d8e0()*0.04351);
}

double NNfunction_sb_sLsR::synapse0x1c7ea70() {
   return (neuron0x1c6dc20()*0.0253076);
}

double NNfunction_sb_sLsR::synapse0x1c7eab0() {
   return (neuron0x1c6df60()*0.00962279);
}

double NNfunction_sb_sLsR::synapse0x1c7eaf0() {
   return (neuron0x1c6e2a0()*0.0823859);
}

double NNfunction_sb_sLsR::synapse0x1c7eb30() {
   return (neuron0x1c6e5e0()*-0.0557881);
}

double NNfunction_sb_sLsR::synapse0x1c7eb70() {
   return (neuron0x1c6e920()*-0.0100447);
}

double NNfunction_sb_sLsR::synapse0x1c7ebb0() {
   return (neuron0x1c6ec60()*0.338731);
}

double NNfunction_sb_sLsR::synapse0x1c7ebf0() {
   return (neuron0x1c6efa0()*0.0695297);
}

double NNfunction_sb_sLsR::synapse0x1c7ec30() {
   return (neuron0x1c6f2e0()*0.0576651);
}

double NNfunction_sb_sLsR::synapse0x1c7ec70() {
   return (neuron0x1c6f620()*0.0470492);
}

double NNfunction_sb_sLsR::synapse0x1c7e700() {
   return (neuron0x1c6f960()*0.0522704);
}

double NNfunction_sb_sLsR::synapse0x1c7e740() {
   return (neuron0x1c6fec0()*0.0781803);
}

double NNfunction_sb_sLsR::synapse0x1c7edc0() {
   return (neuron0x1c700e0()*0.712884);
}

double NNfunction_sb_sLsR::synapse0x1c7ee00() {
   return (neuron0x1c70420()*0.0681255);
}

double NNfunction_sb_sLsR::synapse0x1c7ee40() {
   return (neuron0x1c70760()*-0.0126746);
}

double NNfunction_sb_sLsR::synapse0x1c7ee80() {
   return (neuron0x1c70aa0()*-0.0132637);
}

double NNfunction_sb_sLsR::synapse0x1c7eec0() {
   return (neuron0x1c70de0()*0.0128099);
}

double NNfunction_sb_sLsR::synapse0x1c7ef00() {
   return (neuron0x1c71120()*0.011895);
}

double NNfunction_sb_sLsR::synapse0x1c7f280() {
   return (neuron0x1c6c560()*0.0349696);
}

double NNfunction_sb_sLsR::synapse0x1c7f2c0() {
   return (neuron0x1c6c8a0()*0.154251);
}

double NNfunction_sb_sLsR::synapse0x1c7f300() {
   return (neuron0x1c6cbe0()*0.199594);
}

double NNfunction_sb_sLsR::synapse0x1c7f340() {
   return (neuron0x1c6cf20()*0.0164462);
}

double NNfunction_sb_sLsR::synapse0x1c7f380() {
   return (neuron0x1c6d260()*-0.357005);
}

double NNfunction_sb_sLsR::synapse0x1c7f3c0() {
   return (neuron0x1c6d5a0()*-0.088872);
}

double NNfunction_sb_sLsR::synapse0x1c7f400() {
   return (neuron0x1c6d8e0()*-0.201073);
}

double NNfunction_sb_sLsR::synapse0x1c7f440() {
   return (neuron0x1c6dc20()*-0.242247);
}

double NNfunction_sb_sLsR::synapse0x1c7f480() {
   return (neuron0x1c6df60()*0.0926588);
}

double NNfunction_sb_sLsR::synapse0x1c7f4c0() {
   return (neuron0x1c6e2a0()*0.0190645);
}

double NNfunction_sb_sLsR::synapse0x1c7f500() {
   return (neuron0x1c6e5e0()*-0.164223);
}

double NNfunction_sb_sLsR::synapse0x1c7f540() {
   return (neuron0x1c6e920()*0.130224);
}

double NNfunction_sb_sLsR::synapse0x1c7f580() {
   return (neuron0x1c6ec60()*0.0313607);
}

double NNfunction_sb_sLsR::synapse0x1c7f5c0() {
   return (neuron0x1c6efa0()*0.134443);
}

double NNfunction_sb_sLsR::synapse0x1c7f600() {
   return (neuron0x1c6f2e0()*-0.132884);
}

double NNfunction_sb_sLsR::synapse0x1c7f640() {
   return (neuron0x1c6f620()*0.763726);
}

double NNfunction_sb_sLsR::synapse0x1c7f0d0() {
   return (neuron0x1c6f960()*0.136678);
}

double NNfunction_sb_sLsR::synapse0x1c7f110() {
   return (neuron0x1c6fec0()*0.106788);
}

double NNfunction_sb_sLsR::synapse0x1c7f790() {
   return (neuron0x1c700e0()*0.0744676);
}

double NNfunction_sb_sLsR::synapse0x1c7f7d0() {
   return (neuron0x1c70420()*-0.0324904);
}

double NNfunction_sb_sLsR::synapse0x1c7f810() {
   return (neuron0x1c70760()*-0.0272548);
}

double NNfunction_sb_sLsR::synapse0x1c7f850() {
   return (neuron0x1c70aa0()*0.10165);
}

double NNfunction_sb_sLsR::synapse0x1c7f890() {
   return (neuron0x1c70de0()*0.2172);
}

double NNfunction_sb_sLsR::synapse0x1c7f8d0() {
   return (neuron0x1c71120()*0.1387);
}

double NNfunction_sb_sLsR::synapse0x1c7fc50() {
   return (neuron0x1c6c560()*0.0295253);
}

double NNfunction_sb_sLsR::synapse0x1c7fc90() {
   return (neuron0x1c6c8a0()*-0.00113984);
}

double NNfunction_sb_sLsR::synapse0x1c7fcd0() {
   return (neuron0x1c6cbe0()*0.270009);
}

double NNfunction_sb_sLsR::synapse0x1c7fd10() {
   return (neuron0x1c6cf20()*0.27101);
}

double NNfunction_sb_sLsR::synapse0x1c7fd50() {
   return (neuron0x1c6d260()*-0.00309736);
}

double NNfunction_sb_sLsR::synapse0x1c7fd90() {
   return (neuron0x1c6d5a0()*0.0134984);
}

double NNfunction_sb_sLsR::synapse0x1c7fdd0() {
   return (neuron0x1c6d8e0()*0.0515716);
}

double NNfunction_sb_sLsR::synapse0x1c7fe10() {
   return (neuron0x1c6dc20()*0.0355554);
}

double NNfunction_sb_sLsR::synapse0x1c7fe50() {
   return (neuron0x1c6df60()*0.010023);
}

double NNfunction_sb_sLsR::synapse0x1c78010() {
   return (neuron0x1c6e2a0()*-0.00693527);
}

double NNfunction_sb_sLsR::synapse0x1c78050() {
   return (neuron0x1c6e5e0()*0.0155494);
}

double NNfunction_sb_sLsR::synapse0x1c78090() {
   return (neuron0x1c6e920()*-0.318666);
}

double NNfunction_sb_sLsR::synapse0x1c780d0() {
   return (neuron0x1c6ec60()*-0.113245);
}

double NNfunction_sb_sLsR::synapse0x1c78110() {
   return (neuron0x1c6efa0()*0.0780861);
}

double NNfunction_sb_sLsR::synapse0x1c78150() {
   return (neuron0x1c6f2e0()*-0.263669);
}

double NNfunction_sb_sLsR::synapse0x1c78190() {
   return (neuron0x1c6f620()*-0.114094);
}

double NNfunction_sb_sLsR::synapse0x1c7faa0() {
   return (neuron0x1c6f960()*0.0622573);
}

double NNfunction_sb_sLsR::synapse0x1c7fae0() {
   return (neuron0x1c6fec0()*-0.155424);
}

double NNfunction_sb_sLsR::synapse0x1c782e0() {
   return (neuron0x1c700e0()*0.104418);
}

double NNfunction_sb_sLsR::synapse0x1c78320() {
   return (neuron0x1c70420()*-0.00198399);
}

double NNfunction_sb_sLsR::synapse0x1c78360() {
   return (neuron0x1c70760()*-0.0109662);
}

double NNfunction_sb_sLsR::synapse0x1c783a0() {
   return (neuron0x1c70aa0()*-0.025417);
}

double NNfunction_sb_sLsR::synapse0x1c783e0() {
   return (neuron0x1c70de0()*-0.0313154);
}

double NNfunction_sb_sLsR::synapse0x1c78420() {
   return (neuron0x1c71120()*-0.0131274);
}

double NNfunction_sb_sLsR::synapse0x1c787a0() {
   return (neuron0x1c6c560()*0.012928);
}

double NNfunction_sb_sLsR::synapse0x1c787e0() {
   return (neuron0x1c6c8a0()*-0.00461378);
}

double NNfunction_sb_sLsR::synapse0x1c78820() {
   return (neuron0x1c6cbe0()*0.217765);
}

double NNfunction_sb_sLsR::synapse0x1c78860() {
   return (neuron0x1c6cf20()*0.495259);
}

double NNfunction_sb_sLsR::synapse0x1c788a0() {
   return (neuron0x1c6d260()*-0.0336799);
}

double NNfunction_sb_sLsR::synapse0x1c788e0() {
   return (neuron0x1c6d5a0()*-0.029351);
}

double NNfunction_sb_sLsR::synapse0x1c78920() {
   return (neuron0x1c6d8e0()*-0.030281);
}

double NNfunction_sb_sLsR::synapse0x1c78960() {
   return (neuron0x1c6dc20()*-0.0332337);
}

double NNfunction_sb_sLsR::synapse0x1c789a0() {
   return (neuron0x1c6df60()*-0.0195486);
}

double NNfunction_sb_sLsR::synapse0x1c789e0() {
   return (neuron0x1c6e2a0()*0.000710363);
}

double NNfunction_sb_sLsR::synapse0x1c78a20() {
   return (neuron0x1c6e5e0()*-0.0358328);
}

double NNfunction_sb_sLsR::synapse0x1c78a60() {
   return (neuron0x1c6e920()*-0.122644);
}

double NNfunction_sb_sLsR::synapse0x1c78aa0() {
   return (neuron0x1c6ec60()*0.263521);
}

double NNfunction_sb_sLsR::synapse0x1c78ae0() {
   return (neuron0x1c6efa0()*0.0465341);
}

double NNfunction_sb_sLsR::synapse0x1c78b20() {
   return (neuron0x1c6f2e0()*-0.0447658);
}

double NNfunction_sb_sLsR::synapse0x1c78b60() {
   return (neuron0x1c6f620()*-0.0349772);
}

double NNfunction_sb_sLsR::synapse0x1c785f0() {
   return (neuron0x1c6f960()*-0.00235091);
}

double NNfunction_sb_sLsR::synapse0x1c78630() {
   return (neuron0x1c6fec0()*-0.0626661);
}

double NNfunction_sb_sLsR::synapse0x1c78cb0() {
   return (neuron0x1c700e0()*0.496055);
}

double NNfunction_sb_sLsR::synapse0x1c78cf0() {
   return (neuron0x1c70420()*-0.0271235);
}

double NNfunction_sb_sLsR::synapse0x1c78d30() {
   return (neuron0x1c70760()*-0.025905);
}

double NNfunction_sb_sLsR::synapse0x1c78d70() {
   return (neuron0x1c70aa0()*0.012475);
}

double NNfunction_sb_sLsR::synapse0x1c78db0() {
   return (neuron0x1c70de0()*0.0147986);
}

double NNfunction_sb_sLsR::synapse0x1c78df0() {
   return (neuron0x1c71120()*0.0260192);
}

double NNfunction_sb_sLsR::synapse0x1c78fc0() {
   return (neuron0x1c6c560()*-0.0493135);
}

double NNfunction_sb_sLsR::synapse0x1c82050() {
   return (neuron0x1c6c8a0()*0.357788);
}

double NNfunction_sb_sLsR::synapse0x1c82090() {
   return (neuron0x1c6cbe0()*0.0333536);
}

double NNfunction_sb_sLsR::synapse0x1c820d0() {
   return (neuron0x1c6cf20()*-0.426528);
}

double NNfunction_sb_sLsR::synapse0x1c82110() {
   return (neuron0x1c6d260()*-0.31606);
}

double NNfunction_sb_sLsR::synapse0x1c82150() {
   return (neuron0x1c6d5a0()*0.0421602);
}

double NNfunction_sb_sLsR::synapse0x1c82190() {
   return (neuron0x1c6d8e0()*-0.335988);
}

double NNfunction_sb_sLsR::synapse0x1c821d0() {
   return (neuron0x1c6dc20()*-0.256291);
}

double NNfunction_sb_sLsR::synapse0x1c82210() {
   return (neuron0x1c6df60()*-0.560797);
}

double NNfunction_sb_sLsR::synapse0x1c82250() {
   return (neuron0x1c6e2a0()*0.420915);
}

double NNfunction_sb_sLsR::synapse0x1c82290() {
   return (neuron0x1c6e5e0()*0.701831);
}

double NNfunction_sb_sLsR::synapse0x1c822d0() {
   return (neuron0x1c6e920()*-0.411252);
}

double NNfunction_sb_sLsR::synapse0x1c82310() {
   return (neuron0x1c6ec60()*0.531041);
}

double NNfunction_sb_sLsR::synapse0x1c82350() {
   return (neuron0x1c6efa0()*0.182978);
}

double NNfunction_sb_sLsR::synapse0x1c82390() {
   return (neuron0x1c6f2e0()*-0.531039);
}

double NNfunction_sb_sLsR::synapse0x1c823d0() {
   return (neuron0x1c6f620()*-0.504461);
}

double NNfunction_sb_sLsR::synapse0x1c81ea0() {
   return (neuron0x1c6f960()*0.353284);
}

double NNfunction_sb_sLsR::synapse0x1c81ee0() {
   return (neuron0x1c6fec0()*0.0971511);
}

double NNfunction_sb_sLsR::synapse0x1c82520() {
   return (neuron0x1c700e0()*0.538706);
}

double NNfunction_sb_sLsR::synapse0x1c82560() {
   return (neuron0x1c70420()*0.448106);
}

double NNfunction_sb_sLsR::synapse0x1c825a0() {
   return (neuron0x1c70760()*-0.199147);
}

double NNfunction_sb_sLsR::synapse0x1c825e0() {
   return (neuron0x1c70aa0()*0.00506173);
}

double NNfunction_sb_sLsR::synapse0x1c82620() {
   return (neuron0x1c70de0()*0.367327);
}

double NNfunction_sb_sLsR::synapse0x1c82660() {
   return (neuron0x1c71120()*-0.391676);
}

double NNfunction_sb_sLsR::synapse0x1c829e0() {
   return (neuron0x1c6c560()*-0.19679);
}

double NNfunction_sb_sLsR::synapse0x1c82a20() {
   return (neuron0x1c6c8a0()*0.148182);
}

double NNfunction_sb_sLsR::synapse0x1c82a60() {
   return (neuron0x1c6cbe0()*-0.241985);
}

double NNfunction_sb_sLsR::synapse0x1c82aa0() {
   return (neuron0x1c6cf20()*0.834415);
}

double NNfunction_sb_sLsR::synapse0x1c82ae0() {
   return (neuron0x1c6d260()*0.119619);
}

double NNfunction_sb_sLsR::synapse0x1c82b20() {
   return (neuron0x1c6d5a0()*0.160491);
}

double NNfunction_sb_sLsR::synapse0x1c82b60() {
   return (neuron0x1c6d8e0()*0.0621969);
}

double NNfunction_sb_sLsR::synapse0x1c82ba0() {
   return (neuron0x1c6dc20()*-0.0805073);
}

double NNfunction_sb_sLsR::synapse0x1c82be0() {
   return (neuron0x1c6df60()*-0.128048);
}

double NNfunction_sb_sLsR::synapse0x1c82c20() {
   return (neuron0x1c6e2a0()*0.0289257);
}

double NNfunction_sb_sLsR::synapse0x1c82c60() {
   return (neuron0x1c6e5e0()*-0.0879275);
}

double NNfunction_sb_sLsR::synapse0x1c82ca0() {
   return (neuron0x1c6e920()*-0.478905);
}

double NNfunction_sb_sLsR::synapse0x1c82ce0() {
   return (neuron0x1c6ec60()*-0.0718736);
}

double NNfunction_sb_sLsR::synapse0x1c82d20() {
   return (neuron0x1c6efa0()*-0.0406599);
}

double NNfunction_sb_sLsR::synapse0x1c82d60() {
   return (neuron0x1c6f2e0()*-0.142219);
}

double NNfunction_sb_sLsR::synapse0x1c82da0() {
   return (neuron0x1c6f620()*-0.187799);
}

double NNfunction_sb_sLsR::synapse0x1c82830() {
   return (neuron0x1c6f960()*-0.032275);
}

double NNfunction_sb_sLsR::synapse0x1c82870() {
   return (neuron0x1c6fec0()*-0.110972);
}

double NNfunction_sb_sLsR::synapse0x1c82ef0() {
   return (neuron0x1c700e0()*0.121251);
}

double NNfunction_sb_sLsR::synapse0x1c82f30() {
   return (neuron0x1c70420()*0.0464535);
}

double NNfunction_sb_sLsR::synapse0x1c82f70() {
   return (neuron0x1c70760()*-0.00335004);
}

double NNfunction_sb_sLsR::synapse0x1c82fb0() {
   return (neuron0x1c70aa0()*-0.103579);
}

double NNfunction_sb_sLsR::synapse0x1c82ff0() {
   return (neuron0x1c70de0()*-0.0291179);
}

double NNfunction_sb_sLsR::synapse0x1c83030() {
   return (neuron0x1c71120()*-0.185774);
}

double NNfunction_sb_sLsR::synapse0x1c833b0() {
   return (neuron0x1c6c560()*0.358615);
}

double NNfunction_sb_sLsR::synapse0x1c833f0() {
   return (neuron0x1c6c8a0()*0.0602659);
}

double NNfunction_sb_sLsR::synapse0x1c83430() {
   return (neuron0x1c6cbe0()*0.128757);
}

double NNfunction_sb_sLsR::synapse0x1c83470() {
   return (neuron0x1c6cf20()*1.00029);
}

double NNfunction_sb_sLsR::synapse0x1c834b0() {
   return (neuron0x1c6d260()*0.394103);
}

double NNfunction_sb_sLsR::synapse0x1c834f0() {
   return (neuron0x1c6d5a0()*0.226526);
}

double NNfunction_sb_sLsR::synapse0x1c83530() {
   return (neuron0x1c6d8e0()*0.213416);
}

double NNfunction_sb_sLsR::synapse0x1c83570() {
   return (neuron0x1c6dc20()*-0.0502312);
}

double NNfunction_sb_sLsR::synapse0x1c835b0() {
   return (neuron0x1c6df60()*0.166503);
}

double NNfunction_sb_sLsR::synapse0x1c835f0() {
   return (neuron0x1c6e2a0()*-0.312286);
}

double NNfunction_sb_sLsR::synapse0x1c83630() {
   return (neuron0x1c6e5e0()*-0.31685);
}

double NNfunction_sb_sLsR::synapse0x1c83670() {
   return (neuron0x1c6e920()*0.0706447);
}

double NNfunction_sb_sLsR::synapse0x1c836b0() {
   return (neuron0x1c6ec60()*-0.452436);
}

double NNfunction_sb_sLsR::synapse0x1c836f0() {
   return (neuron0x1c6efa0()*0.125131);
}

double NNfunction_sb_sLsR::synapse0x1c83730() {
   return (neuron0x1c6f2e0()*-0.00244692);
}

double NNfunction_sb_sLsR::synapse0x1c83770() {
   return (neuron0x1c6f620()*-0.109476);
}

double NNfunction_sb_sLsR::synapse0x1c83200() {
   return (neuron0x1c6f960()*-0.0505689);
}

double NNfunction_sb_sLsR::synapse0x1c83240() {
   return (neuron0x1c6fec0()*0.239222);
}

double NNfunction_sb_sLsR::synapse0x1c838c0() {
   return (neuron0x1c700e0()*-0.195397);
}

double NNfunction_sb_sLsR::synapse0x1c83900() {
   return (neuron0x1c70420()*0.152251);
}

double NNfunction_sb_sLsR::synapse0x1c83940() {
   return (neuron0x1c70760()*0.422229);
}

double NNfunction_sb_sLsR::synapse0x1c83980() {
   return (neuron0x1c70aa0()*-0.144111);
}

double NNfunction_sb_sLsR::synapse0x1c839c0() {
   return (neuron0x1c70de0()*0.176474);
}

double NNfunction_sb_sLsR::synapse0x1c83a00() {
   return (neuron0x1c71120()*-0.0481645);
}

double NNfunction_sb_sLsR::synapse0x1c83d80() {
   return (neuron0x1c6c560()*0.347295);
}

double NNfunction_sb_sLsR::synapse0x1c83dc0() {
   return (neuron0x1c6c8a0()*-0.145184);
}

double NNfunction_sb_sLsR::synapse0x1c83e00() {
   return (neuron0x1c6cbe0()*0.357782);
}

double NNfunction_sb_sLsR::synapse0x1c83e40() {
   return (neuron0x1c6cf20()*0.131961);
}

double NNfunction_sb_sLsR::synapse0x1c83e80() {
   return (neuron0x1c6d260()*-0.0325684);
}

double NNfunction_sb_sLsR::synapse0x1c83ec0() {
   return (neuron0x1c6d5a0()*0.414307);
}

double NNfunction_sb_sLsR::synapse0x1c83f00() {
   return (neuron0x1c6d8e0()*-0.0605399);
}

double NNfunction_sb_sLsR::synapse0x1c83f40() {
   return (neuron0x1c6dc20()*-0.029916);
}

double NNfunction_sb_sLsR::synapse0x1c83f80() {
   return (neuron0x1c6df60()*0.520526);
}

double NNfunction_sb_sLsR::synapse0x1c83fc0() {
   return (neuron0x1c6e2a0()*-0.132821);
}

double NNfunction_sb_sLsR::synapse0x1c84000() {
   return (neuron0x1c6e5e0()*0.0550665);
}

double NNfunction_sb_sLsR::synapse0x1c84040() {
   return (neuron0x1c6e920()*-0.139047);
}

double NNfunction_sb_sLsR::synapse0x1c84080() {
   return (neuron0x1c6ec60()*0.39071);
}

double NNfunction_sb_sLsR::synapse0x1c840c0() {
   return (neuron0x1c6efa0()*-0.245602);
}

double NNfunction_sb_sLsR::synapse0x1c84100() {
   return (neuron0x1c6f2e0()*-0.347912);
}

double NNfunction_sb_sLsR::synapse0x1c84140() {
   return (neuron0x1c6f620()*-0.382233);
}

double NNfunction_sb_sLsR::synapse0x1c83bd0() {
   return (neuron0x1c6f960()*-0.168719);
}

double NNfunction_sb_sLsR::synapse0x1c83c10() {
   return (neuron0x1c6fec0()*0.0150511);
}

double NNfunction_sb_sLsR::synapse0x1c84290() {
   return (neuron0x1c700e0()*0.11274);
}

double NNfunction_sb_sLsR::synapse0x1c842d0() {
   return (neuron0x1c70420()*-0.200123);
}

double NNfunction_sb_sLsR::synapse0x1c84310() {
   return (neuron0x1c70760()*-0.327372);
}

double NNfunction_sb_sLsR::synapse0x1c84350() {
   return (neuron0x1c70aa0()*0.0646891);
}

double NNfunction_sb_sLsR::synapse0x1c84390() {
   return (neuron0x1c70de0()*0.113705);
}

double NNfunction_sb_sLsR::synapse0x1c843d0() {
   return (neuron0x1c71120()*-0.155692);
}

double NNfunction_sb_sLsR::synapse0x1c84750() {
   return (neuron0x1c6c560()*0.0145676);
}

double NNfunction_sb_sLsR::synapse0x1c84790() {
   return (neuron0x1c6c8a0()*0.0294772);
}

double NNfunction_sb_sLsR::synapse0x1c847d0() {
   return (neuron0x1c6cbe0()*0.0125946);
}

double NNfunction_sb_sLsR::synapse0x1c84810() {
   return (neuron0x1c6cf20()*-15.7135);
}

double NNfunction_sb_sLsR::synapse0x1c84850() {
   return (neuron0x1c6d260()*-0.0193826);
}

double NNfunction_sb_sLsR::synapse0x1c84890() {
   return (neuron0x1c6d5a0()*0.01387);
}

double NNfunction_sb_sLsR::synapse0x1c848d0() {
   return (neuron0x1c6d8e0()*0.0495496);
}

double NNfunction_sb_sLsR::synapse0x1c84910() {
   return (neuron0x1c6dc20()*-0.00524785);
}

double NNfunction_sb_sLsR::synapse0x1c84950() {
   return (neuron0x1c6df60()*0.0411648);
}

double NNfunction_sb_sLsR::synapse0x1c84990() {
   return (neuron0x1c6e2a0()*0.0297521);
}

double NNfunction_sb_sLsR::synapse0x1c849d0() {
   return (neuron0x1c6e5e0()*0.0102928);
}

double NNfunction_sb_sLsR::synapse0x1c84a10() {
   return (neuron0x1c6e920()*-0.0434991);
}

double NNfunction_sb_sLsR::synapse0x1c84a50() {
   return (neuron0x1c6ec60()*0.18459);
}

double NNfunction_sb_sLsR::synapse0x1c84a90() {
   return (neuron0x1c6efa0()*0.0237837);
}

double NNfunction_sb_sLsR::synapse0x1c84ad0() {
   return (neuron0x1c6f2e0()*-0.0173449);
}

double NNfunction_sb_sLsR::synapse0x1c84b10() {
   return (neuron0x1c6f620()*-0.00327616);
}

double NNfunction_sb_sLsR::synapse0x1c845a0() {
   return (neuron0x1c6f960()*0.012173);
}

double NNfunction_sb_sLsR::synapse0x1c845e0() {
   return (neuron0x1c6fec0()*0.0291179);
}

double NNfunction_sb_sLsR::synapse0x1c84c60() {
   return (neuron0x1c700e0()*0.248698);
}

double NNfunction_sb_sLsR::synapse0x1c84ca0() {
   return (neuron0x1c70420()*0.00156362);
}

double NNfunction_sb_sLsR::synapse0x1c84ce0() {
   return (neuron0x1c70760()*-0.0100999);
}

double NNfunction_sb_sLsR::synapse0x1c84d20() {
   return (neuron0x1c70aa0()*-0.0221406);
}

double NNfunction_sb_sLsR::synapse0x1c84d60() {
   return (neuron0x1c70de0()*0.0135836);
}

double NNfunction_sb_sLsR::synapse0x1c84da0() {
   return (neuron0x1c71120()*-0.0181762);
}

double NNfunction_sb_sLsR::synapse0x1c85120() {
   return (neuron0x1c6c560()*0.0052269);
}

double NNfunction_sb_sLsR::synapse0x1c85160() {
   return (neuron0x1c6c8a0()*-0.260146);
}

double NNfunction_sb_sLsR::synapse0x1c851a0() {
   return (neuron0x1c6cbe0()*-0.565938);
}

double NNfunction_sb_sLsR::synapse0x1c851e0() {
   return (neuron0x1c6cf20()*-0.91005);
}

double NNfunction_sb_sLsR::synapse0x1c85220() {
   return (neuron0x1c6d260()*-0.402017);
}

double NNfunction_sb_sLsR::synapse0x1c85260() {
   return (neuron0x1c6d5a0()*-0.0331491);
}

double NNfunction_sb_sLsR::synapse0x1c852a0() {
   return (neuron0x1c6d8e0()*0.0282883);
}

double NNfunction_sb_sLsR::synapse0x1c852e0() {
   return (neuron0x1c6dc20()*0.572657);
}

double NNfunction_sb_sLsR::synapse0x1c85320() {
   return (neuron0x1c6df60()*0.0702274);
}

double NNfunction_sb_sLsR::synapse0x1c85360() {
   return (neuron0x1c6e2a0()*-0.0494097);
}

double NNfunction_sb_sLsR::synapse0x1c853a0() {
   return (neuron0x1c6e5e0()*-0.0451103);
}

double NNfunction_sb_sLsR::synapse0x1c853e0() {
   return (neuron0x1c6e920()*-0.375579);
}

double NNfunction_sb_sLsR::synapse0x1c85420() {
   return (neuron0x1c6ec60()*0.390575);
}

double NNfunction_sb_sLsR::synapse0x1c85460() {
   return (neuron0x1c6efa0()*0.307487);
}

double NNfunction_sb_sLsR::synapse0x1c854a0() {
   return (neuron0x1c6f2e0()*-0.25318);
}

double NNfunction_sb_sLsR::synapse0x1c854e0() {
   return (neuron0x1c6f620()*0.100051);
}

double NNfunction_sb_sLsR::synapse0x1c84f70() {
   return (neuron0x1c6f960()*0.532455);
}

double NNfunction_sb_sLsR::synapse0x1c84fb0() {
   return (neuron0x1c6fec0()*-0.0415984);
}

double NNfunction_sb_sLsR::synapse0x1c85630() {
   return (neuron0x1c700e0()*-0.116907);
}

double NNfunction_sb_sLsR::synapse0x1c85670() {
   return (neuron0x1c70420()*-0.0943937);
}

double NNfunction_sb_sLsR::synapse0x1c856b0() {
   return (neuron0x1c70760()*-0.228495);
}

double NNfunction_sb_sLsR::synapse0x1c856f0() {
   return (neuron0x1c70aa0()*-0.261423);
}

double NNfunction_sb_sLsR::synapse0x1c85730() {
   return (neuron0x1c70de0()*0.270115);
}

double NNfunction_sb_sLsR::synapse0x1c85770() {
   return (neuron0x1c71120()*-0.0712453);
}

double NNfunction_sb_sLsR::synapse0x1c85af0() {
   return (neuron0x1c6c560()*0.345913);
}

double NNfunction_sb_sLsR::synapse0x1c85b30() {
   return (neuron0x1c6c8a0()*0.250764);
}

double NNfunction_sb_sLsR::synapse0x1c85b70() {
   return (neuron0x1c6cbe0()*-0.333121);
}

double NNfunction_sb_sLsR::synapse0x1c85bb0() {
   return (neuron0x1c6cf20()*0.880511);
}

double NNfunction_sb_sLsR::synapse0x1c85bf0() {
   return (neuron0x1c6d260()*0.142701);
}

double NNfunction_sb_sLsR::synapse0x1c85c30() {
   return (neuron0x1c6d5a0()*0.0120679);
}

double NNfunction_sb_sLsR::synapse0x1c85c70() {
   return (neuron0x1c6d8e0()*0.269772);
}

double NNfunction_sb_sLsR::synapse0x1c85cb0() {
   return (neuron0x1c6dc20()*-0.0753746);
}

double NNfunction_sb_sLsR::synapse0x1c85cf0() {
   return (neuron0x1c6df60()*0.0689212);
}

double NNfunction_sb_sLsR::synapse0x1c85d30() {
   return (neuron0x1c6e2a0()*-0.233532);
}

double NNfunction_sb_sLsR::synapse0x1c85d70() {
   return (neuron0x1c6e5e0()*-0.0777381);
}

double NNfunction_sb_sLsR::synapse0x1c85db0() {
   return (neuron0x1c6e920()*0.121326);
}

double NNfunction_sb_sLsR::synapse0x1c85df0() {
   return (neuron0x1c6ec60()*0.233466);
}

double NNfunction_sb_sLsR::synapse0x1c85e30() {
   return (neuron0x1c6efa0()*0.108826);
}

double NNfunction_sb_sLsR::synapse0x1c85e70() {
   return (neuron0x1c6f2e0()*-0.16124);
}

double NNfunction_sb_sLsR::synapse0x1c85eb0() {
   return (neuron0x1c6f620()*0.0299466);
}

double NNfunction_sb_sLsR::synapse0x1c85940() {
   return (neuron0x1c6f960()*-0.0260958);
}

double NNfunction_sb_sLsR::synapse0x1c85980() {
   return (neuron0x1c6fec0()*0.14692);
}

double NNfunction_sb_sLsR::synapse0x1c86000() {
   return (neuron0x1c700e0()*0.39094);
}

double NNfunction_sb_sLsR::synapse0x1c86040() {
   return (neuron0x1c70420()*0.00934417);
}

double NNfunction_sb_sLsR::synapse0x1c86080() {
   return (neuron0x1c70760()*0.284845);
}

double NNfunction_sb_sLsR::synapse0x1c860c0() {
   return (neuron0x1c70aa0()*-0.10969);
}

double NNfunction_sb_sLsR::synapse0x1c86100() {
   return (neuron0x1c70de0()*0.197039);
}

double NNfunction_sb_sLsR::synapse0x1c86140() {
   return (neuron0x1c71120()*-0.110574);
}

double NNfunction_sb_sLsR::synapse0x1c864c0() {
   return (neuron0x1c6c560()*0.0263355);
}

double NNfunction_sb_sLsR::synapse0x1c86500() {
   return (neuron0x1c6c8a0()*-0.0911154);
}

double NNfunction_sb_sLsR::synapse0x1c86540() {
   return (neuron0x1c6cbe0()*-0.0932507);
}

double NNfunction_sb_sLsR::synapse0x1c86580() {
   return (neuron0x1c6cf20()*-0.574452);
}

double NNfunction_sb_sLsR::synapse0x1c865c0() {
   return (neuron0x1c6d260()*0.114389);
}

double NNfunction_sb_sLsR::synapse0x1c86600() {
   return (neuron0x1c6d5a0()*-0.0939056);
}

double NNfunction_sb_sLsR::synapse0x1c86640() {
   return (neuron0x1c6d8e0()*-0.00677124);
}

double NNfunction_sb_sLsR::synapse0x1c86680() {
   return (neuron0x1c6dc20()*0.078136);
}

double NNfunction_sb_sLsR::synapse0x1c866c0() {
   return (neuron0x1c6df60()*0.148204);
}

double NNfunction_sb_sLsR::synapse0x1c86700() {
   return (neuron0x1c6e2a0()*0.0677245);
}

double NNfunction_sb_sLsR::synapse0x1c86740() {
   return (neuron0x1c6e5e0()*-0.0556291);
}

double NNfunction_sb_sLsR::synapse0x1c86780() {
   return (neuron0x1c6e920()*0.149192);
}

double NNfunction_sb_sLsR::synapse0x1c867c0() {
   return (neuron0x1c6ec60()*0.337318);
}

double NNfunction_sb_sLsR::synapse0x1c86800() {
   return (neuron0x1c6efa0()*-0.102921);
}

double NNfunction_sb_sLsR::synapse0x1c86840() {
   return (neuron0x1c6f2e0()*0.083519);
}

double NNfunction_sb_sLsR::synapse0x1c86880() {
   return (neuron0x1c6f620()*0.0207274);
}

double NNfunction_sb_sLsR::synapse0x1c86310() {
   return (neuron0x1c6f960()*-0.0268131);
}

double NNfunction_sb_sLsR::synapse0x1c86350() {
   return (neuron0x1c6fec0()*0.225897);
}

double NNfunction_sb_sLsR::synapse0x1c869d0() {
   return (neuron0x1c700e0()*0.816946);
}

double NNfunction_sb_sLsR::synapse0x1c86a10() {
   return (neuron0x1c70420()*0.22113);
}

double NNfunction_sb_sLsR::synapse0x1c86a50() {
   return (neuron0x1c70760()*-0.0211773);
}

double NNfunction_sb_sLsR::synapse0x1c86a90() {
   return (neuron0x1c70aa0()*-0.0813841);
}

double NNfunction_sb_sLsR::synapse0x1c86ad0() {
   return (neuron0x1c70de0()*-0.0357889);
}

double NNfunction_sb_sLsR::synapse0x1c86b10() {
   return (neuron0x1c71120()*0.051119);
}

double NNfunction_sb_sLsR::synapse0x1c86e90() {
   return (neuron0x1c6c560()*-0.180428);
}

double NNfunction_sb_sLsR::synapse0x1c7b460() {
   return (neuron0x1c6c8a0()*-0.27621);
}

double NNfunction_sb_sLsR::synapse0x1c7b4a0() {
   return (neuron0x1c6cbe0()*-0.325704);
}

double NNfunction_sb_sLsR::synapse0x1c7b4e0() {
   return (neuron0x1c6cf20()*-0.0255947);
}

double NNfunction_sb_sLsR::synapse0x1c7b730() {
   return (neuron0x1c6d260()*0.323801);
}

double NNfunction_sb_sLsR::synapse0x1c7b770() {
   return (neuron0x1c6d5a0()*0.0116669);
}

double NNfunction_sb_sLsR::synapse0x1c7b7b0() {
   return (neuron0x1c6d8e0()*-0.371278);
}

double NNfunction_sb_sLsR::synapse0x1c7ba00() {
   return (neuron0x1c6dc20()*0.139186);
}

double NNfunction_sb_sLsR::synapse0x1c7ba40() {
   return (neuron0x1c6df60()*0.13226);
}

double NNfunction_sb_sLsR::synapse0x1c7bc90() {
   return (neuron0x1c6e2a0()*-0.0595849);
}

double NNfunction_sb_sLsR::synapse0x1c7bcd0() {
   return (neuron0x1c6e5e0()*-0.273577);
}

double NNfunction_sb_sLsR::synapse0x1c7bd10() {
   return (neuron0x1c6e920()*0.23535);
}

double NNfunction_sb_sLsR::synapse0x1c7bf60() {
   return (neuron0x1c6ec60()*-0.592512);
}

double NNfunction_sb_sLsR::synapse0x1c7bfa0() {
   return (neuron0x1c6efa0()*-0.184427);
}

double NNfunction_sb_sLsR::synapse0x1c7c1f0() {
   return (neuron0x1c6f2e0()*0.921412);
}

double NNfunction_sb_sLsR::synapse0x1c7c230() {
   return (neuron0x1c6f620()*0.485353);
}

double NNfunction_sb_sLsR::synapse0x1c86ce0() {
   return (neuron0x1c6f960()*-0.689113);
}

double NNfunction_sb_sLsR::synapse0x1c86d20() {
   return (neuron0x1c6fec0()*0.195458);
}

double NNfunction_sb_sLsR::synapse0x1c7c380() {
   return (neuron0x1c700e0()*0.109844);
}

double NNfunction_sb_sLsR::synapse0x1c7c890() {
   return (neuron0x1c70420()*0.442337);
}

double NNfunction_sb_sLsR::synapse0x1c7c8d0() {
   return (neuron0x1c70760()*-0.350795);
}

double NNfunction_sb_sLsR::synapse0x1c7c910() {
   return (neuron0x1c70aa0()*-0.240777);
}

double NNfunction_sb_sLsR::synapse0x1c7cb60() {
   return (neuron0x1c70de0()*-0.119467);
}

double NNfunction_sb_sLsR::synapse0x1c7cba0() {
   return (neuron0x1c71120()*0.114334);
}

double NNfunction_sb_sLsR::synapse0x1c7c450() {
   return (neuron0x1c6c560()*0.0339438);
}

double NNfunction_sb_sLsR::synapse0x1c7c490() {
   return (neuron0x1c6c8a0()*0.193677);
}

double NNfunction_sb_sLsR::synapse0x1c7c4d0() {
   return (neuron0x1c6cbe0()*-0.225142);
}

double NNfunction_sb_sLsR::synapse0x1c7c510() {
   return (neuron0x1c6cf20()*-0.227229);
}

double NNfunction_sb_sLsR::synapse0x1c7ce90() {
   return (neuron0x1c6d260()*-0.0110899);
}

double NNfunction_sb_sLsR::synapse0x1c891e0() {
   return (neuron0x1c6d5a0()*0.0446207);
}

double NNfunction_sb_sLsR::synapse0x1c89220() {
   return (neuron0x1c6d8e0()*-0.126688);
}

double NNfunction_sb_sLsR::synapse0x1c89260() {
   return (neuron0x1c6dc20()*0.546029);
}

double NNfunction_sb_sLsR::synapse0x1c892a0() {
   return (neuron0x1c6df60()*-0.079703);
}

double NNfunction_sb_sLsR::synapse0x1c892e0() {
   return (neuron0x1c6e2a0()*0.0250031);
}

double NNfunction_sb_sLsR::synapse0x1c89320() {
   return (neuron0x1c6e5e0()*-0.00241146);
}

double NNfunction_sb_sLsR::synapse0x1c89360() {
   return (neuron0x1c6e920()*-0.311169);
}

double NNfunction_sb_sLsR::synapse0x1c893a0() {
   return (neuron0x1c6ec60()*0.862431);
}

double NNfunction_sb_sLsR::synapse0x1c893e0() {
   return (neuron0x1c6efa0()*0.1513);
}

double NNfunction_sb_sLsR::synapse0x1c89420() {
   return (neuron0x1c6f2e0()*0.0425841);
}

double NNfunction_sb_sLsR::synapse0x1c89460() {
   return (neuron0x1c6f620()*0.966782);
}

double NNfunction_sb_sLsR::synapse0x1c7cd70() {
   return (neuron0x1c6f960()*0.243121);
}

double NNfunction_sb_sLsR::synapse0x1c7cdb0() {
   return (neuron0x1c6fec0()*-0.0327769);
}

double NNfunction_sb_sLsR::synapse0x1c895b0() {
   return (neuron0x1c700e0()*0.305295);
}

double NNfunction_sb_sLsR::synapse0x1c895f0() {
   return (neuron0x1c70420()*-0.108133);
}

double NNfunction_sb_sLsR::synapse0x1c89630() {
   return (neuron0x1c70760()*0.327083);
}

double NNfunction_sb_sLsR::synapse0x1c89670() {
   return (neuron0x1c70aa0()*0.202768);
}

double NNfunction_sb_sLsR::synapse0x1c896b0() {
   return (neuron0x1c70de0()*-0.0675051);
}

double NNfunction_sb_sLsR::synapse0x1c896f0() {
   return (neuron0x1c71120()*0.084357);
}

double NNfunction_sb_sLsR::synapse0x1c89a70() {
   return (neuron0x1c6c560()*-0.172011);
}

double NNfunction_sb_sLsR::synapse0x1c89ab0() {
   return (neuron0x1c6c8a0()*-0.0276071);
}

double NNfunction_sb_sLsR::synapse0x1c89af0() {
   return (neuron0x1c6cbe0()*0.076509);
}

double NNfunction_sb_sLsR::synapse0x1c89b30() {
   return (neuron0x1c6cf20()*-0.172541);
}

double NNfunction_sb_sLsR::synapse0x1c89b70() {
   return (neuron0x1c6d260()*-0.0942636);
}

double NNfunction_sb_sLsR::synapse0x1c89bb0() {
   return (neuron0x1c6d5a0()*-0.161794);
}

double NNfunction_sb_sLsR::synapse0x1c89bf0() {
   return (neuron0x1c6d8e0()*0.0499093);
}

double NNfunction_sb_sLsR::synapse0x1c89c30() {
   return (neuron0x1c6dc20()*0.114375);
}

double NNfunction_sb_sLsR::synapse0x1c89c70() {
   return (neuron0x1c6df60()*0.222481);
}

double NNfunction_sb_sLsR::synapse0x1c89cb0() {
   return (neuron0x1c6e2a0()*-0.104575);
}

double NNfunction_sb_sLsR::synapse0x1c89cf0() {
   return (neuron0x1c6e5e0()*0.00808915);
}

double NNfunction_sb_sLsR::synapse0x1c89d30() {
   return (neuron0x1c6e920()*0.522001);
}

double NNfunction_sb_sLsR::synapse0x1c89d70() {
   return (neuron0x1c6ec60()*0.163588);
}

double NNfunction_sb_sLsR::synapse0x1c89db0() {
   return (neuron0x1c6efa0()*-0.509848);
}

double NNfunction_sb_sLsR::synapse0x1c89df0() {
   return (neuron0x1c6f2e0()*0.0635118);
}

double NNfunction_sb_sLsR::synapse0x1c89e30() {
   return (neuron0x1c6f620()*-0.274262);
}

double NNfunction_sb_sLsR::synapse0x1c898c0() {
   return (neuron0x1c6f960()*-0.340668);
}

double NNfunction_sb_sLsR::synapse0x1c89900() {
   return (neuron0x1c6fec0()*0.0923793);
}

double NNfunction_sb_sLsR::synapse0x1c89f80() {
   return (neuron0x1c700e0()*0.441074);
}

double NNfunction_sb_sLsR::synapse0x1c89fc0() {
   return (neuron0x1c70420()*-0.646805);
}

double NNfunction_sb_sLsR::synapse0x1c8a000() {
   return (neuron0x1c70760()*-0.00470235);
}

double NNfunction_sb_sLsR::synapse0x1c8a040() {
   return (neuron0x1c70aa0()*0.0677481);
}

double NNfunction_sb_sLsR::synapse0x1c8a080() {
   return (neuron0x1c70de0()*0.165023);
}

double NNfunction_sb_sLsR::synapse0x1c8a0c0() {
   return (neuron0x1c71120()*0.408213);
}

double NNfunction_sb_sLsR::synapse0x1c8a440() {
   return (neuron0x1c6c560()*-0.000420321);
}

double NNfunction_sb_sLsR::synapse0x1c8a480() {
   return (neuron0x1c6c8a0()*0.0437465);
}

double NNfunction_sb_sLsR::synapse0x1c8a4c0() {
   return (neuron0x1c6cbe0()*0.0386524);
}

double NNfunction_sb_sLsR::synapse0x1c8a500() {
   return (neuron0x1c6cf20()*-0.427492);
}

double NNfunction_sb_sLsR::synapse0x1c8a540() {
   return (neuron0x1c6d260()*0.0606201);
}

double NNfunction_sb_sLsR::synapse0x1c8a580() {
   return (neuron0x1c6d5a0()*0.125108);
}

double NNfunction_sb_sLsR::synapse0x1c8a5c0() {
   return (neuron0x1c6d8e0()*-0.051523);
}

double NNfunction_sb_sLsR::synapse0x1c8a600() {
   return (neuron0x1c6dc20()*-0.0132193);
}

double NNfunction_sb_sLsR::synapse0x1c8a640() {
   return (neuron0x1c6df60()*-0.00873769);
}

double NNfunction_sb_sLsR::synapse0x1c8a680() {
   return (neuron0x1c6e2a0()*-0.399521);
}

double NNfunction_sb_sLsR::synapse0x1c8a6c0() {
   return (neuron0x1c6e5e0()*0.124134);
}

double NNfunction_sb_sLsR::synapse0x1c8a700() {
   return (neuron0x1c6e920()*0.0466389);
}

double NNfunction_sb_sLsR::synapse0x1c8a740() {
   return (neuron0x1c6ec60()*0.738581);
}

double NNfunction_sb_sLsR::synapse0x1c8a780() {
   return (neuron0x1c6efa0()*0.166923);
}

double NNfunction_sb_sLsR::synapse0x1c8a7c0() {
   return (neuron0x1c6f2e0()*0.118432);
}

double NNfunction_sb_sLsR::synapse0x1c8a800() {
   return (neuron0x1c6f620()*0.0329648);
}

double NNfunction_sb_sLsR::synapse0x1c8a290() {
   return (neuron0x1c6f960()*0.110583);
}

double NNfunction_sb_sLsR::synapse0x1c8a2d0() {
   return (neuron0x1c6fec0()*-0.0520667);
}

double NNfunction_sb_sLsR::synapse0x1c8a950() {
   return (neuron0x1c700e0()*0.586942);
}

double NNfunction_sb_sLsR::synapse0x1c8a990() {
   return (neuron0x1c70420()*-0.09931);
}

double NNfunction_sb_sLsR::synapse0x1c8a9d0() {
   return (neuron0x1c70760()*0.112129);
}

double NNfunction_sb_sLsR::synapse0x1c8aa10() {
   return (neuron0x1c70aa0()*0.183318);
}

double NNfunction_sb_sLsR::synapse0x1c8aa50() {
   return (neuron0x1c70de0()*-0.0068937);
}

double NNfunction_sb_sLsR::synapse0x1c8aa90() {
   return (neuron0x1c71120()*-0.0245643);
}

double NNfunction_sb_sLsR::synapse0x1c8ae10() {
   return (neuron0x1c6c560()*-0.368282);
}

double NNfunction_sb_sLsR::synapse0x1c8ae50() {
   return (neuron0x1c6c8a0()*-0.248081);
}

double NNfunction_sb_sLsR::synapse0x1c8ae90() {
   return (neuron0x1c6cbe0()*-0.410606);
}

double NNfunction_sb_sLsR::synapse0x1c8aed0() {
   return (neuron0x1c6cf20()*-0.379406);
}

double NNfunction_sb_sLsR::synapse0x1c8af10() {
   return (neuron0x1c6d260()*-0.179239);
}

double NNfunction_sb_sLsR::synapse0x1c8af50() {
   return (neuron0x1c6d5a0()*0.0486579);
}

double NNfunction_sb_sLsR::synapse0x1c8af90() {
   return (neuron0x1c6d8e0()*0.0220746);
}

double NNfunction_sb_sLsR::synapse0x1c8afd0() {
   return (neuron0x1c6dc20()*0.464582);
}

double NNfunction_sb_sLsR::synapse0x1c8b010() {
   return (neuron0x1c6df60()*-0.343691);
}

double NNfunction_sb_sLsR::synapse0x1c8b050() {
   return (neuron0x1c6e2a0()*-0.484018);
}

double NNfunction_sb_sLsR::synapse0x1c8b090() {
   return (neuron0x1c6e5e0()*0.440936);
}

double NNfunction_sb_sLsR::synapse0x1c8b0d0() {
   return (neuron0x1c6e920()*1.06466);
}

double NNfunction_sb_sLsR::synapse0x1c8b110() {
   return (neuron0x1c6ec60()*0.350262);
}

double NNfunction_sb_sLsR::synapse0x1c8b150() {
   return (neuron0x1c6efa0()*0.891847);
}

double NNfunction_sb_sLsR::synapse0x1c8b190() {
   return (neuron0x1c6f2e0()*-0.22492);
}

double NNfunction_sb_sLsR::synapse0x1c8b1d0() {
   return (neuron0x1c6f620()*-0.274946);
}

double NNfunction_sb_sLsR::synapse0x1c8ac60() {
   return (neuron0x1c6f960()*-0.334589);
}

double NNfunction_sb_sLsR::synapse0x1c8aca0() {
   return (neuron0x1c6fec0()*0.641227);
}

double NNfunction_sb_sLsR::synapse0x1c8b320() {
   return (neuron0x1c700e0()*0.242811);
}

double NNfunction_sb_sLsR::synapse0x1c8b360() {
   return (neuron0x1c70420()*0.46127);
}

double NNfunction_sb_sLsR::synapse0x1c8b3a0() {
   return (neuron0x1c70760()*0.26735);
}

double NNfunction_sb_sLsR::synapse0x1c8b3e0() {
   return (neuron0x1c70aa0()*-0.164226);
}

double NNfunction_sb_sLsR::synapse0x1c8b420() {
   return (neuron0x1c70de0()*-0.136982);
}

double NNfunction_sb_sLsR::synapse0x1c8b460() {
   return (neuron0x1c71120()*-0.0795324);
}

double NNfunction_sb_sLsR::synapse0x1c8b7e0() {
   return (neuron0x1c6c560()*0.610267);
}

double NNfunction_sb_sLsR::synapse0x1c8b820() {
   return (neuron0x1c6c8a0()*0.339719);
}

double NNfunction_sb_sLsR::synapse0x1c8b860() {
   return (neuron0x1c6cbe0()*0.235228);
}

double NNfunction_sb_sLsR::synapse0x1c8b8a0() {
   return (neuron0x1c6cf20()*0.514496);
}

double NNfunction_sb_sLsR::synapse0x1c8b8e0() {
   return (neuron0x1c6d260()*-0.654942);
}

double NNfunction_sb_sLsR::synapse0x1c8b920() {
   return (neuron0x1c6d5a0()*-0.245256);
}

double NNfunction_sb_sLsR::synapse0x1c8b960() {
   return (neuron0x1c6d8e0()*-0.807598);
}

double NNfunction_sb_sLsR::synapse0x1c8b9a0() {
   return (neuron0x1c6dc20()*0.0485467);
}

double NNfunction_sb_sLsR::synapse0x1c8b9e0() {
   return (neuron0x1c6df60()*0.42998);
}

double NNfunction_sb_sLsR::synapse0x1c8ba20() {
   return (neuron0x1c6e2a0()*0.401871);
}

double NNfunction_sb_sLsR::synapse0x1c8ba60() {
   return (neuron0x1c6e5e0()*-0.461823);
}

double NNfunction_sb_sLsR::synapse0x1c8baa0() {
   return (neuron0x1c6e920()*-0.45927);
}

double NNfunction_sb_sLsR::synapse0x1c8bae0() {
   return (neuron0x1c6ec60()*-0.498551);
}

double NNfunction_sb_sLsR::synapse0x1c8bb20() {
   return (neuron0x1c6efa0()*-0.353307);
}

double NNfunction_sb_sLsR::synapse0x1c8bb60() {
   return (neuron0x1c6f2e0()*0.22691);
}

double NNfunction_sb_sLsR::synapse0x1c8bba0() {
   return (neuron0x1c6f620()*-0.628765);
}

double NNfunction_sb_sLsR::synapse0x1c8b630() {
   return (neuron0x1c6f960()*0.0559168);
}

double NNfunction_sb_sLsR::synapse0x1c8b670() {
   return (neuron0x1c6fec0()*0.0752727);
}

double NNfunction_sb_sLsR::synapse0x1c8bcf0() {
   return (neuron0x1c700e0()*0.164625);
}

double NNfunction_sb_sLsR::synapse0x1c8bd30() {
   return (neuron0x1c70420()*0.371822);
}

double NNfunction_sb_sLsR::synapse0x1c8bd70() {
   return (neuron0x1c70760()*-0.0506463);
}

double NNfunction_sb_sLsR::synapse0x1c8bdb0() {
   return (neuron0x1c70aa0()*0.484948);
}

double NNfunction_sb_sLsR::synapse0x1c8bdf0() {
   return (neuron0x1c70de0()*-0.28228);
}

double NNfunction_sb_sLsR::synapse0x1c8be30() {
   return (neuron0x1c71120()*-0.141499);
}

double NNfunction_sb_sLsR::synapse0x1c8c1b0() {
   return (neuron0x1c6c560()*0.0151356);
}

double NNfunction_sb_sLsR::synapse0x1c8c1f0() {
   return (neuron0x1c6c8a0()*0.0109829);
}

double NNfunction_sb_sLsR::synapse0x1c8c230() {
   return (neuron0x1c6cbe0()*0.0141274);
}

double NNfunction_sb_sLsR::synapse0x1c8c270() {
   return (neuron0x1c6cf20()*-0.414529);
}

double NNfunction_sb_sLsR::synapse0x1c8c2b0() {
   return (neuron0x1c6d260()*0.00753031);
}

double NNfunction_sb_sLsR::synapse0x1c8c2f0() {
   return (neuron0x1c6d5a0()*-0.0128881);
}

double NNfunction_sb_sLsR::synapse0x1c8c330() {
   return (neuron0x1c6d8e0()*-0.0174967);
}

double NNfunction_sb_sLsR::synapse0x1c8c370() {
   return (neuron0x1c6dc20()*-0.0330598);
}

double NNfunction_sb_sLsR::synapse0x1c8c3b0() {
   return (neuron0x1c6df60()*-0.01049);
}

double NNfunction_sb_sLsR::synapse0x1c8c3f0() {
   return (neuron0x1c6e2a0()*-0.0082604);
}

double NNfunction_sb_sLsR::synapse0x1c8c430() {
   return (neuron0x1c6e5e0()*-0.0815639);
}

double NNfunction_sb_sLsR::synapse0x1c8c470() {
   return (neuron0x1c6e920()*-0.00955442);
}

double NNfunction_sb_sLsR::synapse0x1c8c4b0() {
   return (neuron0x1c6ec60()*-0.222505);
}

double NNfunction_sb_sLsR::synapse0x1c8c4f0() {
   return (neuron0x1c6efa0()*0.0544481);
}

double NNfunction_sb_sLsR::synapse0x1c8c530() {
   return (neuron0x1c6f2e0()*0.0579865);
}

double NNfunction_sb_sLsR::synapse0x1c8c570() {
   return (neuron0x1c6f620()*0.0186944);
}

double NNfunction_sb_sLsR::synapse0x1c8c000() {
   return (neuron0x1c6f960()*0.0466323);
}

double NNfunction_sb_sLsR::synapse0x1c8c040() {
   return (neuron0x1c6fec0()*0.0756495);
}

double NNfunction_sb_sLsR::synapse0x1c8c6c0() {
   return (neuron0x1c700e0()*-0.348465);
}

double NNfunction_sb_sLsR::synapse0x1c8c700() {
   return (neuron0x1c70420()*0.02295);
}

double NNfunction_sb_sLsR::synapse0x1c8c740() {
   return (neuron0x1c70760()*-0.00993796);
}

double NNfunction_sb_sLsR::synapse0x1c8c780() {
   return (neuron0x1c70aa0()*0.004309);
}

double NNfunction_sb_sLsR::synapse0x1c8c7c0() {
   return (neuron0x1c70de0()*0.023676);
}

double NNfunction_sb_sLsR::synapse0x1c8c800() {
   return (neuron0x1c71120()*0.0302141);
}

double NNfunction_sb_sLsR::synapse0x1c8cb80() {
   return (neuron0x1c6c560()*0.000110596);
}

double NNfunction_sb_sLsR::synapse0x1c8cbc0() {
   return (neuron0x1c6c8a0()*0.251413);
}

double NNfunction_sb_sLsR::synapse0x1c8cc00() {
   return (neuron0x1c6cbe0()*-0.460861);
}

double NNfunction_sb_sLsR::synapse0x1c8cc40() {
   return (neuron0x1c6cf20()*0.47165);
}

double NNfunction_sb_sLsR::synapse0x1c8cc80() {
   return (neuron0x1c6d260()*0.0371033);
}

double NNfunction_sb_sLsR::synapse0x1c8ccc0() {
   return (neuron0x1c6d5a0()*-0.035122);
}

double NNfunction_sb_sLsR::synapse0x1c8cd00() {
   return (neuron0x1c6d8e0()*0.354972);
}

double NNfunction_sb_sLsR::synapse0x1c8cd40() {
   return (neuron0x1c6dc20()*-0.155658);
}

double NNfunction_sb_sLsR::synapse0x1c8cd80() {
   return (neuron0x1c6df60()*0.0633451);
}

double NNfunction_sb_sLsR::synapse0x1c8cdc0() {
   return (neuron0x1c6e2a0()*0.104612);
}

double NNfunction_sb_sLsR::synapse0x1c8ce00() {
   return (neuron0x1c6e5e0()*0.0662384);
}

double NNfunction_sb_sLsR::synapse0x1c8ce40() {
   return (neuron0x1c6e920()*-0.0944187);
}

double NNfunction_sb_sLsR::synapse0x1c8ce80() {
   return (neuron0x1c6ec60()*-0.41102);
}

double NNfunction_sb_sLsR::synapse0x1c8cec0() {
   return (neuron0x1c6efa0()*-0.115302);
}

double NNfunction_sb_sLsR::synapse0x1c8cf00() {
   return (neuron0x1c6f2e0()*-0.368792);
}

double NNfunction_sb_sLsR::synapse0x1c8cf40() {
   return (neuron0x1c6f620()*0.11232);
}

double NNfunction_sb_sLsR::synapse0x1c8c9d0() {
   return (neuron0x1c6f960()*-0.233472);
}

double NNfunction_sb_sLsR::synapse0x1c8ca10() {
   return (neuron0x1c6fec0()*0.0494527);
}

double NNfunction_sb_sLsR::synapse0x1c8d090() {
   return (neuron0x1c700e0()*-0.147638);
}

double NNfunction_sb_sLsR::synapse0x1c8d0d0() {
   return (neuron0x1c70420()*0.029113);
}

double NNfunction_sb_sLsR::synapse0x1c8d110() {
   return (neuron0x1c70760()*-0.20934);
}

double NNfunction_sb_sLsR::synapse0x1c8d150() {
   return (neuron0x1c70aa0()*0.0948125);
}

double NNfunction_sb_sLsR::synapse0x1c8d190() {
   return (neuron0x1c70de0()*0.0443362);
}

double NNfunction_sb_sLsR::synapse0x1c8d1d0() {
   return (neuron0x1c71120()*-0.0387009);
}

double NNfunction_sb_sLsR::synapse0x1c8d550() {
   return (neuron0x1c6c560()*0.288228);
}

double NNfunction_sb_sLsR::synapse0x1c8d590() {
   return (neuron0x1c6c8a0()*0.354117);
}

double NNfunction_sb_sLsR::synapse0x1c8d5d0() {
   return (neuron0x1c6cbe0()*-0.0505035);
}

double NNfunction_sb_sLsR::synapse0x1c8d610() {
   return (neuron0x1c6cf20()*0.275859);
}

double NNfunction_sb_sLsR::synapse0x1c8d650() {
   return (neuron0x1c6d260()*-0.387076);
}

double NNfunction_sb_sLsR::synapse0x1c8d690() {
   return (neuron0x1c6d5a0()*-0.821476);
}

double NNfunction_sb_sLsR::synapse0x1c8d6d0() {
   return (neuron0x1c6d8e0()*-0.549106);
}

double NNfunction_sb_sLsR::synapse0x1c8d710() {
   return (neuron0x1c6dc20()*0.0792135);
}

double NNfunction_sb_sLsR::synapse0x1c8d750() {
   return (neuron0x1c6df60()*-0.354395);
}

double NNfunction_sb_sLsR::synapse0x1c8d790() {
   return (neuron0x1c6e2a0()*0.0741414);
}

double NNfunction_sb_sLsR::synapse0x1c8d7d0() {
   return (neuron0x1c6e5e0()*-0.00143649);
}

double NNfunction_sb_sLsR::synapse0x1c8d810() {
   return (neuron0x1c6e920()*-0.553558);
}

double NNfunction_sb_sLsR::synapse0x1c8d850() {
   return (neuron0x1c6ec60()*-0.235295);
}

double NNfunction_sb_sLsR::synapse0x1c8d890() {
   return (neuron0x1c6efa0()*-0.127672);
}

double NNfunction_sb_sLsR::synapse0x1c8d8d0() {
   return (neuron0x1c6f2e0()*-0.557353);
}

double NNfunction_sb_sLsR::synapse0x1c8d910() {
   return (neuron0x1c6f620()*-0.0957044);
}

double NNfunction_sb_sLsR::synapse0x1c8d3a0() {
   return (neuron0x1c6f960()*0.264155);
}

double NNfunction_sb_sLsR::synapse0x1c8d3e0() {
   return (neuron0x1c6fec0()*-0.0198672);
}

double NNfunction_sb_sLsR::synapse0x1c8da60() {
   return (neuron0x1c700e0()*-0.0799407);
}

double NNfunction_sb_sLsR::synapse0x1c8daa0() {
   return (neuron0x1c70420()*0.190581);
}

double NNfunction_sb_sLsR::synapse0x1c8dae0() {
   return (neuron0x1c70760()*-0.127201);
}

double NNfunction_sb_sLsR::synapse0x1c8db20() {
   return (neuron0x1c70aa0()*-0.876513);
}

double NNfunction_sb_sLsR::synapse0x1c8db60() {
   return (neuron0x1c70de0()*0.355321);
}

double NNfunction_sb_sLsR::synapse0x1c8dba0() {
   return (neuron0x1c71120()*0.135204);
}

double NNfunction_sb_sLsR::synapse0x1c76650() {
   return (neuron0x1c6c560()*0.229894);
}

double NNfunction_sb_sLsR::synapse0x1c76690() {
   return (neuron0x1c6c8a0()*-0.258595);
}

double NNfunction_sb_sLsR::synapse0x1c766d0() {
   return (neuron0x1c6cbe0()*-0.51398);
}

double NNfunction_sb_sLsR::synapse0x1c76710() {
   return (neuron0x1c6cf20()*-0.0190241);
}

double NNfunction_sb_sLsR::synapse0x1c76750() {
   return (neuron0x1c6d260()*-0.131156);
}

double NNfunction_sb_sLsR::synapse0x1c76790() {
   return (neuron0x1c6d5a0()*-0.132381);
}

double NNfunction_sb_sLsR::synapse0x1c767d0() {
   return (neuron0x1c6d8e0()*-0.086134);
}

double NNfunction_sb_sLsR::synapse0x1c76810() {
   return (neuron0x1c6dc20()*0.0837394);
}

double NNfunction_sb_sLsR::synapse0x1c8e330() {
   return (neuron0x1c6df60()*-0.149004);
}

double NNfunction_sb_sLsR::synapse0x1c8e370() {
   return (neuron0x1c6e2a0()*0.0455315);
}

double NNfunction_sb_sLsR::synapse0x1c8e3b0() {
   return (neuron0x1c6e5e0()*0.0143984);
}

double NNfunction_sb_sLsR::synapse0x1c8e3f0() {
   return (neuron0x1c6e920()*0.00817436);
}

double NNfunction_sb_sLsR::synapse0x1c8e430() {
   return (neuron0x1c6ec60()*-1.00097);
}

double NNfunction_sb_sLsR::synapse0x1c8e470() {
   return (neuron0x1c6efa0()*-0.0232828);
}

double NNfunction_sb_sLsR::synapse0x1c8e4b0() {
   return (neuron0x1c6f2e0()*-0.010037);
}

double NNfunction_sb_sLsR::synapse0x1c8e4f0() {
   return (neuron0x1c6f620()*-0.157684);
}

double NNfunction_sb_sLsR::synapse0x1c8dd70() {
   return (neuron0x1c6f960()*-0.00397718);
}

double NNfunction_sb_sLsR::synapse0x1c8ddb0() {
   return (neuron0x1c6fec0()*-0.115274);
}

double NNfunction_sb_sLsR::synapse0x1c8e640() {
   return (neuron0x1c700e0()*-0.102949);
}

double NNfunction_sb_sLsR::synapse0x1c8e680() {
   return (neuron0x1c70420()*-0.0578984);
}

double NNfunction_sb_sLsR::synapse0x1c8e6c0() {
   return (neuron0x1c70760()*-0.0308333);
}

double NNfunction_sb_sLsR::synapse0x1c8e700() {
   return (neuron0x1c70aa0()*0.0229861);
}

double NNfunction_sb_sLsR::synapse0x1c8e740() {
   return (neuron0x1c70de0()*-0.0891224);
}

double NNfunction_sb_sLsR::synapse0x1c8e780() {
   return (neuron0x1c71120()*-0.0241147);
}

double NNfunction_sb_sLsR::synapse0x1c8eb00() {
   return (neuron0x1c6c560()*0.0195416);
}

double NNfunction_sb_sLsR::synapse0x1c8eb40() {
   return (neuron0x1c6c8a0()*-0.0163481);
}

double NNfunction_sb_sLsR::synapse0x1c8eb80() {
   return (neuron0x1c6cbe0()*-0.0306779);
}

double NNfunction_sb_sLsR::synapse0x1c8ebc0() {
   return (neuron0x1c6cf20()*2.2095);
}

double NNfunction_sb_sLsR::synapse0x1c8ec00() {
   return (neuron0x1c6d260()*0.0230886);
}

double NNfunction_sb_sLsR::synapse0x1c8ec40() {
   return (neuron0x1c6d5a0()*-0.00148991);
}

double NNfunction_sb_sLsR::synapse0x1c8ec80() {
   return (neuron0x1c6d8e0()*-0.0204709);
}

double NNfunction_sb_sLsR::synapse0x1c8ecc0() {
   return (neuron0x1c6dc20()*0.00338581);
}

double NNfunction_sb_sLsR::synapse0x1c8ed00() {
   return (neuron0x1c6df60()*0.0647118);
}

double NNfunction_sb_sLsR::synapse0x1c8ed40() {
   return (neuron0x1c6e2a0()*0.044885);
}

double NNfunction_sb_sLsR::synapse0x1c8ed80() {
   return (neuron0x1c6e5e0()*-0.00810778);
}

double NNfunction_sb_sLsR::synapse0x1c8edc0() {
   return (neuron0x1c6e920()*0.031886);
}

double NNfunction_sb_sLsR::synapse0x1c8ee00() {
   return (neuron0x1c6ec60()*0.786004);
}

double NNfunction_sb_sLsR::synapse0x1c8ee40() {
   return (neuron0x1c6efa0()*0.0109956);
}

double NNfunction_sb_sLsR::synapse0x1c8ee80() {
   return (neuron0x1c6f2e0()*0.0109405);
}

double NNfunction_sb_sLsR::synapse0x1c8eec0() {
   return (neuron0x1c6f620()*0.000617092);
}

double NNfunction_sb_sLsR::synapse0x1c8e950() {
   return (neuron0x1c6f960()*-0.00473766);
}

double NNfunction_sb_sLsR::synapse0x1c8e990() {
   return (neuron0x1c6fec0()*0.0403243);
}

double NNfunction_sb_sLsR::synapse0x1c8f010() {
   return (neuron0x1c700e0()*-1.33348);
}

double NNfunction_sb_sLsR::synapse0x1c8f050() {
   return (neuron0x1c70420()*0.0184548);
}

double NNfunction_sb_sLsR::synapse0x1c8f090() {
   return (neuron0x1c70760()*0.00761569);
}

double NNfunction_sb_sLsR::synapse0x1c8f0d0() {
   return (neuron0x1c70aa0()*0.00622031);
}

double NNfunction_sb_sLsR::synapse0x1c8f110() {
   return (neuron0x1c70de0()*0.0124991);
}

double NNfunction_sb_sLsR::synapse0x1c8f150() {
   return (neuron0x1c71120()*-0.0062202);
}

double NNfunction_sb_sLsR::synapse0x1c8f4d0() {
   return (neuron0x1c6c560()*0.054245);
}

double NNfunction_sb_sLsR::synapse0x1c8f510() {
   return (neuron0x1c6c8a0()*-0.00602098);
}

double NNfunction_sb_sLsR::synapse0x1c8f550() {
   return (neuron0x1c6cbe0()*0.0200037);
}

double NNfunction_sb_sLsR::synapse0x1c8f590() {
   return (neuron0x1c6cf20()*-8.90112);
}

double NNfunction_sb_sLsR::synapse0x1c8f5d0() {
   return (neuron0x1c6d260()*-0.0337303);
}

double NNfunction_sb_sLsR::synapse0x1c8f610() {
   return (neuron0x1c6d5a0()*-0.0360401);
}

double NNfunction_sb_sLsR::synapse0x1c8f650() {
   return (neuron0x1c6d8e0()*0.00896232);
}

double NNfunction_sb_sLsR::synapse0x1c8f690() {
   return (neuron0x1c6dc20()*-0.0263554);
}

double NNfunction_sb_sLsR::synapse0x1c8f6d0() {
   return (neuron0x1c6df60()*0.00686865);
}

double NNfunction_sb_sLsR::synapse0x1c8f710() {
   return (neuron0x1c6e2a0()*0.0579305);
}

double NNfunction_sb_sLsR::synapse0x1c8f750() {
   return (neuron0x1c6e5e0()*-0.0474343);
}

double NNfunction_sb_sLsR::synapse0x1c8f790() {
   return (neuron0x1c6e920()*-0.0868681);
}

double NNfunction_sb_sLsR::synapse0x1c8f7d0() {
   return (neuron0x1c6ec60()*0.640057);
}

double NNfunction_sb_sLsR::synapse0x1c8f810() {
   return (neuron0x1c6efa0()*0.0359824);
}

double NNfunction_sb_sLsR::synapse0x1c8f850() {
   return (neuron0x1c6f2e0()*-0.0167421);
}

double NNfunction_sb_sLsR::synapse0x1c8f890() {
   return (neuron0x1c6f620()*-0.009398);
}

double NNfunction_sb_sLsR::synapse0x1c8f320() {
   return (neuron0x1c6f960()*0.0226822);
}

double NNfunction_sb_sLsR::synapse0x1c8f360() {
   return (neuron0x1c6fec0()*0.0164862);
}

double NNfunction_sb_sLsR::synapse0x1c7fe90() {
   return (neuron0x1c700e0()*0.779654);
}

double NNfunction_sb_sLsR::synapse0x1c7fed0() {
   return (neuron0x1c70420()*-0.00422063);
}

double NNfunction_sb_sLsR::synapse0x1c7ff10() {
   return (neuron0x1c70760()*-0.0197944);
}

double NNfunction_sb_sLsR::synapse0x1c7ff50() {
   return (neuron0x1c70aa0()*0.00641692);
}

double NNfunction_sb_sLsR::synapse0x1c7ff90() {
   return (neuron0x1c70de0()*0.00444387);
}

double NNfunction_sb_sLsR::synapse0x1c7ffd0() {
   return (neuron0x1c71120()*-0.0352627);
}

double NNfunction_sb_sLsR::synapse0x1c80350() {
   return (neuron0x1c6c560()*-0.413828);
}

double NNfunction_sb_sLsR::synapse0x1c80390() {
   return (neuron0x1c6c8a0()*0.0112538);
}

double NNfunction_sb_sLsR::synapse0x1c803d0() {
   return (neuron0x1c6cbe0()*0.721912);
}

double NNfunction_sb_sLsR::synapse0x1c80410() {
   return (neuron0x1c6cf20()*-0.249118);
}

double NNfunction_sb_sLsR::synapse0x1c80450() {
   return (neuron0x1c6d260()*1.01958);
}

double NNfunction_sb_sLsR::synapse0x1c80490() {
   return (neuron0x1c6d5a0()*-0.0617222);
}

double NNfunction_sb_sLsR::synapse0x1c804d0() {
   return (neuron0x1c6d8e0()*0.304392);
}

double NNfunction_sb_sLsR::synapse0x1c80510() {
   return (neuron0x1c6dc20()*0.0906534);
}

double NNfunction_sb_sLsR::synapse0x1c80550() {
   return (neuron0x1c6df60()*0.272206);
}

double NNfunction_sb_sLsR::synapse0x1c80590() {
   return (neuron0x1c6e2a0()*0.429341);
}

double NNfunction_sb_sLsR::synapse0x1c805d0() {
   return (neuron0x1c6e5e0()*0.536022);
}

double NNfunction_sb_sLsR::synapse0x1c80610() {
   return (neuron0x1c6e920()*0.35619);
}

double NNfunction_sb_sLsR::synapse0x1c80650() {
   return (neuron0x1c6ec60()*0.653203);
}

double NNfunction_sb_sLsR::synapse0x1c80690() {
   return (neuron0x1c6efa0()*0.182259);
}

double NNfunction_sb_sLsR::synapse0x1c806d0() {
   return (neuron0x1c6f2e0()*0.63739);
}

double NNfunction_sb_sLsR::synapse0x1c80710() {
   return (neuron0x1c6f620()*0.13332);
}

double NNfunction_sb_sLsR::synapse0x1c801a0() {
   return (neuron0x1c6f960()*-0.619081);
}

double NNfunction_sb_sLsR::synapse0x1c801e0() {
   return (neuron0x1c6fec0()*0.914703);
}

double NNfunction_sb_sLsR::synapse0x1c80860() {
   return (neuron0x1c700e0()*0.300142);
}

double NNfunction_sb_sLsR::synapse0x1c808a0() {
   return (neuron0x1c70420()*0.701539);
}

double NNfunction_sb_sLsR::synapse0x1c808e0() {
   return (neuron0x1c70760()*0.126748);
}

double NNfunction_sb_sLsR::synapse0x1c80920() {
   return (neuron0x1c70aa0()*0.213748);
}

double NNfunction_sb_sLsR::synapse0x1c80960() {
   return (neuron0x1c70de0()*0.271881);
}

double NNfunction_sb_sLsR::synapse0x1c809a0() {
   return (neuron0x1c71120()*0.167823);
}

double NNfunction_sb_sLsR::synapse0x1c80d20() {
   return (neuron0x1c6c560()*0.0355886);
}

double NNfunction_sb_sLsR::synapse0x1c80d60() {
   return (neuron0x1c6c8a0()*0.0476636);
}

double NNfunction_sb_sLsR::synapse0x1c80da0() {
   return (neuron0x1c6cbe0()*0.0291079);
}

double NNfunction_sb_sLsR::synapse0x1c80de0() {
   return (neuron0x1c6cf20()*-16.0429);
}

double NNfunction_sb_sLsR::synapse0x1c80e20() {
   return (neuron0x1c6d260()*-0.00561714);
}

double NNfunction_sb_sLsR::synapse0x1c80e60() {
   return (neuron0x1c6d5a0()*0.0207358);
}

double NNfunction_sb_sLsR::synapse0x1c80ea0() {
   return (neuron0x1c6d8e0()*0.0491472);
}

double NNfunction_sb_sLsR::synapse0x1c80ee0() {
   return (neuron0x1c6dc20()*0.0161615);
}

double NNfunction_sb_sLsR::synapse0x1c80f20() {
   return (neuron0x1c6df60()*0.0285529);
}

double NNfunction_sb_sLsR::synapse0x1c80f60() {
   return (neuron0x1c6e2a0()*0.0139592);
}

double NNfunction_sb_sLsR::synapse0x1c80fa0() {
   return (neuron0x1c6e5e0()*-0.00931889);
}

double NNfunction_sb_sLsR::synapse0x1c80fe0() {
   return (neuron0x1c6e920()*-0.0417259);
}

double NNfunction_sb_sLsR::synapse0x1c81020() {
   return (neuron0x1c6ec60()*0.101005);
}

double NNfunction_sb_sLsR::synapse0x1c81060() {
   return (neuron0x1c6efa0()*-0.0171509);
}

double NNfunction_sb_sLsR::synapse0x1c810a0() {
   return (neuron0x1c6f2e0()*0.0024001);
}

double NNfunction_sb_sLsR::synapse0x1c810e0() {
   return (neuron0x1c6f620()*0.00307664);
}

double NNfunction_sb_sLsR::synapse0x1c80b70() {
   return (neuron0x1c6f960()*-0.00819923);
}

double NNfunction_sb_sLsR::synapse0x1c80bb0() {
   return (neuron0x1c6fec0()*0.0308526);
}

double NNfunction_sb_sLsR::synapse0x1c81230() {
   return (neuron0x1c700e0()*-0.0207005);
}

double NNfunction_sb_sLsR::synapse0x1c81270() {
   return (neuron0x1c70420()*0.0134883);
}

double NNfunction_sb_sLsR::synapse0x1c812b0() {
   return (neuron0x1c70760()*-0.00323681);
}

double NNfunction_sb_sLsR::synapse0x1c812f0() {
   return (neuron0x1c70aa0()*-0.0152724);
}

double NNfunction_sb_sLsR::synapse0x1c81330() {
   return (neuron0x1c70de0()*0.00848917);
}

double NNfunction_sb_sLsR::synapse0x1c81370() {
   return (neuron0x1c71120()*-0.038706);
}

double NNfunction_sb_sLsR::synapse0x1c816f0() {
   return (neuron0x1c6c560()*0.187422);
}

double NNfunction_sb_sLsR::synapse0x1c81730() {
   return (neuron0x1c6c8a0()*0.270719);
}

double NNfunction_sb_sLsR::synapse0x1c81770() {
   return (neuron0x1c6cbe0()*0.310748);
}

double NNfunction_sb_sLsR::synapse0x1c817b0() {
   return (neuron0x1c6cf20()*0.998345);
}

double NNfunction_sb_sLsR::synapse0x1c817f0() {
   return (neuron0x1c6d260()*-0.322979);
}

double NNfunction_sb_sLsR::synapse0x1c81830() {
   return (neuron0x1c6d5a0()*-0.20679);
}

double NNfunction_sb_sLsR::synapse0x1c81870() {
   return (neuron0x1c6d8e0()*0.166121);
}

double NNfunction_sb_sLsR::synapse0x1c818b0() {
   return (neuron0x1c6dc20()*-0.0180398);
}

double NNfunction_sb_sLsR::synapse0x1c818f0() {
   return (neuron0x1c6df60()*-0.0933982);
}

double NNfunction_sb_sLsR::synapse0x1c81930() {
   return (neuron0x1c6e2a0()*0.179564);
}

double NNfunction_sb_sLsR::synapse0x1c81970() {
   return (neuron0x1c6e5e0()*0.0589454);
}

double NNfunction_sb_sLsR::synapse0x1c819b0() {
   return (neuron0x1c6e920()*-0.258619);
}

double NNfunction_sb_sLsR::synapse0x1c819f0() {
   return (neuron0x1c6ec60()*-0.258424);
}

double NNfunction_sb_sLsR::synapse0x1c81a30() {
   return (neuron0x1c6efa0()*0.0486919);
}

double NNfunction_sb_sLsR::synapse0x1c81a70() {
   return (neuron0x1c6f2e0()*0.652685);
}

double NNfunction_sb_sLsR::synapse0x1c81ab0() {
   return (neuron0x1c6f620()*-0.326123);
}

double NNfunction_sb_sLsR::synapse0x1c81540() {
   return (neuron0x1c6f960()*0.0684662);
}

double NNfunction_sb_sLsR::synapse0x1c81580() {
   return (neuron0x1c6fec0()*-0.0583845);
}

double NNfunction_sb_sLsR::synapse0x1c81c00() {
   return (neuron0x1c700e0()*0.235248);
}

double NNfunction_sb_sLsR::synapse0x1c81c40() {
   return (neuron0x1c70420()*-0.113444);
}

double NNfunction_sb_sLsR::synapse0x1c81c80() {
   return (neuron0x1c70760()*-0.132005);
}

double NNfunction_sb_sLsR::synapse0x1c81cc0() {
   return (neuron0x1c70aa0()*0.117939);
}

double NNfunction_sb_sLsR::synapse0x1c81d00() {
   return (neuron0x1c70de0()*0.173695);
}

double NNfunction_sb_sLsR::synapse0x1c81d40() {
   return (neuron0x1c71120()*0.0272413);
}

double NNfunction_sb_sLsR::synapse0x1c93c10() {
   return (neuron0x1c6c560()*0.541641);
}

double NNfunction_sb_sLsR::synapse0x1c93c50() {
   return (neuron0x1c6c8a0()*-0.0482541);
}

double NNfunction_sb_sLsR::synapse0x1c93c90() {
   return (neuron0x1c6cbe0()*-0.177742);
}

double NNfunction_sb_sLsR::synapse0x1c93cd0() {
   return (neuron0x1c6cf20()*0.216931);
}

double NNfunction_sb_sLsR::synapse0x1c93d10() {
   return (neuron0x1c6d260()*0.0842192);
}

double NNfunction_sb_sLsR::synapse0x1c93d50() {
   return (neuron0x1c6d5a0()*0.108787);
}

double NNfunction_sb_sLsR::synapse0x1c93d90() {
   return (neuron0x1c6d8e0()*-0.212866);
}

double NNfunction_sb_sLsR::synapse0x1c93dd0() {
   return (neuron0x1c6dc20()*-0.31518);
}

double NNfunction_sb_sLsR::synapse0x1c93e10() {
   return (neuron0x1c6df60()*-1.35753);
}

double NNfunction_sb_sLsR::synapse0x1c93e50() {
   return (neuron0x1c6e2a0()*0.138713);
}

double NNfunction_sb_sLsR::synapse0x1c93e90() {
   return (neuron0x1c6e5e0()*0.0264951);
}

double NNfunction_sb_sLsR::synapse0x1c93ed0() {
   return (neuron0x1c6e920()*-0.104969);
}

double NNfunction_sb_sLsR::synapse0x1c93f10() {
   return (neuron0x1c6ec60()*0.309422);
}

double NNfunction_sb_sLsR::synapse0x1c93f50() {
   return (neuron0x1c6efa0()*0.121942);
}

double NNfunction_sb_sLsR::synapse0x1c93f90() {
   return (neuron0x1c6f2e0()*-0.0756313);
}

double NNfunction_sb_sLsR::synapse0x1c93fd0() {
   return (neuron0x1c6f620()*-0.172456);
}

double NNfunction_sb_sLsR::synapse0x1c81d80() {
   return (neuron0x1c6f960()*0.0708759);
}

double NNfunction_sb_sLsR::synapse0x1c81dc0() {
   return (neuron0x1c6fec0()*-0.0433269);
}

double NNfunction_sb_sLsR::synapse0x1c94120() {
   return (neuron0x1c700e0()*0.181167);
}

double NNfunction_sb_sLsR::synapse0x1c94160() {
   return (neuron0x1c70420()*-0.172756);
}

double NNfunction_sb_sLsR::synapse0x1c941a0() {
   return (neuron0x1c70760()*0.369766);
}

double NNfunction_sb_sLsR::synapse0x1c941e0() {
   return (neuron0x1c70aa0()*0.0547256);
}

double NNfunction_sb_sLsR::synapse0x1c94220() {
   return (neuron0x1c70de0()*-0.0943173);
}

double NNfunction_sb_sLsR::synapse0x1c94260() {
   return (neuron0x1c71120()*-0.192449);
}

double NNfunction_sb_sLsR::synapse0x1c945e0() {
   return (neuron0x1c6c560()*0.0220574);
}

double NNfunction_sb_sLsR::synapse0x1c94620() {
   return (neuron0x1c6c8a0()*0.0288628);
}

double NNfunction_sb_sLsR::synapse0x1c94660() {
   return (neuron0x1c6cbe0()*0.0363842);
}

double NNfunction_sb_sLsR::synapse0x1c946a0() {
   return (neuron0x1c6cf20()*-2.73663);
}

double NNfunction_sb_sLsR::synapse0x1c946e0() {
   return (neuron0x1c6d260()*0.00737284);
}

double NNfunction_sb_sLsR::synapse0x1c94720() {
   return (neuron0x1c6d5a0()*-0.00578212);
}

double NNfunction_sb_sLsR::synapse0x1c94760() {
   return (neuron0x1c6d8e0()*0.0199372);
}

double NNfunction_sb_sLsR::synapse0x1c947a0() {
   return (neuron0x1c6dc20()*0.0114528);
}

double NNfunction_sb_sLsR::synapse0x1c947e0() {
   return (neuron0x1c6df60()*-0.00846898);
}

double NNfunction_sb_sLsR::synapse0x1c94820() {
   return (neuron0x1c6e2a0()*-0.00569648);
}

double NNfunction_sb_sLsR::synapse0x1c94860() {
   return (neuron0x1c6e5e0()*-0.0138001);
}

double NNfunction_sb_sLsR::synapse0x1c948a0() {
   return (neuron0x1c6e920()*-0.0298725);
}

double NNfunction_sb_sLsR::synapse0x1c948e0() {
   return (neuron0x1c6ec60()*0.106323);
}

double NNfunction_sb_sLsR::synapse0x1c94920() {
   return (neuron0x1c6efa0()*-0.0212649);
}

double NNfunction_sb_sLsR::synapse0x1c94960() {
   return (neuron0x1c6f2e0()*-0.015462);
}

double NNfunction_sb_sLsR::synapse0x1c949a0() {
   return (neuron0x1c6f620()*-0.0176853);
}

double NNfunction_sb_sLsR::synapse0x1c94430() {
   return (neuron0x1c6f960()*0.00041785);
}

double NNfunction_sb_sLsR::synapse0x1c94470() {
   return (neuron0x1c6fec0()*-0.0267322);
}

double NNfunction_sb_sLsR::synapse0x1c94af0() {
   return (neuron0x1c700e0()*0.237901);
}

double NNfunction_sb_sLsR::synapse0x1c94b30() {
   return (neuron0x1c70420()*-0.00351349);
}

double NNfunction_sb_sLsR::synapse0x1c94b70() {
   return (neuron0x1c70760()*0.0206067);
}

double NNfunction_sb_sLsR::synapse0x1c94bb0() {
   return (neuron0x1c70aa0()*-0.00439806);
}

double NNfunction_sb_sLsR::synapse0x1c94bf0() {
   return (neuron0x1c70de0()*0.00892417);
}

double NNfunction_sb_sLsR::synapse0x1c94c30() {
   return (neuron0x1c71120()*-0.00642884);
}

double NNfunction_sb_sLsR::synapse0x1c94fb0() {
   return (neuron0x1c6c560()*0.0503899);
}

double NNfunction_sb_sLsR::synapse0x1c94ff0() {
   return (neuron0x1c6c8a0()*0.00371233);
}

double NNfunction_sb_sLsR::synapse0x1c95030() {
   return (neuron0x1c6cbe0()*0.000160259);
}

double NNfunction_sb_sLsR::synapse0x1c95070() {
   return (neuron0x1c6cf20()*-1.29183);
}

double NNfunction_sb_sLsR::synapse0x1c950b0() {
   return (neuron0x1c6d260()*0.0470676);
}

double NNfunction_sb_sLsR::synapse0x1c950f0() {
   return (neuron0x1c6d5a0()*-0.0273397);
}

double NNfunction_sb_sLsR::synapse0x1c95130() {
   return (neuron0x1c6d8e0()*0.00919645);
}

double NNfunction_sb_sLsR::synapse0x1c95170() {
   return (neuron0x1c6dc20()*-0.0395842);
}

double NNfunction_sb_sLsR::synapse0x1c951b0() {
   return (neuron0x1c6df60()*-0.0156689);
}

double NNfunction_sb_sLsR::synapse0x1c951f0() {
   return (neuron0x1c6e2a0()*0.00469626);
}

double NNfunction_sb_sLsR::synapse0x1c95230() {
   return (neuron0x1c6e5e0()*-0.0974285);
}

double NNfunction_sb_sLsR::synapse0x1c95270() {
   return (neuron0x1c6e920()*-0.112366);
}

double NNfunction_sb_sLsR::synapse0x1c952b0() {
   return (neuron0x1c6ec60()*0.327885);
}

double NNfunction_sb_sLsR::synapse0x1c952f0() {
   return (neuron0x1c6efa0()*-0.0356084);
}

double NNfunction_sb_sLsR::synapse0x1c95330() {
   return (neuron0x1c6f2e0()*-0.0585065);
}

double NNfunction_sb_sLsR::synapse0x1c95370() {
   return (neuron0x1c6f620()*-0.00354168);
}

double NNfunction_sb_sLsR::synapse0x1c94e00() {
   return (neuron0x1c6f960()*-0.045717);
}

double NNfunction_sb_sLsR::synapse0x1c94e40() {
   return (neuron0x1c6fec0()*0.0377499);
}

double NNfunction_sb_sLsR::synapse0x1c954c0() {
   return (neuron0x1c700e0()*0.320262);
}

double NNfunction_sb_sLsR::synapse0x1c95500() {
   return (neuron0x1c70420()*-0.00844297);
}

double NNfunction_sb_sLsR::synapse0x1c95540() {
   return (neuron0x1c70760()*-0.00159264);
}

double NNfunction_sb_sLsR::synapse0x1c95580() {
   return (neuron0x1c70aa0()*-0.0171348);
}

double NNfunction_sb_sLsR::synapse0x1c955c0() {
   return (neuron0x1c70de0()*-0.00519271);
}

double NNfunction_sb_sLsR::synapse0x1c95600() {
   return (neuron0x1c71120()*0.0106402);
}

double NNfunction_sb_sLsR::synapse0x1c95980() {
   return (neuron0x1c6c560()*-0.0113182);
}

double NNfunction_sb_sLsR::synapse0x1c959c0() {
   return (neuron0x1c6c8a0()*-0.00728095);
}

double NNfunction_sb_sLsR::synapse0x1c95a00() {
   return (neuron0x1c6cbe0()*-0.0457054);
}

double NNfunction_sb_sLsR::synapse0x1c95a40() {
   return (neuron0x1c6cf20()*-1.94882);
}

double NNfunction_sb_sLsR::synapse0x1c95a80() {
   return (neuron0x1c6d260()*-0.0131834);
}

double NNfunction_sb_sLsR::synapse0x1c95ac0() {
   return (neuron0x1c6d5a0()*0.023476);
}

double NNfunction_sb_sLsR::synapse0x1c95b00() {
   return (neuron0x1c6d8e0()*0.0320305);
}

double NNfunction_sb_sLsR::synapse0x1c95b40() {
   return (neuron0x1c6dc20()*-0.0127662);
}

double NNfunction_sb_sLsR::synapse0x1c95b80() {
   return (neuron0x1c6df60()*-0.0587493);
}

double NNfunction_sb_sLsR::synapse0x1c95bc0() {
   return (neuron0x1c6e2a0()*0.0139764);
}

double NNfunction_sb_sLsR::synapse0x1c95c00() {
   return (neuron0x1c6e5e0()*-0.0153237);
}

double NNfunction_sb_sLsR::synapse0x1c95c40() {
   return (neuron0x1c6e920()*0.0254465);
}

double NNfunction_sb_sLsR::synapse0x1c95c80() {
   return (neuron0x1c6ec60()*0.0152054);
}

double NNfunction_sb_sLsR::synapse0x1c95cc0() {
   return (neuron0x1c6efa0()*0.0331275);
}

double NNfunction_sb_sLsR::synapse0x1c95d00() {
   return (neuron0x1c6f2e0()*-0.000155209);
}

double NNfunction_sb_sLsR::synapse0x1c95d40() {
   return (neuron0x1c6f620()*0.0738674);
}

double NNfunction_sb_sLsR::synapse0x1c957d0() {
   return (neuron0x1c6f960()*0.00838283);
}

double NNfunction_sb_sLsR::synapse0x1c95810() {
   return (neuron0x1c6fec0()*0.103026);
}

double NNfunction_sb_sLsR::synapse0x1c95e90() {
   return (neuron0x1c700e0()*0.184268);
}

double NNfunction_sb_sLsR::synapse0x1c95ed0() {
   return (neuron0x1c70420()*0.0318241);
}

double NNfunction_sb_sLsR::synapse0x1c95f10() {
   return (neuron0x1c70760()*-0.0528961);
}

double NNfunction_sb_sLsR::synapse0x1c95f50() {
   return (neuron0x1c70aa0()*0.00587649);
}

double NNfunction_sb_sLsR::synapse0x1c95f90() {
   return (neuron0x1c70de0()*-0.0414374);
}

double NNfunction_sb_sLsR::synapse0x1c95fd0() {
   return (neuron0x1c71120()*0.0251709);
}

double NNfunction_sb_sLsR::synapse0x1c72570() {
   return (neuron0x1c715c0()*0.182845);
}

double NNfunction_sb_sLsR::synapse0x1c725b0() {
   return (neuron0x1c71ed0()*0.666867);
}

double NNfunction_sb_sLsR::synapse0x1c73a80() {
   return (neuron0x1c729b0()*0.623367);
}

double NNfunction_sb_sLsR::synapse0x1c73ac0() {
   return (neuron0x1a2c240()*0.375525);
}

double NNfunction_sb_sLsR::synapse0x1c74450() {
   return (neuron0x1c737d0()*-0.0913755);
}

double NNfunction_sb_sLsR::synapse0x1c74490() {
   return (neuron0x1c741a0()*-0.157116);
}

double NNfunction_sb_sLsR::synapse0x1c75220() {
   return (neuron0x1c74f70()*0.48182);
}

double NNfunction_sb_sLsR::synapse0x1c75260() {
   return (neuron0x1c75940()*0.0454564);
}

double NNfunction_sb_sLsR::synapse0x1c75bf0() {
   return (neuron0x1c76310()*0.197828);
}

double NNfunction_sb_sLsR::synapse0x1c75c30() {
   return (neuron0x1c76df0()*0.762446);
}

double NNfunction_sb_sLsR::synapse0x1c765c0() {
   return (neuron0x1c777c0()*-0.048328);
}

double NNfunction_sb_sLsR::synapse0x1c76600() {
   return (neuron0x1c748a0()*0.202388);
}

double NNfunction_sb_sLsR::synapse0x1c770a0() {
   return (neuron0x1c79370()*0.635628);
}

double NNfunction_sb_sLsR::synapse0x1c770e0() {
   return (neuron0x1c79d40()*0.30656);
}

double NNfunction_sb_sLsR::synapse0x1c77a70() {
   return (neuron0x1c7a710()*0.602059);
}

double NNfunction_sb_sLsR::synapse0x1c77ab0() {
   return (neuron0x1c7b0e0()*0.46642);
}

double NNfunction_sb_sLsR::synapse0x1c74b50() {
   return (neuron0x1c7cef0()*0.407403);
}

double NNfunction_sb_sLsR::synapse0x1c74b90() {
   return (neuron0x1c7d1d0()*0.424786);
}

double NNfunction_sb_sLsR::synapse0x1c79620() {
   return (neuron0x1c7dba0()*0.365744);
}

double NNfunction_sb_sLsR::synapse0x1c79660() {
   return (neuron0x1c7e570()*0.530211);
}

double NNfunction_sb_sLsR::synapse0x1c79ff0() {
   return (neuron0x1c7ef40()*0.899796);
}

double NNfunction_sb_sLsR::synapse0x1c7a030() {
   return (neuron0x1c7f910()*0.244839);
}

double NNfunction_sb_sLsR::synapse0x1c7a9c0() {
   return (neuron0x1c78460()*-0.132302);
}

double NNfunction_sb_sLsR::synapse0x1c7aa00() {
   return (neuron0x1c78e30()*0.613408);
}

double NNfunction_sb_sLsR::synapse0x1c7b390() {
   return (neuron0x1c826a0()*0.354107);
}

double NNfunction_sb_sLsR::synapse0x1c7b3d0() {
   return (neuron0x1c83070()*0.16829);
}

double NNfunction_sb_sLsR::synapse0x1c6f500() {
   return (neuron0x1c83a40()*0.42146);
}

double NNfunction_sb_sLsR::synapse0x1c6f540() {
   return (neuron0x1c84410()*0.412279);
}

double NNfunction_sb_sLsR::synapse0x1c7d480() {
   return (neuron0x1c84de0()*0.246683);
}

double NNfunction_sb_sLsR::synapse0x1c7d4c0() {
   return (neuron0x1c857b0()*-0.0773671);
}

double NNfunction_sb_sLsR::synapse0x1c7de50() {
   return (neuron0x1c86180()*0.226618);
}

double NNfunction_sb_sLsR::synapse0x1c7de90() {
   return (neuron0x1c86b50()*-0.0773708);
}

double NNfunction_sb_sLsR::synapse0x1c7e820() {
   return (neuron0x1c7cbe0()*0.37982);
}

double NNfunction_sb_sLsR::synapse0x1c7e860() {
   return (neuron0x1c89730()*0.446142);
}

double NNfunction_sb_sLsR::synapse0x1c7f1f0() {
   return (neuron0x1c8a100()*0.479831);
}

double NNfunction_sb_sLsR::synapse0x1c7f230() {
   return (neuron0x1c8aad0()*0.70061);
}

double NNfunction_sb_sLsR::synapse0x1c7fbc0() {
   return (neuron0x1c8b4a0()*-0.279633);
}

double NNfunction_sb_sLsR::synapse0x1c7fc00() {
   return (neuron0x1c8be70()*0.0242247);
}

double NNfunction_sb_sLsR::synapse0x1c78710() {
   return (neuron0x1c8c840()*0.07782);
}

double NNfunction_sb_sLsR::synapse0x1c78750() {
   return (neuron0x1c8d210()*-0.031605);
}

double NNfunction_sb_sLsR::synapse0x1c81fc0() {
   return (neuron0x1c8dbe0()*0.478682);
}

double NNfunction_sb_sLsR::synapse0x1c82000() {
   return (neuron0x1c8e7c0()*0.21251);
}

double NNfunction_sb_sLsR::synapse0x1c82950() {
   return (neuron0x1c8f190()*0.335909);
}

double NNfunction_sb_sLsR::synapse0x1c82990() {
   return (neuron0x1c80010()*0.375768);
}

double NNfunction_sb_sLsR::synapse0x1c83320() {
   return (neuron0x1c809e0()*0.61245);
}

double NNfunction_sb_sLsR::synapse0x1c83360() {
   return (neuron0x1c813b0()*0.717459);
}

double NNfunction_sb_sLsR::synapse0x1c83cf0() {
   return (neuron0x1c939f0()*-0.0669967);
}

double NNfunction_sb_sLsR::synapse0x1c83d30() {
   return (neuron0x1c942a0()*-0.0271676);
}

double NNfunction_sb_sLsR::synapse0x1c846c0() {
   return (neuron0x1c94c70()*0.364186);
}

double NNfunction_sb_sLsR::synapse0x1c84700() {
   return (neuron0x1c95640()*0.481412);
}

double NNfunction_sb_sLsR::synapse0x1c86e00() {
   return (neuron0x1c715c0()*-0.491444);
}

double NNfunction_sb_sLsR::synapse0x1c86e40() {
   return (neuron0x1c71ed0()*-1.49236);
}

double NNfunction_sb_sLsR::synapse0x1c7c3c0() {
   return (neuron0x1c729b0()*1.77733);
}

double NNfunction_sb_sLsR::synapse0x1c7c400() {
   return (neuron0x1a2c240()*0.88103);
}

double NNfunction_sb_sLsR::synapse0x1c899e0() {
   return (neuron0x1c737d0()*-0.675547);
}

double NNfunction_sb_sLsR::synapse0x1c89a20() {
   return (neuron0x1c741a0()*-1.78149);
}

double NNfunction_sb_sLsR::synapse0x1c8a3b0() {
   return (neuron0x1c74f70()*-0.82968);
}

double NNfunction_sb_sLsR::synapse0x1c8a3f0() {
   return (neuron0x1c75940()*-0.172089);
}

double NNfunction_sb_sLsR::synapse0x1c8ad80() {
   return (neuron0x1c76310()*0.487627);
}

double NNfunction_sb_sLsR::synapse0x1c8adc0() {
   return (neuron0x1c76df0()*2.00201);
}

double NNfunction_sb_sLsR::synapse0x1c8b750() {
   return (neuron0x1c777c0()*-0.605048);
}

double NNfunction_sb_sLsR::synapse0x1c8b790() {
   return (neuron0x1c748a0()*-3.8688);
}

double NNfunction_sb_sLsR::synapse0x1c8c120() {
   return (neuron0x1c79370()*-0.6895);
}

double NNfunction_sb_sLsR::synapse0x1c8c160() {
   return (neuron0x1c79d40()*1.2897);
}

double NNfunction_sb_sLsR::synapse0x1c8caf0() {
   return (neuron0x1c7a710()*0.48588);
}

double NNfunction_sb_sLsR::synapse0x1c8cb30() {
   return (neuron0x1c7b0e0()*0.836965);
}

double NNfunction_sb_sLsR::synapse0x1c8d4c0() {
   return (neuron0x1c7cef0()*1.09708);
}

double NNfunction_sb_sLsR::synapse0x1c8d500() {
   return (neuron0x1c7d1d0()*-0.541528);
}

double NNfunction_sb_sLsR::synapse0x1c8de90() {
   return (neuron0x1c7dba0()*3.43879);
}

double NNfunction_sb_sLsR::synapse0x1c8ded0() {
   return (neuron0x1c7e570()*0.864503);
}

double NNfunction_sb_sLsR::synapse0x1c8ea70() {
   return (neuron0x1c7ef40()*-0.956399);
}

double NNfunction_sb_sLsR::synapse0x1c8eab0() {
   return (neuron0x1c7f910()*-0.304058);
}

double NNfunction_sb_sLsR::synapse0x1c8f440() {
   return (neuron0x1c78460()*1.87071);
}

double NNfunction_sb_sLsR::synapse0x1c8f480() {
   return (neuron0x1c78e30()*1.11984);
}

double NNfunction_sb_sLsR::synapse0x1c802c0() {
   return (neuron0x1c826a0()*1.26615);
}

double NNfunction_sb_sLsR::synapse0x1c80300() {
   return (neuron0x1c83070()*-0.00395585);
}

double NNfunction_sb_sLsR::synapse0x1c80c90() {
   return (neuron0x1c83a40()*0.731031);
}

double NNfunction_sb_sLsR::synapse0x1c80cd0() {
   return (neuron0x1c84410()*5.31709);
}

double NNfunction_sb_sLsR::synapse0x1c81660() {
   return (neuron0x1c84de0()*-0.983974);
}

double NNfunction_sb_sLsR::synapse0x1c816a0() {
   return (neuron0x1c857b0()*0.95389);
}

double NNfunction_sb_sLsR::synapse0x1c93b80() {
   return (neuron0x1c86180()*-1.50114);
}

double NNfunction_sb_sLsR::synapse0x1c93bc0() {
   return (neuron0x1c86b50()*0.995635);
}

double NNfunction_sb_sLsR::synapse0x1c94550() {
   return (neuron0x1c7cbe0()*0.871615);
}

double NNfunction_sb_sLsR::synapse0x1c94590() {
   return (neuron0x1c89730()*0.850089);
}

double NNfunction_sb_sLsR::synapse0x1c94f20() {
   return (neuron0x1c8a100()*1.26364);
}

double NNfunction_sb_sLsR::synapse0x1c94f60() {
   return (neuron0x1c8aad0()*0.809426);
}

double NNfunction_sb_sLsR::synapse0x1c958f0() {
   return (neuron0x1c8b4a0()*0.690047);
}

double NNfunction_sb_sLsR::synapse0x1c95930() {
   return (neuron0x1c8be70()*-0.163974);
}

double NNfunction_sb_sLsR::synapse0x1c717e0() {
   return (neuron0x1c8c840()*1.09988);
}

double NNfunction_sb_sLsR::synapse0x1c71820() {
   return (neuron0x1c8d210()*-0.734704);
}

double NNfunction_sb_sLsR::synapse0x1c85090() {
   return (neuron0x1c8dbe0()*1.10832);
}

double NNfunction_sb_sLsR::synapse0x1c850d0() {
   return (neuron0x1c8e7c0()*0.188192);
}

double NNfunction_sb_sLsR::synapse0x1c96010() {
   return (neuron0x1c8f190()*6.59034);
}

double NNfunction_sb_sLsR::synapse0x1c96050() {
   return (neuron0x1c80010()*0.512467);
}

double NNfunction_sb_sLsR::synapse0x1c96090() {
   return (neuron0x1c809e0()*-2.98783);
}

double NNfunction_sb_sLsR::synapse0x1c960d0() {
   return (neuron0x1c813b0()*1.20529);
}

double NNfunction_sb_sLsR::synapse0x1c9cf80() {
   return (neuron0x1c939f0()*0.495277);
}

double NNfunction_sb_sLsR::synapse0x1c9cfc0() {
   return (neuron0x1c942a0()*-5.77503);
}

double NNfunction_sb_sLsR::synapse0x1c9d000() {
   return (neuron0x1c94c70()*-2.27173);
}

double NNfunction_sb_sLsR::synapse0x1c9d040() {
   return (neuron0x1c95640()*-1.8219);
}

double NNfunction_sb_sLsR::synapse0x1c9d3c0() {
   return (neuron0x1c715c0()*0.322387);
}

double NNfunction_sb_sLsR::synapse0x1c9d400() {
   return (neuron0x1c71ed0()*-0.422926);
}

double NNfunction_sb_sLsR::synapse0x1c9d440() {
   return (neuron0x1c729b0()*-0.449582);
}

double NNfunction_sb_sLsR::synapse0x1c9d480() {
   return (neuron0x1a2c240()*-0.395399);
}

double NNfunction_sb_sLsR::synapse0x1c9d4c0() {
   return (neuron0x1c737d0()*0.2368);
}

double NNfunction_sb_sLsR::synapse0x1c9d500() {
   return (neuron0x1c741a0()*0.787668);
}

double NNfunction_sb_sLsR::synapse0x1c9d540() {
   return (neuron0x1c74f70()*1.29869);
}

double NNfunction_sb_sLsR::synapse0x1c9d580() {
   return (neuron0x1c75940()*-1.31157);
}

double NNfunction_sb_sLsR::synapse0x1c9d5c0() {
   return (neuron0x1c76310()*-0.0592169);
}

double NNfunction_sb_sLsR::synapse0x1c9d600() {
   return (neuron0x1c76df0()*-0.182373);
}

double NNfunction_sb_sLsR::synapse0x1c9d640() {
   return (neuron0x1c777c0()*-0.210466);
}

double NNfunction_sb_sLsR::synapse0x1c9d680() {
   return (neuron0x1c748a0()*0.367885);
}

double NNfunction_sb_sLsR::synapse0x1c9d6c0() {
   return (neuron0x1c79370()*-3.38573);
}

double NNfunction_sb_sLsR::synapse0x1c9d700() {
   return (neuron0x1c79d40()*0.190186);
}

double NNfunction_sb_sLsR::synapse0x1c9d740() {
   return (neuron0x1c7a710()*-0.13992);
}

double NNfunction_sb_sLsR::synapse0x1c9d780() {
   return (neuron0x1c7b0e0()*-0.144765);
}

double NNfunction_sb_sLsR::synapse0x1c9d210() {
   return (neuron0x1c7cef0()*0.0223802);
}

double NNfunction_sb_sLsR::synapse0x1c9d250() {
   return (neuron0x1c7d1d0()*0.264341);
}

double NNfunction_sb_sLsR::synapse0x1c9d8d0() {
   return (neuron0x1c7dba0()*-2.18182);
}

double NNfunction_sb_sLsR::synapse0x1c9d910() {
   return (neuron0x1c7e570()*-1.90315);
}

double NNfunction_sb_sLsR::synapse0x1c9d950() {
   return (neuron0x1c7ef40()*-0.164735);
}

double NNfunction_sb_sLsR::synapse0x1c9d990() {
   return (neuron0x1c7f910()*0.350544);
}

double NNfunction_sb_sLsR::synapse0x1c9d9d0() {
   return (neuron0x1c78460()*-0.177564);
}

double NNfunction_sb_sLsR::synapse0x1c9da10() {
   return (neuron0x1c78e30()*-0.0138435);
}

double NNfunction_sb_sLsR::synapse0x1c9da50() {
   return (neuron0x1c826a0()*-0.827537);
}

double NNfunction_sb_sLsR::synapse0x1c9da90() {
   return (neuron0x1c83070()*0.421054);
}

double NNfunction_sb_sLsR::synapse0x1c9dad0() {
   return (neuron0x1c83a40()*-0.628742);
}

double NNfunction_sb_sLsR::synapse0x1c9db10() {
   return (neuron0x1c84410()*2.25986);
}

double NNfunction_sb_sLsR::synapse0x1c9db50() {
   return (neuron0x1c84de0()*0.364049);
}

double NNfunction_sb_sLsR::synapse0x1c9db90() {
   return (neuron0x1c857b0()*-0.614217);
}

double NNfunction_sb_sLsR::synapse0x1c9dbd0() {
   return (neuron0x1c86180()*-1.20564);
}

double NNfunction_sb_sLsR::synapse0x1c9dc10() {
   return (neuron0x1c86b50()*-0.194086);
}

double NNfunction_sb_sLsR::synapse0x1c9d7c0() {
   return (neuron0x1c7cbe0()*-0.365787);
}

double NNfunction_sb_sLsR::synapse0x1c9d800() {
   return (neuron0x1c89730()*-0.347759);
}

double NNfunction_sb_sLsR::synapse0x1c9d840() {
   return (neuron0x1c8a100()*-1.06067);
}

double NNfunction_sb_sLsR::synapse0x1c9d880() {
   return (neuron0x1c8aad0()*-0.0159423);
}

double NNfunction_sb_sLsR::synapse0x1c9de60() {
   return (neuron0x1c8b4a0()*0.0575271);
}

double NNfunction_sb_sLsR::synapse0x1c9dea0() {
   return (neuron0x1c8be70()*0.521351);
}

double NNfunction_sb_sLsR::synapse0x1c9dee0() {
   return (neuron0x1c8c840()*-0.293456);
}

double NNfunction_sb_sLsR::synapse0x1c9df20() {
   return (neuron0x1c8d210()*0.067683);
}

double NNfunction_sb_sLsR::synapse0x1c9df60() {
   return (neuron0x1c8dbe0()*-1.06561);
}

double NNfunction_sb_sLsR::synapse0x1c9dfa0() {
   return (neuron0x1c8e7c0()*2.92005);
}

double NNfunction_sb_sLsR::synapse0x1c9dfe0() {
   return (neuron0x1c8f190()*1.40982);
}

double NNfunction_sb_sLsR::synapse0x1c9e020() {
   return (neuron0x1c80010()*-0.112372);
}

double NNfunction_sb_sLsR::synapse0x1c9e060() {
   return (neuron0x1c809e0()*4.46223);
}

double NNfunction_sb_sLsR::synapse0x1c9e0a0() {
   return (neuron0x1c813b0()*-0.259602);
}

double NNfunction_sb_sLsR::synapse0x1c9e0e0() {
   return (neuron0x1c939f0()*-0.293729);
}

double NNfunction_sb_sLsR::synapse0x1c9e120() {
   return (neuron0x1c942a0()*-0.226791);
}

double NNfunction_sb_sLsR::synapse0x1c9e160() {
   return (neuron0x1c94c70()*0.0203315);
}

double NNfunction_sb_sLsR::synapse0x1c9e1a0() {
   return (neuron0x1c95640()*-0.439481);
}

double NNfunction_sb_sLsR::synapse0x1c9e520() {
   return (neuron0x1c715c0()*-0.0843824);
}

double NNfunction_sb_sLsR::synapse0x1c9e560() {
   return (neuron0x1c71ed0()*0.680948);
}

double NNfunction_sb_sLsR::synapse0x1c9e5a0() {
   return (neuron0x1c729b0()*-0.155407);
}

double NNfunction_sb_sLsR::synapse0x1c9e5e0() {
   return (neuron0x1a2c240()*-0.0350229);
}

double NNfunction_sb_sLsR::synapse0x1c9e620() {
   return (neuron0x1c737d0()*-0.00191904);
}

double NNfunction_sb_sLsR::synapse0x1c9e660() {
   return (neuron0x1c741a0()*-1.11868);
}

double NNfunction_sb_sLsR::synapse0x1c9e6a0() {
   return (neuron0x1c74f70()*-0.189794);
}

double NNfunction_sb_sLsR::synapse0x1c9e6e0() {
   return (neuron0x1c75940()*0.737738);
}

double NNfunction_sb_sLsR::synapse0x1c9e720() {
   return (neuron0x1c76310()*-0.00976029);
}

double NNfunction_sb_sLsR::synapse0x1c9e760() {
   return (neuron0x1c76df0()*-0.0584603);
}

double NNfunction_sb_sLsR::synapse0x1c9e7a0() {
   return (neuron0x1c777c0()*-0.116158);
}

double NNfunction_sb_sLsR::synapse0x1c9e7e0() {
   return (neuron0x1c748a0()*-0.354034);
}

double NNfunction_sb_sLsR::synapse0x1c9e820() {
   return (neuron0x1c79370()*0.273684);
}

double NNfunction_sb_sLsR::synapse0x1c9e860() {
   return (neuron0x1c79d40()*0.0633944);
}

double NNfunction_sb_sLsR::synapse0x1c9e8a0() {
   return (neuron0x1c7a710()*-0.0329834);
}

double NNfunction_sb_sLsR::synapse0x1c9e8e0() {
   return (neuron0x1c7b0e0()*-0.00444704);
}

double NNfunction_sb_sLsR::synapse0x1c9e370() {
   return (neuron0x1c7cef0()*0.0083093);
}

double NNfunction_sb_sLsR::synapse0x1c9e3b0() {
   return (neuron0x1c7d1d0()*0.0124733);
}

double NNfunction_sb_sLsR::synapse0x1c9ea30() {
   return (neuron0x1c7dba0()*0.191691);
}

double NNfunction_sb_sLsR::synapse0x1c9ea70() {
   return (neuron0x1c7e570()*0.958678);
}

double NNfunction_sb_sLsR::synapse0x1c9eab0() {
   return (neuron0x1c7ef40()*0.141313);
}

double NNfunction_sb_sLsR::synapse0x1c9eaf0() {
   return (neuron0x1c7f910()*-0.569811);
}

double NNfunction_sb_sLsR::synapse0x1c9eb30() {
   return (neuron0x1c78460()*0.882991);
}

double NNfunction_sb_sLsR::synapse0x1c9eb70() {
   return (neuron0x1c78e30()*-0.0212654);
}

double NNfunction_sb_sLsR::synapse0x1c9ebb0() {
   return (neuron0x1c826a0()*0.157967);
}

double NNfunction_sb_sLsR::synapse0x1c9ebf0() {
   return (neuron0x1c83070()*-0.244308);
}

double NNfunction_sb_sLsR::synapse0x1c9ec30() {
   return (neuron0x1c83a40()*-0.058808);
}

double NNfunction_sb_sLsR::synapse0x1c9ec70() {
   return (neuron0x1c84410()*3.41731);
}

double NNfunction_sb_sLsR::synapse0x1c9ecb0() {
   return (neuron0x1c84de0()*-0.0135796);
}

double NNfunction_sb_sLsR::synapse0x1c9ecf0() {
   return (neuron0x1c857b0()*0.355989);
}

double NNfunction_sb_sLsR::synapse0x1c9ed30() {
   return (neuron0x1c86180()*0.237768);
}

double NNfunction_sb_sLsR::synapse0x1c9ed70() {
   return (neuron0x1c86b50()*-0.00177619);
}

double NNfunction_sb_sLsR::synapse0x1c9e920() {
   return (neuron0x1c7cbe0()*-0.0287408);
}

double NNfunction_sb_sLsR::synapse0x1c9e960() {
   return (neuron0x1c89730()*0.0626022);
}

double NNfunction_sb_sLsR::synapse0x1c9e9a0() {
   return (neuron0x1c8a100()*0.18089);
}

double NNfunction_sb_sLsR::synapse0x1c9e9e0() {
   return (neuron0x1c8aad0()*0.013238);
}

double NNfunction_sb_sLsR::synapse0x1c9efc0() {
   return (neuron0x1c8b4a0()*0.00659521);
}

double NNfunction_sb_sLsR::synapse0x1c9f000() {
   return (neuron0x1c8be70()*-1.74065);
}

double NNfunction_sb_sLsR::synapse0x1c9f040() {
   return (neuron0x1c8c840()*-0.147809);
}

double NNfunction_sb_sLsR::synapse0x1c9f080() {
   return (neuron0x1c8d210()*-0.0272775);
}

double NNfunction_sb_sLsR::synapse0x1c9f0c0() {
   return (neuron0x1c8dbe0()*-0.0915008);
}

double NNfunction_sb_sLsR::synapse0x1c9f100() {
   return (neuron0x1c8e7c0()*-0.4657);
}

double NNfunction_sb_sLsR::synapse0x1c9f140() {
   return (neuron0x1c8f190()*-2.97759);
}

double NNfunction_sb_sLsR::synapse0x1c9f180() {
   return (neuron0x1c80010()*-0.00620238);
}

double NNfunction_sb_sLsR::synapse0x1c9f1c0() {
   return (neuron0x1c809e0()*-0.684122);
}

double NNfunction_sb_sLsR::synapse0x1c9f200() {
   return (neuron0x1c813b0()*0.0544644);
}

double NNfunction_sb_sLsR::synapse0x1c9f240() {
   return (neuron0x1c939f0()*0.0359914);
}

double NNfunction_sb_sLsR::synapse0x1c9f280() {
   return (neuron0x1c942a0()*-0.43346);
}

double NNfunction_sb_sLsR::synapse0x1c9f2c0() {
   return (neuron0x1c94c70()*1.39624);
}

double NNfunction_sb_sLsR::synapse0x1c9f300() {
   return (neuron0x1c95640()*-0.0847306);
}

double NNfunction_sb_sLsR::synapse0x1c9f680() {
   return (neuron0x1c715c0()*0.233828);
}

double NNfunction_sb_sLsR::synapse0x1c9f6c0() {
   return (neuron0x1c71ed0()*0.871987);
}

double NNfunction_sb_sLsR::synapse0x1c9f700() {
   return (neuron0x1c729b0()*-0.387754);
}

double NNfunction_sb_sLsR::synapse0x1c9f740() {
   return (neuron0x1a2c240()*-0.232499);
}

double NNfunction_sb_sLsR::synapse0x1c9f780() {
   return (neuron0x1c737d0()*0.131205);
}

double NNfunction_sb_sLsR::synapse0x1c9f7c0() {
   return (neuron0x1c741a0()*1.21055);
}

double NNfunction_sb_sLsR::synapse0x1c9f800() {
   return (neuron0x1c74f70()*1.41397);
}

double NNfunction_sb_sLsR::synapse0x1c9f840() {
   return (neuron0x1c75940()*0.426189);
}

double NNfunction_sb_sLsR::synapse0x1c9f880() {
   return (neuron0x1c76310()*-0.0282607);
}

double NNfunction_sb_sLsR::synapse0x1c9f8c0() {
   return (neuron0x1c76df0()*-0.0401641);
}

double NNfunction_sb_sLsR::synapse0x1c9f900() {
   return (neuron0x1c777c0()*2.83835);
}

double NNfunction_sb_sLsR::synapse0x1c9f940() {
   return (neuron0x1c748a0()*-0.0287475);
}

double NNfunction_sb_sLsR::synapse0x1c9f980() {
   return (neuron0x1c79370()*-1.98535);
}

double NNfunction_sb_sLsR::synapse0x1c9f9c0() {
   return (neuron0x1c79d40()*0.155229);
}

double NNfunction_sb_sLsR::synapse0x1c9fa00() {
   return (neuron0x1c7a710()*-0.0930512);
}

double NNfunction_sb_sLsR::synapse0x1c9fa40() {
   return (neuron0x1c7b0e0()*-0.0685749);
}

double NNfunction_sb_sLsR::synapse0x1c9f4d0() {
   return (neuron0x1c7cef0()*0.0177243);
}

double NNfunction_sb_sLsR::synapse0x1c9f510() {
   return (neuron0x1c7d1d0()*0.188567);
}

double NNfunction_sb_sLsR::synapse0x1c9fb90() {
   return (neuron0x1c7dba0()*-1.36799);
}

double NNfunction_sb_sLsR::synapse0x1c9fbd0() {
   return (neuron0x1c7e570()*-1.6772);
}

double NNfunction_sb_sLsR::synapse0x1c9fc10() {
   return (neuron0x1c7ef40()*-0.175362);
}

double NNfunction_sb_sLsR::synapse0x1c9fc50() {
   return (neuron0x1c7f910()*1.06399);
}

double NNfunction_sb_sLsR::synapse0x1c9fc90() {
   return (neuron0x1c78460()*1.30207);
}

double NNfunction_sb_sLsR::synapse0x1c9fcd0() {
   return (neuron0x1c78e30()*0.0225409);
}

double NNfunction_sb_sLsR::synapse0x1c9fd10() {
   return (neuron0x1c826a0()*-0.41043);
}

double NNfunction_sb_sLsR::synapse0x1c9fd50() {
   return (neuron0x1c83070()*0.0933967);
}

double NNfunction_sb_sLsR::synapse0x1c9fd90() {
   return (neuron0x1c83a40()*-0.396173);
}

double NNfunction_sb_sLsR::synapse0x1c9fdd0() {
   return (neuron0x1c84410()*-0.831332);
}

double NNfunction_sb_sLsR::synapse0x1c9fe10() {
   return (neuron0x1c84de0()*0.109889);
}

double NNfunction_sb_sLsR::synapse0x1c9fe50() {
   return (neuron0x1c857b0()*-0.117289);
}

double NNfunction_sb_sLsR::synapse0x1c9fe90() {
   return (neuron0x1c86180()*-0.646868);
}

double NNfunction_sb_sLsR::synapse0x1c9fed0() {
   return (neuron0x1c86b50()*-0.121174);
}

double NNfunction_sb_sLsR::synapse0x1c9fa80() {
   return (neuron0x1c7cbe0()*-0.269108);
}

double NNfunction_sb_sLsR::synapse0x1c9fac0() {
   return (neuron0x1c89730()*-0.210739);
}

double NNfunction_sb_sLsR::synapse0x1c9fb00() {
   return (neuron0x1c8a100()*-0.753217);
}

double NNfunction_sb_sLsR::synapse0x1c9fb40() {
   return (neuron0x1c8aad0()*0.00670396);
}

double NNfunction_sb_sLsR::synapse0x1ca0120() {
   return (neuron0x1c8b4a0()*0.0583318);
}

double NNfunction_sb_sLsR::synapse0x1ca0160() {
   return (neuron0x1c8be70()*1.19221);
}

double NNfunction_sb_sLsR::synapse0x1ca01a0() {
   return (neuron0x1c8c840()*-0.392695);
}

double NNfunction_sb_sLsR::synapse0x1ca01e0() {
   return (neuron0x1c8d210()*-0.00538549);
}

double NNfunction_sb_sLsR::synapse0x1ca0220() {
   return (neuron0x1c8dbe0()*-0.756171);
}

double NNfunction_sb_sLsR::synapse0x1ca0260() {
   return (neuron0x1c8e7c0()*1.87395);
}

double NNfunction_sb_sLsR::synapse0x1ca02a0() {
   return (neuron0x1c8f190()*-0.81989);
}

double NNfunction_sb_sLsR::synapse0x1ca02e0() {
   return (neuron0x1c80010()*-0.0534655);
}

double NNfunction_sb_sLsR::synapse0x1ca0320() {
   return (neuron0x1c809e0()*3.92253);
}

double NNfunction_sb_sLsR::synapse0x1ca0360() {
   return (neuron0x1c813b0()*-0.197953);
}

double NNfunction_sb_sLsR::synapse0x1ca03a0() {
   return (neuron0x1c939f0()*-0.202517);
}

double NNfunction_sb_sLsR::synapse0x1ca03e0() {
   return (neuron0x1c942a0()*4.16136);
}

double NNfunction_sb_sLsR::synapse0x1ca0420() {
   return (neuron0x1c94c70()*-0.287349);
}

double NNfunction_sb_sLsR::synapse0x1ca0460() {
   return (neuron0x1c95640()*-4.66254);
}

double NNfunction_sb_sLsR::synapse0x1c71580() {
   return (neuron0x1c9c840()*3.58521);
}

double NNfunction_sb_sLsR::synapse0x1ca06c0() {
   return (neuron0x1c9cbe0()*-8.22082);
}

double NNfunction_sb_sLsR::synapse0x1ca0700() {
   return (neuron0x1c9d080()*-4.87989);
}

double NNfunction_sb_sLsR::synapse0x1ca0740() {
   return (neuron0x1c9e1e0()*-4.69037);
}

double NNfunction_sb_sLsR::synapse0x1ca0780() {
   return (neuron0x1c9f340()*8.92461);
}

