#include "NNfunction_ss_uLdR.h"
#include <cmath>

double NNfunction_ss_uLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4972)/15.3263;
   input1 = (in1 - -3.46114)/1154.2;
   input2 = (in2 - 665.146)/628.769;
   input3 = (in3 - -55.417)/817.584;
   input4 = (in4 - 1058.34)/950.492;
   input5 = (in5 - 892.112)/942.5;
   input6 = (in6 - 904.013)/942.32;
   input7 = (in7 - 922.542)/931.132;
   input8 = (in8 - 928.198)/976.796;
   input9 = (in9 - 905.064)/956.845;
   input10 = (in10 - 991.962)/955.892;
   input11 = (in11 - 549.931)/620.393;
   input12 = (in12 - 733.002)/880.608;
   input13 = (in13 - 507.531)/525.467;
   input14 = (in14 - 713.811)/809.772;
   input15 = (in15 - 719.737)/814.308;
   input16 = (in16 - 540.408)/565.323;
   input17 = (in17 - 582.698)/655.951;
   input18 = (in18 - 756.345)/902.133;
   input19 = (in19 - 811.574)/886.81;
   input20 = (in20 - -4.79323)/495.194;
   input21 = (in21 - 3.73839)/1159.61;
   input22 = (in22 - 1.96102)/1208.28;
   input23 = (in23 - -196.883)/604.172;
   switch(index) {
     case 0:
         return neuron0x2cbb560();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLdR::Value(int index, double* input) {
   input0 = (input[0] - 23.4972)/15.3263;
   input1 = (input[1] - -3.46114)/1154.2;
   input2 = (input[2] - 665.146)/628.769;
   input3 = (input[3] - -55.417)/817.584;
   input4 = (input[4] - 1058.34)/950.492;
   input5 = (input[5] - 892.112)/942.5;
   input6 = (input[6] - 904.013)/942.32;
   input7 = (input[7] - 922.542)/931.132;
   input8 = (input[8] - 928.198)/976.796;
   input9 = (input[9] - 905.064)/956.845;
   input10 = (input[10] - 991.962)/955.892;
   input11 = (input[11] - 549.931)/620.393;
   input12 = (input[12] - 733.002)/880.608;
   input13 = (input[13] - 507.531)/525.467;
   input14 = (input[14] - 713.811)/809.772;
   input15 = (input[15] - 719.737)/814.308;
   input16 = (input[16] - 540.408)/565.323;
   input17 = (input[17] - 582.698)/655.951;
   input18 = (input[18] - 756.345)/902.133;
   input19 = (input[19] - 811.574)/886.81;
   input20 = (input[20] - -4.79323)/495.194;
   input21 = (input[21] - 3.73839)/1159.61;
   input22 = (input[22] - 1.96102)/1208.28;
   input23 = (input[23] - -196.883)/604.172;
   switch(index) {
     case 0:
         return neuron0x2cbb560();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLdR::neuron0x2c87620() {
   return input0;
}

double NNfunction_ss_uLdR::neuron0x2c87960() {
   return input1;
}

double NNfunction_ss_uLdR::neuron0x2c87ca0() {
   return input2;
}

double NNfunction_ss_uLdR::neuron0x2c87fe0() {
   return input3;
}

double NNfunction_ss_uLdR::neuron0x2c88320() {
   return input4;
}

double NNfunction_ss_uLdR::neuron0x2c88660() {
   return input5;
}

double NNfunction_ss_uLdR::neuron0x2c889a0() {
   return input6;
}

double NNfunction_ss_uLdR::neuron0x2c88ce0() {
   return input7;
}

double NNfunction_ss_uLdR::neuron0x2c89020() {
   return input8;
}

double NNfunction_ss_uLdR::neuron0x2c89360() {
   return input9;
}

double NNfunction_ss_uLdR::neuron0x2c896a0() {
   return input10;
}

double NNfunction_ss_uLdR::neuron0x2c899e0() {
   return input11;
}

double NNfunction_ss_uLdR::neuron0x2c89d20() {
   return input12;
}

double NNfunction_ss_uLdR::neuron0x2c8a060() {
   return input13;
}

double NNfunction_ss_uLdR::neuron0x2c8a3a0() {
   return input14;
}

double NNfunction_ss_uLdR::neuron0x2c8a6e0() {
   return input15;
}

double NNfunction_ss_uLdR::neuron0x2c8aa20() {
   return input16;
}

double NNfunction_ss_uLdR::neuron0x2c8af80() {
   return input17;
}

double NNfunction_ss_uLdR::neuron0x2c8b1a0() {
   return input18;
}

double NNfunction_ss_uLdR::neuron0x2c8b4e0() {
   return input19;
}

double NNfunction_ss_uLdR::neuron0x2c8b820() {
   return input20;
}

double NNfunction_ss_uLdR::neuron0x2c8bb60() {
   return input21;
}

double NNfunction_ss_uLdR::neuron0x2c8bea0() {
   return input22;
}

double NNfunction_ss_uLdR::neuron0x2c8c1e0() {
   return input23;
}

double NNfunction_ss_uLdR::input0x2c8c680() {
   double input = -0.781725;
   input += synapse0x2a47490();
   input += synapse0x2c874e0();
   input += synapse0x2c87520();
   input += synapse0x2c8c930();
   input += synapse0x2c8c970();
   input += synapse0x2c8c9b0();
   input += synapse0x2c8c9f0();
   input += synapse0x2c8ca30();
   input += synapse0x2c8ca70();
   input += synapse0x2c8cab0();
   input += synapse0x2c8caf0();
   input += synapse0x2c8cb30();
   input += synapse0x2c8cb70();
   input += synapse0x2c8cbb0();
   input += synapse0x2c8cbf0();
   input += synapse0x2c8cc30();
   input += synapse0x2c87450();
   input += synapse0x2c87490();
   input += synapse0x2a38d30();
   input += synapse0x2a38d70();
   input += synapse0x2c8ce90();
   input += synapse0x2c8ced0();
   input += synapse0x2c8cf10();
   input += synapse0x2c8cf50();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c8c680() {
   double input = input0x2c8c680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c8cf90() {
   double input = -0.856664;
   input += synapse0x2c8d2d0();
   input += synapse0x2c8d310();
   input += synapse0x2c8d350();
   input += synapse0x2c8d390();
   input += synapse0x2c8d3d0();
   input += synapse0x2c8d410();
   input += synapse0x2c8d450();
   input += synapse0x2c8d490();
   input += synapse0x2c8d4d0();
   input += synapse0x2c8cd80();
   input += synapse0x2c8cdc0();
   input += synapse0x2c8ce00();
   input += synapse0x2c8ce40();
   input += synapse0x2c8d720();
   input += synapse0x2c8d760();
   input += synapse0x2c8d7a0();
   input += synapse0x2c8d120();
   input += synapse0x2c8d160();
   input += synapse0x2c8d8f0();
   input += synapse0x2c8d930();
   input += synapse0x2c8d970();
   input += synapse0x2c8d9b0();
   input += synapse0x2c8d9f0();
   input += synapse0x2c8da30();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c8cf90() {
   double input = input0x2c8cf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c8da70() {
   double input = 0.733571;
   input += synapse0x2c8ddb0();
   input += synapse0x2c8ddf0();
   input += synapse0x2c8de30();
   input += synapse0x2c8de70();
   input += synapse0x2c8deb0();
   input += synapse0x2c8def0();
   input += synapse0x2c8df30();
   input += synapse0x2c8df70();
   input += synapse0x2c8dfb0();
   input += synapse0x2c8dff0();
   input += synapse0x2c8e030();
   input += synapse0x2c8e070();
   input += synapse0x2c8e0b0();
   input += synapse0x2c8e0f0();
   input += synapse0x2c8e130();
   input += synapse0x2c8e170();
   input += synapse0x2c8dc00();
   input += synapse0x2c8dc40();
   input += synapse0x2a46b80();
   input += synapse0x2a46bc0();
   input += synapse0x2c766b0();
   input += synapse0x2c766f0();
   input += synapse0x2c76730();
   input += synapse0x2c87560();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c8da70() {
   double input = input0x2c8da70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2a47300() {
   double input = 2.97963;
   input += synapse0x2c8d6c0();
   input += synapse0x2c875a0();
   input += synapse0x2c875e0();
   input += synapse0x2c8e2c0();
   input += synapse0x2c8e300();
   input += synapse0x2c8e340();
   input += synapse0x2c8e380();
   input += synapse0x2c8e3c0();
   input += synapse0x2c8e400();
   input += synapse0x2c8e440();
   input += synapse0x2c8e480();
   input += synapse0x2c8e4c0();
   input += synapse0x2c8e500();
   input += synapse0x2c8e540();
   input += synapse0x2c8e580();
   input += synapse0x2c8e5c0();
   input += synapse0x2c8d510();
   input += synapse0x2c8d550();
   input += synapse0x2c8e710();
   input += synapse0x2c8e750();
   input += synapse0x2c8e790();
   input += synapse0x2c8e7d0();
   input += synapse0x2c8e810();
   input += synapse0x2c8e850();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2a47300() {
   double input = input0x2a47300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c8e890() {
   double input = -0.709253;
   input += synapse0x2c8ebd0();
   input += synapse0x2c8ec10();
   input += synapse0x2c8ec50();
   input += synapse0x2c8ec90();
   input += synapse0x2c8ecd0();
   input += synapse0x2c8ed10();
   input += synapse0x2c8ed50();
   input += synapse0x2c8ed90();
   input += synapse0x2c8edd0();
   input += synapse0x2c8ee10();
   input += synapse0x2c8ee50();
   input += synapse0x2c8ee90();
   input += synapse0x2c8eed0();
   input += synapse0x2c8ef10();
   input += synapse0x2c8ef50();
   input += synapse0x2c8ef90();
   input += synapse0x2c8ea20();
   input += synapse0x2c8ea60();
   input += synapse0x2c8f0e0();
   input += synapse0x2c8f120();
   input += synapse0x2c8f160();
   input += synapse0x2c8f1a0();
   input += synapse0x2c8f1e0();
   input += synapse0x2c8f220();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c8e890() {
   double input = input0x2c8e890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c8f260() {
   double input = 0.897016;
   input += synapse0x2c8f5a0();
   input += synapse0x2c8f5e0();
   input += synapse0x2c8f620();
   input += synapse0x2c8f660();
   input += synapse0x2c8f6a0();
   input += synapse0x2c8f6e0();
   input += synapse0x2c8f720();
   input += synapse0x2c8f760();
   input += synapse0x2c8f7a0();
   input += synapse0x2a46ef0();
   input += synapse0x2a46f30();
   input += synapse0x2a46f70();
   input += synapse0x2a46fb0();
   input += synapse0x2a46ff0();
   input += synapse0x2a47030();
   input += synapse0x2a47070();
   input += synapse0x2c8f3f0();
   input += synapse0x2c8f430();
   input += synapse0x2a471c0();
   input += synapse0x2a47200();
   input += synapse0x2a47240();
   input += synapse0x2a47280();
   input += synapse0x2a472c0();
   input += synapse0x2c8fff0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c8f260() {
   double input = input0x2c8f260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c90030() {
   double input = 0.941189;
   input += synapse0x2c90370();
   input += synapse0x2c903b0();
   input += synapse0x2c903f0();
   input += synapse0x2c90430();
   input += synapse0x2c90470();
   input += synapse0x2c904b0();
   input += synapse0x2c904f0();
   input += synapse0x2c90530();
   input += synapse0x2c90570();
   input += synapse0x2c905b0();
   input += synapse0x2c905f0();
   input += synapse0x2c90630();
   input += synapse0x2c90670();
   input += synapse0x2c906b0();
   input += synapse0x2c906f0();
   input += synapse0x2c90730();
   input += synapse0x2c901c0();
   input += synapse0x2c90200();
   input += synapse0x2c90880();
   input += synapse0x2c908c0();
   input += synapse0x2c90900();
   input += synapse0x2c90940();
   input += synapse0x2c90980();
   input += synapse0x2c909c0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c90030() {
   double input = input0x2c90030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c90a00() {
   double input = -0.127748;
   input += synapse0x2c90d40();
   input += synapse0x2c90d80();
   input += synapse0x2c90dc0();
   input += synapse0x2c90e00();
   input += synapse0x2c90e40();
   input += synapse0x2c90e80();
   input += synapse0x2c90ec0();
   input += synapse0x2c90f00();
   input += synapse0x2c90f40();
   input += synapse0x2c90f80();
   input += synapse0x2c90fc0();
   input += synapse0x2c91000();
   input += synapse0x2c91040();
   input += synapse0x2c91080();
   input += synapse0x2c910c0();
   input += synapse0x2c91100();
   input += synapse0x2c90b90();
   input += synapse0x2c90bd0();
   input += synapse0x2c91250();
   input += synapse0x2c91290();
   input += synapse0x2c912d0();
   input += synapse0x2c91310();
   input += synapse0x2c91350();
   input += synapse0x2c91390();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c90a00() {
   double input = input0x2c90a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c913d0() {
   double input = -1.02246;
   input += synapse0x2c8ae70();
   input += synapse0x2c8aeb0();
   input += synapse0x2c8aef0();
   input += synapse0x2c8af30();
   input += synapse0x2c91920();
   input += synapse0x2c91960();
   input += synapse0x2c919a0();
   input += synapse0x2c919e0();
   input += synapse0x2c91a20();
   input += synapse0x2c91a60();
   input += synapse0x2c91aa0();
   input += synapse0x2c91ae0();
   input += synapse0x2c91b20();
   input += synapse0x2c91b60();
   input += synapse0x2c91ba0();
   input += synapse0x2c91be0();
   input += synapse0x2c91560();
   input += synapse0x2c915a0();
   input += synapse0x2c91d30();
   input += synapse0x2c91d70();
   input += synapse0x2c91db0();
   input += synapse0x2c91df0();
   input += synapse0x2c91e30();
   input += synapse0x2c91e70();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c913d0() {
   double input = input0x2c913d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c91eb0() {
   double input = 1.68483;
   input += synapse0x2c921f0();
   input += synapse0x2c92230();
   input += synapse0x2c92270();
   input += synapse0x2c922b0();
   input += synapse0x2c922f0();
   input += synapse0x2c92330();
   input += synapse0x2c92370();
   input += synapse0x2c923b0();
   input += synapse0x2c923f0();
   input += synapse0x2c92430();
   input += synapse0x2c92470();
   input += synapse0x2c924b0();
   input += synapse0x2c924f0();
   input += synapse0x2c92530();
   input += synapse0x2c92570();
   input += synapse0x2c925b0();
   input += synapse0x2c92040();
   input += synapse0x2c92080();
   input += synapse0x2c92700();
   input += synapse0x2c92740();
   input += synapse0x2c92780();
   input += synapse0x2c927c0();
   input += synapse0x2c92800();
   input += synapse0x2c92840();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c91eb0() {
   double input = input0x2c91eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c92880() {
   double input = 0.492707;
   input += synapse0x2c92bc0();
   input += synapse0x2c92c00();
   input += synapse0x2c92c40();
   input += synapse0x2c92c80();
   input += synapse0x2c92cc0();
   input += synapse0x2c92d00();
   input += synapse0x2c92d40();
   input += synapse0x2c92d80();
   input += synapse0x2c92dc0();
   input += synapse0x2c92e00();
   input += synapse0x2c92e40();
   input += synapse0x2c92e80();
   input += synapse0x2c92ec0();
   input += synapse0x2c92f00();
   input += synapse0x2c92f40();
   input += synapse0x2c92f80();
   input += synapse0x2c92a10();
   input += synapse0x2c92a50();
   input += synapse0x2c8f7e0();
   input += synapse0x2c8f820();
   input += synapse0x2c8f860();
   input += synapse0x2c8f8a0();
   input += synapse0x2c8f8e0();
   input += synapse0x2c8f920();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c92880() {
   double input = input0x2c92880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c8f960() {
   double input = 0.34218;
   input += synapse0x2c8fca0();
   input += synapse0x2c8fce0();
   input += synapse0x2c8fd20();
   input += synapse0x2c8fd60();
   input += synapse0x2c8fda0();
   input += synapse0x2c8fde0();
   input += synapse0x2c8fe20();
   input += synapse0x2c8fe60();
   input += synapse0x2c8fea0();
   input += synapse0x2c8fee0();
   input += synapse0x2c8ff20();
   input += synapse0x2c8ff60();
   input += synapse0x2c8ffa0();
   input += synapse0x2c940e0();
   input += synapse0x2c94120();
   input += synapse0x2c94160();
   input += synapse0x2c8faf0();
   input += synapse0x2c8fb30();
   input += synapse0x2c942b0();
   input += synapse0x2c942f0();
   input += synapse0x2c94330();
   input += synapse0x2c94370();
   input += synapse0x2c943b0();
   input += synapse0x2c943f0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c8f960() {
   double input = input0x2c8f960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c94430() {
   double input = 0.62926;
   input += synapse0x2c94770();
   input += synapse0x2c947b0();
   input += synapse0x2c947f0();
   input += synapse0x2c94830();
   input += synapse0x2c94870();
   input += synapse0x2c948b0();
   input += synapse0x2c948f0();
   input += synapse0x2c94930();
   input += synapse0x2c94970();
   input += synapse0x2c949b0();
   input += synapse0x2c949f0();
   input += synapse0x2c94a30();
   input += synapse0x2c94a70();
   input += synapse0x2c94ab0();
   input += synapse0x2c94af0();
   input += synapse0x2c94b30();
   input += synapse0x2c945c0();
   input += synapse0x2c94600();
   input += synapse0x2c94c80();
   input += synapse0x2c94cc0();
   input += synapse0x2c94d00();
   input += synapse0x2c94d40();
   input += synapse0x2c94d80();
   input += synapse0x2c94dc0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c94430() {
   double input = input0x2c94430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c94e00() {
   double input = 1.31527;
   input += synapse0x2c95140();
   input += synapse0x2c95180();
   input += synapse0x2c951c0();
   input += synapse0x2c95200();
   input += synapse0x2c95240();
   input += synapse0x2c95280();
   input += synapse0x2c952c0();
   input += synapse0x2c95300();
   input += synapse0x2c95340();
   input += synapse0x2c95380();
   input += synapse0x2c953c0();
   input += synapse0x2c95400();
   input += synapse0x2c95440();
   input += synapse0x2c95480();
   input += synapse0x2c954c0();
   input += synapse0x2c95500();
   input += synapse0x2c94f90();
   input += synapse0x2c94fd0();
   input += synapse0x2c95650();
   input += synapse0x2c95690();
   input += synapse0x2c956d0();
   input += synapse0x2c95710();
   input += synapse0x2c95750();
   input += synapse0x2c95790();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c94e00() {
   double input = input0x2c94e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c957d0() {
   double input = 0.771816;
   input += synapse0x2c95b10();
   input += synapse0x2c95b50();
   input += synapse0x2c95b90();
   input += synapse0x2c95bd0();
   input += synapse0x2c95c10();
   input += synapse0x2c95c50();
   input += synapse0x2c95c90();
   input += synapse0x2c95cd0();
   input += synapse0x2c95d10();
   input += synapse0x2c95d50();
   input += synapse0x2c95d90();
   input += synapse0x2c95dd0();
   input += synapse0x2c95e10();
   input += synapse0x2c95e50();
   input += synapse0x2c95e90();
   input += synapse0x2c95ed0();
   input += synapse0x2c95960();
   input += synapse0x2c959a0();
   input += synapse0x2c96020();
   input += synapse0x2c96060();
   input += synapse0x2c960a0();
   input += synapse0x2c960e0();
   input += synapse0x2c96120();
   input += synapse0x2c96160();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c957d0() {
   double input = input0x2c957d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c961a0() {
   double input = 0.654264;
   input += synapse0x2c964e0();
   input += synapse0x2c87840();
   input += synapse0x2c87880();
   input += synapse0x2c87b80();
   input += synapse0x2c87bc0();
   input += synapse0x2c87ec0();
   input += synapse0x2c87f00();
   input += synapse0x2c88200();
   input += synapse0x2c88240();
   input += synapse0x2c88540();
   input += synapse0x2c88580();
   input += synapse0x2c88880();
   input += synapse0x2c888c0();
   input += synapse0x2c88bc0();
   input += synapse0x2c88c00();
   input += synapse0x2c88f00();
   input += synapse0x2c88f40();
   input += synapse0x2c89240();
   input += synapse0x2c89280();
   input += synapse0x2c89580();
   input += synapse0x2c895c0();
   input += synapse0x2c898c0();
   input += synapse0x2c89900();
   input += synapse0x2c89c00();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c961a0() {
   double input = input0x2c961a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c97fb0() {
   double input = 1.78072;
   input += synapse0x2c89c40();
   input += synapse0x2c8a900();
   input += synapse0x2c8a940();
   input += synapse0x2c96330();
   input += synapse0x2c96370();
   input += synapse0x2c8ac40();
   input += synapse0x2c8ac80();
   input += synapse0x2a38c10();
   input += synapse0x2a38c50();
   input += synapse0x2c8b3c0();
   input += synapse0x2c8b400();
   input += synapse0x2c8b700();
   input += synapse0x2c8b740();
   input += synapse0x2c8ba40();
   input += synapse0x2c8ba80();
   input += synapse0x2c8bd80();
   input += synapse0x2c8bdc0();
   input += synapse0x2c8c0c0();
   input += synapse0x2c8c100();
   input += synapse0x2c8c400();
   input += synapse0x2c8c440();
   input += synapse0x2c89f40();
   input += synapse0x2c89f80();
   input += synapse0x2c98250();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c97fb0() {
   double input = input0x2c97fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c98290() {
   double input = 0.128321;
   input += synapse0x2c985d0();
   input += synapse0x2c98610();
   input += synapse0x2c98650();
   input += synapse0x2c98690();
   input += synapse0x2c986d0();
   input += synapse0x2c98710();
   input += synapse0x2c98750();
   input += synapse0x2c98790();
   input += synapse0x2c987d0();
   input += synapse0x2c98810();
   input += synapse0x2c98850();
   input += synapse0x2c98890();
   input += synapse0x2c988d0();
   input += synapse0x2c98910();
   input += synapse0x2c98950();
   input += synapse0x2c98990();
   input += synapse0x2c98420();
   input += synapse0x2c98460();
   input += synapse0x2c98ae0();
   input += synapse0x2c98b20();
   input += synapse0x2c98b60();
   input += synapse0x2c98ba0();
   input += synapse0x2c98be0();
   input += synapse0x2c98c20();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c98290() {
   double input = input0x2c98290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c98c60() {
   double input = 0.700259;
   input += synapse0x2c98fa0();
   input += synapse0x2c98fe0();
   input += synapse0x2c99020();
   input += synapse0x2c99060();
   input += synapse0x2c990a0();
   input += synapse0x2c990e0();
   input += synapse0x2c99120();
   input += synapse0x2c99160();
   input += synapse0x2c991a0();
   input += synapse0x2c991e0();
   input += synapse0x2c99220();
   input += synapse0x2c99260();
   input += synapse0x2c992a0();
   input += synapse0x2c992e0();
   input += synapse0x2c99320();
   input += synapse0x2c99360();
   input += synapse0x2c98df0();
   input += synapse0x2c98e30();
   input += synapse0x2c994b0();
   input += synapse0x2c994f0();
   input += synapse0x2c99530();
   input += synapse0x2c99570();
   input += synapse0x2c995b0();
   input += synapse0x2c995f0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c98c60() {
   double input = input0x2c98c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c99630() {
   double input = 0.491825;
   input += synapse0x2c99970();
   input += synapse0x2c999b0();
   input += synapse0x2c999f0();
   input += synapse0x2c99a30();
   input += synapse0x2c99a70();
   input += synapse0x2c99ab0();
   input += synapse0x2c99af0();
   input += synapse0x2c99b30();
   input += synapse0x2c99b70();
   input += synapse0x2c99bb0();
   input += synapse0x2c99bf0();
   input += synapse0x2c99c30();
   input += synapse0x2c99c70();
   input += synapse0x2c99cb0();
   input += synapse0x2c99cf0();
   input += synapse0x2c99d30();
   input += synapse0x2c997c0();
   input += synapse0x2c99800();
   input += synapse0x2c99e80();
   input += synapse0x2c99ec0();
   input += synapse0x2c99f00();
   input += synapse0x2c99f40();
   input += synapse0x2c99f80();
   input += synapse0x2c99fc0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c99630() {
   double input = input0x2c99630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9a000() {
   double input = 0.232796;
   input += synapse0x2c9a340();
   input += synapse0x2c9a380();
   input += synapse0x2c9a3c0();
   input += synapse0x2c9a400();
   input += synapse0x2c9a440();
   input += synapse0x2c9a480();
   input += synapse0x2c9a4c0();
   input += synapse0x2c9a500();
   input += synapse0x2c9a540();
   input += synapse0x2c9a580();
   input += synapse0x2c9a5c0();
   input += synapse0x2c9a600();
   input += synapse0x2c9a640();
   input += synapse0x2c9a680();
   input += synapse0x2c9a6c0();
   input += synapse0x2c9a700();
   input += synapse0x2c9a190();
   input += synapse0x2c9a1d0();
   input += synapse0x2c9a850();
   input += synapse0x2c9a890();
   input += synapse0x2c9a8d0();
   input += synapse0x2c9a910();
   input += synapse0x2c9a950();
   input += synapse0x2c9a990();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9a000() {
   double input = input0x2c9a000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9a9d0() {
   double input = -0.703853;
   input += synapse0x2c9ad10();
   input += synapse0x2c9ad50();
   input += synapse0x2c9ad90();
   input += synapse0x2c9add0();
   input += synapse0x2c9ae10();
   input += synapse0x2c9ae50();
   input += synapse0x2c9ae90();
   input += synapse0x2c9aed0();
   input += synapse0x2c9af10();
   input += synapse0x2c930d0();
   input += synapse0x2c93110();
   input += synapse0x2c93150();
   input += synapse0x2c93190();
   input += synapse0x2c931d0();
   input += synapse0x2c93210();
   input += synapse0x2c93250();
   input += synapse0x2c9ab60();
   input += synapse0x2c9aba0();
   input += synapse0x2c933a0();
   input += synapse0x2c933e0();
   input += synapse0x2c93420();
   input += synapse0x2c93460();
   input += synapse0x2c934a0();
   input += synapse0x2c934e0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9a9d0() {
   double input = input0x2c9a9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c93520() {
   double input = -0.815082;
   input += synapse0x2c93860();
   input += synapse0x2c938a0();
   input += synapse0x2c938e0();
   input += synapse0x2c93920();
   input += synapse0x2c93960();
   input += synapse0x2c939a0();
   input += synapse0x2c939e0();
   input += synapse0x2c93a20();
   input += synapse0x2c93a60();
   input += synapse0x2c93aa0();
   input += synapse0x2c93ae0();
   input += synapse0x2c93b20();
   input += synapse0x2c93b60();
   input += synapse0x2c93ba0();
   input += synapse0x2c93be0();
   input += synapse0x2c93c20();
   input += synapse0x2c936b0();
   input += synapse0x2c936f0();
   input += synapse0x2c93d70();
   input += synapse0x2c93db0();
   input += synapse0x2c93df0();
   input += synapse0x2c93e30();
   input += synapse0x2c93e70();
   input += synapse0x2c93eb0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c93520() {
   double input = input0x2c93520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c93ef0() {
   double input = -0.0260734;
   input += synapse0x2c94080();
   input += synapse0x2c9d110();
   input += synapse0x2c9d150();
   input += synapse0x2c9d190();
   input += synapse0x2c9d1d0();
   input += synapse0x2c9d210();
   input += synapse0x2c9d250();
   input += synapse0x2c9d290();
   input += synapse0x2c9d2d0();
   input += synapse0x2c9d310();
   input += synapse0x2c9d350();
   input += synapse0x2c9d390();
   input += synapse0x2c9d3d0();
   input += synapse0x2c9d410();
   input += synapse0x2c9d450();
   input += synapse0x2c9d490();
   input += synapse0x2c9cf60();
   input += synapse0x2c9cfa0();
   input += synapse0x2c9d5e0();
   input += synapse0x2c9d620();
   input += synapse0x2c9d660();
   input += synapse0x2c9d6a0();
   input += synapse0x2c9d6e0();
   input += synapse0x2c9d720();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c93ef0() {
   double input = input0x2c93ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9d760() {
   double input = -1.34642;
   input += synapse0x2c9daa0();
   input += synapse0x2c9dae0();
   input += synapse0x2c9db20();
   input += synapse0x2c9db60();
   input += synapse0x2c9dba0();
   input += synapse0x2c9dbe0();
   input += synapse0x2c9dc20();
   input += synapse0x2c9dc60();
   input += synapse0x2c9dca0();
   input += synapse0x2c9dce0();
   input += synapse0x2c9dd20();
   input += synapse0x2c9dd60();
   input += synapse0x2c9dda0();
   input += synapse0x2c9dde0();
   input += synapse0x2c9de20();
   input += synapse0x2c9de60();
   input += synapse0x2c9d8f0();
   input += synapse0x2c9d930();
   input += synapse0x2c9dfb0();
   input += synapse0x2c9dff0();
   input += synapse0x2c9e030();
   input += synapse0x2c9e070();
   input += synapse0x2c9e0b0();
   input += synapse0x2c9e0f0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9d760() {
   double input = input0x2c9d760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9e130() {
   double input = -0.884333;
   input += synapse0x2c9e470();
   input += synapse0x2c9e4b0();
   input += synapse0x2c9e4f0();
   input += synapse0x2c9e530();
   input += synapse0x2c9e570();
   input += synapse0x2c9e5b0();
   input += synapse0x2c9e5f0();
   input += synapse0x2c9e630();
   input += synapse0x2c9e670();
   input += synapse0x2c9e6b0();
   input += synapse0x2c9e6f0();
   input += synapse0x2c9e730();
   input += synapse0x2c9e770();
   input += synapse0x2c9e7b0();
   input += synapse0x2c9e7f0();
   input += synapse0x2c9e830();
   input += synapse0x2c9e2c0();
   input += synapse0x2c9e300();
   input += synapse0x2c9e980();
   input += synapse0x2c9e9c0();
   input += synapse0x2c9ea00();
   input += synapse0x2c9ea40();
   input += synapse0x2c9ea80();
   input += synapse0x2c9eac0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9e130() {
   double input = input0x2c9e130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9eb00() {
   double input = -0.661965;
   input += synapse0x2c9ee40();
   input += synapse0x2c9ee80();
   input += synapse0x2c9eec0();
   input += synapse0x2c9ef00();
   input += synapse0x2c9ef40();
   input += synapse0x2c9ef80();
   input += synapse0x2c9efc0();
   input += synapse0x2c9f000();
   input += synapse0x2c9f040();
   input += synapse0x2c9f080();
   input += synapse0x2c9f0c0();
   input += synapse0x2c9f100();
   input += synapse0x2c9f140();
   input += synapse0x2c9f180();
   input += synapse0x2c9f1c0();
   input += synapse0x2c9f200();
   input += synapse0x2c9ec90();
   input += synapse0x2c9ecd0();
   input += synapse0x2c9f350();
   input += synapse0x2c9f390();
   input += synapse0x2c9f3d0();
   input += synapse0x2c9f410();
   input += synapse0x2c9f450();
   input += synapse0x2c9f490();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9eb00() {
   double input = input0x2c9eb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9f4d0() {
   double input = 0.34339;
   input += synapse0x2c9f810();
   input += synapse0x2c9f850();
   input += synapse0x2c9f890();
   input += synapse0x2c9f8d0();
   input += synapse0x2c9f910();
   input += synapse0x2c9f950();
   input += synapse0x2c9f990();
   input += synapse0x2c9f9d0();
   input += synapse0x2c9fa10();
   input += synapse0x2c9fa50();
   input += synapse0x2c9fa90();
   input += synapse0x2c9fad0();
   input += synapse0x2c9fb10();
   input += synapse0x2c9fb50();
   input += synapse0x2c9fb90();
   input += synapse0x2c9fbd0();
   input += synapse0x2c9f660();
   input += synapse0x2c9f6a0();
   input += synapse0x2c9fd20();
   input += synapse0x2c9fd60();
   input += synapse0x2c9fda0();
   input += synapse0x2c9fde0();
   input += synapse0x2c9fe20();
   input += synapse0x2c9fe60();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9f4d0() {
   double input = input0x2c9f4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9fea0() {
   double input = -0.910201;
   input += synapse0x2ca01e0();
   input += synapse0x2ca0220();
   input += synapse0x2ca0260();
   input += synapse0x2ca02a0();
   input += synapse0x2ca02e0();
   input += synapse0x2ca0320();
   input += synapse0x2ca0360();
   input += synapse0x2ca03a0();
   input += synapse0x2ca03e0();
   input += synapse0x2ca0420();
   input += synapse0x2ca0460();
   input += synapse0x2ca04a0();
   input += synapse0x2ca04e0();
   input += synapse0x2ca0520();
   input += synapse0x2ca0560();
   input += synapse0x2ca05a0();
   input += synapse0x2ca0030();
   input += synapse0x2ca0070();
   input += synapse0x2ca06f0();
   input += synapse0x2ca0730();
   input += synapse0x2ca0770();
   input += synapse0x2ca07b0();
   input += synapse0x2ca07f0();
   input += synapse0x2ca0830();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9fea0() {
   double input = input0x2c9fea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca0870() {
   double input = -0.970899;
   input += synapse0x2ca0bb0();
   input += synapse0x2ca0bf0();
   input += synapse0x2ca0c30();
   input += synapse0x2ca0c70();
   input += synapse0x2ca0cb0();
   input += synapse0x2ca0cf0();
   input += synapse0x2ca0d30();
   input += synapse0x2ca0d70();
   input += synapse0x2ca0db0();
   input += synapse0x2ca0df0();
   input += synapse0x2ca0e30();
   input += synapse0x2ca0e70();
   input += synapse0x2ca0eb0();
   input += synapse0x2ca0ef0();
   input += synapse0x2ca0f30();
   input += synapse0x2ca0f70();
   input += synapse0x2ca0a00();
   input += synapse0x2ca0a40();
   input += synapse0x2ca10c0();
   input += synapse0x2ca1100();
   input += synapse0x2ca1140();
   input += synapse0x2ca1180();
   input += synapse0x2ca11c0();
   input += synapse0x2ca1200();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca0870() {
   double input = input0x2ca0870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca1240() {
   double input = 7.45534;
   input += synapse0x2ca1580();
   input += synapse0x2ca15c0();
   input += synapse0x2ca1600();
   input += synapse0x2ca1640();
   input += synapse0x2ca1680();
   input += synapse0x2ca16c0();
   input += synapse0x2ca1700();
   input += synapse0x2ca1740();
   input += synapse0x2ca1780();
   input += synapse0x2ca17c0();
   input += synapse0x2ca1800();
   input += synapse0x2ca1840();
   input += synapse0x2ca1880();
   input += synapse0x2ca18c0();
   input += synapse0x2ca1900();
   input += synapse0x2ca1940();
   input += synapse0x2ca13d0();
   input += synapse0x2ca1410();
   input += synapse0x2ca1a90();
   input += synapse0x2ca1ad0();
   input += synapse0x2ca1b10();
   input += synapse0x2ca1b50();
   input += synapse0x2ca1b90();
   input += synapse0x2ca1bd0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca1240() {
   double input = input0x2ca1240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca1c10() {
   double input = 1.78574;
   input += synapse0x2ca1f50();
   input += synapse0x2c96520();
   input += synapse0x2c96560();
   input += synapse0x2c965a0();
   input += synapse0x2c967f0();
   input += synapse0x2c96830();
   input += synapse0x2c96870();
   input += synapse0x2c96ac0();
   input += synapse0x2c96b00();
   input += synapse0x2c96d50();
   input += synapse0x2c96d90();
   input += synapse0x2c96dd0();
   input += synapse0x2c97020();
   input += synapse0x2c97060();
   input += synapse0x2c972b0();
   input += synapse0x2c972f0();
   input += synapse0x2ca1da0();
   input += synapse0x2ca1de0();
   input += synapse0x2c97440();
   input += synapse0x2c97950();
   input += synapse0x2c97990();
   input += synapse0x2c979d0();
   input += synapse0x2c97c20();
   input += synapse0x2c97c60();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca1c10() {
   double input = input0x2ca1c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c97ca0() {
   double input = 0.257689;
   input += synapse0x2c97510();
   input += synapse0x2c97550();
   input += synapse0x2c97590();
   input += synapse0x2c975d0();
   input += synapse0x2c97f50();
   input += synapse0x2ca42a0();
   input += synapse0x2ca42e0();
   input += synapse0x2ca4320();
   input += synapse0x2ca4360();
   input += synapse0x2ca43a0();
   input += synapse0x2ca43e0();
   input += synapse0x2ca4420();
   input += synapse0x2ca4460();
   input += synapse0x2ca44a0();
   input += synapse0x2ca44e0();
   input += synapse0x2ca4520();
   input += synapse0x2c97e30();
   input += synapse0x2c97e70();
   input += synapse0x2ca4670();
   input += synapse0x2ca46b0();
   input += synapse0x2ca46f0();
   input += synapse0x2ca4730();
   input += synapse0x2ca4770();
   input += synapse0x2ca47b0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c97ca0() {
   double input = input0x2c97ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca47f0() {
   double input = 0.163522;
   input += synapse0x2ca4b30();
   input += synapse0x2ca4b70();
   input += synapse0x2ca4bb0();
   input += synapse0x2ca4bf0();
   input += synapse0x2ca4c30();
   input += synapse0x2ca4c70();
   input += synapse0x2ca4cb0();
   input += synapse0x2ca4cf0();
   input += synapse0x2ca4d30();
   input += synapse0x2ca4d70();
   input += synapse0x2ca4db0();
   input += synapse0x2ca4df0();
   input += synapse0x2ca4e30();
   input += synapse0x2ca4e70();
   input += synapse0x2ca4eb0();
   input += synapse0x2ca4ef0();
   input += synapse0x2ca4980();
   input += synapse0x2ca49c0();
   input += synapse0x2ca5040();
   input += synapse0x2ca5080();
   input += synapse0x2ca50c0();
   input += synapse0x2ca5100();
   input += synapse0x2ca5140();
   input += synapse0x2ca5180();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca47f0() {
   double input = input0x2ca47f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca51c0() {
   double input = 1.06531;
   input += synapse0x2ca5500();
   input += synapse0x2ca5540();
   input += synapse0x2ca5580();
   input += synapse0x2ca55c0();
   input += synapse0x2ca5600();
   input += synapse0x2ca5640();
   input += synapse0x2ca5680();
   input += synapse0x2ca56c0();
   input += synapse0x2ca5700();
   input += synapse0x2ca5740();
   input += synapse0x2ca5780();
   input += synapse0x2ca57c0();
   input += synapse0x2ca5800();
   input += synapse0x2ca5840();
   input += synapse0x2ca5880();
   input += synapse0x2ca58c0();
   input += synapse0x2ca5350();
   input += synapse0x2ca5390();
   input += synapse0x2ca5a10();
   input += synapse0x2ca5a50();
   input += synapse0x2ca5a90();
   input += synapse0x2ca5ad0();
   input += synapse0x2ca5b10();
   input += synapse0x2ca5b50();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca51c0() {
   double input = input0x2ca51c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca5b90() {
   double input = -1.85807;
   input += synapse0x2ca5ed0();
   input += synapse0x2ca5f10();
   input += synapse0x2ca5f50();
   input += synapse0x2ca5f90();
   input += synapse0x2ca5fd0();
   input += synapse0x2ca6010();
   input += synapse0x2ca6050();
   input += synapse0x2ca6090();
   input += synapse0x2ca60d0();
   input += synapse0x2ca6110();
   input += synapse0x2ca6150();
   input += synapse0x2ca6190();
   input += synapse0x2ca61d0();
   input += synapse0x2ca6210();
   input += synapse0x2ca6250();
   input += synapse0x2ca6290();
   input += synapse0x2ca5d20();
   input += synapse0x2ca5d60();
   input += synapse0x2ca63e0();
   input += synapse0x2ca6420();
   input += synapse0x2ca6460();
   input += synapse0x2ca64a0();
   input += synapse0x2ca64e0();
   input += synapse0x2ca6520();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca5b90() {
   double input = input0x2ca5b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca6560() {
   double input = 0.112667;
   input += synapse0x2ca68a0();
   input += synapse0x2ca68e0();
   input += synapse0x2ca6920();
   input += synapse0x2ca6960();
   input += synapse0x2ca69a0();
   input += synapse0x2ca69e0();
   input += synapse0x2ca6a20();
   input += synapse0x2ca6a60();
   input += synapse0x2ca6aa0();
   input += synapse0x2ca6ae0();
   input += synapse0x2ca6b20();
   input += synapse0x2ca6b60();
   input += synapse0x2ca6ba0();
   input += synapse0x2ca6be0();
   input += synapse0x2ca6c20();
   input += synapse0x2ca6c60();
   input += synapse0x2ca66f0();
   input += synapse0x2ca6730();
   input += synapse0x2ca6db0();
   input += synapse0x2ca6df0();
   input += synapse0x2ca6e30();
   input += synapse0x2ca6e70();
   input += synapse0x2ca6eb0();
   input += synapse0x2ca6ef0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca6560() {
   double input = input0x2ca6560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca6f30() {
   double input = 1.82641;
   input += synapse0x2ca7270();
   input += synapse0x2ca72b0();
   input += synapse0x2ca72f0();
   input += synapse0x2ca7330();
   input += synapse0x2ca7370();
   input += synapse0x2ca73b0();
   input += synapse0x2ca73f0();
   input += synapse0x2ca7430();
   input += synapse0x2ca7470();
   input += synapse0x2ca74b0();
   input += synapse0x2ca74f0();
   input += synapse0x2ca7530();
   input += synapse0x2ca7570();
   input += synapse0x2ca75b0();
   input += synapse0x2ca75f0();
   input += synapse0x2ca7630();
   input += synapse0x2ca70c0();
   input += synapse0x2ca7100();
   input += synapse0x2ca7780();
   input += synapse0x2ca77c0();
   input += synapse0x2ca7800();
   input += synapse0x2ca7840();
   input += synapse0x2ca7880();
   input += synapse0x2ca78c0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca6f30() {
   double input = input0x2ca6f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca7900() {
   double input = 0.452739;
   input += synapse0x2ca7c40();
   input += synapse0x2ca7c80();
   input += synapse0x2ca7cc0();
   input += synapse0x2ca7d00();
   input += synapse0x2ca7d40();
   input += synapse0x2ca7d80();
   input += synapse0x2ca7dc0();
   input += synapse0x2ca7e00();
   input += synapse0x2ca7e40();
   input += synapse0x2ca7e80();
   input += synapse0x2ca7ec0();
   input += synapse0x2ca7f00();
   input += synapse0x2ca7f40();
   input += synapse0x2ca7f80();
   input += synapse0x2ca7fc0();
   input += synapse0x2ca8000();
   input += synapse0x2ca7a90();
   input += synapse0x2ca7ad0();
   input += synapse0x2ca8150();
   input += synapse0x2ca8190();
   input += synapse0x2ca81d0();
   input += synapse0x2ca8210();
   input += synapse0x2ca8250();
   input += synapse0x2ca8290();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca7900() {
   double input = input0x2ca7900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca82d0() {
   double input = 2.49822;
   input += synapse0x2ca8610();
   input += synapse0x2ca8650();
   input += synapse0x2ca8690();
   input += synapse0x2ca86d0();
   input += synapse0x2ca8710();
   input += synapse0x2ca8750();
   input += synapse0x2ca8790();
   input += synapse0x2ca87d0();
   input += synapse0x2ca8810();
   input += synapse0x2ca8850();
   input += synapse0x2ca8890();
   input += synapse0x2ca88d0();
   input += synapse0x2ca8910();
   input += synapse0x2ca8950();
   input += synapse0x2ca8990();
   input += synapse0x2ca89d0();
   input += synapse0x2ca8460();
   input += synapse0x2ca84a0();
   input += synapse0x2ca8b20();
   input += synapse0x2ca8b60();
   input += synapse0x2ca8ba0();
   input += synapse0x2ca8be0();
   input += synapse0x2ca8c20();
   input += synapse0x2ca8c60();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca82d0() {
   double input = input0x2ca82d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca8ca0() {
   double input = -0.243488;
   input += synapse0x2c91710();
   input += synapse0x2c91750();
   input += synapse0x2c91790();
   input += synapse0x2c917d0();
   input += synapse0x2c91810();
   input += synapse0x2c91850();
   input += synapse0x2c91890();
   input += synapse0x2c918d0();
   input += synapse0x2ca93f0();
   input += synapse0x2ca9430();
   input += synapse0x2ca9470();
   input += synapse0x2ca94b0();
   input += synapse0x2ca94f0();
   input += synapse0x2ca9530();
   input += synapse0x2ca9570();
   input += synapse0x2ca95b0();
   input += synapse0x2ca8e30();
   input += synapse0x2ca8e70();
   input += synapse0x2ca9700();
   input += synapse0x2ca9740();
   input += synapse0x2ca9780();
   input += synapse0x2ca97c0();
   input += synapse0x2ca9800();
   input += synapse0x2ca9840();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca8ca0() {
   double input = input0x2ca8ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2ca9880() {
   double input = 1.58997;
   input += synapse0x2ca9bc0();
   input += synapse0x2ca9c00();
   input += synapse0x2ca9c40();
   input += synapse0x2ca9c80();
   input += synapse0x2ca9cc0();
   input += synapse0x2ca9d00();
   input += synapse0x2ca9d40();
   input += synapse0x2ca9d80();
   input += synapse0x2ca9dc0();
   input += synapse0x2ca9e00();
   input += synapse0x2ca9e40();
   input += synapse0x2ca9e80();
   input += synapse0x2ca9ec0();
   input += synapse0x2ca9f00();
   input += synapse0x2ca9f40();
   input += synapse0x2ca9f80();
   input += synapse0x2ca9a10();
   input += synapse0x2ca9a50();
   input += synapse0x2caa0d0();
   input += synapse0x2caa110();
   input += synapse0x2caa150();
   input += synapse0x2caa190();
   input += synapse0x2caa1d0();
   input += synapse0x2caa210();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2ca9880() {
   double input = input0x2ca9880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2caa250() {
   double input = 0.0500179;
   input += synapse0x2caa590();
   input += synapse0x2caa5d0();
   input += synapse0x2caa610();
   input += synapse0x2caa650();
   input += synapse0x2caa690();
   input += synapse0x2caa6d0();
   input += synapse0x2caa710();
   input += synapse0x2caa750();
   input += synapse0x2caa790();
   input += synapse0x2caa7d0();
   input += synapse0x2caa810();
   input += synapse0x2caa850();
   input += synapse0x2caa890();
   input += synapse0x2caa8d0();
   input += synapse0x2caa910();
   input += synapse0x2caa950();
   input += synapse0x2caa3e0();
   input += synapse0x2caa420();
   input += synapse0x2c9af50();
   input += synapse0x2c9af90();
   input += synapse0x2c9afd0();
   input += synapse0x2c9b010();
   input += synapse0x2c9b050();
   input += synapse0x2c9b090();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2caa250() {
   double input = input0x2caa250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9b0d0() {
   double input = -5.68451;
   input += synapse0x2c9b410();
   input += synapse0x2c9b450();
   input += synapse0x2c9b490();
   input += synapse0x2c9b4d0();
   input += synapse0x2c9b510();
   input += synapse0x2c9b550();
   input += synapse0x2c9b590();
   input += synapse0x2c9b5d0();
   input += synapse0x2c9b610();
   input += synapse0x2c9b650();
   input += synapse0x2c9b690();
   input += synapse0x2c9b6d0();
   input += synapse0x2c9b710();
   input += synapse0x2c9b750();
   input += synapse0x2c9b790();
   input += synapse0x2c9b7d0();
   input += synapse0x2c9b260();
   input += synapse0x2c9b2a0();
   input += synapse0x2c9b920();
   input += synapse0x2c9b960();
   input += synapse0x2c9b9a0();
   input += synapse0x2c9b9e0();
   input += synapse0x2c9ba20();
   input += synapse0x2c9ba60();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9b0d0() {
   double input = input0x2c9b0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9baa0() {
   double input = 0.664598;
   input += synapse0x2c9bde0();
   input += synapse0x2c9be20();
   input += synapse0x2c9be60();
   input += synapse0x2c9bea0();
   input += synapse0x2c9bee0();
   input += synapse0x2c9bf20();
   input += synapse0x2c9bf60();
   input += synapse0x2c9bfa0();
   input += synapse0x2c9bfe0();
   input += synapse0x2c9c020();
   input += synapse0x2c9c060();
   input += synapse0x2c9c0a0();
   input += synapse0x2c9c0e0();
   input += synapse0x2c9c120();
   input += synapse0x2c9c160();
   input += synapse0x2c9c1a0();
   input += synapse0x2c9bc30();
   input += synapse0x2c9bc70();
   input += synapse0x2c9c2f0();
   input += synapse0x2c9c330();
   input += synapse0x2c9c370();
   input += synapse0x2c9c3b0();
   input += synapse0x2c9c3f0();
   input += synapse0x2c9c430();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9baa0() {
   double input = input0x2c9baa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2c9c470() {
   double input = 2.08475;
   input += synapse0x2c9c7b0();
   input += synapse0x2c9c7f0();
   input += synapse0x2c9c830();
   input += synapse0x2c9c870();
   input += synapse0x2c9c8b0();
   input += synapse0x2c9c8f0();
   input += synapse0x2c9c930();
   input += synapse0x2c9c970();
   input += synapse0x2c9c9b0();
   input += synapse0x2c9c9f0();
   input += synapse0x2c9ca30();
   input += synapse0x2c9ca70();
   input += synapse0x2c9cab0();
   input += synapse0x2c9caf0();
   input += synapse0x2c9cb30();
   input += synapse0x2c9cb70();
   input += synapse0x2c9c600();
   input += synapse0x2c9c640();
   input += synapse0x2c9ccc0();
   input += synapse0x2c9cd00();
   input += synapse0x2c9cd40();
   input += synapse0x2c9cd80();
   input += synapse0x2c9cdc0();
   input += synapse0x2c9ce00();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2c9c470() {
   double input = input0x2c9c470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2caeab0() {
   double input = -0.0524644;
   input += synapse0x2caecd0();
   input += synapse0x2caed10();
   input += synapse0x2caed50();
   input += synapse0x2caed90();
   input += synapse0x2caedd0();
   input += synapse0x2caee10();
   input += synapse0x2caee50();
   input += synapse0x2caee90();
   input += synapse0x2caeed0();
   input += synapse0x2caef10();
   input += synapse0x2caef50();
   input += synapse0x2caef90();
   input += synapse0x2caefd0();
   input += synapse0x2caf010();
   input += synapse0x2caf050();
   input += synapse0x2caf090();
   input += synapse0x2c9ce40();
   input += synapse0x2c9ce80();
   input += synapse0x2caf1e0();
   input += synapse0x2caf220();
   input += synapse0x2caf260();
   input += synapse0x2caf2a0();
   input += synapse0x2caf2e0();
   input += synapse0x2caf320();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2caeab0() {
   double input = input0x2caeab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2caf360() {
   double input = 1.20798;
   input += synapse0x2caf6a0();
   input += synapse0x2caf6e0();
   input += synapse0x2caf720();
   input += synapse0x2caf760();
   input += synapse0x2caf7a0();
   input += synapse0x2caf7e0();
   input += synapse0x2caf820();
   input += synapse0x2caf860();
   input += synapse0x2caf8a0();
   input += synapse0x2caf8e0();
   input += synapse0x2caf920();
   input += synapse0x2caf960();
   input += synapse0x2caf9a0();
   input += synapse0x2caf9e0();
   input += synapse0x2cafa20();
   input += synapse0x2cafa60();
   input += synapse0x2caf4f0();
   input += synapse0x2caf530();
   input += synapse0x2cafbb0();
   input += synapse0x2cafbf0();
   input += synapse0x2cafc30();
   input += synapse0x2cafc70();
   input += synapse0x2cafcb0();
   input += synapse0x2cafcf0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2caf360() {
   double input = input0x2caf360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2cafd30() {
   double input = -0.27722;
   input += synapse0x2cb0070();
   input += synapse0x2cb00b0();
   input += synapse0x2cb00f0();
   input += synapse0x2cb0130();
   input += synapse0x2cb0170();
   input += synapse0x2cb01b0();
   input += synapse0x2cb01f0();
   input += synapse0x2cb0230();
   input += synapse0x2cb0270();
   input += synapse0x2cb02b0();
   input += synapse0x2cb02f0();
   input += synapse0x2cb0330();
   input += synapse0x2cb0370();
   input += synapse0x2cb03b0();
   input += synapse0x2cb03f0();
   input += synapse0x2cb0430();
   input += synapse0x2cafec0();
   input += synapse0x2caff00();
   input += synapse0x2cb0580();
   input += synapse0x2cb05c0();
   input += synapse0x2cb0600();
   input += synapse0x2cb0640();
   input += synapse0x2cb0680();
   input += synapse0x2cb06c0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2cafd30() {
   double input = input0x2cafd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2cb0700() {
   double input = 0.396307;
   input += synapse0x2cb0a40();
   input += synapse0x2cb0a80();
   input += synapse0x2cb0ac0();
   input += synapse0x2cb0b00();
   input += synapse0x2cb0b40();
   input += synapse0x2cb0b80();
   input += synapse0x2cb0bc0();
   input += synapse0x2cb0c00();
   input += synapse0x2cb0c40();
   input += synapse0x2cb0c80();
   input += synapse0x2cb0cc0();
   input += synapse0x2cb0d00();
   input += synapse0x2cb0d40();
   input += synapse0x2cb0d80();
   input += synapse0x2cb0dc0();
   input += synapse0x2cb0e00();
   input += synapse0x2cb0890();
   input += synapse0x2cb08d0();
   input += synapse0x2cb0f50();
   input += synapse0x2cb0f90();
   input += synapse0x2cb0fd0();
   input += synapse0x2cb1010();
   input += synapse0x2cb1050();
   input += synapse0x2cb1090();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2cb0700() {
   double input = input0x2cb0700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2cb7900() {
   double input = -0.443432;
   input += synapse0x2c8d630();
   input += synapse0x2c8d670();
   input += synapse0x2c8eb40();
   input += synapse0x2c8eb80();
   input += synapse0x2c8f510();
   input += synapse0x2c8f550();
   input += synapse0x2c902e0();
   input += synapse0x2c90320();
   input += synapse0x2c90cb0();
   input += synapse0x2c90cf0();
   input += synapse0x2c91680();
   input += synapse0x2c916c0();
   input += synapse0x2c92160();
   input += synapse0x2c921a0();
   input += synapse0x2c92b30();
   input += synapse0x2c92b70();
   input += synapse0x2c8fc10();
   input += synapse0x2c8fc50();
   input += synapse0x2c946e0();
   input += synapse0x2c94720();
   input += synapse0x2c950b0();
   input += synapse0x2c950f0();
   input += synapse0x2c95a80();
   input += synapse0x2c95ac0();
   input += synapse0x2c96450();
   input += synapse0x2c96490();
   input += synapse0x2c8a5c0();
   input += synapse0x2c8a600();
   input += synapse0x2c98540();
   input += synapse0x2c98580();
   input += synapse0x2c98f10();
   input += synapse0x2c98f50();
   input += synapse0x2c998e0();
   input += synapse0x2c99920();
   input += synapse0x2c9a2b0();
   input += synapse0x2c9a2f0();
   input += synapse0x2c9ac80();
   input += synapse0x2c9acc0();
   input += synapse0x2c937d0();
   input += synapse0x2c93810();
   input += synapse0x2c9d080();
   input += synapse0x2c9d0c0();
   input += synapse0x2c9da10();
   input += synapse0x2c9da50();
   input += synapse0x2c9e3e0();
   input += synapse0x2c9e420();
   input += synapse0x2c9edb0();
   input += synapse0x2c9edf0();
   input += synapse0x2c9f780();
   input += synapse0x2c9f7c0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2cb7900() {
   double input = input0x2cb7900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2cb7ca0() {
   double input = 0.233919;
   input += synapse0x2ca1ec0();
   input += synapse0x2ca1f00();
   input += synapse0x2c97480();
   input += synapse0x2c974c0();
   input += synapse0x2ca4aa0();
   input += synapse0x2ca4ae0();
   input += synapse0x2ca5470();
   input += synapse0x2ca54b0();
   input += synapse0x2ca5e40();
   input += synapse0x2ca5e80();
   input += synapse0x2ca6810();
   input += synapse0x2ca6850();
   input += synapse0x2ca71e0();
   input += synapse0x2ca7220();
   input += synapse0x2ca7bb0();
   input += synapse0x2ca7bf0();
   input += synapse0x2ca8580();
   input += synapse0x2ca85c0();
   input += synapse0x2ca8f50();
   input += synapse0x2ca8f90();
   input += synapse0x2ca9b30();
   input += synapse0x2ca9b70();
   input += synapse0x2caa500();
   input += synapse0x2caa540();
   input += synapse0x2c9b380();
   input += synapse0x2c9b3c0();
   input += synapse0x2c9bd50();
   input += synapse0x2c9bd90();
   input += synapse0x2c9c720();
   input += synapse0x2c9c760();
   input += synapse0x2caec40();
   input += synapse0x2caec80();
   input += synapse0x2caf610();
   input += synapse0x2caf650();
   input += synapse0x2caffe0();
   input += synapse0x2cb0020();
   input += synapse0x2cb09b0();
   input += synapse0x2cb09f0();
   input += synapse0x2c8c8a0();
   input += synapse0x2c8c8e0();
   input += synapse0x2ca0150();
   input += synapse0x2ca0190();
   input += synapse0x2cb10d0();
   input += synapse0x2cb1110();
   input += synapse0x2cb1150();
   input += synapse0x2cb1190();
   input += synapse0x2cb8040();
   input += synapse0x2cb8080();
   input += synapse0x2cb80c0();
   input += synapse0x2cb8100();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2cb7ca0() {
   double input = input0x2cb7ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2cb8140() {
   double input = -0.277302;
   input += synapse0x2cb8480();
   input += synapse0x2cb84c0();
   input += synapse0x2cb8500();
   input += synapse0x2cb8540();
   input += synapse0x2cb8580();
   input += synapse0x2cb85c0();
   input += synapse0x2cb8600();
   input += synapse0x2cb8640();
   input += synapse0x2cb8680();
   input += synapse0x2cb86c0();
   input += synapse0x2cb8700();
   input += synapse0x2cb8740();
   input += synapse0x2cb8780();
   input += synapse0x2cb87c0();
   input += synapse0x2cb8800();
   input += synapse0x2cb8840();
   input += synapse0x2cb82d0();
   input += synapse0x2cb8310();
   input += synapse0x2cb8990();
   input += synapse0x2cb89d0();
   input += synapse0x2cb8a10();
   input += synapse0x2cb8a50();
   input += synapse0x2cb8a90();
   input += synapse0x2cb8ad0();
   input += synapse0x2cb8b10();
   input += synapse0x2cb8b50();
   input += synapse0x2cb8b90();
   input += synapse0x2cb8bd0();
   input += synapse0x2cb8c10();
   input += synapse0x2cb8c50();
   input += synapse0x2cb8c90();
   input += synapse0x2cb8cd0();
   input += synapse0x2cb8880();
   input += synapse0x2cb88c0();
   input += synapse0x2cb8900();
   input += synapse0x2cb8940();
   input += synapse0x2cb8f20();
   input += synapse0x2cb8f60();
   input += synapse0x2cb8fa0();
   input += synapse0x2cb8fe0();
   input += synapse0x2cb9020();
   input += synapse0x2cb9060();
   input += synapse0x2cb90a0();
   input += synapse0x2cb90e0();
   input += synapse0x2cb9120();
   input += synapse0x2cb9160();
   input += synapse0x2cb91a0();
   input += synapse0x2cb91e0();
   input += synapse0x2cb9220();
   input += synapse0x2cb9260();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2cb8140() {
   double input = input0x2cb8140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2cb92a0() {
   double input = 1.72676;
   input += synapse0x2cb95e0();
   input += synapse0x2cb9620();
   input += synapse0x2cb9660();
   input += synapse0x2cb96a0();
   input += synapse0x2cb96e0();
   input += synapse0x2cb9720();
   input += synapse0x2cb9760();
   input += synapse0x2cb97a0();
   input += synapse0x2cb97e0();
   input += synapse0x2cb9820();
   input += synapse0x2cb9860();
   input += synapse0x2cb98a0();
   input += synapse0x2cb98e0();
   input += synapse0x2cb9920();
   input += synapse0x2cb9960();
   input += synapse0x2cb99a0();
   input += synapse0x2cb9430();
   input += synapse0x2cb9470();
   input += synapse0x2cb9af0();
   input += synapse0x2cb9b30();
   input += synapse0x2cb9b70();
   input += synapse0x2cb9bb0();
   input += synapse0x2cb9bf0();
   input += synapse0x2cb9c30();
   input += synapse0x2cb9c70();
   input += synapse0x2cb9cb0();
   input += synapse0x2cb9cf0();
   input += synapse0x2cb9d30();
   input += synapse0x2cb9d70();
   input += synapse0x2cb9db0();
   input += synapse0x2cb9df0();
   input += synapse0x2cb9e30();
   input += synapse0x2cb99e0();
   input += synapse0x2cb9a20();
   input += synapse0x2cb9a60();
   input += synapse0x2cb9aa0();
   input += synapse0x2cba080();
   input += synapse0x2cba0c0();
   input += synapse0x2cba100();
   input += synapse0x2cba140();
   input += synapse0x2cba180();
   input += synapse0x2cba1c0();
   input += synapse0x2cba200();
   input += synapse0x2cba240();
   input += synapse0x2cba280();
   input += synapse0x2cba2c0();
   input += synapse0x2cba300();
   input += synapse0x2cba340();
   input += synapse0x2cba380();
   input += synapse0x2cba3c0();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2cb92a0() {
   double input = input0x2cb92a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2cba400() {
   double input = 0.0523347;
   input += synapse0x2cba740();
   input += synapse0x2cba780();
   input += synapse0x2cba7c0();
   input += synapse0x2cba800();
   input += synapse0x2cba840();
   input += synapse0x2cba880();
   input += synapse0x2cba8c0();
   input += synapse0x2cba900();
   input += synapse0x2cba940();
   input += synapse0x2cba980();
   input += synapse0x2cba9c0();
   input += synapse0x2cbaa00();
   input += synapse0x2cbaa40();
   input += synapse0x2cbaa80();
   input += synapse0x2cbaac0();
   input += synapse0x2cbab00();
   input += synapse0x2cba590();
   input += synapse0x2cba5d0();
   input += synapse0x2cbac50();
   input += synapse0x2cbac90();
   input += synapse0x2cbacd0();
   input += synapse0x2cbad10();
   input += synapse0x2cbad50();
   input += synapse0x2cbad90();
   input += synapse0x2cbadd0();
   input += synapse0x2cbae10();
   input += synapse0x2cbae50();
   input += synapse0x2cbae90();
   input += synapse0x2cbaed0();
   input += synapse0x2cbaf10();
   input += synapse0x2cbaf50();
   input += synapse0x2cbaf90();
   input += synapse0x2cbab40();
   input += synapse0x2cbab80();
   input += synapse0x2cbabc0();
   input += synapse0x2cbac00();
   input += synapse0x2cbb1e0();
   input += synapse0x2cbb220();
   input += synapse0x2cbb260();
   input += synapse0x2cbb2a0();
   input += synapse0x2cbb2e0();
   input += synapse0x2cbb320();
   input += synapse0x2cbb360();
   input += synapse0x2cbb3a0();
   input += synapse0x2cbb3e0();
   input += synapse0x2cbb420();
   input += synapse0x2cbb460();
   input += synapse0x2cbb4a0();
   input += synapse0x2cbb4e0();
   input += synapse0x2cbb520();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2cba400() {
   double input = input0x2cba400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLdR::input0x2cbb560() {
   double input = 5.92768;
   input += synapse0x2c8c640();
   input += synapse0x2cbb780();
   input += synapse0x2cbb7c0();
   input += synapse0x2cbb800();
   input += synapse0x2cbb840();
   return input;
}

double NNfunction_ss_uLdR::neuron0x2cbb560() {
   double input = input0x2cbb560();
   return (input * 1)+0;
}

double NNfunction_ss_uLdR::synapse0x2a47490() {
   return (neuron0x2c87620()*0.430796);
}

double NNfunction_ss_uLdR::synapse0x2c874e0() {
   return (neuron0x2c87960()*0.11712);
}

double NNfunction_ss_uLdR::synapse0x2c87520() {
   return (neuron0x2c87ca0()*0.447886);
}

double NNfunction_ss_uLdR::synapse0x2c8c930() {
   return (neuron0x2c87fe0()*0.542392);
}

double NNfunction_ss_uLdR::synapse0x2c8c970() {
   return (neuron0x2c88320()*0.14867);
}

double NNfunction_ss_uLdR::synapse0x2c8c9b0() {
   return (neuron0x2c88660()*-0.472075);
}

double NNfunction_ss_uLdR::synapse0x2c8c9f0() {
   return (neuron0x2c889a0()*0.193921);
}

double NNfunction_ss_uLdR::synapse0x2c8ca30() {
   return (neuron0x2c88ce0()*-0.0740064);
}

double NNfunction_ss_uLdR::synapse0x2c8ca70() {
   return (neuron0x2c89020()*-0.699024);
}

double NNfunction_ss_uLdR::synapse0x2c8cab0() {
   return (neuron0x2c89360()*0.174827);
}

double NNfunction_ss_uLdR::synapse0x2c8caf0() {
   return (neuron0x2c896a0()*0.667734);
}

double NNfunction_ss_uLdR::synapse0x2c8cb30() {
   return (neuron0x2c899e0()*-0.157528);
}

double NNfunction_ss_uLdR::synapse0x2c8cb70() {
   return (neuron0x2c89d20()*0.0580082);
}

double NNfunction_ss_uLdR::synapse0x2c8cbb0() {
   return (neuron0x2c8a060()*-0.219994);
}

double NNfunction_ss_uLdR::synapse0x2c8cbf0() {
   return (neuron0x2c8a3a0()*1.41469);
}

double NNfunction_ss_uLdR::synapse0x2c8cc30() {
   return (neuron0x2c8a6e0()*-0.480691);
}

double NNfunction_ss_uLdR::synapse0x2c87450() {
   return (neuron0x2c8aa20()*0.217892);
}

double NNfunction_ss_uLdR::synapse0x2c87490() {
   return (neuron0x2c8af80()*0.204525);
}

double NNfunction_ss_uLdR::synapse0x2a38d30() {
   return (neuron0x2c8b1a0()*-1.84105);
}

double NNfunction_ss_uLdR::synapse0x2a38d70() {
   return (neuron0x2c8b4e0()*-0.669387);
}

double NNfunction_ss_uLdR::synapse0x2c8ce90() {
   return (neuron0x2c8b820()*-0.586723);
}

double NNfunction_ss_uLdR::synapse0x2c8ced0() {
   return (neuron0x2c8bb60()*-0.155581);
}

double NNfunction_ss_uLdR::synapse0x2c8cf10() {
   return (neuron0x2c8bea0()*0.513622);
}

double NNfunction_ss_uLdR::synapse0x2c8cf50() {
   return (neuron0x2c8c1e0()*-0.247079);
}

double NNfunction_ss_uLdR::synapse0x2c8d2d0() {
   return (neuron0x2c87620()*0.00745429);
}

double NNfunction_ss_uLdR::synapse0x2c8d310() {
   return (neuron0x2c87960()*-0.00755304);
}

double NNfunction_ss_uLdR::synapse0x2c8d350() {
   return (neuron0x2c87ca0()*0.00615991);
}

double NNfunction_ss_uLdR::synapse0x2c8d390() {
   return (neuron0x2c87fe0()*-3.17982);
}

double NNfunction_ss_uLdR::synapse0x2c8d3d0() {
   return (neuron0x2c88320()*-0.00639612);
}

double NNfunction_ss_uLdR::synapse0x2c8d410() {
   return (neuron0x2c88660()*-0.0123397);
}

double NNfunction_ss_uLdR::synapse0x2c8d450() {
   return (neuron0x2c889a0()*-0.00181173);
}

double NNfunction_ss_uLdR::synapse0x2c8d490() {
   return (neuron0x2c88ce0()*-0.00689895);
}

double NNfunction_ss_uLdR::synapse0x2c8d4d0() {
   return (neuron0x2c89020()*0.00493639);
}

double NNfunction_ss_uLdR::synapse0x2c8cd80() {
   return (neuron0x2c89360()*0.00328939);
}

double NNfunction_ss_uLdR::synapse0x2c8cdc0() {
   return (neuron0x2c896a0()*-0.00452183);
}

double NNfunction_ss_uLdR::synapse0x2c8ce00() {
   return (neuron0x2c899e0()*0.186431);
}

double NNfunction_ss_uLdR::synapse0x2c8ce40() {
   return (neuron0x2c89d20()*-0.0032396);
}

double NNfunction_ss_uLdR::synapse0x2c8d720() {
   return (neuron0x2c8a060()*-0.0094181);
}

double NNfunction_ss_uLdR::synapse0x2c8d760() {
   return (neuron0x2c8a3a0()*0.0137779);
}

double NNfunction_ss_uLdR::synapse0x2c8d7a0() {
   return (neuron0x2c8a6e0()*0.00763344);
}

double NNfunction_ss_uLdR::synapse0x2c8d120() {
   return (neuron0x2c8aa20()*0.00943198);
}

double NNfunction_ss_uLdR::synapse0x2c8d160() {
   return (neuron0x2c8af80()*0.177373);
}

double NNfunction_ss_uLdR::synapse0x2c8d8f0() {
   return (neuron0x2c8b1a0()*0.00560144);
}

double NNfunction_ss_uLdR::synapse0x2c8d930() {
   return (neuron0x2c8b4e0()*-0.00600664);
}

double NNfunction_ss_uLdR::synapse0x2c8d970() {
   return (neuron0x2c8b820()*0.00357923);
}

double NNfunction_ss_uLdR::synapse0x2c8d9b0() {
   return (neuron0x2c8bb60()*0.0148114);
}

double NNfunction_ss_uLdR::synapse0x2c8d9f0() {
   return (neuron0x2c8bea0()*0.00149123);
}

double NNfunction_ss_uLdR::synapse0x2c8da30() {
   return (neuron0x2c8c1e0()*-0.0159042);
}

double NNfunction_ss_uLdR::synapse0x2c8ddb0() {
   return (neuron0x2c87620()*0.0886746);
}

double NNfunction_ss_uLdR::synapse0x2c8ddf0() {
   return (neuron0x2c87960()*-1.00216);
}

double NNfunction_ss_uLdR::synapse0x2c8de30() {
   return (neuron0x2c87ca0()*-0.56518);
}

double NNfunction_ss_uLdR::synapse0x2c8de70() {
   return (neuron0x2c87fe0()*-0.377693);
}

double NNfunction_ss_uLdR::synapse0x2c8deb0() {
   return (neuron0x2c88320()*0.366758);
}

double NNfunction_ss_uLdR::synapse0x2c8def0() {
   return (neuron0x2c88660()*-0.0433584);
}

double NNfunction_ss_uLdR::synapse0x2c8df30() {
   return (neuron0x2c889a0()*-0.272301);
}

double NNfunction_ss_uLdR::synapse0x2c8df70() {
   return (neuron0x2c88ce0()*-0.181487);
}

double NNfunction_ss_uLdR::synapse0x2c8dfb0() {
   return (neuron0x2c89020()*0.533063);
}

double NNfunction_ss_uLdR::synapse0x2c8dff0() {
   return (neuron0x2c89360()*-0.637676);
}

double NNfunction_ss_uLdR::synapse0x2c8e030() {
   return (neuron0x2c896a0()*0.41711);
}

double NNfunction_ss_uLdR::synapse0x2c8e070() {
   return (neuron0x2c899e0()*-0.267443);
}

double NNfunction_ss_uLdR::synapse0x2c8e0b0() {
   return (neuron0x2c89d20()*0.448897);
}

double NNfunction_ss_uLdR::synapse0x2c8e0f0() {
   return (neuron0x2c8a060()*-0.272837);
}

double NNfunction_ss_uLdR::synapse0x2c8e130() {
   return (neuron0x2c8a3a0()*1.18817);
}

double NNfunction_ss_uLdR::synapse0x2c8e170() {
   return (neuron0x2c8a6e0()*-0.424958);
}

double NNfunction_ss_uLdR::synapse0x2c8dc00() {
   return (neuron0x2c8aa20()*0.681409);
}

double NNfunction_ss_uLdR::synapse0x2c8dc40() {
   return (neuron0x2c8af80()*-0.0298624);
}

double NNfunction_ss_uLdR::synapse0x2a46b80() {
   return (neuron0x2c8b1a0()*1.0269);
}

double NNfunction_ss_uLdR::synapse0x2a46bc0() {
   return (neuron0x2c8b4e0()*-0.199539);
}

double NNfunction_ss_uLdR::synapse0x2c766b0() {
   return (neuron0x2c8b820()*-0.566995);
}

double NNfunction_ss_uLdR::synapse0x2c766f0() {
   return (neuron0x2c8bb60()*1.15095);
}

double NNfunction_ss_uLdR::synapse0x2c76730() {
   return (neuron0x2c8bea0()*-0.0102998);
}

double NNfunction_ss_uLdR::synapse0x2c87560() {
   return (neuron0x2c8c1e0()*0.601194);
}

double NNfunction_ss_uLdR::synapse0x2c8d6c0() {
   return (neuron0x2c87620()*0.000704506);
}

double NNfunction_ss_uLdR::synapse0x2c875a0() {
   return (neuron0x2c87960()*0.0209239);
}

double NNfunction_ss_uLdR::synapse0x2c875e0() {
   return (neuron0x2c87ca0()*0.0403784);
}

double NNfunction_ss_uLdR::synapse0x2c8e2c0() {
   return (neuron0x2c87fe0()*7.84733);
}

double NNfunction_ss_uLdR::synapse0x2c8e300() {
   return (neuron0x2c88320()*0.0437297);
}

double NNfunction_ss_uLdR::synapse0x2c8e340() {
   return (neuron0x2c88660()*-0.000274752);
}

double NNfunction_ss_uLdR::synapse0x2c8e380() {
   return (neuron0x2c889a0()*-0.0359233);
}

double NNfunction_ss_uLdR::synapse0x2c8e3c0() {
   return (neuron0x2c88ce0()*0.0158554);
}

double NNfunction_ss_uLdR::synapse0x2c8e400() {
   return (neuron0x2c89020()*0.0144303);
}

double NNfunction_ss_uLdR::synapse0x2c8e440() {
   return (neuron0x2c89360()*0.0222091);
}

double NNfunction_ss_uLdR::synapse0x2c8e480() {
   return (neuron0x2c896a0()*0.0238272);
}

double NNfunction_ss_uLdR::synapse0x2c8e4c0() {
   return (neuron0x2c899e0()*1.82489);
}

double NNfunction_ss_uLdR::synapse0x2c8e500() {
   return (neuron0x2c89d20()*2.71417e-05);
}

double NNfunction_ss_uLdR::synapse0x2c8e540() {
   return (neuron0x2c8a060()*0.0317691);
}

double NNfunction_ss_uLdR::synapse0x2c8e580() {
   return (neuron0x2c8a3a0()*-0.000860644);
}

double NNfunction_ss_uLdR::synapse0x2c8e5c0() {
   return (neuron0x2c8a6e0()*0.0185879);
}

double NNfunction_ss_uLdR::synapse0x2c8d510() {
   return (neuron0x2c8aa20()*0.0205742);
}

double NNfunction_ss_uLdR::synapse0x2c8d550() {
   return (neuron0x2c8af80()*2.73366);
}

double NNfunction_ss_uLdR::synapse0x2c8e710() {
   return (neuron0x2c8b1a0()*-0.0123753);
}

double NNfunction_ss_uLdR::synapse0x2c8e750() {
   return (neuron0x2c8b4e0()*-0.0233383);
}

double NNfunction_ss_uLdR::synapse0x2c8e790() {
   return (neuron0x2c8b820()*0.0216725);
}

double NNfunction_ss_uLdR::synapse0x2c8e7d0() {
   return (neuron0x2c8bb60()*-0.0181532);
}

double NNfunction_ss_uLdR::synapse0x2c8e810() {
   return (neuron0x2c8bea0()*0.000883213);
}

double NNfunction_ss_uLdR::synapse0x2c8e850() {
   return (neuron0x2c8c1e0()*0.00966629);
}

double NNfunction_ss_uLdR::synapse0x2c8ebd0() {
   return (neuron0x2c87620()*-0.0694409);
}

double NNfunction_ss_uLdR::synapse0x2c8ec10() {
   return (neuron0x2c87960()*-0.488336);
}

double NNfunction_ss_uLdR::synapse0x2c8ec50() {
   return (neuron0x2c87ca0()*-0.361008);
}

double NNfunction_ss_uLdR::synapse0x2c8ec90() {
   return (neuron0x2c87fe0()*-1.20344);
}

double NNfunction_ss_uLdR::synapse0x2c8ecd0() {
   return (neuron0x2c88320()*-0.815701);
}

double NNfunction_ss_uLdR::synapse0x2c8ed10() {
   return (neuron0x2c88660()*0.0070203);
}

double NNfunction_ss_uLdR::synapse0x2c8ed50() {
   return (neuron0x2c889a0()*-0.610536);
}

double NNfunction_ss_uLdR::synapse0x2c8ed90() {
   return (neuron0x2c88ce0()*0.273702);
}

double NNfunction_ss_uLdR::synapse0x2c8edd0() {
   return (neuron0x2c89020()*0.340319);
}

double NNfunction_ss_uLdR::synapse0x2c8ee10() {
   return (neuron0x2c89360()*-0.123728);
}

double NNfunction_ss_uLdR::synapse0x2c8ee50() {
   return (neuron0x2c896a0()*0.383118);
}

double NNfunction_ss_uLdR::synapse0x2c8ee90() {
   return (neuron0x2c899e0()*0.313188);
}

double NNfunction_ss_uLdR::synapse0x2c8eed0() {
   return (neuron0x2c89d20()*0.00643435);
}

double NNfunction_ss_uLdR::synapse0x2c8ef10() {
   return (neuron0x2c8a060()*-0.300431);
}

double NNfunction_ss_uLdR::synapse0x2c8ef50() {
   return (neuron0x2c8a3a0()*-0.204568);
}

double NNfunction_ss_uLdR::synapse0x2c8ef90() {
   return (neuron0x2c8a6e0()*0.0365974);
}

double NNfunction_ss_uLdR::synapse0x2c8ea20() {
   return (neuron0x2c8aa20()*-0.00953127);
}

double NNfunction_ss_uLdR::synapse0x2c8ea60() {
   return (neuron0x2c8af80()*0.382766);
}

double NNfunction_ss_uLdR::synapse0x2c8f0e0() {
   return (neuron0x2c8b1a0()*0.301245);
}

double NNfunction_ss_uLdR::synapse0x2c8f120() {
   return (neuron0x2c8b4e0()*0.670303);
}

double NNfunction_ss_uLdR::synapse0x2c8f160() {
   return (neuron0x2c8b820()*-0.164822);
}

double NNfunction_ss_uLdR::synapse0x2c8f1a0() {
   return (neuron0x2c8bb60()*0.103396);
}

double NNfunction_ss_uLdR::synapse0x2c8f1e0() {
   return (neuron0x2c8bea0()*0.00861639);
}

double NNfunction_ss_uLdR::synapse0x2c8f220() {
   return (neuron0x2c8c1e0()*0.315592);
}

double NNfunction_ss_uLdR::synapse0x2c8f5a0() {
   return (neuron0x2c87620()*-0.0446623);
}

double NNfunction_ss_uLdR::synapse0x2c8f5e0() {
   return (neuron0x2c87960()*0.829868);
}

double NNfunction_ss_uLdR::synapse0x2c8f620() {
   return (neuron0x2c87ca0()*-0.624875);
}

double NNfunction_ss_uLdR::synapse0x2c8f660() {
   return (neuron0x2c87fe0()*0.526713);
}

double NNfunction_ss_uLdR::synapse0x2c8f6a0() {
   return (neuron0x2c88320()*0.495544);
}

double NNfunction_ss_uLdR::synapse0x2c8f6e0() {
   return (neuron0x2c88660()*-0.352915);
}

double NNfunction_ss_uLdR::synapse0x2c8f720() {
   return (neuron0x2c889a0()*-0.455664);
}

double NNfunction_ss_uLdR::synapse0x2c8f760() {
   return (neuron0x2c88ce0()*0.431243);
}

double NNfunction_ss_uLdR::synapse0x2c8f7a0() {
   return (neuron0x2c89020()*-0.46383);
}

double NNfunction_ss_uLdR::synapse0x2a46ef0() {
   return (neuron0x2c89360()*0.947999);
}

double NNfunction_ss_uLdR::synapse0x2a46f30() {
   return (neuron0x2c896a0()*0.225617);
}

double NNfunction_ss_uLdR::synapse0x2a46f70() {
   return (neuron0x2c899e0()*-0.229554);
}

double NNfunction_ss_uLdR::synapse0x2a46fb0() {
   return (neuron0x2c89d20()*-0.0372991);
}

double NNfunction_ss_uLdR::synapse0x2a46ff0() {
   return (neuron0x2c8a060()*-0.364075);
}

double NNfunction_ss_uLdR::synapse0x2a47030() {
   return (neuron0x2c8a3a0()*0.298956);
}

double NNfunction_ss_uLdR::synapse0x2a47070() {
   return (neuron0x2c8a6e0()*0.402495);
}

double NNfunction_ss_uLdR::synapse0x2c8f3f0() {
   return (neuron0x2c8aa20()*0.718929);
}

double NNfunction_ss_uLdR::synapse0x2c8f430() {
   return (neuron0x2c8af80()*0.521202);
}

double NNfunction_ss_uLdR::synapse0x2a471c0() {
   return (neuron0x2c8b1a0()*-0.79239);
}

double NNfunction_ss_uLdR::synapse0x2a47200() {
   return (neuron0x2c8b4e0()*0.0536685);
}

double NNfunction_ss_uLdR::synapse0x2a47240() {
   return (neuron0x2c8b820()*-0.67839);
}

double NNfunction_ss_uLdR::synapse0x2a47280() {
   return (neuron0x2c8bb60()*0.211099);
}

double NNfunction_ss_uLdR::synapse0x2a472c0() {
   return (neuron0x2c8bea0()*0.214149);
}

double NNfunction_ss_uLdR::synapse0x2c8fff0() {
   return (neuron0x2c8c1e0()*-0.391884);
}

double NNfunction_ss_uLdR::synapse0x2c90370() {
   return (neuron0x2c87620()*-0.221857);
}

double NNfunction_ss_uLdR::synapse0x2c903b0() {
   return (neuron0x2c87960()*0.588346);
}

double NNfunction_ss_uLdR::synapse0x2c903f0() {
   return (neuron0x2c87ca0()*-0.722946);
}

double NNfunction_ss_uLdR::synapse0x2c90430() {
   return (neuron0x2c87fe0()*1.00532);
}

double NNfunction_ss_uLdR::synapse0x2c90470() {
   return (neuron0x2c88320()*1.20011);
}

double NNfunction_ss_uLdR::synapse0x2c904b0() {
   return (neuron0x2c88660()*-0.311261);
}

double NNfunction_ss_uLdR::synapse0x2c904f0() {
   return (neuron0x2c889a0()*0.0271518);
}

double NNfunction_ss_uLdR::synapse0x2c90530() {
   return (neuron0x2c88ce0()*0.725323);
}

double NNfunction_ss_uLdR::synapse0x2c90570() {
   return (neuron0x2c89020()*0.485155);
}

double NNfunction_ss_uLdR::synapse0x2c905b0() {
   return (neuron0x2c89360()*0.267061);
}

double NNfunction_ss_uLdR::synapse0x2c905f0() {
   return (neuron0x2c896a0()*0.263754);
}

double NNfunction_ss_uLdR::synapse0x2c90630() {
   return (neuron0x2c899e0()*-0.188814);
}

double NNfunction_ss_uLdR::synapse0x2c90670() {
   return (neuron0x2c89d20()*-0.111086);
}

double NNfunction_ss_uLdR::synapse0x2c906b0() {
   return (neuron0x2c8a060()*-0.555489);
}

double NNfunction_ss_uLdR::synapse0x2c906f0() {
   return (neuron0x2c8a3a0()*0.893633);
}

double NNfunction_ss_uLdR::synapse0x2c90730() {
   return (neuron0x2c8a6e0()*0.00162744);
}

double NNfunction_ss_uLdR::synapse0x2c901c0() {
   return (neuron0x2c8aa20()*0.0306637);
}

double NNfunction_ss_uLdR::synapse0x2c90200() {
   return (neuron0x2c8af80()*-0.373541);
}

double NNfunction_ss_uLdR::synapse0x2c90880() {
   return (neuron0x2c8b1a0()*-1.22119);
}

double NNfunction_ss_uLdR::synapse0x2c908c0() {
   return (neuron0x2c8b4e0()*-0.260556);
}

double NNfunction_ss_uLdR::synapse0x2c90900() {
   return (neuron0x2c8b820()*-1.21646);
}

double NNfunction_ss_uLdR::synapse0x2c90940() {
   return (neuron0x2c8bb60()*0.0218737);
}

double NNfunction_ss_uLdR::synapse0x2c90980() {
   return (neuron0x2c8bea0()*0.61652);
}

double NNfunction_ss_uLdR::synapse0x2c909c0() {
   return (neuron0x2c8c1e0()*0.0786857);
}

double NNfunction_ss_uLdR::synapse0x2c90d40() {
   return (neuron0x2c87620()*0.0165737);
}

double NNfunction_ss_uLdR::synapse0x2c90d80() {
   return (neuron0x2c87960()*1.55631);
}

double NNfunction_ss_uLdR::synapse0x2c90dc0() {
   return (neuron0x2c87ca0()*-0.298385);
}

double NNfunction_ss_uLdR::synapse0x2c90e00() {
   return (neuron0x2c87fe0()*0.857256);
}

double NNfunction_ss_uLdR::synapse0x2c90e40() {
   return (neuron0x2c88320()*-1.08872);
}

double NNfunction_ss_uLdR::synapse0x2c90e80() {
   return (neuron0x2c88660()*-0.811524);
}

double NNfunction_ss_uLdR::synapse0x2c90ec0() {
   return (neuron0x2c889a0()*0.13613);
}

double NNfunction_ss_uLdR::synapse0x2c90f00() {
   return (neuron0x2c88ce0()*0.0968605);
}

double NNfunction_ss_uLdR::synapse0x2c90f40() {
   return (neuron0x2c89020()*0.411178);
}

double NNfunction_ss_uLdR::synapse0x2c90f80() {
   return (neuron0x2c89360()*-0.40883);
}

double NNfunction_ss_uLdR::synapse0x2c90fc0() {
   return (neuron0x2c896a0()*-0.664634);
}

double NNfunction_ss_uLdR::synapse0x2c91000() {
   return (neuron0x2c899e0()*0.34741);
}

double NNfunction_ss_uLdR::synapse0x2c91040() {
   return (neuron0x2c89d20()*0.137217);
}

double NNfunction_ss_uLdR::synapse0x2c91080() {
   return (neuron0x2c8a060()*-0.0926123);
}

double NNfunction_ss_uLdR::synapse0x2c910c0() {
   return (neuron0x2c8a3a0()*-0.343814);
}

double NNfunction_ss_uLdR::synapse0x2c91100() {
   return (neuron0x2c8a6e0()*0.528477);
}

double NNfunction_ss_uLdR::synapse0x2c90b90() {
   return (neuron0x2c8aa20()*0.1822);
}

double NNfunction_ss_uLdR::synapse0x2c90bd0() {
   return (neuron0x2c8af80()*-0.919041);
}

double NNfunction_ss_uLdR::synapse0x2c91250() {
   return (neuron0x2c8b1a0()*-0.3833);
}

double NNfunction_ss_uLdR::synapse0x2c91290() {
   return (neuron0x2c8b4e0()*-0.140086);
}

double NNfunction_ss_uLdR::synapse0x2c912d0() {
   return (neuron0x2c8b820()*0.258466);
}

double NNfunction_ss_uLdR::synapse0x2c91310() {
   return (neuron0x2c8bb60()*-1.17248);
}

double NNfunction_ss_uLdR::synapse0x2c91350() {
   return (neuron0x2c8bea0()*0.490481);
}

double NNfunction_ss_uLdR::synapse0x2c91390() {
   return (neuron0x2c8c1e0()*-0.189963);
}

double NNfunction_ss_uLdR::synapse0x2c8ae70() {
   return (neuron0x2c87620()*-0.296956);
}

double NNfunction_ss_uLdR::synapse0x2c8aeb0() {
   return (neuron0x2c87960()*0.609043);
}

double NNfunction_ss_uLdR::synapse0x2c8aef0() {
   return (neuron0x2c87ca0()*0.493676);
}

double NNfunction_ss_uLdR::synapse0x2c8af30() {
   return (neuron0x2c87fe0()*0.336441);
}

double NNfunction_ss_uLdR::synapse0x2c91920() {
   return (neuron0x2c88320()*0.0185495);
}

double NNfunction_ss_uLdR::synapse0x2c91960() {
   return (neuron0x2c88660()*-0.149404);
}

double NNfunction_ss_uLdR::synapse0x2c919a0() {
   return (neuron0x2c889a0()*-0.324597);
}

double NNfunction_ss_uLdR::synapse0x2c919e0() {
   return (neuron0x2c88ce0()*0.800981);
}

double NNfunction_ss_uLdR::synapse0x2c91a20() {
   return (neuron0x2c89020()*0.294533);
}

double NNfunction_ss_uLdR::synapse0x2c91a60() {
   return (neuron0x2c89360()*-0.393764);
}

double NNfunction_ss_uLdR::synapse0x2c91aa0() {
   return (neuron0x2c896a0()*-0.248517);
}

double NNfunction_ss_uLdR::synapse0x2c91ae0() {
   return (neuron0x2c899e0()*-0.147351);
}

double NNfunction_ss_uLdR::synapse0x2c91b20() {
   return (neuron0x2c89d20()*-0.934335);
}

double NNfunction_ss_uLdR::synapse0x2c91b60() {
   return (neuron0x2c8a060()*-0.30805);
}

double NNfunction_ss_uLdR::synapse0x2c91ba0() {
   return (neuron0x2c8a3a0()*-0.539224);
}

double NNfunction_ss_uLdR::synapse0x2c91be0() {
   return (neuron0x2c8a6e0()*-1.15174);
}

double NNfunction_ss_uLdR::synapse0x2c91560() {
   return (neuron0x2c8aa20()*0.39303);
}

double NNfunction_ss_uLdR::synapse0x2c915a0() {
   return (neuron0x2c8af80()*0.591536);
}

double NNfunction_ss_uLdR::synapse0x2c91d30() {
   return (neuron0x2c8b1a0()*0.292954);
}

double NNfunction_ss_uLdR::synapse0x2c91d70() {
   return (neuron0x2c8b4e0()*0.22298);
}

double NNfunction_ss_uLdR::synapse0x2c91db0() {
   return (neuron0x2c8b820()*0.000368238);
}

double NNfunction_ss_uLdR::synapse0x2c91df0() {
   return (neuron0x2c8bb60()*-0.537766);
}

double NNfunction_ss_uLdR::synapse0x2c91e30() {
   return (neuron0x2c8bea0()*0.113827);
}

double NNfunction_ss_uLdR::synapse0x2c91e70() {
   return (neuron0x2c8c1e0()*0.292919);
}

double NNfunction_ss_uLdR::synapse0x2c921f0() {
   return (neuron0x2c87620()*-0.393637);
}

double NNfunction_ss_uLdR::synapse0x2c92230() {
   return (neuron0x2c87960()*-0.254042);
}

double NNfunction_ss_uLdR::synapse0x2c92270() {
   return (neuron0x2c87ca0()*-1.34695);
}

double NNfunction_ss_uLdR::synapse0x2c922b0() {
   return (neuron0x2c87fe0()*-0.854579);
}

double NNfunction_ss_uLdR::synapse0x2c922f0() {
   return (neuron0x2c88320()*-0.134532);
}

double NNfunction_ss_uLdR::synapse0x2c92330() {
   return (neuron0x2c88660()*-0.490182);
}

double NNfunction_ss_uLdR::synapse0x2c92370() {
   return (neuron0x2c889a0()*0.133217);
}

double NNfunction_ss_uLdR::synapse0x2c923b0() {
   return (neuron0x2c88ce0()*0.203752);
}

double NNfunction_ss_uLdR::synapse0x2c923f0() {
   return (neuron0x2c89020()*-0.244619);
}

double NNfunction_ss_uLdR::synapse0x2c92430() {
   return (neuron0x2c89360()*-0.252331);
}

double NNfunction_ss_uLdR::synapse0x2c92470() {
   return (neuron0x2c896a0()*-0.127244);
}

double NNfunction_ss_uLdR::synapse0x2c924b0() {
   return (neuron0x2c899e0()*0.0372876);
}

double NNfunction_ss_uLdR::synapse0x2c924f0() {
   return (neuron0x2c89d20()*-0.667815);
}

double NNfunction_ss_uLdR::synapse0x2c92530() {
   return (neuron0x2c8a060()*0.47235);
}

double NNfunction_ss_uLdR::synapse0x2c92570() {
   return (neuron0x2c8a3a0()*-0.0926322);
}

double NNfunction_ss_uLdR::synapse0x2c925b0() {
   return (neuron0x2c8a6e0()*0.0504241);
}

double NNfunction_ss_uLdR::synapse0x2c92040() {
   return (neuron0x2c8aa20()*-0.0166711);
}

double NNfunction_ss_uLdR::synapse0x2c92080() {
   return (neuron0x2c8af80()*-0.535337);
}

double NNfunction_ss_uLdR::synapse0x2c92700() {
   return (neuron0x2c8b1a0()*-0.170445);
}

double NNfunction_ss_uLdR::synapse0x2c92740() {
   return (neuron0x2c8b4e0()*0.0106892);
}

double NNfunction_ss_uLdR::synapse0x2c92780() {
   return (neuron0x2c8b820()*-0.0146183);
}

double NNfunction_ss_uLdR::synapse0x2c927c0() {
   return (neuron0x2c8bb60()*-0.0524637);
}

double NNfunction_ss_uLdR::synapse0x2c92800() {
   return (neuron0x2c8bea0()*-0.0500367);
}

double NNfunction_ss_uLdR::synapse0x2c92840() {
   return (neuron0x2c8c1e0()*-0.251632);
}

double NNfunction_ss_uLdR::synapse0x2c92bc0() {
   return (neuron0x2c87620()*-0.303839);
}

double NNfunction_ss_uLdR::synapse0x2c92c00() {
   return (neuron0x2c87960()*0.122446);
}

double NNfunction_ss_uLdR::synapse0x2c92c40() {
   return (neuron0x2c87ca0()*-0.917435);
}

double NNfunction_ss_uLdR::synapse0x2c92c80() {
   return (neuron0x2c87fe0()*0.338117);
}

double NNfunction_ss_uLdR::synapse0x2c92cc0() {
   return (neuron0x2c88320()*-0.640949);
}

double NNfunction_ss_uLdR::synapse0x2c92d00() {
   return (neuron0x2c88660()*-0.36355);
}

double NNfunction_ss_uLdR::synapse0x2c92d40() {
   return (neuron0x2c889a0()*-0.371736);
}

double NNfunction_ss_uLdR::synapse0x2c92d80() {
   return (neuron0x2c88ce0()*-0.685979);
}

double NNfunction_ss_uLdR::synapse0x2c92dc0() {
   return (neuron0x2c89020()*-0.281796);
}

double NNfunction_ss_uLdR::synapse0x2c92e00() {
   return (neuron0x2c89360()*-0.101773);
}

double NNfunction_ss_uLdR::synapse0x2c92e40() {
   return (neuron0x2c896a0()*0.186449);
}

double NNfunction_ss_uLdR::synapse0x2c92e80() {
   return (neuron0x2c899e0()*0.776617);
}

double NNfunction_ss_uLdR::synapse0x2c92ec0() {
   return (neuron0x2c89d20()*0.100338);
}

double NNfunction_ss_uLdR::synapse0x2c92f00() {
   return (neuron0x2c8a060()*-0.755563);
}

double NNfunction_ss_uLdR::synapse0x2c92f40() {
   return (neuron0x2c8a3a0()*-0.671702);
}

double NNfunction_ss_uLdR::synapse0x2c92f80() {
   return (neuron0x2c8a6e0()*-0.456607);
}

double NNfunction_ss_uLdR::synapse0x2c92a10() {
   return (neuron0x2c8aa20()*0.0322685);
}

double NNfunction_ss_uLdR::synapse0x2c92a50() {
   return (neuron0x2c8af80()*-0.226897);
}

double NNfunction_ss_uLdR::synapse0x2c8f7e0() {
   return (neuron0x2c8b1a0()*-0.151764);
}

double NNfunction_ss_uLdR::synapse0x2c8f820() {
   return (neuron0x2c8b4e0()*-0.103147);
}

double NNfunction_ss_uLdR::synapse0x2c8f860() {
   return (neuron0x2c8b820()*-0.0678677);
}

double NNfunction_ss_uLdR::synapse0x2c8f8a0() {
   return (neuron0x2c8bb60()*0.116525);
}

double NNfunction_ss_uLdR::synapse0x2c8f8e0() {
   return (neuron0x2c8bea0()*-0.204902);
}

double NNfunction_ss_uLdR::synapse0x2c8f920() {
   return (neuron0x2c8c1e0()*0.117223);
}

double NNfunction_ss_uLdR::synapse0x2c8fca0() {
   return (neuron0x2c87620()*0.389499);
}

double NNfunction_ss_uLdR::synapse0x2c8fce0() {
   return (neuron0x2c87960()*-0.096697);
}

double NNfunction_ss_uLdR::synapse0x2c8fd20() {
   return (neuron0x2c87ca0()*0.218347);
}

double NNfunction_ss_uLdR::synapse0x2c8fd60() {
   return (neuron0x2c87fe0()*-0.162429);
}

double NNfunction_ss_uLdR::synapse0x2c8fda0() {
   return (neuron0x2c88320()*0.725899);
}

double NNfunction_ss_uLdR::synapse0x2c8fde0() {
   return (neuron0x2c88660()*-0.395278);
}

double NNfunction_ss_uLdR::synapse0x2c8fe20() {
   return (neuron0x2c889a0()*-0.0275892);
}

double NNfunction_ss_uLdR::synapse0x2c8fe60() {
   return (neuron0x2c88ce0()*0.162742);
}

double NNfunction_ss_uLdR::synapse0x2c8fea0() {
   return (neuron0x2c89020()*-1.2647);
}

double NNfunction_ss_uLdR::synapse0x2c8fee0() {
   return (neuron0x2c89360()*-0.493548);
}

double NNfunction_ss_uLdR::synapse0x2c8ff20() {
   return (neuron0x2c896a0()*-0.998354);
}

double NNfunction_ss_uLdR::synapse0x2c8ff60() {
   return (neuron0x2c899e0()*-1.55398);
}

double NNfunction_ss_uLdR::synapse0x2c8ffa0() {
   return (neuron0x2c89d20()*0.594111);
}

double NNfunction_ss_uLdR::synapse0x2c940e0() {
   return (neuron0x2c8a060()*0.373703);
}

double NNfunction_ss_uLdR::synapse0x2c94120() {
   return (neuron0x2c8a3a0()*0.272757);
}

double NNfunction_ss_uLdR::synapse0x2c94160() {
   return (neuron0x2c8a6e0()*0.782885);
}

double NNfunction_ss_uLdR::synapse0x2c8faf0() {
   return (neuron0x2c8aa20()*0.700694);
}

double NNfunction_ss_uLdR::synapse0x2c8fb30() {
   return (neuron0x2c8af80()*0.539505);
}

double NNfunction_ss_uLdR::synapse0x2c942b0() {
   return (neuron0x2c8b1a0()*-0.779134);
}

double NNfunction_ss_uLdR::synapse0x2c942f0() {
   return (neuron0x2c8b4e0()*-0.0489654);
}

double NNfunction_ss_uLdR::synapse0x2c94330() {
   return (neuron0x2c8b820()*-0.442272);
}

double NNfunction_ss_uLdR::synapse0x2c94370() {
   return (neuron0x2c8bb60()*0.422463);
}

double NNfunction_ss_uLdR::synapse0x2c943b0() {
   return (neuron0x2c8bea0()*-0.318368);
}

double NNfunction_ss_uLdR::synapse0x2c943f0() {
   return (neuron0x2c8c1e0()*-0.741481);
}

double NNfunction_ss_uLdR::synapse0x2c94770() {
   return (neuron0x2c87620()*-0.280626);
}

double NNfunction_ss_uLdR::synapse0x2c947b0() {
   return (neuron0x2c87960()*-0.396307);
}

double NNfunction_ss_uLdR::synapse0x2c947f0() {
   return (neuron0x2c87ca0()*-0.513529);
}

double NNfunction_ss_uLdR::synapse0x2c94830() {
   return (neuron0x2c87fe0()*0.55512);
}

double NNfunction_ss_uLdR::synapse0x2c94870() {
   return (neuron0x2c88320()*-0.738872);
}

double NNfunction_ss_uLdR::synapse0x2c948b0() {
   return (neuron0x2c88660()*-0.767283);
}

double NNfunction_ss_uLdR::synapse0x2c948f0() {
   return (neuron0x2c889a0()*-0.268762);
}

double NNfunction_ss_uLdR::synapse0x2c94930() {
   return (neuron0x2c88ce0()*-0.543129);
}

double NNfunction_ss_uLdR::synapse0x2c94970() {
   return (neuron0x2c89020()*-0.259135);
}

double NNfunction_ss_uLdR::synapse0x2c949b0() {
   return (neuron0x2c89360()*-0.827877);
}

double NNfunction_ss_uLdR::synapse0x2c949f0() {
   return (neuron0x2c896a0()*0.467792);
}

double NNfunction_ss_uLdR::synapse0x2c94a30() {
   return (neuron0x2c899e0()*0.510616);
}

double NNfunction_ss_uLdR::synapse0x2c94a70() {
   return (neuron0x2c89d20()*0.360669);
}

double NNfunction_ss_uLdR::synapse0x2c94ab0() {
   return (neuron0x2c8a060()*0.169227);
}

double NNfunction_ss_uLdR::synapse0x2c94af0() {
   return (neuron0x2c8a3a0()*-0.598196);
}

double NNfunction_ss_uLdR::synapse0x2c94b30() {
   return (neuron0x2c8a6e0()*-0.744993);
}

double NNfunction_ss_uLdR::synapse0x2c945c0() {
   return (neuron0x2c8aa20()*-0.161871);
}

double NNfunction_ss_uLdR::synapse0x2c94600() {
   return (neuron0x2c8af80()*-0.0806051);
}

double NNfunction_ss_uLdR::synapse0x2c94c80() {
   return (neuron0x2c8b1a0()*-0.222228);
}

double NNfunction_ss_uLdR::synapse0x2c94cc0() {
   return (neuron0x2c8b4e0()*-0.997956);
}

double NNfunction_ss_uLdR::synapse0x2c94d00() {
   return (neuron0x2c8b820()*-0.986858);
}

double NNfunction_ss_uLdR::synapse0x2c94d40() {
   return (neuron0x2c8bb60()*-0.607255);
}

double NNfunction_ss_uLdR::synapse0x2c94d80() {
   return (neuron0x2c8bea0()*-0.0177736);
}

double NNfunction_ss_uLdR::synapse0x2c94dc0() {
   return (neuron0x2c8c1e0()*0.475801);
}

double NNfunction_ss_uLdR::synapse0x2c95140() {
   return (neuron0x2c87620()*-0.401327);
}

double NNfunction_ss_uLdR::synapse0x2c95180() {
   return (neuron0x2c87960()*0.00966369);
}

double NNfunction_ss_uLdR::synapse0x2c951c0() {
   return (neuron0x2c87ca0()*0.0154726);
}

double NNfunction_ss_uLdR::synapse0x2c95200() {
   return (neuron0x2c87fe0()*0.645673);
}

double NNfunction_ss_uLdR::synapse0x2c95240() {
   return (neuron0x2c88320()*0.761788);
}

double NNfunction_ss_uLdR::synapse0x2c95280() {
   return (neuron0x2c88660()*-0.0754066);
}

double NNfunction_ss_uLdR::synapse0x2c952c0() {
   return (neuron0x2c889a0()*0.0703932);
}

double NNfunction_ss_uLdR::synapse0x2c95300() {
   return (neuron0x2c88ce0()*0.0470238);
}

double NNfunction_ss_uLdR::synapse0x2c95340() {
   return (neuron0x2c89020()*0.333808);
}

double NNfunction_ss_uLdR::synapse0x2c95380() {
   return (neuron0x2c89360()*-0.672802);
}

double NNfunction_ss_uLdR::synapse0x2c953c0() {
   return (neuron0x2c896a0()*0.303776);
}

double NNfunction_ss_uLdR::synapse0x2c95400() {
   return (neuron0x2c899e0()*-0.203635);
}

double NNfunction_ss_uLdR::synapse0x2c95440() {
   return (neuron0x2c89d20()*0.0478013);
}

double NNfunction_ss_uLdR::synapse0x2c95480() {
   return (neuron0x2c8a060()*0.231423);
}

double NNfunction_ss_uLdR::synapse0x2c954c0() {
   return (neuron0x2c8a3a0()*0.0148041);
}

double NNfunction_ss_uLdR::synapse0x2c95500() {
   return (neuron0x2c8a6e0()*0.101804);
}

double NNfunction_ss_uLdR::synapse0x2c94f90() {
   return (neuron0x2c8aa20()*0.2815);
}

double NNfunction_ss_uLdR::synapse0x2c94fd0() {
   return (neuron0x2c8af80()*-0.810972);
}

double NNfunction_ss_uLdR::synapse0x2c95650() {
   return (neuron0x2c8b1a0()*-0.349983);
}

double NNfunction_ss_uLdR::synapse0x2c95690() {
   return (neuron0x2c8b4e0()*-0.98468);
}

double NNfunction_ss_uLdR::synapse0x2c956d0() {
   return (neuron0x2c8b820()*0.150416);
}

double NNfunction_ss_uLdR::synapse0x2c95710() {
   return (neuron0x2c8bb60()*-0.0712418);
}

double NNfunction_ss_uLdR::synapse0x2c95750() {
   return (neuron0x2c8bea0()*0.930715);
}

double NNfunction_ss_uLdR::synapse0x2c95790() {
   return (neuron0x2c8c1e0()*0.229998);
}

double NNfunction_ss_uLdR::synapse0x2c95b10() {
   return (neuron0x2c87620()*-0.628941);
}

double NNfunction_ss_uLdR::synapse0x2c95b50() {
   return (neuron0x2c87960()*0.37967);
}

double NNfunction_ss_uLdR::synapse0x2c95b90() {
   return (neuron0x2c87ca0()*-0.115486);
}

double NNfunction_ss_uLdR::synapse0x2c95bd0() {
   return (neuron0x2c87fe0()*-0.407879);
}

double NNfunction_ss_uLdR::synapse0x2c95c10() {
   return (neuron0x2c88320()*0.777216);
}

double NNfunction_ss_uLdR::synapse0x2c95c50() {
   return (neuron0x2c88660()*-0.649274);
}

double NNfunction_ss_uLdR::synapse0x2c95c90() {
   return (neuron0x2c889a0()*0.836877);
}

double NNfunction_ss_uLdR::synapse0x2c95cd0() {
   return (neuron0x2c88ce0()*-0.667119);
}

double NNfunction_ss_uLdR::synapse0x2c95d10() {
   return (neuron0x2c89020()*-0.495381);
}

double NNfunction_ss_uLdR::synapse0x2c95d50() {
   return (neuron0x2c89360()*-0.183931);
}

double NNfunction_ss_uLdR::synapse0x2c95d90() {
   return (neuron0x2c896a0()*-0.419485);
}

double NNfunction_ss_uLdR::synapse0x2c95dd0() {
   return (neuron0x2c899e0()*-0.253212);
}

double NNfunction_ss_uLdR::synapse0x2c95e10() {
   return (neuron0x2c89d20()*0.952214);
}

double NNfunction_ss_uLdR::synapse0x2c95e50() {
   return (neuron0x2c8a060()*0.181459);
}

double NNfunction_ss_uLdR::synapse0x2c95e90() {
   return (neuron0x2c8a3a0()*0.197456);
}

double NNfunction_ss_uLdR::synapse0x2c95ed0() {
   return (neuron0x2c8a6e0()*-0.389133);
}

double NNfunction_ss_uLdR::synapse0x2c95960() {
   return (neuron0x2c8aa20()*1.31804);
}

double NNfunction_ss_uLdR::synapse0x2c959a0() {
   return (neuron0x2c8af80()*-0.0720969);
}

double NNfunction_ss_uLdR::synapse0x2c96020() {
   return (neuron0x2c8b1a0()*0.219258);
}

double NNfunction_ss_uLdR::synapse0x2c96060() {
   return (neuron0x2c8b4e0()*-0.248248);
}

double NNfunction_ss_uLdR::synapse0x2c960a0() {
   return (neuron0x2c8b820()*-0.729005);
}

double NNfunction_ss_uLdR::synapse0x2c960e0() {
   return (neuron0x2c8bb60()*0.231705);
}

double NNfunction_ss_uLdR::synapse0x2c96120() {
   return (neuron0x2c8bea0()*-0.453321);
}

double NNfunction_ss_uLdR::synapse0x2c96160() {
   return (neuron0x2c8c1e0()*0.148466);
}

double NNfunction_ss_uLdR::synapse0x2c964e0() {
   return (neuron0x2c87620()*0.0116115);
}

double NNfunction_ss_uLdR::synapse0x2c87840() {
   return (neuron0x2c87960()*0.0215855);
}

double NNfunction_ss_uLdR::synapse0x2c87880() {
   return (neuron0x2c87ca0()*0.0153351);
}

double NNfunction_ss_uLdR::synapse0x2c87b80() {
   return (neuron0x2c87fe0()*-9.67203);
}

double NNfunction_ss_uLdR::synapse0x2c87bc0() {
   return (neuron0x2c88320()*-0.00911449);
}

double NNfunction_ss_uLdR::synapse0x2c87ec0() {
   return (neuron0x2c88660()*-0.0155686);
}

double NNfunction_ss_uLdR::synapse0x2c87f00() {
   return (neuron0x2c889a0()*-0.0152673);
}

double NNfunction_ss_uLdR::synapse0x2c88200() {
   return (neuron0x2c88ce0()*0.000162643);
}

double NNfunction_ss_uLdR::synapse0x2c88240() {
   return (neuron0x2c89020()*-0.0141154);
}

double NNfunction_ss_uLdR::synapse0x2c88540() {
   return (neuron0x2c89360()*0.00153626);
}

double NNfunction_ss_uLdR::synapse0x2c88580() {
   return (neuron0x2c896a0()*-0.0149643);
}

double NNfunction_ss_uLdR::synapse0x2c88880() {
   return (neuron0x2c899e0()*0.570854);
}

double NNfunction_ss_uLdR::synapse0x2c888c0() {
   return (neuron0x2c89d20()*0.058282);
}

double NNfunction_ss_uLdR::synapse0x2c88bc0() {
   return (neuron0x2c8a060()*0.0115731);
}

double NNfunction_ss_uLdR::synapse0x2c88c00() {
   return (neuron0x2c8a3a0()*0.0256925);
}

double NNfunction_ss_uLdR::synapse0x2c88f00() {
   return (neuron0x2c8a6e0()*0.0287057);
}

double NNfunction_ss_uLdR::synapse0x2c88f40() {
   return (neuron0x2c8aa20()*-0.014643);
}

double NNfunction_ss_uLdR::synapse0x2c89240() {
   return (neuron0x2c8af80()*0.4557);
}

double NNfunction_ss_uLdR::synapse0x2c89280() {
   return (neuron0x2c8b1a0()*0.0312913);
}

double NNfunction_ss_uLdR::synapse0x2c89580() {
   return (neuron0x2c8b4e0()*0.0029212);
}

double NNfunction_ss_uLdR::synapse0x2c895c0() {
   return (neuron0x2c8b820()*-0.00595029);
}

double NNfunction_ss_uLdR::synapse0x2c898c0() {
   return (neuron0x2c8bb60()*-0.0119562);
}

double NNfunction_ss_uLdR::synapse0x2c89900() {
   return (neuron0x2c8bea0()*0.0124111);
}

double NNfunction_ss_uLdR::synapse0x2c89c00() {
   return (neuron0x2c8c1e0()*-0.00911852);
}

double NNfunction_ss_uLdR::synapse0x2c89c40() {
   return (neuron0x2c87620()*0.0148543);
}

double NNfunction_ss_uLdR::synapse0x2c8a900() {
   return (neuron0x2c87960()*-0.00584979);
}

double NNfunction_ss_uLdR::synapse0x2c8a940() {
   return (neuron0x2c87ca0()*0.0146719);
}

double NNfunction_ss_uLdR::synapse0x2c96330() {
   return (neuron0x2c87fe0()*0.256481);
}

double NNfunction_ss_uLdR::synapse0x2c96370() {
   return (neuron0x2c88320()*-0.00100712);
}

double NNfunction_ss_uLdR::synapse0x2c8ac40() {
   return (neuron0x2c88660()*0.0153334);
}

double NNfunction_ss_uLdR::synapse0x2c8ac80() {
   return (neuron0x2c889a0()*-0.00415248);
}

double NNfunction_ss_uLdR::synapse0x2a38c10() {
   return (neuron0x2c88ce0()*-0.00554457);
}

double NNfunction_ss_uLdR::synapse0x2a38c50() {
   return (neuron0x2c89020()*-0.0130483);
}

double NNfunction_ss_uLdR::synapse0x2c8b3c0() {
   return (neuron0x2c89360()*-0.00346453);
}

double NNfunction_ss_uLdR::synapse0x2c8b400() {
   return (neuron0x2c896a0()*0.00876103);
}

double NNfunction_ss_uLdR::synapse0x2c8b700() {
   return (neuron0x2c899e0()*-0.361445);
}

double NNfunction_ss_uLdR::synapse0x2c8b740() {
   return (neuron0x2c89d20()*0.0102975);
}

double NNfunction_ss_uLdR::synapse0x2c8ba40() {
   return (neuron0x2c8a060()*-0.009896);
}

double NNfunction_ss_uLdR::synapse0x2c8ba80() {
   return (neuron0x2c8a3a0()*0.0228885);
}

double NNfunction_ss_uLdR::synapse0x2c8bd80() {
   return (neuron0x2c8a6e0()*0.0103195);
}

double NNfunction_ss_uLdR::synapse0x2c8bdc0() {
   return (neuron0x2c8aa20()*-0.00125203);
}

double NNfunction_ss_uLdR::synapse0x2c8c0c0() {
   return (neuron0x2c8af80()*-0.726212);
}

double NNfunction_ss_uLdR::synapse0x2c8c100() {
   return (neuron0x2c8b1a0()*0.0162788);
}

double NNfunction_ss_uLdR::synapse0x2c8c400() {
   return (neuron0x2c8b4e0()*0.0107633);
}

double NNfunction_ss_uLdR::synapse0x2c8c440() {
   return (neuron0x2c8b820()*0.00745413);
}

double NNfunction_ss_uLdR::synapse0x2c89f40() {
   return (neuron0x2c8bb60()*0.000109574);
}

double NNfunction_ss_uLdR::synapse0x2c89f80() {
   return (neuron0x2c8bea0()*0.012507);
}

double NNfunction_ss_uLdR::synapse0x2c98250() {
   return (neuron0x2c8c1e0()*0.00342395);
}

double NNfunction_ss_uLdR::synapse0x2c985d0() {
   return (neuron0x2c87620()*0.389249);
}

double NNfunction_ss_uLdR::synapse0x2c98610() {
   return (neuron0x2c87960()*-0.214516);
}

double NNfunction_ss_uLdR::synapse0x2c98650() {
   return (neuron0x2c87ca0()*0.256525);
}

double NNfunction_ss_uLdR::synapse0x2c98690() {
   return (neuron0x2c87fe0()*0.509277);
}

double NNfunction_ss_uLdR::synapse0x2c986d0() {
   return (neuron0x2c88320()*-0.10916);
}

double NNfunction_ss_uLdR::synapse0x2c98710() {
   return (neuron0x2c88660()*-0.18322);
}

double NNfunction_ss_uLdR::synapse0x2c98750() {
   return (neuron0x2c889a0()*-0.235282);
}

double NNfunction_ss_uLdR::synapse0x2c98790() {
   return (neuron0x2c88ce0()*0.176768);
}

double NNfunction_ss_uLdR::synapse0x2c987d0() {
   return (neuron0x2c89020()*0.29727);
}

double NNfunction_ss_uLdR::synapse0x2c98810() {
   return (neuron0x2c89360()*-0.396157);
}

double NNfunction_ss_uLdR::synapse0x2c98850() {
   return (neuron0x2c896a0()*-0.11926);
}

double NNfunction_ss_uLdR::synapse0x2c98890() {
   return (neuron0x2c899e0()*-0.730902);
}

double NNfunction_ss_uLdR::synapse0x2c988d0() {
   return (neuron0x2c89d20()*-0.770446);
}

double NNfunction_ss_uLdR::synapse0x2c98910() {
   return (neuron0x2c8a060()*-0.391526);
}

double NNfunction_ss_uLdR::synapse0x2c98950() {
   return (neuron0x2c8a3a0()*-0.232922);
}

double NNfunction_ss_uLdR::synapse0x2c98990() {
   return (neuron0x2c8a6e0()*-0.540485);
}

double NNfunction_ss_uLdR::synapse0x2c98420() {
   return (neuron0x2c8aa20()*-0.0599257);
}

double NNfunction_ss_uLdR::synapse0x2c98460() {
   return (neuron0x2c8af80()*0.0700311);
}

double NNfunction_ss_uLdR::synapse0x2c98ae0() {
   return (neuron0x2c8b1a0()*-0.876646);
}

double NNfunction_ss_uLdR::synapse0x2c98b20() {
   return (neuron0x2c8b4e0()*0.552202);
}

double NNfunction_ss_uLdR::synapse0x2c98b60() {
   return (neuron0x2c8b820()*-0.547723);
}

double NNfunction_ss_uLdR::synapse0x2c98ba0() {
   return (neuron0x2c8bb60()*-0.0622275);
}

double NNfunction_ss_uLdR::synapse0x2c98be0() {
   return (neuron0x2c8bea0()*0.0233165);
}

double NNfunction_ss_uLdR::synapse0x2c98c20() {
   return (neuron0x2c8c1e0()*0.619443);
}

double NNfunction_ss_uLdR::synapse0x2c98fa0() {
   return (neuron0x2c87620()*-0.170044);
}

double NNfunction_ss_uLdR::synapse0x2c98fe0() {
   return (neuron0x2c87960()*0.232059);
}

double NNfunction_ss_uLdR::synapse0x2c99020() {
   return (neuron0x2c87ca0()*0.187754);
}

double NNfunction_ss_uLdR::synapse0x2c99060() {
   return (neuron0x2c87fe0()*0.152199);
}

double NNfunction_ss_uLdR::synapse0x2c990a0() {
   return (neuron0x2c88320()*0.708419);
}

double NNfunction_ss_uLdR::synapse0x2c990e0() {
   return (neuron0x2c88660()*0.934034);
}

double NNfunction_ss_uLdR::synapse0x2c99120() {
   return (neuron0x2c889a0()*-0.481187);
}

double NNfunction_ss_uLdR::synapse0x2c99160() {
   return (neuron0x2c88ce0()*-0.502611);
}

double NNfunction_ss_uLdR::synapse0x2c991a0() {
   return (neuron0x2c89020()*-0.229529);
}

double NNfunction_ss_uLdR::synapse0x2c991e0() {
   return (neuron0x2c89360()*-0.734713);
}

double NNfunction_ss_uLdR::synapse0x2c99220() {
   return (neuron0x2c896a0()*0.184711);
}

double NNfunction_ss_uLdR::synapse0x2c99260() {
   return (neuron0x2c899e0()*0.389854);
}

double NNfunction_ss_uLdR::synapse0x2c992a0() {
   return (neuron0x2c89d20()*-0.0678395);
}

double NNfunction_ss_uLdR::synapse0x2c992e0() {
   return (neuron0x2c8a060()*1.18024);
}

double NNfunction_ss_uLdR::synapse0x2c99320() {
   return (neuron0x2c8a3a0()*0.0737932);
}

double NNfunction_ss_uLdR::synapse0x2c99360() {
   return (neuron0x2c8a6e0()*0.97099);
}

double NNfunction_ss_uLdR::synapse0x2c98df0() {
   return (neuron0x2c8aa20()*0.776233);
}

double NNfunction_ss_uLdR::synapse0x2c98e30() {
   return (neuron0x2c8af80()*0.434149);
}

double NNfunction_ss_uLdR::synapse0x2c994b0() {
   return (neuron0x2c8b1a0()*-0.992674);
}

double NNfunction_ss_uLdR::synapse0x2c994f0() {
   return (neuron0x2c8b4e0()*0.748084);
}

double NNfunction_ss_uLdR::synapse0x2c99530() {
   return (neuron0x2c8b820()*-0.466725);
}

double NNfunction_ss_uLdR::synapse0x2c99570() {
   return (neuron0x2c8bb60()*0.396111);
}

double NNfunction_ss_uLdR::synapse0x2c995b0() {
   return (neuron0x2c8bea0()*0.539767);
}

double NNfunction_ss_uLdR::synapse0x2c995f0() {
   return (neuron0x2c8c1e0()*0.565162);
}

double NNfunction_ss_uLdR::synapse0x2c99970() {
   return (neuron0x2c87620()*-0.0860326);
}

double NNfunction_ss_uLdR::synapse0x2c999b0() {
   return (neuron0x2c87960()*0.10982);
}

double NNfunction_ss_uLdR::synapse0x2c999f0() {
   return (neuron0x2c87ca0()*0.0120777);
}

double NNfunction_ss_uLdR::synapse0x2c99a30() {
   return (neuron0x2c87fe0()*-1.02307);
}

double NNfunction_ss_uLdR::synapse0x2c99a70() {
   return (neuron0x2c88320()*0.0644405);
}

double NNfunction_ss_uLdR::synapse0x2c99ab0() {
   return (neuron0x2c88660()*-0.100593);
}

double NNfunction_ss_uLdR::synapse0x2c99af0() {
   return (neuron0x2c889a0()*0.110512);
}

double NNfunction_ss_uLdR::synapse0x2c99b30() {
   return (neuron0x2c88ce0()*-0.44105);
}

double NNfunction_ss_uLdR::synapse0x2c99b70() {
   return (neuron0x2c89020()*-0.253887);
}

double NNfunction_ss_uLdR::synapse0x2c99bb0() {
   return (neuron0x2c89360()*-0.357445);
}

double NNfunction_ss_uLdR::synapse0x2c99bf0() {
   return (neuron0x2c896a0()*0.144205);
}

double NNfunction_ss_uLdR::synapse0x2c99c30() {
   return (neuron0x2c899e0()*0.423474);
}

double NNfunction_ss_uLdR::synapse0x2c99c70() {
   return (neuron0x2c89d20()*0.584044);
}

double NNfunction_ss_uLdR::synapse0x2c99cb0() {
   return (neuron0x2c8a060()*0.64727);
}

double NNfunction_ss_uLdR::synapse0x2c99cf0() {
   return (neuron0x2c8a3a0()*0.669302);
}

double NNfunction_ss_uLdR::synapse0x2c99d30() {
   return (neuron0x2c8a6e0()*0.839688);
}

double NNfunction_ss_uLdR::synapse0x2c997c0() {
   return (neuron0x2c8aa20()*0.156748);
}

double NNfunction_ss_uLdR::synapse0x2c99800() {
   return (neuron0x2c8af80()*-0.211768);
}

double NNfunction_ss_uLdR::synapse0x2c99e80() {
   return (neuron0x2c8b1a0()*1.01679);
}

double NNfunction_ss_uLdR::synapse0x2c99ec0() {
   return (neuron0x2c8b4e0()*-0.352325);
}

double NNfunction_ss_uLdR::synapse0x2c99f00() {
   return (neuron0x2c8b820()*-0.206947);
}

double NNfunction_ss_uLdR::synapse0x2c99f40() {
   return (neuron0x2c8bb60()*0.437117);
}

double NNfunction_ss_uLdR::synapse0x2c99f80() {
   return (neuron0x2c8bea0()*0.284683);
}

double NNfunction_ss_uLdR::synapse0x2c99fc0() {
   return (neuron0x2c8c1e0()*0.331512);
}

double NNfunction_ss_uLdR::synapse0x2c9a340() {
   return (neuron0x2c87620()*-0.4676);
}

double NNfunction_ss_uLdR::synapse0x2c9a380() {
   return (neuron0x2c87960()*0.126756);
}

double NNfunction_ss_uLdR::synapse0x2c9a3c0() {
   return (neuron0x2c87ca0()*1.291);
}

double NNfunction_ss_uLdR::synapse0x2c9a400() {
   return (neuron0x2c87fe0()*-1.03109);
}

double NNfunction_ss_uLdR::synapse0x2c9a440() {
   return (neuron0x2c88320()*0.139314);
}

double NNfunction_ss_uLdR::synapse0x2c9a480() {
   return (neuron0x2c88660()*-0.548958);
}

double NNfunction_ss_uLdR::synapse0x2c9a4c0() {
   return (neuron0x2c889a0()*0.290873);
}

double NNfunction_ss_uLdR::synapse0x2c9a500() {
   return (neuron0x2c88ce0()*-0.723561);
}

double NNfunction_ss_uLdR::synapse0x2c9a540() {
   return (neuron0x2c89020()*-0.617439);
}

double NNfunction_ss_uLdR::synapse0x2c9a580() {
   return (neuron0x2c89360()*-0.307556);
}

double NNfunction_ss_uLdR::synapse0x2c9a5c0() {
   return (neuron0x2c896a0()*0.471937);
}

double NNfunction_ss_uLdR::synapse0x2c9a600() {
   return (neuron0x2c899e0()*-1.34025);
}

double NNfunction_ss_uLdR::synapse0x2c9a640() {
   return (neuron0x2c89d20()*-0.845109);
}

double NNfunction_ss_uLdR::synapse0x2c9a680() {
   return (neuron0x2c8a060()*0.6441);
}

double NNfunction_ss_uLdR::synapse0x2c9a6c0() {
   return (neuron0x2c8a3a0()*-0.0790069);
}

double NNfunction_ss_uLdR::synapse0x2c9a700() {
   return (neuron0x2c8a6e0()*-0.310911);
}

double NNfunction_ss_uLdR::synapse0x2c9a190() {
   return (neuron0x2c8aa20()*0.366779);
}

double NNfunction_ss_uLdR::synapse0x2c9a1d0() {
   return (neuron0x2c8af80()*-0.770107);
}

double NNfunction_ss_uLdR::synapse0x2c9a850() {
   return (neuron0x2c8b1a0()*0.21424);
}

double NNfunction_ss_uLdR::synapse0x2c9a890() {
   return (neuron0x2c8b4e0()*0.0373233);
}

double NNfunction_ss_uLdR::synapse0x2c9a8d0() {
   return (neuron0x2c8b820()*-0.0346361);
}

double NNfunction_ss_uLdR::synapse0x2c9a910() {
   return (neuron0x2c8bb60()*0.121122);
}

double NNfunction_ss_uLdR::synapse0x2c9a950() {
   return (neuron0x2c8bea0()*-0.087656);
}

double NNfunction_ss_uLdR::synapse0x2c9a990() {
   return (neuron0x2c8c1e0()*0.0250387);
}

double NNfunction_ss_uLdR::synapse0x2c9ad10() {
   return (neuron0x2c87620()*-0.0315641);
}

double NNfunction_ss_uLdR::synapse0x2c9ad50() {
   return (neuron0x2c87960()*-0.0141094);
}

double NNfunction_ss_uLdR::synapse0x2c9ad90() {
   return (neuron0x2c87ca0()*0.00955331);
}

double NNfunction_ss_uLdR::synapse0x2c9add0() {
   return (neuron0x2c87fe0()*-0.764675);
}

double NNfunction_ss_uLdR::synapse0x2c9ae10() {
   return (neuron0x2c88320()*0.132019);
}

double NNfunction_ss_uLdR::synapse0x2c9ae50() {
   return (neuron0x2c88660()*0.0442826);
}

double NNfunction_ss_uLdR::synapse0x2c9ae90() {
   return (neuron0x2c889a0()*-0.00349008);
}

double NNfunction_ss_uLdR::synapse0x2c9aed0() {
   return (neuron0x2c88ce0()*0.0771959);
}

double NNfunction_ss_uLdR::synapse0x2c9af10() {
   return (neuron0x2c89020()*-0.0493029);
}

double NNfunction_ss_uLdR::synapse0x2c930d0() {
   return (neuron0x2c89360()*-0.042887);
}

double NNfunction_ss_uLdR::synapse0x2c93110() {
   return (neuron0x2c896a0()*0.0671647);
}

double NNfunction_ss_uLdR::synapse0x2c93150() {
   return (neuron0x2c899e0()*0.302546);
}

double NNfunction_ss_uLdR::synapse0x2c93190() {
   return (neuron0x2c89d20()*0.566298);
}

double NNfunction_ss_uLdR::synapse0x2c931d0() {
   return (neuron0x2c8a060()*-0.161329);
}

double NNfunction_ss_uLdR::synapse0x2c93210() {
   return (neuron0x2c8a3a0()*0.154878);
}

double NNfunction_ss_uLdR::synapse0x2c93250() {
   return (neuron0x2c8a6e0()*0.219445);
}

double NNfunction_ss_uLdR::synapse0x2c9ab60() {
   return (neuron0x2c8aa20()*-0.200768);
}

double NNfunction_ss_uLdR::synapse0x2c9aba0() {
   return (neuron0x2c8af80()*-0.447523);
}

double NNfunction_ss_uLdR::synapse0x2c933a0() {
   return (neuron0x2c8b1a0()*0.195568);
}

double NNfunction_ss_uLdR::synapse0x2c933e0() {
   return (neuron0x2c8b4e0()*0.11175);
}

double NNfunction_ss_uLdR::synapse0x2c93420() {
   return (neuron0x2c8b820()*0.105632);
}

double NNfunction_ss_uLdR::synapse0x2c93460() {
   return (neuron0x2c8bb60()*-0.0806896);
}

double NNfunction_ss_uLdR::synapse0x2c934a0() {
   return (neuron0x2c8bea0()*-0.0155118);
}

double NNfunction_ss_uLdR::synapse0x2c934e0() {
   return (neuron0x2c8c1e0()*-0.00144671);
}

double NNfunction_ss_uLdR::synapse0x2c93860() {
   return (neuron0x2c87620()*0.00594288);
}

double NNfunction_ss_uLdR::synapse0x2c938a0() {
   return (neuron0x2c87960()*0.0115416);
}

double NNfunction_ss_uLdR::synapse0x2c938e0() {
   return (neuron0x2c87ca0()*-0.0201803);
}

double NNfunction_ss_uLdR::synapse0x2c93920() {
   return (neuron0x2c87fe0()*0.0754323);
}

double NNfunction_ss_uLdR::synapse0x2c93960() {
   return (neuron0x2c88320()*-0.00149293);
}

double NNfunction_ss_uLdR::synapse0x2c939a0() {
   return (neuron0x2c88660()*0.00394435);
}

double NNfunction_ss_uLdR::synapse0x2c939e0() {
   return (neuron0x2c889a0()*-0.00980559);
}

double NNfunction_ss_uLdR::synapse0x2c93a20() {
   return (neuron0x2c88ce0()*0.0050134);
}

double NNfunction_ss_uLdR::synapse0x2c93a60() {
   return (neuron0x2c89020()*-0.00454732);
}

double NNfunction_ss_uLdR::synapse0x2c93aa0() {
   return (neuron0x2c89360()*0.0067359);
}

double NNfunction_ss_uLdR::synapse0x2c93ae0() {
   return (neuron0x2c896a0()*-0.00141767);
}

double NNfunction_ss_uLdR::synapse0x2c93b20() {
   return (neuron0x2c899e0()*0.544075);
}

double NNfunction_ss_uLdR::synapse0x2c93b60() {
   return (neuron0x2c89d20()*0.025297);
}

double NNfunction_ss_uLdR::synapse0x2c93ba0() {
   return (neuron0x2c8a060()*0.00648526);
}

double NNfunction_ss_uLdR::synapse0x2c93be0() {
   return (neuron0x2c8a3a0()*0.0040625);
}

double NNfunction_ss_uLdR::synapse0x2c93c20() {
   return (neuron0x2c8a6e0()*-0.000778015);
}

double NNfunction_ss_uLdR::synapse0x2c936b0() {
   return (neuron0x2c8aa20()*-0.00212879);
}

double NNfunction_ss_uLdR::synapse0x2c936f0() {
   return (neuron0x2c8af80()*-0.179858);
}

double NNfunction_ss_uLdR::synapse0x2c93d70() {
   return (neuron0x2c8b1a0()*0.0140267);
}

double NNfunction_ss_uLdR::synapse0x2c93db0() {
   return (neuron0x2c8b4e0()*0.00348198);
}

double NNfunction_ss_uLdR::synapse0x2c93df0() {
   return (neuron0x2c8b820()*-0.00349437);
}

double NNfunction_ss_uLdR::synapse0x2c93e30() {
   return (neuron0x2c8bb60()*-0.0045862);
}

double NNfunction_ss_uLdR::synapse0x2c93e70() {
   return (neuron0x2c8bea0()*0.00317762);
}

double NNfunction_ss_uLdR::synapse0x2c93eb0() {
   return (neuron0x2c8c1e0()*0.00262554);
}

double NNfunction_ss_uLdR::synapse0x2c94080() {
   return (neuron0x2c87620()*-0.76331);
}

double NNfunction_ss_uLdR::synapse0x2c9d110() {
   return (neuron0x2c87960()*-0.477787);
}

double NNfunction_ss_uLdR::synapse0x2c9d150() {
   return (neuron0x2c87ca0()*-0.591414);
}

double NNfunction_ss_uLdR::synapse0x2c9d190() {
   return (neuron0x2c87fe0()*-1.30694);
}

double NNfunction_ss_uLdR::synapse0x2c9d1d0() {
   return (neuron0x2c88320()*0.337927);
}

double NNfunction_ss_uLdR::synapse0x2c9d210() {
   return (neuron0x2c88660()*-0.343675);
}

double NNfunction_ss_uLdR::synapse0x2c9d250() {
   return (neuron0x2c889a0()*0.398235);
}

double NNfunction_ss_uLdR::synapse0x2c9d290() {
   return (neuron0x2c88ce0()*-0.199534);
}

double NNfunction_ss_uLdR::synapse0x2c9d2d0() {
   return (neuron0x2c89020()*0.0980765);
}

double NNfunction_ss_uLdR::synapse0x2c9d310() {
   return (neuron0x2c89360()*0.254579);
}

double NNfunction_ss_uLdR::synapse0x2c9d350() {
   return (neuron0x2c896a0()*-0.128212);
}

double NNfunction_ss_uLdR::synapse0x2c9d390() {
   return (neuron0x2c899e0()*0.477587);
}

double NNfunction_ss_uLdR::synapse0x2c9d3d0() {
   return (neuron0x2c89d20()*-0.0826249);
}

double NNfunction_ss_uLdR::synapse0x2c9d410() {
   return (neuron0x2c8a060()*0.115876);
}

double NNfunction_ss_uLdR::synapse0x2c9d450() {
   return (neuron0x2c8a3a0()*0.000553728);
}

double NNfunction_ss_uLdR::synapse0x2c9d490() {
   return (neuron0x2c8a6e0()*-0.503586);
}

double NNfunction_ss_uLdR::synapse0x2c9cf60() {
   return (neuron0x2c8aa20()*-0.0909838);
}

double NNfunction_ss_uLdR::synapse0x2c9cfa0() {
   return (neuron0x2c8af80()*-0.150102);
}

double NNfunction_ss_uLdR::synapse0x2c9d5e0() {
   return (neuron0x2c8b1a0()*0.0339558);
}

double NNfunction_ss_uLdR::synapse0x2c9d620() {
   return (neuron0x2c8b4e0()*-0.109964);
}

double NNfunction_ss_uLdR::synapse0x2c9d660() {
   return (neuron0x2c8b820()*0.077326);
}

double NNfunction_ss_uLdR::synapse0x2c9d6a0() {
   return (neuron0x2c8bb60()*0.187297);
}

double NNfunction_ss_uLdR::synapse0x2c9d6e0() {
   return (neuron0x2c8bea0()*0.173685);
}

double NNfunction_ss_uLdR::synapse0x2c9d720() {
   return (neuron0x2c8c1e0()*-1.05205);
}

double NNfunction_ss_uLdR::synapse0x2c9daa0() {
   return (neuron0x2c87620()*-0.0495331);
}

double NNfunction_ss_uLdR::synapse0x2c9dae0() {
   return (neuron0x2c87960()*-0.0138293);
}

double NNfunction_ss_uLdR::synapse0x2c9db20() {
   return (neuron0x2c87ca0()*0.0456475);
}

double NNfunction_ss_uLdR::synapse0x2c9db60() {
   return (neuron0x2c87fe0()*1.37819);
}

double NNfunction_ss_uLdR::synapse0x2c9dba0() {
   return (neuron0x2c88320()*0.0900107);
}

double NNfunction_ss_uLdR::synapse0x2c9dbe0() {
   return (neuron0x2c88660()*-0.0217154);
}

double NNfunction_ss_uLdR::synapse0x2c9dc20() {
   return (neuron0x2c889a0()*-0.0065492);
}

double NNfunction_ss_uLdR::synapse0x2c9dc60() {
   return (neuron0x2c88ce0()*0.0321456);
}

double NNfunction_ss_uLdR::synapse0x2c9dca0() {
   return (neuron0x2c89020()*-0.000434139);
}

double NNfunction_ss_uLdR::synapse0x2c9dce0() {
   return (neuron0x2c89360()*-0.045905);
}

double NNfunction_ss_uLdR::synapse0x2c9dd20() {
   return (neuron0x2c896a0()*-0.0145902);
}

double NNfunction_ss_uLdR::synapse0x2c9dd60() {
   return (neuron0x2c899e0()*-0.356151);
}

double NNfunction_ss_uLdR::synapse0x2c9dda0() {
   return (neuron0x2c89d20()*0.371404);
}

double NNfunction_ss_uLdR::synapse0x2c9dde0() {
   return (neuron0x2c8a060()*-0.14945);
}

double NNfunction_ss_uLdR::synapse0x2c9de20() {
   return (neuron0x2c8a3a0()*0.226672);
}

double NNfunction_ss_uLdR::synapse0x2c9de60() {
   return (neuron0x2c8a6e0()*0.250721);
}

double NNfunction_ss_uLdR::synapse0x2c9d8f0() {
   return (neuron0x2c8aa20()*-0.173889);
}

double NNfunction_ss_uLdR::synapse0x2c9d930() {
   return (neuron0x2c8af80()*-0.655467);
}

double NNfunction_ss_uLdR::synapse0x2c9dfb0() {
   return (neuron0x2c8b1a0()*0.186999);
}

double NNfunction_ss_uLdR::synapse0x2c9dff0() {
   return (neuron0x2c8b4e0()*0.131435);
}

double NNfunction_ss_uLdR::synapse0x2c9e030() {
   return (neuron0x2c8b820()*0.0967093);
}

double NNfunction_ss_uLdR::synapse0x2c9e070() {
   return (neuron0x2c8bb60()*-0.0279233);
}

double NNfunction_ss_uLdR::synapse0x2c9e0b0() {
   return (neuron0x2c8bea0()*0.0311686);
}

double NNfunction_ss_uLdR::synapse0x2c9e0f0() {
   return (neuron0x2c8c1e0()*-0.0482659);
}

double NNfunction_ss_uLdR::synapse0x2c9e470() {
   return (neuron0x2c87620()*1.28381);
}

double NNfunction_ss_uLdR::synapse0x2c9e4b0() {
   return (neuron0x2c87960()*-0.874947);
}

double NNfunction_ss_uLdR::synapse0x2c9e4f0() {
   return (neuron0x2c87ca0()*-0.898675);
}

double NNfunction_ss_uLdR::synapse0x2c9e530() {
   return (neuron0x2c87fe0()*-0.524703);
}

double NNfunction_ss_uLdR::synapse0x2c9e570() {
   return (neuron0x2c88320()*0.272723);
}

double NNfunction_ss_uLdR::synapse0x2c9e5b0() {
   return (neuron0x2c88660()*0.151483);
}

double NNfunction_ss_uLdR::synapse0x2c9e5f0() {
   return (neuron0x2c889a0()*-0.679917);
}

double NNfunction_ss_uLdR::synapse0x2c9e630() {
   return (neuron0x2c88ce0()*0.742276);
}

double NNfunction_ss_uLdR::synapse0x2c9e670() {
   return (neuron0x2c89020()*0.579724);
}

double NNfunction_ss_uLdR::synapse0x2c9e6b0() {
   return (neuron0x2c89360()*0.0554691);
}

double NNfunction_ss_uLdR::synapse0x2c9e6f0() {
   return (neuron0x2c896a0()*-0.578136);
}

double NNfunction_ss_uLdR::synapse0x2c9e730() {
   return (neuron0x2c899e0()*0.38477);
}

double NNfunction_ss_uLdR::synapse0x2c9e770() {
   return (neuron0x2c89d20()*-1.1754);
}

double NNfunction_ss_uLdR::synapse0x2c9e7b0() {
   return (neuron0x2c8a060()*0.323336);
}

double NNfunction_ss_uLdR::synapse0x2c9e7f0() {
   return (neuron0x2c8a3a0()*-0.102684);
}

double NNfunction_ss_uLdR::synapse0x2c9e830() {
   return (neuron0x2c8a6e0()*0.262592);
}

double NNfunction_ss_uLdR::synapse0x2c9e2c0() {
   return (neuron0x2c8aa20()*-0.17386);
}

double NNfunction_ss_uLdR::synapse0x2c9e300() {
   return (neuron0x2c8af80()*-0.311289);
}

double NNfunction_ss_uLdR::synapse0x2c9e980() {
   return (neuron0x2c8b1a0()*-0.251896);
}

double NNfunction_ss_uLdR::synapse0x2c9e9c0() {
   return (neuron0x2c8b4e0()*0.154969);
}

double NNfunction_ss_uLdR::synapse0x2c9ea00() {
   return (neuron0x2c8b820()*-0.367535);
}

double NNfunction_ss_uLdR::synapse0x2c9ea40() {
   return (neuron0x2c8bb60()*0.377745);
}

double NNfunction_ss_uLdR::synapse0x2c9ea80() {
   return (neuron0x2c8bea0()*0.589246);
}

double NNfunction_ss_uLdR::synapse0x2c9eac0() {
   return (neuron0x2c8c1e0()*0.167144);
}

double NNfunction_ss_uLdR::synapse0x2c9ee40() {
   return (neuron0x2c87620()*0.0216968);
}

double NNfunction_ss_uLdR::synapse0x2c9ee80() {
   return (neuron0x2c87960()*0.036757);
}

double NNfunction_ss_uLdR::synapse0x2c9eec0() {
   return (neuron0x2c87ca0()*0.247371);
}

double NNfunction_ss_uLdR::synapse0x2c9ef00() {
   return (neuron0x2c87fe0()*-0.0752866);
}

double NNfunction_ss_uLdR::synapse0x2c9ef40() {
   return (neuron0x2c88320()*0.420307);
}

double NNfunction_ss_uLdR::synapse0x2c9ef80() {
   return (neuron0x2c88660()*0.289439);
}

double NNfunction_ss_uLdR::synapse0x2c9efc0() {
   return (neuron0x2c889a0()*0.385184);
}

double NNfunction_ss_uLdR::synapse0x2c9f000() {
   return (neuron0x2c88ce0()*-0.10552);
}

double NNfunction_ss_uLdR::synapse0x2c9f040() {
   return (neuron0x2c89020()*1.02367);
}

double NNfunction_ss_uLdR::synapse0x2c9f080() {
   return (neuron0x2c89360()*0.688169);
}

double NNfunction_ss_uLdR::synapse0x2c9f0c0() {
   return (neuron0x2c896a0()*0.566751);
}

double NNfunction_ss_uLdR::synapse0x2c9f100() {
   return (neuron0x2c899e0()*-1.19521);
}

double NNfunction_ss_uLdR::synapse0x2c9f140() {
   return (neuron0x2c89d20()*0.194936);
}

double NNfunction_ss_uLdR::synapse0x2c9f180() {
   return (neuron0x2c8a060()*0.369105);
}

double NNfunction_ss_uLdR::synapse0x2c9f1c0() {
   return (neuron0x2c8a3a0()*-0.141118);
}

double NNfunction_ss_uLdR::synapse0x2c9f200() {
   return (neuron0x2c8a6e0()*-0.899487);
}

double NNfunction_ss_uLdR::synapse0x2c9ec90() {
   return (neuron0x2c8aa20()*-0.00622377);
}

double NNfunction_ss_uLdR::synapse0x2c9ecd0() {
   return (neuron0x2c8af80()*-0.819308);
}

double NNfunction_ss_uLdR::synapse0x2c9f350() {
   return (neuron0x2c8b1a0()*-0.0483752);
}

double NNfunction_ss_uLdR::synapse0x2c9f390() {
   return (neuron0x2c8b4e0()*0.338865);
}

double NNfunction_ss_uLdR::synapse0x2c9f3d0() {
   return (neuron0x2c8b820()*-0.382189);
}

double NNfunction_ss_uLdR::synapse0x2c9f410() {
   return (neuron0x2c8bb60()*-1.01382);
}

double NNfunction_ss_uLdR::synapse0x2c9f450() {
   return (neuron0x2c8bea0()*-0.280094);
}

double NNfunction_ss_uLdR::synapse0x2c9f490() {
   return (neuron0x2c8c1e0()*0.462805);
}

double NNfunction_ss_uLdR::synapse0x2c9f810() {
   return (neuron0x2c87620()*7.64759e-05);
}

double NNfunction_ss_uLdR::synapse0x2c9f850() {
   return (neuron0x2c87960()*-0.158695);
}

double NNfunction_ss_uLdR::synapse0x2c9f890() {
   return (neuron0x2c87ca0()*-0.297096);
}

double NNfunction_ss_uLdR::synapse0x2c9f8d0() {
   return (neuron0x2c87fe0()*-0.522005);
}

double NNfunction_ss_uLdR::synapse0x2c9f910() {
   return (neuron0x2c88320()*-0.0322346);
}

double NNfunction_ss_uLdR::synapse0x2c9f950() {
   return (neuron0x2c88660()*0.290799);
}

double NNfunction_ss_uLdR::synapse0x2c9f990() {
   return (neuron0x2c889a0()*-0.0988762);
}

double NNfunction_ss_uLdR::synapse0x2c9f9d0() {
   return (neuron0x2c88ce0()*-0.187088);
}

double NNfunction_ss_uLdR::synapse0x2c9fa10() {
   return (neuron0x2c89020()*-0.128248);
}

double NNfunction_ss_uLdR::synapse0x2c9fa50() {
   return (neuron0x2c89360()*0.861904);
}

double NNfunction_ss_uLdR::synapse0x2c9fa90() {
   return (neuron0x2c896a0()*-0.467794);
}

double NNfunction_ss_uLdR::synapse0x2c9fad0() {
   return (neuron0x2c899e0()*-0.849588);
}

double NNfunction_ss_uLdR::synapse0x2c9fb10() {
   return (neuron0x2c89d20()*-1.03634);
}

double NNfunction_ss_uLdR::synapse0x2c9fb50() {
   return (neuron0x2c8a060()*-1.39892);
}

double NNfunction_ss_uLdR::synapse0x2c9fb90() {
   return (neuron0x2c8a3a0()*0.900582);
}

double NNfunction_ss_uLdR::synapse0x2c9fbd0() {
   return (neuron0x2c8a6e0()*-0.18303);
}

double NNfunction_ss_uLdR::synapse0x2c9f660() {
   return (neuron0x2c8aa20()*-0.279271);
}

double NNfunction_ss_uLdR::synapse0x2c9f6a0() {
   return (neuron0x2c8af80()*1.07562);
}

double NNfunction_ss_uLdR::synapse0x2c9fd20() {
   return (neuron0x2c8b1a0()*0.13248);
}

double NNfunction_ss_uLdR::synapse0x2c9fd60() {
   return (neuron0x2c8b4e0()*0.641828);
}

double NNfunction_ss_uLdR::synapse0x2c9fda0() {
   return (neuron0x2c8b820()*0.401555);
}

double NNfunction_ss_uLdR::synapse0x2c9fde0() {
   return (neuron0x2c8bb60()*-0.500109);
}

double NNfunction_ss_uLdR::synapse0x2c9fe20() {
   return (neuron0x2c8bea0()*-0.402407);
}

double NNfunction_ss_uLdR::synapse0x2c9fe60() {
   return (neuron0x2c8c1e0()*0.260953);
}

double NNfunction_ss_uLdR::synapse0x2ca01e0() {
   return (neuron0x2c87620()*0.152918);
}

double NNfunction_ss_uLdR::synapse0x2ca0220() {
   return (neuron0x2c87960()*0.200331);
}

double NNfunction_ss_uLdR::synapse0x2ca0260() {
   return (neuron0x2c87ca0()*0.331152);
}

double NNfunction_ss_uLdR::synapse0x2ca02a0() {
   return (neuron0x2c87fe0()*1.07264);
}

double NNfunction_ss_uLdR::synapse0x2ca02e0() {
   return (neuron0x2c88320()*-0.668978);
}

double NNfunction_ss_uLdR::synapse0x2ca0320() {
   return (neuron0x2c88660()*0.187877);
}

double NNfunction_ss_uLdR::synapse0x2ca0360() {
   return (neuron0x2c889a0()*-0.0448639);
}

double NNfunction_ss_uLdR::synapse0x2ca03a0() {
   return (neuron0x2c88ce0()*-0.296314);
}

double NNfunction_ss_uLdR::synapse0x2ca03e0() {
   return (neuron0x2c89020()*-0.12471);
}

double NNfunction_ss_uLdR::synapse0x2ca0420() {
   return (neuron0x2c89360()*-0.500383);
}

double NNfunction_ss_uLdR::synapse0x2ca0460() {
   return (neuron0x2c896a0()*0.0788975);
}

double NNfunction_ss_uLdR::synapse0x2ca04a0() {
   return (neuron0x2c899e0()*-0.249612);
}

double NNfunction_ss_uLdR::synapse0x2ca04e0() {
   return (neuron0x2c89d20()*0.577221);
}

double NNfunction_ss_uLdR::synapse0x2ca0520() {
   return (neuron0x2c8a060()*0.206198);
}

double NNfunction_ss_uLdR::synapse0x2ca0560() {
   return (neuron0x2c8a3a0()*0.170697);
}

double NNfunction_ss_uLdR::synapse0x2ca05a0() {
   return (neuron0x2c8a6e0()*0.586569);
}

double NNfunction_ss_uLdR::synapse0x2ca0030() {
   return (neuron0x2c8aa20()*0.255982);
}

double NNfunction_ss_uLdR::synapse0x2ca0070() {
   return (neuron0x2c8af80()*0.217448);
}

double NNfunction_ss_uLdR::synapse0x2ca06f0() {
   return (neuron0x2c8b1a0()*0.300373);
}

double NNfunction_ss_uLdR::synapse0x2ca0730() {
   return (neuron0x2c8b4e0()*0.582854);
}

double NNfunction_ss_uLdR::synapse0x2ca0770() {
   return (neuron0x2c8b820()*-0.545129);
}

double NNfunction_ss_uLdR::synapse0x2ca07b0() {
   return (neuron0x2c8bb60()*-0.462317);
}

double NNfunction_ss_uLdR::synapse0x2ca07f0() {
   return (neuron0x2c8bea0()*-0.0643805);
}

double NNfunction_ss_uLdR::synapse0x2ca0830() {
   return (neuron0x2c8c1e0()*0.31374);
}

double NNfunction_ss_uLdR::synapse0x2ca0bb0() {
   return (neuron0x2c87620()*0.0178822);
}

double NNfunction_ss_uLdR::synapse0x2ca0bf0() {
   return (neuron0x2c87960()*0.00319286);
}

double NNfunction_ss_uLdR::synapse0x2ca0c30() {
   return (neuron0x2c87ca0()*-0.00695692);
}

double NNfunction_ss_uLdR::synapse0x2ca0c70() {
   return (neuron0x2c87fe0()*0.0634987);
}

double NNfunction_ss_uLdR::synapse0x2ca0cb0() {
   return (neuron0x2c88320()*0.00560714);
}

double NNfunction_ss_uLdR::synapse0x2ca0cf0() {
   return (neuron0x2c88660()*0.00477818);
}

double NNfunction_ss_uLdR::synapse0x2ca0d30() {
   return (neuron0x2c889a0()*-0.00582792);
}

double NNfunction_ss_uLdR::synapse0x2ca0d70() {
   return (neuron0x2c88ce0()*-0.00751408);
}

double NNfunction_ss_uLdR::synapse0x2ca0db0() {
   return (neuron0x2c89020()*-0.00975696);
}

double NNfunction_ss_uLdR::synapse0x2ca0df0() {
   return (neuron0x2c89360()*0.00686379);
}

double NNfunction_ss_uLdR::synapse0x2ca0e30() {
   return (neuron0x2c896a0()*0.0389384);
}

double NNfunction_ss_uLdR::synapse0x2ca0e70() {
   return (neuron0x2c899e0()*-2.39241);
}

double NNfunction_ss_uLdR::synapse0x2ca0eb0() {
   return (neuron0x2c89d20()*-0.00332444);
}

double NNfunction_ss_uLdR::synapse0x2ca0ef0() {
   return (neuron0x2c8a060()*-0.0167216);
}

double NNfunction_ss_uLdR::synapse0x2ca0f30() {
   return (neuron0x2c8a3a0()*-0.0479977);
}

double NNfunction_ss_uLdR::synapse0x2ca0f70() {
   return (neuron0x2c8a6e0()*-0.00964544);
}

double NNfunction_ss_uLdR::synapse0x2ca0a00() {
   return (neuron0x2c8aa20()*-0.0096252);
}

double NNfunction_ss_uLdR::synapse0x2ca0a40() {
   return (neuron0x2c8af80()*0.0804982);
}

double NNfunction_ss_uLdR::synapse0x2ca10c0() {
   return (neuron0x2c8b1a0()*0.00899677);
}

double NNfunction_ss_uLdR::synapse0x2ca1100() {
   return (neuron0x2c8b4e0()*0.028369);
}

double NNfunction_ss_uLdR::synapse0x2ca1140() {
   return (neuron0x2c8b820()*0.0162177);
}

double NNfunction_ss_uLdR::synapse0x2ca1180() {
   return (neuron0x2c8bb60()*-0.00788553);
}

double NNfunction_ss_uLdR::synapse0x2ca11c0() {
   return (neuron0x2c8bea0()*-0.0119701);
}

double NNfunction_ss_uLdR::synapse0x2ca1200() {
   return (neuron0x2c8c1e0()*-0.00589915);
}

double NNfunction_ss_uLdR::synapse0x2ca1580() {
   return (neuron0x2c87620()*-0.0634179);
}

double NNfunction_ss_uLdR::synapse0x2ca15c0() {
   return (neuron0x2c87960()*0.117033);
}

double NNfunction_ss_uLdR::synapse0x2ca1600() {
   return (neuron0x2c87ca0()*0.00111084);
}

double NNfunction_ss_uLdR::synapse0x2ca1640() {
   return (neuron0x2c87fe0()*4.28654);
}

double NNfunction_ss_uLdR::synapse0x2ca1680() {
   return (neuron0x2c88320()*-0.0411546);
}

double NNfunction_ss_uLdR::synapse0x2ca16c0() {
   return (neuron0x2c88660()*-0.0267572);
}

double NNfunction_ss_uLdR::synapse0x2ca1700() {
   return (neuron0x2c889a0()*-0.0130705);
}

double NNfunction_ss_uLdR::synapse0x2ca1740() {
   return (neuron0x2c88ce0()*-0.053083);
}

double NNfunction_ss_uLdR::synapse0x2ca1780() {
   return (neuron0x2c89020()*0.0460188);
}

double NNfunction_ss_uLdR::synapse0x2ca17c0() {
   return (neuron0x2c89360()*0.0705321);
}

double NNfunction_ss_uLdR::synapse0x2ca1800() {
   return (neuron0x2c896a0()*-0.0492267);
}

double NNfunction_ss_uLdR::synapse0x2ca1840() {
   return (neuron0x2c899e0()*-0.428481);
}

double NNfunction_ss_uLdR::synapse0x2ca1880() {
   return (neuron0x2c89d20()*-0.0195951);
}

double NNfunction_ss_uLdR::synapse0x2ca18c0() {
   return (neuron0x2c8a060()*0.0851665);
}

double NNfunction_ss_uLdR::synapse0x2ca1900() {
   return (neuron0x2c8a3a0()*-0.119717);
}

double NNfunction_ss_uLdR::synapse0x2ca1940() {
   return (neuron0x2c8a6e0()*-0.108401);
}

double NNfunction_ss_uLdR::synapse0x2ca13d0() {
   return (neuron0x2c8aa20()*-0.109692);
}

double NNfunction_ss_uLdR::synapse0x2ca1410() {
   return (neuron0x2c8af80()*-0.332252);
}

double NNfunction_ss_uLdR::synapse0x2ca1a90() {
   return (neuron0x2c8b1a0()*-0.0726569);
}

double NNfunction_ss_uLdR::synapse0x2ca1ad0() {
   return (neuron0x2c8b4e0()*-0.00276439);
}

double NNfunction_ss_uLdR::synapse0x2ca1b10() {
   return (neuron0x2c8b820()*-0.0497395);
}

double NNfunction_ss_uLdR::synapse0x2ca1b50() {
   return (neuron0x2c8bb60()*-0.0495138);
}

double NNfunction_ss_uLdR::synapse0x2ca1b90() {
   return (neuron0x2c8bea0()*-0.026996);
}

double NNfunction_ss_uLdR::synapse0x2ca1bd0() {
   return (neuron0x2c8c1e0()*-0.00790586);
}

double NNfunction_ss_uLdR::synapse0x2ca1f50() {
   return (neuron0x2c87620()*0.0162187);
}

double NNfunction_ss_uLdR::synapse0x2c96520() {
   return (neuron0x2c87960()*0.477972);
}

double NNfunction_ss_uLdR::synapse0x2c96560() {
   return (neuron0x2c87ca0()*0.258907);
}

double NNfunction_ss_uLdR::synapse0x2c965a0() {
   return (neuron0x2c87fe0()*-0.53702);
}

double NNfunction_ss_uLdR::synapse0x2c967f0() {
   return (neuron0x2c88320()*-0.200507);
}

double NNfunction_ss_uLdR::synapse0x2c96830() {
   return (neuron0x2c88660()*0.101356);
}

double NNfunction_ss_uLdR::synapse0x2c96870() {
   return (neuron0x2c889a0()*0.0519239);
}

double NNfunction_ss_uLdR::synapse0x2c96ac0() {
   return (neuron0x2c88ce0()*0.133713);
}

double NNfunction_ss_uLdR::synapse0x2c96b00() {
   return (neuron0x2c89020()*-0.161413);
}

double NNfunction_ss_uLdR::synapse0x2c96d50() {
   return (neuron0x2c89360()*0.0615443);
}

double NNfunction_ss_uLdR::synapse0x2c96d90() {
   return (neuron0x2c896a0()*0.0825384);
}

double NNfunction_ss_uLdR::synapse0x2c96dd0() {
   return (neuron0x2c899e0()*-0.315897);
}

double NNfunction_ss_uLdR::synapse0x2c97020() {
   return (neuron0x2c89d20()*0.343616);
}

double NNfunction_ss_uLdR::synapse0x2c97060() {
   return (neuron0x2c8a060()*0.125219);
}

double NNfunction_ss_uLdR::synapse0x2c972b0() {
   return (neuron0x2c8a3a0()*1.12981);
}

double NNfunction_ss_uLdR::synapse0x2c972f0() {
   return (neuron0x2c8a6e0()*0.581295);
}

double NNfunction_ss_uLdR::synapse0x2ca1da0() {
   return (neuron0x2c8aa20()*-0.00989661);
}

double NNfunction_ss_uLdR::synapse0x2ca1de0() {
   return (neuron0x2c8af80()*-0.336406);
}

double NNfunction_ss_uLdR::synapse0x2c97440() {
   return (neuron0x2c8b1a0()*0.493309);
}

double NNfunction_ss_uLdR::synapse0x2c97950() {
   return (neuron0x2c8b4e0()*-0.143265);
}

double NNfunction_ss_uLdR::synapse0x2c97990() {
   return (neuron0x2c8b820()*-0.198364);
}

double NNfunction_ss_uLdR::synapse0x2c979d0() {
   return (neuron0x2c8bb60()*-0.217262);
}

double NNfunction_ss_uLdR::synapse0x2c97c20() {
   return (neuron0x2c8bea0()*-0.0320474);
}

double NNfunction_ss_uLdR::synapse0x2c97c60() {
   return (neuron0x2c8c1e0()*-0.0974125);
}

double NNfunction_ss_uLdR::synapse0x2c97510() {
   return (neuron0x2c87620()*0.0295469);
}

double NNfunction_ss_uLdR::synapse0x2c97550() {
   return (neuron0x2c87960()*0.0251973);
}

double NNfunction_ss_uLdR::synapse0x2c97590() {
   return (neuron0x2c87ca0()*0.0365626);
}

double NNfunction_ss_uLdR::synapse0x2c975d0() {
   return (neuron0x2c87fe0()*-4.03099);
}

double NNfunction_ss_uLdR::synapse0x2c97f50() {
   return (neuron0x2c88320()*0.0105152);
}

double NNfunction_ss_uLdR::synapse0x2ca42a0() {
   return (neuron0x2c88660()*0.00416348);
}

double NNfunction_ss_uLdR::synapse0x2ca42e0() {
   return (neuron0x2c889a0()*-0.0156014);
}

double NNfunction_ss_uLdR::synapse0x2ca4320() {
   return (neuron0x2c88ce0()*0.00641559);
}

double NNfunction_ss_uLdR::synapse0x2ca4360() {
   return (neuron0x2c89020()*-0.0172589);
}

double NNfunction_ss_uLdR::synapse0x2ca43a0() {
   return (neuron0x2c89360()*-0.00176097);
}

double NNfunction_ss_uLdR::synapse0x2ca43e0() {
   return (neuron0x2c896a0()*-0.0405176);
}

double NNfunction_ss_uLdR::synapse0x2ca4420() {
   return (neuron0x2c899e0()*-0.507052);
}

double NNfunction_ss_uLdR::synapse0x2ca4460() {
   return (neuron0x2c89d20()*-0.0975426);
}

double NNfunction_ss_uLdR::synapse0x2ca44a0() {
   return (neuron0x2c8a060()*-0.0162225);
}

double NNfunction_ss_uLdR::synapse0x2ca44e0() {
   return (neuron0x2c8a3a0()*-0.00900657);
}

double NNfunction_ss_uLdR::synapse0x2ca4520() {
   return (neuron0x2c8a6e0()*-0.0191903);
}

double NNfunction_ss_uLdR::synapse0x2c97e30() {
   return (neuron0x2c8aa20()*0.0414118);
}

double NNfunction_ss_uLdR::synapse0x2c97e70() {
   return (neuron0x2c8af80()*-0.634677);
}

double NNfunction_ss_uLdR::synapse0x2ca4670() {
   return (neuron0x2c8b1a0()*-0.069129);
}

double NNfunction_ss_uLdR::synapse0x2ca46b0() {
   return (neuron0x2c8b4e0()*-0.0336908);
}

double NNfunction_ss_uLdR::synapse0x2ca46f0() {
   return (neuron0x2c8b820()*0.0115909);
}

double NNfunction_ss_uLdR::synapse0x2ca4730() {
   return (neuron0x2c8bb60()*0.0178644);
}

double NNfunction_ss_uLdR::synapse0x2ca4770() {
   return (neuron0x2c8bea0()*0.0168395);
}

double NNfunction_ss_uLdR::synapse0x2ca47b0() {
   return (neuron0x2c8c1e0()*-0.000839575);
}

double NNfunction_ss_uLdR::synapse0x2ca4b30() {
   return (neuron0x2c87620()*0.255739);
}

double NNfunction_ss_uLdR::synapse0x2ca4b70() {
   return (neuron0x2c87960()*-0.151923);
}

double NNfunction_ss_uLdR::synapse0x2ca4bb0() {
   return (neuron0x2c87ca0()*0.584605);
}

double NNfunction_ss_uLdR::synapse0x2ca4bf0() {
   return (neuron0x2c87fe0()*0.80759);
}

double NNfunction_ss_uLdR::synapse0x2ca4c30() {
   return (neuron0x2c88320()*0.558231);
}

double NNfunction_ss_uLdR::synapse0x2ca4c70() {
   return (neuron0x2c88660()*-0.0248603);
}

double NNfunction_ss_uLdR::synapse0x2ca4cb0() {
   return (neuron0x2c889a0()*-0.106494);
}

double NNfunction_ss_uLdR::synapse0x2ca4cf0() {
   return (neuron0x2c88ce0()*-0.466204);
}

double NNfunction_ss_uLdR::synapse0x2ca4d30() {
   return (neuron0x2c89020()*-0.623878);
}

double NNfunction_ss_uLdR::synapse0x2ca4d70() {
   return (neuron0x2c89360()*-0.10241);
}

double NNfunction_ss_uLdR::synapse0x2ca4db0() {
   return (neuron0x2c896a0()*-0.0860684);
}

double NNfunction_ss_uLdR::synapse0x2ca4df0() {
   return (neuron0x2c899e0()*0.298741);
}

double NNfunction_ss_uLdR::synapse0x2ca4e30() {
   return (neuron0x2c89d20()*-0.471716);
}

double NNfunction_ss_uLdR::synapse0x2ca4e70() {
   return (neuron0x2c8a060()*-0.242321);
}

double NNfunction_ss_uLdR::synapse0x2ca4eb0() {
   return (neuron0x2c8a3a0()*0.285512);
}

double NNfunction_ss_uLdR::synapse0x2ca4ef0() {
   return (neuron0x2c8a6e0()*0.628655);
}

double NNfunction_ss_uLdR::synapse0x2ca4980() {
   return (neuron0x2c8aa20()*-0.0903936);
}

double NNfunction_ss_uLdR::synapse0x2ca49c0() {
   return (neuron0x2c8af80()*0.122795);
}

double NNfunction_ss_uLdR::synapse0x2ca5040() {
   return (neuron0x2c8b1a0()*0.546722);
}

double NNfunction_ss_uLdR::synapse0x2ca5080() {
   return (neuron0x2c8b4e0()*-0.407495);
}

double NNfunction_ss_uLdR::synapse0x2ca50c0() {
   return (neuron0x2c8b820()*0.173258);
}

double NNfunction_ss_uLdR::synapse0x2ca5100() {
   return (neuron0x2c8bb60()*-0.0729071);
}

double NNfunction_ss_uLdR::synapse0x2ca5140() {
   return (neuron0x2c8bea0()*0.313066);
}

double NNfunction_ss_uLdR::synapse0x2ca5180() {
   return (neuron0x2c8c1e0()*0.167488);
}

double NNfunction_ss_uLdR::synapse0x2ca5500() {
   return (neuron0x2c87620()*0.01327);
}

double NNfunction_ss_uLdR::synapse0x2ca5540() {
   return (neuron0x2c87960()*0.0113189);
}

double NNfunction_ss_uLdR::synapse0x2ca5580() {
   return (neuron0x2c87ca0()*-0.00543571);
}

double NNfunction_ss_uLdR::synapse0x2ca55c0() {
   return (neuron0x2c87fe0()*-1.28318);
}

double NNfunction_ss_uLdR::synapse0x2ca5600() {
   return (neuron0x2c88320()*-0.0219108);
}

double NNfunction_ss_uLdR::synapse0x2ca5640() {
   return (neuron0x2c88660()*-0.0392084);
}

double NNfunction_ss_uLdR::synapse0x2ca5680() {
   return (neuron0x2c889a0()*-0.00368954);
}

double NNfunction_ss_uLdR::synapse0x2ca56c0() {
   return (neuron0x2c88ce0()*-0.032492);
}

double NNfunction_ss_uLdR::synapse0x2ca5700() {
   return (neuron0x2c89020()*0.0226208);
}

double NNfunction_ss_uLdR::synapse0x2ca5740() {
   return (neuron0x2c89360()*0.0354255);
}

double NNfunction_ss_uLdR::synapse0x2ca5780() {
   return (neuron0x2c896a0()*-0.00842225);
}

double NNfunction_ss_uLdR::synapse0x2ca57c0() {
   return (neuron0x2c899e0()*-0.222459);
}

double NNfunction_ss_uLdR::synapse0x2ca5800() {
   return (neuron0x2c89d20()*-0.111318);
}

double NNfunction_ss_uLdR::synapse0x2ca5840() {
   return (neuron0x2c8a060()*0.0495502);
}

double NNfunction_ss_uLdR::synapse0x2ca5880() {
   return (neuron0x2c8a3a0()*-0.0655168);
}

double NNfunction_ss_uLdR::synapse0x2ca58c0() {
   return (neuron0x2c8a6e0()*-0.0454077);
}

double NNfunction_ss_uLdR::synapse0x2ca5350() {
   return (neuron0x2c8aa20()*0.016978);
}

double NNfunction_ss_uLdR::synapse0x2ca5390() {
   return (neuron0x2c8af80()*-0.414133);
}

double NNfunction_ss_uLdR::synapse0x2ca5a10() {
   return (neuron0x2c8b1a0()*-0.0213046);
}

double NNfunction_ss_uLdR::synapse0x2ca5a50() {
   return (neuron0x2c8b4e0()*-0.0143856);
}

double NNfunction_ss_uLdR::synapse0x2ca5a90() {
   return (neuron0x2c8b820()*-0.0740471);
}

double NNfunction_ss_uLdR::synapse0x2ca5ad0() {
   return (neuron0x2c8bb60()*0.00527828);
}

double NNfunction_ss_uLdR::synapse0x2ca5b10() {
   return (neuron0x2c8bea0()*-0.0122189);
}

double NNfunction_ss_uLdR::synapse0x2ca5b50() {
   return (neuron0x2c8c1e0()*0.00101756);
}

double NNfunction_ss_uLdR::synapse0x2ca5ed0() {
   return (neuron0x2c87620()*0.015253);
}

double NNfunction_ss_uLdR::synapse0x2ca5f10() {
   return (neuron0x2c87960()*0.0106325);
}

double NNfunction_ss_uLdR::synapse0x2ca5f50() {
   return (neuron0x2c87ca0()*-0.0236073);
}

double NNfunction_ss_uLdR::synapse0x2ca5f90() {
   return (neuron0x2c87fe0()*0.063956);
}

double NNfunction_ss_uLdR::synapse0x2ca5fd0() {
   return (neuron0x2c88320()*-0.00340939);
}

double NNfunction_ss_uLdR::synapse0x2ca6010() {
   return (neuron0x2c88660()*-0.00123789);
}

double NNfunction_ss_uLdR::synapse0x2ca6050() {
   return (neuron0x2c889a0()*-0.013169);
}

double NNfunction_ss_uLdR::synapse0x2ca6090() {
   return (neuron0x2c88ce0()*-0.00613761);
}

double NNfunction_ss_uLdR::synapse0x2ca60d0() {
   return (neuron0x2c89020()*-0.0120791);
}

double NNfunction_ss_uLdR::synapse0x2ca6110() {
   return (neuron0x2c89360()*0.00705364);
}

double NNfunction_ss_uLdR::synapse0x2ca6150() {
   return (neuron0x2c896a0()*0.0113252);
}

double NNfunction_ss_uLdR::synapse0x2ca6190() {
   return (neuron0x2c899e0()*-1.10232);
}

double NNfunction_ss_uLdR::synapse0x2ca61d0() {
   return (neuron0x2c89d20()*0.00961336);
}

double NNfunction_ss_uLdR::synapse0x2ca6210() {
   return (neuron0x2c8a060()*0.00940586);
}

double NNfunction_ss_uLdR::synapse0x2ca6250() {
   return (neuron0x2c8a3a0()*-0.00926672);
}

double NNfunction_ss_uLdR::synapse0x2ca6290() {
   return (neuron0x2c8a6e0()*0.00469002);
}

double NNfunction_ss_uLdR::synapse0x2ca5d20() {
   return (neuron0x2c8aa20()*0.00521402);
}

double NNfunction_ss_uLdR::synapse0x2ca5d60() {
   return (neuron0x2c8af80()*0.647936);
}

double NNfunction_ss_uLdR::synapse0x2ca63e0() {
   return (neuron0x2c8b1a0()*0.0149647);
}

double NNfunction_ss_uLdR::synapse0x2ca6420() {
   return (neuron0x2c8b4e0()*0.0127756);
}

double NNfunction_ss_uLdR::synapse0x2ca6460() {
   return (neuron0x2c8b820()*-0.000111532);
}

double NNfunction_ss_uLdR::synapse0x2ca64a0() {
   return (neuron0x2c8bb60()*-0.00866412);
}

double NNfunction_ss_uLdR::synapse0x2ca64e0() {
   return (neuron0x2c8bea0()*-0.00414863);
}

double NNfunction_ss_uLdR::synapse0x2ca6520() {
   return (neuron0x2c8c1e0()*0.0042814);
}

double NNfunction_ss_uLdR::synapse0x2ca68a0() {
   return (neuron0x2c87620()*0.38193);
}

double NNfunction_ss_uLdR::synapse0x2ca68e0() {
   return (neuron0x2c87960()*0.469926);
}

double NNfunction_ss_uLdR::synapse0x2ca6920() {
   return (neuron0x2c87ca0()*0.022873);
}

double NNfunction_ss_uLdR::synapse0x2ca6960() {
   return (neuron0x2c87fe0()*0.0391937);
}

double NNfunction_ss_uLdR::synapse0x2ca69a0() {
   return (neuron0x2c88320()*0.121669);
}

double NNfunction_ss_uLdR::synapse0x2ca69e0() {
   return (neuron0x2c88660()*-0.762524);
}

double NNfunction_ss_uLdR::synapse0x2ca6a20() {
   return (neuron0x2c889a0()*0.124616);
}

double NNfunction_ss_uLdR::synapse0x2ca6a60() {
   return (neuron0x2c88ce0()*0.501652);
}

double NNfunction_ss_uLdR::synapse0x2ca6aa0() {
   return (neuron0x2c89020()*0.576072);
}

double NNfunction_ss_uLdR::synapse0x2ca6ae0() {
   return (neuron0x2c89360()*-0.819039);
}

double NNfunction_ss_uLdR::synapse0x2ca6b20() {
   return (neuron0x2c896a0()*0.263217);
}

double NNfunction_ss_uLdR::synapse0x2ca6b60() {
   return (neuron0x2c899e0()*-0.882583);
}

double NNfunction_ss_uLdR::synapse0x2ca6ba0() {
   return (neuron0x2c89d20()*-1.17372);
}

double NNfunction_ss_uLdR::synapse0x2ca6be0() {
   return (neuron0x2c8a060()*0.212817);
}

double NNfunction_ss_uLdR::synapse0x2ca6c20() {
   return (neuron0x2c8a3a0()*-0.898414);
}

double NNfunction_ss_uLdR::synapse0x2ca6c60() {
   return (neuron0x2c8a6e0()*-1.43938);
}

double NNfunction_ss_uLdR::synapse0x2ca66f0() {
   return (neuron0x2c8aa20()*0.203043);
}

double NNfunction_ss_uLdR::synapse0x2ca6730() {
   return (neuron0x2c8af80()*-0.128677);
}

double NNfunction_ss_uLdR::synapse0x2ca6db0() {
   return (neuron0x2c8b1a0()*-0.394713);
}

double NNfunction_ss_uLdR::synapse0x2ca6df0() {
   return (neuron0x2c8b4e0()*0.16869);
}

double NNfunction_ss_uLdR::synapse0x2ca6e30() {
   return (neuron0x2c8b820()*-0.117419);
}

double NNfunction_ss_uLdR::synapse0x2ca6e70() {
   return (neuron0x2c8bb60()*-0.147064);
}

double NNfunction_ss_uLdR::synapse0x2ca6eb0() {
   return (neuron0x2c8bea0()*-0.175983);
}

double NNfunction_ss_uLdR::synapse0x2ca6ef0() {
   return (neuron0x2c8c1e0()*0.713221);
}

double NNfunction_ss_uLdR::synapse0x2ca7270() {
   return (neuron0x2c87620()*0.397755);
}

double NNfunction_ss_uLdR::synapse0x2ca72b0() {
   return (neuron0x2c87960()*0.170745);
}

double NNfunction_ss_uLdR::synapse0x2ca72f0() {
   return (neuron0x2c87ca0()*-0.102673);
}

double NNfunction_ss_uLdR::synapse0x2ca7330() {
   return (neuron0x2c87fe0()*-1.00502);
}

double NNfunction_ss_uLdR::synapse0x2ca7370() {
   return (neuron0x2c88320()*0.346484);
}

double NNfunction_ss_uLdR::synapse0x2ca73b0() {
   return (neuron0x2c88660()*0.0508478);
}

double NNfunction_ss_uLdR::synapse0x2ca73f0() {
   return (neuron0x2c889a0()*-0.730656);
}

double NNfunction_ss_uLdR::synapse0x2ca7430() {
   return (neuron0x2c88ce0()*0.126028);
}

double NNfunction_ss_uLdR::synapse0x2ca7470() {
   return (neuron0x2c89020()*0.189776);
}

double NNfunction_ss_uLdR::synapse0x2ca74b0() {
   return (neuron0x2c89360()*-0.736836);
}

double NNfunction_ss_uLdR::synapse0x2ca74f0() {
   return (neuron0x2c896a0()*0.116019);
}

double NNfunction_ss_uLdR::synapse0x2ca7530() {
   return (neuron0x2c899e0()*-0.0519317);
}

double NNfunction_ss_uLdR::synapse0x2ca7570() {
   return (neuron0x2c89d20()*0.821246);
}

double NNfunction_ss_uLdR::synapse0x2ca75b0() {
   return (neuron0x2c8a060()*-0.55794);
}

double NNfunction_ss_uLdR::synapse0x2ca75f0() {
   return (neuron0x2c8a3a0()*-0.691391);
}

double NNfunction_ss_uLdR::synapse0x2ca7630() {
   return (neuron0x2c8a6e0()*0.156337);
}

double NNfunction_ss_uLdR::synapse0x2ca70c0() {
   return (neuron0x2c8aa20()*-0.271067);
}

double NNfunction_ss_uLdR::synapse0x2ca7100() {
   return (neuron0x2c8af80()*0.549916);
}

double NNfunction_ss_uLdR::synapse0x2ca7780() {
   return (neuron0x2c8b1a0()*0.519144);
}

double NNfunction_ss_uLdR::synapse0x2ca77c0() {
   return (neuron0x2c8b4e0()*0.329866);
}

double NNfunction_ss_uLdR::synapse0x2ca7800() {
   return (neuron0x2c8b820()*-0.360813);
}

double NNfunction_ss_uLdR::synapse0x2ca7840() {
   return (neuron0x2c8bb60()*-0.297923);
}

double NNfunction_ss_uLdR::synapse0x2ca7880() {
   return (neuron0x2c8bea0()*0.0968176);
}

double NNfunction_ss_uLdR::synapse0x2ca78c0() {
   return (neuron0x2c8c1e0()*0.0490997);
}

double NNfunction_ss_uLdR::synapse0x2ca7c40() {
   return (neuron0x2c87620()*-1.05077);
}

double NNfunction_ss_uLdR::synapse0x2ca7c80() {
   return (neuron0x2c87960()*-0.311769);
}

double NNfunction_ss_uLdR::synapse0x2ca7cc0() {
   return (neuron0x2c87ca0()*0.118892);
}

double NNfunction_ss_uLdR::synapse0x2ca7d00() {
   return (neuron0x2c87fe0()*-0.102172);
}

double NNfunction_ss_uLdR::synapse0x2ca7d40() {
   return (neuron0x2c88320()*-0.013458);
}

double NNfunction_ss_uLdR::synapse0x2ca7d80() {
   return (neuron0x2c88660()*0.196354);
}

double NNfunction_ss_uLdR::synapse0x2ca7dc0() {
   return (neuron0x2c889a0()*0.318312);
}

double NNfunction_ss_uLdR::synapse0x2ca7e00() {
   return (neuron0x2c88ce0()*-0.17721);
}

double NNfunction_ss_uLdR::synapse0x2ca7e40() {
   return (neuron0x2c89020()*-0.0494321);
}

double NNfunction_ss_uLdR::synapse0x2ca7e80() {
   return (neuron0x2c89360()*0.0164264);
}

double NNfunction_ss_uLdR::synapse0x2ca7ec0() {
   return (neuron0x2c896a0()*-0.347532);
}

double NNfunction_ss_uLdR::synapse0x2ca7f00() {
   return (neuron0x2c899e0()*0.170485);
}

double NNfunction_ss_uLdR::synapse0x2ca7f40() {
   return (neuron0x2c89d20()*0.353349);
}

double NNfunction_ss_uLdR::synapse0x2ca7f80() {
   return (neuron0x2c8a060()*-0.479963);
}

double NNfunction_ss_uLdR::synapse0x2ca7fc0() {
   return (neuron0x2c8a3a0()*-0.372583);
}

double NNfunction_ss_uLdR::synapse0x2ca8000() {
   return (neuron0x2c8a6e0()*0.422274);
}

double NNfunction_ss_uLdR::synapse0x2ca7a90() {
   return (neuron0x2c8aa20()*-0.408687);
}

double NNfunction_ss_uLdR::synapse0x2ca7ad0() {
   return (neuron0x2c8af80()*-0.348782);
}

double NNfunction_ss_uLdR::synapse0x2ca8150() {
   return (neuron0x2c8b1a0()*0.673562);
}

double NNfunction_ss_uLdR::synapse0x2ca8190() {
   return (neuron0x2c8b4e0()*0.212566);
}

double NNfunction_ss_uLdR::synapse0x2ca81d0() {
   return (neuron0x2c8b820()*0.599753);
}

double NNfunction_ss_uLdR::synapse0x2ca8210() {
   return (neuron0x2c8bb60()*-0.439691);
}

double NNfunction_ss_uLdR::synapse0x2ca8250() {
   return (neuron0x2c8bea0()*-0.075726);
}

double NNfunction_ss_uLdR::synapse0x2ca8290() {
   return (neuron0x2c8c1e0()*-0.989209);
}

double NNfunction_ss_uLdR::synapse0x2ca8610() {
   return (neuron0x2c87620()*-0.223391);
}

double NNfunction_ss_uLdR::synapse0x2ca8650() {
   return (neuron0x2c87960()*-0.0395526);
}

double NNfunction_ss_uLdR::synapse0x2ca8690() {
   return (neuron0x2c87ca0()*-0.644197);
}

double NNfunction_ss_uLdR::synapse0x2ca86d0() {
   return (neuron0x2c87fe0()*1.67292);
}

double NNfunction_ss_uLdR::synapse0x2ca8710() {
   return (neuron0x2c88320()*0.0747203);
}

double NNfunction_ss_uLdR::synapse0x2ca8750() {
   return (neuron0x2c88660()*-0.484798);
}

double NNfunction_ss_uLdR::synapse0x2ca8790() {
   return (neuron0x2c889a0()*-0.591635);
}

double NNfunction_ss_uLdR::synapse0x2ca87d0() {
   return (neuron0x2c88ce0()*0.469204);
}

double NNfunction_ss_uLdR::synapse0x2ca8810() {
   return (neuron0x2c89020()*-0.137666);
}

double NNfunction_ss_uLdR::synapse0x2ca8850() {
   return (neuron0x2c89360()*-0.22322);
}

double NNfunction_ss_uLdR::synapse0x2ca8890() {
   return (neuron0x2c896a0()*0.194816);
}

double NNfunction_ss_uLdR::synapse0x2ca88d0() {
   return (neuron0x2c899e0()*-0.211809);
}

double NNfunction_ss_uLdR::synapse0x2ca8910() {
   return (neuron0x2c89d20()*0.238494);
}

double NNfunction_ss_uLdR::synapse0x2ca8950() {
   return (neuron0x2c8a060()*-0.419602);
}

double NNfunction_ss_uLdR::synapse0x2ca8990() {
   return (neuron0x2c8a3a0()*0.161829);
}

double NNfunction_ss_uLdR::synapse0x2ca89d0() {
   return (neuron0x2c8a6e0()*0.13786);
}

double NNfunction_ss_uLdR::synapse0x2ca8460() {
   return (neuron0x2c8aa20()*0.130776);
}

double NNfunction_ss_uLdR::synapse0x2ca84a0() {
   return (neuron0x2c8af80()*-0.4745);
}

double NNfunction_ss_uLdR::synapse0x2ca8b20() {
   return (neuron0x2c8b1a0()*-0.314434);
}

double NNfunction_ss_uLdR::synapse0x2ca8b60() {
   return (neuron0x2c8b4e0()*-0.619121);
}

double NNfunction_ss_uLdR::synapse0x2ca8ba0() {
   return (neuron0x2c8b820()*-0.00680191);
}

double NNfunction_ss_uLdR::synapse0x2ca8be0() {
   return (neuron0x2c8bb60()*0.189138);
}

double NNfunction_ss_uLdR::synapse0x2ca8c20() {
   return (neuron0x2c8bea0()*-0.0546191);
}

double NNfunction_ss_uLdR::synapse0x2ca8c60() {
   return (neuron0x2c8c1e0()*-0.0387437);
}

double NNfunction_ss_uLdR::synapse0x2c91710() {
   return (neuron0x2c87620()*0.0257767);
}

double NNfunction_ss_uLdR::synapse0x2c91750() {
   return (neuron0x2c87960()*0.376054);
}

double NNfunction_ss_uLdR::synapse0x2c91790() {
   return (neuron0x2c87ca0()*-2.03054);
}

double NNfunction_ss_uLdR::synapse0x2c917d0() {
   return (neuron0x2c87fe0()*0.0234492);
}

double NNfunction_ss_uLdR::synapse0x2c91810() {
   return (neuron0x2c88320()*0.0379587);
}

double NNfunction_ss_uLdR::synapse0x2c91850() {
   return (neuron0x2c88660()*0.230088);
}

double NNfunction_ss_uLdR::synapse0x2c91890() {
   return (neuron0x2c889a0()*0.0377071);
}

double NNfunction_ss_uLdR::synapse0x2c918d0() {
   return (neuron0x2c88ce0()*0.0570012);
}

double NNfunction_ss_uLdR::synapse0x2ca93f0() {
   return (neuron0x2c89020()*-0.278625);
}

double NNfunction_ss_uLdR::synapse0x2ca9430() {
   return (neuron0x2c89360()*0.0707714);
}

double NNfunction_ss_uLdR::synapse0x2ca9470() {
   return (neuron0x2c896a0()*0.183195);
}

double NNfunction_ss_uLdR::synapse0x2ca94b0() {
   return (neuron0x2c899e0()*0.284566);
}

double NNfunction_ss_uLdR::synapse0x2ca94f0() {
   return (neuron0x2c89d20()*-0.0806411);
}

double NNfunction_ss_uLdR::synapse0x2ca9530() {
   return (neuron0x2c8a060()*0.16735);
}

double NNfunction_ss_uLdR::synapse0x2ca9570() {
   return (neuron0x2c8a3a0()*0.266603);
}

double NNfunction_ss_uLdR::synapse0x2ca95b0() {
   return (neuron0x2c8a6e0()*-0.0404565);
}

double NNfunction_ss_uLdR::synapse0x2ca8e30() {
   return (neuron0x2c8aa20()*-0.139836);
}

double NNfunction_ss_uLdR::synapse0x2ca8e70() {
   return (neuron0x2c8af80()*-0.046745);
}

double NNfunction_ss_uLdR::synapse0x2ca9700() {
   return (neuron0x2c8b1a0()*0.251851);
}

double NNfunction_ss_uLdR::synapse0x2ca9740() {
   return (neuron0x2c8b4e0()*-0.0597832);
}

double NNfunction_ss_uLdR::synapse0x2ca9780() {
   return (neuron0x2c8b820()*-0.066565);
}

double NNfunction_ss_uLdR::synapse0x2ca97c0() {
   return (neuron0x2c8bb60()*-0.188104);
}

double NNfunction_ss_uLdR::synapse0x2ca9800() {
   return (neuron0x2c8bea0()*-0.00706682);
}

double NNfunction_ss_uLdR::synapse0x2ca9840() {
   return (neuron0x2c8c1e0()*0.104571);
}

double NNfunction_ss_uLdR::synapse0x2ca9bc0() {
   return (neuron0x2c87620()*-0.00228155);
}

double NNfunction_ss_uLdR::synapse0x2ca9c00() {
   return (neuron0x2c87960()*0.0353511);
}

double NNfunction_ss_uLdR::synapse0x2ca9c40() {
   return (neuron0x2c87ca0()*0.0586795);
}

double NNfunction_ss_uLdR::synapse0x2ca9c80() {
   return (neuron0x2c87fe0()*-3.58531);
}

double NNfunction_ss_uLdR::synapse0x2ca9cc0() {
   return (neuron0x2c88320()*-0.0160199);
}

double NNfunction_ss_uLdR::synapse0x2ca9d00() {
   return (neuron0x2c88660()*0.00875173);
}

double NNfunction_ss_uLdR::synapse0x2ca9d40() {
   return (neuron0x2c889a0()*-0.0120017);
}

double NNfunction_ss_uLdR::synapse0x2ca9d80() {
   return (neuron0x2c88ce0()*0.0153841);
}

double NNfunction_ss_uLdR::synapse0x2ca9dc0() {
   return (neuron0x2c89020()*-0.0170483);
}

double NNfunction_ss_uLdR::synapse0x2ca9e00() {
   return (neuron0x2c89360()*-0.0104337);
}

double NNfunction_ss_uLdR::synapse0x2ca9e40() {
   return (neuron0x2c896a0()*-0.046929);
}

double NNfunction_ss_uLdR::synapse0x2ca9e80() {
   return (neuron0x2c899e0()*-0.245453);
}

double NNfunction_ss_uLdR::synapse0x2ca9ec0() {
   return (neuron0x2c89d20()*-0.00556454);
}

double NNfunction_ss_uLdR::synapse0x2ca9f00() {
   return (neuron0x2c8a060()*-0.0174316);
}

double NNfunction_ss_uLdR::synapse0x2ca9f40() {
   return (neuron0x2c8a3a0()*0.0302285);
}

double NNfunction_ss_uLdR::synapse0x2ca9f80() {
   return (neuron0x2c8a6e0()*0.00891078);
}

double NNfunction_ss_uLdR::synapse0x2ca9a10() {
   return (neuron0x2c8aa20()*0.00970228);
}

double NNfunction_ss_uLdR::synapse0x2ca9a50() {
   return (neuron0x2c8af80()*-0.205105);
}

double NNfunction_ss_uLdR::synapse0x2caa0d0() {
   return (neuron0x2c8b1a0()*-0.0321868);
}

double NNfunction_ss_uLdR::synapse0x2caa110() {
   return (neuron0x2c8b4e0()*-0.0230929);
}

double NNfunction_ss_uLdR::synapse0x2caa150() {
   return (neuron0x2c8b820()*0.0298788);
}

double NNfunction_ss_uLdR::synapse0x2caa190() {
   return (neuron0x2c8bb60()*-0.00142);
}

double NNfunction_ss_uLdR::synapse0x2caa1d0() {
   return (neuron0x2c8bea0()*0.00532137);
}

double NNfunction_ss_uLdR::synapse0x2caa210() {
   return (neuron0x2c8c1e0()*-0.0126755);
}

double NNfunction_ss_uLdR::synapse0x2caa590() {
   return (neuron0x2c87620()*0.0999614);
}

double NNfunction_ss_uLdR::synapse0x2caa5d0() {
   return (neuron0x2c87960()*0.538213);
}

double NNfunction_ss_uLdR::synapse0x2caa610() {
   return (neuron0x2c87ca0()*1.2434);
}

double NNfunction_ss_uLdR::synapse0x2caa650() {
   return (neuron0x2c87fe0()*0.361235);
}

double NNfunction_ss_uLdR::synapse0x2caa690() {
   return (neuron0x2c88320()*0.155752);
}

double NNfunction_ss_uLdR::synapse0x2caa6d0() {
   return (neuron0x2c88660()*-0.741913);
}

double NNfunction_ss_uLdR::synapse0x2caa710() {
   return (neuron0x2c889a0()*-0.366893);
}

double NNfunction_ss_uLdR::synapse0x2caa750() {
   return (neuron0x2c88ce0()*-0.62535);
}

double NNfunction_ss_uLdR::synapse0x2caa790() {
   return (neuron0x2c89020()*-0.442537);
}

double NNfunction_ss_uLdR::synapse0x2caa7d0() {
   return (neuron0x2c89360()*0.135384);
}

double NNfunction_ss_uLdR::synapse0x2caa810() {
   return (neuron0x2c896a0()*-0.482599);
}

double NNfunction_ss_uLdR::synapse0x2caa850() {
   return (neuron0x2c899e0()*0.788893);
}

double NNfunction_ss_uLdR::synapse0x2caa890() {
   return (neuron0x2c89d20()*0.170512);
}

double NNfunction_ss_uLdR::synapse0x2caa8d0() {
   return (neuron0x2c8a060()*-0.230843);
}

double NNfunction_ss_uLdR::synapse0x2caa910() {
   return (neuron0x2c8a3a0()*-0.055505);
}

double NNfunction_ss_uLdR::synapse0x2caa950() {
   return (neuron0x2c8a6e0()*-0.71592);
}

double NNfunction_ss_uLdR::synapse0x2caa3e0() {
   return (neuron0x2c8aa20()*-0.903207);
}

double NNfunction_ss_uLdR::synapse0x2caa420() {
   return (neuron0x2c8af80()*-0.521982);
}

double NNfunction_ss_uLdR::synapse0x2c9af50() {
   return (neuron0x2c8b1a0()*0.313899);
}

double NNfunction_ss_uLdR::synapse0x2c9af90() {
   return (neuron0x2c8b4e0()*-0.0552182);
}

double NNfunction_ss_uLdR::synapse0x2c9afd0() {
   return (neuron0x2c8b820()*0.155043);
}

double NNfunction_ss_uLdR::synapse0x2c9b010() {
   return (neuron0x2c8bb60()*0.882765);
}

double NNfunction_ss_uLdR::synapse0x2c9b050() {
   return (neuron0x2c8bea0()*0.147228);
}

double NNfunction_ss_uLdR::synapse0x2c9b090() {
   return (neuron0x2c8c1e0()*-0.696211);
}

double NNfunction_ss_uLdR::synapse0x2c9b410() {
   return (neuron0x2c87620()*0.00261119);
}

double NNfunction_ss_uLdR::synapse0x2c9b450() {
   return (neuron0x2c87960()*-0.196776);
}

double NNfunction_ss_uLdR::synapse0x2c9b490() {
   return (neuron0x2c87ca0()*-0.128232);
}

double NNfunction_ss_uLdR::synapse0x2c9b4d0() {
   return (neuron0x2c87fe0()*2.95319);
}

double NNfunction_ss_uLdR::synapse0x2c9b510() {
   return (neuron0x2c88320()*0.122523);
}

double NNfunction_ss_uLdR::synapse0x2c9b550() {
   return (neuron0x2c88660()*-0.00780366);
}

double NNfunction_ss_uLdR::synapse0x2c9b590() {
   return (neuron0x2c889a0()*0.0815163);
}

double NNfunction_ss_uLdR::synapse0x2c9b5d0() {
   return (neuron0x2c88ce0()*-0.0673404);
}

double NNfunction_ss_uLdR::synapse0x2c9b610() {
   return (neuron0x2c89020()*0.124977);
}

double NNfunction_ss_uLdR::synapse0x2c9b650() {
   return (neuron0x2c89360()*-0.0456604);
}

double NNfunction_ss_uLdR::synapse0x2c9b690() {
   return (neuron0x2c896a0()*0.0699871);
}

double NNfunction_ss_uLdR::synapse0x2c9b6d0() {
   return (neuron0x2c899e0()*0.363765);
}

double NNfunction_ss_uLdR::synapse0x2c9b710() {
   return (neuron0x2c89d20()*-0.022541);
}

double NNfunction_ss_uLdR::synapse0x2c9b750() {
   return (neuron0x2c8a060()*0.0174691);
}

double NNfunction_ss_uLdR::synapse0x2c9b790() {
   return (neuron0x2c8a3a0()*-0.100244);
}

double NNfunction_ss_uLdR::synapse0x2c9b7d0() {
   return (neuron0x2c8a6e0()*0.0127801);
}

double NNfunction_ss_uLdR::synapse0x2c9b260() {
   return (neuron0x2c8aa20()*-0.0214882);
}

double NNfunction_ss_uLdR::synapse0x2c9b2a0() {
   return (neuron0x2c8af80()*0.310167);
}

double NNfunction_ss_uLdR::synapse0x2c9b920() {
   return (neuron0x2c8b1a0()*0.129219);
}

double NNfunction_ss_uLdR::synapse0x2c9b960() {
   return (neuron0x2c8b4e0()*0.117175);
}

double NNfunction_ss_uLdR::synapse0x2c9b9a0() {
   return (neuron0x2c8b820()*0.0217199);
}

double NNfunction_ss_uLdR::synapse0x2c9b9e0() {
   return (neuron0x2c8bb60()*-0.0261028);
}

double NNfunction_ss_uLdR::synapse0x2c9ba20() {
   return (neuron0x2c8bea0()*-0.0504039);
}

double NNfunction_ss_uLdR::synapse0x2c9ba60() {
   return (neuron0x2c8c1e0()*-0.0359376);
}

double NNfunction_ss_uLdR::synapse0x2c9bde0() {
   return (neuron0x2c87620()*-0.274463);
}

double NNfunction_ss_uLdR::synapse0x2c9be20() {
   return (neuron0x2c87960()*-0.238865);
}

double NNfunction_ss_uLdR::synapse0x2c9be60() {
   return (neuron0x2c87ca0()*-0.609586);
}

double NNfunction_ss_uLdR::synapse0x2c9bea0() {
   return (neuron0x2c87fe0()*-0.2802);
}

double NNfunction_ss_uLdR::synapse0x2c9bee0() {
   return (neuron0x2c88320()*-0.093284);
}

double NNfunction_ss_uLdR::synapse0x2c9bf20() {
   return (neuron0x2c88660()*-0.0963584);
}

double NNfunction_ss_uLdR::synapse0x2c9bf60() {
   return (neuron0x2c889a0()*-0.958298);
}

double NNfunction_ss_uLdR::synapse0x2c9bfa0() {
   return (neuron0x2c88ce0()*1.09002);
}

double NNfunction_ss_uLdR::synapse0x2c9bfe0() {
   return (neuron0x2c89020()*0.0199767);
}

double NNfunction_ss_uLdR::synapse0x2c9c020() {
   return (neuron0x2c89360()*0.207081);
}

double NNfunction_ss_uLdR::synapse0x2c9c060() {
   return (neuron0x2c896a0()*-0.459314);
}

double NNfunction_ss_uLdR::synapse0x2c9c0a0() {
   return (neuron0x2c899e0()*-0.628786);
}

double NNfunction_ss_uLdR::synapse0x2c9c0e0() {
   return (neuron0x2c89d20()*-0.0987821);
}

double NNfunction_ss_uLdR::synapse0x2c9c120() {
   return (neuron0x2c8a060()*0.352643);
}

double NNfunction_ss_uLdR::synapse0x2c9c160() {
   return (neuron0x2c8a3a0()*0.38329);
}

double NNfunction_ss_uLdR::synapse0x2c9c1a0() {
   return (neuron0x2c8a6e0()*-0.284212);
}

double NNfunction_ss_uLdR::synapse0x2c9bc30() {
   return (neuron0x2c8aa20()*-0.0846944);
}

double NNfunction_ss_uLdR::synapse0x2c9bc70() {
   return (neuron0x2c8af80()*-0.251945);
}

double NNfunction_ss_uLdR::synapse0x2c9c2f0() {
   return (neuron0x2c8b1a0()*0.574191);
}

double NNfunction_ss_uLdR::synapse0x2c9c330() {
   return (neuron0x2c8b4e0()*-0.311689);
}

double NNfunction_ss_uLdR::synapse0x2c9c370() {
   return (neuron0x2c8b820()*-0.40259);
}

double NNfunction_ss_uLdR::synapse0x2c9c3b0() {
   return (neuron0x2c8bb60()*-0.15548);
}

double NNfunction_ss_uLdR::synapse0x2c9c3f0() {
   return (neuron0x2c8bea0()*-0.0404116);
}

double NNfunction_ss_uLdR::synapse0x2c9c430() {
   return (neuron0x2c8c1e0()*-0.243823);
}

double NNfunction_ss_uLdR::synapse0x2c9c7b0() {
   return (neuron0x2c87620()*-0.177136);
}

double NNfunction_ss_uLdR::synapse0x2c9c7f0() {
   return (neuron0x2c87960()*0.253959);
}

double NNfunction_ss_uLdR::synapse0x2c9c830() {
   return (neuron0x2c87ca0()*-0.107059);
}

double NNfunction_ss_uLdR::synapse0x2c9c870() {
   return (neuron0x2c87fe0()*0.2502);
}

double NNfunction_ss_uLdR::synapse0x2c9c8b0() {
   return (neuron0x2c88320()*-0.0229785);
}

double NNfunction_ss_uLdR::synapse0x2c9c8f0() {
   return (neuron0x2c88660()*-0.294555);
}

double NNfunction_ss_uLdR::synapse0x2c9c930() {
   return (neuron0x2c889a0()*0.129089);
}

double NNfunction_ss_uLdR::synapse0x2c9c970() {
   return (neuron0x2c88ce0()*0.142442);
}

double NNfunction_ss_uLdR::synapse0x2c9c9b0() {
   return (neuron0x2c89020()*0.204674);
}

double NNfunction_ss_uLdR::synapse0x2c9c9f0() {
   return (neuron0x2c89360()*0.0303781);
}

double NNfunction_ss_uLdR::synapse0x2c9ca30() {
   return (neuron0x2c896a0()*0.0970101);
}

double NNfunction_ss_uLdR::synapse0x2c9ca70() {
   return (neuron0x2c899e0()*-0.695285);
}

double NNfunction_ss_uLdR::synapse0x2c9cab0() {
   return (neuron0x2c89d20()*-0.626597);
}

double NNfunction_ss_uLdR::synapse0x2c9caf0() {
   return (neuron0x2c8a060()*-0.197334);
}

double NNfunction_ss_uLdR::synapse0x2c9cb30() {
   return (neuron0x2c8a3a0()*-0.0581112);
}

double NNfunction_ss_uLdR::synapse0x2c9cb70() {
   return (neuron0x2c8a6e0()*-0.250925);
}

double NNfunction_ss_uLdR::synapse0x2c9c600() {
   return (neuron0x2c8aa20()*-0.322941);
}

double NNfunction_ss_uLdR::synapse0x2c9c640() {
   return (neuron0x2c8af80()*0.0375824);
}

double NNfunction_ss_uLdR::synapse0x2c9ccc0() {
   return (neuron0x2c8b1a0()*-0.576104);
}

double NNfunction_ss_uLdR::synapse0x2c9cd00() {
   return (neuron0x2c8b4e0()*-0.6357);
}

double NNfunction_ss_uLdR::synapse0x2c9cd40() {
   return (neuron0x2c8b820()*0.180772);
}

double NNfunction_ss_uLdR::synapse0x2c9cd80() {
   return (neuron0x2c8bb60()*0.211354);
}

double NNfunction_ss_uLdR::synapse0x2c9cdc0() {
   return (neuron0x2c8bea0()*-0.410267);
}

double NNfunction_ss_uLdR::synapse0x2c9ce00() {
   return (neuron0x2c8c1e0()*-0.0522226);
}

double NNfunction_ss_uLdR::synapse0x2caecd0() {
   return (neuron0x2c87620()*0.0191151);
}

double NNfunction_ss_uLdR::synapse0x2caed10() {
   return (neuron0x2c87960()*-0.00559244);
}

double NNfunction_ss_uLdR::synapse0x2caed50() {
   return (neuron0x2c87ca0()*0.0025517);
}

double NNfunction_ss_uLdR::synapse0x2caed90() {
   return (neuron0x2c87fe0()*-0.102865);
}

double NNfunction_ss_uLdR::synapse0x2caedd0() {
   return (neuron0x2c88320()*0.0164393);
}

double NNfunction_ss_uLdR::synapse0x2caee10() {
   return (neuron0x2c88660()*0.00379625);
}

double NNfunction_ss_uLdR::synapse0x2caee50() {
   return (neuron0x2c889a0()*-0.00552939);
}

double NNfunction_ss_uLdR::synapse0x2caee90() {
   return (neuron0x2c88ce0()*0.0135813);
}

double NNfunction_ss_uLdR::synapse0x2caeed0() {
   return (neuron0x2c89020()*-0.0285007);
}

double NNfunction_ss_uLdR::synapse0x2caef10() {
   return (neuron0x2c89360()*-0.0137382);
}

double NNfunction_ss_uLdR::synapse0x2caef50() {
   return (neuron0x2c896a0()*-0.0120867);
}

double NNfunction_ss_uLdR::synapse0x2caef90() {
   return (neuron0x2c899e0()*0.280786);
}

double NNfunction_ss_uLdR::synapse0x2caefd0() {
   return (neuron0x2c89d20()*0.00971119);
}

double NNfunction_ss_uLdR::synapse0x2caf010() {
   return (neuron0x2c8a060()*-0.00394176);
}

double NNfunction_ss_uLdR::synapse0x2caf050() {
   return (neuron0x2c8a3a0()*0.00624179);
}

double NNfunction_ss_uLdR::synapse0x2caf090() {
   return (neuron0x2c8a6e0()*-0.011156);
}

double NNfunction_ss_uLdR::synapse0x2c9ce40() {
   return (neuron0x2c8aa20()*9.7224e-05);
}

double NNfunction_ss_uLdR::synapse0x2c9ce80() {
   return (neuron0x2c8af80()*-1.82766);
}

double NNfunction_ss_uLdR::synapse0x2caf1e0() {
   return (neuron0x2c8b1a0()*0.0196453);
}

double NNfunction_ss_uLdR::synapse0x2caf220() {
   return (neuron0x2c8b4e0()*-0.0227783);
}

double NNfunction_ss_uLdR::synapse0x2caf260() {
   return (neuron0x2c8b820()*0.00539835);
}

double NNfunction_ss_uLdR::synapse0x2caf2a0() {
   return (neuron0x2c8bb60()*0.011325);
}

double NNfunction_ss_uLdR::synapse0x2caf2e0() {
   return (neuron0x2c8bea0()*0.00262378);
}

double NNfunction_ss_uLdR::synapse0x2caf320() {
   return (neuron0x2c8c1e0()*-0.0109326);
}

double NNfunction_ss_uLdR::synapse0x2caf6a0() {
   return (neuron0x2c87620()*-0.0191736);
}

double NNfunction_ss_uLdR::synapse0x2caf6e0() {
   return (neuron0x2c87960()*0.657516);
}

double NNfunction_ss_uLdR::synapse0x2caf720() {
   return (neuron0x2c87ca0()*-0.69443);
}

double NNfunction_ss_uLdR::synapse0x2caf760() {
   return (neuron0x2c87fe0()*0.0611385);
}

double NNfunction_ss_uLdR::synapse0x2caf7a0() {
   return (neuron0x2c88320()*-0.214797);
}

double NNfunction_ss_uLdR::synapse0x2caf7e0() {
   return (neuron0x2c88660()*0.12669);
}

double NNfunction_ss_uLdR::synapse0x2caf820() {
   return (neuron0x2c889a0()*-0.312533);
}

double NNfunction_ss_uLdR::synapse0x2caf860() {
   return (neuron0x2c88ce0()*-0.0449603);
}

double NNfunction_ss_uLdR::synapse0x2caf8a0() {
   return (neuron0x2c89020()*-0.134762);
}

double NNfunction_ss_uLdR::synapse0x2caf8e0() {
   return (neuron0x2c89360()*1.01856);
}

double NNfunction_ss_uLdR::synapse0x2caf920() {
   return (neuron0x2c896a0()*-1.27573);
}

double NNfunction_ss_uLdR::synapse0x2caf960() {
   return (neuron0x2c899e0()*0.686766);
}

double NNfunction_ss_uLdR::synapse0x2caf9a0() {
   return (neuron0x2c89d20()*-0.514633);
}

double NNfunction_ss_uLdR::synapse0x2caf9e0() {
   return (neuron0x2c8a060()*0.423116);
}

double NNfunction_ss_uLdR::synapse0x2cafa20() {
   return (neuron0x2c8a3a0()*-0.655837);
}

double NNfunction_ss_uLdR::synapse0x2cafa60() {
   return (neuron0x2c8a6e0()*0.0767089);
}

double NNfunction_ss_uLdR::synapse0x2caf4f0() {
   return (neuron0x2c8aa20()*0.35257);
}

double NNfunction_ss_uLdR::synapse0x2caf530() {
   return (neuron0x2c8af80()*0.558436);
}

double NNfunction_ss_uLdR::synapse0x2cafbb0() {
   return (neuron0x2c8b1a0()*2.28937);
}

double NNfunction_ss_uLdR::synapse0x2cafbf0() {
   return (neuron0x2c8b4e0()*0.151489);
}

double NNfunction_ss_uLdR::synapse0x2cafc30() {
   return (neuron0x2c8b820()*0.221256);
}

double NNfunction_ss_uLdR::synapse0x2cafc70() {
   return (neuron0x2c8bb60()*-0.1595);
}

double NNfunction_ss_uLdR::synapse0x2cafcb0() {
   return (neuron0x2c8bea0()*0.176497);
}

double NNfunction_ss_uLdR::synapse0x2cafcf0() {
   return (neuron0x2c8c1e0()*-0.0504582);
}

double NNfunction_ss_uLdR::synapse0x2cb0070() {
   return (neuron0x2c87620()*0.0805838);
}

double NNfunction_ss_uLdR::synapse0x2cb00b0() {
   return (neuron0x2c87960()*-0.859098);
}

double NNfunction_ss_uLdR::synapse0x2cb00f0() {
   return (neuron0x2c87ca0()*0.741842);
}

double NNfunction_ss_uLdR::synapse0x2cb0130() {
   return (neuron0x2c87fe0()*0.177474);
}

double NNfunction_ss_uLdR::synapse0x2cb0170() {
   return (neuron0x2c88320()*0.829104);
}

double NNfunction_ss_uLdR::synapse0x2cb01b0() {
   return (neuron0x2c88660()*0.537374);
}

double NNfunction_ss_uLdR::synapse0x2cb01f0() {
   return (neuron0x2c889a0()*-0.459678);
}

double NNfunction_ss_uLdR::synapse0x2cb0230() {
   return (neuron0x2c88ce0()*0.260631);
}

double NNfunction_ss_uLdR::synapse0x2cb0270() {
   return (neuron0x2c89020()*-0.120137);
}

double NNfunction_ss_uLdR::synapse0x2cb02b0() {
   return (neuron0x2c89360()*0.00587233);
}

double NNfunction_ss_uLdR::synapse0x2cb02f0() {
   return (neuron0x2c896a0()*0.751492);
}

double NNfunction_ss_uLdR::synapse0x2cb0330() {
   return (neuron0x2c899e0()*0.222931);
}

double NNfunction_ss_uLdR::synapse0x2cb0370() {
   return (neuron0x2c89d20()*-0.692548);
}

double NNfunction_ss_uLdR::synapse0x2cb03b0() {
   return (neuron0x2c8a060()*0.538394);
}

double NNfunction_ss_uLdR::synapse0x2cb03f0() {
   return (neuron0x2c8a3a0()*0.392283);
}

double NNfunction_ss_uLdR::synapse0x2cb0430() {
   return (neuron0x2c8a6e0()*-0.624019);
}

double NNfunction_ss_uLdR::synapse0x2cafec0() {
   return (neuron0x2c8aa20()*-0.211875);
}

double NNfunction_ss_uLdR::synapse0x2caff00() {
   return (neuron0x2c8af80()*-0.0174281);
}

double NNfunction_ss_uLdR::synapse0x2cb0580() {
   return (neuron0x2c8b1a0()*0.132754);
}

double NNfunction_ss_uLdR::synapse0x2cb05c0() {
   return (neuron0x2c8b4e0()*-0.277166);
}

double NNfunction_ss_uLdR::synapse0x2cb0600() {
   return (neuron0x2c8b820()*-0.769363);
}

double NNfunction_ss_uLdR::synapse0x2cb0640() {
   return (neuron0x2c8bb60()*0.953945);
}

double NNfunction_ss_uLdR::synapse0x2cb0680() {
   return (neuron0x2c8bea0()*-0.402242);
}

double NNfunction_ss_uLdR::synapse0x2cb06c0() {
   return (neuron0x2c8c1e0()*0.078902);
}

double NNfunction_ss_uLdR::synapse0x2cb0a40() {
   return (neuron0x2c87620()*0.34031);
}

double NNfunction_ss_uLdR::synapse0x2cb0a80() {
   return (neuron0x2c87960()*0.330829);
}

double NNfunction_ss_uLdR::synapse0x2cb0ac0() {
   return (neuron0x2c87ca0()*0.376169);
}

double NNfunction_ss_uLdR::synapse0x2cb0b00() {
   return (neuron0x2c87fe0()*0.264073);
}

double NNfunction_ss_uLdR::synapse0x2cb0b40() {
   return (neuron0x2c88320()*-0.641434);
}

double NNfunction_ss_uLdR::synapse0x2cb0b80() {
   return (neuron0x2c88660()*-0.167863);
}

double NNfunction_ss_uLdR::synapse0x2cb0bc0() {
   return (neuron0x2c889a0()*-1.03336);
}

double NNfunction_ss_uLdR::synapse0x2cb0c00() {
   return (neuron0x2c88ce0()*0.19366);
}

double NNfunction_ss_uLdR::synapse0x2cb0c40() {
   return (neuron0x2c89020()*-0.0952536);
}

double NNfunction_ss_uLdR::synapse0x2cb0c80() {
   return (neuron0x2c89360()*1.54214);
}

double NNfunction_ss_uLdR::synapse0x2cb0cc0() {
   return (neuron0x2c896a0()*0.792156);
}

double NNfunction_ss_uLdR::synapse0x2cb0d00() {
   return (neuron0x2c899e0()*-0.118144);
}

double NNfunction_ss_uLdR::synapse0x2cb0d40() {
   return (neuron0x2c89d20()*0.944316);
}

double NNfunction_ss_uLdR::synapse0x2cb0d80() {
   return (neuron0x2c8a060()*-0.694192);
}

double NNfunction_ss_uLdR::synapse0x2cb0dc0() {
   return (neuron0x2c8a3a0()*-0.875293);
}

double NNfunction_ss_uLdR::synapse0x2cb0e00() {
   return (neuron0x2c8a6e0()*-0.294293);
}

double NNfunction_ss_uLdR::synapse0x2cb0890() {
   return (neuron0x2c8aa20()*-0.0340167);
}

double NNfunction_ss_uLdR::synapse0x2cb08d0() {
   return (neuron0x2c8af80()*0.0775804);
}

double NNfunction_ss_uLdR::synapse0x2cb0f50() {
   return (neuron0x2c8b1a0()*0.0566427);
}

double NNfunction_ss_uLdR::synapse0x2cb0f90() {
   return (neuron0x2c8b4e0()*0.629848);
}

double NNfunction_ss_uLdR::synapse0x2cb0fd0() {
   return (neuron0x2c8b820()*1.2571);
}

double NNfunction_ss_uLdR::synapse0x2cb1010() {
   return (neuron0x2c8bb60()*0.19903);
}

double NNfunction_ss_uLdR::synapse0x2cb1050() {
   return (neuron0x2c8bea0()*0.319727);
}

double NNfunction_ss_uLdR::synapse0x2cb1090() {
   return (neuron0x2c8c1e0()*-0.318643);
}

double NNfunction_ss_uLdR::synapse0x2c8d630() {
   return (neuron0x2c8c680()*-0.0411572);
}

double NNfunction_ss_uLdR::synapse0x2c8d670() {
   return (neuron0x2c8cf90()*2.33197);
}

double NNfunction_ss_uLdR::synapse0x2c8eb40() {
   return (neuron0x2c8da70()*-0.00344008);
}

double NNfunction_ss_uLdR::synapse0x2c8eb80() {
   return (neuron0x2a47300()*-0.0984048);
}

double NNfunction_ss_uLdR::synapse0x2c8f510() {
   return (neuron0x2c8e890()*0.0822291);
}

double NNfunction_ss_uLdR::synapse0x2c8f550() {
   return (neuron0x2c8f260()*0.0629949);
}

double NNfunction_ss_uLdR::synapse0x2c902e0() {
   return (neuron0x2c90030()*-0.021561);
}

double NNfunction_ss_uLdR::synapse0x2c90320() {
   return (neuron0x2c90a00()*-0.0203572);
}

double NNfunction_ss_uLdR::synapse0x2c90cb0() {
   return (neuron0x2c913d0()*0.0428562);
}

double NNfunction_ss_uLdR::synapse0x2c90cf0() {
   return (neuron0x2c91eb0()*-0.0732632);
}

double NNfunction_ss_uLdR::synapse0x2c91680() {
   return (neuron0x2c92880()*0.0382786);
}

double NNfunction_ss_uLdR::synapse0x2c916c0() {
   return (neuron0x2c8f960()*0.0604006);
}

double NNfunction_ss_uLdR::synapse0x2c92160() {
   return (neuron0x2c94430()*-0.0244831);
}

double NNfunction_ss_uLdR::synapse0x2c921a0() {
   return (neuron0x2c94e00()*0.0702686);
}

double NNfunction_ss_uLdR::synapse0x2c92b30() {
   return (neuron0x2c957d0()*-0.0650134);
}

double NNfunction_ss_uLdR::synapse0x2c92b70() {
   return (neuron0x2c961a0()*-0.211629);
}

double NNfunction_ss_uLdR::synapse0x2c8fc10() {
   return (neuron0x2c97fb0()*-1.24618);
}

double NNfunction_ss_uLdR::synapse0x2c8fc50() {
   return (neuron0x2c98290()*0.0763688);
}

double NNfunction_ss_uLdR::synapse0x2c946e0() {
   return (neuron0x2c98c60()*-0.040452);
}

double NNfunction_ss_uLdR::synapse0x2c94720() {
   return (neuron0x2c99630()*0.0385862);
}

double NNfunction_ss_uLdR::synapse0x2c950b0() {
   return (neuron0x2c9a000()*-0.00851013);
}

double NNfunction_ss_uLdR::synapse0x2c950f0() {
   return (neuron0x2c9a9d0()*-0.163567);
}

double NNfunction_ss_uLdR::synapse0x2c95a80() {
   return (neuron0x2c93520()*2.36266);
}

double NNfunction_ss_uLdR::synapse0x2c95ac0() {
   return (neuron0x2c93ef0()*0.0525531);
}

double NNfunction_ss_uLdR::synapse0x2c96450() {
   return (neuron0x2c9d760()*0.443544);
}

double NNfunction_ss_uLdR::synapse0x2c96490() {
   return (neuron0x2c9e130()*-0.0490656);
}

double NNfunction_ss_uLdR::synapse0x2c8a5c0() {
   return (neuron0x2c9eb00()*0.11216);
}

double NNfunction_ss_uLdR::synapse0x2c8a600() {
   return (neuron0x2c9f4d0()*-0.0949404);
}

double NNfunction_ss_uLdR::synapse0x2c98540() {
   return (neuron0x2c9fea0()*0.0888446);
}

double NNfunction_ss_uLdR::synapse0x2c98580() {
   return (neuron0x2ca0870()*0.533922);
}

double NNfunction_ss_uLdR::synapse0x2c98f10() {
   return (neuron0x2ca1240()*-0.510553);
}

double NNfunction_ss_uLdR::synapse0x2c98f50() {
   return (neuron0x2ca1c10()*-0.0502718);
}

double NNfunction_ss_uLdR::synapse0x2c998e0() {
   return (neuron0x2c97ca0()*0.484123);
}

double NNfunction_ss_uLdR::synapse0x2c99920() {
   return (neuron0x2ca47f0()*0.0350741);
}

double NNfunction_ss_uLdR::synapse0x2c9a2b0() {
   return (neuron0x2ca51c0()*-0.226639);
}

double NNfunction_ss_uLdR::synapse0x2c9a2f0() {
   return (neuron0x2ca5b90()*1.35285);
}

double NNfunction_ss_uLdR::synapse0x2c9ac80() {
   return (neuron0x2ca6560()*-0.0625345);
}

double NNfunction_ss_uLdR::synapse0x2c9acc0() {
   return (neuron0x2ca6f30()*-0.128968);
}

double NNfunction_ss_uLdR::synapse0x2c937d0() {
   return (neuron0x2ca7900()*-0.0204905);
}

double NNfunction_ss_uLdR::synapse0x2c93810() {
   return (neuron0x2ca82d0()*-0.0729447);
}

double NNfunction_ss_uLdR::synapse0x2c9d080() {
   return (neuron0x2ca8ca0()*0.0365545);
}

double NNfunction_ss_uLdR::synapse0x2c9d0c0() {
   return (neuron0x2ca9880()*-2.04725);
}

double NNfunction_ss_uLdR::synapse0x2c9da10() {
   return (neuron0x2caa250()*0.0667497);
}

double NNfunction_ss_uLdR::synapse0x2c9da50() {
   return (neuron0x2c9b0d0()*0.883146);
}

double NNfunction_ss_uLdR::synapse0x2c9e3e0() {
   return (neuron0x2c9baa0()*0.0563702);
}

double NNfunction_ss_uLdR::synapse0x2c9e420() {
   return (neuron0x2c9c470()*0.139851);
}

double NNfunction_ss_uLdR::synapse0x2c9edb0() {
   return (neuron0x2caeab0()*0.401024);
}

double NNfunction_ss_uLdR::synapse0x2c9edf0() {
   return (neuron0x2caf360()*-0.0211198);
}

double NNfunction_ss_uLdR::synapse0x2c9f780() {
   return (neuron0x2cafd30()*-0.0460737);
}

double NNfunction_ss_uLdR::synapse0x2c9f7c0() {
   return (neuron0x2cb0700()*-0.0266271);
}

double NNfunction_ss_uLdR::synapse0x2ca1ec0() {
   return (neuron0x2c8c680()*-0.0139667);
}

double NNfunction_ss_uLdR::synapse0x2ca1f00() {
   return (neuron0x2c8cf90()*0.276007);
}

double NNfunction_ss_uLdR::synapse0x2c97480() {
   return (neuron0x2c8da70()*-0.0189072);
}

double NNfunction_ss_uLdR::synapse0x2c974c0() {
   return (neuron0x2a47300()*0.359257);
}

double NNfunction_ss_uLdR::synapse0x2ca4aa0() {
   return (neuron0x2c8e890()*0.0216119);
}

double NNfunction_ss_uLdR::synapse0x2ca4ae0() {
   return (neuron0x2c8f260()*-0.00872918);
}

double NNfunction_ss_uLdR::synapse0x2ca5470() {
   return (neuron0x2c90030()*-0.00962291);
}

double NNfunction_ss_uLdR::synapse0x2ca54b0() {
   return (neuron0x2c90a00()*-0.0250093);
}

double NNfunction_ss_uLdR::synapse0x2ca5e40() {
   return (neuron0x2c913d0()*-0.00741689);
}

double NNfunction_ss_uLdR::synapse0x2ca5e80() {
   return (neuron0x2c91eb0()*0.061706);
}

double NNfunction_ss_uLdR::synapse0x2ca6810() {
   return (neuron0x2c92880()*0.0205168);
}

double NNfunction_ss_uLdR::synapse0x2ca6850() {
   return (neuron0x2c8f960()*-0.0029108);
}

double NNfunction_ss_uLdR::synapse0x2ca71e0() {
   return (neuron0x2c94430()*-0.0429328);
}

double NNfunction_ss_uLdR::synapse0x2ca7220() {
   return (neuron0x2c94e00()*0.0134522);
}

double NNfunction_ss_uLdR::synapse0x2ca7bb0() {
   return (neuron0x2c957d0()*0.0115047);
}

double NNfunction_ss_uLdR::synapse0x2ca7bf0() {
   return (neuron0x2c961a0()*1.90173);
}

double NNfunction_ss_uLdR::synapse0x2ca8580() {
   return (neuron0x2c97fb0()*0.157757);
}

double NNfunction_ss_uLdR::synapse0x2ca85c0() {
   return (neuron0x2c98290()*-0.00348758);
}

double NNfunction_ss_uLdR::synapse0x2ca8f50() {
   return (neuron0x2c98c60()*-0.00343485);
}

double NNfunction_ss_uLdR::synapse0x2ca8f90() {
   return (neuron0x2c99630()*0.0190795);
}

double NNfunction_ss_uLdR::synapse0x2ca9b30() {
   return (neuron0x2c9a000()*-0.00158206);
}

double NNfunction_ss_uLdR::synapse0x2ca9b70() {
   return (neuron0x2c9a9d0()*0.486166);
}

double NNfunction_ss_uLdR::synapse0x2caa500() {
   return (neuron0x2c93520()*1.37651);
}

double NNfunction_ss_uLdR::synapse0x2caa540() {
   return (neuron0x2c93ef0()*0.0397013);
}

double NNfunction_ss_uLdR::synapse0x2c9b380() {
   return (neuron0x2c9d760()*-0.733817);
}

double NNfunction_ss_uLdR::synapse0x2c9b3c0() {
   return (neuron0x2c9e130()*-0.00896555);
}

double NNfunction_ss_uLdR::synapse0x2c9bd50() {
   return (neuron0x2c9eb00()*-0.0299849);
}

double NNfunction_ss_uLdR::synapse0x2c9bd90() {
   return (neuron0x2c9f4d0()*0.0305239);
}

double NNfunction_ss_uLdR::synapse0x2c9c720() {
   return (neuron0x2c9fea0()*-0.0316095);
}

double NNfunction_ss_uLdR::synapse0x2c9c760() {
   return (neuron0x2ca0870()*-0.918675);
}

double NNfunction_ss_uLdR::synapse0x2caec40() {
   return (neuron0x2ca1240()*-0.473551);
}

double NNfunction_ss_uLdR::synapse0x2caec80() {
   return (neuron0x2ca1c10()*0.0546902);
}

double NNfunction_ss_uLdR::synapse0x2caf610() {
   return (neuron0x2c97ca0()*-0.620924);
}

double NNfunction_ss_uLdR::synapse0x2caf650() {
   return (neuron0x2ca47f0()*0.00747195);
}

double NNfunction_ss_uLdR::synapse0x2caffe0() {
   return (neuron0x2ca51c0()*-0.225561);
}

double NNfunction_ss_uLdR::synapse0x2cb0020() {
   return (neuron0x2ca5b90()*1.7463);
}

double NNfunction_ss_uLdR::synapse0x2cb09b0() {
   return (neuron0x2ca6560()*0.0188575);
}

double NNfunction_ss_uLdR::synapse0x2cb09f0() {
   return (neuron0x2ca6f30()*0.0316183);
}

double NNfunction_ss_uLdR::synapse0x2c8c8a0() {
   return (neuron0x2ca7900()*-0.0203698);
}

double NNfunction_ss_uLdR::synapse0x2c8c8e0() {
   return (neuron0x2ca82d0()*-0.0173592);
}

double NNfunction_ss_uLdR::synapse0x2ca0150() {
   return (neuron0x2ca8ca0()*-0.09689);
}

double NNfunction_ss_uLdR::synapse0x2ca0190() {
   return (neuron0x2ca9880()*0.220606);
}

double NNfunction_ss_uLdR::synapse0x2cb10d0() {
   return (neuron0x2caa250()*-0.0209947);
}

double NNfunction_ss_uLdR::synapse0x2cb1110() {
   return (neuron0x2c9b0d0()*-0.620242);
}

double NNfunction_ss_uLdR::synapse0x2cb1150() {
   return (neuron0x2c9baa0()*-0.0107641);
}

double NNfunction_ss_uLdR::synapse0x2cb1190() {
   return (neuron0x2c9c470()*-0.0106597);
}

double NNfunction_ss_uLdR::synapse0x2cb8040() {
   return (neuron0x2caeab0()*-0.753183);
}

double NNfunction_ss_uLdR::synapse0x2cb8080() {
   return (neuron0x2caf360()*-0.0176019);
}

double NNfunction_ss_uLdR::synapse0x2cb80c0() {
   return (neuron0x2cafd30()*-0.0127174);
}

double NNfunction_ss_uLdR::synapse0x2cb8100() {
   return (neuron0x2cb0700()*-0.0368144);
}

double NNfunction_ss_uLdR::synapse0x2cb8480() {
   return (neuron0x2c8c680()*0.06856);
}

double NNfunction_ss_uLdR::synapse0x2cb84c0() {
   return (neuron0x2c8cf90()*-0.00692993);
}

double NNfunction_ss_uLdR::synapse0x2cb8500() {
   return (neuron0x2c8da70()*0.0174524);
}

double NNfunction_ss_uLdR::synapse0x2cb8540() {
   return (neuron0x2a47300()*-0.150171);
}

double NNfunction_ss_uLdR::synapse0x2cb8580() {
   return (neuron0x2c8e890()*-0.0972039);
}

double NNfunction_ss_uLdR::synapse0x2cb85c0() {
   return (neuron0x2c8f260()*-0.0725577);
}

double NNfunction_ss_uLdR::synapse0x2cb8600() {
   return (neuron0x2c90030()*0.0152468);
}

double NNfunction_ss_uLdR::synapse0x2cb8640() {
   return (neuron0x2c90a00()*0.0421484);
}

double NNfunction_ss_uLdR::synapse0x2cb8680() {
   return (neuron0x2c913d0()*-0.0554307);
}

double NNfunction_ss_uLdR::synapse0x2cb86c0() {
   return (neuron0x2c91eb0()*0.0579892);
}

double NNfunction_ss_uLdR::synapse0x2cb8700() {
   return (neuron0x2c92880()*-0.0834994);
}

double NNfunction_ss_uLdR::synapse0x2cb8740() {
   return (neuron0x2c8f960()*-0.0795581);
}

double NNfunction_ss_uLdR::synapse0x2cb8780() {
   return (neuron0x2c94430()*0.0718648);
}

double NNfunction_ss_uLdR::synapse0x2cb87c0() {
   return (neuron0x2c94e00()*-0.107074);
}

double NNfunction_ss_uLdR::synapse0x2cb8800() {
   return (neuron0x2c957d0()*0.0810078);
}

double NNfunction_ss_uLdR::synapse0x2cb8840() {
   return (neuron0x2c961a0()*1.57668);
}

double NNfunction_ss_uLdR::synapse0x2cb82d0() {
   return (neuron0x2c97fb0()*-1.60446);
}

double NNfunction_ss_uLdR::synapse0x2cb8310() {
   return (neuron0x2c98290()*-0.0964713);
}

double NNfunction_ss_uLdR::synapse0x2cb8990() {
   return (neuron0x2c98c60()*0.0741833);
}

double NNfunction_ss_uLdR::synapse0x2cb89d0() {
   return (neuron0x2c99630()*-0.0143421);
}

double NNfunction_ss_uLdR::synapse0x2cb8a10() {
   return (neuron0x2c9a000()*0.0159691);
}

double NNfunction_ss_uLdR::synapse0x2cb8a50() {
   return (neuron0x2c9a9d0()*-0.0346667);
}

double NNfunction_ss_uLdR::synapse0x2cb8a90() {
   return (neuron0x2c93520()*1.22992);
}

double NNfunction_ss_uLdR::synapse0x2cb8ad0() {
   return (neuron0x2c93ef0()*-0.0667335);
}

double NNfunction_ss_uLdR::synapse0x2cb8b10() {
   return (neuron0x2c9d760()*-0.439896);
}

double NNfunction_ss_uLdR::synapse0x2cb8b50() {
   return (neuron0x2c9e130()*0.0661686);
}

double NNfunction_ss_uLdR::synapse0x2cb8b90() {
   return (neuron0x2c9eb00()*-0.11894);
}

double NNfunction_ss_uLdR::synapse0x2cb8bd0() {
   return (neuron0x2c9f4d0()*0.126545);
}

double NNfunction_ss_uLdR::synapse0x2cb8c10() {
   return (neuron0x2c9fea0()*-0.0934146);
}

double NNfunction_ss_uLdR::synapse0x2cb8c50() {
   return (neuron0x2ca0870()*-1.36668);
}

double NNfunction_ss_uLdR::synapse0x2cb8c90() {
   return (neuron0x2ca1240()*0.334116);
}

double NNfunction_ss_uLdR::synapse0x2cb8cd0() {
   return (neuron0x2ca1c10()*0.0738976);
}

double NNfunction_ss_uLdR::synapse0x2cb8880() {
   return (neuron0x2c97ca0()*-0.482089);
}

double NNfunction_ss_uLdR::synapse0x2cb88c0() {
   return (neuron0x2ca47f0()*-0.0169124);
}

double NNfunction_ss_uLdR::synapse0x2cb8900() {
   return (neuron0x2ca51c0()*-1.1331);
}

double NNfunction_ss_uLdR::synapse0x2cb8940() {
   return (neuron0x2ca5b90()*-0.259634);
}

double NNfunction_ss_uLdR::synapse0x2cb8f20() {
   return (neuron0x2ca6560()*0.0662199);
}

double NNfunction_ss_uLdR::synapse0x2cb8f60() {
   return (neuron0x2ca6f30()*0.179289);
}

double NNfunction_ss_uLdR::synapse0x2cb8fa0() {
   return (neuron0x2ca7900()*0.0332352);
}

double NNfunction_ss_uLdR::synapse0x2cb8fe0() {
   return (neuron0x2ca82d0()*0.0584807);
}

double NNfunction_ss_uLdR::synapse0x2cb9020() {
   return (neuron0x2ca8ca0()*-0.0703586);
}

double NNfunction_ss_uLdR::synapse0x2cb9060() {
   return (neuron0x2ca9880()*0.438182);
}

double NNfunction_ss_uLdR::synapse0x2cb90a0() {
   return (neuron0x2caa250()*-0.076809);
}

double NNfunction_ss_uLdR::synapse0x2cb90e0() {
   return (neuron0x2c9b0d0()*0.0546089);
}

double NNfunction_ss_uLdR::synapse0x2cb9120() {
   return (neuron0x2c9baa0()*-0.077702);
}

double NNfunction_ss_uLdR::synapse0x2cb9160() {
   return (neuron0x2c9c470()*-0.171524);
}

double NNfunction_ss_uLdR::synapse0x2cb91a0() {
   return (neuron0x2caeab0()*-1.18958);
}

double NNfunction_ss_uLdR::synapse0x2cb91e0() {
   return (neuron0x2caf360()*0.0311294);
}

double NNfunction_ss_uLdR::synapse0x2cb9220() {
   return (neuron0x2cafd30()*0.0674193);
}

double NNfunction_ss_uLdR::synapse0x2cb9260() {
   return (neuron0x2cb0700()*0.0428447);
}

double NNfunction_ss_uLdR::synapse0x2cb95e0() {
   return (neuron0x2c8c680()*-1.45023);
}

double NNfunction_ss_uLdR::synapse0x2cb9620() {
   return (neuron0x2c8cf90()*-2.72968);
}

double NNfunction_ss_uLdR::synapse0x2cb9660() {
   return (neuron0x2c8da70()*-1.51056);
}

double NNfunction_ss_uLdR::synapse0x2cb96a0() {
   return (neuron0x2a47300()*-5.05617);
}

double NNfunction_ss_uLdR::synapse0x2cb96e0() {
   return (neuron0x2c8e890()*2.14973);
}

double NNfunction_ss_uLdR::synapse0x2cb9720() {
   return (neuron0x2c8f260()*2.10144);
}

double NNfunction_ss_uLdR::synapse0x2cb9760() {
   return (neuron0x2c90030()*-1.69864);
}

double NNfunction_ss_uLdR::synapse0x2cb97a0() {
   return (neuron0x2c90a00()*-1.53871);
}

double NNfunction_ss_uLdR::synapse0x2cb97e0() {
   return (neuron0x2c913d0()*2.05505);
}

double NNfunction_ss_uLdR::synapse0x2cb9820() {
   return (neuron0x2c91eb0()*-2.60844);
}

double NNfunction_ss_uLdR::synapse0x2cb9860() {
   return (neuron0x2c92880()*2.09429);
}

double NNfunction_ss_uLdR::synapse0x2cb98a0() {
   return (neuron0x2c8f960()*1.74959);
}

double NNfunction_ss_uLdR::synapse0x2cb98e0() {
   return (neuron0x2c94430()*-1.67041);
}

double NNfunction_ss_uLdR::synapse0x2cb9920() {
   return (neuron0x2c94e00()*2.28688);
}

double NNfunction_ss_uLdR::synapse0x2cb9960() {
   return (neuron0x2c957d0()*-1.91816);
}

double NNfunction_ss_uLdR::synapse0x2cb99a0() {
   return (neuron0x2c961a0()*-5.57208);
}

double NNfunction_ss_uLdR::synapse0x2cb9430() {
   return (neuron0x2c97fb0()*1.9992);
}

double NNfunction_ss_uLdR::synapse0x2cb9470() {
   return (neuron0x2c98290()*2.46314);
}

double NNfunction_ss_uLdR::synapse0x2cb9af0() {
   return (neuron0x2c98c60()*-1.65182);
}

double NNfunction_ss_uLdR::synapse0x2cb9b30() {
   return (neuron0x2c99630()*1.78356);
}

double NNfunction_ss_uLdR::synapse0x2cb9b70() {
   return (neuron0x2c9a000()*-1.31411);
}

double NNfunction_ss_uLdR::synapse0x2cb9bb0() {
   return (neuron0x2c9a9d0()*1.27365);
}

double NNfunction_ss_uLdR::synapse0x2cb9bf0() {
   return (neuron0x2c93520()*-1.00751);
}

double NNfunction_ss_uLdR::synapse0x2cb9c30() {
   return (neuron0x2c93ef0()*2.73572);
}

double NNfunction_ss_uLdR::synapse0x2cb9c70() {
   return (neuron0x2c9d760()*1.60395);
}

double NNfunction_ss_uLdR::synapse0x2cb9cb0() {
   return (neuron0x2c9e130()*-1.42591);
}

double NNfunction_ss_uLdR::synapse0x2cb9cf0() {
   return (neuron0x2c9eb00()*2.0439);
}

double NNfunction_ss_uLdR::synapse0x2cb9d30() {
   return (neuron0x2c9f4d0()*-1.64504);
}

double NNfunction_ss_uLdR::synapse0x2cb9d70() {
   return (neuron0x2c9fea0()*2.64555);
}

double NNfunction_ss_uLdR::synapse0x2cb9db0() {
   return (neuron0x2ca0870()*2.07703);
}

double NNfunction_ss_uLdR::synapse0x2cb9df0() {
   return (neuron0x2ca1240()*-7.31011);
}

double NNfunction_ss_uLdR::synapse0x2cb9e30() {
   return (neuron0x2ca1c10()*-2.29578);
}

double NNfunction_ss_uLdR::synapse0x2cb99e0() {
   return (neuron0x2c97ca0()*2.66024);
}

double NNfunction_ss_uLdR::synapse0x2cb9a20() {
   return (neuron0x2ca47f0()*1.89124);
}

double NNfunction_ss_uLdR::synapse0x2cb9a60() {
   return (neuron0x2ca51c0()*-1.42742);
}

double NNfunction_ss_uLdR::synapse0x2cb9aa0() {
   return (neuron0x2ca5b90()*-1.45056);
}

double NNfunction_ss_uLdR::synapse0x2cba080() {
   return (neuron0x2ca6560()*-1.48313);
}

double NNfunction_ss_uLdR::synapse0x2cba0c0() {
   return (neuron0x2ca6f30()*-2.23169);
}

double NNfunction_ss_uLdR::synapse0x2cba100() {
   return (neuron0x2ca7900()*-2.01704);
}

double NNfunction_ss_uLdR::synapse0x2cba140() {
   return (neuron0x2ca82d0()*-2.42351);
}

double NNfunction_ss_uLdR::synapse0x2cba180() {
   return (neuron0x2ca8ca0()*1.95772);
}

double NNfunction_ss_uLdR::synapse0x2cba1c0() {
   return (neuron0x2ca9880()*3.22549);
}

double NNfunction_ss_uLdR::synapse0x2cba200() {
   return (neuron0x2caa250()*1.51157);
}

double NNfunction_ss_uLdR::synapse0x2cba240() {
   return (neuron0x2c9b0d0()*6.22975);
}

double NNfunction_ss_uLdR::synapse0x2cba280() {
   return (neuron0x2c9baa0()*1.48834);
}

double NNfunction_ss_uLdR::synapse0x2cba2c0() {
   return (neuron0x2c9c470()*2.84629);
}

double NNfunction_ss_uLdR::synapse0x2cba300() {
   return (neuron0x2caeab0()*1.97892);
}

double NNfunction_ss_uLdR::synapse0x2cba340() {
   return (neuron0x2caf360()*-1.59567);
}

double NNfunction_ss_uLdR::synapse0x2cba380() {
   return (neuron0x2cafd30()*-1.55645);
}

double NNfunction_ss_uLdR::synapse0x2cba3c0() {
   return (neuron0x2cb0700()*-1.70561);
}

double NNfunction_ss_uLdR::synapse0x2cba740() {
   return (neuron0x2c8c680()*0.0348436);
}

double NNfunction_ss_uLdR::synapse0x2cba780() {
   return (neuron0x2c8cf90()*-0.576029);
}

double NNfunction_ss_uLdR::synapse0x2cba7c0() {
   return (neuron0x2c8da70()*0.0482001);
}

double NNfunction_ss_uLdR::synapse0x2cba800() {
   return (neuron0x2a47300()*2.32334);
}

double NNfunction_ss_uLdR::synapse0x2cba840() {
   return (neuron0x2c8e890()*-0.137473);
}

double NNfunction_ss_uLdR::synapse0x2cba880() {
   return (neuron0x2c8f260()*-0.0129208);
}

double NNfunction_ss_uLdR::synapse0x2cba8c0() {
   return (neuron0x2c90030()*0.0327058);
}

double NNfunction_ss_uLdR::synapse0x2cba900() {
   return (neuron0x2c90a00()*0.0403631);
}

double NNfunction_ss_uLdR::synapse0x2cba940() {
   return (neuron0x2c913d0()*-0.0405181);
}

double NNfunction_ss_uLdR::synapse0x2cba980() {
   return (neuron0x2c91eb0()*-0.0533841);
}

double NNfunction_ss_uLdR::synapse0x2cba9c0() {
   return (neuron0x2c92880()*-0.00497547);
}

double NNfunction_ss_uLdR::synapse0x2cbaa00() {
   return (neuron0x2c8f960()*-0.0276084);
}

double NNfunction_ss_uLdR::synapse0x2cbaa40() {
   return (neuron0x2c94430()*0.0320379);
}

double NNfunction_ss_uLdR::synapse0x2cbaa80() {
   return (neuron0x2c94e00()*-0.0466978);
}

double NNfunction_ss_uLdR::synapse0x2cbaac0() {
   return (neuron0x2c957d0()*0.0300414);
}

double NNfunction_ss_uLdR::synapse0x2cbab00() {
   return (neuron0x2c961a0()*-3.03599);
}

double NNfunction_ss_uLdR::synapse0x2cba590() {
   return (neuron0x2c97fb0()*-0.959099);
}

double NNfunction_ss_uLdR::synapse0x2cba5d0() {
   return (neuron0x2c98290()*-0.0414513);
}

double NNfunction_ss_uLdR::synapse0x2cbac50() {
   return (neuron0x2c98c60()*0.00441546);
}

double NNfunction_ss_uLdR::synapse0x2cbac90() {
   return (neuron0x2c99630()*-0.0773804);
}

double NNfunction_ss_uLdR::synapse0x2cbacd0() {
   return (neuron0x2c9a000()*-0.0151852);
}

double NNfunction_ss_uLdR::synapse0x2cbad10() {
   return (neuron0x2c9a9d0()*-1.08271);
}

double NNfunction_ss_uLdR::synapse0x2cbad50() {
   return (neuron0x2c93520()*-0.0112621);
}

double NNfunction_ss_uLdR::synapse0x2cbad90() {
   return (neuron0x2c93ef0()*-0.0919825);
}

double NNfunction_ss_uLdR::synapse0x2cbadd0() {
   return (neuron0x2c9d760()*0.795404);
}

double NNfunction_ss_uLdR::synapse0x2cbae10() {
   return (neuron0x2c9e130()*0.0486984);
}

double NNfunction_ss_uLdR::synapse0x2cbae50() {
   return (neuron0x2c9eb00()*-0.058436);
}

double NNfunction_ss_uLdR::synapse0x2cbae90() {
   return (neuron0x2c9f4d0()*0.00219375);
}

double NNfunction_ss_uLdR::synapse0x2cbaed0() {
   return (neuron0x2c9fea0()*0.0271517);
}

double NNfunction_ss_uLdR::synapse0x2cbaf10() {
   return (neuron0x2ca0870()*0.0809607);
}

double NNfunction_ss_uLdR::synapse0x2cbaf50() {
   return (neuron0x2ca1240()*-0.0890625);
}

double NNfunction_ss_uLdR::synapse0x2cbaf90() {
   return (neuron0x2ca1c10()*0.0487584);
}

double NNfunction_ss_uLdR::synapse0x2cbab40() {
   return (neuron0x2c97ca0()*-1.55132);
}

double NNfunction_ss_uLdR::synapse0x2cbab80() {
   return (neuron0x2ca47f0()*0.0170648);
}

double NNfunction_ss_uLdR::synapse0x2cbabc0() {
   return (neuron0x2ca51c0()*-0.688186);
}

double NNfunction_ss_uLdR::synapse0x2cbac00() {
   return (neuron0x2ca5b90()*-1.57789);
}

double NNfunction_ss_uLdR::synapse0x2cbb1e0() {
   return (neuron0x2ca6560()*0.0164005);
}

double NNfunction_ss_uLdR::synapse0x2cbb220() {
   return (neuron0x2ca6f30()*0.0388598);
}

double NNfunction_ss_uLdR::synapse0x2cbb260() {
   return (neuron0x2ca7900()*0.0230204);
}

double NNfunction_ss_uLdR::synapse0x2cbb2a0() {
   return (neuron0x2ca82d0()*0.0868174);
}

double NNfunction_ss_uLdR::synapse0x2cbb2e0() {
   return (neuron0x2ca8ca0()*-0.021199);
}

double NNfunction_ss_uLdR::synapse0x2cbb320() {
   return (neuron0x2ca9880()*0.879488);
}

double NNfunction_ss_uLdR::synapse0x2cbb360() {
   return (neuron0x2caa250()*0.000158794);
}

double NNfunction_ss_uLdR::synapse0x2cbb3a0() {
   return (neuron0x2c9b0d0()*0.40201);
}

double NNfunction_ss_uLdR::synapse0x2cbb3e0() {
   return (neuron0x2c9baa0()*-0.011035);
}

double NNfunction_ss_uLdR::synapse0x2cbb420() {
   return (neuron0x2c9c470()*-0.0867606);
}

double NNfunction_ss_uLdR::synapse0x2cbb460() {
   return (neuron0x2caeab0()*0.0909696);
}

double NNfunction_ss_uLdR::synapse0x2cbb4a0() {
   return (neuron0x2caf360()*0.0245466);
}

double NNfunction_ss_uLdR::synapse0x2cbb4e0() {
   return (neuron0x2cafd30()*0.0340398);
}

double NNfunction_ss_uLdR::synapse0x2cbb520() {
   return (neuron0x2cb0700()*0.0626048);
}

double NNfunction_ss_uLdR::synapse0x2c8c640() {
   return (neuron0x2cb7900()*-5.1379);
}

double NNfunction_ss_uLdR::synapse0x2cbb780() {
   return (neuron0x2cb7ca0()*-5.77611);
}

double NNfunction_ss_uLdR::synapse0x2cbb7c0() {
   return (neuron0x2cb8140()*-3.79886);
}

double NNfunction_ss_uLdR::synapse0x2cbb800() {
   return (neuron0x2cb92a0()*10.4694);
}

double NNfunction_ss_uLdR::synapse0x2cbb840() {
   return (neuron0x2cba400()*-3.55466);
}

