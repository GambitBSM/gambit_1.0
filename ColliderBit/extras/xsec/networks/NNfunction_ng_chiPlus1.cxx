#include "NNfunction_ng_chiPlus1.h"
#include <cmath>

double NNfunction_ng_chiPlus1::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.1795)/15.0619;
   input1 = (in1 - 49.3703)/874.038;
   input2 = (in2 - 382.286)/426.153;
   input3 = (in3 - 258.243)/685.11;
   input4 = (in4 - 1075.41)/884.865;
   input5 = (in5 - 1006.27)/915.056;
   input6 = (in6 - 1009.97)/914.006;
   input7 = (in7 - 1001.34)/888.033;
   input8 = (in8 - 1012)/932.805;
   input9 = (in9 - 1004.68)/924.934;
   input10 = (in10 - 995.456)/895.932;
   input11 = (in11 - 899.318)/823.898;
   input12 = (in12 - 976.651)/869.496;
   input13 = (in13 - 740.717)/605.979;
   input14 = (in14 - 974.029)/842.475;
   input15 = (in15 - 975.398)/842.509;
   input16 = (in16 - 649.913)/519.012;
   input17 = (in17 - 998.817)/886.57;
   input18 = (in18 - 997.211)/887.026;
   input19 = (in19 - 984.845)/836.241;
   input20 = (in20 - -212.032)/526.592;
   input21 = (in21 - -282.712)/1123.21;
   input22 = (in22 - -32.5365)/1145.18;
   input23 = (in23 - -4.91196)/612.73;
   switch(index) {
     case 0:
         return neuron0x363bb40();
     default:
         return 0.;
   }
}

double NNfunction_ng_chiPlus1::Value(int index, double* input) {
   input0 = (input[0] - 23.1795)/15.0619;
   input1 = (input[1] - 49.3703)/874.038;
   input2 = (input[2] - 382.286)/426.153;
   input3 = (input[3] - 258.243)/685.11;
   input4 = (input[4] - 1075.41)/884.865;
   input5 = (input[5] - 1006.27)/915.056;
   input6 = (input[6] - 1009.97)/914.006;
   input7 = (input[7] - 1001.34)/888.033;
   input8 = (input[8] - 1012)/932.805;
   input9 = (input[9] - 1004.68)/924.934;
   input10 = (input[10] - 995.456)/895.932;
   input11 = (input[11] - 899.318)/823.898;
   input12 = (input[12] - 976.651)/869.496;
   input13 = (input[13] - 740.717)/605.979;
   input14 = (input[14] - 974.029)/842.475;
   input15 = (input[15] - 975.398)/842.509;
   input16 = (input[16] - 649.913)/519.012;
   input17 = (input[17] - 998.817)/886.57;
   input18 = (input[18] - 997.211)/887.026;
   input19 = (input[19] - 984.845)/836.241;
   input20 = (input[20] - -212.032)/526.592;
   input21 = (input[21] - -282.712)/1123.21;
   input22 = (input[22] - -32.5365)/1145.18;
   input23 = (input[23] - -4.91196)/612.73;
   switch(index) {
     case 0:
         return neuron0x363bb40();
     default:
         return 0.;
   }
}

double NNfunction_ng_chiPlus1::neuron0x3606bb0() {
   return input0;
}

double NNfunction_ng_chiPlus1::neuron0x3606e60() {
   return input1;
}

double NNfunction_ng_chiPlus1::neuron0x36071a0() {
   return input2;
}

double NNfunction_ng_chiPlus1::neuron0x36074e0() {
   return input3;
}

double NNfunction_ng_chiPlus1::neuron0x3607820() {
   return input4;
}

double NNfunction_ng_chiPlus1::neuron0x3607b60() {
   return input5;
}

double NNfunction_ng_chiPlus1::neuron0x3607ea0() {
   return input6;
}

double NNfunction_ng_chiPlus1::neuron0x36081e0() {
   return input7;
}

double NNfunction_ng_chiPlus1::neuron0x3608520() {
   return input8;
}

double NNfunction_ng_chiPlus1::neuron0x3608860() {
   return input9;
}

double NNfunction_ng_chiPlus1::neuron0x3608ba0() {
   return input10;
}

double NNfunction_ng_chiPlus1::neuron0x3608ee0() {
   return input11;
}

double NNfunction_ng_chiPlus1::neuron0x3609220() {
   return input12;
}

double NNfunction_ng_chiPlus1::neuron0x3609560() {
   return input13;
}

double NNfunction_ng_chiPlus1::neuron0x36098a0() {
   return input14;
}

double NNfunction_ng_chiPlus1::neuron0x3609be0() {
   return input15;
}

double NNfunction_ng_chiPlus1::neuron0x3609f20() {
   return input16;
}

double NNfunction_ng_chiPlus1::neuron0x360a480() {
   return input17;
}

double NNfunction_ng_chiPlus1::neuron0x360a6a0() {
   return input18;
}

double NNfunction_ng_chiPlus1::neuron0x360a9e0() {
   return input19;
}

double NNfunction_ng_chiPlus1::neuron0x360ad20() {
   return input20;
}

double NNfunction_ng_chiPlus1::neuron0x360b060() {
   return input21;
}

double NNfunction_ng_chiPlus1::neuron0x360b3a0() {
   return input22;
}

double NNfunction_ng_chiPlus1::neuron0x360b6e0() {
   return input23;
}

