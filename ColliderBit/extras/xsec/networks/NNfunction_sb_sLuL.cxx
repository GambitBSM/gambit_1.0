#include "NNfunction_sb_sLuL.h"
#include <cmath>

double NNfunction_sb_sLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9729)/15.0207;
   input1 = (in1 - 50.0835)/746.178;
   input2 = (in2 - 375.058)/476.352;
   input3 = (in3 - 255.119)/601.155;
   input4 = (in4 - 737.783)/687.908;
   input5 = (in5 - 648.267)/665.654;
   input6 = (in6 - 652.669)/666.704;
   input7 = (in7 - 651.07)/666.623;
   input8 = (in8 - 655.778)/702.836;
   input9 = (in9 - 643.167)/685.512;
   input10 = (in10 - 656.489)/712.31;
   input11 = (in11 - 548.649)/338.094;
   input12 = (in12 - 547.856)/337.529;
   input13 = (in13 - 525.186)/359.876;
   input14 = (in14 - 668.915)/542.264;
   input15 = (in15 - 669.593)/544.491;
   input16 = (in16 - 472.475)/381.294;
   input17 = (in17 - 697.563)/615.127;
   input18 = (in18 - 691.056)/612.466;
   input19 = (in19 - 693.56)/602.956;
   input20 = (in20 - -198.812)/401.884;
   input21 = (in21 - -254.314)/882.843;
   input22 = (in22 - 3.38573)/887.665;
   input23 = (in23 - -17.4781)/493.815;
   switch(index) {
     case 0:
         return neuron0x339d030();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLuL::Value(int index, double* input) {
   input0 = (input[0] - 22.9729)/15.0207;
   input1 = (input[1] - 50.0835)/746.178;
   input2 = (input[2] - 375.058)/476.352;
   input3 = (input[3] - 255.119)/601.155;
   input4 = (input[4] - 737.783)/687.908;
   input5 = (input[5] - 648.267)/665.654;
   input6 = (input[6] - 652.669)/666.704;
   input7 = (input[7] - 651.07)/666.623;
   input8 = (input[8] - 655.778)/702.836;
   input9 = (input[9] - 643.167)/685.512;
   input10 = (input[10] - 656.489)/712.31;
   input11 = (input[11] - 548.649)/338.094;
   input12 = (input[12] - 547.856)/337.529;
   input13 = (input[13] - 525.186)/359.876;
   input14 = (input[14] - 668.915)/542.264;
   input15 = (input[15] - 669.593)/544.491;
   input16 = (input[16] - 472.475)/381.294;
   input17 = (input[17] - 697.563)/615.127;
   input18 = (input[18] - 691.056)/612.466;
   input19 = (input[19] - 693.56)/602.956;
   input20 = (input[20] - -198.812)/401.884;
   input21 = (input[21] - -254.314)/882.843;
   input22 = (input[22] - 3.38573)/887.665;
   input23 = (input[23] - -17.4781)/493.815;
   switch(index) {
     case 0:
         return neuron0x339d030();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLuL::neuron0x33691f0() {
   return input0;
}

double NNfunction_sb_sLuL::neuron0x33694a0() {
   return input1;
}

double NNfunction_sb_sLuL::neuron0x33697e0() {
   return input2;
}

double NNfunction_sb_sLuL::neuron0x3369b20() {
   return input3;
}

double NNfunction_sb_sLuL::neuron0x3369e60() {
   return input4;
}

double NNfunction_sb_sLuL::neuron0x336a1a0() {
   return input5;
}

double NNfunction_sb_sLuL::neuron0x336a4e0() {
   return input6;
}

double NNfunction_sb_sLuL::neuron0x336a820() {
   return input7;
}

double NNfunction_sb_sLuL::neuron0x336ab60() {
   return input8;
}

double NNfunction_sb_sLuL::neuron0x336aea0() {
   return input9;
}

double NNfunction_sb_sLuL::neuron0x336b1e0() {
   return input10;
}

double NNfunction_sb_sLuL::neuron0x336b520() {
   return input11;
}

double NNfunction_sb_sLuL::neuron0x336b860() {
   return input12;
}

double NNfunction_sb_sLuL::neuron0x336bba0() {
   return input13;
}

double NNfunction_sb_sLuL::neuron0x336bee0() {
   return input14;
}

double NNfunction_sb_sLuL::neuron0x336c220() {
   return input15;
}

double NNfunction_sb_sLuL::neuron0x336c560() {
   return input16;
}

double NNfunction_sb_sLuL::neuron0x336cac0() {
   return input17;
}

double NNfunction_sb_sLuL::neuron0x336cce0() {
   return input18;
}

double NNfunction_sb_sLuL::neuron0x336d020() {
   return input19;
}

double NNfunction_sb_sLuL::neuron0x336d360() {
   return input20;
}

double NNfunction_sb_sLuL::neuron0x336d6a0() {
   return input21;
}

double NNfunction_sb_sLuL::neuron0x336d9e0() {
   return input22;
}

double NNfunction_sb_sLuL::neuron0x336dd20() {
   return input23;
}

double NNfunction_sb_sLuL::input0x336e190() {
   double input = -1.50612;
   input += synapse0x3369170();
   input += synapse0x33691b0();
   input += synapse0x336e440();
   input += synapse0x336e480();
   input += synapse0x336e4c0();
   input += synapse0x336e500();
   input += synapse0x336e540();
   input += synapse0x336e580();
   input += synapse0x336e5c0();
   input += synapse0x336e600();
   input += synapse0x336e640();
   input += synapse0x336e680();
   input += synapse0x336e6c0();
   input += synapse0x336e700();
   input += synapse0x336e740();
   input += synapse0x336e780();
   input += synapse0x33690e0();
   input += synapse0x3369120();
   input += synapse0x31242b0();
   input += synapse0x31242f0();
   input += synapse0x336e9e0();
   input += synapse0x336ea20();
   input += synapse0x336ea60();
   input += synapse0x336eaa0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x336e190() {
   double input = input0x336e190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x336eae0() {
   double input = 0.598674;
   input += synapse0x336ee20();
   input += synapse0x336ee60();
   input += synapse0x336eea0();
   input += synapse0x336eee0();
   input += synapse0x336ef20();
   input += synapse0x336ef60();
   input += synapse0x336efa0();
   input += synapse0x336efe0();
   input += synapse0x336f020();
   input += synapse0x336e8d0();
   input += synapse0x336e910();
   input += synapse0x336e950();
   input += synapse0x336e990();
   input += synapse0x336f270();
   input += synapse0x336f2b0();
   input += synapse0x336f2f0();
   input += synapse0x336ec70();
   input += synapse0x336ecb0();
   input += synapse0x336f440();
   input += synapse0x336f480();
   input += synapse0x336f4c0();
   input += synapse0x336f500();
   input += synapse0x336f540();
   input += synapse0x336f580();
   return input;
}

double NNfunction_sb_sLuL::neuron0x336eae0() {
   double input = input0x336eae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x336f5c0() {
   double input = -1.1542;
   input += synapse0x336f900();
   input += synapse0x336f940();
   input += synapse0x336f980();
   input += synapse0x336f9c0();
   input += synapse0x336fa00();
   input += synapse0x336fa40();
   input += synapse0x336fa80();
   input += synapse0x336fac0();
   input += synapse0x336fb00();
   input += synapse0x336fb40();
   input += synapse0x336fb80();
   input += synapse0x336fbc0();
   input += synapse0x336fc00();
   input += synapse0x336fc40();
   input += synapse0x336fc80();
   input += synapse0x336fcc0();
   input += synapse0x336f750();
   input += synapse0x336f790();
   input += synapse0x3358260();
   input += synapse0x31321b0();
   input += synapse0x31321f0();
   input += synapse0x324d700();
   input += synapse0x324d740();
   input += synapse0x3368f50();
   return input;
}

double NNfunction_sb_sLuL::neuron0x336f5c0() {
   double input = input0x336f5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3132910() {
   double input = 0.038098;
   input += synapse0x3132aa0();
   input += synapse0x336f180();
   input += synapse0x336f1c0();
   input += synapse0x336f200();
   input += synapse0x336fe10();
   input += synapse0x336fe50();
   input += synapse0x336fe90();
   input += synapse0x336fed0();
   input += synapse0x336ff10();
   input += synapse0x336ff50();
   input += synapse0x336ff90();
   input += synapse0x336ffd0();
   input += synapse0x3370010();
   input += synapse0x3370050();
   input += synapse0x3370090();
   input += synapse0x33700d0();
   input += synapse0x3368f90();
   input += synapse0x3368fd0();
   input += synapse0x3369010();
   input += synapse0x3370220();
   input += synapse0x3370260();
   input += synapse0x33702a0();
   input += synapse0x33702e0();
   input += synapse0x3370320();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3132910() {
   double input = input0x3132910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3370360() {
   double input = 0.629844;
   input += synapse0x33706a0();
   input += synapse0x33706e0();
   input += synapse0x3370720();
   input += synapse0x3370760();
   input += synapse0x33707a0();
   input += synapse0x33707e0();
   input += synapse0x3370820();
   input += synapse0x3370860();
   input += synapse0x33708a0();
   input += synapse0x33708e0();
   input += synapse0x3370920();
   input += synapse0x3370960();
   input += synapse0x33709a0();
   input += synapse0x33709e0();
   input += synapse0x3370a20();
   input += synapse0x3370a60();
   input += synapse0x33704f0();
   input += synapse0x3370530();
   input += synapse0x3370bb0();
   input += synapse0x3370bf0();
   input += synapse0x3370c30();
   input += synapse0x3370c70();
   input += synapse0x3370cb0();
   input += synapse0x3370cf0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3370360() {
   double input = input0x3370360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3370d30() {
   double input = -0.982197;
   input += synapse0x3371070();
   input += synapse0x33710b0();
   input += synapse0x33710f0();
   input += synapse0x3371130();
   input += synapse0x3371170();
   input += synapse0x33711b0();
   input += synapse0x33711f0();
   input += synapse0x3371230();
   input += synapse0x3371270();
   input += synapse0x3132500();
   input += synapse0x3132540();
   input += synapse0x3132580();
   input += synapse0x31325c0();
   input += synapse0x3132600();
   input += synapse0x3132640();
   input += synapse0x3132680();
   input += synapse0x3370ec0();
   input += synapse0x3370f00();
   input += synapse0x31327d0();
   input += synapse0x3132810();
   input += synapse0x3132850();
   input += synapse0x3132890();
   input += synapse0x31328d0();
   input += synapse0x3371ac0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3370d30() {
   double input = input0x3370d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3371b00() {
   double input = 0.912919;
   input += synapse0x3371e40();
   input += synapse0x3371e80();
   input += synapse0x3371ec0();
   input += synapse0x3371f00();
   input += synapse0x3371f40();
   input += synapse0x3371f80();
   input += synapse0x3371fc0();
   input += synapse0x3372000();
   input += synapse0x3372040();
   input += synapse0x3372080();
   input += synapse0x33720c0();
   input += synapse0x3372100();
   input += synapse0x3372140();
   input += synapse0x3372180();
   input += synapse0x33721c0();
   input += synapse0x3372200();
   input += synapse0x3371c90();
   input += synapse0x3371cd0();
   input += synapse0x3372350();
   input += synapse0x3372390();
   input += synapse0x33723d0();
   input += synapse0x3372410();
   input += synapse0x3372450();
   input += synapse0x3372490();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3371b00() {
   double input = input0x3371b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33724d0() {
   double input = 0.000330612;
   input += synapse0x3372810();
   input += synapse0x3372850();
   input += synapse0x3372890();
   input += synapse0x33728d0();
   input += synapse0x3372910();
   input += synapse0x3372950();
   input += synapse0x3372990();
   input += synapse0x33729d0();
   input += synapse0x3372a10();
   input += synapse0x3372a50();
   input += synapse0x3372a90();
   input += synapse0x3372ad0();
   input += synapse0x3372b10();
   input += synapse0x3372b50();
   input += synapse0x3372b90();
   input += synapse0x3372bd0();
   input += synapse0x3372660();
   input += synapse0x33726a0();
   input += synapse0x3372d20();
   input += synapse0x3372d60();
   input += synapse0x3372da0();
   input += synapse0x3372de0();
   input += synapse0x3372e20();
   input += synapse0x3372e60();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33724d0() {
   double input = input0x33724d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3372ea0() {
   double input = -1.6508;
   input += synapse0x336c9b0();
   input += synapse0x336c9f0();
   input += synapse0x336ca30();
   input += synapse0x336ca70();
   input += synapse0x33733f0();
   input += synapse0x3373430();
   input += synapse0x3373470();
   input += synapse0x33734b0();
   input += synapse0x33734f0();
   input += synapse0x3373530();
   input += synapse0x3373570();
   input += synapse0x33735b0();
   input += synapse0x33735f0();
   input += synapse0x3373630();
   input += synapse0x3373670();
   input += synapse0x33736b0();
   input += synapse0x3373030();
   input += synapse0x3373070();
   input += synapse0x3373800();
   input += synapse0x3373840();
   input += synapse0x3373880();
   input += synapse0x33738c0();
   input += synapse0x3373900();
   input += synapse0x3373940();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3372ea0() {
   double input = input0x3372ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3373980() {
   double input = -0.653461;
   input += synapse0x3373cc0();
   input += synapse0x3373d00();
   input += synapse0x3373d40();
   input += synapse0x3373d80();
   input += synapse0x3373dc0();
   input += synapse0x3373e00();
   input += synapse0x3373e40();
   input += synapse0x3373e80();
   input += synapse0x3373ec0();
   input += synapse0x3373f00();
   input += synapse0x3373f40();
   input += synapse0x3373f80();
   input += synapse0x3373fc0();
   input += synapse0x3374000();
   input += synapse0x3374040();
   input += synapse0x3374080();
   input += synapse0x3373b10();
   input += synapse0x3373b50();
   input += synapse0x33741d0();
   input += synapse0x3374210();
   input += synapse0x3374250();
   input += synapse0x3374290();
   input += synapse0x33742d0();
   input += synapse0x3374310();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3373980() {
   double input = input0x3373980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3374350() {
   double input = -0.509242;
   input += synapse0x3374690();
   input += synapse0x33746d0();
   input += synapse0x3374710();
   input += synapse0x3374750();
   input += synapse0x3374790();
   input += synapse0x33747d0();
   input += synapse0x3374810();
   input += synapse0x3374850();
   input += synapse0x3374890();
   input += synapse0x33748d0();
   input += synapse0x3374910();
   input += synapse0x3374950();
   input += synapse0x3374990();
   input += synapse0x33749d0();
   input += synapse0x3374a10();
   input += synapse0x3374a50();
   input += synapse0x33744e0();
   input += synapse0x3374520();
   input += synapse0x33712b0();
   input += synapse0x33712f0();
   input += synapse0x3371330();
   input += synapse0x3371370();
   input += synapse0x33713b0();
   input += synapse0x33713f0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3374350() {
   double input = input0x3374350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3371430() {
   double input = -0.910494;
   input += synapse0x3371770();
   input += synapse0x33717b0();
   input += synapse0x33717f0();
   input += synapse0x3371830();
   input += synapse0x3371870();
   input += synapse0x33718b0();
   input += synapse0x33718f0();
   input += synapse0x3371930();
   input += synapse0x3371970();
   input += synapse0x33719b0();
   input += synapse0x33719f0();
   input += synapse0x3371a30();
   input += synapse0x3371a70();
   input += synapse0x3375bb0();
   input += synapse0x3375bf0();
   input += synapse0x3375c30();
   input += synapse0x33715c0();
   input += synapse0x3371600();
   input += synapse0x3375d80();
   input += synapse0x3375dc0();
   input += synapse0x3375e00();
   input += synapse0x3375e40();
   input += synapse0x3375e80();
   input += synapse0x3375ec0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3371430() {
   double input = input0x3371430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3375f00() {
   double input = 0.245883;
   input += synapse0x3376240();
   input += synapse0x3376280();
   input += synapse0x33762c0();
   input += synapse0x3376300();
   input += synapse0x3376340();
   input += synapse0x3376380();
   input += synapse0x33763c0();
   input += synapse0x3376400();
   input += synapse0x3376440();
   input += synapse0x3376480();
   input += synapse0x33764c0();
   input += synapse0x3376500();
   input += synapse0x3376540();
   input += synapse0x3376580();
   input += synapse0x33765c0();
   input += synapse0x3376600();
   input += synapse0x3376090();
   input += synapse0x33760d0();
   input += synapse0x3376750();
   input += synapse0x3376790();
   input += synapse0x33767d0();
   input += synapse0x3376810();
   input += synapse0x3376850();
   input += synapse0x3376890();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3375f00() {
   double input = input0x3375f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33768d0() {
   double input = 0.313786;
   input += synapse0x3376c10();
   input += synapse0x3376c50();
   input += synapse0x3376c90();
   input += synapse0x3376cd0();
   input += synapse0x3376d10();
   input += synapse0x3376d50();
   input += synapse0x3376d90();
   input += synapse0x3376dd0();
   input += synapse0x3376e10();
   input += synapse0x3376e50();
   input += synapse0x3376e90();
   input += synapse0x3376ed0();
   input += synapse0x3376f10();
   input += synapse0x3376f50();
   input += synapse0x3376f90();
   input += synapse0x3376fd0();
   input += synapse0x3376a60();
   input += synapse0x3376aa0();
   input += synapse0x3377120();
   input += synapse0x3377160();
   input += synapse0x33771a0();
   input += synapse0x33771e0();
   input += synapse0x3377220();
   input += synapse0x3377260();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33768d0() {
   double input = input0x33768d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33772a0() {
   double input = -1.91543;
   input += synapse0x33775e0();
   input += synapse0x3377620();
   input += synapse0x3377660();
   input += synapse0x33776a0();
   input += synapse0x33776e0();
   input += synapse0x3377720();
   input += synapse0x3377760();
   input += synapse0x33777a0();
   input += synapse0x33777e0();
   input += synapse0x3377820();
   input += synapse0x3377860();
   input += synapse0x33778a0();
   input += synapse0x33778e0();
   input += synapse0x3377920();
   input += synapse0x3377960();
   input += synapse0x33779a0();
   input += synapse0x3377430();
   input += synapse0x3377470();
   input += synapse0x3377af0();
   input += synapse0x3377b30();
   input += synapse0x3377b70();
   input += synapse0x3377bb0();
   input += synapse0x3377bf0();
   input += synapse0x3377c30();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33772a0() {
   double input = input0x33772a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3377c70() {
   double input = -1.56836;
   input += synapse0x3377fb0();
   input += synapse0x3369380();
   input += synapse0x33693c0();
   input += synapse0x33696c0();
   input += synapse0x3369700();
   input += synapse0x3369a00();
   input += synapse0x3369a40();
   input += synapse0x3369d40();
   input += synapse0x3369d80();
   input += synapse0x336a080();
   input += synapse0x336a0c0();
   input += synapse0x336a3c0();
   input += synapse0x336a400();
   input += synapse0x336a700();
   input += synapse0x336a740();
   input += synapse0x336aa40();
   input += synapse0x336aa80();
   input += synapse0x336ad80();
   input += synapse0x336adc0();
   input += synapse0x336b0c0();
   input += synapse0x336b100();
   input += synapse0x336b400();
   input += synapse0x336b440();
   input += synapse0x336b740();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3377c70() {
   double input = input0x3377c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3379a80() {
   double input = -0.377813;
   input += synapse0x336b780();
   input += synapse0x336c440();
   input += synapse0x336c480();
   input += synapse0x3377e00();
   input += synapse0x3377e40();
   input += synapse0x336c780();
   input += synapse0x336c7c0();
   input += synapse0x3124190();
   input += synapse0x31241d0();
   input += synapse0x336cf00();
   input += synapse0x336cf40();
   input += synapse0x336d240();
   input += synapse0x336d280();
   input += synapse0x336d580();
   input += synapse0x336d5c0();
   input += synapse0x336d8c0();
   input += synapse0x336d900();
   input += synapse0x336dc00();
   input += synapse0x336dc40();
   input += synapse0x336df40();
   input += synapse0x336df80();
   input += synapse0x336ba80();
   input += synapse0x336bac0();
   input += synapse0x3379d20();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3379a80() {
   double input = input0x3379a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3379d60() {
   double input = 0.817138;
   input += synapse0x337a0a0();
   input += synapse0x337a0e0();
   input += synapse0x337a120();
   input += synapse0x337a160();
   input += synapse0x337a1a0();
   input += synapse0x337a1e0();
   input += synapse0x337a220();
   input += synapse0x337a260();
   input += synapse0x337a2a0();
   input += synapse0x337a2e0();
   input += synapse0x337a320();
   input += synapse0x337a360();
   input += synapse0x337a3a0();
   input += synapse0x337a3e0();
   input += synapse0x337a420();
   input += synapse0x337a460();
   input += synapse0x3379ef0();
   input += synapse0x3379f30();
   input += synapse0x337a5b0();
   input += synapse0x337a5f0();
   input += synapse0x337a630();
   input += synapse0x337a670();
   input += synapse0x337a6b0();
   input += synapse0x337a6f0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3379d60() {
   double input = input0x3379d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x337a730() {
   double input = -0.685851;
   input += synapse0x337aa70();
   input += synapse0x337aab0();
   input += synapse0x337aaf0();
   input += synapse0x337ab30();
   input += synapse0x337ab70();
   input += synapse0x337abb0();
   input += synapse0x337abf0();
   input += synapse0x337ac30();
   input += synapse0x337ac70();
   input += synapse0x337acb0();
   input += synapse0x337acf0();
   input += synapse0x337ad30();
   input += synapse0x337ad70();
   input += synapse0x337adb0();
   input += synapse0x337adf0();
   input += synapse0x337ae30();
   input += synapse0x337a8c0();
   input += synapse0x337a900();
   input += synapse0x337af80();
   input += synapse0x337afc0();
   input += synapse0x337b000();
   input += synapse0x337b040();
   input += synapse0x337b080();
   input += synapse0x337b0c0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x337a730() {
   double input = input0x337a730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x337b100() {
   double input = 1.0338;
   input += synapse0x337b440();
   input += synapse0x337b480();
   input += synapse0x337b4c0();
   input += synapse0x337b500();
   input += synapse0x337b540();
   input += synapse0x337b580();
   input += synapse0x337b5c0();
   input += synapse0x337b600();
   input += synapse0x337b640();
   input += synapse0x337b680();
   input += synapse0x337b6c0();
   input += synapse0x337b700();
   input += synapse0x337b740();
   input += synapse0x337b780();
   input += synapse0x337b7c0();
   input += synapse0x337b800();
   input += synapse0x337b290();
   input += synapse0x337b2d0();
   input += synapse0x337b950();
   input += synapse0x337b990();
   input += synapse0x337b9d0();
   input += synapse0x337ba10();
   input += synapse0x337ba50();
   input += synapse0x337ba90();
   return input;
}

double NNfunction_sb_sLuL::neuron0x337b100() {
   double input = input0x337b100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x337bad0() {
   double input = -0.907985;
   input += synapse0x337be10();
   input += synapse0x337be50();
   input += synapse0x337be90();
   input += synapse0x337bed0();
   input += synapse0x337bf10();
   input += synapse0x337bf50();
   input += synapse0x337bf90();
   input += synapse0x337bfd0();
   input += synapse0x337c010();
   input += synapse0x337c050();
   input += synapse0x337c090();
   input += synapse0x337c0d0();
   input += synapse0x337c110();
   input += synapse0x337c150();
   input += synapse0x337c190();
   input += synapse0x337c1d0();
   input += synapse0x337bc60();
   input += synapse0x337bca0();
   input += synapse0x337c320();
   input += synapse0x337c360();
   input += synapse0x337c3a0();
   input += synapse0x337c3e0();
   input += synapse0x337c420();
   input += synapse0x337c460();
   return input;
}

double NNfunction_sb_sLuL::neuron0x337bad0() {
   double input = input0x337bad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x337c4a0() {
   double input = 2.10907;
   input += synapse0x337c7e0();
   input += synapse0x337c820();
   input += synapse0x337c860();
   input += synapse0x337c8a0();
   input += synapse0x337c8e0();
   input += synapse0x337c920();
   input += synapse0x337c960();
   input += synapse0x337c9a0();
   input += synapse0x337c9e0();
   input += synapse0x3374ba0();
   input += synapse0x3374be0();
   input += synapse0x3374c20();
   input += synapse0x3374c60();
   input += synapse0x3374ca0();
   input += synapse0x3374ce0();
   input += synapse0x3374d20();
   input += synapse0x337c630();
   input += synapse0x337c670();
   input += synapse0x3374e70();
   input += synapse0x3374eb0();
   input += synapse0x3374ef0();
   input += synapse0x3374f30();
   input += synapse0x3374f70();
   input += synapse0x3374fb0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x337c4a0() {
   double input = input0x337c4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3374ff0() {
   double input = 0.776731;
   input += synapse0x3375330();
   input += synapse0x3375370();
   input += synapse0x33753b0();
   input += synapse0x33753f0();
   input += synapse0x3375430();
   input += synapse0x3375470();
   input += synapse0x33754b0();
   input += synapse0x33754f0();
   input += synapse0x3375530();
   input += synapse0x3375570();
   input += synapse0x33755b0();
   input += synapse0x33755f0();
   input += synapse0x3375630();
   input += synapse0x3375670();
   input += synapse0x33756b0();
   input += synapse0x33756f0();
   input += synapse0x3375180();
   input += synapse0x33751c0();
   input += synapse0x3375840();
   input += synapse0x3375880();
   input += synapse0x33758c0();
   input += synapse0x3375900();
   input += synapse0x3375940();
   input += synapse0x3375980();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3374ff0() {
   double input = input0x3374ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33759c0() {
   double input = 0.337011;
   input += synapse0x3375b50();
   input += synapse0x337ebe0();
   input += synapse0x337ec20();
   input += synapse0x337ec60();
   input += synapse0x337eca0();
   input += synapse0x337ece0();
   input += synapse0x337ed20();
   input += synapse0x337ed60();
   input += synapse0x337eda0();
   input += synapse0x337ede0();
   input += synapse0x337ee20();
   input += synapse0x337ee60();
   input += synapse0x337eea0();
   input += synapse0x337eee0();
   input += synapse0x337ef20();
   input += synapse0x337ef60();
   input += synapse0x337ea30();
   input += synapse0x337ea70();
   input += synapse0x337f0b0();
   input += synapse0x337f0f0();
   input += synapse0x337f130();
   input += synapse0x337f170();
   input += synapse0x337f1b0();
   input += synapse0x337f1f0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33759c0() {
   double input = input0x33759c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x337f230() {
   double input = 4.43983;
   input += synapse0x337f570();
   input += synapse0x337f5b0();
   input += synapse0x337f5f0();
   input += synapse0x337f630();
   input += synapse0x337f670();
   input += synapse0x337f6b0();
   input += synapse0x337f6f0();
   input += synapse0x337f730();
   input += synapse0x337f770();
   input += synapse0x337f7b0();
   input += synapse0x337f7f0();
   input += synapse0x337f830();
   input += synapse0x337f870();
   input += synapse0x337f8b0();
   input += synapse0x337f8f0();
   input += synapse0x337f930();
   input += synapse0x337f3c0();
   input += synapse0x337f400();
   input += synapse0x337fa80();
   input += synapse0x337fac0();
   input += synapse0x337fb00();
   input += synapse0x337fb40();
   input += synapse0x337fb80();
   input += synapse0x337fbc0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x337f230() {
   double input = input0x337f230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x337fc00() {
   double input = -0.224838;
   input += synapse0x337ff40();
   input += synapse0x337ff80();
   input += synapse0x337ffc0();
   input += synapse0x3380000();
   input += synapse0x3380040();
   input += synapse0x3380080();
   input += synapse0x33800c0();
   input += synapse0x3380100();
   input += synapse0x3380140();
   input += synapse0x3380180();
   input += synapse0x33801c0();
   input += synapse0x3380200();
   input += synapse0x3380240();
   input += synapse0x3380280();
   input += synapse0x33802c0();
   input += synapse0x3380300();
   input += synapse0x337fd90();
   input += synapse0x337fdd0();
   input += synapse0x3380450();
   input += synapse0x3380490();
   input += synapse0x33804d0();
   input += synapse0x3380510();
   input += synapse0x3380550();
   input += synapse0x3380590();
   return input;
}

double NNfunction_sb_sLuL::neuron0x337fc00() {
   double input = input0x337fc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33805d0() {
   double input = 0.032577;
   input += synapse0x3380910();
   input += synapse0x3380950();
   input += synapse0x3380990();
   input += synapse0x33809d0();
   input += synapse0x3380a10();
   input += synapse0x3380a50();
   input += synapse0x3380a90();
   input += synapse0x3380ad0();
   input += synapse0x3380b10();
   input += synapse0x3380b50();
   input += synapse0x3380b90();
   input += synapse0x3380bd0();
   input += synapse0x3380c10();
   input += synapse0x3380c50();
   input += synapse0x3380c90();
   input += synapse0x3380cd0();
   input += synapse0x3380760();
   input += synapse0x33807a0();
   input += synapse0x3380e20();
   input += synapse0x3380e60();
   input += synapse0x3380ea0();
   input += synapse0x3380ee0();
   input += synapse0x3380f20();
   input += synapse0x3380f60();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33805d0() {
   double input = input0x33805d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3380fa0() {
   double input = 0.31917;
   input += synapse0x33812e0();
   input += synapse0x3381320();
   input += synapse0x3381360();
   input += synapse0x33813a0();
   input += synapse0x33813e0();
   input += synapse0x3381420();
   input += synapse0x3381460();
   input += synapse0x33814a0();
   input += synapse0x33814e0();
   input += synapse0x3381520();
   input += synapse0x3381560();
   input += synapse0x33815a0();
   input += synapse0x33815e0();
   input += synapse0x3381620();
   input += synapse0x3381660();
   input += synapse0x33816a0();
   input += synapse0x3381130();
   input += synapse0x3381170();
   input += synapse0x33817f0();
   input += synapse0x3381830();
   input += synapse0x3381870();
   input += synapse0x33818b0();
   input += synapse0x33818f0();
   input += synapse0x3381930();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3380fa0() {
   double input = input0x3380fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3381970() {
   double input = 1.13207;
   input += synapse0x3381cb0();
   input += synapse0x3381cf0();
   input += synapse0x3381d30();
   input += synapse0x3381d70();
   input += synapse0x3381db0();
   input += synapse0x3381df0();
   input += synapse0x3381e30();
   input += synapse0x3381e70();
   input += synapse0x3381eb0();
   input += synapse0x3381ef0();
   input += synapse0x3381f30();
   input += synapse0x3381f70();
   input += synapse0x3381fb0();
   input += synapse0x3381ff0();
   input += synapse0x3382030();
   input += synapse0x3382070();
   input += synapse0x3381b00();
   input += synapse0x3381b40();
   input += synapse0x33821c0();
   input += synapse0x3382200();
   input += synapse0x3382240();
   input += synapse0x3382280();
   input += synapse0x33822c0();
   input += synapse0x3382300();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3381970() {
   double input = input0x3381970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3382340() {
   double input = -0.153046;
   input += synapse0x3382680();
   input += synapse0x33826c0();
   input += synapse0x3382700();
   input += synapse0x3382740();
   input += synapse0x3382780();
   input += synapse0x33827c0();
   input += synapse0x3382800();
   input += synapse0x3382840();
   input += synapse0x3382880();
   input += synapse0x33828c0();
   input += synapse0x3382900();
   input += synapse0x3382940();
   input += synapse0x3382980();
   input += synapse0x33829c0();
   input += synapse0x3382a00();
   input += synapse0x3382a40();
   input += synapse0x33824d0();
   input += synapse0x3382510();
   input += synapse0x3382b90();
   input += synapse0x3382bd0();
   input += synapse0x3382c10();
   input += synapse0x3382c50();
   input += synapse0x3382c90();
   input += synapse0x3382cd0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3382340() {
   double input = input0x3382340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3382d10() {
   double input = 5.20338;
   input += synapse0x3383050();
   input += synapse0x3383090();
   input += synapse0x33830d0();
   input += synapse0x3383110();
   input += synapse0x3383150();
   input += synapse0x3383190();
   input += synapse0x33831d0();
   input += synapse0x3383210();
   input += synapse0x3383250();
   input += synapse0x3383290();
   input += synapse0x33832d0();
   input += synapse0x3383310();
   input += synapse0x3383350();
   input += synapse0x3383390();
   input += synapse0x33833d0();
   input += synapse0x3383410();
   input += synapse0x3382ea0();
   input += synapse0x3382ee0();
   input += synapse0x3383560();
   input += synapse0x33835a0();
   input += synapse0x33835e0();
   input += synapse0x3383620();
   input += synapse0x3383660();
   input += synapse0x33836a0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3382d10() {
   double input = input0x3382d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33836e0() {
   double input = 0.669082;
   input += synapse0x3383a20();
   input += synapse0x3377ff0();
   input += synapse0x3378030();
   input += synapse0x3378070();
   input += synapse0x33782c0();
   input += synapse0x3378300();
   input += synapse0x3378340();
   input += synapse0x3378590();
   input += synapse0x33785d0();
   input += synapse0x3378820();
   input += synapse0x3378860();
   input += synapse0x33788a0();
   input += synapse0x3378af0();
   input += synapse0x3378b30();
   input += synapse0x3378d80();
   input += synapse0x3378dc0();
   input += synapse0x3383870();
   input += synapse0x33838b0();
   input += synapse0x3378f10();
   input += synapse0x3379420();
   input += synapse0x3379460();
   input += synapse0x33794a0();
   input += synapse0x33796f0();
   input += synapse0x3379730();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33836e0() {
   double input = input0x33836e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3379770() {
   double input = -0.437218;
   input += synapse0x3378fe0();
   input += synapse0x3379020();
   input += synapse0x3379060();
   input += synapse0x33790a0();
   input += synapse0x3379a20();
   input += synapse0x3385d70();
   input += synapse0x3385db0();
   input += synapse0x3385df0();
   input += synapse0x3385e30();
   input += synapse0x3385e70();
   input += synapse0x3385eb0();
   input += synapse0x3385ef0();
   input += synapse0x3385f30();
   input += synapse0x3385f70();
   input += synapse0x3385fb0();
   input += synapse0x3385ff0();
   input += synapse0x3379900();
   input += synapse0x3379940();
   input += synapse0x3386140();
   input += synapse0x3386180();
   input += synapse0x33861c0();
   input += synapse0x3386200();
   input += synapse0x3386240();
   input += synapse0x3386280();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3379770() {
   double input = input0x3379770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33862c0() {
   double input = -0.297899;
   input += synapse0x3386600();
   input += synapse0x3386640();
   input += synapse0x3386680();
   input += synapse0x33866c0();
   input += synapse0x3386700();
   input += synapse0x3386740();
   input += synapse0x3386780();
   input += synapse0x33867c0();
   input += synapse0x3386800();
   input += synapse0x3386840();
   input += synapse0x3386880();
   input += synapse0x33868c0();
   input += synapse0x3386900();
   input += synapse0x3386940();
   input += synapse0x3386980();
   input += synapse0x33869c0();
   input += synapse0x3386450();
   input += synapse0x3386490();
   input += synapse0x3386b10();
   input += synapse0x3386b50();
   input += synapse0x3386b90();
   input += synapse0x3386bd0();
   input += synapse0x3386c10();
   input += synapse0x3386c50();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33862c0() {
   double input = input0x33862c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3386c90() {
   double input = 1.08516;
   input += synapse0x3386fd0();
   input += synapse0x3387010();
   input += synapse0x3387050();
   input += synapse0x3387090();
   input += synapse0x33870d0();
   input += synapse0x3387110();
   input += synapse0x3387150();
   input += synapse0x3387190();
   input += synapse0x33871d0();
   input += synapse0x3387210();
   input += synapse0x3387250();
   input += synapse0x3387290();
   input += synapse0x33872d0();
   input += synapse0x3387310();
   input += synapse0x3387350();
   input += synapse0x3387390();
   input += synapse0x3386e20();
   input += synapse0x3386e60();
   input += synapse0x33874e0();
   input += synapse0x3387520();
   input += synapse0x3387560();
   input += synapse0x33875a0();
   input += synapse0x33875e0();
   input += synapse0x3387620();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3386c90() {
   double input = input0x3386c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3387660() {
   double input = 0.0870359;
   input += synapse0x33879a0();
   input += synapse0x33879e0();
   input += synapse0x3387a20();
   input += synapse0x3387a60();
   input += synapse0x3387aa0();
   input += synapse0x3387ae0();
   input += synapse0x3387b20();
   input += synapse0x3387b60();
   input += synapse0x3387ba0();
   input += synapse0x3387be0();
   input += synapse0x3387c20();
   input += synapse0x3387c60();
   input += synapse0x3387ca0();
   input += synapse0x3387ce0();
   input += synapse0x3387d20();
   input += synapse0x3387d60();
   input += synapse0x33877f0();
   input += synapse0x3387830();
   input += synapse0x3387eb0();
   input += synapse0x3387ef0();
   input += synapse0x3387f30();
   input += synapse0x3387f70();
   input += synapse0x3387fb0();
   input += synapse0x3387ff0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3387660() {
   double input = input0x3387660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3388030() {
   double input = -1.21939;
   input += synapse0x3388370();
   input += synapse0x33883b0();
   input += synapse0x33883f0();
   input += synapse0x3388430();
   input += synapse0x3388470();
   input += synapse0x33884b0();
   input += synapse0x33884f0();
   input += synapse0x3388530();
   input += synapse0x3388570();
   input += synapse0x33885b0();
   input += synapse0x33885f0();
   input += synapse0x3388630();
   input += synapse0x3388670();
   input += synapse0x33886b0();
   input += synapse0x33886f0();
   input += synapse0x3388730();
   input += synapse0x33881c0();
   input += synapse0x3388200();
   input += synapse0x3388880();
   input += synapse0x33888c0();
   input += synapse0x3388900();
   input += synapse0x3388940();
   input += synapse0x3388980();
   input += synapse0x33889c0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3388030() {
   double input = input0x3388030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3388a00() {
   double input = -0.578939;
   input += synapse0x3388d40();
   input += synapse0x3388d80();
   input += synapse0x3388dc0();
   input += synapse0x3388e00();
   input += synapse0x3388e40();
   input += synapse0x3388e80();
   input += synapse0x3388ec0();
   input += synapse0x3388f00();
   input += synapse0x3388f40();
   input += synapse0x3388f80();
   input += synapse0x3388fc0();
   input += synapse0x3389000();
   input += synapse0x3389040();
   input += synapse0x3389080();
   input += synapse0x33890c0();
   input += synapse0x3389100();
   input += synapse0x3388b90();
   input += synapse0x3388bd0();
   input += synapse0x3389250();
   input += synapse0x3389290();
   input += synapse0x33892d0();
   input += synapse0x3389310();
   input += synapse0x3389350();
   input += synapse0x3389390();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3388a00() {
   double input = input0x3388a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33893d0() {
   double input = -0.753566;
   input += synapse0x3389710();
   input += synapse0x3389750();
   input += synapse0x3389790();
   input += synapse0x33897d0();
   input += synapse0x3389810();
   input += synapse0x3389850();
   input += synapse0x3389890();
   input += synapse0x33898d0();
   input += synapse0x3389910();
   input += synapse0x3389950();
   input += synapse0x3389990();
   input += synapse0x33899d0();
   input += synapse0x3389a10();
   input += synapse0x3389a50();
   input += synapse0x3389a90();
   input += synapse0x3389ad0();
   input += synapse0x3389560();
   input += synapse0x33895a0();
   input += synapse0x3389c20();
   input += synapse0x3389c60();
   input += synapse0x3389ca0();
   input += synapse0x3389ce0();
   input += synapse0x3389d20();
   input += synapse0x3389d60();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33893d0() {
   double input = input0x33893d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3389da0() {
   double input = -0.00892607;
   input += synapse0x338a0e0();
   input += synapse0x338a120();
   input += synapse0x338a160();
   input += synapse0x338a1a0();
   input += synapse0x338a1e0();
   input += synapse0x338a220();
   input += synapse0x338a260();
   input += synapse0x338a2a0();
   input += synapse0x338a2e0();
   input += synapse0x338a320();
   input += synapse0x338a360();
   input += synapse0x338a3a0();
   input += synapse0x338a3e0();
   input += synapse0x338a420();
   input += synapse0x338a460();
   input += synapse0x338a4a0();
   input += synapse0x3389f30();
   input += synapse0x3389f70();
   input += synapse0x338a5f0();
   input += synapse0x338a630();
   input += synapse0x338a670();
   input += synapse0x338a6b0();
   input += synapse0x338a6f0();
   input += synapse0x338a730();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3389da0() {
   double input = input0x3389da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x338a770() {
   double input = 1.99389;
   input += synapse0x33731e0();
   input += synapse0x3373220();
   input += synapse0x3373260();
   input += synapse0x33732a0();
   input += synapse0x33732e0();
   input += synapse0x3373320();
   input += synapse0x3373360();
   input += synapse0x33733a0();
   input += synapse0x338aec0();
   input += synapse0x338af00();
   input += synapse0x338af40();
   input += synapse0x338af80();
   input += synapse0x338afc0();
   input += synapse0x338b000();
   input += synapse0x338b040();
   input += synapse0x338b080();
   input += synapse0x338a900();
   input += synapse0x338a940();
   input += synapse0x338b1d0();
   input += synapse0x338b210();
   input += synapse0x338b250();
   input += synapse0x338b290();
   input += synapse0x338b2d0();
   input += synapse0x338b310();
   return input;
}

double NNfunction_sb_sLuL::neuron0x338a770() {
   double input = input0x338a770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x338b350() {
   double input = 0.628213;
   input += synapse0x338b690();
   input += synapse0x338b6d0();
   input += synapse0x338b710();
   input += synapse0x338b750();
   input += synapse0x338b790();
   input += synapse0x338b7d0();
   input += synapse0x338b810();
   input += synapse0x338b850();
   input += synapse0x338b890();
   input += synapse0x338b8d0();
   input += synapse0x338b910();
   input += synapse0x338b950();
   input += synapse0x338b990();
   input += synapse0x338b9d0();
   input += synapse0x338ba10();
   input += synapse0x338ba50();
   input += synapse0x338b4e0();
   input += synapse0x338b520();
   input += synapse0x338bba0();
   input += synapse0x338bbe0();
   input += synapse0x338bc20();
   input += synapse0x338bc60();
   input += synapse0x338bca0();
   input += synapse0x338bce0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x338b350() {
   double input = input0x338b350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x338bd20() {
   double input = -0.331476;
   input += synapse0x338c060();
   input += synapse0x338c0a0();
   input += synapse0x338c0e0();
   input += synapse0x338c120();
   input += synapse0x338c160();
   input += synapse0x338c1a0();
   input += synapse0x338c1e0();
   input += synapse0x338c220();
   input += synapse0x338c260();
   input += synapse0x338c2a0();
   input += synapse0x338c2e0();
   input += synapse0x338c320();
   input += synapse0x338c360();
   input += synapse0x338c3a0();
   input += synapse0x338c3e0();
   input += synapse0x338c420();
   input += synapse0x338beb0();
   input += synapse0x338bef0();
   input += synapse0x337ca20();
   input += synapse0x337ca60();
   input += synapse0x337caa0();
   input += synapse0x337cae0();
   input += synapse0x337cb20();
   input += synapse0x337cb60();
   return input;
}

double NNfunction_sb_sLuL::neuron0x338bd20() {
   double input = input0x338bd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x337cba0() {
   double input = 0.53301;
   input += synapse0x337cee0();
   input += synapse0x337cf20();
   input += synapse0x337cf60();
   input += synapse0x337cfa0();
   input += synapse0x337cfe0();
   input += synapse0x337d020();
   input += synapse0x337d060();
   input += synapse0x337d0a0();
   input += synapse0x337d0e0();
   input += synapse0x337d120();
   input += synapse0x337d160();
   input += synapse0x337d1a0();
   input += synapse0x337d1e0();
   input += synapse0x337d220();
   input += synapse0x337d260();
   input += synapse0x337d2a0();
   input += synapse0x337cd30();
   input += synapse0x337cd70();
   input += synapse0x337d3f0();
   input += synapse0x337d430();
   input += synapse0x337d470();
   input += synapse0x337d4b0();
   input += synapse0x337d4f0();
   input += synapse0x337d530();
   return input;
}

double NNfunction_sb_sLuL::neuron0x337cba0() {
   double input = input0x337cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x337d570() {
   double input = 0.127;
   input += synapse0x337d8b0();
   input += synapse0x337d8f0();
   input += synapse0x337d930();
   input += synapse0x337d970();
   input += synapse0x337d9b0();
   input += synapse0x337d9f0();
   input += synapse0x337da30();
   input += synapse0x337da70();
   input += synapse0x337dab0();
   input += synapse0x337daf0();
   input += synapse0x337db30();
   input += synapse0x337db70();
   input += synapse0x337dbb0();
   input += synapse0x337dbf0();
   input += synapse0x337dc30();
   input += synapse0x337dc70();
   input += synapse0x337d700();
   input += synapse0x337d740();
   input += synapse0x337ddc0();
   input += synapse0x337de00();
   input += synapse0x337de40();
   input += synapse0x337de80();
   input += synapse0x337dec0();
   input += synapse0x337df00();
   return input;
}

double NNfunction_sb_sLuL::neuron0x337d570() {
   double input = input0x337d570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x337df40() {
   double input = 0.723988;
   input += synapse0x337e280();
   input += synapse0x337e2c0();
   input += synapse0x337e300();
   input += synapse0x337e340();
   input += synapse0x337e380();
   input += synapse0x337e3c0();
   input += synapse0x337e400();
   input += synapse0x337e440();
   input += synapse0x337e480();
   input += synapse0x337e4c0();
   input += synapse0x337e500();
   input += synapse0x337e540();
   input += synapse0x337e580();
   input += synapse0x337e5c0();
   input += synapse0x337e600();
   input += synapse0x337e640();
   input += synapse0x337e0d0();
   input += synapse0x337e110();
   input += synapse0x337e790();
   input += synapse0x337e7d0();
   input += synapse0x337e810();
   input += synapse0x337e850();
   input += synapse0x337e890();
   input += synapse0x337e8d0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x337df40() {
   double input = input0x337df40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3390580() {
   double input = -0.581954;
   input += synapse0x33907a0();
   input += synapse0x33907e0();
   input += synapse0x3390820();
   input += synapse0x3390860();
   input += synapse0x33908a0();
   input += synapse0x33908e0();
   input += synapse0x3390920();
   input += synapse0x3390960();
   input += synapse0x33909a0();
   input += synapse0x33909e0();
   input += synapse0x3390a20();
   input += synapse0x3390a60();
   input += synapse0x3390aa0();
   input += synapse0x3390ae0();
   input += synapse0x3390b20();
   input += synapse0x3390b60();
   input += synapse0x337e910();
   input += synapse0x337e950();
   input += synapse0x3390cb0();
   input += synapse0x3390cf0();
   input += synapse0x3390d30();
   input += synapse0x3390d70();
   input += synapse0x3390db0();
   input += synapse0x3390df0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3390580() {
   double input = input0x3390580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3390e30() {
   double input = 0.922694;
   input += synapse0x3391170();
   input += synapse0x33911b0();
   input += synapse0x33911f0();
   input += synapse0x3391230();
   input += synapse0x3391270();
   input += synapse0x33912b0();
   input += synapse0x33912f0();
   input += synapse0x3391330();
   input += synapse0x3391370();
   input += synapse0x33913b0();
   input += synapse0x33913f0();
   input += synapse0x3391430();
   input += synapse0x3391470();
   input += synapse0x33914b0();
   input += synapse0x33914f0();
   input += synapse0x3391530();
   input += synapse0x3390fc0();
   input += synapse0x3391000();
   input += synapse0x3391680();
   input += synapse0x33916c0();
   input += synapse0x3391700();
   input += synapse0x3391740();
   input += synapse0x3391780();
   input += synapse0x33917c0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3390e30() {
   double input = input0x3390e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3391800() {
   double input = -0.651411;
   input += synapse0x3391b40();
   input += synapse0x3391b80();
   input += synapse0x3391bc0();
   input += synapse0x3391c00();
   input += synapse0x3391c40();
   input += synapse0x3391c80();
   input += synapse0x3391cc0();
   input += synapse0x3391d00();
   input += synapse0x3391d40();
   input += synapse0x3391d80();
   input += synapse0x3391dc0();
   input += synapse0x3391e00();
   input += synapse0x3391e40();
   input += synapse0x3391e80();
   input += synapse0x3391ec0();
   input += synapse0x3391f00();
   input += synapse0x3391990();
   input += synapse0x33919d0();
   input += synapse0x3392050();
   input += synapse0x3392090();
   input += synapse0x33920d0();
   input += synapse0x3392110();
   input += synapse0x3392150();
   input += synapse0x3392190();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3391800() {
   double input = input0x3391800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33921d0() {
   double input = 0.117539;
   input += synapse0x3392510();
   input += synapse0x3392550();
   input += synapse0x3392590();
   input += synapse0x33925d0();
   input += synapse0x3392610();
   input += synapse0x3392650();
   input += synapse0x3392690();
   input += synapse0x33926d0();
   input += synapse0x3392710();
   input += synapse0x3392750();
   input += synapse0x3392790();
   input += synapse0x33927d0();
   input += synapse0x3392810();
   input += synapse0x3392850();
   input += synapse0x3392890();
   input += synapse0x33928d0();
   input += synapse0x3392360();
   input += synapse0x33923a0();
   input += synapse0x3392a20();
   input += synapse0x3392a60();
   input += synapse0x3392aa0();
   input += synapse0x3392ae0();
   input += synapse0x3392b20();
   input += synapse0x3392b60();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33921d0() {
   double input = input0x33921d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x33993d0() {
   double input = -0.80255;
   input += synapse0x336f0f0();
   input += synapse0x336f130();
   input += synapse0x3370610();
   input += synapse0x3370650();
   input += synapse0x3370fe0();
   input += synapse0x3371020();
   input += synapse0x3371db0();
   input += synapse0x3371df0();
   input += synapse0x3372780();
   input += synapse0x33727c0();
   input += synapse0x3373150();
   input += synapse0x3373190();
   input += synapse0x3373c30();
   input += synapse0x3373c70();
   input += synapse0x3374600();
   input += synapse0x3374640();
   input += synapse0x33716e0();
   input += synapse0x3371720();
   input += synapse0x33761b0();
   input += synapse0x33761f0();
   input += synapse0x3376b80();
   input += synapse0x3376bc0();
   input += synapse0x3377550();
   input += synapse0x3377590();
   input += synapse0x3377f20();
   input += synapse0x3377f60();
   input += synapse0x336c100();
   input += synapse0x336c140();
   input += synapse0x337a010();
   input += synapse0x337a050();
   input += synapse0x337a9e0();
   input += synapse0x337aa20();
   input += synapse0x337b3b0();
   input += synapse0x337b3f0();
   input += synapse0x337bd80();
   input += synapse0x337bdc0();
   input += synapse0x337c750();
   input += synapse0x337c790();
   input += synapse0x33752a0();
   input += synapse0x33752e0();
   input += synapse0x337eb50();
   input += synapse0x337eb90();
   input += synapse0x337f4e0();
   input += synapse0x337f520();
   input += synapse0x337feb0();
   input += synapse0x337fef0();
   input += synapse0x3380880();
   input += synapse0x33808c0();
   input += synapse0x3381250();
   input += synapse0x3381290();
   return input;
}

double NNfunction_sb_sLuL::neuron0x33993d0() {
   double input = input0x33993d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3399770() {
   double input = -0.0695477;
   input += synapse0x3383990();
   input += synapse0x33839d0();
   input += synapse0x3378f50();
   input += synapse0x3378f90();
   input += synapse0x3386570();
   input += synapse0x33865b0();
   input += synapse0x3386f40();
   input += synapse0x3386f80();
   input += synapse0x3387910();
   input += synapse0x3387950();
   input += synapse0x33882e0();
   input += synapse0x3388320();
   input += synapse0x3388cb0();
   input += synapse0x3388cf0();
   input += synapse0x3389680();
   input += synapse0x33896c0();
   input += synapse0x338a050();
   input += synapse0x338a090();
   input += synapse0x338aa20();
   input += synapse0x338aa60();
   input += synapse0x338b600();
   input += synapse0x338b640();
   input += synapse0x338bfd0();
   input += synapse0x338c010();
   input += synapse0x337ce50();
   input += synapse0x337ce90();
   input += synapse0x337d820();
   input += synapse0x337d860();
   input += synapse0x337e1f0();
   input += synapse0x337e230();
   input += synapse0x3390710();
   input += synapse0x3390750();
   input += synapse0x33910e0();
   input += synapse0x3391120();
   input += synapse0x3391ab0();
   input += synapse0x3391af0();
   input += synapse0x3392480();
   input += synapse0x33924c0();
   input += synapse0x336e3b0();
   input += synapse0x336e3f0();
   input += synapse0x3381c20();
   input += synapse0x3381c60();
   input += synapse0x3392ba0();
   input += synapse0x3392be0();
   input += synapse0x3392c20();
   input += synapse0x3392c60();
   input += synapse0x3399b10();
   input += synapse0x3399b50();
   input += synapse0x3399b90();
   input += synapse0x3399bd0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3399770() {
   double input = input0x3399770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x3399c10() {
   double input = -0.483801;
   input += synapse0x3399f50();
   input += synapse0x3399f90();
   input += synapse0x3399fd0();
   input += synapse0x339a010();
   input += synapse0x339a050();
   input += synapse0x339a090();
   input += synapse0x339a0d0();
   input += synapse0x339a110();
   input += synapse0x339a150();
   input += synapse0x339a190();
   input += synapse0x339a1d0();
   input += synapse0x339a210();
   input += synapse0x339a250();
   input += synapse0x339a290();
   input += synapse0x339a2d0();
   input += synapse0x339a310();
   input += synapse0x3399da0();
   input += synapse0x3399de0();
   input += synapse0x339a460();
   input += synapse0x339a4a0();
   input += synapse0x339a4e0();
   input += synapse0x339a520();
   input += synapse0x339a560();
   input += synapse0x339a5a0();
   input += synapse0x339a5e0();
   input += synapse0x339a620();
   input += synapse0x339a660();
   input += synapse0x339a6a0();
   input += synapse0x339a6e0();
   input += synapse0x339a720();
   input += synapse0x339a760();
   input += synapse0x339a7a0();
   input += synapse0x339a350();
   input += synapse0x339a390();
   input += synapse0x339a3d0();
   input += synapse0x339a410();
   input += synapse0x339a9f0();
   input += synapse0x339aa30();
   input += synapse0x339aa70();
   input += synapse0x339aab0();
   input += synapse0x339aaf0();
   input += synapse0x339ab30();
   input += synapse0x339ab70();
   input += synapse0x339abb0();
   input += synapse0x339abf0();
   input += synapse0x339ac30();
   input += synapse0x339ac70();
   input += synapse0x339acb0();
   input += synapse0x339acf0();
   input += synapse0x339ad30();
   return input;
}

double NNfunction_sb_sLuL::neuron0x3399c10() {
   double input = input0x3399c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x339ad70() {
   double input = 0.173661;
   input += synapse0x339b0b0();
   input += synapse0x339b0f0();
   input += synapse0x339b130();
   input += synapse0x339b170();
   input += synapse0x339b1b0();
   input += synapse0x339b1f0();
   input += synapse0x339b230();
   input += synapse0x339b270();
   input += synapse0x339b2b0();
   input += synapse0x339b2f0();
   input += synapse0x339b330();
   input += synapse0x339b370();
   input += synapse0x339b3b0();
   input += synapse0x339b3f0();
   input += synapse0x339b430();
   input += synapse0x339b470();
   input += synapse0x339af00();
   input += synapse0x339af40();
   input += synapse0x339b5c0();
   input += synapse0x339b600();
   input += synapse0x339b640();
   input += synapse0x339b680();
   input += synapse0x339b6c0();
   input += synapse0x339b700();
   input += synapse0x339b740();
   input += synapse0x339b780();
   input += synapse0x339b7c0();
   input += synapse0x339b800();
   input += synapse0x339b840();
   input += synapse0x339b880();
   input += synapse0x339b8c0();
   input += synapse0x339b900();
   input += synapse0x339b4b0();
   input += synapse0x339b4f0();
   input += synapse0x339b530();
   input += synapse0x339b570();
   input += synapse0x339bb50();
   input += synapse0x339bb90();
   input += synapse0x339bbd0();
   input += synapse0x339bc10();
   input += synapse0x339bc50();
   input += synapse0x339bc90();
   input += synapse0x339bcd0();
   input += synapse0x339bd10();
   input += synapse0x339bd50();
   input += synapse0x339bd90();
   input += synapse0x339bdd0();
   input += synapse0x339be10();
   input += synapse0x339be50();
   input += synapse0x339be90();
   return input;
}

double NNfunction_sb_sLuL::neuron0x339ad70() {
   double input = input0x339ad70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x339bed0() {
   double input = -1.0048;
   input += synapse0x339c210();
   input += synapse0x339c250();
   input += synapse0x339c290();
   input += synapse0x339c2d0();
   input += synapse0x339c310();
   input += synapse0x339c350();
   input += synapse0x339c390();
   input += synapse0x339c3d0();
   input += synapse0x339c410();
   input += synapse0x339c450();
   input += synapse0x339c490();
   input += synapse0x339c4d0();
   input += synapse0x339c510();
   input += synapse0x339c550();
   input += synapse0x339c590();
   input += synapse0x339c5d0();
   input += synapse0x339c060();
   input += synapse0x339c0a0();
   input += synapse0x339c720();
   input += synapse0x339c760();
   input += synapse0x339c7a0();
   input += synapse0x339c7e0();
   input += synapse0x339c820();
   input += synapse0x339c860();
   input += synapse0x339c8a0();
   input += synapse0x339c8e0();
   input += synapse0x339c920();
   input += synapse0x339c960();
   input += synapse0x339c9a0();
   input += synapse0x339c9e0();
   input += synapse0x339ca20();
   input += synapse0x339ca60();
   input += synapse0x339c610();
   input += synapse0x339c650();
   input += synapse0x339c690();
   input += synapse0x339c6d0();
   input += synapse0x339ccb0();
   input += synapse0x339ccf0();
   input += synapse0x339cd30();
   input += synapse0x339cd70();
   input += synapse0x339cdb0();
   input += synapse0x339cdf0();
   input += synapse0x339ce30();
   input += synapse0x339ce70();
   input += synapse0x339ceb0();
   input += synapse0x339cef0();
   input += synapse0x339cf30();
   input += synapse0x339cf70();
   input += synapse0x339cfb0();
   input += synapse0x339cff0();
   return input;
}

double NNfunction_sb_sLuL::neuron0x339bed0() {
   double input = input0x339bed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLuL::input0x339d030() {
   double input = 2.92916;
   input += synapse0x339d250();
   input += synapse0x339d290();
   input += synapse0x339d2d0();
   input += synapse0x339d310();
   input += synapse0x339d350();
   return input;
}

double NNfunction_sb_sLuL::neuron0x339d030() {
   double input = input0x339d030();
   return (input * 1)+0;
}

double NNfunction_sb_sLuL::synapse0x3369170() {
   return (neuron0x33691f0()*0.0216666);
}

double NNfunction_sb_sLuL::synapse0x33691b0() {
   return (neuron0x33694a0()*0.0139207);
}

double NNfunction_sb_sLuL::synapse0x336e440() {
   return (neuron0x33697e0()*-0.00424373);
}

double NNfunction_sb_sLuL::synapse0x336e480() {
   return (neuron0x3369b20()*-3.50731);
}

double NNfunction_sb_sLuL::synapse0x336e4c0() {
   return (neuron0x3369e60()*0.00341788);
}

double NNfunction_sb_sLuL::synapse0x336e500() {
   return (neuron0x336a1a0()*0.00710093);
}

double NNfunction_sb_sLuL::synapse0x336e540() {
   return (neuron0x336a4e0()*0.00721939);
}

double NNfunction_sb_sLuL::synapse0x336e580() {
   return (neuron0x336a820()*-0.00543268);
}

double NNfunction_sb_sLuL::synapse0x336e5c0() {
   return (neuron0x336ab60()*-0.00953108);
}

double NNfunction_sb_sLuL::synapse0x336e600() {
   return (neuron0x336aea0()*-0.00418638);
}

double NNfunction_sb_sLuL::synapse0x336e640() {
   return (neuron0x336b1e0()*-0.00231529);
}

double NNfunction_sb_sLuL::synapse0x336e680() {
   return (neuron0x336b520()*0.250158);
}

double NNfunction_sb_sLuL::synapse0x336e6c0() {
   return (neuron0x336b860()*0.317265);
}

double NNfunction_sb_sLuL::synapse0x336e700() {
   return (neuron0x336bba0()*0.0134836);
}

double NNfunction_sb_sLuL::synapse0x336e740() {
   return (neuron0x336bee0()*-0.0170385);
}

double NNfunction_sb_sLuL::synapse0x336e780() {
   return (neuron0x336c220()*-0.00989166);
}

double NNfunction_sb_sLuL::synapse0x33690e0() {
   return (neuron0x336c560()*0.00124586);
}

double NNfunction_sb_sLuL::synapse0x3369120() {
   return (neuron0x336cac0()*0.00593988);
}

double NNfunction_sb_sLuL::synapse0x31242b0() {
   return (neuron0x336cce0()*-0.00531315);
}

double NNfunction_sb_sLuL::synapse0x31242f0() {
   return (neuron0x336d020()*0.0199368);
}

double NNfunction_sb_sLuL::synapse0x336e9e0() {
   return (neuron0x336d360()*-0.00830012);
}

double NNfunction_sb_sLuL::synapse0x336ea20() {
   return (neuron0x336d6a0()*0.0141962);
}

double NNfunction_sb_sLuL::synapse0x336ea60() {
   return (neuron0x336d9e0()*0.00463255);
}

double NNfunction_sb_sLuL::synapse0x336eaa0() {
   return (neuron0x336dd20()*0.00134727);
}

double NNfunction_sb_sLuL::synapse0x336ee20() {
   return (neuron0x33691f0()*0.02054);
}

double NNfunction_sb_sLuL::synapse0x336ee60() {
   return (neuron0x33694a0()*0.0108379);
}

double NNfunction_sb_sLuL::synapse0x336eea0() {
   return (neuron0x33697e0()*0.0295571);
}

double NNfunction_sb_sLuL::synapse0x336eee0() {
   return (neuron0x3369b20()*0.440188);
}

double NNfunction_sb_sLuL::synapse0x336ef20() {
   return (neuron0x3369e60()*-0.024972);
}

double NNfunction_sb_sLuL::synapse0x336ef60() {
   return (neuron0x336a1a0()*0.00392239);
}

double NNfunction_sb_sLuL::synapse0x336efa0() {
   return (neuron0x336a4e0()*0.0379507);
}

double NNfunction_sb_sLuL::synapse0x336efe0() {
   return (neuron0x336a820()*-0.00085166);
}

double NNfunction_sb_sLuL::synapse0x336f020() {
   return (neuron0x336ab60()*-0.0397928);
}

double NNfunction_sb_sLuL::synapse0x336e8d0() {
   return (neuron0x336aea0()*-0.0120661);
}

double NNfunction_sb_sLuL::synapse0x336e910() {
   return (neuron0x336b1e0()*-0.0216828);
}

double NNfunction_sb_sLuL::synapse0x336e950() {
   return (neuron0x336b520()*-0.249605);
}

double NNfunction_sb_sLuL::synapse0x336e990() {
   return (neuron0x336b860()*-0.104727);
}

double NNfunction_sb_sLuL::synapse0x336f270() {
   return (neuron0x336bba0()*-0.0109507);
}

double NNfunction_sb_sLuL::synapse0x336f2b0() {
   return (neuron0x336bee0()*0.00870832);
}

double NNfunction_sb_sLuL::synapse0x336f2f0() {
   return (neuron0x336c220()*0.0364549);
}

double NNfunction_sb_sLuL::synapse0x336ec70() {
   return (neuron0x336c560()*0.0170891);
}

double NNfunction_sb_sLuL::synapse0x336ecb0() {
   return (neuron0x336cac0()*-0.0228706);
}

double NNfunction_sb_sLuL::synapse0x336f440() {
   return (neuron0x336cce0()*-0.0148044);
}

double NNfunction_sb_sLuL::synapse0x336f480() {
   return (neuron0x336d020()*0.0549084);
}

double NNfunction_sb_sLuL::synapse0x336f4c0() {
   return (neuron0x336d360()*0.0212306);
}

double NNfunction_sb_sLuL::synapse0x336f500() {
   return (neuron0x336d6a0()*-0.0194215);
}

double NNfunction_sb_sLuL::synapse0x336f540() {
   return (neuron0x336d9e0()*-0.000556569);
}

double NNfunction_sb_sLuL::synapse0x336f580() {
   return (neuron0x336dd20()*0.0121951);
}

double NNfunction_sb_sLuL::synapse0x336f900() {
   return (neuron0x33691f0()*0.00182552);
}

double NNfunction_sb_sLuL::synapse0x336f940() {
   return (neuron0x33694a0()*-0.00319918);
}

double NNfunction_sb_sLuL::synapse0x336f980() {
   return (neuron0x33697e0()*-0.0314089);
}

double NNfunction_sb_sLuL::synapse0x336f9c0() {
   return (neuron0x3369b20()*-0.375026);
}

double NNfunction_sb_sLuL::synapse0x336fa00() {
   return (neuron0x3369e60()*-0.0364559);
}

double NNfunction_sb_sLuL::synapse0x336fa40() {
   return (neuron0x336a1a0()*-0.0141533);
}

double NNfunction_sb_sLuL::synapse0x336fa80() {
   return (neuron0x336a4e0()*0.0433738);
}

double NNfunction_sb_sLuL::synapse0x336fac0() {
   return (neuron0x336a820()*-0.00385249);
}

double NNfunction_sb_sLuL::synapse0x336fb00() {
   return (neuron0x336ab60()*0.00614623);
}

double NNfunction_sb_sLuL::synapse0x336fb40() {
   return (neuron0x336aea0()*0.0114624);
}

double NNfunction_sb_sLuL::synapse0x336fb80() {
   return (neuron0x336b1e0()*-0.00275212);
}

double NNfunction_sb_sLuL::synapse0x336fbc0() {
   return (neuron0x336b520()*0.490784);
}

double NNfunction_sb_sLuL::synapse0x336fc00() {
   return (neuron0x336b860()*0.425091);
}

double NNfunction_sb_sLuL::synapse0x336fc40() {
   return (neuron0x336bba0()*-0.0129183);
}

double NNfunction_sb_sLuL::synapse0x336fc80() {
   return (neuron0x336bee0()*0.0025772);
}

double NNfunction_sb_sLuL::synapse0x336fcc0() {
   return (neuron0x336c220()*0.00340749);
}

double NNfunction_sb_sLuL::synapse0x336f750() {
   return (neuron0x336c560()*0.0216068);
}

double NNfunction_sb_sLuL::synapse0x336f790() {
   return (neuron0x336cac0()*-0.0548303);
}

double NNfunction_sb_sLuL::synapse0x3358260() {
   return (neuron0x336cce0()*-0.00230463);
}

double NNfunction_sb_sLuL::synapse0x31321b0() {
   return (neuron0x336d020()*0.0187866);
}

double NNfunction_sb_sLuL::synapse0x31321f0() {
   return (neuron0x336d360()*0.0372852);
}

double NNfunction_sb_sLuL::synapse0x324d700() {
   return (neuron0x336d6a0()*-0.0236022);
}

double NNfunction_sb_sLuL::synapse0x324d740() {
   return (neuron0x336d9e0()*-0.000175565);
}

double NNfunction_sb_sLuL::synapse0x3368f50() {
   return (neuron0x336dd20()*0.00282183);
}

double NNfunction_sb_sLuL::synapse0x3132aa0() {
   return (neuron0x33691f0()*-0.16044);
}

double NNfunction_sb_sLuL::synapse0x336f180() {
   return (neuron0x33694a0()*0.323929);
}

double NNfunction_sb_sLuL::synapse0x336f1c0() {
   return (neuron0x33697e0()*1.2961);
}

double NNfunction_sb_sLuL::synapse0x336f200() {
   return (neuron0x3369b20()*-0.357863);
}

double NNfunction_sb_sLuL::synapse0x336fe10() {
   return (neuron0x3369e60()*0.769745);
}

double NNfunction_sb_sLuL::synapse0x336fe50() {
   return (neuron0x336a1a0()*0.40383);
}

double NNfunction_sb_sLuL::synapse0x336fe90() {
   return (neuron0x336a4e0()*0.340901);
}

double NNfunction_sb_sLuL::synapse0x336fed0() {
   return (neuron0x336a820()*-0.164195);
}

double NNfunction_sb_sLuL::synapse0x336ff10() {
   return (neuron0x336ab60()*-0.301829);
}

double NNfunction_sb_sLuL::synapse0x336ff50() {
   return (neuron0x336aea0()*0.791091);
}

double NNfunction_sb_sLuL::synapse0x336ff90() {
   return (neuron0x336b1e0()*-0.781485);
}

double NNfunction_sb_sLuL::synapse0x336ffd0() {
   return (neuron0x336b520()*-0.815741);
}

double NNfunction_sb_sLuL::synapse0x3370010() {
   return (neuron0x336b860()*-0.314024);
}

double NNfunction_sb_sLuL::synapse0x3370050() {
   return (neuron0x336bba0()*0.167127);
}

double NNfunction_sb_sLuL::synapse0x3370090() {
   return (neuron0x336bee0()*0.970946);
}

double NNfunction_sb_sLuL::synapse0x33700d0() {
   return (neuron0x336c220()*0.339254);
}

double NNfunction_sb_sLuL::synapse0x3368f90() {
   return (neuron0x336c560()*0.909492);
}

double NNfunction_sb_sLuL::synapse0x3368fd0() {
   return (neuron0x336cac0()*0.505946);
}

double NNfunction_sb_sLuL::synapse0x3369010() {
   return (neuron0x336cce0()*-0.218687);
}

double NNfunction_sb_sLuL::synapse0x3370220() {
   return (neuron0x336d020()*0.306829);
}

double NNfunction_sb_sLuL::synapse0x3370260() {
   return (neuron0x336d360()*0.224461);
}

double NNfunction_sb_sLuL::synapse0x33702a0() {
   return (neuron0x336d6a0()*-0.460673);
}

double NNfunction_sb_sLuL::synapse0x33702e0() {
   return (neuron0x336d9e0()*-0.432463);
}

double NNfunction_sb_sLuL::synapse0x3370320() {
   return (neuron0x336dd20()*-0.334833);
}

double NNfunction_sb_sLuL::synapse0x33706a0() {
   return (neuron0x33691f0()*-0.429879);
}

double NNfunction_sb_sLuL::synapse0x33706e0() {
   return (neuron0x33694a0()*-0.349257);
}

double NNfunction_sb_sLuL::synapse0x3370720() {
   return (neuron0x33697e0()*-0.705533);
}

double NNfunction_sb_sLuL::synapse0x3370760() {
   return (neuron0x3369b20()*-0.0115241);
}

double NNfunction_sb_sLuL::synapse0x33707a0() {
   return (neuron0x3369e60()*-0.337646);
}

double NNfunction_sb_sLuL::synapse0x33707e0() {
   return (neuron0x336a1a0()*-0.126601);
}

double NNfunction_sb_sLuL::synapse0x3370820() {
   return (neuron0x336a4e0()*-0.596417);
}

double NNfunction_sb_sLuL::synapse0x3370860() {
   return (neuron0x336a820()*0.0616785);
}

double NNfunction_sb_sLuL::synapse0x33708a0() {
   return (neuron0x336ab60()*0.414852);
}

double NNfunction_sb_sLuL::synapse0x33708e0() {
   return (neuron0x336aea0()*-0.387354);
}

double NNfunction_sb_sLuL::synapse0x3370920() {
   return (neuron0x336b1e0()*0.898262);
}

double NNfunction_sb_sLuL::synapse0x3370960() {
   return (neuron0x336b520()*-0.0279509);
}

double NNfunction_sb_sLuL::synapse0x33709a0() {
   return (neuron0x336b860()*-0.389299);
}

double NNfunction_sb_sLuL::synapse0x33709e0() {
   return (neuron0x336bba0()*0.0523535);
}

double NNfunction_sb_sLuL::synapse0x3370a20() {
   return (neuron0x336bee0()*-0.238743);
}

double NNfunction_sb_sLuL::synapse0x3370a60() {
   return (neuron0x336c220()*-0.454609);
}

double NNfunction_sb_sLuL::synapse0x33704f0() {
   return (neuron0x336c560()*0.392081);
}

double NNfunction_sb_sLuL::synapse0x3370530() {
   return (neuron0x336cac0()*0.213134);
}

double NNfunction_sb_sLuL::synapse0x3370bb0() {
   return (neuron0x336cce0()*-0.0837597);
}

double NNfunction_sb_sLuL::synapse0x3370bf0() {
   return (neuron0x336d020()*-1.0645);
}

double NNfunction_sb_sLuL::synapse0x3370c30() {
   return (neuron0x336d360()*-0.34068);
}

double NNfunction_sb_sLuL::synapse0x3370c70() {
   return (neuron0x336d6a0()*-0.444899);
}

double NNfunction_sb_sLuL::synapse0x3370cb0() {
   return (neuron0x336d9e0()*-0.209029);
}

double NNfunction_sb_sLuL::synapse0x3370cf0() {
   return (neuron0x336dd20()*0.312966);
}

double NNfunction_sb_sLuL::synapse0x3371070() {
   return (neuron0x33691f0()*-0.202582);
}

double NNfunction_sb_sLuL::synapse0x33710b0() {
   return (neuron0x33694a0()*0.00151575);
}

double NNfunction_sb_sLuL::synapse0x33710f0() {
   return (neuron0x33697e0()*0.523254);
}

double NNfunction_sb_sLuL::synapse0x3371130() {
   return (neuron0x3369b20()*0.037291);
}

double NNfunction_sb_sLuL::synapse0x3371170() {
   return (neuron0x3369e60()*0.240782);
}

double NNfunction_sb_sLuL::synapse0x33711b0() {
   return (neuron0x336a1a0()*0.00252788);
}

double NNfunction_sb_sLuL::synapse0x33711f0() {
   return (neuron0x336a4e0()*0.0831204);
}

double NNfunction_sb_sLuL::synapse0x3371230() {
   return (neuron0x336a820()*-0.178282);
}

double NNfunction_sb_sLuL::synapse0x3371270() {
   return (neuron0x336ab60()*0.150645);
}

double NNfunction_sb_sLuL::synapse0x3132500() {
   return (neuron0x336aea0()*-0.127499);
}

double NNfunction_sb_sLuL::synapse0x3132540() {
   return (neuron0x336b1e0()*0.0931658);
}

double NNfunction_sb_sLuL::synapse0x3132580() {
   return (neuron0x336b520()*0.175341);
}

double NNfunction_sb_sLuL::synapse0x31325c0() {
   return (neuron0x336b860()*-0.371251);
}

double NNfunction_sb_sLuL::synapse0x3132600() {
   return (neuron0x336bba0()*0.354143);
}

double NNfunction_sb_sLuL::synapse0x3132640() {
   return (neuron0x336bee0()*-0.755351);
}

double NNfunction_sb_sLuL::synapse0x3132680() {
   return (neuron0x336c220()*-0.0297727);
}

double NNfunction_sb_sLuL::synapse0x3370ec0() {
   return (neuron0x336c560()*0.562276);
}

double NNfunction_sb_sLuL::synapse0x3370f00() {
   return (neuron0x336cac0()*0.0991568);
}

double NNfunction_sb_sLuL::synapse0x31327d0() {
   return (neuron0x336cce0()*-0.252399);
}

double NNfunction_sb_sLuL::synapse0x3132810() {
   return (neuron0x336d020()*0.0980607);
}

double NNfunction_sb_sLuL::synapse0x3132850() {
   return (neuron0x336d360()*-1.09198);
}

double NNfunction_sb_sLuL::synapse0x3132890() {
   return (neuron0x336d6a0()*0.0913005);
}

double NNfunction_sb_sLuL::synapse0x31328d0() {
   return (neuron0x336d9e0()*0.220115);
}

double NNfunction_sb_sLuL::synapse0x3371ac0() {
   return (neuron0x336dd20()*-0.237813);
}

double NNfunction_sb_sLuL::synapse0x3371e40() {
   return (neuron0x33691f0()*0.600669);
}

double NNfunction_sb_sLuL::synapse0x3371e80() {
   return (neuron0x33694a0()*0.27986);
}

double NNfunction_sb_sLuL::synapse0x3371ec0() {
   return (neuron0x33697e0()*0.25803);
}

double NNfunction_sb_sLuL::synapse0x3371f00() {
   return (neuron0x3369b20()*-0.469343);
}

double NNfunction_sb_sLuL::synapse0x3371f40() {
   return (neuron0x3369e60()*-0.303402);
}

double NNfunction_sb_sLuL::synapse0x3371f80() {
   return (neuron0x336a1a0()*0.137976);
}

double NNfunction_sb_sLuL::synapse0x3371fc0() {
   return (neuron0x336a4e0()*1.28716);
}

double NNfunction_sb_sLuL::synapse0x3372000() {
   return (neuron0x336a820()*1.00565);
}

double NNfunction_sb_sLuL::synapse0x3372040() {
   return (neuron0x336ab60()*0.0735796);
}

double NNfunction_sb_sLuL::synapse0x3372080() {
   return (neuron0x336aea0()*0.905077);
}

double NNfunction_sb_sLuL::synapse0x33720c0() {
   return (neuron0x336b1e0()*0.369673);
}

double NNfunction_sb_sLuL::synapse0x3372100() {
   return (neuron0x336b520()*0.0514197);
}

double NNfunction_sb_sLuL::synapse0x3372140() {
   return (neuron0x336b860()*-1.15258);
}

double NNfunction_sb_sLuL::synapse0x3372180() {
   return (neuron0x336bba0()*0.466625);
}

double NNfunction_sb_sLuL::synapse0x33721c0() {
   return (neuron0x336bee0()*-0.0075539);
}

double NNfunction_sb_sLuL::synapse0x3372200() {
   return (neuron0x336c220()*-0.983809);
}

double NNfunction_sb_sLuL::synapse0x3371c90() {
   return (neuron0x336c560()*-0.400993);
}

double NNfunction_sb_sLuL::synapse0x3371cd0() {
   return (neuron0x336cac0()*-0.42568);
}

double NNfunction_sb_sLuL::synapse0x3372350() {
   return (neuron0x336cce0()*-0.210649);
}

double NNfunction_sb_sLuL::synapse0x3372390() {
   return (neuron0x336d020()*-0.322941);
}

double NNfunction_sb_sLuL::synapse0x33723d0() {
   return (neuron0x336d360()*1.25588);
}

double NNfunction_sb_sLuL::synapse0x3372410() {
   return (neuron0x336d6a0()*-0.0602901);
}

double NNfunction_sb_sLuL::synapse0x3372450() {
   return (neuron0x336d9e0()*0.0486554);
}

double NNfunction_sb_sLuL::synapse0x3372490() {
   return (neuron0x336dd20()*-1.0919);
}

double NNfunction_sb_sLuL::synapse0x3372810() {
   return (neuron0x33691f0()*-0.231161);
}

double NNfunction_sb_sLuL::synapse0x3372850() {
   return (neuron0x33694a0()*0.446058);
}

double NNfunction_sb_sLuL::synapse0x3372890() {
   return (neuron0x33697e0()*-0.213832);
}

double NNfunction_sb_sLuL::synapse0x33728d0() {
   return (neuron0x3369b20()*-0.450486);
}

double NNfunction_sb_sLuL::synapse0x3372910() {
   return (neuron0x3369e60()*0.231226);
}

double NNfunction_sb_sLuL::synapse0x3372950() {
   return (neuron0x336a1a0()*0.145686);
}

double NNfunction_sb_sLuL::synapse0x3372990() {
   return (neuron0x336a4e0()*0.00414426);
}

double NNfunction_sb_sLuL::synapse0x33729d0() {
   return (neuron0x336a820()*0.052181);
}

double NNfunction_sb_sLuL::synapse0x3372a10() {
   return (neuron0x336ab60()*-0.350823);
}

double NNfunction_sb_sLuL::synapse0x3372a50() {
   return (neuron0x336aea0()*0.356251);
}

double NNfunction_sb_sLuL::synapse0x3372a90() {
   return (neuron0x336b1e0()*-0.0574177);
}

double NNfunction_sb_sLuL::synapse0x3372ad0() {
   return (neuron0x336b520()*0.327478);
}

double NNfunction_sb_sLuL::synapse0x3372b10() {
   return (neuron0x336b860()*-0.321881);
}

double NNfunction_sb_sLuL::synapse0x3372b50() {
   return (neuron0x336bba0()*-0.565716);
}

double NNfunction_sb_sLuL::synapse0x3372b90() {
   return (neuron0x336bee0()*-0.204349);
}

double NNfunction_sb_sLuL::synapse0x3372bd0() {
   return (neuron0x336c220()*0.588408);
}

double NNfunction_sb_sLuL::synapse0x3372660() {
   return (neuron0x336c560()*-0.281061);
}

double NNfunction_sb_sLuL::synapse0x33726a0() {
   return (neuron0x336cac0()*0.208525);
}

double NNfunction_sb_sLuL::synapse0x3372d20() {
   return (neuron0x336cce0()*-0.777297);
}

double NNfunction_sb_sLuL::synapse0x3372d60() {
   return (neuron0x336d020()*-0.225845);
}

double NNfunction_sb_sLuL::synapse0x3372da0() {
   return (neuron0x336d360()*-0.30818);
}

double NNfunction_sb_sLuL::synapse0x3372de0() {
   return (neuron0x336d6a0()*-0.154615);
}

double NNfunction_sb_sLuL::synapse0x3372e20() {
   return (neuron0x336d9e0()*-0.0649772);
}

double NNfunction_sb_sLuL::synapse0x3372e60() {
   return (neuron0x336dd20()*-0.484623);
}

double NNfunction_sb_sLuL::synapse0x336c9b0() {
   return (neuron0x33691f0()*0.0361982);
}

double NNfunction_sb_sLuL::synapse0x336c9f0() {
   return (neuron0x33694a0()*0.0144212);
}

double NNfunction_sb_sLuL::synapse0x336ca30() {
   return (neuron0x33697e0()*-0.0386979);
}

double NNfunction_sb_sLuL::synapse0x336ca70() {
   return (neuron0x3369b20()*-6.9659);
}

double NNfunction_sb_sLuL::synapse0x33733f0() {
   return (neuron0x3369e60()*0.0363913);
}

double NNfunction_sb_sLuL::synapse0x3373430() {
   return (neuron0x336a1a0()*-0.00908446);
}

double NNfunction_sb_sLuL::synapse0x3373470() {
   return (neuron0x336a4e0()*0.0112518);
}

double NNfunction_sb_sLuL::synapse0x33734b0() {
   return (neuron0x336a820()*-0.0131959);
}

double NNfunction_sb_sLuL::synapse0x33734f0() {
   return (neuron0x336ab60()*0.0013962);
}

double NNfunction_sb_sLuL::synapse0x3373530() {
   return (neuron0x336aea0()*-0.00081193);
}

double NNfunction_sb_sLuL::synapse0x3373570() {
   return (neuron0x336b1e0()*0.0355935);
}

double NNfunction_sb_sLuL::synapse0x33735b0() {
   return (neuron0x336b520()*-0.178771);
}

double NNfunction_sb_sLuL::synapse0x33735f0() {
   return (neuron0x336b860()*-0.0735441);
}

double NNfunction_sb_sLuL::synapse0x3373630() {
   return (neuron0x336bba0()*-0.00636558);
}

double NNfunction_sb_sLuL::synapse0x3373670() {
   return (neuron0x336bee0()*-0.0214415);
}

double NNfunction_sb_sLuL::synapse0x33736b0() {
   return (neuron0x336c220()*-0.0091554);
}

double NNfunction_sb_sLuL::synapse0x3373030() {
   return (neuron0x336c560()*-0.018215);
}

double NNfunction_sb_sLuL::synapse0x3373070() {
   return (neuron0x336cac0()*0.0424356);
}

double NNfunction_sb_sLuL::synapse0x3373800() {
   return (neuron0x336cce0()*0.000749678);
}

double NNfunction_sb_sLuL::synapse0x3373840() {
   return (neuron0x336d020()*-0.0203494);
}

double NNfunction_sb_sLuL::synapse0x3373880() {
   return (neuron0x336d360()*0.0199845);
}

double NNfunction_sb_sLuL::synapse0x33738c0() {
   return (neuron0x336d6a0()*0.0140848);
}

double NNfunction_sb_sLuL::synapse0x3373900() {
   return (neuron0x336d9e0()*0.0471498);
}

double NNfunction_sb_sLuL::synapse0x3373940() {
   return (neuron0x336dd20()*-0.0603271);
}

double NNfunction_sb_sLuL::synapse0x3373cc0() {
   return (neuron0x33691f0()*-0.333189);
}

double NNfunction_sb_sLuL::synapse0x3373d00() {
   return (neuron0x33694a0()*0.398298);
}

double NNfunction_sb_sLuL::synapse0x3373d40() {
   return (neuron0x33697e0()*-0.116802);
}

double NNfunction_sb_sLuL::synapse0x3373d80() {
   return (neuron0x3369b20()*-0.109001);
}

double NNfunction_sb_sLuL::synapse0x3373dc0() {
   return (neuron0x3369e60()*-0.494683);
}

double NNfunction_sb_sLuL::synapse0x3373e00() {
   return (neuron0x336a1a0()*0.974654);
}

double NNfunction_sb_sLuL::synapse0x3373e40() {
   return (neuron0x336a4e0()*-0.264207);
}

double NNfunction_sb_sLuL::synapse0x3373e80() {
   return (neuron0x336a820()*0.350211);
}

double NNfunction_sb_sLuL::synapse0x3373ec0() {
   return (neuron0x336ab60()*0.0464007);
}

double NNfunction_sb_sLuL::synapse0x3373f00() {
   return (neuron0x336aea0()*0.137656);
}

double NNfunction_sb_sLuL::synapse0x3373f40() {
   return (neuron0x336b1e0()*-0.166756);
}

double NNfunction_sb_sLuL::synapse0x3373f80() {
   return (neuron0x336b520()*0.973475);
}

double NNfunction_sb_sLuL::synapse0x3373fc0() {
   return (neuron0x336b860()*-0.0167588);
}

double NNfunction_sb_sLuL::synapse0x3374000() {
   return (neuron0x336bba0()*0.233081);
}

double NNfunction_sb_sLuL::synapse0x3374040() {
   return (neuron0x336bee0()*0.280271);
}

double NNfunction_sb_sLuL::synapse0x3374080() {
   return (neuron0x336c220()*0.0473536);
}

double NNfunction_sb_sLuL::synapse0x3373b10() {
   return (neuron0x336c560()*0.230729);
}

double NNfunction_sb_sLuL::synapse0x3373b50() {
   return (neuron0x336cac0()*0.218769);
}

double NNfunction_sb_sLuL::synapse0x33741d0() {
   return (neuron0x336cce0()*0.369627);
}

double NNfunction_sb_sLuL::synapse0x3374210() {
   return (neuron0x336d020()*-0.123589);
}

double NNfunction_sb_sLuL::synapse0x3374250() {
   return (neuron0x336d360()*0.156367);
}

double NNfunction_sb_sLuL::synapse0x3374290() {
   return (neuron0x336d6a0()*0.35764);
}

double NNfunction_sb_sLuL::synapse0x33742d0() {
   return (neuron0x336d9e0()*-0.373974);
}

double NNfunction_sb_sLuL::synapse0x3374310() {
   return (neuron0x336dd20()*-0.367725);
}

double NNfunction_sb_sLuL::synapse0x3374690() {
   return (neuron0x33691f0()*-0.0381023);
}

double NNfunction_sb_sLuL::synapse0x33746d0() {
   return (neuron0x33694a0()*-0.0288889);
}

double NNfunction_sb_sLuL::synapse0x3374710() {
   return (neuron0x33697e0()*0.0840194);
}

double NNfunction_sb_sLuL::synapse0x3374750() {
   return (neuron0x3369b20()*-0.279076);
}

double NNfunction_sb_sLuL::synapse0x3374790() {
   return (neuron0x3369e60()*-0.0691545);
}

double NNfunction_sb_sLuL::synapse0x33747d0() {
   return (neuron0x336a1a0()*-0.0740302);
}

double NNfunction_sb_sLuL::synapse0x3374810() {
   return (neuron0x336a4e0()*0.0725811);
}

double NNfunction_sb_sLuL::synapse0x3374850() {
   return (neuron0x336a820()*-0.00280498);
}

double NNfunction_sb_sLuL::synapse0x3374890() {
   return (neuron0x336ab60()*0.0652905);
}

double NNfunction_sb_sLuL::synapse0x33748d0() {
   return (neuron0x336aea0()*0.079654);
}

double NNfunction_sb_sLuL::synapse0x3374910() {
   return (neuron0x336b1e0()*0.0560791);
}

double NNfunction_sb_sLuL::synapse0x3374950() {
   return (neuron0x336b520()*-0.618768);
}

double NNfunction_sb_sLuL::synapse0x3374990() {
   return (neuron0x336b860()*-0.59215);
}

double NNfunction_sb_sLuL::synapse0x33749d0() {
   return (neuron0x336bba0()*-0.0682239);
}

double NNfunction_sb_sLuL::synapse0x3374a10() {
   return (neuron0x336bee0()*-0.021605);
}

double NNfunction_sb_sLuL::synapse0x3374a50() {
   return (neuron0x336c220()*-0.0415691);
}

double NNfunction_sb_sLuL::synapse0x33744e0() {
   return (neuron0x336c560()*-0.0399417);
}

double NNfunction_sb_sLuL::synapse0x3374520() {
   return (neuron0x336cac0()*-0.0922348);
}

double NNfunction_sb_sLuL::synapse0x33712b0() {
   return (neuron0x336cce0()*-0.0148043);
}

double NNfunction_sb_sLuL::synapse0x33712f0() {
   return (neuron0x336d020()*0.0130498);
}

double NNfunction_sb_sLuL::synapse0x3371330() {
   return (neuron0x336d360()*0.0531249);
}

double NNfunction_sb_sLuL::synapse0x3371370() {
   return (neuron0x336d6a0()*0.0302784);
}

double NNfunction_sb_sLuL::synapse0x33713b0() {
   return (neuron0x336d9e0()*0.0150324);
}

double NNfunction_sb_sLuL::synapse0x33713f0() {
   return (neuron0x336dd20()*-0.0680858);
}

double NNfunction_sb_sLuL::synapse0x3371770() {
   return (neuron0x33691f0()*0.304565);
}

double NNfunction_sb_sLuL::synapse0x33717b0() {
   return (neuron0x33694a0()*0.0216767);
}

double NNfunction_sb_sLuL::synapse0x33717f0() {
   return (neuron0x33697e0()*-0.13816);
}

double NNfunction_sb_sLuL::synapse0x3371830() {
   return (neuron0x3369b20()*0.669449);
}

double NNfunction_sb_sLuL::synapse0x3371870() {
   return (neuron0x3369e60()*1.05379);
}

double NNfunction_sb_sLuL::synapse0x33718b0() {
   return (neuron0x336a1a0()*0.241187);
}

double NNfunction_sb_sLuL::synapse0x33718f0() {
   return (neuron0x336a4e0()*-0.342831);
}

double NNfunction_sb_sLuL::synapse0x3371930() {
   return (neuron0x336a820()*0.487379);
}

double NNfunction_sb_sLuL::synapse0x3371970() {
   return (neuron0x336ab60()*0.378795);
}

double NNfunction_sb_sLuL::synapse0x33719b0() {
   return (neuron0x336aea0()*0.213907);
}

double NNfunction_sb_sLuL::synapse0x33719f0() {
   return (neuron0x336b1e0()*-0.360062);
}

double NNfunction_sb_sLuL::synapse0x3371a30() {
   return (neuron0x336b520()*-0.270808);
}

double NNfunction_sb_sLuL::synapse0x3371a70() {
   return (neuron0x336b860()*-0.425171);
}

double NNfunction_sb_sLuL::synapse0x3375bb0() {
   return (neuron0x336bba0()*-0.0372066);
}

double NNfunction_sb_sLuL::synapse0x3375bf0() {
   return (neuron0x336bee0()*0.00241203);
}

double NNfunction_sb_sLuL::synapse0x3375c30() {
   return (neuron0x336c220()*-0.717586);
}

double NNfunction_sb_sLuL::synapse0x33715c0() {
   return (neuron0x336c560()*0.312147);
}

double NNfunction_sb_sLuL::synapse0x3371600() {
   return (neuron0x336cac0()*0.0993917);
}

double NNfunction_sb_sLuL::synapse0x3375d80() {
   return (neuron0x336cce0()*-1.55592);
}

double NNfunction_sb_sLuL::synapse0x3375dc0() {
   return (neuron0x336d020()*-0.25983);
}

double NNfunction_sb_sLuL::synapse0x3375e00() {
   return (neuron0x336d360()*-1.01025);
}

double NNfunction_sb_sLuL::synapse0x3375e40() {
   return (neuron0x336d6a0()*0.856322);
}

double NNfunction_sb_sLuL::synapse0x3375e80() {
   return (neuron0x336d9e0()*0.702758);
}

double NNfunction_sb_sLuL::synapse0x3375ec0() {
   return (neuron0x336dd20()*-0.522525);
}

double NNfunction_sb_sLuL::synapse0x3376240() {
   return (neuron0x33691f0()*0.0129497);
}

double NNfunction_sb_sLuL::synapse0x3376280() {
   return (neuron0x33694a0()*0.319921);
}

double NNfunction_sb_sLuL::synapse0x33762c0() {
   return (neuron0x33697e0()*-0.330801);
}

double NNfunction_sb_sLuL::synapse0x3376300() {
   return (neuron0x3369b20()*-0.0912232);
}

double NNfunction_sb_sLuL::synapse0x3376340() {
   return (neuron0x3369e60()*0.175599);
}

double NNfunction_sb_sLuL::synapse0x3376380() {
   return (neuron0x336a1a0()*-0.910434);
}

double NNfunction_sb_sLuL::synapse0x33763c0() {
   return (neuron0x336a4e0()*-0.256583);
}

double NNfunction_sb_sLuL::synapse0x3376400() {
   return (neuron0x336a820()*-0.620261);
}

double NNfunction_sb_sLuL::synapse0x3376440() {
   return (neuron0x336ab60()*-0.554586);
}

double NNfunction_sb_sLuL::synapse0x3376480() {
   return (neuron0x336aea0()*0.00171936);
}

double NNfunction_sb_sLuL::synapse0x33764c0() {
   return (neuron0x336b1e0()*0.347067);
}

double NNfunction_sb_sLuL::synapse0x3376500() {
   return (neuron0x336b520()*-0.392052);
}

double NNfunction_sb_sLuL::synapse0x3376540() {
   return (neuron0x336b860()*-0.158527);
}

double NNfunction_sb_sLuL::synapse0x3376580() {
   return (neuron0x336bba0()*0.691007);
}

double NNfunction_sb_sLuL::synapse0x33765c0() {
   return (neuron0x336bee0()*-0.24099);
}

double NNfunction_sb_sLuL::synapse0x3376600() {
   return (neuron0x336c220()*-0.457449);
}

double NNfunction_sb_sLuL::synapse0x3376090() {
   return (neuron0x336c560()*0.0626208);
}

double NNfunction_sb_sLuL::synapse0x33760d0() {
   return (neuron0x336cac0()*-0.0270291);
}

double NNfunction_sb_sLuL::synapse0x3376750() {
   return (neuron0x336cce0()*0.440647);
}

double NNfunction_sb_sLuL::synapse0x3376790() {
   return (neuron0x336d020()*0.943643);
}

double NNfunction_sb_sLuL::synapse0x33767d0() {
   return (neuron0x336d360()*1.32736);
}

double NNfunction_sb_sLuL::synapse0x3376810() {
   return (neuron0x336d6a0()*0.457337);
}

double NNfunction_sb_sLuL::synapse0x3376850() {
   return (neuron0x336d9e0()*0.256635);
}

double NNfunction_sb_sLuL::synapse0x3376890() {
   return (neuron0x336dd20()*0.0115985);
}

double NNfunction_sb_sLuL::synapse0x3376c10() {
   return (neuron0x33691f0()*0.384085);
}

double NNfunction_sb_sLuL::synapse0x3376c50() {
   return (neuron0x33694a0()*0.0243615);
}

double NNfunction_sb_sLuL::synapse0x3376c90() {
   return (neuron0x33697e0()*0.428055);
}

double NNfunction_sb_sLuL::synapse0x3376cd0() {
   return (neuron0x3369b20()*0.426315);
}

double NNfunction_sb_sLuL::synapse0x3376d10() {
   return (neuron0x3369e60()*-0.73919);
}

double NNfunction_sb_sLuL::synapse0x3376d50() {
   return (neuron0x336a1a0()*0.0238455);
}

double NNfunction_sb_sLuL::synapse0x3376d90() {
   return (neuron0x336a4e0()*0.045042);
}

double NNfunction_sb_sLuL::synapse0x3376dd0() {
   return (neuron0x336a820()*-0.276374);
}

double NNfunction_sb_sLuL::synapse0x3376e10() {
   return (neuron0x336ab60()*0.480501);
}

double NNfunction_sb_sLuL::synapse0x3376e50() {
   return (neuron0x336aea0()*0.759621);
}

double NNfunction_sb_sLuL::synapse0x3376e90() {
   return (neuron0x336b1e0()*0.480131);
}

double NNfunction_sb_sLuL::synapse0x3376ed0() {
   return (neuron0x336b520()*-0.10212);
}

double NNfunction_sb_sLuL::synapse0x3376f10() {
   return (neuron0x336b860()*-0.845223);
}

double NNfunction_sb_sLuL::synapse0x3376f50() {
   return (neuron0x336bba0()*-0.0803526);
}

double NNfunction_sb_sLuL::synapse0x3376f90() {
   return (neuron0x336bee0()*0.0247503);
}

double NNfunction_sb_sLuL::synapse0x3376fd0() {
   return (neuron0x336c220()*-0.0932145);
}

double NNfunction_sb_sLuL::synapse0x3376a60() {
   return (neuron0x336c560()*0.0072439);
}

double NNfunction_sb_sLuL::synapse0x3376aa0() {
   return (neuron0x336cac0()*-0.0876641);
}

double NNfunction_sb_sLuL::synapse0x3377120() {
   return (neuron0x336cce0()*0.153136);
}

double NNfunction_sb_sLuL::synapse0x3377160() {
   return (neuron0x336d020()*-0.320734);
}

double NNfunction_sb_sLuL::synapse0x33771a0() {
   return (neuron0x336d360()*0.0876477);
}

double NNfunction_sb_sLuL::synapse0x33771e0() {
   return (neuron0x336d6a0()*0.167593);
}

double NNfunction_sb_sLuL::synapse0x3377220() {
   return (neuron0x336d9e0()*0.0641308);
}

double NNfunction_sb_sLuL::synapse0x3377260() {
   return (neuron0x336dd20()*0.527836);
}

double NNfunction_sb_sLuL::synapse0x33775e0() {
   return (neuron0x33691f0()*0.0171699);
}

double NNfunction_sb_sLuL::synapse0x3377620() {
   return (neuron0x33694a0()*0.00525476);
}

double NNfunction_sb_sLuL::synapse0x3377660() {
   return (neuron0x33697e0()*0.0272847);
}

double NNfunction_sb_sLuL::synapse0x33776a0() {
   return (neuron0x3369b20()*-0.061928);
}

double NNfunction_sb_sLuL::synapse0x33776e0() {
   return (neuron0x3369e60()*0.0307715);
}

double NNfunction_sb_sLuL::synapse0x3377720() {
   return (neuron0x336a1a0()*0.000235181);
}

double NNfunction_sb_sLuL::synapse0x3377760() {
   return (neuron0x336a4e0()*0.00420401);
}

double NNfunction_sb_sLuL::synapse0x33777a0() {
   return (neuron0x336a820()*-0.00152884);
}

double NNfunction_sb_sLuL::synapse0x33777e0() {
   return (neuron0x336ab60()*-0.00515938);
}

double NNfunction_sb_sLuL::synapse0x3377820() {
   return (neuron0x336aea0()*-0.00496152);
}

double NNfunction_sb_sLuL::synapse0x3377860() {
   return (neuron0x336b1e0()*0.00901517);
}

double NNfunction_sb_sLuL::synapse0x33778a0() {
   return (neuron0x336b520()*-1.16646);
}

double NNfunction_sb_sLuL::synapse0x33778e0() {
   return (neuron0x336b860()*0.317238);
}

double NNfunction_sb_sLuL::synapse0x3377920() {
   return (neuron0x336bba0()*-0.00411835);
}

double NNfunction_sb_sLuL::synapse0x3377960() {
   return (neuron0x336bee0()*0.000219955);
}

double NNfunction_sb_sLuL::synapse0x33779a0() {
   return (neuron0x336c220()*-0.0366803);
}

double NNfunction_sb_sLuL::synapse0x3377430() {
   return (neuron0x336c560()*-0.00254188);
}

double NNfunction_sb_sLuL::synapse0x3377470() {
   return (neuron0x336cac0()*-0.0383658);
}

double NNfunction_sb_sLuL::synapse0x3377af0() {
   return (neuron0x336cce0()*-0.021158);
}

double NNfunction_sb_sLuL::synapse0x3377b30() {
   return (neuron0x336d020()*-0.0018012);
}

double NNfunction_sb_sLuL::synapse0x3377b70() {
   return (neuron0x336d360()*-0.0107119);
}

double NNfunction_sb_sLuL::synapse0x3377bb0() {
   return (neuron0x336d6a0()*-0.00158014);
}

double NNfunction_sb_sLuL::synapse0x3377bf0() {
   return (neuron0x336d9e0()*0.00649559);
}

double NNfunction_sb_sLuL::synapse0x3377c30() {
   return (neuron0x336dd20()*0.0125954);
}

double NNfunction_sb_sLuL::synapse0x3377fb0() {
   return (neuron0x33691f0()*-0.370215);
}

double NNfunction_sb_sLuL::synapse0x3369380() {
   return (neuron0x33694a0()*0.366708);
}

double NNfunction_sb_sLuL::synapse0x33693c0() {
   return (neuron0x33697e0()*0.156633);
}

double NNfunction_sb_sLuL::synapse0x33696c0() {
   return (neuron0x3369b20()*-0.469821);
}

double NNfunction_sb_sLuL::synapse0x3369700() {
   return (neuron0x3369e60()*0.260924);
}

double NNfunction_sb_sLuL::synapse0x3369a00() {
   return (neuron0x336a1a0()*-0.387943);
}

double NNfunction_sb_sLuL::synapse0x3369a40() {
   return (neuron0x336a4e0()*-0.434342);
}

double NNfunction_sb_sLuL::synapse0x3369d40() {
   return (neuron0x336a820()*-0.0777402);
}

double NNfunction_sb_sLuL::synapse0x3369d80() {
   return (neuron0x336ab60()*-0.0935598);
}

double NNfunction_sb_sLuL::synapse0x336a080() {
   return (neuron0x336aea0()*0.358154);
}

double NNfunction_sb_sLuL::synapse0x336a0c0() {
   return (neuron0x336b1e0()*0.0681467);
}

double NNfunction_sb_sLuL::synapse0x336a3c0() {
   return (neuron0x336b520()*0.0496626);
}

double NNfunction_sb_sLuL::synapse0x336a400() {
   return (neuron0x336b860()*-0.280191);
}

double NNfunction_sb_sLuL::synapse0x336a700() {
   return (neuron0x336bba0()*0.785199);
}

double NNfunction_sb_sLuL::synapse0x336a740() {
   return (neuron0x336bee0()*0.579058);
}

double NNfunction_sb_sLuL::synapse0x336aa40() {
   return (neuron0x336c220()*-0.592021);
}

double NNfunction_sb_sLuL::synapse0x336aa80() {
   return (neuron0x336c560()*0.348229);
}

double NNfunction_sb_sLuL::synapse0x336ad80() {
   return (neuron0x336cac0()*0.267329);
}

double NNfunction_sb_sLuL::synapse0x336adc0() {
   return (neuron0x336cce0()*-0.154222);
}

double NNfunction_sb_sLuL::synapse0x336b0c0() {
   return (neuron0x336d020()*-0.0139624);
}

double NNfunction_sb_sLuL::synapse0x336b100() {
   return (neuron0x336d360()*0.690241);
}

double NNfunction_sb_sLuL::synapse0x336b400() {
   return (neuron0x336d6a0()*0.397063);
}

double NNfunction_sb_sLuL::synapse0x336b440() {
   return (neuron0x336d9e0()*0.091188);
}

double NNfunction_sb_sLuL::synapse0x336b740() {
   return (neuron0x336dd20()*-0.183111);
}

double NNfunction_sb_sLuL::synapse0x336b780() {
   return (neuron0x33691f0()*-0.646427);
}

double NNfunction_sb_sLuL::synapse0x336c440() {
   return (neuron0x33694a0()*-0.100026);
}

double NNfunction_sb_sLuL::synapse0x336c480() {
   return (neuron0x33697e0()*-0.632256);
}

double NNfunction_sb_sLuL::synapse0x3377e00() {
   return (neuron0x3369b20()*0.300001);
}

double NNfunction_sb_sLuL::synapse0x3377e40() {
   return (neuron0x3369e60()*0.0703934);
}

double NNfunction_sb_sLuL::synapse0x336c780() {
   return (neuron0x336a1a0()*-0.00222242);
}

double NNfunction_sb_sLuL::synapse0x336c7c0() {
   return (neuron0x336a4e0()*-0.367845);
}

double NNfunction_sb_sLuL::synapse0x3124190() {
   return (neuron0x336a820()*0.359126);
}

double NNfunction_sb_sLuL::synapse0x31241d0() {
   return (neuron0x336ab60()*-0.0427864);
}

double NNfunction_sb_sLuL::synapse0x336cf00() {
   return (neuron0x336aea0()*0.00596976);
}

double NNfunction_sb_sLuL::synapse0x336cf40() {
   return (neuron0x336b1e0()*0.528854);
}

double NNfunction_sb_sLuL::synapse0x336d240() {
   return (neuron0x336b520()*-0.493048);
}

double NNfunction_sb_sLuL::synapse0x336d280() {
   return (neuron0x336b860()*0.492735);
}

double NNfunction_sb_sLuL::synapse0x336d580() {
   return (neuron0x336bba0()*0.363206);
}

double NNfunction_sb_sLuL::synapse0x336d5c0() {
   return (neuron0x336bee0()*0.0252652);
}

double NNfunction_sb_sLuL::synapse0x336d8c0() {
   return (neuron0x336c220()*0.0707773);
}

double NNfunction_sb_sLuL::synapse0x336d900() {
   return (neuron0x336c560()*-0.450592);
}

double NNfunction_sb_sLuL::synapse0x336dc00() {
   return (neuron0x336cac0()*0.554794);
}

double NNfunction_sb_sLuL::synapse0x336dc40() {
   return (neuron0x336cce0()*0.389891);
}

double NNfunction_sb_sLuL::synapse0x336df40() {
   return (neuron0x336d020()*-0.42815);
}

double NNfunction_sb_sLuL::synapse0x336df80() {
   return (neuron0x336d360()*1.04421);
}

double NNfunction_sb_sLuL::synapse0x336ba80() {
   return (neuron0x336d6a0()*-0.164556);
}

double NNfunction_sb_sLuL::synapse0x336bac0() {
   return (neuron0x336d9e0()*-0.701736);
}

double NNfunction_sb_sLuL::synapse0x3379d20() {
   return (neuron0x336dd20()*0.344271);
}

double NNfunction_sb_sLuL::synapse0x337a0a0() {
   return (neuron0x33691f0()*0.033133);
}

double NNfunction_sb_sLuL::synapse0x337a0e0() {
   return (neuron0x33694a0()*0.0902797);
}

double NNfunction_sb_sLuL::synapse0x337a120() {
   return (neuron0x33697e0()*-0.0303461);
}

double NNfunction_sb_sLuL::synapse0x337a160() {
   return (neuron0x3369b20()*1.1868);
}

double NNfunction_sb_sLuL::synapse0x337a1a0() {
   return (neuron0x3369e60()*0.266168);
}

double NNfunction_sb_sLuL::synapse0x337a1e0() {
   return (neuron0x336a1a0()*-0.118953);
}

double NNfunction_sb_sLuL::synapse0x337a220() {
   return (neuron0x336a4e0()*-0.658682);
}

double NNfunction_sb_sLuL::synapse0x337a260() {
   return (neuron0x336a820()*0.191279);
}

double NNfunction_sb_sLuL::synapse0x337a2a0() {
   return (neuron0x336ab60()*-0.0151506);
}

double NNfunction_sb_sLuL::synapse0x337a2e0() {
   return (neuron0x336aea0()*0.0515631);
}

double NNfunction_sb_sLuL::synapse0x337a320() {
   return (neuron0x336b1e0()*0.0582371);
}

double NNfunction_sb_sLuL::synapse0x337a360() {
   return (neuron0x336b520()*-0.462049);
}

double NNfunction_sb_sLuL::synapse0x337a3a0() {
   return (neuron0x336b860()*-1.02883);
}

double NNfunction_sb_sLuL::synapse0x337a3e0() {
   return (neuron0x336bba0()*-0.234005);
}

double NNfunction_sb_sLuL::synapse0x337a420() {
   return (neuron0x336bee0()*-0.145545);
}

double NNfunction_sb_sLuL::synapse0x337a460() {
   return (neuron0x336c220()*0.152637);
}

double NNfunction_sb_sLuL::synapse0x3379ef0() {
   return (neuron0x336c560()*0.0754335);
}

double NNfunction_sb_sLuL::synapse0x3379f30() {
   return (neuron0x336cac0()*-0.0939678);
}

double NNfunction_sb_sLuL::synapse0x337a5b0() {
   return (neuron0x336cce0()*-0.0578331);
}

double NNfunction_sb_sLuL::synapse0x337a5f0() {
   return (neuron0x336d020()*0.00595938);
}

double NNfunction_sb_sLuL::synapse0x337a630() {
   return (neuron0x336d360()*0.527182);
}

double NNfunction_sb_sLuL::synapse0x337a670() {
   return (neuron0x336d6a0()*0.465979);
}

double NNfunction_sb_sLuL::synapse0x337a6b0() {
   return (neuron0x336d9e0()*-0.0568732);
}

double NNfunction_sb_sLuL::synapse0x337a6f0() {
   return (neuron0x336dd20()*0.285813);
}

double NNfunction_sb_sLuL::synapse0x337aa70() {
   return (neuron0x33691f0()*0.0565516);
}

double NNfunction_sb_sLuL::synapse0x337aab0() {
   return (neuron0x33694a0()*0.248519);
}

double NNfunction_sb_sLuL::synapse0x337aaf0() {
   return (neuron0x33697e0()*0.536291);
}

double NNfunction_sb_sLuL::synapse0x337ab30() {
   return (neuron0x3369b20()*-0.750281);
}

double NNfunction_sb_sLuL::synapse0x337ab70() {
   return (neuron0x3369e60()*-0.0589435);
}

double NNfunction_sb_sLuL::synapse0x337abb0() {
   return (neuron0x336a1a0()*0.451986);
}

double NNfunction_sb_sLuL::synapse0x337abf0() {
   return (neuron0x336a4e0()*0.0675267);
}

double NNfunction_sb_sLuL::synapse0x337ac30() {
   return (neuron0x336a820()*-0.167945);
}

double NNfunction_sb_sLuL::synapse0x337ac70() {
   return (neuron0x336ab60()*-0.42417);
}

double NNfunction_sb_sLuL::synapse0x337acb0() {
   return (neuron0x336aea0()*0.301879);
}

double NNfunction_sb_sLuL::synapse0x337acf0() {
   return (neuron0x336b1e0()*0.474547);
}

double NNfunction_sb_sLuL::synapse0x337ad30() {
   return (neuron0x336b520()*-0.266559);
}

double NNfunction_sb_sLuL::synapse0x337ad70() {
   return (neuron0x336b860()*-0.831309);
}

double NNfunction_sb_sLuL::synapse0x337adb0() {
   return (neuron0x336bba0()*0.0107784);
}

double NNfunction_sb_sLuL::synapse0x337adf0() {
   return (neuron0x336bee0()*0.234685);
}

double NNfunction_sb_sLuL::synapse0x337ae30() {
   return (neuron0x336c220()*0.404242);
}

double NNfunction_sb_sLuL::synapse0x337a8c0() {
   return (neuron0x336c560()*-0.547599);
}

double NNfunction_sb_sLuL::synapse0x337a900() {
   return (neuron0x336cac0()*-0.169852);
}

double NNfunction_sb_sLuL::synapse0x337af80() {
   return (neuron0x336cce0()*0.052022);
}

double NNfunction_sb_sLuL::synapse0x337afc0() {
   return (neuron0x336d020()*-0.529483);
}

double NNfunction_sb_sLuL::synapse0x337b000() {
   return (neuron0x336d360()*-0.1074);
}

double NNfunction_sb_sLuL::synapse0x337b040() {
   return (neuron0x336d6a0()*0.497617);
}

double NNfunction_sb_sLuL::synapse0x337b080() {
   return (neuron0x336d9e0()*0.0495291);
}

double NNfunction_sb_sLuL::synapse0x337b0c0() {
   return (neuron0x336dd20()*0.0888196);
}

double NNfunction_sb_sLuL::synapse0x337b440() {
   return (neuron0x33691f0()*0.36098);
}

double NNfunction_sb_sLuL::synapse0x337b480() {
   return (neuron0x33694a0()*-0.231833);
}

double NNfunction_sb_sLuL::synapse0x337b4c0() {
   return (neuron0x33697e0()*-0.230966);
}

double NNfunction_sb_sLuL::synapse0x337b500() {
   return (neuron0x3369b20()*0.292283);
}

double NNfunction_sb_sLuL::synapse0x337b540() {
   return (neuron0x3369e60()*-0.050038);
}

double NNfunction_sb_sLuL::synapse0x337b580() {
   return (neuron0x336a1a0()*0.447513);
}

double NNfunction_sb_sLuL::synapse0x337b5c0() {
   return (neuron0x336a4e0()*0.11797);
}

double NNfunction_sb_sLuL::synapse0x337b600() {
   return (neuron0x336a820()*0.120827);
}

double NNfunction_sb_sLuL::synapse0x337b640() {
   return (neuron0x336ab60()*-0.0508159);
}

double NNfunction_sb_sLuL::synapse0x337b680() {
   return (neuron0x336aea0()*0.207991);
}

double NNfunction_sb_sLuL::synapse0x337b6c0() {
   return (neuron0x336b1e0()*0.145675);
}

double NNfunction_sb_sLuL::synapse0x337b700() {
   return (neuron0x336b520()*-0.317645);
}

double NNfunction_sb_sLuL::synapse0x337b740() {
   return (neuron0x336b860()*1.26121);
}

double NNfunction_sb_sLuL::synapse0x337b780() {
   return (neuron0x336bba0()*0.260027);
}

double NNfunction_sb_sLuL::synapse0x337b7c0() {
   return (neuron0x336bee0()*0.0769068);
}

double NNfunction_sb_sLuL::synapse0x337b800() {
   return (neuron0x336c220()*-0.406148);
}

double NNfunction_sb_sLuL::synapse0x337b290() {
   return (neuron0x336c560()*-0.0503118);
}

double NNfunction_sb_sLuL::synapse0x337b2d0() {
   return (neuron0x336cac0()*-0.126756);
}

double NNfunction_sb_sLuL::synapse0x337b950() {
   return (neuron0x336cce0()*0.0954583);
}

double NNfunction_sb_sLuL::synapse0x337b990() {
   return (neuron0x336d020()*-0.0348835);
}

double NNfunction_sb_sLuL::synapse0x337b9d0() {
   return (neuron0x336d360()*0.63623);
}

double NNfunction_sb_sLuL::synapse0x337ba10() {
   return (neuron0x336d6a0()*0.27977);
}

double NNfunction_sb_sLuL::synapse0x337ba50() {
   return (neuron0x336d9e0()*-0.326659);
}

double NNfunction_sb_sLuL::synapse0x337ba90() {
   return (neuron0x336dd20()*-0.157708);
}

double NNfunction_sb_sLuL::synapse0x337be10() {
   return (neuron0x33691f0()*0.10937);
}

double NNfunction_sb_sLuL::synapse0x337be50() {
   return (neuron0x33694a0()*-0.0197047);
}

double NNfunction_sb_sLuL::synapse0x337be90() {
   return (neuron0x33697e0()*0.146911);
}

double NNfunction_sb_sLuL::synapse0x337bed0() {
   return (neuron0x3369b20()*-0.0452043);
}

double NNfunction_sb_sLuL::synapse0x337bf10() {
   return (neuron0x3369e60()*0.154006);
}

double NNfunction_sb_sLuL::synapse0x337bf50() {
   return (neuron0x336a1a0()*0.111048);
}

double NNfunction_sb_sLuL::synapse0x337bf90() {
   return (neuron0x336a4e0()*0.159212);
}

double NNfunction_sb_sLuL::synapse0x337bfd0() {
   return (neuron0x336a820()*0.0383143);
}

double NNfunction_sb_sLuL::synapse0x337c010() {
   return (neuron0x336ab60()*0.00287801);
}

double NNfunction_sb_sLuL::synapse0x337c050() {
   return (neuron0x336aea0()*0.0121677);
}

double NNfunction_sb_sLuL::synapse0x337c090() {
   return (neuron0x336b1e0()*-0.031178);
}

double NNfunction_sb_sLuL::synapse0x337c0d0() {
   return (neuron0x336b520()*-0.318417);
}

double NNfunction_sb_sLuL::synapse0x337c110() {
   return (neuron0x336b860()*0.101774);
}

double NNfunction_sb_sLuL::synapse0x337c150() {
   return (neuron0x336bba0()*0.121766);
}

double NNfunction_sb_sLuL::synapse0x337c190() {
   return (neuron0x336bee0()*-0.32284);
}

double NNfunction_sb_sLuL::synapse0x337c1d0() {
   return (neuron0x336c220()*-0.455781);
}

double NNfunction_sb_sLuL::synapse0x337bc60() {
   return (neuron0x336c560()*0.0474033);
}

double NNfunction_sb_sLuL::synapse0x337bca0() {
   return (neuron0x336cac0()*-0.514403);
}

double NNfunction_sb_sLuL::synapse0x337c320() {
   return (neuron0x336cce0()*-0.369627);
}

double NNfunction_sb_sLuL::synapse0x337c360() {
   return (neuron0x336d020()*-0.019074);
}

double NNfunction_sb_sLuL::synapse0x337c3a0() {
   return (neuron0x336d360()*0.0243119);
}

double NNfunction_sb_sLuL::synapse0x337c3e0() {
   return (neuron0x336d6a0()*-0.120965);
}

double NNfunction_sb_sLuL::synapse0x337c420() {
   return (neuron0x336d9e0()*-0.0452799);
}

double NNfunction_sb_sLuL::synapse0x337c460() {
   return (neuron0x336dd20()*0.0547398);
}

double NNfunction_sb_sLuL::synapse0x337c7e0() {
   return (neuron0x33691f0()*-0.225288);
}

double NNfunction_sb_sLuL::synapse0x337c820() {
   return (neuron0x33694a0()*-0.110122);
}

double NNfunction_sb_sLuL::synapse0x337c860() {
   return (neuron0x33697e0()*-0.510505);
}

double NNfunction_sb_sLuL::synapse0x337c8a0() {
   return (neuron0x3369b20()*-0.944781);
}

double NNfunction_sb_sLuL::synapse0x337c8e0() {
   return (neuron0x3369e60()*-0.134145);
}

double NNfunction_sb_sLuL::synapse0x337c920() {
   return (neuron0x336a1a0()*-0.223572);
}

double NNfunction_sb_sLuL::synapse0x337c960() {
   return (neuron0x336a4e0()*-0.0519381);
}

double NNfunction_sb_sLuL::synapse0x337c9a0() {
   return (neuron0x336a820()*0.0853717);
}

double NNfunction_sb_sLuL::synapse0x337c9e0() {
   return (neuron0x336ab60()*0.0522966);
}

double NNfunction_sb_sLuL::synapse0x3374ba0() {
   return (neuron0x336aea0()*0.0905375);
}

double NNfunction_sb_sLuL::synapse0x3374be0() {
   return (neuron0x336b1e0()*-0.0319258);
}

double NNfunction_sb_sLuL::synapse0x3374c20() {
   return (neuron0x336b520()*0.127345);
}

double NNfunction_sb_sLuL::synapse0x3374c60() {
   return (neuron0x336b860()*-0.178886);
}

double NNfunction_sb_sLuL::synapse0x3374ca0() {
   return (neuron0x336bba0()*-0.11366);
}

double NNfunction_sb_sLuL::synapse0x3374ce0() {
   return (neuron0x336bee0()*-0.21881);
}

double NNfunction_sb_sLuL::synapse0x3374d20() {
   return (neuron0x336c220()*-0.0541688);
}

double NNfunction_sb_sLuL::synapse0x337c630() {
   return (neuron0x336c560()*0.0528516);
}

double NNfunction_sb_sLuL::synapse0x337c670() {
   return (neuron0x336cac0()*-0.114509);
}

double NNfunction_sb_sLuL::synapse0x3374e70() {
   return (neuron0x336cce0()*-0.122184);
}

double NNfunction_sb_sLuL::synapse0x3374eb0() {
   return (neuron0x336d020()*0.198459);
}

double NNfunction_sb_sLuL::synapse0x3374ef0() {
   return (neuron0x336d360()*0.0110388);
}

double NNfunction_sb_sLuL::synapse0x3374f30() {
   return (neuron0x336d6a0()*-0.105313);
}

double NNfunction_sb_sLuL::synapse0x3374f70() {
   return (neuron0x336d9e0()*0.0490961);
}

double NNfunction_sb_sLuL::synapse0x3374fb0() {
   return (neuron0x336dd20()*-0.174485);
}

double NNfunction_sb_sLuL::synapse0x3375330() {
   return (neuron0x33691f0()*0.817239);
}

double NNfunction_sb_sLuL::synapse0x3375370() {
   return (neuron0x33694a0()*0.420813);
}

double NNfunction_sb_sLuL::synapse0x33753b0() {
   return (neuron0x33697e0()*-0.0287074);
}

double NNfunction_sb_sLuL::synapse0x33753f0() {
   return (neuron0x3369b20()*-0.130402);
}

double NNfunction_sb_sLuL::synapse0x3375430() {
   return (neuron0x3369e60()*-0.39218);
}

double NNfunction_sb_sLuL::synapse0x3375470() {
   return (neuron0x336a1a0()*0.353046);
}

double NNfunction_sb_sLuL::synapse0x33754b0() {
   return (neuron0x336a4e0()*-0.173343);
}

double NNfunction_sb_sLuL::synapse0x33754f0() {
   return (neuron0x336a820()*-0.0650667);
}

double NNfunction_sb_sLuL::synapse0x3375530() {
   return (neuron0x336ab60()*-0.5436);
}

double NNfunction_sb_sLuL::synapse0x3375570() {
   return (neuron0x336aea0()*-0.518746);
}

double NNfunction_sb_sLuL::synapse0x33755b0() {
   return (neuron0x336b1e0()*0.0662709);
}

double NNfunction_sb_sLuL::synapse0x33755f0() {
   return (neuron0x336b520()*0.559627);
}

double NNfunction_sb_sLuL::synapse0x3375630() {
   return (neuron0x336b860()*-1.01998);
}

double NNfunction_sb_sLuL::synapse0x3375670() {
   return (neuron0x336bba0()*0.0571898);
}

double NNfunction_sb_sLuL::synapse0x33756b0() {
   return (neuron0x336bee0()*0.0816398);
}

double NNfunction_sb_sLuL::synapse0x33756f0() {
   return (neuron0x336c220()*-0.0819141);
}

double NNfunction_sb_sLuL::synapse0x3375180() {
   return (neuron0x336c560()*-0.286191);
}

double NNfunction_sb_sLuL::synapse0x33751c0() {
   return (neuron0x336cac0()*-0.434109);
}

double NNfunction_sb_sLuL::synapse0x3375840() {
   return (neuron0x336cce0()*-0.0843108);
}

double NNfunction_sb_sLuL::synapse0x3375880() {
   return (neuron0x336d020()*-0.401354);
}

double NNfunction_sb_sLuL::synapse0x33758c0() {
   return (neuron0x336d360()*0.78322);
}

double NNfunction_sb_sLuL::synapse0x3375900() {
   return (neuron0x336d6a0()*0.718425);
}

double NNfunction_sb_sLuL::synapse0x3375940() {
   return (neuron0x336d9e0()*-0.219552);
}

double NNfunction_sb_sLuL::synapse0x3375980() {
   return (neuron0x336dd20()*-0.196422);
}

double NNfunction_sb_sLuL::synapse0x3375b50() {
   return (neuron0x33691f0()*0.61884);
}

double NNfunction_sb_sLuL::synapse0x337ebe0() {
   return (neuron0x33694a0()*0.389437);
}

double NNfunction_sb_sLuL::synapse0x337ec20() {
   return (neuron0x33697e0()*-0.290667);
}

double NNfunction_sb_sLuL::synapse0x337ec60() {
   return (neuron0x3369b20()*0.506046);
}

double NNfunction_sb_sLuL::synapse0x337eca0() {
   return (neuron0x3369e60()*-0.138043);
}

double NNfunction_sb_sLuL::synapse0x337ece0() {
   return (neuron0x336a1a0()*0.114555);
}

double NNfunction_sb_sLuL::synapse0x337ed20() {
   return (neuron0x336a4e0()*-0.153311);
}

double NNfunction_sb_sLuL::synapse0x337ed60() {
   return (neuron0x336a820()*0.227614);
}

double NNfunction_sb_sLuL::synapse0x337eda0() {
   return (neuron0x336ab60()*-0.229374);
}

double NNfunction_sb_sLuL::synapse0x337ede0() {
   return (neuron0x336aea0()*-0.416283);
}

double NNfunction_sb_sLuL::synapse0x337ee20() {
   return (neuron0x336b1e0()*-0.0886138);
}

double NNfunction_sb_sLuL::synapse0x337ee60() {
   return (neuron0x336b520()*0.941675);
}

double NNfunction_sb_sLuL::synapse0x337eea0() {
   return (neuron0x336b860()*-0.263701);
}

double NNfunction_sb_sLuL::synapse0x337eee0() {
   return (neuron0x336bba0()*-0.0222541);
}

double NNfunction_sb_sLuL::synapse0x337ef20() {
   return (neuron0x336bee0()*0.422335);
}

double NNfunction_sb_sLuL::synapse0x337ef60() {
   return (neuron0x336c220()*0.206238);
}

double NNfunction_sb_sLuL::synapse0x337ea30() {
   return (neuron0x336c560()*0.235665);
}

double NNfunction_sb_sLuL::synapse0x337ea70() {
   return (neuron0x336cac0()*0.149851);
}

double NNfunction_sb_sLuL::synapse0x337f0b0() {
   return (neuron0x336cce0()*0.0432541);
}

double NNfunction_sb_sLuL::synapse0x337f0f0() {
   return (neuron0x336d020()*0.158942);
}

double NNfunction_sb_sLuL::synapse0x337f130() {
   return (neuron0x336d360()*0.0766971);
}

double NNfunction_sb_sLuL::synapse0x337f170() {
   return (neuron0x336d6a0()*0.246467);
}

double NNfunction_sb_sLuL::synapse0x337f1b0() {
   return (neuron0x336d9e0()*-0.250446);
}

double NNfunction_sb_sLuL::synapse0x337f1f0() {
   return (neuron0x336dd20()*0.135188);
}

double NNfunction_sb_sLuL::synapse0x337f570() {
   return (neuron0x33691f0()*0.00142152);
}

double NNfunction_sb_sLuL::synapse0x337f5b0() {
   return (neuron0x33694a0()*-0.00153341);
}

double NNfunction_sb_sLuL::synapse0x337f5f0() {
   return (neuron0x33697e0()*0.0220522);
}

double NNfunction_sb_sLuL::synapse0x337f630() {
   return (neuron0x3369b20()*1.53467);
}

double NNfunction_sb_sLuL::synapse0x337f670() {
   return (neuron0x3369e60()*-0.00167831);
}

double NNfunction_sb_sLuL::synapse0x337f6b0() {
   return (neuron0x336a1a0()*-0.0182715);
}

double NNfunction_sb_sLuL::synapse0x337f6f0() {
   return (neuron0x336a4e0()*-0.0301398);
}

double NNfunction_sb_sLuL::synapse0x337f730() {
   return (neuron0x336a820()*0.0154579);
}

double NNfunction_sb_sLuL::synapse0x337f770() {
   return (neuron0x336ab60()*0.00732018);
}

double NNfunction_sb_sLuL::synapse0x337f7b0() {
   return (neuron0x336aea0()*0.0101278);
}

double NNfunction_sb_sLuL::synapse0x337f7f0() {
   return (neuron0x336b1e0()*0.015984);
}

double NNfunction_sb_sLuL::synapse0x337f830() {
   return (neuron0x336b520()*0.0865674);
}

double NNfunction_sb_sLuL::synapse0x337f870() {
   return (neuron0x336b860()*0.105751);
}

double NNfunction_sb_sLuL::synapse0x337f8b0() {
   return (neuron0x336bba0()*0.00850376);
}

double NNfunction_sb_sLuL::synapse0x337f8f0() {
   return (neuron0x336bee0()*0.000358607);
}

double NNfunction_sb_sLuL::synapse0x337f930() {
   return (neuron0x336c220()*-0.0291369);
}

double NNfunction_sb_sLuL::synapse0x337f3c0() {
   return (neuron0x336c560()*-0.014413);
}

double NNfunction_sb_sLuL::synapse0x337f400() {
   return (neuron0x336cac0()*-0.000268525);
}

double NNfunction_sb_sLuL::synapse0x337fa80() {
   return (neuron0x336cce0()*-0.033258);
}

double NNfunction_sb_sLuL::synapse0x337fac0() {
   return (neuron0x336d020()*-0.0318757);
}

double NNfunction_sb_sLuL::synapse0x337fb00() {
   return (neuron0x336d360()*-0.0115307);
}

double NNfunction_sb_sLuL::synapse0x337fb40() {
   return (neuron0x336d6a0()*-0.0109656);
}

double NNfunction_sb_sLuL::synapse0x337fb80() {
   return (neuron0x336d9e0()*0.00361543);
}

double NNfunction_sb_sLuL::synapse0x337fbc0() {
   return (neuron0x336dd20()*0.0103659);
}

double NNfunction_sb_sLuL::synapse0x337ff40() {
   return (neuron0x33691f0()*0.14349);
}

double NNfunction_sb_sLuL::synapse0x337ff80() {
   return (neuron0x33694a0()*0.596078);
}

double NNfunction_sb_sLuL::synapse0x337ffc0() {
   return (neuron0x33697e0()*-0.241523);
}

double NNfunction_sb_sLuL::synapse0x3380000() {
   return (neuron0x3369b20()*-0.474264);
}

double NNfunction_sb_sLuL::synapse0x3380040() {
   return (neuron0x3369e60()*0.00251061);
}

double NNfunction_sb_sLuL::synapse0x3380080() {
   return (neuron0x336a1a0()*-0.150317);
}

double NNfunction_sb_sLuL::synapse0x33800c0() {
   return (neuron0x336a4e0()*-0.531743);
}

double NNfunction_sb_sLuL::synapse0x3380100() {
   return (neuron0x336a820()*0.124228);
}

double NNfunction_sb_sLuL::synapse0x3380140() {
   return (neuron0x336ab60()*-0.125594);
}

double NNfunction_sb_sLuL::synapse0x3380180() {
   return (neuron0x336aea0()*-0.0717359);
}

double NNfunction_sb_sLuL::synapse0x33801c0() {
   return (neuron0x336b1e0()*0.100497);
}

double NNfunction_sb_sLuL::synapse0x3380200() {
   return (neuron0x336b520()*-0.790226);
}

double NNfunction_sb_sLuL::synapse0x3380240() {
   return (neuron0x336b860()*-0.959213);
}

double NNfunction_sb_sLuL::synapse0x3380280() {
   return (neuron0x336bba0()*-0.0812374);
}

double NNfunction_sb_sLuL::synapse0x33802c0() {
   return (neuron0x336bee0()*-0.328183);
}

double NNfunction_sb_sLuL::synapse0x3380300() {
   return (neuron0x336c220()*0.376671);
}

double NNfunction_sb_sLuL::synapse0x337fd90() {
   return (neuron0x336c560()*0.156094);
}

double NNfunction_sb_sLuL::synapse0x337fdd0() {
   return (neuron0x336cac0()*0.272352);
}

double NNfunction_sb_sLuL::synapse0x3380450() {
   return (neuron0x336cce0()*0.797902);
}

double NNfunction_sb_sLuL::synapse0x3380490() {
   return (neuron0x336d020()*-0.185389);
}

double NNfunction_sb_sLuL::synapse0x33804d0() {
   return (neuron0x336d360()*-0.432337);
}

double NNfunction_sb_sLuL::synapse0x3380510() {
   return (neuron0x336d6a0()*-0.21058);
}

double NNfunction_sb_sLuL::synapse0x3380550() {
   return (neuron0x336d9e0()*-0.140896);
}

double NNfunction_sb_sLuL::synapse0x3380590() {
   return (neuron0x336dd20()*0.298632);
}

double NNfunction_sb_sLuL::synapse0x3380910() {
   return (neuron0x33691f0()*-0.0672182);
}

double NNfunction_sb_sLuL::synapse0x3380950() {
   return (neuron0x33694a0()*0.0958467);
}

double NNfunction_sb_sLuL::synapse0x3380990() {
   return (neuron0x33697e0()*-0.556778);
}

double NNfunction_sb_sLuL::synapse0x33809d0() {
   return (neuron0x3369b20()*0.617908);
}

double NNfunction_sb_sLuL::synapse0x3380a10() {
   return (neuron0x3369e60()*-0.0243647);
}

double NNfunction_sb_sLuL::synapse0x3380a50() {
   return (neuron0x336a1a0()*-0.266195);
}

double NNfunction_sb_sLuL::synapse0x3380a90() {
   return (neuron0x336a4e0()*0.0843832);
}

double NNfunction_sb_sLuL::synapse0x3380ad0() {
   return (neuron0x336a820()*-0.299203);
}

double NNfunction_sb_sLuL::synapse0x3380b10() {
   return (neuron0x336ab60()*-0.490878);
}

double NNfunction_sb_sLuL::synapse0x3380b50() {
   return (neuron0x336aea0()*-0.0069221);
}

double NNfunction_sb_sLuL::synapse0x3380b90() {
   return (neuron0x336b1e0()*0.0450473);
}

double NNfunction_sb_sLuL::synapse0x3380bd0() {
   return (neuron0x336b520()*0.165242);
}

double NNfunction_sb_sLuL::synapse0x3380c10() {
   return (neuron0x336b860()*0.615156);
}

double NNfunction_sb_sLuL::synapse0x3380c50() {
   return (neuron0x336bba0()*-0.638202);
}

double NNfunction_sb_sLuL::synapse0x3380c90() {
   return (neuron0x336bee0()*0.0158631);
}

double NNfunction_sb_sLuL::synapse0x3380cd0() {
   return (neuron0x336c220()*-0.223034);
}

double NNfunction_sb_sLuL::synapse0x3380760() {
   return (neuron0x336c560()*-0.296634);
}

double NNfunction_sb_sLuL::synapse0x33807a0() {
   return (neuron0x336cac0()*-0.340564);
}

double NNfunction_sb_sLuL::synapse0x3380e20() {
   return (neuron0x336cce0()*0.707345);
}

double NNfunction_sb_sLuL::synapse0x3380e60() {
   return (neuron0x336d020()*0.201158);
}

double NNfunction_sb_sLuL::synapse0x3380ea0() {
   return (neuron0x336d360()*0.379109);
}

double NNfunction_sb_sLuL::synapse0x3380ee0() {
   return (neuron0x336d6a0()*0.23505);
}

double NNfunction_sb_sLuL::synapse0x3380f20() {
   return (neuron0x336d9e0()*0.0308118);
}

double NNfunction_sb_sLuL::synapse0x3380f60() {
   return (neuron0x336dd20()*-0.254887);
}

double NNfunction_sb_sLuL::synapse0x33812e0() {
   return (neuron0x33691f0()*-0.0306928);
}

double NNfunction_sb_sLuL::synapse0x3381320() {
   return (neuron0x33694a0()*0.0746447);
}

double NNfunction_sb_sLuL::synapse0x3381360() {
   return (neuron0x33697e0()*0.532309);
}

double NNfunction_sb_sLuL::synapse0x33813a0() {
   return (neuron0x3369b20()*-0.93198);
}

double NNfunction_sb_sLuL::synapse0x33813e0() {
   return (neuron0x3369e60()*0.512249);
}

double NNfunction_sb_sLuL::synapse0x3381420() {
   return (neuron0x336a1a0()*-0.25294);
}

double NNfunction_sb_sLuL::synapse0x3381460() {
   return (neuron0x336a4e0()*-0.209422);
}

double NNfunction_sb_sLuL::synapse0x33814a0() {
   return (neuron0x336a820()*0.219758);
}

double NNfunction_sb_sLuL::synapse0x33814e0() {
   return (neuron0x336ab60()*0.166086);
}

double NNfunction_sb_sLuL::synapse0x3381520() {
   return (neuron0x336aea0()*-0.314571);
}

double NNfunction_sb_sLuL::synapse0x3381560() {
   return (neuron0x336b1e0()*0.375058);
}

double NNfunction_sb_sLuL::synapse0x33815a0() {
   return (neuron0x336b520()*-0.0845292);
}

double NNfunction_sb_sLuL::synapse0x33815e0() {
   return (neuron0x336b860()*-0.0398638);
}

double NNfunction_sb_sLuL::synapse0x3381620() {
   return (neuron0x336bba0()*0.386575);
}

double NNfunction_sb_sLuL::synapse0x3381660() {
   return (neuron0x336bee0()*-0.217712);
}

double NNfunction_sb_sLuL::synapse0x33816a0() {
   return (neuron0x336c220()*-0.35921);
}

double NNfunction_sb_sLuL::synapse0x3381130() {
   return (neuron0x336c560()*0.0577462);
}

double NNfunction_sb_sLuL::synapse0x3381170() {
   return (neuron0x336cac0()*0.120703);
}

double NNfunction_sb_sLuL::synapse0x33817f0() {
   return (neuron0x336cce0()*-0.435565);
}

double NNfunction_sb_sLuL::synapse0x3381830() {
   return (neuron0x336d020()*-0.106851);
}

double NNfunction_sb_sLuL::synapse0x3381870() {
   return (neuron0x336d360()*-0.341151);
}

double NNfunction_sb_sLuL::synapse0x33818b0() {
   return (neuron0x336d6a0()*0.580727);
}

double NNfunction_sb_sLuL::synapse0x33818f0() {
   return (neuron0x336d9e0()*-0.640336);
}

double NNfunction_sb_sLuL::synapse0x3381930() {
   return (neuron0x336dd20()*-0.224665);
}

double NNfunction_sb_sLuL::synapse0x3381cb0() {
   return (neuron0x33691f0()*-0.366108);
}

double NNfunction_sb_sLuL::synapse0x3381cf0() {
   return (neuron0x33694a0()*-0.165921);
}

double NNfunction_sb_sLuL::synapse0x3381d30() {
   return (neuron0x33697e0()*-0.743826);
}

double NNfunction_sb_sLuL::synapse0x3381d70() {
   return (neuron0x3369b20()*-0.435693);
}

double NNfunction_sb_sLuL::synapse0x3381db0() {
   return (neuron0x3369e60()*-0.423295);
}

double NNfunction_sb_sLuL::synapse0x3381df0() {
   return (neuron0x336a1a0()*0.478316);
}

double NNfunction_sb_sLuL::synapse0x3381e30() {
   return (neuron0x336a4e0()*0.465952);
}

double NNfunction_sb_sLuL::synapse0x3381e70() {
   return (neuron0x336a820()*0.370005);
}

double NNfunction_sb_sLuL::synapse0x3381eb0() {
   return (neuron0x336ab60()*-0.556219);
}

double NNfunction_sb_sLuL::synapse0x3381ef0() {
   return (neuron0x336aea0()*-0.391914);
}

double NNfunction_sb_sLuL::synapse0x3381f30() {
   return (neuron0x336b1e0()*-0.0864057);
}

double NNfunction_sb_sLuL::synapse0x3381f70() {
   return (neuron0x336b520()*-0.132163);
}

double NNfunction_sb_sLuL::synapse0x3381fb0() {
   return (neuron0x336b860()*-0.120165);
}

double NNfunction_sb_sLuL::synapse0x3381ff0() {
   return (neuron0x336bba0()*-0.214511);
}

double NNfunction_sb_sLuL::synapse0x3382030() {
   return (neuron0x336bee0()*0.356085);
}

double NNfunction_sb_sLuL::synapse0x3382070() {
   return (neuron0x336c220()*0.577953);
}

double NNfunction_sb_sLuL::synapse0x3381b00() {
   return (neuron0x336c560()*-0.157151);
}

double NNfunction_sb_sLuL::synapse0x3381b40() {
   return (neuron0x336cac0()*0.222151);
}

double NNfunction_sb_sLuL::synapse0x33821c0() {
   return (neuron0x336cce0()*-0.581424);
}

double NNfunction_sb_sLuL::synapse0x3382200() {
   return (neuron0x336d020()*0.136479);
}

double NNfunction_sb_sLuL::synapse0x3382240() {
   return (neuron0x336d360()*-0.0881416);
}

double NNfunction_sb_sLuL::synapse0x3382280() {
   return (neuron0x336d6a0()*-0.0568652);
}

double NNfunction_sb_sLuL::synapse0x33822c0() {
   return (neuron0x336d9e0()*-0.0364856);
}

double NNfunction_sb_sLuL::synapse0x3382300() {
   return (neuron0x336dd20()*-0.0956532);
}

double NNfunction_sb_sLuL::synapse0x3382680() {
   return (neuron0x33691f0()*0.0402229);
}

double NNfunction_sb_sLuL::synapse0x33826c0() {
   return (neuron0x33694a0()*0.17472);
}

double NNfunction_sb_sLuL::synapse0x3382700() {
   return (neuron0x33697e0()*0.429739);
}

double NNfunction_sb_sLuL::synapse0x3382740() {
   return (neuron0x3369b20()*2.18347);
}

double NNfunction_sb_sLuL::synapse0x3382780() {
   return (neuron0x3369e60()*0.539307);
}

double NNfunction_sb_sLuL::synapse0x33827c0() {
   return (neuron0x336a1a0()*0.0423416);
}

double NNfunction_sb_sLuL::synapse0x3382800() {
   return (neuron0x336a4e0()*0.0761799);
}

double NNfunction_sb_sLuL::synapse0x3382840() {
   return (neuron0x336a820()*0.152622);
}

double NNfunction_sb_sLuL::synapse0x3382880() {
   return (neuron0x336ab60()*0.0470333);
}

double NNfunction_sb_sLuL::synapse0x33828c0() {
   return (neuron0x336aea0()*-0.285576);
}

double NNfunction_sb_sLuL::synapse0x3382900() {
   return (neuron0x336b1e0()*0.175984);
}

double NNfunction_sb_sLuL::synapse0x3382940() {
   return (neuron0x336b520()*0.516198);
}

double NNfunction_sb_sLuL::synapse0x3382980() {
   return (neuron0x336b860()*0.102327);
}

double NNfunction_sb_sLuL::synapse0x33829c0() {
   return (neuron0x336bba0()*0.151118);
}

double NNfunction_sb_sLuL::synapse0x3382a00() {
   return (neuron0x336bee0()*-0.03056);
}

double NNfunction_sb_sLuL::synapse0x3382a40() {
   return (neuron0x336c220()*-0.129084);
}

double NNfunction_sb_sLuL::synapse0x33824d0() {
   return (neuron0x336c560()*0.00576094);
}

double NNfunction_sb_sLuL::synapse0x3382510() {
   return (neuron0x336cac0()*0.0987082);
}

double NNfunction_sb_sLuL::synapse0x3382b90() {
   return (neuron0x336cce0()*0.0618619);
}

double NNfunction_sb_sLuL::synapse0x3382bd0() {
   return (neuron0x336d020()*0.385233);
}

double NNfunction_sb_sLuL::synapse0x3382c10() {
   return (neuron0x336d360()*-0.177122);
}

double NNfunction_sb_sLuL::synapse0x3382c50() {
   return (neuron0x336d6a0()*0.0185089);
}

double NNfunction_sb_sLuL::synapse0x3382c90() {
   return (neuron0x336d9e0()*0.157037);
}

double NNfunction_sb_sLuL::synapse0x3382cd0() {
   return (neuron0x336dd20()*-0.109921);
}

double NNfunction_sb_sLuL::synapse0x3383050() {
   return (neuron0x33691f0()*0.00862739);
}

double NNfunction_sb_sLuL::synapse0x3383090() {
   return (neuron0x33694a0()*0.0040277);
}

double NNfunction_sb_sLuL::synapse0x33830d0() {
   return (neuron0x33697e0()*0.0274966);
}

double NNfunction_sb_sLuL::synapse0x3383110() {
   return (neuron0x3369b20()*1.63507);
}

double NNfunction_sb_sLuL::synapse0x3383150() {
   return (neuron0x3369e60()*0.0141627);
}

double NNfunction_sb_sLuL::synapse0x3383190() {
   return (neuron0x336a1a0()*-0.017235);
}

double NNfunction_sb_sLuL::synapse0x33831d0() {
   return (neuron0x336a4e0()*-0.033618);
}

double NNfunction_sb_sLuL::synapse0x3383210() {
   return (neuron0x336a820()*0.0173833);
}

double NNfunction_sb_sLuL::synapse0x3383250() {
   return (neuron0x336ab60()*0.00211465);
}

double NNfunction_sb_sLuL::synapse0x3383290() {
   return (neuron0x336aea0()*0.00912305);
}

double NNfunction_sb_sLuL::synapse0x33832d0() {
   return (neuron0x336b1e0()*0.0254377);
}

double NNfunction_sb_sLuL::synapse0x3383310() {
   return (neuron0x336b520()*-0.017023);
}

double NNfunction_sb_sLuL::synapse0x3383350() {
   return (neuron0x336b860()*-0.0403447);
}

double NNfunction_sb_sLuL::synapse0x3383390() {
   return (neuron0x336bba0()*0.012137);
}

double NNfunction_sb_sLuL::synapse0x33833d0() {
   return (neuron0x336bee0()*-0.0121005);
}

double NNfunction_sb_sLuL::synapse0x3383410() {
   return (neuron0x336c220()*-0.0311405);
}

double NNfunction_sb_sLuL::synapse0x3382ea0() {
   return (neuron0x336c560()*-0.0165929);
}

double NNfunction_sb_sLuL::synapse0x3382ee0() {
   return (neuron0x336cac0()*0.00566989);
}

double NNfunction_sb_sLuL::synapse0x3383560() {
   return (neuron0x336cce0()*-0.0372555);
}

double NNfunction_sb_sLuL::synapse0x33835a0() {
   return (neuron0x336d020()*-0.0186437);
}

double NNfunction_sb_sLuL::synapse0x33835e0() {
   return (neuron0x336d360()*-0.018736);
}

double NNfunction_sb_sLuL::synapse0x3383620() {
   return (neuron0x336d6a0()*-0.00313967);
}

double NNfunction_sb_sLuL::synapse0x3383660() {
   return (neuron0x336d9e0()*0.00148599);
}

double NNfunction_sb_sLuL::synapse0x33836a0() {
   return (neuron0x336dd20()*0.00312759);
}

double NNfunction_sb_sLuL::synapse0x3383a20() {
   return (neuron0x33691f0()*0.006854);
}

double NNfunction_sb_sLuL::synapse0x3377ff0() {
   return (neuron0x33694a0()*0.0235916);
}

double NNfunction_sb_sLuL::synapse0x3378030() {
   return (neuron0x33697e0()*0.0298695);
}

double NNfunction_sb_sLuL::synapse0x3378070() {
   return (neuron0x3369b20()*-2.57081);
}

double NNfunction_sb_sLuL::synapse0x33782c0() {
   return (neuron0x3369e60()*0.00147077);
}

double NNfunction_sb_sLuL::synapse0x3378300() {
   return (neuron0x336a1a0()*-0.00590411);
}

double NNfunction_sb_sLuL::synapse0x3378340() {
   return (neuron0x336a4e0()*0.00799109);
}

double NNfunction_sb_sLuL::synapse0x3378590() {
   return (neuron0x336a820()*0.0242382);
}

double NNfunction_sb_sLuL::synapse0x33785d0() {
   return (neuron0x336ab60()*-0.0278761);
}

double NNfunction_sb_sLuL::synapse0x3378820() {
   return (neuron0x336aea0()*0.0016432);
}

double NNfunction_sb_sLuL::synapse0x3378860() {
   return (neuron0x336b1e0()*0.0141754);
}

double NNfunction_sb_sLuL::synapse0x33788a0() {
   return (neuron0x336b520()*0.471773);
}

double NNfunction_sb_sLuL::synapse0x3378af0() {
   return (neuron0x336b860()*1.05117);
}

double NNfunction_sb_sLuL::synapse0x3378b30() {
   return (neuron0x336bba0()*0.00338092);
}

double NNfunction_sb_sLuL::synapse0x3378d80() {
   return (neuron0x336bee0()*0.0143172);
}

double NNfunction_sb_sLuL::synapse0x3378dc0() {
   return (neuron0x336c220()*0.0170004);
}

double NNfunction_sb_sLuL::synapse0x3383870() {
   return (neuron0x336c560()*-0.0233742);
}

double NNfunction_sb_sLuL::synapse0x33838b0() {
   return (neuron0x336cac0()*-0.0456457);
}

double NNfunction_sb_sLuL::synapse0x3378f10() {
   return (neuron0x336cce0()*-0.000434603);
}

double NNfunction_sb_sLuL::synapse0x3379420() {
   return (neuron0x336d020()*-0.0390571);
}

double NNfunction_sb_sLuL::synapse0x3379460() {
   return (neuron0x336d360()*0.0524845);
}

double NNfunction_sb_sLuL::synapse0x33794a0() {
   return (neuron0x336d6a0()*0.022192);
}

double NNfunction_sb_sLuL::synapse0x33796f0() {
   return (neuron0x336d9e0()*0.0162457);
}

double NNfunction_sb_sLuL::synapse0x3379730() {
   return (neuron0x336dd20()*-0.0170568);
}

double NNfunction_sb_sLuL::synapse0x3378fe0() {
   return (neuron0x33691f0()*0.00884662);
}

double NNfunction_sb_sLuL::synapse0x3379020() {
   return (neuron0x33694a0()*-0.0258688);
}

double NNfunction_sb_sLuL::synapse0x3379060() {
   return (neuron0x33697e0()*0.00106453);
}

double NNfunction_sb_sLuL::synapse0x33790a0() {
   return (neuron0x3369b20()*0.172426);
}

double NNfunction_sb_sLuL::synapse0x3379a20() {
   return (neuron0x3369e60()*7.25875e-05);
}

double NNfunction_sb_sLuL::synapse0x3385d70() {
   return (neuron0x336a1a0()*-0.00642963);
}

double NNfunction_sb_sLuL::synapse0x3385db0() {
   return (neuron0x336a4e0()*0.000864831);
}

double NNfunction_sb_sLuL::synapse0x3385df0() {
   return (neuron0x336a820()*-0.00516872);
}

double NNfunction_sb_sLuL::synapse0x3385e30() {
   return (neuron0x336ab60()*0.00301214);
}

double NNfunction_sb_sLuL::synapse0x3385e70() {
   return (neuron0x336aea0()*-0.0153393);
}

double NNfunction_sb_sLuL::synapse0x3385eb0() {
   return (neuron0x336b1e0()*0.0159512);
}

double NNfunction_sb_sLuL::synapse0x3385ef0() {
   return (neuron0x336b520()*-0.652908);
}

double NNfunction_sb_sLuL::synapse0x3385f30() {
   return (neuron0x336b860()*0.82507);
}

double NNfunction_sb_sLuL::synapse0x3385f70() {
   return (neuron0x336bba0()*0.00399167);
}

double NNfunction_sb_sLuL::synapse0x3385fb0() {
   return (neuron0x336bee0()*-0.0195399);
}

double NNfunction_sb_sLuL::synapse0x3385ff0() {
   return (neuron0x336c220()*-0.00508195);
}

double NNfunction_sb_sLuL::synapse0x3379900() {
   return (neuron0x336c560()*-0.00447843);
}

double NNfunction_sb_sLuL::synapse0x3379940() {
   return (neuron0x336cac0()*-0.0227776);
}

double NNfunction_sb_sLuL::synapse0x3386140() {
   return (neuron0x336cce0()*0.0107957);
}

double NNfunction_sb_sLuL::synapse0x3386180() {
   return (neuron0x336d020()*0.00254033);
}

double NNfunction_sb_sLuL::synapse0x33861c0() {
   return (neuron0x336d360()*-0.00617961);
}

double NNfunction_sb_sLuL::synapse0x3386200() {
   return (neuron0x336d6a0()*0.00804438);
}

double NNfunction_sb_sLuL::synapse0x3386240() {
   return (neuron0x336d9e0()*-0.0201103);
}

double NNfunction_sb_sLuL::synapse0x3386280() {
   return (neuron0x336dd20()*-0.0265337);
}

double NNfunction_sb_sLuL::synapse0x3386600() {
   return (neuron0x33691f0()*0.800411);
}

double NNfunction_sb_sLuL::synapse0x3386640() {
   return (neuron0x33694a0()*0.374285);
}

double NNfunction_sb_sLuL::synapse0x3386680() {
   return (neuron0x33697e0()*-0.0494387);
}

double NNfunction_sb_sLuL::synapse0x33866c0() {
   return (neuron0x3369b20()*0.457);
}

double NNfunction_sb_sLuL::synapse0x3386700() {
   return (neuron0x3369e60()*0.289653);
}

double NNfunction_sb_sLuL::synapse0x3386740() {
   return (neuron0x336a1a0()*-0.979784);
}

double NNfunction_sb_sLuL::synapse0x3386780() {
   return (neuron0x336a4e0()*1.04612);
}

double NNfunction_sb_sLuL::synapse0x33867c0() {
   return (neuron0x336a820()*-0.0147242);
}

double NNfunction_sb_sLuL::synapse0x3386800() {
   return (neuron0x336ab60()*-0.0457844);
}

double NNfunction_sb_sLuL::synapse0x3386840() {
   return (neuron0x336aea0()*0.809117);
}

double NNfunction_sb_sLuL::synapse0x3386880() {
   return (neuron0x336b1e0()*-0.0856218);
}

double NNfunction_sb_sLuL::synapse0x33868c0() {
   return (neuron0x336b520()*-0.367125);
}

double NNfunction_sb_sLuL::synapse0x3386900() {
   return (neuron0x336b860()*0.722076);
}

double NNfunction_sb_sLuL::synapse0x3386940() {
   return (neuron0x336bba0()*-0.502666);
}

double NNfunction_sb_sLuL::synapse0x3386980() {
   return (neuron0x336bee0()*0.0960809);
}

double NNfunction_sb_sLuL::synapse0x33869c0() {
   return (neuron0x336c220()*-0.371726);
}

double NNfunction_sb_sLuL::synapse0x3386450() {
   return (neuron0x336c560()*0.0630958);
}

double NNfunction_sb_sLuL::synapse0x3386490() {
   return (neuron0x336cac0()*0.440132);
}

double NNfunction_sb_sLuL::synapse0x3386b10() {
   return (neuron0x336cce0()*-0.317943);
}

double NNfunction_sb_sLuL::synapse0x3386b50() {
   return (neuron0x336d020()*0.37757);
}

double NNfunction_sb_sLuL::synapse0x3386b90() {
   return (neuron0x336d360()*0.52899);
}

double NNfunction_sb_sLuL::synapse0x3386bd0() {
   return (neuron0x336d6a0()*0.441324);
}

double NNfunction_sb_sLuL::synapse0x3386c10() {
   return (neuron0x336d9e0()*-0.406074);
}

double NNfunction_sb_sLuL::synapse0x3386c50() {
   return (neuron0x336dd20()*0.115142);
}

double NNfunction_sb_sLuL::synapse0x3386fd0() {
   return (neuron0x33691f0()*0.42938);
}

double NNfunction_sb_sLuL::synapse0x3387010() {
   return (neuron0x33694a0()*0.159667);
}

double NNfunction_sb_sLuL::synapse0x3387050() {
   return (neuron0x33697e0()*0.29304);
}

double NNfunction_sb_sLuL::synapse0x3387090() {
   return (neuron0x3369b20()*-1.36072);
}

double NNfunction_sb_sLuL::synapse0x33870d0() {
   return (neuron0x3369e60()*0.242286);
}

double NNfunction_sb_sLuL::synapse0x3387110() {
   return (neuron0x336a1a0()*0.0841755);
}

double NNfunction_sb_sLuL::synapse0x3387150() {
   return (neuron0x336a4e0()*0.0482465);
}

double NNfunction_sb_sLuL::synapse0x3387190() {
   return (neuron0x336a820()*0.0454388);
}

double NNfunction_sb_sLuL::synapse0x33871d0() {
   return (neuron0x336ab60()*-0.0701674);
}

double NNfunction_sb_sLuL::synapse0x3387210() {
   return (neuron0x336aea0()*-0.252377);
}

double NNfunction_sb_sLuL::synapse0x3387250() {
   return (neuron0x336b1e0()*-0.00348669);
}

double NNfunction_sb_sLuL::synapse0x3387290() {
   return (neuron0x336b520()*0.070249);
}

double NNfunction_sb_sLuL::synapse0x33872d0() {
   return (neuron0x336b860()*-0.743637);
}

double NNfunction_sb_sLuL::synapse0x3387310() {
   return (neuron0x336bba0()*0.00587252);
}

double NNfunction_sb_sLuL::synapse0x3387350() {
   return (neuron0x336bee0()*0.0299398);
}

double NNfunction_sb_sLuL::synapse0x3387390() {
   return (neuron0x336c220()*0.0530727);
}

double NNfunction_sb_sLuL::synapse0x3386e20() {
   return (neuron0x336c560()*-0.0915612);
}

double NNfunction_sb_sLuL::synapse0x3386e60() {
   return (neuron0x336cac0()*-0.300464);
}

double NNfunction_sb_sLuL::synapse0x33874e0() {
   return (neuron0x336cce0()*-0.0577395);
}

double NNfunction_sb_sLuL::synapse0x3387520() {
   return (neuron0x336d020()*-0.132557);
}

double NNfunction_sb_sLuL::synapse0x3387560() {
   return (neuron0x336d360()*0.334932);
}

double NNfunction_sb_sLuL::synapse0x33875a0() {
   return (neuron0x336d6a0()*0.241555);
}

double NNfunction_sb_sLuL::synapse0x33875e0() {
   return (neuron0x336d9e0()*0.160074);
}

double NNfunction_sb_sLuL::synapse0x3387620() {
   return (neuron0x336dd20()*-0.36135);
}

double NNfunction_sb_sLuL::synapse0x33879a0() {
   return (neuron0x33691f0()*-0.644808);
}

double NNfunction_sb_sLuL::synapse0x33879e0() {
   return (neuron0x33694a0()*-0.578985);
}

double NNfunction_sb_sLuL::synapse0x3387a20() {
   return (neuron0x33697e0()*0.255017);
}

double NNfunction_sb_sLuL::synapse0x3387a60() {
   return (neuron0x3369b20()*0.743873);
}

double NNfunction_sb_sLuL::synapse0x3387aa0() {
   return (neuron0x3369e60()*-0.352473);
}

double NNfunction_sb_sLuL::synapse0x3387ae0() {
   return (neuron0x336a1a0()*-0.215737);
}

double NNfunction_sb_sLuL::synapse0x3387b20() {
   return (neuron0x336a4e0()*-0.300515);
}

double NNfunction_sb_sLuL::synapse0x3387b60() {
   return (neuron0x336a820()*0.309542);
}

double NNfunction_sb_sLuL::synapse0x3387ba0() {
   return (neuron0x336ab60()*0.205853);
}

double NNfunction_sb_sLuL::synapse0x3387be0() {
   return (neuron0x336aea0()*0.118742);
}

double NNfunction_sb_sLuL::synapse0x3387c20() {
   return (neuron0x336b1e0()*0.586481);
}

double NNfunction_sb_sLuL::synapse0x3387c60() {
   return (neuron0x336b520()*-0.359217);
}

double NNfunction_sb_sLuL::synapse0x3387ca0() {
   return (neuron0x336b860()*0.103986);
}

double NNfunction_sb_sLuL::synapse0x3387ce0() {
   return (neuron0x336bba0()*0.973064);
}

double NNfunction_sb_sLuL::synapse0x3387d20() {
   return (neuron0x336bee0()*0.715117);
}

double NNfunction_sb_sLuL::synapse0x3387d60() {
   return (neuron0x336c220()*0.389056);
}

double NNfunction_sb_sLuL::synapse0x33877f0() {
   return (neuron0x336c560()*0.291668);
}

double NNfunction_sb_sLuL::synapse0x3387830() {
   return (neuron0x336cac0()*0.46186);
}

double NNfunction_sb_sLuL::synapse0x3387eb0() {
   return (neuron0x336cce0()*0.196466);
}

double NNfunction_sb_sLuL::synapse0x3387ef0() {
   return (neuron0x336d020()*0.166688);
}

double NNfunction_sb_sLuL::synapse0x3387f30() {
   return (neuron0x336d360()*0.936876);
}

double NNfunction_sb_sLuL::synapse0x3387f70() {
   return (neuron0x336d6a0()*-0.0395415);
}

double NNfunction_sb_sLuL::synapse0x3387fb0() {
   return (neuron0x336d9e0()*-0.146446);
}

double NNfunction_sb_sLuL::synapse0x3387ff0() {
   return (neuron0x336dd20()*0.407115);
}

double NNfunction_sb_sLuL::synapse0x3388370() {
   return (neuron0x33691f0()*0.09991);
}

double NNfunction_sb_sLuL::synapse0x33883b0() {
   return (neuron0x33694a0()*-0.0899949);
}

double NNfunction_sb_sLuL::synapse0x33883f0() {
   return (neuron0x33697e0()*0.58707);
}

double NNfunction_sb_sLuL::synapse0x3388430() {
   return (neuron0x3369b20()*0.703514);
}

double NNfunction_sb_sLuL::synapse0x3388470() {
   return (neuron0x3369e60()*0.459898);
}

double NNfunction_sb_sLuL::synapse0x33884b0() {
   return (neuron0x336a1a0()*-0.100814);
}

double NNfunction_sb_sLuL::synapse0x33884f0() {
   return (neuron0x336a4e0()*0.0522538);
}

double NNfunction_sb_sLuL::synapse0x3388530() {
   return (neuron0x336a820()*0.557277);
}

double NNfunction_sb_sLuL::synapse0x3388570() {
   return (neuron0x336ab60()*-0.117734);
}

double NNfunction_sb_sLuL::synapse0x33885b0() {
   return (neuron0x336aea0()*0.0283845);
}

double NNfunction_sb_sLuL::synapse0x33885f0() {
   return (neuron0x336b1e0()*-0.105636);
}

double NNfunction_sb_sLuL::synapse0x3388630() {
   return (neuron0x336b520()*0.674516);
}

double NNfunction_sb_sLuL::synapse0x3388670() {
   return (neuron0x336b860()*-0.0486616);
}

double NNfunction_sb_sLuL::synapse0x33886b0() {
   return (neuron0x336bba0()*0.100379);
}

double NNfunction_sb_sLuL::synapse0x33886f0() {
   return (neuron0x336bee0()*-0.112484);
}

double NNfunction_sb_sLuL::synapse0x3388730() {
   return (neuron0x336c220()*-0.226882);
}

double NNfunction_sb_sLuL::synapse0x33881c0() {
   return (neuron0x336c560()*-0.22695);
}

double NNfunction_sb_sLuL::synapse0x3388200() {
   return (neuron0x336cac0()*0.383678);
}

double NNfunction_sb_sLuL::synapse0x3388880() {
   return (neuron0x336cce0()*0.0475297);
}

double NNfunction_sb_sLuL::synapse0x33888c0() {
   return (neuron0x336d020()*0.512441);
}

double NNfunction_sb_sLuL::synapse0x3388900() {
   return (neuron0x336d360()*-0.0181903);
}

double NNfunction_sb_sLuL::synapse0x3388940() {
   return (neuron0x336d6a0()*-0.0438388);
}

double NNfunction_sb_sLuL::synapse0x3388980() {
   return (neuron0x336d9e0()*0.36819);
}

double NNfunction_sb_sLuL::synapse0x33889c0() {
   return (neuron0x336dd20()*-0.0117672);
}

double NNfunction_sb_sLuL::synapse0x3388d40() {
   return (neuron0x33691f0()*0.306153);
}

double NNfunction_sb_sLuL::synapse0x3388d80() {
   return (neuron0x33694a0()*-0.310723);
}

double NNfunction_sb_sLuL::synapse0x3388dc0() {
   return (neuron0x33697e0()*0.255741);
}

double NNfunction_sb_sLuL::synapse0x3388e00() {
   return (neuron0x3369b20()*-0.410487);
}

double NNfunction_sb_sLuL::synapse0x3388e40() {
   return (neuron0x3369e60()*0.300015);
}

double NNfunction_sb_sLuL::synapse0x3388e80() {
   return (neuron0x336a1a0()*0.47912);
}

double NNfunction_sb_sLuL::synapse0x3388ec0() {
   return (neuron0x336a4e0()*0.219767);
}

double NNfunction_sb_sLuL::synapse0x3388f00() {
   return (neuron0x336a820()*0.592664);
}

double NNfunction_sb_sLuL::synapse0x3388f40() {
   return (neuron0x336ab60()*0.0274599);
}

double NNfunction_sb_sLuL::synapse0x3388f80() {
   return (neuron0x336aea0()*0.403973);
}

double NNfunction_sb_sLuL::synapse0x3388fc0() {
   return (neuron0x336b1e0()*-0.161028);
}

double NNfunction_sb_sLuL::synapse0x3389000() {
   return (neuron0x336b520()*0.0502039);
}

double NNfunction_sb_sLuL::synapse0x3389040() {
   return (neuron0x336b860()*-1.34779);
}

double NNfunction_sb_sLuL::synapse0x3389080() {
   return (neuron0x336bba0()*-0.1787);
}

double NNfunction_sb_sLuL::synapse0x33890c0() {
   return (neuron0x336bee0()*-0.168581);
}

double NNfunction_sb_sLuL::synapse0x3389100() {
   return (neuron0x336c220()*-0.191534);
}

double NNfunction_sb_sLuL::synapse0x3388b90() {
   return (neuron0x336c560()*0.153973);
}

double NNfunction_sb_sLuL::synapse0x3388bd0() {
   return (neuron0x336cac0()*0.0997642);
}

double NNfunction_sb_sLuL::synapse0x3389250() {
   return (neuron0x336cce0()*-0.595671);
}

double NNfunction_sb_sLuL::synapse0x3389290() {
   return (neuron0x336d020()*-0.333201);
}

double NNfunction_sb_sLuL::synapse0x33892d0() {
   return (neuron0x336d360()*-0.296737);
}

double NNfunction_sb_sLuL::synapse0x3389310() {
   return (neuron0x336d6a0()*-0.101431);
}

double NNfunction_sb_sLuL::synapse0x3389350() {
   return (neuron0x336d9e0()*0.592725);
}

double NNfunction_sb_sLuL::synapse0x3389390() {
   return (neuron0x336dd20()*0.392982);
}

double NNfunction_sb_sLuL::synapse0x3389710() {
   return (neuron0x33691f0()*-0.0452875);
}

double NNfunction_sb_sLuL::synapse0x3389750() {
   return (neuron0x33694a0()*-0.15971);
}

double NNfunction_sb_sLuL::synapse0x3389790() {
   return (neuron0x33697e0()*1.80371);
}

double NNfunction_sb_sLuL::synapse0x33897d0() {
   return (neuron0x3369b20()*-0.0516067);
}

double NNfunction_sb_sLuL::synapse0x3389810() {
   return (neuron0x3369e60()*-0.138282);
}

double NNfunction_sb_sLuL::synapse0x3389850() {
   return (neuron0x336a1a0()*-0.0912718);
}

double NNfunction_sb_sLuL::synapse0x3389890() {
   return (neuron0x336a4e0()*-0.0293614);
}

double NNfunction_sb_sLuL::synapse0x33898d0() {
   return (neuron0x336a820()*-0.0927564);
}

double NNfunction_sb_sLuL::synapse0x3389910() {
   return (neuron0x336ab60()*0.0839676);
}

double NNfunction_sb_sLuL::synapse0x3389950() {
   return (neuron0x336aea0()*0.0221826);
}

double NNfunction_sb_sLuL::synapse0x3389990() {
   return (neuron0x336b1e0()*0.129084);
}

double NNfunction_sb_sLuL::synapse0x33899d0() {
   return (neuron0x336b520()*-0.109368);
}

double NNfunction_sb_sLuL::synapse0x3389a10() {
   return (neuron0x336b860()*-0.165952);
}

double NNfunction_sb_sLuL::synapse0x3389a50() {
   return (neuron0x336bba0()*-0.0663585);
}

double NNfunction_sb_sLuL::synapse0x3389a90() {
   return (neuron0x336bee0()*-0.0287187);
}

double NNfunction_sb_sLuL::synapse0x3389ad0() {
   return (neuron0x336c220()*0.173669);
}

double NNfunction_sb_sLuL::synapse0x3389560() {
   return (neuron0x336c560()*0.00820058);
}

double NNfunction_sb_sLuL::synapse0x33895a0() {
   return (neuron0x336cac0()*-0.0658866);
}

double NNfunction_sb_sLuL::synapse0x3389c20() {
   return (neuron0x336cce0()*0.0291465);
}

double NNfunction_sb_sLuL::synapse0x3389c60() {
   return (neuron0x336d020()*0.101688);
}

double NNfunction_sb_sLuL::synapse0x3389ca0() {
   return (neuron0x336d360()*0.071275);
}

double NNfunction_sb_sLuL::synapse0x3389ce0() {
   return (neuron0x336d6a0()*-0.20544);
}

double NNfunction_sb_sLuL::synapse0x3389d20() {
   return (neuron0x336d9e0()*-0.0281512);
}

double NNfunction_sb_sLuL::synapse0x3389d60() {
   return (neuron0x336dd20()*-0.133265);
}

double NNfunction_sb_sLuL::synapse0x338a0e0() {
   return (neuron0x33691f0()*-0.0023265);
}

double NNfunction_sb_sLuL::synapse0x338a120() {
   return (neuron0x33694a0()*0.00626261);
}

double NNfunction_sb_sLuL::synapse0x338a160() {
   return (neuron0x33697e0()*0.0305938);
}

double NNfunction_sb_sLuL::synapse0x338a1a0() {
   return (neuron0x3369b20()*-3.44687);
}

double NNfunction_sb_sLuL::synapse0x338a1e0() {
   return (neuron0x3369e60()*-0.0124045);
}

double NNfunction_sb_sLuL::synapse0x338a220() {
   return (neuron0x336a1a0()*0.000147996);
}

double NNfunction_sb_sLuL::synapse0x338a260() {
   return (neuron0x336a4e0()*0.00705576);
}

double NNfunction_sb_sLuL::synapse0x338a2a0() {
   return (neuron0x336a820()*0.00830771);
}

double NNfunction_sb_sLuL::synapse0x338a2e0() {
   return (neuron0x336ab60()*0.00337876);
}

double NNfunction_sb_sLuL::synapse0x338a320() {
   return (neuron0x336aea0()*0.00498236);
}

double NNfunction_sb_sLuL::synapse0x338a360() {
   return (neuron0x336b1e0()*-0.00309364);
}

double NNfunction_sb_sLuL::synapse0x338a3a0() {
   return (neuron0x336b520()*-0.0883071);
}

double NNfunction_sb_sLuL::synapse0x338a3e0() {
   return (neuron0x336b860()*0.00937032);
}

double NNfunction_sb_sLuL::synapse0x338a420() {
   return (neuron0x336bba0()*-0.00133102);
}

double NNfunction_sb_sLuL::synapse0x338a460() {
   return (neuron0x336bee0()*0.00108311);
}

double NNfunction_sb_sLuL::synapse0x338a4a0() {
   return (neuron0x336c220()*-0.0072884);
}

double NNfunction_sb_sLuL::synapse0x3389f30() {
   return (neuron0x336c560()*-0.0053314);
}

double NNfunction_sb_sLuL::synapse0x3389f70() {
   return (neuron0x336cac0()*-0.02469);
}

double NNfunction_sb_sLuL::synapse0x338a5f0() {
   return (neuron0x336cce0()*0.0012361);
}

double NNfunction_sb_sLuL::synapse0x338a630() {
   return (neuron0x336d020()*0.0158458);
}

double NNfunction_sb_sLuL::synapse0x338a670() {
   return (neuron0x336d360()*0.0122514);
}

double NNfunction_sb_sLuL::synapse0x338a6b0() {
   return (neuron0x336d6a0()*-0.00458759);
}

double NNfunction_sb_sLuL::synapse0x338a6f0() {
   return (neuron0x336d9e0()*-0.0135517);
}

double NNfunction_sb_sLuL::synapse0x338a730() {
   return (neuron0x336dd20()*0.0132693);
}

double NNfunction_sb_sLuL::synapse0x33731e0() {
   return (neuron0x33691f0()*-0.0248263);
}

double NNfunction_sb_sLuL::synapse0x3373220() {
   return (neuron0x33694a0()*-0.0114375);
}

double NNfunction_sb_sLuL::synapse0x3373260() {
   return (neuron0x33697e0()*0.00680043);
}

double NNfunction_sb_sLuL::synapse0x33732a0() {
   return (neuron0x3369b20()*-1.87912);
}

double NNfunction_sb_sLuL::synapse0x33732e0() {
   return (neuron0x3369e60()*-0.00377003);
}

double NNfunction_sb_sLuL::synapse0x3373320() {
   return (neuron0x336a1a0()*-0.0195694);
}

double NNfunction_sb_sLuL::synapse0x3373360() {
   return (neuron0x336a4e0()*-0.0225347);
}

double NNfunction_sb_sLuL::synapse0x33733a0() {
   return (neuron0x336a820()*0.00939052);
}

double NNfunction_sb_sLuL::synapse0x338aec0() {
   return (neuron0x336ab60()*-0.00159584);
}

double NNfunction_sb_sLuL::synapse0x338af00() {
   return (neuron0x336aea0()*-0.0173145);
}

double NNfunction_sb_sLuL::synapse0x338af40() {
   return (neuron0x336b1e0()*-0.014267);
}

double NNfunction_sb_sLuL::synapse0x338af80() {
   return (neuron0x336b520()*-0.00234849);
}

double NNfunction_sb_sLuL::synapse0x338afc0() {
   return (neuron0x336b860()*0.135623);
}

double NNfunction_sb_sLuL::synapse0x338b000() {
   return (neuron0x336bba0()*-0.00485887);
}

double NNfunction_sb_sLuL::synapse0x338b040() {
   return (neuron0x336bee0()*-0.0025938);
}

double NNfunction_sb_sLuL::synapse0x338b080() {
   return (neuron0x336c220()*0.00680579);
}

double NNfunction_sb_sLuL::synapse0x338a900() {
   return (neuron0x336c560()*0.000650495);
}

double NNfunction_sb_sLuL::synapse0x338a940() {
   return (neuron0x336cac0()*-0.0040054);
}

double NNfunction_sb_sLuL::synapse0x338b1d0() {
   return (neuron0x336cce0()*-0.0213922);
}

double NNfunction_sb_sLuL::synapse0x338b210() {
   return (neuron0x336d020()*-0.0246987);
}

double NNfunction_sb_sLuL::synapse0x338b250() {
   return (neuron0x336d360()*-0.0109399);
}

double NNfunction_sb_sLuL::synapse0x338b290() {
   return (neuron0x336d6a0()*-0.0220011);
}

double NNfunction_sb_sLuL::synapse0x338b2d0() {
   return (neuron0x336d9e0()*0.00995028);
}

double NNfunction_sb_sLuL::synapse0x338b310() {
   return (neuron0x336dd20()*-0.0111775);
}

double NNfunction_sb_sLuL::synapse0x338b690() {
   return (neuron0x33691f0()*0.675458);
}

double NNfunction_sb_sLuL::synapse0x338b6d0() {
   return (neuron0x33694a0()*-0.0697432);
}

double NNfunction_sb_sLuL::synapse0x338b710() {
   return (neuron0x33697e0()*0.0202616);
}

double NNfunction_sb_sLuL::synapse0x338b750() {
   return (neuron0x3369b20()*-0.450083);
}

double NNfunction_sb_sLuL::synapse0x338b790() {
   return (neuron0x3369e60()*0.165894);
}

double NNfunction_sb_sLuL::synapse0x338b7d0() {
   return (neuron0x336a1a0()*0.388461);
}

double NNfunction_sb_sLuL::synapse0x338b810() {
   return (neuron0x336a4e0()*0.231545);
}

double NNfunction_sb_sLuL::synapse0x338b850() {
   return (neuron0x336a820()*0.164838);
}

double NNfunction_sb_sLuL::synapse0x338b890() {
   return (neuron0x336ab60()*-0.26959);
}

double NNfunction_sb_sLuL::synapse0x338b8d0() {
   return (neuron0x336aea0()*-0.487009);
}

double NNfunction_sb_sLuL::synapse0x338b910() {
   return (neuron0x336b1e0()*0.00821903);
}

double NNfunction_sb_sLuL::synapse0x338b950() {
   return (neuron0x336b520()*-0.0416386);
}

double NNfunction_sb_sLuL::synapse0x338b990() {
   return (neuron0x336b860()*-0.21739);
}

double NNfunction_sb_sLuL::synapse0x338b9d0() {
   return (neuron0x336bba0()*-0.045369);
}

double NNfunction_sb_sLuL::synapse0x338ba10() {
   return (neuron0x336bee0()*0.211178);
}

double NNfunction_sb_sLuL::synapse0x338ba50() {
   return (neuron0x336c220()*0.393837);
}

double NNfunction_sb_sLuL::synapse0x338b4e0() {
   return (neuron0x336c560()*-0.24197);
}

double NNfunction_sb_sLuL::synapse0x338b520() {
   return (neuron0x336cac0()*0.229117);
}

double NNfunction_sb_sLuL::synapse0x338bba0() {
   return (neuron0x336cce0()*-0.59897);
}

double NNfunction_sb_sLuL::synapse0x338bbe0() {
   return (neuron0x336d020()*-0.0892073);
}

double NNfunction_sb_sLuL::synapse0x338bc20() {
   return (neuron0x336d360()*-0.164285);
}

double NNfunction_sb_sLuL::synapse0x338bc60() {
   return (neuron0x336d6a0()*0.0161648);
}

double NNfunction_sb_sLuL::synapse0x338bca0() {
   return (neuron0x336d9e0()*-0.272572);
}

double NNfunction_sb_sLuL::synapse0x338bce0() {
   return (neuron0x336dd20()*-0.312843);
}

double NNfunction_sb_sLuL::synapse0x338c060() {
   return (neuron0x33691f0()*0.00490873);
}

double NNfunction_sb_sLuL::synapse0x338c0a0() {
   return (neuron0x33694a0()*-0.0227482);
}

double NNfunction_sb_sLuL::synapse0x338c0e0() {
   return (neuron0x33697e0()*-0.00362367);
}

double NNfunction_sb_sLuL::synapse0x338c120() {
   return (neuron0x3369b20()*0.175774);
}

double NNfunction_sb_sLuL::synapse0x338c160() {
   return (neuron0x3369e60()*0.0201556);
}

double NNfunction_sb_sLuL::synapse0x338c1a0() {
   return (neuron0x336a1a0()*0.00299075);
}

double NNfunction_sb_sLuL::synapse0x338c1e0() {
   return (neuron0x336a4e0()*-0.0149333);
}

double NNfunction_sb_sLuL::synapse0x338c220() {
   return (neuron0x336a820()*-0.00866124);
}

double NNfunction_sb_sLuL::synapse0x338c260() {
   return (neuron0x336ab60()*0.0142391);
}

double NNfunction_sb_sLuL::synapse0x338c2a0() {
   return (neuron0x336aea0()*-0.018229);
}

double NNfunction_sb_sLuL::synapse0x338c2e0() {
   return (neuron0x336b1e0()*0.0311329);
}

double NNfunction_sb_sLuL::synapse0x338c320() {
   return (neuron0x336b520()*-1.0243);
}

double NNfunction_sb_sLuL::synapse0x338c360() {
   return (neuron0x336b860()*0.402241);
}

double NNfunction_sb_sLuL::synapse0x338c3a0() {
   return (neuron0x336bba0()*-0.0017287);
}

double NNfunction_sb_sLuL::synapse0x338c3e0() {
   return (neuron0x336bee0()*-0.0286352);
}

double NNfunction_sb_sLuL::synapse0x338c420() {
   return (neuron0x336c220()*-0.00609122);
}

double NNfunction_sb_sLuL::synapse0x338beb0() {
   return (neuron0x336c560()*-0.00379008);
}

double NNfunction_sb_sLuL::synapse0x338bef0() {
   return (neuron0x336cac0()*-0.0209508);
}

double NNfunction_sb_sLuL::synapse0x337ca20() {
   return (neuron0x336cce0()*0.0111377);
}

double NNfunction_sb_sLuL::synapse0x337ca60() {
   return (neuron0x336d020()*0.00434652);
}

double NNfunction_sb_sLuL::synapse0x337caa0() {
   return (neuron0x336d360()*0.00270923);
}

double NNfunction_sb_sLuL::synapse0x337cae0() {
   return (neuron0x336d6a0()*0.0084981);
}

double NNfunction_sb_sLuL::synapse0x337cb20() {
   return (neuron0x336d9e0()*-0.0168609);
}

double NNfunction_sb_sLuL::synapse0x337cb60() {
   return (neuron0x336dd20()*-0.037826);
}

double NNfunction_sb_sLuL::synapse0x337cee0() {
   return (neuron0x33691f0()*0.00222501);
}

double NNfunction_sb_sLuL::synapse0x337cf20() {
   return (neuron0x33694a0()*0.0741463);
}

double NNfunction_sb_sLuL::synapse0x337cf60() {
   return (neuron0x33697e0()*-0.389032);
}

double NNfunction_sb_sLuL::synapse0x337cfa0() {
   return (neuron0x3369b20()*-0.358564);
}

double NNfunction_sb_sLuL::synapse0x337cfe0() {
   return (neuron0x3369e60()*-1.08403);
}

double NNfunction_sb_sLuL::synapse0x337d020() {
   return (neuron0x336a1a0()*-0.239149);
}

double NNfunction_sb_sLuL::synapse0x337d060() {
   return (neuron0x336a4e0()*0.367203);
}

double NNfunction_sb_sLuL::synapse0x337d0a0() {
   return (neuron0x336a820()*0.369598);
}

double NNfunction_sb_sLuL::synapse0x337d0e0() {
   return (neuron0x336ab60()*-0.215152);
}

double NNfunction_sb_sLuL::synapse0x337d120() {
   return (neuron0x336aea0()*0.673808);
}

double NNfunction_sb_sLuL::synapse0x337d160() {
   return (neuron0x336b1e0()*0.824544);
}

double NNfunction_sb_sLuL::synapse0x337d1a0() {
   return (neuron0x336b520()*-0.0442772);
}

double NNfunction_sb_sLuL::synapse0x337d1e0() {
   return (neuron0x336b860()*0.435303);
}

double NNfunction_sb_sLuL::synapse0x337d220() {
   return (neuron0x336bba0()*0.106251);
}

double NNfunction_sb_sLuL::synapse0x337d260() {
   return (neuron0x336bee0()*-0.776224);
}

double NNfunction_sb_sLuL::synapse0x337d2a0() {
   return (neuron0x336c220()*0.858818);
}

double NNfunction_sb_sLuL::synapse0x337cd30() {
   return (neuron0x336c560()*0.0739859);
}

double NNfunction_sb_sLuL::synapse0x337cd70() {
   return (neuron0x336cac0()*-0.152888);
}

double NNfunction_sb_sLuL::synapse0x337d3f0() {
   return (neuron0x336cce0()*0.206591);
}

double NNfunction_sb_sLuL::synapse0x337d430() {
   return (neuron0x336d020()*-0.31715);
}

double NNfunction_sb_sLuL::synapse0x337d470() {
   return (neuron0x336d360()*0.601038);
}

double NNfunction_sb_sLuL::synapse0x337d4b0() {
   return (neuron0x336d6a0()*-0.523083);
}

double NNfunction_sb_sLuL::synapse0x337d4f0() {
   return (neuron0x336d9e0()*0.339563);
}

double NNfunction_sb_sLuL::synapse0x337d530() {
   return (neuron0x336dd20()*0.000102594);
}

double NNfunction_sb_sLuL::synapse0x337d8b0() {
   return (neuron0x33691f0()*0.124964);
}

double NNfunction_sb_sLuL::synapse0x337d8f0() {
   return (neuron0x33694a0()*0.360498);
}

double NNfunction_sb_sLuL::synapse0x337d930() {
   return (neuron0x33697e0()*-0.0440324);
}

double NNfunction_sb_sLuL::synapse0x337d970() {
   return (neuron0x3369b20()*0.825564);
}

double NNfunction_sb_sLuL::synapse0x337d9b0() {
   return (neuron0x3369e60()*0.748382);
}

double NNfunction_sb_sLuL::synapse0x337d9f0() {
   return (neuron0x336a1a0()*-0.250727);
}

double NNfunction_sb_sLuL::synapse0x337da30() {
   return (neuron0x336a4e0()*-0.678971);
}

double NNfunction_sb_sLuL::synapse0x337da70() {
   return (neuron0x336a820()*0.221909);
}

double NNfunction_sb_sLuL::synapse0x337dab0() {
   return (neuron0x336ab60()*-0.399496);
}

double NNfunction_sb_sLuL::synapse0x337daf0() {
   return (neuron0x336aea0()*-0.0305176);
}

double NNfunction_sb_sLuL::synapse0x337db30() {
   return (neuron0x336b1e0()*0.448058);
}

double NNfunction_sb_sLuL::synapse0x337db70() {
   return (neuron0x336b520()*-1.25149);
}

double NNfunction_sb_sLuL::synapse0x337dbb0() {
   return (neuron0x336b860()*-0.774215);
}

double NNfunction_sb_sLuL::synapse0x337dbf0() {
   return (neuron0x336bba0()*-0.140639);
}

double NNfunction_sb_sLuL::synapse0x337dc30() {
   return (neuron0x336bee0()*-0.39154);
}

double NNfunction_sb_sLuL::synapse0x337dc70() {
   return (neuron0x336c220()*-0.0165951);
}

double NNfunction_sb_sLuL::synapse0x337d700() {
   return (neuron0x336c560()*0.018918);
}

double NNfunction_sb_sLuL::synapse0x337d740() {
   return (neuron0x336cac0()*-0.159622);
}

double NNfunction_sb_sLuL::synapse0x337ddc0() {
   return (neuron0x336cce0()*0.35963);
}

double NNfunction_sb_sLuL::synapse0x337de00() {
   return (neuron0x336d020()*0.21288);
}

double NNfunction_sb_sLuL::synapse0x337de40() {
   return (neuron0x336d360()*0.784791);
}

double NNfunction_sb_sLuL::synapse0x337de80() {
   return (neuron0x336d6a0()*0.497707);
}

double NNfunction_sb_sLuL::synapse0x337dec0() {
   return (neuron0x336d9e0()*0.158597);
}

double NNfunction_sb_sLuL::synapse0x337df00() {
   return (neuron0x336dd20()*0.0803934);
}

double NNfunction_sb_sLuL::synapse0x337e280() {
   return (neuron0x33691f0()*-0.56237);
}

double NNfunction_sb_sLuL::synapse0x337e2c0() {
   return (neuron0x33694a0()*0.234694);
}

double NNfunction_sb_sLuL::synapse0x337e300() {
   return (neuron0x33697e0()*-0.350817);
}

double NNfunction_sb_sLuL::synapse0x337e340() {
   return (neuron0x3369b20()*0.665518);
}

double NNfunction_sb_sLuL::synapse0x337e380() {
   return (neuron0x3369e60()*0.976698);
}

double NNfunction_sb_sLuL::synapse0x337e3c0() {
   return (neuron0x336a1a0()*0.200039);
}

double NNfunction_sb_sLuL::synapse0x337e400() {
   return (neuron0x336a4e0()*0.289572);
}

double NNfunction_sb_sLuL::synapse0x337e440() {
   return (neuron0x336a820()*-0.481135);
}

double NNfunction_sb_sLuL::synapse0x337e480() {
   return (neuron0x336ab60()*0.06696);
}

double NNfunction_sb_sLuL::synapse0x337e4c0() {
   return (neuron0x336aea0()*-0.647685);
}

double NNfunction_sb_sLuL::synapse0x337e500() {
   return (neuron0x336b1e0()*-0.0317085);
}

double NNfunction_sb_sLuL::synapse0x337e540() {
   return (neuron0x336b520()*0.102021);
}

double NNfunction_sb_sLuL::synapse0x337e580() {
   return (neuron0x336b860()*-0.4218);
}

double NNfunction_sb_sLuL::synapse0x337e5c0() {
   return (neuron0x336bba0()*0.667328);
}

double NNfunction_sb_sLuL::synapse0x337e600() {
   return (neuron0x336bee0()*0.738511);
}

double NNfunction_sb_sLuL::synapse0x337e640() {
   return (neuron0x336c220()*1.29515);
}

double NNfunction_sb_sLuL::synapse0x337e0d0() {
   return (neuron0x336c560()*0.673292);
}

double NNfunction_sb_sLuL::synapse0x337e110() {
   return (neuron0x336cac0()*-0.0854541);
}

double NNfunction_sb_sLuL::synapse0x337e790() {
   return (neuron0x336cce0()*-0.355374);
}

double NNfunction_sb_sLuL::synapse0x337e7d0() {
   return (neuron0x336d020()*0.568216);
}

double NNfunction_sb_sLuL::synapse0x337e810() {
   return (neuron0x336d360()*-0.334215);
}

double NNfunction_sb_sLuL::synapse0x337e850() {
   return (neuron0x336d6a0()*-0.0366797);
}

double NNfunction_sb_sLuL::synapse0x337e890() {
   return (neuron0x336d9e0()*0.113039);
}

double NNfunction_sb_sLuL::synapse0x337e8d0() {
   return (neuron0x336dd20()*-0.130975);
}

double NNfunction_sb_sLuL::synapse0x33907a0() {
   return (neuron0x33691f0()*-0.0241369);
}

double NNfunction_sb_sLuL::synapse0x33907e0() {
   return (neuron0x33694a0()*-0.556332);
}

double NNfunction_sb_sLuL::synapse0x3390820() {
   return (neuron0x33697e0()*0.0363384);
}

double NNfunction_sb_sLuL::synapse0x3390860() {
   return (neuron0x3369b20()*-0.561206);
}

double NNfunction_sb_sLuL::synapse0x33908a0() {
   return (neuron0x3369e60()*-0.633096);
}

double NNfunction_sb_sLuL::synapse0x33908e0() {
   return (neuron0x336a1a0()*-0.437112);
}

double NNfunction_sb_sLuL::synapse0x3390920() {
   return (neuron0x336a4e0()*0.520981);
}

double NNfunction_sb_sLuL::synapse0x3390960() {
   return (neuron0x336a820()*-0.304066);
}

double NNfunction_sb_sLuL::synapse0x33909a0() {
   return (neuron0x336ab60()*-0.287172);
}

double NNfunction_sb_sLuL::synapse0x33909e0() {
   return (neuron0x336aea0()*-0.285759);
}

double NNfunction_sb_sLuL::synapse0x3390a20() {
   return (neuron0x336b1e0()*-0.0687287);
}

double NNfunction_sb_sLuL::synapse0x3390a60() {
   return (neuron0x336b520()*-0.63522);
}

double NNfunction_sb_sLuL::synapse0x3390aa0() {
   return (neuron0x336b860()*-0.160882);
}

double NNfunction_sb_sLuL::synapse0x3390ae0() {
   return (neuron0x336bba0()*0.341507);
}

double NNfunction_sb_sLuL::synapse0x3390b20() {
   return (neuron0x336bee0()*-0.331741);
}

double NNfunction_sb_sLuL::synapse0x3390b60() {
   return (neuron0x336c220()*0.619188);
}

double NNfunction_sb_sLuL::synapse0x337e910() {
   return (neuron0x336c560()*0.00597731);
}

double NNfunction_sb_sLuL::synapse0x337e950() {
   return (neuron0x336cac0()*-0.0881271);
}

double NNfunction_sb_sLuL::synapse0x3390cb0() {
   return (neuron0x336cce0()*-0.190519);
}

double NNfunction_sb_sLuL::synapse0x3390cf0() {
   return (neuron0x336d020()*0.258413);
}

double NNfunction_sb_sLuL::synapse0x3390d30() {
   return (neuron0x336d360()*0.0438224);
}

double NNfunction_sb_sLuL::synapse0x3390d70() {
   return (neuron0x336d6a0()*0.0158111);
}

double NNfunction_sb_sLuL::synapse0x3390db0() {
   return (neuron0x336d9e0()*0.755904);
}

double NNfunction_sb_sLuL::synapse0x3390df0() {
   return (neuron0x336dd20()*0.344771);
}

double NNfunction_sb_sLuL::synapse0x3391170() {
   return (neuron0x33691f0()*0.485683);
}

double NNfunction_sb_sLuL::synapse0x33911b0() {
   return (neuron0x33694a0()*-0.123952);
}

double NNfunction_sb_sLuL::synapse0x33911f0() {
   return (neuron0x33697e0()*-0.360032);
}

double NNfunction_sb_sLuL::synapse0x3391230() {
   return (neuron0x3369b20()*-1.13192);
}

double NNfunction_sb_sLuL::synapse0x3391270() {
   return (neuron0x3369e60()*0.103758);
}

double NNfunction_sb_sLuL::synapse0x33912b0() {
   return (neuron0x336a1a0()*0.174723);
}

double NNfunction_sb_sLuL::synapse0x33912f0() {
   return (neuron0x336a4e0()*-0.0529703);
}

double NNfunction_sb_sLuL::synapse0x3391330() {
   return (neuron0x336a820()*0.239752);
}

double NNfunction_sb_sLuL::synapse0x3391370() {
   return (neuron0x336ab60()*-0.149028);
}

double NNfunction_sb_sLuL::synapse0x33913b0() {
   return (neuron0x336aea0()*0.0930382);
}

double NNfunction_sb_sLuL::synapse0x33913f0() {
   return (neuron0x336b1e0()*0.0639308);
}

double NNfunction_sb_sLuL::synapse0x3391430() {
   return (neuron0x336b520()*0.278072);
}

double NNfunction_sb_sLuL::synapse0x3391470() {
   return (neuron0x336b860()*0.257812);
}

double NNfunction_sb_sLuL::synapse0x33914b0() {
   return (neuron0x336bba0()*0.169373);
}

double NNfunction_sb_sLuL::synapse0x33914f0() {
   return (neuron0x336bee0()*0.172559);
}

double NNfunction_sb_sLuL::synapse0x3391530() {
   return (neuron0x336c220()*-0.2621);
}

double NNfunction_sb_sLuL::synapse0x3390fc0() {
   return (neuron0x336c560()*-0.0661163);
}

double NNfunction_sb_sLuL::synapse0x3391000() {
   return (neuron0x336cac0()*0.216207);
}

double NNfunction_sb_sLuL::synapse0x3391680() {
   return (neuron0x336cce0()*-0.323769);
}

double NNfunction_sb_sLuL::synapse0x33916c0() {
   return (neuron0x336d020()*-0.27107);
}

double NNfunction_sb_sLuL::synapse0x3391700() {
   return (neuron0x336d360()*0.297697);
}

double NNfunction_sb_sLuL::synapse0x3391740() {
   return (neuron0x336d6a0()*0.0239001);
}

double NNfunction_sb_sLuL::synapse0x3391780() {
   return (neuron0x336d9e0()*0.28753);
}

double NNfunction_sb_sLuL::synapse0x33917c0() {
   return (neuron0x336dd20()*0.104149);
}

double NNfunction_sb_sLuL::synapse0x3391b40() {
   return (neuron0x33691f0()*0.249728);
}

double NNfunction_sb_sLuL::synapse0x3391b80() {
   return (neuron0x33694a0()*0.0864592);
}

double NNfunction_sb_sLuL::synapse0x3391bc0() {
   return (neuron0x33697e0()*-0.613977);
}

double NNfunction_sb_sLuL::synapse0x3391c00() {
   return (neuron0x3369b20()*0.425718);
}

double NNfunction_sb_sLuL::synapse0x3391c40() {
   return (neuron0x3369e60()*-0.00197457);
}

double NNfunction_sb_sLuL::synapse0x3391c80() {
   return (neuron0x336a1a0()*0.371605);
}

double NNfunction_sb_sLuL::synapse0x3391cc0() {
   return (neuron0x336a4e0()*0.965956);
}

double NNfunction_sb_sLuL::synapse0x3391d00() {
   return (neuron0x336a820()*0.262008);
}

double NNfunction_sb_sLuL::synapse0x3391d40() {
   return (neuron0x336ab60()*-0.480177);
}

double NNfunction_sb_sLuL::synapse0x3391d80() {
   return (neuron0x336aea0()*0.340368);
}

double NNfunction_sb_sLuL::synapse0x3391dc0() {
   return (neuron0x336b1e0()*-0.128512);
}

double NNfunction_sb_sLuL::synapse0x3391e00() {
   return (neuron0x336b520()*0.720334);
}

double NNfunction_sb_sLuL::synapse0x3391e40() {
   return (neuron0x336b860()*1.29055);
}

double NNfunction_sb_sLuL::synapse0x3391e80() {
   return (neuron0x336bba0()*0.776664);
}

double NNfunction_sb_sLuL::synapse0x3391ec0() {
   return (neuron0x336bee0()*0.0718086);
}

double NNfunction_sb_sLuL::synapse0x3391f00() {
   return (neuron0x336c220()*-0.411656);
}

double NNfunction_sb_sLuL::synapse0x3391990() {
   return (neuron0x336c560()*-0.154895);
}

double NNfunction_sb_sLuL::synapse0x33919d0() {
   return (neuron0x336cac0()*-0.352423);
}

double NNfunction_sb_sLuL::synapse0x3392050() {
   return (neuron0x336cce0()*0.599602);
}

double NNfunction_sb_sLuL::synapse0x3392090() {
   return (neuron0x336d020()*-0.243553);
}

double NNfunction_sb_sLuL::synapse0x33920d0() {
   return (neuron0x336d360()*-0.131338);
}

double NNfunction_sb_sLuL::synapse0x3392110() {
   return (neuron0x336d6a0()*-0.222319);
}

double NNfunction_sb_sLuL::synapse0x3392150() {
   return (neuron0x336d9e0()*0.373389);
}

double NNfunction_sb_sLuL::synapse0x3392190() {
   return (neuron0x336dd20()*-0.0421385);
}

double NNfunction_sb_sLuL::synapse0x3392510() {
   return (neuron0x33691f0()*-0.216902);
}

double NNfunction_sb_sLuL::synapse0x3392550() {
   return (neuron0x33694a0()*0.198694);
}

double NNfunction_sb_sLuL::synapse0x3392590() {
   return (neuron0x33697e0()*0.0370378);
}

double NNfunction_sb_sLuL::synapse0x33925d0() {
   return (neuron0x3369b20()*-0.0981969);
}

double NNfunction_sb_sLuL::synapse0x3392610() {
   return (neuron0x3369e60()*0.376375);
}

double NNfunction_sb_sLuL::synapse0x3392650() {
   return (neuron0x336a1a0()*0.177627);
}

double NNfunction_sb_sLuL::synapse0x3392690() {
   return (neuron0x336a4e0()*-0.558978);
}

double NNfunction_sb_sLuL::synapse0x33926d0() {
   return (neuron0x336a820()*0.26463);
}

double NNfunction_sb_sLuL::synapse0x3392710() {
   return (neuron0x336ab60()*-0.34144);
}

double NNfunction_sb_sLuL::synapse0x3392750() {
   return (neuron0x336aea0()*0.108701);
}

double NNfunction_sb_sLuL::synapse0x3392790() {
   return (neuron0x336b1e0()*0.0592477);
}

double NNfunction_sb_sLuL::synapse0x33927d0() {
   return (neuron0x336b520()*-0.347383);
}

double NNfunction_sb_sLuL::synapse0x3392810() {
   return (neuron0x336b860()*-0.905516);
}

double NNfunction_sb_sLuL::synapse0x3392850() {
   return (neuron0x336bba0()*-0.362049);
}

double NNfunction_sb_sLuL::synapse0x3392890() {
   return (neuron0x336bee0()*-0.126517);
}

double NNfunction_sb_sLuL::synapse0x33928d0() {
   return (neuron0x336c220()*-0.226346);
}

double NNfunction_sb_sLuL::synapse0x3392360() {
   return (neuron0x336c560()*0.000970012);
}

double NNfunction_sb_sLuL::synapse0x33923a0() {
   return (neuron0x336cac0()*0.108061);
}

double NNfunction_sb_sLuL::synapse0x3392a20() {
   return (neuron0x336cce0()*-0.240285);
}

double NNfunction_sb_sLuL::synapse0x3392a60() {
   return (neuron0x336d020()*0.419098);
}

double NNfunction_sb_sLuL::synapse0x3392aa0() {
   return (neuron0x336d360()*0.961875);
}

double NNfunction_sb_sLuL::synapse0x3392ae0() {
   return (neuron0x336d6a0()*-0.0676217);
}

double NNfunction_sb_sLuL::synapse0x3392b20() {
   return (neuron0x336d9e0()*0.00319612);
}

double NNfunction_sb_sLuL::synapse0x3392b60() {
   return (neuron0x336dd20()*0.225792);
}

double NNfunction_sb_sLuL::synapse0x336f0f0() {
   return (neuron0x336e190()*-0.396196);
}

double NNfunction_sb_sLuL::synapse0x336f130() {
   return (neuron0x336eae0()*-0.349786);
}

double NNfunction_sb_sLuL::synapse0x3370610() {
   return (neuron0x336f5c0()*0.134476);
}

double NNfunction_sb_sLuL::synapse0x3370650() {
   return (neuron0x3132910()*-0.465051);
}

double NNfunction_sb_sLuL::synapse0x3370fe0() {
   return (neuron0x3370360()*-0.812897);
}

double NNfunction_sb_sLuL::synapse0x3371020() {
   return (neuron0x3370d30()*0.201605);
}

double NNfunction_sb_sLuL::synapse0x3371db0() {
   return (neuron0x3371b00()*0.0743908);
}

double NNfunction_sb_sLuL::synapse0x3371df0() {
   return (neuron0x33724d0()*-0.452285);
}

double NNfunction_sb_sLuL::synapse0x3372780() {
   return (neuron0x3372ea0()*-0.0921506);
}

double NNfunction_sb_sLuL::synapse0x33727c0() {
   return (neuron0x3373980()*-0.077464);
}

double NNfunction_sb_sLuL::synapse0x3373150() {
   return (neuron0x3374350()*0.0886967);
}

double NNfunction_sb_sLuL::synapse0x3373190() {
   return (neuron0x3371430()*0.204131);
}

double NNfunction_sb_sLuL::synapse0x3373c30() {
   return (neuron0x3375f00()*-0.411882);
}

double NNfunction_sb_sLuL::synapse0x3373c70() {
   return (neuron0x33768d0()*-0.0416926);
}

double NNfunction_sb_sLuL::synapse0x3374600() {
   return (neuron0x33772a0()*-0.0409889);
}

double NNfunction_sb_sLuL::synapse0x3374640() {
   return (neuron0x3377c70()*-0.020266);
}

double NNfunction_sb_sLuL::synapse0x33716e0() {
   return (neuron0x3379a80()*-0.3982);
}

double NNfunction_sb_sLuL::synapse0x3371720() {
   return (neuron0x3379d60()*-0.513408);
}

double NNfunction_sb_sLuL::synapse0x33761b0() {
   return (neuron0x337a730()*0.209059);
}

double NNfunction_sb_sLuL::synapse0x33761f0() {
   return (neuron0x337b100()*-0.0252259);
}

double NNfunction_sb_sLuL::synapse0x3376b80() {
   return (neuron0x337bad0()*-0.159705);
}

double NNfunction_sb_sLuL::synapse0x3376bc0() {
   return (neuron0x337c4a0()*-0.423328);
}

double NNfunction_sb_sLuL::synapse0x3377550() {
   return (neuron0x3374ff0()*-0.547578);
}

double NNfunction_sb_sLuL::synapse0x3377590() {
   return (neuron0x33759c0()*-0.324289);
}

double NNfunction_sb_sLuL::synapse0x3377f20() {
   return (neuron0x337f230()*0.128825);
}

double NNfunction_sb_sLuL::synapse0x3377f60() {
   return (neuron0x337fc00()*-0.332733);
}

double NNfunction_sb_sLuL::synapse0x336c100() {
   return (neuron0x33805d0()*-0.090415);
}

double NNfunction_sb_sLuL::synapse0x336c140() {
   return (neuron0x3380fa0()*-0.0956329);
}

double NNfunction_sb_sLuL::synapse0x337a010() {
   return (neuron0x3381970()*-0.194059);
}

double NNfunction_sb_sLuL::synapse0x337a050() {
   return (neuron0x3382340()*-0.624184);
}

double NNfunction_sb_sLuL::synapse0x337a9e0() {
   return (neuron0x3382d10()*-0.629842);
}

double NNfunction_sb_sLuL::synapse0x337aa20() {
   return (neuron0x33836e0()*0.11231);
}

double NNfunction_sb_sLuL::synapse0x337b3b0() {
   return (neuron0x3379770()*-0.402905);
}

double NNfunction_sb_sLuL::synapse0x337b3f0() {
   return (neuron0x33862c0()*-0.00503713);
}

double NNfunction_sb_sLuL::synapse0x337bd80() {
   return (neuron0x3386c90()*-0.322753);
}

double NNfunction_sb_sLuL::synapse0x337bdc0() {
   return (neuron0x3387660()*-0.723396);
}

double NNfunction_sb_sLuL::synapse0x337c750() {
   return (neuron0x3388030()*-0.1031);
}

double NNfunction_sb_sLuL::synapse0x337c790() {
   return (neuron0x3388a00()*-0.352319);
}

double NNfunction_sb_sLuL::synapse0x33752a0() {
   return (neuron0x33893d0()*-0.263588);
}

double NNfunction_sb_sLuL::synapse0x33752e0() {
   return (neuron0x3389da0()*0.291068);
}

double NNfunction_sb_sLuL::synapse0x337eb50() {
   return (neuron0x338a770()*-0.334083);
}

double NNfunction_sb_sLuL::synapse0x337eb90() {
   return (neuron0x338b350()*-0.547557);
}

double NNfunction_sb_sLuL::synapse0x337f4e0() {
   return (neuron0x338bd20()*-0.455388);
}

double NNfunction_sb_sLuL::synapse0x337f520() {
   return (neuron0x337cba0()*-0.404159);
}

double NNfunction_sb_sLuL::synapse0x337feb0() {
   return (neuron0x337d570()*-0.362818);
}

double NNfunction_sb_sLuL::synapse0x337fef0() {
   return (neuron0x337df40()*0.114163);
}

double NNfunction_sb_sLuL::synapse0x3380880() {
   return (neuron0x3390580()*-0.109538);
}

double NNfunction_sb_sLuL::synapse0x33808c0() {
   return (neuron0x3390e30()*0.325271);
}

double NNfunction_sb_sLuL::synapse0x3381250() {
   return (neuron0x3391800()*0.287928);
}

double NNfunction_sb_sLuL::synapse0x3381290() {
   return (neuron0x33921d0()*-0.138729);
}

double NNfunction_sb_sLuL::synapse0x3383990() {
   return (neuron0x336e190()*3.9332);
}

double NNfunction_sb_sLuL::synapse0x33839d0() {
   return (neuron0x336eae0()*-1.05719);
}

double NNfunction_sb_sLuL::synapse0x3378f50() {
   return (neuron0x336f5c0()*-0.169297);
}

double NNfunction_sb_sLuL::synapse0x3378f90() {
   return (neuron0x3132910()*0.423874);
}

double NNfunction_sb_sLuL::synapse0x3386570() {
   return (neuron0x3370360()*0.675826);
}

double NNfunction_sb_sLuL::synapse0x33865b0() {
   return (neuron0x3370d30()*-1.2077);
}

double NNfunction_sb_sLuL::synapse0x3386f40() {
   return (neuron0x3371b00()*-0.284561);
}

double NNfunction_sb_sLuL::synapse0x3386f80() {
   return (neuron0x33724d0()*-1.24798);
}

double NNfunction_sb_sLuL::synapse0x3387910() {
   return (neuron0x3372ea0()*-3.66534);
}

double NNfunction_sb_sLuL::synapse0x3387950() {
   return (neuron0x3373980()*0.606272);
}

double NNfunction_sb_sLuL::synapse0x33882e0() {
   return (neuron0x3374350()*-1.91748);
}

double NNfunction_sb_sLuL::synapse0x3388320() {
   return (neuron0x3371430()*0.483037);
}

double NNfunction_sb_sLuL::synapse0x3388cb0() {
   return (neuron0x3375f00()*0.707615);
}

double NNfunction_sb_sLuL::synapse0x3388cf0() {
   return (neuron0x33768d0()*-1.01705);
}

double NNfunction_sb_sLuL::synapse0x3389680() {
   return (neuron0x33772a0()*-0.395835);
}

double NNfunction_sb_sLuL::synapse0x33896c0() {
   return (neuron0x3377c70()*-1.09898);
}

double NNfunction_sb_sLuL::synapse0x338a050() {
   return (neuron0x3379a80()*-0.858768);
}

double NNfunction_sb_sLuL::synapse0x338a090() {
   return (neuron0x3379d60()*1.14927);
}

double NNfunction_sb_sLuL::synapse0x338aa20() {
   return (neuron0x337a730()*0.856107);
}

double NNfunction_sb_sLuL::synapse0x338aa60() {
   return (neuron0x337b100()*0.285542);
}

double NNfunction_sb_sLuL::synapse0x338b600() {
   return (neuron0x337bad0()*-1.06038);
}

double NNfunction_sb_sLuL::synapse0x338b640() {
   return (neuron0x337c4a0()*1.76438);
}

double NNfunction_sb_sLuL::synapse0x338bfd0() {
   return (neuron0x3374ff0()*-0.993115);
}

double NNfunction_sb_sLuL::synapse0x338c010() {
   return (neuron0x33759c0()*-1.47999);
}

double NNfunction_sb_sLuL::synapse0x337ce50() {
   return (neuron0x337f230()*2.02615);
}

double NNfunction_sb_sLuL::synapse0x337ce90() {
   return (neuron0x337fc00()*1.08053);
}

double NNfunction_sb_sLuL::synapse0x337d820() {
   return (neuron0x33805d0()*-1.4121);
}

double NNfunction_sb_sLuL::synapse0x337d860() {
   return (neuron0x3380fa0()*1.01443);
}

double NNfunction_sb_sLuL::synapse0x337e1f0() {
   return (neuron0x3381970()*1.15175);
}

double NNfunction_sb_sLuL::synapse0x337e230() {
   return (neuron0x3382340()*0.992097);
}

double NNfunction_sb_sLuL::synapse0x3390710() {
   return (neuron0x3382d10()*2.84944);
}

double NNfunction_sb_sLuL::synapse0x3390750() {
   return (neuron0x33836e0()*1.63961);
}

double NNfunction_sb_sLuL::synapse0x33910e0() {
   return (neuron0x3379770()*0.50321);
}

double NNfunction_sb_sLuL::synapse0x3391120() {
   return (neuron0x33862c0()*0.852661);
}

double NNfunction_sb_sLuL::synapse0x3391ab0() {
   return (neuron0x3386c90()*2.22772);
}

double NNfunction_sb_sLuL::synapse0x3391af0() {
   return (neuron0x3387660()*-0.81227);
}

double NNfunction_sb_sLuL::synapse0x3392480() {
   return (neuron0x3388030()*-1.33782);
}

double NNfunction_sb_sLuL::synapse0x33924c0() {
   return (neuron0x3388a00()*-1.11779);
}

double NNfunction_sb_sLuL::synapse0x336e3b0() {
   return (neuron0x33893d0()*1.4154);
}

double NNfunction_sb_sLuL::synapse0x336e3f0() {
   return (neuron0x3389da0()*-2.47869);
}

double NNfunction_sb_sLuL::synapse0x3381c20() {
   return (neuron0x338a770()*-1.04507);
}

double NNfunction_sb_sLuL::synapse0x3381c60() {
   return (neuron0x338b350()*-1.21238);
}

double NNfunction_sb_sLuL::synapse0x3392ba0() {
   return (neuron0x338bd20()*-2.27766);
}

double NNfunction_sb_sLuL::synapse0x3392be0() {
   return (neuron0x337cba0()*0.275841);
}

double NNfunction_sb_sLuL::synapse0x3392c20() {
   return (neuron0x337d570()*-1.12387);
}

double NNfunction_sb_sLuL::synapse0x3392c60() {
   return (neuron0x337df40()*0.123568);
}

double NNfunction_sb_sLuL::synapse0x3399b10() {
   return (neuron0x3390580()*0.081635);
}

double NNfunction_sb_sLuL::synapse0x3399b50() {
   return (neuron0x3390e30()*1.91319);
}

double NNfunction_sb_sLuL::synapse0x3399b90() {
   return (neuron0x3391800()*0.704109);
}

double NNfunction_sb_sLuL::synapse0x3399bd0() {
   return (neuron0x33921d0()*0.775624);
}

double NNfunction_sb_sLuL::synapse0x3399f50() {
   return (neuron0x336e190()*-1.17171);
}

double NNfunction_sb_sLuL::synapse0x3399f90() {
   return (neuron0x336eae0()*0.724187);
}

double NNfunction_sb_sLuL::synapse0x3399fd0() {
   return (neuron0x336f5c0()*-1.0587);
}

double NNfunction_sb_sLuL::synapse0x339a010() {
   return (neuron0x3132910()*-0.0770781);
}

double NNfunction_sb_sLuL::synapse0x339a050() {
   return (neuron0x3370360()*-0.0914302);
}

double NNfunction_sb_sLuL::synapse0x339a090() {
   return (neuron0x3370d30()*0.221137);
}

double NNfunction_sb_sLuL::synapse0x339a0d0() {
   return (neuron0x3371b00()*0.0671536);
}

double NNfunction_sb_sLuL::synapse0x339a110() {
   return (neuron0x33724d0()*0.181548);
}

double NNfunction_sb_sLuL::synapse0x339a150() {
   return (neuron0x3372ea0()*0.108383);
}

double NNfunction_sb_sLuL::synapse0x339a190() {
   return (neuron0x3373980()*-0.126511);
}

double NNfunction_sb_sLuL::synapse0x339a1d0() {
   return (neuron0x3374350()*0.499625);
}

double NNfunction_sb_sLuL::synapse0x339a210() {
   return (neuron0x3371430()*-0.0610793);
}

double NNfunction_sb_sLuL::synapse0x339a250() {
   return (neuron0x3375f00()*-0.083859);
}

double NNfunction_sb_sLuL::synapse0x339a290() {
   return (neuron0x33768d0()*0.164248);
}

double NNfunction_sb_sLuL::synapse0x339a2d0() {
   return (neuron0x33772a0()*-1.06362);
}

double NNfunction_sb_sLuL::synapse0x339a310() {
   return (neuron0x3377c70()*0.108393);
}

double NNfunction_sb_sLuL::synapse0x3399da0() {
   return (neuron0x3379a80()*0.154474);
}

double NNfunction_sb_sLuL::synapse0x3399de0() {
   return (neuron0x3379d60()*0.00842605);
}

double NNfunction_sb_sLuL::synapse0x339a460() {
   return (neuron0x337a730()*-0.202854);
}

double NNfunction_sb_sLuL::synapse0x339a4a0() {
   return (neuron0x337b100()*0.0884248);
}

double NNfunction_sb_sLuL::synapse0x339a4e0() {
   return (neuron0x337bad0()*0.20139);
}

double NNfunction_sb_sLuL::synapse0x339a520() {
   return (neuron0x337c4a0()*-0.0945262);
}

double NNfunction_sb_sLuL::synapse0x339a560() {
   return (neuron0x3374ff0()*0.0969329);
}

double NNfunction_sb_sLuL::synapse0x339a5a0() {
   return (neuron0x33759c0()*0.23539);
}

double NNfunction_sb_sLuL::synapse0x339a5e0() {
   return (neuron0x337f230()*3.1048);
}

double NNfunction_sb_sLuL::synapse0x339a620() {
   return (neuron0x337fc00()*-0.195837);
}

double NNfunction_sb_sLuL::synapse0x339a660() {
   return (neuron0x33805d0()*0.18376);
}

double NNfunction_sb_sLuL::synapse0x339a6a0() {
   return (neuron0x3380fa0()*-0.250901);
}

double NNfunction_sb_sLuL::synapse0x339a6e0() {
   return (neuron0x3381970()*-0.10285);
}

double NNfunction_sb_sLuL::synapse0x339a720() {
   return (neuron0x3382340()*0.07232);
}

double NNfunction_sb_sLuL::synapse0x339a760() {
   return (neuron0x3382d10()*-3.02673);
}

double NNfunction_sb_sLuL::synapse0x339a7a0() {
   return (neuron0x33836e0()*0.309466);
}

double NNfunction_sb_sLuL::synapse0x339a350() {
   return (neuron0x3379770()*-0.889941);
}

double NNfunction_sb_sLuL::synapse0x339a390() {
   return (neuron0x33862c0()*-0.0943285);
}

double NNfunction_sb_sLuL::synapse0x339a3d0() {
   return (neuron0x3386c90()*-0.268567);
}

double NNfunction_sb_sLuL::synapse0x339a410() {
   return (neuron0x3387660()*0.0686973);
}

double NNfunction_sb_sLuL::synapse0x339a9f0() {
   return (neuron0x3388030()*0.0632423);
}

double NNfunction_sb_sLuL::synapse0x339aa30() {
   return (neuron0x3388a00()*0.0706944);
}

double NNfunction_sb_sLuL::synapse0x339aa70() {
   return (neuron0x33893d0()*-0.0756362);
}

double NNfunction_sb_sLuL::synapse0x339aab0() {
   return (neuron0x3389da0()*1.1288);
}

double NNfunction_sb_sLuL::synapse0x339aaf0() {
   return (neuron0x338a770()*1.04808);
}

double NNfunction_sb_sLuL::synapse0x339ab30() {
   return (neuron0x338b350()*0.087298);
}

double NNfunction_sb_sLuL::synapse0x339ab70() {
   return (neuron0x338bd20()*1.01971);
}

double NNfunction_sb_sLuL::synapse0x339abb0() {
   return (neuron0x337cba0()*-0.0156229);
}

double NNfunction_sb_sLuL::synapse0x339abf0() {
   return (neuron0x337d570()*0.141908);
}

double NNfunction_sb_sLuL::synapse0x339ac30() {
   return (neuron0x337df40()*0.0106599);
}

double NNfunction_sb_sLuL::synapse0x339ac70() {
   return (neuron0x3390580()*-0.0969558);
}

double NNfunction_sb_sLuL::synapse0x339acb0() {
   return (neuron0x3390e30()*-0.116847);
}

double NNfunction_sb_sLuL::synapse0x339acf0() {
   return (neuron0x3391800()*-0.0852245);
}

double NNfunction_sb_sLuL::synapse0x339ad30() {
   return (neuron0x33921d0()*-0.227338);
}

double NNfunction_sb_sLuL::synapse0x339b0b0() {
   return (neuron0x336e190()*1.72577);
}

double NNfunction_sb_sLuL::synapse0x339b0f0() {
   return (neuron0x336eae0()*0.477262);
}

double NNfunction_sb_sLuL::synapse0x339b130() {
   return (neuron0x336f5c0()*0.101541);
}

double NNfunction_sb_sLuL::synapse0x339b170() {
   return (neuron0x3132910()*1.11922);
}

double NNfunction_sb_sLuL::synapse0x339b1b0() {
   return (neuron0x3370360()*1.0741);
}

double NNfunction_sb_sLuL::synapse0x339b1f0() {
   return (neuron0x3370d30()*-0.86388);
}

double NNfunction_sb_sLuL::synapse0x339b230() {
   return (neuron0x3371b00()*1.97758);
}

double NNfunction_sb_sLuL::synapse0x339b270() {
   return (neuron0x33724d0()*-0.782969);
}

double NNfunction_sb_sLuL::synapse0x339b2b0() {
   return (neuron0x3372ea0()*-1.68538);
}

double NNfunction_sb_sLuL::synapse0x339b2f0() {
   return (neuron0x3373980()*0.748391);
}

double NNfunction_sb_sLuL::synapse0x339b330() {
   return (neuron0x3374350()*-1.21059);
}

double NNfunction_sb_sLuL::synapse0x339b370() {
   return (neuron0x3371430()*1.9834);
}

double NNfunction_sb_sLuL::synapse0x339b3b0() {
   return (neuron0x3375f00()*0.951948);
}

double NNfunction_sb_sLuL::synapse0x339b3f0() {
   return (neuron0x33768d0()*0.276856);
}

double NNfunction_sb_sLuL::synapse0x339b430() {
   return (neuron0x33772a0()*-1.39814);
}

double NNfunction_sb_sLuL::synapse0x339b470() {
   return (neuron0x3377c70()*-0.789675);
}

double NNfunction_sb_sLuL::synapse0x339af00() {
   return (neuron0x3379a80()*1.07047);
}

double NNfunction_sb_sLuL::synapse0x339af40() {
   return (neuron0x3379d60()*1.52983);
}

double NNfunction_sb_sLuL::synapse0x339b5c0() {
   return (neuron0x337a730()*-0.864281);
}

double NNfunction_sb_sLuL::synapse0x339b600() {
   return (neuron0x337b100()*1.38419);
}

double NNfunction_sb_sLuL::synapse0x339b640() {
   return (neuron0x337bad0()*-0.448015);
}

double NNfunction_sb_sLuL::synapse0x339b680() {
   return (neuron0x337c4a0()*0.0135481);
}

double NNfunction_sb_sLuL::synapse0x339b6c0() {
   return (neuron0x3374ff0()*-0.305737);
}

double NNfunction_sb_sLuL::synapse0x339b700() {
   return (neuron0x33759c0()*1.7461);
}

double NNfunction_sb_sLuL::synapse0x339b740() {
   return (neuron0x337f230()*1.87194);
}

double NNfunction_sb_sLuL::synapse0x339b780() {
   return (neuron0x337fc00()*-0.249814);
}

double NNfunction_sb_sLuL::synapse0x339b7c0() {
   return (neuron0x33805d0()*0.767719);
}

double NNfunction_sb_sLuL::synapse0x339b800() {
   return (neuron0x3380fa0()*-0.696831);
}

double NNfunction_sb_sLuL::synapse0x339b840() {
   return (neuron0x3381970()*-0.446916);
}

double NNfunction_sb_sLuL::synapse0x339b880() {
   return (neuron0x3382340()*-1.24072);
}

double NNfunction_sb_sLuL::synapse0x339b8c0() {
   return (neuron0x3382d10()*3.51144);
}

double NNfunction_sb_sLuL::synapse0x339b900() {
   return (neuron0x33836e0()*0.946123);
}

double NNfunction_sb_sLuL::synapse0x339b4b0() {
   return (neuron0x3379770()*0.314782);
}

double NNfunction_sb_sLuL::synapse0x339b4f0() {
   return (neuron0x33862c0()*-0.473379);
}

double NNfunction_sb_sLuL::synapse0x339b530() {
   return (neuron0x3386c90()*-1.07071);
}

double NNfunction_sb_sLuL::synapse0x339b570() {
   return (neuron0x3387660()*-1.21553);
}

double NNfunction_sb_sLuL::synapse0x339bb50() {
   return (neuron0x3388030()*-0.0291587);
}

double NNfunction_sb_sLuL::synapse0x339bb90() {
   return (neuron0x3388a00()*-0.916698);
}

double NNfunction_sb_sLuL::synapse0x339bbd0() {
   return (neuron0x33893d0()*1.54847);
}

double NNfunction_sb_sLuL::synapse0x339bc10() {
   return (neuron0x3389da0()*-1.15211);
}

double NNfunction_sb_sLuL::synapse0x339bc50() {
   return (neuron0x338a770()*-0.636791);
}

double NNfunction_sb_sLuL::synapse0x339bc90() {
   return (neuron0x338b350()*-0.82387);
}

double NNfunction_sb_sLuL::synapse0x339bcd0() {
   return (neuron0x338bd20()*-0.628622);
}

double NNfunction_sb_sLuL::synapse0x339bd10() {
   return (neuron0x337cba0()*1.3464);
}

double NNfunction_sb_sLuL::synapse0x339bd50() {
   return (neuron0x337d570()*-0.977151);
}

double NNfunction_sb_sLuL::synapse0x339bd90() {
   return (neuron0x337df40()*1.74887);
}

double NNfunction_sb_sLuL::synapse0x339bdd0() {
   return (neuron0x3390580()*0.958096);
}

double NNfunction_sb_sLuL::synapse0x339be10() {
   return (neuron0x3390e30()*-0.642133);
}

double NNfunction_sb_sLuL::synapse0x339be50() {
   return (neuron0x3391800()*0.992475);
}

double NNfunction_sb_sLuL::synapse0x339be90() {
   return (neuron0x33921d0()*-0.280891);
}

double NNfunction_sb_sLuL::synapse0x339c210() {
   return (neuron0x336e190()*-0.195528);
}

double NNfunction_sb_sLuL::synapse0x339c250() {
   return (neuron0x336eae0()*-0.400796);
}

double NNfunction_sb_sLuL::synapse0x339c290() {
   return (neuron0x336f5c0()*0.107949);
}

double NNfunction_sb_sLuL::synapse0x339c2d0() {
   return (neuron0x3132910()*-0.203137);
}

double NNfunction_sb_sLuL::synapse0x339c310() {
   return (neuron0x3370360()*-0.285608);
}

double NNfunction_sb_sLuL::synapse0x339c350() {
   return (neuron0x3370d30()*0.599818);
}

double NNfunction_sb_sLuL::synapse0x339c390() {
   return (neuron0x3371b00()*0.182756);
}

double NNfunction_sb_sLuL::synapse0x339c3d0() {
   return (neuron0x33724d0()*0.56115);
}

double NNfunction_sb_sLuL::synapse0x339c410() {
   return (neuron0x3372ea0()*-0.582194);
}

double NNfunction_sb_sLuL::synapse0x339c450() {
   return (neuron0x3373980()*-0.354971);
}

double NNfunction_sb_sLuL::synapse0x339c490() {
   return (neuron0x3374350()*0.452585);
}

double NNfunction_sb_sLuL::synapse0x339c4d0() {
   return (neuron0x3371430()*-0.211098);
}

double NNfunction_sb_sLuL::synapse0x339c510() {
   return (neuron0x3375f00()*-0.262439);
}

double NNfunction_sb_sLuL::synapse0x339c550() {
   return (neuron0x33768d0()*0.480077);
}

double NNfunction_sb_sLuL::synapse0x339c590() {
   return (neuron0x33772a0()*-1.24726);
}

double NNfunction_sb_sLuL::synapse0x339c5d0() {
   return (neuron0x3377c70()*0.340992);
}

double NNfunction_sb_sLuL::synapse0x339c060() {
   return (neuron0x3379a80()*0.432377);
}

double NNfunction_sb_sLuL::synapse0x339c0a0() {
   return (neuron0x3379d60()*-0.0856411);
}

double NNfunction_sb_sLuL::synapse0x339c720() {
   return (neuron0x337a730()*-0.546595);
}

double NNfunction_sb_sLuL::synapse0x339c760() {
   return (neuron0x337b100()*0.152599);
}

double NNfunction_sb_sLuL::synapse0x339c7a0() {
   return (neuron0x337bad0()*0.279467);
}

double NNfunction_sb_sLuL::synapse0x339c7e0() {
   return (neuron0x337c4a0()*-0.15598);
}

double NNfunction_sb_sLuL::synapse0x339c820() {
   return (neuron0x3374ff0()*0.322459);
}

double NNfunction_sb_sLuL::synapse0x339c860() {
   return (neuron0x33759c0()*0.659276);
}

double NNfunction_sb_sLuL::synapse0x339c8a0() {
   return (neuron0x337f230()*0.843608);
}

double NNfunction_sb_sLuL::synapse0x339c8e0() {
   return (neuron0x337fc00()*-0.573455);
}

double NNfunction_sb_sLuL::synapse0x339c920() {
   return (neuron0x33805d0()*0.540515);
}

double NNfunction_sb_sLuL::synapse0x339c960() {
   return (neuron0x3380fa0()*-0.651533);
}

double NNfunction_sb_sLuL::synapse0x339c9a0() {
   return (neuron0x3381970()*-0.322835);
}

double NNfunction_sb_sLuL::synapse0x339c9e0() {
   return (neuron0x3382340()*0.117837);
}

double NNfunction_sb_sLuL::synapse0x339ca20() {
   return (neuron0x3382d10()*0.646356);
}

double NNfunction_sb_sLuL::synapse0x339ca60() {
   return (neuron0x33836e0()*1.47878);
}

double NNfunction_sb_sLuL::synapse0x339c610() {
   return (neuron0x3379770()*0.305056);
}

double NNfunction_sb_sLuL::synapse0x339c650() {
   return (neuron0x33862c0()*-0.297036);
}

double NNfunction_sb_sLuL::synapse0x339c690() {
   return (neuron0x3386c90()*-0.772924);
}

double NNfunction_sb_sLuL::synapse0x339c6d0() {
   return (neuron0x3387660()*0.255389);
}

double NNfunction_sb_sLuL::synapse0x339ccb0() {
   return (neuron0x3388030()*0.280208);
}

double NNfunction_sb_sLuL::synapse0x339ccf0() {
   return (neuron0x3388a00()*0.280108);
}

double NNfunction_sb_sLuL::synapse0x339cd30() {
   return (neuron0x33893d0()*-0.0880566);
}

double NNfunction_sb_sLuL::synapse0x339cd70() {
   return (neuron0x3389da0()*0.101846);
}

double NNfunction_sb_sLuL::synapse0x339cdb0() {
   return (neuron0x338a770()*0.140445);
}

double NNfunction_sb_sLuL::synapse0x339cdf0() {
   return (neuron0x338b350()*0.315175);
}

double NNfunction_sb_sLuL::synapse0x339ce30() {
   return (neuron0x338bd20()*-0.137386);
}

double NNfunction_sb_sLuL::synapse0x339ce70() {
   return (neuron0x337cba0()*-0.0663675);
}

double NNfunction_sb_sLuL::synapse0x339ceb0() {
   return (neuron0x337d570()*0.421229);
}

double NNfunction_sb_sLuL::synapse0x339cef0() {
   return (neuron0x337df40()*0.0186162);
}

double NNfunction_sb_sLuL::synapse0x339cf30() {
   return (neuron0x3390580()*-0.244482);
}

double NNfunction_sb_sLuL::synapse0x339cf70() {
   return (neuron0x3390e30()*-0.4601);
}

double NNfunction_sb_sLuL::synapse0x339cfb0() {
   return (neuron0x3391800()*-0.258367);
}

double NNfunction_sb_sLuL::synapse0x339cff0() {
   return (neuron0x33921d0()*-0.58596);
}

double NNfunction_sb_sLuL::synapse0x339d250() {
   return (neuron0x33993d0()*-0.340923);
}

double NNfunction_sb_sLuL::synapse0x339d290() {
   return (neuron0x3399770()*-5.74459);
}

double NNfunction_sb_sLuL::synapse0x339d2d0() {
   return (neuron0x3399c10()*9.93432);
}

double NNfunction_sb_sLuL::synapse0x339d310() {
   return (neuron0x339ad70()*-3.91262);
}

double NNfunction_sb_sLuL::synapse0x339d350() {
   return (neuron0x339bed0()*-4.08746);
}

