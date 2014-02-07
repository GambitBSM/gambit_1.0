#include "NNfunction_ss_uRsR.h"
#include <cmath>

double NNfunction_ss_uRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5296)/15.3295;
   input1 = (in1 - -4.24494)/1153.55;
   input2 = (in2 - 654.172)/625.55;
   input3 = (in3 - -54.8725)/830.632;
   input4 = (in4 - 1074.24)/961.033;
   input5 = (in5 - 896.234)/948.063;
   input6 = (in6 - 917.901)/959.306;
   input7 = (in7 - 924.511)/934.25;
   input8 = (in8 - 912.528)/961.867;
   input9 = (in9 - 890.24)/944.408;
   input10 = (in10 - 981.699)/947.328;
   input11 = (in11 - 708.308)/851.078;
   input12 = (in12 - 720.383)/865.658;
   input13 = (in13 - 504.013)/519.999;
   input14 = (in14 - 490.116)/517.41;
   input15 = (in15 - 722.815)/824.802;
   input16 = (in16 - 537.05)/566.586;
   input17 = (in17 - 748.157)/884.286;
   input18 = (in18 - 460.974)/508.591;
   input19 = (in19 - 794.965)/872.935;
   input20 = (in20 - -7.18481)/488.221;
   input21 = (in21 - 5.54578)/1165.3;
   input22 = (in22 - 0.729526)/1199.59;
   input23 = (in23 - -194.3)/603.984;
   switch(index) {
     case 0:
         return neuron0x13b04b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRsR::Value(int index, double* input) {
   input0 = (input[0] - 23.5296)/15.3295;
   input1 = (input[1] - -4.24494)/1153.55;
   input2 = (input[2] - 654.172)/625.55;
   input3 = (input[3] - -54.8725)/830.632;
   input4 = (input[4] - 1074.24)/961.033;
   input5 = (input[5] - 896.234)/948.063;
   input6 = (input[6] - 917.901)/959.306;
   input7 = (input[7] - 924.511)/934.25;
   input8 = (input[8] - 912.528)/961.867;
   input9 = (input[9] - 890.24)/944.408;
   input10 = (input[10] - 981.699)/947.328;
   input11 = (input[11] - 708.308)/851.078;
   input12 = (input[12] - 720.383)/865.658;
   input13 = (input[13] - 504.013)/519.999;
   input14 = (input[14] - 490.116)/517.41;
   input15 = (input[15] - 722.815)/824.802;
   input16 = (input[16] - 537.05)/566.586;
   input17 = (input[17] - 748.157)/884.286;
   input18 = (input[18] - 460.974)/508.591;
   input19 = (input[19] - 794.965)/872.935;
   input20 = (input[20] - -7.18481)/488.221;
   input21 = (input[21] - 5.54578)/1165.3;
   input22 = (input[22] - 0.729526)/1199.59;
   input23 = (input[23] - -194.3)/603.984;
   switch(index) {
     case 0:
         return neuron0x13b04b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRsR::neuron0x137c570() {
   return input0;
}

double NNfunction_ss_uRsR::neuron0x137c8b0() {
   return input1;
}

double NNfunction_ss_uRsR::neuron0x137cbf0() {
   return input2;
}

double NNfunction_ss_uRsR::neuron0x137cf30() {
   return input3;
}

double NNfunction_ss_uRsR::neuron0x137d270() {
   return input4;
}

double NNfunction_ss_uRsR::neuron0x137d5b0() {
   return input5;
}

double NNfunction_ss_uRsR::neuron0x137d8f0() {
   return input6;
}

double NNfunction_ss_uRsR::neuron0x137dc30() {
   return input7;
}

double NNfunction_ss_uRsR::neuron0x137df70() {
   return input8;
}

double NNfunction_ss_uRsR::neuron0x137e2b0() {
   return input9;
}

double NNfunction_ss_uRsR::neuron0x137e5f0() {
   return input10;
}

double NNfunction_ss_uRsR::neuron0x137e930() {
   return input11;
}

double NNfunction_ss_uRsR::neuron0x137ec70() {
   return input12;
}

double NNfunction_ss_uRsR::neuron0x137efb0() {
   return input13;
}

double NNfunction_ss_uRsR::neuron0x137f2f0() {
   return input14;
}

double NNfunction_ss_uRsR::neuron0x137f630() {
   return input15;
}

double NNfunction_ss_uRsR::neuron0x137f970() {
   return input16;
}

double NNfunction_ss_uRsR::neuron0x137fed0() {
   return input17;
}

double NNfunction_ss_uRsR::neuron0x13800f0() {
   return input18;
}

double NNfunction_ss_uRsR::neuron0x1380430() {
   return input19;
}

double NNfunction_ss_uRsR::neuron0x1380770() {
   return input20;
}

double NNfunction_ss_uRsR::neuron0x1380ab0() {
   return input21;
}

double NNfunction_ss_uRsR::neuron0x1380df0() {
   return input22;
}

double NNfunction_ss_uRsR::neuron0x1381130() {
   return input23;
}

double NNfunction_ss_uRsR::input0x13815d0() {
   double input = 0.00326579;
   input += synapse0x113c3e0();
   input += synapse0x137c430();
   input += synapse0x137c470();
   input += synapse0x1381880();
   input += synapse0x13818c0();
   input += synapse0x1381900();
   input += synapse0x1381940();
   input += synapse0x1381980();
   input += synapse0x13819c0();
   input += synapse0x1381a00();
   input += synapse0x1381a40();
   input += synapse0x1381a80();
   input += synapse0x1381ac0();
   input += synapse0x1381b00();
   input += synapse0x1381b40();
   input += synapse0x1381b80();
   input += synapse0x137c3a0();
   input += synapse0x137c3e0();
   input += synapse0x112dc80();
   input += synapse0x112dcc0();
   input += synapse0x1381de0();
   input += synapse0x1381e20();
   input += synapse0x1381e60();
   input += synapse0x1381ea0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13815d0() {
   double input = input0x13815d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1381ee0() {
   double input = -0.84612;
   input += synapse0x1382220();
   input += synapse0x1382260();
   input += synapse0x13822a0();
   input += synapse0x13822e0();
   input += synapse0x1382320();
   input += synapse0x1382360();
   input += synapse0x13823a0();
   input += synapse0x13823e0();
   input += synapse0x1382420();
   input += synapse0x1381cd0();
   input += synapse0x1381d10();
   input += synapse0x1381d50();
   input += synapse0x1381d90();
   input += synapse0x1382670();
   input += synapse0x13826b0();
   input += synapse0x13826f0();
   input += synapse0x1382070();
   input += synapse0x13820b0();
   input += synapse0x1382840();
   input += synapse0x1382880();
   input += synapse0x13828c0();
   input += synapse0x1382900();
   input += synapse0x1382940();
   input += synapse0x1382980();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1381ee0() {
   double input = input0x1381ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13829c0() {
   double input = 0.0550699;
   input += synapse0x1382d00();
   input += synapse0x1382d40();
   input += synapse0x1382d80();
   input += synapse0x1382dc0();
   input += synapse0x1382e00();
   input += synapse0x1382e40();
   input += synapse0x1382e80();
   input += synapse0x1382ec0();
   input += synapse0x1382f00();
   input += synapse0x1382f40();
   input += synapse0x1382f80();
   input += synapse0x1382fc0();
   input += synapse0x1383000();
   input += synapse0x1383040();
   input += synapse0x1383080();
   input += synapse0x13830c0();
   input += synapse0x1382b50();
   input += synapse0x1382b90();
   input += synapse0x113bad0();
   input += synapse0x113bb10();
   input += synapse0x136b600();
   input += synapse0x136b640();
   input += synapse0x136b680();
   input += synapse0x137c4b0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13829c0() {
   double input = input0x13829c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x113c250() {
   double input = 0.157187;
   input += synapse0x1382610();
   input += synapse0x137c4f0();
   input += synapse0x137c530();
   input += synapse0x1383210();
   input += synapse0x1383250();
   input += synapse0x1383290();
   input += synapse0x13832d0();
   input += synapse0x1383310();
   input += synapse0x1383350();
   input += synapse0x1383390();
   input += synapse0x13833d0();
   input += synapse0x1383410();
   input += synapse0x1383450();
   input += synapse0x1383490();
   input += synapse0x13834d0();
   input += synapse0x1383510();
   input += synapse0x1382460();
   input += synapse0x13824a0();
   input += synapse0x1383660();
   input += synapse0x13836a0();
   input += synapse0x13836e0();
   input += synapse0x1383720();
   input += synapse0x1383760();
   input += synapse0x13837a0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x113c250() {
   double input = input0x113c250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13837e0() {
   double input = -2.06322;
   input += synapse0x1383b20();
   input += synapse0x1383b60();
   input += synapse0x1383ba0();
   input += synapse0x1383be0();
   input += synapse0x1383c20();
   input += synapse0x1383c60();
   input += synapse0x1383ca0();
   input += synapse0x1383ce0();
   input += synapse0x1383d20();
   input += synapse0x1383d60();
   input += synapse0x1383da0();
   input += synapse0x1383de0();
   input += synapse0x1383e20();
   input += synapse0x1383e60();
   input += synapse0x1383ea0();
   input += synapse0x1383ee0();
   input += synapse0x1383970();
   input += synapse0x13839b0();
   input += synapse0x1384030();
   input += synapse0x1384070();
   input += synapse0x13840b0();
   input += synapse0x13840f0();
   input += synapse0x1384130();
   input += synapse0x1384170();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13837e0() {
   double input = input0x13837e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13841b0() {
   double input = 0.30434;
   input += synapse0x13844f0();
   input += synapse0x1384530();
   input += synapse0x1384570();
   input += synapse0x13845b0();
   input += synapse0x13845f0();
   input += synapse0x1384630();
   input += synapse0x1384670();
   input += synapse0x13846b0();
   input += synapse0x13846f0();
   input += synapse0x113be40();
   input += synapse0x113be80();
   input += synapse0x113bec0();
   input += synapse0x113bf00();
   input += synapse0x113bf40();
   input += synapse0x113bf80();
   input += synapse0x113bfc0();
   input += synapse0x1384340();
   input += synapse0x1384380();
   input += synapse0x113c110();
   input += synapse0x113c150();
   input += synapse0x113c190();
   input += synapse0x113c1d0();
   input += synapse0x113c210();
   input += synapse0x1384f40();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13841b0() {
   double input = input0x13841b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1384f80() {
   double input = 0.0666984;
   input += synapse0x13852c0();
   input += synapse0x1385300();
   input += synapse0x1385340();
   input += synapse0x1385380();
   input += synapse0x13853c0();
   input += synapse0x1385400();
   input += synapse0x1385440();
   input += synapse0x1385480();
   input += synapse0x13854c0();
   input += synapse0x1385500();
   input += synapse0x1385540();
   input += synapse0x1385580();
   input += synapse0x13855c0();
   input += synapse0x1385600();
   input += synapse0x1385640();
   input += synapse0x1385680();
   input += synapse0x1385110();
   input += synapse0x1385150();
   input += synapse0x13857d0();
   input += synapse0x1385810();
   input += synapse0x1385850();
   input += synapse0x1385890();
   input += synapse0x13858d0();
   input += synapse0x1385910();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1384f80() {
   double input = input0x1384f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1385950() {
   double input = 0.641868;
   input += synapse0x1385c90();
   input += synapse0x1385cd0();
   input += synapse0x1385d10();
   input += synapse0x1385d50();
   input += synapse0x1385d90();
   input += synapse0x1385dd0();
   input += synapse0x1385e10();
   input += synapse0x1385e50();
   input += synapse0x1385e90();
   input += synapse0x1385ed0();
   input += synapse0x1385f10();
   input += synapse0x1385f50();
   input += synapse0x1385f90();
   input += synapse0x1385fd0();
   input += synapse0x1386010();
   input += synapse0x1386050();
   input += synapse0x1385ae0();
   input += synapse0x1385b20();
   input += synapse0x13861a0();
   input += synapse0x13861e0();
   input += synapse0x1386220();
   input += synapse0x1386260();
   input += synapse0x13862a0();
   input += synapse0x13862e0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1385950() {
   double input = input0x1385950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1386320() {
   double input = 1.54191;
   input += synapse0x137fdc0();
   input += synapse0x137fe00();
   input += synapse0x137fe40();
   input += synapse0x137fe80();
   input += synapse0x1386870();
   input += synapse0x13868b0();
   input += synapse0x13868f0();
   input += synapse0x1386930();
   input += synapse0x1386970();
   input += synapse0x13869b0();
   input += synapse0x13869f0();
   input += synapse0x1386a30();
   input += synapse0x1386a70();
   input += synapse0x1386ab0();
   input += synapse0x1386af0();
   input += synapse0x1386b30();
   input += synapse0x13864b0();
   input += synapse0x13864f0();
   input += synapse0x1386c80();
   input += synapse0x1386cc0();
   input += synapse0x1386d00();
   input += synapse0x1386d40();
   input += synapse0x1386d80();
   input += synapse0x1386dc0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1386320() {
   double input = input0x1386320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1386e00() {
   double input = -0.903503;
   input += synapse0x1387140();
   input += synapse0x1387180();
   input += synapse0x13871c0();
   input += synapse0x1387200();
   input += synapse0x1387240();
   input += synapse0x1387280();
   input += synapse0x13872c0();
   input += synapse0x1387300();
   input += synapse0x1387340();
   input += synapse0x1387380();
   input += synapse0x13873c0();
   input += synapse0x1387400();
   input += synapse0x1387440();
   input += synapse0x1387480();
   input += synapse0x13874c0();
   input += synapse0x1387500();
   input += synapse0x1386f90();
   input += synapse0x1386fd0();
   input += synapse0x1387650();
   input += synapse0x1387690();
   input += synapse0x13876d0();
   input += synapse0x1387710();
   input += synapse0x1387750();
   input += synapse0x1387790();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1386e00() {
   double input = input0x1386e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13877d0() {
   double input = -0.143854;
   input += synapse0x1387b10();
   input += synapse0x1387b50();
   input += synapse0x1387b90();
   input += synapse0x1387bd0();
   input += synapse0x1387c10();
   input += synapse0x1387c50();
   input += synapse0x1387c90();
   input += synapse0x1387cd0();
   input += synapse0x1387d10();
   input += synapse0x1387d50();
   input += synapse0x1387d90();
   input += synapse0x1387dd0();
   input += synapse0x1387e10();
   input += synapse0x1387e50();
   input += synapse0x1387e90();
   input += synapse0x1387ed0();
   input += synapse0x1387960();
   input += synapse0x13879a0();
   input += synapse0x1384730();
   input += synapse0x1384770();
   input += synapse0x13847b0();
   input += synapse0x13847f0();
   input += synapse0x1384830();
   input += synapse0x1384870();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13877d0() {
   double input = input0x13877d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13848b0() {
   double input = -1.9292;
   input += synapse0x1384bf0();
   input += synapse0x1384c30();
   input += synapse0x1384c70();
   input += synapse0x1384cb0();
   input += synapse0x1384cf0();
   input += synapse0x1384d30();
   input += synapse0x1384d70();
   input += synapse0x1384db0();
   input += synapse0x1384df0();
   input += synapse0x1384e30();
   input += synapse0x1384e70();
   input += synapse0x1384eb0();
   input += synapse0x1384ef0();
   input += synapse0x1389030();
   input += synapse0x1389070();
   input += synapse0x13890b0();
   input += synapse0x1384a40();
   input += synapse0x1384a80();
   input += synapse0x1389200();
   input += synapse0x1389240();
   input += synapse0x1389280();
   input += synapse0x13892c0();
   input += synapse0x1389300();
   input += synapse0x1389340();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13848b0() {
   double input = input0x13848b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1389380() {
   double input = 1.07963;
   input += synapse0x13896c0();
   input += synapse0x1389700();
   input += synapse0x1389740();
   input += synapse0x1389780();
   input += synapse0x13897c0();
   input += synapse0x1389800();
   input += synapse0x1389840();
   input += synapse0x1389880();
   input += synapse0x13898c0();
   input += synapse0x1389900();
   input += synapse0x1389940();
   input += synapse0x1389980();
   input += synapse0x13899c0();
   input += synapse0x1389a00();
   input += synapse0x1389a40();
   input += synapse0x1389a80();
   input += synapse0x1389510();
   input += synapse0x1389550();
   input += synapse0x1389bd0();
   input += synapse0x1389c10();
   input += synapse0x1389c50();
   input += synapse0x1389c90();
   input += synapse0x1389cd0();
   input += synapse0x1389d10();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1389380() {
   double input = input0x1389380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1389d50() {
   double input = 0.32638;
   input += synapse0x138a090();
   input += synapse0x138a0d0();
   input += synapse0x138a110();
   input += synapse0x138a150();
   input += synapse0x138a190();
   input += synapse0x138a1d0();
   input += synapse0x138a210();
   input += synapse0x138a250();
   input += synapse0x138a290();
   input += synapse0x138a2d0();
   input += synapse0x138a310();
   input += synapse0x138a350();
   input += synapse0x138a390();
   input += synapse0x138a3d0();
   input += synapse0x138a410();
   input += synapse0x138a450();
   input += synapse0x1389ee0();
   input += synapse0x1389f20();
   input += synapse0x138a5a0();
   input += synapse0x138a5e0();
   input += synapse0x138a620();
   input += synapse0x138a660();
   input += synapse0x138a6a0();
   input += synapse0x138a6e0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1389d50() {
   double input = input0x1389d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x138a720() {
   double input = 0.416584;
   input += synapse0x138aa60();
   input += synapse0x138aaa0();
   input += synapse0x138aae0();
   input += synapse0x138ab20();
   input += synapse0x138ab60();
   input += synapse0x138aba0();
   input += synapse0x138abe0();
   input += synapse0x138ac20();
   input += synapse0x138ac60();
   input += synapse0x138aca0();
   input += synapse0x138ace0();
   input += synapse0x138ad20();
   input += synapse0x138ad60();
   input += synapse0x138ada0();
   input += synapse0x138ade0();
   input += synapse0x138ae20();
   input += synapse0x138a8b0();
   input += synapse0x138a8f0();
   input += synapse0x138af70();
   input += synapse0x138afb0();
   input += synapse0x138aff0();
   input += synapse0x138b030();
   input += synapse0x138b070();
   input += synapse0x138b0b0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x138a720() {
   double input = input0x138a720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x138b0f0() {
   double input = -2.49627;
   input += synapse0x138b430();
   input += synapse0x137c790();
   input += synapse0x137c7d0();
   input += synapse0x137cad0();
   input += synapse0x137cb10();
   input += synapse0x137ce10();
   input += synapse0x137ce50();
   input += synapse0x137d150();
   input += synapse0x137d190();
   input += synapse0x137d490();
   input += synapse0x137d4d0();
   input += synapse0x137d7d0();
   input += synapse0x137d810();
   input += synapse0x137db10();
   input += synapse0x137db50();
   input += synapse0x137de50();
   input += synapse0x137de90();
   input += synapse0x137e190();
   input += synapse0x137e1d0();
   input += synapse0x137e4d0();
   input += synapse0x137e510();
   input += synapse0x137e810();
   input += synapse0x137e850();
   input += synapse0x137eb50();
   return input;
}

double NNfunction_ss_uRsR::neuron0x138b0f0() {
   double input = input0x138b0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x138cf00() {
   double input = -3.08261;
   input += synapse0x137eb90();
   input += synapse0x137f850();
   input += synapse0x137f890();
   input += synapse0x138b280();
   input += synapse0x138b2c0();
   input += synapse0x137fb90();
   input += synapse0x137fbd0();
   input += synapse0x112db60();
   input += synapse0x112dba0();
   input += synapse0x1380310();
   input += synapse0x1380350();
   input += synapse0x1380650();
   input += synapse0x1380690();
   input += synapse0x1380990();
   input += synapse0x13809d0();
   input += synapse0x1380cd0();
   input += synapse0x1380d10();
   input += synapse0x1381010();
   input += synapse0x1381050();
   input += synapse0x1381350();
   input += synapse0x1381390();
   input += synapse0x137ee90();
   input += synapse0x137eed0();
   input += synapse0x138d1a0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x138cf00() {
   double input = input0x138cf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x138d1e0() {
   double input = 1.96428;
   input += synapse0x138d520();
   input += synapse0x138d560();
   input += synapse0x138d5a0();
   input += synapse0x138d5e0();
   input += synapse0x138d620();
   input += synapse0x138d660();
   input += synapse0x138d6a0();
   input += synapse0x138d6e0();
   input += synapse0x138d720();
   input += synapse0x138d760();
   input += synapse0x138d7a0();
   input += synapse0x138d7e0();
   input += synapse0x138d820();
   input += synapse0x138d860();
   input += synapse0x138d8a0();
   input += synapse0x138d8e0();
   input += synapse0x138d370();
   input += synapse0x138d3b0();
   input += synapse0x138da30();
   input += synapse0x138da70();
   input += synapse0x138dab0();
   input += synapse0x138daf0();
   input += synapse0x138db30();
   input += synapse0x138db70();
   return input;
}

double NNfunction_ss_uRsR::neuron0x138d1e0() {
   double input = input0x138d1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x138dbb0() {
   double input = 0.530102;
   input += synapse0x138def0();
   input += synapse0x138df30();
   input += synapse0x138df70();
   input += synapse0x138dfb0();
   input += synapse0x138dff0();
   input += synapse0x138e030();
   input += synapse0x138e070();
   input += synapse0x138e0b0();
   input += synapse0x138e0f0();
   input += synapse0x138e130();
   input += synapse0x138e170();
   input += synapse0x138e1b0();
   input += synapse0x138e1f0();
   input += synapse0x138e230();
   input += synapse0x138e270();
   input += synapse0x138e2b0();
   input += synapse0x138dd40();
   input += synapse0x138dd80();
   input += synapse0x138e400();
   input += synapse0x138e440();
   input += synapse0x138e480();
   input += synapse0x138e4c0();
   input += synapse0x138e500();
   input += synapse0x138e540();
   return input;
}

double NNfunction_ss_uRsR::neuron0x138dbb0() {
   double input = input0x138dbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x138e580() {
   double input = 0.0639748;
   input += synapse0x138e8c0();
   input += synapse0x138e900();
   input += synapse0x138e940();
   input += synapse0x138e980();
   input += synapse0x138e9c0();
   input += synapse0x138ea00();
   input += synapse0x138ea40();
   input += synapse0x138ea80();
   input += synapse0x138eac0();
   input += synapse0x138eb00();
   input += synapse0x138eb40();
   input += synapse0x138eb80();
   input += synapse0x138ebc0();
   input += synapse0x138ec00();
   input += synapse0x138ec40();
   input += synapse0x138ec80();
   input += synapse0x138e710();
   input += synapse0x138e750();
   input += synapse0x138edd0();
   input += synapse0x138ee10();
   input += synapse0x138ee50();
   input += synapse0x138ee90();
   input += synapse0x138eed0();
   input += synapse0x138ef10();
   return input;
}

double NNfunction_ss_uRsR::neuron0x138e580() {
   double input = input0x138e580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x138ef50() {
   double input = -0.588977;
   input += synapse0x138f290();
   input += synapse0x138f2d0();
   input += synapse0x138f310();
   input += synapse0x138f350();
   input += synapse0x138f390();
   input += synapse0x138f3d0();
   input += synapse0x138f410();
   input += synapse0x138f450();
   input += synapse0x138f490();
   input += synapse0x138f4d0();
   input += synapse0x138f510();
   input += synapse0x138f550();
   input += synapse0x138f590();
   input += synapse0x138f5d0();
   input += synapse0x138f610();
   input += synapse0x138f650();
   input += synapse0x138f0e0();
   input += synapse0x138f120();
   input += synapse0x138f7a0();
   input += synapse0x138f7e0();
   input += synapse0x138f820();
   input += synapse0x138f860();
   input += synapse0x138f8a0();
   input += synapse0x138f8e0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x138ef50() {
   double input = input0x138ef50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x138f920() {
   double input = 0.788925;
   input += synapse0x138fc60();
   input += synapse0x138fca0();
   input += synapse0x138fce0();
   input += synapse0x138fd20();
   input += synapse0x138fd60();
   input += synapse0x138fda0();
   input += synapse0x138fde0();
   input += synapse0x138fe20();
   input += synapse0x138fe60();
   input += synapse0x1388020();
   input += synapse0x1388060();
   input += synapse0x13880a0();
   input += synapse0x13880e0();
   input += synapse0x1388120();
   input += synapse0x1388160();
   input += synapse0x13881a0();
   input += synapse0x138fab0();
   input += synapse0x138faf0();
   input += synapse0x13882f0();
   input += synapse0x1388330();
   input += synapse0x1388370();
   input += synapse0x13883b0();
   input += synapse0x13883f0();
   input += synapse0x1388430();
   return input;
}

double NNfunction_ss_uRsR::neuron0x138f920() {
   double input = input0x138f920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1388470() {
   double input = -1.33799;
   input += synapse0x13887b0();
   input += synapse0x13887f0();
   input += synapse0x1388830();
   input += synapse0x1388870();
   input += synapse0x13888b0();
   input += synapse0x13888f0();
   input += synapse0x1388930();
   input += synapse0x1388970();
   input += synapse0x13889b0();
   input += synapse0x13889f0();
   input += synapse0x1388a30();
   input += synapse0x1388a70();
   input += synapse0x1388ab0();
   input += synapse0x1388af0();
   input += synapse0x1388b30();
   input += synapse0x1388b70();
   input += synapse0x1388600();
   input += synapse0x1388640();
   input += synapse0x1388cc0();
   input += synapse0x1388d00();
   input += synapse0x1388d40();
   input += synapse0x1388d80();
   input += synapse0x1388dc0();
   input += synapse0x1388e00();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1388470() {
   double input = input0x1388470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1388e40() {
   double input = 0.183071;
   input += synapse0x1388fd0();
   input += synapse0x1392060();
   input += synapse0x13920a0();
   input += synapse0x13920e0();
   input += synapse0x1392120();
   input += synapse0x1392160();
   input += synapse0x13921a0();
   input += synapse0x13921e0();
   input += synapse0x1392220();
   input += synapse0x1392260();
   input += synapse0x13922a0();
   input += synapse0x13922e0();
   input += synapse0x1392320();
   input += synapse0x1392360();
   input += synapse0x13923a0();
   input += synapse0x13923e0();
   input += synapse0x1391eb0();
   input += synapse0x1391ef0();
   input += synapse0x1392530();
   input += synapse0x1392570();
   input += synapse0x13925b0();
   input += synapse0x13925f0();
   input += synapse0x1392630();
   input += synapse0x1392670();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1388e40() {
   double input = input0x1388e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13926b0() {
   double input = 0.143329;
   input += synapse0x13929f0();
   input += synapse0x1392a30();
   input += synapse0x1392a70();
   input += synapse0x1392ab0();
   input += synapse0x1392af0();
   input += synapse0x1392b30();
   input += synapse0x1392b70();
   input += synapse0x1392bb0();
   input += synapse0x1392bf0();
   input += synapse0x1392c30();
   input += synapse0x1392c70();
   input += synapse0x1392cb0();
   input += synapse0x1392cf0();
   input += synapse0x1392d30();
   input += synapse0x1392d70();
   input += synapse0x1392db0();
   input += synapse0x1392840();
   input += synapse0x1392880();
   input += synapse0x1392f00();
   input += synapse0x1392f40();
   input += synapse0x1392f80();
   input += synapse0x1392fc0();
   input += synapse0x1393000();
   input += synapse0x1393040();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13926b0() {
   double input = input0x13926b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1393080() {
   double input = 1.92758;
   input += synapse0x13933c0();
   input += synapse0x1393400();
   input += synapse0x1393440();
   input += synapse0x1393480();
   input += synapse0x13934c0();
   input += synapse0x1393500();
   input += synapse0x1393540();
   input += synapse0x1393580();
   input += synapse0x13935c0();
   input += synapse0x1393600();
   input += synapse0x1393640();
   input += synapse0x1393680();
   input += synapse0x13936c0();
   input += synapse0x1393700();
   input += synapse0x1393740();
   input += synapse0x1393780();
   input += synapse0x1393210();
   input += synapse0x1393250();
   input += synapse0x13938d0();
   input += synapse0x1393910();
   input += synapse0x1393950();
   input += synapse0x1393990();
   input += synapse0x13939d0();
   input += synapse0x1393a10();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1393080() {
   double input = input0x1393080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1393a50() {
   double input = -0.896754;
   input += synapse0x1393d90();
   input += synapse0x1393dd0();
   input += synapse0x1393e10();
   input += synapse0x1393e50();
   input += synapse0x1393e90();
   input += synapse0x1393ed0();
   input += synapse0x1393f10();
   input += synapse0x1393f50();
   input += synapse0x1393f90();
   input += synapse0x1393fd0();
   input += synapse0x1394010();
   input += synapse0x1394050();
   input += synapse0x1394090();
   input += synapse0x13940d0();
   input += synapse0x1394110();
   input += synapse0x1394150();
   input += synapse0x1393be0();
   input += synapse0x1393c20();
   input += synapse0x13942a0();
   input += synapse0x13942e0();
   input += synapse0x1394320();
   input += synapse0x1394360();
   input += synapse0x13943a0();
   input += synapse0x13943e0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1393a50() {
   double input = input0x1393a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1394420() {
   double input = 1.01152;
   input += synapse0x1394760();
   input += synapse0x13947a0();
   input += synapse0x13947e0();
   input += synapse0x1394820();
   input += synapse0x1394860();
   input += synapse0x13948a0();
   input += synapse0x13948e0();
   input += synapse0x1394920();
   input += synapse0x1394960();
   input += synapse0x13949a0();
   input += synapse0x13949e0();
   input += synapse0x1394a20();
   input += synapse0x1394a60();
   input += synapse0x1394aa0();
   input += synapse0x1394ae0();
   input += synapse0x1394b20();
   input += synapse0x13945b0();
   input += synapse0x13945f0();
   input += synapse0x1394c70();
   input += synapse0x1394cb0();
   input += synapse0x1394cf0();
   input += synapse0x1394d30();
   input += synapse0x1394d70();
   input += synapse0x1394db0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1394420() {
   double input = input0x1394420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1394df0() {
   double input = -0.542456;
   input += synapse0x1395130();
   input += synapse0x1395170();
   input += synapse0x13951b0();
   input += synapse0x13951f0();
   input += synapse0x1395230();
   input += synapse0x1395270();
   input += synapse0x13952b0();
   input += synapse0x13952f0();
   input += synapse0x1395330();
   input += synapse0x1395370();
   input += synapse0x13953b0();
   input += synapse0x13953f0();
   input += synapse0x1395430();
   input += synapse0x1395470();
   input += synapse0x13954b0();
   input += synapse0x13954f0();
   input += synapse0x1394f80();
   input += synapse0x1394fc0();
   input += synapse0x1395640();
   input += synapse0x1395680();
   input += synapse0x13956c0();
   input += synapse0x1395700();
   input += synapse0x1395740();
   input += synapse0x1395780();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1394df0() {
   double input = input0x1394df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13957c0() {
   double input = -1.40944;
   input += synapse0x1395b00();
   input += synapse0x1395b40();
   input += synapse0x1395b80();
   input += synapse0x1395bc0();
   input += synapse0x1395c00();
   input += synapse0x1395c40();
   input += synapse0x1395c80();
   input += synapse0x1395cc0();
   input += synapse0x1395d00();
   input += synapse0x1395d40();
   input += synapse0x1395d80();
   input += synapse0x1395dc0();
   input += synapse0x1395e00();
   input += synapse0x1395e40();
   input += synapse0x1395e80();
   input += synapse0x1395ec0();
   input += synapse0x1395950();
   input += synapse0x1395990();
   input += synapse0x1396010();
   input += synapse0x1396050();
   input += synapse0x1396090();
   input += synapse0x13960d0();
   input += synapse0x1396110();
   input += synapse0x1396150();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13957c0() {
   double input = input0x13957c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1396190() {
   double input = 5.89093;
   input += synapse0x13964d0();
   input += synapse0x1396510();
   input += synapse0x1396550();
   input += synapse0x1396590();
   input += synapse0x13965d0();
   input += synapse0x1396610();
   input += synapse0x1396650();
   input += synapse0x1396690();
   input += synapse0x13966d0();
   input += synapse0x1396710();
   input += synapse0x1396750();
   input += synapse0x1396790();
   input += synapse0x13967d0();
   input += synapse0x1396810();
   input += synapse0x1396850();
   input += synapse0x1396890();
   input += synapse0x1396320();
   input += synapse0x1396360();
   input += synapse0x13969e0();
   input += synapse0x1396a20();
   input += synapse0x1396a60();
   input += synapse0x1396aa0();
   input += synapse0x1396ae0();
   input += synapse0x1396b20();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1396190() {
   double input = input0x1396190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1396b60() {
   double input = 0.102009;
   input += synapse0x1396ea0();
   input += synapse0x138b470();
   input += synapse0x138b4b0();
   input += synapse0x138b4f0();
   input += synapse0x138b740();
   input += synapse0x138b780();
   input += synapse0x138b7c0();
   input += synapse0x138ba10();
   input += synapse0x138ba50();
   input += synapse0x138bca0();
   input += synapse0x138bce0();
   input += synapse0x138bd20();
   input += synapse0x138bf70();
   input += synapse0x138bfb0();
   input += synapse0x138c200();
   input += synapse0x138c240();
   input += synapse0x1396cf0();
   input += synapse0x1396d30();
   input += synapse0x138c390();
   input += synapse0x138c8a0();
   input += synapse0x138c8e0();
   input += synapse0x138c920();
   input += synapse0x138cb70();
   input += synapse0x138cbb0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1396b60() {
   double input = input0x1396b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x138cbf0() {
   double input = 0.705372;
   input += synapse0x138c460();
   input += synapse0x138c4a0();
   input += synapse0x138c4e0();
   input += synapse0x138c520();
   input += synapse0x138cea0();
   input += synapse0x13991f0();
   input += synapse0x1399230();
   input += synapse0x1399270();
   input += synapse0x13992b0();
   input += synapse0x13992f0();
   input += synapse0x1399330();
   input += synapse0x1399370();
   input += synapse0x13993b0();
   input += synapse0x13993f0();
   input += synapse0x1399430();
   input += synapse0x1399470();
   input += synapse0x138cd80();
   input += synapse0x138cdc0();
   input += synapse0x13995c0();
   input += synapse0x1399600();
   input += synapse0x1399640();
   input += synapse0x1399680();
   input += synapse0x13996c0();
   input += synapse0x1399700();
   return input;
}

double NNfunction_ss_uRsR::neuron0x138cbf0() {
   double input = input0x138cbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1399740() {
   double input = 1.44157;
   input += synapse0x1399a80();
   input += synapse0x1399ac0();
   input += synapse0x1399b00();
   input += synapse0x1399b40();
   input += synapse0x1399b80();
   input += synapse0x1399bc0();
   input += synapse0x1399c00();
   input += synapse0x1399c40();
   input += synapse0x1399c80();
   input += synapse0x1399cc0();
   input += synapse0x1399d00();
   input += synapse0x1399d40();
   input += synapse0x1399d80();
   input += synapse0x1399dc0();
   input += synapse0x1399e00();
   input += synapse0x1399e40();
   input += synapse0x13998d0();
   input += synapse0x1399910();
   input += synapse0x1399f90();
   input += synapse0x1399fd0();
   input += synapse0x139a010();
   input += synapse0x139a050();
   input += synapse0x139a090();
   input += synapse0x139a0d0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1399740() {
   double input = input0x1399740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x139a110() {
   double input = 4.01343;
   input += synapse0x139a450();
   input += synapse0x139a490();
   input += synapse0x139a4d0();
   input += synapse0x139a510();
   input += synapse0x139a550();
   input += synapse0x139a590();
   input += synapse0x139a5d0();
   input += synapse0x139a610();
   input += synapse0x139a650();
   input += synapse0x139a690();
   input += synapse0x139a6d0();
   input += synapse0x139a710();
   input += synapse0x139a750();
   input += synapse0x139a790();
   input += synapse0x139a7d0();
   input += synapse0x139a810();
   input += synapse0x139a2a0();
   input += synapse0x139a2e0();
   input += synapse0x139a960();
   input += synapse0x139a9a0();
   input += synapse0x139a9e0();
   input += synapse0x139aa20();
   input += synapse0x139aa60();
   input += synapse0x139aaa0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x139a110() {
   double input = input0x139a110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x139aae0() {
   double input = 0.224212;
   input += synapse0x139ae20();
   input += synapse0x139ae60();
   input += synapse0x139aea0();
   input += synapse0x139aee0();
   input += synapse0x139af20();
   input += synapse0x139af60();
   input += synapse0x139afa0();
   input += synapse0x139afe0();
   input += synapse0x139b020();
   input += synapse0x139b060();
   input += synapse0x139b0a0();
   input += synapse0x139b0e0();
   input += synapse0x139b120();
   input += synapse0x139b160();
   input += synapse0x139b1a0();
   input += synapse0x139b1e0();
   input += synapse0x139ac70();
   input += synapse0x139acb0();
   input += synapse0x139b330();
   input += synapse0x139b370();
   input += synapse0x139b3b0();
   input += synapse0x139b3f0();
   input += synapse0x139b430();
   input += synapse0x139b470();
   return input;
}

double NNfunction_ss_uRsR::neuron0x139aae0() {
   double input = input0x139aae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x139b4b0() {
   double input = -0.0456058;
   input += synapse0x139b7f0();
   input += synapse0x139b830();
   input += synapse0x139b870();
   input += synapse0x139b8b0();
   input += synapse0x139b8f0();
   input += synapse0x139b930();
   input += synapse0x139b970();
   input += synapse0x139b9b0();
   input += synapse0x139b9f0();
   input += synapse0x139ba30();
   input += synapse0x139ba70();
   input += synapse0x139bab0();
   input += synapse0x139baf0();
   input += synapse0x139bb30();
   input += synapse0x139bb70();
   input += synapse0x139bbb0();
   input += synapse0x139b640();
   input += synapse0x139b680();
   input += synapse0x139bd00();
   input += synapse0x139bd40();
   input += synapse0x139bd80();
   input += synapse0x139bdc0();
   input += synapse0x139be00();
   input += synapse0x139be40();
   return input;
}

double NNfunction_ss_uRsR::neuron0x139b4b0() {
   double input = input0x139b4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x139be80() {
   double input = 1.93349;
   input += synapse0x139c1c0();
   input += synapse0x139c200();
   input += synapse0x139c240();
   input += synapse0x139c280();
   input += synapse0x139c2c0();
   input += synapse0x139c300();
   input += synapse0x139c340();
   input += synapse0x139c380();
   input += synapse0x139c3c0();
   input += synapse0x139c400();
   input += synapse0x139c440();
   input += synapse0x139c480();
   input += synapse0x139c4c0();
   input += synapse0x139c500();
   input += synapse0x139c540();
   input += synapse0x139c580();
   input += synapse0x139c010();
   input += synapse0x139c050();
   input += synapse0x139c6d0();
   input += synapse0x139c710();
   input += synapse0x139c750();
   input += synapse0x139c790();
   input += synapse0x139c7d0();
   input += synapse0x139c810();
   return input;
}

double NNfunction_ss_uRsR::neuron0x139be80() {
   double input = input0x139be80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x139c850() {
   double input = -1.36365;
   input += synapse0x139cb90();
   input += synapse0x139cbd0();
   input += synapse0x139cc10();
   input += synapse0x139cc50();
   input += synapse0x139cc90();
   input += synapse0x139ccd0();
   input += synapse0x139cd10();
   input += synapse0x139cd50();
   input += synapse0x139cd90();
   input += synapse0x139cdd0();
   input += synapse0x139ce10();
   input += synapse0x139ce50();
   input += synapse0x139ce90();
   input += synapse0x139ced0();
   input += synapse0x139cf10();
   input += synapse0x139cf50();
   input += synapse0x139c9e0();
   input += synapse0x139ca20();
   input += synapse0x139d0a0();
   input += synapse0x139d0e0();
   input += synapse0x139d120();
   input += synapse0x139d160();
   input += synapse0x139d1a0();
   input += synapse0x139d1e0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x139c850() {
   double input = input0x139c850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x139d220() {
   double input = -0.00427069;
   input += synapse0x139d560();
   input += synapse0x139d5a0();
   input += synapse0x139d5e0();
   input += synapse0x139d620();
   input += synapse0x139d660();
   input += synapse0x139d6a0();
   input += synapse0x139d6e0();
   input += synapse0x139d720();
   input += synapse0x139d760();
   input += synapse0x139d7a0();
   input += synapse0x139d7e0();
   input += synapse0x139d820();
   input += synapse0x139d860();
   input += synapse0x139d8a0();
   input += synapse0x139d8e0();
   input += synapse0x139d920();
   input += synapse0x139d3b0();
   input += synapse0x139d3f0();
   input += synapse0x139da70();
   input += synapse0x139dab0();
   input += synapse0x139daf0();
   input += synapse0x139db30();
   input += synapse0x139db70();
   input += synapse0x139dbb0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x139d220() {
   double input = input0x139d220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x139dbf0() {
   double input = 0.447982;
   input += synapse0x1386660();
   input += synapse0x13866a0();
   input += synapse0x13866e0();
   input += synapse0x1386720();
   input += synapse0x1386760();
   input += synapse0x13867a0();
   input += synapse0x13867e0();
   input += synapse0x1386820();
   input += synapse0x139e340();
   input += synapse0x139e380();
   input += synapse0x139e3c0();
   input += synapse0x139e400();
   input += synapse0x139e440();
   input += synapse0x139e480();
   input += synapse0x139e4c0();
   input += synapse0x139e500();
   input += synapse0x139dd80();
   input += synapse0x139ddc0();
   input += synapse0x139e650();
   input += synapse0x139e690();
   input += synapse0x139e6d0();
   input += synapse0x139e710();
   input += synapse0x139e750();
   input += synapse0x139e790();
   return input;
}

double NNfunction_ss_uRsR::neuron0x139dbf0() {
   double input = input0x139dbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x139e7d0() {
   double input = 2.09043;
   input += synapse0x139eb10();
   input += synapse0x139eb50();
   input += synapse0x139eb90();
   input += synapse0x139ebd0();
   input += synapse0x139ec10();
   input += synapse0x139ec50();
   input += synapse0x139ec90();
   input += synapse0x139ecd0();
   input += synapse0x139ed10();
   input += synapse0x139ed50();
   input += synapse0x139ed90();
   input += synapse0x139edd0();
   input += synapse0x139ee10();
   input += synapse0x139ee50();
   input += synapse0x139ee90();
   input += synapse0x139eed0();
   input += synapse0x139e960();
   input += synapse0x139e9a0();
   input += synapse0x139f020();
   input += synapse0x139f060();
   input += synapse0x139f0a0();
   input += synapse0x139f0e0();
   input += synapse0x139f120();
   input += synapse0x139f160();
   return input;
}

double NNfunction_ss_uRsR::neuron0x139e7d0() {
   double input = input0x139e7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x139f1a0() {
   double input = -0.456244;
   input += synapse0x139f4e0();
   input += synapse0x139f520();
   input += synapse0x139f560();
   input += synapse0x139f5a0();
   input += synapse0x139f5e0();
   input += synapse0x139f620();
   input += synapse0x139f660();
   input += synapse0x139f6a0();
   input += synapse0x139f6e0();
   input += synapse0x139f720();
   input += synapse0x139f760();
   input += synapse0x139f7a0();
   input += synapse0x139f7e0();
   input += synapse0x139f820();
   input += synapse0x139f860();
   input += synapse0x139f8a0();
   input += synapse0x139f330();
   input += synapse0x139f370();
   input += synapse0x138fea0();
   input += synapse0x138fee0();
   input += synapse0x138ff20();
   input += synapse0x138ff60();
   input += synapse0x138ffa0();
   input += synapse0x138ffe0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x139f1a0() {
   double input = input0x139f1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x1390020() {
   double input = 0.826684;
   input += synapse0x1390360();
   input += synapse0x13903a0();
   input += synapse0x13903e0();
   input += synapse0x1390420();
   input += synapse0x1390460();
   input += synapse0x13904a0();
   input += synapse0x13904e0();
   input += synapse0x1390520();
   input += synapse0x1390560();
   input += synapse0x13905a0();
   input += synapse0x13905e0();
   input += synapse0x1390620();
   input += synapse0x1390660();
   input += synapse0x13906a0();
   input += synapse0x13906e0();
   input += synapse0x1390720();
   input += synapse0x13901b0();
   input += synapse0x13901f0();
   input += synapse0x1390870();
   input += synapse0x13908b0();
   input += synapse0x13908f0();
   input += synapse0x1390930();
   input += synapse0x1390970();
   input += synapse0x13909b0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x1390020() {
   double input = input0x1390020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13909f0() {
   double input = 0.27457;
   input += synapse0x1390d30();
   input += synapse0x1390d70();
   input += synapse0x1390db0();
   input += synapse0x1390df0();
   input += synapse0x1390e30();
   input += synapse0x1390e70();
   input += synapse0x1390eb0();
   input += synapse0x1390ef0();
   input += synapse0x1390f30();
   input += synapse0x1390f70();
   input += synapse0x1390fb0();
   input += synapse0x1390ff0();
   input += synapse0x1391030();
   input += synapse0x1391070();
   input += synapse0x13910b0();
   input += synapse0x13910f0();
   input += synapse0x1390b80();
   input += synapse0x1390bc0();
   input += synapse0x1391240();
   input += synapse0x1391280();
   input += synapse0x13912c0();
   input += synapse0x1391300();
   input += synapse0x1391340();
   input += synapse0x1391380();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13909f0() {
   double input = input0x13909f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13913c0() {
   double input = 0.491951;
   input += synapse0x1391700();
   input += synapse0x1391740();
   input += synapse0x1391780();
   input += synapse0x13917c0();
   input += synapse0x1391800();
   input += synapse0x1391840();
   input += synapse0x1391880();
   input += synapse0x13918c0();
   input += synapse0x1391900();
   input += synapse0x1391940();
   input += synapse0x1391980();
   input += synapse0x13919c0();
   input += synapse0x1391a00();
   input += synapse0x1391a40();
   input += synapse0x1391a80();
   input += synapse0x1391ac0();
   input += synapse0x1391550();
   input += synapse0x1391590();
   input += synapse0x1391c10();
   input += synapse0x1391c50();
   input += synapse0x1391c90();
   input += synapse0x1391cd0();
   input += synapse0x1391d10();
   input += synapse0x1391d50();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13913c0() {
   double input = input0x13913c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13a3a00() {
   double input = -0.0549189;
   input += synapse0x13a3c20();
   input += synapse0x13a3c60();
   input += synapse0x13a3ca0();
   input += synapse0x13a3ce0();
   input += synapse0x13a3d20();
   input += synapse0x13a3d60();
   input += synapse0x13a3da0();
   input += synapse0x13a3de0();
   input += synapse0x13a3e20();
   input += synapse0x13a3e60();
   input += synapse0x13a3ea0();
   input += synapse0x13a3ee0();
   input += synapse0x13a3f20();
   input += synapse0x13a3f60();
   input += synapse0x13a3fa0();
   input += synapse0x13a3fe0();
   input += synapse0x1391d90();
   input += synapse0x1391dd0();
   input += synapse0x13a4130();
   input += synapse0x13a4170();
   input += synapse0x13a41b0();
   input += synapse0x13a41f0();
   input += synapse0x13a4230();
   input += synapse0x13a4270();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13a3a00() {
   double input = input0x13a3a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13a42b0() {
   double input = 0.00805213;
   input += synapse0x13a45f0();
   input += synapse0x13a4630();
   input += synapse0x13a4670();
   input += synapse0x13a46b0();
   input += synapse0x13a46f0();
   input += synapse0x13a4730();
   input += synapse0x13a4770();
   input += synapse0x13a47b0();
   input += synapse0x13a47f0();
   input += synapse0x13a4830();
   input += synapse0x13a4870();
   input += synapse0x13a48b0();
   input += synapse0x13a48f0();
   input += synapse0x13a4930();
   input += synapse0x13a4970();
   input += synapse0x13a49b0();
   input += synapse0x13a4440();
   input += synapse0x13a4480();
   input += synapse0x13a4b00();
   input += synapse0x13a4b40();
   input += synapse0x13a4b80();
   input += synapse0x13a4bc0();
   input += synapse0x13a4c00();
   input += synapse0x13a4c40();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13a42b0() {
   double input = input0x13a42b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13a4c80() {
   double input = 0.475953;
   input += synapse0x13a4fc0();
   input += synapse0x13a5000();
   input += synapse0x13a5040();
   input += synapse0x13a5080();
   input += synapse0x13a50c0();
   input += synapse0x13a5100();
   input += synapse0x13a5140();
   input += synapse0x13a5180();
   input += synapse0x13a51c0();
   input += synapse0x13a5200();
   input += synapse0x13a5240();
   input += synapse0x13a5280();
   input += synapse0x13a52c0();
   input += synapse0x13a5300();
   input += synapse0x13a5340();
   input += synapse0x13a5380();
   input += synapse0x13a4e10();
   input += synapse0x13a4e50();
   input += synapse0x13a54d0();
   input += synapse0x13a5510();
   input += synapse0x13a5550();
   input += synapse0x13a5590();
   input += synapse0x13a55d0();
   input += synapse0x13a5610();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13a4c80() {
   double input = input0x13a4c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13a5650() {
   double input = -0.322709;
   input += synapse0x13a5990();
   input += synapse0x13a59d0();
   input += synapse0x13a5a10();
   input += synapse0x13a5a50();
   input += synapse0x13a5a90();
   input += synapse0x13a5ad0();
   input += synapse0x13a5b10();
   input += synapse0x13a5b50();
   input += synapse0x13a5b90();
   input += synapse0x13a5bd0();
   input += synapse0x13a5c10();
   input += synapse0x13a5c50();
   input += synapse0x13a5c90();
   input += synapse0x13a5cd0();
   input += synapse0x13a5d10();
   input += synapse0x13a5d50();
   input += synapse0x13a57e0();
   input += synapse0x13a5820();
   input += synapse0x13a5ea0();
   input += synapse0x13a5ee0();
   input += synapse0x13a5f20();
   input += synapse0x13a5f60();
   input += synapse0x13a5fa0();
   input += synapse0x13a5fe0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13a5650() {
   double input = input0x13a5650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13ac850() {
   double input = 0.581263;
   input += synapse0x1382580();
   input += synapse0x13825c0();
   input += synapse0x1383a90();
   input += synapse0x1383ad0();
   input += synapse0x1384460();
   input += synapse0x13844a0();
   input += synapse0x1385230();
   input += synapse0x1385270();
   input += synapse0x1385c00();
   input += synapse0x1385c40();
   input += synapse0x13865d0();
   input += synapse0x1386610();
   input += synapse0x13870b0();
   input += synapse0x13870f0();
   input += synapse0x1387a80();
   input += synapse0x1387ac0();
   input += synapse0x1384b60();
   input += synapse0x1384ba0();
   input += synapse0x1389630();
   input += synapse0x1389670();
   input += synapse0x138a000();
   input += synapse0x138a040();
   input += synapse0x138a9d0();
   input += synapse0x138aa10();
   input += synapse0x138b3a0();
   input += synapse0x138b3e0();
   input += synapse0x137f510();
   input += synapse0x137f550();
   input += synapse0x138d490();
   input += synapse0x138d4d0();
   input += synapse0x138de60();
   input += synapse0x138dea0();
   input += synapse0x138e830();
   input += synapse0x138e870();
   input += synapse0x138f200();
   input += synapse0x138f240();
   input += synapse0x138fbd0();
   input += synapse0x138fc10();
   input += synapse0x1388720();
   input += synapse0x1388760();
   input += synapse0x1391fd0();
   input += synapse0x1392010();
   input += synapse0x1392960();
   input += synapse0x13929a0();
   input += synapse0x1393330();
   input += synapse0x1393370();
   input += synapse0x1393d00();
   input += synapse0x1393d40();
   input += synapse0x13946d0();
   input += synapse0x1394710();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13ac850() {
   double input = input0x13ac850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13acbf0() {
   double input = 1.23508;
   input += synapse0x1396e10();
   input += synapse0x1396e50();
   input += synapse0x138c3d0();
   input += synapse0x138c410();
   input += synapse0x13999f0();
   input += synapse0x1399a30();
   input += synapse0x139a3c0();
   input += synapse0x139a400();
   input += synapse0x139ad90();
   input += synapse0x139add0();
   input += synapse0x139b760();
   input += synapse0x139b7a0();
   input += synapse0x139c130();
   input += synapse0x139c170();
   input += synapse0x139cb00();
   input += synapse0x139cb40();
   input += synapse0x139d4d0();
   input += synapse0x139d510();
   input += synapse0x139dea0();
   input += synapse0x139dee0();
   input += synapse0x139ea80();
   input += synapse0x139eac0();
   input += synapse0x139f450();
   input += synapse0x139f490();
   input += synapse0x13902d0();
   input += synapse0x1390310();
   input += synapse0x1390ca0();
   input += synapse0x1390ce0();
   input += synapse0x1391670();
   input += synapse0x13916b0();
   input += synapse0x13a3b90();
   input += synapse0x13a3bd0();
   input += synapse0x13a4560();
   input += synapse0x13a45a0();
   input += synapse0x13a4f30();
   input += synapse0x13a4f70();
   input += synapse0x13a5900();
   input += synapse0x13a5940();
   input += synapse0x13817f0();
   input += synapse0x1381830();
   input += synapse0x13950a0();
   input += synapse0x13950e0();
   input += synapse0x13a6020();
   input += synapse0x13a6060();
   input += synapse0x13a60a0();
   input += synapse0x13a60e0();
   input += synapse0x13acf90();
   input += synapse0x13acfd0();
   input += synapse0x13ad010();
   input += synapse0x13ad050();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13acbf0() {
   double input = input0x13acbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13ad090() {
   double input = -0.619114;
   input += synapse0x13ad3d0();
   input += synapse0x13ad410();
   input += synapse0x13ad450();
   input += synapse0x13ad490();
   input += synapse0x13ad4d0();
   input += synapse0x13ad510();
   input += synapse0x13ad550();
   input += synapse0x13ad590();
   input += synapse0x13ad5d0();
   input += synapse0x13ad610();
   input += synapse0x13ad650();
   input += synapse0x13ad690();
   input += synapse0x13ad6d0();
   input += synapse0x13ad710();
   input += synapse0x13ad750();
   input += synapse0x13ad790();
   input += synapse0x13ad220();
   input += synapse0x13ad260();
   input += synapse0x13ad8e0();
   input += synapse0x13ad920();
   input += synapse0x13ad960();
   input += synapse0x13ad9a0();
   input += synapse0x13ad9e0();
   input += synapse0x13ada20();
   input += synapse0x13ada60();
   input += synapse0x13adaa0();
   input += synapse0x13adae0();
   input += synapse0x13adb20();
   input += synapse0x13adb60();
   input += synapse0x13adba0();
   input += synapse0x13adbe0();
   input += synapse0x13adc20();
   input += synapse0x13ad7d0();
   input += synapse0x13ad810();
   input += synapse0x13ad850();
   input += synapse0x13ad890();
   input += synapse0x13ade70();
   input += synapse0x13adeb0();
   input += synapse0x13adef0();
   input += synapse0x13adf30();
   input += synapse0x13adf70();
   input += synapse0x13adfb0();
   input += synapse0x13adff0();
   input += synapse0x13ae030();
   input += synapse0x13ae070();
   input += synapse0x13ae0b0();
   input += synapse0x13ae0f0();
   input += synapse0x13ae130();
   input += synapse0x13ae170();
   input += synapse0x13ae1b0();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13ad090() {
   double input = input0x13ad090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13ae1f0() {
   double input = -0.736481;
   input += synapse0x13ae530();
   input += synapse0x13ae570();
   input += synapse0x13ae5b0();
   input += synapse0x13ae5f0();
   input += synapse0x13ae630();
   input += synapse0x13ae670();
   input += synapse0x13ae6b0();
   input += synapse0x13ae6f0();
   input += synapse0x13ae730();
   input += synapse0x13ae770();
   input += synapse0x13ae7b0();
   input += synapse0x13ae7f0();
   input += synapse0x13ae830();
   input += synapse0x13ae870();
   input += synapse0x13ae8b0();
   input += synapse0x13ae8f0();
   input += synapse0x13ae380();
   input += synapse0x13ae3c0();
   input += synapse0x13aea40();
   input += synapse0x13aea80();
   input += synapse0x13aeac0();
   input += synapse0x13aeb00();
   input += synapse0x13aeb40();
   input += synapse0x13aeb80();
   input += synapse0x13aebc0();
   input += synapse0x13aec00();
   input += synapse0x13aec40();
   input += synapse0x13aec80();
   input += synapse0x13aecc0();
   input += synapse0x13aed00();
   input += synapse0x13aed40();
   input += synapse0x13aed80();
   input += synapse0x13ae930();
   input += synapse0x13ae970();
   input += synapse0x13ae9b0();
   input += synapse0x13ae9f0();
   input += synapse0x13aefd0();
   input += synapse0x13af010();
   input += synapse0x13af050();
   input += synapse0x13af090();
   input += synapse0x13af0d0();
   input += synapse0x13af110();
   input += synapse0x13af150();
   input += synapse0x13af190();
   input += synapse0x13af1d0();
   input += synapse0x13af210();
   input += synapse0x13af250();
   input += synapse0x13af290();
   input += synapse0x13af2d0();
   input += synapse0x13af310();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13ae1f0() {
   double input = input0x13ae1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13af350() {
   double input = 0.753461;
   input += synapse0x13af690();
   input += synapse0x13af6d0();
   input += synapse0x13af710();
   input += synapse0x13af750();
   input += synapse0x13af790();
   input += synapse0x13af7d0();
   input += synapse0x13af810();
   input += synapse0x13af850();
   input += synapse0x13af890();
   input += synapse0x13af8d0();
   input += synapse0x13af910();
   input += synapse0x13af950();
   input += synapse0x13af990();
   input += synapse0x13af9d0();
   input += synapse0x13afa10();
   input += synapse0x13afa50();
   input += synapse0x13af4e0();
   input += synapse0x13af520();
   input += synapse0x13afba0();
   input += synapse0x13afbe0();
   input += synapse0x13afc20();
   input += synapse0x13afc60();
   input += synapse0x13afca0();
   input += synapse0x13afce0();
   input += synapse0x13afd20();
   input += synapse0x13afd60();
   input += synapse0x13afda0();
   input += synapse0x13afde0();
   input += synapse0x13afe20();
   input += synapse0x13afe60();
   input += synapse0x13afea0();
   input += synapse0x13afee0();
   input += synapse0x13afa90();
   input += synapse0x13afad0();
   input += synapse0x13afb10();
   input += synapse0x13afb50();
   input += synapse0x13b0130();
   input += synapse0x13b0170();
   input += synapse0x13b01b0();
   input += synapse0x13b01f0();
   input += synapse0x13b0230();
   input += synapse0x13b0270();
   input += synapse0x13b02b0();
   input += synapse0x13b02f0();
   input += synapse0x13b0330();
   input += synapse0x13b0370();
   input += synapse0x13b03b0();
   input += synapse0x13b03f0();
   input += synapse0x13b0430();
   input += synapse0x13b0470();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13af350() {
   double input = input0x13af350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRsR::input0x13b04b0() {
   double input = -0.239307;
   input += synapse0x1381590();
   input += synapse0x13b06d0();
   input += synapse0x13b0710();
   input += synapse0x13b0750();
   input += synapse0x13b0790();
   return input;
}

double NNfunction_ss_uRsR::neuron0x13b04b0() {
   double input = input0x13b04b0();
   return (input * 1)+0;
}

double NNfunction_ss_uRsR::synapse0x113c3e0() {
   return (neuron0x137c570()*0.16529);
}

double NNfunction_ss_uRsR::synapse0x137c430() {
   return (neuron0x137c8b0()*-0.440421);
}

double NNfunction_ss_uRsR::synapse0x137c470() {
   return (neuron0x137cbf0()*-0.0804953);
}

double NNfunction_ss_uRsR::synapse0x1381880() {
   return (neuron0x137cf30()*-0.563371);
}

double NNfunction_ss_uRsR::synapse0x13818c0() {
   return (neuron0x137d270()*-0.195956);
}

double NNfunction_ss_uRsR::synapse0x1381900() {
   return (neuron0x137d5b0()*0.0589151);
}

double NNfunction_ss_uRsR::synapse0x1381940() {
   return (neuron0x137d8f0()*0.0915382);
}

double NNfunction_ss_uRsR::synapse0x1381980() {
   return (neuron0x137dc30()*-0.253397);
}

double NNfunction_ss_uRsR::synapse0x13819c0() {
   return (neuron0x137df70()*-0.102887);
}

double NNfunction_ss_uRsR::synapse0x1381a00() {
   return (neuron0x137e2b0()*-0.0568864);
}

double NNfunction_ss_uRsR::synapse0x1381a40() {
   return (neuron0x137e5f0()*0.0357818);
}

double NNfunction_ss_uRsR::synapse0x1381a80() {
   return (neuron0x137e930()*-0.350609);
}

double NNfunction_ss_uRsR::synapse0x1381ac0() {
   return (neuron0x137ec70()*-0.30638);
}

double NNfunction_ss_uRsR::synapse0x1381b00() {
   return (neuron0x137efb0()*0.0761702);
}

double NNfunction_ss_uRsR::synapse0x1381b40() {
   return (neuron0x137f2f0()*-0.0859922);
}

double NNfunction_ss_uRsR::synapse0x1381b80() {
   return (neuron0x137f630()*0.0550585);
}

double NNfunction_ss_uRsR::synapse0x137c3a0() {
   return (neuron0x137f970()*0.13165);
}

double NNfunction_ss_uRsR::synapse0x137c3e0() {
   return (neuron0x137fed0()*0.273403);
}

double NNfunction_ss_uRsR::synapse0x112dc80() {
   return (neuron0x13800f0()*0.093421);
}

double NNfunction_ss_uRsR::synapse0x112dcc0() {
   return (neuron0x1380430()*0.0233301);
}

double NNfunction_ss_uRsR::synapse0x1381de0() {
   return (neuron0x1380770()*0.0061295);
}

double NNfunction_ss_uRsR::synapse0x1381e20() {
   return (neuron0x1380ab0()*-0.0291155);
}

double NNfunction_ss_uRsR::synapse0x1381e60() {
   return (neuron0x1380df0()*0.0308326);
}

double NNfunction_ss_uRsR::synapse0x1381ea0() {
   return (neuron0x1381130()*-0.109568);
}

double NNfunction_ss_uRsR::synapse0x1382220() {
   return (neuron0x137c570()*-0.00141365);
}

double NNfunction_ss_uRsR::synapse0x1382260() {
   return (neuron0x137c8b0()*-0.0147714);
}

double NNfunction_ss_uRsR::synapse0x13822a0() {
   return (neuron0x137cbf0()*0.00409704);
}

double NNfunction_ss_uRsR::synapse0x13822e0() {
   return (neuron0x137cf30()*3.98123);
}

double NNfunction_ss_uRsR::synapse0x1382320() {
   return (neuron0x137d270()*0.00316692);
}

double NNfunction_ss_uRsR::synapse0x1382360() {
   return (neuron0x137d5b0()*-0.00512896);
}

double NNfunction_ss_uRsR::synapse0x13823a0() {
   return (neuron0x137d8f0()*-0.00768839);
}

double NNfunction_ss_uRsR::synapse0x13823e0() {
   return (neuron0x137dc30()*-0.00822737);
}

double NNfunction_ss_uRsR::synapse0x1382420() {
   return (neuron0x137df70()*-0.000782636);
}

double NNfunction_ss_uRsR::synapse0x1381cd0() {
   return (neuron0x137e2b0()*-0.001891);
}

double NNfunction_ss_uRsR::synapse0x1381d10() {
   return (neuron0x137e5f0()*-0.00970891);
}

double NNfunction_ss_uRsR::synapse0x1381d50() {
   return (neuron0x137e930()*-0.0269898);
}

double NNfunction_ss_uRsR::synapse0x1381d90() {
   return (neuron0x137ec70()*-0.016606);
}

double NNfunction_ss_uRsR::synapse0x1382670() {
   return (neuron0x137efb0()*-0.001948);
}

double NNfunction_ss_uRsR::synapse0x13826b0() {
   return (neuron0x137f2f0()*0.31275);
}

double NNfunction_ss_uRsR::synapse0x13826f0() {
   return (neuron0x137f630()*-0.00863867);
}

double NNfunction_ss_uRsR::synapse0x1382070() {
   return (neuron0x137f970()*0.00765243);
}

double NNfunction_ss_uRsR::synapse0x13820b0() {
   return (neuron0x137fed0()*0.0106325);
}

double NNfunction_ss_uRsR::synapse0x1382840() {
   return (neuron0x13800f0()*0.184175);
}

double NNfunction_ss_uRsR::synapse0x1382880() {
   return (neuron0x1380430()*-0.00542403);
}

double NNfunction_ss_uRsR::synapse0x13828c0() {
   return (neuron0x1380770()*-0.00318653);
}

double NNfunction_ss_uRsR::synapse0x1382900() {
   return (neuron0x1380ab0()*-0.00609036);
}

double NNfunction_ss_uRsR::synapse0x1382940() {
   return (neuron0x1380df0()*-0.00434101);
}

double NNfunction_ss_uRsR::synapse0x1382980() {
   return (neuron0x1381130()*-0.00447563);
}

double NNfunction_ss_uRsR::synapse0x1382d00() {
   return (neuron0x137c570()*0.124713);
}

double NNfunction_ss_uRsR::synapse0x1382d40() {
   return (neuron0x137c8b0()*0.367595);
}

double NNfunction_ss_uRsR::synapse0x1382d80() {
   return (neuron0x137cbf0()*0.0207369);
}

double NNfunction_ss_uRsR::synapse0x1382dc0() {
   return (neuron0x137cf30()*0.298948);
}

double NNfunction_ss_uRsR::synapse0x1382e00() {
   return (neuron0x137d270()*-0.452624);
}

double NNfunction_ss_uRsR::synapse0x1382e40() {
   return (neuron0x137d5b0()*0.647112);
}

double NNfunction_ss_uRsR::synapse0x1382e80() {
   return (neuron0x137d8f0()*0.027703);
}

double NNfunction_ss_uRsR::synapse0x1382ec0() {
   return (neuron0x137dc30()*0.368463);
}

double NNfunction_ss_uRsR::synapse0x1382f00() {
   return (neuron0x137df70()*-0.369368);
}

double NNfunction_ss_uRsR::synapse0x1382f40() {
   return (neuron0x137e2b0()*0.669598);
}

double NNfunction_ss_uRsR::synapse0x1382f80() {
   return (neuron0x137e5f0()*-0.12937);
}

double NNfunction_ss_uRsR::synapse0x1382fc0() {
   return (neuron0x137e930()*0.392805);
}

double NNfunction_ss_uRsR::synapse0x1383000() {
   return (neuron0x137ec70()*-0.106007);
}

double NNfunction_ss_uRsR::synapse0x1383040() {
   return (neuron0x137efb0()*0.430118);
}

double NNfunction_ss_uRsR::synapse0x1383080() {
   return (neuron0x137f2f0()*0.0644206);
}

double NNfunction_ss_uRsR::synapse0x13830c0() {
   return (neuron0x137f630()*-0.490354);
}

double NNfunction_ss_uRsR::synapse0x1382b50() {
   return (neuron0x137f970()*-0.20223);
}

double NNfunction_ss_uRsR::synapse0x1382b90() {
   return (neuron0x137fed0()*-0.486314);
}

double NNfunction_ss_uRsR::synapse0x113bad0() {
   return (neuron0x13800f0()*-0.866247);
}

double NNfunction_ss_uRsR::synapse0x113bb10() {
   return (neuron0x1380430()*0.000202896);
}

double NNfunction_ss_uRsR::synapse0x136b600() {
   return (neuron0x1380770()*-0.706317);
}

double NNfunction_ss_uRsR::synapse0x136b640() {
   return (neuron0x1380ab0()*0.294373);
}

double NNfunction_ss_uRsR::synapse0x136b680() {
   return (neuron0x1380df0()*-0.416661);
}

double NNfunction_ss_uRsR::synapse0x137c4b0() {
   return (neuron0x1381130()*-0.278653);
}

double NNfunction_ss_uRsR::synapse0x1382610() {
   return (neuron0x137c570()*0.0704379);
}

double NNfunction_ss_uRsR::synapse0x137c4f0() {
   return (neuron0x137c8b0()*0.709048);
}

double NNfunction_ss_uRsR::synapse0x137c530() {
   return (neuron0x137cbf0()*0.526999);
}

double NNfunction_ss_uRsR::synapse0x1383210() {
   return (neuron0x137cf30()*0.687714);
}

double NNfunction_ss_uRsR::synapse0x1383250() {
   return (neuron0x137d270()*0.161565);
}

double NNfunction_ss_uRsR::synapse0x1383290() {
   return (neuron0x137d5b0()*0.0681197);
}

double NNfunction_ss_uRsR::synapse0x13832d0() {
   return (neuron0x137d8f0()*-0.217978);
}

double NNfunction_ss_uRsR::synapse0x1383310() {
   return (neuron0x137dc30()*-0.101034);
}

double NNfunction_ss_uRsR::synapse0x1383350() {
   return (neuron0x137df70()*0.516149);
}

double NNfunction_ss_uRsR::synapse0x1383390() {
   return (neuron0x137e2b0()*-0.168474);
}

double NNfunction_ss_uRsR::synapse0x13833d0() {
   return (neuron0x137e5f0()*0.166701);
}

double NNfunction_ss_uRsR::synapse0x1383410() {
   return (neuron0x137e930()*-0.196813);
}

double NNfunction_ss_uRsR::synapse0x1383450() {
   return (neuron0x137ec70()*-0.646976);
}

double NNfunction_ss_uRsR::synapse0x1383490() {
   return (neuron0x137efb0()*-0.139487);
}

double NNfunction_ss_uRsR::synapse0x13834d0() {
   return (neuron0x137f2f0()*0.371985);
}

double NNfunction_ss_uRsR::synapse0x1383510() {
   return (neuron0x137f630()*0.709797);
}

double NNfunction_ss_uRsR::synapse0x1382460() {
   return (neuron0x137f970()*0.292866);
}

double NNfunction_ss_uRsR::synapse0x13824a0() {
   return (neuron0x137fed0()*-0.34141);
}

double NNfunction_ss_uRsR::synapse0x1383660() {
   return (neuron0x13800f0()*-0.442068);
}

double NNfunction_ss_uRsR::synapse0x13836a0() {
   return (neuron0x1380430()*-0.591194);
}

double NNfunction_ss_uRsR::synapse0x13836e0() {
   return (neuron0x1380770()*0.192618);
}

double NNfunction_ss_uRsR::synapse0x1383720() {
   return (neuron0x1380ab0()*0.713722);
}

double NNfunction_ss_uRsR::synapse0x1383760() {
   return (neuron0x1380df0()*-0.118899);
}

double NNfunction_ss_uRsR::synapse0x13837a0() {
   return (neuron0x1381130()*-0.168556);
}

double NNfunction_ss_uRsR::synapse0x1383b20() {
   return (neuron0x137c570()*0.0339941);
}

double NNfunction_ss_uRsR::synapse0x1383b60() {
   return (neuron0x137c8b0()*0.0239046);
}

double NNfunction_ss_uRsR::synapse0x1383ba0() {
   return (neuron0x137cbf0()*0.0187479);
}

double NNfunction_ss_uRsR::synapse0x1383be0() {
   return (neuron0x137cf30()*0.347302);
}

double NNfunction_ss_uRsR::synapse0x1383c20() {
   return (neuron0x137d270()*0.0259319);
}

double NNfunction_ss_uRsR::synapse0x1383c60() {
   return (neuron0x137d5b0()*0.00106493);
}

double NNfunction_ss_uRsR::synapse0x1383ca0() {
   return (neuron0x137d8f0()*0.0017483);
}

double NNfunction_ss_uRsR::synapse0x1383ce0() {
   return (neuron0x137dc30()*0.0110957);
}

double NNfunction_ss_uRsR::synapse0x1383d20() {
   return (neuron0x137df70()*0.0285482);
}

double NNfunction_ss_uRsR::synapse0x1383d60() {
   return (neuron0x137e2b0()*0.014711);
}

double NNfunction_ss_uRsR::synapse0x1383da0() {
   return (neuron0x137e5f0()*-0.0654365);
}

double NNfunction_ss_uRsR::synapse0x1383de0() {
   return (neuron0x137e930()*0.00154982);
}

double NNfunction_ss_uRsR::synapse0x1383e20() {
   return (neuron0x137ec70()*0.00199896);
}

double NNfunction_ss_uRsR::synapse0x1383e60() {
   return (neuron0x137efb0()*0.03902);
}

double NNfunction_ss_uRsR::synapse0x1383ea0() {
   return (neuron0x137f2f0()*-0.904488);
}

double NNfunction_ss_uRsR::synapse0x1383ee0() {
   return (neuron0x137f630()*-0.0276961);
}

double NNfunction_ss_uRsR::synapse0x1383970() {
   return (neuron0x137f970()*0.0537882);
}

double NNfunction_ss_uRsR::synapse0x13839b0() {
   return (neuron0x137fed0()*0.000823523);
}

double NNfunction_ss_uRsR::synapse0x1384030() {
   return (neuron0x13800f0()*-1.09717);
}

double NNfunction_ss_uRsR::synapse0x1384070() {
   return (neuron0x1380430()*0.0151515);
}

double NNfunction_ss_uRsR::synapse0x13840b0() {
   return (neuron0x1380770()*-0.012325);
}

double NNfunction_ss_uRsR::synapse0x13840f0() {
   return (neuron0x1380ab0()*0.00489784);
}

double NNfunction_ss_uRsR::synapse0x1384130() {
   return (neuron0x1380df0()*0.0621947);
}

double NNfunction_ss_uRsR::synapse0x1384170() {
   return (neuron0x1381130()*-0.0516844);
}

double NNfunction_ss_uRsR::synapse0x13844f0() {
   return (neuron0x137c570()*0.217875);
}

double NNfunction_ss_uRsR::synapse0x1384530() {
   return (neuron0x137c8b0()*0.200183);
}

double NNfunction_ss_uRsR::synapse0x1384570() {
   return (neuron0x137cbf0()*0.544894);
}

double NNfunction_ss_uRsR::synapse0x13845b0() {
   return (neuron0x137cf30()*-0.39987);
}

double NNfunction_ss_uRsR::synapse0x13845f0() {
   return (neuron0x137d270()*-0.0401535);
}

double NNfunction_ss_uRsR::synapse0x1384630() {
   return (neuron0x137d5b0()*-0.268925);
}

double NNfunction_ss_uRsR::synapse0x1384670() {
   return (neuron0x137d8f0()*0.0368337);
}

double NNfunction_ss_uRsR::synapse0x13846b0() {
   return (neuron0x137dc30()*0.334592);
}

double NNfunction_ss_uRsR::synapse0x13846f0() {
   return (neuron0x137df70()*0.484105);
}

double NNfunction_ss_uRsR::synapse0x113be40() {
   return (neuron0x137e2b0()*-0.0664205);
}

double NNfunction_ss_uRsR::synapse0x113be80() {
   return (neuron0x137e5f0()*-0.173353);
}

double NNfunction_ss_uRsR::synapse0x113bec0() {
   return (neuron0x137e930()*-0.322373);
}

double NNfunction_ss_uRsR::synapse0x113bf00() {
   return (neuron0x137ec70()*-0.4679);
}

double NNfunction_ss_uRsR::synapse0x113bf40() {
   return (neuron0x137efb0()*-0.0260415);
}

double NNfunction_ss_uRsR::synapse0x113bf80() {
   return (neuron0x137f2f0()*0.187513);
}

double NNfunction_ss_uRsR::synapse0x113bfc0() {
   return (neuron0x137f630()*0.210421);
}

double NNfunction_ss_uRsR::synapse0x1384340() {
   return (neuron0x137f970()*-0.32033);
}

double NNfunction_ss_uRsR::synapse0x1384380() {
   return (neuron0x137fed0()*-0.342973);
}

double NNfunction_ss_uRsR::synapse0x113c110() {
   return (neuron0x13800f0()*0.0464881);
}

double NNfunction_ss_uRsR::synapse0x113c150() {
   return (neuron0x1380430()*-0.339188);
}

double NNfunction_ss_uRsR::synapse0x113c190() {
   return (neuron0x1380770()*0.404932);
}

double NNfunction_ss_uRsR::synapse0x113c1d0() {
   return (neuron0x1380ab0()*-0.113996);
}

double NNfunction_ss_uRsR::synapse0x113c210() {
   return (neuron0x1380df0()*-0.0137113);
}

double NNfunction_ss_uRsR::synapse0x1384f40() {
   return (neuron0x1381130()*0.00391313);
}

double NNfunction_ss_uRsR::synapse0x13852c0() {
   return (neuron0x137c570()*0.220679);
}

double NNfunction_ss_uRsR::synapse0x1385300() {
   return (neuron0x137c8b0()*0.102683);
}

double NNfunction_ss_uRsR::synapse0x1385340() {
   return (neuron0x137cbf0()*0.0544846);
}

double NNfunction_ss_uRsR::synapse0x1385380() {
   return (neuron0x137cf30()*0.310408);
}

double NNfunction_ss_uRsR::synapse0x13853c0() {
   return (neuron0x137d270()*0.60948);
}

double NNfunction_ss_uRsR::synapse0x1385400() {
   return (neuron0x137d5b0()*0.339937);
}

double NNfunction_ss_uRsR::synapse0x1385440() {
   return (neuron0x137d8f0()*-0.97189);
}

double NNfunction_ss_uRsR::synapse0x1385480() {
   return (neuron0x137dc30()*0.264054);
}

double NNfunction_ss_uRsR::synapse0x13854c0() {
   return (neuron0x137df70()*0.557282);
}

double NNfunction_ss_uRsR::synapse0x1385500() {
   return (neuron0x137e2b0()*-0.287542);
}

double NNfunction_ss_uRsR::synapse0x1385540() {
   return (neuron0x137e5f0()*0.0637104);
}

double NNfunction_ss_uRsR::synapse0x1385580() {
   return (neuron0x137e930()*-0.464476);
}

double NNfunction_ss_uRsR::synapse0x13855c0() {
   return (neuron0x137ec70()*0.082703);
}

double NNfunction_ss_uRsR::synapse0x1385600() {
   return (neuron0x137efb0()*0.487171);
}

double NNfunction_ss_uRsR::synapse0x1385640() {
   return (neuron0x137f2f0()*0.318927);
}

double NNfunction_ss_uRsR::synapse0x1385680() {
   return (neuron0x137f630()*-0.111564);
}

double NNfunction_ss_uRsR::synapse0x1385110() {
   return (neuron0x137f970()*-0.185246);
}

double NNfunction_ss_uRsR::synapse0x1385150() {
   return (neuron0x137fed0()*-0.267267);
}

double NNfunction_ss_uRsR::synapse0x13857d0() {
   return (neuron0x13800f0()*0.368068);
}

double NNfunction_ss_uRsR::synapse0x1385810() {
   return (neuron0x1380430()*-0.280847);
}

double NNfunction_ss_uRsR::synapse0x1385850() {
   return (neuron0x1380770()*0.128802);
}

double NNfunction_ss_uRsR::synapse0x1385890() {
   return (neuron0x1380ab0()*-0.348243);
}

double NNfunction_ss_uRsR::synapse0x13858d0() {
   return (neuron0x1380df0()*0.112407);
}

double NNfunction_ss_uRsR::synapse0x1385910() {
   return (neuron0x1381130()*0.518063);
}

double NNfunction_ss_uRsR::synapse0x1385c90() {
   return (neuron0x137c570()*-0.0054821);
}

double NNfunction_ss_uRsR::synapse0x1385cd0() {
   return (neuron0x137c8b0()*-0.0223277);
}

double NNfunction_ss_uRsR::synapse0x1385d10() {
   return (neuron0x137cbf0()*-0.032883);
}

double NNfunction_ss_uRsR::synapse0x1385d50() {
   return (neuron0x137cf30()*0.127108);
}

double NNfunction_ss_uRsR::synapse0x1385d90() {
   return (neuron0x137d270()*-0.0185545);
}

double NNfunction_ss_uRsR::synapse0x1385dd0() {
   return (neuron0x137d5b0()*-0.00865013);
}

double NNfunction_ss_uRsR::synapse0x1385e10() {
   return (neuron0x137d8f0()*0.000656183);
}

double NNfunction_ss_uRsR::synapse0x1385e50() {
   return (neuron0x137dc30()*-0.0106385);
}

double NNfunction_ss_uRsR::synapse0x1385e90() {
   return (neuron0x137df70()*-0.0107733);
}

double NNfunction_ss_uRsR::synapse0x1385ed0() {
   return (neuron0x137e2b0()*-0.00145569);
}

double NNfunction_ss_uRsR::synapse0x1385f10() {
   return (neuron0x137e5f0()*0.0172072);
}

double NNfunction_ss_uRsR::synapse0x1385f50() {
   return (neuron0x137e930()*0.0187553);
}

double NNfunction_ss_uRsR::synapse0x1385f90() {
   return (neuron0x137ec70()*0.00880832);
}

double NNfunction_ss_uRsR::synapse0x1385fd0() {
   return (neuron0x137efb0()*0.00132624);
}

double NNfunction_ss_uRsR::synapse0x1386010() {
   return (neuron0x137f2f0()*2.43256);
}

double NNfunction_ss_uRsR::synapse0x1386050() {
   return (neuron0x137f630()*0.000199027);
}

double NNfunction_ss_uRsR::synapse0x1385ae0() {
   return (neuron0x137f970()*0.0117835);
}

double NNfunction_ss_uRsR::synapse0x1385b20() {
   return (neuron0x137fed0()*-0.0323437);
}

double NNfunction_ss_uRsR::synapse0x13861a0() {
   return (neuron0x13800f0()*-0.648624);
}

double NNfunction_ss_uRsR::synapse0x13861e0() {
   return (neuron0x1380430()*-0.0166122);
}

double NNfunction_ss_uRsR::synapse0x1386220() {
   return (neuron0x1380770()*0.00521783);
}

double NNfunction_ss_uRsR::synapse0x1386260() {
   return (neuron0x1380ab0()*-0.018058);
}

double NNfunction_ss_uRsR::synapse0x13862a0() {
   return (neuron0x1380df0()*-0.00163316);
}

double NNfunction_ss_uRsR::synapse0x13862e0() {
   return (neuron0x1381130()*0.0454288);
}

double NNfunction_ss_uRsR::synapse0x137fdc0() {
   return (neuron0x137c570()*0.02328);
}

double NNfunction_ss_uRsR::synapse0x137fe00() {
   return (neuron0x137c8b0()*0.543653);
}

double NNfunction_ss_uRsR::synapse0x137fe40() {
   return (neuron0x137cbf0()*-0.0103352);
}

double NNfunction_ss_uRsR::synapse0x137fe80() {
   return (neuron0x137cf30()*-0.384937);
}

double NNfunction_ss_uRsR::synapse0x1386870() {
   return (neuron0x137d270()*0.0544103);
}

double NNfunction_ss_uRsR::synapse0x13868b0() {
   return (neuron0x137d5b0()*-0.00599728);
}

double NNfunction_ss_uRsR::synapse0x13868f0() {
   return (neuron0x137d8f0()*-0.00525082);
}

double NNfunction_ss_uRsR::synapse0x1386930() {
   return (neuron0x137dc30()*-0.00973112);
}

double NNfunction_ss_uRsR::synapse0x1386970() {
   return (neuron0x137df70()*-0.0701516);
}

double NNfunction_ss_uRsR::synapse0x13869b0() {
   return (neuron0x137e2b0()*0.0227366);
}

double NNfunction_ss_uRsR::synapse0x13869f0() {
   return (neuron0x137e5f0()*0.0424653);
}

double NNfunction_ss_uRsR::synapse0x1386a30() {
   return (neuron0x137e930()*0.090664);
}

double NNfunction_ss_uRsR::synapse0x1386a70() {
   return (neuron0x137ec70()*0.0592623);
}

double NNfunction_ss_uRsR::synapse0x1386ab0() {
   return (neuron0x137efb0()*0.00283986);
}

double NNfunction_ss_uRsR::synapse0x1386af0() {
   return (neuron0x137f2f0()*-0.307954);
}

double NNfunction_ss_uRsR::synapse0x1386b30() {
   return (neuron0x137f630()*-5.99678e-05);
}

double NNfunction_ss_uRsR::synapse0x13864b0() {
   return (neuron0x137f970()*-0.0355877);
}

double NNfunction_ss_uRsR::synapse0x13864f0() {
   return (neuron0x137fed0()*-0.041485);
}

double NNfunction_ss_uRsR::synapse0x1386c80() {
   return (neuron0x13800f0()*-0.197575);
}

double NNfunction_ss_uRsR::synapse0x1386cc0() {
   return (neuron0x1380430()*-0.12068);
}

double NNfunction_ss_uRsR::synapse0x1386d00() {
   return (neuron0x1380770()*-0.0503973);
}

double NNfunction_ss_uRsR::synapse0x1386d40() {
   return (neuron0x1380ab0()*0.0162845);
}

double NNfunction_ss_uRsR::synapse0x1386d80() {
   return (neuron0x1380df0()*-0.00758697);
}

double NNfunction_ss_uRsR::synapse0x1386dc0() {
   return (neuron0x1381130()*0.0208962);
}

double NNfunction_ss_uRsR::synapse0x1387140() {
   return (neuron0x137c570()*-0.516523);
}

double NNfunction_ss_uRsR::synapse0x1387180() {
   return (neuron0x137c8b0()*-0.486287);
}

double NNfunction_ss_uRsR::synapse0x13871c0() {
   return (neuron0x137cbf0()*-0.0914228);
}

double NNfunction_ss_uRsR::synapse0x1387200() {
   return (neuron0x137cf30()*-1.28492);
}

double NNfunction_ss_uRsR::synapse0x1387240() {
   return (neuron0x137d270()*-0.176852);
}

double NNfunction_ss_uRsR::synapse0x1387280() {
   return (neuron0x137d5b0()*-0.0139234);
}

double NNfunction_ss_uRsR::synapse0x13872c0() {
   return (neuron0x137d8f0()*-0.0911162);
}

double NNfunction_ss_uRsR::synapse0x1387300() {
   return (neuron0x137dc30()*-0.0159097);
}

double NNfunction_ss_uRsR::synapse0x1387340() {
   return (neuron0x137df70()*-0.250794);
}

double NNfunction_ss_uRsR::synapse0x1387380() {
   return (neuron0x137e2b0()*0.563041);
}

double NNfunction_ss_uRsR::synapse0x13873c0() {
   return (neuron0x137e5f0()*-0.273165);
}

double NNfunction_ss_uRsR::synapse0x1387400() {
   return (neuron0x137e930()*0.343522);
}

double NNfunction_ss_uRsR::synapse0x1387440() {
   return (neuron0x137ec70()*0.0761711);
}

double NNfunction_ss_uRsR::synapse0x1387480() {
   return (neuron0x137efb0()*0.0654696);
}

double NNfunction_ss_uRsR::synapse0x13874c0() {
   return (neuron0x137f2f0()*-0.2681);
}

double NNfunction_ss_uRsR::synapse0x1387500() {
   return (neuron0x137f630()*-0.178817);
}

double NNfunction_ss_uRsR::synapse0x1386f90() {
   return (neuron0x137f970()*0.274891);
}

double NNfunction_ss_uRsR::synapse0x1386fd0() {
   return (neuron0x137fed0()*0.541769);
}

double NNfunction_ss_uRsR::synapse0x1387650() {
   return (neuron0x13800f0()*-0.0892857);
}

double NNfunction_ss_uRsR::synapse0x1387690() {
   return (neuron0x1380430()*0.0161132);
}

double NNfunction_ss_uRsR::synapse0x13876d0() {
   return (neuron0x1380770()*-0.297819);
}

double NNfunction_ss_uRsR::synapse0x1387710() {
   return (neuron0x1380ab0()*-0.500814);
}

double NNfunction_ss_uRsR::synapse0x1387750() {
   return (neuron0x1380df0()*0.0323541);
}

double NNfunction_ss_uRsR::synapse0x1387790() {
   return (neuron0x1381130()*-0.063062);
}

double NNfunction_ss_uRsR::synapse0x1387b10() {
   return (neuron0x137c570()*0.133218);
}

double NNfunction_ss_uRsR::synapse0x1387b50() {
   return (neuron0x137c8b0()*-0.446595);
}

double NNfunction_ss_uRsR::synapse0x1387b90() {
   return (neuron0x137cbf0()*-0.0688298);
}

double NNfunction_ss_uRsR::synapse0x1387bd0() {
   return (neuron0x137cf30()*-0.119454);
}

double NNfunction_ss_uRsR::synapse0x1387c10() {
   return (neuron0x137d270()*0.202641);
}

double NNfunction_ss_uRsR::synapse0x1387c50() {
   return (neuron0x137d5b0()*0.0373148);
}

double NNfunction_ss_uRsR::synapse0x1387c90() {
   return (neuron0x137d8f0()*-0.313266);
}

double NNfunction_ss_uRsR::synapse0x1387cd0() {
   return (neuron0x137dc30()*0.0909646);
}

double NNfunction_ss_uRsR::synapse0x1387d10() {
   return (neuron0x137df70()*0.343919);
}

double NNfunction_ss_uRsR::synapse0x1387d50() {
   return (neuron0x137e2b0()*-0.0363867);
}

double NNfunction_ss_uRsR::synapse0x1387d90() {
   return (neuron0x137e5f0()*-0.239103);
}

double NNfunction_ss_uRsR::synapse0x1387dd0() {
   return (neuron0x137e930()*-0.0226095);
}

double NNfunction_ss_uRsR::synapse0x1387e10() {
   return (neuron0x137ec70()*0.594643);
}

double NNfunction_ss_uRsR::synapse0x1387e50() {
   return (neuron0x137efb0()*-0.261946);
}

double NNfunction_ss_uRsR::synapse0x1387e90() {
   return (neuron0x137f2f0()*-0.81942);
}

double NNfunction_ss_uRsR::synapse0x1387ed0() {
   return (neuron0x137f630()*-0.184341);
}

double NNfunction_ss_uRsR::synapse0x1387960() {
   return (neuron0x137f970()*-0.274977);
}

double NNfunction_ss_uRsR::synapse0x13879a0() {
   return (neuron0x137fed0()*0.163039);
}

double NNfunction_ss_uRsR::synapse0x1384730() {
   return (neuron0x13800f0()*-0.457877);
}

double NNfunction_ss_uRsR::synapse0x1384770() {
   return (neuron0x1380430()*-0.190004);
}

double NNfunction_ss_uRsR::synapse0x13847b0() {
   return (neuron0x1380770()*-0.133026);
}

double NNfunction_ss_uRsR::synapse0x13847f0() {
   return (neuron0x1380ab0()*0.366935);
}

double NNfunction_ss_uRsR::synapse0x1384830() {
   return (neuron0x1380df0()*0.157293);
}

double NNfunction_ss_uRsR::synapse0x1384870() {
   return (neuron0x1381130()*-0.0269657);
}

double NNfunction_ss_uRsR::synapse0x1384bf0() {
   return (neuron0x137c570()*-0.0170055);
}

double NNfunction_ss_uRsR::synapse0x1384c30() {
   return (neuron0x137c8b0()*0.0284779);
}

double NNfunction_ss_uRsR::synapse0x1384c70() {
   return (neuron0x137cbf0()*0.0595235);
}

double NNfunction_ss_uRsR::synapse0x1384cb0() {
   return (neuron0x137cf30()*-1.79462);
}

double NNfunction_ss_uRsR::synapse0x1384cf0() {
   return (neuron0x137d270()*0.104367);
}

double NNfunction_ss_uRsR::synapse0x1384d30() {
   return (neuron0x137d5b0()*0.0392062);
}

double NNfunction_ss_uRsR::synapse0x1384d70() {
   return (neuron0x137d8f0()*0.0148412);
}

double NNfunction_ss_uRsR::synapse0x1384db0() {
   return (neuron0x137dc30()*0.0318861);
}

double NNfunction_ss_uRsR::synapse0x1384df0() {
   return (neuron0x137df70()*-0.0755648);
}

double NNfunction_ss_uRsR::synapse0x1384e30() {
   return (neuron0x137e2b0()*-0.0285491);
}

double NNfunction_ss_uRsR::synapse0x1384e70() {
   return (neuron0x137e5f0()*0.0185983);
}

double NNfunction_ss_uRsR::synapse0x1384eb0() {
   return (neuron0x137e930()*-0.0408156);
}

double NNfunction_ss_uRsR::synapse0x1384ef0() {
   return (neuron0x137ec70()*0.0202037);
}

double NNfunction_ss_uRsR::synapse0x1389030() {
   return (neuron0x137efb0()*0.00371308);
}

double NNfunction_ss_uRsR::synapse0x1389070() {
   return (neuron0x137f2f0()*0.434285);
}

double NNfunction_ss_uRsR::synapse0x13890b0() {
   return (neuron0x137f630()*0.0565657);
}

double NNfunction_ss_uRsR::synapse0x1384a40() {
   return (neuron0x137f970()*-0.0377486);
}

double NNfunction_ss_uRsR::synapse0x1384a80() {
   return (neuron0x137fed0()*-0.092266);
}

double NNfunction_ss_uRsR::synapse0x1389200() {
   return (neuron0x13800f0()*-0.90351);
}

double NNfunction_ss_uRsR::synapse0x1389240() {
   return (neuron0x1380430()*-0.0927041);
}

double NNfunction_ss_uRsR::synapse0x1389280() {
   return (neuron0x1380770()*-0.0817917);
}

double NNfunction_ss_uRsR::synapse0x13892c0() {
   return (neuron0x1380ab0()*0.0398114);
}

double NNfunction_ss_uRsR::synapse0x1389300() {
   return (neuron0x1380df0()*-0.020699);
}

double NNfunction_ss_uRsR::synapse0x1389340() {
   return (neuron0x1381130()*0.12128);
}

double NNfunction_ss_uRsR::synapse0x13896c0() {
   return (neuron0x137c570()*-0.492983);
}

double NNfunction_ss_uRsR::synapse0x1389700() {
   return (neuron0x137c8b0()*-0.0902892);
}

double NNfunction_ss_uRsR::synapse0x1389740() {
   return (neuron0x137cbf0()*-0.403905);
}

double NNfunction_ss_uRsR::synapse0x1389780() {
   return (neuron0x137cf30()*0.144956);
}

double NNfunction_ss_uRsR::synapse0x13897c0() {
   return (neuron0x137d270()*-0.235898);
}

double NNfunction_ss_uRsR::synapse0x1389800() {
   return (neuron0x137d5b0()*-0.701926);
}

double NNfunction_ss_uRsR::synapse0x1389840() {
   return (neuron0x137d8f0()*0.116163);
}

double NNfunction_ss_uRsR::synapse0x1389880() {
   return (neuron0x137dc30()*-0.113726);
}

double NNfunction_ss_uRsR::synapse0x13898c0() {
   return (neuron0x137df70()*0.361069);
}

double NNfunction_ss_uRsR::synapse0x1389900() {
   return (neuron0x137e2b0()*-0.235459);
}

double NNfunction_ss_uRsR::synapse0x1389940() {
   return (neuron0x137e5f0()*0.0398469);
}

double NNfunction_ss_uRsR::synapse0x1389980() {
   return (neuron0x137e930()*-0.0272833);
}

double NNfunction_ss_uRsR::synapse0x13899c0() {
   return (neuron0x137ec70()*0.0881665);
}

double NNfunction_ss_uRsR::synapse0x1389a00() {
   return (neuron0x137efb0()*0.659202);
}

double NNfunction_ss_uRsR::synapse0x1389a40() {
   return (neuron0x137f2f0()*-0.379098);
}

double NNfunction_ss_uRsR::synapse0x1389a80() {
   return (neuron0x137f630()*0.146978);
}

double NNfunction_ss_uRsR::synapse0x1389510() {
   return (neuron0x137f970()*0.187261);
}

double NNfunction_ss_uRsR::synapse0x1389550() {
   return (neuron0x137fed0()*0.00930154);
}

double NNfunction_ss_uRsR::synapse0x1389bd0() {
   return (neuron0x13800f0()*0.112355);
}

double NNfunction_ss_uRsR::synapse0x1389c10() {
   return (neuron0x1380430()*0.390914);
}

double NNfunction_ss_uRsR::synapse0x1389c50() {
   return (neuron0x1380770()*-0.178528);
}

double NNfunction_ss_uRsR::synapse0x1389c90() {
   return (neuron0x1380ab0()*-0.0455081);
}

double NNfunction_ss_uRsR::synapse0x1389cd0() {
   return (neuron0x1380df0()*0.123634);
}

double NNfunction_ss_uRsR::synapse0x1389d10() {
   return (neuron0x1381130()*-0.00456369);
}

double NNfunction_ss_uRsR::synapse0x138a090() {
   return (neuron0x137c570()*0.0544756);
}

double NNfunction_ss_uRsR::synapse0x138a0d0() {
   return (neuron0x137c8b0()*-0.0566156);
}

double NNfunction_ss_uRsR::synapse0x138a110() {
   return (neuron0x137cbf0()*-0.0285762);
}

double NNfunction_ss_uRsR::synapse0x138a150() {
   return (neuron0x137cf30()*0.902017);
}

double NNfunction_ss_uRsR::synapse0x138a190() {
   return (neuron0x137d270()*0.013912);
}

double NNfunction_ss_uRsR::synapse0x138a1d0() {
   return (neuron0x137d5b0()*-0.0151735);
}

double NNfunction_ss_uRsR::synapse0x138a210() {
   return (neuron0x137d8f0()*0.00387434);
}

double NNfunction_ss_uRsR::synapse0x138a250() {
   return (neuron0x137dc30()*0.0116367);
}

double NNfunction_ss_uRsR::synapse0x138a290() {
   return (neuron0x137df70()*-0.0137285);
}

double NNfunction_ss_uRsR::synapse0x138a2d0() {
   return (neuron0x137e2b0()*-0.00713273);
}

double NNfunction_ss_uRsR::synapse0x138a310() {
   return (neuron0x137e5f0()*-0.0572008);
}

double NNfunction_ss_uRsR::synapse0x138a350() {
   return (neuron0x137e930()*0.00971287);
}

double NNfunction_ss_uRsR::synapse0x138a390() {
   return (neuron0x137ec70()*-0.0412118);
}

double NNfunction_ss_uRsR::synapse0x138a3d0() {
   return (neuron0x137efb0()*-0.0904859);
}

double NNfunction_ss_uRsR::synapse0x138a410() {
   return (neuron0x137f2f0()*1.29314);
}

double NNfunction_ss_uRsR::synapse0x138a450() {
   return (neuron0x137f630()*0.000519596);
}

double NNfunction_ss_uRsR::synapse0x1389ee0() {
   return (neuron0x137f970()*0.0221355);
}

double NNfunction_ss_uRsR::synapse0x1389f20() {
   return (neuron0x137fed0()*0.0209133);
}

double NNfunction_ss_uRsR::synapse0x138a5a0() {
   return (neuron0x13800f0()*-0.916172);
}

double NNfunction_ss_uRsR::synapse0x138a5e0() {
   return (neuron0x1380430()*0.0551285);
}

double NNfunction_ss_uRsR::synapse0x138a620() {
   return (neuron0x1380770()*0.0157694);
}

double NNfunction_ss_uRsR::synapse0x138a660() {
   return (neuron0x1380ab0()*-0.00395539);
}

double NNfunction_ss_uRsR::synapse0x138a6a0() {
   return (neuron0x1380df0()*-0.00822457);
}

double NNfunction_ss_uRsR::synapse0x138a6e0() {
   return (neuron0x1381130()*-0.0302467);
}

double NNfunction_ss_uRsR::synapse0x138aa60() {
   return (neuron0x137c570()*0.290374);
}

double NNfunction_ss_uRsR::synapse0x138aaa0() {
   return (neuron0x137c8b0()*0.230022);
}

double NNfunction_ss_uRsR::synapse0x138aae0() {
   return (neuron0x137cbf0()*-0.314827);
}

double NNfunction_ss_uRsR::synapse0x138ab20() {
   return (neuron0x137cf30()*0.127183);
}

double NNfunction_ss_uRsR::synapse0x138ab60() {
   return (neuron0x137d270()*-0.00692974);
}

double NNfunction_ss_uRsR::synapse0x138aba0() {
   return (neuron0x137d5b0()*-0.16599);
}

double NNfunction_ss_uRsR::synapse0x138abe0() {
   return (neuron0x137d8f0()*0.435845);
}

double NNfunction_ss_uRsR::synapse0x138ac20() {
   return (neuron0x137dc30()*0.442654);
}

double NNfunction_ss_uRsR::synapse0x138ac60() {
   return (neuron0x137df70()*-0.0792679);
}

double NNfunction_ss_uRsR::synapse0x138aca0() {
   return (neuron0x137e2b0()*0.54346);
}

double NNfunction_ss_uRsR::synapse0x138ace0() {
   return (neuron0x137e5f0()*0.452549);
}

double NNfunction_ss_uRsR::synapse0x138ad20() {
   return (neuron0x137e930()*-0.472067);
}

double NNfunction_ss_uRsR::synapse0x138ad60() {
   return (neuron0x137ec70()*0.11169);
}

double NNfunction_ss_uRsR::synapse0x138ada0() {
   return (neuron0x137efb0()*0.712238);
}

double NNfunction_ss_uRsR::synapse0x138ade0() {
   return (neuron0x137f2f0()*0.724448);
}

double NNfunction_ss_uRsR::synapse0x138ae20() {
   return (neuron0x137f630()*0.0069087);
}

double NNfunction_ss_uRsR::synapse0x138a8b0() {
   return (neuron0x137f970()*0.438669);
}

double NNfunction_ss_uRsR::synapse0x138a8f0() {
   return (neuron0x137fed0()*-0.16869);
}

double NNfunction_ss_uRsR::synapse0x138af70() {
   return (neuron0x13800f0()*0.0869528);
}

double NNfunction_ss_uRsR::synapse0x138afb0() {
   return (neuron0x1380430()*0.494509);
}

double NNfunction_ss_uRsR::synapse0x138aff0() {
   return (neuron0x1380770()*0.0402518);
}

double NNfunction_ss_uRsR::synapse0x138b030() {
   return (neuron0x1380ab0()*0.455247);
}

double NNfunction_ss_uRsR::synapse0x138b070() {
   return (neuron0x1380df0()*0.0752627);
}

double NNfunction_ss_uRsR::synapse0x138b0b0() {
   return (neuron0x1381130()*-0.148719);
}

double NNfunction_ss_uRsR::synapse0x138b430() {
   return (neuron0x137c570()*0.0344386);
}

double NNfunction_ss_uRsR::synapse0x137c790() {
   return (neuron0x137c8b0()*0.066474);
}

double NNfunction_ss_uRsR::synapse0x137c7d0() {
   return (neuron0x137cbf0()*0.0286502);
}

double NNfunction_ss_uRsR::synapse0x137cad0() {
   return (neuron0x137cf30()*3.85104);
}

double NNfunction_ss_uRsR::synapse0x137cb10() {
   return (neuron0x137d270()*0.00338194);
}

double NNfunction_ss_uRsR::synapse0x137ce10() {
   return (neuron0x137d5b0()*0.0135776);
}

double NNfunction_ss_uRsR::synapse0x137ce50() {
   return (neuron0x137d8f0()*0.0174775);
}

double NNfunction_ss_uRsR::synapse0x137d150() {
   return (neuron0x137dc30()*0.00705612);
}

double NNfunction_ss_uRsR::synapse0x137d190() {
   return (neuron0x137df70()*-0.012525);
}

double NNfunction_ss_uRsR::synapse0x137d490() {
   return (neuron0x137e2b0()*-0.00713762);
}

double NNfunction_ss_uRsR::synapse0x137d4d0() {
   return (neuron0x137e5f0()*-0.0754207);
}

double NNfunction_ss_uRsR::synapse0x137d7d0() {
   return (neuron0x137e930()*-0.0553365);
}

double NNfunction_ss_uRsR::synapse0x137d810() {
   return (neuron0x137ec70()*-0.0286174);
}

double NNfunction_ss_uRsR::synapse0x137db10() {
   return (neuron0x137efb0()*-0.0583095);
}

double NNfunction_ss_uRsR::synapse0x137db50() {
   return (neuron0x137f2f0()*0.717781);
}

double NNfunction_ss_uRsR::synapse0x137de50() {
   return (neuron0x137f630()*0.0181295);
}

double NNfunction_ss_uRsR::synapse0x137de90() {
   return (neuron0x137f970()*0.0269083);
}

double NNfunction_ss_uRsR::synapse0x137e190() {
   return (neuron0x137fed0()*-0.0456753);
}

double NNfunction_ss_uRsR::synapse0x137e1d0() {
   return (neuron0x13800f0()*-1.70023);
}

double NNfunction_ss_uRsR::synapse0x137e4d0() {
   return (neuron0x1380430()*-0.006004);
}

double NNfunction_ss_uRsR::synapse0x137e510() {
   return (neuron0x1380770()*-0.0383924);
}

double NNfunction_ss_uRsR::synapse0x137e810() {
   return (neuron0x1380ab0()*-0.0196095);
}

double NNfunction_ss_uRsR::synapse0x137e850() {
   return (neuron0x1380df0()*-0.0385638);
}

double NNfunction_ss_uRsR::synapse0x137eb50() {
   return (neuron0x1381130()*-0.00467684);
}

double NNfunction_ss_uRsR::synapse0x137eb90() {
   return (neuron0x137c570()*0.00255536);
}

double NNfunction_ss_uRsR::synapse0x137f850() {
   return (neuron0x137c8b0()*0.0588655);
}

double NNfunction_ss_uRsR::synapse0x137f890() {
   return (neuron0x137cbf0()*-0.0419679);
}

double NNfunction_ss_uRsR::synapse0x138b280() {
   return (neuron0x137cf30()*5.10486);
}

double NNfunction_ss_uRsR::synapse0x138b2c0() {
   return (neuron0x137d270()*-0.0435106);
}

double NNfunction_ss_uRsR::synapse0x137fb90() {
   return (neuron0x137d5b0()*-0.0768215);
}

double NNfunction_ss_uRsR::synapse0x137fbd0() {
   return (neuron0x137d8f0()*0.00126987);
}

double NNfunction_ss_uRsR::synapse0x112db60() {
   return (neuron0x137dc30()*-0.00750152);
}

double NNfunction_ss_uRsR::synapse0x112dba0() {
   return (neuron0x137df70()*0.0435659);
}

double NNfunction_ss_uRsR::synapse0x1380310() {
   return (neuron0x137e2b0()*0.0521658);
}

double NNfunction_ss_uRsR::synapse0x1380350() {
   return (neuron0x137e5f0()*0.0230372);
}

double NNfunction_ss_uRsR::synapse0x1380650() {
   return (neuron0x137e930()*-0.0578863);
}

double NNfunction_ss_uRsR::synapse0x1380690() {
   return (neuron0x137ec70()*0.0248161);
}

double NNfunction_ss_uRsR::synapse0x1380990() {
   return (neuron0x137efb0()*-0.0413838);
}

double NNfunction_ss_uRsR::synapse0x13809d0() {
   return (neuron0x137f2f0()*-2.70961);
}

double NNfunction_ss_uRsR::synapse0x1380cd0() {
   return (neuron0x137f630()*-0.0434317);
}

double NNfunction_ss_uRsR::synapse0x1380d10() {
   return (neuron0x137f970()*-0.00120042);
}

double NNfunction_ss_uRsR::synapse0x1381010() {
   return (neuron0x137fed0()*0.0303196);
}

double NNfunction_ss_uRsR::synapse0x1381050() {
   return (neuron0x13800f0()*0.508142);
}

double NNfunction_ss_uRsR::synapse0x1381350() {
   return (neuron0x1380430()*0.121472);
}

double NNfunction_ss_uRsR::synapse0x1381390() {
   return (neuron0x1380770()*-0.00356953);
}

double NNfunction_ss_uRsR::synapse0x137ee90() {
   return (neuron0x1380ab0()*-0.00850524);
}

double NNfunction_ss_uRsR::synapse0x137eed0() {
   return (neuron0x1380df0()*0.0211838);
}

double NNfunction_ss_uRsR::synapse0x138d1a0() {
   return (neuron0x1381130()*0.00747594);
}

double NNfunction_ss_uRsR::synapse0x138d520() {
   return (neuron0x137c570()*-0.0216258);
}

double NNfunction_ss_uRsR::synapse0x138d560() {
   return (neuron0x137c8b0()*0.0360155);
}

double NNfunction_ss_uRsR::synapse0x138d5a0() {
   return (neuron0x137cbf0()*-0.0114191);
}

double NNfunction_ss_uRsR::synapse0x138d5e0() {
   return (neuron0x137cf30()*-1.44302);
}

double NNfunction_ss_uRsR::synapse0x138d620() {
   return (neuron0x137d270()*0.0486581);
}

double NNfunction_ss_uRsR::synapse0x138d660() {
   return (neuron0x137d5b0()*0.00929844);
}

double NNfunction_ss_uRsR::synapse0x138d6a0() {
   return (neuron0x137d8f0()*-0.0493295);
}

double NNfunction_ss_uRsR::synapse0x138d6e0() {
   return (neuron0x137dc30()*-0.00979006);
}

double NNfunction_ss_uRsR::synapse0x138d720() {
   return (neuron0x137df70()*-0.00760403);
}

double NNfunction_ss_uRsR::synapse0x138d760() {
   return (neuron0x137e2b0()*0.0300368);
}

double NNfunction_ss_uRsR::synapse0x138d7a0() {
   return (neuron0x137e5f0()*0.0202449);
}

double NNfunction_ss_uRsR::synapse0x138d7e0() {
   return (neuron0x137e930()*0.0381668);
}

double NNfunction_ss_uRsR::synapse0x138d820() {
   return (neuron0x137ec70()*0.0190461);
}

double NNfunction_ss_uRsR::synapse0x138d860() {
   return (neuron0x137efb0()*0.0533153);
}

double NNfunction_ss_uRsR::synapse0x138d8a0() {
   return (neuron0x137f2f0()*-0.702927);
}

double NNfunction_ss_uRsR::synapse0x138d8e0() {
   return (neuron0x137f630()*-0.0226352);
}

double NNfunction_ss_uRsR::synapse0x138d370() {
   return (neuron0x137f970()*-0.0536273);
}

double NNfunction_ss_uRsR::synapse0x138d3b0() {
   return (neuron0x137fed0()*0.0363705);
}

double NNfunction_ss_uRsR::synapse0x138da30() {
   return (neuron0x13800f0()*-0.559302);
}

double NNfunction_ss_uRsR::synapse0x138da70() {
   return (neuron0x1380430()*-0.0288396);
}

double NNfunction_ss_uRsR::synapse0x138dab0() {
   return (neuron0x1380770()*-0.00964411);
}

double NNfunction_ss_uRsR::synapse0x138daf0() {
   return (neuron0x1380ab0()*0.00903633);
}

double NNfunction_ss_uRsR::synapse0x138db30() {
   return (neuron0x1380df0()*0.0446709);
}

double NNfunction_ss_uRsR::synapse0x138db70() {
   return (neuron0x1381130()*0.0530417);
}

double NNfunction_ss_uRsR::synapse0x138def0() {
   return (neuron0x137c570()*-0.00909726);
}

double NNfunction_ss_uRsR::synapse0x138df30() {
   return (neuron0x137c8b0()*-0.339066);
}

double NNfunction_ss_uRsR::synapse0x138df70() {
   return (neuron0x137cbf0()*-0.0335473);
}

double NNfunction_ss_uRsR::synapse0x138dfb0() {
   return (neuron0x137cf30()*-0.710403);
}

double NNfunction_ss_uRsR::synapse0x138dff0() {
   return (neuron0x137d270()*0.0704715);
}

double NNfunction_ss_uRsR::synapse0x138e030() {
   return (neuron0x137d5b0()*0.266088);
}

double NNfunction_ss_uRsR::synapse0x138e070() {
   return (neuron0x137d8f0()*0.157809);
}

double NNfunction_ss_uRsR::synapse0x138e0b0() {
   return (neuron0x137dc30()*0.261925);
}

double NNfunction_ss_uRsR::synapse0x138e0f0() {
   return (neuron0x137df70()*-0.0168628);
}

double NNfunction_ss_uRsR::synapse0x138e130() {
   return (neuron0x137e2b0()*0.144993);
}

double NNfunction_ss_uRsR::synapse0x138e170() {
   return (neuron0x137e5f0()*0.043733);
}

double NNfunction_ss_uRsR::synapse0x138e1b0() {
   return (neuron0x137e930()*0.0498131);
}

double NNfunction_ss_uRsR::synapse0x138e1f0() {
   return (neuron0x137ec70()*-0.435411);
}

double NNfunction_ss_uRsR::synapse0x138e230() {
   return (neuron0x137efb0()*0.00765919);
}

double NNfunction_ss_uRsR::synapse0x138e270() {
   return (neuron0x137f2f0()*0.397569);
}

double NNfunction_ss_uRsR::synapse0x138e2b0() {
   return (neuron0x137f630()*-0.356129);
}

double NNfunction_ss_uRsR::synapse0x138dd40() {
   return (neuron0x137f970()*-0.0382221);
}

double NNfunction_ss_uRsR::synapse0x138dd80() {
   return (neuron0x137fed0()*0.0869326);
}

double NNfunction_ss_uRsR::synapse0x138e400() {
   return (neuron0x13800f0()*0.618936);
}

double NNfunction_ss_uRsR::synapse0x138e440() {
   return (neuron0x1380430()*-0.271268);
}

double NNfunction_ss_uRsR::synapse0x138e480() {
   return (neuron0x1380770()*0.0555508);
}

double NNfunction_ss_uRsR::synapse0x138e4c0() {
   return (neuron0x1380ab0()*-0.0208936);
}

double NNfunction_ss_uRsR::synapse0x138e500() {
   return (neuron0x1380df0()*-0.00157369);
}

double NNfunction_ss_uRsR::synapse0x138e540() {
   return (neuron0x1381130()*0.0464395);
}

double NNfunction_ss_uRsR::synapse0x138e8c0() {
   return (neuron0x137c570()*-0.503378);
}

double NNfunction_ss_uRsR::synapse0x138e900() {
   return (neuron0x137c8b0()*-0.133728);
}

double NNfunction_ss_uRsR::synapse0x138e940() {
   return (neuron0x137cbf0()*-0.0313873);
}

double NNfunction_ss_uRsR::synapse0x138e980() {
   return (neuron0x137cf30()*0.0594439);
}

double NNfunction_ss_uRsR::synapse0x138e9c0() {
   return (neuron0x137d270()*0.246216);
}

double NNfunction_ss_uRsR::synapse0x138ea00() {
   return (neuron0x137d5b0()*0.126717);
}

double NNfunction_ss_uRsR::synapse0x138ea40() {
   return (neuron0x137d8f0()*-0.247583);
}

double NNfunction_ss_uRsR::synapse0x138ea80() {
   return (neuron0x137dc30()*0.764997);
}

double NNfunction_ss_uRsR::synapse0x138eac0() {
   return (neuron0x137df70()*0.613486);
}

double NNfunction_ss_uRsR::synapse0x138eb00() {
   return (neuron0x137e2b0()*0.287714);
}

double NNfunction_ss_uRsR::synapse0x138eb40() {
   return (neuron0x137e5f0()*0.383606);
}

double NNfunction_ss_uRsR::synapse0x138eb80() {
   return (neuron0x137e930()*0.117277);
}

double NNfunction_ss_uRsR::synapse0x138ebc0() {
   return (neuron0x137ec70()*-0.209057);
}

double NNfunction_ss_uRsR::synapse0x138ec00() {
   return (neuron0x137efb0()*-0.55364);
}

double NNfunction_ss_uRsR::synapse0x138ec40() {
   return (neuron0x137f2f0()*-0.494029);
}

double NNfunction_ss_uRsR::synapse0x138ec80() {
   return (neuron0x137f630()*0.156121);
}

double NNfunction_ss_uRsR::synapse0x138e710() {
   return (neuron0x137f970()*0.385742);
}

double NNfunction_ss_uRsR::synapse0x138e750() {
   return (neuron0x137fed0()*0.237925);
}

double NNfunction_ss_uRsR::synapse0x138edd0() {
   return (neuron0x13800f0()*-1.27819);
}

double NNfunction_ss_uRsR::synapse0x138ee10() {
   return (neuron0x1380430()*-0.281119);
}

double NNfunction_ss_uRsR::synapse0x138ee50() {
   return (neuron0x1380770()*0.0615756);
}

double NNfunction_ss_uRsR::synapse0x138ee90() {
   return (neuron0x1380ab0()*0.167417);
}

double NNfunction_ss_uRsR::synapse0x138eed0() {
   return (neuron0x1380df0()*-0.00550889);
}

double NNfunction_ss_uRsR::synapse0x138ef10() {
   return (neuron0x1381130()*0.256553);
}

double NNfunction_ss_uRsR::synapse0x138f290() {
   return (neuron0x137c570()*0.034111);
}

double NNfunction_ss_uRsR::synapse0x138f2d0() {
   return (neuron0x137c8b0()*0.0831606);
}

double NNfunction_ss_uRsR::synapse0x138f310() {
   return (neuron0x137cbf0()*0.0566986);
}

double NNfunction_ss_uRsR::synapse0x138f350() {
   return (neuron0x137cf30()*0.94282);
}

double NNfunction_ss_uRsR::synapse0x138f390() {
   return (neuron0x137d270()*-0.0514233);
}

double NNfunction_ss_uRsR::synapse0x138f3d0() {
   return (neuron0x137d5b0()*-0.0124498);
}

double NNfunction_ss_uRsR::synapse0x138f410() {
   return (neuron0x137d8f0()*0.0107765);
}

double NNfunction_ss_uRsR::synapse0x138f450() {
   return (neuron0x137dc30()*0.00707908);
}

double NNfunction_ss_uRsR::synapse0x138f490() {
   return (neuron0x137df70()*-0.0239851);
}

double NNfunction_ss_uRsR::synapse0x138f4d0() {
   return (neuron0x137e2b0()*-0.0490741);
}

double NNfunction_ss_uRsR::synapse0x138f510() {
   return (neuron0x137e5f0()*0.0230051);
}

double NNfunction_ss_uRsR::synapse0x138f550() {
   return (neuron0x137e930()*-0.00376293);
}

double NNfunction_ss_uRsR::synapse0x138f590() {
   return (neuron0x137ec70()*0.0719434);
}

double NNfunction_ss_uRsR::synapse0x138f5d0() {
   return (neuron0x137efb0()*-0.0716569);
}

double NNfunction_ss_uRsR::synapse0x138f610() {
   return (neuron0x137f2f0()*1.04752);
}

double NNfunction_ss_uRsR::synapse0x138f650() {
   return (neuron0x137f630()*-0.0139337);
}

double NNfunction_ss_uRsR::synapse0x138f0e0() {
   return (neuron0x137f970()*0.0625793);
}

double NNfunction_ss_uRsR::synapse0x138f120() {
   return (neuron0x137fed0()*-0.0834934);
}

double NNfunction_ss_uRsR::synapse0x138f7a0() {
   return (neuron0x13800f0()*1.04173);
}

double NNfunction_ss_uRsR::synapse0x138f7e0() {
   return (neuron0x1380430()*0.0343754);
}

double NNfunction_ss_uRsR::synapse0x138f820() {
   return (neuron0x1380770()*0.013651);
}

double NNfunction_ss_uRsR::synapse0x138f860() {
   return (neuron0x1380ab0()*-0.0410762);
}

double NNfunction_ss_uRsR::synapse0x138f8a0() {
   return (neuron0x1380df0()*-0.00971824);
}

double NNfunction_ss_uRsR::synapse0x138f8e0() {
   return (neuron0x1381130()*-0.0325951);
}

double NNfunction_ss_uRsR::synapse0x138fc60() {
   return (neuron0x137c570()*-0.0271221);
}

double NNfunction_ss_uRsR::synapse0x138fca0() {
   return (neuron0x137c8b0()*0.012072);
}

double NNfunction_ss_uRsR::synapse0x138fce0() {
   return (neuron0x137cbf0()*-0.00453228);
}

double NNfunction_ss_uRsR::synapse0x138fd20() {
   return (neuron0x137cf30()*0.103563);
}

double NNfunction_ss_uRsR::synapse0x138fd60() {
   return (neuron0x137d270()*0.0107049);
}

double NNfunction_ss_uRsR::synapse0x138fda0() {
   return (neuron0x137d5b0()*-0.000367059);
}

double NNfunction_ss_uRsR::synapse0x138fde0() {
   return (neuron0x137d8f0()*0.0291848);
}

double NNfunction_ss_uRsR::synapse0x138fe20() {
   return (neuron0x137dc30()*0.00388254);
}

double NNfunction_ss_uRsR::synapse0x138fe60() {
   return (neuron0x137df70()*-0.038321);
}

double NNfunction_ss_uRsR::synapse0x1388020() {
   return (neuron0x137e2b0()*-0.0155393);
}

double NNfunction_ss_uRsR::synapse0x1388060() {
   return (neuron0x137e5f0()*-0.00125887);
}

double NNfunction_ss_uRsR::synapse0x13880a0() {
   return (neuron0x137e930()*-0.0181518);
}

double NNfunction_ss_uRsR::synapse0x13880e0() {
   return (neuron0x137ec70()*-0.0292363);
}

double NNfunction_ss_uRsR::synapse0x1388120() {
   return (neuron0x137efb0()*-0.00382084);
}

double NNfunction_ss_uRsR::synapse0x1388160() {
   return (neuron0x137f2f0()*-0.506196);
}

double NNfunction_ss_uRsR::synapse0x13881a0() {
   return (neuron0x137f630()*0.030651);
}

double NNfunction_ss_uRsR::synapse0x138fab0() {
   return (neuron0x137f970()*0.00304466);
}

double NNfunction_ss_uRsR::synapse0x138faf0() {
   return (neuron0x137fed0()*-0.0304167);
}

double NNfunction_ss_uRsR::synapse0x13882f0() {
   return (neuron0x13800f0()*2.40415);
}

double NNfunction_ss_uRsR::synapse0x1388330() {
   return (neuron0x1380430()*-0.00974178);
}

double NNfunction_ss_uRsR::synapse0x1388370() {
   return (neuron0x1380770()*0.0266763);
}

double NNfunction_ss_uRsR::synapse0x13883b0() {
   return (neuron0x1380ab0()*-0.0263629);
}

double NNfunction_ss_uRsR::synapse0x13883f0() {
   return (neuron0x1380df0()*-0.0521972);
}

double NNfunction_ss_uRsR::synapse0x1388430() {
   return (neuron0x1381130()*-0.0247036);
}

double NNfunction_ss_uRsR::synapse0x13887b0() {
   return (neuron0x137c570()*-0.00357554);
}

double NNfunction_ss_uRsR::synapse0x13887f0() {
   return (neuron0x137c8b0()*-0.00911171);
}

double NNfunction_ss_uRsR::synapse0x1388830() {
   return (neuron0x137cbf0()*0.0183427);
}

double NNfunction_ss_uRsR::synapse0x1388870() {
   return (neuron0x137cf30()*0.0441236);
}

double NNfunction_ss_uRsR::synapse0x13888b0() {
   return (neuron0x137d270()*-0.0037014);
}

double NNfunction_ss_uRsR::synapse0x13888f0() {
   return (neuron0x137d5b0()*0.010699);
}

double NNfunction_ss_uRsR::synapse0x1388930() {
   return (neuron0x137d8f0()*0.0109714);
}

double NNfunction_ss_uRsR::synapse0x1388970() {
   return (neuron0x137dc30()*0.0219114);
}

double NNfunction_ss_uRsR::synapse0x13889b0() {
   return (neuron0x137df70()*0.00348706);
}

double NNfunction_ss_uRsR::synapse0x13889f0() {
   return (neuron0x137e2b0()*-0.00937247);
}

double NNfunction_ss_uRsR::synapse0x1388a30() {
   return (neuron0x137e5f0()*-0.00157342);
}

double NNfunction_ss_uRsR::synapse0x1388a70() {
   return (neuron0x137e930()*4.24974e-05);
}

double NNfunction_ss_uRsR::synapse0x1388ab0() {
   return (neuron0x137ec70()*0.0138554);
}

double NNfunction_ss_uRsR::synapse0x1388af0() {
   return (neuron0x137efb0()*-0.0158765);
}

double NNfunction_ss_uRsR::synapse0x1388b30() {
   return (neuron0x137f2f0()*-0.457295);
}

double NNfunction_ss_uRsR::synapse0x1388b70() {
   return (neuron0x137f630()*0.0117926);
}

double NNfunction_ss_uRsR::synapse0x1388600() {
   return (neuron0x137f970()*-0.00180529);
}

double NNfunction_ss_uRsR::synapse0x1388640() {
   return (neuron0x137fed0()*-0.0212259);
}

double NNfunction_ss_uRsR::synapse0x1388cc0() {
   return (neuron0x13800f0()*1.12842);
}

double NNfunction_ss_uRsR::synapse0x1388d00() {
   return (neuron0x1380430()*-0.0190709);
}

double NNfunction_ss_uRsR::synapse0x1388d40() {
   return (neuron0x1380770()*-0.00247339);
}

double NNfunction_ss_uRsR::synapse0x1388d80() {
   return (neuron0x1380ab0()*0.0220021);
}

double NNfunction_ss_uRsR::synapse0x1388dc0() {
   return (neuron0x1380df0()*0.00180281);
}

double NNfunction_ss_uRsR::synapse0x1388e00() {
   return (neuron0x1381130()*0.0128849);
}

double NNfunction_ss_uRsR::synapse0x1388fd0() {
   return (neuron0x137c570()*0.178077);
}

double NNfunction_ss_uRsR::synapse0x1392060() {
   return (neuron0x137c8b0()*-0.183352);
}

double NNfunction_ss_uRsR::synapse0x13920a0() {
   return (neuron0x137cbf0()*-0.169164);
}

double NNfunction_ss_uRsR::synapse0x13920e0() {
   return (neuron0x137cf30()*0.620217);
}

double NNfunction_ss_uRsR::synapse0x1392120() {
   return (neuron0x137d270()*0.155463);
}

double NNfunction_ss_uRsR::synapse0x1392160() {
   return (neuron0x137d5b0()*-0.108221);
}

double NNfunction_ss_uRsR::synapse0x13921a0() {
   return (neuron0x137d8f0()*-0.0805909);
}

double NNfunction_ss_uRsR::synapse0x13921e0() {
   return (neuron0x137dc30()*0.063244);
}

double NNfunction_ss_uRsR::synapse0x1392220() {
   return (neuron0x137df70()*-0.516685);
}

double NNfunction_ss_uRsR::synapse0x1392260() {
   return (neuron0x137e2b0()*0.134917);
}

double NNfunction_ss_uRsR::synapse0x13922a0() {
   return (neuron0x137e5f0()*0.1797);
}

double NNfunction_ss_uRsR::synapse0x13922e0() {
   return (neuron0x137e930()*-0.0134875);
}

double NNfunction_ss_uRsR::synapse0x1392320() {
   return (neuron0x137ec70()*-0.234106);
}

double NNfunction_ss_uRsR::synapse0x1392360() {
   return (neuron0x137efb0()*0.23675);
}

double NNfunction_ss_uRsR::synapse0x13923a0() {
   return (neuron0x137f2f0()*-0.474119);
}

double NNfunction_ss_uRsR::synapse0x13923e0() {
   return (neuron0x137f630()*0.33063);
}

double NNfunction_ss_uRsR::synapse0x1391eb0() {
   return (neuron0x137f970()*-0.173405);
}

double NNfunction_ss_uRsR::synapse0x1391ef0() {
   return (neuron0x137fed0()*-0.425042);
}

double NNfunction_ss_uRsR::synapse0x1392530() {
   return (neuron0x13800f0()*-0.166024);
}

double NNfunction_ss_uRsR::synapse0x1392570() {
   return (neuron0x1380430()*0.319472);
}

double NNfunction_ss_uRsR::synapse0x13925b0() {
   return (neuron0x1380770()*0.0585364);
}

double NNfunction_ss_uRsR::synapse0x13925f0() {
   return (neuron0x1380ab0()*0.206099);
}

double NNfunction_ss_uRsR::synapse0x1392630() {
   return (neuron0x1380df0()*0.0968378);
}

double NNfunction_ss_uRsR::synapse0x1392670() {
   return (neuron0x1381130()*-0.486729);
}

double NNfunction_ss_uRsR::synapse0x13929f0() {
   return (neuron0x137c570()*-0.228999);
}

double NNfunction_ss_uRsR::synapse0x1392a30() {
   return (neuron0x137c8b0()*-1.39544);
}

double NNfunction_ss_uRsR::synapse0x1392a70() {
   return (neuron0x137cbf0()*0.383852);
}

double NNfunction_ss_uRsR::synapse0x1392ab0() {
   return (neuron0x137cf30()*-0.954613);
}

double NNfunction_ss_uRsR::synapse0x1392af0() {
   return (neuron0x137d270()*0.258588);
}

double NNfunction_ss_uRsR::synapse0x1392b30() {
   return (neuron0x137d5b0()*0.193009);
}

double NNfunction_ss_uRsR::synapse0x1392b70() {
   return (neuron0x137d8f0()*0.420815);
}

double NNfunction_ss_uRsR::synapse0x1392bb0() {
   return (neuron0x137dc30()*0.200684);
}

double NNfunction_ss_uRsR::synapse0x1392bf0() {
   return (neuron0x137df70()*-0.476689);
}

double NNfunction_ss_uRsR::synapse0x1392c30() {
   return (neuron0x137e2b0()*-0.192626);
}

double NNfunction_ss_uRsR::synapse0x1392c70() {
   return (neuron0x137e5f0()*0.660219);
}

double NNfunction_ss_uRsR::synapse0x1392cb0() {
   return (neuron0x137e930()*0.0954104);
}

double NNfunction_ss_uRsR::synapse0x1392cf0() {
   return (neuron0x137ec70()*-0.554936);
}

double NNfunction_ss_uRsR::synapse0x1392d30() {
   return (neuron0x137efb0()*-0.171943);
}

double NNfunction_ss_uRsR::synapse0x1392d70() {
   return (neuron0x137f2f0()*0.889044);
}

double NNfunction_ss_uRsR::synapse0x1392db0() {
   return (neuron0x137f630()*-0.173456);
}

double NNfunction_ss_uRsR::synapse0x1392840() {
   return (neuron0x137f970()*0.0575873);
}

double NNfunction_ss_uRsR::synapse0x1392880() {
   return (neuron0x137fed0()*0.110248);
}

double NNfunction_ss_uRsR::synapse0x1392f00() {
   return (neuron0x13800f0()*0.955384);
}

double NNfunction_ss_uRsR::synapse0x1392f40() {
   return (neuron0x1380430()*-0.262075);
}

double NNfunction_ss_uRsR::synapse0x1392f80() {
   return (neuron0x1380770()*0.0804474);
}

double NNfunction_ss_uRsR::synapse0x1392fc0() {
   return (neuron0x1380ab0()*-0.216577);
}

double NNfunction_ss_uRsR::synapse0x1393000() {
   return (neuron0x1380df0()*0.31349);
}

double NNfunction_ss_uRsR::synapse0x1393040() {
   return (neuron0x1381130()*0.231136);
}

double NNfunction_ss_uRsR::synapse0x13933c0() {
   return (neuron0x137c570()*-0.218568);
}

double NNfunction_ss_uRsR::synapse0x1393400() {
   return (neuron0x137c8b0()*-0.38147);
}

double NNfunction_ss_uRsR::synapse0x1393440() {
   return (neuron0x137cbf0()*0.0246073);
}

double NNfunction_ss_uRsR::synapse0x1393480() {
   return (neuron0x137cf30()*1.1043);
}

double NNfunction_ss_uRsR::synapse0x13934c0() {
   return (neuron0x137d270()*-0.216398);
}

double NNfunction_ss_uRsR::synapse0x1393500() {
   return (neuron0x137d5b0()*-0.468942);
}

double NNfunction_ss_uRsR::synapse0x1393540() {
   return (neuron0x137d8f0()*-0.249966);
}

double NNfunction_ss_uRsR::synapse0x1393580() {
   return (neuron0x137dc30()*-0.0282381);
}

double NNfunction_ss_uRsR::synapse0x13935c0() {
   return (neuron0x137df70()*-0.186394);
}

double NNfunction_ss_uRsR::synapse0x1393600() {
   return (neuron0x137e2b0()*0.344409);
}

double NNfunction_ss_uRsR::synapse0x1393640() {
   return (neuron0x137e5f0()*0.285208);
}

double NNfunction_ss_uRsR::synapse0x1393680() {
   return (neuron0x137e930()*0.957317);
}

double NNfunction_ss_uRsR::synapse0x13936c0() {
   return (neuron0x137ec70()*-0.272479);
}

double NNfunction_ss_uRsR::synapse0x1393700() {
   return (neuron0x137efb0()*0.21616);
}

double NNfunction_ss_uRsR::synapse0x1393740() {
   return (neuron0x137f2f0()*0.0584097);
}

double NNfunction_ss_uRsR::synapse0x1393780() {
   return (neuron0x137f630()*-0.480771);
}

double NNfunction_ss_uRsR::synapse0x1393210() {
   return (neuron0x137f970()*-0.301373);
}

double NNfunction_ss_uRsR::synapse0x1393250() {
   return (neuron0x137fed0()*-0.899389);
}

double NNfunction_ss_uRsR::synapse0x13938d0() {
   return (neuron0x13800f0()*-0.0847406);
}

double NNfunction_ss_uRsR::synapse0x1393910() {
   return (neuron0x1380430()*0.412702);
}

double NNfunction_ss_uRsR::synapse0x1393950() {
   return (neuron0x1380770()*0.0039203);
}

double NNfunction_ss_uRsR::synapse0x1393990() {
   return (neuron0x1380ab0()*-0.226358);
}

double NNfunction_ss_uRsR::synapse0x13939d0() {
   return (neuron0x1380df0()*-0.160318);
}

double NNfunction_ss_uRsR::synapse0x1393a10() {
   return (neuron0x1381130()*-0.302229);
}

double NNfunction_ss_uRsR::synapse0x1393d90() {
   return (neuron0x137c570()*0.122484);
}

double NNfunction_ss_uRsR::synapse0x1393dd0() {
   return (neuron0x137c8b0()*0.0360061);
}

double NNfunction_ss_uRsR::synapse0x1393e10() {
   return (neuron0x137cbf0()*-0.182758);
}

double NNfunction_ss_uRsR::synapse0x1393e50() {
   return (neuron0x137cf30()*0.642582);
}

double NNfunction_ss_uRsR::synapse0x1393e90() {
   return (neuron0x137d270()*-0.131182);
}

double NNfunction_ss_uRsR::synapse0x1393ed0() {
   return (neuron0x137d5b0()*0.0447653);
}

double NNfunction_ss_uRsR::synapse0x1393f10() {
   return (neuron0x137d8f0()*0.0685918);
}

double NNfunction_ss_uRsR::synapse0x1393f50() {
   return (neuron0x137dc30()*-0.0669944);
}

double NNfunction_ss_uRsR::synapse0x1393f90() {
   return (neuron0x137df70()*0.157517);
}

double NNfunction_ss_uRsR::synapse0x1393fd0() {
   return (neuron0x137e2b0()*0.406066);
}

double NNfunction_ss_uRsR::synapse0x1394010() {
   return (neuron0x137e5f0()*-0.140722);
}

double NNfunction_ss_uRsR::synapse0x1394050() {
   return (neuron0x137e930()*0.309532);
}

double NNfunction_ss_uRsR::synapse0x1394090() {
   return (neuron0x137ec70()*0.128327);
}

double NNfunction_ss_uRsR::synapse0x13940d0() {
   return (neuron0x137efb0()*-0.374405);
}

double NNfunction_ss_uRsR::synapse0x1394110() {
   return (neuron0x137f2f0()*-0.00567798);
}

double NNfunction_ss_uRsR::synapse0x1394150() {
   return (neuron0x137f630()*0.556967);
}

double NNfunction_ss_uRsR::synapse0x1393be0() {
   return (neuron0x137f970()*0.341517);
}

double NNfunction_ss_uRsR::synapse0x1393c20() {
   return (neuron0x137fed0()*0.164461);
}

double NNfunction_ss_uRsR::synapse0x13942a0() {
   return (neuron0x13800f0()*0.185879);
}

double NNfunction_ss_uRsR::synapse0x13942e0() {
   return (neuron0x1380430()*-0.695689);
}

double NNfunction_ss_uRsR::synapse0x1394320() {
   return (neuron0x1380770()*0.00480733);
}

double NNfunction_ss_uRsR::synapse0x1394360() {
   return (neuron0x1380ab0()*-0.483812);
}

double NNfunction_ss_uRsR::synapse0x13943a0() {
   return (neuron0x1380df0()*0.0504116);
}

double NNfunction_ss_uRsR::synapse0x13943e0() {
   return (neuron0x1381130()*-0.121945);
}

double NNfunction_ss_uRsR::synapse0x1394760() {
   return (neuron0x137c570()*0.00593356);
}

double NNfunction_ss_uRsR::synapse0x13947a0() {
   return (neuron0x137c8b0()*0.0411257);
}

double NNfunction_ss_uRsR::synapse0x13947e0() {
   return (neuron0x137cbf0()*0.00645794);
}

double NNfunction_ss_uRsR::synapse0x1394820() {
   return (neuron0x137cf30()*-5.63911);
}

double NNfunction_ss_uRsR::synapse0x1394860() {
   return (neuron0x137d270()*-0.01266);
}

double NNfunction_ss_uRsR::synapse0x13948a0() {
   return (neuron0x137d5b0()*-0.000725337);
}

double NNfunction_ss_uRsR::synapse0x13948e0() {
   return (neuron0x137d8f0()*0.014131);
}

double NNfunction_ss_uRsR::synapse0x1394920() {
   return (neuron0x137dc30()*0.0201089);
}

double NNfunction_ss_uRsR::synapse0x1394960() {
   return (neuron0x137df70()*-0.000332687);
}

double NNfunction_ss_uRsR::synapse0x13949a0() {
   return (neuron0x137e2b0()*-0.00292783);
}

double NNfunction_ss_uRsR::synapse0x13949e0() {
   return (neuron0x137e5f0()*-0.00143084);
}

double NNfunction_ss_uRsR::synapse0x1394a20() {
   return (neuron0x137e930()*0.0262473);
}

double NNfunction_ss_uRsR::synapse0x1394a60() {
   return (neuron0x137ec70()*0.0170256);
}

double NNfunction_ss_uRsR::synapse0x1394aa0() {
   return (neuron0x137efb0()*-0.00338113);
}

double NNfunction_ss_uRsR::synapse0x1394ae0() {
   return (neuron0x137f2f0()*0.427755);
}

double NNfunction_ss_uRsR::synapse0x1394b20() {
   return (neuron0x137f630()*0.00386843);
}

double NNfunction_ss_uRsR::synapse0x13945b0() {
   return (neuron0x137f970()*0.00994165);
}

double NNfunction_ss_uRsR::synapse0x13945f0() {
   return (neuron0x137fed0()*-0.0401123);
}

double NNfunction_ss_uRsR::synapse0x1394c70() {
   return (neuron0x13800f0()*0.52699);
}

double NNfunction_ss_uRsR::synapse0x1394cb0() {
   return (neuron0x1380430()*0.00275243);
}

double NNfunction_ss_uRsR::synapse0x1394cf0() {
   return (neuron0x1380770()*0.00674331);
}

double NNfunction_ss_uRsR::synapse0x1394d30() {
   return (neuron0x1380ab0()*0.00921887);
}

double NNfunction_ss_uRsR::synapse0x1394d70() {
   return (neuron0x1380df0()*0.00603785);
}

double NNfunction_ss_uRsR::synapse0x1394db0() {
   return (neuron0x1381130()*0.00133849);
}

double NNfunction_ss_uRsR::synapse0x1395130() {
   return (neuron0x137c570()*0.690827);
}

double NNfunction_ss_uRsR::synapse0x1395170() {
   return (neuron0x137c8b0()*0.64492);
}

double NNfunction_ss_uRsR::synapse0x13951b0() {
   return (neuron0x137cbf0()*-0.0958255);
}

double NNfunction_ss_uRsR::synapse0x13951f0() {
   return (neuron0x137cf30()*0.0213483);
}

double NNfunction_ss_uRsR::synapse0x1395230() {
   return (neuron0x137d270()*-0.0134151);
}

double NNfunction_ss_uRsR::synapse0x1395270() {
   return (neuron0x137d5b0()*0.480534);
}

double NNfunction_ss_uRsR::synapse0x13952b0() {
   return (neuron0x137d8f0()*-0.668901);
}

double NNfunction_ss_uRsR::synapse0x13952f0() {
   return (neuron0x137dc30()*0.00589551);
}

double NNfunction_ss_uRsR::synapse0x1395330() {
   return (neuron0x137df70()*0.098973);
}

double NNfunction_ss_uRsR::synapse0x1395370() {
   return (neuron0x137e2b0()*0.49323);
}

double NNfunction_ss_uRsR::synapse0x13953b0() {
   return (neuron0x137e5f0()*-0.0410775);
}

double NNfunction_ss_uRsR::synapse0x13953f0() {
   return (neuron0x137e930()*0.601966);
}

double NNfunction_ss_uRsR::synapse0x1395430() {
   return (neuron0x137ec70()*-0.318089);
}

double NNfunction_ss_uRsR::synapse0x1395470() {
   return (neuron0x137efb0()*-0.139342);
}

double NNfunction_ss_uRsR::synapse0x13954b0() {
   return (neuron0x137f2f0()*-0.411233);
}

double NNfunction_ss_uRsR::synapse0x13954f0() {
   return (neuron0x137f630()*0.572304);
}

double NNfunction_ss_uRsR::synapse0x1394f80() {
   return (neuron0x137f970()*0.177314);
}

double NNfunction_ss_uRsR::synapse0x1394fc0() {
   return (neuron0x137fed0()*0.299205);
}

double NNfunction_ss_uRsR::synapse0x1395640() {
   return (neuron0x13800f0()*-0.422522);
}

double NNfunction_ss_uRsR::synapse0x1395680() {
   return (neuron0x1380430()*-0.619217);
}

double NNfunction_ss_uRsR::synapse0x13956c0() {
   return (neuron0x1380770()*-0.109596);
}

double NNfunction_ss_uRsR::synapse0x1395700() {
   return (neuron0x1380ab0()*-0.682431);
}

double NNfunction_ss_uRsR::synapse0x1395740() {
   return (neuron0x1380df0()*0.553878);
}

double NNfunction_ss_uRsR::synapse0x1395780() {
   return (neuron0x1381130()*-1.00954);
}

double NNfunction_ss_uRsR::synapse0x1395b00() {
   return (neuron0x137c570()*0.0214083);
}

double NNfunction_ss_uRsR::synapse0x1395b40() {
   return (neuron0x137c8b0()*0.0279297);
}

double NNfunction_ss_uRsR::synapse0x1395b80() {
   return (neuron0x137cbf0()*-6.97784e-05);
}

double NNfunction_ss_uRsR::synapse0x1395bc0() {
   return (neuron0x137cf30()*-2.04012);
}

double NNfunction_ss_uRsR::synapse0x1395c00() {
   return (neuron0x137d270()*-0.0157042);
}

double NNfunction_ss_uRsR::synapse0x1395c40() {
   return (neuron0x137d5b0()*0.0120087);
}

double NNfunction_ss_uRsR::synapse0x1395c80() {
   return (neuron0x137d8f0()*0.0406022);
}

double NNfunction_ss_uRsR::synapse0x1395cc0() {
   return (neuron0x137dc30()*0.0168014);
}

double NNfunction_ss_uRsR::synapse0x1395d00() {
   return (neuron0x137df70()*-0.00769799);
}

double NNfunction_ss_uRsR::synapse0x1395d40() {
   return (neuron0x137e2b0()*-0.0147094);
}

double NNfunction_ss_uRsR::synapse0x1395d80() {
   return (neuron0x137e5f0()*-0.00872797);
}

double NNfunction_ss_uRsR::synapse0x1395dc0() {
   return (neuron0x137e930()*0.0497819);
}

double NNfunction_ss_uRsR::synapse0x1395e00() {
   return (neuron0x137ec70()*0.0205939);
}

double NNfunction_ss_uRsR::synapse0x1395e40() {
   return (neuron0x137efb0()*-0.00632402);
}

double NNfunction_ss_uRsR::synapse0x1395e80() {
   return (neuron0x137f2f0()*0.59639);
}

double NNfunction_ss_uRsR::synapse0x1395ec0() {
   return (neuron0x137f630()*0.0269162);
}

double NNfunction_ss_uRsR::synapse0x1395950() {
   return (neuron0x137f970()*0.0591095);
}

double NNfunction_ss_uRsR::synapse0x1395990() {
   return (neuron0x137fed0()*-0.0711936);
}

double NNfunction_ss_uRsR::synapse0x1396010() {
   return (neuron0x13800f0()*0.524727);
}

double NNfunction_ss_uRsR::synapse0x1396050() {
   return (neuron0x1380430()*-0.00469671);
}

double NNfunction_ss_uRsR::synapse0x1396090() {
   return (neuron0x1380770()*0.00994204);
}

double NNfunction_ss_uRsR::synapse0x13960d0() {
   return (neuron0x1380ab0()*0.00310702);
}

double NNfunction_ss_uRsR::synapse0x1396110() {
   return (neuron0x1380df0()*-0.00161277);
}

double NNfunction_ss_uRsR::synapse0x1396150() {
   return (neuron0x1381130()*-0.00558497);
}

double NNfunction_ss_uRsR::synapse0x13964d0() {
   return (neuron0x137c570()*-0.0124702);
}

double NNfunction_ss_uRsR::synapse0x1396510() {
   return (neuron0x137c8b0()*0.106396);
}

double NNfunction_ss_uRsR::synapse0x1396550() {
   return (neuron0x137cbf0()*-0.044282);
}

double NNfunction_ss_uRsR::synapse0x1396590() {
   return (neuron0x137cf30()*2.98681);
}

double NNfunction_ss_uRsR::synapse0x13965d0() {
   return (neuron0x137d270()*0.020884);
}

double NNfunction_ss_uRsR::synapse0x1396610() {
   return (neuron0x137d5b0()*0.0373759);
}

double NNfunction_ss_uRsR::synapse0x1396650() {
   return (neuron0x137d8f0()*0.00886648);
}

double NNfunction_ss_uRsR::synapse0x1396690() {
   return (neuron0x137dc30()*0.0207846);
}

double NNfunction_ss_uRsR::synapse0x13966d0() {
   return (neuron0x137df70()*-0.0122546);
}

double NNfunction_ss_uRsR::synapse0x1396710() {
   return (neuron0x137e2b0()*0.0421687);
}

double NNfunction_ss_uRsR::synapse0x1396750() {
   return (neuron0x137e5f0()*-0.0219216);
}

double NNfunction_ss_uRsR::synapse0x1396790() {
   return (neuron0x137e930()*-0.0323892);
}

double NNfunction_ss_uRsR::synapse0x13967d0() {
   return (neuron0x137ec70()*0.0241856);
}

double NNfunction_ss_uRsR::synapse0x1396810() {
   return (neuron0x137efb0()*0.00704357);
}

double NNfunction_ss_uRsR::synapse0x1396850() {
   return (neuron0x137f2f0()*-0.118677);
}

double NNfunction_ss_uRsR::synapse0x1396890() {
   return (neuron0x137f630()*0.0120643);
}

double NNfunction_ss_uRsR::synapse0x1396320() {
   return (neuron0x137f970()*-0.0261441);
}

double NNfunction_ss_uRsR::synapse0x1396360() {
   return (neuron0x137fed0()*0.0612618);
}

double NNfunction_ss_uRsR::synapse0x13969e0() {
   return (neuron0x13800f0()*-0.0382847);
}

double NNfunction_ss_uRsR::synapse0x1396a20() {
   return (neuron0x1380430()*0.00769627);
}

double NNfunction_ss_uRsR::synapse0x1396a60() {
   return (neuron0x1380770()*-0.0151412);
}

double NNfunction_ss_uRsR::synapse0x1396aa0() {
   return (neuron0x1380ab0()*0.0586233);
}

double NNfunction_ss_uRsR::synapse0x1396ae0() {
   return (neuron0x1380df0()*-0.00250356);
}

double NNfunction_ss_uRsR::synapse0x1396b20() {
   return (neuron0x1381130()*0.0228978);
}

double NNfunction_ss_uRsR::synapse0x1396ea0() {
   return (neuron0x137c570()*-0.0209502);
}

double NNfunction_ss_uRsR::synapse0x138b470() {
   return (neuron0x137c8b0()*0.0956033);
}

double NNfunction_ss_uRsR::synapse0x138b4b0() {
   return (neuron0x137cbf0()*0.0102476);
}

double NNfunction_ss_uRsR::synapse0x138b4f0() {
   return (neuron0x137cf30()*0.157685);
}

double NNfunction_ss_uRsR::synapse0x138b740() {
   return (neuron0x137d270()*-0.0777429);
}

double NNfunction_ss_uRsR::synapse0x138b780() {
   return (neuron0x137d5b0()*0.0255646);
}

double NNfunction_ss_uRsR::synapse0x138b7c0() {
   return (neuron0x137d8f0()*0.11851);
}

double NNfunction_ss_uRsR::synapse0x138ba10() {
   return (neuron0x137dc30()*-0.171576);
}

double NNfunction_ss_uRsR::synapse0x138ba50() {
   return (neuron0x137df70()*0.127032);
}

double NNfunction_ss_uRsR::synapse0x138bca0() {
   return (neuron0x137e2b0()*0.146659);
}

double NNfunction_ss_uRsR::synapse0x138bce0() {
   return (neuron0x137e5f0()*0.00773083);
}

double NNfunction_ss_uRsR::synapse0x138bd20() {
   return (neuron0x137e930()*-0.0725437);
}

double NNfunction_ss_uRsR::synapse0x138bf70() {
   return (neuron0x137ec70()*-0.0243753);
}

double NNfunction_ss_uRsR::synapse0x138bfb0() {
   return (neuron0x137efb0()*-0.00499958);
}

double NNfunction_ss_uRsR::synapse0x138c200() {
   return (neuron0x137f2f0()*-1.00963);
}

double NNfunction_ss_uRsR::synapse0x138c240() {
   return (neuron0x137f630()*-0.000708618);
}

double NNfunction_ss_uRsR::synapse0x1396cf0() {
   return (neuron0x137f970()*-0.177031);
}

double NNfunction_ss_uRsR::synapse0x1396d30() {
   return (neuron0x137fed0()*0.0120485);
}

double NNfunction_ss_uRsR::synapse0x138c390() {
   return (neuron0x13800f0()*-1.00003);
}

double NNfunction_ss_uRsR::synapse0x138c8a0() {
   return (neuron0x1380430()*0.0656959);
}

double NNfunction_ss_uRsR::synapse0x138c8e0() {
   return (neuron0x1380770()*0.102719);
}

double NNfunction_ss_uRsR::synapse0x138c920() {
   return (neuron0x1380ab0()*0.0400703);
}

double NNfunction_ss_uRsR::synapse0x138cb70() {
   return (neuron0x1380df0()*0.102926);
}

double NNfunction_ss_uRsR::synapse0x138cbb0() {
   return (neuron0x1381130()*0.0920803);
}

double NNfunction_ss_uRsR::synapse0x138c460() {
   return (neuron0x137c570()*-0.0210237);
}

double NNfunction_ss_uRsR::synapse0x138c4a0() {
   return (neuron0x137c8b0()*0.329677);
}

double NNfunction_ss_uRsR::synapse0x138c4e0() {
   return (neuron0x137cbf0()*-0.0304381);
}

double NNfunction_ss_uRsR::synapse0x138c520() {
   return (neuron0x137cf30()*0.523755);
}

double NNfunction_ss_uRsR::synapse0x138cea0() {
   return (neuron0x137d270()*0.00680142);
}

double NNfunction_ss_uRsR::synapse0x13991f0() {
   return (neuron0x137d5b0()*0.0241641);
}

double NNfunction_ss_uRsR::synapse0x1399230() {
   return (neuron0x137d8f0()*0.00372768);
}

double NNfunction_ss_uRsR::synapse0x1399270() {
   return (neuron0x137dc30()*-0.00326346);
}

double NNfunction_ss_uRsR::synapse0x13992b0() {
   return (neuron0x137df70()*0.0679146);
}

double NNfunction_ss_uRsR::synapse0x13992f0() {
   return (neuron0x137e2b0()*0.0394378);
}

double NNfunction_ss_uRsR::synapse0x1399330() {
   return (neuron0x137e5f0()*0.0952223);
}

double NNfunction_ss_uRsR::synapse0x1399370() {
   return (neuron0x137e930()*-0.185476);
}

double NNfunction_ss_uRsR::synapse0x13993b0() {
   return (neuron0x137ec70()*-0.143801);
}

double NNfunction_ss_uRsR::synapse0x13993f0() {
   return (neuron0x137efb0()*0.0110247);
}

double NNfunction_ss_uRsR::synapse0x1399430() {
   return (neuron0x137f2f0()*-0.722532);
}

double NNfunction_ss_uRsR::synapse0x1399470() {
   return (neuron0x137f630()*-0.0305745);
}

double NNfunction_ss_uRsR::synapse0x138cd80() {
   return (neuron0x137f970()*-0.047606);
}

double NNfunction_ss_uRsR::synapse0x138cdc0() {
   return (neuron0x137fed0()*0.318425);
}

double NNfunction_ss_uRsR::synapse0x13995c0() {
   return (neuron0x13800f0()*0.0133122);
}

double NNfunction_ss_uRsR::synapse0x1399600() {
   return (neuron0x1380430()*0.0879652);
}

double NNfunction_ss_uRsR::synapse0x1399640() {
   return (neuron0x1380770()*-0.023787);
}

double NNfunction_ss_uRsR::synapse0x1399680() {
   return (neuron0x1380ab0()*-0.0160456);
}

double NNfunction_ss_uRsR::synapse0x13996c0() {
   return (neuron0x1380df0()*-0.0165273);
}

double NNfunction_ss_uRsR::synapse0x1399700() {
   return (neuron0x1381130()*-0.0598568);
}

double NNfunction_ss_uRsR::synapse0x1399a80() {
   return (neuron0x137c570()*0.0230083);
}

double NNfunction_ss_uRsR::synapse0x1399ac0() {
   return (neuron0x137c8b0()*0.0312273);
}

double NNfunction_ss_uRsR::synapse0x1399b00() {
   return (neuron0x137cbf0()*0.0276632);
}

double NNfunction_ss_uRsR::synapse0x1399b40() {
   return (neuron0x137cf30()*-16.6961);
}

double NNfunction_ss_uRsR::synapse0x1399b80() {
   return (neuron0x137d270()*-0.0079586);
}

double NNfunction_ss_uRsR::synapse0x1399bc0() {
   return (neuron0x137d5b0()*0.0168209);
}

double NNfunction_ss_uRsR::synapse0x1399c00() {
   return (neuron0x137d8f0()*0.00417593);
}

double NNfunction_ss_uRsR::synapse0x1399c40() {
   return (neuron0x137dc30()*0.0378836);
}

double NNfunction_ss_uRsR::synapse0x1399c80() {
   return (neuron0x137df70()*0.0176954);
}

double NNfunction_ss_uRsR::synapse0x1399cc0() {
   return (neuron0x137e2b0()*-0.0287208);
}

double NNfunction_ss_uRsR::synapse0x1399d00() {
   return (neuron0x137e5f0()*-0.00943075);
}

double NNfunction_ss_uRsR::synapse0x1399d40() {
   return (neuron0x137e930()*-0.00359537);
}

double NNfunction_ss_uRsR::synapse0x1399d80() {
   return (neuron0x137ec70()*-0.0136793);
}

double NNfunction_ss_uRsR::synapse0x1399dc0() {
   return (neuron0x137efb0()*-0.0162398);
}

double NNfunction_ss_uRsR::synapse0x1399e00() {
   return (neuron0x137f2f0()*-0.0641644);
}

double NNfunction_ss_uRsR::synapse0x1399e40() {
   return (neuron0x137f630()*-0.00637126);
}

double NNfunction_ss_uRsR::synapse0x13998d0() {
   return (neuron0x137f970()*-0.0014518);
}

double NNfunction_ss_uRsR::synapse0x1399910() {
   return (neuron0x137fed0()*-0.0316647);
}

double NNfunction_ss_uRsR::synapse0x1399f90() {
   return (neuron0x13800f0()*-0.153474);
}

double NNfunction_ss_uRsR::synapse0x1399fd0() {
   return (neuron0x1380430()*-0.0186689);
}

double NNfunction_ss_uRsR::synapse0x139a010() {
   return (neuron0x1380770()*-0.00688924);
}

double NNfunction_ss_uRsR::synapse0x139a050() {
   return (neuron0x1380ab0()*-0.00190876);
}

double NNfunction_ss_uRsR::synapse0x139a090() {
   return (neuron0x1380df0()*0.00205854);
}

double NNfunction_ss_uRsR::synapse0x139a0d0() {
   return (neuron0x1381130()*-0.0026228);
}

double NNfunction_ss_uRsR::synapse0x139a450() {
   return (neuron0x137c570()*0.000749069);
}

double NNfunction_ss_uRsR::synapse0x139a490() {
   return (neuron0x137c8b0()*0.0314786);
}

double NNfunction_ss_uRsR::synapse0x139a4d0() {
   return (neuron0x137cbf0()*-0.000420709);
}

double NNfunction_ss_uRsR::synapse0x139a510() {
   return (neuron0x137cf30()*0.0724999);
}

double NNfunction_ss_uRsR::synapse0x139a550() {
   return (neuron0x137d270()*-0.0130917);
}

double NNfunction_ss_uRsR::synapse0x139a590() {
   return (neuron0x137d5b0()*-0.00486489);
}

double NNfunction_ss_uRsR::synapse0x139a5d0() {
   return (neuron0x137d8f0()*0.000533515);
}

double NNfunction_ss_uRsR::synapse0x139a610() {
   return (neuron0x137dc30()*-0.00300936);
}

double NNfunction_ss_uRsR::synapse0x139a650() {
   return (neuron0x137df70()*0.00822258);
}

double NNfunction_ss_uRsR::synapse0x139a690() {
   return (neuron0x137e2b0()*0.00182902);
}

double NNfunction_ss_uRsR::synapse0x139a6d0() {
   return (neuron0x137e5f0()*0.0154154);
}

double NNfunction_ss_uRsR::synapse0x139a710() {
   return (neuron0x137e930()*-0.0292173);
}

double NNfunction_ss_uRsR::synapse0x139a750() {
   return (neuron0x137ec70()*-0.0255369);
}

double NNfunction_ss_uRsR::synapse0x139a790() {
   return (neuron0x137efb0()*-0.0211377);
}

double NNfunction_ss_uRsR::synapse0x139a7d0() {
   return (neuron0x137f2f0()*-1.33912);
}

double NNfunction_ss_uRsR::synapse0x139a810() {
   return (neuron0x137f630()*-0.0126131);
}

double NNfunction_ss_uRsR::synapse0x139a2a0() {
   return (neuron0x137f970()*-0.0202715);
}

double NNfunction_ss_uRsR::synapse0x139a2e0() {
   return (neuron0x137fed0()*-0.010795);
}

double NNfunction_ss_uRsR::synapse0x139a960() {
   return (neuron0x13800f0()*-1.37523);
}

double NNfunction_ss_uRsR::synapse0x139a9a0() {
   return (neuron0x1380430()*-0.00718423);
}

double NNfunction_ss_uRsR::synapse0x139a9e0() {
   return (neuron0x1380770()*-0.00259198);
}

double NNfunction_ss_uRsR::synapse0x139aa20() {
   return (neuron0x1380ab0()*0.0252365);
}

double NNfunction_ss_uRsR::synapse0x139aa60() {
   return (neuron0x1380df0()*-0.00643204);
}

double NNfunction_ss_uRsR::synapse0x139aaa0() {
   return (neuron0x1381130()*0.00405119);
}

double NNfunction_ss_uRsR::synapse0x139ae20() {
   return (neuron0x137c570()*-0.419963);
}

double NNfunction_ss_uRsR::synapse0x139ae60() {
   return (neuron0x137c8b0()*-0.0971846);
}

double NNfunction_ss_uRsR::synapse0x139aea0() {
   return (neuron0x137cbf0()*-0.102106);
}

double NNfunction_ss_uRsR::synapse0x139aee0() {
   return (neuron0x137cf30()*-0.14992);
}

double NNfunction_ss_uRsR::synapse0x139af20() {
   return (neuron0x137d270()*0.60343);
}

double NNfunction_ss_uRsR::synapse0x139af60() {
   return (neuron0x137d5b0()*0.126974);
}

double NNfunction_ss_uRsR::synapse0x139afa0() {
   return (neuron0x137d8f0()*0.156878);
}

double NNfunction_ss_uRsR::synapse0x139afe0() {
   return (neuron0x137dc30()*-0.243504);
}

double NNfunction_ss_uRsR::synapse0x139b020() {
   return (neuron0x137df70()*-0.0951668);
}

double NNfunction_ss_uRsR::synapse0x139b060() {
   return (neuron0x137e2b0()*-0.279112);
}

double NNfunction_ss_uRsR::synapse0x139b0a0() {
   return (neuron0x137e5f0()*-0.277874);
}

double NNfunction_ss_uRsR::synapse0x139b0e0() {
   return (neuron0x137e930()*-0.453028);
}

double NNfunction_ss_uRsR::synapse0x139b120() {
   return (neuron0x137ec70()*-0.372781);
}

double NNfunction_ss_uRsR::synapse0x139b160() {
   return (neuron0x137efb0()*0.664783);
}

double NNfunction_ss_uRsR::synapse0x139b1a0() {
   return (neuron0x137f2f0()*-0.0918924);
}

double NNfunction_ss_uRsR::synapse0x139b1e0() {
   return (neuron0x137f630()*0.0246135);
}

double NNfunction_ss_uRsR::synapse0x139ac70() {
   return (neuron0x137f970()*-0.180585);
}

double NNfunction_ss_uRsR::synapse0x139acb0() {
   return (neuron0x137fed0()*-0.431041);
}

double NNfunction_ss_uRsR::synapse0x139b330() {
   return (neuron0x13800f0()*-0.0945246);
}

double NNfunction_ss_uRsR::synapse0x139b370() {
   return (neuron0x1380430()*-0.638497);
}

double NNfunction_ss_uRsR::synapse0x139b3b0() {
   return (neuron0x1380770()*-0.290826);
}

double NNfunction_ss_uRsR::synapse0x139b3f0() {
   return (neuron0x1380ab0()*-0.382071);
}

double NNfunction_ss_uRsR::synapse0x139b430() {
   return (neuron0x1380df0()*0.0595873);
}

double NNfunction_ss_uRsR::synapse0x139b470() {
   return (neuron0x1381130()*0.201577);
}

double NNfunction_ss_uRsR::synapse0x139b7f0() {
   return (neuron0x137c570()*0.320362);
}

double NNfunction_ss_uRsR::synapse0x139b830() {
   return (neuron0x137c8b0()*-0.0577002);
}

double NNfunction_ss_uRsR::synapse0x139b870() {
   return (neuron0x137cbf0()*0.125476);
}

double NNfunction_ss_uRsR::synapse0x139b8b0() {
   return (neuron0x137cf30()*-0.311706);
}

double NNfunction_ss_uRsR::synapse0x139b8f0() {
   return (neuron0x137d270()*-0.943831);
}

double NNfunction_ss_uRsR::synapse0x139b930() {
   return (neuron0x137d5b0()*-0.28419);
}

double NNfunction_ss_uRsR::synapse0x139b970() {
   return (neuron0x137d8f0()*0.573638);
}

double NNfunction_ss_uRsR::synapse0x139b9b0() {
   return (neuron0x137dc30()*-0.281992);
}

double NNfunction_ss_uRsR::synapse0x139b9f0() {
   return (neuron0x137df70()*-0.543529);
}

double NNfunction_ss_uRsR::synapse0x139ba30() {
   return (neuron0x137e2b0()*0.793987);
}

double NNfunction_ss_uRsR::synapse0x139ba70() {
   return (neuron0x137e5f0()*0.361584);
}

double NNfunction_ss_uRsR::synapse0x139bab0() {
   return (neuron0x137e930()*0.456762);
}

double NNfunction_ss_uRsR::synapse0x139baf0() {
   return (neuron0x137ec70()*0.304749);
}

double NNfunction_ss_uRsR::synapse0x139bb30() {
   return (neuron0x137efb0()*-0.320951);
}

double NNfunction_ss_uRsR::synapse0x139bb70() {
   return (neuron0x137f2f0()*-0.0303524);
}

double NNfunction_ss_uRsR::synapse0x139bbb0() {
   return (neuron0x137f630()*0.494083);
}

double NNfunction_ss_uRsR::synapse0x139b640() {
   return (neuron0x137f970()*0.369436);
}

double NNfunction_ss_uRsR::synapse0x139b680() {
   return (neuron0x137fed0()*0.724584);
}

double NNfunction_ss_uRsR::synapse0x139bd00() {
   return (neuron0x13800f0()*0.224369);
}

double NNfunction_ss_uRsR::synapse0x139bd40() {
   return (neuron0x1380430()*0.1202);
}

double NNfunction_ss_uRsR::synapse0x139bd80() {
   return (neuron0x1380770()*0.292275);
}

double NNfunction_ss_uRsR::synapse0x139bdc0() {
   return (neuron0x1380ab0()*0.38331);
}

double NNfunction_ss_uRsR::synapse0x139be00() {
   return (neuron0x1380df0()*-0.0857035);
}

double NNfunction_ss_uRsR::synapse0x139be40() {
   return (neuron0x1381130()*-0.445332);
}

double NNfunction_ss_uRsR::synapse0x139c1c0() {
   return (neuron0x137c570()*-0.0778041);
}

double NNfunction_ss_uRsR::synapse0x139c200() {
   return (neuron0x137c8b0()*-0.129743);
}

double NNfunction_ss_uRsR::synapse0x139c240() {
   return (neuron0x137cbf0()*0.0645773);
}

double NNfunction_ss_uRsR::synapse0x139c280() {
   return (neuron0x137cf30()*-0.0589252);
}

double NNfunction_ss_uRsR::synapse0x139c2c0() {
   return (neuron0x137d270()*-0.058246);
}

double NNfunction_ss_uRsR::synapse0x139c300() {
   return (neuron0x137d5b0()*-0.0451719);
}

double NNfunction_ss_uRsR::synapse0x139c340() {
   return (neuron0x137d8f0()*0.0253453);
}

double NNfunction_ss_uRsR::synapse0x139c380() {
   return (neuron0x137dc30()*0.011424);
}

double NNfunction_ss_uRsR::synapse0x139c3c0() {
   return (neuron0x137df70()*0.0186212);
}

double NNfunction_ss_uRsR::synapse0x139c400() {
   return (neuron0x137e2b0()*-0.101094);
}

double NNfunction_ss_uRsR::synapse0x139c440() {
   return (neuron0x137e5f0()*0.0436856);
}

double NNfunction_ss_uRsR::synapse0x139c480() {
   return (neuron0x137e930()*0.967433);
}

double NNfunction_ss_uRsR::synapse0x139c4c0() {
   return (neuron0x137ec70()*0.804045);
}

double NNfunction_ss_uRsR::synapse0x139c500() {
   return (neuron0x137efb0()*-0.469469);
}

double NNfunction_ss_uRsR::synapse0x139c540() {
   return (neuron0x137f2f0()*-0.362046);
}

double NNfunction_ss_uRsR::synapse0x139c580() {
   return (neuron0x137f630()*0.320627);
}

double NNfunction_ss_uRsR::synapse0x139c010() {
   return (neuron0x137f970()*-0.413855);
}

double NNfunction_ss_uRsR::synapse0x139c050() {
   return (neuron0x137fed0()*0.677401);
}

double NNfunction_ss_uRsR::synapse0x139c6d0() {
   return (neuron0x13800f0()*-0.0701467);
}

double NNfunction_ss_uRsR::synapse0x139c710() {
   return (neuron0x1380430()*0.0353036);
}

double NNfunction_ss_uRsR::synapse0x139c750() {
   return (neuron0x1380770()*-0.0607897);
}

double NNfunction_ss_uRsR::synapse0x139c790() {
   return (neuron0x1380ab0()*0.00613474);
}

double NNfunction_ss_uRsR::synapse0x139c7d0() {
   return (neuron0x1380df0()*-0.0454939);
}

double NNfunction_ss_uRsR::synapse0x139c810() {
   return (neuron0x1381130()*0.00741187);
}

double NNfunction_ss_uRsR::synapse0x139cb90() {
   return (neuron0x137c570()*0.0107791);
}

double NNfunction_ss_uRsR::synapse0x139cbd0() {
   return (neuron0x137c8b0()*-0.0420957);
}

double NNfunction_ss_uRsR::synapse0x139cc10() {
   return (neuron0x137cbf0()*0.00613036);
}

double NNfunction_ss_uRsR::synapse0x139cc50() {
   return (neuron0x137cf30()*0.0837079);
}

double NNfunction_ss_uRsR::synapse0x139cc90() {
   return (neuron0x137d270()*-0.0256962);
}

double NNfunction_ss_uRsR::synapse0x139ccd0() {
   return (neuron0x137d5b0()*-0.0126637);
}

double NNfunction_ss_uRsR::synapse0x139cd10() {
   return (neuron0x137d8f0()*-0.0244409);
}

double NNfunction_ss_uRsR::synapse0x139cd50() {
   return (neuron0x137dc30()*-0.00532255);
}

double NNfunction_ss_uRsR::synapse0x139cd90() {
   return (neuron0x137df70()*0.0234573);
}

double NNfunction_ss_uRsR::synapse0x139cdd0() {
   return (neuron0x137e2b0()*0.0108464);
}

double NNfunction_ss_uRsR::synapse0x139ce10() {
   return (neuron0x137e5f0()*0.00815954);
}

double NNfunction_ss_uRsR::synapse0x139ce50() {
   return (neuron0x137e930()*0.0149997);
}

double NNfunction_ss_uRsR::synapse0x139ce90() {
   return (neuron0x137ec70()*0.0289852);
}

double NNfunction_ss_uRsR::synapse0x139ced0() {
   return (neuron0x137efb0()*-0.000789973);
}

double NNfunction_ss_uRsR::synapse0x139cf10() {
   return (neuron0x137f2f0()*0.81197);
}

double NNfunction_ss_uRsR::synapse0x139cf50() {
   return (neuron0x137f630()*-0.0155203);
}

double NNfunction_ss_uRsR::synapse0x139c9e0() {
   return (neuron0x137f970()*0.00362448);
}

double NNfunction_ss_uRsR::synapse0x139ca20() {
   return (neuron0x137fed0()*-0.0163962);
}

double NNfunction_ss_uRsR::synapse0x139d0a0() {
   return (neuron0x13800f0()*-0.433651);
}

double NNfunction_ss_uRsR::synapse0x139d0e0() {
   return (neuron0x1380430()*-0.00168359);
}

double NNfunction_ss_uRsR::synapse0x139d120() {
   return (neuron0x1380770()*-0.0121923);
}

double NNfunction_ss_uRsR::synapse0x139d160() {
   return (neuron0x1380ab0()*0.0216991);
}

double NNfunction_ss_uRsR::synapse0x139d1a0() {
   return (neuron0x1380df0()*0.0117111);
}

double NNfunction_ss_uRsR::synapse0x139d1e0() {
   return (neuron0x1381130()*0.0268714);
}

double NNfunction_ss_uRsR::synapse0x139d560() {
   return (neuron0x137c570()*0.692119);
}

double NNfunction_ss_uRsR::synapse0x139d5a0() {
   return (neuron0x137c8b0()*-0.161054);
}

double NNfunction_ss_uRsR::synapse0x139d5e0() {
   return (neuron0x137cbf0()*0.00476642);
}

double NNfunction_ss_uRsR::synapse0x139d620() {
   return (neuron0x137cf30()*0.0380767);
}

double NNfunction_ss_uRsR::synapse0x139d660() {
   return (neuron0x137d270()*0.775813);
}

double NNfunction_ss_uRsR::synapse0x139d6a0() {
   return (neuron0x137d5b0()*-0.0134436);
}

double NNfunction_ss_uRsR::synapse0x139d6e0() {
   return (neuron0x137d8f0()*0.0717732);
}

double NNfunction_ss_uRsR::synapse0x139d720() {
   return (neuron0x137dc30()*-0.115917);
}

double NNfunction_ss_uRsR::synapse0x139d760() {
   return (neuron0x137df70()*0.159155);
}

double NNfunction_ss_uRsR::synapse0x139d7a0() {
   return (neuron0x137e2b0()*0.0256406);
}

double NNfunction_ss_uRsR::synapse0x139d7e0() {
   return (neuron0x137e5f0()*0.0371968);
}

double NNfunction_ss_uRsR::synapse0x139d820() {
   return (neuron0x137e930()*0.209182);
}

double NNfunction_ss_uRsR::synapse0x139d860() {
   return (neuron0x137ec70()*-0.00239947);
}

double NNfunction_ss_uRsR::synapse0x139d8a0() {
   return (neuron0x137efb0()*0.156532);
}

double NNfunction_ss_uRsR::synapse0x139d8e0() {
   return (neuron0x137f2f0()*-0.0181042);
}

double NNfunction_ss_uRsR::synapse0x139d920() {
   return (neuron0x137f630()*-0.236314);
}

double NNfunction_ss_uRsR::synapse0x139d3b0() {
   return (neuron0x137f970()*-0.336972);
}

double NNfunction_ss_uRsR::synapse0x139d3f0() {
   return (neuron0x137fed0()*0.0885865);
}

double NNfunction_ss_uRsR::synapse0x139da70() {
   return (neuron0x13800f0()*-0.131268);
}

double NNfunction_ss_uRsR::synapse0x139dab0() {
   return (neuron0x1380430()*-0.0373114);
}

double NNfunction_ss_uRsR::synapse0x139daf0() {
   return (neuron0x1380770()*0.251563);
}

double NNfunction_ss_uRsR::synapse0x139db30() {
   return (neuron0x1380ab0()*-0.175482);
}

double NNfunction_ss_uRsR::synapse0x139db70() {
   return (neuron0x1380df0()*0.142618);
}

double NNfunction_ss_uRsR::synapse0x139dbb0() {
   return (neuron0x1381130()*0.157227);
}

double NNfunction_ss_uRsR::synapse0x1386660() {
   return (neuron0x137c570()*-0.118168);
}

double NNfunction_ss_uRsR::synapse0x13866a0() {
   return (neuron0x137c8b0()*-0.498918);
}

double NNfunction_ss_uRsR::synapse0x13866e0() {
   return (neuron0x137cbf0()*-0.100048);
}

double NNfunction_ss_uRsR::synapse0x1386720() {
   return (neuron0x137cf30()*0.63255);
}

double NNfunction_ss_uRsR::synapse0x1386760() {
   return (neuron0x137d270()*-0.448316);
}

double NNfunction_ss_uRsR::synapse0x13867a0() {
   return (neuron0x137d5b0()*0.400027);
}

double NNfunction_ss_uRsR::synapse0x13867e0() {
   return (neuron0x137d8f0()*0.177204);
}

double NNfunction_ss_uRsR::synapse0x1386820() {
   return (neuron0x137dc30()*0.751541);
}

double NNfunction_ss_uRsR::synapse0x139e340() {
   return (neuron0x137df70()*0.774611);
}

double NNfunction_ss_uRsR::synapse0x139e380() {
   return (neuron0x137e2b0()*0.259215);
}

double NNfunction_ss_uRsR::synapse0x139e3c0() {
   return (neuron0x137e5f0()*0.921626);
}

double NNfunction_ss_uRsR::synapse0x139e400() {
   return (neuron0x137e930()*-0.00416387);
}

double NNfunction_ss_uRsR::synapse0x139e440() {
   return (neuron0x137ec70()*-0.414226);
}

double NNfunction_ss_uRsR::synapse0x139e480() {
   return (neuron0x137efb0()*-0.621123);
}

double NNfunction_ss_uRsR::synapse0x139e4c0() {
   return (neuron0x137f2f0()*0.0380263);
}

double NNfunction_ss_uRsR::synapse0x139e500() {
   return (neuron0x137f630()*0.0420701);
}

double NNfunction_ss_uRsR::synapse0x139dd80() {
   return (neuron0x137f970()*0.712724);
}

double NNfunction_ss_uRsR::synapse0x139ddc0() {
   return (neuron0x137fed0()*-0.07165);
}

double NNfunction_ss_uRsR::synapse0x139e650() {
   return (neuron0x13800f0()*-0.201257);
}

double NNfunction_ss_uRsR::synapse0x139e690() {
   return (neuron0x1380430()*-0.0336077);
}

double NNfunction_ss_uRsR::synapse0x139e6d0() {
   return (neuron0x1380770()*-0.219886);
}

double NNfunction_ss_uRsR::synapse0x139e710() {
   return (neuron0x1380ab0()*-0.585087);
}

double NNfunction_ss_uRsR::synapse0x139e750() {
   return (neuron0x1380df0()*0.206879);
}

double NNfunction_ss_uRsR::synapse0x139e790() {
   return (neuron0x1381130()*-0.315227);
}

double NNfunction_ss_uRsR::synapse0x139eb10() {
   return (neuron0x137c570()*0.0210783);
}

double NNfunction_ss_uRsR::synapse0x139eb50() {
   return (neuron0x137c8b0()*0.0113873);
}

double NNfunction_ss_uRsR::synapse0x139eb90() {
   return (neuron0x137cbf0()*0.0196675);
}

double NNfunction_ss_uRsR::synapse0x139ebd0() {
   return (neuron0x137cf30()*-20.3913);
}

double NNfunction_ss_uRsR::synapse0x139ec10() {
   return (neuron0x137d270()*0.00726322);
}

double NNfunction_ss_uRsR::synapse0x139ec50() {
   return (neuron0x137d5b0()*0.00317408);
}

double NNfunction_ss_uRsR::synapse0x139ec90() {
   return (neuron0x137d8f0()*-0.00850417);
}

double NNfunction_ss_uRsR::synapse0x139ecd0() {
   return (neuron0x137dc30()*0.0178529);
}

double NNfunction_ss_uRsR::synapse0x139ed10() {
   return (neuron0x137df70()*0.0277856);
}

double NNfunction_ss_uRsR::synapse0x139ed50() {
   return (neuron0x137e2b0()*-0.0345507);
}

double NNfunction_ss_uRsR::synapse0x139ed90() {
   return (neuron0x137e5f0()*-0.013005);
}

double NNfunction_ss_uRsR::synapse0x139edd0() {
   return (neuron0x137e930()*-0.00881469);
}

double NNfunction_ss_uRsR::synapse0x139ee10() {
   return (neuron0x137ec70()*-0.000153795);
}

double NNfunction_ss_uRsR::synapse0x139ee50() {
   return (neuron0x137efb0()*0.014108);
}

double NNfunction_ss_uRsR::synapse0x139ee90() {
   return (neuron0x137f2f0()*0.194517);
}

double NNfunction_ss_uRsR::synapse0x139eed0() {
   return (neuron0x137f630()*-0.00988335);
}

double NNfunction_ss_uRsR::synapse0x139e960() {
   return (neuron0x137f970()*0.000950739);
}

double NNfunction_ss_uRsR::synapse0x139e9a0() {
   return (neuron0x137fed0()*0.00176495);
}

double NNfunction_ss_uRsR::synapse0x139f020() {
   return (neuron0x13800f0()*0.273353);
}

double NNfunction_ss_uRsR::synapse0x139f060() {
   return (neuron0x1380430()*-0.0371812);
}

double NNfunction_ss_uRsR::synapse0x139f0a0() {
   return (neuron0x1380770()*-0.0300587);
}

double NNfunction_ss_uRsR::synapse0x139f0e0() {
   return (neuron0x1380ab0()*-0.0138782);
}

double NNfunction_ss_uRsR::synapse0x139f120() {
   return (neuron0x1380df0()*0.0147385);
}

double NNfunction_ss_uRsR::synapse0x139f160() {
   return (neuron0x1381130()*-0.0198094);
}

double NNfunction_ss_uRsR::synapse0x139f4e0() {
   return (neuron0x137c570()*-0.167885);
}

double NNfunction_ss_uRsR::synapse0x139f520() {
   return (neuron0x137c8b0()*-0.272862);
}

double NNfunction_ss_uRsR::synapse0x139f560() {
   return (neuron0x137cbf0()*0.181143);
}

double NNfunction_ss_uRsR::synapse0x139f5a0() {
   return (neuron0x137cf30()*0.146242);
}

double NNfunction_ss_uRsR::synapse0x139f5e0() {
   return (neuron0x137d270()*-0.603372);
}

double NNfunction_ss_uRsR::synapse0x139f620() {
   return (neuron0x137d5b0()*0.437763);
}

double NNfunction_ss_uRsR::synapse0x139f660() {
   return (neuron0x137d8f0()*-0.210438);
}

double NNfunction_ss_uRsR::synapse0x139f6a0() {
   return (neuron0x137dc30()*0.275129);
}

double NNfunction_ss_uRsR::synapse0x139f6e0() {
   return (neuron0x137df70()*0.216996);
}

double NNfunction_ss_uRsR::synapse0x139f720() {
   return (neuron0x137e2b0()*0.088592);
}

double NNfunction_ss_uRsR::synapse0x139f760() {
   return (neuron0x137e5f0()*0.191864);
}

double NNfunction_ss_uRsR::synapse0x139f7a0() {
   return (neuron0x137e930()*-0.171135);
}

double NNfunction_ss_uRsR::synapse0x139f7e0() {
   return (neuron0x137ec70()*-0.0140989);
}

double NNfunction_ss_uRsR::synapse0x139f820() {
   return (neuron0x137efb0()*-0.0383486);
}

double NNfunction_ss_uRsR::synapse0x139f860() {
   return (neuron0x137f2f0()*-0.360028);
}

double NNfunction_ss_uRsR::synapse0x139f8a0() {
   return (neuron0x137f630()*-0.166654);
}

double NNfunction_ss_uRsR::synapse0x139f330() {
   return (neuron0x137f970()*-0.266291);
}

double NNfunction_ss_uRsR::synapse0x139f370() {
   return (neuron0x137fed0()*0.385727);
}

double NNfunction_ss_uRsR::synapse0x138fea0() {
   return (neuron0x13800f0()*-0.187233);
}

double NNfunction_ss_uRsR::synapse0x138fee0() {
   return (neuron0x1380430()*-0.224806);
}

double NNfunction_ss_uRsR::synapse0x138ff20() {
   return (neuron0x1380770()*-0.34584);
}

double NNfunction_ss_uRsR::synapse0x138ff60() {
   return (neuron0x1380ab0()*0.201041);
}

double NNfunction_ss_uRsR::synapse0x138ffa0() {
   return (neuron0x1380df0()*-0.0688775);
}

double NNfunction_ss_uRsR::synapse0x138ffe0() {
   return (neuron0x1381130()*0.0151077);
}

double NNfunction_ss_uRsR::synapse0x1390360() {
   return (neuron0x137c570()*-0.0324094);
}

double NNfunction_ss_uRsR::synapse0x13903a0() {
   return (neuron0x137c8b0()*-0.132154);
}

double NNfunction_ss_uRsR::synapse0x13903e0() {
   return (neuron0x137cbf0()*-0.00450144);
}

double NNfunction_ss_uRsR::synapse0x1390420() {
   return (neuron0x137cf30()*2.69291);
}

double NNfunction_ss_uRsR::synapse0x1390460() {
   return (neuron0x137d270()*0.0239526);
}

double NNfunction_ss_uRsR::synapse0x13904a0() {
   return (neuron0x137d5b0()*-0.00762661);
}

double NNfunction_ss_uRsR::synapse0x13904e0() {
   return (neuron0x137d8f0()*-0.0587084);
}

double NNfunction_ss_uRsR::synapse0x1390520() {
   return (neuron0x137dc30()*-0.0168615);
}

double NNfunction_ss_uRsR::synapse0x1390560() {
   return (neuron0x137df70()*-0.0173426);
}

double NNfunction_ss_uRsR::synapse0x13905a0() {
   return (neuron0x137e2b0()*0.00199788);
}

double NNfunction_ss_uRsR::synapse0x13905e0() {
   return (neuron0x137e5f0()*-0.0104161);
}

double NNfunction_ss_uRsR::synapse0x1390620() {
   return (neuron0x137e930()*-0.0276334);
}

double NNfunction_ss_uRsR::synapse0x1390660() {
   return (neuron0x137ec70()*0.00120039);
}

double NNfunction_ss_uRsR::synapse0x13906a0() {
   return (neuron0x137efb0()*0.0234094);
}

double NNfunction_ss_uRsR::synapse0x13906e0() {
   return (neuron0x137f2f0()*-1.21957);
}

double NNfunction_ss_uRsR::synapse0x1390720() {
   return (neuron0x137f630()*-0.00480414);
}

double NNfunction_ss_uRsR::synapse0x13901b0() {
   return (neuron0x137f970()*-0.0938108);
}

double NNfunction_ss_uRsR::synapse0x13901f0() {
   return (neuron0x137fed0()*0.110269);
}

double NNfunction_ss_uRsR::synapse0x1390870() {
   return (neuron0x13800f0()*-1.22405);
}

double NNfunction_ss_uRsR::synapse0x13908b0() {
   return (neuron0x1380430()*0.00672738);
}

double NNfunction_ss_uRsR::synapse0x13908f0() {
   return (neuron0x1380770()*0.0077953);
}

double NNfunction_ss_uRsR::synapse0x1390930() {
   return (neuron0x1380ab0()*0.00247251);
}

double NNfunction_ss_uRsR::synapse0x1390970() {
   return (neuron0x1380df0()*-0.00462717);
}

double NNfunction_ss_uRsR::synapse0x13909b0() {
   return (neuron0x1381130()*0.00899479);
}

double NNfunction_ss_uRsR::synapse0x1390d30() {
   return (neuron0x137c570()*-0.0886242);
}

double NNfunction_ss_uRsR::synapse0x1390d70() {
   return (neuron0x137c8b0()*-0.209356);
}

double NNfunction_ss_uRsR::synapse0x1390db0() {
   return (neuron0x137cbf0()*-0.165138);
}

double NNfunction_ss_uRsR::synapse0x1390df0() {
   return (neuron0x137cf30()*0.275047);
}

double NNfunction_ss_uRsR::synapse0x1390e30() {
   return (neuron0x137d270()*0.0404825);
}

double NNfunction_ss_uRsR::synapse0x1390e70() {
   return (neuron0x137d5b0()*0.299318);
}

double NNfunction_ss_uRsR::synapse0x1390eb0() {
   return (neuron0x137d8f0()*-0.0764836);
}

double NNfunction_ss_uRsR::synapse0x1390ef0() {
   return (neuron0x137dc30()*-0.465371);
}

double NNfunction_ss_uRsR::synapse0x1390f30() {
   return (neuron0x137df70()*0.0728851);
}

double NNfunction_ss_uRsR::synapse0x1390f70() {
   return (neuron0x137e2b0()*0.760913);
}

double NNfunction_ss_uRsR::synapse0x1390fb0() {
   return (neuron0x137e5f0()*0.662021);
}

double NNfunction_ss_uRsR::synapse0x1390ff0() {
   return (neuron0x137e930()*0.333332);
}

double NNfunction_ss_uRsR::synapse0x1391030() {
   return (neuron0x137ec70()*0.476011);
}

double NNfunction_ss_uRsR::synapse0x1391070() {
   return (neuron0x137efb0()*0.41822);
}

double NNfunction_ss_uRsR::synapse0x13910b0() {
   return (neuron0x137f2f0()*-1.23929);
}

double NNfunction_ss_uRsR::synapse0x13910f0() {
   return (neuron0x137f630()*0.130387);
}

double NNfunction_ss_uRsR::synapse0x1390b80() {
   return (neuron0x137f970()*0.264233);
}

double NNfunction_ss_uRsR::synapse0x1390bc0() {
   return (neuron0x137fed0()*0.0121903);
}

double NNfunction_ss_uRsR::synapse0x1391240() {
   return (neuron0x13800f0()*0.259602);
}

double NNfunction_ss_uRsR::synapse0x1391280() {
   return (neuron0x1380430()*0.320109);
}

double NNfunction_ss_uRsR::synapse0x13912c0() {
   return (neuron0x1380770()*0.23487);
}

double NNfunction_ss_uRsR::synapse0x1391300() {
   return (neuron0x1380ab0()*0.325361);
}

double NNfunction_ss_uRsR::synapse0x1391340() {
   return (neuron0x1380df0()*0.177784);
}

double NNfunction_ss_uRsR::synapse0x1391380() {
   return (neuron0x1381130()*0.182848);
}

double NNfunction_ss_uRsR::synapse0x1391700() {
   return (neuron0x137c570()*-0.00378193);
}

double NNfunction_ss_uRsR::synapse0x1391740() {
   return (neuron0x137c8b0()*-0.40144);
}

double NNfunction_ss_uRsR::synapse0x1391780() {
   return (neuron0x137cbf0()*-0.159104);
}

double NNfunction_ss_uRsR::synapse0x13917c0() {
   return (neuron0x137cf30()*-0.393229);
}

double NNfunction_ss_uRsR::synapse0x1391800() {
   return (neuron0x137d270()*-0.20466);
}

double NNfunction_ss_uRsR::synapse0x1391840() {
   return (neuron0x137d5b0()*-0.148682);
}

double NNfunction_ss_uRsR::synapse0x1391880() {
   return (neuron0x137d8f0()*-0.467008);
}

double NNfunction_ss_uRsR::synapse0x13918c0() {
   return (neuron0x137dc30()*-0.172163);
}

double NNfunction_ss_uRsR::synapse0x1391900() {
   return (neuron0x137df70()*0.400233);
}

double NNfunction_ss_uRsR::synapse0x1391940() {
   return (neuron0x137e2b0()*-0.858546);
}

double NNfunction_ss_uRsR::synapse0x1391980() {
   return (neuron0x137e5f0()*0.0991908);
}

double NNfunction_ss_uRsR::synapse0x13919c0() {
   return (neuron0x137e930()*0.00274254);
}

double NNfunction_ss_uRsR::synapse0x1391a00() {
   return (neuron0x137ec70()*0.184887);
}

double NNfunction_ss_uRsR::synapse0x1391a40() {
   return (neuron0x137efb0()*-0.403844);
}

double NNfunction_ss_uRsR::synapse0x1391a80() {
   return (neuron0x137f2f0()*-0.337044);
}

double NNfunction_ss_uRsR::synapse0x1391ac0() {
   return (neuron0x137f630()*0.197077);
}

double NNfunction_ss_uRsR::synapse0x1391550() {
   return (neuron0x137f970()*-0.236144);
}

double NNfunction_ss_uRsR::synapse0x1391590() {
   return (neuron0x137fed0()*0.417347);
}

double NNfunction_ss_uRsR::synapse0x1391c10() {
   return (neuron0x13800f0()*0.569259);
}

double NNfunction_ss_uRsR::synapse0x1391c50() {
   return (neuron0x1380430()*-0.0448458);
}

double NNfunction_ss_uRsR::synapse0x1391c90() {
   return (neuron0x1380770()*0.161876);
}

double NNfunction_ss_uRsR::synapse0x1391cd0() {
   return (neuron0x1380ab0()*-0.364094);
}

double NNfunction_ss_uRsR::synapse0x1391d10() {
   return (neuron0x1380df0()*0.123243);
}

double NNfunction_ss_uRsR::synapse0x1391d50() {
   return (neuron0x1381130()*0.136602);
}

double NNfunction_ss_uRsR::synapse0x13a3c20() {
   return (neuron0x137c570()*0.00594677);
}

double NNfunction_ss_uRsR::synapse0x13a3c60() {
   return (neuron0x137c8b0()*-0.160852);
}

double NNfunction_ss_uRsR::synapse0x13a3ca0() {
   return (neuron0x137cbf0()*0.505549);
}

double NNfunction_ss_uRsR::synapse0x13a3ce0() {
   return (neuron0x137cf30()*-0.170297);
}

double NNfunction_ss_uRsR::synapse0x13a3d20() {
   return (neuron0x137d270()*0.600554);
}

double NNfunction_ss_uRsR::synapse0x13a3d60() {
   return (neuron0x137d5b0()*0.326346);
}

double NNfunction_ss_uRsR::synapse0x13a3da0() {
   return (neuron0x137d8f0()*-0.0400267);
}

double NNfunction_ss_uRsR::synapse0x13a3de0() {
   return (neuron0x137dc30()*0.0866879);
}

double NNfunction_ss_uRsR::synapse0x13a3e20() {
   return (neuron0x137df70()*0.0540362);
}

double NNfunction_ss_uRsR::synapse0x13a3e60() {
   return (neuron0x137e2b0()*0.308141);
}

double NNfunction_ss_uRsR::synapse0x13a3ea0() {
   return (neuron0x137e5f0()*0.056969);
}

double NNfunction_ss_uRsR::synapse0x13a3ee0() {
   return (neuron0x137e930()*-0.0258503);
}

double NNfunction_ss_uRsR::synapse0x13a3f20() {
   return (neuron0x137ec70()*0.0480002);
}

double NNfunction_ss_uRsR::synapse0x13a3f60() {
   return (neuron0x137efb0()*0.961575);
}

double NNfunction_ss_uRsR::synapse0x13a3fa0() {
   return (neuron0x137f2f0()*0.720923);
}

double NNfunction_ss_uRsR::synapse0x13a3fe0() {
   return (neuron0x137f630()*0.027848);
}

double NNfunction_ss_uRsR::synapse0x1391d90() {
   return (neuron0x137f970()*-0.290462);
}

double NNfunction_ss_uRsR::synapse0x1391dd0() {
   return (neuron0x137fed0()*0.258011);
}

double NNfunction_ss_uRsR::synapse0x13a4130() {
   return (neuron0x13800f0()*0.353313);
}

double NNfunction_ss_uRsR::synapse0x13a4170() {
   return (neuron0x1380430()*-0.219907);
}

double NNfunction_ss_uRsR::synapse0x13a41b0() {
   return (neuron0x1380770()*0.177838);
}

double NNfunction_ss_uRsR::synapse0x13a41f0() {
   return (neuron0x1380ab0()*-0.211345);
}

double NNfunction_ss_uRsR::synapse0x13a4230() {
   return (neuron0x1380df0()*-0.128541);
}

double NNfunction_ss_uRsR::synapse0x13a4270() {
   return (neuron0x1381130()*-0.109186);
}

double NNfunction_ss_uRsR::synapse0x13a45f0() {
   return (neuron0x137c570()*-0.0037525);
}

double NNfunction_ss_uRsR::synapse0x13a4630() {
   return (neuron0x137c8b0()*-0.0666785);
}

double NNfunction_ss_uRsR::synapse0x13a4670() {
   return (neuron0x137cbf0()*-0.0200646);
}

double NNfunction_ss_uRsR::synapse0x13a46b0() {
   return (neuron0x137cf30()*0.111843);
}

double NNfunction_ss_uRsR::synapse0x13a46f0() {
   return (neuron0x137d270()*0.0344552);
}

double NNfunction_ss_uRsR::synapse0x13a4730() {
   return (neuron0x137d5b0()*-0.0398886);
}

double NNfunction_ss_uRsR::synapse0x13a4770() {
   return (neuron0x137d8f0()*-0.0186893);
}

double NNfunction_ss_uRsR::synapse0x13a47b0() {
   return (neuron0x137dc30()*-0.0351174);
}

double NNfunction_ss_uRsR::synapse0x13a47f0() {
   return (neuron0x137df70()*-0.0577781);
}

double NNfunction_ss_uRsR::synapse0x13a4830() {
   return (neuron0x137e2b0()*-0.0368527);
}

double NNfunction_ss_uRsR::synapse0x13a4870() {
   return (neuron0x137e5f0()*-0.0437413);
}

double NNfunction_ss_uRsR::synapse0x13a48b0() {
   return (neuron0x137e930()*0.0261933);
}

double NNfunction_ss_uRsR::synapse0x13a48f0() {
   return (neuron0x137ec70()*0.0345116);
}

double NNfunction_ss_uRsR::synapse0x13a4930() {
   return (neuron0x137efb0()*0.0871762);
}

double NNfunction_ss_uRsR::synapse0x13a4970() {
   return (neuron0x137f2f0()*1.18442);
}

double NNfunction_ss_uRsR::synapse0x13a49b0() {
   return (neuron0x137f630()*-0.00410345);
}

double NNfunction_ss_uRsR::synapse0x13a4440() {
   return (neuron0x137f970()*0.0850254);
}

double NNfunction_ss_uRsR::synapse0x13a4480() {
   return (neuron0x137fed0()*0.0153673);
}

double NNfunction_ss_uRsR::synapse0x13a4b00() {
   return (neuron0x13800f0()*1.16893);
}

double NNfunction_ss_uRsR::synapse0x13a4b40() {
   return (neuron0x1380430()*0.0473433);
}

double NNfunction_ss_uRsR::synapse0x13a4b80() {
   return (neuron0x1380770()*0.0143077);
}

double NNfunction_ss_uRsR::synapse0x13a4bc0() {
   return (neuron0x1380ab0()*-0.122511);
}

double NNfunction_ss_uRsR::synapse0x13a4c00() {
   return (neuron0x1380df0()*-0.0155659);
}

double NNfunction_ss_uRsR::synapse0x13a4c40() {
   return (neuron0x1381130()*-0.0365897);
}

double NNfunction_ss_uRsR::synapse0x13a4fc0() {
   return (neuron0x137c570()*-0.394596);
}

double NNfunction_ss_uRsR::synapse0x13a5000() {
   return (neuron0x137c8b0()*0.173871);
}

double NNfunction_ss_uRsR::synapse0x13a5040() {
   return (neuron0x137cbf0()*0.0911259);
}

double NNfunction_ss_uRsR::synapse0x13a5080() {
   return (neuron0x137cf30()*0.0333794);
}

double NNfunction_ss_uRsR::synapse0x13a50c0() {
   return (neuron0x137d270()*-0.102302);
}

double NNfunction_ss_uRsR::synapse0x13a5100() {
   return (neuron0x137d5b0()*-0.528388);
}

double NNfunction_ss_uRsR::synapse0x13a5140() {
   return (neuron0x137d8f0()*-0.237165);
}

double NNfunction_ss_uRsR::synapse0x13a5180() {
   return (neuron0x137dc30()*-0.0320626);
}

double NNfunction_ss_uRsR::synapse0x13a51c0() {
   return (neuron0x137df70()*0.239206);
}

double NNfunction_ss_uRsR::synapse0x13a5200() {
   return (neuron0x137e2b0()*0.00289929);
}

double NNfunction_ss_uRsR::synapse0x13a5240() {
   return (neuron0x137e5f0()*-0.0700585);
}

double NNfunction_ss_uRsR::synapse0x13a5280() {
   return (neuron0x137e930()*0.199544);
}

double NNfunction_ss_uRsR::synapse0x13a52c0() {
   return (neuron0x137ec70()*-0.0167961);
}

double NNfunction_ss_uRsR::synapse0x13a5300() {
   return (neuron0x137efb0()*0.296006);
}

double NNfunction_ss_uRsR::synapse0x13a5340() {
   return (neuron0x137f2f0()*-0.235842);
}

double NNfunction_ss_uRsR::synapse0x13a5380() {
   return (neuron0x137f630()*-0.537882);
}

double NNfunction_ss_uRsR::synapse0x13a4e10() {
   return (neuron0x137f970()*-0.221113);
}

double NNfunction_ss_uRsR::synapse0x13a4e50() {
   return (neuron0x137fed0()*-0.219989);
}

double NNfunction_ss_uRsR::synapse0x13a54d0() {
   return (neuron0x13800f0()*-0.0973377);
}

double NNfunction_ss_uRsR::synapse0x13a5510() {
   return (neuron0x1380430()*0.055156);
}

double NNfunction_ss_uRsR::synapse0x13a5550() {
   return (neuron0x1380770()*-0.0901376);
}

double NNfunction_ss_uRsR::synapse0x13a5590() {
   return (neuron0x1380ab0()*0.189764);
}

double NNfunction_ss_uRsR::synapse0x13a55d0() {
   return (neuron0x1380df0()*-0.157283);
}

double NNfunction_ss_uRsR::synapse0x13a5610() {
   return (neuron0x1381130()*-0.00537313);
}

double NNfunction_ss_uRsR::synapse0x13a5990() {
   return (neuron0x137c570()*0.310728);
}

double NNfunction_ss_uRsR::synapse0x13a59d0() {
   return (neuron0x137c8b0()*-0.0578118);
}

double NNfunction_ss_uRsR::synapse0x13a5a10() {
   return (neuron0x137cbf0()*0.552781);
}

double NNfunction_ss_uRsR::synapse0x13a5a50() {
   return (neuron0x137cf30()*0.494268);
}

double NNfunction_ss_uRsR::synapse0x13a5a90() {
   return (neuron0x137d270()*0.0186594);
}

double NNfunction_ss_uRsR::synapse0x13a5ad0() {
   return (neuron0x137d5b0()*0.24773);
}

double NNfunction_ss_uRsR::synapse0x13a5b10() {
   return (neuron0x137d8f0()*-0.19887);
}

double NNfunction_ss_uRsR::synapse0x13a5b50() {
   return (neuron0x137dc30()*-0.163059);
}

double NNfunction_ss_uRsR::synapse0x13a5b90() {
   return (neuron0x137df70()*-0.383093);
}

double NNfunction_ss_uRsR::synapse0x13a5bd0() {
   return (neuron0x137e2b0()*0.630323);
}

double NNfunction_ss_uRsR::synapse0x13a5c10() {
   return (neuron0x137e5f0()*0.368478);
}

double NNfunction_ss_uRsR::synapse0x13a5c50() {
   return (neuron0x137e930()*-0.388);
}

double NNfunction_ss_uRsR::synapse0x13a5c90() {
   return (neuron0x137ec70()*-0.920667);
}

double NNfunction_ss_uRsR::synapse0x13a5cd0() {
   return (neuron0x137efb0()*-0.670246);
}

double NNfunction_ss_uRsR::synapse0x13a5d10() {
   return (neuron0x137f2f0()*0.619673);
}

double NNfunction_ss_uRsR::synapse0x13a5d50() {
   return (neuron0x137f630()*-0.0618822);
}

double NNfunction_ss_uRsR::synapse0x13a57e0() {
   return (neuron0x137f970()*0.256324);
}

double NNfunction_ss_uRsR::synapse0x13a5820() {
   return (neuron0x137fed0()*0.0381019);
}

double NNfunction_ss_uRsR::synapse0x13a5ea0() {
   return (neuron0x13800f0()*-0.24435);
}

double NNfunction_ss_uRsR::synapse0x13a5ee0() {
   return (neuron0x1380430()*-1.03665);
}

double NNfunction_ss_uRsR::synapse0x13a5f20() {
   return (neuron0x1380770()*-0.521775);
}

double NNfunction_ss_uRsR::synapse0x13a5f60() {
   return (neuron0x1380ab0()*0.726621);
}

double NNfunction_ss_uRsR::synapse0x13a5fa0() {
   return (neuron0x1380df0()*-0.150042);
}

double NNfunction_ss_uRsR::synapse0x13a5fe0() {
   return (neuron0x1381130()*0.0795298);
}

double NNfunction_ss_uRsR::synapse0x1382580() {
   return (neuron0x13815d0()*-0.663252);
}

double NNfunction_ss_uRsR::synapse0x13825c0() {
   return (neuron0x1381ee0()*-2.25708);
}

double NNfunction_ss_uRsR::synapse0x1383a90() {
   return (neuron0x13829c0()*0.289582);
}

double NNfunction_ss_uRsR::synapse0x1383ad0() {
   return (neuron0x113c250()*0.362417);
}

double NNfunction_ss_uRsR::synapse0x1384460() {
   return (neuron0x13837e0()*2.1175);
}

double NNfunction_ss_uRsR::synapse0x13844a0() {
   return (neuron0x13841b0()*-0.508714);
}

double NNfunction_ss_uRsR::synapse0x1385230() {
   return (neuron0x1384f80()*0.339029);
}

double NNfunction_ss_uRsR::synapse0x1385270() {
   return (neuron0x1385950()*-0.865821);
}

double NNfunction_ss_uRsR::synapse0x1385c00() {
   return (neuron0x1386320()*-1.0043);
}

double NNfunction_ss_uRsR::synapse0x1385c40() {
   return (neuron0x1386e00()*0.470771);
}

double NNfunction_ss_uRsR::synapse0x13865d0() {
   return (neuron0x13877d0()*-0.437421);
}

double NNfunction_ss_uRsR::synapse0x1386610() {
   return (neuron0x13848b0()*-1.01354);
}

double NNfunction_ss_uRsR::synapse0x13870b0() {
   return (neuron0x1389380()*-0.546397);
}

double NNfunction_ss_uRsR::synapse0x13870f0() {
   return (neuron0x1389d50()*1.63932);
}

double NNfunction_ss_uRsR::synapse0x1387a80() {
   return (neuron0x138a720()*0.320377);
}

double NNfunction_ss_uRsR::synapse0x1387ac0() {
   return (neuron0x138b0f0()*-1.56365);
}

double NNfunction_ss_uRsR::synapse0x1384b60() {
   return (neuron0x138cf00()*-1.00174);
}

double NNfunction_ss_uRsR::synapse0x1384ba0() {
   return (neuron0x138d1e0()*-1.53147);
}

double NNfunction_ss_uRsR::synapse0x1389630() {
   return (neuron0x138dbb0()*-0.738874);
}

double NNfunction_ss_uRsR::synapse0x1389670() {
   return (neuron0x138e580()*0.324987);
}

double NNfunction_ss_uRsR::synapse0x138a000() {
   return (neuron0x138ef50()*1.77789);
}

double NNfunction_ss_uRsR::synapse0x138a040() {
   return (neuron0x138f920()*-0.00163877);
}

double NNfunction_ss_uRsR::synapse0x138a9d0() {
   return (neuron0x1388470()*-0.551211);
}

double NNfunction_ss_uRsR::synapse0x138aa10() {
   return (neuron0x1388e40()*0.575252);
}

double NNfunction_ss_uRsR::synapse0x138b3a0() {
   return (neuron0x13926b0()*0.406519);
}

double NNfunction_ss_uRsR::synapse0x138b3e0() {
   return (neuron0x1393080()*-0.396101);
}

double NNfunction_ss_uRsR::synapse0x137f510() {
   return (neuron0x1393a50()*0.56447);
}

double NNfunction_ss_uRsR::synapse0x137f550() {
   return (neuron0x1394420()*-4.12191);
}

double NNfunction_ss_uRsR::synapse0x138d490() {
   return (neuron0x1394df0()*-0.294682);
}

double NNfunction_ss_uRsR::synapse0x138d4d0() {
   return (neuron0x13957c0()*1.49369);
}

double NNfunction_ss_uRsR::synapse0x138de60() {
   return (neuron0x1396190()*-3.11929);
}

double NNfunction_ss_uRsR::synapse0x138dea0() {
   return (neuron0x1396b60()*1.09888);
}

double NNfunction_ss_uRsR::synapse0x138e830() {
   return (neuron0x138cbf0()*0.379848);
}

double NNfunction_ss_uRsR::synapse0x138e870() {
   return (neuron0x1399740()*6.49996);
}

double NNfunction_ss_uRsR::synapse0x138f200() {
   return (neuron0x139a110()*3.87076);
}

double NNfunction_ss_uRsR::synapse0x138f240() {
   return (neuron0x139aae0()*0.551644);
}

double NNfunction_ss_uRsR::synapse0x138fbd0() {
   return (neuron0x139b4b0()*0.488326);
}

double NNfunction_ss_uRsR::synapse0x138fc10() {
   return (neuron0x139be80()*-0.317769);
}

double NNfunction_ss_uRsR::synapse0x1388720() {
   return (neuron0x139c850()*-1.43613);
}

double NNfunction_ss_uRsR::synapse0x1388760() {
   return (neuron0x139d220()*0.814547);
}

double NNfunction_ss_uRsR::synapse0x1391fd0() {
   return (neuron0x139dbf0()*-0.262648);
}

double NNfunction_ss_uRsR::synapse0x1392010() {
   return (neuron0x139e7d0()*-5.75643);
}

double NNfunction_ss_uRsR::synapse0x1392960() {
   return (neuron0x139f1a0()*0.762372);
}

double NNfunction_ss_uRsR::synapse0x13929a0() {
   return (neuron0x1390020()*-1.15831);
}

double NNfunction_ss_uRsR::synapse0x1393330() {
   return (neuron0x13909f0()*-0.359162);
}

double NNfunction_ss_uRsR::synapse0x1393370() {
   return (neuron0x13913c0()*0.448309);
}

double NNfunction_ss_uRsR::synapse0x1393d00() {
   return (neuron0x13a3a00()*-0.450862);
}

double NNfunction_ss_uRsR::synapse0x1393d40() {
   return (neuron0x13a42b0()*-0.398317);
}

double NNfunction_ss_uRsR::synapse0x13946d0() {
   return (neuron0x13a4c80()*0.780073);
}

double NNfunction_ss_uRsR::synapse0x1394710() {
   return (neuron0x13a5650()*-0.278861);
}

double NNfunction_ss_uRsR::synapse0x1396e10() {
   return (neuron0x13815d0()*-0.54972);
}

double NNfunction_ss_uRsR::synapse0x1396e50() {
   return (neuron0x1381ee0()*1.09131);
}

double NNfunction_ss_uRsR::synapse0x138c3d0() {
   return (neuron0x13829c0()*0.176022);
}

double NNfunction_ss_uRsR::synapse0x138c410() {
   return (neuron0x113c250()*0.235608);
}

double NNfunction_ss_uRsR::synapse0x13999f0() {
   return (neuron0x13837e0()*1.84372);
}

double NNfunction_ss_uRsR::synapse0x1399a30() {
   return (neuron0x13841b0()*-0.352302);
}

double NNfunction_ss_uRsR::synapse0x139a3c0() {
   return (neuron0x1384f80()*0.231826);
}

double NNfunction_ss_uRsR::synapse0x139a400() {
   return (neuron0x1385950()*-0.0968657);
}

double NNfunction_ss_uRsR::synapse0x139ad90() {
   return (neuron0x1386320()*-0.335713);
}

double NNfunction_ss_uRsR::synapse0x139add0() {
   return (neuron0x1386e00()*0.264167);
}

double NNfunction_ss_uRsR::synapse0x139b760() {
   return (neuron0x13877d0()*-0.31061);
}

double NNfunction_ss_uRsR::synapse0x139b7a0() {
   return (neuron0x13848b0()*-0.836914);
}

double NNfunction_ss_uRsR::synapse0x139c130() {
   return (neuron0x1389380()*-0.352794);
}

double NNfunction_ss_uRsR::synapse0x139c170() {
   return (neuron0x1389d50()*1.33756);
}

double NNfunction_ss_uRsR::synapse0x139cb00() {
   return (neuron0x138a720()*0.185568);
}

double NNfunction_ss_uRsR::synapse0x139cb40() {
   return (neuron0x138b0f0()*-1.31254);
}

double NNfunction_ss_uRsR::synapse0x139d4d0() {
   return (neuron0x138cf00()*-0.671036);
}

double NNfunction_ss_uRsR::synapse0x139d510() {
   return (neuron0x138d1e0()*-1.79858);
}

double NNfunction_ss_uRsR::synapse0x139dea0() {
   return (neuron0x138dbb0()*-0.447639);
}

double NNfunction_ss_uRsR::synapse0x139dee0() {
   return (neuron0x138e580()*0.209853);
}

double NNfunction_ss_uRsR::synapse0x139ea80() {
   return (neuron0x138ef50()*0.676941);
}

double NNfunction_ss_uRsR::synapse0x139eac0() {
   return (neuron0x138f920()*0.572511);
}

double NNfunction_ss_uRsR::synapse0x139f450() {
   return (neuron0x1388470()*1.24722);
}

double NNfunction_ss_uRsR::synapse0x139f490() {
   return (neuron0x1388e40()*0.40105);
}

double NNfunction_ss_uRsR::synapse0x13902d0() {
   return (neuron0x13926b0()*0.266246);
}

double NNfunction_ss_uRsR::synapse0x1390310() {
   return (neuron0x1393080()*-0.267286);
}

double NNfunction_ss_uRsR::synapse0x1390ca0() {
   return (neuron0x1393a50()*0.346115);
}

double NNfunction_ss_uRsR::synapse0x1390ce0() {
   return (neuron0x1394420()*-0.151698);
}

double NNfunction_ss_uRsR::synapse0x1391670() {
   return (neuron0x1394df0()*-0.18926);
}

double NNfunction_ss_uRsR::synapse0x13916b0() {
   return (neuron0x13957c0()*1.59951);
}

double NNfunction_ss_uRsR::synapse0x13a3b90() {
   return (neuron0x1396190()*-2.2646);
}

double NNfunction_ss_uRsR::synapse0x13a3bd0() {
   return (neuron0x1396b60()*0.758404);
}

double NNfunction_ss_uRsR::synapse0x13a4560() {
   return (neuron0x138cbf0()*0.499575);
}

double NNfunction_ss_uRsR::synapse0x13a45a0() {
   return (neuron0x1399740()*-0.742492);
}

double NNfunction_ss_uRsR::synapse0x13a4f30() {
   return (neuron0x139a110()*-0.690746);
}

double NNfunction_ss_uRsR::synapse0x13a4f70() {
   return (neuron0x139aae0()*0.389053);
}

double NNfunction_ss_uRsR::synapse0x13a5900() {
   return (neuron0x139b4b0()*0.342269);
}

double NNfunction_ss_uRsR::synapse0x13a5940() {
   return (neuron0x139be80()*-0.0949895);
}

double NNfunction_ss_uRsR::synapse0x13817f0() {
   return (neuron0x139c850()*1.39013);
}

double NNfunction_ss_uRsR::synapse0x1381830() {
   return (neuron0x139d220()*0.523511);
}

double NNfunction_ss_uRsR::synapse0x13950a0() {
   return (neuron0x139dbf0()*-0.179654);
}

double NNfunction_ss_uRsR::synapse0x13950e0() {
   return (neuron0x139e7d0()*1.83779);
}

double NNfunction_ss_uRsR::synapse0x13a6020() {
   return (neuron0x139f1a0()*0.52698);
}

double NNfunction_ss_uRsR::synapse0x13a6060() {
   return (neuron0x1390020()*-0.0081392);
}

double NNfunction_ss_uRsR::synapse0x13a60a0() {
   return (neuron0x13909f0()*-0.219261);
}

double NNfunction_ss_uRsR::synapse0x13a60e0() {
   return (neuron0x13913c0()*0.26832);
}

double NNfunction_ss_uRsR::synapse0x13acf90() {
   return (neuron0x13a3a00()*-0.276488);
}

double NNfunction_ss_uRsR::synapse0x13acfd0() {
   return (neuron0x13a42b0()*0.276405);
}

double NNfunction_ss_uRsR::synapse0x13ad010() {
   return (neuron0x13a4c80()*0.448935);
}

double NNfunction_ss_uRsR::synapse0x13ad050() {
   return (neuron0x13a5650()*-0.182058);
}

double NNfunction_ss_uRsR::synapse0x13ad3d0() {
   return (neuron0x13815d0()*-0.753438);
}

double NNfunction_ss_uRsR::synapse0x13ad410() {
   return (neuron0x1381ee0()*-2.01019);
}

double NNfunction_ss_uRsR::synapse0x13ad450() {
   return (neuron0x13829c0()*0.0255817);
}

double NNfunction_ss_uRsR::synapse0x13ad490() {
   return (neuron0x113c250()*0.0613602);
}

double NNfunction_ss_uRsR::synapse0x13ad4d0() {
   return (neuron0x13837e0()*-0.164048);
}

double NNfunction_ss_uRsR::synapse0x13ad510() {
   return (neuron0x13841b0()*-0.261667);
}

double NNfunction_ss_uRsR::synapse0x13ad550() {
   return (neuron0x1384f80()*0.0393538);
}

double NNfunction_ss_uRsR::synapse0x13ad590() {
   return (neuron0x1385950()*-0.87182);
}

double NNfunction_ss_uRsR::synapse0x13ad5d0() {
   return (neuron0x1386320()*-0.716504);
}

double NNfunction_ss_uRsR::synapse0x13ad610() {
   return (neuron0x1386e00()*-0.10787);
}

double NNfunction_ss_uRsR::synapse0x13ad650() {
   return (neuron0x13877d0()*-0.407268);
}

double NNfunction_ss_uRsR::synapse0x13ad690() {
   return (neuron0x13848b0()*-1.35151);
}

double NNfunction_ss_uRsR::synapse0x13ad6d0() {
   return (neuron0x1389380()*-0.0514571);
}

double NNfunction_ss_uRsR::synapse0x13ad710() {
   return (neuron0x1389d50()*0.182565);
}

double NNfunction_ss_uRsR::synapse0x13ad750() {
   return (neuron0x138a720()*0.0607562);
}

double NNfunction_ss_uRsR::synapse0x13ad790() {
   return (neuron0x138b0f0()*0.682745);
}

double NNfunction_ss_uRsR::synapse0x13ad220() {
   return (neuron0x138cf00()*2.01522);
}

double NNfunction_ss_uRsR::synapse0x13ad260() {
   return (neuron0x138d1e0()*-0.120559);
}

double NNfunction_ss_uRsR::synapse0x13ad8e0() {
   return (neuron0x138dbb0()*-0.126627);
}

double NNfunction_ss_uRsR::synapse0x13ad920() {
   return (neuron0x138e580()*-0.0193195);
}

double NNfunction_ss_uRsR::synapse0x13ad960() {
   return (neuron0x138ef50()*0.0366802);
}

double NNfunction_ss_uRsR::synapse0x13ad9a0() {
   return (neuron0x138f920()*-1.10467);
}

double NNfunction_ss_uRsR::synapse0x13ad9e0() {
   return (neuron0x1388470()*-0.796856);
}

double NNfunction_ss_uRsR::synapse0x13ada20() {
   return (neuron0x1388e40()*0.0340346);
}

double NNfunction_ss_uRsR::synapse0x13ada60() {
   return (neuron0x13926b0()*0.0489358);
}

double NNfunction_ss_uRsR::synapse0x13adaa0() {
   return (neuron0x1393080()*-0.139929);
}

double NNfunction_ss_uRsR::synapse0x13adae0() {
   return (neuron0x1393a50()*0.134073);
}

double NNfunction_ss_uRsR::synapse0x13adb20() {
   return (neuron0x1394420()*-2.00964);
}

double NNfunction_ss_uRsR::synapse0x13adb60() {
   return (neuron0x1394df0()*-0.0427486);
}

double NNfunction_ss_uRsR::synapse0x13adba0() {
   return (neuron0x13957c0()*-2.2787);
}

double NNfunction_ss_uRsR::synapse0x13adbe0() {
   return (neuron0x1396190()*0.333115);
}

double NNfunction_ss_uRsR::synapse0x13adc20() {
   return (neuron0x1396b60()*-0.0405548);
}

double NNfunction_ss_uRsR::synapse0x13ad7d0() {
   return (neuron0x138cbf0()*-0.557038);
}

double NNfunction_ss_uRsR::synapse0x13ad810() {
   return (neuron0x1399740()*3.55637);
}

double NNfunction_ss_uRsR::synapse0x13ad850() {
   return (neuron0x139a110()*0.0469841);
}

double NNfunction_ss_uRsR::synapse0x13ad890() {
   return (neuron0x139aae0()*0.164445);
}

double NNfunction_ss_uRsR::synapse0x13ade70() {
   return (neuron0x139b4b0()*0.161428);
}

double NNfunction_ss_uRsR::synapse0x13adeb0() {
   return (neuron0x139be80()*-0.210706);
}

double NNfunction_ss_uRsR::synapse0x13adef0() {
   return (neuron0x139c850()*-0.46553);
}

double NNfunction_ss_uRsR::synapse0x13adf30() {
   return (neuron0x139d220()*0.165885);
}

double NNfunction_ss_uRsR::synapse0x13adf70() {
   return (neuron0x139dbf0()*-0.0505804);
}

double NNfunction_ss_uRsR::synapse0x13adfb0() {
   return (neuron0x139e7d0()*2.25543);
}

double NNfunction_ss_uRsR::synapse0x13adff0() {
   return (neuron0x139f1a0()*0.188134);
}

double NNfunction_ss_uRsR::synapse0x13ae030() {
   return (neuron0x1390020()*0.301866);
}

double NNfunction_ss_uRsR::synapse0x13ae070() {
   return (neuron0x13909f0()*-0.133651);
}

double NNfunction_ss_uRsR::synapse0x13ae0b0() {
   return (neuron0x13913c0()*0.0391848);
}

double NNfunction_ss_uRsR::synapse0x13ae0f0() {
   return (neuron0x13a3a00()*-0.0489402);
}

double NNfunction_ss_uRsR::synapse0x13ae130() {
   return (neuron0x13a42b0()*-0.496703);
}

double NNfunction_ss_uRsR::synapse0x13ae170() {
   return (neuron0x13a4c80()*-0.0777961);
}

double NNfunction_ss_uRsR::synapse0x13ae1b0() {
   return (neuron0x13a5650()*-0.00126056);
}

double NNfunction_ss_uRsR::synapse0x13ae530() {
   return (neuron0x13815d0()*-0.320026);
}

double NNfunction_ss_uRsR::synapse0x13ae570() {
   return (neuron0x1381ee0()*-0.154142);
}

double NNfunction_ss_uRsR::synapse0x13ae5b0() {
   return (neuron0x13829c0()*-0.141881);
}

double NNfunction_ss_uRsR::synapse0x13ae5f0() {
   return (neuron0x113c250()*-0.704735);
}

double NNfunction_ss_uRsR::synapse0x13ae630() {
   return (neuron0x13837e0()*-0.58467);
}

double NNfunction_ss_uRsR::synapse0x13ae670() {
   return (neuron0x13841b0()*-0.224091);
}

double NNfunction_ss_uRsR::synapse0x13ae6b0() {
   return (neuron0x1384f80()*-0.725193);
}

double NNfunction_ss_uRsR::synapse0x13ae6f0() {
   return (neuron0x1385950()*-0.51989);
}

double NNfunction_ss_uRsR::synapse0x13ae730() {
   return (neuron0x1386320()*-0.174309);
}

double NNfunction_ss_uRsR::synapse0x13ae770() {
   return (neuron0x1386e00()*-0.151385);
}

double NNfunction_ss_uRsR::synapse0x13ae7b0() {
   return (neuron0x13877d0()*-0.536492);
}

double NNfunction_ss_uRsR::synapse0x13ae7f0() {
   return (neuron0x13848b0()*0.314582);
}

double NNfunction_ss_uRsR::synapse0x13ae830() {
   return (neuron0x1389380()*-0.514997);
}

double NNfunction_ss_uRsR::synapse0x13ae870() {
   return (neuron0x1389d50()*-0.768739);
}

double NNfunction_ss_uRsR::synapse0x13ae8b0() {
   return (neuron0x138a720()*-0.627231);
}

double NNfunction_ss_uRsR::synapse0x13ae8f0() {
   return (neuron0x138b0f0()*-0.460745);
}

double NNfunction_ss_uRsR::synapse0x13ae380() {
   return (neuron0x138cf00()*0.0736656);
}

double NNfunction_ss_uRsR::synapse0x13ae3c0() {
   return (neuron0x138d1e0()*-0.374235);
}

double NNfunction_ss_uRsR::synapse0x13aea40() {
   return (neuron0x138dbb0()*0.0677855);
}

double NNfunction_ss_uRsR::synapse0x13aea80() {
   return (neuron0x138e580()*-0.165875);
}

double NNfunction_ss_uRsR::synapse0x13aeac0() {
   return (neuron0x138ef50()*-0.330288);
}

double NNfunction_ss_uRsR::synapse0x13aeb00() {
   return (neuron0x138f920()*-0.625738);
}

double NNfunction_ss_uRsR::synapse0x13aeb40() {
   return (neuron0x1388470()*-0.528838);
}

double NNfunction_ss_uRsR::synapse0x13aeb80() {
   return (neuron0x1388e40()*-0.285274);
}

double NNfunction_ss_uRsR::synapse0x13aebc0() {
   return (neuron0x13926b0()*0.137755);
}

double NNfunction_ss_uRsR::synapse0x13aec00() {
   return (neuron0x1393080()*0.0192394);
}

double NNfunction_ss_uRsR::synapse0x13aec40() {
   return (neuron0x1393a50()*-0.0422031);
}

double NNfunction_ss_uRsR::synapse0x13aec80() {
   return (neuron0x1394420()*-0.646771);
}

double NNfunction_ss_uRsR::synapse0x13aecc0() {
   return (neuron0x1394df0()*-0.858247);
}

double NNfunction_ss_uRsR::synapse0x13aed00() {
   return (neuron0x13957c0()*-0.540807);
}

double NNfunction_ss_uRsR::synapse0x13aed40() {
   return (neuron0x1396190()*-0.378117);
}

double NNfunction_ss_uRsR::synapse0x13aed80() {
   return (neuron0x1396b60()*-0.382746);
}

double NNfunction_ss_uRsR::synapse0x13ae930() {
   return (neuron0x138cbf0()*-0.18602);
}

double NNfunction_ss_uRsR::synapse0x13ae970() {
   return (neuron0x1399740()*-0.957279);
}

double NNfunction_ss_uRsR::synapse0x13ae9b0() {
   return (neuron0x139a110()*-0.566205);
}

double NNfunction_ss_uRsR::synapse0x13ae9f0() {
   return (neuron0x139aae0()*0.16609);
}

double NNfunction_ss_uRsR::synapse0x13aefd0() {
   return (neuron0x139b4b0()*-0.028505);
}

double NNfunction_ss_uRsR::synapse0x13af010() {
   return (neuron0x139be80()*-0.0725423);
}

double NNfunction_ss_uRsR::synapse0x13af050() {
   return (neuron0x139c850()*0.200366);
}

double NNfunction_ss_uRsR::synapse0x13af090() {
   return (neuron0x139d220()*-0.13669);
}

double NNfunction_ss_uRsR::synapse0x13af0d0() {
   return (neuron0x139dbf0()*-0.608025);
}

double NNfunction_ss_uRsR::synapse0x13af110() {
   return (neuron0x139e7d0()*0.117975);
}

double NNfunction_ss_uRsR::synapse0x13af150() {
   return (neuron0x139f1a0()*0.0347714);
}

double NNfunction_ss_uRsR::synapse0x13af190() {
   return (neuron0x1390020()*-0.41257);
}

double NNfunction_ss_uRsR::synapse0x13af1d0() {
   return (neuron0x13909f0()*-0.0895365);
}

double NNfunction_ss_uRsR::synapse0x13af210() {
   return (neuron0x13913c0()*-0.935631);
}

double NNfunction_ss_uRsR::synapse0x13af250() {
   return (neuron0x13a3a00()*0.373415);
}

double NNfunction_ss_uRsR::synapse0x13af290() {
   return (neuron0x13a42b0()*-0.357893);
}

double NNfunction_ss_uRsR::synapse0x13af2d0() {
   return (neuron0x13a4c80()*-0.608466);
}

double NNfunction_ss_uRsR::synapse0x13af310() {
   return (neuron0x13a5650()*-0.163987);
}

double NNfunction_ss_uRsR::synapse0x13af690() {
   return (neuron0x13815d0()*-0.00143444);
}

double NNfunction_ss_uRsR::synapse0x13af6d0() {
   return (neuron0x1381ee0()*0.439325);
}

double NNfunction_ss_uRsR::synapse0x13af710() {
   return (neuron0x13829c0()*0.311497);
}

double NNfunction_ss_uRsR::synapse0x13af750() {
   return (neuron0x113c250()*0.759318);
}

double NNfunction_ss_uRsR::synapse0x13af790() {
   return (neuron0x13837e0()*-0.028497);
}

double NNfunction_ss_uRsR::synapse0x13af7d0() {
   return (neuron0x13841b0()*0.503581);
}

double NNfunction_ss_uRsR::synapse0x13af810() {
   return (neuron0x1384f80()*-0.151933);
}

double NNfunction_ss_uRsR::synapse0x13af850() {
   return (neuron0x1385950()*0.455716);
}

double NNfunction_ss_uRsR::synapse0x13af890() {
   return (neuron0x1386320()*0.87805);
}

double NNfunction_ss_uRsR::synapse0x13af8d0() {
   return (neuron0x1386e00()*-0.449098);
}

double NNfunction_ss_uRsR::synapse0x13af910() {
   return (neuron0x13877d0()*0.371928);
}

double NNfunction_ss_uRsR::synapse0x13af950() {
   return (neuron0x13848b0()*0.141473);
}

double NNfunction_ss_uRsR::synapse0x13af990() {
   return (neuron0x1389380()*0.271958);
}

double NNfunction_ss_uRsR::synapse0x13af9d0() {
   return (neuron0x1389d50()*0.315265);
}

double NNfunction_ss_uRsR::synapse0x13afa10() {
   return (neuron0x138a720()*0.263397);
}

double NNfunction_ss_uRsR::synapse0x13afa50() {
   return (neuron0x138b0f0()*0.0161111);
}

double NNfunction_ss_uRsR::synapse0x13af4e0() {
   return (neuron0x138cf00()*0.00438772);
}

double NNfunction_ss_uRsR::synapse0x13af520() {
   return (neuron0x138d1e0()*0.396675);
}

double NNfunction_ss_uRsR::synapse0x13afba0() {
   return (neuron0x138dbb0()*0.180766);
}

double NNfunction_ss_uRsR::synapse0x13afbe0() {
   return (neuron0x138e580()*0.119489);
}

double NNfunction_ss_uRsR::synapse0x13afc20() {
   return (neuron0x138ef50()*0.0840317);
}

double NNfunction_ss_uRsR::synapse0x13afc60() {
   return (neuron0x138f920()*0.549525);
}

double NNfunction_ss_uRsR::synapse0x13afca0() {
   return (neuron0x1388470()*0.776603);
}

double NNfunction_ss_uRsR::synapse0x13afce0() {
   return (neuron0x1388e40()*0.196046);
}

double NNfunction_ss_uRsR::synapse0x13afd20() {
   return (neuron0x13926b0()*0.472765);
}

double NNfunction_ss_uRsR::synapse0x13afd60() {
   return (neuron0x1393080()*0.123824);
}

double NNfunction_ss_uRsR::synapse0x13afda0() {
   return (neuron0x1393a50()*0.0406645);
}

double NNfunction_ss_uRsR::synapse0x13afde0() {
   return (neuron0x1394420()*0.585378);
}

double NNfunction_ss_uRsR::synapse0x13afe20() {
   return (neuron0x1394df0()*-0.154824);
}

double NNfunction_ss_uRsR::synapse0x13afe60() {
   return (neuron0x13957c0()*0.159496);
}

double NNfunction_ss_uRsR::synapse0x13afea0() {
   return (neuron0x1396190()*-0.299263);
}

double NNfunction_ss_uRsR::synapse0x13afee0() {
   return (neuron0x1396b60()*0.364306);
}

double NNfunction_ss_uRsR::synapse0x13afa90() {
   return (neuron0x138cbf0()*0.456652);
}

double NNfunction_ss_uRsR::synapse0x13afad0() {
   return (neuron0x1399740()*0.298134);
}

double NNfunction_ss_uRsR::synapse0x13afb10() {
   return (neuron0x139a110()*0.152204);
}

double NNfunction_ss_uRsR::synapse0x13afb50() {
   return (neuron0x139aae0()*0.0303841);
}

double NNfunction_ss_uRsR::synapse0x13b0130() {
   return (neuron0x139b4b0()*0.256186);
}

double NNfunction_ss_uRsR::synapse0x13b0170() {
   return (neuron0x139be80()*0.0419054);
}

double NNfunction_ss_uRsR::synapse0x13b01b0() {
   return (neuron0x139c850()*0.482088);
}

double NNfunction_ss_uRsR::synapse0x13b01f0() {
   return (neuron0x139d220()*0.0971463);
}

double NNfunction_ss_uRsR::synapse0x13b0230() {
   return (neuron0x139dbf0()*-0.095048);
}

double NNfunction_ss_uRsR::synapse0x13b0270() {
   return (neuron0x139e7d0()*0.910146);
}

double NNfunction_ss_uRsR::synapse0x13b02b0() {
   return (neuron0x139f1a0()*0.444444);
}

double NNfunction_ss_uRsR::synapse0x13b02f0() {
   return (neuron0x1390020()*0.237024);
}

double NNfunction_ss_uRsR::synapse0x13b0330() {
   return (neuron0x13909f0()*0.774272);
}

double NNfunction_ss_uRsR::synapse0x13b0370() {
   return (neuron0x13913c0()*0.222591);
}

double NNfunction_ss_uRsR::synapse0x13b03b0() {
   return (neuron0x13a3a00()*0.566931);
}

double NNfunction_ss_uRsR::synapse0x13b03f0() {
   return (neuron0x13a42b0()*0.818171);
}

double NNfunction_ss_uRsR::synapse0x13b0430() {
   return (neuron0x13a4c80()*-0.422156);
}

double NNfunction_ss_uRsR::synapse0x13b0470() {
   return (neuron0x13a5650()*1.04541);
}

double NNfunction_ss_uRsR::synapse0x1381590() {
   return (neuron0x13ac850()*13.1372);
}

double NNfunction_ss_uRsR::synapse0x13b06d0() {
   return (neuron0x13acbf0()*-7.23588);
}

double NNfunction_ss_uRsR::synapse0x13b0710() {
   return (neuron0x13ad090()*4.06455);
}

double NNfunction_ss_uRsR::synapse0x13b0750() {
   return (neuron0x13ae1f0()*2.68344);
}

double NNfunction_ss_uRsR::synapse0x13b0790() {
   return (neuron0x13af350()*2.43574);
}

