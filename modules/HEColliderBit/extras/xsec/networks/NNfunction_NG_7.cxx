#include "NNfunction_NG_7.h"
#include <cmath>

double NNfunction_NG_7::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.135)/15.1976;
   input1 = (in1 - -3.68138)/1175.21;
   input2 = (in2 - 474.855)/499.25;
   input3 = (in3 - -30.8715)/723.921;
   input4 = (in4 - 1057.95)/945.45;
   input5 = (in5 - 901.269)/950.48;
   input6 = (in6 - 907.251)/947.735;
   input7 = (in7 - 930.77)/929.06;
   input8 = (in8 - 926.995)/975.115;
   input9 = (in9 - 913.83)/961.423;
   input10 = (in10 - 979.938)/955.817;
   input11 = (in11 - 556.805)/706.87;
   input12 = (in12 - 703.218)/851.668;
   input13 = (in13 - 502.973)/513.154;
   input14 = (in14 - 712.319)/802.929;
   input15 = (in15 - 714.574)/803.45;
   input16 = (in16 - 544.074)/566.27;
   input17 = (in17 - 761.578)/900.584;
   input18 = (in18 - 758.756)/899.134;
   input19 = (in19 - 802.34)/871.886;
   input20 = (in20 - -4.87826)/485.509;
   input21 = (in21 - 0.796312)/1141.53;
   input22 = (in22 - -2.25374)/1205.75;
   input23 = (in23 - -167.595)/614.02;
   switch(index) {
     case 0:
         return neuron0x2861ba0();
     default:
         return 0.;
   }
}

double NNfunction_NG_7::Value(int index, double* input) {
   input0 = (input[0] - 23.135)/15.1976;
   input1 = (input[1] - -3.68138)/1175.21;
   input2 = (input[2] - 474.855)/499.25;
   input3 = (input[3] - -30.8715)/723.921;
   input4 = (input[4] - 1057.95)/945.45;
   input5 = (input[5] - 901.269)/950.48;
   input6 = (input[6] - 907.251)/947.735;
   input7 = (input[7] - 930.77)/929.06;
   input8 = (input[8] - 926.995)/975.115;
   input9 = (input[9] - 913.83)/961.423;
   input10 = (input[10] - 979.938)/955.817;
   input11 = (input[11] - 556.805)/706.87;
   input12 = (input[12] - 703.218)/851.668;
   input13 = (input[13] - 502.973)/513.154;
   input14 = (input[14] - 712.319)/802.929;
   input15 = (input[15] - 714.574)/803.45;
   input16 = (input[16] - 544.074)/566.27;
   input17 = (input[17] - 761.578)/900.584;
   input18 = (input[18] - 758.756)/899.134;
   input19 = (input[19] - 802.34)/871.886;
   input20 = (input[20] - -4.87826)/485.509;
   input21 = (input[21] - 0.796312)/1141.53;
   input22 = (input[22] - -2.25374)/1205.75;
   input23 = (input[23] - -167.595)/614.02;
   switch(index) {
     case 0:
         return neuron0x2861ba0();
     default:
         return 0.;
   }
}

double NNfunction_NG_7::neuron0x282dc60() {
   return input0;
}

double NNfunction_NG_7::neuron0x282dfa0() {
   return input1;
}

double NNfunction_NG_7::neuron0x282e2e0() {
   return input2;
}

double NNfunction_NG_7::neuron0x282e620() {
   return input3;
}

double NNfunction_NG_7::neuron0x282e960() {
   return input4;
}

double NNfunction_NG_7::neuron0x282eca0() {
   return input5;
}

double NNfunction_NG_7::neuron0x282efe0() {
   return input6;
}

double NNfunction_NG_7::neuron0x282f320() {
   return input7;
}

double NNfunction_NG_7::neuron0x282f660() {
   return input8;
}

double NNfunction_NG_7::neuron0x282f9a0() {
   return input9;
}

double NNfunction_NG_7::neuron0x282fce0() {
   return input10;
}

double NNfunction_NG_7::neuron0x2830020() {
   return input11;
}

double NNfunction_NG_7::neuron0x2830360() {
   return input12;
}

double NNfunction_NG_7::neuron0x28306a0() {
   return input13;
}

double NNfunction_NG_7::neuron0x28309e0() {
   return input14;
}

double NNfunction_NG_7::neuron0x2830d20() {
   return input15;
}

double NNfunction_NG_7::neuron0x2831060() {
   return input16;
}

double NNfunction_NG_7::neuron0x28315c0() {
   return input17;
}

double NNfunction_NG_7::neuron0x28317e0() {
   return input18;
}

double NNfunction_NG_7::neuron0x2831b20() {
   return input19;
}

double NNfunction_NG_7::neuron0x2831e60() {
   return input20;
}

double NNfunction_NG_7::neuron0x28321a0() {
   return input21;
}

double NNfunction_NG_7::neuron0x28324e0() {
   return input22;
}

double NNfunction_NG_7::neuron0x2832820() {
   return input23;
}

double NNfunction_NG_7::input0x2832cc0() {
   double input = 0.634154;
   input += synapse0x25edad0();
   input += synapse0x282db20();
   input += synapse0x282db60();
   input += synapse0x2832f70();
   input += synapse0x2832fb0();
   input += synapse0x2832ff0();
   input += synapse0x2833030();
   input += synapse0x2833070();
   input += synapse0x28330b0();
   input += synapse0x28330f0();
   input += synapse0x2833130();
   input += synapse0x2833170();
   input += synapse0x28331b0();
   input += synapse0x28331f0();
   input += synapse0x2833230();
   input += synapse0x2833270();
   input += synapse0x282da90();
   input += synapse0x282dad0();
   input += synapse0x25df320();
   input += synapse0x25df360();
   input += synapse0x28334d0();
   input += synapse0x2833510();
   input += synapse0x2833550();
   input += synapse0x2833590();
   return input;
}