double NNfunction_ng_chiPlus1::input0x360bb50() {
   double input = -0.97766;
   input += synapse0x360be90();
   input += synapse0x360bed0();
   input += synapse0x360bf10();
   input += synapse0x360bf50();
   input += synapse0x360bf90();
   input += synapse0x360bfd0();
   input += synapse0x360c010();
   input += synapse0x360c050();
   input += synapse0x360c090();
   input += synapse0x360c0d0();
   input += synapse0x360c110();
   input += synapse0x360c150();
   input += synapse0x360c190();
   input += synapse0x360c1d0();
   input += synapse0x360c210();
   input += synapse0x360c250();
   input += synapse0x360bce0();
   input += synapse0x360bd20();
   input += synapse0x230b790();
   input += synapse0x230b7d0();
   input += synapse0x360c3a0();
   input += synapse0x360c3e0();
   input += synapse0x360c420();
   input += synapse0x360c460();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x360bb50() {
   double input = input0x360bb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x360c4a0() {
   double input = 1.6527;
   input += synapse0x360c7e0();
   input += synapse0x360c820();
   input += synapse0x360c860();
   input += synapse0x360c8a0();
   input += synapse0x360c8e0();
   input += synapse0x360c920();
   input += synapse0x360c960();
   input += synapse0x360c9a0();
   input += synapse0x360c9e0();
   input += synapse0x360c290();
   input += synapse0x360c2d0();
   input += synapse0x360c310();
   input += synapse0x360c350();
   input += synapse0x360cc30();
   input += synapse0x360cc70();
   input += synapse0x360ccb0();
   input += synapse0x360c630();
   input += synapse0x360c670();
   input += synapse0x360ce00();
   input += synapse0x360ce40();
   input += synapse0x360ce80();
   input += synapse0x360cec0();
   input += synapse0x360cf00();
   input += synapse0x360cf40();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x360c4a0() {
   double input = input0x360c4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x360cf80() {
   double input = 0.906868;
   input += synapse0x360d2c0();
   input += synapse0x360d300();
   input += synapse0x360d340();
   input += synapse0x360d380();
   input += synapse0x360d3c0();
   input += synapse0x360d400();
   input += synapse0x360d440();
   input += synapse0x360d480();
   input += synapse0x360d4c0();
   input += synapse0x360d500();
   input += synapse0x360d540();
   input += synapse0x360d580();
   input += synapse0x360d5c0();
   input += synapse0x360d600();
   input += synapse0x360d640();
   input += synapse0x360d680();
   input += synapse0x360d110();
   input += synapse0x360d150();
   input += synapse0x22f8cd0();
   input += synapse0x33d0cb0();
   input += synapse0x33d0cf0();
   input += synapse0x360f5c0();
   input += synapse0x360f600();
   input += synapse0x36068f0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x360cf80() {
   double input = input0x360cf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x360ca20() {
   double input = -0.953068;
   input += synapse0x36069c0();
   input += synapse0x33d1530();
   input += synapse0x360cbb0();
   input += synapse0x360cbf0();
   input += synapse0x360d7d0();
   input += synapse0x360d810();
   input += synapse0x360d850();
   input += synapse0x360d890();
   input += synapse0x360d8d0();
   input += synapse0x360d910();
   input += synapse0x360d950();
   input += synapse0x360d990();
   input += synapse0x360d9d0();
   input += synapse0x360da10();
   input += synapse0x360da50();
   input += synapse0x360da90();
   input += synapse0x3606930();
   input += synapse0x3606970();
   input += synapse0x360dbe0();
   input += synapse0x360dc20();
   input += synapse0x360dc60();
   input += synapse0x360dca0();
   input += synapse0x360dce0();
   input += synapse0x360dd20();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x360ca20() {
   double input = input0x360ca20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x360dd60() {
   double input = -0.602305;
   input += synapse0x360e0a0();
   input += synapse0x360e0e0();
   input += synapse0x360e120();
   input += synapse0x360e160();
   input += synapse0x360e1a0();
   input += synapse0x360e1e0();
   input += synapse0x360e220();
   input += synapse0x360e260();
   input += synapse0x360e2a0();
   input += synapse0x360e2e0();
   input += synapse0x360e320();
   input += synapse0x360e360();
   input += synapse0x360e3a0();
   input += synapse0x360e3e0();
   input += synapse0x360e420();
   input += synapse0x360e460();
   input += synapse0x360e5b0();
   input += synapse0x360def0();
   input += synapse0x360df30();
   input += synapse0x360f700();
   input += synapse0x360f740();
   input += synapse0x360f780();
   input += synapse0x360f7c0();
   input += synapse0x360f800();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x360dd60() {
   double input = input0x360dd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x360f840() {
   double input = 0.15671;
   input += synapse0x360fb80();
   input += synapse0x360fbc0();
   input += synapse0x360fc00();
   input += synapse0x360fc40();
   input += synapse0x360fc80();
   input += synapse0x360fcc0();
   input += synapse0x360fd00();
   input += synapse0x360fd40();
   input += synapse0x360fd80();
   input += synapse0x33d1000();
   input += synapse0x33d1040();
   input += synapse0x33d1080();
   input += synapse0x33d10c0();
   input += synapse0x33d1100();
   input += synapse0x33d1140();
   input += synapse0x33d1180();
   input += synapse0x360f9d0();
   input += synapse0x360fa10();
   input += synapse0x33d12d0();
   input += synapse0x33d1310();
   input += synapse0x33d1350();
   input += synapse0x33d1390();
   input += synapse0x33d13d0();
   input += synapse0x36105d0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x360f840() {
   double input = input0x360f840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3610610() {
   double input = -0.536984;
   input += synapse0x3610950();
   input += synapse0x3610990();
   input += synapse0x36109d0();
   input += synapse0x3610a10();
   input += synapse0x3610a50();
   input += synapse0x3610a90();
   input += synapse0x3610ad0();
   input += synapse0x3610b10();
   input += synapse0x3610b50();
   input += synapse0x3610b90();
   input += synapse0x3610bd0();
   input += synapse0x3610c10();
   input += synapse0x3610c50();
   input += synapse0x3610c90();
   input += synapse0x3610cd0();
   input += synapse0x3610d10();
   input += synapse0x36107a0();
   input += synapse0x36107e0();
   input += synapse0x3610e60();
   input += synapse0x3610ea0();
   input += synapse0x3610ee0();
   input += synapse0x3610f20();
   input += synapse0x3610f60();
   input += synapse0x3610fa0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3610610() {
   double input = input0x3610610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3610fe0() {
   double input = 0.666454;
   input += synapse0x3611320();
   input += synapse0x3611360();
   input += synapse0x36113a0();
   input += synapse0x36113e0();
   input += synapse0x3611420();
   input += synapse0x3611460();
   input += synapse0x36114a0();
   input += synapse0x36114e0();
   input += synapse0x3611520();
   input += synapse0x3611560();
   input += synapse0x36115a0();
   input += synapse0x36115e0();
   input += synapse0x3611620();
   input += synapse0x3611660();
   input += synapse0x36116a0();
   input += synapse0x36116e0();
   input += synapse0x3611170();
   input += synapse0x36111b0();
   input += synapse0x3611830();
   input += synapse0x3611870();
   input += synapse0x36118b0();
   input += synapse0x36118f0();
   input += synapse0x3611930();
   input += synapse0x3611970();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3610fe0() {
   double input = input0x3610fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x36119b0() {
   double input = -0.4824;
   input += synapse0x360a370();
   input += synapse0x360a3b0();
   input += synapse0x360a3f0();
   input += synapse0x360a430();
   input += synapse0x3611f00();
   input += synapse0x3611f40();
   input += synapse0x3611f80();
   input += synapse0x3611fc0();
   input += synapse0x3612000();
   input += synapse0x3612040();
   input += synapse0x3612080();
   input += synapse0x36120c0();
   input += synapse0x3612100();
   input += synapse0x3612140();
   input += synapse0x3612180();
   input += synapse0x36121c0();
   input += synapse0x3611b40();
   input += synapse0x3611b80();
   input += synapse0x3612310();
   input += synapse0x3612350();
   input += synapse0x3612390();
   input += synapse0x36123d0();
   input += synapse0x3612410();
   input += synapse0x3612450();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x36119b0() {
   double input = input0x36119b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3612490() {
   double input = -1.16039;
   input += synapse0x36127d0();
   input += synapse0x3612810();
   input += synapse0x3612850();
   input += synapse0x3612890();
   input += synapse0x36128d0();
   input += synapse0x3612910();
   input += synapse0x3612950();
   input += synapse0x3612990();
   input += synapse0x36129d0();
   input += synapse0x3612a10();
   input += synapse0x3612a50();
   input += synapse0x3612a90();
   input += synapse0x3612ad0();
   input += synapse0x3612b10();
   input += synapse0x3612b50();
   input += synapse0x3612b90();
   input += synapse0x3612620();
   input += synapse0x3612660();
   input += synapse0x3612ce0();
   input += synapse0x3612d20();
   input += synapse0x3612d60();
   input += synapse0x3612da0();
   input += synapse0x3612de0();
   input += synapse0x3612e20();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3612490() {
   double input = input0x3612490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3612e60() {
   double input = -0.430608;
   input += synapse0x36131a0();
   input += synapse0x36131e0();
   input += synapse0x3613220();
   input += synapse0x3613260();
   input += synapse0x36132a0();
   input += synapse0x36132e0();
   input += synapse0x3613320();
   input += synapse0x3613360();
   input += synapse0x36133a0();
   input += synapse0x36133e0();
   input += synapse0x3613420();
   input += synapse0x3613460();
   input += synapse0x36134a0();
   input += synapse0x36134e0();
   input += synapse0x3613520();
   input += synapse0x3613560();
   input += synapse0x3612ff0();
   input += synapse0x3613030();
   input += synapse0x360fdc0();
   input += synapse0x360fe00();
   input += synapse0x360fe40();
   input += synapse0x360fe80();
   input += synapse0x360fec0();
   input += synapse0x360ff00();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3612e60() {
   double input = input0x3612e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x360ff40() {
   double input = 0.554821;
   input += synapse0x3610280();
   input += synapse0x36102c0();
   input += synapse0x3610300();
   input += synapse0x3610340();
   input += synapse0x3610380();
   input += synapse0x36103c0();
   input += synapse0x3610400();
   input += synapse0x3610440();
   input += synapse0x3610480();
   input += synapse0x36104c0();
   input += synapse0x3610500();
   input += synapse0x3610540();
   input += synapse0x3610580();
   input += synapse0x36146c0();
   input += synapse0x3614700();
   input += synapse0x3614740();
   input += synapse0x36100d0();
   input += synapse0x3610110();
   input += synapse0x3614890();
   input += synapse0x36148d0();
   input += synapse0x3614910();
   input += synapse0x3614950();
   input += synapse0x3614990();
   input += synapse0x36149d0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x360ff40() {
   double input = input0x360ff40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3614a10() {
   double input = 0.260258;
   input += synapse0x3614d50();
   input += synapse0x3614d90();
   input += synapse0x3614dd0();
   input += synapse0x3614e10();
   input += synapse0x3614e50();
   input += synapse0x3614e90();
   input += synapse0x3614ed0();
   input += synapse0x3614f10();
   input += synapse0x3614f50();
   input += synapse0x3614f90();
   input += synapse0x3614fd0();
   input += synapse0x3615010();
   input += synapse0x3615050();
   input += synapse0x3615090();
   input += synapse0x36150d0();
   input += synapse0x3615110();
   input += synapse0x3614ba0();
   input += synapse0x3614be0();
   input += synapse0x3615260();
   input += synapse0x36152a0();
   input += synapse0x36152e0();
   input += synapse0x3615320();
   input += synapse0x3615360();
   input += synapse0x36153a0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3614a10() {
   double input = input0x3614a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x36153e0() {
   double input = 1.02823;
   input += synapse0x3615720();
   input += synapse0x3615760();
   input += synapse0x36157a0();
   input += synapse0x36157e0();
   input += synapse0x3615820();
   input += synapse0x3615860();
   input += synapse0x36158a0();
   input += synapse0x36158e0();
   input += synapse0x3615920();
   input += synapse0x3615960();
   input += synapse0x36159a0();
   input += synapse0x36159e0();
   input += synapse0x3615a20();
   input += synapse0x3615a60();
   input += synapse0x3615aa0();
   input += synapse0x3615ae0();
   input += synapse0x3615570();
   input += synapse0x36155b0();
   input += synapse0x3615c30();
   input += synapse0x3615c70();
   input += synapse0x3615cb0();
   input += synapse0x3615cf0();
   input += synapse0x3615d30();
   input += synapse0x3615d70();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x36153e0() {
   double input = input0x36153e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3615db0() {
   double input = -0.0442623;
   input += synapse0x36160f0();
   input += synapse0x3616130();
   input += synapse0x3616170();
   input += synapse0x36161b0();
   input += synapse0x36161f0();
   input += synapse0x3616230();
   input += synapse0x3616270();
   input += synapse0x36162b0();
   input += synapse0x36162f0();
   input += synapse0x3616330();
   input += synapse0x3616370();
   input += synapse0x36163b0();
   input += synapse0x36163f0();
   input += synapse0x3616430();
   input += synapse0x3616470();
   input += synapse0x36164b0();
   input += synapse0x3615f40();
   input += synapse0x3615f80();
   input += synapse0x3616600();
   input += synapse0x3616640();
   input += synapse0x3616680();
   input += synapse0x36166c0();
   input += synapse0x3616700();
   input += synapse0x3616740();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3615db0() {
   double input = input0x3615db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3616780() {
   double input = -0.492732;
   input += synapse0x3616ac0();
   input += synapse0x3606d40();
   input += synapse0x3606d80();
   input += synapse0x3607080();
   input += synapse0x36070c0();
   input += synapse0x36073c0();
   input += synapse0x3607400();
   input += synapse0x3607700();
   input += synapse0x3607740();
   input += synapse0x3607a40();
   input += synapse0x3607a80();
   input += synapse0x3607d80();
   input += synapse0x3607dc0();
   input += synapse0x36080c0();
   input += synapse0x3608100();
   input += synapse0x3608400();
   input += synapse0x3608440();
   input += synapse0x3608740();
   input += synapse0x3608780();
   input += synapse0x3608a80();
   input += synapse0x3608ac0();
   input += synapse0x3608dc0();
   input += synapse0x3608e00();
   input += synapse0x3609100();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3616780() {
   double input = input0x3616780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3618590() {
   double input = -2.45523;
   input += synapse0x3609140();
   input += synapse0x3609e00();
   input += synapse0x3609e40();
   input += synapse0x3616910();
   input += synapse0x3616950();
   input += synapse0x360a140();
   input += synapse0x360a180();
   input += synapse0x230c130();
   input += synapse0x230c170();
   input += synapse0x360a8c0();
   input += synapse0x360a900();
   input += synapse0x360ac00();
   input += synapse0x360ac40();
   input += synapse0x360af40();
   input += synapse0x360af80();
   input += synapse0x360b280();
   input += synapse0x360b2c0();
   input += synapse0x360b5c0();
   input += synapse0x360b600();
   input += synapse0x360b900();
   input += synapse0x360b940();
   input += synapse0x3609440();
   input += synapse0x3609480();
   input += synapse0x3618830();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3618590() {
   double input = input0x3618590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3618870() {
   double input = -2.06509;
   input += synapse0x3618bb0();
   input += synapse0x3618bf0();
   input += synapse0x3618c30();
   input += synapse0x3618c70();
   input += synapse0x3618cb0();
   input += synapse0x3618cf0();
   input += synapse0x3618d30();
   input += synapse0x3618d70();
   input += synapse0x3618db0();
   input += synapse0x3618df0();
   input += synapse0x3618e30();
   input += synapse0x3618e70();
   input += synapse0x3618eb0();
   input += synapse0x3618ef0();
   input += synapse0x3618f30();
   input += synapse0x3618f70();
   input += synapse0x3618a00();
   input += synapse0x3618a40();
   input += synapse0x36190c0();
   input += synapse0x3619100();
   input += synapse0x3619140();
   input += synapse0x3619180();
   input += synapse0x36191c0();
   input += synapse0x3619200();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3618870() {
   double input = input0x3618870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3619240() {
   double input = -1.41945;
   input += synapse0x3619580();
   input += synapse0x36195c0();
   input += synapse0x3619600();
   input += synapse0x3619640();
   input += synapse0x3619680();
   input += synapse0x36196c0();
   input += synapse0x3619700();
   input += synapse0x3619740();
   input += synapse0x3619780();
   input += synapse0x36197c0();
   input += synapse0x3619800();
   input += synapse0x3619840();
   input += synapse0x3619880();
   input += synapse0x36198c0();
   input += synapse0x3619900();
   input += synapse0x3619940();
   input += synapse0x36193d0();
   input += synapse0x3619410();
   input += synapse0x3619a90();
   input += synapse0x3619ad0();
   input += synapse0x3619b10();
   input += synapse0x3619b50();
   input += synapse0x3619b90();
   input += synapse0x3619bd0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3619240() {
   double input = input0x3619240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3619c10() {
   double input = -1.49052;
   input += synapse0x3619f50();
   input += synapse0x3619f90();
   input += synapse0x3619fd0();
   input += synapse0x361a010();
   input += synapse0x361a050();
   input += synapse0x361a090();
   input += synapse0x361a0d0();
   input += synapse0x361a110();
   input += synapse0x361a150();
   input += synapse0x361a190();
   input += synapse0x361a1d0();
   input += synapse0x361a210();
   input += synapse0x361a250();
   input += synapse0x361a290();
   input += synapse0x361a2d0();
   input += synapse0x361a310();
   input += synapse0x3619da0();
   input += synapse0x3619de0();
   input += synapse0x361a460();
   input += synapse0x361a4a0();
   input += synapse0x361a4e0();
   input += synapse0x361a520();
   input += synapse0x361a560();
   input += synapse0x361a5a0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3619c10() {
   double input = input0x3619c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x361a5e0() {
   double input = -2.02514;
   input += synapse0x361a920();
   input += synapse0x361a960();
   input += synapse0x361a9a0();
   input += synapse0x361a9e0();
   input += synapse0x361aa20();
   input += synapse0x361aa60();
   input += synapse0x361aaa0();
   input += synapse0x361aae0();
   input += synapse0x361ab20();
   input += synapse0x361ab60();
   input += synapse0x361aba0();
   input += synapse0x361abe0();
   input += synapse0x361ac20();
   input += synapse0x361ac60();
   input += synapse0x361aca0();
   input += synapse0x361ace0();
   input += synapse0x361a770();
   input += synapse0x361a7b0();
   input += synapse0x361ae30();
   input += synapse0x361ae70();
   input += synapse0x361aeb0();
   input += synapse0x361aef0();
   input += synapse0x361af30();
   input += synapse0x361af70();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x361a5e0() {
   double input = input0x361a5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x361afb0() {
   double input = -2.13759;
   input += synapse0x361b2f0();
   input += synapse0x361b330();
   input += synapse0x361b370();
   input += synapse0x361b3b0();
   input += synapse0x361b3f0();
   input += synapse0x361b430();
   input += synapse0x361b470();
   input += synapse0x361b4b0();
   input += synapse0x361b4f0();
   input += synapse0x36136b0();
   input += synapse0x36136f0();
   input += synapse0x3613730();
   input += synapse0x3613770();
   input += synapse0x36137b0();
   input += synapse0x36137f0();
   input += synapse0x3613830();
   input += synapse0x361b140();
   input += synapse0x361b180();
   input += synapse0x3613980();
   input += synapse0x36139c0();
   input += synapse0x3613a00();
   input += synapse0x3613a40();
   input += synapse0x3613a80();
   input += synapse0x3613ac0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x361afb0() {
   double input = input0x361afb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3613b00() {
   double input = 3.19966;
   input += synapse0x3613e40();
   input += synapse0x3613e80();
   input += synapse0x3613ec0();
   input += synapse0x3613f00();
   input += synapse0x3613f40();
   input += synapse0x3613f80();
   input += synapse0x3613fc0();
   input += synapse0x3614000();
   input += synapse0x3614040();
   input += synapse0x3614080();
   input += synapse0x36140c0();
   input += synapse0x3614100();
   input += synapse0x3614140();
   input += synapse0x3614180();
   input += synapse0x36141c0();
   input += synapse0x3614200();
   input += synapse0x3613c90();
   input += synapse0x3613cd0();
   input += synapse0x3614350();
   input += synapse0x3614390();
   input += synapse0x36143d0();
   input += synapse0x3614410();
   input += synapse0x3614450();
   input += synapse0x3614490();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3613b00() {
   double input = input0x3613b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x36144d0() {
   double input = -0.585053;
   input += synapse0x3614660();
   input += synapse0x361d6f0();
   input += synapse0x361d730();
   input += synapse0x361d770();
   input += synapse0x361d7b0();
   input += synapse0x361d7f0();
   input += synapse0x361d830();
   input += synapse0x361d870();
   input += synapse0x361d8b0();
   input += synapse0x361d8f0();
   input += synapse0x361d930();
   input += synapse0x361d970();
   input += synapse0x361d9b0();
   input += synapse0x361d9f0();
   input += synapse0x361da30();
   input += synapse0x361da70();
   input += synapse0x361d540();
   input += synapse0x361d580();
   input += synapse0x361dbc0();
   input += synapse0x361dc00();
   input += synapse0x361dc40();
   input += synapse0x361dc80();
   input += synapse0x361dcc0();
   input += synapse0x361dd00();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x36144d0() {
   double input = input0x36144d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x361dd40() {
   double input = 1.16799;
   input += synapse0x361e080();
   input += synapse0x361e0c0();
   input += synapse0x361e100();
   input += synapse0x361e140();
   input += synapse0x361e180();
   input += synapse0x361e1c0();
   input += synapse0x361e200();
   input += synapse0x361e240();
   input += synapse0x361e280();
   input += synapse0x361e2c0();
   input += synapse0x361e300();
   input += synapse0x361e340();
   input += synapse0x361e380();
   input += synapse0x361e3c0();
   input += synapse0x361e400();
   input += synapse0x361e440();
   input += synapse0x361ded0();
   input += synapse0x361df10();
   input += synapse0x361e590();
   input += synapse0x361e5d0();
   input += synapse0x361e610();
   input += synapse0x361e650();
   input += synapse0x361e690();
   input += synapse0x361e6d0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x361dd40() {
   double input = input0x361dd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x361e710() {
   double input = -1.04605;
   input += synapse0x361ea50();
   input += synapse0x361ea90();
   input += synapse0x361ead0();
   input += synapse0x361eb10();
   input += synapse0x361eb50();
   input += synapse0x361eb90();
   input += synapse0x361ebd0();
   input += synapse0x361ec10();
   input += synapse0x361ec50();
   input += synapse0x361ec90();
   input += synapse0x361ecd0();
   input += synapse0x361ed10();
   input += synapse0x361ed50();
   input += synapse0x361ed90();
   input += synapse0x361edd0();
   input += synapse0x361ee10();
   input += synapse0x361e8a0();
   input += synapse0x361e8e0();
   input += synapse0x361ef60();
   input += synapse0x361efa0();
   input += synapse0x361efe0();
   input += synapse0x361f020();
   input += synapse0x361f060();
   input += synapse0x361f0a0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x361e710() {
   double input = input0x361e710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x361f0e0() {
   double input = 0.956592;
   input += synapse0x361f420();
   input += synapse0x361f460();
   input += synapse0x361f4a0();
   input += synapse0x361f4e0();
   input += synapse0x361f520();
   input += synapse0x361f560();
   input += synapse0x361f5a0();
   input += synapse0x361f5e0();
   input += synapse0x361f620();
   input += synapse0x361f660();
   input += synapse0x361f6a0();
   input += synapse0x361f6e0();
   input += synapse0x361f720();
   input += synapse0x361f760();
   input += synapse0x361f7a0();
   input += synapse0x361f7e0();
   input += synapse0x361f270();
   input += synapse0x361f2b0();
   input += synapse0x361f930();
   input += synapse0x361f970();
   input += synapse0x361f9b0();
   input += synapse0x361f9f0();
   input += synapse0x361fa30();
   input += synapse0x361fa70();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x361f0e0() {
   double input = input0x361f0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x361fab0() {
   double input = -0.0128983;
   input += synapse0x361fdf0();
   input += synapse0x361fe30();
   input += synapse0x361fe70();
   input += synapse0x361feb0();
   input += synapse0x361fef0();
   input += synapse0x361ff30();
   input += synapse0x361ff70();
   input += synapse0x361ffb0();
   input += synapse0x361fff0();
   input += synapse0x3620030();
   input += synapse0x3620070();
   input += synapse0x36200b0();
   input += synapse0x36200f0();
   input += synapse0x3620130();
   input += synapse0x3620170();
   input += synapse0x36201b0();
   input += synapse0x361fc40();
   input += synapse0x361fc80();
   input += synapse0x3620300();
   input += synapse0x3620340();
   input += synapse0x3620380();
   input += synapse0x36203c0();
   input += synapse0x3620400();
   input += synapse0x3620440();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x361fab0() {
   double input = input0x361fab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3620480() {
   double input = -0.0791952;
   input += synapse0x36207c0();
   input += synapse0x3620800();
   input += synapse0x3620840();
   input += synapse0x3620880();
   input += synapse0x36208c0();
   input += synapse0x3620900();
   input += synapse0x3620940();
   input += synapse0x3620980();
   input += synapse0x36209c0();
   input += synapse0x3620a00();
   input += synapse0x3620a40();
   input += synapse0x3620a80();
   input += synapse0x3620ac0();
   input += synapse0x3620b00();
   input += synapse0x3620b40();
   input += synapse0x3620b80();
   input += synapse0x3620610();
   input += synapse0x3620650();
   input += synapse0x3620cd0();
   input += synapse0x3620d10();
   input += synapse0x3620d50();
   input += synapse0x3620d90();
   input += synapse0x3620dd0();
   input += synapse0x3620e10();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3620480() {
   double input = input0x3620480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3620e50() {
   double input = -0.0919878;
   input += synapse0x3621190();
   input += synapse0x36211d0();
   input += synapse0x3621210();
   input += synapse0x3621250();
   input += synapse0x3621290();
   input += synapse0x36212d0();
   input += synapse0x3621310();
   input += synapse0x3621350();
   input += synapse0x3621390();
   input += synapse0x36213d0();
   input += synapse0x3621410();
   input += synapse0x3621450();
   input += synapse0x3621490();
   input += synapse0x36214d0();
   input += synapse0x3621510();
   input += synapse0x3621550();
   input += synapse0x3620fe0();
   input += synapse0x3621020();
   input += synapse0x36216a0();
   input += synapse0x36216e0();
   input += synapse0x3621720();
   input += synapse0x3621760();
   input += synapse0x36217a0();
   input += synapse0x36217e0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3620e50() {
   double input = input0x3620e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3621820() {
   double input = -0.391865;
   input += synapse0x3621b60();
   input += synapse0x3621ba0();
   input += synapse0x3621be0();
   input += synapse0x3621c20();
   input += synapse0x3621c60();
   input += synapse0x3621ca0();
   input += synapse0x3621ce0();
   input += synapse0x3621d20();
   input += synapse0x3621d60();
   input += synapse0x3621da0();
   input += synapse0x3621de0();
   input += synapse0x3621e20();
   input += synapse0x3621e60();
   input += synapse0x3621ea0();
   input += synapse0x3621ee0();
   input += synapse0x3621f20();
   input += synapse0x36219b0();
   input += synapse0x36219f0();
   input += synapse0x3622070();
   input += synapse0x36220b0();
   input += synapse0x36220f0();
   input += synapse0x3622130();
   input += synapse0x3622170();
   input += synapse0x36221b0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3621820() {
   double input = input0x3621820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x36221f0() {
   double input = -0.446532;
   input += synapse0x3622530();
   input += synapse0x3616b00();
   input += synapse0x3616b40();
   input += synapse0x3616b80();
   input += synapse0x3616dd0();
   input += synapse0x3616e10();
   input += synapse0x3616e50();
   input += synapse0x36170a0();
   input += synapse0x36170e0();
   input += synapse0x3617330();
   input += synapse0x3617370();
   input += synapse0x36173b0();
   input += synapse0x3617600();
   input += synapse0x3617640();
   input += synapse0x3617890();
   input += synapse0x36178d0();
   input += synapse0x3622380();
   input += synapse0x36223c0();
   input += synapse0x3617a20();
   input += synapse0x3617f30();
   input += synapse0x3617f70();
   input += synapse0x3617fb0();
   input += synapse0x3618200();
   input += synapse0x3618240();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x36221f0() {
   double input = input0x36221f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3618280() {
   double input = -2.70625;
   input += synapse0x3617af0();
   input += synapse0x3617b30();
   input += synapse0x3617b70();
   input += synapse0x3617bb0();
   input += synapse0x3618530();
   input += synapse0x3624880();
   input += synapse0x36248c0();
   input += synapse0x3624900();
   input += synapse0x3624940();
   input += synapse0x3624980();
   input += synapse0x36249c0();
   input += synapse0x3624a00();
   input += synapse0x3624a40();
   input += synapse0x3624a80();
   input += synapse0x3624ac0();
   input += synapse0x3624b00();
   input += synapse0x3618410();
   input += synapse0x3618450();
   input += synapse0x3624c50();
   input += synapse0x3624c90();
   input += synapse0x3624cd0();
   input += synapse0x3624d10();
   input += synapse0x3624d50();
   input += synapse0x3624d90();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3618280() {
   double input = input0x3618280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3624dd0() {
   double input = 1.69972;
   input += synapse0x3625110();
   input += synapse0x3625150();
   input += synapse0x3625190();
   input += synapse0x36251d0();
   input += synapse0x3625210();
   input += synapse0x3625250();
   input += synapse0x3625290();
   input += synapse0x36252d0();
   input += synapse0x3625310();
   input += synapse0x3625350();
   input += synapse0x3625390();
   input += synapse0x36253d0();
   input += synapse0x3625410();
   input += synapse0x3625450();
   input += synapse0x3625490();
   input += synapse0x36254d0();
   input += synapse0x3624f60();
   input += synapse0x3624fa0();
   input += synapse0x3625620();
   input += synapse0x3625660();
   input += synapse0x36256a0();
   input += synapse0x36256e0();
   input += synapse0x3625720();
   input += synapse0x3625760();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3624dd0() {
   double input = input0x3624dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x36257a0() {
   double input = 3.72504;
   input += synapse0x3625ae0();
   input += synapse0x3625b20();
   input += synapse0x3625b60();
   input += synapse0x3625ba0();
   input += synapse0x3625be0();
   input += synapse0x3625c20();
   input += synapse0x3625c60();
   input += synapse0x3625ca0();
   input += synapse0x3625ce0();
   input += synapse0x3625d20();
   input += synapse0x3625d60();
   input += synapse0x3625da0();
   input += synapse0x3625de0();
   input += synapse0x3625e20();
   input += synapse0x3625e60();
   input += synapse0x3625ea0();
   input += synapse0x3625930();
   input += synapse0x3625970();
   input += synapse0x3625ff0();
   input += synapse0x3626030();
   input += synapse0x3626070();
   input += synapse0x36260b0();
   input += synapse0x36260f0();
   input += synapse0x3626130();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x36257a0() {
   double input = input0x36257a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3626170() {
   double input = 2.64956;
   input += synapse0x36264b0();
   input += synapse0x36264f0();
   input += synapse0x3626530();
   input += synapse0x3626570();
   input += synapse0x36265b0();
   input += synapse0x36265f0();
   input += synapse0x3626630();
   input += synapse0x3626670();
   input += synapse0x36266b0();
   input += synapse0x36266f0();
   input += synapse0x3626730();
   input += synapse0x3626770();
   input += synapse0x36267b0();
   input += synapse0x36267f0();
   input += synapse0x3626830();
   input += synapse0x3626870();
   input += synapse0x3626300();
   input += synapse0x3626340();
   input += synapse0x36269c0();
   input += synapse0x3626a00();
   input += synapse0x3626a40();
   input += synapse0x3626a80();
   input += synapse0x3626ac0();
   input += synapse0x3626b00();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3626170() {
   double input = input0x3626170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3626b40() {
   double input = 0.275528;
   input += synapse0x3626e80();
   input += synapse0x3626ec0();
   input += synapse0x3626f00();
   input += synapse0x3626f40();
   input += synapse0x3626f80();
   input += synapse0x3626fc0();
   input += synapse0x3627000();
   input += synapse0x3627040();
   input += synapse0x3627080();
   input += synapse0x36270c0();
   input += synapse0x3627100();
   input += synapse0x3627140();
   input += synapse0x3627180();
   input += synapse0x36271c0();
   input += synapse0x3627200();
   input += synapse0x3627240();
   input += synapse0x3626cd0();
   input += synapse0x3626d10();
   input += synapse0x3627390();
   input += synapse0x36273d0();
   input += synapse0x3627410();
   input += synapse0x3627450();
   input += synapse0x3627490();
   input += synapse0x36274d0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3626b40() {
   double input = input0x3626b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3627510() {
   double input = -1.92914;
   input += synapse0x3627850();
   input += synapse0x3627890();
   input += synapse0x36278d0();
   input += synapse0x3627910();
   input += synapse0x3627950();
   input += synapse0x3627990();
   input += synapse0x36279d0();
   input += synapse0x3627a10();
   input += synapse0x3627a50();
   input += synapse0x3627a90();
   input += synapse0x3627ad0();
   input += synapse0x3627b10();
   input += synapse0x3627b50();
   input += synapse0x3627b90();
   input += synapse0x3627bd0();
   input += synapse0x3627c10();
   input += synapse0x36276a0();
   input += synapse0x36276e0();
   input += synapse0x3627d60();
   input += synapse0x3627da0();
   input += synapse0x3627de0();
   input += synapse0x3627e20();
   input += synapse0x3627e60();
   input += synapse0x3627ea0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3627510() {
   double input = input0x3627510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3627ee0() {
   double input = 0.135269;
   input += synapse0x3628220();
   input += synapse0x3628260();
   input += synapse0x36282a0();
   input += synapse0x36282e0();
   input += synapse0x3628320();
   input += synapse0x3628360();
   input += synapse0x36283a0();
   input += synapse0x36283e0();
   input += synapse0x3628420();
   input += synapse0x3628460();
   input += synapse0x36284a0();
   input += synapse0x36284e0();
   input += synapse0x3628520();
   input += synapse0x3628560();
   input += synapse0x36285a0();
   input += synapse0x36285e0();
   input += synapse0x3628070();
   input += synapse0x36280b0();
   input += synapse0x3628730();
   input += synapse0x3628770();
   input += synapse0x36287b0();
   input += synapse0x36287f0();
   input += synapse0x3628830();
   input += synapse0x3628870();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3627ee0() {
   double input = input0x3627ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x36288b0() {
   double input = -0.126158;
   input += synapse0x3628bf0();
   input += synapse0x3628c30();
   input += synapse0x3628c70();
   input += synapse0x3628cb0();
   input += synapse0x3628cf0();
   input += synapse0x3628d30();
   input += synapse0x3628d70();
   input += synapse0x3628db0();
   input += synapse0x3628df0();
   input += synapse0x3628e30();
   input += synapse0x3628e70();
   input += synapse0x3628eb0();
   input += synapse0x3628ef0();
   input += synapse0x3628f30();
   input += synapse0x3628f70();
   input += synapse0x3628fb0();
   input += synapse0x3628a40();
   input += synapse0x3628a80();
   input += synapse0x3629100();
   input += synapse0x3629140();
   input += synapse0x3629180();
   input += synapse0x36291c0();
   input += synapse0x3629200();
   input += synapse0x3629240();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x36288b0() {
   double input = input0x36288b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3629280() {
   double input = 1.01555;
   input += synapse0x3611cf0();
   input += synapse0x3611d30();
   input += synapse0x3611d70();
   input += synapse0x3611db0();
   input += synapse0x3611df0();
   input += synapse0x3611e30();
   input += synapse0x3611e70();
   input += synapse0x3611eb0();
   input += synapse0x36299d0();
   input += synapse0x3629a10();
   input += synapse0x3629a50();
   input += synapse0x3629a90();
   input += synapse0x3629ad0();
   input += synapse0x3629b10();
   input += synapse0x3629b50();
   input += synapse0x3629b90();
   input += synapse0x3629410();
   input += synapse0x3629450();
   input += synapse0x3629ce0();
   input += synapse0x3629d20();
   input += synapse0x3629d60();
   input += synapse0x3629da0();
   input += synapse0x3629de0();
   input += synapse0x3629e20();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3629280() {
   double input = input0x3629280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3629e60() {
   double input = 4.26237;
   input += synapse0x362a1a0();
   input += synapse0x362a1e0();
   input += synapse0x362a220();
   input += synapse0x362a260();
   input += synapse0x362a2a0();
   input += synapse0x362a2e0();
   input += synapse0x362a320();
   input += synapse0x362a360();
   input += synapse0x362a3a0();
   input += synapse0x362a3e0();
   input += synapse0x362a420();
   input += synapse0x362a460();
   input += synapse0x362a4a0();
   input += synapse0x362a4e0();
   input += synapse0x362a520();
   input += synapse0x362a560();
   input += synapse0x3629ff0();
   input += synapse0x362a030();
   input += synapse0x362a6b0();
   input += synapse0x362a6f0();
   input += synapse0x362a730();
   input += synapse0x362a770();
   input += synapse0x362a7b0();
   input += synapse0x362a7f0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3629e60() {
   double input = input0x3629e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x362a830() {
   double input = -0.386679;
   input += synapse0x362ab70();
   input += synapse0x362abb0();
   input += synapse0x362abf0();
   input += synapse0x362ac30();
   input += synapse0x362ac70();
   input += synapse0x362acb0();
   input += synapse0x362acf0();
   input += synapse0x362ad30();
   input += synapse0x362ad70();
   input += synapse0x362adb0();
   input += synapse0x362adf0();
   input += synapse0x362ae30();
   input += synapse0x362ae70();
   input += synapse0x362aeb0();
   input += synapse0x362aef0();
   input += synapse0x362af30();
   input += synapse0x362a9c0();
   input += synapse0x362aa00();
   input += synapse0x361b530();
   input += synapse0x361b570();
   input += synapse0x361b5b0();
   input += synapse0x361b5f0();
   input += synapse0x361b630();
   input += synapse0x361b670();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x362a830() {
   double input = input0x362a830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x361b6b0() {
   double input = 2.48659;
   input += synapse0x361b9f0();
   input += synapse0x361ba30();
   input += synapse0x361ba70();
   input += synapse0x361bab0();
   input += synapse0x361baf0();
   input += synapse0x361bb30();
   input += synapse0x361bb70();
   input += synapse0x361bbb0();
   input += synapse0x361bbf0();
   input += synapse0x361bc30();
   input += synapse0x361bc70();
   input += synapse0x361bcb0();
   input += synapse0x361bcf0();
   input += synapse0x361bd30();
   input += synapse0x361bd70();
   input += synapse0x361bdb0();
   input += synapse0x361b840();
   input += synapse0x361b880();
   input += synapse0x361bf00();
   input += synapse0x361bf40();
   input += synapse0x361bf80();
   input += synapse0x361bfc0();
   input += synapse0x361c000();
   input += synapse0x361c040();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x361b6b0() {
   double input = input0x361b6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x361c080() {
   double input = 0.477642;
   input += synapse0x361c3c0();
   input += synapse0x361c400();
   input += synapse0x361c440();
   input += synapse0x361c480();
   input += synapse0x361c4c0();
   input += synapse0x361c500();
   input += synapse0x361c540();
   input += synapse0x361c580();
   input += synapse0x361c5c0();
   input += synapse0x361c600();
   input += synapse0x361c640();
   input += synapse0x361c680();
   input += synapse0x361c6c0();
   input += synapse0x361c700();
   input += synapse0x361c740();
   input += synapse0x361c780();
   input += synapse0x361c210();
   input += synapse0x361c250();
   input += synapse0x361c8d0();
   input += synapse0x361c910();
   input += synapse0x361c950();
   input += synapse0x361c990();
   input += synapse0x361c9d0();
   input += synapse0x361ca10();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x361c080() {
   double input = input0x361c080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x361ca50() {
   double input = -0.533909;
   input += synapse0x361cd90();
   input += synapse0x361cdd0();
   input += synapse0x361ce10();
   input += synapse0x361ce50();
   input += synapse0x361ce90();
   input += synapse0x361ced0();
   input += synapse0x361cf10();
   input += synapse0x361cf50();
   input += synapse0x361cf90();
   input += synapse0x361cfd0();
   input += synapse0x361d010();
   input += synapse0x361d050();
   input += synapse0x361d090();
   input += synapse0x361d0d0();
   input += synapse0x361d110();
   input += synapse0x361d150();
   input += synapse0x361cbe0();
   input += synapse0x361cc20();
   input += synapse0x361d2a0();
   input += synapse0x361d2e0();
   input += synapse0x361d320();
   input += synapse0x361d360();
   input += synapse0x361d3a0();
   input += synapse0x361d3e0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x361ca50() {
   double input = input0x361ca50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x362f090() {
   double input = -0.38874;
   input += synapse0x362f2b0();
   input += synapse0x362f2f0();
   input += synapse0x362f330();
   input += synapse0x362f370();
   input += synapse0x362f3b0();
   input += synapse0x362f3f0();
   input += synapse0x362f430();
   input += synapse0x362f470();
   input += synapse0x362f4b0();
   input += synapse0x362f4f0();
   input += synapse0x362f530();
   input += synapse0x362f570();
   input += synapse0x362f5b0();
   input += synapse0x362f5f0();
   input += synapse0x362f630();
   input += synapse0x362f670();
   input += synapse0x361d420();
   input += synapse0x361d460();
   input += synapse0x362f7c0();
   input += synapse0x362f800();
   input += synapse0x362f840();
   input += synapse0x362f880();
   input += synapse0x362f8c0();
   input += synapse0x362f900();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x362f090() {
   double input = input0x362f090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x362f940() {
   double input = 1.19755;
   input += synapse0x362fc80();
   input += synapse0x362fcc0();
   input += synapse0x362fd00();
   input += synapse0x362fd40();
   input += synapse0x362fd80();
   input += synapse0x362fdc0();
   input += synapse0x362fe00();
   input += synapse0x362fe40();
   input += synapse0x362fe80();
   input += synapse0x362fec0();
   input += synapse0x362ff00();
   input += synapse0x362ff40();
   input += synapse0x362ff80();
   input += synapse0x362ffc0();
   input += synapse0x3630000();
   input += synapse0x3630040();
   input += synapse0x362fad0();
   input += synapse0x362fb10();
   input += synapse0x3630190();
   input += synapse0x36301d0();
   input += synapse0x3630210();
   input += synapse0x3630250();
   input += synapse0x3630290();
   input += synapse0x36302d0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x362f940() {
   double input = input0x362f940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3630310() {
   double input = -0.554893;
   input += synapse0x3630650();
   input += synapse0x3630690();
   input += synapse0x36306d0();
   input += synapse0x3630710();
   input += synapse0x3630750();
   input += synapse0x3630790();
   input += synapse0x36307d0();
   input += synapse0x3630810();
   input += synapse0x3630850();
   input += synapse0x3630890();
   input += synapse0x36308d0();
   input += synapse0x3630910();
   input += synapse0x3630950();
   input += synapse0x3630990();
   input += synapse0x36309d0();
   input += synapse0x3630a10();
   input += synapse0x36304a0();
   input += synapse0x36304e0();
   input += synapse0x3630b60();
   input += synapse0x3630ba0();
   input += synapse0x3630be0();
   input += synapse0x3630c20();
   input += synapse0x3630c60();
   input += synapse0x3630ca0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3630310() {
   double input = input0x3630310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3630ce0() {
   double input = -0.328259;
   input += synapse0x3631020();
   input += synapse0x3631060();
   input += synapse0x36310a0();
   input += synapse0x36310e0();
   input += synapse0x3631120();
   input += synapse0x3631160();
   input += synapse0x36311a0();
   input += synapse0x36311e0();
   input += synapse0x3631220();
   input += synapse0x3631260();
   input += synapse0x36312a0();
   input += synapse0x36312e0();
   input += synapse0x3631320();
   input += synapse0x3631360();
   input += synapse0x36313a0();
   input += synapse0x36313e0();
   input += synapse0x3630e70();
   input += synapse0x3630eb0();
   input += synapse0x3631530();
   input += synapse0x3631570();
   input += synapse0x36315b0();
   input += synapse0x36315f0();
   input += synapse0x3631630();
   input += synapse0x3631670();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3630ce0() {
   double input = input0x3630ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3637ee0() {
   double input = -0.0545996;
   input += synapse0x33d14a0();
   input += synapse0x33d14e0();
   input += synapse0x360e010();
   input += synapse0x360e050();
   input += synapse0x360faf0();
   input += synapse0x360fb30();
   input += synapse0x36108c0();
   input += synapse0x3610900();
   input += synapse0x3611290();
   input += synapse0x36112d0();
   input += synapse0x3611c60();
   input += synapse0x3611ca0();
   input += synapse0x3612740();
   input += synapse0x3612780();
   input += synapse0x3613110();
   input += synapse0x3613150();
   input += synapse0x36101f0();
   input += synapse0x3610230();
   input += synapse0x3614cc0();
   input += synapse0x3614d00();
   input += synapse0x3615690();
   input += synapse0x36156d0();
   input += synapse0x3616060();
   input += synapse0x36160a0();
   input += synapse0x3616a30();
   input += synapse0x3616a70();
   input += synapse0x3609ac0();
   input += synapse0x3609b00();
   input += synapse0x3618b20();
   input += synapse0x3618b60();
   input += synapse0x36194f0();
   input += synapse0x3619530();
   input += synapse0x3619ec0();
   input += synapse0x3619f00();
   input += synapse0x361a890();
   input += synapse0x361a8d0();
   input += synapse0x361b260();
   input += synapse0x361b2a0();
   input += synapse0x3613db0();
   input += synapse0x3613df0();
   input += synapse0x361d660();
   input += synapse0x361d6a0();
   input += synapse0x361dff0();
   input += synapse0x361e030();
   input += synapse0x361e9c0();
   input += synapse0x361ea00();
   input += synapse0x361f390();
   input += synapse0x361f3d0();
   input += synapse0x361fd60();
   input += synapse0x361fda0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3637ee0() {
   double input = input0x3637ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3638280() {
   double input = 1.97939;
   input += synapse0x36224a0();
   input += synapse0x36224e0();
   input += synapse0x3617a60();
   input += synapse0x3617aa0();
   input += synapse0x3625080();
   input += synapse0x36250c0();
   input += synapse0x3625a50();
   input += synapse0x3625a90();
   input += synapse0x3626420();
   input += synapse0x3626460();
   input += synapse0x3626df0();
   input += synapse0x3626e30();
   input += synapse0x36277c0();
   input += synapse0x3627800();
   input += synapse0x3628190();
   input += synapse0x36281d0();
   input += synapse0x3628b60();
   input += synapse0x3628ba0();
   input += synapse0x3629530();
   input += synapse0x3629570();
   input += synapse0x362a110();
   input += synapse0x362a150();
   input += synapse0x362aae0();
   input += synapse0x362ab20();
   input += synapse0x361b960();
   input += synapse0x361b9a0();
   input += synapse0x361c330();
   input += synapse0x361c370();
   input += synapse0x361cd00();
   input += synapse0x361cd40();
   input += synapse0x362f220();
   input += synapse0x362f260();
   input += synapse0x362fbf0();
   input += synapse0x362fc30();
   input += synapse0x36305c0();
   input += synapse0x3630600();
   input += synapse0x3630f90();
   input += synapse0x3630fd0();
   input += synapse0x360be00();
   input += synapse0x360be40();
   input += synapse0x3620730();
   input += synapse0x3620770();
   input += synapse0x36316b0();
   input += synapse0x36316f0();
   input += synapse0x3631730();
   input += synapse0x3631770();
   input += synapse0x3638620();
   input += synapse0x3638660();
   input += synapse0x36386a0();
   input += synapse0x36386e0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3638280() {
   double input = input0x3638280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3638720() {
   double input = 0.134666;
   input += synapse0x3638a60();
   input += synapse0x3638aa0();
   input += synapse0x3638ae0();
   input += synapse0x3638b20();
   input += synapse0x3638b60();
   input += synapse0x3638ba0();
   input += synapse0x3638be0();
   input += synapse0x3638c20();
   input += synapse0x3638c60();
   input += synapse0x3638ca0();
   input += synapse0x3638ce0();
   input += synapse0x3638d20();
   input += synapse0x3638d60();
   input += synapse0x3638da0();
   input += synapse0x3638de0();
   input += synapse0x3638e20();
   input += synapse0x36388b0();
   input += synapse0x36388f0();
   input += synapse0x3638f70();
   input += synapse0x3638fb0();
   input += synapse0x3638ff0();
   input += synapse0x3639030();
   input += synapse0x3639070();
   input += synapse0x36390b0();
   input += synapse0x36390f0();
   input += synapse0x3639130();
   input += synapse0x3639170();
   input += synapse0x36391b0();
   input += synapse0x36391f0();
   input += synapse0x3639230();
   input += synapse0x3639270();
   input += synapse0x36392b0();
   input += synapse0x3638e60();
   input += synapse0x3638ea0();
   input += synapse0x3638ee0();
   input += synapse0x3638f20();
   input += synapse0x3639500();
   input += synapse0x3639540();
   input += synapse0x3639580();
   input += synapse0x36395c0();
   input += synapse0x3639600();
   input += synapse0x3639640();
   input += synapse0x3639680();
   input += synapse0x36396c0();
   input += synapse0x3639700();
   input += synapse0x3639740();
   input += synapse0x3639780();
   input += synapse0x36397c0();
   input += synapse0x3639800();
   input += synapse0x3639840();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3638720() {
   double input = input0x3638720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x3639880() {
   double input = -0.259077;
   input += synapse0x3639bc0();
   input += synapse0x3639c00();
   input += synapse0x3639c40();
   input += synapse0x3639c80();
   input += synapse0x3639cc0();
   input += synapse0x3639d00();
   input += synapse0x3639d40();
   input += synapse0x3639d80();
   input += synapse0x3639dc0();
   input += synapse0x3639e00();
   input += synapse0x3639e40();
   input += synapse0x3639e80();
   input += synapse0x3639ec0();
   input += synapse0x3639f00();
   input += synapse0x3639f40();
   input += synapse0x3639f80();
   input += synapse0x3639a10();
   input += synapse0x3639a50();
   input += synapse0x363a0d0();
   input += synapse0x363a110();
   input += synapse0x363a150();
   input += synapse0x363a190();
   input += synapse0x363a1d0();
   input += synapse0x363a210();
   input += synapse0x363a250();
   input += synapse0x363a290();
   input += synapse0x363a2d0();
   input += synapse0x363a310();
   input += synapse0x363a350();
   input += synapse0x363a390();
   input += synapse0x363a3d0();
   input += synapse0x363a410();
   input += synapse0x3639fc0();
   input += synapse0x363a000();
   input += synapse0x363a040();
   input += synapse0x363a080();
   input += synapse0x363a660();
   input += synapse0x363a6a0();
   input += synapse0x363a6e0();
   input += synapse0x363a720();
   input += synapse0x363a760();
   input += synapse0x363a7a0();
   input += synapse0x363a7e0();
   input += synapse0x363a820();
   input += synapse0x363a860();
   input += synapse0x363a8a0();
   input += synapse0x363a8e0();
   input += synapse0x363a920();
   input += synapse0x363a960();
   input += synapse0x363a9a0();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x3639880() {
   double input = input0x3639880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x363a9e0() {
   double input = 0.0365396;
   input += synapse0x363ad20();
   input += synapse0x363ad60();
   input += synapse0x363ada0();
   input += synapse0x363ade0();
   input += synapse0x363ae20();
   input += synapse0x363ae60();
   input += synapse0x363aea0();
   input += synapse0x363aee0();
   input += synapse0x363af20();
   input += synapse0x363af60();
   input += synapse0x363afa0();
   input += synapse0x363afe0();
   input += synapse0x363b020();
   input += synapse0x363b060();
   input += synapse0x363b0a0();
   input += synapse0x363b0e0();
   input += synapse0x363ab70();
   input += synapse0x363abb0();
   input += synapse0x363b230();
   input += synapse0x363b270();
   input += synapse0x363b2b0();
   input += synapse0x363b2f0();
   input += synapse0x363b330();
   input += synapse0x363b370();
   input += synapse0x363b3b0();
   input += synapse0x363b3f0();
   input += synapse0x363b430();
   input += synapse0x363b470();
   input += synapse0x363b4b0();
   input += synapse0x363b4f0();
   input += synapse0x363b530();
   input += synapse0x363b570();
   input += synapse0x363b120();
   input += synapse0x363b160();
   input += synapse0x363b1a0();
   input += synapse0x363b1e0();
   input += synapse0x363b7c0();
   input += synapse0x363b800();
   input += synapse0x363b840();
   input += synapse0x363b880();
   input += synapse0x363b8c0();
   input += synapse0x363b900();
   input += synapse0x363b940();
   input += synapse0x363b980();
   input += synapse0x363b9c0();
   input += synapse0x363ba00();
   input += synapse0x363ba40();
   input += synapse0x363ba80();
   input += synapse0x363bac0();
   input += synapse0x363bb00();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x363a9e0() {
   double input = input0x363a9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ng_chiPlus1::input0x363bb40() {
   double input = 5.18309;
   input += synapse0x363bd60();
   input += synapse0x363bda0();
   input += synapse0x363bde0();
   input += synapse0x363be20();
   input += synapse0x363be60();
   return input;
}

double NNfunction_ng_chiPlus1::neuron0x363bb40() {
   double input = input0x363bb40();
   return (input * 1)+0;
}

double NNfunction_ng_chiPlus1::synapse0x360be90() {
   return (neuron0x3606bb0()*-0.00372765);
}

double NNfunction_ng_chiPlus1::synapse0x360bed0() {
   return (neuron0x3606e60()*0.0620881);
}

double NNfunction_ng_chiPlus1::synapse0x360bf10() {
   return (neuron0x36071a0()*0.493992);
}

double NNfunction_ng_chiPlus1::synapse0x360bf50() {
   return (neuron0x36074e0()*0.687658);
}

double NNfunction_ng_chiPlus1::synapse0x360bf90() {
   return (neuron0x3607820()*0.0705466);
}

double NNfunction_ng_chiPlus1::synapse0x360bfd0() {
   return (neuron0x3607b60()*-0.026309);
}

double NNfunction_ng_chiPlus1::synapse0x360c010() {
   return (neuron0x3607ea0()*0.011107);
}

double NNfunction_ng_chiPlus1::synapse0x360c050() {
   return (neuron0x36081e0()*-0.0165828);
}

double NNfunction_ng_chiPlus1::synapse0x360c090() {
   return (neuron0x3608520()*-0.068981);
}

double NNfunction_ng_chiPlus1::synapse0x360c0d0() {
   return (neuron0x3608860()*-0.0429264);
}

double NNfunction_ng_chiPlus1::synapse0x360c110() {
   return (neuron0x3608ba0()*0.0689547);
}

double NNfunction_ng_chiPlus1::synapse0x360c150() {
   return (neuron0x3608ee0()*0.610677);
}

double NNfunction_ng_chiPlus1::synapse0x360c190() {
   return (neuron0x3609220()*-0.0105977);
}

double NNfunction_ng_chiPlus1::synapse0x360c1d0() {
   return (neuron0x3609560()*-0.0340121);
}

double NNfunction_ng_chiPlus1::synapse0x360c210() {
   return (neuron0x36098a0()*0.0451063);
}

double NNfunction_ng_chiPlus1::synapse0x360c250() {
   return (neuron0x3609be0()*-0.320607);
}

double NNfunction_ng_chiPlus1::synapse0x360bce0() {
   return (neuron0x3609f20()*-0.0317165);
}

double NNfunction_ng_chiPlus1::synapse0x360bd20() {
   return (neuron0x360a480()*-0.0608808);
}

double NNfunction_ng_chiPlus1::synapse0x230b790() {
   return (neuron0x360a6a0()*0.110548);
}

double NNfunction_ng_chiPlus1::synapse0x230b7d0() {
   return (neuron0x360a9e0()*-0.0572864);
}

double NNfunction_ng_chiPlus1::synapse0x360c3a0() {
   return (neuron0x360ad20()*-0.0629342);
}

double NNfunction_ng_chiPlus1::synapse0x360c3e0() {
   return (neuron0x360b060()*-0.0134332);
}

double NNfunction_ng_chiPlus1::synapse0x360c420() {
   return (neuron0x360b3a0()*-0.07716);
}

double NNfunction_ng_chiPlus1::synapse0x360c460() {
   return (neuron0x360b6e0()*-0.111097);
}

double NNfunction_ng_chiPlus1::synapse0x360c7e0() {
   return (neuron0x3606bb0()*-0.00518076);
}

double NNfunction_ng_chiPlus1::synapse0x360c820() {
   return (neuron0x3606e60()*0.00638288);
}

double NNfunction_ng_chiPlus1::synapse0x360c860() {
   return (neuron0x36071a0()*0.0895111);
}

double NNfunction_ng_chiPlus1::synapse0x360c8a0() {
   return (neuron0x36074e0()*-3.78045);
}

double NNfunction_ng_chiPlus1::synapse0x360c8e0() {
   return (neuron0x3607820()*-0.0194053);
}

double NNfunction_ng_chiPlus1::synapse0x360c920() {
   return (neuron0x3607b60()*-0.0128406);
}

double NNfunction_ng_chiPlus1::synapse0x360c960() {
   return (neuron0x3607ea0()*-0.00274415);
}

double NNfunction_ng_chiPlus1::synapse0x360c9a0() {
   return (neuron0x36081e0()*-0.00501846);
}

double NNfunction_ng_chiPlus1::synapse0x360c9e0() {
   return (neuron0x3608520()*-0.00616177);
}

double NNfunction_ng_chiPlus1::synapse0x360c290() {
   return (neuron0x3608860()*0.00672981);
}

double NNfunction_ng_chiPlus1::synapse0x360c2d0() {
   return (neuron0x3608ba0()*-0.00916956);
}

double NNfunction_ng_chiPlus1::synapse0x360c310() {
   return (neuron0x3608ee0()*2.83391);
}

double NNfunction_ng_chiPlus1::synapse0x360c350() {
   return (neuron0x3609220()*-0.317907);
}

double NNfunction_ng_chiPlus1::synapse0x360cc30() {
   return (neuron0x3609560()*0.0741338);
}

double NNfunction_ng_chiPlus1::synapse0x360cc70() {
   return (neuron0x36098a0()*-0.0122071);
}

double NNfunction_ng_chiPlus1::synapse0x360ccb0() {
   return (neuron0x3609be0()*-0.0132327);
}

double NNfunction_ng_chiPlus1::synapse0x360c630() {
   return (neuron0x3609f20()*0.00554961);
}

double NNfunction_ng_chiPlus1::synapse0x360c670() {
   return (neuron0x360a480()*0.0581839);
}

double NNfunction_ng_chiPlus1::synapse0x360ce00() {
   return (neuron0x360a6a0()*0.013256);
}

double NNfunction_ng_chiPlus1::synapse0x360ce40() {
   return (neuron0x360a9e0()*-0.0221072);
}

double NNfunction_ng_chiPlus1::synapse0x360ce80() {
   return (neuron0x360ad20()*-0.0106576);
}

double NNfunction_ng_chiPlus1::synapse0x360cec0() {
   return (neuron0x360b060()*-0.00332531);
}

double NNfunction_ng_chiPlus1::synapse0x360cf00() {
   return (neuron0x360b3a0()*-0.0307951);
}

double NNfunction_ng_chiPlus1::synapse0x360cf40() {
   return (neuron0x360b6e0()*-0.0516781);
}

double NNfunction_ng_chiPlus1::synapse0x360d2c0() {
   return (neuron0x3606bb0()*-0.157956);
}

double NNfunction_ng_chiPlus1::synapse0x360d300() {
   return (neuron0x3606e60()*-0.131448);
}

double NNfunction_ng_chiPlus1::synapse0x360d340() {
   return (neuron0x36071a0()*-0.668111);
}

double NNfunction_ng_chiPlus1::synapse0x360d380() {
   return (neuron0x36074e0()*1.57322);
}

double NNfunction_ng_chiPlus1::synapse0x360d3c0() {
   return (neuron0x3607820()*0.000574268);
}

double NNfunction_ng_chiPlus1::synapse0x360d400() {
   return (neuron0x3607b60()*0.220466);
}

double NNfunction_ng_chiPlus1::synapse0x360d440() {
   return (neuron0x3607ea0()*-0.00286313);
}

double NNfunction_ng_chiPlus1::synapse0x360d480() {
   return (neuron0x36081e0()*-0.00236809);
}

double NNfunction_ng_chiPlus1::synapse0x360d4c0() {
   return (neuron0x3608520()*0.0362278);
}

double NNfunction_ng_chiPlus1::synapse0x360d500() {
   return (neuron0x3608860()*0.0551489);
}

double NNfunction_ng_chiPlus1::synapse0x360d540() {
   return (neuron0x3608ba0()*0.117183);
}

double NNfunction_ng_chiPlus1::synapse0x360d580() {
   return (neuron0x3608ee0()*-1.43873);
}

double NNfunction_ng_chiPlus1::synapse0x360d5c0() {
   return (neuron0x3609220()*-0.509683);
}

double NNfunction_ng_chiPlus1::synapse0x360d600() {
   return (neuron0x3609560()*-0.0670897);
}

double NNfunction_ng_chiPlus1::synapse0x360d640() {
   return (neuron0x36098a0()*-0.132272);
}

double NNfunction_ng_chiPlus1::synapse0x360d680() {
   return (neuron0x3609be0()*0.0178669);
}

double NNfunction_ng_chiPlus1::synapse0x360d110() {
   return (neuron0x3609f20()*-0.228546);
}

double NNfunction_ng_chiPlus1::synapse0x360d150() {
   return (neuron0x360a480()*-0.106231);
}

double NNfunction_ng_chiPlus1::synapse0x22f8cd0() {
   return (neuron0x360a6a0()*-0.220097);
}

double NNfunction_ng_chiPlus1::synapse0x33d0cb0() {
   return (neuron0x360a9e0()*-0.00988941);
}

double NNfunction_ng_chiPlus1::synapse0x33d0cf0() {
   return (neuron0x360ad20()*0.0331207);
}

double NNfunction_ng_chiPlus1::synapse0x360f5c0() {
   return (neuron0x360b060()*0.0219552);
}

double NNfunction_ng_chiPlus1::synapse0x360f600() {
   return (neuron0x360b3a0()*0.263139);
}

double NNfunction_ng_chiPlus1::synapse0x36068f0() {
   return (neuron0x360b6e0()*-0.165188);
}

double NNfunction_ng_chiPlus1::synapse0x36069c0() {
   return (neuron0x3606bb0()*0.106827);
}

double NNfunction_ng_chiPlus1::synapse0x33d1530() {
   return (neuron0x3606e60()*-0.166793);
}

double NNfunction_ng_chiPlus1::synapse0x360cbb0() {
   return (neuron0x36071a0()*0.437102);
}

double NNfunction_ng_chiPlus1::synapse0x360cbf0() {
   return (neuron0x36074e0()*0.207582);
}

double NNfunction_ng_chiPlus1::synapse0x360d7d0() {
   return (neuron0x3607820()*0.0681108);
}

double NNfunction_ng_chiPlus1::synapse0x360d810() {
   return (neuron0x3607b60()*0.736956);
}

double NNfunction_ng_chiPlus1::synapse0x360d850() {
   return (neuron0x3607ea0()*0.0518674);
}

double NNfunction_ng_chiPlus1::synapse0x360d890() {
   return (neuron0x36081e0()*0.214408);
}

double NNfunction_ng_chiPlus1::synapse0x360d8d0() {
   return (neuron0x3608520()*-0.557346);
}

double NNfunction_ng_chiPlus1::synapse0x360d910() {
   return (neuron0x3608860()*0.144104);
}

double NNfunction_ng_chiPlus1::synapse0x360d950() {
   return (neuron0x3608ba0()*0.0653358);
}

double NNfunction_ng_chiPlus1::synapse0x360d990() {
   return (neuron0x3608ee0()*0.0336766);
}

double NNfunction_ng_chiPlus1::synapse0x360d9d0() {
   return (neuron0x3609220()*0.354095);
}

double NNfunction_ng_chiPlus1::synapse0x360da10() {
   return (neuron0x3609560()*0.000596553);
}

double NNfunction_ng_chiPlus1::synapse0x360da50() {
   return (neuron0x36098a0()*-0.0459021);
}

double NNfunction_ng_chiPlus1::synapse0x360da90() {
   return (neuron0x3609be0()*0.0671794);
}

double NNfunction_ng_chiPlus1::synapse0x3606930() {
   return (neuron0x3609f20()*-0.503284);
}

double NNfunction_ng_chiPlus1::synapse0x3606970() {
   return (neuron0x360a480()*-0.103466);
}

double NNfunction_ng_chiPlus1::synapse0x360dbe0() {
   return (neuron0x360a6a0()*0.811574);
}

double NNfunction_ng_chiPlus1::synapse0x360dc20() {
   return (neuron0x360a9e0()*-0.139996);
}

double NNfunction_ng_chiPlus1::synapse0x360dc60() {
   return (neuron0x360ad20()*0.483268);
}

double NNfunction_ng_chiPlus1::synapse0x360dca0() {
   return (neuron0x360b060()*-0.0681761);
}

double NNfunction_ng_chiPlus1::synapse0x360dce0() {
   return (neuron0x360b3a0()*-0.660285);
}

double NNfunction_ng_chiPlus1::synapse0x360dd20() {
   return (neuron0x360b6e0()*-0.265794);
}

double NNfunction_ng_chiPlus1::synapse0x360e0a0() {
   return (neuron0x3606bb0()*-0.00350405);
}

double NNfunction_ng_chiPlus1::synapse0x360e0e0() {
   return (neuron0x3606e60()*0.0114112);
}

double NNfunction_ng_chiPlus1::synapse0x360e120() {
   return (neuron0x36071a0()*-0.0159307);
}

double NNfunction_ng_chiPlus1::synapse0x360e160() {
   return (neuron0x36074e0()*4.91388);
}

double NNfunction_ng_chiPlus1::synapse0x360e1a0() {
   return (neuron0x3607820()*0.00793864);
}

double NNfunction_ng_chiPlus1::synapse0x360e1e0() {
   return (neuron0x3607b60()*0.0109217);
}

double NNfunction_ng_chiPlus1::synapse0x360e220() {
   return (neuron0x3607ea0()*0.0157067);
}

double NNfunction_ng_chiPlus1::synapse0x360e260() {
   return (neuron0x36081e0()*-0.0334678);
}

double NNfunction_ng_chiPlus1::synapse0x360e2a0() {
   return (neuron0x3608520()*0.00372469);
}

double NNfunction_ng_chiPlus1::synapse0x360e2e0() {
   return (neuron0x3608860()*0.000833307);
}

double NNfunction_ng_chiPlus1::synapse0x360e320() {
   return (neuron0x3608ba0()*0.0202299);
}

double NNfunction_ng_chiPlus1::synapse0x360e360() {
   return (neuron0x3608ee0()*-0.388165);
}

double NNfunction_ng_chiPlus1::synapse0x360e3a0() {
   return (neuron0x3609220()*0.194872);
}

double NNfunction_ng_chiPlus1::synapse0x360e3e0() {
   return (neuron0x3609560()*0.0256119);
}

double NNfunction_ng_chiPlus1::synapse0x360e420() {
   return (neuron0x36098a0()*0.00815924);
}

double NNfunction_ng_chiPlus1::synapse0x360e460() {
   return (neuron0x3609be0()*0.0229547);
}

double NNfunction_ng_chiPlus1::synapse0x360e5b0() {
   return (neuron0x3609f20()*0.0256911);
}

double NNfunction_ng_chiPlus1::synapse0x360def0() {
   return (neuron0x360a480()*-0.0430687);
}

double NNfunction_ng_chiPlus1::synapse0x360df30() {
   return (neuron0x360a6a0()*0.0059291);
}

double NNfunction_ng_chiPlus1::synapse0x360f700() {
   return (neuron0x360a9e0()*0.02316);
}

double NNfunction_ng_chiPlus1::synapse0x360f740() {
   return (neuron0x360ad20()*0.0099006);
}

double NNfunction_ng_chiPlus1::synapse0x360f780() {
   return (neuron0x360b060()*-0.0162444);
}

double NNfunction_ng_chiPlus1::synapse0x360f7c0() {
   return (neuron0x360b3a0()*0.00186935);
}

double NNfunction_ng_chiPlus1::synapse0x360f800() {
   return (neuron0x360b6e0()*0.0219492);
}

double NNfunction_ng_chiPlus1::synapse0x360fb80() {
   return (neuron0x3606bb0()*-0.122248);
}

double NNfunction_ng_chiPlus1::synapse0x360fbc0() {
   return (neuron0x3606e60()*0.159565);
}

double NNfunction_ng_chiPlus1::synapse0x360fc00() {
   return (neuron0x36071a0()*-0.330741);
}

double NNfunction_ng_chiPlus1::synapse0x360fc40() {
   return (neuron0x36074e0()*-0.71083);
}

double NNfunction_ng_chiPlus1::synapse0x360fc80() {
   return (neuron0x3607820()*0.177393);
}

double NNfunction_ng_chiPlus1::synapse0x360fcc0() {
   return (neuron0x3607b60()*-0.174583);
}

double NNfunction_ng_chiPlus1::synapse0x360fd00() {
   return (neuron0x3607ea0()*-0.177452);
}

double NNfunction_ng_chiPlus1::synapse0x360fd40() {
   return (neuron0x36081e0()*-0.327979);
}

double NNfunction_ng_chiPlus1::synapse0x360fd80() {
   return (neuron0x3608520()*0.247102);
}

double NNfunction_ng_chiPlus1::synapse0x33d1000() {
   return (neuron0x3608860()*-0.119654);
}

double NNfunction_ng_chiPlus1::synapse0x33d1040() {
   return (neuron0x3608ba0()*0.118906);
}

double NNfunction_ng_chiPlus1::synapse0x33d1080() {
   return (neuron0x3608ee0()*-0.243631);
}

double NNfunction_ng_chiPlus1::synapse0x33d10c0() {
   return (neuron0x3609220()*0.0362454);
}

double NNfunction_ng_chiPlus1::synapse0x33d1100() {
   return (neuron0x3609560()*0.135932);
}

double NNfunction_ng_chiPlus1::synapse0x33d1140() {
   return (neuron0x36098a0()*0.137431);
}

double NNfunction_ng_chiPlus1::synapse0x33d1180() {
   return (neuron0x3609be0()*-0.41905);
}

double NNfunction_ng_chiPlus1::synapse0x360f9d0() {
   return (neuron0x3609f20()*0.253957);
}

double NNfunction_ng_chiPlus1::synapse0x360fa10() {
   return (neuron0x360a480()*0.319478);
}

double NNfunction_ng_chiPlus1::synapse0x33d12d0() {
   return (neuron0x360a6a0()*0.0135709);
}

double NNfunction_ng_chiPlus1::synapse0x33d1310() {
   return (neuron0x360a9e0()*-0.217276);
}

double NNfunction_ng_chiPlus1::synapse0x33d1350() {
   return (neuron0x360ad20()*-0.215261);
}

double NNfunction_ng_chiPlus1::synapse0x33d1390() {
   return (neuron0x360b060()*0.134482);
}

double NNfunction_ng_chiPlus1::synapse0x33d13d0() {
   return (neuron0x360b3a0()*0.329458);
}

double NNfunction_ng_chiPlus1::synapse0x36105d0() {
   return (neuron0x360b6e0()*-0.0811686);
}

double NNfunction_ng_chiPlus1::synapse0x3610950() {
   return (neuron0x3606bb0()*-0.297149);
}

double NNfunction_ng_chiPlus1::synapse0x3610990() {
   return (neuron0x3606e60()*0.188231);
}

double NNfunction_ng_chiPlus1::synapse0x36109d0() {
   return (neuron0x36071a0()*-0.0622281);
}

double NNfunction_ng_chiPlus1::synapse0x3610a10() {
   return (neuron0x36074e0()*0.0827161);
}

double NNfunction_ng_chiPlus1::synapse0x3610a50() {
   return (neuron0x3607820()*0.3568);
}

double NNfunction_ng_chiPlus1::synapse0x3610a90() {
   return (neuron0x3607b60()*-0.321042);
}

double NNfunction_ng_chiPlus1::synapse0x3610ad0() {
   return (neuron0x3607ea0()*0.083291);
}

double NNfunction_ng_chiPlus1::synapse0x3610b10() {
   return (neuron0x36081e0()*0.126927);
}

double NNfunction_ng_chiPlus1::synapse0x3610b50() {
   return (neuron0x3608520()*-0.288577);
}

double NNfunction_ng_chiPlus1::synapse0x3610b90() {
   return (neuron0x3608860()*0.341469);
}

double NNfunction_ng_chiPlus1::synapse0x3610bd0() {
   return (neuron0x3608ba0()*-0.349536);
}

double NNfunction_ng_chiPlus1::synapse0x3610c10() {
   return (neuron0x3608ee0()*0.0132021);
}

double NNfunction_ng_chiPlus1::synapse0x3610c50() {
   return (neuron0x3609220()*0.44737);
}

double NNfunction_ng_chiPlus1::synapse0x3610c90() {
   return (neuron0x3609560()*-0.364368);
}

double NNfunction_ng_chiPlus1::synapse0x3610cd0() {
   return (neuron0x36098a0()*0.0163816);
}

double NNfunction_ng_chiPlus1::synapse0x3610d10() {
   return (neuron0x3609be0()*0.338583);
}

double NNfunction_ng_chiPlus1::synapse0x36107a0() {
   return (neuron0x3609f20()*-0.246569);
}

double NNfunction_ng_chiPlus1::synapse0x36107e0() {
   return (neuron0x360a480()*-0.576316);
}

double NNfunction_ng_chiPlus1::synapse0x3610e60() {
   return (neuron0x360a6a0()*0.377359);
}

double NNfunction_ng_chiPlus1::synapse0x3610ea0() {
   return (neuron0x360a9e0()*-0.199631);
}

double NNfunction_ng_chiPlus1::synapse0x3610ee0() {
   return (neuron0x360ad20()*-0.230817);
}

double NNfunction_ng_chiPlus1::synapse0x3610f20() {
   return (neuron0x360b060()*-0.311826);
}

double NNfunction_ng_chiPlus1::synapse0x3610f60() {
   return (neuron0x360b3a0()*0.25553);
}

double NNfunction_ng_chiPlus1::synapse0x3610fa0() {
   return (neuron0x360b6e0()*-1.27929);
}

double NNfunction_ng_chiPlus1::synapse0x3611320() {
   return (neuron0x3606bb0()*0.0142712);
}

double NNfunction_ng_chiPlus1::synapse0x3611360() {
   return (neuron0x3606e60()*0.000245505);
}

double NNfunction_ng_chiPlus1::synapse0x36113a0() {
   return (neuron0x36071a0()*-1.00488);
}

double NNfunction_ng_chiPlus1::synapse0x36113e0() {
   return (neuron0x36074e0()*0.266871);
}

double NNfunction_ng_chiPlus1::synapse0x3611420() {
   return (neuron0x3607820()*-0.00319301);
}

double NNfunction_ng_chiPlus1::synapse0x3611460() {
   return (neuron0x3607b60()*-0.00344723);
}

double NNfunction_ng_chiPlus1::synapse0x36114a0() {
   return (neuron0x3607ea0()*0.00433107);
}

double NNfunction_ng_chiPlus1::synapse0x36114e0() {
   return (neuron0x36081e0()*-0.0228);
}

double NNfunction_ng_chiPlus1::synapse0x3611520() {
   return (neuron0x3608520()*-0.000400033);
}

double NNfunction_ng_chiPlus1::synapse0x3611560() {
   return (neuron0x3608860()*-0.00554266);
}

double NNfunction_ng_chiPlus1::synapse0x36115a0() {
   return (neuron0x3608ba0()*-0.0262971);
}

double NNfunction_ng_chiPlus1::synapse0x36115e0() {
   return (neuron0x3608ee0()*-0.235);
}

double NNfunction_ng_chiPlus1::synapse0x3611620() {
   return (neuron0x3609220()*-0.0216395);
}

double NNfunction_ng_chiPlus1::synapse0x3611660() {
   return (neuron0x3609560()*-0.00158116);
}

double NNfunction_ng_chiPlus1::synapse0x36116a0() {
   return (neuron0x36098a0()*-0.0300059);
}

double NNfunction_ng_chiPlus1::synapse0x36116e0() {
   return (neuron0x3609be0()*-0.0427371);
}

double NNfunction_ng_chiPlus1::synapse0x3611170() {
   return (neuron0x3609f20()*0.0340839);
}

double NNfunction_ng_chiPlus1::synapse0x36111b0() {
   return (neuron0x360a480()*0.00824601);
}

double NNfunction_ng_chiPlus1::synapse0x3611830() {
   return (neuron0x360a6a0()*0.0145235);
}

double NNfunction_ng_chiPlus1::synapse0x3611870() {
   return (neuron0x360a9e0()*0.00829843);
}

double NNfunction_ng_chiPlus1::synapse0x36118b0() {
   return (neuron0x360ad20()*0.0295043);
}

double NNfunction_ng_chiPlus1::synapse0x36118f0() {
   return (neuron0x360b060()*-0.0238129);
}

double NNfunction_ng_chiPlus1::synapse0x3611930() {
   return (neuron0x360b3a0()*-0.00400416);
}

double NNfunction_ng_chiPlus1::synapse0x3611970() {
   return (neuron0x360b6e0()*-0.0196939);
}

double NNfunction_ng_chiPlus1::synapse0x360a370() {
   return (neuron0x3606bb0()*-0.0276521);
}

double NNfunction_ng_chiPlus1::synapse0x360a3b0() {
   return (neuron0x3606e60()*-0.0585903);
}

double NNfunction_ng_chiPlus1::synapse0x360a3f0() {
   return (neuron0x36071a0()*0.141924);
}

double NNfunction_ng_chiPlus1::synapse0x360a430() {
   return (neuron0x36074e0()*1.19757);
}

double NNfunction_ng_chiPlus1::synapse0x3611f00() {
   return (neuron0x3607820()*-0.0282221);
}

double NNfunction_ng_chiPlus1::synapse0x3611f40() {
   return (neuron0x3607b60()*-0.0169342);
}

double NNfunction_ng_chiPlus1::synapse0x3611f80() {
   return (neuron0x3607ea0()*-0.00385212);
}

double NNfunction_ng_chiPlus1::synapse0x3611fc0() {
   return (neuron0x36081e0()*0.0253459);
}

double NNfunction_ng_chiPlus1::synapse0x3612000() {
   return (neuron0x3608520()*0.0105214);
}

double NNfunction_ng_chiPlus1::synapse0x3612040() {
   return (neuron0x3608860()*-0.0169973);
}

double NNfunction_ng_chiPlus1::synapse0x3612080() {
   return (neuron0x3608ba0()*-0.0707032);
}

double NNfunction_ng_chiPlus1::synapse0x36120c0() {
   return (neuron0x3608ee0()*-0.404925);
}

double NNfunction_ng_chiPlus1::synapse0x3612100() {
   return (neuron0x3609220()*-0.476578);
}

double NNfunction_ng_chiPlus1::synapse0x3612140() {
   return (neuron0x3609560()*0.0853097);
}

double NNfunction_ng_chiPlus1::synapse0x3612180() {
   return (neuron0x36098a0()*-0.194251);
}

double NNfunction_ng_chiPlus1::synapse0x36121c0() {
   return (neuron0x3609be0()*-0.292813);
}

double NNfunction_ng_chiPlus1::synapse0x3611b40() {
   return (neuron0x3609f20()*-0.00365315);
}

double NNfunction_ng_chiPlus1::synapse0x3611b80() {
   return (neuron0x360a480()*-0.261953);
}

double NNfunction_ng_chiPlus1::synapse0x3612310() {
   return (neuron0x360a6a0()*-0.254323);
}

double NNfunction_ng_chiPlus1::synapse0x3612350() {
   return (neuron0x360a9e0()*-0.0195514);
}

double NNfunction_ng_chiPlus1::synapse0x3612390() {
   return (neuron0x360ad20()*0.131012);
}

double NNfunction_ng_chiPlus1::synapse0x36123d0() {
   return (neuron0x360b060()*-0.027715);
}

double NNfunction_ng_chiPlus1::synapse0x3612410() {
   return (neuron0x360b3a0()*0.0311843);
}

double NNfunction_ng_chiPlus1::synapse0x3612450() {
   return (neuron0x360b6e0()*-0.0337892);
}

double NNfunction_ng_chiPlus1::synapse0x36127d0() {
   return (neuron0x3606bb0()*-0.0382861);
}

double NNfunction_ng_chiPlus1::synapse0x3612810() {
   return (neuron0x3606e60()*-0.0136482);
}

double NNfunction_ng_chiPlus1::synapse0x3612850() {
   return (neuron0x36071a0()*-0.550414);
}

double NNfunction_ng_chiPlus1::synapse0x3612890() {
   return (neuron0x36074e0()*-0.0221996);
}

double NNfunction_ng_chiPlus1::synapse0x36128d0() {
   return (neuron0x3607820()*0.00342138);
}

double NNfunction_ng_chiPlus1::synapse0x3612910() {
   return (neuron0x3607b60()*0.00783271);
}

double NNfunction_ng_chiPlus1::synapse0x3612950() {
   return (neuron0x3607ea0()*-0.00109983);
}

double NNfunction_ng_chiPlus1::synapse0x3612990() {
   return (neuron0x36081e0()*0.00953125);
}

double NNfunction_ng_chiPlus1::synapse0x36129d0() {
   return (neuron0x3608520()*0.00799049);
}

double NNfunction_ng_chiPlus1::synapse0x3612a10() {
   return (neuron0x3608860()*0.00626915);
}

double NNfunction_ng_chiPlus1::synapse0x3612a50() {
   return (neuron0x3608ba0()*0.0236825);
}

double NNfunction_ng_chiPlus1::synapse0x3612a90() {
   return (neuron0x3608ee0()*-0.173213);
}

double NNfunction_ng_chiPlus1::synapse0x3612ad0() {
   return (neuron0x3609220()*-0.0850813);
}

double NNfunction_ng_chiPlus1::synapse0x3612b10() {
   return (neuron0x3609560()*-0.00648462);
}

double NNfunction_ng_chiPlus1::synapse0x3612b50() {
   return (neuron0x36098a0()*0.00915975);
}

double NNfunction_ng_chiPlus1::synapse0x3612b90() {
   return (neuron0x3609be0()*-0.0201663);
}

double NNfunction_ng_chiPlus1::synapse0x3612620() {
   return (neuron0x3609f20()*0.00563021);
}

double NNfunction_ng_chiPlus1::synapse0x3612660() {
   return (neuron0x360a480()*0.016048);
}

double NNfunction_ng_chiPlus1::synapse0x3612ce0() {
   return (neuron0x360a6a0()*0.00315898);
}

double NNfunction_ng_chiPlus1::synapse0x3612d20() {
   return (neuron0x360a9e0()*0.0129834);
}

double NNfunction_ng_chiPlus1::synapse0x3612d60() {
   return (neuron0x360ad20()*-0.00615855);
}

double NNfunction_ng_chiPlus1::synapse0x3612da0() {
   return (neuron0x360b060()*0.00222874);
}

double NNfunction_ng_chiPlus1::synapse0x3612de0() {
   return (neuron0x360b3a0()*0.00376725);
}

double NNfunction_ng_chiPlus1::synapse0x3612e20() {
   return (neuron0x360b6e0()*-2.89505);
}

double NNfunction_ng_chiPlus1::synapse0x36131a0() {
   return (neuron0x3606bb0()*-0.203476);
}

double NNfunction_ng_chiPlus1::synapse0x36131e0() {
   return (neuron0x3606e60()*0.0847014);
}

double NNfunction_ng_chiPlus1::synapse0x3613220() {
   return (neuron0x36071a0()*-0.197767);
}

double NNfunction_ng_chiPlus1::synapse0x3613260() {
   return (neuron0x36074e0()*0.349584);
}

double NNfunction_ng_chiPlus1::synapse0x36132a0() {
   return (neuron0x3607820()*0.0798582);
}

double NNfunction_ng_chiPlus1::synapse0x36132e0() {
   return (neuron0x3607b60()*-0.0245345);
}

double NNfunction_ng_chiPlus1::synapse0x3613320() {
   return (neuron0x3607ea0()*0.29712);
}

double NNfunction_ng_chiPlus1::synapse0x3613360() {
   return (neuron0x36081e0()*0.061672);
}

double NNfunction_ng_chiPlus1::synapse0x36133a0() {
   return (neuron0x3608520()*0.509827);
}

double NNfunction_ng_chiPlus1::synapse0x36133e0() {
   return (neuron0x3608860()*-0.0624368);
}

double NNfunction_ng_chiPlus1::synapse0x3613420() {
   return (neuron0x3608ba0()*-0.0615073);
}

double NNfunction_ng_chiPlus1::synapse0x3613460() {
   return (neuron0x3608ee0()*0.132202);
}

double NNfunction_ng_chiPlus1::synapse0x36134a0() {
   return (neuron0x3609220()*-0.131217);
}

double NNfunction_ng_chiPlus1::synapse0x36134e0() {
   return (neuron0x3609560()*0.042097);
}

double NNfunction_ng_chiPlus1::synapse0x3613520() {
   return (neuron0x36098a0()*0.770574);
}

double NNfunction_ng_chiPlus1::synapse0x3613560() {
   return (neuron0x3609be0()*7.84464e-05);
}

double NNfunction_ng_chiPlus1::synapse0x3612ff0() {
   return (neuron0x3609f20()*-0.287449);
}

double NNfunction_ng_chiPlus1::synapse0x3613030() {
   return (neuron0x360a480()*0.528926);
}

double NNfunction_ng_chiPlus1::synapse0x360fdc0() {
   return (neuron0x360a6a0()*0.220601);
}

double NNfunction_ng_chiPlus1::synapse0x360fe00() {
   return (neuron0x360a9e0()*0.357332);
}

double NNfunction_ng_chiPlus1::synapse0x360fe40() {
   return (neuron0x360ad20()*-0.24989);
}

double NNfunction_ng_chiPlus1::synapse0x360fe80() {
   return (neuron0x360b060()*0.304127);
}

double NNfunction_ng_chiPlus1::synapse0x360fec0() {
   return (neuron0x360b3a0()*0.023444);
}

double NNfunction_ng_chiPlus1::synapse0x360ff00() {
   return (neuron0x360b6e0()*-0.97936);
}

double NNfunction_ng_chiPlus1::synapse0x3610280() {
   return (neuron0x3606bb0()*-0.00992547);
}

double NNfunction_ng_chiPlus1::synapse0x36102c0() {
   return (neuron0x3606e60()*-0.00535647);
}

double NNfunction_ng_chiPlus1::synapse0x3610300() {
   return (neuron0x36071a0()*0.226107);
}

double NNfunction_ng_chiPlus1::synapse0x3610340() {
   return (neuron0x36074e0()*-0.00346516);
}

double NNfunction_ng_chiPlus1::synapse0x3610380() {
   return (neuron0x3607820()*0.00962455);
}

double NNfunction_ng_chiPlus1::synapse0x36103c0() {
   return (neuron0x3607b60()*-0.0214932);
}

double NNfunction_ng_chiPlus1::synapse0x3610400() {
   return (neuron0x3607ea0()*0.00272481);
}

double NNfunction_ng_chiPlus1::synapse0x3610440() {
   return (neuron0x36081e0()*0.021437);
}

double NNfunction_ng_chiPlus1::synapse0x3610480() {
   return (neuron0x3608520()*0.00871568);
}

double NNfunction_ng_chiPlus1::synapse0x36104c0() {
   return (neuron0x3608860()*0.00149157);
}

double NNfunction_ng_chiPlus1::synapse0x3610500() {
   return (neuron0x3608ba0()*-0.0186422);
}

double NNfunction_ng_chiPlus1::synapse0x3610540() {
   return (neuron0x3608ee0()*1.82252);
}

double NNfunction_ng_chiPlus1::synapse0x3610580() {
   return (neuron0x3609220()*-0.0973932);
}

double NNfunction_ng_chiPlus1::synapse0x36146c0() {
   return (neuron0x3609560()*-0.0287424);
}

double NNfunction_ng_chiPlus1::synapse0x3614700() {
   return (neuron0x36098a0()*0.0400139);
}

double NNfunction_ng_chiPlus1::synapse0x3614740() {
   return (neuron0x3609be0()*0.00383209);
}

double NNfunction_ng_chiPlus1::synapse0x36100d0() {
   return (neuron0x3609f20()*-0.0162802);
}

double NNfunction_ng_chiPlus1::synapse0x3610110() {
   return (neuron0x360a480()*0.021893);
}

double NNfunction_ng_chiPlus1::synapse0x3614890() {
   return (neuron0x360a6a0()*0.0193368);
}

double NNfunction_ng_chiPlus1::synapse0x36148d0() {
   return (neuron0x360a9e0()*-0.0102632);
}

double NNfunction_ng_chiPlus1::synapse0x3614910() {
   return (neuron0x360ad20()*-0.0126435);
}

double NNfunction_ng_chiPlus1::synapse0x3614950() {
   return (neuron0x360b060()*-0.000141891);
}

double NNfunction_ng_chiPlus1::synapse0x3614990() {
   return (neuron0x360b3a0()*0.0186488);
}

double NNfunction_ng_chiPlus1::synapse0x36149d0() {
   return (neuron0x360b6e0()*-0.091077);
}

double NNfunction_ng_chiPlus1::synapse0x3614d50() {
   return (neuron0x3606bb0()*-0.106806);
}

double NNfunction_ng_chiPlus1::synapse0x3614d90() {
   return (neuron0x3606e60()*0.00939104);
}

double NNfunction_ng_chiPlus1::synapse0x3614dd0() {
   return (neuron0x36071a0()*-0.532774);
}

double NNfunction_ng_chiPlus1::synapse0x3614e10() {
   return (neuron0x36074e0()*0.0309157);
}

double NNfunction_ng_chiPlus1::synapse0x3614e50() {
   return (neuron0x3607820()*0.0102466);
}

double NNfunction_ng_chiPlus1::synapse0x3614e90() {
   return (neuron0x3607b60()*0.00541516);
}

double NNfunction_ng_chiPlus1::synapse0x3614ed0() {
   return (neuron0x3607ea0()*-0.013227);
}

double NNfunction_ng_chiPlus1::synapse0x3614f10() {
   return (neuron0x36081e0()*-0.0229313);
}

double NNfunction_ng_chiPlus1::synapse0x3614f50() {
   return (neuron0x3608520()*-0.0220151);
}

double NNfunction_ng_chiPlus1::synapse0x3614f90() {
   return (neuron0x3608860()*0.0339855);
}

double NNfunction_ng_chiPlus1::synapse0x3614fd0() {
   return (neuron0x3608ba0()*-0.0643329);
}

double NNfunction_ng_chiPlus1::synapse0x3615010() {
   return (neuron0x3608ee0()*0.409801);
}

double NNfunction_ng_chiPlus1::synapse0x3615050() {
   return (neuron0x3609220()*-0.253882);
}

double NNfunction_ng_chiPlus1::synapse0x3615090() {
   return (neuron0x3609560()*0.0553343);
}

double NNfunction_ng_chiPlus1::synapse0x36150d0() {
   return (neuron0x36098a0()*0.0320618);
}

double NNfunction_ng_chiPlus1::synapse0x3615110() {
   return (neuron0x3609be0()*0.060821);
}

double NNfunction_ng_chiPlus1::synapse0x3614ba0() {
   return (neuron0x3609f20()*0.0340291);
}

double NNfunction_ng_chiPlus1::synapse0x3614be0() {
   return (neuron0x360a480()*-0.0416711);
}

double NNfunction_ng_chiPlus1::synapse0x3615260() {
   return (neuron0x360a6a0()*-0.0255287);
}

double NNfunction_ng_chiPlus1::synapse0x36152a0() {
   return (neuron0x360a9e0()*-0.0445571);
}

double NNfunction_ng_chiPlus1::synapse0x36152e0() {
   return (neuron0x360ad20()*-0.00116283);
}

double NNfunction_ng_chiPlus1::synapse0x3615320() {
   return (neuron0x360b060()*-0.043781);
}

double NNfunction_ng_chiPlus1::synapse0x3615360() {
   return (neuron0x360b3a0()*0.0351742);
}

double NNfunction_ng_chiPlus1::synapse0x36153a0() {
   return (neuron0x360b6e0()*3.05898);
}

double NNfunction_ng_chiPlus1::synapse0x3615720() {
   return (neuron0x3606bb0()*0.117747);
}

double NNfunction_ng_chiPlus1::synapse0x3615760() {
   return (neuron0x3606e60()*-0.059184);
}

double NNfunction_ng_chiPlus1::synapse0x36157a0() {
   return (neuron0x36071a0()*-0.531363);
}

double NNfunction_ng_chiPlus1::synapse0x36157e0() {
   return (neuron0x36074e0()*-0.389793);
}

double NNfunction_ng_chiPlus1::synapse0x3615820() {
   return (neuron0x3607820()*0.608534);
}

double NNfunction_ng_chiPlus1::synapse0x3615860() {
   return (neuron0x3607b60()*0.101178);
}

double NNfunction_ng_chiPlus1::synapse0x36158a0() {
   return (neuron0x3607ea0()*0.0898569);
}

double NNfunction_ng_chiPlus1::synapse0x36158e0() {
   return (neuron0x36081e0()*0.0145131);
}

double NNfunction_ng_chiPlus1::synapse0x3615920() {
   return (neuron0x3608520()*-0.0531315);
}

double NNfunction_ng_chiPlus1::synapse0x3615960() {
   return (neuron0x3608860()*-0.0382662);
}

double NNfunction_ng_chiPlus1::synapse0x36159a0() {
   return (neuron0x3608ba0()*-0.058111);
}

double NNfunction_ng_chiPlus1::synapse0x36159e0() {
   return (neuron0x3608ee0()*0.280607);
}

double NNfunction_ng_chiPlus1::synapse0x3615a20() {
   return (neuron0x3609220()*0.362631);
}

double NNfunction_ng_chiPlus1::synapse0x3615a60() {
   return (neuron0x3609560()*-0.0432229);
}

double NNfunction_ng_chiPlus1::synapse0x3615aa0() {
   return (neuron0x36098a0()*0.114735);
}

double NNfunction_ng_chiPlus1::synapse0x3615ae0() {
   return (neuron0x3609be0()*-0.212355);
}

double NNfunction_ng_chiPlus1::synapse0x3615570() {
   return (neuron0x3609f20()*-0.193213);
}

double NNfunction_ng_chiPlus1::synapse0x36155b0() {
   return (neuron0x360a480()*-0.190522);
}

double NNfunction_ng_chiPlus1::synapse0x3615c30() {
   return (neuron0x360a6a0()*-0.0239679);
}

double NNfunction_ng_chiPlus1::synapse0x3615c70() {
   return (neuron0x360a9e0()*0.112004);
}

double NNfunction_ng_chiPlus1::synapse0x3615cb0() {
   return (neuron0x360ad20()*0.0221492);
}

double NNfunction_ng_chiPlus1::synapse0x3615cf0() {
   return (neuron0x360b060()*0.0548183);
}

double NNfunction_ng_chiPlus1::synapse0x3615d30() {
   return (neuron0x360b3a0()*0.0147899);
}

double NNfunction_ng_chiPlus1::synapse0x3615d70() {
   return (neuron0x360b6e0()*-0.527245);
}

double NNfunction_ng_chiPlus1::synapse0x36160f0() {
   return (neuron0x3606bb0()*0.382849);
}

double NNfunction_ng_chiPlus1::synapse0x3616130() {
   return (neuron0x3606e60()*0.0978483);
}

double NNfunction_ng_chiPlus1::synapse0x3616170() {
   return (neuron0x36071a0()*0.304477);
}

double NNfunction_ng_chiPlus1::synapse0x36161b0() {
   return (neuron0x36074e0()*-0.154487);
}

double NNfunction_ng_chiPlus1::synapse0x36161f0() {
   return (neuron0x3607820()*0.538211);
}

double NNfunction_ng_chiPlus1::synapse0x3616230() {
   return (neuron0x3607b60()*-0.108376);
}

double NNfunction_ng_chiPlus1::synapse0x3616270() {
   return (neuron0x3607ea0()*0.0665593);
}

double NNfunction_ng_chiPlus1::synapse0x36162b0() {
   return (neuron0x36081e0()*-0.259779);
}

double NNfunction_ng_chiPlus1::synapse0x36162f0() {
   return (neuron0x3608520()*-0.255207);
}

double NNfunction_ng_chiPlus1::synapse0x3616330() {
   return (neuron0x3608860()*0.274323);
}

double NNfunction_ng_chiPlus1::synapse0x3616370() {
   return (neuron0x3608ba0()*0.336433);
}

double NNfunction_ng_chiPlus1::synapse0x36163b0() {
   return (neuron0x3608ee0()*0.544378);
}

double NNfunction_ng_chiPlus1::synapse0x36163f0() {
   return (neuron0x3609220()*0.0504841);
}

double NNfunction_ng_chiPlus1::synapse0x3616430() {
   return (neuron0x3609560()*0.189283);
}

double NNfunction_ng_chiPlus1::synapse0x3616470() {
   return (neuron0x36098a0()*-0.763541);
}

double NNfunction_ng_chiPlus1::synapse0x36164b0() {
   return (neuron0x3609be0()*-0.0481306);
}

double NNfunction_ng_chiPlus1::synapse0x3615f40() {
   return (neuron0x3609f20()*-0.24198);
}

double NNfunction_ng_chiPlus1::synapse0x3615f80() {
   return (neuron0x360a480()*-0.30134);
}

double NNfunction_ng_chiPlus1::synapse0x3616600() {
   return (neuron0x360a6a0()*-0.056331);
}

double NNfunction_ng_chiPlus1::synapse0x3616640() {
   return (neuron0x360a9e0()*-0.0246815);
}

double NNfunction_ng_chiPlus1::synapse0x3616680() {
   return (neuron0x360ad20()*0.192538);
}

double NNfunction_ng_chiPlus1::synapse0x36166c0() {
   return (neuron0x360b060()*-0.117509);
}

double NNfunction_ng_chiPlus1::synapse0x3616700() {
   return (neuron0x360b3a0()*0.200225);
}

double NNfunction_ng_chiPlus1::synapse0x3616740() {
   return (neuron0x360b6e0()*0.0328);
}

double NNfunction_ng_chiPlus1::synapse0x3616ac0() {
   return (neuron0x3606bb0()*-0.0254546);
}

double NNfunction_ng_chiPlus1::synapse0x3606d40() {
   return (neuron0x3606e60()*-0.0180672);
}

double NNfunction_ng_chiPlus1::synapse0x3606d80() {
   return (neuron0x36071a0()*0.269982);
}

double NNfunction_ng_chiPlus1::synapse0x3607080() {
   return (neuron0x36074e0()*-0.0679175);
}

double NNfunction_ng_chiPlus1::synapse0x36070c0() {
   return (neuron0x3607820()*-0.0175941);
}

double NNfunction_ng_chiPlus1::synapse0x36073c0() {
   return (neuron0x3607b60()*0.0130025);
}

double NNfunction_ng_chiPlus1::synapse0x3607400() {
   return (neuron0x3607ea0()*0.00290207);
}

double NNfunction_ng_chiPlus1::synapse0x3607700() {
   return (neuron0x36081e0()*0.0293518);
}

double NNfunction_ng_chiPlus1::synapse0x3607740() {
   return (neuron0x3608520()*0.0204806);
}

double NNfunction_ng_chiPlus1::synapse0x3607a40() {
   return (neuron0x3608860()*0.00350089);
}

double NNfunction_ng_chiPlus1::synapse0x3607a80() {
   return (neuron0x3608ba0()*0.0395861);
}

double NNfunction_ng_chiPlus1::synapse0x3607d80() {
   return (neuron0x3608ee0()*0.0259157);
}

double NNfunction_ng_chiPlus1::synapse0x3607dc0() {
   return (neuron0x3609220()*-0.330589);
}

double NNfunction_ng_chiPlus1::synapse0x36080c0() {
   return (neuron0x3609560()*-0.0450351);
}

double NNfunction_ng_chiPlus1::synapse0x3608100() {
   return (neuron0x36098a0()*0.000648072);
}

double NNfunction_ng_chiPlus1::synapse0x3608400() {
   return (neuron0x3609be0()*-0.0215497);
}

double NNfunction_ng_chiPlus1::synapse0x3608440() {
   return (neuron0x3609f20()*-0.0310594);
}

double NNfunction_ng_chiPlus1::synapse0x3608740() {
   return (neuron0x360a480()*-0.0335408);
}

double NNfunction_ng_chiPlus1::synapse0x3608780() {
   return (neuron0x360a6a0()*-0.00648192);
}

double NNfunction_ng_chiPlus1::synapse0x3608a80() {
   return (neuron0x360a9e0()*0.0135411);
}

double NNfunction_ng_chiPlus1::synapse0x3608ac0() {
   return (neuron0x360ad20()*-0.0112615);
}

double NNfunction_ng_chiPlus1::synapse0x3608dc0() {
   return (neuron0x360b060()*0.0365312);
}

double NNfunction_ng_chiPlus1::synapse0x3608e00() {
   return (neuron0x360b3a0()*-0.015274);
}

double NNfunction_ng_chiPlus1::synapse0x3609100() {
   return (neuron0x360b6e0()*-2.20671);
}

double NNfunction_ng_chiPlus1::synapse0x3609140() {
   return (neuron0x3606bb0()*-0.0286894);
}

double NNfunction_ng_chiPlus1::synapse0x3609e00() {
   return (neuron0x3606e60()*0.0112233);
}

double NNfunction_ng_chiPlus1::synapse0x3609e40() {
   return (neuron0x36071a0()*-0.0260454);
}

double NNfunction_ng_chiPlus1::synapse0x3616910() {
   return (neuron0x36074e0()*-0.0350674);
}

double NNfunction_ng_chiPlus1::synapse0x3616950() {
   return (neuron0x3607820()*0.0109441);
}

double NNfunction_ng_chiPlus1::synapse0x360a140() {
   return (neuron0x3607b60()*0.0565475);
}

double NNfunction_ng_chiPlus1::synapse0x360a180() {
   return (neuron0x3607ea0()*-0.020681);
}

double NNfunction_ng_chiPlus1::synapse0x230c130() {
   return (neuron0x36081e0()*0.017911);
}

double NNfunction_ng_chiPlus1::synapse0x230c170() {
   return (neuron0x3608520()*-0.016953);
}

double NNfunction_ng_chiPlus1::synapse0x360a8c0() {
   return (neuron0x3608860()*-0.0735977);
}

double NNfunction_ng_chiPlus1::synapse0x360a900() {
   return (neuron0x3608ba0()*-0.012383);
}

double NNfunction_ng_chiPlus1::synapse0x360ac00() {
   return (neuron0x3608ee0()*0.331441);
}

double NNfunction_ng_chiPlus1::synapse0x360ac40() {
   return (neuron0x3609220()*-2.00504);
}

double NNfunction_ng_chiPlus1::synapse0x360af40() {
   return (neuron0x3609560()*-0.112167);
}

double NNfunction_ng_chiPlus1::synapse0x360af80() {
   return (neuron0x36098a0()*-0.0812842);
}

double NNfunction_ng_chiPlus1::synapse0x360b280() {
   return (neuron0x3609be0()*0.00569612);
}

double NNfunction_ng_chiPlus1::synapse0x360b2c0() {
   return (neuron0x3609f20()*-0.0517102);
}

double NNfunction_ng_chiPlus1::synapse0x360b5c0() {
   return (neuron0x360a480()*-0.173936);
}

double NNfunction_ng_chiPlus1::synapse0x360b600() {
   return (neuron0x360a6a0()*-0.01559);
}

double NNfunction_ng_chiPlus1::synapse0x360b900() {
   return (neuron0x360a9e0()*-0.0692706);
}

double NNfunction_ng_chiPlus1::synapse0x360b940() {
   return (neuron0x360ad20()*0.0560622);
}

double NNfunction_ng_chiPlus1::synapse0x3609440() {
   return (neuron0x360b060()*0.0198446);
}

double NNfunction_ng_chiPlus1::synapse0x3609480() {
   return (neuron0x360b3a0()*-0.00651206);
}

double NNfunction_ng_chiPlus1::synapse0x3618830() {
   return (neuron0x360b6e0()*-0.170158);
}

double NNfunction_ng_chiPlus1::synapse0x3618bb0() {
   return (neuron0x3606bb0()*-0.00384763);
}

double NNfunction_ng_chiPlus1::synapse0x3618bf0() {
   return (neuron0x3606e60()*0.013411);
}

double NNfunction_ng_chiPlus1::synapse0x3618c30() {
   return (neuron0x36071a0()*0.0974646);
}

double NNfunction_ng_chiPlus1::synapse0x3618c70() {
   return (neuron0x36074e0()*-5.58883);
}

double NNfunction_ng_chiPlus1::synapse0x3618cb0() {
   return (neuron0x3607820()*-0.0504981);
}

double NNfunction_ng_chiPlus1::synapse0x3618cf0() {
   return (neuron0x3607b60()*-0.00879622);
}

double NNfunction_ng_chiPlus1::synapse0x3618d30() {
   return (neuron0x3607ea0()*0.000560307);
}

double NNfunction_ng_chiPlus1::synapse0x3618d70() {
   return (neuron0x36081e0()*-0.0540463);
}

double NNfunction_ng_chiPlus1::synapse0x3618db0() {
   return (neuron0x3608520()*-0.0467826);
}

double NNfunction_ng_chiPlus1::synapse0x3618df0() {
   return (neuron0x3608860()*-0.0135183);
}

double NNfunction_ng_chiPlus1::synapse0x3618e30() {
   return (neuron0x3608ba0()*0.00465895);
}

double NNfunction_ng_chiPlus1::synapse0x3618e70() {
   return (neuron0x3608ee0()*-0.13956);
}

double NNfunction_ng_chiPlus1::synapse0x3618eb0() {
   return (neuron0x3609220()*-0.253896);
}

double NNfunction_ng_chiPlus1::synapse0x3618ef0() {
   return (neuron0x3609560()*0.0141258);
}

double NNfunction_ng_chiPlus1::synapse0x3618f30() {
   return (neuron0x36098a0()*-0.0254879);
}

double NNfunction_ng_chiPlus1::synapse0x3618f70() {
   return (neuron0x3609be0()*-0.141745);
}

double NNfunction_ng_chiPlus1::synapse0x3618a00() {
   return (neuron0x3609f20()*0.0303777);
}

double NNfunction_ng_chiPlus1::synapse0x3618a40() {
   return (neuron0x360a480()*-0.173668);
}

double NNfunction_ng_chiPlus1::synapse0x36190c0() {
   return (neuron0x360a6a0()*-0.010722);
}

double NNfunction_ng_chiPlus1::synapse0x3619100() {
   return (neuron0x360a9e0()*-0.0659437);
}

double NNfunction_ng_chiPlus1::synapse0x3619140() {
   return (neuron0x360ad20()*0.131364);
}

double NNfunction_ng_chiPlus1::synapse0x3619180() {
   return (neuron0x360b060()*-0.074104);
}

double NNfunction_ng_chiPlus1::synapse0x36191c0() {
   return (neuron0x360b3a0()*-0.0405333);
}

double NNfunction_ng_chiPlus1::synapse0x3619200() {
   return (neuron0x360b6e0()*-0.12401);
}

double NNfunction_ng_chiPlus1::synapse0x3619580() {
   return (neuron0x3606bb0()*0.00574772);
}

double NNfunction_ng_chiPlus1::synapse0x36195c0() {
   return (neuron0x3606e60()*0.0181733);
}

double NNfunction_ng_chiPlus1::synapse0x3619600() {
   return (neuron0x36071a0()*0.0538159);
}

double NNfunction_ng_chiPlus1::synapse0x3619640() {
   return (neuron0x36074e0()*-2.65822);
}

double NNfunction_ng_chiPlus1::synapse0x3619680() {
   return (neuron0x3607820()*0.0308012);
}

double NNfunction_ng_chiPlus1::synapse0x36196c0() {
   return (neuron0x3607b60()*0.0699701);
}

double NNfunction_ng_chiPlus1::synapse0x3619700() {
   return (neuron0x3607ea0()*-0.00688428);
}

double NNfunction_ng_chiPlus1::synapse0x3619740() {
   return (neuron0x36081e0()*-0.00797256);
}

double NNfunction_ng_chiPlus1::synapse0x3619780() {
   return (neuron0x3608520()*0.0167935);
}

double NNfunction_ng_chiPlus1::synapse0x36197c0() {
   return (neuron0x3608860()*0.0636464);
}

double NNfunction_ng_chiPlus1::synapse0x3619800() {
   return (neuron0x3608ba0()*0.036293);
}

double NNfunction_ng_chiPlus1::synapse0x3619840() {
   return (neuron0x3608ee0()*-1.52741);
}

double NNfunction_ng_chiPlus1::synapse0x3619880() {
   return (neuron0x3609220()*0.413556);
}

double NNfunction_ng_chiPlus1::synapse0x36198c0() {
   return (neuron0x3609560()*0.0220954);
}

double NNfunction_ng_chiPlus1::synapse0x3619900() {
   return (neuron0x36098a0()*0.0638331);
}

double NNfunction_ng_chiPlus1::synapse0x3619940() {
   return (neuron0x3609be0()*0.126398);
}

double NNfunction_ng_chiPlus1::synapse0x36193d0() {
   return (neuron0x3609f20()*-0.0315762);
}

double NNfunction_ng_chiPlus1::synapse0x3619410() {
   return (neuron0x360a480()*0.0822078);
}

double NNfunction_ng_chiPlus1::synapse0x3619a90() {
   return (neuron0x360a6a0()*0.024311);
}

double NNfunction_ng_chiPlus1::synapse0x3619ad0() {
   return (neuron0x360a9e0()*0.0108358);
}

double NNfunction_ng_chiPlus1::synapse0x3619b10() {
   return (neuron0x360ad20()*-0.0549959);
}

double NNfunction_ng_chiPlus1::synapse0x3619b50() {
   return (neuron0x360b060()*0.0145834);
}

double NNfunction_ng_chiPlus1::synapse0x3619b90() {
   return (neuron0x360b3a0()*0.00285186);
}

double NNfunction_ng_chiPlus1::synapse0x3619bd0() {
   return (neuron0x360b6e0()*-0.00970456);
}

double NNfunction_ng_chiPlus1::synapse0x3619f50() {
   return (neuron0x3606bb0()*-0.032799);
}

double NNfunction_ng_chiPlus1::synapse0x3619f90() {
   return (neuron0x3606e60()*-0.02765);
}

double NNfunction_ng_chiPlus1::synapse0x3619fd0() {
   return (neuron0x36071a0()*-0.410012);
}

double NNfunction_ng_chiPlus1::synapse0x361a010() {
   return (neuron0x36074e0()*-1.84271);
}

double NNfunction_ng_chiPlus1::synapse0x361a050() {
   return (neuron0x3607820()*-0.0132287);
}

double NNfunction_ng_chiPlus1::synapse0x361a090() {
   return (neuron0x3607b60()*0.0165319);
}

double NNfunction_ng_chiPlus1::synapse0x361a0d0() {
   return (neuron0x3607ea0()*-0.0186917);
}

double NNfunction_ng_chiPlus1::synapse0x361a110() {
   return (neuron0x36081e0()*0.013402);
}

double NNfunction_ng_chiPlus1::synapse0x361a150() {
   return (neuron0x3608520()*0.00424754);
}

double NNfunction_ng_chiPlus1::synapse0x361a190() {
   return (neuron0x3608860()*-0.0200397);
}

double NNfunction_ng_chiPlus1::synapse0x361a1d0() {
   return (neuron0x3608ba0()*-0.0240303);
}

double NNfunction_ng_chiPlus1::synapse0x361a210() {
   return (neuron0x3608ee0()*-1.70492);
}

double NNfunction_ng_chiPlus1::synapse0x361a250() {
   return (neuron0x3609220()*0.0574508);
}

double NNfunction_ng_chiPlus1::synapse0x361a290() {
   return (neuron0x3609560()*-0.0793494);
}

double NNfunction_ng_chiPlus1::synapse0x361a2d0() {
   return (neuron0x36098a0()*-0.0138824);
}

double NNfunction_ng_chiPlus1::synapse0x361a310() {
   return (neuron0x3609be0()*0.0172444);
}

double NNfunction_ng_chiPlus1::synapse0x3619da0() {
   return (neuron0x3609f20()*-0.0392558);
}

double NNfunction_ng_chiPlus1::synapse0x3619de0() {
   return (neuron0x360a480()*-0.0567563);
}

double NNfunction_ng_chiPlus1::synapse0x361a460() {
   return (neuron0x360a6a0()*-0.0330174);
}

double NNfunction_ng_chiPlus1::synapse0x361a4a0() {
   return (neuron0x360a9e0()*-0.0282014);
}

double NNfunction_ng_chiPlus1::synapse0x361a4e0() {
   return (neuron0x360ad20()*0.0401976);
}

double NNfunction_ng_chiPlus1::synapse0x361a520() {
   return (neuron0x360b060()*0.000258214);
}

double NNfunction_ng_chiPlus1::synapse0x361a560() {
   return (neuron0x360b3a0()*0.0197668);
}

double NNfunction_ng_chiPlus1::synapse0x361a5a0() {
   return (neuron0x360b6e0()*0.120019);
}

double NNfunction_ng_chiPlus1::synapse0x361a920() {
   return (neuron0x3606bb0()*0.019564);
}

double NNfunction_ng_chiPlus1::synapse0x361a960() {
   return (neuron0x3606e60()*0.000688609);
}

double NNfunction_ng_chiPlus1::synapse0x361a9a0() {
   return (neuron0x36071a0()*-0.0914489);
}

double NNfunction_ng_chiPlus1::synapse0x361a9e0() {
   return (neuron0x36074e0()*-0.769111);
}

double NNfunction_ng_chiPlus1::synapse0x361aa20() {
   return (neuron0x3607820()*-0.0706074);
}

double NNfunction_ng_chiPlus1::synapse0x361aa60() {
   return (neuron0x3607b60()*-0.0402008);
}

double NNfunction_ng_chiPlus1::synapse0x361aaa0() {
   return (neuron0x3607ea0()*0.0281162);
}

double NNfunction_ng_chiPlus1::synapse0x361aae0() {
   return (neuron0x36081e0()*-0.0222952);
}

double NNfunction_ng_chiPlus1::synapse0x361ab20() {
   return (neuron0x3608520()*0.00616669);
}

double NNfunction_ng_chiPlus1::synapse0x361ab60() {
   return (neuron0x3608860()*0.0964506);
}

double NNfunction_ng_chiPlus1::synapse0x361aba0() {
   return (neuron0x3608ba0()*0.0497817);
}

double NNfunction_ng_chiPlus1::synapse0x361abe0() {
   return (neuron0x3608ee0()*0.0100877);
}

double NNfunction_ng_chiPlus1::synapse0x361ac20() {
   return (neuron0x3609220()*-2.09543);
}

double NNfunction_ng_chiPlus1::synapse0x361ac60() {
   return (neuron0x3609560()*0.0227194);
}

double NNfunction_ng_chiPlus1::synapse0x361aca0() {
   return (neuron0x36098a0()*0.0588563);
}

double NNfunction_ng_chiPlus1::synapse0x361ace0() {
   return (neuron0x3609be0()*-0.0020977);
}

double NNfunction_ng_chiPlus1::synapse0x361a770() {
   return (neuron0x3609f20()*0.0157492);
}

double NNfunction_ng_chiPlus1::synapse0x361a7b0() {
   return (neuron0x360a480()*0.10774);
}

double NNfunction_ng_chiPlus1::synapse0x361ae30() {
   return (neuron0x360a6a0()*-0.0194274);
}

double NNfunction_ng_chiPlus1::synapse0x361ae70() {
   return (neuron0x360a9e0()*-0.0100136);
}

double NNfunction_ng_chiPlus1::synapse0x361aeb0() {
   return (neuron0x360ad20()*-0.0355136);
}

double NNfunction_ng_chiPlus1::synapse0x361aef0() {
   return (neuron0x360b060()*-0.0433455);
}

double NNfunction_ng_chiPlus1::synapse0x361af30() {
   return (neuron0x360b3a0()*0.0681041);
}

double NNfunction_ng_chiPlus1::synapse0x361af70() {
   return (neuron0x360b6e0()*0.51233);
}

double NNfunction_ng_chiPlus1::synapse0x361b2f0() {
   return (neuron0x3606bb0()*-0.0167693);
}

double NNfunction_ng_chiPlus1::synapse0x361b330() {
   return (neuron0x3606e60()*0.00101094);
}

double NNfunction_ng_chiPlus1::synapse0x361b370() {
   return (neuron0x36071a0()*-0.0551319);
}

double NNfunction_ng_chiPlus1::synapse0x361b3b0() {
   return (neuron0x36074e0()*-0.152332);
}

double NNfunction_ng_chiPlus1::synapse0x361b3f0() {
   return (neuron0x3607820()*-0.0629309);
}

double NNfunction_ng_chiPlus1::synapse0x361b430() {
   return (neuron0x3607b60()*-0.000576022);
}

double NNfunction_ng_chiPlus1::synapse0x361b470() {
   return (neuron0x3607ea0()*-0.00809484);
}

double NNfunction_ng_chiPlus1::synapse0x361b4b0() {
   return (neuron0x36081e0()*-0.0170403);
}

double NNfunction_ng_chiPlus1::synapse0x361b4f0() {
   return (neuron0x3608520()*-0.016172);
}

double NNfunction_ng_chiPlus1::synapse0x36136b0() {
   return (neuron0x3608860()*-0.0294398);
}

double NNfunction_ng_chiPlus1::synapse0x36136f0() {
   return (neuron0x3608ba0()*0.0643638);
}

double NNfunction_ng_chiPlus1::synapse0x3613730() {
   return (neuron0x3608ee0()*0.856185);
}

double NNfunction_ng_chiPlus1::synapse0x3613770() {
   return (neuron0x3609220()*-3.55378);
}

double NNfunction_ng_chiPlus1::synapse0x36137b0() {
   return (neuron0x3609560()*0.0126545);
}

double NNfunction_ng_chiPlus1::synapse0x36137f0() {
   return (neuron0x36098a0()*-0.0607716);
}

double NNfunction_ng_chiPlus1::synapse0x3613830() {
   return (neuron0x3609be0()*0.033817);
}

double NNfunction_ng_chiPlus1::synapse0x361b140() {
   return (neuron0x3609f20()*-0.0304463);
}

double NNfunction_ng_chiPlus1::synapse0x361b180() {
   return (neuron0x360a480()*-0.00715104);
}

double NNfunction_ng_chiPlus1::synapse0x3613980() {
   return (neuron0x360a6a0()*-0.0572259);
}

double NNfunction_ng_chiPlus1::synapse0x36139c0() {
   return (neuron0x360a9e0()*-0.0976028);
}

double NNfunction_ng_chiPlus1::synapse0x3613a00() {
   return (neuron0x360ad20()*0.0245256);
}

double NNfunction_ng_chiPlus1::synapse0x3613a40() {
   return (neuron0x360b060()*-0.00365848);
}

double NNfunction_ng_chiPlus1::synapse0x3613a80() {
   return (neuron0x360b3a0()*0.0229808);
}

double NNfunction_ng_chiPlus1::synapse0x3613ac0() {
   return (neuron0x360b6e0()*0.316943);
}

double NNfunction_ng_chiPlus1::synapse0x3613e40() {
   return (neuron0x3606bb0()*0.0766331);
}

double NNfunction_ng_chiPlus1::synapse0x3613e80() {
   return (neuron0x3606e60()*-0.00812812);
}

double NNfunction_ng_chiPlus1::synapse0x3613ec0() {
   return (neuron0x36071a0()*3.50998);
}

double NNfunction_ng_chiPlus1::synapse0x3613f00() {
   return (neuron0x36074e0()*-0.0827961);
}

double NNfunction_ng_chiPlus1::synapse0x3613f40() {
   return (neuron0x3607820()*0.0247266);
}

double NNfunction_ng_chiPlus1::synapse0x3613f80() {
   return (neuron0x3607b60()*0.0417133);
}

double NNfunction_ng_chiPlus1::synapse0x3613fc0() {
   return (neuron0x3607ea0()*-0.0225494);
}

double NNfunction_ng_chiPlus1::synapse0x3614000() {
   return (neuron0x36081e0()*0.0408184);
}

double NNfunction_ng_chiPlus1::synapse0x3614040() {
   return (neuron0x3608520()*0.0133903);
}

double NNfunction_ng_chiPlus1::synapse0x3614080() {
   return (neuron0x3608860()*0.024473);
}

double NNfunction_ng_chiPlus1::synapse0x36140c0() {
   return (neuron0x3608ba0()*0.0559158);
}

double NNfunction_ng_chiPlus1::synapse0x3614100() {
   return (neuron0x3608ee0()*-0.245607);
}

double NNfunction_ng_chiPlus1::synapse0x3614140() {
   return (neuron0x3609220()*0.0523597);
}

double NNfunction_ng_chiPlus1::synapse0x3614180() {
   return (neuron0x3609560()*-0.00317582);
}

double NNfunction_ng_chiPlus1::synapse0x36141c0() {
   return (neuron0x36098a0()*-0.0165732);
}

double NNfunction_ng_chiPlus1::synapse0x3614200() {
   return (neuron0x3609be0()*-0.0468954);
}

double NNfunction_ng_chiPlus1::synapse0x3613c90() {
   return (neuron0x3609f20()*0.0264588);
}

double NNfunction_ng_chiPlus1::synapse0x3613cd0() {
   return (neuron0x360a480()*-0.0238835);
}

double NNfunction_ng_chiPlus1::synapse0x3614350() {
   return (neuron0x360a6a0()*-0.0150915);
}

double NNfunction_ng_chiPlus1::synapse0x3614390() {
   return (neuron0x360a9e0()*-0.00570828);
}

double NNfunction_ng_chiPlus1::synapse0x36143d0() {
   return (neuron0x360ad20()*0.00149613);
}

double NNfunction_ng_chiPlus1::synapse0x3614410() {
   return (neuron0x360b060()*0.00445634);
}

double NNfunction_ng_chiPlus1::synapse0x3614450() {
   return (neuron0x360b3a0()*0.00622805);
}

double NNfunction_ng_chiPlus1::synapse0x3614490() {
   return (neuron0x360b6e0()*-6.30659);
}

double NNfunction_ng_chiPlus1::synapse0x3614660() {
   return (neuron0x3606bb0()*0.00155141);
}

double NNfunction_ng_chiPlus1::synapse0x361d6f0() {
   return (neuron0x3606e60()*0.0058833);
}

double NNfunction_ng_chiPlus1::synapse0x361d730() {
   return (neuron0x36071a0()*0.0931527);
}

double NNfunction_ng_chiPlus1::synapse0x361d770() {
   return (neuron0x36074e0()*-2.15344);
}

double NNfunction_ng_chiPlus1::synapse0x361d7b0() {
   return (neuron0x3607820()*-0.00598857);
}

double NNfunction_ng_chiPlus1::synapse0x361d7f0() {
   return (neuron0x3607b60()*0.0149498);
}

double NNfunction_ng_chiPlus1::synapse0x361d830() {
   return (neuron0x3607ea0()*0.00427506);
}

double NNfunction_ng_chiPlus1::synapse0x361d870() {
   return (neuron0x36081e0()*-0.0143625);
}

double NNfunction_ng_chiPlus1::synapse0x361d8b0() {
   return (neuron0x3608520()*0.007065);
}

double NNfunction_ng_chiPlus1::synapse0x361d8f0() {
   return (neuron0x3608860()*0.00721124);
}

double NNfunction_ng_chiPlus1::synapse0x361d930() {
   return (neuron0x3608ba0()*0.00307911);
}

double NNfunction_ng_chiPlus1::synapse0x361d970() {
   return (neuron0x3608ee0()*0.445992);
}

double NNfunction_ng_chiPlus1::synapse0x361d9b0() {
   return (neuron0x3609220()*-0.0443763);
}

double NNfunction_ng_chiPlus1::synapse0x361d9f0() {
   return (neuron0x3609560()*0.0585255);
}

double NNfunction_ng_chiPlus1::synapse0x361da30() {
   return (neuron0x36098a0()*-0.0492714);
}

double NNfunction_ng_chiPlus1::synapse0x361da70() {
   return (neuron0x3609be0()*-0.037719);
}

double NNfunction_ng_chiPlus1::synapse0x361d540() {
   return (neuron0x3609f20()*0.036206);
}

double NNfunction_ng_chiPlus1::synapse0x361d580() {
   return (neuron0x360a480()*-0.0343913);
}

double NNfunction_ng_chiPlus1::synapse0x361dbc0() {
   return (neuron0x360a6a0()*-0.0245733);
}

double NNfunction_ng_chiPlus1::synapse0x361dc00() {
   return (neuron0x360a9e0()*0.0127767);
}

double NNfunction_ng_chiPlus1::synapse0x361dc40() {
   return (neuron0x360ad20()*0.0225063);
}

double NNfunction_ng_chiPlus1::synapse0x361dc80() {
   return (neuron0x360b060()*-0.026662);
}

double NNfunction_ng_chiPlus1::synapse0x361dcc0() {
   return (neuron0x360b3a0()*-0.00213152);
}

double NNfunction_ng_chiPlus1::synapse0x361dd00() {
   return (neuron0x360b6e0()*-0.0535835);
}

double NNfunction_ng_chiPlus1::synapse0x361e080() {
   return (neuron0x3606bb0()*-0.0100839);
}

double NNfunction_ng_chiPlus1::synapse0x361e0c0() {
   return (neuron0x3606e60()*-0.000299051);
}

double NNfunction_ng_chiPlus1::synapse0x361e100() {
   return (neuron0x36071a0()*-0.300455);
}

double NNfunction_ng_chiPlus1::synapse0x361e140() {
   return (neuron0x36074e0()*-0.80264);
}

double NNfunction_ng_chiPlus1::synapse0x361e180() {
   return (neuron0x3607820()*-0.00169114);
}

double NNfunction_ng_chiPlus1::synapse0x361e1c0() {
   return (neuron0x3607b60()*-0.0393305);
}

double NNfunction_ng_chiPlus1::synapse0x361e200() {
   return (neuron0x3607ea0()*-0.0151715);
}

double NNfunction_ng_chiPlus1::synapse0x361e240() {
   return (neuron0x36081e0()*0.0206343);
}

double NNfunction_ng_chiPlus1::synapse0x361e280() {
   return (neuron0x3608520()*-0.0168353);
}

double NNfunction_ng_chiPlus1::synapse0x361e2c0() {
   return (neuron0x3608860()*0.00121165);
}

double NNfunction_ng_chiPlus1::synapse0x361e300() {
   return (neuron0x3608ba0()*0.00588434);
}

double NNfunction_ng_chiPlus1::synapse0x361e340() {
   return (neuron0x3608ee0()*-0.399247);
}

double NNfunction_ng_chiPlus1::synapse0x361e380() {
   return (neuron0x3609220()*-0.0400533);
}

double NNfunction_ng_chiPlus1::synapse0x361e3c0() {
   return (neuron0x3609560()*-0.0620671);
}

double NNfunction_ng_chiPlus1::synapse0x361e400() {
   return (neuron0x36098a0()*0.0439854);
}

double NNfunction_ng_chiPlus1::synapse0x361e440() {
   return (neuron0x3609be0()*-0.074458);
}

double NNfunction_ng_chiPlus1::synapse0x361ded0() {
   return (neuron0x3609f20()*-0.0557692);
}

double NNfunction_ng_chiPlus1::synapse0x361df10() {
   return (neuron0x360a480()*-0.0226837);
}

double NNfunction_ng_chiPlus1::synapse0x361e590() {
   return (neuron0x360a6a0()*-0.0277278);
}

double NNfunction_ng_chiPlus1::synapse0x361e5d0() {
   return (neuron0x360a9e0()*-0.0359466);
}

double NNfunction_ng_chiPlus1::synapse0x361e610() {
   return (neuron0x360ad20()*-0.0344621);
}

double NNfunction_ng_chiPlus1::synapse0x361e650() {
   return (neuron0x360b060()*0.0153328);
}

double NNfunction_ng_chiPlus1::synapse0x361e690() {
   return (neuron0x360b3a0()*-0.0131393);
}

double NNfunction_ng_chiPlus1::synapse0x361e6d0() {
   return (neuron0x360b6e0()*0.000886846);
}

double NNfunction_ng_chiPlus1::synapse0x361ea50() {
   return (neuron0x3606bb0()*0.038408);
}

double NNfunction_ng_chiPlus1::synapse0x361ea90() {
   return (neuron0x3606e60()*0.0298058);
}

double NNfunction_ng_chiPlus1::synapse0x361ead0() {
   return (neuron0x36071a0()*-0.0131102);
}

double NNfunction_ng_chiPlus1::synapse0x361eb10() {
   return (neuron0x36074e0()*-6.02409);
}

double NNfunction_ng_chiPlus1::synapse0x361eb50() {
   return (neuron0x3607820()*-0.00266774);
}

double NNfunction_ng_chiPlus1::synapse0x361eb90() {
   return (neuron0x3607b60()*0.00145464);
}

double NNfunction_ng_chiPlus1::synapse0x361ebd0() {
   return (neuron0x3607ea0()*0.0439759);
}

double NNfunction_ng_chiPlus1::synapse0x361ec10() {
   return (neuron0x36081e0()*0.00167807);
}

double NNfunction_ng_chiPlus1::synapse0x361ec50() {
   return (neuron0x3608520()*-0.00320456);
}

double NNfunction_ng_chiPlus1::synapse0x361ec90() {
   return (neuron0x3608860()*0.0443441);
}

double NNfunction_ng_chiPlus1::synapse0x361ecd0() {
   return (neuron0x3608ba0()*0.0226372);
}

double NNfunction_ng_chiPlus1::synapse0x361ed10() {
   return (neuron0x3608ee0()*-0.00816293);
}

double NNfunction_ng_chiPlus1::synapse0x361ed50() {
   return (neuron0x3609220()*0.083637);
}

double NNfunction_ng_chiPlus1::synapse0x361ed90() {
   return (neuron0x3609560()*-0.0107027);
}

double NNfunction_ng_chiPlus1::synapse0x361edd0() {
   return (neuron0x36098a0()*0.253524);
}

double NNfunction_ng_chiPlus1::synapse0x361ee10() {
   return (neuron0x3609be0()*0.0467493);
}

double NNfunction_ng_chiPlus1::synapse0x361e8a0() {
   return (neuron0x3609f20()*-0.126918);
}

double NNfunction_ng_chiPlus1::synapse0x361e8e0() {
   return (neuron0x360a480()*0.0113054);
}

double NNfunction_ng_chiPlus1::synapse0x361ef60() {
   return (neuron0x360a6a0()*0.125851);
}

double NNfunction_ng_chiPlus1::synapse0x361efa0() {
   return (neuron0x360a9e0()*-0.0356913);
}

double NNfunction_ng_chiPlus1::synapse0x361efe0() {
   return (neuron0x360ad20()*0.0406662);
}

double NNfunction_ng_chiPlus1::synapse0x361f020() {
   return (neuron0x360b060()*0.0589629);
}

double NNfunction_ng_chiPlus1::synapse0x361f060() {
   return (neuron0x360b3a0()*-0.0365432);
}

double NNfunction_ng_chiPlus1::synapse0x361f0a0() {
   return (neuron0x360b6e0()*0.120955);
}

double NNfunction_ng_chiPlus1::synapse0x361f420() {
   return (neuron0x3606bb0()*-0.176063);
}

double NNfunction_ng_chiPlus1::synapse0x361f460() {
   return (neuron0x3606e60()*0.0461627);
}

double NNfunction_ng_chiPlus1::synapse0x361f4a0() {
   return (neuron0x36071a0()*-0.287564);
}

double NNfunction_ng_chiPlus1::synapse0x361f4e0() {
   return (neuron0x36074e0()*0.0243691);
}

double NNfunction_ng_chiPlus1::synapse0x361f520() {
   return (neuron0x3607820()*0.130242);
}

double NNfunction_ng_chiPlus1::synapse0x361f560() {
   return (neuron0x3607b60()*-0.0264442);
}

double NNfunction_ng_chiPlus1::synapse0x361f5a0() {
   return (neuron0x3607ea0()*0.0689944);
}

double NNfunction_ng_chiPlus1::synapse0x361f5e0() {
   return (neuron0x36081e0()*-0.131903);
}

double NNfunction_ng_chiPlus1::synapse0x361f620() {
   return (neuron0x3608520()*-0.296048);
}

double NNfunction_ng_chiPlus1::synapse0x361f660() {
   return (neuron0x3608860()*-0.0538011);
}

double NNfunction_ng_chiPlus1::synapse0x361f6a0() {
   return (neuron0x3608ba0()*0.0484965);
}

double NNfunction_ng_chiPlus1::synapse0x361f6e0() {
   return (neuron0x3608ee0()*-0.310904);
}

double NNfunction_ng_chiPlus1::synapse0x361f720() {
   return (neuron0x3609220()*-0.376768);
}

double NNfunction_ng_chiPlus1::synapse0x361f760() {
   return (neuron0x3609560()*-0.299989);
}

double NNfunction_ng_chiPlus1::synapse0x361f7a0() {
   return (neuron0x36098a0()*-0.380724);
}

double NNfunction_ng_chiPlus1::synapse0x361f7e0() {
   return (neuron0x3609be0()*0.241257);
}

double NNfunction_ng_chiPlus1::synapse0x361f270() {
   return (neuron0x3609f20()*0.217438);
}

double NNfunction_ng_chiPlus1::synapse0x361f2b0() {
   return (neuron0x360a480()*0.150349);
}

double NNfunction_ng_chiPlus1::synapse0x361f930() {
   return (neuron0x360a6a0()*0.30944);
}

double NNfunction_ng_chiPlus1::synapse0x361f970() {
   return (neuron0x360a9e0()*0.000352797);
}

double NNfunction_ng_chiPlus1::synapse0x361f9b0() {
   return (neuron0x360ad20()*0.321134);
}

double NNfunction_ng_chiPlus1::synapse0x361f9f0() {
   return (neuron0x360b060()*0.366806);
}

double NNfunction_ng_chiPlus1::synapse0x361fa30() {
   return (neuron0x360b3a0()*0.187601);
}

double NNfunction_ng_chiPlus1::synapse0x361fa70() {
   return (neuron0x360b6e0()*-0.0945225);
}

double NNfunction_ng_chiPlus1::synapse0x361fdf0() {
   return (neuron0x3606bb0()*-0.0105771);
}

double NNfunction_ng_chiPlus1::synapse0x361fe30() {
   return (neuron0x3606e60()*-0.0195436);
}

double NNfunction_ng_chiPlus1::synapse0x361fe70() {
   return (neuron0x36071a0()*-1.3062);
}

double NNfunction_ng_chiPlus1::synapse0x361feb0() {
   return (neuron0x36074e0()*-2.39916);
}

double NNfunction_ng_chiPlus1::synapse0x361fef0() {
   return (neuron0x3607820()*-0.00737538);
}

double NNfunction_ng_chiPlus1::synapse0x361ff30() {
   return (neuron0x3607b60()*-0.103682);
}

double NNfunction_ng_chiPlus1::synapse0x361ff70() {
   return (neuron0x3607ea0()*0.10696);
}

double NNfunction_ng_chiPlus1::synapse0x361ffb0() {
   return (neuron0x36081e0()*-0.0833575);
}

double NNfunction_ng_chiPlus1::synapse0x361fff0() {
   return (neuron0x3608520()*0.130404);
}

double NNfunction_ng_chiPlus1::synapse0x3620030() {
   return (neuron0x3608860()*0.0361734);
}

double NNfunction_ng_chiPlus1::synapse0x3620070() {
   return (neuron0x3608ba0()*-0.0396209);
}

double NNfunction_ng_chiPlus1::synapse0x36200b0() {
   return (neuron0x3608ee0()*0.764954);
}

double NNfunction_ng_chiPlus1::synapse0x36200f0() {
   return (neuron0x3609220()*-0.212043);
}

double NNfunction_ng_chiPlus1::synapse0x3620130() {
   return (neuron0x3609560()*0.0341989);
}

double NNfunction_ng_chiPlus1::synapse0x3620170() {
   return (neuron0x36098a0()*0.133705);
}

double NNfunction_ng_chiPlus1::synapse0x36201b0() {
   return (neuron0x3609be0()*0.0698043);
}

double NNfunction_ng_chiPlus1::synapse0x361fc40() {
   return (neuron0x3609f20()*0.0414373);
}

double NNfunction_ng_chiPlus1::synapse0x361fc80() {
   return (neuron0x360a480()*0.153641);
}

double NNfunction_ng_chiPlus1::synapse0x3620300() {
   return (neuron0x360a6a0()*0.068231);
}

double NNfunction_ng_chiPlus1::synapse0x3620340() {
   return (neuron0x360a9e0()*0.0579599);
}

double NNfunction_ng_chiPlus1::synapse0x3620380() {
   return (neuron0x360ad20()*0.11846);
}

double NNfunction_ng_chiPlus1::synapse0x36203c0() {
   return (neuron0x360b060()*-0.0419547);
}

double NNfunction_ng_chiPlus1::synapse0x3620400() {
   return (neuron0x360b3a0()*-0.0615223);
}

double NNfunction_ng_chiPlus1::synapse0x3620440() {
   return (neuron0x360b6e0()*0.0184686);
}

double NNfunction_ng_chiPlus1::synapse0x36207c0() {
   return (neuron0x3606bb0()*0.0595226);
}

double NNfunction_ng_chiPlus1::synapse0x3620800() {
   return (neuron0x3606e60()*0.0206797);
}

double NNfunction_ng_chiPlus1::synapse0x3620840() {
   return (neuron0x36071a0()*1.41007);
}

double NNfunction_ng_chiPlus1::synapse0x3620880() {
   return (neuron0x36074e0()*0.313554);
}

double NNfunction_ng_chiPlus1::synapse0x36208c0() {
   return (neuron0x3607820()*-0.0204984);
}

double NNfunction_ng_chiPlus1::synapse0x3620900() {
   return (neuron0x3607b60()*-0.0956232);
}

double NNfunction_ng_chiPlus1::synapse0x3620940() {
   return (neuron0x3607ea0()*0.0448389);
}

double NNfunction_ng_chiPlus1::synapse0x3620980() {
   return (neuron0x36081e0()*0.0199869);
}

double NNfunction_ng_chiPlus1::synapse0x36209c0() {
   return (neuron0x3608520()*-0.0270844);
}

double NNfunction_ng_chiPlus1::synapse0x3620a00() {
   return (neuron0x3608860()*0.0257594);
}

double NNfunction_ng_chiPlus1::synapse0x3620a40() {
   return (neuron0x3608ba0()*0.0651243);
}

double NNfunction_ng_chiPlus1::synapse0x3620a80() {
   return (neuron0x3608ee0()*-0.12175);
}

double NNfunction_ng_chiPlus1::synapse0x3620ac0() {
   return (neuron0x3609220()*0.131279);
}

double NNfunction_ng_chiPlus1::synapse0x3620b00() {
   return (neuron0x3609560()*0.0462596);
}

double NNfunction_ng_chiPlus1::synapse0x3620b40() {
   return (neuron0x36098a0()*-0.0481577);
}

double NNfunction_ng_chiPlus1::synapse0x3620b80() {
   return (neuron0x3609be0()*-0.146909);
}

double NNfunction_ng_chiPlus1::synapse0x3620610() {
   return (neuron0x3609f20()*0.00876683);
}

double NNfunction_ng_chiPlus1::synapse0x3620650() {
   return (neuron0x360a480()*-0.115563);
}

double NNfunction_ng_chiPlus1::synapse0x3620cd0() {
   return (neuron0x360a6a0()*-0.0764688);
}

double NNfunction_ng_chiPlus1::synapse0x3620d10() {
   return (neuron0x360a9e0()*-0.017695);
}

double NNfunction_ng_chiPlus1::synapse0x3620d50() {
   return (neuron0x360ad20()*0.0500275);
}

double NNfunction_ng_chiPlus1::synapse0x3620d90() {
   return (neuron0x360b060()*0.0394016);
}

double NNfunction_ng_chiPlus1::synapse0x3620dd0() {
   return (neuron0x360b3a0()*-0.0438155);
}

double NNfunction_ng_chiPlus1::synapse0x3620e10() {
   return (neuron0x360b6e0()*0.359324);
}

double NNfunction_ng_chiPlus1::synapse0x3621190() {
   return (neuron0x3606bb0()*-0.0381915);
}

double NNfunction_ng_chiPlus1::synapse0x36211d0() {
   return (neuron0x3606e60()*0.0933315);
}

double NNfunction_ng_chiPlus1::synapse0x3621210() {
   return (neuron0x36071a0()*-0.279813);
}

double NNfunction_ng_chiPlus1::synapse0x3621250() {
   return (neuron0x36074e0()*-0.764593);
}

double NNfunction_ng_chiPlus1::synapse0x3621290() {
   return (neuron0x3607820()*-0.179924);
}

double NNfunction_ng_chiPlus1::synapse0x36212d0() {
   return (neuron0x3607b60()*0.289388);
}

double NNfunction_ng_chiPlus1::synapse0x3621310() {
   return (neuron0x3607ea0()*-0.150538);
}

double NNfunction_ng_chiPlus1::synapse0x3621350() {
   return (neuron0x36081e0()*0.0317626);
}

double NNfunction_ng_chiPlus1::synapse0x3621390() {
   return (neuron0x3608520()*-0.366622);
}

double NNfunction_ng_chiPlus1::synapse0x36213d0() {
   return (neuron0x3608860()*0.100267);
}

double NNfunction_ng_chiPlus1::synapse0x3621410() {
   return (neuron0x3608ba0()*0.499676);
}

double NNfunction_ng_chiPlus1::synapse0x3621450() {
   return (neuron0x3608ee0()*0.28755);
}

double NNfunction_ng_chiPlus1::synapse0x3621490() {
   return (neuron0x3609220()*-0.0991511);
}

double NNfunction_ng_chiPlus1::synapse0x36214d0() {
   return (neuron0x3609560()*0.270701);
}

double NNfunction_ng_chiPlus1::synapse0x3621510() {
   return (neuron0x36098a0()*-0.363712);
}

double NNfunction_ng_chiPlus1::synapse0x3621550() {
   return (neuron0x3609be0()*0.241594);
}

double NNfunction_ng_chiPlus1::synapse0x3620fe0() {
   return (neuron0x3609f20()*0.265325);
}

double NNfunction_ng_chiPlus1::synapse0x3621020() {
   return (neuron0x360a480()*-0.493983);
}

double NNfunction_ng_chiPlus1::synapse0x36216a0() {
   return (neuron0x360a6a0()*-0.352275);
}

double NNfunction_ng_chiPlus1::synapse0x36216e0() {
   return (neuron0x360a9e0()*-0.283547);
}

double NNfunction_ng_chiPlus1::synapse0x3621720() {
   return (neuron0x360ad20()*-0.309831);
}

double NNfunction_ng_chiPlus1::synapse0x3621760() {
   return (neuron0x360b060()*0.135705);
}

double NNfunction_ng_chiPlus1::synapse0x36217a0() {
   return (neuron0x360b3a0()*-0.0837499);
}

double NNfunction_ng_chiPlus1::synapse0x36217e0() {
   return (neuron0x360b6e0()*-0.190236);
}

double NNfunction_ng_chiPlus1::synapse0x3621b60() {
   return (neuron0x3606bb0()*0.118062);
}

double NNfunction_ng_chiPlus1::synapse0x3621ba0() {
   return (neuron0x3606e60()*0.0930606);
}

double NNfunction_ng_chiPlus1::synapse0x3621be0() {
   return (neuron0x36071a0()*-0.400347);
}

double NNfunction_ng_chiPlus1::synapse0x3621c20() {
   return (neuron0x36074e0()*-0.0663356);
}

double NNfunction_ng_chiPlus1::synapse0x3621c60() {
   return (neuron0x3607820()*0.482657);
}

double NNfunction_ng_chiPlus1::synapse0x3621ca0() {
   return (neuron0x3607b60()*-0.00709106);
}

double NNfunction_ng_chiPlus1::synapse0x3621ce0() {
   return (neuron0x3607ea0()*0.0287218);
}

double NNfunction_ng_chiPlus1::synapse0x3621d20() {
   return (neuron0x36081e0()*-0.0288182);
}

double NNfunction_ng_chiPlus1::synapse0x3621d60() {
   return (neuron0x3608520()*-0.104181);
}

double NNfunction_ng_chiPlus1::synapse0x3621da0() {
   return (neuron0x3608860()*0.141419);
}

double NNfunction_ng_chiPlus1::synapse0x3621de0() {
   return (neuron0x3608ba0()*0.25969);
}

double NNfunction_ng_chiPlus1::synapse0x3621e20() {
   return (neuron0x3608ee0()*-0.527579);
}

double NNfunction_ng_chiPlus1::synapse0x3621e60() {
   return (neuron0x3609220()*-0.0561124);
}

double NNfunction_ng_chiPlus1::synapse0x3621ea0() {
   return (neuron0x3609560()*-0.425059);
}

double NNfunction_ng_chiPlus1::synapse0x3621ee0() {
   return (neuron0x36098a0()*0.119626);
}

double NNfunction_ng_chiPlus1::synapse0x3621f20() {
   return (neuron0x3609be0()*-0.116928);
}

double NNfunction_ng_chiPlus1::synapse0x36219b0() {
   return (neuron0x3609f20()*0.0558375);
}

double NNfunction_ng_chiPlus1::synapse0x36219f0() {
   return (neuron0x360a480()*0.126912);
}

double NNfunction_ng_chiPlus1::synapse0x3622070() {
   return (neuron0x360a6a0()*0.174473);
}

double NNfunction_ng_chiPlus1::synapse0x36220b0() {
   return (neuron0x360a9e0()*0.449888);
}

double NNfunction_ng_chiPlus1::synapse0x36220f0() {
   return (neuron0x360ad20()*0.817947);
}

double NNfunction_ng_chiPlus1::synapse0x3622130() {
   return (neuron0x360b060()*0.831304);
}

double NNfunction_ng_chiPlus1::synapse0x3622170() {
   return (neuron0x360b3a0()*0.148417);
}

double NNfunction_ng_chiPlus1::synapse0x36221b0() {
   return (neuron0x360b6e0()*0.0754257);
}

double NNfunction_ng_chiPlus1::synapse0x3622530() {
   return (neuron0x3606bb0()*-0.0783692);
}

double NNfunction_ng_chiPlus1::synapse0x3616b00() {
   return (neuron0x3606e60()*0.204745);
}

double NNfunction_ng_chiPlus1::synapse0x3616b40() {
   return (neuron0x36071a0()*-0.711393);
}

double NNfunction_ng_chiPlus1::synapse0x3616b80() {
   return (neuron0x36074e0()*0.898164);
}

double NNfunction_ng_chiPlus1::synapse0x3616dd0() {
   return (neuron0x3607820()*0.217342);
}

double NNfunction_ng_chiPlus1::synapse0x3616e10() {
   return (neuron0x3607b60()*0.0465334);
}

double NNfunction_ng_chiPlus1::synapse0x3616e50() {
   return (neuron0x3607ea0()*-0.147968);
}

double NNfunction_ng_chiPlus1::synapse0x36170a0() {
   return (neuron0x36081e0()*-0.0455421);
}

double NNfunction_ng_chiPlus1::synapse0x36170e0() {
   return (neuron0x3608520()*0.465589);
}

double NNfunction_ng_chiPlus1::synapse0x3617330() {
   return (neuron0x3608860()*-0.25131);
}

double NNfunction_ng_chiPlus1::synapse0x3617370() {
   return (neuron0x3608ba0()*-0.0111137);
}

double NNfunction_ng_chiPlus1::synapse0x36173b0() {
   return (neuron0x3608ee0()*-0.631677);
}

double NNfunction_ng_chiPlus1::synapse0x3617600() {
   return (neuron0x3609220()*-0.374516);
}

double NNfunction_ng_chiPlus1::synapse0x3617640() {
   return (neuron0x3609560()*-0.0828001);
}

double NNfunction_ng_chiPlus1::synapse0x3617890() {
   return (neuron0x36098a0()*0.103253);
}

double NNfunction_ng_chiPlus1::synapse0x36178d0() {
   return (neuron0x3609be0()*0.312528);
}

double NNfunction_ng_chiPlus1::synapse0x3622380() {
   return (neuron0x3609f20()*0.112872);
}

double NNfunction_ng_chiPlus1::synapse0x36223c0() {
   return (neuron0x360a480()*0.217516);
}

double NNfunction_ng_chiPlus1::synapse0x3617a20() {
   return (neuron0x360a6a0()*-0.286841);
}

double NNfunction_ng_chiPlus1::synapse0x3617f30() {
   return (neuron0x360a9e0()*0.353335);
}

double NNfunction_ng_chiPlus1::synapse0x3617f70() {
   return (neuron0x360ad20()*0.327591);
}

double NNfunction_ng_chiPlus1::synapse0x3617fb0() {
   return (neuron0x360b060()*0.711014);
}

double NNfunction_ng_chiPlus1::synapse0x3618200() {
   return (neuron0x360b3a0()*0.389663);
}

double NNfunction_ng_chiPlus1::synapse0x3618240() {
   return (neuron0x360b6e0()*-0.0501592);
}

double NNfunction_ng_chiPlus1::synapse0x3617af0() {
   return (neuron0x3606bb0()*-0.00482342);
}

double NNfunction_ng_chiPlus1::synapse0x3617b30() {
   return (neuron0x3606e60()*0.0165257);
}

double NNfunction_ng_chiPlus1::synapse0x3617b70() {
   return (neuron0x36071a0()*0.03021);
}

double NNfunction_ng_chiPlus1::synapse0x3617bb0() {
   return (neuron0x36074e0()*-11.9013);
}

double NNfunction_ng_chiPlus1::synapse0x3618530() {
   return (neuron0x3607820()*-0.000842937);
}

double NNfunction_ng_chiPlus1::synapse0x3624880() {
   return (neuron0x3607b60()*0.0235857);
}

double NNfunction_ng_chiPlus1::synapse0x36248c0() {
   return (neuron0x3607ea0()*0.0160948);
}

double NNfunction_ng_chiPlus1::synapse0x3624900() {
   return (neuron0x36081e0()*0.0121155);
}

double NNfunction_ng_chiPlus1::synapse0x3624940() {
   return (neuron0x3608520()*0.0284152);
}

double NNfunction_ng_chiPlus1::synapse0x3624980() {
   return (neuron0x3608860()*0.0544308);
}

double NNfunction_ng_chiPlus1::synapse0x36249c0() {
   return (neuron0x3608ba0()*0.0267359);
}

double NNfunction_ng_chiPlus1::synapse0x3624a00() {
   return (neuron0x3608ee0()*0.38461);
}

double NNfunction_ng_chiPlus1::synapse0x3624a40() {
   return (neuron0x3609220()*0.34976);
}

double NNfunction_ng_chiPlus1::synapse0x3624a80() {
   return (neuron0x3609560()*-0.00635303);
}

double NNfunction_ng_chiPlus1::synapse0x3624ac0() {
   return (neuron0x36098a0()*0.198198);
}

double NNfunction_ng_chiPlus1::synapse0x3624b00() {
   return (neuron0x3609be0()*0.131339);
}

double NNfunction_ng_chiPlus1::synapse0x3618410() {
   return (neuron0x3609f20()*-0.0695756);
}

double NNfunction_ng_chiPlus1::synapse0x3618450() {
   return (neuron0x360a480()*0.0987654);
}

double NNfunction_ng_chiPlus1::synapse0x3624c50() {
   return (neuron0x360a6a0()*0.0952439);
}

double NNfunction_ng_chiPlus1::synapse0x3624c90() {
   return (neuron0x360a9e0()*-0.0060342);
}

double NNfunction_ng_chiPlus1::synapse0x3624cd0() {
   return (neuron0x360ad20()*-0.0095692);
}

double NNfunction_ng_chiPlus1::synapse0x3624d10() {
   return (neuron0x360b060()*0.0796095);
}

double NNfunction_ng_chiPlus1::synapse0x3624d50() {
   return (neuron0x360b3a0()*0.00746514);
}

double NNfunction_ng_chiPlus1::synapse0x3624d90() {
   return (neuron0x360b6e0()*0.159958);
}

double NNfunction_ng_chiPlus1::synapse0x3625110() {
   return (neuron0x3606bb0()*-0.0198549);
}

double NNfunction_ng_chiPlus1::synapse0x3625150() {
   return (neuron0x3606e60()*-0.0077178);
}

double NNfunction_ng_chiPlus1::synapse0x3625190() {
   return (neuron0x36071a0()*2.13917);
}

double NNfunction_ng_chiPlus1::synapse0x36251d0() {
   return (neuron0x36074e0()*-0.0308784);
}

double NNfunction_ng_chiPlus1::synapse0x3625210() {
   return (neuron0x3607820()*0.000615785);
}

double NNfunction_ng_chiPlus1::synapse0x3625250() {
   return (neuron0x3607b60()*-0.00717496);
}

double NNfunction_ng_chiPlus1::synapse0x3625290() {
   return (neuron0x3607ea0()*0.0133597);
}

double NNfunction_ng_chiPlus1::synapse0x36252d0() {
   return (neuron0x36081e0()*-0.0182869);
}

double NNfunction_ng_chiPlus1::synapse0x3625310() {
   return (neuron0x3608520()*0.00700291);
}

double NNfunction_ng_chiPlus1::synapse0x3625350() {
   return (neuron0x3608860()*0.00690121);
}

double NNfunction_ng_chiPlus1::synapse0x3625390() {
   return (neuron0x3608ba0()*-0.00201374);
}

double NNfunction_ng_chiPlus1::synapse0x36253d0() {
   return (neuron0x3608ee0()*0.125782);
}

double NNfunction_ng_chiPlus1::synapse0x3625410() {
   return (neuron0x3609220()*0.12244);
}

double NNfunction_ng_chiPlus1::synapse0x3625450() {
   return (neuron0x3609560()*-0.016022);
}

double NNfunction_ng_chiPlus1::synapse0x3625490() {
   return (neuron0x36098a0()*0.0164971);
}

double NNfunction_ng_chiPlus1::synapse0x36254d0() {
   return (neuron0x3609be0()*0.0698821);
}

double NNfunction_ng_chiPlus1::synapse0x3624f60() {
   return (neuron0x3609f20()*-0.0493955);
}

double NNfunction_ng_chiPlus1::synapse0x3624fa0() {
   return (neuron0x360a480()*0.0145431);
}

double NNfunction_ng_chiPlus1::synapse0x3625620() {
   return (neuron0x360a6a0()*0.00390701);
}

double NNfunction_ng_chiPlus1::synapse0x3625660() {
   return (neuron0x360a9e0()*0.00900568);
}

double NNfunction_ng_chiPlus1::synapse0x36256a0() {
   return (neuron0x360ad20()*0.0199872);
}

double NNfunction_ng_chiPlus1::synapse0x36256e0() {
   return (neuron0x360b060()*0.00612971);
}

double NNfunction_ng_chiPlus1::synapse0x3625720() {
   return (neuron0x360b3a0()*-0.00123595);
}

double NNfunction_ng_chiPlus1::synapse0x3625760() {
   return (neuron0x360b6e0()*0.0618262);
}

double NNfunction_ng_chiPlus1::synapse0x3625ae0() {
   return (neuron0x3606bb0()*0.032034);
}

double NNfunction_ng_chiPlus1::synapse0x3625b20() {
   return (neuron0x3606e60()*0.0141722);
}

double NNfunction_ng_chiPlus1::synapse0x3625b60() {
   return (neuron0x36071a0()*-0.0283621);
}

double NNfunction_ng_chiPlus1::synapse0x3625ba0() {
   return (neuron0x36074e0()*7.30353);
}

double NNfunction_ng_chiPlus1::synapse0x3625be0() {
   return (neuron0x3607820()*0.0289569);
}

double NNfunction_ng_chiPlus1::synapse0x3625c20() {
   return (neuron0x3607b60()*0.00496494);
}

double NNfunction_ng_chiPlus1::synapse0x3625c60() {
   return (neuron0x3607ea0()*0.00222149);
}

double NNfunction_ng_chiPlus1::synapse0x3625ca0() {
   return (neuron0x36081e0()*0.00583839);
}

double NNfunction_ng_chiPlus1::synapse0x3625ce0() {
   return (neuron0x3608520()*0.0342087);
}

double NNfunction_ng_chiPlus1::synapse0x3625d20() {
   return (neuron0x3608860()*0.0100426);
}

double NNfunction_ng_chiPlus1::synapse0x3625d60() {
   return (neuron0x3608ba0()*-0.019357);
}

double NNfunction_ng_chiPlus1::synapse0x3625da0() {
   return (neuron0x3608ee0()*0.16413);
}

double NNfunction_ng_chiPlus1::synapse0x3625de0() {
   return (neuron0x3609220()*0.156375);
}

double NNfunction_ng_chiPlus1::synapse0x3625e20() {
   return (neuron0x3609560()*0.00386255);
}

double NNfunction_ng_chiPlus1::synapse0x3625e60() {
   return (neuron0x36098a0()*0.0821986);
}

double NNfunction_ng_chiPlus1::synapse0x3625ea0() {
   return (neuron0x3609be0()*0.100065);
}

double NNfunction_ng_chiPlus1::synapse0x3625930() {
   return (neuron0x3609f20()*-0.0572111);
}

double NNfunction_ng_chiPlus1::synapse0x3625970() {
   return (neuron0x360a480()*0.12024);
}

double NNfunction_ng_chiPlus1::synapse0x3625ff0() {
   return (neuron0x360a6a0()*0.0564114);
}

double NNfunction_ng_chiPlus1::synapse0x3626030() {
   return (neuron0x360a9e0()*0.0242884);
}

double NNfunction_ng_chiPlus1::synapse0x3626070() {
   return (neuron0x360ad20()*-0.0803932);
}

double NNfunction_ng_chiPlus1::synapse0x36260b0() {
   return (neuron0x360b060()*0.041529);
}

double NNfunction_ng_chiPlus1::synapse0x36260f0() {
   return (neuron0x360b3a0()*-0.0137411);
}

double NNfunction_ng_chiPlus1::synapse0x3626130() {
   return (neuron0x360b6e0()*0.124128);
}

double NNfunction_ng_chiPlus1::synapse0x36264b0() {
   return (neuron0x3606bb0()*-0.0149587);
}

double NNfunction_ng_chiPlus1::synapse0x36264f0() {
   return (neuron0x3606e60()*-0.00518135);
}

double NNfunction_ng_chiPlus1::synapse0x3626530() {
   return (neuron0x36071a0()*-0.178575);
}

double NNfunction_ng_chiPlus1::synapse0x3626570() {
   return (neuron0x36074e0()*-0.824493);
}

double NNfunction_ng_chiPlus1::synapse0x36265b0() {
   return (neuron0x3607820()*0.0121987);
}

double NNfunction_ng_chiPlus1::synapse0x36265f0() {
   return (neuron0x3607b60()*0.0139244);
}

double NNfunction_ng_chiPlus1::synapse0x3626630() {
   return (neuron0x3607ea0()*0.0175374);
}

double NNfunction_ng_chiPlus1::synapse0x3626670() {
   return (neuron0x36081e0()*-0.00718906);
}

double NNfunction_ng_chiPlus1::synapse0x36266b0() {
   return (neuron0x3608520()*0.0372816);
}

double NNfunction_ng_chiPlus1::synapse0x36266f0() {
   return (neuron0x3608860()*-0.00216893);
}

double NNfunction_ng_chiPlus1::synapse0x3626730() {
   return (neuron0x3608ba0()*-0.0389448);
}

double NNfunction_ng_chiPlus1::synapse0x3626770() {
   return (neuron0x3608ee0()*-0.188819);
}

double NNfunction_ng_chiPlus1::synapse0x36267b0() {
   return (neuron0x3609220()*0.0224111);
}

double NNfunction_ng_chiPlus1::synapse0x36267f0() {
   return (neuron0x3609560()*0.00148125);
}

double NNfunction_ng_chiPlus1::synapse0x3626830() {
   return (neuron0x36098a0()*-0.0132568);
}

double NNfunction_ng_chiPlus1::synapse0x3626870() {
   return (neuron0x3609be0()*0.0593871);
}

double NNfunction_ng_chiPlus1::synapse0x3626300() {
   return (neuron0x3609f20()*-0.00412657);
}

double NNfunction_ng_chiPlus1::synapse0x3626340() {
   return (neuron0x360a480()*-0.00296641);
}

double NNfunction_ng_chiPlus1::synapse0x36269c0() {
   return (neuron0x360a6a0()*-0.0101333);
}

double NNfunction_ng_chiPlus1::synapse0x3626a00() {
   return (neuron0x360a9e0()*0.0117273);
}

double NNfunction_ng_chiPlus1::synapse0x3626a40() {
   return (neuron0x360ad20()*0.00460659);
}

double NNfunction_ng_chiPlus1::synapse0x3626a80() {
   return (neuron0x360b060()*-0.0210607);
}

double NNfunction_ng_chiPlus1::synapse0x3626ac0() {
   return (neuron0x360b3a0()*0.0150059);
}

double NNfunction_ng_chiPlus1::synapse0x3626b00() {
   return (neuron0x360b6e0()*0.0837028);
}

double NNfunction_ng_chiPlus1::synapse0x3626e80() {
   return (neuron0x3606bb0()*0.0283833);
}

double NNfunction_ng_chiPlus1::synapse0x3626ec0() {
   return (neuron0x3606e60()*-0.000762778);
}

double NNfunction_ng_chiPlus1::synapse0x3626f00() {
   return (neuron0x36071a0()*1.07987);
}

double NNfunction_ng_chiPlus1::synapse0x3626f40() {
   return (neuron0x36074e0()*0.00569032);
}

double NNfunction_ng_chiPlus1::synapse0x3626f80() {
   return (neuron0x3607820()*-0.00754809);
}

double NNfunction_ng_chiPlus1::synapse0x3626fc0() {
   return (neuron0x3607b60()*0.000102212);
}

double NNfunction_ng_chiPlus1::synapse0x3627000() {
   return (neuron0x3607ea0()*-0.0219254);
}

double NNfunction_ng_chiPlus1::synapse0x3627040() {
   return (neuron0x36081e0()*0.00169592);
}

double NNfunction_ng_chiPlus1::synapse0x3627080() {
   return (neuron0x3608520()*-0.0206729);
}

double NNfunction_ng_chiPlus1::synapse0x36270c0() {
   return (neuron0x3608860()*0.00362065);
}

double NNfunction_ng_chiPlus1::synapse0x3627100() {
   return (neuron0x3608ba0()*-0.0172961);
}

double NNfunction_ng_chiPlus1::synapse0x3627140() {
   return (neuron0x3608ee0()*-0.146766);
}

double NNfunction_ng_chiPlus1::synapse0x3627180() {
   return (neuron0x3609220()*-0.083736);
}

double NNfunction_ng_chiPlus1::synapse0x36271c0() {
   return (neuron0x3609560()*-0.00197829);
}

double NNfunction_ng_chiPlus1::synapse0x3627200() {
   return (neuron0x36098a0()*-0.00780254);
}

double NNfunction_ng_chiPlus1::synapse0x3627240() {
   return (neuron0x3609be0()*0.00594254);
}

double NNfunction_ng_chiPlus1::synapse0x3626cd0() {
   return (neuron0x3609f20()*0.00325857);
}

double NNfunction_ng_chiPlus1::synapse0x3626d10() {
   return (neuron0x360a480()*-0.0540518);
}

double NNfunction_ng_chiPlus1::synapse0x3627390() {
   return (neuron0x360a6a0()*-0.0647396);
}

double NNfunction_ng_chiPlus1::synapse0x36273d0() {
   return (neuron0x360a9e0()*-0.0330091);
}

double NNfunction_ng_chiPlus1::synapse0x3627410() {
   return (neuron0x360ad20()*0.0539468);
}

double NNfunction_ng_chiPlus1::synapse0x3627450() {
   return (neuron0x360b060()*-0.00554302);
}

double NNfunction_ng_chiPlus1::synapse0x3627490() {
   return (neuron0x360b3a0()*0.0227554);
}

double NNfunction_ng_chiPlus1::synapse0x36274d0() {
   return (neuron0x360b6e0()*-7.27196);
}

double NNfunction_ng_chiPlus1::synapse0x3627850() {
   return (neuron0x3606bb0()*0.0260049);
}

double NNfunction_ng_chiPlus1::synapse0x3627890() {
   return (neuron0x3606e60()*-0.0112036);
}

double NNfunction_ng_chiPlus1::synapse0x36278d0() {
   return (neuron0x36071a0()*-0.0839825);
}

double NNfunction_ng_chiPlus1::synapse0x3627910() {
   return (neuron0x36074e0()*1.8882);
}

double NNfunction_ng_chiPlus1::synapse0x3627950() {
   return (neuron0x3607820()*-0.0550703);
}

double NNfunction_ng_chiPlus1::synapse0x3627990() {
   return (neuron0x3607b60()*-0.0539906);
}

double NNfunction_ng_chiPlus1::synapse0x36279d0() {
   return (neuron0x3607ea0()*0.0428725);
}

double NNfunction_ng_chiPlus1::synapse0x3627a10() {
   return (neuron0x36081e0()*-0.0362112);
}

double NNfunction_ng_chiPlus1::synapse0x3627a50() {
   return (neuron0x3608520()*-0.0359215);
}

double NNfunction_ng_chiPlus1::synapse0x3627a90() {
   return (neuron0x3608860()*-0.00735231);
}

double NNfunction_ng_chiPlus1::synapse0x3627ad0() {
   return (neuron0x3608ba0()*0.0333502);
}

double NNfunction_ng_chiPlus1::synapse0x3627b10() {
   return (neuron0x3608ee0()*1.15406);
}

double NNfunction_ng_chiPlus1::synapse0x3627b50() {
   return (neuron0x3609220()*-2.59525);
}

double NNfunction_ng_chiPlus1::synapse0x3627b90() {
   return (neuron0x3609560()*0.0515534);
}

double NNfunction_ng_chiPlus1::synapse0x3627bd0() {
   return (neuron0x36098a0()*-0.0237323);
}

double NNfunction_ng_chiPlus1::synapse0x3627c10() {
   return (neuron0x3609be0()*0.075824);
}

double NNfunction_ng_chiPlus1::synapse0x36276a0() {
   return (neuron0x3609f20()*0.0350739);
}

double NNfunction_ng_chiPlus1::synapse0x36276e0() {
   return (neuron0x360a480()*0.234837);
}

double NNfunction_ng_chiPlus1::synapse0x3627d60() {
   return (neuron0x360a6a0()*0.0494613);
}

double NNfunction_ng_chiPlus1::synapse0x3627da0() {
   return (neuron0x360a9e0()*0.044758);
}

double NNfunction_ng_chiPlus1::synapse0x3627de0() {
   return (neuron0x360ad20()*-0.0476729);
}

double NNfunction_ng_chiPlus1::synapse0x3627e20() {
   return (neuron0x360b060()*0.0163116);
}

double NNfunction_ng_chiPlus1::synapse0x3627e60() {
   return (neuron0x360b3a0()*-0.0360553);
}

double NNfunction_ng_chiPlus1::synapse0x3627ea0() {
   return (neuron0x360b6e0()*0.303967);
}

double NNfunction_ng_chiPlus1::synapse0x3628220() {
   return (neuron0x3606bb0()*0.164191);
}

double NNfunction_ng_chiPlus1::synapse0x3628260() {
   return (neuron0x3606e60()*0.0851962);
}

double NNfunction_ng_chiPlus1::synapse0x36282a0() {
   return (neuron0x36071a0()*0.914298);
}

double NNfunction_ng_chiPlus1::synapse0x36282e0() {
   return (neuron0x36074e0()*0.0858107);
}

double NNfunction_ng_chiPlus1::synapse0x3628320() {
   return (neuron0x3607820()*-0.279369);
}

double NNfunction_ng_chiPlus1::synapse0x3628360() {
   return (neuron0x3607b60()*-0.135256);
}

double NNfunction_ng_chiPlus1::synapse0x36283a0() {
   return (neuron0x3607ea0()*-0.374712);
}

double NNfunction_ng_chiPlus1::synapse0x36283e0() {
   return (neuron0x36081e0()*0.15582);
}

double NNfunction_ng_chiPlus1::synapse0x3628420() {
   return (neuron0x3608520()*-0.097413);
}

double NNfunction_ng_chiPlus1::synapse0x3628460() {
   return (neuron0x3608860()*0.0382172);
}

double NNfunction_ng_chiPlus1::synapse0x36284a0() {
   return (neuron0x3608ba0()*-0.000415813);
}

double NNfunction_ng_chiPlus1::synapse0x36284e0() {
   return (neuron0x3608ee0()*-0.0950092);
}

double NNfunction_ng_chiPlus1::synapse0x3628520() {
   return (neuron0x3609220()*-0.794487);
}

double NNfunction_ng_chiPlus1::synapse0x3628560() {
   return (neuron0x3609560()*0.0648504);
}

double NNfunction_ng_chiPlus1::synapse0x36285a0() {
   return (neuron0x36098a0()*-0.0163721);
}

double NNfunction_ng_chiPlus1::synapse0x36285e0() {
   return (neuron0x3609be0()*-0.25917);
}

double NNfunction_ng_chiPlus1::synapse0x3628070() {
   return (neuron0x3609f20()*0.736181);
}

double NNfunction_ng_chiPlus1::synapse0x36280b0() {
   return (neuron0x360a480()*-0.255947);
}

double NNfunction_ng_chiPlus1::synapse0x3628730() {
   return (neuron0x360a6a0()*-0.196871);
}

double NNfunction_ng_chiPlus1::synapse0x3628770() {
   return (neuron0x360a9e0()*-0.0883036);
}

double NNfunction_ng_chiPlus1::synapse0x36287b0() {
   return (neuron0x360ad20()*-0.0405538);
}

double NNfunction_ng_chiPlus1::synapse0x36287f0() {
   return (neuron0x360b060()*0.0493717);
}

double NNfunction_ng_chiPlus1::synapse0x3628830() {
   return (neuron0x360b3a0()*-0.0664761);
}

double NNfunction_ng_chiPlus1::synapse0x3628870() {
   return (neuron0x360b6e0()*0.674843);
}

double NNfunction_ng_chiPlus1::synapse0x3628bf0() {
   return (neuron0x3606bb0()*0.000537908);
}

double NNfunction_ng_chiPlus1::synapse0x3628c30() {
   return (neuron0x3606e60()*-0.0869821);
}

double NNfunction_ng_chiPlus1::synapse0x3628c70() {
   return (neuron0x36071a0()*-0.0893971);
}

double NNfunction_ng_chiPlus1::synapse0x3628cb0() {
   return (neuron0x36074e0()*-0.0232883);
}

double NNfunction_ng_chiPlus1::synapse0x3628cf0() {
   return (neuron0x3607820()*-0.0886226);
}

double NNfunction_ng_chiPlus1::synapse0x3628d30() {
   return (neuron0x3607b60()*0.12024);
}

double NNfunction_ng_chiPlus1::synapse0x3628d70() {
   return (neuron0x3607ea0()*0.00642573);
}

double NNfunction_ng_chiPlus1::synapse0x3628db0() {
   return (neuron0x36081e0()*-0.00890683);
}

double NNfunction_ng_chiPlus1::synapse0x3628df0() {
   return (neuron0x3608520()*-0.0627339);
}

double NNfunction_ng_chiPlus1::synapse0x3628e30() {
   return (neuron0x3608860()*0.106363);
}

double NNfunction_ng_chiPlus1::synapse0x3628e70() {
   return (neuron0x3608ba0()*0.115242);
}

double NNfunction_ng_chiPlus1::synapse0x3628eb0() {
   return (neuron0x3608ee0()*-0.449047);
}

double NNfunction_ng_chiPlus1::synapse0x3628ef0() {
   return (neuron0x3609220()*0.468691);
}

double NNfunction_ng_chiPlus1::synapse0x3628f30() {
   return (neuron0x3609560()*-0.140265);
}

double NNfunction_ng_chiPlus1::synapse0x3628f70() {
   return (neuron0x36098a0()*0.266323);
}

double NNfunction_ng_chiPlus1::synapse0x3628fb0() {
   return (neuron0x3609be0()*-0.211344);
}

double NNfunction_ng_chiPlus1::synapse0x3628a40() {
   return (neuron0x3609f20()*-0.088524);
}

double NNfunction_ng_chiPlus1::synapse0x3628a80() {
   return (neuron0x360a480()*-0.0299298);
}

double NNfunction_ng_chiPlus1::synapse0x3629100() {
   return (neuron0x360a6a0()*-0.261403);
}

double NNfunction_ng_chiPlus1::synapse0x3629140() {
   return (neuron0x360a9e0()*0.0119666);
}

double NNfunction_ng_chiPlus1::synapse0x3629180() {
   return (neuron0x360ad20()*0.243654);
}

double NNfunction_ng_chiPlus1::synapse0x36291c0() {
   return (neuron0x360b060()*0.0240499);
}

double NNfunction_ng_chiPlus1::synapse0x3629200() {
   return (neuron0x360b3a0()*-0.037263);
}

double NNfunction_ng_chiPlus1::synapse0x3629240() {
   return (neuron0x360b6e0()*-1.93849);
}

double NNfunction_ng_chiPlus1::synapse0x3611cf0() {
   return (neuron0x3606bb0()*-0.0285809);
}

double NNfunction_ng_chiPlus1::synapse0x3611d30() {
   return (neuron0x3606e60()*-0.0495351);
}

double NNfunction_ng_chiPlus1::synapse0x3611d70() {
   return (neuron0x36071a0()*0.688414);
}

double NNfunction_ng_chiPlus1::synapse0x3611db0() {
   return (neuron0x36074e0()*-0.58472);
}

double NNfunction_ng_chiPlus1::synapse0x3611df0() {
   return (neuron0x3607820()*-0.324513);
}

double NNfunction_ng_chiPlus1::synapse0x3611e30() {
   return (neuron0x3607b60()*0.140296);
}

double NNfunction_ng_chiPlus1::synapse0x3611e70() {
   return (neuron0x3607ea0()*-0.0834816);
}

double NNfunction_ng_chiPlus1::synapse0x3611eb0() {
   return (neuron0x36081e0()*0.0768573);
}

double NNfunction_ng_chiPlus1::synapse0x36299d0() {
   return (neuron0x3608520()*-0.0127885);
}

double NNfunction_ng_chiPlus1::synapse0x3629a10() {
   return (neuron0x3608860()*-0.0668267);
}

double NNfunction_ng_chiPlus1::synapse0x3629a50() {
   return (neuron0x3608ba0()*-0.111172);
}

double NNfunction_ng_chiPlus1::synapse0x3629a90() {
   return (neuron0x3608ee0()*-0.520376);
}

double NNfunction_ng_chiPlus1::synapse0x3629ad0() {
   return (neuron0x3609220()*-0.622466);
}

double NNfunction_ng_chiPlus1::synapse0x3629b10() {
   return (neuron0x3609560()*0.194123);
}

double NNfunction_ng_chiPlus1::synapse0x3629b50() {
   return (neuron0x36098a0()*-0.383699);
}

double NNfunction_ng_chiPlus1::synapse0x3629b90() {
   return (neuron0x3609be0()*-0.339421);
}

double NNfunction_ng_chiPlus1::synapse0x3629410() {
   return (neuron0x3609f20()*0.0378426);
}

double NNfunction_ng_chiPlus1::synapse0x3629450() {
   return (neuron0x360a480()*-0.0740826);
}

double NNfunction_ng_chiPlus1::synapse0x3629ce0() {
   return (neuron0x360a6a0()*-0.073888);
}

double NNfunction_ng_chiPlus1::synapse0x3629d20() {
   return (neuron0x360a9e0()*0.0428692);
}

double NNfunction_ng_chiPlus1::synapse0x3629d60() {
   return (neuron0x360ad20()*0.141265);
}

double NNfunction_ng_chiPlus1::synapse0x3629da0() {
   return (neuron0x360b060()*-0.0246369);
}

double NNfunction_ng_chiPlus1::synapse0x3629de0() {
   return (neuron0x360b3a0()*0.13292);
}

double NNfunction_ng_chiPlus1::synapse0x3629e20() {
   return (neuron0x360b6e0()*-0.0166514);
}

double NNfunction_ng_chiPlus1::synapse0x362a1a0() {
   return (neuron0x3606bb0()*-0.0408411);
}

double NNfunction_ng_chiPlus1::synapse0x362a1e0() {
   return (neuron0x3606e60()*0.00600917);
}

double NNfunction_ng_chiPlus1::synapse0x362a220() {
   return (neuron0x36071a0()*4.80741);
}

double NNfunction_ng_chiPlus1::synapse0x362a260() {
   return (neuron0x36074e0()*-0.0271466);
}

double NNfunction_ng_chiPlus1::synapse0x362a2a0() {
   return (neuron0x3607820()*-0.0218753);
}

double NNfunction_ng_chiPlus1::synapse0x362a2e0() {
   return (neuron0x3607b60()*0.015362);
}

double NNfunction_ng_chiPlus1::synapse0x362a320() {
   return (neuron0x3607ea0()*0.00875282);
}

double NNfunction_ng_chiPlus1::synapse0x362a360() {
   return (neuron0x36081e0()*0.015062);
}

double NNfunction_ng_chiPlus1::synapse0x362a3a0() {
   return (neuron0x3608520()*-0.0142643);
}

double NNfunction_ng_chiPlus1::synapse0x362a3e0() {
   return (neuron0x3608860()*0.00487098);
}

double NNfunction_ng_chiPlus1::synapse0x362a420() {
   return (neuron0x3608ba0()*0.00802196);
}

double NNfunction_ng_chiPlus1::synapse0x362a460() {
   return (neuron0x3608ee0()*-0.0774581);
}

double NNfunction_ng_chiPlus1::synapse0x362a4a0() {
   return (neuron0x3609220()*0.0247935);
}

double NNfunction_ng_chiPlus1::synapse0x362a4e0() {
   return (neuron0x3609560()*-0.00299389);
}

double NNfunction_ng_chiPlus1::synapse0x362a520() {
   return (neuron0x36098a0()*0.0103356);
}

double NNfunction_ng_chiPlus1::synapse0x362a560() {
   return (neuron0x3609be0()*0.00719289);
}

double NNfunction_ng_chiPlus1::synapse0x3629ff0() {
   return (neuron0x3609f20()*-0.0081465);
}

double NNfunction_ng_chiPlus1::synapse0x362a030() {
   return (neuron0x360a480()*-0.0200165);
}

double NNfunction_ng_chiPlus1::synapse0x362a6b0() {
   return (neuron0x360a6a0()*-0.00779772);
}

double NNfunction_ng_chiPlus1::synapse0x362a6f0() {
   return (neuron0x360a9e0()*-0.0115499);
}

double NNfunction_ng_chiPlus1::synapse0x362a730() {
   return (neuron0x360ad20()*0.00783512);
}

double NNfunction_ng_chiPlus1::synapse0x362a770() {
   return (neuron0x360b060()*0.00906612);
}

double NNfunction_ng_chiPlus1::synapse0x362a7b0() {
   return (neuron0x360b3a0()*0.00151984);
}

double NNfunction_ng_chiPlus1::synapse0x362a7f0() {
   return (neuron0x360b6e0()*7.68239);
}

double NNfunction_ng_chiPlus1::synapse0x362ab70() {
   return (neuron0x3606bb0()*0.0822018);
}

double NNfunction_ng_chiPlus1::synapse0x362abb0() {
   return (neuron0x3606e60()*0.0689306);
}

double NNfunction_ng_chiPlus1::synapse0x362abf0() {
   return (neuron0x36071a0()*0.523398);
}

double NNfunction_ng_chiPlus1::synapse0x362ac30() {
   return (neuron0x36074e0()*-0.545805);
}

double NNfunction_ng_chiPlus1::synapse0x362ac70() {
   return (neuron0x3607820()*-0.131419);
}

double NNfunction_ng_chiPlus1::synapse0x362acb0() {
   return (neuron0x3607b60()*0.112305);
}

double NNfunction_ng_chiPlus1::synapse0x362acf0() {
   return (neuron0x3607ea0()*-0.102856);
}

double NNfunction_ng_chiPlus1::synapse0x362ad30() {
   return (neuron0x36081e0()*0.0168427);
}

double NNfunction_ng_chiPlus1::synapse0x362ad70() {
   return (neuron0x3608520()*-0.138598);
}

double NNfunction_ng_chiPlus1::synapse0x362adb0() {
   return (neuron0x3608860()*0.223186);
}

double NNfunction_ng_chiPlus1::synapse0x362adf0() {
   return (neuron0x3608ba0()*0.0301664);
}

double NNfunction_ng_chiPlus1::synapse0x362ae30() {
   return (neuron0x3608ee0()*0.185621);
}

double NNfunction_ng_chiPlus1::synapse0x362ae70() {
   return (neuron0x3609220()*1.0463);
}

double NNfunction_ng_chiPlus1::synapse0x362aeb0() {
   return (neuron0x3609560()*0.0616631);
}

double NNfunction_ng_chiPlus1::synapse0x362aef0() {
   return (neuron0x36098a0()*-0.201366);
}

double NNfunction_ng_chiPlus1::synapse0x362af30() {
   return (neuron0x3609be0()*0.0354607);
}

double NNfunction_ng_chiPlus1::synapse0x362a9c0() {
   return (neuron0x3609f20()*0.00192734);
}

double NNfunction_ng_chiPlus1::synapse0x362aa00() {
   return (neuron0x360a480()*-0.146824);
}

double NNfunction_ng_chiPlus1::synapse0x361b530() {
   return (neuron0x360a6a0()*0.402671);
}

double NNfunction_ng_chiPlus1::synapse0x361b570() {
   return (neuron0x360a9e0()*-0.0732102);
}

double NNfunction_ng_chiPlus1::synapse0x361b5b0() {
   return (neuron0x360ad20()*0.0175405);
}

double NNfunction_ng_chiPlus1::synapse0x361b5f0() {
   return (neuron0x360b060()*-0.0723244);
}

double NNfunction_ng_chiPlus1::synapse0x361b630() {
   return (neuron0x360b3a0()*-0.157923);
}

double NNfunction_ng_chiPlus1::synapse0x361b670() {
   return (neuron0x360b6e0()*0.0346528);
}

double NNfunction_ng_chiPlus1::synapse0x361b9f0() {
   return (neuron0x3606bb0()*-0.0082312);
}

double NNfunction_ng_chiPlus1::synapse0x361ba30() {
   return (neuron0x3606e60()*-0.00380956);
}

double NNfunction_ng_chiPlus1::synapse0x361ba70() {
   return (neuron0x36071a0()*-0.427851);
}

double NNfunction_ng_chiPlus1::synapse0x361bab0() {
   return (neuron0x36074e0()*0.910621);
}

double NNfunction_ng_chiPlus1::synapse0x361baf0() {
   return (neuron0x3607820()*0.00388249);
}

double NNfunction_ng_chiPlus1::synapse0x361bb30() {
   return (neuron0x3607b60()*-0.00984898);
}

double NNfunction_ng_chiPlus1::synapse0x361bb70() {
   return (neuron0x3607ea0()*-0.00253435);
}

double NNfunction_ng_chiPlus1::synapse0x361bbb0() {
   return (neuron0x36081e0()*0.0123393);
}

double NNfunction_ng_chiPlus1::synapse0x361bbf0() {
   return (neuron0x3608520()*0.0058206);
}

double NNfunction_ng_chiPlus1::synapse0x361bc30() {
   return (neuron0x3608860()*0.00547564);
}

double NNfunction_ng_chiPlus1::synapse0x361bc70() {
   return (neuron0x3608ba0()*0.00178853);
}

double NNfunction_ng_chiPlus1::synapse0x361bcb0() {
   return (neuron0x3608ee0()*-0.353087);
}

double NNfunction_ng_chiPlus1::synapse0x361bcf0() {
   return (neuron0x3609220()*0.00442986);
}

double NNfunction_ng_chiPlus1::synapse0x361bd30() {
   return (neuron0x3609560()*-0.0373417);
}

double NNfunction_ng_chiPlus1::synapse0x361bd70() {
   return (neuron0x36098a0()*0.0248827);
}

double NNfunction_ng_chiPlus1::synapse0x361bdb0() {
   return (neuron0x3609be0()*0.0160829);
}

double NNfunction_ng_chiPlus1::synapse0x361b840() {
   return (neuron0x3609f20()*-0.0370553);
}

double NNfunction_ng_chiPlus1::synapse0x361b880() {
   return (neuron0x360a480()*-0.00220915);
}

double NNfunction_ng_chiPlus1::synapse0x361bf00() {
   return (neuron0x360a6a0()*-0.0256688);
}

double NNfunction_ng_chiPlus1::synapse0x361bf40() {
   return (neuron0x360a9e0()*-0.0120879);
}

double NNfunction_ng_chiPlus1::synapse0x361bf80() {
   return (neuron0x360ad20()*-0.0150969);
}

double NNfunction_ng_chiPlus1::synapse0x361bfc0() {
   return (neuron0x360b060()*0.0084914);
}

double NNfunction_ng_chiPlus1::synapse0x361c000() {
   return (neuron0x360b3a0()*0.00634369);
}

double NNfunction_ng_chiPlus1::synapse0x361c040() {
   return (neuron0x360b6e0()*0.039397);
}

double NNfunction_ng_chiPlus1::synapse0x361c3c0() {
   return (neuron0x3606bb0()*-0.0206387);
}

double NNfunction_ng_chiPlus1::synapse0x361c400() {
   return (neuron0x3606e60()*-0.00536441);
}

double NNfunction_ng_chiPlus1::synapse0x361c440() {
   return (neuron0x36071a0()*-1.58439);
}

double NNfunction_ng_chiPlus1::synapse0x361c480() {
   return (neuron0x36074e0()*0.0575564);
}

double NNfunction_ng_chiPlus1::synapse0x361c4c0() {
   return (neuron0x3607820()*0.016825);
}

double NNfunction_ng_chiPlus1::synapse0x361c500() {
   return (neuron0x3607b60()*0.0123884);
}

double NNfunction_ng_chiPlus1::synapse0x361c540() {
   return (neuron0x3607ea0()*0.012394);
}

double NNfunction_ng_chiPlus1::synapse0x361c580() {
   return (neuron0x36081e0()*-8.26524e-06);
}

double NNfunction_ng_chiPlus1::synapse0x361c5c0() {
   return (neuron0x3608520()*0.0198575);
}

double NNfunction_ng_chiPlus1::synapse0x361c600() {
   return (neuron0x3608860()*0.00947026);
}

double NNfunction_ng_chiPlus1::synapse0x361c640() {
   return (neuron0x3608ba0()*0.0315791);
}

double NNfunction_ng_chiPlus1::synapse0x361c680() {
   return (neuron0x3608ee0()*0.437681);
}

double NNfunction_ng_chiPlus1::synapse0x361c6c0() {
   return (neuron0x3609220()*0.0565809);
}

double NNfunction_ng_chiPlus1::synapse0x361c700() {
   return (neuron0x3609560()*0.00634355);
}

double NNfunction_ng_chiPlus1::synapse0x361c740() {
   return (neuron0x36098a0()*0.0279303);
}

double NNfunction_ng_chiPlus1::synapse0x361c780() {
   return (neuron0x3609be0()*0.0503614);
}

double NNfunction_ng_chiPlus1::synapse0x361c210() {
   return (neuron0x3609f20()*-0.0397222);
}

double NNfunction_ng_chiPlus1::synapse0x361c250() {
   return (neuron0x360a480()*0.0147193);
}

double NNfunction_ng_chiPlus1::synapse0x361c8d0() {
   return (neuron0x360a6a0()*0.0167152);
}

double NNfunction_ng_chiPlus1::synapse0x361c910() {
   return (neuron0x360a9e0()*0.0261557);
}

double NNfunction_ng_chiPlus1::synapse0x361c950() {
   return (neuron0x360ad20()*-0.0232708);
}

double NNfunction_ng_chiPlus1::synapse0x361c990() {
   return (neuron0x360b060()*0.00343097);
}

double NNfunction_ng_chiPlus1::synapse0x361c9d0() {
   return (neuron0x360b3a0()*-0.000148067);
}

double NNfunction_ng_chiPlus1::synapse0x361ca10() {
   return (neuron0x360b6e0()*-0.624092);
}

double NNfunction_ng_chiPlus1::synapse0x361cd90() {
   return (neuron0x3606bb0()*0.00382764);
}

double NNfunction_ng_chiPlus1::synapse0x361cdd0() {
   return (neuron0x3606e60()*-0.00670709);
}

double NNfunction_ng_chiPlus1::synapse0x361ce10() {
   return (neuron0x36071a0()*-0.376551);
}

double NNfunction_ng_chiPlus1::synapse0x361ce50() {
   return (neuron0x36074e0()*0.0162817);
}

double NNfunction_ng_chiPlus1::synapse0x361ce90() {
   return (neuron0x3607820()*0.0445902);
}

double NNfunction_ng_chiPlus1::synapse0x361ced0() {
   return (neuron0x3607b60()*0.0247728);
}

double NNfunction_ng_chiPlus1::synapse0x361cf10() {
   return (neuron0x3607ea0()*-0.0125239);
}

double NNfunction_ng_chiPlus1::synapse0x361cf50() {
   return (neuron0x36081e0()*0.0252917);
}

double NNfunction_ng_chiPlus1::synapse0x361cf90() {
   return (neuron0x3608520()*-0.00637174);
}

double NNfunction_ng_chiPlus1::synapse0x361cfd0() {
   return (neuron0x3608860()*0.0374603);
}

double NNfunction_ng_chiPlus1::synapse0x361d010() {
   return (neuron0x3608ba0()*0.0392543);
}

double NNfunction_ng_chiPlus1::synapse0x361d050() {
   return (neuron0x3608ee0()*-0.519284);
}

double NNfunction_ng_chiPlus1::synapse0x361d090() {
   return (neuron0x3609220()*0.273558);
}

double NNfunction_ng_chiPlus1::synapse0x361d0d0() {
   return (neuron0x3609560()*0.000430946);
}

double NNfunction_ng_chiPlus1::synapse0x361d110() {
   return (neuron0x36098a0()*0.0594811);
}

double NNfunction_ng_chiPlus1::synapse0x361d150() {
   return (neuron0x3609be0()*-0.0315015);
}

double NNfunction_ng_chiPlus1::synapse0x361cbe0() {
   return (neuron0x3609f20()*-0.00697427);
}

double NNfunction_ng_chiPlus1::synapse0x361cc20() {
   return (neuron0x360a480()*0.0600055);
}

double NNfunction_ng_chiPlus1::synapse0x361d2a0() {
   return (neuron0x360a6a0()*0.0204527);
}

double NNfunction_ng_chiPlus1::synapse0x361d2e0() {
   return (neuron0x360a9e0()*0.024324);
}

double NNfunction_ng_chiPlus1::synapse0x361d320() {
   return (neuron0x360ad20()*0.0308726);
}

double NNfunction_ng_chiPlus1::synapse0x361d360() {
   return (neuron0x360b060()*-0.0180467);
}

double NNfunction_ng_chiPlus1::synapse0x361d3a0() {
   return (neuron0x360b3a0()*0.0106919);
}

double NNfunction_ng_chiPlus1::synapse0x361d3e0() {
   return (neuron0x360b6e0()*-2.64246);
}

double NNfunction_ng_chiPlus1::synapse0x362f2b0() {
   return (neuron0x3606bb0()*0.027587);
}

double NNfunction_ng_chiPlus1::synapse0x362f2f0() {
   return (neuron0x3606e60()*0.0280271);
}

double NNfunction_ng_chiPlus1::synapse0x362f330() {
   return (neuron0x36071a0()*0.0397132);
}

double NNfunction_ng_chiPlus1::synapse0x362f370() {
   return (neuron0x36074e0()*-1.50349);
}

double NNfunction_ng_chiPlus1::synapse0x362f3b0() {
   return (neuron0x3607820()*0.0336861);
}

double NNfunction_ng_chiPlus1::synapse0x362f3f0() {
   return (neuron0x3607b60()*-0.00668604);
}

double NNfunction_ng_chiPlus1::synapse0x362f430() {
   return (neuron0x3607ea0()*0.0279334);
}

double NNfunction_ng_chiPlus1::synapse0x362f470() {
   return (neuron0x36081e0()*0.095297);
}

double NNfunction_ng_chiPlus1::synapse0x362f4b0() {
   return (neuron0x3608520()*0.00388779);
}

double NNfunction_ng_chiPlus1::synapse0x362f4f0() {
   return (neuron0x3608860()*0.0132554);
}

double NNfunction_ng_chiPlus1::synapse0x362f530() {
   return (neuron0x3608ba0()*-0.137323);
}

double NNfunction_ng_chiPlus1::synapse0x362f570() {
   return (neuron0x3608ee0()*1.79374);
}

double NNfunction_ng_chiPlus1::synapse0x362f5b0() {
   return (neuron0x3609220()*-1.70307);
}

double NNfunction_ng_chiPlus1::synapse0x362f5f0() {
   return (neuron0x3609560()*-0.164238);
}

double NNfunction_ng_chiPlus1::synapse0x362f630() {
   return (neuron0x36098a0()*0.0554249);
}

double NNfunction_ng_chiPlus1::synapse0x362f670() {
   return (neuron0x3609be0()*-0.163241);
}

double NNfunction_ng_chiPlus1::synapse0x361d420() {
   return (neuron0x3609f20()*-0.0109479);
}

double NNfunction_ng_chiPlus1::synapse0x361d460() {
   return (neuron0x360a480()*-0.0291624);
}

double NNfunction_ng_chiPlus1::synapse0x362f7c0() {
   return (neuron0x360a6a0()*0.0258317);
}

double NNfunction_ng_chiPlus1::synapse0x362f800() {
   return (neuron0x360a9e0()*0.0943414);
}

double NNfunction_ng_chiPlus1::synapse0x362f840() {
   return (neuron0x360ad20()*0.00366143);
}

double NNfunction_ng_chiPlus1::synapse0x362f880() {
   return (neuron0x360b060()*-0.0365383);
}

double NNfunction_ng_chiPlus1::synapse0x362f8c0() {
   return (neuron0x360b3a0()*0.022246);
}

double NNfunction_ng_chiPlus1::synapse0x362f900() {
   return (neuron0x360b6e0()*0.165956);
}

double NNfunction_ng_chiPlus1::synapse0x362fc80() {
   return (neuron0x3606bb0()*0.0333497);
}

double NNfunction_ng_chiPlus1::synapse0x362fcc0() {
   return (neuron0x3606e60()*-0.0311558);
}

double NNfunction_ng_chiPlus1::synapse0x362fd00() {
   return (neuron0x36071a0()*-0.382293);
}

double NNfunction_ng_chiPlus1::synapse0x362fd40() {
   return (neuron0x36074e0()*0.173289);
}

double NNfunction_ng_chiPlus1::synapse0x362fd80() {
   return (neuron0x3607820()*0.0404018);
}

double NNfunction_ng_chiPlus1::synapse0x362fdc0() {
   return (neuron0x3607b60()*0.014599);
}

double NNfunction_ng_chiPlus1::synapse0x362fe00() {
   return (neuron0x3607ea0()*0.0133206);
}

double NNfunction_ng_chiPlus1::synapse0x362fe40() {
   return (neuron0x36081e0()*0.00991034);
}

double NNfunction_ng_chiPlus1::synapse0x362fe80() {
   return (neuron0x3608520()*0.0116952);
}

double NNfunction_ng_chiPlus1::synapse0x362fec0() {
   return (neuron0x3608860()*0.0268359);
}

double NNfunction_ng_chiPlus1::synapse0x362ff00() {
   return (neuron0x3608ba0()*0.0486141);
}

double NNfunction_ng_chiPlus1::synapse0x362ff40() {
   return (neuron0x3608ee0()*0.472369);
}

double NNfunction_ng_chiPlus1::synapse0x362ff80() {
   return (neuron0x3609220()*0.157131);
}

double NNfunction_ng_chiPlus1::synapse0x362ffc0() {
   return (neuron0x3609560()*-0.0551582);
}

double NNfunction_ng_chiPlus1::synapse0x3630000() {
   return (neuron0x36098a0()*0.0116543);
}

double NNfunction_ng_chiPlus1::synapse0x3630040() {
   return (neuron0x3609be0()*0.0243535);
}

double NNfunction_ng_chiPlus1::synapse0x362fad0() {
   return (neuron0x3609f20()*-0.110229);
}

double NNfunction_ng_chiPlus1::synapse0x362fb10() {
   return (neuron0x360a480()*0.0563415);
}

double NNfunction_ng_chiPlus1::synapse0x3630190() {
   return (neuron0x360a6a0()*0.0655474);
}

double NNfunction_ng_chiPlus1::synapse0x36301d0() {
   return (neuron0x360a9e0()*0.0258141);
}

double NNfunction_ng_chiPlus1::synapse0x3630210() {
   return (neuron0x360ad20()*0.014939);
}

double NNfunction_ng_chiPlus1::synapse0x3630250() {
   return (neuron0x360b060()*-0.00221608);
}

double NNfunction_ng_chiPlus1::synapse0x3630290() {
   return (neuron0x360b3a0()*0.00748268);
}

double NNfunction_ng_chiPlus1::synapse0x36302d0() {
   return (neuron0x360b6e0()*-1.08347);
}

double NNfunction_ng_chiPlus1::synapse0x3630650() {
   return (neuron0x3606bb0()*-0.0213342);
}

double NNfunction_ng_chiPlus1::synapse0x3630690() {
   return (neuron0x3606e60()*-0.119889);
}

double NNfunction_ng_chiPlus1::synapse0x36306d0() {
   return (neuron0x36071a0()*-0.122574);
}

double NNfunction_ng_chiPlus1::synapse0x3630710() {
   return (neuron0x36074e0()*-1.03078);
}

double NNfunction_ng_chiPlus1::synapse0x3630750() {
   return (neuron0x3607820()*-0.0447614);
}

double NNfunction_ng_chiPlus1::synapse0x3630790() {
   return (neuron0x3607b60()*0.29022);
}

double NNfunction_ng_chiPlus1::synapse0x36307d0() {
   return (neuron0x3607ea0()*-0.044396);
}

double NNfunction_ng_chiPlus1::synapse0x3630810() {
   return (neuron0x36081e0()*0.0939399);
}

double NNfunction_ng_chiPlus1::synapse0x3630850() {
   return (neuron0x3608520()*0.200682);
}

double NNfunction_ng_chiPlus1::synapse0x3630890() {
   return (neuron0x3608860()*-0.248511);
}

double NNfunction_ng_chiPlus1::synapse0x36308d0() {
   return (neuron0x3608ba0()*-0.242938);
}

double NNfunction_ng_chiPlus1::synapse0x3630910() {
   return (neuron0x3608ee0()*0.768909);
}

double NNfunction_ng_chiPlus1::synapse0x3630950() {
   return (neuron0x3609220()*0.497605);
}

double NNfunction_ng_chiPlus1::synapse0x3630990() {
   return (neuron0x3609560()*-0.185697);
}

double NNfunction_ng_chiPlus1::synapse0x36309d0() {
   return (neuron0x36098a0()*-0.280175);
}

double NNfunction_ng_chiPlus1::synapse0x3630a10() {
   return (neuron0x3609be0()*-0.187775);
}

double NNfunction_ng_chiPlus1::synapse0x36304a0() {
   return (neuron0x3609f20()*-0.230922);
}

double NNfunction_ng_chiPlus1::synapse0x36304e0() {
   return (neuron0x360a480()*-0.346363);
}

double NNfunction_ng_chiPlus1::synapse0x3630b60() {
   return (neuron0x360a6a0()*-0.011239);
}

double NNfunction_ng_chiPlus1::synapse0x3630ba0() {
   return (neuron0x360a9e0()*-0.00510924);
}

double NNfunction_ng_chiPlus1::synapse0x3630be0() {
   return (neuron0x360ad20()*-0.179026);
}

double NNfunction_ng_chiPlus1::synapse0x3630c20() {
   return (neuron0x360b060()*-0.124363);
}

double NNfunction_ng_chiPlus1::synapse0x3630c60() {
   return (neuron0x360b3a0()*-0.0806574);
}

double NNfunction_ng_chiPlus1::synapse0x3630ca0() {
   return (neuron0x360b6e0()*-0.222869);
}

double NNfunction_ng_chiPlus1::synapse0x3631020() {
   return (neuron0x3606bb0()*0.0633086);
}

double NNfunction_ng_chiPlus1::synapse0x3631060() {
   return (neuron0x3606e60()*0.00878978);
}

double NNfunction_ng_chiPlus1::synapse0x36310a0() {
   return (neuron0x36071a0()*-0.721943);
}

double NNfunction_ng_chiPlus1::synapse0x36310e0() {
   return (neuron0x36074e0()*0.018558);
}

double NNfunction_ng_chiPlus1::synapse0x3631120() {
   return (neuron0x3607820()*0.00792035);
}

double NNfunction_ng_chiPlus1::synapse0x3631160() {
   return (neuron0x3607b60()*-0.00191077);
}

double NNfunction_ng_chiPlus1::synapse0x36311a0() {
   return (neuron0x3607ea0()*-0.0105623);
}

double NNfunction_ng_chiPlus1::synapse0x36311e0() {
   return (neuron0x36081e0()*0.0123243);
}

double NNfunction_ng_chiPlus1::synapse0x3631220() {
   return (neuron0x3608520()*0.0112327);
}

double NNfunction_ng_chiPlus1::synapse0x3631260() {
   return (neuron0x3608860()*0.00740317);
}

double NNfunction_ng_chiPlus1::synapse0x36312a0() {
   return (neuron0x3608ba0()*0.00233583);
}

double NNfunction_ng_chiPlus1::synapse0x36312e0() {
   return (neuron0x3608ee0()*0.218633);
}

double NNfunction_ng_chiPlus1::synapse0x3631320() {
   return (neuron0x3609220()*0.10855);
}

double NNfunction_ng_chiPlus1::synapse0x3631360() {
   return (neuron0x3609560()*0.0280088);
}

double NNfunction_ng_chiPlus1::synapse0x36313a0() {
   return (neuron0x36098a0()*0.0197976);
}

double NNfunction_ng_chiPlus1::synapse0x36313e0() {
   return (neuron0x3609be0()*0.0332337);
}

double NNfunction_ng_chiPlus1::synapse0x3630e70() {
   return (neuron0x3609f20()*0.00393125);
}

double NNfunction_ng_chiPlus1::synapse0x3630eb0() {
   return (neuron0x360a480()*0.0128715);
}

double NNfunction_ng_chiPlus1::synapse0x3631530() {
   return (neuron0x360a6a0()*0.0155061);
}

double NNfunction_ng_chiPlus1::synapse0x3631570() {
   return (neuron0x360a9e0()*0.01437);
}

double NNfunction_ng_chiPlus1::synapse0x36315b0() {
   return (neuron0x360ad20()*0.0265044);
}

double NNfunction_ng_chiPlus1::synapse0x36315f0() {
   return (neuron0x360b060()*-0.0112312);
}

double NNfunction_ng_chiPlus1::synapse0x3631630() {
   return (neuron0x360b3a0()*0.00387613);
}

double NNfunction_ng_chiPlus1::synapse0x3631670() {
   return (neuron0x360b6e0()*-7.29659);
}

double NNfunction_ng_chiPlus1::synapse0x33d14a0() {
   return (neuron0x360bb50()*0.752331);
}

double NNfunction_ng_chiPlus1::synapse0x33d14e0() {
   return (neuron0x360c4a0()*-0.237625);
}

double NNfunction_ng_chiPlus1::synapse0x360e010() {
   return (neuron0x360cf80()*0.037037);
}

double NNfunction_ng_chiPlus1::synapse0x360e050() {
   return (neuron0x360ca20()*-0.0886111);
}

double NNfunction_ng_chiPlus1::synapse0x360faf0() {
   return (neuron0x360dd60()*0.433319);
}

double NNfunction_ng_chiPlus1::synapse0x360fb30() {
   return (neuron0x360f840()*-0.2834);
}

double NNfunction_ng_chiPlus1::synapse0x36108c0() {
   return (neuron0x3610610()*-0.0997635);
}

double NNfunction_ng_chiPlus1::synapse0x3610900() {
   return (neuron0x3610fe0()*-0.22929);
}

double NNfunction_ng_chiPlus1::synapse0x3611290() {
   return (neuron0x36119b0()*-0.456573);
}

double NNfunction_ng_chiPlus1::synapse0x36112d0() {
   return (neuron0x3612490()*0.223173);
}

double NNfunction_ng_chiPlus1::synapse0x3611c60() {
   return (neuron0x3612e60()*-0.0132791);
}

double NNfunction_ng_chiPlus1::synapse0x3611ca0() {
   return (neuron0x360ff40()*0.409817);
}

double NNfunction_ng_chiPlus1::synapse0x3612740() {
   return (neuron0x3614a10()*0.141441);
}

double NNfunction_ng_chiPlus1::synapse0x3612780() {
   return (neuron0x36153e0()*-0.106947);
}

double NNfunction_ng_chiPlus1::synapse0x3613110() {
   return (neuron0x3615db0()*0.0777028);
}

double NNfunction_ng_chiPlus1::synapse0x3613150() {
   return (neuron0x3616780()*-0.485851);
}

double NNfunction_ng_chiPlus1::synapse0x36101f0() {
   return (neuron0x3618590()*0.0370426);
}

double NNfunction_ng_chiPlus1::synapse0x3610230() {
   return (neuron0x3618870()*0.252866);
}

double NNfunction_ng_chiPlus1::synapse0x3614cc0() {
   return (neuron0x3619240()*-0.77877);
}

double NNfunction_ng_chiPlus1::synapse0x3614d00() {
   return (neuron0x3619c10()*-0.966801);
}

double NNfunction_ng_chiPlus1::synapse0x3615690() {
   return (neuron0x361a5e0()*0.397165);
}

double NNfunction_ng_chiPlus1::synapse0x36156d0() {
   return (neuron0x361afb0()*-0.484178);
}

double NNfunction_ng_chiPlus1::synapse0x3616060() {
   return (neuron0x3613b00()*-0.97081);
}

double NNfunction_ng_chiPlus1::synapse0x36160a0() {
   return (neuron0x36144d0()*0.360678);
}

double NNfunction_ng_chiPlus1::synapse0x3616a30() {
   return (neuron0x361dd40()*-0.0952576);
}

double NNfunction_ng_chiPlus1::synapse0x3616a70() {
   return (neuron0x361e710()*-0.471847);
}

double NNfunction_ng_chiPlus1::synapse0x3609ac0() {
   return (neuron0x361f0e0()*0.264509);
}

double NNfunction_ng_chiPlus1::synapse0x3609b00() {
   return (neuron0x361fab0()*-0.283351);
}

double NNfunction_ng_chiPlus1::synapse0x3618b20() {
   return (neuron0x3620480()*0.148923);
}

double NNfunction_ng_chiPlus1::synapse0x3618b60() {
   return (neuron0x3620e50()*-0.257487);
}

double NNfunction_ng_chiPlus1::synapse0x36194f0() {
   return (neuron0x3621820()*-0.339424);
}

double NNfunction_ng_chiPlus1::synapse0x3619530() {
   return (neuron0x36221f0()*0.0767441);
}

double NNfunction_ng_chiPlus1::synapse0x3619ec0() {
   return (neuron0x3618280()*-0.0618607);
}

double NNfunction_ng_chiPlus1::synapse0x3619f00() {
   return (neuron0x3624dd0()*0.347608);
}

double NNfunction_ng_chiPlus1::synapse0x361a890() {
   return (neuron0x36257a0()*0.286967);
}

double NNfunction_ng_chiPlus1::synapse0x361a8d0() {
   return (neuron0x3626170()*0.254005);
}

double NNfunction_ng_chiPlus1::synapse0x361b260() {
   return (neuron0x3626b40()*-0.244589);
}

double NNfunction_ng_chiPlus1::synapse0x361b2a0() {
   return (neuron0x3627510()*0.517483);
}

double NNfunction_ng_chiPlus1::synapse0x3613db0() {
   return (neuron0x3627ee0()*0.228807);
}

double NNfunction_ng_chiPlus1::synapse0x3613df0() {
   return (neuron0x36288b0()*-0.223954);
}

double NNfunction_ng_chiPlus1::synapse0x361d660() {
   return (neuron0x3629280()*0.153817);
}

double NNfunction_ng_chiPlus1::synapse0x361d6a0() {
   return (neuron0x3629e60()*-0.915475);
}

double NNfunction_ng_chiPlus1::synapse0x361dff0() {
   return (neuron0x362a830()*-0.158944);
}

double NNfunction_ng_chiPlus1::synapse0x361e030() {
   return (neuron0x361b6b0()*0.00984997);
}

double NNfunction_ng_chiPlus1::synapse0x361e9c0() {
   return (neuron0x361c080()*0.00738635);
}

double NNfunction_ng_chiPlus1::synapse0x361ea00() {
   return (neuron0x361ca50()*-0.45041);
}

double NNfunction_ng_chiPlus1::synapse0x361f390() {
   return (neuron0x362f090()*-0.293394);
}

double NNfunction_ng_chiPlus1::synapse0x361f3d0() {
   return (neuron0x362f940()*0.177469);
}

double NNfunction_ng_chiPlus1::synapse0x361fd60() {
   return (neuron0x3630310()*-0.0609157);
}

double NNfunction_ng_chiPlus1::synapse0x361fda0() {
   return (neuron0x3630ce0()*0.670761);
}

double NNfunction_ng_chiPlus1::synapse0x36224a0() {
   return (neuron0x360bb50()*-0.117261);
}

double NNfunction_ng_chiPlus1::synapse0x36224e0() {
   return (neuron0x360c4a0()*-0.0407614);
}

double NNfunction_ng_chiPlus1::synapse0x3617a60() {
   return (neuron0x360cf80()*0.0318881);
}

double NNfunction_ng_chiPlus1::synapse0x3617aa0() {
   return (neuron0x360ca20()*-0.00778824);
}

double NNfunction_ng_chiPlus1::synapse0x3625080() {
   return (neuron0x360dd60()*3.26697);
}

double NNfunction_ng_chiPlus1::synapse0x36250c0() {
   return (neuron0x360f840()*-0.0436248);
}

double NNfunction_ng_chiPlus1::synapse0x3625a50() {
   return (neuron0x3610610()*-0.0156978);
}

double NNfunction_ng_chiPlus1::synapse0x3625a90() {
   return (neuron0x3610fe0()*-0.569202);
}

double NNfunction_ng_chiPlus1::synapse0x3626420() {
   return (neuron0x36119b0()*-0.104017);
}

double NNfunction_ng_chiPlus1::synapse0x3626460() {
   return (neuron0x3612490()*0.795213);
}

double NNfunction_ng_chiPlus1::synapse0x3626df0() {
   return (neuron0x3612e60()*-0.0103334);
}

double NNfunction_ng_chiPlus1::synapse0x3626e30() {
   return (neuron0x360ff40()*0.451572);
}

double NNfunction_ng_chiPlus1::synapse0x36277c0() {
   return (neuron0x3614a10()*-0.0135099);
}

double NNfunction_ng_chiPlus1::synapse0x3627800() {
   return (neuron0x36153e0()*0.00979984);
}

double NNfunction_ng_chiPlus1::synapse0x3628190() {
   return (neuron0x3615db0()*-0.0190948);
}

double NNfunction_ng_chiPlus1::synapse0x36281d0() {
   return (neuron0x3616780()*-0.470496);
}

double NNfunction_ng_chiPlus1::synapse0x3628b60() {
   return (neuron0x3618590()*-0.0300738);
}

double NNfunction_ng_chiPlus1::synapse0x3628ba0() {
   return (neuron0x3618870()*-0.407445);
}

double NNfunction_ng_chiPlus1::synapse0x3629530() {
   return (neuron0x3619240()*-0.199092);
}

double NNfunction_ng_chiPlus1::synapse0x3629570() {
   return (neuron0x3619c10()*0.13456);
}

double NNfunction_ng_chiPlus1::synapse0x362a110() {
   return (neuron0x361a5e0()*0.0106534);
}

double NNfunction_ng_chiPlus1::synapse0x362a150() {
   return (neuron0x361afb0()*0.00523194);
}

double NNfunction_ng_chiPlus1::synapse0x362aae0() {
   return (neuron0x3613b00()*0.458564);
}

double NNfunction_ng_chiPlus1::synapse0x362ab20() {
   return (neuron0x36144d0()*1.87287);
}

double NNfunction_ng_chiPlus1::synapse0x361b960() {
   return (neuron0x361dd40()*1.24087);
}

double NNfunction_ng_chiPlus1::synapse0x361b9a0() {
   return (neuron0x361e710()*0.651003);
}

double NNfunction_ng_chiPlus1::synapse0x361c330() {
   return (neuron0x361f0e0()*-0.0306632);
}

double NNfunction_ng_chiPlus1::synapse0x361c370() {
   return (neuron0x361fab0()*-0.0592657);
}

double NNfunction_ng_chiPlus1::synapse0x361cd00() {
   return (neuron0x3620480()*-0.0770954);
}

double NNfunction_ng_chiPlus1::synapse0x361cd40() {
   return (neuron0x3620e50()*-0.0172285);
}

double NNfunction_ng_chiPlus1::synapse0x362f220() {
   return (neuron0x3621820()*0.00306005);
}

double NNfunction_ng_chiPlus1::synapse0x362f260() {
   return (neuron0x36221f0()*0.0283215);
}

double NNfunction_ng_chiPlus1::synapse0x362fbf0() {
   return (neuron0x3618280()*-3.31724);
}

double NNfunction_ng_chiPlus1::synapse0x362fc30() {
   return (neuron0x3624dd0()*0.0412698);
}

double NNfunction_ng_chiPlus1::synapse0x36305c0() {
   return (neuron0x36257a0()*0.261707);
}

double NNfunction_ng_chiPlus1::synapse0x3630600() {
   return (neuron0x3626170()*-0.341733);
}

double NNfunction_ng_chiPlus1::synapse0x3630f90() {
   return (neuron0x3626b40()*-0.106218);
}

double NNfunction_ng_chiPlus1::synapse0x3630fd0() {
   return (neuron0x3627510()*-0.175541);
}

double NNfunction_ng_chiPlus1::synapse0x360be00() {
   return (neuron0x3627ee0()*-0.0641204);
}

double NNfunction_ng_chiPlus1::synapse0x360be40() {
   return (neuron0x36288b0()*-0.0158426);
}

double NNfunction_ng_chiPlus1::synapse0x3620730() {
   return (neuron0x3629280()*-0.0815598);
}

double NNfunction_ng_chiPlus1::synapse0x3620770() {
   return (neuron0x3629e60()*0.497418);
}

double NNfunction_ng_chiPlus1::synapse0x36316b0() {
   return (neuron0x362a830()*0.0311348);
}

double NNfunction_ng_chiPlus1::synapse0x36316f0() {
   return (neuron0x361b6b0()*-1.86573);
}

double NNfunction_ng_chiPlus1::synapse0x3631730() {
   return (neuron0x361c080()*-0.240662);
}

double NNfunction_ng_chiPlus1::synapse0x3631770() {
   return (neuron0x361ca50()*-0.357794);
}

double NNfunction_ng_chiPlus1::synapse0x3638620() {
   return (neuron0x362f090()*-0.0514886);
}

double NNfunction_ng_chiPlus1::synapse0x3638660() {
   return (neuron0x362f940()*0.0952456);
}

double NNfunction_ng_chiPlus1::synapse0x36386a0() {
   return (neuron0x3630310()*-0.0630155);
}

double NNfunction_ng_chiPlus1::synapse0x36386e0() {
   return (neuron0x3630ce0()*0.124374);
}

double NNfunction_ng_chiPlus1::synapse0x3638a60() {
   return (neuron0x360bb50()*0.897882);
}

double NNfunction_ng_chiPlus1::synapse0x3638aa0() {
   return (neuron0x360c4a0()*-1.54547);
}

double NNfunction_ng_chiPlus1::synapse0x3638ae0() {
   return (neuron0x360cf80()*0.638651);
}

double NNfunction_ng_chiPlus1::synapse0x3638b20() {
   return (neuron0x360ca20()*-0.3351);
}

double NNfunction_ng_chiPlus1::synapse0x3638b60() {
   return (neuron0x360dd60()*-0.625397);
}

double NNfunction_ng_chiPlus1::synapse0x3638ba0() {
   return (neuron0x360f840()*-0.437348);
}

double NNfunction_ng_chiPlus1::synapse0x3638be0() {
   return (neuron0x3610610()*-0.318879);
}

double NNfunction_ng_chiPlus1::synapse0x3638c20() {
   return (neuron0x3610fe0()*1.59458);
}

double NNfunction_ng_chiPlus1::synapse0x3638c60() {
   return (neuron0x36119b0()*0.414475);
}

double NNfunction_ng_chiPlus1::synapse0x3638ca0() {
   return (neuron0x3612490()*-0.233204);
}

double NNfunction_ng_chiPlus1::synapse0x3638ce0() {
   return (neuron0x3612e60()*-0.339846);
}

double NNfunction_ng_chiPlus1::synapse0x3638d20() {
   return (neuron0x360ff40()*-0.301119);
}

double NNfunction_ng_chiPlus1::synapse0x3638d60() {
   return (neuron0x3614a10()*0.990436);
}

double NNfunction_ng_chiPlus1::synapse0x3638da0() {
   return (neuron0x36153e0()*0.551292);
}

double NNfunction_ng_chiPlus1::synapse0x3638de0() {
   return (neuron0x3615db0()*-0.422074);
}

double NNfunction_ng_chiPlus1::synapse0x3638e20() {
   return (neuron0x3616780()*1.00383);
}

double NNfunction_ng_chiPlus1::synapse0x36388b0() {
   return (neuron0x3618590()*2.45605);
}

double NNfunction_ng_chiPlus1::synapse0x36388f0() {
   return (neuron0x3618870()*2.19437);
}

double NNfunction_ng_chiPlus1::synapse0x3638f70() {
   return (neuron0x3619240()*-1.06124);
}

double NNfunction_ng_chiPlus1::synapse0x3638fb0() {
   return (neuron0x3619c10()*-1.81353);
}

double NNfunction_ng_chiPlus1::synapse0x3638ff0() {
   return (neuron0x361a5e0()*1.59288);
}

double NNfunction_ng_chiPlus1::synapse0x3639030() {
   return (neuron0x361afb0()*-1.81601);
}

double NNfunction_ng_chiPlus1::synapse0x3639070() {
   return (neuron0x3613b00()*0.275799);
}

double NNfunction_ng_chiPlus1::synapse0x36390b0() {
   return (neuron0x36144d0()*-0.788765);
}

double NNfunction_ng_chiPlus1::synapse0x36390f0() {
   return (neuron0x361dd40()*-0.62982);
}

double NNfunction_ng_chiPlus1::synapse0x3639130() {
   return (neuron0x361e710()*-2.08866);
}

double NNfunction_ng_chiPlus1::synapse0x3639170() {
   return (neuron0x361f0e0()*-0.193498);
}

double NNfunction_ng_chiPlus1::synapse0x36391b0() {
   return (neuron0x361fab0()*-1.01047);
}

double NNfunction_ng_chiPlus1::synapse0x36391f0() {
   return (neuron0x3620480()*0.389952);
}

double NNfunction_ng_chiPlus1::synapse0x3639230() {
   return (neuron0x3620e50()*-0.334384);
}

double NNfunction_ng_chiPlus1::synapse0x3639270() {
   return (neuron0x3621820()*-0.252179);
}

double NNfunction_ng_chiPlus1::synapse0x36392b0() {
   return (neuron0x36221f0()*0.344532);
}

double NNfunction_ng_chiPlus1::synapse0x3638e60() {
   return (neuron0x3618280()*-0.69963);
}

double NNfunction_ng_chiPlus1::synapse0x3638ea0() {
   return (neuron0x3624dd0()*-1.19322);
}

double NNfunction_ng_chiPlus1::synapse0x3638ee0() {
   return (neuron0x36257a0()*2.93201);
}

double NNfunction_ng_chiPlus1::synapse0x3638f20() {
   return (neuron0x3626170()*0.669414);
}

double NNfunction_ng_chiPlus1::synapse0x3639500() {
   return (neuron0x3626b40()*0.549249);
}

double NNfunction_ng_chiPlus1::synapse0x3639540() {
   return (neuron0x3627510()*0.945833);
}

double NNfunction_ng_chiPlus1::synapse0x3639580() {
   return (neuron0x3627ee0()*-0.435937);
}

double NNfunction_ng_chiPlus1::synapse0x36395c0() {
   return (neuron0x36288b0()*-0.476299);
}

double NNfunction_ng_chiPlus1::synapse0x3639600() {
   return (neuron0x3629280()*-0.602011);
}

double NNfunction_ng_chiPlus1::synapse0x3639640() {
   return (neuron0x3629e60()*0.230981);
}

double NNfunction_ng_chiPlus1::synapse0x3639680() {
   return (neuron0x362a830()*0.849169);
}

double NNfunction_ng_chiPlus1::synapse0x36396c0() {
   return (neuron0x361b6b0()*1.42559);
}

double NNfunction_ng_chiPlus1::synapse0x3639700() {
   return (neuron0x361c080()*-0.260532);
}

double NNfunction_ng_chiPlus1::synapse0x3639740() {
   return (neuron0x361ca50()*0.912607);
}

double NNfunction_ng_chiPlus1::synapse0x3639780() {
   return (neuron0x362f090()*-0.899733);
}

double NNfunction_ng_chiPlus1::synapse0x36397c0() {
   return (neuron0x362f940()*0.0539367);
}

double NNfunction_ng_chiPlus1::synapse0x3639800() {
   return (neuron0x3630310()*-0.738671);
}

double NNfunction_ng_chiPlus1::synapse0x3639840() {
   return (neuron0x3630ce0()*-0.522607);
}

double NNfunction_ng_chiPlus1::synapse0x3639bc0() {
   return (neuron0x360bb50()*0.0617413);
}

double NNfunction_ng_chiPlus1::synapse0x3639c00() {
   return (neuron0x360c4a0()*0.129555);
}

double NNfunction_ng_chiPlus1::synapse0x3639c40() {
   return (neuron0x360cf80()*0.00256807);
}

double NNfunction_ng_chiPlus1::synapse0x3639c80() {
   return (neuron0x360ca20()*-0.00502756);
}

double NNfunction_ng_chiPlus1::synapse0x3639cc0() {
   return (neuron0x360dd60()*-0.271907);
}

double NNfunction_ng_chiPlus1::synapse0x3639d00() {
   return (neuron0x360f840()*0.0213031);
}

double NNfunction_ng_chiPlus1::synapse0x3639d40() {
   return (neuron0x3610610()*0.0365199);
}

double NNfunction_ng_chiPlus1::synapse0x3639d80() {
   return (neuron0x3610fe0()*-0.58297);
}

double NNfunction_ng_chiPlus1::synapse0x3639dc0() {
   return (neuron0x36119b0()*0.509607);
}

double NNfunction_ng_chiPlus1::synapse0x3639e00() {
   return (neuron0x3612490()*1.00326);
}

double NNfunction_ng_chiPlus1::synapse0x3639e40() {
   return (neuron0x3612e60()*-0.0123129);
}

double NNfunction_ng_chiPlus1::synapse0x3639e80() {
   return (neuron0x360ff40()*0.268329);
}

double NNfunction_ng_chiPlus1::synapse0x3639ec0() {
   return (neuron0x3614a10()*-0.0848035);
}

double NNfunction_ng_chiPlus1::synapse0x3639f00() {
   return (neuron0x36153e0()*0.000237591);
}

double NNfunction_ng_chiPlus1::synapse0x3639f40() {
   return (neuron0x3615db0()*-0.0770199);
}

double NNfunction_ng_chiPlus1::synapse0x3639f80() {
   return (neuron0x3616780()*-0.50755);
}

double NNfunction_ng_chiPlus1::synapse0x3639a10() {
   return (neuron0x3618590()*-0.121031);
}

double NNfunction_ng_chiPlus1::synapse0x3639a50() {
   return (neuron0x3618870()*0.790487);
}

double NNfunction_ng_chiPlus1::synapse0x363a0d0() {
   return (neuron0x3619240()*0.26455);
}

double NNfunction_ng_chiPlus1::synapse0x363a110() {
   return (neuron0x3619c10()*-0.534053);
}

double NNfunction_ng_chiPlus1::synapse0x363a150() {
   return (neuron0x361a5e0()*-0.173091);
}

double NNfunction_ng_chiPlus1::synapse0x363a190() {
   return (neuron0x361afb0()*0.169114);
}

double NNfunction_ng_chiPlus1::synapse0x363a1d0() {
   return (neuron0x3613b00()*0.792365);
}

double NNfunction_ng_chiPlus1::synapse0x363a210() {
   return (neuron0x36144d0()*-1.2752);
}

double NNfunction_ng_chiPlus1::synapse0x363a250() {
   return (neuron0x361dd40()*-1.20563);
}

double NNfunction_ng_chiPlus1::synapse0x363a290() {
   return (neuron0x361e710()*-0.754499);
}

double NNfunction_ng_chiPlus1::synapse0x363a2d0() {
   return (neuron0x361f0e0()*-0.117424);
}

double NNfunction_ng_chiPlus1::synapse0x363a310() {
   return (neuron0x361fab0()*-0.0979535);
}

double NNfunction_ng_chiPlus1::synapse0x363a350() {
   return (neuron0x3620480()*-0.268674);
}

double NNfunction_ng_chiPlus1::synapse0x363a390() {
   return (neuron0x3620e50()*0.0291962);
}

double NNfunction_ng_chiPlus1::synapse0x363a3d0() {
   return (neuron0x3621820()*0.0875923);
}

double NNfunction_ng_chiPlus1::synapse0x363a410() {
   return (neuron0x36221f0()*0.0124185);
}

double NNfunction_ng_chiPlus1::synapse0x3639fc0() {
   return (neuron0x3618280()*-0.547099);
}

double NNfunction_ng_chiPlus1::synapse0x363a000() {
   return (neuron0x3624dd0()*0.155991);
}

double NNfunction_ng_chiPlus1::synapse0x363a040() {
   return (neuron0x36257a0()*0.860157);
}

double NNfunction_ng_chiPlus1::synapse0x363a080() {
   return (neuron0x3626170()*-1.39574);
}

double NNfunction_ng_chiPlus1::synapse0x363a660() {
   return (neuron0x3626b40()*-0.206348);
}

double NNfunction_ng_chiPlus1::synapse0x363a6a0() {
   return (neuron0x3627510()*-0.112898);
}

double NNfunction_ng_chiPlus1::synapse0x363a6e0() {
   return (neuron0x3627ee0()*-0.128416);
}

double NNfunction_ng_chiPlus1::synapse0x363a720() {
   return (neuron0x36288b0()*0.0716678);
}

double NNfunction_ng_chiPlus1::synapse0x363a760() {
   return (neuron0x3629280()*-0.181336);
}

double NNfunction_ng_chiPlus1::synapse0x363a7a0() {
   return (neuron0x3629e60()*0.819059);
}

double NNfunction_ng_chiPlus1::synapse0x363a7e0() {
   return (neuron0x362a830()*0.13537);
}

double NNfunction_ng_chiPlus1::synapse0x363a820() {
   return (neuron0x361b6b0()*0.889758);
}

double NNfunction_ng_chiPlus1::synapse0x363a860() {
   return (neuron0x361c080()*-0.488618);
}

double NNfunction_ng_chiPlus1::synapse0x363a8a0() {
   return (neuron0x361ca50()*-0.424167);
}

double NNfunction_ng_chiPlus1::synapse0x363a8e0() {
   return (neuron0x362f090()*0.0631915);
}

double NNfunction_ng_chiPlus1::synapse0x363a920() {
   return (neuron0x362f940()*0.143207);
}

double NNfunction_ng_chiPlus1::synapse0x363a960() {
   return (neuron0x3630310()*-0.0387366);
}

double NNfunction_ng_chiPlus1::synapse0x363a9a0() {
   return (neuron0x3630ce0()*0.115882);
}

double NNfunction_ng_chiPlus1::synapse0x363ad20() {
   return (neuron0x360bb50()*-0.87214);
}

double NNfunction_ng_chiPlus1::synapse0x363ad60() {
   return (neuron0x360c4a0()*2.35435);
}

double NNfunction_ng_chiPlus1::synapse0x363ada0() {
   return (neuron0x360cf80()*-0.240667);
}

double NNfunction_ng_chiPlus1::synapse0x363ade0() {
   return (neuron0x360ca20()*0.0117285);
}

double NNfunction_ng_chiPlus1::synapse0x363ae20() {
   return (neuron0x360dd60()*1.48368);
}

double NNfunction_ng_chiPlus1::synapse0x363ae60() {
   return (neuron0x360f840()*0.263972);
}

double NNfunction_ng_chiPlus1::synapse0x363aea0() {
   return (neuron0x3610610()*-0.0511407);
}

double NNfunction_ng_chiPlus1::synapse0x363aee0() {
   return (neuron0x3610fe0()*-0.628436);
}

double NNfunction_ng_chiPlus1::synapse0x363af20() {
   return (neuron0x36119b0()*-0.930971);
}

double NNfunction_ng_chiPlus1::synapse0x363af60() {
   return (neuron0x3612490()*0.107233);
}

double NNfunction_ng_chiPlus1::synapse0x363afa0() {
   return (neuron0x3612e60()*0.0131902);
}

double NNfunction_ng_chiPlus1::synapse0x363afe0() {
   return (neuron0x360ff40()*1.05748);
}

double NNfunction_ng_chiPlus1::synapse0x363b020() {
   return (neuron0x3614a10()*1.56526);
}

double NNfunction_ng_chiPlus1::synapse0x363b060() {
   return (neuron0x36153e0()*0.302108);
}

double NNfunction_ng_chiPlus1::synapse0x363b0a0() {
   return (neuron0x3615db0()*0.0555451);
}

double NNfunction_ng_chiPlus1::synapse0x363b0e0() {
   return (neuron0x3616780()*0.767156);
}

double NNfunction_ng_chiPlus1::synapse0x363ab70() {
   return (neuron0x3618590()*0.330001);
}

double NNfunction_ng_chiPlus1::synapse0x363abb0() {
   return (neuron0x3618870()*-1.88721);
}

double NNfunction_ng_chiPlus1::synapse0x363b230() {
   return (neuron0x3619240()*-1.77969);
}

double NNfunction_ng_chiPlus1::synapse0x363b270() {
   return (neuron0x3619c10()*-0.628531);
}

double NNfunction_ng_chiPlus1::synapse0x363b2b0() {
   return (neuron0x361a5e0()*-0.218835);
}

double NNfunction_ng_chiPlus1::synapse0x363b2f0() {
   return (neuron0x361afb0()*0.017562);
}

double NNfunction_ng_chiPlus1::synapse0x363b330() {
   return (neuron0x3613b00()*-1.1223);
}

double NNfunction_ng_chiPlus1::synapse0x363b370() {
   return (neuron0x36144d0()*0.670389);
}

double NNfunction_ng_chiPlus1::synapse0x363b3b0() {
   return (neuron0x361dd40()*0.295556);
}

double NNfunction_ng_chiPlus1::synapse0x363b3f0() {
   return (neuron0x361e710()*0.545867);
}

double NNfunction_ng_chiPlus1::synapse0x363b430() {
   return (neuron0x361f0e0()*0.136864);
}

double NNfunction_ng_chiPlus1::synapse0x363b470() {
   return (neuron0x361fab0()*0.010133);
}

double NNfunction_ng_chiPlus1::synapse0x363b4b0() {
   return (neuron0x3620480()*0.871682);
}

double NNfunction_ng_chiPlus1::synapse0x363b4f0() {
   return (neuron0x3620e50()*0.0828182);
}

double NNfunction_ng_chiPlus1::synapse0x363b530() {
   return (neuron0x3621820()*-0.055432);
}

double NNfunction_ng_chiPlus1::synapse0x363b570() {
   return (neuron0x36221f0()*-0.0994064);
}

double NNfunction_ng_chiPlus1::synapse0x363b120() {
   return (neuron0x3618280()*-0.660834);
}

double NNfunction_ng_chiPlus1::synapse0x363b160() {
   return (neuron0x3624dd0()*3.06118);
}

double NNfunction_ng_chiPlus1::synapse0x363b1a0() {
   return (neuron0x36257a0()*-1.37077);
}

double NNfunction_ng_chiPlus1::synapse0x363b1e0() {
   return (neuron0x3626170()*-0.628424);
}

double NNfunction_ng_chiPlus1::synapse0x363b7c0() {
   return (neuron0x3626b40()*-1.66029);
}

double NNfunction_ng_chiPlus1::synapse0x363b800() {
   return (neuron0x3627510()*-0.0045413);
}

double NNfunction_ng_chiPlus1::synapse0x363b840() {
   return (neuron0x3627ee0()*0.499434);
}

double NNfunction_ng_chiPlus1::synapse0x363b880() {
   return (neuron0x36288b0()*0.367765);
}

double NNfunction_ng_chiPlus1::synapse0x363b8c0() {
   return (neuron0x3629280()*0.450386);
}

double NNfunction_ng_chiPlus1::synapse0x363b900() {
   return (neuron0x3629e60()*-1.03693);
}

double NNfunction_ng_chiPlus1::synapse0x363b940() {
   return (neuron0x362a830()*-0.172489);
}

double NNfunction_ng_chiPlus1::synapse0x363b980() {
   return (neuron0x361b6b0()*0.645184);
}

double NNfunction_ng_chiPlus1::synapse0x363b9c0() {
   return (neuron0x361c080()*-1.14506);
}

double NNfunction_ng_chiPlus1::synapse0x363ba00() {
   return (neuron0x361ca50()*-0.334427);
}

double NNfunction_ng_chiPlus1::synapse0x363ba40() {
   return (neuron0x362f090()*0.259024);
}

double NNfunction_ng_chiPlus1::synapse0x363ba80() {
   return (neuron0x362f940()*1.51265);
}

double NNfunction_ng_chiPlus1::synapse0x363bac0() {
   return (neuron0x3630310()*0.292759);
}

double NNfunction_ng_chiPlus1::synapse0x363bb00() {
   return (neuron0x3630ce0()*2.18273);
}

double NNfunction_ng_chiPlus1::synapse0x363bd60() {
   return (neuron0x3637ee0()*-1.84999);
}

double NNfunction_ng_chiPlus1::synapse0x363bda0() {
   return (neuron0x3638280()*-8.01283);
}

double NNfunction_ng_chiPlus1::synapse0x363bde0() {
   return (neuron0x3638720()*7.52748);
}

double NNfunction_ng_chiPlus1::synapse0x363be20() {
   return (neuron0x3639880()*-7.21658);
}

double NNfunction_ng_chiPlus1::synapse0x363be60() {
   return (neuron0x363a9e0()*-3.47376);
}

