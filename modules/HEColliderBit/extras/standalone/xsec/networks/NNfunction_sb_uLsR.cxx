#include "NNfunction_sb_uLsR.h"
#include <cmath>

double NNfunction_sb_uLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5903)/15.3312;
   input1 = (in1 - -2.21336)/1141.92;
   input2 = (in2 - 665.49)/628.272;
   input3 = (in3 - -55.2718)/828.893;
   input4 = (in4 - 1053.24)/947.049;
   input5 = (in5 - 881.202)/932.75;
   input6 = (in6 - 902.69)/940.999;
   input7 = (in7 - 909.931)/921.709;
   input8 = (in8 - 927.848)/977.496;
   input9 = (in9 - 903.947)/957.014;
   input10 = (in10 - 991.341)/962.739;
   input11 = (in11 - 443.34)/477.743;
   input12 = (in12 - 731.973)/881.202;
   input13 = (in13 - 504.85)/523.522;
   input14 = (in14 - 708.024)/806.331;
   input15 = (in15 - 708.623)/804.416;
   input16 = (in16 - 530.553)/554.177;
   input17 = (in17 - 767.784)/907.801;
   input18 = (in18 - 448.225)/488.688;
   input19 = (in19 - 807.051)/887.871;
   input20 = (in20 - -5.0214)/485.976;
   input21 = (in21 - 4.92476)/1160.76;
   input22 = (in22 - 5.77073)/1205.24;
   input23 = (in23 - -193.843)/593.481;
   switch(index) {
     case 0:
         return neuron0x1f6c4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLsR::Value(int index, double* input) {
   input0 = (input[0] - 23.5903)/15.3312;
   input1 = (input[1] - -2.21336)/1141.92;
   input2 = (input[2] - 665.49)/628.272;
   input3 = (input[3] - -55.2718)/828.893;
   input4 = (input[4] - 1053.24)/947.049;
   input5 = (input[5] - 881.202)/932.75;
   input6 = (input[6] - 902.69)/940.999;
   input7 = (input[7] - 909.931)/921.709;
   input8 = (input[8] - 927.848)/977.496;
   input9 = (input[9] - 903.947)/957.014;
   input10 = (input[10] - 991.341)/962.739;
   input11 = (input[11] - 443.34)/477.743;
   input12 = (input[12] - 731.973)/881.202;
   input13 = (input[13] - 504.85)/523.522;
   input14 = (input[14] - 708.024)/806.331;
   input15 = (input[15] - 708.623)/804.416;
   input16 = (input[16] - 530.553)/554.177;
   input17 = (input[17] - 767.784)/907.801;
   input18 = (input[18] - 448.225)/488.688;
   input19 = (input[19] - 807.051)/887.871;
   input20 = (input[20] - -5.0214)/485.976;
   input21 = (input[21] - 4.92476)/1160.76;
   input22 = (input[22] - 5.77073)/1205.24;
   input23 = (input[23] - -193.843)/593.481;
   switch(index) {
     case 0:
         return neuron0x1f6c4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLsR::neuron0x1f38570() {
   return input0;
}

double NNfunction_sb_uLsR::neuron0x1f388b0() {
   return input1;
}

double NNfunction_sb_uLsR::neuron0x1f38bf0() {
   return input2;
}

double NNfunction_sb_uLsR::neuron0x1f38f30() {
   return input3;
}

double NNfunction_sb_uLsR::neuron0x1f39270() {
   return input4;
}

double NNfunction_sb_uLsR::neuron0x1f395b0() {
   return input5;
}

double NNfunction_sb_uLsR::neuron0x1f398f0() {
   return input6;
}

double NNfunction_sb_uLsR::neuron0x1f39c30() {
   return input7;
}

double NNfunction_sb_uLsR::neuron0x1f39f70() {
   return input8;
}

double NNfunction_sb_uLsR::neuron0x1f3a2b0() {
   return input9;
}

double NNfunction_sb_uLsR::neuron0x1f3a5f0() {
   return input10;
}

double NNfunction_sb_uLsR::neuron0x1f3a930() {
   return input11;
}

double NNfunction_sb_uLsR::neuron0x1f3ac70() {
   return input12;
}

double NNfunction_sb_uLsR::neuron0x1f3afb0() {
   return input13;
}

double NNfunction_sb_uLsR::neuron0x1f3b2f0() {
   return input14;
}

double NNfunction_sb_uLsR::neuron0x1f3b630() {
   return input15;
}

double NNfunction_sb_uLsR::neuron0x1f3b970() {
   return input16;
}

double NNfunction_sb_uLsR::neuron0x1f3bed0() {
   return input17;
}

double NNfunction_sb_uLsR::neuron0x1f3c0f0() {
   return input18;
}

double NNfunction_sb_uLsR::neuron0x1f3c430() {
   return input19;
}

double NNfunction_sb_uLsR::neuron0x1f3c770() {
   return input20;
}

double NNfunction_sb_uLsR::neuron0x1f3cab0() {
   return input21;
}

double NNfunction_sb_uLsR::neuron0x1f3cdf0() {
   return input22;
}

double NNfunction_sb_uLsR::neuron0x1f3d130() {
   return input23;
}

double NNfunction_sb_uLsR::input0x1f3d5d0() {
   double input = 0.521101;
   input += synapse0x1cf83e0();
   input += synapse0x1f38430();
   input += synapse0x1f38470();
   input += synapse0x1f3d880();
   input += synapse0x1f3d8c0();
   input += synapse0x1f3d900();
   input += synapse0x1f3d940();
   input += synapse0x1f3d980();
   input += synapse0x1f3d9c0();
   input += synapse0x1f3da00();
   input += synapse0x1f3da40();
   input += synapse0x1f3da80();
   input += synapse0x1f3dac0();
   input += synapse0x1f3db00();
   input += synapse0x1f3db40();
   input += synapse0x1f3db80();
   input += synapse0x1f383a0();
   input += synapse0x1f383e0();
   input += synapse0x1ce9c80();
   input += synapse0x1ce9cc0();
   input += synapse0x1f3dde0();
   input += synapse0x1f3de20();
   input += synapse0x1f3de60();
   input += synapse0x1f3dea0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f3d5d0() {
   double input = input0x1f3d5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f3dee0() {
   double input = 0.00407224;
   input += synapse0x1f3e220();
   input += synapse0x1f3e260();
   input += synapse0x1f3e2a0();
   input += synapse0x1f3e2e0();
   input += synapse0x1f3e320();
   input += synapse0x1f3e360();
   input += synapse0x1f3e3a0();
   input += synapse0x1f3e3e0();
   input += synapse0x1f3e420();
   input += synapse0x1f3dcd0();
   input += synapse0x1f3dd10();
   input += synapse0x1f3dd50();
   input += synapse0x1f3dd90();
   input += synapse0x1f3e670();
   input += synapse0x1f3e6b0();
   input += synapse0x1f3e6f0();
   input += synapse0x1f3e070();
   input += synapse0x1f3e0b0();
   input += synapse0x1f3e840();
   input += synapse0x1f3e880();
   input += synapse0x1f3e8c0();
   input += synapse0x1f3e900();
   input += synapse0x1f3e940();
   input += synapse0x1f3e980();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f3dee0() {
   double input = input0x1f3dee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f3e9c0() {
   double input = -0.587232;
   input += synapse0x1f3ed00();
   input += synapse0x1f3ed40();
   input += synapse0x1f3ed80();
   input += synapse0x1f3edc0();
   input += synapse0x1f3ee00();
   input += synapse0x1f3ee40();
   input += synapse0x1f3ee80();
   input += synapse0x1f3eec0();
   input += synapse0x1f3ef00();
   input += synapse0x1f3ef40();
   input += synapse0x1f3ef80();
   input += synapse0x1f3efc0();
   input += synapse0x1f3f000();
   input += synapse0x1f3f040();
   input += synapse0x1f3f080();
   input += synapse0x1f3f0c0();
   input += synapse0x1f3eb50();
   input += synapse0x1f3eb90();
   input += synapse0x1cf7ad0();
   input += synapse0x1cf7b10();
   input += synapse0x1f27600();
   input += synapse0x1f27640();
   input += synapse0x1f27680();
   input += synapse0x1f384b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f3e9c0() {
   double input = input0x1f3e9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1cf8250() {
   double input = -0.808658;
   input += synapse0x1f3e610();
   input += synapse0x1f384f0();
   input += synapse0x1f38530();
   input += synapse0x1f3f210();
   input += synapse0x1f3f250();
   input += synapse0x1f3f290();
   input += synapse0x1f3f2d0();
   input += synapse0x1f3f310();
   input += synapse0x1f3f350();
   input += synapse0x1f3f390();
   input += synapse0x1f3f3d0();
   input += synapse0x1f3f410();
   input += synapse0x1f3f450();
   input += synapse0x1f3f490();
   input += synapse0x1f3f4d0();
   input += synapse0x1f3f510();
   input += synapse0x1f3e460();
   input += synapse0x1f3e4a0();
   input += synapse0x1f3f660();
   input += synapse0x1f3f6a0();
   input += synapse0x1f3f6e0();
   input += synapse0x1f3f720();
   input += synapse0x1f3f760();
   input += synapse0x1f3f7a0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1cf8250() {
   double input = input0x1cf8250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f3f7e0() {
   double input = -0.272124;
   input += synapse0x1f3fb20();
   input += synapse0x1f3fb60();
   input += synapse0x1f3fba0();
   input += synapse0x1f3fbe0();
   input += synapse0x1f3fc20();
   input += synapse0x1f3fc60();
   input += synapse0x1f3fca0();
   input += synapse0x1f3fce0();
   input += synapse0x1f3fd20();
   input += synapse0x1f3fd60();
   input += synapse0x1f3fda0();
   input += synapse0x1f3fde0();
   input += synapse0x1f3fe20();
   input += synapse0x1f3fe60();
   input += synapse0x1f3fea0();
   input += synapse0x1f3fee0();
   input += synapse0x1f3f970();
   input += synapse0x1f3f9b0();
   input += synapse0x1f40030();
   input += synapse0x1f40070();
   input += synapse0x1f400b0();
   input += synapse0x1f400f0();
   input += synapse0x1f40130();
   input += synapse0x1f40170();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f3f7e0() {
   double input = input0x1f3f7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f401b0() {
   double input = -0.0364139;
   input += synapse0x1f404f0();
   input += synapse0x1f40530();
   input += synapse0x1f40570();
   input += synapse0x1f405b0();
   input += synapse0x1f405f0();
   input += synapse0x1f40630();
   input += synapse0x1f40670();
   input += synapse0x1f406b0();
   input += synapse0x1f406f0();
   input += synapse0x1cf7e40();
   input += synapse0x1cf7e80();
   input += synapse0x1cf7ec0();
   input += synapse0x1cf7f00();
   input += synapse0x1cf7f40();
   input += synapse0x1cf7f80();
   input += synapse0x1cf7fc0();
   input += synapse0x1f40340();
   input += synapse0x1f40380();
   input += synapse0x1cf8110();
   input += synapse0x1cf8150();
   input += synapse0x1cf8190();
   input += synapse0x1cf81d0();
   input += synapse0x1cf8210();
   input += synapse0x1f40f40();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f401b0() {
   double input = input0x1f401b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f40f80() {
   double input = -3.38436;
   input += synapse0x1f412c0();
   input += synapse0x1f41300();
   input += synapse0x1f41340();
   input += synapse0x1f41380();
   input += synapse0x1f413c0();
   input += synapse0x1f41400();
   input += synapse0x1f41440();
   input += synapse0x1f41480();
   input += synapse0x1f414c0();
   input += synapse0x1f41500();
   input += synapse0x1f41540();
   input += synapse0x1f41580();
   input += synapse0x1f415c0();
   input += synapse0x1f41600();
   input += synapse0x1f41640();
   input += synapse0x1f41680();
   input += synapse0x1f41110();
   input += synapse0x1f41150();
   input += synapse0x1f417d0();
   input += synapse0x1f41810();
   input += synapse0x1f41850();
   input += synapse0x1f41890();
   input += synapse0x1f418d0();
   input += synapse0x1f41910();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f40f80() {
   double input = input0x1f40f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f41950() {
   double input = 0.382125;
   input += synapse0x1f41c90();
   input += synapse0x1f41cd0();
   input += synapse0x1f41d10();
   input += synapse0x1f41d50();
   input += synapse0x1f41d90();
   input += synapse0x1f41dd0();
   input += synapse0x1f41e10();
   input += synapse0x1f41e50();
   input += synapse0x1f41e90();
   input += synapse0x1f41ed0();
   input += synapse0x1f41f10();
   input += synapse0x1f41f50();
   input += synapse0x1f41f90();
   input += synapse0x1f41fd0();
   input += synapse0x1f42010();
   input += synapse0x1f42050();
   input += synapse0x1f41ae0();
   input += synapse0x1f41b20();
   input += synapse0x1f421a0();
   input += synapse0x1f421e0();
   input += synapse0x1f42220();
   input += synapse0x1f42260();
   input += synapse0x1f422a0();
   input += synapse0x1f422e0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f41950() {
   double input = input0x1f41950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f42320() {
   double input = 3.09866;
   input += synapse0x1f3bdc0();
   input += synapse0x1f3be00();
   input += synapse0x1f3be40();
   input += synapse0x1f3be80();
   input += synapse0x1f42870();
   input += synapse0x1f428b0();
   input += synapse0x1f428f0();
   input += synapse0x1f42930();
   input += synapse0x1f42970();
   input += synapse0x1f429b0();
   input += synapse0x1f429f0();
   input += synapse0x1f42a30();
   input += synapse0x1f42a70();
   input += synapse0x1f42ab0();
   input += synapse0x1f42af0();
   input += synapse0x1f42b30();
   input += synapse0x1f424b0();
   input += synapse0x1f424f0();
   input += synapse0x1f42c80();
   input += synapse0x1f42cc0();
   input += synapse0x1f42d00();
   input += synapse0x1f42d40();
   input += synapse0x1f42d80();
   input += synapse0x1f42dc0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f42320() {
   double input = input0x1f42320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f42e00() {
   double input = -1.44159;
   input += synapse0x1f43140();
   input += synapse0x1f43180();
   input += synapse0x1f431c0();
   input += synapse0x1f43200();
   input += synapse0x1f43240();
   input += synapse0x1f43280();
   input += synapse0x1f432c0();
   input += synapse0x1f43300();
   input += synapse0x1f43340();
   input += synapse0x1f43380();
   input += synapse0x1f433c0();
   input += synapse0x1f43400();
   input += synapse0x1f43440();
   input += synapse0x1f43480();
   input += synapse0x1f434c0();
   input += synapse0x1f43500();
   input += synapse0x1f42f90();
   input += synapse0x1f42fd0();
   input += synapse0x1f43650();
   input += synapse0x1f43690();
   input += synapse0x1f436d0();
   input += synapse0x1f43710();
   input += synapse0x1f43750();
   input += synapse0x1f43790();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f42e00() {
   double input = input0x1f42e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f437d0() {
   double input = -0.93775;
   input += synapse0x1f43b10();
   input += synapse0x1f43b50();
   input += synapse0x1f43b90();
   input += synapse0x1f43bd0();
   input += synapse0x1f43c10();
   input += synapse0x1f43c50();
   input += synapse0x1f43c90();
   input += synapse0x1f43cd0();
   input += synapse0x1f43d10();
   input += synapse0x1f43d50();
   input += synapse0x1f43d90();
   input += synapse0x1f43dd0();
   input += synapse0x1f43e10();
   input += synapse0x1f43e50();
   input += synapse0x1f43e90();
   input += synapse0x1f43ed0();
   input += synapse0x1f43960();
   input += synapse0x1f439a0();
   input += synapse0x1f40730();
   input += synapse0x1f40770();
   input += synapse0x1f407b0();
   input += synapse0x1f407f0();
   input += synapse0x1f40830();
   input += synapse0x1f40870();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f437d0() {
   double input = input0x1f437d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f408b0() {
   double input = -0.0956128;
   input += synapse0x1f40bf0();
   input += synapse0x1f40c30();
   input += synapse0x1f40c70();
   input += synapse0x1f40cb0();
   input += synapse0x1f40cf0();
   input += synapse0x1f40d30();
   input += synapse0x1f40d70();
   input += synapse0x1f40db0();
   input += synapse0x1f40df0();
   input += synapse0x1f40e30();
   input += synapse0x1f40e70();
   input += synapse0x1f40eb0();
   input += synapse0x1f40ef0();
   input += synapse0x1f45030();
   input += synapse0x1f45070();
   input += synapse0x1f450b0();
   input += synapse0x1f40a40();
   input += synapse0x1f40a80();
   input += synapse0x1f45200();
   input += synapse0x1f45240();
   input += synapse0x1f45280();
   input += synapse0x1f452c0();
   input += synapse0x1f45300();
   input += synapse0x1f45340();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f408b0() {
   double input = input0x1f408b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f45380() {
   double input = 2.27374;
   input += synapse0x1f456c0();
   input += synapse0x1f45700();
   input += synapse0x1f45740();
   input += synapse0x1f45780();
   input += synapse0x1f457c0();
   input += synapse0x1f45800();
   input += synapse0x1f45840();
   input += synapse0x1f45880();
   input += synapse0x1f458c0();
   input += synapse0x1f45900();
   input += synapse0x1f45940();
   input += synapse0x1f45980();
   input += synapse0x1f459c0();
   input += synapse0x1f45a00();
   input += synapse0x1f45a40();
   input += synapse0x1f45a80();
   input += synapse0x1f45510();
   input += synapse0x1f45550();
   input += synapse0x1f45bd0();
   input += synapse0x1f45c10();
   input += synapse0x1f45c50();
   input += synapse0x1f45c90();
   input += synapse0x1f45cd0();
   input += synapse0x1f45d10();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f45380() {
   double input = input0x1f45380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f45d50() {
   double input = 4.03877;
   input += synapse0x1f46090();
   input += synapse0x1f460d0();
   input += synapse0x1f46110();
   input += synapse0x1f46150();
   input += synapse0x1f46190();
   input += synapse0x1f461d0();
   input += synapse0x1f46210();
   input += synapse0x1f46250();
   input += synapse0x1f46290();
   input += synapse0x1f462d0();
   input += synapse0x1f46310();
   input += synapse0x1f46350();
   input += synapse0x1f46390();
   input += synapse0x1f463d0();
   input += synapse0x1f46410();
   input += synapse0x1f46450();
   input += synapse0x1f45ee0();
   input += synapse0x1f45f20();
   input += synapse0x1f465a0();
   input += synapse0x1f465e0();
   input += synapse0x1f46620();
   input += synapse0x1f46660();
   input += synapse0x1f466a0();
   input += synapse0x1f466e0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f45d50() {
   double input = input0x1f45d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f46720() {
   double input = 0.237822;
   input += synapse0x1f46a60();
   input += synapse0x1f46aa0();
   input += synapse0x1f46ae0();
   input += synapse0x1f46b20();
   input += synapse0x1f46b60();
   input += synapse0x1f46ba0();
   input += synapse0x1f46be0();
   input += synapse0x1f46c20();
   input += synapse0x1f46c60();
   input += synapse0x1f46ca0();
   input += synapse0x1f46ce0();
   input += synapse0x1f46d20();
   input += synapse0x1f46d60();
   input += synapse0x1f46da0();
   input += synapse0x1f46de0();
   input += synapse0x1f46e20();
   input += synapse0x1f468b0();
   input += synapse0x1f468f0();
   input += synapse0x1f46f70();
   input += synapse0x1f46fb0();
   input += synapse0x1f46ff0();
   input += synapse0x1f47030();
   input += synapse0x1f47070();
   input += synapse0x1f470b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f46720() {
   double input = input0x1f46720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f470f0() {
   double input = 0.287589;
   input += synapse0x1f47430();
   input += synapse0x1f38790();
   input += synapse0x1f387d0();
   input += synapse0x1f38ad0();
   input += synapse0x1f38b10();
   input += synapse0x1f38e10();
   input += synapse0x1f38e50();
   input += synapse0x1f39150();
   input += synapse0x1f39190();
   input += synapse0x1f39490();
   input += synapse0x1f394d0();
   input += synapse0x1f397d0();
   input += synapse0x1f39810();
   input += synapse0x1f39b10();
   input += synapse0x1f39b50();
   input += synapse0x1f39e50();
   input += synapse0x1f39e90();
   input += synapse0x1f3a190();
   input += synapse0x1f3a1d0();
   input += synapse0x1f3a4d0();
   input += synapse0x1f3a510();
   input += synapse0x1f3a810();
   input += synapse0x1f3a850();
   input += synapse0x1f3ab50();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f470f0() {
   double input = input0x1f470f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f48f00() {
   double input = 0.152966;
   input += synapse0x1f3ab90();
   input += synapse0x1f3b850();
   input += synapse0x1f3b890();
   input += synapse0x1f47280();
   input += synapse0x1f472c0();
   input += synapse0x1f3bb90();
   input += synapse0x1f3bbd0();
   input += synapse0x1ce9b60();
   input += synapse0x1ce9ba0();
   input += synapse0x1f3c310();
   input += synapse0x1f3c350();
   input += synapse0x1f3c650();
   input += synapse0x1f3c690();
   input += synapse0x1f3c990();
   input += synapse0x1f3c9d0();
   input += synapse0x1f3ccd0();
   input += synapse0x1f3cd10();
   input += synapse0x1f3d010();
   input += synapse0x1f3d050();
   input += synapse0x1f3d350();
   input += synapse0x1f3d390();
   input += synapse0x1f3ae90();
   input += synapse0x1f3aed0();
   input += synapse0x1f491a0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f48f00() {
   double input = input0x1f48f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f491e0() {
   double input = -1.44597;
   input += synapse0x1f49520();
   input += synapse0x1f49560();
   input += synapse0x1f495a0();
   input += synapse0x1f495e0();
   input += synapse0x1f49620();
   input += synapse0x1f49660();
   input += synapse0x1f496a0();
   input += synapse0x1f496e0();
   input += synapse0x1f49720();
   input += synapse0x1f49760();
   input += synapse0x1f497a0();
   input += synapse0x1f497e0();
   input += synapse0x1f49820();
   input += synapse0x1f49860();
   input += synapse0x1f498a0();
   input += synapse0x1f498e0();
   input += synapse0x1f49370();
   input += synapse0x1f493b0();
   input += synapse0x1f49a30();
   input += synapse0x1f49a70();
   input += synapse0x1f49ab0();
   input += synapse0x1f49af0();
   input += synapse0x1f49b30();
   input += synapse0x1f49b70();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f491e0() {
   double input = input0x1f491e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f49bb0() {
   double input = -0.90252;
   input += synapse0x1f49ef0();
   input += synapse0x1f49f30();
   input += synapse0x1f49f70();
   input += synapse0x1f49fb0();
   input += synapse0x1f49ff0();
   input += synapse0x1f4a030();
   input += synapse0x1f4a070();
   input += synapse0x1f4a0b0();
   input += synapse0x1f4a0f0();
   input += synapse0x1f4a130();
   input += synapse0x1f4a170();
   input += synapse0x1f4a1b0();
   input += synapse0x1f4a1f0();
   input += synapse0x1f4a230();
   input += synapse0x1f4a270();
   input += synapse0x1f4a2b0();
   input += synapse0x1f49d40();
   input += synapse0x1f49d80();
   input += synapse0x1f4a400();
   input += synapse0x1f4a440();
   input += synapse0x1f4a480();
   input += synapse0x1f4a4c0();
   input += synapse0x1f4a500();
   input += synapse0x1f4a540();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f49bb0() {
   double input = input0x1f49bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f4a580() {
   double input = -0.893062;
   input += synapse0x1f4a8c0();
   input += synapse0x1f4a900();
   input += synapse0x1f4a940();
   input += synapse0x1f4a980();
   input += synapse0x1f4a9c0();
   input += synapse0x1f4aa00();
   input += synapse0x1f4aa40();
   input += synapse0x1f4aa80();
   input += synapse0x1f4aac0();
   input += synapse0x1f4ab00();
   input += synapse0x1f4ab40();
   input += synapse0x1f4ab80();
   input += synapse0x1f4abc0();
   input += synapse0x1f4ac00();
   input += synapse0x1f4ac40();
   input += synapse0x1f4ac80();
   input += synapse0x1f4a710();
   input += synapse0x1f4a750();
   input += synapse0x1f4add0();
   input += synapse0x1f4ae10();
   input += synapse0x1f4ae50();
   input += synapse0x1f4ae90();
   input += synapse0x1f4aed0();
   input += synapse0x1f4af10();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f4a580() {
   double input = input0x1f4a580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f4af50() {
   double input = 0.690505;
   input += synapse0x1f4b290();
   input += synapse0x1f4b2d0();
   input += synapse0x1f4b310();
   input += synapse0x1f4b350();
   input += synapse0x1f4b390();
   input += synapse0x1f4b3d0();
   input += synapse0x1f4b410();
   input += synapse0x1f4b450();
   input += synapse0x1f4b490();
   input += synapse0x1f4b4d0();
   input += synapse0x1f4b510();
   input += synapse0x1f4b550();
   input += synapse0x1f4b590();
   input += synapse0x1f4b5d0();
   input += synapse0x1f4b610();
   input += synapse0x1f4b650();
   input += synapse0x1f4b0e0();
   input += synapse0x1f4b120();
   input += synapse0x1f4b7a0();
   input += synapse0x1f4b7e0();
   input += synapse0x1f4b820();
   input += synapse0x1f4b860();
   input += synapse0x1f4b8a0();
   input += synapse0x1f4b8e0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f4af50() {
   double input = input0x1f4af50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f4b920() {
   double input = -0.264529;
   input += synapse0x1f4bc60();
   input += synapse0x1f4bca0();
   input += synapse0x1f4bce0();
   input += synapse0x1f4bd20();
   input += synapse0x1f4bd60();
   input += synapse0x1f4bda0();
   input += synapse0x1f4bde0();
   input += synapse0x1f4be20();
   input += synapse0x1f4be60();
   input += synapse0x1f44020();
   input += synapse0x1f44060();
   input += synapse0x1f440a0();
   input += synapse0x1f440e0();
   input += synapse0x1f44120();
   input += synapse0x1f44160();
   input += synapse0x1f441a0();
   input += synapse0x1f4bab0();
   input += synapse0x1f4baf0();
   input += synapse0x1f442f0();
   input += synapse0x1f44330();
   input += synapse0x1f44370();
   input += synapse0x1f443b0();
   input += synapse0x1f443f0();
   input += synapse0x1f44430();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f4b920() {
   double input = input0x1f4b920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f44470() {
   double input = 0.335094;
   input += synapse0x1f447b0();
   input += synapse0x1f447f0();
   input += synapse0x1f44830();
   input += synapse0x1f44870();
   input += synapse0x1f448b0();
   input += synapse0x1f448f0();
   input += synapse0x1f44930();
   input += synapse0x1f44970();
   input += synapse0x1f449b0();
   input += synapse0x1f449f0();
   input += synapse0x1f44a30();
   input += synapse0x1f44a70();
   input += synapse0x1f44ab0();
   input += synapse0x1f44af0();
   input += synapse0x1f44b30();
   input += synapse0x1f44b70();
   input += synapse0x1f44600();
   input += synapse0x1f44640();
   input += synapse0x1f44cc0();
   input += synapse0x1f44d00();
   input += synapse0x1f44d40();
   input += synapse0x1f44d80();
   input += synapse0x1f44dc0();
   input += synapse0x1f44e00();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f44470() {
   double input = input0x1f44470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f44e40() {
   double input = 0.89597;
   input += synapse0x1f44fd0();
   input += synapse0x1f4e060();
   input += synapse0x1f4e0a0();
   input += synapse0x1f4e0e0();
   input += synapse0x1f4e120();
   input += synapse0x1f4e160();
   input += synapse0x1f4e1a0();
   input += synapse0x1f4e1e0();
   input += synapse0x1f4e220();
   input += synapse0x1f4e260();
   input += synapse0x1f4e2a0();
   input += synapse0x1f4e2e0();
   input += synapse0x1f4e320();
   input += synapse0x1f4e360();
   input += synapse0x1f4e3a0();
   input += synapse0x1f4e3e0();
   input += synapse0x1f4deb0();
   input += synapse0x1f4def0();
   input += synapse0x1f4e530();
   input += synapse0x1f4e570();
   input += synapse0x1f4e5b0();
   input += synapse0x1f4e5f0();
   input += synapse0x1f4e630();
   input += synapse0x1f4e670();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f44e40() {
   double input = input0x1f44e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f4e6b0() {
   double input = -2.38045;
   input += synapse0x1f4e9f0();
   input += synapse0x1f4ea30();
   input += synapse0x1f4ea70();
   input += synapse0x1f4eab0();
   input += synapse0x1f4eaf0();
   input += synapse0x1f4eb30();
   input += synapse0x1f4eb70();
   input += synapse0x1f4ebb0();
   input += synapse0x1f4ebf0();
   input += synapse0x1f4ec30();
   input += synapse0x1f4ec70();
   input += synapse0x1f4ecb0();
   input += synapse0x1f4ecf0();
   input += synapse0x1f4ed30();
   input += synapse0x1f4ed70();
   input += synapse0x1f4edb0();
   input += synapse0x1f4e840();
   input += synapse0x1f4e880();
   input += synapse0x1f4ef00();
   input += synapse0x1f4ef40();
   input += synapse0x1f4ef80();
   input += synapse0x1f4efc0();
   input += synapse0x1f4f000();
   input += synapse0x1f4f040();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f4e6b0() {
   double input = input0x1f4e6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f4f080() {
   double input = -1.35717;
   input += synapse0x1f4f3c0();
   input += synapse0x1f4f400();
   input += synapse0x1f4f440();
   input += synapse0x1f4f480();
   input += synapse0x1f4f4c0();
   input += synapse0x1f4f500();
   input += synapse0x1f4f540();
   input += synapse0x1f4f580();
   input += synapse0x1f4f5c0();
   input += synapse0x1f4f600();
   input += synapse0x1f4f640();
   input += synapse0x1f4f680();
   input += synapse0x1f4f6c0();
   input += synapse0x1f4f700();
   input += synapse0x1f4f740();
   input += synapse0x1f4f780();
   input += synapse0x1f4f210();
   input += synapse0x1f4f250();
   input += synapse0x1f4f8d0();
   input += synapse0x1f4f910();
   input += synapse0x1f4f950();
   input += synapse0x1f4f990();
   input += synapse0x1f4f9d0();
   input += synapse0x1f4fa10();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f4f080() {
   double input = input0x1f4f080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f4fa50() {
   double input = 0.686729;
   input += synapse0x1f4fd90();
   input += synapse0x1f4fdd0();
   input += synapse0x1f4fe10();
   input += synapse0x1f4fe50();
   input += synapse0x1f4fe90();
   input += synapse0x1f4fed0();
   input += synapse0x1f4ff10();
   input += synapse0x1f4ff50();
   input += synapse0x1f4ff90();
   input += synapse0x1f4ffd0();
   input += synapse0x1f50010();
   input += synapse0x1f50050();
   input += synapse0x1f50090();
   input += synapse0x1f500d0();
   input += synapse0x1f50110();
   input += synapse0x1f50150();
   input += synapse0x1f4fbe0();
   input += synapse0x1f4fc20();
   input += synapse0x1f502a0();
   input += synapse0x1f502e0();
   input += synapse0x1f50320();
   input += synapse0x1f50360();
   input += synapse0x1f503a0();
   input += synapse0x1f503e0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f4fa50() {
   double input = input0x1f4fa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f50420() {
   double input = 0.844748;
   input += synapse0x1f50760();
   input += synapse0x1f507a0();
   input += synapse0x1f507e0();
   input += synapse0x1f50820();
   input += synapse0x1f50860();
   input += synapse0x1f508a0();
   input += synapse0x1f508e0();
   input += synapse0x1f50920();
   input += synapse0x1f50960();
   input += synapse0x1f509a0();
   input += synapse0x1f509e0();
   input += synapse0x1f50a20();
   input += synapse0x1f50a60();
   input += synapse0x1f50aa0();
   input += synapse0x1f50ae0();
   input += synapse0x1f50b20();
   input += synapse0x1f505b0();
   input += synapse0x1f505f0();
   input += synapse0x1f50c70();
   input += synapse0x1f50cb0();
   input += synapse0x1f50cf0();
   input += synapse0x1f50d30();
   input += synapse0x1f50d70();
   input += synapse0x1f50db0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f50420() {
   double input = input0x1f50420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f50df0() {
   double input = -1.23564;
   input += synapse0x1f51130();
   input += synapse0x1f51170();
   input += synapse0x1f511b0();
   input += synapse0x1f511f0();
   input += synapse0x1f51230();
   input += synapse0x1f51270();
   input += synapse0x1f512b0();
   input += synapse0x1f512f0();
   input += synapse0x1f51330();
   input += synapse0x1f51370();
   input += synapse0x1f513b0();
   input += synapse0x1f513f0();
   input += synapse0x1f51430();
   input += synapse0x1f51470();
   input += synapse0x1f514b0();
   input += synapse0x1f514f0();
   input += synapse0x1f50f80();
   input += synapse0x1f50fc0();
   input += synapse0x1f51640();
   input += synapse0x1f51680();
   input += synapse0x1f516c0();
   input += synapse0x1f51700();
   input += synapse0x1f51740();
   input += synapse0x1f51780();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f50df0() {
   double input = input0x1f50df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f517c0() {
   double input = -1.50633;
   input += synapse0x1f51b00();
   input += synapse0x1f51b40();
   input += synapse0x1f51b80();
   input += synapse0x1f51bc0();
   input += synapse0x1f51c00();
   input += synapse0x1f51c40();
   input += synapse0x1f51c80();
   input += synapse0x1f51cc0();
   input += synapse0x1f51d00();
   input += synapse0x1f51d40();
   input += synapse0x1f51d80();
   input += synapse0x1f51dc0();
   input += synapse0x1f51e00();
   input += synapse0x1f51e40();
   input += synapse0x1f51e80();
   input += synapse0x1f51ec0();
   input += synapse0x1f51950();
   input += synapse0x1f51990();
   input += synapse0x1f52010();
   input += synapse0x1f52050();
   input += synapse0x1f52090();
   input += synapse0x1f520d0();
   input += synapse0x1f52110();
   input += synapse0x1f52150();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f517c0() {
   double input = input0x1f517c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f52190() {
   double input = -1.08215;
   input += synapse0x1f524d0();
   input += synapse0x1f52510();
   input += synapse0x1f52550();
   input += synapse0x1f52590();
   input += synapse0x1f525d0();
   input += synapse0x1f52610();
   input += synapse0x1f52650();
   input += synapse0x1f52690();
   input += synapse0x1f526d0();
   input += synapse0x1f52710();
   input += synapse0x1f52750();
   input += synapse0x1f52790();
   input += synapse0x1f527d0();
   input += synapse0x1f52810();
   input += synapse0x1f52850();
   input += synapse0x1f52890();
   input += synapse0x1f52320();
   input += synapse0x1f52360();
   input += synapse0x1f529e0();
   input += synapse0x1f52a20();
   input += synapse0x1f52a60();
   input += synapse0x1f52aa0();
   input += synapse0x1f52ae0();
   input += synapse0x1f52b20();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f52190() {
   double input = input0x1f52190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f52b60() {
   double input = 0.688099;
   input += synapse0x1f52ea0();
   input += synapse0x1f47470();
   input += synapse0x1f474b0();
   input += synapse0x1f474f0();
   input += synapse0x1f47740();
   input += synapse0x1f47780();
   input += synapse0x1f477c0();
   input += synapse0x1f47a10();
   input += synapse0x1f47a50();
   input += synapse0x1f47ca0();
   input += synapse0x1f47ce0();
   input += synapse0x1f47d20();
   input += synapse0x1f47f70();
   input += synapse0x1f47fb0();
   input += synapse0x1f48200();
   input += synapse0x1f48240();
   input += synapse0x1f52cf0();
   input += synapse0x1f52d30();
   input += synapse0x1f48390();
   input += synapse0x1f488a0();
   input += synapse0x1f488e0();
   input += synapse0x1f48920();
   input += synapse0x1f48b70();
   input += synapse0x1f48bb0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f52b60() {
   double input = input0x1f52b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f48bf0() {
   double input = -1.53608;
   input += synapse0x1f48460();
   input += synapse0x1f484a0();
   input += synapse0x1f484e0();
   input += synapse0x1f48520();
   input += synapse0x1f48ea0();
   input += synapse0x1f551f0();
   input += synapse0x1f55230();
   input += synapse0x1f55270();
   input += synapse0x1f552b0();
   input += synapse0x1f552f0();
   input += synapse0x1f55330();
   input += synapse0x1f55370();
   input += synapse0x1f553b0();
   input += synapse0x1f553f0();
   input += synapse0x1f55430();
   input += synapse0x1f55470();
   input += synapse0x1f48d80();
   input += synapse0x1f48dc0();
   input += synapse0x1f555c0();
   input += synapse0x1f55600();
   input += synapse0x1f55640();
   input += synapse0x1f55680();
   input += synapse0x1f556c0();
   input += synapse0x1f55700();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f48bf0() {
   double input = input0x1f48bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f55740() {
   double input = 1.29204;
   input += synapse0x1f55a80();
   input += synapse0x1f55ac0();
   input += synapse0x1f55b00();
   input += synapse0x1f55b40();
   input += synapse0x1f55b80();
   input += synapse0x1f55bc0();
   input += synapse0x1f55c00();
   input += synapse0x1f55c40();
   input += synapse0x1f55c80();
   input += synapse0x1f55cc0();
   input += synapse0x1f55d00();
   input += synapse0x1f55d40();
   input += synapse0x1f55d80();
   input += synapse0x1f55dc0();
   input += synapse0x1f55e00();
   input += synapse0x1f55e40();
   input += synapse0x1f558d0();
   input += synapse0x1f55910();
   input += synapse0x1f55f90();
   input += synapse0x1f55fd0();
   input += synapse0x1f56010();
   input += synapse0x1f56050();
   input += synapse0x1f56090();
   input += synapse0x1f560d0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f55740() {
   double input = input0x1f55740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f56110() {
   double input = -0.931142;
   input += synapse0x1f56450();
   input += synapse0x1f56490();
   input += synapse0x1f564d0();
   input += synapse0x1f56510();
   input += synapse0x1f56550();
   input += synapse0x1f56590();
   input += synapse0x1f565d0();
   input += synapse0x1f56610();
   input += synapse0x1f56650();
   input += synapse0x1f56690();
   input += synapse0x1f566d0();
   input += synapse0x1f56710();
   input += synapse0x1f56750();
   input += synapse0x1f56790();
   input += synapse0x1f567d0();
   input += synapse0x1f56810();
   input += synapse0x1f562a0();
   input += synapse0x1f562e0();
   input += synapse0x1f56960();
   input += synapse0x1f569a0();
   input += synapse0x1f569e0();
   input += synapse0x1f56a20();
   input += synapse0x1f56a60();
   input += synapse0x1f56aa0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f56110() {
   double input = input0x1f56110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f56ae0() {
   double input = -0.077018;
   input += synapse0x1f56e20();
   input += synapse0x1f56e60();
   input += synapse0x1f56ea0();
   input += synapse0x1f56ee0();
   input += synapse0x1f56f20();
   input += synapse0x1f56f60();
   input += synapse0x1f56fa0();
   input += synapse0x1f56fe0();
   input += synapse0x1f57020();
   input += synapse0x1f57060();
   input += synapse0x1f570a0();
   input += synapse0x1f570e0();
   input += synapse0x1f57120();
   input += synapse0x1f57160();
   input += synapse0x1f571a0();
   input += synapse0x1f571e0();
   input += synapse0x1f56c70();
   input += synapse0x1f56cb0();
   input += synapse0x1f57330();
   input += synapse0x1f57370();
   input += synapse0x1f573b0();
   input += synapse0x1f573f0();
   input += synapse0x1f57430();
   input += synapse0x1f57470();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f56ae0() {
   double input = input0x1f56ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f574b0() {
   double input = 0.837649;
   input += synapse0x1f577f0();
   input += synapse0x1f57830();
   input += synapse0x1f57870();
   input += synapse0x1f578b0();
   input += synapse0x1f578f0();
   input += synapse0x1f57930();
   input += synapse0x1f57970();
   input += synapse0x1f579b0();
   input += synapse0x1f579f0();
   input += synapse0x1f57a30();
   input += synapse0x1f57a70();
   input += synapse0x1f57ab0();
   input += synapse0x1f57af0();
   input += synapse0x1f57b30();
   input += synapse0x1f57b70();
   input += synapse0x1f57bb0();
   input += synapse0x1f57640();
   input += synapse0x1f57680();
   input += synapse0x1f57d00();
   input += synapse0x1f57d40();
   input += synapse0x1f57d80();
   input += synapse0x1f57dc0();
   input += synapse0x1f57e00();
   input += synapse0x1f57e40();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f574b0() {
   double input = input0x1f574b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f57e80() {
   double input = -2.18755;
   input += synapse0x1f581c0();
   input += synapse0x1f58200();
   input += synapse0x1f58240();
   input += synapse0x1f58280();
   input += synapse0x1f582c0();
   input += synapse0x1f58300();
   input += synapse0x1f58340();
   input += synapse0x1f58380();
   input += synapse0x1f583c0();
   input += synapse0x1f58400();
   input += synapse0x1f58440();
   input += synapse0x1f58480();
   input += synapse0x1f584c0();
   input += synapse0x1f58500();
   input += synapse0x1f58540();
   input += synapse0x1f58580();
   input += synapse0x1f58010();
   input += synapse0x1f58050();
   input += synapse0x1f586d0();
   input += synapse0x1f58710();
   input += synapse0x1f58750();
   input += synapse0x1f58790();
   input += synapse0x1f587d0();
   input += synapse0x1f58810();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f57e80() {
   double input = input0x1f57e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f58850() {
   double input = 1.62291;
   input += synapse0x1f58b90();
   input += synapse0x1f58bd0();
   input += synapse0x1f58c10();
   input += synapse0x1f58c50();
   input += synapse0x1f58c90();
   input += synapse0x1f58cd0();
   input += synapse0x1f58d10();
   input += synapse0x1f58d50();
   input += synapse0x1f58d90();
   input += synapse0x1f58dd0();
   input += synapse0x1f58e10();
   input += synapse0x1f58e50();
   input += synapse0x1f58e90();
   input += synapse0x1f58ed0();
   input += synapse0x1f58f10();
   input += synapse0x1f58f50();
   input += synapse0x1f589e0();
   input += synapse0x1f58a20();
   input += synapse0x1f590a0();
   input += synapse0x1f590e0();
   input += synapse0x1f59120();
   input += synapse0x1f59160();
   input += synapse0x1f591a0();
   input += synapse0x1f591e0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f58850() {
   double input = input0x1f58850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f59220() {
   double input = 1.0679;
   input += synapse0x1f59560();
   input += synapse0x1f595a0();
   input += synapse0x1f595e0();
   input += synapse0x1f59620();
   input += synapse0x1f59660();
   input += synapse0x1f596a0();
   input += synapse0x1f596e0();
   input += synapse0x1f59720();
   input += synapse0x1f59760();
   input += synapse0x1f597a0();
   input += synapse0x1f597e0();
   input += synapse0x1f59820();
   input += synapse0x1f59860();
   input += synapse0x1f598a0();
   input += synapse0x1f598e0();
   input += synapse0x1f59920();
   input += synapse0x1f593b0();
   input += synapse0x1f593f0();
   input += synapse0x1f59a70();
   input += synapse0x1f59ab0();
   input += synapse0x1f59af0();
   input += synapse0x1f59b30();
   input += synapse0x1f59b70();
   input += synapse0x1f59bb0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f59220() {
   double input = input0x1f59220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f59bf0() {
   double input = 1.88004;
   input += synapse0x1f42660();
   input += synapse0x1f426a0();
   input += synapse0x1f426e0();
   input += synapse0x1f42720();
   input += synapse0x1f42760();
   input += synapse0x1f427a0();
   input += synapse0x1f427e0();
   input += synapse0x1f42820();
   input += synapse0x1f5a340();
   input += synapse0x1f5a380();
   input += synapse0x1f5a3c0();
   input += synapse0x1f5a400();
   input += synapse0x1f5a440();
   input += synapse0x1f5a480();
   input += synapse0x1f5a4c0();
   input += synapse0x1f5a500();
   input += synapse0x1f59d80();
   input += synapse0x1f59dc0();
   input += synapse0x1f5a650();
   input += synapse0x1f5a690();
   input += synapse0x1f5a6d0();
   input += synapse0x1f5a710();
   input += synapse0x1f5a750();
   input += synapse0x1f5a790();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f59bf0() {
   double input = input0x1f59bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f5a7d0() {
   double input = -0.0979426;
   input += synapse0x1f5ab10();
   input += synapse0x1f5ab50();
   input += synapse0x1f5ab90();
   input += synapse0x1f5abd0();
   input += synapse0x1f5ac10();
   input += synapse0x1f5ac50();
   input += synapse0x1f5ac90();
   input += synapse0x1f5acd0();
   input += synapse0x1f5ad10();
   input += synapse0x1f5ad50();
   input += synapse0x1f5ad90();
   input += synapse0x1f5add0();
   input += synapse0x1f5ae10();
   input += synapse0x1f5ae50();
   input += synapse0x1f5ae90();
   input += synapse0x1f5aed0();
   input += synapse0x1f5a960();
   input += synapse0x1f5a9a0();
   input += synapse0x1f5b020();
   input += synapse0x1f5b060();
   input += synapse0x1f5b0a0();
   input += synapse0x1f5b0e0();
   input += synapse0x1f5b120();
   input += synapse0x1f5b160();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f5a7d0() {
   double input = input0x1f5a7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f5b1a0() {
   double input = 1.73442;
   input += synapse0x1f5b4e0();
   input += synapse0x1f5b520();
   input += synapse0x1f5b560();
   input += synapse0x1f5b5a0();
   input += synapse0x1f5b5e0();
   input += synapse0x1f5b620();
   input += synapse0x1f5b660();
   input += synapse0x1f5b6a0();
   input += synapse0x1f5b6e0();
   input += synapse0x1f5b720();
   input += synapse0x1f5b760();
   input += synapse0x1f5b7a0();
   input += synapse0x1f5b7e0();
   input += synapse0x1f5b820();
   input += synapse0x1f5b860();
   input += synapse0x1f5b8a0();
   input += synapse0x1f5b330();
   input += synapse0x1f5b370();
   input += synapse0x1f4bea0();
   input += synapse0x1f4bee0();
   input += synapse0x1f4bf20();
   input += synapse0x1f4bf60();
   input += synapse0x1f4bfa0();
   input += synapse0x1f4bfe0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f5b1a0() {
   double input = input0x1f5b1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f4c020() {
   double input = 0.384369;
   input += synapse0x1f4c360();
   input += synapse0x1f4c3a0();
   input += synapse0x1f4c3e0();
   input += synapse0x1f4c420();
   input += synapse0x1f4c460();
   input += synapse0x1f4c4a0();
   input += synapse0x1f4c4e0();
   input += synapse0x1f4c520();
   input += synapse0x1f4c560();
   input += synapse0x1f4c5a0();
   input += synapse0x1f4c5e0();
   input += synapse0x1f4c620();
   input += synapse0x1f4c660();
   input += synapse0x1f4c6a0();
   input += synapse0x1f4c6e0();
   input += synapse0x1f4c720();
   input += synapse0x1f4c1b0();
   input += synapse0x1f4c1f0();
   input += synapse0x1f4c870();
   input += synapse0x1f4c8b0();
   input += synapse0x1f4c8f0();
   input += synapse0x1f4c930();
   input += synapse0x1f4c970();
   input += synapse0x1f4c9b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f4c020() {
   double input = input0x1f4c020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f4c9f0() {
   double input = 1.3251;
   input += synapse0x1f4cd30();
   input += synapse0x1f4cd70();
   input += synapse0x1f4cdb0();
   input += synapse0x1f4cdf0();
   input += synapse0x1f4ce30();
   input += synapse0x1f4ce70();
   input += synapse0x1f4ceb0();
   input += synapse0x1f4cef0();
   input += synapse0x1f4cf30();
   input += synapse0x1f4cf70();
   input += synapse0x1f4cfb0();
   input += synapse0x1f4cff0();
   input += synapse0x1f4d030();
   input += synapse0x1f4d070();
   input += synapse0x1f4d0b0();
   input += synapse0x1f4d0f0();
   input += synapse0x1f4cb80();
   input += synapse0x1f4cbc0();
   input += synapse0x1f4d240();
   input += synapse0x1f4d280();
   input += synapse0x1f4d2c0();
   input += synapse0x1f4d300();
   input += synapse0x1f4d340();
   input += synapse0x1f4d380();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f4c9f0() {
   double input = input0x1f4c9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f4d3c0() {
   double input = 2.17136;
   input += synapse0x1f4d700();
   input += synapse0x1f4d740();
   input += synapse0x1f4d780();
   input += synapse0x1f4d7c0();
   input += synapse0x1f4d800();
   input += synapse0x1f4d840();
   input += synapse0x1f4d880();
   input += synapse0x1f4d8c0();
   input += synapse0x1f4d900();
   input += synapse0x1f4d940();
   input += synapse0x1f4d980();
   input += synapse0x1f4d9c0();
   input += synapse0x1f4da00();
   input += synapse0x1f4da40();
   input += synapse0x1f4da80();
   input += synapse0x1f4dac0();
   input += synapse0x1f4d550();
   input += synapse0x1f4d590();
   input += synapse0x1f4dc10();
   input += synapse0x1f4dc50();
   input += synapse0x1f4dc90();
   input += synapse0x1f4dcd0();
   input += synapse0x1f4dd10();
   input += synapse0x1f4dd50();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f4d3c0() {
   double input = input0x1f4d3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f5fa00() {
   double input = -0.0661504;
   input += synapse0x1f5fc20();
   input += synapse0x1f5fc60();
   input += synapse0x1f5fca0();
   input += synapse0x1f5fce0();
   input += synapse0x1f5fd20();
   input += synapse0x1f5fd60();
   input += synapse0x1f5fda0();
   input += synapse0x1f5fde0();
   input += synapse0x1f5fe20();
   input += synapse0x1f5fe60();
   input += synapse0x1f5fea0();
   input += synapse0x1f5fee0();
   input += synapse0x1f5ff20();
   input += synapse0x1f5ff60();
   input += synapse0x1f5ffa0();
   input += synapse0x1f5ffe0();
   input += synapse0x1f4dd90();
   input += synapse0x1f4ddd0();
   input += synapse0x1f60130();
   input += synapse0x1f60170();
   input += synapse0x1f601b0();
   input += synapse0x1f601f0();
   input += synapse0x1f60230();
   input += synapse0x1f60270();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f5fa00() {
   double input = input0x1f5fa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f602b0() {
   double input = 0.485794;
   input += synapse0x1f605f0();
   input += synapse0x1f60630();
   input += synapse0x1f60670();
   input += synapse0x1f606b0();
   input += synapse0x1f606f0();
   input += synapse0x1f60730();
   input += synapse0x1f60770();
   input += synapse0x1f607b0();
   input += synapse0x1f607f0();
   input += synapse0x1f60830();
   input += synapse0x1f60870();
   input += synapse0x1f608b0();
   input += synapse0x1f608f0();
   input += synapse0x1f60930();
   input += synapse0x1f60970();
   input += synapse0x1f609b0();
   input += synapse0x1f60440();
   input += synapse0x1f60480();
   input += synapse0x1f60b00();
   input += synapse0x1f60b40();
   input += synapse0x1f60b80();
   input += synapse0x1f60bc0();
   input += synapse0x1f60c00();
   input += synapse0x1f60c40();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f602b0() {
   double input = input0x1f602b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f60c80() {
   double input = 0.774644;
   input += synapse0x1f60fc0();
   input += synapse0x1f61000();
   input += synapse0x1f61040();
   input += synapse0x1f61080();
   input += synapse0x1f610c0();
   input += synapse0x1f61100();
   input += synapse0x1f61140();
   input += synapse0x1f61180();
   input += synapse0x1f611c0();
   input += synapse0x1f61200();
   input += synapse0x1f61240();
   input += synapse0x1f61280();
   input += synapse0x1f612c0();
   input += synapse0x1f61300();
   input += synapse0x1f61340();
   input += synapse0x1f61380();
   input += synapse0x1f60e10();
   input += synapse0x1f60e50();
   input += synapse0x1f614d0();
   input += synapse0x1f61510();
   input += synapse0x1f61550();
   input += synapse0x1f61590();
   input += synapse0x1f615d0();
   input += synapse0x1f61610();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f60c80() {
   double input = input0x1f60c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f61650() {
   double input = -0.570847;
   input += synapse0x1f61990();
   input += synapse0x1f619d0();
   input += synapse0x1f61a10();
   input += synapse0x1f61a50();
   input += synapse0x1f61a90();
   input += synapse0x1f61ad0();
   input += synapse0x1f61b10();
   input += synapse0x1f61b50();
   input += synapse0x1f61b90();
   input += synapse0x1f61bd0();
   input += synapse0x1f61c10();
   input += synapse0x1f61c50();
   input += synapse0x1f61c90();
   input += synapse0x1f61cd0();
   input += synapse0x1f61d10();
   input += synapse0x1f61d50();
   input += synapse0x1f617e0();
   input += synapse0x1f61820();
   input += synapse0x1f61ea0();
   input += synapse0x1f61ee0();
   input += synapse0x1f61f20();
   input += synapse0x1f61f60();
   input += synapse0x1f61fa0();
   input += synapse0x1f61fe0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f61650() {
   double input = input0x1f61650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f68850() {
   double input = -1.10493;
   input += synapse0x1f3e580();
   input += synapse0x1f3e5c0();
   input += synapse0x1f3fa90();
   input += synapse0x1f3fad0();
   input += synapse0x1f40460();
   input += synapse0x1f404a0();
   input += synapse0x1f41230();
   input += synapse0x1f41270();
   input += synapse0x1f41c00();
   input += synapse0x1f41c40();
   input += synapse0x1f425d0();
   input += synapse0x1f42610();
   input += synapse0x1f430b0();
   input += synapse0x1f430f0();
   input += synapse0x1f43a80();
   input += synapse0x1f43ac0();
   input += synapse0x1f40b60();
   input += synapse0x1f40ba0();
   input += synapse0x1f45630();
   input += synapse0x1f45670();
   input += synapse0x1f46000();
   input += synapse0x1f46040();
   input += synapse0x1f469d0();
   input += synapse0x1f46a10();
   input += synapse0x1f473a0();
   input += synapse0x1f473e0();
   input += synapse0x1f3b510();
   input += synapse0x1f3b550();
   input += synapse0x1f49490();
   input += synapse0x1f494d0();
   input += synapse0x1f49e60();
   input += synapse0x1f49ea0();
   input += synapse0x1f4a830();
   input += synapse0x1f4a870();
   input += synapse0x1f4b200();
   input += synapse0x1f4b240();
   input += synapse0x1f4bbd0();
   input += synapse0x1f4bc10();
   input += synapse0x1f44720();
   input += synapse0x1f44760();
   input += synapse0x1f4dfd0();
   input += synapse0x1f4e010();
   input += synapse0x1f4e960();
   input += synapse0x1f4e9a0();
   input += synapse0x1f4f330();
   input += synapse0x1f4f370();
   input += synapse0x1f4fd00();
   input += synapse0x1f4fd40();
   input += synapse0x1f506d0();
   input += synapse0x1f50710();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f68850() {
   double input = input0x1f68850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f68bf0() {
   double input = -0.864518;
   input += synapse0x1f52e10();
   input += synapse0x1f52e50();
   input += synapse0x1f483d0();
   input += synapse0x1f48410();
   input += synapse0x1f559f0();
   input += synapse0x1f55a30();
   input += synapse0x1f563c0();
   input += synapse0x1f56400();
   input += synapse0x1f56d90();
   input += synapse0x1f56dd0();
   input += synapse0x1f57760();
   input += synapse0x1f577a0();
   input += synapse0x1f58130();
   input += synapse0x1f58170();
   input += synapse0x1f58b00();
   input += synapse0x1f58b40();
   input += synapse0x1f594d0();
   input += synapse0x1f59510();
   input += synapse0x1f59ea0();
   input += synapse0x1f59ee0();
   input += synapse0x1f5aa80();
   input += synapse0x1f5aac0();
   input += synapse0x1f5b450();
   input += synapse0x1f5b490();
   input += synapse0x1f4c2d0();
   input += synapse0x1f4c310();
   input += synapse0x1f4cca0();
   input += synapse0x1f4cce0();
   input += synapse0x1f4d670();
   input += synapse0x1f4d6b0();
   input += synapse0x1f5fb90();
   input += synapse0x1f5fbd0();
   input += synapse0x1f60560();
   input += synapse0x1f605a0();
   input += synapse0x1f60f30();
   input += synapse0x1f60f70();
   input += synapse0x1f61900();
   input += synapse0x1f61940();
   input += synapse0x1f3d7f0();
   input += synapse0x1f3d830();
   input += synapse0x1f510a0();
   input += synapse0x1f510e0();
   input += synapse0x1f62020();
   input += synapse0x1f62060();
   input += synapse0x1f620a0();
   input += synapse0x1f620e0();
   input += synapse0x1f68f90();
   input += synapse0x1f68fd0();
   input += synapse0x1f69010();
   input += synapse0x1f69050();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f68bf0() {
   double input = input0x1f68bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f69090() {
   double input = 0.0525687;
   input += synapse0x1f693d0();
   input += synapse0x1f69410();
   input += synapse0x1f69450();
   input += synapse0x1f69490();
   input += synapse0x1f694d0();
   input += synapse0x1f69510();
   input += synapse0x1f69550();
   input += synapse0x1f69590();
   input += synapse0x1f695d0();
   input += synapse0x1f69610();
   input += synapse0x1f69650();
   input += synapse0x1f69690();
   input += synapse0x1f696d0();
   input += synapse0x1f69710();
   input += synapse0x1f69750();
   input += synapse0x1f69790();
   input += synapse0x1f69220();
   input += synapse0x1f69260();
   input += synapse0x1f698e0();
   input += synapse0x1f69920();
   input += synapse0x1f69960();
   input += synapse0x1f699a0();
   input += synapse0x1f699e0();
   input += synapse0x1f69a20();
   input += synapse0x1f69a60();
   input += synapse0x1f69aa0();
   input += synapse0x1f69ae0();
   input += synapse0x1f69b20();
   input += synapse0x1f69b60();
   input += synapse0x1f69ba0();
   input += synapse0x1f69be0();
   input += synapse0x1f69c20();
   input += synapse0x1f697d0();
   input += synapse0x1f69810();
   input += synapse0x1f69850();
   input += synapse0x1f69890();
   input += synapse0x1f69e70();
   input += synapse0x1f69eb0();
   input += synapse0x1f69ef0();
   input += synapse0x1f69f30();
   input += synapse0x1f69f70();
   input += synapse0x1f69fb0();
   input += synapse0x1f69ff0();
   input += synapse0x1f6a030();
   input += synapse0x1f6a070();
   input += synapse0x1f6a0b0();
   input += synapse0x1f6a0f0();
   input += synapse0x1f6a130();
   input += synapse0x1f6a170();
   input += synapse0x1f6a1b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f69090() {
   double input = input0x1f69090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f6a1f0() {
   double input = -0.431159;
   input += synapse0x1f6a530();
   input += synapse0x1f6a570();
   input += synapse0x1f6a5b0();
   input += synapse0x1f6a5f0();
   input += synapse0x1f6a630();
   input += synapse0x1f6a670();
   input += synapse0x1f6a6b0();
   input += synapse0x1f6a6f0();
   input += synapse0x1f6a730();
   input += synapse0x1f6a770();
   input += synapse0x1f6a7b0();
   input += synapse0x1f6a7f0();
   input += synapse0x1f6a830();
   input += synapse0x1f6a870();
   input += synapse0x1f6a8b0();
   input += synapse0x1f6a8f0();
   input += synapse0x1f6a380();
   input += synapse0x1f6a3c0();
   input += synapse0x1f6aa40();
   input += synapse0x1f6aa80();
   input += synapse0x1f6aac0();
   input += synapse0x1f6ab00();
   input += synapse0x1f6ab40();
   input += synapse0x1f6ab80();
   input += synapse0x1f6abc0();
   input += synapse0x1f6ac00();
   input += synapse0x1f6ac40();
   input += synapse0x1f6ac80();
   input += synapse0x1f6acc0();
   input += synapse0x1f6ad00();
   input += synapse0x1f6ad40();
   input += synapse0x1f6ad80();
   input += synapse0x1f6a930();
   input += synapse0x1f6a970();
   input += synapse0x1f6a9b0();
   input += synapse0x1f6a9f0();
   input += synapse0x1f6afd0();
   input += synapse0x1f6b010();
   input += synapse0x1f6b050();
   input += synapse0x1f6b090();
   input += synapse0x1f6b0d0();
   input += synapse0x1f6b110();
   input += synapse0x1f6b150();
   input += synapse0x1f6b190();
   input += synapse0x1f6b1d0();
   input += synapse0x1f6b210();
   input += synapse0x1f6b250();
   input += synapse0x1f6b290();
   input += synapse0x1f6b2d0();
   input += synapse0x1f6b310();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f6a1f0() {
   double input = input0x1f6a1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f6b350() {
   double input = -0.281741;
   input += synapse0x1f6b690();
   input += synapse0x1f6b6d0();
   input += synapse0x1f6b710();
   input += synapse0x1f6b750();
   input += synapse0x1f6b790();
   input += synapse0x1f6b7d0();
   input += synapse0x1f6b810();
   input += synapse0x1f6b850();
   input += synapse0x1f6b890();
   input += synapse0x1f6b8d0();
   input += synapse0x1f6b910();
   input += synapse0x1f6b950();
   input += synapse0x1f6b990();
   input += synapse0x1f6b9d0();
   input += synapse0x1f6ba10();
   input += synapse0x1f6ba50();
   input += synapse0x1f6b4e0();
   input += synapse0x1f6b520();
   input += synapse0x1f6bba0();
   input += synapse0x1f6bbe0();
   input += synapse0x1f6bc20();
   input += synapse0x1f6bc60();
   input += synapse0x1f6bca0();
   input += synapse0x1f6bce0();
   input += synapse0x1f6bd20();
   input += synapse0x1f6bd60();
   input += synapse0x1f6bda0();
   input += synapse0x1f6bde0();
   input += synapse0x1f6be20();
   input += synapse0x1f6be60();
   input += synapse0x1f6bea0();
   input += synapse0x1f6bee0();
   input += synapse0x1f6ba90();
   input += synapse0x1f6bad0();
   input += synapse0x1f6bb10();
   input += synapse0x1f6bb50();
   input += synapse0x1f6c130();
   input += synapse0x1f6c170();
   input += synapse0x1f6c1b0();
   input += synapse0x1f6c1f0();
   input += synapse0x1f6c230();
   input += synapse0x1f6c270();
   input += synapse0x1f6c2b0();
   input += synapse0x1f6c2f0();
   input += synapse0x1f6c330();
   input += synapse0x1f6c370();
   input += synapse0x1f6c3b0();
   input += synapse0x1f6c3f0();
   input += synapse0x1f6c430();
   input += synapse0x1f6c470();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f6b350() {
   double input = input0x1f6b350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x1f6c4b0() {
   double input = 12.8157;
   input += synapse0x1f3d590();
   input += synapse0x1f6c6d0();
   input += synapse0x1f6c710();
   input += synapse0x1f6c750();
   input += synapse0x1f6c790();
   return input;
}

double NNfunction_sb_uLsR::neuron0x1f6c4b0() {
   double input = input0x1f6c4b0();
   return (input * 1)+0;
}

double NNfunction_sb_uLsR::synapse0x1cf83e0() {
   return (neuron0x1f38570()*-0.441831);
}

double NNfunction_sb_uLsR::synapse0x1f38430() {
   return (neuron0x1f388b0()*0.261468);
}

double NNfunction_sb_uLsR::synapse0x1f38470() {
   return (neuron0x1f38bf0()*-0.370955);
}

double NNfunction_sb_uLsR::synapse0x1f3d880() {
   return (neuron0x1f38f30()*0.73955);
}

double NNfunction_sb_uLsR::synapse0x1f3d8c0() {
   return (neuron0x1f39270()*-0.268139);
}

double NNfunction_sb_uLsR::synapse0x1f3d900() {
   return (neuron0x1f395b0()*0.0636282);
}

double NNfunction_sb_uLsR::synapse0x1f3d940() {
   return (neuron0x1f398f0()*0.122315);
}

double NNfunction_sb_uLsR::synapse0x1f3d980() {
   return (neuron0x1f39c30()*-0.176923);
}

double NNfunction_sb_uLsR::synapse0x1f3d9c0() {
   return (neuron0x1f39f70()*0.174156);
}

double NNfunction_sb_uLsR::synapse0x1f3da00() {
   return (neuron0x1f3a2b0()*0.0341377);
}

double NNfunction_sb_uLsR::synapse0x1f3da40() {
   return (neuron0x1f3a5f0()*-0.399026);
}

double NNfunction_sb_uLsR::synapse0x1f3da80() {
   return (neuron0x1f3a930()*0.586118);
}

double NNfunction_sb_uLsR::synapse0x1f3dac0() {
   return (neuron0x1f3ac70()*0.213786);
}

double NNfunction_sb_uLsR::synapse0x1f3db00() {
   return (neuron0x1f3afb0()*0.69371);
}

double NNfunction_sb_uLsR::synapse0x1f3db40() {
   return (neuron0x1f3b2f0()*-0.0616102);
}

double NNfunction_sb_uLsR::synapse0x1f3db80() {
   return (neuron0x1f3b630()*0.0659975);
}

double NNfunction_sb_uLsR::synapse0x1f383a0() {
   return (neuron0x1f3b970()*-0.510688);
}

double NNfunction_sb_uLsR::synapse0x1f383e0() {
   return (neuron0x1f3bed0()*0.332627);
}

double NNfunction_sb_uLsR::synapse0x1ce9c80() {
   return (neuron0x1f3c0f0()*0.256601);
}

double NNfunction_sb_uLsR::synapse0x1ce9cc0() {
   return (neuron0x1f3c430()*0.137696);
}

double NNfunction_sb_uLsR::synapse0x1f3dde0() {
   return (neuron0x1f3c770()*0.256141);
}

double NNfunction_sb_uLsR::synapse0x1f3de20() {
   return (neuron0x1f3cab0()*-0.427282);
}

double NNfunction_sb_uLsR::synapse0x1f3de60() {
   return (neuron0x1f3cdf0()*0.206228);
}

double NNfunction_sb_uLsR::synapse0x1f3dea0() {
   return (neuron0x1f3d130()*-0.263914);
}

double NNfunction_sb_uLsR::synapse0x1f3e220() {
   return (neuron0x1f38570()*0.227476);
}

double NNfunction_sb_uLsR::synapse0x1f3e260() {
   return (neuron0x1f388b0()*-0.770662);
}

double NNfunction_sb_uLsR::synapse0x1f3e2a0() {
   return (neuron0x1f38bf0()*0.0533382);
}

double NNfunction_sb_uLsR::synapse0x1f3e2e0() {
   return (neuron0x1f38f30()*0.399538);
}

double NNfunction_sb_uLsR::synapse0x1f3e320() {
   return (neuron0x1f39270()*-0.00421977);
}

double NNfunction_sb_uLsR::synapse0x1f3e360() {
   return (neuron0x1f395b0()*0.0128666);
}

double NNfunction_sb_uLsR::synapse0x1f3e3a0() {
   return (neuron0x1f398f0()*0.35036);
}

double NNfunction_sb_uLsR::synapse0x1f3e3e0() {
   return (neuron0x1f39c30()*0.0996865);
}

double NNfunction_sb_uLsR::synapse0x1f3e420() {
   return (neuron0x1f39f70()*0.170693);
}

double NNfunction_sb_uLsR::synapse0x1f3dcd0() {
   return (neuron0x1f3a2b0()*0.366042);
}

double NNfunction_sb_uLsR::synapse0x1f3dd10() {
   return (neuron0x1f3a5f0()*0.168842);
}

double NNfunction_sb_uLsR::synapse0x1f3dd50() {
   return (neuron0x1f3a930()*0.0531813);
}

double NNfunction_sb_uLsR::synapse0x1f3dd90() {
   return (neuron0x1f3ac70()*0.00227057);
}

double NNfunction_sb_uLsR::synapse0x1f3e670() {
   return (neuron0x1f3afb0()*-0.129694);
}

double NNfunction_sb_uLsR::synapse0x1f3e6b0() {
   return (neuron0x1f3b2f0()*-0.437965);
}

double NNfunction_sb_uLsR::synapse0x1f3e6f0() {
   return (neuron0x1f3b630()*-0.490703);
}

double NNfunction_sb_uLsR::synapse0x1f3e070() {
   return (neuron0x1f3b970()*0.124314);
}

double NNfunction_sb_uLsR::synapse0x1f3e0b0() {
   return (neuron0x1f3bed0()*-0.376836);
}

double NNfunction_sb_uLsR::synapse0x1f3e840() {
   return (neuron0x1f3c0f0()*-0.126906);
}

double NNfunction_sb_uLsR::synapse0x1f3e880() {
   return (neuron0x1f3c430()*-0.248902);
}

double NNfunction_sb_uLsR::synapse0x1f3e8c0() {
   return (neuron0x1f3c770()*0.475363);
}

double NNfunction_sb_uLsR::synapse0x1f3e900() {
   return (neuron0x1f3cab0()*-0.520829);
}

double NNfunction_sb_uLsR::synapse0x1f3e940() {
   return (neuron0x1f3cdf0()*0.477869);
}

double NNfunction_sb_uLsR::synapse0x1f3e980() {
   return (neuron0x1f3d130()*-0.329713);
}

double NNfunction_sb_uLsR::synapse0x1f3ed00() {
   return (neuron0x1f38570()*-0.317682);
}

double NNfunction_sb_uLsR::synapse0x1f3ed40() {
   return (neuron0x1f388b0()*-0.350579);
}

double NNfunction_sb_uLsR::synapse0x1f3ed80() {
   return (neuron0x1f38bf0()*-1.72461);
}

double NNfunction_sb_uLsR::synapse0x1f3edc0() {
   return (neuron0x1f38f30()*-0.0561482);
}

double NNfunction_sb_uLsR::synapse0x1f3ee00() {
   return (neuron0x1f39270()*0.363863);
}

double NNfunction_sb_uLsR::synapse0x1f3ee40() {
   return (neuron0x1f395b0()*0.366085);
}

double NNfunction_sb_uLsR::synapse0x1f3ee80() {
   return (neuron0x1f398f0()*-0.266858);
}

double NNfunction_sb_uLsR::synapse0x1f3eec0() {
   return (neuron0x1f39c30()*0.26078);
}

double NNfunction_sb_uLsR::synapse0x1f3ef00() {
   return (neuron0x1f39f70()*0.0568244);
}

double NNfunction_sb_uLsR::synapse0x1f3ef40() {
   return (neuron0x1f3a2b0()*-0.114028);
}

double NNfunction_sb_uLsR::synapse0x1f3ef80() {
   return (neuron0x1f3a5f0()*0.0807598);
}

double NNfunction_sb_uLsR::synapse0x1f3efc0() {
   return (neuron0x1f3a930()*-0.892801);
}

double NNfunction_sb_uLsR::synapse0x1f3f000() {
   return (neuron0x1f3ac70()*0.105724);
}

double NNfunction_sb_uLsR::synapse0x1f3f040() {
   return (neuron0x1f3afb0()*0.115097);
}

double NNfunction_sb_uLsR::synapse0x1f3f080() {
   return (neuron0x1f3b2f0()*-0.170064);
}

double NNfunction_sb_uLsR::synapse0x1f3f0c0() {
   return (neuron0x1f3b630()*0.378266);
}

double NNfunction_sb_uLsR::synapse0x1f3eb50() {
   return (neuron0x1f3b970()*-0.250031);
}

double NNfunction_sb_uLsR::synapse0x1f3eb90() {
   return (neuron0x1f3bed0()*0.42157);
}

double NNfunction_sb_uLsR::synapse0x1cf7ad0() {
   return (neuron0x1f3c0f0()*0.222194);
}

double NNfunction_sb_uLsR::synapse0x1cf7b10() {
   return (neuron0x1f3c430()*-0.157289);
}

double NNfunction_sb_uLsR::synapse0x1f27600() {
   return (neuron0x1f3c770()*-0.427264);
}

double NNfunction_sb_uLsR::synapse0x1f27640() {
   return (neuron0x1f3cab0()*0.313816);
}

double NNfunction_sb_uLsR::synapse0x1f27680() {
   return (neuron0x1f3cdf0()*0.553872);
}

double NNfunction_sb_uLsR::synapse0x1f384b0() {
   return (neuron0x1f3d130()*0.0801617);
}

double NNfunction_sb_uLsR::synapse0x1f3e610() {
   return (neuron0x1f38570()*-0.744417);
}

double NNfunction_sb_uLsR::synapse0x1f384f0() {
   return (neuron0x1f388b0()*-0.576044);
}

double NNfunction_sb_uLsR::synapse0x1f38530() {
   return (neuron0x1f38bf0()*-0.0652708);
}

double NNfunction_sb_uLsR::synapse0x1f3f210() {
   return (neuron0x1f38f30()*-0.0704238);
}

double NNfunction_sb_uLsR::synapse0x1f3f250() {
   return (neuron0x1f39270()*0.00907104);
}

double NNfunction_sb_uLsR::synapse0x1f3f290() {
   return (neuron0x1f395b0()*-0.0761022);
}

double NNfunction_sb_uLsR::synapse0x1f3f2d0() {
   return (neuron0x1f398f0()*0.121727);
}

double NNfunction_sb_uLsR::synapse0x1f3f310() {
   return (neuron0x1f39c30()*-0.424475);
}

double NNfunction_sb_uLsR::synapse0x1f3f350() {
   return (neuron0x1f39f70()*-0.168494);
}

double NNfunction_sb_uLsR::synapse0x1f3f390() {
   return (neuron0x1f3a2b0()*-0.0220086);
}

double NNfunction_sb_uLsR::synapse0x1f3f3d0() {
   return (neuron0x1f3a5f0()*0.14806);
}

double NNfunction_sb_uLsR::synapse0x1f3f410() {
   return (neuron0x1f3a930()*-0.84613);
}

double NNfunction_sb_uLsR::synapse0x1f3f450() {
   return (neuron0x1f3ac70()*-0.567177);
}

double NNfunction_sb_uLsR::synapse0x1f3f490() {
   return (neuron0x1f3afb0()*-0.326656);
}

double NNfunction_sb_uLsR::synapse0x1f3f4d0() {
   return (neuron0x1f3b2f0()*-0.0191848);
}

double NNfunction_sb_uLsR::synapse0x1f3f510() {
   return (neuron0x1f3b630()*0.577815);
}

double NNfunction_sb_uLsR::synapse0x1f3e460() {
   return (neuron0x1f3b970()*-0.122847);
}

double NNfunction_sb_uLsR::synapse0x1f3e4a0() {
   return (neuron0x1f3bed0()*-0.816447);
}

double NNfunction_sb_uLsR::synapse0x1f3f660() {
   return (neuron0x1f3c0f0()*0.178892);
}

double NNfunction_sb_uLsR::synapse0x1f3f6a0() {
   return (neuron0x1f3c430()*0.344609);
}

double NNfunction_sb_uLsR::synapse0x1f3f6e0() {
   return (neuron0x1f3c770()*0.490545);
}

double NNfunction_sb_uLsR::synapse0x1f3f720() {
   return (neuron0x1f3cab0()*0.0587276);
}

double NNfunction_sb_uLsR::synapse0x1f3f760() {
   return (neuron0x1f3cdf0()*-0.18255);
}

double NNfunction_sb_uLsR::synapse0x1f3f7a0() {
   return (neuron0x1f3d130()*-0.0588111);
}

double NNfunction_sb_uLsR::synapse0x1f3fb20() {
   return (neuron0x1f38570()*0.265467);
}

double NNfunction_sb_uLsR::synapse0x1f3fb60() {
   return (neuron0x1f388b0()*0.259246);
}

double NNfunction_sb_uLsR::synapse0x1f3fba0() {
   return (neuron0x1f38bf0()*0.0171019);
}

double NNfunction_sb_uLsR::synapse0x1f3fbe0() {
   return (neuron0x1f38f30()*0.463196);
}

double NNfunction_sb_uLsR::synapse0x1f3fc20() {
   return (neuron0x1f39270()*0.210336);
}

double NNfunction_sb_uLsR::synapse0x1f3fc60() {
   return (neuron0x1f395b0()*-0.579563);
}

double NNfunction_sb_uLsR::synapse0x1f3fca0() {
   return (neuron0x1f398f0()*-0.292466);
}

double NNfunction_sb_uLsR::synapse0x1f3fce0() {
   return (neuron0x1f39c30()*0.109247);
}

double NNfunction_sb_uLsR::synapse0x1f3fd20() {
   return (neuron0x1f39f70()*0.0725987);
}

double NNfunction_sb_uLsR::synapse0x1f3fd60() {
   return (neuron0x1f3a2b0()*-0.0539429);
}

double NNfunction_sb_uLsR::synapse0x1f3fda0() {
   return (neuron0x1f3a5f0()*0.665493);
}

double NNfunction_sb_uLsR::synapse0x1f3fde0() {
   return (neuron0x1f3a930()*0.159598);
}

double NNfunction_sb_uLsR::synapse0x1f3fe20() {
   return (neuron0x1f3ac70()*0.166078);
}

double NNfunction_sb_uLsR::synapse0x1f3fe60() {
   return (neuron0x1f3afb0()*0.779597);
}

double NNfunction_sb_uLsR::synapse0x1f3fea0() {
   return (neuron0x1f3b2f0()*0.318161);
}

double NNfunction_sb_uLsR::synapse0x1f3fee0() {
   return (neuron0x1f3b630()*-0.181587);
}

double NNfunction_sb_uLsR::synapse0x1f3f970() {
   return (neuron0x1f3b970()*-0.358586);
}

double NNfunction_sb_uLsR::synapse0x1f3f9b0() {
   return (neuron0x1f3bed0()*-0.305695);
}

double NNfunction_sb_uLsR::synapse0x1f40030() {
   return (neuron0x1f3c0f0()*-0.436904);
}

double NNfunction_sb_uLsR::synapse0x1f40070() {
   return (neuron0x1f3c430()*-0.336818);
}

double NNfunction_sb_uLsR::synapse0x1f400b0() {
   return (neuron0x1f3c770()*0.343494);
}

double NNfunction_sb_uLsR::synapse0x1f400f0() {
   return (neuron0x1f3cab0()*0.183853);
}

double NNfunction_sb_uLsR::synapse0x1f40130() {
   return (neuron0x1f3cdf0()*0.314865);
}

double NNfunction_sb_uLsR::synapse0x1f40170() {
   return (neuron0x1f3d130()*0.0450946);
}

double NNfunction_sb_uLsR::synapse0x1f404f0() {
   return (neuron0x1f38570()*0.199714);
}

double NNfunction_sb_uLsR::synapse0x1f40530() {
   return (neuron0x1f388b0()*-0.0231984);
}

double NNfunction_sb_uLsR::synapse0x1f40570() {
   return (neuron0x1f38bf0()*0.0365122);
}

double NNfunction_sb_uLsR::synapse0x1f405b0() {
   return (neuron0x1f38f30()*0.0182927);
}

double NNfunction_sb_uLsR::synapse0x1f405f0() {
   return (neuron0x1f39270()*-0.178017);
}

double NNfunction_sb_uLsR::synapse0x1f40630() {
   return (neuron0x1f395b0()*-0.0538232);
}

double NNfunction_sb_uLsR::synapse0x1f40670() {
   return (neuron0x1f398f0()*-0.0724034);
}

double NNfunction_sb_uLsR::synapse0x1f406b0() {
   return (neuron0x1f39c30()*0.349165);
}

double NNfunction_sb_uLsR::synapse0x1f406f0() {
   return (neuron0x1f39f70()*0.147821);
}

double NNfunction_sb_uLsR::synapse0x1cf7e40() {
   return (neuron0x1f3a2b0()*-0.00089055);
}

double NNfunction_sb_uLsR::synapse0x1cf7e80() {
   return (neuron0x1f3a5f0()*-0.288959);
}

double NNfunction_sb_uLsR::synapse0x1cf7ec0() {
   return (neuron0x1f3a930()*1.00371);
}

double NNfunction_sb_uLsR::synapse0x1cf7f00() {
   return (neuron0x1f3ac70()*0.293196);
}

double NNfunction_sb_uLsR::synapse0x1cf7f40() {
   return (neuron0x1f3afb0()*0.110698);
}

double NNfunction_sb_uLsR::synapse0x1cf7f80() {
   return (neuron0x1f3b2f0()*0.310382);
}

double NNfunction_sb_uLsR::synapse0x1cf7fc0() {
   return (neuron0x1f3b630()*0.149177);
}

double NNfunction_sb_uLsR::synapse0x1f40340() {
   return (neuron0x1f3b970()*-0.0684994);
}

double NNfunction_sb_uLsR::synapse0x1f40380() {
   return (neuron0x1f3bed0()*0.69125);
}

double NNfunction_sb_uLsR::synapse0x1cf8110() {
   return (neuron0x1f3c0f0()*1.0697);
}

double NNfunction_sb_uLsR::synapse0x1cf8150() {
   return (neuron0x1f3c430()*0.323477);
}

double NNfunction_sb_uLsR::synapse0x1cf8190() {
   return (neuron0x1f3c770()*-0.212775);
}

double NNfunction_sb_uLsR::synapse0x1cf81d0() {
   return (neuron0x1f3cab0()*0.217464);
}

double NNfunction_sb_uLsR::synapse0x1cf8210() {
   return (neuron0x1f3cdf0()*-0.249109);
}

double NNfunction_sb_uLsR::synapse0x1f40f40() {
   return (neuron0x1f3d130()*0.146787);
}

double NNfunction_sb_uLsR::synapse0x1f412c0() {
   return (neuron0x1f38570()*0.0882009);
}

double NNfunction_sb_uLsR::synapse0x1f41300() {
   return (neuron0x1f388b0()*-0.050106);
}

double NNfunction_sb_uLsR::synapse0x1f41340() {
   return (neuron0x1f38bf0()*-0.0236632);
}

double NNfunction_sb_uLsR::synapse0x1f41380() {
   return (neuron0x1f38f30()*1.9935);
}

double NNfunction_sb_uLsR::synapse0x1f413c0() {
   return (neuron0x1f39270()*-0.0281301);
}

double NNfunction_sb_uLsR::synapse0x1f41400() {
   return (neuron0x1f395b0()*0.0410825);
}

double NNfunction_sb_uLsR::synapse0x1f41440() {
   return (neuron0x1f398f0()*0.00525064);
}

double NNfunction_sb_uLsR::synapse0x1f41480() {
   return (neuron0x1f39c30()*-0.0211298);
}

double NNfunction_sb_uLsR::synapse0x1f414c0() {
   return (neuron0x1f39f70()*-0.0290063);
}

double NNfunction_sb_uLsR::synapse0x1f41500() {
   return (neuron0x1f3a2b0()*-0.0238322);
}

double NNfunction_sb_uLsR::synapse0x1f41540() {
   return (neuron0x1f3a5f0()*0.000246536);
}

double NNfunction_sb_uLsR::synapse0x1f41580() {
   return (neuron0x1f3a930()*0.935384);
}

double NNfunction_sb_uLsR::synapse0x1f415c0() {
   return (neuron0x1f3ac70()*0.0272506);
}

double NNfunction_sb_uLsR::synapse0x1f41600() {
   return (neuron0x1f3afb0()*-0.0547398);
}

double NNfunction_sb_uLsR::synapse0x1f41640() {
   return (neuron0x1f3b2f0()*-0.0324924);
}

double NNfunction_sb_uLsR::synapse0x1f41680() {
   return (neuron0x1f3b630()*0.0314578);
}

double NNfunction_sb_uLsR::synapse0x1f41110() {
   return (neuron0x1f3b970()*0.0299638);
}

double NNfunction_sb_uLsR::synapse0x1f41150() {
   return (neuron0x1f3bed0()*-0.01655);
}

double NNfunction_sb_uLsR::synapse0x1f417d0() {
   return (neuron0x1f3c0f0()*-0.237968);
}

double NNfunction_sb_uLsR::synapse0x1f41810() {
   return (neuron0x1f3c430()*0.0473518);
}

double NNfunction_sb_uLsR::synapse0x1f41850() {
   return (neuron0x1f3c770()*0.0157476);
}

double NNfunction_sb_uLsR::synapse0x1f41890() {
   return (neuron0x1f3cab0()*0.0428234);
}

double NNfunction_sb_uLsR::synapse0x1f418d0() {
   return (neuron0x1f3cdf0()*-0.024659);
}

double NNfunction_sb_uLsR::synapse0x1f41910() {
   return (neuron0x1f3d130()*-0.0339112);
}

double NNfunction_sb_uLsR::synapse0x1f41c90() {
   return (neuron0x1f38570()*-0.30762);
}

double NNfunction_sb_uLsR::synapse0x1f41cd0() {
   return (neuron0x1f388b0()*0.657237);
}

double NNfunction_sb_uLsR::synapse0x1f41d10() {
   return (neuron0x1f38bf0()*-0.0261783);
}

double NNfunction_sb_uLsR::synapse0x1f41d50() {
   return (neuron0x1f38f30()*-0.416317);
}

double NNfunction_sb_uLsR::synapse0x1f41d90() {
   return (neuron0x1f39270()*-0.242681);
}

double NNfunction_sb_uLsR::synapse0x1f41dd0() {
   return (neuron0x1f395b0()*-0.286765);
}

double NNfunction_sb_uLsR::synapse0x1f41e10() {
   return (neuron0x1f398f0()*-0.475844);
}

double NNfunction_sb_uLsR::synapse0x1f41e50() {
   return (neuron0x1f39c30()*0.733077);
}

double NNfunction_sb_uLsR::synapse0x1f41e90() {
   return (neuron0x1f39f70()*-0.181144);
}

double NNfunction_sb_uLsR::synapse0x1f41ed0() {
   return (neuron0x1f3a2b0()*0.0805915);
}

double NNfunction_sb_uLsR::synapse0x1f41f10() {
   return (neuron0x1f3a5f0()*0.291063);
}

double NNfunction_sb_uLsR::synapse0x1f41f50() {
   return (neuron0x1f3a930()*0.837954);
}

double NNfunction_sb_uLsR::synapse0x1f41f90() {
   return (neuron0x1f3ac70()*-0.454251);
}

double NNfunction_sb_uLsR::synapse0x1f41fd0() {
   return (neuron0x1f3afb0()*-0.0167842);
}

double NNfunction_sb_uLsR::synapse0x1f42010() {
   return (neuron0x1f3b2f0()*-0.383964);
}

double NNfunction_sb_uLsR::synapse0x1f42050() {
   return (neuron0x1f3b630()*0.705278);
}

double NNfunction_sb_uLsR::synapse0x1f41ae0() {
   return (neuron0x1f3b970()*0.71362);
}

double NNfunction_sb_uLsR::synapse0x1f41b20() {
   return (neuron0x1f3bed0()*-0.124831);
}

double NNfunction_sb_uLsR::synapse0x1f421a0() {
   return (neuron0x1f3c0f0()*-0.822465);
}

double NNfunction_sb_uLsR::synapse0x1f421e0() {
   return (neuron0x1f3c430()*-0.172022);
}

double NNfunction_sb_uLsR::synapse0x1f42220() {
   return (neuron0x1f3c770()*-0.0370745);
}

double NNfunction_sb_uLsR::synapse0x1f42260() {
   return (neuron0x1f3cab0()*-0.0171699);
}

double NNfunction_sb_uLsR::synapse0x1f422a0() {
   return (neuron0x1f3cdf0()*-0.298532);
}

double NNfunction_sb_uLsR::synapse0x1f422e0() {
   return (neuron0x1f3d130()*-0.238546);
}

double NNfunction_sb_uLsR::synapse0x1f3bdc0() {
   return (neuron0x1f38570()*0.0517128);
}

double NNfunction_sb_uLsR::synapse0x1f3be00() {
   return (neuron0x1f388b0()*-0.0408569);
}

double NNfunction_sb_uLsR::synapse0x1f3be40() {
   return (neuron0x1f38bf0()*-0.0284481);
}

double NNfunction_sb_uLsR::synapse0x1f3be80() {
   return (neuron0x1f38f30()*-1.94094);
}

double NNfunction_sb_uLsR::synapse0x1f42870() {
   return (neuron0x1f39270()*0.0378705);
}

double NNfunction_sb_uLsR::synapse0x1f428b0() {
   return (neuron0x1f395b0()*0.00844185);
}

double NNfunction_sb_uLsR::synapse0x1f428f0() {
   return (neuron0x1f398f0()*-0.0262607);
}

double NNfunction_sb_uLsR::synapse0x1f42930() {
   return (neuron0x1f39c30()*-0.111998);
}

double NNfunction_sb_uLsR::synapse0x1f42970() {
   return (neuron0x1f39f70()*0.00678949);
}

double NNfunction_sb_uLsR::synapse0x1f429b0() {
   return (neuron0x1f3a2b0()*0.0511159);
}

double NNfunction_sb_uLsR::synapse0x1f429f0() {
   return (neuron0x1f3a5f0()*-0.0911234);
}

double NNfunction_sb_uLsR::synapse0x1f42a30() {
   return (neuron0x1f3a930()*0.264819);
}

double NNfunction_sb_uLsR::synapse0x1f42a70() {
   return (neuron0x1f3ac70()*0.0655804);
}

double NNfunction_sb_uLsR::synapse0x1f42ab0() {
   return (neuron0x1f3afb0()*-0.0503949);
}

double NNfunction_sb_uLsR::synapse0x1f42af0() {
   return (neuron0x1f3b2f0()*0.10402);
}

double NNfunction_sb_uLsR::synapse0x1f42b30() {
   return (neuron0x1f3b630()*0.0151333);
}

double NNfunction_sb_uLsR::synapse0x1f424b0() {
   return (neuron0x1f3b970()*-0.0924777);
}

double NNfunction_sb_uLsR::synapse0x1f424f0() {
   return (neuron0x1f3bed0()*-0.0506136);
}

double NNfunction_sb_uLsR::synapse0x1f42c80() {
   return (neuron0x1f3c0f0()*-1.02649);
}

double NNfunction_sb_uLsR::synapse0x1f42cc0() {
   return (neuron0x1f3c430()*0.0311707);
}

double NNfunction_sb_uLsR::synapse0x1f42d00() {
   return (neuron0x1f3c770()*0.00208767);
}

double NNfunction_sb_uLsR::synapse0x1f42d40() {
   return (neuron0x1f3cab0()*0.0450884);
}

double NNfunction_sb_uLsR::synapse0x1f42d80() {
   return (neuron0x1f3cdf0()*-0.0230307);
}

double NNfunction_sb_uLsR::synapse0x1f42dc0() {
   return (neuron0x1f3d130()*0.0122922);
}

double NNfunction_sb_uLsR::synapse0x1f43140() {
   return (neuron0x1f38570()*-0.110057);
}

double NNfunction_sb_uLsR::synapse0x1f43180() {
   return (neuron0x1f388b0()*0.089949);
}

double NNfunction_sb_uLsR::synapse0x1f431c0() {
   return (neuron0x1f38bf0()*0.18421);
}

double NNfunction_sb_uLsR::synapse0x1f43200() {
   return (neuron0x1f38f30()*0.0518443);
}

double NNfunction_sb_uLsR::synapse0x1f43240() {
   return (neuron0x1f39270()*-0.0876738);
}

double NNfunction_sb_uLsR::synapse0x1f43280() {
   return (neuron0x1f395b0()*-0.0315874);
}

double NNfunction_sb_uLsR::synapse0x1f432c0() {
   return (neuron0x1f398f0()*-0.0907458);
}

double NNfunction_sb_uLsR::synapse0x1f43300() {
   return (neuron0x1f39c30()*-0.0874114);
}

double NNfunction_sb_uLsR::synapse0x1f43340() {
   return (neuron0x1f39f70()*0.305218);
}

double NNfunction_sb_uLsR::synapse0x1f43380() {
   return (neuron0x1f3a2b0()*-0.325551);
}

double NNfunction_sb_uLsR::synapse0x1f433c0() {
   return (neuron0x1f3a5f0()*0.292657);
}

double NNfunction_sb_uLsR::synapse0x1f43400() {
   return (neuron0x1f3a930()*0.625465);
}

double NNfunction_sb_uLsR::synapse0x1f43440() {
   return (neuron0x1f3ac70()*0.0039339);
}

double NNfunction_sb_uLsR::synapse0x1f43480() {
   return (neuron0x1f3afb0()*-0.0151561);
}

double NNfunction_sb_uLsR::synapse0x1f434c0() {
   return (neuron0x1f3b2f0()*-0.0165339);
}

double NNfunction_sb_uLsR::synapse0x1f43500() {
   return (neuron0x1f3b630()*-0.0205723);
}

double NNfunction_sb_uLsR::synapse0x1f42f90() {
   return (neuron0x1f3b970()*0.0802331);
}

double NNfunction_sb_uLsR::synapse0x1f42fd0() {
   return (neuron0x1f3bed0()*-0.177655);
}

double NNfunction_sb_uLsR::synapse0x1f43650() {
   return (neuron0x1f3c0f0()*0.514924);
}

double NNfunction_sb_uLsR::synapse0x1f43690() {
   return (neuron0x1f3c430()*-0.080305);
}

double NNfunction_sb_uLsR::synapse0x1f436d0() {
   return (neuron0x1f3c770()*0.127484);
}

double NNfunction_sb_uLsR::synapse0x1f43710() {
   return (neuron0x1f3cab0()*0.168141);
}

double NNfunction_sb_uLsR::synapse0x1f43750() {
   return (neuron0x1f3cdf0()*-0.241981);
}

double NNfunction_sb_uLsR::synapse0x1f43790() {
   return (neuron0x1f3d130()*0.0920884);
}

double NNfunction_sb_uLsR::synapse0x1f43b10() {
   return (neuron0x1f38570()*0.00146212);
}

double NNfunction_sb_uLsR::synapse0x1f43b50() {
   return (neuron0x1f388b0()*0.0176787);
}

double NNfunction_sb_uLsR::synapse0x1f43b90() {
   return (neuron0x1f38bf0()*0.173083);
}

double NNfunction_sb_uLsR::synapse0x1f43bd0() {
   return (neuron0x1f38f30()*-0.0129162);
}

double NNfunction_sb_uLsR::synapse0x1f43c10() {
   return (neuron0x1f39270()*0.0152011);
}

double NNfunction_sb_uLsR::synapse0x1f43c50() {
   return (neuron0x1f395b0()*-0.00960193);
}

double NNfunction_sb_uLsR::synapse0x1f43c90() {
   return (neuron0x1f398f0()*-0.0336692);
}

double NNfunction_sb_uLsR::synapse0x1f43cd0() {
   return (neuron0x1f39c30()*-0.00894111);
}

double NNfunction_sb_uLsR::synapse0x1f43d10() {
   return (neuron0x1f39f70()*-0.0164388);
}

double NNfunction_sb_uLsR::synapse0x1f43d50() {
   return (neuron0x1f3a2b0()*0.0196572);
}

double NNfunction_sb_uLsR::synapse0x1f43d90() {
   return (neuron0x1f3a5f0()*0.0293372);
}

double NNfunction_sb_uLsR::synapse0x1f43dd0() {
   return (neuron0x1f3a930()*-0.347869);
}

double NNfunction_sb_uLsR::synapse0x1f43e10() {
   return (neuron0x1f3ac70()*-0.437977);
}

double NNfunction_sb_uLsR::synapse0x1f43e50() {
   return (neuron0x1f3afb0()*0.0489976);
}

double NNfunction_sb_uLsR::synapse0x1f43e90() {
   return (neuron0x1f3b2f0()*-0.262587);
}

double NNfunction_sb_uLsR::synapse0x1f43ed0() {
   return (neuron0x1f3b630()*-0.218818);
}

double NNfunction_sb_uLsR::synapse0x1f43960() {
   return (neuron0x1f3b970()*0.0105391);
}

double NNfunction_sb_uLsR::synapse0x1f439a0() {
   return (neuron0x1f3bed0()*-0.210027);
}

double NNfunction_sb_uLsR::synapse0x1f40730() {
   return (neuron0x1f3c0f0()*-0.186895);
}

double NNfunction_sb_uLsR::synapse0x1f40770() {
   return (neuron0x1f3c430()*0.0291588);
}

double NNfunction_sb_uLsR::synapse0x1f407b0() {
   return (neuron0x1f3c770()*-0.0190536);
}

double NNfunction_sb_uLsR::synapse0x1f407f0() {
   return (neuron0x1f3cab0()*-0.0453867);
}

double NNfunction_sb_uLsR::synapse0x1f40830() {
   return (neuron0x1f3cdf0()*0.0344667);
}

double NNfunction_sb_uLsR::synapse0x1f40870() {
   return (neuron0x1f3d130()*-0.0240569);
}

double NNfunction_sb_uLsR::synapse0x1f40bf0() {
   return (neuron0x1f38570()*0.243124);
}

double NNfunction_sb_uLsR::synapse0x1f40c30() {
   return (neuron0x1f388b0()*-0.681681);
}

double NNfunction_sb_uLsR::synapse0x1f40c70() {
   return (neuron0x1f38bf0()*-0.319802);
}

double NNfunction_sb_uLsR::synapse0x1f40cb0() {
   return (neuron0x1f38f30()*-0.241498);
}

double NNfunction_sb_uLsR::synapse0x1f40cf0() {
   return (neuron0x1f39270()*-0.347847);
}

double NNfunction_sb_uLsR::synapse0x1f40d30() {
   return (neuron0x1f395b0()*-0.146169);
}

double NNfunction_sb_uLsR::synapse0x1f40d70() {
   return (neuron0x1f398f0()*0.371991);
}

double NNfunction_sb_uLsR::synapse0x1f40db0() {
   return (neuron0x1f39c30()*0.446468);
}

double NNfunction_sb_uLsR::synapse0x1f40df0() {
   return (neuron0x1f39f70()*0.506758);
}

double NNfunction_sb_uLsR::synapse0x1f40e30() {
   return (neuron0x1f3a2b0()*0.179206);
}

double NNfunction_sb_uLsR::synapse0x1f40e70() {
   return (neuron0x1f3a5f0()*0.222658);
}

double NNfunction_sb_uLsR::synapse0x1f40eb0() {
   return (neuron0x1f3a930()*-0.0200369);
}

double NNfunction_sb_uLsR::synapse0x1f40ef0() {
   return (neuron0x1f3ac70()*0.151862);
}

double NNfunction_sb_uLsR::synapse0x1f45030() {
   return (neuron0x1f3afb0()*0.242732);
}

double NNfunction_sb_uLsR::synapse0x1f45070() {
   return (neuron0x1f3b2f0()*0.0283832);
}

double NNfunction_sb_uLsR::synapse0x1f450b0() {
   return (neuron0x1f3b630()*-0.854089);
}

double NNfunction_sb_uLsR::synapse0x1f40a40() {
   return (neuron0x1f3b970()*-0.486395);
}

double NNfunction_sb_uLsR::synapse0x1f40a80() {
   return (neuron0x1f3bed0()*-0.333167);
}

double NNfunction_sb_uLsR::synapse0x1f45200() {
   return (neuron0x1f3c0f0()*-0.0766935);
}

double NNfunction_sb_uLsR::synapse0x1f45240() {
   return (neuron0x1f3c430()*-0.0429793);
}

double NNfunction_sb_uLsR::synapse0x1f45280() {
   return (neuron0x1f3c770()*0.397923);
}

double NNfunction_sb_uLsR::synapse0x1f452c0() {
   return (neuron0x1f3cab0()*0.0298271);
}

double NNfunction_sb_uLsR::synapse0x1f45300() {
   return (neuron0x1f3cdf0()*0.315808);
}

double NNfunction_sb_uLsR::synapse0x1f45340() {
   return (neuron0x1f3d130()*-0.368645);
}

double NNfunction_sb_uLsR::synapse0x1f456c0() {
   return (neuron0x1f38570()*0.0377265);
}

double NNfunction_sb_uLsR::synapse0x1f45700() {
   return (neuron0x1f388b0()*0.024881);
}

double NNfunction_sb_uLsR::synapse0x1f45740() {
   return (neuron0x1f38bf0()*0.0212288);
}

double NNfunction_sb_uLsR::synapse0x1f45780() {
   return (neuron0x1f38f30()*-20.0883);
}

double NNfunction_sb_uLsR::synapse0x1f457c0() {
   return (neuron0x1f39270()*0.00478307);
}

double NNfunction_sb_uLsR::synapse0x1f45800() {
   return (neuron0x1f395b0()*0.0230932);
}

double NNfunction_sb_uLsR::synapse0x1f45840() {
   return (neuron0x1f398f0()*-0.00628418);
}

double NNfunction_sb_uLsR::synapse0x1f45880() {
   return (neuron0x1f39c30()*0.0112687);
}

double NNfunction_sb_uLsR::synapse0x1f458c0() {
   return (neuron0x1f39f70()*0.00542741);
}

double NNfunction_sb_uLsR::synapse0x1f45900() {
   return (neuron0x1f3a2b0()*0.00375199);
}

double NNfunction_sb_uLsR::synapse0x1f45940() {
   return (neuron0x1f3a5f0()*-0.0029538);
}

double NNfunction_sb_uLsR::synapse0x1f45980() {
   return (neuron0x1f3a930()*0.113527);
}

double NNfunction_sb_uLsR::synapse0x1f459c0() {
   return (neuron0x1f3ac70()*0.0393741);
}

double NNfunction_sb_uLsR::synapse0x1f45a00() {
   return (neuron0x1f3afb0()*-0.0241117);
}

double NNfunction_sb_uLsR::synapse0x1f45a40() {
   return (neuron0x1f3b2f0()*-0.0306346);
}

double NNfunction_sb_uLsR::synapse0x1f45a80() {
   return (neuron0x1f3b630()*0.0100357);
}

double NNfunction_sb_uLsR::synapse0x1f45510() {
   return (neuron0x1f3b970()*0.00479117);
}

double NNfunction_sb_uLsR::synapse0x1f45550() {
   return (neuron0x1f3bed0()*-0.00407389);
}

double NNfunction_sb_uLsR::synapse0x1f45bd0() {
   return (neuron0x1f3c0f0()*0.0221528);
}

double NNfunction_sb_uLsR::synapse0x1f45c10() {
   return (neuron0x1f3c430()*-0.0516246);
}

double NNfunction_sb_uLsR::synapse0x1f45c50() {
   return (neuron0x1f3c770()*-0.00426011);
}

double NNfunction_sb_uLsR::synapse0x1f45c90() {
   return (neuron0x1f3cab0()*0.0238828);
}

double NNfunction_sb_uLsR::synapse0x1f45cd0() {
   return (neuron0x1f3cdf0()*-0.00258672);
}

double NNfunction_sb_uLsR::synapse0x1f45d10() {
   return (neuron0x1f3d130()*-0.0346381);
}

double NNfunction_sb_uLsR::synapse0x1f46090() {
   return (neuron0x1f38570()*0.0283328);
}

double NNfunction_sb_uLsR::synapse0x1f460d0() {
   return (neuron0x1f388b0()*0.104885);
}

double NNfunction_sb_uLsR::synapse0x1f46110() {
   return (neuron0x1f38bf0()*-0.0480698);
}

double NNfunction_sb_uLsR::synapse0x1f46150() {
   return (neuron0x1f38f30()*2.51189);
}

double NNfunction_sb_uLsR::synapse0x1f46190() {
   return (neuron0x1f39270()*0.0189981);
}

double NNfunction_sb_uLsR::synapse0x1f461d0() {
   return (neuron0x1f395b0()*0.00440903);
}

double NNfunction_sb_uLsR::synapse0x1f46210() {
   return (neuron0x1f398f0()*-0.0430687);
}

double NNfunction_sb_uLsR::synapse0x1f46250() {
   return (neuron0x1f39c30()*-0.000627386);
}

double NNfunction_sb_uLsR::synapse0x1f46290() {
   return (neuron0x1f39f70()*-0.0182449);
}

double NNfunction_sb_uLsR::synapse0x1f462d0() {
   return (neuron0x1f3a2b0()*-0.0471967);
}

double NNfunction_sb_uLsR::synapse0x1f46310() {
   return (neuron0x1f3a5f0()*-0.00201064);
}

double NNfunction_sb_uLsR::synapse0x1f46350() {
   return (neuron0x1f3a930()*-0.424911);
}

double NNfunction_sb_uLsR::synapse0x1f46390() {
   return (neuron0x1f3ac70()*0.0670374);
}

double NNfunction_sb_uLsR::synapse0x1f463d0() {
   return (neuron0x1f3afb0()*-0.0152665);
}

double NNfunction_sb_uLsR::synapse0x1f46410() {
   return (neuron0x1f3b2f0()*0.0159483);
}

double NNfunction_sb_uLsR::synapse0x1f46450() {
   return (neuron0x1f3b630()*0.00036755);
}

double NNfunction_sb_uLsR::synapse0x1f45ee0() {
   return (neuron0x1f3b970()*0.0753945);
}

double NNfunction_sb_uLsR::synapse0x1f45f20() {
   return (neuron0x1f3bed0()*0.0916997);
}

double NNfunction_sb_uLsR::synapse0x1f465a0() {
   return (neuron0x1f3c0f0()*-0.482613);
}

double NNfunction_sb_uLsR::synapse0x1f465e0() {
   return (neuron0x1f3c430()*-0.047313);
}

double NNfunction_sb_uLsR::synapse0x1f46620() {
   return (neuron0x1f3c770()*-0.00563885);
}

double NNfunction_sb_uLsR::synapse0x1f46660() {
   return (neuron0x1f3cab0()*-0.00419604);
}

double NNfunction_sb_uLsR::synapse0x1f466a0() {
   return (neuron0x1f3cdf0()*-0.0473349);
}

double NNfunction_sb_uLsR::synapse0x1f466e0() {
   return (neuron0x1f3d130()*-0.0539558);
}

double NNfunction_sb_uLsR::synapse0x1f46a60() {
   return (neuron0x1f38570()*-0.123585);
}

double NNfunction_sb_uLsR::synapse0x1f46aa0() {
   return (neuron0x1f388b0()*0.247658);
}

double NNfunction_sb_uLsR::synapse0x1f46ae0() {
   return (neuron0x1f38bf0()*0.182339);
}

double NNfunction_sb_uLsR::synapse0x1f46b20() {
   return (neuron0x1f38f30()*0.562868);
}

double NNfunction_sb_uLsR::synapse0x1f46b60() {
   return (neuron0x1f39270()*0.426314);
}

double NNfunction_sb_uLsR::synapse0x1f46ba0() {
   return (neuron0x1f395b0()*0.261665);
}

double NNfunction_sb_uLsR::synapse0x1f46be0() {
   return (neuron0x1f398f0()*1.15477);
}

double NNfunction_sb_uLsR::synapse0x1f46c20() {
   return (neuron0x1f39c30()*-0.805905);
}

double NNfunction_sb_uLsR::synapse0x1f46c60() {
   return (neuron0x1f39f70()*-0.0296634);
}

double NNfunction_sb_uLsR::synapse0x1f46ca0() {
   return (neuron0x1f3a2b0()*-0.0608153);
}

double NNfunction_sb_uLsR::synapse0x1f46ce0() {
   return (neuron0x1f3a5f0()*-0.183195);
}

double NNfunction_sb_uLsR::synapse0x1f46d20() {
   return (neuron0x1f3a930()*-0.812284);
}

double NNfunction_sb_uLsR::synapse0x1f46d60() {
   return (neuron0x1f3ac70()*-0.522234);
}

double NNfunction_sb_uLsR::synapse0x1f46da0() {
   return (neuron0x1f3afb0()*-0.00147401);
}

double NNfunction_sb_uLsR::synapse0x1f46de0() {
   return (neuron0x1f3b2f0()*-0.76525);
}

double NNfunction_sb_uLsR::synapse0x1f46e20() {
   return (neuron0x1f3b630()*-0.244087);
}

double NNfunction_sb_uLsR::synapse0x1f468b0() {
   return (neuron0x1f3b970()*0.306469);
}

double NNfunction_sb_uLsR::synapse0x1f468f0() {
   return (neuron0x1f3bed0()*-0.0754436);
}

double NNfunction_sb_uLsR::synapse0x1f46f70() {
   return (neuron0x1f3c0f0()*-0.835248);
}

double NNfunction_sb_uLsR::synapse0x1f46fb0() {
   return (neuron0x1f3c430()*-0.165069);
}

double NNfunction_sb_uLsR::synapse0x1f46ff0() {
   return (neuron0x1f3c770()*0.0961401);
}

double NNfunction_sb_uLsR::synapse0x1f47030() {
   return (neuron0x1f3cab0()*0.195718);
}

double NNfunction_sb_uLsR::synapse0x1f47070() {
   return (neuron0x1f3cdf0()*0.195401);
}

double NNfunction_sb_uLsR::synapse0x1f470b0() {
   return (neuron0x1f3d130()*-0.185291);
}

double NNfunction_sb_uLsR::synapse0x1f47430() {
   return (neuron0x1f38570()*-0.182341);
}

double NNfunction_sb_uLsR::synapse0x1f38790() {
   return (neuron0x1f388b0()*-0.433095);
}

double NNfunction_sb_uLsR::synapse0x1f387d0() {
   return (neuron0x1f38bf0()*0.0939194);
}

double NNfunction_sb_uLsR::synapse0x1f38ad0() {
   return (neuron0x1f38f30()*0.0163384);
}

double NNfunction_sb_uLsR::synapse0x1f38b10() {
   return (neuron0x1f39270()*-0.431992);
}

double NNfunction_sb_uLsR::synapse0x1f38e10() {
   return (neuron0x1f395b0()*0.391095);
}

double NNfunction_sb_uLsR::synapse0x1f38e50() {
   return (neuron0x1f398f0()*0.422141);
}

double NNfunction_sb_uLsR::synapse0x1f39150() {
   return (neuron0x1f39c30()*0.0242396);
}

double NNfunction_sb_uLsR::synapse0x1f39190() {
   return (neuron0x1f39f70()*-0.013019);
}

double NNfunction_sb_uLsR::synapse0x1f39490() {
   return (neuron0x1f3a2b0()*-0.129188);
}

double NNfunction_sb_uLsR::synapse0x1f394d0() {
   return (neuron0x1f3a5f0()*-0.255321);
}

double NNfunction_sb_uLsR::synapse0x1f397d0() {
   return (neuron0x1f3a930()*-0.523626);
}

double NNfunction_sb_uLsR::synapse0x1f39810() {
   return (neuron0x1f3ac70()*-0.250766);
}

double NNfunction_sb_uLsR::synapse0x1f39b10() {
   return (neuron0x1f3afb0()*-0.331885);
}

double NNfunction_sb_uLsR::synapse0x1f39b50() {
   return (neuron0x1f3b2f0()*-0.236013);
}

double NNfunction_sb_uLsR::synapse0x1f39e50() {
   return (neuron0x1f3b630()*0.180276);
}

double NNfunction_sb_uLsR::synapse0x1f39e90() {
   return (neuron0x1f3b970()*0.239224);
}

double NNfunction_sb_uLsR::synapse0x1f3a190() {
   return (neuron0x1f3bed0()*-0.359755);
}

double NNfunction_sb_uLsR::synapse0x1f3a1d0() {
   return (neuron0x1f3c0f0()*-0.249478);
}

double NNfunction_sb_uLsR::synapse0x1f3a4d0() {
   return (neuron0x1f3c430()*0.200942);
}

double NNfunction_sb_uLsR::synapse0x1f3a510() {
   return (neuron0x1f3c770()*-0.644265);
}

double NNfunction_sb_uLsR::synapse0x1f3a810() {
   return (neuron0x1f3cab0()*-0.424123);
}

double NNfunction_sb_uLsR::synapse0x1f3a850() {
   return (neuron0x1f3cdf0()*-0.185052);
}

double NNfunction_sb_uLsR::synapse0x1f3ab50() {
   return (neuron0x1f3d130()*0.178635);
}

double NNfunction_sb_uLsR::synapse0x1f3ab90() {
   return (neuron0x1f38570()*0.350827);
}

double NNfunction_sb_uLsR::synapse0x1f3b850() {
   return (neuron0x1f388b0()*0.604432);
}

double NNfunction_sb_uLsR::synapse0x1f3b890() {
   return (neuron0x1f38bf0()*0.120138);
}

double NNfunction_sb_uLsR::synapse0x1f47280() {
   return (neuron0x1f38f30()*-0.150621);
}

double NNfunction_sb_uLsR::synapse0x1f472c0() {
   return (neuron0x1f39270()*0.0673971);
}

double NNfunction_sb_uLsR::synapse0x1f3bb90() {
   return (neuron0x1f395b0()*-0.273662);
}

double NNfunction_sb_uLsR::synapse0x1f3bbd0() {
   return (neuron0x1f398f0()*-0.0301253);
}

double NNfunction_sb_uLsR::synapse0x1ce9b60() {
   return (neuron0x1f39c30()*-0.0101088);
}

double NNfunction_sb_uLsR::synapse0x1ce9ba0() {
   return (neuron0x1f39f70()*0.232358);
}

double NNfunction_sb_uLsR::synapse0x1f3c310() {
   return (neuron0x1f3a2b0()*0.301806);
}

double NNfunction_sb_uLsR::synapse0x1f3c350() {
   return (neuron0x1f3a5f0()*-0.680722);
}

double NNfunction_sb_uLsR::synapse0x1f3c650() {
   return (neuron0x1f3a930()*-0.095425);
}

double NNfunction_sb_uLsR::synapse0x1f3c690() {
   return (neuron0x1f3ac70()*-0.534522);
}

double NNfunction_sb_uLsR::synapse0x1f3c990() {
   return (neuron0x1f3afb0()*-0.0229659);
}

double NNfunction_sb_uLsR::synapse0x1f3c9d0() {
   return (neuron0x1f3b2f0()*0.80225);
}

double NNfunction_sb_uLsR::synapse0x1f3ccd0() {
   return (neuron0x1f3b630()*0.266004);
}

double NNfunction_sb_uLsR::synapse0x1f3cd10() {
   return (neuron0x1f3b970()*-0.545973);
}

double NNfunction_sb_uLsR::synapse0x1f3d010() {
   return (neuron0x1f3bed0()*0.961279);
}

double NNfunction_sb_uLsR::synapse0x1f3d050() {
   return (neuron0x1f3c0f0()*0.134775);
}

double NNfunction_sb_uLsR::synapse0x1f3d350() {
   return (neuron0x1f3c430()*-0.0247213);
}

double NNfunction_sb_uLsR::synapse0x1f3d390() {
   return (neuron0x1f3c770()*0.639391);
}

double NNfunction_sb_uLsR::synapse0x1f3ae90() {
   return (neuron0x1f3cab0()*-0.340044);
}

double NNfunction_sb_uLsR::synapse0x1f3aed0() {
   return (neuron0x1f3cdf0()*-0.441259);
}

double NNfunction_sb_uLsR::synapse0x1f491a0() {
   return (neuron0x1f3d130()*0.192316);
}

double NNfunction_sb_uLsR::synapse0x1f49520() {
   return (neuron0x1f38570()*0.0501976);
}

double NNfunction_sb_uLsR::synapse0x1f49560() {
   return (neuron0x1f388b0()*-0.0117221);
}

double NNfunction_sb_uLsR::synapse0x1f495a0() {
   return (neuron0x1f38bf0()*0.0785908);
}

double NNfunction_sb_uLsR::synapse0x1f495e0() {
   return (neuron0x1f38f30()*-0.0194094);
}

double NNfunction_sb_uLsR::synapse0x1f49620() {
   return (neuron0x1f39270()*0.0221813);
}

double NNfunction_sb_uLsR::synapse0x1f49660() {
   return (neuron0x1f395b0()*-0.00451826);
}

double NNfunction_sb_uLsR::synapse0x1f496a0() {
   return (neuron0x1f398f0()*0.0344089);
}

double NNfunction_sb_uLsR::synapse0x1f496e0() {
   return (neuron0x1f39c30()*-0.0238858);
}

double NNfunction_sb_uLsR::synapse0x1f49720() {
   return (neuron0x1f39f70()*-0.0822204);
}

double NNfunction_sb_uLsR::synapse0x1f49760() {
   return (neuron0x1f3a2b0()*-0.0671456);
}

double NNfunction_sb_uLsR::synapse0x1f497a0() {
   return (neuron0x1f3a5f0()*-0.179486);
}

double NNfunction_sb_uLsR::synapse0x1f497e0() {
   return (neuron0x1f3a930()*0.55289);
}

double NNfunction_sb_uLsR::synapse0x1f49820() {
   return (neuron0x1f3ac70()*0.00731668);
}

double NNfunction_sb_uLsR::synapse0x1f49860() {
   return (neuron0x1f3afb0()*0.0317866);
}

double NNfunction_sb_uLsR::synapse0x1f498a0() {
   return (neuron0x1f3b2f0()*0.0515539);
}

double NNfunction_sb_uLsR::synapse0x1f498e0() {
   return (neuron0x1f3b630()*0.0553569);
}

double NNfunction_sb_uLsR::synapse0x1f49370() {
   return (neuron0x1f3b970()*0.00994942);
}

double NNfunction_sb_uLsR::synapse0x1f493b0() {
   return (neuron0x1f3bed0()*0.0312385);
}

double NNfunction_sb_uLsR::synapse0x1f49a30() {
   return (neuron0x1f3c0f0()*0.400571);
}

double NNfunction_sb_uLsR::synapse0x1f49a70() {
   return (neuron0x1f3c430()*-0.0104221);
}

double NNfunction_sb_uLsR::synapse0x1f49ab0() {
   return (neuron0x1f3c770()*0.0158684);
}

double NNfunction_sb_uLsR::synapse0x1f49af0() {
   return (neuron0x1f3cab0()*0.0235803);
}

double NNfunction_sb_uLsR::synapse0x1f49b30() {
   return (neuron0x1f3cdf0()*0.0399811);
}

double NNfunction_sb_uLsR::synapse0x1f49b70() {
   return (neuron0x1f3d130()*-0.00493274);
}

double NNfunction_sb_uLsR::synapse0x1f49ef0() {
   return (neuron0x1f38570()*-0.287549);
}

double NNfunction_sb_uLsR::synapse0x1f49f30() {
   return (neuron0x1f388b0()*-0.109708);
}

double NNfunction_sb_uLsR::synapse0x1f49f70() {
   return (neuron0x1f38bf0()*-0.621644);
}

double NNfunction_sb_uLsR::synapse0x1f49fb0() {
   return (neuron0x1f38f30()*0.426819);
}

double NNfunction_sb_uLsR::synapse0x1f49ff0() {
   return (neuron0x1f39270()*-0.0850068);
}

double NNfunction_sb_uLsR::synapse0x1f4a030() {
   return (neuron0x1f395b0()*0.0369162);
}

double NNfunction_sb_uLsR::synapse0x1f4a070() {
   return (neuron0x1f398f0()*0.0591953);
}

double NNfunction_sb_uLsR::synapse0x1f4a0b0() {
   return (neuron0x1f39c30()*0.530204);
}

double NNfunction_sb_uLsR::synapse0x1f4a0f0() {
   return (neuron0x1f39f70()*0.134558);
}

double NNfunction_sb_uLsR::synapse0x1f4a130() {
   return (neuron0x1f3a2b0()*-1.13496);
}

double NNfunction_sb_uLsR::synapse0x1f4a170() {
   return (neuron0x1f3a5f0()*-0.167484);
}

double NNfunction_sb_uLsR::synapse0x1f4a1b0() {
   return (neuron0x1f3a930()*-0.687657);
}

double NNfunction_sb_uLsR::synapse0x1f4a1f0() {
   return (neuron0x1f3ac70()*0.129122);
}

double NNfunction_sb_uLsR::synapse0x1f4a230() {
   return (neuron0x1f3afb0()*0.0454252);
}

double NNfunction_sb_uLsR::synapse0x1f4a270() {
   return (neuron0x1f3b2f0()*-0.196541);
}

double NNfunction_sb_uLsR::synapse0x1f4a2b0() {
   return (neuron0x1f3b630()*-0.266299);
}

double NNfunction_sb_uLsR::synapse0x1f49d40() {
   return (neuron0x1f3b970()*0.080739);
}

double NNfunction_sb_uLsR::synapse0x1f49d80() {
   return (neuron0x1f3bed0()*-0.351347);
}

double NNfunction_sb_uLsR::synapse0x1f4a400() {
   return (neuron0x1f3c0f0()*-0.10667);
}

double NNfunction_sb_uLsR::synapse0x1f4a440() {
   return (neuron0x1f3c430()*-0.013684);
}

double NNfunction_sb_uLsR::synapse0x1f4a480() {
   return (neuron0x1f3c770()*-0.141406);
}

double NNfunction_sb_uLsR::synapse0x1f4a4c0() {
   return (neuron0x1f3cab0()*-0.221824);
}

double NNfunction_sb_uLsR::synapse0x1f4a500() {
   return (neuron0x1f3cdf0()*0.0972075);
}

double NNfunction_sb_uLsR::synapse0x1f4a540() {
   return (neuron0x1f3d130()*-0.357801);
}

double NNfunction_sb_uLsR::synapse0x1f4a8c0() {
   return (neuron0x1f38570()*0.0244542);
}

double NNfunction_sb_uLsR::synapse0x1f4a900() {
   return (neuron0x1f388b0()*0.0682696);
}

double NNfunction_sb_uLsR::synapse0x1f4a940() {
   return (neuron0x1f38bf0()*-0.144311);
}

double NNfunction_sb_uLsR::synapse0x1f4a980() {
   return (neuron0x1f38f30()*-0.957142);
}

double NNfunction_sb_uLsR::synapse0x1f4a9c0() {
   return (neuron0x1f39270()*-0.0538633);
}

double NNfunction_sb_uLsR::synapse0x1f4aa00() {
   return (neuron0x1f395b0()*-0.0488615);
}

double NNfunction_sb_uLsR::synapse0x1f4aa40() {
   return (neuron0x1f398f0()*0.159144);
}

double NNfunction_sb_uLsR::synapse0x1f4aa80() {
   return (neuron0x1f39c30()*0.0436927);
}

double NNfunction_sb_uLsR::synapse0x1f4aac0() {
   return (neuron0x1f39f70()*0.00699293);
}

double NNfunction_sb_uLsR::synapse0x1f4ab00() {
   return (neuron0x1f3a2b0()*-0.053113);
}

double NNfunction_sb_uLsR::synapse0x1f4ab40() {
   return (neuron0x1f3a5f0()*-0.10936);
}

double NNfunction_sb_uLsR::synapse0x1f4ab80() {
   return (neuron0x1f3a930()*0.24989);
}

double NNfunction_sb_uLsR::synapse0x1f4abc0() {
   return (neuron0x1f3ac70()*0.0810503);
}

double NNfunction_sb_uLsR::synapse0x1f4ac00() {
   return (neuron0x1f3afb0()*0.0171882);
}

double NNfunction_sb_uLsR::synapse0x1f4ac40() {
   return (neuron0x1f3b2f0()*-0.229247);
}

double NNfunction_sb_uLsR::synapse0x1f4ac80() {
   return (neuron0x1f3b630()*0.217295);
}

double NNfunction_sb_uLsR::synapse0x1f4a710() {
   return (neuron0x1f3b970()*0.162393);
}

double NNfunction_sb_uLsR::synapse0x1f4a750() {
   return (neuron0x1f3bed0()*0.307808);
}

double NNfunction_sb_uLsR::synapse0x1f4add0() {
   return (neuron0x1f3c0f0()*0.0880536);
}

double NNfunction_sb_uLsR::synapse0x1f4ae10() {
   return (neuron0x1f3c430()*-0.180754);
}

double NNfunction_sb_uLsR::synapse0x1f4ae50() {
   return (neuron0x1f3c770()*0.214797);
}

double NNfunction_sb_uLsR::synapse0x1f4ae90() {
   return (neuron0x1f3cab0()*0.0801952);
}

double NNfunction_sb_uLsR::synapse0x1f4aed0() {
   return (neuron0x1f3cdf0()*0.0216869);
}

double NNfunction_sb_uLsR::synapse0x1f4af10() {
   return (neuron0x1f3d130()*-0.23792);
}

double NNfunction_sb_uLsR::synapse0x1f4b290() {
   return (neuron0x1f38570()*0.00803124);
}

double NNfunction_sb_uLsR::synapse0x1f4b2d0() {
   return (neuron0x1f388b0()*0.00981034);
}

double NNfunction_sb_uLsR::synapse0x1f4b310() {
   return (neuron0x1f38bf0()*0.0292765);
}

double NNfunction_sb_uLsR::synapse0x1f4b350() {
   return (neuron0x1f38f30()*-5.56182);
}

double NNfunction_sb_uLsR::synapse0x1f4b390() {
   return (neuron0x1f39270()*0.00399574);
}

double NNfunction_sb_uLsR::synapse0x1f4b3d0() {
   return (neuron0x1f395b0()*-0.0017987);
}

double NNfunction_sb_uLsR::synapse0x1f4b410() {
   return (neuron0x1f398f0()*0.0202775);
}

double NNfunction_sb_uLsR::synapse0x1f4b450() {
   return (neuron0x1f39c30()*0.0282352);
}

double NNfunction_sb_uLsR::synapse0x1f4b490() {
   return (neuron0x1f39f70()*-0.0224079);
}

double NNfunction_sb_uLsR::synapse0x1f4b4d0() {
   return (neuron0x1f3a2b0()*-0.0393422);
}

double NNfunction_sb_uLsR::synapse0x1f4b510() {
   return (neuron0x1f3a5f0()*-0.012477);
}

double NNfunction_sb_uLsR::synapse0x1f4b550() {
   return (neuron0x1f3a930()*0.00685665);
}

double NNfunction_sb_uLsR::synapse0x1f4b590() {
   return (neuron0x1f3ac70()*-0.0427566);
}

double NNfunction_sb_uLsR::synapse0x1f4b5d0() {
   return (neuron0x1f3afb0()*-0.0391998);
}

double NNfunction_sb_uLsR::synapse0x1f4b610() {
   return (neuron0x1f3b2f0()*0.0103017);
}

double NNfunction_sb_uLsR::synapse0x1f4b650() {
   return (neuron0x1f3b630()*-0.0161325);
}

double NNfunction_sb_uLsR::synapse0x1f4b0e0() {
   return (neuron0x1f3b970()*-0.0241138);
}

double NNfunction_sb_uLsR::synapse0x1f4b120() {
   return (neuron0x1f3bed0()*-0.0252062);
}

double NNfunction_sb_uLsR::synapse0x1f4b7a0() {
   return (neuron0x1f3c0f0()*0.0759334);
}

double NNfunction_sb_uLsR::synapse0x1f4b7e0() {
   return (neuron0x1f3c430()*-0.00600513);
}

double NNfunction_sb_uLsR::synapse0x1f4b820() {
   return (neuron0x1f3c770()*0.0120218);
}

double NNfunction_sb_uLsR::synapse0x1f4b860() {
   return (neuron0x1f3cab0()*0.00608097);
}

double NNfunction_sb_uLsR::synapse0x1f4b8a0() {
   return (neuron0x1f3cdf0()*0.0353516);
}

double NNfunction_sb_uLsR::synapse0x1f4b8e0() {
   return (neuron0x1f3d130()*-0.0291433);
}

double NNfunction_sb_uLsR::synapse0x1f4bc60() {
   return (neuron0x1f38570()*-0.105353);
}

double NNfunction_sb_uLsR::synapse0x1f4bca0() {
   return (neuron0x1f388b0()*0.239483);
}

double NNfunction_sb_uLsR::synapse0x1f4bce0() {
   return (neuron0x1f38bf0()*-1.0521);
}

double NNfunction_sb_uLsR::synapse0x1f4bd20() {
   return (neuron0x1f38f30()*0.505259);
}

double NNfunction_sb_uLsR::synapse0x1f4bd60() {
   return (neuron0x1f39270()*-0.23102);
}

double NNfunction_sb_uLsR::synapse0x1f4bda0() {
   return (neuron0x1f395b0()*0.14925);
}

double NNfunction_sb_uLsR::synapse0x1f4bde0() {
   return (neuron0x1f398f0()*0.211172);
}

double NNfunction_sb_uLsR::synapse0x1f4be20() {
   return (neuron0x1f39c30()*-0.0542292);
}

double NNfunction_sb_uLsR::synapse0x1f4be60() {
   return (neuron0x1f39f70()*-0.0867146);
}

double NNfunction_sb_uLsR::synapse0x1f44020() {
   return (neuron0x1f3a2b0()*0.0102494);
}

double NNfunction_sb_uLsR::synapse0x1f44060() {
   return (neuron0x1f3a5f0()*-0.0229039);
}

double NNfunction_sb_uLsR::synapse0x1f440a0() {
   return (neuron0x1f3a930()*0.497227);
}

double NNfunction_sb_uLsR::synapse0x1f440e0() {
   return (neuron0x1f3ac70()*0.157842);
}

double NNfunction_sb_uLsR::synapse0x1f44120() {
   return (neuron0x1f3afb0()*0.0276224);
}

double NNfunction_sb_uLsR::synapse0x1f44160() {
   return (neuron0x1f3b2f0()*0.182684);
}

double NNfunction_sb_uLsR::synapse0x1f441a0() {
   return (neuron0x1f3b630()*0.215161);
}

double NNfunction_sb_uLsR::synapse0x1f4bab0() {
   return (neuron0x1f3b970()*-0.269781);
}

double NNfunction_sb_uLsR::synapse0x1f4baf0() {
   return (neuron0x1f3bed0()*0.0768984);
}

double NNfunction_sb_uLsR::synapse0x1f442f0() {
   return (neuron0x1f3c0f0()*0.221649);
}

double NNfunction_sb_uLsR::synapse0x1f44330() {
   return (neuron0x1f3c430()*0.104399);
}

double NNfunction_sb_uLsR::synapse0x1f44370() {
   return (neuron0x1f3c770()*-0.31474);
}

double NNfunction_sb_uLsR::synapse0x1f443b0() {
   return (neuron0x1f3cab0()*-0.278578);
}

double NNfunction_sb_uLsR::synapse0x1f443f0() {
   return (neuron0x1f3cdf0()*-0.0227189);
}

double NNfunction_sb_uLsR::synapse0x1f44430() {
   return (neuron0x1f3d130()*-0.0197195);
}

double NNfunction_sb_uLsR::synapse0x1f447b0() {
   return (neuron0x1f38570()*-0.00327665);
}

double NNfunction_sb_uLsR::synapse0x1f447f0() {
   return (neuron0x1f388b0()*-0.243965);
}

double NNfunction_sb_uLsR::synapse0x1f44830() {
   return (neuron0x1f38bf0()*-0.181849);
}

double NNfunction_sb_uLsR::synapse0x1f44870() {
   return (neuron0x1f38f30()*-0.251926);
}

double NNfunction_sb_uLsR::synapse0x1f448b0() {
   return (neuron0x1f39270()*0.0149258);
}

double NNfunction_sb_uLsR::synapse0x1f448f0() {
   return (neuron0x1f395b0()*1.1897);
}

double NNfunction_sb_uLsR::synapse0x1f44930() {
   return (neuron0x1f398f0()*-0.371992);
}

double NNfunction_sb_uLsR::synapse0x1f44970() {
   return (neuron0x1f39c30()*-0.324101);
}

double NNfunction_sb_uLsR::synapse0x1f449b0() {
   return (neuron0x1f39f70()*-0.0259216);
}

double NNfunction_sb_uLsR::synapse0x1f449f0() {
   return (neuron0x1f3a2b0()*-0.179421);
}

double NNfunction_sb_uLsR::synapse0x1f44a30() {
   return (neuron0x1f3a5f0()*0.385641);
}

double NNfunction_sb_uLsR::synapse0x1f44a70() {
   return (neuron0x1f3a930()*0.381018);
}

double NNfunction_sb_uLsR::synapse0x1f44ab0() {
   return (neuron0x1f3ac70()*0.12598);
}

double NNfunction_sb_uLsR::synapse0x1f44af0() {
   return (neuron0x1f3afb0()*0.682241);
}

double NNfunction_sb_uLsR::synapse0x1f44b30() {
   return (neuron0x1f3b2f0()*0.0236183);
}

double NNfunction_sb_uLsR::synapse0x1f44b70() {
   return (neuron0x1f3b630()*0.135833);
}

double NNfunction_sb_uLsR::synapse0x1f44600() {
   return (neuron0x1f3b970()*0.00376153);
}

double NNfunction_sb_uLsR::synapse0x1f44640() {
   return (neuron0x1f3bed0()*-0.220786);
}

double NNfunction_sb_uLsR::synapse0x1f44cc0() {
   return (neuron0x1f3c0f0()*0.737404);
}

double NNfunction_sb_uLsR::synapse0x1f44d00() {
   return (neuron0x1f3c430()*-0.483185);
}

double NNfunction_sb_uLsR::synapse0x1f44d40() {
   return (neuron0x1f3c770()*-0.451114);
}

double NNfunction_sb_uLsR::synapse0x1f44d80() {
   return (neuron0x1f3cab0()*-0.499419);
}

double NNfunction_sb_uLsR::synapse0x1f44dc0() {
   return (neuron0x1f3cdf0()*-0.170662);
}

double NNfunction_sb_uLsR::synapse0x1f44e00() {
   return (neuron0x1f3d130()*-0.0919885);
}

double NNfunction_sb_uLsR::synapse0x1f44fd0() {
   return (neuron0x1f38570()*0.0924136);
}

double NNfunction_sb_uLsR::synapse0x1f4e060() {
   return (neuron0x1f388b0()*-0.00610716);
}

double NNfunction_sb_uLsR::synapse0x1f4e0a0() {
   return (neuron0x1f38bf0()*-0.136483);
}

double NNfunction_sb_uLsR::synapse0x1f4e0e0() {
   return (neuron0x1f38f30()*1.71764);
}

double NNfunction_sb_uLsR::synapse0x1f4e120() {
   return (neuron0x1f39270()*0.0936831);
}

double NNfunction_sb_uLsR::synapse0x1f4e160() {
   return (neuron0x1f395b0()*0.126624);
}

double NNfunction_sb_uLsR::synapse0x1f4e1a0() {
   return (neuron0x1f398f0()*0.0442412);
}

double NNfunction_sb_uLsR::synapse0x1f4e1e0() {
   return (neuron0x1f39c30()*-0.0549747);
}

double NNfunction_sb_uLsR::synapse0x1f4e220() {
   return (neuron0x1f39f70()*0.171494);
}

double NNfunction_sb_uLsR::synapse0x1f4e260() {
   return (neuron0x1f3a2b0()*0.0117814);
}

double NNfunction_sb_uLsR::synapse0x1f4e2a0() {
   return (neuron0x1f3a5f0()*-0.0367729);
}

double NNfunction_sb_uLsR::synapse0x1f4e2e0() {
   return (neuron0x1f3a930()*0.701047);
}

double NNfunction_sb_uLsR::synapse0x1f4e320() {
   return (neuron0x1f3ac70()*-0.0477683);
}

double NNfunction_sb_uLsR::synapse0x1f4e360() {
   return (neuron0x1f3afb0()*-0.0868561);
}

double NNfunction_sb_uLsR::synapse0x1f4e3a0() {
   return (neuron0x1f3b2f0()*-0.109998);
}

double NNfunction_sb_uLsR::synapse0x1f4e3e0() {
   return (neuron0x1f3b630()*0.00532857);
}

double NNfunction_sb_uLsR::synapse0x1f4deb0() {
   return (neuron0x1f3b970()*0.026882);
}

double NNfunction_sb_uLsR::synapse0x1f4def0() {
   return (neuron0x1f3bed0()*0.0981361);
}

double NNfunction_sb_uLsR::synapse0x1f4e530() {
   return (neuron0x1f3c0f0()*-2.24874);
}

double NNfunction_sb_uLsR::synapse0x1f4e570() {
   return (neuron0x1f3c430()*-0.00697842);
}

double NNfunction_sb_uLsR::synapse0x1f4e5b0() {
   return (neuron0x1f3c770()*0.0355729);
}

double NNfunction_sb_uLsR::synapse0x1f4e5f0() {
   return (neuron0x1f3cab0()*-0.00490942);
}

double NNfunction_sb_uLsR::synapse0x1f4e630() {
   return (neuron0x1f3cdf0()*-0.0424835);
}

double NNfunction_sb_uLsR::synapse0x1f4e670() {
   return (neuron0x1f3d130()*0.00761339);
}

double NNfunction_sb_uLsR::synapse0x1f4e9f0() {
   return (neuron0x1f38570()*-0.00163598);
}

double NNfunction_sb_uLsR::synapse0x1f4ea30() {
   return (neuron0x1f388b0()*-0.00263697);
}

double NNfunction_sb_uLsR::synapse0x1f4ea70() {
   return (neuron0x1f38bf0()*0.00416897);
}

double NNfunction_sb_uLsR::synapse0x1f4eab0() {
   return (neuron0x1f38f30()*-0.0653413);
}

double NNfunction_sb_uLsR::synapse0x1f4eaf0() {
   return (neuron0x1f39270()*0.0107014);
}

double NNfunction_sb_uLsR::synapse0x1f4eb30() {
   return (neuron0x1f395b0()*0.00956242);
}

double NNfunction_sb_uLsR::synapse0x1f4eb70() {
   return (neuron0x1f398f0()*-0.00760817);
}

double NNfunction_sb_uLsR::synapse0x1f4ebb0() {
   return (neuron0x1f39c30()*-0.0034381);
}

double NNfunction_sb_uLsR::synapse0x1f4ebf0() {
   return (neuron0x1f39f70()*0.0316778);
}

double NNfunction_sb_uLsR::synapse0x1f4ec30() {
   return (neuron0x1f3a2b0()*0.0220008);
}

double NNfunction_sb_uLsR::synapse0x1f4ec70() {
   return (neuron0x1f3a5f0()*-0.00543727);
}

double NNfunction_sb_uLsR::synapse0x1f4ecb0() {
   return (neuron0x1f3a930()*0.368177);
}

double NNfunction_sb_uLsR::synapse0x1f4ecf0() {
   return (neuron0x1f3ac70()*0.000282596);
}

double NNfunction_sb_uLsR::synapse0x1f4ed30() {
   return (neuron0x1f3afb0()*-0.00614602);
}

double NNfunction_sb_uLsR::synapse0x1f4ed70() {
   return (neuron0x1f3b2f0()*-0.0248732);
}

double NNfunction_sb_uLsR::synapse0x1f4edb0() {
   return (neuron0x1f3b630()*-0.0267894);
}

double NNfunction_sb_uLsR::synapse0x1f4e840() {
   return (neuron0x1f3b970()*0.00212297);
}

double NNfunction_sb_uLsR::synapse0x1f4e880() {
   return (neuron0x1f3bed0()*-0.0215197);
}

double NNfunction_sb_uLsR::synapse0x1f4ef00() {
   return (neuron0x1f3c0f0()*-2.39242);
}

double NNfunction_sb_uLsR::synapse0x1f4ef40() {
   return (neuron0x1f3c430()*-0.0392647);
}

double NNfunction_sb_uLsR::synapse0x1f4ef80() {
   return (neuron0x1f3c770()*0.00362006);
}

double NNfunction_sb_uLsR::synapse0x1f4efc0() {
   return (neuron0x1f3cab0()*-0.000618449);
}

double NNfunction_sb_uLsR::synapse0x1f4f000() {
   return (neuron0x1f3cdf0()*0.00496196);
}

double NNfunction_sb_uLsR::synapse0x1f4f040() {
   return (neuron0x1f3d130()*0.00299426);
}

double NNfunction_sb_uLsR::synapse0x1f4f3c0() {
   return (neuron0x1f38570()*-0.0452354);
}

double NNfunction_sb_uLsR::synapse0x1f4f400() {
   return (neuron0x1f388b0()*0.105744);
}

double NNfunction_sb_uLsR::synapse0x1f4f440() {
   return (neuron0x1f38bf0()*0.246688);
}

double NNfunction_sb_uLsR::synapse0x1f4f480() {
   return (neuron0x1f38f30()*-1.31353);
}

double NNfunction_sb_uLsR::synapse0x1f4f4c0() {
   return (neuron0x1f39270()*-0.0077941);
}

double NNfunction_sb_uLsR::synapse0x1f4f500() {
   return (neuron0x1f395b0()*0.0913118);
}

double NNfunction_sb_uLsR::synapse0x1f4f540() {
   return (neuron0x1f398f0()*-0.113146);
}

double NNfunction_sb_uLsR::synapse0x1f4f580() {
   return (neuron0x1f39c30()*0.0290102);
}

double NNfunction_sb_uLsR::synapse0x1f4f5c0() {
   return (neuron0x1f39f70()*-0.0798522);
}

double NNfunction_sb_uLsR::synapse0x1f4f600() {
   return (neuron0x1f3a2b0()*-0.0922062);
}

double NNfunction_sb_uLsR::synapse0x1f4f640() {
   return (neuron0x1f3a5f0()*0.235111);
}

double NNfunction_sb_uLsR::synapse0x1f4f680() {
   return (neuron0x1f3a930()*0.975136);
}

double NNfunction_sb_uLsR::synapse0x1f4f6c0() {
   return (neuron0x1f3ac70()*-0.0707934);
}

double NNfunction_sb_uLsR::synapse0x1f4f700() {
   return (neuron0x1f3afb0()*0.0889915);
}

double NNfunction_sb_uLsR::synapse0x1f4f740() {
   return (neuron0x1f3b2f0()*-0.0195244);
}

double NNfunction_sb_uLsR::synapse0x1f4f780() {
   return (neuron0x1f3b630()*-0.0271763);
}

double NNfunction_sb_uLsR::synapse0x1f4f210() {
   return (neuron0x1f3b970()*0.258692);
}

double NNfunction_sb_uLsR::synapse0x1f4f250() {
   return (neuron0x1f3bed0()*0.179441);
}

double NNfunction_sb_uLsR::synapse0x1f4f8d0() {
   return (neuron0x1f3c0f0()*0.031609);
}

double NNfunction_sb_uLsR::synapse0x1f4f910() {
   return (neuron0x1f3c430()*0.0482518);
}

double NNfunction_sb_uLsR::synapse0x1f4f950() {
   return (neuron0x1f3c770()*-0.167369);
}

double NNfunction_sb_uLsR::synapse0x1f4f990() {
   return (neuron0x1f3cab0()*-0.186134);
}

double NNfunction_sb_uLsR::synapse0x1f4f9d0() {
   return (neuron0x1f3cdf0()*-0.0300028);
}

double NNfunction_sb_uLsR::synapse0x1f4fa10() {
   return (neuron0x1f3d130()*0.096621);
}

double NNfunction_sb_uLsR::synapse0x1f4fd90() {
   return (neuron0x1f38570()*-0.136597);
}

double NNfunction_sb_uLsR::synapse0x1f4fdd0() {
   return (neuron0x1f388b0()*0.199192);
}

double NNfunction_sb_uLsR::synapse0x1f4fe10() {
   return (neuron0x1f38bf0()*0.227192);
}

double NNfunction_sb_uLsR::synapse0x1f4fe50() {
   return (neuron0x1f38f30()*-0.0319435);
}

double NNfunction_sb_uLsR::synapse0x1f4fe90() {
   return (neuron0x1f39270()*-0.00457611);
}

double NNfunction_sb_uLsR::synapse0x1f4fed0() {
   return (neuron0x1f395b0()*0.28658);
}

double NNfunction_sb_uLsR::synapse0x1f4ff10() {
   return (neuron0x1f398f0()*0.133394);
}

double NNfunction_sb_uLsR::synapse0x1f4ff50() {
   return (neuron0x1f39c30()*-0.00403918);
}

double NNfunction_sb_uLsR::synapse0x1f4ff90() {
   return (neuron0x1f39f70()*0.216783);
}

double NNfunction_sb_uLsR::synapse0x1f4ffd0() {
   return (neuron0x1f3a2b0()*-0.28159);
}

double NNfunction_sb_uLsR::synapse0x1f50010() {
   return (neuron0x1f3a5f0()*-0.624588);
}

double NNfunction_sb_uLsR::synapse0x1f50050() {
   return (neuron0x1f3a930()*-0.706581);
}

double NNfunction_sb_uLsR::synapse0x1f50090() {
   return (neuron0x1f3ac70()*-0.721651);
}

double NNfunction_sb_uLsR::synapse0x1f500d0() {
   return (neuron0x1f3afb0()*0.463155);
}

double NNfunction_sb_uLsR::synapse0x1f50110() {
   return (neuron0x1f3b2f0()*0.0435094);
}

double NNfunction_sb_uLsR::synapse0x1f50150() {
   return (neuron0x1f3b630()*0.0454773);
}

double NNfunction_sb_uLsR::synapse0x1f4fbe0() {
   return (neuron0x1f3b970()*0.275679);
}

double NNfunction_sb_uLsR::synapse0x1f4fc20() {
   return (neuron0x1f3bed0()*1.17119);
}

double NNfunction_sb_uLsR::synapse0x1f502a0() {
   return (neuron0x1f3c0f0()*0.0654268);
}

double NNfunction_sb_uLsR::synapse0x1f502e0() {
   return (neuron0x1f3c430()*0.0477874);
}

double NNfunction_sb_uLsR::synapse0x1f50320() {
   return (neuron0x1f3c770()*0.461031);
}

double NNfunction_sb_uLsR::synapse0x1f50360() {
   return (neuron0x1f3cab0()*-0.00437514);
}

double NNfunction_sb_uLsR::synapse0x1f503a0() {
   return (neuron0x1f3cdf0()*0.117557);
}

double NNfunction_sb_uLsR::synapse0x1f503e0() {
   return (neuron0x1f3d130()*-0.175338);
}

double NNfunction_sb_uLsR::synapse0x1f50760() {
   return (neuron0x1f38570()*0.160181);
}

double NNfunction_sb_uLsR::synapse0x1f507a0() {
   return (neuron0x1f388b0()*-0.221002);
}

double NNfunction_sb_uLsR::synapse0x1f507e0() {
   return (neuron0x1f38bf0()*0.0546817);
}

double NNfunction_sb_uLsR::synapse0x1f50820() {
   return (neuron0x1f38f30()*0.0280433);
}

double NNfunction_sb_uLsR::synapse0x1f50860() {
   return (neuron0x1f39270()*0.859798);
}

double NNfunction_sb_uLsR::synapse0x1f508a0() {
   return (neuron0x1f395b0()*0.0692816);
}

double NNfunction_sb_uLsR::synapse0x1f508e0() {
   return (neuron0x1f398f0()*0.14076);
}

double NNfunction_sb_uLsR::synapse0x1f50920() {
   return (neuron0x1f39c30()*0.433291);
}

double NNfunction_sb_uLsR::synapse0x1f50960() {
   return (neuron0x1f39f70()*-0.11297);
}

double NNfunction_sb_uLsR::synapse0x1f509a0() {
   return (neuron0x1f3a2b0()*0.250328);
}

double NNfunction_sb_uLsR::synapse0x1f509e0() {
   return (neuron0x1f3a5f0()*-0.166221);
}

double NNfunction_sb_uLsR::synapse0x1f50a20() {
   return (neuron0x1f3a930()*0.585123);
}

double NNfunction_sb_uLsR::synapse0x1f50a60() {
   return (neuron0x1f3ac70()*0.286507);
}

double NNfunction_sb_uLsR::synapse0x1f50aa0() {
   return (neuron0x1f3afb0()*-0.524701);
}

double NNfunction_sb_uLsR::synapse0x1f50ae0() {
   return (neuron0x1f3b2f0()*0.190527);
}

double NNfunction_sb_uLsR::synapse0x1f50b20() {
   return (neuron0x1f3b630()*0.738406);
}

double NNfunction_sb_uLsR::synapse0x1f505b0() {
   return (neuron0x1f3b970()*-0.243667);
}

double NNfunction_sb_uLsR::synapse0x1f505f0() {
   return (neuron0x1f3bed0()*0.199247);
}

double NNfunction_sb_uLsR::synapse0x1f50c70() {
   return (neuron0x1f3c0f0()*-0.290046);
}

double NNfunction_sb_uLsR::synapse0x1f50cb0() {
   return (neuron0x1f3c430()*-0.0335131);
}

double NNfunction_sb_uLsR::synapse0x1f50cf0() {
   return (neuron0x1f3c770()*-0.628303);
}

double NNfunction_sb_uLsR::synapse0x1f50d30() {
   return (neuron0x1f3cab0()*-0.204839);
}

double NNfunction_sb_uLsR::synapse0x1f50d70() {
   return (neuron0x1f3cdf0()*0.246206);
}

double NNfunction_sb_uLsR::synapse0x1f50db0() {
   return (neuron0x1f3d130()*0.00488679);
}

double NNfunction_sb_uLsR::synapse0x1f51130() {
   return (neuron0x1f38570()*-0.0482784);
}

double NNfunction_sb_uLsR::synapse0x1f51170() {
   return (neuron0x1f388b0()*-0.0193998);
}

double NNfunction_sb_uLsR::synapse0x1f511b0() {
   return (neuron0x1f38bf0()*-0.020768);
}

double NNfunction_sb_uLsR::synapse0x1f511f0() {
   return (neuron0x1f38f30()*14.6341);
}

double NNfunction_sb_uLsR::synapse0x1f51230() {
   return (neuron0x1f39270()*-0.0122925);
}

double NNfunction_sb_uLsR::synapse0x1f51270() {
   return (neuron0x1f395b0()*-0.0238506);
}

double NNfunction_sb_uLsR::synapse0x1f512b0() {
   return (neuron0x1f398f0()*0.00352355);
}

double NNfunction_sb_uLsR::synapse0x1f512f0() {
   return (neuron0x1f39c30()*-0.00946361);
}

double NNfunction_sb_uLsR::synapse0x1f51330() {
   return (neuron0x1f39f70()*0.00461857);
}

double NNfunction_sb_uLsR::synapse0x1f51370() {
   return (neuron0x1f3a2b0()*0.0020366);
}

double NNfunction_sb_uLsR::synapse0x1f513b0() {
   return (neuron0x1f3a5f0()*-0.00134579);
}

double NNfunction_sb_uLsR::synapse0x1f513f0() {
   return (neuron0x1f3a930()*-0.0554613);
}

double NNfunction_sb_uLsR::synapse0x1f51430() {
   return (neuron0x1f3ac70()*-0.0312918);
}

double NNfunction_sb_uLsR::synapse0x1f51470() {
   return (neuron0x1f3afb0()*0.0490817);
}

double NNfunction_sb_uLsR::synapse0x1f514b0() {
   return (neuron0x1f3b2f0()*0.0268691);
}

double NNfunction_sb_uLsR::synapse0x1f514f0() {
   return (neuron0x1f3b630()*-0.0170999);
}

double NNfunction_sb_uLsR::synapse0x1f50f80() {
   return (neuron0x1f3b970()*-0.00313206);
}

double NNfunction_sb_uLsR::synapse0x1f50fc0() {
   return (neuron0x1f3bed0()*0.0254457);
}

double NNfunction_sb_uLsR::synapse0x1f51640() {
   return (neuron0x1f3c0f0()*0.0908005);
}

double NNfunction_sb_uLsR::synapse0x1f51680() {
   return (neuron0x1f3c430()*0.0574288);
}

double NNfunction_sb_uLsR::synapse0x1f516c0() {
   return (neuron0x1f3c770()*-0.0021956);
}

double NNfunction_sb_uLsR::synapse0x1f51700() {
   return (neuron0x1f3cab0()*-0.0299159);
}

double NNfunction_sb_uLsR::synapse0x1f51740() {
   return (neuron0x1f3cdf0()*0.00272924);
}

double NNfunction_sb_uLsR::synapse0x1f51780() {
   return (neuron0x1f3d130()*0.032214);
}

double NNfunction_sb_uLsR::synapse0x1f51b00() {
   return (neuron0x1f38570()*0.0177247);
}

double NNfunction_sb_uLsR::synapse0x1f51b40() {
   return (neuron0x1f388b0()*0.00927751);
}

double NNfunction_sb_uLsR::synapse0x1f51b80() {
   return (neuron0x1f38bf0()*0.0788278);
}

double NNfunction_sb_uLsR::synapse0x1f51bc0() {
   return (neuron0x1f38f30()*-0.0361067);
}

double NNfunction_sb_uLsR::synapse0x1f51c00() {
   return (neuron0x1f39270()*0.0266325);
}

double NNfunction_sb_uLsR::synapse0x1f51c40() {
   return (neuron0x1f395b0()*0.00604876);
}

double NNfunction_sb_uLsR::synapse0x1f51c80() {
   return (neuron0x1f398f0()*0.0139654);
}

double NNfunction_sb_uLsR::synapse0x1f51cc0() {
   return (neuron0x1f39c30()*0.0139021);
}

double NNfunction_sb_uLsR::synapse0x1f51d00() {
   return (neuron0x1f39f70()*0.0251724);
}

double NNfunction_sb_uLsR::synapse0x1f51d40() {
   return (neuron0x1f3a2b0()*0.0224707);
}

double NNfunction_sb_uLsR::synapse0x1f51d80() {
   return (neuron0x1f3a5f0()*-0.0105192);
}

double NNfunction_sb_uLsR::synapse0x1f51dc0() {
   return (neuron0x1f3a930()*-2.32649);
}

double NNfunction_sb_uLsR::synapse0x1f51e00() {
   return (neuron0x1f3ac70()*-0.0100243);
}

double NNfunction_sb_uLsR::synapse0x1f51e40() {
   return (neuron0x1f3afb0()*-0.0338537);
}

double NNfunction_sb_uLsR::synapse0x1f51e80() {
   return (neuron0x1f3b2f0()*-0.0204306);
}

double NNfunction_sb_uLsR::synapse0x1f51ec0() {
   return (neuron0x1f3b630()*-0.0114114);
}

double NNfunction_sb_uLsR::synapse0x1f51950() {
   return (neuron0x1f3b970()*-0.0137826);
}

double NNfunction_sb_uLsR::synapse0x1f51990() {
   return (neuron0x1f3bed0()*-0.0167285);
}

double NNfunction_sb_uLsR::synapse0x1f52010() {
   return (neuron0x1f3c0f0()*0.0686566);
}

double NNfunction_sb_uLsR::synapse0x1f52050() {
   return (neuron0x1f3c430()*-0.0297496);
}

double NNfunction_sb_uLsR::synapse0x1f52090() {
   return (neuron0x1f3c770()*0.00963026);
}

double NNfunction_sb_uLsR::synapse0x1f520d0() {
   return (neuron0x1f3cab0()*-0.00410015);
}

double NNfunction_sb_uLsR::synapse0x1f52110() {
   return (neuron0x1f3cdf0()*-0.00346622);
}

double NNfunction_sb_uLsR::synapse0x1f52150() {
   return (neuron0x1f3d130()*-0.0119349);
}

double NNfunction_sb_uLsR::synapse0x1f524d0() {
   return (neuron0x1f38570()*0.0404949);
}

double NNfunction_sb_uLsR::synapse0x1f52510() {
   return (neuron0x1f388b0()*0.163649);
}

double NNfunction_sb_uLsR::synapse0x1f52550() {
   return (neuron0x1f38bf0()*-0.11955);
}

double NNfunction_sb_uLsR::synapse0x1f52590() {
   return (neuron0x1f38f30()*0.079908);
}

double NNfunction_sb_uLsR::synapse0x1f525d0() {
   return (neuron0x1f39270()*-0.0294247);
}

double NNfunction_sb_uLsR::synapse0x1f52610() {
   return (neuron0x1f395b0()*0.063659);
}

double NNfunction_sb_uLsR::synapse0x1f52650() {
   return (neuron0x1f398f0()*0.124483);
}

double NNfunction_sb_uLsR::synapse0x1f52690() {
   return (neuron0x1f39c30()*0.21146);
}

double NNfunction_sb_uLsR::synapse0x1f526d0() {
   return (neuron0x1f39f70()*-0.154366);
}

double NNfunction_sb_uLsR::synapse0x1f52710() {
   return (neuron0x1f3a2b0()*0.0308027);
}

double NNfunction_sb_uLsR::synapse0x1f52750() {
   return (neuron0x1f3a5f0()*0.274695);
}

double NNfunction_sb_uLsR::synapse0x1f52790() {
   return (neuron0x1f3a930()*0.785513);
}

double NNfunction_sb_uLsR::synapse0x1f527d0() {
   return (neuron0x1f3ac70()*0.163192);
}

double NNfunction_sb_uLsR::synapse0x1f52810() {
   return (neuron0x1f3afb0()*0.0389024);
}

double NNfunction_sb_uLsR::synapse0x1f52850() {
   return (neuron0x1f3b2f0()*-0.206752);
}

double NNfunction_sb_uLsR::synapse0x1f52890() {
   return (neuron0x1f3b630()*0.214591);
}

double NNfunction_sb_uLsR::synapse0x1f52320() {
   return (neuron0x1f3b970()*0.159228);
}

double NNfunction_sb_uLsR::synapse0x1f52360() {
   return (neuron0x1f3bed0()*0.146224);
}

double NNfunction_sb_uLsR::synapse0x1f529e0() {
   return (neuron0x1f3c0f0()*0.809241);
}

double NNfunction_sb_uLsR::synapse0x1f52a20() {
   return (neuron0x1f3c430()*-0.0301477);
}

double NNfunction_sb_uLsR::synapse0x1f52a60() {
   return (neuron0x1f3c770()*-0.183769);
}

double NNfunction_sb_uLsR::synapse0x1f52aa0() {
   return (neuron0x1f3cab0()*-0.248127);
}

double NNfunction_sb_uLsR::synapse0x1f52ae0() {
   return (neuron0x1f3cdf0()*0.0689305);
}

double NNfunction_sb_uLsR::synapse0x1f52b20() {
   return (neuron0x1f3d130()*-0.092237);
}

double NNfunction_sb_uLsR::synapse0x1f52ea0() {
   return (neuron0x1f38570()*0.111755);
}

double NNfunction_sb_uLsR::synapse0x1f47470() {
   return (neuron0x1f388b0()*0.40334);
}

double NNfunction_sb_uLsR::synapse0x1f474b0() {
   return (neuron0x1f38bf0()*-0.746779);
}

double NNfunction_sb_uLsR::synapse0x1f474f0() {
   return (neuron0x1f38f30()*-1.14015);
}

double NNfunction_sb_uLsR::synapse0x1f47740() {
   return (neuron0x1f39270()*0.674355);
}

double NNfunction_sb_uLsR::synapse0x1f47780() {
   return (neuron0x1f395b0()*0.165784);
}

double NNfunction_sb_uLsR::synapse0x1f477c0() {
   return (neuron0x1f398f0()*-0.403952);
}

double NNfunction_sb_uLsR::synapse0x1f47a10() {
   return (neuron0x1f39c30()*0.0663266);
}

double NNfunction_sb_uLsR::synapse0x1f47a50() {
   return (neuron0x1f39f70()*-0.0345924);
}

double NNfunction_sb_uLsR::synapse0x1f47ca0() {
   return (neuron0x1f3a2b0()*0.113883);
}

double NNfunction_sb_uLsR::synapse0x1f47ce0() {
   return (neuron0x1f3a5f0()*0.132075);
}

double NNfunction_sb_uLsR::synapse0x1f47d20() {
   return (neuron0x1f3a930()*0.0741259);
}

double NNfunction_sb_uLsR::synapse0x1f47f70() {
   return (neuron0x1f3ac70()*-0.0758153);
}

double NNfunction_sb_uLsR::synapse0x1f47fb0() {
   return (neuron0x1f3afb0()*-0.106497);
}

double NNfunction_sb_uLsR::synapse0x1f48200() {
   return (neuron0x1f3b2f0()*-0.507966);
}

double NNfunction_sb_uLsR::synapse0x1f48240() {
   return (neuron0x1f3b630()*0.193431);
}

double NNfunction_sb_uLsR::synapse0x1f52cf0() {
   return (neuron0x1f3b970()*0.313448);
}

double NNfunction_sb_uLsR::synapse0x1f52d30() {
   return (neuron0x1f3bed0()*0.0895411);
}

double NNfunction_sb_uLsR::synapse0x1f48390() {
   return (neuron0x1f3c0f0()*-0.756961);
}

double NNfunction_sb_uLsR::synapse0x1f488a0() {
   return (neuron0x1f3c430()*-0.171316);
}

double NNfunction_sb_uLsR::synapse0x1f488e0() {
   return (neuron0x1f3c770()*-0.167452);
}

double NNfunction_sb_uLsR::synapse0x1f48920() {
   return (neuron0x1f3cab0()*0.495221);
}

double NNfunction_sb_uLsR::synapse0x1f48b70() {
   return (neuron0x1f3cdf0()*0.52193);
}

double NNfunction_sb_uLsR::synapse0x1f48bb0() {
   return (neuron0x1f3d130()*-0.173952);
}

double NNfunction_sb_uLsR::synapse0x1f48460() {
   return (neuron0x1f38570()*-0.0126064);
}

double NNfunction_sb_uLsR::synapse0x1f484a0() {
   return (neuron0x1f388b0()*0.358485);
}

double NNfunction_sb_uLsR::synapse0x1f484e0() {
   return (neuron0x1f38bf0()*0.693165);
}

double NNfunction_sb_uLsR::synapse0x1f48520() {
   return (neuron0x1f38f30()*0.490886);
}

double NNfunction_sb_uLsR::synapse0x1f48ea0() {
   return (neuron0x1f39270()*0.18106);
}

double NNfunction_sb_uLsR::synapse0x1f551f0() {
   return (neuron0x1f395b0()*0.218999);
}

double NNfunction_sb_uLsR::synapse0x1f55230() {
   return (neuron0x1f398f0()*0.0199503);
}

double NNfunction_sb_uLsR::synapse0x1f55270() {
   return (neuron0x1f39c30()*0.134946);
}

double NNfunction_sb_uLsR::synapse0x1f552b0() {
   return (neuron0x1f39f70()*0.165203);
}

double NNfunction_sb_uLsR::synapse0x1f552f0() {
   return (neuron0x1f3a2b0()*0.102256);
}

double NNfunction_sb_uLsR::synapse0x1f55330() {
   return (neuron0x1f3a5f0()*0.144972);
}

double NNfunction_sb_uLsR::synapse0x1f55370() {
   return (neuron0x1f3a930()*-0.244572);
}

double NNfunction_sb_uLsR::synapse0x1f553b0() {
   return (neuron0x1f3ac70()*0.506098);
}

double NNfunction_sb_uLsR::synapse0x1f553f0() {
   return (neuron0x1f3afb0()*-0.155548);
}

double NNfunction_sb_uLsR::synapse0x1f55430() {
   return (neuron0x1f3b2f0()*-0.322092);
}

double NNfunction_sb_uLsR::synapse0x1f55470() {
   return (neuron0x1f3b630()*0.100602);
}

double NNfunction_sb_uLsR::synapse0x1f48d80() {
   return (neuron0x1f3b970()*-0.468046);
}

double NNfunction_sb_uLsR::synapse0x1f48dc0() {
   return (neuron0x1f3bed0()*0.159894);
}

double NNfunction_sb_uLsR::synapse0x1f555c0() {
   return (neuron0x1f3c0f0()*0.293291);
}

double NNfunction_sb_uLsR::synapse0x1f55600() {
   return (neuron0x1f3c430()*0.145084);
}

double NNfunction_sb_uLsR::synapse0x1f55640() {
   return (neuron0x1f3c770()*0.0708851);
}

double NNfunction_sb_uLsR::synapse0x1f55680() {
   return (neuron0x1f3cab0()*0.147677);
}

double NNfunction_sb_uLsR::synapse0x1f556c0() {
   return (neuron0x1f3cdf0()*0.0140457);
}

double NNfunction_sb_uLsR::synapse0x1f55700() {
   return (neuron0x1f3d130()*0.0489259);
}

double NNfunction_sb_uLsR::synapse0x1f55a80() {
   return (neuron0x1f38570()*0.032265);
}

double NNfunction_sb_uLsR::synapse0x1f55ac0() {
   return (neuron0x1f388b0()*-0.00909108);
}

double NNfunction_sb_uLsR::synapse0x1f55b00() {
   return (neuron0x1f38bf0()*0.0101932);
}

double NNfunction_sb_uLsR::synapse0x1f55b40() {
   return (neuron0x1f38f30()*-0.0401057);
}

double NNfunction_sb_uLsR::synapse0x1f55b80() {
   return (neuron0x1f39270()*0.0214505);
}

double NNfunction_sb_uLsR::synapse0x1f55bc0() {
   return (neuron0x1f395b0()*0.0042833);
}

double NNfunction_sb_uLsR::synapse0x1f55c00() {
   return (neuron0x1f398f0()*0.0200224);
}

double NNfunction_sb_uLsR::synapse0x1f55c40() {
   return (neuron0x1f39c30()*-0.0131582);
}

double NNfunction_sb_uLsR::synapse0x1f55c80() {
   return (neuron0x1f39f70()*-0.0378064);
}

double NNfunction_sb_uLsR::synapse0x1f55cc0() {
   return (neuron0x1f3a2b0()*-0.0282395);
}

double NNfunction_sb_uLsR::synapse0x1f55d00() {
   return (neuron0x1f3a5f0()*0.0345226);
}

double NNfunction_sb_uLsR::synapse0x1f55d40() {
   return (neuron0x1f3a930()*-0.0667754);
}

double NNfunction_sb_uLsR::synapse0x1f55d80() {
   return (neuron0x1f3ac70()*-0.011326);
}

double NNfunction_sb_uLsR::synapse0x1f55dc0() {
   return (neuron0x1f3afb0()*0.0017001);
}

double NNfunction_sb_uLsR::synapse0x1f55e00() {
   return (neuron0x1f3b2f0()*-0.0139425);
}

double NNfunction_sb_uLsR::synapse0x1f55e40() {
   return (neuron0x1f3b630()*0.0142732);
}

double NNfunction_sb_uLsR::synapse0x1f558d0() {
   return (neuron0x1f3b970()*0.00783203);
}

double NNfunction_sb_uLsR::synapse0x1f55910() {
   return (neuron0x1f3bed0()*-0.00974048);
}

double NNfunction_sb_uLsR::synapse0x1f55f90() {
   return (neuron0x1f3c0f0()*-0.352439);
}

double NNfunction_sb_uLsR::synapse0x1f55fd0() {
   return (neuron0x1f3c430()*0.0133374);
}

double NNfunction_sb_uLsR::synapse0x1f56010() {
   return (neuron0x1f3c770()*0.00514682);
}

double NNfunction_sb_uLsR::synapse0x1f56050() {
   return (neuron0x1f3cab0()*0.0123637);
}

double NNfunction_sb_uLsR::synapse0x1f56090() {
   return (neuron0x1f3cdf0()*0.0159863);
}

double NNfunction_sb_uLsR::synapse0x1f560d0() {
   return (neuron0x1f3d130()*0.0146398);
}

double NNfunction_sb_uLsR::synapse0x1f56450() {
   return (neuron0x1f38570()*0.03581);
}

double NNfunction_sb_uLsR::synapse0x1f56490() {
   return (neuron0x1f388b0()*0.0285431);
}

double NNfunction_sb_uLsR::synapse0x1f564d0() {
   return (neuron0x1f38bf0()*0.995438);
}

double NNfunction_sb_uLsR::synapse0x1f56510() {
   return (neuron0x1f38f30()*0.0600011);
}

double NNfunction_sb_uLsR::synapse0x1f56550() {
   return (neuron0x1f39270()*0.0270787);
}

double NNfunction_sb_uLsR::synapse0x1f56590() {
   return (neuron0x1f395b0()*0.0295765);
}

double NNfunction_sb_uLsR::synapse0x1f565d0() {
   return (neuron0x1f398f0()*0.0394189);
}

double NNfunction_sb_uLsR::synapse0x1f56610() {
   return (neuron0x1f39c30()*-0.0275134);
}

double NNfunction_sb_uLsR::synapse0x1f56650() {
   return (neuron0x1f39f70()*0.026421);
}

double NNfunction_sb_uLsR::synapse0x1f56690() {
   return (neuron0x1f3a2b0()*0.0422948);
}

double NNfunction_sb_uLsR::synapse0x1f566d0() {
   return (neuron0x1f3a5f0()*0.0395931);
}

double NNfunction_sb_uLsR::synapse0x1f56710() {
   return (neuron0x1f3a930()*-1.2846);
}

double NNfunction_sb_uLsR::synapse0x1f56750() {
   return (neuron0x1f3ac70()*0.036137);
}

double NNfunction_sb_uLsR::synapse0x1f56790() {
   return (neuron0x1f3afb0()*0.0306251);
}

double NNfunction_sb_uLsR::synapse0x1f567d0() {
   return (neuron0x1f3b2f0()*0.0712667);
}

double NNfunction_sb_uLsR::synapse0x1f56810() {
   return (neuron0x1f3b630()*0.0320547);
}

double NNfunction_sb_uLsR::synapse0x1f562a0() {
   return (neuron0x1f3b970()*-0.0215395);
}

double NNfunction_sb_uLsR::synapse0x1f562e0() {
   return (neuron0x1f3bed0()*0.0898533);
}

double NNfunction_sb_uLsR::synapse0x1f56960() {
   return (neuron0x1f3c0f0()*0.194102);
}

double NNfunction_sb_uLsR::synapse0x1f569a0() {
   return (neuron0x1f3c430()*0.0133559);
}

double NNfunction_sb_uLsR::synapse0x1f569e0() {
   return (neuron0x1f3c770()*0.00323419);
}

double NNfunction_sb_uLsR::synapse0x1f56a20() {
   return (neuron0x1f3cab0()*-0.0585505);
}

double NNfunction_sb_uLsR::synapse0x1f56a60() {
   return (neuron0x1f3cdf0()*0.0329766);
}

double NNfunction_sb_uLsR::synapse0x1f56aa0() {
   return (neuron0x1f3d130()*0.0208068);
}

double NNfunction_sb_uLsR::synapse0x1f56e20() {
   return (neuron0x1f38570()*0.000911615);
}

double NNfunction_sb_uLsR::synapse0x1f56e60() {
   return (neuron0x1f388b0()*-0.110153);
}

double NNfunction_sb_uLsR::synapse0x1f56ea0() {
   return (neuron0x1f38bf0()*0.380221);
}

double NNfunction_sb_uLsR::synapse0x1f56ee0() {
   return (neuron0x1f38f30()*0.398884);
}

double NNfunction_sb_uLsR::synapse0x1f56f20() {
   return (neuron0x1f39270()*-0.142287);
}

double NNfunction_sb_uLsR::synapse0x1f56f60() {
   return (neuron0x1f395b0()*-0.0325824);
}

double NNfunction_sb_uLsR::synapse0x1f56fa0() {
   return (neuron0x1f398f0()*-0.567814);
}

double NNfunction_sb_uLsR::synapse0x1f56fe0() {
   return (neuron0x1f39c30()*-0.0110306);
}

double NNfunction_sb_uLsR::synapse0x1f57020() {
   return (neuron0x1f39f70()*0.349486);
}

double NNfunction_sb_uLsR::synapse0x1f57060() {
   return (neuron0x1f3a2b0()*-0.0621356);
}

double NNfunction_sb_uLsR::synapse0x1f570a0() {
   return (neuron0x1f3a5f0()*-0.0531693);
}

double NNfunction_sb_uLsR::synapse0x1f570e0() {
   return (neuron0x1f3a930()*-0.409953);
}

double NNfunction_sb_uLsR::synapse0x1f57120() {
   return (neuron0x1f3ac70()*0.0436534);
}

double NNfunction_sb_uLsR::synapse0x1f57160() {
   return (neuron0x1f3afb0()*0.499217);
}

double NNfunction_sb_uLsR::synapse0x1f571a0() {
   return (neuron0x1f3b2f0()*-0.181743);
}

double NNfunction_sb_uLsR::synapse0x1f571e0() {
   return (neuron0x1f3b630()*-0.814442);
}

double NNfunction_sb_uLsR::synapse0x1f56c70() {
   return (neuron0x1f3b970()*-0.0827765);
}

double NNfunction_sb_uLsR::synapse0x1f56cb0() {
   return (neuron0x1f3bed0()*0.221486);
}

double NNfunction_sb_uLsR::synapse0x1f57330() {
   return (neuron0x1f3c0f0()*-0.0687805);
}

double NNfunction_sb_uLsR::synapse0x1f57370() {
   return (neuron0x1f3c430()*-0.0509745);
}

double NNfunction_sb_uLsR::synapse0x1f573b0() {
   return (neuron0x1f3c770()*0.113881);
}

double NNfunction_sb_uLsR::synapse0x1f573f0() {
   return (neuron0x1f3cab0()*0.683816);
}

double NNfunction_sb_uLsR::synapse0x1f57430() {
   return (neuron0x1f3cdf0()*0.105386);
}

double NNfunction_sb_uLsR::synapse0x1f57470() {
   return (neuron0x1f3d130()*0.543187);
}

double NNfunction_sb_uLsR::synapse0x1f577f0() {
   return (neuron0x1f38570()*0.130655);
}

double NNfunction_sb_uLsR::synapse0x1f57830() {
   return (neuron0x1f388b0()*-0.332312);
}

double NNfunction_sb_uLsR::synapse0x1f57870() {
   return (neuron0x1f38bf0()*-0.366451);
}

double NNfunction_sb_uLsR::synapse0x1f578b0() {
   return (neuron0x1f38f30()*0.148099);
}

double NNfunction_sb_uLsR::synapse0x1f578f0() {
   return (neuron0x1f39270()*-0.179931);
}

double NNfunction_sb_uLsR::synapse0x1f57930() {
   return (neuron0x1f395b0()*0.111194);
}

double NNfunction_sb_uLsR::synapse0x1f57970() {
   return (neuron0x1f398f0()*-0.131064);
}

double NNfunction_sb_uLsR::synapse0x1f579b0() {
   return (neuron0x1f39c30()*-0.37255);
}

double NNfunction_sb_uLsR::synapse0x1f579f0() {
   return (neuron0x1f39f70()*-0.0558906);
}

double NNfunction_sb_uLsR::synapse0x1f57a30() {
   return (neuron0x1f3a2b0()*0.208524);
}

double NNfunction_sb_uLsR::synapse0x1f57a70() {
   return (neuron0x1f3a5f0()*0.0523843);
}

double NNfunction_sb_uLsR::synapse0x1f57ab0() {
   return (neuron0x1f3a930()*-0.635063);
}

double NNfunction_sb_uLsR::synapse0x1f57af0() {
   return (neuron0x1f3ac70()*0.509727);
}

double NNfunction_sb_uLsR::synapse0x1f57b30() {
   return (neuron0x1f3afb0()*-0.255231);
}

double NNfunction_sb_uLsR::synapse0x1f57b70() {
   return (neuron0x1f3b2f0()*0.0512703);
}

double NNfunction_sb_uLsR::synapse0x1f57bb0() {
   return (neuron0x1f3b630()*0.329336);
}

double NNfunction_sb_uLsR::synapse0x1f57640() {
   return (neuron0x1f3b970()*-0.494606);
}

double NNfunction_sb_uLsR::synapse0x1f57680() {
   return (neuron0x1f3bed0()*0.137918);
}

double NNfunction_sb_uLsR::synapse0x1f57d00() {
   return (neuron0x1f3c0f0()*-0.128543);
}

double NNfunction_sb_uLsR::synapse0x1f57d40() {
   return (neuron0x1f3c430()*-0.0499978);
}

double NNfunction_sb_uLsR::synapse0x1f57d80() {
   return (neuron0x1f3c770()*0.0327195);
}

double NNfunction_sb_uLsR::synapse0x1f57dc0() {
   return (neuron0x1f3cab0()*0.0844124);
}

double NNfunction_sb_uLsR::synapse0x1f57e00() {
   return (neuron0x1f3cdf0()*0.177254);
}

double NNfunction_sb_uLsR::synapse0x1f57e40() {
   return (neuron0x1f3d130()*0.0216374);
}

double NNfunction_sb_uLsR::synapse0x1f581c0() {
   return (neuron0x1f38570()*-0.00926106);
}

double NNfunction_sb_uLsR::synapse0x1f58200() {
   return (neuron0x1f388b0()*-0.000333569);
}

double NNfunction_sb_uLsR::synapse0x1f58240() {
   return (neuron0x1f38bf0()*0.0208019);
}

double NNfunction_sb_uLsR::synapse0x1f58280() {
   return (neuron0x1f38f30()*-4.35442);
}

double NNfunction_sb_uLsR::synapse0x1f582c0() {
   return (neuron0x1f39270()*-0.0110346);
}

double NNfunction_sb_uLsR::synapse0x1f58300() {
   return (neuron0x1f395b0()*-0.0240841);
}

double NNfunction_sb_uLsR::synapse0x1f58340() {
   return (neuron0x1f398f0()*0.0327048);
}

double NNfunction_sb_uLsR::synapse0x1f58380() {
   return (neuron0x1f39c30()*0.023014);
}

double NNfunction_sb_uLsR::synapse0x1f583c0() {
   return (neuron0x1f39f70()*0.0204084);
}

double NNfunction_sb_uLsR::synapse0x1f58400() {
   return (neuron0x1f3a2b0()*0.0140377);
}

double NNfunction_sb_uLsR::synapse0x1f58440() {
   return (neuron0x1f3a5f0()*-0.038749);
}

double NNfunction_sb_uLsR::synapse0x1f58480() {
   return (neuron0x1f3a930()*0.339299);
}

double NNfunction_sb_uLsR::synapse0x1f584c0() {
   return (neuron0x1f3ac70()*-0.0574939);
}

double NNfunction_sb_uLsR::synapse0x1f58500() {
   return (neuron0x1f3afb0()*0.0156067);
}

double NNfunction_sb_uLsR::synapse0x1f58540() {
   return (neuron0x1f3b2f0()*-0.00772367);
}

double NNfunction_sb_uLsR::synapse0x1f58580() {
   return (neuron0x1f3b630()*-0.02837);
}

double NNfunction_sb_uLsR::synapse0x1f58010() {
   return (neuron0x1f3b970()*0.0232214);
}

double NNfunction_sb_uLsR::synapse0x1f58050() {
   return (neuron0x1f3bed0()*0.0279536);
}

double NNfunction_sb_uLsR::synapse0x1f586d0() {
   return (neuron0x1f3c0f0()*0.321426);
}

double NNfunction_sb_uLsR::synapse0x1f58710() {
   return (neuron0x1f3c430()*-0.0022002);
}

double NNfunction_sb_uLsR::synapse0x1f58750() {
   return (neuron0x1f3c770()*-0.0148554);
}

double NNfunction_sb_uLsR::synapse0x1f58790() {
   return (neuron0x1f3cab0()*-0.00769913);
}

double NNfunction_sb_uLsR::synapse0x1f587d0() {
   return (neuron0x1f3cdf0()*-0.0129893);
}

double NNfunction_sb_uLsR::synapse0x1f58810() {
   return (neuron0x1f3d130()*-0.0186261);
}

double NNfunction_sb_uLsR::synapse0x1f58b90() {
   return (neuron0x1f38570()*-0.00725227);
}

double NNfunction_sb_uLsR::synapse0x1f58bd0() {
   return (neuron0x1f388b0()*0.00624262);
}

double NNfunction_sb_uLsR::synapse0x1f58c10() {
   return (neuron0x1f38bf0()*0.046781);
}

double NNfunction_sb_uLsR::synapse0x1f58c50() {
   return (neuron0x1f38f30()*-0.00385523);
}

double NNfunction_sb_uLsR::synapse0x1f58c90() {
   return (neuron0x1f39270()*-0.0230085);
}

double NNfunction_sb_uLsR::synapse0x1f58cd0() {
   return (neuron0x1f395b0()*-0.010396);
}

double NNfunction_sb_uLsR::synapse0x1f58d10() {
   return (neuron0x1f398f0()*-0.00982672);
}

double NNfunction_sb_uLsR::synapse0x1f58d50() {
   return (neuron0x1f39c30()*-0.0123611);
}

double NNfunction_sb_uLsR::synapse0x1f58d90() {
   return (neuron0x1f39f70()*-0.0315468);
}

double NNfunction_sb_uLsR::synapse0x1f58dd0() {
   return (neuron0x1f3a2b0()*0.000520896);
}

double NNfunction_sb_uLsR::synapse0x1f58e10() {
   return (neuron0x1f3a5f0()*-0.00591276);
}

double NNfunction_sb_uLsR::synapse0x1f58e50() {
   return (neuron0x1f3a930()*-0.0135066);
}

double NNfunction_sb_uLsR::synapse0x1f58e90() {
   return (neuron0x1f3ac70()*-0.0147244);
}

double NNfunction_sb_uLsR::synapse0x1f58ed0() {
   return (neuron0x1f3afb0()*0.0085392);
}

double NNfunction_sb_uLsR::synapse0x1f58f10() {
   return (neuron0x1f3b2f0()*0.0211581);
}

double NNfunction_sb_uLsR::synapse0x1f58f50() {
   return (neuron0x1f3b630()*0.0247012);
}

double NNfunction_sb_uLsR::synapse0x1f589e0() {
   return (neuron0x1f3b970()*-0.0203631);
}

double NNfunction_sb_uLsR::synapse0x1f58a20() {
   return (neuron0x1f3bed0()*0.0107131);
}

double NNfunction_sb_uLsR::synapse0x1f590a0() {
   return (neuron0x1f3c0f0()*2.78225);
}

double NNfunction_sb_uLsR::synapse0x1f590e0() {
   return (neuron0x1f3c430()*0.0415385);
}

double NNfunction_sb_uLsR::synapse0x1f59120() {
   return (neuron0x1f3c770()*0.00223558);
}

double NNfunction_sb_uLsR::synapse0x1f59160() {
   return (neuron0x1f3cab0()*-0.00401541);
}

double NNfunction_sb_uLsR::synapse0x1f591a0() {
   return (neuron0x1f3cdf0()*-0.0136171);
}

double NNfunction_sb_uLsR::synapse0x1f591e0() {
   return (neuron0x1f3d130()*-0.0136781);
}

double NNfunction_sb_uLsR::synapse0x1f59560() {
   return (neuron0x1f38570()*0.596114);
}

double NNfunction_sb_uLsR::synapse0x1f595a0() {
   return (neuron0x1f388b0()*0.336203);
}

double NNfunction_sb_uLsR::synapse0x1f595e0() {
   return (neuron0x1f38bf0()*-0.380173);
}

double NNfunction_sb_uLsR::synapse0x1f59620() {
   return (neuron0x1f38f30()*-0.972427);
}

double NNfunction_sb_uLsR::synapse0x1f59660() {
   return (neuron0x1f39270()*-0.604637);
}

double NNfunction_sb_uLsR::synapse0x1f596a0() {
   return (neuron0x1f395b0()*-0.524048);
}

double NNfunction_sb_uLsR::synapse0x1f596e0() {
   return (neuron0x1f398f0()*0.410114);
}

double NNfunction_sb_uLsR::synapse0x1f59720() {
   return (neuron0x1f39c30()*0.580018);
}

double NNfunction_sb_uLsR::synapse0x1f59760() {
   return (neuron0x1f39f70()*-0.247041);
}

double NNfunction_sb_uLsR::synapse0x1f597a0() {
   return (neuron0x1f3a2b0()*-0.0221931);
}

double NNfunction_sb_uLsR::synapse0x1f597e0() {
   return (neuron0x1f3a5f0()*0.168327);
}

double NNfunction_sb_uLsR::synapse0x1f59820() {
   return (neuron0x1f3a930()*0.0512425);
}

double NNfunction_sb_uLsR::synapse0x1f59860() {
   return (neuron0x1f3ac70()*0.625619);
}

double NNfunction_sb_uLsR::synapse0x1f598a0() {
   return (neuron0x1f3afb0()*-0.0140205);
}

double NNfunction_sb_uLsR::synapse0x1f598e0() {
   return (neuron0x1f3b2f0()*0.219654);
}

double NNfunction_sb_uLsR::synapse0x1f59920() {
   return (neuron0x1f3b630()*-0.397291);
}

double NNfunction_sb_uLsR::synapse0x1f593b0() {
   return (neuron0x1f3b970()*0.359418);
}

double NNfunction_sb_uLsR::synapse0x1f593f0() {
   return (neuron0x1f3bed0()*0.387559);
}

double NNfunction_sb_uLsR::synapse0x1f59a70() {
   return (neuron0x1f3c0f0()*-0.0991621);
}

double NNfunction_sb_uLsR::synapse0x1f59ab0() {
   return (neuron0x1f3c430()*0.161804);
}

double NNfunction_sb_uLsR::synapse0x1f59af0() {
   return (neuron0x1f3c770()*-0.669511);
}

double NNfunction_sb_uLsR::synapse0x1f59b30() {
   return (neuron0x1f3cab0()*0.269273);
}

double NNfunction_sb_uLsR::synapse0x1f59b70() {
   return (neuron0x1f3cdf0()*-0.0732092);
}

double NNfunction_sb_uLsR::synapse0x1f59bb0() {
   return (neuron0x1f3d130()*0.176078);
}

double NNfunction_sb_uLsR::synapse0x1f42660() {
   return (neuron0x1f38570()*0.0020551);
}

double NNfunction_sb_uLsR::synapse0x1f426a0() {
   return (neuron0x1f388b0()*0.0096069);
}

double NNfunction_sb_uLsR::synapse0x1f426e0() {
   return (neuron0x1f38bf0()*-0.00973528);
}

double NNfunction_sb_uLsR::synapse0x1f42720() {
   return (neuron0x1f38f30()*-3.73874);
}

double NNfunction_sb_uLsR::synapse0x1f42760() {
   return (neuron0x1f39270()*0.00642419);
}

double NNfunction_sb_uLsR::synapse0x1f427a0() {
   return (neuron0x1f395b0()*-0.00849788);
}

double NNfunction_sb_uLsR::synapse0x1f427e0() {
   return (neuron0x1f398f0()*-0.00995269);
}

double NNfunction_sb_uLsR::synapse0x1f42820() {
   return (neuron0x1f39c30()*0.00164148);
}

double NNfunction_sb_uLsR::synapse0x1f5a340() {
   return (neuron0x1f39f70()*-0.0101485);
}

double NNfunction_sb_uLsR::synapse0x1f5a380() {
   return (neuron0x1f3a2b0()*-0.0143023);
}

double NNfunction_sb_uLsR::synapse0x1f5a3c0() {
   return (neuron0x1f3a5f0()*0.0264776);
}

double NNfunction_sb_uLsR::synapse0x1f5a400() {
   return (neuron0x1f3a930()*-0.195251);
}

double NNfunction_sb_uLsR::synapse0x1f5a440() {
   return (neuron0x1f3ac70()*0.0389285);
}

double NNfunction_sb_uLsR::synapse0x1f5a480() {
   return (neuron0x1f3afb0()*-0.0266315);
}

double NNfunction_sb_uLsR::synapse0x1f5a4c0() {
   return (neuron0x1f3b2f0()*0.0335569);
}

double NNfunction_sb_uLsR::synapse0x1f5a500() {
   return (neuron0x1f3b630()*0.000959457);
}

double NNfunction_sb_uLsR::synapse0x1f59d80() {
   return (neuron0x1f3b970()*-0.0105411);
}

double NNfunction_sb_uLsR::synapse0x1f59dc0() {
   return (neuron0x1f3bed0()*0.00322303);
}

double NNfunction_sb_uLsR::synapse0x1f5a650() {
   return (neuron0x1f3c0f0()*-0.22111);
}

double NNfunction_sb_uLsR::synapse0x1f5a690() {
   return (neuron0x1f3c430()*0.00376037);
}

double NNfunction_sb_uLsR::synapse0x1f5a6d0() {
   return (neuron0x1f3c770()*0.0107177);
}

double NNfunction_sb_uLsR::synapse0x1f5a710() {
   return (neuron0x1f3cab0()*0.0131886);
}

double NNfunction_sb_uLsR::synapse0x1f5a750() {
   return (neuron0x1f3cdf0()*0.0102472);
}

double NNfunction_sb_uLsR::synapse0x1f5a790() {
   return (neuron0x1f3d130()*0.000910074);
}

double NNfunction_sb_uLsR::synapse0x1f5ab10() {
   return (neuron0x1f38570()*0.0174164);
}

double NNfunction_sb_uLsR::synapse0x1f5ab50() {
   return (neuron0x1f388b0()*0.0677293);
}

double NNfunction_sb_uLsR::synapse0x1f5ab90() {
   return (neuron0x1f38bf0()*0.49246);
}

double NNfunction_sb_uLsR::synapse0x1f5abd0() {
   return (neuron0x1f38f30()*0.438646);
}

double NNfunction_sb_uLsR::synapse0x1f5ac10() {
   return (neuron0x1f39270()*0.636662);
}

double NNfunction_sb_uLsR::synapse0x1f5ac50() {
   return (neuron0x1f395b0()*-0.629893);
}

double NNfunction_sb_uLsR::synapse0x1f5ac90() {
   return (neuron0x1f398f0()*-0.145764);
}

double NNfunction_sb_uLsR::synapse0x1f5acd0() {
   return (neuron0x1f39c30()*0.0247684);
}

double NNfunction_sb_uLsR::synapse0x1f5ad10() {
   return (neuron0x1f39f70()*0.490386);
}

double NNfunction_sb_uLsR::synapse0x1f5ad50() {
   return (neuron0x1f3a2b0()*-0.0443403);
}

double NNfunction_sb_uLsR::synapse0x1f5ad90() {
   return (neuron0x1f3a5f0()*-0.325325);
}

double NNfunction_sb_uLsR::synapse0x1f5add0() {
   return (neuron0x1f3a930()*0.443728);
}

double NNfunction_sb_uLsR::synapse0x1f5ae10() {
   return (neuron0x1f3ac70()*0.337601);
}

double NNfunction_sb_uLsR::synapse0x1f5ae50() {
   return (neuron0x1f3afb0()*-0.648605);
}

double NNfunction_sb_uLsR::synapse0x1f5ae90() {
   return (neuron0x1f3b2f0()*0.37442);
}

double NNfunction_sb_uLsR::synapse0x1f5aed0() {
   return (neuron0x1f3b630()*0.596544);
}

double NNfunction_sb_uLsR::synapse0x1f5a960() {
   return (neuron0x1f3b970()*-0.0896285);
}

double NNfunction_sb_uLsR::synapse0x1f5a9a0() {
   return (neuron0x1f3bed0()*-0.657878);
}

double NNfunction_sb_uLsR::synapse0x1f5b020() {
   return (neuron0x1f3c0f0()*0.138707);
}

double NNfunction_sb_uLsR::synapse0x1f5b060() {
   return (neuron0x1f3c430()*-0.0876993);
}

double NNfunction_sb_uLsR::synapse0x1f5b0a0() {
   return (neuron0x1f3c770()*-0.138242);
}

double NNfunction_sb_uLsR::synapse0x1f5b0e0() {
   return (neuron0x1f3cab0()*-0.198174);
}

double NNfunction_sb_uLsR::synapse0x1f5b120() {
   return (neuron0x1f3cdf0()*-0.0447035);
}

double NNfunction_sb_uLsR::synapse0x1f5b160() {
   return (neuron0x1f3d130()*0.0378514);
}

double NNfunction_sb_uLsR::synapse0x1f5b4e0() {
   return (neuron0x1f38570()*0.00930434);
}

double NNfunction_sb_uLsR::synapse0x1f5b520() {
   return (neuron0x1f388b0()*0.003852);
}

double NNfunction_sb_uLsR::synapse0x1f5b560() {
   return (neuron0x1f38bf0()*-0.408717);
}

double NNfunction_sb_uLsR::synapse0x1f5b5a0() {
   return (neuron0x1f38f30()*0.0365351);
}

double NNfunction_sb_uLsR::synapse0x1f5b5e0() {
   return (neuron0x1f39270()*0.0386454);
}

double NNfunction_sb_uLsR::synapse0x1f5b620() {
   return (neuron0x1f395b0()*-0.0133686);
}

double NNfunction_sb_uLsR::synapse0x1f5b660() {
   return (neuron0x1f398f0()*0.0151715);
}

double NNfunction_sb_uLsR::synapse0x1f5b6a0() {
   return (neuron0x1f39c30()*-0.0162329);
}

double NNfunction_sb_uLsR::synapse0x1f5b6e0() {
   return (neuron0x1f39f70()*-0.00144046);
}

double NNfunction_sb_uLsR::synapse0x1f5b720() {
   return (neuron0x1f3a2b0()*-0.00971711);
}

double NNfunction_sb_uLsR::synapse0x1f5b760() {
   return (neuron0x1f3a5f0()*0.0322669);
}

double NNfunction_sb_uLsR::synapse0x1f5b7a0() {
   return (neuron0x1f3a930()*0.411105);
}

double NNfunction_sb_uLsR::synapse0x1f5b7e0() {
   return (neuron0x1f3ac70()*-0.137488);
}

double NNfunction_sb_uLsR::synapse0x1f5b820() {
   return (neuron0x1f3afb0()*0.0263594);
}

double NNfunction_sb_uLsR::synapse0x1f5b860() {
   return (neuron0x1f3b2f0()*-0.209472);
}

double NNfunction_sb_uLsR::synapse0x1f5b8a0() {
   return (neuron0x1f3b630()*-0.136681);
}

double NNfunction_sb_uLsR::synapse0x1f5b330() {
   return (neuron0x1f3b970()*0.0246459);
}

double NNfunction_sb_uLsR::synapse0x1f5b370() {
   return (neuron0x1f3bed0()*-0.125154);
}

double NNfunction_sb_uLsR::synapse0x1f4bea0() {
   return (neuron0x1f3c0f0()*0.131034);
}

double NNfunction_sb_uLsR::synapse0x1f4bee0() {
   return (neuron0x1f3c430()*-0.000203383);
}

double NNfunction_sb_uLsR::synapse0x1f4bf20() {
   return (neuron0x1f3c770()*0.0270689);
}

double NNfunction_sb_uLsR::synapse0x1f4bf60() {
   return (neuron0x1f3cab0()*0.0122958);
}

double NNfunction_sb_uLsR::synapse0x1f4bfa0() {
   return (neuron0x1f3cdf0()*-0.00326679);
}

double NNfunction_sb_uLsR::synapse0x1f4bfe0() {
   return (neuron0x1f3d130()*0.012513);
}

double NNfunction_sb_uLsR::synapse0x1f4c360() {
   return (neuron0x1f38570()*0.318238);
}

double NNfunction_sb_uLsR::synapse0x1f4c3a0() {
   return (neuron0x1f388b0()*-0.160984);
}

double NNfunction_sb_uLsR::synapse0x1f4c3e0() {
   return (neuron0x1f38bf0()*0.721443);
}

double NNfunction_sb_uLsR::synapse0x1f4c420() {
   return (neuron0x1f38f30()*0.0907048);
}

double NNfunction_sb_uLsR::synapse0x1f4c460() {
   return (neuron0x1f39270()*0.649688);
}

double NNfunction_sb_uLsR::synapse0x1f4c4a0() {
   return (neuron0x1f395b0()*0.334729);
}

double NNfunction_sb_uLsR::synapse0x1f4c4e0() {
   return (neuron0x1f398f0()*-0.315928);
}

double NNfunction_sb_uLsR::synapse0x1f4c520() {
   return (neuron0x1f39c30()*0.256848);
}

double NNfunction_sb_uLsR::synapse0x1f4c560() {
   return (neuron0x1f39f70()*-0.577009);
}

double NNfunction_sb_uLsR::synapse0x1f4c5a0() {
   return (neuron0x1f3a2b0()*0.179563);
}

double NNfunction_sb_uLsR::synapse0x1f4c5e0() {
   return (neuron0x1f3a5f0()*-0.0814751);
}

double NNfunction_sb_uLsR::synapse0x1f4c620() {
   return (neuron0x1f3a930()*0.638724);
}

double NNfunction_sb_uLsR::synapse0x1f4c660() {
   return (neuron0x1f3ac70()*-0.175818);
}

double NNfunction_sb_uLsR::synapse0x1f4c6a0() {
   return (neuron0x1f3afb0()*-0.277732);
}

double NNfunction_sb_uLsR::synapse0x1f4c6e0() {
   return (neuron0x1f3b2f0()*-0.0580323);
}

double NNfunction_sb_uLsR::synapse0x1f4c720() {
   return (neuron0x1f3b630()*0.420719);
}

double NNfunction_sb_uLsR::synapse0x1f4c1b0() {
   return (neuron0x1f3b970()*-0.596759);
}

double NNfunction_sb_uLsR::synapse0x1f4c1f0() {
   return (neuron0x1f3bed0()*0.229517);
}

double NNfunction_sb_uLsR::synapse0x1f4c870() {
   return (neuron0x1f3c0f0()*-0.740764);
}

double NNfunction_sb_uLsR::synapse0x1f4c8b0() {
   return (neuron0x1f3c430()*0.0817082);
}

double NNfunction_sb_uLsR::synapse0x1f4c8f0() {
   return (neuron0x1f3c770()*0.369223);
}

double NNfunction_sb_uLsR::synapse0x1f4c930() {
   return (neuron0x1f3cab0()*0.346199);
}

double NNfunction_sb_uLsR::synapse0x1f4c970() {
   return (neuron0x1f3cdf0()*-0.127056);
}

double NNfunction_sb_uLsR::synapse0x1f4c9b0() {
   return (neuron0x1f3d130()*-0.219963);
}

double NNfunction_sb_uLsR::synapse0x1f4cd30() {
   return (neuron0x1f38570()*-0.0229026);
}

double NNfunction_sb_uLsR::synapse0x1f4cd70() {
   return (neuron0x1f388b0()*-0.0101799);
}

double NNfunction_sb_uLsR::synapse0x1f4cdb0() {
   return (neuron0x1f38bf0()*0.00589057);
}

double NNfunction_sb_uLsR::synapse0x1f4cdf0() {
   return (neuron0x1f38f30()*-0.121344);
}

double NNfunction_sb_uLsR::synapse0x1f4ce30() {
   return (neuron0x1f39270()*-0.00186537);
}

double NNfunction_sb_uLsR::synapse0x1f4ce70() {
   return (neuron0x1f395b0()*-0.00489592);
}

double NNfunction_sb_uLsR::synapse0x1f4ceb0() {
   return (neuron0x1f398f0()*-0.00410705);
}

double NNfunction_sb_uLsR::synapse0x1f4cef0() {
   return (neuron0x1f39c30()*-0.0117865);
}

double NNfunction_sb_uLsR::synapse0x1f4cf30() {
   return (neuron0x1f39f70()*0.0178733);
}

double NNfunction_sb_uLsR::synapse0x1f4cf70() {
   return (neuron0x1f3a2b0()*-0.00708247);
}

double NNfunction_sb_uLsR::synapse0x1f4cfb0() {
   return (neuron0x1f3a5f0()*-0.103044);
}

double NNfunction_sb_uLsR::synapse0x1f4cff0() {
   return (neuron0x1f3a930()*-0.410007);
}

double NNfunction_sb_uLsR::synapse0x1f4d030() {
   return (neuron0x1f3ac70()*0.0251565);
}

double NNfunction_sb_uLsR::synapse0x1f4d070() {
   return (neuron0x1f3afb0()*-0.00815205);
}

double NNfunction_sb_uLsR::synapse0x1f4d0b0() {
   return (neuron0x1f3b2f0()*0.0345891);
}

double NNfunction_sb_uLsR::synapse0x1f4d0f0() {
   return (neuron0x1f3b630()*0.0160038);
}

double NNfunction_sb_uLsR::synapse0x1f4cb80() {
   return (neuron0x1f3b970()*-0.0178709);
}

double NNfunction_sb_uLsR::synapse0x1f4cbc0() {
   return (neuron0x1f3bed0()*-0.0072681);
}

double NNfunction_sb_uLsR::synapse0x1f4d240() {
   return (neuron0x1f3c0f0()*-0.240285);
}

double NNfunction_sb_uLsR::synapse0x1f4d280() {
   return (neuron0x1f3c430()*-0.0270068);
}

double NNfunction_sb_uLsR::synapse0x1f4d2c0() {
   return (neuron0x1f3c770()*0.0141098);
}

double NNfunction_sb_uLsR::synapse0x1f4d300() {
   return (neuron0x1f3cab0()*0.0113256);
}

double NNfunction_sb_uLsR::synapse0x1f4d340() {
   return (neuron0x1f3cdf0()*-0.0151425);
}

double NNfunction_sb_uLsR::synapse0x1f4d380() {
   return (neuron0x1f3d130()*-0.006261);
}

double NNfunction_sb_uLsR::synapse0x1f4d700() {
   return (neuron0x1f38570()*-0.0145482);
}

double NNfunction_sb_uLsR::synapse0x1f4d740() {
   return (neuron0x1f388b0()*-0.0108734);
}

double NNfunction_sb_uLsR::synapse0x1f4d780() {
   return (neuron0x1f38bf0()*-0.0789709);
}

double NNfunction_sb_uLsR::synapse0x1f4d7c0() {
   return (neuron0x1f38f30()*0.0649493);
}

double NNfunction_sb_uLsR::synapse0x1f4d800() {
   return (neuron0x1f39270()*-0.0219191);
}

double NNfunction_sb_uLsR::synapse0x1f4d840() {
   return (neuron0x1f395b0()*-0.0084077);
}

double NNfunction_sb_uLsR::synapse0x1f4d880() {
   return (neuron0x1f398f0()*-0.0119638);
}

double NNfunction_sb_uLsR::synapse0x1f4d8c0() {
   return (neuron0x1f39c30()*-0.00206622);
}

double NNfunction_sb_uLsR::synapse0x1f4d900() {
   return (neuron0x1f39f70()*-0.00284061);
}

double NNfunction_sb_uLsR::synapse0x1f4d940() {
   return (neuron0x1f3a2b0()*-0.0185511);
}

double NNfunction_sb_uLsR::synapse0x1f4d980() {
   return (neuron0x1f3a5f0()*-0.00357974);
}

double NNfunction_sb_uLsR::synapse0x1f4d9c0() {
   return (neuron0x1f3a930()*2.26824);
}

double NNfunction_sb_uLsR::synapse0x1f4da00() {
   return (neuron0x1f3ac70()*0.0159662);
}

double NNfunction_sb_uLsR::synapse0x1f4da40() {
   return (neuron0x1f3afb0()*0.0414631);
}

double NNfunction_sb_uLsR::synapse0x1f4da80() {
   return (neuron0x1f3b2f0()*0.0266924);
}

double NNfunction_sb_uLsR::synapse0x1f4dac0() {
   return (neuron0x1f3b630()*0.00348841);
}

double NNfunction_sb_uLsR::synapse0x1f4d550() {
   return (neuron0x1f3b970()*0.0224217);
}

double NNfunction_sb_uLsR::synapse0x1f4d590() {
   return (neuron0x1f3bed0()*0.0248646);
}

double NNfunction_sb_uLsR::synapse0x1f4dc10() {
   return (neuron0x1f3c0f0()*-0.272709);
}

double NNfunction_sb_uLsR::synapse0x1f4dc50() {
   return (neuron0x1f3c430()*0.0243782);
}

double NNfunction_sb_uLsR::synapse0x1f4dc90() {
   return (neuron0x1f3c770()*-0.0118221);
}

double NNfunction_sb_uLsR::synapse0x1f4dcd0() {
   return (neuron0x1f3cab0()*-0.00151099);
}

double NNfunction_sb_uLsR::synapse0x1f4dd10() {
   return (neuron0x1f3cdf0()*-0.0030587);
}

double NNfunction_sb_uLsR::synapse0x1f4dd50() {
   return (neuron0x1f3d130()*0.0112925);
}

double NNfunction_sb_uLsR::synapse0x1f5fc20() {
   return (neuron0x1f38570()*-0.181412);
}

double NNfunction_sb_uLsR::synapse0x1f5fc60() {
   return (neuron0x1f388b0()*0.292036);
}

double NNfunction_sb_uLsR::synapse0x1f5fca0() {
   return (neuron0x1f38bf0()*-0.549008);
}

double NNfunction_sb_uLsR::synapse0x1f5fce0() {
   return (neuron0x1f38f30()*0.358986);
}

double NNfunction_sb_uLsR::synapse0x1f5fd20() {
   return (neuron0x1f39270()*-0.130525);
}

double NNfunction_sb_uLsR::synapse0x1f5fd60() {
   return (neuron0x1f395b0()*-0.219897);
}

double NNfunction_sb_uLsR::synapse0x1f5fda0() {
   return (neuron0x1f398f0()*-0.468541);
}

double NNfunction_sb_uLsR::synapse0x1f5fde0() {
   return (neuron0x1f39c30()*-0.182251);
}

double NNfunction_sb_uLsR::synapse0x1f5fe20() {
   return (neuron0x1f39f70()*-0.38202);
}

double NNfunction_sb_uLsR::synapse0x1f5fe60() {
   return (neuron0x1f3a2b0()*0.401845);
}

double NNfunction_sb_uLsR::synapse0x1f5fea0() {
   return (neuron0x1f3a5f0()*-0.286383);
}

double NNfunction_sb_uLsR::synapse0x1f5fee0() {
   return (neuron0x1f3a930()*0.242473);
}

double NNfunction_sb_uLsR::synapse0x1f5ff20() {
   return (neuron0x1f3ac70()*-0.544985);
}

double NNfunction_sb_uLsR::synapse0x1f5ff60() {
   return (neuron0x1f3afb0()*-0.587929);
}

double NNfunction_sb_uLsR::synapse0x1f5ffa0() {
   return (neuron0x1f3b2f0()*0.0747083);
}

double NNfunction_sb_uLsR::synapse0x1f5ffe0() {
   return (neuron0x1f3b630()*-0.353323);
}

double NNfunction_sb_uLsR::synapse0x1f4dd90() {
   return (neuron0x1f3b970()*-0.0458363);
}

double NNfunction_sb_uLsR::synapse0x1f4ddd0() {
   return (neuron0x1f3bed0()*0.00316071);
}

double NNfunction_sb_uLsR::synapse0x1f60130() {
   return (neuron0x1f3c0f0()*0.349771);
}

double NNfunction_sb_uLsR::synapse0x1f60170() {
   return (neuron0x1f3c430()*-0.0422811);
}

double NNfunction_sb_uLsR::synapse0x1f601b0() {
   return (neuron0x1f3c770()*-0.0694605);
}

double NNfunction_sb_uLsR::synapse0x1f601f0() {
   return (neuron0x1f3cab0()*0.232308);
}

double NNfunction_sb_uLsR::synapse0x1f60230() {
   return (neuron0x1f3cdf0()*-0.473406);
}

double NNfunction_sb_uLsR::synapse0x1f60270() {
   return (neuron0x1f3d130()*-0.372641);
}

double NNfunction_sb_uLsR::synapse0x1f605f0() {
   return (neuron0x1f38570()*-0.111623);
}

double NNfunction_sb_uLsR::synapse0x1f60630() {
   return (neuron0x1f388b0()*0.113398);
}

double NNfunction_sb_uLsR::synapse0x1f60670() {
   return (neuron0x1f38bf0()*-0.568191);
}

double NNfunction_sb_uLsR::synapse0x1f606b0() {
   return (neuron0x1f38f30()*0.689332);
}

double NNfunction_sb_uLsR::synapse0x1f606f0() {
   return (neuron0x1f39270()*0.268472);
}

double NNfunction_sb_uLsR::synapse0x1f60730() {
   return (neuron0x1f395b0()*0.175787);
}

double NNfunction_sb_uLsR::synapse0x1f60770() {
   return (neuron0x1f398f0()*0.0163213);
}

double NNfunction_sb_uLsR::synapse0x1f607b0() {
   return (neuron0x1f39c30()*0.503536);
}

double NNfunction_sb_uLsR::synapse0x1f607f0() {
   return (neuron0x1f39f70()*0.17973);
}

double NNfunction_sb_uLsR::synapse0x1f60830() {
   return (neuron0x1f3a2b0()*-0.145142);
}

double NNfunction_sb_uLsR::synapse0x1f60870() {
   return (neuron0x1f3a5f0()*0.12129);
}

double NNfunction_sb_uLsR::synapse0x1f608b0() {
   return (neuron0x1f3a930()*-0.432531);
}

double NNfunction_sb_uLsR::synapse0x1f608f0() {
   return (neuron0x1f3ac70()*0.0218489);
}

double NNfunction_sb_uLsR::synapse0x1f60930() {
   return (neuron0x1f3afb0()*0.164407);
}

double NNfunction_sb_uLsR::synapse0x1f60970() {
   return (neuron0x1f3b2f0()*1.0821);
}

double NNfunction_sb_uLsR::synapse0x1f609b0() {
   return (neuron0x1f3b630()*0.522637);
}

double NNfunction_sb_uLsR::synapse0x1f60440() {
   return (neuron0x1f3b970()*0.00399279);
}

double NNfunction_sb_uLsR::synapse0x1f60480() {
   return (neuron0x1f3bed0()*0.424844);
}

double NNfunction_sb_uLsR::synapse0x1f60b00() {
   return (neuron0x1f3c0f0()*-0.120907);
}

double NNfunction_sb_uLsR::synapse0x1f60b40() {
   return (neuron0x1f3c430()*0.0870495);
}

double NNfunction_sb_uLsR::synapse0x1f60b80() {
   return (neuron0x1f3c770()*0.858669);
}

double NNfunction_sb_uLsR::synapse0x1f60bc0() {
   return (neuron0x1f3cab0()*0.07797);
}

double NNfunction_sb_uLsR::synapse0x1f60c00() {
   return (neuron0x1f3cdf0()*0.327378);
}

double NNfunction_sb_uLsR::synapse0x1f60c40() {
   return (neuron0x1f3d130()*0.0435265);
}

double NNfunction_sb_uLsR::synapse0x1f60fc0() {
   return (neuron0x1f38570()*-0.0561307);
}

double NNfunction_sb_uLsR::synapse0x1f61000() {
   return (neuron0x1f388b0()*-0.0425525);
}

double NNfunction_sb_uLsR::synapse0x1f61040() {
   return (neuron0x1f38bf0()*-0.0504249);
}

double NNfunction_sb_uLsR::synapse0x1f61080() {
   return (neuron0x1f38f30()*9.56114);
}

double NNfunction_sb_uLsR::synapse0x1f610c0() {
   return (neuron0x1f39270()*-0.0408024);
}

double NNfunction_sb_uLsR::synapse0x1f61100() {
   return (neuron0x1f395b0()*-0.030039);
}

double NNfunction_sb_uLsR::synapse0x1f61140() {
   return (neuron0x1f398f0()*-0.00474446);
}

double NNfunction_sb_uLsR::synapse0x1f61180() {
   return (neuron0x1f39c30()*-0.0138897);
}

double NNfunction_sb_uLsR::synapse0x1f611c0() {
   return (neuron0x1f39f70()*-0.00211987);
}

double NNfunction_sb_uLsR::synapse0x1f61200() {
   return (neuron0x1f3a2b0()*0.0264846);
}

double NNfunction_sb_uLsR::synapse0x1f61240() {
   return (neuron0x1f3a5f0()*0.0234663);
}

double NNfunction_sb_uLsR::synapse0x1f61280() {
   return (neuron0x1f3a930()*0.112072);
}

double NNfunction_sb_uLsR::synapse0x1f612c0() {
   return (neuron0x1f3ac70()*-0.0329312);
}

double NNfunction_sb_uLsR::synapse0x1f61300() {
   return (neuron0x1f3afb0()*0.0516622);
}

double NNfunction_sb_uLsR::synapse0x1f61340() {
   return (neuron0x1f3b2f0()*0.0351878);
}

double NNfunction_sb_uLsR::synapse0x1f61380() {
   return (neuron0x1f3b630()*-0.0403663);
}

double NNfunction_sb_uLsR::synapse0x1f60e10() {
   return (neuron0x1f3b970()*-0.00447042);
}

double NNfunction_sb_uLsR::synapse0x1f60e50() {
   return (neuron0x1f3bed0()*0.0391159);
}

double NNfunction_sb_uLsR::synapse0x1f614d0() {
   return (neuron0x1f3c0f0()*0.0881734);
}

double NNfunction_sb_uLsR::synapse0x1f61510() {
   return (neuron0x1f3c430()*0.0964883);
}

double NNfunction_sb_uLsR::synapse0x1f61550() {
   return (neuron0x1f3c770()*-0.0263525);
}

double NNfunction_sb_uLsR::synapse0x1f61590() {
   return (neuron0x1f3cab0()*-0.0336242);
}

double NNfunction_sb_uLsR::synapse0x1f615d0() {
   return (neuron0x1f3cdf0()*0.00385345);
}

double NNfunction_sb_uLsR::synapse0x1f61610() {
   return (neuron0x1f3d130()*0.0596103);
}

double NNfunction_sb_uLsR::synapse0x1f61990() {
   return (neuron0x1f38570()*-0.195486);
}

double NNfunction_sb_uLsR::synapse0x1f619d0() {
   return (neuron0x1f388b0()*0.175009);
}

double NNfunction_sb_uLsR::synapse0x1f61a10() {
   return (neuron0x1f38bf0()*-0.490048);
}

double NNfunction_sb_uLsR::synapse0x1f61a50() {
   return (neuron0x1f38f30()*0.33581);
}

double NNfunction_sb_uLsR::synapse0x1f61a90() {
   return (neuron0x1f39270()*0.304671);
}

double NNfunction_sb_uLsR::synapse0x1f61ad0() {
   return (neuron0x1f395b0()*0.0924592);
}

double NNfunction_sb_uLsR::synapse0x1f61b10() {
   return (neuron0x1f398f0()*-1.17533);
}

double NNfunction_sb_uLsR::synapse0x1f61b50() {
   return (neuron0x1f39c30()*-0.136805);
}

double NNfunction_sb_uLsR::synapse0x1f61b90() {
   return (neuron0x1f39f70()*0.406106);
}

double NNfunction_sb_uLsR::synapse0x1f61bd0() {
   return (neuron0x1f3a2b0()*0.310764);
}

double NNfunction_sb_uLsR::synapse0x1f61c10() {
   return (neuron0x1f3a5f0()*-0.120852);
}

double NNfunction_sb_uLsR::synapse0x1f61c50() {
   return (neuron0x1f3a930()*-0.158705);
}

double NNfunction_sb_uLsR::synapse0x1f61c90() {
   return (neuron0x1f3ac70()*0.237233);
}

double NNfunction_sb_uLsR::synapse0x1f61cd0() {
   return (neuron0x1f3afb0()*-0.19358);
}

double NNfunction_sb_uLsR::synapse0x1f61d10() {
   return (neuron0x1f3b2f0()*-0.0349921);
}

double NNfunction_sb_uLsR::synapse0x1f61d50() {
   return (neuron0x1f3b630()*-1.70983);
}

double NNfunction_sb_uLsR::synapse0x1f617e0() {
   return (neuron0x1f3b970()*0.347716);
}

double NNfunction_sb_uLsR::synapse0x1f61820() {
   return (neuron0x1f3bed0()*0.677577);
}

double NNfunction_sb_uLsR::synapse0x1f61ea0() {
   return (neuron0x1f3c0f0()*0.0215424);
}

double NNfunction_sb_uLsR::synapse0x1f61ee0() {
   return (neuron0x1f3c430()*0.0490126);
}

double NNfunction_sb_uLsR::synapse0x1f61f20() {
   return (neuron0x1f3c770()*0.254079);
}

double NNfunction_sb_uLsR::synapse0x1f61f60() {
   return (neuron0x1f3cab0()*0.0802167);
}

double NNfunction_sb_uLsR::synapse0x1f61fa0() {
   return (neuron0x1f3cdf0()*-0.206779);
}

double NNfunction_sb_uLsR::synapse0x1f61fe0() {
   return (neuron0x1f3d130()*0.36975);
}

double NNfunction_sb_uLsR::synapse0x1f3e580() {
   return (neuron0x1f3d5d0()*-0.0491588);
}

double NNfunction_sb_uLsR::synapse0x1f3e5c0() {
   return (neuron0x1f3dee0()*-0.0830188);
}

double NNfunction_sb_uLsR::synapse0x1f3fa90() {
   return (neuron0x1f3e9c0()*-0.0129957);
}

double NNfunction_sb_uLsR::synapse0x1f3fad0() {
   return (neuron0x1cf8250()*-0.0451595);
}

double NNfunction_sb_uLsR::synapse0x1f40460() {
   return (neuron0x1f3f7e0()*0.0639635);
}

double NNfunction_sb_uLsR::synapse0x1f404a0() {
   return (neuron0x1f401b0()*-0.0140728);
}

double NNfunction_sb_uLsR::synapse0x1f41230() {
   return (neuron0x1f40f80()*0.134108);
}

double NNfunction_sb_uLsR::synapse0x1f41270() {
   return (neuron0x1f41950()*-0.0205575);
}

double NNfunction_sb_uLsR::synapse0x1f41c00() {
   return (neuron0x1f42320()*-0.144671);
}

double NNfunction_sb_uLsR::synapse0x1f41c40() {
   return (neuron0x1f42e00()*-0.0864062);
}

double NNfunction_sb_uLsR::synapse0x1f425d0() {
   return (neuron0x1f437d0()*-0.491626);
}

double NNfunction_sb_uLsR::synapse0x1f42610() {
   return (neuron0x1f408b0()*0.0262017);
}

double NNfunction_sb_uLsR::synapse0x1f430b0() {
   return (neuron0x1f45380()*4.70725);
}

double NNfunction_sb_uLsR::synapse0x1f430f0() {
   return (neuron0x1f45d50()*-0.319398);
}

double NNfunction_sb_uLsR::synapse0x1f43a80() {
   return (neuron0x1f46720()*-0.00424017);
}

double NNfunction_sb_uLsR::synapse0x1f43ac0() {
   return (neuron0x1f470f0()*0.0732435);
}

double NNfunction_sb_uLsR::synapse0x1f40b60() {
   return (neuron0x1f48f00()*-0.0427274);
}

double NNfunction_sb_uLsR::synapse0x1f40ba0() {
   return (neuron0x1f491e0()*0.587286);
}

double NNfunction_sb_uLsR::synapse0x1f45630() {
   return (neuron0x1f49bb0()*0.020914);
}

double NNfunction_sb_uLsR::synapse0x1f45670() {
   return (neuron0x1f4a580()*0.115625);
}

double NNfunction_sb_uLsR::synapse0x1f46000() {
   return (neuron0x1f4af50()*1.43995);
}

double NNfunction_sb_uLsR::synapse0x1f46040() {
   return (neuron0x1f4b920()*-0.000792451);
}

double NNfunction_sb_uLsR::synapse0x1f469d0() {
   return (neuron0x1f44470()*-0.0260081);
}

double NNfunction_sb_uLsR::synapse0x1f46a10() {
   return (neuron0x1f44e40()*-0.125649);
}

double NNfunction_sb_uLsR::synapse0x1f473a0() {
   return (neuron0x1f4e6b0()*1.29737);
}

double NNfunction_sb_uLsR::synapse0x1f473e0() {
   return (neuron0x1f4f080()*0.18269);
}

double NNfunction_sb_uLsR::synapse0x1f3b510() {
   return (neuron0x1f4fa50()*0.0597537);
}

double NNfunction_sb_uLsR::synapse0x1f3b550() {
   return (neuron0x1f50420()*-0.0310466);
}

double NNfunction_sb_uLsR::synapse0x1f49490() {
   return (neuron0x1f50df0()*5.1374);
}

double NNfunction_sb_uLsR::synapse0x1f494d0() {
   return (neuron0x1f517c0()*-1.23523);
}

double NNfunction_sb_uLsR::synapse0x1f49e60() {
   return (neuron0x1f52190()*-0.207764);
}

double NNfunction_sb_uLsR::synapse0x1f49ea0() {
   return (neuron0x1f52b60()*-0.0154084);
}

double NNfunction_sb_uLsR::synapse0x1f4a830() {
   return (neuron0x1f48bf0()*-0.0126014);
}

double NNfunction_sb_uLsR::synapse0x1f4a870() {
   return (neuron0x1f55740()*-2.55147);
}

double NNfunction_sb_uLsR::synapse0x1f4b200() {
   return (neuron0x1f56110()*0.237707);
}

double NNfunction_sb_uLsR::synapse0x1f4b240() {
   return (neuron0x1f56ae0()*-0.0622522);
}

double NNfunction_sb_uLsR::synapse0x1f4bbd0() {
   return (neuron0x1f574b0()*0.0499414);
}

double NNfunction_sb_uLsR::synapse0x1f4bc10() {
   return (neuron0x1f57e80()*0.387996);
}

double NNfunction_sb_uLsR::synapse0x1f44720() {
   return (neuron0x1f58850()*0.667595);
}

double NNfunction_sb_uLsR::synapse0x1f44760() {
   return (neuron0x1f59220()*-0.0287143);
}

double NNfunction_sb_uLsR::synapse0x1f4dfd0() {
   return (neuron0x1f59bf0()*-0.821401);
}

double NNfunction_sb_uLsR::synapse0x1f4e010() {
   return (neuron0x1f5a7d0()*0.0602833);
}

double NNfunction_sb_uLsR::synapse0x1f4e960() {
   return (neuron0x1f5b1a0()*0.73691);
}

double NNfunction_sb_uLsR::synapse0x1f4e9a0() {
   return (neuron0x1f4c020()*0.048614);
}

double NNfunction_sb_uLsR::synapse0x1f4f330() {
   return (neuron0x1f4c9f0()*-1.98315);
}

double NNfunction_sb_uLsR::synapse0x1f4f370() {
   return (neuron0x1f4d3c0()*-1.63463);
}

double NNfunction_sb_uLsR::synapse0x1f4fd00() {
   return (neuron0x1f5fa00()*-0.0434071);
}

double NNfunction_sb_uLsR::synapse0x1f4fd40() {
   return (neuron0x1f602b0()*-0.00494699);
}

double NNfunction_sb_uLsR::synapse0x1f506d0() {
   return (neuron0x1f60c80()*0.675611);
}

double NNfunction_sb_uLsR::synapse0x1f50710() {
   return (neuron0x1f61650()*0.0210076);
}

double NNfunction_sb_uLsR::synapse0x1f52e10() {
   return (neuron0x1f3d5d0()*0.0170414);
}

double NNfunction_sb_uLsR::synapse0x1f52e50() {
   return (neuron0x1f3dee0()*0.242976);
}

double NNfunction_sb_uLsR::synapse0x1f483d0() {
   return (neuron0x1f3e9c0()*0.099221);
}

double NNfunction_sb_uLsR::synapse0x1f48410() {
   return (neuron0x1cf8250()*0.0227788);
}

double NNfunction_sb_uLsR::synapse0x1f559f0() {
   return (neuron0x1f3f7e0()*-0.176719);
}

double NNfunction_sb_uLsR::synapse0x1f55a30() {
   return (neuron0x1f401b0()*-0.254777);
}

double NNfunction_sb_uLsR::synapse0x1f563c0() {
   return (neuron0x1f40f80()*-0.443816);
}

double NNfunction_sb_uLsR::synapse0x1f56400() {
   return (neuron0x1f41950()*0.029782);
}

double NNfunction_sb_uLsR::synapse0x1f56d90() {
   return (neuron0x1f42320()*0.621011);
}

double NNfunction_sb_uLsR::synapse0x1f56dd0() {
   return (neuron0x1f42e00()*0.535779);
}

double NNfunction_sb_uLsR::synapse0x1f57760() {
   return (neuron0x1f437d0()*-0.3656);
}

double NNfunction_sb_uLsR::synapse0x1f577a0() {
   return (neuron0x1f408b0()*-0.067447);
}

double NNfunction_sb_uLsR::synapse0x1f58130() {
   return (neuron0x1f45380()*-0.590304);
}

double NNfunction_sb_uLsR::synapse0x1f58170() {
   return (neuron0x1f45d50()*0.0159063);
}

double NNfunction_sb_uLsR::synapse0x1f58b00() {
   return (neuron0x1f46720()*-0.065951);
}

double NNfunction_sb_uLsR::synapse0x1f58b40() {
   return (neuron0x1f470f0()*-0.122146);
}

double NNfunction_sb_uLsR::synapse0x1f594d0() {
   return (neuron0x1f48f00()*0.0688947);
}

double NNfunction_sb_uLsR::synapse0x1f59510() {
   return (neuron0x1f491e0()*1.08888);
}

double NNfunction_sb_uLsR::synapse0x1f59ea0() {
   return (neuron0x1f49bb0()*-0.26214);
}

double NNfunction_sb_uLsR::synapse0x1f59ee0() {
   return (neuron0x1f4a580()*-0.0521533);
}

double NNfunction_sb_uLsR::synapse0x1f5aa80() {
   return (neuron0x1f4af50()*-0.182705);
}

double NNfunction_sb_uLsR::synapse0x1f5aac0() {
   return (neuron0x1f4b920()*0.111822);
}

double NNfunction_sb_uLsR::synapse0x1f5b450() {
   return (neuron0x1f44470()*0.0804396);
}

double NNfunction_sb_uLsR::synapse0x1f5b490() {
   return (neuron0x1f44e40()*0.186176);
}

double NNfunction_sb_uLsR::synapse0x1f4c2d0() {
   return (neuron0x1f4e6b0()*-1.20507);
}

double NNfunction_sb_uLsR::synapse0x1f4c310() {
   return (neuron0x1f4f080()*-0.651814);
}

double NNfunction_sb_uLsR::synapse0x1f4cca0() {
   return (neuron0x1f4fa50()*-0.173145);
}

double NNfunction_sb_uLsR::synapse0x1f4cce0() {
   return (neuron0x1f50420()*0.110808);
}

double NNfunction_sb_uLsR::synapse0x1f4d670() {
   return (neuron0x1f50df0()*0.141928);
}

double NNfunction_sb_uLsR::synapse0x1f4d6b0() {
   return (neuron0x1f517c0()*-1.13098);
}

double NNfunction_sb_uLsR::synapse0x1f5fb90() {
   return (neuron0x1f52190()*0.312287);
}

double NNfunction_sb_uLsR::synapse0x1f5fbd0() {
   return (neuron0x1f52b60()*-0.0577957);
}

double NNfunction_sb_uLsR::synapse0x1f60560() {
   return (neuron0x1f48bf0()*0.097176);
}

double NNfunction_sb_uLsR::synapse0x1f605a0() {
   return (neuron0x1f55740()*-1.25799);
}

double NNfunction_sb_uLsR::synapse0x1f60f30() {
   return (neuron0x1f56110()*-0.209026);
}

double NNfunction_sb_uLsR::synapse0x1f60f70() {
   return (neuron0x1f56ae0()*0.146077);
}

double NNfunction_sb_uLsR::synapse0x1f61900() {
   return (neuron0x1f574b0()*-0.400825);
}

double NNfunction_sb_uLsR::synapse0x1f61940() {
   return (neuron0x1f57e80()*-1.86678);
}

double NNfunction_sb_uLsR::synapse0x1f3d7f0() {
   return (neuron0x1f58850()*0.918348);
}

double NNfunction_sb_uLsR::synapse0x1f3d830() {
   return (neuron0x1f59220()*-0.0413629);
}

double NNfunction_sb_uLsR::synapse0x1f510a0() {
   return (neuron0x1f59bf0()*1.89129);
}

double NNfunction_sb_uLsR::synapse0x1f510e0() {
   return (neuron0x1f5a7d0()*-0.0829764);
}

double NNfunction_sb_uLsR::synapse0x1f62020() {
   return (neuron0x1f5b1a0()*0.153908);
}

double NNfunction_sb_uLsR::synapse0x1f62060() {
   return (neuron0x1f4c020()*-0.0242702);
}

double NNfunction_sb_uLsR::synapse0x1f620a0() {
   return (neuron0x1f4c9f0()*-1.52385);
}

double NNfunction_sb_uLsR::synapse0x1f620e0() {
   return (neuron0x1f4d3c0()*0.754504);
}

double NNfunction_sb_uLsR::synapse0x1f68f90() {
   return (neuron0x1f5fa00()*0.0748337);
}

double NNfunction_sb_uLsR::synapse0x1f68fd0() {
   return (neuron0x1f602b0()*-0.134428);
}

double NNfunction_sb_uLsR::synapse0x1f69010() {
   return (neuron0x1f60c80()*-1.11363);
}

double NNfunction_sb_uLsR::synapse0x1f69050() {
   return (neuron0x1f61650()*-0.0532424);
}

double NNfunction_sb_uLsR::synapse0x1f693d0() {
   return (neuron0x1f3d5d0()*1.1295);
}

double NNfunction_sb_uLsR::synapse0x1f69410() {
   return (neuron0x1f3dee0()*-0.0288662);
}

double NNfunction_sb_uLsR::synapse0x1f69450() {
   return (neuron0x1f3e9c0()*0.645911);
}

double NNfunction_sb_uLsR::synapse0x1f69490() {
   return (neuron0x1cf8250()*-0.00738132);
}

double NNfunction_sb_uLsR::synapse0x1f694d0() {
   return (neuron0x1f3f7e0()*-0.415189);
}

double NNfunction_sb_uLsR::synapse0x1f69510() {
   return (neuron0x1f401b0()*0.206264);
}

double NNfunction_sb_uLsR::synapse0x1f69550() {
   return (neuron0x1f40f80()*0.569346);
}

double NNfunction_sb_uLsR::synapse0x1f69590() {
   return (neuron0x1f41950()*-0.161715);
}

double NNfunction_sb_uLsR::synapse0x1f695d0() {
   return (neuron0x1f42320()*0.124676);
}

double NNfunction_sb_uLsR::synapse0x1f69610() {
   return (neuron0x1f42e00()*0.591242);
}

double NNfunction_sb_uLsR::synapse0x1f69650() {
   return (neuron0x1f437d0()*-0.754732);
}

double NNfunction_sb_uLsR::synapse0x1f69690() {
   return (neuron0x1f408b0()*-0.213982);
}

double NNfunction_sb_uLsR::synapse0x1f696d0() {
   return (neuron0x1f45380()*1.28967);
}

double NNfunction_sb_uLsR::synapse0x1f69710() {
   return (neuron0x1f45d50()*0.409595);
}

double NNfunction_sb_uLsR::synapse0x1f69750() {
   return (neuron0x1f46720()*-0.480054);
}

double NNfunction_sb_uLsR::synapse0x1f69790() {
   return (neuron0x1f470f0()*-0.382684);
}

double NNfunction_sb_uLsR::synapse0x1f69220() {
   return (neuron0x1f48f00()*0.441395);
}

double NNfunction_sb_uLsR::synapse0x1f69260() {
   return (neuron0x1f491e0()*-0.181686);
}

double NNfunction_sb_uLsR::synapse0x1f698e0() {
   return (neuron0x1f49bb0()*0.606192);
}

double NNfunction_sb_uLsR::synapse0x1f69920() {
   return (neuron0x1f4a580()*-0.116542);
}

double NNfunction_sb_uLsR::synapse0x1f69960() {
   return (neuron0x1f4af50()*0.272383);
}

double NNfunction_sb_uLsR::synapse0x1f699a0() {
   return (neuron0x1f4b920()*0.584197);
}

double NNfunction_sb_uLsR::synapse0x1f699e0() {
   return (neuron0x1f44470()*-0.525621);
}

double NNfunction_sb_uLsR::synapse0x1f69a20() {
   return (neuron0x1f44e40()*0.489781);
}

double NNfunction_sb_uLsR::synapse0x1f69a60() {
   return (neuron0x1f4e6b0()*0.378533);
}

double NNfunction_sb_uLsR::synapse0x1f69aa0() {
   return (neuron0x1f4f080()*-1.14883);
}

double NNfunction_sb_uLsR::synapse0x1f69ae0() {
   return (neuron0x1f4fa50()*-0.959017);
}

double NNfunction_sb_uLsR::synapse0x1f69b20() {
   return (neuron0x1f50420()*0.310555);
}

double NNfunction_sb_uLsR::synapse0x1f69b60() {
   return (neuron0x1f50df0()*0.840021);
}

double NNfunction_sb_uLsR::synapse0x1f69ba0() {
   return (neuron0x1f517c0()*-1.30242);
}

double NNfunction_sb_uLsR::synapse0x1f69be0() {
   return (neuron0x1f52190()*0.3748);
}

double NNfunction_sb_uLsR::synapse0x1f69c20() {
   return (neuron0x1f52b60()*0.407309);
}

double NNfunction_sb_uLsR::synapse0x1f697d0() {
   return (neuron0x1f48bf0()*-0.972071);
}

double NNfunction_sb_uLsR::synapse0x1f69810() {
   return (neuron0x1f55740()*-0.280098);
}

double NNfunction_sb_uLsR::synapse0x1f69850() {
   return (neuron0x1f56110()*0.942416);
}

double NNfunction_sb_uLsR::synapse0x1f69890() {
   return (neuron0x1f56ae0()*-0.405319);
}

double NNfunction_sb_uLsR::synapse0x1f69e70() {
   return (neuron0x1f574b0()*0.998853);
}

double NNfunction_sb_uLsR::synapse0x1f69eb0() {
   return (neuron0x1f57e80()*0.426022);
}

double NNfunction_sb_uLsR::synapse0x1f69ef0() {
   return (neuron0x1f58850()*0.330748);
}

double NNfunction_sb_uLsR::synapse0x1f69f30() {
   return (neuron0x1f59220()*0.334178);
}

double NNfunction_sb_uLsR::synapse0x1f69f70() {
   return (neuron0x1f59bf0()*-0.179654);
}

double NNfunction_sb_uLsR::synapse0x1f69fb0() {
   return (neuron0x1f5a7d0()*-0.52904);
}

double NNfunction_sb_uLsR::synapse0x1f69ff0() {
   return (neuron0x1f5b1a0()*0.249148);
}

double NNfunction_sb_uLsR::synapse0x1f6a030() {
   return (neuron0x1f4c020()*-0.195257);
}

double NNfunction_sb_uLsR::synapse0x1f6a070() {
   return (neuron0x1f4c9f0()*-0.252591);
}

double NNfunction_sb_uLsR::synapse0x1f6a0b0() {
   return (neuron0x1f4d3c0()*-0.122792);
}

double NNfunction_sb_uLsR::synapse0x1f6a0f0() {
   return (neuron0x1f5fa00()*0.810027);
}

double NNfunction_sb_uLsR::synapse0x1f6a130() {
   return (neuron0x1f602b0()*1.34225);
}

double NNfunction_sb_uLsR::synapse0x1f6a170() {
   return (neuron0x1f60c80()*-0.480875);
}

double NNfunction_sb_uLsR::synapse0x1f6a1b0() {
   return (neuron0x1f61650()*0.342985);
}

double NNfunction_sb_uLsR::synapse0x1f6a530() {
   return (neuron0x1f3d5d0()*-0.297918);
}

double NNfunction_sb_uLsR::synapse0x1f6a570() {
   return (neuron0x1f3dee0()*0.399882);
}

double NNfunction_sb_uLsR::synapse0x1f6a5b0() {
   return (neuron0x1f3e9c0()*-0.513374);
}

double NNfunction_sb_uLsR::synapse0x1f6a5f0() {
   return (neuron0x1cf8250()*0.551356);
}

double NNfunction_sb_uLsR::synapse0x1f6a630() {
   return (neuron0x1f3f7e0()*0.303875);
}

double NNfunction_sb_uLsR::synapse0x1f6a670() {
   return (neuron0x1f401b0()*0.966459);
}

double NNfunction_sb_uLsR::synapse0x1f6a6b0() {
   return (neuron0x1f40f80()*2.09077);
}

double NNfunction_sb_uLsR::synapse0x1f6a6f0() {
   return (neuron0x1f41950()*-0.172077);
}

double NNfunction_sb_uLsR::synapse0x1f6a730() {
   return (neuron0x1f42320()*-1.12344);
}

double NNfunction_sb_uLsR::synapse0x1f6a770() {
   return (neuron0x1f42e00()*0.712141);
}

double NNfunction_sb_uLsR::synapse0x1f6a7b0() {
   return (neuron0x1f437d0()*-0.195311);
}

double NNfunction_sb_uLsR::synapse0x1f6a7f0() {
   return (neuron0x1f408b0()*-0.348935);
}

double NNfunction_sb_uLsR::synapse0x1f6a830() {
   return (neuron0x1f45380()*2.33654);
}

double NNfunction_sb_uLsR::synapse0x1f6a870() {
   return (neuron0x1f45d50()*0.950873);
}

double NNfunction_sb_uLsR::synapse0x1f6a8b0() {
   return (neuron0x1f46720()*1.01626);
}

double NNfunction_sb_uLsR::synapse0x1f6a8f0() {
   return (neuron0x1f470f0()*-0.805478);
}

double NNfunction_sb_uLsR::synapse0x1f6a380() {
   return (neuron0x1f48f00()*0.569354);
}

double NNfunction_sb_uLsR::synapse0x1f6a3c0() {
   return (neuron0x1f491e0()*1.19954);
}

double NNfunction_sb_uLsR::synapse0x1f6aa40() {
   return (neuron0x1f49bb0()*0.380811);
}

double NNfunction_sb_uLsR::synapse0x1f6aa80() {
   return (neuron0x1f4a580()*0.0576834);
}

double NNfunction_sb_uLsR::synapse0x1f6aac0() {
   return (neuron0x1f4af50()*2.84827);
}

double NNfunction_sb_uLsR::synapse0x1f6ab00() {
   return (neuron0x1f4b920()*-0.857582);
}

double NNfunction_sb_uLsR::synapse0x1f6ab40() {
   return (neuron0x1f44470()*1.15254);
}

double NNfunction_sb_uLsR::synapse0x1f6ab80() {
   return (neuron0x1f44e40()*1.48861);
}

double NNfunction_sb_uLsR::synapse0x1f6abc0() {
   return (neuron0x1f4e6b0()*-0.595462);
}

double NNfunction_sb_uLsR::synapse0x1f6ac00() {
   return (neuron0x1f4f080()*0.152867);
}

double NNfunction_sb_uLsR::synapse0x1f6ac40() {
   return (neuron0x1f4fa50()*-0.829669);
}

double NNfunction_sb_uLsR::synapse0x1f6ac80() {
   return (neuron0x1f50420()*0.284226);
}

double NNfunction_sb_uLsR::synapse0x1f6acc0() {
   return (neuron0x1f50df0()*5.36038);
}

double NNfunction_sb_uLsR::synapse0x1f6ad00() {
   return (neuron0x1f517c0()*-1.46825);
}

double NNfunction_sb_uLsR::synapse0x1f6ad40() {
   return (neuron0x1f52190()*1.25396);
}

double NNfunction_sb_uLsR::synapse0x1f6ad80() {
   return (neuron0x1f52b60()*-0.353177);
}

double NNfunction_sb_uLsR::synapse0x1f6a930() {
   return (neuron0x1f48bf0()*0.385172);
}

double NNfunction_sb_uLsR::synapse0x1f6a970() {
   return (neuron0x1f55740()*-0.869116);
}

double NNfunction_sb_uLsR::synapse0x1f6a9b0() {
   return (neuron0x1f56110()*0.473686);
}

double NNfunction_sb_uLsR::synapse0x1f6a9f0() {
   return (neuron0x1f56ae0()*0.964689);
}

double NNfunction_sb_uLsR::synapse0x1f6afd0() {
   return (neuron0x1f574b0()*1.04332);
}

double NNfunction_sb_uLsR::synapse0x1f6b010() {
   return (neuron0x1f57e80()*3.10526);
}

double NNfunction_sb_uLsR::synapse0x1f6b050() {
   return (neuron0x1f58850()*0.806401);
}

double NNfunction_sb_uLsR::synapse0x1f6b090() {
   return (neuron0x1f59220()*0.759428);
}

double NNfunction_sb_uLsR::synapse0x1f6b0d0() {
   return (neuron0x1f59bf0()*-5.98913);
}

double NNfunction_sb_uLsR::synapse0x1f6b110() {
   return (neuron0x1f5a7d0()*0.857401);
}

double NNfunction_sb_uLsR::synapse0x1f6b150() {
   return (neuron0x1f5b1a0()*1.64467);
}

double NNfunction_sb_uLsR::synapse0x1f6b190() {
   return (neuron0x1f4c020()*-0.956608);
}

double NNfunction_sb_uLsR::synapse0x1f6b1d0() {
   return (neuron0x1f4c9f0()*-1.30394);
}

double NNfunction_sb_uLsR::synapse0x1f6b210() {
   return (neuron0x1f4d3c0()*1.04613);
}

double NNfunction_sb_uLsR::synapse0x1f6b250() {
   return (neuron0x1f5fa00()*1.13347);
}

double NNfunction_sb_uLsR::synapse0x1f6b290() {
   return (neuron0x1f602b0()*0.978165);
}

double NNfunction_sb_uLsR::synapse0x1f6b2d0() {
   return (neuron0x1f60c80()*-3.85653);
}

double NNfunction_sb_uLsR::synapse0x1f6b310() {
   return (neuron0x1f61650()*-0.21886);
}

double NNfunction_sb_uLsR::synapse0x1f6b690() {
   return (neuron0x1f3d5d0()*1.00547);
}

double NNfunction_sb_uLsR::synapse0x1f6b6d0() {
   return (neuron0x1f3dee0()*0.999923);
}

double NNfunction_sb_uLsR::synapse0x1f6b710() {
   return (neuron0x1f3e9c0()*-0.360657);
}

double NNfunction_sb_uLsR::synapse0x1f6b750() {
   return (neuron0x1cf8250()*0.619317);
}

double NNfunction_sb_uLsR::synapse0x1f6b790() {
   return (neuron0x1f3f7e0()*-0.963718);
}

double NNfunction_sb_uLsR::synapse0x1f6b7d0() {
   return (neuron0x1f401b0()*0.696337);
}

double NNfunction_sb_uLsR::synapse0x1f6b810() {
   return (neuron0x1f40f80()*-4.01098);
}

double NNfunction_sb_uLsR::synapse0x1f6b850() {
   return (neuron0x1f41950()*0.517167);
}

double NNfunction_sb_uLsR::synapse0x1f6b890() {
   return (neuron0x1f42320()*4.36451);
}

double NNfunction_sb_uLsR::synapse0x1f6b8d0() {
   return (neuron0x1f42e00()*1.931);
}

double NNfunction_sb_uLsR::synapse0x1f6b910() {
   return (neuron0x1f437d0()*-0.1894);
}

double NNfunction_sb_uLsR::synapse0x1f6b950() {
   return (neuron0x1f408b0()*-0.60283);
}

double NNfunction_sb_uLsR::synapse0x1f6b990() {
   return (neuron0x1f45380()*-0.438271);
}

double NNfunction_sb_uLsR::synapse0x1f6b9d0() {
   return (neuron0x1f45d50()*4.19522);
}

double NNfunction_sb_uLsR::synapse0x1f6ba10() {
   return (neuron0x1f46720()*0.307127);
}

double NNfunction_sb_uLsR::synapse0x1f6ba50() {
   return (neuron0x1f470f0()*-0.91628);
}

double NNfunction_sb_uLsR::synapse0x1f6b4e0() {
   return (neuron0x1f48f00()*0.522107);
}

double NNfunction_sb_uLsR::synapse0x1f6b520() {
   return (neuron0x1f491e0()*1.58503);
}

double NNfunction_sb_uLsR::synapse0x1f6bba0() {
   return (neuron0x1f49bb0()*0.589378);
}

double NNfunction_sb_uLsR::synapse0x1f6bbe0() {
   return (neuron0x1f4a580()*-2.87036);
}

double NNfunction_sb_uLsR::synapse0x1f6bc20() {
   return (neuron0x1f4af50()*-2.15142);
}

double NNfunction_sb_uLsR::synapse0x1f6bc60() {
   return (neuron0x1f4b920()*-1.32009);
}

double NNfunction_sb_uLsR::synapse0x1f6bca0() {
   return (neuron0x1f44470()*0.293282);
}

double NNfunction_sb_uLsR::synapse0x1f6bce0() {
   return (neuron0x1f44e40()*1.37746);
}

double NNfunction_sb_uLsR::synapse0x1f6bd20() {
   return (neuron0x1f4e6b0()*-1.27993);
}

double NNfunction_sb_uLsR::synapse0x1f6bd60() {
   return (neuron0x1f4f080()*-1.54127);
}

double NNfunction_sb_uLsR::synapse0x1f6bda0() {
   return (neuron0x1f4fa50()*-0.63418);
}

double NNfunction_sb_uLsR::synapse0x1f6bde0() {
   return (neuron0x1f50420()*0.871966);
}

double NNfunction_sb_uLsR::synapse0x1f6be20() {
   return (neuron0x1f50df0()*1.59967);
}

double NNfunction_sb_uLsR::synapse0x1f6be60() {
   return (neuron0x1f517c0()*-1.23616);
}

double NNfunction_sb_uLsR::synapse0x1f6bea0() {
   return (neuron0x1f52190()*2.11781);
}

double NNfunction_sb_uLsR::synapse0x1f6bee0() {
   return (neuron0x1f52b60()*0.773899);
}

double NNfunction_sb_uLsR::synapse0x1f6ba90() {
   return (neuron0x1f48bf0()*-1.07746);
}

double NNfunction_sb_uLsR::synapse0x1f6bad0() {
   return (neuron0x1f55740()*-2.26544);
}

double NNfunction_sb_uLsR::synapse0x1f6bb10() {
   return (neuron0x1f56110()*1.24744);
}

double NNfunction_sb_uLsR::synapse0x1f6bb50() {
   return (neuron0x1f56ae0()*0.904404);
}

double NNfunction_sb_uLsR::synapse0x1f6c130() {
   return (neuron0x1f574b0()*0.658792);
}

double NNfunction_sb_uLsR::synapse0x1f6c170() {
   return (neuron0x1f57e80()*4.04598);
}

double NNfunction_sb_uLsR::synapse0x1f6c1b0() {
   return (neuron0x1f58850()*1.15842);
}

double NNfunction_sb_uLsR::synapse0x1f6c1f0() {
   return (neuron0x1f59220()*0.617121);
}

double NNfunction_sb_uLsR::synapse0x1f6c230() {
   return (neuron0x1f59bf0()*-4.19198);
}

double NNfunction_sb_uLsR::synapse0x1f6c270() {
   return (neuron0x1f5a7d0()*-0.881137);
}

double NNfunction_sb_uLsR::synapse0x1f6c2b0() {
   return (neuron0x1f5b1a0()*1.64284);
}

double NNfunction_sb_uLsR::synapse0x1f6c2f0() {
   return (neuron0x1f4c020()*-0.548128);
}

double NNfunction_sb_uLsR::synapse0x1f6c330() {
   return (neuron0x1f4c9f0()*-2.00342);
}

double NNfunction_sb_uLsR::synapse0x1f6c370() {
   return (neuron0x1f4d3c0()*1.09211);
}

double NNfunction_sb_uLsR::synapse0x1f6c3b0() {
   return (neuron0x1f5fa00()*0.322417);
}

double NNfunction_sb_uLsR::synapse0x1f6c3f0() {
   return (neuron0x1f602b0()*0.28852);
}

double NNfunction_sb_uLsR::synapse0x1f6c430() {
   return (neuron0x1f60c80()*-5.03499);
}

double NNfunction_sb_uLsR::synapse0x1f6c470() {
   return (neuron0x1f61650()*-0.636671);
}

double NNfunction_sb_uLsR::synapse0x1f3d590() {
   return (neuron0x1f68850()*-8.26023);
}

double NNfunction_sb_uLsR::synapse0x1f6c6d0() {
   return (neuron0x1f68bf0()*-3.15338);
}

double NNfunction_sb_uLsR::synapse0x1f6c710() {
   return (neuron0x1f69090()*-0.33604);
}

double NNfunction_sb_uLsR::synapse0x1f6c750() {
   return (neuron0x1f6a1f0()*-2.66411);
}

double NNfunction_sb_uLsR::synapse0x1f6c790() {
   return (neuron0x1f6b350()*-6.56302);
}