double NNfunction_NG_7::neuron0x2832cc0() {
   double input = input0x2832cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x28335d0() {
   double input = -0.870529;
   input += synapse0x2833910();
   input += synapse0x2833950();
   input += synapse0x2833990();
   input += synapse0x28339d0();
   input += synapse0x2833a10();
   input += synapse0x2833a50();
   input += synapse0x2833a90();
   input += synapse0x2833ad0();
   input += synapse0x2833b10();
   input += synapse0x28333c0();
   input += synapse0x2833400();
   input += synapse0x2833440();
   input += synapse0x2833480();
   input += synapse0x2833d60();
   input += synapse0x2833da0();
   input += synapse0x2833de0();
   input += synapse0x2833760();
   input += synapse0x28337a0();
   input += synapse0x2833f30();
   input += synapse0x2833f70();
   input += synapse0x2833fb0();
   input += synapse0x2833ff0();
   input += synapse0x2834030();
   input += synapse0x2834070();
   return input;
}

double NNfunction_NG_7::neuron0x28335d0() {
   double input = input0x28335d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x28340b0() {
   double input = -4.41743;
   input += synapse0x28343f0();
   input += synapse0x2834430();
   input += synapse0x2834470();
   input += synapse0x28344b0();
   input += synapse0x28344f0();
   input += synapse0x2834530();
   input += synapse0x2834570();
   input += synapse0x28345b0();
   input += synapse0x28345f0();
   input += synapse0x2834630();
   input += synapse0x2834670();
   input += synapse0x28346b0();
   input += synapse0x28346f0();
   input += synapse0x2834730();
   input += synapse0x2834770();
   input += synapse0x28347b0();
   input += synapse0x2834240();
   input += synapse0x2834280();
   input += synapse0x25ed1a0();
   input += synapse0x25ed1e0();
   input += synapse0x281ccf0();
   input += synapse0x281cd30();
   input += synapse0x281cd70();
   input += synapse0x282dba0();
   return input;
}

double NNfunction_NG_7::neuron0x28340b0() {
   double input = input0x28340b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x25ed940() {
   double input = -0.156348;
   input += synapse0x2833d00();
   input += synapse0x282dbe0();
   input += synapse0x282dc20();
   input += synapse0x2834900();
   input += synapse0x2834940();
   input += synapse0x2834980();
   input += synapse0x28349c0();
   input += synapse0x2834a00();
   input += synapse0x2834a40();
   input += synapse0x2834a80();
   input += synapse0x2834ac0();
   input += synapse0x2834b00();
   input += synapse0x2834b40();
   input += synapse0x2834b80();
   input += synapse0x2834bc0();
   input += synapse0x2834c00();
   input += synapse0x2833b50();
   input += synapse0x2833b90();
   input += synapse0x2834d50();
   input += synapse0x2834d90();
   input += synapse0x2834dd0();
   input += synapse0x2834e10();
   input += synapse0x2834e50();
   input += synapse0x2834e90();
   return input;
}

double NNfunction_NG_7::neuron0x25ed940() {
   double input = input0x25ed940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2834ed0() {
   double input = 3.77054;
   input += synapse0x2835210();
   input += synapse0x2835250();
   input += synapse0x2835290();
   input += synapse0x28352d0();
   input += synapse0x2835310();
   input += synapse0x2835350();
   input += synapse0x2835390();
   input += synapse0x28353d0();
   input += synapse0x2835410();
   input += synapse0x2835450();
   input += synapse0x2835490();
   input += synapse0x28354d0();
   input += synapse0x2835510();
   input += synapse0x2835550();
   input += synapse0x2835590();
   input += synapse0x28355d0();
   input += synapse0x2835060();
   input += synapse0x28350a0();
   input += synapse0x2835720();
   input += synapse0x2835760();
   input += synapse0x28357a0();
   input += synapse0x28357e0();
   input += synapse0x2835820();
   input += synapse0x2835860();
   return input;
}

double NNfunction_NG_7::neuron0x2834ed0() {
   double input = input0x2834ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x28358a0() {
   double input = -0.612378;
   input += synapse0x2835be0();
   input += synapse0x2835c20();
   input += synapse0x2835c60();
   input += synapse0x2835ca0();
   input += synapse0x2835ce0();
   input += synapse0x2835d20();
   input += synapse0x2835d60();
   input += synapse0x2835da0();
   input += synapse0x2835de0();
   input += synapse0x25ed530();
   input += synapse0x25ed570();
   input += synapse0x25ed5b0();
   input += synapse0x25ed5f0();
   input += synapse0x25ed630();
   input += synapse0x25ed670();
   input += synapse0x25ed6b0();
   input += synapse0x2835a30();
   input += synapse0x2835a70();
   input += synapse0x25ed800();
   input += synapse0x25ed840();
   input += synapse0x25ed880();
   input += synapse0x25ed8c0();
   input += synapse0x25ed900();
   input += synapse0x2836630();
   return input;
}

double NNfunction_NG_7::neuron0x28358a0() {
   double input = input0x28358a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2836670() {
   double input = -3.21301;
   input += synapse0x28369b0();
   input += synapse0x28369f0();
   input += synapse0x2836a30();
   input += synapse0x2836a70();
   input += synapse0x2836ab0();
   input += synapse0x2836af0();
   input += synapse0x2836b30();
   input += synapse0x2836b70();
   input += synapse0x2836bb0();
   input += synapse0x2836bf0();
   input += synapse0x2836c30();
   input += synapse0x2836c70();
   input += synapse0x2836cb0();
   input += synapse0x2836cf0();
   input += synapse0x2836d30();
   input += synapse0x2836d70();
   input += synapse0x2836800();
   input += synapse0x2836840();
   input += synapse0x2836ec0();
   input += synapse0x2836f00();
   input += synapse0x2836f40();
   input += synapse0x2836f80();
   input += synapse0x2836fc0();
   input += synapse0x2837000();
   return input;
}

double NNfunction_NG_7::neuron0x2836670() {
   double input = input0x2836670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2837040() {
   double input = 0.00878143;
   input += synapse0x2837380();
   input += synapse0x28373c0();
   input += synapse0x2837400();
   input += synapse0x2837440();
   input += synapse0x2837480();
   input += synapse0x28374c0();
   input += synapse0x2837500();
   input += synapse0x2837540();
   input += synapse0x2837580();
   input += synapse0x28375c0();
   input += synapse0x2837600();
   input += synapse0x2837640();
   input += synapse0x2837680();
   input += synapse0x28376c0();
   input += synapse0x2837700();
   input += synapse0x2837740();
   input += synapse0x28371d0();
   input += synapse0x2837210();
   input += synapse0x2837890();
   input += synapse0x28378d0();
   input += synapse0x2837910();
   input += synapse0x2837950();
   input += synapse0x2837990();
   input += synapse0x28379d0();
   return input;
}

double NNfunction_NG_7::neuron0x2837040() {
   double input = input0x2837040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2837a10() {
   double input = -0.76563;
   input += synapse0x28314b0();
   input += synapse0x28314f0();
   input += synapse0x2831530();
   input += synapse0x2831570();
   input += synapse0x2837f60();
   input += synapse0x2837fa0();
   input += synapse0x2837fe0();
   input += synapse0x2838020();
   input += synapse0x2838060();
   input += synapse0x28380a0();
   input += synapse0x28380e0();
   input += synapse0x2838120();
   input += synapse0x2838160();
   input += synapse0x28381a0();
   input += synapse0x28381e0();
   input += synapse0x2838220();
   input += synapse0x2837ba0();
   input += synapse0x2837be0();
   input += synapse0x2838370();
   input += synapse0x28383b0();
   input += synapse0x28383f0();
   input += synapse0x2838430();
   input += synapse0x2838470();
   input += synapse0x28384b0();
   return input;
}

double NNfunction_NG_7::neuron0x2837a10() {
   double input = input0x2837a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x28384f0() {
   double input = 0.0991337;
   input += synapse0x2838830();
   input += synapse0x2838870();
   input += synapse0x28388b0();
   input += synapse0x28388f0();
   input += synapse0x2838930();
   input += synapse0x2838970();
   input += synapse0x28389b0();
   input += synapse0x28389f0();
   input += synapse0x2838a30();
   input += synapse0x2838a70();
   input += synapse0x2838ab0();
   input += synapse0x2838af0();
   input += synapse0x2838b30();
   input += synapse0x2838b70();
   input += synapse0x2838bb0();
   input += synapse0x2838bf0();
   input += synapse0x2838680();
   input += synapse0x28386c0();
   input += synapse0x2838d40();
   input += synapse0x2838d80();
   input += synapse0x2838dc0();
   input += synapse0x2838e00();
   input += synapse0x2838e40();
   input += synapse0x2838e80();
   return input;
}

double NNfunction_NG_7::neuron0x28384f0() {
   double input = input0x28384f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2838ec0() {
   double input = 1.84498;
   input += synapse0x2839200();
   input += synapse0x2839240();
   input += synapse0x2839280();
   input += synapse0x28392c0();
   input += synapse0x2839300();
   input += synapse0x2839340();
   input += synapse0x2839380();
   input += synapse0x28393c0();
   input += synapse0x2839400();
   input += synapse0x2839440();
   input += synapse0x2839480();
   input += synapse0x28394c0();
   input += synapse0x2839500();
   input += synapse0x2839540();
   input += synapse0x2839580();
   input += synapse0x28395c0();
   input += synapse0x2839050();
   input += synapse0x2839090();
   input += synapse0x2835e20();
   input += synapse0x2835e60();
   input += synapse0x2835ea0();
   input += synapse0x2835ee0();
   input += synapse0x2835f20();
   input += synapse0x2835f60();
   return input;
}

double NNfunction_NG_7::neuron0x2838ec0() {
   double input = input0x2838ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2835fa0() {
   double input = -0.158331;
   input += synapse0x28362e0();
   input += synapse0x2836320();
   input += synapse0x2836360();
   input += synapse0x28363a0();
   input += synapse0x28363e0();
   input += synapse0x2836420();
   input += synapse0x2836460();
   input += synapse0x28364a0();
   input += synapse0x28364e0();
   input += synapse0x2836520();
   input += synapse0x2836560();
   input += synapse0x28365a0();
   input += synapse0x28365e0();
   input += synapse0x283a720();
   input += synapse0x283a760();
   input += synapse0x283a7a0();
   input += synapse0x2836130();
   input += synapse0x2836170();
   input += synapse0x283a8f0();
   input += synapse0x283a930();
   input += synapse0x283a970();
   input += synapse0x283a9b0();
   input += synapse0x283a9f0();
   input += synapse0x283aa30();
   return input;
}

double NNfunction_NG_7::neuron0x2835fa0() {
   double input = input0x2835fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283aa70() {
   double input = 1.56982;
   input += synapse0x283adb0();
   input += synapse0x283adf0();
   input += synapse0x283ae30();
   input += synapse0x283ae70();
   input += synapse0x283aeb0();
   input += synapse0x283aef0();
   input += synapse0x283af30();
   input += synapse0x283af70();
   input += synapse0x283afb0();
   input += synapse0x283aff0();
   input += synapse0x283b030();
   input += synapse0x283b070();
   input += synapse0x283b0b0();
   input += synapse0x283b0f0();
   input += synapse0x283b130();
   input += synapse0x283b170();
   input += synapse0x283ac00();
   input += synapse0x283ac40();
   input += synapse0x283b2c0();
   input += synapse0x283b300();
   input += synapse0x283b340();
   input += synapse0x283b380();
   input += synapse0x283b3c0();
   input += synapse0x283b400();
   return input;
}

double NNfunction_NG_7::neuron0x283aa70() {
   double input = input0x283aa70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283b440() {
   double input = -0.877411;
   input += synapse0x283b780();
   input += synapse0x283b7c0();
   input += synapse0x283b800();
   input += synapse0x283b840();
   input += synapse0x283b880();
   input += synapse0x283b8c0();
   input += synapse0x283b900();
   input += synapse0x283b940();
   input += synapse0x283b980();
   input += synapse0x283b9c0();
   input += synapse0x283ba00();
   input += synapse0x283ba40();
   input += synapse0x283ba80();
   input += synapse0x283bac0();
   input += synapse0x283bb00();
   input += synapse0x283bb40();
   input += synapse0x283b5d0();
   input += synapse0x283b610();
   input += synapse0x283bc90();
   input += synapse0x283bcd0();
   input += synapse0x283bd10();
   input += synapse0x283bd50();
   input += synapse0x283bd90();
   input += synapse0x283bdd0();
   return input;
}

double NNfunction_NG_7::neuron0x283b440() {
   double input = input0x283b440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283be10() {
   double input = -0.513577;
   input += synapse0x283c150();
   input += synapse0x283c190();
   input += synapse0x283c1d0();
   input += synapse0x283c210();
   input += synapse0x283c250();
   input += synapse0x283c290();
   input += synapse0x283c2d0();
   input += synapse0x283c310();
   input += synapse0x283c350();
   input += synapse0x283c390();
   input += synapse0x283c3d0();
   input += synapse0x283c410();
   input += synapse0x283c450();
   input += synapse0x283c490();
   input += synapse0x283c4d0();
   input += synapse0x283c510();
   input += synapse0x283bfa0();
   input += synapse0x283bfe0();
   input += synapse0x283c660();
   input += synapse0x283c6a0();
   input += synapse0x283c6e0();
   input += synapse0x283c720();
   input += synapse0x283c760();
   input += synapse0x283c7a0();
   return input;
}

double NNfunction_NG_7::neuron0x283be10() {
   double input = input0x283be10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283c7e0() {
   double input = -0.270669;
   input += synapse0x283cb20();
   input += synapse0x282de80();
   input += synapse0x282dec0();
   input += synapse0x282e1c0();
   input += synapse0x282e200();
   input += synapse0x282e500();
   input += synapse0x282e540();
   input += synapse0x282e840();
   input += synapse0x282e880();
   input += synapse0x282eb80();
   input += synapse0x282ebc0();
   input += synapse0x282eec0();
   input += synapse0x282ef00();
   input += synapse0x282f200();
   input += synapse0x282f240();
   input += synapse0x282f540();
   input += synapse0x282f580();
   input += synapse0x282f880();
   input += synapse0x282f8c0();
   input += synapse0x282fbc0();
   input += synapse0x282fc00();
   input += synapse0x282ff00();
   input += synapse0x282ff40();
   input += synapse0x2830240();
   return input;
}

double NNfunction_NG_7::neuron0x283c7e0() {
   double input = input0x283c7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283e5f0() {
   double input = 0.112891;
   input += synapse0x2830280();
   input += synapse0x2830f40();
   input += synapse0x2830f80();
   input += synapse0x283c970();
   input += synapse0x283c9b0();
   input += synapse0x2831280();
   input += synapse0x28312c0();
   input += synapse0x25df200();
   input += synapse0x25df240();
   input += synapse0x2831a00();
   input += synapse0x2831a40();
   input += synapse0x2831d40();
   input += synapse0x2831d80();
   input += synapse0x2832080();
   input += synapse0x28320c0();
   input += synapse0x28323c0();
   input += synapse0x2832400();
   input += synapse0x2832700();
   input += synapse0x2832740();
   input += synapse0x2832a40();
   input += synapse0x2832a80();
   input += synapse0x2830580();
   input += synapse0x28305c0();
   input += synapse0x283e890();
   return input;
}

double NNfunction_NG_7::neuron0x283e5f0() {
   double input = input0x283e5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283e8d0() {
   double input = -0.904169;
   input += synapse0x283ec10();
   input += synapse0x283ec50();
   input += synapse0x283ec90();
   input += synapse0x283ecd0();
   input += synapse0x283ed10();
   input += synapse0x283ed50();
   input += synapse0x283ed90();
   input += synapse0x283edd0();
   input += synapse0x283ee10();
   input += synapse0x283ee50();
   input += synapse0x283ee90();
   input += synapse0x283eed0();
   input += synapse0x283ef10();
   input += synapse0x283ef50();
   input += synapse0x283ef90();
   input += synapse0x283efd0();
   input += synapse0x283ea60();
   input += synapse0x283eaa0();
   input += synapse0x283f120();
   input += synapse0x283f160();
   input += synapse0x283f1a0();
   input += synapse0x283f1e0();
   input += synapse0x283f220();
   input += synapse0x283f260();
   return input;
}

double NNfunction_NG_7::neuron0x283e8d0() {
   double input = input0x283e8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283f2a0() {
   double input = -0.22352;
   input += synapse0x283f5e0();
   input += synapse0x283f620();
   input += synapse0x283f660();
   input += synapse0x283f6a0();
   input += synapse0x283f6e0();
   input += synapse0x283f720();
   input += synapse0x283f760();
   input += synapse0x283f7a0();
   input += synapse0x283f7e0();
   input += synapse0x283f820();
   input += synapse0x283f860();
   input += synapse0x283f8a0();
   input += synapse0x283f8e0();
   input += synapse0x283f920();
   input += synapse0x283f960();
   input += synapse0x283f9a0();
   input += synapse0x283f430();
   input += synapse0x283f470();
   input += synapse0x283faf0();
   input += synapse0x283fb30();
   input += synapse0x283fb70();
   input += synapse0x283fbb0();
   input += synapse0x283fbf0();
   input += synapse0x283fc30();
   return input;
}

double NNfunction_NG_7::neuron0x283f2a0() {
   double input = input0x283f2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283fc70() {
   double input = -0.171901;
   input += synapse0x283ffb0();
   input += synapse0x283fff0();
   input += synapse0x2840030();
   input += synapse0x2840070();
   input += synapse0x28400b0();
   input += synapse0x28400f0();
   input += synapse0x2840130();
   input += synapse0x2840170();
   input += synapse0x28401b0();
   input += synapse0x28401f0();
   input += synapse0x2840230();
   input += synapse0x2840270();
   input += synapse0x28402b0();
   input += synapse0x28402f0();
   input += synapse0x2840330();
   input += synapse0x2840370();
   input += synapse0x283fe00();
   input += synapse0x283fe40();
   input += synapse0x28404c0();
   input += synapse0x2840500();
   input += synapse0x2840540();
   input += synapse0x2840580();
   input += synapse0x28405c0();
   input += synapse0x2840600();
   return input;
}

double NNfunction_NG_7::neuron0x283fc70() {
   double input = input0x283fc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2840640() {
   double input = -1.77303;
   input += synapse0x2840980();
   input += synapse0x28409c0();
   input += synapse0x2840a00();
   input += synapse0x2840a40();
   input += synapse0x2840a80();
   input += synapse0x2840ac0();
   input += synapse0x2840b00();
   input += synapse0x2840b40();
   input += synapse0x2840b80();
   input += synapse0x2840bc0();
   input += synapse0x2840c00();
   input += synapse0x2840c40();
   input += synapse0x2840c80();
   input += synapse0x2840cc0();
   input += synapse0x2840d00();
   input += synapse0x2840d40();
   input += synapse0x28407d0();
   input += synapse0x2840810();
   input += synapse0x2840e90();
   input += synapse0x2840ed0();
   input += synapse0x2840f10();
   input += synapse0x2840f50();
   input += synapse0x2840f90();
   input += synapse0x2840fd0();
   return input;
}

double NNfunction_NG_7::neuron0x2840640() {
   double input = input0x2840640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2841010() {
   double input = 4.24793;
   input += synapse0x2841350();
   input += synapse0x2841390();
   input += synapse0x28413d0();
   input += synapse0x2841410();
   input += synapse0x2841450();
   input += synapse0x2841490();
   input += synapse0x28414d0();
   input += synapse0x2841510();
   input += synapse0x2841550();
   input += synapse0x2839710();
   input += synapse0x2839750();
   input += synapse0x2839790();
   input += synapse0x28397d0();
   input += synapse0x2839810();
   input += synapse0x2839850();
   input += synapse0x2839890();
   input += synapse0x28411a0();
   input += synapse0x28411e0();
   input += synapse0x28399e0();
   input += synapse0x2839a20();
   input += synapse0x2839a60();
   input += synapse0x2839aa0();
   input += synapse0x2839ae0();
   input += synapse0x2839b20();
   return input;
}

double NNfunction_NG_7::neuron0x2841010() {
   double input = input0x2841010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2839b60() {
   double input = 0.622675;
   input += synapse0x2839ea0();
   input += synapse0x2839ee0();
   input += synapse0x2839f20();
   input += synapse0x2839f60();
   input += synapse0x2839fa0();
   input += synapse0x2839fe0();
   input += synapse0x283a020();
   input += synapse0x283a060();
   input += synapse0x283a0a0();
   input += synapse0x283a0e0();
   input += synapse0x283a120();
   input += synapse0x283a160();
   input += synapse0x283a1a0();
   input += synapse0x283a1e0();
   input += synapse0x283a220();
   input += synapse0x283a260();
   input += synapse0x2839cf0();
   input += synapse0x2839d30();
   input += synapse0x283a3b0();
   input += synapse0x283a3f0();
   input += synapse0x283a430();
   input += synapse0x283a470();
   input += synapse0x283a4b0();
   input += synapse0x283a4f0();
   return input;
}

double NNfunction_NG_7::neuron0x2839b60() {
   double input = input0x2839b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283a530() {
   double input = -0.104488;
   input += synapse0x283a6c0();
   input += synapse0x2843750();
   input += synapse0x2843790();
   input += synapse0x28437d0();
   input += synapse0x2843810();
   input += synapse0x2843850();
   input += synapse0x2843890();
   input += synapse0x28438d0();
   input += synapse0x2843910();
   input += synapse0x2843950();
   input += synapse0x2843990();
   input += synapse0x28439d0();
   input += synapse0x2843a10();
   input += synapse0x2843a50();
   input += synapse0x2843a90();
   input += synapse0x2843ad0();
   input += synapse0x28435a0();
   input += synapse0x28435e0();
   input += synapse0x2843c20();
   input += synapse0x2843c60();
   input += synapse0x2843ca0();
   input += synapse0x2843ce0();
   input += synapse0x2843d20();
   input += synapse0x2843d60();
   return input;
}

double NNfunction_NG_7::neuron0x283a530() {
   double input = input0x283a530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2843da0() {
   double input = 0.944078;
   input += synapse0x28440e0();
   input += synapse0x2844120();
   input += synapse0x2844160();
   input += synapse0x28441a0();
   input += synapse0x28441e0();
   input += synapse0x2844220();
   input += synapse0x2844260();
   input += synapse0x28442a0();
   input += synapse0x28442e0();
   input += synapse0x2844320();
   input += synapse0x2844360();
   input += synapse0x28443a0();
   input += synapse0x28443e0();
   input += synapse0x2844420();
   input += synapse0x2844460();
   input += synapse0x28444a0();
   input += synapse0x2843f30();
   input += synapse0x2843f70();
   input += synapse0x28445f0();
   input += synapse0x2844630();
   input += synapse0x2844670();
   input += synapse0x28446b0();
   input += synapse0x28446f0();
   input += synapse0x2844730();
   return input;
}

double NNfunction_NG_7::neuron0x2843da0() {
   double input = input0x2843da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2844770() {
   double input = 0.590711;
   input += synapse0x2844ab0();
   input += synapse0x2844af0();
   input += synapse0x2844b30();
   input += synapse0x2844b70();
   input += synapse0x2844bb0();
   input += synapse0x2844bf0();
   input += synapse0x2844c30();
   input += synapse0x2844c70();
   input += synapse0x2844cb0();
   input += synapse0x2844cf0();
   input += synapse0x2844d30();
   input += synapse0x2844d70();
   input += synapse0x2844db0();
   input += synapse0x2844df0();
   input += synapse0x2844e30();
   input += synapse0x2844e70();
   input += synapse0x2844900();
   input += synapse0x2844940();
   input += synapse0x2844fc0();
   input += synapse0x2845000();
   input += synapse0x2845040();
   input += synapse0x2845080();
   input += synapse0x28450c0();
   input += synapse0x2845100();
   return input;
}

double NNfunction_NG_7::neuron0x2844770() {
   double input = input0x2844770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2845140() {
   double input = -1.00463;
   input += synapse0x2845480();
   input += synapse0x28454c0();
   input += synapse0x2845500();
   input += synapse0x2845540();
   input += synapse0x2845580();
   input += synapse0x28455c0();
   input += synapse0x2845600();
   input += synapse0x2845640();
   input += synapse0x2845680();
   input += synapse0x28456c0();
   input += synapse0x2845700();
   input += synapse0x2845740();
   input += synapse0x2845780();
   input += synapse0x28457c0();
   input += synapse0x2845800();
   input += synapse0x2845840();
   input += synapse0x28452d0();
   input += synapse0x2845310();
   input += synapse0x2845990();
   input += synapse0x28459d0();
   input += synapse0x2845a10();
   input += synapse0x2845a50();
   input += synapse0x2845a90();
   input += synapse0x2845ad0();
   return input;
}

double NNfunction_NG_7::neuron0x2845140() {
   double input = input0x2845140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2845b10() {
   double input = -0.343365;
   input += synapse0x2845e50();
   input += synapse0x2845e90();
   input += synapse0x2845ed0();
   input += synapse0x2845f10();
   input += synapse0x2845f50();
   input += synapse0x2845f90();
   input += synapse0x2845fd0();
   input += synapse0x2846010();
   input += synapse0x2846050();
   input += synapse0x2846090();
   input += synapse0x28460d0();
   input += synapse0x2846110();
   input += synapse0x2846150();
   input += synapse0x2846190();
   input += synapse0x28461d0();
   input += synapse0x2846210();
   input += synapse0x2845ca0();
   input += synapse0x2845ce0();
   input += synapse0x2846360();
   input += synapse0x28463a0();
   input += synapse0x28463e0();
   input += synapse0x2846420();
   input += synapse0x2846460();
   input += synapse0x28464a0();
   return input;
}

double NNfunction_NG_7::neuron0x2845b10() {
   double input = input0x2845b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x28464e0() {
   double input = -2.17093;
   input += synapse0x2846820();
   input += synapse0x2846860();
   input += synapse0x28468a0();
   input += synapse0x28468e0();
   input += synapse0x2846920();
   input += synapse0x2846960();
   input += synapse0x28469a0();
   input += synapse0x28469e0();
   input += synapse0x2846a20();
   input += synapse0x2846a60();
   input += synapse0x2846aa0();
   input += synapse0x2846ae0();
   input += synapse0x2846b20();
   input += synapse0x2846b60();
   input += synapse0x2846ba0();
   input += synapse0x2846be0();
   input += synapse0x2846670();
   input += synapse0x28466b0();
   input += synapse0x2846d30();
   input += synapse0x2846d70();
   input += synapse0x2846db0();
   input += synapse0x2846df0();
   input += synapse0x2846e30();
   input += synapse0x2846e70();
   return input;
}

double NNfunction_NG_7::neuron0x28464e0() {
   double input = input0x28464e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2846eb0() {
   double input = -0.617436;
   input += synapse0x28471f0();
   input += synapse0x2847230();
   input += synapse0x2847270();
   input += synapse0x28472b0();
   input += synapse0x28472f0();
   input += synapse0x2847330();
   input += synapse0x2847370();
   input += synapse0x28473b0();
   input += synapse0x28473f0();
   input += synapse0x2847430();
   input += synapse0x2847470();
   input += synapse0x28474b0();
   input += synapse0x28474f0();
   input += synapse0x2847530();
   input += synapse0x2847570();
   input += synapse0x28475b0();
   input += synapse0x2847040();
   input += synapse0x2847080();
   input += synapse0x2847700();
   input += synapse0x2847740();
   input += synapse0x2847780();
   input += synapse0x28477c0();
   input += synapse0x2847800();
   input += synapse0x2847840();
   return input;
}

double NNfunction_NG_7::neuron0x2846eb0() {
   double input = input0x2846eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2847880() {
   double input = -0.68258;
   input += synapse0x2847bc0();
   input += synapse0x2847c00();
   input += synapse0x2847c40();
   input += synapse0x2847c80();
   input += synapse0x2847cc0();
   input += synapse0x2847d00();
   input += synapse0x2847d40();
   input += synapse0x2847d80();
   input += synapse0x2847dc0();
   input += synapse0x2847e00();
   input += synapse0x2847e40();
   input += synapse0x2847e80();
   input += synapse0x2847ec0();
   input += synapse0x2847f00();
   input += synapse0x2847f40();
   input += synapse0x2847f80();
   input += synapse0x2847a10();
   input += synapse0x2847a50();
   input += synapse0x28480d0();
   input += synapse0x2848110();
   input += synapse0x2848150();
   input += synapse0x2848190();
   input += synapse0x28481d0();
   input += synapse0x2848210();
   return input;
}

double NNfunction_NG_7::neuron0x2847880() {
   double input = input0x2847880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2848250() {
   double input = 0.018486;
   input += synapse0x2848590();
   input += synapse0x283cb60();
   input += synapse0x283cba0();
   input += synapse0x283cbe0();
   input += synapse0x283ce30();
   input += synapse0x283ce70();
   input += synapse0x283ceb0();
   input += synapse0x283d100();
   input += synapse0x283d140();
   input += synapse0x283d390();
   input += synapse0x283d3d0();
   input += synapse0x283d410();
   input += synapse0x283d660();
   input += synapse0x283d6a0();
   input += synapse0x283d8f0();
   input += synapse0x283d930();
   input += synapse0x28483e0();
   input += synapse0x2848420();
   input += synapse0x283da80();
   input += synapse0x283df90();
   input += synapse0x283dfd0();
   input += synapse0x283e010();
   input += synapse0x283e260();
   input += synapse0x283e2a0();
   return input;
}

double NNfunction_NG_7::neuron0x2848250() {
   double input = input0x2848250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x283e2e0() {
   double input = 0.446107;
   input += synapse0x283db50();
   input += synapse0x283db90();
   input += synapse0x283dbd0();
   input += synapse0x283dc10();
   input += synapse0x283e590();
   input += synapse0x284a8e0();
   input += synapse0x284a920();
   input += synapse0x284a960();
   input += synapse0x284a9a0();
   input += synapse0x284a9e0();
   input += synapse0x284aa20();
   input += synapse0x284aa60();
   input += synapse0x284aaa0();
   input += synapse0x284aae0();
   input += synapse0x284ab20();
   input += synapse0x284ab60();
   input += synapse0x283e470();
   input += synapse0x283e4b0();
   input += synapse0x284acb0();
   input += synapse0x284acf0();
   input += synapse0x284ad30();
   input += synapse0x284ad70();
   input += synapse0x284adb0();
   input += synapse0x284adf0();
   return input;
}

double NNfunction_NG_7::neuron0x283e2e0() {
   double input = input0x283e2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x284ae30() {
   double input = -2.18312;
   input += synapse0x284b170();
   input += synapse0x284b1b0();
   input += synapse0x284b1f0();
   input += synapse0x284b230();
   input += synapse0x284b270();
   input += synapse0x284b2b0();
   input += synapse0x284b2f0();
   input += synapse0x284b330();
   input += synapse0x284b370();
   input += synapse0x284b3b0();
   input += synapse0x284b3f0();
   input += synapse0x284b430();
   input += synapse0x284b470();
   input += synapse0x284b4b0();
   input += synapse0x284b4f0();
   input += synapse0x284b530();
   input += synapse0x284afc0();
   input += synapse0x284b000();
   input += synapse0x284b680();
   input += synapse0x284b6c0();
   input += synapse0x284b700();
   input += synapse0x284b740();
   input += synapse0x284b780();
   input += synapse0x284b7c0();
   return input;
}

double NNfunction_NG_7::neuron0x284ae30() {
   double input = input0x284ae30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x284b800() {
   double input = -2.01613;
   input += synapse0x284bb40();
   input += synapse0x284bb80();
   input += synapse0x284bbc0();
   input += synapse0x284bc00();
   input += synapse0x284bc40();
   input += synapse0x284bc80();
   input += synapse0x284bcc0();
   input += synapse0x284bd00();
   input += synapse0x284bd40();
   input += synapse0x284bd80();
   input += synapse0x284bdc0();
   input += synapse0x284be00();
   input += synapse0x284be40();
   input += synapse0x284be80();
   input += synapse0x284bec0();
   input += synapse0x284bf00();
   input += synapse0x284b990();
   input += synapse0x284b9d0();
   input += synapse0x284c050();
   input += synapse0x284c090();
   input += synapse0x284c0d0();
   input += synapse0x284c110();
   input += synapse0x284c150();
   input += synapse0x284c190();
   return input;
}

double NNfunction_NG_7::neuron0x284b800() {
   double input = input0x284b800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x284c1d0() {
   double input = -0.901209;
   input += synapse0x284c510();
   input += synapse0x284c550();
   input += synapse0x284c590();
   input += synapse0x284c5d0();
   input += synapse0x284c610();
   input += synapse0x284c650();
   input += synapse0x284c690();
   input += synapse0x284c6d0();
   input += synapse0x284c710();
   input += synapse0x284c750();
   input += synapse0x284c790();
   input += synapse0x284c7d0();
   input += synapse0x284c810();
   input += synapse0x284c850();
   input += synapse0x284c890();
   input += synapse0x284c8d0();
   input += synapse0x284c360();
   input += synapse0x284c3a0();
   input += synapse0x284ca20();
   input += synapse0x284ca60();
   input += synapse0x284caa0();
   input += synapse0x284cae0();
   input += synapse0x284cb20();
   input += synapse0x284cb60();
   return input;
}

double NNfunction_NG_7::neuron0x284c1d0() {
   double input = input0x284c1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x284cba0() {
   double input = -3.72524;
   input += synapse0x284cee0();
   input += synapse0x284cf20();
   input += synapse0x284cf60();
   input += synapse0x284cfa0();
   input += synapse0x284cfe0();
   input += synapse0x284d020();
   input += synapse0x284d060();
   input += synapse0x284d0a0();
   input += synapse0x284d0e0();
   input += synapse0x284d120();
   input += synapse0x284d160();
   input += synapse0x284d1a0();
   input += synapse0x284d1e0();
   input += synapse0x284d220();
   input += synapse0x284d260();
   input += synapse0x284d2a0();
   input += synapse0x284cd30();
   input += synapse0x284cd70();
   input += synapse0x284d3f0();
   input += synapse0x284d430();
   input += synapse0x284d470();
   input += synapse0x284d4b0();
   input += synapse0x284d4f0();
   input += synapse0x284d530();
   return input;
}

double NNfunction_NG_7::neuron0x284cba0() {
   double input = input0x284cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x284d570() {
   double input = -0.641006;
   input += synapse0x284d8b0();
   input += synapse0x284d8f0();
   input += synapse0x284d930();
   input += synapse0x284d970();
   input += synapse0x284d9b0();
   input += synapse0x284d9f0();
   input += synapse0x284da30();
   input += synapse0x284da70();
   input += synapse0x284dab0();
   input += synapse0x284daf0();
   input += synapse0x284db30();
   input += synapse0x284db70();
   input += synapse0x284dbb0();
   input += synapse0x284dbf0();
   input += synapse0x284dc30();
   input += synapse0x284dc70();
   input += synapse0x284d700();
   input += synapse0x284d740();
   input += synapse0x284ddc0();
   input += synapse0x284de00();
   input += synapse0x284de40();
   input += synapse0x284de80();
   input += synapse0x284dec0();
   input += synapse0x284df00();
   return input;
}

double NNfunction_NG_7::neuron0x284d570() {
   double input = input0x284d570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x284df40() {
   double input = 0.0617166;
   input += synapse0x284e280();
   input += synapse0x284e2c0();
   input += synapse0x284e300();
   input += synapse0x284e340();
   input += synapse0x284e380();
   input += synapse0x284e3c0();
   input += synapse0x284e400();
   input += synapse0x284e440();
   input += synapse0x284e480();
   input += synapse0x284e4c0();
   input += synapse0x284e500();
   input += synapse0x284e540();
   input += synapse0x284e580();
   input += synapse0x284e5c0();
   input += synapse0x284e600();
   input += synapse0x284e640();
   input += synapse0x284e0d0();
   input += synapse0x284e110();
   input += synapse0x284e790();
   input += synapse0x284e7d0();
   input += synapse0x284e810();
   input += synapse0x284e850();
   input += synapse0x284e890();
   input += synapse0x284e8d0();
   return input;
}

double NNfunction_NG_7::neuron0x284df40() {
   double input = input0x284df40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x284e910() {
   double input = -0.0765673;
   input += synapse0x284ec50();
   input += synapse0x284ec90();
   input += synapse0x284ecd0();
   input += synapse0x284ed10();
   input += synapse0x284ed50();
   input += synapse0x284ed90();
   input += synapse0x284edd0();
   input += synapse0x284ee10();
   input += synapse0x284ee50();
   input += synapse0x284ee90();
   input += synapse0x284eed0();
   input += synapse0x284ef10();
   input += synapse0x284ef50();
   input += synapse0x284ef90();
   input += synapse0x284efd0();
   input += synapse0x284f010();
   input += synapse0x284eaa0();
   input += synapse0x284eae0();
   input += synapse0x284f160();
   input += synapse0x284f1a0();
   input += synapse0x284f1e0();
   input += synapse0x284f220();
   input += synapse0x284f260();
   input += synapse0x284f2a0();
   return input;
}

double NNfunction_NG_7::neuron0x284e910() {
   double input = input0x284e910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x284f2e0() {
   double input = -1.06866;
   input += synapse0x2837d50();
   input += synapse0x2837d90();
   input += synapse0x2837dd0();
   input += synapse0x2837e10();
   input += synapse0x2837e50();
   input += synapse0x2837e90();
   input += synapse0x2837ed0();
   input += synapse0x2837f10();
   input += synapse0x284fa30();
   input += synapse0x284fa70();
   input += synapse0x284fab0();
   input += synapse0x284faf0();
   input += synapse0x284fb30();
   input += synapse0x284fb70();
   input += synapse0x284fbb0();
   input += synapse0x284fbf0();
   input += synapse0x284f470();
   input += synapse0x284f4b0();
   input += synapse0x284fd40();
   input += synapse0x284fd80();
   input += synapse0x284fdc0();
   input += synapse0x284fe00();
   input += synapse0x284fe40();
   input += synapse0x284fe80();
   return input;
}

double NNfunction_NG_7::neuron0x284f2e0() {
   double input = input0x284f2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x284fec0() {
   double input = -1.67843;
   input += synapse0x2850200();
   input += synapse0x2850240();
   input += synapse0x2850280();
   input += synapse0x28502c0();
   input += synapse0x2850300();
   input += synapse0x2850340();
   input += synapse0x2850380();
   input += synapse0x28503c0();
   input += synapse0x2850400();
   input += synapse0x2850440();
   input += synapse0x2850480();
   input += synapse0x28504c0();
   input += synapse0x2850500();
   input += synapse0x2850540();
   input += synapse0x2850580();
   input += synapse0x28505c0();
   input += synapse0x2850050();
   input += synapse0x2850090();
   input += synapse0x2850710();
   input += synapse0x2850750();
   input += synapse0x2850790();
   input += synapse0x28507d0();
   input += synapse0x2850810();
   input += synapse0x2850850();
   return input;
}

double NNfunction_NG_7::neuron0x284fec0() {
   double input = input0x284fec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2850890() {
   double input = -1.4381;
   input += synapse0x2850bd0();
   input += synapse0x2850c10();
   input += synapse0x2850c50();
   input += synapse0x2850c90();
   input += synapse0x2850cd0();
   input += synapse0x2850d10();
   input += synapse0x2850d50();
   input += synapse0x2850d90();
   input += synapse0x2850dd0();
   input += synapse0x2850e10();
   input += synapse0x2850e50();
   input += synapse0x2850e90();
   input += synapse0x2850ed0();
   input += synapse0x2850f10();
   input += synapse0x2850f50();
   input += synapse0x2850f90();
   input += synapse0x2850a20();
   input += synapse0x2850a60();
   input += synapse0x2841590();
   input += synapse0x28415d0();
   input += synapse0x2841610();
   input += synapse0x2841650();
   input += synapse0x2841690();
   input += synapse0x28416d0();
   return input;
}

double NNfunction_NG_7::neuron0x2850890() {
   double input = input0x2850890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2841710() {
   double input = 0.642849;
   input += synapse0x2841a50();
   input += synapse0x2841a90();
   input += synapse0x2841ad0();
   input += synapse0x2841b10();
   input += synapse0x2841b50();
   input += synapse0x2841b90();
   input += synapse0x2841bd0();
   input += synapse0x2841c10();
   input += synapse0x2841c50();
   input += synapse0x2841c90();
   input += synapse0x2841cd0();
   input += synapse0x2841d10();
   input += synapse0x2841d50();
   input += synapse0x2841d90();
   input += synapse0x2841dd0();
   input += synapse0x2841e10();
   input += synapse0x28418a0();
   input += synapse0x28418e0();
   input += synapse0x2841f60();
   input += synapse0x2841fa0();
   input += synapse0x2841fe0();
   input += synapse0x2842020();
   input += synapse0x2842060();
   input += synapse0x28420a0();
   return input;
}

double NNfunction_NG_7::neuron0x2841710() {
   double input = input0x2841710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x28420e0() {
   double input = -1.06432;
   input += synapse0x2842420();
   input += synapse0x2842460();
   input += synapse0x28424a0();
   input += synapse0x28424e0();
   input += synapse0x2842520();
   input += synapse0x2842560();
   input += synapse0x28425a0();
   input += synapse0x28425e0();
   input += synapse0x2842620();
   input += synapse0x2842660();
   input += synapse0x28426a0();
   input += synapse0x28426e0();
   input += synapse0x2842720();
   input += synapse0x2842760();
   input += synapse0x28427a0();
   input += synapse0x28427e0();
   input += synapse0x2842270();
   input += synapse0x28422b0();
   input += synapse0x2842930();
   input += synapse0x2842970();
   input += synapse0x28429b0();
   input += synapse0x28429f0();
   input += synapse0x2842a30();
   input += synapse0x2842a70();
   return input;
}

double NNfunction_NG_7::neuron0x28420e0() {
   double input = input0x28420e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2842ab0() {
   double input = -2.19196;
   input += synapse0x2842df0();
   input += synapse0x2842e30();
   input += synapse0x2842e70();
   input += synapse0x2842eb0();
   input += synapse0x2842ef0();
   input += synapse0x2842f30();
   input += synapse0x2842f70();
   input += synapse0x2842fb0();
   input += synapse0x2842ff0();
   input += synapse0x2843030();
   input += synapse0x2843070();
   input += synapse0x28430b0();
   input += synapse0x28430f0();
   input += synapse0x2843130();
   input += synapse0x2843170();
   input += synapse0x28431b0();
   input += synapse0x2842c40();
   input += synapse0x2842c80();
   input += synapse0x2843300();
   input += synapse0x2843340();
   input += synapse0x2843380();
   input += synapse0x28433c0();
   input += synapse0x2843400();
   input += synapse0x2843440();
   return input;
}

double NNfunction_NG_7::neuron0x2842ab0() {
   double input = input0x2842ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x28550f0() {
   double input = -0.100344;
   input += synapse0x2855310();
   input += synapse0x2855350();
   input += synapse0x2855390();
   input += synapse0x28553d0();
   input += synapse0x2855410();
   input += synapse0x2855450();
   input += synapse0x2855490();
   input += synapse0x28554d0();
   input += synapse0x2855510();
   input += synapse0x2855550();
   input += synapse0x2855590();
   input += synapse0x28555d0();
   input += synapse0x2855610();
   input += synapse0x2855650();
   input += synapse0x2855690();
   input += synapse0x28556d0();
   input += synapse0x2843480();
   input += synapse0x28434c0();
   input += synapse0x2855820();
   input += synapse0x2855860();
   input += synapse0x28558a0();
   input += synapse0x28558e0();
   input += synapse0x2855920();
   input += synapse0x2855960();
   return input;
}

double NNfunction_NG_7::neuron0x28550f0() {
   double input = input0x28550f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x28559a0() {
   double input = 0.597157;
   input += synapse0x2855ce0();
   input += synapse0x2855d20();
   input += synapse0x2855d60();
   input += synapse0x2855da0();
   input += synapse0x2855de0();
   input += synapse0x2855e20();
   input += synapse0x2855e60();
   input += synapse0x2855ea0();
   input += synapse0x2855ee0();
   input += synapse0x2855f20();
   input += synapse0x2855f60();
   input += synapse0x2855fa0();
   input += synapse0x2855fe0();
   input += synapse0x2856020();
   input += synapse0x2856060();
   input += synapse0x28560a0();
   input += synapse0x2855b30();
   input += synapse0x2855b70();
   input += synapse0x28561f0();
   input += synapse0x2856230();
   input += synapse0x2856270();
   input += synapse0x28562b0();
   input += synapse0x28562f0();
   input += synapse0x2856330();
   return input;
}

double NNfunction_NG_7::neuron0x28559a0() {
   double input = input0x28559a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2856370() {
   double input = 0.240434;
   input += synapse0x28566b0();
   input += synapse0x28566f0();
   input += synapse0x2856730();
   input += synapse0x2856770();
   input += synapse0x28567b0();
   input += synapse0x28567f0();
   input += synapse0x2856830();
   input += synapse0x2856870();
   input += synapse0x28568b0();
   input += synapse0x28568f0();
   input += synapse0x2856930();
   input += synapse0x2856970();
   input += synapse0x28569b0();
   input += synapse0x28569f0();
   input += synapse0x2856a30();
   input += synapse0x2856a70();
   input += synapse0x2856500();
   input += synapse0x2856540();
   input += synapse0x2856bc0();
   input += synapse0x2856c00();
   input += synapse0x2856c40();
   input += synapse0x2856c80();
   input += synapse0x2856cc0();
   input += synapse0x2856d00();
   return input;
}

double NNfunction_NG_7::neuron0x2856370() {
   double input = input0x2856370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2856d40() {
   double input = 0.654041;
   input += synapse0x2857080();
   input += synapse0x28570c0();
   input += synapse0x2857100();
   input += synapse0x2857140();
   input += synapse0x2857180();
   input += synapse0x28571c0();
   input += synapse0x2857200();
   input += synapse0x2857240();
   input += synapse0x2857280();
   input += synapse0x28572c0();
   input += synapse0x2857300();
   input += synapse0x2857340();
   input += synapse0x2857380();
   input += synapse0x28573c0();
   input += synapse0x2857400();
   input += synapse0x2857440();
   input += synapse0x2856ed0();
   input += synapse0x2856f10();
   input += synapse0x2857590();
   input += synapse0x28575d0();
   input += synapse0x2857610();
   input += synapse0x2857650();
   input += synapse0x2857690();
   input += synapse0x28576d0();
   return input;
}

double NNfunction_NG_7::neuron0x2856d40() {
   double input = input0x2856d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x285df40() {
   double input = 0.522937;
   input += synapse0x2833c70();
   input += synapse0x2833cb0();
   input += synapse0x2835180();
   input += synapse0x28351c0();
   input += synapse0x2835b50();
   input += synapse0x2835b90();
   input += synapse0x2836920();
   input += synapse0x2836960();
   input += synapse0x28372f0();
   input += synapse0x2837330();
   input += synapse0x2837cc0();
   input += synapse0x2837d00();
   input += synapse0x28387a0();
   input += synapse0x28387e0();
   input += synapse0x2839170();
   input += synapse0x28391b0();
   input += synapse0x2836250();
   input += synapse0x2836290();
   input += synapse0x283ad20();
   input += synapse0x283ad60();
   input += synapse0x283b6f0();
   input += synapse0x283b730();
   input += synapse0x283c0c0();
   input += synapse0x283c100();
   input += synapse0x283ca90();
   input += synapse0x283cad0();
   input += synapse0x2830c00();
   input += synapse0x2830c40();
   input += synapse0x283eb80();
   input += synapse0x283ebc0();
   input += synapse0x283f550();
   input += synapse0x283f590();
   input += synapse0x283ff20();
   input += synapse0x283ff60();
   input += synapse0x28408f0();
   input += synapse0x2840930();
   input += synapse0x28412c0();
   input += synapse0x2841300();
   input += synapse0x2839e10();
   input += synapse0x2839e50();
   input += synapse0x28436c0();
   input += synapse0x2843700();
   input += synapse0x2844050();
   input += synapse0x2844090();
   input += synapse0x2844a20();
   input += synapse0x2844a60();
   input += synapse0x28453f0();
   input += synapse0x2845430();
   input += synapse0x2845dc0();
   input += synapse0x2845e00();
   return input;
}

double NNfunction_NG_7::neuron0x285df40() {
   double input = input0x285df40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x285e2e0() {
   double input = -1.41343;
   input += synapse0x2848500();
   input += synapse0x2848540();
   input += synapse0x283dac0();
   input += synapse0x283db00();
   input += synapse0x284b0e0();
   input += synapse0x284b120();
   input += synapse0x284bab0();
   input += synapse0x284baf0();
   input += synapse0x284c480();
   input += synapse0x284c4c0();
   input += synapse0x284ce50();
   input += synapse0x284ce90();
   input += synapse0x284d820();
   input += synapse0x284d860();
   input += synapse0x284e1f0();
   input += synapse0x284e230();
   input += synapse0x284ebc0();
   input += synapse0x284ec00();
   input += synapse0x284f590();
   input += synapse0x284f5d0();
   input += synapse0x2850170();
   input += synapse0x28501b0();
   input += synapse0x2850b40();
   input += synapse0x2850b80();
   input += synapse0x28419c0();
   input += synapse0x2841a00();
   input += synapse0x2842390();
   input += synapse0x28423d0();
   input += synapse0x2842d60();
   input += synapse0x2842da0();
   input += synapse0x2855280();
   input += synapse0x28552c0();
   input += synapse0x2855c50();
   input += synapse0x2855c90();
   input += synapse0x2856620();
   input += synapse0x2856660();
   input += synapse0x2856ff0();
   input += synapse0x2857030();
   input += synapse0x2832ee0();
   input += synapse0x2832f20();
   input += synapse0x2846790();
   input += synapse0x28467d0();
   input += synapse0x2857710();
   input += synapse0x2857750();
   input += synapse0x2857790();
   input += synapse0x28577d0();
   input += synapse0x285e680();
   input += synapse0x285e6c0();
   input += synapse0x285e700();
   input += synapse0x285e740();
   return input;
}

double NNfunction_NG_7::neuron0x285e2e0() {
   double input = input0x285e2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x285e780() {
   double input = -1.04298;
   input += synapse0x285eac0();
   input += synapse0x285eb00();
   input += synapse0x285eb40();
   input += synapse0x285eb80();
   input += synapse0x285ebc0();
   input += synapse0x285ec00();
   input += synapse0x285ec40();
   input += synapse0x285ec80();
   input += synapse0x285ecc0();
   input += synapse0x285ed00();
   input += synapse0x285ed40();
   input += synapse0x285ed80();
   input += synapse0x285edc0();
   input += synapse0x285ee00();
   input += synapse0x285ee40();
   input += synapse0x285ee80();
   input += synapse0x285e910();
   input += synapse0x285e950();
   input += synapse0x285efd0();
   input += synapse0x285f010();
   input += synapse0x285f050();
   input += synapse0x285f090();
   input += synapse0x285f0d0();
   input += synapse0x285f110();
   input += synapse0x285f150();
   input += synapse0x285f190();
   input += synapse0x285f1d0();
   input += synapse0x285f210();
   input += synapse0x285f250();
   input += synapse0x285f290();
   input += synapse0x285f2d0();
   input += synapse0x285f310();
   input += synapse0x285eec0();
   input += synapse0x285ef00();
   input += synapse0x285ef40();
   input += synapse0x285ef80();
   input += synapse0x285f560();
   input += synapse0x285f5a0();
   input += synapse0x285f5e0();
   input += synapse0x285f620();
   input += synapse0x285f660();
   input += synapse0x285f6a0();
   input += synapse0x285f6e0();
   input += synapse0x285f720();
   input += synapse0x285f760();
   input += synapse0x285f7a0();
   input += synapse0x285f7e0();
   input += synapse0x285f820();
   input += synapse0x285f860();
   input += synapse0x285f8a0();
   return input;
}

double NNfunction_NG_7::neuron0x285e780() {
   double input = input0x285e780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x285f8e0() {
   double input = 0.515994;
   input += synapse0x285fc20();
   input += synapse0x285fc60();
   input += synapse0x285fca0();
   input += synapse0x285fce0();
   input += synapse0x285fd20();
   input += synapse0x285fd60();
   input += synapse0x285fda0();
   input += synapse0x285fde0();
   input += synapse0x285fe20();
   input += synapse0x285fe60();
   input += synapse0x285fea0();
   input += synapse0x285fee0();
   input += synapse0x285ff20();
   input += synapse0x285ff60();
   input += synapse0x285ffa0();
   input += synapse0x285ffe0();
   input += synapse0x285fa70();
   input += synapse0x285fab0();
   input += synapse0x2860130();
   input += synapse0x2860170();
   input += synapse0x28601b0();
   input += synapse0x28601f0();
   input += synapse0x2860230();
   input += synapse0x2860270();
   input += synapse0x28602b0();
   input += synapse0x28602f0();
   input += synapse0x2860330();
   input += synapse0x2860370();
   input += synapse0x28603b0();
   input += synapse0x28603f0();
   input += synapse0x2860430();
   input += synapse0x2860470();
   input += synapse0x2860020();
   input += synapse0x2860060();
   input += synapse0x28600a0();
   input += synapse0x28600e0();
   input += synapse0x28606c0();
   input += synapse0x2860700();
   input += synapse0x2860740();
   input += synapse0x2860780();
   input += synapse0x28607c0();
   input += synapse0x2860800();
   input += synapse0x2860840();
   input += synapse0x2860880();
   input += synapse0x28608c0();
   input += synapse0x2860900();
   input += synapse0x2860940();
   input += synapse0x2860980();
   input += synapse0x28609c0();
   input += synapse0x2860a00();
   return input;
}

double NNfunction_NG_7::neuron0x285f8e0() {
   double input = input0x285f8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2860a40() {
   double input = 0.153026;
   input += synapse0x2860d80();
   input += synapse0x2860dc0();
   input += synapse0x2860e00();
   input += synapse0x2860e40();
   input += synapse0x2860e80();
   input += synapse0x2860ec0();
   input += synapse0x2860f00();
   input += synapse0x2860f40();
   input += synapse0x2860f80();
   input += synapse0x2860fc0();
   input += synapse0x2861000();
   input += synapse0x2861040();
   input += synapse0x2861080();
   input += synapse0x28610c0();
   input += synapse0x2861100();
   input += synapse0x2861140();
   input += synapse0x2860bd0();
   input += synapse0x2860c10();
   input += synapse0x2861290();
   input += synapse0x28612d0();
   input += synapse0x2861310();
   input += synapse0x2861350();
   input += synapse0x2861390();
   input += synapse0x28613d0();
   input += synapse0x2861410();
   input += synapse0x2861450();
   input += synapse0x2861490();
   input += synapse0x28614d0();
   input += synapse0x2861510();
   input += synapse0x2861550();
   input += synapse0x2861590();
   input += synapse0x28615d0();
   input += synapse0x2861180();
   input += synapse0x28611c0();
   input += synapse0x2861200();
   input += synapse0x2861240();
   input += synapse0x2861820();
   input += synapse0x2861860();
   input += synapse0x28618a0();
   input += synapse0x28618e0();
   input += synapse0x2861920();
   input += synapse0x2861960();
   input += synapse0x28619a0();
   input += synapse0x28619e0();
   input += synapse0x2861a20();
   input += synapse0x2861a60();
   input += synapse0x2861aa0();
   input += synapse0x2861ae0();
   input += synapse0x2861b20();
   input += synapse0x2861b60();
   return input;
}

double NNfunction_NG_7::neuron0x2860a40() {
   double input = input0x2860a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NG_7::input0x2861ba0() {
   double input = -0.773274;
   input += synapse0x2832c80();
   input += synapse0x2861dc0();
   input += synapse0x2861e00();
   input += synapse0x2861e40();
   input += synapse0x2861e80();
   return input;
}

double NNfunction_NG_7::neuron0x2861ba0() {
   double input = input0x2861ba0();
   return (input * 1)+0;
}

double NNfunction_NG_7::synapse0x25edad0() {
   return (neuron0x282dc60()*-0.0189172);
}

double NNfunction_NG_7::synapse0x282db20() {
   return (neuron0x282dfa0()*0.0206471);
}

double NNfunction_NG_7::synapse0x282db60() {
   return (neuron0x282e2e0()*0.133836);
}

double NNfunction_NG_7::synapse0x2832f70() {
   return (neuron0x282e620()*-13.6553);
}

double NNfunction_NG_7::synapse0x2832fb0() {
   return (neuron0x282e960()*-0.0648158);
}

double NNfunction_NG_7::synapse0x2832ff0() {
   return (neuron0x282eca0()*0.00477793);
}

double NNfunction_NG_7::synapse0x2833030() {
   return (neuron0x282efe0()*0.0508757);
}

double NNfunction_NG_7::synapse0x2833070() {
   return (neuron0x282f320()*-0.00829201);
}

double NNfunction_NG_7::synapse0x28330b0() {
   return (neuron0x282f660()*-0.00108905);
}

double NNfunction_NG_7::synapse0x28330f0() {
   return (neuron0x282f9a0()*-0.0293766);
}

double NNfunction_NG_7::synapse0x2833130() {
   return (neuron0x282fce0()*-0.0261102);
}

double NNfunction_NG_7::synapse0x2833170() {
   return (neuron0x2830020()*-0.0448289);
}

double NNfunction_NG_7::synapse0x28331b0() {
   return (neuron0x2830360()*0.287344);
}

double NNfunction_NG_7::synapse0x28331f0() {
   return (neuron0x28306a0()*0.00544022);
}

double NNfunction_NG_7::synapse0x2833230() {
   return (neuron0x28309e0()*0.0277782);
}

double NNfunction_NG_7::synapse0x2833270() {
   return (neuron0x2830d20()*0.0350852);
}

double NNfunction_NG_7::synapse0x282da90() {
   return (neuron0x2831060()*-0.0101936);
}

double NNfunction_NG_7::synapse0x282dad0() {
   return (neuron0x28315c0()*0.0888982);
}

double NNfunction_NG_7::synapse0x25df320() {
   return (neuron0x28317e0()*0.0912098);
}

double NNfunction_NG_7::synapse0x25df360() {
   return (neuron0x2831b20()*0.00910033);
}

double NNfunction_NG_7::synapse0x28334d0() {
   return (neuron0x2831e60()*0.0248352);
}

double NNfunction_NG_7::synapse0x2833510() {
   return (neuron0x28321a0()*0.0421372);
}

double NNfunction_NG_7::synapse0x2833550() {
   return (neuron0x28324e0()*-0.000380859);
}

double NNfunction_NG_7::synapse0x2833590() {
   return (neuron0x2832820()*0.0254527);
}

double NNfunction_NG_7::synapse0x2833910() {
   return (neuron0x282dc60()*-0.104737);
}

double NNfunction_NG_7::synapse0x2833950() {
   return (neuron0x282dfa0()*0.0373574);
}

double NNfunction_NG_7::synapse0x2833990() {
   return (neuron0x282e2e0()*-0.459742);
}

double NNfunction_NG_7::synapse0x28339d0() {
   return (neuron0x282e620()*0.194434);
}

double NNfunction_NG_7::synapse0x2833a10() {
   return (neuron0x282e960()*0.117611);
}

double NNfunction_NG_7::synapse0x2833a50() {
   return (neuron0x282eca0()*0.0700243);
}

double NNfunction_NG_7::synapse0x2833a90() {
   return (neuron0x282efe0()*0.104689);
}

double NNfunction_NG_7::synapse0x2833ad0() {
   return (neuron0x282f320()*-0.00927348);
}

double NNfunction_NG_7::synapse0x2833b10() {
   return (neuron0x282f660()*0.017616);
}

double NNfunction_NG_7::synapse0x28333c0() {
   return (neuron0x282f9a0()*0.0494557);
}

double NNfunction_NG_7::synapse0x2833400() {
   return (neuron0x282fce0()*0.0374042);
}

double NNfunction_NG_7::synapse0x2833440() {
   return (neuron0x2830020()*-0.173797);
}

double NNfunction_NG_7::synapse0x2833480() {
   return (neuron0x2830360()*0.209683);
}

double NNfunction_NG_7::synapse0x2833d60() {
   return (neuron0x28306a0()*0.03251);
}

double NNfunction_NG_7::synapse0x2833da0() {
   return (neuron0x28309e0()*0.0589712);
}

double NNfunction_NG_7::synapse0x2833de0() {
   return (neuron0x2830d20()*0.0671833);
}

double NNfunction_NG_7::synapse0x2833760() {
   return (neuron0x2831060()*0.0280439);
}

double NNfunction_NG_7::synapse0x28337a0() {
   return (neuron0x28315c0()*0.0732497);
}

double NNfunction_NG_7::synapse0x2833f30() {
   return (neuron0x28317e0()*0.100847);
}

double NNfunction_NG_7::synapse0x2833f70() {
   return (neuron0x2831b20()*-0.0231199);
}

double NNfunction_NG_7::synapse0x2833fb0() {
   return (neuron0x2831e60()*0.0480101);
}

double NNfunction_NG_7::synapse0x2833ff0() {
   return (neuron0x28321a0()*-0.0391762);
}

double NNfunction_NG_7::synapse0x2834030() {
   return (neuron0x28324e0()*-0.0153296);
}

double NNfunction_NG_7::synapse0x2834070() {
   return (neuron0x2832820()*1.88547);
}

double NNfunction_NG_7::synapse0x28343f0() {
   return (neuron0x282dc60()*0.0322092);
}

double NNfunction_NG_7::synapse0x2834430() {
   return (neuron0x282dfa0()*-0.00624683);
}

double NNfunction_NG_7::synapse0x2834470() {
   return (neuron0x282e2e0()*0.0600608);
}

double NNfunction_NG_7::synapse0x28344b0() {
   return (neuron0x282e620()*0.398806);
}

double NNfunction_NG_7::synapse0x28344f0() {
   return (neuron0x282e960()*-0.00715369);
}

double NNfunction_NG_7::synapse0x2834530() {
   return (neuron0x282eca0()*0.00287915);
}

double NNfunction_NG_7::synapse0x2834570() {
   return (neuron0x282efe0()*0.0194739);
}

double NNfunction_NG_7::synapse0x28345b0() {
   return (neuron0x282f320()*0.0116117);
}

double NNfunction_NG_7::synapse0x28345f0() {
   return (neuron0x282f660()*-0.0143786);
}

double NNfunction_NG_7::synapse0x2834630() {
   return (neuron0x282f9a0()*-0.01665);
}

double NNfunction_NG_7::synapse0x2834670() {
   return (neuron0x282fce0()*-0.0349299);
}

double NNfunction_NG_7::synapse0x28346b0() {
   return (neuron0x2830020()*0.717578);
}

double NNfunction_NG_7::synapse0x28346f0() {
   return (neuron0x2830360()*-3.52908);
}

double NNfunction_NG_7::synapse0x2834730() {
   return (neuron0x28306a0()*-0.054103);
}

double NNfunction_NG_7::synapse0x2834770() {
   return (neuron0x28309e0()*-0.0334131);
}

double NNfunction_NG_7::synapse0x28347b0() {
   return (neuron0x2830d20()*-0.0168436);
}

double NNfunction_NG_7::synapse0x2834240() {
   return (neuron0x2831060()*-0.0192729);
}

double NNfunction_NG_7::synapse0x2834280() {
   return (neuron0x28315c0()*0.00888889);
}

double NNfunction_NG_7::synapse0x25ed1a0() {
   return (neuron0x28317e0()*-0.0294085);
}

double NNfunction_NG_7::synapse0x25ed1e0() {
   return (neuron0x2831b20()*-0.0155086);
}

double NNfunction_NG_7::synapse0x281ccf0() {
   return (neuron0x2831e60()*0.0161059);
}

double NNfunction_NG_7::synapse0x281cd30() {
   return (neuron0x28321a0()*0.0438242);
}

double NNfunction_NG_7::synapse0x281cd70() {
   return (neuron0x28324e0()*0.0126336);
}

double NNfunction_NG_7::synapse0x282dba0() {
   return (neuron0x2832820()*0.18428);
}

double NNfunction_NG_7::synapse0x2833d00() {
   return (neuron0x282dc60()*0.0206541);
}

double NNfunction_NG_7::synapse0x282dbe0() {
   return (neuron0x282dfa0()*-0.0311826);
}

double NNfunction_NG_7::synapse0x282dc20() {
   return (neuron0x282e2e0()*0.227889);
}

double NNfunction_NG_7::synapse0x2834900() {
   return (neuron0x282e620()*0.0698403);
}

double NNfunction_NG_7::synapse0x2834940() {
   return (neuron0x282e960()*0.56892);
}

double NNfunction_NG_7::synapse0x2834980() {
   return (neuron0x282eca0()*0.45994);
}

double NNfunction_NG_7::synapse0x28349c0() {
   return (neuron0x282efe0()*0.0977157);
}

double NNfunction_NG_7::synapse0x2834a00() {
   return (neuron0x282f320()*0.162581);
}

double NNfunction_NG_7::synapse0x2834a40() {
   return (neuron0x282f660()*-0.467056);
}

double NNfunction_NG_7::synapse0x2834a80() {
   return (neuron0x282f9a0()*0.271597);
}

double NNfunction_NG_7::synapse0x2834ac0() {
   return (neuron0x282fce0()*0.0607841);
}

double NNfunction_NG_7::synapse0x2834b00() {
   return (neuron0x2830020()*0.00478473);
}

double NNfunction_NG_7::synapse0x2834b40() {
   return (neuron0x2830360()*-0.0491718);
}

double NNfunction_NG_7::synapse0x2834b80() {
   return (neuron0x28306a0()*-0.127341);
}

double NNfunction_NG_7::synapse0x2834bc0() {
   return (neuron0x28309e0()*0.413135);
}

double NNfunction_NG_7::synapse0x2834c00() {
   return (neuron0x2830d20()*0.106932);
}

double NNfunction_NG_7::synapse0x2833b50() {
   return (neuron0x2831060()*-0.148008);
}

double NNfunction_NG_7::synapse0x2833b90() {
   return (neuron0x28315c0()*0.110925);
}

double NNfunction_NG_7::synapse0x2834d50() {
   return (neuron0x28317e0()*-0.529642);
}

double NNfunction_NG_7::synapse0x2834d90() {
   return (neuron0x2831b20()*0.0709758);
}

double NNfunction_NG_7::synapse0x2834dd0() {
   return (neuron0x2831e60()*-0.177193);
}

double NNfunction_NG_7::synapse0x2834e10() {
   return (neuron0x28321a0()*0.127838);
}

double NNfunction_NG_7::synapse0x2834e50() {
   return (neuron0x28324e0()*-0.3826);
}

double NNfunction_NG_7::synapse0x2834e90() {
   return (neuron0x2832820()*-0.217483);
}

double NNfunction_NG_7::synapse0x2835210() {
   return (neuron0x282dc60()*0.0319213);
}

double NNfunction_NG_7::synapse0x2835250() {
   return (neuron0x282dfa0()*0.0150848);
}

double NNfunction_NG_7::synapse0x2835290() {
   return (neuron0x282e2e0()*2.72554);
}

double NNfunction_NG_7::synapse0x28352d0() {
   return (neuron0x282e620()*-0.0410564);
}

double NNfunction_NG_7::synapse0x2835310() {
   return (neuron0x282e960()*-0.0504976);
}

double NNfunction_NG_7::synapse0x2835350() {
   return (neuron0x282eca0()*0.00822357);
}

double NNfunction_NG_7::synapse0x2835390() {
   return (neuron0x282efe0()*-0.0288512);
}

double NNfunction_NG_7::synapse0x28353d0() {
   return (neuron0x282f320()*-0.00666387);
}

double NNfunction_NG_7::synapse0x2835410() {
   return (neuron0x282f660()*-0.00169702);
}

double NNfunction_NG_7::synapse0x2835450() {
   return (neuron0x282f9a0()*-0.0060784);
}

double NNfunction_NG_7::synapse0x2835490() {
   return (neuron0x282fce0()*-0.0108622);
}

double NNfunction_NG_7::synapse0x28354d0() {
   return (neuron0x2830020()*-0.0529351);
}

double NNfunction_NG_7::synapse0x2835510() {
   return (neuron0x2830360()*0.0182787);
}

double NNfunction_NG_7::synapse0x2835550() {
   return (neuron0x28306a0()*-0.00718894);
}

double NNfunction_NG_7::synapse0x2835590() {
   return (neuron0x28309e0()*0.0159385);
}

double NNfunction_NG_7::synapse0x28355d0() {
   return (neuron0x2830d20()*-0.00475286);
}

double NNfunction_NG_7::synapse0x2835060() {
   return (neuron0x2831060()*-0.012326);
}

double NNfunction_NG_7::synapse0x28350a0() {
   return (neuron0x28315c0()*-0.0201369);
}

double NNfunction_NG_7::synapse0x2835720() {
   return (neuron0x28317e0()*-0.0159733);
}

double NNfunction_NG_7::synapse0x2835760() {
   return (neuron0x2831b20()*0.00388281);
}

double NNfunction_NG_7::synapse0x28357a0() {
   return (neuron0x2831e60()*0.0163128);
}

double NNfunction_NG_7::synapse0x28357e0() {
   return (neuron0x28321a0()*0.000188212);
}

double NNfunction_NG_7::synapse0x2835820() {
   return (neuron0x28324e0()*-0.00335074);
}

double NNfunction_NG_7::synapse0x2835860() {
   return (neuron0x2832820()*-6.51917);
}

double NNfunction_NG_7::synapse0x2835be0() {
   return (neuron0x282dc60()*-0.0233688);
}

double NNfunction_NG_7::synapse0x2835c20() {
   return (neuron0x282dfa0()*0.00859007);
}

double NNfunction_NG_7::synapse0x2835c60() {
   return (neuron0x282e2e0()*0.367461);
}

double NNfunction_NG_7::synapse0x2835ca0() {
   return (neuron0x282e620()*-6.24299);
}

double NNfunction_NG_7::synapse0x2835ce0() {
   return (neuron0x282e960()*-0.0314752);
}

double NNfunction_NG_7::synapse0x2835d20() {
   return (neuron0x282eca0()*0.0402398);
}

double NNfunction_NG_7::synapse0x2835d60() {
   return (neuron0x282efe0()*0.0781607);
}

double NNfunction_NG_7::synapse0x2835da0() {
   return (neuron0x282f320()*0.00766237);
}

double NNfunction_NG_7::synapse0x2835de0() {
   return (neuron0x282f660()*0.00741155);
}

double NNfunction_NG_7::synapse0x25ed530() {
   return (neuron0x282f9a0()*-0.00817089);
}

double NNfunction_NG_7::synapse0x25ed570() {
   return (neuron0x282fce0()*-0.00815475);
}

double NNfunction_NG_7::synapse0x25ed5b0() {
   return (neuron0x2830020()*0.0359169);
}

double NNfunction_NG_7::synapse0x25ed5f0() {
   return (neuron0x2830360()*0.179673);
}

double NNfunction_NG_7::synapse0x25ed630() {
   return (neuron0x28306a0()*-0.00929146);
}

double NNfunction_NG_7::synapse0x25ed670() {
   return (neuron0x28309e0()*-0.0218637);
}

double NNfunction_NG_7::synapse0x25ed6b0() {
   return (neuron0x2830d20()*-0.00841593);
}

double NNfunction_NG_7::synapse0x2835a30() {
   return (neuron0x2831060()*-0.0234232);
}

double NNfunction_NG_7::synapse0x2835a70() {
   return (neuron0x28315c0()*-0.0303398);
}

double NNfunction_NG_7::synapse0x25ed800() {
   return (neuron0x28317e0()*-0.0314332);
}

double NNfunction_NG_7::synapse0x25ed840() {
   return (neuron0x2831b20()*0.0179726);
}

double NNfunction_NG_7::synapse0x25ed880() {
   return (neuron0x2831e60()*0.0176759);
}

double NNfunction_NG_7::synapse0x25ed8c0() {
   return (neuron0x28321a0()*0.0396484);
}

double NNfunction_NG_7::synapse0x25ed900() {
   return (neuron0x28324e0()*0.0180213);
}

double NNfunction_NG_7::synapse0x2836630() {
   return (neuron0x2832820()*0.0135797);
}

double NNfunction_NG_7::synapse0x28369b0() {
   return (neuron0x282dc60()*-0.0283731);
}

double NNfunction_NG_7::synapse0x28369f0() {
   return (neuron0x282dfa0()*0.00646362);
}

double NNfunction_NG_7::synapse0x2836a30() {
   return (neuron0x282e2e0()*0.212127);
}

double NNfunction_NG_7::synapse0x2836a70() {
   return (neuron0x282e620()*-2.12323);
}

double NNfunction_NG_7::synapse0x2836ab0() {
   return (neuron0x282e960()*-0.0174066);
}

double NNfunction_NG_7::synapse0x2836af0() {
   return (neuron0x282eca0()*0.00872215);
}

double NNfunction_NG_7::synapse0x2836b30() {
   return (neuron0x282efe0()*-0.00365247);
}

double NNfunction_NG_7::synapse0x2836b70() {
   return (neuron0x282f320()*-0.0517405);
}

double NNfunction_NG_7::synapse0x2836bb0() {
   return (neuron0x282f660()*-0.00651282);
}

double NNfunction_NG_7::synapse0x2836bf0() {
   return (neuron0x282f9a0()*-0.0122113);
}

double NNfunction_NG_7::synapse0x2836c30() {
   return (neuron0x282fce0()*-0.000904189);
}

double NNfunction_NG_7::synapse0x2836c70() {
   return (neuron0x2830020()*-5.1205);
}

double NNfunction_NG_7::synapse0x2836cb0() {
   return (neuron0x2830360()*0.184056);
}

double NNfunction_NG_7::synapse0x2836cf0() {
   return (neuron0x28306a0()*-0.106685);
}

double NNfunction_NG_7::synapse0x2836d30() {
   return (neuron0x28309e0()*0.0698987);
}

double NNfunction_NG_7::synapse0x2836d70() {
   return (neuron0x2830d20()*-0.00237655);
}

double NNfunction_NG_7::synapse0x2836800() {
   return (neuron0x2831060()*-0.0858073);
}

double NNfunction_NG_7::synapse0x2836840() {
   return (neuron0x28315c0()*0.087224);
}

double NNfunction_NG_7::synapse0x2836ec0() {
   return (neuron0x28317e0()*0.011594);
}

double NNfunction_NG_7::synapse0x2836f00() {
   return (neuron0x2831b20()*0.0420355);
}

double NNfunction_NG_7::synapse0x2836f40() {
   return (neuron0x2831e60()*-0.0124456);
}

double NNfunction_NG_7::synapse0x2836f80() {
   return (neuron0x28321a0()*-0.0162397);
}

double NNfunction_NG_7::synapse0x2836fc0() {
   return (neuron0x28324e0()*0.0119266);
}

double NNfunction_NG_7::synapse0x2837000() {
   return (neuron0x2832820()*0.109037);
}

double NNfunction_NG_7::synapse0x2837380() {
   return (neuron0x282dc60()*0.0938168);
}

double NNfunction_NG_7::synapse0x28373c0() {
   return (neuron0x282dfa0()*-0.00992208);
}

double NNfunction_NG_7::synapse0x2837400() {
   return (neuron0x282e2e0()*0.233561);
}

double NNfunction_NG_7::synapse0x2837440() {
   return (neuron0x282e620()*-0.606495);
}

double NNfunction_NG_7::synapse0x2837480() {
   return (neuron0x282e960()*-0.0684754);
}

double NNfunction_NG_7::synapse0x28374c0() {
   return (neuron0x282eca0()*0.00720905);
}

double NNfunction_NG_7::synapse0x2837500() {
   return (neuron0x282efe0()*-0.05219);
}

double NNfunction_NG_7::synapse0x2837540() {
   return (neuron0x282f320()*0.016242);
}

double NNfunction_NG_7::synapse0x2837580() {
   return (neuron0x282f660()*-0.0717793);
}

double NNfunction_NG_7::synapse0x28375c0() {
   return (neuron0x282f9a0()*0.0510793);
}

double NNfunction_NG_7::synapse0x2837600() {
   return (neuron0x282fce0()*-0.0202503);
}

double NNfunction_NG_7::synapse0x2837640() {
   return (neuron0x2830020()*-0.958199);
}

double NNfunction_NG_7::synapse0x2837680() {
   return (neuron0x2830360()*-1.45825);
}

double NNfunction_NG_7::synapse0x28376c0() {
   return (neuron0x28306a0()*-0.0337416);
}

double NNfunction_NG_7::synapse0x2837700() {
   return (neuron0x28309e0()*0.0494596);
}

double NNfunction_NG_7::synapse0x2837740() {
   return (neuron0x2830d20()*0.0498526);
}

double NNfunction_NG_7::synapse0x28371d0() {
   return (neuron0x2831060()*-0.122792);
}

double NNfunction_NG_7::synapse0x2837210() {
   return (neuron0x28315c0()*0.0282391);
}

double NNfunction_NG_7::synapse0x2837890() {
   return (neuron0x28317e0()*0.0761951);
}

double NNfunction_NG_7::synapse0x28378d0() {
   return (neuron0x2831b20()*-0.058863);
}

double NNfunction_NG_7::synapse0x2837910() {
   return (neuron0x2831e60()*-0.118417);
}

double NNfunction_NG_7::synapse0x2837950() {
   return (neuron0x28321a0()*0.052766);
}

double NNfunction_NG_7::synapse0x2837990() {
   return (neuron0x28324e0()*0.0288264);
}

double NNfunction_NG_7::synapse0x28379d0() {
   return (neuron0x2832820()*0.260239);
}

double NNfunction_NG_7::synapse0x28314b0() {
   return (neuron0x282dc60()*0.00595556);
}

double NNfunction_NG_7::synapse0x28314f0() {
   return (neuron0x282dfa0()*0.00495555);
}

double NNfunction_NG_7::synapse0x2831530() {
   return (neuron0x282e2e0()*-0.161522);
}

double NNfunction_NG_7::synapse0x2831570() {
   return (neuron0x282e620()*3.97833);
}

double NNfunction_NG_7::synapse0x2837f60() {
   return (neuron0x282e960()*-0.000807887);
}

double NNfunction_NG_7::synapse0x2837fa0() {
   return (neuron0x282eca0()*-0.0134534);
}

double NNfunction_NG_7::synapse0x2837fe0() {
   return (neuron0x282efe0()*-0.0173948);
}

double NNfunction_NG_7::synapse0x2838020() {
   return (neuron0x282f320()*-0.00301043);
}

double NNfunction_NG_7::synapse0x2838060() {
   return (neuron0x282f660()*-0.00252027);
}

double NNfunction_NG_7::synapse0x28380a0() {
   return (neuron0x282f9a0()*0.00292939);
}

double NNfunction_NG_7::synapse0x28380e0() {
   return (neuron0x282fce0()*1.82954e-05);
}

double NNfunction_NG_7::synapse0x2838120() {
   return (neuron0x2830020()*0.132153);
}

double NNfunction_NG_7::synapse0x2838160() {
   return (neuron0x2830360()*0.0281792);
}

double NNfunction_NG_7::synapse0x28381a0() {
   return (neuron0x28306a0()*-0.00903282);
}

double NNfunction_NG_7::synapse0x28381e0() {
   return (neuron0x28309e0()*-0.0118004);
}

double NNfunction_NG_7::synapse0x2838220() {
   return (neuron0x2830d20()*-0.0124894);
}

double NNfunction_NG_7::synapse0x2837ba0() {
   return (neuron0x2831060()*-0.00568216);
}

double NNfunction_NG_7::synapse0x2837be0() {
   return (neuron0x28315c0()*0.0161918);
}

double NNfunction_NG_7::synapse0x2838370() {
   return (neuron0x28317e0()*0.0259294);
}

double NNfunction_NG_7::synapse0x28383b0() {
   return (neuron0x2831b20()*-0.00619617);
}

double NNfunction_NG_7::synapse0x28383f0() {
   return (neuron0x2831e60()*-0.0110681);
}

double NNfunction_NG_7::synapse0x2838430() {
   return (neuron0x28321a0()*-0.0096965);
}

double NNfunction_NG_7::synapse0x2838470() {
   return (neuron0x28324e0()*-0.00897863);
}

double NNfunction_NG_7::synapse0x28384b0() {
   return (neuron0x2832820()*-0.0277109);
}

double NNfunction_NG_7::synapse0x2838830() {
   return (neuron0x282dc60()*-0.197703);
}

double NNfunction_NG_7::synapse0x2838870() {
   return (neuron0x282dfa0()*0.0522704);
}

double NNfunction_NG_7::synapse0x28388b0() {
   return (neuron0x282e2e0()*-0.875757);
}

double NNfunction_NG_7::synapse0x28388f0() {
   return (neuron0x282e620()*-0.00435391);
}

double NNfunction_NG_7::synapse0x2838930() {
   return (neuron0x282e960()*-0.174463);
}

double NNfunction_NG_7::synapse0x2838970() {
   return (neuron0x282eca0()*0.0209497);
}

double NNfunction_NG_7::synapse0x28389b0() {
   return (neuron0x282efe0()*-0.0642288);
}

double NNfunction_NG_7::synapse0x28389f0() {
   return (neuron0x282f320()*-0.0259281);
}

double NNfunction_NG_7::synapse0x2838a30() {
   return (neuron0x282f660()*0.0265884);
}

double NNfunction_NG_7::synapse0x2838a70() {
   return (neuron0x282f9a0()*0.0077572);
}

double NNfunction_NG_7::synapse0x2838ab0() {
   return (neuron0x282fce0()*0.000321614);
}

double NNfunction_NG_7::synapse0x2838af0() {
   return (neuron0x2830020()*-0.287756);
}

double NNfunction_NG_7::synapse0x2838b30() {
   return (neuron0x2830360()*0.0392373);
}

double NNfunction_NG_7::synapse0x2838b70() {
   return (neuron0x28306a0()*-0.0219129);
}

double NNfunction_NG_7::synapse0x2838bb0() {
   return (neuron0x28309e0()*0.0452156);
}

double NNfunction_NG_7::synapse0x2838bf0() {
   return (neuron0x2830d20()*-0.0176819);
}

double NNfunction_NG_7::synapse0x2838680() {
   return (neuron0x2831060()*0.0071512);
}

double NNfunction_NG_7::synapse0x28386c0() {
   return (neuron0x28315c0()*-0.0197567);
}

double NNfunction_NG_7::synapse0x2838d40() {
   return (neuron0x28317e0()*-0.00212112);
}

double NNfunction_NG_7::synapse0x2838d80() {
   return (neuron0x2831b20()*0.0530539);
}

double NNfunction_NG_7::synapse0x2838dc0() {
   return (neuron0x2831e60()*0.119667);
}

double NNfunction_NG_7::synapse0x2838e00() {
   return (neuron0x28321a0()*0.00549646);
}

double NNfunction_NG_7::synapse0x2838e40() {
   return (neuron0x28324e0()*0.0340436);
}

double NNfunction_NG_7::synapse0x2838e80() {
   return (neuron0x2832820()*-4.18257);
}

double NNfunction_NG_7::synapse0x2839200() {
   return (neuron0x282dc60()*-0.0141513);
}

double NNfunction_NG_7::synapse0x2839240() {
   return (neuron0x282dfa0()*-0.013765);
}

double NNfunction_NG_7::synapse0x2839280() {
   return (neuron0x282e2e0()*1.17566);
}

double NNfunction_NG_7::synapse0x28392c0() {
   return (neuron0x282e620()*-0.0968067);
}

double NNfunction_NG_7::synapse0x2839300() {
   return (neuron0x282e960()*0.00659696);
}

double NNfunction_NG_7::synapse0x2839340() {
   return (neuron0x282eca0()*0.0135732);
}

double NNfunction_NG_7::synapse0x2839380() {
   return (neuron0x282efe0()*-0.00349876);
}

double NNfunction_NG_7::synapse0x28393c0() {
   return (neuron0x282f320()*-0.00044571);
}

double NNfunction_NG_7::synapse0x2839400() {
   return (neuron0x282f660()*0.0056178);
}

double NNfunction_NG_7::synapse0x2839440() {
   return (neuron0x282f9a0()*0.00321045);
}

double NNfunction_NG_7::synapse0x2839480() {
   return (neuron0x282fce0()*0.000311934);
}

double NNfunction_NG_7::synapse0x28394c0() {
   return (neuron0x2830020()*0.79141);
}

double NNfunction_NG_7::synapse0x2839500() {
   return (neuron0x2830360()*-0.0179586);
}

double NNfunction_NG_7::synapse0x2839540() {
   return (neuron0x28306a0()*0.0388736);
}

double NNfunction_NG_7::synapse0x2839580() {
   return (neuron0x28309e0()*0.0116543);
}

double NNfunction_NG_7::synapse0x28395c0() {
   return (neuron0x2830d20()*-0.0296999);
}

double NNfunction_NG_7::synapse0x2839050() {
   return (neuron0x2831060()*0.0305947);
}

double NNfunction_NG_7::synapse0x2839090() {
   return (neuron0x28315c0()*0.017462);
}

double NNfunction_NG_7::synapse0x2835e20() {
   return (neuron0x28317e0()*-0.0161316);
}

double NNfunction_NG_7::synapse0x2835e60() {
   return (neuron0x2831b20()*-0.0258537);
}

double NNfunction_NG_7::synapse0x2835ea0() {
   return (neuron0x2831e60()*0.00814997);
}

double NNfunction_NG_7::synapse0x2835ee0() {
   return (neuron0x28321a0()*0.00283185);
}

double NNfunction_NG_7::synapse0x2835f20() {
   return (neuron0x28324e0()*0.00260261);
}

double NNfunction_NG_7::synapse0x2835f60() {
   return (neuron0x2832820()*-0.0269212);
}

double NNfunction_NG_7::synapse0x28362e0() {
   return (neuron0x282dc60()*-0.0407031);
}

double NNfunction_NG_7::synapse0x2836320() {
   return (neuron0x282dfa0()*0.0129012);
}

double NNfunction_NG_7::synapse0x2836360() {
   return (neuron0x282e2e0()*0.930295);
}

double NNfunction_NG_7::synapse0x28363a0() {
   return (neuron0x282e620()*2.42433);
}

double NNfunction_NG_7::synapse0x28363e0() {
   return (neuron0x282e960()*0.305493);
}

double NNfunction_NG_7::synapse0x2836420() {
   return (neuron0x282eca0()*0.173205);
}

double NNfunction_NG_7::synapse0x2836460() {
   return (neuron0x282efe0()*-0.014378);
}

double NNfunction_NG_7::synapse0x28364a0() {
   return (neuron0x282f320()*0.0951876);
}

double NNfunction_NG_7::synapse0x28364e0() {
   return (neuron0x282f660()*0.0218897);
}

double NNfunction_NG_7::synapse0x2836520() {
   return (neuron0x282f9a0()*-0.0184682);
}

double NNfunction_NG_7::synapse0x2836560() {
   return (neuron0x282fce0()*0.13334);
}

double NNfunction_NG_7::synapse0x28365a0() {
   return (neuron0x2830020()*0.527944);
}

double NNfunction_NG_7::synapse0x28365e0() {
   return (neuron0x2830360()*0.143131);
}

double NNfunction_NG_7::synapse0x283a720() {
   return (neuron0x28306a0()*-0.549213);
}

double NNfunction_NG_7::synapse0x283a760() {
   return (neuron0x28309e0()*-0.345066);
}

double NNfunction_NG_7::synapse0x283a7a0() {
   return (neuron0x2830d20()*-0.22847);
}

double NNfunction_NG_7::synapse0x2836130() {
   return (neuron0x2831060()*-0.117651);
}

double NNfunction_NG_7::synapse0x2836170() {
   return (neuron0x28315c0()*-0.416796);
}

double NNfunction_NG_7::synapse0x283a8f0() {
   return (neuron0x28317e0()*-0.404113);
}

double NNfunction_NG_7::synapse0x283a930() {
   return (neuron0x2831b20()*0.0768151);
}

double NNfunction_NG_7::synapse0x283a970() {
   return (neuron0x2831e60()*-0.0632636);
}

double NNfunction_NG_7::synapse0x283a9b0() {
   return (neuron0x28321a0()*-0.228158);
}

double NNfunction_NG_7::synapse0x283a9f0() {
   return (neuron0x28324e0()*-0.0677606);
}

double NNfunction_NG_7::synapse0x283aa30() {
   return (neuron0x2832820()*0.102721);
}

double NNfunction_NG_7::synapse0x283adb0() {
   return (neuron0x282dc60()*-0.0420292);
}

double NNfunction_NG_7::synapse0x283adf0() {
   return (neuron0x282dfa0()*0.0122583);
}

double NNfunction_NG_7::synapse0x283ae30() {
   return (neuron0x282e2e0()*0.12776);
}

double NNfunction_NG_7::synapse0x283ae70() {
   return (neuron0x282e620()*-0.0166352);
}

double NNfunction_NG_7::synapse0x283aeb0() {
   return (neuron0x282e960()*-0.0788094);
}

double NNfunction_NG_7::synapse0x283aef0() {
   return (neuron0x282eca0()*0.00966172);
}

double NNfunction_NG_7::synapse0x283af30() {
   return (neuron0x282efe0()*-0.0124101);
}

double NNfunction_NG_7::synapse0x283af70() {
   return (neuron0x282f320()*-0.0113483);
}

double NNfunction_NG_7::synapse0x283afb0() {
   return (neuron0x282f660()*0.00557296);
}

double NNfunction_NG_7::synapse0x283aff0() {
   return (neuron0x282f9a0()*-0.000480363);
}

double NNfunction_NG_7::synapse0x283b030() {
   return (neuron0x282fce0()*0.0173925);
}

double NNfunction_NG_7::synapse0x283b070() {
   return (neuron0x2830020()*-0.0670471);
}

double NNfunction_NG_7::synapse0x283b0b0() {
   return (neuron0x2830360()*-0.0309512);
}

double NNfunction_NG_7::synapse0x283b0f0() {
   return (neuron0x28306a0()*-0.0319936);
}

double NNfunction_NG_7::synapse0x283b130() {
   return (neuron0x28309e0()*0.0458986);
}

double NNfunction_NG_7::synapse0x283b170() {
   return (neuron0x2830d20()*0.045489);
}

double NNfunction_NG_7::synapse0x283ac00() {
   return (neuron0x2831060()*-0.0466981);
}

double NNfunction_NG_7::synapse0x283ac40() {
   return (neuron0x28315c0()*0.00415824);
}

double NNfunction_NG_7::synapse0x283b2c0() {
   return (neuron0x28317e0()*0.0220901);
}

double NNfunction_NG_7::synapse0x283b300() {
   return (neuron0x2831b20()*0.0159483);
}

double NNfunction_NG_7::synapse0x283b340() {
   return (neuron0x2831e60()*0.0341406);
}

double NNfunction_NG_7::synapse0x283b380() {
   return (neuron0x28321a0()*0.000988716);
}

double NNfunction_NG_7::synapse0x283b3c0() {
   return (neuron0x28324e0()*0.00918476);
}

double NNfunction_NG_7::synapse0x283b400() {
   return (neuron0x2832820()*-4.73387);
}

double NNfunction_NG_7::synapse0x283b780() {
   return (neuron0x282dc60()*0.0718854);
}

double NNfunction_NG_7::synapse0x283b7c0() {
   return (neuron0x282dfa0()*-0.0116401);
}

double NNfunction_NG_7::synapse0x283b800() {
   return (neuron0x282e2e0()*-2.41465);
}

double NNfunction_NG_7::synapse0x283b840() {
   return (neuron0x282e620()*-0.0930608);
}

double NNfunction_NG_7::synapse0x283b880() {
   return (neuron0x282e960()*0.0083589);
}

double NNfunction_NG_7::synapse0x283b8c0() {
   return (neuron0x282eca0()*-0.0113067);
}

double NNfunction_NG_7::synapse0x283b900() {
   return (neuron0x282efe0()*0.0105509);
}

double NNfunction_NG_7::synapse0x283b940() {
   return (neuron0x282f320()*-0.00368104);
}

double NNfunction_NG_7::synapse0x283b980() {
   return (neuron0x282f660()*0.0105802);
}

double NNfunction_NG_7::synapse0x283b9c0() {
   return (neuron0x282f9a0()*-0.0242494);
}

double NNfunction_NG_7::synapse0x283ba00() {
   return (neuron0x282fce0()*0.0209389);
}

double NNfunction_NG_7::synapse0x283ba40() {
   return (neuron0x2830020()*-0.227269);
}

double NNfunction_NG_7::synapse0x283ba80() {
   return (neuron0x2830360()*-0.128976);
}

double NNfunction_NG_7::synapse0x283bac0() {
   return (neuron0x28306a0()*-0.0415457);
}

double NNfunction_NG_7::synapse0x283bb00() {
   return (neuron0x28309e0()*-0.0473542);
}

double NNfunction_NG_7::synapse0x283bb40() {
   return (neuron0x2830d20()*-0.0126066);
}

double NNfunction_NG_7::synapse0x283b5d0() {
   return (neuron0x2831060()*-0.0524627);
}

double NNfunction_NG_7::synapse0x283b610() {
   return (neuron0x28315c0()*-0.0725399);
}

double NNfunction_NG_7::synapse0x283bc90() {
   return (neuron0x28317e0()*-0.0210195);
}

double NNfunction_NG_7::synapse0x283bcd0() {
   return (neuron0x2831b20()*-0.018194);
}

double NNfunction_NG_7::synapse0x283bd10() {
   return (neuron0x2831e60()*-0.0352996);
}

double NNfunction_NG_7::synapse0x283bd50() {
   return (neuron0x28321a0()*-0.0208227);
}

double NNfunction_NG_7::synapse0x283bd90() {
   return (neuron0x28324e0()*-0.0026681);
}

double NNfunction_NG_7::synapse0x283bdd0() {
   return (neuron0x2832820()*-0.0268093);
}

double NNfunction_NG_7::synapse0x283c150() {
   return (neuron0x282dc60()*0.0147617);
}

double NNfunction_NG_7::synapse0x283c190() {
   return (neuron0x282dfa0()*0.0550787);
}

double NNfunction_NG_7::synapse0x283c1d0() {
   return (neuron0x282e2e0()*0.126205);
}

double NNfunction_NG_7::synapse0x283c210() {
   return (neuron0x282e620()*8.61671);
}

double NNfunction_NG_7::synapse0x283c250() {
   return (neuron0x282e960()*-0.0110489);
}

double NNfunction_NG_7::synapse0x283c290() {
   return (neuron0x282eca0()*-0.0147603);
}

double NNfunction_NG_7::synapse0x283c2d0() {
   return (neuron0x282efe0()*0.0192673);
}

double NNfunction_NG_7::synapse0x283c310() {
   return (neuron0x282f320()*-0.0350662);
}

double NNfunction_NG_7::synapse0x283c350() {
   return (neuron0x282f660()*-0.0206148);
}

double NNfunction_NG_7::synapse0x283c390() {
   return (neuron0x282f9a0()*-0.00582643);
}

double NNfunction_NG_7::synapse0x283c3d0() {
   return (neuron0x282fce0()*0.0101514);
}

double NNfunction_NG_7::synapse0x283c410() {
   return (neuron0x2830020()*0.603329);
}

double NNfunction_NG_7::synapse0x283c450() {
   return (neuron0x2830360()*0.259413);
}

double NNfunction_NG_7::synapse0x283c490() {
   return (neuron0x28306a0()*0.0404775);
}

double NNfunction_NG_7::synapse0x283c4d0() {
   return (neuron0x28309e0()*0.0376708);
}

double NNfunction_NG_7::synapse0x283c510() {
   return (neuron0x2830d20()*0.0992589);
}

double NNfunction_NG_7::synapse0x283bfa0() {
   return (neuron0x2831060()*0.0268596);
}

double NNfunction_NG_7::synapse0x283bfe0() {
   return (neuron0x28315c0()*0.112047);
}

double NNfunction_NG_7::synapse0x283c660() {
   return (neuron0x28317e0()*0.141771);
}

double NNfunction_NG_7::synapse0x283c6a0() {
   return (neuron0x2831b20()*0.0212975);
}

double NNfunction_NG_7::synapse0x283c6e0() {
   return (neuron0x2831e60()*-0.0484731);
}

double NNfunction_NG_7::synapse0x283c720() {
   return (neuron0x28321a0()*-0.0311964);
}

double NNfunction_NG_7::synapse0x283c760() {
   return (neuron0x28324e0()*-0.000513488);
}

double NNfunction_NG_7::synapse0x283c7a0() {
   return (neuron0x2832820()*0.00257817);
}

double NNfunction_NG_7::synapse0x283cb20() {
   return (neuron0x282dc60()*-0.0378832);
}

double NNfunction_NG_7::synapse0x282de80() {
   return (neuron0x282dfa0()*-0.0921431);
}

double NNfunction_NG_7::synapse0x282dec0() {
   return (neuron0x282e2e0()*-0.647305);
}

double NNfunction_NG_7::synapse0x282e1c0() {
   return (neuron0x282e620()*1.57533);
}

double NNfunction_NG_7::synapse0x282e200() {
   return (neuron0x282e960()*0.0585091);
}

double NNfunction_NG_7::synapse0x282e500() {
   return (neuron0x282eca0()*0.0937185);
}

double NNfunction_NG_7::synapse0x282e540() {
   return (neuron0x282efe0()*0.00525264);
}

double NNfunction_NG_7::synapse0x282e840() {
   return (neuron0x282f320()*0.118752);
}

double NNfunction_NG_7::synapse0x282e880() {
   return (neuron0x282f660()*0.0759627);
}

double NNfunction_NG_7::synapse0x282eb80() {
   return (neuron0x282f9a0()*-0.157453);
}

double NNfunction_NG_7::synapse0x282ebc0() {
   return (neuron0x282fce0()*0.0394762);
}

double NNfunction_NG_7::synapse0x282eec0() {
   return (neuron0x2830020()*-0.0180384);
}

double NNfunction_NG_7::synapse0x282ef00() {
   return (neuron0x2830360()*0.348761);
}

double NNfunction_NG_7::synapse0x282f200() {
   return (neuron0x28306a0()*0.0537541);
}

double NNfunction_NG_7::synapse0x282f240() {
   return (neuron0x28309e0()*-0.0483662);
}

double NNfunction_NG_7::synapse0x282f540() {
   return (neuron0x2830d20()*0.2408);
}

double NNfunction_NG_7::synapse0x282f580() {
   return (neuron0x2831060()*-0.051482);
}

double NNfunction_NG_7::synapse0x282f880() {
   return (neuron0x28315c0()*0.623586);
}

double NNfunction_NG_7::synapse0x282f8c0() {
   return (neuron0x28317e0()*0.214382);
}

double NNfunction_NG_7::synapse0x282fbc0() {
   return (neuron0x2831b20()*0.274239);
}

double NNfunction_NG_7::synapse0x282fc00() {
   return (neuron0x2831e60()*0.0830044);
}

double NNfunction_NG_7::synapse0x282ff00() {
   return (neuron0x28321a0()*0.232147);
}

double NNfunction_NG_7::synapse0x282ff40() {
   return (neuron0x28324e0()*-0.0169159);
}

double NNfunction_NG_7::synapse0x2830240() {
   return (neuron0x2832820()*-0.174592);
}

double NNfunction_NG_7::synapse0x2830280() {
   return (neuron0x282dc60()*-0.112079);
}

double NNfunction_NG_7::synapse0x2830f40() {
   return (neuron0x282dfa0()*0.00589506);
}

double NNfunction_NG_7::synapse0x2830f80() {
   return (neuron0x282e2e0()*-0.25326);
}

double NNfunction_NG_7::synapse0x283c970() {
   return (neuron0x282e620()*0.0423933);
}

double NNfunction_NG_7::synapse0x283c9b0() {
   return (neuron0x282e960()*0.174455);
}

double NNfunction_NG_7::synapse0x2831280() {
   return (neuron0x282eca0()*0.324445);
}

double NNfunction_NG_7::synapse0x28312c0() {
   return (neuron0x282efe0()*0.366896);
}

double NNfunction_NG_7::synapse0x25df200() {
   return (neuron0x282f320()*0.0764899);
}

double NNfunction_NG_7::synapse0x25df240() {
   return (neuron0x282f660()*-0.499947);
}

double NNfunction_NG_7::synapse0x2831a00() {
   return (neuron0x282f9a0()*0.641574);
}

double NNfunction_NG_7::synapse0x2831a40() {
   return (neuron0x282fce0()*0.00891434);
}

double NNfunction_NG_7::synapse0x2831d40() {
   return (neuron0x2830020()*0.477974);
}

double NNfunction_NG_7::synapse0x2831d80() {
   return (neuron0x2830360()*0.105112);
}

double NNfunction_NG_7::synapse0x2832080() {
   return (neuron0x28306a0()*0.352545);
}

double NNfunction_NG_7::synapse0x28320c0() {
   return (neuron0x28309e0()*0.37999);
}

double NNfunction_NG_7::synapse0x28323c0() {
   return (neuron0x2830d20()*0.33222);
}

double NNfunction_NG_7::synapse0x2832400() {
   return (neuron0x2831060()*0.0578383);
}

double NNfunction_NG_7::synapse0x2832700() {
   return (neuron0x28315c0()*0.74572);
}

double NNfunction_NG_7::synapse0x2832740() {
   return (neuron0x28317e0()*-0.0173062);
}

double NNfunction_NG_7::synapse0x2832a40() {
   return (neuron0x2831b20()*0.511042);
}

double NNfunction_NG_7::synapse0x2832a80() {
   return (neuron0x2831e60()*-0.0228858);
}

double NNfunction_NG_7::synapse0x2830580() {
   return (neuron0x28321a0()*-0.143079);
}

double NNfunction_NG_7::synapse0x28305c0() {
   return (neuron0x28324e0()*-0.420751);
}

double NNfunction_NG_7::synapse0x283e890() {
   return (neuron0x2832820()*0.0341947);
}

double NNfunction_NG_7::synapse0x283ec10() {
   return (neuron0x282dc60()*0.114087);
}

double NNfunction_NG_7::synapse0x283ec50() {
   return (neuron0x282dfa0()*-0.0949262);
}

double NNfunction_NG_7::synapse0x283ec90() {
   return (neuron0x282e2e0()*-2.36231);
}

double NNfunction_NG_7::synapse0x283ecd0() {
   return (neuron0x282e620()*0.502207);
}

double NNfunction_NG_7::synapse0x283ed10() {
   return (neuron0x282e960()*0.0303331);
}

double NNfunction_NG_7::synapse0x283ed50() {
   return (neuron0x282eca0()*-0.093381);
}

double NNfunction_NG_7::synapse0x283ed90() {
   return (neuron0x282efe0()*-0.0017357);
}

double NNfunction_NG_7::synapse0x283edd0() {
   return (neuron0x282f320()*-0.0249955);
}

double NNfunction_NG_7::synapse0x283ee10() {
   return (neuron0x282f660()*0.0168452);
}

double NNfunction_NG_7::synapse0x283ee50() {
   return (neuron0x282f9a0()*0.000543966);
}

double NNfunction_NG_7::synapse0x283ee90() {
   return (neuron0x282fce0()*0.0458061);
}

double NNfunction_NG_7::synapse0x283eed0() {
   return (neuron0x2830020()*0.0300419);
}

double NNfunction_NG_7::synapse0x283ef10() {
   return (neuron0x2830360()*0.249413);
}

double NNfunction_NG_7::synapse0x283ef50() {
   return (neuron0x28306a0()*-0.031709);
}

double NNfunction_NG_7::synapse0x283ef90() {
   return (neuron0x28309e0()*0.0795119);
}

double NNfunction_NG_7::synapse0x283efd0() {
   return (neuron0x2830d20()*0.0435682);
}

double NNfunction_NG_7::synapse0x283ea60() {
   return (neuron0x2831060()*-0.119397);
}

double NNfunction_NG_7::synapse0x283eaa0() {
   return (neuron0x28315c0()*-0.0157172);
}

double NNfunction_NG_7::synapse0x283f120() {
   return (neuron0x28317e0()*-0.0119298);
}

double NNfunction_NG_7::synapse0x283f160() {
   return (neuron0x2831b20()*-0.0696086);
}

double NNfunction_NG_7::synapse0x283f1a0() {
   return (neuron0x2831e60()*0.0124965);
}

double NNfunction_NG_7::synapse0x283f1e0() {
   return (neuron0x28321a0()*-0.0121612);
}

double NNfunction_NG_7::synapse0x283f220() {
   return (neuron0x28324e0()*-0.00363688);
}

double NNfunction_NG_7::synapse0x283f260() {
   return (neuron0x2832820()*-0.0157903);
}

double NNfunction_NG_7::synapse0x283f5e0() {
   return (neuron0x282dc60()*0.764604);
}

double NNfunction_NG_7::synapse0x283f620() {
   return (neuron0x282dfa0()*-0.0853345);
}

double NNfunction_NG_7::synapse0x283f660() {
   return (neuron0x282e2e0()*-0.382987);
}

double NNfunction_NG_7::synapse0x283f6a0() {
   return (neuron0x282e620()*0.242259);
}

double NNfunction_NG_7::synapse0x283f6e0() {
   return (neuron0x282e960()*-0.223157);
}

double NNfunction_NG_7::synapse0x283f720() {
   return (neuron0x282eca0()*0.208277);
}

double NNfunction_NG_7::synapse0x283f760() {
   return (neuron0x282efe0()*-0.228061);
}

double NNfunction_NG_7::synapse0x283f7a0() {
   return (neuron0x282f320()*0.182672);
}

double NNfunction_NG_7::synapse0x283f7e0() {
   return (neuron0x282f660()*-0.231631);
}

double NNfunction_NG_7::synapse0x283f820() {
   return (neuron0x282f9a0()*0.143941);
}

double NNfunction_NG_7::synapse0x283f860() {
   return (neuron0x282fce0()*0.453489);
}

double NNfunction_NG_7::synapse0x283f8a0() {
   return (neuron0x2830020()*-0.280851);
}

double NNfunction_NG_7::synapse0x283f8e0() {
   return (neuron0x2830360()*-0.736253);
}

double NNfunction_NG_7::synapse0x283f920() {
   return (neuron0x28306a0()*0.576397);
}

double NNfunction_NG_7::synapse0x283f960() {
   return (neuron0x28309e0()*-0.35218);
}

double NNfunction_NG_7::synapse0x283f9a0() {
   return (neuron0x2830d20()*0.369981);
}

double NNfunction_NG_7::synapse0x283f430() {
   return (neuron0x2831060()*-0.20365);
}

double NNfunction_NG_7::synapse0x283f470() {
   return (neuron0x28315c0()*-0.424435);
}

double NNfunction_NG_7::synapse0x283faf0() {
   return (neuron0x28317e0()*0.120449);
}

double NNfunction_NG_7::synapse0x283fb30() {
   return (neuron0x2831b20()*0.170249);
}

double NNfunction_NG_7::synapse0x283fb70() {
   return (neuron0x2831e60()*0.161205);
}

double NNfunction_NG_7::synapse0x283fbb0() {
   return (neuron0x28321a0()*0.463732);
}

double NNfunction_NG_7::synapse0x283fbf0() {
   return (neuron0x28324e0()*0.0162636);
}

double NNfunction_NG_7::synapse0x283fc30() {
   return (neuron0x2832820()*-0.00363531);
}

double NNfunction_NG_7::synapse0x283ffb0() {
   return (neuron0x282dc60()*0.0160658);
}

double NNfunction_NG_7::synapse0x283fff0() {
   return (neuron0x282dfa0()*-0.137613);
}

double NNfunction_NG_7::synapse0x2840030() {
   return (neuron0x282e2e0()*1.15597);
}

double NNfunction_NG_7::synapse0x2840070() {
   return (neuron0x282e620()*-0.0329997);
}

double NNfunction_NG_7::synapse0x28400b0() {
   return (neuron0x282e960()*0.111088);
}

double NNfunction_NG_7::synapse0x28400f0() {
   return (neuron0x282eca0()*-0.203718);
}

double NNfunction_NG_7::synapse0x2840130() {
   return (neuron0x282efe0()*-0.171536);
}

double NNfunction_NG_7::synapse0x2840170() {
   return (neuron0x282f320()*0.0421915);
}

double NNfunction_NG_7::synapse0x28401b0() {
   return (neuron0x282f660()*0.19753);
}

double NNfunction_NG_7::synapse0x28401f0() {
   return (neuron0x282f9a0()*0.355766);
}

double NNfunction_NG_7::synapse0x2840230() {
   return (neuron0x282fce0()*-0.156404);
}

double NNfunction_NG_7::synapse0x2840270() {
   return (neuron0x2830020()*0.556636);
}

double NNfunction_NG_7::synapse0x28402b0() {
   return (neuron0x2830360()*0.702764);
}

double NNfunction_NG_7::synapse0x28402f0() {
   return (neuron0x28306a0()*-0.089707);
}

double NNfunction_NG_7::synapse0x2840330() {
   return (neuron0x28309e0()*-0.391968);
}

double NNfunction_NG_7::synapse0x2840370() {
   return (neuron0x2830d20()*0.292472);
}

double NNfunction_NG_7::synapse0x283fe00() {
   return (neuron0x2831060()*0.0773097);
}

double NNfunction_NG_7::synapse0x283fe40() {
   return (neuron0x28315c0()*-0.0728822);
}

double NNfunction_NG_7::synapse0x28404c0() {
   return (neuron0x28317e0()*0.0699299);
}

double NNfunction_NG_7::synapse0x2840500() {
   return (neuron0x2831b20()*-0.00573356);
}

double NNfunction_NG_7::synapse0x2840540() {
   return (neuron0x2831e60()*0.338496);
}

double NNfunction_NG_7::synapse0x2840580() {
   return (neuron0x28321a0()*0.0998437);
}

double NNfunction_NG_7::synapse0x28405c0() {
   return (neuron0x28324e0()*-0.031528);
}

double NNfunction_NG_7::synapse0x2840600() {
   return (neuron0x2832820()*0.437811);
}

double NNfunction_NG_7::synapse0x2840980() {
   return (neuron0x282dc60()*0.00337285);
}

double NNfunction_NG_7::synapse0x28409c0() {
   return (neuron0x282dfa0()*-0.0148203);
}

double NNfunction_NG_7::synapse0x2840a00() {
   return (neuron0x282e2e0()*0.301699);
}

double NNfunction_NG_7::synapse0x2840a40() {
   return (neuron0x282e620()*-1.57062);
}

double NNfunction_NG_7::synapse0x2840a80() {
   return (neuron0x282e960()*0.00695538);
}

double NNfunction_NG_7::synapse0x2840ac0() {
   return (neuron0x282eca0()*0.0140306);
}

double NNfunction_NG_7::synapse0x2840b00() {
   return (neuron0x282efe0()*0.00955856);
}

double NNfunction_NG_7::synapse0x2840b40() {
   return (neuron0x282f320()*-0.0147932);
}

double NNfunction_NG_7::synapse0x2840b80() {
   return (neuron0x282f660()*-0.0103811);
}

double NNfunction_NG_7::synapse0x2840bc0() {
   return (neuron0x282f9a0()*0.00569356);
}

double NNfunction_NG_7::synapse0x2840c00() {
   return (neuron0x282fce0()*0.00172582);
}

double NNfunction_NG_7::synapse0x2840c40() {
   return (neuron0x2830020()*0.105587);
}

double NNfunction_NG_7::synapse0x2840c80() {
   return (neuron0x2830360()*0.037182);
}

double NNfunction_NG_7::synapse0x2840cc0() {
   return (neuron0x28306a0()*0.0074135);
}

double NNfunction_NG_7::synapse0x2840d00() {
   return (neuron0x28309e0()*0.00750357);
}

double NNfunction_NG_7::synapse0x2840d40() {
   return (neuron0x2830d20()*-0.0259863);
}

double NNfunction_NG_7::synapse0x28407d0() {
   return (neuron0x2831060()*0.0177261);
}

double NNfunction_NG_7::synapse0x2840810() {
   return (neuron0x28315c0()*0.014955);
}

double NNfunction_NG_7::synapse0x2840e90() {
   return (neuron0x28317e0()*-0.00657834);
}

double NNfunction_NG_7::synapse0x2840ed0() {
   return (neuron0x2831b20()*0.00409398);
}

double NNfunction_NG_7::synapse0x2840f10() {
   return (neuron0x2831e60()*0.0142072);
}

double NNfunction_NG_7::synapse0x2840f50() {
   return (neuron0x28321a0()*-0.00576477);
}

double NNfunction_NG_7::synapse0x2840f90() {
   return (neuron0x28324e0()*0.000318032);
}

double NNfunction_NG_7::synapse0x2840fd0() {
   return (neuron0x2832820()*-0.0654561);
}

double NNfunction_NG_7::synapse0x2841350() {
   return (neuron0x282dc60()*0.0410369);
}

double NNfunction_NG_7::synapse0x2841390() {
   return (neuron0x282dfa0()*0.0118044);
}

double NNfunction_NG_7::synapse0x28413d0() {
   return (neuron0x282e2e0()*2.68496);
}

double NNfunction_NG_7::synapse0x2841410() {
   return (neuron0x282e620()*-0.0368081);
}

double NNfunction_NG_7::synapse0x2841450() {
   return (neuron0x282e960()*-0.0597435);
}

double NNfunction_NG_7::synapse0x2841490() {
   return (neuron0x282eca0()*0.00887325);
}

double NNfunction_NG_7::synapse0x28414d0() {
   return (neuron0x282efe0()*-0.027146);
}

double NNfunction_NG_7::synapse0x2841510() {
   return (neuron0x282f320()*-0.00610505);
}

double NNfunction_NG_7::synapse0x2841550() {
   return (neuron0x282f660()*-0.00155085);
}

double NNfunction_NG_7::synapse0x2839710() {
   return (neuron0x282f9a0()*-0.00755795);
}

double NNfunction_NG_7::synapse0x2839750() {
   return (neuron0x282fce0()*0.000840318);
}

double NNfunction_NG_7::synapse0x2839790() {
   return (neuron0x2830020()*-0.0491754);
}

double NNfunction_NG_7::synapse0x28397d0() {
   return (neuron0x2830360()*-0.00829454);
}

double NNfunction_NG_7::synapse0x2839810() {
   return (neuron0x28306a0()*-0.0196793);
}

double NNfunction_NG_7::synapse0x2839850() {
   return (neuron0x28309e0()*0.0243313);
}

double NNfunction_NG_7::synapse0x2839890() {
   return (neuron0x2830d20()*0.00817679);
}

double NNfunction_NG_7::synapse0x28411a0() {
   return (neuron0x2831060()*-0.0313772);
}

double NNfunction_NG_7::synapse0x28411e0() {
   return (neuron0x28315c0()*-0.0174868);
}

double NNfunction_NG_7::synapse0x28399e0() {
   return (neuron0x28317e0()*-0.00448548);
}

double NNfunction_NG_7::synapse0x2839a20() {
   return (neuron0x2831b20()*0.00670402);
}

double NNfunction_NG_7::synapse0x2839a60() {
   return (neuron0x2831e60()*0.0167962);
}

double NNfunction_NG_7::synapse0x2839aa0() {
   return (neuron0x28321a0()*-0.000947423);
}

double NNfunction_NG_7::synapse0x2839ae0() {
   return (neuron0x28324e0()*-3.75149e-06);
}

double NNfunction_NG_7::synapse0x2839b20() {
   return (neuron0x2832820()*-5.97447);
}

double NNfunction_NG_7::synapse0x2839ea0() {
   return (neuron0x282dc60()*0.15183);
}

double NNfunction_NG_7::synapse0x2839ee0() {
   return (neuron0x282dfa0()*-0.0250281);
}

double NNfunction_NG_7::synapse0x2839f20() {
   return (neuron0x282e2e0()*-0.196864);
}

double NNfunction_NG_7::synapse0x2839f60() {
   return (neuron0x282e620()*0.481336);
}

double NNfunction_NG_7::synapse0x2839fa0() {
   return (neuron0x282e960()*0.217111);
}

double NNfunction_NG_7::synapse0x2839fe0() {
   return (neuron0x282eca0()*0.0279054);
}

double NNfunction_NG_7::synapse0x283a020() {
   return (neuron0x282efe0()*0.151117);
}

double NNfunction_NG_7::synapse0x283a060() {
   return (neuron0x282f320()*0.0539509);
}

double NNfunction_NG_7::synapse0x283a0a0() {
   return (neuron0x282f660()*0.0143142);
}

double NNfunction_NG_7::synapse0x283a0e0() {
   return (neuron0x282f9a0()*0.000242951);
}

double NNfunction_NG_7::synapse0x283a120() {
   return (neuron0x282fce0()*-0.0262252);
}

double NNfunction_NG_7::synapse0x283a160() {
   return (neuron0x2830020()*2.7213);
}

double NNfunction_NG_7::synapse0x283a1a0() {
   return (neuron0x2830360()*0.458621);
}

double NNfunction_NG_7::synapse0x283a1e0() {
   return (neuron0x28306a0()*0.207465);
}

double NNfunction_NG_7::synapse0x283a220() {
   return (neuron0x28309e0()*-0.240361);
}

double NNfunction_NG_7::synapse0x283a260() {
   return (neuron0x2830d20()*-0.174571);
}

double NNfunction_NG_7::synapse0x2839cf0() {
   return (neuron0x2831060()*0.208588);
}

double NNfunction_NG_7::synapse0x2839d30() {
   return (neuron0x28315c0()*-0.024372);
}

double NNfunction_NG_7::synapse0x283a3b0() {
   return (neuron0x28317e0()*0.0512286);
}

double NNfunction_NG_7::synapse0x283a3f0() {
   return (neuron0x2831b20()*-0.0602658);
}

double NNfunction_NG_7::synapse0x283a430() {
   return (neuron0x2831e60()*-0.0939475);
}

double NNfunction_NG_7::synapse0x283a470() {
   return (neuron0x28321a0()*0.0620337);
}

double NNfunction_NG_7::synapse0x283a4b0() {
   return (neuron0x28324e0()*-0.0705278);
}

double NNfunction_NG_7::synapse0x283a4f0() {
   return (neuron0x2832820()*1.50583);
}

double NNfunction_NG_7::synapse0x283a6c0() {
   return (neuron0x282dc60()*0.0250454);
}

double NNfunction_NG_7::synapse0x2843750() {
   return (neuron0x282dfa0()*0.000660002);
}

double NNfunction_NG_7::synapse0x2843790() {
   return (neuron0x282e2e0()*0.775857);
}

double NNfunction_NG_7::synapse0x28437d0() {
   return (neuron0x282e620()*0.0441779);
}

double NNfunction_NG_7::synapse0x2843810() {
   return (neuron0x282e960()*0.0502025);
}

double NNfunction_NG_7::synapse0x2843850() {
   return (neuron0x282eca0()*0.00911691);
}

double NNfunction_NG_7::synapse0x2843890() {
   return (neuron0x282efe0()*0.0210405);
}

double NNfunction_NG_7::synapse0x28438d0() {
   return (neuron0x282f320()*0.00437616);
}

double NNfunction_NG_7::synapse0x2843910() {
   return (neuron0x282f660()*-0.00106894);
}

double NNfunction_NG_7::synapse0x2843950() {
   return (neuron0x282f9a0()*0.0139867);
}

double NNfunction_NG_7::synapse0x2843990() {
   return (neuron0x282fce0()*-0.00155263);
}

double NNfunction_NG_7::synapse0x28439d0() {
   return (neuron0x2830020()*0.0125771);
}

double NNfunction_NG_7::synapse0x2843a10() {
   return (neuron0x2830360()*0.0541263);
}

double NNfunction_NG_7::synapse0x2843a50() {
   return (neuron0x28306a0()*-0.00180534);
}

double NNfunction_NG_7::synapse0x2843a90() {
   return (neuron0x28309e0()*-0.0208942);
}

double NNfunction_NG_7::synapse0x2843ad0() {
   return (neuron0x2830d20()*-0.0128632);
}

double NNfunction_NG_7::synapse0x28435a0() {
   return (neuron0x2831060()*-0.00248165);
}

double NNfunction_NG_7::synapse0x28435e0() {
   return (neuron0x28315c0()*0.000537066);
}

double NNfunction_NG_7::synapse0x2843c20() {
   return (neuron0x28317e0()*0.000311241);
}

double NNfunction_NG_7::synapse0x2843c60() {
   return (neuron0x2831b20()*-0.0210213);
}

double NNfunction_NG_7::synapse0x2843ca0() {
   return (neuron0x2831e60()*-0.0260807);
}

double NNfunction_NG_7::synapse0x2843ce0() {
   return (neuron0x28321a0()*-0.00108272);
}

double NNfunction_NG_7::synapse0x2843d20() {
   return (neuron0x28324e0()*-0.00734596);
}

double NNfunction_NG_7::synapse0x2843d60() {
   return (neuron0x2832820()*3.91731);
}

double NNfunction_NG_7::synapse0x28440e0() {
   return (neuron0x282dc60()*-0.0109539);
}

double NNfunction_NG_7::synapse0x2844120() {
   return (neuron0x282dfa0()*0.0386596);
}

double NNfunction_NG_7::synapse0x2844160() {
   return (neuron0x282e2e0()*-0.15826);
}

double NNfunction_NG_7::synapse0x28441a0() {
   return (neuron0x282e620()*-1.57908);
}

double NNfunction_NG_7::synapse0x28441e0() {
   return (neuron0x282e960()*0.0648852);
}

double NNfunction_NG_7::synapse0x2844220() {
   return (neuron0x282eca0()*0.0396482);
}

double NNfunction_NG_7::synapse0x2844260() {
   return (neuron0x282efe0()*-0.00607524);
}

double NNfunction_NG_7::synapse0x28442a0() {
   return (neuron0x282f320()*-0.0147289);
}

double NNfunction_NG_7::synapse0x28442e0() {
   return (neuron0x282f660()*-0.00220971);
}

double NNfunction_NG_7::synapse0x2844320() {
   return (neuron0x282f9a0()*0.00437807);
}

double NNfunction_NG_7::synapse0x2844360() {
   return (neuron0x282fce0()*0.00277623);
}

double NNfunction_NG_7::synapse0x28443a0() {
   return (neuron0x2830020()*0.377686);
}

double NNfunction_NG_7::synapse0x28443e0() {
   return (neuron0x2830360()*-0.0275227);
}

double NNfunction_NG_7::synapse0x2844420() {
   return (neuron0x28306a0()*0.0499361);
}

double NNfunction_NG_7::synapse0x2844460() {
   return (neuron0x28309e0()*-0.17818);
}

double NNfunction_NG_7::synapse0x28444a0() {
   return (neuron0x2830d20()*-0.107815);
}

double NNfunction_NG_7::synapse0x2843f30() {
   return (neuron0x2831060()*0.100355);
}

double NNfunction_NG_7::synapse0x2843f70() {
   return (neuron0x28315c0()*-0.0618429);
}

double NNfunction_NG_7::synapse0x28445f0() {
   return (neuron0x28317e0()*-0.0377865);
}

double NNfunction_NG_7::synapse0x2844630() {
   return (neuron0x2831b20()*-0.0106345);
}

double NNfunction_NG_7::synapse0x2844670() {
   return (neuron0x2831e60()*-0.00248899);
}

double NNfunction_NG_7::synapse0x28446b0() {
   return (neuron0x28321a0()*-0.00378013);
}

double NNfunction_NG_7::synapse0x28446f0() {
   return (neuron0x28324e0()*-0.0105867);
}

double NNfunction_NG_7::synapse0x2844730() {
   return (neuron0x2832820()*-0.0240532);
}

double NNfunction_NG_7::synapse0x2844ab0() {
   return (neuron0x282dc60()*0.820816);
}

double NNfunction_NG_7::synapse0x2844af0() {
   return (neuron0x282dfa0()*-0.0989347);
}

double NNfunction_NG_7::synapse0x2844b30() {
   return (neuron0x282e2e0()*-0.673512);
}

double NNfunction_NG_7::synapse0x2844b70() {
   return (neuron0x282e620()*-0.949093);
}

double NNfunction_NG_7::synapse0x2844bb0() {
   return (neuron0x282e960()*0.0870473);
}

double NNfunction_NG_7::synapse0x2844bf0() {
   return (neuron0x282eca0()*0.0709296);
}

double NNfunction_NG_7::synapse0x2844c30() {
   return (neuron0x282efe0()*0.162166);
}

double NNfunction_NG_7::synapse0x2844c70() {
   return (neuron0x282f320()*-0.121997);
}

double NNfunction_NG_7::synapse0x2844cb0() {
   return (neuron0x282f660()*-0.127329);
}

double NNfunction_NG_7::synapse0x2844cf0() {
   return (neuron0x282f9a0()*0.120279);
}

double NNfunction_NG_7::synapse0x2844d30() {
   return (neuron0x282fce0()*-0.0899196);
}

double NNfunction_NG_7::synapse0x2844d70() {
   return (neuron0x2830020()*0.00101001);
}

double NNfunction_NG_7::synapse0x2844db0() {
   return (neuron0x2830360()*-0.23642);
}

double NNfunction_NG_7::synapse0x2844df0() {
   return (neuron0x28306a0()*-0.121811);
}

double NNfunction_NG_7::synapse0x2844e30() {
   return (neuron0x28309e0()*0.105775);
}

double NNfunction_NG_7::synapse0x2844e70() {
   return (neuron0x2830d20()*0.0150393);
}

double NNfunction_NG_7::synapse0x2844900() {
   return (neuron0x2831060()*-0.164345);
}

double NNfunction_NG_7::synapse0x2844940() {
   return (neuron0x28315c0()*0.19321);
}

double NNfunction_NG_7::synapse0x2844fc0() {
   return (neuron0x28317e0()*-0.632523);
}

double NNfunction_NG_7::synapse0x2845000() {
   return (neuron0x2831b20()*0.514583);
}

double NNfunction_NG_7::synapse0x2845040() {
   return (neuron0x2831e60()*-0.45755);
}

double NNfunction_NG_7::synapse0x2845080() {
   return (neuron0x28321a0()*0.191023);
}

double NNfunction_NG_7::synapse0x28450c0() {
   return (neuron0x28324e0()*-0.206321);
}

double NNfunction_NG_7::synapse0x2845100() {
   return (neuron0x2832820()*-0.140926);
}

double NNfunction_NG_7::synapse0x2845480() {
   return (neuron0x282dc60()*-0.0242141);
}

double NNfunction_NG_7::synapse0x28454c0() {
   return (neuron0x282dfa0()*0.042795);
}

double NNfunction_NG_7::synapse0x2845500() {
   return (neuron0x282e2e0()*-0.151909);
}

double NNfunction_NG_7::synapse0x2845540() {
   return (neuron0x282e620()*0.290819);
}

double NNfunction_NG_7::synapse0x2845580() {
   return (neuron0x282e960()*0.0124473);
}

double NNfunction_NG_7::synapse0x28455c0() {
   return (neuron0x282eca0()*-0.0237304);
}

double NNfunction_NG_7::synapse0x2845600() {
   return (neuron0x282efe0()*0.0445024);
}

double NNfunction_NG_7::synapse0x2845640() {
   return (neuron0x282f320()*-0.0115346);
}

double NNfunction_NG_7::synapse0x2845680() {
   return (neuron0x282f660()*0.0113881);
}

double NNfunction_NG_7::synapse0x28456c0() {
   return (neuron0x282f9a0()*0.0397962);
}

double NNfunction_NG_7::synapse0x2845700() {
   return (neuron0x282fce0()*0.0349246);
}

double NNfunction_NG_7::synapse0x2845740() {
   return (neuron0x2830020()*1.77577);
}

double NNfunction_NG_7::synapse0x2845780() {
   return (neuron0x2830360()*-3.40753);
}

double NNfunction_NG_7::synapse0x28457c0() {
   return (neuron0x28306a0()*-0.0767662);
}

double NNfunction_NG_7::synapse0x2845800() {
   return (neuron0x28309e0()*0.00351821);
}

double NNfunction_NG_7::synapse0x2845840() {
   return (neuron0x2830d20()*0.0165651);
}

double NNfunction_NG_7::synapse0x28452d0() {
   return (neuron0x2831060()*0.0280897);
}

double NNfunction_NG_7::synapse0x2845310() {
   return (neuron0x28315c0()*0.0321606);
}

double NNfunction_NG_7::synapse0x2845990() {
   return (neuron0x28317e0()*-0.0206645);
}

double NNfunction_NG_7::synapse0x28459d0() {
   return (neuron0x2831b20()*0.0484243);
}

double NNfunction_NG_7::synapse0x2845a10() {
   return (neuron0x2831e60()*0.0357971);
}

double NNfunction_NG_7::synapse0x2845a50() {
   return (neuron0x28321a0()*-0.0385777);
}

double NNfunction_NG_7::synapse0x2845a90() {
   return (neuron0x28324e0()*-0.00685056);
}

double NNfunction_NG_7::synapse0x2845ad0() {
   return (neuron0x2832820()*0.15114);
}

double NNfunction_NG_7::synapse0x2845e50() {
   return (neuron0x282dc60()*-0.0100389);
}

double NNfunction_NG_7::synapse0x2845e90() {
   return (neuron0x282dfa0()*-0.00622783);
}

double NNfunction_NG_7::synapse0x2845ed0() {
   return (neuron0x282e2e0()*-0.0125461);
}

double NNfunction_NG_7::synapse0x2845f10() {
   return (neuron0x282e620()*0.0875005);
}

double NNfunction_NG_7::synapse0x2845f50() {
   return (neuron0x282e960()*0.0200798);
}

double NNfunction_NG_7::synapse0x2845f90() {
   return (neuron0x282eca0()*-0.00375802);
}

double NNfunction_NG_7::synapse0x2845fd0() {
   return (neuron0x282efe0()*0.00742774);
}

double NNfunction_NG_7::synapse0x2846010() {
   return (neuron0x282f320()*-0.00778707);
}

double NNfunction_NG_7::synapse0x2846050() {
   return (neuron0x282f660()*-0.00667871);
}

double NNfunction_NG_7::synapse0x2846090() {
   return (neuron0x282f9a0()*0.00548529);
}

double NNfunction_NG_7::synapse0x28460d0() {
   return (neuron0x282fce0()*0.00180808);
}

double NNfunction_NG_7::synapse0x2846110() {
   return (neuron0x2830020()*-0.407317);
}

double NNfunction_NG_7::synapse0x2846150() {
   return (neuron0x2830360()*0.0965713);
}

double NNfunction_NG_7::synapse0x2846190() {
   return (neuron0x28306a0()*0.00152886);
}

double NNfunction_NG_7::synapse0x28461d0() {
   return (neuron0x28309e0()*-0.0303575);
}

double NNfunction_NG_7::synapse0x2846210() {
   return (neuron0x2830d20()*-0.0268318);
}

double NNfunction_NG_7::synapse0x2845ca0() {
   return (neuron0x2831060()*0.0256047);
}

double NNfunction_NG_7::synapse0x2845ce0() {
   return (neuron0x28315c0()*0.00423962);
}

double NNfunction_NG_7::synapse0x2846360() {
   return (neuron0x28317e0()*-0.0241475);
}

double NNfunction_NG_7::synapse0x28463a0() {
   return (neuron0x2831b20()*-0.00785197);
}

double NNfunction_NG_7::synapse0x28463e0() {
   return (neuron0x2831e60()*0.00710522);
}

double NNfunction_NG_7::synapse0x2846420() {
   return (neuron0x28321a0()*-0.00700371);
}

double NNfunction_NG_7::synapse0x2846460() {
   return (neuron0x28324e0()*-0.00607602);
}

double NNfunction_NG_7::synapse0x28464a0() {
   return (neuron0x2832820()*0.065037);
}

double NNfunction_NG_7::synapse0x2846820() {
   return (neuron0x282dc60()*0.0354092);
}

double NNfunction_NG_7::synapse0x2846860() {
   return (neuron0x282dfa0()*0.0422938);
}

double NNfunction_NG_7::synapse0x28468a0() {
   return (neuron0x282e2e0()*0.0220879);
}

double NNfunction_NG_7::synapse0x28468e0() {
   return (neuron0x282e620()*-1.39538);
}

double NNfunction_NG_7::synapse0x2846920() {
   return (neuron0x282e960()*-0.0103606);
}

double NNfunction_NG_7::synapse0x2846960() {
   return (neuron0x282eca0()*-0.0185492);
}

double NNfunction_NG_7::synapse0x28469a0() {
   return (neuron0x282efe0()*-0.00828705);
}

double NNfunction_NG_7::synapse0x28469e0() {
   return (neuron0x282f320()*-0.0137963);
}

double NNfunction_NG_7::synapse0x2846a20() {
   return (neuron0x282f660()*0.0269361);
}

double NNfunction_NG_7::synapse0x2846a60() {
   return (neuron0x282f9a0()*-0.00998212);
}

double NNfunction_NG_7::synapse0x2846aa0() {
   return (neuron0x282fce0()*0.0465833);
}

double NNfunction_NG_7::synapse0x2846ae0() {
   return (neuron0x2830020()*1.71834);
}

double NNfunction_NG_7::synapse0x2846b20() {
   return (neuron0x2830360()*-2.72936);
}

double NNfunction_NG_7::synapse0x2846b60() {
   return (neuron0x28306a0()*-0.0493074);
}

double NNfunction_NG_7::synapse0x2846ba0() {
   return (neuron0x28309e0()*-0.0356358);
}

double NNfunction_NG_7::synapse0x2846be0() {
   return (neuron0x2830d20()*-0.00417201);
}

double NNfunction_NG_7::synapse0x2846670() {
   return (neuron0x2831060()*0.0125208);
}

double NNfunction_NG_7::synapse0x28466b0() {
   return (neuron0x28315c0()*0.00239645);
}

double NNfunction_NG_7::synapse0x2846d30() {
   return (neuron0x28317e0()*0.0173966);
}

double NNfunction_NG_7::synapse0x2846d70() {
   return (neuron0x2831b20()*0.0611676);
}

double NNfunction_NG_7::synapse0x2846db0() {
   return (neuron0x2831e60()*-0.0226039);
}

double NNfunction_NG_7::synapse0x2846df0() {
   return (neuron0x28321a0()*-0.0290721);
}

double NNfunction_NG_7::synapse0x2846e30() {
   return (neuron0x28324e0()*-0.00223715);
}

double NNfunction_NG_7::synapse0x2846e70() {
   return (neuron0x2832820()*0.0540126);
}

double NNfunction_NG_7::synapse0x28471f0() {
   return (neuron0x282dc60()*-0.0542387);
}

double NNfunction_NG_7::synapse0x2847230() {
   return (neuron0x282dfa0()*-0.00804565);
}

double NNfunction_NG_7::synapse0x2847270() {
   return (neuron0x282e2e0()*-0.579378);
}

double NNfunction_NG_7::synapse0x28472b0() {
   return (neuron0x282e620()*-0.0561583);
}

double NNfunction_NG_7::synapse0x28472f0() {
   return (neuron0x282e960()*0.0173311);
}

double NNfunction_NG_7::synapse0x2847330() {
   return (neuron0x282eca0()*0.115779);
}

double NNfunction_NG_7::synapse0x2847370() {
   return (neuron0x282efe0()*-0.00459194);
}

double NNfunction_NG_7::synapse0x28473b0() {
   return (neuron0x282f320()*-0.0186607);
}

double NNfunction_NG_7::synapse0x28473f0() {
   return (neuron0x282f660()*-0.0119223);
}

double NNfunction_NG_7::synapse0x2847430() {
   return (neuron0x282f9a0()*0.0173541);
}

double NNfunction_NG_7::synapse0x2847470() {
   return (neuron0x282fce0()*-0.0137643);
}

double NNfunction_NG_7::synapse0x28474b0() {
   return (neuron0x2830020()*-0.0669012);
}

double NNfunction_NG_7::synapse0x28474f0() {
   return (neuron0x2830360()*-0.0843704);
}

double NNfunction_NG_7::synapse0x2847530() {
   return (neuron0x28306a0()*0.138829);
}

double NNfunction_NG_7::synapse0x2847570() {
   return (neuron0x28309e0()*0.0897407);
}

double NNfunction_NG_7::synapse0x28475b0() {
   return (neuron0x2830d20()*-0.103709);
}

double NNfunction_NG_7::synapse0x2847040() {
   return (neuron0x2831060()*0.153588);
}

double NNfunction_NG_7::synapse0x2847080() {
   return (neuron0x28315c0()*0.0309979);
}

double NNfunction_NG_7::synapse0x2847700() {
   return (neuron0x28317e0()*-0.0413312);
}

double NNfunction_NG_7::synapse0x2847740() {
   return (neuron0x2831b20()*-0.0676292);
}

double NNfunction_NG_7::synapse0x2847780() {
   return (neuron0x2831e60()*0.0477834);
}

double NNfunction_NG_7::synapse0x28477c0() {
   return (neuron0x28321a0()*-0.00971123);
}

double NNfunction_NG_7::synapse0x2847800() {
   return (neuron0x28324e0()*0.0262959);
}

double NNfunction_NG_7::synapse0x2847840() {
   return (neuron0x2832820()*-0.151725);
}

double NNfunction_NG_7::synapse0x2847bc0() {
   return (neuron0x282dc60()*-0.0153271);
}

double NNfunction_NG_7::synapse0x2847c00() {
   return (neuron0x282dfa0()*0.0157795);
}

double NNfunction_NG_7::synapse0x2847c40() {
   return (neuron0x282e2e0()*1.1738);
}

double NNfunction_NG_7::synapse0x2847c80() {
   return (neuron0x282e620()*0.0675067);
}

double NNfunction_NG_7::synapse0x2847cc0() {
   return (neuron0x282e960()*0.00488467);
}

double NNfunction_NG_7::synapse0x2847d00() {
   return (neuron0x282eca0()*0.0194229);
}

double NNfunction_NG_7::synapse0x2847d40() {
   return (neuron0x282efe0()*1.58252e-05);
}

double NNfunction_NG_7::synapse0x2847d80() {
   return (neuron0x282f320()*-0.0141367);
}

double NNfunction_NG_7::synapse0x2847dc0() {
   return (neuron0x282f660()*-0.0028867);
}

double NNfunction_NG_7::synapse0x2847e00() {
   return (neuron0x282f9a0()*0.00961011);
}

double NNfunction_NG_7::synapse0x2847e40() {
   return (neuron0x282fce0()*-0.00570515);
}

double NNfunction_NG_7::synapse0x2847e80() {
   return (neuron0x2830020()*0.0202293);
}

double NNfunction_NG_7::synapse0x2847ec0() {
   return (neuron0x2830360()*0.0178195);
}

double NNfunction_NG_7::synapse0x2847f00() {
   return (neuron0x28306a0()*0.0312948);
}

double NNfunction_NG_7::synapse0x2847f40() {
   return (neuron0x28309e0()*-0.0116645);
}

double NNfunction_NG_7::synapse0x2847f80() {
   return (neuron0x2830d20()*-0.014264);
}

double NNfunction_NG_7::synapse0x2847a10() {
   return (neuron0x2831060()*0.0466485);
}

double NNfunction_NG_7::synapse0x2847a50() {
   return (neuron0x28315c0()*-0.00299834);
}

double NNfunction_NG_7::synapse0x28480d0() {
   return (neuron0x28317e0()*-0.00898245);
}

double NNfunction_NG_7::synapse0x2848110() {
   return (neuron0x2831b20()*-0.0289017);
}

double NNfunction_NG_7::synapse0x2848150() {
   return (neuron0x2831e60()*-0.00555396);
}

double NNfunction_NG_7::synapse0x2848190() {
   return (neuron0x28321a0()*0.00737347);
}

double NNfunction_NG_7::synapse0x28481d0() {
   return (neuron0x28324e0()*-0.00636475);
}

double NNfunction_NG_7::synapse0x2848210() {
   return (neuron0x2832820()*0.0886967);
}

double NNfunction_NG_7::synapse0x2848590() {
   return (neuron0x282dc60()*0.330167);
}

double NNfunction_NG_7::synapse0x283cb60() {
   return (neuron0x282dfa0()*-0.105797);
}

double NNfunction_NG_7::synapse0x283cba0() {
   return (neuron0x282e2e0()*0.502941);
}

double NNfunction_NG_7::synapse0x283cbe0() {
   return (neuron0x282e620()*0.753428);
}

double NNfunction_NG_7::synapse0x283ce30() {
   return (neuron0x282e960()*0.243882);
}

double NNfunction_NG_7::synapse0x283ce70() {
   return (neuron0x282eca0()*-0.387208);
}

double NNfunction_NG_7::synapse0x283ceb0() {
   return (neuron0x282efe0()*0.517697);
}

double NNfunction_NG_7::synapse0x283d100() {
   return (neuron0x282f320()*-0.396627);
}

double NNfunction_NG_7::synapse0x283d140() {
   return (neuron0x282f660()*0.35496);
}

double NNfunction_NG_7::synapse0x283d390() {
   return (neuron0x282f9a0()*0.303057);
}

double NNfunction_NG_7::synapse0x283d3d0() {
   return (neuron0x282fce0()*-0.263081);
}

double NNfunction_NG_7::synapse0x283d410() {
   return (neuron0x2830020()*-0.310282);
}

double NNfunction_NG_7::synapse0x283d660() {
   return (neuron0x2830360()*-0.352469);
}

double NNfunction_NG_7::synapse0x283d6a0() {
   return (neuron0x28306a0()*0.0996409);
}

double NNfunction_NG_7::synapse0x283d8f0() {
   return (neuron0x28309e0()*-0.145429);
}

double NNfunction_NG_7::synapse0x283d930() {
   return (neuron0x2830d20()*0.0975279);
}

double NNfunction_NG_7::synapse0x28483e0() {
   return (neuron0x2831060()*0.198819);
}

double NNfunction_NG_7::synapse0x2848420() {
   return (neuron0x28315c0()*-0.000717376);
}

double NNfunction_NG_7::synapse0x283da80() {
   return (neuron0x28317e0()*-0.390255);
}

double NNfunction_NG_7::synapse0x283df90() {
   return (neuron0x2831b20()*-0.128853);
}

double NNfunction_NG_7::synapse0x283dfd0() {
   return (neuron0x2831e60()*-0.111126);
}

double NNfunction_NG_7::synapse0x283e010() {
   return (neuron0x28321a0()*0.0597185);
}

double NNfunction_NG_7::synapse0x283e260() {
   return (neuron0x28324e0()*0.401469);
}

double NNfunction_NG_7::synapse0x283e2a0() {
   return (neuron0x2832820()*0.0410949);
}

double NNfunction_NG_7::synapse0x283db50() {
   return (neuron0x282dc60()*0.113239);
}

double NNfunction_NG_7::synapse0x283db90() {
   return (neuron0x282dfa0()*-0.0470697);
}

double NNfunction_NG_7::synapse0x283dbd0() {
   return (neuron0x282e2e0()*0.95034);
}

double NNfunction_NG_7::synapse0x283dc10() {
   return (neuron0x282e620()*0.986811);
}

double NNfunction_NG_7::synapse0x283e590() {
   return (neuron0x282e960()*0.0263717);
}

double NNfunction_NG_7::synapse0x284a8e0() {
   return (neuron0x282eca0()*-0.0581948);
}

double NNfunction_NG_7::synapse0x284a920() {
   return (neuron0x282efe0()*-0.0542067);
}

double NNfunction_NG_7::synapse0x284a960() {
   return (neuron0x282f320()*-0.0194988);
}

double NNfunction_NG_7::synapse0x284a9a0() {
   return (neuron0x282f660()*-0.0682252);
}

double NNfunction_NG_7::synapse0x284a9e0() {
   return (neuron0x282f9a0()*-0.0372045);
}

double NNfunction_NG_7::synapse0x284aa20() {
   return (neuron0x282fce0()*-0.0588316);
}

double NNfunction_NG_7::synapse0x284aa60() {
   return (neuron0x2830020()*0.101948);
}

double NNfunction_NG_7::synapse0x284aaa0() {
   return (neuron0x2830360()*-0.00659749);
}

double NNfunction_NG_7::synapse0x284aae0() {
   return (neuron0x28306a0()*0.0167925);
}

double NNfunction_NG_7::synapse0x284ab20() {
   return (neuron0x28309e0()*0.056781);
}

double NNfunction_NG_7::synapse0x284ab60() {
   return (neuron0x2830d20()*0.0706267);
}

double NNfunction_NG_7::synapse0x283e470() {
   return (neuron0x2831060()*0.0287104);
}

double NNfunction_NG_7::synapse0x283e4b0() {
   return (neuron0x28315c0()*0.0642648);
}

double NNfunction_NG_7::synapse0x284acb0() {
   return (neuron0x28317e0()*-0.0763715);
}

double NNfunction_NG_7::synapse0x284acf0() {
   return (neuron0x2831b20()*-0.123059);
}

double NNfunction_NG_7::synapse0x284ad30() {
   return (neuron0x2831e60()*0.0281125);
}

double NNfunction_NG_7::synapse0x284ad70() {
   return (neuron0x28321a0()*0.0781694);
}

double NNfunction_NG_7::synapse0x284adb0() {
   return (neuron0x28324e0()*-0.0353365);
}

double NNfunction_NG_7::synapse0x284adf0() {
   return (neuron0x2832820()*0.0323167);
}

double NNfunction_NG_7::synapse0x284b170() {
   return (neuron0x282dc60()*0.00406957);
}

double NNfunction_NG_7::synapse0x284b1b0() {
   return (neuron0x282dfa0()*-0.00774032);
}

double NNfunction_NG_7::synapse0x284b1f0() {
   return (neuron0x282e2e0()*0.0816604);
}

double NNfunction_NG_7::synapse0x284b230() {
   return (neuron0x282e620()*1.48297);
}

double NNfunction_NG_7::synapse0x284b270() {
   return (neuron0x282e960()*0.000488315);
}

double NNfunction_NG_7::synapse0x284b2b0() {
   return (neuron0x282eca0()*-0.00121479);
}

double NNfunction_NG_7::synapse0x284b2f0() {
   return (neuron0x282efe0()*0.00264138);
}

double NNfunction_NG_7::synapse0x284b330() {
   return (neuron0x282f320()*-0.00419032);
}

double NNfunction_NG_7::synapse0x284b370() {
   return (neuron0x282f660()*-0.00836029);
}

double NNfunction_NG_7::synapse0x284b3b0() {
   return (neuron0x282f9a0()*-0.00247034);
}

double NNfunction_NG_7::synapse0x284b3f0() {
   return (neuron0x282fce0()*-0.00154912);
}

double NNfunction_NG_7::synapse0x284b430() {
   return (neuron0x2830020()*0.0181567);
}

double NNfunction_NG_7::synapse0x284b470() {
   return (neuron0x2830360()*0.0507187);
}

double NNfunction_NG_7::synapse0x284b4b0() {
   return (neuron0x28306a0()*-0.00403007);
}

double NNfunction_NG_7::synapse0x284b4f0() {
   return (neuron0x28309e0()*-0.00414891);
}

double NNfunction_NG_7::synapse0x284b530() {
   return (neuron0x2830d20()*-0.0097664);
}

double NNfunction_NG_7::synapse0x284afc0() {
   return (neuron0x2831060()*0.0083645);
}

double NNfunction_NG_7::synapse0x284b000() {
   return (neuron0x28315c0()*0.0133649);
}

double NNfunction_NG_7::synapse0x284b680() {
   return (neuron0x28317e0()*0.00212451);
}

double NNfunction_NG_7::synapse0x284b6c0() {
   return (neuron0x2831b20()*0.0091729);
}

double NNfunction_NG_7::synapse0x284b700() {
   return (neuron0x2831e60()*0.00813941);
}

double NNfunction_NG_7::synapse0x284b740() {
   return (neuron0x28321a0()*-0.00799417);
}

double NNfunction_NG_7::synapse0x284b780() {
   return (neuron0x28324e0()*0.00184937);
}

double NNfunction_NG_7::synapse0x284b7c0() {
   return (neuron0x2832820()*-0.0416783);
}

double NNfunction_NG_7::synapse0x284bb40() {
   return (neuron0x282dc60()*0.000795144);
}

double NNfunction_NG_7::synapse0x284bb80() {
   return (neuron0x282dfa0()*0.0181412);
}

double NNfunction_NG_7::synapse0x284bbc0() {
   return (neuron0x282e2e0()*-0.00168606);
}

double NNfunction_NG_7::synapse0x284bc00() {
   return (neuron0x282e620()*3.28355);
}

double NNfunction_NG_7::synapse0x284bc40() {
   return (neuron0x282e960()*-0.0124411);
}

double NNfunction_NG_7::synapse0x284bc80() {
   return (neuron0x282eca0()*-0.00771033);
}

double NNfunction_NG_7::synapse0x284bcc0() {
   return (neuron0x282efe0()*-0.0428642);
}

double NNfunction_NG_7::synapse0x284bd00() {
   return (neuron0x282f320()*0.0102149);
}

double NNfunction_NG_7::synapse0x284bd40() {
   return (neuron0x282f660()*0.00536148);
}

double NNfunction_NG_7::synapse0x284bd80() {
   return (neuron0x282f9a0()*-0.00362071);
}

double NNfunction_NG_7::synapse0x284bdc0() {
   return (neuron0x282fce0()*-0.00807025);
}

double NNfunction_NG_7::synapse0x284be00() {
   return (neuron0x2830020()*-2.69667);
}

double NNfunction_NG_7::synapse0x284be40() {
   return (neuron0x2830360()*0.249949);
}

double NNfunction_NG_7::synapse0x284be80() {
   return (neuron0x28306a0()*-0.0441111);
}

double NNfunction_NG_7::synapse0x284bec0() {
   return (neuron0x28309e0()*-0.0123922);
}

double NNfunction_NG_7::synapse0x284bf00() {
   return (neuron0x2830d20()*0.0109186);
}

double NNfunction_NG_7::synapse0x284b990() {
   return (neuron0x2831060()*0.0114609);
}

double NNfunction_NG_7::synapse0x284b9d0() {
   return (neuron0x28315c0()*0.0456816);
}

double NNfunction_NG_7::synapse0x284c050() {
   return (neuron0x28317e0()*0.0593027);
}

double NNfunction_NG_7::synapse0x284c090() {
   return (neuron0x2831b20()*0.0122706);
}

double NNfunction_NG_7::synapse0x284c0d0() {
   return (neuron0x2831e60()*-0.000405886);
}

double NNfunction_NG_7::synapse0x284c110() {
   return (neuron0x28321a0()*-0.00668273);
}

double NNfunction_NG_7::synapse0x284c150() {
   return (neuron0x28324e0()*-0.00505428);
}

double NNfunction_NG_7::synapse0x284c190() {
   return (neuron0x2832820()*0.0768656);
}

double NNfunction_NG_7::synapse0x284c510() {
   return (neuron0x282dc60()*-0.0220701);
}

double NNfunction_NG_7::synapse0x284c550() {
   return (neuron0x282dfa0()*0.000967517);
}

double NNfunction_NG_7::synapse0x284c590() {
   return (neuron0x282e2e0()*-1.14272);
}

double NNfunction_NG_7::synapse0x284c5d0() {
   return (neuron0x282e620()*-1.31372);
}

double NNfunction_NG_7::synapse0x284c610() {
   return (neuron0x282e960()*-0.00464265);
}

double NNfunction_NG_7::synapse0x284c650() {
   return (neuron0x282eca0()*0.0183701);
}

double NNfunction_NG_7::synapse0x284c690() {
   return (neuron0x282efe0()*0.000979745);
}

double NNfunction_NG_7::synapse0x284c6d0() {
   return (neuron0x282f320()*0.0209493);
}

double NNfunction_NG_7::synapse0x284c710() {
   return (neuron0x282f660()*0.0137454);
}

double NNfunction_NG_7::synapse0x284c750() {
   return (neuron0x282f9a0()*-0.026073);
}

double NNfunction_NG_7::synapse0x284c790() {
   return (neuron0x282fce0()*0.0121362);
}

double NNfunction_NG_7::synapse0x284c7d0() {
   return (neuron0x2830020()*-0.0600348);
}

double NNfunction_NG_7::synapse0x284c810() {
   return (neuron0x2830360()*0.0743423);
}

double NNfunction_NG_7::synapse0x284c850() {
   return (neuron0x28306a0()*0.0215109);
}

double NNfunction_NG_7::synapse0x284c890() {
   return (neuron0x28309e0()*0.0255007);
}

double NNfunction_NG_7::synapse0x284c8d0() {
   return (neuron0x2830d20()*0.00570734);
}

double NNfunction_NG_7::synapse0x284c360() {
   return (neuron0x2831060()*0.0154783);
}

double NNfunction_NG_7::synapse0x284c3a0() {
   return (neuron0x28315c0()*0.00705358);
}

double NNfunction_NG_7::synapse0x284ca20() {
   return (neuron0x28317e0()*-0.0252488);
}

double NNfunction_NG_7::synapse0x284ca60() {
   return (neuron0x2831b20()*-0.0095421);
}

double NNfunction_NG_7::synapse0x284caa0() {
   return (neuron0x2831e60()*0.025254);
}

double NNfunction_NG_7::synapse0x284cae0() {
   return (neuron0x28321a0()*0.00235435);
}

double NNfunction_NG_7::synapse0x284cb20() {
   return (neuron0x28324e0()*0.0260267);
}

double NNfunction_NG_7::synapse0x284cb60() {
   return (neuron0x2832820()*0.0509897);
}

double NNfunction_NG_7::synapse0x284cee0() {
   return (neuron0x282dc60()*0.0593901);
}

double NNfunction_NG_7::synapse0x284cf20() {
   return (neuron0x282dfa0()*0.0045601);
}

double NNfunction_NG_7::synapse0x284cf60() {
   return (neuron0x282e2e0()*-6.01134);
}

double NNfunction_NG_7::synapse0x284cfa0() {
   return (neuron0x282e620()*0.0269788);
}

double NNfunction_NG_7::synapse0x284cfe0() {
   return (neuron0x282e960()*0.00403109);
}

double NNfunction_NG_7::synapse0x284d020() {
   return (neuron0x282eca0()*-0.0165019);
}

double NNfunction_NG_7::synapse0x284d060() {
   return (neuron0x282efe0()*0.00486665);
}

double NNfunction_NG_7::synapse0x284d0a0() {
   return (neuron0x282f320()*-0.0314546);
}

double NNfunction_NG_7::synapse0x284d0e0() {
   return (neuron0x282f660()*0.0188946);
}

double NNfunction_NG_7::synapse0x284d120() {
   return (neuron0x282f9a0()*-0.00291549);
}

double NNfunction_NG_7::synapse0x284d160() {
   return (neuron0x282fce0()*0.016991);
}

double NNfunction_NG_7::synapse0x284d1a0() {
   return (neuron0x2830020()*0.028195);
}

double NNfunction_NG_7::synapse0x284d1e0() {
   return (neuron0x2830360()*0.0535923);
}

double NNfunction_NG_7::synapse0x284d220() {
   return (neuron0x28306a0()*-0.000697203);
}

double NNfunction_NG_7::synapse0x284d260() {
   return (neuron0x28309e0()*-0.0165774);
}

double NNfunction_NG_7::synapse0x284d2a0() {
   return (neuron0x2830d20()*-0.00643976);
}

double NNfunction_NG_7::synapse0x284cd30() {
   return (neuron0x2831060()*0.0129786);
}

double NNfunction_NG_7::synapse0x284cd70() {
   return (neuron0x28315c0()*0.0183087);
}

double NNfunction_NG_7::synapse0x284d3f0() {
   return (neuron0x28317e0()*-0.00404161);
}

double NNfunction_NG_7::synapse0x284d430() {
   return (neuron0x2831b20()*0.012657);
}

double NNfunction_NG_7::synapse0x284d470() {
   return (neuron0x2831e60()*0.0190397);
}

double NNfunction_NG_7::synapse0x284d4b0() {
   return (neuron0x28321a0()*0.00480792);
}

double NNfunction_NG_7::synapse0x284d4f0() {
   return (neuron0x28324e0()*-0.00105163);
}

double NNfunction_NG_7::synapse0x284d530() {
   return (neuron0x2832820()*-8.37905);
}

double NNfunction_NG_7::synapse0x284d8b0() {
   return (neuron0x282dc60()*-0.458933);
}

double NNfunction_NG_7::synapse0x284d8f0() {
   return (neuron0x282dfa0()*-0.397835);
}

double NNfunction_NG_7::synapse0x284d930() {
   return (neuron0x282e2e0()*-0.340039);
}

double NNfunction_NG_7::synapse0x284d970() {
   return (neuron0x282e620()*-0.377297);
}

double NNfunction_NG_7::synapse0x284d9b0() {
   return (neuron0x282e960()*0.383387);
}

double NNfunction_NG_7::synapse0x284d9f0() {
   return (neuron0x282eca0()*-0.354078);
}

double NNfunction_NG_7::synapse0x284da30() {
   return (neuron0x282efe0()*-0.106072);
}

double NNfunction_NG_7::synapse0x284da70() {
   return (neuron0x282f320()*-0.218682);
}

double NNfunction_NG_7::synapse0x284dab0() {
   return (neuron0x282f660()*-0.168658);
}

double NNfunction_NG_7::synapse0x284daf0() {
   return (neuron0x282f9a0()*0.105541);
}

double NNfunction_NG_7::synapse0x284db30() {
   return (neuron0x282fce0()*-0.156061);
}

double NNfunction_NG_7::synapse0x284db70() {
   return (neuron0x2830020()*0.141026);
}

double NNfunction_NG_7::synapse0x284dbb0() {
   return (neuron0x2830360()*0.140438);
}

double NNfunction_NG_7::synapse0x284dbf0() {
   return (neuron0x28306a0()*-0.112617);
}

double NNfunction_NG_7::synapse0x284dc30() {
   return (neuron0x28309e0()*-0.368054);
}

double NNfunction_NG_7::synapse0x284dc70() {
   return (neuron0x2830d20()*-0.0911357);
}

double NNfunction_NG_7::synapse0x284d700() {
   return (neuron0x2831060()*0.188476);
}

double NNfunction_NG_7::synapse0x284d740() {
   return (neuron0x28315c0()*0.1598);
}

double NNfunction_NG_7::synapse0x284ddc0() {
   return (neuron0x28317e0()*-0.198745);
}

double NNfunction_NG_7::synapse0x284de00() {
   return (neuron0x2831b20()*0.505261);
}

double NNfunction_NG_7::synapse0x284de40() {
   return (neuron0x2831e60()*0.0609721);
}

double NNfunction_NG_7::synapse0x284de80() {
   return (neuron0x28321a0()*0.312773);
}

double NNfunction_NG_7::synapse0x284dec0() {
   return (neuron0x28324e0()*0.0452651);
}

double NNfunction_NG_7::synapse0x284df00() {
   return (neuron0x2832820()*-0.408763);
}

double NNfunction_NG_7::synapse0x284e280() {
   return (neuron0x282dc60()*0.320809);
}

double NNfunction_NG_7::synapse0x284e2c0() {
   return (neuron0x282dfa0()*-0.105728);
}

double NNfunction_NG_7::synapse0x284e300() {
   return (neuron0x282e2e0()*0.737079);
}

double NNfunction_NG_7::synapse0x284e340() {
   return (neuron0x282e620()*-0.13638);
}

double NNfunction_NG_7::synapse0x284e380() {
   return (neuron0x282e960()*0.253362);
}

double NNfunction_NG_7::synapse0x284e3c0() {
   return (neuron0x282eca0()*0.0396592);
}

double NNfunction_NG_7::synapse0x284e400() {
   return (neuron0x282efe0()*0.040446);
}

double NNfunction_NG_7::synapse0x284e440() {
   return (neuron0x282f320()*0.00111866);
}

double NNfunction_NG_7::synapse0x284e480() {
   return (neuron0x282f660()*0.0261216);
}

double NNfunction_NG_7::synapse0x284e4c0() {
   return (neuron0x282f9a0()*-0.158367);
}

double NNfunction_NG_7::synapse0x284e500() {
   return (neuron0x282fce0()*0.157705);
}

double NNfunction_NG_7::synapse0x284e540() {
   return (neuron0x2830020()*0.106023);
}

double NNfunction_NG_7::synapse0x284e580() {
   return (neuron0x2830360()*0.0676467);
}

double NNfunction_NG_7::synapse0x284e5c0() {
   return (neuron0x28306a0()*-0.0968959);
}

double NNfunction_NG_7::synapse0x284e600() {
   return (neuron0x28309e0()*0.0173523);
}

double NNfunction_NG_7::synapse0x284e640() {
   return (neuron0x2830d20()*-0.0356422);
}

double NNfunction_NG_7::synapse0x284e0d0() {
   return (neuron0x2831060()*-0.0960144);
}

double NNfunction_NG_7::synapse0x284e110() {
   return (neuron0x28315c0()*-0.0510813);
}

double NNfunction_NG_7::synapse0x284e790() {
   return (neuron0x28317e0()*-0.0651763);
}

double NNfunction_NG_7::synapse0x284e7d0() {
   return (neuron0x2831b20()*-0.108253);
}

double NNfunction_NG_7::synapse0x284e810() {
   return (neuron0x2831e60()*-0.162226);
}

double NNfunction_NG_7::synapse0x284e850() {
   return (neuron0x28321a0()*-0.0257163);
}

double NNfunction_NG_7::synapse0x284e890() {
   return (neuron0x28324e0()*-0.000710288);
}

double NNfunction_NG_7::synapse0x284e8d0() {
   return (neuron0x2832820()*0.104118);
}

double NNfunction_NG_7::synapse0x284ec50() {
   return (neuron0x282dc60()*-0.0417683);
}

double NNfunction_NG_7::synapse0x284ec90() {
   return (neuron0x282dfa0()*0.00110731);
}

double NNfunction_NG_7::synapse0x284ecd0() {
   return (neuron0x282e2e0()*0.272545);
}

double NNfunction_NG_7::synapse0x284ed10() {
   return (neuron0x282e620()*1.70158);
}

double NNfunction_NG_7::synapse0x284ed50() {
   return (neuron0x282e960()*-0.0509199);
}

double NNfunction_NG_7::synapse0x284ed90() {
   return (neuron0x282eca0()*-0.0287666);
}

double NNfunction_NG_7::synapse0x284edd0() {
   return (neuron0x282efe0()*-0.0293505);
}

double NNfunction_NG_7::synapse0x284ee10() {
   return (neuron0x282f320()*-0.00558119);
}

double NNfunction_NG_7::synapse0x284ee50() {
   return (neuron0x282f660()*0.00997478);
}

double NNfunction_NG_7::synapse0x284ee90() {
   return (neuron0x282f9a0()*-0.0265028);
}

double NNfunction_NG_7::synapse0x284eed0() {
   return (neuron0x282fce0()*-0.00357678);
}

double NNfunction_NG_7::synapse0x284ef10() {
   return (neuron0x2830020()*-0.197493);
}

double NNfunction_NG_7::synapse0x284ef50() {
   return (neuron0x2830360()*-0.450605);
}

double NNfunction_NG_7::synapse0x284ef90() {
   return (neuron0x28306a0()*0.129825);
}

double NNfunction_NG_7::synapse0x284efd0() {
   return (neuron0x28309e0()*-0.198522);
}

double NNfunction_NG_7::synapse0x284f010() {
   return (neuron0x2830d20()*-0.200579);
}

double NNfunction_NG_7::synapse0x284eaa0() {
   return (neuron0x2831060()*0.153855);
}

double NNfunction_NG_7::synapse0x284eae0() {
   return (neuron0x28315c0()*-0.187895);
}

double NNfunction_NG_7::synapse0x284f160() {
   return (neuron0x28317e0()*-0.210901);
}

double NNfunction_NG_7::synapse0x284f1a0() {
   return (neuron0x2831b20()*-0.0314423);
}

double NNfunction_NG_7::synapse0x284f1e0() {
   return (neuron0x2831e60()*0.014301);
}

double NNfunction_NG_7::synapse0x284f220() {
   return (neuron0x28321a0()*-0.022373);
}

double NNfunction_NG_7::synapse0x284f260() {
   return (neuron0x28324e0()*0.000898654);
}

double NNfunction_NG_7::synapse0x284f2a0() {
   return (neuron0x2832820()*0.105012);
}

double NNfunction_NG_7::synapse0x2837d50() {
   return (neuron0x282dc60()*0.0337207);
}

double NNfunction_NG_7::synapse0x2837d90() {
   return (neuron0x282dfa0()*0.029145);
}

double NNfunction_NG_7::synapse0x2837dd0() {
   return (neuron0x282e2e0()*1.17417);
}

double NNfunction_NG_7::synapse0x2837e10() {
   return (neuron0x282e620()*2.58995);
}

double NNfunction_NG_7::synapse0x2837e50() {
   return (neuron0x282e960()*0.0264735);
}

double NNfunction_NG_7::synapse0x2837e90() {
   return (neuron0x282eca0()*0.0406807);
}

double NNfunction_NG_7::synapse0x2837ed0() {
   return (neuron0x282efe0()*-0.00728009);
}

double NNfunction_NG_7::synapse0x2837f10() {
   return (neuron0x282f320()*-0.0619709);
}

double NNfunction_NG_7::synapse0x284fa30() {
   return (neuron0x282f660()*-0.0426706);
}

double NNfunction_NG_7::synapse0x284fa70() {
   return (neuron0x282f9a0()*0.0349438);
}

double NNfunction_NG_7::synapse0x284fab0() {
   return (neuron0x282fce0()*-0.0159555);
}

double NNfunction_NG_7::synapse0x284faf0() {
   return (neuron0x2830020()*-0.194946);
}

double NNfunction_NG_7::synapse0x284fb30() {
   return (neuron0x2830360()*0.00401728);
}

double NNfunction_NG_7::synapse0x284fb70() {
   return (neuron0x28306a0()*-0.0142653);
}

double NNfunction_NG_7::synapse0x284fbb0() {
   return (neuron0x28309e0()*-0.0500194);
}

double NNfunction_NG_7::synapse0x284fbf0() {
   return (neuron0x2830d20()*0.00372535);
}

double NNfunction_NG_7::synapse0x284f470() {
   return (neuron0x2831060()*0.0060625);
}

double NNfunction_NG_7::synapse0x284f4b0() {
   return (neuron0x28315c0()*-0.0553319);
}

double NNfunction_NG_7::synapse0x284fd40() {
   return (neuron0x28317e0()*0.00734788);
}

double NNfunction_NG_7::synapse0x284fd80() {
   return (neuron0x2831b20()*0.0417898);
}

double NNfunction_NG_7::synapse0x284fdc0() {
   return (neuron0x2831e60()*0.00437811);
}

double NNfunction_NG_7::synapse0x284fe00() {
   return (neuron0x28321a0()*-0.000661016);
}

double NNfunction_NG_7::synapse0x284fe40() {
   return (neuron0x28324e0()*-0.0209995);
}

double NNfunction_NG_7::synapse0x284fe80() {
   return (neuron0x2832820()*-0.0284254);
}

double NNfunction_NG_7::synapse0x2850200() {
   return (neuron0x282dc60()*-0.00285324);
}

double NNfunction_NG_7::synapse0x2850240() {
   return (neuron0x282dfa0()*0.0411819);
}

double NNfunction_NG_7::synapse0x2850280() {
   return (neuron0x282e2e0()*-0.121896);
}

double NNfunction_NG_7::synapse0x28502c0() {
   return (neuron0x282e620()*2.95753);
}

double NNfunction_NG_7::synapse0x2850300() {
   return (neuron0x282e960()*0.00445618);
}

double NNfunction_NG_7::synapse0x2850340() {
   return (neuron0x282eca0()*0.0139047);
}

double NNfunction_NG_7::synapse0x2850380() {
   return (neuron0x282efe0()*0.0328527);
}

double NNfunction_NG_7::synapse0x28503c0() {
   return (neuron0x282f320()*-0.0191934);
}

double NNfunction_NG_7::synapse0x2850400() {
   return (neuron0x282f660()*-0.0022506);
}

double NNfunction_NG_7::synapse0x2850440() {
   return (neuron0x282f9a0()*0.00973328);
}

double NNfunction_NG_7::synapse0x2850480() {
   return (neuron0x282fce0()*0.000229672);
}

double NNfunction_NG_7::synapse0x28504c0() {
   return (neuron0x2830020()*1.13099);
}

double NNfunction_NG_7::synapse0x2850500() {
   return (neuron0x2830360()*-1.93726);
}

double NNfunction_NG_7::synapse0x2850540() {
   return (neuron0x28306a0()*-0.0197254);
}

double NNfunction_NG_7::synapse0x2850580() {
   return (neuron0x28309e0()*0.0168393);
}

double NNfunction_NG_7::synapse0x28505c0() {
   return (neuron0x2830d20()*0.0621432);
}

double NNfunction_NG_7::synapse0x2850050() {
   return (neuron0x2831060()*0.021527);
}

double NNfunction_NG_7::synapse0x2850090() {
   return (neuron0x28315c0()*0.0336499);
}

double NNfunction_NG_7::synapse0x2850710() {
   return (neuron0x28317e0()*0.0740366);
}

double NNfunction_NG_7::synapse0x2850750() {
   return (neuron0x2831b20()*0.0240413);
}

double NNfunction_NG_7::synapse0x2850790() {
   return (neuron0x2831e60()*0.000165574);
}

double NNfunction_NG_7::synapse0x28507d0() {
   return (neuron0x28321a0()*-0.0120096);
}

double NNfunction_NG_7::synapse0x2850810() {
   return (neuron0x28324e0()*-0.0195174);
}

double NNfunction_NG_7::synapse0x2850850() {
   return (neuron0x2832820()*0.0706748);
}

double NNfunction_NG_7::synapse0x2850bd0() {
   return (neuron0x282dc60()*0.0220812);
}

double NNfunction_NG_7::synapse0x2850c10() {
   return (neuron0x282dfa0()*-0.0192498);
}

double NNfunction_NG_7::synapse0x2850c50() {
   return (neuron0x282e2e0()*0.152237);
}

double NNfunction_NG_7::synapse0x2850c90() {
   return (neuron0x282e620()*0.00990673);
}

double NNfunction_NG_7::synapse0x2850cd0() {
   return (neuron0x282e960()*0.0513378);
}

double NNfunction_NG_7::synapse0x2850d10() {
   return (neuron0x282eca0()*-0.00492396);
}

double NNfunction_NG_7::synapse0x2850d50() {
   return (neuron0x282efe0()*0.0155245);
}

double NNfunction_NG_7::synapse0x2850d90() {
   return (neuron0x282f320()*0.0235668);
}

double NNfunction_NG_7::synapse0x2850dd0() {
   return (neuron0x282f660()*-0.014767);
}

double NNfunction_NG_7::synapse0x2850e10() {
   return (neuron0x282f9a0()*-0.0010069);
}

double NNfunction_NG_7::synapse0x2850e50() {
   return (neuron0x282fce0()*-0.0131652);
}

double NNfunction_NG_7::synapse0x2850e90() {
   return (neuron0x2830020()*0.0432525);
}

double NNfunction_NG_7::synapse0x2850ed0() {
   return (neuron0x2830360()*-0.0395129);
}

double NNfunction_NG_7::synapse0x2850f10() {
   return (neuron0x28306a0()*0.023145);
}

double NNfunction_NG_7::synapse0x2850f50() {
   return (neuron0x28309e0()*-0.00863634);
}

double NNfunction_NG_7::synapse0x2850f90() {
   return (neuron0x2830d20()*0.00346129);
}

double NNfunction_NG_7::synapse0x2850a20() {
   return (neuron0x2831060()*0.0194705);
}

double NNfunction_NG_7::synapse0x2850a60() {
   return (neuron0x28315c0()*0.01039);
}

double NNfunction_NG_7::synapse0x2841590() {
   return (neuron0x28317e0()*0.0148013);
}

double NNfunction_NG_7::synapse0x28415d0() {
   return (neuron0x2831b20()*0.000724202);
}

double NNfunction_NG_7::synapse0x2841610() {
   return (neuron0x2831e60()*-0.0284651);
}

double NNfunction_NG_7::synapse0x2841650() {
   return (neuron0x28321a0()*-0.00445942);
}

double NNfunction_NG_7::synapse0x2841690() {
   return (neuron0x28324e0()*-0.00174547);
}

double NNfunction_NG_7::synapse0x28416d0() {
   return (neuron0x2832820()*8.19115);
}

double NNfunction_NG_7::synapse0x2841a50() {
   return (neuron0x282dc60()*-0.0245885);
}

double NNfunction_NG_7::synapse0x2841a90() {
   return (neuron0x282dfa0()*0.0402703);
}

double NNfunction_NG_7::synapse0x2841ad0() {
   return (neuron0x282e2e0()*1.13906);
}

double NNfunction_NG_7::synapse0x2841b10() {
   return (neuron0x282e620()*7.48857);
}

double NNfunction_NG_7::synapse0x2841b50() {
   return (neuron0x282e960()*0.0119898);
}

double NNfunction_NG_7::synapse0x2841b90() {
   return (neuron0x282eca0()*0.018926);
}

double NNfunction_NG_7::synapse0x2841bd0() {
   return (neuron0x282efe0()*-0.0229356);
}

double NNfunction_NG_7::synapse0x2841c10() {
   return (neuron0x282f320()*-0.026191);
}

double NNfunction_NG_7::synapse0x2841c50() {
   return (neuron0x282f660()*-0.00877763);
}

double NNfunction_NG_7::synapse0x2841c90() {
   return (neuron0x282f9a0()*0.0196756);
}

double NNfunction_NG_7::synapse0x2841cd0() {
   return (neuron0x282fce0()*0.0231708);
}

double NNfunction_NG_7::synapse0x2841d10() {
   return (neuron0x2830020()*-0.0872504);
}

double NNfunction_NG_7::synapse0x2841d50() {
   return (neuron0x2830360()*-0.32365);
}

double NNfunction_NG_7::synapse0x2841d90() {
   return (neuron0x28306a0()*-0.0424997);
}

double NNfunction_NG_7::synapse0x2841dd0() {
   return (neuron0x28309e0()*-0.129991);
}

double NNfunction_NG_7::synapse0x2841e10() {
   return (neuron0x2830d20()*-0.138705);
}

double NNfunction_NG_7::synapse0x28418a0() {
   return (neuron0x2831060()*0.0378764);
}

double NNfunction_NG_7::synapse0x28418e0() {
   return (neuron0x28315c0()*-0.146708);
}

double NNfunction_NG_7::synapse0x2841f60() {
   return (neuron0x28317e0()*-0.0897474);
}

double NNfunction_NG_7::synapse0x2841fa0() {
   return (neuron0x2831b20()*0.0785974);
}

double NNfunction_NG_7::synapse0x2841fe0() {
   return (neuron0x2831e60()*-0.0386071);
}

double NNfunction_NG_7::synapse0x2842020() {
   return (neuron0x28321a0()*-0.0779212);
}

double NNfunction_NG_7::synapse0x2842060() {
   return (neuron0x28324e0()*-0.0316865);
}

double NNfunction_NG_7::synapse0x28420a0() {
   return (neuron0x2832820()*0.0177992);
}

double NNfunction_NG_7::synapse0x2842420() {
   return (neuron0x282dc60()*-0.104647);
}

double NNfunction_NG_7::synapse0x2842460() {
   return (neuron0x282dfa0()*-0.0957266);
}

double NNfunction_NG_7::synapse0x28424a0() {
   return (neuron0x282e2e0()*-1.52405);
}

double NNfunction_NG_7::synapse0x28424e0() {
   return (neuron0x282e620()*0.602455);
}

double NNfunction_NG_7::synapse0x2842520() {
   return (neuron0x282e960()*0.0794507);
}

double NNfunction_NG_7::synapse0x2842560() {
   return (neuron0x282eca0()*0.230787);
}

double NNfunction_NG_7::synapse0x28425a0() {
   return (neuron0x282efe0()*-0.0671968);
}

double NNfunction_NG_7::synapse0x28425e0() {
   return (neuron0x282f320()*-0.0421368);
}

double NNfunction_NG_7::synapse0x2842620() {
   return (neuron0x282f660()*0.127012);
}

double NNfunction_NG_7::synapse0x2842660() {
   return (neuron0x282f9a0()*-0.00405168);
}

double NNfunction_NG_7::synapse0x28426a0() {
   return (neuron0x282fce0()*0.120583);
}

double NNfunction_NG_7::synapse0x28426e0() {
   return (neuron0x2830020()*-1.77443);
}

double NNfunction_NG_7::synapse0x2842720() {
   return (neuron0x2830360()*0.146521);
}

double NNfunction_NG_7::synapse0x2842760() {
   return (neuron0x28306a0()*0.00183324);
}

double NNfunction_NG_7::synapse0x28427a0() {
   return (neuron0x28309e0()*0.147532);
}

double NNfunction_NG_7::synapse0x28427e0() {
   return (neuron0x2830d20()*-0.18994);
}

double NNfunction_NG_7::synapse0x2842270() {
   return (neuron0x2831060()*-0.0265217);
}

double NNfunction_NG_7::synapse0x28422b0() {
   return (neuron0x28315c0()*-0.0317571);
}

double NNfunction_NG_7::synapse0x2842930() {
   return (neuron0x28317e0()*-0.037116);
}

double NNfunction_NG_7::synapse0x2842970() {
   return (neuron0x2831b20()*0.0104107);
}

double NNfunction_NG_7::synapse0x28429b0() {
   return (neuron0x2831e60()*0.118659);
}

double NNfunction_NG_7::synapse0x28429f0() {
   return (neuron0x28321a0()*-0.0988879);
}

double NNfunction_NG_7::synapse0x2842a30() {
   return (neuron0x28324e0()*0.0752754);
}

double NNfunction_NG_7::synapse0x2842a70() {
   return (neuron0x2832820()*-0.624408);
}

double NNfunction_NG_7::synapse0x2842df0() {
   return (neuron0x282dc60()*-0.0264298);
}

double NNfunction_NG_7::synapse0x2842e30() {
   return (neuron0x282dfa0()*0.00206255);
}

double NNfunction_NG_7::synapse0x2842e70() {
   return (neuron0x282e2e0()*0.109239);
}

double NNfunction_NG_7::synapse0x2842eb0() {
   return (neuron0x282e620()*0.957294);
}

double NNfunction_NG_7::synapse0x2842ef0() {
   return (neuron0x282e960()*-0.0732505);
}

double NNfunction_NG_7::synapse0x2842f30() {
   return (neuron0x282eca0()*-0.0284327);
}

double NNfunction_NG_7::synapse0x2842f70() {
   return (neuron0x282efe0()*-0.0511339);
}

double NNfunction_NG_7::synapse0x2842fb0() {
   return (neuron0x282f320()*-0.0101924);
}

double NNfunction_NG_7::synapse0x2842ff0() {
   return (neuron0x282f660()*0.00067948);
}

double NNfunction_NG_7::synapse0x2843030() {
   return (neuron0x282f9a0()*0.00554215);
}

double NNfunction_NG_7::synapse0x2843070() {
   return (neuron0x282fce0()*-0.0233612);
}

double NNfunction_NG_7::synapse0x28430b0() {
   return (neuron0x2830020()*-4.2078);
}

double NNfunction_NG_7::synapse0x28430f0() {
   return (neuron0x2830360()*0.226398);
}

double NNfunction_NG_7::synapse0x2843130() {
   return (neuron0x28306a0()*-0.0766653);
}

double NNfunction_NG_7::synapse0x2843170() {
   return (neuron0x28309e0()*0.0855594);
}

double NNfunction_NG_7::synapse0x28431b0() {
   return (neuron0x2830d20()*0.0324536);
}

double NNfunction_NG_7::synapse0x2842c40() {
   return (neuron0x2831060()*-0.0719284);
}

double NNfunction_NG_7::synapse0x2842c80() {
   return (neuron0x28315c0()*0.075226);
}

double NNfunction_NG_7::synapse0x2843300() {
   return (neuron0x28317e0()*0.055352);
}

double NNfunction_NG_7::synapse0x2843340() {
   return (neuron0x2831b20()*0.0297612);
}

double NNfunction_NG_7::synapse0x2843380() {
   return (neuron0x2831e60()*-0.0217061);
}

double NNfunction_NG_7::synapse0x28433c0() {
   return (neuron0x28321a0()*-0.0268504);
}

double NNfunction_NG_7::synapse0x2843400() {
   return (neuron0x28324e0()*0.0331195);
}

double NNfunction_NG_7::synapse0x2843440() {
   return (neuron0x2832820()*0.137906);
}

double NNfunction_NG_7::synapse0x2855310() {
   return (neuron0x282dc60()*-0.360783);
}

double NNfunction_NG_7::synapse0x2855350() {
   return (neuron0x282dfa0()*0.0987785);
}

double NNfunction_NG_7::synapse0x2855390() {
   return (neuron0x282e2e0()*0.38558);
}

double NNfunction_NG_7::synapse0x28553d0() {
   return (neuron0x282e620()*-0.138761);
}

double NNfunction_NG_7::synapse0x2855410() {
   return (neuron0x282e960()*-0.272949);
}

double NNfunction_NG_7::synapse0x2855450() {
   return (neuron0x282eca0()*-0.0585884);
}

double NNfunction_NG_7::synapse0x2855490() {
   return (neuron0x282efe0()*-0.191746);
}

double NNfunction_NG_7::synapse0x28554d0() {
   return (neuron0x282f320()*-0.0264647);
}

double NNfunction_NG_7::synapse0x2855510() {
   return (neuron0x282f660()*-0.00391443);
}

double NNfunction_NG_7::synapse0x2855550() {
   return (neuron0x282f9a0()*-0.0733506);
}

double NNfunction_NG_7::synapse0x2855590() {
   return (neuron0x282fce0()*0.146508);
}

double NNfunction_NG_7::synapse0x28555d0() {
   return (neuron0x2830020()*0.0604481);
}

double NNfunction_NG_7::synapse0x2855610() {
   return (neuron0x2830360()*0.417775);
}

double NNfunction_NG_7::synapse0x2855650() {
   return (neuron0x28306a0()*0.176848);
}

double NNfunction_NG_7::synapse0x2855690() {
   return (neuron0x28309e0()*0.237216);
}

double NNfunction_NG_7::synapse0x28556d0() {
   return (neuron0x2830d20()*0.506596);
}

double NNfunction_NG_7::synapse0x2843480() {
   return (neuron0x2831060()*0.275103);
}

double NNfunction_NG_7::synapse0x28434c0() {
   return (neuron0x28315c0()*0.296981);
}

double NNfunction_NG_7::synapse0x2855820() {
   return (neuron0x28317e0()*0.294181);
}

double NNfunction_NG_7::synapse0x2855860() {
   return (neuron0x2831b20()*-0.268926);
}

double NNfunction_NG_7::synapse0x28558a0() {
   return (neuron0x2831e60()*0.18961);
}

double NNfunction_NG_7::synapse0x28558e0() {
   return (neuron0x28321a0()*-0.15039);
}

double NNfunction_NG_7::synapse0x2855920() {
   return (neuron0x28324e0()*0.0865156);
}

double NNfunction_NG_7::synapse0x2855960() {
   return (neuron0x2832820()*-0.0568545);
}

double NNfunction_NG_7::synapse0x2855ce0() {
   return (neuron0x282dc60()*-0.00782946);
}

double NNfunction_NG_7::synapse0x2855d20() {
   return (neuron0x282dfa0()*0.0262395);
}

double NNfunction_NG_7::synapse0x2855d60() {
   return (neuron0x282e2e0()*-0.376973);
}

double NNfunction_NG_7::synapse0x2855da0() {
   return (neuron0x282e620()*-0.794644);
}

double NNfunction_NG_7::synapse0x2855de0() {
   return (neuron0x282e960()*0.000623795);
}

double NNfunction_NG_7::synapse0x2855e20() {
   return (neuron0x282eca0()*-0.0328032);
}

double NNfunction_NG_7::synapse0x2855e60() {
   return (neuron0x282efe0()*-0.0649427);
}

double NNfunction_NG_7::synapse0x2855ea0() {
   return (neuron0x282f320()*-0.0278569);
}

double NNfunction_NG_7::synapse0x2855ee0() {
   return (neuron0x282f660()*-0.0346667);
}

double NNfunction_NG_7::synapse0x2855f20() {
   return (neuron0x282f9a0()*0.0463895);
}

double NNfunction_NG_7::synapse0x2855f60() {
   return (neuron0x282fce0()*0.0117845);
}

double NNfunction_NG_7::synapse0x2855fa0() {
   return (neuron0x2830020()*-1.45704);
}

double NNfunction_NG_7::synapse0x2855fe0() {
   return (neuron0x2830360()*0.55076);
}

double NNfunction_NG_7::synapse0x2856020() {
   return (neuron0x28306a0()*-0.0644506);
}

double NNfunction_NG_7::synapse0x2856060() {
   return (neuron0x28309e0()*-0.110969);
}

double NNfunction_NG_7::synapse0x28560a0() {
   return (neuron0x2830d20()*0.00228255);
}

double NNfunction_NG_7::synapse0x2855b30() {
   return (neuron0x2831060()*0.0297771);
}

double NNfunction_NG_7::synapse0x2855b70() {
   return (neuron0x28315c0()*0.0143342);
}

double NNfunction_NG_7::synapse0x28561f0() {
   return (neuron0x28317e0()*0.0841529);
}

double NNfunction_NG_7::synapse0x2856230() {
   return (neuron0x2831b20()*0.0903378);
}

double NNfunction_NG_7::synapse0x2856270() {
   return (neuron0x2831e60()*-0.070291);
}

double NNfunction_NG_7::synapse0x28562b0() {
   return (neuron0x28321a0()*0.0207972);
}

double NNfunction_NG_7::synapse0x28562f0() {
   return (neuron0x28324e0()*-0.0172979);
}

double NNfunction_NG_7::synapse0x2856330() {
   return (neuron0x2832820()*0.379742);
}

double NNfunction_NG_7::synapse0x28566b0() {
   return (neuron0x282dc60()*-0.0694817);
}

double NNfunction_NG_7::synapse0x28566f0() {
   return (neuron0x282dfa0()*0.0296389);
}

double NNfunction_NG_7::synapse0x2856730() {
   return (neuron0x282e2e0()*0.284148);
}

double NNfunction_NG_7::synapse0x2856770() {
   return (neuron0x282e620()*0.322802);
}

double NNfunction_NG_7::synapse0x28567b0() {
   return (neuron0x282e960()*-0.196284);
}

double NNfunction_NG_7::synapse0x28567f0() {
   return (neuron0x282eca0()*-0.033021);
}

double NNfunction_NG_7::synapse0x2856830() {
   return (neuron0x282efe0()*-0.0733449);
}

double NNfunction_NG_7::synapse0x2856870() {
   return (neuron0x282f320()*-0.0781963);
}

double NNfunction_NG_7::synapse0x28568b0() {
   return (neuron0x282f660()*-0.0600694);
}

double NNfunction_NG_7::synapse0x28568f0() {
   return (neuron0x282f9a0()*-0.0113845);
}

double NNfunction_NG_7::synapse0x2856930() {
   return (neuron0x282fce0()*0.0260997);
}

double NNfunction_NG_7::synapse0x2856970() {
   return (neuron0x2830020()*0.0235714);
}

double NNfunction_NG_7::synapse0x28569b0() {
   return (neuron0x2830360()*-1.8048);
}

double NNfunction_NG_7::synapse0x28569f0() {
   return (neuron0x28306a0()*-0.164728);
}

double NNfunction_NG_7::synapse0x2856a30() {
   return (neuron0x28309e0()*0.0731092);
}

double NNfunction_NG_7::synapse0x2856a70() {
   return (neuron0x2830d20()*0.0605948);
}

double NNfunction_NG_7::synapse0x2856500() {
   return (neuron0x2831060()*-0.00576431);
}

double NNfunction_NG_7::synapse0x2856540() {
   return (neuron0x28315c0()*0.052235);
}

double NNfunction_NG_7::synapse0x2856bc0() {
   return (neuron0x28317e0()*0.0667259);
}

double NNfunction_NG_7::synapse0x2856c00() {
   return (neuron0x2831b20()*-0.0422943);
}

double NNfunction_NG_7::synapse0x2856c40() {
   return (neuron0x2831e60()*-0.116304);
}

double NNfunction_NG_7::synapse0x2856c80() {
   return (neuron0x28321a0()*-0.0254851);
}

double NNfunction_NG_7::synapse0x2856cc0() {
   return (neuron0x28324e0()*-0.0836167);
}

double NNfunction_NG_7::synapse0x2856d00() {
   return (neuron0x2832820()*0.304724);
}

double NNfunction_NG_7::synapse0x2857080() {
   return (neuron0x282dc60()*-0.294977);
}

double NNfunction_NG_7::synapse0x28570c0() {
   return (neuron0x282dfa0()*-0.200841);
}

double NNfunction_NG_7::synapse0x2857100() {
   return (neuron0x282e2e0()*0.260217);
}

double NNfunction_NG_7::synapse0x2857140() {
   return (neuron0x282e620()*0.738125);
}

double NNfunction_NG_7::synapse0x2857180() {
   return (neuron0x282e960()*-0.180068);
}

double NNfunction_NG_7::synapse0x28571c0() {
   return (neuron0x282eca0()*-0.080349);
}

double NNfunction_NG_7::synapse0x2857200() {
   return (neuron0x282efe0()*-0.0622228);
}

double NNfunction_NG_7::synapse0x2857240() {
   return (neuron0x282f320()*-0.117056);
}

double NNfunction_NG_7::synapse0x2857280() {
   return (neuron0x282f660()*-0.0743858);
}

double NNfunction_NG_7::synapse0x28572c0() {
   return (neuron0x282f9a0()*0.178295);
}

double NNfunction_NG_7::synapse0x2857300() {
   return (neuron0x282fce0()*-0.0833669);
}

double NNfunction_NG_7::synapse0x2857340() {
   return (neuron0x2830020()*-0.461208);
}

double NNfunction_NG_7::synapse0x2857380() {
   return (neuron0x2830360()*-0.378874);
}

double NNfunction_NG_7::synapse0x28573c0() {
   return (neuron0x28306a0()*0.397635);
}

double NNfunction_NG_7::synapse0x2857400() {
   return (neuron0x28309e0()*0.234077);
}

double NNfunction_NG_7::synapse0x2857440() {
   return (neuron0x2830d20()*0.189307);
}

double NNfunction_NG_7::synapse0x2856ed0() {
   return (neuron0x2831060()*0.235313);
}

double NNfunction_NG_7::synapse0x2856f10() {
   return (neuron0x28315c0()*0.139918);
}

double NNfunction_NG_7::synapse0x2857590() {
   return (neuron0x28317e0()*0.233205);
}

double NNfunction_NG_7::synapse0x28575d0() {
   return (neuron0x2831b20()*0.246454);
}

double NNfunction_NG_7::synapse0x2857610() {
   return (neuron0x2831e60()*0.239072);
}

double NNfunction_NG_7::synapse0x2857650() {
   return (neuron0x28321a0()*-0.171661);
}

double NNfunction_NG_7::synapse0x2857690() {
   return (neuron0x28324e0()*0.121534);
}

double NNfunction_NG_7::synapse0x28576d0() {
   return (neuron0x2832820()*0.0533062);
}

double NNfunction_NG_7::synapse0x2833c70() {
   return (neuron0x2832cc0()*1.08298);
}

double NNfunction_NG_7::synapse0x2833cb0() {
   return (neuron0x28335d0()*0.924337);
}

double NNfunction_NG_7::synapse0x2835180() {
   return (neuron0x28340b0()*1.57771);
}

double NNfunction_NG_7::synapse0x28351c0() {
   return (neuron0x25ed940()*-0.710595);
}

double NNfunction_NG_7::synapse0x2835b50() {
   return (neuron0x2834ed0()*0.0380774);
}

double NNfunction_NG_7::synapse0x2835b90() {
   return (neuron0x28358a0()*1.48097);
}

double NNfunction_NG_7::synapse0x2836920() {
   return (neuron0x2836670()*1.75763);
}

double NNfunction_NG_7::synapse0x2836960() {
   return (neuron0x2837040()*1.02136);
}

double NNfunction_NG_7::synapse0x28372f0() {
   return (neuron0x2837a10()*-0.696818);
}

double NNfunction_NG_7::synapse0x2837330() {
   return (neuron0x28384f0()*-0.0109036);
}

double NNfunction_NG_7::synapse0x2837cc0() {
   return (neuron0x2838ec0()*-0.171148);
}

double NNfunction_NG_7::synapse0x2837d00() {
   return (neuron0x2835fa0()*-0.817084);
}

double NNfunction_NG_7::synapse0x28387a0() {
   return (neuron0x283aa70()*1.63344);
}

double NNfunction_NG_7::synapse0x28387e0() {
   return (neuron0x283b440()*1.06229);
}

double NNfunction_NG_7::synapse0x2839170() {
   return (neuron0x283be10()*-2.83416);
}

double NNfunction_NG_7::synapse0x28391b0() {
   return (neuron0x283c7e0()*-0.943383);
}

double NNfunction_NG_7::synapse0x2836250() {
   return (neuron0x283e5f0()*0.431937);
}

double NNfunction_NG_7::synapse0x2836290() {
   return (neuron0x283e8d0()*-1.51785);
}

double NNfunction_NG_7::synapse0x283ad20() {
   return (neuron0x283f2a0()*-0.318736);
}

double NNfunction_NG_7::synapse0x283ad60() {
   return (neuron0x283fc70()*0.483071);
}

double NNfunction_NG_7::synapse0x283b6f0() {
   return (neuron0x2840640()*0.885181);
}

double NNfunction_NG_7::synapse0x283b730() {
   return (neuron0x2841010()*-0.094879);
}

double NNfunction_NG_7::synapse0x283c0c0() {
   return (neuron0x2839b60()*-0.161349);
}

double NNfunction_NG_7::synapse0x283c100() {
   return (neuron0x283a530()*-0.523496);
}

double NNfunction_NG_7::synapse0x283ca90() {
   return (neuron0x2843da0()*1.00237);
}

double NNfunction_NG_7::synapse0x283cad0() {
   return (neuron0x2844770()*0.566068);
}

double NNfunction_NG_7::synapse0x2830c00() {
   return (neuron0x2845140()*-0.783395);
}

double NNfunction_NG_7::synapse0x2830c40() {
   return (neuron0x2845b10()*0.343638);
}

double NNfunction_NG_7::synapse0x283eb80() {
   return (neuron0x28464e0()*1.38617);
}

double NNfunction_NG_7::synapse0x283ebc0() {
   return (neuron0x2846eb0()*0.139437);
}

double NNfunction_NG_7::synapse0x283f550() {
   return (neuron0x2847880()*0.201736);
}

double NNfunction_NG_7::synapse0x283f590() {
   return (neuron0x2848250()*-0.650629);
}

double NNfunction_NG_7::synapse0x283ff20() {
   return (neuron0x283e2e0()*-0.797756);
}

double NNfunction_NG_7::synapse0x283ff60() {
   return (neuron0x284ae30()*-0.901158);
}

double NNfunction_NG_7::synapse0x28408f0() {
   return (neuron0x284b800()*-0.413635);
}

double NNfunction_NG_7::synapse0x2840930() {
   return (neuron0x284c1d0()*0.902145);
}

double NNfunction_NG_7::synapse0x28412c0() {
   return (neuron0x284cba0()*-0.139516);
}

double NNfunction_NG_7::synapse0x2841300() {
   return (neuron0x284d570()*0.480549);
}

double NNfunction_NG_7::synapse0x2839e10() {
   return (neuron0x284df40()*1.00814);
}

double NNfunction_NG_7::synapse0x2839e50() {
   return (neuron0x284e910()*-0.87654);
}

double NNfunction_NG_7::synapse0x28436c0() {
   return (neuron0x284f2e0()*-0.0644492);
}

double NNfunction_NG_7::synapse0x2843700() {
   return (neuron0x284fec0()*-0.390188);
}

double NNfunction_NG_7::synapse0x2844050() {
   return (neuron0x2850890()*1.25197);
}

double NNfunction_NG_7::synapse0x2844090() {
   return (neuron0x2841710()*-0.243247);
}

double NNfunction_NG_7::synapse0x2844a20() {
   return (neuron0x28420e0()*-0.46351);
}

double NNfunction_NG_7::synapse0x2844a60() {
   return (neuron0x2842ab0()*-1.06721);
}

double NNfunction_NG_7::synapse0x28453f0() {
   return (neuron0x28550f0()*0.667599);
}

double NNfunction_NG_7::synapse0x2845430() {
   return (neuron0x28559a0()*-0.872645);
}

double NNfunction_NG_7::synapse0x2845dc0() {
   return (neuron0x2856370()*-1.00378);
}

double NNfunction_NG_7::synapse0x2845e00() {
   return (neuron0x2856d40()*-0.506125);
}

double NNfunction_NG_7::synapse0x2848500() {
   return (neuron0x2832cc0()*0.040677);
}

double NNfunction_NG_7::synapse0x2848540() {
   return (neuron0x28335d0()*-0.642407);
}

double NNfunction_NG_7::synapse0x283dac0() {
   return (neuron0x28340b0()*-1.47772);
}

double NNfunction_NG_7::synapse0x283db00() {
   return (neuron0x25ed940()*-0.0278028);
}

double NNfunction_NG_7::synapse0x284b0e0() {
   return (neuron0x2834ed0()*1.02261);
}

double NNfunction_NG_7::synapse0x284b120() {
   return (neuron0x28358a0()*0.25886);
}

double NNfunction_NG_7::synapse0x284bab0() {
   return (neuron0x2836670()*-0.55805);
}

double NNfunction_NG_7::synapse0x284baf0() {
   return (neuron0x2837040()*-0.405731);
}

double NNfunction_NG_7::synapse0x284c480() {
   return (neuron0x2837a10()*0.692034);
}

double NNfunction_NG_7::synapse0x284c4c0() {
   return (neuron0x28384f0()*-1.92581);
}

double NNfunction_NG_7::synapse0x284ce50() {
   return (neuron0x2838ec0()*-1.09087);
}

double NNfunction_NG_7::synapse0x284ce90() {
   return (neuron0x2835fa0()*0.18642);
}

double NNfunction_NG_7::synapse0x284d820() {
   return (neuron0x283aa70()*0.588879);
}

double NNfunction_NG_7::synapse0x284d860() {
   return (neuron0x283b440()*-0.715357);
}

double NNfunction_NG_7::synapse0x284e1f0() {
   return (neuron0x283be10()*0.0957706);
}

double NNfunction_NG_7::synapse0x284e230() {
   return (neuron0x283c7e0()*0.115902);
}

double NNfunction_NG_7::synapse0x284ebc0() {
   return (neuron0x283e5f0()*-0.0759192);
}

double NNfunction_NG_7::synapse0x284ec00() {
   return (neuron0x283e8d0()*-0.171052);
}

double NNfunction_NG_7::synapse0x284f590() {
   return (neuron0x283f2a0()*0.0950349);
}

double NNfunction_NG_7::synapse0x284f5d0() {
   return (neuron0x283fc70()*-0.118393);
}

double NNfunction_NG_7::synapse0x2850170() {
   return (neuron0x2840640()*0.502441);
}

double NNfunction_NG_7::synapse0x28501b0() {
   return (neuron0x2841010()*2.27419);
}

double NNfunction_NG_7::synapse0x2850b40() {
   return (neuron0x2839b60()*-0.366825);
}

double NNfunction_NG_7::synapse0x2850b80() {
   return (neuron0x283a530()*0.439659);
}

double NNfunction_NG_7::synapse0x28419c0() {
   return (neuron0x2843da0()*-0.257944);
}

double NNfunction_NG_7::synapse0x2841a00() {
   return (neuron0x2844770()*-0.0684346);
}

double NNfunction_NG_7::synapse0x2842390() {
   return (neuron0x2845140()*0.385791);
}

double NNfunction_NG_7::synapse0x28423d0() {
   return (neuron0x2845b10()*-0.895143);
}

double NNfunction_NG_7::synapse0x2842d60() {
   return (neuron0x28464e0()*-0.759351);
}

double NNfunction_NG_7::synapse0x2842da0() {
   return (neuron0x2846eb0()*-0.0600018);
}

double NNfunction_NG_7::synapse0x2855280() {
   return (neuron0x2847880()*-0.823229);
}

double NNfunction_NG_7::synapse0x28552c0() {
   return (neuron0x2848250()*0.0566496);
}

double NNfunction_NG_7::synapse0x2855c50() {
   return (neuron0x283e2e0()*-0.123953);
}

double NNfunction_NG_7::synapse0x2855c90() {
   return (neuron0x284ae30()*0.217179);
}

double NNfunction_NG_7::synapse0x2856620() {
   return (neuron0x284b800()*-0.863266);
}

double NNfunction_NG_7::synapse0x2856660() {
   return (neuron0x284c1d0()*0.140954);
}

double NNfunction_NG_7::synapse0x2856ff0() {
   return (neuron0x284cba0()*-1.39829);
}

double NNfunction_NG_7::synapse0x2857030() {
   return (neuron0x284d570()*-0.0258044);
}

double NNfunction_NG_7::synapse0x2832ee0() {
   return (neuron0x284df40()*-0.857619);
}

double NNfunction_NG_7::synapse0x2832f20() {
   return (neuron0x284e910()*-0.366915);
}

double NNfunction_NG_7::synapse0x2846790() {
   return (neuron0x284f2e0()*0.519638);
}

double NNfunction_NG_7::synapse0x28467d0() {
   return (neuron0x284fec0()*-0.779696);
}

double NNfunction_NG_7::synapse0x2857710() {
   return (neuron0x2850890()*1.15555);
}

double NNfunction_NG_7::synapse0x2857750() {
   return (neuron0x2841710()*-0.367565);
}

double NNfunction_NG_7::synapse0x2857790() {
   return (neuron0x28420e0()*0.569706);
}

double NNfunction_NG_7::synapse0x28577d0() {
   return (neuron0x2842ab0()*-0.639357);
}

double NNfunction_NG_7::synapse0x285e680() {
   return (neuron0x28550f0()*-0.00748409);
}

double NNfunction_NG_7::synapse0x285e6c0() {
   return (neuron0x28559a0()*-0.289889);
}

double NNfunction_NG_7::synapse0x285e700() {
   return (neuron0x2856370()*0.557138);
}

double NNfunction_NG_7::synapse0x285e740() {
   return (neuron0x2856d40()*-0.073824);
}

double NNfunction_NG_7::synapse0x285eac0() {
   return (neuron0x2832cc0()*2.46509);
}

double NNfunction_NG_7::synapse0x285eb00() {
   return (neuron0x28335d0()*0.0107965);
}

double NNfunction_NG_7::synapse0x285eb40() {
   return (neuron0x28340b0()*-0.644301);
}

double NNfunction_NG_7::synapse0x285eb80() {
   return (neuron0x25ed940()*-0.00608808);
}

double NNfunction_NG_7::synapse0x285ebc0() {
   return (neuron0x2834ed0()*-1.13909);
}

double NNfunction_NG_7::synapse0x285ec00() {
   return (neuron0x28358a0()*-0.831904);
}

double NNfunction_NG_7::synapse0x285ec40() {
   return (neuron0x2836670()*-0.0430321);
}

double NNfunction_NG_7::synapse0x285ec80() {
   return (neuron0x2837040()*-0.13025);
}

double NNfunction_NG_7::synapse0x285ecc0() {
   return (neuron0x2837a10()*-1.13848);
}

double NNfunction_NG_7::synapse0x285ed00() {
   return (neuron0x28384f0()*0.271053);
}

double NNfunction_NG_7::synapse0x285ed40() {
   return (neuron0x2838ec0()*1.13857);
}

double NNfunction_NG_7::synapse0x285ed80() {
   return (neuron0x2835fa0()*-0.10844);
}

double NNfunction_NG_7::synapse0x285edc0() {
   return (neuron0x283aa70()*-0.915828);
}

double NNfunction_NG_7::synapse0x285ee00() {
   return (neuron0x283b440()*0.24293);
}

double NNfunction_NG_7::synapse0x285ee40() {
   return (neuron0x283be10()*-1.30208);
}

double NNfunction_NG_7::synapse0x285ee80() {
   return (neuron0x283c7e0()*-0.147434);
}

double NNfunction_NG_7::synapse0x285e910() {
   return (neuron0x283e5f0()*0.0322444);
}

double NNfunction_NG_7::synapse0x285e950() {
   return (neuron0x283e8d0()*-0.247785);
}

double NNfunction_NG_7::synapse0x285efd0() {
   return (neuron0x283f2a0()*-0.00228171);
}

double NNfunction_NG_7::synapse0x285f010() {
   return (neuron0x283fc70()*0.0154432);
}

double NNfunction_NG_7::synapse0x285f050() {
   return (neuron0x2840640()*1.09277);
}

double NNfunction_NG_7::synapse0x285f090() {
   return (neuron0x2841010()*0.88912);
}

double NNfunction_NG_7::synapse0x285f0d0() {
   return (neuron0x2839b60()*0.0758026);
}

double NNfunction_NG_7::synapse0x285f110() {
   return (neuron0x283a530()*-0.288718);
}

double NNfunction_NG_7::synapse0x285f150() {
   return (neuron0x2843da0()*1.36709);
}

double NNfunction_NG_7::synapse0x285f190() {
   return (neuron0x2844770()*0.0158705);
}

double NNfunction_NG_7::synapse0x285f1d0() {
   return (neuron0x2845140()*0.187129);
}

double NNfunction_NG_7::synapse0x285f210() {
   return (neuron0x2845b10()*-0.951855);
}

double NNfunction_NG_7::synapse0x285f250() {
   return (neuron0x28464e0()*0.172202);
}

double NNfunction_NG_7::synapse0x285f290() {
   return (neuron0x2846eb0()*-0.708205);
}

double NNfunction_NG_7::synapse0x285f2d0() {
   return (neuron0x2847880()*0.741849);
}

double NNfunction_NG_7::synapse0x285f310() {
   return (neuron0x2848250()*-0.026576);
}

double NNfunction_NG_7::synapse0x285eec0() {
   return (neuron0x283e2e0()*0.300178);
}

double NNfunction_NG_7::synapse0x285ef00() {
   return (neuron0x284ae30()*1.2405);
}

double NNfunction_NG_7::synapse0x285ef40() {
   return (neuron0x284b800()*-1.01243);
}

double NNfunction_NG_7::synapse0x285ef80() {
   return (neuron0x284c1d0()*0.516584);
}

double NNfunction_NG_7::synapse0x285f560() {
   return (neuron0x284cba0()*-0.124008);
}

double NNfunction_NG_7::synapse0x285f5a0() {
   return (neuron0x284d570()*0.000875747);
}

double NNfunction_NG_7::synapse0x285f5e0() {
   return (neuron0x284df40()*0.114497);
}

double NNfunction_NG_7::synapse0x285f620() {
   return (neuron0x284e910()*-0.526722);
}

double NNfunction_NG_7::synapse0x285f660() {
   return (neuron0x284f2e0()*-0.774832);
}

double NNfunction_NG_7::synapse0x285f6a0() {
   return (neuron0x284fec0()*-0.621496);
}

double NNfunction_NG_7::synapse0x285f6e0() {
   return (neuron0x2850890()*-0.783933);
}

double NNfunction_NG_7::synapse0x285f720() {
   return (neuron0x2841710()*0.44525);
}

double NNfunction_NG_7::synapse0x285f760() {
   return (neuron0x28420e0()*-0.00508442);
}

double NNfunction_NG_7::synapse0x285f7a0() {
   return (neuron0x2842ab0()*0.601348);
}

double NNfunction_NG_7::synapse0x285f7e0() {
   return (neuron0x28550f0()*0.00396334);
}

double NNfunction_NG_7::synapse0x285f820() {
   return (neuron0x28559a0()*-0.0552304);
}

double NNfunction_NG_7::synapse0x285f860() {
   return (neuron0x2856370()*-0.00407615);
}

double NNfunction_NG_7::synapse0x285f8a0() {
   return (neuron0x2856d40()*0.0887954);
}

double NNfunction_NG_7::synapse0x285fc20() {
   return (neuron0x2832cc0()*2.30327);
}

double NNfunction_NG_7::synapse0x285fc60() {
   return (neuron0x28335d0()*-0.477549);
}

double NNfunction_NG_7::synapse0x285fca0() {
   return (neuron0x28340b0()*-1.89852);
}

double NNfunction_NG_7::synapse0x285fce0() {
   return (neuron0x25ed940()*-0.0974344);
}

double NNfunction_NG_7::synapse0x285fd20() {
   return (neuron0x2834ed0()*-0.281296);
}

double NNfunction_NG_7::synapse0x285fd60() {
   return (neuron0x28358a0()*3.16006);
}

double NNfunction_NG_7::synapse0x285fda0() {
   return (neuron0x2836670()*-0.378497);
}

double NNfunction_NG_7::synapse0x285fde0() {
   return (neuron0x2837040()*-0.18243);
}

double NNfunction_NG_7::synapse0x285fe20() {
   return (neuron0x2837a10()*0.951346);
}

double NNfunction_NG_7::synapse0x285fe60() {
   return (neuron0x28384f0()*0.0357047);
}

double NNfunction_NG_7::synapse0x285fea0() {
   return (neuron0x2838ec0()*1.61843);
}

double NNfunction_NG_7::synapse0x285fee0() {
   return (neuron0x2835fa0()*0.159635);
}

double NNfunction_NG_7::synapse0x285ff20() {
   return (neuron0x283aa70()*0.189883);
}

double NNfunction_NG_7::synapse0x285ff60() {
   return (neuron0x283b440()*-2.28379);
}

double NNfunction_NG_7::synapse0x285ffa0() {
   return (neuron0x283be10()*1.32085);
}

double NNfunction_NG_7::synapse0x285ffe0() {
   return (neuron0x283c7e0()*0.113293);
}

double NNfunction_NG_7::synapse0x285fa70() {
   return (neuron0x283e5f0()*-0.0247501);
}

double NNfunction_NG_7::synapse0x285fab0() {
   return (neuron0x283e8d0()*-1.06983);
}

double NNfunction_NG_7::synapse0x2860130() {
   return (neuron0x283f2a0()*0.0291956);
}

double NNfunction_NG_7::synapse0x2860170() {
   return (neuron0x283fc70()*0.0936142);
}

double NNfunction_NG_7::synapse0x28601b0() {
   return (neuron0x2840640()*0.985349);
}

double NNfunction_NG_7::synapse0x28601f0() {
   return (neuron0x2841010()*-1.32338);
}

double NNfunction_NG_7::synapse0x2860230() {
   return (neuron0x2839b60()*-0.420508);
}

double NNfunction_NG_7::synapse0x2860270() {
   return (neuron0x283a530()*0.170695);
}

double NNfunction_NG_7::synapse0x28602b0() {
   return (neuron0x2843da0()*-0.88724);
}

double NNfunction_NG_7::synapse0x28602f0() {
   return (neuron0x2844770()*-0.154156);
}

double NNfunction_NG_7::synapse0x2860330() {
   return (neuron0x2845140()*0.673784);
}

double NNfunction_NG_7::synapse0x2860370() {
   return (neuron0x2845b10()*-0.765237);
}

double NNfunction_NG_7::synapse0x28603b0() {
   return (neuron0x28464e0()*-1.69039);
}

double NNfunction_NG_7::synapse0x28603f0() {
   return (neuron0x2846eb0()*-0.485065);
}

double NNfunction_NG_7::synapse0x2860430() {
   return (neuron0x2847880()*1.02666);
}

double NNfunction_NG_7::synapse0x2860470() {
   return (neuron0x2848250()*0.0998341);
}

double NNfunction_NG_7::synapse0x2860020() {
   return (neuron0x283e2e0()*0.755114);
}

double NNfunction_NG_7::synapse0x2860060() {
   return (neuron0x284ae30()*-0.00182687);
}

double NNfunction_NG_7::synapse0x28600a0() {
   return (neuron0x284b800()*-1.02319);
}

double NNfunction_NG_7::synapse0x28600e0() {
   return (neuron0x284c1d0()*0.384714);
}

double NNfunction_NG_7::synapse0x28606c0() {
   return (neuron0x284cba0()*0.603256);
}

double NNfunction_NG_7::synapse0x2860700() {
   return (neuron0x284d570()*-0.268908);
}

double NNfunction_NG_7::synapse0x2860740() {
   return (neuron0x284df40()*0.431856);
}

double NNfunction_NG_7::synapse0x2860780() {
   return (neuron0x284e910()*0.115119);
}

double NNfunction_NG_7::synapse0x28607c0() {
   return (neuron0x284f2e0()*1.07905);
}

double NNfunction_NG_7::synapse0x2860800() {
   return (neuron0x284fec0()*-0.962075);
}

double NNfunction_NG_7::synapse0x2860840() {
   return (neuron0x2850890()*-0.559148);
}

double NNfunction_NG_7::synapse0x2860880() {
   return (neuron0x2841710()*2.87815);
}

double NNfunction_NG_7::synapse0x28608c0() {
   return (neuron0x28420e0()*-0.170075);
}

double NNfunction_NG_7::synapse0x2860900() {
   return (neuron0x2842ab0()*-0.699295);
}

double NNfunction_NG_7::synapse0x2860940() {
   return (neuron0x28550f0()*-0.350861);
}

double NNfunction_NG_7::synapse0x2860980() {
   return (neuron0x28559a0()*0.967765);
}

double NNfunction_NG_7::synapse0x28609c0() {
   return (neuron0x2856370()*0.606136);
}

double NNfunction_NG_7::synapse0x2860a00() {
   return (neuron0x2856d40()*0.206291);
}

double NNfunction_NG_7::synapse0x2860d80() {
   return (neuron0x2832cc0()*1.06818);
}

double NNfunction_NG_7::synapse0x2860dc0() {
   return (neuron0x28335d0()*-0.268515);
}

double NNfunction_NG_7::synapse0x2860e00() {
   return (neuron0x28340b0()*-0.23597);
}

double NNfunction_NG_7::synapse0x2860e40() {
   return (neuron0x25ed940()*0.0053861);
}

double NNfunction_NG_7::synapse0x2860e80() {
   return (neuron0x2834ed0()*1.5422);
}

double NNfunction_NG_7::synapse0x2860ec0() {
   return (neuron0x28358a0()*-0.743078);
}

double NNfunction_NG_7::synapse0x2860f00() {
   return (neuron0x2836670()*-0.0279701);
}

double NNfunction_NG_7::synapse0x2860f40() {
   return (neuron0x2837040()*-0.0910504);
}

double NNfunction_NG_7::synapse0x2860f80() {
   return (neuron0x2837a10()*-1.15165);
}

double NNfunction_NG_7::synapse0x2860fc0() {
   return (neuron0x28384f0()*0.00956277);
}

double NNfunction_NG_7::synapse0x2861000() {
   return (neuron0x2838ec0()*-0.617298);
}

double NNfunction_NG_7::synapse0x2861040() {
   return (neuron0x2835fa0()*0.0197183);
}

double NNfunction_NG_7::synapse0x2861080() {
   return (neuron0x283aa70()*1.0228);
}

double NNfunction_NG_7::synapse0x28610c0() {
   return (neuron0x283b440()*0.103349);
}

double NNfunction_NG_7::synapse0x2861100() {
   return (neuron0x283be10()*-0.0988965);
}

double NNfunction_NG_7::synapse0x2861140() {
   return (neuron0x283c7e0()*0.00231141);
}

double NNfunction_NG_7::synapse0x2860bd0() {
   return (neuron0x283e5f0()*-0.0197785);
}

double NNfunction_NG_7::synapse0x2860c10() {
   return (neuron0x283e8d0()*-0.132632);
}

double NNfunction_NG_7::synapse0x2861290() {
   return (neuron0x283f2a0()*0.0252037);
}

double NNfunction_NG_7::synapse0x28612d0() {
   return (neuron0x283fc70()*-0.0180483);
}

double NNfunction_NG_7::synapse0x2861310() {
   return (neuron0x2840640()*-0.808792);
}

double NNfunction_NG_7::synapse0x2861350() {
   return (neuron0x2841010()*-1.48022);
}

double NNfunction_NG_7::synapse0x2861390() {
   return (neuron0x2839b60()*-0.0247926);
}

double NNfunction_NG_7::synapse0x28613d0() {
   return (neuron0x283a530()*0.908155);
}

double NNfunction_NG_7::synapse0x2861410() {
   return (neuron0x2843da0()*0.191506);
}

double NNfunction_NG_7::synapse0x2861450() {
   return (neuron0x2844770()*-0.0322843);
}

double NNfunction_NG_7::synapse0x2861490() {
   return (neuron0x2845140()*0.0769561);
}

double NNfunction_NG_7::synapse0x28614d0() {
   return (neuron0x2845b10()*1.1185);
}

double NNfunction_NG_7::synapse0x2861510() {
   return (neuron0x28464e0()*-0.081561);
}

double NNfunction_NG_7::synapse0x2861550() {
   return (neuron0x2846eb0()*0.168027);
}

double NNfunction_NG_7::synapse0x2861590() {
   return (neuron0x2847880()*-1.03679);
}

double NNfunction_NG_7::synapse0x28615d0() {
   return (neuron0x2848250()*0.0257494);
}

double NNfunction_NG_7::synapse0x2861180() {
   return (neuron0x283e2e0()*0.179132);
}

double NNfunction_NG_7::synapse0x28611c0() {
   return (neuron0x284ae30()*-1.33101);
}

double NNfunction_NG_7::synapse0x2861200() {
   return (neuron0x284b800()*-0.0700386);
}

double NNfunction_NG_7::synapse0x2861240() {
   return (neuron0x284c1d0()*-0.305529);
}

double NNfunction_NG_7::synapse0x2861820() {
   return (neuron0x284cba0()*0.389899);
}

double NNfunction_NG_7::synapse0x2861860() {
   return (neuron0x284d570()*-0.0300912);
}

double NNfunction_NG_7::synapse0x28618a0() {
   return (neuron0x284df40()*-0.0661237);
}

double NNfunction_NG_7::synapse0x28618e0() {
   return (neuron0x284e910()*-0.229713);
}

double NNfunction_NG_7::synapse0x2861920() {
   return (neuron0x284f2e0()*-0.096591);
}

double NNfunction_NG_7::synapse0x2861960() {
   return (neuron0x284fec0()*-0.166834);
}

double NNfunction_NG_7::synapse0x28619a0() {
   return (neuron0x2850890()*0.815417);
}

double NNfunction_NG_7::synapse0x28619e0() {
   return (neuron0x2841710()*0.220183);
}

double NNfunction_NG_7::synapse0x2861a20() {
   return (neuron0x28420e0()*0.0504818);
}

double NNfunction_NG_7::synapse0x2861a60() {
   return (neuron0x2842ab0()*0.0591335);
}

double NNfunction_NG_7::synapse0x2861aa0() {
   return (neuron0x28550f0()*-0.047232);
}

double NNfunction_NG_7::synapse0x2861ae0() {
   return (neuron0x28559a0()*-0.00387683);
}

double NNfunction_NG_7::synapse0x2861b20() {
   return (neuron0x2856370()*0.172343);
}

double NNfunction_NG_7::synapse0x2861b60() {
   return (neuron0x2856d40()*0.0248097);
}

double NNfunction_NG_7::synapse0x2832c80() {
   return (neuron0x285df40()*6.49729);
}

double NNfunction_NG_7::synapse0x2861dc0() {
   return (neuron0x285e2e0()*-3.73672);
}

double NNfunction_NG_7::synapse0x2861e00() {
   return (neuron0x285e780()*-10.9695);
}

double NNfunction_NG_7::synapse0x2861e40() {
   return (neuron0x285f8e0()*-5.55662);
}

double NNfunction_NG_7::synapse0x2861e80() {
   return (neuron0x2860a40()*9.62672);
}

