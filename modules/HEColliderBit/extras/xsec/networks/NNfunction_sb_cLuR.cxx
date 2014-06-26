#include "NNfunction_sb_cLuR.h"
#include <cmath>

double NNfunction_sb_cLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8132)/15.0344;
   input1 = (in1 - 52.2951)/753.895;
   input2 = (in2 - 377.476)/470.783;
   input3 = (in3 - 275.976)/631.863;
   input4 = (in4 - 748.479)/701.396;
   input5 = (in5 - 645.841)/676.066;
   input6 = (in6 - 648.453)/676.217;
   input7 = (in7 - 645.581)/673.97;
   input8 = (in8 - 634.516)/685.783;
   input9 = (in9 - 625.652)/673.883;
   input10 = (in10 - 639.825)/700.363;
   input11 = (in11 - 682.538)/579.318;
   input12 = (in12 - 553.768)/345.519;
   input13 = (in13 - 531.87)/363.355;
   input14 = (in14 - 561.092)/348.798;
   input15 = (in15 - 680.616)/560.265;
   input16 = (in16 - 479.203)/386.367;
   input17 = (in17 - 692.987)/600.644;
   input18 = (in18 - 689.998)/606.244;
   input19 = (in19 - 691.259)/590.944;
   input20 = (in20 - -215.914)/411.423;
   input21 = (in21 - -278.906)/894.357;
   input22 = (in22 - 0.255183)/889.117;
   input23 = (in23 - -11.2255)/506.918;
   switch(index) {
     case 0:
         return neuron0x2489e00();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLuR::Value(int index, double* input) {
   input0 = (input[0] - 22.8132)/15.0344;
   input1 = (input[1] - 52.2951)/753.895;
   input2 = (input[2] - 377.476)/470.783;
   input3 = (input[3] - 275.976)/631.863;
   input4 = (input[4] - 748.479)/701.396;
   input5 = (input[5] - 645.841)/676.066;
   input6 = (input[6] - 648.453)/676.217;
   input7 = (input[7] - 645.581)/673.97;
   input8 = (input[8] - 634.516)/685.783;
   input9 = (input[9] - 625.652)/673.883;
   input10 = (input[10] - 639.825)/700.363;
   input11 = (input[11] - 682.538)/579.318;
   input12 = (input[12] - 553.768)/345.519;
   input13 = (input[13] - 531.87)/363.355;
   input14 = (input[14] - 561.092)/348.798;
   input15 = (input[15] - 680.616)/560.265;
   input16 = (input[16] - 479.203)/386.367;
   input17 = (input[17] - 692.987)/600.644;
   input18 = (input[18] - 689.998)/606.244;
   input19 = (input[19] - 691.259)/590.944;
   input20 = (input[20] - -215.914)/411.423;
   input21 = (input[21] - -278.906)/894.357;
   input22 = (input[22] - 0.255183)/889.117;
   input23 = (input[23] - -11.2255)/506.918;
   switch(index) {
     case 0:
         return neuron0x2489e00();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLuR::neuron0x2454e70() {
   return input0;
}

double NNfunction_sb_cLuR::neuron0x2455120() {
   return input1;
}

double NNfunction_sb_cLuR::neuron0x2455460() {
   return input2;
}

double NNfunction_sb_cLuR::neuron0x24557a0() {
   return input3;
}

double NNfunction_sb_cLuR::neuron0x2455ae0() {
   return input4;
}

double NNfunction_sb_cLuR::neuron0x2455e20() {
   return input5;
}

double NNfunction_sb_cLuR::neuron0x2456160() {
   return input6;
}

double NNfunction_sb_cLuR::neuron0x24564a0() {
   return input7;
}

double NNfunction_sb_cLuR::neuron0x24567e0() {
   return input8;
}

double NNfunction_sb_cLuR::neuron0x2456b20() {
   return input9;
}

double NNfunction_sb_cLuR::neuron0x2456e60() {
   return input10;
}

double NNfunction_sb_cLuR::neuron0x24571a0() {
   return input11;
}

double NNfunction_sb_cLuR::neuron0x24574e0() {
   return input12;
}

double NNfunction_sb_cLuR::neuron0x2457820() {
   return input13;
}

double NNfunction_sb_cLuR::neuron0x2457b60() {
   return input14;
}

double NNfunction_sb_cLuR::neuron0x2457ea0() {
   return input15;
}

double NNfunction_sb_cLuR::neuron0x24581e0() {
   return input16;
}

double NNfunction_sb_cLuR::neuron0x2458740() {
   return input17;
}

double NNfunction_sb_cLuR::neuron0x2458a80() {
   return input18;
}

double NNfunction_sb_cLuR::neuron0x2458dc0() {
   return input19;
}

double NNfunction_sb_cLuR::neuron0x2459100() {
   return input20;
}

double NNfunction_sb_cLuR::neuron0x2459440() {
   return input21;
}

double NNfunction_sb_cLuR::neuron0x2459780() {
   return input22;
}

double NNfunction_sb_cLuR::neuron0x2459ac0() {
   return input23;
}

double NNfunction_sb_cLuR::input0x2459f30() {
   double input = -0.0408699;
   input += synapse0x245a270();
   input += synapse0x245a2b0();
   input += synapse0x245a2f0();
   input += synapse0x245a330();
   input += synapse0x245a370();
   input += synapse0x245a3b0();
   input += synapse0x245a3f0();
   input += synapse0x245a430();
   input += synapse0x245a470();
   input += synapse0x245a4b0();
   input += synapse0x245a4f0();
   input += synapse0x245a530();
   input += synapse0x245a570();
   input += synapse0x245a5b0();
   input += synapse0x245a5f0();
   input += synapse0x245a630();
   input += synapse0x245a0c0();
   input += synapse0x245a100();
   input += synapse0x2211030();
   input += synapse0x2211070();
   input += synapse0x245a670();
   input += synapse0x245a6b0();
   input += synapse0x245a6f0();
   input += synapse0x245a730();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2459f30() {
   double input = input0x2459f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x245a770() {
   double input = -0.835978;
   input += synapse0x245aab0();
   input += synapse0x245aaf0();
   input += synapse0x245ab30();
   input += synapse0x245ab70();
   input += synapse0x245abb0();
   input += synapse0x245abf0();
   input += synapse0x245ac30();
   input += synapse0x245ac70();
   input += synapse0x245acb0();
   input += synapse0x2210e80();
   input += synapse0x2210ec0();
   input += synapse0x2210f00();
   input += synapse0x2210f40();
   input += synapse0x245af00();
   input += synapse0x245af40();
   input += synapse0x245af80();
   input += synapse0x245a900();
   input += synapse0x245a940();
   input += synapse0x245b0d0();
   input += synapse0x245b110();
   input += synapse0x245b150();
   input += synapse0x245b190();
   input += synapse0x245b1d0();
   input += synapse0x245b210();
   return input;
}

double NNfunction_sb_cLuR::neuron0x245a770() {
   double input = input0x245a770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x245b250() {
   double input = -0.121417;
   input += synapse0x245b590();
   input += synapse0x245b5d0();
   input += synapse0x245b610();
   input += synapse0x245b650();
   input += synapse0x245b690();
   input += synapse0x245b6d0();
   input += synapse0x245b710();
   input += synapse0x245b750();
   input += synapse0x245b790();
   input += synapse0x245b7d0();
   input += synapse0x245b810();
   input += synapse0x245b850();
   input += synapse0x245b890();
   input += synapse0x245b8d0();
   input += synapse0x245b910();
   input += synapse0x245b950();
   input += synapse0x245b3e0();
   input += synapse0x245b420();
   input += synapse0x22116e0();
   input += synapse0x221efb0();
   input += synapse0x221eff0();
   input += synapse0x245d880();
   input += synapse0x245d8c0();
   input += synapse0x2454bb0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x245b250() {
   double input = input0x245b250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x245acf0() {
   double input = 1.68724;
   input += synapse0x2454c80();
   input += synapse0x221f830();
   input += synapse0x245ae80();
   input += synapse0x245aec0();
   input += synapse0x245baa0();
   input += synapse0x245bae0();
   input += synapse0x245bb20();
   input += synapse0x245bb60();
   input += synapse0x245bba0();
   input += synapse0x245bbe0();
   input += synapse0x245bc20();
   input += synapse0x245bc60();
   input += synapse0x245bca0();
   input += synapse0x245bce0();
   input += synapse0x245bd20();
   input += synapse0x245bd60();
   input += synapse0x2454bf0();
   input += synapse0x2454c30();
   input += synapse0x245beb0();
   input += synapse0x245bef0();
   input += synapse0x245bf30();
   input += synapse0x245bf70();
   input += synapse0x245bfb0();
   input += synapse0x245bff0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x245acf0() {
   double input = input0x245acf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x245c030() {
   double input = -3.27007;
   input += synapse0x245c370();
   input += synapse0x245c3b0();
   input += synapse0x245c3f0();
   input += synapse0x245c430();
   input += synapse0x245c470();
   input += synapse0x245c4b0();
   input += synapse0x245c4f0();
   input += synapse0x245c530();
   input += synapse0x245c570();
   input += synapse0x245c5b0();
   input += synapse0x245c5f0();
   input += synapse0x245c630();
   input += synapse0x245c670();
   input += synapse0x245c6b0();
   input += synapse0x245c6f0();
   input += synapse0x245c730();
   input += synapse0x245c880();
   input += synapse0x245c1c0();
   input += synapse0x245c200();
   input += synapse0x245d9c0();
   input += synapse0x245da00();
   input += synapse0x245da40();
   input += synapse0x245da80();
   input += synapse0x245dac0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x245c030() {
   double input = input0x245c030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x245db00() {
   double input = 0.927372;
   input += synapse0x245de40();
   input += synapse0x245de80();
   input += synapse0x245dec0();
   input += synapse0x245df00();
   input += synapse0x245df40();
   input += synapse0x245df80();
   input += synapse0x245dfc0();
   input += synapse0x245e000();
   input += synapse0x245e040();
   input += synapse0x221f300();
   input += synapse0x221f340();
   input += synapse0x221f380();
   input += synapse0x221f3c0();
   input += synapse0x221f400();
   input += synapse0x221f440();
   input += synapse0x221f480();
   input += synapse0x245dc90();
   input += synapse0x245dcd0();
   input += synapse0x221f5d0();
   input += synapse0x221f610();
   input += synapse0x221f650();
   input += synapse0x221f690();
   input += synapse0x221f6d0();
   input += synapse0x245e890();
   return input;
}

double NNfunction_sb_cLuR::neuron0x245db00() {
   double input = input0x245db00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x245e8d0() {
   double input = -1.43275;
   input += synapse0x245ec10();
   input += synapse0x245ec50();
   input += synapse0x245ec90();
   input += synapse0x245ecd0();
   input += synapse0x245ed10();
   input += synapse0x245ed50();
   input += synapse0x245ed90();
   input += synapse0x245edd0();
   input += synapse0x245ee10();
   input += synapse0x245ee50();
   input += synapse0x245ee90();
   input += synapse0x245eed0();
   input += synapse0x245ef10();
   input += synapse0x245ef50();
   input += synapse0x245ef90();
   input += synapse0x245efd0();
   input += synapse0x245ea60();
   input += synapse0x245eaa0();
   input += synapse0x245f120();
   input += synapse0x245f160();
   input += synapse0x245f1a0();
   input += synapse0x245f1e0();
   input += synapse0x245f220();
   input += synapse0x245f260();
   return input;
}

double NNfunction_sb_cLuR::neuron0x245e8d0() {
   double input = input0x245e8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x245f2a0() {
   double input = 0.0224565;
   input += synapse0x245f5e0();
   input += synapse0x245f620();
   input += synapse0x245f660();
   input += synapse0x245f6a0();
   input += synapse0x245f6e0();
   input += synapse0x245f720();
   input += synapse0x245f760();
   input += synapse0x245f7a0();
   input += synapse0x245f7e0();
   input += synapse0x245f820();
   input += synapse0x245f860();
   input += synapse0x245f8a0();
   input += synapse0x245f8e0();
   input += synapse0x245f920();
   input += synapse0x245f960();
   input += synapse0x245f9a0();
   input += synapse0x245f430();
   input += synapse0x245f470();
   input += synapse0x245faf0();
   input += synapse0x245fb30();
   input += synapse0x245fb70();
   input += synapse0x245fbb0();
   input += synapse0x245fbf0();
   input += synapse0x245fc30();
   return input;
}

double NNfunction_sb_cLuR::neuron0x245f2a0() {
   double input = input0x245f2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x245fc70() {
   double input = -0.629256;
   input += synapse0x2458630();
   input += synapse0x2458670();
   input += synapse0x24586b0();
   input += synapse0x24586f0();
   input += synapse0x24601c0();
   input += synapse0x2460200();
   input += synapse0x2460240();
   input += synapse0x2460280();
   input += synapse0x24602c0();
   input += synapse0x2460300();
   input += synapse0x2460340();
   input += synapse0x2460380();
   input += synapse0x24603c0();
   input += synapse0x2460400();
   input += synapse0x2460440();
   input += synapse0x2460480();
   input += synapse0x245fe00();
   input += synapse0x245fe40();
   input += synapse0x24605d0();
   input += synapse0x2460610();
   input += synapse0x2460650();
   input += synapse0x2460690();
   input += synapse0x24606d0();
   input += synapse0x2460710();
   return input;
}

double NNfunction_sb_cLuR::neuron0x245fc70() {
   double input = input0x245fc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2460750() {
   double input = -0.431915;
   input += synapse0x2460a90();
   input += synapse0x2460ad0();
   input += synapse0x2460b10();
   input += synapse0x2460b50();
   input += synapse0x2460b90();
   input += synapse0x2460bd0();
   input += synapse0x2460c10();
   input += synapse0x2460c50();
   input += synapse0x2460c90();
   input += synapse0x2460cd0();
   input += synapse0x2460d10();
   input += synapse0x2460d50();
   input += synapse0x2460d90();
   input += synapse0x2460dd0();
   input += synapse0x2460e10();
   input += synapse0x2460e50();
   input += synapse0x24608e0();
   input += synapse0x2460920();
   input += synapse0x2460fa0();
   input += synapse0x2460fe0();
   input += synapse0x2461020();
   input += synapse0x2461060();
   input += synapse0x24610a0();
   input += synapse0x24610e0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2460750() {
   double input = input0x2460750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2461120() {
   double input = 0.321689;
   input += synapse0x2461460();
   input += synapse0x24614a0();
   input += synapse0x24614e0();
   input += synapse0x2461520();
   input += synapse0x2461560();
   input += synapse0x24615a0();
   input += synapse0x24615e0();
   input += synapse0x2461620();
   input += synapse0x2461660();
   input += synapse0x24616a0();
   input += synapse0x24616e0();
   input += synapse0x2461720();
   input += synapse0x2461760();
   input += synapse0x24617a0();
   input += synapse0x24617e0();
   input += synapse0x2461820();
   input += synapse0x24612b0();
   input += synapse0x24612f0();
   input += synapse0x245e080();
   input += synapse0x245e0c0();
   input += synapse0x245e100();
   input += synapse0x245e140();
   input += synapse0x245e180();
   input += synapse0x245e1c0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2461120() {
   double input = input0x2461120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x245e200() {
   double input = 0.458212;
   input += synapse0x245e540();
   input += synapse0x245e580();
   input += synapse0x245e5c0();
   input += synapse0x245e600();
   input += synapse0x245e640();
   input += synapse0x245e680();
   input += synapse0x245e6c0();
   input += synapse0x245e700();
   input += synapse0x245e740();
   input += synapse0x245e780();
   input += synapse0x245e7c0();
   input += synapse0x245e800();
   input += synapse0x245e840();
   input += synapse0x2462980();
   input += synapse0x24629c0();
   input += synapse0x2462a00();
   input += synapse0x245e390();
   input += synapse0x245e3d0();
   input += synapse0x2462b50();
   input += synapse0x2462b90();
   input += synapse0x2462bd0();
   input += synapse0x2462c10();
   input += synapse0x2462c50();
   input += synapse0x2462c90();
   return input;
}

double NNfunction_sb_cLuR::neuron0x245e200() {
   double input = input0x245e200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2462cd0() {
   double input = -0.860683;
   input += synapse0x2463010();
   input += synapse0x2463050();
   input += synapse0x2463090();
   input += synapse0x24630d0();
   input += synapse0x2463110();
   input += synapse0x2463150();
   input += synapse0x2463190();
   input += synapse0x24631d0();
   input += synapse0x2463210();
   input += synapse0x2463250();
   input += synapse0x2463290();
   input += synapse0x24632d0();
   input += synapse0x2463310();
   input += synapse0x2463350();
   input += synapse0x2463390();
   input += synapse0x24633d0();
   input += synapse0x2462e60();
   input += synapse0x2462ea0();
   input += synapse0x2463520();
   input += synapse0x2463560();
   input += synapse0x24635a0();
   input += synapse0x24635e0();
   input += synapse0x2463620();
   input += synapse0x2463660();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2462cd0() {
   double input = input0x2462cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x24636a0() {
   double input = 0.817253;
   input += synapse0x24639e0();
   input += synapse0x2463a20();
   input += synapse0x2463a60();
   input += synapse0x2463aa0();
   input += synapse0x2463ae0();
   input += synapse0x2463b20();
   input += synapse0x2463b60();
   input += synapse0x2463ba0();
   input += synapse0x2463be0();
   input += synapse0x2463c20();
   input += synapse0x2463c60();
   input += synapse0x2463ca0();
   input += synapse0x2463ce0();
   input += synapse0x2463d20();
   input += synapse0x2463d60();
   input += synapse0x2463da0();
   input += synapse0x2463830();
   input += synapse0x2463870();
   input += synapse0x2463ef0();
   input += synapse0x2463f30();
   input += synapse0x2463f70();
   input += synapse0x2463fb0();
   input += synapse0x2463ff0();
   input += synapse0x2464030();
   return input;
}

double NNfunction_sb_cLuR::neuron0x24636a0() {
   double input = input0x24636a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2464070() {
   double input = 0.0676259;
   input += synapse0x24643b0();
   input += synapse0x24643f0();
   input += synapse0x2464430();
   input += synapse0x2464470();
   input += synapse0x24644b0();
   input += synapse0x24644f0();
   input += synapse0x2464530();
   input += synapse0x2464570();
   input += synapse0x24645b0();
   input += synapse0x24645f0();
   input += synapse0x2464630();
   input += synapse0x2464670();
   input += synapse0x24646b0();
   input += synapse0x24646f0();
   input += synapse0x2464730();
   input += synapse0x2464770();
   input += synapse0x2464200();
   input += synapse0x2464240();
   input += synapse0x24648c0();
   input += synapse0x2464900();
   input += synapse0x2464940();
   input += synapse0x2464980();
   input += synapse0x24649c0();
   input += synapse0x2464a00();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2464070() {
   double input = input0x2464070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2464a40() {
   double input = -0.971087;
   input += synapse0x2464d80();
   input += synapse0x2455000();
   input += synapse0x2455040();
   input += synapse0x2455340();
   input += synapse0x2455380();
   input += synapse0x2455680();
   input += synapse0x24556c0();
   input += synapse0x24559c0();
   input += synapse0x2455a00();
   input += synapse0x2455d00();
   input += synapse0x2455d40();
   input += synapse0x2456040();
   input += synapse0x2456080();
   input += synapse0x2456380();
   input += synapse0x24563c0();
   input += synapse0x24566c0();
   input += synapse0x2456700();
   input += synapse0x2456a00();
   input += synapse0x2456a40();
   input += synapse0x2456d40();
   input += synapse0x2456d80();
   input += synapse0x2457080();
   input += synapse0x24570c0();
   input += synapse0x24573c0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2464a40() {
   double input = input0x2464a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2466850() {
   double input = 0.074327;
   input += synapse0x2457400();
   input += synapse0x24580c0();
   input += synapse0x2458100();
   input += synapse0x2464bd0();
   input += synapse0x2464c10();
   input += synapse0x2458400();
   input += synapse0x2458440();
   input += synapse0x2458960();
   input += synapse0x24589a0();
   input += synapse0x2458ca0();
   input += synapse0x2458ce0();
   input += synapse0x2458fe0();
   input += synapse0x2459020();
   input += synapse0x2459320();
   input += synapse0x2459360();
   input += synapse0x2459660();
   input += synapse0x24596a0();
   input += synapse0x24599a0();
   input += synapse0x24599e0();
   input += synapse0x2459ce0();
   input += synapse0x2459d20();
   input += synapse0x2457700();
   input += synapse0x2457740();
   input += synapse0x2466af0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2466850() {
   double input = input0x2466850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2466b30() {
   double input = -2.22057;
   input += synapse0x2466e70();
   input += synapse0x2466eb0();
   input += synapse0x2466ef0();
   input += synapse0x2466f30();
   input += synapse0x2466f70();
   input += synapse0x2466fb0();
   input += synapse0x2466ff0();
   input += synapse0x2467030();
   input += synapse0x2467070();
   input += synapse0x24670b0();
   input += synapse0x24670f0();
   input += synapse0x2467130();
   input += synapse0x2467170();
   input += synapse0x24671b0();
   input += synapse0x24671f0();
   input += synapse0x2467230();
   input += synapse0x2466cc0();
   input += synapse0x2466d00();
   input += synapse0x2467380();
   input += synapse0x24673c0();
   input += synapse0x2467400();
   input += synapse0x2467440();
   input += synapse0x2467480();
   input += synapse0x24674c0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2466b30() {
   double input = input0x2466b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2467500() {
   double input = -0.534421;
   input += synapse0x2467840();
   input += synapse0x2467880();
   input += synapse0x24678c0();
   input += synapse0x2467900();
   input += synapse0x2467940();
   input += synapse0x2467980();
   input += synapse0x24679c0();
   input += synapse0x2467a00();
   input += synapse0x2467a40();
   input += synapse0x2467a80();
   input += synapse0x2467ac0();
   input += synapse0x2467b00();
   input += synapse0x2467b40();
   input += synapse0x2467b80();
   input += synapse0x2467bc0();
   input += synapse0x2467c00();
   input += synapse0x2467690();
   input += synapse0x24676d0();
   input += synapse0x2467d50();
   input += synapse0x2467d90();
   input += synapse0x2467dd0();
   input += synapse0x2467e10();
   input += synapse0x2467e50();
   input += synapse0x2467e90();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2467500() {
   double input = input0x2467500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2467ed0() {
   double input = 0.757404;
   input += synapse0x2468210();
   input += synapse0x2468250();
   input += synapse0x2468290();
   input += synapse0x24682d0();
   input += synapse0x2468310();
   input += synapse0x2468350();
   input += synapse0x2468390();
   input += synapse0x24683d0();
   input += synapse0x2468410();
   input += synapse0x2468450();
   input += synapse0x2468490();
   input += synapse0x24684d0();
   input += synapse0x2468510();
   input += synapse0x2468550();
   input += synapse0x2468590();
   input += synapse0x24685d0();
   input += synapse0x2468060();
   input += synapse0x24680a0();
   input += synapse0x2468720();
   input += synapse0x2468760();
   input += synapse0x24687a0();
   input += synapse0x24687e0();
   input += synapse0x2468820();
   input += synapse0x2468860();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2467ed0() {
   double input = input0x2467ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x24688a0() {
   double input = -0.443698;
   input += synapse0x2468be0();
   input += synapse0x2468c20();
   input += synapse0x2468c60();
   input += synapse0x2468ca0();
   input += synapse0x2468ce0();
   input += synapse0x2468d20();
   input += synapse0x2468d60();
   input += synapse0x2468da0();
   input += synapse0x2468de0();
   input += synapse0x2468e20();
   input += synapse0x2468e60();
   input += synapse0x2468ea0();
   input += synapse0x2468ee0();
   input += synapse0x2468f20();
   input += synapse0x2468f60();
   input += synapse0x2468fa0();
   input += synapse0x2468a30();
   input += synapse0x2468a70();
   input += synapse0x24690f0();
   input += synapse0x2469130();
   input += synapse0x2469170();
   input += synapse0x24691b0();
   input += synapse0x24691f0();
   input += synapse0x2469230();
   return input;
}

double NNfunction_sb_cLuR::neuron0x24688a0() {
   double input = input0x24688a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2469270() {
   double input = 0.909034;
   input += synapse0x24695b0();
   input += synapse0x24695f0();
   input += synapse0x2469630();
   input += synapse0x2469670();
   input += synapse0x24696b0();
   input += synapse0x24696f0();
   input += synapse0x2469730();
   input += synapse0x2469770();
   input += synapse0x24697b0();
   input += synapse0x2461970();
   input += synapse0x24619b0();
   input += synapse0x24619f0();
   input += synapse0x2461a30();
   input += synapse0x2461a70();
   input += synapse0x2461ab0();
   input += synapse0x2461af0();
   input += synapse0x2469400();
   input += synapse0x2469440();
   input += synapse0x2461c40();
   input += synapse0x2461c80();
   input += synapse0x2461cc0();
   input += synapse0x2461d00();
   input += synapse0x2461d40();
   input += synapse0x2461d80();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2469270() {
   double input = input0x2469270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2461dc0() {
   double input = 2.53369;
   input += synapse0x2462100();
   input += synapse0x2462140();
   input += synapse0x2462180();
   input += synapse0x24621c0();
   input += synapse0x2462200();
   input += synapse0x2462240();
   input += synapse0x2462280();
   input += synapse0x24622c0();
   input += synapse0x2462300();
   input += synapse0x2462340();
   input += synapse0x2462380();
   input += synapse0x24623c0();
   input += synapse0x2462400();
   input += synapse0x2462440();
   input += synapse0x2462480();
   input += synapse0x24624c0();
   input += synapse0x2461f50();
   input += synapse0x2461f90();
   input += synapse0x2462610();
   input += synapse0x2462650();
   input += synapse0x2462690();
   input += synapse0x24626d0();
   input += synapse0x2462710();
   input += synapse0x2462750();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2461dc0() {
   double input = input0x2461dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2462790() {
   double input = -1.40505;
   input += synapse0x2462920();
   input += synapse0x246b9b0();
   input += synapse0x246b9f0();
   input += synapse0x246ba30();
   input += synapse0x246ba70();
   input += synapse0x246bab0();
   input += synapse0x246baf0();
   input += synapse0x246bb30();
   input += synapse0x246bb70();
   input += synapse0x246bbb0();
   input += synapse0x246bbf0();
   input += synapse0x246bc30();
   input += synapse0x246bc70();
   input += synapse0x246bcb0();
   input += synapse0x246bcf0();
   input += synapse0x246bd30();
   input += synapse0x246b800();
   input += synapse0x246b840();
   input += synapse0x246be80();
   input += synapse0x246bec0();
   input += synapse0x246bf00();
   input += synapse0x246bf40();
   input += synapse0x246bf80();
   input += synapse0x246bfc0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2462790() {
   double input = input0x2462790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x246c000() {
   double input = 0.260532;
   input += synapse0x246c340();
   input += synapse0x246c380();
   input += synapse0x246c3c0();
   input += synapse0x246c400();
   input += synapse0x246c440();
   input += synapse0x246c480();
   input += synapse0x246c4c0();
   input += synapse0x246c500();
   input += synapse0x246c540();
   input += synapse0x246c580();
   input += synapse0x246c5c0();
   input += synapse0x246c600();
   input += synapse0x246c640();
   input += synapse0x246c680();
   input += synapse0x246c6c0();
   input += synapse0x246c700();
   input += synapse0x246c190();
   input += synapse0x246c1d0();
   input += synapse0x246c850();
   input += synapse0x246c890();
   input += synapse0x246c8d0();
   input += synapse0x246c910();
   input += synapse0x246c950();
   input += synapse0x246c990();
   return input;
}

double NNfunction_sb_cLuR::neuron0x246c000() {
   double input = input0x246c000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x246c9d0() {
   double input = 0.682548;
   input += synapse0x246cd10();
   input += synapse0x246cd50();
   input += synapse0x246cd90();
   input += synapse0x246cdd0();
   input += synapse0x246ce10();
   input += synapse0x246ce50();
   input += synapse0x246ce90();
   input += synapse0x246ced0();
   input += synapse0x246cf10();
   input += synapse0x246cf50();
   input += synapse0x246cf90();
   input += synapse0x246cfd0();
   input += synapse0x246d010();
   input += synapse0x246d050();
   input += synapse0x246d090();
   input += synapse0x246d0d0();
   input += synapse0x246cb60();
   input += synapse0x246cba0();
   input += synapse0x246d220();
   input += synapse0x246d260();
   input += synapse0x246d2a0();
   input += synapse0x246d2e0();
   input += synapse0x246d320();
   input += synapse0x246d360();
   return input;
}

double NNfunction_sb_cLuR::neuron0x246c9d0() {
   double input = input0x246c9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x246d3a0() {
   double input = 0.665296;
   input += synapse0x246d6e0();
   input += synapse0x246d720();
   input += synapse0x246d760();
   input += synapse0x246d7a0();
   input += synapse0x246d7e0();
   input += synapse0x246d820();
   input += synapse0x246d860();
   input += synapse0x246d8a0();
   input += synapse0x246d8e0();
   input += synapse0x246d920();
   input += synapse0x246d960();
   input += synapse0x246d9a0();
   input += synapse0x246d9e0();
   input += synapse0x246da20();
   input += synapse0x246da60();
   input += synapse0x246daa0();
   input += synapse0x246d530();
   input += synapse0x246d570();
   input += synapse0x246dbf0();
   input += synapse0x246dc30();
   input += synapse0x246dc70();
   input += synapse0x246dcb0();
   input += synapse0x246dcf0();
   input += synapse0x246dd30();
   return input;
}

double NNfunction_sb_cLuR::neuron0x246d3a0() {
   double input = input0x246d3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x246dd70() {
   double input = -0.0375432;
   input += synapse0x246e0b0();
   input += synapse0x246e0f0();
   input += synapse0x246e130();
   input += synapse0x246e170();
   input += synapse0x246e1b0();
   input += synapse0x246e1f0();
   input += synapse0x246e230();
   input += synapse0x246e270();
   input += synapse0x246e2b0();
   input += synapse0x246e2f0();
   input += synapse0x246e330();
   input += synapse0x246e370();
   input += synapse0x246e3b0();
   input += synapse0x246e3f0();
   input += synapse0x246e430();
   input += synapse0x246e470();
   input += synapse0x246df00();
   input += synapse0x246df40();
   input += synapse0x246e5c0();
   input += synapse0x246e600();
   input += synapse0x246e640();
   input += synapse0x246e680();
   input += synapse0x246e6c0();
   input += synapse0x246e700();
   return input;
}

double NNfunction_sb_cLuR::neuron0x246dd70() {
   double input = input0x246dd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x246e740() {
   double input = 0.173825;
   input += synapse0x246ea80();
   input += synapse0x246eac0();
   input += synapse0x246eb00();
   input += synapse0x246eb40();
   input += synapse0x246eb80();
   input += synapse0x246ebc0();
   input += synapse0x246ec00();
   input += synapse0x246ec40();
   input += synapse0x246ec80();
   input += synapse0x246ecc0();
   input += synapse0x246ed00();
   input += synapse0x246ed40();
   input += synapse0x246ed80();
   input += synapse0x246edc0();
   input += synapse0x246ee00();
   input += synapse0x246ee40();
   input += synapse0x246e8d0();
   input += synapse0x246e910();
   input += synapse0x246ef90();
   input += synapse0x246efd0();
   input += synapse0x246f010();
   input += synapse0x246f050();
   input += synapse0x246f090();
   input += synapse0x246f0d0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x246e740() {
   double input = input0x246e740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x246f110() {
   double input = 5.73263;
   input += synapse0x246f450();
   input += synapse0x246f490();
   input += synapse0x246f4d0();
   input += synapse0x246f510();
   input += synapse0x246f550();
   input += synapse0x246f590();
   input += synapse0x246f5d0();
   input += synapse0x246f610();
   input += synapse0x246f650();
   input += synapse0x246f690();
   input += synapse0x246f6d0();
   input += synapse0x246f710();
   input += synapse0x246f750();
   input += synapse0x246f790();
   input += synapse0x246f7d0();
   input += synapse0x246f810();
   input += synapse0x246f2a0();
   input += synapse0x246f2e0();
   input += synapse0x246f960();
   input += synapse0x246f9a0();
   input += synapse0x246f9e0();
   input += synapse0x246fa20();
   input += synapse0x246fa60();
   input += synapse0x246faa0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x246f110() {
   double input = input0x246f110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x246fae0() {
   double input = 1.72952;
   input += synapse0x246fe20();
   input += synapse0x246fe60();
   input += synapse0x246fea0();
   input += synapse0x246fee0();
   input += synapse0x246ff20();
   input += synapse0x246ff60();
   input += synapse0x246ffa0();
   input += synapse0x246ffe0();
   input += synapse0x2470020();
   input += synapse0x2470060();
   input += synapse0x24700a0();
   input += synapse0x24700e0();
   input += synapse0x2470120();
   input += synapse0x2470160();
   input += synapse0x24701a0();
   input += synapse0x24701e0();
   input += synapse0x246fc70();
   input += synapse0x246fcb0();
   input += synapse0x2470330();
   input += synapse0x2470370();
   input += synapse0x24703b0();
   input += synapse0x24703f0();
   input += synapse0x2470430();
   input += synapse0x2470470();
   return input;
}

double NNfunction_sb_cLuR::neuron0x246fae0() {
   double input = input0x246fae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x24704b0() {
   double input = -0.658659;
   input += synapse0x24707f0();
   input += synapse0x2464dc0();
   input += synapse0x2464e00();
   input += synapse0x2464e40();
   input += synapse0x2465090();
   input += synapse0x24650d0();
   input += synapse0x2465110();
   input += synapse0x2465360();
   input += synapse0x24653a0();
   input += synapse0x24655f0();
   input += synapse0x2465630();
   input += synapse0x2465670();
   input += synapse0x24658c0();
   input += synapse0x2465900();
   input += synapse0x2465b50();
   input += synapse0x2465b90();
   input += synapse0x2470640();
   input += synapse0x2470680();
   input += synapse0x2465ce0();
   input += synapse0x24661f0();
   input += synapse0x2466230();
   input += synapse0x2466270();
   input += synapse0x24664c0();
   input += synapse0x2466500();
   return input;
}

double NNfunction_sb_cLuR::neuron0x24704b0() {
   double input = input0x24704b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2466540() {
   double input = 0.549686;
   input += synapse0x2465db0();
   input += synapse0x2465df0();
   input += synapse0x2465e30();
   input += synapse0x2465e70();
   input += synapse0x24667f0();
   input += synapse0x2472b40();
   input += synapse0x2472b80();
   input += synapse0x2472bc0();
   input += synapse0x2472c00();
   input += synapse0x2472c40();
   input += synapse0x2472c80();
   input += synapse0x2472cc0();
   input += synapse0x2472d00();
   input += synapse0x2472d40();
   input += synapse0x2472d80();
   input += synapse0x2472dc0();
   input += synapse0x24666d0();
   input += synapse0x2466710();
   input += synapse0x2472f10();
   input += synapse0x2472f50();
   input += synapse0x2472f90();
   input += synapse0x2472fd0();
   input += synapse0x2473010();
   input += synapse0x2473050();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2466540() {
   double input = input0x2466540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2473090() {
   double input = -0.62359;
   input += synapse0x24733d0();
   input += synapse0x2473410();
   input += synapse0x2473450();
   input += synapse0x2473490();
   input += synapse0x24734d0();
   input += synapse0x2473510();
   input += synapse0x2473550();
   input += synapse0x2473590();
   input += synapse0x24735d0();
   input += synapse0x2473610();
   input += synapse0x2473650();
   input += synapse0x2473690();
   input += synapse0x24736d0();
   input += synapse0x2473710();
   input += synapse0x2473750();
   input += synapse0x2473790();
   input += synapse0x2473220();
   input += synapse0x2473260();
   input += synapse0x24738e0();
   input += synapse0x2473920();
   input += synapse0x2473960();
   input += synapse0x24739a0();
   input += synapse0x24739e0();
   input += synapse0x2473a20();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2473090() {
   double input = input0x2473090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2473a60() {
   double input = 0.945806;
   input += synapse0x2473da0();
   input += synapse0x2473de0();
   input += synapse0x2473e20();
   input += synapse0x2473e60();
   input += synapse0x2473ea0();
   input += synapse0x2473ee0();
   input += synapse0x2473f20();
   input += synapse0x2473f60();
   input += synapse0x2473fa0();
   input += synapse0x2473fe0();
   input += synapse0x2474020();
   input += synapse0x2474060();
   input += synapse0x24740a0();
   input += synapse0x24740e0();
   input += synapse0x2474120();
   input += synapse0x2474160();
   input += synapse0x2473bf0();
   input += synapse0x2473c30();
   input += synapse0x24742b0();
   input += synapse0x24742f0();
   input += synapse0x2474330();
   input += synapse0x2474370();
   input += synapse0x24743b0();
   input += synapse0x24743f0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2473a60() {
   double input = input0x2473a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2474430() {
   double input = 1.27138;
   input += synapse0x2474770();
   input += synapse0x24747b0();
   input += synapse0x24747f0();
   input += synapse0x2474830();
   input += synapse0x2474870();
   input += synapse0x24748b0();
   input += synapse0x24748f0();
   input += synapse0x2474930();
   input += synapse0x2474970();
   input += synapse0x24749b0();
   input += synapse0x24749f0();
   input += synapse0x2474a30();
   input += synapse0x2474a70();
   input += synapse0x2474ab0();
   input += synapse0x2474af0();
   input += synapse0x2474b30();
   input += synapse0x24745c0();
   input += synapse0x2474600();
   input += synapse0x2474c80();
   input += synapse0x2474cc0();
   input += synapse0x2474d00();
   input += synapse0x2474d40();
   input += synapse0x2474d80();
   input += synapse0x2474dc0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2474430() {
   double input = input0x2474430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2474e00() {
   double input = -0.0982426;
   input += synapse0x2475140();
   input += synapse0x2475180();
   input += synapse0x24751c0();
   input += synapse0x2475200();
   input += synapse0x2475240();
   input += synapse0x2475280();
   input += synapse0x24752c0();
   input += synapse0x2475300();
   input += synapse0x2475340();
   input += synapse0x2475380();
   input += synapse0x24753c0();
   input += synapse0x2475400();
   input += synapse0x2475440();
   input += synapse0x2475480();
   input += synapse0x24754c0();
   input += synapse0x2475500();
   input += synapse0x2474f90();
   input += synapse0x2474fd0();
   input += synapse0x2475650();
   input += synapse0x2475690();
   input += synapse0x24756d0();
   input += synapse0x2475710();
   input += synapse0x2475750();
   input += synapse0x2475790();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2474e00() {
   double input = input0x2474e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x24757d0() {
   double input = -2.02022;
   input += synapse0x2475b10();
   input += synapse0x2475b50();
   input += synapse0x2475b90();
   input += synapse0x2475bd0();
   input += synapse0x2475c10();
   input += synapse0x2475c50();
   input += synapse0x2475c90();
   input += synapse0x2475cd0();
   input += synapse0x2475d10();
   input += synapse0x2475d50();
   input += synapse0x2475d90();
   input += synapse0x2475dd0();
   input += synapse0x2475e10();
   input += synapse0x2475e50();
   input += synapse0x2475e90();
   input += synapse0x2475ed0();
   input += synapse0x2475960();
   input += synapse0x24759a0();
   input += synapse0x2476020();
   input += synapse0x2476060();
   input += synapse0x24760a0();
   input += synapse0x24760e0();
   input += synapse0x2476120();
   input += synapse0x2476160();
   return input;
}

double NNfunction_sb_cLuR::neuron0x24757d0() {
   double input = input0x24757d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x24761a0() {
   double input = 0.0752126;
   input += synapse0x24764e0();
   input += synapse0x2476520();
   input += synapse0x2476560();
   input += synapse0x24765a0();
   input += synapse0x24765e0();
   input += synapse0x2476620();
   input += synapse0x2476660();
   input += synapse0x24766a0();
   input += synapse0x24766e0();
   input += synapse0x2476720();
   input += synapse0x2476760();
   input += synapse0x24767a0();
   input += synapse0x24767e0();
   input += synapse0x2476820();
   input += synapse0x2476860();
   input += synapse0x24768a0();
   input += synapse0x2476330();
   input += synapse0x2476370();
   input += synapse0x24769f0();
   input += synapse0x2476a30();
   input += synapse0x2476a70();
   input += synapse0x2476ab0();
   input += synapse0x2476af0();
   input += synapse0x2476b30();
   return input;
}

double NNfunction_sb_cLuR::neuron0x24761a0() {
   double input = input0x24761a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2476b70() {
   double input = 0.69952;
   input += synapse0x2476eb0();
   input += synapse0x2476ef0();
   input += synapse0x2476f30();
   input += synapse0x2476f70();
   input += synapse0x2476fb0();
   input += synapse0x2476ff0();
   input += synapse0x2477030();
   input += synapse0x2477070();
   input += synapse0x24770b0();
   input += synapse0x24770f0();
   input += synapse0x2477130();
   input += synapse0x2477170();
   input += synapse0x24771b0();
   input += synapse0x24771f0();
   input += synapse0x2477230();
   input += synapse0x2477270();
   input += synapse0x2476d00();
   input += synapse0x2476d40();
   input += synapse0x24773c0();
   input += synapse0x2477400();
   input += synapse0x2477440();
   input += synapse0x2477480();
   input += synapse0x24774c0();
   input += synapse0x2477500();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2476b70() {
   double input = input0x2476b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2477540() {
   double input = 0.487442;
   input += synapse0x245ffb0();
   input += synapse0x245fff0();
   input += synapse0x2460030();
   input += synapse0x2460070();
   input += synapse0x24600b0();
   input += synapse0x24600f0();
   input += synapse0x2460130();
   input += synapse0x2460170();
   input += synapse0x2477c90();
   input += synapse0x2477cd0();
   input += synapse0x2477d10();
   input += synapse0x2477d50();
   input += synapse0x2477d90();
   input += synapse0x2477dd0();
   input += synapse0x2477e10();
   input += synapse0x2477e50();
   input += synapse0x24776d0();
   input += synapse0x2477710();
   input += synapse0x2477fa0();
   input += synapse0x2477fe0();
   input += synapse0x2478020();
   input += synapse0x2478060();
   input += synapse0x24780a0();
   input += synapse0x24780e0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2477540() {
   double input = input0x2477540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2478120() {
   double input = -1.69194;
   input += synapse0x2478460();
   input += synapse0x24784a0();
   input += synapse0x24784e0();
   input += synapse0x2478520();
   input += synapse0x2478560();
   input += synapse0x24785a0();
   input += synapse0x24785e0();
   input += synapse0x2478620();
   input += synapse0x2478660();
   input += synapse0x24786a0();
   input += synapse0x24786e0();
   input += synapse0x2478720();
   input += synapse0x2478760();
   input += synapse0x24787a0();
   input += synapse0x24787e0();
   input += synapse0x2478820();
   input += synapse0x24782b0();
   input += synapse0x24782f0();
   input += synapse0x2478970();
   input += synapse0x24789b0();
   input += synapse0x24789f0();
   input += synapse0x2478a30();
   input += synapse0x2478a70();
   input += synapse0x2478ab0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2478120() {
   double input = input0x2478120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2478af0() {
   double input = -1.93221;
   input += synapse0x2478e30();
   input += synapse0x2478e70();
   input += synapse0x2478eb0();
   input += synapse0x2478ef0();
   input += synapse0x2478f30();
   input += synapse0x2478f70();
   input += synapse0x2478fb0();
   input += synapse0x2478ff0();
   input += synapse0x2479030();
   input += synapse0x2479070();
   input += synapse0x24790b0();
   input += synapse0x24790f0();
   input += synapse0x2479130();
   input += synapse0x2479170();
   input += synapse0x24791b0();
   input += synapse0x24791f0();
   input += synapse0x2478c80();
   input += synapse0x2478cc0();
   input += synapse0x24697f0();
   input += synapse0x2469830();
   input += synapse0x2469870();
   input += synapse0x24698b0();
   input += synapse0x24698f0();
   input += synapse0x2469930();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2478af0() {
   double input = input0x2478af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2469970() {
   double input = 1.47528;
   input += synapse0x2469cb0();
   input += synapse0x2469cf0();
   input += synapse0x2469d30();
   input += synapse0x2469d70();
   input += synapse0x2469db0();
   input += synapse0x2469df0();
   input += synapse0x2469e30();
   input += synapse0x2469e70();
   input += synapse0x2469eb0();
   input += synapse0x2469ef0();
   input += synapse0x2469f30();
   input += synapse0x2469f70();
   input += synapse0x2469fb0();
   input += synapse0x2469ff0();
   input += synapse0x246a030();
   input += synapse0x246a070();
   input += synapse0x2469b00();
   input += synapse0x2469b40();
   input += synapse0x246a1c0();
   input += synapse0x246a200();
   input += synapse0x246a240();
   input += synapse0x246a280();
   input += synapse0x246a2c0();
   input += synapse0x246a300();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2469970() {
   double input = input0x2469970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x246a340() {
   double input = 0.336807;
   input += synapse0x246a680();
   input += synapse0x246a6c0();
   input += synapse0x246a700();
   input += synapse0x246a740();
   input += synapse0x246a780();
   input += synapse0x246a7c0();
   input += synapse0x246a800();
   input += synapse0x246a840();
   input += synapse0x246a880();
   input += synapse0x246a8c0();
   input += synapse0x246a900();
   input += synapse0x246a940();
   input += synapse0x246a980();
   input += synapse0x246a9c0();
   input += synapse0x246aa00();
   input += synapse0x246aa40();
   input += synapse0x246a4d0();
   input += synapse0x246a510();
   input += synapse0x246ab90();
   input += synapse0x246abd0();
   input += synapse0x246ac10();
   input += synapse0x246ac50();
   input += synapse0x246ac90();
   input += synapse0x246acd0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x246a340() {
   double input = input0x246a340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x246ad10() {
   double input = 0.292317;
   input += synapse0x246b050();
   input += synapse0x246b090();
   input += synapse0x246b0d0();
   input += synapse0x246b110();
   input += synapse0x246b150();
   input += synapse0x246b190();
   input += synapse0x246b1d0();
   input += synapse0x246b210();
   input += synapse0x246b250();
   input += synapse0x246b290();
   input += synapse0x246b2d0();
   input += synapse0x246b310();
   input += synapse0x246b350();
   input += synapse0x246b390();
   input += synapse0x246b3d0();
   input += synapse0x246b410();
   input += synapse0x246aea0();
   input += synapse0x246aee0();
   input += synapse0x246b560();
   input += synapse0x246b5a0();
   input += synapse0x246b5e0();
   input += synapse0x246b620();
   input += synapse0x246b660();
   input += synapse0x246b6a0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x246ad10() {
   double input = input0x246ad10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x247d350() {
   double input = 2.07082;
   input += synapse0x247d570();
   input += synapse0x247d5b0();
   input += synapse0x247d5f0();
   input += synapse0x247d630();
   input += synapse0x247d670();
   input += synapse0x247d6b0();
   input += synapse0x247d6f0();
   input += synapse0x247d730();
   input += synapse0x247d770();
   input += synapse0x247d7b0();
   input += synapse0x247d7f0();
   input += synapse0x247d830();
   input += synapse0x247d870();
   input += synapse0x247d8b0();
   input += synapse0x247d8f0();
   input += synapse0x247d930();
   input += synapse0x246b6e0();
   input += synapse0x246b720();
   input += synapse0x247da80();
   input += synapse0x247dac0();
   input += synapse0x247db00();
   input += synapse0x247db40();
   input += synapse0x247db80();
   input += synapse0x247dbc0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x247d350() {
   double input = input0x247d350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x247dc00() {
   double input = 0.566506;
   input += synapse0x247df40();
   input += synapse0x247df80();
   input += synapse0x247dfc0();
   input += synapse0x247e000();
   input += synapse0x247e040();
   input += synapse0x247e080();
   input += synapse0x247e0c0();
   input += synapse0x247e100();
   input += synapse0x247e140();
   input += synapse0x247e180();
   input += synapse0x247e1c0();
   input += synapse0x247e200();
   input += synapse0x247e240();
   input += synapse0x247e280();
   input += synapse0x247e2c0();
   input += synapse0x247e300();
   input += synapse0x247dd90();
   input += synapse0x247ddd0();
   input += synapse0x247e450();
   input += synapse0x247e490();
   input += synapse0x247e4d0();
   input += synapse0x247e510();
   input += synapse0x247e550();
   input += synapse0x247e590();
   return input;
}

double NNfunction_sb_cLuR::neuron0x247dc00() {
   double input = input0x247dc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x247e5d0() {
   double input = 0.257735;
   input += synapse0x247e910();
   input += synapse0x247e950();
   input += synapse0x247e990();
   input += synapse0x247e9d0();
   input += synapse0x247ea10();
   input += synapse0x247ea50();
   input += synapse0x247ea90();
   input += synapse0x247ead0();
   input += synapse0x247eb10();
   input += synapse0x247eb50();
   input += synapse0x247eb90();
   input += synapse0x247ebd0();
   input += synapse0x247ec10();
   input += synapse0x247ec50();
   input += synapse0x247ec90();
   input += synapse0x247ecd0();
   input += synapse0x247e760();
   input += synapse0x247e7a0();
   input += synapse0x247ee20();
   input += synapse0x247ee60();
   input += synapse0x247eea0();
   input += synapse0x247eee0();
   input += synapse0x247ef20();
   input += synapse0x247ef60();
   return input;
}

double NNfunction_sb_cLuR::neuron0x247e5d0() {
   double input = input0x247e5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x247efa0() {
   double input = 0.326455;
   input += synapse0x247f2e0();
   input += synapse0x247f320();
   input += synapse0x247f360();
   input += synapse0x247f3a0();
   input += synapse0x247f3e0();
   input += synapse0x247f420();
   input += synapse0x247f460();
   input += synapse0x247f4a0();
   input += synapse0x247f4e0();
   input += synapse0x247f520();
   input += synapse0x247f560();
   input += synapse0x247f5a0();
   input += synapse0x247f5e0();
   input += synapse0x247f620();
   input += synapse0x247f660();
   input += synapse0x247f6a0();
   input += synapse0x247f130();
   input += synapse0x247f170();
   input += synapse0x247f7f0();
   input += synapse0x247f830();
   input += synapse0x247f870();
   input += synapse0x247f8b0();
   input += synapse0x247f8f0();
   input += synapse0x247f930();
   return input;
}

double NNfunction_sb_cLuR::neuron0x247efa0() {
   double input = input0x247efa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x24861a0() {
   double input = -0.181535;
   input += synapse0x221f7a0();
   input += synapse0x221f7e0();
   input += synapse0x245c2e0();
   input += synapse0x245c320();
   input += synapse0x245ddb0();
   input += synapse0x245ddf0();
   input += synapse0x245eb80();
   input += synapse0x245ebc0();
   input += synapse0x245f550();
   input += synapse0x245f590();
   input += synapse0x245ff20();
   input += synapse0x245ff60();
   input += synapse0x2460a00();
   input += synapse0x2460a40();
   input += synapse0x24613d0();
   input += synapse0x2461410();
   input += synapse0x245e4b0();
   input += synapse0x245e4f0();
   input += synapse0x2462f80();
   input += synapse0x2462fc0();
   input += synapse0x2463950();
   input += synapse0x2463990();
   input += synapse0x2464320();
   input += synapse0x2464360();
   input += synapse0x2464cf0();
   input += synapse0x2464d30();
   input += synapse0x2457d80();
   input += synapse0x2457dc0();
   input += synapse0x2466de0();
   input += synapse0x2466e20();
   input += synapse0x24677b0();
   input += synapse0x24677f0();
   input += synapse0x2468180();
   input += synapse0x24681c0();
   input += synapse0x2468b50();
   input += synapse0x2468b90();
   input += synapse0x2469520();
   input += synapse0x2469560();
   input += synapse0x2462070();
   input += synapse0x24620b0();
   input += synapse0x246b920();
   input += synapse0x246b960();
   input += synapse0x246c2b0();
   input += synapse0x246c2f0();
   input += synapse0x246cc80();
   input += synapse0x246ccc0();
   input += synapse0x246d650();
   input += synapse0x246d690();
   input += synapse0x246e020();
   input += synapse0x246e060();
   return input;
}

double NNfunction_sb_cLuR::neuron0x24861a0() {
   double input = input0x24861a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2486540() {
   double input = 0.616634;
   input += synapse0x2470760();
   input += synapse0x24707a0();
   input += synapse0x2465d20();
   input += synapse0x2465d60();
   input += synapse0x2473340();
   input += synapse0x2473380();
   input += synapse0x2473d10();
   input += synapse0x2473d50();
   input += synapse0x24746e0();
   input += synapse0x2474720();
   input += synapse0x24750b0();
   input += synapse0x24750f0();
   input += synapse0x2475a80();
   input += synapse0x2475ac0();
   input += synapse0x2476450();
   input += synapse0x2476490();
   input += synapse0x2476e20();
   input += synapse0x2476e60();
   input += synapse0x24777f0();
   input += synapse0x2477830();
   input += synapse0x24783d0();
   input += synapse0x2478410();
   input += synapse0x2478da0();
   input += synapse0x2478de0();
   input += synapse0x2469c20();
   input += synapse0x2469c60();
   input += synapse0x246a5f0();
   input += synapse0x246a630();
   input += synapse0x246afc0();
   input += synapse0x246b000();
   input += synapse0x247d4e0();
   input += synapse0x247d520();
   input += synapse0x247deb0();
   input += synapse0x247def0();
   input += synapse0x247e880();
   input += synapse0x247e8c0();
   input += synapse0x247f250();
   input += synapse0x247f290();
   input += synapse0x245a1e0();
   input += synapse0x245a220();
   input += synapse0x246e9f0();
   input += synapse0x246ea30();
   input += synapse0x247f970();
   input += synapse0x247f9b0();
   input += synapse0x247f9f0();
   input += synapse0x247fa30();
   input += synapse0x24868e0();
   input += synapse0x2486920();
   input += synapse0x2486960();
   input += synapse0x24869a0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2486540() {
   double input = input0x2486540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x24869e0() {
   double input = -0.725237;
   input += synapse0x2486d20();
   input += synapse0x2486d60();
   input += synapse0x2486da0();
   input += synapse0x2486de0();
   input += synapse0x2486e20();
   input += synapse0x2486e60();
   input += synapse0x2486ea0();
   input += synapse0x2486ee0();
   input += synapse0x2486f20();
   input += synapse0x2486f60();
   input += synapse0x2486fa0();
   input += synapse0x2486fe0();
   input += synapse0x2487020();
   input += synapse0x2487060();
   input += synapse0x24870a0();
   input += synapse0x24870e0();
   input += synapse0x2486b70();
   input += synapse0x2486bb0();
   input += synapse0x2487230();
   input += synapse0x2487270();
   input += synapse0x24872b0();
   input += synapse0x24872f0();
   input += synapse0x2487330();
   input += synapse0x2487370();
   input += synapse0x24873b0();
   input += synapse0x24873f0();
   input += synapse0x2487430();
   input += synapse0x2487470();
   input += synapse0x24874b0();
   input += synapse0x24874f0();
   input += synapse0x2487530();
   input += synapse0x2487570();
   input += synapse0x2487120();
   input += synapse0x2487160();
   input += synapse0x24871a0();
   input += synapse0x24871e0();
   input += synapse0x24877c0();
   input += synapse0x2487800();
   input += synapse0x2487840();
   input += synapse0x2487880();
   input += synapse0x24878c0();
   input += synapse0x2487900();
   input += synapse0x2487940();
   input += synapse0x2487980();
   input += synapse0x24879c0();
   input += synapse0x2487a00();
   input += synapse0x2487a40();
   input += synapse0x2487a80();
   input += synapse0x2487ac0();
   input += synapse0x2487b00();
   return input;
}

double NNfunction_sb_cLuR::neuron0x24869e0() {
   double input = input0x24869e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2487b40() {
   double input = -0.395272;
   input += synapse0x2487e80();
   input += synapse0x2487ec0();
   input += synapse0x2487f00();
   input += synapse0x2487f40();
   input += synapse0x2487f80();
   input += synapse0x2487fc0();
   input += synapse0x2488000();
   input += synapse0x2488040();
   input += synapse0x2488080();
   input += synapse0x24880c0();
   input += synapse0x2488100();
   input += synapse0x2488140();
   input += synapse0x2488180();
   input += synapse0x24881c0();
   input += synapse0x2488200();
   input += synapse0x2488240();
   input += synapse0x2487cd0();
   input += synapse0x2487d10();
   input += synapse0x2488390();
   input += synapse0x24883d0();
   input += synapse0x2488410();
   input += synapse0x2488450();
   input += synapse0x2488490();
   input += synapse0x24884d0();
   input += synapse0x2488510();
   input += synapse0x2488550();
   input += synapse0x2488590();
   input += synapse0x24885d0();
   input += synapse0x2488610();
   input += synapse0x2488650();
   input += synapse0x2488690();
   input += synapse0x24886d0();
   input += synapse0x2488280();
   input += synapse0x24882c0();
   input += synapse0x2488300();
   input += synapse0x2488340();
   input += synapse0x2488920();
   input += synapse0x2488960();
   input += synapse0x24889a0();
   input += synapse0x24889e0();
   input += synapse0x2488a20();
   input += synapse0x2488a60();
   input += synapse0x2488aa0();
   input += synapse0x2488ae0();
   input += synapse0x2488b20();
   input += synapse0x2488b60();
   input += synapse0x2488ba0();
   input += synapse0x2488be0();
   input += synapse0x2488c20();
   input += synapse0x2488c60();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2487b40() {
   double input = input0x2487b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2488ca0() {
   double input = -0.286443;
   input += synapse0x2488fe0();
   input += synapse0x2489020();
   input += synapse0x2489060();
   input += synapse0x24890a0();
   input += synapse0x24890e0();
   input += synapse0x2489120();
   input += synapse0x2489160();
   input += synapse0x24891a0();
   input += synapse0x24891e0();
   input += synapse0x2489220();
   input += synapse0x2489260();
   input += synapse0x24892a0();
   input += synapse0x24892e0();
   input += synapse0x2489320();
   input += synapse0x2489360();
   input += synapse0x24893a0();
   input += synapse0x2488e30();
   input += synapse0x2488e70();
   input += synapse0x24894f0();
   input += synapse0x2489530();
   input += synapse0x2489570();
   input += synapse0x24895b0();
   input += synapse0x24895f0();
   input += synapse0x2489630();
   input += synapse0x2489670();
   input += synapse0x24896b0();
   input += synapse0x24896f0();
   input += synapse0x2489730();
   input += synapse0x2489770();
   input += synapse0x24897b0();
   input += synapse0x24897f0();
   input += synapse0x2489830();
   input += synapse0x24893e0();
   input += synapse0x2489420();
   input += synapse0x2489460();
   input += synapse0x24894a0();
   input += synapse0x2489a80();
   input += synapse0x2489ac0();
   input += synapse0x2489b00();
   input += synapse0x2489b40();
   input += synapse0x2489b80();
   input += synapse0x2489bc0();
   input += synapse0x2489c00();
   input += synapse0x2489c40();
   input += synapse0x2489c80();
   input += synapse0x2489cc0();
   input += synapse0x2489d00();
   input += synapse0x2489d40();
   input += synapse0x2489d80();
   input += synapse0x2489dc0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2488ca0() {
   double input = input0x2488ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x2489e00() {
   double input = 7.03188;
   input += synapse0x248a020();
   input += synapse0x248a060();
   input += synapse0x248a0a0();
   input += synapse0x248a0e0();
   input += synapse0x248a120();
   return input;
}

double NNfunction_sb_cLuR::neuron0x2489e00() {
   double input = input0x2489e00();
   return (input * 1)+0;
}

double NNfunction_sb_cLuR::synapse0x245a270() {
   return (neuron0x2454e70()*-0.810303);
}

double NNfunction_sb_cLuR::synapse0x245a2b0() {
   return (neuron0x2455120()*-0.00199241);
}

double NNfunction_sb_cLuR::synapse0x245a2f0() {
   return (neuron0x2455460()*0.468683);
}

double NNfunction_sb_cLuR::synapse0x245a330() {
   return (neuron0x24557a0()*-0.293084);
}

double NNfunction_sb_cLuR::synapse0x245a370() {
   return (neuron0x2455ae0()*0.598219);
}

double NNfunction_sb_cLuR::synapse0x245a3b0() {
   return (neuron0x2455e20()*-0.221228);
}

double NNfunction_sb_cLuR::synapse0x245a3f0() {
   return (neuron0x2456160()*-0.353204);
}

double NNfunction_sb_cLuR::synapse0x245a430() {
   return (neuron0x24564a0()*0.183723);
}

double NNfunction_sb_cLuR::synapse0x245a470() {
   return (neuron0x24567e0()*0.0366797);
}

double NNfunction_sb_cLuR::synapse0x245a4b0() {
   return (neuron0x2456b20()*-0.240303);
}

double NNfunction_sb_cLuR::synapse0x245a4f0() {
   return (neuron0x2456e60()*0.0328366);
}

double NNfunction_sb_cLuR::synapse0x245a530() {
   return (neuron0x24571a0()*0.018105);
}

double NNfunction_sb_cLuR::synapse0x245a570() {
   return (neuron0x24574e0()*0.2298);
}

double NNfunction_sb_cLuR::synapse0x245a5b0() {
   return (neuron0x2457820()*-0.283252);
}

double NNfunction_sb_cLuR::synapse0x245a5f0() {
   return (neuron0x2457b60()*0.477005);
}

double NNfunction_sb_cLuR::synapse0x245a630() {
   return (neuron0x2457ea0()*0.208568);
}

double NNfunction_sb_cLuR::synapse0x245a0c0() {
   return (neuron0x24581e0()*-0.0710758);
}

double NNfunction_sb_cLuR::synapse0x245a100() {
   return (neuron0x2458740()*-0.0972327);
}

double NNfunction_sb_cLuR::synapse0x2211030() {
   return (neuron0x2458a80()*0.151793);
}

double NNfunction_sb_cLuR::synapse0x2211070() {
   return (neuron0x2458dc0()*-0.348301);
}

double NNfunction_sb_cLuR::synapse0x245a670() {
   return (neuron0x2459100()*-0.706983);
}

double NNfunction_sb_cLuR::synapse0x245a6b0() {
   return (neuron0x2459440()*0.0232899);
}

double NNfunction_sb_cLuR::synapse0x245a6f0() {
   return (neuron0x2459780()*-0.227335);
}

double NNfunction_sb_cLuR::synapse0x245a730() {
   return (neuron0x2459ac0()*0.246434);
}

double NNfunction_sb_cLuR::synapse0x245aab0() {
   return (neuron0x2454e70()*-0.0115199);
}

double NNfunction_sb_cLuR::synapse0x245aaf0() {
   return (neuron0x2455120()*0.0240672);
}

double NNfunction_sb_cLuR::synapse0x245ab30() {
   return (neuron0x2455460()*0.0394549);
}

double NNfunction_sb_cLuR::synapse0x245ab70() {
   return (neuron0x24557a0()*0.00535356);
}

double NNfunction_sb_cLuR::synapse0x245abb0() {
   return (neuron0x2455ae0()*0.0351055);
}

double NNfunction_sb_cLuR::synapse0x245abf0() {
   return (neuron0x2455e20()*0.0104587);
}

double NNfunction_sb_cLuR::synapse0x245ac30() {
   return (neuron0x2456160()*0.0139008);
}

double NNfunction_sb_cLuR::synapse0x245ac70() {
   return (neuron0x24564a0()*0.0255287);
}

double NNfunction_sb_cLuR::synapse0x245acb0() {
   return (neuron0x24567e0()*-0.0208969);
}

double NNfunction_sb_cLuR::synapse0x2210e80() {
   return (neuron0x2456b20()*0.0179758);
}

double NNfunction_sb_cLuR::synapse0x2210ec0() {
   return (neuron0x2456e60()*-0.0361871);
}

double NNfunction_sb_cLuR::synapse0x2210f00() {
   return (neuron0x24571a0()*-0.00884664);
}

double NNfunction_sb_cLuR::synapse0x2210f40() {
   return (neuron0x24574e0()*0.392685);
}

double NNfunction_sb_cLuR::synapse0x245af00() {
   return (neuron0x2457820()*0.0267362);
}

double NNfunction_sb_cLuR::synapse0x245af40() {
   return (neuron0x2457b60()*-1.49666);
}

double NNfunction_sb_cLuR::synapse0x245af80() {
   return (neuron0x2457ea0()*-0.00853292);
}

double NNfunction_sb_cLuR::synapse0x245a900() {
   return (neuron0x24581e0()*-0.0382365);
}

double NNfunction_sb_cLuR::synapse0x245a940() {
   return (neuron0x2458740()*-0.0211741);
}

double NNfunction_sb_cLuR::synapse0x245b0d0() {
   return (neuron0x2458a80()*-0.0134915);
}

double NNfunction_sb_cLuR::synapse0x245b110() {
   return (neuron0x2458dc0()*-0.0156662);
}

double NNfunction_sb_cLuR::synapse0x245b150() {
   return (neuron0x2459100()*0.00913301);
}

double NNfunction_sb_cLuR::synapse0x245b190() {
   return (neuron0x2459440()*0.0154409);
}

double NNfunction_sb_cLuR::synapse0x245b1d0() {
   return (neuron0x2459780()*-0.0348771);
}

double NNfunction_sb_cLuR::synapse0x245b210() {
   return (neuron0x2459ac0()*-0.0165352);
}

double NNfunction_sb_cLuR::synapse0x245b590() {
   return (neuron0x2454e70()*-0.173732);
}

double NNfunction_sb_cLuR::synapse0x245b5d0() {
   return (neuron0x2455120()*0.00385308);
}

double NNfunction_sb_cLuR::synapse0x245b610() {
   return (neuron0x2455460()*0.216827);
}

double NNfunction_sb_cLuR::synapse0x245b650() {
   return (neuron0x24557a0()*-0.187173);
}

double NNfunction_sb_cLuR::synapse0x245b690() {
   return (neuron0x2455ae0()*0.116571);
}

double NNfunction_sb_cLuR::synapse0x245b6d0() {
   return (neuron0x2455e20()*0.321891);
}

double NNfunction_sb_cLuR::synapse0x245b710() {
   return (neuron0x2456160()*0.254096);
}

double NNfunction_sb_cLuR::synapse0x245b750() {
   return (neuron0x24564a0()*-0.164806);
}

double NNfunction_sb_cLuR::synapse0x245b790() {
   return (neuron0x24567e0()*0.0191301);
}

double NNfunction_sb_cLuR::synapse0x245b7d0() {
   return (neuron0x2456b20()*-0.0446503);
}

double NNfunction_sb_cLuR::synapse0x245b810() {
   return (neuron0x2456e60()*-0.129131);
}

double NNfunction_sb_cLuR::synapse0x245b850() {
   return (neuron0x24571a0()*-0.421741);
}

double NNfunction_sb_cLuR::synapse0x245b890() {
   return (neuron0x24574e0()*0.60873);
}

double NNfunction_sb_cLuR::synapse0x245b8d0() {
   return (neuron0x2457820()*0.407251);
}

double NNfunction_sb_cLuR::synapse0x245b910() {
   return (neuron0x2457b60()*0.362217);
}

double NNfunction_sb_cLuR::synapse0x245b950() {
   return (neuron0x2457ea0()*-0.187252);
}

double NNfunction_sb_cLuR::synapse0x245b3e0() {
   return (neuron0x24581e0()*-0.00905564);
}

double NNfunction_sb_cLuR::synapse0x245b420() {
   return (neuron0x2458740()*-0.174864);
}

double NNfunction_sb_cLuR::synapse0x22116e0() {
   return (neuron0x2458a80()*0.303242);
}

double NNfunction_sb_cLuR::synapse0x221efb0() {
   return (neuron0x2458dc0()*-0.510302);
}

double NNfunction_sb_cLuR::synapse0x221eff0() {
   return (neuron0x2459100()*-0.0773124);
}

double NNfunction_sb_cLuR::synapse0x245d880() {
   return (neuron0x2459440()*-0.119418);
}

double NNfunction_sb_cLuR::synapse0x245d8c0() {
   return (neuron0x2459780()*-0.498748);
}

double NNfunction_sb_cLuR::synapse0x2454bb0() {
   return (neuron0x2459ac0()*-0.27216);
}

double NNfunction_sb_cLuR::synapse0x2454c80() {
   return (neuron0x2454e70()*0.610495);
}

double NNfunction_sb_cLuR::synapse0x221f830() {
   return (neuron0x2455120()*0.180483);
}

double NNfunction_sb_cLuR::synapse0x245ae80() {
   return (neuron0x2455460()*-0.46602);
}

double NNfunction_sb_cLuR::synapse0x245aec0() {
   return (neuron0x24557a0()*0.703838);
}

double NNfunction_sb_cLuR::synapse0x245baa0() {
   return (neuron0x2455ae0()*-0.0617204);
}

double NNfunction_sb_cLuR::synapse0x245bae0() {
   return (neuron0x2455e20()*0.0199055);
}

double NNfunction_sb_cLuR::synapse0x245bb20() {
   return (neuron0x2456160()*0.151207);
}

double NNfunction_sb_cLuR::synapse0x245bb60() {
   return (neuron0x24564a0()*-0.0573943);
}

double NNfunction_sb_cLuR::synapse0x245bba0() {
   return (neuron0x24567e0()*0.0938025);
}

double NNfunction_sb_cLuR::synapse0x245bbe0() {
   return (neuron0x2456b20()*-0.0592923);
}

double NNfunction_sb_cLuR::synapse0x245bc20() {
   return (neuron0x2456e60()*-0.0103119);
}

double NNfunction_sb_cLuR::synapse0x245bc60() {
   return (neuron0x24571a0()*-0.631179);
}

double NNfunction_sb_cLuR::synapse0x245bca0() {
   return (neuron0x24574e0()*-0.523544);
}

double NNfunction_sb_cLuR::synapse0x245bce0() {
   return (neuron0x2457820()*0.00361192);
}

double NNfunction_sb_cLuR::synapse0x245bd20() {
   return (neuron0x2457b60()*-0.605359);
}

double NNfunction_sb_cLuR::synapse0x245bd60() {
   return (neuron0x2457ea0()*0.0178935);
}

double NNfunction_sb_cLuR::synapse0x2454bf0() {
   return (neuron0x24581e0()*0.0464421);
}

double NNfunction_sb_cLuR::synapse0x2454c30() {
   return (neuron0x2458740()*-0.293732);
}

double NNfunction_sb_cLuR::synapse0x245beb0() {
   return (neuron0x2458a80()*-0.162764);
}

double NNfunction_sb_cLuR::synapse0x245bef0() {
   return (neuron0x2458dc0()*-0.127667);
}

double NNfunction_sb_cLuR::synapse0x245bf30() {
   return (neuron0x2459100()*0.000198235);
}

double NNfunction_sb_cLuR::synapse0x245bf70() {
   return (neuron0x2459440()*0.125784);
}

double NNfunction_sb_cLuR::synapse0x245bfb0() {
   return (neuron0x2459780()*-0.0759418);
}

double NNfunction_sb_cLuR::synapse0x245bff0() {
   return (neuron0x2459ac0()*-0.0734929);
}

double NNfunction_sb_cLuR::synapse0x245c370() {
   return (neuron0x2454e70()*0.0350413);
}

double NNfunction_sb_cLuR::synapse0x245c3b0() {
   return (neuron0x2455120()*-0.045569);
}

double NNfunction_sb_cLuR::synapse0x245c3f0() {
   return (neuron0x2455460()*0.00589968);
}

double NNfunction_sb_cLuR::synapse0x245c430() {
   return (neuron0x24557a0()*-7.18546);
}

double NNfunction_sb_cLuR::synapse0x245c470() {
   return (neuron0x2455ae0()*-0.0189365);
}

double NNfunction_sb_cLuR::synapse0x245c4b0() {
   return (neuron0x2455e20()*-0.097234);
}

double NNfunction_sb_cLuR::synapse0x245c4f0() {
   return (neuron0x2456160()*-0.0469828);
}

double NNfunction_sb_cLuR::synapse0x245c530() {
   return (neuron0x24564a0()*0.00980256);
}

double NNfunction_sb_cLuR::synapse0x245c570() {
   return (neuron0x24567e0()*0.0120511);
}

double NNfunction_sb_cLuR::synapse0x245c5b0() {
   return (neuron0x2456b20()*0.0525674);
}

double NNfunction_sb_cLuR::synapse0x245c5f0() {
   return (neuron0x2456e60()*0.0355485);
}

double NNfunction_sb_cLuR::synapse0x245c630() {
   return (neuron0x24571a0()*-0.0328869);
}

double NNfunction_sb_cLuR::synapse0x245c670() {
   return (neuron0x24574e0()*0.36648);
}

double NNfunction_sb_cLuR::synapse0x245c6b0() {
   return (neuron0x2457820()*0.0927423);
}

double NNfunction_sb_cLuR::synapse0x245c6f0() {
   return (neuron0x2457b60()*0.621909);
}

double NNfunction_sb_cLuR::synapse0x245c730() {
   return (neuron0x2457ea0()*0.0792086);
}

double NNfunction_sb_cLuR::synapse0x245c880() {
   return (neuron0x24581e0()*0.031434);
}

double NNfunction_sb_cLuR::synapse0x245c1c0() {
   return (neuron0x2458740()*-0.0135795);
}

double NNfunction_sb_cLuR::synapse0x245c200() {
   return (neuron0x2458a80()*0.0362046);
}

double NNfunction_sb_cLuR::synapse0x245d9c0() {
   return (neuron0x2458dc0()*-0.0149355);
}

double NNfunction_sb_cLuR::synapse0x245da00() {
   return (neuron0x2459100()*0.00176338);
}

double NNfunction_sb_cLuR::synapse0x245da40() {
   return (neuron0x2459440()*-0.0113193);
}

double NNfunction_sb_cLuR::synapse0x245da80() {
   return (neuron0x2459780()*0.0439538);
}

double NNfunction_sb_cLuR::synapse0x245dac0() {
   return (neuron0x2459ac0()*-0.00387829);
}

double NNfunction_sb_cLuR::synapse0x245de40() {
   return (neuron0x2454e70()*0.104671);
}

double NNfunction_sb_cLuR::synapse0x245de80() {
   return (neuron0x2455120()*0.00999198);
}

double NNfunction_sb_cLuR::synapse0x245dec0() {
   return (neuron0x2455460()*0.391093);
}

double NNfunction_sb_cLuR::synapse0x245df00() {
   return (neuron0x24557a0()*0.356887);
}

double NNfunction_sb_cLuR::synapse0x245df40() {
   return (neuron0x2455ae0()*-0.403331);
}

double NNfunction_sb_cLuR::synapse0x245df80() {
   return (neuron0x2455e20()*-0.590276);
}

double NNfunction_sb_cLuR::synapse0x245dfc0() {
   return (neuron0x2456160()*-1.20116);
}

double NNfunction_sb_cLuR::synapse0x245e000() {
   return (neuron0x24564a0()*-0.993767);
}

double NNfunction_sb_cLuR::synapse0x245e040() {
   return (neuron0x24567e0()*-0.215177);
}

double NNfunction_sb_cLuR::synapse0x221f300() {
   return (neuron0x2456b20()*-0.128055);
}

double NNfunction_sb_cLuR::synapse0x221f340() {
   return (neuron0x2456e60()*0.78264);
}

double NNfunction_sb_cLuR::synapse0x221f380() {
   return (neuron0x24571a0()*-0.297922);
}

double NNfunction_sb_cLuR::synapse0x221f3c0() {
   return (neuron0x24574e0()*0.555483);
}

double NNfunction_sb_cLuR::synapse0x221f400() {
   return (neuron0x2457820()*0.403781);
}

double NNfunction_sb_cLuR::synapse0x221f440() {
   return (neuron0x2457b60()*-0.457368);
}

double NNfunction_sb_cLuR::synapse0x221f480() {
   return (neuron0x2457ea0()*0.077646);
}

double NNfunction_sb_cLuR::synapse0x245dc90() {
   return (neuron0x24581e0()*-0.378062);
}

double NNfunction_sb_cLuR::synapse0x245dcd0() {
   return (neuron0x2458740()*0.075665);
}

double NNfunction_sb_cLuR::synapse0x221f5d0() {
   return (neuron0x2458a80()*0.0310358);
}

double NNfunction_sb_cLuR::synapse0x221f610() {
   return (neuron0x2458dc0()*0.295547);
}

double NNfunction_sb_cLuR::synapse0x221f650() {
   return (neuron0x2459100()*-0.994388);
}

double NNfunction_sb_cLuR::synapse0x221f690() {
   return (neuron0x2459440()*0.152404);
}

double NNfunction_sb_cLuR::synapse0x221f6d0() {
   return (neuron0x2459780()*-0.161885);
}

double NNfunction_sb_cLuR::synapse0x245e890() {
   return (neuron0x2459ac0()*0.362155);
}

double NNfunction_sb_cLuR::synapse0x245ec10() {
   return (neuron0x2454e70()*0.00619582);
}

double NNfunction_sb_cLuR::synapse0x245ec50() {
   return (neuron0x2455120()*-0.0192205);
}

double NNfunction_sb_cLuR::synapse0x245ec90() {
   return (neuron0x2455460()*0.000101883);
}

double NNfunction_sb_cLuR::synapse0x245ecd0() {
   return (neuron0x24557a0()*0.115219);
}

double NNfunction_sb_cLuR::synapse0x245ed10() {
   return (neuron0x2455ae0()*0.00742825);
}

double NNfunction_sb_cLuR::synapse0x245ed50() {
   return (neuron0x2455e20()*0.00697859);
}

double NNfunction_sb_cLuR::synapse0x245ed90() {
   return (neuron0x2456160()*0.00630567);
}

double NNfunction_sb_cLuR::synapse0x245edd0() {
   return (neuron0x24564a0()*0.0237686);
}

double NNfunction_sb_cLuR::synapse0x245ee10() {
   return (neuron0x24567e0()*-0.0147572);
}

double NNfunction_sb_cLuR::synapse0x245ee50() {
   return (neuron0x2456b20()*-0.00940813);
}

double NNfunction_sb_cLuR::synapse0x245ee90() {
   return (neuron0x2456e60()*-0.00830195);
}

double NNfunction_sb_cLuR::synapse0x245eed0() {
   return (neuron0x24571a0()*-0.020951);
}

double NNfunction_sb_cLuR::synapse0x245ef10() {
   return (neuron0x24574e0()*0.70525);
}

double NNfunction_sb_cLuR::synapse0x245ef50() {
   return (neuron0x2457820()*0.00694725);
}

double NNfunction_sb_cLuR::synapse0x245ef90() {
   return (neuron0x2457b60()*-0.659857);
}

double NNfunction_sb_cLuR::synapse0x245efd0() {
   return (neuron0x2457ea0()*0.00075735);
}

double NNfunction_sb_cLuR::synapse0x245ea60() {
   return (neuron0x24581e0()*-0.00459338);
}

double NNfunction_sb_cLuR::synapse0x245eaa0() {
   return (neuron0x2458740()*-0.0210747);
}

double NNfunction_sb_cLuR::synapse0x245f120() {
   return (neuron0x2458a80()*-0.0196765);
}

double NNfunction_sb_cLuR::synapse0x245f160() {
   return (neuron0x2458dc0()*-0.00353334);
}

double NNfunction_sb_cLuR::synapse0x245f1a0() {
   return (neuron0x2459100()*0.00528816);
}

double NNfunction_sb_cLuR::synapse0x245f1e0() {
   return (neuron0x2459440()*0.00164564);
}

double NNfunction_sb_cLuR::synapse0x245f220() {
   return (neuron0x2459780()*-0.00862419);
}

double NNfunction_sb_cLuR::synapse0x245f260() {
   return (neuron0x2459ac0()*0.00043482);
}

double NNfunction_sb_cLuR::synapse0x245f5e0() {
   return (neuron0x2454e70()*-0.655636);
}

double NNfunction_sb_cLuR::synapse0x245f620() {
   return (neuron0x2455120()*-0.222738);
}

double NNfunction_sb_cLuR::synapse0x245f660() {
   return (neuron0x2455460()*1.15972);
}

double NNfunction_sb_cLuR::synapse0x245f6a0() {
   return (neuron0x24557a0()*0.012278);
}

double NNfunction_sb_cLuR::synapse0x245f6e0() {
   return (neuron0x2455ae0()*0.0730527);
}

double NNfunction_sb_cLuR::synapse0x245f720() {
   return (neuron0x2455e20()*0.0615319);
}

double NNfunction_sb_cLuR::synapse0x245f760() {
   return (neuron0x2456160()*-0.21883);
}

double NNfunction_sb_cLuR::synapse0x245f7a0() {
   return (neuron0x24564a0()*0.219816);
}

double NNfunction_sb_cLuR::synapse0x245f7e0() {
   return (neuron0x24567e0()*0.357152);
}

double NNfunction_sb_cLuR::synapse0x245f820() {
   return (neuron0x2456b20()*0.216013);
}

double NNfunction_sb_cLuR::synapse0x245f860() {
   return (neuron0x2456e60()*-0.157043);
}

double NNfunction_sb_cLuR::synapse0x245f8a0() {
   return (neuron0x24571a0()*-0.632173);
}

double NNfunction_sb_cLuR::synapse0x245f8e0() {
   return (neuron0x24574e0()*1.21051);
}

double NNfunction_sb_cLuR::synapse0x245f920() {
   return (neuron0x2457820()*-0.0391843);
}

double NNfunction_sb_cLuR::synapse0x245f960() {
   return (neuron0x2457b60()*0.23566);
}

double NNfunction_sb_cLuR::synapse0x245f9a0() {
   return (neuron0x2457ea0()*-0.0579416);
}

double NNfunction_sb_cLuR::synapse0x245f430() {
   return (neuron0x24581e0()*0.276159);
}

double NNfunction_sb_cLuR::synapse0x245f470() {
   return (neuron0x2458740()*0.281493);
}

double NNfunction_sb_cLuR::synapse0x245faf0() {
   return (neuron0x2458a80()*0.31293);
}

double NNfunction_sb_cLuR::synapse0x245fb30() {
   return (neuron0x2458dc0()*-0.67476);
}

double NNfunction_sb_cLuR::synapse0x245fb70() {
   return (neuron0x2459100()*-0.148185);
}

double NNfunction_sb_cLuR::synapse0x245fbb0() {
   return (neuron0x2459440()*-0.040893);
}

double NNfunction_sb_cLuR::synapse0x245fbf0() {
   return (neuron0x2459780()*-0.33372);
}

double NNfunction_sb_cLuR::synapse0x245fc30() {
   return (neuron0x2459ac0()*0.25176);
}

double NNfunction_sb_cLuR::synapse0x2458630() {
   return (neuron0x2454e70()*-0.224741);
}

double NNfunction_sb_cLuR::synapse0x2458670() {
   return (neuron0x2455120()*-0.082836);
}

double NNfunction_sb_cLuR::synapse0x24586b0() {
   return (neuron0x2455460()*-0.427156);
}

double NNfunction_sb_cLuR::synapse0x24586f0() {
   return (neuron0x24557a0()*0.299539);
}

double NNfunction_sb_cLuR::synapse0x24601c0() {
   return (neuron0x2455ae0()*0.59546);
}

double NNfunction_sb_cLuR::synapse0x2460200() {
   return (neuron0x2455e20()*0.1074);
}

double NNfunction_sb_cLuR::synapse0x2460240() {
   return (neuron0x2456160()*0.490049);
}

double NNfunction_sb_cLuR::synapse0x2460280() {
   return (neuron0x24564a0()*0.0206854);
}

double NNfunction_sb_cLuR::synapse0x24602c0() {
   return (neuron0x24567e0()*0.039259);
}

double NNfunction_sb_cLuR::synapse0x2460300() {
   return (neuron0x2456b20()*0.390274);
}

double NNfunction_sb_cLuR::synapse0x2460340() {
   return (neuron0x2456e60()*-0.234534);
}

double NNfunction_sb_cLuR::synapse0x2460380() {
   return (neuron0x24571a0()*0.564606);
}

double NNfunction_sb_cLuR::synapse0x24603c0() {
   return (neuron0x24574e0()*1.13492);
}

double NNfunction_sb_cLuR::synapse0x2460400() {
   return (neuron0x2457820()*-0.147928);
}

double NNfunction_sb_cLuR::synapse0x2460440() {
   return (neuron0x2457b60()*0.759487);
}

double NNfunction_sb_cLuR::synapse0x2460480() {
   return (neuron0x2457ea0()*-0.20379);
}

double NNfunction_sb_cLuR::synapse0x245fe00() {
   return (neuron0x24581e0()*0.529832);
}

double NNfunction_sb_cLuR::synapse0x245fe40() {
   return (neuron0x2458740()*0.265735);
}

double NNfunction_sb_cLuR::synapse0x24605d0() {
   return (neuron0x2458a80()*-0.759084);
}

double NNfunction_sb_cLuR::synapse0x2460610() {
   return (neuron0x2458dc0()*-0.383571);
}

double NNfunction_sb_cLuR::synapse0x2460650() {
   return (neuron0x2459100()*0.103085);
}

double NNfunction_sb_cLuR::synapse0x2460690() {
   return (neuron0x2459440()*-0.684906);
}

double NNfunction_sb_cLuR::synapse0x24606d0() {
   return (neuron0x2459780()*0.284376);
}

double NNfunction_sb_cLuR::synapse0x2460710() {
   return (neuron0x2459ac0()*-0.240215);
}

double NNfunction_sb_cLuR::synapse0x2460a90() {
   return (neuron0x2454e70()*0.539391);
}

double NNfunction_sb_cLuR::synapse0x2460ad0() {
   return (neuron0x2455120()*0.243764);
}

double NNfunction_sb_cLuR::synapse0x2460b10() {
   return (neuron0x2455460()*-0.0617785);
}

double NNfunction_sb_cLuR::synapse0x2460b50() {
   return (neuron0x24557a0()*1.34308);
}

double NNfunction_sb_cLuR::synapse0x2460b90() {
   return (neuron0x2455ae0()*0.114734);
}

double NNfunction_sb_cLuR::synapse0x2460bd0() {
   return (neuron0x2455e20()*-0.365423);
}

double NNfunction_sb_cLuR::synapse0x2460c10() {
   return (neuron0x2456160()*-0.331686);
}

double NNfunction_sb_cLuR::synapse0x2460c50() {
   return (neuron0x24564a0()*-0.156977);
}

double NNfunction_sb_cLuR::synapse0x2460c90() {
   return (neuron0x24567e0()*0.18784);
}

double NNfunction_sb_cLuR::synapse0x2460cd0() {
   return (neuron0x2456b20()*0.281056);
}

double NNfunction_sb_cLuR::synapse0x2460d10() {
   return (neuron0x2456e60()*-0.102418);
}

double NNfunction_sb_cLuR::synapse0x2460d50() {
   return (neuron0x24571a0()*0.570174);
}

double NNfunction_sb_cLuR::synapse0x2460d90() {
   return (neuron0x24574e0()*0.0815786);
}

double NNfunction_sb_cLuR::synapse0x2460dd0() {
   return (neuron0x2457820()*-0.278284);
}

double NNfunction_sb_cLuR::synapse0x2460e10() {
   return (neuron0x2457b60()*1.18225);
}

double NNfunction_sb_cLuR::synapse0x2460e50() {
   return (neuron0x2457ea0()*-0.570308);
}

double NNfunction_sb_cLuR::synapse0x24608e0() {
   return (neuron0x24581e0()*0.362945);
}

double NNfunction_sb_cLuR::synapse0x2460920() {
   return (neuron0x2458740()*0.240907);
}

double NNfunction_sb_cLuR::synapse0x2460fa0() {
   return (neuron0x2458a80()*-0.165527);
}

double NNfunction_sb_cLuR::synapse0x2460fe0() {
   return (neuron0x2458dc0()*-0.0778222);
}

double NNfunction_sb_cLuR::synapse0x2461020() {
   return (neuron0x2459100()*-0.148831);
}

double NNfunction_sb_cLuR::synapse0x2461060() {
   return (neuron0x2459440()*-0.619572);
}

double NNfunction_sb_cLuR::synapse0x24610a0() {
   return (neuron0x2459780()*-0.0616795);
}

double NNfunction_sb_cLuR::synapse0x24610e0() {
   return (neuron0x2459ac0()*-0.220886);
}

double NNfunction_sb_cLuR::synapse0x2461460() {
   return (neuron0x2454e70()*0.259213);
}

double NNfunction_sb_cLuR::synapse0x24614a0() {
   return (neuron0x2455120()*0.0682773);
}

double NNfunction_sb_cLuR::synapse0x24614e0() {
   return (neuron0x2455460()*-0.113044);
}

double NNfunction_sb_cLuR::synapse0x2461520() {
   return (neuron0x24557a0()*0.610324);
}

double NNfunction_sb_cLuR::synapse0x2461560() {
   return (neuron0x2455ae0()*0.301389);
}

double NNfunction_sb_cLuR::synapse0x24615a0() {
   return (neuron0x2455e20()*0.294201);
}

double NNfunction_sb_cLuR::synapse0x24615e0() {
   return (neuron0x2456160()*0.878732);
}

double NNfunction_sb_cLuR::synapse0x2461620() {
   return (neuron0x24564a0()*-0.156949);
}

double NNfunction_sb_cLuR::synapse0x2461660() {
   return (neuron0x24567e0()*-0.639379);
}

double NNfunction_sb_cLuR::synapse0x24616a0() {
   return (neuron0x2456b20()*-0.189145);
}

double NNfunction_sb_cLuR::synapse0x24616e0() {
   return (neuron0x2456e60()*-0.320248);
}

double NNfunction_sb_cLuR::synapse0x2461720() {
   return (neuron0x24571a0()*0.632669);
}

double NNfunction_sb_cLuR::synapse0x2461760() {
   return (neuron0x24574e0()*0.227339);
}

double NNfunction_sb_cLuR::synapse0x24617a0() {
   return (neuron0x2457820()*-0.316417);
}

double NNfunction_sb_cLuR::synapse0x24617e0() {
   return (neuron0x2457b60()*-0.0838637);
}

double NNfunction_sb_cLuR::synapse0x2461820() {
   return (neuron0x2457ea0()*0.184648);
}

double NNfunction_sb_cLuR::synapse0x24612b0() {
   return (neuron0x24581e0()*0.190078);
}

double NNfunction_sb_cLuR::synapse0x24612f0() {
   return (neuron0x2458740()*0.138358);
}

double NNfunction_sb_cLuR::synapse0x245e080() {
   return (neuron0x2458a80()*-0.611684);
}

double NNfunction_sb_cLuR::synapse0x245e0c0() {
   return (neuron0x2458dc0()*0.026524);
}

double NNfunction_sb_cLuR::synapse0x245e100() {
   return (neuron0x2459100()*0.15666);
}

double NNfunction_sb_cLuR::synapse0x245e140() {
   return (neuron0x2459440()*-0.0147238);
}

double NNfunction_sb_cLuR::synapse0x245e180() {
   return (neuron0x2459780()*-0.144717);
}

double NNfunction_sb_cLuR::synapse0x245e1c0() {
   return (neuron0x2459ac0()*0.0147211);
}

double NNfunction_sb_cLuR::synapse0x245e540() {
   return (neuron0x2454e70()*-0.121106);
}

double NNfunction_sb_cLuR::synapse0x245e580() {
   return (neuron0x2455120()*-0.0433866);
}

double NNfunction_sb_cLuR::synapse0x245e5c0() {
   return (neuron0x2455460()*-0.149258);
}

double NNfunction_sb_cLuR::synapse0x245e600() {
   return (neuron0x24557a0()*-0.590972);
}

double NNfunction_sb_cLuR::synapse0x245e640() {
   return (neuron0x2455ae0()*0.212895);
}

double NNfunction_sb_cLuR::synapse0x245e680() {
   return (neuron0x2455e20()*0.100183);
}

double NNfunction_sb_cLuR::synapse0x245e6c0() {
   return (neuron0x2456160()*-0.0396968);
}

double NNfunction_sb_cLuR::synapse0x245e700() {
   return (neuron0x24564a0()*0.0176073);
}

double NNfunction_sb_cLuR::synapse0x245e740() {
   return (neuron0x24567e0()*0.0771505);
}

double NNfunction_sb_cLuR::synapse0x245e780() {
   return (neuron0x2456b20()*0.0720799);
}

double NNfunction_sb_cLuR::synapse0x245e7c0() {
   return (neuron0x2456e60()*-0.190132);
}

double NNfunction_sb_cLuR::synapse0x245e800() {
   return (neuron0x24571a0()*-0.0348873);
}

double NNfunction_sb_cLuR::synapse0x245e840() {
   return (neuron0x24574e0()*0.890726);
}

double NNfunction_sb_cLuR::synapse0x2462980() {
   return (neuron0x2457820()*-0.0995611);
}

double NNfunction_sb_cLuR::synapse0x24629c0() {
   return (neuron0x2457b60()*-0.647961);
}

double NNfunction_sb_cLuR::synapse0x2462a00() {
   return (neuron0x2457ea0()*-0.0890849);
}

double NNfunction_sb_cLuR::synapse0x245e390() {
   return (neuron0x24581e0()*0.0870976);
}

double NNfunction_sb_cLuR::synapse0x245e3d0() {
   return (neuron0x2458740()*0.0772452);
}

double NNfunction_sb_cLuR::synapse0x2462b50() {
   return (neuron0x2458a80()*-0.29547);
}

double NNfunction_sb_cLuR::synapse0x2462b90() {
   return (neuron0x2458dc0()*-0.207863);
}

double NNfunction_sb_cLuR::synapse0x2462bd0() {
   return (neuron0x2459100()*0.0570181);
}

double NNfunction_sb_cLuR::synapse0x2462c10() {
   return (neuron0x2459440()*0.0575298);
}

double NNfunction_sb_cLuR::synapse0x2462c50() {
   return (neuron0x2459780()*-0.0256667);
}

double NNfunction_sb_cLuR::synapse0x2462c90() {
   return (neuron0x2459ac0()*-0.0180591);
}

double NNfunction_sb_cLuR::synapse0x2463010() {
   return (neuron0x2454e70()*0.428783);
}

double NNfunction_sb_cLuR::synapse0x2463050() {
   return (neuron0x2455120()*-0.261526);
}

double NNfunction_sb_cLuR::synapse0x2463090() {
   return (neuron0x2455460()*0.289527);
}

double NNfunction_sb_cLuR::synapse0x24630d0() {
   return (neuron0x24557a0()*0.0612345);
}

double NNfunction_sb_cLuR::synapse0x2463110() {
   return (neuron0x2455ae0()*0.452325);
}

double NNfunction_sb_cLuR::synapse0x2463150() {
   return (neuron0x2455e20()*-0.0941387);
}

double NNfunction_sb_cLuR::synapse0x2463190() {
   return (neuron0x2456160()*-0.290962);
}

double NNfunction_sb_cLuR::synapse0x24631d0() {
   return (neuron0x24564a0()*-0.067449);
}

double NNfunction_sb_cLuR::synapse0x2463210() {
   return (neuron0x24567e0()*-0.374706);
}

double NNfunction_sb_cLuR::synapse0x2463250() {
   return (neuron0x2456b20()*0.528788);
}

double NNfunction_sb_cLuR::synapse0x2463290() {
   return (neuron0x2456e60()*0.19749);
}

double NNfunction_sb_cLuR::synapse0x24632d0() {
   return (neuron0x24571a0()*0.0280379);
}

double NNfunction_sb_cLuR::synapse0x2463310() {
   return (neuron0x24574e0()*-0.612475);
}

double NNfunction_sb_cLuR::synapse0x2463350() {
   return (neuron0x2457820()*0.249198);
}

double NNfunction_sb_cLuR::synapse0x2463390() {
   return (neuron0x2457b60()*-0.477438);
}

double NNfunction_sb_cLuR::synapse0x24633d0() {
   return (neuron0x2457ea0()*-0.122627);
}

double NNfunction_sb_cLuR::synapse0x2462e60() {
   return (neuron0x24581e0()*-0.343059);
}

double NNfunction_sb_cLuR::synapse0x2462ea0() {
   return (neuron0x2458740()*-0.831358);
}

double NNfunction_sb_cLuR::synapse0x2463520() {
   return (neuron0x2458a80()*0.125208);
}

double NNfunction_sb_cLuR::synapse0x2463560() {
   return (neuron0x2458dc0()*-0.255863);
}

double NNfunction_sb_cLuR::synapse0x24635a0() {
   return (neuron0x2459100()*-0.0976777);
}

double NNfunction_sb_cLuR::synapse0x24635e0() {
   return (neuron0x2459440()*0.412697);
}

double NNfunction_sb_cLuR::synapse0x2463620() {
   return (neuron0x2459780()*0.0699775);
}

double NNfunction_sb_cLuR::synapse0x2463660() {
   return (neuron0x2459ac0()*0.012478);
}

double NNfunction_sb_cLuR::synapse0x24639e0() {
   return (neuron0x2454e70()*0.0792184);
}

double NNfunction_sb_cLuR::synapse0x2463a20() {
   return (neuron0x2455120()*-0.0860598);
}

double NNfunction_sb_cLuR::synapse0x2463a60() {
   return (neuron0x2455460()*0.0753867);
}

double NNfunction_sb_cLuR::synapse0x2463aa0() {
   return (neuron0x24557a0()*1.4798);
}

double NNfunction_sb_cLuR::synapse0x2463ae0() {
   return (neuron0x2455ae0()*0.0641488);
}

double NNfunction_sb_cLuR::synapse0x2463b20() {
   return (neuron0x2455e20()*0.0674573);
}

double NNfunction_sb_cLuR::synapse0x2463b60() {
   return (neuron0x2456160()*-0.0913015);
}

double NNfunction_sb_cLuR::synapse0x2463ba0() {
   return (neuron0x24564a0()*-0.262528);
}

double NNfunction_sb_cLuR::synapse0x2463be0() {
   return (neuron0x24567e0()*-0.0634848);
}

double NNfunction_sb_cLuR::synapse0x2463c20() {
   return (neuron0x2456b20()*-0.112596);
}

double NNfunction_sb_cLuR::synapse0x2463c60() {
   return (neuron0x2456e60()*0.055215);
}

double NNfunction_sb_cLuR::synapse0x2463ca0() {
   return (neuron0x24571a0()*0.0498939);
}

double NNfunction_sb_cLuR::synapse0x2463ce0() {
   return (neuron0x24574e0()*0.0333857);
}

double NNfunction_sb_cLuR::synapse0x2463d20() {
   return (neuron0x2457820()*0.0465952);
}

double NNfunction_sb_cLuR::synapse0x2463d60() {
   return (neuron0x2457b60()*-1.97431);
}

double NNfunction_sb_cLuR::synapse0x2463da0() {
   return (neuron0x2457ea0()*-0.0014803);
}

double NNfunction_sb_cLuR::synapse0x2463830() {
   return (neuron0x24581e0()*-0.106023);
}

double NNfunction_sb_cLuR::synapse0x2463870() {
   return (neuron0x2458740()*0.00335183);
}

double NNfunction_sb_cLuR::synapse0x2463ef0() {
   return (neuron0x2458a80()*-0.0374079);
}

double NNfunction_sb_cLuR::synapse0x2463f30() {
   return (neuron0x2458dc0()*0.0402646);
}

double NNfunction_sb_cLuR::synapse0x2463f70() {
   return (neuron0x2459100()*0.0939053);
}

double NNfunction_sb_cLuR::synapse0x2463fb0() {
   return (neuron0x2459440()*-0.184403);
}

double NNfunction_sb_cLuR::synapse0x2463ff0() {
   return (neuron0x2459780()*0.0445105);
}

double NNfunction_sb_cLuR::synapse0x2464030() {
   return (neuron0x2459ac0()*0.148511);
}

double NNfunction_sb_cLuR::synapse0x24643b0() {
   return (neuron0x2454e70()*-0.322955);
}

double NNfunction_sb_cLuR::synapse0x24643f0() {
   return (neuron0x2455120()*-0.694847);
}

double NNfunction_sb_cLuR::synapse0x2464430() {
   return (neuron0x2455460()*-0.432782);
}

double NNfunction_sb_cLuR::synapse0x2464470() {
   return (neuron0x24557a0()*-0.0525828);
}

double NNfunction_sb_cLuR::synapse0x24644b0() {
   return (neuron0x2455ae0()*-0.0287141);
}

double NNfunction_sb_cLuR::synapse0x24644f0() {
   return (neuron0x2455e20()*0.129482);
}

double NNfunction_sb_cLuR::synapse0x2464530() {
   return (neuron0x2456160()*0.0142068);
}

double NNfunction_sb_cLuR::synapse0x2464570() {
   return (neuron0x24564a0()*0.0403238);
}

double NNfunction_sb_cLuR::synapse0x24645b0() {
   return (neuron0x24567e0()*-0.349131);
}

double NNfunction_sb_cLuR::synapse0x24645f0() {
   return (neuron0x2456b20()*0.181404);
}

double NNfunction_sb_cLuR::synapse0x2464630() {
   return (neuron0x2456e60()*-0.646446);
}

double NNfunction_sb_cLuR::synapse0x2464670() {
   return (neuron0x24571a0()*-0.707717);
}

double NNfunction_sb_cLuR::synapse0x24646b0() {
   return (neuron0x24574e0()*0.907121);
}

double NNfunction_sb_cLuR::synapse0x24646f0() {
   return (neuron0x2457820()*0.654354);
}

double NNfunction_sb_cLuR::synapse0x2464730() {
   return (neuron0x2457b60()*0.581423);
}

double NNfunction_sb_cLuR::synapse0x2464770() {
   return (neuron0x2457ea0()*-0.565137);
}

double NNfunction_sb_cLuR::synapse0x2464200() {
   return (neuron0x24581e0()*-0.119402);
}

double NNfunction_sb_cLuR::synapse0x2464240() {
   return (neuron0x2458740()*-0.281642);
}

double NNfunction_sb_cLuR::synapse0x24648c0() {
   return (neuron0x2458a80()*0.348222);
}

double NNfunction_sb_cLuR::synapse0x2464900() {
   return (neuron0x2458dc0()*-0.0782325);
}

double NNfunction_sb_cLuR::synapse0x2464940() {
   return (neuron0x2459100()*-0.211695);
}

double NNfunction_sb_cLuR::synapse0x2464980() {
   return (neuron0x2459440()*-0.139032);
}

double NNfunction_sb_cLuR::synapse0x24649c0() {
   return (neuron0x2459780()*0.208163);
}

double NNfunction_sb_cLuR::synapse0x2464a00() {
   return (neuron0x2459ac0()*-0.0452757);
}

double NNfunction_sb_cLuR::synapse0x2464d80() {
   return (neuron0x2454e70()*-0.141447);
}

double NNfunction_sb_cLuR::synapse0x2455000() {
   return (neuron0x2455120()*-0.35058);
}

double NNfunction_sb_cLuR::synapse0x2455040() {
   return (neuron0x2455460()*-0.279157);
}

double NNfunction_sb_cLuR::synapse0x2455340() {
   return (neuron0x24557a0()*-0.382491);
}

double NNfunction_sb_cLuR::synapse0x2455380() {
   return (neuron0x2455ae0()*0.226026);
}

double NNfunction_sb_cLuR::synapse0x2455680() {
   return (neuron0x2455e20()*-0.094212);
}

double NNfunction_sb_cLuR::synapse0x24556c0() {
   return (neuron0x2456160()*0.145439);
}

double NNfunction_sb_cLuR::synapse0x24559c0() {
   return (neuron0x24564a0()*0.313671);
}

double NNfunction_sb_cLuR::synapse0x2455a00() {
   return (neuron0x24567e0()*-0.245034);
}

double NNfunction_sb_cLuR::synapse0x2455d00() {
   return (neuron0x2456b20()*-0.111241);
}

double NNfunction_sb_cLuR::synapse0x2455d40() {
   return (neuron0x2456e60()*0.267031);
}

double NNfunction_sb_cLuR::synapse0x2456040() {
   return (neuron0x24571a0()*0.345733);
}

double NNfunction_sb_cLuR::synapse0x2456080() {
   return (neuron0x24574e0()*0.405713);
}

double NNfunction_sb_cLuR::synapse0x2456380() {
   return (neuron0x2457820()*0.0443964);
}

double NNfunction_sb_cLuR::synapse0x24563c0() {
   return (neuron0x2457b60()*0.0329787);
}

double NNfunction_sb_cLuR::synapse0x24566c0() {
   return (neuron0x2457ea0()*0.223431);
}

double NNfunction_sb_cLuR::synapse0x2456700() {
   return (neuron0x24581e0()*0.172321);
}

double NNfunction_sb_cLuR::synapse0x2456a00() {
   return (neuron0x2458740()*-0.185732);
}

double NNfunction_sb_cLuR::synapse0x2456a40() {
   return (neuron0x2458a80()*0.0585561);
}

double NNfunction_sb_cLuR::synapse0x2456d40() {
   return (neuron0x2458dc0()*-0.0406833);
}

double NNfunction_sb_cLuR::synapse0x2456d80() {
   return (neuron0x2459100()*0.426297);
}

double NNfunction_sb_cLuR::synapse0x2457080() {
   return (neuron0x2459440()*-0.0660243);
}

double NNfunction_sb_cLuR::synapse0x24570c0() {
   return (neuron0x2459780()*0.34824);
}

double NNfunction_sb_cLuR::synapse0x24573c0() {
   return (neuron0x2459ac0()*0.216374);
}

double NNfunction_sb_cLuR::synapse0x2457400() {
   return (neuron0x2454e70()*-0.021826);
}

double NNfunction_sb_cLuR::synapse0x24580c0() {
   return (neuron0x2455120()*0.00152156);
}

double NNfunction_sb_cLuR::synapse0x2458100() {
   return (neuron0x2455460()*0.0159288);
}

double NNfunction_sb_cLuR::synapse0x2464bd0() {
   return (neuron0x24557a0()*3.78871);
}

double NNfunction_sb_cLuR::synapse0x2464c10() {
   return (neuron0x2455ae0()*0.0124083);
}

double NNfunction_sb_cLuR::synapse0x2458400() {
   return (neuron0x2455e20()*0.0141886);
}

double NNfunction_sb_cLuR::synapse0x2458440() {
   return (neuron0x2456160()*-0.00912308);
}

double NNfunction_sb_cLuR::synapse0x2458960() {
   return (neuron0x24564a0()*0.0255314);
}

double NNfunction_sb_cLuR::synapse0x24589a0() {
   return (neuron0x24567e0()*0.0205719);
}

double NNfunction_sb_cLuR::synapse0x2458ca0() {
   return (neuron0x2456b20()*0.013622);
}

double NNfunction_sb_cLuR::synapse0x2458ce0() {
   return (neuron0x2456e60()*-0.0259885);
}

double NNfunction_sb_cLuR::synapse0x2458fe0() {
   return (neuron0x24571a0()*0.00861305);
}

double NNfunction_sb_cLuR::synapse0x2459020() {
   return (neuron0x24574e0()*-0.700198);
}

double NNfunction_sb_cLuR::synapse0x2459320() {
   return (neuron0x2457820()*-0.0459747);
}

double NNfunction_sb_cLuR::synapse0x2459360() {
   return (neuron0x2457b60()*-0.0375727);
}

double NNfunction_sb_cLuR::synapse0x2459660() {
   return (neuron0x2457ea0()*-0.0114674);
}

double NNfunction_sb_cLuR::synapse0x24596a0() {
   return (neuron0x24581e0()*-0.0329026);
}

double NNfunction_sb_cLuR::synapse0x24599a0() {
   return (neuron0x2458740()*-0.0138534);
}

double NNfunction_sb_cLuR::synapse0x24599e0() {
   return (neuron0x2458a80()*-8.92181e-05);
}

double NNfunction_sb_cLuR::synapse0x2459ce0() {
   return (neuron0x2458dc0()*-0.0234835);
}

double NNfunction_sb_cLuR::synapse0x2459d20() {
   return (neuron0x2459100()*0.00129871);
}

double NNfunction_sb_cLuR::synapse0x2457700() {
   return (neuron0x2459440()*0.0390012);
}

double NNfunction_sb_cLuR::synapse0x2457740() {
   return (neuron0x2459780()*-0.00811486);
}

double NNfunction_sb_cLuR::synapse0x2466af0() {
   return (neuron0x2459ac0()*-0.0144818);
}

double NNfunction_sb_cLuR::synapse0x2466e70() {
   return (neuron0x2454e70()*-1.31623e-05);
}

double NNfunction_sb_cLuR::synapse0x2466eb0() {
   return (neuron0x2455120()*0.0253775);
}

double NNfunction_sb_cLuR::synapse0x2466ef0() {
   return (neuron0x2455460()*0.0128526);
}

double NNfunction_sb_cLuR::synapse0x2466f30() {
   return (neuron0x24557a0()*-6.69072);
}

double NNfunction_sb_cLuR::synapse0x2466f70() {
   return (neuron0x2455ae0()*0.00874213);
}

double NNfunction_sb_cLuR::synapse0x2466fb0() {
   return (neuron0x2455e20()*-0.0189596);
}

double NNfunction_sb_cLuR::synapse0x2466ff0() {
   return (neuron0x2456160()*-0.0254565);
}

double NNfunction_sb_cLuR::synapse0x2467030() {
   return (neuron0x24564a0()*0.00325781);
}

double NNfunction_sb_cLuR::synapse0x2467070() {
   return (neuron0x24567e0()*0.0234891);
}

double NNfunction_sb_cLuR::synapse0x24670b0() {
   return (neuron0x2456b20()*0.0155116);
}

double NNfunction_sb_cLuR::synapse0x24670f0() {
   return (neuron0x2456e60()*-0.013362);
}

double NNfunction_sb_cLuR::synapse0x2467130() {
   return (neuron0x24571a0()*0.00530409);
}

double NNfunction_sb_cLuR::synapse0x2467170() {
   return (neuron0x24574e0()*0.147568);
}

double NNfunction_sb_cLuR::synapse0x24671b0() {
   return (neuron0x2457820()*0.0378474);
}

double NNfunction_sb_cLuR::synapse0x24671f0() {
   return (neuron0x2457b60()*-0.27806);
}

double NNfunction_sb_cLuR::synapse0x2467230() {
   return (neuron0x2457ea0()*0.0232841);
}

double NNfunction_sb_cLuR::synapse0x2466cc0() {
   return (neuron0x24581e0()*0.0380762);
}

double NNfunction_sb_cLuR::synapse0x2466d00() {
   return (neuron0x2458740()*0.0216675);
}

double NNfunction_sb_cLuR::synapse0x2467380() {
   return (neuron0x2458a80()*0.010895);
}

double NNfunction_sb_cLuR::synapse0x24673c0() {
   return (neuron0x2458dc0()*0.0149025);
}

double NNfunction_sb_cLuR::synapse0x2467400() {
   return (neuron0x2459100()*-0.0533512);
}

double NNfunction_sb_cLuR::synapse0x2467440() {
   return (neuron0x2459440()*0.0134773);
}

double NNfunction_sb_cLuR::synapse0x2467480() {
   return (neuron0x2459780()*-0.0133533);
}

double NNfunction_sb_cLuR::synapse0x24674c0() {
   return (neuron0x2459ac0()*0.00357096);
}

double NNfunction_sb_cLuR::synapse0x2467840() {
   return (neuron0x2454e70()*0.0234118);
}

double NNfunction_sb_cLuR::synapse0x2467880() {
   return (neuron0x2455120()*0.033512);
}

double NNfunction_sb_cLuR::synapse0x24678c0() {
   return (neuron0x2455460()*-0.0496281);
}

double NNfunction_sb_cLuR::synapse0x2467900() {
   return (neuron0x24557a0()*0.0165943);
}

double NNfunction_sb_cLuR::synapse0x2467940() {
   return (neuron0x2455ae0()*0.085808);
}

double NNfunction_sb_cLuR::synapse0x2467980() {
   return (neuron0x2455e20()*0.0273786);
}

double NNfunction_sb_cLuR::synapse0x24679c0() {
   return (neuron0x2456160()*0.132149);
}

double NNfunction_sb_cLuR::synapse0x2467a00() {
   return (neuron0x24564a0()*0.0319732);
}

double NNfunction_sb_cLuR::synapse0x2467a40() {
   return (neuron0x24567e0()*-0.0417086);
}

double NNfunction_sb_cLuR::synapse0x2467a80() {
   return (neuron0x2456b20()*0.062295);
}

double NNfunction_sb_cLuR::synapse0x2467ac0() {
   return (neuron0x2456e60()*-0.106929);
}

double NNfunction_sb_cLuR::synapse0x2467b00() {
   return (neuron0x24571a0()*-0.0598874);
}

double NNfunction_sb_cLuR::synapse0x2467b40() {
   return (neuron0x24574e0()*-1.21305);
}

double NNfunction_sb_cLuR::synapse0x2467b80() {
   return (neuron0x2457820()*0.0805668);
}

double NNfunction_sb_cLuR::synapse0x2467bc0() {
   return (neuron0x2457b60()*-1.16613);
}

double NNfunction_sb_cLuR::synapse0x2467c00() {
   return (neuron0x2457ea0()*0.0155027);
}

double NNfunction_sb_cLuR::synapse0x2467690() {
   return (neuron0x24581e0()*-0.0120826);
}

double NNfunction_sb_cLuR::synapse0x24676d0() {
   return (neuron0x2458740()*-0.174215);
}

double NNfunction_sb_cLuR::synapse0x2467d50() {
   return (neuron0x2458a80()*-0.0480575);
}

double NNfunction_sb_cLuR::synapse0x2467d90() {
   return (neuron0x2458dc0()*-0.0773595);
}

double NNfunction_sb_cLuR::synapse0x2467dd0() {
   return (neuron0x2459100()*0.00786234);
}

double NNfunction_sb_cLuR::synapse0x2467e10() {
   return (neuron0x2459440()*-0.0665854);
}

double NNfunction_sb_cLuR::synapse0x2467e50() {
   return (neuron0x2459780()*-0.037835);
}

double NNfunction_sb_cLuR::synapse0x2467e90() {
   return (neuron0x2459ac0()*-0.0546212);
}

double NNfunction_sb_cLuR::synapse0x2468210() {
   return (neuron0x2454e70()*0.0366406);
}

double NNfunction_sb_cLuR::synapse0x2468250() {
   return (neuron0x2455120()*-0.315562);
}

double NNfunction_sb_cLuR::synapse0x2468290() {
   return (neuron0x2455460()*-0.395536);
}

double NNfunction_sb_cLuR::synapse0x24682d0() {
   return (neuron0x24557a0()*0.79506);
}

double NNfunction_sb_cLuR::synapse0x2468310() {
   return (neuron0x2455ae0()*0.627627);
}

double NNfunction_sb_cLuR::synapse0x2468350() {
   return (neuron0x2455e20()*-0.0995884);
}

double NNfunction_sb_cLuR::synapse0x2468390() {
   return (neuron0x2456160()*-0.0932045);
}

double NNfunction_sb_cLuR::synapse0x24683d0() {
   return (neuron0x24564a0()*0.448673);
}

double NNfunction_sb_cLuR::synapse0x2468410() {
   return (neuron0x24567e0()*-0.0731278);
}

double NNfunction_sb_cLuR::synapse0x2468450() {
   return (neuron0x2456b20()*0.175632);
}

double NNfunction_sb_cLuR::synapse0x2468490() {
   return (neuron0x2456e60()*-0.20408);
}

double NNfunction_sb_cLuR::synapse0x24684d0() {
   return (neuron0x24571a0()*-0.460471);
}

double NNfunction_sb_cLuR::synapse0x2468510() {
   return (neuron0x24574e0()*0.0466884);
}

double NNfunction_sb_cLuR::synapse0x2468550() {
   return (neuron0x2457820()*-0.0609901);
}

double NNfunction_sb_cLuR::synapse0x2468590() {
   return (neuron0x2457b60()*0.0798407);
}

double NNfunction_sb_cLuR::synapse0x24685d0() {
   return (neuron0x2457ea0()*0.253666);
}

double NNfunction_sb_cLuR::synapse0x2468060() {
   return (neuron0x24581e0()*0.372649);
}

double NNfunction_sb_cLuR::synapse0x24680a0() {
   return (neuron0x2458740()*0.224191);
}

double NNfunction_sb_cLuR::synapse0x2468720() {
   return (neuron0x2458a80()*0.0306229);
}

double NNfunction_sb_cLuR::synapse0x2468760() {
   return (neuron0x2458dc0()*0.0800511);
}

double NNfunction_sb_cLuR::synapse0x24687a0() {
   return (neuron0x2459100()*0.773004);
}

double NNfunction_sb_cLuR::synapse0x24687e0() {
   return (neuron0x2459440()*-0.0824836);
}

double NNfunction_sb_cLuR::synapse0x2468820() {
   return (neuron0x2459780()*-0.0771096);
}

double NNfunction_sb_cLuR::synapse0x2468860() {
   return (neuron0x2459ac0()*-0.0387835);
}

double NNfunction_sb_cLuR::synapse0x2468be0() {
   return (neuron0x2454e70()*-0.0524989);
}

double NNfunction_sb_cLuR::synapse0x2468c20() {
   return (neuron0x2455120()*0.0922036);
}

double NNfunction_sb_cLuR::synapse0x2468c60() {
   return (neuron0x2455460()*0.255411);
}

double NNfunction_sb_cLuR::synapse0x2468ca0() {
   return (neuron0x24557a0()*0.284834);
}

double NNfunction_sb_cLuR::synapse0x2468ce0() {
   return (neuron0x2455ae0()*0.110811);
}

double NNfunction_sb_cLuR::synapse0x2468d20() {
   return (neuron0x2455e20()*-0.21515);
}

double NNfunction_sb_cLuR::synapse0x2468d60() {
   return (neuron0x2456160()*0.098362);
}

double NNfunction_sb_cLuR::synapse0x2468da0() {
   return (neuron0x24564a0()*-0.163289);
}

double NNfunction_sb_cLuR::synapse0x2468de0() {
   return (neuron0x24567e0()*0.105655);
}

double NNfunction_sb_cLuR::synapse0x2468e20() {
   return (neuron0x2456b20()*0.151714);
}

double NNfunction_sb_cLuR::synapse0x2468e60() {
   return (neuron0x2456e60()*0.226339);
}

double NNfunction_sb_cLuR::synapse0x2468ea0() {
   return (neuron0x24571a0()*-0.0689427);
}

double NNfunction_sb_cLuR::synapse0x2468ee0() {
   return (neuron0x24574e0()*-0.147611);
}

double NNfunction_sb_cLuR::synapse0x2468f20() {
   return (neuron0x2457820()*0.0619782);
}

double NNfunction_sb_cLuR::synapse0x2468f60() {
   return (neuron0x2457b60()*-0.962552);
}

double NNfunction_sb_cLuR::synapse0x2468fa0() {
   return (neuron0x2457ea0()*0.373014);
}

double NNfunction_sb_cLuR::synapse0x2468a30() {
   return (neuron0x24581e0()*0.340187);
}

double NNfunction_sb_cLuR::synapse0x2468a70() {
   return (neuron0x2458740()*0.0163702);
}

double NNfunction_sb_cLuR::synapse0x24690f0() {
   return (neuron0x2458a80()*-0.00592238);
}

double NNfunction_sb_cLuR::synapse0x2469130() {
   return (neuron0x2458dc0()*-0.0529519);
}

double NNfunction_sb_cLuR::synapse0x2469170() {
   return (neuron0x2459100()*-0.147939);
}

double NNfunction_sb_cLuR::synapse0x24691b0() {
   return (neuron0x2459440()*-0.0470175);
}

double NNfunction_sb_cLuR::synapse0x24691f0() {
   return (neuron0x2459780()*-0.137132);
}

double NNfunction_sb_cLuR::synapse0x2469230() {
   return (neuron0x2459ac0()*0.22732);
}

double NNfunction_sb_cLuR::synapse0x24695b0() {
   return (neuron0x2454e70()*-0.0368946);
}

double NNfunction_sb_cLuR::synapse0x24695f0() {
   return (neuron0x2455120()*0.0123097);
}

double NNfunction_sb_cLuR::synapse0x2469630() {
   return (neuron0x2455460()*0.0164203);
}

double NNfunction_sb_cLuR::synapse0x2469670() {
   return (neuron0x24557a0()*0.0108218);
}

double NNfunction_sb_cLuR::synapse0x24696b0() {
   return (neuron0x2455ae0()*-0.00620699);
}

double NNfunction_sb_cLuR::synapse0x24696f0() {
   return (neuron0x2455e20()*0.0125269);
}

double NNfunction_sb_cLuR::synapse0x2469730() {
   return (neuron0x2456160()*-0.012804);
}

double NNfunction_sb_cLuR::synapse0x2469770() {
   return (neuron0x24564a0()*-0.0122601);
}

double NNfunction_sb_cLuR::synapse0x24697b0() {
   return (neuron0x24567e0()*-0.0108505);
}

double NNfunction_sb_cLuR::synapse0x2461970() {
   return (neuron0x2456b20()*0.0205583);
}

double NNfunction_sb_cLuR::synapse0x24619b0() {
   return (neuron0x2456e60()*-0.0327674);
}

double NNfunction_sb_cLuR::synapse0x24619f0() {
   return (neuron0x24571a0()*0.433793);
}

double NNfunction_sb_cLuR::synapse0x2461a30() {
   return (neuron0x24574e0()*-0.144541);
}

double NNfunction_sb_cLuR::synapse0x2461a70() {
   return (neuron0x2457820()*-0.0511517);
}

double NNfunction_sb_cLuR::synapse0x2461ab0() {
   return (neuron0x2457b60()*-0.174501);
}

double NNfunction_sb_cLuR::synapse0x2461af0() {
   return (neuron0x2457ea0()*0.145903);
}

double NNfunction_sb_cLuR::synapse0x2469400() {
   return (neuron0x24581e0()*-0.0404185);
}

double NNfunction_sb_cLuR::synapse0x2469440() {
   return (neuron0x2458740()*0.19071);
}

double NNfunction_sb_cLuR::synapse0x2461c40() {
   return (neuron0x2458a80()*0.190496);
}

double NNfunction_sb_cLuR::synapse0x2461c80() {
   return (neuron0x2458dc0()*-0.0520649);
}

double NNfunction_sb_cLuR::synapse0x2461cc0() {
   return (neuron0x2459100()*-0.0338291);
}

double NNfunction_sb_cLuR::synapse0x2461d00() {
   return (neuron0x2459440()*0.014725);
}

double NNfunction_sb_cLuR::synapse0x2461d40() {
   return (neuron0x2459780()*0.0178843);
}

double NNfunction_sb_cLuR::synapse0x2461d80() {
   return (neuron0x2459ac0()*0.00674569);
}

double NNfunction_sb_cLuR::synapse0x2462100() {
   return (neuron0x2454e70()*-0.0627254);
}

double NNfunction_sb_cLuR::synapse0x2462140() {
   return (neuron0x2455120()*-0.0832462);
}

double NNfunction_sb_cLuR::synapse0x2462180() {
   return (neuron0x2455460()*-0.549833);
}

double NNfunction_sb_cLuR::synapse0x24621c0() {
   return (neuron0x24557a0()*-0.715653);
}

double NNfunction_sb_cLuR::synapse0x2462200() {
   return (neuron0x2455ae0()*-0.00499249);
}

double NNfunction_sb_cLuR::synapse0x2462240() {
   return (neuron0x2455e20()*0.0136538);
}

double NNfunction_sb_cLuR::synapse0x2462280() {
   return (neuron0x2456160()*0.0189756);
}

double NNfunction_sb_cLuR::synapse0x24622c0() {
   return (neuron0x24564a0()*-0.00643878);
}

double NNfunction_sb_cLuR::synapse0x2462300() {
   return (neuron0x24567e0()*-0.00214801);
}

double NNfunction_sb_cLuR::synapse0x2462340() {
   return (neuron0x2456b20()*0.0170444);
}

double NNfunction_sb_cLuR::synapse0x2462380() {
   return (neuron0x2456e60()*0.118646);
}

double NNfunction_sb_cLuR::synapse0x24623c0() {
   return (neuron0x24571a0()*0.0373782);
}

double NNfunction_sb_cLuR::synapse0x2462400() {
   return (neuron0x24574e0()*0.121871);
}

double NNfunction_sb_cLuR::synapse0x2462440() {
   return (neuron0x2457820()*-0.00897906);
}

double NNfunction_sb_cLuR::synapse0x2462480() {
   return (neuron0x2457b60()*-0.0104767);
}

double NNfunction_sb_cLuR::synapse0x24624c0() {
   return (neuron0x2457ea0()*0.0158257);
}

double NNfunction_sb_cLuR::synapse0x2461f50() {
   return (neuron0x24581e0()*0.0078988);
}

double NNfunction_sb_cLuR::synapse0x2461f90() {
   return (neuron0x2458740()*0.0379144);
}

double NNfunction_sb_cLuR::synapse0x2462610() {
   return (neuron0x2458a80()*0.0390291);
}

double NNfunction_sb_cLuR::synapse0x2462650() {
   return (neuron0x2458dc0()*0.0267364);
}

double NNfunction_sb_cLuR::synapse0x2462690() {
   return (neuron0x2459100()*0.0672245);
}

double NNfunction_sb_cLuR::synapse0x24626d0() {
   return (neuron0x2459440()*0.0255067);
}

double NNfunction_sb_cLuR::synapse0x2462710() {
   return (neuron0x2459780()*-0.0192089);
}

double NNfunction_sb_cLuR::synapse0x2462750() {
   return (neuron0x2459ac0()*0.00884227);
}

double NNfunction_sb_cLuR::synapse0x2462920() {
   return (neuron0x2454e70()*0.00296233);
}

double NNfunction_sb_cLuR::synapse0x246b9b0() {
   return (neuron0x2455120()*-0.228983);
}

double NNfunction_sb_cLuR::synapse0x246b9f0() {
   return (neuron0x2455460()*-0.0572348);
}

double NNfunction_sb_cLuR::synapse0x246ba30() {
   return (neuron0x24557a0()*0.550518);
}

double NNfunction_sb_cLuR::synapse0x246ba70() {
   return (neuron0x2455ae0()*-0.00888147);
}

double NNfunction_sb_cLuR::synapse0x246bab0() {
   return (neuron0x2455e20()*0.0121504);
}

double NNfunction_sb_cLuR::synapse0x246baf0() {
   return (neuron0x2456160()*0.0339202);
}

double NNfunction_sb_cLuR::synapse0x246bb30() {
   return (neuron0x24564a0()*-0.0126907);
}

double NNfunction_sb_cLuR::synapse0x246bb70() {
   return (neuron0x24567e0()*-0.00593537);
}

double NNfunction_sb_cLuR::synapse0x246bbb0() {
   return (neuron0x2456b20()*0.0206696);
}

double NNfunction_sb_cLuR::synapse0x246bbf0() {
   return (neuron0x2456e60()*0.00312892);
}

double NNfunction_sb_cLuR::synapse0x246bc30() {
   return (neuron0x24571a0()*0.108877);
}

double NNfunction_sb_cLuR::synapse0x246bc70() {
   return (neuron0x24574e0()*0.0985204);
}

double NNfunction_sb_cLuR::synapse0x246bcb0() {
   return (neuron0x2457820()*-0.0571827);
}

double NNfunction_sb_cLuR::synapse0x246bcf0() {
   return (neuron0x2457b60()*-0.0824821);
}

double NNfunction_sb_cLuR::synapse0x246bd30() {
   return (neuron0x2457ea0()*-0.00652306);
}

double NNfunction_sb_cLuR::synapse0x246b800() {
   return (neuron0x24581e0()*-0.0714703);
}

double NNfunction_sb_cLuR::synapse0x246b840() {
   return (neuron0x2458740()*0.0505974);
}

double NNfunction_sb_cLuR::synapse0x246be80() {
   return (neuron0x2458a80()*-0.0226574);
}

double NNfunction_sb_cLuR::synapse0x246bec0() {
   return (neuron0x2458dc0()*0.129261);
}

double NNfunction_sb_cLuR::synapse0x246bf00() {
   return (neuron0x2459100()*0.0256379);
}

double NNfunction_sb_cLuR::synapse0x246bf40() {
   return (neuron0x2459440()*0.0289064);
}

double NNfunction_sb_cLuR::synapse0x246bf80() {
   return (neuron0x2459780()*-0.0119926);
}

double NNfunction_sb_cLuR::synapse0x246bfc0() {
   return (neuron0x2459ac0()*-0.0171281);
}

double NNfunction_sb_cLuR::synapse0x246c340() {
   return (neuron0x2454e70()*-0.350438);
}

double NNfunction_sb_cLuR::synapse0x246c380() {
   return (neuron0x2455120()*0.0579088);
}

double NNfunction_sb_cLuR::synapse0x246c3c0() {
   return (neuron0x2455460()*0.164149);
}

double NNfunction_sb_cLuR::synapse0x246c400() {
   return (neuron0x24557a0()*0.472053);
}

double NNfunction_sb_cLuR::synapse0x246c440() {
   return (neuron0x2455ae0()*-0.509584);
}

double NNfunction_sb_cLuR::synapse0x246c480() {
   return (neuron0x2455e20()*0.243755);
}

double NNfunction_sb_cLuR::synapse0x246c4c0() {
   return (neuron0x2456160()*-0.0534527);
}

double NNfunction_sb_cLuR::synapse0x246c500() {
   return (neuron0x24564a0()*0.0126303);
}

double NNfunction_sb_cLuR::synapse0x246c540() {
   return (neuron0x24567e0()*0.00445072);
}

double NNfunction_sb_cLuR::synapse0x246c580() {
   return (neuron0x2456b20()*0.0656148);
}

double NNfunction_sb_cLuR::synapse0x246c5c0() {
   return (neuron0x2456e60()*0.988856);
}

double NNfunction_sb_cLuR::synapse0x246c600() {
   return (neuron0x24571a0()*0.0696771);
}

double NNfunction_sb_cLuR::synapse0x246c640() {
   return (neuron0x24574e0()*-0.0399354);
}

double NNfunction_sb_cLuR::synapse0x246c680() {
   return (neuron0x2457820()*-0.0931285);
}

double NNfunction_sb_cLuR::synapse0x246c6c0() {
   return (neuron0x2457b60()*0.616524);
}

double NNfunction_sb_cLuR::synapse0x246c700() {
   return (neuron0x2457ea0()*-0.721289);
}

double NNfunction_sb_cLuR::synapse0x246c190() {
   return (neuron0x24581e0()*0.1883);
}

double NNfunction_sb_cLuR::synapse0x246c1d0() {
   return (neuron0x2458740()*-0.783266);
}

double NNfunction_sb_cLuR::synapse0x246c850() {
   return (neuron0x2458a80()*-0.601783);
}

double NNfunction_sb_cLuR::synapse0x246c890() {
   return (neuron0x2458dc0()*-0.445456);
}

double NNfunction_sb_cLuR::synapse0x246c8d0() {
   return (neuron0x2459100()*-0.427456);
}

double NNfunction_sb_cLuR::synapse0x246c910() {
   return (neuron0x2459440()*0.444986);
}

double NNfunction_sb_cLuR::synapse0x246c950() {
   return (neuron0x2459780()*0.241317);
}

double NNfunction_sb_cLuR::synapse0x246c990() {
   return (neuron0x2459ac0()*-0.104916);
}

double NNfunction_sb_cLuR::synapse0x246cd10() {
   return (neuron0x2454e70()*0.684629);
}

double NNfunction_sb_cLuR::synapse0x246cd50() {
   return (neuron0x2455120()*0.602061);
}

double NNfunction_sb_cLuR::synapse0x246cd90() {
   return (neuron0x2455460()*-0.54194);
}

double NNfunction_sb_cLuR::synapse0x246cdd0() {
   return (neuron0x24557a0()*-0.468695);
}

double NNfunction_sb_cLuR::synapse0x246ce10() {
   return (neuron0x2455ae0()*-0.125425);
}

double NNfunction_sb_cLuR::synapse0x246ce50() {
   return (neuron0x2455e20()*-0.113613);
}

double NNfunction_sb_cLuR::synapse0x246ce90() {
   return (neuron0x2456160()*0.296522);
}

double NNfunction_sb_cLuR::synapse0x246ced0() {
   return (neuron0x24564a0()*0.367219);
}

double NNfunction_sb_cLuR::synapse0x246cf10() {
   return (neuron0x24567e0()*-0.419213);
}

double NNfunction_sb_cLuR::synapse0x246cf50() {
   return (neuron0x2456b20()*0.518763);
}

double NNfunction_sb_cLuR::synapse0x246cf90() {
   return (neuron0x2456e60()*-0.146342);
}

double NNfunction_sb_cLuR::synapse0x246cfd0() {
   return (neuron0x24571a0()*0.188502);
}

double NNfunction_sb_cLuR::synapse0x246d010() {
   return (neuron0x24574e0()*-0.425191);
}

double NNfunction_sb_cLuR::synapse0x246d050() {
   return (neuron0x2457820()*-0.357264);
}

double NNfunction_sb_cLuR::synapse0x246d090() {
   return (neuron0x2457b60()*-0.851254);
}

double NNfunction_sb_cLuR::synapse0x246d0d0() {
   return (neuron0x2457ea0()*-0.237456);
}

double NNfunction_sb_cLuR::synapse0x246cb60() {
   return (neuron0x24581e0()*0.0437796);
}

double NNfunction_sb_cLuR::synapse0x246cba0() {
   return (neuron0x2458740()*0.825887);
}

double NNfunction_sb_cLuR::synapse0x246d220() {
   return (neuron0x2458a80()*-0.25565);
}

double NNfunction_sb_cLuR::synapse0x246d260() {
   return (neuron0x2458dc0()*0.68765);
}

double NNfunction_sb_cLuR::synapse0x246d2a0() {
   return (neuron0x2459100()*-0.093744);
}

double NNfunction_sb_cLuR::synapse0x246d2e0() {
   return (neuron0x2459440()*-0.297053);
}

double NNfunction_sb_cLuR::synapse0x246d320() {
   return (neuron0x2459780()*0.0470483);
}

double NNfunction_sb_cLuR::synapse0x246d360() {
   return (neuron0x2459ac0()*0.282777);
}

double NNfunction_sb_cLuR::synapse0x246d6e0() {
   return (neuron0x2454e70()*0.133866);
}

double NNfunction_sb_cLuR::synapse0x246d720() {
   return (neuron0x2455120()*-0.357468);
}

double NNfunction_sb_cLuR::synapse0x246d760() {
   return (neuron0x2455460()*0.195439);
}

double NNfunction_sb_cLuR::synapse0x246d7a0() {
   return (neuron0x24557a0()*1.22172);
}

double NNfunction_sb_cLuR::synapse0x246d7e0() {
   return (neuron0x2455ae0()*-0.126345);
}

double NNfunction_sb_cLuR::synapse0x246d820() {
   return (neuron0x2455e20()*0.376236);
}

double NNfunction_sb_cLuR::synapse0x246d860() {
   return (neuron0x2456160()*0.474151);
}

double NNfunction_sb_cLuR::synapse0x246d8a0() {
   return (neuron0x24564a0()*0.292398);
}

double NNfunction_sb_cLuR::synapse0x246d8e0() {
   return (neuron0x24567e0()*0.0329305);
}

double NNfunction_sb_cLuR::synapse0x246d920() {
   return (neuron0x2456b20()*0.256381);
}

double NNfunction_sb_cLuR::synapse0x246d960() {
   return (neuron0x2456e60()*-0.171879);
}

double NNfunction_sb_cLuR::synapse0x246d9a0() {
   return (neuron0x24571a0()*-0.00212086);
}

double NNfunction_sb_cLuR::synapse0x246d9e0() {
   return (neuron0x24574e0()*-0.285185);
}

double NNfunction_sb_cLuR::synapse0x246da20() {
   return (neuron0x2457820()*0.727146);
}

double NNfunction_sb_cLuR::synapse0x246da60() {
   return (neuron0x2457b60()*-0.0498066);
}

double NNfunction_sb_cLuR::synapse0x246daa0() {
   return (neuron0x2457ea0()*0.0342931);
}

double NNfunction_sb_cLuR::synapse0x246d530() {
   return (neuron0x24581e0()*0.176335);
}

double NNfunction_sb_cLuR::synapse0x246d570() {
   return (neuron0x2458740()*-0.0588604);
}

double NNfunction_sb_cLuR::synapse0x246dbf0() {
   return (neuron0x2458a80()*0.0804643);
}

double NNfunction_sb_cLuR::synapse0x246dc30() {
   return (neuron0x2458dc0()*-0.110399);
}

double NNfunction_sb_cLuR::synapse0x246dc70() {
   return (neuron0x2459100()*-0.126995);
}

double NNfunction_sb_cLuR::synapse0x246dcb0() {
   return (neuron0x2459440()*0.528828);
}

double NNfunction_sb_cLuR::synapse0x246dcf0() {
   return (neuron0x2459780()*0.590691);
}

double NNfunction_sb_cLuR::synapse0x246dd30() {
   return (neuron0x2459ac0()*0.00617151);
}

double NNfunction_sb_cLuR::synapse0x246e0b0() {
   return (neuron0x2454e70()*0.3219);
}

double NNfunction_sb_cLuR::synapse0x246e0f0() {
   return (neuron0x2455120()*0.297886);
}

double NNfunction_sb_cLuR::synapse0x246e130() {
   return (neuron0x2455460()*-0.164734);
}

double NNfunction_sb_cLuR::synapse0x246e170() {
   return (neuron0x24557a0()*0.0644005);
}

double NNfunction_sb_cLuR::synapse0x246e1b0() {
   return (neuron0x2455ae0()*-0.0437858);
}

double NNfunction_sb_cLuR::synapse0x246e1f0() {
   return (neuron0x2455e20()*-0.206397);
}

double NNfunction_sb_cLuR::synapse0x246e230() {
   return (neuron0x2456160()*0.505644);
}

double NNfunction_sb_cLuR::synapse0x246e270() {
   return (neuron0x24564a0()*-0.154184);
}

double NNfunction_sb_cLuR::synapse0x246e2b0() {
   return (neuron0x24567e0()*0.548019);
}

double NNfunction_sb_cLuR::synapse0x246e2f0() {
   return (neuron0x2456b20()*0.468);
}

double NNfunction_sb_cLuR::synapse0x246e330() {
   return (neuron0x2456e60()*-0.424951);
}

double NNfunction_sb_cLuR::synapse0x246e370() {
   return (neuron0x24571a0()*0.186941);
}

double NNfunction_sb_cLuR::synapse0x246e3b0() {
   return (neuron0x24574e0()*-0.858672);
}

double NNfunction_sb_cLuR::synapse0x246e3f0() {
   return (neuron0x2457820()*0.372399);
}

double NNfunction_sb_cLuR::synapse0x246e430() {
   return (neuron0x2457b60()*-1.17922);
}

double NNfunction_sb_cLuR::synapse0x246e470() {
   return (neuron0x2457ea0()*-0.0216764);
}

double NNfunction_sb_cLuR::synapse0x246df00() {
   return (neuron0x24581e0()*0.129938);
}

double NNfunction_sb_cLuR::synapse0x246df40() {
   return (neuron0x2458740()*0.0887855);
}

double NNfunction_sb_cLuR::synapse0x246e5c0() {
   return (neuron0x2458a80()*0.186726);
}

double NNfunction_sb_cLuR::synapse0x246e600() {
   return (neuron0x2458dc0()*-0.362297);
}

double NNfunction_sb_cLuR::synapse0x246e640() {
   return (neuron0x2459100()*0.287499);
}

double NNfunction_sb_cLuR::synapse0x246e680() {
   return (neuron0x2459440()*0.401189);
}

double NNfunction_sb_cLuR::synapse0x246e6c0() {
   return (neuron0x2459780()*-0.0511338);
}

double NNfunction_sb_cLuR::synapse0x246e700() {
   return (neuron0x2459ac0()*-0.467792);
}

double NNfunction_sb_cLuR::synapse0x246ea80() {
   return (neuron0x2454e70()*-0.00901495);
}

double NNfunction_sb_cLuR::synapse0x246eac0() {
   return (neuron0x2455120()*0.00357048);
}

double NNfunction_sb_cLuR::synapse0x246eb00() {
   return (neuron0x2455460()*-0.000744286);
}

double NNfunction_sb_cLuR::synapse0x246eb40() {
   return (neuron0x24557a0()*2.12289);
}

double NNfunction_sb_cLuR::synapse0x246eb80() {
   return (neuron0x2455ae0()*0.024033);
}

double NNfunction_sb_cLuR::synapse0x246ebc0() {
   return (neuron0x2455e20()*0.00800291);
}

double NNfunction_sb_cLuR::synapse0x246ec00() {
   return (neuron0x2456160()*-0.00365304);
}

double NNfunction_sb_cLuR::synapse0x246ec40() {
   return (neuron0x24564a0()*0.00221988);
}

double NNfunction_sb_cLuR::synapse0x246ec80() {
   return (neuron0x24567e0()*0.01606);
}

double NNfunction_sb_cLuR::synapse0x246ecc0() {
   return (neuron0x2456b20()*0.0162266);
}

double NNfunction_sb_cLuR::synapse0x246ed00() {
   return (neuron0x2456e60()*-0.0232205);
}

double NNfunction_sb_cLuR::synapse0x246ed40() {
   return (neuron0x24571a0()*-0.019805);
}

double NNfunction_sb_cLuR::synapse0x246ed80() {
   return (neuron0x24574e0()*0.012414);
}

double NNfunction_sb_cLuR::synapse0x246edc0() {
   return (neuron0x2457820()*-0.00999475);
}

double NNfunction_sb_cLuR::synapse0x246ee00() {
   return (neuron0x2457b60()*0.292253);
}

double NNfunction_sb_cLuR::synapse0x246ee40() {
   return (neuron0x2457ea0()*-0.0176832);
}

double NNfunction_sb_cLuR::synapse0x246e8d0() {
   return (neuron0x24581e0()*-0.0115058);
}

double NNfunction_sb_cLuR::synapse0x246e910() {
   return (neuron0x2458740()*9.61064e-05);
}

double NNfunction_sb_cLuR::synapse0x246ef90() {
   return (neuron0x2458a80()*-0.0102448);
}

double NNfunction_sb_cLuR::synapse0x246efd0() {
   return (neuron0x2458dc0()*-0.00946907);
}

double NNfunction_sb_cLuR::synapse0x246f010() {
   return (neuron0x2459100()*-0.00142099);
}

double NNfunction_sb_cLuR::synapse0x246f050() {
   return (neuron0x2459440()*0.0171932);
}

double NNfunction_sb_cLuR::synapse0x246f090() {
   return (neuron0x2459780()*-0.0064268);
}

double NNfunction_sb_cLuR::synapse0x246f0d0() {
   return (neuron0x2459ac0()*-0.0104656);
}

double NNfunction_sb_cLuR::synapse0x246f450() {
   return (neuron0x2454e70()*0.00753112);
}

double NNfunction_sb_cLuR::synapse0x246f490() {
   return (neuron0x2455120()*-0.0136093);
}

double NNfunction_sb_cLuR::synapse0x246f4d0() {
   return (neuron0x2455460()*-0.0182273);
}

double NNfunction_sb_cLuR::synapse0x246f510() {
   return (neuron0x24557a0()*10.8606);
}

double NNfunction_sb_cLuR::synapse0x246f550() {
   return (neuron0x2455ae0()*-0.0139376);
}

double NNfunction_sb_cLuR::synapse0x246f590() {
   return (neuron0x2455e20()*0.018156);
}

double NNfunction_sb_cLuR::synapse0x246f5d0() {
   return (neuron0x2456160()*0.0296491);
}

double NNfunction_sb_cLuR::synapse0x246f610() {
   return (neuron0x24564a0()*0.0225397);
}

double NNfunction_sb_cLuR::synapse0x246f650() {
   return (neuron0x24567e0()*-0.0272817);
}

double NNfunction_sb_cLuR::synapse0x246f690() {
   return (neuron0x2456b20()*-0.010297);
}

double NNfunction_sb_cLuR::synapse0x246f6d0() {
   return (neuron0x2456e60()*0.00104311);
}

double NNfunction_sb_cLuR::synapse0x246f710() {
   return (neuron0x24571a0()*0.0204204);
}

double NNfunction_sb_cLuR::synapse0x246f750() {
   return (neuron0x24574e0()*0.00770402);
}

double NNfunction_sb_cLuR::synapse0x246f790() {
   return (neuron0x2457820()*-0.0240986);
}

double NNfunction_sb_cLuR::synapse0x246f7d0() {
   return (neuron0x2457b60()*0.247742);
}

double NNfunction_sb_cLuR::synapse0x246f810() {
   return (neuron0x2457ea0()*-0.0144227);
}

double NNfunction_sb_cLuR::synapse0x246f2a0() {
   return (neuron0x24581e0()*-0.0213231);
}

double NNfunction_sb_cLuR::synapse0x246f2e0() {
   return (neuron0x2458740()*-0.0266715);
}

double NNfunction_sb_cLuR::synapse0x246f960() {
   return (neuron0x2458a80()*0.0254361);
}

double NNfunction_sb_cLuR::synapse0x246f9a0() {
   return (neuron0x2458dc0()*-0.0387675);
}

double NNfunction_sb_cLuR::synapse0x246f9e0() {
   return (neuron0x2459100()*0.0267117);
}

double NNfunction_sb_cLuR::synapse0x246fa20() {
   return (neuron0x2459440()*-0.00319618);
}

double NNfunction_sb_cLuR::synapse0x246fa60() {
   return (neuron0x2459780()*0.00902492);
}

double NNfunction_sb_cLuR::synapse0x246faa0() {
   return (neuron0x2459ac0()*0.0131756);
}

double NNfunction_sb_cLuR::synapse0x246fe20() {
   return (neuron0x2454e70()*0.197891);
}

double NNfunction_sb_cLuR::synapse0x246fe60() {
   return (neuron0x2455120()*0.113461);
}

double NNfunction_sb_cLuR::synapse0x246fea0() {
   return (neuron0x2455460()*0.0603291);
}

double NNfunction_sb_cLuR::synapse0x246fee0() {
   return (neuron0x24557a0()*1.5704);
}

double NNfunction_sb_cLuR::synapse0x246ff20() {
   return (neuron0x2455ae0()*0.247154);
}

double NNfunction_sb_cLuR::synapse0x246ff60() {
   return (neuron0x2455e20()*-0.0738176);
}

double NNfunction_sb_cLuR::synapse0x246ffa0() {
   return (neuron0x2456160()*0.152588);
}

double NNfunction_sb_cLuR::synapse0x246ffe0() {
   return (neuron0x24564a0()*0.122122);
}

double NNfunction_sb_cLuR::synapse0x2470020() {
   return (neuron0x24567e0()*-0.0492247);
}

double NNfunction_sb_cLuR::synapse0x2470060() {
   return (neuron0x2456b20()*0.0429279);
}

double NNfunction_sb_cLuR::synapse0x24700a0() {
   return (neuron0x2456e60()*0.0650863);
}

double NNfunction_sb_cLuR::synapse0x24700e0() {
   return (neuron0x24571a0()*-0.0422726);
}

double NNfunction_sb_cLuR::synapse0x2470120() {
   return (neuron0x24574e0()*-0.258207);
}

double NNfunction_sb_cLuR::synapse0x2470160() {
   return (neuron0x2457820()*0.0150996);
}

double NNfunction_sb_cLuR::synapse0x24701a0() {
   return (neuron0x2457b60()*-0.589959);
}

double NNfunction_sb_cLuR::synapse0x24701e0() {
   return (neuron0x2457ea0()*-0.132046);
}

double NNfunction_sb_cLuR::synapse0x246fc70() {
   return (neuron0x24581e0()*-0.125639);
}

double NNfunction_sb_cLuR::synapse0x246fcb0() {
   return (neuron0x2458740()*0.00263472);
}

double NNfunction_sb_cLuR::synapse0x2470330() {
   return (neuron0x2458a80()*0.0862564);
}

double NNfunction_sb_cLuR::synapse0x2470370() {
   return (neuron0x2458dc0()*-0.21613);
}

double NNfunction_sb_cLuR::synapse0x24703b0() {
   return (neuron0x2459100()*-0.0913451);
}

double NNfunction_sb_cLuR::synapse0x24703f0() {
   return (neuron0x2459440()*0.240886);
}

double NNfunction_sb_cLuR::synapse0x2470430() {
   return (neuron0x2459780()*0.124106);
}

double NNfunction_sb_cLuR::synapse0x2470470() {
   return (neuron0x2459ac0()*-0.00846464);
}

double NNfunction_sb_cLuR::synapse0x24707f0() {
   return (neuron0x2454e70()*-0.000523893);
}

double NNfunction_sb_cLuR::synapse0x2464dc0() {
   return (neuron0x2455120()*0.364002);
}

double NNfunction_sb_cLuR::synapse0x2464e00() {
   return (neuron0x2455460()*-0.213102);
}

double NNfunction_sb_cLuR::synapse0x2464e40() {
   return (neuron0x24557a0()*0.661888);
}

double NNfunction_sb_cLuR::synapse0x2465090() {
   return (neuron0x2455ae0()*0.176811);
}

double NNfunction_sb_cLuR::synapse0x24650d0() {
   return (neuron0x2455e20()*0.0585615);
}

double NNfunction_sb_cLuR::synapse0x2465110() {
   return (neuron0x2456160()*0.00781287);
}

double NNfunction_sb_cLuR::synapse0x2465360() {
   return (neuron0x24564a0()*0.0566595);
}

double NNfunction_sb_cLuR::synapse0x24653a0() {
   return (neuron0x24567e0()*0.0898229);
}

double NNfunction_sb_cLuR::synapse0x24655f0() {
   return (neuron0x2456b20()*0.138583);
}

double NNfunction_sb_cLuR::synapse0x2465630() {
   return (neuron0x2456e60()*0.169034);
}

double NNfunction_sb_cLuR::synapse0x2465670() {
   return (neuron0x24571a0()*-0.00640814);
}

double NNfunction_sb_cLuR::synapse0x24658c0() {
   return (neuron0x24574e0()*0.130733);
}

double NNfunction_sb_cLuR::synapse0x2465900() {
   return (neuron0x2457820()*0.0229596);
}

double NNfunction_sb_cLuR::synapse0x2465b50() {
   return (neuron0x2457b60()*0.616838);
}

double NNfunction_sb_cLuR::synapse0x2465b90() {
   return (neuron0x2457ea0()*-0.0841005);
}

double NNfunction_sb_cLuR::synapse0x2470640() {
   return (neuron0x24581e0()*0.040403);
}

double NNfunction_sb_cLuR::synapse0x2470680() {
   return (neuron0x2458740()*-0.00845675);
}

double NNfunction_sb_cLuR::synapse0x2465ce0() {
   return (neuron0x2458a80()*-0.108437);
}

double NNfunction_sb_cLuR::synapse0x24661f0() {
   return (neuron0x2458dc0()*-0.155304);
}

double NNfunction_sb_cLuR::synapse0x2466230() {
   return (neuron0x2459100()*0.0744283);
}

double NNfunction_sb_cLuR::synapse0x2466270() {
   return (neuron0x2459440()*0.0631405);
}

double NNfunction_sb_cLuR::synapse0x24664c0() {
   return (neuron0x2459780()*0.0811574);
}

double NNfunction_sb_cLuR::synapse0x2466500() {
   return (neuron0x2459ac0()*0.100925);
}

double NNfunction_sb_cLuR::synapse0x2465db0() {
   return (neuron0x2454e70()*0.275745);
}

double NNfunction_sb_cLuR::synapse0x2465df0() {
   return (neuron0x2455120()*0.0392934);
}

double NNfunction_sb_cLuR::synapse0x2465e30() {
   return (neuron0x2455460()*0.147541);
}

double NNfunction_sb_cLuR::synapse0x2465e70() {
   return (neuron0x24557a0()*0.12056);
}

double NNfunction_sb_cLuR::synapse0x24667f0() {
   return (neuron0x2455ae0()*-0.0576072);
}

double NNfunction_sb_cLuR::synapse0x2472b40() {
   return (neuron0x2455e20()*-0.0559648);
}

double NNfunction_sb_cLuR::synapse0x2472b80() {
   return (neuron0x2456160()*-0.46048);
}

double NNfunction_sb_cLuR::synapse0x2472bc0() {
   return (neuron0x24564a0()*-0.401253);
}

double NNfunction_sb_cLuR::synapse0x2472c00() {
   return (neuron0x24567e0()*0.230064);
}

double NNfunction_sb_cLuR::synapse0x2472c40() {
   return (neuron0x2456b20()*0.026925);
}

double NNfunction_sb_cLuR::synapse0x2472c80() {
   return (neuron0x2456e60()*0.266482);
}

double NNfunction_sb_cLuR::synapse0x2472cc0() {
   return (neuron0x24571a0()*-0.0827633);
}

double NNfunction_sb_cLuR::synapse0x2472d00() {
   return (neuron0x24574e0()*-0.132751);
}

double NNfunction_sb_cLuR::synapse0x2472d40() {
   return (neuron0x2457820()*-0.618813);
}

double NNfunction_sb_cLuR::synapse0x2472d80() {
   return (neuron0x2457b60()*-0.674194);
}

double NNfunction_sb_cLuR::synapse0x2472dc0() {
   return (neuron0x2457ea0()*0.0186049);
}

double NNfunction_sb_cLuR::synapse0x24666d0() {
   return (neuron0x24581e0()*-0.395689);
}

double NNfunction_sb_cLuR::synapse0x2466710() {
   return (neuron0x2458740()*0.532874);
}

double NNfunction_sb_cLuR::synapse0x2472f10() {
   return (neuron0x2458a80()*1.54276);
}

double NNfunction_sb_cLuR::synapse0x2472f50() {
   return (neuron0x2458dc0()*-0.108702);
}

double NNfunction_sb_cLuR::synapse0x2472f90() {
   return (neuron0x2459100()*0.318999);
}

double NNfunction_sb_cLuR::synapse0x2472fd0() {
   return (neuron0x2459440()*0.103484);
}

double NNfunction_sb_cLuR::synapse0x2473010() {
   return (neuron0x2459780()*0.145664);
}

double NNfunction_sb_cLuR::synapse0x2473050() {
   return (neuron0x2459ac0()*0.236854);
}

double NNfunction_sb_cLuR::synapse0x24733d0() {
   return (neuron0x2454e70()*0.0199542);
}

double NNfunction_sb_cLuR::synapse0x2473410() {
   return (neuron0x2455120()*0.0231456);
}

double NNfunction_sb_cLuR::synapse0x2473450() {
   return (neuron0x2455460()*0.00755035);
}

double NNfunction_sb_cLuR::synapse0x2473490() {
   return (neuron0x24557a0()*-6.76008);
}

double NNfunction_sb_cLuR::synapse0x24734d0() {
   return (neuron0x2455ae0()*0.0145695);
}

double NNfunction_sb_cLuR::synapse0x2473510() {
   return (neuron0x2455e20()*-0.0171988);
}

double NNfunction_sb_cLuR::synapse0x2473550() {
   return (neuron0x2456160()*-0.0175889);
}

double NNfunction_sb_cLuR::synapse0x2473590() {
   return (neuron0x24564a0()*-0.0187599);
}

double NNfunction_sb_cLuR::synapse0x24735d0() {
   return (neuron0x24567e0()*0.0158635);
}

double NNfunction_sb_cLuR::synapse0x2473610() {
   return (neuron0x2456b20()*0.0254251);
}

double NNfunction_sb_cLuR::synapse0x2473650() {
   return (neuron0x2456e60()*-0.00425486);
}

double NNfunction_sb_cLuR::synapse0x2473690() {
   return (neuron0x24571a0()*-0.00874755);
}

double NNfunction_sb_cLuR::synapse0x24736d0() {
   return (neuron0x24574e0()*0.32381);
}

double NNfunction_sb_cLuR::synapse0x2473710() {
   return (neuron0x2457820()*0.0504512);
}

double NNfunction_sb_cLuR::synapse0x2473750() {
   return (neuron0x2457b60()*-0.119175);
}

double NNfunction_sb_cLuR::synapse0x2473790() {
   return (neuron0x2457ea0()*0.0204358);
}

double NNfunction_sb_cLuR::synapse0x2473220() {
   return (neuron0x24581e0()*0.0393555);
}

double NNfunction_sb_cLuR::synapse0x2473260() {
   return (neuron0x2458740()*0.0290056);
}

double NNfunction_sb_cLuR::synapse0x24738e0() {
   return (neuron0x2458a80()*0.00948738);
}

double NNfunction_sb_cLuR::synapse0x2473920() {
   return (neuron0x2458dc0()*0.0279436);
}

double NNfunction_sb_cLuR::synapse0x2473960() {
   return (neuron0x2459100()*-0.0450362);
}

double NNfunction_sb_cLuR::synapse0x24739a0() {
   return (neuron0x2459440()*-0.00240678);
}

double NNfunction_sb_cLuR::synapse0x24739e0() {
   return (neuron0x2459780()*-0.0118773);
}

double NNfunction_sb_cLuR::synapse0x2473a20() {
   return (neuron0x2459ac0()*0.00454693);
}

double NNfunction_sb_cLuR::synapse0x2473da0() {
   return (neuron0x2454e70()*0.0005259);
}

double NNfunction_sb_cLuR::synapse0x2473de0() {
   return (neuron0x2455120()*0.0218802);
}

double NNfunction_sb_cLuR::synapse0x2473e20() {
   return (neuron0x2455460()*-0.88663);
}

double NNfunction_sb_cLuR::synapse0x2473e60() {
   return (neuron0x24557a0()*0.062813);
}

double NNfunction_sb_cLuR::synapse0x2473ea0() {
   return (neuron0x2455ae0()*0.0025054);
}

double NNfunction_sb_cLuR::synapse0x2473ee0() {
   return (neuron0x2455e20()*-0.0240369);
}

double NNfunction_sb_cLuR::synapse0x2473f20() {
   return (neuron0x2456160()*-0.0625035);
}

double NNfunction_sb_cLuR::synapse0x2473f60() {
   return (neuron0x24564a0()*0.00888713);
}

double NNfunction_sb_cLuR::synapse0x2473fa0() {
   return (neuron0x24567e0()*-0.0123798);
}

double NNfunction_sb_cLuR::synapse0x2473fe0() {
   return (neuron0x2456b20()*0.0883098);
}

double NNfunction_sb_cLuR::synapse0x2474020() {
   return (neuron0x2456e60()*-0.0504193);
}

double NNfunction_sb_cLuR::synapse0x2474060() {
   return (neuron0x24571a0()*0.00710513);
}

double NNfunction_sb_cLuR::synapse0x24740a0() {
   return (neuron0x24574e0()*0.674409);
}

double NNfunction_sb_cLuR::synapse0x24740e0() {
   return (neuron0x2457820()*-0.0633536);
}

double NNfunction_sb_cLuR::synapse0x2474120() {
   return (neuron0x2457b60()*-0.380727);
}

double NNfunction_sb_cLuR::synapse0x2474160() {
   return (neuron0x2457ea0()*0.0125869);
}

double NNfunction_sb_cLuR::synapse0x2473bf0() {
   return (neuron0x24581e0()*-0.0807092);
}

double NNfunction_sb_cLuR::synapse0x2473c30() {
   return (neuron0x2458740()*0.0268252);
}

double NNfunction_sb_cLuR::synapse0x24742b0() {
   return (neuron0x2458a80()*0.0654536);
}

double NNfunction_sb_cLuR::synapse0x24742f0() {
   return (neuron0x2458dc0()*-0.0116901);
}

double NNfunction_sb_cLuR::synapse0x2474330() {
   return (neuron0x2459100()*0.0103467);
}

double NNfunction_sb_cLuR::synapse0x2474370() {
   return (neuron0x2459440()*-0.0426467);
}

double NNfunction_sb_cLuR::synapse0x24743b0() {
   return (neuron0x2459780()*0.0775235);
}

double NNfunction_sb_cLuR::synapse0x24743f0() {
   return (neuron0x2459ac0()*-0.00685299);
}

double NNfunction_sb_cLuR::synapse0x2474770() {
   return (neuron0x2454e70()*0.0176787);
}

double NNfunction_sb_cLuR::synapse0x24747b0() {
   return (neuron0x2455120()*-0.0149629);
}

double NNfunction_sb_cLuR::synapse0x24747f0() {
   return (neuron0x2455460()*-0.0579519);
}

double NNfunction_sb_cLuR::synapse0x2474830() {
   return (neuron0x24557a0()*0.11807);
}

double NNfunction_sb_cLuR::synapse0x2474870() {
   return (neuron0x2455ae0()*0.000158228);
}

double NNfunction_sb_cLuR::synapse0x24748b0() {
   return (neuron0x2455e20()*-0.0111434);
}

double NNfunction_sb_cLuR::synapse0x24748f0() {
   return (neuron0x2456160()*0.0480694);
}

double NNfunction_sb_cLuR::synapse0x2474930() {
   return (neuron0x24564a0()*0.00811688);
}

double NNfunction_sb_cLuR::synapse0x2474970() {
   return (neuron0x24567e0()*-0.0155284);
}

double NNfunction_sb_cLuR::synapse0x24749b0() {
   return (neuron0x2456b20()*0.012903);
}

double NNfunction_sb_cLuR::synapse0x24749f0() {
   return (neuron0x2456e60()*-0.0115885);
}

double NNfunction_sb_cLuR::synapse0x2474a30() {
   return (neuron0x24571a0()*0.00403871);
}

double NNfunction_sb_cLuR::synapse0x2474a70() {
   return (neuron0x24574e0()*1.9825);
}

double NNfunction_sb_cLuR::synapse0x2474ab0() {
   return (neuron0x2457820()*0.00592887);
}

double NNfunction_sb_cLuR::synapse0x2474af0() {
   return (neuron0x2457b60()*-0.25855);
}

double NNfunction_sb_cLuR::synapse0x2474b30() {
   return (neuron0x2457ea0()*0.0503282);
}

double NNfunction_sb_cLuR::synapse0x24745c0() {
   return (neuron0x24581e0()*-0.049066);
}

double NNfunction_sb_cLuR::synapse0x2474600() {
   return (neuron0x2458740()*-0.0315782);
}

double NNfunction_sb_cLuR::synapse0x2474c80() {
   return (neuron0x2458a80()*0.0158288);
}

double NNfunction_sb_cLuR::synapse0x2474cc0() {
   return (neuron0x2458dc0()*0.000390723);
}

double NNfunction_sb_cLuR::synapse0x2474d00() {
   return (neuron0x2459100()*-0.0188402);
}

double NNfunction_sb_cLuR::synapse0x2474d40() {
   return (neuron0x2459440()*-0.0446454);
}

double NNfunction_sb_cLuR::synapse0x2474d80() {
   return (neuron0x2459780()*0.0115678);
}

double NNfunction_sb_cLuR::synapse0x2474dc0() {
   return (neuron0x2459ac0()*0.0182837);
}

double NNfunction_sb_cLuR::synapse0x2475140() {
   return (neuron0x2454e70()*0.266431);
}

double NNfunction_sb_cLuR::synapse0x2475180() {
   return (neuron0x2455120()*-0.236582);
}

double NNfunction_sb_cLuR::synapse0x24751c0() {
   return (neuron0x2455460()*0.942364);
}

double NNfunction_sb_cLuR::synapse0x2475200() {
   return (neuron0x24557a0()*0.0979808);
}

double NNfunction_sb_cLuR::synapse0x2475240() {
   return (neuron0x2455ae0()*0.0881937);
}

double NNfunction_sb_cLuR::synapse0x2475280() {
   return (neuron0x2455e20()*0.0121382);
}

double NNfunction_sb_cLuR::synapse0x24752c0() {
   return (neuron0x2456160()*0.0230482);
}

double NNfunction_sb_cLuR::synapse0x2475300() {
   return (neuron0x24564a0()*0.113878);
}

double NNfunction_sb_cLuR::synapse0x2475340() {
   return (neuron0x24567e0()*0.0316124);
}

double NNfunction_sb_cLuR::synapse0x2475380() {
   return (neuron0x2456b20()*0.521151);
}

double NNfunction_sb_cLuR::synapse0x24753c0() {
   return (neuron0x2456e60()*1.14742);
}

double NNfunction_sb_cLuR::synapse0x2475400() {
   return (neuron0x24571a0()*-0.289748);
}

double NNfunction_sb_cLuR::synapse0x2475440() {
   return (neuron0x24574e0()*0.743519);
}

double NNfunction_sb_cLuR::synapse0x2475480() {
   return (neuron0x2457820()*-0.48139);
}

double NNfunction_sb_cLuR::synapse0x24754c0() {
   return (neuron0x2457b60()*0.158259);
}

double NNfunction_sb_cLuR::synapse0x2475500() {
   return (neuron0x2457ea0()*-0.190773);
}

double NNfunction_sb_cLuR::synapse0x2474f90() {
   return (neuron0x24581e0()*-0.413487);
}

double NNfunction_sb_cLuR::synapse0x2474fd0() {
   return (neuron0x2458740()*0.0156);
}

double NNfunction_sb_cLuR::synapse0x2475650() {
   return (neuron0x2458a80()*0.469264);
}

double NNfunction_sb_cLuR::synapse0x2475690() {
   return (neuron0x2458dc0()*0.815627);
}

double NNfunction_sb_cLuR::synapse0x24756d0() {
   return (neuron0x2459100()*-0.0838599);
}

double NNfunction_sb_cLuR::synapse0x2475710() {
   return (neuron0x2459440()*1.03929);
}

double NNfunction_sb_cLuR::synapse0x2475750() {
   return (neuron0x2459780()*0.192838);
}

double NNfunction_sb_cLuR::synapse0x2475790() {
   return (neuron0x2459ac0()*-0.138515);
}

double NNfunction_sb_cLuR::synapse0x2475b10() {
   return (neuron0x2454e70()*-0.0233654);
}

double NNfunction_sb_cLuR::synapse0x2475b50() {
   return (neuron0x2455120()*0.0285449);
}

double NNfunction_sb_cLuR::synapse0x2475b90() {
   return (neuron0x2455460()*-0.116514);
}

double NNfunction_sb_cLuR::synapse0x2475bd0() {
   return (neuron0x24557a0()*-1.50982);
}

double NNfunction_sb_cLuR::synapse0x2475c10() {
   return (neuron0x2455ae0()*0.0269512);
}

double NNfunction_sb_cLuR::synapse0x2475c50() {
   return (neuron0x2455e20()*-0.0184635);
}

double NNfunction_sb_cLuR::synapse0x2475c90() {
   return (neuron0x2456160()*-0.00256359);
}

double NNfunction_sb_cLuR::synapse0x2475cd0() {
   return (neuron0x24564a0()*-0.00323997);
}

double NNfunction_sb_cLuR::synapse0x2475d10() {
   return (neuron0x24567e0()*-0.00278395);
}

double NNfunction_sb_cLuR::synapse0x2475d50() {
   return (neuron0x2456b20()*0.0304509);
}

double NNfunction_sb_cLuR::synapse0x2475d90() {
   return (neuron0x2456e60()*-0.00740505);
}

double NNfunction_sb_cLuR::synapse0x2475dd0() {
   return (neuron0x24571a0()*-0.0251666);
}

double NNfunction_sb_cLuR::synapse0x2475e10() {
   return (neuron0x24574e0()*0.0643983);
}

double NNfunction_sb_cLuR::synapse0x2475e50() {
   return (neuron0x2457820()*0.0179156);
}

double NNfunction_sb_cLuR::synapse0x2475e90() {
   return (neuron0x2457b60()*0.0150883);
}

double NNfunction_sb_cLuR::synapse0x2475ed0() {
   return (neuron0x2457ea0()*-0.0100111);
}

double NNfunction_sb_cLuR::synapse0x2475960() {
   return (neuron0x24581e0()*0.0197798);
}

double NNfunction_sb_cLuR::synapse0x24759a0() {
   return (neuron0x2458740()*-0.00128341);
}

double NNfunction_sb_cLuR::synapse0x2476020() {
   return (neuron0x2458a80()*0.010642);
}

double NNfunction_sb_cLuR::synapse0x2476060() {
   return (neuron0x2458dc0()*-0.0291161);
}

double NNfunction_sb_cLuR::synapse0x24760a0() {
   return (neuron0x2459100()*-0.00341371);
}

double NNfunction_sb_cLuR::synapse0x24760e0() {
   return (neuron0x2459440()*0.0107998);
}

double NNfunction_sb_cLuR::synapse0x2476120() {
   return (neuron0x2459780()*0.00198219);
}

double NNfunction_sb_cLuR::synapse0x2476160() {
   return (neuron0x2459ac0()*0.018485);
}

double NNfunction_sb_cLuR::synapse0x24764e0() {
   return (neuron0x2454e70()*0.275204);
}

double NNfunction_sb_cLuR::synapse0x2476520() {
   return (neuron0x2455120()*-0.026915);
}

double NNfunction_sb_cLuR::synapse0x2476560() {
   return (neuron0x2455460()*0.440993);
}

double NNfunction_sb_cLuR::synapse0x24765a0() {
   return (neuron0x24557a0()*2.11553);
}

double NNfunction_sb_cLuR::synapse0x24765e0() {
   return (neuron0x2455ae0()*-0.491774);
}

double NNfunction_sb_cLuR::synapse0x2476620() {
   return (neuron0x2455e20()*0.029409);
}

double NNfunction_sb_cLuR::synapse0x2476660() {
   return (neuron0x2456160()*0.0409369);
}

double NNfunction_sb_cLuR::synapse0x24766a0() {
   return (neuron0x24564a0()*0.0288075);
}

double NNfunction_sb_cLuR::synapse0x24766e0() {
   return (neuron0x24567e0()*-0.245307);
}

double NNfunction_sb_cLuR::synapse0x2476720() {
   return (neuron0x2456b20()*0.0240863);
}

double NNfunction_sb_cLuR::synapse0x2476760() {
   return (neuron0x2456e60()*0.226272);
}

double NNfunction_sb_cLuR::synapse0x24767a0() {
   return (neuron0x24571a0()*0.173107);
}

double NNfunction_sb_cLuR::synapse0x24767e0() {
   return (neuron0x24574e0()*1.4686);
}

double NNfunction_sb_cLuR::synapse0x2476820() {
   return (neuron0x2457820()*0.304113);
}

double NNfunction_sb_cLuR::synapse0x2476860() {
   return (neuron0x2457b60()*0.819469);
}

double NNfunction_sb_cLuR::synapse0x24768a0() {
   return (neuron0x2457ea0()*-0.000514622);
}

double NNfunction_sb_cLuR::synapse0x2476330() {
   return (neuron0x24581e0()*0.140639);
}

double NNfunction_sb_cLuR::synapse0x2476370() {
   return (neuron0x2458740()*-0.659916);
}

double NNfunction_sb_cLuR::synapse0x24769f0() {
   return (neuron0x2458a80()*0.36581);
}

double NNfunction_sb_cLuR::synapse0x2476a30() {
   return (neuron0x2458dc0()*-0.162325);
}

double NNfunction_sb_cLuR::synapse0x2476a70() {
   return (neuron0x2459100()*-0.183684);
}

double NNfunction_sb_cLuR::synapse0x2476ab0() {
   return (neuron0x2459440()*0.363493);
}

double NNfunction_sb_cLuR::synapse0x2476af0() {
   return (neuron0x2459780()*0.403838);
}

double NNfunction_sb_cLuR::synapse0x2476b30() {
   return (neuron0x2459ac0()*0.147355);
}

double NNfunction_sb_cLuR::synapse0x2476eb0() {
   return (neuron0x2454e70()*-0.0105331);
}

double NNfunction_sb_cLuR::synapse0x2476ef0() {
   return (neuron0x2455120()*0.0478716);
}

double NNfunction_sb_cLuR::synapse0x2476f30() {
   return (neuron0x2455460()*0.0846466);
}

double NNfunction_sb_cLuR::synapse0x2476f70() {
   return (neuron0x24557a0()*-0.98327);
}

double NNfunction_sb_cLuR::synapse0x2476fb0() {
   return (neuron0x2455ae0()*0.0376321);
}

double NNfunction_sb_cLuR::synapse0x2476ff0() {
   return (neuron0x2455e20()*0.000338446);
}

double NNfunction_sb_cLuR::synapse0x2477030() {
   return (neuron0x2456160()*-0.075986);
}

double NNfunction_sb_cLuR::synapse0x2477070() {
   return (neuron0x24564a0()*-0.0516613);
}

double NNfunction_sb_cLuR::synapse0x24770b0() {
   return (neuron0x24567e0()*0.101186);
}

double NNfunction_sb_cLuR::synapse0x24770f0() {
   return (neuron0x2456b20()*0.130108);
}

double NNfunction_sb_cLuR::synapse0x2477130() {
   return (neuron0x2456e60()*-0.0987429);
}

double NNfunction_sb_cLuR::synapse0x2477170() {
   return (neuron0x24571a0()*0.0511266);
}

double NNfunction_sb_cLuR::synapse0x24771b0() {
   return (neuron0x24574e0()*-1.72802);
}

double NNfunction_sb_cLuR::synapse0x24771f0() {
   return (neuron0x2457820()*0.199208);
}

double NNfunction_sb_cLuR::synapse0x2477230() {
   return (neuron0x2457b60()*0.680088);
}

double NNfunction_sb_cLuR::synapse0x2477270() {
   return (neuron0x2457ea0()*0.0588895);
}

double NNfunction_sb_cLuR::synapse0x2476d00() {
   return (neuron0x24581e0()*0.00145275);
}

double NNfunction_sb_cLuR::synapse0x2476d40() {
   return (neuron0x2458740()*0.059786);
}

double NNfunction_sb_cLuR::synapse0x24773c0() {
   return (neuron0x2458a80()*-0.120252);
}

double NNfunction_sb_cLuR::synapse0x2477400() {
   return (neuron0x2458dc0()*0.0408735);
}

double NNfunction_sb_cLuR::synapse0x2477440() {
   return (neuron0x2459100()*-0.151351);
}

double NNfunction_sb_cLuR::synapse0x2477480() {
   return (neuron0x2459440()*-0.0680767);
}

double NNfunction_sb_cLuR::synapse0x24774c0() {
   return (neuron0x2459780()*0.163867);
}

double NNfunction_sb_cLuR::synapse0x2477500() {
   return (neuron0x2459ac0()*0.0930098);
}

double NNfunction_sb_cLuR::synapse0x245ffb0() {
   return (neuron0x2454e70()*-0.280304);
}

double NNfunction_sb_cLuR::synapse0x245fff0() {
   return (neuron0x2455120()*-0.102434);
}

double NNfunction_sb_cLuR::synapse0x2460030() {
   return (neuron0x2455460()*-0.0109185);
}

double NNfunction_sb_cLuR::synapse0x2460070() {
   return (neuron0x24557a0()*-0.560773);
}

double NNfunction_sb_cLuR::synapse0x24600b0() {
   return (neuron0x2455ae0()*0.640646);
}

double NNfunction_sb_cLuR::synapse0x24600f0() {
   return (neuron0x2455e20()*-0.10432);
}

double NNfunction_sb_cLuR::synapse0x2460130() {
   return (neuron0x2456160()*-0.287349);
}

double NNfunction_sb_cLuR::synapse0x2460170() {
   return (neuron0x24564a0()*-0.106229);
}

double NNfunction_sb_cLuR::synapse0x2477c90() {
   return (neuron0x24567e0()*-0.397758);
}

double NNfunction_sb_cLuR::synapse0x2477cd0() {
   return (neuron0x2456b20()*0.129251);
}

double NNfunction_sb_cLuR::synapse0x2477d10() {
   return (neuron0x2456e60()*0.944608);
}

double NNfunction_sb_cLuR::synapse0x2477d50() {
   return (neuron0x24571a0()*0.261455);
}

double NNfunction_sb_cLuR::synapse0x2477d90() {
   return (neuron0x24574e0()*-0.53143);
}

double NNfunction_sb_cLuR::synapse0x2477dd0() {
   return (neuron0x2457820()*-0.571119);
}

double NNfunction_sb_cLuR::synapse0x2477e10() {
   return (neuron0x2457b60()*-0.421454);
}

double NNfunction_sb_cLuR::synapse0x2477e50() {
   return (neuron0x2457ea0()*0.12201);
}

double NNfunction_sb_cLuR::synapse0x24776d0() {
   return (neuron0x24581e0()*0.817033);
}

double NNfunction_sb_cLuR::synapse0x2477710() {
   return (neuron0x2458740()*0.0750576);
}

double NNfunction_sb_cLuR::synapse0x2477fa0() {
   return (neuron0x2458a80()*0.511748);
}

double NNfunction_sb_cLuR::synapse0x2477fe0() {
   return (neuron0x2458dc0()*-0.417996);
}

double NNfunction_sb_cLuR::synapse0x2478020() {
   return (neuron0x2459100()*-0.22003);
}

double NNfunction_sb_cLuR::synapse0x2478060() {
   return (neuron0x2459440()*-0.119625);
}

double NNfunction_sb_cLuR::synapse0x24780a0() {
   return (neuron0x2459780()*-0.363404);
}

double NNfunction_sb_cLuR::synapse0x24780e0() {
   return (neuron0x2459ac0()*0.372562);
}

double NNfunction_sb_cLuR::synapse0x2478460() {
   return (neuron0x2454e70()*0.572688);
}

double NNfunction_sb_cLuR::synapse0x24784a0() {
   return (neuron0x2455120()*-0.0123621);
}

double NNfunction_sb_cLuR::synapse0x24784e0() {
   return (neuron0x2455460()*0.035002);
}

double NNfunction_sb_cLuR::synapse0x2478520() {
   return (neuron0x24557a0()*-0.94223);
}

double NNfunction_sb_cLuR::synapse0x2478560() {
   return (neuron0x2455ae0()*0.292942);
}

double NNfunction_sb_cLuR::synapse0x24785a0() {
   return (neuron0x2455e20()*0.0609105);
}

double NNfunction_sb_cLuR::synapse0x24785e0() {
   return (neuron0x2456160()*0.223824);
}

double NNfunction_sb_cLuR::synapse0x2478620() {
   return (neuron0x24564a0()*-0.111199);
}

double NNfunction_sb_cLuR::synapse0x2478660() {
   return (neuron0x24567e0()*0.0286115);
}

double NNfunction_sb_cLuR::synapse0x24786a0() {
   return (neuron0x2456b20()*-0.200453);
}

double NNfunction_sb_cLuR::synapse0x24786e0() {
   return (neuron0x2456e60()*0.0459214);
}

double NNfunction_sb_cLuR::synapse0x2478720() {
   return (neuron0x24571a0()*-0.415306);
}

double NNfunction_sb_cLuR::synapse0x2478760() {
   return (neuron0x24574e0()*0.532299);
}

double NNfunction_sb_cLuR::synapse0x24787a0() {
   return (neuron0x2457820()*-0.0517887);
}

double NNfunction_sb_cLuR::synapse0x24787e0() {
   return (neuron0x2457b60()*0.695663);
}

double NNfunction_sb_cLuR::synapse0x2478820() {
   return (neuron0x2457ea0()*-0.000931125);
}

double NNfunction_sb_cLuR::synapse0x24782b0() {
   return (neuron0x24581e0()*-0.209565);
}

double NNfunction_sb_cLuR::synapse0x24782f0() {
   return (neuron0x2458740()*0.0366186);
}

double NNfunction_sb_cLuR::synapse0x2478970() {
   return (neuron0x2458a80()*-0.0971767);
}

double NNfunction_sb_cLuR::synapse0x24789b0() {
   return (neuron0x2458dc0()*0.177933);
}

double NNfunction_sb_cLuR::synapse0x24789f0() {
   return (neuron0x2459100()*0.145671);
}

double NNfunction_sb_cLuR::synapse0x2478a30() {
   return (neuron0x2459440()*0.00168774);
}

double NNfunction_sb_cLuR::synapse0x2478a70() {
   return (neuron0x2459780()*0.0958472);
}

double NNfunction_sb_cLuR::synapse0x2478ab0() {
   return (neuron0x2459ac0()*-0.0846788);
}

double NNfunction_sb_cLuR::synapse0x2478e30() {
   return (neuron0x2454e70()*-0.0489291);
}

double NNfunction_sb_cLuR::synapse0x2478e70() {
   return (neuron0x2455120()*0.0103932);
}

double NNfunction_sb_cLuR::synapse0x2478eb0() {
   return (neuron0x2455460()*0.74657);
}

double NNfunction_sb_cLuR::synapse0x2478ef0() {
   return (neuron0x24557a0()*-0.547952);
}

double NNfunction_sb_cLuR::synapse0x2478f30() {
   return (neuron0x2455ae0()*-0.568704);
}

double NNfunction_sb_cLuR::synapse0x2478f70() {
   return (neuron0x2455e20()*-0.269035);
}

double NNfunction_sb_cLuR::synapse0x2478fb0() {
   return (neuron0x2456160()*-0.303008);
}

double NNfunction_sb_cLuR::synapse0x2478ff0() {
   return (neuron0x24564a0()*-0.296846);
}

double NNfunction_sb_cLuR::synapse0x2479030() {
   return (neuron0x24567e0()*0.461048);
}

double NNfunction_sb_cLuR::synapse0x2479070() {
   return (neuron0x2456b20()*0.0674211);
}

double NNfunction_sb_cLuR::synapse0x24790b0() {
   return (neuron0x2456e60()*0.271347);
}

double NNfunction_sb_cLuR::synapse0x24790f0() {
   return (neuron0x24571a0()*-0.477662);
}

double NNfunction_sb_cLuR::synapse0x2479130() {
   return (neuron0x24574e0()*0.498071);
}

double NNfunction_sb_cLuR::synapse0x2479170() {
   return (neuron0x2457820()*0.295064);
}

double NNfunction_sb_cLuR::synapse0x24791b0() {
   return (neuron0x2457b60()*0.488144);
}

double NNfunction_sb_cLuR::synapse0x24791f0() {
   return (neuron0x2457ea0()*0.175955);
}

double NNfunction_sb_cLuR::synapse0x2478c80() {
   return (neuron0x24581e0()*0.365389);
}

double NNfunction_sb_cLuR::synapse0x2478cc0() {
   return (neuron0x2458740()*0.15294);
}

double NNfunction_sb_cLuR::synapse0x24697f0() {
   return (neuron0x2458a80()*-0.233024);
}

double NNfunction_sb_cLuR::synapse0x2469830() {
   return (neuron0x2458dc0()*0.262516);
}

double NNfunction_sb_cLuR::synapse0x2469870() {
   return (neuron0x2459100()*-0.064745);
}

double NNfunction_sb_cLuR::synapse0x24698b0() {
   return (neuron0x2459440()*-0.140617);
}

double NNfunction_sb_cLuR::synapse0x24698f0() {
   return (neuron0x2459780()*-0.395639);
}

double NNfunction_sb_cLuR::synapse0x2469930() {
   return (neuron0x2459ac0()*0.0364569);
}

double NNfunction_sb_cLuR::synapse0x2469cb0() {
   return (neuron0x2454e70()*-0.507796);
}

double NNfunction_sb_cLuR::synapse0x2469cf0() {
   return (neuron0x2455120()*0.537905);
}

double NNfunction_sb_cLuR::synapse0x2469d30() {
   return (neuron0x2455460()*-0.239097);
}

double NNfunction_sb_cLuR::synapse0x2469d70() {
   return (neuron0x24557a0()*-0.722704);
}

double NNfunction_sb_cLuR::synapse0x2469db0() {
   return (neuron0x2455ae0()*-0.208427);
}

double NNfunction_sb_cLuR::synapse0x2469df0() {
   return (neuron0x2455e20()*-0.0148158);
}

double NNfunction_sb_cLuR::synapse0x2469e30() {
   return (neuron0x2456160()*-0.0476741);
}

double NNfunction_sb_cLuR::synapse0x2469e70() {
   return (neuron0x24564a0()*0.1678);
}

double NNfunction_sb_cLuR::synapse0x2469eb0() {
   return (neuron0x24567e0()*-0.293462);
}

double NNfunction_sb_cLuR::synapse0x2469ef0() {
   return (neuron0x2456b20()*-0.020184);
}

double NNfunction_sb_cLuR::synapse0x2469f30() {
   return (neuron0x2456e60()*-0.053849);
}

double NNfunction_sb_cLuR::synapse0x2469f70() {
   return (neuron0x24571a0()*-0.403411);
}

double NNfunction_sb_cLuR::synapse0x2469fb0() {
   return (neuron0x24574e0()*0.0319556);
}

double NNfunction_sb_cLuR::synapse0x2469ff0() {
   return (neuron0x2457820()*0.434552);
}

double NNfunction_sb_cLuR::synapse0x246a030() {
   return (neuron0x2457b60()*-0.620817);
}

double NNfunction_sb_cLuR::synapse0x246a070() {
   return (neuron0x2457ea0()*0.24335);
}

double NNfunction_sb_cLuR::synapse0x2469b00() {
   return (neuron0x24581e0()*-0.095406);
}

double NNfunction_sb_cLuR::synapse0x2469b40() {
   return (neuron0x2458740()*-0.413648);
}

double NNfunction_sb_cLuR::synapse0x246a1c0() {
   return (neuron0x2458a80()*0.438468);
}

double NNfunction_sb_cLuR::synapse0x246a200() {
   return (neuron0x2458dc0()*0.355841);
}

double NNfunction_sb_cLuR::synapse0x246a240() {
   return (neuron0x2459100()*-0.170289);
}

double NNfunction_sb_cLuR::synapse0x246a280() {
   return (neuron0x2459440()*0.234376);
}

double NNfunction_sb_cLuR::synapse0x246a2c0() {
   return (neuron0x2459780()*-0.0263019);
}

double NNfunction_sb_cLuR::synapse0x246a300() {
   return (neuron0x2459ac0()*0.10031);
}

double NNfunction_sb_cLuR::synapse0x246a680() {
   return (neuron0x2454e70()*0.647637);
}

double NNfunction_sb_cLuR::synapse0x246a6c0() {
   return (neuron0x2455120()*0.156444);
}

double NNfunction_sb_cLuR::synapse0x246a700() {
   return (neuron0x2455460()*0.267852);
}

double NNfunction_sb_cLuR::synapse0x246a740() {
   return (neuron0x24557a0()*0.176727);
}

double NNfunction_sb_cLuR::synapse0x246a780() {
   return (neuron0x2455ae0()*-0.819862);
}

double NNfunction_sb_cLuR::synapse0x246a7c0() {
   return (neuron0x2455e20()*-0.569069);
}

double NNfunction_sb_cLuR::synapse0x246a800() {
   return (neuron0x2456160()*0.497151);
}

double NNfunction_sb_cLuR::synapse0x246a840() {
   return (neuron0x24564a0()*0.106598);
}

double NNfunction_sb_cLuR::synapse0x246a880() {
   return (neuron0x24567e0()*0.0336634);
}

double NNfunction_sb_cLuR::synapse0x246a8c0() {
   return (neuron0x2456b20()*0.0629526);
}

double NNfunction_sb_cLuR::synapse0x246a900() {
   return (neuron0x2456e60()*-0.36303);
}

double NNfunction_sb_cLuR::synapse0x246a940() {
   return (neuron0x24571a0()*-0.25182);
}

double NNfunction_sb_cLuR::synapse0x246a980() {
   return (neuron0x24574e0()*0.353684);
}

double NNfunction_sb_cLuR::synapse0x246a9c0() {
   return (neuron0x2457820()*0.191985);
}

double NNfunction_sb_cLuR::synapse0x246aa00() {
   return (neuron0x2457b60()*0.904457);
}

double NNfunction_sb_cLuR::synapse0x246aa40() {
   return (neuron0x2457ea0()*0.241296);
}

double NNfunction_sb_cLuR::synapse0x246a4d0() {
   return (neuron0x24581e0()*-0.141867);
}

double NNfunction_sb_cLuR::synapse0x246a510() {
   return (neuron0x2458740()*-0.221722);
}

double NNfunction_sb_cLuR::synapse0x246ab90() {
   return (neuron0x2458a80()*-0.497054);
}

double NNfunction_sb_cLuR::synapse0x246abd0() {
   return (neuron0x2458dc0()*0.0923463);
}

double NNfunction_sb_cLuR::synapse0x246ac10() {
   return (neuron0x2459100()*-0.0750027);
}

double NNfunction_sb_cLuR::synapse0x246ac50() {
   return (neuron0x2459440()*-0.105872);
}

double NNfunction_sb_cLuR::synapse0x246ac90() {
   return (neuron0x2459780()*-0.0336221);
}

double NNfunction_sb_cLuR::synapse0x246acd0() {
   return (neuron0x2459ac0()*-0.166071);
}

double NNfunction_sb_cLuR::synapse0x246b050() {
   return (neuron0x2454e70()*0.121557);
}

double NNfunction_sb_cLuR::synapse0x246b090() {
   return (neuron0x2455120()*0.679399);
}

double NNfunction_sb_cLuR::synapse0x246b0d0() {
   return (neuron0x2455460()*0.00342503);
}

double NNfunction_sb_cLuR::synapse0x246b110() {
   return (neuron0x24557a0()*-0.797055);
}

double NNfunction_sb_cLuR::synapse0x246b150() {
   return (neuron0x2455ae0()*-0.294572);
}

double NNfunction_sb_cLuR::synapse0x246b190() {
   return (neuron0x2455e20()*0.463726);
}

double NNfunction_sb_cLuR::synapse0x246b1d0() {
   return (neuron0x2456160()*0.0979925);
}

double NNfunction_sb_cLuR::synapse0x246b210() {
   return (neuron0x24564a0()*-0.0880805);
}

double NNfunction_sb_cLuR::synapse0x246b250() {
   return (neuron0x24567e0()*0.208435);
}

double NNfunction_sb_cLuR::synapse0x246b290() {
   return (neuron0x2456b20()*0.210711);
}

double NNfunction_sb_cLuR::synapse0x246b2d0() {
   return (neuron0x2456e60()*-0.218798);
}

double NNfunction_sb_cLuR::synapse0x246b310() {
   return (neuron0x24571a0()*-0.0382973);
}

double NNfunction_sb_cLuR::synapse0x246b350() {
   return (neuron0x24574e0()*0.802928);
}

double NNfunction_sb_cLuR::synapse0x246b390() {
   return (neuron0x2457820()*0.541268);
}

double NNfunction_sb_cLuR::synapse0x246b3d0() {
   return (neuron0x2457b60()*-0.927417);
}

double NNfunction_sb_cLuR::synapse0x246b410() {
   return (neuron0x2457ea0()*0.259551);
}

double NNfunction_sb_cLuR::synapse0x246aea0() {
   return (neuron0x24581e0()*-0.0278021);
}

double NNfunction_sb_cLuR::synapse0x246aee0() {
   return (neuron0x2458740()*-0.162391);
}

double NNfunction_sb_cLuR::synapse0x246b560() {
   return (neuron0x2458a80()*-0.0915186);
}

double NNfunction_sb_cLuR::synapse0x246b5a0() {
   return (neuron0x2458dc0()*-0.137421);
}

double NNfunction_sb_cLuR::synapse0x246b5e0() {
   return (neuron0x2459100()*0.588707);
}

double NNfunction_sb_cLuR::synapse0x246b620() {
   return (neuron0x2459440()*-0.861945);
}

double NNfunction_sb_cLuR::synapse0x246b660() {
   return (neuron0x2459780()*-0.316846);
}

double NNfunction_sb_cLuR::synapse0x246b6a0() {
   return (neuron0x2459ac0()*0.270184);
}

double NNfunction_sb_cLuR::synapse0x247d570() {
   return (neuron0x2454e70()*0.00243724);
}

double NNfunction_sb_cLuR::synapse0x247d5b0() {
   return (neuron0x2455120()*0.0146819);
}

double NNfunction_sb_cLuR::synapse0x247d5f0() {
   return (neuron0x2455460()*-0.0101236);
}

double NNfunction_sb_cLuR::synapse0x247d630() {
   return (neuron0x24557a0()*-0.0192509);
}

double NNfunction_sb_cLuR::synapse0x247d670() {
   return (neuron0x2455ae0()*0.00291896);
}

double NNfunction_sb_cLuR::synapse0x247d6b0() {
   return (neuron0x2455e20()*-0.0124749);
}

double NNfunction_sb_cLuR::synapse0x247d6f0() {
   return (neuron0x2456160()*-0.000143518);
}

double NNfunction_sb_cLuR::synapse0x247d730() {
   return (neuron0x24564a0()*-0.00436443);
}

double NNfunction_sb_cLuR::synapse0x247d770() {
   return (neuron0x24567e0()*0.00396634);
}

double NNfunction_sb_cLuR::synapse0x247d7b0() {
   return (neuron0x2456b20()*0.00710836);
}

double NNfunction_sb_cLuR::synapse0x247d7f0() {
   return (neuron0x2456e60()*-0.0135439);
}

double NNfunction_sb_cLuR::synapse0x247d830() {
   return (neuron0x24571a0()*0.0450318);
}

double NNfunction_sb_cLuR::synapse0x247d870() {
   return (neuron0x24574e0()*-0.634362);
}

double NNfunction_sb_cLuR::synapse0x247d8b0() {
   return (neuron0x2457820()*-0.00275947);
}

double NNfunction_sb_cLuR::synapse0x247d8f0() {
   return (neuron0x2457b60()*-0.75825);
}

double NNfunction_sb_cLuR::synapse0x247d930() {
   return (neuron0x2457ea0()*0.0213033);
}

double NNfunction_sb_cLuR::synapse0x246b6e0() {
   return (neuron0x24581e0()*-0.00463479);
}

double NNfunction_sb_cLuR::synapse0x246b720() {
   return (neuron0x2458740()*0.0189546);
}

double NNfunction_sb_cLuR::synapse0x247da80() {
   return (neuron0x2458a80()*0.0261112);
}

double NNfunction_sb_cLuR::synapse0x247dac0() {
   return (neuron0x2458dc0()*-0.00766742);
}

double NNfunction_sb_cLuR::synapse0x247db00() {
   return (neuron0x2459100()*-0.0107522);
}

double NNfunction_sb_cLuR::synapse0x247db40() {
   return (neuron0x2459440()*0.00784968);
}

double NNfunction_sb_cLuR::synapse0x247db80() {
   return (neuron0x2459780()*-0.00212993);
}

double NNfunction_sb_cLuR::synapse0x247dbc0() {
   return (neuron0x2459ac0()*0.00343301);
}

double NNfunction_sb_cLuR::synapse0x247df40() {
   return (neuron0x2454e70()*0.418399);
}

double NNfunction_sb_cLuR::synapse0x247df80() {
   return (neuron0x2455120()*-0.852222);
}

double NNfunction_sb_cLuR::synapse0x247dfc0() {
   return (neuron0x2455460()*-0.0199657);
}

double NNfunction_sb_cLuR::synapse0x247e000() {
   return (neuron0x24557a0()*0.590241);
}

double NNfunction_sb_cLuR::synapse0x247e040() {
   return (neuron0x2455ae0()*0.233373);
}

double NNfunction_sb_cLuR::synapse0x247e080() {
   return (neuron0x2455e20()*-0.722576);
}

double NNfunction_sb_cLuR::synapse0x247e0c0() {
   return (neuron0x2456160()*-0.57639);
}

double NNfunction_sb_cLuR::synapse0x247e100() {
   return (neuron0x24564a0()*-0.0928674);
}

double NNfunction_sb_cLuR::synapse0x247e140() {
   return (neuron0x24567e0()*0.625568);
}

double NNfunction_sb_cLuR::synapse0x247e180() {
   return (neuron0x2456b20()*0.180061);
}

double NNfunction_sb_cLuR::synapse0x247e1c0() {
   return (neuron0x2456e60()*0.654854);
}

double NNfunction_sb_cLuR::synapse0x247e200() {
   return (neuron0x24571a0()*0.417037);
}

double NNfunction_sb_cLuR::synapse0x247e240() {
   return (neuron0x24574e0()*0.264889);
}

double NNfunction_sb_cLuR::synapse0x247e280() {
   return (neuron0x2457820()*0.265339);
}

double NNfunction_sb_cLuR::synapse0x247e2c0() {
   return (neuron0x2457b60()*0.347296);
}

double NNfunction_sb_cLuR::synapse0x247e300() {
   return (neuron0x2457ea0()*0.0144549);
}

double NNfunction_sb_cLuR::synapse0x247dd90() {
   return (neuron0x24581e0()*-0.109832);
}

double NNfunction_sb_cLuR::synapse0x247ddd0() {
   return (neuron0x2458740()*-0.00150553);
}

double NNfunction_sb_cLuR::synapse0x247e450() {
   return (neuron0x2458a80()*0.284388);
}

double NNfunction_sb_cLuR::synapse0x247e490() {
   return (neuron0x2458dc0()*0.701317);
}

double NNfunction_sb_cLuR::synapse0x247e4d0() {
   return (neuron0x2459100()*0.769893);
}

double NNfunction_sb_cLuR::synapse0x247e510() {
   return (neuron0x2459440()*-0.12193);
}

double NNfunction_sb_cLuR::synapse0x247e550() {
   return (neuron0x2459780()*0.176559);
}

double NNfunction_sb_cLuR::synapse0x247e590() {
   return (neuron0x2459ac0()*0.0185921);
}

double NNfunction_sb_cLuR::synapse0x247e910() {
   return (neuron0x2454e70()*-0.044551);
}

double NNfunction_sb_cLuR::synapse0x247e950() {
   return (neuron0x2455120()*-0.0235189);
}

double NNfunction_sb_cLuR::synapse0x247e990() {
   return (neuron0x2455460()*-0.0022799);
}

double NNfunction_sb_cLuR::synapse0x247e9d0() {
   return (neuron0x24557a0()*0.0103831);
}

double NNfunction_sb_cLuR::synapse0x247ea10() {
   return (neuron0x2455ae0()*0.0593094);
}

double NNfunction_sb_cLuR::synapse0x247ea50() {
   return (neuron0x2455e20()*0.0160733);
}

double NNfunction_sb_cLuR::synapse0x247ea90() {
   return (neuron0x2456160()*0.0226782);
}

double NNfunction_sb_cLuR::synapse0x247ead0() {
   return (neuron0x24564a0()*0.00505539);
}

double NNfunction_sb_cLuR::synapse0x247eb10() {
   return (neuron0x24567e0()*-0.00786497);
}

double NNfunction_sb_cLuR::synapse0x247eb50() {
   return (neuron0x2456b20()*0.0147816);
}

double NNfunction_sb_cLuR::synapse0x247eb90() {
   return (neuron0x2456e60()*-0.0200115);
}

double NNfunction_sb_cLuR::synapse0x247ebd0() {
   return (neuron0x24571a0()*-0.0721214);
}

double NNfunction_sb_cLuR::synapse0x247ec10() {
   return (neuron0x24574e0()*0.231462);
}

double NNfunction_sb_cLuR::synapse0x247ec50() {
   return (neuron0x2457820()*0.0480658);
}

double NNfunction_sb_cLuR::synapse0x247ec90() {
   return (neuron0x2457b60()*0.900459);
}

double NNfunction_sb_cLuR::synapse0x247ecd0() {
   return (neuron0x2457ea0()*-0.0205074);
}

double NNfunction_sb_cLuR::synapse0x247e760() {
   return (neuron0x24581e0()*0.00279226);
}

double NNfunction_sb_cLuR::synapse0x247e7a0() {
   return (neuron0x2458740()*-0.0771449);
}

double NNfunction_sb_cLuR::synapse0x247ee20() {
   return (neuron0x2458a80()*-0.0825916);
}

double NNfunction_sb_cLuR::synapse0x247ee60() {
   return (neuron0x2458dc0()*0.00815368);
}

double NNfunction_sb_cLuR::synapse0x247eea0() {
   return (neuron0x2459100()*0.0223178);
}

double NNfunction_sb_cLuR::synapse0x247eee0() {
   return (neuron0x2459440()*-0.0247164);
}

double NNfunction_sb_cLuR::synapse0x247ef20() {
   return (neuron0x2459780()*-0.0245314);
}

double NNfunction_sb_cLuR::synapse0x247ef60() {
   return (neuron0x2459ac0()*-0.0256031);
}

double NNfunction_sb_cLuR::synapse0x247f2e0() {
   return (neuron0x2454e70()*-0.193788);
}

double NNfunction_sb_cLuR::synapse0x247f320() {
   return (neuron0x2455120()*0.490939);
}

double NNfunction_sb_cLuR::synapse0x247f360() {
   return (neuron0x2455460()*-0.353848);
}

double NNfunction_sb_cLuR::synapse0x247f3a0() {
   return (neuron0x24557a0()*0.651508);
}

double NNfunction_sb_cLuR::synapse0x247f3e0() {
   return (neuron0x2455ae0()*0.230678);
}

double NNfunction_sb_cLuR::synapse0x247f420() {
   return (neuron0x2455e20()*-0.240352);
}

double NNfunction_sb_cLuR::synapse0x247f460() {
   return (neuron0x2456160()*0.526688);
}

double NNfunction_sb_cLuR::synapse0x247f4a0() {
   return (neuron0x24564a0()*0.258658);
}

double NNfunction_sb_cLuR::synapse0x247f4e0() {
   return (neuron0x24567e0()*0.0399049);
}

double NNfunction_sb_cLuR::synapse0x247f520() {
   return (neuron0x2456b20()*0.0791813);
}

double NNfunction_sb_cLuR::synapse0x247f560() {
   return (neuron0x2456e60()*-0.231255);
}

double NNfunction_sb_cLuR::synapse0x247f5a0() {
   return (neuron0x24571a0()*1.15165);
}

double NNfunction_sb_cLuR::synapse0x247f5e0() {
   return (neuron0x24574e0()*0.911597);
}

double NNfunction_sb_cLuR::synapse0x247f620() {
   return (neuron0x2457820()*0.291298);
}

double NNfunction_sb_cLuR::synapse0x247f660() {
   return (neuron0x2457b60()*0.508214);
}

double NNfunction_sb_cLuR::synapse0x247f6a0() {
   return (neuron0x2457ea0()*0.157405);
}

double NNfunction_sb_cLuR::synapse0x247f130() {
   return (neuron0x24581e0()*0.621192);
}

double NNfunction_sb_cLuR::synapse0x247f170() {
   return (neuron0x2458740()*-0.344388);
}

double NNfunction_sb_cLuR::synapse0x247f7f0() {
   return (neuron0x2458a80()*-0.267619);
}

double NNfunction_sb_cLuR::synapse0x247f830() {
   return (neuron0x2458dc0()*-0.570455);
}

double NNfunction_sb_cLuR::synapse0x247f870() {
   return (neuron0x2459100()*-0.389483);
}

double NNfunction_sb_cLuR::synapse0x247f8b0() {
   return (neuron0x2459440()*-1.12717);
}

double NNfunction_sb_cLuR::synapse0x247f8f0() {
   return (neuron0x2459780()*0.376972);
}

double NNfunction_sb_cLuR::synapse0x247f930() {
   return (neuron0x2459ac0()*-0.576873);
}

double NNfunction_sb_cLuR::synapse0x221f7a0() {
   return (neuron0x2459f30()*0.0484762);
}

double NNfunction_sb_cLuR::synapse0x221f7e0() {
   return (neuron0x245a770()*0.354419);
}

double NNfunction_sb_cLuR::synapse0x245c2e0() {
   return (neuron0x245b250()*0.0800554);
}

double NNfunction_sb_cLuR::synapse0x245c320() {
   return (neuron0x245acf0()*0.0190475);
}

double NNfunction_sb_cLuR::synapse0x245ddb0() {
   return (neuron0x245c030()*1.04269);
}

double NNfunction_sb_cLuR::synapse0x245ddf0() {
   return (neuron0x245db00()*0.0344168);
}

double NNfunction_sb_cLuR::synapse0x245eb80() {
   return (neuron0x245e8d0()*-1.24911);
}

double NNfunction_sb_cLuR::synapse0x245ebc0() {
   return (neuron0x245f2a0()*-0.00673088);
}

double NNfunction_sb_cLuR::synapse0x245f550() {
   return (neuron0x245fc70()*-0.0182747);
}

double NNfunction_sb_cLuR::synapse0x245f590() {
   return (neuron0x2460750()*-0.00108659);
}

double NNfunction_sb_cLuR::synapse0x245ff20() {
   return (neuron0x2461120()*0.0772928);
}

double NNfunction_sb_cLuR::synapse0x245ff60() {
   return (neuron0x245e200()*0.0841082);
}

double NNfunction_sb_cLuR::synapse0x2460a00() {
   return (neuron0x2462cd0()*-0.0831051);
}

double NNfunction_sb_cLuR::synapse0x2460a40() {
   return (neuron0x24636a0()*-0.0669623);
}

double NNfunction_sb_cLuR::synapse0x24613d0() {
   return (neuron0x2464070()*0.066999);
}

double NNfunction_sb_cLuR::synapse0x2461410() {
   return (neuron0x2464a40()*-0.0303758);
}

double NNfunction_sb_cLuR::synapse0x245e4b0() {
   return (neuron0x2466850()*2.29771);
}

double NNfunction_sb_cLuR::synapse0x245e4f0() {
   return (neuron0x2466b30()*-3.9663);
}

double NNfunction_sb_cLuR::synapse0x2462f80() {
   return (neuron0x2467500()*0.174603);
}

double NNfunction_sb_cLuR::synapse0x2462fc0() {
   return (neuron0x2467ed0()*0.0228071);
}

double NNfunction_sb_cLuR::synapse0x2463950() {
   return (neuron0x24688a0()*0.194044);
}

double NNfunction_sb_cLuR::synapse0x2463990() {
   return (neuron0x2469270()*-0.394442);
}

double NNfunction_sb_cLuR::synapse0x2464320() {
   return (neuron0x2461dc0()*-1.03001);
}

double NNfunction_sb_cLuR::synapse0x2464360() {
   return (neuron0x2462790()*0.84136);
}

double NNfunction_sb_cLuR::synapse0x2464cf0() {
   return (neuron0x246c000()*0.00390971);
}

double NNfunction_sb_cLuR::synapse0x2464d30() {
   return (neuron0x246c9d0()*-0.0279713);
}

double NNfunction_sb_cLuR::synapse0x2457d80() {
   return (neuron0x246d3a0()*0.00652794);
}

double NNfunction_sb_cLuR::synapse0x2457dc0() {
   return (neuron0x246dd70()*-0.00133908);
}

double NNfunction_sb_cLuR::synapse0x2466de0() {
   return (neuron0x246e740()*-1.61632);
}

double NNfunction_sb_cLuR::synapse0x2466e20() {
   return (neuron0x246f110()*-2.14192);
}

double NNfunction_sb_cLuR::synapse0x24677b0() {
   return (neuron0x246fae0()*0.0794293);
}

double NNfunction_sb_cLuR::synapse0x24677f0() {
   return (neuron0x24704b0()*0.229621);
}

double NNfunction_sb_cLuR::synapse0x2468180() {
   return (neuron0x2466540()*0.0316906);
}

double NNfunction_sb_cLuR::synapse0x24681c0() {
   return (neuron0x2473090()*3.07942);
}

double NNfunction_sb_cLuR::synapse0x2468b50() {
   return (neuron0x2473a60()*0.454991);
}

double NNfunction_sb_cLuR::synapse0x2468b90() {
   return (neuron0x2474430()*-0.66924);
}

double NNfunction_sb_cLuR::synapse0x2469520() {
   return (neuron0x2474e00()*-0.0140309);
}

double NNfunction_sb_cLuR::synapse0x2469560() {
   return (neuron0x24757d0()*-1.07977);
}

double NNfunction_sb_cLuR::synapse0x2462070() {
   return (neuron0x24761a0()*0.0114756);
}

double NNfunction_sb_cLuR::synapse0x24620b0() {
   return (neuron0x2476b70()*0.0601417);
}

double NNfunction_sb_cLuR::synapse0x246b920() {
   return (neuron0x2477540()*-0.00772269);
}

double NNfunction_sb_cLuR::synapse0x246b960() {
   return (neuron0x2478120()*-0.109001);
}

double NNfunction_sb_cLuR::synapse0x246c2b0() {
   return (neuron0x2478af0()*-0.0607845);
}

double NNfunction_sb_cLuR::synapse0x246c2f0() {
   return (neuron0x2469970()*0.0511858);
}

double NNfunction_sb_cLuR::synapse0x246cc80() {
   return (neuron0x246a340()*0.00678742);
}

double NNfunction_sb_cLuR::synapse0x246ccc0() {
   return (neuron0x246ad10()*0.0323301);
}

double NNfunction_sb_cLuR::synapse0x246d650() {
   return (neuron0x247d350()*1.32132);
}

double NNfunction_sb_cLuR::synapse0x246d690() {
   return (neuron0x247dc00()*0.056386);
}

double NNfunction_sb_cLuR::synapse0x246e020() {
   return (neuron0x247e5d0()*-0.745022);
}

double NNfunction_sb_cLuR::synapse0x246e060() {
   return (neuron0x247efa0()*0.00323418);
}

double NNfunction_sb_cLuR::synapse0x2470760() {
   return (neuron0x2459f30()*0.815843);
}

double NNfunction_sb_cLuR::synapse0x24707a0() {
   return (neuron0x245a770()*-1.06012);
}

double NNfunction_sb_cLuR::synapse0x2465d20() {
   return (neuron0x245b250()*1.39574);
}

double NNfunction_sb_cLuR::synapse0x2465d60() {
   return (neuron0x245acf0()*0.465856);
}

double NNfunction_sb_cLuR::synapse0x2473340() {
   return (neuron0x245c030()*2.94213);
}

double NNfunction_sb_cLuR::synapse0x2473380() {
   return (neuron0x245db00()*0.287681);
}

double NNfunction_sb_cLuR::synapse0x2473d10() {
   return (neuron0x245e8d0()*1.09197);
}

double NNfunction_sb_cLuR::synapse0x2473d50() {
   return (neuron0x245f2a0()*-0.852136);
}

double NNfunction_sb_cLuR::synapse0x24746e0() {
   return (neuron0x245fc70()*0.959923);
}

double NNfunction_sb_cLuR::synapse0x2474720() {
   return (neuron0x2460750()*0.351556);
}

double NNfunction_sb_cLuR::synapse0x24750b0() {
   return (neuron0x2461120()*-0.284178);
}

double NNfunction_sb_cLuR::synapse0x24750f0() {
   return (neuron0x245e200()*2.35037);
}

double NNfunction_sb_cLuR::synapse0x2475a80() {
   return (neuron0x2462cd0()*-0.433036);
}

double NNfunction_sb_cLuR::synapse0x2475ac0() {
   return (neuron0x24636a0()*-0.831592);
}

double NNfunction_sb_cLuR::synapse0x2476450() {
   return (neuron0x2464070()*-0.4559);
}

double NNfunction_sb_cLuR::synapse0x2476490() {
   return (neuron0x2464a40()*0.92139);
}

double NNfunction_sb_cLuR::synapse0x2476e20() {
   return (neuron0x2466850()*1.14708);
}

double NNfunction_sb_cLuR::synapse0x2476e60() {
   return (neuron0x2466b30()*-0.168514);
}

double NNfunction_sb_cLuR::synapse0x24777f0() {
   return (neuron0x2467500()*-1.032);
}

double NNfunction_sb_cLuR::synapse0x2477830() {
   return (neuron0x2467ed0()*-0.411799);
}

double NNfunction_sb_cLuR::synapse0x24783d0() {
   return (neuron0x24688a0()*-1.34914);
}

double NNfunction_sb_cLuR::synapse0x2478410() {
   return (neuron0x2469270()*0.0407281);
}

double NNfunction_sb_cLuR::synapse0x2478da0() {
   return (neuron0x2461dc0()*1.83603);
}

double NNfunction_sb_cLuR::synapse0x2478de0() {
   return (neuron0x2462790()*-1.84757);
}

double NNfunction_sb_cLuR::synapse0x2469c20() {
   return (neuron0x246c000()*0.34813);
}

double NNfunction_sb_cLuR::synapse0x2469c60() {
   return (neuron0x246c9d0()*0.833087);
}

double NNfunction_sb_cLuR::synapse0x246a5f0() {
   return (neuron0x246d3a0()*0.291799);
}

double NNfunction_sb_cLuR::synapse0x246a630() {
   return (neuron0x246dd70()*0.866059);
}

double NNfunction_sb_cLuR::synapse0x246afc0() {
   return (neuron0x246e740()*1.02149);
}

double NNfunction_sb_cLuR::synapse0x246b000() {
   return (neuron0x246f110()*0.477808);
}

double NNfunction_sb_cLuR::synapse0x247d4e0() {
   return (neuron0x246fae0()*-2.32976);
}

double NNfunction_sb_cLuR::synapse0x247d520() {
   return (neuron0x24704b0()*-1.86384);
}

double NNfunction_sb_cLuR::synapse0x247deb0() {
   return (neuron0x2466540()*0.629251);
}

double NNfunction_sb_cLuR::synapse0x247def0() {
   return (neuron0x2473090()*-4.77064);
}

double NNfunction_sb_cLuR::synapse0x247e880() {
   return (neuron0x2473a60()*-1.98423);
}

double NNfunction_sb_cLuR::synapse0x247e8c0() {
   return (neuron0x2474430()*1.28601);
}

double NNfunction_sb_cLuR::synapse0x247f250() {
   return (neuron0x2474e00()*0.313095);
}

double NNfunction_sb_cLuR::synapse0x247f290() {
   return (neuron0x24757d0()*0.85709);
}

double NNfunction_sb_cLuR::synapse0x245a1e0() {
   return (neuron0x24761a0()*-0.17882);
}

double NNfunction_sb_cLuR::synapse0x245a220() {
   return (neuron0x2476b70()*2.34293);
}

double NNfunction_sb_cLuR::synapse0x246e9f0() {
   return (neuron0x2477540()*0.807981);
}

double NNfunction_sb_cLuR::synapse0x246ea30() {
   return (neuron0x2478120()*0.511341);
}

double NNfunction_sb_cLuR::synapse0x247f970() {
   return (neuron0x2478af0()*-0.983328);
}

double NNfunction_sb_cLuR::synapse0x247f9b0() {
   return (neuron0x2469970()*1.00552);
}

double NNfunction_sb_cLuR::synapse0x247f9f0() {
   return (neuron0x246a340()*0.94063);
}

double NNfunction_sb_cLuR::synapse0x247fa30() {
   return (neuron0x246ad10()*0.175827);
}

double NNfunction_sb_cLuR::synapse0x24868e0() {
   return (neuron0x247d350()*-1.20421);
}

double NNfunction_sb_cLuR::synapse0x2486920() {
   return (neuron0x247dc00()*0.42081);
}

double NNfunction_sb_cLuR::synapse0x2486960() {
   return (neuron0x247e5d0()*1.25919);
}

double NNfunction_sb_cLuR::synapse0x24869a0() {
   return (neuron0x247efa0()*-0.745187);
}

double NNfunction_sb_cLuR::synapse0x2486d20() {
   return (neuron0x2459f30()*0.00446378);
}

double NNfunction_sb_cLuR::synapse0x2486d60() {
   return (neuron0x245a770()*-0.681991);
}

double NNfunction_sb_cLuR::synapse0x2486da0() {
   return (neuron0x245b250()*0.00180108);
}

double NNfunction_sb_cLuR::synapse0x2486de0() {
   return (neuron0x245acf0()*0.0597884);
}

double NNfunction_sb_cLuR::synapse0x2486e20() {
   return (neuron0x245c030()*1.458);
}

double NNfunction_sb_cLuR::synapse0x2486e60() {
   return (neuron0x245db00()*0.0181118);
}

double NNfunction_sb_cLuR::synapse0x2486ea0() {
   return (neuron0x245e8d0()*0.863274);
}

double NNfunction_sb_cLuR::synapse0x2486ee0() {
   return (neuron0x245f2a0()*0.0323143);
}

double NNfunction_sb_cLuR::synapse0x2486f20() {
   return (neuron0x245fc70()*-0.0928552);
}

double NNfunction_sb_cLuR::synapse0x2486f60() {
   return (neuron0x2460750()*0.0126957);
}

double NNfunction_sb_cLuR::synapse0x2486fa0() {
   return (neuron0x2461120()*0.0963221);
}

double NNfunction_sb_cLuR::synapse0x2486fe0() {
   return (neuron0x245e200()*0.00626415);
}

double NNfunction_sb_cLuR::synapse0x2487020() {
   return (neuron0x2462cd0()*-0.0766465);
}

double NNfunction_sb_cLuR::synapse0x2487060() {
   return (neuron0x24636a0()*-0.206524);
}

double NNfunction_sb_cLuR::synapse0x24870a0() {
   return (neuron0x2464070()*0.0664544);
}

double NNfunction_sb_cLuR::synapse0x24870e0() {
   return (neuron0x2464a40()*-0.0734737);
}

double NNfunction_sb_cLuR::synapse0x2486b70() {
   return (neuron0x2466850()*0.0636481);
}

double NNfunction_sb_cLuR::synapse0x2486bb0() {
   return (neuron0x2466b30()*1.2483);
}

double NNfunction_sb_cLuR::synapse0x2487230() {
   return (neuron0x2467500()*0.0590539);
}

double NNfunction_sb_cLuR::synapse0x2487270() {
   return (neuron0x2467ed0()*-0.00081374);
}

double NNfunction_sb_cLuR::synapse0x24872b0() {
   return (neuron0x24688a0()*0.251224);
}

double NNfunction_sb_cLuR::synapse0x24872f0() {
   return (neuron0x2469270()*0.505323);
}

double NNfunction_sb_cLuR::synapse0x2487330() {
   return (neuron0x2461dc0()*-0.851581);
}

double NNfunction_sb_cLuR::synapse0x2487370() {
   return (neuron0x2462790()*0.693009);
}

double NNfunction_sb_cLuR::synapse0x24873b0() {
   return (neuron0x246c000()*-0.0508148);
}

double NNfunction_sb_cLuR::synapse0x24873f0() {
   return (neuron0x246c9d0()*-0.0676131);
}

double NNfunction_sb_cLuR::synapse0x2487430() {
   return (neuron0x246d3a0()*-0.0296763);
}

double NNfunction_sb_cLuR::synapse0x2487470() {
   return (neuron0x246dd70()*-0.0133689);
}

double NNfunction_sb_cLuR::synapse0x24874b0() {
   return (neuron0x246e740()*1.42953);
}

double NNfunction_sb_cLuR::synapse0x24874f0() {
   return (neuron0x246f110()*1.53784);
}

double NNfunction_sb_cLuR::synapse0x2487530() {
   return (neuron0x246fae0()*0.130774);
}

double NNfunction_sb_cLuR::synapse0x2487570() {
   return (neuron0x24704b0()*0.290278);
}

double NNfunction_sb_cLuR::synapse0x2487120() {
   return (neuron0x2466540()*0.0368249);
}

double NNfunction_sb_cLuR::synapse0x2487160() {
   return (neuron0x2473090()*1.20722);
}

double NNfunction_sb_cLuR::synapse0x24871a0() {
   return (neuron0x2473a60()*0.350419);
}

double NNfunction_sb_cLuR::synapse0x24871e0() {
   return (neuron0x2474430()*-0.416047);
}

double NNfunction_sb_cLuR::synapse0x24877c0() {
   return (neuron0x2474e00()*-0.0235952);
}

double NNfunction_sb_cLuR::synapse0x2487800() {
   return (neuron0x24757d0()*-0.0984989);
}

double NNfunction_sb_cLuR::synapse0x2487840() {
   return (neuron0x24761a0()*0.0437122);
}

double NNfunction_sb_cLuR::synapse0x2487880() {
   return (neuron0x2476b70()*-0.00664045);
}

double NNfunction_sb_cLuR::synapse0x24878c0() {
   return (neuron0x2477540()*-0.0474139);
}

double NNfunction_sb_cLuR::synapse0x2487900() {
   return (neuron0x2478120()*-0.0838752);
}

double NNfunction_sb_cLuR::synapse0x2487940() {
   return (neuron0x2478af0()*-0.0385863);
}

double NNfunction_sb_cLuR::synapse0x2487980() {
   return (neuron0x2469970()*0.0513139);
}

double NNfunction_sb_cLuR::synapse0x24879c0() {
   return (neuron0x246a340()*-0.0158167);
}

double NNfunction_sb_cLuR::synapse0x2487a00() {
   return (neuron0x246ad10()*0.0219172);
}

double NNfunction_sb_cLuR::synapse0x2487a40() {
   return (neuron0x247d350()*-2.45555);
}

double NNfunction_sb_cLuR::synapse0x2487a80() {
   return (neuron0x247dc00()*0.0440368);
}

double NNfunction_sb_cLuR::synapse0x2487ac0() {
   return (neuron0x247e5d0()*-0.0362653);
}

double NNfunction_sb_cLuR::synapse0x2487b00() {
   return (neuron0x247efa0()*0.0332595);
}

double NNfunction_sb_cLuR::synapse0x2487e80() {
   return (neuron0x2459f30()*-0.43035);
}

double NNfunction_sb_cLuR::synapse0x2487ec0() {
   return (neuron0x245a770()*-0.415056);
}

double NNfunction_sb_cLuR::synapse0x2487f00() {
   return (neuron0x245b250()*0.415885);
}

double NNfunction_sb_cLuR::synapse0x2487f40() {
   return (neuron0x245acf0()*-0.378783);
}

double NNfunction_sb_cLuR::synapse0x2487f80() {
   return (neuron0x245c030()*-0.0369121);
}

double NNfunction_sb_cLuR::synapse0x2487fc0() {
   return (neuron0x245db00()*0.0694236);
}

double NNfunction_sb_cLuR::synapse0x2488000() {
   return (neuron0x245e8d0()*-0.135371);
}

double NNfunction_sb_cLuR::synapse0x2488040() {
   return (neuron0x245f2a0()*0.187884);
}

double NNfunction_sb_cLuR::synapse0x2488080() {
   return (neuron0x245fc70()*-0.590592);
}

double NNfunction_sb_cLuR::synapse0x24880c0() {
   return (neuron0x2460750()*-0.322101);
}

double NNfunction_sb_cLuR::synapse0x2488100() {
   return (neuron0x2461120()*-0.466107);
}

double NNfunction_sb_cLuR::synapse0x2488140() {
   return (neuron0x245e200()*-0.451633);
}

double NNfunction_sb_cLuR::synapse0x2488180() {
   return (neuron0x2462cd0()*0.115319);
}

double NNfunction_sb_cLuR::synapse0x24881c0() {
   return (neuron0x24636a0()*-0.000194286);
}

double NNfunction_sb_cLuR::synapse0x2488200() {
   return (neuron0x2464070()*-0.375456);
}

double NNfunction_sb_cLuR::synapse0x2488240() {
   return (neuron0x2464a40()*0.246977);
}

double NNfunction_sb_cLuR::synapse0x2487cd0() {
   return (neuron0x2466850()*0.378687);
}

double NNfunction_sb_cLuR::synapse0x2487d10() {
   return (neuron0x2466b30()*-0.681007);
}

double NNfunction_sb_cLuR::synapse0x2488390() {
   return (neuron0x2467500()*-0.0326006);
}

double NNfunction_sb_cLuR::synapse0x24883d0() {
   return (neuron0x2467ed0()*-0.165842);
}

double NNfunction_sb_cLuR::synapse0x2488410() {
   return (neuron0x24688a0()*-0.227399);
}

double NNfunction_sb_cLuR::synapse0x2488450() {
   return (neuron0x2469270()*-0.142446);
}

double NNfunction_sb_cLuR::synapse0x2488490() {
   return (neuron0x2461dc0()*-0.277708);
}

double NNfunction_sb_cLuR::synapse0x24884d0() {
   return (neuron0x2462790()*-0.429176);
}

double NNfunction_sb_cLuR::synapse0x2488510() {
   return (neuron0x246c000()*-0.558289);
}

double NNfunction_sb_cLuR::synapse0x2488550() {
   return (neuron0x246c9d0()*-0.386008);
}

double NNfunction_sb_cLuR::synapse0x2488590() {
   return (neuron0x246d3a0()*0.238364);
}

double NNfunction_sb_cLuR::synapse0x24885d0() {
   return (neuron0x246dd70()*-0.43563);
}

double NNfunction_sb_cLuR::synapse0x2488610() {
   return (neuron0x246e740()*0.300781);
}

double NNfunction_sb_cLuR::synapse0x2488650() {
   return (neuron0x246f110()*0.228124);
}

double NNfunction_sb_cLuR::synapse0x2488690() {
   return (neuron0x246fae0()*-0.0926209);
}

double NNfunction_sb_cLuR::synapse0x24886d0() {
   return (neuron0x24704b0()*-0.321784);
}

double NNfunction_sb_cLuR::synapse0x2488280() {
   return (neuron0x2466540()*-0.137139);
}

double NNfunction_sb_cLuR::synapse0x24882c0() {
   return (neuron0x2473090()*0.0687989);
}

double NNfunction_sb_cLuR::synapse0x2488300() {
   return (neuron0x2473a60()*0.0386669);
}

double NNfunction_sb_cLuR::synapse0x2488340() {
   return (neuron0x2474430()*0.322748);
}

double NNfunction_sb_cLuR::synapse0x2488920() {
   return (neuron0x2474e00()*-0.325515);
}

double NNfunction_sb_cLuR::synapse0x2488960() {
   return (neuron0x24757d0()*0.134765);
}

double NNfunction_sb_cLuR::synapse0x24889a0() {
   return (neuron0x24761a0()*0.240936);
}

double NNfunction_sb_cLuR::synapse0x24889e0() {
   return (neuron0x2476b70()*0.0736873);
}

double NNfunction_sb_cLuR::synapse0x2488a20() {
   return (neuron0x2477540()*-0.342645);
}

double NNfunction_sb_cLuR::synapse0x2488a60() {
   return (neuron0x2478120()*0.137881);
}

double NNfunction_sb_cLuR::synapse0x2488aa0() {
   return (neuron0x2478af0()*-0.180174);
}

double NNfunction_sb_cLuR::synapse0x2488ae0() {
   return (neuron0x2469970()*-0.626116);
}

double NNfunction_sb_cLuR::synapse0x2488b20() {
   return (neuron0x246a340()*-0.530911);
}

double NNfunction_sb_cLuR::synapse0x2488b60() {
   return (neuron0x246ad10()*0.0446346);
}

double NNfunction_sb_cLuR::synapse0x2488ba0() {
   return (neuron0x247d350()*-0.671341);
}

double NNfunction_sb_cLuR::synapse0x2488be0() {
   return (neuron0x247dc00()*-0.415557);
}

double NNfunction_sb_cLuR::synapse0x2488c20() {
   return (neuron0x247e5d0()*-0.072758);
}

double NNfunction_sb_cLuR::synapse0x2488c60() {
   return (neuron0x247efa0()*-0.358768);
}

double NNfunction_sb_cLuR::synapse0x2488fe0() {
   return (neuron0x2459f30()*1.20835);
}

double NNfunction_sb_cLuR::synapse0x2489020() {
   return (neuron0x245a770()*-1.95079);
}

double NNfunction_sb_cLuR::synapse0x2489060() {
   return (neuron0x245b250()*0.469741);
}

double NNfunction_sb_cLuR::synapse0x24890a0() {
   return (neuron0x245acf0()*1.63319);
}

double NNfunction_sb_cLuR::synapse0x24890e0() {
   return (neuron0x245c030()*8.26574);
}

double NNfunction_sb_cLuR::synapse0x2489120() {
   return (neuron0x245db00()*0.767719);
}

double NNfunction_sb_cLuR::synapse0x2489160() {
   return (neuron0x245e8d0()*0.693278);
}

double NNfunction_sb_cLuR::synapse0x24891a0() {
   return (neuron0x245f2a0()*-0.412039);
}

double NNfunction_sb_cLuR::synapse0x24891e0() {
   return (neuron0x245fc70()*0.0443801);
}

double NNfunction_sb_cLuR::synapse0x2489220() {
   return (neuron0x2460750()*0.797556);
}

double NNfunction_sb_cLuR::synapse0x2489260() {
   return (neuron0x2461120()*1.40853);
}

double NNfunction_sb_cLuR::synapse0x24892a0() {
   return (neuron0x245e200()*-0.493427);
}

double NNfunction_sb_cLuR::synapse0x24892e0() {
   return (neuron0x2462cd0()*-1.04221);
}

double NNfunction_sb_cLuR::synapse0x2489320() {
   return (neuron0x24636a0()*2.15054);
}

double NNfunction_sb_cLuR::synapse0x2489360() {
   return (neuron0x2464070()*0.467254);
}

double NNfunction_sb_cLuR::synapse0x24893a0() {
   return (neuron0x2464a40()*-1.46406);
}

double NNfunction_sb_cLuR::synapse0x2488e30() {
   return (neuron0x2466850()*0.32592);
}

double NNfunction_sb_cLuR::synapse0x2488e70() {
   return (neuron0x2466b30()*-0.127757);
}

double NNfunction_sb_cLuR::synapse0x24894f0() {
   return (neuron0x2467500()*-1.34887);
}

double NNfunction_sb_cLuR::synapse0x2489530() {
   return (neuron0x2467ed0()*1.83005);
}

double NNfunction_sb_cLuR::synapse0x2489570() {
   return (neuron0x24688a0()*-0.991537);
}

double NNfunction_sb_cLuR::synapse0x24895b0() {
   return (neuron0x2469270()*-0.760649);
}

double NNfunction_sb_cLuR::synapse0x24895f0() {
   return (neuron0x2461dc0()*-0.119063);
}

double NNfunction_sb_cLuR::synapse0x2489630() {
   return (neuron0x2462790()*0.469656);
}

double NNfunction_sb_cLuR::synapse0x2489670() {
   return (neuron0x246c000()*0.664854);
}

double NNfunction_sb_cLuR::synapse0x24896b0() {
   return (neuron0x246c9d0()*-0.00901055);
}

double NNfunction_sb_cLuR::synapse0x24896f0() {
   return (neuron0x246d3a0()*0.750924);
}

double NNfunction_sb_cLuR::synapse0x2489730() {
   return (neuron0x246dd70()*-0.272692);
}

double NNfunction_sb_cLuR::synapse0x2489770() {
   return (neuron0x246e740()*0.552721);
}

double NNfunction_sb_cLuR::synapse0x24897b0() {
   return (neuron0x246f110()*-0.708848);
}

double NNfunction_sb_cLuR::synapse0x24897f0() {
   return (neuron0x246fae0()*1.21769);
}

double NNfunction_sb_cLuR::synapse0x2489830() {
   return (neuron0x24704b0()*1.12609);
}

double NNfunction_sb_cLuR::synapse0x24893e0() {
   return (neuron0x2466540()*0.687994);
}

double NNfunction_sb_cLuR::synapse0x2489420() {
   return (neuron0x2473090()*-3.80418);
}

double NNfunction_sb_cLuR::synapse0x2489460() {
   return (neuron0x2473a60()*-0.609768);
}

double NNfunction_sb_cLuR::synapse0x24894a0() {
   return (neuron0x2474430()*1.45304);
}

double NNfunction_sb_cLuR::synapse0x2489a80() {
   return (neuron0x2474e00()*0.560457);
}

double NNfunction_sb_cLuR::synapse0x2489ac0() {
   return (neuron0x24757d0()*-0.868143);
}

double NNfunction_sb_cLuR::synapse0x2489b00() {
   return (neuron0x24761a0()*1.41608);
}

double NNfunction_sb_cLuR::synapse0x2489b40() {
   return (neuron0x2476b70()*-0.246355);
}

double NNfunction_sb_cLuR::synapse0x2489b80() {
   return (neuron0x2477540()*-0.168049);
}

double NNfunction_sb_cLuR::synapse0x2489bc0() {
   return (neuron0x2478120()*-2.61069);
}

double NNfunction_sb_cLuR::synapse0x2489c00() {
   return (neuron0x2478af0()*-0.863247);
}

double NNfunction_sb_cLuR::synapse0x2489c40() {
   return (neuron0x2469970()*0.141224);
}

double NNfunction_sb_cLuR::synapse0x2489c80() {
   return (neuron0x246a340()*0.512375);
}

double NNfunction_sb_cLuR::synapse0x2489cc0() {
   return (neuron0x246ad10()*0.951929);
}

double NNfunction_sb_cLuR::synapse0x2489d00() {
   return (neuron0x247d350()*-0.869347);
}

double NNfunction_sb_cLuR::synapse0x2489d40() {
   return (neuron0x247dc00()*0.854769);
}

double NNfunction_sb_cLuR::synapse0x2489d80() {
   return (neuron0x247e5d0()*1.2404);
}

double NNfunction_sb_cLuR::synapse0x2489dc0() {
   return (neuron0x247efa0()*0.434621);
}

double NNfunction_sb_cLuR::synapse0x248a020() {
   return (neuron0x24861a0()*7.35916);
}

double NNfunction_sb_cLuR::synapse0x248a060() {
   return (neuron0x2486540()*-4.07056);
}

double NNfunction_sb_cLuR::synapse0x248a0a0() {
   return (neuron0x24869e0()*-4.09534);
}

double NNfunction_sb_cLuR::synapse0x248a0e0() {
   return (neuron0x2487b40()*0.425164);
}

double NNfunction_sb_cLuR::synapse0x248a120() {
   return (neuron0x2488ca0()*-4.50007);
}

