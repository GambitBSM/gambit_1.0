#include "NNfunction_nn_chi2_chi2.h"
#include <cmath>

double NNfunction_nn_chi2_chi2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3604)/15.009;
   input1 = (in1 - 78.2027)/678.337;
   input2 = (in2 - 288.968)/345.18;
   input3 = (in3 - 323.045)/668.227;
   input4 = (in4 - 989.32)/782.499;
   input5 = (in5 - 941.868)/823.393;
   input6 = (in6 - 946.132)/823.9;
   input7 = (in7 - 929.157)/799.137;
   input8 = (in8 - 935.618)/839.076;
   input9 = (in9 - 929.712)/833.477;
   input10 = (in10 - 904.363)/808.471;
   input11 = (in11 - 941.817)/760.79;
   input12 = (in12 - 955.957)/769.106;
   input13 = (in13 - 731.954)/535.132;
   input14 = (in14 - 940.318)/741.69;
   input15 = (in15 - 949.475)/745.959;
   input16 = (in16 - 628.095)/467.533;
   input17 = (in17 - 960.12)/778.743;
   input18 = (in18 - 964.607)/783.522;
   input19 = (in19 - 935.866)/736.841;
   input20 = (in20 - -248.309)/478.734;
   input21 = (in21 - -321.933)/1016.85;
   input22 = (in22 - -14.3383)/1030.82;
   input23 = (in23 - 54.2959)/498.007;
   switch(index) {
     case 0:
         return neuron0x2319d70();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_chi2::Value(int index, double* input) {
   input0 = (input[0] - 23.3604)/15.009;
   input1 = (input[1] - 78.2027)/678.337;
   input2 = (input[2] - 288.968)/345.18;
   input3 = (input[3] - 323.045)/668.227;
   input4 = (input[4] - 989.32)/782.499;
   input5 = (input[5] - 941.868)/823.393;
   input6 = (input[6] - 946.132)/823.9;
   input7 = (input[7] - 929.157)/799.137;
   input8 = (input[8] - 935.618)/839.076;
   input9 = (input[9] - 929.712)/833.477;
   input10 = (input[10] - 904.363)/808.471;
   input11 = (input[11] - 941.817)/760.79;
   input12 = (input[12] - 955.957)/769.106;
   input13 = (input[13] - 731.954)/535.132;
   input14 = (input[14] - 940.318)/741.69;
   input15 = (input[15] - 949.475)/745.959;
   input16 = (input[16] - 628.095)/467.533;
   input17 = (input[17] - 960.12)/778.743;
   input18 = (input[18] - 964.607)/783.522;
   input19 = (input[19] - 935.866)/736.841;
   input20 = (input[20] - -248.309)/478.734;
   input21 = (input[21] - -321.933)/1016.85;
   input22 = (input[22] - -14.3383)/1030.82;
   input23 = (input[23] - 54.2959)/498.007;
   switch(index) {
     case 0:
         return neuron0x2319d70();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_chi2::neuron0x22e4de0() {
   return input0;
}

double NNfunction_nn_chi2_chi2::neuron0x22e5090() {
   return input1;
}

double NNfunction_nn_chi2_chi2::neuron0x22e53d0() {
   return input2;
}

double NNfunction_nn_chi2_chi2::neuron0x22e5710() {
   return input3;
}

double NNfunction_nn_chi2_chi2::neuron0x22e5a50() {
   return input4;
}

double NNfunction_nn_chi2_chi2::neuron0x22e5d90() {
   return input5;
}

double NNfunction_nn_chi2_chi2::neuron0x22e60d0() {
   return input6;
}

double NNfunction_nn_chi2_chi2::neuron0x22e6410() {
   return input7;
}

double NNfunction_nn_chi2_chi2::neuron0x22e6750() {
   return input8;
}

double NNfunction_nn_chi2_chi2::neuron0x22e6a90() {
   return input9;
}

double NNfunction_nn_chi2_chi2::neuron0x22e6dd0() {
   return input10;
}

double NNfunction_nn_chi2_chi2::neuron0x22e7110() {
   return input11;
}

double NNfunction_nn_chi2_chi2::neuron0x22e7450() {
   return input12;
}

double NNfunction_nn_chi2_chi2::neuron0x22e7790() {
   return input13;
}

double NNfunction_nn_chi2_chi2::neuron0x22e7ad0() {
   return input14;
}

double NNfunction_nn_chi2_chi2::neuron0x22e7e10() {
   return input15;
}

double NNfunction_nn_chi2_chi2::neuron0x22e8150() {
   return input16;
}

double NNfunction_nn_chi2_chi2::neuron0x22e86b0() {
   return input17;
}

double NNfunction_nn_chi2_chi2::neuron0x22e88d0() {
   return input18;
}

double NNfunction_nn_chi2_chi2::neuron0x22e8c10() {
   return input19;
}

double NNfunction_nn_chi2_chi2::neuron0x22e8f50() {
   return input20;
}

double NNfunction_nn_chi2_chi2::neuron0x22e9290() {
   return input21;
}

double NNfunction_nn_chi2_chi2::neuron0x22e95d0() {
   return input22;
}

double NNfunction_nn_chi2_chi2::neuron0x22e9910() {
   return input23;
}

double NNfunction_nn_chi2_chi2::input0x22e9d80() {
   double input = 2.83268;
   input += synapse0x22ea0c0();
   input += synapse0x22ea100();
   input += synapse0x22ea140();
   input += synapse0x22ea180();
   input += synapse0x22ea1c0();
   input += synapse0x22ea200();
   input += synapse0x22ea240();
   input += synapse0x22ea280();
   input += synapse0x22ea2c0();
   input += synapse0x22ea300();
   input += synapse0x22ea340();
   input += synapse0x22ea380();
   input += synapse0x22ea3c0();
   input += synapse0x22ea400();
   input += synapse0x22ea440();
   input += synapse0x22ea480();
   input += synapse0x22e9f10();
   input += synapse0x22e9f50();
   input += synapse0x148f2a0();
   input += synapse0x148f2e0();
   input += synapse0x22ea5d0();
   input += synapse0x22ea610();
   input += synapse0x22ea650();
   input += synapse0x22ea690();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22e9d80() {
   double input = input0x22e9d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22ea6d0() {
   double input = 0.324333;
   input += synapse0x22eaa10();
   input += synapse0x22eaa50();
   input += synapse0x22eaa90();
   input += synapse0x22eaad0();
   input += synapse0x22eab10();
   input += synapse0x22eab50();
   input += synapse0x22eab90();
   input += synapse0x22eabd0();
   input += synapse0x22eac10();
   input += synapse0x22ea4c0();
   input += synapse0x22ea500();
   input += synapse0x22ea540();
   input += synapse0x22ea580();
   input += synapse0x22eae60();
   input += synapse0x22eaea0();
   input += synapse0x22eaee0();
   input += synapse0x22ea860();
   input += synapse0x22ea8a0();
   input += synapse0x22eb030();
   input += synapse0x22eb070();
   input += synapse0x22eb0b0();
   input += synapse0x22eb0f0();
   input += synapse0x22eb130();
   input += synapse0x22eb170();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22ea6d0() {
   double input = input0x22ea6d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22eb1b0() {
   double input = -0.574037;
   input += synapse0x22eb4f0();
   input += synapse0x22eb530();
   input += synapse0x22eb570();
   input += synapse0x22eb5b0();
   input += synapse0x22eb5f0();
   input += synapse0x22eb630();
   input += synapse0x22eb670();
   input += synapse0x22eb6b0();
   input += synapse0x22eb6f0();
   input += synapse0x22eb730();
   input += synapse0x22eb770();
   input += synapse0x22eb7b0();
   input += synapse0x22eb7f0();
   input += synapse0x22eb830();
   input += synapse0x22eb870();
   input += synapse0x22eb8b0();
   input += synapse0x22eb340();
   input += synapse0x22eb380();
   input += synapse0x1018f10();
   input += synapse0x20aee90();
   input += synapse0x20aeed0();
   input += synapse0x22ed7f0();
   input += synapse0x22ed830();
   input += synapse0x22e4b20();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22eb1b0() {
   double input = input0x22eb1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22eac50() {
   double input = 0.931454;
   input += synapse0x22e4bf0();
   input += synapse0x20af710();
   input += synapse0x22eade0();
   input += synapse0x22eae20();
   input += synapse0x22eba00();
   input += synapse0x22eba40();
   input += synapse0x22eba80();
   input += synapse0x22ebac0();
   input += synapse0x22ebb00();
   input += synapse0x22ebb40();
   input += synapse0x22ebb80();
   input += synapse0x22ebbc0();
   input += synapse0x22ebc00();
   input += synapse0x22ebc40();
   input += synapse0x22ebc80();
   input += synapse0x22ebcc0();
   input += synapse0x22e4b60();
   input += synapse0x22e4ba0();
   input += synapse0x22ebe10();
   input += synapse0x22ebe50();
   input += synapse0x22ebe90();
   input += synapse0x22ebed0();
   input += synapse0x22ebf10();
   input += synapse0x22ebf50();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22eac50() {
   double input = input0x22eac50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22ebf90() {
   double input = 3.08763;
   input += synapse0x22ec2d0();
   input += synapse0x22ec310();
   input += synapse0x22ec350();
   input += synapse0x22ec390();
   input += synapse0x22ec3d0();
   input += synapse0x22ec410();
   input += synapse0x22ec450();
   input += synapse0x22ec490();
   input += synapse0x22ec4d0();
   input += synapse0x22ec510();
   input += synapse0x22ec550();
   input += synapse0x22ec590();
   input += synapse0x22ec5d0();
   input += synapse0x22ec610();
   input += synapse0x22ec650();
   input += synapse0x22ec690();
   input += synapse0x22ec7e0();
   input += synapse0x22ec120();
   input += synapse0x22ec160();
   input += synapse0x22ed930();
   input += synapse0x22ed970();
   input += synapse0x22ed9b0();
   input += synapse0x22ed9f0();
   input += synapse0x22eda30();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22ebf90() {
   double input = input0x22ebf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22eda70() {
   double input = -1.50389;
   input += synapse0x22eddb0();
   input += synapse0x22eddf0();
   input += synapse0x22ede30();
   input += synapse0x22ede70();
   input += synapse0x22edeb0();
   input += synapse0x22edef0();
   input += synapse0x22edf30();
   input += synapse0x22edf70();
   input += synapse0x22edfb0();
   input += synapse0x20af1e0();
   input += synapse0x20af220();
   input += synapse0x20af260();
   input += synapse0x20af2a0();
   input += synapse0x20af2e0();
   input += synapse0x20af320();
   input += synapse0x20af360();
   input += synapse0x22edc00();
   input += synapse0x22edc40();
   input += synapse0x20af4b0();
   input += synapse0x20af4f0();
   input += synapse0x20af530();
   input += synapse0x20af570();
   input += synapse0x20af5b0();
   input += synapse0x22ee800();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22eda70() {
   double input = input0x22eda70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22ee840() {
   double input = 2.28284;
   input += synapse0x22eeb80();
   input += synapse0x22eebc0();
   input += synapse0x22eec00();
   input += synapse0x22eec40();
   input += synapse0x22eec80();
   input += synapse0x22eecc0();
   input += synapse0x22eed00();
   input += synapse0x22eed40();
   input += synapse0x22eed80();
   input += synapse0x22eedc0();
   input += synapse0x22eee00();
   input += synapse0x22eee40();
   input += synapse0x22eee80();
   input += synapse0x22eeec0();
   input += synapse0x22eef00();
   input += synapse0x22eef40();
   input += synapse0x22ee9d0();
   input += synapse0x22eea10();
   input += synapse0x22ef090();
   input += synapse0x22ef0d0();
   input += synapse0x22ef110();
   input += synapse0x22ef150();
   input += synapse0x22ef190();
   input += synapse0x22ef1d0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22ee840() {
   double input = input0x22ee840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22ef210() {
   double input = 0.651612;
   input += synapse0x22ef550();
   input += synapse0x22ef590();
   input += synapse0x22ef5d0();
   input += synapse0x22ef610();
   input += synapse0x22ef650();
   input += synapse0x22ef690();
   input += synapse0x22ef6d0();
   input += synapse0x22ef710();
   input += synapse0x22ef750();
   input += synapse0x22ef790();
   input += synapse0x22ef7d0();
   input += synapse0x22ef810();
   input += synapse0x22ef850();
   input += synapse0x22ef890();
   input += synapse0x22ef8d0();
   input += synapse0x22ef910();
   input += synapse0x22ef3a0();
   input += synapse0x22ef3e0();
   input += synapse0x22efa60();
   input += synapse0x22efaa0();
   input += synapse0x22efae0();
   input += synapse0x22efb20();
   input += synapse0x22efb60();
   input += synapse0x22efba0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22ef210() {
   double input = input0x22ef210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22efbe0() {
   double input = -0.0946874;
   input += synapse0x22e85a0();
   input += synapse0x22e85e0();
   input += synapse0x22e8620();
   input += synapse0x22e8660();
   input += synapse0x22f0130();
   input += synapse0x22f0170();
   input += synapse0x22f01b0();
   input += synapse0x22f01f0();
   input += synapse0x22f0230();
   input += synapse0x22f0270();
   input += synapse0x22f02b0();
   input += synapse0x22f02f0();
   input += synapse0x22f0330();
   input += synapse0x22f0370();
   input += synapse0x22f03b0();
   input += synapse0x22f03f0();
   input += synapse0x22efd70();
   input += synapse0x22efdb0();
   input += synapse0x22f0540();
   input += synapse0x22f0580();
   input += synapse0x22f05c0();
   input += synapse0x22f0600();
   input += synapse0x22f0640();
   input += synapse0x22f0680();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22efbe0() {
   double input = input0x22efbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f06c0() {
   double input = 1.45544;
   input += synapse0x22f0a00();
   input += synapse0x22f0a40();
   input += synapse0x22f0a80();
   input += synapse0x22f0ac0();
   input += synapse0x22f0b00();
   input += synapse0x22f0b40();
   input += synapse0x22f0b80();
   input += synapse0x22f0bc0();
   input += synapse0x22f0c00();
   input += synapse0x22f0c40();
   input += synapse0x22f0c80();
   input += synapse0x22f0cc0();
   input += synapse0x22f0d00();
   input += synapse0x22f0d40();
   input += synapse0x22f0d80();
   input += synapse0x22f0dc0();
   input += synapse0x22f0850();
   input += synapse0x22f0890();
   input += synapse0x22f0f10();
   input += synapse0x22f0f50();
   input += synapse0x22f0f90();
   input += synapse0x22f0fd0();
   input += synapse0x22f1010();
   input += synapse0x22f1050();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f06c0() {
   double input = input0x22f06c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f1090() {
   double input = 1.36864;
   input += synapse0x22f13d0();
   input += synapse0x22f1410();
   input += synapse0x22f1450();
   input += synapse0x22f1490();
   input += synapse0x22f14d0();
   input += synapse0x22f1510();
   input += synapse0x22f1550();
   input += synapse0x22f1590();
   input += synapse0x22f15d0();
   input += synapse0x22f1610();
   input += synapse0x22f1650();
   input += synapse0x22f1690();
   input += synapse0x22f16d0();
   input += synapse0x22f1710();
   input += synapse0x22f1750();
   input += synapse0x22f1790();
   input += synapse0x22f1220();
   input += synapse0x22f1260();
   input += synapse0x22edff0();
   input += synapse0x22ee030();
   input += synapse0x22ee070();
   input += synapse0x22ee0b0();
   input += synapse0x22ee0f0();
   input += synapse0x22ee130();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f1090() {
   double input = input0x22f1090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22ee170() {
   double input = 2.90496;
   input += synapse0x22ee4b0();
   input += synapse0x22ee4f0();
   input += synapse0x22ee530();
   input += synapse0x22ee570();
   input += synapse0x22ee5b0();
   input += synapse0x22ee5f0();
   input += synapse0x22ee630();
   input += synapse0x22ee670();
   input += synapse0x22ee6b0();
   input += synapse0x22ee6f0();
   input += synapse0x22ee730();
   input += synapse0x22ee770();
   input += synapse0x22ee7b0();
   input += synapse0x22f28f0();
   input += synapse0x22f2930();
   input += synapse0x22f2970();
   input += synapse0x22ee300();
   input += synapse0x22ee340();
   input += synapse0x22f2ac0();
   input += synapse0x22f2b00();
   input += synapse0x22f2b40();
   input += synapse0x22f2b80();
   input += synapse0x22f2bc0();
   input += synapse0x22f2c00();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22ee170() {
   double input = input0x22ee170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f2c40() {
   double input = -0.232851;
   input += synapse0x22f2f80();
   input += synapse0x22f2fc0();
   input += synapse0x22f3000();
   input += synapse0x22f3040();
   input += synapse0x22f3080();
   input += synapse0x22f30c0();
   input += synapse0x22f3100();
   input += synapse0x22f3140();
   input += synapse0x22f3180();
   input += synapse0x22f31c0();
   input += synapse0x22f3200();
   input += synapse0x22f3240();
   input += synapse0x22f3280();
   input += synapse0x22f32c0();
   input += synapse0x22f3300();
   input += synapse0x22f3340();
   input += synapse0x22f2dd0();
   input += synapse0x22f2e10();
   input += synapse0x22f3490();
   input += synapse0x22f34d0();
   input += synapse0x22f3510();
   input += synapse0x22f3550();
   input += synapse0x22f3590();
   input += synapse0x22f35d0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f2c40() {
   double input = input0x22f2c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f3610() {
   double input = 1.41355;
   input += synapse0x22f3950();
   input += synapse0x22f3990();
   input += synapse0x22f39d0();
   input += synapse0x22f3a10();
   input += synapse0x22f3a50();
   input += synapse0x22f3a90();
   input += synapse0x22f3ad0();
   input += synapse0x22f3b10();
   input += synapse0x22f3b50();
   input += synapse0x22f3b90();
   input += synapse0x22f3bd0();
   input += synapse0x22f3c10();
   input += synapse0x22f3c50();
   input += synapse0x22f3c90();
   input += synapse0x22f3cd0();
   input += synapse0x22f3d10();
   input += synapse0x22f37a0();
   input += synapse0x22f37e0();
   input += synapse0x22f3e60();
   input += synapse0x22f3ea0();
   input += synapse0x22f3ee0();
   input += synapse0x22f3f20();
   input += synapse0x22f3f60();
   input += synapse0x22f3fa0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f3610() {
   double input = input0x22f3610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f3fe0() {
   double input = 1.83733;
   input += synapse0x22f4320();
   input += synapse0x22f4360();
   input += synapse0x22f43a0();
   input += synapse0x22f43e0();
   input += synapse0x22f4420();
   input += synapse0x22f4460();
   input += synapse0x22f44a0();
   input += synapse0x22f44e0();
   input += synapse0x22f4520();
   input += synapse0x22f4560();
   input += synapse0x22f45a0();
   input += synapse0x22f45e0();
   input += synapse0x22f4620();
   input += synapse0x22f4660();
   input += synapse0x22f46a0();
   input += synapse0x22f46e0();
   input += synapse0x22f4170();
   input += synapse0x22f41b0();
   input += synapse0x22f4830();
   input += synapse0x22f4870();
   input += synapse0x22f48b0();
   input += synapse0x22f48f0();
   input += synapse0x22f4930();
   input += synapse0x22f4970();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f3fe0() {
   double input = input0x22f3fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f49b0() {
   double input = 0.537138;
   input += synapse0x22f4cf0();
   input += synapse0x22e4f70();
   input += synapse0x22e4fb0();
   input += synapse0x22e52b0();
   input += synapse0x22e52f0();
   input += synapse0x22e55f0();
   input += synapse0x22e5630();
   input += synapse0x22e5930();
   input += synapse0x22e5970();
   input += synapse0x22e5c70();
   input += synapse0x22e5cb0();
   input += synapse0x22e5fb0();
   input += synapse0x22e5ff0();
   input += synapse0x22e62f0();
   input += synapse0x22e6330();
   input += synapse0x22e6630();
   input += synapse0x22e6670();
   input += synapse0x22e6970();
   input += synapse0x22e69b0();
   input += synapse0x22e6cb0();
   input += synapse0x22e6cf0();
   input += synapse0x22e6ff0();
   input += synapse0x22e7030();
   input += synapse0x22e7330();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f49b0() {
   double input = input0x22f49b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f67c0() {
   double input = -1.58441;
   input += synapse0x22e7370();
   input += synapse0x22e8030();
   input += synapse0x22e8070();
   input += synapse0x22f4b40();
   input += synapse0x22f4b80();
   input += synapse0x22e8370();
   input += synapse0x22e83b0();
   input += synapse0x147d430();
   input += synapse0x147d470();
   input += synapse0x22e8af0();
   input += synapse0x22e8b30();
   input += synapse0x22e8e30();
   input += synapse0x22e8e70();
   input += synapse0x22e9170();
   input += synapse0x22e91b0();
   input += synapse0x22e94b0();
   input += synapse0x22e94f0();
   input += synapse0x22e97f0();
   input += synapse0x22e9830();
   input += synapse0x22e9b30();
   input += synapse0x22e9b70();
   input += synapse0x22e7670();
   input += synapse0x22e76b0();
   input += synapse0x22f6a60();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f67c0() {
   double input = input0x22f67c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f6aa0() {
   double input = 0.478249;
   input += synapse0x22f6de0();
   input += synapse0x22f6e20();
   input += synapse0x22f6e60();
   input += synapse0x22f6ea0();
   input += synapse0x22f6ee0();
   input += synapse0x22f6f20();
   input += synapse0x22f6f60();
   input += synapse0x22f6fa0();
   input += synapse0x22f6fe0();
   input += synapse0x22f7020();
   input += synapse0x22f7060();
   input += synapse0x22f70a0();
   input += synapse0x22f70e0();
   input += synapse0x22f7120();
   input += synapse0x22f7160();
   input += synapse0x22f71a0();
   input += synapse0x22f6c30();
   input += synapse0x22f6c70();
   input += synapse0x22f72f0();
   input += synapse0x22f7330();
   input += synapse0x22f7370();
   input += synapse0x22f73b0();
   input += synapse0x22f73f0();
   input += synapse0x22f7430();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f6aa0() {
   double input = input0x22f6aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f7470() {
   double input = -0.319065;
   input += synapse0x22f77b0();
   input += synapse0x22f77f0();
   input += synapse0x22f7830();
   input += synapse0x22f7870();
   input += synapse0x22f78b0();
   input += synapse0x22f78f0();
   input += synapse0x22f7930();
   input += synapse0x22f7970();
   input += synapse0x22f79b0();
   input += synapse0x22f79f0();
   input += synapse0x22f7a30();
   input += synapse0x22f7a70();
   input += synapse0x22f7ab0();
   input += synapse0x22f7af0();
   input += synapse0x22f7b30();
   input += synapse0x22f7b70();
   input += synapse0x22f7600();
   input += synapse0x22f7640();
   input += synapse0x22f7cc0();
   input += synapse0x22f7d00();
   input += synapse0x22f7d40();
   input += synapse0x22f7d80();
   input += synapse0x22f7dc0();
   input += synapse0x22f7e00();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f7470() {
   double input = input0x22f7470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f7e40() {
   double input = -2.04592;
   input += synapse0x22f8180();
   input += synapse0x22f81c0();
   input += synapse0x22f8200();
   input += synapse0x22f8240();
   input += synapse0x22f8280();
   input += synapse0x22f82c0();
   input += synapse0x22f8300();
   input += synapse0x22f8340();
   input += synapse0x22f8380();
   input += synapse0x22f83c0();
   input += synapse0x22f8400();
   input += synapse0x22f8440();
   input += synapse0x22f8480();
   input += synapse0x22f84c0();
   input += synapse0x22f8500();
   input += synapse0x22f8540();
   input += synapse0x22f7fd0();
   input += synapse0x22f8010();
   input += synapse0x22f8690();
   input += synapse0x22f86d0();
   input += synapse0x22f8710();
   input += synapse0x22f8750();
   input += synapse0x22f8790();
   input += synapse0x22f87d0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f7e40() {
   double input = input0x22f7e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f8810() {
   double input = -2.27422;
   input += synapse0x22f8b50();
   input += synapse0x22f8b90();
   input += synapse0x22f8bd0();
   input += synapse0x22f8c10();
   input += synapse0x22f8c50();
   input += synapse0x22f8c90();
   input += synapse0x22f8cd0();
   input += synapse0x22f8d10();
   input += synapse0x22f8d50();
   input += synapse0x22f8d90();
   input += synapse0x22f8dd0();
   input += synapse0x22f8e10();
   input += synapse0x22f8e50();
   input += synapse0x22f8e90();
   input += synapse0x22f8ed0();
   input += synapse0x22f8f10();
   input += synapse0x22f89a0();
   input += synapse0x22f89e0();
   input += synapse0x22f9060();
   input += synapse0x22f90a0();
   input += synapse0x22f90e0();
   input += synapse0x22f9120();
   input += synapse0x22f9160();
   input += synapse0x22f91a0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f8810() {
   double input = input0x22f8810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f91e0() {
   double input = 1.62483;
   input += synapse0x22f9520();
   input += synapse0x22f9560();
   input += synapse0x22f95a0();
   input += synapse0x22f95e0();
   input += synapse0x22f9620();
   input += synapse0x22f9660();
   input += synapse0x22f96a0();
   input += synapse0x22f96e0();
   input += synapse0x22f9720();
   input += synapse0x22f18e0();
   input += synapse0x22f1920();
   input += synapse0x22f1960();
   input += synapse0x22f19a0();
   input += synapse0x22f19e0();
   input += synapse0x22f1a20();
   input += synapse0x22f1a60();
   input += synapse0x22f9370();
   input += synapse0x22f93b0();
   input += synapse0x22f1bb0();
   input += synapse0x22f1bf0();
   input += synapse0x22f1c30();
   input += synapse0x22f1c70();
   input += synapse0x22f1cb0();
   input += synapse0x22f1cf0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f91e0() {
   double input = input0x22f91e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f1d30() {
   double input = -4.56959;
   input += synapse0x22f2070();
   input += synapse0x22f20b0();
   input += synapse0x22f20f0();
   input += synapse0x22f2130();
   input += synapse0x22f2170();
   input += synapse0x22f21b0();
   input += synapse0x22f21f0();
   input += synapse0x22f2230();
   input += synapse0x22f2270();
   input += synapse0x22f22b0();
   input += synapse0x22f22f0();
   input += synapse0x22f2330();
   input += synapse0x22f2370();
   input += synapse0x22f23b0();
   input += synapse0x22f23f0();
   input += synapse0x22f2430();
   input += synapse0x22f1ec0();
   input += synapse0x22f1f00();
   input += synapse0x22f2580();
   input += synapse0x22f25c0();
   input += synapse0x22f2600();
   input += synapse0x22f2640();
   input += synapse0x22f2680();
   input += synapse0x22f26c0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f1d30() {
   double input = input0x22f1d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f2700() {
   double input = -1.10612;
   input += synapse0x22f2890();
   input += synapse0x22fb920();
   input += synapse0x22fb960();
   input += synapse0x22fb9a0();
   input += synapse0x22fb9e0();
   input += synapse0x22fba20();
   input += synapse0x22fba60();
   input += synapse0x22fbaa0();
   input += synapse0x22fbae0();
   input += synapse0x22fbb20();
   input += synapse0x22fbb60();
   input += synapse0x22fbba0();
   input += synapse0x22fbbe0();
   input += synapse0x22fbc20();
   input += synapse0x22fbc60();
   input += synapse0x22fbca0();
   input += synapse0x22fb770();
   input += synapse0x22fb7b0();
   input += synapse0x22fbdf0();
   input += synapse0x22fbe30();
   input += synapse0x22fbe70();
   input += synapse0x22fbeb0();
   input += synapse0x22fbef0();
   input += synapse0x22fbf30();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f2700() {
   double input = input0x22f2700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22fbf70() {
   double input = 0.213336;
   input += synapse0x22fc2b0();
   input += synapse0x22fc2f0();
   input += synapse0x22fc330();
   input += synapse0x22fc370();
   input += synapse0x22fc3b0();
   input += synapse0x22fc3f0();
   input += synapse0x22fc430();
   input += synapse0x22fc470();
   input += synapse0x22fc4b0();
   input += synapse0x22fc4f0();
   input += synapse0x22fc530();
   input += synapse0x22fc570();
   input += synapse0x22fc5b0();
   input += synapse0x22fc5f0();
   input += synapse0x22fc630();
   input += synapse0x22fc670();
   input += synapse0x22fc100();
   input += synapse0x22fc140();
   input += synapse0x22fc7c0();
   input += synapse0x22fc800();
   input += synapse0x22fc840();
   input += synapse0x22fc880();
   input += synapse0x22fc8c0();
   input += synapse0x22fc900();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22fbf70() {
   double input = input0x22fbf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22fc940() {
   double input = 2.65496;
   input += synapse0x22fcc80();
   input += synapse0x22fccc0();
   input += synapse0x22fcd00();
   input += synapse0x22fcd40();
   input += synapse0x22fcd80();
   input += synapse0x22fcdc0();
   input += synapse0x22fce00();
   input += synapse0x22fce40();
   input += synapse0x22fce80();
   input += synapse0x22fcec0();
   input += synapse0x22fcf00();
   input += synapse0x22fcf40();
   input += synapse0x22fcf80();
   input += synapse0x22fcfc0();
   input += synapse0x22fd000();
   input += synapse0x22fd040();
   input += synapse0x22fcad0();
   input += synapse0x22fcb10();
   input += synapse0x22fd190();
   input += synapse0x22fd1d0();
   input += synapse0x22fd210();
   input += synapse0x22fd250();
   input += synapse0x22fd290();
   input += synapse0x22fd2d0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22fc940() {
   double input = input0x22fc940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22fd310() {
   double input = 0.668073;
   input += synapse0x22fd650();
   input += synapse0x22fd690();
   input += synapse0x22fd6d0();
   input += synapse0x22fd710();
   input += synapse0x22fd750();
   input += synapse0x22fd790();
   input += synapse0x22fd7d0();
   input += synapse0x22fd810();
   input += synapse0x22fd850();
   input += synapse0x22fd890();
   input += synapse0x22fd8d0();
   input += synapse0x22fd910();
   input += synapse0x22fd950();
   input += synapse0x22fd990();
   input += synapse0x22fd9d0();
   input += synapse0x22fda10();
   input += synapse0x22fd4a0();
   input += synapse0x22fd4e0();
   input += synapse0x22fdb60();
   input += synapse0x22fdba0();
   input += synapse0x22fdbe0();
   input += synapse0x22fdc20();
   input += synapse0x22fdc60();
   input += synapse0x22fdca0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22fd310() {
   double input = input0x22fd310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22fdce0() {
   double input = -1.90996;
   input += synapse0x22fe020();
   input += synapse0x22fe060();
   input += synapse0x22fe0a0();
   input += synapse0x22fe0e0();
   input += synapse0x22fe120();
   input += synapse0x22fe160();
   input += synapse0x22fe1a0();
   input += synapse0x22fe1e0();
   input += synapse0x22fe220();
   input += synapse0x22fe260();
   input += synapse0x22fe2a0();
   input += synapse0x22fe2e0();
   input += synapse0x22fe320();
   input += synapse0x22fe360();
   input += synapse0x22fe3a0();
   input += synapse0x22fe3e0();
   input += synapse0x22fde70();
   input += synapse0x22fdeb0();
   input += synapse0x22fe530();
   input += synapse0x22fe570();
   input += synapse0x22fe5b0();
   input += synapse0x22fe5f0();
   input += synapse0x22fe630();
   input += synapse0x22fe670();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22fdce0() {
   double input = input0x22fdce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22fe6b0() {
   double input = 4.84956;
   input += synapse0x22fe9f0();
   input += synapse0x22fea30();
   input += synapse0x22fea70();
   input += synapse0x22feab0();
   input += synapse0x22feaf0();
   input += synapse0x22feb30();
   input += synapse0x22feb70();
   input += synapse0x22febb0();
   input += synapse0x22febf0();
   input += synapse0x22fec30();
   input += synapse0x22fec70();
   input += synapse0x22fecb0();
   input += synapse0x22fecf0();
   input += synapse0x22fed30();
   input += synapse0x22fed70();
   input += synapse0x22fedb0();
   input += synapse0x22fe840();
   input += synapse0x22fe880();
   input += synapse0x22fef00();
   input += synapse0x22fef40();
   input += synapse0x22fef80();
   input += synapse0x22fefc0();
   input += synapse0x22ff000();
   input += synapse0x22ff040();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22fe6b0() {
   double input = input0x22fe6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22ff080() {
   double input = -1.43498;
   input += synapse0x22ff3c0();
   input += synapse0x22ff400();
   input += synapse0x22ff440();
   input += synapse0x22ff480();
   input += synapse0x22ff4c0();
   input += synapse0x22ff500();
   input += synapse0x22ff540();
   input += synapse0x22ff580();
   input += synapse0x22ff5c0();
   input += synapse0x22ff600();
   input += synapse0x22ff640();
   input += synapse0x22ff680();
   input += synapse0x22ff6c0();
   input += synapse0x22ff700();
   input += synapse0x22ff740();
   input += synapse0x22ff780();
   input += synapse0x22ff210();
   input += synapse0x22ff250();
   input += synapse0x22ff8d0();
   input += synapse0x22ff910();
   input += synapse0x22ff950();
   input += synapse0x22ff990();
   input += synapse0x22ff9d0();
   input += synapse0x22ffa10();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22ff080() {
   double input = input0x22ff080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22ffa50() {
   double input = 0.297669;
   input += synapse0x22ffd90();
   input += synapse0x22ffdd0();
   input += synapse0x22ffe10();
   input += synapse0x22ffe50();
   input += synapse0x22ffe90();
   input += synapse0x22ffed0();
   input += synapse0x22fff10();
   input += synapse0x22fff50();
   input += synapse0x22fff90();
   input += synapse0x22fffd0();
   input += synapse0x2300010();
   input += synapse0x2300050();
   input += synapse0x2300090();
   input += synapse0x23000d0();
   input += synapse0x2300110();
   input += synapse0x2300150();
   input += synapse0x22ffbe0();
   input += synapse0x22ffc20();
   input += synapse0x23002a0();
   input += synapse0x23002e0();
   input += synapse0x2300320();
   input += synapse0x2300360();
   input += synapse0x23003a0();
   input += synapse0x23003e0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22ffa50() {
   double input = input0x22ffa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2300420() {
   double input = 1.95094;
   input += synapse0x2300760();
   input += synapse0x22f4d30();
   input += synapse0x22f4d70();
   input += synapse0x22f4db0();
   input += synapse0x22f5000();
   input += synapse0x22f5040();
   input += synapse0x22f5080();
   input += synapse0x22f52d0();
   input += synapse0x22f5310();
   input += synapse0x22f5560();
   input += synapse0x22f55a0();
   input += synapse0x22f55e0();
   input += synapse0x22f5830();
   input += synapse0x22f5870();
   input += synapse0x22f5ac0();
   input += synapse0x22f5b00();
   input += synapse0x23005b0();
   input += synapse0x23005f0();
   input += synapse0x22f5c50();
   input += synapse0x22f6160();
   input += synapse0x22f61a0();
   input += synapse0x22f61e0();
   input += synapse0x22f6430();
   input += synapse0x22f6470();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2300420() {
   double input = input0x2300420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f64b0() {
   double input = -1.66339;
   input += synapse0x22f5d20();
   input += synapse0x22f5d60();
   input += synapse0x22f5da0();
   input += synapse0x22f5de0();
   input += synapse0x22f6760();
   input += synapse0x2302ab0();
   input += synapse0x2302af0();
   input += synapse0x2302b30();
   input += synapse0x2302b70();
   input += synapse0x2302bb0();
   input += synapse0x2302bf0();
   input += synapse0x2302c30();
   input += synapse0x2302c70();
   input += synapse0x2302cb0();
   input += synapse0x2302cf0();
   input += synapse0x2302d30();
   input += synapse0x22f6640();
   input += synapse0x22f6680();
   input += synapse0x2302e80();
   input += synapse0x2302ec0();
   input += synapse0x2302f00();
   input += synapse0x2302f40();
   input += synapse0x2302f80();
   input += synapse0x2302fc0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f64b0() {
   double input = input0x22f64b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2303000() {
   double input = 1.92319;
   input += synapse0x2303340();
   input += synapse0x2303380();
   input += synapse0x23033c0();
   input += synapse0x2303400();
   input += synapse0x2303440();
   input += synapse0x2303480();
   input += synapse0x23034c0();
   input += synapse0x2303500();
   input += synapse0x2303540();
   input += synapse0x2303580();
   input += synapse0x23035c0();
   input += synapse0x2303600();
   input += synapse0x2303640();
   input += synapse0x2303680();
   input += synapse0x23036c0();
   input += synapse0x2303700();
   input += synapse0x2303190();
   input += synapse0x23031d0();
   input += synapse0x2303850();
   input += synapse0x2303890();
   input += synapse0x23038d0();
   input += synapse0x2303910();
   input += synapse0x2303950();
   input += synapse0x2303990();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2303000() {
   double input = input0x2303000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x23039d0() {
   double input = -4.18541;
   input += synapse0x2303d10();
   input += synapse0x2303d50();
   input += synapse0x2303d90();
   input += synapse0x2303dd0();
   input += synapse0x2303e10();
   input += synapse0x2303e50();
   input += synapse0x2303e90();
   input += synapse0x2303ed0();
   input += synapse0x2303f10();
   input += synapse0x2303f50();
   input += synapse0x2303f90();
   input += synapse0x2303fd0();
   input += synapse0x2304010();
   input += synapse0x2304050();
   input += synapse0x2304090();
   input += synapse0x23040d0();
   input += synapse0x2303b60();
   input += synapse0x2303ba0();
   input += synapse0x2304220();
   input += synapse0x2304260();
   input += synapse0x23042a0();
   input += synapse0x23042e0();
   input += synapse0x2304320();
   input += synapse0x2304360();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x23039d0() {
   double input = input0x23039d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x23043a0() {
   double input = 3.98273;
   input += synapse0x23046e0();
   input += synapse0x2304720();
   input += synapse0x2304760();
   input += synapse0x23047a0();
   input += synapse0x23047e0();
   input += synapse0x2304820();
   input += synapse0x2304860();
   input += synapse0x23048a0();
   input += synapse0x23048e0();
   input += synapse0x2304920();
   input += synapse0x2304960();
   input += synapse0x23049a0();
   input += synapse0x23049e0();
   input += synapse0x2304a20();
   input += synapse0x2304a60();
   input += synapse0x2304aa0();
   input += synapse0x2304530();
   input += synapse0x2304570();
   input += synapse0x2304bf0();
   input += synapse0x2304c30();
   input += synapse0x2304c70();
   input += synapse0x2304cb0();
   input += synapse0x2304cf0();
   input += synapse0x2304d30();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x23043a0() {
   double input = input0x23043a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2304d70() {
   double input = -2.08828;
   input += synapse0x23050b0();
   input += synapse0x23050f0();
   input += synapse0x2305130();
   input += synapse0x2305170();
   input += synapse0x23051b0();
   input += synapse0x23051f0();
   input += synapse0x2305230();
   input += synapse0x2305270();
   input += synapse0x23052b0();
   input += synapse0x23052f0();
   input += synapse0x2305330();
   input += synapse0x2305370();
   input += synapse0x23053b0();
   input += synapse0x23053f0();
   input += synapse0x2305430();
   input += synapse0x2305470();
   input += synapse0x2304f00();
   input += synapse0x2304f40();
   input += synapse0x23055c0();
   input += synapse0x2305600();
   input += synapse0x2305640();
   input += synapse0x2305680();
   input += synapse0x23056c0();
   input += synapse0x2305700();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2304d70() {
   double input = input0x2304d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2305740() {
   double input = 3.35193;
   input += synapse0x2305a80();
   input += synapse0x2305ac0();
   input += synapse0x2305b00();
   input += synapse0x2305b40();
   input += synapse0x2305b80();
   input += synapse0x2305bc0();
   input += synapse0x2305c00();
   input += synapse0x2305c40();
   input += synapse0x2305c80();
   input += synapse0x2305cc0();
   input += synapse0x2305d00();
   input += synapse0x2305d40();
   input += synapse0x2305d80();
   input += synapse0x2305dc0();
   input += synapse0x2305e00();
   input += synapse0x2305e40();
   input += synapse0x23058d0();
   input += synapse0x2305910();
   input += synapse0x2305f90();
   input += synapse0x2305fd0();
   input += synapse0x2306010();
   input += synapse0x2306050();
   input += synapse0x2306090();
   input += synapse0x23060d0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2305740() {
   double input = input0x2305740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2306110() {
   double input = 0.671687;
   input += synapse0x2306450();
   input += synapse0x2306490();
   input += synapse0x23064d0();
   input += synapse0x2306510();
   input += synapse0x2306550();
   input += synapse0x2306590();
   input += synapse0x23065d0();
   input += synapse0x2306610();
   input += synapse0x2306650();
   input += synapse0x2306690();
   input += synapse0x23066d0();
   input += synapse0x2306710();
   input += synapse0x2306750();
   input += synapse0x2306790();
   input += synapse0x23067d0();
   input += synapse0x2306810();
   input += synapse0x23062a0();
   input += synapse0x23062e0();
   input += synapse0x2306960();
   input += synapse0x23069a0();
   input += synapse0x23069e0();
   input += synapse0x2306a20();
   input += synapse0x2306a60();
   input += synapse0x2306aa0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2306110() {
   double input = input0x2306110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2306ae0() {
   double input = 0.786918;
   input += synapse0x2306e20();
   input += synapse0x2306e60();
   input += synapse0x2306ea0();
   input += synapse0x2306ee0();
   input += synapse0x2306f20();
   input += synapse0x2306f60();
   input += synapse0x2306fa0();
   input += synapse0x2306fe0();
   input += synapse0x2307020();
   input += synapse0x2307060();
   input += synapse0x23070a0();
   input += synapse0x23070e0();
   input += synapse0x2307120();
   input += synapse0x2307160();
   input += synapse0x23071a0();
   input += synapse0x23071e0();
   input += synapse0x2306c70();
   input += synapse0x2306cb0();
   input += synapse0x2307330();
   input += synapse0x2307370();
   input += synapse0x23073b0();
   input += synapse0x23073f0();
   input += synapse0x2307430();
   input += synapse0x2307470();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2306ae0() {
   double input = input0x2306ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x23074b0() {
   double input = 4.25362;
   input += synapse0x22eff20();
   input += synapse0x22eff60();
   input += synapse0x22effa0();
   input += synapse0x22effe0();
   input += synapse0x22f0020();
   input += synapse0x22f0060();
   input += synapse0x22f00a0();
   input += synapse0x22f00e0();
   input += synapse0x2307c00();
   input += synapse0x2307c40();
   input += synapse0x2307c80();
   input += synapse0x2307cc0();
   input += synapse0x2307d00();
   input += synapse0x2307d40();
   input += synapse0x2307d80();
   input += synapse0x2307dc0();
   input += synapse0x2307640();
   input += synapse0x2307680();
   input += synapse0x2307f10();
   input += synapse0x2307f50();
   input += synapse0x2307f90();
   input += synapse0x2307fd0();
   input += synapse0x2308010();
   input += synapse0x2308050();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x23074b0() {
   double input = input0x23074b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2308090() {
   double input = 0.980979;
   input += synapse0x23083d0();
   input += synapse0x2308410();
   input += synapse0x2308450();
   input += synapse0x2308490();
   input += synapse0x23084d0();
   input += synapse0x2308510();
   input += synapse0x2308550();
   input += synapse0x2308590();
   input += synapse0x23085d0();
   input += synapse0x2308610();
   input += synapse0x2308650();
   input += synapse0x2308690();
   input += synapse0x23086d0();
   input += synapse0x2308710();
   input += synapse0x2308750();
   input += synapse0x2308790();
   input += synapse0x2308220();
   input += synapse0x2308260();
   input += synapse0x23088e0();
   input += synapse0x2308920();
   input += synapse0x2308960();
   input += synapse0x23089a0();
   input += synapse0x23089e0();
   input += synapse0x2308a20();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2308090() {
   double input = input0x2308090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2308a60() {
   double input = 3.38271;
   input += synapse0x2308da0();
   input += synapse0x2308de0();
   input += synapse0x2308e20();
   input += synapse0x2308e60();
   input += synapse0x2308ea0();
   input += synapse0x2308ee0();
   input += synapse0x2308f20();
   input += synapse0x2308f60();
   input += synapse0x2308fa0();
   input += synapse0x2308fe0();
   input += synapse0x2309020();
   input += synapse0x2309060();
   input += synapse0x23090a0();
   input += synapse0x23090e0();
   input += synapse0x2309120();
   input += synapse0x2309160();
   input += synapse0x2308bf0();
   input += synapse0x2308c30();
   input += synapse0x22f9760();
   input += synapse0x22f97a0();
   input += synapse0x22f97e0();
   input += synapse0x22f9820();
   input += synapse0x22f9860();
   input += synapse0x22f98a0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2308a60() {
   double input = input0x2308a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22f98e0() {
   double input = -1.16301;
   input += synapse0x22f9c20();
   input += synapse0x22f9c60();
   input += synapse0x22f9ca0();
   input += synapse0x22f9ce0();
   input += synapse0x22f9d20();
   input += synapse0x22f9d60();
   input += synapse0x22f9da0();
   input += synapse0x22f9de0();
   input += synapse0x22f9e20();
   input += synapse0x22f9e60();
   input += synapse0x22f9ea0();
   input += synapse0x22f9ee0();
   input += synapse0x22f9f20();
   input += synapse0x22f9f60();
   input += synapse0x22f9fa0();
   input += synapse0x22f9fe0();
   input += synapse0x22f9a70();
   input += synapse0x22f9ab0();
   input += synapse0x22fa130();
   input += synapse0x22fa170();
   input += synapse0x22fa1b0();
   input += synapse0x22fa1f0();
   input += synapse0x22fa230();
   input += synapse0x22fa270();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22f98e0() {
   double input = input0x22f98e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22fa2b0() {
   double input = 1.1702;
   input += synapse0x22fa5f0();
   input += synapse0x22fa630();
   input += synapse0x22fa670();
   input += synapse0x22fa6b0();
   input += synapse0x22fa6f0();
   input += synapse0x22fa730();
   input += synapse0x22fa770();
   input += synapse0x22fa7b0();
   input += synapse0x22fa7f0();
   input += synapse0x22fa830();
   input += synapse0x22fa870();
   input += synapse0x22fa8b0();
   input += synapse0x22fa8f0();
   input += synapse0x22fa930();
   input += synapse0x22fa970();
   input += synapse0x22fa9b0();
   input += synapse0x22fa440();
   input += synapse0x22fa480();
   input += synapse0x22fab00();
   input += synapse0x22fab40();
   input += synapse0x22fab80();
   input += synapse0x22fabc0();
   input += synapse0x22fac00();
   input += synapse0x22fac40();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22fa2b0() {
   double input = input0x22fa2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x22fac80() {
   double input = -3.70521;
   input += synapse0x22fafc0();
   input += synapse0x22fb000();
   input += synapse0x22fb040();
   input += synapse0x22fb080();
   input += synapse0x22fb0c0();
   input += synapse0x22fb100();
   input += synapse0x22fb140();
   input += synapse0x22fb180();
   input += synapse0x22fb1c0();
   input += synapse0x22fb200();
   input += synapse0x22fb240();
   input += synapse0x22fb280();
   input += synapse0x22fb2c0();
   input += synapse0x22fb300();
   input += synapse0x22fb340();
   input += synapse0x22fb380();
   input += synapse0x22fae10();
   input += synapse0x22fae50();
   input += synapse0x22fb4d0();
   input += synapse0x22fb510();
   input += synapse0x22fb550();
   input += synapse0x22fb590();
   input += synapse0x22fb5d0();
   input += synapse0x22fb610();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x22fac80() {
   double input = input0x22fac80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x230d2c0() {
   double input = -0.665588;
   input += synapse0x230d4e0();
   input += synapse0x230d520();
   input += synapse0x230d560();
   input += synapse0x230d5a0();
   input += synapse0x230d5e0();
   input += synapse0x230d620();
   input += synapse0x230d660();
   input += synapse0x230d6a0();
   input += synapse0x230d6e0();
   input += synapse0x230d720();
   input += synapse0x230d760();
   input += synapse0x230d7a0();
   input += synapse0x230d7e0();
   input += synapse0x230d820();
   input += synapse0x230d860();
   input += synapse0x230d8a0();
   input += synapse0x22fb650();
   input += synapse0x22fb690();
   input += synapse0x230d9f0();
   input += synapse0x230da30();
   input += synapse0x230da70();
   input += synapse0x230dab0();
   input += synapse0x230daf0();
   input += synapse0x230db30();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x230d2c0() {
   double input = input0x230d2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x230db70() {
   double input = -0.607081;
   input += synapse0x230deb0();
   input += synapse0x230def0();
   input += synapse0x230df30();
   input += synapse0x230df70();
   input += synapse0x230dfb0();
   input += synapse0x230dff0();
   input += synapse0x230e030();
   input += synapse0x230e070();
   input += synapse0x230e0b0();
   input += synapse0x230e0f0();
   input += synapse0x230e130();
   input += synapse0x230e170();
   input += synapse0x230e1b0();
   input += synapse0x230e1f0();
   input += synapse0x230e230();
   input += synapse0x230e270();
   input += synapse0x230dd00();
   input += synapse0x230dd40();
   input += synapse0x230e3c0();
   input += synapse0x230e400();
   input += synapse0x230e440();
   input += synapse0x230e480();
   input += synapse0x230e4c0();
   input += synapse0x230e500();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x230db70() {
   double input = input0x230db70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x230e540() {
   double input = -0.81767;
   input += synapse0x230e880();
   input += synapse0x230e8c0();
   input += synapse0x230e900();
   input += synapse0x230e940();
   input += synapse0x230e980();
   input += synapse0x230e9c0();
   input += synapse0x230ea00();
   input += synapse0x230ea40();
   input += synapse0x230ea80();
   input += synapse0x230eac0();
   input += synapse0x230eb00();
   input += synapse0x230eb40();
   input += synapse0x230eb80();
   input += synapse0x230ebc0();
   input += synapse0x230ec00();
   input += synapse0x230ec40();
   input += synapse0x230e6d0();
   input += synapse0x230e710();
   input += synapse0x230ed90();
   input += synapse0x230edd0();
   input += synapse0x230ee10();
   input += synapse0x230ee50();
   input += synapse0x230ee90();
   input += synapse0x230eed0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x230e540() {
   double input = input0x230e540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x230ef10() {
   double input = -1.50291;
   input += synapse0x230f250();
   input += synapse0x230f290();
   input += synapse0x230f2d0();
   input += synapse0x230f310();
   input += synapse0x230f350();
   input += synapse0x230f390();
   input += synapse0x230f3d0();
   input += synapse0x230f410();
   input += synapse0x230f450();
   input += synapse0x230f490();
   input += synapse0x230f4d0();
   input += synapse0x230f510();
   input += synapse0x230f550();
   input += synapse0x230f590();
   input += synapse0x230f5d0();
   input += synapse0x230f610();
   input += synapse0x230f0a0();
   input += synapse0x230f0e0();
   input += synapse0x230f760();
   input += synapse0x230f7a0();
   input += synapse0x230f7e0();
   input += synapse0x230f820();
   input += synapse0x230f860();
   input += synapse0x230f8a0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x230ef10() {
   double input = input0x230ef10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2316110() {
   double input = 0.374142;
   input += synapse0x20af680();
   input += synapse0x20af6c0();
   input += synapse0x22ec240();
   input += synapse0x22ec280();
   input += synapse0x22edd20();
   input += synapse0x22edd60();
   input += synapse0x22eeaf0();
   input += synapse0x22eeb30();
   input += synapse0x22ef4c0();
   input += synapse0x22ef500();
   input += synapse0x22efe90();
   input += synapse0x22efed0();
   input += synapse0x22f0970();
   input += synapse0x22f09b0();
   input += synapse0x22f1340();
   input += synapse0x22f1380();
   input += synapse0x22ee420();
   input += synapse0x22ee460();
   input += synapse0x22f2ef0();
   input += synapse0x22f2f30();
   input += synapse0x22f38c0();
   input += synapse0x22f3900();
   input += synapse0x22f4290();
   input += synapse0x22f42d0();
   input += synapse0x22f4c60();
   input += synapse0x22f4ca0();
   input += synapse0x22e7cf0();
   input += synapse0x22e7d30();
   input += synapse0x22f6d50();
   input += synapse0x22f6d90();
   input += synapse0x22f7720();
   input += synapse0x22f7760();
   input += synapse0x22f80f0();
   input += synapse0x22f8130();
   input += synapse0x22f8ac0();
   input += synapse0x22f8b00();
   input += synapse0x22f9490();
   input += synapse0x22f94d0();
   input += synapse0x22f1fe0();
   input += synapse0x22f2020();
   input += synapse0x22fb890();
   input += synapse0x22fb8d0();
   input += synapse0x22fc220();
   input += synapse0x22fc260();
   input += synapse0x22fcbf0();
   input += synapse0x22fcc30();
   input += synapse0x22fd5c0();
   input += synapse0x22fd600();
   input += synapse0x22fdf90();
   input += synapse0x22fdfd0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2316110() {
   double input = input0x2316110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x23164b0() {
   double input = -0.657136;
   input += synapse0x23006d0();
   input += synapse0x2300710();
   input += synapse0x22f5c90();
   input += synapse0x22f5cd0();
   input += synapse0x23032b0();
   input += synapse0x23032f0();
   input += synapse0x2303c80();
   input += synapse0x2303cc0();
   input += synapse0x2304650();
   input += synapse0x2304690();
   input += synapse0x2305020();
   input += synapse0x2305060();
   input += synapse0x23059f0();
   input += synapse0x2305a30();
   input += synapse0x23063c0();
   input += synapse0x2306400();
   input += synapse0x2306d90();
   input += synapse0x2306dd0();
   input += synapse0x2307760();
   input += synapse0x23077a0();
   input += synapse0x2308340();
   input += synapse0x2308380();
   input += synapse0x2308d10();
   input += synapse0x2308d50();
   input += synapse0x22f9b90();
   input += synapse0x22f9bd0();
   input += synapse0x22fa560();
   input += synapse0x22fa5a0();
   input += synapse0x22faf30();
   input += synapse0x22faf70();
   input += synapse0x230d450();
   input += synapse0x230d490();
   input += synapse0x230de20();
   input += synapse0x230de60();
   input += synapse0x230e7f0();
   input += synapse0x230e830();
   input += synapse0x230f1c0();
   input += synapse0x230f200();
   input += synapse0x22ea030();
   input += synapse0x22ea070();
   input += synapse0x22fe960();
   input += synapse0x22fe9a0();
   input += synapse0x230f8e0();
   input += synapse0x230f920();
   input += synapse0x230f960();
   input += synapse0x230f9a0();
   input += synapse0x2316850();
   input += synapse0x2316890();
   input += synapse0x23168d0();
   input += synapse0x2316910();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x23164b0() {
   double input = input0x23164b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2316950() {
   double input = -0.748888;
   input += synapse0x2316c90();
   input += synapse0x2316cd0();
   input += synapse0x2316d10();
   input += synapse0x2316d50();
   input += synapse0x2316d90();
   input += synapse0x2316dd0();
   input += synapse0x2316e10();
   input += synapse0x2316e50();
   input += synapse0x2316e90();
   input += synapse0x2316ed0();
   input += synapse0x2316f10();
   input += synapse0x2316f50();
   input += synapse0x2316f90();
   input += synapse0x2316fd0();
   input += synapse0x2317010();
   input += synapse0x2317050();
   input += synapse0x2316ae0();
   input += synapse0x2316b20();
   input += synapse0x23171a0();
   input += synapse0x23171e0();
   input += synapse0x2317220();
   input += synapse0x2317260();
   input += synapse0x23172a0();
   input += synapse0x23172e0();
   input += synapse0x2317320();
   input += synapse0x2317360();
   input += synapse0x23173a0();
   input += synapse0x23173e0();
   input += synapse0x2317420();
   input += synapse0x2317460();
   input += synapse0x23174a0();
   input += synapse0x23174e0();
   input += synapse0x2317090();
   input += synapse0x23170d0();
   input += synapse0x2317110();
   input += synapse0x2317150();
   input += synapse0x2317730();
   input += synapse0x2317770();
   input += synapse0x23177b0();
   input += synapse0x23177f0();
   input += synapse0x2317830();
   input += synapse0x2317870();
   input += synapse0x23178b0();
   input += synapse0x23178f0();
   input += synapse0x2317930();
   input += synapse0x2317970();
   input += synapse0x23179b0();
   input += synapse0x23179f0();
   input += synapse0x2317a30();
   input += synapse0x2317a70();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2316950() {
   double input = input0x2316950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2317ab0() {
   double input = -3.83046;
   input += synapse0x2317df0();
   input += synapse0x2317e30();
   input += synapse0x2317e70();
   input += synapse0x2317eb0();
   input += synapse0x2317ef0();
   input += synapse0x2317f30();
   input += synapse0x2317f70();
   input += synapse0x2317fb0();
   input += synapse0x2317ff0();
   input += synapse0x2318030();
   input += synapse0x2318070();
   input += synapse0x23180b0();
   input += synapse0x23180f0();
   input += synapse0x2318130();
   input += synapse0x2318170();
   input += synapse0x23181b0();
   input += synapse0x2317c40();
   input += synapse0x2317c80();
   input += synapse0x2318300();
   input += synapse0x2318340();
   input += synapse0x2318380();
   input += synapse0x23183c0();
   input += synapse0x2318400();
   input += synapse0x2318440();
   input += synapse0x2318480();
   input += synapse0x23184c0();
   input += synapse0x2318500();
   input += synapse0x2318540();
   input += synapse0x2318580();
   input += synapse0x23185c0();
   input += synapse0x2318600();
   input += synapse0x2318640();
   input += synapse0x23181f0();
   input += synapse0x2318230();
   input += synapse0x2318270();
   input += synapse0x23182b0();
   input += synapse0x2318890();
   input += synapse0x23188d0();
   input += synapse0x2318910();
   input += synapse0x2318950();
   input += synapse0x2318990();
   input += synapse0x23189d0();
   input += synapse0x2318a10();
   input += synapse0x2318a50();
   input += synapse0x2318a90();
   input += synapse0x2318ad0();
   input += synapse0x2318b10();
   input += synapse0x2318b50();
   input += synapse0x2318b90();
   input += synapse0x2318bd0();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2317ab0() {
   double input = input0x2317ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2318c10() {
   double input = 0.251139;
   input += synapse0x2318f50();
   input += synapse0x2318f90();
   input += synapse0x2318fd0();
   input += synapse0x2319010();
   input += synapse0x2319050();
   input += synapse0x2319090();
   input += synapse0x23190d0();
   input += synapse0x2319110();
   input += synapse0x2319150();
   input += synapse0x2319190();
   input += synapse0x23191d0();
   input += synapse0x2319210();
   input += synapse0x2319250();
   input += synapse0x2319290();
   input += synapse0x23192d0();
   input += synapse0x2319310();
   input += synapse0x2318da0();
   input += synapse0x2318de0();
   input += synapse0x2319460();
   input += synapse0x23194a0();
   input += synapse0x23194e0();
   input += synapse0x2319520();
   input += synapse0x2319560();
   input += synapse0x23195a0();
   input += synapse0x23195e0();
   input += synapse0x2319620();
   input += synapse0x2319660();
   input += synapse0x23196a0();
   input += synapse0x23196e0();
   input += synapse0x2319720();
   input += synapse0x2319760();
   input += synapse0x23197a0();
   input += synapse0x2319350();
   input += synapse0x2319390();
   input += synapse0x23193d0();
   input += synapse0x2319410();
   input += synapse0x23199f0();
   input += synapse0x2319a30();
   input += synapse0x2319a70();
   input += synapse0x2319ab0();
   input += synapse0x2319af0();
   input += synapse0x2319b30();
   input += synapse0x2319b70();
   input += synapse0x2319bb0();
   input += synapse0x2319bf0();
   input += synapse0x2319c30();
   input += synapse0x2319c70();
   input += synapse0x2319cb0();
   input += synapse0x2319cf0();
   input += synapse0x2319d30();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2318c10() {
   double input = input0x2318c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi2::input0x2319d70() {
   double input = 7.90104;
   input += synapse0x2319f90();
   input += synapse0x2319fd0();
   input += synapse0x231a010();
   input += synapse0x231a050();
   input += synapse0x231a090();
   return input;
}

double NNfunction_nn_chi2_chi2::neuron0x2319d70() {
   double input = input0x2319d70();
   return (input * 1)+0;
}

double NNfunction_nn_chi2_chi2::synapse0x22ea0c0() {
   return (neuron0x22e4de0()*-0.563652);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea100() {
   return (neuron0x22e5090()*-0.0590619);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea140() {
   return (neuron0x22e53d0()*-0.546291);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea180() {
   return (neuron0x22e5710()*1.72287);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea1c0() {
   return (neuron0x22e5a50()*0.163128);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea200() {
   return (neuron0x22e5d90()*-0.00129077);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea240() {
   return (neuron0x22e60d0()*-0.311918);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea280() {
   return (neuron0x22e6410()*0.340878);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea2c0() {
   return (neuron0x22e6750()*0.0472938);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea300() {
   return (neuron0x22e6a90()*-0.369848);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea340() {
   return (neuron0x22e6dd0()*-0.385294);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea380() {
   return (neuron0x22e7110()*-1.02593);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea3c0() {
   return (neuron0x22e7450()*1.03511);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea400() {
   return (neuron0x22e7790()*-1.25479);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea440() {
   return (neuron0x22e7ad0()*-0.260875);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea480() {
   return (neuron0x22e7e10()*0.393104);
}

double NNfunction_nn_chi2_chi2::synapse0x22e9f10() {
   return (neuron0x22e8150()*0.433199);
}

double NNfunction_nn_chi2_chi2::synapse0x22e9f50() {
   return (neuron0x22e86b0()*-0.0101957);
}

double NNfunction_nn_chi2_chi2::synapse0x148f2a0() {
   return (neuron0x22e88d0()*-0.187383);
}

double NNfunction_nn_chi2_chi2::synapse0x148f2e0() {
   return (neuron0x22e8c10()*0.787032);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea5d0() {
   return (neuron0x22e8f50()*0.137866);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea610() {
   return (neuron0x22e9290()*-0.206176);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea650() {
   return (neuron0x22e95d0()*0.143834);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea690() {
   return (neuron0x22e9910()*1.17346);
}

double NNfunction_nn_chi2_chi2::synapse0x22eaa10() {
   return (neuron0x22e4de0()*0.11965);
}

double NNfunction_nn_chi2_chi2::synapse0x22eaa50() {
   return (neuron0x22e5090()*-11.2599);
}

double NNfunction_nn_chi2_chi2::synapse0x22eaa90() {
   return (neuron0x22e53d0()*0.457855);
}

double NNfunction_nn_chi2_chi2::synapse0x22eaad0() {
   return (neuron0x22e5710()*-0.0301169);
}

double NNfunction_nn_chi2_chi2::synapse0x22eab10() {
   return (neuron0x22e5a50()*-0.0315476);
}

double NNfunction_nn_chi2_chi2::synapse0x22eab50() {
   return (neuron0x22e5d90()*-0.0545794);
}

double NNfunction_nn_chi2_chi2::synapse0x22eab90() {
   return (neuron0x22e60d0()*-0.0822251);
}

double NNfunction_nn_chi2_chi2::synapse0x22eabd0() {
   return (neuron0x22e6410()*-0.102199);
}

double NNfunction_nn_chi2_chi2::synapse0x22eac10() {
   return (neuron0x22e6750()*-0.0479534);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea4c0() {
   return (neuron0x22e6a90()*0.00914802);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea500() {
   return (neuron0x22e6dd0()*0.0460051);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea540() {
   return (neuron0x22e7110()*0.147124);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea580() {
   return (neuron0x22e7450()*-0.143156);
}

double NNfunction_nn_chi2_chi2::synapse0x22eae60() {
   return (neuron0x22e7790()*-0.0793812);
}

double NNfunction_nn_chi2_chi2::synapse0x22eaea0() {
   return (neuron0x22e7ad0()*-0.126962);
}

double NNfunction_nn_chi2_chi2::synapse0x22eaee0() {
   return (neuron0x22e7e10()*0.00951324);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea860() {
   return (neuron0x22e8150()*0.0810447);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea8a0() {
   return (neuron0x22e86b0()*-0.0895099);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb030() {
   return (neuron0x22e88d0()*-0.0236202);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb070() {
   return (neuron0x22e8c10()*0.0439859);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb0b0() {
   return (neuron0x22e8f50()*-0.0772817);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb0f0() {
   return (neuron0x22e9290()*-0.0661847);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb130() {
   return (neuron0x22e95d0()*0.0499184);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb170() {
   return (neuron0x22e9910()*0.068338);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb4f0() {
   return (neuron0x22e4de0()*-0.371438);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb530() {
   return (neuron0x22e5090()*0.189967);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb570() {
   return (neuron0x22e53d0()*0.0109958);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb5b0() {
   return (neuron0x22e5710()*0.365387);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb5f0() {
   return (neuron0x22e5a50()*0.0999787);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb630() {
   return (neuron0x22e5d90()*-0.312791);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb670() {
   return (neuron0x22e60d0()*0.411486);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb6b0() {
   return (neuron0x22e6410()*0.291641);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb6f0() {
   return (neuron0x22e6750()*-0.0186187);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb730() {
   return (neuron0x22e6a90()*0.0778288);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb770() {
   return (neuron0x22e6dd0()*1.29833);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb7b0() {
   return (neuron0x22e7110()*-1.09775);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb7f0() {
   return (neuron0x22e7450()*0.502549);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb830() {
   return (neuron0x22e7790()*-1.61784);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb870() {
   return (neuron0x22e7ad0()*-0.40611);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb8b0() {
   return (neuron0x22e7e10()*-0.774735);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb340() {
   return (neuron0x22e8150()*0.181278);
}

double NNfunction_nn_chi2_chi2::synapse0x22eb380() {
   return (neuron0x22e86b0()*0.47203);
}

double NNfunction_nn_chi2_chi2::synapse0x1018f10() {
   return (neuron0x22e88d0()*0.182354);
}

double NNfunction_nn_chi2_chi2::synapse0x20aee90() {
   return (neuron0x22e8c10()*-0.323601);
}

double NNfunction_nn_chi2_chi2::synapse0x20aeed0() {
   return (neuron0x22e8f50()*-0.802439);
}

double NNfunction_nn_chi2_chi2::synapse0x22ed7f0() {
   return (neuron0x22e9290()*0.159237);
}

double NNfunction_nn_chi2_chi2::synapse0x22ed830() {
   return (neuron0x22e95d0()*0.171772);
}

double NNfunction_nn_chi2_chi2::synapse0x22e4b20() {
   return (neuron0x22e9910()*0.431175);
}

double NNfunction_nn_chi2_chi2::synapse0x22e4bf0() {
   return (neuron0x22e4de0()*0.0201292);
}

double NNfunction_nn_chi2_chi2::synapse0x20af710() {
   return (neuron0x22e5090()*-3.97955);
}

double NNfunction_nn_chi2_chi2::synapse0x22eade0() {
   return (neuron0x22e53d0()*1.94376);
}

double NNfunction_nn_chi2_chi2::synapse0x22eae20() {
   return (neuron0x22e5710()*0.00148602);
}

double NNfunction_nn_chi2_chi2::synapse0x22eba00() {
   return (neuron0x22e5a50()*0.016646);
}

double NNfunction_nn_chi2_chi2::synapse0x22eba40() {
   return (neuron0x22e5d90()*-0.0311953);
}

double NNfunction_nn_chi2_chi2::synapse0x22eba80() {
   return (neuron0x22e60d0()*0.0144561);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebac0() {
   return (neuron0x22e6410()*0.0108469);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebb00() {
   return (neuron0x22e6750()*-0.00559342);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebb40() {
   return (neuron0x22e6a90()*-0.0273419);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebb80() {
   return (neuron0x22e6dd0()*-0.0378866);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebbc0() {
   return (neuron0x22e7110()*0.0297838);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebc00() {
   return (neuron0x22e7450()*0.00621312);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebc40() {
   return (neuron0x22e7790()*-0.0345953);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebc80() {
   return (neuron0x22e7ad0()*0.0594486);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebcc0() {
   return (neuron0x22e7e10()*0.0289534);
}

double NNfunction_nn_chi2_chi2::synapse0x22e4b60() {
   return (neuron0x22e8150()*-0.01791);
}

double NNfunction_nn_chi2_chi2::synapse0x22e4ba0() {
   return (neuron0x22e86b0()*0.00255338);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebe10() {
   return (neuron0x22e88d0()*0.00882852);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebe50() {
   return (neuron0x22e8c10()*0.00187868);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebe90() {
   return (neuron0x22e8f50()*0.000240921);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebed0() {
   return (neuron0x22e9290()*0.023004);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebf10() {
   return (neuron0x22e95d0()*0.00675878);
}

double NNfunction_nn_chi2_chi2::synapse0x22ebf50() {
   return (neuron0x22e9910()*0.0267091);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec2d0() {
   return (neuron0x22e4de0()*0.226187);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec310() {
   return (neuron0x22e5090()*-1.22972);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec350() {
   return (neuron0x22e53d0()*-0.717944);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec390() {
   return (neuron0x22e5710()*0.370403);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec3d0() {
   return (neuron0x22e5a50()*-0.498612);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec410() {
   return (neuron0x22e5d90()*-0.13735);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec450() {
   return (neuron0x22e60d0()*0.933269);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec490() {
   return (neuron0x22e6410()*-0.139111);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec4d0() {
   return (neuron0x22e6750()*-1.57498);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec510() {
   return (neuron0x22e6a90()*0.128398);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec550() {
   return (neuron0x22e6dd0()*0.122373);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec590() {
   return (neuron0x22e7110()*2.18808);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec5d0() {
   return (neuron0x22e7450()*-0.856456);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec610() {
   return (neuron0x22e7790()*-0.200357);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec650() {
   return (neuron0x22e7ad0()*1.10179);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec690() {
   return (neuron0x22e7e10()*0.374048);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec7e0() {
   return (neuron0x22e8150()*-0.0571922);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec120() {
   return (neuron0x22e86b0()*-0.304231);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec160() {
   return (neuron0x22e88d0()*-1.0597);
}

double NNfunction_nn_chi2_chi2::synapse0x22ed930() {
   return (neuron0x22e8c10()*0.0519842);
}

double NNfunction_nn_chi2_chi2::synapse0x22ed970() {
   return (neuron0x22e8f50()*-0.496571);
}

double NNfunction_nn_chi2_chi2::synapse0x22ed9b0() {
   return (neuron0x22e9290()*-0.842427);
}

double NNfunction_nn_chi2_chi2::synapse0x22ed9f0() {
   return (neuron0x22e95d0()*0.804548);
}

double NNfunction_nn_chi2_chi2::synapse0x22eda30() {
   return (neuron0x22e9910()*2.6503);
}

double NNfunction_nn_chi2_chi2::synapse0x22eddb0() {
   return (neuron0x22e4de0()*0.162172);
}

double NNfunction_nn_chi2_chi2::synapse0x22eddf0() {
   return (neuron0x22e5090()*0.484826);
}

double NNfunction_nn_chi2_chi2::synapse0x22ede30() {
   return (neuron0x22e53d0()*0.999173);
}

double NNfunction_nn_chi2_chi2::synapse0x22ede70() {
   return (neuron0x22e5710()*0.894148);
}

double NNfunction_nn_chi2_chi2::synapse0x22edeb0() {
   return (neuron0x22e5a50()*0.0881804);
}

double NNfunction_nn_chi2_chi2::synapse0x22edef0() {
   return (neuron0x22e5d90()*-0.397455);
}

double NNfunction_nn_chi2_chi2::synapse0x22edf30() {
   return (neuron0x22e60d0()*1.38211);
}

double NNfunction_nn_chi2_chi2::synapse0x22edf70() {
   return (neuron0x22e6410()*-0.479723);
}

double NNfunction_nn_chi2_chi2::synapse0x22edfb0() {
   return (neuron0x22e6750()*0.443135);
}

double NNfunction_nn_chi2_chi2::synapse0x20af1e0() {
   return (neuron0x22e6a90()*0.0835379);
}

double NNfunction_nn_chi2_chi2::synapse0x20af220() {
   return (neuron0x22e6dd0()*-0.200139);
}

double NNfunction_nn_chi2_chi2::synapse0x20af260() {
   return (neuron0x22e7110()*-0.796304);
}

double NNfunction_nn_chi2_chi2::synapse0x20af2a0() {
   return (neuron0x22e7450()*-1.59232);
}

double NNfunction_nn_chi2_chi2::synapse0x20af2e0() {
   return (neuron0x22e7790()*-0.132786);
}

double NNfunction_nn_chi2_chi2::synapse0x20af320() {
   return (neuron0x22e7ad0()*-0.576264);
}

double NNfunction_nn_chi2_chi2::synapse0x20af360() {
   return (neuron0x22e7e10()*-0.775183);
}

double NNfunction_nn_chi2_chi2::synapse0x22edc00() {
   return (neuron0x22e8150()*0.388087);
}

double NNfunction_nn_chi2_chi2::synapse0x22edc40() {
   return (neuron0x22e86b0()*0.267257);
}

double NNfunction_nn_chi2_chi2::synapse0x20af4b0() {
   return (neuron0x22e88d0()*0.221779);
}

double NNfunction_nn_chi2_chi2::synapse0x20af4f0() {
   return (neuron0x22e8c10()*-0.868027);
}

double NNfunction_nn_chi2_chi2::synapse0x20af530() {
   return (neuron0x22e8f50()*0.976168);
}

double NNfunction_nn_chi2_chi2::synapse0x20af570() {
   return (neuron0x22e9290()*-0.0588217);
}

double NNfunction_nn_chi2_chi2::synapse0x20af5b0() {
   return (neuron0x22e95d0()*0.411045);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee800() {
   return (neuron0x22e9910()*-0.0460328);
}

double NNfunction_nn_chi2_chi2::synapse0x22eeb80() {
   return (neuron0x22e4de0()*-0.356435);
}

double NNfunction_nn_chi2_chi2::synapse0x22eebc0() {
   return (neuron0x22e5090()*0.409496);
}

double NNfunction_nn_chi2_chi2::synapse0x22eec00() {
   return (neuron0x22e53d0()*1.76614);
}

double NNfunction_nn_chi2_chi2::synapse0x22eec40() {
   return (neuron0x22e5710()*0.434675);
}

double NNfunction_nn_chi2_chi2::synapse0x22eec80() {
   return (neuron0x22e5a50()*0.800323);
}

double NNfunction_nn_chi2_chi2::synapse0x22eecc0() {
   return (neuron0x22e5d90()*0.713587);
}

double NNfunction_nn_chi2_chi2::synapse0x22eed00() {
   return (neuron0x22e60d0()*-0.880687);
}

double NNfunction_nn_chi2_chi2::synapse0x22eed40() {
   return (neuron0x22e6410()*0.444263);
}

double NNfunction_nn_chi2_chi2::synapse0x22eed80() {
   return (neuron0x22e6750()*-0.652051);
}

double NNfunction_nn_chi2_chi2::synapse0x22eedc0() {
   return (neuron0x22e6a90()*0.377097);
}

double NNfunction_nn_chi2_chi2::synapse0x22eee00() {
   return (neuron0x22e6dd0()*0.00474838);
}

double NNfunction_nn_chi2_chi2::synapse0x22eee40() {
   return (neuron0x22e7110()*-1.48151);
}

double NNfunction_nn_chi2_chi2::synapse0x22eee80() {
   return (neuron0x22e7450()*0.544747);
}

double NNfunction_nn_chi2_chi2::synapse0x22eeec0() {
   return (neuron0x22e7790()*-1.17749);
}

double NNfunction_nn_chi2_chi2::synapse0x22eef00() {
   return (neuron0x22e7ad0()*1.33945);
}

double NNfunction_nn_chi2_chi2::synapse0x22eef40() {
   return (neuron0x22e7e10()*-0.0736298);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee9d0() {
   return (neuron0x22e8150()*0.171773);
}

double NNfunction_nn_chi2_chi2::synapse0x22eea10() {
   return (neuron0x22e86b0()*0.833701);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef090() {
   return (neuron0x22e88d0()*0.255235);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef0d0() {
   return (neuron0x22e8c10()*-0.103494);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef110() {
   return (neuron0x22e8f50()*-0.470029);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef150() {
   return (neuron0x22e9290()*-1.07061);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef190() {
   return (neuron0x22e95d0()*-0.233046);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef1d0() {
   return (neuron0x22e9910()*1.01484);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef550() {
   return (neuron0x22e4de0()*-0.111319);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef590() {
   return (neuron0x22e5090()*11.77);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef5d0() {
   return (neuron0x22e53d0()*0.428157);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef610() {
   return (neuron0x22e5710()*-0.0416235);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef650() {
   return (neuron0x22e5a50()*0.0471646);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef690() {
   return (neuron0x22e5d90()*-0.0183828);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef6d0() {
   return (neuron0x22e60d0()*0.0173385);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef710() {
   return (neuron0x22e6410()*-0.0527142);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef750() {
   return (neuron0x22e6750()*-0.0207545);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef790() {
   return (neuron0x22e6a90()*0.0225992);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef7d0() {
   return (neuron0x22e6dd0()*-0.0196779);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef810() {
   return (neuron0x22e7110()*0.04027);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef850() {
   return (neuron0x22e7450()*-0.0313928);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef890() {
   return (neuron0x22e7790()*0.063997);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef8d0() {
   return (neuron0x22e7ad0()*0.017607);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef910() {
   return (neuron0x22e7e10()*0.00520221);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef3a0() {
   return (neuron0x22e8150()*-0.0820876);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef3e0() {
   return (neuron0x22e86b0()*-0.016976);
}

double NNfunction_nn_chi2_chi2::synapse0x22efa60() {
   return (neuron0x22e88d0()*0.0131056);
}

double NNfunction_nn_chi2_chi2::synapse0x22efaa0() {
   return (neuron0x22e8c10()*-0.0334052);
}

double NNfunction_nn_chi2_chi2::synapse0x22efae0() {
   return (neuron0x22e8f50()*0.164602);
}

double NNfunction_nn_chi2_chi2::synapse0x22efb20() {
   return (neuron0x22e9290()*-0.0165682);
}

double NNfunction_nn_chi2_chi2::synapse0x22efb60() {
   return (neuron0x22e95d0()*0.0251716);
}

double NNfunction_nn_chi2_chi2::synapse0x22efba0() {
   return (neuron0x22e9910()*-4.91545);
}

double NNfunction_nn_chi2_chi2::synapse0x22e85a0() {
   return (neuron0x22e4de0()*-0.0225676);
}

double NNfunction_nn_chi2_chi2::synapse0x22e85e0() {
   return (neuron0x22e5090()*-0.179547);
}

double NNfunction_nn_chi2_chi2::synapse0x22e8620() {
   return (neuron0x22e53d0()*-1.67885);
}

double NNfunction_nn_chi2_chi2::synapse0x22e8660() {
   return (neuron0x22e5710()*-0.00537372);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0130() {
   return (neuron0x22e5a50()*-0.0504725);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0170() {
   return (neuron0x22e5d90()*0.0343514);
}

double NNfunction_nn_chi2_chi2::synapse0x22f01b0() {
   return (neuron0x22e60d0()*0.00563665);
}

double NNfunction_nn_chi2_chi2::synapse0x22f01f0() {
   return (neuron0x22e6410()*-0.0359569);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0230() {
   return (neuron0x22e6750()*-0.0261103);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0270() {
   return (neuron0x22e6a90()*0.00442354);
}

double NNfunction_nn_chi2_chi2::synapse0x22f02b0() {
   return (neuron0x22e6dd0()*-0.0010018);
}

double NNfunction_nn_chi2_chi2::synapse0x22f02f0() {
   return (neuron0x22e7110()*-0.0026624);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0330() {
   return (neuron0x22e7450()*0.047707);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0370() {
   return (neuron0x22e7790()*0.0179198);
}

double NNfunction_nn_chi2_chi2::synapse0x22f03b0() {
   return (neuron0x22e7ad0()*0.270666);
}

double NNfunction_nn_chi2_chi2::synapse0x22f03f0() {
   return (neuron0x22e7e10()*0.0516941);
}

double NNfunction_nn_chi2_chi2::synapse0x22efd70() {
   return (neuron0x22e8150()*0.0391657);
}

double NNfunction_nn_chi2_chi2::synapse0x22efdb0() {
   return (neuron0x22e86b0()*-0.00726351);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0540() {
   return (neuron0x22e88d0()*0.0134529);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0580() {
   return (neuron0x22e8c10()*-0.029366);
}

double NNfunction_nn_chi2_chi2::synapse0x22f05c0() {
   return (neuron0x22e8f50()*-0.0610335);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0600() {
   return (neuron0x22e9290()*0.000872257);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0640() {
   return (neuron0x22e95d0()*0.0447915);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0680() {
   return (neuron0x22e9910()*-0.0333623);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0a00() {
   return (neuron0x22e4de0()*-0.0030761);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0a40() {
   return (neuron0x22e5090()*-0.301716);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0a80() {
   return (neuron0x22e53d0()*0.161394);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0ac0() {
   return (neuron0x22e5710()*0.834268);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0b00() {
   return (neuron0x22e5a50()*0.179012);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0b40() {
   return (neuron0x22e5d90()*0.16559);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0b80() {
   return (neuron0x22e60d0()*0.128939);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0bc0() {
   return (neuron0x22e6410()*-0.209918);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0c00() {
   return (neuron0x22e6750()*-1.11644);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0c40() {
   return (neuron0x22e6a90()*-0.152035);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0c80() {
   return (neuron0x22e6dd0()*-1.21139);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0cc0() {
   return (neuron0x22e7110()*0.204754);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0d00() {
   return (neuron0x22e7450()*-0.388544);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0d40() {
   return (neuron0x22e7790()*0.119295);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0d80() {
   return (neuron0x22e7ad0()*0.0685748);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0dc0() {
   return (neuron0x22e7e10()*-0.0326172);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0850() {
   return (neuron0x22e8150()*-0.640616);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0890() {
   return (neuron0x22e86b0()*0.178357);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0f10() {
   return (neuron0x22e88d0()*0.312868);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0f50() {
   return (neuron0x22e8c10()*-0.510678);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0f90() {
   return (neuron0x22e8f50()*-0.221721);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0fd0() {
   return (neuron0x22e9290()*0.077709);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1010() {
   return (neuron0x22e95d0()*0.123189);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1050() {
   return (neuron0x22e9910()*-0.27167);
}

double NNfunction_nn_chi2_chi2::synapse0x22f13d0() {
   return (neuron0x22e4de0()*-0.00142012);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1410() {
   return (neuron0x22e5090()*-2.63118);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1450() {
   return (neuron0x22e53d0()*-1.43837);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1490() {
   return (neuron0x22e5710()*0.00937961);
}

double NNfunction_nn_chi2_chi2::synapse0x22f14d0() {
   return (neuron0x22e5a50()*-0.013786);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1510() {
   return (neuron0x22e5d90()*-0.0925325);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1550() {
   return (neuron0x22e60d0()*0.137946);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1590() {
   return (neuron0x22e6410()*0.0381449);
}

double NNfunction_nn_chi2_chi2::synapse0x22f15d0() {
   return (neuron0x22e6750()*0.0791558);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1610() {
   return (neuron0x22e6a90()*0.109591);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1650() {
   return (neuron0x22e6dd0()*0.012656);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1690() {
   return (neuron0x22e7110()*2.19878);
}

double NNfunction_nn_chi2_chi2::synapse0x22f16d0() {
   return (neuron0x22e7450()*-0.241845);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1710() {
   return (neuron0x22e7790()*-0.0138394);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1750() {
   return (neuron0x22e7ad0()*0.105702);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1790() {
   return (neuron0x22e7e10()*-0.0307084);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1220() {
   return (neuron0x22e8150()*-0.0142108);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1260() {
   return (neuron0x22e86b0()*-0.00720124);
}

double NNfunction_nn_chi2_chi2::synapse0x22edff0() {
   return (neuron0x22e88d0()*0.0101933);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee030() {
   return (neuron0x22e8c10()*0.013426);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee070() {
   return (neuron0x22e8f50()*-0.0248157);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee0b0() {
   return (neuron0x22e9290()*0.00892752);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee0f0() {
   return (neuron0x22e95d0()*-0.0380928);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee130() {
   return (neuron0x22e9910()*-0.0552162);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee4b0() {
   return (neuron0x22e4de0()*-0.0342307);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee4f0() {
   return (neuron0x22e5090()*20.0927);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee530() {
   return (neuron0x22e53d0()*3.40776);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee570() {
   return (neuron0x22e5710()*-0.0249441);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee5b0() {
   return (neuron0x22e5a50()*0.00182887);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee5f0() {
   return (neuron0x22e5d90()*0.0289781);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee630() {
   return (neuron0x22e60d0()*0.0156809);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee670() {
   return (neuron0x22e6410()*-0.00428825);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee6b0() {
   return (neuron0x22e6750()*0.015769);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee6f0() {
   return (neuron0x22e6a90()*0.000498738);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee730() {
   return (neuron0x22e6dd0()*-0.0443787);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee770() {
   return (neuron0x22e7110()*-0.034602);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee7b0() {
   return (neuron0x22e7450()*0.0547064);
}

double NNfunction_nn_chi2_chi2::synapse0x22f28f0() {
   return (neuron0x22e7790()*0.0010372);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2930() {
   return (neuron0x22e7ad0()*-0.0252227);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2970() {
   return (neuron0x22e7e10()*-0.00186408);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee300() {
   return (neuron0x22e8150()*-0.0775657);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee340() {
   return (neuron0x22e86b0()*-0.0545769);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2ac0() {
   return (neuron0x22e88d0()*0.0076968);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2b00() {
   return (neuron0x22e8c10()*-0.0383159);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2b40() {
   return (neuron0x22e8f50()*0.0040521);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2b80() {
   return (neuron0x22e9290()*0.0514556);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2bc0() {
   return (neuron0x22e95d0()*0.0415294);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2c00() {
   return (neuron0x22e9910()*0.0179716);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2f80() {
   return (neuron0x22e4de0()*0.733774);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2fc0() {
   return (neuron0x22e5090()*1.43289);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3000() {
   return (neuron0x22e53d0()*-2.79538);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3040() {
   return (neuron0x22e5710()*1.5564);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3080() {
   return (neuron0x22e5a50()*1.30271);
}

double NNfunction_nn_chi2_chi2::synapse0x22f30c0() {
   return (neuron0x22e5d90()*0.852951);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3100() {
   return (neuron0x22e60d0()*-0.523087);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3140() {
   return (neuron0x22e6410()*-0.149829);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3180() {
   return (neuron0x22e6750()*-0.712526);
}

double NNfunction_nn_chi2_chi2::synapse0x22f31c0() {
   return (neuron0x22e6a90()*-0.0154501);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3200() {
   return (neuron0x22e6dd0()*0.0863387);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3240() {
   return (neuron0x22e7110()*-0.667367);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3280() {
   return (neuron0x22e7450()*-0.275172);
}

double NNfunction_nn_chi2_chi2::synapse0x22f32c0() {
   return (neuron0x22e7790()*1.39471);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3300() {
   return (neuron0x22e7ad0()*0.254113);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3340() {
   return (neuron0x22e7e10()*-0.385684);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2dd0() {
   return (neuron0x22e8150()*0.11326);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2e10() {
   return (neuron0x22e86b0()*1.03434);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3490() {
   return (neuron0x22e88d0()*0.0580529);
}

double NNfunction_nn_chi2_chi2::synapse0x22f34d0() {
   return (neuron0x22e8c10()*-0.554499);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3510() {
   return (neuron0x22e8f50()*-0.543374);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3550() {
   return (neuron0x22e9290()*1.01339);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3590() {
   return (neuron0x22e95d0()*-0.326548);
}

double NNfunction_nn_chi2_chi2::synapse0x22f35d0() {
   return (neuron0x22e9910()*0.377157);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3950() {
   return (neuron0x22e4de0()*-0.141561);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3990() {
   return (neuron0x22e5090()*-0.103829);
}

double NNfunction_nn_chi2_chi2::synapse0x22f39d0() {
   return (neuron0x22e53d0()*-1.2208);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3a10() {
   return (neuron0x22e5710()*-0.863308);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3a50() {
   return (neuron0x22e5a50()*-0.0515195);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3a90() {
   return (neuron0x22e5d90()*0.333782);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3ad0() {
   return (neuron0x22e60d0()*-1.37843);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3b10() {
   return (neuron0x22e6410()*0.453361);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3b50() {
   return (neuron0x22e6750()*-0.522368);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3b90() {
   return (neuron0x22e6a90()*-0.0241091);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3bd0() {
   return (neuron0x22e6dd0()*0.227973);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3c10() {
   return (neuron0x22e7110()*0.674226);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3c50() {
   return (neuron0x22e7450()*1.67692);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3c90() {
   return (neuron0x22e7790()*0.166621);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3cd0() {
   return (neuron0x22e7ad0()*0.444011);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3d10() {
   return (neuron0x22e7e10()*0.779086);
}

double NNfunction_nn_chi2_chi2::synapse0x22f37a0() {
   return (neuron0x22e8150()*-0.370642);
}

double NNfunction_nn_chi2_chi2::synapse0x22f37e0() {
   return (neuron0x22e86b0()*-0.213632);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3e60() {
   return (neuron0x22e88d0()*-0.209629);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3ea0() {
   return (neuron0x22e8c10()*0.907119);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3ee0() {
   return (neuron0x22e8f50()*-0.907525);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3f20() {
   return (neuron0x22e9290()*0.0457885);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3f60() {
   return (neuron0x22e95d0()*-0.40408);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3fa0() {
   return (neuron0x22e9910()*-0.00175576);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4320() {
   return (neuron0x22e4de0()*0.04516);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4360() {
   return (neuron0x22e5090()*-0.0759937);
}

double NNfunction_nn_chi2_chi2::synapse0x22f43a0() {
   return (neuron0x22e53d0()*-2.86005);
}

double NNfunction_nn_chi2_chi2::synapse0x22f43e0() {
   return (neuron0x22e5710()*0.0271684);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4420() {
   return (neuron0x22e5a50()*-0.0255561);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4460() {
   return (neuron0x22e5d90()*0.009174);
}

double NNfunction_nn_chi2_chi2::synapse0x22f44a0() {
   return (neuron0x22e60d0()*0.0216184);
}

double NNfunction_nn_chi2_chi2::synapse0x22f44e0() {
   return (neuron0x22e6410()*0.013802);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4520() {
   return (neuron0x22e6750()*0.0208419);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4560() {
   return (neuron0x22e6a90()*0.0310254);
}

double NNfunction_nn_chi2_chi2::synapse0x22f45a0() {
   return (neuron0x22e6dd0()*-0.00663465);
}

double NNfunction_nn_chi2_chi2::synapse0x22f45e0() {
   return (neuron0x22e7110()*-0.113888);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4620() {
   return (neuron0x22e7450()*-0.0161681);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4660() {
   return (neuron0x22e7790()*0.0252444);
}

double NNfunction_nn_chi2_chi2::synapse0x22f46a0() {
   return (neuron0x22e7ad0()*0.0308875);
}

double NNfunction_nn_chi2_chi2::synapse0x22f46e0() {
   return (neuron0x22e7e10()*0.0442356);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4170() {
   return (neuron0x22e8150()*0.03207);
}

double NNfunction_nn_chi2_chi2::synapse0x22f41b0() {
   return (neuron0x22e86b0()*0.060314);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4830() {
   return (neuron0x22e88d0()*0.0190846);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4870() {
   return (neuron0x22e8c10()*0.0150631);
}

double NNfunction_nn_chi2_chi2::synapse0x22f48b0() {
   return (neuron0x22e8f50()*0.00604815);
}

double NNfunction_nn_chi2_chi2::synapse0x22f48f0() {
   return (neuron0x22e9290()*-0.0159685);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4930() {
   return (neuron0x22e95d0()*0.0185092);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4970() {
   return (neuron0x22e9910()*-0.032332);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4cf0() {
   return (neuron0x22e4de0()*-0.0196793);
}

double NNfunction_nn_chi2_chi2::synapse0x22e4f70() {
   return (neuron0x22e5090()*0.0889355);
}

double NNfunction_nn_chi2_chi2::synapse0x22e4fb0() {
   return (neuron0x22e53d0()*-0.154786);
}

double NNfunction_nn_chi2_chi2::synapse0x22e52b0() {
   return (neuron0x22e5710()*-0.0320914);
}

double NNfunction_nn_chi2_chi2::synapse0x22e52f0() {
   return (neuron0x22e5a50()*-0.0454302);
}

double NNfunction_nn_chi2_chi2::synapse0x22e55f0() {
   return (neuron0x22e5d90()*-0.0236081);
}

double NNfunction_nn_chi2_chi2::synapse0x22e5630() {
   return (neuron0x22e60d0()*-0.10565);
}

double NNfunction_nn_chi2_chi2::synapse0x22e5930() {
   return (neuron0x22e6410()*0.0142163);
}

double NNfunction_nn_chi2_chi2::synapse0x22e5970() {
   return (neuron0x22e6750()*-0.140377);
}

double NNfunction_nn_chi2_chi2::synapse0x22e5c70() {
   return (neuron0x22e6a90()*-0.0175066);
}

double NNfunction_nn_chi2_chi2::synapse0x22e5cb0() {
   return (neuron0x22e6dd0()*-0.178659);
}

double NNfunction_nn_chi2_chi2::synapse0x22e5fb0() {
   return (neuron0x22e7110()*0.0786144);
}

double NNfunction_nn_chi2_chi2::synapse0x22e5ff0() {
   return (neuron0x22e7450()*-0.072028);
}

double NNfunction_nn_chi2_chi2::synapse0x22e62f0() {
   return (neuron0x22e7790()*-0.00870237);
}

double NNfunction_nn_chi2_chi2::synapse0x22e6330() {
   return (neuron0x22e7ad0()*0.0162919);
}

double NNfunction_nn_chi2_chi2::synapse0x22e6630() {
   return (neuron0x22e7e10()*-0.119201);
}

double NNfunction_nn_chi2_chi2::synapse0x22e6670() {
   return (neuron0x22e8150()*-0.218631);
}

double NNfunction_nn_chi2_chi2::synapse0x22e6970() {
   return (neuron0x22e86b0()*0.110154);
}

double NNfunction_nn_chi2_chi2::synapse0x22e69b0() {
   return (neuron0x22e88d0()*0.111452);
}

double NNfunction_nn_chi2_chi2::synapse0x22e6cb0() {
   return (neuron0x22e8c10()*-0.173698);
}

double NNfunction_nn_chi2_chi2::synapse0x22e6cf0() {
   return (neuron0x22e8f50()*-0.657496);
}

double NNfunction_nn_chi2_chi2::synapse0x22e6ff0() {
   return (neuron0x22e9290()*-0.0521992);
}

double NNfunction_nn_chi2_chi2::synapse0x22e7030() {
   return (neuron0x22e95d0()*-0.0379282);
}

double NNfunction_nn_chi2_chi2::synapse0x22e7330() {
   return (neuron0x22e9910()*-0.406013);
}

double NNfunction_nn_chi2_chi2::synapse0x22e7370() {
   return (neuron0x22e4de0()*0.102909);
}

double NNfunction_nn_chi2_chi2::synapse0x22e8030() {
   return (neuron0x22e5090()*-0.0107502);
}

double NNfunction_nn_chi2_chi2::synapse0x22e8070() {
   return (neuron0x22e53d0()*1.57959);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4b40() {
   return (neuron0x22e5710()*0.275149);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4b80() {
   return (neuron0x22e5a50()*-0.80721);
}

double NNfunction_nn_chi2_chi2::synapse0x22e8370() {
   return (neuron0x22e5d90()*0.258881);
}

double NNfunction_nn_chi2_chi2::synapse0x22e83b0() {
   return (neuron0x22e60d0()*-1.82002);
}

double NNfunction_nn_chi2_chi2::synapse0x147d430() {
   return (neuron0x22e6410()*0.773256);
}

double NNfunction_nn_chi2_chi2::synapse0x147d470() {
   return (neuron0x22e6750()*-1.0365);
}

double NNfunction_nn_chi2_chi2::synapse0x22e8af0() {
   return (neuron0x22e6a90()*0.657345);
}

double NNfunction_nn_chi2_chi2::synapse0x22e8b30() {
   return (neuron0x22e6dd0()*0.0170454);
}

double NNfunction_nn_chi2_chi2::synapse0x22e8e30() {
   return (neuron0x22e7110()*0.556026);
}

double NNfunction_nn_chi2_chi2::synapse0x22e8e70() {
   return (neuron0x22e7450()*-0.122982);
}

double NNfunction_nn_chi2_chi2::synapse0x22e9170() {
   return (neuron0x22e7790()*0.0252243);
}

double NNfunction_nn_chi2_chi2::synapse0x22e91b0() {
   return (neuron0x22e7ad0()*-1.71403);
}

double NNfunction_nn_chi2_chi2::synapse0x22e94b0() {
   return (neuron0x22e7e10()*0.349275);
}

double NNfunction_nn_chi2_chi2::synapse0x22e94f0() {
   return (neuron0x22e8150()*-1.11789);
}

double NNfunction_nn_chi2_chi2::synapse0x22e97f0() {
   return (neuron0x22e86b0()*0.619864);
}

double NNfunction_nn_chi2_chi2::synapse0x22e9830() {
   return (neuron0x22e88d0()*0.179729);
}

double NNfunction_nn_chi2_chi2::synapse0x22e9b30() {
   return (neuron0x22e8c10()*-0.545454);
}

double NNfunction_nn_chi2_chi2::synapse0x22e9b70() {
   return (neuron0x22e8f50()*0.727684);
}

double NNfunction_nn_chi2_chi2::synapse0x22e7670() {
   return (neuron0x22e9290()*0.65442);
}

double NNfunction_nn_chi2_chi2::synapse0x22e76b0() {
   return (neuron0x22e95d0()*-1.57387);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6a60() {
   return (neuron0x22e9910()*1.01029);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6de0() {
   return (neuron0x22e4de0()*-0.0211143);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6e20() {
   return (neuron0x22e5090()*-0.000128463);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6e60() {
   return (neuron0x22e53d0()*0.141453);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6ea0() {
   return (neuron0x22e5710()*-0.00506757);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6ee0() {
   return (neuron0x22e5a50()*0.0132245);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6f20() {
   return (neuron0x22e5d90()*-0.00139023);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6f60() {
   return (neuron0x22e60d0()*-0.00204505);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6fa0() {
   return (neuron0x22e6410()*0.000543747);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6fe0() {
   return (neuron0x22e6750()*-0.00711632);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7020() {
   return (neuron0x22e6a90()*-0.0106714);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7060() {
   return (neuron0x22e6dd0()*-0.0105242);
}

double NNfunction_nn_chi2_chi2::synapse0x22f70a0() {
   return (neuron0x22e7110()*-0.0633195);
}

double NNfunction_nn_chi2_chi2::synapse0x22f70e0() {
   return (neuron0x22e7450()*0.00264186);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7120() {
   return (neuron0x22e7790()*-0.0166886);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7160() {
   return (neuron0x22e7ad0()*0.0172901);
}

double NNfunction_nn_chi2_chi2::synapse0x22f71a0() {
   return (neuron0x22e7e10()*-0.00727295);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6c30() {
   return (neuron0x22e8150()*-0.0133158);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6c70() {
   return (neuron0x22e86b0()*-0.0201649);
}

double NNfunction_nn_chi2_chi2::synapse0x22f72f0() {
   return (neuron0x22e88d0()*-0.0244906);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7330() {
   return (neuron0x22e8c10()*-0.00597668);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7370() {
   return (neuron0x22e8f50()*-0.0129137);
}

double NNfunction_nn_chi2_chi2::synapse0x22f73b0() {
   return (neuron0x22e9290()*-0.00839626);
}

double NNfunction_nn_chi2_chi2::synapse0x22f73f0() {
   return (neuron0x22e95d0()*0.0082222);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7430() {
   return (neuron0x22e9910()*11.2941);
}

double NNfunction_nn_chi2_chi2::synapse0x22f77b0() {
   return (neuron0x22e4de0()*-0.163097);
}

double NNfunction_nn_chi2_chi2::synapse0x22f77f0() {
   return (neuron0x22e5090()*1.87432);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7830() {
   return (neuron0x22e53d0()*2.70524);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7870() {
   return (neuron0x22e5710()*-0.242581);
}

double NNfunction_nn_chi2_chi2::synapse0x22f78b0() {
   return (neuron0x22e5a50()*-0.110305);
}

double NNfunction_nn_chi2_chi2::synapse0x22f78f0() {
   return (neuron0x22e5d90()*-0.134315);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7930() {
   return (neuron0x22e60d0()*-0.518041);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7970() {
   return (neuron0x22e6410()*-0.0157677);
}

double NNfunction_nn_chi2_chi2::synapse0x22f79b0() {
   return (neuron0x22e6750()*-0.00380408);
}

double NNfunction_nn_chi2_chi2::synapse0x22f79f0() {
   return (neuron0x22e6a90()*-0.112661);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7a30() {
   return (neuron0x22e6dd0()*0.199863);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7a70() {
   return (neuron0x22e7110()*0.687265);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7ab0() {
   return (neuron0x22e7450()*0.0448609);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7af0() {
   return (neuron0x22e7790()*-0.191995);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7b30() {
   return (neuron0x22e7ad0()*-1.57861);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7b70() {
   return (neuron0x22e7e10()*-0.3047);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7600() {
   return (neuron0x22e8150()*-0.249458);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7640() {
   return (neuron0x22e86b0()*0.127096);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7cc0() {
   return (neuron0x22e88d0()*-0.0434111);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7d00() {
   return (neuron0x22e8c10()*0.0542593);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7d40() {
   return (neuron0x22e8f50()*-0.200499);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7d80() {
   return (neuron0x22e9290()*-0.114085);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7dc0() {
   return (neuron0x22e95d0()*0.0865207);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7e00() {
   return (neuron0x22e9910()*2.86773);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8180() {
   return (neuron0x22e4de0()*-0.0639188);
}

double NNfunction_nn_chi2_chi2::synapse0x22f81c0() {
   return (neuron0x22e5090()*-0.0166662);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8200() {
   return (neuron0x22e53d0()*0.153741);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8240() {
   return (neuron0x22e5710()*-0.0154841);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8280() {
   return (neuron0x22e5a50()*0.0242117);
}

double NNfunction_nn_chi2_chi2::synapse0x22f82c0() {
   return (neuron0x22e5d90()*-0.00377712);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8300() {
   return (neuron0x22e60d0()*-0.00134033);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8340() {
   return (neuron0x22e6410()*-0.0115179);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8380() {
   return (neuron0x22e6750()*-0.00419777);
}

double NNfunction_nn_chi2_chi2::synapse0x22f83c0() {
   return (neuron0x22e6a90()*-0.0158524);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8400() {
   return (neuron0x22e6dd0()*0.00484139);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8440() {
   return (neuron0x22e7110()*-0.0322535);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8480() {
   return (neuron0x22e7450()*-0.0110362);
}

double NNfunction_nn_chi2_chi2::synapse0x22f84c0() {
   return (neuron0x22e7790()*-0.0306197);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8500() {
   return (neuron0x22e7ad0()*-0.0133157);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8540() {
   return (neuron0x22e7e10()*-0.0241946);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7fd0() {
   return (neuron0x22e8150()*-0.0252904);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8010() {
   return (neuron0x22e86b0()*-0.0240725);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8690() {
   return (neuron0x22e88d0()*-0.022665);
}

double NNfunction_nn_chi2_chi2::synapse0x22f86d0() {
   return (neuron0x22e8c10()*-0.0143849);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8710() {
   return (neuron0x22e8f50()*-0.00898145);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8750() {
   return (neuron0x22e9290()*0.00211214);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8790() {
   return (neuron0x22e95d0()*0.00618019);
}

double NNfunction_nn_chi2_chi2::synapse0x22f87d0() {
   return (neuron0x22e9910()*-14.6895);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8b50() {
   return (neuron0x22e4de0()*0.499604);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8b90() {
   return (neuron0x22e5090()*1.98551);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8bd0() {
   return (neuron0x22e53d0()*0.783693);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8c10() {
   return (neuron0x22e5710()*-0.689881);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8c50() {
   return (neuron0x22e5a50()*0.626574);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8c90() {
   return (neuron0x22e5d90()*-0.0530562);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8cd0() {
   return (neuron0x22e60d0()*-1.05947);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8d10() {
   return (neuron0x22e6410()*0.0796119);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8d50() {
   return (neuron0x22e6750()*-0.246034);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8d90() {
   return (neuron0x22e6a90()*-0.221476);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8dd0() {
   return (neuron0x22e6dd0()*0.546311);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8e10() {
   return (neuron0x22e7110()*0.000817052);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8e50() {
   return (neuron0x22e7450()*0.927275);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8e90() {
   return (neuron0x22e7790()*-0.149114);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8ed0() {
   return (neuron0x22e7ad0()*0.453367);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8f10() {
   return (neuron0x22e7e10()*1.77958);
}

double NNfunction_nn_chi2_chi2::synapse0x22f89a0() {
   return (neuron0x22e8150()*0.800905);
}

double NNfunction_nn_chi2_chi2::synapse0x22f89e0() {
   return (neuron0x22e86b0()*-0.941512);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9060() {
   return (neuron0x22e88d0()*-0.268686);
}

double NNfunction_nn_chi2_chi2::synapse0x22f90a0() {
   return (neuron0x22e8c10()*0.371107);
}

double NNfunction_nn_chi2_chi2::synapse0x22f90e0() {
   return (neuron0x22e8f50()*-0.599934);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9120() {
   return (neuron0x22e9290()*-0.550305);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9160() {
   return (neuron0x22e95d0()*0.746873);
}

double NNfunction_nn_chi2_chi2::synapse0x22f91a0() {
   return (neuron0x22e9910()*0.12447);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9520() {
   return (neuron0x22e4de0()*-0.172795);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9560() {
   return (neuron0x22e5090()*-0.185007);
}

double NNfunction_nn_chi2_chi2::synapse0x22f95a0() {
   return (neuron0x22e53d0()*0.225578);
}

double NNfunction_nn_chi2_chi2::synapse0x22f95e0() {
   return (neuron0x22e5710()*0.0796381);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9620() {
   return (neuron0x22e5a50()*0.153488);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9660() {
   return (neuron0x22e5d90()*0.0898861);
}

double NNfunction_nn_chi2_chi2::synapse0x22f96a0() {
   return (neuron0x22e60d0()*0.838695);
}

double NNfunction_nn_chi2_chi2::synapse0x22f96e0() {
   return (neuron0x22e6410()*-0.106612);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9720() {
   return (neuron0x22e6750()*0.208404);
}

double NNfunction_nn_chi2_chi2::synapse0x22f18e0() {
   return (neuron0x22e6a90()*0.921711);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1920() {
   return (neuron0x22e6dd0()*0.24994);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1960() {
   return (neuron0x22e7110()*-0.298383);
}

double NNfunction_nn_chi2_chi2::synapse0x22f19a0() {
   return (neuron0x22e7450()*-0.0991563);
}

double NNfunction_nn_chi2_chi2::synapse0x22f19e0() {
   return (neuron0x22e7790()*1.31875);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1a20() {
   return (neuron0x22e7ad0()*1.0013);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1a60() {
   return (neuron0x22e7e10()*-0.376311);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9370() {
   return (neuron0x22e8150()*-0.464227);
}

double NNfunction_nn_chi2_chi2::synapse0x22f93b0() {
   return (neuron0x22e86b0()*0.664678);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1bb0() {
   return (neuron0x22e88d0()*0.278408);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1bf0() {
   return (neuron0x22e8c10()*-0.0861781);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1c30() {
   return (neuron0x22e8f50()*1.0915);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1c70() {
   return (neuron0x22e9290()*-0.172618);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1cb0() {
   return (neuron0x22e95d0()*-0.270121);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1cf0() {
   return (neuron0x22e9910()*-0.321412);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2070() {
   return (neuron0x22e4de0()*-0.0535228);
}

double NNfunction_nn_chi2_chi2::synapse0x22f20b0() {
   return (neuron0x22e5090()*-0.0516276);
}

double NNfunction_nn_chi2_chi2::synapse0x22f20f0() {
   return (neuron0x22e53d0()*-6.02569);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2130() {
   return (neuron0x22e5710()*0.0158435);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2170() {
   return (neuron0x22e5a50()*-0.0179874);
}

double NNfunction_nn_chi2_chi2::synapse0x22f21b0() {
   return (neuron0x22e5d90()*0.0186036);
}

double NNfunction_nn_chi2_chi2::synapse0x22f21f0() {
   return (neuron0x22e60d0()*0.0230157);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2230() {
   return (neuron0x22e6410()*-0.0470211);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2270() {
   return (neuron0x22e6750()*0.0215099);
}

double NNfunction_nn_chi2_chi2::synapse0x22f22b0() {
   return (neuron0x22e6a90()*0.01261);
}

double NNfunction_nn_chi2_chi2::synapse0x22f22f0() {
   return (neuron0x22e6dd0()*-0.0254478);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2330() {
   return (neuron0x22e7110()*-0.137112);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2370() {
   return (neuron0x22e7450()*0.0261261);
}

double NNfunction_nn_chi2_chi2::synapse0x22f23b0() {
   return (neuron0x22e7790()*0.01763);
}

double NNfunction_nn_chi2_chi2::synapse0x22f23f0() {
   return (neuron0x22e7ad0()*0.0628544);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2430() {
   return (neuron0x22e7e10()*0.0572921);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1ec0() {
   return (neuron0x22e8150()*0.0287449);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1f00() {
   return (neuron0x22e86b0()*0.0324014);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2580() {
   return (neuron0x22e88d0()*0.0155094);
}

double NNfunction_nn_chi2_chi2::synapse0x22f25c0() {
   return (neuron0x22e8c10()*-0.0115421);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2600() {
   return (neuron0x22e8f50()*-0.0263404);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2640() {
   return (neuron0x22e9290()*-0.0199638);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2680() {
   return (neuron0x22e95d0()*0.00537959);
}

double NNfunction_nn_chi2_chi2::synapse0x22f26c0() {
   return (neuron0x22e9910()*-0.0381381);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2890() {
   return (neuron0x22e4de0()*-0.0421263);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb920() {
   return (neuron0x22e5090()*6.95201);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb960() {
   return (neuron0x22e53d0()*-1.87092);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb9a0() {
   return (neuron0x22e5710()*0.00879255);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb9e0() {
   return (neuron0x22e5a50()*-0.0227966);
}

double NNfunction_nn_chi2_chi2::synapse0x22fba20() {
   return (neuron0x22e5d90()*0.053451);
}

double NNfunction_nn_chi2_chi2::synapse0x22fba60() {
   return (neuron0x22e60d0()*-0.0279969);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbaa0() {
   return (neuron0x22e6410()*0.0167984);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbae0() {
   return (neuron0x22e6750()*0.0285141);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbb20() {
   return (neuron0x22e6a90()*0.0417812);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbb60() {
   return (neuron0x22e6dd0()*0.0565766);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbba0() {
   return (neuron0x22e7110()*0.169189);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbbe0() {
   return (neuron0x22e7450()*0.0572455);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbc20() {
   return (neuron0x22e7790()*0.0260311);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbc60() {
   return (neuron0x22e7ad0()*-0.52653);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbca0() {
   return (neuron0x22e7e10()*-0.0487987);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb770() {
   return (neuron0x22e8150()*0.0127586);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb7b0() {
   return (neuron0x22e86b0()*-0.0160404);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbdf0() {
   return (neuron0x22e88d0()*-0.00100976);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbe30() {
   return (neuron0x22e8c10()*-0.00185416);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbe70() {
   return (neuron0x22e8f50()*-0.0280888);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbeb0() {
   return (neuron0x22e9290()*-0.026651);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbef0() {
   return (neuron0x22e95d0()*-0.030319);
}

double NNfunction_nn_chi2_chi2::synapse0x22fbf30() {
   return (neuron0x22e9910()*-0.0888777);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc2b0() {
   return (neuron0x22e4de0()*-0.038202);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc2f0() {
   return (neuron0x22e5090()*7.21166);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc330() {
   return (neuron0x22e53d0()*1.3252);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc370() {
   return (neuron0x22e5710()*0.020519);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc3b0() {
   return (neuron0x22e5a50()*0.0136722);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc3f0() {
   return (neuron0x22e5d90()*0.0182168);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc430() {
   return (neuron0x22e60d0()*0.0253774);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc470() {
   return (neuron0x22e6410()*0.020287);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc4b0() {
   return (neuron0x22e6750()*0.00175724);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc4f0() {
   return (neuron0x22e6a90()*-0.0119691);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc530() {
   return (neuron0x22e6dd0()*-0.017191);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc570() {
   return (neuron0x22e7110()*0.0598017);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc5b0() {
   return (neuron0x22e7450()*0.0771879);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc5f0() {
   return (neuron0x22e7790()*0.0822119);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc630() {
   return (neuron0x22e7ad0()*-0.0686688);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc670() {
   return (neuron0x22e7e10()*-0.0172337);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc100() {
   return (neuron0x22e8150()*-0.00625485);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc140() {
   return (neuron0x22e86b0()*0.0565886);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc7c0() {
   return (neuron0x22e88d0()*0.0250123);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc800() {
   return (neuron0x22e8c10()*0.0238138);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc840() {
   return (neuron0x22e8f50()*0.0621054);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc880() {
   return (neuron0x22e9290()*0.00269629);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc8c0() {
   return (neuron0x22e95d0()*-0.0195739);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc900() {
   return (neuron0x22e9910()*0.0299284);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcc80() {
   return (neuron0x22e4de0()*0.14999);
}

double NNfunction_nn_chi2_chi2::synapse0x22fccc0() {
   return (neuron0x22e5090()*0.0823669);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcd00() {
   return (neuron0x22e53d0()*2.16307);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcd40() {
   return (neuron0x22e5710()*-0.164995);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcd80() {
   return (neuron0x22e5a50()*0.00793438);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcdc0() {
   return (neuron0x22e5d90()*0.0307635);
}

double NNfunction_nn_chi2_chi2::synapse0x22fce00() {
   return (neuron0x22e60d0()*-0.103701);
}

double NNfunction_nn_chi2_chi2::synapse0x22fce40() {
   return (neuron0x22e6410()*-0.0718702);
}

double NNfunction_nn_chi2_chi2::synapse0x22fce80() {
   return (neuron0x22e6750()*-0.0302676);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcec0() {
   return (neuron0x22e6a90()*-0.0445229);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcf00() {
   return (neuron0x22e6dd0()*-0.0739075);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcf40() {
   return (neuron0x22e7110()*-0.482662);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcf80() {
   return (neuron0x22e7450()*0.00449715);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcfc0() {
   return (neuron0x22e7790()*-0.0970907);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd000() {
   return (neuron0x22e7ad0()*-0.239994);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd040() {
   return (neuron0x22e7e10()*-0.0693772);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcad0() {
   return (neuron0x22e8150()*-0.105389);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcb10() {
   return (neuron0x22e86b0()*-0.043944);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd190() {
   return (neuron0x22e88d0()*-0.00254647);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd1d0() {
   return (neuron0x22e8c10()*-0.174287);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd210() {
   return (neuron0x22e8f50()*-0.0244869);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd250() {
   return (neuron0x22e9290()*-0.0747917);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd290() {
   return (neuron0x22e95d0()*-0.0701763);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd2d0() {
   return (neuron0x22e9910()*4.58385);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd650() {
   return (neuron0x22e4de0()*-0.0122871);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd690() {
   return (neuron0x22e5090()*0.0496356);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd6d0() {
   return (neuron0x22e53d0()*-0.18313);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd710() {
   return (neuron0x22e5710()*0.0299174);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd750() {
   return (neuron0x22e5a50()*-0.00686155);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd790() {
   return (neuron0x22e5d90()*0.00111702);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd7d0() {
   return (neuron0x22e60d0()*0.0026431);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd810() {
   return (neuron0x22e6410()*0.0190968);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd850() {
   return (neuron0x22e6750()*0.0439442);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd890() {
   return (neuron0x22e6a90()*0.0200212);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd8d0() {
   return (neuron0x22e6dd0()*-0.00469811);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd910() {
   return (neuron0x22e7110()*0.158342);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd950() {
   return (neuron0x22e7450()*0.0332476);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd990() {
   return (neuron0x22e7790()*0.0232904);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd9d0() {
   return (neuron0x22e7ad0()*-0.00436806);
}

double NNfunction_nn_chi2_chi2::synapse0x22fda10() {
   return (neuron0x22e7e10()*0.0310974);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd4a0() {
   return (neuron0x22e8150()*0.0402458);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd4e0() {
   return (neuron0x22e86b0()*0.0206473);
}

double NNfunction_nn_chi2_chi2::synapse0x22fdb60() {
   return (neuron0x22e88d0()*0.0395644);
}

double NNfunction_nn_chi2_chi2::synapse0x22fdba0() {
   return (neuron0x22e8c10()*-0.0265264);
}

double NNfunction_nn_chi2_chi2::synapse0x22fdbe0() {
   return (neuron0x22e8f50()*-0.0123754);
}

double NNfunction_nn_chi2_chi2::synapse0x22fdc20() {
   return (neuron0x22e9290()*6.61655e-05);
}

double NNfunction_nn_chi2_chi2::synapse0x22fdc60() {
   return (neuron0x22e95d0()*-0.0358311);
}

double NNfunction_nn_chi2_chi2::synapse0x22fdca0() {
   return (neuron0x22e9910()*3.38379);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe020() {
   return (neuron0x22e4de0()*0.540273);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe060() {
   return (neuron0x22e5090()*2.10182);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe0a0() {
   return (neuron0x22e53d0()*0.835115);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe0e0() {
   return (neuron0x22e5710()*-0.670541);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe120() {
   return (neuron0x22e5a50()*0.718887);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe160() {
   return (neuron0x22e5d90()*-0.0116393);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe1a0() {
   return (neuron0x22e60d0()*-1.06232);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe1e0() {
   return (neuron0x22e6410()*0.119977);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe220() {
   return (neuron0x22e6750()*-0.299583);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe260() {
   return (neuron0x22e6a90()*-0.171267);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe2a0() {
   return (neuron0x22e6dd0()*0.615751);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe2e0() {
   return (neuron0x22e7110()*0.0824136);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe320() {
   return (neuron0x22e7450()*1.07812);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe360() {
   return (neuron0x22e7790()*0.0200208);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe3a0() {
   return (neuron0x22e7ad0()*0.508943);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe3e0() {
   return (neuron0x22e7e10()*1.99103);
}

double NNfunction_nn_chi2_chi2::synapse0x22fde70() {
   return (neuron0x22e8150()*0.881744);
}

double NNfunction_nn_chi2_chi2::synapse0x22fdeb0() {
   return (neuron0x22e86b0()*-0.811286);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe530() {
   return (neuron0x22e88d0()*-0.1522);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe570() {
   return (neuron0x22e8c10()*0.355919);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe5b0() {
   return (neuron0x22e8f50()*-0.721751);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe5f0() {
   return (neuron0x22e9290()*-0.54293);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe630() {
   return (neuron0x22e95d0()*0.833163);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe670() {
   return (neuron0x22e9910()*0.20889);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe9f0() {
   return (neuron0x22e4de0()*0.00813341);
}

double NNfunction_nn_chi2_chi2::synapse0x22fea30() {
   return (neuron0x22e5090()*-0.158372);
}

double NNfunction_nn_chi2_chi2::synapse0x22fea70() {
   return (neuron0x22e53d0()*3.62622);
}

double NNfunction_nn_chi2_chi2::synapse0x22feab0() {
   return (neuron0x22e5710()*-0.0120119);
}

double NNfunction_nn_chi2_chi2::synapse0x22feaf0() {
   return (neuron0x22e5a50()*0.00811979);
}

double NNfunction_nn_chi2_chi2::synapse0x22feb30() {
   return (neuron0x22e5d90()*0.0038578);
}

double NNfunction_nn_chi2_chi2::synapse0x22feb70() {
   return (neuron0x22e60d0()*0.00810118);
}

double NNfunction_nn_chi2_chi2::synapse0x22febb0() {
   return (neuron0x22e6410()*0.0433019);
}

double NNfunction_nn_chi2_chi2::synapse0x22febf0() {
   return (neuron0x22e6750()*-0.015525);
}

double NNfunction_nn_chi2_chi2::synapse0x22fec30() {
   return (neuron0x22e6a90()*0.019812);
}

double NNfunction_nn_chi2_chi2::synapse0x22fec70() {
   return (neuron0x22e6dd0()*-0.00389526);
}

double NNfunction_nn_chi2_chi2::synapse0x22fecb0() {
   return (neuron0x22e7110()*-0.134855);
}

double NNfunction_nn_chi2_chi2::synapse0x22fecf0() {
   return (neuron0x22e7450()*-0.0406213);
}

double NNfunction_nn_chi2_chi2::synapse0x22fed30() {
   return (neuron0x22e7790()*-0.0221079);
}

double NNfunction_nn_chi2_chi2::synapse0x22fed70() {
   return (neuron0x22e7ad0()*1.0538);
}

double NNfunction_nn_chi2_chi2::synapse0x22fedb0() {
   return (neuron0x22e7e10()*-0.0523529);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe840() {
   return (neuron0x22e8150()*-0.0134544);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe880() {
   return (neuron0x22e86b0()*-0.0244584);
}

double NNfunction_nn_chi2_chi2::synapse0x22fef00() {
   return (neuron0x22e88d0()*-0.00920756);
}

double NNfunction_nn_chi2_chi2::synapse0x22fef40() {
   return (neuron0x22e8c10()*1.58292e-05);
}

double NNfunction_nn_chi2_chi2::synapse0x22fef80() {
   return (neuron0x22e8f50()*0.0249377);
}

double NNfunction_nn_chi2_chi2::synapse0x22fefc0() {
   return (neuron0x22e9290()*-0.00825157);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff000() {
   return (neuron0x22e95d0()*-0.0224221);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff040() {
   return (neuron0x22e9910()*0.0126416);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff3c0() {
   return (neuron0x22e4de0()*0.0439066);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff400() {
   return (neuron0x22e5090()*-5.56016);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff440() {
   return (neuron0x22e53d0()*-0.941716);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff480() {
   return (neuron0x22e5710()*-0.0390733);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff4c0() {
   return (neuron0x22e5a50()*0.00343239);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff500() {
   return (neuron0x22e5d90()*-0.00213969);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff540() {
   return (neuron0x22e60d0()*-0.0261966);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff580() {
   return (neuron0x22e6410()*0.0275407);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff5c0() {
   return (neuron0x22e6750()*0.0419225);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff600() {
   return (neuron0x22e6a90()*0.00228614);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff640() {
   return (neuron0x22e6dd0()*-0.0672445);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff680() {
   return (neuron0x22e7110()*-0.295506);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff6c0() {
   return (neuron0x22e7450()*-0.0117878);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff700() {
   return (neuron0x22e7790()*-0.109045);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff740() {
   return (neuron0x22e7ad0()*-0.0468189);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff780() {
   return (neuron0x22e7e10()*-0.0254672);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff210() {
   return (neuron0x22e8150()*0.00932389);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff250() {
   return (neuron0x22e86b0()*-0.0838937);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff8d0() {
   return (neuron0x22e88d0()*-0.00702885);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff910() {
   return (neuron0x22e8c10()*-0.014838);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff950() {
   return (neuron0x22e8f50()*-0.113396);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff990() {
   return (neuron0x22e9290()*0.00234676);
}

double NNfunction_nn_chi2_chi2::synapse0x22ff9d0() {
   return (neuron0x22e95d0()*-0.0325281);
}

double NNfunction_nn_chi2_chi2::synapse0x22ffa10() {
   return (neuron0x22e9910()*5.16828);
}

double NNfunction_nn_chi2_chi2::synapse0x22ffd90() {
   return (neuron0x22e4de0()*-0.512046);
}

double NNfunction_nn_chi2_chi2::synapse0x22ffdd0() {
   return (neuron0x22e5090()*0.981471);
}

double NNfunction_nn_chi2_chi2::synapse0x22ffe10() {
   return (neuron0x22e53d0()*-2.0038);
}

double NNfunction_nn_chi2_chi2::synapse0x22ffe50() {
   return (neuron0x22e5710()*-0.415565);
}

double NNfunction_nn_chi2_chi2::synapse0x22ffe90() {
   return (neuron0x22e5a50()*0.23158);
}

double NNfunction_nn_chi2_chi2::synapse0x22ffed0() {
   return (neuron0x22e5d90()*1.33172);
}

double NNfunction_nn_chi2_chi2::synapse0x22fff10() {
   return (neuron0x22e60d0()*0.449891);
}

double NNfunction_nn_chi2_chi2::synapse0x22fff50() {
   return (neuron0x22e6410()*-1.37955);
}

double NNfunction_nn_chi2_chi2::synapse0x22fff90() {
   return (neuron0x22e6750()*0.581226);
}

double NNfunction_nn_chi2_chi2::synapse0x22fffd0() {
   return (neuron0x22e6a90()*0.591757);
}

double NNfunction_nn_chi2_chi2::synapse0x2300010() {
   return (neuron0x22e6dd0()*-0.439847);
}

double NNfunction_nn_chi2_chi2::synapse0x2300050() {
   return (neuron0x22e7110()*-0.916809);
}

double NNfunction_nn_chi2_chi2::synapse0x2300090() {
   return (neuron0x22e7450()*-1.73223);
}

double NNfunction_nn_chi2_chi2::synapse0x23000d0() {
   return (neuron0x22e7790()*-0.643624);
}

double NNfunction_nn_chi2_chi2::synapse0x2300110() {
   return (neuron0x22e7ad0()*1.74581);
}

double NNfunction_nn_chi2_chi2::synapse0x2300150() {
   return (neuron0x22e7e10()*-0.403272);
}

double NNfunction_nn_chi2_chi2::synapse0x22ffbe0() {
   return (neuron0x22e8150()*1.44763);
}

double NNfunction_nn_chi2_chi2::synapse0x22ffc20() {
   return (neuron0x22e86b0()*-1.65143);
}

double NNfunction_nn_chi2_chi2::synapse0x23002a0() {
   return (neuron0x22e88d0()*0.00573449);
}

double NNfunction_nn_chi2_chi2::synapse0x23002e0() {
   return (neuron0x22e8c10()*1.011);
}

double NNfunction_nn_chi2_chi2::synapse0x2300320() {
   return (neuron0x22e8f50()*-1.67449);
}

double NNfunction_nn_chi2_chi2::synapse0x2300360() {
   return (neuron0x22e9290()*0.642012);
}

double NNfunction_nn_chi2_chi2::synapse0x23003a0() {
   return (neuron0x22e95d0()*0.657514);
}

double NNfunction_nn_chi2_chi2::synapse0x23003e0() {
   return (neuron0x22e9910()*-0.670531);
}

double NNfunction_nn_chi2_chi2::synapse0x2300760() {
   return (neuron0x22e4de0()*-0.00335438);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4d30() {
   return (neuron0x22e5090()*6.03657);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4d70() {
   return (neuron0x22e53d0()*1.25781);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4db0() {
   return (neuron0x22e5710()*0.0242798);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5000() {
   return (neuron0x22e5a50()*0.00866262);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5040() {
   return (neuron0x22e5d90()*-0.0168017);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5080() {
   return (neuron0x22e60d0()*0.0167188);
}

double NNfunction_nn_chi2_chi2::synapse0x22f52d0() {
   return (neuron0x22e6410()*-0.0392887);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5310() {
   return (neuron0x22e6750()*-0.0313847);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5560() {
   return (neuron0x22e6a90()*-0.00814388);
}

double NNfunction_nn_chi2_chi2::synapse0x22f55a0() {
   return (neuron0x22e6dd0()*0.0349257);
}

double NNfunction_nn_chi2_chi2::synapse0x22f55e0() {
   return (neuron0x22e7110()*0.230848);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5830() {
   return (neuron0x22e7450()*0.00748556);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5870() {
   return (neuron0x22e7790()*0.0886109);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5ac0() {
   return (neuron0x22e7ad0()*-0.0721886);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5b00() {
   return (neuron0x22e7e10()*0.0120179);
}

double NNfunction_nn_chi2_chi2::synapse0x23005b0() {
   return (neuron0x22e8150()*-0.0182453);
}

double NNfunction_nn_chi2_chi2::synapse0x23005f0() {
   return (neuron0x22e86b0()*0.0723344);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5c50() {
   return (neuron0x22e88d0()*0.0240374);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6160() {
   return (neuron0x22e8c10()*0.00380629);
}

double NNfunction_nn_chi2_chi2::synapse0x22f61a0() {
   return (neuron0x22e8f50()*0.136958);
}

double NNfunction_nn_chi2_chi2::synapse0x22f61e0() {
   return (neuron0x22e9290()*-0.00555873);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6430() {
   return (neuron0x22e95d0()*0.0452347);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6470() {
   return (neuron0x22e9910()*-4.14233);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5d20() {
   return (neuron0x22e4de0()*-0.115189);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5d60() {
   return (neuron0x22e5090()*0.244699);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5da0() {
   return (neuron0x22e53d0()*-0.735134);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5de0() {
   return (neuron0x22e5710()*-0.394374);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6760() {
   return (neuron0x22e5a50()*0.0841008);
}

double NNfunction_nn_chi2_chi2::synapse0x2302ab0() {
   return (neuron0x22e5d90()*-0.551116);
}

double NNfunction_nn_chi2_chi2::synapse0x2302af0() {
   return (neuron0x22e60d0()*-0.171452);
}

double NNfunction_nn_chi2_chi2::synapse0x2302b30() {
   return (neuron0x22e6410()*-0.194448);
}

double NNfunction_nn_chi2_chi2::synapse0x2302b70() {
   return (neuron0x22e6750()*0.323613);
}

double NNfunction_nn_chi2_chi2::synapse0x2302bb0() {
   return (neuron0x22e6a90()*-0.0925439);
}

double NNfunction_nn_chi2_chi2::synapse0x2302bf0() {
   return (neuron0x22e6dd0()*0.873755);
}

double NNfunction_nn_chi2_chi2::synapse0x2302c30() {
   return (neuron0x22e7110()*-3.11796);
}

double NNfunction_nn_chi2_chi2::synapse0x2302c70() {
   return (neuron0x22e7450()*0.693368);
}

double NNfunction_nn_chi2_chi2::synapse0x2302cb0() {
   return (neuron0x22e7790()*0.875997);
}

double NNfunction_nn_chi2_chi2::synapse0x2302cf0() {
   return (neuron0x22e7ad0()*0.146644);
}

double NNfunction_nn_chi2_chi2::synapse0x2302d30() {
   return (neuron0x22e7e10()*-0.0787099);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6640() {
   return (neuron0x22e8150()*0.51715);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6680() {
   return (neuron0x22e86b0()*-0.0744849);
}

double NNfunction_nn_chi2_chi2::synapse0x2302e80() {
   return (neuron0x22e88d0()*-0.0215907);
}

double NNfunction_nn_chi2_chi2::synapse0x2302ec0() {
   return (neuron0x22e8c10()*0.441479);
}

double NNfunction_nn_chi2_chi2::synapse0x2302f00() {
   return (neuron0x22e8f50()*-0.268349);
}

double NNfunction_nn_chi2_chi2::synapse0x2302f40() {
   return (neuron0x22e9290()*0.0287773);
}

double NNfunction_nn_chi2_chi2::synapse0x2302f80() {
   return (neuron0x22e95d0()*-0.176522);
}

double NNfunction_nn_chi2_chi2::synapse0x2302fc0() {
   return (neuron0x22e9910()*0.00687745);
}

double NNfunction_nn_chi2_chi2::synapse0x2303340() {
   return (neuron0x22e4de0()*0.0697941);
}

double NNfunction_nn_chi2_chi2::synapse0x2303380() {
   return (neuron0x22e5090()*0.0128988);
}

double NNfunction_nn_chi2_chi2::synapse0x23033c0() {
   return (neuron0x22e53d0()*-0.541226);
}

double NNfunction_nn_chi2_chi2::synapse0x2303400() {
   return (neuron0x22e5710()*0.0504128);
}

double NNfunction_nn_chi2_chi2::synapse0x2303440() {
   return (neuron0x22e5a50()*-0.00221495);
}

double NNfunction_nn_chi2_chi2::synapse0x2303480() {
   return (neuron0x22e5d90()*0.0230389);
}

double NNfunction_nn_chi2_chi2::synapse0x23034c0() {
   return (neuron0x22e60d0()*0.0379039);
}

double NNfunction_nn_chi2_chi2::synapse0x2303500() {
   return (neuron0x22e6410()*0.0162582);
}

double NNfunction_nn_chi2_chi2::synapse0x2303540() {
   return (neuron0x22e6750()*0.0221764);
}

double NNfunction_nn_chi2_chi2::synapse0x2303580() {
   return (neuron0x22e6a90()*0.0213823);
}

double NNfunction_nn_chi2_chi2::synapse0x23035c0() {
   return (neuron0x22e6dd0()*-0.0196348);
}

double NNfunction_nn_chi2_chi2::synapse0x2303600() {
   return (neuron0x22e7110()*0.102574);
}

double NNfunction_nn_chi2_chi2::synapse0x2303640() {
   return (neuron0x22e7450()*0.0387736);
}

double NNfunction_nn_chi2_chi2::synapse0x2303680() {
   return (neuron0x22e7790()*0.0226774);
}

double NNfunction_nn_chi2_chi2::synapse0x23036c0() {
   return (neuron0x22e7ad0()*0.046364);
}

double NNfunction_nn_chi2_chi2::synapse0x2303700() {
   return (neuron0x22e7e10()*0.0315729);
}

double NNfunction_nn_chi2_chi2::synapse0x2303190() {
   return (neuron0x22e8150()*0.0247032);
}

double NNfunction_nn_chi2_chi2::synapse0x23031d0() {
   return (neuron0x22e86b0()*0.0211994);
}

double NNfunction_nn_chi2_chi2::synapse0x2303850() {
   return (neuron0x22e88d0()*0.0184086);
}

double NNfunction_nn_chi2_chi2::synapse0x2303890() {
   return (neuron0x22e8c10()*0.0106034);
}

double NNfunction_nn_chi2_chi2::synapse0x23038d0() {
   return (neuron0x22e8f50()*-0.021787);
}

double NNfunction_nn_chi2_chi2::synapse0x2303910() {
   return (neuron0x22e9290()*0.00585449);
}

double NNfunction_nn_chi2_chi2::synapse0x2303950() {
   return (neuron0x22e95d0()*-0.00476824);
}

double NNfunction_nn_chi2_chi2::synapse0x2303990() {
   return (neuron0x22e9910()*6.78623);
}

double NNfunction_nn_chi2_chi2::synapse0x2303d10() {
   return (neuron0x22e4de0()*-0.00428295);
}

double NNfunction_nn_chi2_chi2::synapse0x2303d50() {
   return (neuron0x22e5090()*7.6562);
}

double NNfunction_nn_chi2_chi2::synapse0x2303d90() {
   return (neuron0x22e53d0()*-2.67954);
}

double NNfunction_nn_chi2_chi2::synapse0x2303dd0() {
   return (neuron0x22e5710()*-0.0232773);
}

double NNfunction_nn_chi2_chi2::synapse0x2303e10() {
   return (neuron0x22e5a50()*0.0308824);
}

double NNfunction_nn_chi2_chi2::synapse0x2303e50() {
   return (neuron0x22e5d90()*0.000810445);
}

double NNfunction_nn_chi2_chi2::synapse0x2303e90() {
   return (neuron0x22e60d0()*-0.00653211);
}

double NNfunction_nn_chi2_chi2::synapse0x2303ed0() {
   return (neuron0x22e6410()*-0.000978892);
}

double NNfunction_nn_chi2_chi2::synapse0x2303f10() {
   return (neuron0x22e6750()*-0.0110645);
}

double NNfunction_nn_chi2_chi2::synapse0x2303f50() {
   return (neuron0x22e6a90()*-0.0231811);
}

double NNfunction_nn_chi2_chi2::synapse0x2303f90() {
   return (neuron0x22e6dd0()*0.00244847);
}

double NNfunction_nn_chi2_chi2::synapse0x2303fd0() {
   return (neuron0x22e7110()*-0.170453);
}

double NNfunction_nn_chi2_chi2::synapse0x2304010() {
   return (neuron0x22e7450()*-0.0212139);
}

double NNfunction_nn_chi2_chi2::synapse0x2304050() {
   return (neuron0x22e7790()*-0.0164281);
}

double NNfunction_nn_chi2_chi2::synapse0x2304090() {
   return (neuron0x22e7ad0()*0.253035);
}

double NNfunction_nn_chi2_chi2::synapse0x23040d0() {
   return (neuron0x22e7e10()*0.0387927);
}

double NNfunction_nn_chi2_chi2::synapse0x2303b60() {
   return (neuron0x22e8150()*-2.70796e-05);
}

double NNfunction_nn_chi2_chi2::synapse0x2303ba0() {
   return (neuron0x22e86b0()*-0.00129987);
}

double NNfunction_nn_chi2_chi2::synapse0x2304220() {
   return (neuron0x22e88d0()*-0.0239676);
}

double NNfunction_nn_chi2_chi2::synapse0x2304260() {
   return (neuron0x22e8c10()*-0.000300719);
}

double NNfunction_nn_chi2_chi2::synapse0x23042a0() {
   return (neuron0x22e8f50()*-0.00914451);
}

double NNfunction_nn_chi2_chi2::synapse0x23042e0() {
   return (neuron0x22e9290()*0.000122615);
}

double NNfunction_nn_chi2_chi2::synapse0x2304320() {
   return (neuron0x22e95d0()*0.00491365);
}

double NNfunction_nn_chi2_chi2::synapse0x2304360() {
   return (neuron0x22e9910()*-0.0016001);
}

double NNfunction_nn_chi2_chi2::synapse0x23046e0() {
   return (neuron0x22e4de0()*-0.01465);
}

double NNfunction_nn_chi2_chi2::synapse0x2304720() {
   return (neuron0x22e5090()*13.0188);
}

double NNfunction_nn_chi2_chi2::synapse0x2304760() {
   return (neuron0x22e53d0()*3.435);
}

double NNfunction_nn_chi2_chi2::synapse0x23047a0() {
   return (neuron0x22e5710()*-0.0100692);
}

double NNfunction_nn_chi2_chi2::synapse0x23047e0() {
   return (neuron0x22e5a50()*-0.0153004);
}

double NNfunction_nn_chi2_chi2::synapse0x2304820() {
   return (neuron0x22e5d90()*-0.00922256);
}

double NNfunction_nn_chi2_chi2::synapse0x2304860() {
   return (neuron0x22e60d0()*0.0158393);
}

double NNfunction_nn_chi2_chi2::synapse0x23048a0() {
   return (neuron0x22e6410()*-0.00194941);
}

double NNfunction_nn_chi2_chi2::synapse0x23048e0() {
   return (neuron0x22e6750()*0.00595182);
}

double NNfunction_nn_chi2_chi2::synapse0x2304920() {
   return (neuron0x22e6a90()*0.00881868);
}

double NNfunction_nn_chi2_chi2::synapse0x2304960() {
   return (neuron0x22e6dd0()*0.0132215);
}

double NNfunction_nn_chi2_chi2::synapse0x23049a0() {
   return (neuron0x22e7110()*0.272938);
}

double NNfunction_nn_chi2_chi2::synapse0x23049e0() {
   return (neuron0x22e7450()*0.0544121);
}

double NNfunction_nn_chi2_chi2::synapse0x2304a20() {
   return (neuron0x22e7790()*0.047092);
}

double NNfunction_nn_chi2_chi2::synapse0x2304a60() {
   return (neuron0x22e7ad0()*-0.114792);
}

double NNfunction_nn_chi2_chi2::synapse0x2304aa0() {
   return (neuron0x22e7e10()*-0.0470083);
}

double NNfunction_nn_chi2_chi2::synapse0x2304530() {
   return (neuron0x22e8150()*-0.0327214);
}

double NNfunction_nn_chi2_chi2::synapse0x2304570() {
   return (neuron0x22e86b0()*-0.0100518);
}

double NNfunction_nn_chi2_chi2::synapse0x2304bf0() {
   return (neuron0x22e88d0()*0.00744861);
}

double NNfunction_nn_chi2_chi2::synapse0x2304c30() {
   return (neuron0x22e8c10()*0.00658357);
}

double NNfunction_nn_chi2_chi2::synapse0x2304c70() {
   return (neuron0x22e8f50()*0.029722);
}

double NNfunction_nn_chi2_chi2::synapse0x2304cb0() {
   return (neuron0x22e9290()*0.00574138);
}

double NNfunction_nn_chi2_chi2::synapse0x2304cf0() {
   return (neuron0x22e95d0()*-0.00895937);
}

double NNfunction_nn_chi2_chi2::synapse0x2304d30() {
   return (neuron0x22e9910()*-0.0298032);
}

double NNfunction_nn_chi2_chi2::synapse0x23050b0() {
   return (neuron0x22e4de0()*-0.131079);
}

double NNfunction_nn_chi2_chi2::synapse0x23050f0() {
   return (neuron0x22e5090()*0.0421466);
}

double NNfunction_nn_chi2_chi2::synapse0x2305130() {
   return (neuron0x22e53d0()*0.91733);
}

double NNfunction_nn_chi2_chi2::synapse0x2305170() {
   return (neuron0x22e5710()*-0.014913);
}

double NNfunction_nn_chi2_chi2::synapse0x23051b0() {
   return (neuron0x22e5a50()*-0.0497757);
}

double NNfunction_nn_chi2_chi2::synapse0x23051f0() {
   return (neuron0x22e5d90()*-0.0375546);
}

double NNfunction_nn_chi2_chi2::synapse0x2305230() {
   return (neuron0x22e60d0()*-0.0460034);
}

double NNfunction_nn_chi2_chi2::synapse0x2305270() {
   return (neuron0x22e6410()*0.0204087);
}

double NNfunction_nn_chi2_chi2::synapse0x23052b0() {
   return (neuron0x22e6750()*0.0463823);
}

double NNfunction_nn_chi2_chi2::synapse0x23052f0() {
   return (neuron0x22e6a90()*-0.0199762);
}

double NNfunction_nn_chi2_chi2::synapse0x2305330() {
   return (neuron0x22e6dd0()*-0.0102485);
}

double NNfunction_nn_chi2_chi2::synapse0x2305370() {
   return (neuron0x22e7110()*0.349195);
}

double NNfunction_nn_chi2_chi2::synapse0x23053b0() {
   return (neuron0x22e7450()*0.0306682);
}

double NNfunction_nn_chi2_chi2::synapse0x23053f0() {
   return (neuron0x22e7790()*0.0604395);
}

double NNfunction_nn_chi2_chi2::synapse0x2305430() {
   return (neuron0x22e7ad0()*0.0369098);
}

double NNfunction_nn_chi2_chi2::synapse0x2305470() {
   return (neuron0x22e7e10()*0.0449422);
}

double NNfunction_nn_chi2_chi2::synapse0x2304f00() {
   return (neuron0x22e8150()*0.0958111);
}

double NNfunction_nn_chi2_chi2::synapse0x2304f40() {
   return (neuron0x22e86b0()*0.0219738);
}

double NNfunction_nn_chi2_chi2::synapse0x23055c0() {
   return (neuron0x22e88d0()*0.0127277);
}

double NNfunction_nn_chi2_chi2::synapse0x2305600() {
   return (neuron0x22e8c10()*-0.0069957);
}

double NNfunction_nn_chi2_chi2::synapse0x2305640() {
   return (neuron0x22e8f50()*0.0235865);
}

double NNfunction_nn_chi2_chi2::synapse0x2305680() {
   return (neuron0x22e9290()*0.0293248);
}

double NNfunction_nn_chi2_chi2::synapse0x23056c0() {
   return (neuron0x22e95d0()*-0.0172634);
}

double NNfunction_nn_chi2_chi2::synapse0x2305700() {
   return (neuron0x22e9910()*-6.19927);
}

double NNfunction_nn_chi2_chi2::synapse0x2305a80() {
   return (neuron0x22e4de0()*0.0866387);
}

double NNfunction_nn_chi2_chi2::synapse0x2305ac0() {
   return (neuron0x22e5090()*0.0484122);
}

double NNfunction_nn_chi2_chi2::synapse0x2305b00() {
   return (neuron0x22e53d0()*3.90388);
}

double NNfunction_nn_chi2_chi2::synapse0x2305b40() {
   return (neuron0x22e5710()*0.000452658);
}

double NNfunction_nn_chi2_chi2::synapse0x2305b80() {
   return (neuron0x22e5a50()*0.00797863);
}

double NNfunction_nn_chi2_chi2::synapse0x2305bc0() {
   return (neuron0x22e5d90()*-0.0220765);
}

double NNfunction_nn_chi2_chi2::synapse0x2305c00() {
   return (neuron0x22e60d0()*-0.039404);
}

double NNfunction_nn_chi2_chi2::synapse0x2305c40() {
   return (neuron0x22e6410()*0.0443669);
}

double NNfunction_nn_chi2_chi2::synapse0x2305c80() {
   return (neuron0x22e6750()*-0.0183883);
}

double NNfunction_nn_chi2_chi2::synapse0x2305cc0() {
   return (neuron0x22e6a90()*-0.0344672);
}

double NNfunction_nn_chi2_chi2::synapse0x2305d00() {
   return (neuron0x22e6dd0()*0.0289007);
}

double NNfunction_nn_chi2_chi2::synapse0x2305d40() {
   return (neuron0x22e7110()*0.175652);
}

double NNfunction_nn_chi2_chi2::synapse0x2305d80() {
   return (neuron0x22e7450()*-0.0312634);
}

double NNfunction_nn_chi2_chi2::synapse0x2305dc0() {
   return (neuron0x22e7790()*-0.0496425);
}

double NNfunction_nn_chi2_chi2::synapse0x2305e00() {
   return (neuron0x22e7ad0()*-0.11735);
}

double NNfunction_nn_chi2_chi2::synapse0x2305e40() {
   return (neuron0x22e7e10()*-0.091439);
}

double NNfunction_nn_chi2_chi2::synapse0x23058d0() {
   return (neuron0x22e8150()*-0.0342055);
}

double NNfunction_nn_chi2_chi2::synapse0x2305910() {
   return (neuron0x22e86b0()*-0.0147803);
}

double NNfunction_nn_chi2_chi2::synapse0x2305f90() {
   return (neuron0x22e88d0()*-0.0295252);
}

double NNfunction_nn_chi2_chi2::synapse0x2305fd0() {
   return (neuron0x22e8c10()*0.0287637);
}

double NNfunction_nn_chi2_chi2::synapse0x2306010() {
   return (neuron0x22e8f50()*0.00967581);
}

double NNfunction_nn_chi2_chi2::synapse0x2306050() {
   return (neuron0x22e9290()*0.0460612);
}

double NNfunction_nn_chi2_chi2::synapse0x2306090() {
   return (neuron0x22e95d0()*-0.00494484);
}

double NNfunction_nn_chi2_chi2::synapse0x23060d0() {
   return (neuron0x22e9910()*-8.31075);
}

double NNfunction_nn_chi2_chi2::synapse0x2306450() {
   return (neuron0x22e4de0()*-0.584007);
}

double NNfunction_nn_chi2_chi2::synapse0x2306490() {
   return (neuron0x22e5090()*-0.338167);
}

double NNfunction_nn_chi2_chi2::synapse0x23064d0() {
   return (neuron0x22e53d0()*-1.29493);
}

double NNfunction_nn_chi2_chi2::synapse0x2306510() {
   return (neuron0x22e5710()*-1.39407);
}

double NNfunction_nn_chi2_chi2::synapse0x2306550() {
   return (neuron0x22e5a50()*-0.892221);
}

double NNfunction_nn_chi2_chi2::synapse0x2306590() {
   return (neuron0x22e5d90()*-1.3717);
}

double NNfunction_nn_chi2_chi2::synapse0x23065d0() {
   return (neuron0x22e60d0()*-0.817705);
}

double NNfunction_nn_chi2_chi2::synapse0x2306610() {
   return (neuron0x22e6410()*-0.794649);
}

double NNfunction_nn_chi2_chi2::synapse0x2306650() {
   return (neuron0x22e6750()*-1.17614);
}

double NNfunction_nn_chi2_chi2::synapse0x2306690() {
   return (neuron0x22e6a90()*-0.759378);
}

double NNfunction_nn_chi2_chi2::synapse0x23066d0() {
   return (neuron0x22e6dd0()*1.53795);
}

double NNfunction_nn_chi2_chi2::synapse0x2306710() {
   return (neuron0x22e7110()*0.561166);
}

double NNfunction_nn_chi2_chi2::synapse0x2306750() {
   return (neuron0x22e7450()*-0.805667);
}

double NNfunction_nn_chi2_chi2::synapse0x2306790() {
   return (neuron0x22e7790()*-0.104139);
}

double NNfunction_nn_chi2_chi2::synapse0x23067d0() {
   return (neuron0x22e7ad0()*-0.00963664);
}

double NNfunction_nn_chi2_chi2::synapse0x2306810() {
   return (neuron0x22e7e10()*-0.180804);
}

double NNfunction_nn_chi2_chi2::synapse0x23062a0() {
   return (neuron0x22e8150()*1.25715);
}

double NNfunction_nn_chi2_chi2::synapse0x23062e0() {
   return (neuron0x22e86b0()*0.134636);
}

double NNfunction_nn_chi2_chi2::synapse0x2306960() {
   return (neuron0x22e88d0()*1.5574);
}

double NNfunction_nn_chi2_chi2::synapse0x23069a0() {
   return (neuron0x22e8c10()*-1.27466);
}

double NNfunction_nn_chi2_chi2::synapse0x23069e0() {
   return (neuron0x22e8f50()*0.708974);
}

double NNfunction_nn_chi2_chi2::synapse0x2306a20() {
   return (neuron0x22e9290()*-0.872939);
}

double NNfunction_nn_chi2_chi2::synapse0x2306a60() {
   return (neuron0x22e95d0()*-0.609058);
}

double NNfunction_nn_chi2_chi2::synapse0x2306aa0() {
   return (neuron0x22e9910()*-0.223261);
}

double NNfunction_nn_chi2_chi2::synapse0x2306e20() {
   return (neuron0x22e4de0()*-0.0252188);
}

double NNfunction_nn_chi2_chi2::synapse0x2306e60() {
   return (neuron0x22e5090()*-0.136885);
}

double NNfunction_nn_chi2_chi2::synapse0x2306ea0() {
   return (neuron0x22e53d0()*-3.82931);
}

double NNfunction_nn_chi2_chi2::synapse0x2306ee0() {
   return (neuron0x22e5710()*0.0465545);
}

double NNfunction_nn_chi2_chi2::synapse0x2306f20() {
   return (neuron0x22e5a50()*-0.115343);
}

double NNfunction_nn_chi2_chi2::synapse0x2306f60() {
   return (neuron0x22e5d90()*0.184599);
}

double NNfunction_nn_chi2_chi2::synapse0x2306fa0() {
   return (neuron0x22e60d0()*-0.0524555);
}

double NNfunction_nn_chi2_chi2::synapse0x2306fe0() {
   return (neuron0x22e6410()*0.0219915);
}

double NNfunction_nn_chi2_chi2::synapse0x2307020() {
   return (neuron0x22e6750()*-0.0198823);
}

double NNfunction_nn_chi2_chi2::synapse0x2307060() {
   return (neuron0x22e6a90()*0.0790446);
}

double NNfunction_nn_chi2_chi2::synapse0x23070a0() {
   return (neuron0x22e6dd0()*0.00246438);
}

double NNfunction_nn_chi2_chi2::synapse0x23070e0() {
   return (neuron0x22e7110()*-1.4787);
}

double NNfunction_nn_chi2_chi2::synapse0x2307120() {
   return (neuron0x22e7450()*-0.256559);
}

double NNfunction_nn_chi2_chi2::synapse0x2307160() {
   return (neuron0x22e7790()*0.0886787);
}

double NNfunction_nn_chi2_chi2::synapse0x23071a0() {
   return (neuron0x22e7ad0()*0.0316406);
}

double NNfunction_nn_chi2_chi2::synapse0x23071e0() {
   return (neuron0x22e7e10()*0.0952179);
}

double NNfunction_nn_chi2_chi2::synapse0x2306c70() {
   return (neuron0x22e8150()*-0.0819275);
}

double NNfunction_nn_chi2_chi2::synapse0x2306cb0() {
   return (neuron0x22e86b0()*0.112438);
}

double NNfunction_nn_chi2_chi2::synapse0x2307330() {
   return (neuron0x22e88d0()*-0.0328743);
}

double NNfunction_nn_chi2_chi2::synapse0x2307370() {
   return (neuron0x22e8c10()*0.148763);
}

double NNfunction_nn_chi2_chi2::synapse0x23073b0() {
   return (neuron0x22e8f50()*0.171555);
}

double NNfunction_nn_chi2_chi2::synapse0x23073f0() {
   return (neuron0x22e9290()*-0.12989);
}

double NNfunction_nn_chi2_chi2::synapse0x2307430() {
   return (neuron0x22e95d0()*0.08852);
}

double NNfunction_nn_chi2_chi2::synapse0x2307470() {
   return (neuron0x22e9910()*-2.87527);
}

double NNfunction_nn_chi2_chi2::synapse0x22eff20() {
   return (neuron0x22e4de0()*-0.0200296);
}

double NNfunction_nn_chi2_chi2::synapse0x22eff60() {
   return (neuron0x22e5090()*0.00432089);
}

double NNfunction_nn_chi2_chi2::synapse0x22effa0() {
   return (neuron0x22e53d0()*4.71787);
}

double NNfunction_nn_chi2_chi2::synapse0x22effe0() {
   return (neuron0x22e5710()*-0.0559008);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0020() {
   return (neuron0x22e5a50()*-0.0159547);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0060() {
   return (neuron0x22e5d90()*-0.0270304);
}

double NNfunction_nn_chi2_chi2::synapse0x22f00a0() {
   return (neuron0x22e60d0()*-0.0345807);
}

double NNfunction_nn_chi2_chi2::synapse0x22f00e0() {
   return (neuron0x22e6410()*0.0166451);
}

double NNfunction_nn_chi2_chi2::synapse0x2307c00() {
   return (neuron0x22e6750()*-0.0290314);
}

double NNfunction_nn_chi2_chi2::synapse0x2307c40() {
   return (neuron0x22e6a90()*-0.0313974);
}

double NNfunction_nn_chi2_chi2::synapse0x2307c80() {
   return (neuron0x22e6dd0()*0.0130481);
}

double NNfunction_nn_chi2_chi2::synapse0x2307cc0() {
   return (neuron0x22e7110()*0.143366);
}

double NNfunction_nn_chi2_chi2::synapse0x2307d00() {
   return (neuron0x22e7450()*0.00383024);
}

double NNfunction_nn_chi2_chi2::synapse0x2307d40() {
   return (neuron0x22e7790()*-0.00757573);
}

double NNfunction_nn_chi2_chi2::synapse0x2307d80() {
   return (neuron0x22e7ad0()*-0.0393107);
}

double NNfunction_nn_chi2_chi2::synapse0x2307dc0() {
   return (neuron0x22e7e10()*-0.0151553);
}

double NNfunction_nn_chi2_chi2::synapse0x2307640() {
   return (neuron0x22e8150()*-0.02168);
}

double NNfunction_nn_chi2_chi2::synapse0x2307680() {
   return (neuron0x22e86b0()*-0.0242738);
}

double NNfunction_nn_chi2_chi2::synapse0x2307f10() {
   return (neuron0x22e88d0()*-0.0149926);
}

double NNfunction_nn_chi2_chi2::synapse0x2307f50() {
   return (neuron0x22e8c10()*-0.00941826);
}

double NNfunction_nn_chi2_chi2::synapse0x2307f90() {
   return (neuron0x22e8f50()*-0.0602539);
}

double NNfunction_nn_chi2_chi2::synapse0x2307fd0() {
   return (neuron0x22e9290()*0.00556854);
}

double NNfunction_nn_chi2_chi2::synapse0x2308010() {
   return (neuron0x22e95d0()*0.00910039);
}

double NNfunction_nn_chi2_chi2::synapse0x2308050() {
   return (neuron0x22e9910()*7.01184);
}

double NNfunction_nn_chi2_chi2::synapse0x23083d0() {
   return (neuron0x22e4de0()*-0.003205);
}

double NNfunction_nn_chi2_chi2::synapse0x2308410() {
   return (neuron0x22e5090()*-0.016305);
}

double NNfunction_nn_chi2_chi2::synapse0x2308450() {
   return (neuron0x22e53d0()*0.0855138);
}

double NNfunction_nn_chi2_chi2::synapse0x2308490() {
   return (neuron0x22e5710()*-0.0347055);
}

double NNfunction_nn_chi2_chi2::synapse0x23084d0() {
   return (neuron0x22e5a50()*0.0332192);
}

double NNfunction_nn_chi2_chi2::synapse0x2308510() {
   return (neuron0x22e5d90()*-0.031693);
}

double NNfunction_nn_chi2_chi2::synapse0x2308550() {
   return (neuron0x22e60d0()*-0.0151581);
}

double NNfunction_nn_chi2_chi2::synapse0x2308590() {
   return (neuron0x22e6410()*0.00518845);
}

double NNfunction_nn_chi2_chi2::synapse0x23085d0() {
   return (neuron0x22e6750()*-0.0211443);
}

double NNfunction_nn_chi2_chi2::synapse0x2308610() {
   return (neuron0x22e6a90()*-0.0134041);
}

double NNfunction_nn_chi2_chi2::synapse0x2308650() {
   return (neuron0x22e6dd0()*0.000378254);
}

double NNfunction_nn_chi2_chi2::synapse0x2308690() {
   return (neuron0x22e7110()*0.0153704);
}

double NNfunction_nn_chi2_chi2::synapse0x23086d0() {
   return (neuron0x22e7450()*0.00244296);
}

double NNfunction_nn_chi2_chi2::synapse0x2308710() {
   return (neuron0x22e7790()*-0.0394333);
}

double NNfunction_nn_chi2_chi2::synapse0x2308750() {
   return (neuron0x22e7ad0()*-0.106289);
}

double NNfunction_nn_chi2_chi2::synapse0x2308790() {
   return (neuron0x22e7e10()*-0.0288292);
}

double NNfunction_nn_chi2_chi2::synapse0x2308220() {
   return (neuron0x22e8150()*-0.0376039);
}

double NNfunction_nn_chi2_chi2::synapse0x2308260() {
   return (neuron0x22e86b0()*-0.0543626);
}

double NNfunction_nn_chi2_chi2::synapse0x23088e0() {
   return (neuron0x22e88d0()*-0.0353527);
}

double NNfunction_nn_chi2_chi2::synapse0x2308920() {
   return (neuron0x22e8c10()*-0.0147973);
}

double NNfunction_nn_chi2_chi2::synapse0x2308960() {
   return (neuron0x22e8f50()*0.0272884);
}

double NNfunction_nn_chi2_chi2::synapse0x23089a0() {
   return (neuron0x22e9290()*-0.00156238);
}

double NNfunction_nn_chi2_chi2::synapse0x23089e0() {
   return (neuron0x22e95d0()*-0.0109134);
}

double NNfunction_nn_chi2_chi2::synapse0x2308a20() {
   return (neuron0x22e9910()*14.8846);
}

double NNfunction_nn_chi2_chi2::synapse0x2308da0() {
   return (neuron0x22e4de0()*-0.0261449);
}

double NNfunction_nn_chi2_chi2::synapse0x2308de0() {
   return (neuron0x22e5090()*10.7455);
}

double NNfunction_nn_chi2_chi2::synapse0x2308e20() {
   return (neuron0x22e53d0()*2.43851);
}

double NNfunction_nn_chi2_chi2::synapse0x2308e60() {
   return (neuron0x22e5710()*-0.0126531);
}

double NNfunction_nn_chi2_chi2::synapse0x2308ea0() {
   return (neuron0x22e5a50()*-0.0160476);
}

double NNfunction_nn_chi2_chi2::synapse0x2308ee0() {
   return (neuron0x22e5d90()*-0.00387044);
}

double NNfunction_nn_chi2_chi2::synapse0x2308f20() {
   return (neuron0x22e60d0()*0.0163728);
}

double NNfunction_nn_chi2_chi2::synapse0x2308f60() {
   return (neuron0x22e6410()*0.0134253);
}

double NNfunction_nn_chi2_chi2::synapse0x2308fa0() {
   return (neuron0x22e6750()*0.0157863);
}

double NNfunction_nn_chi2_chi2::synapse0x2308fe0() {
   return (neuron0x22e6a90()*0.014402);
}

double NNfunction_nn_chi2_chi2::synapse0x2309020() {
   return (neuron0x22e6dd0()*0.00080433);
}

double NNfunction_nn_chi2_chi2::synapse0x2309060() {
   return (neuron0x22e7110()*0.145642);
}

double NNfunction_nn_chi2_chi2::synapse0x23090a0() {
   return (neuron0x22e7450()*0.0321419);
}

double NNfunction_nn_chi2_chi2::synapse0x23090e0() {
   return (neuron0x22e7790()*0.0526228);
}

double NNfunction_nn_chi2_chi2::synapse0x2309120() {
   return (neuron0x22e7ad0()*0.0827887);
}

double NNfunction_nn_chi2_chi2::synapse0x2309160() {
   return (neuron0x22e7e10()*-0.038467);
}

double NNfunction_nn_chi2_chi2::synapse0x2308bf0() {
   return (neuron0x22e8150()*-0.0239972);
}

double NNfunction_nn_chi2_chi2::synapse0x2308c30() {
   return (neuron0x22e86b0()*-0.00607247);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9760() {
   return (neuron0x22e88d0()*0.0137502);
}

double NNfunction_nn_chi2_chi2::synapse0x22f97a0() {
   return (neuron0x22e8c10()*-0.00627988);
}

double NNfunction_nn_chi2_chi2::synapse0x22f97e0() {
   return (neuron0x22e8f50()*0.0278592);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9820() {
   return (neuron0x22e9290()*0.0103364);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9860() {
   return (neuron0x22e95d0()*-0.00663017);
}

double NNfunction_nn_chi2_chi2::synapse0x22f98a0() {
   return (neuron0x22e9910()*-0.0423677);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9c20() {
   return (neuron0x22e4de0()*-0.0735348);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9c60() {
   return (neuron0x22e5090()*-0.0236314);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9ca0() {
   return (neuron0x22e53d0()*0.450678);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9ce0() {
   return (neuron0x22e5710()*-0.0150516);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9d20() {
   return (neuron0x22e5a50()*0.00965096);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9d60() {
   return (neuron0x22e5d90()*-0.00491163);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9da0() {
   return (neuron0x22e60d0()*-0.027389);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9de0() {
   return (neuron0x22e6410()*0.00539867);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9e20() {
   return (neuron0x22e6750()*-0.0100497);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9e60() {
   return (neuron0x22e6a90()*-0.0119801);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9ea0() {
   return (neuron0x22e6dd0()*0.00102282);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9ee0() {
   return (neuron0x22e7110()*-0.0866498);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9f20() {
   return (neuron0x22e7450()*0.00604193);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9f60() {
   return (neuron0x22e7790()*-0.0347519);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9fa0() {
   return (neuron0x22e7ad0()*0.0262481);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9fe0() {
   return (neuron0x22e7e10()*-0.00893413);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9a70() {
   return (neuron0x22e8150()*-0.000373371);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9ab0() {
   return (neuron0x22e86b0()*-0.0288206);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa130() {
   return (neuron0x22e88d0()*-0.0368519);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa170() {
   return (neuron0x22e8c10()*-0.00872014);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa1b0() {
   return (neuron0x22e8f50()*-0.00641241);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa1f0() {
   return (neuron0x22e9290()*-0.0054928);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa230() {
   return (neuron0x22e95d0()*0.00309693);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa270() {
   return (neuron0x22e9910()*6.34822);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa5f0() {
   return (neuron0x22e4de0()*-0.189444);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa630() {
   return (neuron0x22e5090()*-2.6525);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa670() {
   return (neuron0x22e53d0()*0.468431);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa6b0() {
   return (neuron0x22e5710()*-0.118605);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa6f0() {
   return (neuron0x22e5a50()*-0.474348);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa730() {
   return (neuron0x22e5d90()*-0.221452);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa770() {
   return (neuron0x22e60d0()*0.225502);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa7b0() {
   return (neuron0x22e6410()*0.173289);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa7f0() {
   return (neuron0x22e6750()*0.665597);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa830() {
   return (neuron0x22e6a90()*0.869927);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa870() {
   return (neuron0x22e6dd0()*1.25591);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa8b0() {
   return (neuron0x22e7110()*0.00145844);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa8f0() {
   return (neuron0x22e7450()*0.43117);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa930() {
   return (neuron0x22e7790()*0.955574);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa970() {
   return (neuron0x22e7ad0()*-0.389695);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa9b0() {
   return (neuron0x22e7e10()*-1.3384);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa440() {
   return (neuron0x22e8150()*-0.414961);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa480() {
   return (neuron0x22e86b0()*0.6607);
}

double NNfunction_nn_chi2_chi2::synapse0x22fab00() {
   return (neuron0x22e88d0()*0.021238);
}

double NNfunction_nn_chi2_chi2::synapse0x22fab40() {
   return (neuron0x22e8c10()*-0.166971);
}

double NNfunction_nn_chi2_chi2::synapse0x22fab80() {
   return (neuron0x22e8f50()*0.613536);
}

double NNfunction_nn_chi2_chi2::synapse0x22fabc0() {
   return (neuron0x22e9290()*0.380529);
}

double NNfunction_nn_chi2_chi2::synapse0x22fac00() {
   return (neuron0x22e95d0()*-0.33401);
}

double NNfunction_nn_chi2_chi2::synapse0x22fac40() {
   return (neuron0x22e9910()*0.526816);
}

double NNfunction_nn_chi2_chi2::synapse0x22fafc0() {
   return (neuron0x22e4de0()*-0.0096137);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb000() {
   return (neuron0x22e5090()*-0.00834978);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb040() {
   return (neuron0x22e53d0()*0.0830736);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb080() {
   return (neuron0x22e5710()*-0.0169998);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb0c0() {
   return (neuron0x22e5a50()*0.00504919);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb100() {
   return (neuron0x22e5d90()*-0.0137588);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb140() {
   return (neuron0x22e60d0()*-0.0104136);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb180() {
   return (neuron0x22e6410()*-0.00733698);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb1c0() {
   return (neuron0x22e6750()*-0.0174);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb200() {
   return (neuron0x22e6a90()*-0.000566355);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb240() {
   return (neuron0x22e6dd0()*0.00652736);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb280() {
   return (neuron0x22e7110()*-0.0346074);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb2c0() {
   return (neuron0x22e7450()*-0.00644828);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb300() {
   return (neuron0x22e7790()*-0.0107598);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb340() {
   return (neuron0x22e7ad0()*-0.0166426);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb380() {
   return (neuron0x22e7e10()*-0.019031);
}

double NNfunction_nn_chi2_chi2::synapse0x22fae10() {
   return (neuron0x22e8150()*-0.0118105);
}

double NNfunction_nn_chi2_chi2::synapse0x22fae50() {
   return (neuron0x22e86b0()*-0.00543111);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb4d0() {
   return (neuron0x22e88d0()*-0.00618254);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb510() {
   return (neuron0x22e8c10()*0.0039966);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb550() {
   return (neuron0x22e8f50()*0.0163401);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb590() {
   return (neuron0x22e9290()*0.0068532);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb5d0() {
   return (neuron0x22e95d0()*0.00627465);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb610() {
   return (neuron0x22e9910()*-12.9097);
}

double NNfunction_nn_chi2_chi2::synapse0x230d4e0() {
   return (neuron0x22e4de0()*0.520872);
}

double NNfunction_nn_chi2_chi2::synapse0x230d520() {
   return (neuron0x22e5090()*0.220076);
}

double NNfunction_nn_chi2_chi2::synapse0x230d560() {
   return (neuron0x22e53d0()*1.12435);
}

double NNfunction_nn_chi2_chi2::synapse0x230d5a0() {
   return (neuron0x22e5710()*1.17734);
}

double NNfunction_nn_chi2_chi2::synapse0x230d5e0() {
   return (neuron0x22e5a50()*0.845325);
}

double NNfunction_nn_chi2_chi2::synapse0x230d620() {
   return (neuron0x22e5d90()*1.34204);
}

double NNfunction_nn_chi2_chi2::synapse0x230d660() {
   return (neuron0x22e60d0()*0.778951);
}

double NNfunction_nn_chi2_chi2::synapse0x230d6a0() {
   return (neuron0x22e6410()*0.590111);
}

double NNfunction_nn_chi2_chi2::synapse0x230d6e0() {
   return (neuron0x22e6750()*0.875901);
}

double NNfunction_nn_chi2_chi2::synapse0x230d720() {
   return (neuron0x22e6a90()*0.873242);
}

double NNfunction_nn_chi2_chi2::synapse0x230d760() {
   return (neuron0x22e6dd0()*-1.44777);
}

double NNfunction_nn_chi2_chi2::synapse0x230d7a0() {
   return (neuron0x22e7110()*-0.916204);
}

double NNfunction_nn_chi2_chi2::synapse0x230d7e0() {
   return (neuron0x22e7450()*0.833621);
}

double NNfunction_nn_chi2_chi2::synapse0x230d820() {
   return (neuron0x22e7790()*0.459222);
}

double NNfunction_nn_chi2_chi2::synapse0x230d860() {
   return (neuron0x22e7ad0()*-0.0308369);
}

double NNfunction_nn_chi2_chi2::synapse0x230d8a0() {
   return (neuron0x22e7e10()*0.21052);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb650() {
   return (neuron0x22e8150()*-1.19198);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb690() {
   return (neuron0x22e86b0()*0.0666296);
}

double NNfunction_nn_chi2_chi2::synapse0x230d9f0() {
   return (neuron0x22e88d0()*-1.23125);
}

double NNfunction_nn_chi2_chi2::synapse0x230da30() {
   return (neuron0x22e8c10()*1.20983);
}

double NNfunction_nn_chi2_chi2::synapse0x230da70() {
   return (neuron0x22e8f50()*-0.713169);
}

double NNfunction_nn_chi2_chi2::synapse0x230dab0() {
   return (neuron0x22e9290()*0.93871);
}

double NNfunction_nn_chi2_chi2::synapse0x230daf0() {
   return (neuron0x22e95d0()*0.579499);
}

double NNfunction_nn_chi2_chi2::synapse0x230db30() {
   return (neuron0x22e9910()*0.260501);
}

double NNfunction_nn_chi2_chi2::synapse0x230deb0() {
   return (neuron0x22e4de0()*-0.120577);
}

double NNfunction_nn_chi2_chi2::synapse0x230def0() {
   return (neuron0x22e5090()*0.0197992);
}

double NNfunction_nn_chi2_chi2::synapse0x230df30() {
   return (neuron0x22e53d0()*1.07159);
}

double NNfunction_nn_chi2_chi2::synapse0x230df70() {
   return (neuron0x22e5710()*-0.0605256);
}

double NNfunction_nn_chi2_chi2::synapse0x230dfb0() {
   return (neuron0x22e5a50()*-0.0040534);
}

double NNfunction_nn_chi2_chi2::synapse0x230dff0() {
   return (neuron0x22e5d90()*-0.0545739);
}

double NNfunction_nn_chi2_chi2::synapse0x230e030() {
   return (neuron0x22e60d0()*-0.0444854);
}

double NNfunction_nn_chi2_chi2::synapse0x230e070() {
   return (neuron0x22e6410()*-0.0317386);
}

double NNfunction_nn_chi2_chi2::synapse0x230e0b0() {
   return (neuron0x22e6750()*0.0158407);
}

double NNfunction_nn_chi2_chi2::synapse0x230e0f0() {
   return (neuron0x22e6a90()*-0.0561419);
}

double NNfunction_nn_chi2_chi2::synapse0x230e130() {
   return (neuron0x22e6dd0()*0.0480329);
}

double NNfunction_nn_chi2_chi2::synapse0x230e170() {
   return (neuron0x22e7110()*0.00880252);
}

double NNfunction_nn_chi2_chi2::synapse0x230e1b0() {
   return (neuron0x22e7450()*-0.0513633);
}

double NNfunction_nn_chi2_chi2::synapse0x230e1f0() {
   return (neuron0x22e7790()*-0.0310256);
}

double NNfunction_nn_chi2_chi2::synapse0x230e230() {
   return (neuron0x22e7ad0()*-0.124138);
}

double NNfunction_nn_chi2_chi2::synapse0x230e270() {
   return (neuron0x22e7e10()*-0.0502809);
}

double NNfunction_nn_chi2_chi2::synapse0x230dd00() {
   return (neuron0x22e8150()*-0.00526422);
}

double NNfunction_nn_chi2_chi2::synapse0x230dd40() {
   return (neuron0x22e86b0()*-0.0149877);
}

double NNfunction_nn_chi2_chi2::synapse0x230e3c0() {
   return (neuron0x22e88d0()*-0.0481487);
}

double NNfunction_nn_chi2_chi2::synapse0x230e400() {
   return (neuron0x22e8c10()*0.0100695);
}

double NNfunction_nn_chi2_chi2::synapse0x230e440() {
   return (neuron0x22e8f50()*3.13309e-05);
}

double NNfunction_nn_chi2_chi2::synapse0x230e480() {
   return (neuron0x22e9290()*-0.0238871);
}

double NNfunction_nn_chi2_chi2::synapse0x230e4c0() {
   return (neuron0x22e95d0()*0.011808);
}

double NNfunction_nn_chi2_chi2::synapse0x230e500() {
   return (neuron0x22e9910()*1.80791);
}

double NNfunction_nn_chi2_chi2::synapse0x230e880() {
   return (neuron0x22e4de0()*-0.888078);
}

double NNfunction_nn_chi2_chi2::synapse0x230e8c0() {
   return (neuron0x22e5090()*-0.27136);
}

double NNfunction_nn_chi2_chi2::synapse0x230e900() {
   return (neuron0x22e53d0()*0.451914);
}

double NNfunction_nn_chi2_chi2::synapse0x230e940() {
   return (neuron0x22e5710()*-0.717572);
}

double NNfunction_nn_chi2_chi2::synapse0x230e980() {
   return (neuron0x22e5a50()*0.0136413);
}

double NNfunction_nn_chi2_chi2::synapse0x230e9c0() {
   return (neuron0x22e5d90()*-0.481253);
}

double NNfunction_nn_chi2_chi2::synapse0x230ea00() {
   return (neuron0x22e60d0()*-0.53038);
}

double NNfunction_nn_chi2_chi2::synapse0x230ea40() {
   return (neuron0x22e6410()*-0.0744013);
}

double NNfunction_nn_chi2_chi2::synapse0x230ea80() {
   return (neuron0x22e6750()*-0.0189113);
}

double NNfunction_nn_chi2_chi2::synapse0x230eac0() {
   return (neuron0x22e6a90()*0.628671);
}

double NNfunction_nn_chi2_chi2::synapse0x230eb00() {
   return (neuron0x22e6dd0()*0.621028);
}

double NNfunction_nn_chi2_chi2::synapse0x230eb40() {
   return (neuron0x22e7110()*-1.24866);
}

double NNfunction_nn_chi2_chi2::synapse0x230eb80() {
   return (neuron0x22e7450()*-0.07793);
}

double NNfunction_nn_chi2_chi2::synapse0x230ebc0() {
   return (neuron0x22e7790()*0.0334445);
}

double NNfunction_nn_chi2_chi2::synapse0x230ec00() {
   return (neuron0x22e7ad0()*0.443941);
}

double NNfunction_nn_chi2_chi2::synapse0x230ec40() {
   return (neuron0x22e7e10()*-0.191585);
}

double NNfunction_nn_chi2_chi2::synapse0x230e6d0() {
   return (neuron0x22e8150()*-0.959766);
}

double NNfunction_nn_chi2_chi2::synapse0x230e710() {
   return (neuron0x22e86b0()*-0.189427);
}

double NNfunction_nn_chi2_chi2::synapse0x230ed90() {
   return (neuron0x22e88d0()*0.102244);
}

double NNfunction_nn_chi2_chi2::synapse0x230edd0() {
   return (neuron0x22e8c10()*-0.183537);
}

double NNfunction_nn_chi2_chi2::synapse0x230ee10() {
   return (neuron0x22e8f50()*-0.891596);
}

double NNfunction_nn_chi2_chi2::synapse0x230ee50() {
   return (neuron0x22e9290()*0.205748);
}

double NNfunction_nn_chi2_chi2::synapse0x230ee90() {
   return (neuron0x22e95d0()*-0.166585);
}

double NNfunction_nn_chi2_chi2::synapse0x230eed0() {
   return (neuron0x22e9910()*0.626549);
}

double NNfunction_nn_chi2_chi2::synapse0x230f250() {
   return (neuron0x22e4de0()*0.461644);
}

double NNfunction_nn_chi2_chi2::synapse0x230f290() {
   return (neuron0x22e5090()*-0.571964);
}

double NNfunction_nn_chi2_chi2::synapse0x230f2d0() {
   return (neuron0x22e53d0()*-1.92109);
}

double NNfunction_nn_chi2_chi2::synapse0x230f310() {
   return (neuron0x22e5710()*-0.296896);
}

double NNfunction_nn_chi2_chi2::synapse0x230f350() {
   return (neuron0x22e5a50()*0.822325);
}

double NNfunction_nn_chi2_chi2::synapse0x230f390() {
   return (neuron0x22e5d90()*0.0231041);
}

double NNfunction_nn_chi2_chi2::synapse0x230f3d0() {
   return (neuron0x22e60d0()*-0.808094);
}

double NNfunction_nn_chi2_chi2::synapse0x230f410() {
   return (neuron0x22e6410()*-0.0132409);
}

double NNfunction_nn_chi2_chi2::synapse0x230f450() {
   return (neuron0x22e6750()*0.560863);
}

double NNfunction_nn_chi2_chi2::synapse0x230f490() {
   return (neuron0x22e6a90()*-0.139145);
}

double NNfunction_nn_chi2_chi2::synapse0x230f4d0() {
   return (neuron0x22e6dd0()*-1.18247);
}

double NNfunction_nn_chi2_chi2::synapse0x230f510() {
   return (neuron0x22e7110()*-1.00521);
}

double NNfunction_nn_chi2_chi2::synapse0x230f550() {
   return (neuron0x22e7450()*1.02425);
}

double NNfunction_nn_chi2_chi2::synapse0x230f590() {
   return (neuron0x22e7790()*-0.477278);
}

double NNfunction_nn_chi2_chi2::synapse0x230f5d0() {
   return (neuron0x22e7ad0()*0.344025);
}

double NNfunction_nn_chi2_chi2::synapse0x230f610() {
   return (neuron0x22e7e10()*0.958799);
}

double NNfunction_nn_chi2_chi2::synapse0x230f0a0() {
   return (neuron0x22e8150()*0.830032);
}

double NNfunction_nn_chi2_chi2::synapse0x230f0e0() {
   return (neuron0x22e86b0()*-0.768611);
}

double NNfunction_nn_chi2_chi2::synapse0x230f760() {
   return (neuron0x22e88d0()*-0.524167);
}

double NNfunction_nn_chi2_chi2::synapse0x230f7a0() {
   return (neuron0x22e8c10()*-0.0957152);
}

double NNfunction_nn_chi2_chi2::synapse0x230f7e0() {
   return (neuron0x22e8f50()*0.543303);
}

double NNfunction_nn_chi2_chi2::synapse0x230f820() {
   return (neuron0x22e9290()*0.57526);
}

double NNfunction_nn_chi2_chi2::synapse0x230f860() {
   return (neuron0x22e95d0()*0.709011);
}

double NNfunction_nn_chi2_chi2::synapse0x230f8a0() {
   return (neuron0x22e9910()*3.3104);
}

double NNfunction_nn_chi2_chi2::synapse0x20af680() {
   return (neuron0x22e9d80()*0.136585);
}

double NNfunction_nn_chi2_chi2::synapse0x20af6c0() {
   return (neuron0x22ea6d0()*-0.0295321);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec240() {
   return (neuron0x22eb1b0()*-0.0443576);
}

double NNfunction_nn_chi2_chi2::synapse0x22ec280() {
   return (neuron0x22eac50()*2.76932);
}

double NNfunction_nn_chi2_chi2::synapse0x22edd20() {
   return (neuron0x22ebf90()*0.0473487);
}

double NNfunction_nn_chi2_chi2::synapse0x22edd60() {
   return (neuron0x22eda70()*0.099174);
}

double NNfunction_nn_chi2_chi2::synapse0x22eeaf0() {
   return (neuron0x22ee840()*-0.0838545);
}

double NNfunction_nn_chi2_chi2::synapse0x22eeb30() {
   return (neuron0x22ef210()*-2.30425);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef4c0() {
   return (neuron0x22efbe0()*0.852639);
}

double NNfunction_nn_chi2_chi2::synapse0x22ef500() {
   return (neuron0x22f06c0()*-0.229724);
}

double NNfunction_nn_chi2_chi2::synapse0x22efe90() {
   return (neuron0x22f1090()*0.285294);
}

double NNfunction_nn_chi2_chi2::synapse0x22efed0() {
   return (neuron0x22ee170()*-2.38528);
}

double NNfunction_nn_chi2_chi2::synapse0x22f0970() {
   return (neuron0x22f2c40()*0.0370127);
}

double NNfunction_nn_chi2_chi2::synapse0x22f09b0() {
   return (neuron0x22f3610()*0.0759303);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1340() {
   return (neuron0x22f3fe0()*-0.122365);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1380() {
   return (neuron0x22f49b0()*0.772512);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee420() {
   return (neuron0x22f67c0()*-0.0233859);
}

double NNfunction_nn_chi2_chi2::synapse0x22ee460() {
   return (neuron0x22f6aa0()*-0.899133);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2ef0() {
   return (neuron0x22f7470()*-0.0113011);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2f30() {
   return (neuron0x22f7e40()*2.73818);
}

double NNfunction_nn_chi2_chi2::synapse0x22f38c0() {
   return (neuron0x22f8810()*-0.765677);
}

double NNfunction_nn_chi2_chi2::synapse0x22f3900() {
   return (neuron0x22f91e0()*0.0134154);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4290() {
   return (neuron0x22f1d30()*-1.89811);
}

double NNfunction_nn_chi2_chi2::synapse0x22f42d0() {
   return (neuron0x22f2700()*0.566479);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4c60() {
   return (neuron0x22fbf70()*0.73269);
}

double NNfunction_nn_chi2_chi2::synapse0x22f4ca0() {
   return (neuron0x22fc940()*-0.361404);
}

double NNfunction_nn_chi2_chi2::synapse0x22e7cf0() {
   return (neuron0x22fd310()*1.06451);
}

double NNfunction_nn_chi2_chi2::synapse0x22e7d30() {
   return (neuron0x22fdce0()*0.797517);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6d50() {
   return (neuron0x22fe6b0()*1.62897);
}

double NNfunction_nn_chi2_chi2::synapse0x22f6d90() {
   return (neuron0x22ff080()*-1.46032);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7720() {
   return (neuron0x22ffa50()*0.0328222);
}

double NNfunction_nn_chi2_chi2::synapse0x22f7760() {
   return (neuron0x2300420()*-1.5553);
}

double NNfunction_nn_chi2_chi2::synapse0x22f80f0() {
   return (neuron0x22f64b0()*-0.0783999);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8130() {
   return (neuron0x2303000()*0.484236);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8ac0() {
   return (neuron0x23039d0()*1.62775);
}

double NNfunction_nn_chi2_chi2::synapse0x22f8b00() {
   return (neuron0x23043a0()*3.58704);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9490() {
   return (neuron0x2304d70()*-1.04945);
}

double NNfunction_nn_chi2_chi2::synapse0x22f94d0() {
   return (neuron0x2305740()*-1.58564);
}

double NNfunction_nn_chi2_chi2::synapse0x22f1fe0() {
   return (neuron0x2306110()*0.325943);
}

double NNfunction_nn_chi2_chi2::synapse0x22f2020() {
   return (neuron0x2306ae0()*0.459286);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb890() {
   return (neuron0x23074b0()*-3.72807);
}

double NNfunction_nn_chi2_chi2::synapse0x22fb8d0() {
   return (neuron0x2308090()*0.253609);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc220() {
   return (neuron0x2308a60()*1.64088);
}

double NNfunction_nn_chi2_chi2::synapse0x22fc260() {
   return (neuron0x22f98e0()*2.36559);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcbf0() {
   return (neuron0x22fa2b0()*0.0684472);
}

double NNfunction_nn_chi2_chi2::synapse0x22fcc30() {
   return (neuron0x22fac80()*1.31852);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd5c0() {
   return (neuron0x230d2c0()*0.335854);
}

double NNfunction_nn_chi2_chi2::synapse0x22fd600() {
   return (neuron0x230db70()*0.449271);
}

double NNfunction_nn_chi2_chi2::synapse0x22fdf90() {
   return (neuron0x230e540()*-0.210402);
}

double NNfunction_nn_chi2_chi2::synapse0x22fdfd0() {
   return (neuron0x230ef10()*0.0813007);
}

double NNfunction_nn_chi2_chi2::synapse0x23006d0() {
   return (neuron0x22e9d80()*0.123488);
}

double NNfunction_nn_chi2_chi2::synapse0x2300710() {
   return (neuron0x22ea6d0()*0.097222);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5c90() {
   return (neuron0x22eb1b0()*0.033265);
}

double NNfunction_nn_chi2_chi2::synapse0x22f5cd0() {
   return (neuron0x22eac50()*1.69803);
}

double NNfunction_nn_chi2_chi2::synapse0x23032b0() {
   return (neuron0x22ebf90()*0.0330192);
}

double NNfunction_nn_chi2_chi2::synapse0x23032f0() {
   return (neuron0x22eda70()*0.0128561);
}

double NNfunction_nn_chi2_chi2::synapse0x2303c80() {
   return (neuron0x22ee840()*-0.0359621);
}

double NNfunction_nn_chi2_chi2::synapse0x2303cc0() {
   return (neuron0x22ef210()*0.244804);
}

double NNfunction_nn_chi2_chi2::synapse0x2304650() {
   return (neuron0x22efbe0()*0.676103);
}

double NNfunction_nn_chi2_chi2::synapse0x2304690() {
   return (neuron0x22f06c0()*-0.149636);
}

double NNfunction_nn_chi2_chi2::synapse0x2305020() {
   return (neuron0x22f1090()*0.241101);
}

double NNfunction_nn_chi2_chi2::synapse0x2305060() {
   return (neuron0x22ee170()*-2.63566);
}

double NNfunction_nn_chi2_chi2::synapse0x23059f0() {
   return (neuron0x22f2c40()*0.0654761);
}

double NNfunction_nn_chi2_chi2::synapse0x2305a30() {
   return (neuron0x22f3610()*-0.00620232);
}

double NNfunction_nn_chi2_chi2::synapse0x23063c0() {
   return (neuron0x22f3fe0()*-0.0704417);
}

double NNfunction_nn_chi2_chi2::synapse0x2306400() {
   return (neuron0x22f49b0()*0.346527);
}

double NNfunction_nn_chi2_chi2::synapse0x2306d90() {
   return (neuron0x22f67c0()*0.007307);
}

double NNfunction_nn_chi2_chi2::synapse0x2306dd0() {
   return (neuron0x22f6aa0()*-1.02867);
}

double NNfunction_nn_chi2_chi2::synapse0x2307760() {
   return (neuron0x22f7470()*0.0714839);
}

double NNfunction_nn_chi2_chi2::synapse0x23077a0() {
   return (neuron0x22f7e40()*-4.56842);
}

double NNfunction_nn_chi2_chi2::synapse0x2308340() {
   return (neuron0x22f8810()*-0.165756);
}

double NNfunction_nn_chi2_chi2::synapse0x2308380() {
   return (neuron0x22f91e0()*0.0277999);
}

double NNfunction_nn_chi2_chi2::synapse0x2308d10() {
   return (neuron0x22f1d30()*0.155871);
}

double NNfunction_nn_chi2_chi2::synapse0x2308d50() {
   return (neuron0x22f2700()*0.300296);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9b90() {
   return (neuron0x22fbf70()*0.574655);
}

double NNfunction_nn_chi2_chi2::synapse0x22f9bd0() {
   return (neuron0x22fc940()*0.277679);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa560() {
   return (neuron0x22fd310()*-1.04);
}

double NNfunction_nn_chi2_chi2::synapse0x22fa5a0() {
   return (neuron0x22fdce0()*0.192503);
}

double NNfunction_nn_chi2_chi2::synapse0x22faf30() {
   return (neuron0x22fe6b0()*1.97855);
}

double NNfunction_nn_chi2_chi2::synapse0x22faf70() {
   return (neuron0x22ff080()*-0.485649);
}

double NNfunction_nn_chi2_chi2::synapse0x230d450() {
   return (neuron0x22ffa50()*0.0554078);
}

double NNfunction_nn_chi2_chi2::synapse0x230d490() {
   return (neuron0x2300420()*-0.444505);
}

double NNfunction_nn_chi2_chi2::synapse0x230de20() {
   return (neuron0x22f64b0()*-0.0493342);
}

double NNfunction_nn_chi2_chi2::synapse0x230de60() {
   return (neuron0x2303000()*-2.49083);
}

double NNfunction_nn_chi2_chi2::synapse0x230e7f0() {
   return (neuron0x23039d0()*1.05408);
}

double NNfunction_nn_chi2_chi2::synapse0x230e830() {
   return (neuron0x23043a0()*3.44172);
}

double NNfunction_nn_chi2_chi2::synapse0x230f1c0() {
   return (neuron0x2304d70()*0.151782);
}

double NNfunction_nn_chi2_chi2::synapse0x230f200() {
   return (neuron0x2305740()*-0.872582);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea030() {
   return (neuron0x2306110()*0.231999);
}

double NNfunction_nn_chi2_chi2::synapse0x22ea070() {
   return (neuron0x2306ae0()*0.0884625);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe960() {
   return (neuron0x23074b0()*-0.801032);
}

double NNfunction_nn_chi2_chi2::synapse0x22fe9a0() {
   return (neuron0x2308090()*3.5519);
}

double NNfunction_nn_chi2_chi2::synapse0x230f8e0() {
   return (neuron0x2308a60()*-0.849221);
}

double NNfunction_nn_chi2_chi2::synapse0x230f920() {
   return (neuron0x22f98e0()*-2.32448);
}

double NNfunction_nn_chi2_chi2::synapse0x230f960() {
   return (neuron0x22fa2b0()*0.0559324);
}

double NNfunction_nn_chi2_chi2::synapse0x230f9a0() {
   return (neuron0x22fac80()*0.939745);
}

double NNfunction_nn_chi2_chi2::synapse0x2316850() {
   return (neuron0x230d2c0()*0.244487);
}

double NNfunction_nn_chi2_chi2::synapse0x2316890() {
   return (neuron0x230db70()*-0.149945);
}

double NNfunction_nn_chi2_chi2::synapse0x23168d0() {
   return (neuron0x230e540()*-0.0634241);
}

double NNfunction_nn_chi2_chi2::synapse0x2316910() {
   return (neuron0x230ef10()*0.0865863);
}

double NNfunction_nn_chi2_chi2::synapse0x2316c90() {
   return (neuron0x22e9d80()*0.0538839);
}

double NNfunction_nn_chi2_chi2::synapse0x2316cd0() {
   return (neuron0x22ea6d0()*0.13974);
}

double NNfunction_nn_chi2_chi2::synapse0x2316d10() {
   return (neuron0x22eb1b0()*-0.0753714);
}

double NNfunction_nn_chi2_chi2::synapse0x2316d50() {
   return (neuron0x22eac50()*-0.516675);
}

double NNfunction_nn_chi2_chi2::synapse0x2316d90() {
   return (neuron0x22ebf90()*0.055163);
}

double NNfunction_nn_chi2_chi2::synapse0x2316dd0() {
   return (neuron0x22eda70()*-0.0100522);
}

double NNfunction_nn_chi2_chi2::synapse0x2316e10() {
   return (neuron0x22ee840()*0.0652377);
}

double NNfunction_nn_chi2_chi2::synapse0x2316e50() {
   return (neuron0x22ef210()*0.877068);
}

double NNfunction_nn_chi2_chi2::synapse0x2316e90() {
   return (neuron0x22efbe0()*-0.377201);
}

double NNfunction_nn_chi2_chi2::synapse0x2316ed0() {
   return (neuron0x22f06c0()*-0.146883);
}

double NNfunction_nn_chi2_chi2::synapse0x2316f10() {
   return (neuron0x22f1090()*-0.0611317);
}

double NNfunction_nn_chi2_chi2::synapse0x2316f50() {
   return (neuron0x22ee170()*-0.537631);
}

double NNfunction_nn_chi2_chi2::synapse0x2316f90() {
   return (neuron0x22f2c40()*0.0346206);
}

double NNfunction_nn_chi2_chi2::synapse0x2316fd0() {
   return (neuron0x22f3610()*-0.0206975);
}

double NNfunction_nn_chi2_chi2::synapse0x2317010() {
   return (neuron0x22f3fe0()*0.0803945);
}

double NNfunction_nn_chi2_chi2::synapse0x2317050() {
   return (neuron0x22f49b0()*-0.0122154);
}

double NNfunction_nn_chi2_chi2::synapse0x2316ae0() {
   return (neuron0x22f67c0()*-0.0674628);
}

double NNfunction_nn_chi2_chi2::synapse0x2316b20() {
   return (neuron0x22f6aa0()*-1.27184);
}

double NNfunction_nn_chi2_chi2::synapse0x23171a0() {
   return (neuron0x22f7470()*0.0117913);
}

double NNfunction_nn_chi2_chi2::synapse0x23171e0() {
   return (neuron0x22f7e40()*3.6816);
}

double NNfunction_nn_chi2_chi2::synapse0x2317220() {
   return (neuron0x22f8810()*-0.94591);
}

double NNfunction_nn_chi2_chi2::synapse0x2317260() {
   return (neuron0x22f91e0()*-0.129568);
}

double NNfunction_nn_chi2_chi2::synapse0x23172a0() {
   return (neuron0x22f1d30()*2.48368);
}

double NNfunction_nn_chi2_chi2::synapse0x23172e0() {
   return (neuron0x22f2700()*-0.0993648);
}

double NNfunction_nn_chi2_chi2::synapse0x2317320() {
   return (neuron0x22fbf70()*0.0859293);
}

double NNfunction_nn_chi2_chi2::synapse0x2317360() {
   return (neuron0x22fc940()*-0.487857);
}

double NNfunction_nn_chi2_chi2::synapse0x23173a0() {
   return (neuron0x22fd310()*1.16421);
}

double NNfunction_nn_chi2_chi2::synapse0x23173e0() {
   return (neuron0x22fdce0()*0.905939);
}

double NNfunction_nn_chi2_chi2::synapse0x2317420() {
   return (neuron0x22fe6b0()*-0.609533);
}

double NNfunction_nn_chi2_chi2::synapse0x2317460() {
   return (neuron0x22ff080()*1.4565);
}

double NNfunction_nn_chi2_chi2::synapse0x23174a0() {
   return (neuron0x22ffa50()*-0.0131105);
}

double NNfunction_nn_chi2_chi2::synapse0x23174e0() {
   return (neuron0x2300420()*-0.639362);
}

double NNfunction_nn_chi2_chi2::synapse0x2317090() {
   return (neuron0x22f64b0()*-0.0341984);
}

double NNfunction_nn_chi2_chi2::synapse0x23170d0() {
   return (neuron0x2303000()*-3.60352);
}

double NNfunction_nn_chi2_chi2::synapse0x2317110() {
   return (neuron0x23039d0()*-0.324132);
}

double NNfunction_nn_chi2_chi2::synapse0x2317150() {
   return (neuron0x23043a0()*-0.962262);
}

double NNfunction_nn_chi2_chi2::synapse0x2317730() {
   return (neuron0x2304d70()*0.834207);
}

double NNfunction_nn_chi2_chi2::synapse0x2317770() {
   return (neuron0x2305740()*1.90881);
}

double NNfunction_nn_chi2_chi2::synapse0x23177b0() {
   return (neuron0x2306110()*-0.0316573);
}

double NNfunction_nn_chi2_chi2::synapse0x23177f0() {
   return (neuron0x2306ae0()*0.0619424);
}

double NNfunction_nn_chi2_chi2::synapse0x2317830() {
   return (neuron0x23074b0()*-0.485915);
}

double NNfunction_nn_chi2_chi2::synapse0x2317870() {
   return (neuron0x2308090()*1.75244);
}

double NNfunction_nn_chi2_chi2::synapse0x23178b0() {
   return (neuron0x2308a60()*2.70187);
}

double NNfunction_nn_chi2_chi2::synapse0x23178f0() {
   return (neuron0x22f98e0()*-3.56573);
}

double NNfunction_nn_chi2_chi2::synapse0x2317930() {
   return (neuron0x22fa2b0()*-0.00506015);
}

double NNfunction_nn_chi2_chi2::synapse0x2317970() {
   return (neuron0x22fac80()*2.37871);
}

double NNfunction_nn_chi2_chi2::synapse0x23179b0() {
   return (neuron0x230d2c0()*0.00821807);
}

double NNfunction_nn_chi2_chi2::synapse0x23179f0() {
   return (neuron0x230db70()*-2.60284);
}

double NNfunction_nn_chi2_chi2::synapse0x2317a30() {
   return (neuron0x230e540()*-0.0270659);
}

double NNfunction_nn_chi2_chi2::synapse0x2317a70() {
   return (neuron0x230ef10()*-0.138987);
}

double NNfunction_nn_chi2_chi2::synapse0x2317df0() {
   return (neuron0x22e9d80()*-0.0273924);
}

double NNfunction_nn_chi2_chi2::synapse0x2317e30() {
   return (neuron0x22ea6d0()*-0.320812);
}

double NNfunction_nn_chi2_chi2::synapse0x2317e70() {
   return (neuron0x22eb1b0()*-0.0252426);
}

double NNfunction_nn_chi2_chi2::synapse0x2317eb0() {
   return (neuron0x22eac50()*0.0410408);
}

double NNfunction_nn_chi2_chi2::synapse0x2317ef0() {
   return (neuron0x22ebf90()*-0.00731453);
}

double NNfunction_nn_chi2_chi2::synapse0x2317f30() {
   return (neuron0x22eda70()*0.0156974);
}

double NNfunction_nn_chi2_chi2::synapse0x2317f70() {
   return (neuron0x22ee840()*-0.00776362);
}

double NNfunction_nn_chi2_chi2::synapse0x2317fb0() {
   return (neuron0x22ef210()*-1.07589);
}

double NNfunction_nn_chi2_chi2::synapse0x2317ff0() {
   return (neuron0x22efbe0()*0.0221899);
}

double NNfunction_nn_chi2_chi2::synapse0x2318030() {
   return (neuron0x22f06c0()*0.0287754);
}

double NNfunction_nn_chi2_chi2::synapse0x2318070() {
   return (neuron0x22f1090()*-0.0200256);
}

double NNfunction_nn_chi2_chi2::synapse0x23180b0() {
   return (neuron0x22ee170()*-0.462394);
}

double NNfunction_nn_chi2_chi2::synapse0x23180f0() {
   return (neuron0x22f2c40()*-0.0187741);
}

double NNfunction_nn_chi2_chi2::synapse0x2318130() {
   return (neuron0x22f3610()*0.0296565);
}

double NNfunction_nn_chi2_chi2::synapse0x2318170() {
   return (neuron0x22f3fe0()*-0.213652);
}

double NNfunction_nn_chi2_chi2::synapse0x23181b0() {
   return (neuron0x22f49b0()*-0.0470312);
}

double NNfunction_nn_chi2_chi2::synapse0x2317c40() {
   return (neuron0x22f67c0()*-0.00162714);
}

double NNfunction_nn_chi2_chi2::synapse0x2317c80() {
   return (neuron0x22f6aa0()*4.26275);
}

double NNfunction_nn_chi2_chi2::synapse0x2318300() {
   return (neuron0x22f7470()*-0.0215447);
}

double NNfunction_nn_chi2_chi2::synapse0x2318340() {
   return (neuron0x22f7e40()*1.02519);
}

double NNfunction_nn_chi2_chi2::synapse0x2318380() {
   return (neuron0x22f8810()*-0.0797839);
}

double NNfunction_nn_chi2_chi2::synapse0x23183c0() {
   return (neuron0x22f91e0()*0.029733);
}

double NNfunction_nn_chi2_chi2::synapse0x2318400() {
   return (neuron0x22f1d30()*-0.541431);
}

double NNfunction_nn_chi2_chi2::synapse0x2318440() {
   return (neuron0x22f2700()*0.0575749);
}

double NNfunction_nn_chi2_chi2::synapse0x2318480() {
   return (neuron0x22fbf70()*-0.533329);
}

double NNfunction_nn_chi2_chi2::synapse0x23184c0() {
   return (neuron0x22fc940()*-0.0851382);
}

double NNfunction_nn_chi2_chi2::synapse0x2318500() {
   return (neuron0x22fd310()*1.3854);
}

double NNfunction_nn_chi2_chi2::synapse0x2318540() {
   return (neuron0x22fdce0()*0.0781226);
}

double NNfunction_nn_chi2_chi2::synapse0x2318580() {
   return (neuron0x22fe6b0()*-0.517653);
}

double NNfunction_nn_chi2_chi2::synapse0x23185c0() {
   return (neuron0x22ff080()*0.490649);
}

double NNfunction_nn_chi2_chi2::synapse0x2318600() {
   return (neuron0x22ffa50()*-0.00911771);
}

double NNfunction_nn_chi2_chi2::synapse0x2318640() {
   return (neuron0x2300420()*1.31547);
}

double NNfunction_nn_chi2_chi2::synapse0x23181f0() {
   return (neuron0x22f64b0()*0.00339459);
}

double NNfunction_nn_chi2_chi2::synapse0x2318230() {
   return (neuron0x2303000()*0.890499);
}

double NNfunction_nn_chi2_chi2::synapse0x2318270() {
   return (neuron0x23039d0()*-0.00362417);
}

double NNfunction_nn_chi2_chi2::synapse0x23182b0() {
   return (neuron0x23043a0()*-0.622944);
}

double NNfunction_nn_chi2_chi2::synapse0x2318890() {
   return (neuron0x2304d70()*-0.320784);
}

double NNfunction_nn_chi2_chi2::synapse0x23188d0() {
   return (neuron0x2305740()*0.218316);
}

double NNfunction_nn_chi2_chi2::synapse0x2318910() {
   return (neuron0x2306110()*-0.00150964);
}

double NNfunction_nn_chi2_chi2::synapse0x2318950() {
   return (neuron0x2306ae0()*0.164497);
}

double NNfunction_nn_chi2_chi2::synapse0x2318990() {
   return (neuron0x23074b0()*0.293264);
}

double NNfunction_nn_chi2_chi2::synapse0x23189d0() {
   return (neuron0x2308090()*-2.58295);
}

double NNfunction_nn_chi2_chi2::synapse0x2318a10() {
   return (neuron0x2308a60()*1.40561);
}

double NNfunction_nn_chi2_chi2::synapse0x2318a50() {
   return (neuron0x22f98e0()*1.03375);
}

double NNfunction_nn_chi2_chi2::synapse0x2318a90() {
   return (neuron0x22fa2b0()*-0.0130414);
}

double NNfunction_nn_chi2_chi2::synapse0x2318ad0() {
   return (neuron0x22fac80()*2.17032);
}

double NNfunction_nn_chi2_chi2::synapse0x2318b10() {
   return (neuron0x230d2c0()*-0.0061892);
}

double NNfunction_nn_chi2_chi2::synapse0x2318b50() {
   return (neuron0x230db70()*0.529784);
}

double NNfunction_nn_chi2_chi2::synapse0x2318b90() {
   return (neuron0x230e540()*-0.0353176);
}

double NNfunction_nn_chi2_chi2::synapse0x2318bd0() {
   return (neuron0x230ef10()*-0.0110053);
}

double NNfunction_nn_chi2_chi2::synapse0x2318f50() {
   return (neuron0x22e9d80()*-0.264583);
}

double NNfunction_nn_chi2_chi2::synapse0x2318f90() {
   return (neuron0x22ea6d0()*2.09491);
}

double NNfunction_nn_chi2_chi2::synapse0x2318fd0() {
   return (neuron0x22eb1b0()*-0.249392);
}

double NNfunction_nn_chi2_chi2::synapse0x2319010() {
   return (neuron0x22eac50()*5.20028);
}

double NNfunction_nn_chi2_chi2::synapse0x2319050() {
   return (neuron0x22ebf90()*-0.192202);
}

double NNfunction_nn_chi2_chi2::synapse0x2319090() {
   return (neuron0x22eda70()*1.52627);
}

double NNfunction_nn_chi2_chi2::synapse0x23190d0() {
   return (neuron0x22ee840()*0.208461);
}

double NNfunction_nn_chi2_chi2::synapse0x2319110() {
   return (neuron0x22ef210()*2.18629);
}

double NNfunction_nn_chi2_chi2::synapse0x2319150() {
   return (neuron0x22efbe0()*2.76713);
}

double NNfunction_nn_chi2_chi2::synapse0x2319190() {
   return (neuron0x22f06c0()*-0.0209564);
}

double NNfunction_nn_chi2_chi2::synapse0x23191d0() {
   return (neuron0x22f1090()*0.654356);
}

double NNfunction_nn_chi2_chi2::synapse0x2319210() {
   return (neuron0x22ee170()*5.18163);
}

double NNfunction_nn_chi2_chi2::synapse0x2319250() {
   return (neuron0x22f2c40()*0.149563);
}

double NNfunction_nn_chi2_chi2::synapse0x2319290() {
   return (neuron0x22f3610()*1.55441);
}

double NNfunction_nn_chi2_chi2::synapse0x23192d0() {
   return (neuron0x22f3fe0()*-1.62426);
}

double NNfunction_nn_chi2_chi2::synapse0x2319310() {
   return (neuron0x22f49b0()*-0.639955);
}

double NNfunction_nn_chi2_chi2::synapse0x2318da0() {
   return (neuron0x22f67c0()*-0.174018);
}

double NNfunction_nn_chi2_chi2::synapse0x2318de0() {
   return (neuron0x22f6aa0()*-6.74524);
}

double NNfunction_nn_chi2_chi2::synapse0x2319460() {
   return (neuron0x22f7470()*-0.437198);
}

double NNfunction_nn_chi2_chi2::synapse0x23194a0() {
   return (neuron0x22f7e40()*-8.86078);
}

double NNfunction_nn_chi2_chi2::synapse0x23194e0() {
   return (neuron0x22f8810()*0.487157);
}

double NNfunction_nn_chi2_chi2::synapse0x2319520() {
   return (neuron0x22f91e0()*-0.336906);
}

double NNfunction_nn_chi2_chi2::synapse0x2319560() {
   return (neuron0x22f1d30()*3.89589);
}

double NNfunction_nn_chi2_chi2::synapse0x23195a0() {
   return (neuron0x22f2700()*3.11308);
}

double NNfunction_nn_chi2_chi2::synapse0x23195e0() {
   return (neuron0x22fbf70()*3.58059);
}

double NNfunction_nn_chi2_chi2::synapse0x2319620() {
   return (neuron0x22fc940()*-0.806506);
}

double NNfunction_nn_chi2_chi2::synapse0x2319660() {
   return (neuron0x22fd310()*-0.939529);
}

double NNfunction_nn_chi2_chi2::synapse0x23196a0() {
   return (neuron0x22fdce0()*-0.592006);
}

double NNfunction_nn_chi2_chi2::synapse0x23196e0() {
   return (neuron0x22fe6b0()*5.06105);
}

double NNfunction_nn_chi2_chi2::synapse0x2319720() {
   return (neuron0x22ff080()*1.05744);
}

double NNfunction_nn_chi2_chi2::synapse0x2319760() {
   return (neuron0x22ffa50()*-0.235051);
}

double NNfunction_nn_chi2_chi2::synapse0x23197a0() {
   return (neuron0x2300420()*-1.3074);
}

double NNfunction_nn_chi2_chi2::synapse0x2319350() {
   return (neuron0x22f64b0()*-0.26163);
}

double NNfunction_nn_chi2_chi2::synapse0x2319390() {
   return (neuron0x2303000()*-2.53303);
}

double NNfunction_nn_chi2_chi2::synapse0x23193d0() {
   return (neuron0x23039d0()*5.86205);
}

double NNfunction_nn_chi2_chi2::synapse0x2319410() {
   return (neuron0x23043a0()*2.60026);
}

double NNfunction_nn_chi2_chi2::synapse0x23199f0() {
   return (neuron0x2304d70()*-1.06979);
}

double NNfunction_nn_chi2_chi2::synapse0x2319a30() {
   return (neuron0x2305740()*1.99748);
}

double NNfunction_nn_chi2_chi2::synapse0x2319a70() {
   return (neuron0x2306110()*-0.983686);
}

double NNfunction_nn_chi2_chi2::synapse0x2319ab0() {
   return (neuron0x2306ae0()*-0.202918);
}

double NNfunction_nn_chi2_chi2::synapse0x2319af0() {
   return (neuron0x23074b0()*1.87952);
}

double NNfunction_nn_chi2_chi2::synapse0x2319b30() {
   return (neuron0x2308090()*-4.91499);
}

double NNfunction_nn_chi2_chi2::synapse0x2319b70() {
   return (neuron0x2308a60()*-9.26763);
}

double NNfunction_nn_chi2_chi2::synapse0x2319bb0() {
   return (neuron0x22f98e0()*3.02958);
}

double NNfunction_nn_chi2_chi2::synapse0x2319bf0() {
   return (neuron0x22fa2b0()*0.17885);
}

double NNfunction_nn_chi2_chi2::synapse0x2319c30() {
   return (neuron0x22fac80()*-3.07655);
}

double NNfunction_nn_chi2_chi2::synapse0x2319c70() {
   return (neuron0x230d2c0()*-0.993592);
}

double NNfunction_nn_chi2_chi2::synapse0x2319cb0() {
   return (neuron0x230db70()*0.0455557);
}

double NNfunction_nn_chi2_chi2::synapse0x2319cf0() {
   return (neuron0x230e540()*0.302564);
}

double NNfunction_nn_chi2_chi2::synapse0x2319d30() {
   return (neuron0x230ef10()*-0.221763);
}

double NNfunction_nn_chi2_chi2::synapse0x2319f90() {
   return (neuron0x2316110()*7.06549);
}

double NNfunction_nn_chi2_chi2::synapse0x2319fd0() {
   return (neuron0x23164b0()*-8.09198);
}

double NNfunction_nn_chi2_chi2::synapse0x231a010() {
   return (neuron0x2316950()*-7.4348);
}

double NNfunction_nn_chi2_chi2::synapse0x231a050() {
   return (neuron0x2317ab0()*-12.7388);
}

double NNfunction_nn_chi2_chi2::synapse0x231a090() {
   return (neuron0x2318c10()*-5.57852);
}

