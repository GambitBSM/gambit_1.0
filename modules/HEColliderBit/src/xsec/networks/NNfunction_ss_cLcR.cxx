#include "NNfunction_ss_cLcR.h"
#include <cmath>

double NNfunction_ss_cLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4423)/15.333;
   input1 = (in1 - 5.75434)/1157.28;
   input2 = (in2 - 652.523)/610.679;
   input3 = (in3 - -47.0029)/742.473;
   input4 = (in4 - 1036.55)/945.164;
   input5 = (in5 - 886.046)/947.198;
   input6 = (in6 - 889.067)/944.551;
   input7 = (in7 - 915.517)/938.502;
   input8 = (in8 - 898.2)/952.376;
   input9 = (in9 - 874.84)/925.297;
   input10 = (in10 - 976.822)/938.968;
   input11 = (in11 - 683.778)/828.162;
   input12 = (in12 - 231.615)/210.994;
   input13 = (in13 - 490.823)/502.795;
   input14 = (in14 - 711.741)/812.131;
   input15 = (in15 - 250.059)/229.58;
   input16 = (in16 - 518.937)/542.629;
   input17 = (in17 - 732)/863.622;
   input18 = (in18 - 726.35)/870.762;
   input19 = (in19 - 779.822)/854.662;
   input20 = (in20 - -5.31398)/479.777;
   input21 = (in21 - 0.448311)/1143.46;
   input22 = (in22 - 4.10168)/1194.94;
   input23 = (in23 - -202.079)/603.299;
   switch(index) {
     case 0:
         return neuron0x313c3e0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLcR::Value(int index, double* input) {
   input0 = (input[0] - 23.4423)/15.333;
   input1 = (input[1] - 5.75434)/1157.28;
   input2 = (input[2] - 652.523)/610.679;
   input3 = (input[3] - -47.0029)/742.473;
   input4 = (input[4] - 1036.55)/945.164;
   input5 = (input[5] - 886.046)/947.198;
   input6 = (input[6] - 889.067)/944.551;
   input7 = (input[7] - 915.517)/938.502;
   input8 = (input[8] - 898.2)/952.376;
   input9 = (input[9] - 874.84)/925.297;
   input10 = (input[10] - 976.822)/938.968;
   input11 = (input[11] - 683.778)/828.162;
   input12 = (input[12] - 231.615)/210.994;
   input13 = (input[13] - 490.823)/502.795;
   input14 = (input[14] - 711.741)/812.131;
   input15 = (input[15] - 250.059)/229.58;
   input16 = (input[16] - 518.937)/542.629;
   input17 = (input[17] - 732)/863.622;
   input18 = (input[18] - 726.35)/870.762;
   input19 = (input[19] - 779.822)/854.662;
   input20 = (input[20] - -5.31398)/479.777;
   input21 = (input[21] - 0.448311)/1143.46;
   input22 = (input[22] - 4.10168)/1194.94;
   input23 = (input[23] - -202.079)/603.299;
   switch(index) {
     case 0:
         return neuron0x313c3e0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLcR::neuron0x31084a0() {
   return input0;
}

double NNfunction_ss_cLcR::neuron0x31087e0() {
   return input1;
}

double NNfunction_ss_cLcR::neuron0x3108b20() {
   return input2;
}

double NNfunction_ss_cLcR::neuron0x3108e60() {
   return input3;
}

double NNfunction_ss_cLcR::neuron0x31091a0() {
   return input4;
}

double NNfunction_ss_cLcR::neuron0x31094e0() {
   return input5;
}

double NNfunction_ss_cLcR::neuron0x3109820() {
   return input6;
}

double NNfunction_ss_cLcR::neuron0x3109b60() {
   return input7;
}

double NNfunction_ss_cLcR::neuron0x3109ea0() {
   return input8;
}

double NNfunction_ss_cLcR::neuron0x310a1e0() {
   return input9;
}

double NNfunction_ss_cLcR::neuron0x310a520() {
   return input10;
}

double NNfunction_ss_cLcR::neuron0x310a860() {
   return input11;
}

double NNfunction_ss_cLcR::neuron0x310aba0() {
   return input12;
}

double NNfunction_ss_cLcR::neuron0x310aee0() {
   return input13;
}

double NNfunction_ss_cLcR::neuron0x310b220() {
   return input14;
}

double NNfunction_ss_cLcR::neuron0x310b560() {
   return input15;
}

double NNfunction_ss_cLcR::neuron0x310b8a0() {
   return input16;
}

double NNfunction_ss_cLcR::neuron0x310be00() {
   return input17;
}

double NNfunction_ss_cLcR::neuron0x310c020() {
   return input18;
}

double NNfunction_ss_cLcR::neuron0x310c360() {
   return input19;
}

double NNfunction_ss_cLcR::neuron0x310c6a0() {
   return input20;
}

double NNfunction_ss_cLcR::neuron0x310c9e0() {
   return input21;
}

double NNfunction_ss_cLcR::neuron0x310cd20() {
   return input22;
}

double NNfunction_ss_cLcR::neuron0x310d060() {
   return input23;
}

double NNfunction_ss_cLcR::input0x310d500() {
   double input = -0.286896;
   input += synapse0x2ec8310();
   input += synapse0x3108360();
   input += synapse0x31083a0();
   input += synapse0x310d7b0();
   input += synapse0x310d7f0();
   input += synapse0x310d830();
   input += synapse0x310d870();
   input += synapse0x310d8b0();
   input += synapse0x310d8f0();
   input += synapse0x310d930();
   input += synapse0x310d970();
   input += synapse0x310d9b0();
   input += synapse0x310d9f0();
   input += synapse0x310da30();
   input += synapse0x310da70();
   input += synapse0x310dab0();
   input += synapse0x31082d0();
   input += synapse0x3108310();
   input += synapse0x2eb9bb0();
   input += synapse0x2eb9bf0();
   input += synapse0x310dd10();
   input += synapse0x310dd50();
   input += synapse0x310dd90();
   input += synapse0x310ddd0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x310d500() {
   double input = input0x310d500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x310de10() {
   double input = -1.80738;
   input += synapse0x310e150();
   input += synapse0x310e190();
   input += synapse0x310e1d0();
   input += synapse0x310e210();
   input += synapse0x310e250();
   input += synapse0x310e290();
   input += synapse0x310e2d0();
   input += synapse0x310e310();
   input += synapse0x310e350();
   input += synapse0x310dc00();
   input += synapse0x310dc40();
   input += synapse0x310dc80();
   input += synapse0x310dcc0();
   input += synapse0x310e5a0();
   input += synapse0x310e5e0();
   input += synapse0x310e620();
   input += synapse0x310dfa0();
   input += synapse0x310dfe0();
   input += synapse0x310e770();
   input += synapse0x310e7b0();
   input += synapse0x310e7f0();
   input += synapse0x310e830();
   input += synapse0x310e870();
   input += synapse0x310e8b0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x310de10() {
   double input = input0x310de10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x310e8f0() {
   double input = 7.49326;
   input += synapse0x310ec30();
   input += synapse0x310ec70();
   input += synapse0x310ecb0();
   input += synapse0x310ecf0();
   input += synapse0x310ed30();
   input += synapse0x310ed70();
   input += synapse0x310edb0();
   input += synapse0x310edf0();
   input += synapse0x310ee30();
   input += synapse0x310ee70();
   input += synapse0x310eeb0();
   input += synapse0x310eef0();
   input += synapse0x310ef30();
   input += synapse0x310ef70();
   input += synapse0x310efb0();
   input += synapse0x310eff0();
   input += synapse0x310ea80();
   input += synapse0x310eac0();
   input += synapse0x2ec7a00();
   input += synapse0x2ec7a40();
   input += synapse0x30f7530();
   input += synapse0x30f7570();
   input += synapse0x30f75b0();
   input += synapse0x31083e0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x310e8f0() {
   double input = input0x310e8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x2ec8180() {
   double input = -2.50967;
   input += synapse0x310e540();
   input += synapse0x3108420();
   input += synapse0x3108460();
   input += synapse0x310f140();
   input += synapse0x310f180();
   input += synapse0x310f1c0();
   input += synapse0x310f200();
   input += synapse0x310f240();
   input += synapse0x310f280();
   input += synapse0x310f2c0();
   input += synapse0x310f300();
   input += synapse0x310f340();
   input += synapse0x310f380();
   input += synapse0x310f3c0();
   input += synapse0x310f400();
   input += synapse0x310f440();
   input += synapse0x310e390();
   input += synapse0x310e3d0();
   input += synapse0x310f590();
   input += synapse0x310f5d0();
   input += synapse0x310f610();
   input += synapse0x310f650();
   input += synapse0x310f690();
   input += synapse0x310f6d0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x2ec8180() {
   double input = input0x2ec8180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x310f710() {
   double input = -0.8543;
   input += synapse0x310fa50();
   input += synapse0x310fa90();
   input += synapse0x310fad0();
   input += synapse0x310fb10();
   input += synapse0x310fb50();
   input += synapse0x310fb90();
   input += synapse0x310fbd0();
   input += synapse0x310fc10();
   input += synapse0x310fc50();
   input += synapse0x310fc90();
   input += synapse0x310fcd0();
   input += synapse0x310fd10();
   input += synapse0x310fd50();
   input += synapse0x310fd90();
   input += synapse0x310fdd0();
   input += synapse0x310fe10();
   input += synapse0x310f8a0();
   input += synapse0x310f8e0();
   input += synapse0x310ff60();
   input += synapse0x310ffa0();
   input += synapse0x310ffe0();
   input += synapse0x3110020();
   input += synapse0x3110060();
   input += synapse0x31100a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x310f710() {
   double input = input0x310f710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x31100e0() {
   double input = 1.17834;
   input += synapse0x3110420();
   input += synapse0x3110460();
   input += synapse0x31104a0();
   input += synapse0x31104e0();
   input += synapse0x3110520();
   input += synapse0x3110560();
   input += synapse0x31105a0();
   input += synapse0x31105e0();
   input += synapse0x3110620();
   input += synapse0x2ec7d70();
   input += synapse0x2ec7db0();
   input += synapse0x2ec7df0();
   input += synapse0x2ec7e30();
   input += synapse0x2ec7e70();
   input += synapse0x2ec7eb0();
   input += synapse0x2ec7ef0();
   input += synapse0x3110270();
   input += synapse0x31102b0();
   input += synapse0x2ec8040();
   input += synapse0x2ec8080();
   input += synapse0x2ec80c0();
   input += synapse0x2ec8100();
   input += synapse0x2ec8140();
   input += synapse0x3110e70();
   return input;
}

double NNfunction_ss_cLcR::neuron0x31100e0() {
   double input = input0x31100e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3110eb0() {
   double input = -0.674173;
   input += synapse0x31111f0();
   input += synapse0x3111230();
   input += synapse0x3111270();
   input += synapse0x31112b0();
   input += synapse0x31112f0();
   input += synapse0x3111330();
   input += synapse0x3111370();
   input += synapse0x31113b0();
   input += synapse0x31113f0();
   input += synapse0x3111430();
   input += synapse0x3111470();
   input += synapse0x31114b0();
   input += synapse0x31114f0();
   input += synapse0x3111530();
   input += synapse0x3111570();
   input += synapse0x31115b0();
   input += synapse0x3111040();
   input += synapse0x3111080();
   input += synapse0x3111700();
   input += synapse0x3111740();
   input += synapse0x3111780();
   input += synapse0x31117c0();
   input += synapse0x3111800();
   input += synapse0x3111840();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3110eb0() {
   double input = input0x3110eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3111880() {
   double input = -1.92758;
   input += synapse0x3111bc0();
   input += synapse0x3111c00();
   input += synapse0x3111c40();
   input += synapse0x3111c80();
   input += synapse0x3111cc0();
   input += synapse0x3111d00();
   input += synapse0x3111d40();
   input += synapse0x3111d80();
   input += synapse0x3111dc0();
   input += synapse0x3111e00();
   input += synapse0x3111e40();
   input += synapse0x3111e80();
   input += synapse0x3111ec0();
   input += synapse0x3111f00();
   input += synapse0x3111f40();
   input += synapse0x3111f80();
   input += synapse0x3111a10();
   input += synapse0x3111a50();
   input += synapse0x31120d0();
   input += synapse0x3112110();
   input += synapse0x3112150();
   input += synapse0x3112190();
   input += synapse0x31121d0();
   input += synapse0x3112210();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3111880() {
   double input = input0x3111880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3112250() {
   double input = 0.236768;
   input += synapse0x310bcf0();
   input += synapse0x310bd30();
   input += synapse0x310bd70();
   input += synapse0x310bdb0();
   input += synapse0x31127a0();
   input += synapse0x31127e0();
   input += synapse0x3112820();
   input += synapse0x3112860();
   input += synapse0x31128a0();
   input += synapse0x31128e0();
   input += synapse0x3112920();
   input += synapse0x3112960();
   input += synapse0x31129a0();
   input += synapse0x31129e0();
   input += synapse0x3112a20();
   input += synapse0x3112a60();
   input += synapse0x31123e0();
   input += synapse0x3112420();
   input += synapse0x3112bb0();
   input += synapse0x3112bf0();
   input += synapse0x3112c30();
   input += synapse0x3112c70();
   input += synapse0x3112cb0();
   input += synapse0x3112cf0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3112250() {
   double input = input0x3112250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3112d30() {
   double input = -2.13236;
   input += synapse0x3113070();
   input += synapse0x31130b0();
   input += synapse0x31130f0();
   input += synapse0x3113130();
   input += synapse0x3113170();
   input += synapse0x31131b0();
   input += synapse0x31131f0();
   input += synapse0x3113230();
   input += synapse0x3113270();
   input += synapse0x31132b0();
   input += synapse0x31132f0();
   input += synapse0x3113330();
   input += synapse0x3113370();
   input += synapse0x31133b0();
   input += synapse0x31133f0();
   input += synapse0x3113430();
   input += synapse0x3112ec0();
   input += synapse0x3112f00();
   input += synapse0x3113580();
   input += synapse0x31135c0();
   input += synapse0x3113600();
   input += synapse0x3113640();
   input += synapse0x3113680();
   input += synapse0x31136c0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3112d30() {
   double input = input0x3112d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3113700() {
   double input = 1.40284;
   input += synapse0x3113a40();
   input += synapse0x3113a80();
   input += synapse0x3113ac0();
   input += synapse0x3113b00();
   input += synapse0x3113b40();
   input += synapse0x3113b80();
   input += synapse0x3113bc0();
   input += synapse0x3113c00();
   input += synapse0x3113c40();
   input += synapse0x3113c80();
   input += synapse0x3113cc0();
   input += synapse0x3113d00();
   input += synapse0x3113d40();
   input += synapse0x3113d80();
   input += synapse0x3113dc0();
   input += synapse0x3113e00();
   input += synapse0x3113890();
   input += synapse0x31138d0();
   input += synapse0x3110660();
   input += synapse0x31106a0();
   input += synapse0x31106e0();
   input += synapse0x3110720();
   input += synapse0x3110760();
   input += synapse0x31107a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3113700() {
   double input = input0x3113700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x31107e0() {
   double input = 1.46673;
   input += synapse0x3110b20();
   input += synapse0x3110b60();
   input += synapse0x3110ba0();
   input += synapse0x3110be0();
   input += synapse0x3110c20();
   input += synapse0x3110c60();
   input += synapse0x3110ca0();
   input += synapse0x3110ce0();
   input += synapse0x3110d20();
   input += synapse0x3110d60();
   input += synapse0x3110da0();
   input += synapse0x3110de0();
   input += synapse0x3110e20();
   input += synapse0x3114f60();
   input += synapse0x3114fa0();
   input += synapse0x3114fe0();
   input += synapse0x3110970();
   input += synapse0x31109b0();
   input += synapse0x3115130();
   input += synapse0x3115170();
   input += synapse0x31151b0();
   input += synapse0x31151f0();
   input += synapse0x3115230();
   input += synapse0x3115270();
   return input;
}

double NNfunction_ss_cLcR::neuron0x31107e0() {
   double input = input0x31107e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x31152b0() {
   double input = 1.22434;
   input += synapse0x31155f0();
   input += synapse0x3115630();
   input += synapse0x3115670();
   input += synapse0x31156b0();
   input += synapse0x31156f0();
   input += synapse0x3115730();
   input += synapse0x3115770();
   input += synapse0x31157b0();
   input += synapse0x31157f0();
   input += synapse0x3115830();
   input += synapse0x3115870();
   input += synapse0x31158b0();
   input += synapse0x31158f0();
   input += synapse0x3115930();
   input += synapse0x3115970();
   input += synapse0x31159b0();
   input += synapse0x3115440();
   input += synapse0x3115480();
   input += synapse0x3115b00();
   input += synapse0x3115b40();
   input += synapse0x3115b80();
   input += synapse0x3115bc0();
   input += synapse0x3115c00();
   input += synapse0x3115c40();
   return input;
}

double NNfunction_ss_cLcR::neuron0x31152b0() {
   double input = input0x31152b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3115c80() {
   double input = 0.995284;
   input += synapse0x3115fc0();
   input += synapse0x3116000();
   input += synapse0x3116040();
   input += synapse0x3116080();
   input += synapse0x31160c0();
   input += synapse0x3116100();
   input += synapse0x3116140();
   input += synapse0x3116180();
   input += synapse0x31161c0();
   input += synapse0x3116200();
   input += synapse0x3116240();
   input += synapse0x3116280();
   input += synapse0x31162c0();
   input += synapse0x3116300();
   input += synapse0x3116340();
   input += synapse0x3116380();
   input += synapse0x3115e10();
   input += synapse0x3115e50();
   input += synapse0x31164d0();
   input += synapse0x3116510();
   input += synapse0x3116550();
   input += synapse0x3116590();
   input += synapse0x31165d0();
   input += synapse0x3116610();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3115c80() {
   double input = input0x3115c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3116650() {
   double input = -0.661889;
   input += synapse0x3116990();
   input += synapse0x31169d0();
   input += synapse0x3116a10();
   input += synapse0x3116a50();
   input += synapse0x3116a90();
   input += synapse0x3116ad0();
   input += synapse0x3116b10();
   input += synapse0x3116b50();
   input += synapse0x3116b90();
   input += synapse0x3116bd0();
   input += synapse0x3116c10();
   input += synapse0x3116c50();
   input += synapse0x3116c90();
   input += synapse0x3116cd0();
   input += synapse0x3116d10();
   input += synapse0x3116d50();
   input += synapse0x31167e0();
   input += synapse0x3116820();
   input += synapse0x3116ea0();
   input += synapse0x3116ee0();
   input += synapse0x3116f20();
   input += synapse0x3116f60();
   input += synapse0x3116fa0();
   input += synapse0x3116fe0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3116650() {
   double input = input0x3116650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3117020() {
   double input = -4.91517;
   input += synapse0x3117360();
   input += synapse0x31086c0();
   input += synapse0x3108700();
   input += synapse0x3108a00();
   input += synapse0x3108a40();
   input += synapse0x3108d40();
   input += synapse0x3108d80();
   input += synapse0x3109080();
   input += synapse0x31090c0();
   input += synapse0x31093c0();
   input += synapse0x3109400();
   input += synapse0x3109700();
   input += synapse0x3109740();
   input += synapse0x3109a40();
   input += synapse0x3109a80();
   input += synapse0x3109d80();
   input += synapse0x3109dc0();
   input += synapse0x310a0c0();
   input += synapse0x310a100();
   input += synapse0x310a400();
   input += synapse0x310a440();
   input += synapse0x310a740();
   input += synapse0x310a780();
   input += synapse0x310aa80();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3117020() {
   double input = input0x3117020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3118e30() {
   double input = -0.19379;
   input += synapse0x310aac0();
   input += synapse0x310b780();
   input += synapse0x310b7c0();
   input += synapse0x31171b0();
   input += synapse0x31171f0();
   input += synapse0x310bac0();
   input += synapse0x310bb00();
   input += synapse0x2eb9a90();
   input += synapse0x2eb9ad0();
   input += synapse0x310c240();
   input += synapse0x310c280();
   input += synapse0x310c580();
   input += synapse0x310c5c0();
   input += synapse0x310c8c0();
   input += synapse0x310c900();
   input += synapse0x310cc00();
   input += synapse0x310cc40();
   input += synapse0x310cf40();
   input += synapse0x310cf80();
   input += synapse0x310d280();
   input += synapse0x310d2c0();
   input += synapse0x310adc0();
   input += synapse0x310ae00();
   input += synapse0x31190d0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3118e30() {
   double input = input0x3118e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3119110() {
   double input = 0.167163;
   input += synapse0x3119450();
   input += synapse0x3119490();
   input += synapse0x31194d0();
   input += synapse0x3119510();
   input += synapse0x3119550();
   input += synapse0x3119590();
   input += synapse0x31195d0();
   input += synapse0x3119610();
   input += synapse0x3119650();
   input += synapse0x3119690();
   input += synapse0x31196d0();
   input += synapse0x3119710();
   input += synapse0x3119750();
   input += synapse0x3119790();
   input += synapse0x31197d0();
   input += synapse0x3119810();
   input += synapse0x31192a0();
   input += synapse0x31192e0();
   input += synapse0x3119960();
   input += synapse0x31199a0();
   input += synapse0x31199e0();
   input += synapse0x3119a20();
   input += synapse0x3119a60();
   input += synapse0x3119aa0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3119110() {
   double input = input0x3119110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3119ae0() {
   double input = 0.146483;
   input += synapse0x3119e20();
   input += synapse0x3119e60();
   input += synapse0x3119ea0();
   input += synapse0x3119ee0();
   input += synapse0x3119f20();
   input += synapse0x3119f60();
   input += synapse0x3119fa0();
   input += synapse0x3119fe0();
   input += synapse0x311a020();
   input += synapse0x311a060();
   input += synapse0x311a0a0();
   input += synapse0x311a0e0();
   input += synapse0x311a120();
   input += synapse0x311a160();
   input += synapse0x311a1a0();
   input += synapse0x311a1e0();
   input += synapse0x3119c70();
   input += synapse0x3119cb0();
   input += synapse0x311a330();
   input += synapse0x311a370();
   input += synapse0x311a3b0();
   input += synapse0x311a3f0();
   input += synapse0x311a430();
   input += synapse0x311a470();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3119ae0() {
   double input = input0x3119ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x311a4b0() {
   double input = 0.956389;
   input += synapse0x311a7f0();
   input += synapse0x311a830();
   input += synapse0x311a870();
   input += synapse0x311a8b0();
   input += synapse0x311a8f0();
   input += synapse0x311a930();
   input += synapse0x311a970();
   input += synapse0x311a9b0();
   input += synapse0x311a9f0();
   input += synapse0x311aa30();
   input += synapse0x311aa70();
   input += synapse0x311aab0();
   input += synapse0x311aaf0();
   input += synapse0x311ab30();
   input += synapse0x311ab70();
   input += synapse0x311abb0();
   input += synapse0x311a640();
   input += synapse0x311a680();
   input += synapse0x311ad00();
   input += synapse0x311ad40();
   input += synapse0x311ad80();
   input += synapse0x311adc0();
   input += synapse0x311ae00();
   input += synapse0x311ae40();
   return input;
}

double NNfunction_ss_cLcR::neuron0x311a4b0() {
   double input = input0x311a4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x311ae80() {
   double input = 1.00469;
   input += synapse0x311b1c0();
   input += synapse0x311b200();
   input += synapse0x311b240();
   input += synapse0x311b280();
   input += synapse0x311b2c0();
   input += synapse0x311b300();
   input += synapse0x311b340();
   input += synapse0x311b380();
   input += synapse0x311b3c0();
   input += synapse0x311b400();
   input += synapse0x311b440();
   input += synapse0x311b480();
   input += synapse0x311b4c0();
   input += synapse0x311b500();
   input += synapse0x311b540();
   input += synapse0x311b580();
   input += synapse0x311b010();
   input += synapse0x311b050();
   input += synapse0x311b6d0();
   input += synapse0x311b710();
   input += synapse0x311b750();
   input += synapse0x311b790();
   input += synapse0x311b7d0();
   input += synapse0x311b810();
   return input;
}

double NNfunction_ss_cLcR::neuron0x311ae80() {
   double input = input0x311ae80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x311b850() {
   double input = -0.339047;
   input += synapse0x311bb90();
   input += synapse0x311bbd0();
   input += synapse0x311bc10();
   input += synapse0x311bc50();
   input += synapse0x311bc90();
   input += synapse0x311bcd0();
   input += synapse0x311bd10();
   input += synapse0x311bd50();
   input += synapse0x311bd90();
   input += synapse0x3113f50();
   input += synapse0x3113f90();
   input += synapse0x3113fd0();
   input += synapse0x3114010();
   input += synapse0x3114050();
   input += synapse0x3114090();
   input += synapse0x31140d0();
   input += synapse0x311b9e0();
   input += synapse0x311ba20();
   input += synapse0x3114220();
   input += synapse0x3114260();
   input += synapse0x31142a0();
   input += synapse0x31142e0();
   input += synapse0x3114320();
   input += synapse0x3114360();
   return input;
}

double NNfunction_ss_cLcR::neuron0x311b850() {
   double input = input0x311b850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x31143a0() {
   double input = 4.17112;
   input += synapse0x31146e0();
   input += synapse0x3114720();
   input += synapse0x3114760();
   input += synapse0x31147a0();
   input += synapse0x31147e0();
   input += synapse0x3114820();
   input += synapse0x3114860();
   input += synapse0x31148a0();
   input += synapse0x31148e0();
   input += synapse0x3114920();
   input += synapse0x3114960();
   input += synapse0x31149a0();
   input += synapse0x31149e0();
   input += synapse0x3114a20();
   input += synapse0x3114a60();
   input += synapse0x3114aa0();
   input += synapse0x3114530();
   input += synapse0x3114570();
   input += synapse0x3114bf0();
   input += synapse0x3114c30();
   input += synapse0x3114c70();
   input += synapse0x3114cb0();
   input += synapse0x3114cf0();
   input += synapse0x3114d30();
   return input;
}

double NNfunction_ss_cLcR::neuron0x31143a0() {
   double input = input0x31143a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3114d70() {
   double input = 1.09554;
   input += synapse0x3114f00();
   input += synapse0x311df90();
   input += synapse0x311dfd0();
   input += synapse0x311e010();
   input += synapse0x311e050();
   input += synapse0x311e090();
   input += synapse0x311e0d0();
   input += synapse0x311e110();
   input += synapse0x311e150();
   input += synapse0x311e190();
   input += synapse0x311e1d0();
   input += synapse0x311e210();
   input += synapse0x311e250();
   input += synapse0x311e290();
   input += synapse0x311e2d0();
   input += synapse0x311e310();
   input += synapse0x311dde0();
   input += synapse0x311de20();
   input += synapse0x311e460();
   input += synapse0x311e4a0();
   input += synapse0x311e4e0();
   input += synapse0x311e520();
   input += synapse0x311e560();
   input += synapse0x311e5a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3114d70() {
   double input = input0x3114d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x311e5e0() {
   double input = -0.0969381;
   input += synapse0x311e920();
   input += synapse0x311e960();
   input += synapse0x311e9a0();
   input += synapse0x311e9e0();
   input += synapse0x311ea20();
   input += synapse0x311ea60();
   input += synapse0x311eaa0();
   input += synapse0x311eae0();
   input += synapse0x311eb20();
   input += synapse0x311eb60();
   input += synapse0x311eba0();
   input += synapse0x311ebe0();
   input += synapse0x311ec20();
   input += synapse0x311ec60();
   input += synapse0x311eca0();
   input += synapse0x311ece0();
   input += synapse0x311e770();
   input += synapse0x311e7b0();
   input += synapse0x311ee30();
   input += synapse0x311ee70();
   input += synapse0x311eeb0();
   input += synapse0x311eef0();
   input += synapse0x311ef30();
   input += synapse0x311ef70();
   return input;
}

double NNfunction_ss_cLcR::neuron0x311e5e0() {
   double input = input0x311e5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x311efb0() {
   double input = -0.190172;
   input += synapse0x311f2f0();
   input += synapse0x311f330();
   input += synapse0x311f370();
   input += synapse0x311f3b0();
   input += synapse0x311f3f0();
   input += synapse0x311f430();
   input += synapse0x311f470();
   input += synapse0x311f4b0();
   input += synapse0x311f4f0();
   input += synapse0x311f530();
   input += synapse0x311f570();
   input += synapse0x311f5b0();
   input += synapse0x311f5f0();
   input += synapse0x311f630();
   input += synapse0x311f670();
   input += synapse0x311f6b0();
   input += synapse0x311f140();
   input += synapse0x311f180();
   input += synapse0x311f800();
   input += synapse0x311f840();
   input += synapse0x311f880();
   input += synapse0x311f8c0();
   input += synapse0x311f900();
   input += synapse0x311f940();
   return input;
}

double NNfunction_ss_cLcR::neuron0x311efb0() {
   double input = input0x311efb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x311f980() {
   double input = -0.584408;
   input += synapse0x311fcc0();
   input += synapse0x311fd00();
   input += synapse0x311fd40();
   input += synapse0x311fd80();
   input += synapse0x311fdc0();
   input += synapse0x311fe00();
   input += synapse0x311fe40();
   input += synapse0x311fe80();
   input += synapse0x311fec0();
   input += synapse0x311ff00();
   input += synapse0x311ff40();
   input += synapse0x311ff80();
   input += synapse0x311ffc0();
   input += synapse0x3120000();
   input += synapse0x3120040();
   input += synapse0x3120080();
   input += synapse0x311fb10();
   input += synapse0x311fb50();
   input += synapse0x31201d0();
   input += synapse0x3120210();
   input += synapse0x3120250();
   input += synapse0x3120290();
   input += synapse0x31202d0();
   input += synapse0x3120310();
   return input;
}

double NNfunction_ss_cLcR::neuron0x311f980() {
   double input = input0x311f980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3120350() {
   double input = -0.351967;
   input += synapse0x3120690();
   input += synapse0x31206d0();
   input += synapse0x3120710();
   input += synapse0x3120750();
   input += synapse0x3120790();
   input += synapse0x31207d0();
   input += synapse0x3120810();
   input += synapse0x3120850();
   input += synapse0x3120890();
   input += synapse0x31208d0();
   input += synapse0x3120910();
   input += synapse0x3120950();
   input += synapse0x3120990();
   input += synapse0x31209d0();
   input += synapse0x3120a10();
   input += synapse0x3120a50();
   input += synapse0x31204e0();
   input += synapse0x3120520();
   input += synapse0x3120ba0();
   input += synapse0x3120be0();
   input += synapse0x3120c20();
   input += synapse0x3120c60();
   input += synapse0x3120ca0();
   input += synapse0x3120ce0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3120350() {
   double input = input0x3120350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3120d20() {
   double input = 0.150651;
   input += synapse0x3121060();
   input += synapse0x31210a0();
   input += synapse0x31210e0();
   input += synapse0x3121120();
   input += synapse0x3121160();
   input += synapse0x31211a0();
   input += synapse0x31211e0();
   input += synapse0x3121220();
   input += synapse0x3121260();
   input += synapse0x31212a0();
   input += synapse0x31212e0();
   input += synapse0x3121320();
   input += synapse0x3121360();
   input += synapse0x31213a0();
   input += synapse0x31213e0();
   input += synapse0x3121420();
   input += synapse0x3120eb0();
   input += synapse0x3120ef0();
   input += synapse0x3121570();
   input += synapse0x31215b0();
   input += synapse0x31215f0();
   input += synapse0x3121630();
   input += synapse0x3121670();
   input += synapse0x31216b0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3120d20() {
   double input = input0x3120d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x31216f0() {
   double input = 1.43907;
   input += synapse0x3121a30();
   input += synapse0x3121a70();
   input += synapse0x3121ab0();
   input += synapse0x3121af0();
   input += synapse0x3121b30();
   input += synapse0x3121b70();
   input += synapse0x3121bb0();
   input += synapse0x3121bf0();
   input += synapse0x3121c30();
   input += synapse0x3121c70();
   input += synapse0x3121cb0();
   input += synapse0x3121cf0();
   input += synapse0x3121d30();
   input += synapse0x3121d70();
   input += synapse0x3121db0();
   input += synapse0x3121df0();
   input += synapse0x3121880();
   input += synapse0x31218c0();
   input += synapse0x3121f40();
   input += synapse0x3121f80();
   input += synapse0x3121fc0();
   input += synapse0x3122000();
   input += synapse0x3122040();
   input += synapse0x3122080();
   return input;
}

double NNfunction_ss_cLcR::neuron0x31216f0() {
   double input = input0x31216f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x31220c0() {
   double input = -0.376387;
   input += synapse0x3122400();
   input += synapse0x3122440();
   input += synapse0x3122480();
   input += synapse0x31224c0();
   input += synapse0x3122500();
   input += synapse0x3122540();
   input += synapse0x3122580();
   input += synapse0x31225c0();
   input += synapse0x3122600();
   input += synapse0x3122640();
   input += synapse0x3122680();
   input += synapse0x31226c0();
   input += synapse0x3122700();
   input += synapse0x3122740();
   input += synapse0x3122780();
   input += synapse0x31227c0();
   input += synapse0x3122250();
   input += synapse0x3122290();
   input += synapse0x3122910();
   input += synapse0x3122950();
   input += synapse0x3122990();
   input += synapse0x31229d0();
   input += synapse0x3122a10();
   input += synapse0x3122a50();
   return input;
}

double NNfunction_ss_cLcR::neuron0x31220c0() {
   double input = input0x31220c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3122a90() {
   double input = -0.90834;
   input += synapse0x3122dd0();
   input += synapse0x31173a0();
   input += synapse0x31173e0();
   input += synapse0x3117420();
   input += synapse0x3117670();
   input += synapse0x31176b0();
   input += synapse0x31176f0();
   input += synapse0x3117940();
   input += synapse0x3117980();
   input += synapse0x3117bd0();
   input += synapse0x3117c10();
   input += synapse0x3117c50();
   input += synapse0x3117ea0();
   input += synapse0x3117ee0();
   input += synapse0x3118130();
   input += synapse0x3118170();
   input += synapse0x3122c20();
   input += synapse0x3122c60();
   input += synapse0x31182c0();
   input += synapse0x31187d0();
   input += synapse0x3118810();
   input += synapse0x3118850();
   input += synapse0x3118aa0();
   input += synapse0x3118ae0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3122a90() {
   double input = input0x3122a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3118b20() {
   double input = -0.708682;
   input += synapse0x3118390();
   input += synapse0x31183d0();
   input += synapse0x3118410();
   input += synapse0x3118450();
   input += synapse0x3118dd0();
   input += synapse0x3125120();
   input += synapse0x3125160();
   input += synapse0x31251a0();
   input += synapse0x31251e0();
   input += synapse0x3125220();
   input += synapse0x3125260();
   input += synapse0x31252a0();
   input += synapse0x31252e0();
   input += synapse0x3125320();
   input += synapse0x3125360();
   input += synapse0x31253a0();
   input += synapse0x3118cb0();
   input += synapse0x3118cf0();
   input += synapse0x31254f0();
   input += synapse0x3125530();
   input += synapse0x3125570();
   input += synapse0x31255b0();
   input += synapse0x31255f0();
   input += synapse0x3125630();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3118b20() {
   double input = input0x3118b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3125670() {
   double input = 3.39037;
   input += synapse0x31259b0();
   input += synapse0x31259f0();
   input += synapse0x3125a30();
   input += synapse0x3125a70();
   input += synapse0x3125ab0();
   input += synapse0x3125af0();
   input += synapse0x3125b30();
   input += synapse0x3125b70();
   input += synapse0x3125bb0();
   input += synapse0x3125bf0();
   input += synapse0x3125c30();
   input += synapse0x3125c70();
   input += synapse0x3125cb0();
   input += synapse0x3125cf0();
   input += synapse0x3125d30();
   input += synapse0x3125d70();
   input += synapse0x3125800();
   input += synapse0x3125840();
   input += synapse0x3125ec0();
   input += synapse0x3125f00();
   input += synapse0x3125f40();
   input += synapse0x3125f80();
   input += synapse0x3125fc0();
   input += synapse0x3126000();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3125670() {
   double input = input0x3125670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3126040() {
   double input = 1.30927;
   input += synapse0x3126380();
   input += synapse0x31263c0();
   input += synapse0x3126400();
   input += synapse0x3126440();
   input += synapse0x3126480();
   input += synapse0x31264c0();
   input += synapse0x3126500();
   input += synapse0x3126540();
   input += synapse0x3126580();
   input += synapse0x31265c0();
   input += synapse0x3126600();
   input += synapse0x3126640();
   input += synapse0x3126680();
   input += synapse0x31266c0();
   input += synapse0x3126700();
   input += synapse0x3126740();
   input += synapse0x31261d0();
   input += synapse0x3126210();
   input += synapse0x3126890();
   input += synapse0x31268d0();
   input += synapse0x3126910();
   input += synapse0x3126950();
   input += synapse0x3126990();
   input += synapse0x31269d0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3126040() {
   double input = input0x3126040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3126a10() {
   double input = 0.322267;
   input += synapse0x3126d50();
   input += synapse0x3126d90();
   input += synapse0x3126dd0();
   input += synapse0x3126e10();
   input += synapse0x3126e50();
   input += synapse0x3126e90();
   input += synapse0x3126ed0();
   input += synapse0x3126f10();
   input += synapse0x3126f50();
   input += synapse0x3126f90();
   input += synapse0x3126fd0();
   input += synapse0x3127010();
   input += synapse0x3127050();
   input += synapse0x3127090();
   input += synapse0x31270d0();
   input += synapse0x3127110();
   input += synapse0x3126ba0();
   input += synapse0x3126be0();
   input += synapse0x3127260();
   input += synapse0x31272a0();
   input += synapse0x31272e0();
   input += synapse0x3127320();
   input += synapse0x3127360();
   input += synapse0x31273a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3126a10() {
   double input = input0x3126a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x31273e0() {
   double input = 2.15483;
   input += synapse0x3127720();
   input += synapse0x3127760();
   input += synapse0x31277a0();
   input += synapse0x31277e0();
   input += synapse0x3127820();
   input += synapse0x3127860();
   input += synapse0x31278a0();
   input += synapse0x31278e0();
   input += synapse0x3127920();
   input += synapse0x3127960();
   input += synapse0x31279a0();
   input += synapse0x31279e0();
   input += synapse0x3127a20();
   input += synapse0x3127a60();
   input += synapse0x3127aa0();
   input += synapse0x3127ae0();
   input += synapse0x3127570();
   input += synapse0x31275b0();
   input += synapse0x3127c30();
   input += synapse0x3127c70();
   input += synapse0x3127cb0();
   input += synapse0x3127cf0();
   input += synapse0x3127d30();
   input += synapse0x3127d70();
   return input;
}

double NNfunction_ss_cLcR::neuron0x31273e0() {
   double input = input0x31273e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3127db0() {
   double input = -3.9576;
   input += synapse0x31280f0();
   input += synapse0x3128130();
   input += synapse0x3128170();
   input += synapse0x31281b0();
   input += synapse0x31281f0();
   input += synapse0x3128230();
   input += synapse0x3128270();
   input += synapse0x31282b0();
   input += synapse0x31282f0();
   input += synapse0x3128330();
   input += synapse0x3128370();
   input += synapse0x31283b0();
   input += synapse0x31283f0();
   input += synapse0x3128430();
   input += synapse0x3128470();
   input += synapse0x31284b0();
   input += synapse0x3127f40();
   input += synapse0x3127f80();
   input += synapse0x3128600();
   input += synapse0x3128640();
   input += synapse0x3128680();
   input += synapse0x31286c0();
   input += synapse0x3128700();
   input += synapse0x3128740();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3127db0() {
   double input = input0x3127db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3128780() {
   double input = -0.415253;
   input += synapse0x3128ac0();
   input += synapse0x3128b00();
   input += synapse0x3128b40();
   input += synapse0x3128b80();
   input += synapse0x3128bc0();
   input += synapse0x3128c00();
   input += synapse0x3128c40();
   input += synapse0x3128c80();
   input += synapse0x3128cc0();
   input += synapse0x3128d00();
   input += synapse0x3128d40();
   input += synapse0x3128d80();
   input += synapse0x3128dc0();
   input += synapse0x3128e00();
   input += synapse0x3128e40();
   input += synapse0x3128e80();
   input += synapse0x3128910();
   input += synapse0x3128950();
   input += synapse0x3128fd0();
   input += synapse0x3129010();
   input += synapse0x3129050();
   input += synapse0x3129090();
   input += synapse0x31290d0();
   input += synapse0x3129110();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3128780() {
   double input = input0x3128780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3129150() {
   double input = -0.522526;
   input += synapse0x3129490();
   input += synapse0x31294d0();
   input += synapse0x3129510();
   input += synapse0x3129550();
   input += synapse0x3129590();
   input += synapse0x31295d0();
   input += synapse0x3129610();
   input += synapse0x3129650();
   input += synapse0x3129690();
   input += synapse0x31296d0();
   input += synapse0x3129710();
   input += synapse0x3129750();
   input += synapse0x3129790();
   input += synapse0x31297d0();
   input += synapse0x3129810();
   input += synapse0x3129850();
   input += synapse0x31292e0();
   input += synapse0x3129320();
   input += synapse0x31299a0();
   input += synapse0x31299e0();
   input += synapse0x3129a20();
   input += synapse0x3129a60();
   input += synapse0x3129aa0();
   input += synapse0x3129ae0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3129150() {
   double input = input0x3129150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3129b20() {
   double input = 0.814437;
   input += synapse0x3112590();
   input += synapse0x31125d0();
   input += synapse0x3112610();
   input += synapse0x3112650();
   input += synapse0x3112690();
   input += synapse0x31126d0();
   input += synapse0x3112710();
   input += synapse0x3112750();
   input += synapse0x312a270();
   input += synapse0x312a2b0();
   input += synapse0x312a2f0();
   input += synapse0x312a330();
   input += synapse0x312a370();
   input += synapse0x312a3b0();
   input += synapse0x312a3f0();
   input += synapse0x312a430();
   input += synapse0x3129cb0();
   input += synapse0x3129cf0();
   input += synapse0x312a580();
   input += synapse0x312a5c0();
   input += synapse0x312a600();
   input += synapse0x312a640();
   input += synapse0x312a680();
   input += synapse0x312a6c0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3129b20() {
   double input = input0x3129b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x312a700() {
   double input = -1.15295;
   input += synapse0x312aa40();
   input += synapse0x312aa80();
   input += synapse0x312aac0();
   input += synapse0x312ab00();
   input += synapse0x312ab40();
   input += synapse0x312ab80();
   input += synapse0x312abc0();
   input += synapse0x312ac00();
   input += synapse0x312ac40();
   input += synapse0x312ac80();
   input += synapse0x312acc0();
   input += synapse0x312ad00();
   input += synapse0x312ad40();
   input += synapse0x312ad80();
   input += synapse0x312adc0();
   input += synapse0x312ae00();
   input += synapse0x312a890();
   input += synapse0x312a8d0();
   input += synapse0x312af50();
   input += synapse0x312af90();
   input += synapse0x312afd0();
   input += synapse0x312b010();
   input += synapse0x312b050();
   input += synapse0x312b090();
   return input;
}

double NNfunction_ss_cLcR::neuron0x312a700() {
   double input = input0x312a700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x312b0d0() {
   double input = -0.534579;
   input += synapse0x312b410();
   input += synapse0x312b450();
   input += synapse0x312b490();
   input += synapse0x312b4d0();
   input += synapse0x312b510();
   input += synapse0x312b550();
   input += synapse0x312b590();
   input += synapse0x312b5d0();
   input += synapse0x312b610();
   input += synapse0x312b650();
   input += synapse0x312b690();
   input += synapse0x312b6d0();
   input += synapse0x312b710();
   input += synapse0x312b750();
   input += synapse0x312b790();
   input += synapse0x312b7d0();
   input += synapse0x312b260();
   input += synapse0x312b2a0();
   input += synapse0x311bdd0();
   input += synapse0x311be10();
   input += synapse0x311be50();
   input += synapse0x311be90();
   input += synapse0x311bed0();
   input += synapse0x311bf10();
   return input;
}

double NNfunction_ss_cLcR::neuron0x312b0d0() {
   double input = input0x312b0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x311bf50() {
   double input = 0.583632;
   input += synapse0x311c290();
   input += synapse0x311c2d0();
   input += synapse0x311c310();
   input += synapse0x311c350();
   input += synapse0x311c390();
   input += synapse0x311c3d0();
   input += synapse0x311c410();
   input += synapse0x311c450();
   input += synapse0x311c490();
   input += synapse0x311c4d0();
   input += synapse0x311c510();
   input += synapse0x311c550();
   input += synapse0x311c590();
   input += synapse0x311c5d0();
   input += synapse0x311c610();
   input += synapse0x311c650();
   input += synapse0x311c0e0();
   input += synapse0x311c120();
   input += synapse0x311c7a0();
   input += synapse0x311c7e0();
   input += synapse0x311c820();
   input += synapse0x311c860();
   input += synapse0x311c8a0();
   input += synapse0x311c8e0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x311bf50() {
   double input = input0x311bf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x311c920() {
   double input = -0.118663;
   input += synapse0x311cc60();
   input += synapse0x311cca0();
   input += synapse0x311cce0();
   input += synapse0x311cd20();
   input += synapse0x311cd60();
   input += synapse0x311cda0();
   input += synapse0x311cde0();
   input += synapse0x311ce20();
   input += synapse0x311ce60();
   input += synapse0x311cea0();
   input += synapse0x311cee0();
   input += synapse0x311cf20();
   input += synapse0x311cf60();
   input += synapse0x311cfa0();
   input += synapse0x311cfe0();
   input += synapse0x311d020();
   input += synapse0x311cab0();
   input += synapse0x311caf0();
   input += synapse0x311d170();
   input += synapse0x311d1b0();
   input += synapse0x311d1f0();
   input += synapse0x311d230();
   input += synapse0x311d270();
   input += synapse0x311d2b0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x311c920() {
   double input = input0x311c920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x311d2f0() {
   double input = 2.848;
   input += synapse0x311d630();
   input += synapse0x311d670();
   input += synapse0x311d6b0();
   input += synapse0x311d6f0();
   input += synapse0x311d730();
   input += synapse0x311d770();
   input += synapse0x311d7b0();
   input += synapse0x311d7f0();
   input += synapse0x311d830();
   input += synapse0x311d870();
   input += synapse0x311d8b0();
   input += synapse0x311d8f0();
   input += synapse0x311d930();
   input += synapse0x311d970();
   input += synapse0x311d9b0();
   input += synapse0x311d9f0();
   input += synapse0x311d480();
   input += synapse0x311d4c0();
   input += synapse0x311db40();
   input += synapse0x311db80();
   input += synapse0x311dbc0();
   input += synapse0x311dc00();
   input += synapse0x311dc40();
   input += synapse0x311dc80();
   return input;
}

double NNfunction_ss_cLcR::neuron0x311d2f0() {
   double input = input0x311d2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x312f930() {
   double input = -2.58048;
   input += synapse0x312fb50();
   input += synapse0x312fb90();
   input += synapse0x312fbd0();
   input += synapse0x312fc10();
   input += synapse0x312fc50();
   input += synapse0x312fc90();
   input += synapse0x312fcd0();
   input += synapse0x312fd10();
   input += synapse0x312fd50();
   input += synapse0x312fd90();
   input += synapse0x312fdd0();
   input += synapse0x312fe10();
   input += synapse0x312fe50();
   input += synapse0x312fe90();
   input += synapse0x312fed0();
   input += synapse0x312ff10();
   input += synapse0x311dcc0();
   input += synapse0x311dd00();
   input += synapse0x3130060();
   input += synapse0x31300a0();
   input += synapse0x31300e0();
   input += synapse0x3130120();
   input += synapse0x3130160();
   input += synapse0x31301a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x312f930() {
   double input = input0x312f930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x31301e0() {
   double input = -0.467555;
   input += synapse0x3130520();
   input += synapse0x3130560();
   input += synapse0x31305a0();
   input += synapse0x31305e0();
   input += synapse0x3130620();
   input += synapse0x3130660();
   input += synapse0x31306a0();
   input += synapse0x31306e0();
   input += synapse0x3130720();
   input += synapse0x3130760();
   input += synapse0x31307a0();
   input += synapse0x31307e0();
   input += synapse0x3130820();
   input += synapse0x3130860();
   input += synapse0x31308a0();
   input += synapse0x31308e0();
   input += synapse0x3130370();
   input += synapse0x31303b0();
   input += synapse0x3130a30();
   input += synapse0x3130a70();
   input += synapse0x3130ab0();
   input += synapse0x3130af0();
   input += synapse0x3130b30();
   input += synapse0x3130b70();
   return input;
}

double NNfunction_ss_cLcR::neuron0x31301e0() {
   double input = input0x31301e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3130bb0() {
   double input = -0.320998;
   input += synapse0x3130ef0();
   input += synapse0x3130f30();
   input += synapse0x3130f70();
   input += synapse0x3130fb0();
   input += synapse0x3130ff0();
   input += synapse0x3131030();
   input += synapse0x3131070();
   input += synapse0x31310b0();
   input += synapse0x31310f0();
   input += synapse0x3131130();
   input += synapse0x3131170();
   input += synapse0x31311b0();
   input += synapse0x31311f0();
   input += synapse0x3131230();
   input += synapse0x3131270();
   input += synapse0x31312b0();
   input += synapse0x3130d40();
   input += synapse0x3130d80();
   input += synapse0x3131400();
   input += synapse0x3131440();
   input += synapse0x3131480();
   input += synapse0x31314c0();
   input += synapse0x3131500();
   input += synapse0x3131540();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3130bb0() {
   double input = input0x3130bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3131580() {
   double input = -2.96368;
   input += synapse0x31318c0();
   input += synapse0x3131900();
   input += synapse0x3131940();
   input += synapse0x3131980();
   input += synapse0x31319c0();
   input += synapse0x3131a00();
   input += synapse0x3131a40();
   input += synapse0x3131a80();
   input += synapse0x3131ac0();
   input += synapse0x3131b00();
   input += synapse0x3131b40();
   input += synapse0x3131b80();
   input += synapse0x3131bc0();
   input += synapse0x3131c00();
   input += synapse0x3131c40();
   input += synapse0x3131c80();
   input += synapse0x3131710();
   input += synapse0x3131750();
   input += synapse0x3131dd0();
   input += synapse0x3131e10();
   input += synapse0x3131e50();
   input += synapse0x3131e90();
   input += synapse0x3131ed0();
   input += synapse0x3131f10();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3131580() {
   double input = input0x3131580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3138780() {
   double input = -0.502999;
   input += synapse0x310e4b0();
   input += synapse0x310e4f0();
   input += synapse0x310f9c0();
   input += synapse0x310fa00();
   input += synapse0x3110390();
   input += synapse0x31103d0();
   input += synapse0x3111160();
   input += synapse0x31111a0();
   input += synapse0x3111b30();
   input += synapse0x3111b70();
   input += synapse0x3112500();
   input += synapse0x3112540();
   input += synapse0x3112fe0();
   input += synapse0x3113020();
   input += synapse0x31139b0();
   input += synapse0x31139f0();
   input += synapse0x3110a90();
   input += synapse0x3110ad0();
   input += synapse0x3115560();
   input += synapse0x31155a0();
   input += synapse0x3115f30();
   input += synapse0x3115f70();
   input += synapse0x3116900();
   input += synapse0x3116940();
   input += synapse0x31172d0();
   input += synapse0x3117310();
   input += synapse0x310b440();
   input += synapse0x310b480();
   input += synapse0x31193c0();
   input += synapse0x3119400();
   input += synapse0x3119d90();
   input += synapse0x3119dd0();
   input += synapse0x311a760();
   input += synapse0x311a7a0();
   input += synapse0x311b130();
   input += synapse0x311b170();
   input += synapse0x311bb00();
   input += synapse0x311bb40();
   input += synapse0x3114650();
   input += synapse0x3114690();
   input += synapse0x311df00();
   input += synapse0x311df40();
   input += synapse0x311e890();
   input += synapse0x311e8d0();
   input += synapse0x311f260();
   input += synapse0x311f2a0();
   input += synapse0x311fc30();
   input += synapse0x311fc70();
   input += synapse0x3120600();
   input += synapse0x3120640();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3138780() {
   double input = input0x3138780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3138b20() {
   double input = -0.606392;
   input += synapse0x3122d40();
   input += synapse0x3122d80();
   input += synapse0x3118300();
   input += synapse0x3118340();
   input += synapse0x3125920();
   input += synapse0x3125960();
   input += synapse0x31262f0();
   input += synapse0x3126330();
   input += synapse0x3126cc0();
   input += synapse0x3126d00();
   input += synapse0x3127690();
   input += synapse0x31276d0();
   input += synapse0x3128060();
   input += synapse0x31280a0();
   input += synapse0x3128a30();
   input += synapse0x3128a70();
   input += synapse0x3129400();
   input += synapse0x3129440();
   input += synapse0x3129dd0();
   input += synapse0x3129e10();
   input += synapse0x312a9b0();
   input += synapse0x312a9f0();
   input += synapse0x312b380();
   input += synapse0x312b3c0();
   input += synapse0x311c200();
   input += synapse0x311c240();
   input += synapse0x311cbd0();
   input += synapse0x311cc10();
   input += synapse0x311d5a0();
   input += synapse0x311d5e0();
   input += synapse0x312fac0();
   input += synapse0x312fb00();
   input += synapse0x3130490();
   input += synapse0x31304d0();
   input += synapse0x3130e60();
   input += synapse0x3130ea0();
   input += synapse0x3131830();
   input += synapse0x3131870();
   input += synapse0x310d720();
   input += synapse0x310d760();
   input += synapse0x3120fd0();
   input += synapse0x3121010();
   input += synapse0x3131f50();
   input += synapse0x3131f90();
   input += synapse0x3131fd0();
   input += synapse0x3132010();
   input += synapse0x3138ec0();
   input += synapse0x3138f00();
   input += synapse0x3138f40();
   input += synapse0x3138f80();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3138b20() {
   double input = input0x3138b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x3138fc0() {
   double input = 0.0642458;
   input += synapse0x3139300();
   input += synapse0x3139340();
   input += synapse0x3139380();
   input += synapse0x31393c0();
   input += synapse0x3139400();
   input += synapse0x3139440();
   input += synapse0x3139480();
   input += synapse0x31394c0();
   input += synapse0x3139500();
   input += synapse0x3139540();
   input += synapse0x3139580();
   input += synapse0x31395c0();
   input += synapse0x3139600();
   input += synapse0x3139640();
   input += synapse0x3139680();
   input += synapse0x31396c0();
   input += synapse0x3139150();
   input += synapse0x3139190();
   input += synapse0x3139810();
   input += synapse0x3139850();
   input += synapse0x3139890();
   input += synapse0x31398d0();
   input += synapse0x3139910();
   input += synapse0x3139950();
   input += synapse0x3139990();
   input += synapse0x31399d0();
   input += synapse0x3139a10();
   input += synapse0x3139a50();
   input += synapse0x3139a90();
   input += synapse0x3139ad0();
   input += synapse0x3139b10();
   input += synapse0x3139b50();
   input += synapse0x3139700();
   input += synapse0x3139740();
   input += synapse0x3139780();
   input += synapse0x31397c0();
   input += synapse0x3139da0();
   input += synapse0x3139de0();
   input += synapse0x3139e20();
   input += synapse0x3139e60();
   input += synapse0x3139ea0();
   input += synapse0x3139ee0();
   input += synapse0x3139f20();
   input += synapse0x3139f60();
   input += synapse0x3139fa0();
   input += synapse0x3139fe0();
   input += synapse0x313a020();
   input += synapse0x313a060();
   input += synapse0x313a0a0();
   input += synapse0x313a0e0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x3138fc0() {
   double input = input0x3138fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x313a120() {
   double input = -0.918014;
   input += synapse0x313a460();
   input += synapse0x313a4a0();
   input += synapse0x313a4e0();
   input += synapse0x313a520();
   input += synapse0x313a560();
   input += synapse0x313a5a0();
   input += synapse0x313a5e0();
   input += synapse0x313a620();
   input += synapse0x313a660();
   input += synapse0x313a6a0();
   input += synapse0x313a6e0();
   input += synapse0x313a720();
   input += synapse0x313a760();
   input += synapse0x313a7a0();
   input += synapse0x313a7e0();
   input += synapse0x313a820();
   input += synapse0x313a2b0();
   input += synapse0x313a2f0();
   input += synapse0x313a970();
   input += synapse0x313a9b0();
   input += synapse0x313a9f0();
   input += synapse0x313aa30();
   input += synapse0x313aa70();
   input += synapse0x313aab0();
   input += synapse0x313aaf0();
   input += synapse0x313ab30();
   input += synapse0x313ab70();
   input += synapse0x313abb0();
   input += synapse0x313abf0();
   input += synapse0x313ac30();
   input += synapse0x313ac70();
   input += synapse0x313acb0();
   input += synapse0x313a860();
   input += synapse0x313a8a0();
   input += synapse0x313a8e0();
   input += synapse0x313a920();
   input += synapse0x313af00();
   input += synapse0x313af40();
   input += synapse0x313af80();
   input += synapse0x313afc0();
   input += synapse0x313b000();
   input += synapse0x313b040();
   input += synapse0x313b080();
   input += synapse0x313b0c0();
   input += synapse0x313b100();
   input += synapse0x313b140();
   input += synapse0x313b180();
   input += synapse0x313b1c0();
   input += synapse0x313b200();
   input += synapse0x313b240();
   return input;
}

double NNfunction_ss_cLcR::neuron0x313a120() {
   double input = input0x313a120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x313b280() {
   double input = 0.873561;
   input += synapse0x313b5c0();
   input += synapse0x313b600();
   input += synapse0x313b640();
   input += synapse0x313b680();
   input += synapse0x313b6c0();
   input += synapse0x313b700();
   input += synapse0x313b740();
   input += synapse0x313b780();
   input += synapse0x313b7c0();
   input += synapse0x313b800();
   input += synapse0x313b840();
   input += synapse0x313b880();
   input += synapse0x313b8c0();
   input += synapse0x313b900();
   input += synapse0x313b940();
   input += synapse0x313b980();
   input += synapse0x313b410();
   input += synapse0x313b450();
   input += synapse0x313bad0();
   input += synapse0x313bb10();
   input += synapse0x313bb50();
   input += synapse0x313bb90();
   input += synapse0x313bbd0();
   input += synapse0x313bc10();
   input += synapse0x313bc50();
   input += synapse0x313bc90();
   input += synapse0x313bcd0();
   input += synapse0x313bd10();
   input += synapse0x313bd50();
   input += synapse0x313bd90();
   input += synapse0x313bdd0();
   input += synapse0x313be10();
   input += synapse0x313b9c0();
   input += synapse0x313ba00();
   input += synapse0x313ba40();
   input += synapse0x313ba80();
   input += synapse0x313c060();
   input += synapse0x313c0a0();
   input += synapse0x313c0e0();
   input += synapse0x313c120();
   input += synapse0x313c160();
   input += synapse0x313c1a0();
   input += synapse0x313c1e0();
   input += synapse0x313c220();
   input += synapse0x313c260();
   input += synapse0x313c2a0();
   input += synapse0x313c2e0();
   input += synapse0x313c320();
   input += synapse0x313c360();
   input += synapse0x313c3a0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x313b280() {
   double input = input0x313b280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLcR::input0x313c3e0() {
   double input = 12.8934;
   input += synapse0x310d4c0();
   input += synapse0x313c600();
   input += synapse0x313c640();
   input += synapse0x313c680();
   input += synapse0x313c6c0();
   return input;
}

double NNfunction_ss_cLcR::neuron0x313c3e0() {
   double input = input0x313c3e0();
   return (input * 1)+0;
}

double NNfunction_ss_cLcR::synapse0x2ec8310() {
   return (neuron0x31084a0()*0.165332);
}

double NNfunction_ss_cLcR::synapse0x3108360() {
   return (neuron0x31087e0()*-0.256761);
}

double NNfunction_ss_cLcR::synapse0x31083a0() {
   return (neuron0x3108b20()*-0.206401);
}

double NNfunction_ss_cLcR::synapse0x310d7b0() {
   return (neuron0x3108e60()*0.561874);
}

double NNfunction_ss_cLcR::synapse0x310d7f0() {
   return (neuron0x31091a0()*1.3105);
}

double NNfunction_ss_cLcR::synapse0x310d830() {
   return (neuron0x31094e0()*1.24582);
}

double NNfunction_ss_cLcR::synapse0x310d870() {
   return (neuron0x3109820()*0.320809);
}

double NNfunction_ss_cLcR::synapse0x310d8b0() {
   return (neuron0x3109b60()*0.0267251);
}

double NNfunction_ss_cLcR::synapse0x310d8f0() {
   return (neuron0x3109ea0()*-0.568756);
}

double NNfunction_ss_cLcR::synapse0x310d930() {
   return (neuron0x310a1e0()*-0.212786);
}

double NNfunction_ss_cLcR::synapse0x310d970() {
   return (neuron0x310a520()*-0.137016);
}

double NNfunction_ss_cLcR::synapse0x310d9b0() {
   return (neuron0x310a860()*-0.641537);
}

double NNfunction_ss_cLcR::synapse0x310d9f0() {
   return (neuron0x310aba0()*-0.240421);
}

double NNfunction_ss_cLcR::synapse0x310da30() {
   return (neuron0x310aee0()*0.427295);
}

double NNfunction_ss_cLcR::synapse0x310da70() {
   return (neuron0x310b220()*0.25782);
}

double NNfunction_ss_cLcR::synapse0x310dab0() {
   return (neuron0x310b560()*0.466047);
}

double NNfunction_ss_cLcR::synapse0x31082d0() {
   return (neuron0x310b8a0()*-0.73041);
}

double NNfunction_ss_cLcR::synapse0x3108310() {
   return (neuron0x310be00()*-0.199831);
}

double NNfunction_ss_cLcR::synapse0x2eb9bb0() {
   return (neuron0x310c020()*1.36601);
}

double NNfunction_ss_cLcR::synapse0x2eb9bf0() {
   return (neuron0x310c360()*-0.292391);
}

double NNfunction_ss_cLcR::synapse0x310dd10() {
   return (neuron0x310c6a0()*0.163521);
}

double NNfunction_ss_cLcR::synapse0x310dd50() {
   return (neuron0x310c9e0()*-0.745188);
}

double NNfunction_ss_cLcR::synapse0x310dd90() {
   return (neuron0x310cd20()*0.11085);
}

double NNfunction_ss_cLcR::synapse0x310ddd0() {
   return (neuron0x310d060()*-0.82522);
}

double NNfunction_ss_cLcR::synapse0x310e150() {
   return (neuron0x31084a0()*0.156964);
}

double NNfunction_ss_cLcR::synapse0x310e190() {
   return (neuron0x31087e0()*0.228336);
}

double NNfunction_ss_cLcR::synapse0x310e1d0() {
   return (neuron0x3108b20()*0.30859);
}

double NNfunction_ss_cLcR::synapse0x310e210() {
   return (neuron0x3108e60()*-0.595556);
}

double NNfunction_ss_cLcR::synapse0x310e250() {
   return (neuron0x31091a0()*0.0232378);
}

double NNfunction_ss_cLcR::synapse0x310e290() {
   return (neuron0x31094e0()*-0.0840265);
}

double NNfunction_ss_cLcR::synapse0x310e2d0() {
   return (neuron0x3109820()*0.0760807);
}

double NNfunction_ss_cLcR::synapse0x310e310() {
   return (neuron0x3109b60()*-0.126628);
}

double NNfunction_ss_cLcR::synapse0x310e350() {
   return (neuron0x3109ea0()*-0.112142);
}

double NNfunction_ss_cLcR::synapse0x310dc00() {
   return (neuron0x310a1e0()*0.115945);
}

double NNfunction_ss_cLcR::synapse0x310dc40() {
   return (neuron0x310a520()*-0.0115584);
}

double NNfunction_ss_cLcR::synapse0x310dc80() {
   return (neuron0x310a860()*0.450512);
}

double NNfunction_ss_cLcR::synapse0x310dcc0() {
   return (neuron0x310aba0()*-0.268551);
}

double NNfunction_ss_cLcR::synapse0x310e5a0() {
   return (neuron0x310aee0()*-0.166418);
}

double NNfunction_ss_cLcR::synapse0x310e5e0() {
   return (neuron0x310b220()*0.19684);
}

double NNfunction_ss_cLcR::synapse0x310e620() {
   return (neuron0x310b560()*-0.40026);
}

double NNfunction_ss_cLcR::synapse0x310dfa0() {
   return (neuron0x310b8a0()*-0.184824);
}

double NNfunction_ss_cLcR::synapse0x310dfe0() {
   return (neuron0x310be00()*0.338633);
}

double NNfunction_ss_cLcR::synapse0x310e770() {
   return (neuron0x310c020()*0.46995);
}

double NNfunction_ss_cLcR::synapse0x310e7b0() {
   return (neuron0x310c360()*-0.269236);
}

double NNfunction_ss_cLcR::synapse0x310e7f0() {
   return (neuron0x310c6a0()*-0.150408);
}

double NNfunction_ss_cLcR::synapse0x310e830() {
   return (neuron0x310c9e0()*-0.0722109);
}

double NNfunction_ss_cLcR::synapse0x310e870() {
   return (neuron0x310cd20()*0.0122986);
}

double NNfunction_ss_cLcR::synapse0x310e8b0() {
   return (neuron0x310d060()*0.0870561);
}

double NNfunction_ss_cLcR::synapse0x310ec30() {
   return (neuron0x31084a0()*-0.0681898);
}

double NNfunction_ss_cLcR::synapse0x310ec70() {
   return (neuron0x31087e0()*-0.0761155);
}

double NNfunction_ss_cLcR::synapse0x310ecb0() {
   return (neuron0x3108b20()*0.0157882);
}

double NNfunction_ss_cLcR::synapse0x310ecf0() {
   return (neuron0x3108e60()*-3.37387);
}

double NNfunction_ss_cLcR::synapse0x310ed30() {
   return (neuron0x31091a0()*-0.0233501);
}

double NNfunction_ss_cLcR::synapse0x310ed70() {
   return (neuron0x31094e0()*0.00391103);
}

double NNfunction_ss_cLcR::synapse0x310edb0() {
   return (neuron0x3109820()*0.0430791);
}

double NNfunction_ss_cLcR::synapse0x310edf0() {
   return (neuron0x3109b60()*-0.00153768);
}

double NNfunction_ss_cLcR::synapse0x310ee30() {
   return (neuron0x3109ea0()*-0.190347);
}

double NNfunction_ss_cLcR::synapse0x310ee70() {
   return (neuron0x310a1e0()*-0.139582);
}

double NNfunction_ss_cLcR::synapse0x310eeb0() {
   return (neuron0x310a520()*-0.0275125);
}

double NNfunction_ss_cLcR::synapse0x310eef0() {
   return (neuron0x310a860()*-0.0188709);
}

double NNfunction_ss_cLcR::synapse0x310ef30() {
   return (neuron0x310aba0()*-0.593386);
}

double NNfunction_ss_cLcR::synapse0x310ef70() {
   return (neuron0x310aee0()*0.264862);
}

double NNfunction_ss_cLcR::synapse0x310efb0() {
   return (neuron0x310b220()*0.0986696);
}

double NNfunction_ss_cLcR::synapse0x310eff0() {
   return (neuron0x310b560()*-0.491479);
}

double NNfunction_ss_cLcR::synapse0x310ea80() {
   return (neuron0x310b8a0()*0.392575);
}

double NNfunction_ss_cLcR::synapse0x310eac0() {
   return (neuron0x310be00()*-0.0318222);
}

double NNfunction_ss_cLcR::synapse0x2ec7a00() {
   return (neuron0x310c020()*0.0310398);
}

double NNfunction_ss_cLcR::synapse0x2ec7a40() {
   return (neuron0x310c360()*-0.135952);
}

double NNfunction_ss_cLcR::synapse0x30f7530() {
   return (neuron0x310c6a0()*-0.295266);
}

double NNfunction_ss_cLcR::synapse0x30f7570() {
   return (neuron0x310c9e0()*0.143184);
}

double NNfunction_ss_cLcR::synapse0x30f75b0() {
   return (neuron0x310cd20()*0.0329066);
}

double NNfunction_ss_cLcR::synapse0x31083e0() {
   return (neuron0x310d060()*0.0766852);
}

double NNfunction_ss_cLcR::synapse0x310e540() {
   return (neuron0x31084a0()*0.0651653);
}

double NNfunction_ss_cLcR::synapse0x3108420() {
   return (neuron0x31087e0()*0.94835);
}

double NNfunction_ss_cLcR::synapse0x3108460() {
   return (neuron0x3108b20()*-1.61776);
}

double NNfunction_ss_cLcR::synapse0x310f140() {
   return (neuron0x3108e60()*-0.325095);
}

double NNfunction_ss_cLcR::synapse0x310f180() {
   return (neuron0x31091a0()*-0.452252);
}

double NNfunction_ss_cLcR::synapse0x310f1c0() {
   return (neuron0x31094e0()*-0.71737);
}

double NNfunction_ss_cLcR::synapse0x310f200() {
   return (neuron0x3109820()*0.835821);
}

double NNfunction_ss_cLcR::synapse0x310f240() {
   return (neuron0x3109b60()*-0.22136);
}

double NNfunction_ss_cLcR::synapse0x310f280() {
   return (neuron0x3109ea0()*-0.439792);
}

double NNfunction_ss_cLcR::synapse0x310f2c0() {
   return (neuron0x310a1e0()*-0.379149);
}

double NNfunction_ss_cLcR::synapse0x310f300() {
   return (neuron0x310a520()*-0.134273);
}

double NNfunction_ss_cLcR::synapse0x310f340() {
   return (neuron0x310a860()*0.175214);
}

double NNfunction_ss_cLcR::synapse0x310f380() {
   return (neuron0x310aba0()*-0.889719);
}

double NNfunction_ss_cLcR::synapse0x310f3c0() {
   return (neuron0x310aee0()*0.0775056);
}

double NNfunction_ss_cLcR::synapse0x310f400() {
   return (neuron0x310b220()*0.924147);
}

double NNfunction_ss_cLcR::synapse0x310f440() {
   return (neuron0x310b560()*-0.575244);
}

double NNfunction_ss_cLcR::synapse0x310e390() {
   return (neuron0x310b8a0()*0.482463);
}

double NNfunction_ss_cLcR::synapse0x310e3d0() {
   return (neuron0x310be00()*-0.0328792);
}

double NNfunction_ss_cLcR::synapse0x310f590() {
   return (neuron0x310c020()*-0.145508);
}

double NNfunction_ss_cLcR::synapse0x310f5d0() {
   return (neuron0x310c360()*0.194551);
}

double NNfunction_ss_cLcR::synapse0x310f610() {
   return (neuron0x310c6a0()*-1.5018);
}

double NNfunction_ss_cLcR::synapse0x310f650() {
   return (neuron0x310c9e0()*0.254965);
}

double NNfunction_ss_cLcR::synapse0x310f690() {
   return (neuron0x310cd20()*-0.503226);
}

double NNfunction_ss_cLcR::synapse0x310f6d0() {
   return (neuron0x310d060()*1.73607);
}

double NNfunction_ss_cLcR::synapse0x310fa50() {
   return (neuron0x31084a0()*0.0146618);
}

double NNfunction_ss_cLcR::synapse0x310fa90() {
   return (neuron0x31087e0()*0.012592);
}

double NNfunction_ss_cLcR::synapse0x310fad0() {
   return (neuron0x3108b20()*-0.00965121);
}

double NNfunction_ss_cLcR::synapse0x310fb10() {
   return (neuron0x3108e60()*-0.36858);
}

double NNfunction_ss_cLcR::synapse0x310fb50() {
   return (neuron0x31091a0()*0.00228197);
}

double NNfunction_ss_cLcR::synapse0x310fb90() {
   return (neuron0x31094e0()*-0.0085363);
}

double NNfunction_ss_cLcR::synapse0x310fbd0() {
   return (neuron0x3109820()*-0.040279);
}

double NNfunction_ss_cLcR::synapse0x310fc10() {
   return (neuron0x3109b60()*-0.0160609);
}

double NNfunction_ss_cLcR::synapse0x310fc50() {
   return (neuron0x3109ea0()*-0.0130203);
}

double NNfunction_ss_cLcR::synapse0x310fc90() {
   return (neuron0x310a1e0()*0.00537979);
}

double NNfunction_ss_cLcR::synapse0x310fcd0() {
   return (neuron0x310a520()*0.0184673);
}

double NNfunction_ss_cLcR::synapse0x310fd10() {
   return (neuron0x310a860()*-0.00309433);
}

double NNfunction_ss_cLcR::synapse0x310fd50() {
   return (neuron0x310aba0()*-0.399532);
}

double NNfunction_ss_cLcR::synapse0x310fd90() {
   return (neuron0x310aee0()*0.00260238);
}

double NNfunction_ss_cLcR::synapse0x310fdd0() {
   return (neuron0x310b220()*0.0331134);
}

double NNfunction_ss_cLcR::synapse0x310fe10() {
   return (neuron0x310b560()*0.942891);
}

double NNfunction_ss_cLcR::synapse0x310f8a0() {
   return (neuron0x310b8a0()*0.031265);
}

double NNfunction_ss_cLcR::synapse0x310f8e0() {
   return (neuron0x310be00()*0.0228268);
}

double NNfunction_ss_cLcR::synapse0x310ff60() {
   return (neuron0x310c020()*0.00858879);
}

double NNfunction_ss_cLcR::synapse0x310ffa0() {
   return (neuron0x310c360()*0.0206295);
}

double NNfunction_ss_cLcR::synapse0x310ffe0() {
   return (neuron0x310c6a0()*-0.0198603);
}

double NNfunction_ss_cLcR::synapse0x3110020() {
   return (neuron0x310c9e0()*-0.0186245);
}

double NNfunction_ss_cLcR::synapse0x3110060() {
   return (neuron0x310cd20()*0.001699);
}

double NNfunction_ss_cLcR::synapse0x31100a0() {
   return (neuron0x310d060()*-0.00489884);
}

double NNfunction_ss_cLcR::synapse0x3110420() {
   return (neuron0x31084a0()*0.0176719);
}

double NNfunction_ss_cLcR::synapse0x3110460() {
   return (neuron0x31087e0()*0.202561);
}

double NNfunction_ss_cLcR::synapse0x31104a0() {
   return (neuron0x3108b20()*-0.0187127);
}

double NNfunction_ss_cLcR::synapse0x31104e0() {
   return (neuron0x3108e60()*-0.900015);
}

double NNfunction_ss_cLcR::synapse0x3110520() {
   return (neuron0x31091a0()*-0.0159085);
}

double NNfunction_ss_cLcR::synapse0x3110560() {
   return (neuron0x31094e0()*-0.0206652);
}

double NNfunction_ss_cLcR::synapse0x31105a0() {
   return (neuron0x3109820()*-0.0346748);
}

double NNfunction_ss_cLcR::synapse0x31105e0() {
   return (neuron0x3109b60()*0.0156669);
}

double NNfunction_ss_cLcR::synapse0x3110620() {
   return (neuron0x3109ea0()*0.100379);
}

double NNfunction_ss_cLcR::synapse0x2ec7d70() {
   return (neuron0x310a1e0()*-0.0091597);
}

double NNfunction_ss_cLcR::synapse0x2ec7db0() {
   return (neuron0x310a520()*0.0802083);
}

double NNfunction_ss_cLcR::synapse0x2ec7df0() {
   return (neuron0x310a860()*-0.240083);
}

double NNfunction_ss_cLcR::synapse0x2ec7e30() {
   return (neuron0x310aba0()*-0.167011);
}

double NNfunction_ss_cLcR::synapse0x2ec7e70() {
   return (neuron0x310aee0()*0.0764553);
}

double NNfunction_ss_cLcR::synapse0x2ec7eb0() {
   return (neuron0x310b220()*-0.0128871);
}

double NNfunction_ss_cLcR::synapse0x2ec7ef0() {
   return (neuron0x310b560()*-0.101713);
}

double NNfunction_ss_cLcR::synapse0x3110270() {
   return (neuron0x310b8a0()*0.0438793);
}

double NNfunction_ss_cLcR::synapse0x31102b0() {
   return (neuron0x310be00()*-0.0783719);
}

double NNfunction_ss_cLcR::synapse0x2ec8040() {
   return (neuron0x310c020()*0.0093149);
}

double NNfunction_ss_cLcR::synapse0x2ec8080() {
   return (neuron0x310c360()*-0.15698);
}

double NNfunction_ss_cLcR::synapse0x2ec80c0() {
   return (neuron0x310c6a0()*0.0138347);
}

double NNfunction_ss_cLcR::synapse0x2ec8100() {
   return (neuron0x310c9e0()*-0.0231304);
}

double NNfunction_ss_cLcR::synapse0x2ec8140() {
   return (neuron0x310cd20()*-0.0106405);
}

double NNfunction_ss_cLcR::synapse0x3110e70() {
   return (neuron0x310d060()*0.00272145);
}

double NNfunction_ss_cLcR::synapse0x31111f0() {
   return (neuron0x31084a0()*0.140509);
}

double NNfunction_ss_cLcR::synapse0x3111230() {
   return (neuron0x31087e0()*0.129314);
}

double NNfunction_ss_cLcR::synapse0x3111270() {
   return (neuron0x3108b20()*-0.0388793);
}

double NNfunction_ss_cLcR::synapse0x31112b0() {
   return (neuron0x3108e60()*0.788635);
}

double NNfunction_ss_cLcR::synapse0x31112f0() {
   return (neuron0x31091a0()*0.0855671);
}

double NNfunction_ss_cLcR::synapse0x3111330() {
   return (neuron0x31094e0()*0.0807732);
}

double NNfunction_ss_cLcR::synapse0x3111370() {
   return (neuron0x3109820()*0.164145);
}

double NNfunction_ss_cLcR::synapse0x31113b0() {
   return (neuron0x3109b60()*0.0019652);
}

double NNfunction_ss_cLcR::synapse0x31113f0() {
   return (neuron0x3109ea0()*0.00719763);
}

double NNfunction_ss_cLcR::synapse0x3111430() {
   return (neuron0x310a1e0()*0.0379306);
}

double NNfunction_ss_cLcR::synapse0x3111470() {
   return (neuron0x310a520()*-0.137815);
}

double NNfunction_ss_cLcR::synapse0x31114b0() {
   return (neuron0x310a860()*-0.00870843);
}

double NNfunction_ss_cLcR::synapse0x31114f0() {
   return (neuron0x310aba0()*1.41284);
}

double NNfunction_ss_cLcR::synapse0x3111530() {
   return (neuron0x310aee0()*-0.0944817);
}

double NNfunction_ss_cLcR::synapse0x3111570() {
   return (neuron0x310b220()*0.134858);
}

double NNfunction_ss_cLcR::synapse0x31115b0() {
   return (neuron0x310b560()*1.6399);
}

double NNfunction_ss_cLcR::synapse0x3111040() {
   return (neuron0x310b8a0()*-0.066253);
}

double NNfunction_ss_cLcR::synapse0x3111080() {
   return (neuron0x310be00()*0.101702);
}

double NNfunction_ss_cLcR::synapse0x3111700() {
   return (neuron0x310c020()*0.0714114);
}

double NNfunction_ss_cLcR::synapse0x3111740() {
   return (neuron0x310c360()*0.00287224);
}

double NNfunction_ss_cLcR::synapse0x3111780() {
   return (neuron0x310c6a0()*-0.0084485);
}

double NNfunction_ss_cLcR::synapse0x31117c0() {
   return (neuron0x310c9e0()*-0.0493224);
}

double NNfunction_ss_cLcR::synapse0x3111800() {
   return (neuron0x310cd20()*-0.113351);
}

double NNfunction_ss_cLcR::synapse0x3111840() {
   return (neuron0x310d060()*-0.00018576);
}

double NNfunction_ss_cLcR::synapse0x3111bc0() {
   return (neuron0x31084a0()*0.45217);
}

double NNfunction_ss_cLcR::synapse0x3111c00() {
   return (neuron0x31087e0()*-0.717666);
}

double NNfunction_ss_cLcR::synapse0x3111c40() {
   return (neuron0x3108b20()*-0.627076);
}

double NNfunction_ss_cLcR::synapse0x3111c80() {
   return (neuron0x3108e60()*-1.25371);
}

double NNfunction_ss_cLcR::synapse0x3111cc0() {
   return (neuron0x31091a0()*0.198039);
}

double NNfunction_ss_cLcR::synapse0x3111d00() {
   return (neuron0x31094e0()*0.360992);
}

double NNfunction_ss_cLcR::synapse0x3111d40() {
   return (neuron0x3109820()*-0.202779);
}

double NNfunction_ss_cLcR::synapse0x3111d80() {
   return (neuron0x3109b60()*-0.0364898);
}

double NNfunction_ss_cLcR::synapse0x3111dc0() {
   return (neuron0x3109ea0()*0.445934);
}

double NNfunction_ss_cLcR::synapse0x3111e00() {
   return (neuron0x310a1e0()*0.53801);
}

double NNfunction_ss_cLcR::synapse0x3111e40() {
   return (neuron0x310a520()*0.440772);
}

double NNfunction_ss_cLcR::synapse0x3111e80() {
   return (neuron0x310a860()*0.251637);
}

double NNfunction_ss_cLcR::synapse0x3111ec0() {
   return (neuron0x310aba0()*-0.308016);
}

double NNfunction_ss_cLcR::synapse0x3111f00() {
   return (neuron0x310aee0()*-0.720984);
}

double NNfunction_ss_cLcR::synapse0x3111f40() {
   return (neuron0x310b220()*-0.263306);
}

double NNfunction_ss_cLcR::synapse0x3111f80() {
   return (neuron0x310b560()*0.209555);
}

double NNfunction_ss_cLcR::synapse0x3111a10() {
   return (neuron0x310b8a0()*-0.0956435);
}

double NNfunction_ss_cLcR::synapse0x3111a50() {
   return (neuron0x310be00()*0.843647);
}

double NNfunction_ss_cLcR::synapse0x31120d0() {
   return (neuron0x310c020()*-0.469043);
}

double NNfunction_ss_cLcR::synapse0x3112110() {
   return (neuron0x310c360()*0.256077);
}

double NNfunction_ss_cLcR::synapse0x3112150() {
   return (neuron0x310c6a0()*0.0753223);
}

double NNfunction_ss_cLcR::synapse0x3112190() {
   return (neuron0x310c9e0()*-0.168395);
}

double NNfunction_ss_cLcR::synapse0x31121d0() {
   return (neuron0x310cd20()*1.14443);
}

double NNfunction_ss_cLcR::synapse0x3112210() {
   return (neuron0x310d060()*-0.980691);
}

double NNfunction_ss_cLcR::synapse0x310bcf0() {
   return (neuron0x31084a0()*-0.162054);
}

double NNfunction_ss_cLcR::synapse0x310bd30() {
   return (neuron0x31087e0()*0.0965843);
}

double NNfunction_ss_cLcR::synapse0x310bd70() {
   return (neuron0x3108b20()*0.0437738);
}

double NNfunction_ss_cLcR::synapse0x310bdb0() {
   return (neuron0x3108e60()*-0.896256);
}

double NNfunction_ss_cLcR::synapse0x31127a0() {
   return (neuron0x31091a0()*0.0617168);
}

double NNfunction_ss_cLcR::synapse0x31127e0() {
   return (neuron0x31094e0()*0.0494031);
}

double NNfunction_ss_cLcR::synapse0x3112820() {
   return (neuron0x3109820()*-0.374656);
}

double NNfunction_ss_cLcR::synapse0x3112860() {
   return (neuron0x3109b60()*-0.322218);
}

double NNfunction_ss_cLcR::synapse0x31128a0() {
   return (neuron0x3109ea0()*0.0859736);
}

double NNfunction_ss_cLcR::synapse0x31128e0() {
   return (neuron0x310a1e0()*-0.0630925);
}

double NNfunction_ss_cLcR::synapse0x3112920() {
   return (neuron0x310a520()*-0.00020432);
}

double NNfunction_ss_cLcR::synapse0x3112960() {
   return (neuron0x310a860()*-0.0760045);
}

double NNfunction_ss_cLcR::synapse0x31129a0() {
   return (neuron0x310aba0()*0.146191);
}

double NNfunction_ss_cLcR::synapse0x31129e0() {
   return (neuron0x310aee0()*-0.0109103);
}

double NNfunction_ss_cLcR::synapse0x3112a20() {
   return (neuron0x310b220()*-0.205932);
}

double NNfunction_ss_cLcR::synapse0x3112a60() {
   return (neuron0x310b560()*0.132202);
}

double NNfunction_ss_cLcR::synapse0x31123e0() {
   return (neuron0x310b8a0()*-0.176809);
}

double NNfunction_ss_cLcR::synapse0x3112420() {
   return (neuron0x310be00()*-0.442298);
}

double NNfunction_ss_cLcR::synapse0x3112bb0() {
   return (neuron0x310c020()*0.730262);
}

double NNfunction_ss_cLcR::synapse0x3112bf0() {
   return (neuron0x310c360()*0.433613);
}

double NNfunction_ss_cLcR::synapse0x3112c30() {
   return (neuron0x310c6a0()*-0.0859962);
}

double NNfunction_ss_cLcR::synapse0x3112c70() {
   return (neuron0x310c9e0()*-0.0629103);
}

double NNfunction_ss_cLcR::synapse0x3112cb0() {
   return (neuron0x310cd20()*0.11225);
}

double NNfunction_ss_cLcR::synapse0x3112cf0() {
   return (neuron0x310d060()*0.611448);
}

double NNfunction_ss_cLcR::synapse0x3113070() {
   return (neuron0x31084a0()*-0.114689);
}

double NNfunction_ss_cLcR::synapse0x31130b0() {
   return (neuron0x31087e0()*0.319348);
}

double NNfunction_ss_cLcR::synapse0x31130f0() {
   return (neuron0x3108b20()*0.936772);
}

double NNfunction_ss_cLcR::synapse0x3113130() {
   return (neuron0x3108e60()*1.88826);
}

double NNfunction_ss_cLcR::synapse0x3113170() {
   return (neuron0x31091a0()*0.0199852);
}

double NNfunction_ss_cLcR::synapse0x31131b0() {
   return (neuron0x31094e0()*-0.00690953);
}

double NNfunction_ss_cLcR::synapse0x31131f0() {
   return (neuron0x3109820()*-0.0761669);
}

double NNfunction_ss_cLcR::synapse0x3113230() {
   return (neuron0x3109b60()*-0.202826);
}

double NNfunction_ss_cLcR::synapse0x3113270() {
   return (neuron0x3109ea0()*0.0449002);
}

double NNfunction_ss_cLcR::synapse0x31132b0() {
   return (neuron0x310a1e0()*-0.0397621);
}

double NNfunction_ss_cLcR::synapse0x31132f0() {
   return (neuron0x310a520()*-0.0881323);
}

double NNfunction_ss_cLcR::synapse0x3113330() {
   return (neuron0x310a860()*-0.346371);
}

double NNfunction_ss_cLcR::synapse0x3113370() {
   return (neuron0x310aba0()*-0.386658);
}

double NNfunction_ss_cLcR::synapse0x31133b0() {
   return (neuron0x310aee0()*0.123049);
}

double NNfunction_ss_cLcR::synapse0x31133f0() {
   return (neuron0x310b220()*0.0367091);
}

double NNfunction_ss_cLcR::synapse0x3113430() {
   return (neuron0x310b560()*-0.504012);
}

double NNfunction_ss_cLcR::synapse0x3112ec0() {
   return (neuron0x310b8a0()*-0.0922427);
}

double NNfunction_ss_cLcR::synapse0x3112f00() {
   return (neuron0x310be00()*-0.270073);
}

double NNfunction_ss_cLcR::synapse0x3113580() {
   return (neuron0x310c020()*-0.112564);
}

double NNfunction_ss_cLcR::synapse0x31135c0() {
   return (neuron0x310c360()*0.163748);
}

double NNfunction_ss_cLcR::synapse0x3113600() {
   return (neuron0x310c6a0()*0.0163623);
}

double NNfunction_ss_cLcR::synapse0x3113640() {
   return (neuron0x310c9e0()*-0.163515);
}

double NNfunction_ss_cLcR::synapse0x3113680() {
   return (neuron0x310cd20()*-0.0261815);
}

double NNfunction_ss_cLcR::synapse0x31136c0() {
   return (neuron0x310d060()*0.200281);
}

double NNfunction_ss_cLcR::synapse0x3113a40() {
   return (neuron0x31084a0()*-0.292925);
}

double NNfunction_ss_cLcR::synapse0x3113a80() {
   return (neuron0x31087e0()*1.51635);
}

double NNfunction_ss_cLcR::synapse0x3113ac0() {
   return (neuron0x3108b20()*-0.965252);
}

double NNfunction_ss_cLcR::synapse0x3113b00() {
   return (neuron0x3108e60()*1.27378);
}

double NNfunction_ss_cLcR::synapse0x3113b40() {
   return (neuron0x31091a0()*-0.502093);
}

double NNfunction_ss_cLcR::synapse0x3113b80() {
   return (neuron0x31094e0()*0.243284);
}

double NNfunction_ss_cLcR::synapse0x3113bc0() {
   return (neuron0x3109820()*0.717131);
}

double NNfunction_ss_cLcR::synapse0x3113c00() {
   return (neuron0x3109b60()*-0.681977);
}

double NNfunction_ss_cLcR::synapse0x3113c40() {
   return (neuron0x3109ea0()*0.318773);
}

double NNfunction_ss_cLcR::synapse0x3113c80() {
   return (neuron0x310a1e0()*0.255253);
}

double NNfunction_ss_cLcR::synapse0x3113cc0() {
   return (neuron0x310a520()*-0.973457);
}

double NNfunction_ss_cLcR::synapse0x3113d00() {
   return (neuron0x310a860()*0.279544);
}

double NNfunction_ss_cLcR::synapse0x3113d40() {
   return (neuron0x310aba0()*0.45071);
}

double NNfunction_ss_cLcR::synapse0x3113d80() {
   return (neuron0x310aee0()*0.405781);
}

double NNfunction_ss_cLcR::synapse0x3113dc0() {
   return (neuron0x310b220()*0.457111);
}

double NNfunction_ss_cLcR::synapse0x3113e00() {
   return (neuron0x310b560()*-0.842926);
}

double NNfunction_ss_cLcR::synapse0x3113890() {
   return (neuron0x310b8a0()*-0.540525);
}

double NNfunction_ss_cLcR::synapse0x31138d0() {
   return (neuron0x310be00()*-0.470083);
}

double NNfunction_ss_cLcR::synapse0x3110660() {
   return (neuron0x310c020()*0.410634);
}

double NNfunction_ss_cLcR::synapse0x31106a0() {
   return (neuron0x310c360()*-0.500269);
}

double NNfunction_ss_cLcR::synapse0x31106e0() {
   return (neuron0x310c6a0()*0.0335585);
}

double NNfunction_ss_cLcR::synapse0x3110720() {
   return (neuron0x310c9e0()*0.17092);
}

double NNfunction_ss_cLcR::synapse0x3110760() {
   return (neuron0x310cd20()*0.11324);
}

double NNfunction_ss_cLcR::synapse0x31107a0() {
   return (neuron0x310d060()*-0.905161);
}

double NNfunction_ss_cLcR::synapse0x3110b20() {
   return (neuron0x31084a0()*-0.157546);
}

double NNfunction_ss_cLcR::synapse0x3110b60() {
   return (neuron0x31087e0()*-1.37603);
}

double NNfunction_ss_cLcR::synapse0x3110ba0() {
   return (neuron0x3108b20()*0.0754537);
}

double NNfunction_ss_cLcR::synapse0x3110be0() {
   return (neuron0x3108e60()*1.01506);
}

double NNfunction_ss_cLcR::synapse0x3110c20() {
   return (neuron0x31091a0()*-0.847648);
}

double NNfunction_ss_cLcR::synapse0x3110c60() {
   return (neuron0x31094e0()*0.100149);
}

double NNfunction_ss_cLcR::synapse0x3110ca0() {
   return (neuron0x3109820()*-1.52561);
}

double NNfunction_ss_cLcR::synapse0x3110ce0() {
   return (neuron0x3109b60()*0.215329);
}

double NNfunction_ss_cLcR::synapse0x3110d20() {
   return (neuron0x3109ea0()*-0.688062);
}

double NNfunction_ss_cLcR::synapse0x3110d60() {
   return (neuron0x310a1e0()*-0.42951);
}

double NNfunction_ss_cLcR::synapse0x3110da0() {
   return (neuron0x310a520()*-0.0249101);
}

double NNfunction_ss_cLcR::synapse0x3110de0() {
   return (neuron0x310a860()*0.476264);
}

double NNfunction_ss_cLcR::synapse0x3110e20() {
   return (neuron0x310aba0()*0.490736);
}

double NNfunction_ss_cLcR::synapse0x3114f60() {
   return (neuron0x310aee0()*0.115065);
}

double NNfunction_ss_cLcR::synapse0x3114fa0() {
   return (neuron0x310b220()*-0.204295);
}

double NNfunction_ss_cLcR::synapse0x3114fe0() {
   return (neuron0x310b560()*0.540424);
}

double NNfunction_ss_cLcR::synapse0x3110970() {
   return (neuron0x310b8a0()*-0.452487);
}

double NNfunction_ss_cLcR::synapse0x31109b0() {
   return (neuron0x310be00()*0.387641);
}

double NNfunction_ss_cLcR::synapse0x3115130() {
   return (neuron0x310c020()*-0.50485);
}

double NNfunction_ss_cLcR::synapse0x3115170() {
   return (neuron0x310c360()*0.18222);
}

double NNfunction_ss_cLcR::synapse0x31151b0() {
   return (neuron0x310c6a0()*0.143837);
}

double NNfunction_ss_cLcR::synapse0x31151f0() {
   return (neuron0x310c9e0()*0.788947);
}

double NNfunction_ss_cLcR::synapse0x3115230() {
   return (neuron0x310cd20()*-0.401959);
}

double NNfunction_ss_cLcR::synapse0x3115270() {
   return (neuron0x310d060()*-0.435824);
}

double NNfunction_ss_cLcR::synapse0x31155f0() {
   return (neuron0x31084a0()*0.134993);
}

double NNfunction_ss_cLcR::synapse0x3115630() {
   return (neuron0x31087e0()*-0.492386);
}

double NNfunction_ss_cLcR::synapse0x3115670() {
   return (neuron0x3108b20()*-0.282786);
}

double NNfunction_ss_cLcR::synapse0x31156b0() {
   return (neuron0x3108e60()*0.223647);
}

double NNfunction_ss_cLcR::synapse0x31156f0() {
   return (neuron0x31091a0()*-0.00488925);
}

double NNfunction_ss_cLcR::synapse0x3115730() {
   return (neuron0x31094e0()*0.109918);
}

double NNfunction_ss_cLcR::synapse0x3115770() {
   return (neuron0x3109820()*0.0458416);
}

double NNfunction_ss_cLcR::synapse0x31157b0() {
   return (neuron0x3109b60()*0.116956);
}

double NNfunction_ss_cLcR::synapse0x31157f0() {
   return (neuron0x3109ea0()*-0.0197251);
}

double NNfunction_ss_cLcR::synapse0x3115830() {
   return (neuron0x310a1e0()*0.101962);
}

double NNfunction_ss_cLcR::synapse0x3115870() {
   return (neuron0x310a520()*-0.377492);
}

double NNfunction_ss_cLcR::synapse0x31158b0() {
   return (neuron0x310a860()*-0.407693);
}

double NNfunction_ss_cLcR::synapse0x31158f0() {
   return (neuron0x310aba0()*-0.0488047);
}

double NNfunction_ss_cLcR::synapse0x3115930() {
   return (neuron0x310aee0()*0.014839);
}

double NNfunction_ss_cLcR::synapse0x3115970() {
   return (neuron0x310b220()*0.107147);
}

double NNfunction_ss_cLcR::synapse0x31159b0() {
   return (neuron0x310b560()*0.182366);
}

double NNfunction_ss_cLcR::synapse0x3115440() {
   return (neuron0x310b8a0()*0.0800437);
}

double NNfunction_ss_cLcR::synapse0x3115480() {
   return (neuron0x310be00()*0.104066);
}

double NNfunction_ss_cLcR::synapse0x3115b00() {
   return (neuron0x310c020()*0.367618);
}

double NNfunction_ss_cLcR::synapse0x3115b40() {
   return (neuron0x310c360()*-0.260556);
}

double NNfunction_ss_cLcR::synapse0x3115b80() {
   return (neuron0x310c6a0()*-0.0447553);
}

double NNfunction_ss_cLcR::synapse0x3115bc0() {
   return (neuron0x310c9e0()*-0.152515);
}

double NNfunction_ss_cLcR::synapse0x3115c00() {
   return (neuron0x310cd20()*0.00989954);
}

double NNfunction_ss_cLcR::synapse0x3115c40() {
   return (neuron0x310d060()*-0.165229);
}

double NNfunction_ss_cLcR::synapse0x3115fc0() {
   return (neuron0x31084a0()*0.0212349);
}

double NNfunction_ss_cLcR::synapse0x3116000() {
   return (neuron0x31087e0()*0.132672);
}

double NNfunction_ss_cLcR::synapse0x3116040() {
   return (neuron0x3108b20()*-0.0176255);
}

double NNfunction_ss_cLcR::synapse0x3116080() {
   return (neuron0x3108e60()*-7.63629);
}

double NNfunction_ss_cLcR::synapse0x31160c0() {
   return (neuron0x31091a0()*-0.0188442);
}

double NNfunction_ss_cLcR::synapse0x3116100() {
   return (neuron0x31094e0()*0.0262447);
}

double NNfunction_ss_cLcR::synapse0x3116140() {
   return (neuron0x3109820()*0.0464417);
}

double NNfunction_ss_cLcR::synapse0x3116180() {
   return (neuron0x3109b60()*-0.0441395);
}

double NNfunction_ss_cLcR::synapse0x31161c0() {
   return (neuron0x3109ea0()*0.0553754);
}

double NNfunction_ss_cLcR::synapse0x3116200() {
   return (neuron0x310a1e0()*0.0153254);
}

double NNfunction_ss_cLcR::synapse0x3116240() {
   return (neuron0x310a520()*0.0378628);
}

double NNfunction_ss_cLcR::synapse0x3116280() {
   return (neuron0x310a860()*-0.0188259);
}

double NNfunction_ss_cLcR::synapse0x31162c0() {
   return (neuron0x310aba0()*0.23529);
}

double NNfunction_ss_cLcR::synapse0x3116300() {
   return (neuron0x310aee0()*-0.048884);
}

double NNfunction_ss_cLcR::synapse0x3116340() {
   return (neuron0x310b220()*-0.0439162);
}

double NNfunction_ss_cLcR::synapse0x3116380() {
   return (neuron0x310b560()*0.234178);
}

double NNfunction_ss_cLcR::synapse0x3115e10() {
   return (neuron0x310b8a0()*-0.0057847);
}

double NNfunction_ss_cLcR::synapse0x3115e50() {
   return (neuron0x310be00()*0.0736422);
}

double NNfunction_ss_cLcR::synapse0x31164d0() {
   return (neuron0x310c020()*0.0904943);
}

double NNfunction_ss_cLcR::synapse0x3116510() {
   return (neuron0x310c360()*0.00567486);
}

double NNfunction_ss_cLcR::synapse0x3116550() {
   return (neuron0x310c6a0()*-0.0329315);
}

double NNfunction_ss_cLcR::synapse0x3116590() {
   return (neuron0x310c9e0()*-0.039594);
}

double NNfunction_ss_cLcR::synapse0x31165d0() {
   return (neuron0x310cd20()*-0.0129626);
}

double NNfunction_ss_cLcR::synapse0x3116610() {
   return (neuron0x310d060()*-0.0260856);
}

double NNfunction_ss_cLcR::synapse0x3116990() {
   return (neuron0x31084a0()*0.174706);
}

double NNfunction_ss_cLcR::synapse0x31169d0() {
   return (neuron0x31087e0()*0.137795);
}

double NNfunction_ss_cLcR::synapse0x3116a10() {
   return (neuron0x3108b20()*-0.38532);
}

double NNfunction_ss_cLcR::synapse0x3116a50() {
   return (neuron0x3108e60()*1.35799);
}

double NNfunction_ss_cLcR::synapse0x3116a90() {
   return (neuron0x31091a0()*0.777304);
}

double NNfunction_ss_cLcR::synapse0x3116ad0() {
   return (neuron0x31094e0()*0.924225);
}

double NNfunction_ss_cLcR::synapse0x3116b10() {
   return (neuron0x3109820()*0.158005);
}

double NNfunction_ss_cLcR::synapse0x3116b50() {
   return (neuron0x3109b60()*0.598844);
}

double NNfunction_ss_cLcR::synapse0x3116b90() {
   return (neuron0x3109ea0()*-1.17148);
}

double NNfunction_ss_cLcR::synapse0x3116bd0() {
   return (neuron0x310a1e0()*0.322246);
}

double NNfunction_ss_cLcR::synapse0x3116c10() {
   return (neuron0x310a520()*-0.341359);
}

double NNfunction_ss_cLcR::synapse0x3116c50() {
   return (neuron0x310a860()*0.227056);
}

double NNfunction_ss_cLcR::synapse0x3116c90() {
   return (neuron0x310aba0()*0.147006);
}

double NNfunction_ss_cLcR::synapse0x3116cd0() {
   return (neuron0x310aee0()*0.0472675);
}

double NNfunction_ss_cLcR::synapse0x3116d10() {
   return (neuron0x310b220()*0.514163);
}

double NNfunction_ss_cLcR::synapse0x3116d50() {
   return (neuron0x310b560()*-0.774271);
}

double NNfunction_ss_cLcR::synapse0x31167e0() {
   return (neuron0x310b8a0()*0.858386);
}

double NNfunction_ss_cLcR::synapse0x3116820() {
   return (neuron0x310be00()*-0.418198);
}

double NNfunction_ss_cLcR::synapse0x3116ea0() {
   return (neuron0x310c020()*0.218207);
}

double NNfunction_ss_cLcR::synapse0x3116ee0() {
   return (neuron0x310c360()*-1.29223);
}

double NNfunction_ss_cLcR::synapse0x3116f20() {
   return (neuron0x310c6a0()*-0.246553);
}

double NNfunction_ss_cLcR::synapse0x3116f60() {
   return (neuron0x310c9e0()*0.481218);
}

double NNfunction_ss_cLcR::synapse0x3116fa0() {
   return (neuron0x310cd20()*-1.37621);
}

double NNfunction_ss_cLcR::synapse0x3116fe0() {
   return (neuron0x310d060()*1.03816);
}

double NNfunction_ss_cLcR::synapse0x3117360() {
   return (neuron0x31084a0()*-0.00590864);
}

double NNfunction_ss_cLcR::synapse0x31086c0() {
   return (neuron0x31087e0()*0.0431996);
}

double NNfunction_ss_cLcR::synapse0x3108700() {
   return (neuron0x3108b20()*-0.000930467);
}

double NNfunction_ss_cLcR::synapse0x3108a00() {
   return (neuron0x3108e60()*1.64358);
}

double NNfunction_ss_cLcR::synapse0x3108a40() {
   return (neuron0x31091a0()*-0.0132245);
}

double NNfunction_ss_cLcR::synapse0x3108d40() {
   return (neuron0x31094e0()*0.00679957);
}

double NNfunction_ss_cLcR::synapse0x3108d80() {
   return (neuron0x3109820()*0.0447208);
}

double NNfunction_ss_cLcR::synapse0x3109080() {
   return (neuron0x3109b60()*0.0083511);
}

double NNfunction_ss_cLcR::synapse0x31090c0() {
   return (neuron0x3109ea0()*0.0343121);
}

double NNfunction_ss_cLcR::synapse0x31093c0() {
   return (neuron0x310a1e0()*-0.0449929);
}

double NNfunction_ss_cLcR::synapse0x3109400() {
   return (neuron0x310a520()*0.000291881);
}

double NNfunction_ss_cLcR::synapse0x3109700() {
   return (neuron0x310a860()*-0.0642143);
}

double NNfunction_ss_cLcR::synapse0x3109740() {
   return (neuron0x310aba0()*-0.297408);
}

double NNfunction_ss_cLcR::synapse0x3109a40() {
   return (neuron0x310aee0()*0.139539);
}

double NNfunction_ss_cLcR::synapse0x3109a80() {
   return (neuron0x310b220()*-0.076438);
}

double NNfunction_ss_cLcR::synapse0x3109d80() {
   return (neuron0x310b560()*-0.377137);
}

double NNfunction_ss_cLcR::synapse0x3109dc0() {
   return (neuron0x310b8a0()*0.0443827);
}

double NNfunction_ss_cLcR::synapse0x310a0c0() {
   return (neuron0x310be00()*-0.105057);
}

double NNfunction_ss_cLcR::synapse0x310a100() {
   return (neuron0x310c020()*-0.0258852);
}

double NNfunction_ss_cLcR::synapse0x310a400() {
   return (neuron0x310c360()*-0.0958558);
}

double NNfunction_ss_cLcR::synapse0x310a440() {
   return (neuron0x310c6a0()*-0.00680744);
}

double NNfunction_ss_cLcR::synapse0x310a740() {
   return (neuron0x310c9e0()*-0.0159653);
}

double NNfunction_ss_cLcR::synapse0x310a780() {
   return (neuron0x310cd20()*-0.0263398);
}

double NNfunction_ss_cLcR::synapse0x310aa80() {
   return (neuron0x310d060()*-0.000608451);
}

double NNfunction_ss_cLcR::synapse0x310aac0() {
   return (neuron0x31084a0()*0.0137225);
}

double NNfunction_ss_cLcR::synapse0x310b780() {
   return (neuron0x31087e0()*0.0268026);
}

double NNfunction_ss_cLcR::synapse0x310b7c0() {
   return (neuron0x3108b20()*0.0259429);
}

double NNfunction_ss_cLcR::synapse0x31171b0() {
   return (neuron0x3108e60()*2.86228);
}

double NNfunction_ss_cLcR::synapse0x31171f0() {
   return (neuron0x31091a0()*-0.00123496);
}

double NNfunction_ss_cLcR::synapse0x310bac0() {
   return (neuron0x31094e0()*0.0277612);
}

double NNfunction_ss_cLcR::synapse0x310bb00() {
   return (neuron0x3109820()*-0.00759695);
}

double NNfunction_ss_cLcR::synapse0x2eb9a90() {
   return (neuron0x3109b60()*0.00511265);
}

double NNfunction_ss_cLcR::synapse0x2eb9ad0() {
   return (neuron0x3109ea0()*-0.0251834);
}

double NNfunction_ss_cLcR::synapse0x310c240() {
   return (neuron0x310a1e0()*0.0305376);
}

double NNfunction_ss_cLcR::synapse0x310c280() {
   return (neuron0x310a520()*-0.00427156);
}

double NNfunction_ss_cLcR::synapse0x310c580() {
   return (neuron0x310a860()*0.0450902);
}

double NNfunction_ss_cLcR::synapse0x310c5c0() {
   return (neuron0x310aba0()*0.450218);
}

double NNfunction_ss_cLcR::synapse0x310c8c0() {
   return (neuron0x310aee0()*-0.0535546);
}

double NNfunction_ss_cLcR::synapse0x310c900() {
   return (neuron0x310b220()*0.0142982);
}

double NNfunction_ss_cLcR::synapse0x310cc00() {
   return (neuron0x310b560()*0.278568);
}

double NNfunction_ss_cLcR::synapse0x310cc40() {
   return (neuron0x310b8a0()*-0.0291827);
}

double NNfunction_ss_cLcR::synapse0x310cf40() {
   return (neuron0x310be00()*0.0506094);
}

double NNfunction_ss_cLcR::synapse0x310cf80() {
   return (neuron0x310c020()*-0.002234);
}

double NNfunction_ss_cLcR::synapse0x310d280() {
   return (neuron0x310c360()*0.0260005);
}

double NNfunction_ss_cLcR::synapse0x310d2c0() {
   return (neuron0x310c6a0()*0.0244792);
}

double NNfunction_ss_cLcR::synapse0x310adc0() {
   return (neuron0x310c9e0()*-0.00980276);
}

double NNfunction_ss_cLcR::synapse0x310ae00() {
   return (neuron0x310cd20()*0.0239713);
}

double NNfunction_ss_cLcR::synapse0x31190d0() {
   return (neuron0x310d060()*-0.0322908);
}

double NNfunction_ss_cLcR::synapse0x3119450() {
   return (neuron0x31084a0()*-0.010683);
}

double NNfunction_ss_cLcR::synapse0x3119490() {
   return (neuron0x31087e0()*0.184585);
}

double NNfunction_ss_cLcR::synapse0x31194d0() {
   return (neuron0x3108b20()*-0.233007);
}

double NNfunction_ss_cLcR::synapse0x3119510() {
   return (neuron0x3108e60()*0.789682);
}

double NNfunction_ss_cLcR::synapse0x3119550() {
   return (neuron0x31091a0()*-0.0438723);
}

double NNfunction_ss_cLcR::synapse0x3119590() {
   return (neuron0x31094e0()*1.52282);
}

double NNfunction_ss_cLcR::synapse0x31195d0() {
   return (neuron0x3109820()*0.619447);
}

double NNfunction_ss_cLcR::synapse0x3119610() {
   return (neuron0x3109b60()*-0.00348511);
}

double NNfunction_ss_cLcR::synapse0x3119650() {
   return (neuron0x3109ea0()*-0.99738);
}

double NNfunction_ss_cLcR::synapse0x3119690() {
   return (neuron0x310a1e0()*-0.532656);
}

double NNfunction_ss_cLcR::synapse0x31196d0() {
   return (neuron0x310a520()*0.0946239);
}

double NNfunction_ss_cLcR::synapse0x3119710() {
   return (neuron0x310a860()*0.192298);
}

double NNfunction_ss_cLcR::synapse0x3119750() {
   return (neuron0x310aba0()*-0.00418117);
}

double NNfunction_ss_cLcR::synapse0x3119790() {
   return (neuron0x310aee0()*-0.86347);
}

double NNfunction_ss_cLcR::synapse0x31197d0() {
   return (neuron0x310b220()*0.0844819);
}

double NNfunction_ss_cLcR::synapse0x3119810() {
   return (neuron0x310b560()*-0.0661348);
}

double NNfunction_ss_cLcR::synapse0x31192a0() {
   return (neuron0x310b8a0()*1.02373);
}

double NNfunction_ss_cLcR::synapse0x31192e0() {
   return (neuron0x310be00()*0.572804);
}

double NNfunction_ss_cLcR::synapse0x3119960() {
   return (neuron0x310c020()*-0.341541);
}

double NNfunction_ss_cLcR::synapse0x31199a0() {
   return (neuron0x310c360()*1.29489);
}

double NNfunction_ss_cLcR::synapse0x31199e0() {
   return (neuron0x310c6a0()*0.530267);
}

double NNfunction_ss_cLcR::synapse0x3119a20() {
   return (neuron0x310c9e0()*-0.121654);
}

double NNfunction_ss_cLcR::synapse0x3119a60() {
   return (neuron0x310cd20()*0.780413);
}

double NNfunction_ss_cLcR::synapse0x3119aa0() {
   return (neuron0x310d060()*0.678556);
}

double NNfunction_ss_cLcR::synapse0x3119e20() {
   return (neuron0x31084a0()*-1.69904);
}

double NNfunction_ss_cLcR::synapse0x3119e60() {
   return (neuron0x31087e0()*0.0305497);
}

double NNfunction_ss_cLcR::synapse0x3119ea0() {
   return (neuron0x3108b20()*-0.0945005);
}

double NNfunction_ss_cLcR::synapse0x3119ee0() {
   return (neuron0x3108e60()*0.197371);
}

double NNfunction_ss_cLcR::synapse0x3119f20() {
   return (neuron0x31091a0()*0.122135);
}

double NNfunction_ss_cLcR::synapse0x3119f60() {
   return (neuron0x31094e0()*-0.993837);
}

double NNfunction_ss_cLcR::synapse0x3119fa0() {
   return (neuron0x3109820()*-0.467453);
}

double NNfunction_ss_cLcR::synapse0x3119fe0() {
   return (neuron0x3109b60()*0.290564);
}

double NNfunction_ss_cLcR::synapse0x311a020() {
   return (neuron0x3109ea0()*1.14205);
}

double NNfunction_ss_cLcR::synapse0x311a060() {
   return (neuron0x310a1e0()*1.46403);
}

double NNfunction_ss_cLcR::synapse0x311a0a0() {
   return (neuron0x310a520()*0.600182);
}

double NNfunction_ss_cLcR::synapse0x311a0e0() {
   return (neuron0x310a860()*-0.561362);
}

double NNfunction_ss_cLcR::synapse0x311a120() {
   return (neuron0x310aba0()*-0.189283);
}

double NNfunction_ss_cLcR::synapse0x311a160() {
   return (neuron0x310aee0()*-0.578795);
}

double NNfunction_ss_cLcR::synapse0x311a1a0() {
   return (neuron0x310b220()*-0.453965);
}

double NNfunction_ss_cLcR::synapse0x311a1e0() {
   return (neuron0x310b560()*0.711997);
}

double NNfunction_ss_cLcR::synapse0x3119c70() {
   return (neuron0x310b8a0()*0.368793);
}

double NNfunction_ss_cLcR::synapse0x3119cb0() {
   return (neuron0x310be00()*-0.423841);
}

double NNfunction_ss_cLcR::synapse0x311a330() {
   return (neuron0x310c020()*1.30983);
}

double NNfunction_ss_cLcR::synapse0x311a370() {
   return (neuron0x310c360()*-1.10213);
}

double NNfunction_ss_cLcR::synapse0x311a3b0() {
   return (neuron0x310c6a0()*0.396065);
}

double NNfunction_ss_cLcR::synapse0x311a3f0() {
   return (neuron0x310c9e0()*-0.431431);
}

double NNfunction_ss_cLcR::synapse0x311a430() {
   return (neuron0x310cd20()*-0.189232);
}

double NNfunction_ss_cLcR::synapse0x311a470() {
   return (neuron0x310d060()*-0.765014);
}

double NNfunction_ss_cLcR::synapse0x311a7f0() {
   return (neuron0x31084a0()*0.277639);
}

double NNfunction_ss_cLcR::synapse0x311a830() {
   return (neuron0x31087e0()*-0.907478);
}

double NNfunction_ss_cLcR::synapse0x311a870() {
   return (neuron0x3108b20()*0.636022);
}

double NNfunction_ss_cLcR::synapse0x311a8b0() {
   return (neuron0x3108e60()*0.26551);
}

double NNfunction_ss_cLcR::synapse0x311a8f0() {
   return (neuron0x31091a0()*0.448612);
}

double NNfunction_ss_cLcR::synapse0x311a930() {
   return (neuron0x31094e0()*0.236304);
}

double NNfunction_ss_cLcR::synapse0x311a970() {
   return (neuron0x3109820()*-0.160413);
}

double NNfunction_ss_cLcR::synapse0x311a9b0() {
   return (neuron0x3109b60()*0.196925);
}

double NNfunction_ss_cLcR::synapse0x311a9f0() {
   return (neuron0x3109ea0()*-0.324101);
}

double NNfunction_ss_cLcR::synapse0x311aa30() {
   return (neuron0x310a1e0()*0.515541);
}

double NNfunction_ss_cLcR::synapse0x311aa70() {
   return (neuron0x310a520()*-0.715348);
}

double NNfunction_ss_cLcR::synapse0x311aab0() {
   return (neuron0x310a860()*-0.54493);
}

double NNfunction_ss_cLcR::synapse0x311aaf0() {
   return (neuron0x310aba0()*-0.877265);
}

double NNfunction_ss_cLcR::synapse0x311ab30() {
   return (neuron0x310aee0()*1.27806);
}

double NNfunction_ss_cLcR::synapse0x311ab70() {
   return (neuron0x310b220()*1.1656);
}

double NNfunction_ss_cLcR::synapse0x311abb0() {
   return (neuron0x310b560()*-0.532168);
}

double NNfunction_ss_cLcR::synapse0x311a640() {
   return (neuron0x310b8a0()*0.576267);
}

double NNfunction_ss_cLcR::synapse0x311a680() {
   return (neuron0x310be00()*0.399709);
}

double NNfunction_ss_cLcR::synapse0x311ad00() {
   return (neuron0x310c020()*-0.621511);
}

double NNfunction_ss_cLcR::synapse0x311ad40() {
   return (neuron0x310c360()*-1.02417);
}

double NNfunction_ss_cLcR::synapse0x311ad80() {
   return (neuron0x310c6a0()*0.114569);
}

double NNfunction_ss_cLcR::synapse0x311adc0() {
   return (neuron0x310c9e0()*-1.30148);
}

double NNfunction_ss_cLcR::synapse0x311ae00() {
   return (neuron0x310cd20()*0.435562);
}

double NNfunction_ss_cLcR::synapse0x311ae40() {
   return (neuron0x310d060()*-0.613572);
}

double NNfunction_ss_cLcR::synapse0x311b1c0() {
   return (neuron0x31084a0()*-0.222203);
}

double NNfunction_ss_cLcR::synapse0x311b200() {
   return (neuron0x31087e0()*1.50318);
}

double NNfunction_ss_cLcR::synapse0x311b240() {
   return (neuron0x3108b20()*-0.163219);
}

double NNfunction_ss_cLcR::synapse0x311b280() {
   return (neuron0x3108e60()*0.0865313);
}

double NNfunction_ss_cLcR::synapse0x311b2c0() {
   return (neuron0x31091a0()*-1.04986);
}

double NNfunction_ss_cLcR::synapse0x311b300() {
   return (neuron0x31094e0()*-0.504413);
}

double NNfunction_ss_cLcR::synapse0x311b340() {
   return (neuron0x3109820()*-0.16998);
}

double NNfunction_ss_cLcR::synapse0x311b380() {
   return (neuron0x3109b60()*-0.641227);
}

double NNfunction_ss_cLcR::synapse0x311b3c0() {
   return (neuron0x3109ea0()*-0.0199634);
}

double NNfunction_ss_cLcR::synapse0x311b400() {
   return (neuron0x310a1e0()*-0.00291355);
}

double NNfunction_ss_cLcR::synapse0x311b440() {
   return (neuron0x310a520()*0.873177);
}

double NNfunction_ss_cLcR::synapse0x311b480() {
   return (neuron0x310a860()*-0.113212);
}

double NNfunction_ss_cLcR::synapse0x311b4c0() {
   return (neuron0x310aba0()*0.189902);
}

double NNfunction_ss_cLcR::synapse0x311b500() {
   return (neuron0x310aee0()*0.955249);
}

double NNfunction_ss_cLcR::synapse0x311b540() {
   return (neuron0x310b220()*0.486196);
}

double NNfunction_ss_cLcR::synapse0x311b580() {
   return (neuron0x310b560()*0.835105);
}

double NNfunction_ss_cLcR::synapse0x311b010() {
   return (neuron0x310b8a0()*-0.0587209);
}

double NNfunction_ss_cLcR::synapse0x311b050() {
   return (neuron0x310be00()*1.01906);
}

double NNfunction_ss_cLcR::synapse0x311b6d0() {
   return (neuron0x310c020()*-0.399492);
}

double NNfunction_ss_cLcR::synapse0x311b710() {
   return (neuron0x310c360()*1.31821);
}

double NNfunction_ss_cLcR::synapse0x311b750() {
   return (neuron0x310c6a0()*-0.808384);
}

double NNfunction_ss_cLcR::synapse0x311b790() {
   return (neuron0x310c9e0()*0.664276);
}

double NNfunction_ss_cLcR::synapse0x311b7d0() {
   return (neuron0x310cd20()*0.293315);
}

double NNfunction_ss_cLcR::synapse0x311b810() {
   return (neuron0x310d060()*0.810303);
}

double NNfunction_ss_cLcR::synapse0x311bb90() {
   return (neuron0x31084a0()*0.0884049);
}

double NNfunction_ss_cLcR::synapse0x311bbd0() {
   return (neuron0x31087e0()*-0.116948);
}

double NNfunction_ss_cLcR::synapse0x311bc10() {
   return (neuron0x3108b20()*0.309);
}

double NNfunction_ss_cLcR::synapse0x311bc50() {
   return (neuron0x3108e60()*-0.314169);
}

double NNfunction_ss_cLcR::synapse0x311bc90() {
   return (neuron0x31091a0()*0.010206);
}

double NNfunction_ss_cLcR::synapse0x311bcd0() {
   return (neuron0x31094e0()*-0.0107869);
}

double NNfunction_ss_cLcR::synapse0x311bd10() {
   return (neuron0x3109820()*-0.0666181);
}

double NNfunction_ss_cLcR::synapse0x311bd50() {
   return (neuron0x3109b60()*-0.0189502);
}

double NNfunction_ss_cLcR::synapse0x311bd90() {
   return (neuron0x3109ea0()*-0.0306806);
}

double NNfunction_ss_cLcR::synapse0x3113f50() {
   return (neuron0x310a1e0()*0.0398077);
}

double NNfunction_ss_cLcR::synapse0x3113f90() {
   return (neuron0x310a520()*-0.0393242);
}

double NNfunction_ss_cLcR::synapse0x3113fd0() {
   return (neuron0x310a860()*-0.247802);
}

double NNfunction_ss_cLcR::synapse0x3114010() {
   return (neuron0x310aba0()*0.0207864);
}

double NNfunction_ss_cLcR::synapse0x3114050() {
   return (neuron0x310aee0()*0.0811581);
}

double NNfunction_ss_cLcR::synapse0x3114090() {
   return (neuron0x310b220()*-0.026387);
}

double NNfunction_ss_cLcR::synapse0x31140d0() {
   return (neuron0x310b560()*0.161841);
}

double NNfunction_ss_cLcR::synapse0x311b9e0() {
   return (neuron0x310b8a0()*0.130218);
}

double NNfunction_ss_cLcR::synapse0x311ba20() {
   return (neuron0x310be00()*-0.014523);
}

double NNfunction_ss_cLcR::synapse0x3114220() {
   return (neuron0x310c020()*0.0142805);
}

double NNfunction_ss_cLcR::synapse0x3114260() {
   return (neuron0x310c360()*0.00435206);
}

double NNfunction_ss_cLcR::synapse0x31142a0() {
   return (neuron0x310c6a0()*-0.121178);
}

double NNfunction_ss_cLcR::synapse0x31142e0() {
   return (neuron0x310c9e0()*-0.0875758);
}

double NNfunction_ss_cLcR::synapse0x3114320() {
   return (neuron0x310cd20()*-0.0178479);
}

double NNfunction_ss_cLcR::synapse0x3114360() {
   return (neuron0x310d060()*-0.0724868);
}

double NNfunction_ss_cLcR::synapse0x31146e0() {
   return (neuron0x31084a0()*0.105916);
}

double NNfunction_ss_cLcR::synapse0x3114720() {
   return (neuron0x31087e0()*0.315471);
}

double NNfunction_ss_cLcR::synapse0x3114760() {
   return (neuron0x3108b20()*0.0016314);
}

double NNfunction_ss_cLcR::synapse0x31147a0() {
   return (neuron0x3108e60()*-2.15276);
}

double NNfunction_ss_cLcR::synapse0x31147e0() {
   return (neuron0x31091a0()*0.00576053);
}

double NNfunction_ss_cLcR::synapse0x3114820() {
   return (neuron0x31094e0()*0.0687142);
}

double NNfunction_ss_cLcR::synapse0x3114860() {
   return (neuron0x3109820()*0.11578);
}

double NNfunction_ss_cLcR::synapse0x31148a0() {
   return (neuron0x3109b60()*-0.0242113);
}

double NNfunction_ss_cLcR::synapse0x31148e0() {
   return (neuron0x3109ea0()*-0.153313);
}

double NNfunction_ss_cLcR::synapse0x3114920() {
   return (neuron0x310a1e0()*-0.111265);
}

double NNfunction_ss_cLcR::synapse0x3114960() {
   return (neuron0x310a520()*-0.196834);
}

double NNfunction_ss_cLcR::synapse0x31149a0() {
   return (neuron0x310a860()*-0.161487);
}

double NNfunction_ss_cLcR::synapse0x31149e0() {
   return (neuron0x310aba0()*-0.111034);
}

double NNfunction_ss_cLcR::synapse0x3114a20() {
   return (neuron0x310aee0()*0.135142);
}

double NNfunction_ss_cLcR::synapse0x3114a60() {
   return (neuron0x310b220()*0.127948);
}

double NNfunction_ss_cLcR::synapse0x3114aa0() {
   return (neuron0x310b560()*0.477961);
}

double NNfunction_ss_cLcR::synapse0x3114530() {
   return (neuron0x310b8a0()*0.315394);
}

double NNfunction_ss_cLcR::synapse0x3114570() {
   return (neuron0x310be00()*-0.0462172);
}

double NNfunction_ss_cLcR::synapse0x3114bf0() {
   return (neuron0x310c020()*0.0383883);
}

double NNfunction_ss_cLcR::synapse0x3114c30() {
   return (neuron0x310c360()*-0.201448);
}

double NNfunction_ss_cLcR::synapse0x3114c70() {
   return (neuron0x310c6a0()*-0.239232);
}

double NNfunction_ss_cLcR::synapse0x3114cb0() {
   return (neuron0x310c9e0()*0.0409822);
}

double NNfunction_ss_cLcR::synapse0x3114cf0() {
   return (neuron0x310cd20()*-0.0923974);
}

double NNfunction_ss_cLcR::synapse0x3114d30() {
   return (neuron0x310d060()*-0.0459571);
}

double NNfunction_ss_cLcR::synapse0x3114f00() {
   return (neuron0x31084a0()*1.05257);
}

double NNfunction_ss_cLcR::synapse0x311df90() {
   return (neuron0x31087e0()*0.0731855);
}

double NNfunction_ss_cLcR::synapse0x311dfd0() {
   return (neuron0x3108b20()*0.294934);
}

double NNfunction_ss_cLcR::synapse0x311e010() {
   return (neuron0x3108e60()*-0.162487);
}

double NNfunction_ss_cLcR::synapse0x311e050() {
   return (neuron0x31091a0()*-0.196406);
}

double NNfunction_ss_cLcR::synapse0x311e090() {
   return (neuron0x31094e0()*-0.0852908);
}

double NNfunction_ss_cLcR::synapse0x311e0d0() {
   return (neuron0x3109820()*-0.581139);
}

double NNfunction_ss_cLcR::synapse0x311e110() {
   return (neuron0x3109b60()*1.09528);
}

double NNfunction_ss_cLcR::synapse0x311e150() {
   return (neuron0x3109ea0()*-0.0137531);
}

double NNfunction_ss_cLcR::synapse0x311e190() {
   return (neuron0x310a1e0()*0.023026);
}

double NNfunction_ss_cLcR::synapse0x311e1d0() {
   return (neuron0x310a520()*0.441443);
}

double NNfunction_ss_cLcR::synapse0x311e210() {
   return (neuron0x310a860()*0.732017);
}

double NNfunction_ss_cLcR::synapse0x311e250() {
   return (neuron0x310aba0()*-0.524551);
}

double NNfunction_ss_cLcR::synapse0x311e290() {
   return (neuron0x310aee0()*-0.429518);
}

double NNfunction_ss_cLcR::synapse0x311e2d0() {
   return (neuron0x310b220()*-1.96449);
}

double NNfunction_ss_cLcR::synapse0x311e310() {
   return (neuron0x310b560()*0.690578);
}

double NNfunction_ss_cLcR::synapse0x311dde0() {
   return (neuron0x310b8a0()*-1.05115);
}

double NNfunction_ss_cLcR::synapse0x311de20() {
   return (neuron0x310be00()*1.02856);
}

double NNfunction_ss_cLcR::synapse0x311e460() {
   return (neuron0x310c020()*0.592501);
}

double NNfunction_ss_cLcR::synapse0x311e4a0() {
   return (neuron0x310c360()*0.119515);
}

double NNfunction_ss_cLcR::synapse0x311e4e0() {
   return (neuron0x310c6a0()*-1.29036);
}

double NNfunction_ss_cLcR::synapse0x311e520() {
   return (neuron0x310c9e0()*-0.284377);
}

double NNfunction_ss_cLcR::synapse0x311e560() {
   return (neuron0x310cd20()*0.0534075);
}

double NNfunction_ss_cLcR::synapse0x311e5a0() {
   return (neuron0x310d060()*-0.933937);
}

double NNfunction_ss_cLcR::synapse0x311e920() {
   return (neuron0x31084a0()*-0.0197065);
}

double NNfunction_ss_cLcR::synapse0x311e960() {
   return (neuron0x31087e0()*0.0899656);
}

double NNfunction_ss_cLcR::synapse0x311e9a0() {
   return (neuron0x3108b20()*-1.16536);
}

double NNfunction_ss_cLcR::synapse0x311e9e0() {
   return (neuron0x3108e60()*-0.0557076);
}

double NNfunction_ss_cLcR::synapse0x311ea20() {
   return (neuron0x31091a0()*-0.00124828);
}

double NNfunction_ss_cLcR::synapse0x311ea60() {
   return (neuron0x31094e0()*0.0367565);
}

double NNfunction_ss_cLcR::synapse0x311eaa0() {
   return (neuron0x3109820()*0.0173097);
}

double NNfunction_ss_cLcR::synapse0x311eae0() {
   return (neuron0x3109b60()*0.00200698);
}

double NNfunction_ss_cLcR::synapse0x311eb20() {
   return (neuron0x3109ea0()*0.0513295);
}

double NNfunction_ss_cLcR::synapse0x311eb60() {
   return (neuron0x310a1e0()*0.0198353);
}

double NNfunction_ss_cLcR::synapse0x311eba0() {
   return (neuron0x310a520()*0.021699);
}

double NNfunction_ss_cLcR::synapse0x311ebe0() {
   return (neuron0x310a860()*0.0780658);
}

double NNfunction_ss_cLcR::synapse0x311ec20() {
   return (neuron0x310aba0()*0.307328);
}

double NNfunction_ss_cLcR::synapse0x311ec60() {
   return (neuron0x310aee0()*-0.112692);
}

double NNfunction_ss_cLcR::synapse0x311eca0() {
   return (neuron0x310b220()*-0.0358701);
}

double NNfunction_ss_cLcR::synapse0x311ece0() {
   return (neuron0x310b560()*-0.0991552);
}

double NNfunction_ss_cLcR::synapse0x311e770() {
   return (neuron0x310b8a0()*-0.0897093);
}

double NNfunction_ss_cLcR::synapse0x311e7b0() {
   return (neuron0x310be00()*0.00338387);
}

double NNfunction_ss_cLcR::synapse0x311ee30() {
   return (neuron0x310c020()*0.00431381);
}

double NNfunction_ss_cLcR::synapse0x311ee70() {
   return (neuron0x310c360()*-0.0219674);
}

double NNfunction_ss_cLcR::synapse0x311eeb0() {
   return (neuron0x310c6a0()*0.0829969);
}

double NNfunction_ss_cLcR::synapse0x311eef0() {
   return (neuron0x310c9e0()*0.0187317);
}

double NNfunction_ss_cLcR::synapse0x311ef30() {
   return (neuron0x310cd20()*0.0125959);
}

double NNfunction_ss_cLcR::synapse0x311ef70() {
   return (neuron0x310d060()*0.0103199);
}

double NNfunction_ss_cLcR::synapse0x311f2f0() {
   return (neuron0x31084a0()*-0.765688);
}

double NNfunction_ss_cLcR::synapse0x311f330() {
   return (neuron0x31087e0()*1.37323);
}

double NNfunction_ss_cLcR::synapse0x311f370() {
   return (neuron0x3108b20()*-0.631478);
}

double NNfunction_ss_cLcR::synapse0x311f3b0() {
   return (neuron0x3108e60()*-0.256555);
}

double NNfunction_ss_cLcR::synapse0x311f3f0() {
   return (neuron0x31091a0()*0.40622);
}

double NNfunction_ss_cLcR::synapse0x311f430() {
   return (neuron0x31094e0()*-0.0483378);
}

double NNfunction_ss_cLcR::synapse0x311f470() {
   return (neuron0x3109820()*-0.524027);
}

double NNfunction_ss_cLcR::synapse0x311f4b0() {
   return (neuron0x3109b60()*-0.511171);
}

double NNfunction_ss_cLcR::synapse0x311f4f0() {
   return (neuron0x3109ea0()*0.394);
}

double NNfunction_ss_cLcR::synapse0x311f530() {
   return (neuron0x310a1e0()*1.13827);
}

double NNfunction_ss_cLcR::synapse0x311f570() {
   return (neuron0x310a520()*-0.273999);
}

double NNfunction_ss_cLcR::synapse0x311f5b0() {
   return (neuron0x310a860()*-0.129916);
}

double NNfunction_ss_cLcR::synapse0x311f5f0() {
   return (neuron0x310aba0()*-0.329278);
}

double NNfunction_ss_cLcR::synapse0x311f630() {
   return (neuron0x310aee0()*-0.0604852);
}

double NNfunction_ss_cLcR::synapse0x311f670() {
   return (neuron0x310b220()*0.150553);
}

double NNfunction_ss_cLcR::synapse0x311f6b0() {
   return (neuron0x310b560()*-0.194469);
}

double NNfunction_ss_cLcR::synapse0x311f140() {
   return (neuron0x310b8a0()*-0.672099);
}

double NNfunction_ss_cLcR::synapse0x311f180() {
   return (neuron0x310be00()*-0.505366);
}

double NNfunction_ss_cLcR::synapse0x311f800() {
   return (neuron0x310c020()*0.201108);
}

double NNfunction_ss_cLcR::synapse0x311f840() {
   return (neuron0x310c360()*0.237551);
}

double NNfunction_ss_cLcR::synapse0x311f880() {
   return (neuron0x310c6a0()*-0.806443);
}

double NNfunction_ss_cLcR::synapse0x311f8c0() {
   return (neuron0x310c9e0()*-0.367767);
}

double NNfunction_ss_cLcR::synapse0x311f900() {
   return (neuron0x310cd20()*1.25357);
}

double NNfunction_ss_cLcR::synapse0x311f940() {
   return (neuron0x310d060()*0.234394);
}

double NNfunction_ss_cLcR::synapse0x311fcc0() {
   return (neuron0x31084a0()*0.00258815);
}

double NNfunction_ss_cLcR::synapse0x311fd00() {
   return (neuron0x31087e0()*-0.00233878);
}

double NNfunction_ss_cLcR::synapse0x311fd40() {
   return (neuron0x3108b20()*-0.0251542);
}

double NNfunction_ss_cLcR::synapse0x311fd80() {
   return (neuron0x3108e60()*-4.40324);
}

double NNfunction_ss_cLcR::synapse0x311fdc0() {
   return (neuron0x31091a0()*0.00321036);
}

double NNfunction_ss_cLcR::synapse0x311fe00() {
   return (neuron0x31094e0()*-0.00142849);
}

double NNfunction_ss_cLcR::synapse0x311fe40() {
   return (neuron0x3109820()*0.00245565);
}

double NNfunction_ss_cLcR::synapse0x311fe80() {
   return (neuron0x3109b60()*-0.00569093);
}

double NNfunction_ss_cLcR::synapse0x311fec0() {
   return (neuron0x3109ea0()*0.00255929);
}

double NNfunction_ss_cLcR::synapse0x311ff00() {
   return (neuron0x310a1e0()*-0.00804063);
}

double NNfunction_ss_cLcR::synapse0x311ff40() {
   return (neuron0x310a520()*0.00903746);
}

double NNfunction_ss_cLcR::synapse0x311ff80() {
   return (neuron0x310a860()*0.0152116);
}

double NNfunction_ss_cLcR::synapse0x311ffc0() {
   return (neuron0x310aba0()*0.0599696);
}

double NNfunction_ss_cLcR::synapse0x3120000() {
   return (neuron0x310aee0()*0.0267297);
}

double NNfunction_ss_cLcR::synapse0x3120040() {
   return (neuron0x310b220()*0.00346585);
}

double NNfunction_ss_cLcR::synapse0x3120080() {
   return (neuron0x310b560()*0.106579);
}

double NNfunction_ss_cLcR::synapse0x311fb10() {
   return (neuron0x310b8a0()*0.0196938);
}

double NNfunction_ss_cLcR::synapse0x311fb50() {
   return (neuron0x310be00()*0.00147435);
}

double NNfunction_ss_cLcR::synapse0x31201d0() {
   return (neuron0x310c020()*0.0392589);
}

double NNfunction_ss_cLcR::synapse0x3120210() {
   return (neuron0x310c360()*-0.0141234);
}

double NNfunction_ss_cLcR::synapse0x3120250() {
   return (neuron0x310c6a0()*-0.026104);
}

double NNfunction_ss_cLcR::synapse0x3120290() {
   return (neuron0x310c9e0()*-0.00266532);
}

double NNfunction_ss_cLcR::synapse0x31202d0() {
   return (neuron0x310cd20()*-0.0177416);
}

double NNfunction_ss_cLcR::synapse0x3120310() {
   return (neuron0x310d060()*0.0177003);
}

double NNfunction_ss_cLcR::synapse0x3120690() {
   return (neuron0x31084a0()*-0.108953);
}

double NNfunction_ss_cLcR::synapse0x31206d0() {
   return (neuron0x31087e0()*-0.263611);
}

double NNfunction_ss_cLcR::synapse0x3120710() {
   return (neuron0x3108b20()*-0.28901);
}

double NNfunction_ss_cLcR::synapse0x3120750() {
   return (neuron0x3108e60()*0.554461);
}

double NNfunction_ss_cLcR::synapse0x3120790() {
   return (neuron0x31091a0()*0.406182);
}

double NNfunction_ss_cLcR::synapse0x31207d0() {
   return (neuron0x31094e0()*-0.109288);
}

double NNfunction_ss_cLcR::synapse0x3120810() {
   return (neuron0x3109820()*-0.11881);
}

double NNfunction_ss_cLcR::synapse0x3120850() {
   return (neuron0x3109b60()*0.146307);
}

double NNfunction_ss_cLcR::synapse0x3120890() {
   return (neuron0x3109ea0()*0.272732);
}

double NNfunction_ss_cLcR::synapse0x31208d0() {
   return (neuron0x310a1e0()*0.102583);
}

double NNfunction_ss_cLcR::synapse0x3120910() {
   return (neuron0x310a520()*0.0163209);
}

double NNfunction_ss_cLcR::synapse0x3120950() {
   return (neuron0x310a860()*0.0159247);
}

double NNfunction_ss_cLcR::synapse0x3120990() {
   return (neuron0x310aba0()*-0.053622);
}

double NNfunction_ss_cLcR::synapse0x31209d0() {
   return (neuron0x310aee0()*-0.625701);
}

double NNfunction_ss_cLcR::synapse0x3120a10() {
   return (neuron0x310b220()*-0.101974);
}

double NNfunction_ss_cLcR::synapse0x3120a50() {
   return (neuron0x310b560()*0.130634);
}

double NNfunction_ss_cLcR::synapse0x31204e0() {
   return (neuron0x310b8a0()*0.965541);
}

double NNfunction_ss_cLcR::synapse0x3120520() {
   return (neuron0x310be00()*-1.41006);
}

double NNfunction_ss_cLcR::synapse0x3120ba0() {
   return (neuron0x310c020()*-0.466248);
}

double NNfunction_ss_cLcR::synapse0x3120be0() {
   return (neuron0x310c360()*0.402763);
}

double NNfunction_ss_cLcR::synapse0x3120c20() {
   return (neuron0x310c6a0()*0.203181);
}

double NNfunction_ss_cLcR::synapse0x3120c60() {
   return (neuron0x310c9e0()*0.782139);
}

double NNfunction_ss_cLcR::synapse0x3120ca0() {
   return (neuron0x310cd20()*-0.272526);
}

double NNfunction_ss_cLcR::synapse0x3120ce0() {
   return (neuron0x310d060()*0.319735);
}

double NNfunction_ss_cLcR::synapse0x3121060() {
   return (neuron0x31084a0()*0.208778);
}

double NNfunction_ss_cLcR::synapse0x31210a0() {
   return (neuron0x31087e0()*0.319833);
}

double NNfunction_ss_cLcR::synapse0x31210e0() {
   return (neuron0x3108b20()*-0.0199875);
}

double NNfunction_ss_cLcR::synapse0x3121120() {
   return (neuron0x3108e60()*1.27764);
}

double NNfunction_ss_cLcR::synapse0x3121160() {
   return (neuron0x31091a0()*0.952521);
}

double NNfunction_ss_cLcR::synapse0x31211a0() {
   return (neuron0x31094e0()*-0.180158);
}

double NNfunction_ss_cLcR::synapse0x31211e0() {
   return (neuron0x3109820()*-0.348081);
}

double NNfunction_ss_cLcR::synapse0x3121220() {
   return (neuron0x3109b60()*-1.05486);
}

double NNfunction_ss_cLcR::synapse0x3121260() {
   return (neuron0x3109ea0()*-0.185566);
}

double NNfunction_ss_cLcR::synapse0x31212a0() {
   return (neuron0x310a1e0()*-0.682401);
}

double NNfunction_ss_cLcR::synapse0x31212e0() {
   return (neuron0x310a520()*-0.172614);
}

double NNfunction_ss_cLcR::synapse0x3121320() {
   return (neuron0x310a860()*0.396462);
}

double NNfunction_ss_cLcR::synapse0x3121360() {
   return (neuron0x310aba0()*-0.127268);
}

double NNfunction_ss_cLcR::synapse0x31213a0() {
   return (neuron0x310aee0()*-0.798614);
}

double NNfunction_ss_cLcR::synapse0x31213e0() {
   return (neuron0x310b220()*-0.148679);
}

double NNfunction_ss_cLcR::synapse0x3121420() {
   return (neuron0x310b560()*1.20547);
}

double NNfunction_ss_cLcR::synapse0x3120eb0() {
   return (neuron0x310b8a0()*0.402134);
}

double NNfunction_ss_cLcR::synapse0x3120ef0() {
   return (neuron0x310be00()*0.407905);
}

double NNfunction_ss_cLcR::synapse0x3121570() {
   return (neuron0x310c020()*-0.302677);
}

double NNfunction_ss_cLcR::synapse0x31215b0() {
   return (neuron0x310c360()*-0.0526899);
}

double NNfunction_ss_cLcR::synapse0x31215f0() {
   return (neuron0x310c6a0()*0.150632);
}

double NNfunction_ss_cLcR::synapse0x3121630() {
   return (neuron0x310c9e0()*-0.171357);
}

double NNfunction_ss_cLcR::synapse0x3121670() {
   return (neuron0x310cd20()*0.720572);
}

double NNfunction_ss_cLcR::synapse0x31216b0() {
   return (neuron0x310d060()*-0.134348);
}

double NNfunction_ss_cLcR::synapse0x3121a30() {
   return (neuron0x31084a0()*-0.0444248);
}

double NNfunction_ss_cLcR::synapse0x3121a70() {
   return (neuron0x31087e0()*-0.018951);
}

double NNfunction_ss_cLcR::synapse0x3121ab0() {
   return (neuron0x3108b20()*0.0322529);
}

double NNfunction_ss_cLcR::synapse0x3121af0() {
   return (neuron0x3108e60()*2.89612);
}

double NNfunction_ss_cLcR::synapse0x3121b30() {
   return (neuron0x31091a0()*-0.0182335);
}

double NNfunction_ss_cLcR::synapse0x3121b70() {
   return (neuron0x31094e0()*-0.0211161);
}

double NNfunction_ss_cLcR::synapse0x3121bb0() {
   return (neuron0x3109820()*-0.00149503);
}

double NNfunction_ss_cLcR::synapse0x3121bf0() {
   return (neuron0x3109b60()*-0.00241277);
}

double NNfunction_ss_cLcR::synapse0x3121c30() {
   return (neuron0x3109ea0()*0.00651932);
}

double NNfunction_ss_cLcR::synapse0x3121c70() {
   return (neuron0x310a1e0()*-0.035137);
}

double NNfunction_ss_cLcR::synapse0x3121cb0() {
   return (neuron0x310a520()*0.0350222);
}

double NNfunction_ss_cLcR::synapse0x3121cf0() {
   return (neuron0x310a860()*-0.0258942);
}

double NNfunction_ss_cLcR::synapse0x3121d30() {
   return (neuron0x310aba0()*-0.141745);
}

double NNfunction_ss_cLcR::synapse0x3121d70() {
   return (neuron0x310aee0()*0.0785964);
}

double NNfunction_ss_cLcR::synapse0x3121db0() {
   return (neuron0x310b220()*-0.0164411);
}

double NNfunction_ss_cLcR::synapse0x3121df0() {
   return (neuron0x310b560()*-0.207886);
}

double NNfunction_ss_cLcR::synapse0x3121880() {
   return (neuron0x310b8a0()*0.043012);
}

double NNfunction_ss_cLcR::synapse0x31218c0() {
   return (neuron0x310be00()*-0.0402431);
}

double NNfunction_ss_cLcR::synapse0x3121f40() {
   return (neuron0x310c020()*-0.0414959);
}

double NNfunction_ss_cLcR::synapse0x3121f80() {
   return (neuron0x310c360()*0.00155869);
}

double NNfunction_ss_cLcR::synapse0x3121fc0() {
   return (neuron0x310c6a0()*-0.00936807);
}

double NNfunction_ss_cLcR::synapse0x3122000() {
   return (neuron0x310c9e0()*0.00661661);
}

double NNfunction_ss_cLcR::synapse0x3122040() {
   return (neuron0x310cd20()*0.0147302);
}

double NNfunction_ss_cLcR::synapse0x3122080() {
   return (neuron0x310d060()*0.0368783);
}

double NNfunction_ss_cLcR::synapse0x3122400() {
   return (neuron0x31084a0()*-0.0173515);
}

double NNfunction_ss_cLcR::synapse0x3122440() {
   return (neuron0x31087e0()*0.0500988);
}

double NNfunction_ss_cLcR::synapse0x3122480() {
   return (neuron0x3108b20()*-0.0936713);
}

double NNfunction_ss_cLcR::synapse0x31224c0() {
   return (neuron0x3108e60()*0.195676);
}

double NNfunction_ss_cLcR::synapse0x3122500() {
   return (neuron0x31091a0()*-0.062697);
}

double NNfunction_ss_cLcR::synapse0x3122540() {
   return (neuron0x31094e0()*0.0214858);
}

double NNfunction_ss_cLcR::synapse0x3122580() {
   return (neuron0x3109820()*-0.0207332);
}

double NNfunction_ss_cLcR::synapse0x31225c0() {
   return (neuron0x3109b60()*0.000325679);
}

double NNfunction_ss_cLcR::synapse0x3122600() {
   return (neuron0x3109ea0()*0.0192296);
}

double NNfunction_ss_cLcR::synapse0x3122640() {
   return (neuron0x310a1e0()*0.124104);
}

double NNfunction_ss_cLcR::synapse0x3122680() {
   return (neuron0x310a520()*-0.0351912);
}

double NNfunction_ss_cLcR::synapse0x31226c0() {
   return (neuron0x310a860()*-0.0437494);
}

double NNfunction_ss_cLcR::synapse0x3122700() {
   return (neuron0x310aba0()*1.44975);
}

double NNfunction_ss_cLcR::synapse0x3122740() {
   return (neuron0x310aee0()*0.0617366);
}

double NNfunction_ss_cLcR::synapse0x3122780() {
   return (neuron0x310b220()*-0.0673006);
}

double NNfunction_ss_cLcR::synapse0x31227c0() {
   return (neuron0x310b560()*-0.122156);
}

double NNfunction_ss_cLcR::synapse0x3122250() {
   return (neuron0x310b8a0()*-0.0144674);
}

double NNfunction_ss_cLcR::synapse0x3122290() {
   return (neuron0x310be00()*0.0305389);
}

double NNfunction_ss_cLcR::synapse0x3122910() {
   return (neuron0x310c020()*0.0709243);
}

double NNfunction_ss_cLcR::synapse0x3122950() {
   return (neuron0x310c360()*-0.0157862);
}

double NNfunction_ss_cLcR::synapse0x3122990() {
   return (neuron0x310c6a0()*-0.0217837);
}

double NNfunction_ss_cLcR::synapse0x31229d0() {
   return (neuron0x310c9e0()*-0.0403727);
}

double NNfunction_ss_cLcR::synapse0x3122a10() {
   return (neuron0x310cd20()*0.0470931);
}

double NNfunction_ss_cLcR::synapse0x3122a50() {
   return (neuron0x310d060()*-0.0169529);
}

double NNfunction_ss_cLcR::synapse0x3122dd0() {
   return (neuron0x31084a0()*0.895658);
}

double NNfunction_ss_cLcR::synapse0x31173a0() {
   return (neuron0x31087e0()*0.977876);
}

double NNfunction_ss_cLcR::synapse0x31173e0() {
   return (neuron0x3108b20()*-0.719856);
}

double NNfunction_ss_cLcR::synapse0x3117420() {
   return (neuron0x3108e60()*0.502561);
}

double NNfunction_ss_cLcR::synapse0x3117670() {
   return (neuron0x31091a0()*0.205969);
}

double NNfunction_ss_cLcR::synapse0x31176b0() {
   return (neuron0x31094e0()*-0.947383);
}

double NNfunction_ss_cLcR::synapse0x31176f0() {
   return (neuron0x3109820()*0.384523);
}

double NNfunction_ss_cLcR::synapse0x3117940() {
   return (neuron0x3109b60()*0.00842146);
}

double NNfunction_ss_cLcR::synapse0x3117980() {
   return (neuron0x3109ea0()*1.2399);
}

double NNfunction_ss_cLcR::synapse0x3117bd0() {
   return (neuron0x310a1e0()*-0.682519);
}

double NNfunction_ss_cLcR::synapse0x3117c10() {
   return (neuron0x310a520()*-0.678647);
}

double NNfunction_ss_cLcR::synapse0x3117c50() {
   return (neuron0x310a860()*-0.0296053);
}

double NNfunction_ss_cLcR::synapse0x3117ea0() {
   return (neuron0x310aba0()*-0.321806);
}

double NNfunction_ss_cLcR::synapse0x3117ee0() {
   return (neuron0x310aee0()*0.0728741);
}

double NNfunction_ss_cLcR::synapse0x3118130() {
   return (neuron0x310b220()*-0.4475);
}

double NNfunction_ss_cLcR::synapse0x3118170() {
   return (neuron0x310b560()*0.10197);
}

double NNfunction_ss_cLcR::synapse0x3122c20() {
   return (neuron0x310b8a0()*0.0364431);
}

double NNfunction_ss_cLcR::synapse0x3122c60() {
   return (neuron0x310be00()*0.0621676);
}

double NNfunction_ss_cLcR::synapse0x31182c0() {
   return (neuron0x310c020()*-0.297033);
}

double NNfunction_ss_cLcR::synapse0x31187d0() {
   return (neuron0x310c360()*-0.356189);
}

double NNfunction_ss_cLcR::synapse0x3118810() {
   return (neuron0x310c6a0()*0.274018);
}

double NNfunction_ss_cLcR::synapse0x3118850() {
   return (neuron0x310c9e0()*0.275451);
}

double NNfunction_ss_cLcR::synapse0x3118aa0() {
   return (neuron0x310cd20()*0.0255049);
}

double NNfunction_ss_cLcR::synapse0x3118ae0() {
   return (neuron0x310d060()*-0.544242);
}

double NNfunction_ss_cLcR::synapse0x3118390() {
   return (neuron0x31084a0()*-0.233339);
}

double NNfunction_ss_cLcR::synapse0x31183d0() {
   return (neuron0x31087e0()*0.794219);
}

double NNfunction_ss_cLcR::synapse0x3118410() {
   return (neuron0x3108b20()*0.462852);
}

double NNfunction_ss_cLcR::synapse0x3118450() {
   return (neuron0x3108e60()*-0.472552);
}

double NNfunction_ss_cLcR::synapse0x3118dd0() {
   return (neuron0x31091a0()*-0.21698);
}

double NNfunction_ss_cLcR::synapse0x3125120() {
   return (neuron0x31094e0()*1.38424);
}

double NNfunction_ss_cLcR::synapse0x3125160() {
   return (neuron0x3109820()*-0.480488);
}

double NNfunction_ss_cLcR::synapse0x31251a0() {
   return (neuron0x3109b60()*-0.0308374);
}

double NNfunction_ss_cLcR::synapse0x31251e0() {
   return (neuron0x3109ea0()*-0.78575);
}

double NNfunction_ss_cLcR::synapse0x3125220() {
   return (neuron0x310a1e0()*-0.173523);
}

double NNfunction_ss_cLcR::synapse0x3125260() {
   return (neuron0x310a520()*-0.555577);
}

double NNfunction_ss_cLcR::synapse0x31252a0() {
   return (neuron0x310a860()*-0.0568188);
}

double NNfunction_ss_cLcR::synapse0x31252e0() {
   return (neuron0x310aba0()*-1.09556);
}

double NNfunction_ss_cLcR::synapse0x3125320() {
   return (neuron0x310aee0()*0.478815);
}

double NNfunction_ss_cLcR::synapse0x3125360() {
   return (neuron0x310b220()*-0.219531);
}

double NNfunction_ss_cLcR::synapse0x31253a0() {
   return (neuron0x310b560()*-0.620728);
}

double NNfunction_ss_cLcR::synapse0x3118cb0() {
   return (neuron0x310b8a0()*-0.440519);
}

double NNfunction_ss_cLcR::synapse0x3118cf0() {
   return (neuron0x310be00()*0.326605);
}

double NNfunction_ss_cLcR::synapse0x31254f0() {
   return (neuron0x310c020()*-0.266057);
}

double NNfunction_ss_cLcR::synapse0x3125530() {
   return (neuron0x310c360()*-0.105144);
}

double NNfunction_ss_cLcR::synapse0x3125570() {
   return (neuron0x310c6a0()*0.165413);
}

double NNfunction_ss_cLcR::synapse0x31255b0() {
   return (neuron0x310c9e0()*0.680042);
}

double NNfunction_ss_cLcR::synapse0x31255f0() {
   return (neuron0x310cd20()*0.252207);
}

double NNfunction_ss_cLcR::synapse0x3125630() {
   return (neuron0x310d060()*-0.399584);
}

double NNfunction_ss_cLcR::synapse0x31259b0() {
   return (neuron0x31084a0()*0.241321);
}

double NNfunction_ss_cLcR::synapse0x31259f0() {
   return (neuron0x31087e0()*-0.0462034);
}

double NNfunction_ss_cLcR::synapse0x3125a30() {
   return (neuron0x3108b20()*0.429813);
}

double NNfunction_ss_cLcR::synapse0x3125a70() {
   return (neuron0x3108e60()*2.20344);
}

double NNfunction_ss_cLcR::synapse0x3125ab0() {
   return (neuron0x31091a0()*-0.355534);
}

double NNfunction_ss_cLcR::synapse0x3125af0() {
   return (neuron0x31094e0()*-0.307868);
}

double NNfunction_ss_cLcR::synapse0x3125b30() {
   return (neuron0x3109820()*0.175654);
}

double NNfunction_ss_cLcR::synapse0x3125b70() {
   return (neuron0x3109b60()*-0.143851);
}

double NNfunction_ss_cLcR::synapse0x3125bb0() {
   return (neuron0x3109ea0()*0.286802);
}

double NNfunction_ss_cLcR::synapse0x3125bf0() {
   return (neuron0x310a1e0()*0.00830377);
}

double NNfunction_ss_cLcR::synapse0x3125c30() {
   return (neuron0x310a520()*0.13319);
}

double NNfunction_ss_cLcR::synapse0x3125c70() {
   return (neuron0x310a860()*0.0733349);
}

double NNfunction_ss_cLcR::synapse0x3125cb0() {
   return (neuron0x310aba0()*-1.10514);
}

double NNfunction_ss_cLcR::synapse0x3125cf0() {
   return (neuron0x310aee0()*-0.422477);
}

double NNfunction_ss_cLcR::synapse0x3125d30() {
   return (neuron0x310b220()*0.0735753);
}

double NNfunction_ss_cLcR::synapse0x3125d70() {
   return (neuron0x310b560()*-0.87933);
}

double NNfunction_ss_cLcR::synapse0x3125800() {
   return (neuron0x310b8a0()*0.0265696);
}

double NNfunction_ss_cLcR::synapse0x3125840() {
   return (neuron0x310be00()*0.00940407);
}

double NNfunction_ss_cLcR::synapse0x3125ec0() {
   return (neuron0x310c020()*0.192958);
}

double NNfunction_ss_cLcR::synapse0x3125f00() {
   return (neuron0x310c360()*0.130458);
}

double NNfunction_ss_cLcR::synapse0x3125f40() {
   return (neuron0x310c6a0()*-0.0147569);
}

double NNfunction_ss_cLcR::synapse0x3125f80() {
   return (neuron0x310c9e0()*0.292549);
}

double NNfunction_ss_cLcR::synapse0x3125fc0() {
   return (neuron0x310cd20()*0.31892);
}

double NNfunction_ss_cLcR::synapse0x3126000() {
   return (neuron0x310d060()*0.352575);
}

double NNfunction_ss_cLcR::synapse0x3126380() {
   return (neuron0x31084a0()*0.13227);
}

double NNfunction_ss_cLcR::synapse0x31263c0() {
   return (neuron0x31087e0()*-0.251988);
}

double NNfunction_ss_cLcR::synapse0x3126400() {
   return (neuron0x3108b20()*-0.664147);
}

double NNfunction_ss_cLcR::synapse0x3126440() {
   return (neuron0x3108e60()*0.511172);
}

double NNfunction_ss_cLcR::synapse0x3126480() {
   return (neuron0x31091a0()*-0.0449232);
}

double NNfunction_ss_cLcR::synapse0x31264c0() {
   return (neuron0x31094e0()*0.269051);
}

double NNfunction_ss_cLcR::synapse0x3126500() {
   return (neuron0x3109820()*0.424159);
}

double NNfunction_ss_cLcR::synapse0x3126540() {
   return (neuron0x3109b60()*0.356317);
}

double NNfunction_ss_cLcR::synapse0x3126580() {
   return (neuron0x3109ea0()*0.000976847);
}

double NNfunction_ss_cLcR::synapse0x31265c0() {
   return (neuron0x310a1e0()*-0.131013);
}

double NNfunction_ss_cLcR::synapse0x3126600() {
   return (neuron0x310a520()*-0.00311957);
}

double NNfunction_ss_cLcR::synapse0x3126640() {
   return (neuron0x310a860()*-0.251889);
}

double NNfunction_ss_cLcR::synapse0x3126680() {
   return (neuron0x310aba0()*-1.21078);
}

double NNfunction_ss_cLcR::synapse0x31266c0() {
   return (neuron0x310aee0()*0.389847);
}

double NNfunction_ss_cLcR::synapse0x3126700() {
   return (neuron0x310b220()*0.180295);
}

double NNfunction_ss_cLcR::synapse0x3126740() {
   return (neuron0x310b560()*-1.03215);
}

double NNfunction_ss_cLcR::synapse0x31261d0() {
   return (neuron0x310b8a0()*0.102606);
}

double NNfunction_ss_cLcR::synapse0x3126210() {
   return (neuron0x310be00()*-0.0786428);
}

double NNfunction_ss_cLcR::synapse0x3126890() {
   return (neuron0x310c020()*-0.161606);
}

double NNfunction_ss_cLcR::synapse0x31268d0() {
   return (neuron0x310c360()*-0.361341);
}

double NNfunction_ss_cLcR::synapse0x3126910() {
   return (neuron0x310c6a0()*-0.0813581);
}

double NNfunction_ss_cLcR::synapse0x3126950() {
   return (neuron0x310c9e0()*0.130503);
}

double NNfunction_ss_cLcR::synapse0x3126990() {
   return (neuron0x310cd20()*-0.0987066);
}

double NNfunction_ss_cLcR::synapse0x31269d0() {
   return (neuron0x310d060()*-0.087843);
}

double NNfunction_ss_cLcR::synapse0x3126d50() {
   return (neuron0x31084a0()*1.23726);
}

double NNfunction_ss_cLcR::synapse0x3126d90() {
   return (neuron0x31087e0()*-1.01659);
}

double NNfunction_ss_cLcR::synapse0x3126dd0() {
   return (neuron0x3108b20()*-0.272717);
}

double NNfunction_ss_cLcR::synapse0x3126e10() {
   return (neuron0x3108e60()*0.372835);
}

double NNfunction_ss_cLcR::synapse0x3126e50() {
   return (neuron0x31091a0()*-0.316555);
}

double NNfunction_ss_cLcR::synapse0x3126e90() {
   return (neuron0x31094e0()*0.0692025);
}

double NNfunction_ss_cLcR::synapse0x3126ed0() {
   return (neuron0x3109820()*0.532116);
}

double NNfunction_ss_cLcR::synapse0x3126f10() {
   return (neuron0x3109b60()*-0.360285);
}

double NNfunction_ss_cLcR::synapse0x3126f50() {
   return (neuron0x3109ea0()*0.591925);
}

double NNfunction_ss_cLcR::synapse0x3126f90() {
   return (neuron0x310a1e0()*0.163925);
}

double NNfunction_ss_cLcR::synapse0x3126fd0() {
   return (neuron0x310a520()*0.550783);
}

double NNfunction_ss_cLcR::synapse0x3127010() {
   return (neuron0x310a860()*0.390768);
}

double NNfunction_ss_cLcR::synapse0x3127050() {
   return (neuron0x310aba0()*-0.387132);
}

double NNfunction_ss_cLcR::synapse0x3127090() {
   return (neuron0x310aee0()*-0.861407);
}

double NNfunction_ss_cLcR::synapse0x31270d0() {
   return (neuron0x310b220()*-0.329571);
}

double NNfunction_ss_cLcR::synapse0x3127110() {
   return (neuron0x310b560()*-0.0569547);
}

double NNfunction_ss_cLcR::synapse0x3126ba0() {
   return (neuron0x310b8a0()*0.253587);
}

double NNfunction_ss_cLcR::synapse0x3126be0() {
   return (neuron0x310be00()*-0.0933344);
}

double NNfunction_ss_cLcR::synapse0x3127260() {
   return (neuron0x310c020()*0.653632);
}

double NNfunction_ss_cLcR::synapse0x31272a0() {
   return (neuron0x310c360()*0.74205);
}

double NNfunction_ss_cLcR::synapse0x31272e0() {
   return (neuron0x310c6a0()*-0.152666);
}

double NNfunction_ss_cLcR::synapse0x3127320() {
   return (neuron0x310c9e0()*0.144048);
}

double NNfunction_ss_cLcR::synapse0x3127360() {
   return (neuron0x310cd20()*-0.15945);
}

double NNfunction_ss_cLcR::synapse0x31273a0() {
   return (neuron0x310d060()*0.127986);
}

double NNfunction_ss_cLcR::synapse0x3127720() {
   return (neuron0x31084a0()*-0.0187835);
}

double NNfunction_ss_cLcR::synapse0x3127760() {
   return (neuron0x31087e0()*0.10754);
}

double NNfunction_ss_cLcR::synapse0x31277a0() {
   return (neuron0x3108b20()*0.0897244);
}

double NNfunction_ss_cLcR::synapse0x31277e0() {
   return (neuron0x3108e60()*-1.45692);
}

double NNfunction_ss_cLcR::synapse0x3127820() {
   return (neuron0x31091a0()*-0.0409547);
}

double NNfunction_ss_cLcR::synapse0x3127860() {
   return (neuron0x31094e0()*-0.0792839);
}

double NNfunction_ss_cLcR::synapse0x31278a0() {
   return (neuron0x3109820()*-0.0798743);
}

double NNfunction_ss_cLcR::synapse0x31278e0() {
   return (neuron0x3109b60()*-0.0427385);
}

double NNfunction_ss_cLcR::synapse0x3127920() {
   return (neuron0x3109ea0()*-0.0411337);
}

double NNfunction_ss_cLcR::synapse0x3127960() {
   return (neuron0x310a1e0()*-0.0155952);
}

double NNfunction_ss_cLcR::synapse0x31279a0() {
   return (neuron0x310a520()*0.0429989);
}

double NNfunction_ss_cLcR::synapse0x31279e0() {
   return (neuron0x310a860()*-0.0306388);
}

double NNfunction_ss_cLcR::synapse0x3127a20() {
   return (neuron0x310aba0()*0.536229);
}

double NNfunction_ss_cLcR::synapse0x3127a60() {
   return (neuron0x310aee0()*0.0307134);
}

double NNfunction_ss_cLcR::synapse0x3127aa0() {
   return (neuron0x310b220()*0.0641263);
}

double NNfunction_ss_cLcR::synapse0x3127ae0() {
   return (neuron0x310b560()*0.16394);
}

double NNfunction_ss_cLcR::synapse0x3127570() {
   return (neuron0x310b8a0()*0.00680176);
}

double NNfunction_ss_cLcR::synapse0x31275b0() {
   return (neuron0x310be00()*-0.0267497);
}

double NNfunction_ss_cLcR::synapse0x3127c30() {
   return (neuron0x310c020()*-0.00371327);
}

double NNfunction_ss_cLcR::synapse0x3127c70() {
   return (neuron0x310c360()*0.0740429);
}

double NNfunction_ss_cLcR::synapse0x3127cb0() {
   return (neuron0x310c6a0()*-0.0158543);
}

double NNfunction_ss_cLcR::synapse0x3127cf0() {
   return (neuron0x310c9e0()*0.00704648);
}

double NNfunction_ss_cLcR::synapse0x3127d30() {
   return (neuron0x310cd20()*-0.00726025);
}

double NNfunction_ss_cLcR::synapse0x3127d70() {
   return (neuron0x310d060()*0.0714877);
}

double NNfunction_ss_cLcR::synapse0x31280f0() {
   return (neuron0x31084a0()*-0.07793);
}

double NNfunction_ss_cLcR::synapse0x3128130() {
   return (neuron0x31087e0()*-0.360086);
}

double NNfunction_ss_cLcR::synapse0x3128170() {
   return (neuron0x3108b20()*-0.00583032);
}

double NNfunction_ss_cLcR::synapse0x31281b0() {
   return (neuron0x3108e60()*1.5323);
}

double NNfunction_ss_cLcR::synapse0x31281f0() {
   return (neuron0x31091a0()*-0.0163647);
}

double NNfunction_ss_cLcR::synapse0x3128230() {
   return (neuron0x31094e0()*-0.042242);
}

double NNfunction_ss_cLcR::synapse0x3128270() {
   return (neuron0x3109820()*-0.0674019);
}

double NNfunction_ss_cLcR::synapse0x31282b0() {
   return (neuron0x3109b60()*0.0236067);
}

double NNfunction_ss_cLcR::synapse0x31282f0() {
   return (neuron0x3109ea0()*0.153356);
}

double NNfunction_ss_cLcR::synapse0x3128330() {
   return (neuron0x310a1e0()*0.0907487);
}

double NNfunction_ss_cLcR::synapse0x3128370() {
   return (neuron0x310a520()*0.174695);
}

double NNfunction_ss_cLcR::synapse0x31283b0() {
   return (neuron0x310a860()*0.12972);
}

double NNfunction_ss_cLcR::synapse0x31283f0() {
   return (neuron0x310aba0()*-0.0868896);
}

double NNfunction_ss_cLcR::synapse0x3128430() {
   return (neuron0x310aee0()*-0.118728);
}

double NNfunction_ss_cLcR::synapse0x3128470() {
   return (neuron0x310b220()*-0.086724);
}

double NNfunction_ss_cLcR::synapse0x31284b0() {
   return (neuron0x310b560()*-0.511557);
}

double NNfunction_ss_cLcR::synapse0x3127f40() {
   return (neuron0x310b8a0()*-0.184242);
}

double NNfunction_ss_cLcR::synapse0x3127f80() {
   return (neuron0x310be00()*0.075179);
}

double NNfunction_ss_cLcR::synapse0x3128600() {
   return (neuron0x310c020()*-0.0101714);
}

double NNfunction_ss_cLcR::synapse0x3128640() {
   return (neuron0x310c360()*0.163005);
}

double NNfunction_ss_cLcR::synapse0x3128680() {
   return (neuron0x310c6a0()*0.14781);
}

double NNfunction_ss_cLcR::synapse0x31286c0() {
   return (neuron0x310c9e0()*-0.0141983);
}

double NNfunction_ss_cLcR::synapse0x3128700() {
   return (neuron0x310cd20()*0.0604268);
}

double NNfunction_ss_cLcR::synapse0x3128740() {
   return (neuron0x310d060()*0.0359572);
}

double NNfunction_ss_cLcR::synapse0x3128ac0() {
   return (neuron0x31084a0()*-0.163531);
}

double NNfunction_ss_cLcR::synapse0x3128b00() {
   return (neuron0x31087e0()*-0.480469);
}

double NNfunction_ss_cLcR::synapse0x3128b40() {
   return (neuron0x3108b20()*0.00863048);
}

double NNfunction_ss_cLcR::synapse0x3128b80() {
   return (neuron0x3108e60()*0.0862285);
}

double NNfunction_ss_cLcR::synapse0x3128bc0() {
   return (neuron0x31091a0()*0.582935);
}

double NNfunction_ss_cLcR::synapse0x3128c00() {
   return (neuron0x31094e0()*0.340917);
}

double NNfunction_ss_cLcR::synapse0x3128c40() {
   return (neuron0x3109820()*-0.461553);
}

double NNfunction_ss_cLcR::synapse0x3128c80() {
   return (neuron0x3109b60()*-0.209483);
}

double NNfunction_ss_cLcR::synapse0x3128cc0() {
   return (neuron0x3109ea0()*-0.602393);
}

double NNfunction_ss_cLcR::synapse0x3128d00() {
   return (neuron0x310a1e0()*0.434013);
}

double NNfunction_ss_cLcR::synapse0x3128d40() {
   return (neuron0x310a520()*0.476163);
}

double NNfunction_ss_cLcR::synapse0x3128d80() {
   return (neuron0x310a860()*-0.456304);
}

double NNfunction_ss_cLcR::synapse0x3128dc0() {
   return (neuron0x310aba0()*0.189877);
}

double NNfunction_ss_cLcR::synapse0x3128e00() {
   return (neuron0x310aee0()*-0.473123);
}

double NNfunction_ss_cLcR::synapse0x3128e40() {
   return (neuron0x310b220()*-0.062261);
}

double NNfunction_ss_cLcR::synapse0x3128e80() {
   return (neuron0x310b560()*-0.122516);
}

double NNfunction_ss_cLcR::synapse0x3128910() {
   return (neuron0x310b8a0()*0.0616174);
}

double NNfunction_ss_cLcR::synapse0x3128950() {
   return (neuron0x310be00()*-0.584326);
}

double NNfunction_ss_cLcR::synapse0x3128fd0() {
   return (neuron0x310c020()*0.197502);
}

double NNfunction_ss_cLcR::synapse0x3129010() {
   return (neuron0x310c360()*0.171615);
}

double NNfunction_ss_cLcR::synapse0x3129050() {
   return (neuron0x310c6a0()*0.487464);
}

double NNfunction_ss_cLcR::synapse0x3129090() {
   return (neuron0x310c9e0()*-0.331725);
}

double NNfunction_ss_cLcR::synapse0x31290d0() {
   return (neuron0x310cd20()*-0.310806);
}

double NNfunction_ss_cLcR::synapse0x3129110() {
   return (neuron0x310d060()*0.283081);
}

double NNfunction_ss_cLcR::synapse0x3129490() {
   return (neuron0x31084a0()*0.0492132);
}

double NNfunction_ss_cLcR::synapse0x31294d0() {
   return (neuron0x31087e0()*0.156172);
}

double NNfunction_ss_cLcR::synapse0x3129510() {
   return (neuron0x3108b20()*0.0110822);
}

double NNfunction_ss_cLcR::synapse0x3129550() {
   return (neuron0x3108e60()*1.15291);
}

double NNfunction_ss_cLcR::synapse0x3129590() {
   return (neuron0x31091a0()*0.0143377);
}

double NNfunction_ss_cLcR::synapse0x31295d0() {
   return (neuron0x31094e0()*0.0665891);
}

double NNfunction_ss_cLcR::synapse0x3129610() {
   return (neuron0x3109820()*0.0212421);
}

double NNfunction_ss_cLcR::synapse0x3129650() {
   return (neuron0x3109b60()*0.0119672);
}

double NNfunction_ss_cLcR::synapse0x3129690() {
   return (neuron0x3109ea0()*0.00362003);
}

double NNfunction_ss_cLcR::synapse0x31296d0() {
   return (neuron0x310a1e0()*0.0503163);
}

double NNfunction_ss_cLcR::synapse0x3129710() {
   return (neuron0x310a520()*-0.0253397);
}

double NNfunction_ss_cLcR::synapse0x3129750() {
   return (neuron0x310a860()*-0.00190609);
}

double NNfunction_ss_cLcR::synapse0x3129790() {
   return (neuron0x310aba0()*0.429541);
}

double NNfunction_ss_cLcR::synapse0x31297d0() {
   return (neuron0x310aee0()*-0.0969104);
}

double NNfunction_ss_cLcR::synapse0x3129810() {
   return (neuron0x310b220()*0.0331921);
}

double NNfunction_ss_cLcR::synapse0x3129850() {
   return (neuron0x310b560()*0.224768);
}

double NNfunction_ss_cLcR::synapse0x31292e0() {
   return (neuron0x310b8a0()*-0.0740041);
}

double NNfunction_ss_cLcR::synapse0x3129320() {
   return (neuron0x310be00()*0.0872297);
}

double NNfunction_ss_cLcR::synapse0x31299a0() {
   return (neuron0x310c020()*0.0721847);
}

double NNfunction_ss_cLcR::synapse0x31299e0() {
   return (neuron0x310c360()*-0.0425375);
}

double NNfunction_ss_cLcR::synapse0x3129a20() {
   return (neuron0x310c6a0()*0.0311579);
}

double NNfunction_ss_cLcR::synapse0x3129a60() {
   return (neuron0x310c9e0()*-0.0335743);
}

double NNfunction_ss_cLcR::synapse0x3129aa0() {
   return (neuron0x310cd20()*0.000840689);
}

double NNfunction_ss_cLcR::synapse0x3129ae0() {
   return (neuron0x310d060()*-0.0421721);
}

double NNfunction_ss_cLcR::synapse0x3112590() {
   return (neuron0x31084a0()*0.0611669);
}

double NNfunction_ss_cLcR::synapse0x31125d0() {
   return (neuron0x31087e0()*-0.363453);
}

double NNfunction_ss_cLcR::synapse0x3112610() {
   return (neuron0x3108b20()*-0.480259);
}

double NNfunction_ss_cLcR::synapse0x3112650() {
   return (neuron0x3108e60()*0.87439);
}

double NNfunction_ss_cLcR::synapse0x3112690() {
   return (neuron0x31091a0()*0.0732561);
}

double NNfunction_ss_cLcR::synapse0x31126d0() {
   return (neuron0x31094e0()*0.00774818);
}

double NNfunction_ss_cLcR::synapse0x3112710() {
   return (neuron0x3109820()*-0.0910367);
}

double NNfunction_ss_cLcR::synapse0x3112750() {
   return (neuron0x3109b60()*0.0551564);
}

double NNfunction_ss_cLcR::synapse0x312a270() {
   return (neuron0x3109ea0()*-0.366619);
}

double NNfunction_ss_cLcR::synapse0x312a2b0() {
   return (neuron0x310a1e0()*-0.451056);
}

double NNfunction_ss_cLcR::synapse0x312a2f0() {
   return (neuron0x310a520()*-0.00313784);
}

double NNfunction_ss_cLcR::synapse0x312a330() {
   return (neuron0x310a860()*0.584547);
}

double NNfunction_ss_cLcR::synapse0x312a370() {
   return (neuron0x310aba0()*-0.897848);
}

double NNfunction_ss_cLcR::synapse0x312a3b0() {
   return (neuron0x310aee0()*-0.0841528);
}

double NNfunction_ss_cLcR::synapse0x312a3f0() {
   return (neuron0x310b220()*0.263486);
}

double NNfunction_ss_cLcR::synapse0x312a430() {
   return (neuron0x310b560()*0.566873);
}

double NNfunction_ss_cLcR::synapse0x3129cb0() {
   return (neuron0x310b8a0()*0.107611);
}

double NNfunction_ss_cLcR::synapse0x3129cf0() {
   return (neuron0x310be00()*0.309717);
}

double NNfunction_ss_cLcR::synapse0x312a580() {
   return (neuron0x310c020()*-0.113095);
}

double NNfunction_ss_cLcR::synapse0x312a5c0() {
   return (neuron0x310c360()*-0.107113);
}

double NNfunction_ss_cLcR::synapse0x312a600() {
   return (neuron0x310c6a0()*0.146095);
}

double NNfunction_ss_cLcR::synapse0x312a640() {
   return (neuron0x310c9e0()*0.60952);
}

double NNfunction_ss_cLcR::synapse0x312a680() {
   return (neuron0x310cd20()*-0.0845301);
}

double NNfunction_ss_cLcR::synapse0x312a6c0() {
   return (neuron0x310d060()*0.390617);
}

double NNfunction_ss_cLcR::synapse0x312aa40() {
   return (neuron0x31084a0()*0.0353266);
}

double NNfunction_ss_cLcR::synapse0x312aa80() {
   return (neuron0x31087e0()*-0.0202372);
}

double NNfunction_ss_cLcR::synapse0x312aac0() {
   return (neuron0x3108b20()*-0.0257762);
}

double NNfunction_ss_cLcR::synapse0x312ab00() {
   return (neuron0x3108e60()*-0.146361);
}

double NNfunction_ss_cLcR::synapse0x312ab40() {
   return (neuron0x31091a0()*0.0463972);
}

double NNfunction_ss_cLcR::synapse0x312ab80() {
   return (neuron0x31094e0()*0.0444806);
}

double NNfunction_ss_cLcR::synapse0x312abc0() {
   return (neuron0x3109820()*0.0352087);
}

double NNfunction_ss_cLcR::synapse0x312ac00() {
   return (neuron0x3109b60()*-0.00293299);
}

double NNfunction_ss_cLcR::synapse0x312ac40() {
   return (neuron0x3109ea0()*-0.0323489);
}

double NNfunction_ss_cLcR::synapse0x312ac80() {
   return (neuron0x310a1e0()*-0.0136077);
}

double NNfunction_ss_cLcR::synapse0x312acc0() {
   return (neuron0x310a520()*-0.0271777);
}

double NNfunction_ss_cLcR::synapse0x312ad00() {
   return (neuron0x310a860()*0.0336505);
}

double NNfunction_ss_cLcR::synapse0x312ad40() {
   return (neuron0x310aba0()*0.62598);
}

double NNfunction_ss_cLcR::synapse0x312ad80() {
   return (neuron0x310aee0()*-0.0171458);
}

double NNfunction_ss_cLcR::synapse0x312adc0() {
   return (neuron0x310b220()*0.0304598);
}

double NNfunction_ss_cLcR::synapse0x312ae00() {
   return (neuron0x310b560()*-0.525051);
}

double NNfunction_ss_cLcR::synapse0x312a890() {
   return (neuron0x310b8a0()*0.0300646);
}

double NNfunction_ss_cLcR::synapse0x312a8d0() {
   return (neuron0x310be00()*0.0256883);
}

double NNfunction_ss_cLcR::synapse0x312af50() {
   return (neuron0x310c020()*-0.0124535);
}

double NNfunction_ss_cLcR::synapse0x312af90() {
   return (neuron0x310c360()*-0.00296522);
}

double NNfunction_ss_cLcR::synapse0x312afd0() {
   return (neuron0x310c6a0()*-0.0333362);
}

double NNfunction_ss_cLcR::synapse0x312b010() {
   return (neuron0x310c9e0()*-0.0105941);
}

double NNfunction_ss_cLcR::synapse0x312b050() {
   return (neuron0x310cd20()*-0.00502262);
}

double NNfunction_ss_cLcR::synapse0x312b090() {
   return (neuron0x310d060()*-0.0313717);
}

double NNfunction_ss_cLcR::synapse0x312b410() {
   return (neuron0x31084a0()*0.226083);
}

double NNfunction_ss_cLcR::synapse0x312b450() {
   return (neuron0x31087e0()*-0.0754358);
}

double NNfunction_ss_cLcR::synapse0x312b490() {
   return (neuron0x3108b20()*-0.331655);
}

double NNfunction_ss_cLcR::synapse0x312b4d0() {
   return (neuron0x3108e60()*0.895045);
}

double NNfunction_ss_cLcR::synapse0x312b510() {
   return (neuron0x31091a0()*0.204199);
}

double NNfunction_ss_cLcR::synapse0x312b550() {
   return (neuron0x31094e0()*0.0919726);
}

double NNfunction_ss_cLcR::synapse0x312b590() {
   return (neuron0x3109820()*0.11909);
}

double NNfunction_ss_cLcR::synapse0x312b5d0() {
   return (neuron0x3109b60()*-0.110961);
}

double NNfunction_ss_cLcR::synapse0x312b610() {
   return (neuron0x3109ea0()*0.202339);
}

double NNfunction_ss_cLcR::synapse0x312b650() {
   return (neuron0x310a1e0()*-0.269645);
}

double NNfunction_ss_cLcR::synapse0x312b690() {
   return (neuron0x310a520()*-0.566333);
}

double NNfunction_ss_cLcR::synapse0x312b6d0() {
   return (neuron0x310a860()*0.192059);
}

double NNfunction_ss_cLcR::synapse0x312b710() {
   return (neuron0x310aba0()*-0.16454);
}

double NNfunction_ss_cLcR::synapse0x312b750() {
   return (neuron0x310aee0()*0.688791);
}

double NNfunction_ss_cLcR::synapse0x312b790() {
   return (neuron0x310b220()*0.34564);
}

double NNfunction_ss_cLcR::synapse0x312b7d0() {
   return (neuron0x310b560()*-0.333744);
}

double NNfunction_ss_cLcR::synapse0x312b260() {
   return (neuron0x310b8a0()*-0.325282);
}

double NNfunction_ss_cLcR::synapse0x312b2a0() {
   return (neuron0x310be00()*-0.30296);
}

double NNfunction_ss_cLcR::synapse0x311bdd0() {
   return (neuron0x310c020()*0.19335);
}

double NNfunction_ss_cLcR::synapse0x311be10() {
   return (neuron0x310c360()*0.17619);
}

double NNfunction_ss_cLcR::synapse0x311be50() {
   return (neuron0x310c6a0()*-0.490537);
}

double NNfunction_ss_cLcR::synapse0x311be90() {
   return (neuron0x310c9e0()*0.0466277);
}

double NNfunction_ss_cLcR::synapse0x311bed0() {
   return (neuron0x310cd20()*-0.14311);
}

double NNfunction_ss_cLcR::synapse0x311bf10() {
   return (neuron0x310d060()*0.0858608);
}

double NNfunction_ss_cLcR::synapse0x311c290() {
   return (neuron0x31084a0()*0.10856);
}

double NNfunction_ss_cLcR::synapse0x311c2d0() {
   return (neuron0x31087e0()*-1.04445);
}

double NNfunction_ss_cLcR::synapse0x311c310() {
   return (neuron0x3108b20()*-0.116479);
}

double NNfunction_ss_cLcR::synapse0x311c350() {
   return (neuron0x3108e60()*-1.5052);
}

double NNfunction_ss_cLcR::synapse0x311c390() {
   return (neuron0x31091a0()*0.431745);
}

double NNfunction_ss_cLcR::synapse0x311c3d0() {
   return (neuron0x31094e0()*-0.0426485);
}

double NNfunction_ss_cLcR::synapse0x311c410() {
   return (neuron0x3109820()*0.127604);
}

double NNfunction_ss_cLcR::synapse0x311c450() {
   return (neuron0x3109b60()*0.596913);
}

double NNfunction_ss_cLcR::synapse0x311c490() {
   return (neuron0x3109ea0()*-0.495293);
}

double NNfunction_ss_cLcR::synapse0x311c4d0() {
   return (neuron0x310a1e0()*-0.13804);
}

double NNfunction_ss_cLcR::synapse0x311c510() {
   return (neuron0x310a520()*0.225826);
}

double NNfunction_ss_cLcR::synapse0x311c550() {
   return (neuron0x310a860()*-0.408331);
}

double NNfunction_ss_cLcR::synapse0x311c590() {
   return (neuron0x310aba0()*0.821076);
}

double NNfunction_ss_cLcR::synapse0x311c5d0() {
   return (neuron0x310aee0()*1.2056);
}

double NNfunction_ss_cLcR::synapse0x311c610() {
   return (neuron0x310b220()*-0.0320682);
}

double NNfunction_ss_cLcR::synapse0x311c650() {
   return (neuron0x310b560()*0.341646);
}

double NNfunction_ss_cLcR::synapse0x311c0e0() {
   return (neuron0x310b8a0()*-0.110768);
}

double NNfunction_ss_cLcR::synapse0x311c120() {
   return (neuron0x310be00()*-0.190891);
}

double NNfunction_ss_cLcR::synapse0x311c7a0() {
   return (neuron0x310c020()*-0.723858);
}

double NNfunction_ss_cLcR::synapse0x311c7e0() {
   return (neuron0x310c360()*0.422094);
}

double NNfunction_ss_cLcR::synapse0x311c820() {
   return (neuron0x310c6a0()*-0.481957);
}

double NNfunction_ss_cLcR::synapse0x311c860() {
   return (neuron0x310c9e0()*-0.222364);
}

double NNfunction_ss_cLcR::synapse0x311c8a0() {
   return (neuron0x310cd20()*-0.510114);
}

double NNfunction_ss_cLcR::synapse0x311c8e0() {
   return (neuron0x310d060()*0.0912033);
}

double NNfunction_ss_cLcR::synapse0x311cc60() {
   return (neuron0x31084a0()*0.703385);
}

double NNfunction_ss_cLcR::synapse0x311cca0() {
   return (neuron0x31087e0()*0.156351);
}

double NNfunction_ss_cLcR::synapse0x311cce0() {
   return (neuron0x3108b20()*0.408203);
}

double NNfunction_ss_cLcR::synapse0x311cd20() {
   return (neuron0x3108e60()*0.570231);
}

double NNfunction_ss_cLcR::synapse0x311cd60() {
   return (neuron0x31091a0()*0.22121);
}

double NNfunction_ss_cLcR::synapse0x311cda0() {
   return (neuron0x31094e0()*-0.0620055);
}

double NNfunction_ss_cLcR::synapse0x311cde0() {
   return (neuron0x3109820()*0.0269822);
}

double NNfunction_ss_cLcR::synapse0x311ce20() {
   return (neuron0x3109b60()*0.874095);
}

double NNfunction_ss_cLcR::synapse0x311ce60() {
   return (neuron0x3109ea0()*-0.187335);
}

double NNfunction_ss_cLcR::synapse0x311cea0() {
   return (neuron0x310a1e0()*-0.468324);
}

double NNfunction_ss_cLcR::synapse0x311cee0() {
   return (neuron0x310a520()*0.480918);
}

double NNfunction_ss_cLcR::synapse0x311cf20() {
   return (neuron0x310a860()*0.618213);
}

double NNfunction_ss_cLcR::synapse0x311cf60() {
   return (neuron0x310aba0()*0.603638);
}

double NNfunction_ss_cLcR::synapse0x311cfa0() {
   return (neuron0x310aee0()*-0.462367);
}

double NNfunction_ss_cLcR::synapse0x311cfe0() {
   return (neuron0x310b220()*-0.296403);
}

double NNfunction_ss_cLcR::synapse0x311d020() {
   return (neuron0x310b560()*-0.0426016);
}

double NNfunction_ss_cLcR::synapse0x311cab0() {
   return (neuron0x310b8a0()*0.396098);
}

double NNfunction_ss_cLcR::synapse0x311caf0() {
   return (neuron0x310be00()*-0.679414);
}

double NNfunction_ss_cLcR::synapse0x311d170() {
   return (neuron0x310c020()*-0.510135);
}

double NNfunction_ss_cLcR::synapse0x311d1b0() {
   return (neuron0x310c360()*0.054629);
}

double NNfunction_ss_cLcR::synapse0x311d1f0() {
   return (neuron0x310c6a0()*0.353307);
}

double NNfunction_ss_cLcR::synapse0x311d230() {
   return (neuron0x310c9e0()*-1.03421);
}

double NNfunction_ss_cLcR::synapse0x311d270() {
   return (neuron0x310cd20()*-0.595656);
}

double NNfunction_ss_cLcR::synapse0x311d2b0() {
   return (neuron0x310d060()*0.642034);
}

double NNfunction_ss_cLcR::synapse0x311d630() {
   return (neuron0x31084a0()*-0.0157396);
}

double NNfunction_ss_cLcR::synapse0x311d670() {
   return (neuron0x31087e0()*0.00473355);
}

double NNfunction_ss_cLcR::synapse0x311d6b0() {
   return (neuron0x3108b20()*0.00154273);
}

double NNfunction_ss_cLcR::synapse0x311d6f0() {
   return (neuron0x3108e60()*-2.42373);
}

double NNfunction_ss_cLcR::synapse0x311d730() {
   return (neuron0x31091a0()*-0.00484012);
}

double NNfunction_ss_cLcR::synapse0x311d770() {
   return (neuron0x31094e0()*-0.0144136);
}

double NNfunction_ss_cLcR::synapse0x311d7b0() {
   return (neuron0x3109820()*-0.00839445);
}

double NNfunction_ss_cLcR::synapse0x311d7f0() {
   return (neuron0x3109b60()*0.00620111);
}

double NNfunction_ss_cLcR::synapse0x311d830() {
   return (neuron0x3109ea0()*0.00436994);
}

double NNfunction_ss_cLcR::synapse0x311d870() {
   return (neuron0x310a1e0()*-0.0098401);
}

double NNfunction_ss_cLcR::synapse0x311d8b0() {
   return (neuron0x310a520()*0.0135306);
}

double NNfunction_ss_cLcR::synapse0x311d8f0() {
   return (neuron0x310a860()*-0.0399117);
}

double NNfunction_ss_cLcR::synapse0x311d930() {
   return (neuron0x310aba0()*-0.382691);
}

double NNfunction_ss_cLcR::synapse0x311d970() {
   return (neuron0x310aee0()*0.0253049);
}

double NNfunction_ss_cLcR::synapse0x311d9b0() {
   return (neuron0x310b220()*-0.00999896);
}

double NNfunction_ss_cLcR::synapse0x311d9f0() {
   return (neuron0x310b560()*-0.362808);
}

double NNfunction_ss_cLcR::synapse0x311d480() {
   return (neuron0x310b8a0()*0.0181703);
}

double NNfunction_ss_cLcR::synapse0x311d4c0() {
   return (neuron0x310be00()*-0.0244972);
}

double NNfunction_ss_cLcR::synapse0x311db40() {
   return (neuron0x310c020()*-0.0202453);
}

double NNfunction_ss_cLcR::synapse0x311db80() {
   return (neuron0x310c360()*-0.0216786);
}

double NNfunction_ss_cLcR::synapse0x311dbc0() {
   return (neuron0x310c6a0()*6.9775e-05);
}

double NNfunction_ss_cLcR::synapse0x311dc00() {
   return (neuron0x310c9e0()*0.0117762);
}

double NNfunction_ss_cLcR::synapse0x311dc40() {
   return (neuron0x310cd20()*0.0161617);
}

double NNfunction_ss_cLcR::synapse0x311dc80() {
   return (neuron0x310d060()*0.00980068);
}

double NNfunction_ss_cLcR::synapse0x312fb50() {
   return (neuron0x31084a0()*-0.112525);
}

double NNfunction_ss_cLcR::synapse0x312fb90() {
   return (neuron0x31087e0()*0.121194);
}

double NNfunction_ss_cLcR::synapse0x312fbd0() {
   return (neuron0x3108b20()*0.156795);
}

double NNfunction_ss_cLcR::synapse0x312fc10() {
   return (neuron0x3108e60()*3.75072);
}

double NNfunction_ss_cLcR::synapse0x312fc50() {
   return (neuron0x31091a0()*-0.19011);
}

double NNfunction_ss_cLcR::synapse0x312fc90() {
   return (neuron0x31094e0()*-0.0856637);
}

double NNfunction_ss_cLcR::synapse0x312fcd0() {
   return (neuron0x3109820()*-0.0923516);
}

double NNfunction_ss_cLcR::synapse0x312fd10() {
   return (neuron0x3109b60()*-0.329395);
}

double NNfunction_ss_cLcR::synapse0x312fd50() {
   return (neuron0x3109ea0()*0.114029);
}

double NNfunction_ss_cLcR::synapse0x312fd90() {
   return (neuron0x310a1e0()*0.0130068);
}

double NNfunction_ss_cLcR::synapse0x312fdd0() {
   return (neuron0x310a520()*0.122732);
}

double NNfunction_ss_cLcR::synapse0x312fe10() {
   return (neuron0x310a860()*0.310184);
}

double NNfunction_ss_cLcR::synapse0x312fe50() {
   return (neuron0x310aba0()*-1.10594);
}

double NNfunction_ss_cLcR::synapse0x312fe90() {
   return (neuron0x310aee0()*0.0657539);
}

double NNfunction_ss_cLcR::synapse0x312fed0() {
   return (neuron0x310b220()*-0.22289);
}

double NNfunction_ss_cLcR::synapse0x312ff10() {
   return (neuron0x310b560()*-0.762314);
}

double NNfunction_ss_cLcR::synapse0x311dcc0() {
   return (neuron0x310b8a0()*0.067615);
}

double NNfunction_ss_cLcR::synapse0x311dd00() {
   return (neuron0x310be00()*0.223589);
}

double NNfunction_ss_cLcR::synapse0x3130060() {
   return (neuron0x310c020()*0.314421);
}

double NNfunction_ss_cLcR::synapse0x31300a0() {
   return (neuron0x310c360()*-0.0959088);
}

double NNfunction_ss_cLcR::synapse0x31300e0() {
   return (neuron0x310c6a0()*-0.210077);
}

double NNfunction_ss_cLcR::synapse0x3130120() {
   return (neuron0x310c9e0()*-0.179118);
}

double NNfunction_ss_cLcR::synapse0x3130160() {
   return (neuron0x310cd20()*0.0560047);
}

double NNfunction_ss_cLcR::synapse0x31301a0() {
   return (neuron0x310d060()*0.051346);
}

double NNfunction_ss_cLcR::synapse0x3130520() {
   return (neuron0x31084a0()*0.0131684);
}

double NNfunction_ss_cLcR::synapse0x3130560() {
   return (neuron0x31087e0()*-1.14973);
}

double NNfunction_ss_cLcR::synapse0x31305a0() {
   return (neuron0x3108b20()*0.228531);
}

double NNfunction_ss_cLcR::synapse0x31305e0() {
   return (neuron0x3108e60()*0.0130121);
}

double NNfunction_ss_cLcR::synapse0x3130620() {
   return (neuron0x31091a0()*0.46877);
}

double NNfunction_ss_cLcR::synapse0x3130660() {
   return (neuron0x31094e0()*0.730899);
}

double NNfunction_ss_cLcR::synapse0x31306a0() {
   return (neuron0x3109820()*0.536207);
}

double NNfunction_ss_cLcR::synapse0x31306e0() {
   return (neuron0x3109b60()*0.149507);
}

double NNfunction_ss_cLcR::synapse0x3130720() {
   return (neuron0x3109ea0()*-0.611069);
}

double NNfunction_ss_cLcR::synapse0x3130760() {
   return (neuron0x310a1e0()*-0.141073);
}

double NNfunction_ss_cLcR::synapse0x31307a0() {
   return (neuron0x310a520()*-0.51304);
}

double NNfunction_ss_cLcR::synapse0x31307e0() {
   return (neuron0x310a860()*0.239048);
}

double NNfunction_ss_cLcR::synapse0x3130820() {
   return (neuron0x310aba0()*0.186745);
}

double NNfunction_ss_cLcR::synapse0x3130860() {
   return (neuron0x310aee0()*0.115729);
}

double NNfunction_ss_cLcR::synapse0x31308a0() {
   return (neuron0x310b220()*0.157196);
}

double NNfunction_ss_cLcR::synapse0x31308e0() {
   return (neuron0x310b560()*0.689497);
}

double NNfunction_ss_cLcR::synapse0x3130370() {
   return (neuron0x310b8a0()*0.0412313);
}

double NNfunction_ss_cLcR::synapse0x31303b0() {
   return (neuron0x310be00()*-0.654314);
}

double NNfunction_ss_cLcR::synapse0x3130a30() {
   return (neuron0x310c020()*1.51651);
}

double NNfunction_ss_cLcR::synapse0x3130a70() {
   return (neuron0x310c360()*-0.581136);
}

double NNfunction_ss_cLcR::synapse0x3130ab0() {
   return (neuron0x310c6a0()*0.100937);
}

double NNfunction_ss_cLcR::synapse0x3130af0() {
   return (neuron0x310c9e0()*-0.384347);
}

double NNfunction_ss_cLcR::synapse0x3130b30() {
   return (neuron0x310cd20()*-0.664206);
}

double NNfunction_ss_cLcR::synapse0x3130b70() {
   return (neuron0x310d060()*-0.163889);
}

double NNfunction_ss_cLcR::synapse0x3130ef0() {
   return (neuron0x31084a0()*0.116475);
}

double NNfunction_ss_cLcR::synapse0x3130f30() {
   return (neuron0x31087e0()*-0.317767);
}

double NNfunction_ss_cLcR::synapse0x3130f70() {
   return (neuron0x3108b20()*1.18922);
}

double NNfunction_ss_cLcR::synapse0x3130fb0() {
   return (neuron0x3108e60()*-2.73007);
}

double NNfunction_ss_cLcR::synapse0x3130ff0() {
   return (neuron0x31091a0()*-0.227364);
}

double NNfunction_ss_cLcR::synapse0x3131030() {
   return (neuron0x31094e0()*-0.00725327);
}

double NNfunction_ss_cLcR::synapse0x3131070() {
   return (neuron0x3109820()*-0.0277959);
}

double NNfunction_ss_cLcR::synapse0x31310b0() {
   return (neuron0x3109b60()*0.201038);
}

double NNfunction_ss_cLcR::synapse0x31310f0() {
   return (neuron0x3109ea0()*-0.117903);
}

double NNfunction_ss_cLcR::synapse0x3131130() {
   return (neuron0x310a1e0()*-0.129342);
}

double NNfunction_ss_cLcR::synapse0x3131170() {
   return (neuron0x310a520()*-0.202444);
}

double NNfunction_ss_cLcR::synapse0x31311b0() {
   return (neuron0x310a860()*0.977916);
}

double NNfunction_ss_cLcR::synapse0x31311f0() {
   return (neuron0x310aba0()*0.0304495);
}

double NNfunction_ss_cLcR::synapse0x3131230() {
   return (neuron0x310aee0()*0.0996859);
}

double NNfunction_ss_cLcR::synapse0x3131270() {
   return (neuron0x310b220()*0.0792968);
}

double NNfunction_ss_cLcR::synapse0x31312b0() {
   return (neuron0x310b560()*-0.168385);
}

double NNfunction_ss_cLcR::synapse0x3130d40() {
   return (neuron0x310b8a0()*0.0122635);
}

double NNfunction_ss_cLcR::synapse0x3130d80() {
   return (neuron0x310be00()*-0.0349879);
}

double NNfunction_ss_cLcR::synapse0x3131400() {
   return (neuron0x310c020()*-0.382986);
}

double NNfunction_ss_cLcR::synapse0x3131440() {
   return (neuron0x310c360()*-0.151011);
}

double NNfunction_ss_cLcR::synapse0x3131480() {
   return (neuron0x310c6a0()*0.146856);
}

double NNfunction_ss_cLcR::synapse0x31314c0() {
   return (neuron0x310c9e0()*0.27143);
}

double NNfunction_ss_cLcR::synapse0x3131500() {
   return (neuron0x310cd20()*-0.170949);
}

double NNfunction_ss_cLcR::synapse0x3131540() {
   return (neuron0x310d060()*0.0533085);
}

double NNfunction_ss_cLcR::synapse0x31318c0() {
   return (neuron0x31084a0()*-0.0190225);
}

double NNfunction_ss_cLcR::synapse0x3131900() {
   return (neuron0x31087e0()*-0.00675938);
}

double NNfunction_ss_cLcR::synapse0x3131940() {
   return (neuron0x3108b20()*-0.00939558);
}

double NNfunction_ss_cLcR::synapse0x3131980() {
   return (neuron0x3108e60()*-1.12709);
}

double NNfunction_ss_cLcR::synapse0x31319c0() {
   return (neuron0x31091a0()*-0.0639926);
}

double NNfunction_ss_cLcR::synapse0x3131a00() {
   return (neuron0x31094e0()*-0.00751947);
}

double NNfunction_ss_cLcR::synapse0x3131a40() {
   return (neuron0x3109820()*-0.0577235);
}

double NNfunction_ss_cLcR::synapse0x3131a80() {
   return (neuron0x3109b60()*0.0219568);
}

double NNfunction_ss_cLcR::synapse0x3131ac0() {
   return (neuron0x3109ea0()*0.0439008);
}

double NNfunction_ss_cLcR::synapse0x3131b00() {
   return (neuron0x310a1e0()*0.0259497);
}

double NNfunction_ss_cLcR::synapse0x3131b40() {
   return (neuron0x310a520()*0.0169817);
}

double NNfunction_ss_cLcR::synapse0x3131b80() {
   return (neuron0x310a860()*0.0672162);
}

double NNfunction_ss_cLcR::synapse0x3131bc0() {
   return (neuron0x310aba0()*-2.07098);
}

double NNfunction_ss_cLcR::synapse0x3131c00() {
   return (neuron0x310aee0()*0.0313209);
}

double NNfunction_ss_cLcR::synapse0x3131c40() {
   return (neuron0x310b220()*0.0350417);
}

double NNfunction_ss_cLcR::synapse0x3131c80() {
   return (neuron0x310b560()*-2.43035);
}

double NNfunction_ss_cLcR::synapse0x3131710() {
   return (neuron0x310b8a0()*0.0702003);
}

double NNfunction_ss_cLcR::synapse0x3131750() {
   return (neuron0x310be00()*0.0733424);
}

double NNfunction_ss_cLcR::synapse0x3131dd0() {
   return (neuron0x310c020()*0.0534713);
}

double NNfunction_ss_cLcR::synapse0x3131e10() {
   return (neuron0x310c360()*-0.0483858);
}

double NNfunction_ss_cLcR::synapse0x3131e50() {
   return (neuron0x310c6a0()*-0.037857);
}

double NNfunction_ss_cLcR::synapse0x3131e90() {
   return (neuron0x310c9e0()*-0.0296115);
}

double NNfunction_ss_cLcR::synapse0x3131ed0() {
   return (neuron0x310cd20()*0.0651398);
}

double NNfunction_ss_cLcR::synapse0x3131f10() {
   return (neuron0x310d060()*0.0253383);
}

double NNfunction_ss_cLcR::synapse0x310e4b0() {
   return (neuron0x310d500()*0.114325);
}

double NNfunction_ss_cLcR::synapse0x310e4f0() {
   return (neuron0x310de10()*-0.0456618);
}

double NNfunction_ss_cLcR::synapse0x310f9c0() {
   return (neuron0x310e8f0()*0.128007);
}

double NNfunction_ss_cLcR::synapse0x310fa00() {
   return (neuron0x2ec8180()*0.0336814);
}

double NNfunction_ss_cLcR::synapse0x3110390() {
   return (neuron0x310f710()*-0.503035);
}

double NNfunction_ss_cLcR::synapse0x31103d0() {
   return (neuron0x31100e0()*-0.523533);
}

double NNfunction_ss_cLcR::synapse0x3111160() {
   return (neuron0x3110eb0()*0.136351);
}

double NNfunction_ss_cLcR::synapse0x31111a0() {
   return (neuron0x3111880()*0.0257388);
}

double NNfunction_ss_cLcR::synapse0x3111b30() {
   return (neuron0x3112250()*0.520408);
}

double NNfunction_ss_cLcR::synapse0x3111b70() {
   return (neuron0x3112d30()*-0.835684);
}

double NNfunction_ss_cLcR::synapse0x3112500() {
   return (neuron0x3113700()*0.0494185);
}

double NNfunction_ss_cLcR::synapse0x3112540() {
   return (neuron0x31107e0()*0.0775042);
}

double NNfunction_ss_cLcR::synapse0x3112fe0() {
   return (neuron0x31152b0()*-0.154442);
}

double NNfunction_ss_cLcR::synapse0x3113020() {
   return (neuron0x3115c80()*2.86607);
}

double NNfunction_ss_cLcR::synapse0x31139b0() {
   return (neuron0x3116650()*0.032636);
}

double NNfunction_ss_cLcR::synapse0x31139f0() {
   return (neuron0x3117020()*-0.828955);
}

double NNfunction_ss_cLcR::synapse0x3110a90() {
   return (neuron0x3118e30()*-1.73887);
}

double NNfunction_ss_cLcR::synapse0x3110ad0() {
   return (neuron0x3119110()*-0.0200816);
}

double NNfunction_ss_cLcR::synapse0x3115560() {
   return (neuron0x3119ae0()*-0.111775);
}

double NNfunction_ss_cLcR::synapse0x31155a0() {
   return (neuron0x311a4b0()*0.134392);
}

double NNfunction_ss_cLcR::synapse0x3115f30() {
   return (neuron0x311ae80()*-0.0988391);
}

double NNfunction_ss_cLcR::synapse0x3115f70() {
   return (neuron0x311b850()*-0.0426845);
}

double NNfunction_ss_cLcR::synapse0x3116900() {
   return (neuron0x31143a0()*0.368377);
}

double NNfunction_ss_cLcR::synapse0x3116940() {
   return (neuron0x3114d70()*-0.0919839);
}

double NNfunction_ss_cLcR::synapse0x31172d0() {
   return (neuron0x311e5e0()*0.149915);
}

double NNfunction_ss_cLcR::synapse0x3117310() {
   return (neuron0x311efb0()*-0.0738837);
}

double NNfunction_ss_cLcR::synapse0x310b440() {
   return (neuron0x311f980()*0.86966);
}

double NNfunction_ss_cLcR::synapse0x310b480() {
   return (neuron0x3120350()*0.0466627);
}

double NNfunction_ss_cLcR::synapse0x31193c0() {
   return (neuron0x3120d20()*0.142911);
}

double NNfunction_ss_cLcR::synapse0x3119400() {
   return (neuron0x31216f0()*0.386696);
}

double NNfunction_ss_cLcR::synapse0x3119d90() {
   return (neuron0x31220c0()*-0.184078);
}

double NNfunction_ss_cLcR::synapse0x3119dd0() {
   return (neuron0x3122a90()*-0.0313332);
}

double NNfunction_ss_cLcR::synapse0x311a760() {
   return (neuron0x3118b20()*-0.0619004);
}

double NNfunction_ss_cLcR::synapse0x311a7a0() {
   return (neuron0x3125670()*0.0577947);
}

double NNfunction_ss_cLcR::synapse0x311b130() {
   return (neuron0x3126040()*0.169713);
}

double NNfunction_ss_cLcR::synapse0x311b170() {
   return (neuron0x3126a10()*-0.0698351);
}

double NNfunction_ss_cLcR::synapse0x311bb00() {
   return (neuron0x31273e0()*1.42009);
}

double NNfunction_ss_cLcR::synapse0x311bb40() {
   return (neuron0x3127db0()*-1.33367);
}

double NNfunction_ss_cLcR::synapse0x3114650() {
   return (neuron0x3128780()*-0.215788);
}

double NNfunction_ss_cLcR::synapse0x3114690() {
   return (neuron0x3129150()*0.636387);
}

double NNfunction_ss_cLcR::synapse0x311df00() {
   return (neuron0x3129b20()*-0.574181);
}

double NNfunction_ss_cLcR::synapse0x311df40() {
   return (neuron0x312a700()*-1.16441);
}

double NNfunction_ss_cLcR::synapse0x311e890() {
   return (neuron0x312b0d0()*-0.437998);
}

double NNfunction_ss_cLcR::synapse0x311e8d0() {
   return (neuron0x311bf50()*0.178896);
}

double NNfunction_ss_cLcR::synapse0x311f260() {
   return (neuron0x311c920()*-0.152332);
}

double NNfunction_ss_cLcR::synapse0x311f2a0() {
   return (neuron0x311d2f0()*-2.03192);
}

double NNfunction_ss_cLcR::synapse0x311fc30() {
   return (neuron0x312f930()*-0.47899);
}

double NNfunction_ss_cLcR::synapse0x311fc70() {
   return (neuron0x31301e0()*-0.133701);
}

double NNfunction_ss_cLcR::synapse0x3120600() {
   return (neuron0x3130bb0()*0.529509);
}

double NNfunction_ss_cLcR::synapse0x3120640() {
   return (neuron0x3131580()*-0.443808);
}

double NNfunction_ss_cLcR::synapse0x3122d40() {
   return (neuron0x310d500()*-0.899844);
}

double NNfunction_ss_cLcR::synapse0x3122d80() {
   return (neuron0x310de10()*-1.72087);
}

double NNfunction_ss_cLcR::synapse0x3118300() {
   return (neuron0x310e8f0()*-0.445661);
}

double NNfunction_ss_cLcR::synapse0x3118340() {
   return (neuron0x2ec8180()*-0.306434);
}

double NNfunction_ss_cLcR::synapse0x3125920() {
   return (neuron0x310f710()*0.77655);
}

double NNfunction_ss_cLcR::synapse0x3125960() {
   return (neuron0x31100e0()*1.44413);
}

double NNfunction_ss_cLcR::synapse0x31262f0() {
   return (neuron0x3110eb0()*2.54472);
}

double NNfunction_ss_cLcR::synapse0x3126330() {
   return (neuron0x3111880()*0.699935);
}

double NNfunction_ss_cLcR::synapse0x3126cc0() {
   return (neuron0x3112250()*-1.53249);
}

double NNfunction_ss_cLcR::synapse0x3126d00() {
   return (neuron0x3112d30()*1.42551);
}

double NNfunction_ss_cLcR::synapse0x3127690() {
   return (neuron0x3113700()*0.102439);
}

double NNfunction_ss_cLcR::synapse0x31276d0() {
   return (neuron0x31107e0()*-0.00144009);
}

double NNfunction_ss_cLcR::synapse0x3128060() {
   return (neuron0x31152b0()*0.663954);
}

double NNfunction_ss_cLcR::synapse0x31280a0() {
   return (neuron0x3115c80()*-0.0201393);
}

double NNfunction_ss_cLcR::synapse0x3128a30() {
   return (neuron0x3116650()*-0.27034);
}

double NNfunction_ss_cLcR::synapse0x3128a70() {
   return (neuron0x3117020()*-0.863796);
}

double NNfunction_ss_cLcR::synapse0x3129400() {
   return (neuron0x3118e30()*0.107423);
}

double NNfunction_ss_cLcR::synapse0x3129440() {
   return (neuron0x3119110()*0.142399);
}

double NNfunction_ss_cLcR::synapse0x3129dd0() {
   return (neuron0x3119ae0()*0.463977);
}

double NNfunction_ss_cLcR::synapse0x3129e10() {
   return (neuron0x311a4b0()*-0.40748);
}

double NNfunction_ss_cLcR::synapse0x312a9b0() {
   return (neuron0x311ae80()*0.649774);
}

double NNfunction_ss_cLcR::synapse0x312a9f0() {
   return (neuron0x311b850()*-0.999419);
}

double NNfunction_ss_cLcR::synapse0x312b380() {
   return (neuron0x31143a0()*-3.92183);
}

double NNfunction_ss_cLcR::synapse0x312b3c0() {
   return (neuron0x3114d70()*-0.198171);
}

double NNfunction_ss_cLcR::synapse0x311c200() {
   return (neuron0x311e5e0()*-0.369392);
}

double NNfunction_ss_cLcR::synapse0x311c240() {
   return (neuron0x311efb0()*0.533146);
}

double NNfunction_ss_cLcR::synapse0x311cbd0() {
   return (neuron0x311f980()*0.298822);
}

double NNfunction_ss_cLcR::synapse0x311cc10() {
   return (neuron0x3120350()*-1.19636);
}

double NNfunction_ss_cLcR::synapse0x311d5a0() {
   return (neuron0x3120d20()*-0.546191);
}

double NNfunction_ss_cLcR::synapse0x311d5e0() {
   return (neuron0x31216f0()*-0.444854);
}

double NNfunction_ss_cLcR::synapse0x312fac0() {
   return (neuron0x31220c0()*-0.315431);
}

double NNfunction_ss_cLcR::synapse0x312fb00() {
   return (neuron0x3122a90()*1.22398);
}

double NNfunction_ss_cLcR::synapse0x3130490() {
   return (neuron0x3118b20()*0.763562);
}

double NNfunction_ss_cLcR::synapse0x31304d0() {
   return (neuron0x3125670()*-0.175336);
}

double NNfunction_ss_cLcR::synapse0x3130e60() {
   return (neuron0x3126040()*-1.40904);
}

double NNfunction_ss_cLcR::synapse0x3130ea0() {
   return (neuron0x3126a10()*0.357926);
}

double NNfunction_ss_cLcR::synapse0x3131830() {
   return (neuron0x31273e0()*-2.43464);
}

double NNfunction_ss_cLcR::synapse0x3131870() {
   return (neuron0x3127db0()*0.489662);
}

double NNfunction_ss_cLcR::synapse0x310d720() {
   return (neuron0x3128780()*1.56037);
}

double NNfunction_ss_cLcR::synapse0x310d760() {
   return (neuron0x3129150()*-0.19665);
}

double NNfunction_ss_cLcR::synapse0x3120fd0() {
   return (neuron0x3129b20()*0.515938);
}

double NNfunction_ss_cLcR::synapse0x3121010() {
   return (neuron0x312a700()*0.859473);
}

double NNfunction_ss_cLcR::synapse0x3131f50() {
   return (neuron0x312b0d0()*1.25013);
}

double NNfunction_ss_cLcR::synapse0x3131f90() {
   return (neuron0x311bf50()*-0.675543);
}

double NNfunction_ss_cLcR::synapse0x3131fd0() {
   return (neuron0x311c920()*1.00911);
}

double NNfunction_ss_cLcR::synapse0x3132010() {
   return (neuron0x311d2f0()*-2.84942);
}

double NNfunction_ss_cLcR::synapse0x3138ec0() {
   return (neuron0x312f930()*-1.54156);
}

double NNfunction_ss_cLcR::synapse0x3138f00() {
   return (neuron0x31301e0()*0.995532);
}

double NNfunction_ss_cLcR::synapse0x3138f40() {
   return (neuron0x3130bb0()*-1.37262);
}

double NNfunction_ss_cLcR::synapse0x3138f80() {
   return (neuron0x3131580()*0.306843);
}

double NNfunction_ss_cLcR::synapse0x3139300() {
   return (neuron0x310d500()*-0.0421802);
}

double NNfunction_ss_cLcR::synapse0x3139340() {
   return (neuron0x310de10()*-0.0595363);
}

double NNfunction_ss_cLcR::synapse0x3139380() {
   return (neuron0x310e8f0()*5.4905);
}

double NNfunction_ss_cLcR::synapse0x31393c0() {
   return (neuron0x2ec8180()*-0.000699908);
}

double NNfunction_ss_cLcR::synapse0x3139400() {
   return (neuron0x310f710()*1.33736);
}

double NNfunction_ss_cLcR::synapse0x3139440() {
   return (neuron0x31100e0()*1.20087);
}

double NNfunction_ss_cLcR::synapse0x3139480() {
   return (neuron0x3110eb0()*0.180369);
}

double NNfunction_ss_cLcR::synapse0x31394c0() {
   return (neuron0x3111880()*0.011164);
}

double NNfunction_ss_cLcR::synapse0x3139500() {
   return (neuron0x3112250()*-0.108725);
}

double NNfunction_ss_cLcR::synapse0x3139540() {
   return (neuron0x3112d30()*0.211178);
}

double NNfunction_ss_cLcR::synapse0x3139580() {
   return (neuron0x3113700()*-0.0328132);
}

double NNfunction_ss_cLcR::synapse0x31395c0() {
   return (neuron0x31107e0()*-0.0397985);
}

double NNfunction_ss_cLcR::synapse0x3139600() {
   return (neuron0x31152b0()*0.240282);
}

double NNfunction_ss_cLcR::synapse0x3139640() {
   return (neuron0x3115c80()*-1.70366);
}

double NNfunction_ss_cLcR::synapse0x3139680() {
   return (neuron0x3116650()*-0.015009);
}

double NNfunction_ss_cLcR::synapse0x31396c0() {
   return (neuron0x3117020()*-4.00522);
}

double NNfunction_ss_cLcR::synapse0x3139150() {
   return (neuron0x3118e30()*2.46778);
}

double NNfunction_ss_cLcR::synapse0x3139190() {
   return (neuron0x3119110()*-0.00967879);
}

double NNfunction_ss_cLcR::synapse0x3139810() {
   return (neuron0x3119ae0()*0.0273923);
}

double NNfunction_ss_cLcR::synapse0x3139850() {
   return (neuron0x311a4b0()*-0.0658784);
}

double NNfunction_ss_cLcR::synapse0x3139890() {
   return (neuron0x311ae80()*0.0438521);
}

double NNfunction_ss_cLcR::synapse0x31398d0() {
   return (neuron0x311b850()*-0.917951);
}

double NNfunction_ss_cLcR::synapse0x3139910() {
   return (neuron0x31143a0()*-2.43199);
}

double NNfunction_ss_cLcR::synapse0x3139950() {
   return (neuron0x3114d70()*0.0305704);
}

double NNfunction_ss_cLcR::synapse0x3139990() {
   return (neuron0x311e5e0()*-0.520232);
}

double NNfunction_ss_cLcR::synapse0x31399d0() {
   return (neuron0x311efb0()*0.00628358);
}

double NNfunction_ss_cLcR::synapse0x3139a10() {
   return (neuron0x311f980()*1.18504);
}

double NNfunction_ss_cLcR::synapse0x3139a50() {
   return (neuron0x3120350()*-0.0407539);
}

double NNfunction_ss_cLcR::synapse0x3139a90() {
   return (neuron0x3120d20()*-0.0574981);
}

double NNfunction_ss_cLcR::synapse0x3139ad0() {
   return (neuron0x31216f0()*-1.13718);
}

double NNfunction_ss_cLcR::synapse0x3139b10() {
   return (neuron0x31220c0()*0.543474);
}

double NNfunction_ss_cLcR::synapse0x3139b50() {
   return (neuron0x3122a90()*0.00523441);
}

double NNfunction_ss_cLcR::synapse0x3139700() {
   return (neuron0x3118b20()*0.0198967);
}

double NNfunction_ss_cLcR::synapse0x3139740() {
   return (neuron0x3125670()*-0.0746393);
}

double NNfunction_ss_cLcR::synapse0x3139780() {
   return (neuron0x3126040()*-0.12967);
}

double NNfunction_ss_cLcR::synapse0x31397c0() {
   return (neuron0x3126a10()*0.0213392);
}

double NNfunction_ss_cLcR::synapse0x3139da0() {
   return (neuron0x31273e0()*-1.26392);
}

double NNfunction_ss_cLcR::synapse0x3139de0() {
   return (neuron0x3127db0()*-3.41694);
}

double NNfunction_ss_cLcR::synapse0x3139e20() {
   return (neuron0x3128780()*0.0542144);
}

double NNfunction_ss_cLcR::synapse0x3139e60() {
   return (neuron0x3129150()*-1.98029);
}

double NNfunction_ss_cLcR::synapse0x3139ea0() {
   return (neuron0x3129b20()*0.16571);
}

double NNfunction_ss_cLcR::synapse0x3139ee0() {
   return (neuron0x312a700()*1.5092);
}

double NNfunction_ss_cLcR::synapse0x3139f20() {
   return (neuron0x312b0d0()*0.103696);
}

double NNfunction_ss_cLcR::synapse0x3139f60() {
   return (neuron0x311bf50()*-0.0435962);
}

double NNfunction_ss_cLcR::synapse0x3139fa0() {
   return (neuron0x311c920()*0.0469779);
}

double NNfunction_ss_cLcR::synapse0x3139fe0() {
   return (neuron0x311d2f0()*-2.78837);
}

double NNfunction_ss_cLcR::synapse0x313a020() {
   return (neuron0x312f930()*0.0974634);
}

double NNfunction_ss_cLcR::synapse0x313a060() {
   return (neuron0x31301e0()*0.044623);
}

double NNfunction_ss_cLcR::synapse0x313a0a0() {
   return (neuron0x3130bb0()*-0.18391);
}

double NNfunction_ss_cLcR::synapse0x313a0e0() {
   return (neuron0x3131580()*0.0717457);
}

double NNfunction_ss_cLcR::synapse0x313a460() {
   return (neuron0x310d500()*1.45291);
}

double NNfunction_ss_cLcR::synapse0x313a4a0() {
   return (neuron0x310de10()*-2.63905);
}

double NNfunction_ss_cLcR::synapse0x313a4e0() {
   return (neuron0x310e8f0()*-0.978826);
}

double NNfunction_ss_cLcR::synapse0x313a520() {
   return (neuron0x2ec8180()*-2.58163);
}

double NNfunction_ss_cLcR::synapse0x313a560() {
   return (neuron0x310f710()*-0.0150576);
}

double NNfunction_ss_cLcR::synapse0x313a5a0() {
   return (neuron0x31100e0()*-2.23335);
}

double NNfunction_ss_cLcR::synapse0x313a5e0() {
   return (neuron0x3110eb0()*-0.681249);
}

double NNfunction_ss_cLcR::synapse0x313a620() {
   return (neuron0x3111880()*-3.6607);
}

double NNfunction_ss_cLcR::synapse0x313a660() {
   return (neuron0x3112250()*-1.268);
}

double NNfunction_ss_cLcR::synapse0x313a6a0() {
   return (neuron0x3112d30()*-2.47192);
}

double NNfunction_ss_cLcR::synapse0x313a6e0() {
   return (neuron0x3113700()*3.2359);
}

double NNfunction_ss_cLcR::synapse0x313a720() {
   return (neuron0x31107e0()*2.82237);
}

double NNfunction_ss_cLcR::synapse0x313a760() {
   return (neuron0x31152b0()*0.689849);
}

double NNfunction_ss_cLcR::synapse0x313a7a0() {
   return (neuron0x3115c80()*-0.929079);
}

double NNfunction_ss_cLcR::synapse0x313a7e0() {
   return (neuron0x3116650()*2.83758);
}

double NNfunction_ss_cLcR::synapse0x313a820() {
   return (neuron0x3117020()*-0.669507);
}

double NNfunction_ss_cLcR::synapse0x313a2b0() {
   return (neuron0x3118e30()*-0.571241);
}

double NNfunction_ss_cLcR::synapse0x313a2f0() {
   return (neuron0x3119110()*2.65532);
}

double NNfunction_ss_cLcR::synapse0x313a970() {
   return (neuron0x3119ae0()*2.14954);
}

double NNfunction_ss_cLcR::synapse0x313a9b0() {
   return (neuron0x311a4b0()*2.11902);
}

double NNfunction_ss_cLcR::synapse0x313a9f0() {
   return (neuron0x311ae80()*1.64028);
}

double NNfunction_ss_cLcR::synapse0x313aa30() {
   return (neuron0x311b850()*0.0650261);
}

double NNfunction_ss_cLcR::synapse0x313aa70() {
   return (neuron0x31143a0()*-1.33902);
}

double NNfunction_ss_cLcR::synapse0x313aab0() {
   return (neuron0x3114d70()*1.87804);
}

double NNfunction_ss_cLcR::synapse0x313aaf0() {
   return (neuron0x311e5e0()*-1.14655);
}

double NNfunction_ss_cLcR::synapse0x313ab30() {
   return (neuron0x311efb0()*1.73202);
}

double NNfunction_ss_cLcR::synapse0x313ab70() {
   return (neuron0x311f980()*3.34178);
}

double NNfunction_ss_cLcR::synapse0x313abb0() {
   return (neuron0x3120350()*-1.00741);
}

double NNfunction_ss_cLcR::synapse0x313abf0() {
   return (neuron0x3120d20()*2.71882);
}

double NNfunction_ss_cLcR::synapse0x313ac30() {
   return (neuron0x31216f0()*-2.58096);
}

double NNfunction_ss_cLcR::synapse0x313ac70() {
   return (neuron0x31220c0()*1.04479);
}

double NNfunction_ss_cLcR::synapse0x313acb0() {
   return (neuron0x3122a90()*1.33561);
}

double NNfunction_ss_cLcR::synapse0x313a860() {
   return (neuron0x3118b20()*-2.46769);
}

double NNfunction_ss_cLcR::synapse0x313a8a0() {
   return (neuron0x3125670()*4.95895);
}

double NNfunction_ss_cLcR::synapse0x313a8e0() {
   return (neuron0x3126040()*3.02362);
}

double NNfunction_ss_cLcR::synapse0x313a920() {
   return (neuron0x3126a10()*1.62873);
}

double NNfunction_ss_cLcR::synapse0x313af00() {
   return (neuron0x31273e0()*-1.49115);
}

double NNfunction_ss_cLcR::synapse0x313af40() {
   return (neuron0x3127db0()*0.975295);
}

double NNfunction_ss_cLcR::synapse0x313af80() {
   return (neuron0x3128780()*1.5183);
}

double NNfunction_ss_cLcR::synapse0x313afc0() {
   return (neuron0x3129150()*0.248154);
}

double NNfunction_ss_cLcR::synapse0x313b000() {
   return (neuron0x3129b20()*2.13635);
}

double NNfunction_ss_cLcR::synapse0x313b040() {
   return (neuron0x312a700()*0.541768);
}

double NNfunction_ss_cLcR::synapse0x313b080() {
   return (neuron0x312b0d0()*0.72744);
}

double NNfunction_ss_cLcR::synapse0x313b0c0() {
   return (neuron0x311bf50()*2.29315);
}

double NNfunction_ss_cLcR::synapse0x313b100() {
   return (neuron0x311c920()*0.664995);
}

double NNfunction_ss_cLcR::synapse0x313b140() {
   return (neuron0x311d2f0()*-2.23553);
}

double NNfunction_ss_cLcR::synapse0x313b180() {
   return (neuron0x312f930()*-3.04036);
}

double NNfunction_ss_cLcR::synapse0x313b1c0() {
   return (neuron0x31301e0()*-2.31289);
}

double NNfunction_ss_cLcR::synapse0x313b200() {
   return (neuron0x3130bb0()*-0.732171);
}

double NNfunction_ss_cLcR::synapse0x313b240() {
   return (neuron0x3131580()*-1.69041);
}

double NNfunction_ss_cLcR::synapse0x313b5c0() {
   return (neuron0x310d500()*-0.168734);
}

double NNfunction_ss_cLcR::synapse0x313b600() {
   return (neuron0x310de10()*-1.10804);
}

double NNfunction_ss_cLcR::synapse0x313b640() {
   return (neuron0x310e8f0()*0.745548);
}

double NNfunction_ss_cLcR::synapse0x313b680() {
   return (neuron0x2ec8180()*-0.13049);
}

double NNfunction_ss_cLcR::synapse0x313b6c0() {
   return (neuron0x310f710()*-2.1341);
}

double NNfunction_ss_cLcR::synapse0x313b700() {
   return (neuron0x31100e0()*-0.0312496);
}

double NNfunction_ss_cLcR::synapse0x313b740() {
   return (neuron0x3110eb0()*0.49725);
}

double NNfunction_ss_cLcR::synapse0x313b780() {
   return (neuron0x3111880()*-0.0578383);
}

double NNfunction_ss_cLcR::synapse0x313b7c0() {
   return (neuron0x3112250()*-1.04813);
}

double NNfunction_ss_cLcR::synapse0x313b800() {
   return (neuron0x3112d30()*1.30515);
}

double NNfunction_ss_cLcR::synapse0x313b840() {
   return (neuron0x3113700()*-0.0704913);
}

double NNfunction_ss_cLcR::synapse0x313b880() {
   return (neuron0x31107e0()*-0.125815);
}

double NNfunction_ss_cLcR::synapse0x313b8c0() {
   return (neuron0x31152b0()*0.0430522);
}

double NNfunction_ss_cLcR::synapse0x313b900() {
   return (neuron0x3115c80()*-4.23883);
}

double NNfunction_ss_cLcR::synapse0x313b940() {
   return (neuron0x3116650()*-0.107414);
}

double NNfunction_ss_cLcR::synapse0x313b980() {
   return (neuron0x3117020()*-0.654428);
}

double NNfunction_ss_cLcR::synapse0x313b410() {
   return (neuron0x3118e30()*2.49234);
}

double NNfunction_ss_cLcR::synapse0x313b450() {
   return (neuron0x3119110()*0.0897299);
}

double NNfunction_ss_cLcR::synapse0x313bad0() {
   return (neuron0x3119ae0()*0.22554);
}

double NNfunction_ss_cLcR::synapse0x313bb10() {
   return (neuron0x311a4b0()*-0.166069);
}

double NNfunction_ss_cLcR::synapse0x313bb50() {
   return (neuron0x311ae80()*0.115811);
}

double NNfunction_ss_cLcR::synapse0x313bb90() {
   return (neuron0x311b850()*0.959883);
}

double NNfunction_ss_cLcR::synapse0x313bbd0() {
   return (neuron0x31143a0()*-0.846593);
}

double NNfunction_ss_cLcR::synapse0x313bc10() {
   return (neuron0x3114d70()*0.202837);
}

double NNfunction_ss_cLcR::synapse0x313bc50() {
   return (neuron0x311e5e0()*-0.323885);
}

double NNfunction_ss_cLcR::synapse0x313bc90() {
   return (neuron0x311efb0()*0.237048);
}

double NNfunction_ss_cLcR::synapse0x313bcd0() {
   return (neuron0x311f980()*1.26357);
}

double NNfunction_ss_cLcR::synapse0x313bd10() {
   return (neuron0x3120350()*-0.022406);
}

double NNfunction_ss_cLcR::synapse0x313bd50() {
   return (neuron0x3120d20()*-0.212055);
}

double NNfunction_ss_cLcR::synapse0x313bd90() {
   return (neuron0x31216f0()*0.189112);
}

double NNfunction_ss_cLcR::synapse0x313bdd0() {
   return (neuron0x31220c0()*-0.132101);
}

double NNfunction_ss_cLcR::synapse0x313be10() {
   return (neuron0x3122a90()*0.0776346);
}

double NNfunction_ss_cLcR::synapse0x313b9c0() {
   return (neuron0x3118b20()*0.0264916);
}

double NNfunction_ss_cLcR::synapse0x313ba00() {
   return (neuron0x3125670()*0.12151);
}

double NNfunction_ss_cLcR::synapse0x313ba40() {
   return (neuron0x3126040()*0.177298);
}

double NNfunction_ss_cLcR::synapse0x313ba80() {
   return (neuron0x3126a10()*0.0746974);
}

double NNfunction_ss_cLcR::synapse0x313c060() {
   return (neuron0x31273e0()*-0.786889);
}

double NNfunction_ss_cLcR::synapse0x313c0a0() {
   return (neuron0x3127db0()*-0.184916);
}

double NNfunction_ss_cLcR::synapse0x313c0e0() {
   return (neuron0x3128780()*0.437545);
}

double NNfunction_ss_cLcR::synapse0x313c120() {
   return (neuron0x3129150()*1.23926);
}

double NNfunction_ss_cLcR::synapse0x313c160() {
   return (neuron0x3129b20()*1.33386);
}

double NNfunction_ss_cLcR::synapse0x313c1a0() {
   return (neuron0x312a700()*-0.78865);
}

double NNfunction_ss_cLcR::synapse0x313c1e0() {
   return (neuron0x312b0d0()*0.827017);
}

double NNfunction_ss_cLcR::synapse0x313c220() {
   return (neuron0x311bf50()*-0.406856);
}

double NNfunction_ss_cLcR::synapse0x313c260() {
   return (neuron0x311c920()*0.263402);
}

double NNfunction_ss_cLcR::synapse0x313c2a0() {
   return (neuron0x311d2f0()*-0.5536);
}

double NNfunction_ss_cLcR::synapse0x313c2e0() {
   return (neuron0x312f930()*2.72462);
}

double NNfunction_ss_cLcR::synapse0x313c320() {
   return (neuron0x31301e0()*0.189018);
}

double NNfunction_ss_cLcR::synapse0x313c360() {
   return (neuron0x3130bb0()*-1.00379);
}

double NNfunction_ss_cLcR::synapse0x313c3a0() {
   return (neuron0x3131580()*-3.03296);
}

double NNfunction_ss_cLcR::synapse0x310d4c0() {
   return (neuron0x3138780()*-8.02226);
}

double NNfunction_ss_cLcR::synapse0x313c600() {
   return (neuron0x3138b20()*-7.66591);
}

double NNfunction_ss_cLcR::synapse0x313c640() {
   return (neuron0x3138fc0()*-8.45553);
}

double NNfunction_ss_cLcR::synapse0x313c680() {
   return (neuron0x313a120()*-5.36965);
}

double NNfunction_ss_cLcR::synapse0x313c6c0() {
   return (neuron0x313b280()*-3.1114);
}

