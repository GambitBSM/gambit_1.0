#include "NNfunction_ss_dRsR.h"
#include <cmath>

double NNfunction_ss_dRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6033)/15.3593;
   input1 = (in1 - 1.2409)/1146.94;
   input2 = (in2 - 666.214)/630.795;
   input3 = (in3 - -56.502)/831.241;
   input4 = (in4 - 1053.25)/947.997;
   input5 = (in5 - 878.055)/928.414;
   input6 = (in6 - 900.514)/937.537;
   input7 = (in7 - 913.481)/920.17;
   input8 = (in8 - 925.484)/978.339;
   input9 = (in9 - 903.887)/960.598;
   input10 = (in10 - 989.993)/959.829;
   input11 = (in11 - 728.623)/874.839;
   input12 = (in12 - 738.924)/885.19;
   input13 = (in13 - 502.832)/521.573;
   input14 = (in14 - 707.028)/806.621;
   input15 = (in15 - 705.212)/801.569;
   input16 = (in16 - 532.577)/558.46;
   input17 = (in17 - 425.636)/451.656;
   input18 = (in18 - 419.417)/449.948;
   input19 = (in19 - 810.04)/891.251;
   input20 = (in20 - -9.06531)/486.522;
   input21 = (in21 - 2.99684)/1162.44;
   input22 = (in22 - -3.77439)/1204.9;
   input23 = (in23 - -199.884)/604.4;
   switch(index) {
     case 0:
         return neuron0x1c674b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dRsR::Value(int index, double* input) {
   input0 = (input[0] - 23.6033)/15.3593;
   input1 = (input[1] - 1.2409)/1146.94;
   input2 = (input[2] - 666.214)/630.795;
   input3 = (input[3] - -56.502)/831.241;
   input4 = (input[4] - 1053.25)/947.997;
   input5 = (input[5] - 878.055)/928.414;
   input6 = (input[6] - 900.514)/937.537;
   input7 = (input[7] - 913.481)/920.17;
   input8 = (input[8] - 925.484)/978.339;
   input9 = (input[9] - 903.887)/960.598;
   input10 = (input[10] - 989.993)/959.829;
   input11 = (input[11] - 728.623)/874.839;
   input12 = (input[12] - 738.924)/885.19;
   input13 = (input[13] - 502.832)/521.573;
   input14 = (input[14] - 707.028)/806.621;
   input15 = (input[15] - 705.212)/801.569;
   input16 = (input[16] - 532.577)/558.46;
   input17 = (input[17] - 425.636)/451.656;
   input18 = (input[18] - 419.417)/449.948;
   input19 = (input[19] - 810.04)/891.251;
   input20 = (input[20] - -9.06531)/486.522;
   input21 = (input[21] - 2.99684)/1162.44;
   input22 = (input[22] - -3.77439)/1204.9;
   input23 = (input[23] - -199.884)/604.4;
   switch(index) {
     case 0:
         return neuron0x1c674b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dRsR::neuron0x1c33570() {
   return input0;
}

double NNfunction_ss_dRsR::neuron0x1c338b0() {
   return input1;
}

double NNfunction_ss_dRsR::neuron0x1c33bf0() {
   return input2;
}

double NNfunction_ss_dRsR::neuron0x1c33f30() {
   return input3;
}

double NNfunction_ss_dRsR::neuron0x1c34270() {
   return input4;
}

double NNfunction_ss_dRsR::neuron0x1c345b0() {
   return input5;
}

double NNfunction_ss_dRsR::neuron0x1c348f0() {
   return input6;
}

double NNfunction_ss_dRsR::neuron0x1c34c30() {
   return input7;
}

double NNfunction_ss_dRsR::neuron0x1c34f70() {
   return input8;
}

double NNfunction_ss_dRsR::neuron0x1c352b0() {
   return input9;
}

double NNfunction_ss_dRsR::neuron0x1c355f0() {
   return input10;
}

double NNfunction_ss_dRsR::neuron0x1c35930() {
   return input11;
}

double NNfunction_ss_dRsR::neuron0x1c35c70() {
   return input12;
}

double NNfunction_ss_dRsR::neuron0x1c35fb0() {
   return input13;
}

double NNfunction_ss_dRsR::neuron0x1c362f0() {
   return input14;
}

double NNfunction_ss_dRsR::neuron0x1c36630() {
   return input15;
}

double NNfunction_ss_dRsR::neuron0x1c36970() {
   return input16;
}

double NNfunction_ss_dRsR::neuron0x1c36ed0() {
   return input17;
}

double NNfunction_ss_dRsR::neuron0x1c370f0() {
   return input18;
}

double NNfunction_ss_dRsR::neuron0x1c37430() {
   return input19;
}

double NNfunction_ss_dRsR::neuron0x1c37770() {
   return input20;
}

double NNfunction_ss_dRsR::neuron0x1c37ab0() {
   return input21;
}

double NNfunction_ss_dRsR::neuron0x1c37df0() {
   return input22;
}

double NNfunction_ss_dRsR::neuron0x1c38130() {
   return input23;
}

double NNfunction_ss_dRsR::input0x1c385d0() {
   double input = 1.6759;
   input += synapse0x19f33e0();
   input += synapse0x1c33430();
   input += synapse0x1c33470();
   input += synapse0x1c38880();
   input += synapse0x1c388c0();
   input += synapse0x1c38900();
   input += synapse0x1c38940();
   input += synapse0x1c38980();
   input += synapse0x1c389c0();
   input += synapse0x1c38a00();
   input += synapse0x1c38a40();
   input += synapse0x1c38a80();
   input += synapse0x1c38ac0();
   input += synapse0x1c38b00();
   input += synapse0x1c38b40();
   input += synapse0x1c38b80();
   input += synapse0x1c333a0();
   input += synapse0x1c333e0();
   input += synapse0x19e4c80();
   input += synapse0x19e4cc0();
   input += synapse0x1c38de0();
   input += synapse0x1c38e20();
   input += synapse0x1c38e60();
   input += synapse0x1c38ea0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c385d0() {
   double input = input0x1c385d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c38ee0() {
   double input = -1.29083;
   input += synapse0x1c39220();
   input += synapse0x1c39260();
   input += synapse0x1c392a0();
   input += synapse0x1c392e0();
   input += synapse0x1c39320();
   input += synapse0x1c39360();
   input += synapse0x1c393a0();
   input += synapse0x1c393e0();
   input += synapse0x1c39420();
   input += synapse0x1c38cd0();
   input += synapse0x1c38d10();
   input += synapse0x1c38d50();
   input += synapse0x1c38d90();
   input += synapse0x1c39670();
   input += synapse0x1c396b0();
   input += synapse0x1c396f0();
   input += synapse0x1c39070();
   input += synapse0x1c390b0();
   input += synapse0x1c39840();
   input += synapse0x1c39880();
   input += synapse0x1c398c0();
   input += synapse0x1c39900();
   input += synapse0x1c39940();
   input += synapse0x1c39980();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c38ee0() {
   double input = input0x1c38ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c399c0() {
   double input = 1.58372;
   input += synapse0x1c39d00();
   input += synapse0x1c39d40();
   input += synapse0x1c39d80();
   input += synapse0x1c39dc0();
   input += synapse0x1c39e00();
   input += synapse0x1c39e40();
   input += synapse0x1c39e80();
   input += synapse0x1c39ec0();
   input += synapse0x1c39f00();
   input += synapse0x1c39f40();
   input += synapse0x1c39f80();
   input += synapse0x1c39fc0();
   input += synapse0x1c3a000();
   input += synapse0x1c3a040();
   input += synapse0x1c3a080();
   input += synapse0x1c3a0c0();
   input += synapse0x1c39b50();
   input += synapse0x1c39b90();
   input += synapse0x19f2ad0();
   input += synapse0x19f2b10();
   input += synapse0x1c22600();
   input += synapse0x1c22640();
   input += synapse0x1c22680();
   input += synapse0x1c334b0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c399c0() {
   double input = input0x1c399c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x19f3250() {
   double input = -0.550163;
   input += synapse0x1c39610();
   input += synapse0x1c334f0();
   input += synapse0x1c33530();
   input += synapse0x1c3a210();
   input += synapse0x1c3a250();
   input += synapse0x1c3a290();
   input += synapse0x1c3a2d0();
   input += synapse0x1c3a310();
   input += synapse0x1c3a350();
   input += synapse0x1c3a390();
   input += synapse0x1c3a3d0();
   input += synapse0x1c3a410();
   input += synapse0x1c3a450();
   input += synapse0x1c3a490();
   input += synapse0x1c3a4d0();
   input += synapse0x1c3a510();
   input += synapse0x1c39460();
   input += synapse0x1c394a0();
   input += synapse0x1c3a660();
   input += synapse0x1c3a6a0();
   input += synapse0x1c3a6e0();
   input += synapse0x1c3a720();
   input += synapse0x1c3a760();
   input += synapse0x1c3a7a0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x19f3250() {
   double input = input0x19f3250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3a7e0() {
   double input = -0.381466;
   input += synapse0x1c3ab20();
   input += synapse0x1c3ab60();
   input += synapse0x1c3aba0();
   input += synapse0x1c3abe0();
   input += synapse0x1c3ac20();
   input += synapse0x1c3ac60();
   input += synapse0x1c3aca0();
   input += synapse0x1c3ace0();
   input += synapse0x1c3ad20();
   input += synapse0x1c3ad60();
   input += synapse0x1c3ada0();
   input += synapse0x1c3ade0();
   input += synapse0x1c3ae20();
   input += synapse0x1c3ae60();
   input += synapse0x1c3aea0();
   input += synapse0x1c3aee0();
   input += synapse0x1c3a970();
   input += synapse0x1c3a9b0();
   input += synapse0x1c3b030();
   input += synapse0x1c3b070();
   input += synapse0x1c3b0b0();
   input += synapse0x1c3b0f0();
   input += synapse0x1c3b130();
   input += synapse0x1c3b170();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3a7e0() {
   double input = input0x1c3a7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3b1b0() {
   double input = 0.929532;
   input += synapse0x1c3b4f0();
   input += synapse0x1c3b530();
   input += synapse0x1c3b570();
   input += synapse0x1c3b5b0();
   input += synapse0x1c3b5f0();
   input += synapse0x1c3b630();
   input += synapse0x1c3b670();
   input += synapse0x1c3b6b0();
   input += synapse0x1c3b6f0();
   input += synapse0x19f2e40();
   input += synapse0x19f2e80();
   input += synapse0x19f2ec0();
   input += synapse0x19f2f00();
   input += synapse0x19f2f40();
   input += synapse0x19f2f80();
   input += synapse0x19f2fc0();
   input += synapse0x1c3b340();
   input += synapse0x1c3b380();
   input += synapse0x19f3110();
   input += synapse0x19f3150();
   input += synapse0x19f3190();
   input += synapse0x19f31d0();
   input += synapse0x19f3210();
   input += synapse0x1c3bf40();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3b1b0() {
   double input = input0x1c3b1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3bf80() {
   double input = 0.153532;
   input += synapse0x1c3c2c0();
   input += synapse0x1c3c300();
   input += synapse0x1c3c340();
   input += synapse0x1c3c380();
   input += synapse0x1c3c3c0();
   input += synapse0x1c3c400();
   input += synapse0x1c3c440();
   input += synapse0x1c3c480();
   input += synapse0x1c3c4c0();
   input += synapse0x1c3c500();
   input += synapse0x1c3c540();
   input += synapse0x1c3c580();
   input += synapse0x1c3c5c0();
   input += synapse0x1c3c600();
   input += synapse0x1c3c640();
   input += synapse0x1c3c680();
   input += synapse0x1c3c110();
   input += synapse0x1c3c150();
   input += synapse0x1c3c7d0();
   input += synapse0x1c3c810();
   input += synapse0x1c3c850();
   input += synapse0x1c3c890();
   input += synapse0x1c3c8d0();
   input += synapse0x1c3c910();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3bf80() {
   double input = input0x1c3bf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3c950() {
   double input = 1.41536;
   input += synapse0x1c3cc90();
   input += synapse0x1c3ccd0();
   input += synapse0x1c3cd10();
   input += synapse0x1c3cd50();
   input += synapse0x1c3cd90();
   input += synapse0x1c3cdd0();
   input += synapse0x1c3ce10();
   input += synapse0x1c3ce50();
   input += synapse0x1c3ce90();
   input += synapse0x1c3ced0();
   input += synapse0x1c3cf10();
   input += synapse0x1c3cf50();
   input += synapse0x1c3cf90();
   input += synapse0x1c3cfd0();
   input += synapse0x1c3d010();
   input += synapse0x1c3d050();
   input += synapse0x1c3cae0();
   input += synapse0x1c3cb20();
   input += synapse0x1c3d1a0();
   input += synapse0x1c3d1e0();
   input += synapse0x1c3d220();
   input += synapse0x1c3d260();
   input += synapse0x1c3d2a0();
   input += synapse0x1c3d2e0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3c950() {
   double input = input0x1c3c950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3d320() {
   double input = -0.245271;
   input += synapse0x1c36dc0();
   input += synapse0x1c36e00();
   input += synapse0x1c36e40();
   input += synapse0x1c36e80();
   input += synapse0x1c3d870();
   input += synapse0x1c3d8b0();
   input += synapse0x1c3d8f0();
   input += synapse0x1c3d930();
   input += synapse0x1c3d970();
   input += synapse0x1c3d9b0();
   input += synapse0x1c3d9f0();
   input += synapse0x1c3da30();
   input += synapse0x1c3da70();
   input += synapse0x1c3dab0();
   input += synapse0x1c3daf0();
   input += synapse0x1c3db30();
   input += synapse0x1c3d4b0();
   input += synapse0x1c3d4f0();
   input += synapse0x1c3dc80();
   input += synapse0x1c3dcc0();
   input += synapse0x1c3dd00();
   input += synapse0x1c3dd40();
   input += synapse0x1c3dd80();
   input += synapse0x1c3ddc0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3d320() {
   double input = input0x1c3d320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3de00() {
   double input = 3.6082;
   input += synapse0x1c3e140();
   input += synapse0x1c3e180();
   input += synapse0x1c3e1c0();
   input += synapse0x1c3e200();
   input += synapse0x1c3e240();
   input += synapse0x1c3e280();
   input += synapse0x1c3e2c0();
   input += synapse0x1c3e300();
   input += synapse0x1c3e340();
   input += synapse0x1c3e380();
   input += synapse0x1c3e3c0();
   input += synapse0x1c3e400();
   input += synapse0x1c3e440();
   input += synapse0x1c3e480();
   input += synapse0x1c3e4c0();
   input += synapse0x1c3e500();
   input += synapse0x1c3df90();
   input += synapse0x1c3dfd0();
   input += synapse0x1c3e650();
   input += synapse0x1c3e690();
   input += synapse0x1c3e6d0();
   input += synapse0x1c3e710();
   input += synapse0x1c3e750();
   input += synapse0x1c3e790();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3de00() {
   double input = input0x1c3de00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3e7d0() {
   double input = 3.05341;
   input += synapse0x1c3eb10();
   input += synapse0x1c3eb50();
   input += synapse0x1c3eb90();
   input += synapse0x1c3ebd0();
   input += synapse0x1c3ec10();
   input += synapse0x1c3ec50();
   input += synapse0x1c3ec90();
   input += synapse0x1c3ecd0();
   input += synapse0x1c3ed10();
   input += synapse0x1c3ed50();
   input += synapse0x1c3ed90();
   input += synapse0x1c3edd0();
   input += synapse0x1c3ee10();
   input += synapse0x1c3ee50();
   input += synapse0x1c3ee90();
   input += synapse0x1c3eed0();
   input += synapse0x1c3e960();
   input += synapse0x1c3e9a0();
   input += synapse0x1c3b730();
   input += synapse0x1c3b770();
   input += synapse0x1c3b7b0();
   input += synapse0x1c3b7f0();
   input += synapse0x1c3b830();
   input += synapse0x1c3b870();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3e7d0() {
   double input = input0x1c3e7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3b8b0() {
   double input = -0.383806;
   input += synapse0x1c3bbf0();
   input += synapse0x1c3bc30();
   input += synapse0x1c3bc70();
   input += synapse0x1c3bcb0();
   input += synapse0x1c3bcf0();
   input += synapse0x1c3bd30();
   input += synapse0x1c3bd70();
   input += synapse0x1c3bdb0();
   input += synapse0x1c3bdf0();
   input += synapse0x1c3be30();
   input += synapse0x1c3be70();
   input += synapse0x1c3beb0();
   input += synapse0x1c3bef0();
   input += synapse0x1c40030();
   input += synapse0x1c40070();
   input += synapse0x1c400b0();
   input += synapse0x1c3ba40();
   input += synapse0x1c3ba80();
   input += synapse0x1c40200();
   input += synapse0x1c40240();
   input += synapse0x1c40280();
   input += synapse0x1c402c0();
   input += synapse0x1c40300();
   input += synapse0x1c40340();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3b8b0() {
   double input = input0x1c3b8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c40380() {
   double input = 1.08015;
   input += synapse0x1c406c0();
   input += synapse0x1c40700();
   input += synapse0x1c40740();
   input += synapse0x1c40780();
   input += synapse0x1c407c0();
   input += synapse0x1c40800();
   input += synapse0x1c40840();
   input += synapse0x1c40880();
   input += synapse0x1c408c0();
   input += synapse0x1c40900();
   input += synapse0x1c40940();
   input += synapse0x1c40980();
   input += synapse0x1c409c0();
   input += synapse0x1c40a00();
   input += synapse0x1c40a40();
   input += synapse0x1c40a80();
   input += synapse0x1c40510();
   input += synapse0x1c40550();
   input += synapse0x1c40bd0();
   input += synapse0x1c40c10();
   input += synapse0x1c40c50();
   input += synapse0x1c40c90();
   input += synapse0x1c40cd0();
   input += synapse0x1c40d10();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c40380() {
   double input = input0x1c40380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c40d50() {
   double input = -0.493318;
   input += synapse0x1c41090();
   input += synapse0x1c410d0();
   input += synapse0x1c41110();
   input += synapse0x1c41150();
   input += synapse0x1c41190();
   input += synapse0x1c411d0();
   input += synapse0x1c41210();
   input += synapse0x1c41250();
   input += synapse0x1c41290();
   input += synapse0x1c412d0();
   input += synapse0x1c41310();
   input += synapse0x1c41350();
   input += synapse0x1c41390();
   input += synapse0x1c413d0();
   input += synapse0x1c41410();
   input += synapse0x1c41450();
   input += synapse0x1c40ee0();
   input += synapse0x1c40f20();
   input += synapse0x1c415a0();
   input += synapse0x1c415e0();
   input += synapse0x1c41620();
   input += synapse0x1c41660();
   input += synapse0x1c416a0();
   input += synapse0x1c416e0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c40d50() {
   double input = input0x1c40d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c41720() {
   double input = -1.59392;
   input += synapse0x1c41a60();
   input += synapse0x1c41aa0();
   input += synapse0x1c41ae0();
   input += synapse0x1c41b20();
   input += synapse0x1c41b60();
   input += synapse0x1c41ba0();
   input += synapse0x1c41be0();
   input += synapse0x1c41c20();
   input += synapse0x1c41c60();
   input += synapse0x1c41ca0();
   input += synapse0x1c41ce0();
   input += synapse0x1c41d20();
   input += synapse0x1c41d60();
   input += synapse0x1c41da0();
   input += synapse0x1c41de0();
   input += synapse0x1c41e20();
   input += synapse0x1c418b0();
   input += synapse0x1c418f0();
   input += synapse0x1c41f70();
   input += synapse0x1c41fb0();
   input += synapse0x1c41ff0();
   input += synapse0x1c42030();
   input += synapse0x1c42070();
   input += synapse0x1c420b0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c41720() {
   double input = input0x1c41720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c420f0() {
   double input = -2.03904;
   input += synapse0x1c42430();
   input += synapse0x1c33790();
   input += synapse0x1c337d0();
   input += synapse0x1c33ad0();
   input += synapse0x1c33b10();
   input += synapse0x1c33e10();
   input += synapse0x1c33e50();
   input += synapse0x1c34150();
   input += synapse0x1c34190();
   input += synapse0x1c34490();
   input += synapse0x1c344d0();
   input += synapse0x1c347d0();
   input += synapse0x1c34810();
   input += synapse0x1c34b10();
   input += synapse0x1c34b50();
   input += synapse0x1c34e50();
   input += synapse0x1c34e90();
   input += synapse0x1c35190();
   input += synapse0x1c351d0();
   input += synapse0x1c354d0();
   input += synapse0x1c35510();
   input += synapse0x1c35810();
   input += synapse0x1c35850();
   input += synapse0x1c35b50();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c420f0() {
   double input = input0x1c420f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c43f00() {
   double input = 0.71263;
   input += synapse0x1c35b90();
   input += synapse0x1c36850();
   input += synapse0x1c36890();
   input += synapse0x1c42280();
   input += synapse0x1c422c0();
   input += synapse0x1c36b90();
   input += synapse0x1c36bd0();
   input += synapse0x19e4b60();
   input += synapse0x19e4ba0();
   input += synapse0x1c37310();
   input += synapse0x1c37350();
   input += synapse0x1c37650();
   input += synapse0x1c37690();
   input += synapse0x1c37990();
   input += synapse0x1c379d0();
   input += synapse0x1c37cd0();
   input += synapse0x1c37d10();
   input += synapse0x1c38010();
   input += synapse0x1c38050();
   input += synapse0x1c38350();
   input += synapse0x1c38390();
   input += synapse0x1c35e90();
   input += synapse0x1c35ed0();
   input += synapse0x1c441a0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c43f00() {
   double input = input0x1c43f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c441e0() {
   double input = 1.24436;
   input += synapse0x1c44520();
   input += synapse0x1c44560();
   input += synapse0x1c445a0();
   input += synapse0x1c445e0();
   input += synapse0x1c44620();
   input += synapse0x1c44660();
   input += synapse0x1c446a0();
   input += synapse0x1c446e0();
   input += synapse0x1c44720();
   input += synapse0x1c44760();
   input += synapse0x1c447a0();
   input += synapse0x1c447e0();
   input += synapse0x1c44820();
   input += synapse0x1c44860();
   input += synapse0x1c448a0();
   input += synapse0x1c448e0();
   input += synapse0x1c44370();
   input += synapse0x1c443b0();
   input += synapse0x1c44a30();
   input += synapse0x1c44a70();
   input += synapse0x1c44ab0();
   input += synapse0x1c44af0();
   input += synapse0x1c44b30();
   input += synapse0x1c44b70();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c441e0() {
   double input = input0x1c441e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c44bb0() {
   double input = 0.219909;
   input += synapse0x1c44ef0();
   input += synapse0x1c44f30();
   input += synapse0x1c44f70();
   input += synapse0x1c44fb0();
   input += synapse0x1c44ff0();
   input += synapse0x1c45030();
   input += synapse0x1c45070();
   input += synapse0x1c450b0();
   input += synapse0x1c450f0();
   input += synapse0x1c45130();
   input += synapse0x1c45170();
   input += synapse0x1c451b0();
   input += synapse0x1c451f0();
   input += synapse0x1c45230();
   input += synapse0x1c45270();
   input += synapse0x1c452b0();
   input += synapse0x1c44d40();
   input += synapse0x1c44d80();
   input += synapse0x1c45400();
   input += synapse0x1c45440();
   input += synapse0x1c45480();
   input += synapse0x1c454c0();
   input += synapse0x1c45500();
   input += synapse0x1c45540();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c44bb0() {
   double input = input0x1c44bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c45580() {
   double input = -0.285662;
   input += synapse0x1c458c0();
   input += synapse0x1c45900();
   input += synapse0x1c45940();
   input += synapse0x1c45980();
   input += synapse0x1c459c0();
   input += synapse0x1c45a00();
   input += synapse0x1c45a40();
   input += synapse0x1c45a80();
   input += synapse0x1c45ac0();
   input += synapse0x1c45b00();
   input += synapse0x1c45b40();
   input += synapse0x1c45b80();
   input += synapse0x1c45bc0();
   input += synapse0x1c45c00();
   input += synapse0x1c45c40();
   input += synapse0x1c45c80();
   input += synapse0x1c45710();
   input += synapse0x1c45750();
   input += synapse0x1c45dd0();
   input += synapse0x1c45e10();
   input += synapse0x1c45e50();
   input += synapse0x1c45e90();
   input += synapse0x1c45ed0();
   input += synapse0x1c45f10();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c45580() {
   double input = input0x1c45580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c45f50() {
   double input = -0.20562;
   input += synapse0x1c46290();
   input += synapse0x1c462d0();
   input += synapse0x1c46310();
   input += synapse0x1c46350();
   input += synapse0x1c46390();
   input += synapse0x1c463d0();
   input += synapse0x1c46410();
   input += synapse0x1c46450();
   input += synapse0x1c46490();
   input += synapse0x1c464d0();
   input += synapse0x1c46510();
   input += synapse0x1c46550();
   input += synapse0x1c46590();
   input += synapse0x1c465d0();
   input += synapse0x1c46610();
   input += synapse0x1c46650();
   input += synapse0x1c460e0();
   input += synapse0x1c46120();
   input += synapse0x1c467a0();
   input += synapse0x1c467e0();
   input += synapse0x1c46820();
   input += synapse0x1c46860();
   input += synapse0x1c468a0();
   input += synapse0x1c468e0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c45f50() {
   double input = input0x1c45f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c46920() {
   double input = -0.534431;
   input += synapse0x1c46c60();
   input += synapse0x1c46ca0();
   input += synapse0x1c46ce0();
   input += synapse0x1c46d20();
   input += synapse0x1c46d60();
   input += synapse0x1c46da0();
   input += synapse0x1c46de0();
   input += synapse0x1c46e20();
   input += synapse0x1c46e60();
   input += synapse0x1c3f020();
   input += synapse0x1c3f060();
   input += synapse0x1c3f0a0();
   input += synapse0x1c3f0e0();
   input += synapse0x1c3f120();
   input += synapse0x1c3f160();
   input += synapse0x1c3f1a0();
   input += synapse0x1c46ab0();
   input += synapse0x1c46af0();
   input += synapse0x1c3f2f0();
   input += synapse0x1c3f330();
   input += synapse0x1c3f370();
   input += synapse0x1c3f3b0();
   input += synapse0x1c3f3f0();
   input += synapse0x1c3f430();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c46920() {
   double input = input0x1c46920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3f470() {
   double input = -0.259503;
   input += synapse0x1c3f7b0();
   input += synapse0x1c3f7f0();
   input += synapse0x1c3f830();
   input += synapse0x1c3f870();
   input += synapse0x1c3f8b0();
   input += synapse0x1c3f8f0();
   input += synapse0x1c3f930();
   input += synapse0x1c3f970();
   input += synapse0x1c3f9b0();
   input += synapse0x1c3f9f0();
   input += synapse0x1c3fa30();
   input += synapse0x1c3fa70();
   input += synapse0x1c3fab0();
   input += synapse0x1c3faf0();
   input += synapse0x1c3fb30();
   input += synapse0x1c3fb70();
   input += synapse0x1c3f600();
   input += synapse0x1c3f640();
   input += synapse0x1c3fcc0();
   input += synapse0x1c3fd00();
   input += synapse0x1c3fd40();
   input += synapse0x1c3fd80();
   input += synapse0x1c3fdc0();
   input += synapse0x1c3fe00();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3f470() {
   double input = input0x1c3f470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c3fe40() {
   double input = 1.60807;
   input += synapse0x1c3ffd0();
   input += synapse0x1c49060();
   input += synapse0x1c490a0();
   input += synapse0x1c490e0();
   input += synapse0x1c49120();
   input += synapse0x1c49160();
   input += synapse0x1c491a0();
   input += synapse0x1c491e0();
   input += synapse0x1c49220();
   input += synapse0x1c49260();
   input += synapse0x1c492a0();
   input += synapse0x1c492e0();
   input += synapse0x1c49320();
   input += synapse0x1c49360();
   input += synapse0x1c493a0();
   input += synapse0x1c493e0();
   input += synapse0x1c48eb0();
   input += synapse0x1c48ef0();
   input += synapse0x1c49530();
   input += synapse0x1c49570();
   input += synapse0x1c495b0();
   input += synapse0x1c495f0();
   input += synapse0x1c49630();
   input += synapse0x1c49670();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c3fe40() {
   double input = input0x1c3fe40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c496b0() {
   double input = -0.187923;
   input += synapse0x1c499f0();
   input += synapse0x1c49a30();
   input += synapse0x1c49a70();
   input += synapse0x1c49ab0();
   input += synapse0x1c49af0();
   input += synapse0x1c49b30();
   input += synapse0x1c49b70();
   input += synapse0x1c49bb0();
   input += synapse0x1c49bf0();
   input += synapse0x1c49c30();
   input += synapse0x1c49c70();
   input += synapse0x1c49cb0();
   input += synapse0x1c49cf0();
   input += synapse0x1c49d30();
   input += synapse0x1c49d70();
   input += synapse0x1c49db0();
   input += synapse0x1c49840();
   input += synapse0x1c49880();
   input += synapse0x1c49f00();
   input += synapse0x1c49f40();
   input += synapse0x1c49f80();
   input += synapse0x1c49fc0();
   input += synapse0x1c4a000();
   input += synapse0x1c4a040();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c496b0() {
   double input = input0x1c496b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c4a080() {
   double input = 2.14231;
   input += synapse0x1c4a3c0();
   input += synapse0x1c4a400();
   input += synapse0x1c4a440();
   input += synapse0x1c4a480();
   input += synapse0x1c4a4c0();
   input += synapse0x1c4a500();
   input += synapse0x1c4a540();
   input += synapse0x1c4a580();
   input += synapse0x1c4a5c0();
   input += synapse0x1c4a600();
   input += synapse0x1c4a640();
   input += synapse0x1c4a680();
   input += synapse0x1c4a6c0();
   input += synapse0x1c4a700();
   input += synapse0x1c4a740();
   input += synapse0x1c4a780();
   input += synapse0x1c4a210();
   input += synapse0x1c4a250();
   input += synapse0x1c4a8d0();
   input += synapse0x1c4a910();
   input += synapse0x1c4a950();
   input += synapse0x1c4a990();
   input += synapse0x1c4a9d0();
   input += synapse0x1c4aa10();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c4a080() {
   double input = input0x1c4a080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c4aa50() {
   double input = 0.113005;
   input += synapse0x1c4ad90();
   input += synapse0x1c4add0();
   input += synapse0x1c4ae10();
   input += synapse0x1c4ae50();
   input += synapse0x1c4ae90();
   input += synapse0x1c4aed0();
   input += synapse0x1c4af10();
   input += synapse0x1c4af50();
   input += synapse0x1c4af90();
   input += synapse0x1c4afd0();
   input += synapse0x1c4b010();
   input += synapse0x1c4b050();
   input += synapse0x1c4b090();
   input += synapse0x1c4b0d0();
   input += synapse0x1c4b110();
   input += synapse0x1c4b150();
   input += synapse0x1c4abe0();
   input += synapse0x1c4ac20();
   input += synapse0x1c4b2a0();
   input += synapse0x1c4b2e0();
   input += synapse0x1c4b320();
   input += synapse0x1c4b360();
   input += synapse0x1c4b3a0();
   input += synapse0x1c4b3e0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c4aa50() {
   double input = input0x1c4aa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c4b420() {
   double input = 0.999845;
   input += synapse0x1c4b760();
   input += synapse0x1c4b7a0();
   input += synapse0x1c4b7e0();
   input += synapse0x1c4b820();
   input += synapse0x1c4b860();
   input += synapse0x1c4b8a0();
   input += synapse0x1c4b8e0();
   input += synapse0x1c4b920();
   input += synapse0x1c4b960();
   input += synapse0x1c4b9a0();
   input += synapse0x1c4b9e0();
   input += synapse0x1c4ba20();
   input += synapse0x1c4ba60();
   input += synapse0x1c4baa0();
   input += synapse0x1c4bae0();
   input += synapse0x1c4bb20();
   input += synapse0x1c4b5b0();
   input += synapse0x1c4b5f0();
   input += synapse0x1c4bc70();
   input += synapse0x1c4bcb0();
   input += synapse0x1c4bcf0();
   input += synapse0x1c4bd30();
   input += synapse0x1c4bd70();
   input += synapse0x1c4bdb0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c4b420() {
   double input = input0x1c4b420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c4bdf0() {
   double input = 0.603613;
   input += synapse0x1c4c130();
   input += synapse0x1c4c170();
   input += synapse0x1c4c1b0();
   input += synapse0x1c4c1f0();
   input += synapse0x1c4c230();
   input += synapse0x1c4c270();
   input += synapse0x1c4c2b0();
   input += synapse0x1c4c2f0();
   input += synapse0x1c4c330();
   input += synapse0x1c4c370();
   input += synapse0x1c4c3b0();
   input += synapse0x1c4c3f0();
   input += synapse0x1c4c430();
   input += synapse0x1c4c470();
   input += synapse0x1c4c4b0();
   input += synapse0x1c4c4f0();
   input += synapse0x1c4bf80();
   input += synapse0x1c4bfc0();
   input += synapse0x1c4c640();
   input += synapse0x1c4c680();
   input += synapse0x1c4c6c0();
   input += synapse0x1c4c700();
   input += synapse0x1c4c740();
   input += synapse0x1c4c780();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c4bdf0() {
   double input = input0x1c4bdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c4c7c0() {
   double input = 0.582247;
   input += synapse0x1c4cb00();
   input += synapse0x1c4cb40();
   input += synapse0x1c4cb80();
   input += synapse0x1c4cbc0();
   input += synapse0x1c4cc00();
   input += synapse0x1c4cc40();
   input += synapse0x1c4cc80();
   input += synapse0x1c4ccc0();
   input += synapse0x1c4cd00();
   input += synapse0x1c4cd40();
   input += synapse0x1c4cd80();
   input += synapse0x1c4cdc0();
   input += synapse0x1c4ce00();
   input += synapse0x1c4ce40();
   input += synapse0x1c4ce80();
   input += synapse0x1c4cec0();
   input += synapse0x1c4c950();
   input += synapse0x1c4c990();
   input += synapse0x1c4d010();
   input += synapse0x1c4d050();
   input += synapse0x1c4d090();
   input += synapse0x1c4d0d0();
   input += synapse0x1c4d110();
   input += synapse0x1c4d150();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c4c7c0() {
   double input = input0x1c4c7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c4d190() {
   double input = -0.480678;
   input += synapse0x1c4d4d0();
   input += synapse0x1c4d510();
   input += synapse0x1c4d550();
   input += synapse0x1c4d590();
   input += synapse0x1c4d5d0();
   input += synapse0x1c4d610();
   input += synapse0x1c4d650();
   input += synapse0x1c4d690();
   input += synapse0x1c4d6d0();
   input += synapse0x1c4d710();
   input += synapse0x1c4d750();
   input += synapse0x1c4d790();
   input += synapse0x1c4d7d0();
   input += synapse0x1c4d810();
   input += synapse0x1c4d850();
   input += synapse0x1c4d890();
   input += synapse0x1c4d320();
   input += synapse0x1c4d360();
   input += synapse0x1c4d9e0();
   input += synapse0x1c4da20();
   input += synapse0x1c4da60();
   input += synapse0x1c4daa0();
   input += synapse0x1c4dae0();
   input += synapse0x1c4db20();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c4d190() {
   double input = input0x1c4d190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c4db60() {
   double input = -3.21182;
   input += synapse0x1c4dea0();
   input += synapse0x1c42470();
   input += synapse0x1c424b0();
   input += synapse0x1c424f0();
   input += synapse0x1c42740();
   input += synapse0x1c42780();
   input += synapse0x1c427c0();
   input += synapse0x1c42a10();
   input += synapse0x1c42a50();
   input += synapse0x1c42ca0();
   input += synapse0x1c42ce0();
   input += synapse0x1c42d20();
   input += synapse0x1c42f70();
   input += synapse0x1c42fb0();
   input += synapse0x1c43200();
   input += synapse0x1c43240();
   input += synapse0x1c4dcf0();
   input += synapse0x1c4dd30();
   input += synapse0x1c43390();
   input += synapse0x1c438a0();
   input += synapse0x1c438e0();
   input += synapse0x1c43920();
   input += synapse0x1c43b70();
   input += synapse0x1c43bb0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c4db60() {
   double input = input0x1c4db60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c43bf0() {
   double input = 0.137646;
   input += synapse0x1c43460();
   input += synapse0x1c434a0();
   input += synapse0x1c434e0();
   input += synapse0x1c43520();
   input += synapse0x1c43ea0();
   input += synapse0x1c501f0();
   input += synapse0x1c50230();
   input += synapse0x1c50270();
   input += synapse0x1c502b0();
   input += synapse0x1c502f0();
   input += synapse0x1c50330();
   input += synapse0x1c50370();
   input += synapse0x1c503b0();
   input += synapse0x1c503f0();
   input += synapse0x1c50430();
   input += synapse0x1c50470();
   input += synapse0x1c43d80();
   input += synapse0x1c43dc0();
   input += synapse0x1c505c0();
   input += synapse0x1c50600();
   input += synapse0x1c50640();
   input += synapse0x1c50680();
   input += synapse0x1c506c0();
   input += synapse0x1c50700();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c43bf0() {
   double input = input0x1c43bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c50740() {
   double input = 1.6816;
   input += synapse0x1c50a80();
   input += synapse0x1c50ac0();
   input += synapse0x1c50b00();
   input += synapse0x1c50b40();
   input += synapse0x1c50b80();
   input += synapse0x1c50bc0();
   input += synapse0x1c50c00();
   input += synapse0x1c50c40();
   input += synapse0x1c50c80();
   input += synapse0x1c50cc0();
   input += synapse0x1c50d00();
   input += synapse0x1c50d40();
   input += synapse0x1c50d80();
   input += synapse0x1c50dc0();
   input += synapse0x1c50e00();
   input += synapse0x1c50e40();
   input += synapse0x1c508d0();
   input += synapse0x1c50910();
   input += synapse0x1c50f90();
   input += synapse0x1c50fd0();
   input += synapse0x1c51010();
   input += synapse0x1c51050();
   input += synapse0x1c51090();
   input += synapse0x1c510d0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c50740() {
   double input = input0x1c50740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c51110() {
   double input = 0.160301;
   input += synapse0x1c51450();
   input += synapse0x1c51490();
   input += synapse0x1c514d0();
   input += synapse0x1c51510();
   input += synapse0x1c51550();
   input += synapse0x1c51590();
   input += synapse0x1c515d0();
   input += synapse0x1c51610();
   input += synapse0x1c51650();
   input += synapse0x1c51690();
   input += synapse0x1c516d0();
   input += synapse0x1c51710();
   input += synapse0x1c51750();
   input += synapse0x1c51790();
   input += synapse0x1c517d0();
   input += synapse0x1c51810();
   input += synapse0x1c512a0();
   input += synapse0x1c512e0();
   input += synapse0x1c51960();
   input += synapse0x1c519a0();
   input += synapse0x1c519e0();
   input += synapse0x1c51a20();
   input += synapse0x1c51a60();
   input += synapse0x1c51aa0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c51110() {
   double input = input0x1c51110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c51ae0() {
   double input = 0.287458;
   input += synapse0x1c51e20();
   input += synapse0x1c51e60();
   input += synapse0x1c51ea0();
   input += synapse0x1c51ee0();
   input += synapse0x1c51f20();
   input += synapse0x1c51f60();
   input += synapse0x1c51fa0();
   input += synapse0x1c51fe0();
   input += synapse0x1c52020();
   input += synapse0x1c52060();
   input += synapse0x1c520a0();
   input += synapse0x1c520e0();
   input += synapse0x1c52120();
   input += synapse0x1c52160();
   input += synapse0x1c521a0();
   input += synapse0x1c521e0();
   input += synapse0x1c51c70();
   input += synapse0x1c51cb0();
   input += synapse0x1c52330();
   input += synapse0x1c52370();
   input += synapse0x1c523b0();
   input += synapse0x1c523f0();
   input += synapse0x1c52430();
   input += synapse0x1c52470();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c51ae0() {
   double input = input0x1c51ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c524b0() {
   double input = 0.230373;
   input += synapse0x1c527f0();
   input += synapse0x1c52830();
   input += synapse0x1c52870();
   input += synapse0x1c528b0();
   input += synapse0x1c528f0();
   input += synapse0x1c52930();
   input += synapse0x1c52970();
   input += synapse0x1c529b0();
   input += synapse0x1c529f0();
   input += synapse0x1c52a30();
   input += synapse0x1c52a70();
   input += synapse0x1c52ab0();
   input += synapse0x1c52af0();
   input += synapse0x1c52b30();
   input += synapse0x1c52b70();
   input += synapse0x1c52bb0();
   input += synapse0x1c52640();
   input += synapse0x1c52680();
   input += synapse0x1c52d00();
   input += synapse0x1c52d40();
   input += synapse0x1c52d80();
   input += synapse0x1c52dc0();
   input += synapse0x1c52e00();
   input += synapse0x1c52e40();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c524b0() {
   double input = input0x1c524b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c52e80() {
   double input = -0.0957625;
   input += synapse0x1c531c0();
   input += synapse0x1c53200();
   input += synapse0x1c53240();
   input += synapse0x1c53280();
   input += synapse0x1c532c0();
   input += synapse0x1c53300();
   input += synapse0x1c53340();
   input += synapse0x1c53380();
   input += synapse0x1c533c0();
   input += synapse0x1c53400();
   input += synapse0x1c53440();
   input += synapse0x1c53480();
   input += synapse0x1c534c0();
   input += synapse0x1c53500();
   input += synapse0x1c53540();
   input += synapse0x1c53580();
   input += synapse0x1c53010();
   input += synapse0x1c53050();
   input += synapse0x1c536d0();
   input += synapse0x1c53710();
   input += synapse0x1c53750();
   input += synapse0x1c53790();
   input += synapse0x1c537d0();
   input += synapse0x1c53810();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c52e80() {
   double input = input0x1c52e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c53850() {
   double input = -1.07699;
   input += synapse0x1c53b90();
   input += synapse0x1c53bd0();
   input += synapse0x1c53c10();
   input += synapse0x1c53c50();
   input += synapse0x1c53c90();
   input += synapse0x1c53cd0();
   input += synapse0x1c53d10();
   input += synapse0x1c53d50();
   input += synapse0x1c53d90();
   input += synapse0x1c53dd0();
   input += synapse0x1c53e10();
   input += synapse0x1c53e50();
   input += synapse0x1c53e90();
   input += synapse0x1c53ed0();
   input += synapse0x1c53f10();
   input += synapse0x1c53f50();
   input += synapse0x1c539e0();
   input += synapse0x1c53a20();
   input += synapse0x1c540a0();
   input += synapse0x1c540e0();
   input += synapse0x1c54120();
   input += synapse0x1c54160();
   input += synapse0x1c541a0();
   input += synapse0x1c541e0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c53850() {
   double input = input0x1c53850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c54220() {
   double input = 0.244965;
   input += synapse0x1c54560();
   input += synapse0x1c545a0();
   input += synapse0x1c545e0();
   input += synapse0x1c54620();
   input += synapse0x1c54660();
   input += synapse0x1c546a0();
   input += synapse0x1c546e0();
   input += synapse0x1c54720();
   input += synapse0x1c54760();
   input += synapse0x1c547a0();
   input += synapse0x1c547e0();
   input += synapse0x1c54820();
   input += synapse0x1c54860();
   input += synapse0x1c548a0();
   input += synapse0x1c548e0();
   input += synapse0x1c54920();
   input += synapse0x1c543b0();
   input += synapse0x1c543f0();
   input += synapse0x1c54a70();
   input += synapse0x1c54ab0();
   input += synapse0x1c54af0();
   input += synapse0x1c54b30();
   input += synapse0x1c54b70();
   input += synapse0x1c54bb0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c54220() {
   double input = input0x1c54220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c54bf0() {
   double input = -0.591103;
   input += synapse0x1c3d660();
   input += synapse0x1c3d6a0();
   input += synapse0x1c3d6e0();
   input += synapse0x1c3d720();
   input += synapse0x1c3d760();
   input += synapse0x1c3d7a0();
   input += synapse0x1c3d7e0();
   input += synapse0x1c3d820();
   input += synapse0x1c55340();
   input += synapse0x1c55380();
   input += synapse0x1c553c0();
   input += synapse0x1c55400();
   input += synapse0x1c55440();
   input += synapse0x1c55480();
   input += synapse0x1c554c0();
   input += synapse0x1c55500();
   input += synapse0x1c54d80();
   input += synapse0x1c54dc0();
   input += synapse0x1c55650();
   input += synapse0x1c55690();
   input += synapse0x1c556d0();
   input += synapse0x1c55710();
   input += synapse0x1c55750();
   input += synapse0x1c55790();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c54bf0() {
   double input = input0x1c54bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c557d0() {
   double input = 1.33824;
   input += synapse0x1c55b10();
   input += synapse0x1c55b50();
   input += synapse0x1c55b90();
   input += synapse0x1c55bd0();
   input += synapse0x1c55c10();
   input += synapse0x1c55c50();
   input += synapse0x1c55c90();
   input += synapse0x1c55cd0();
   input += synapse0x1c55d10();
   input += synapse0x1c55d50();
   input += synapse0x1c55d90();
   input += synapse0x1c55dd0();
   input += synapse0x1c55e10();
   input += synapse0x1c55e50();
   input += synapse0x1c55e90();
   input += synapse0x1c55ed0();
   input += synapse0x1c55960();
   input += synapse0x1c559a0();
   input += synapse0x1c56020();
   input += synapse0x1c56060();
   input += synapse0x1c560a0();
   input += synapse0x1c560e0();
   input += synapse0x1c56120();
   input += synapse0x1c56160();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c557d0() {
   double input = input0x1c557d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c561a0() {
   double input = -0.367555;
   input += synapse0x1c564e0();
   input += synapse0x1c56520();
   input += synapse0x1c56560();
   input += synapse0x1c565a0();
   input += synapse0x1c565e0();
   input += synapse0x1c56620();
   input += synapse0x1c56660();
   input += synapse0x1c566a0();
   input += synapse0x1c566e0();
   input += synapse0x1c56720();
   input += synapse0x1c56760();
   input += synapse0x1c567a0();
   input += synapse0x1c567e0();
   input += synapse0x1c56820();
   input += synapse0x1c56860();
   input += synapse0x1c568a0();
   input += synapse0x1c56330();
   input += synapse0x1c56370();
   input += synapse0x1c46ea0();
   input += synapse0x1c46ee0();
   input += synapse0x1c46f20();
   input += synapse0x1c46f60();
   input += synapse0x1c46fa0();
   input += synapse0x1c46fe0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c561a0() {
   double input = input0x1c561a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c47020() {
   double input = 0.758782;
   input += synapse0x1c47360();
   input += synapse0x1c473a0();
   input += synapse0x1c473e0();
   input += synapse0x1c47420();
   input += synapse0x1c47460();
   input += synapse0x1c474a0();
   input += synapse0x1c474e0();
   input += synapse0x1c47520();
   input += synapse0x1c47560();
   input += synapse0x1c475a0();
   input += synapse0x1c475e0();
   input += synapse0x1c47620();
   input += synapse0x1c47660();
   input += synapse0x1c476a0();
   input += synapse0x1c476e0();
   input += synapse0x1c47720();
   input += synapse0x1c471b0();
   input += synapse0x1c471f0();
   input += synapse0x1c47870();
   input += synapse0x1c478b0();
   input += synapse0x1c478f0();
   input += synapse0x1c47930();
   input += synapse0x1c47970();
   input += synapse0x1c479b0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c47020() {
   double input = input0x1c47020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c479f0() {
   double input = -0.26778;
   input += synapse0x1c47d30();
   input += synapse0x1c47d70();
   input += synapse0x1c47db0();
   input += synapse0x1c47df0();
   input += synapse0x1c47e30();
   input += synapse0x1c47e70();
   input += synapse0x1c47eb0();
   input += synapse0x1c47ef0();
   input += synapse0x1c47f30();
   input += synapse0x1c47f70();
   input += synapse0x1c47fb0();
   input += synapse0x1c47ff0();
   input += synapse0x1c48030();
   input += synapse0x1c48070();
   input += synapse0x1c480b0();
   input += synapse0x1c480f0();
   input += synapse0x1c47b80();
   input += synapse0x1c47bc0();
   input += synapse0x1c48240();
   input += synapse0x1c48280();
   input += synapse0x1c482c0();
   input += synapse0x1c48300();
   input += synapse0x1c48340();
   input += synapse0x1c48380();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c479f0() {
   double input = input0x1c479f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c483c0() {
   double input = -0.07229;
   input += synapse0x1c48700();
   input += synapse0x1c48740();
   input += synapse0x1c48780();
   input += synapse0x1c487c0();
   input += synapse0x1c48800();
   input += synapse0x1c48840();
   input += synapse0x1c48880();
   input += synapse0x1c488c0();
   input += synapse0x1c48900();
   input += synapse0x1c48940();
   input += synapse0x1c48980();
   input += synapse0x1c489c0();
   input += synapse0x1c48a00();
   input += synapse0x1c48a40();
   input += synapse0x1c48a80();
   input += synapse0x1c48ac0();
   input += synapse0x1c48550();
   input += synapse0x1c48590();
   input += synapse0x1c48c10();
   input += synapse0x1c48c50();
   input += synapse0x1c48c90();
   input += synapse0x1c48cd0();
   input += synapse0x1c48d10();
   input += synapse0x1c48d50();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c483c0() {
   double input = input0x1c483c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c5aa00() {
   double input = 0.170378;
   input += synapse0x1c5ac20();
   input += synapse0x1c5ac60();
   input += synapse0x1c5aca0();
   input += synapse0x1c5ace0();
   input += synapse0x1c5ad20();
   input += synapse0x1c5ad60();
   input += synapse0x1c5ada0();
   input += synapse0x1c5ade0();
   input += synapse0x1c5ae20();
   input += synapse0x1c5ae60();
   input += synapse0x1c5aea0();
   input += synapse0x1c5aee0();
   input += synapse0x1c5af20();
   input += synapse0x1c5af60();
   input += synapse0x1c5afa0();
   input += synapse0x1c5afe0();
   input += synapse0x1c48d90();
   input += synapse0x1c48dd0();
   input += synapse0x1c5b130();
   input += synapse0x1c5b170();
   input += synapse0x1c5b1b0();
   input += synapse0x1c5b1f0();
   input += synapse0x1c5b230();
   input += synapse0x1c5b270();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c5aa00() {
   double input = input0x1c5aa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c5b2b0() {
   double input = -0.959591;
   input += synapse0x1c5b5f0();
   input += synapse0x1c5b630();
   input += synapse0x1c5b670();
   input += synapse0x1c5b6b0();
   input += synapse0x1c5b6f0();
   input += synapse0x1c5b730();
   input += synapse0x1c5b770();
   input += synapse0x1c5b7b0();
   input += synapse0x1c5b7f0();
   input += synapse0x1c5b830();
   input += synapse0x1c5b870();
   input += synapse0x1c5b8b0();
   input += synapse0x1c5b8f0();
   input += synapse0x1c5b930();
   input += synapse0x1c5b970();
   input += synapse0x1c5b9b0();
   input += synapse0x1c5b440();
   input += synapse0x1c5b480();
   input += synapse0x1c5bb00();
   input += synapse0x1c5bb40();
   input += synapse0x1c5bb80();
   input += synapse0x1c5bbc0();
   input += synapse0x1c5bc00();
   input += synapse0x1c5bc40();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c5b2b0() {
   double input = input0x1c5b2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c5bc80() {
   double input = 0.945591;
   input += synapse0x1c5bfc0();
   input += synapse0x1c5c000();
   input += synapse0x1c5c040();
   input += synapse0x1c5c080();
   input += synapse0x1c5c0c0();
   input += synapse0x1c5c100();
   input += synapse0x1c5c140();
   input += synapse0x1c5c180();
   input += synapse0x1c5c1c0();
   input += synapse0x1c5c200();
   input += synapse0x1c5c240();
   input += synapse0x1c5c280();
   input += synapse0x1c5c2c0();
   input += synapse0x1c5c300();
   input += synapse0x1c5c340();
   input += synapse0x1c5c380();
   input += synapse0x1c5be10();
   input += synapse0x1c5be50();
   input += synapse0x1c5c4d0();
   input += synapse0x1c5c510();
   input += synapse0x1c5c550();
   input += synapse0x1c5c590();
   input += synapse0x1c5c5d0();
   input += synapse0x1c5c610();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c5bc80() {
   double input = input0x1c5bc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c5c650() {
   double input = -0.636453;
   input += synapse0x1c5c990();
   input += synapse0x1c5c9d0();
   input += synapse0x1c5ca10();
   input += synapse0x1c5ca50();
   input += synapse0x1c5ca90();
   input += synapse0x1c5cad0();
   input += synapse0x1c5cb10();
   input += synapse0x1c5cb50();
   input += synapse0x1c5cb90();
   input += synapse0x1c5cbd0();
   input += synapse0x1c5cc10();
   input += synapse0x1c5cc50();
   input += synapse0x1c5cc90();
   input += synapse0x1c5ccd0();
   input += synapse0x1c5cd10();
   input += synapse0x1c5cd50();
   input += synapse0x1c5c7e0();
   input += synapse0x1c5c820();
   input += synapse0x1c5cea0();
   input += synapse0x1c5cee0();
   input += synapse0x1c5cf20();
   input += synapse0x1c5cf60();
   input += synapse0x1c5cfa0();
   input += synapse0x1c5cfe0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c5c650() {
   double input = input0x1c5c650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c63850() {
   double input = 0.746269;
   input += synapse0x1c39580();
   input += synapse0x1c395c0();
   input += synapse0x1c3aa90();
   input += synapse0x1c3aad0();
   input += synapse0x1c3b460();
   input += synapse0x1c3b4a0();
   input += synapse0x1c3c230();
   input += synapse0x1c3c270();
   input += synapse0x1c3cc00();
   input += synapse0x1c3cc40();
   input += synapse0x1c3d5d0();
   input += synapse0x1c3d610();
   input += synapse0x1c3e0b0();
   input += synapse0x1c3e0f0();
   input += synapse0x1c3ea80();
   input += synapse0x1c3eac0();
   input += synapse0x1c3bb60();
   input += synapse0x1c3bba0();
   input += synapse0x1c40630();
   input += synapse0x1c40670();
   input += synapse0x1c41000();
   input += synapse0x1c41040();
   input += synapse0x1c419d0();
   input += synapse0x1c41a10();
   input += synapse0x1c423a0();
   input += synapse0x1c423e0();
   input += synapse0x1c36510();
   input += synapse0x1c36550();
   input += synapse0x1c44490();
   input += synapse0x1c444d0();
   input += synapse0x1c44e60();
   input += synapse0x1c44ea0();
   input += synapse0x1c45830();
   input += synapse0x1c45870();
   input += synapse0x1c46200();
   input += synapse0x1c46240();
   input += synapse0x1c46bd0();
   input += synapse0x1c46c10();
   input += synapse0x1c3f720();
   input += synapse0x1c3f760();
   input += synapse0x1c48fd0();
   input += synapse0x1c49010();
   input += synapse0x1c49960();
   input += synapse0x1c499a0();
   input += synapse0x1c4a330();
   input += synapse0x1c4a370();
   input += synapse0x1c4ad00();
   input += synapse0x1c4ad40();
   input += synapse0x1c4b6d0();
   input += synapse0x1c4b710();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c63850() {
   double input = input0x1c63850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c63bf0() {
   double input = 0.320393;
   input += synapse0x1c4de10();
   input += synapse0x1c4de50();
   input += synapse0x1c433d0();
   input += synapse0x1c43410();
   input += synapse0x1c509f0();
   input += synapse0x1c50a30();
   input += synapse0x1c513c0();
   input += synapse0x1c51400();
   input += synapse0x1c51d90();
   input += synapse0x1c51dd0();
   input += synapse0x1c52760();
   input += synapse0x1c527a0();
   input += synapse0x1c53130();
   input += synapse0x1c53170();
   input += synapse0x1c53b00();
   input += synapse0x1c53b40();
   input += synapse0x1c544d0();
   input += synapse0x1c54510();
   input += synapse0x1c54ea0();
   input += synapse0x1c54ee0();
   input += synapse0x1c55a80();
   input += synapse0x1c55ac0();
   input += synapse0x1c56450();
   input += synapse0x1c56490();
   input += synapse0x1c472d0();
   input += synapse0x1c47310();
   input += synapse0x1c47ca0();
   input += synapse0x1c47ce0();
   input += synapse0x1c48670();
   input += synapse0x1c486b0();
   input += synapse0x1c5ab90();
   input += synapse0x1c5abd0();
   input += synapse0x1c5b560();
   input += synapse0x1c5b5a0();
   input += synapse0x1c5bf30();
   input += synapse0x1c5bf70();
   input += synapse0x1c5c900();
   input += synapse0x1c5c940();
   input += synapse0x1c387f0();
   input += synapse0x1c38830();
   input += synapse0x1c4c0a0();
   input += synapse0x1c4c0e0();
   input += synapse0x1c5d020();
   input += synapse0x1c5d060();
   input += synapse0x1c5d0a0();
   input += synapse0x1c5d0e0();
   input += synapse0x1c63f90();
   input += synapse0x1c63fd0();
   input += synapse0x1c64010();
   input += synapse0x1c64050();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c63bf0() {
   double input = input0x1c63bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c64090() {
   double input = 0.00912876;
   input += synapse0x1c643d0();
   input += synapse0x1c64410();
   input += synapse0x1c64450();
   input += synapse0x1c64490();
   input += synapse0x1c644d0();
   input += synapse0x1c64510();
   input += synapse0x1c64550();
   input += synapse0x1c64590();
   input += synapse0x1c645d0();
   input += synapse0x1c64610();
   input += synapse0x1c64650();
   input += synapse0x1c64690();
   input += synapse0x1c646d0();
   input += synapse0x1c64710();
   input += synapse0x1c64750();
   input += synapse0x1c64790();
   input += synapse0x1c64220();
   input += synapse0x1c64260();
   input += synapse0x1c648e0();
   input += synapse0x1c64920();
   input += synapse0x1c64960();
   input += synapse0x1c649a0();
   input += synapse0x1c649e0();
   input += synapse0x1c64a20();
   input += synapse0x1c64a60();
   input += synapse0x1c64aa0();
   input += synapse0x1c64ae0();
   input += synapse0x1c64b20();
   input += synapse0x1c64b60();
   input += synapse0x1c64ba0();
   input += synapse0x1c64be0();
   input += synapse0x1c64c20();
   input += synapse0x1c647d0();
   input += synapse0x1c64810();
   input += synapse0x1c64850();
   input += synapse0x1c64890();
   input += synapse0x1c64e70();
   input += synapse0x1c64eb0();
   input += synapse0x1c64ef0();
   input += synapse0x1c64f30();
   input += synapse0x1c64f70();
   input += synapse0x1c64fb0();
   input += synapse0x1c64ff0();
   input += synapse0x1c65030();
   input += synapse0x1c65070();
   input += synapse0x1c650b0();
   input += synapse0x1c650f0();
   input += synapse0x1c65130();
   input += synapse0x1c65170();
   input += synapse0x1c651b0();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c64090() {
   double input = input0x1c64090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c651f0() {
   double input = -0.6755;
   input += synapse0x1c65530();
   input += synapse0x1c65570();
   input += synapse0x1c655b0();
   input += synapse0x1c655f0();
   input += synapse0x1c65630();
   input += synapse0x1c65670();
   input += synapse0x1c656b0();
   input += synapse0x1c656f0();
   input += synapse0x1c65730();
   input += synapse0x1c65770();
   input += synapse0x1c657b0();
   input += synapse0x1c657f0();
   input += synapse0x1c65830();
   input += synapse0x1c65870();
   input += synapse0x1c658b0();
   input += synapse0x1c658f0();
   input += synapse0x1c65380();
   input += synapse0x1c653c0();
   input += synapse0x1c65a40();
   input += synapse0x1c65a80();
   input += synapse0x1c65ac0();
   input += synapse0x1c65b00();
   input += synapse0x1c65b40();
   input += synapse0x1c65b80();
   input += synapse0x1c65bc0();
   input += synapse0x1c65c00();
   input += synapse0x1c65c40();
   input += synapse0x1c65c80();
   input += synapse0x1c65cc0();
   input += synapse0x1c65d00();
   input += synapse0x1c65d40();
   input += synapse0x1c65d80();
   input += synapse0x1c65930();
   input += synapse0x1c65970();
   input += synapse0x1c659b0();
   input += synapse0x1c659f0();
   input += synapse0x1c65fd0();
   input += synapse0x1c66010();
   input += synapse0x1c66050();
   input += synapse0x1c66090();
   input += synapse0x1c660d0();
   input += synapse0x1c66110();
   input += synapse0x1c66150();
   input += synapse0x1c66190();
   input += synapse0x1c661d0();
   input += synapse0x1c66210();
   input += synapse0x1c66250();
   input += synapse0x1c66290();
   input += synapse0x1c662d0();
   input += synapse0x1c66310();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c651f0() {
   double input = input0x1c651f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c66350() {
   double input = 0.321095;
   input += synapse0x1c66690();
   input += synapse0x1c666d0();
   input += synapse0x1c66710();
   input += synapse0x1c66750();
   input += synapse0x1c66790();
   input += synapse0x1c667d0();
   input += synapse0x1c66810();
   input += synapse0x1c66850();
   input += synapse0x1c66890();
   input += synapse0x1c668d0();
   input += synapse0x1c66910();
   input += synapse0x1c66950();
   input += synapse0x1c66990();
   input += synapse0x1c669d0();
   input += synapse0x1c66a10();
   input += synapse0x1c66a50();
   input += synapse0x1c664e0();
   input += synapse0x1c66520();
   input += synapse0x1c66ba0();
   input += synapse0x1c66be0();
   input += synapse0x1c66c20();
   input += synapse0x1c66c60();
   input += synapse0x1c66ca0();
   input += synapse0x1c66ce0();
   input += synapse0x1c66d20();
   input += synapse0x1c66d60();
   input += synapse0x1c66da0();
   input += synapse0x1c66de0();
   input += synapse0x1c66e20();
   input += synapse0x1c66e60();
   input += synapse0x1c66ea0();
   input += synapse0x1c66ee0();
   input += synapse0x1c66a90();
   input += synapse0x1c66ad0();
   input += synapse0x1c66b10();
   input += synapse0x1c66b50();
   input += synapse0x1c67130();
   input += synapse0x1c67170();
   input += synapse0x1c671b0();
   input += synapse0x1c671f0();
   input += synapse0x1c67230();
   input += synapse0x1c67270();
   input += synapse0x1c672b0();
   input += synapse0x1c672f0();
   input += synapse0x1c67330();
   input += synapse0x1c67370();
   input += synapse0x1c673b0();
   input += synapse0x1c673f0();
   input += synapse0x1c67430();
   input += synapse0x1c67470();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c66350() {
   double input = input0x1c66350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRsR::input0x1c674b0() {
   double input = 2.41794;
   input += synapse0x1c38590();
   input += synapse0x1c676d0();
   input += synapse0x1c67710();
   input += synapse0x1c67750();
   input += synapse0x1c67790();
   return input;
}

double NNfunction_ss_dRsR::neuron0x1c674b0() {
   double input = input0x1c674b0();
   return (input * 1)+0;
}

double NNfunction_ss_dRsR::synapse0x19f33e0() {
   return (neuron0x1c33570()*-0.0457428);
}

double NNfunction_ss_dRsR::synapse0x1c33430() {
   return (neuron0x1c338b0()*-0.181014);
}

double NNfunction_ss_dRsR::synapse0x1c33470() {
   return (neuron0x1c33bf0()*-0.00742762);
}

double NNfunction_ss_dRsR::synapse0x1c38880() {
   return (neuron0x1c33f30()*-0.81307);
}

double NNfunction_ss_dRsR::synapse0x1c388c0() {
   return (neuron0x1c34270()*-0.0685031);
}

double NNfunction_ss_dRsR::synapse0x1c38900() {
   return (neuron0x1c345b0()*0.0456438);
}

double NNfunction_ss_dRsR::synapse0x1c38940() {
   return (neuron0x1c348f0()*-0.0102221);
}

double NNfunction_ss_dRsR::synapse0x1c38980() {
   return (neuron0x1c34c30()*0.110762);
}

double NNfunction_ss_dRsR::synapse0x1c389c0() {
   return (neuron0x1c34f70()*-0.027641);
}

double NNfunction_ss_dRsR::synapse0x1c38a00() {
   return (neuron0x1c352b0()*0.0723662);
}

double NNfunction_ss_dRsR::synapse0x1c38a40() {
   return (neuron0x1c355f0()*0.00738301);
}

double NNfunction_ss_dRsR::synapse0x1c38a80() {
   return (neuron0x1c35930()*-0.146219);
}

double NNfunction_ss_dRsR::synapse0x1c38ac0() {
   return (neuron0x1c35c70()*-0.202048);
}

double NNfunction_ss_dRsR::synapse0x1c38b00() {
   return (neuron0x1c35fb0()*0.221216);
}

double NNfunction_ss_dRsR::synapse0x1c38b40() {
   return (neuron0x1c362f0()*-0.208465);
}

double NNfunction_ss_dRsR::synapse0x1c38b80() {
   return (neuron0x1c36630()*0.456813);
}

double NNfunction_ss_dRsR::synapse0x1c333a0() {
   return (neuron0x1c36970()*0.227916);
}

double NNfunction_ss_dRsR::synapse0x1c333e0() {
   return (neuron0x1c36ed0()*-0.0165142);
}

double NNfunction_ss_dRsR::synapse0x19e4c80() {
   return (neuron0x1c370f0()*-0.143567);
}

double NNfunction_ss_dRsR::synapse0x19e4cc0() {
   return (neuron0x1c37430()*-0.0738103);
}

double NNfunction_ss_dRsR::synapse0x1c38de0() {
   return (neuron0x1c37770()*0.0483101);
}

double NNfunction_ss_dRsR::synapse0x1c38e20() {
   return (neuron0x1c37ab0()*-0.0810686);
}

double NNfunction_ss_dRsR::synapse0x1c38e60() {
   return (neuron0x1c37df0()*-0.041196);
}

double NNfunction_ss_dRsR::synapse0x1c38ea0() {
   return (neuron0x1c38130()*-0.0673609);
}

double NNfunction_ss_dRsR::synapse0x1c39220() {
   return (neuron0x1c33570()*-0.10821);
}

double NNfunction_ss_dRsR::synapse0x1c39260() {
   return (neuron0x1c338b0()*0.0646902);
}

double NNfunction_ss_dRsR::synapse0x1c392a0() {
   return (neuron0x1c33bf0()*-0.0933691);
}

double NNfunction_ss_dRsR::synapse0x1c392e0() {
   return (neuron0x1c33f30()*0.220536);
}

double NNfunction_ss_dRsR::synapse0x1c39320() {
   return (neuron0x1c34270()*0.222193);
}

double NNfunction_ss_dRsR::synapse0x1c39360() {
   return (neuron0x1c345b0()*-0.224223);
}

double NNfunction_ss_dRsR::synapse0x1c393a0() {
   return (neuron0x1c348f0()*0.278961);
}

double NNfunction_ss_dRsR::synapse0x1c393e0() {
   return (neuron0x1c34c30()*0.13622);
}

double NNfunction_ss_dRsR::synapse0x1c39420() {
   return (neuron0x1c34f70()*-0.0997762);
}

double NNfunction_ss_dRsR::synapse0x1c38cd0() {
   return (neuron0x1c352b0()*0.0913051);
}

double NNfunction_ss_dRsR::synapse0x1c38d10() {
   return (neuron0x1c355f0()*-0.400788);
}

double NNfunction_ss_dRsR::synapse0x1c38d50() {
   return (neuron0x1c35930()*-0.490094);
}

double NNfunction_ss_dRsR::synapse0x1c38d90() {
   return (neuron0x1c35c70()*-0.197394);
}

double NNfunction_ss_dRsR::synapse0x1c39670() {
   return (neuron0x1c35fb0()*0.853567);
}

double NNfunction_ss_dRsR::synapse0x1c396b0() {
   return (neuron0x1c362f0()*-0.0438529);
}

double NNfunction_ss_dRsR::synapse0x1c396f0() {
   return (neuron0x1c36630()*0.143707);
}

double NNfunction_ss_dRsR::synapse0x1c39070() {
   return (neuron0x1c36970()*-0.204717);
}

double NNfunction_ss_dRsR::synapse0x1c390b0() {
   return (neuron0x1c36ed0()*-0.524712);
}

double NNfunction_ss_dRsR::synapse0x1c39840() {
   return (neuron0x1c370f0()*-0.656933);
}

double NNfunction_ss_dRsR::synapse0x1c39880() {
   return (neuron0x1c37430()*0.435538);
}

double NNfunction_ss_dRsR::synapse0x1c398c0() {
   return (neuron0x1c37770()*-0.400233);
}

double NNfunction_ss_dRsR::synapse0x1c39900() {
   return (neuron0x1c37ab0()*0.0650142);
}

double NNfunction_ss_dRsR::synapse0x1c39940() {
   return (neuron0x1c37df0()*-0.25321);
}

double NNfunction_ss_dRsR::synapse0x1c39980() {
   return (neuron0x1c38130()*0.290521);
}

double NNfunction_ss_dRsR::synapse0x1c39d00() {
   return (neuron0x1c33570()*-0.211815);
}

double NNfunction_ss_dRsR::synapse0x1c39d40() {
   return (neuron0x1c338b0()*-0.214503);
}

double NNfunction_ss_dRsR::synapse0x1c39d80() {
   return (neuron0x1c33bf0()*-0.0911999);
}

double NNfunction_ss_dRsR::synapse0x1c39dc0() {
   return (neuron0x1c33f30()*1.38225);
}

double NNfunction_ss_dRsR::synapse0x1c39e00() {
   return (neuron0x1c34270()*-0.0132909);
}

double NNfunction_ss_dRsR::synapse0x1c39e40() {
   return (neuron0x1c345b0()*0.0683957);
}

double NNfunction_ss_dRsR::synapse0x1c39e80() {
   return (neuron0x1c348f0()*-0.0630838);
}

double NNfunction_ss_dRsR::synapse0x1c39ec0() {
   return (neuron0x1c34c30()*-0.167692);
}

double NNfunction_ss_dRsR::synapse0x1c39f00() {
   return (neuron0x1c34f70()*-0.0695732);
}

double NNfunction_ss_dRsR::synapse0x1c39f40() {
   return (neuron0x1c352b0()*-0.301376);
}

double NNfunction_ss_dRsR::synapse0x1c39f80() {
   return (neuron0x1c355f0()*-0.091675);
}

double NNfunction_ss_dRsR::synapse0x1c39fc0() {
   return (neuron0x1c35930()*-0.114976);
}

double NNfunction_ss_dRsR::synapse0x1c3a000() {
   return (neuron0x1c35c70()*-0.0696363);
}

double NNfunction_ss_dRsR::synapse0x1c3a040() {
   return (neuron0x1c35fb0()*0.291953);
}

double NNfunction_ss_dRsR::synapse0x1c3a080() {
   return (neuron0x1c362f0()*0.045985);
}

double NNfunction_ss_dRsR::synapse0x1c3a0c0() {
   return (neuron0x1c36630()*-0.328266);
}

double NNfunction_ss_dRsR::synapse0x1c39b50() {
   return (neuron0x1c36970()*-0.175696);
}

double NNfunction_ss_dRsR::synapse0x1c39b90() {
   return (neuron0x1c36ed0()*-0.786982);
}

double NNfunction_ss_dRsR::synapse0x19f2ad0() {
   return (neuron0x1c370f0()*-0.355879);
}

double NNfunction_ss_dRsR::synapse0x19f2b10() {
   return (neuron0x1c37430()*-0.0735759);
}

double NNfunction_ss_dRsR::synapse0x1c22600() {
   return (neuron0x1c37770()*0.206878);
}

double NNfunction_ss_dRsR::synapse0x1c22640() {
   return (neuron0x1c37ab0()*-0.0907);
}

double NNfunction_ss_dRsR::synapse0x1c22680() {
   return (neuron0x1c37df0()*0.139524);
}

double NNfunction_ss_dRsR::synapse0x1c334b0() {
   return (neuron0x1c38130()*0.065304);
}

double NNfunction_ss_dRsR::synapse0x1c39610() {
   return (neuron0x1c33570()*-0.27733);
}

double NNfunction_ss_dRsR::synapse0x1c334f0() {
   return (neuron0x1c338b0()*0.0293448);
}

double NNfunction_ss_dRsR::synapse0x1c33530() {
   return (neuron0x1c33bf0()*-0.288264);
}

double NNfunction_ss_dRsR::synapse0x1c3a210() {
   return (neuron0x1c33f30()*0.275112);
}

double NNfunction_ss_dRsR::synapse0x1c3a250() {
   return (neuron0x1c34270()*-0.426325);
}

double NNfunction_ss_dRsR::synapse0x1c3a290() {
   return (neuron0x1c345b0()*-0.0999314);
}

double NNfunction_ss_dRsR::synapse0x1c3a2d0() {
   return (neuron0x1c348f0()*0.195896);
}

double NNfunction_ss_dRsR::synapse0x1c3a310() {
   return (neuron0x1c34c30()*0.116571);
}

double NNfunction_ss_dRsR::synapse0x1c3a350() {
   return (neuron0x1c34f70()*0.28931);
}

double NNfunction_ss_dRsR::synapse0x1c3a390() {
   return (neuron0x1c352b0()*-0.67506);
}

double NNfunction_ss_dRsR::synapse0x1c3a3d0() {
   return (neuron0x1c355f0()*0.357651);
}

double NNfunction_ss_dRsR::synapse0x1c3a410() {
   return (neuron0x1c35930()*-0.623577);
}

double NNfunction_ss_dRsR::synapse0x1c3a450() {
   return (neuron0x1c35c70()*-0.0789745);
}

double NNfunction_ss_dRsR::synapse0x1c3a490() {
   return (neuron0x1c35fb0()*0.280888);
}

double NNfunction_ss_dRsR::synapse0x1c3a4d0() {
   return (neuron0x1c362f0()*0.0295999);
}

double NNfunction_ss_dRsR::synapse0x1c3a510() {
   return (neuron0x1c36630()*-0.00274579);
}

double NNfunction_ss_dRsR::synapse0x1c39460() {
   return (neuron0x1c36970()*0.0811582);
}

double NNfunction_ss_dRsR::synapse0x1c394a0() {
   return (neuron0x1c36ed0()*0.774538);
}

double NNfunction_ss_dRsR::synapse0x1c3a660() {
   return (neuron0x1c370f0()*-0.393747);
}

double NNfunction_ss_dRsR::synapse0x1c3a6a0() {
   return (neuron0x1c37430()*0.535114);
}

double NNfunction_ss_dRsR::synapse0x1c3a6e0() {
   return (neuron0x1c37770()*0.0958667);
}

double NNfunction_ss_dRsR::synapse0x1c3a720() {
   return (neuron0x1c37ab0()*-0.221017);
}

double NNfunction_ss_dRsR::synapse0x1c3a760() {
   return (neuron0x1c37df0()*0.219514);
}

double NNfunction_ss_dRsR::synapse0x1c3a7a0() {
   return (neuron0x1c38130()*-0.381696);
}

double NNfunction_ss_dRsR::synapse0x1c3ab20() {
   return (neuron0x1c33570()*0.590827);
}

double NNfunction_ss_dRsR::synapse0x1c3ab60() {
   return (neuron0x1c338b0()*0.308409);
}

double NNfunction_ss_dRsR::synapse0x1c3aba0() {
   return (neuron0x1c33bf0()*0.329532);
}

double NNfunction_ss_dRsR::synapse0x1c3abe0() {
   return (neuron0x1c33f30()*-1.01426);
}

double NNfunction_ss_dRsR::synapse0x1c3ac20() {
   return (neuron0x1c34270()*-0.241252);
}

double NNfunction_ss_dRsR::synapse0x1c3ac60() {
   return (neuron0x1c345b0()*0.0736807);
}

double NNfunction_ss_dRsR::synapse0x1c3aca0() {
   return (neuron0x1c348f0()*0.174981);
}

double NNfunction_ss_dRsR::synapse0x1c3ace0() {
   return (neuron0x1c34c30()*-0.24368);
}

double NNfunction_ss_dRsR::synapse0x1c3ad20() {
   return (neuron0x1c34f70()*0.0103171);
}

double NNfunction_ss_dRsR::synapse0x1c3ad60() {
   return (neuron0x1c352b0()*0.231586);
}

double NNfunction_ss_dRsR::synapse0x1c3ada0() {
   return (neuron0x1c355f0()*-0.393678);
}

double NNfunction_ss_dRsR::synapse0x1c3ade0() {
   return (neuron0x1c35930()*0.774465);
}

double NNfunction_ss_dRsR::synapse0x1c3ae20() {
   return (neuron0x1c35c70()*0.355813);
}

double NNfunction_ss_dRsR::synapse0x1c3ae60() {
   return (neuron0x1c35fb0()*0.397748);
}

double NNfunction_ss_dRsR::synapse0x1c3aea0() {
   return (neuron0x1c362f0()*0.044729);
}

double NNfunction_ss_dRsR::synapse0x1c3aee0() {
   return (neuron0x1c36630()*-0.0534672);
}

double NNfunction_ss_dRsR::synapse0x1c3a970() {
   return (neuron0x1c36970()*0.10501);
}

double NNfunction_ss_dRsR::synapse0x1c3a9b0() {
   return (neuron0x1c36ed0()*-0.0871279);
}

double NNfunction_ss_dRsR::synapse0x1c3b030() {
   return (neuron0x1c370f0()*-0.18713);
}

double NNfunction_ss_dRsR::synapse0x1c3b070() {
   return (neuron0x1c37430()*0.207591);
}

double NNfunction_ss_dRsR::synapse0x1c3b0b0() {
   return (neuron0x1c37770()*-0.0828034);
}

double NNfunction_ss_dRsR::synapse0x1c3b0f0() {
   return (neuron0x1c37ab0()*0.257612);
}

double NNfunction_ss_dRsR::synapse0x1c3b130() {
   return (neuron0x1c37df0()*0.360919);
}

double NNfunction_ss_dRsR::synapse0x1c3b170() {
   return (neuron0x1c38130()*-0.135154);
}

double NNfunction_ss_dRsR::synapse0x1c3b4f0() {
   return (neuron0x1c33570()*-0.00694652);
}

double NNfunction_ss_dRsR::synapse0x1c3b530() {
   return (neuron0x1c338b0()*-0.0200075);
}

double NNfunction_ss_dRsR::synapse0x1c3b570() {
   return (neuron0x1c33bf0()*-0.0244653);
}

double NNfunction_ss_dRsR::synapse0x1c3b5b0() {
   return (neuron0x1c33f30()*5.9919);
}

double NNfunction_ss_dRsR::synapse0x1c3b5f0() {
   return (neuron0x1c34270()*0.00669171);
}

double NNfunction_ss_dRsR::synapse0x1c3b630() {
   return (neuron0x1c345b0()*0.0191938);
}

double NNfunction_ss_dRsR::synapse0x1c3b670() {
   return (neuron0x1c348f0()*0.0209116);
}

double NNfunction_ss_dRsR::synapse0x1c3b6b0() {
   return (neuron0x1c34c30()*0.031023);
}

double NNfunction_ss_dRsR::synapse0x1c3b6f0() {
   return (neuron0x1c34f70()*0.00209088);
}

double NNfunction_ss_dRsR::synapse0x19f2e40() {
   return (neuron0x1c352b0()*-0.0322451);
}

double NNfunction_ss_dRsR::synapse0x19f2e80() {
   return (neuron0x1c355f0()*-0.0157417);
}

double NNfunction_ss_dRsR::synapse0x19f2ec0() {
   return (neuron0x1c35930()*0.00560946);
}

double NNfunction_ss_dRsR::synapse0x19f2f00() {
   return (neuron0x1c35c70()*0.0315832);
}

double NNfunction_ss_dRsR::synapse0x19f2f40() {
   return (neuron0x1c35fb0()*0.0414326);
}

double NNfunction_ss_dRsR::synapse0x19f2f80() {
   return (neuron0x1c362f0()*0.0324045);
}

double NNfunction_ss_dRsR::synapse0x19f2fc0() {
   return (neuron0x1c36630()*0.0404966);
}

double NNfunction_ss_dRsR::synapse0x1c3b340() {
   return (neuron0x1c36970()*0.000925462);
}

double NNfunction_ss_dRsR::synapse0x1c3b380() {
   return (neuron0x1c36ed0()*-0.892472);
}

double NNfunction_ss_dRsR::synapse0x19f3110() {
   return (neuron0x1c370f0()*0.5235);
}

double NNfunction_ss_dRsR::synapse0x19f3150() {
   return (neuron0x1c37430()*-0.0108339);
}

double NNfunction_ss_dRsR::synapse0x19f3190() {
   return (neuron0x1c37770()*0.0132086);
}

double NNfunction_ss_dRsR::synapse0x19f31d0() {
   return (neuron0x1c37ab0()*9.61634e-05);
}

double NNfunction_ss_dRsR::synapse0x19f3210() {
   return (neuron0x1c37df0()*-0.00242161);
}

double NNfunction_ss_dRsR::synapse0x1c3bf40() {
   return (neuron0x1c38130()*-0.0035931);
}

double NNfunction_ss_dRsR::synapse0x1c3c2c0() {
   return (neuron0x1c33570()*0.00548555);
}

double NNfunction_ss_dRsR::synapse0x1c3c300() {
   return (neuron0x1c338b0()*0.239022);
}

double NNfunction_ss_dRsR::synapse0x1c3c340() {
   return (neuron0x1c33bf0()*0.133231);
}

double NNfunction_ss_dRsR::synapse0x1c3c380() {
   return (neuron0x1c33f30()*-0.234397);
}

double NNfunction_ss_dRsR::synapse0x1c3c3c0() {
   return (neuron0x1c34270()*0.242222);
}

double NNfunction_ss_dRsR::synapse0x1c3c400() {
   return (neuron0x1c345b0()*0.28438);
}

double NNfunction_ss_dRsR::synapse0x1c3c440() {
   return (neuron0x1c348f0()*-0.52606);
}

double NNfunction_ss_dRsR::synapse0x1c3c480() {
   return (neuron0x1c34c30()*-0.444704);
}

double NNfunction_ss_dRsR::synapse0x1c3c4c0() {
   return (neuron0x1c34f70()*0.823933);
}

double NNfunction_ss_dRsR::synapse0x1c3c500() {
   return (neuron0x1c352b0()*0.158425);
}

double NNfunction_ss_dRsR::synapse0x1c3c540() {
   return (neuron0x1c355f0()*-0.280356);
}

double NNfunction_ss_dRsR::synapse0x1c3c580() {
   return (neuron0x1c35930()*0.52294);
}

double NNfunction_ss_dRsR::synapse0x1c3c5c0() {
   return (neuron0x1c35c70()*-0.116403);
}

double NNfunction_ss_dRsR::synapse0x1c3c600() {
   return (neuron0x1c35fb0()*-0.266407);
}

double NNfunction_ss_dRsR::synapse0x1c3c640() {
   return (neuron0x1c362f0()*-0.165277);
}

double NNfunction_ss_dRsR::synapse0x1c3c680() {
   return (neuron0x1c36630()*0.800202);
}

double NNfunction_ss_dRsR::synapse0x1c3c110() {
   return (neuron0x1c36970()*0.660129);
}

double NNfunction_ss_dRsR::synapse0x1c3c150() {
   return (neuron0x1c36ed0()*0.504792);
}

double NNfunction_ss_dRsR::synapse0x1c3c7d0() {
   return (neuron0x1c370f0()*0.121837);
}

double NNfunction_ss_dRsR::synapse0x1c3c810() {
   return (neuron0x1c37430()*0.727352);
}

double NNfunction_ss_dRsR::synapse0x1c3c850() {
   return (neuron0x1c37770()*-0.717737);
}

double NNfunction_ss_dRsR::synapse0x1c3c890() {
   return (neuron0x1c37ab0()*-0.285965);
}

double NNfunction_ss_dRsR::synapse0x1c3c8d0() {
   return (neuron0x1c37df0()*0.136195);
}

double NNfunction_ss_dRsR::synapse0x1c3c910() {
   return (neuron0x1c38130()*-0.261945);
}

double NNfunction_ss_dRsR::synapse0x1c3cc90() {
   return (neuron0x1c33570()*-0.0239144);
}

double NNfunction_ss_dRsR::synapse0x1c3ccd0() {
   return (neuron0x1c338b0()*0.108745);
}

double NNfunction_ss_dRsR::synapse0x1c3cd10() {
   return (neuron0x1c33bf0()*0.0207506);
}

double NNfunction_ss_dRsR::synapse0x1c3cd50() {
   return (neuron0x1c33f30()*0.124519);
}

double NNfunction_ss_dRsR::synapse0x1c3cd90() {
   return (neuron0x1c34270()*0.00282677);
}

double NNfunction_ss_dRsR::synapse0x1c3cdd0() {
   return (neuron0x1c345b0()*0.145574);
}

double NNfunction_ss_dRsR::synapse0x1c3ce10() {
   return (neuron0x1c348f0()*0.129126);
}

double NNfunction_ss_dRsR::synapse0x1c3ce50() {
   return (neuron0x1c34c30()*0.0313744);
}

double NNfunction_ss_dRsR::synapse0x1c3ce90() {
   return (neuron0x1c34f70()*-0.374329);
}

double NNfunction_ss_dRsR::synapse0x1c3ced0() {
   return (neuron0x1c352b0()*-0.387506);
}

double NNfunction_ss_dRsR::synapse0x1c3cf10() {
   return (neuron0x1c355f0()*0.560823);
}

double NNfunction_ss_dRsR::synapse0x1c3cf50() {
   return (neuron0x1c35930()*-0.0842461);
}

double NNfunction_ss_dRsR::synapse0x1c3cf90() {
   return (neuron0x1c35c70()*-0.287004);
}

double NNfunction_ss_dRsR::synapse0x1c3cfd0() {
   return (neuron0x1c35fb0()*-0.209163);
}

double NNfunction_ss_dRsR::synapse0x1c3d010() {
   return (neuron0x1c362f0()*0.0574164);
}

double NNfunction_ss_dRsR::synapse0x1c3d050() {
   return (neuron0x1c36630()*-0.0168902);
}

double NNfunction_ss_dRsR::synapse0x1c3cae0() {
   return (neuron0x1c36970()*-0.00462845);
}

double NNfunction_ss_dRsR::synapse0x1c3cb20() {
   return (neuron0x1c36ed0()*-0.470599);
}

double NNfunction_ss_dRsR::synapse0x1c3d1a0() {
   return (neuron0x1c370f0()*0.568513);
}

double NNfunction_ss_dRsR::synapse0x1c3d1e0() {
   return (neuron0x1c37430()*-0.0643184);
}

double NNfunction_ss_dRsR::synapse0x1c3d220() {
   return (neuron0x1c37770()*0.113421);
}

double NNfunction_ss_dRsR::synapse0x1c3d260() {
   return (neuron0x1c37ab0()*0.0529829);
}

double NNfunction_ss_dRsR::synapse0x1c3d2a0() {
   return (neuron0x1c37df0()*0.0872957);
}

double NNfunction_ss_dRsR::synapse0x1c3d2e0() {
   return (neuron0x1c38130()*0.0799134);
}

double NNfunction_ss_dRsR::synapse0x1c36dc0() {
   return (neuron0x1c33570()*-0.18096);
}

double NNfunction_ss_dRsR::synapse0x1c36e00() {
   return (neuron0x1c338b0()*-0.623639);
}

double NNfunction_ss_dRsR::synapse0x1c36e40() {
   return (neuron0x1c33bf0()*-0.243488);
}

double NNfunction_ss_dRsR::synapse0x1c36e80() {
   return (neuron0x1c33f30()*0.103487);
}

double NNfunction_ss_dRsR::synapse0x1c3d870() {
   return (neuron0x1c34270()*-0.726611);
}

double NNfunction_ss_dRsR::synapse0x1c3d8b0() {
   return (neuron0x1c345b0()*-0.121359);
}

double NNfunction_ss_dRsR::synapse0x1c3d8f0() {
   return (neuron0x1c348f0()*0.0530536);
}

double NNfunction_ss_dRsR::synapse0x1c3d930() {
   return (neuron0x1c34c30()*0.0919329);
}

double NNfunction_ss_dRsR::synapse0x1c3d970() {
   return (neuron0x1c34f70()*0.174642);
}

double NNfunction_ss_dRsR::synapse0x1c3d9b0() {
   return (neuron0x1c352b0()*-0.486752);
}

double NNfunction_ss_dRsR::synapse0x1c3d9f0() {
   return (neuron0x1c355f0()*-0.0953504);
}

double NNfunction_ss_dRsR::synapse0x1c3da30() {
   return (neuron0x1c35930()*-0.395456);
}

double NNfunction_ss_dRsR::synapse0x1c3da70() {
   return (neuron0x1c35c70()*0.278861);
}

double NNfunction_ss_dRsR::synapse0x1c3dab0() {
   return (neuron0x1c35fb0()*0.197147);
}

double NNfunction_ss_dRsR::synapse0x1c3daf0() {
   return (neuron0x1c362f0()*0.468599);
}

double NNfunction_ss_dRsR::synapse0x1c3db30() {
   return (neuron0x1c36630()*-0.452098);
}

double NNfunction_ss_dRsR::synapse0x1c3d4b0() {
   return (neuron0x1c36970()*-0.377914);
}

double NNfunction_ss_dRsR::synapse0x1c3d4f0() {
   return (neuron0x1c36ed0()*0.457525);
}

double NNfunction_ss_dRsR::synapse0x1c3dc80() {
   return (neuron0x1c370f0()*-0.198371);
}

double NNfunction_ss_dRsR::synapse0x1c3dcc0() {
   return (neuron0x1c37430()*0.454364);
}

double NNfunction_ss_dRsR::synapse0x1c3dd00() {
   return (neuron0x1c37770()*0.0602814);
}

double NNfunction_ss_dRsR::synapse0x1c3dd40() {
   return (neuron0x1c37ab0()*-0.559703);
}

double NNfunction_ss_dRsR::synapse0x1c3dd80() {
   return (neuron0x1c37df0()*0.395481);
}

double NNfunction_ss_dRsR::synapse0x1c3ddc0() {
   return (neuron0x1c38130()*0.412399);
}

double NNfunction_ss_dRsR::synapse0x1c3e140() {
   return (neuron0x1c33570()*0.00561536);
}

double NNfunction_ss_dRsR::synapse0x1c3e180() {
   return (neuron0x1c338b0()*-0.000234526);
}

double NNfunction_ss_dRsR::synapse0x1c3e1c0() {
   return (neuron0x1c33bf0()*-0.00396786);
}

double NNfunction_ss_dRsR::synapse0x1c3e200() {
   return (neuron0x1c33f30()*-0.0911368);
}

double NNfunction_ss_dRsR::synapse0x1c3e240() {
   return (neuron0x1c34270()*0.00473223);
}

double NNfunction_ss_dRsR::synapse0x1c3e280() {
   return (neuron0x1c345b0()*-0.0113926);
}

double NNfunction_ss_dRsR::synapse0x1c3e2c0() {
   return (neuron0x1c348f0()*-0.00756629);
}

double NNfunction_ss_dRsR::synapse0x1c3e300() {
   return (neuron0x1c34c30()*0.00494571);
}

double NNfunction_ss_dRsR::synapse0x1c3e340() {
   return (neuron0x1c34f70()*0.020423);
}

double NNfunction_ss_dRsR::synapse0x1c3e380() {
   return (neuron0x1c352b0()*0.0127641);
}

double NNfunction_ss_dRsR::synapse0x1c3e3c0() {
   return (neuron0x1c355f0()*0.0155628);
}

double NNfunction_ss_dRsR::synapse0x1c3e400() {
   return (neuron0x1c35930()*-0.0172554);
}

double NNfunction_ss_dRsR::synapse0x1c3e440() {
   return (neuron0x1c35c70()*-0.0175108);
}

double NNfunction_ss_dRsR::synapse0x1c3e480() {
   return (neuron0x1c35fb0()*0.00635258);
}

double NNfunction_ss_dRsR::synapse0x1c3e4c0() {
   return (neuron0x1c362f0()*-0.0115093);
}

double NNfunction_ss_dRsR::synapse0x1c3e500() {
   return (neuron0x1c36630()*-0.00758801);
}

double NNfunction_ss_dRsR::synapse0x1c3df90() {
   return (neuron0x1c36970()*0.00334101);
}

double NNfunction_ss_dRsR::synapse0x1c3dfd0() {
   return (neuron0x1c36ed0()*-0.930404);
}

double NNfunction_ss_dRsR::synapse0x1c3e650() {
   return (neuron0x1c370f0()*-0.874944);
}

double NNfunction_ss_dRsR::synapse0x1c3e690() {
   return (neuron0x1c37430()*0.00802354);
}

double NNfunction_ss_dRsR::synapse0x1c3e6d0() {
   return (neuron0x1c37770()*-0.00828081);
}

double NNfunction_ss_dRsR::synapse0x1c3e710() {
   return (neuron0x1c37ab0()*0.00888228);
}

double NNfunction_ss_dRsR::synapse0x1c3e750() {
   return (neuron0x1c37df0()*0.00385798);
}

double NNfunction_ss_dRsR::synapse0x1c3e790() {
   return (neuron0x1c38130()*-0.00195994);
}

double NNfunction_ss_dRsR::synapse0x1c3eb10() {
   return (neuron0x1c33570()*-0.0234698);
}

double NNfunction_ss_dRsR::synapse0x1c3eb50() {
   return (neuron0x1c338b0()*0.0720285);
}

double NNfunction_ss_dRsR::synapse0x1c3eb90() {
   return (neuron0x1c33bf0()*0.0442354);
}

double NNfunction_ss_dRsR::synapse0x1c3ebd0() {
   return (neuron0x1c33f30()*2.0611);
}

double NNfunction_ss_dRsR::synapse0x1c3ec10() {
   return (neuron0x1c34270()*0.0196243);
}

double NNfunction_ss_dRsR::synapse0x1c3ec50() {
   return (neuron0x1c345b0()*-0.0274909);
}

double NNfunction_ss_dRsR::synapse0x1c3ec90() {
   return (neuron0x1c348f0()*0.0316343);
}

double NNfunction_ss_dRsR::synapse0x1c3ecd0() {
   return (neuron0x1c34c30()*0.00940315);
}

double NNfunction_ss_dRsR::synapse0x1c3ed10() {
   return (neuron0x1c34f70()*-0.0490288);
}

double NNfunction_ss_dRsR::synapse0x1c3ed50() {
   return (neuron0x1c352b0()*0.130762);
}

double NNfunction_ss_dRsR::synapse0x1c3ed90() {
   return (neuron0x1c355f0()*0.112002);
}

double NNfunction_ss_dRsR::synapse0x1c3edd0() {
   return (neuron0x1c35930()*0.141858);
}

double NNfunction_ss_dRsR::synapse0x1c3ee10() {
   return (neuron0x1c35c70()*-8.29955e-05);
}

double NNfunction_ss_dRsR::synapse0x1c3ee50() {
   return (neuron0x1c35fb0()*-0.0344199);
}

double NNfunction_ss_dRsR::synapse0x1c3ee90() {
   return (neuron0x1c362f0()*0.0800788);
}

double NNfunction_ss_dRsR::synapse0x1c3eed0() {
   return (neuron0x1c36630()*0.114816);
}

double NNfunction_ss_dRsR::synapse0x1c3e960() {
   return (neuron0x1c36970()*-0.00514332);
}

double NNfunction_ss_dRsR::synapse0x1c3e9a0() {
   return (neuron0x1c36ed0()*-0.645641);
}

double NNfunction_ss_dRsR::synapse0x1c3b730() {
   return (neuron0x1c370f0()*-0.665846);
}

double NNfunction_ss_dRsR::synapse0x1c3b770() {
   return (neuron0x1c37430()*0.0257687);
}

double NNfunction_ss_dRsR::synapse0x1c3b7b0() {
   return (neuron0x1c37770()*-0.0300821);
}

double NNfunction_ss_dRsR::synapse0x1c3b7f0() {
   return (neuron0x1c37ab0()*-0.0249376);
}

double NNfunction_ss_dRsR::synapse0x1c3b830() {
   return (neuron0x1c37df0()*0.00465955);
}

double NNfunction_ss_dRsR::synapse0x1c3b870() {
   return (neuron0x1c38130()*-0.0392412);
}

double NNfunction_ss_dRsR::synapse0x1c3bbf0() {
   return (neuron0x1c33570()*0.033943);
}

double NNfunction_ss_dRsR::synapse0x1c3bc30() {
   return (neuron0x1c338b0()*0.0733617);
}

double NNfunction_ss_dRsR::synapse0x1c3bc70() {
   return (neuron0x1c33bf0()*0.315645);
}

double NNfunction_ss_dRsR::synapse0x1c3bcb0() {
   return (neuron0x1c33f30()*0.286367);
}

double NNfunction_ss_dRsR::synapse0x1c3bcf0() {
   return (neuron0x1c34270()*0.202184);
}

double NNfunction_ss_dRsR::synapse0x1c3bd30() {
   return (neuron0x1c345b0()*-0.0248457);
}

double NNfunction_ss_dRsR::synapse0x1c3bd70() {
   return (neuron0x1c348f0()*-0.0403992);
}

double NNfunction_ss_dRsR::synapse0x1c3bdb0() {
   return (neuron0x1c34c30()*0.349141);
}

double NNfunction_ss_dRsR::synapse0x1c3bdf0() {
   return (neuron0x1c34f70()*-0.129193);
}

double NNfunction_ss_dRsR::synapse0x1c3be30() {
   return (neuron0x1c352b0()*-0.146482);
}

double NNfunction_ss_dRsR::synapse0x1c3be70() {
   return (neuron0x1c355f0()*-0.447242);
}

double NNfunction_ss_dRsR::synapse0x1c3beb0() {
   return (neuron0x1c35930()*0.285737);
}

double NNfunction_ss_dRsR::synapse0x1c3bef0() {
   return (neuron0x1c35c70()*0.489994);
}

double NNfunction_ss_dRsR::synapse0x1c40030() {
   return (neuron0x1c35fb0()*-0.680253);
}

double NNfunction_ss_dRsR::synapse0x1c40070() {
   return (neuron0x1c362f0()*0.110008);
}

double NNfunction_ss_dRsR::synapse0x1c400b0() {
   return (neuron0x1c36630()*-0.303152);
}

double NNfunction_ss_dRsR::synapse0x1c3ba40() {
   return (neuron0x1c36970()*-0.504361);
}

double NNfunction_ss_dRsR::synapse0x1c3ba80() {
   return (neuron0x1c36ed0()*-0.612237);
}

double NNfunction_ss_dRsR::synapse0x1c40200() {
   return (neuron0x1c370f0()*-0.127892);
}

double NNfunction_ss_dRsR::synapse0x1c40240() {
   return (neuron0x1c37430()*-0.0953273);
}

double NNfunction_ss_dRsR::synapse0x1c40280() {
   return (neuron0x1c37770()*-0.357462);
}

double NNfunction_ss_dRsR::synapse0x1c402c0() {
   return (neuron0x1c37ab0()*0.0310323);
}

double NNfunction_ss_dRsR::synapse0x1c40300() {
   return (neuron0x1c37df0()*-0.0601786);
}

double NNfunction_ss_dRsR::synapse0x1c40340() {
   return (neuron0x1c38130()*-0.457509);
}

double NNfunction_ss_dRsR::synapse0x1c406c0() {
   return (neuron0x1c33570()*0.130478);
}

double NNfunction_ss_dRsR::synapse0x1c40700() {
   return (neuron0x1c338b0()*0.178566);
}

double NNfunction_ss_dRsR::synapse0x1c40740() {
   return (neuron0x1c33bf0()*0.151212);
}

double NNfunction_ss_dRsR::synapse0x1c40780() {
   return (neuron0x1c33f30()*-0.24398);
}

double NNfunction_ss_dRsR::synapse0x1c407c0() {
   return (neuron0x1c34270()*-0.0606876);
}

double NNfunction_ss_dRsR::synapse0x1c40800() {
   return (neuron0x1c345b0()*-0.335319);
}

double NNfunction_ss_dRsR::synapse0x1c40840() {
   return (neuron0x1c348f0()*-0.479088);
}

double NNfunction_ss_dRsR::synapse0x1c40880() {
   return (neuron0x1c34c30()*-0.0189968);
}

double NNfunction_ss_dRsR::synapse0x1c408c0() {
   return (neuron0x1c34f70()*-0.013745);
}

double NNfunction_ss_dRsR::synapse0x1c40900() {
   return (neuron0x1c352b0()*-0.171469);
}

double NNfunction_ss_dRsR::synapse0x1c40940() {
   return (neuron0x1c355f0()*-0.178951);
}

double NNfunction_ss_dRsR::synapse0x1c40980() {
   return (neuron0x1c35930()*-0.204295);
}

double NNfunction_ss_dRsR::synapse0x1c409c0() {
   return (neuron0x1c35c70()*-0.0136049);
}

double NNfunction_ss_dRsR::synapse0x1c40a00() {
   return (neuron0x1c35fb0()*-0.0139295);
}

double NNfunction_ss_dRsR::synapse0x1c40a40() {
   return (neuron0x1c362f0()*-0.512495);
}

double NNfunction_ss_dRsR::synapse0x1c40a80() {
   return (neuron0x1c36630()*-0.210931);
}

double NNfunction_ss_dRsR::synapse0x1c40510() {
   return (neuron0x1c36970()*-0.208644);
}

double NNfunction_ss_dRsR::synapse0x1c40550() {
   return (neuron0x1c36ed0()*-0.0880989);
}

double NNfunction_ss_dRsR::synapse0x1c40bd0() {
   return (neuron0x1c370f0()*-0.153543);
}

double NNfunction_ss_dRsR::synapse0x1c40c10() {
   return (neuron0x1c37430()*0.246417);
}

double NNfunction_ss_dRsR::synapse0x1c40c50() {
   return (neuron0x1c37770()*-0.156372);
}

double NNfunction_ss_dRsR::synapse0x1c40c90() {
   return (neuron0x1c37ab0()*-0.374788);
}

double NNfunction_ss_dRsR::synapse0x1c40cd0() {
   return (neuron0x1c37df0()*-0.193171);
}

double NNfunction_ss_dRsR::synapse0x1c40d10() {
   return (neuron0x1c38130()*0.119429);
}

double NNfunction_ss_dRsR::synapse0x1c41090() {
   return (neuron0x1c33570()*0.0737141);
}

double NNfunction_ss_dRsR::synapse0x1c410d0() {
   return (neuron0x1c338b0()*-0.522981);
}

double NNfunction_ss_dRsR::synapse0x1c41110() {
   return (neuron0x1c33bf0()*-0.0730043);
}

double NNfunction_ss_dRsR::synapse0x1c41150() {
   return (neuron0x1c33f30()*0.0615163);
}

double NNfunction_ss_dRsR::synapse0x1c41190() {
   return (neuron0x1c34270()*-0.210533);
}

double NNfunction_ss_dRsR::synapse0x1c411d0() {
   return (neuron0x1c345b0()*0.089756);
}

double NNfunction_ss_dRsR::synapse0x1c41210() {
   return (neuron0x1c348f0()*0.0820744);
}

double NNfunction_ss_dRsR::synapse0x1c41250() {
   return (neuron0x1c34c30()*0.297555);
}

double NNfunction_ss_dRsR::synapse0x1c41290() {
   return (neuron0x1c34f70()*-0.562734);
}

double NNfunction_ss_dRsR::synapse0x1c412d0() {
   return (neuron0x1c352b0()*0.428444);
}

double NNfunction_ss_dRsR::synapse0x1c41310() {
   return (neuron0x1c355f0()*0.099743);
}

double NNfunction_ss_dRsR::synapse0x1c41350() {
   return (neuron0x1c35930()*-0.440102);
}

double NNfunction_ss_dRsR::synapse0x1c41390() {
   return (neuron0x1c35c70()*0.307545);
}

double NNfunction_ss_dRsR::synapse0x1c413d0() {
   return (neuron0x1c35fb0()*-0.384547);
}

double NNfunction_ss_dRsR::synapse0x1c41410() {
   return (neuron0x1c362f0()*0.831361);
}

double NNfunction_ss_dRsR::synapse0x1c41450() {
   return (neuron0x1c36630()*0.0164624);
}

double NNfunction_ss_dRsR::synapse0x1c40ee0() {
   return (neuron0x1c36970()*-0.345085);
}

double NNfunction_ss_dRsR::synapse0x1c40f20() {
   return (neuron0x1c36ed0()*-0.131782);
}

double NNfunction_ss_dRsR::synapse0x1c415a0() {
   return (neuron0x1c370f0()*-0.54442);
}

double NNfunction_ss_dRsR::synapse0x1c415e0() {
   return (neuron0x1c37430()*-0.299932);
}

double NNfunction_ss_dRsR::synapse0x1c41620() {
   return (neuron0x1c37770()*-0.840278);
}

double NNfunction_ss_dRsR::synapse0x1c41660() {
   return (neuron0x1c37ab0()*-0.420434);
}

double NNfunction_ss_dRsR::synapse0x1c416a0() {
   return (neuron0x1c37df0()*0.282956);
}

double NNfunction_ss_dRsR::synapse0x1c416e0() {
   return (neuron0x1c38130()*-0.0843179);
}

double NNfunction_ss_dRsR::synapse0x1c41a60() {
   return (neuron0x1c33570()*-0.00537154);
}

double NNfunction_ss_dRsR::synapse0x1c41aa0() {
   return (neuron0x1c338b0()*0.0701961);
}

double NNfunction_ss_dRsR::synapse0x1c41ae0() {
   return (neuron0x1c33bf0()*0.0577981);
}

double NNfunction_ss_dRsR::synapse0x1c41b20() {
   return (neuron0x1c33f30()*-0.120573);
}

double NNfunction_ss_dRsR::synapse0x1c41b60() {
   return (neuron0x1c34270()*-0.0550392);
}

double NNfunction_ss_dRsR::synapse0x1c41ba0() {
   return (neuron0x1c345b0()*-0.0439309);
}

double NNfunction_ss_dRsR::synapse0x1c41be0() {
   return (neuron0x1c348f0()*0.0435748);
}

double NNfunction_ss_dRsR::synapse0x1c41c20() {
   return (neuron0x1c34c30()*-0.0922847);
}

double NNfunction_ss_dRsR::synapse0x1c41c60() {
   return (neuron0x1c34f70()*0.0523312);
}

double NNfunction_ss_dRsR::synapse0x1c41ca0() {
   return (neuron0x1c352b0()*-0.050749);
}

double NNfunction_ss_dRsR::synapse0x1c41ce0() {
   return (neuron0x1c355f0()*0.0493823);
}

double NNfunction_ss_dRsR::synapse0x1c41d20() {
   return (neuron0x1c35930()*-0.516501);
}

double NNfunction_ss_dRsR::synapse0x1c41d60() {
   return (neuron0x1c35c70()*-0.442561);
}

double NNfunction_ss_dRsR::synapse0x1c41da0() {
   return (neuron0x1c35fb0()*0.331545);
}

double NNfunction_ss_dRsR::synapse0x1c41de0() {
   return (neuron0x1c362f0()*-0.292022);
}

double NNfunction_ss_dRsR::synapse0x1c41e20() {
   return (neuron0x1c36630()*-0.70075);
}

double NNfunction_ss_dRsR::synapse0x1c418b0() {
   return (neuron0x1c36970()*0.434169);
}

double NNfunction_ss_dRsR::synapse0x1c418f0() {
   return (neuron0x1c36ed0()*0.176648);
}

double NNfunction_ss_dRsR::synapse0x1c41f70() {
   return (neuron0x1c370f0()*0.139751);
}

double NNfunction_ss_dRsR::synapse0x1c41fb0() {
   return (neuron0x1c37430()*-0.0166173);
}

double NNfunction_ss_dRsR::synapse0x1c41ff0() {
   return (neuron0x1c37770()*0.0940027);
}

double NNfunction_ss_dRsR::synapse0x1c42030() {
   return (neuron0x1c37ab0()*-0.0277281);
}

double NNfunction_ss_dRsR::synapse0x1c42070() {
   return (neuron0x1c37df0()*-0.0341235);
}

double NNfunction_ss_dRsR::synapse0x1c420b0() {
   return (neuron0x1c38130()*0.00473678);
}

double NNfunction_ss_dRsR::synapse0x1c42430() {
   return (neuron0x1c33570()*0.0402389);
}

double NNfunction_ss_dRsR::synapse0x1c33790() {
   return (neuron0x1c338b0()*0.0287541);
}

double NNfunction_ss_dRsR::synapse0x1c337d0() {
   return (neuron0x1c33bf0()*-0.004507);
}

double NNfunction_ss_dRsR::synapse0x1c33ad0() {
   return (neuron0x1c33f30()*1.70407);
}

double NNfunction_ss_dRsR::synapse0x1c33b10() {
   return (neuron0x1c34270()*-0.0322205);
}

double NNfunction_ss_dRsR::synapse0x1c33e10() {
   return (neuron0x1c345b0()*-0.0175193);
}

double NNfunction_ss_dRsR::synapse0x1c33e50() {
   return (neuron0x1c348f0()*-0.00371085);
}

double NNfunction_ss_dRsR::synapse0x1c34150() {
   return (neuron0x1c34c30()*0.00624408);
}

double NNfunction_ss_dRsR::synapse0x1c34190() {
   return (neuron0x1c34f70()*-0.00638234);
}

double NNfunction_ss_dRsR::synapse0x1c34490() {
   return (neuron0x1c352b0()*-0.000156769);
}

double NNfunction_ss_dRsR::synapse0x1c344d0() {
   return (neuron0x1c355f0()*0.0194047);
}

double NNfunction_ss_dRsR::synapse0x1c347d0() {
   return (neuron0x1c35930()*-0.0202967);
}

double NNfunction_ss_dRsR::synapse0x1c34810() {
   return (neuron0x1c35c70()*-0.0157509);
}

double NNfunction_ss_dRsR::synapse0x1c34b10() {
   return (neuron0x1c35fb0()*0.03419);
}

double NNfunction_ss_dRsR::synapse0x1c34b50() {
   return (neuron0x1c362f0()*0.0323612);
}

double NNfunction_ss_dRsR::synapse0x1c34e50() {
   return (neuron0x1c36630()*0.0617217);
}

double NNfunction_ss_dRsR::synapse0x1c34e90() {
   return (neuron0x1c36970()*0.0618189);
}

double NNfunction_ss_dRsR::synapse0x1c35190() {
   return (neuron0x1c36ed0()*0.861223);
}

double NNfunction_ss_dRsR::synapse0x1c351d0() {
   return (neuron0x1c370f0()*0.0492833);
}

double NNfunction_ss_dRsR::synapse0x1c354d0() {
   return (neuron0x1c37430()*0.0243227);
}

double NNfunction_ss_dRsR::synapse0x1c35510() {
   return (neuron0x1c37770()*0.0187923);
}

double NNfunction_ss_dRsR::synapse0x1c35810() {
   return (neuron0x1c37ab0()*-0.0151966);
}

double NNfunction_ss_dRsR::synapse0x1c35850() {
   return (neuron0x1c37df0()*0.000805163);
}

double NNfunction_ss_dRsR::synapse0x1c35b50() {
   return (neuron0x1c38130()*0.0255335);
}

double NNfunction_ss_dRsR::synapse0x1c35b90() {
   return (neuron0x1c33570()*0.034613);
}

double NNfunction_ss_dRsR::synapse0x1c36850() {
   return (neuron0x1c338b0()*0.195097);
}

double NNfunction_ss_dRsR::synapse0x1c36890() {
   return (neuron0x1c33bf0()*0.157483);
}

double NNfunction_ss_dRsR::synapse0x1c42280() {
   return (neuron0x1c33f30()*-0.532079);
}

double NNfunction_ss_dRsR::synapse0x1c422c0() {
   return (neuron0x1c34270()*-0.1478);
}

double NNfunction_ss_dRsR::synapse0x1c36b90() {
   return (neuron0x1c345b0()*0.0166653);
}

double NNfunction_ss_dRsR::synapse0x1c36bd0() {
   return (neuron0x1c348f0()*0.0181392);
}

double NNfunction_ss_dRsR::synapse0x19e4b60() {
   return (neuron0x1c34c30()*-0.0476124);
}

double NNfunction_ss_dRsR::synapse0x19e4ba0() {
   return (neuron0x1c34f70()*-0.148159);
}

double NNfunction_ss_dRsR::synapse0x1c37310() {
   return (neuron0x1c352b0()*-0.096554);
}

double NNfunction_ss_dRsR::synapse0x1c37350() {
   return (neuron0x1c355f0()*-0.0200456);
}

double NNfunction_ss_dRsR::synapse0x1c37650() {
   return (neuron0x1c35930()*-0.0545173);
}

double NNfunction_ss_dRsR::synapse0x1c37690() {
   return (neuron0x1c35c70()*-0.0974472);
}

double NNfunction_ss_dRsR::synapse0x1c37990() {
   return (neuron0x1c35fb0()*0.0113638);
}

double NNfunction_ss_dRsR::synapse0x1c379d0() {
   return (neuron0x1c362f0()*0.986843);
}

double NNfunction_ss_dRsR::synapse0x1c37cd0() {
   return (neuron0x1c36630()*0.211035);
}

double NNfunction_ss_dRsR::synapse0x1c37d10() {
   return (neuron0x1c36970()*0.0904664);
}

double NNfunction_ss_dRsR::synapse0x1c38010() {
   return (neuron0x1c36ed0()*-0.283617);
}

double NNfunction_ss_dRsR::synapse0x1c38050() {
   return (neuron0x1c370f0()*-0.297583);
}

double NNfunction_ss_dRsR::synapse0x1c38350() {
   return (neuron0x1c37430()*0.0321972);
}

double NNfunction_ss_dRsR::synapse0x1c38390() {
   return (neuron0x1c37770()*0.0521594);
}

double NNfunction_ss_dRsR::synapse0x1c35e90() {
   return (neuron0x1c37ab0()*-0.141182);
}

double NNfunction_ss_dRsR::synapse0x1c35ed0() {
   return (neuron0x1c37df0()*-0.0822703);
}

double NNfunction_ss_dRsR::synapse0x1c441a0() {
   return (neuron0x1c38130()*-0.0984258);
}

double NNfunction_ss_dRsR::synapse0x1c44520() {
   return (neuron0x1c33570()*0.0826283);
}

double NNfunction_ss_dRsR::synapse0x1c44560() {
   return (neuron0x1c338b0()*0.100191);
}

double NNfunction_ss_dRsR::synapse0x1c445a0() {
   return (neuron0x1c33bf0()*0.0557336);
}

double NNfunction_ss_dRsR::synapse0x1c445e0() {
   return (neuron0x1c33f30()*1.02522);
}

double NNfunction_ss_dRsR::synapse0x1c44620() {
   return (neuron0x1c34270()*0.0321064);
}

double NNfunction_ss_dRsR::synapse0x1c44660() {
   return (neuron0x1c345b0()*-0.0288853);
}

double NNfunction_ss_dRsR::synapse0x1c446a0() {
   return (neuron0x1c348f0()*0.123537);
}

double NNfunction_ss_dRsR::synapse0x1c446e0() {
   return (neuron0x1c34c30()*0.846882);
}

double NNfunction_ss_dRsR::synapse0x1c44720() {
   return (neuron0x1c34f70()*-0.164449);
}

double NNfunction_ss_dRsR::synapse0x1c44760() {
   return (neuron0x1c352b0()*0.043402);
}

double NNfunction_ss_dRsR::synapse0x1c447a0() {
   return (neuron0x1c355f0()*-0.00707809);
}

double NNfunction_ss_dRsR::synapse0x1c447e0() {
   return (neuron0x1c35930()*-0.148803);
}

double NNfunction_ss_dRsR::synapse0x1c44820() {
   return (neuron0x1c35c70()*-0.100454);
}

double NNfunction_ss_dRsR::synapse0x1c44860() {
   return (neuron0x1c35fb0()*0.0637321);
}

double NNfunction_ss_dRsR::synapse0x1c448a0() {
   return (neuron0x1c362f0()*-0.287477);
}

double NNfunction_ss_dRsR::synapse0x1c448e0() {
   return (neuron0x1c36630()*-0.332466);
}

double NNfunction_ss_dRsR::synapse0x1c44370() {
   return (neuron0x1c36970()*0.221208);
}

double NNfunction_ss_dRsR::synapse0x1c443b0() {
   return (neuron0x1c36ed0()*0.0231828);
}

double NNfunction_ss_dRsR::synapse0x1c44a30() {
   return (neuron0x1c370f0()*0.111268);
}

double NNfunction_ss_dRsR::synapse0x1c44a70() {
   return (neuron0x1c37430()*-0.0298041);
}

double NNfunction_ss_dRsR::synapse0x1c44ab0() {
   return (neuron0x1c37770()*-0.0830733);
}

double NNfunction_ss_dRsR::synapse0x1c44af0() {
   return (neuron0x1c37ab0()*-0.0475676);
}

double NNfunction_ss_dRsR::synapse0x1c44b30() {
   return (neuron0x1c37df0()*-0.17802);
}

double NNfunction_ss_dRsR::synapse0x1c44b70() {
   return (neuron0x1c38130()*-0.259343);
}

double NNfunction_ss_dRsR::synapse0x1c44ef0() {
   return (neuron0x1c33570()*0.235679);
}

double NNfunction_ss_dRsR::synapse0x1c44f30() {
   return (neuron0x1c338b0()*-0.403844);
}

double NNfunction_ss_dRsR::synapse0x1c44f70() {
   return (neuron0x1c33bf0()*-0.0797898);
}

double NNfunction_ss_dRsR::synapse0x1c44fb0() {
   return (neuron0x1c33f30()*-0.170857);
}

double NNfunction_ss_dRsR::synapse0x1c44ff0() {
   return (neuron0x1c34270()*-0.386092);
}

double NNfunction_ss_dRsR::synapse0x1c45030() {
   return (neuron0x1c345b0()*-0.251466);
}

double NNfunction_ss_dRsR::synapse0x1c45070() {
   return (neuron0x1c348f0()*-0.313529);
}

double NNfunction_ss_dRsR::synapse0x1c450b0() {
   return (neuron0x1c34c30()*0.0878904);
}

double NNfunction_ss_dRsR::synapse0x1c450f0() {
   return (neuron0x1c34f70()*0.349448);
}

double NNfunction_ss_dRsR::synapse0x1c45130() {
   return (neuron0x1c352b0()*0.32653);
}

double NNfunction_ss_dRsR::synapse0x1c45170() {
   return (neuron0x1c355f0()*-0.718928);
}

double NNfunction_ss_dRsR::synapse0x1c451b0() {
   return (neuron0x1c35930()*0.275268);
}

double NNfunction_ss_dRsR::synapse0x1c451f0() {
   return (neuron0x1c35c70()*-0.263045);
}

double NNfunction_ss_dRsR::synapse0x1c45230() {
   return (neuron0x1c35fb0()*-0.156024);
}

double NNfunction_ss_dRsR::synapse0x1c45270() {
   return (neuron0x1c362f0()*0.176015);
}

double NNfunction_ss_dRsR::synapse0x1c452b0() {
   return (neuron0x1c36630()*0.0132367);
}

double NNfunction_ss_dRsR::synapse0x1c44d40() {
   return (neuron0x1c36970()*0.104889);
}

double NNfunction_ss_dRsR::synapse0x1c44d80() {
   return (neuron0x1c36ed0()*-0.205489);
}

double NNfunction_ss_dRsR::synapse0x1c45400() {
   return (neuron0x1c370f0()*0.178447);
}

double NNfunction_ss_dRsR::synapse0x1c45440() {
   return (neuron0x1c37430()*0.153622);
}

double NNfunction_ss_dRsR::synapse0x1c45480() {
   return (neuron0x1c37770()*-0.0924673);
}

double NNfunction_ss_dRsR::synapse0x1c454c0() {
   return (neuron0x1c37ab0()*0.521187);
}

double NNfunction_ss_dRsR::synapse0x1c45500() {
   return (neuron0x1c37df0()*0.500734);
}

double NNfunction_ss_dRsR::synapse0x1c45540() {
   return (neuron0x1c38130()*0.282375);
}

double NNfunction_ss_dRsR::synapse0x1c458c0() {
   return (neuron0x1c33570()*0.663331);
}

double NNfunction_ss_dRsR::synapse0x1c45900() {
   return (neuron0x1c338b0()*0.446313);
}

double NNfunction_ss_dRsR::synapse0x1c45940() {
   return (neuron0x1c33bf0()*-0.399373);
}

double NNfunction_ss_dRsR::synapse0x1c45980() {
   return (neuron0x1c33f30()*0.0311237);
}

double NNfunction_ss_dRsR::synapse0x1c459c0() {
   return (neuron0x1c34270()*-0.215449);
}

double NNfunction_ss_dRsR::synapse0x1c45a00() {
   return (neuron0x1c345b0()*0.191812);
}

double NNfunction_ss_dRsR::synapse0x1c45a40() {
   return (neuron0x1c348f0()*-0.403023);
}

double NNfunction_ss_dRsR::synapse0x1c45a80() {
   return (neuron0x1c34c30()*-0.399427);
}

double NNfunction_ss_dRsR::synapse0x1c45ac0() {
   return (neuron0x1c34f70()*0.0442346);
}

double NNfunction_ss_dRsR::synapse0x1c45b00() {
   return (neuron0x1c352b0()*0.0559883);
}

double NNfunction_ss_dRsR::synapse0x1c45b40() {
   return (neuron0x1c355f0()*-0.233359);
}

double NNfunction_ss_dRsR::synapse0x1c45b80() {
   return (neuron0x1c35930()*0.500628);
}

double NNfunction_ss_dRsR::synapse0x1c45bc0() {
   return (neuron0x1c35c70()*-0.1276);
}

double NNfunction_ss_dRsR::synapse0x1c45c00() {
   return (neuron0x1c35fb0()*0.550643);
}

double NNfunction_ss_dRsR::synapse0x1c45c40() {
   return (neuron0x1c362f0()*0.150887);
}

double NNfunction_ss_dRsR::synapse0x1c45c80() {
   return (neuron0x1c36630()*-0.247333);
}

double NNfunction_ss_dRsR::synapse0x1c45710() {
   return (neuron0x1c36970()*1.04308);
}

double NNfunction_ss_dRsR::synapse0x1c45750() {
   return (neuron0x1c36ed0()*0.645941);
}

double NNfunction_ss_dRsR::synapse0x1c45dd0() {
   return (neuron0x1c370f0()*0.158289);
}

double NNfunction_ss_dRsR::synapse0x1c45e10() {
   return (neuron0x1c37430()*-0.159757);
}

double NNfunction_ss_dRsR::synapse0x1c45e50() {
   return (neuron0x1c37770()*-0.223554);
}

double NNfunction_ss_dRsR::synapse0x1c45e90() {
   return (neuron0x1c37ab0()*0.154503);
}

double NNfunction_ss_dRsR::synapse0x1c45ed0() {
   return (neuron0x1c37df0()*-0.397475);
}

double NNfunction_ss_dRsR::synapse0x1c45f10() {
   return (neuron0x1c38130()*0.532953);
}

double NNfunction_ss_dRsR::synapse0x1c46290() {
   return (neuron0x1c33570()*0.18817);
}

double NNfunction_ss_dRsR::synapse0x1c462d0() {
   return (neuron0x1c338b0()*-0.128384);
}

double NNfunction_ss_dRsR::synapse0x1c46310() {
   return (neuron0x1c33bf0()*-0.0795605);
}

double NNfunction_ss_dRsR::synapse0x1c46350() {
   return (neuron0x1c33f30()*-0.242879);
}

double NNfunction_ss_dRsR::synapse0x1c46390() {
   return (neuron0x1c34270()*0.129524);
}

double NNfunction_ss_dRsR::synapse0x1c463d0() {
   return (neuron0x1c345b0()*-0.194305);
}

double NNfunction_ss_dRsR::synapse0x1c46410() {
   return (neuron0x1c348f0()*0.153682);
}

double NNfunction_ss_dRsR::synapse0x1c46450() {
   return (neuron0x1c34c30()*-0.0946728);
}

double NNfunction_ss_dRsR::synapse0x1c46490() {
   return (neuron0x1c34f70()*-0.366054);
}

double NNfunction_ss_dRsR::synapse0x1c464d0() {
   return (neuron0x1c352b0()*-0.989299);
}

double NNfunction_ss_dRsR::synapse0x1c46510() {
   return (neuron0x1c355f0()*-0.24962);
}

double NNfunction_ss_dRsR::synapse0x1c46550() {
   return (neuron0x1c35930()*0.407887);
}

double NNfunction_ss_dRsR::synapse0x1c46590() {
   return (neuron0x1c35c70()*0.614238);
}

double NNfunction_ss_dRsR::synapse0x1c465d0() {
   return (neuron0x1c35fb0()*-0.096304);
}

double NNfunction_ss_dRsR::synapse0x1c46610() {
   return (neuron0x1c362f0()*0.0978255);
}

double NNfunction_ss_dRsR::synapse0x1c46650() {
   return (neuron0x1c36630()*-0.0237265);
}

double NNfunction_ss_dRsR::synapse0x1c460e0() {
   return (neuron0x1c36970()*-0.111174);
}

double NNfunction_ss_dRsR::synapse0x1c46120() {
   return (neuron0x1c36ed0()*0.851931);
}

double NNfunction_ss_dRsR::synapse0x1c467a0() {
   return (neuron0x1c370f0()*0.607423);
}

double NNfunction_ss_dRsR::synapse0x1c467e0() {
   return (neuron0x1c37430()*0.174898);
}

double NNfunction_ss_dRsR::synapse0x1c46820() {
   return (neuron0x1c37770()*-0.110118);
}

double NNfunction_ss_dRsR::synapse0x1c46860() {
   return (neuron0x1c37ab0()*-0.0652836);
}

double NNfunction_ss_dRsR::synapse0x1c468a0() {
   return (neuron0x1c37df0()*-0.216907);
}

double NNfunction_ss_dRsR::synapse0x1c468e0() {
   return (neuron0x1c38130()*-0.115566);
}

double NNfunction_ss_dRsR::synapse0x1c46c60() {
   return (neuron0x1c33570()*-0.0197954);
}

double NNfunction_ss_dRsR::synapse0x1c46ca0() {
   return (neuron0x1c338b0()*-0.522224);
}

double NNfunction_ss_dRsR::synapse0x1c46ce0() {
   return (neuron0x1c33bf0()*-0.0141393);
}

double NNfunction_ss_dRsR::synapse0x1c46d20() {
   return (neuron0x1c33f30()*0.448283);
}

double NNfunction_ss_dRsR::synapse0x1c46d60() {
   return (neuron0x1c34270()*0.158622);
}

double NNfunction_ss_dRsR::synapse0x1c46da0() {
   return (neuron0x1c345b0()*0.0294248);
}

double NNfunction_ss_dRsR::synapse0x1c46de0() {
   return (neuron0x1c348f0()*-0.638087);
}

double NNfunction_ss_dRsR::synapse0x1c46e20() {
   return (neuron0x1c34c30()*-0.0632093);
}

double NNfunction_ss_dRsR::synapse0x1c46e60() {
   return (neuron0x1c34f70()*0.527817);
}

double NNfunction_ss_dRsR::synapse0x1c3f020() {
   return (neuron0x1c352b0()*0.244654);
}

double NNfunction_ss_dRsR::synapse0x1c3f060() {
   return (neuron0x1c355f0()*-0.285431);
}

double NNfunction_ss_dRsR::synapse0x1c3f0a0() {
   return (neuron0x1c35930()*-0.230793);
}

double NNfunction_ss_dRsR::synapse0x1c3f0e0() {
   return (neuron0x1c35c70()*0.40095);
}

double NNfunction_ss_dRsR::synapse0x1c3f120() {
   return (neuron0x1c35fb0()*0.335457);
}

double NNfunction_ss_dRsR::synapse0x1c3f160() {
   return (neuron0x1c362f0()*0.27282);
}

double NNfunction_ss_dRsR::synapse0x1c3f1a0() {
   return (neuron0x1c36630()*0.588242);
}

double NNfunction_ss_dRsR::synapse0x1c46ab0() {
   return (neuron0x1c36970()*-0.0563377);
}

double NNfunction_ss_dRsR::synapse0x1c46af0() {
   return (neuron0x1c36ed0()*0.727252);
}

double NNfunction_ss_dRsR::synapse0x1c3f2f0() {
   return (neuron0x1c370f0()*-0.447068);
}

double NNfunction_ss_dRsR::synapse0x1c3f330() {
   return (neuron0x1c37430()*-0.104859);
}

double NNfunction_ss_dRsR::synapse0x1c3f370() {
   return (neuron0x1c37770()*0.0360169);
}

double NNfunction_ss_dRsR::synapse0x1c3f3b0() {
   return (neuron0x1c37ab0()*-0.0956437);
}

double NNfunction_ss_dRsR::synapse0x1c3f3f0() {
   return (neuron0x1c37df0()*-0.0743179);
}

double NNfunction_ss_dRsR::synapse0x1c3f430() {
   return (neuron0x1c38130()*-0.0603695);
}

double NNfunction_ss_dRsR::synapse0x1c3f7b0() {
   return (neuron0x1c33570()*0.0832081);
}

double NNfunction_ss_dRsR::synapse0x1c3f7f0() {
   return (neuron0x1c338b0()*-0.3281);
}

double NNfunction_ss_dRsR::synapse0x1c3f830() {
   return (neuron0x1c33bf0()*-0.231632);
}

double NNfunction_ss_dRsR::synapse0x1c3f870() {
   return (neuron0x1c33f30()*-0.0579311);
}

double NNfunction_ss_dRsR::synapse0x1c3f8b0() {
   return (neuron0x1c34270()*-0.690933);
}

double NNfunction_ss_dRsR::synapse0x1c3f8f0() {
   return (neuron0x1c345b0()*-0.881438);
}

double NNfunction_ss_dRsR::synapse0x1c3f930() {
   return (neuron0x1c348f0()*0.23919);
}

double NNfunction_ss_dRsR::synapse0x1c3f970() {
   return (neuron0x1c34c30()*0.539883);
}

double NNfunction_ss_dRsR::synapse0x1c3f9b0() {
   return (neuron0x1c34f70()*0.248761);
}

double NNfunction_ss_dRsR::synapse0x1c3f9f0() {
   return (neuron0x1c352b0()*-0.112592);
}

double NNfunction_ss_dRsR::synapse0x1c3fa30() {
   return (neuron0x1c355f0()*-0.288047);
}

double NNfunction_ss_dRsR::synapse0x1c3fa70() {
   return (neuron0x1c35930()*-0.0622999);
}

double NNfunction_ss_dRsR::synapse0x1c3fab0() {
   return (neuron0x1c35c70()*0.199042);
}

double NNfunction_ss_dRsR::synapse0x1c3faf0() {
   return (neuron0x1c35fb0()*-0.206231);
}

double NNfunction_ss_dRsR::synapse0x1c3fb30() {
   return (neuron0x1c362f0()*-0.04204);
}

double NNfunction_ss_dRsR::synapse0x1c3fb70() {
   return (neuron0x1c36630()*0.358557);
}

double NNfunction_ss_dRsR::synapse0x1c3f600() {
   return (neuron0x1c36970()*0.0420026);
}

double NNfunction_ss_dRsR::synapse0x1c3f640() {
   return (neuron0x1c36ed0()*0.345346);
}

double NNfunction_ss_dRsR::synapse0x1c3fcc0() {
   return (neuron0x1c370f0()*0.0805877);
}

double NNfunction_ss_dRsR::synapse0x1c3fd00() {
   return (neuron0x1c37430()*0.0305711);
}

double NNfunction_ss_dRsR::synapse0x1c3fd40() {
   return (neuron0x1c37770()*0.0663717);
}

double NNfunction_ss_dRsR::synapse0x1c3fd80() {
   return (neuron0x1c37ab0()*-0.0784448);
}

double NNfunction_ss_dRsR::synapse0x1c3fdc0() {
   return (neuron0x1c37df0()*0.163631);
}

double NNfunction_ss_dRsR::synapse0x1c3fe00() {
   return (neuron0x1c38130()*-0.056232);
}

double NNfunction_ss_dRsR::synapse0x1c3ffd0() {
   return (neuron0x1c33570()*-0.0144701);
}

double NNfunction_ss_dRsR::synapse0x1c49060() {
   return (neuron0x1c338b0()*-0.0139324);
}

double NNfunction_ss_dRsR::synapse0x1c490a0() {
   return (neuron0x1c33bf0()*-0.0109471);
}

double NNfunction_ss_dRsR::synapse0x1c490e0() {
   return (neuron0x1c33f30()*-1.62565);
}

double NNfunction_ss_dRsR::synapse0x1c49120() {
   return (neuron0x1c34270()*0.0110524);
}

double NNfunction_ss_dRsR::synapse0x1c49160() {
   return (neuron0x1c345b0()*-0.0172988);
}

double NNfunction_ss_dRsR::synapse0x1c491a0() {
   return (neuron0x1c348f0()*-0.0240923);
}

double NNfunction_ss_dRsR::synapse0x1c491e0() {
   return (neuron0x1c34c30()*-0.0309318);
}

double NNfunction_ss_dRsR::synapse0x1c49220() {
   return (neuron0x1c34f70()*0.00360564);
}

double NNfunction_ss_dRsR::synapse0x1c49260() {
   return (neuron0x1c352b0()*-0.0114985);
}

double NNfunction_ss_dRsR::synapse0x1c492a0() {
   return (neuron0x1c355f0()*0.00952776);
}

double NNfunction_ss_dRsR::synapse0x1c492e0() {
   return (neuron0x1c35930()*0.0151999);
}

double NNfunction_ss_dRsR::synapse0x1c49320() {
   return (neuron0x1c35c70()*0.0111744);
}

double NNfunction_ss_dRsR::synapse0x1c49360() {
   return (neuron0x1c35fb0()*-0.0226561);
}

double NNfunction_ss_dRsR::synapse0x1c493a0() {
   return (neuron0x1c362f0()*-0.00500557);
}

double NNfunction_ss_dRsR::synapse0x1c493e0() {
   return (neuron0x1c36630()*-0.0301225);
}

double NNfunction_ss_dRsR::synapse0x1c48eb0() {
   return (neuron0x1c36970()*-0.0361129);
}

double NNfunction_ss_dRsR::synapse0x1c48ef0() {
   return (neuron0x1c36ed0()*0.132185);
}

double NNfunction_ss_dRsR::synapse0x1c49530() {
   return (neuron0x1c370f0()*-0.794656);
}

double NNfunction_ss_dRsR::synapse0x1c49570() {
   return (neuron0x1c37430()*0.0299504);
}

double NNfunction_ss_dRsR::synapse0x1c495b0() {
   return (neuron0x1c37770()*-0.00319726);
}

double NNfunction_ss_dRsR::synapse0x1c495f0() {
   return (neuron0x1c37ab0()*0.00681115);
}

double NNfunction_ss_dRsR::synapse0x1c49630() {
   return (neuron0x1c37df0()*-0.00982991);
}

double NNfunction_ss_dRsR::synapse0x1c49670() {
   return (neuron0x1c38130()*0.0119229);
}

double NNfunction_ss_dRsR::synapse0x1c499f0() {
   return (neuron0x1c33570()*0.840445);
}

double NNfunction_ss_dRsR::synapse0x1c49a30() {
   return (neuron0x1c338b0()*-0.000811657);
}

double NNfunction_ss_dRsR::synapse0x1c49a70() {
   return (neuron0x1c33bf0()*-0.0384829);
}

double NNfunction_ss_dRsR::synapse0x1c49ab0() {
   return (neuron0x1c33f30()*0.0828262);
}

double NNfunction_ss_dRsR::synapse0x1c49af0() {
   return (neuron0x1c34270()*-0.412716);
}

double NNfunction_ss_dRsR::synapse0x1c49b30() {
   return (neuron0x1c345b0()*0.328537);
}

double NNfunction_ss_dRsR::synapse0x1c49b70() {
   return (neuron0x1c348f0()*-0.0237119);
}

double NNfunction_ss_dRsR::synapse0x1c49bb0() {
   return (neuron0x1c34c30()*-0.129546);
}

double NNfunction_ss_dRsR::synapse0x1c49bf0() {
   return (neuron0x1c34f70()*0.412082);
}

double NNfunction_ss_dRsR::synapse0x1c49c30() {
   return (neuron0x1c352b0()*0.170211);
}

double NNfunction_ss_dRsR::synapse0x1c49c70() {
   return (neuron0x1c355f0()*0.396885);
}

double NNfunction_ss_dRsR::synapse0x1c49cb0() {
   return (neuron0x1c35930()*-0.362145);
}

double NNfunction_ss_dRsR::synapse0x1c49cf0() {
   return (neuron0x1c35c70()*-0.0480895);
}

double NNfunction_ss_dRsR::synapse0x1c49d30() {
   return (neuron0x1c35fb0()*-0.073287);
}

double NNfunction_ss_dRsR::synapse0x1c49d70() {
   return (neuron0x1c362f0()*0.454324);
}

double NNfunction_ss_dRsR::synapse0x1c49db0() {
   return (neuron0x1c36630()*-0.409404);
}

double NNfunction_ss_dRsR::synapse0x1c49840() {
   return (neuron0x1c36970()*-0.740982);
}

double NNfunction_ss_dRsR::synapse0x1c49880() {
   return (neuron0x1c36ed0()*-0.416618);
}

double NNfunction_ss_dRsR::synapse0x1c49f00() {
   return (neuron0x1c370f0()*-0.483853);
}

double NNfunction_ss_dRsR::synapse0x1c49f40() {
   return (neuron0x1c37430()*0.349375);
}

double NNfunction_ss_dRsR::synapse0x1c49f80() {
   return (neuron0x1c37770()*0.249768);
}

double NNfunction_ss_dRsR::synapse0x1c49fc0() {
   return (neuron0x1c37ab0()*-0.229868);
}

double NNfunction_ss_dRsR::synapse0x1c4a000() {
   return (neuron0x1c37df0()*-0.0629201);
}

double NNfunction_ss_dRsR::synapse0x1c4a040() {
   return (neuron0x1c38130()*-0.289214);
}

double NNfunction_ss_dRsR::synapse0x1c4a3c0() {
   return (neuron0x1c33570()*0.0245459);
}

double NNfunction_ss_dRsR::synapse0x1c4a400() {
   return (neuron0x1c338b0()*0.0258545);
}

double NNfunction_ss_dRsR::synapse0x1c4a440() {
   return (neuron0x1c33bf0()*0.024761);
}

double NNfunction_ss_dRsR::synapse0x1c4a480() {
   return (neuron0x1c33f30()*-16.4105);
}

double NNfunction_ss_dRsR::synapse0x1c4a4c0() {
   return (neuron0x1c34270()*0.0155724);
}

double NNfunction_ss_dRsR::synapse0x1c4a500() {
   return (neuron0x1c345b0()*-0.0228397);
}

double NNfunction_ss_dRsR::synapse0x1c4a540() {
   return (neuron0x1c348f0()*-0.0468369);
}

double NNfunction_ss_dRsR::synapse0x1c4a580() {
   return (neuron0x1c34c30()*0.00347387);
}

double NNfunction_ss_dRsR::synapse0x1c4a5c0() {
   return (neuron0x1c34f70()*0.0205789);
}

double NNfunction_ss_dRsR::synapse0x1c4a600() {
   return (neuron0x1c352b0()*0.0154883);
}

double NNfunction_ss_dRsR::synapse0x1c4a640() {
   return (neuron0x1c355f0()*-0.0197698);
}

double NNfunction_ss_dRsR::synapse0x1c4a680() {
   return (neuron0x1c35930()*-0.0289757);
}

double NNfunction_ss_dRsR::synapse0x1c4a6c0() {
   return (neuron0x1c35c70()*0.00539335);
}

double NNfunction_ss_dRsR::synapse0x1c4a700() {
   return (neuron0x1c35fb0()*-0.00142196);
}

double NNfunction_ss_dRsR::synapse0x1c4a740() {
   return (neuron0x1c362f0()*-0.00523885);
}

double NNfunction_ss_dRsR::synapse0x1c4a780() {
   return (neuron0x1c36630()*-0.0242228);
}

double NNfunction_ss_dRsR::synapse0x1c4a210() {
   return (neuron0x1c36970()*0.0221373);
}

double NNfunction_ss_dRsR::synapse0x1c4a250() {
   return (neuron0x1c36ed0()*0.0376827);
}

double NNfunction_ss_dRsR::synapse0x1c4a8d0() {
   return (neuron0x1c370f0()*-0.267485);
}

double NNfunction_ss_dRsR::synapse0x1c4a910() {
   return (neuron0x1c37430()*0.00634707);
}

double NNfunction_ss_dRsR::synapse0x1c4a950() {
   return (neuron0x1c37770()*-0.0385453);
}

double NNfunction_ss_dRsR::synapse0x1c4a990() {
   return (neuron0x1c37ab0()*0.0114384);
}

double NNfunction_ss_dRsR::synapse0x1c4a9d0() {
   return (neuron0x1c37df0()*-0.00697456);
}

double NNfunction_ss_dRsR::synapse0x1c4aa10() {
   return (neuron0x1c38130()*0.000572561);
}

double NNfunction_ss_dRsR::synapse0x1c4ad90() {
   return (neuron0x1c33570()*0.00322986);
}

double NNfunction_ss_dRsR::synapse0x1c4add0() {
   return (neuron0x1c338b0()*-0.0309642);
}

double NNfunction_ss_dRsR::synapse0x1c4ae10() {
   return (neuron0x1c33bf0()*-0.024733);
}

double NNfunction_ss_dRsR::synapse0x1c4ae50() {
   return (neuron0x1c33f30()*-0.818233);
}

double NNfunction_ss_dRsR::synapse0x1c4ae90() {
   return (neuron0x1c34270()*-0.00620326);
}

double NNfunction_ss_dRsR::synapse0x1c4aed0() {
   return (neuron0x1c345b0()*-0.0078369);
}

double NNfunction_ss_dRsR::synapse0x1c4af10() {
   return (neuron0x1c348f0()*-0.0692484);
}

double NNfunction_ss_dRsR::synapse0x1c4af50() {
   return (neuron0x1c34c30()*-0.0680848);
}

double NNfunction_ss_dRsR::synapse0x1c4af90() {
   return (neuron0x1c34f70()*0.0501657);
}

double NNfunction_ss_dRsR::synapse0x1c4afd0() {
   return (neuron0x1c352b0()*-0.0506525);
}

double NNfunction_ss_dRsR::synapse0x1c4b010() {
   return (neuron0x1c355f0()*-0.0206995);
}

double NNfunction_ss_dRsR::synapse0x1c4b050() {
   return (neuron0x1c35930()*-0.0948696);
}

double NNfunction_ss_dRsR::synapse0x1c4b090() {
   return (neuron0x1c35c70()*-0.0226829);
}

double NNfunction_ss_dRsR::synapse0x1c4b0d0() {
   return (neuron0x1c35fb0()*-0.0592115);
}

double NNfunction_ss_dRsR::synapse0x1c4b110() {
   return (neuron0x1c362f0()*-0.0854185);
}

double NNfunction_ss_dRsR::synapse0x1c4b150() {
   return (neuron0x1c36630()*-0.126837);
}

double NNfunction_ss_dRsR::synapse0x1c4abe0() {
   return (neuron0x1c36970()*-0.0294709);
}

double NNfunction_ss_dRsR::synapse0x1c4ac20() {
   return (neuron0x1c36ed0()*0.194356);
}

double NNfunction_ss_dRsR::synapse0x1c4b2a0() {
   return (neuron0x1c370f0()*0.484758);
}

double NNfunction_ss_dRsR::synapse0x1c4b2e0() {
   return (neuron0x1c37430()*0.0494706);
}

double NNfunction_ss_dRsR::synapse0x1c4b320() {
   return (neuron0x1c37770()*0.0205036);
}

double NNfunction_ss_dRsR::synapse0x1c4b360() {
   return (neuron0x1c37ab0()*0.0604213);
}

double NNfunction_ss_dRsR::synapse0x1c4b3a0() {
   return (neuron0x1c37df0()*-0.0241579);
}

double NNfunction_ss_dRsR::synapse0x1c4b3e0() {
   return (neuron0x1c38130()*0.0711746);
}

double NNfunction_ss_dRsR::synapse0x1c4b760() {
   return (neuron0x1c33570()*0.0750535);
}

double NNfunction_ss_dRsR::synapse0x1c4b7a0() {
   return (neuron0x1c338b0()*-0.0409053);
}

double NNfunction_ss_dRsR::synapse0x1c4b7e0() {
   return (neuron0x1c33bf0()*-0.0879173);
}

double NNfunction_ss_dRsR::synapse0x1c4b820() {
   return (neuron0x1c33f30()*0.492773);
}

double NNfunction_ss_dRsR::synapse0x1c4b860() {
   return (neuron0x1c34270()*-0.0185916);
}

double NNfunction_ss_dRsR::synapse0x1c4b8a0() {
   return (neuron0x1c345b0()*-0.0830134);
}

double NNfunction_ss_dRsR::synapse0x1c4b8e0() {
   return (neuron0x1c348f0()*-0.00645808);
}

double NNfunction_ss_dRsR::synapse0x1c4b920() {
   return (neuron0x1c34c30()*-0.00301579);
}

double NNfunction_ss_dRsR::synapse0x1c4b960() {
   return (neuron0x1c34f70()*0.0343059);
}

double NNfunction_ss_dRsR::synapse0x1c4b9a0() {
   return (neuron0x1c352b0()*0.0750518);
}

double NNfunction_ss_dRsR::synapse0x1c4b9e0() {
   return (neuron0x1c355f0()*-0.119875);
}

double NNfunction_ss_dRsR::synapse0x1c4ba20() {
   return (neuron0x1c35930()*0.0157228);
}

double NNfunction_ss_dRsR::synapse0x1c4ba60() {
   return (neuron0x1c35c70()*-0.111532);
}

double NNfunction_ss_dRsR::synapse0x1c4baa0() {
   return (neuron0x1c35fb0()*-0.0861695);
}

double NNfunction_ss_dRsR::synapse0x1c4bae0() {
   return (neuron0x1c362f0()*-0.0695466);
}

double NNfunction_ss_dRsR::synapse0x1c4bb20() {
   return (neuron0x1c36630()*-0.100118);
}

double NNfunction_ss_dRsR::synapse0x1c4b5b0() {
   return (neuron0x1c36970()*-0.0432351);
}

double NNfunction_ss_dRsR::synapse0x1c4b5f0() {
   return (neuron0x1c36ed0()*0.579713);
}

double NNfunction_ss_dRsR::synapse0x1c4bc70() {
   return (neuron0x1c370f0()*-1.99413);
}

double NNfunction_ss_dRsR::synapse0x1c4bcb0() {
   return (neuron0x1c37430()*0.00800674);
}

double NNfunction_ss_dRsR::synapse0x1c4bcf0() {
   return (neuron0x1c37770()*0.0597005);
}

double NNfunction_ss_dRsR::synapse0x1c4bd30() {
   return (neuron0x1c37ab0()*0.0384874);
}

double NNfunction_ss_dRsR::synapse0x1c4bd70() {
   return (neuron0x1c37df0()*0.00785088);
}

double NNfunction_ss_dRsR::synapse0x1c4bdb0() {
   return (neuron0x1c38130()*0.118421);
}

double NNfunction_ss_dRsR::synapse0x1c4c130() {
   return (neuron0x1c33570()*0.0265649);
}

double NNfunction_ss_dRsR::synapse0x1c4c170() {
   return (neuron0x1c338b0()*-0.335629);
}

double NNfunction_ss_dRsR::synapse0x1c4c1b0() {
   return (neuron0x1c33bf0()*-0.0742496);
}

double NNfunction_ss_dRsR::synapse0x1c4c1f0() {
   return (neuron0x1c33f30()*-0.639832);
}

double NNfunction_ss_dRsR::synapse0x1c4c230() {
   return (neuron0x1c34270()*-0.315466);
}

double NNfunction_ss_dRsR::synapse0x1c4c270() {
   return (neuron0x1c345b0()*0.122018);
}

double NNfunction_ss_dRsR::synapse0x1c4c2b0() {
   return (neuron0x1c348f0()*0.315161);
}

double NNfunction_ss_dRsR::synapse0x1c4c2f0() {
   return (neuron0x1c34c30()*-0.255059);
}

double NNfunction_ss_dRsR::synapse0x1c4c330() {
   return (neuron0x1c34f70()*-0.0425167);
}

double NNfunction_ss_dRsR::synapse0x1c4c370() {
   return (neuron0x1c352b0()*0.251529);
}

double NNfunction_ss_dRsR::synapse0x1c4c3b0() {
   return (neuron0x1c355f0()*0.0649344);
}

double NNfunction_ss_dRsR::synapse0x1c4c3f0() {
   return (neuron0x1c35930()*-0.223985);
}

double NNfunction_ss_dRsR::synapse0x1c4c430() {
   return (neuron0x1c35c70()*-0.463213);
}

double NNfunction_ss_dRsR::synapse0x1c4c470() {
   return (neuron0x1c35fb0()*-0.0531572);
}

double NNfunction_ss_dRsR::synapse0x1c4c4b0() {
   return (neuron0x1c362f0()*-0.189751);
}

double NNfunction_ss_dRsR::synapse0x1c4c4f0() {
   return (neuron0x1c36630()*-0.269165);
}

double NNfunction_ss_dRsR::synapse0x1c4bf80() {
   return (neuron0x1c36970()*-0.396123);
}

double NNfunction_ss_dRsR::synapse0x1c4bfc0() {
   return (neuron0x1c36ed0()*-0.14197);
}

double NNfunction_ss_dRsR::synapse0x1c4c640() {
   return (neuron0x1c370f0()*1.03845);
}

double NNfunction_ss_dRsR::synapse0x1c4c680() {
   return (neuron0x1c37430()*-0.899751);
}

double NNfunction_ss_dRsR::synapse0x1c4c6c0() {
   return (neuron0x1c37770()*0.236537);
}

double NNfunction_ss_dRsR::synapse0x1c4c700() {
   return (neuron0x1c37ab0()*0.0439116);
}

double NNfunction_ss_dRsR::synapse0x1c4c740() {
   return (neuron0x1c37df0()*-0.0988867);
}

double NNfunction_ss_dRsR::synapse0x1c4c780() {
   return (neuron0x1c38130()*0.435926);
}

double NNfunction_ss_dRsR::synapse0x1c4cb00() {
   return (neuron0x1c33570()*0.161768);
}

double NNfunction_ss_dRsR::synapse0x1c4cb40() {
   return (neuron0x1c338b0()*0.124918);
}

double NNfunction_ss_dRsR::synapse0x1c4cb80() {
   return (neuron0x1c33bf0()*0.183423);
}

double NNfunction_ss_dRsR::synapse0x1c4cbc0() {
   return (neuron0x1c33f30()*-0.843487);
}

double NNfunction_ss_dRsR::synapse0x1c4cc00() {
   return (neuron0x1c34270()*0.18555);
}

double NNfunction_ss_dRsR::synapse0x1c4cc40() {
   return (neuron0x1c345b0()*0.0469031);
}

double NNfunction_ss_dRsR::synapse0x1c4cc80() {
   return (neuron0x1c348f0()*-0.189045);
}

double NNfunction_ss_dRsR::synapse0x1c4ccc0() {
   return (neuron0x1c34c30()*0.414904);
}

double NNfunction_ss_dRsR::synapse0x1c4cd00() {
   return (neuron0x1c34f70()*0.0376283);
}

double NNfunction_ss_dRsR::synapse0x1c4cd40() {
   return (neuron0x1c352b0()*0.137466);
}

double NNfunction_ss_dRsR::synapse0x1c4cd80() {
   return (neuron0x1c355f0()*0.208896);
}

double NNfunction_ss_dRsR::synapse0x1c4cdc0() {
   return (neuron0x1c35930()*0.0150699);
}

double NNfunction_ss_dRsR::synapse0x1c4ce00() {
   return (neuron0x1c35c70()*0.188706);
}

double NNfunction_ss_dRsR::synapse0x1c4ce40() {
   return (neuron0x1c35fb0()*0.431221);
}

double NNfunction_ss_dRsR::synapse0x1c4ce80() {
   return (neuron0x1c362f0()*0.239926);
}

double NNfunction_ss_dRsR::synapse0x1c4cec0() {
   return (neuron0x1c36630()*-0.382005);
}

double NNfunction_ss_dRsR::synapse0x1c4c950() {
   return (neuron0x1c36970()*-0.511687);
}

double NNfunction_ss_dRsR::synapse0x1c4c990() {
   return (neuron0x1c36ed0()*-0.921583);
}

double NNfunction_ss_dRsR::synapse0x1c4d010() {
   return (neuron0x1c370f0()*0.105832);
}

double NNfunction_ss_dRsR::synapse0x1c4d050() {
   return (neuron0x1c37430()*0.185744);
}

double NNfunction_ss_dRsR::synapse0x1c4d090() {
   return (neuron0x1c37770()*-0.0783288);
}

double NNfunction_ss_dRsR::synapse0x1c4d0d0() {
   return (neuron0x1c37ab0()*-0.0714862);
}

double NNfunction_ss_dRsR::synapse0x1c4d110() {
   return (neuron0x1c37df0()*-0.000142989);
}

double NNfunction_ss_dRsR::synapse0x1c4d150() {
   return (neuron0x1c38130()*0.0470578);
}

double NNfunction_ss_dRsR::synapse0x1c4d4d0() {
   return (neuron0x1c33570()*0.00554196);
}

double NNfunction_ss_dRsR::synapse0x1c4d510() {
   return (neuron0x1c338b0()*-0.00840584);
}

double NNfunction_ss_dRsR::synapse0x1c4d550() {
   return (neuron0x1c33bf0()*-0.00284518);
}

double NNfunction_ss_dRsR::synapse0x1c4d590() {
   return (neuron0x1c33f30()*-0.0587571);
}

double NNfunction_ss_dRsR::synapse0x1c4d5d0() {
   return (neuron0x1c34270()*0.0196189);
}

double NNfunction_ss_dRsR::synapse0x1c4d610() {
   return (neuron0x1c345b0()*-0.0199498);
}

double NNfunction_ss_dRsR::synapse0x1c4d650() {
   return (neuron0x1c348f0()*-0.0350079);
}

double NNfunction_ss_dRsR::synapse0x1c4d690() {
   return (neuron0x1c34c30()*-0.00947685);
}

double NNfunction_ss_dRsR::synapse0x1c4d6d0() {
   return (neuron0x1c34f70()*0.0454149);
}

double NNfunction_ss_dRsR::synapse0x1c4d710() {
   return (neuron0x1c352b0()*0.0129356);
}

double NNfunction_ss_dRsR::synapse0x1c4d750() {
   return (neuron0x1c355f0()*-0.0126332);
}

double NNfunction_ss_dRsR::synapse0x1c4d790() {
   return (neuron0x1c35930()*-0.016966);
}

double NNfunction_ss_dRsR::synapse0x1c4d7d0() {
   return (neuron0x1c35c70()*0.0154269);
}

double NNfunction_ss_dRsR::synapse0x1c4d810() {
   return (neuron0x1c35fb0()*-0.0200999);
}

double NNfunction_ss_dRsR::synapse0x1c4d850() {
   return (neuron0x1c362f0()*-0.0251442);
}

double NNfunction_ss_dRsR::synapse0x1c4d890() {
   return (neuron0x1c36630()*-0.00724942);
}

double NNfunction_ss_dRsR::synapse0x1c4d320() {
   return (neuron0x1c36970()*-0.00439883);
}

double NNfunction_ss_dRsR::synapse0x1c4d360() {
   return (neuron0x1c36ed0()*-2.26763);
}

double NNfunction_ss_dRsR::synapse0x1c4d9e0() {
   return (neuron0x1c370f0()*0.252206);
}

double NNfunction_ss_dRsR::synapse0x1c4da20() {
   return (neuron0x1c37430()*-0.0291211);
}

double NNfunction_ss_dRsR::synapse0x1c4da60() {
   return (neuron0x1c37770()*-0.0222718);
}

double NNfunction_ss_dRsR::synapse0x1c4daa0() {
   return (neuron0x1c37ab0()*0.00759235);
}

double NNfunction_ss_dRsR::synapse0x1c4dae0() {
   return (neuron0x1c37df0()*0.0121022);
}

double NNfunction_ss_dRsR::synapse0x1c4db20() {
   return (neuron0x1c38130()*-0.0393539);
}

double NNfunction_ss_dRsR::synapse0x1c4dea0() {
   return (neuron0x1c33570()*-0.0855165);
}

double NNfunction_ss_dRsR::synapse0x1c42470() {
   return (neuron0x1c338b0()*-0.0791513);
}

double NNfunction_ss_dRsR::synapse0x1c424b0() {
   return (neuron0x1c33bf0()*0.0170097);
}

double NNfunction_ss_dRsR::synapse0x1c424f0() {
   return (neuron0x1c33f30()*-1.63553);
}

double NNfunction_ss_dRsR::synapse0x1c42740() {
   return (neuron0x1c34270()*0.0300646);
}

double NNfunction_ss_dRsR::synapse0x1c42780() {
   return (neuron0x1c345b0()*-0.004454);
}

double NNfunction_ss_dRsR::synapse0x1c427c0() {
   return (neuron0x1c348f0()*0.0211505);
}

double NNfunction_ss_dRsR::synapse0x1c42a10() {
   return (neuron0x1c34c30()*-0.0324049);
}

double NNfunction_ss_dRsR::synapse0x1c42a50() {
   return (neuron0x1c34f70()*-0.0707144);
}

double NNfunction_ss_dRsR::synapse0x1c42ca0() {
   return (neuron0x1c352b0()*0.026947);
}

double NNfunction_ss_dRsR::synapse0x1c42ce0() {
   return (neuron0x1c355f0()*0.030047);
}

double NNfunction_ss_dRsR::synapse0x1c42d20() {
   return (neuron0x1c35930()*0.0419056);
}

double NNfunction_ss_dRsR::synapse0x1c42f70() {
   return (neuron0x1c35c70()*-0.0531051);
}

double NNfunction_ss_dRsR::synapse0x1c42fb0() {
   return (neuron0x1c35fb0()*-0.0334048);
}

double NNfunction_ss_dRsR::synapse0x1c43200() {
   return (neuron0x1c362f0()*-0.00499027);
}

double NNfunction_ss_dRsR::synapse0x1c43240() {
   return (neuron0x1c36630()*0.127529);
}

double NNfunction_ss_dRsR::synapse0x1c4dcf0() {
   return (neuron0x1c36970()*-0.0116627);
}

double NNfunction_ss_dRsR::synapse0x1c4dd30() {
   return (neuron0x1c36ed0()*-0.417297);
}

double NNfunction_ss_dRsR::synapse0x1c43390() {
   return (neuron0x1c370f0()*0.115009);
}

double NNfunction_ss_dRsR::synapse0x1c438a0() {
   return (neuron0x1c37430()*-0.0702909);
}

double NNfunction_ss_dRsR::synapse0x1c438e0() {
   return (neuron0x1c37770()*-0.00326364);
}

double NNfunction_ss_dRsR::synapse0x1c43920() {
   return (neuron0x1c37ab0()*-0.0109786);
}

double NNfunction_ss_dRsR::synapse0x1c43b70() {
   return (neuron0x1c37df0()*-0.00357936);
}

double NNfunction_ss_dRsR::synapse0x1c43bb0() {
   return (neuron0x1c38130()*-0.0795713);
}

double NNfunction_ss_dRsR::synapse0x1c43460() {
   return (neuron0x1c33570()*-0.0511271);
}

double NNfunction_ss_dRsR::synapse0x1c434a0() {
   return (neuron0x1c338b0()*-0.574432);
}

double NNfunction_ss_dRsR::synapse0x1c434e0() {
   return (neuron0x1c33bf0()*0.664395);
}

double NNfunction_ss_dRsR::synapse0x1c43520() {
   return (neuron0x1c33f30()*-0.444975);
}

double NNfunction_ss_dRsR::synapse0x1c43ea0() {
   return (neuron0x1c34270()*-0.0596173);
}

double NNfunction_ss_dRsR::synapse0x1c501f0() {
   return (neuron0x1c345b0()*0.361316);
}

double NNfunction_ss_dRsR::synapse0x1c50230() {
   return (neuron0x1c348f0()*-0.3036);
}

double NNfunction_ss_dRsR::synapse0x1c50270() {
   return (neuron0x1c34c30()*0.581584);
}

double NNfunction_ss_dRsR::synapse0x1c502b0() {
   return (neuron0x1c34f70()*-0.838464);
}

double NNfunction_ss_dRsR::synapse0x1c502f0() {
   return (neuron0x1c352b0()*0.828075);
}

double NNfunction_ss_dRsR::synapse0x1c50330() {
   return (neuron0x1c355f0()*0.129644);
}

double NNfunction_ss_dRsR::synapse0x1c50370() {
   return (neuron0x1c35930()*-0.460192);
}

double NNfunction_ss_dRsR::synapse0x1c503b0() {
   return (neuron0x1c35c70()*0.049426);
}

double NNfunction_ss_dRsR::synapse0x1c503f0() {
   return (neuron0x1c35fb0()*0.185849);
}

double NNfunction_ss_dRsR::synapse0x1c50430() {
   return (neuron0x1c362f0()*0.278669);
}

double NNfunction_ss_dRsR::synapse0x1c50470() {
   return (neuron0x1c36630()*-0.494482);
}

double NNfunction_ss_dRsR::synapse0x1c43d80() {
   return (neuron0x1c36970()*-0.194285);
}

double NNfunction_ss_dRsR::synapse0x1c43dc0() {
   return (neuron0x1c36ed0()*-0.274253);
}

double NNfunction_ss_dRsR::synapse0x1c505c0() {
   return (neuron0x1c370f0()*-0.693555);
}

double NNfunction_ss_dRsR::synapse0x1c50600() {
   return (neuron0x1c37430()*0.335299);
}

double NNfunction_ss_dRsR::synapse0x1c50640() {
   return (neuron0x1c37770()*-0.183523);
}

double NNfunction_ss_dRsR::synapse0x1c50680() {
   return (neuron0x1c37ab0()*0.0806024);
}

double NNfunction_ss_dRsR::synapse0x1c506c0() {
   return (neuron0x1c37df0()*-0.300497);
}

double NNfunction_ss_dRsR::synapse0x1c50700() {
   return (neuron0x1c38130()*-0.415684);
}

double NNfunction_ss_dRsR::synapse0x1c50a80() {
   return (neuron0x1c33570()*-0.0119534);
}

double NNfunction_ss_dRsR::synapse0x1c50ac0() {
   return (neuron0x1c338b0()*-0.0345415);
}

double NNfunction_ss_dRsR::synapse0x1c50b00() {
   return (neuron0x1c33bf0()*-0.00433336);
}

double NNfunction_ss_dRsR::synapse0x1c50b40() {
   return (neuron0x1c33f30()*-0.29758);
}

double NNfunction_ss_dRsR::synapse0x1c50b80() {
   return (neuron0x1c34270()*0.0116892);
}

double NNfunction_ss_dRsR::synapse0x1c50bc0() {
   return (neuron0x1c345b0()*-0.0126402);
}

double NNfunction_ss_dRsR::synapse0x1c50c00() {
   return (neuron0x1c348f0()*-0.00822274);
}

double NNfunction_ss_dRsR::synapse0x1c50c40() {
   return (neuron0x1c34c30()*-0.0178228);
}

double NNfunction_ss_dRsR::synapse0x1c50c80() {
   return (neuron0x1c34f70()*0.0569723);
}

double NNfunction_ss_dRsR::synapse0x1c50cc0() {
   return (neuron0x1c352b0()*0.00897385);
}

double NNfunction_ss_dRsR::synapse0x1c50d00() {
   return (neuron0x1c355f0()*-0.00685334);
}

double NNfunction_ss_dRsR::synapse0x1c50d40() {
   return (neuron0x1c35930()*-0.00508713);
}

double NNfunction_ss_dRsR::synapse0x1c50d80() {
   return (neuron0x1c35c70()*-0.0110765);
}

double NNfunction_ss_dRsR::synapse0x1c50dc0() {
   return (neuron0x1c35fb0()*-0.0350481);
}

double NNfunction_ss_dRsR::synapse0x1c50e00() {
   return (neuron0x1c362f0()*-0.0253264);
}

double NNfunction_ss_dRsR::synapse0x1c50e40() {
   return (neuron0x1c36630()*-0.024396);
}

double NNfunction_ss_dRsR::synapse0x1c508d0() {
   return (neuron0x1c36970()*-0.0261246);
}

double NNfunction_ss_dRsR::synapse0x1c50910() {
   return (neuron0x1c36ed0()*-1.09651);
}

double NNfunction_ss_dRsR::synapse0x1c50f90() {
   return (neuron0x1c370f0()*0.162584);
}

double NNfunction_ss_dRsR::synapse0x1c50fd0() {
   return (neuron0x1c37430()*-0.00677558);
}

double NNfunction_ss_dRsR::synapse0x1c51010() {
   return (neuron0x1c37770()*-0.0026932);
}

double NNfunction_ss_dRsR::synapse0x1c51050() {
   return (neuron0x1c37ab0()*-0.0183684);
}

double NNfunction_ss_dRsR::synapse0x1c51090() {
   return (neuron0x1c37df0()*-0.00415838);
}

double NNfunction_ss_dRsR::synapse0x1c510d0() {
   return (neuron0x1c38130()*-0.00178292);
}

double NNfunction_ss_dRsR::synapse0x1c51450() {
   return (neuron0x1c33570()*-0.234867);
}

double NNfunction_ss_dRsR::synapse0x1c51490() {
   return (neuron0x1c338b0()*-0.428505);
}

double NNfunction_ss_dRsR::synapse0x1c514d0() {
   return (neuron0x1c33bf0()*0.346858);
}

double NNfunction_ss_dRsR::synapse0x1c51510() {
   return (neuron0x1c33f30()*0.115999);
}

double NNfunction_ss_dRsR::synapse0x1c51550() {
   return (neuron0x1c34270()*0.1486);
}

double NNfunction_ss_dRsR::synapse0x1c51590() {
   return (neuron0x1c345b0()*-0.130414);
}

double NNfunction_ss_dRsR::synapse0x1c515d0() {
   return (neuron0x1c348f0()*-0.18811);
}

double NNfunction_ss_dRsR::synapse0x1c51610() {
   return (neuron0x1c34c30()*-0.266163);
}

double NNfunction_ss_dRsR::synapse0x1c51650() {
   return (neuron0x1c34f70()*0.106258);
}

double NNfunction_ss_dRsR::synapse0x1c51690() {
   return (neuron0x1c352b0()*-0.208714);
}

double NNfunction_ss_dRsR::synapse0x1c516d0() {
   return (neuron0x1c355f0()*-0.178604);
}

double NNfunction_ss_dRsR::synapse0x1c51710() {
   return (neuron0x1c35930()*-0.100982);
}

double NNfunction_ss_dRsR::synapse0x1c51750() {
   return (neuron0x1c35c70()*0.130206);
}

double NNfunction_ss_dRsR::synapse0x1c51790() {
   return (neuron0x1c35fb0()*-0.0773877);
}

double NNfunction_ss_dRsR::synapse0x1c517d0() {
   return (neuron0x1c362f0()*0.0511458);
}

double NNfunction_ss_dRsR::synapse0x1c51810() {
   return (neuron0x1c36630()*-0.167644);
}

double NNfunction_ss_dRsR::synapse0x1c512a0() {
   return (neuron0x1c36970()*-0.447538);
}

double NNfunction_ss_dRsR::synapse0x1c512e0() {
   return (neuron0x1c36ed0()*-0.191703);
}

double NNfunction_ss_dRsR::synapse0x1c51960() {
   return (neuron0x1c370f0()*-0.469985);
}

double NNfunction_ss_dRsR::synapse0x1c519a0() {
   return (neuron0x1c37430()*-0.201415);
}

double NNfunction_ss_dRsR::synapse0x1c519e0() {
   return (neuron0x1c37770()*-0.231621);
}

double NNfunction_ss_dRsR::synapse0x1c51a20() {
   return (neuron0x1c37ab0()*-0.344244);
}

double NNfunction_ss_dRsR::synapse0x1c51a60() {
   return (neuron0x1c37df0()*0.594124);
}

double NNfunction_ss_dRsR::synapse0x1c51aa0() {
   return (neuron0x1c38130()*-0.020682);
}

double NNfunction_ss_dRsR::synapse0x1c51e20() {
   return (neuron0x1c33570()*-0.0740823);
}

double NNfunction_ss_dRsR::synapse0x1c51e60() {
   return (neuron0x1c338b0()*-0.0721875);
}

double NNfunction_ss_dRsR::synapse0x1c51ea0() {
   return (neuron0x1c33bf0()*0.143039);
}

double NNfunction_ss_dRsR::synapse0x1c51ee0() {
   return (neuron0x1c33f30()*0.238208);
}

double NNfunction_ss_dRsR::synapse0x1c51f20() {
   return (neuron0x1c34270()*0.628054);
}

double NNfunction_ss_dRsR::synapse0x1c51f60() {
   return (neuron0x1c345b0()*-0.23674);
}

double NNfunction_ss_dRsR::synapse0x1c51fa0() {
   return (neuron0x1c348f0()*-0.205334);
}

double NNfunction_ss_dRsR::synapse0x1c51fe0() {
   return (neuron0x1c34c30()*-0.177327);
}

double NNfunction_ss_dRsR::synapse0x1c52020() {
   return (neuron0x1c34f70()*0.664316);
}

double NNfunction_ss_dRsR::synapse0x1c52060() {
   return (neuron0x1c352b0()*-0.395748);
}

double NNfunction_ss_dRsR::synapse0x1c520a0() {
   return (neuron0x1c355f0()*0.385939);
}

double NNfunction_ss_dRsR::synapse0x1c520e0() {
   return (neuron0x1c35930()*0.313619);
}

double NNfunction_ss_dRsR::synapse0x1c52120() {
   return (neuron0x1c35c70()*0.23496);
}

double NNfunction_ss_dRsR::synapse0x1c52160() {
   return (neuron0x1c35fb0()*0.851854);
}

double NNfunction_ss_dRsR::synapse0x1c521a0() {
   return (neuron0x1c362f0()*-0.028546);
}

double NNfunction_ss_dRsR::synapse0x1c521e0() {
   return (neuron0x1c36630()*0.0431442);
}

double NNfunction_ss_dRsR::synapse0x1c51c70() {
   return (neuron0x1c36970()*-0.145819);
}

double NNfunction_ss_dRsR::synapse0x1c51cb0() {
   return (neuron0x1c36ed0()*-0.730326);
}

double NNfunction_ss_dRsR::synapse0x1c52330() {
   return (neuron0x1c370f0()*-0.586091);
}

double NNfunction_ss_dRsR::synapse0x1c52370() {
   return (neuron0x1c37430()*-0.706206);
}

double NNfunction_ss_dRsR::synapse0x1c523b0() {
   return (neuron0x1c37770()*-0.0182267);
}

double NNfunction_ss_dRsR::synapse0x1c523f0() {
   return (neuron0x1c37ab0()*0.138141);
}

double NNfunction_ss_dRsR::synapse0x1c52430() {
   return (neuron0x1c37df0()*-0.062691);
}

double NNfunction_ss_dRsR::synapse0x1c52470() {
   return (neuron0x1c38130()*0.178907);
}

double NNfunction_ss_dRsR::synapse0x1c527f0() {
   return (neuron0x1c33570()*0.262661);
}

double NNfunction_ss_dRsR::synapse0x1c52830() {
   return (neuron0x1c338b0()*0.85901);
}

double NNfunction_ss_dRsR::synapse0x1c52870() {
   return (neuron0x1c33bf0()*0.101206);
}

double NNfunction_ss_dRsR::synapse0x1c528b0() {
   return (neuron0x1c33f30()*0.54739);
}

double NNfunction_ss_dRsR::synapse0x1c528f0() {
   return (neuron0x1c34270()*0.238295);
}

double NNfunction_ss_dRsR::synapse0x1c52930() {
   return (neuron0x1c345b0()*-0.0297637);
}

double NNfunction_ss_dRsR::synapse0x1c52970() {
   return (neuron0x1c348f0()*0.18186);
}

double NNfunction_ss_dRsR::synapse0x1c529b0() {
   return (neuron0x1c34c30()*-0.275373);
}

double NNfunction_ss_dRsR::synapse0x1c529f0() {
   return (neuron0x1c34f70()*-0.336909);
}

double NNfunction_ss_dRsR::synapse0x1c52a30() {
   return (neuron0x1c352b0()*-0.0945987);
}

double NNfunction_ss_dRsR::synapse0x1c52a70() {
   return (neuron0x1c355f0()*0.189021);
}

double NNfunction_ss_dRsR::synapse0x1c52ab0() {
   return (neuron0x1c35930()*0.00972748);
}

double NNfunction_ss_dRsR::synapse0x1c52af0() {
   return (neuron0x1c35c70()*0.285279);
}

double NNfunction_ss_dRsR::synapse0x1c52b30() {
   return (neuron0x1c35fb0()*0.270942);
}

double NNfunction_ss_dRsR::synapse0x1c52b70() {
   return (neuron0x1c362f0()*-0.458888);
}

double NNfunction_ss_dRsR::synapse0x1c52bb0() {
   return (neuron0x1c36630()*0.957637);
}

double NNfunction_ss_dRsR::synapse0x1c52640() {
   return (neuron0x1c36970()*-0.0642746);
}

double NNfunction_ss_dRsR::synapse0x1c52680() {
   return (neuron0x1c36ed0()*-0.781387);
}

double NNfunction_ss_dRsR::synapse0x1c52d00() {
   return (neuron0x1c370f0()*-0.375385);
}

double NNfunction_ss_dRsR::synapse0x1c52d40() {
   return (neuron0x1c37430()*-0.206089);
}

double NNfunction_ss_dRsR::synapse0x1c52d80() {
   return (neuron0x1c37770()*-0.646818);
}

double NNfunction_ss_dRsR::synapse0x1c52dc0() {
   return (neuron0x1c37ab0()*-0.017548);
}

double NNfunction_ss_dRsR::synapse0x1c52e00() {
   return (neuron0x1c37df0()*-0.343589);
}

double NNfunction_ss_dRsR::synapse0x1c52e40() {
   return (neuron0x1c38130()*0.177259);
}

double NNfunction_ss_dRsR::synapse0x1c531c0() {
   return (neuron0x1c33570()*-0.315251);
}

double NNfunction_ss_dRsR::synapse0x1c53200() {
   return (neuron0x1c338b0()*0.944874);
}

double NNfunction_ss_dRsR::synapse0x1c53240() {
   return (neuron0x1c33bf0()*-0.48535);
}

double NNfunction_ss_dRsR::synapse0x1c53280() {
   return (neuron0x1c33f30()*-0.608232);
}

double NNfunction_ss_dRsR::synapse0x1c532c0() {
   return (neuron0x1c34270()*-0.122474);
}

double NNfunction_ss_dRsR::synapse0x1c53300() {
   return (neuron0x1c345b0()*0.892818);
}

double NNfunction_ss_dRsR::synapse0x1c53340() {
   return (neuron0x1c348f0()*-0.155001);
}

double NNfunction_ss_dRsR::synapse0x1c53380() {
   return (neuron0x1c34c30()*0.130658);
}

double NNfunction_ss_dRsR::synapse0x1c533c0() {
   return (neuron0x1c34f70()*-0.151103);
}

double NNfunction_ss_dRsR::synapse0x1c53400() {
   return (neuron0x1c352b0()*0.788757);
}

double NNfunction_ss_dRsR::synapse0x1c53440() {
   return (neuron0x1c355f0()*0.261487);
}

double NNfunction_ss_dRsR::synapse0x1c53480() {
   return (neuron0x1c35930()*-0.357576);
}

double NNfunction_ss_dRsR::synapse0x1c534c0() {
   return (neuron0x1c35c70()*0.274661);
}

double NNfunction_ss_dRsR::synapse0x1c53500() {
   return (neuron0x1c35fb0()*-0.128634);
}

double NNfunction_ss_dRsR::synapse0x1c53540() {
   return (neuron0x1c362f0()*0.193713);
}

double NNfunction_ss_dRsR::synapse0x1c53580() {
   return (neuron0x1c36630()*0.242208);
}

double NNfunction_ss_dRsR::synapse0x1c53010() {
   return (neuron0x1c36970()*0.111917);
}

double NNfunction_ss_dRsR::synapse0x1c53050() {
   return (neuron0x1c36ed0()*0.0553923);
}

double NNfunction_ss_dRsR::synapse0x1c536d0() {
   return (neuron0x1c370f0()*-0.393478);
}

double NNfunction_ss_dRsR::synapse0x1c53710() {
   return (neuron0x1c37430()*0.771875);
}

double NNfunction_ss_dRsR::synapse0x1c53750() {
   return (neuron0x1c37770()*0.0327666);
}

double NNfunction_ss_dRsR::synapse0x1c53790() {
   return (neuron0x1c37ab0()*0.230267);
}

double NNfunction_ss_dRsR::synapse0x1c537d0() {
   return (neuron0x1c37df0()*-0.225921);
}

double NNfunction_ss_dRsR::synapse0x1c53810() {
   return (neuron0x1c38130()*0.552229);
}

double NNfunction_ss_dRsR::synapse0x1c53b90() {
   return (neuron0x1c33570()*-0.0297442);
}

double NNfunction_ss_dRsR::synapse0x1c53bd0() {
   return (neuron0x1c338b0()*-0.0243011);
}

double NNfunction_ss_dRsR::synapse0x1c53c10() {
   return (neuron0x1c33bf0()*-0.0238193);
}

double NNfunction_ss_dRsR::synapse0x1c53c50() {
   return (neuron0x1c33f30()*11.7049);
}

double NNfunction_ss_dRsR::synapse0x1c53c90() {
   return (neuron0x1c34270()*-0.0219905);
}

double NNfunction_ss_dRsR::synapse0x1c53cd0() {
   return (neuron0x1c345b0()*-0.00324931);
}

double NNfunction_ss_dRsR::synapse0x1c53d10() {
   return (neuron0x1c348f0()*0.028819);
}

double NNfunction_ss_dRsR::synapse0x1c53d50() {
   return (neuron0x1c34c30()*-0.0139998);
}

double NNfunction_ss_dRsR::synapse0x1c53d90() {
   return (neuron0x1c34f70()*0.00283177);
}

double NNfunction_ss_dRsR::synapse0x1c53dd0() {
   return (neuron0x1c352b0()*-0.00188097);
}

double NNfunction_ss_dRsR::synapse0x1c53e10() {
   return (neuron0x1c355f0()*0.021609);
}

double NNfunction_ss_dRsR::synapse0x1c53e50() {
   return (neuron0x1c35930()*0.0473083);
}

double NNfunction_ss_dRsR::synapse0x1c53e90() {
   return (neuron0x1c35c70()*0.0176297);
}

double NNfunction_ss_dRsR::synapse0x1c53ed0() {
   return (neuron0x1c35fb0()*0.0329643);
}

double NNfunction_ss_dRsR::synapse0x1c53f10() {
   return (neuron0x1c362f0()*-0.00707806);
}

double NNfunction_ss_dRsR::synapse0x1c53f50() {
   return (neuron0x1c36630()*0.00367412);
}

double NNfunction_ss_dRsR::synapse0x1c539e0() {
   return (neuron0x1c36970()*-0.0161796);
}

double NNfunction_ss_dRsR::synapse0x1c53a20() {
   return (neuron0x1c36ed0()*0.277047);
}

double NNfunction_ss_dRsR::synapse0x1c540a0() {
   return (neuron0x1c370f0()*0.705751);
}

double NNfunction_ss_dRsR::synapse0x1c540e0() {
   return (neuron0x1c37430()*0.0220404);
}

double NNfunction_ss_dRsR::synapse0x1c54120() {
   return (neuron0x1c37770()*0.0109288);
}

double NNfunction_ss_dRsR::synapse0x1c54160() {
   return (neuron0x1c37ab0()*-0.0154116);
}

double NNfunction_ss_dRsR::synapse0x1c541a0() {
   return (neuron0x1c37df0()*-0.0115383);
}

double NNfunction_ss_dRsR::synapse0x1c541e0() {
   return (neuron0x1c38130()*0.0102478);
}

double NNfunction_ss_dRsR::synapse0x1c54560() {
   return (neuron0x1c33570()*0.305216);
}

double NNfunction_ss_dRsR::synapse0x1c545a0() {
   return (neuron0x1c338b0()*0.951171);
}

double NNfunction_ss_dRsR::synapse0x1c545e0() {
   return (neuron0x1c33bf0()*0.0271698);
}

double NNfunction_ss_dRsR::synapse0x1c54620() {
   return (neuron0x1c33f30()*-0.167527);
}

double NNfunction_ss_dRsR::synapse0x1c54660() {
   return (neuron0x1c34270()*0.795466);
}

double NNfunction_ss_dRsR::synapse0x1c546a0() {
   return (neuron0x1c345b0()*-0.464151);
}

double NNfunction_ss_dRsR::synapse0x1c546e0() {
   return (neuron0x1c348f0()*-0.0159809);
}

double NNfunction_ss_dRsR::synapse0x1c54720() {
   return (neuron0x1c34c30()*-0.508256);
}

double NNfunction_ss_dRsR::synapse0x1c54760() {
   return (neuron0x1c34f70()*0.344958);
}

double NNfunction_ss_dRsR::synapse0x1c547a0() {
   return (neuron0x1c352b0()*-0.230996);
}

double NNfunction_ss_dRsR::synapse0x1c547e0() {
   return (neuron0x1c355f0()*-0.135115);
}

double NNfunction_ss_dRsR::synapse0x1c54820() {
   return (neuron0x1c35930()*0.532302);
}

double NNfunction_ss_dRsR::synapse0x1c54860() {
   return (neuron0x1c35c70()*0.101444);
}

double NNfunction_ss_dRsR::synapse0x1c548a0() {
   return (neuron0x1c35fb0()*0.556773);
}

double NNfunction_ss_dRsR::synapse0x1c548e0() {
   return (neuron0x1c362f0()*-0.0478928);
}

double NNfunction_ss_dRsR::synapse0x1c54920() {
   return (neuron0x1c36630()*0.0502433);
}

double NNfunction_ss_dRsR::synapse0x1c543b0() {
   return (neuron0x1c36970()*1.10277);
}

double NNfunction_ss_dRsR::synapse0x1c543f0() {
   return (neuron0x1c36ed0()*0.11171);
}

double NNfunction_ss_dRsR::synapse0x1c54a70() {
   return (neuron0x1c370f0()*-0.617545);
}

double NNfunction_ss_dRsR::synapse0x1c54ab0() {
   return (neuron0x1c37430()*-0.0373917);
}

double NNfunction_ss_dRsR::synapse0x1c54af0() {
   return (neuron0x1c37770()*0.203835);
}

double NNfunction_ss_dRsR::synapse0x1c54b30() {
   return (neuron0x1c37ab0()*-0.118127);
}

double NNfunction_ss_dRsR::synapse0x1c54b70() {
   return (neuron0x1c37df0()*0.041503);
}

double NNfunction_ss_dRsR::synapse0x1c54bb0() {
   return (neuron0x1c38130()*0.0194028);
}

double NNfunction_ss_dRsR::synapse0x1c3d660() {
   return (neuron0x1c33570()*-0.136849);
}

double NNfunction_ss_dRsR::synapse0x1c3d6a0() {
   return (neuron0x1c338b0()*-0.330435);
}

double NNfunction_ss_dRsR::synapse0x1c3d6e0() {
   return (neuron0x1c33bf0()*0.155687);
}

double NNfunction_ss_dRsR::synapse0x1c3d720() {
   return (neuron0x1c33f30()*-0.135916);
}

double NNfunction_ss_dRsR::synapse0x1c3d760() {
   return (neuron0x1c34270()*0.467403);
}

double NNfunction_ss_dRsR::synapse0x1c3d7a0() {
   return (neuron0x1c345b0()*-0.699749);
}

double NNfunction_ss_dRsR::synapse0x1c3d7e0() {
   return (neuron0x1c348f0()*0.631475);
}

double NNfunction_ss_dRsR::synapse0x1c3d820() {
   return (neuron0x1c34c30()*-0.363671);
}

double NNfunction_ss_dRsR::synapse0x1c55340() {
   return (neuron0x1c34f70()*-0.358441);
}

double NNfunction_ss_dRsR::synapse0x1c55380() {
   return (neuron0x1c352b0()*-0.0684467);
}

double NNfunction_ss_dRsR::synapse0x1c553c0() {
   return (neuron0x1c355f0()*-0.229128);
}

double NNfunction_ss_dRsR::synapse0x1c55400() {
   return (neuron0x1c35930()*-0.56155);
}

double NNfunction_ss_dRsR::synapse0x1c55440() {
   return (neuron0x1c35c70()*-0.426968);
}

double NNfunction_ss_dRsR::synapse0x1c55480() {
   return (neuron0x1c35fb0()*-0.147728);
}

double NNfunction_ss_dRsR::synapse0x1c554c0() {
   return (neuron0x1c362f0()*-0.0729645);
}

double NNfunction_ss_dRsR::synapse0x1c55500() {
   return (neuron0x1c36630()*0.692916);
}

double NNfunction_ss_dRsR::synapse0x1c54d80() {
   return (neuron0x1c36970()*0.233338);
}

double NNfunction_ss_dRsR::synapse0x1c54dc0() {
   return (neuron0x1c36ed0()*-0.205486);
}

double NNfunction_ss_dRsR::synapse0x1c55650() {
   return (neuron0x1c370f0()*-0.197644);
}

double NNfunction_ss_dRsR::synapse0x1c55690() {
   return (neuron0x1c37430()*0.275487);
}

double NNfunction_ss_dRsR::synapse0x1c556d0() {
   return (neuron0x1c37770()*0.337507);
}

double NNfunction_ss_dRsR::synapse0x1c55710() {
   return (neuron0x1c37ab0()*0.22227);
}

double NNfunction_ss_dRsR::synapse0x1c55750() {
   return (neuron0x1c37df0()*-0.755874);
}

double NNfunction_ss_dRsR::synapse0x1c55790() {
   return (neuron0x1c38130()*0.078461);
}

double NNfunction_ss_dRsR::synapse0x1c55b10() {
   return (neuron0x1c33570()*-0.00721444);
}

double NNfunction_ss_dRsR::synapse0x1c55b50() {
   return (neuron0x1c338b0()*-0.00720613);
}

double NNfunction_ss_dRsR::synapse0x1c55b90() {
   return (neuron0x1c33bf0()*-0.00313757);
}

double NNfunction_ss_dRsR::synapse0x1c55bd0() {
   return (neuron0x1c33f30()*-2.01897);
}

double NNfunction_ss_dRsR::synapse0x1c55c10() {
   return (neuron0x1c34270()*0.00828218);
}

double NNfunction_ss_dRsR::synapse0x1c55c50() {
   return (neuron0x1c345b0()*-0.00232287);
}

double NNfunction_ss_dRsR::synapse0x1c55c90() {
   return (neuron0x1c348f0()*-0.00694502);
}

double NNfunction_ss_dRsR::synapse0x1c55cd0() {
   return (neuron0x1c34c30()*-0.0130253);
}

double NNfunction_ss_dRsR::synapse0x1c55d10() {
   return (neuron0x1c34f70()*-0.00104951);
}

double NNfunction_ss_dRsR::synapse0x1c55d50() {
   return (neuron0x1c352b0()*0.000791238);
}

double NNfunction_ss_dRsR::synapse0x1c55d90() {
   return (neuron0x1c355f0()*-0.00227617);
}

double NNfunction_ss_dRsR::synapse0x1c55dd0() {
   return (neuron0x1c35930()*0.00675593);
}

double NNfunction_ss_dRsR::synapse0x1c55e10() {
   return (neuron0x1c35c70()*0.00352555);
}

double NNfunction_ss_dRsR::synapse0x1c55e50() {
   return (neuron0x1c35fb0()*-0.0122802);
}

double NNfunction_ss_dRsR::synapse0x1c55e90() {
   return (neuron0x1c362f0()*-0.0060989);
}

double NNfunction_ss_dRsR::synapse0x1c55ed0() {
   return (neuron0x1c36630()*-0.0196037);
}

double NNfunction_ss_dRsR::synapse0x1c55960() {
   return (neuron0x1c36970()*-0.0159242);
}

double NNfunction_ss_dRsR::synapse0x1c559a0() {
   return (neuron0x1c36ed0()*-0.17435);
}

double NNfunction_ss_dRsR::synapse0x1c56020() {
   return (neuron0x1c370f0()*-0.348561);
}

double NNfunction_ss_dRsR::synapse0x1c56060() {
   return (neuron0x1c37430()*0.0110223);
}

double NNfunction_ss_dRsR::synapse0x1c560a0() {
   return (neuron0x1c37770()*-0.00424462);
}

double NNfunction_ss_dRsR::synapse0x1c560e0() {
   return (neuron0x1c37ab0()*0.00675821);
}

double NNfunction_ss_dRsR::synapse0x1c56120() {
   return (neuron0x1c37df0()*-0.00814135);
}

double NNfunction_ss_dRsR::synapse0x1c56160() {
   return (neuron0x1c38130()*0.00532422);
}

double NNfunction_ss_dRsR::synapse0x1c564e0() {
   return (neuron0x1c33570()*-0.00311979);
}

double NNfunction_ss_dRsR::synapse0x1c56520() {
   return (neuron0x1c338b0()*-0.00135827);
}

double NNfunction_ss_dRsR::synapse0x1c56560() {
   return (neuron0x1c33bf0()*0.0156931);
}

double NNfunction_ss_dRsR::synapse0x1c565a0() {
   return (neuron0x1c33f30()*-4.38049);
}

double NNfunction_ss_dRsR::synapse0x1c565e0() {
   return (neuron0x1c34270()*0.00595583);
}

double NNfunction_ss_dRsR::synapse0x1c56620() {
   return (neuron0x1c345b0()*-0.0129207);
}

double NNfunction_ss_dRsR::synapse0x1c56660() {
   return (neuron0x1c348f0()*-0.00619775);
}

double NNfunction_ss_dRsR::synapse0x1c566a0() {
   return (neuron0x1c34c30()*-0.0206913);
}

double NNfunction_ss_dRsR::synapse0x1c566e0() {
   return (neuron0x1c34f70()*-2.75763e-05);
}

double NNfunction_ss_dRsR::synapse0x1c56720() {
   return (neuron0x1c352b0()*0.0172354);
}

double NNfunction_ss_dRsR::synapse0x1c56760() {
   return (neuron0x1c355f0()*0.00630767);
}

double NNfunction_ss_dRsR::synapse0x1c567a0() {
   return (neuron0x1c35930()*-0.000151264);
}

double NNfunction_ss_dRsR::synapse0x1c567e0() {
   return (neuron0x1c35c70()*-0.0185162);
}

double NNfunction_ss_dRsR::synapse0x1c56820() {
   return (neuron0x1c35fb0()*-0.0130737);
}

double NNfunction_ss_dRsR::synapse0x1c56860() {
   return (neuron0x1c362f0()*-0.014604);
}

double NNfunction_ss_dRsR::synapse0x1c568a0() {
   return (neuron0x1c36630()*-0.0141889);
}

double NNfunction_ss_dRsR::synapse0x1c56330() {
   return (neuron0x1c36970()*0.0038725);
}

double NNfunction_ss_dRsR::synapse0x1c56370() {
   return (neuron0x1c36ed0()*0.553587);
}

double NNfunction_ss_dRsR::synapse0x1c46ea0() {
   return (neuron0x1c370f0()*0.0378594);
}

double NNfunction_ss_dRsR::synapse0x1c46ee0() {
   return (neuron0x1c37430()*-0.0111258);
}

double NNfunction_ss_dRsR::synapse0x1c46f20() {
   return (neuron0x1c37770()*-0.00550308);
}

double NNfunction_ss_dRsR::synapse0x1c46f60() {
   return (neuron0x1c37ab0()*0.00147737);
}

double NNfunction_ss_dRsR::synapse0x1c46fa0() {
   return (neuron0x1c37df0()*0.00889253);
}

double NNfunction_ss_dRsR::synapse0x1c46fe0() {
   return (neuron0x1c38130()*-0.00745525);
}

double NNfunction_ss_dRsR::synapse0x1c47360() {
   return (neuron0x1c33570()*0.494506);
}

double NNfunction_ss_dRsR::synapse0x1c473a0() {
   return (neuron0x1c338b0()*-0.133287);
}

double NNfunction_ss_dRsR::synapse0x1c473e0() {
   return (neuron0x1c33bf0()*0.00241694);
}

double NNfunction_ss_dRsR::synapse0x1c47420() {
   return (neuron0x1c33f30()*0.720758);
}

double NNfunction_ss_dRsR::synapse0x1c47460() {
   return (neuron0x1c34270()*-0.248534);
}

double NNfunction_ss_dRsR::synapse0x1c474a0() {
   return (neuron0x1c345b0()*0.560048);
}

double NNfunction_ss_dRsR::synapse0x1c474e0() {
   return (neuron0x1c348f0()*-0.573636);
}

double NNfunction_ss_dRsR::synapse0x1c47520() {
   return (neuron0x1c34c30()*-0.197908);
}

double NNfunction_ss_dRsR::synapse0x1c47560() {
   return (neuron0x1c34f70()*0.377677);
}

double NNfunction_ss_dRsR::synapse0x1c475a0() {
   return (neuron0x1c352b0()*0.516576);
}

double NNfunction_ss_dRsR::synapse0x1c475e0() {
   return (neuron0x1c355f0()*0.146235);
}

double NNfunction_ss_dRsR::synapse0x1c47620() {
   return (neuron0x1c35930()*-0.701989);
}

double NNfunction_ss_dRsR::synapse0x1c47660() {
   return (neuron0x1c35c70()*0.0892456);
}

double NNfunction_ss_dRsR::synapse0x1c476a0() {
   return (neuron0x1c35fb0()*-0.107049);
}

double NNfunction_ss_dRsR::synapse0x1c476e0() {
   return (neuron0x1c362f0()*-0.0917258);
}

double NNfunction_ss_dRsR::synapse0x1c47720() {
   return (neuron0x1c36630()*-0.401988);
}

double NNfunction_ss_dRsR::synapse0x1c471b0() {
   return (neuron0x1c36970()*-1.04806);
}

double NNfunction_ss_dRsR::synapse0x1c471f0() {
   return (neuron0x1c36ed0()*0.0063755);
}

double NNfunction_ss_dRsR::synapse0x1c47870() {
   return (neuron0x1c370f0()*0.597455);
}

double NNfunction_ss_dRsR::synapse0x1c478b0() {
   return (neuron0x1c37430()*0.346992);
}

double NNfunction_ss_dRsR::synapse0x1c478f0() {
   return (neuron0x1c37770()*0.112334);
}

double NNfunction_ss_dRsR::synapse0x1c47930() {
   return (neuron0x1c37ab0()*0.12575);
}

double NNfunction_ss_dRsR::synapse0x1c47970() {
   return (neuron0x1c37df0()*0.0210157);
}

double NNfunction_ss_dRsR::synapse0x1c479b0() {
   return (neuron0x1c38130()*-0.285738);
}

double NNfunction_ss_dRsR::synapse0x1c47d30() {
   return (neuron0x1c33570()*0.0127365);
}

double NNfunction_ss_dRsR::synapse0x1c47d70() {
   return (neuron0x1c338b0()*0.526767);
}

double NNfunction_ss_dRsR::synapse0x1c47db0() {
   return (neuron0x1c33bf0()*0.0536492);
}

double NNfunction_ss_dRsR::synapse0x1c47df0() {
   return (neuron0x1c33f30()*-0.278069);
}

double NNfunction_ss_dRsR::synapse0x1c47e30() {
   return (neuron0x1c34270()*-0.33093);
}

double NNfunction_ss_dRsR::synapse0x1c47e70() {
   return (neuron0x1c345b0()*0.323237);
}

double NNfunction_ss_dRsR::synapse0x1c47eb0() {
   return (neuron0x1c348f0()*0.129616);
}

double NNfunction_ss_dRsR::synapse0x1c47ef0() {
   return (neuron0x1c34c30()*0.131549);
}

double NNfunction_ss_dRsR::synapse0x1c47f30() {
   return (neuron0x1c34f70()*-0.434051);
}

double NNfunction_ss_dRsR::synapse0x1c47f70() {
   return (neuron0x1c352b0()*-0.363506);
}

double NNfunction_ss_dRsR::synapse0x1c47fb0() {
   return (neuron0x1c355f0()*0.147234);
}

double NNfunction_ss_dRsR::synapse0x1c47ff0() {
   return (neuron0x1c35930()*-0.156618);
}

double NNfunction_ss_dRsR::synapse0x1c48030() {
   return (neuron0x1c35c70()*-0.14121);
}

double NNfunction_ss_dRsR::synapse0x1c48070() {
   return (neuron0x1c35fb0()*-0.318827);
}

double NNfunction_ss_dRsR::synapse0x1c480b0() {
   return (neuron0x1c362f0()*-0.0430834);
}

double NNfunction_ss_dRsR::synapse0x1c480f0() {
   return (neuron0x1c36630()*-0.0233329);
}

double NNfunction_ss_dRsR::synapse0x1c47b80() {
   return (neuron0x1c36970()*0.15413);
}

double NNfunction_ss_dRsR::synapse0x1c47bc0() {
   return (neuron0x1c36ed0()*-0.139362);
}

double NNfunction_ss_dRsR::synapse0x1c48240() {
   return (neuron0x1c370f0()*0.71027);
}

double NNfunction_ss_dRsR::synapse0x1c48280() {
   return (neuron0x1c37430()*0.25745);
}

double NNfunction_ss_dRsR::synapse0x1c482c0() {
   return (neuron0x1c37770()*0.123147);
}

double NNfunction_ss_dRsR::synapse0x1c48300() {
   return (neuron0x1c37ab0()*-0.169617);
}

double NNfunction_ss_dRsR::synapse0x1c48340() {
   return (neuron0x1c37df0()*-0.116373);
}

double NNfunction_ss_dRsR::synapse0x1c48380() {
   return (neuron0x1c38130()*0.0563712);
}

double NNfunction_ss_dRsR::synapse0x1c48700() {
   return (neuron0x1c33570()*-0.144487);
}

double NNfunction_ss_dRsR::synapse0x1c48740() {
   return (neuron0x1c338b0()*1.03376);
}

double NNfunction_ss_dRsR::synapse0x1c48780() {
   return (neuron0x1c33bf0()*-0.0184476);
}

double NNfunction_ss_dRsR::synapse0x1c487c0() {
   return (neuron0x1c33f30()*-0.328337);
}

double NNfunction_ss_dRsR::synapse0x1c48800() {
   return (neuron0x1c34270()*-0.430436);
}

double NNfunction_ss_dRsR::synapse0x1c48840() {
   return (neuron0x1c345b0()*1.14657);
}

double NNfunction_ss_dRsR::synapse0x1c48880() {
   return (neuron0x1c348f0()*-0.333012);
}

double NNfunction_ss_dRsR::synapse0x1c488c0() {
   return (neuron0x1c34c30()*0.391175);
}

double NNfunction_ss_dRsR::synapse0x1c48900() {
   return (neuron0x1c34f70()*-0.104697);
}

double NNfunction_ss_dRsR::synapse0x1c48940() {
   return (neuron0x1c352b0()*0.427569);
}

double NNfunction_ss_dRsR::synapse0x1c48980() {
   return (neuron0x1c355f0()*0.0264036);
}

double NNfunction_ss_dRsR::synapse0x1c489c0() {
   return (neuron0x1c35930()*-0.459312);
}

double NNfunction_ss_dRsR::synapse0x1c48a00() {
   return (neuron0x1c35c70()*0.110751);
}

double NNfunction_ss_dRsR::synapse0x1c48a40() {
   return (neuron0x1c35fb0()*-0.100714);
}

double NNfunction_ss_dRsR::synapse0x1c48a80() {
   return (neuron0x1c362f0()*0.147314);
}

double NNfunction_ss_dRsR::synapse0x1c48ac0() {
   return (neuron0x1c36630()*-0.010308);
}

double NNfunction_ss_dRsR::synapse0x1c48550() {
   return (neuron0x1c36970()*0.205919);
}

double NNfunction_ss_dRsR::synapse0x1c48590() {
   return (neuron0x1c36ed0()*-0.671946);
}

double NNfunction_ss_dRsR::synapse0x1c48c10() {
   return (neuron0x1c370f0()*-0.417144);
}

double NNfunction_ss_dRsR::synapse0x1c48c50() {
   return (neuron0x1c37430()*0.456418);
}

double NNfunction_ss_dRsR::synapse0x1c48c90() {
   return (neuron0x1c37770()*-0.0556125);
}

double NNfunction_ss_dRsR::synapse0x1c48cd0() {
   return (neuron0x1c37ab0()*0.463897);
}

double NNfunction_ss_dRsR::synapse0x1c48d10() {
   return (neuron0x1c37df0()*0.216362);
}

double NNfunction_ss_dRsR::synapse0x1c48d50() {
   return (neuron0x1c38130()*0.619651);
}

double NNfunction_ss_dRsR::synapse0x1c5ac20() {
   return (neuron0x1c33570()*0.0672666);
}

double NNfunction_ss_dRsR::synapse0x1c5ac60() {
   return (neuron0x1c338b0()*-0.629174);
}

double NNfunction_ss_dRsR::synapse0x1c5aca0() {
   return (neuron0x1c33bf0()*1.11132);
}

double NNfunction_ss_dRsR::synapse0x1c5ace0() {
   return (neuron0x1c33f30()*-0.378132);
}

double NNfunction_ss_dRsR::synapse0x1c5ad20() {
   return (neuron0x1c34270()*-0.230578);
}

double NNfunction_ss_dRsR::synapse0x1c5ad60() {
   return (neuron0x1c345b0()*-0.498256);
}

double NNfunction_ss_dRsR::synapse0x1c5ada0() {
   return (neuron0x1c348f0()*-0.0250663);
}

double NNfunction_ss_dRsR::synapse0x1c5ade0() {
   return (neuron0x1c34c30()*0.133132);
}

double NNfunction_ss_dRsR::synapse0x1c5ae20() {
   return (neuron0x1c34f70()*-0.0407525);
}

double NNfunction_ss_dRsR::synapse0x1c5ae60() {
   return (neuron0x1c352b0()*0.128223);
}

double NNfunction_ss_dRsR::synapse0x1c5aea0() {
   return (neuron0x1c355f0()*0.333216);
}

double NNfunction_ss_dRsR::synapse0x1c5aee0() {
   return (neuron0x1c35930()*-0.350063);
}

double NNfunction_ss_dRsR::synapse0x1c5af20() {
   return (neuron0x1c35c70()*0.310825);
}

double NNfunction_ss_dRsR::synapse0x1c5af60() {
   return (neuron0x1c35fb0()*0.145797);
}

double NNfunction_ss_dRsR::synapse0x1c5afa0() {
   return (neuron0x1c362f0()*0.0550781);
}

double NNfunction_ss_dRsR::synapse0x1c5afe0() {
   return (neuron0x1c36630()*-0.749097);
}

double NNfunction_ss_dRsR::synapse0x1c48d90() {
   return (neuron0x1c36970()*-0.267472);
}

double NNfunction_ss_dRsR::synapse0x1c48dd0() {
   return (neuron0x1c36ed0()*0.470335);
}

double NNfunction_ss_dRsR::synapse0x1c5b130() {
   return (neuron0x1c370f0()*-0.277403);
}

double NNfunction_ss_dRsR::synapse0x1c5b170() {
   return (neuron0x1c37430()*-0.684733);
}

double NNfunction_ss_dRsR::synapse0x1c5b1b0() {
   return (neuron0x1c37770()*0.747251);
}

double NNfunction_ss_dRsR::synapse0x1c5b1f0() {
   return (neuron0x1c37ab0()*0.92383);
}

double NNfunction_ss_dRsR::synapse0x1c5b230() {
   return (neuron0x1c37df0()*-0.580497);
}

double NNfunction_ss_dRsR::synapse0x1c5b270() {
   return (neuron0x1c38130()*-0.363861);
}

double NNfunction_ss_dRsR::synapse0x1c5b5f0() {
   return (neuron0x1c33570()*0.00897241);
}

double NNfunction_ss_dRsR::synapse0x1c5b630() {
   return (neuron0x1c338b0()*0.00452558);
}

double NNfunction_ss_dRsR::synapse0x1c5b670() {
   return (neuron0x1c33bf0()*-0.000827467);
}

double NNfunction_ss_dRsR::synapse0x1c5b6b0() {
   return (neuron0x1c33f30()*0.364084);
}

double NNfunction_ss_dRsR::synapse0x1c5b6f0() {
   return (neuron0x1c34270()*0.00783029);
}

double NNfunction_ss_dRsR::synapse0x1c5b730() {
   return (neuron0x1c345b0()*0.00306261);
}

double NNfunction_ss_dRsR::synapse0x1c5b770() {
   return (neuron0x1c348f0()*0.0176592);
}

double NNfunction_ss_dRsR::synapse0x1c5b7b0() {
   return (neuron0x1c34c30()*0.00120876);
}

double NNfunction_ss_dRsR::synapse0x1c5b7f0() {
   return (neuron0x1c34f70()*-0.0112166);
}

double NNfunction_ss_dRsR::synapse0x1c5b830() {
   return (neuron0x1c352b0()*-0.00710554);
}

double NNfunction_ss_dRsR::synapse0x1c5b870() {
   return (neuron0x1c355f0()*-0.0378625);
}

double NNfunction_ss_dRsR::synapse0x1c5b8b0() {
   return (neuron0x1c35930()*0.00580023);
}

double NNfunction_ss_dRsR::synapse0x1c5b8f0() {
   return (neuron0x1c35c70()*0.00118654);
}

double NNfunction_ss_dRsR::synapse0x1c5b930() {
   return (neuron0x1c35fb0()*0.00875545);
}

double NNfunction_ss_dRsR::synapse0x1c5b970() {
   return (neuron0x1c362f0()*0.00457455);
}

double NNfunction_ss_dRsR::synapse0x1c5b9b0() {
   return (neuron0x1c36630()*-0.0107359);
}

double NNfunction_ss_dRsR::synapse0x1c5b440() {
   return (neuron0x1c36970()*0.016641);
}

double NNfunction_ss_dRsR::synapse0x1c5b480() {
   return (neuron0x1c36ed0()*-0.330193);
}

double NNfunction_ss_dRsR::synapse0x1c5bb00() {
   return (neuron0x1c370f0()*0.656359);
}

double NNfunction_ss_dRsR::synapse0x1c5bb40() {
   return (neuron0x1c37430()*-0.0171373);
}

double NNfunction_ss_dRsR::synapse0x1c5bb80() {
   return (neuron0x1c37770()*0.0119419);
}

double NNfunction_ss_dRsR::synapse0x1c5bbc0() {
   return (neuron0x1c37ab0()*0.00979224);
}

double NNfunction_ss_dRsR::synapse0x1c5bc00() {
   return (neuron0x1c37df0()*0.0083765);
}

double NNfunction_ss_dRsR::synapse0x1c5bc40() {
   return (neuron0x1c38130()*0.00903986);
}

double NNfunction_ss_dRsR::synapse0x1c5bfc0() {
   return (neuron0x1c33570()*-0.235704);
}

double NNfunction_ss_dRsR::synapse0x1c5c000() {
   return (neuron0x1c338b0()*0.728409);
}

double NNfunction_ss_dRsR::synapse0x1c5c040() {
   return (neuron0x1c33bf0()*-0.0334028);
}

double NNfunction_ss_dRsR::synapse0x1c5c080() {
   return (neuron0x1c33f30()*-0.281012);
}

double NNfunction_ss_dRsR::synapse0x1c5c0c0() {
   return (neuron0x1c34270()*-0.298583);
}

double NNfunction_ss_dRsR::synapse0x1c5c100() {
   return (neuron0x1c345b0()*-0.742537);
}

double NNfunction_ss_dRsR::synapse0x1c5c140() {
   return (neuron0x1c348f0()*0.374046);
}

double NNfunction_ss_dRsR::synapse0x1c5c180() {
   return (neuron0x1c34c30()*-0.0840727);
}

double NNfunction_ss_dRsR::synapse0x1c5c1c0() {
   return (neuron0x1c34f70()*0.141693);
}

double NNfunction_ss_dRsR::synapse0x1c5c200() {
   return (neuron0x1c352b0()*-0.0965702);
}

double NNfunction_ss_dRsR::synapse0x1c5c240() {
   return (neuron0x1c355f0()*0.144932);
}

double NNfunction_ss_dRsR::synapse0x1c5c280() {
   return (neuron0x1c35930()*0.384785);
}

double NNfunction_ss_dRsR::synapse0x1c5c2c0() {
   return (neuron0x1c35c70()*0.169057);
}

double NNfunction_ss_dRsR::synapse0x1c5c300() {
   return (neuron0x1c35fb0()*-0.0393211);
}

double NNfunction_ss_dRsR::synapse0x1c5c340() {
   return (neuron0x1c362f0()*-0.219247);
}

double NNfunction_ss_dRsR::synapse0x1c5c380() {
   return (neuron0x1c36630()*0.337882);
}

double NNfunction_ss_dRsR::synapse0x1c5be10() {
   return (neuron0x1c36970()*0.452755);
}

double NNfunction_ss_dRsR::synapse0x1c5be50() {
   return (neuron0x1c36ed0()*0.158433);
}

double NNfunction_ss_dRsR::synapse0x1c5c4d0() {
   return (neuron0x1c370f0()*0.217626);
}

double NNfunction_ss_dRsR::synapse0x1c5c510() {
   return (neuron0x1c37430()*0.145933);
}

double NNfunction_ss_dRsR::synapse0x1c5c550() {
   return (neuron0x1c37770()*-0.127647);
}

double NNfunction_ss_dRsR::synapse0x1c5c590() {
   return (neuron0x1c37ab0()*-0.118889);
}

double NNfunction_ss_dRsR::synapse0x1c5c5d0() {
   return (neuron0x1c37df0()*0.00556489);
}

double NNfunction_ss_dRsR::synapse0x1c5c610() {
   return (neuron0x1c38130()*0.313544);
}

double NNfunction_ss_dRsR::synapse0x1c5c990() {
   return (neuron0x1c33570()*0.02202);
}

double NNfunction_ss_dRsR::synapse0x1c5c9d0() {
   return (neuron0x1c338b0()*-0.0263895);
}

double NNfunction_ss_dRsR::synapse0x1c5ca10() {
   return (neuron0x1c33bf0()*-0.0435773);
}

double NNfunction_ss_dRsR::synapse0x1c5ca50() {
   return (neuron0x1c33f30()*0.107544);
}

double NNfunction_ss_dRsR::synapse0x1c5ca90() {
   return (neuron0x1c34270()*0.00968627);
}

double NNfunction_ss_dRsR::synapse0x1c5cad0() {
   return (neuron0x1c345b0()*-0.0392064);
}

double NNfunction_ss_dRsR::synapse0x1c5cb10() {
   return (neuron0x1c348f0()*0.00257905);
}

double NNfunction_ss_dRsR::synapse0x1c5cb50() {
   return (neuron0x1c34c30()*-0.0277084);
}

double NNfunction_ss_dRsR::synapse0x1c5cb90() {
   return (neuron0x1c34f70()*0.182946);
}

double NNfunction_ss_dRsR::synapse0x1c5cbd0() {
   return (neuron0x1c352b0()*0.204463);
}

double NNfunction_ss_dRsR::synapse0x1c5cc10() {
   return (neuron0x1c355f0()*0.293858);
}

double NNfunction_ss_dRsR::synapse0x1c5cc50() {
   return (neuron0x1c35930()*0.0921232);
}

double NNfunction_ss_dRsR::synapse0x1c5cc90() {
   return (neuron0x1c35c70()*0.0593381);
}

double NNfunction_ss_dRsR::synapse0x1c5ccd0() {
   return (neuron0x1c35fb0()*0.0323949);
}

double NNfunction_ss_dRsR::synapse0x1c5cd10() {
   return (neuron0x1c362f0()*-0.0728569);
}

double NNfunction_ss_dRsR::synapse0x1c5cd50() {
   return (neuron0x1c36630()*-0.0433358);
}

double NNfunction_ss_dRsR::synapse0x1c5c7e0() {
   return (neuron0x1c36970()*0.0389709);
}

double NNfunction_ss_dRsR::synapse0x1c5c820() {
   return (neuron0x1c36ed0()*0.451286);
}

double NNfunction_ss_dRsR::synapse0x1c5cea0() {
   return (neuron0x1c370f0()*0.467076);
}

double NNfunction_ss_dRsR::synapse0x1c5cee0() {
   return (neuron0x1c37430()*0.0287166);
}

double NNfunction_ss_dRsR::synapse0x1c5cf20() {
   return (neuron0x1c37770()*-0.0519351);
}

double NNfunction_ss_dRsR::synapse0x1c5cf60() {
   return (neuron0x1c37ab0()*-0.0656772);
}

double NNfunction_ss_dRsR::synapse0x1c5cfa0() {
   return (neuron0x1c37df0()*0.030282);
}

double NNfunction_ss_dRsR::synapse0x1c5cfe0() {
   return (neuron0x1c38130()*-0.00885231);
}

double NNfunction_ss_dRsR::synapse0x1c39580() {
   return (neuron0x1c385d0()*-0.847704);
}

double NNfunction_ss_dRsR::synapse0x1c395c0() {
   return (neuron0x1c38ee0()*1.34085);
}

double NNfunction_ss_dRsR::synapse0x1c3aa90() {
   return (neuron0x1c399c0()*-1.93877);
}

double NNfunction_ss_dRsR::synapse0x1c3aad0() {
   return (neuron0x19f3250()*-0.522921);
}

double NNfunction_ss_dRsR::synapse0x1c3b460() {
   return (neuron0x1c3a7e0()*0.718637);
}

double NNfunction_ss_dRsR::synapse0x1c3b4a0() {
   return (neuron0x1c3b1b0()*0.641346);
}

double NNfunction_ss_dRsR::synapse0x1c3c230() {
   return (neuron0x1c3bf80()*-0.791676);
}

double NNfunction_ss_dRsR::synapse0x1c3c270() {
   return (neuron0x1c3c950()*1.75525);
}

double NNfunction_ss_dRsR::synapse0x1c3cc00() {
   return (neuron0x1c3d320()*-0.576115);
}

double NNfunction_ss_dRsR::synapse0x1c3cc40() {
   return (neuron0x1c3de00()*2.20543);
}

double NNfunction_ss_dRsR::synapse0x1c3d5d0() {
   return (neuron0x1c3e7d0()*-3.22288);
}

double NNfunction_ss_dRsR::synapse0x1c3d610() {
   return (neuron0x1c3b8b0()*1.17649);
}

double NNfunction_ss_dRsR::synapse0x1c3e0b0() {
   return (neuron0x1c40380()*-0.744484);
}

double NNfunction_ss_dRsR::synapse0x1c3e0f0() {
   return (neuron0x1c40d50()*-0.781091);
}

double NNfunction_ss_dRsR::synapse0x1c3ea80() {
   return (neuron0x1c41720()*0.766461);
}

double NNfunction_ss_dRsR::synapse0x1c3eac0() {
   return (neuron0x1c420f0()*2.87021);
}

double NNfunction_ss_dRsR::synapse0x1c3bb60() {
   return (neuron0x1c43f00()*-0.951758);
}

double NNfunction_ss_dRsR::synapse0x1c3bba0() {
   return (neuron0x1c441e0()*-1.04831);
}

double NNfunction_ss_dRsR::synapse0x1c40630() {
   return (neuron0x1c44bb0()*-0.698603);
}

double NNfunction_ss_dRsR::synapse0x1c40670() {
   return (neuron0x1c45580()*0.660272);
}

double NNfunction_ss_dRsR::synapse0x1c41000() {
   return (neuron0x1c45f50()*-1.22615);
}

double NNfunction_ss_dRsR::synapse0x1c41040() {
   return (neuron0x1c46920()*1.24467);
}

double NNfunction_ss_dRsR::synapse0x1c419d0() {
   return (neuron0x1c3f470()*0.780721);
}

double NNfunction_ss_dRsR::synapse0x1c41a10() {
   return (neuron0x1c3fe40()*-1.73868);
}

double NNfunction_ss_dRsR::synapse0x1c423a0() {
   return (neuron0x1c496b0()*1.20638);
}

double NNfunction_ss_dRsR::synapse0x1c423e0() {
   return (neuron0x1c4a080()*-3.21624);
}

double NNfunction_ss_dRsR::synapse0x1c36510() {
   return (neuron0x1c4aa50()*0.744982);
}

double NNfunction_ss_dRsR::synapse0x1c36550() {
   return (neuron0x1c4b420()*2.12772);
}

double NNfunction_ss_dRsR::synapse0x1c44490() {
   return (neuron0x1c4bdf0()*-0.89894);
}

double NNfunction_ss_dRsR::synapse0x1c444d0() {
   return (neuron0x1c4c7c0()*-1.31471);
}

double NNfunction_ss_dRsR::synapse0x1c44e60() {
   return (neuron0x1c4d190()*1.1655);
}

double NNfunction_ss_dRsR::synapse0x1c44ea0() {
   return (neuron0x1c4db60()*3.38934);
}

double NNfunction_ss_dRsR::synapse0x1c45830() {
   return (neuron0x1c43bf0()*0.828928);
}

double NNfunction_ss_dRsR::synapse0x1c45870() {
   return (neuron0x1c50740()*2.42542);
}

double NNfunction_ss_dRsR::synapse0x1c46200() {
   return (neuron0x1c51110()*1.31616);
}

double NNfunction_ss_dRsR::synapse0x1c46240() {
   return (neuron0x1c51ae0()*0.939006);
}

double NNfunction_ss_dRsR::synapse0x1c46bd0() {
   return (neuron0x1c524b0()*-0.717233);
}

double NNfunction_ss_dRsR::synapse0x1c46c10() {
   return (neuron0x1c52e80()*0.98779);
}

double NNfunction_ss_dRsR::synapse0x1c3f720() {
   return (neuron0x1c53850()*-6.87711);
}

double NNfunction_ss_dRsR::synapse0x1c3f760() {
   return (neuron0x1c54220()*-0.806008);
}

double NNfunction_ss_dRsR::synapse0x1c48fd0() {
   return (neuron0x1c54bf0()*-0.552313);
}

double NNfunction_ss_dRsR::synapse0x1c49010() {
   return (neuron0x1c557d0()*3.10515);
}

double NNfunction_ss_dRsR::synapse0x1c49960() {
   return (neuron0x1c561a0()*-6.17735);
}

double NNfunction_ss_dRsR::synapse0x1c499a0() {
   return (neuron0x1c47020()*-1.0001);
}

double NNfunction_ss_dRsR::synapse0x1c4a330() {
   return (neuron0x1c479f0()*1.36128);
}

double NNfunction_ss_dRsR::synapse0x1c4a370() {
   return (neuron0x1c483c0()*-1.14777);
}

double NNfunction_ss_dRsR::synapse0x1c4ad00() {
   return (neuron0x1c5aa00()*-0.629987);
}

double NNfunction_ss_dRsR::synapse0x1c4ad40() {
   return (neuron0x1c5b2b0()*-1.65069);
}

double NNfunction_ss_dRsR::synapse0x1c4b6d0() {
   return (neuron0x1c5bc80()*0.500621);
}

double NNfunction_ss_dRsR::synapse0x1c4b710() {
   return (neuron0x1c5c650()*-1.19534);
}

double NNfunction_ss_dRsR::synapse0x1c4de10() {
   return (neuron0x1c385d0()*0.221352);
}

double NNfunction_ss_dRsR::synapse0x1c4de50() {
   return (neuron0x1c38ee0()*0.0503381);
}

double NNfunction_ss_dRsR::synapse0x1c433d0() {
   return (neuron0x1c399c0()*-0.0733233);
}

double NNfunction_ss_dRsR::synapse0x1c43410() {
   return (neuron0x19f3250()*-0.00534913);
}

double NNfunction_ss_dRsR::synapse0x1c509f0() {
   return (neuron0x1c3a7e0()*0.0299821);
}

double NNfunction_ss_dRsR::synapse0x1c50a30() {
   return (neuron0x1c3b1b0()*1.57619);
}

double NNfunction_ss_dRsR::synapse0x1c513c0() {
   return (neuron0x1c3bf80()*-0.0546642);
}

double NNfunction_ss_dRsR::synapse0x1c51400() {
   return (neuron0x1c3c950()*0.0409394);
}

double NNfunction_ss_dRsR::synapse0x1c51d90() {
   return (neuron0x1c3d320()*-0.0307064);
}

double NNfunction_ss_dRsR::synapse0x1c51dd0() {
   return (neuron0x1c3de00()*-2.81004);
}

double NNfunction_ss_dRsR::synapse0x1c52760() {
   return (neuron0x1c3e7d0()*-0.270678);
}

double NNfunction_ss_dRsR::synapse0x1c527a0() {
   return (neuron0x1c3b8b0()*0.115522);
}

double NNfunction_ss_dRsR::synapse0x1c53130() {
   return (neuron0x1c40380()*0.009734);
}

double NNfunction_ss_dRsR::synapse0x1c53170() {
   return (neuron0x1c40d50()*-0.0424408);
}

double NNfunction_ss_dRsR::synapse0x1c53b00() {
   return (neuron0x1c41720()*-0.117864);
}

double NNfunction_ss_dRsR::synapse0x1c53b40() {
   return (neuron0x1c420f0()*-0.944556);
}

double NNfunction_ss_dRsR::synapse0x1c544d0() {
   return (neuron0x1c43f00()*0.0754574);
}

double NNfunction_ss_dRsR::synapse0x1c54510() {
   return (neuron0x1c441e0()*-0.0303313);
}

double NNfunction_ss_dRsR::synapse0x1c54ea0() {
   return (neuron0x1c44bb0()*-0.0206763);
}

double NNfunction_ss_dRsR::synapse0x1c54ee0() {
   return (neuron0x1c45580()*0.042634);
}

double NNfunction_ss_dRsR::synapse0x1c55a80() {
   return (neuron0x1c45f50()*-0.0678741);
}

double NNfunction_ss_dRsR::synapse0x1c55ac0() {
   return (neuron0x1c46920()*0.0499301);
}

double NNfunction_ss_dRsR::synapse0x1c56450() {
   return (neuron0x1c3f470()*0.0218457);
}

double NNfunction_ss_dRsR::synapse0x1c56490() {
   return (neuron0x1c3fe40()*1.38571);
}

double NNfunction_ss_dRsR::synapse0x1c472d0() {
   return (neuron0x1c496b0()*0.0804776);
}

double NNfunction_ss_dRsR::synapse0x1c47310() {
   return (neuron0x1c4a080()*2.27241);
}

double NNfunction_ss_dRsR::synapse0x1c47ca0() {
   return (neuron0x1c4aa50()*0.634291);
}

double NNfunction_ss_dRsR::synapse0x1c47ce0() {
   return (neuron0x1c4b420()*-0.164697);
}

double NNfunction_ss_dRsR::synapse0x1c48670() {
   return (neuron0x1c4bdf0()*-0.0386486);
}

double NNfunction_ss_dRsR::synapse0x1c486b0() {
   return (neuron0x1c4c7c0()*-0.0702291);
}

double NNfunction_ss_dRsR::synapse0x1c5ab90() {
   return (neuron0x1c4d190()*-0.505529);
}

double NNfunction_ss_dRsR::synapse0x1c5abd0() {
   return (neuron0x1c4db60()*0.553595);
}

double NNfunction_ss_dRsR::synapse0x1c5b560() {
   return (neuron0x1c43bf0()*0.0512371);
}

double NNfunction_ss_dRsR::synapse0x1c5b5a0() {
   return (neuron0x1c50740()*-1.21692);
}

double NNfunction_ss_dRsR::synapse0x1c5bf30() {
   return (neuron0x1c51110()*0.0554854);
}

double NNfunction_ss_dRsR::synapse0x1c5bf70() {
   return (neuron0x1c51ae0()*0.053641);
}

double NNfunction_ss_dRsR::synapse0x1c5c900() {
   return (neuron0x1c524b0()*-0.0363745);
}

double NNfunction_ss_dRsR::synapse0x1c5c940() {
   return (neuron0x1c52e80()*0.0631306);
}

double NNfunction_ss_dRsR::synapse0x1c387f0() {
   return (neuron0x1c53850()*2.36305);
}

double NNfunction_ss_dRsR::synapse0x1c38830() {
   return (neuron0x1c54220()*-0.0347535);
}

double NNfunction_ss_dRsR::synapse0x1c4c0a0() {
   return (neuron0x1c54bf0()*-0.029059);
}

double NNfunction_ss_dRsR::synapse0x1c4c0e0() {
   return (neuron0x1c557d0()*-2.83342);
}

double NNfunction_ss_dRsR::synapse0x1c5d020() {
   return (neuron0x1c561a0()*2.41982);
}

double NNfunction_ss_dRsR::synapse0x1c5d060() {
   return (neuron0x1c47020()*-0.0576086);
}

double NNfunction_ss_dRsR::synapse0x1c5d0a0() {
   return (neuron0x1c479f0()*0.0341528);
}

double NNfunction_ss_dRsR::synapse0x1c5d0e0() {
   return (neuron0x1c483c0()*-0.0627768);
}

double NNfunction_ss_dRsR::synapse0x1c63f90() {
   return (neuron0x1c5aa00()*-0.047157);
}

double NNfunction_ss_dRsR::synapse0x1c63fd0() {
   return (neuron0x1c5b2b0()*2.12033);
}

double NNfunction_ss_dRsR::synapse0x1c64010() {
   return (neuron0x1c5bc80()*0.0646285);
}

double NNfunction_ss_dRsR::synapse0x1c64050() {
   return (neuron0x1c5c650()*0.288991);
}

double NNfunction_ss_dRsR::synapse0x1c643d0() {
   return (neuron0x1c385d0()*-0.248889);
}

double NNfunction_ss_dRsR::synapse0x1c64410() {
   return (neuron0x1c38ee0()*-0.328073);
}

double NNfunction_ss_dRsR::synapse0x1c64450() {
   return (neuron0x1c399c0()*-0.143737);
}

double NNfunction_ss_dRsR::synapse0x1c64490() {
   return (neuron0x19f3250()*-0.241357);
}

double NNfunction_ss_dRsR::synapse0x1c644d0() {
   return (neuron0x1c3a7e0()*0.0856889);
}

double NNfunction_ss_dRsR::synapse0x1c64510() {
   return (neuron0x1c3b1b0()*-0.466393);
}

double NNfunction_ss_dRsR::synapse0x1c64550() {
   return (neuron0x1c3bf80()*-0.00693405);
}

double NNfunction_ss_dRsR::synapse0x1c64590() {
   return (neuron0x1c3c950()*-0.478792);
}

double NNfunction_ss_dRsR::synapse0x1c645d0() {
   return (neuron0x1c3d320()*0.244907);
}

double NNfunction_ss_dRsR::synapse0x1c64610() {
   return (neuron0x1c3de00()*0.155968);
}

double NNfunction_ss_dRsR::synapse0x1c64650() {
   return (neuron0x1c3e7d0()*-0.455154);
}

double NNfunction_ss_dRsR::synapse0x1c64690() {
   return (neuron0x1c3b8b0()*-0.337998);
}

double NNfunction_ss_dRsR::synapse0x1c646d0() {
   return (neuron0x1c40380()*0.286426);
}

double NNfunction_ss_dRsR::synapse0x1c64710() {
   return (neuron0x1c40d50()*0.245347);
}

double NNfunction_ss_dRsR::synapse0x1c64750() {
   return (neuron0x1c41720()*-0.117753);
}

double NNfunction_ss_dRsR::synapse0x1c64790() {
   return (neuron0x1c420f0()*-0.0380353);
}

double NNfunction_ss_dRsR::synapse0x1c64220() {
   return (neuron0x1c43f00()*-0.387204);
}

double NNfunction_ss_dRsR::synapse0x1c64260() {
   return (neuron0x1c441e0()*-0.0125534);
}

double NNfunction_ss_dRsR::synapse0x1c648e0() {
   return (neuron0x1c44bb0()*0.0433758);
}

double NNfunction_ss_dRsR::synapse0x1c64920() {
   return (neuron0x1c45580()*-0.38538);
}

double NNfunction_ss_dRsR::synapse0x1c64960() {
   return (neuron0x1c45f50()*-0.252504);
}

double NNfunction_ss_dRsR::synapse0x1c649a0() {
   return (neuron0x1c46920()*-0.28518);
}

double NNfunction_ss_dRsR::synapse0x1c649e0() {
   return (neuron0x1c3f470()*-0.600335);
}

double NNfunction_ss_dRsR::synapse0x1c64a20() {
   return (neuron0x1c3fe40()*-0.100828);
}

double NNfunction_ss_dRsR::synapse0x1c64a60() {
   return (neuron0x1c496b0()*-0.131806);
}

double NNfunction_ss_dRsR::synapse0x1c64aa0() {
   return (neuron0x1c4a080()*0.157043);
}

double NNfunction_ss_dRsR::synapse0x1c64ae0() {
   return (neuron0x1c4aa50()*-0.132778);
}

double NNfunction_ss_dRsR::synapse0x1c64b20() {
   return (neuron0x1c4b420()*-0.114074);
}

double NNfunction_ss_dRsR::synapse0x1c64b60() {
   return (neuron0x1c4bdf0()*-0.148128);
}

double NNfunction_ss_dRsR::synapse0x1c64ba0() {
   return (neuron0x1c4c7c0()*0.0267358);
}

double NNfunction_ss_dRsR::synapse0x1c64be0() {
   return (neuron0x1c4d190()*-0.0622065);
}

double NNfunction_ss_dRsR::synapse0x1c64c20() {
   return (neuron0x1c4db60()*-0.497236);
}

double NNfunction_ss_dRsR::synapse0x1c647d0() {
   return (neuron0x1c43bf0()*-0.233182);
}

double NNfunction_ss_dRsR::synapse0x1c64810() {
   return (neuron0x1c50740()*0.189481);
}

double NNfunction_ss_dRsR::synapse0x1c64850() {
   return (neuron0x1c51110()*-0.374486);
}

double NNfunction_ss_dRsR::synapse0x1c64890() {
   return (neuron0x1c51ae0()*-0.144671);
}

double NNfunction_ss_dRsR::synapse0x1c64e70() {
   return (neuron0x1c524b0()*0.21647);
}

double NNfunction_ss_dRsR::synapse0x1c64eb0() {
   return (neuron0x1c52e80()*-0.0470204);
}

double NNfunction_ss_dRsR::synapse0x1c64ef0() {
   return (neuron0x1c53850()*-0.369915);
}

double NNfunction_ss_dRsR::synapse0x1c64f30() {
   return (neuron0x1c54220()*-0.42006);
}

double NNfunction_ss_dRsR::synapse0x1c64f70() {
   return (neuron0x1c54bf0()*-0.207313);
}

double NNfunction_ss_dRsR::synapse0x1c64fb0() {
   return (neuron0x1c557d0()*-0.488773);
}

double NNfunction_ss_dRsR::synapse0x1c64ff0() {
   return (neuron0x1c561a0()*0.0137525);
}

double NNfunction_ss_dRsR::synapse0x1c65030() {
   return (neuron0x1c47020()*-0.526862);
}

double NNfunction_ss_dRsR::synapse0x1c65070() {
   return (neuron0x1c479f0()*-0.183454);
}

double NNfunction_ss_dRsR::synapse0x1c650b0() {
   return (neuron0x1c483c0()*-0.493864);
}

double NNfunction_ss_dRsR::synapse0x1c650f0() {
   return (neuron0x1c5aa00()*0.129867);
}

double NNfunction_ss_dRsR::synapse0x1c65130() {
   return (neuron0x1c5b2b0()*0.0236795);
}

double NNfunction_ss_dRsR::synapse0x1c65170() {
   return (neuron0x1c5bc80()*-0.156276);
}

double NNfunction_ss_dRsR::synapse0x1c651b0() {
   return (neuron0x1c5c650()*-0.636138);
}

double NNfunction_ss_dRsR::synapse0x1c65530() {
   return (neuron0x1c385d0()*0.156455);
}

double NNfunction_ss_dRsR::synapse0x1c65570() {
   return (neuron0x1c38ee0()*-0.152443);
}

double NNfunction_ss_dRsR::synapse0x1c655b0() {
   return (neuron0x1c399c0()*-0.208258);
}

double NNfunction_ss_dRsR::synapse0x1c655f0() {
   return (neuron0x19f3250()*-0.400328);
}

double NNfunction_ss_dRsR::synapse0x1c65630() {
   return (neuron0x1c3a7e0()*0.0555734);
}

double NNfunction_ss_dRsR::synapse0x1c65670() {
   return (neuron0x1c3b1b0()*1.34579);
}

double NNfunction_ss_dRsR::synapse0x1c656b0() {
   return (neuron0x1c3bf80()*-0.0919298);
}

double NNfunction_ss_dRsR::synapse0x1c656f0() {
   return (neuron0x1c3c950()*0.308885);
}

double NNfunction_ss_dRsR::synapse0x1c65730() {
   return (neuron0x1c3d320()*0.431302);
}

double NNfunction_ss_dRsR::synapse0x1c65770() {
   return (neuron0x1c3de00()*0.644379);
}

double NNfunction_ss_dRsR::synapse0x1c657b0() {
   return (neuron0x1c3e7d0()*0.819887);
}

double NNfunction_ss_dRsR::synapse0x1c657f0() {
   return (neuron0x1c3b8b0()*0.209748);
}

double NNfunction_ss_dRsR::synapse0x1c65830() {
   return (neuron0x1c40380()*0.144937);
}

double NNfunction_ss_dRsR::synapse0x1c65870() {
   return (neuron0x1c40d50()*-0.289275);
}

double NNfunction_ss_dRsR::synapse0x1c658b0() {
   return (neuron0x1c41720()*0.317229);
}

double NNfunction_ss_dRsR::synapse0x1c658f0() {
   return (neuron0x1c420f0()*-0.849218);
}

double NNfunction_ss_dRsR::synapse0x1c65380() {
   return (neuron0x1c43f00()*-0.204036);
}

double NNfunction_ss_dRsR::synapse0x1c653c0() {
   return (neuron0x1c441e0()*-0.420298);
}

double NNfunction_ss_dRsR::synapse0x1c65a40() {
   return (neuron0x1c44bb0()*-0.20217);
}

double NNfunction_ss_dRsR::synapse0x1c65a80() {
   return (neuron0x1c45580()*-0.0284924);
}

double NNfunction_ss_dRsR::synapse0x1c65ac0() {
   return (neuron0x1c45f50()*-0.430493);
}

double NNfunction_ss_dRsR::synapse0x1c65b00() {
   return (neuron0x1c46920()*-0.195188);
}

double NNfunction_ss_dRsR::synapse0x1c65b40() {
   return (neuron0x1c3f470()*0.0916957);
}

double NNfunction_ss_dRsR::synapse0x1c65b80() {
   return (neuron0x1c3fe40()*-0.539949);
}

double NNfunction_ss_dRsR::synapse0x1c65bc0() {
   return (neuron0x1c496b0()*0.0830475);
}

double NNfunction_ss_dRsR::synapse0x1c65c00() {
   return (neuron0x1c4a080()*1.99828);
}

double NNfunction_ss_dRsR::synapse0x1c65c40() {
   return (neuron0x1c4aa50()*-0.0357546);
}

double NNfunction_ss_dRsR::synapse0x1c65c80() {
   return (neuron0x1c4b420()*-2.50993);
}

double NNfunction_ss_dRsR::synapse0x1c65cc0() {
   return (neuron0x1c4bdf0()*-0.00520926);
}

double NNfunction_ss_dRsR::synapse0x1c65d00() {
   return (neuron0x1c4c7c0()*0.0637739);
}

double NNfunction_ss_dRsR::synapse0x1c65d40() {
   return (neuron0x1c4d190()*0.299868);
}

double NNfunction_ss_dRsR::synapse0x1c65d80() {
   return (neuron0x1c4db60()*-0.735119);
}

double NNfunction_ss_dRsR::synapse0x1c65930() {
   return (neuron0x1c43bf0()*-0.235826);
}

double NNfunction_ss_dRsR::synapse0x1c65970() {
   return (neuron0x1c50740()*-0.29784);
}

double NNfunction_ss_dRsR::synapse0x1c659b0() {
   return (neuron0x1c51110()*-0.0878469);
}

double NNfunction_ss_dRsR::synapse0x1c659f0() {
   return (neuron0x1c51ae0()*-0.213474);
}

double NNfunction_ss_dRsR::synapse0x1c65fd0() {
   return (neuron0x1c524b0()*0.00438054);
}

double NNfunction_ss_dRsR::synapse0x1c66010() {
   return (neuron0x1c52e80()*-0.0865766);
}

double NNfunction_ss_dRsR::synapse0x1c66050() {
   return (neuron0x1c53850()*-1.21828);
}

double NNfunction_ss_dRsR::synapse0x1c66090() {
   return (neuron0x1c54220()*-0.0370972);
}

double NNfunction_ss_dRsR::synapse0x1c660d0() {
   return (neuron0x1c54bf0()*0.174935);
}

double NNfunction_ss_dRsR::synapse0x1c66110() {
   return (neuron0x1c557d0()*0.0245596);
}

double NNfunction_ss_dRsR::synapse0x1c66150() {
   return (neuron0x1c561a0()*-1.82059);
}

double NNfunction_ss_dRsR::synapse0x1c66190() {
   return (neuron0x1c47020()*-0.363185);
}

double NNfunction_ss_dRsR::synapse0x1c661d0() {
   return (neuron0x1c479f0()*-0.586102);
}

double NNfunction_ss_dRsR::synapse0x1c66210() {
   return (neuron0x1c483c0()*-0.0547757);
}

double NNfunction_ss_dRsR::synapse0x1c66250() {
   return (neuron0x1c5aa00()*-0.173237);
}

double NNfunction_ss_dRsR::synapse0x1c66290() {
   return (neuron0x1c5b2b0()*-0.402027);
}

double NNfunction_ss_dRsR::synapse0x1c662d0() {
   return (neuron0x1c5bc80()*-0.426312);
}

double NNfunction_ss_dRsR::synapse0x1c66310() {
   return (neuron0x1c5c650()*-0.615983);
}

double NNfunction_ss_dRsR::synapse0x1c66690() {
   return (neuron0x1c385d0()*-0.31734);
}

double NNfunction_ss_dRsR::synapse0x1c666d0() {
   return (neuron0x1c38ee0()*0.2601);
}

double NNfunction_ss_dRsR::synapse0x1c66710() {
   return (neuron0x1c399c0()*0.0438054);
}

double NNfunction_ss_dRsR::synapse0x1c66750() {
   return (neuron0x19f3250()*0.407614);
}

double NNfunction_ss_dRsR::synapse0x1c66790() {
   return (neuron0x1c3a7e0()*0.0723779);
}

double NNfunction_ss_dRsR::synapse0x1c667d0() {
   return (neuron0x1c3b1b0()*0.061579);
}

double NNfunction_ss_dRsR::synapse0x1c66810() {
   return (neuron0x1c3bf80()*-0.144972);
}

double NNfunction_ss_dRsR::synapse0x1c66850() {
   return (neuron0x1c3c950()*0.542592);
}

double NNfunction_ss_dRsR::synapse0x1c66890() {
   return (neuron0x1c3d320()*-0.247078);
}

double NNfunction_ss_dRsR::synapse0x1c668d0() {
   return (neuron0x1c3de00()*0.411341);
}

double NNfunction_ss_dRsR::synapse0x1c66910() {
   return (neuron0x1c3e7d0()*0.444209);
}

double NNfunction_ss_dRsR::synapse0x1c66950() {
   return (neuron0x1c3b8b0()*0.304631);
}

double NNfunction_ss_dRsR::synapse0x1c66990() {
   return (neuron0x1c40380()*-0.0211011);
}

double NNfunction_ss_dRsR::synapse0x1c669d0() {
   return (neuron0x1c40d50()*0.351723);
}

double NNfunction_ss_dRsR::synapse0x1c66a10() {
   return (neuron0x1c41720()*-0.126117);
}

double NNfunction_ss_dRsR::synapse0x1c66a50() {
   return (neuron0x1c420f0()*0.185923);
}

double NNfunction_ss_dRsR::synapse0x1c664e0() {
   return (neuron0x1c43f00()*0.420004);
}

double NNfunction_ss_dRsR::synapse0x1c66520() {
   return (neuron0x1c441e0()*0.262073);
}

double NNfunction_ss_dRsR::synapse0x1c66ba0() {
   return (neuron0x1c44bb0()*-0.322414);
}

double NNfunction_ss_dRsR::synapse0x1c66be0() {
   return (neuron0x1c45580()*0.300593);
}

double NNfunction_ss_dRsR::synapse0x1c66c20() {
   return (neuron0x1c45f50()*0.396031);
}

double NNfunction_ss_dRsR::synapse0x1c66c60() {
   return (neuron0x1c46920()*0.0379861);
}

double NNfunction_ss_dRsR::synapse0x1c66ca0() {
   return (neuron0x1c3f470()*-0.153066);
}

double NNfunction_ss_dRsR::synapse0x1c66ce0() {
   return (neuron0x1c3fe40()*-0.019298);
}

double NNfunction_ss_dRsR::synapse0x1c66d20() {
   return (neuron0x1c496b0()*-0.309857);
}

double NNfunction_ss_dRsR::synapse0x1c66d60() {
   return (neuron0x1c4a080()*0.11056);
}

double NNfunction_ss_dRsR::synapse0x1c66da0() {
   return (neuron0x1c4aa50()*0.340312);
}

double NNfunction_ss_dRsR::synapse0x1c66de0() {
   return (neuron0x1c4b420()*0.34417);
}

double NNfunction_ss_dRsR::synapse0x1c66e20() {
   return (neuron0x1c4bdf0()*-0.00923813);
}

double NNfunction_ss_dRsR::synapse0x1c66e60() {
   return (neuron0x1c4c7c0()*-0.357663);
}

double NNfunction_ss_dRsR::synapse0x1c66ea0() {
   return (neuron0x1c4d190()*0.276151);
}

double NNfunction_ss_dRsR::synapse0x1c66ee0() {
   return (neuron0x1c4db60()*0.0610867);
}

double NNfunction_ss_dRsR::synapse0x1c66a90() {
   return (neuron0x1c43bf0()*0.798577);
}

double NNfunction_ss_dRsR::synapse0x1c66ad0() {
   return (neuron0x1c50740()*-0.00422123);
}

double NNfunction_ss_dRsR::synapse0x1c66b10() {
   return (neuron0x1c51110()*-0.0160227);
}

double NNfunction_ss_dRsR::synapse0x1c66b50() {
   return (neuron0x1c51ae0()*0.266366);
}

double NNfunction_ss_dRsR::synapse0x1c67130() {
   return (neuron0x1c524b0()*0.175947);
}

double NNfunction_ss_dRsR::synapse0x1c67170() {
   return (neuron0x1c52e80()*0.22451);
}

double NNfunction_ss_dRsR::synapse0x1c671b0() {
   return (neuron0x1c53850()*0.456773);
}

double NNfunction_ss_dRsR::synapse0x1c671f0() {
   return (neuron0x1c54220()*-0.259033);
}

double NNfunction_ss_dRsR::synapse0x1c67230() {
   return (neuron0x1c54bf0()*0.263313);
}

double NNfunction_ss_dRsR::synapse0x1c67270() {
   return (neuron0x1c557d0()*-0.0157356);
}

double NNfunction_ss_dRsR::synapse0x1c672b0() {
   return (neuron0x1c561a0()*0.352057);
}

double NNfunction_ss_dRsR::synapse0x1c672f0() {
   return (neuron0x1c47020()*0.352383);
}

double NNfunction_ss_dRsR::synapse0x1c67330() {
   return (neuron0x1c479f0()*0.123628);
}

double NNfunction_ss_dRsR::synapse0x1c67370() {
   return (neuron0x1c483c0()*0.365015);
}

double NNfunction_ss_dRsR::synapse0x1c673b0() {
   return (neuron0x1c5aa00()*-0.052154);
}

double NNfunction_ss_dRsR::synapse0x1c673f0() {
   return (neuron0x1c5b2b0()*0.145788);
}

double NNfunction_ss_dRsR::synapse0x1c67430() {
   return (neuron0x1c5bc80()*0.134226);
}

double NNfunction_ss_dRsR::synapse0x1c67470() {
   return (neuron0x1c5c650()*0.21804);
}

double NNfunction_ss_dRsR::synapse0x1c38590() {
   return (neuron0x1c63850()*11.054);
}

double NNfunction_ss_dRsR::synapse0x1c676d0() {
   return (neuron0x1c63bf0()*-9.47022);
}

double NNfunction_ss_dRsR::synapse0x1c67710() {
   return (neuron0x1c64090()*0.00328059);
}

double NNfunction_ss_dRsR::synapse0x1c67750() {
   return (neuron0x1c651f0()*2.71339);
}

double NNfunction_ss_dRsR::synapse0x1c67790() {
   return (neuron0x1c66350()*1.90771);
}

