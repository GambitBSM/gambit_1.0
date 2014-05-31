#include "NNfunction_sb_uRsR.h"
#include <cmath>

double NNfunction_sb_uRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4253)/15.3046;
   input1 = (in1 - -2.96032)/1152.14;
   input2 = (in2 - 655.703)/624.756;
   input3 = (in3 - -53.2477)/802.356;
   input4 = (in4 - 1065.71)/958.207;
   input5 = (in5 - 893.266)/947.211;
   input6 = (in6 - 913.015)/956.329;
   input7 = (in7 - 917.883)/931.371;
   input8 = (in8 - 907.908)/961.412;
   input9 = (in9 - 890.426)/945.847;
   input10 = (in10 - 976.488)/942.919;
   input11 = (in11 - 703.075)/844.712;
   input12 = (in12 - 712.266)/856.413;
   input13 = (in13 - 500.894)/511.393;
   input14 = (in14 - 432.616)/436.21;
   input15 = (in15 - 723.348)/821.351;
   input16 = (in16 - 539.97)/568.898;
   input17 = (in17 - 744.247)/876.741;
   input18 = (in18 - 404.236)/424.067;
   input19 = (in19 - 792.369)/868.459;
   input20 = (in20 - -8.72684)/483.956;
   input21 = (in21 - 4.88815)/1161.88;
   input22 = (in22 - 2.4617)/1198;
   input23 = (in23 - -197.618)/602.657;
   switch(index) {
     case 0:
         return neuron0x24b64a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRsR::Value(int index, double* input) {
   input0 = (input[0] - 23.4253)/15.3046;
   input1 = (input[1] - -2.96032)/1152.14;
   input2 = (input[2] - 655.703)/624.756;
   input3 = (input[3] - -53.2477)/802.356;
   input4 = (input[4] - 1065.71)/958.207;
   input5 = (input[5] - 893.266)/947.211;
   input6 = (input[6] - 913.015)/956.329;
   input7 = (input[7] - 917.883)/931.371;
   input8 = (input[8] - 907.908)/961.412;
   input9 = (input[9] - 890.426)/945.847;
   input10 = (input[10] - 976.488)/942.919;
   input11 = (input[11] - 703.075)/844.712;
   input12 = (input[12] - 712.266)/856.413;
   input13 = (input[13] - 500.894)/511.393;
   input14 = (input[14] - 432.616)/436.21;
   input15 = (input[15] - 723.348)/821.351;
   input16 = (input[16] - 539.97)/568.898;
   input17 = (input[17] - 744.247)/876.741;
   input18 = (input[18] - 404.236)/424.067;
   input19 = (input[19] - 792.369)/868.459;
   input20 = (input[20] - -8.72684)/483.956;
   input21 = (input[21] - 4.88815)/1161.88;
   input22 = (input[22] - 2.4617)/1198;
   input23 = (input[23] - -197.618)/602.657;
   switch(index) {
     case 0:
         return neuron0x24b64a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRsR::neuron0x2482560() {
   return input0;
}

double NNfunction_sb_uRsR::neuron0x24828a0() {
   return input1;
}

double NNfunction_sb_uRsR::neuron0x2482be0() {
   return input2;
}

double NNfunction_sb_uRsR::neuron0x2482f20() {
   return input3;
}

double NNfunction_sb_uRsR::neuron0x2483260() {
   return input4;
}

double NNfunction_sb_uRsR::neuron0x24835a0() {
   return input5;
}

double NNfunction_sb_uRsR::neuron0x24838e0() {
   return input6;
}

double NNfunction_sb_uRsR::neuron0x2483c20() {
   return input7;
}

double NNfunction_sb_uRsR::neuron0x2483f60() {
   return input8;
}

double NNfunction_sb_uRsR::neuron0x24842a0() {
   return input9;
}

double NNfunction_sb_uRsR::neuron0x24845e0() {
   return input10;
}

double NNfunction_sb_uRsR::neuron0x2484920() {
   return input11;
}

double NNfunction_sb_uRsR::neuron0x2484c60() {
   return input12;
}

double NNfunction_sb_uRsR::neuron0x2484fa0() {
   return input13;
}

double NNfunction_sb_uRsR::neuron0x24852e0() {
   return input14;
}

double NNfunction_sb_uRsR::neuron0x2485620() {
   return input15;
}

double NNfunction_sb_uRsR::neuron0x2485960() {
   return input16;
}

double NNfunction_sb_uRsR::neuron0x2485ec0() {
   return input17;
}

double NNfunction_sb_uRsR::neuron0x24860e0() {
   return input18;
}

double NNfunction_sb_uRsR::neuron0x2486420() {
   return input19;
}

double NNfunction_sb_uRsR::neuron0x2486760() {
   return input20;
}

double NNfunction_sb_uRsR::neuron0x2486aa0() {
   return input21;
}

double NNfunction_sb_uRsR::neuron0x2486de0() {
   return input22;
}

double NNfunction_sb_uRsR::neuron0x2487120() {
   return input23;
}

double NNfunction_sb_uRsR::input0x24875c0() {
   double input = -0.0878425;
   input += synapse0x22423d0();
   input += synapse0x2482420();
   input += synapse0x2482460();
   input += synapse0x2487870();
   input += synapse0x24878b0();
   input += synapse0x24878f0();
   input += synapse0x2487930();
   input += synapse0x2487970();
   input += synapse0x24879b0();
   input += synapse0x24879f0();
   input += synapse0x2487a30();
   input += synapse0x2487a70();
   input += synapse0x2487ab0();
   input += synapse0x2487af0();
   input += synapse0x2487b30();
   input += synapse0x2487b70();
   input += synapse0x2482390();
   input += synapse0x24823d0();
   input += synapse0x2233c70();
   input += synapse0x2233cb0();
   input += synapse0x2487dd0();
   input += synapse0x2487e10();
   input += synapse0x2487e50();
   input += synapse0x2487e90();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24875c0() {
   double input = input0x24875c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2487ed0() {
   double input = 0.93562;
   input += synapse0x2488210();
   input += synapse0x2488250();
   input += synapse0x2488290();
   input += synapse0x24882d0();
   input += synapse0x2488310();
   input += synapse0x2488350();
   input += synapse0x2488390();
   input += synapse0x24883d0();
   input += synapse0x2488410();
   input += synapse0x2487cc0();
   input += synapse0x2487d00();
   input += synapse0x2487d40();
   input += synapse0x2487d80();
   input += synapse0x2488660();
   input += synapse0x24886a0();
   input += synapse0x24886e0();
   input += synapse0x2488060();
   input += synapse0x24880a0();
   input += synapse0x2488830();
   input += synapse0x2488870();
   input += synapse0x24888b0();
   input += synapse0x24888f0();
   input += synapse0x2488930();
   input += synapse0x2488970();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2487ed0() {
   double input = input0x2487ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24889b0() {
   double input = 1.39138;
   input += synapse0x2488cf0();
   input += synapse0x2488d30();
   input += synapse0x2488d70();
   input += synapse0x2488db0();
   input += synapse0x2488df0();
   input += synapse0x2488e30();
   input += synapse0x2488e70();
   input += synapse0x2488eb0();
   input += synapse0x2488ef0();
   input += synapse0x2488f30();
   input += synapse0x2488f70();
   input += synapse0x2488fb0();
   input += synapse0x2488ff0();
   input += synapse0x2489030();
   input += synapse0x2489070();
   input += synapse0x24890b0();
   input += synapse0x2488b40();
   input += synapse0x2488b80();
   input += synapse0x2241ac0();
   input += synapse0x2241b00();
   input += synapse0x24715f0();
   input += synapse0x2471630();
   input += synapse0x2471670();
   input += synapse0x24824a0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24889b0() {
   double input = input0x24889b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2242240() {
   double input = -2.2111;
   input += synapse0x2488600();
   input += synapse0x24824e0();
   input += synapse0x2482520();
   input += synapse0x2489200();
   input += synapse0x2489240();
   input += synapse0x2489280();
   input += synapse0x24892c0();
   input += synapse0x2489300();
   input += synapse0x2489340();
   input += synapse0x2489380();
   input += synapse0x24893c0();
   input += synapse0x2489400();
   input += synapse0x2489440();
   input += synapse0x2489480();
   input += synapse0x24894c0();
   input += synapse0x2489500();
   input += synapse0x2488450();
   input += synapse0x2488490();
   input += synapse0x2489650();
   input += synapse0x2489690();
   input += synapse0x24896d0();
   input += synapse0x2489710();
   input += synapse0x2489750();
   input += synapse0x2489790();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2242240() {
   double input = input0x2242240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24897d0() {
   double input = 0.397638;
   input += synapse0x2489b10();
   input += synapse0x2489b50();
   input += synapse0x2489b90();
   input += synapse0x2489bd0();
   input += synapse0x2489c10();
   input += synapse0x2489c50();
   input += synapse0x2489c90();
   input += synapse0x2489cd0();
   input += synapse0x2489d10();
   input += synapse0x2489d50();
   input += synapse0x2489d90();
   input += synapse0x2489dd0();
   input += synapse0x2489e10();
   input += synapse0x2489e50();
   input += synapse0x2489e90();
   input += synapse0x2489ed0();
   input += synapse0x2489960();
   input += synapse0x24899a0();
   input += synapse0x248a020();
   input += synapse0x248a060();
   input += synapse0x248a0a0();
   input += synapse0x248a0e0();
   input += synapse0x248a120();
   input += synapse0x248a160();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24897d0() {
   double input = input0x24897d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248a1a0() {
   double input = 0.549945;
   input += synapse0x248a4e0();
   input += synapse0x248a520();
   input += synapse0x248a560();
   input += synapse0x248a5a0();
   input += synapse0x248a5e0();
   input += synapse0x248a620();
   input += synapse0x248a660();
   input += synapse0x248a6a0();
   input += synapse0x248a6e0();
   input += synapse0x2241e30();
   input += synapse0x2241e70();
   input += synapse0x2241eb0();
   input += synapse0x2241ef0();
   input += synapse0x2241f30();
   input += synapse0x2241f70();
   input += synapse0x2241fb0();
   input += synapse0x248a330();
   input += synapse0x248a370();
   input += synapse0x2242100();
   input += synapse0x2242140();
   input += synapse0x2242180();
   input += synapse0x22421c0();
   input += synapse0x2242200();
   input += synapse0x248af30();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248a1a0() {
   double input = input0x248a1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248af70() {
   double input = -0.13234;
   input += synapse0x248b2b0();
   input += synapse0x248b2f0();
   input += synapse0x248b330();
   input += synapse0x248b370();
   input += synapse0x248b3b0();
   input += synapse0x248b3f0();
   input += synapse0x248b430();
   input += synapse0x248b470();
   input += synapse0x248b4b0();
   input += synapse0x248b4f0();
   input += synapse0x248b530();
   input += synapse0x248b570();
   input += synapse0x248b5b0();
   input += synapse0x248b5f0();
   input += synapse0x248b630();
   input += synapse0x248b670();
   input += synapse0x248b100();
   input += synapse0x248b140();
   input += synapse0x248b7c0();
   input += synapse0x248b800();
   input += synapse0x248b840();
   input += synapse0x248b880();
   input += synapse0x248b8c0();
   input += synapse0x248b900();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248af70() {
   double input = input0x248af70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248b940() {
   double input = -1.73458;
   input += synapse0x248bc80();
   input += synapse0x248bcc0();
   input += synapse0x248bd00();
   input += synapse0x248bd40();
   input += synapse0x248bd80();
   input += synapse0x248bdc0();
   input += synapse0x248be00();
   input += synapse0x248be40();
   input += synapse0x248be80();
   input += synapse0x248bec0();
   input += synapse0x248bf00();
   input += synapse0x248bf40();
   input += synapse0x248bf80();
   input += synapse0x248bfc0();
   input += synapse0x248c000();
   input += synapse0x248c040();
   input += synapse0x248bad0();
   input += synapse0x248bb10();
   input += synapse0x248c190();
   input += synapse0x248c1d0();
   input += synapse0x248c210();
   input += synapse0x248c250();
   input += synapse0x248c290();
   input += synapse0x248c2d0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248b940() {
   double input = input0x248b940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248c310() {
   double input = -1.20716;
   input += synapse0x2485db0();
   input += synapse0x2485df0();
   input += synapse0x2485e30();
   input += synapse0x2485e70();
   input += synapse0x248c860();
   input += synapse0x248c8a0();
   input += synapse0x248c8e0();
   input += synapse0x248c920();
   input += synapse0x248c960();
   input += synapse0x248c9a0();
   input += synapse0x248c9e0();
   input += synapse0x248ca20();
   input += synapse0x248ca60();
   input += synapse0x248caa0();
   input += synapse0x248cae0();
   input += synapse0x248cb20();
   input += synapse0x248c4a0();
   input += synapse0x248c4e0();
   input += synapse0x248cc70();
   input += synapse0x248ccb0();
   input += synapse0x248ccf0();
   input += synapse0x248cd30();
   input += synapse0x248cd70();
   input += synapse0x248cdb0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248c310() {
   double input = input0x248c310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248cdf0() {
   double input = -2.47605;
   input += synapse0x248d130();
   input += synapse0x248d170();
   input += synapse0x248d1b0();
   input += synapse0x248d1f0();
   input += synapse0x248d230();
   input += synapse0x248d270();
   input += synapse0x248d2b0();
   input += synapse0x248d2f0();
   input += synapse0x248d330();
   input += synapse0x248d370();
   input += synapse0x248d3b0();
   input += synapse0x248d3f0();
   input += synapse0x248d430();
   input += synapse0x248d470();
   input += synapse0x248d4b0();
   input += synapse0x248d4f0();
   input += synapse0x248cf80();
   input += synapse0x248cfc0();
   input += synapse0x248d640();
   input += synapse0x248d680();
   input += synapse0x248d6c0();
   input += synapse0x248d700();
   input += synapse0x248d740();
   input += synapse0x248d780();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248cdf0() {
   double input = input0x248cdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248d7c0() {
   double input = 1.33352;
   input += synapse0x248db00();
   input += synapse0x248db40();
   input += synapse0x248db80();
   input += synapse0x248dbc0();
   input += synapse0x248dc00();
   input += synapse0x248dc40();
   input += synapse0x248dc80();
   input += synapse0x248dcc0();
   input += synapse0x248dd00();
   input += synapse0x248dd40();
   input += synapse0x248dd80();
   input += synapse0x248ddc0();
   input += synapse0x248de00();
   input += synapse0x248de40();
   input += synapse0x248de80();
   input += synapse0x248dec0();
   input += synapse0x248d950();
   input += synapse0x248d990();
   input += synapse0x248a720();
   input += synapse0x248a760();
   input += synapse0x248a7a0();
   input += synapse0x248a7e0();
   input += synapse0x248a820();
   input += synapse0x248a860();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248d7c0() {
   double input = input0x248d7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248a8a0() {
   double input = -0.335778;
   input += synapse0x248abe0();
   input += synapse0x248ac20();
   input += synapse0x248ac60();
   input += synapse0x248aca0();
   input += synapse0x248ace0();
   input += synapse0x248ad20();
   input += synapse0x248ad60();
   input += synapse0x248ada0();
   input += synapse0x248ade0();
   input += synapse0x248ae20();
   input += synapse0x248ae60();
   input += synapse0x248aea0();
   input += synapse0x248aee0();
   input += synapse0x248f020();
   input += synapse0x248f060();
   input += synapse0x248f0a0();
   input += synapse0x248aa30();
   input += synapse0x248aa70();
   input += synapse0x248f1f0();
   input += synapse0x248f230();
   input += synapse0x248f270();
   input += synapse0x248f2b0();
   input += synapse0x248f2f0();
   input += synapse0x248f330();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248a8a0() {
   double input = input0x248a8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248f370() {
   double input = 0.686746;
   input += synapse0x248f6b0();
   input += synapse0x248f6f0();
   input += synapse0x248f730();
   input += synapse0x248f770();
   input += synapse0x248f7b0();
   input += synapse0x248f7f0();
   input += synapse0x248f830();
   input += synapse0x248f870();
   input += synapse0x248f8b0();
   input += synapse0x248f8f0();
   input += synapse0x248f930();
   input += synapse0x248f970();
   input += synapse0x248f9b0();
   input += synapse0x248f9f0();
   input += synapse0x248fa30();
   input += synapse0x248fa70();
   input += synapse0x248f500();
   input += synapse0x248f540();
   input += synapse0x248fbc0();
   input += synapse0x248fc00();
   input += synapse0x248fc40();
   input += synapse0x248fc80();
   input += synapse0x248fcc0();
   input += synapse0x248fd00();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248f370() {
   double input = input0x248f370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248fd40() {
   double input = 0.841891;
   input += synapse0x2490080();
   input += synapse0x24900c0();
   input += synapse0x2490100();
   input += synapse0x2490140();
   input += synapse0x2490180();
   input += synapse0x24901c0();
   input += synapse0x2490200();
   input += synapse0x2490240();
   input += synapse0x2490280();
   input += synapse0x24902c0();
   input += synapse0x2490300();
   input += synapse0x2490340();
   input += synapse0x2490380();
   input += synapse0x24903c0();
   input += synapse0x2490400();
   input += synapse0x2490440();
   input += synapse0x248fed0();
   input += synapse0x248ff10();
   input += synapse0x2490590();
   input += synapse0x24905d0();
   input += synapse0x2490610();
   input += synapse0x2490650();
   input += synapse0x2490690();
   input += synapse0x24906d0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248fd40() {
   double input = input0x248fd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2490710() {
   double input = -1.03693;
   input += synapse0x2490a50();
   input += synapse0x2490a90();
   input += synapse0x2490ad0();
   input += synapse0x2490b10();
   input += synapse0x2490b50();
   input += synapse0x2490b90();
   input += synapse0x2490bd0();
   input += synapse0x2490c10();
   input += synapse0x2490c50();
   input += synapse0x2490c90();
   input += synapse0x2490cd0();
   input += synapse0x2490d10();
   input += synapse0x2490d50();
   input += synapse0x2490d90();
   input += synapse0x2490dd0();
   input += synapse0x2490e10();
   input += synapse0x24908a0();
   input += synapse0x24908e0();
   input += synapse0x2490f60();
   input += synapse0x2490fa0();
   input += synapse0x2490fe0();
   input += synapse0x2491020();
   input += synapse0x2491060();
   input += synapse0x24910a0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2490710() {
   double input = input0x2490710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24910e0() {
   double input = -0.289126;
   input += synapse0x2491420();
   input += synapse0x2482780();
   input += synapse0x24827c0();
   input += synapse0x2482ac0();
   input += synapse0x2482b00();
   input += synapse0x2482e00();
   input += synapse0x2482e40();
   input += synapse0x2483140();
   input += synapse0x2483180();
   input += synapse0x2483480();
   input += synapse0x24834c0();
   input += synapse0x24837c0();
   input += synapse0x2483800();
   input += synapse0x2483b00();
   input += synapse0x2483b40();
   input += synapse0x2483e40();
   input += synapse0x2483e80();
   input += synapse0x2484180();
   input += synapse0x24841c0();
   input += synapse0x24844c0();
   input += synapse0x2484500();
   input += synapse0x2484800();
   input += synapse0x2484840();
   input += synapse0x2484b40();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24910e0() {
   double input = input0x24910e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2492ef0() {
   double input = 0.496782;
   input += synapse0x2484b80();
   input += synapse0x2485840();
   input += synapse0x2485880();
   input += synapse0x2491270();
   input += synapse0x24912b0();
   input += synapse0x2485b80();
   input += synapse0x2485bc0();
   input += synapse0x2233b50();
   input += synapse0x2233b90();
   input += synapse0x2486300();
   input += synapse0x2486340();
   input += synapse0x2486640();
   input += synapse0x2486680();
   input += synapse0x2486980();
   input += synapse0x24869c0();
   input += synapse0x2486cc0();
   input += synapse0x2486d00();
   input += synapse0x2487000();
   input += synapse0x2487040();
   input += synapse0x2487340();
   input += synapse0x2487380();
   input += synapse0x2484e80();
   input += synapse0x2484ec0();
   input += synapse0x2493190();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2492ef0() {
   double input = input0x2492ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24931d0() {
   double input = -1.51608;
   input += synapse0x2493510();
   input += synapse0x2493550();
   input += synapse0x2493590();
   input += synapse0x24935d0();
   input += synapse0x2493610();
   input += synapse0x2493650();
   input += synapse0x2493690();
   input += synapse0x24936d0();
   input += synapse0x2493710();
   input += synapse0x2493750();
   input += synapse0x2493790();
   input += synapse0x24937d0();
   input += synapse0x2493810();
   input += synapse0x2493850();
   input += synapse0x2493890();
   input += synapse0x24938d0();
   input += synapse0x2493360();
   input += synapse0x24933a0();
   input += synapse0x2493a20();
   input += synapse0x2493a60();
   input += synapse0x2493aa0();
   input += synapse0x2493ae0();
   input += synapse0x2493b20();
   input += synapse0x2493b60();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24931d0() {
   double input = input0x24931d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2493ba0() {
   double input = -0.4363;
   input += synapse0x2493ee0();
   input += synapse0x2493f20();
   input += synapse0x2493f60();
   input += synapse0x2493fa0();
   input += synapse0x2493fe0();
   input += synapse0x2494020();
   input += synapse0x2494060();
   input += synapse0x24940a0();
   input += synapse0x24940e0();
   input += synapse0x2494120();
   input += synapse0x2494160();
   input += synapse0x24941a0();
   input += synapse0x24941e0();
   input += synapse0x2494220();
   input += synapse0x2494260();
   input += synapse0x24942a0();
   input += synapse0x2493d30();
   input += synapse0x2493d70();
   input += synapse0x24943f0();
   input += synapse0x2494430();
   input += synapse0x2494470();
   input += synapse0x24944b0();
   input += synapse0x24944f0();
   input += synapse0x2494530();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2493ba0() {
   double input = input0x2493ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2494570() {
   double input = 0.423208;
   input += synapse0x24948b0();
   input += synapse0x24948f0();
   input += synapse0x2494930();
   input += synapse0x2494970();
   input += synapse0x24949b0();
   input += synapse0x24949f0();
   input += synapse0x2494a30();
   input += synapse0x2494a70();
   input += synapse0x2494ab0();
   input += synapse0x2494af0();
   input += synapse0x2494b30();
   input += synapse0x2494b70();
   input += synapse0x2494bb0();
   input += synapse0x2494bf0();
   input += synapse0x2494c30();
   input += synapse0x2494c70();
   input += synapse0x2494700();
   input += synapse0x2494740();
   input += synapse0x2494dc0();
   input += synapse0x2494e00();
   input += synapse0x2494e40();
   input += synapse0x2494e80();
   input += synapse0x2494ec0();
   input += synapse0x2494f00();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2494570() {
   double input = input0x2494570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2494f40() {
   double input = 0.223867;
   input += synapse0x2495280();
   input += synapse0x24952c0();
   input += synapse0x2495300();
   input += synapse0x2495340();
   input += synapse0x2495380();
   input += synapse0x24953c0();
   input += synapse0x2495400();
   input += synapse0x2495440();
   input += synapse0x2495480();
   input += synapse0x24954c0();
   input += synapse0x2495500();
   input += synapse0x2495540();
   input += synapse0x2495580();
   input += synapse0x24955c0();
   input += synapse0x2495600();
   input += synapse0x2495640();
   input += synapse0x24950d0();
   input += synapse0x2495110();
   input += synapse0x2495790();
   input += synapse0x24957d0();
   input += synapse0x2495810();
   input += synapse0x2495850();
   input += synapse0x2495890();
   input += synapse0x24958d0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2494f40() {
   double input = input0x2494f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2495910() {
   double input = -0.588011;
   input += synapse0x2495c50();
   input += synapse0x2495c90();
   input += synapse0x2495cd0();
   input += synapse0x2495d10();
   input += synapse0x2495d50();
   input += synapse0x2495d90();
   input += synapse0x2495dd0();
   input += synapse0x2495e10();
   input += synapse0x2495e50();
   input += synapse0x248e010();
   input += synapse0x248e050();
   input += synapse0x248e090();
   input += synapse0x248e0d0();
   input += synapse0x248e110();
   input += synapse0x248e150();
   input += synapse0x248e190();
   input += synapse0x2495aa0();
   input += synapse0x2495ae0();
   input += synapse0x248e2e0();
   input += synapse0x248e320();
   input += synapse0x248e360();
   input += synapse0x248e3a0();
   input += synapse0x248e3e0();
   input += synapse0x248e420();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2495910() {
   double input = input0x2495910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248e460() {
   double input = -0.396186;
   input += synapse0x248e7a0();
   input += synapse0x248e7e0();
   input += synapse0x248e820();
   input += synapse0x248e860();
   input += synapse0x248e8a0();
   input += synapse0x248e8e0();
   input += synapse0x248e920();
   input += synapse0x248e960();
   input += synapse0x248e9a0();
   input += synapse0x248e9e0();
   input += synapse0x248ea20();
   input += synapse0x248ea60();
   input += synapse0x248eaa0();
   input += synapse0x248eae0();
   input += synapse0x248eb20();
   input += synapse0x248eb60();
   input += synapse0x248e5f0();
   input += synapse0x248e630();
   input += synapse0x248ecb0();
   input += synapse0x248ecf0();
   input += synapse0x248ed30();
   input += synapse0x248ed70();
   input += synapse0x248edb0();
   input += synapse0x248edf0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248e460() {
   double input = input0x248e460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x248ee30() {
   double input = 1.76339;
   input += synapse0x248efc0();
   input += synapse0x2498050();
   input += synapse0x2498090();
   input += synapse0x24980d0();
   input += synapse0x2498110();
   input += synapse0x2498150();
   input += synapse0x2498190();
   input += synapse0x24981d0();
   input += synapse0x2498210();
   input += synapse0x2498250();
   input += synapse0x2498290();
   input += synapse0x24982d0();
   input += synapse0x2498310();
   input += synapse0x2498350();
   input += synapse0x2498390();
   input += synapse0x24983d0();
   input += synapse0x2497ea0();
   input += synapse0x2497ee0();
   input += synapse0x2498520();
   input += synapse0x2498560();
   input += synapse0x24985a0();
   input += synapse0x24985e0();
   input += synapse0x2498620();
   input += synapse0x2498660();
   return input;
}

double NNfunction_sb_uRsR::neuron0x248ee30() {
   double input = input0x248ee30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24986a0() {
   double input = 1.03468;
   input += synapse0x24989e0();
   input += synapse0x2498a20();
   input += synapse0x2498a60();
   input += synapse0x2498aa0();
   input += synapse0x2498ae0();
   input += synapse0x2498b20();
   input += synapse0x2498b60();
   input += synapse0x2498ba0();
   input += synapse0x2498be0();
   input += synapse0x2498c20();
   input += synapse0x2498c60();
   input += synapse0x2498ca0();
   input += synapse0x2498ce0();
   input += synapse0x2498d20();
   input += synapse0x2498d60();
   input += synapse0x2498da0();
   input += synapse0x2498830();
   input += synapse0x2498870();
   input += synapse0x2498ef0();
   input += synapse0x2498f30();
   input += synapse0x2498f70();
   input += synapse0x2498fb0();
   input += synapse0x2498ff0();
   input += synapse0x2499030();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24986a0() {
   double input = input0x24986a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2499070() {
   double input = 1.40951;
   input += synapse0x24993b0();
   input += synapse0x24993f0();
   input += synapse0x2499430();
   input += synapse0x2499470();
   input += synapse0x24994b0();
   input += synapse0x24994f0();
   input += synapse0x2499530();
   input += synapse0x2499570();
   input += synapse0x24995b0();
   input += synapse0x24995f0();
   input += synapse0x2499630();
   input += synapse0x2499670();
   input += synapse0x24996b0();
   input += synapse0x24996f0();
   input += synapse0x2499730();
   input += synapse0x2499770();
   input += synapse0x2499200();
   input += synapse0x2499240();
   input += synapse0x24998c0();
   input += synapse0x2499900();
   input += synapse0x2499940();
   input += synapse0x2499980();
   input += synapse0x24999c0();
   input += synapse0x2499a00();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2499070() {
   double input = input0x2499070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2499a40() {
   double input = 2.44707;
   input += synapse0x2499d80();
   input += synapse0x2499dc0();
   input += synapse0x2499e00();
   input += synapse0x2499e40();
   input += synapse0x2499e80();
   input += synapse0x2499ec0();
   input += synapse0x2499f00();
   input += synapse0x2499f40();
   input += synapse0x2499f80();
   input += synapse0x2499fc0();
   input += synapse0x249a000();
   input += synapse0x249a040();
   input += synapse0x249a080();
   input += synapse0x249a0c0();
   input += synapse0x249a100();
   input += synapse0x249a140();
   input += synapse0x2499bd0();
   input += synapse0x2499c10();
   input += synapse0x249a290();
   input += synapse0x249a2d0();
   input += synapse0x249a310();
   input += synapse0x249a350();
   input += synapse0x249a390();
   input += synapse0x249a3d0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2499a40() {
   double input = input0x2499a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x249a410() {
   double input = -0.525996;
   input += synapse0x249a750();
   input += synapse0x249a790();
   input += synapse0x249a7d0();
   input += synapse0x249a810();
   input += synapse0x249a850();
   input += synapse0x249a890();
   input += synapse0x249a8d0();
   input += synapse0x249a910();
   input += synapse0x249a950();
   input += synapse0x249a990();
   input += synapse0x249a9d0();
   input += synapse0x249aa10();
   input += synapse0x249aa50();
   input += synapse0x249aa90();
   input += synapse0x249aad0();
   input += synapse0x249ab10();
   input += synapse0x249a5a0();
   input += synapse0x249a5e0();
   input += synapse0x249ac60();
   input += synapse0x249aca0();
   input += synapse0x249ace0();
   input += synapse0x249ad20();
   input += synapse0x249ad60();
   input += synapse0x249ada0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x249a410() {
   double input = input0x249a410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x249ade0() {
   double input = 0.83009;
   input += synapse0x249b120();
   input += synapse0x249b160();
   input += synapse0x249b1a0();
   input += synapse0x249b1e0();
   input += synapse0x249b220();
   input += synapse0x249b260();
   input += synapse0x249b2a0();
   input += synapse0x249b2e0();
   input += synapse0x249b320();
   input += synapse0x249b360();
   input += synapse0x249b3a0();
   input += synapse0x249b3e0();
   input += synapse0x249b420();
   input += synapse0x249b460();
   input += synapse0x249b4a0();
   input += synapse0x249b4e0();
   input += synapse0x249af70();
   input += synapse0x249afb0();
   input += synapse0x249b630();
   input += synapse0x249b670();
   input += synapse0x249b6b0();
   input += synapse0x249b6f0();
   input += synapse0x249b730();
   input += synapse0x249b770();
   return input;
}

double NNfunction_sb_uRsR::neuron0x249ade0() {
   double input = input0x249ade0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x249b7b0() {
   double input = 0.290744;
   input += synapse0x249baf0();
   input += synapse0x249bb30();
   input += synapse0x249bb70();
   input += synapse0x249bbb0();
   input += synapse0x249bbf0();
   input += synapse0x249bc30();
   input += synapse0x249bc70();
   input += synapse0x249bcb0();
   input += synapse0x249bcf0();
   input += synapse0x249bd30();
   input += synapse0x249bd70();
   input += synapse0x249bdb0();
   input += synapse0x249bdf0();
   input += synapse0x249be30();
   input += synapse0x249be70();
   input += synapse0x249beb0();
   input += synapse0x249b940();
   input += synapse0x249b980();
   input += synapse0x249c000();
   input += synapse0x249c040();
   input += synapse0x249c080();
   input += synapse0x249c0c0();
   input += synapse0x249c100();
   input += synapse0x249c140();
   return input;
}

double NNfunction_sb_uRsR::neuron0x249b7b0() {
   double input = input0x249b7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x249c180() {
   double input = -0.96525;
   input += synapse0x249c4c0();
   input += synapse0x249c500();
   input += synapse0x249c540();
   input += synapse0x249c580();
   input += synapse0x249c5c0();
   input += synapse0x249c600();
   input += synapse0x249c640();
   input += synapse0x249c680();
   input += synapse0x249c6c0();
   input += synapse0x249c700();
   input += synapse0x249c740();
   input += synapse0x249c780();
   input += synapse0x249c7c0();
   input += synapse0x249c800();
   input += synapse0x249c840();
   input += synapse0x249c880();
   input += synapse0x249c310();
   input += synapse0x249c350();
   input += synapse0x249c9d0();
   input += synapse0x249ca10();
   input += synapse0x249ca50();
   input += synapse0x249ca90();
   input += synapse0x249cad0();
   input += synapse0x249cb10();
   return input;
}

double NNfunction_sb_uRsR::neuron0x249c180() {
   double input = input0x249c180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x249cb50() {
   double input = 2.72202;
   input += synapse0x249ce90();
   input += synapse0x2491460();
   input += synapse0x24914a0();
   input += synapse0x24914e0();
   input += synapse0x2491730();
   input += synapse0x2491770();
   input += synapse0x24917b0();
   input += synapse0x2491a00();
   input += synapse0x2491a40();
   input += synapse0x2491c90();
   input += synapse0x2491cd0();
   input += synapse0x2491d10();
   input += synapse0x2491f60();
   input += synapse0x2491fa0();
   input += synapse0x24921f0();
   input += synapse0x2492230();
   input += synapse0x249cce0();
   input += synapse0x249cd20();
   input += synapse0x2492380();
   input += synapse0x2492890();
   input += synapse0x24928d0();
   input += synapse0x2492910();
   input += synapse0x2492b60();
   input += synapse0x2492ba0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x249cb50() {
   double input = input0x249cb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2492be0() {
   double input = 2.31654;
   input += synapse0x2492450();
   input += synapse0x2492490();
   input += synapse0x24924d0();
   input += synapse0x2492510();
   input += synapse0x2492e90();
   input += synapse0x249f1e0();
   input += synapse0x249f220();
   input += synapse0x249f260();
   input += synapse0x249f2a0();
   input += synapse0x249f2e0();
   input += synapse0x249f320();
   input += synapse0x249f360();
   input += synapse0x249f3a0();
   input += synapse0x249f3e0();
   input += synapse0x249f420();
   input += synapse0x249f460();
   input += synapse0x2492d70();
   input += synapse0x2492db0();
   input += synapse0x249f5b0();
   input += synapse0x249f5f0();
   input += synapse0x249f630();
   input += synapse0x249f670();
   input += synapse0x249f6b0();
   input += synapse0x249f6f0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2492be0() {
   double input = input0x2492be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x249f730() {
   double input = 1.11278;
   input += synapse0x249fa70();
   input += synapse0x249fab0();
   input += synapse0x249faf0();
   input += synapse0x249fb30();
   input += synapse0x249fb70();
   input += synapse0x249fbb0();
   input += synapse0x249fbf0();
   input += synapse0x249fc30();
   input += synapse0x249fc70();
   input += synapse0x249fcb0();
   input += synapse0x249fcf0();
   input += synapse0x249fd30();
   input += synapse0x249fd70();
   input += synapse0x249fdb0();
   input += synapse0x249fdf0();
   input += synapse0x249fe30();
   input += synapse0x249f8c0();
   input += synapse0x249f900();
   input += synapse0x249ff80();
   input += synapse0x249ffc0();
   input += synapse0x24a0000();
   input += synapse0x24a0040();
   input += synapse0x24a0080();
   input += synapse0x24a00c0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x249f730() {
   double input = input0x249f730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a0100() {
   double input = -0.127601;
   input += synapse0x24a0440();
   input += synapse0x24a0480();
   input += synapse0x24a04c0();
   input += synapse0x24a0500();
   input += synapse0x24a0540();
   input += synapse0x24a0580();
   input += synapse0x24a05c0();
   input += synapse0x24a0600();
   input += synapse0x24a0640();
   input += synapse0x24a0680();
   input += synapse0x24a06c0();
   input += synapse0x24a0700();
   input += synapse0x24a0740();
   input += synapse0x24a0780();
   input += synapse0x24a07c0();
   input += synapse0x24a0800();
   input += synapse0x24a0290();
   input += synapse0x24a02d0();
   input += synapse0x24a0950();
   input += synapse0x24a0990();
   input += synapse0x24a09d0();
   input += synapse0x24a0a10();
   input += synapse0x24a0a50();
   input += synapse0x24a0a90();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a0100() {
   double input = input0x24a0100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a0ad0() {
   double input = 3.91288;
   input += synapse0x24a0e10();
   input += synapse0x24a0e50();
   input += synapse0x24a0e90();
   input += synapse0x24a0ed0();
   input += synapse0x24a0f10();
   input += synapse0x24a0f50();
   input += synapse0x24a0f90();
   input += synapse0x24a0fd0();
   input += synapse0x24a1010();
   input += synapse0x24a1050();
   input += synapse0x24a1090();
   input += synapse0x24a10d0();
   input += synapse0x24a1110();
   input += synapse0x24a1150();
   input += synapse0x24a1190();
   input += synapse0x24a11d0();
   input += synapse0x24a0c60();
   input += synapse0x24a0ca0();
   input += synapse0x24a1320();
   input += synapse0x24a1360();
   input += synapse0x24a13a0();
   input += synapse0x24a13e0();
   input += synapse0x24a1420();
   input += synapse0x24a1460();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a0ad0() {
   double input = input0x24a0ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a14a0() {
   double input = 2.66767;
   input += synapse0x24a17e0();
   input += synapse0x24a1820();
   input += synapse0x24a1860();
   input += synapse0x24a18a0();
   input += synapse0x24a18e0();
   input += synapse0x24a1920();
   input += synapse0x24a1960();
   input += synapse0x24a19a0();
   input += synapse0x24a19e0();
   input += synapse0x24a1a20();
   input += synapse0x24a1a60();
   input += synapse0x24a1aa0();
   input += synapse0x24a1ae0();
   input += synapse0x24a1b20();
   input += synapse0x24a1b60();
   input += synapse0x24a1ba0();
   input += synapse0x24a1630();
   input += synapse0x24a1670();
   input += synapse0x24a1cf0();
   input += synapse0x24a1d30();
   input += synapse0x24a1d70();
   input += synapse0x24a1db0();
   input += synapse0x24a1df0();
   input += synapse0x24a1e30();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a14a0() {
   double input = input0x24a14a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a1e70() {
   double input = 1.7559;
   input += synapse0x24a21b0();
   input += synapse0x24a21f0();
   input += synapse0x24a2230();
   input += synapse0x24a2270();
   input += synapse0x24a22b0();
   input += synapse0x24a22f0();
   input += synapse0x24a2330();
   input += synapse0x24a2370();
   input += synapse0x24a23b0();
   input += synapse0x24a23f0();
   input += synapse0x24a2430();
   input += synapse0x24a2470();
   input += synapse0x24a24b0();
   input += synapse0x24a24f0();
   input += synapse0x24a2530();
   input += synapse0x24a2570();
   input += synapse0x24a2000();
   input += synapse0x24a2040();
   input += synapse0x24a26c0();
   input += synapse0x24a2700();
   input += synapse0x24a2740();
   input += synapse0x24a2780();
   input += synapse0x24a27c0();
   input += synapse0x24a2800();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a1e70() {
   double input = input0x24a1e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a2840() {
   double input = 0.818976;
   input += synapse0x24a2b80();
   input += synapse0x24a2bc0();
   input += synapse0x24a2c00();
   input += synapse0x24a2c40();
   input += synapse0x24a2c80();
   input += synapse0x24a2cc0();
   input += synapse0x24a2d00();
   input += synapse0x24a2d40();
   input += synapse0x24a2d80();
   input += synapse0x24a2dc0();
   input += synapse0x24a2e00();
   input += synapse0x24a2e40();
   input += synapse0x24a2e80();
   input += synapse0x24a2ec0();
   input += synapse0x24a2f00();
   input += synapse0x24a2f40();
   input += synapse0x24a29d0();
   input += synapse0x24a2a10();
   input += synapse0x24a3090();
   input += synapse0x24a30d0();
   input += synapse0x24a3110();
   input += synapse0x24a3150();
   input += synapse0x24a3190();
   input += synapse0x24a31d0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a2840() {
   double input = input0x24a2840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a3210() {
   double input = 2.05531;
   input += synapse0x24a3550();
   input += synapse0x24a3590();
   input += synapse0x24a35d0();
   input += synapse0x24a3610();
   input += synapse0x24a3650();
   input += synapse0x24a3690();
   input += synapse0x24a36d0();
   input += synapse0x24a3710();
   input += synapse0x24a3750();
   input += synapse0x24a3790();
   input += synapse0x24a37d0();
   input += synapse0x24a3810();
   input += synapse0x24a3850();
   input += synapse0x24a3890();
   input += synapse0x24a38d0();
   input += synapse0x24a3910();
   input += synapse0x24a33a0();
   input += synapse0x24a33e0();
   input += synapse0x24a3a60();
   input += synapse0x24a3aa0();
   input += synapse0x24a3ae0();
   input += synapse0x24a3b20();
   input += synapse0x24a3b60();
   input += synapse0x24a3ba0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a3210() {
   double input = input0x24a3210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a3be0() {
   double input = -0.146868;
   input += synapse0x248c650();
   input += synapse0x248c690();
   input += synapse0x248c6d0();
   input += synapse0x248c710();
   input += synapse0x248c750();
   input += synapse0x248c790();
   input += synapse0x248c7d0();
   input += synapse0x248c810();
   input += synapse0x24a4330();
   input += synapse0x24a4370();
   input += synapse0x24a43b0();
   input += synapse0x24a43f0();
   input += synapse0x24a4430();
   input += synapse0x24a4470();
   input += synapse0x24a44b0();
   input += synapse0x24a44f0();
   input += synapse0x24a3d70();
   input += synapse0x24a3db0();
   input += synapse0x24a4640();
   input += synapse0x24a4680();
   input += synapse0x24a46c0();
   input += synapse0x24a4700();
   input += synapse0x24a4740();
   input += synapse0x24a4780();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a3be0() {
   double input = input0x24a3be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a47c0() {
   double input = 0.920934;
   input += synapse0x24a4b00();
   input += synapse0x24a4b40();
   input += synapse0x24a4b80();
   input += synapse0x24a4bc0();
   input += synapse0x24a4c00();
   input += synapse0x24a4c40();
   input += synapse0x24a4c80();
   input += synapse0x24a4cc0();
   input += synapse0x24a4d00();
   input += synapse0x24a4d40();
   input += synapse0x24a4d80();
   input += synapse0x24a4dc0();
   input += synapse0x24a4e00();
   input += synapse0x24a4e40();
   input += synapse0x24a4e80();
   input += synapse0x24a4ec0();
   input += synapse0x24a4950();
   input += synapse0x24a4990();
   input += synapse0x24a5010();
   input += synapse0x24a5050();
   input += synapse0x24a5090();
   input += synapse0x24a50d0();
   input += synapse0x24a5110();
   input += synapse0x24a5150();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a47c0() {
   double input = input0x24a47c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a5190() {
   double input = -0.0240599;
   input += synapse0x24a54d0();
   input += synapse0x24a5510();
   input += synapse0x24a5550();
   input += synapse0x24a5590();
   input += synapse0x24a55d0();
   input += synapse0x24a5610();
   input += synapse0x24a5650();
   input += synapse0x24a5690();
   input += synapse0x24a56d0();
   input += synapse0x24a5710();
   input += synapse0x24a5750();
   input += synapse0x24a5790();
   input += synapse0x24a57d0();
   input += synapse0x24a5810();
   input += synapse0x24a5850();
   input += synapse0x24a5890();
   input += synapse0x24a5320();
   input += synapse0x24a5360();
   input += synapse0x2495e90();
   input += synapse0x2495ed0();
   input += synapse0x2495f10();
   input += synapse0x2495f50();
   input += synapse0x2495f90();
   input += synapse0x2495fd0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a5190() {
   double input = input0x24a5190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x2496010() {
   double input = 1.27543;
   input += synapse0x2496350();
   input += synapse0x2496390();
   input += synapse0x24963d0();
   input += synapse0x2496410();
   input += synapse0x2496450();
   input += synapse0x2496490();
   input += synapse0x24964d0();
   input += synapse0x2496510();
   input += synapse0x2496550();
   input += synapse0x2496590();
   input += synapse0x24965d0();
   input += synapse0x2496610();
   input += synapse0x2496650();
   input += synapse0x2496690();
   input += synapse0x24966d0();
   input += synapse0x2496710();
   input += synapse0x24961a0();
   input += synapse0x24961e0();
   input += synapse0x2496860();
   input += synapse0x24968a0();
   input += synapse0x24968e0();
   input += synapse0x2496920();
   input += synapse0x2496960();
   input += synapse0x24969a0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x2496010() {
   double input = input0x2496010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24969e0() {
   double input = 0.0629561;
   input += synapse0x2496d20();
   input += synapse0x2496d60();
   input += synapse0x2496da0();
   input += synapse0x2496de0();
   input += synapse0x2496e20();
   input += synapse0x2496e60();
   input += synapse0x2496ea0();
   input += synapse0x2496ee0();
   input += synapse0x2496f20();
   input += synapse0x2496f60();
   input += synapse0x2496fa0();
   input += synapse0x2496fe0();
   input += synapse0x2497020();
   input += synapse0x2497060();
   input += synapse0x24970a0();
   input += synapse0x24970e0();
   input += synapse0x2496b70();
   input += synapse0x2496bb0();
   input += synapse0x2497230();
   input += synapse0x2497270();
   input += synapse0x24972b0();
   input += synapse0x24972f0();
   input += synapse0x2497330();
   input += synapse0x2497370();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24969e0() {
   double input = input0x24969e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24973b0() {
   double input = 0.53023;
   input += synapse0x24976f0();
   input += synapse0x2497730();
   input += synapse0x2497770();
   input += synapse0x24977b0();
   input += synapse0x24977f0();
   input += synapse0x2497830();
   input += synapse0x2497870();
   input += synapse0x24978b0();
   input += synapse0x24978f0();
   input += synapse0x2497930();
   input += synapse0x2497970();
   input += synapse0x24979b0();
   input += synapse0x24979f0();
   input += synapse0x2497a30();
   input += synapse0x2497a70();
   input += synapse0x2497ab0();
   input += synapse0x2497540();
   input += synapse0x2497580();
   input += synapse0x2497c00();
   input += synapse0x2497c40();
   input += synapse0x2497c80();
   input += synapse0x2497cc0();
   input += synapse0x2497d00();
   input += synapse0x2497d40();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24973b0() {
   double input = input0x24973b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24a99f0() {
   double input = 0.615072;
   input += synapse0x24a9c10();
   input += synapse0x24a9c50();
   input += synapse0x24a9c90();
   input += synapse0x24a9cd0();
   input += synapse0x24a9d10();
   input += synapse0x24a9d50();
   input += synapse0x24a9d90();
   input += synapse0x24a9dd0();
   input += synapse0x24a9e10();
   input += synapse0x24a9e50();
   input += synapse0x24a9e90();
   input += synapse0x24a9ed0();
   input += synapse0x24a9f10();
   input += synapse0x24a9f50();
   input += synapse0x24a9f90();
   input += synapse0x24a9fd0();
   input += synapse0x2497d80();
   input += synapse0x2497dc0();
   input += synapse0x24aa120();
   input += synapse0x24aa160();
   input += synapse0x24aa1a0();
   input += synapse0x24aa1e0();
   input += synapse0x24aa220();
   input += synapse0x24aa260();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24a99f0() {
   double input = input0x24a99f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24aa2a0() {
   double input = 3.62545;
   input += synapse0x24aa5e0();
   input += synapse0x24aa620();
   input += synapse0x24aa660();
   input += synapse0x24aa6a0();
   input += synapse0x24aa6e0();
   input += synapse0x24aa720();
   input += synapse0x24aa760();
   input += synapse0x24aa7a0();
   input += synapse0x24aa7e0();
   input += synapse0x24aa820();
   input += synapse0x24aa860();
   input += synapse0x24aa8a0();
   input += synapse0x24aa8e0();
   input += synapse0x24aa920();
   input += synapse0x24aa960();
   input += synapse0x24aa9a0();
   input += synapse0x24aa430();
   input += synapse0x24aa470();
   input += synapse0x24aaaf0();
   input += synapse0x24aab30();
   input += synapse0x24aab70();
   input += synapse0x24aabb0();
   input += synapse0x24aabf0();
   input += synapse0x24aac30();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24aa2a0() {
   double input = input0x24aa2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24aac70() {
   double input = -0.0229513;
   input += synapse0x24aafb0();
   input += synapse0x24aaff0();
   input += synapse0x24ab030();
   input += synapse0x24ab070();
   input += synapse0x24ab0b0();
   input += synapse0x24ab0f0();
   input += synapse0x24ab130();
   input += synapse0x24ab170();
   input += synapse0x24ab1b0();
   input += synapse0x24ab1f0();
   input += synapse0x24ab230();
   input += synapse0x24ab270();
   input += synapse0x24ab2b0();
   input += synapse0x24ab2f0();
   input += synapse0x24ab330();
   input += synapse0x24ab370();
   input += synapse0x24aae00();
   input += synapse0x24aae40();
   input += synapse0x24ab4c0();
   input += synapse0x24ab500();
   input += synapse0x24ab540();
   input += synapse0x24ab580();
   input += synapse0x24ab5c0();
   input += synapse0x24ab600();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24aac70() {
   double input = input0x24aac70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24ab640() {
   double input = 0.284212;
   input += synapse0x24ab980();
   input += synapse0x24ab9c0();
   input += synapse0x24aba00();
   input += synapse0x24aba40();
   input += synapse0x24aba80();
   input += synapse0x24abac0();
   input += synapse0x24abb00();
   input += synapse0x24abb40();
   input += synapse0x24abb80();
   input += synapse0x24abbc0();
   input += synapse0x24abc00();
   input += synapse0x24abc40();
   input += synapse0x24abc80();
   input += synapse0x24abcc0();
   input += synapse0x24abd00();
   input += synapse0x24abd40();
   input += synapse0x24ab7d0();
   input += synapse0x24ab810();
   input += synapse0x24abe90();
   input += synapse0x24abed0();
   input += synapse0x24abf10();
   input += synapse0x24abf50();
   input += synapse0x24abf90();
   input += synapse0x24abfd0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24ab640() {
   double input = input0x24ab640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24b2840() {
   double input = 0.279175;
   input += synapse0x2488570();
   input += synapse0x24885b0();
   input += synapse0x2489a80();
   input += synapse0x2489ac0();
   input += synapse0x248a450();
   input += synapse0x248a490();
   input += synapse0x248b220();
   input += synapse0x248b260();
   input += synapse0x248bbf0();
   input += synapse0x248bc30();
   input += synapse0x248c5c0();
   input += synapse0x248c600();
   input += synapse0x248d0a0();
   input += synapse0x248d0e0();
   input += synapse0x248da70();
   input += synapse0x248dab0();
   input += synapse0x248ab50();
   input += synapse0x248ab90();
   input += synapse0x248f620();
   input += synapse0x248f660();
   input += synapse0x248fff0();
   input += synapse0x2490030();
   input += synapse0x24909c0();
   input += synapse0x2490a00();
   input += synapse0x2491390();
   input += synapse0x24913d0();
   input += synapse0x2485500();
   input += synapse0x2485540();
   input += synapse0x2493480();
   input += synapse0x24934c0();
   input += synapse0x2493e50();
   input += synapse0x2493e90();
   input += synapse0x2494820();
   input += synapse0x2494860();
   input += synapse0x24951f0();
   input += synapse0x2495230();
   input += synapse0x2495bc0();
   input += synapse0x2495c00();
   input += synapse0x248e710();
   input += synapse0x248e750();
   input += synapse0x2497fc0();
   input += synapse0x2498000();
   input += synapse0x2498950();
   input += synapse0x2498990();
   input += synapse0x2499320();
   input += synapse0x2499360();
   input += synapse0x2499cf0();
   input += synapse0x2499d30();
   input += synapse0x249a6c0();
   input += synapse0x249a700();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24b2840() {
   double input = input0x24b2840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24b2be0() {
   double input = -0.148549;
   input += synapse0x249ce00();
   input += synapse0x249ce40();
   input += synapse0x24923c0();
   input += synapse0x2492400();
   input += synapse0x249f9e0();
   input += synapse0x249fa20();
   input += synapse0x24a03b0();
   input += synapse0x24a03f0();
   input += synapse0x24a0d80();
   input += synapse0x24a0dc0();
   input += synapse0x24a1750();
   input += synapse0x24a1790();
   input += synapse0x24a2120();
   input += synapse0x24a2160();
   input += synapse0x24a2af0();
   input += synapse0x24a2b30();
   input += synapse0x24a34c0();
   input += synapse0x24a3500();
   input += synapse0x24a3e90();
   input += synapse0x24a3ed0();
   input += synapse0x24a4a70();
   input += synapse0x24a4ab0();
   input += synapse0x24a5440();
   input += synapse0x24a5480();
   input += synapse0x24962c0();
   input += synapse0x2496300();
   input += synapse0x2496c90();
   input += synapse0x2496cd0();
   input += synapse0x2497660();
   input += synapse0x24976a0();
   input += synapse0x24a9b80();
   input += synapse0x24a9bc0();
   input += synapse0x24aa550();
   input += synapse0x24aa590();
   input += synapse0x24aaf20();
   input += synapse0x24aaf60();
   input += synapse0x24ab8f0();
   input += synapse0x24ab930();
   input += synapse0x24877e0();
   input += synapse0x2487820();
   input += synapse0x249b090();
   input += synapse0x249b0d0();
   input += synapse0x24ac010();
   input += synapse0x24ac050();
   input += synapse0x24ac090();
   input += synapse0x24ac0d0();
   input += synapse0x24b2f80();
   input += synapse0x24b2fc0();
   input += synapse0x24b3000();
   input += synapse0x24b3040();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24b2be0() {
   double input = input0x24b2be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24b3080() {
   double input = -0.232242;
   input += synapse0x24b33c0();
   input += synapse0x24b3400();
   input += synapse0x24b3440();
   input += synapse0x24b3480();
   input += synapse0x24b34c0();
   input += synapse0x24b3500();
   input += synapse0x24b3540();
   input += synapse0x24b3580();
   input += synapse0x24b35c0();
   input += synapse0x24b3600();
   input += synapse0x24b3640();
   input += synapse0x24b3680();
   input += synapse0x24b36c0();
   input += synapse0x24b3700();
   input += synapse0x24b3740();
   input += synapse0x24b3780();
   input += synapse0x24b3210();
   input += synapse0x24b3250();
   input += synapse0x24b38d0();
   input += synapse0x24b3910();
   input += synapse0x24b3950();
   input += synapse0x24b3990();
   input += synapse0x24b39d0();
   input += synapse0x24b3a10();
   input += synapse0x24b3a50();
   input += synapse0x24b3a90();
   input += synapse0x24b3ad0();
   input += synapse0x24b3b10();
   input += synapse0x24b3b50();
   input += synapse0x24b3b90();
   input += synapse0x24b3bd0();
   input += synapse0x24b3c10();
   input += synapse0x24b37c0();
   input += synapse0x24b3800();
   input += synapse0x24b3840();
   input += synapse0x24b3880();
   input += synapse0x24b3e60();
   input += synapse0x24b3ea0();
   input += synapse0x24b3ee0();
   input += synapse0x24b3f20();
   input += synapse0x24b3f60();
   input += synapse0x24b3fa0();
   input += synapse0x24b3fe0();
   input += synapse0x24b4020();
   input += synapse0x24b4060();
   input += synapse0x24b40a0();
   input += synapse0x24b40e0();
   input += synapse0x24b4120();
   input += synapse0x24b4160();
   input += synapse0x24b41a0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24b3080() {
   double input = input0x24b3080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24b41e0() {
   double input = 0.617836;
   input += synapse0x24b4520();
   input += synapse0x24b4560();
   input += synapse0x24b45a0();
   input += synapse0x24b45e0();
   input += synapse0x24b4620();
   input += synapse0x24b4660();
   input += synapse0x24b46a0();
   input += synapse0x24b46e0();
   input += synapse0x24b4720();
   input += synapse0x24b4760();
   input += synapse0x24b47a0();
   input += synapse0x24b47e0();
   input += synapse0x24b4820();
   input += synapse0x24b4860();
   input += synapse0x24b48a0();
   input += synapse0x24b48e0();
   input += synapse0x24b4370();
   input += synapse0x24b43b0();
   input += synapse0x24b4a30();
   input += synapse0x24b4a70();
   input += synapse0x24b4ab0();
   input += synapse0x24b4af0();
   input += synapse0x24b4b30();
   input += synapse0x24b4b70();
   input += synapse0x24b4bb0();
   input += synapse0x24b4bf0();
   input += synapse0x24b4c30();
   input += synapse0x24b4c70();
   input += synapse0x24b4cb0();
   input += synapse0x24b4cf0();
   input += synapse0x24b4d30();
   input += synapse0x24b4d70();
   input += synapse0x24b4920();
   input += synapse0x24b4960();
   input += synapse0x24b49a0();
   input += synapse0x24b49e0();
   input += synapse0x24b4fc0();
   input += synapse0x24b5000();
   input += synapse0x24b5040();
   input += synapse0x24b5080();
   input += synapse0x24b50c0();
   input += synapse0x24b5100();
   input += synapse0x24b5140();
   input += synapse0x24b5180();
   input += synapse0x24b51c0();
   input += synapse0x24b5200();
   input += synapse0x24b5240();
   input += synapse0x24b5280();
   input += synapse0x24b52c0();
   input += synapse0x24b5300();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24b41e0() {
   double input = input0x24b41e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24b5340() {
   double input = 0.927752;
   input += synapse0x24b5680();
   input += synapse0x24b56c0();
   input += synapse0x24b5700();
   input += synapse0x24b5740();
   input += synapse0x24b5780();
   input += synapse0x24b57c0();
   input += synapse0x24b5800();
   input += synapse0x24b5840();
   input += synapse0x24b5880();
   input += synapse0x24b58c0();
   input += synapse0x24b5900();
   input += synapse0x24b5940();
   input += synapse0x24b5980();
   input += synapse0x24b59c0();
   input += synapse0x24b5a00();
   input += synapse0x24b5a40();
   input += synapse0x24b54d0();
   input += synapse0x24b5510();
   input += synapse0x24b5b90();
   input += synapse0x24b5bd0();
   input += synapse0x24b5c10();
   input += synapse0x24b5c50();
   input += synapse0x24b5c90();
   input += synapse0x24b5cd0();
   input += synapse0x24b5d10();
   input += synapse0x24b5d50();
   input += synapse0x24b5d90();
   input += synapse0x24b5dd0();
   input += synapse0x24b5e10();
   input += synapse0x24b5e50();
   input += synapse0x24b5e90();
   input += synapse0x24b5ed0();
   input += synapse0x24b5a80();
   input += synapse0x24b5ac0();
   input += synapse0x24b5b00();
   input += synapse0x24b5b40();
   input += synapse0x24b6120();
   input += synapse0x24b6160();
   input += synapse0x24b61a0();
   input += synapse0x24b61e0();
   input += synapse0x24b6220();
   input += synapse0x24b6260();
   input += synapse0x24b62a0();
   input += synapse0x24b62e0();
   input += synapse0x24b6320();
   input += synapse0x24b6360();
   input += synapse0x24b63a0();
   input += synapse0x24b63e0();
   input += synapse0x24b6420();
   input += synapse0x24b6460();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24b5340() {
   double input = input0x24b5340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x24b64a0() {
   double input = 7.89768;
   input += synapse0x2487580();
   input += synapse0x24b66c0();
   input += synapse0x24b6700();
   input += synapse0x24b6740();
   input += synapse0x24b6780();
   return input;
}

double NNfunction_sb_uRsR::neuron0x24b64a0() {
   double input = input0x24b64a0();
   return (input * 1)+0;
}

double NNfunction_sb_uRsR::synapse0x22423d0() {
   return (neuron0x2482560()*-0.875545);
}

double NNfunction_sb_uRsR::synapse0x2482420() {
   return (neuron0x24828a0()*0.246089);
}

double NNfunction_sb_uRsR::synapse0x2482460() {
   return (neuron0x2482be0()*0.54211);
}

double NNfunction_sb_uRsR::synapse0x2487870() {
   return (neuron0x2482f20()*-0.345937);
}

double NNfunction_sb_uRsR::synapse0x24878b0() {
   return (neuron0x2483260()*-0.313547);
}

double NNfunction_sb_uRsR::synapse0x24878f0() {
   return (neuron0x24835a0()*0.750179);
}

double NNfunction_sb_uRsR::synapse0x2487930() {
   return (neuron0x24838e0()*0.660298);
}

double NNfunction_sb_uRsR::synapse0x2487970() {
   return (neuron0x2483c20()*-0.225882);
}

double NNfunction_sb_uRsR::synapse0x24879b0() {
   return (neuron0x2483f60()*0.613951);
}

double NNfunction_sb_uRsR::synapse0x24879f0() {
   return (neuron0x24842a0()*-1.06454);
}

double NNfunction_sb_uRsR::synapse0x2487a30() {
   return (neuron0x24845e0()*-0.124008);
}

double NNfunction_sb_uRsR::synapse0x2487a70() {
   return (neuron0x2484920()*-0.398521);
}

double NNfunction_sb_uRsR::synapse0x2487ab0() {
   return (neuron0x2484c60()*0.689818);
}

double NNfunction_sb_uRsR::synapse0x2487af0() {
   return (neuron0x2484fa0()*0.362139);
}

double NNfunction_sb_uRsR::synapse0x2487b30() {
   return (neuron0x24852e0()*1.24925);
}

double NNfunction_sb_uRsR::synapse0x2487b70() {
   return (neuron0x2485620()*1.07023);
}

double NNfunction_sb_uRsR::synapse0x2482390() {
   return (neuron0x2485960()*0.194829);
}

double NNfunction_sb_uRsR::synapse0x24823d0() {
   return (neuron0x2485ec0()*-0.336748);
}

double NNfunction_sb_uRsR::synapse0x2233c70() {
   return (neuron0x24860e0()*1.31425);
}

double NNfunction_sb_uRsR::synapse0x2233cb0() {
   return (neuron0x2486420()*0.0885705);
}

double NNfunction_sb_uRsR::synapse0x2487dd0() {
   return (neuron0x2486760()*-0.180737);
}

double NNfunction_sb_uRsR::synapse0x2487e10() {
   return (neuron0x2486aa0()*-0.257266);
}

double NNfunction_sb_uRsR::synapse0x2487e50() {
   return (neuron0x2486de0()*0.053027);
}

double NNfunction_sb_uRsR::synapse0x2487e90() {
   return (neuron0x2487120()*-0.130753);
}

double NNfunction_sb_uRsR::synapse0x2488210() {
   return (neuron0x2482560()*-0.236074);
}

double NNfunction_sb_uRsR::synapse0x2488250() {
   return (neuron0x24828a0()*-0.358582);
}

double NNfunction_sb_uRsR::synapse0x2488290() {
   return (neuron0x2482be0()*-0.0985125);
}

double NNfunction_sb_uRsR::synapse0x24882d0() {
   return (neuron0x2482f20()*-3.0833);
}

double NNfunction_sb_uRsR::synapse0x2488310() {
   return (neuron0x2483260()*-0.229352);
}

double NNfunction_sb_uRsR::synapse0x2488350() {
   return (neuron0x24835a0()*0.397529);
}

double NNfunction_sb_uRsR::synapse0x2488390() {
   return (neuron0x24838e0()*0.0602707);
}

double NNfunction_sb_uRsR::synapse0x24883d0() {
   return (neuron0x2483c20()*-0.0372062);
}

double NNfunction_sb_uRsR::synapse0x2488410() {
   return (neuron0x2483f60()*-0.0951733);
}

double NNfunction_sb_uRsR::synapse0x2487cc0() {
   return (neuron0x24842a0()*-0.145011);
}

double NNfunction_sb_uRsR::synapse0x2487d00() {
   return (neuron0x24845e0()*-0.00288736);
}

double NNfunction_sb_uRsR::synapse0x2487d40() {
   return (neuron0x2484920()*-0.248325);
}

double NNfunction_sb_uRsR::synapse0x2487d80() {
   return (neuron0x2484c60()*-0.275834);
}

double NNfunction_sb_uRsR::synapse0x2488660() {
   return (neuron0x2484fa0()*-0.364976);
}

double NNfunction_sb_uRsR::synapse0x24886a0() {
   return (neuron0x24852e0()*-0.28153);
}

double NNfunction_sb_uRsR::synapse0x24886e0() {
   return (neuron0x2485620()*0.273844);
}

double NNfunction_sb_uRsR::synapse0x2488060() {
   return (neuron0x2485960()*-0.475136);
}

double NNfunction_sb_uRsR::synapse0x24880a0() {
   return (neuron0x2485ec0()*0.261545);
}

double NNfunction_sb_uRsR::synapse0x2488830() {
   return (neuron0x24860e0()*0.188873);
}

double NNfunction_sb_uRsR::synapse0x2488870() {
   return (neuron0x2486420()*0.507212);
}

double NNfunction_sb_uRsR::synapse0x24888b0() {
   return (neuron0x2486760()*0.113311);
}

double NNfunction_sb_uRsR::synapse0x24888f0() {
   return (neuron0x2486aa0()*-0.216769);
}

double NNfunction_sb_uRsR::synapse0x2488930() {
   return (neuron0x2486de0()*-0.436009);
}

double NNfunction_sb_uRsR::synapse0x2488970() {
   return (neuron0x2487120()*-0.0486281);
}

double NNfunction_sb_uRsR::synapse0x2488cf0() {
   return (neuron0x2482560()*-0.00771698);
}

double NNfunction_sb_uRsR::synapse0x2488d30() {
   return (neuron0x24828a0()*-0.0561612);
}

double NNfunction_sb_uRsR::synapse0x2488d70() {
   return (neuron0x2482be0()*-0.00972632);
}

double NNfunction_sb_uRsR::synapse0x2488db0() {
   return (neuron0x2482f20()*0.0627308);
}

double NNfunction_sb_uRsR::synapse0x2488df0() {
   return (neuron0x2483260()*0.00585277);
}

double NNfunction_sb_uRsR::synapse0x2488e30() {
   return (neuron0x24835a0()*-0.00258121);
}

double NNfunction_sb_uRsR::synapse0x2488e70() {
   return (neuron0x24838e0()*-0.0156965);
}

double NNfunction_sb_uRsR::synapse0x2488eb0() {
   return (neuron0x2483c20()*0.00364651);
}

double NNfunction_sb_uRsR::synapse0x2488ef0() {
   return (neuron0x2483f60()*-0.00285287);
}

double NNfunction_sb_uRsR::synapse0x2488f30() {
   return (neuron0x24842a0()*0.0025532);
}

double NNfunction_sb_uRsR::synapse0x2488f70() {
   return (neuron0x24845e0()*0.0249158);
}

double NNfunction_sb_uRsR::synapse0x2488fb0() {
   return (neuron0x2484920()*0.381545);
}

double NNfunction_sb_uRsR::synapse0x2488ff0() {
   return (neuron0x2484c60()*0.343416);
}

double NNfunction_sb_uRsR::synapse0x2489030() {
   return (neuron0x2484fa0()*-0.034229);
}

double NNfunction_sb_uRsR::synapse0x2489070() {
   return (neuron0x24852e0()*-0.000602263);
}

double NNfunction_sb_uRsR::synapse0x24890b0() {
   return (neuron0x2485620()*0.14767);
}

double NNfunction_sb_uRsR::synapse0x2488b40() {
   return (neuron0x2485960()*-0.0451978);
}

double NNfunction_sb_uRsR::synapse0x2488b80() {
   return (neuron0x2485ec0()*0.172766);
}

double NNfunction_sb_uRsR::synapse0x2241ac0() {
   return (neuron0x24860e0()*0.0616001);
}

double NNfunction_sb_uRsR::synapse0x2241b00() {
   return (neuron0x2486420()*0.0227763);
}

double NNfunction_sb_uRsR::synapse0x24715f0() {
   return (neuron0x2486760()*-0.00252344);
}

double NNfunction_sb_uRsR::synapse0x2471630() {
   return (neuron0x2486aa0()*0.00359298);
}

double NNfunction_sb_uRsR::synapse0x2471670() {
   return (neuron0x2486de0()*-0.00234862);
}

double NNfunction_sb_uRsR::synapse0x24824a0() {
   return (neuron0x2487120()*0.0228122);
}

double NNfunction_sb_uRsR::synapse0x2488600() {
   return (neuron0x2482560()*0.0176981);
}

double NNfunction_sb_uRsR::synapse0x24824e0() {
   return (neuron0x24828a0()*0.793654);
}

double NNfunction_sb_uRsR::synapse0x2482520() {
   return (neuron0x2482be0()*0.186186);
}

double NNfunction_sb_uRsR::synapse0x2489200() {
   return (neuron0x2482f20()*-0.971134);
}

double NNfunction_sb_uRsR::synapse0x2489240() {
   return (neuron0x2483260()*0.263814);
}

double NNfunction_sb_uRsR::synapse0x2489280() {
   return (neuron0x24835a0()*0.0926364);
}

double NNfunction_sb_uRsR::synapse0x24892c0() {
   return (neuron0x24838e0()*0.00777602);
}

double NNfunction_sb_uRsR::synapse0x2489300() {
   return (neuron0x2483c20()*0.647675);
}

double NNfunction_sb_uRsR::synapse0x2489340() {
   return (neuron0x2483f60()*0.183239);
}

double NNfunction_sb_uRsR::synapse0x2489380() {
   return (neuron0x24842a0()*0.694592);
}

double NNfunction_sb_uRsR::synapse0x24893c0() {
   return (neuron0x24845e0()*0.0353495);
}

double NNfunction_sb_uRsR::synapse0x2489400() {
   return (neuron0x2484920()*0.943851);
}

double NNfunction_sb_uRsR::synapse0x2489440() {
   return (neuron0x2484c60()*0.757532);
}

double NNfunction_sb_uRsR::synapse0x2489480() {
   return (neuron0x2484fa0()*-0.48072);
}

double NNfunction_sb_uRsR::synapse0x24894c0() {
   return (neuron0x24852e0()*0.653188);
}

double NNfunction_sb_uRsR::synapse0x2489500() {
   return (neuron0x2485620()*-0.604803);
}

double NNfunction_sb_uRsR::synapse0x2488450() {
   return (neuron0x2485960()*-0.225877);
}

double NNfunction_sb_uRsR::synapse0x2488490() {
   return (neuron0x2485ec0()*-1.34024);
}

double NNfunction_sb_uRsR::synapse0x2489650() {
   return (neuron0x24860e0()*0.53468);
}

double NNfunction_sb_uRsR::synapse0x2489690() {
   return (neuron0x2486420()*-0.385288);
}

double NNfunction_sb_uRsR::synapse0x24896d0() {
   return (neuron0x2486760()*1.11852);
}

double NNfunction_sb_uRsR::synapse0x2489710() {
   return (neuron0x2486aa0()*0.0737219);
}

double NNfunction_sb_uRsR::synapse0x2489750() {
   return (neuron0x2486de0()*0.354347);
}

double NNfunction_sb_uRsR::synapse0x2489790() {
   return (neuron0x2487120()*0.279859);
}

double NNfunction_sb_uRsR::synapse0x2489b10() {
   return (neuron0x2482560()*0.0472864);
}

double NNfunction_sb_uRsR::synapse0x2489b50() {
   return (neuron0x24828a0()*0.322078);
}

double NNfunction_sb_uRsR::synapse0x2489b90() {
   return (neuron0x2482be0()*-0.0394089);
}

double NNfunction_sb_uRsR::synapse0x2489bd0() {
   return (neuron0x2482f20()*0.0231391);
}

double NNfunction_sb_uRsR::synapse0x2489c10() {
   return (neuron0x2483260()*-0.661801);
}

double NNfunction_sb_uRsR::synapse0x2489c50() {
   return (neuron0x24835a0()*0.380158);
}

double NNfunction_sb_uRsR::synapse0x2489c90() {
   return (neuron0x24838e0()*-0.024734);
}

double NNfunction_sb_uRsR::synapse0x2489cd0() {
   return (neuron0x2483c20()*-0.496744);
}

double NNfunction_sb_uRsR::synapse0x2489d10() {
   return (neuron0x2483f60()*-0.154796);
}

double NNfunction_sb_uRsR::synapse0x2489d50() {
   return (neuron0x24842a0()*-0.126626);
}

double NNfunction_sb_uRsR::synapse0x2489d90() {
   return (neuron0x24845e0()*0.280834);
}

double NNfunction_sb_uRsR::synapse0x2489dd0() {
   return (neuron0x2484920()*0.266821);
}

double NNfunction_sb_uRsR::synapse0x2489e10() {
   return (neuron0x2484c60()*-0.164993);
}

double NNfunction_sb_uRsR::synapse0x2489e50() {
   return (neuron0x2484fa0()*-0.16458);
}

double NNfunction_sb_uRsR::synapse0x2489e90() {
   return (neuron0x24852e0()*-1.62478);
}

double NNfunction_sb_uRsR::synapse0x2489ed0() {
   return (neuron0x2485620()*-1.03655);
}

double NNfunction_sb_uRsR::synapse0x2489960() {
   return (neuron0x2485960()*-0.108791);
}

double NNfunction_sb_uRsR::synapse0x24899a0() {
   return (neuron0x2485ec0()*-0.109148);
}

double NNfunction_sb_uRsR::synapse0x248a020() {
   return (neuron0x24860e0()*-0.122744);
}

double NNfunction_sb_uRsR::synapse0x248a060() {
   return (neuron0x2486420()*0.439674);
}

double NNfunction_sb_uRsR::synapse0x248a0a0() {
   return (neuron0x2486760()*0.401784);
}

double NNfunction_sb_uRsR::synapse0x248a0e0() {
   return (neuron0x2486aa0()*0.176687);
}

double NNfunction_sb_uRsR::synapse0x248a120() {
   return (neuron0x2486de0()*0.0998896);
}

double NNfunction_sb_uRsR::synapse0x248a160() {
   return (neuron0x2487120()*-0.634569);
}

double NNfunction_sb_uRsR::synapse0x248a4e0() {
   return (neuron0x2482560()*0.892692);
}

double NNfunction_sb_uRsR::synapse0x248a520() {
   return (neuron0x24828a0()*0.510757);
}

double NNfunction_sb_uRsR::synapse0x248a560() {
   return (neuron0x2482be0()*-0.377795);
}

double NNfunction_sb_uRsR::synapse0x248a5a0() {
   return (neuron0x2482f20()*-0.137424);
}

double NNfunction_sb_uRsR::synapse0x248a5e0() {
   return (neuron0x2483260()*1.12266);
}

double NNfunction_sb_uRsR::synapse0x248a620() {
   return (neuron0x24835a0()*-0.581545);
}

double NNfunction_sb_uRsR::synapse0x248a660() {
   return (neuron0x24838e0()*-1.11466);
}

double NNfunction_sb_uRsR::synapse0x248a6a0() {
   return (neuron0x2483c20()*-1.19055);
}

double NNfunction_sb_uRsR::synapse0x248a6e0() {
   return (neuron0x2483f60()*0.650268);
}

double NNfunction_sb_uRsR::synapse0x2241e30() {
   return (neuron0x24842a0()*-0.0823283);
}

double NNfunction_sb_uRsR::synapse0x2241e70() {
   return (neuron0x24845e0()*0.920115);
}

double NNfunction_sb_uRsR::synapse0x2241eb0() {
   return (neuron0x2484920()*0.940665);
}

double NNfunction_sb_uRsR::synapse0x2241ef0() {
   return (neuron0x2484c60()*0.51138);
}

double NNfunction_sb_uRsR::synapse0x2241f30() {
   return (neuron0x2484fa0()*-0.322837);
}

double NNfunction_sb_uRsR::synapse0x2241f70() {
   return (neuron0x24852e0()*2.02731);
}

double NNfunction_sb_uRsR::synapse0x2241fb0() {
   return (neuron0x2485620()*0.547515);
}

double NNfunction_sb_uRsR::synapse0x248a330() {
   return (neuron0x2485960()*-0.757839);
}

double NNfunction_sb_uRsR::synapse0x248a370() {
   return (neuron0x2485ec0()*0.731272);
}

double NNfunction_sb_uRsR::synapse0x2242100() {
   return (neuron0x24860e0()*-0.633461);
}

double NNfunction_sb_uRsR::synapse0x2242140() {
   return (neuron0x2486420()*1.26933);
}

double NNfunction_sb_uRsR::synapse0x2242180() {
   return (neuron0x2486760()*0.395946);
}

double NNfunction_sb_uRsR::synapse0x22421c0() {
   return (neuron0x2486aa0()*0.444241);
}

double NNfunction_sb_uRsR::synapse0x2242200() {
   return (neuron0x2486de0()*0.0411795);
}

double NNfunction_sb_uRsR::synapse0x248af30() {
   return (neuron0x2487120()*-0.360806);
}

double NNfunction_sb_uRsR::synapse0x248b2b0() {
   return (neuron0x2482560()*1.0521);
}

double NNfunction_sb_uRsR::synapse0x248b2f0() {
   return (neuron0x24828a0()*-0.0380539);
}

double NNfunction_sb_uRsR::synapse0x248b330() {
   return (neuron0x2482be0()*0.1083);
}

double NNfunction_sb_uRsR::synapse0x248b370() {
   return (neuron0x2482f20()*-0.256531);
}

double NNfunction_sb_uRsR::synapse0x248b3b0() {
   return (neuron0x2483260()*1.34477);
}

double NNfunction_sb_uRsR::synapse0x248b3f0() {
   return (neuron0x24835a0()*0.563441);
}

double NNfunction_sb_uRsR::synapse0x248b430() {
   return (neuron0x24838e0()*0.650934);
}

double NNfunction_sb_uRsR::synapse0x248b470() {
   return (neuron0x2483c20()*0.563881);
}

double NNfunction_sb_uRsR::synapse0x248b4b0() {
   return (neuron0x2483f60()*-0.0575265);
}

double NNfunction_sb_uRsR::synapse0x248b4f0() {
   return (neuron0x24842a0()*-0.285205);
}

double NNfunction_sb_uRsR::synapse0x248b530() {
   return (neuron0x24845e0()*-0.41038);
}

double NNfunction_sb_uRsR::synapse0x248b570() {
   return (neuron0x2484920()*0.311733);
}

double NNfunction_sb_uRsR::synapse0x248b5b0() {
   return (neuron0x2484c60()*0.615925);
}

double NNfunction_sb_uRsR::synapse0x248b5f0() {
   return (neuron0x2484fa0()*-0.00490692);
}

double NNfunction_sb_uRsR::synapse0x248b630() {
   return (neuron0x24852e0()*-0.716261);
}

double NNfunction_sb_uRsR::synapse0x248b670() {
   return (neuron0x2485620()*-0.126487);
}

double NNfunction_sb_uRsR::synapse0x248b100() {
   return (neuron0x2485960()*1.05789);
}

double NNfunction_sb_uRsR::synapse0x248b140() {
   return (neuron0x2485ec0()*0.375282);
}

double NNfunction_sb_uRsR::synapse0x248b7c0() {
   return (neuron0x24860e0()*1.14539);
}

double NNfunction_sb_uRsR::synapse0x248b800() {
   return (neuron0x2486420()*0.652183);
}

double NNfunction_sb_uRsR::synapse0x248b840() {
   return (neuron0x2486760()*-0.37756);
}

double NNfunction_sb_uRsR::synapse0x248b880() {
   return (neuron0x2486aa0()*-0.254244);
}

double NNfunction_sb_uRsR::synapse0x248b8c0() {
   return (neuron0x2486de0()*-0.239827);
}

double NNfunction_sb_uRsR::synapse0x248b900() {
   return (neuron0x2487120()*0.0225502);
}

double NNfunction_sb_uRsR::synapse0x248bc80() {
   return (neuron0x2482560()*0.0885353);
}

double NNfunction_sb_uRsR::synapse0x248bcc0() {
   return (neuron0x24828a0()*-0.154269);
}

double NNfunction_sb_uRsR::synapse0x248bd00() {
   return (neuron0x2482be0()*-0.303812);
}

double NNfunction_sb_uRsR::synapse0x248bd40() {
   return (neuron0x2482f20()*-1.36046);
}

double NNfunction_sb_uRsR::synapse0x248bd80() {
   return (neuron0x2483260()*0.809084);
}

double NNfunction_sb_uRsR::synapse0x248bdc0() {
   return (neuron0x24835a0()*0.0820641);
}

double NNfunction_sb_uRsR::synapse0x248be00() {
   return (neuron0x24838e0()*0.137888);
}

double NNfunction_sb_uRsR::synapse0x248be40() {
   return (neuron0x2483c20()*-0.580379);
}

double NNfunction_sb_uRsR::synapse0x248be80() {
   return (neuron0x2483f60()*-0.291562);
}

double NNfunction_sb_uRsR::synapse0x248bec0() {
   return (neuron0x24842a0()*-0.312323);
}

double NNfunction_sb_uRsR::synapse0x248bf00() {
   return (neuron0x24845e0()*-0.0985961);
}

double NNfunction_sb_uRsR::synapse0x248bf40() {
   return (neuron0x2484920()*-0.335249);
}

double NNfunction_sb_uRsR::synapse0x248bf80() {
   return (neuron0x2484c60()*-0.209591);
}

double NNfunction_sb_uRsR::synapse0x248bfc0() {
   return (neuron0x2484fa0()*0.211279);
}

double NNfunction_sb_uRsR::synapse0x248c000() {
   return (neuron0x24852e0()*0.661504);
}

double NNfunction_sb_uRsR::synapse0x248c040() {
   return (neuron0x2485620()*0.623646);
}

double NNfunction_sb_uRsR::synapse0x248bad0() {
   return (neuron0x2485960()*0.191236);
}

double NNfunction_sb_uRsR::synapse0x248bb10() {
   return (neuron0x2485ec0()*-0.0084229);
}

double NNfunction_sb_uRsR::synapse0x248c190() {
   return (neuron0x24860e0()*0.556538);
}

double NNfunction_sb_uRsR::synapse0x248c1d0() {
   return (neuron0x2486420()*-0.411293);
}

double NNfunction_sb_uRsR::synapse0x248c210() {
   return (neuron0x2486760()*0.268909);
}

double NNfunction_sb_uRsR::synapse0x248c250() {
   return (neuron0x2486aa0()*0.295538);
}

double NNfunction_sb_uRsR::synapse0x248c290() {
   return (neuron0x2486de0()*-0.485671);
}

double NNfunction_sb_uRsR::synapse0x248c2d0() {
   return (neuron0x2487120()*0.25293);
}

double NNfunction_sb_uRsR::synapse0x2485db0() {
   return (neuron0x2482560()*0.58302);
}

double NNfunction_sb_uRsR::synapse0x2485df0() {
   return (neuron0x24828a0()*-0.793567);
}

double NNfunction_sb_uRsR::synapse0x2485e30() {
   return (neuron0x2482be0()*-0.162938);
}

double NNfunction_sb_uRsR::synapse0x2485e70() {
   return (neuron0x2482f20()*-0.899451);
}

double NNfunction_sb_uRsR::synapse0x248c860() {
   return (neuron0x2483260()*0.874544);
}

double NNfunction_sb_uRsR::synapse0x248c8a0() {
   return (neuron0x24835a0()*-0.183865);
}

double NNfunction_sb_uRsR::synapse0x248c8e0() {
   return (neuron0x24838e0()*-0.0525139);
}

double NNfunction_sb_uRsR::synapse0x248c920() {
   return (neuron0x2483c20()*-0.713416);
}

double NNfunction_sb_uRsR::synapse0x248c960() {
   return (neuron0x2483f60()*0.43229);
}

double NNfunction_sb_uRsR::synapse0x248c9a0() {
   return (neuron0x24842a0()*-0.350846);
}

double NNfunction_sb_uRsR::synapse0x248c9e0() {
   return (neuron0x24845e0()*0.306142);
}

double NNfunction_sb_uRsR::synapse0x248ca20() {
   return (neuron0x2484920()*0.0850452);
}

double NNfunction_sb_uRsR::synapse0x248ca60() {
   return (neuron0x2484c60()*-1.06549);
}

double NNfunction_sb_uRsR::synapse0x248caa0() {
   return (neuron0x2484fa0()*0.423922);
}

double NNfunction_sb_uRsR::synapse0x248cae0() {
   return (neuron0x24852e0()*-0.0830746);
}

double NNfunction_sb_uRsR::synapse0x248cb20() {
   return (neuron0x2485620()*-0.205901);
}

double NNfunction_sb_uRsR::synapse0x248c4a0() {
   return (neuron0x2485960()*-0.848852);
}

double NNfunction_sb_uRsR::synapse0x248c4e0() {
   return (neuron0x2485ec0()*0.313593);
}

double NNfunction_sb_uRsR::synapse0x248cc70() {
   return (neuron0x24860e0()*-0.861654);
}

double NNfunction_sb_uRsR::synapse0x248ccb0() {
   return (neuron0x2486420()*0.0538156);
}

double NNfunction_sb_uRsR::synapse0x248ccf0() {
   return (neuron0x2486760()*-0.47525);
}

double NNfunction_sb_uRsR::synapse0x248cd30() {
   return (neuron0x2486aa0()*-0.26949);
}

double NNfunction_sb_uRsR::synapse0x248cd70() {
   return (neuron0x2486de0()*0.235635);
}

double NNfunction_sb_uRsR::synapse0x248cdb0() {
   return (neuron0x2487120()*-0.182137);
}

double NNfunction_sb_uRsR::synapse0x248d130() {
   return (neuron0x2482560()*-0.168125);
}

double NNfunction_sb_uRsR::synapse0x248d170() {
   return (neuron0x24828a0()*-1.01373);
}

double NNfunction_sb_uRsR::synapse0x248d1b0() {
   return (neuron0x2482be0()*0.0910392);
}

double NNfunction_sb_uRsR::synapse0x248d1f0() {
   return (neuron0x2482f20()*-1.29705);
}

double NNfunction_sb_uRsR::synapse0x248d230() {
   return (neuron0x2483260()*-0.0929375);
}

double NNfunction_sb_uRsR::synapse0x248d270() {
   return (neuron0x24835a0()*-0.00884051);
}

double NNfunction_sb_uRsR::synapse0x248d2b0() {
   return (neuron0x24838e0()*-0.108911);
}

double NNfunction_sb_uRsR::synapse0x248d2f0() {
   return (neuron0x2483c20()*-0.00608369);
}

double NNfunction_sb_uRsR::synapse0x248d330() {
   return (neuron0x2483f60()*-0.0795635);
}

double NNfunction_sb_uRsR::synapse0x248d370() {
   return (neuron0x24842a0()*0.192293);
}

double NNfunction_sb_uRsR::synapse0x248d3b0() {
   return (neuron0x24845e0()*0.218163);
}

double NNfunction_sb_uRsR::synapse0x248d3f0() {
   return (neuron0x2484920()*-0.384786);
}

double NNfunction_sb_uRsR::synapse0x248d430() {
   return (neuron0x2484c60()*-0.542566);
}

double NNfunction_sb_uRsR::synapse0x248d470() {
   return (neuron0x2484fa0()*0.0200896);
}

double NNfunction_sb_uRsR::synapse0x248d4b0() {
   return (neuron0x24852e0()*0.245466);
}

double NNfunction_sb_uRsR::synapse0x248d4f0() {
   return (neuron0x2485620()*-0.294747);
}

double NNfunction_sb_uRsR::synapse0x248cf80() {
   return (neuron0x2485960()*0.0756408);
}

double NNfunction_sb_uRsR::synapse0x248cfc0() {
   return (neuron0x2485ec0()*-0.553399);
}

double NNfunction_sb_uRsR::synapse0x248d640() {
   return (neuron0x24860e0()*0.000826927);
}

double NNfunction_sb_uRsR::synapse0x248d680() {
   return (neuron0x2486420()*0.18231);
}

double NNfunction_sb_uRsR::synapse0x248d6c0() {
   return (neuron0x2486760()*0.00560259);
}

double NNfunction_sb_uRsR::synapse0x248d700() {
   return (neuron0x2486aa0()*0.0571647);
}

double NNfunction_sb_uRsR::synapse0x248d740() {
   return (neuron0x2486de0()*0.17605);
}

double NNfunction_sb_uRsR::synapse0x248d780() {
   return (neuron0x2487120()*0.294341);
}

double NNfunction_sb_uRsR::synapse0x248db00() {
   return (neuron0x2482560()*0.613167);
}

double NNfunction_sb_uRsR::synapse0x248db40() {
   return (neuron0x24828a0()*-0.491825);
}

double NNfunction_sb_uRsR::synapse0x248db80() {
   return (neuron0x2482be0()*-0.0580218);
}

double NNfunction_sb_uRsR::synapse0x248dbc0() {
   return (neuron0x2482f20()*1.35993);
}

double NNfunction_sb_uRsR::synapse0x248dc00() {
   return (neuron0x2483260()*-0.688164);
}

double NNfunction_sb_uRsR::synapse0x248dc40() {
   return (neuron0x24835a0()*-0.15875);
}

double NNfunction_sb_uRsR::synapse0x248dc80() {
   return (neuron0x24838e0()*-0.0570023);
}

double NNfunction_sb_uRsR::synapse0x248dcc0() {
   return (neuron0x2483c20()*-1.13246);
}

double NNfunction_sb_uRsR::synapse0x248dd00() {
   return (neuron0x2483f60()*-0.488815);
}

double NNfunction_sb_uRsR::synapse0x248dd40() {
   return (neuron0x24842a0()*1.26081);
}

double NNfunction_sb_uRsR::synapse0x248dd80() {
   return (neuron0x24845e0()*-0.792777);
}

double NNfunction_sb_uRsR::synapse0x248ddc0() {
   return (neuron0x2484920()*0.475778);
}

double NNfunction_sb_uRsR::synapse0x248de00() {
   return (neuron0x2484c60()*-0.825704);
}

double NNfunction_sb_uRsR::synapse0x248de40() {
   return (neuron0x2484fa0()*-0.834339);
}

double NNfunction_sb_uRsR::synapse0x248de80() {
   return (neuron0x24852e0()*-0.569712);
}

double NNfunction_sb_uRsR::synapse0x248dec0() {
   return (neuron0x2485620()*-0.491425);
}

double NNfunction_sb_uRsR::synapse0x248d950() {
   return (neuron0x2485960()*-0.579001);
}

double NNfunction_sb_uRsR::synapse0x248d990() {
   return (neuron0x2485ec0()*-0.533567);
}

double NNfunction_sb_uRsR::synapse0x248a720() {
   return (neuron0x24860e0()*-0.510412);
}

double NNfunction_sb_uRsR::synapse0x248a760() {
   return (neuron0x2486420()*-0.074619);
}

double NNfunction_sb_uRsR::synapse0x248a7a0() {
   return (neuron0x2486760()*0.157954);
}

double NNfunction_sb_uRsR::synapse0x248a7e0() {
   return (neuron0x2486aa0()*-0.0532045);
}

double NNfunction_sb_uRsR::synapse0x248a820() {
   return (neuron0x2486de0()*0.719173);
}

double NNfunction_sb_uRsR::synapse0x248a860() {
   return (neuron0x2487120()*0.910633);
}

double NNfunction_sb_uRsR::synapse0x248abe0() {
   return (neuron0x2482560()*0.174088);
}

double NNfunction_sb_uRsR::synapse0x248ac20() {
   return (neuron0x24828a0()*0.296345);
}

double NNfunction_sb_uRsR::synapse0x248ac60() {
   return (neuron0x2482be0()*0.798246);
}

double NNfunction_sb_uRsR::synapse0x248aca0() {
   return (neuron0x2482f20()*-0.143949);
}

double NNfunction_sb_uRsR::synapse0x248ace0() {
   return (neuron0x2483260()*-0.976627);
}

double NNfunction_sb_uRsR::synapse0x248ad20() {
   return (neuron0x24835a0()*-0.873216);
}

double NNfunction_sb_uRsR::synapse0x248ad60() {
   return (neuron0x24838e0()*1.35962);
}

double NNfunction_sb_uRsR::synapse0x248ada0() {
   return (neuron0x2483c20()*0.211642);
}

double NNfunction_sb_uRsR::synapse0x248ade0() {
   return (neuron0x2483f60()*-0.0130289);
}

double NNfunction_sb_uRsR::synapse0x248ae20() {
   return (neuron0x24842a0()*0.228277);
}

double NNfunction_sb_uRsR::synapse0x248ae60() {
   return (neuron0x24845e0()*-0.534197);
}

double NNfunction_sb_uRsR::synapse0x248aea0() {
   return (neuron0x2484920()*-0.320495);
}

double NNfunction_sb_uRsR::synapse0x248aee0() {
   return (neuron0x2484c60()*-0.368347);
}

double NNfunction_sb_uRsR::synapse0x248f020() {
   return (neuron0x2484fa0()*1.00083);
}

double NNfunction_sb_uRsR::synapse0x248f060() {
   return (neuron0x24852e0()*0.712651);
}

double NNfunction_sb_uRsR::synapse0x248f0a0() {
   return (neuron0x2485620()*-1.21016);
}

double NNfunction_sb_uRsR::synapse0x248aa30() {
   return (neuron0x2485960()*-1.32629);
}

double NNfunction_sb_uRsR::synapse0x248aa70() {
   return (neuron0x2485ec0()*-0.142221);
}

double NNfunction_sb_uRsR::synapse0x248f1f0() {
   return (neuron0x24860e0()*-1.21854);
}

double NNfunction_sb_uRsR::synapse0x248f230() {
   return (neuron0x2486420()*-0.371732);
}

double NNfunction_sb_uRsR::synapse0x248f270() {
   return (neuron0x2486760()*-0.211794);
}

double NNfunction_sb_uRsR::synapse0x248f2b0() {
   return (neuron0x2486aa0()*1.19055);
}

double NNfunction_sb_uRsR::synapse0x248f2f0() {
   return (neuron0x2486de0()*0.342846);
}

double NNfunction_sb_uRsR::synapse0x248f330() {
   return (neuron0x2487120()*0.0550312);
}

double NNfunction_sb_uRsR::synapse0x248f6b0() {
   return (neuron0x2482560()*-0.555692);
}

double NNfunction_sb_uRsR::synapse0x248f6f0() {
   return (neuron0x24828a0()*0.665789);
}

double NNfunction_sb_uRsR::synapse0x248f730() {
   return (neuron0x2482be0()*-0.711218);
}

double NNfunction_sb_uRsR::synapse0x248f770() {
   return (neuron0x2482f20()*-1.28015);
}

double NNfunction_sb_uRsR::synapse0x248f7b0() {
   return (neuron0x2483260()*-0.967737);
}

double NNfunction_sb_uRsR::synapse0x248f7f0() {
   return (neuron0x24835a0()*-0.907664);
}

double NNfunction_sb_uRsR::synapse0x248f830() {
   return (neuron0x24838e0()*0.798628);
}

double NNfunction_sb_uRsR::synapse0x248f870() {
   return (neuron0x2483c20()*-0.502164);
}

double NNfunction_sb_uRsR::synapse0x248f8b0() {
   return (neuron0x2483f60()*-0.315706);
}

double NNfunction_sb_uRsR::synapse0x248f8f0() {
   return (neuron0x24842a0()*-0.639764);
}

double NNfunction_sb_uRsR::synapse0x248f930() {
   return (neuron0x24845e0()*0.412256);
}

double NNfunction_sb_uRsR::synapse0x248f970() {
   return (neuron0x2484920()*-0.78185);
}

double NNfunction_sb_uRsR::synapse0x248f9b0() {
   return (neuron0x2484c60()*-1.31761);
}

double NNfunction_sb_uRsR::synapse0x248f9f0() {
   return (neuron0x2484fa0()*-0.626494);
}

double NNfunction_sb_uRsR::synapse0x248fa30() {
   return (neuron0x24852e0()*-0.917854);
}

double NNfunction_sb_uRsR::synapse0x248fa70() {
   return (neuron0x2485620()*0.163872);
}

double NNfunction_sb_uRsR::synapse0x248f500() {
   return (neuron0x2485960()*-0.972407);
}

double NNfunction_sb_uRsR::synapse0x248f540() {
   return (neuron0x2485ec0()*-0.82251);
}

double NNfunction_sb_uRsR::synapse0x248fbc0() {
   return (neuron0x24860e0()*-0.0500605);
}

double NNfunction_sb_uRsR::synapse0x248fc00() {
   return (neuron0x2486420()*-0.458974);
}

double NNfunction_sb_uRsR::synapse0x248fc40() {
   return (neuron0x2486760()*-0.248841);
}

double NNfunction_sb_uRsR::synapse0x248fc80() {
   return (neuron0x2486aa0()*-0.00180387);
}

double NNfunction_sb_uRsR::synapse0x248fcc0() {
   return (neuron0x2486de0()*0.054685);
}

double NNfunction_sb_uRsR::synapse0x248fd00() {
   return (neuron0x2487120()*0.625764);
}

double NNfunction_sb_uRsR::synapse0x2490080() {
   return (neuron0x2482560()*-0.31669);
}

double NNfunction_sb_uRsR::synapse0x24900c0() {
   return (neuron0x24828a0()*-0.839863);
}

double NNfunction_sb_uRsR::synapse0x2490100() {
   return (neuron0x2482be0()*0.444174);
}

double NNfunction_sb_uRsR::synapse0x2490140() {
   return (neuron0x2482f20()*-1.20505);
}

double NNfunction_sb_uRsR::synapse0x2490180() {
   return (neuron0x2483260()*-0.468286);
}

double NNfunction_sb_uRsR::synapse0x24901c0() {
   return (neuron0x24835a0()*-0.367853);
}

double NNfunction_sb_uRsR::synapse0x2490200() {
   return (neuron0x24838e0()*0.0337196);
}

double NNfunction_sb_uRsR::synapse0x2490240() {
   return (neuron0x2483c20()*0.0696484);
}

double NNfunction_sb_uRsR::synapse0x2490280() {
   return (neuron0x2483f60()*0.211678);
}

double NNfunction_sb_uRsR::synapse0x24902c0() {
   return (neuron0x24842a0()*0.188703);
}

double NNfunction_sb_uRsR::synapse0x2490300() {
   return (neuron0x24845e0()*0.196005);
}

double NNfunction_sb_uRsR::synapse0x2490340() {
   return (neuron0x2484920()*-0.0666169);
}

double NNfunction_sb_uRsR::synapse0x2490380() {
   return (neuron0x2484c60()*-1.2248);
}

double NNfunction_sb_uRsR::synapse0x24903c0() {
   return (neuron0x2484fa0()*0.730591);
}

double NNfunction_sb_uRsR::synapse0x2490400() {
   return (neuron0x24852e0()*-0.125203);
}

double NNfunction_sb_uRsR::synapse0x2490440() {
   return (neuron0x2485620()*-0.305391);
}

double NNfunction_sb_uRsR::synapse0x248fed0() {
   return (neuron0x2485960()*0.656394);
}

double NNfunction_sb_uRsR::synapse0x248ff10() {
   return (neuron0x2485ec0()*0.605766);
}

double NNfunction_sb_uRsR::synapse0x2490590() {
   return (neuron0x24860e0()*0.438698);
}

double NNfunction_sb_uRsR::synapse0x24905d0() {
   return (neuron0x2486420()*0.178141);
}

double NNfunction_sb_uRsR::synapse0x2490610() {
   return (neuron0x2486760()*1.73828);
}

double NNfunction_sb_uRsR::synapse0x2490650() {
   return (neuron0x2486aa0()*0.451256);
}

double NNfunction_sb_uRsR::synapse0x2490690() {
   return (neuron0x2486de0()*0.558503);
}

double NNfunction_sb_uRsR::synapse0x24906d0() {
   return (neuron0x2487120()*-1.23237);
}

double NNfunction_sb_uRsR::synapse0x2490a50() {
   return (neuron0x2482560()*-0.104367);
}

double NNfunction_sb_uRsR::synapse0x2490a90() {
   return (neuron0x24828a0()*-0.197263);
}

double NNfunction_sb_uRsR::synapse0x2490ad0() {
   return (neuron0x2482be0()*-0.685287);
}

double NNfunction_sb_uRsR::synapse0x2490b10() {
   return (neuron0x2482f20()*0.397588);
}

double NNfunction_sb_uRsR::synapse0x2490b50() {
   return (neuron0x2483260()*0.459871);
}

double NNfunction_sb_uRsR::synapse0x2490b90() {
   return (neuron0x24835a0()*0.447271);
}

double NNfunction_sb_uRsR::synapse0x2490bd0() {
   return (neuron0x24838e0()*0.0245721);
}

double NNfunction_sb_uRsR::synapse0x2490c10() {
   return (neuron0x2483c20()*-0.114019);
}

double NNfunction_sb_uRsR::synapse0x2490c50() {
   return (neuron0x2483f60()*0.186606);
}

double NNfunction_sb_uRsR::synapse0x2490c90() {
   return (neuron0x24842a0()*0.196556);
}

double NNfunction_sb_uRsR::synapse0x2490cd0() {
   return (neuron0x24845e0()*-0.633975);
}

double NNfunction_sb_uRsR::synapse0x2490d10() {
   return (neuron0x2484920()*-0.202006);
}

double NNfunction_sb_uRsR::synapse0x2490d50() {
   return (neuron0x2484c60()*0.195463);
}

double NNfunction_sb_uRsR::synapse0x2490d90() {
   return (neuron0x2484fa0()*0.272972);
}

double NNfunction_sb_uRsR::synapse0x2490dd0() {
   return (neuron0x24852e0()*-0.0305514);
}

double NNfunction_sb_uRsR::synapse0x2490e10() {
   return (neuron0x2485620()*0.409945);
}

double NNfunction_sb_uRsR::synapse0x24908a0() {
   return (neuron0x2485960()*-0.0855481);
}

double NNfunction_sb_uRsR::synapse0x24908e0() {
   return (neuron0x2485ec0()*0.32048);
}

double NNfunction_sb_uRsR::synapse0x2490f60() {
   return (neuron0x24860e0()*-0.245051);
}

double NNfunction_sb_uRsR::synapse0x2490fa0() {
   return (neuron0x2486420()*-0.578928);
}

double NNfunction_sb_uRsR::synapse0x2490fe0() {
   return (neuron0x2486760()*-0.606896);
}

double NNfunction_sb_uRsR::synapse0x2491020() {
   return (neuron0x2486aa0()*-0.346496);
}

double NNfunction_sb_uRsR::synapse0x2491060() {
   return (neuron0x2486de0()*-0.176023);
}

double NNfunction_sb_uRsR::synapse0x24910a0() {
   return (neuron0x2487120()*0.39061);
}

double NNfunction_sb_uRsR::synapse0x2491420() {
   return (neuron0x2482560()*0.00701899);
}

double NNfunction_sb_uRsR::synapse0x2482780() {
   return (neuron0x24828a0()*0.00965784);
}

double NNfunction_sb_uRsR::synapse0x24827c0() {
   return (neuron0x2482be0()*-0.0173586);
}

double NNfunction_sb_uRsR::synapse0x2482ac0() {
   return (neuron0x2482f20()*-9.13639);
}

double NNfunction_sb_uRsR::synapse0x2482b00() {
   return (neuron0x2483260()*0.0184006);
}

double NNfunction_sb_uRsR::synapse0x2482e00() {
   return (neuron0x24835a0()*0.00215348);
}

double NNfunction_sb_uRsR::synapse0x2482e40() {
   return (neuron0x24838e0()*0.0283009);
}

double NNfunction_sb_uRsR::synapse0x2483140() {
   return (neuron0x2483c20()*-0.0219327);
}

double NNfunction_sb_uRsR::synapse0x2483180() {
   return (neuron0x2483f60()*-0.00623864);
}

double NNfunction_sb_uRsR::synapse0x2483480() {
   return (neuron0x24842a0()*0.00757053);
}

double NNfunction_sb_uRsR::synapse0x24834c0() {
   return (neuron0x24845e0()*-0.000594678);
}

double NNfunction_sb_uRsR::synapse0x24837c0() {
   return (neuron0x2484920()*0.0068276);
}

double NNfunction_sb_uRsR::synapse0x2483800() {
   return (neuron0x2484c60()*-0.0114987);
}

double NNfunction_sb_uRsR::synapse0x2483b00() {
   return (neuron0x2484fa0()*-0.0228145);
}

double NNfunction_sb_uRsR::synapse0x2483b40() {
   return (neuron0x24852e0()*0.224936);
}

double NNfunction_sb_uRsR::synapse0x2483e40() {
   return (neuron0x2485620()*0.00214208);
}

double NNfunction_sb_uRsR::synapse0x2483e80() {
   return (neuron0x2485960()*0.00987593);
}

double NNfunction_sb_uRsR::synapse0x2484180() {
   return (neuron0x2485ec0()*-0.00322146);
}

double NNfunction_sb_uRsR::synapse0x24841c0() {
   return (neuron0x24860e0()*0.196382);
}

double NNfunction_sb_uRsR::synapse0x24844c0() {
   return (neuron0x2486420()*-0.00410651);
}

double NNfunction_sb_uRsR::synapse0x2484500() {
   return (neuron0x2486760()*0.0254776);
}

double NNfunction_sb_uRsR::synapse0x2484800() {
   return (neuron0x2486aa0()*0.0118595);
}

double NNfunction_sb_uRsR::synapse0x2484840() {
   return (neuron0x2486de0()*0.0168399);
}

double NNfunction_sb_uRsR::synapse0x2484b40() {
   return (neuron0x2487120()*0.00725237);
}

double NNfunction_sb_uRsR::synapse0x2484b80() {
   return (neuron0x2482560()*-0.0986498);
}

double NNfunction_sb_uRsR::synapse0x2485840() {
   return (neuron0x24828a0()*-0.126837);
}

double NNfunction_sb_uRsR::synapse0x2485880() {
   return (neuron0x2482be0()*-0.195393);
}

double NNfunction_sb_uRsR::synapse0x2491270() {
   return (neuron0x2482f20()*0.294255);
}

double NNfunction_sb_uRsR::synapse0x24912b0() {
   return (neuron0x2483260()*0.574691);
}

double NNfunction_sb_uRsR::synapse0x2485b80() {
   return (neuron0x24835a0()*0.569606);
}

double NNfunction_sb_uRsR::synapse0x2485bc0() {
   return (neuron0x24838e0()*0.46989);
}

double NNfunction_sb_uRsR::synapse0x2233b50() {
   return (neuron0x2483c20()*0.38903);
}

double NNfunction_sb_uRsR::synapse0x2233b90() {
   return (neuron0x2483f60()*-0.110943);
}

double NNfunction_sb_uRsR::synapse0x2486300() {
   return (neuron0x24842a0()*0.555742);
}

double NNfunction_sb_uRsR::synapse0x2486340() {
   return (neuron0x24845e0()*-0.0549345);
}

double NNfunction_sb_uRsR::synapse0x2486640() {
   return (neuron0x2484920()*0.217225);
}

double NNfunction_sb_uRsR::synapse0x2486680() {
   return (neuron0x2484c60()*0.442428);
}

double NNfunction_sb_uRsR::synapse0x2486980() {
   return (neuron0x2484fa0()*0.438751);
}

double NNfunction_sb_uRsR::synapse0x24869c0() {
   return (neuron0x24852e0()*0.0235296);
}

double NNfunction_sb_uRsR::synapse0x2486cc0() {
   return (neuron0x2485620()*-0.618498);
}

double NNfunction_sb_uRsR::synapse0x2486d00() {
   return (neuron0x2485960()*0.0888145);
}

double NNfunction_sb_uRsR::synapse0x2487000() {
   return (neuron0x2485ec0()*0.121575);
}

double NNfunction_sb_uRsR::synapse0x2487040() {
   return (neuron0x24860e0()*-0.45494);
}

double NNfunction_sb_uRsR::synapse0x2487340() {
   return (neuron0x2486420()*-0.846226);
}

double NNfunction_sb_uRsR::synapse0x2487380() {
   return (neuron0x2486760()*0.410321);
}

double NNfunction_sb_uRsR::synapse0x2484e80() {
   return (neuron0x2486aa0()*-0.406772);
}

double NNfunction_sb_uRsR::synapse0x2484ec0() {
   return (neuron0x2486de0()*-0.0402036);
}

double NNfunction_sb_uRsR::synapse0x2493190() {
   return (neuron0x2487120()*0.31767);
}

double NNfunction_sb_uRsR::synapse0x2493510() {
   return (neuron0x2482560()*0.126548);
}

double NNfunction_sb_uRsR::synapse0x2493550() {
   return (neuron0x24828a0()*0.594078);
}

double NNfunction_sb_uRsR::synapse0x2493590() {
   return (neuron0x2482be0()*-0.449797);
}

double NNfunction_sb_uRsR::synapse0x24935d0() {
   return (neuron0x2482f20()*0.413767);
}

double NNfunction_sb_uRsR::synapse0x2493610() {
   return (neuron0x2483260()*-0.115738);
}

double NNfunction_sb_uRsR::synapse0x2493650() {
   return (neuron0x24835a0()*0.10361);
}

double NNfunction_sb_uRsR::synapse0x2493690() {
   return (neuron0x24838e0()*-0.32282);
}

double NNfunction_sb_uRsR::synapse0x24936d0() {
   return (neuron0x2483c20()*0.0858399);
}

double NNfunction_sb_uRsR::synapse0x2493710() {
   return (neuron0x2483f60()*0.278784);
}

double NNfunction_sb_uRsR::synapse0x2493750() {
   return (neuron0x24842a0()*-0.346879);
}

double NNfunction_sb_uRsR::synapse0x2493790() {
   return (neuron0x24845e0()*0.448364);
}

double NNfunction_sb_uRsR::synapse0x24937d0() {
   return (neuron0x2484920()*-0.103689);
}

double NNfunction_sb_uRsR::synapse0x2493810() {
   return (neuron0x2484c60()*-0.791321);
}

double NNfunction_sb_uRsR::synapse0x2493850() {
   return (neuron0x2484fa0()*-0.217113);
}

double NNfunction_sb_uRsR::synapse0x2493890() {
   return (neuron0x24852e0()*0.308488);
}

double NNfunction_sb_uRsR::synapse0x24938d0() {
   return (neuron0x2485620()*-0.364481);
}

double NNfunction_sb_uRsR::synapse0x2493360() {
   return (neuron0x2485960()*-0.307021);
}

double NNfunction_sb_uRsR::synapse0x24933a0() {
   return (neuron0x2485ec0()*-0.0564672);
}

double NNfunction_sb_uRsR::synapse0x2493a20() {
   return (neuron0x24860e0()*-0.56011);
}

double NNfunction_sb_uRsR::synapse0x2493a60() {
   return (neuron0x2486420()*0.287586);
}

double NNfunction_sb_uRsR::synapse0x2493aa0() {
   return (neuron0x2486760()*0.0761776);
}

double NNfunction_sb_uRsR::synapse0x2493ae0() {
   return (neuron0x2486aa0()*0.0793427);
}

double NNfunction_sb_uRsR::synapse0x2493b20() {
   return (neuron0x2486de0()*-0.0865223);
}

double NNfunction_sb_uRsR::synapse0x2493b60() {
   return (neuron0x2487120()*0.202615);
}

double NNfunction_sb_uRsR::synapse0x2493ee0() {
   return (neuron0x2482560()*0.0583785);
}

double NNfunction_sb_uRsR::synapse0x2493f20() {
   return (neuron0x24828a0()*0.961978);
}

double NNfunction_sb_uRsR::synapse0x2493f60() {
   return (neuron0x2482be0()*0.540156);
}

double NNfunction_sb_uRsR::synapse0x2493fa0() {
   return (neuron0x2482f20()*-0.76744);
}

double NNfunction_sb_uRsR::synapse0x2493fe0() {
   return (neuron0x2483260()*1.16725);
}

double NNfunction_sb_uRsR::synapse0x2494020() {
   return (neuron0x24835a0()*0.150115);
}

double NNfunction_sb_uRsR::synapse0x2494060() {
   return (neuron0x24838e0()*0.0390341);
}

double NNfunction_sb_uRsR::synapse0x24940a0() {
   return (neuron0x2483c20()*0.309147);
}

double NNfunction_sb_uRsR::synapse0x24940e0() {
   return (neuron0x2483f60()*0.573438);
}

double NNfunction_sb_uRsR::synapse0x2494120() {
   return (neuron0x24842a0()*-1.18072);
}

double NNfunction_sb_uRsR::synapse0x2494160() {
   return (neuron0x24845e0()*-0.47784);
}

double NNfunction_sb_uRsR::synapse0x24941a0() {
   return (neuron0x2484920()*-0.782944);
}

double NNfunction_sb_uRsR::synapse0x24941e0() {
   return (neuron0x2484c60()*-0.555342);
}

double NNfunction_sb_uRsR::synapse0x2494220() {
   return (neuron0x2484fa0()*0.849078);
}

double NNfunction_sb_uRsR::synapse0x2494260() {
   return (neuron0x24852e0()*-0.397166);
}

double NNfunction_sb_uRsR::synapse0x24942a0() {
   return (neuron0x2485620()*0.0468548);
}

double NNfunction_sb_uRsR::synapse0x2493d30() {
   return (neuron0x2485960()*1.09217);
}

double NNfunction_sb_uRsR::synapse0x2493d70() {
   return (neuron0x2485ec0()*-0.774179);
}

double NNfunction_sb_uRsR::synapse0x24943f0() {
   return (neuron0x24860e0()*0.966922);
}

double NNfunction_sb_uRsR::synapse0x2494430() {
   return (neuron0x2486420()*0.268339);
}

double NNfunction_sb_uRsR::synapse0x2494470() {
   return (neuron0x2486760()*-0.441956);
}

double NNfunction_sb_uRsR::synapse0x24944b0() {
   return (neuron0x2486aa0()*0.308458);
}

double NNfunction_sb_uRsR::synapse0x24944f0() {
   return (neuron0x2486de0()*0.290704);
}

double NNfunction_sb_uRsR::synapse0x2494530() {
   return (neuron0x2487120()*-0.00217429);
}

double NNfunction_sb_uRsR::synapse0x24948b0() {
   return (neuron0x2482560()*0.0132438);
}

double NNfunction_sb_uRsR::synapse0x24948f0() {
   return (neuron0x24828a0()*0.0111225);
}

double NNfunction_sb_uRsR::synapse0x2494930() {
   return (neuron0x2482be0()*-0.02069);
}

double NNfunction_sb_uRsR::synapse0x2494970() {
   return (neuron0x2482f20()*2.46868);
}

double NNfunction_sb_uRsR::synapse0x24949b0() {
   return (neuron0x2483260()*0.0247405);
}

double NNfunction_sb_uRsR::synapse0x24949f0() {
   return (neuron0x24835a0()*-0.00844128);
}

double NNfunction_sb_uRsR::synapse0x2494a30() {
   return (neuron0x24838e0()*-0.0244175);
}

double NNfunction_sb_uRsR::synapse0x2494a70() {
   return (neuron0x2483c20()*0.0119825);
}

double NNfunction_sb_uRsR::synapse0x2494ab0() {
   return (neuron0x2483f60()*0.00723129);
}

double NNfunction_sb_uRsR::synapse0x2494af0() {
   return (neuron0x24842a0()*-0.00772757);
}

double NNfunction_sb_uRsR::synapse0x2494b30() {
   return (neuron0x24845e0()*-0.0130703);
}

double NNfunction_sb_uRsR::synapse0x2494b70() {
   return (neuron0x2484920()*-0.0230804);
}

double NNfunction_sb_uRsR::synapse0x2494bb0() {
   return (neuron0x2484c60()*-0.0312848);
}

double NNfunction_sb_uRsR::synapse0x2494bf0() {
   return (neuron0x2484fa0()*-0.0119124);
}

double NNfunction_sb_uRsR::synapse0x2494c30() {
   return (neuron0x24852e0()*0.685424);
}

double NNfunction_sb_uRsR::synapse0x2494c70() {
   return (neuron0x2485620()*-0.030486);
}

double NNfunction_sb_uRsR::synapse0x2494700() {
   return (neuron0x2485960()*-0.0241247);
}

double NNfunction_sb_uRsR::synapse0x2494740() {
   return (neuron0x2485ec0()*-0.0096225);
}

double NNfunction_sb_uRsR::synapse0x2494dc0() {
   return (neuron0x24860e0()*0.645873);
}

double NNfunction_sb_uRsR::synapse0x2494e00() {
   return (neuron0x2486420()*0.0244167);
}

double NNfunction_sb_uRsR::synapse0x2494e40() {
   return (neuron0x2486760()*-0.0137679);
}

double NNfunction_sb_uRsR::synapse0x2494e80() {
   return (neuron0x2486aa0()*-0.00669549);
}

double NNfunction_sb_uRsR::synapse0x2494ec0() {
   return (neuron0x2486de0()*-0.0074321);
}

double NNfunction_sb_uRsR::synapse0x2494f00() {
   return (neuron0x2487120()*-0.0137289);
}

double NNfunction_sb_uRsR::synapse0x2495280() {
   return (neuron0x2482560()*-0.00194426);
}

double NNfunction_sb_uRsR::synapse0x24952c0() {
   return (neuron0x24828a0()*-0.0900421);
}

double NNfunction_sb_uRsR::synapse0x2495300() {
   return (neuron0x2482be0()*-0.203678);
}

double NNfunction_sb_uRsR::synapse0x2495340() {
   return (neuron0x2482f20()*0.57369);
}

double NNfunction_sb_uRsR::synapse0x2495380() {
   return (neuron0x2483260()*0.0754208);
}

double NNfunction_sb_uRsR::synapse0x24953c0() {
   return (neuron0x24835a0()*0.0761334);
}

double NNfunction_sb_uRsR::synapse0x2495400() {
   return (neuron0x24838e0()*0.0731517);
}

double NNfunction_sb_uRsR::synapse0x2495440() {
   return (neuron0x2483c20()*-0.166216);
}

double NNfunction_sb_uRsR::synapse0x2495480() {
   return (neuron0x2483f60()*-0.0653872);
}

double NNfunction_sb_uRsR::synapse0x24954c0() {
   return (neuron0x24842a0()*-0.051503);
}

double NNfunction_sb_uRsR::synapse0x2495500() {
   return (neuron0x24845e0()*0.0485029);
}

double NNfunction_sb_uRsR::synapse0x2495540() {
   return (neuron0x2484920()*0.0297474);
}

double NNfunction_sb_uRsR::synapse0x2495580() {
   return (neuron0x2484c60()*0.046164);
}

double NNfunction_sb_uRsR::synapse0x24955c0() {
   return (neuron0x2484fa0()*-0.0237054);
}

double NNfunction_sb_uRsR::synapse0x2495600() {
   return (neuron0x24852e0()*3.09178);
}

double NNfunction_sb_uRsR::synapse0x2495640() {
   return (neuron0x2485620()*0.102214);
}

double NNfunction_sb_uRsR::synapse0x24950d0() {
   return (neuron0x2485960()*-0.0128135);
}

double NNfunction_sb_uRsR::synapse0x2495110() {
   return (neuron0x2485ec0()*0.00286916);
}

double NNfunction_sb_uRsR::synapse0x2495790() {
   return (neuron0x24860e0()*-0.593028);
}

double NNfunction_sb_uRsR::synapse0x24957d0() {
   return (neuron0x2486420()*-0.0808479);
}

double NNfunction_sb_uRsR::synapse0x2495810() {
   return (neuron0x2486760()*0.173714);
}

double NNfunction_sb_uRsR::synapse0x2495850() {
   return (neuron0x2486aa0()*-0.00809994);
}

double NNfunction_sb_uRsR::synapse0x2495890() {
   return (neuron0x2486de0()*-0.0356062);
}

double NNfunction_sb_uRsR::synapse0x24958d0() {
   return (neuron0x2487120()*-0.135556);
}

double NNfunction_sb_uRsR::synapse0x2495c50() {
   return (neuron0x2482560()*-0.0257615);
}

double NNfunction_sb_uRsR::synapse0x2495c90() {
   return (neuron0x24828a0()*0.00952496);
}

double NNfunction_sb_uRsR::synapse0x2495cd0() {
   return (neuron0x2482be0()*0.0219684);
}

double NNfunction_sb_uRsR::synapse0x2495d10() {
   return (neuron0x2482f20()*-0.68427);
}

double NNfunction_sb_uRsR::synapse0x2495d50() {
   return (neuron0x2483260()*-0.0354933);
}

double NNfunction_sb_uRsR::synapse0x2495d90() {
   return (neuron0x24835a0()*0.0149773);
}

double NNfunction_sb_uRsR::synapse0x2495dd0() {
   return (neuron0x24838e0()*0.0607004);
}

double NNfunction_sb_uRsR::synapse0x2495e10() {
   return (neuron0x2483c20()*0.0294524);
}

double NNfunction_sb_uRsR::synapse0x2495e50() {
   return (neuron0x2483f60()*0.00180131);
}

double NNfunction_sb_uRsR::synapse0x248e010() {
   return (neuron0x24842a0()*0.00652246);
}

double NNfunction_sb_uRsR::synapse0x248e050() {
   return (neuron0x24845e0()*-0.00180411);
}

double NNfunction_sb_uRsR::synapse0x248e090() {
   return (neuron0x2484920()*-0.0130288);
}

double NNfunction_sb_uRsR::synapse0x248e0d0() {
   return (neuron0x2484c60()*-0.0249975);
}

double NNfunction_sb_uRsR::synapse0x248e110() {
   return (neuron0x2484fa0()*0.0153334);
}

double NNfunction_sb_uRsR::synapse0x248e150() {
   return (neuron0x24852e0()*0.145278);
}

double NNfunction_sb_uRsR::synapse0x248e190() {
   return (neuron0x2485620()*0.00483836);
}

double NNfunction_sb_uRsR::synapse0x2495aa0() {
   return (neuron0x2485960()*0.0152264);
}

double NNfunction_sb_uRsR::synapse0x2495ae0() {
   return (neuron0x2485ec0()*-0.0359309);
}

double NNfunction_sb_uRsR::synapse0x248e2e0() {
   return (neuron0x24860e0()*0.124174);
}

double NNfunction_sb_uRsR::synapse0x248e320() {
   return (neuron0x2486420()*-0.0211788);
}

double NNfunction_sb_uRsR::synapse0x248e360() {
   return (neuron0x2486760()*0.00370985);
}

double NNfunction_sb_uRsR::synapse0x248e3a0() {
   return (neuron0x2486aa0()*0.0190483);
}

double NNfunction_sb_uRsR::synapse0x248e3e0() {
   return (neuron0x2486de0()*0.0188768);
}

double NNfunction_sb_uRsR::synapse0x248e420() {
   return (neuron0x2487120()*-0.0121598);
}

double NNfunction_sb_uRsR::synapse0x248e7a0() {
   return (neuron0x2482560()*0.0948094);
}

double NNfunction_sb_uRsR::synapse0x248e7e0() {
   return (neuron0x24828a0()*0.156824);
}

double NNfunction_sb_uRsR::synapse0x248e820() {
   return (neuron0x2482be0()*0.062325);
}

double NNfunction_sb_uRsR::synapse0x248e860() {
   return (neuron0x2482f20()*-4.81479);
}

double NNfunction_sb_uRsR::synapse0x248e8a0() {
   return (neuron0x2483260()*0.0270897);
}

double NNfunction_sb_uRsR::synapse0x248e8e0() {
   return (neuron0x24835a0()*-0.0053379);
}

double NNfunction_sb_uRsR::synapse0x248e920() {
   return (neuron0x24838e0()*-0.0346782);
}

double NNfunction_sb_uRsR::synapse0x248e960() {
   return (neuron0x2483c20()*0.20003);
}

double NNfunction_sb_uRsR::synapse0x248e9a0() {
   return (neuron0x2483f60()*-0.0264805);
}

double NNfunction_sb_uRsR::synapse0x248e9e0() {
   return (neuron0x24842a0()*-0.191881);
}

double NNfunction_sb_uRsR::synapse0x248ea20() {
   return (neuron0x24845e0()*-0.0227377);
}

double NNfunction_sb_uRsR::synapse0x248ea60() {
   return (neuron0x2484920()*0.052843);
}

double NNfunction_sb_uRsR::synapse0x248eaa0() {
   return (neuron0x2484c60()*-0.11599);
}

double NNfunction_sb_uRsR::synapse0x248eae0() {
   return (neuron0x2484fa0()*-0.0428057);
}

double NNfunction_sb_uRsR::synapse0x248eb20() {
   return (neuron0x24852e0()*1.33954);
}

double NNfunction_sb_uRsR::synapse0x248eb60() {
   return (neuron0x2485620()*-0.136373);
}

double NNfunction_sb_uRsR::synapse0x248e5f0() {
   return (neuron0x2485960()*-0.154857);
}

double NNfunction_sb_uRsR::synapse0x248e630() {
   return (neuron0x2485ec0()*-0.100636);
}

double NNfunction_sb_uRsR::synapse0x248ecb0() {
   return (neuron0x24860e0()*1.34064);
}

double NNfunction_sb_uRsR::synapse0x248ecf0() {
   return (neuron0x2486420()*-0.0509797);
}

double NNfunction_sb_uRsR::synapse0x248ed30() {
   return (neuron0x2486760()*-0.0180523);
}

double NNfunction_sb_uRsR::synapse0x248ed70() {
   return (neuron0x2486aa0()*0.0592016);
}

double NNfunction_sb_uRsR::synapse0x248edb0() {
   return (neuron0x2486de0()*-0.0197799);
}

double NNfunction_sb_uRsR::synapse0x248edf0() {
   return (neuron0x2487120()*-0.138887);
}

double NNfunction_sb_uRsR::synapse0x248efc0() {
   return (neuron0x2482560()*-0.00520866);
}

double NNfunction_sb_uRsR::synapse0x2498050() {
   return (neuron0x24828a0()*-0.015959);
}

double NNfunction_sb_uRsR::synapse0x2498090() {
   return (neuron0x2482be0()*-0.00311065);
}

double NNfunction_sb_uRsR::synapse0x24980d0() {
   return (neuron0x2482f20()*-3.511);
}

double NNfunction_sb_uRsR::synapse0x2498110() {
   return (neuron0x2483260()*-0.00895858);
}

double NNfunction_sb_uRsR::synapse0x2498150() {
   return (neuron0x24835a0()*0.00906964);
}

double NNfunction_sb_uRsR::synapse0x2498190() {
   return (neuron0x24838e0()*-0.00753177);
}

double NNfunction_sb_uRsR::synapse0x24981d0() {
   return (neuron0x2483c20()*0.00324735);
}

double NNfunction_sb_uRsR::synapse0x2498210() {
   return (neuron0x2483f60()*0.00782884);
}

double NNfunction_sb_uRsR::synapse0x2498250() {
   return (neuron0x24842a0()*0.00394486);
}

double NNfunction_sb_uRsR::synapse0x2498290() {
   return (neuron0x24845e0()*0.0147464);
}

double NNfunction_sb_uRsR::synapse0x24982d0() {
   return (neuron0x2484920()*0.00977733);
}

double NNfunction_sb_uRsR::synapse0x2498310() {
   return (neuron0x2484c60()*0.00957697);
}

double NNfunction_sb_uRsR::synapse0x2498350() {
   return (neuron0x2484fa0()*-0.00542345);
}

double NNfunction_sb_uRsR::synapse0x2498390() {
   return (neuron0x24852e0()*-0.122946);
}

double NNfunction_sb_uRsR::synapse0x24983d0() {
   return (neuron0x2485620()*0.00307604);
}

double NNfunction_sb_uRsR::synapse0x2497ea0() {
   return (neuron0x2485960()*-0.0169305);
}

double NNfunction_sb_uRsR::synapse0x2497ee0() {
   return (neuron0x2485ec0()*0.00414589);
}

double NNfunction_sb_uRsR::synapse0x2498520() {
   return (neuron0x24860e0()*-0.129326);
}

double NNfunction_sb_uRsR::synapse0x2498560() {
   return (neuron0x2486420()*0.0132342);
}

double NNfunction_sb_uRsR::synapse0x24985a0() {
   return (neuron0x2486760()*-0.00350713);
}

double NNfunction_sb_uRsR::synapse0x24985e0() {
   return (neuron0x2486aa0()*-0.00410544);
}

double NNfunction_sb_uRsR::synapse0x2498620() {
   return (neuron0x2486de0()*-0.00918213);
}

double NNfunction_sb_uRsR::synapse0x2498660() {
   return (neuron0x2487120()*0.00369791);
}

double NNfunction_sb_uRsR::synapse0x24989e0() {
   return (neuron0x2482560()*0.583587);
}

double NNfunction_sb_uRsR::synapse0x2498a20() {
   return (neuron0x24828a0()*-0.939244);
}

double NNfunction_sb_uRsR::synapse0x2498a60() {
   return (neuron0x2482be0()*0.476547);
}

double NNfunction_sb_uRsR::synapse0x2498aa0() {
   return (neuron0x2482f20()*0.0486035);
}

double NNfunction_sb_uRsR::synapse0x2498ae0() {
   return (neuron0x2483260()*0.315159);
}

double NNfunction_sb_uRsR::synapse0x2498b20() {
   return (neuron0x24835a0()*0.0632135);
}

double NNfunction_sb_uRsR::synapse0x2498b60() {
   return (neuron0x24838e0()*0.584424);
}

double NNfunction_sb_uRsR::synapse0x2498ba0() {
   return (neuron0x2483c20()*-0.221952);
}

double NNfunction_sb_uRsR::synapse0x2498be0() {
   return (neuron0x2483f60()*-0.679334);
}

double NNfunction_sb_uRsR::synapse0x2498c20() {
   return (neuron0x24842a0()*0.0877745);
}

double NNfunction_sb_uRsR::synapse0x2498c60() {
   return (neuron0x24845e0()*0.657699);
}

double NNfunction_sb_uRsR::synapse0x2498ca0() {
   return (neuron0x2484920()*0.149316);
}

double NNfunction_sb_uRsR::synapse0x2498ce0() {
   return (neuron0x2484c60()*0.630326);
}

double NNfunction_sb_uRsR::synapse0x2498d20() {
   return (neuron0x2484fa0()*1.60991);
}

double NNfunction_sb_uRsR::synapse0x2498d60() {
   return (neuron0x24852e0()*1.09615);
}

double NNfunction_sb_uRsR::synapse0x2498da0() {
   return (neuron0x2485620()*0.141897);
}

double NNfunction_sb_uRsR::synapse0x2498830() {
   return (neuron0x2485960()*1.15368);
}

double NNfunction_sb_uRsR::synapse0x2498870() {
   return (neuron0x2485ec0()*-0.0746688);
}

double NNfunction_sb_uRsR::synapse0x2498ef0() {
   return (neuron0x24860e0()*-0.131342);
}

double NNfunction_sb_uRsR::synapse0x2498f30() {
   return (neuron0x2486420()*-0.161348);
}

double NNfunction_sb_uRsR::synapse0x2498f70() {
   return (neuron0x2486760()*0.289208);
}

double NNfunction_sb_uRsR::synapse0x2498fb0() {
   return (neuron0x2486aa0()*-0.0130233);
}

double NNfunction_sb_uRsR::synapse0x2498ff0() {
   return (neuron0x2486de0()*-0.301658);
}

double NNfunction_sb_uRsR::synapse0x2499030() {
   return (neuron0x2487120()*0.198576);
}

double NNfunction_sb_uRsR::synapse0x24993b0() {
   return (neuron0x2482560()*0.0295512);
}

double NNfunction_sb_uRsR::synapse0x24993f0() {
   return (neuron0x24828a0()*0.00850829);
}

double NNfunction_sb_uRsR::synapse0x2499430() {
   return (neuron0x2482be0()*-0.0276908);
}

double NNfunction_sb_uRsR::synapse0x2499470() {
   return (neuron0x2482f20()*0.742481);
}

double NNfunction_sb_uRsR::synapse0x24994b0() {
   return (neuron0x2483260()*0.0239801);
}

double NNfunction_sb_uRsR::synapse0x24994f0() {
   return (neuron0x24835a0()*-0.0140193);
}

double NNfunction_sb_uRsR::synapse0x2499530() {
   return (neuron0x24838e0()*-0.0726402);
}

double NNfunction_sb_uRsR::synapse0x2499570() {
   return (neuron0x2483c20()*-0.026202);
}

double NNfunction_sb_uRsR::synapse0x24995b0() {
   return (neuron0x2483f60()*-0.00271923);
}

double NNfunction_sb_uRsR::synapse0x24995f0() {
   return (neuron0x24842a0()*0.00122039);
}

double NNfunction_sb_uRsR::synapse0x2499630() {
   return (neuron0x24845e0()*0.000211921);
}

double NNfunction_sb_uRsR::synapse0x2499670() {
   return (neuron0x2484920()*-0.0591725);
}

double NNfunction_sb_uRsR::synapse0x24996b0() {
   return (neuron0x2484c60()*-0.0498914);
}

double NNfunction_sb_uRsR::synapse0x24996f0() {
   return (neuron0x2484fa0()*-0.0121648);
}

double NNfunction_sb_uRsR::synapse0x2499730() {
   return (neuron0x24852e0()*0.398431);
}

double NNfunction_sb_uRsR::synapse0x2499770() {
   return (neuron0x2485620()*-0.0558007);
}

double NNfunction_sb_uRsR::synapse0x2499200() {
   return (neuron0x2485960()*-0.0059953);
}

double NNfunction_sb_uRsR::synapse0x2499240() {
   return (neuron0x2485ec0()*-0.00046317);
}

double NNfunction_sb_uRsR::synapse0x24998c0() {
   return (neuron0x24860e0()*0.504681);
}

double NNfunction_sb_uRsR::synapse0x2499900() {
   return (neuron0x2486420()*0.0292016);
}

double NNfunction_sb_uRsR::synapse0x2499940() {
   return (neuron0x2486760()*-0.0182141);
}

double NNfunction_sb_uRsR::synapse0x2499980() {
   return (neuron0x2486aa0()*-0.0246612);
}

double NNfunction_sb_uRsR::synapse0x24999c0() {
   return (neuron0x2486de0()*-0.0153562);
}

double NNfunction_sb_uRsR::synapse0x2499a00() {
   return (neuron0x2487120()*0.00901383);
}

double NNfunction_sb_uRsR::synapse0x2499d80() {
   return (neuron0x2482560()*0.0675586);
}

double NNfunction_sb_uRsR::synapse0x2499dc0() {
   return (neuron0x24828a0()*-1.40276);
}

double NNfunction_sb_uRsR::synapse0x2499e00() {
   return (neuron0x2482be0()*0.772929);
}

double NNfunction_sb_uRsR::synapse0x2499e40() {
   return (neuron0x2482f20()*1.898);
}

double NNfunction_sb_uRsR::synapse0x2499e80() {
   return (neuron0x2483260()*0.501358);
}

double NNfunction_sb_uRsR::synapse0x2499ec0() {
   return (neuron0x24835a0()*-0.206411);
}

double NNfunction_sb_uRsR::synapse0x2499f00() {
   return (neuron0x24838e0()*-0.158137);
}

double NNfunction_sb_uRsR::synapse0x2499f40() {
   return (neuron0x2483c20()*0.197348);
}

double NNfunction_sb_uRsR::synapse0x2499f80() {
   return (neuron0x2483f60()*0.430738);
}

double NNfunction_sb_uRsR::synapse0x2499fc0() {
   return (neuron0x24842a0()*0.0034392);
}

double NNfunction_sb_uRsR::synapse0x249a000() {
   return (neuron0x24845e0()*-0.134054);
}

double NNfunction_sb_uRsR::synapse0x249a040() {
   return (neuron0x2484920()*-0.35708);
}

double NNfunction_sb_uRsR::synapse0x249a080() {
   return (neuron0x2484c60()*0.148271);
}

double NNfunction_sb_uRsR::synapse0x249a0c0() {
   return (neuron0x2484fa0()*0.147343);
}

double NNfunction_sb_uRsR::synapse0x249a100() {
   return (neuron0x24852e0()*-0.483317);
}

double NNfunction_sb_uRsR::synapse0x249a140() {
   return (neuron0x2485620()*-0.421622);
}

double NNfunction_sb_uRsR::synapse0x2499bd0() {
   return (neuron0x2485960()*0.0246621);
}

double NNfunction_sb_uRsR::synapse0x2499c10() {
   return (neuron0x2485ec0()*-0.335885);
}

double NNfunction_sb_uRsR::synapse0x249a290() {
   return (neuron0x24860e0()*-0.608553);
}

double NNfunction_sb_uRsR::synapse0x249a2d0() {
   return (neuron0x2486420()*0.056457);
}

double NNfunction_sb_uRsR::synapse0x249a310() {
   return (neuron0x2486760()*0.5537);
}

double NNfunction_sb_uRsR::synapse0x249a350() {
   return (neuron0x2486aa0()*-0.34957);
}

double NNfunction_sb_uRsR::synapse0x249a390() {
   return (neuron0x2486de0()*-0.433229);
}

double NNfunction_sb_uRsR::synapse0x249a3d0() {
   return (neuron0x2487120()*0.156145);
}

double NNfunction_sb_uRsR::synapse0x249a750() {
   return (neuron0x2482560()*0.148699);
}

double NNfunction_sb_uRsR::synapse0x249a790() {
   return (neuron0x24828a0()*-0.421186);
}

double NNfunction_sb_uRsR::synapse0x249a7d0() {
   return (neuron0x2482be0()*-0.0799718);
}

double NNfunction_sb_uRsR::synapse0x249a810() {
   return (neuron0x2482f20()*-1.16236);
}

double NNfunction_sb_uRsR::synapse0x249a850() {
   return (neuron0x2483260()*0.706158);
}

double NNfunction_sb_uRsR::synapse0x249a890() {
   return (neuron0x24835a0()*-0.0993845);
}

double NNfunction_sb_uRsR::synapse0x249a8d0() {
   return (neuron0x24838e0()*0.310559);
}

double NNfunction_sb_uRsR::synapse0x249a910() {
   return (neuron0x2483c20()*-0.158817);
}

double NNfunction_sb_uRsR::synapse0x249a950() {
   return (neuron0x2483f60()*0.10309);
}

double NNfunction_sb_uRsR::synapse0x249a990() {
   return (neuron0x24842a0()*0.262203);
}

double NNfunction_sb_uRsR::synapse0x249a9d0() {
   return (neuron0x24845e0()*-0.100494);
}

double NNfunction_sb_uRsR::synapse0x249aa10() {
   return (neuron0x2484920()*0.0961866);
}

double NNfunction_sb_uRsR::synapse0x249aa50() {
   return (neuron0x2484c60()*-0.0262611);
}

double NNfunction_sb_uRsR::synapse0x249aa90() {
   return (neuron0x2484fa0()*0.491455);
}

double NNfunction_sb_uRsR::synapse0x249aad0() {
   return (neuron0x24852e0()*1.05915);
}

double NNfunction_sb_uRsR::synapse0x249ab10() {
   return (neuron0x2485620()*0.641455);
}

double NNfunction_sb_uRsR::synapse0x249a5a0() {
   return (neuron0x2485960()*0.375345);
}

double NNfunction_sb_uRsR::synapse0x249a5e0() {
   return (neuron0x2485ec0()*0.384416);
}

double NNfunction_sb_uRsR::synapse0x249ac60() {
   return (neuron0x24860e0()*-0.449603);
}

double NNfunction_sb_uRsR::synapse0x249aca0() {
   return (neuron0x2486420()*-0.694402);
}

double NNfunction_sb_uRsR::synapse0x249ace0() {
   return (neuron0x2486760()*-0.619342);
}

double NNfunction_sb_uRsR::synapse0x249ad20() {
   return (neuron0x2486aa0()*-0.153651);
}

double NNfunction_sb_uRsR::synapse0x249ad60() {
   return (neuron0x2486de0()*0.0415591);
}

double NNfunction_sb_uRsR::synapse0x249ada0() {
   return (neuron0x2487120()*0.48927);
}

double NNfunction_sb_uRsR::synapse0x249b120() {
   return (neuron0x2482560()*-1.29349);
}

double NNfunction_sb_uRsR::synapse0x249b160() {
   return (neuron0x24828a0()*0.240997);
}

double NNfunction_sb_uRsR::synapse0x249b1a0() {
   return (neuron0x2482be0()*-0.0530077);
}

double NNfunction_sb_uRsR::synapse0x249b1e0() {
   return (neuron0x2482f20()*-0.946765);
}

double NNfunction_sb_uRsR::synapse0x249b220() {
   return (neuron0x2483260()*-1.18554);
}

double NNfunction_sb_uRsR::synapse0x249b260() {
   return (neuron0x24835a0()*-0.543482);
}

double NNfunction_sb_uRsR::synapse0x249b2a0() {
   return (neuron0x24838e0()*-0.915675);
}

double NNfunction_sb_uRsR::synapse0x249b2e0() {
   return (neuron0x2483c20()*-0.880682);
}

double NNfunction_sb_uRsR::synapse0x249b320() {
   return (neuron0x2483f60()*-0.182147);
}

double NNfunction_sb_uRsR::synapse0x249b360() {
   return (neuron0x24842a0()*-0.418262);
}

double NNfunction_sb_uRsR::synapse0x249b3a0() {
   return (neuron0x24845e0()*0.457675);
}

double NNfunction_sb_uRsR::synapse0x249b3e0() {
   return (neuron0x2484920()*-0.680978);
}

double NNfunction_sb_uRsR::synapse0x249b420() {
   return (neuron0x2484c60()*-0.203964);
}

double NNfunction_sb_uRsR::synapse0x249b460() {
   return (neuron0x2484fa0()*-0.149493);
}

double NNfunction_sb_uRsR::synapse0x249b4a0() {
   return (neuron0x24852e0()*0.123397);
}

double NNfunction_sb_uRsR::synapse0x249b4e0() {
   return (neuron0x2485620()*-0.110289);
}

double NNfunction_sb_uRsR::synapse0x249af70() {
   return (neuron0x2485960()*-0.155321);
}

double NNfunction_sb_uRsR::synapse0x249afb0() {
   return (neuron0x2485ec0()*-0.508214);
}

double NNfunction_sb_uRsR::synapse0x249b630() {
   return (neuron0x24860e0()*-0.660458);
}

double NNfunction_sb_uRsR::synapse0x249b670() {
   return (neuron0x2486420()*-0.708175);
}

double NNfunction_sb_uRsR::synapse0x249b6b0() {
   return (neuron0x2486760()*0.202084);
}

double NNfunction_sb_uRsR::synapse0x249b6f0() {
   return (neuron0x2486aa0()*0.432011);
}

double NNfunction_sb_uRsR::synapse0x249b730() {
   return (neuron0x2486de0()*0.182939);
}

double NNfunction_sb_uRsR::synapse0x249b770() {
   return (neuron0x2487120()*-0.267144);
}

double NNfunction_sb_uRsR::synapse0x249baf0() {
   return (neuron0x2482560()*-0.822898);
}

double NNfunction_sb_uRsR::synapse0x249bb30() {
   return (neuron0x24828a0()*0.0885121);
}

double NNfunction_sb_uRsR::synapse0x249bb70() {
   return (neuron0x2482be0()*0.415838);
}

double NNfunction_sb_uRsR::synapse0x249bbb0() {
   return (neuron0x2482f20()*-0.294312);
}

double NNfunction_sb_uRsR::synapse0x249bbf0() {
   return (neuron0x2483260()*1.02702);
}

double NNfunction_sb_uRsR::synapse0x249bc30() {
   return (neuron0x24835a0()*-0.931348);
}

double NNfunction_sb_uRsR::synapse0x249bc70() {
   return (neuron0x24838e0()*0.360208);
}

double NNfunction_sb_uRsR::synapse0x249bcb0() {
   return (neuron0x2483c20()*-0.894066);
}

double NNfunction_sb_uRsR::synapse0x249bcf0() {
   return (neuron0x2483f60()*0.381);
}

double NNfunction_sb_uRsR::synapse0x249bd30() {
   return (neuron0x24842a0()*0.967503);
}

double NNfunction_sb_uRsR::synapse0x249bd70() {
   return (neuron0x24845e0()*-0.0146169);
}

double NNfunction_sb_uRsR::synapse0x249bdb0() {
   return (neuron0x2484920()*-0.55968);
}

double NNfunction_sb_uRsR::synapse0x249bdf0() {
   return (neuron0x2484c60()*-0.76689);
}

double NNfunction_sb_uRsR::synapse0x249be30() {
   return (neuron0x2484fa0()*0.488177);
}

double NNfunction_sb_uRsR::synapse0x249be70() {
   return (neuron0x24852e0()*1.10834);
}

double NNfunction_sb_uRsR::synapse0x249beb0() {
   return (neuron0x2485620()*-0.550257);
}

double NNfunction_sb_uRsR::synapse0x249b940() {
   return (neuron0x2485960()*-0.439849);
}

double NNfunction_sb_uRsR::synapse0x249b980() {
   return (neuron0x2485ec0()*0.382238);
}

double NNfunction_sb_uRsR::synapse0x249c000() {
   return (neuron0x24860e0()*1.63898);
}

double NNfunction_sb_uRsR::synapse0x249c040() {
   return (neuron0x2486420()*-0.696323);
}

double NNfunction_sb_uRsR::synapse0x249c080() {
   return (neuron0x2486760()*0.557738);
}

double NNfunction_sb_uRsR::synapse0x249c0c0() {
   return (neuron0x2486aa0()*-0.125648);
}

double NNfunction_sb_uRsR::synapse0x249c100() {
   return (neuron0x2486de0()*-0.759683);
}

double NNfunction_sb_uRsR::synapse0x249c140() {
   return (neuron0x2487120()*-0.62579);
}

double NNfunction_sb_uRsR::synapse0x249c4c0() {
   return (neuron0x2482560()*-0.0715423);
}

double NNfunction_sb_uRsR::synapse0x249c500() {
   return (neuron0x24828a0()*-0.164154);
}

double NNfunction_sb_uRsR::synapse0x249c540() {
   return (neuron0x2482be0()*-0.274778);
}

double NNfunction_sb_uRsR::synapse0x249c580() {
   return (neuron0x2482f20()*0.149549);
}

double NNfunction_sb_uRsR::synapse0x249c5c0() {
   return (neuron0x2483260()*0.389904);
}

double NNfunction_sb_uRsR::synapse0x249c600() {
   return (neuron0x24835a0()*0.644142);
}

double NNfunction_sb_uRsR::synapse0x249c640() {
   return (neuron0x24838e0()*-0.107786);
}

double NNfunction_sb_uRsR::synapse0x249c680() {
   return (neuron0x2483c20()*-0.312073);
}

double NNfunction_sb_uRsR::synapse0x249c6c0() {
   return (neuron0x2483f60()*-0.444967);
}

double NNfunction_sb_uRsR::synapse0x249c700() {
   return (neuron0x24842a0()*-0.393818);
}

double NNfunction_sb_uRsR::synapse0x249c740() {
   return (neuron0x24845e0()*0.00429046);
}

double NNfunction_sb_uRsR::synapse0x249c780() {
   return (neuron0x2484920()*0.0290699);
}

double NNfunction_sb_uRsR::synapse0x249c7c0() {
   return (neuron0x2484c60()*0.726779);
}

double NNfunction_sb_uRsR::synapse0x249c800() {
   return (neuron0x2484fa0()*-0.126425);
}

double NNfunction_sb_uRsR::synapse0x249c840() {
   return (neuron0x24852e0()*1.73541);
}

double NNfunction_sb_uRsR::synapse0x249c880() {
   return (neuron0x2485620()*-0.0574557);
}

double NNfunction_sb_uRsR::synapse0x249c310() {
   return (neuron0x2485960()*1.01821);
}

double NNfunction_sb_uRsR::synapse0x249c350() {
   return (neuron0x2485ec0()*0.185728);
}

double NNfunction_sb_uRsR::synapse0x249c9d0() {
   return (neuron0x24860e0()*2.69667);
}

double NNfunction_sb_uRsR::synapse0x249ca10() {
   return (neuron0x2486420()*-0.366153);
}

double NNfunction_sb_uRsR::synapse0x249ca50() {
   return (neuron0x2486760()*-0.529637);
}

double NNfunction_sb_uRsR::synapse0x249ca90() {
   return (neuron0x2486aa0()*-0.108267);
}

double NNfunction_sb_uRsR::synapse0x249cad0() {
   return (neuron0x2486de0()*-0.43402);
}

double NNfunction_sb_uRsR::synapse0x249cb10() {
   return (neuron0x2487120()*-0.116822);
}

double NNfunction_sb_uRsR::synapse0x249ce90() {
   return (neuron0x2482560()*0.0288115);
}

double NNfunction_sb_uRsR::synapse0x2491460() {
   return (neuron0x24828a0()*-0.0166227);
}

double NNfunction_sb_uRsR::synapse0x24914a0() {
   return (neuron0x2482be0()*0.0222307);
}

double NNfunction_sb_uRsR::synapse0x24914e0() {
   return (neuron0x2482f20()*-0.0987213);
}

double NNfunction_sb_uRsR::synapse0x2491730() {
   return (neuron0x2483260()*-0.0724676);
}

double NNfunction_sb_uRsR::synapse0x2491770() {
   return (neuron0x24835a0()*-0.00391871);
}

double NNfunction_sb_uRsR::synapse0x24917b0() {
   return (neuron0x24838e0()*-0.00387806);
}

double NNfunction_sb_uRsR::synapse0x2491a00() {
   return (neuron0x2483c20()*-0.0485589);
}

double NNfunction_sb_uRsR::synapse0x2491a40() {
   return (neuron0x2483f60()*0.0394658);
}

double NNfunction_sb_uRsR::synapse0x2491c90() {
   return (neuron0x24842a0()*0.0596403);
}

double NNfunction_sb_uRsR::synapse0x2491cd0() {
   return (neuron0x24845e0()*0.0607415);
}

double NNfunction_sb_uRsR::synapse0x2491d10() {
   return (neuron0x2484920()*0.0102726);
}

double NNfunction_sb_uRsR::synapse0x2491f60() {
   return (neuron0x2484c60()*0.0168132);
}

double NNfunction_sb_uRsR::synapse0x2491fa0() {
   return (neuron0x2484fa0()*0.0120718);
}

double NNfunction_sb_uRsR::synapse0x24921f0() {
   return (neuron0x24852e0()*2.7688);
}

double NNfunction_sb_uRsR::synapse0x2492230() {
   return (neuron0x2485620()*-0.0346422);
}

double NNfunction_sb_uRsR::synapse0x249cce0() {
   return (neuron0x2485960()*0.0445752);
}

double NNfunction_sb_uRsR::synapse0x249cd20() {
   return (neuron0x2485ec0()*0.000722328);
}

double NNfunction_sb_uRsR::synapse0x2492380() {
   return (neuron0x24860e0()*-0.335578);
}

double NNfunction_sb_uRsR::synapse0x2492890() {
   return (neuron0x2486420()*0.0392113);
}

double NNfunction_sb_uRsR::synapse0x24928d0() {
   return (neuron0x2486760()*-0.0397289);
}

double NNfunction_sb_uRsR::synapse0x2492910() {
   return (neuron0x2486aa0()*0.0184938);
}

double NNfunction_sb_uRsR::synapse0x2492b60() {
   return (neuron0x2486de0()*-0.00850371);
}

double NNfunction_sb_uRsR::synapse0x2492ba0() {
   return (neuron0x2487120()*-0.0189039);
}

double NNfunction_sb_uRsR::synapse0x2492450() {
   return (neuron0x2482560()*-0.025286);
}

double NNfunction_sb_uRsR::synapse0x2492490() {
   return (neuron0x24828a0()*0.00236858);
}

double NNfunction_sb_uRsR::synapse0x24924d0() {
   return (neuron0x2482be0()*0.0462294);
}

double NNfunction_sb_uRsR::synapse0x2492510() {
   return (neuron0x2482f20()*-1.001);
}

double NNfunction_sb_uRsR::synapse0x2492e90() {
   return (neuron0x2483260()*-0.0325442);
}

double NNfunction_sb_uRsR::synapse0x249f1e0() {
   return (neuron0x24835a0()*0.0198778);
}

double NNfunction_sb_uRsR::synapse0x249f220() {
   return (neuron0x24838e0()*0.0951804);
}

double NNfunction_sb_uRsR::synapse0x249f260() {
   return (neuron0x2483c20()*0.0305343);
}

double NNfunction_sb_uRsR::synapse0x249f2a0() {
   return (neuron0x2483f60()*0.00445993);
}

double NNfunction_sb_uRsR::synapse0x249f2e0() {
   return (neuron0x24842a0()*0.00545962);
}

double NNfunction_sb_uRsR::synapse0x249f320() {
   return (neuron0x24845e0()*0.000557064);
}

double NNfunction_sb_uRsR::synapse0x249f360() {
   return (neuron0x2484920()*0.0614969);
}

double NNfunction_sb_uRsR::synapse0x249f3a0() {
   return (neuron0x2484c60()*0.0463);
}

double NNfunction_sb_uRsR::synapse0x249f3e0() {
   return (neuron0x2484fa0()*0.00837005);
}

double NNfunction_sb_uRsR::synapse0x249f420() {
   return (neuron0x24852e0()*-0.625352);
}

double NNfunction_sb_uRsR::synapse0x249f460() {
   return (neuron0x2485620()*0.0521791);
}

double NNfunction_sb_uRsR::synapse0x2492d70() {
   return (neuron0x2485960()*0.012986);
}

double NNfunction_sb_uRsR::synapse0x2492db0() {
   return (neuron0x2485ec0()*-0.0110188);
}

double NNfunction_sb_uRsR::synapse0x249f5b0() {
   return (neuron0x24860e0()*-0.62804);
}

double NNfunction_sb_uRsR::synapse0x249f5f0() {
   return (neuron0x2486420()*-0.0290178);
}

double NNfunction_sb_uRsR::synapse0x249f630() {
   return (neuron0x2486760()*0.0153645);
}

double NNfunction_sb_uRsR::synapse0x249f670() {
   return (neuron0x2486aa0()*0.0342452);
}

double NNfunction_sb_uRsR::synapse0x249f6b0() {
   return (neuron0x2486de0()*0.00808948);
}

double NNfunction_sb_uRsR::synapse0x249f6f0() {
   return (neuron0x2487120()*-0.0101652);
}

double NNfunction_sb_uRsR::synapse0x249fa70() {
   return (neuron0x2482560()*-0.0321495);
}

double NNfunction_sb_uRsR::synapse0x249fab0() {
   return (neuron0x24828a0()*0.0305011);
}

double NNfunction_sb_uRsR::synapse0x249faf0() {
   return (neuron0x2482be0()*0.0103046);
}

double NNfunction_sb_uRsR::synapse0x249fb30() {
   return (neuron0x2482f20()*-6.76789);
}

double NNfunction_sb_uRsR::synapse0x249fb70() {
   return (neuron0x2483260()*-0.00582265);
}

double NNfunction_sb_uRsR::synapse0x249fbb0() {
   return (neuron0x24835a0()*-0.0298889);
}

double NNfunction_sb_uRsR::synapse0x249fbf0() {
   return (neuron0x24838e0()*0.00193529);
}

double NNfunction_sb_uRsR::synapse0x249fc30() {
   return (neuron0x2483c20()*-0.0195431);
}

double NNfunction_sb_uRsR::synapse0x249fc70() {
   return (neuron0x2483f60()*0.0196506);
}

double NNfunction_sb_uRsR::synapse0x249fcb0() {
   return (neuron0x24842a0()*0.0094257);
}

double NNfunction_sb_uRsR::synapse0x249fcf0() {
   return (neuron0x24845e0()*-0.0180822);
}

double NNfunction_sb_uRsR::synapse0x249fd30() {
   return (neuron0x2484920()*0.0288338);
}

double NNfunction_sb_uRsR::synapse0x249fd70() {
   return (neuron0x2484c60()*0.0352504);
}

double NNfunction_sb_uRsR::synapse0x249fdb0() {
   return (neuron0x2484fa0()*0.0126645);
}

double NNfunction_sb_uRsR::synapse0x249fdf0() {
   return (neuron0x24852e0()*-0.27694);
}

double NNfunction_sb_uRsR::synapse0x249fe30() {
   return (neuron0x2485620()*-0.0145105);
}

double NNfunction_sb_uRsR::synapse0x249f8c0() {
   return (neuron0x2485960()*0.0549963);
}

double NNfunction_sb_uRsR::synapse0x249f900() {
   return (neuron0x2485ec0()*0.0237667);
}

double NNfunction_sb_uRsR::synapse0x249ff80() {
   return (neuron0x24860e0()*-0.33904);
}

double NNfunction_sb_uRsR::synapse0x249ffc0() {
   return (neuron0x2486420()*-0.0424912);
}

double NNfunction_sb_uRsR::synapse0x24a0000() {
   return (neuron0x2486760()*-0.0130346);
}

double NNfunction_sb_uRsR::synapse0x24a0040() {
   return (neuron0x2486aa0()*-0.0132108);
}

double NNfunction_sb_uRsR::synapse0x24a0080() {
   return (neuron0x2486de0()*0.057099);
}

double NNfunction_sb_uRsR::synapse0x24a00c0() {
   return (neuron0x2487120()*-0.00106208);
}

double NNfunction_sb_uRsR::synapse0x24a0440() {
   return (neuron0x2482560()*0.420616);
}

double NNfunction_sb_uRsR::synapse0x24a0480() {
   return (neuron0x24828a0()*0.00300417);
}

double NNfunction_sb_uRsR::synapse0x24a04c0() {
   return (neuron0x2482be0()*-0.120441);
}

double NNfunction_sb_uRsR::synapse0x24a0500() {
   return (neuron0x2482f20()*-0.371937);
}

double NNfunction_sb_uRsR::synapse0x24a0540() {
   return (neuron0x2483260()*-0.0277384);
}

double NNfunction_sb_uRsR::synapse0x24a0580() {
   return (neuron0x24835a0()*-0.486692);
}

double NNfunction_sb_uRsR::synapse0x24a05c0() {
   return (neuron0x24838e0()*0.245645);
}

double NNfunction_sb_uRsR::synapse0x24a0600() {
   return (neuron0x2483c20()*0.54761);
}

double NNfunction_sb_uRsR::synapse0x24a0640() {
   return (neuron0x2483f60()*-0.248338);
}

double NNfunction_sb_uRsR::synapse0x24a0680() {
   return (neuron0x24842a0()*0.433354);
}

double NNfunction_sb_uRsR::synapse0x24a06c0() {
   return (neuron0x24845e0()*0.165525);
}

double NNfunction_sb_uRsR::synapse0x24a0700() {
   return (neuron0x2484920()*0.38406);
}

double NNfunction_sb_uRsR::synapse0x24a0740() {
   return (neuron0x2484c60()*0.220414);
}

double NNfunction_sb_uRsR::synapse0x24a0780() {
   return (neuron0x2484fa0()*-0.212796);
}

double NNfunction_sb_uRsR::synapse0x24a07c0() {
   return (neuron0x24852e0()*-1.11454);
}

double NNfunction_sb_uRsR::synapse0x24a0800() {
   return (neuron0x2485620()*0.237992);
}

double NNfunction_sb_uRsR::synapse0x24a0290() {
   return (neuron0x2485960()*0.00481838);
}

double NNfunction_sb_uRsR::synapse0x24a02d0() {
   return (neuron0x2485ec0()*-0.286418);
}

double NNfunction_sb_uRsR::synapse0x24a0950() {
   return (neuron0x24860e0()*-1.72272);
}

double NNfunction_sb_uRsR::synapse0x24a0990() {
   return (neuron0x2486420()*0.117946);
}

double NNfunction_sb_uRsR::synapse0x24a09d0() {
   return (neuron0x2486760()*0.169363);
}

double NNfunction_sb_uRsR::synapse0x24a0a10() {
   return (neuron0x2486aa0()*0.277914);
}

double NNfunction_sb_uRsR::synapse0x24a0a50() {
   return (neuron0x2486de0()*0.0583771);
}

double NNfunction_sb_uRsR::synapse0x24a0a90() {
   return (neuron0x2487120()*-0.716431);
}

double NNfunction_sb_uRsR::synapse0x24a0e10() {
   return (neuron0x2482560()*0.0186686);
}

double NNfunction_sb_uRsR::synapse0x24a0e50() {
   return (neuron0x24828a0()*0.243691);
}

double NNfunction_sb_uRsR::synapse0x24a0e90() {
   return (neuron0x2482be0()*-0.0226617);
}

double NNfunction_sb_uRsR::synapse0x24a0ed0() {
   return (neuron0x2482f20()*-2.21546);
}

double NNfunction_sb_uRsR::synapse0x24a0f10() {
   return (neuron0x2483260()*0.0920496);
}

double NNfunction_sb_uRsR::synapse0x24a0f50() {
   return (neuron0x24835a0()*-0.0182328);
}

double NNfunction_sb_uRsR::synapse0x24a0f90() {
   return (neuron0x24838e0()*-0.00750643);
}

double NNfunction_sb_uRsR::synapse0x24a0fd0() {
   return (neuron0x2483c20()*-0.00564978);
}

double NNfunction_sb_uRsR::synapse0x24a1010() {
   return (neuron0x2483f60()*0.0708771);
}

double NNfunction_sb_uRsR::synapse0x24a1050() {
   return (neuron0x24842a0()*0.0192468);
}

double NNfunction_sb_uRsR::synapse0x24a1090() {
   return (neuron0x24845e0()*-0.0602148);
}

double NNfunction_sb_uRsR::synapse0x24a10d0() {
   return (neuron0x2484920()*-0.144609);
}

double NNfunction_sb_uRsR::synapse0x24a1110() {
   return (neuron0x2484c60()*-0.295341);
}

double NNfunction_sb_uRsR::synapse0x24a1150() {
   return (neuron0x2484fa0()*-0.0239282);
}

double NNfunction_sb_uRsR::synapse0x24a1190() {
   return (neuron0x24852e0()*-0.12782);
}

double NNfunction_sb_uRsR::synapse0x24a11d0() {
   return (neuron0x2485620()*-0.0905774);
}

double NNfunction_sb_uRsR::synapse0x24a0c60() {
   return (neuron0x2485960()*-0.0652094);
}

double NNfunction_sb_uRsR::synapse0x24a0ca0() {
   return (neuron0x2485ec0()*-0.136178);
}

double NNfunction_sb_uRsR::synapse0x24a1320() {
   return (neuron0x24860e0()*-0.326811);
}

double NNfunction_sb_uRsR::synapse0x24a1360() {
   return (neuron0x2486420()*-0.0322109);
}

double NNfunction_sb_uRsR::synapse0x24a13a0() {
   return (neuron0x2486760()*-0.0570598);
}

double NNfunction_sb_uRsR::synapse0x24a13e0() {
   return (neuron0x2486aa0()*0.138389);
}

double NNfunction_sb_uRsR::synapse0x24a1420() {
   return (neuron0x2486de0()*-0.0627774);
}

double NNfunction_sb_uRsR::synapse0x24a1460() {
   return (neuron0x2487120()*0.0997896);
}

double NNfunction_sb_uRsR::synapse0x24a17e0() {
   return (neuron0x2482560()*0.00707148);
}

double NNfunction_sb_uRsR::synapse0x24a1820() {
   return (neuron0x24828a0()*-0.0146222);
}

double NNfunction_sb_uRsR::synapse0x24a1860() {
   return (neuron0x2482be0()*-0.0445813);
}

double NNfunction_sb_uRsR::synapse0x24a18a0() {
   return (neuron0x2482f20()*-1.36917);
}

double NNfunction_sb_uRsR::synapse0x24a18e0() {
   return (neuron0x2483260()*0.0346167);
}

double NNfunction_sb_uRsR::synapse0x24a1920() {
   return (neuron0x24835a0()*-0.0362157);
}

double NNfunction_sb_uRsR::synapse0x24a1960() {
   return (neuron0x24838e0()*-0.0695177);
}

double NNfunction_sb_uRsR::synapse0x24a19a0() {
   return (neuron0x2483c20()*-0.0146683);
}

double NNfunction_sb_uRsR::synapse0x24a19e0() {
   return (neuron0x2483f60()*-0.0299921);
}

double NNfunction_sb_uRsR::synapse0x24a1a20() {
   return (neuron0x24842a0()*0.00233395);
}

double NNfunction_sb_uRsR::synapse0x24a1a60() {
   return (neuron0x24845e0()*-0.0151477);
}

double NNfunction_sb_uRsR::synapse0x24a1aa0() {
   return (neuron0x2484920()*0.021551);
}

double NNfunction_sb_uRsR::synapse0x24a1ae0() {
   return (neuron0x2484c60()*0.00205101);
}

double NNfunction_sb_uRsR::synapse0x24a1b20() {
   return (neuron0x2484fa0()*-0.0276363);
}

double NNfunction_sb_uRsR::synapse0x24a1b60() {
   return (neuron0x24852e0()*0.0875209);
}

double NNfunction_sb_uRsR::synapse0x24a1ba0() {
   return (neuron0x2485620()*-0.0107293);
}

double NNfunction_sb_uRsR::synapse0x24a1630() {
   return (neuron0x2485960()*-0.036111);
}

double NNfunction_sb_uRsR::synapse0x24a1670() {
   return (neuron0x2485ec0()*0.0311029);
}

double NNfunction_sb_uRsR::synapse0x24a1cf0() {
   return (neuron0x24860e0()*0.137308);
}

double NNfunction_sb_uRsR::synapse0x24a1d30() {
   return (neuron0x2486420()*0.0371254);
}

double NNfunction_sb_uRsR::synapse0x24a1d70() {
   return (neuron0x2486760()*-0.00874215);
}

double NNfunction_sb_uRsR::synapse0x24a1db0() {
   return (neuron0x2486aa0()*-0.0159703);
}

double NNfunction_sb_uRsR::synapse0x24a1df0() {
   return (neuron0x2486de0()*0.0098168);
}

double NNfunction_sb_uRsR::synapse0x24a1e30() {
   return (neuron0x2487120()*0.0207718);
}

double NNfunction_sb_uRsR::synapse0x24a21b0() {
   return (neuron0x2482560()*0.0989409);
}

double NNfunction_sb_uRsR::synapse0x24a21f0() {
   return (neuron0x24828a0()*-0.00694427);
}

double NNfunction_sb_uRsR::synapse0x24a2230() {
   return (neuron0x2482be0()*-0.127571);
}

double NNfunction_sb_uRsR::synapse0x24a2270() {
   return (neuron0x2482f20()*-1.31215);
}

double NNfunction_sb_uRsR::synapse0x24a22b0() {
   return (neuron0x2483260()*-0.0865112);
}

double NNfunction_sb_uRsR::synapse0x24a22f0() {
   return (neuron0x24835a0()*0.00132139);
}

double NNfunction_sb_uRsR::synapse0x24a2330() {
   return (neuron0x24838e0()*0.127253);
}

double NNfunction_sb_uRsR::synapse0x24a2370() {
   return (neuron0x2483c20()*0.235187);
}

double NNfunction_sb_uRsR::synapse0x24a23b0() {
   return (neuron0x2483f60()*-0.349312);
}

double NNfunction_sb_uRsR::synapse0x24a23f0() {
   return (neuron0x24842a0()*-0.149275);
}

double NNfunction_sb_uRsR::synapse0x24a2430() {
   return (neuron0x24845e0()*0.0531722);
}

double NNfunction_sb_uRsR::synapse0x24a2470() {
   return (neuron0x2484920()*0.551203);
}

double NNfunction_sb_uRsR::synapse0x24a24b0() {
   return (neuron0x2484c60()*0.00689522);
}

double NNfunction_sb_uRsR::synapse0x24a24f0() {
   return (neuron0x2484fa0()*0.0949632);
}

double NNfunction_sb_uRsR::synapse0x24a2530() {
   return (neuron0x24852e0()*-0.905312);
}

double NNfunction_sb_uRsR::synapse0x24a2570() {
   return (neuron0x2485620()*-0.0281728);
}

double NNfunction_sb_uRsR::synapse0x24a2000() {
   return (neuron0x2485960()*0.13841);
}

double NNfunction_sb_uRsR::synapse0x24a2040() {
   return (neuron0x2485ec0()*0.0777634);
}

double NNfunction_sb_uRsR::synapse0x24a26c0() {
   return (neuron0x24860e0()*-0.240281);
}

double NNfunction_sb_uRsR::synapse0x24a2700() {
   return (neuron0x2486420()*-0.193921);
}

double NNfunction_sb_uRsR::synapse0x24a2740() {
   return (neuron0x2486760()*0.142403);
}

double NNfunction_sb_uRsR::synapse0x24a2780() {
   return (neuron0x2486aa0()*-0.00274771);
}

double NNfunction_sb_uRsR::synapse0x24a27c0() {
   return (neuron0x2486de0()*0.330789);
}

double NNfunction_sb_uRsR::synapse0x24a2800() {
   return (neuron0x2487120()*-0.489372);
}

double NNfunction_sb_uRsR::synapse0x24a2b80() {
   return (neuron0x2482560()*0.356226);
}

double NNfunction_sb_uRsR::synapse0x24a2bc0() {
   return (neuron0x24828a0()*-0.504912);
}

double NNfunction_sb_uRsR::synapse0x24a2c00() {
   return (neuron0x2482be0()*-0.151301);
}

double NNfunction_sb_uRsR::synapse0x24a2c40() {
   return (neuron0x2482f20()*0.254893);
}

double NNfunction_sb_uRsR::synapse0x24a2c80() {
   return (neuron0x2483260()*0.122601);
}

double NNfunction_sb_uRsR::synapse0x24a2cc0() {
   return (neuron0x24835a0()*-0.00492212);
}

double NNfunction_sb_uRsR::synapse0x24a2d00() {
   return (neuron0x24838e0()*0.825665);
}

double NNfunction_sb_uRsR::synapse0x24a2d40() {
   return (neuron0x2483c20()*0.440201);
}

double NNfunction_sb_uRsR::synapse0x24a2d80() {
   return (neuron0x2483f60()*-0.628332);
}

double NNfunction_sb_uRsR::synapse0x24a2dc0() {
   return (neuron0x24842a0()*-1.5911);
}

double NNfunction_sb_uRsR::synapse0x24a2e00() {
   return (neuron0x24845e0()*0.492756);
}

double NNfunction_sb_uRsR::synapse0x24a2e40() {
   return (neuron0x2484920()*0.171553);
}

double NNfunction_sb_uRsR::synapse0x24a2e80() {
   return (neuron0x2484c60()*0.498276);
}

double NNfunction_sb_uRsR::synapse0x24a2ec0() {
   return (neuron0x2484fa0()*0.691525);
}

double NNfunction_sb_uRsR::synapse0x24a2f00() {
   return (neuron0x24852e0()*1.87398);
}

double NNfunction_sb_uRsR::synapse0x24a2f40() {
   return (neuron0x2485620()*0.156982);
}

double NNfunction_sb_uRsR::synapse0x24a29d0() {
   return (neuron0x2485960()*0.0747625);
}

double NNfunction_sb_uRsR::synapse0x24a2a10() {
   return (neuron0x2485ec0()*0.082702);
}

double NNfunction_sb_uRsR::synapse0x24a3090() {
   return (neuron0x24860e0()*-0.106516);
}

double NNfunction_sb_uRsR::synapse0x24a30d0() {
   return (neuron0x2486420()*-0.412126);
}

double NNfunction_sb_uRsR::synapse0x24a3110() {
   return (neuron0x2486760()*-0.0891872);
}

double NNfunction_sb_uRsR::synapse0x24a3150() {
   return (neuron0x2486aa0()*0.261733);
}

double NNfunction_sb_uRsR::synapse0x24a3190() {
   return (neuron0x2486de0()*-0.504976);
}

double NNfunction_sb_uRsR::synapse0x24a31d0() {
   return (neuron0x2487120()*0.501633);
}

double NNfunction_sb_uRsR::synapse0x24a3550() {
   return (neuron0x2482560()*0.458761);
}

double NNfunction_sb_uRsR::synapse0x24a3590() {
   return (neuron0x24828a0()*-0.126467);
}

double NNfunction_sb_uRsR::synapse0x24a35d0() {
   return (neuron0x2482be0()*-0.356306);
}

double NNfunction_sb_uRsR::synapse0x24a3610() {
   return (neuron0x2482f20()*1.21798);
}

double NNfunction_sb_uRsR::synapse0x24a3650() {
   return (neuron0x2483260()*0.0858329);
}

double NNfunction_sb_uRsR::synapse0x24a3690() {
   return (neuron0x24835a0()*-0.710869);
}

double NNfunction_sb_uRsR::synapse0x24a36d0() {
   return (neuron0x24838e0()*0.753181);
}

double NNfunction_sb_uRsR::synapse0x24a3710() {
   return (neuron0x2483c20()*-0.240292);
}

double NNfunction_sb_uRsR::synapse0x24a3750() {
   return (neuron0x2483f60()*-0.0574305);
}

double NNfunction_sb_uRsR::synapse0x24a3790() {
   return (neuron0x24842a0()*0.00330226);
}

double NNfunction_sb_uRsR::synapse0x24a37d0() {
   return (neuron0x24845e0()*0.383108);
}

double NNfunction_sb_uRsR::synapse0x24a3810() {
   return (neuron0x2484920()*0.0506177);
}

double NNfunction_sb_uRsR::synapse0x24a3850() {
   return (neuron0x2484c60()*-0.615454);
}

double NNfunction_sb_uRsR::synapse0x24a3890() {
   return (neuron0x2484fa0()*-0.320715);
}

double NNfunction_sb_uRsR::synapse0x24a38d0() {
   return (neuron0x24852e0()*0.64521);
}

double NNfunction_sb_uRsR::synapse0x24a3910() {
   return (neuron0x2485620()*0.270087);
}

double NNfunction_sb_uRsR::synapse0x24a33a0() {
   return (neuron0x2485960()*-0.557535);
}

double NNfunction_sb_uRsR::synapse0x24a33e0() {
   return (neuron0x2485ec0()*-1.17728);
}

double NNfunction_sb_uRsR::synapse0x24a3a60() {
   return (neuron0x24860e0()*0.00366011);
}

double NNfunction_sb_uRsR::synapse0x24a3aa0() {
   return (neuron0x2486420()*-0.34129);
}

double NNfunction_sb_uRsR::synapse0x24a3ae0() {
   return (neuron0x2486760()*-0.388123);
}

double NNfunction_sb_uRsR::synapse0x24a3b20() {
   return (neuron0x2486aa0()*1.11195);
}

double NNfunction_sb_uRsR::synapse0x24a3b60() {
   return (neuron0x2486de0()*0.318992);
}

double NNfunction_sb_uRsR::synapse0x24a3ba0() {
   return (neuron0x2487120()*0.503189);
}

double NNfunction_sb_uRsR::synapse0x248c650() {
   return (neuron0x2482560()*-0.0156623);
}

double NNfunction_sb_uRsR::synapse0x248c690() {
   return (neuron0x24828a0()*-0.413134);
}

double NNfunction_sb_uRsR::synapse0x248c6d0() {
   return (neuron0x2482be0()*0.623763);
}

double NNfunction_sb_uRsR::synapse0x248c710() {
   return (neuron0x2482f20()*-0.0266448);
}

double NNfunction_sb_uRsR::synapse0x248c750() {
   return (neuron0x2483260()*-0.604892);
}

double NNfunction_sb_uRsR::synapse0x248c790() {
   return (neuron0x24835a0()*0.166505);
}

double NNfunction_sb_uRsR::synapse0x248c7d0() {
   return (neuron0x24838e0()*-0.142555);
}

double NNfunction_sb_uRsR::synapse0x248c810() {
   return (neuron0x2483c20()*-0.292707);
}

double NNfunction_sb_uRsR::synapse0x24a4330() {
   return (neuron0x2483f60()*-0.0478985);
}

double NNfunction_sb_uRsR::synapse0x24a4370() {
   return (neuron0x24842a0()*-0.623604);
}

double NNfunction_sb_uRsR::synapse0x24a43b0() {
   return (neuron0x24845e0()*0.415141);
}

double NNfunction_sb_uRsR::synapse0x24a43f0() {
   return (neuron0x2484920()*0.726139);
}

double NNfunction_sb_uRsR::synapse0x24a4430() {
   return (neuron0x2484c60()*-0.890867);
}

double NNfunction_sb_uRsR::synapse0x24a4470() {
   return (neuron0x2484fa0()*-0.540618);
}

double NNfunction_sb_uRsR::synapse0x24a44b0() {
   return (neuron0x24852e0()*1.23638);
}

double NNfunction_sb_uRsR::synapse0x24a44f0() {
   return (neuron0x2485620()*1.27783);
}

double NNfunction_sb_uRsR::synapse0x24a3d70() {
   return (neuron0x2485960()*-0.136556);
}

double NNfunction_sb_uRsR::synapse0x24a3db0() {
   return (neuron0x2485ec0()*0.270342);
}

double NNfunction_sb_uRsR::synapse0x24a4640() {
   return (neuron0x24860e0()*0.315345);
}

double NNfunction_sb_uRsR::synapse0x24a4680() {
   return (neuron0x2486420()*-0.326865);
}

double NNfunction_sb_uRsR::synapse0x24a46c0() {
   return (neuron0x2486760()*-0.344763);
}

double NNfunction_sb_uRsR::synapse0x24a4700() {
   return (neuron0x2486aa0()*-0.164476);
}

double NNfunction_sb_uRsR::synapse0x24a4740() {
   return (neuron0x2486de0()*-0.423161);
}

double NNfunction_sb_uRsR::synapse0x24a4780() {
   return (neuron0x2487120()*-0.721549);
}

double NNfunction_sb_uRsR::synapse0x24a4b00() {
   return (neuron0x2482560()*0.0993626);
}

double NNfunction_sb_uRsR::synapse0x24a4b40() {
   return (neuron0x24828a0()*0.77871);
}

double NNfunction_sb_uRsR::synapse0x24a4b80() {
   return (neuron0x2482be0()*-0.913247);
}

double NNfunction_sb_uRsR::synapse0x24a4bc0() {
   return (neuron0x2482f20()*1.37613);
}

double NNfunction_sb_uRsR::synapse0x24a4c00() {
   return (neuron0x2483260()*-0.548232);
}

double NNfunction_sb_uRsR::synapse0x24a4c40() {
   return (neuron0x24835a0()*0.216587);
}

double NNfunction_sb_uRsR::synapse0x24a4c80() {
   return (neuron0x24838e0()*-0.762787);
}

double NNfunction_sb_uRsR::synapse0x24a4cc0() {
   return (neuron0x2483c20()*-0.432835);
}

double NNfunction_sb_uRsR::synapse0x24a4d00() {
   return (neuron0x2483f60()*-0.417441);
}

double NNfunction_sb_uRsR::synapse0x24a4d40() {
   return (neuron0x24842a0()*0.43327);
}

double NNfunction_sb_uRsR::synapse0x24a4d80() {
   return (neuron0x24845e0()*0.330625);
}

double NNfunction_sb_uRsR::synapse0x24a4dc0() {
   return (neuron0x2484920()*-0.838113);
}

double NNfunction_sb_uRsR::synapse0x24a4e00() {
   return (neuron0x2484c60()*-0.871807);
}

double NNfunction_sb_uRsR::synapse0x24a4e40() {
   return (neuron0x2484fa0()*-0.914459);
}

double NNfunction_sb_uRsR::synapse0x24a4e80() {
   return (neuron0x24852e0()*-0.78663);
}

double NNfunction_sb_uRsR::synapse0x24a4ec0() {
   return (neuron0x2485620()*-0.598131);
}

double NNfunction_sb_uRsR::synapse0x24a4950() {
   return (neuron0x2485960()*0.0401284);
}

double NNfunction_sb_uRsR::synapse0x24a4990() {
   return (neuron0x2485ec0()*0.197398);
}

double NNfunction_sb_uRsR::synapse0x24a5010() {
   return (neuron0x24860e0()*-1.79819);
}

double NNfunction_sb_uRsR::synapse0x24a5050() {
   return (neuron0x2486420()*-0.606038);
}

double NNfunction_sb_uRsR::synapse0x24a5090() {
   return (neuron0x2486760()*-0.697143);
}

double NNfunction_sb_uRsR::synapse0x24a50d0() {
   return (neuron0x2486aa0()*0.0720946);
}

double NNfunction_sb_uRsR::synapse0x24a5110() {
   return (neuron0x2486de0()*-0.208112);
}

double NNfunction_sb_uRsR::synapse0x24a5150() {
   return (neuron0x2487120()*-0.10257);
}

double NNfunction_sb_uRsR::synapse0x24a54d0() {
   return (neuron0x2482560()*-0.651187);
}

double NNfunction_sb_uRsR::synapse0x24a5510() {
   return (neuron0x24828a0()*-0.34503);
}

double NNfunction_sb_uRsR::synapse0x24a5550() {
   return (neuron0x2482be0()*0.211352);
}

double NNfunction_sb_uRsR::synapse0x24a5590() {
   return (neuron0x2482f20()*1.08119);
}

double NNfunction_sb_uRsR::synapse0x24a55d0() {
   return (neuron0x2483260()*1.4058);
}

double NNfunction_sb_uRsR::synapse0x24a5610() {
   return (neuron0x24835a0()*0.522236);
}

double NNfunction_sb_uRsR::synapse0x24a5650() {
   return (neuron0x24838e0()*0.196631);
}

double NNfunction_sb_uRsR::synapse0x24a5690() {
   return (neuron0x2483c20()*-0.221304);
}

double NNfunction_sb_uRsR::synapse0x24a56d0() {
   return (neuron0x2483f60()*-0.57039);
}

double NNfunction_sb_uRsR::synapse0x24a5710() {
   return (neuron0x24842a0()*0.289747);
}

double NNfunction_sb_uRsR::synapse0x24a5750() {
   return (neuron0x24845e0()*-0.350089);
}

double NNfunction_sb_uRsR::synapse0x24a5790() {
   return (neuron0x2484920()*-0.139297);
}

double NNfunction_sb_uRsR::synapse0x24a57d0() {
   return (neuron0x2484c60()*-0.294962);
}

double NNfunction_sb_uRsR::synapse0x24a5810() {
   return (neuron0x2484fa0()*0.827823);
}

double NNfunction_sb_uRsR::synapse0x24a5850() {
   return (neuron0x24852e0()*-0.718846);
}

double NNfunction_sb_uRsR::synapse0x24a5890() {
   return (neuron0x2485620()*0.653824);
}

double NNfunction_sb_uRsR::synapse0x24a5320() {
   return (neuron0x2485960()*0.352105);
}

double NNfunction_sb_uRsR::synapse0x24a5360() {
   return (neuron0x2485ec0()*0.289432);
}

double NNfunction_sb_uRsR::synapse0x2495e90() {
   return (neuron0x24860e0()*0.209279);
}

double NNfunction_sb_uRsR::synapse0x2495ed0() {
   return (neuron0x2486420()*-0.330245);
}

double NNfunction_sb_uRsR::synapse0x2495f10() {
   return (neuron0x2486760()*0.44468);
}

double NNfunction_sb_uRsR::synapse0x2495f50() {
   return (neuron0x2486aa0()*0.249296);
}

double NNfunction_sb_uRsR::synapse0x2495f90() {
   return (neuron0x2486de0()*0.161959);
}

double NNfunction_sb_uRsR::synapse0x2495fd0() {
   return (neuron0x2487120()*0.379577);
}

double NNfunction_sb_uRsR::synapse0x2496350() {
   return (neuron0x2482560()*0.851435);
}

double NNfunction_sb_uRsR::synapse0x2496390() {
   return (neuron0x24828a0()*0.340347);
}

double NNfunction_sb_uRsR::synapse0x24963d0() {
   return (neuron0x2482be0()*-0.500971);
}

double NNfunction_sb_uRsR::synapse0x2496410() {
   return (neuron0x2482f20()*-0.68024);
}

double NNfunction_sb_uRsR::synapse0x2496450() {
   return (neuron0x2483260()*0.318088);
}

double NNfunction_sb_uRsR::synapse0x2496490() {
   return (neuron0x24835a0()*-0.411913);
}

double NNfunction_sb_uRsR::synapse0x24964d0() {
   return (neuron0x24838e0()*-0.12585);
}

double NNfunction_sb_uRsR::synapse0x2496510() {
   return (neuron0x2483c20()*-0.916306);
}

double NNfunction_sb_uRsR::synapse0x2496550() {
   return (neuron0x2483f60()*0.449253);
}

double NNfunction_sb_uRsR::synapse0x2496590() {
   return (neuron0x24842a0()*-0.377369);
}

double NNfunction_sb_uRsR::synapse0x24965d0() {
   return (neuron0x24845e0()*0.64536);
}

double NNfunction_sb_uRsR::synapse0x2496610() {
   return (neuron0x2484920()*0.0712043);
}

double NNfunction_sb_uRsR::synapse0x2496650() {
   return (neuron0x2484c60()*0.25555);
}

double NNfunction_sb_uRsR::synapse0x2496690() {
   return (neuron0x2484fa0()*-0.695272);
}

double NNfunction_sb_uRsR::synapse0x24966d0() {
   return (neuron0x24852e0()*0.381235);
}

double NNfunction_sb_uRsR::synapse0x2496710() {
   return (neuron0x2485620()*1.07367);
}

double NNfunction_sb_uRsR::synapse0x24961a0() {
   return (neuron0x2485960()*-0.22877);
}

double NNfunction_sb_uRsR::synapse0x24961e0() {
   return (neuron0x2485ec0()*0.0562907);
}

double NNfunction_sb_uRsR::synapse0x2496860() {
   return (neuron0x24860e0()*0.18603);
}

double NNfunction_sb_uRsR::synapse0x24968a0() {
   return (neuron0x2486420()*0.662962);
}

double NNfunction_sb_uRsR::synapse0x24968e0() {
   return (neuron0x2486760()*0.277537);
}

double NNfunction_sb_uRsR::synapse0x2496920() {
   return (neuron0x2486aa0()*0.224513);
}

double NNfunction_sb_uRsR::synapse0x2496960() {
   return (neuron0x2486de0()*-0.013836);
}

double NNfunction_sb_uRsR::synapse0x24969a0() {
   return (neuron0x2487120()*0.555679);
}

double NNfunction_sb_uRsR::synapse0x2496d20() {
   return (neuron0x2482560()*0.655356);
}

double NNfunction_sb_uRsR::synapse0x2496d60() {
   return (neuron0x24828a0()*0.192698);
}

double NNfunction_sb_uRsR::synapse0x2496da0() {
   return (neuron0x2482be0()*-0.172362);
}

double NNfunction_sb_uRsR::synapse0x2496de0() {
   return (neuron0x2482f20()*-0.104668);
}

double NNfunction_sb_uRsR::synapse0x2496e20() {
   return (neuron0x2483260()*-0.398477);
}

double NNfunction_sb_uRsR::synapse0x2496e60() {
   return (neuron0x24835a0()*0.481298);
}

double NNfunction_sb_uRsR::synapse0x2496ea0() {
   return (neuron0x24838e0()*-1.23589);
}

double NNfunction_sb_uRsR::synapse0x2496ee0() {
   return (neuron0x2483c20()*0.625896);
}

double NNfunction_sb_uRsR::synapse0x2496f20() {
   return (neuron0x2483f60()*0.616929);
}

double NNfunction_sb_uRsR::synapse0x2496f60() {
   return (neuron0x24842a0()*-0.171998);
}

double NNfunction_sb_uRsR::synapse0x2496fa0() {
   return (neuron0x24845e0()*1.28911);
}

double NNfunction_sb_uRsR::synapse0x2496fe0() {
   return (neuron0x2484920()*1.36684);
}

double NNfunction_sb_uRsR::synapse0x2497020() {
   return (neuron0x2484c60()*0.968865);
}

double NNfunction_sb_uRsR::synapse0x2497060() {
   return (neuron0x2484fa0()*-0.672593);
}

double NNfunction_sb_uRsR::synapse0x24970a0() {
   return (neuron0x24852e0()*0.539032);
}

double NNfunction_sb_uRsR::synapse0x24970e0() {
   return (neuron0x2485620()*-0.198766);
}

double NNfunction_sb_uRsR::synapse0x2496b70() {
   return (neuron0x2485960()*0.50868);
}

double NNfunction_sb_uRsR::synapse0x2496bb0() {
   return (neuron0x2485ec0()*0.42449);
}

double NNfunction_sb_uRsR::synapse0x2497230() {
   return (neuron0x24860e0()*-0.441108);
}

double NNfunction_sb_uRsR::synapse0x2497270() {
   return (neuron0x2486420()*-0.154385);
}

double NNfunction_sb_uRsR::synapse0x24972b0() {
   return (neuron0x2486760()*0.244977);
}

double NNfunction_sb_uRsR::synapse0x24972f0() {
   return (neuron0x2486aa0()*-0.175951);
}

double NNfunction_sb_uRsR::synapse0x2497330() {
   return (neuron0x2486de0()*0.033042);
}

double NNfunction_sb_uRsR::synapse0x2497370() {
   return (neuron0x2487120()*-0.726249);
}

double NNfunction_sb_uRsR::synapse0x24976f0() {
   return (neuron0x2482560()*0.585227);
}

double NNfunction_sb_uRsR::synapse0x2497730() {
   return (neuron0x24828a0()*-0.470981);
}

double NNfunction_sb_uRsR::synapse0x2497770() {
   return (neuron0x2482be0()*-0.0561446);
}

double NNfunction_sb_uRsR::synapse0x24977b0() {
   return (neuron0x2482f20()*1.37793);
}

double NNfunction_sb_uRsR::synapse0x24977f0() {
   return (neuron0x2483260()*0.265547);
}

double NNfunction_sb_uRsR::synapse0x2497830() {
   return (neuron0x24835a0()*0.0680455);
}

double NNfunction_sb_uRsR::synapse0x2497870() {
   return (neuron0x24838e0()*0.254439);
}

double NNfunction_sb_uRsR::synapse0x24978b0() {
   return (neuron0x2483c20()*-0.629819);
}

double NNfunction_sb_uRsR::synapse0x24978f0() {
   return (neuron0x2483f60()*-0.832962);
}

double NNfunction_sb_uRsR::synapse0x2497930() {
   return (neuron0x24842a0()*0.0165373);
}

double NNfunction_sb_uRsR::synapse0x2497970() {
   return (neuron0x24845e0()*-0.0674503);
}

double NNfunction_sb_uRsR::synapse0x24979b0() {
   return (neuron0x2484920()*-0.0147495);
}

double NNfunction_sb_uRsR::synapse0x24979f0() {
   return (neuron0x2484c60()*0.789536);
}

double NNfunction_sb_uRsR::synapse0x2497a30() {
   return (neuron0x2484fa0()*0.266921);
}

double NNfunction_sb_uRsR::synapse0x2497a70() {
   return (neuron0x24852e0()*0.278825);
}

double NNfunction_sb_uRsR::synapse0x2497ab0() {
   return (neuron0x2485620()*0.224656);
}

double NNfunction_sb_uRsR::synapse0x2497540() {
   return (neuron0x2485960()*0.616631);
}

double NNfunction_sb_uRsR::synapse0x2497580() {
   return (neuron0x2485ec0()*0.260451);
}

double NNfunction_sb_uRsR::synapse0x2497c00() {
   return (neuron0x24860e0()*0.239249);
}

double NNfunction_sb_uRsR::synapse0x2497c40() {
   return (neuron0x2486420()*0.358761);
}

double NNfunction_sb_uRsR::synapse0x2497c80() {
   return (neuron0x2486760()*0.110249);
}

double NNfunction_sb_uRsR::synapse0x2497cc0() {
   return (neuron0x2486aa0()*-0.346032);
}

double NNfunction_sb_uRsR::synapse0x2497d00() {
   return (neuron0x2486de0()*0.427806);
}

double NNfunction_sb_uRsR::synapse0x2497d40() {
   return (neuron0x2487120()*0.0198336);
}

double NNfunction_sb_uRsR::synapse0x24a9c10() {
   return (neuron0x2482560()*0.00132679);
}

double NNfunction_sb_uRsR::synapse0x24a9c50() {
   return (neuron0x24828a0()*0.00709668);
}

double NNfunction_sb_uRsR::synapse0x24a9c90() {
   return (neuron0x2482be0()*-0.0110113);
}

double NNfunction_sb_uRsR::synapse0x24a9cd0() {
   return (neuron0x2482f20()*2.00874);
}

double NNfunction_sb_uRsR::synapse0x24a9d10() {
   return (neuron0x2483260()*0.00415703);
}

double NNfunction_sb_uRsR::synapse0x24a9d50() {
   return (neuron0x24835a0()*-0.00246753);
}

double NNfunction_sb_uRsR::synapse0x24a9d90() {
   return (neuron0x24838e0()*-0.00780282);
}

double NNfunction_sb_uRsR::synapse0x24a9dd0() {
   return (neuron0x2483c20()*0.0106138);
}

double NNfunction_sb_uRsR::synapse0x24a9e10() {
   return (neuron0x2483f60()*0.000223156);
}

double NNfunction_sb_uRsR::synapse0x24a9e50() {
   return (neuron0x24842a0()*-0.00348396);
}

double NNfunction_sb_uRsR::synapse0x24a9e90() {
   return (neuron0x24845e0()*-0.00544025);
}

double NNfunction_sb_uRsR::synapse0x24a9ed0() {
   return (neuron0x2484920()*0.00366571);
}

double NNfunction_sb_uRsR::synapse0x24a9f10() {
   return (neuron0x2484c60()*-0.00103452);
}

double NNfunction_sb_uRsR::synapse0x24a9f50() {
   return (neuron0x2484fa0()*-0.0133727);
}

double NNfunction_sb_uRsR::synapse0x24a9f90() {
   return (neuron0x24852e0()*0.171302);
}

double NNfunction_sb_uRsR::synapse0x24a9fd0() {
   return (neuron0x2485620()*-0.0144683);
}

double NNfunction_sb_uRsR::synapse0x2497d80() {
   return (neuron0x2485960()*-0.0177603);
}

double NNfunction_sb_uRsR::synapse0x2497dc0() {
   return (neuron0x2485ec0()*-0.0016121);
}

double NNfunction_sb_uRsR::synapse0x24aa120() {
   return (neuron0x24860e0()*0.170248);
}

double NNfunction_sb_uRsR::synapse0x24aa160() {
   return (neuron0x2486420()*0.0148528);
}

double NNfunction_sb_uRsR::synapse0x24aa1a0() {
   return (neuron0x2486760()*-0.00806198);
}

double NNfunction_sb_uRsR::synapse0x24aa1e0() {
   return (neuron0x2486aa0()*-0.00176328);
}

double NNfunction_sb_uRsR::synapse0x24aa220() {
   return (neuron0x2486de0()*-0.000530702);
}

double NNfunction_sb_uRsR::synapse0x24aa260() {
   return (neuron0x2487120()*-0.00848575);
}

double NNfunction_sb_uRsR::synapse0x24aa5e0() {
   return (neuron0x2482560()*0.026757);
}

double NNfunction_sb_uRsR::synapse0x24aa620() {
   return (neuron0x24828a0()*-0.00523785);
}

double NNfunction_sb_uRsR::synapse0x24aa660() {
   return (neuron0x2482be0()*0.0518744);
}

double NNfunction_sb_uRsR::synapse0x24aa6a0() {
   return (neuron0x2482f20()*0.315086);
}

double NNfunction_sb_uRsR::synapse0x24aa6e0() {
   return (neuron0x2483260()*-0.0504329);
}

double NNfunction_sb_uRsR::synapse0x24aa720() {
   return (neuron0x24835a0()*-0.00738946);
}

double NNfunction_sb_uRsR::synapse0x24aa760() {
   return (neuron0x24838e0()*0.0100589);
}

double NNfunction_sb_uRsR::synapse0x24aa7a0() {
   return (neuron0x2483c20()*0.0104799);
}

double NNfunction_sb_uRsR::synapse0x24aa7e0() {
   return (neuron0x2483f60()*-0.0267153);
}

double NNfunction_sb_uRsR::synapse0x24aa820() {
   return (neuron0x24842a0()*0.000488367);
}

double NNfunction_sb_uRsR::synapse0x24aa860() {
   return (neuron0x24845e0()*0.0202261);
}

double NNfunction_sb_uRsR::synapse0x24aa8a0() {
   return (neuron0x2484920()*0.0527404);
}

double NNfunction_sb_uRsR::synapse0x24aa8e0() {
   return (neuron0x2484c60()*0.0428224);
}

double NNfunction_sb_uRsR::synapse0x24aa920() {
   return (neuron0x2484fa0()*0.00328025);
}

double NNfunction_sb_uRsR::synapse0x24aa960() {
   return (neuron0x24852e0()*-0.491908);
}

double NNfunction_sb_uRsR::synapse0x24aa9a0() {
   return (neuron0x2485620()*0.0034794);
}

double NNfunction_sb_uRsR::synapse0x24aa430() {
   return (neuron0x2485960()*0.00700239);
}

double NNfunction_sb_uRsR::synapse0x24aa470() {
   return (neuron0x2485ec0()*0.0199428);
}

double NNfunction_sb_uRsR::synapse0x24aaaf0() {
   return (neuron0x24860e0()*3.61245);
}

double NNfunction_sb_uRsR::synapse0x24aab30() {
   return (neuron0x2486420()*0.00763828);
}

double NNfunction_sb_uRsR::synapse0x24aab70() {
   return (neuron0x2486760()*0.0157426);
}

double NNfunction_sb_uRsR::synapse0x24aabb0() {
   return (neuron0x2486aa0()*-0.00338771);
}

double NNfunction_sb_uRsR::synapse0x24aabf0() {
   return (neuron0x2486de0()*-0.0201502);
}

double NNfunction_sb_uRsR::synapse0x24aac30() {
   return (neuron0x2487120()*-0.00697982);
}

double NNfunction_sb_uRsR::synapse0x24aafb0() {
   return (neuron0x2482560()*0.195097);
}

double NNfunction_sb_uRsR::synapse0x24aaff0() {
   return (neuron0x24828a0()*-0.0240891);
}

double NNfunction_sb_uRsR::synapse0x24ab030() {
   return (neuron0x2482be0()*0.439128);
}

double NNfunction_sb_uRsR::synapse0x24ab070() {
   return (neuron0x2482f20()*0.435794);
}

double NNfunction_sb_uRsR::synapse0x24ab0b0() {
   return (neuron0x2483260()*0.965272);
}

double NNfunction_sb_uRsR::synapse0x24ab0f0() {
   return (neuron0x24835a0()*-0.469629);
}

double NNfunction_sb_uRsR::synapse0x24ab130() {
   return (neuron0x24838e0()*-0.465933);
}

double NNfunction_sb_uRsR::synapse0x24ab170() {
   return (neuron0x2483c20()*-0.337805);
}

double NNfunction_sb_uRsR::synapse0x24ab1b0() {
   return (neuron0x2483f60()*0.259964);
}

double NNfunction_sb_uRsR::synapse0x24ab1f0() {
   return (neuron0x24842a0()*0.222696);
}

double NNfunction_sb_uRsR::synapse0x24ab230() {
   return (neuron0x24845e0()*0.352393);
}

double NNfunction_sb_uRsR::synapse0x24ab270() {
   return (neuron0x2484920()*0.251204);
}

double NNfunction_sb_uRsR::synapse0x24ab2b0() {
   return (neuron0x2484c60()*0.148505);
}

double NNfunction_sb_uRsR::synapse0x24ab2f0() {
   return (neuron0x2484fa0()*0.392949);
}

double NNfunction_sb_uRsR::synapse0x24ab330() {
   return (neuron0x24852e0()*-0.475788);
}

double NNfunction_sb_uRsR::synapse0x24ab370() {
   return (neuron0x2485620()*0.172422);
}

double NNfunction_sb_uRsR::synapse0x24aae00() {
   return (neuron0x2485960()*0.0161654);
}

double NNfunction_sb_uRsR::synapse0x24aae40() {
   return (neuron0x2485ec0()*-0.24653);
}

double NNfunction_sb_uRsR::synapse0x24ab4c0() {
   return (neuron0x24860e0()*-0.166703);
}

double NNfunction_sb_uRsR::synapse0x24ab500() {
   return (neuron0x2486420()*-1.0298);
}

double NNfunction_sb_uRsR::synapse0x24ab540() {
   return (neuron0x2486760()*0.168757);
}

double NNfunction_sb_uRsR::synapse0x24ab580() {
   return (neuron0x2486aa0()*0.32489);
}

double NNfunction_sb_uRsR::synapse0x24ab5c0() {
   return (neuron0x2486de0()*0.00987071);
}

double NNfunction_sb_uRsR::synapse0x24ab600() {
   return (neuron0x2487120()*-0.216125);
}

double NNfunction_sb_uRsR::synapse0x24ab980() {
   return (neuron0x2482560()*0.147742);
}

double NNfunction_sb_uRsR::synapse0x24ab9c0() {
   return (neuron0x24828a0()*-0.384634);
}

double NNfunction_sb_uRsR::synapse0x24aba00() {
   return (neuron0x2482be0()*0.256987);
}

double NNfunction_sb_uRsR::synapse0x24aba40() {
   return (neuron0x2482f20()*-1.11531);
}

double NNfunction_sb_uRsR::synapse0x24aba80() {
   return (neuron0x2483260()*-0.644312);
}

double NNfunction_sb_uRsR::synapse0x24abac0() {
   return (neuron0x24835a0()*0.585147);
}

double NNfunction_sb_uRsR::synapse0x24abb00() {
   return (neuron0x24838e0()*-0.0441058);
}

double NNfunction_sb_uRsR::synapse0x24abb40() {
   return (neuron0x2483c20()*0.646944);
}

double NNfunction_sb_uRsR::synapse0x24abb80() {
   return (neuron0x2483f60()*1.10893);
}

double NNfunction_sb_uRsR::synapse0x24abbc0() {
   return (neuron0x24842a0()*0.468421);
}

double NNfunction_sb_uRsR::synapse0x24abc00() {
   return (neuron0x24845e0()*0.118123);
}

double NNfunction_sb_uRsR::synapse0x24abc40() {
   return (neuron0x2484920()*0.243678);
}

double NNfunction_sb_uRsR::synapse0x24abc80() {
   return (neuron0x2484c60()*-0.689306);
}

double NNfunction_sb_uRsR::synapse0x24abcc0() {
   return (neuron0x2484fa0()*1.17482);
}

double NNfunction_sb_uRsR::synapse0x24abd00() {
   return (neuron0x24852e0()*-0.0292318);
}

double NNfunction_sb_uRsR::synapse0x24abd40() {
   return (neuron0x2485620()*-0.0862572);
}

double NNfunction_sb_uRsR::synapse0x24ab7d0() {
   return (neuron0x2485960()*-0.498546);
}

double NNfunction_sb_uRsR::synapse0x24ab810() {
   return (neuron0x2485ec0()*0.802307);
}

double NNfunction_sb_uRsR::synapse0x24abe90() {
   return (neuron0x24860e0()*0.0184193);
}

double NNfunction_sb_uRsR::synapse0x24abed0() {
   return (neuron0x2486420()*-0.568536);
}

double NNfunction_sb_uRsR::synapse0x24abf10() {
   return (neuron0x2486760()*0.234902);
}

double NNfunction_sb_uRsR::synapse0x24abf50() {
   return (neuron0x2486aa0()*-0.288205);
}

double NNfunction_sb_uRsR::synapse0x24abf90() {
   return (neuron0x2486de0()*-0.0323256);
}

double NNfunction_sb_uRsR::synapse0x24abfd0() {
   return (neuron0x2487120()*0.492329);
}

double NNfunction_sb_uRsR::synapse0x2488570() {
   return (neuron0x24875c0()*-0.2584);
}

double NNfunction_sb_uRsR::synapse0x24885b0() {
   return (neuron0x2487ed0()*-1.89368);
}

double NNfunction_sb_uRsR::synapse0x2489a80() {
   return (neuron0x24889b0()*0.406294);
}

double NNfunction_sb_uRsR::synapse0x2489ac0() {
   return (neuron0x2242240()*-0.720786);
}

double NNfunction_sb_uRsR::synapse0x248a450() {
   return (neuron0x24897d0()*-1.70722);
}

double NNfunction_sb_uRsR::synapse0x248a490() {
   return (neuron0x248a1a0()*-0.707383);
}

double NNfunction_sb_uRsR::synapse0x248b220() {
   return (neuron0x248af70()*0.974513);
}

double NNfunction_sb_uRsR::synapse0x248b260() {
   return (neuron0x248b940()*0.541882);
}

double NNfunction_sb_uRsR::synapse0x248bbf0() {
   return (neuron0x248c310()*0.657324);
}

double NNfunction_sb_uRsR::synapse0x248bc30() {
   return (neuron0x248cdf0()*-0.407264);
}

double NNfunction_sb_uRsR::synapse0x248c5c0() {
   return (neuron0x248d7c0()*0.0277202);
}

double NNfunction_sb_uRsR::synapse0x248c600() {
   return (neuron0x248a8a0()*0.0967237);
}

double NNfunction_sb_uRsR::synapse0x248d0a0() {
   return (neuron0x248f370()*0.223383);
}

double NNfunction_sb_uRsR::synapse0x248d0e0() {
   return (neuron0x248fd40()*-0.888054);
}

double NNfunction_sb_uRsR::synapse0x248da70() {
   return (neuron0x2490710()*-1.09014);
}

double NNfunction_sb_uRsR::synapse0x248dab0() {
   return (neuron0x24910e0()*3.16989);
}

double NNfunction_sb_uRsR::synapse0x248ab50() {
   return (neuron0x2492ef0()*-1.37108);
}

double NNfunction_sb_uRsR::synapse0x248ab90() {
   return (neuron0x24931d0()*-1.84239);
}

double NNfunction_sb_uRsR::synapse0x248f620() {
   return (neuron0x2493ba0()*-0.818039);
}

double NNfunction_sb_uRsR::synapse0x248f660() {
   return (neuron0x2494570()*1.76205);
}

double NNfunction_sb_uRsR::synapse0x248fff0() {
   return (neuron0x2494f40()*2.49249);
}

double NNfunction_sb_uRsR::synapse0x2490030() {
   return (neuron0x2495910()*1.87748);
}

double NNfunction_sb_uRsR::synapse0x24909c0() {
   return (neuron0x248e460()*3.74404);
}

double NNfunction_sb_uRsR::synapse0x2490a00() {
   return (neuron0x248ee30()*-3.57347);
}

double NNfunction_sb_uRsR::synapse0x2491390() {
   return (neuron0x24986a0()*1.31584);
}

double NNfunction_sb_uRsR::synapse0x24913d0() {
   return (neuron0x2499070()*-0.243891);
}

double NNfunction_sb_uRsR::synapse0x2485500() {
   return (neuron0x2499a40()*0.146316);
}

double NNfunction_sb_uRsR::synapse0x2485540() {
   return (neuron0x249a410()*-1.32818);
}

double NNfunction_sb_uRsR::synapse0x2493480() {
   return (neuron0x249ade0()*1.00411);
}

double NNfunction_sb_uRsR::synapse0x24934c0() {
   return (neuron0x249b7b0()*0.82429);
}

double NNfunction_sb_uRsR::synapse0x2493e50() {
   return (neuron0x249c180()*1.06914);
}

double NNfunction_sb_uRsR::synapse0x2493e90() {
   return (neuron0x249cb50()*-1.28373);
}

double NNfunction_sb_uRsR::synapse0x2494820() {
   return (neuron0x2492be0()*1.95828);
}

double NNfunction_sb_uRsR::synapse0x2494860() {
   return (neuron0x249f730()*-3.57792);
}

double NNfunction_sb_uRsR::synapse0x24951f0() {
   return (neuron0x24a0100()*-1.70919);
}

double NNfunction_sb_uRsR::synapse0x2495230() {
   return (neuron0x24a0ad0()*5.12935);
}

double NNfunction_sb_uRsR::synapse0x2495bc0() {
   return (neuron0x24a14a0()*2.8933);
}

double NNfunction_sb_uRsR::synapse0x2495c00() {
   return (neuron0x24a1e70()*3.36059);
}

double NNfunction_sb_uRsR::synapse0x248e710() {
   return (neuron0x24a2840()*-1.20175);
}

double NNfunction_sb_uRsR::synapse0x248e750() {
   return (neuron0x24a3210()*0.216779);
}

double NNfunction_sb_uRsR::synapse0x2497fc0() {
   return (neuron0x24a3be0()*-0.881588);
}

double NNfunction_sb_uRsR::synapse0x2498000() {
   return (neuron0x24a47c0()*-0.529321);
}

double NNfunction_sb_uRsR::synapse0x2498950() {
   return (neuron0x24a5190()*0.709268);
}

double NNfunction_sb_uRsR::synapse0x2498990() {
   return (neuron0x2496010()*0.877902);
}

double NNfunction_sb_uRsR::synapse0x2499320() {
   return (neuron0x24969e0()*0.93588);
}

double NNfunction_sb_uRsR::synapse0x2499360() {
   return (neuron0x24973b0()*-1.31898);
}

double NNfunction_sb_uRsR::synapse0x2499cf0() {
   return (neuron0x24a99f0()*-0.61787);
}

double NNfunction_sb_uRsR::synapse0x2499d30() {
   return (neuron0x24aa2a0()*-1.26892);
}

double NNfunction_sb_uRsR::synapse0x249a6c0() {
   return (neuron0x24aac70()*-1.63111);
}

double NNfunction_sb_uRsR::synapse0x249a700() {
   return (neuron0x24ab640()*1.00017);
}

double NNfunction_sb_uRsR::synapse0x249ce00() {
   return (neuron0x24875c0()*0.0620458);
}

double NNfunction_sb_uRsR::synapse0x249ce40() {
   return (neuron0x2487ed0()*-0.638027);
}

double NNfunction_sb_uRsR::synapse0x24923c0() {
   return (neuron0x24889b0()*-0.0264922);
}

double NNfunction_sb_uRsR::synapse0x2492400() {
   return (neuron0x2242240()*0.061982);
}

double NNfunction_sb_uRsR::synapse0x249f9e0() {
   return (neuron0x24897d0()*0.0866039);
}

double NNfunction_sb_uRsR::synapse0x249fa20() {
   return (neuron0x248a1a0()*0.103601);
}

double NNfunction_sb_uRsR::synapse0x24a03b0() {
   return (neuron0x248af70()*-0.219819);
}

double NNfunction_sb_uRsR::synapse0x24a03f0() {
   return (neuron0x248b940()*-0.566755);
}

double NNfunction_sb_uRsR::synapse0x24a0d80() {
   return (neuron0x248c310()*-0.187352);
}

double NNfunction_sb_uRsR::synapse0x24a0dc0() {
   return (neuron0x248cdf0()*-0.186239);
}

double NNfunction_sb_uRsR::synapse0x24a1750() {
   return (neuron0x248d7c0()*-0.0965827);
}

double NNfunction_sb_uRsR::synapse0x24a1790() {
   return (neuron0x248a8a0()*-0.164885);
}

double NNfunction_sb_uRsR::synapse0x24a2120() {
   return (neuron0x248f370()*-0.0173091);
}

double NNfunction_sb_uRsR::synapse0x24a2160() {
   return (neuron0x248fd40()*0.323455);
}

double NNfunction_sb_uRsR::synapse0x24a2af0() {
   return (neuron0x2490710()*0.477741);
}

double NNfunction_sb_uRsR::synapse0x24a2b30() {
   return (neuron0x24910e0()*-0.724171);
}

double NNfunction_sb_uRsR::synapse0x24a34c0() {
   return (neuron0x2492ef0()*0.135468);
}

double NNfunction_sb_uRsR::synapse0x24a3500() {
   return (neuron0x24931d0()*0.696333);
}

double NNfunction_sb_uRsR::synapse0x24a3e90() {
   return (neuron0x2493ba0()*-0.057388);
}

double NNfunction_sb_uRsR::synapse0x24a3ed0() {
   return (neuron0x2494570()*0.457704);
}

double NNfunction_sb_uRsR::synapse0x24a4a70() {
   return (neuron0x2494f40()*-0.569482);
}

double NNfunction_sb_uRsR::synapse0x24a4ab0() {
   return (neuron0x2495910()*0.11398);
}

double NNfunction_sb_uRsR::synapse0x24a5440() {
   return (neuron0x248e460()*-1.13087);
}

double NNfunction_sb_uRsR::synapse0x24a5480() {
   return (neuron0x248ee30()*-2.18474);
}

double NNfunction_sb_uRsR::synapse0x24962c0() {
   return (neuron0x24986a0()*-0.527781);
}

double NNfunction_sb_uRsR::synapse0x2496300() {
   return (neuron0x2499070()*-0.0232687);
}

double NNfunction_sb_uRsR::synapse0x2496c90() {
   return (neuron0x2499a40()*0.0701066);
}

double NNfunction_sb_uRsR::synapse0x2496cd0() {
   return (neuron0x249a410()*-0.0953585);
}

double NNfunction_sb_uRsR::synapse0x2497660() {
   return (neuron0x249ade0()*-0.247089);
}

double NNfunction_sb_uRsR::synapse0x24976a0() {
   return (neuron0x249b7b0()*-0.0613396);
}

double NNfunction_sb_uRsR::synapse0x24a9b80() {
   return (neuron0x249c180()*-0.151469);
}

double NNfunction_sb_uRsR::synapse0x24a9bc0() {
   return (neuron0x249cb50()*3.26435);
}

double NNfunction_sb_uRsR::synapse0x24aa550() {
   return (neuron0x2492be0()*-0.482705);
}

double NNfunction_sb_uRsR::synapse0x24aa590() {
   return (neuron0x249f730()*-2.52578);
}

double NNfunction_sb_uRsR::synapse0x24aaf20() {
   return (neuron0x24a0100()*-0.236703);
}

double NNfunction_sb_uRsR::synapse0x24aaf60() {
   return (neuron0x24a0ad0()*-0.148981);
}

double NNfunction_sb_uRsR::synapse0x24ab8f0() {
   return (neuron0x24a14a0()*-0.119444);
}

double NNfunction_sb_uRsR::synapse0x24ab930() {
   return (neuron0x24a1e70()*-0.599264);
}

double NNfunction_sb_uRsR::synapse0x24877e0() {
   return (neuron0x24a2840()*0.388164);
}

double NNfunction_sb_uRsR::synapse0x2487820() {
   return (neuron0x24a3210()*0.026201);
}

double NNfunction_sb_uRsR::synapse0x249b090() {
   return (neuron0x24a3be0()*0.347904);
}

double NNfunction_sb_uRsR::synapse0x249b0d0() {
   return (neuron0x24a47c0()*0.0473414);
}

double NNfunction_sb_uRsR::synapse0x24ac010() {
   return (neuron0x24a5190()*-0.130765);
}

double NNfunction_sb_uRsR::synapse0x24ac050() {
   return (neuron0x2496010()*-0.461267);
}

double NNfunction_sb_uRsR::synapse0x24ac090() {
   return (neuron0x24969e0()*-0.249939);
}

double NNfunction_sb_uRsR::synapse0x24ac0d0() {
   return (neuron0x24973b0()*0.495408);
}

double NNfunction_sb_uRsR::synapse0x24b2f80() {
   return (neuron0x24a99f0()*0.296275);
}

double NNfunction_sb_uRsR::synapse0x24b2fc0() {
   return (neuron0x24aa2a0()*3.23169);
}

double NNfunction_sb_uRsR::synapse0x24b3000() {
   return (neuron0x24aac70()*0.370798);
}

double NNfunction_sb_uRsR::synapse0x24b3040() {
   return (neuron0x24ab640()*-0.344059);
}

double NNfunction_sb_uRsR::synapse0x24b33c0() {
   return (neuron0x24875c0()*2.03063);
}

double NNfunction_sb_uRsR::synapse0x24b3400() {
   return (neuron0x2487ed0()*-1.76691);
}

double NNfunction_sb_uRsR::synapse0x24b3440() {
   return (neuron0x24889b0()*0.862819);
}

double NNfunction_sb_uRsR::synapse0x24b3480() {
   return (neuron0x2242240()*-2.68051);
}

double NNfunction_sb_uRsR::synapse0x24b34c0() {
   return (neuron0x24897d0()*-0.942114);
}

double NNfunction_sb_uRsR::synapse0x24b3500() {
   return (neuron0x248a1a0()*1.85242);
}

double NNfunction_sb_uRsR::synapse0x24b3540() {
   return (neuron0x248af70()*-1.98373);
}

double NNfunction_sb_uRsR::synapse0x24b3580() {
   return (neuron0x248b940()*-3.06292);
}

double NNfunction_sb_uRsR::synapse0x24b35c0() {
   return (neuron0x248c310()*-2.8284);
}

double NNfunction_sb_uRsR::synapse0x24b3600() {
   return (neuron0x248cdf0()*-4.12895);
}

double NNfunction_sb_uRsR::synapse0x24b3640() {
   return (neuron0x248d7c0()*3.33697);
}

double NNfunction_sb_uRsR::synapse0x24b3680() {
   return (neuron0x248a8a0()*-2.94063);
}

double NNfunction_sb_uRsR::synapse0x24b36c0() {
   return (neuron0x248f370()*2.02091);
}

double NNfunction_sb_uRsR::synapse0x24b3700() {
   return (neuron0x248fd40()*2.15034);
}

double NNfunction_sb_uRsR::synapse0x24b3740() {
   return (neuron0x2490710()*0.989158);
}

double NNfunction_sb_uRsR::synapse0x24b3780() {
   return (neuron0x24910e0()*6.45967);
}

double NNfunction_sb_uRsR::synapse0x24b3210() {
   return (neuron0x2492ef0()*0.0401321);
}

double NNfunction_sb_uRsR::synapse0x24b3250() {
   return (neuron0x24931d0()*0.65699);
}

double NNfunction_sb_uRsR::synapse0x24b38d0() {
   return (neuron0x2493ba0()*2.02491);
}

double NNfunction_sb_uRsR::synapse0x24b3910() {
   return (neuron0x2494570()*0.706262);
}

double NNfunction_sb_uRsR::synapse0x24b3950() {
   return (neuron0x2494f40()*1.49116);
}

double NNfunction_sb_uRsR::synapse0x24b3990() {
   return (neuron0x2495910()*0.328979);
}

double NNfunction_sb_uRsR::synapse0x24b39d0() {
   return (neuron0x248e460()*4.65473);
}

double NNfunction_sb_uRsR::synapse0x24b3a10() {
   return (neuron0x248ee30()*-2.92469);
}

double NNfunction_sb_uRsR::synapse0x24b3a50() {
   return (neuron0x24986a0()*0.979782);
}

double NNfunction_sb_uRsR::synapse0x24b3a90() {
   return (neuron0x2499070()*2.07551);
}

double NNfunction_sb_uRsR::synapse0x24b3ad0() {
   return (neuron0x2499a40()*3.06697);
}

double NNfunction_sb_uRsR::synapse0x24b3b10() {
   return (neuron0x249a410()*-2.08057);
}

double NNfunction_sb_uRsR::synapse0x24b3b50() {
   return (neuron0x249ade0()*-2.36041);
}

double NNfunction_sb_uRsR::synapse0x24b3b90() {
   return (neuron0x249b7b0()*1.68995);
}

double NNfunction_sb_uRsR::synapse0x24b3bd0() {
   return (neuron0x249c180()*1.312);
}

double NNfunction_sb_uRsR::synapse0x24b3c10() {
   return (neuron0x249cb50()*0.260211);
}

double NNfunction_sb_uRsR::synapse0x24b37c0() {
   return (neuron0x2492be0()*-0.146857);
}

double NNfunction_sb_uRsR::synapse0x24b3800() {
   return (neuron0x249f730()*-3.60589);
}

double NNfunction_sb_uRsR::synapse0x24b3840() {
   return (neuron0x24a0100()*0.646875);
}

double NNfunction_sb_uRsR::synapse0x24b3880() {
   return (neuron0x24a0ad0()*-0.0263287);
}

double NNfunction_sb_uRsR::synapse0x24b3e60() {
   return (neuron0x24a14a0()*-1.47047);
}

double NNfunction_sb_uRsR::synapse0x24b3ea0() {
   return (neuron0x24a1e70()*-1.79205);
}

double NNfunction_sb_uRsR::synapse0x24b3ee0() {
   return (neuron0x24a2840()*2.37272);
}

double NNfunction_sb_uRsR::synapse0x24b3f20() {
   return (neuron0x24a3210()*3.39427);
}

double NNfunction_sb_uRsR::synapse0x24b3f60() {
   return (neuron0x24a3be0()*-1.53442);
}

double NNfunction_sb_uRsR::synapse0x24b3fa0() {
   return (neuron0x24a47c0()*2.39767);
}

double NNfunction_sb_uRsR::synapse0x24b3fe0() {
   return (neuron0x24a5190()*2.06169);
}

double NNfunction_sb_uRsR::synapse0x24b4020() {
   return (neuron0x2496010()*-3.25526);
}

double NNfunction_sb_uRsR::synapse0x24b4060() {
   return (neuron0x24969e0()*1.52365);
}

double NNfunction_sb_uRsR::synapse0x24b40a0() {
   return (neuron0x24973b0()*1.33233);
}

double NNfunction_sb_uRsR::synapse0x24b40e0() {
   return (neuron0x24a99f0()*-1.66493);
}

double NNfunction_sb_uRsR::synapse0x24b4120() {
   return (neuron0x24aa2a0()*1.40571);
}

double NNfunction_sb_uRsR::synapse0x24b4160() {
   return (neuron0x24aac70()*-0.268461);
}

double NNfunction_sb_uRsR::synapse0x24b41a0() {
   return (neuron0x24ab640()*0.925036);
}

double NNfunction_sb_uRsR::synapse0x24b4520() {
   return (neuron0x24875c0()*0.00120888);
}

double NNfunction_sb_uRsR::synapse0x24b4560() {
   return (neuron0x2487ed0()*0.0271405);
}

double NNfunction_sb_uRsR::synapse0x24b45a0() {
   return (neuron0x24889b0()*0.958224);
}

double NNfunction_sb_uRsR::synapse0x24b45e0() {
   return (neuron0x2242240()*-0.00354521);
}

double NNfunction_sb_uRsR::synapse0x24b4620() {
   return (neuron0x24897d0()*-0.0022757);
}

double NNfunction_sb_uRsR::synapse0x24b4660() {
   return (neuron0x248a1a0()*0.00347658);
}

double NNfunction_sb_uRsR::synapse0x24b46a0() {
   return (neuron0x248af70()*-0.000222862);
}

double NNfunction_sb_uRsR::synapse0x24b46e0() {
   return (neuron0x248b940()*0.0251856);
}

double NNfunction_sb_uRsR::synapse0x24b4720() {
   return (neuron0x248c310()*-0.00033064);
}

double NNfunction_sb_uRsR::synapse0x24b4760() {
   return (neuron0x248cdf0()*-0.0453665);
}

double NNfunction_sb_uRsR::synapse0x24b47a0() {
   return (neuron0x248d7c0()*-0.0025936);
}

double NNfunction_sb_uRsR::synapse0x24b47e0() {
   return (neuron0x248a8a0()*0.00870965);
}

double NNfunction_sb_uRsR::synapse0x24b4820() {
   return (neuron0x248f370()*-0.00625116);
}

double NNfunction_sb_uRsR::synapse0x24b4860() {
   return (neuron0x248fd40()*-0.00445242);
}

double NNfunction_sb_uRsR::synapse0x24b48a0() {
   return (neuron0x2490710()*-0.0230702);
}

double NNfunction_sb_uRsR::synapse0x24b48e0() {
   return (neuron0x24910e0()*0.649147);
}

double NNfunction_sb_uRsR::synapse0x24b4370() {
   return (neuron0x2492ef0()*0.000171113);
}

double NNfunction_sb_uRsR::synapse0x24b43b0() {
   return (neuron0x24931d0()*-0.0333412);
}

double NNfunction_sb_uRsR::synapse0x24b4a30() {
   return (neuron0x2493ba0()*0.00336106);
}

double NNfunction_sb_uRsR::synapse0x24b4a70() {
   return (neuron0x2494570()*0.976066);
}

double NNfunction_sb_uRsR::synapse0x24b4ab0() {
   return (neuron0x2494f40()*0.0753569);
}

double NNfunction_sb_uRsR::synapse0x24b4af0() {
   return (neuron0x2495910()*2.06175);
}

double NNfunction_sb_uRsR::synapse0x24b4b30() {
   return (neuron0x248e460()*0.0355335);
}

double NNfunction_sb_uRsR::synapse0x24b4b70() {
   return (neuron0x248ee30()*-0.682139);
}

double NNfunction_sb_uRsR::synapse0x24b4bb0() {
   return (neuron0x24986a0()*0.00939676);
}

double NNfunction_sb_uRsR::synapse0x24b4bf0() {
   return (neuron0x2499070()*1.80082);
}

double NNfunction_sb_uRsR::synapse0x24b4c30() {
   return (neuron0x2499a40()*0.00834979);
}

double NNfunction_sb_uRsR::synapse0x24b4c70() {
   return (neuron0x249a410()*0.00756569);
}

double NNfunction_sb_uRsR::synapse0x24b4cb0() {
   return (neuron0x249ade0()*0.00334084);
}

double NNfunction_sb_uRsR::synapse0x24b4cf0() {
   return (neuron0x249b7b0()*-0.0068167);
}

double NNfunction_sb_uRsR::synapse0x24b4d30() {
   return (neuron0x249c180()*-0.00284427);
}

double NNfunction_sb_uRsR::synapse0x24b4d70() {
   return (neuron0x249cb50()*-0.250636);
}

double NNfunction_sb_uRsR::synapse0x24b4920() {
   return (neuron0x2492be0()*-1.27412);
}

double NNfunction_sb_uRsR::synapse0x24b4960() {
   return (neuron0x249f730()*-0.301971);
}

double NNfunction_sb_uRsR::synapse0x24b49a0() {
   return (neuron0x24a0100()*0.00856791);
}

double NNfunction_sb_uRsR::synapse0x24b49e0() {
   return (neuron0x24a0ad0()*0.0555114);
}

double NNfunction_sb_uRsR::synapse0x24b4fc0() {
   return (neuron0x24a14a0()*-0.802387);
}

double NNfunction_sb_uRsR::synapse0x24b5000() {
   return (neuron0x24a1e70()*5.48103e-05);
}

double NNfunction_sb_uRsR::synapse0x24b5040() {
   return (neuron0x24a2840()*-0.00468179);
}

double NNfunction_sb_uRsR::synapse0x24b5080() {
   return (neuron0x24a3210()*-0.00379477);
}

double NNfunction_sb_uRsR::synapse0x24b50c0() {
   return (neuron0x24a3be0()*-0.00337762);
}

double NNfunction_sb_uRsR::synapse0x24b5100() {
   return (neuron0x24a47c0()*-0.00287619);
}

double NNfunction_sb_uRsR::synapse0x24b5140() {
   return (neuron0x24a5190()*-0.00138187);
}

double NNfunction_sb_uRsR::synapse0x24b5180() {
   return (neuron0x2496010()*0.00941336);
}

double NNfunction_sb_uRsR::synapse0x24b51c0() {
   return (neuron0x24969e0()*-0.00363032);
}

double NNfunction_sb_uRsR::synapse0x24b5200() {
   return (neuron0x24973b0()*-0.00513311);
}

double NNfunction_sb_uRsR::synapse0x24b5240() {
   return (neuron0x24a99f0()*-2.31566);
}

double NNfunction_sb_uRsR::synapse0x24b5280() {
   return (neuron0x24aa2a0()*-0.254193);
}

double NNfunction_sb_uRsR::synapse0x24b52c0() {
   return (neuron0x24aac70()*-0.00606048);
}

double NNfunction_sb_uRsR::synapse0x24b5300() {
   return (neuron0x24ab640()*0.00319439);
}

double NNfunction_sb_uRsR::synapse0x24b5680() {
   return (neuron0x24875c0()*0.563397);
}

double NNfunction_sb_uRsR::synapse0x24b56c0() {
   return (neuron0x2487ed0()*-0.17492);
}

double NNfunction_sb_uRsR::synapse0x24b5700() {
   return (neuron0x24889b0()*0.896958);
}

double NNfunction_sb_uRsR::synapse0x24b5740() {
   return (neuron0x2242240()*0.390671);
}

double NNfunction_sb_uRsR::synapse0x24b5780() {
   return (neuron0x24897d0()*0.164353);
}

double NNfunction_sb_uRsR::synapse0x24b57c0() {
   return (neuron0x248a1a0()*0.311032);
}

double NNfunction_sb_uRsR::synapse0x24b5800() {
   return (neuron0x248af70()*-0.0256966);
}

double NNfunction_sb_uRsR::synapse0x24b5840() {
   return (neuron0x248b940()*0.407372);
}

double NNfunction_sb_uRsR::synapse0x24b5880() {
   return (neuron0x248c310()*-0.374201);
}

double NNfunction_sb_uRsR::synapse0x24b58c0() {
   return (neuron0x248cdf0()*-0.460248);
}

double NNfunction_sb_uRsR::synapse0x24b5900() {
   return (neuron0x248d7c0()*0.498337);
}

double NNfunction_sb_uRsR::synapse0x24b5940() {
   return (neuron0x248a8a0()*0.0802743);
}

double NNfunction_sb_uRsR::synapse0x24b5980() {
   return (neuron0x248f370()*0.146469);
}

double NNfunction_sb_uRsR::synapse0x24b59c0() {
   return (neuron0x248fd40()*0.401878);
}

double NNfunction_sb_uRsR::synapse0x24b5a00() {
   return (neuron0x2490710()*-0.26096);
}

double NNfunction_sb_uRsR::synapse0x24b5a40() {
   return (neuron0x24910e0()*0.946345);
}

double NNfunction_sb_uRsR::synapse0x24b54d0() {
   return (neuron0x2492ef0()*0.725459);
}

double NNfunction_sb_uRsR::synapse0x24b5510() {
   return (neuron0x24931d0()*-0.312662);
}

double NNfunction_sb_uRsR::synapse0x24b5b90() {
   return (neuron0x2493ba0()*-0.0141293);
}

double NNfunction_sb_uRsR::synapse0x24b5bd0() {
   return (neuron0x2494570()*0.415992);
}

double NNfunction_sb_uRsR::synapse0x24b5c10() {
   return (neuron0x2494f40()*0.654567);
}

double NNfunction_sb_uRsR::synapse0x24b5c50() {
   return (neuron0x2495910()*0.289767);
}

double NNfunction_sb_uRsR::synapse0x24b5c90() {
   return (neuron0x248e460()*0.907278);
}

double NNfunction_sb_uRsR::synapse0x24b5cd0() {
   return (neuron0x248ee30()*0.222695);
}

double NNfunction_sb_uRsR::synapse0x24b5d10() {
   return (neuron0x24986a0()*0.822564);
}

double NNfunction_sb_uRsR::synapse0x24b5d50() {
   return (neuron0x2499070()*0.462859);
}

double NNfunction_sb_uRsR::synapse0x24b5d90() {
   return (neuron0x2499a40()*0.272268);
}

double NNfunction_sb_uRsR::synapse0x24b5dd0() {
   return (neuron0x249a410()*0.86953);
}

double NNfunction_sb_uRsR::synapse0x24b5e10() {
   return (neuron0x249ade0()*0.212483);
}

double NNfunction_sb_uRsR::synapse0x24b5e50() {
   return (neuron0x249b7b0()*0.983698);
}

double NNfunction_sb_uRsR::synapse0x24b5e90() {
   return (neuron0x249c180()*0.526307);
}

double NNfunction_sb_uRsR::synapse0x24b5ed0() {
   return (neuron0x249cb50()*0.233562);
}

double NNfunction_sb_uRsR::synapse0x24b5a80() {
   return (neuron0x2492be0()*0.0912061);
}

double NNfunction_sb_uRsR::synapse0x24b5ac0() {
   return (neuron0x249f730()*-0.011406);
}

double NNfunction_sb_uRsR::synapse0x24b5b00() {
   return (neuron0x24a0100()*-0.418365);
}

double NNfunction_sb_uRsR::synapse0x24b5b40() {
   return (neuron0x24a0ad0()*0.63099);
}

double NNfunction_sb_uRsR::synapse0x24b6120() {
   return (neuron0x24a14a0()*0.835943);
}

double NNfunction_sb_uRsR::synapse0x24b6160() {
   return (neuron0x24a1e70()*0.224705);
}

double NNfunction_sb_uRsR::synapse0x24b61a0() {
   return (neuron0x24a2840()*0.555692);
}

double NNfunction_sb_uRsR::synapse0x24b61e0() {
   return (neuron0x24a3210()*1.03148);
}

double NNfunction_sb_uRsR::synapse0x24b6220() {
   return (neuron0x24a3be0()*0.36947);
}

double NNfunction_sb_uRsR::synapse0x24b6260() {
   return (neuron0x24a47c0()*-0.021489);
}

double NNfunction_sb_uRsR::synapse0x24b62a0() {
   return (neuron0x24a5190()*0.221407);
}

double NNfunction_sb_uRsR::synapse0x24b62e0() {
   return (neuron0x2496010()*0.247563);
}

double NNfunction_sb_uRsR::synapse0x24b6320() {
   return (neuron0x24969e0()*0.748028);
}

double NNfunction_sb_uRsR::synapse0x24b6360() {
   return (neuron0x24973b0()*0.331004);
}

double NNfunction_sb_uRsR::synapse0x24b63a0() {
   return (neuron0x24a99f0()*0.383004);
}

double NNfunction_sb_uRsR::synapse0x24b63e0() {
   return (neuron0x24aa2a0()*0.616639);
}

double NNfunction_sb_uRsR::synapse0x24b6420() {
   return (neuron0x24aac70()*0.00437101);
}

double NNfunction_sb_uRsR::synapse0x24b6460() {
   return (neuron0x24ab640()*0.480302);
}

double NNfunction_sb_uRsR::synapse0x2487580() {
   return (neuron0x24b2840()*-6.59299);
}

double NNfunction_sb_uRsR::synapse0x24b66c0() {
   return (neuron0x24b2be0()*-1.21152);
}

double NNfunction_sb_uRsR::synapse0x24b6700() {
   return (neuron0x24b3080()*-5.22467);
}

double NNfunction_sb_uRsR::synapse0x24b6740() {
   return (neuron0x24b41e0()*-10.3884);
}

double NNfunction_sb_uRsR::synapse0x24b6780() {
   return (neuron0x24b5340()*8.41178);
}

