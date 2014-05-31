#include "NNfunction_sb_cLcR.h"
#include <cmath>

double NNfunction_sb_cLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5764)/15.3845;
   input1 = (in1 - 8.47254)/1152.42;
   input2 = (in2 - 652.733)/616.704;
   input3 = (in3 - -58.5162)/817.393;
   input4 = (in4 - 1063.41)/958.669;
   input5 = (in5 - 891.316)/949.764;
   input6 = (in6 - 898.45)/953.24;
   input7 = (in7 - 923.068)/944.313;
   input8 = (in8 - 903.037)/955.73;
   input9 = (in9 - 879.713)/933.647;
   input10 = (in10 - 980.149)/940.705;
   input11 = (in11 - 698.315)/847.802;
   input12 = (in12 - 261.619)/239.803;
   input13 = (in13 - 494.539)/509.991;
   input14 = (in14 - 716.307)/823.327;
   input15 = (in15 - 273.503)/245.66;
   input16 = (in16 - 521.221)/551.084;
   input17 = (in17 - 743.548)/879.43;
   input18 = (in18 - 731.381)/880.979;
   input19 = (in19 - 785.154)/867.755;
   input20 = (in20 - -3.18857)/486.579;
   input21 = (in21 - 3.57401)/1151.41;
   input22 = (in22 - 7.69274)/1202.32;
   input23 = (in23 - -194.514)/605.567;
   switch(index) {
     case 0:
         return neuron0x24993f0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLcR::Value(int index, double* input) {
   input0 = (input[0] - 23.5764)/15.3845;
   input1 = (input[1] - 8.47254)/1152.42;
   input2 = (input[2] - 652.733)/616.704;
   input3 = (input[3] - -58.5162)/817.393;
   input4 = (input[4] - 1063.41)/958.669;
   input5 = (input[5] - 891.316)/949.764;
   input6 = (input[6] - 898.45)/953.24;
   input7 = (input[7] - 923.068)/944.313;
   input8 = (input[8] - 903.037)/955.73;
   input9 = (input[9] - 879.713)/933.647;
   input10 = (input[10] - 980.149)/940.705;
   input11 = (input[11] - 698.315)/847.802;
   input12 = (input[12] - 261.619)/239.803;
   input13 = (input[13] - 494.539)/509.991;
   input14 = (input[14] - 716.307)/823.327;
   input15 = (input[15] - 273.503)/245.66;
   input16 = (input[16] - 521.221)/551.084;
   input17 = (input[17] - 743.548)/879.43;
   input18 = (input[18] - 731.381)/880.979;
   input19 = (input[19] - 785.154)/867.755;
   input20 = (input[20] - -3.18857)/486.579;
   input21 = (input[21] - 3.57401)/1151.41;
   input22 = (input[22] - 7.69274)/1202.32;
   input23 = (input[23] - -194.514)/605.567;
   switch(index) {
     case 0:
         return neuron0x24993f0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLcR::neuron0x24654b0() {
   return input0;
}

double NNfunction_sb_cLcR::neuron0x24657f0() {
   return input1;
}

double NNfunction_sb_cLcR::neuron0x2465b30() {
   return input2;
}

double NNfunction_sb_cLcR::neuron0x2465e70() {
   return input3;
}

double NNfunction_sb_cLcR::neuron0x24661b0() {
   return input4;
}

double NNfunction_sb_cLcR::neuron0x24664f0() {
   return input5;
}

double NNfunction_sb_cLcR::neuron0x2466830() {
   return input6;
}

double NNfunction_sb_cLcR::neuron0x2466b70() {
   return input7;
}

double NNfunction_sb_cLcR::neuron0x2466eb0() {
   return input8;
}

double NNfunction_sb_cLcR::neuron0x24671f0() {
   return input9;
}

double NNfunction_sb_cLcR::neuron0x2467530() {
   return input10;
}

double NNfunction_sb_cLcR::neuron0x2467870() {
   return input11;
}

double NNfunction_sb_cLcR::neuron0x2467bb0() {
   return input12;
}

double NNfunction_sb_cLcR::neuron0x2467ef0() {
   return input13;
}

double NNfunction_sb_cLcR::neuron0x2468230() {
   return input14;
}

double NNfunction_sb_cLcR::neuron0x2468570() {
   return input15;
}

double NNfunction_sb_cLcR::neuron0x24688b0() {
   return input16;
}

double NNfunction_sb_cLcR::neuron0x2468e10() {
   return input17;
}

double NNfunction_sb_cLcR::neuron0x2469030() {
   return input18;
}

double NNfunction_sb_cLcR::neuron0x2469370() {
   return input19;
}

double NNfunction_sb_cLcR::neuron0x24696b0() {
   return input20;
}

double NNfunction_sb_cLcR::neuron0x24699f0() {
   return input21;
}

double NNfunction_sb_cLcR::neuron0x2469d30() {
   return input22;
}

double NNfunction_sb_cLcR::neuron0x246a070() {
   return input23;
}

double NNfunction_sb_cLcR::input0x246a510() {
   double input = -1.46921;
   input += synapse0x2225320();
   input += synapse0x2465370();
   input += synapse0x24653b0();
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
   input += synapse0x246aa80();
   input += synapse0x246aac0();
   input += synapse0x24652e0();
   input += synapse0x2465320();
   input += synapse0x2216bc0();
   input += synapse0x2216c00();
   input += synapse0x246ad20();
   input += synapse0x246ad60();
   input += synapse0x246ada0();
   input += synapse0x246ade0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246a510() {
   double input = input0x246a510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x246ae20() {
   double input = -1.38754;
   input += synapse0x246b160();
   input += synapse0x246b1a0();
   input += synapse0x246b1e0();
   input += synapse0x246b220();
   input += synapse0x246b260();
   input += synapse0x246b2a0();
   input += synapse0x246b2e0();
   input += synapse0x246b320();
   input += synapse0x246b360();
   input += synapse0x246ac10();
   input += synapse0x246ac50();
   input += synapse0x246ac90();
   input += synapse0x246acd0();
   input += synapse0x246b5b0();
   input += synapse0x246b5f0();
   input += synapse0x246b630();
   input += synapse0x246afb0();
   input += synapse0x246aff0();
   input += synapse0x246b780();
   input += synapse0x246b7c0();
   input += synapse0x246b800();
   input += synapse0x246b840();
   input += synapse0x246b880();
   input += synapse0x246b8c0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246ae20() {
   double input = input0x246ae20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x246b900() {
   double input = 1.28377;
   input += synapse0x246bc40();
   input += synapse0x246bc80();
   input += synapse0x246bcc0();
   input += synapse0x246bd00();
   input += synapse0x246bd40();
   input += synapse0x246bd80();
   input += synapse0x246bdc0();
   input += synapse0x246be00();
   input += synapse0x246be40();
   input += synapse0x246be80();
   input += synapse0x246bec0();
   input += synapse0x246bf00();
   input += synapse0x246bf40();
   input += synapse0x246bf80();
   input += synapse0x246bfc0();
   input += synapse0x246c000();
   input += synapse0x246ba90();
   input += synapse0x246bad0();
   input += synapse0x2224a10();
   input += synapse0x2224a50();
   input += synapse0x2454540();
   input += synapse0x2454580();
   input += synapse0x24545c0();
   input += synapse0x24653f0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246b900() {
   double input = input0x246b900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2225190() {
   double input = 1.01361;
   input += synapse0x246b550();
   input += synapse0x2465430();
   input += synapse0x2465470();
   input += synapse0x246c150();
   input += synapse0x246c190();
   input += synapse0x246c1d0();
   input += synapse0x246c210();
   input += synapse0x246c250();
   input += synapse0x246c290();
   input += synapse0x246c2d0();
   input += synapse0x246c310();
   input += synapse0x246c350();
   input += synapse0x246c390();
   input += synapse0x246c3d0();
   input += synapse0x246c410();
   input += synapse0x246c450();
   input += synapse0x246b3a0();
   input += synapse0x246b3e0();
   input += synapse0x246c5a0();
   input += synapse0x246c5e0();
   input += synapse0x246c620();
   input += synapse0x246c660();
   input += synapse0x246c6a0();
   input += synapse0x246c6e0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2225190() {
   double input = input0x2225190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x246c720() {
   double input = -0.424294;
   input += synapse0x246ca60();
   input += synapse0x246caa0();
   input += synapse0x246cae0();
   input += synapse0x246cb20();
   input += synapse0x246cb60();
   input += synapse0x246cba0();
   input += synapse0x246cbe0();
   input += synapse0x246cc20();
   input += synapse0x246cc60();
   input += synapse0x246cca0();
   input += synapse0x246cce0();
   input += synapse0x246cd20();
   input += synapse0x246cd60();
   input += synapse0x246cda0();
   input += synapse0x246cde0();
   input += synapse0x246ce20();
   input += synapse0x246c8b0();
   input += synapse0x246c8f0();
   input += synapse0x246cf70();
   input += synapse0x246cfb0();
   input += synapse0x246cff0();
   input += synapse0x246d030();
   input += synapse0x246d070();
   input += synapse0x246d0b0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246c720() {
   double input = input0x246c720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x246d0f0() {
   double input = -2.21319;
   input += synapse0x246d430();
   input += synapse0x246d470();
   input += synapse0x246d4b0();
   input += synapse0x246d4f0();
   input += synapse0x246d530();
   input += synapse0x246d570();
   input += synapse0x246d5b0();
   input += synapse0x246d5f0();
   input += synapse0x246d630();
   input += synapse0x2224d80();
   input += synapse0x2224dc0();
   input += synapse0x2224e00();
   input += synapse0x2224e40();
   input += synapse0x2224e80();
   input += synapse0x2224ec0();
   input += synapse0x2224f00();
   input += synapse0x246d280();
   input += synapse0x246d2c0();
   input += synapse0x2225050();
   input += synapse0x2225090();
   input += synapse0x22250d0();
   input += synapse0x2225110();
   input += synapse0x2225150();
   input += synapse0x246de80();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246d0f0() {
   double input = input0x246d0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x246dec0() {
   double input = -1.52084;
   input += synapse0x246e200();
   input += synapse0x246e240();
   input += synapse0x246e280();
   input += synapse0x246e2c0();
   input += synapse0x246e300();
   input += synapse0x246e340();
   input += synapse0x246e380();
   input += synapse0x246e3c0();
   input += synapse0x246e400();
   input += synapse0x246e440();
   input += synapse0x246e480();
   input += synapse0x246e4c0();
   input += synapse0x246e500();
   input += synapse0x246e540();
   input += synapse0x246e580();
   input += synapse0x246e5c0();
   input += synapse0x246e050();
   input += synapse0x246e090();
   input += synapse0x246e710();
   input += synapse0x246e750();
   input += synapse0x246e790();
   input += synapse0x246e7d0();
   input += synapse0x246e810();
   input += synapse0x246e850();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246dec0() {
   double input = input0x246dec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x246e890() {
   double input = -0.508999;
   input += synapse0x246ebd0();
   input += synapse0x246ec10();
   input += synapse0x246ec50();
   input += synapse0x246ec90();
   input += synapse0x246ecd0();
   input += synapse0x246ed10();
   input += synapse0x246ed50();
   input += synapse0x246ed90();
   input += synapse0x246edd0();
   input += synapse0x246ee10();
   input += synapse0x246ee50();
   input += synapse0x246ee90();
   input += synapse0x246eed0();
   input += synapse0x246ef10();
   input += synapse0x246ef50();
   input += synapse0x246ef90();
   input += synapse0x246ea20();
   input += synapse0x246ea60();
   input += synapse0x246f0e0();
   input += synapse0x246f120();
   input += synapse0x246f160();
   input += synapse0x246f1a0();
   input += synapse0x246f1e0();
   input += synapse0x246f220();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246e890() {
   double input = input0x246e890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x246f260() {
   double input = 0.00753622;
   input += synapse0x2468d00();
   input += synapse0x2468d40();
   input += synapse0x2468d80();
   input += synapse0x2468dc0();
   input += synapse0x246f7b0();
   input += synapse0x246f7f0();
   input += synapse0x246f830();
   input += synapse0x246f870();
   input += synapse0x246f8b0();
   input += synapse0x246f8f0();
   input += synapse0x246f930();
   input += synapse0x246f970();
   input += synapse0x246f9b0();
   input += synapse0x246f9f0();
   input += synapse0x246fa30();
   input += synapse0x246fa70();
   input += synapse0x246f3f0();
   input += synapse0x246f430();
   input += synapse0x246fbc0();
   input += synapse0x246fc00();
   input += synapse0x246fc40();
   input += synapse0x246fc80();
   input += synapse0x246fcc0();
   input += synapse0x246fd00();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246f260() {
   double input = input0x246f260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x246fd40() {
   double input = -0.257026;
   input += synapse0x2470080();
   input += synapse0x24700c0();
   input += synapse0x2470100();
   input += synapse0x2470140();
   input += synapse0x2470180();
   input += synapse0x24701c0();
   input += synapse0x2470200();
   input += synapse0x2470240();
   input += synapse0x2470280();
   input += synapse0x24702c0();
   input += synapse0x2470300();
   input += synapse0x2470340();
   input += synapse0x2470380();
   input += synapse0x24703c0();
   input += synapse0x2470400();
   input += synapse0x2470440();
   input += synapse0x246fed0();
   input += synapse0x246ff10();
   input += synapse0x2470590();
   input += synapse0x24705d0();
   input += synapse0x2470610();
   input += synapse0x2470650();
   input += synapse0x2470690();
   input += synapse0x24706d0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246fd40() {
   double input = input0x246fd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2470710() {
   double input = -0.659625;
   input += synapse0x2470a50();
   input += synapse0x2470a90();
   input += synapse0x2470ad0();
   input += synapse0x2470b10();
   input += synapse0x2470b50();
   input += synapse0x2470b90();
   input += synapse0x2470bd0();
   input += synapse0x2470c10();
   input += synapse0x2470c50();
   input += synapse0x2470c90();
   input += synapse0x2470cd0();
   input += synapse0x2470d10();
   input += synapse0x2470d50();
   input += synapse0x2470d90();
   input += synapse0x2470dd0();
   input += synapse0x2470e10();
   input += synapse0x24708a0();
   input += synapse0x24708e0();
   input += synapse0x246d670();
   input += synapse0x246d6b0();
   input += synapse0x246d6f0();
   input += synapse0x246d730();
   input += synapse0x246d770();
   input += synapse0x246d7b0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2470710() {
   double input = input0x2470710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x246d7f0() {
   double input = 3.42489;
   input += synapse0x246db30();
   input += synapse0x246db70();
   input += synapse0x246dbb0();
   input += synapse0x246dbf0();
   input += synapse0x246dc30();
   input += synapse0x246dc70();
   input += synapse0x246dcb0();
   input += synapse0x246dcf0();
   input += synapse0x246dd30();
   input += synapse0x246dd70();
   input += synapse0x246ddb0();
   input += synapse0x246ddf0();
   input += synapse0x246de30();
   input += synapse0x2471f70();
   input += synapse0x2471fb0();
   input += synapse0x2471ff0();
   input += synapse0x246d980();
   input += synapse0x246d9c0();
   input += synapse0x2472140();
   input += synapse0x2472180();
   input += synapse0x24721c0();
   input += synapse0x2472200();
   input += synapse0x2472240();
   input += synapse0x2472280();
   return input;
}

double NNfunction_sb_cLcR::neuron0x246d7f0() {
   double input = input0x246d7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x24722c0() {
   double input = -2.42699;
   input += synapse0x2472600();
   input += synapse0x2472640();
   input += synapse0x2472680();
   input += synapse0x24726c0();
   input += synapse0x2472700();
   input += synapse0x2472740();
   input += synapse0x2472780();
   input += synapse0x24727c0();
   input += synapse0x2472800();
   input += synapse0x2472840();
   input += synapse0x2472880();
   input += synapse0x24728c0();
   input += synapse0x2472900();
   input += synapse0x2472940();
   input += synapse0x2472980();
   input += synapse0x24729c0();
   input += synapse0x2472450();
   input += synapse0x2472490();
   input += synapse0x2472b10();
   input += synapse0x2472b50();
   input += synapse0x2472b90();
   input += synapse0x2472bd0();
   input += synapse0x2472c10();
   input += synapse0x2472c50();
   return input;
}

double NNfunction_sb_cLcR::neuron0x24722c0() {
   double input = input0x24722c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2472c90() {
   double input = -2.20703;
   input += synapse0x2472fd0();
   input += synapse0x2473010();
   input += synapse0x2473050();
   input += synapse0x2473090();
   input += synapse0x24730d0();
   input += synapse0x2473110();
   input += synapse0x2473150();
   input += synapse0x2473190();
   input += synapse0x24731d0();
   input += synapse0x2473210();
   input += synapse0x2473250();
   input += synapse0x2473290();
   input += synapse0x24732d0();
   input += synapse0x2473310();
   input += synapse0x2473350();
   input += synapse0x2473390();
   input += synapse0x2472e20();
   input += synapse0x2472e60();
   input += synapse0x24734e0();
   input += synapse0x2473520();
   input += synapse0x2473560();
   input += synapse0x24735a0();
   input += synapse0x24735e0();
   input += synapse0x2473620();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2472c90() {
   double input = input0x2472c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2473660() {
   double input = 1.06539;
   input += synapse0x24739a0();
   input += synapse0x24739e0();
   input += synapse0x2473a20();
   input += synapse0x2473a60();
   input += synapse0x2473aa0();
   input += synapse0x2473ae0();
   input += synapse0x2473b20();
   input += synapse0x2473b60();
   input += synapse0x2473ba0();
   input += synapse0x2473be0();
   input += synapse0x2473c20();
   input += synapse0x2473c60();
   input += synapse0x2473ca0();
   input += synapse0x2473ce0();
   input += synapse0x2473d20();
   input += synapse0x2473d60();
   input += synapse0x24737f0();
   input += synapse0x2473830();
   input += synapse0x2473eb0();
   input += synapse0x2473ef0();
   input += synapse0x2473f30();
   input += synapse0x2473f70();
   input += synapse0x2473fb0();
   input += synapse0x2473ff0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2473660() {
   double input = input0x2473660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2474030() {
   double input = 0.48775;
   input += synapse0x2474370();
   input += synapse0x24656d0();
   input += synapse0x2465710();
   input += synapse0x2465a10();
   input += synapse0x2465a50();
   input += synapse0x2465d50();
   input += synapse0x2465d90();
   input += synapse0x2466090();
   input += synapse0x24660d0();
   input += synapse0x24663d0();
   input += synapse0x2466410();
   input += synapse0x2466710();
   input += synapse0x2466750();
   input += synapse0x2466a50();
   input += synapse0x2466a90();
   input += synapse0x2466d90();
   input += synapse0x2466dd0();
   input += synapse0x24670d0();
   input += synapse0x2467110();
   input += synapse0x2467410();
   input += synapse0x2467450();
   input += synapse0x2467750();
   input += synapse0x2467790();
   input += synapse0x2467a90();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2474030() {
   double input = input0x2474030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2475e40() {
   double input = 1.08293;
   input += synapse0x2467ad0();
   input += synapse0x2468790();
   input += synapse0x24687d0();
   input += synapse0x24741c0();
   input += synapse0x2474200();
   input += synapse0x2468ad0();
   input += synapse0x2468b10();
   input += synapse0x2216aa0();
   input += synapse0x2216ae0();
   input += synapse0x2469250();
   input += synapse0x2469290();
   input += synapse0x2469590();
   input += synapse0x24695d0();
   input += synapse0x24698d0();
   input += synapse0x2469910();
   input += synapse0x2469c10();
   input += synapse0x2469c50();
   input += synapse0x2469f50();
   input += synapse0x2469f90();
   input += synapse0x246a290();
   input += synapse0x246a2d0();
   input += synapse0x2467dd0();
   input += synapse0x2467e10();
   input += synapse0x24760e0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2475e40() {
   double input = input0x2475e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2476120() {
   double input = -1.37102;
   input += synapse0x2476460();
   input += synapse0x24764a0();
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
   input += synapse0x24762b0();
   input += synapse0x24762f0();
   input += synapse0x2476970();
   input += synapse0x24769b0();
   input += synapse0x24769f0();
   input += synapse0x2476a30();
   input += synapse0x2476a70();
   input += synapse0x2476ab0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2476120() {
   double input = input0x2476120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2476af0() {
   double input = -0.0516866;
   input += synapse0x2476e30();
   input += synapse0x2476e70();
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
   input += synapse0x2476c80();
   input += synapse0x2476cc0();
   input += synapse0x2477340();
   input += synapse0x2477380();
   input += synapse0x24773c0();
   input += synapse0x2477400();
   input += synapse0x2477440();
   input += synapse0x2477480();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2476af0() {
   double input = input0x2476af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x24774c0() {
   double input = 0.246783;
   input += synapse0x2477800();
   input += synapse0x2477840();
   input += synapse0x2477880();
   input += synapse0x24778c0();
   input += synapse0x2477900();
   input += synapse0x2477940();
   input += synapse0x2477980();
   input += synapse0x24779c0();
   input += synapse0x2477a00();
   input += synapse0x2477a40();
   input += synapse0x2477a80();
   input += synapse0x2477ac0();
   input += synapse0x2477b00();
   input += synapse0x2477b40();
   input += synapse0x2477b80();
   input += synapse0x2477bc0();
   input += synapse0x2477650();
   input += synapse0x2477690();
   input += synapse0x2477d10();
   input += synapse0x2477d50();
   input += synapse0x2477d90();
   input += synapse0x2477dd0();
   input += synapse0x2477e10();
   input += synapse0x2477e50();
   return input;
}

double NNfunction_sb_cLcR::neuron0x24774c0() {
   double input = input0x24774c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2477e90() {
   double input = 1.78144;
   input += synapse0x24781d0();
   input += synapse0x2478210();
   input += synapse0x2478250();
   input += synapse0x2478290();
   input += synapse0x24782d0();
   input += synapse0x2478310();
   input += synapse0x2478350();
   input += synapse0x2478390();
   input += synapse0x24783d0();
   input += synapse0x2478410();
   input += synapse0x2478450();
   input += synapse0x2478490();
   input += synapse0x24784d0();
   input += synapse0x2478510();
   input += synapse0x2478550();
   input += synapse0x2478590();
   input += synapse0x2478020();
   input += synapse0x2478060();
   input += synapse0x24786e0();
   input += synapse0x2478720();
   input += synapse0x2478760();
   input += synapse0x24787a0();
   input += synapse0x24787e0();
   input += synapse0x2478820();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2477e90() {
   double input = input0x2477e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2478860() {
   double input = -0.174563;
   input += synapse0x2478ba0();
   input += synapse0x2478be0();
   input += synapse0x2478c20();
   input += synapse0x2478c60();
   input += synapse0x2478ca0();
   input += synapse0x2478ce0();
   input += synapse0x2478d20();
   input += synapse0x2478d60();
   input += synapse0x2478da0();
   input += synapse0x2470f60();
   input += synapse0x2470fa0();
   input += synapse0x2470fe0();
   input += synapse0x2471020();
   input += synapse0x2471060();
   input += synapse0x24710a0();
   input += synapse0x24710e0();
   input += synapse0x24789f0();
   input += synapse0x2478a30();
   input += synapse0x2471230();
   input += synapse0x2471270();
   input += synapse0x24712b0();
   input += synapse0x24712f0();
   input += synapse0x2471330();
   input += synapse0x2471370();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2478860() {
   double input = input0x2478860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x24713b0() {
   double input = 1.43607;
   input += synapse0x24716f0();
   input += synapse0x2471730();
   input += synapse0x2471770();
   input += synapse0x24717b0();
   input += synapse0x24717f0();
   input += synapse0x2471830();
   input += synapse0x2471870();
   input += synapse0x24718b0();
   input += synapse0x24718f0();
   input += synapse0x2471930();
   input += synapse0x2471970();
   input += synapse0x24719b0();
   input += synapse0x24719f0();
   input += synapse0x2471a30();
   input += synapse0x2471a70();
   input += synapse0x2471ab0();
   input += synapse0x2471540();
   input += synapse0x2471580();
   input += synapse0x2471c00();
   input += synapse0x2471c40();
   input += synapse0x2471c80();
   input += synapse0x2471cc0();
   input += synapse0x2471d00();
   input += synapse0x2471d40();
   return input;
}

double NNfunction_sb_cLcR::neuron0x24713b0() {
   double input = input0x24713b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2471d80() {
   double input = -1.02498;
   input += synapse0x2471f10();
   input += synapse0x247afa0();
   input += synapse0x247afe0();
   input += synapse0x247b020();
   input += synapse0x247b060();
   input += synapse0x247b0a0();
   input += synapse0x247b0e0();
   input += synapse0x247b120();
   input += synapse0x247b160();
   input += synapse0x247b1a0();
   input += synapse0x247b1e0();
   input += synapse0x247b220();
   input += synapse0x247b260();
   input += synapse0x247b2a0();
   input += synapse0x247b2e0();
   input += synapse0x247b320();
   input += synapse0x247adf0();
   input += synapse0x247ae30();
   input += synapse0x247b470();
   input += synapse0x247b4b0();
   input += synapse0x247b4f0();
   input += synapse0x247b530();
   input += synapse0x247b570();
   input += synapse0x247b5b0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2471d80() {
   double input = input0x2471d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x247b5f0() {
   double input = -1.83654;
   input += synapse0x247b930();
   input += synapse0x247b970();
   input += synapse0x247b9b0();
   input += synapse0x247b9f0();
   input += synapse0x247ba30();
   input += synapse0x247ba70();
   input += synapse0x247bab0();
   input += synapse0x247baf0();
   input += synapse0x247bb30();
   input += synapse0x247bb70();
   input += synapse0x247bbb0();
   input += synapse0x247bbf0();
   input += synapse0x247bc30();
   input += synapse0x247bc70();
   input += synapse0x247bcb0();
   input += synapse0x247bcf0();
   input += synapse0x247b780();
   input += synapse0x247b7c0();
   input += synapse0x247be40();
   input += synapse0x247be80();
   input += synapse0x247bec0();
   input += synapse0x247bf00();
   input += synapse0x247bf40();
   input += synapse0x247bf80();
   return input;
}

double NNfunction_sb_cLcR::neuron0x247b5f0() {
   double input = input0x247b5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x247bfc0() {
   double input = -2.96191;
   input += synapse0x247c300();
   input += synapse0x247c340();
   input += synapse0x247c380();
   input += synapse0x247c3c0();
   input += synapse0x247c400();
   input += synapse0x247c440();
   input += synapse0x247c480();
   input += synapse0x247c4c0();
   input += synapse0x247c500();
   input += synapse0x247c540();
   input += synapse0x247c580();
   input += synapse0x247c5c0();
   input += synapse0x247c600();
   input += synapse0x247c640();
   input += synapse0x247c680();
   input += synapse0x247c6c0();
   input += synapse0x247c150();
   input += synapse0x247c190();
   input += synapse0x247c810();
   input += synapse0x247c850();
   input += synapse0x247c890();
   input += synapse0x247c8d0();
   input += synapse0x247c910();
   input += synapse0x247c950();
   return input;
}

double NNfunction_sb_cLcR::neuron0x247bfc0() {
   double input = input0x247bfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x247c990() {
   double input = 1.27621;
   input += synapse0x247ccd0();
   input += synapse0x247cd10();
   input += synapse0x247cd50();
   input += synapse0x247cd90();
   input += synapse0x247cdd0();
   input += synapse0x247ce10();
   input += synapse0x247ce50();
   input += synapse0x247ce90();
   input += synapse0x247ced0();
   input += synapse0x247cf10();
   input += synapse0x247cf50();
   input += synapse0x247cf90();
   input += synapse0x247cfd0();
   input += synapse0x247d010();
   input += synapse0x247d050();
   input += synapse0x247d090();
   input += synapse0x247cb20();
   input += synapse0x247cb60();
   input += synapse0x247d1e0();
   input += synapse0x247d220();
   input += synapse0x247d260();
   input += synapse0x247d2a0();
   input += synapse0x247d2e0();
   input += synapse0x247d320();
   return input;
}

double NNfunction_sb_cLcR::neuron0x247c990() {
   double input = input0x247c990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x247d360() {
   double input = 0.724694;
   input += synapse0x247d6a0();
   input += synapse0x247d6e0();
   input += synapse0x247d720();
   input += synapse0x247d760();
   input += synapse0x247d7a0();
   input += synapse0x247d7e0();
   input += synapse0x247d820();
   input += synapse0x247d860();
   input += synapse0x247d8a0();
   input += synapse0x247d8e0();
   input += synapse0x247d920();
   input += synapse0x247d960();
   input += synapse0x247d9a0();
   input += synapse0x247d9e0();
   input += synapse0x247da20();
   input += synapse0x247da60();
   input += synapse0x247d4f0();
   input += synapse0x247d530();
   input += synapse0x247dbb0();
   input += synapse0x247dbf0();
   input += synapse0x247dc30();
   input += synapse0x247dc70();
   input += synapse0x247dcb0();
   input += synapse0x247dcf0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x247d360() {
   double input = input0x247d360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x247dd30() {
   double input = -0.241967;
   input += synapse0x247e070();
   input += synapse0x247e0b0();
   input += synapse0x247e0f0();
   input += synapse0x247e130();
   input += synapse0x247e170();
   input += synapse0x247e1b0();
   input += synapse0x247e1f0();
   input += synapse0x247e230();
   input += synapse0x247e270();
   input += synapse0x247e2b0();
   input += synapse0x247e2f0();
   input += synapse0x247e330();
   input += synapse0x247e370();
   input += synapse0x247e3b0();
   input += synapse0x247e3f0();
   input += synapse0x247e430();
   input += synapse0x247dec0();
   input += synapse0x247df00();
   input += synapse0x247e580();
   input += synapse0x247e5c0();
   input += synapse0x247e600();
   input += synapse0x247e640();
   input += synapse0x247e680();
   input += synapse0x247e6c0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x247dd30() {
   double input = input0x247dd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x247e700() {
   double input = -1.83231;
   input += synapse0x247ea40();
   input += synapse0x247ea80();
   input += synapse0x247eac0();
   input += synapse0x247eb00();
   input += synapse0x247eb40();
   input += synapse0x247eb80();
   input += synapse0x247ebc0();
   input += synapse0x247ec00();
   input += synapse0x247ec40();
   input += synapse0x247ec80();
   input += synapse0x247ecc0();
   input += synapse0x247ed00();
   input += synapse0x247ed40();
   input += synapse0x247ed80();
   input += synapse0x247edc0();
   input += synapse0x247ee00();
   input += synapse0x247e890();
   input += synapse0x247e8d0();
   input += synapse0x247ef50();
   input += synapse0x247ef90();
   input += synapse0x247efd0();
   input += synapse0x247f010();
   input += synapse0x247f050();
   input += synapse0x247f090();
   return input;
}

double NNfunction_sb_cLcR::neuron0x247e700() {
   double input = input0x247e700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x247f0d0() {
   double input = -0.149651;
   input += synapse0x247f410();
   input += synapse0x247f450();
   input += synapse0x247f490();
   input += synapse0x247f4d0();
   input += synapse0x247f510();
   input += synapse0x247f550();
   input += synapse0x247f590();
   input += synapse0x247f5d0();
   input += synapse0x247f610();
   input += synapse0x247f650();
   input += synapse0x247f690();
   input += synapse0x247f6d0();
   input += synapse0x247f710();
   input += synapse0x247f750();
   input += synapse0x247f790();
   input += synapse0x247f7d0();
   input += synapse0x247f260();
   input += synapse0x247f2a0();
   input += synapse0x247f920();
   input += synapse0x247f960();
   input += synapse0x247f9a0();
   input += synapse0x247f9e0();
   input += synapse0x247fa20();
   input += synapse0x247fa60();
   return input;
}

double NNfunction_sb_cLcR::neuron0x247f0d0() {
   double input = input0x247f0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x247faa0() {
   double input = -0.0157333;
   input += synapse0x247fde0();
   input += synapse0x24743b0();
   input += synapse0x24743f0();
   input += synapse0x2474430();
   input += synapse0x2474680();
   input += synapse0x24746c0();
   input += synapse0x2474700();
   input += synapse0x2474950();
   input += synapse0x2474990();
   input += synapse0x2474be0();
   input += synapse0x2474c20();
   input += synapse0x2474c60();
   input += synapse0x2474eb0();
   input += synapse0x2474ef0();
   input += synapse0x2475140();
   input += synapse0x2475180();
   input += synapse0x247fc30();
   input += synapse0x247fc70();
   input += synapse0x24752d0();
   input += synapse0x24757e0();
   input += synapse0x2475820();
   input += synapse0x2475860();
   input += synapse0x2475ab0();
   input += synapse0x2475af0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x247faa0() {
   double input = input0x247faa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2475b30() {
   double input = 1.31231;
   input += synapse0x24753a0();
   input += synapse0x24753e0();
   input += synapse0x2475420();
   input += synapse0x2475460();
   input += synapse0x2475de0();
   input += synapse0x2482130();
   input += synapse0x2482170();
   input += synapse0x24821b0();
   input += synapse0x24821f0();
   input += synapse0x2482230();
   input += synapse0x2482270();
   input += synapse0x24822b0();
   input += synapse0x24822f0();
   input += synapse0x2482330();
   input += synapse0x2482370();
   input += synapse0x24823b0();
   input += synapse0x2475cc0();
   input += synapse0x2475d00();
   input += synapse0x2482500();
   input += synapse0x2482540();
   input += synapse0x2482580();
   input += synapse0x24825c0();
   input += synapse0x2482600();
   input += synapse0x2482640();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2475b30() {
   double input = input0x2475b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2482680() {
   double input = 0.479027;
   input += synapse0x24829c0();
   input += synapse0x2482a00();
   input += synapse0x2482a40();
   input += synapse0x2482a80();
   input += synapse0x2482ac0();
   input += synapse0x2482b00();
   input += synapse0x2482b40();
   input += synapse0x2482b80();
   input += synapse0x2482bc0();
   input += synapse0x2482c00();
   input += synapse0x2482c40();
   input += synapse0x2482c80();
   input += synapse0x2482cc0();
   input += synapse0x2482d00();
   input += synapse0x2482d40();
   input += synapse0x2482d80();
   input += synapse0x2482810();
   input += synapse0x2482850();
   input += synapse0x2482ed0();
   input += synapse0x2482f10();
   input += synapse0x2482f50();
   input += synapse0x2482f90();
   input += synapse0x2482fd0();
   input += synapse0x2483010();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2482680() {
   double input = input0x2482680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2483050() {
   double input = 1.18946;
   input += synapse0x2483390();
   input += synapse0x24833d0();
   input += synapse0x2483410();
   input += synapse0x2483450();
   input += synapse0x2483490();
   input += synapse0x24834d0();
   input += synapse0x2483510();
   input += synapse0x2483550();
   input += synapse0x2483590();
   input += synapse0x24835d0();
   input += synapse0x2483610();
   input += synapse0x2483650();
   input += synapse0x2483690();
   input += synapse0x24836d0();
   input += synapse0x2483710();
   input += synapse0x2483750();
   input += synapse0x24831e0();
   input += synapse0x2483220();
   input += synapse0x24838a0();
   input += synapse0x24838e0();
   input += synapse0x2483920();
   input += synapse0x2483960();
   input += synapse0x24839a0();
   input += synapse0x24839e0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2483050() {
   double input = input0x2483050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2483a20() {
   double input = -2.38111;
   input += synapse0x2483d60();
   input += synapse0x2483da0();
   input += synapse0x2483de0();
   input += synapse0x2483e20();
   input += synapse0x2483e60();
   input += synapse0x2483ea0();
   input += synapse0x2483ee0();
   input += synapse0x2483f20();
   input += synapse0x2483f60();
   input += synapse0x2483fa0();
   input += synapse0x2483fe0();
   input += synapse0x2484020();
   input += synapse0x2484060();
   input += synapse0x24840a0();
   input += synapse0x24840e0();
   input += synapse0x2484120();
   input += synapse0x2483bb0();
   input += synapse0x2483bf0();
   input += synapse0x2484270();
   input += synapse0x24842b0();
   input += synapse0x24842f0();
   input += synapse0x2484330();
   input += synapse0x2484370();
   input += synapse0x24843b0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2483a20() {
   double input = input0x2483a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x24843f0() {
   double input = 1.1864;
   input += synapse0x2484730();
   input += synapse0x2484770();
   input += synapse0x24847b0();
   input += synapse0x24847f0();
   input += synapse0x2484830();
   input += synapse0x2484870();
   input += synapse0x24848b0();
   input += synapse0x24848f0();
   input += synapse0x2484930();
   input += synapse0x2484970();
   input += synapse0x24849b0();
   input += synapse0x24849f0();
   input += synapse0x2484a30();
   input += synapse0x2484a70();
   input += synapse0x2484ab0();
   input += synapse0x2484af0();
   input += synapse0x2484580();
   input += synapse0x24845c0();
   input += synapse0x2484c40();
   input += synapse0x2484c80();
   input += synapse0x2484cc0();
   input += synapse0x2484d00();
   input += synapse0x2484d40();
   input += synapse0x2484d80();
   return input;
}

double NNfunction_sb_cLcR::neuron0x24843f0() {
   double input = input0x24843f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2484dc0() {
   double input = 0.706206;
   input += synapse0x2485100();
   input += synapse0x2485140();
   input += synapse0x2485180();
   input += synapse0x24851c0();
   input += synapse0x2485200();
   input += synapse0x2485240();
   input += synapse0x2485280();
   input += synapse0x24852c0();
   input += synapse0x2485300();
   input += synapse0x2485340();
   input += synapse0x2485380();
   input += synapse0x24853c0();
   input += synapse0x2485400();
   input += synapse0x2485440();
   input += synapse0x2485480();
   input += synapse0x24854c0();
   input += synapse0x2484f50();
   input += synapse0x2484f90();
   input += synapse0x2485610();
   input += synapse0x2485650();
   input += synapse0x2485690();
   input += synapse0x24856d0();
   input += synapse0x2485710();
   input += synapse0x2485750();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2484dc0() {
   double input = input0x2484dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2485790() {
   double input = 0.687839;
   input += synapse0x2485ad0();
   input += synapse0x2485b10();
   input += synapse0x2485b50();
   input += synapse0x2485b90();
   input += synapse0x2485bd0();
   input += synapse0x2485c10();
   input += synapse0x2485c50();
   input += synapse0x2485c90();
   input += synapse0x2485cd0();
   input += synapse0x2485d10();
   input += synapse0x2485d50();
   input += synapse0x2485d90();
   input += synapse0x2485dd0();
   input += synapse0x2485e10();
   input += synapse0x2485e50();
   input += synapse0x2485e90();
   input += synapse0x2485920();
   input += synapse0x2485960();
   input += synapse0x2485fe0();
   input += synapse0x2486020();
   input += synapse0x2486060();
   input += synapse0x24860a0();
   input += synapse0x24860e0();
   input += synapse0x2486120();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2485790() {
   double input = input0x2485790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2486160() {
   double input = -0.591427;
   input += synapse0x24864a0();
   input += synapse0x24864e0();
   input += synapse0x2486520();
   input += synapse0x2486560();
   input += synapse0x24865a0();
   input += synapse0x24865e0();
   input += synapse0x2486620();
   input += synapse0x2486660();
   input += synapse0x24866a0();
   input += synapse0x24866e0();
   input += synapse0x2486720();
   input += synapse0x2486760();
   input += synapse0x24867a0();
   input += synapse0x24867e0();
   input += synapse0x2486820();
   input += synapse0x2486860();
   input += synapse0x24862f0();
   input += synapse0x2486330();
   input += synapse0x24869b0();
   input += synapse0x24869f0();
   input += synapse0x2486a30();
   input += synapse0x2486a70();
   input += synapse0x2486ab0();
   input += synapse0x2486af0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2486160() {
   double input = input0x2486160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2486b30() {
   double input = 1.05419;
   input += synapse0x246f5a0();
   input += synapse0x246f5e0();
   input += synapse0x246f620();
   input += synapse0x246f660();
   input += synapse0x246f6a0();
   input += synapse0x246f6e0();
   input += synapse0x246f720();
   input += synapse0x246f760();
   input += synapse0x2487280();
   input += synapse0x24872c0();
   input += synapse0x2487300();
   input += synapse0x2487340();
   input += synapse0x2487380();
   input += synapse0x24873c0();
   input += synapse0x2487400();
   input += synapse0x2487440();
   input += synapse0x2486cc0();
   input += synapse0x2486d00();
   input += synapse0x2487590();
   input += synapse0x24875d0();
   input += synapse0x2487610();
   input += synapse0x2487650();
   input += synapse0x2487690();
   input += synapse0x24876d0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2486b30() {
   double input = input0x2486b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2487710() {
   double input = 0.776446;
   input += synapse0x2487a50();
   input += synapse0x2487a90();
   input += synapse0x2487ad0();
   input += synapse0x2487b10();
   input += synapse0x2487b50();
   input += synapse0x2487b90();
   input += synapse0x2487bd0();
   input += synapse0x2487c10();
   input += synapse0x2487c50();
   input += synapse0x2487c90();
   input += synapse0x2487cd0();
   input += synapse0x2487d10();
   input += synapse0x2487d50();
   input += synapse0x2487d90();
   input += synapse0x2487dd0();
   input += synapse0x2487e10();
   input += synapse0x24878a0();
   input += synapse0x24878e0();
   input += synapse0x2487f60();
   input += synapse0x2487fa0();
   input += synapse0x2487fe0();
   input += synapse0x2488020();
   input += synapse0x2488060();
   input += synapse0x24880a0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2487710() {
   double input = input0x2487710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x24880e0() {
   double input = 1.08238;
   input += synapse0x2488420();
   input += synapse0x2488460();
   input += synapse0x24884a0();
   input += synapse0x24884e0();
   input += synapse0x2488520();
   input += synapse0x2488560();
   input += synapse0x24885a0();
   input += synapse0x24885e0();
   input += synapse0x2488620();
   input += synapse0x2488660();
   input += synapse0x24886a0();
   input += synapse0x24886e0();
   input += synapse0x2488720();
   input += synapse0x2488760();
   input += synapse0x24887a0();
   input += synapse0x24887e0();
   input += synapse0x2488270();
   input += synapse0x24882b0();
   input += synapse0x2478de0();
   input += synapse0x2478e20();
   input += synapse0x2478e60();
   input += synapse0x2478ea0();
   input += synapse0x2478ee0();
   input += synapse0x2478f20();
   return input;
}

double NNfunction_sb_cLcR::neuron0x24880e0() {
   double input = input0x24880e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2478f60() {
   double input = -1.09051;
   input += synapse0x24792a0();
   input += synapse0x24792e0();
   input += synapse0x2479320();
   input += synapse0x2479360();
   input += synapse0x24793a0();
   input += synapse0x24793e0();
   input += synapse0x2479420();
   input += synapse0x2479460();
   input += synapse0x24794a0();
   input += synapse0x24794e0();
   input += synapse0x2479520();
   input += synapse0x2479560();
   input += synapse0x24795a0();
   input += synapse0x24795e0();
   input += synapse0x2479620();
   input += synapse0x2479660();
   input += synapse0x24790f0();
   input += synapse0x2479130();
   input += synapse0x24797b0();
   input += synapse0x24797f0();
   input += synapse0x2479830();
   input += synapse0x2479870();
   input += synapse0x24798b0();
   input += synapse0x24798f0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2478f60() {
   double input = input0x2478f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2479930() {
   double input = 0.184438;
   input += synapse0x2479c70();
   input += synapse0x2479cb0();
   input += synapse0x2479cf0();
   input += synapse0x2479d30();
   input += synapse0x2479d70();
   input += synapse0x2479db0();
   input += synapse0x2479df0();
   input += synapse0x2479e30();
   input += synapse0x2479e70();
   input += synapse0x2479eb0();
   input += synapse0x2479ef0();
   input += synapse0x2479f30();
   input += synapse0x2479f70();
   input += synapse0x2479fb0();
   input += synapse0x2479ff0();
   input += synapse0x247a030();
   input += synapse0x2479ac0();
   input += synapse0x2479b00();
   input += synapse0x247a180();
   input += synapse0x247a1c0();
   input += synapse0x247a200();
   input += synapse0x247a240();
   input += synapse0x247a280();
   input += synapse0x247a2c0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2479930() {
   double input = input0x2479930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x247a300() {
   double input = 0.130662;
   input += synapse0x247a640();
   input += synapse0x247a680();
   input += synapse0x247a6c0();
   input += synapse0x247a700();
   input += synapse0x247a740();
   input += synapse0x247a780();
   input += synapse0x247a7c0();
   input += synapse0x247a800();
   input += synapse0x247a840();
   input += synapse0x247a880();
   input += synapse0x247a8c0();
   input += synapse0x247a900();
   input += synapse0x247a940();
   input += synapse0x247a980();
   input += synapse0x247a9c0();
   input += synapse0x247aa00();
   input += synapse0x247a490();
   input += synapse0x247a4d0();
   input += synapse0x247ab50();
   input += synapse0x247ab90();
   input += synapse0x247abd0();
   input += synapse0x247ac10();
   input += synapse0x247ac50();
   input += synapse0x247ac90();
   return input;
}

double NNfunction_sb_cLcR::neuron0x247a300() {
   double input = input0x247a300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x248c940() {
   double input = 1.6825;
   input += synapse0x248cb60();
   input += synapse0x248cba0();
   input += synapse0x248cbe0();
   input += synapse0x248cc20();
   input += synapse0x248cc60();
   input += synapse0x248cca0();
   input += synapse0x248cce0();
   input += synapse0x248cd20();
   input += synapse0x248cd60();
   input += synapse0x248cda0();
   input += synapse0x248cde0();
   input += synapse0x248ce20();
   input += synapse0x248ce60();
   input += synapse0x248cea0();
   input += synapse0x248cee0();
   input += synapse0x248cf20();
   input += synapse0x247acd0();
   input += synapse0x247ad10();
   input += synapse0x248d070();
   input += synapse0x248d0b0();
   input += synapse0x248d0f0();
   input += synapse0x248d130();
   input += synapse0x248d170();
   input += synapse0x248d1b0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x248c940() {
   double input = input0x248c940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x248d1f0() {
   double input = 0.819212;
   input += synapse0x248d530();
   input += synapse0x248d570();
   input += synapse0x248d5b0();
   input += synapse0x248d5f0();
   input += synapse0x248d630();
   input += synapse0x248d670();
   input += synapse0x248d6b0();
   input += synapse0x248d6f0();
   input += synapse0x248d730();
   input += synapse0x248d770();
   input += synapse0x248d7b0();
   input += synapse0x248d7f0();
   input += synapse0x248d830();
   input += synapse0x248d870();
   input += synapse0x248d8b0();
   input += synapse0x248d8f0();
   input += synapse0x248d380();
   input += synapse0x248d3c0();
   input += synapse0x248da40();
   input += synapse0x248da80();
   input += synapse0x248dac0();
   input += synapse0x248db00();
   input += synapse0x248db40();
   input += synapse0x248db80();
   return input;
}

double NNfunction_sb_cLcR::neuron0x248d1f0() {
   double input = input0x248d1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x248dbc0() {
   double input = -1.60382;
   input += synapse0x248df00();
   input += synapse0x248df40();
   input += synapse0x248df80();
   input += synapse0x248dfc0();
   input += synapse0x248e000();
   input += synapse0x248e040();
   input += synapse0x248e080();
   input += synapse0x248e0c0();
   input += synapse0x248e100();
   input += synapse0x248e140();
   input += synapse0x248e180();
   input += synapse0x248e1c0();
   input += synapse0x248e200();
   input += synapse0x248e240();
   input += synapse0x248e280();
   input += synapse0x248e2c0();
   input += synapse0x248dd50();
   input += synapse0x248dd90();
   input += synapse0x248e410();
   input += synapse0x248e450();
   input += synapse0x248e490();
   input += synapse0x248e4d0();
   input += synapse0x248e510();
   input += synapse0x248e550();
   return input;
}

double NNfunction_sb_cLcR::neuron0x248dbc0() {
   double input = input0x248dbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x248e590() {
   double input = 2.01394;
   input += synapse0x248e8d0();
   input += synapse0x248e910();
   input += synapse0x248e950();
   input += synapse0x248e990();
   input += synapse0x248e9d0();
   input += synapse0x248ea10();
   input += synapse0x248ea50();
   input += synapse0x248ea90();
   input += synapse0x248ead0();
   input += synapse0x248eb10();
   input += synapse0x248eb50();
   input += synapse0x248eb90();
   input += synapse0x248ebd0();
   input += synapse0x248ec10();
   input += synapse0x248ec50();
   input += synapse0x248ec90();
   input += synapse0x248e720();
   input += synapse0x248e760();
   input += synapse0x248ede0();
   input += synapse0x248ee20();
   input += synapse0x248ee60();
   input += synapse0x248eea0();
   input += synapse0x248eee0();
   input += synapse0x248ef20();
   return input;
}

double NNfunction_sb_cLcR::neuron0x248e590() {
   double input = input0x248e590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2495790() {
   double input = -1.96361;
   input += synapse0x246b4c0();
   input += synapse0x246b500();
   input += synapse0x246c9d0();
   input += synapse0x246ca10();
   input += synapse0x246d3a0();
   input += synapse0x246d3e0();
   input += synapse0x246e170();
   input += synapse0x246e1b0();
   input += synapse0x246eb40();
   input += synapse0x246eb80();
   input += synapse0x246f510();
   input += synapse0x246f550();
   input += synapse0x246fff0();
   input += synapse0x2470030();
   input += synapse0x24709c0();
   input += synapse0x2470a00();
   input += synapse0x246daa0();
   input += synapse0x246dae0();
   input += synapse0x2472570();
   input += synapse0x24725b0();
   input += synapse0x2472f40();
   input += synapse0x2472f80();
   input += synapse0x2473910();
   input += synapse0x2473950();
   input += synapse0x24742e0();
   input += synapse0x2474320();
   input += synapse0x2468450();
   input += synapse0x2468490();
   input += synapse0x24763d0();
   input += synapse0x2476410();
   input += synapse0x2476da0();
   input += synapse0x2476de0();
   input += synapse0x2477770();
   input += synapse0x24777b0();
   input += synapse0x2478140();
   input += synapse0x2478180();
   input += synapse0x2478b10();
   input += synapse0x2478b50();
   input += synapse0x2471660();
   input += synapse0x24716a0();
   input += synapse0x247af10();
   input += synapse0x247af50();
   input += synapse0x247b8a0();
   input += synapse0x247b8e0();
   input += synapse0x247c270();
   input += synapse0x247c2b0();
   input += synapse0x247cc40();
   input += synapse0x247cc80();
   input += synapse0x247d610();
   input += synapse0x247d650();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2495790() {
   double input = input0x2495790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2495b30() {
   double input = -0.393637;
   input += synapse0x247fd50();
   input += synapse0x247fd90();
   input += synapse0x2475310();
   input += synapse0x2475350();
   input += synapse0x2482930();
   input += synapse0x2482970();
   input += synapse0x2483300();
   input += synapse0x2483340();
   input += synapse0x2483cd0();
   input += synapse0x2483d10();
   input += synapse0x24846a0();
   input += synapse0x24846e0();
   input += synapse0x2485070();
   input += synapse0x24850b0();
   input += synapse0x2485a40();
   input += synapse0x2485a80();
   input += synapse0x2486410();
   input += synapse0x2486450();
   input += synapse0x2486de0();
   input += synapse0x2486e20();
   input += synapse0x24879c0();
   input += synapse0x2487a00();
   input += synapse0x2488390();
   input += synapse0x24883d0();
   input += synapse0x2479210();
   input += synapse0x2479250();
   input += synapse0x2479be0();
   input += synapse0x2479c20();
   input += synapse0x247a5b0();
   input += synapse0x247a5f0();
   input += synapse0x248cad0();
   input += synapse0x248cb10();
   input += synapse0x248d4a0();
   input += synapse0x248d4e0();
   input += synapse0x248de70();
   input += synapse0x248deb0();
   input += synapse0x248e840();
   input += synapse0x248e880();
   input += synapse0x246a730();
   input += synapse0x246a770();
   input += synapse0x247dfe0();
   input += synapse0x247e020();
   input += synapse0x248ef60();
   input += synapse0x248efa0();
   input += synapse0x248efe0();
   input += synapse0x248f020();
   input += synapse0x2495ed0();
   input += synapse0x2495f10();
   input += synapse0x2495f50();
   input += synapse0x2495f90();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2495b30() {
   double input = input0x2495b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2495fd0() {
   double input = 0.773432;
   input += synapse0x2496310();
   input += synapse0x2496350();
   input += synapse0x2496390();
   input += synapse0x24963d0();
   input += synapse0x2496410();
   input += synapse0x2496450();
   input += synapse0x2496490();
   input += synapse0x24964d0();
   input += synapse0x2496510();
   input += synapse0x2496550();
   input += synapse0x2496590();
   input += synapse0x24965d0();
   input += synapse0x2496610();
   input += synapse0x2496650();
   input += synapse0x2496690();
   input += synapse0x24966d0();
   input += synapse0x2496160();
   input += synapse0x24961a0();
   input += synapse0x2496820();
   input += synapse0x2496860();
   input += synapse0x24968a0();
   input += synapse0x24968e0();
   input += synapse0x2496920();
   input += synapse0x2496960();
   input += synapse0x24969a0();
   input += synapse0x24969e0();
   input += synapse0x2496a20();
   input += synapse0x2496a60();
   input += synapse0x2496aa0();
   input += synapse0x2496ae0();
   input += synapse0x2496b20();
   input += synapse0x2496b60();
   input += synapse0x2496710();
   input += synapse0x2496750();
   input += synapse0x2496790();
   input += synapse0x24967d0();
   input += synapse0x2496db0();
   input += synapse0x2496df0();
   input += synapse0x2496e30();
   input += synapse0x2496e70();
   input += synapse0x2496eb0();
   input += synapse0x2496ef0();
   input += synapse0x2496f30();
   input += synapse0x2496f70();
   input += synapse0x2496fb0();
   input += synapse0x2496ff0();
   input += synapse0x2497030();
   input += synapse0x2497070();
   input += synapse0x24970b0();
   input += synapse0x24970f0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2495fd0() {
   double input = input0x2495fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2497130() {
   double input = -1.08557;
   input += synapse0x2497470();
   input += synapse0x24974b0();
   input += synapse0x24974f0();
   input += synapse0x2497530();
   input += synapse0x2497570();
   input += synapse0x24975b0();
   input += synapse0x24975f0();
   input += synapse0x2497630();
   input += synapse0x2497670();
   input += synapse0x24976b0();
   input += synapse0x24976f0();
   input += synapse0x2497730();
   input += synapse0x2497770();
   input += synapse0x24977b0();
   input += synapse0x24977f0();
   input += synapse0x2497830();
   input += synapse0x24972c0();
   input += synapse0x2497300();
   input += synapse0x2497980();
   input += synapse0x24979c0();
   input += synapse0x2497a00();
   input += synapse0x2497a40();
   input += synapse0x2497a80();
   input += synapse0x2497ac0();
   input += synapse0x2497b00();
   input += synapse0x2497b40();
   input += synapse0x2497b80();
   input += synapse0x2497bc0();
   input += synapse0x2497c00();
   input += synapse0x2497c40();
   input += synapse0x2497c80();
   input += synapse0x2497cc0();
   input += synapse0x2497870();
   input += synapse0x24978b0();
   input += synapse0x24978f0();
   input += synapse0x2497930();
   input += synapse0x2497f10();
   input += synapse0x2497f50();
   input += synapse0x2497f90();
   input += synapse0x2497fd0();
   input += synapse0x2498010();
   input += synapse0x2498050();
   input += synapse0x2498090();
   input += synapse0x24980d0();
   input += synapse0x2498110();
   input += synapse0x2498150();
   input += synapse0x2498190();
   input += synapse0x24981d0();
   input += synapse0x2498210();
   input += synapse0x2498250();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2497130() {
   double input = input0x2497130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x2498290() {
   double input = 2.02388;
   input += synapse0x24985d0();
   input += synapse0x2498610();
   input += synapse0x2498650();
   input += synapse0x2498690();
   input += synapse0x24986d0();
   input += synapse0x2498710();
   input += synapse0x2498750();
   input += synapse0x2498790();
   input += synapse0x24987d0();
   input += synapse0x2498810();
   input += synapse0x2498850();
   input += synapse0x2498890();
   input += synapse0x24988d0();
   input += synapse0x2498910();
   input += synapse0x2498950();
   input += synapse0x2498990();
   input += synapse0x2498420();
   input += synapse0x2498460();
   input += synapse0x2498ae0();
   input += synapse0x2498b20();
   input += synapse0x2498b60();
   input += synapse0x2498ba0();
   input += synapse0x2498be0();
   input += synapse0x2498c20();
   input += synapse0x2498c60();
   input += synapse0x2498ca0();
   input += synapse0x2498ce0();
   input += synapse0x2498d20();
   input += synapse0x2498d60();
   input += synapse0x2498da0();
   input += synapse0x2498de0();
   input += synapse0x2498e20();
   input += synapse0x24989d0();
   input += synapse0x2498a10();
   input += synapse0x2498a50();
   input += synapse0x2498a90();
   input += synapse0x2499070();
   input += synapse0x24990b0();
   input += synapse0x24990f0();
   input += synapse0x2499130();
   input += synapse0x2499170();
   input += synapse0x24991b0();
   input += synapse0x24991f0();
   input += synapse0x2499230();
   input += synapse0x2499270();
   input += synapse0x24992b0();
   input += synapse0x24992f0();
   input += synapse0x2499330();
   input += synapse0x2499370();
   input += synapse0x24993b0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x2498290() {
   double input = input0x2498290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLcR::input0x24993f0() {
   double input = 7.50696;
   input += synapse0x246a4d0();
   input += synapse0x2499610();
   input += synapse0x2499650();
   input += synapse0x2499690();
   input += synapse0x24996d0();
   return input;
}

double NNfunction_sb_cLcR::neuron0x24993f0() {
   double input = input0x24993f0();
   return (input * 1)+0;
}

double NNfunction_sb_cLcR::synapse0x2225320() {
   return (neuron0x24654b0()*-0.426141);
}

double NNfunction_sb_cLcR::synapse0x2465370() {
   return (neuron0x24657f0()*1.35628);
}

double NNfunction_sb_cLcR::synapse0x24653b0() {
   return (neuron0x2465b30()*0.16765);
}

double NNfunction_sb_cLcR::synapse0x246a7c0() {
   return (neuron0x2465e70()*-1.08644);
}

double NNfunction_sb_cLcR::synapse0x246a800() {
   return (neuron0x24661b0()*-0.100296);
}

double NNfunction_sb_cLcR::synapse0x246a840() {
   return (neuron0x24664f0()*0.200071);
}

double NNfunction_sb_cLcR::synapse0x246a880() {
   return (neuron0x2466830()*0.0207951);
}

double NNfunction_sb_cLcR::synapse0x246a8c0() {
   return (neuron0x2466b70()*0.223312);
}

double NNfunction_sb_cLcR::synapse0x246a900() {
   return (neuron0x2466eb0()*-0.233345);
}

double NNfunction_sb_cLcR::synapse0x246a940() {
   return (neuron0x24671f0()*0.243519);
}

double NNfunction_sb_cLcR::synapse0x246a980() {
   return (neuron0x2467530()*-0.0496173);
}

double NNfunction_sb_cLcR::synapse0x246a9c0() {
   return (neuron0x2467870()*0.0686937);
}

double NNfunction_sb_cLcR::synapse0x246aa00() {
   return (neuron0x2467bb0()*0.57092);
}

double NNfunction_sb_cLcR::synapse0x246aa40() {
   return (neuron0x2467ef0()*0.315913);
}

double NNfunction_sb_cLcR::synapse0x246aa80() {
   return (neuron0x2468230()*-0.335398);
}

double NNfunction_sb_cLcR::synapse0x246aac0() {
   return (neuron0x2468570()*0.252728);
}

double NNfunction_sb_cLcR::synapse0x24652e0() {
   return (neuron0x24688b0()*0.348417);
}

double NNfunction_sb_cLcR::synapse0x2465320() {
   return (neuron0x2468e10()*0.310544);
}

double NNfunction_sb_cLcR::synapse0x2216bc0() {
   return (neuron0x2469030()*-0.324572);
}

double NNfunction_sb_cLcR::synapse0x2216c00() {
   return (neuron0x2469370()*-0.189877);
}

double NNfunction_sb_cLcR::synapse0x246ad20() {
   return (neuron0x24696b0()*-0.210904);
}

double NNfunction_sb_cLcR::synapse0x246ad60() {
   return (neuron0x24699f0()*0.158157);
}

double NNfunction_sb_cLcR::synapse0x246ada0() {
   return (neuron0x2469d30()*0.241015);
}

double NNfunction_sb_cLcR::synapse0x246ade0() {
   return (neuron0x246a070()*-0.23911);
}

double NNfunction_sb_cLcR::synapse0x246b160() {
   return (neuron0x24654b0()*-0.0323032);
}

double NNfunction_sb_cLcR::synapse0x246b1a0() {
   return (neuron0x24657f0()*-0.0474265);
}

double NNfunction_sb_cLcR::synapse0x246b1e0() {
   return (neuron0x2465b30()*-0.071608);
}

double NNfunction_sb_cLcR::synapse0x246b220() {
   return (neuron0x2465e70()*13.067);
}

double NNfunction_sb_cLcR::synapse0x246b260() {
   return (neuron0x24661b0()*-0.0218677);
}

double NNfunction_sb_cLcR::synapse0x246b2a0() {
   return (neuron0x24664f0()*0.0165108);
}

double NNfunction_sb_cLcR::synapse0x246b2e0() {
   return (neuron0x2466830()*-0.0234549);
}

double NNfunction_sb_cLcR::synapse0x246b320() {
   return (neuron0x2466b70()*0.00550293);
}

double NNfunction_sb_cLcR::synapse0x246b360() {
   return (neuron0x2466eb0()*-0.0132221);
}

double NNfunction_sb_cLcR::synapse0x246ac10() {
   return (neuron0x24671f0()*0.0105783);
}

double NNfunction_sb_cLcR::synapse0x246ac50() {
   return (neuron0x2467530()*0.0357106);
}

double NNfunction_sb_cLcR::synapse0x246ac90() {
   return (neuron0x2467870()*0.0208815);
}

double NNfunction_sb_cLcR::synapse0x246acd0() {
   return (neuron0x2467bb0()*-0.167906);
}

double NNfunction_sb_cLcR::synapse0x246b5b0() {
   return (neuron0x2467ef0()*-0.101674);
}

double NNfunction_sb_cLcR::synapse0x246b5f0() {
   return (neuron0x2468230()*0.0124053);
}

double NNfunction_sb_cLcR::synapse0x246b630() {
   return (neuron0x2468570()*-0.396259);
}

double NNfunction_sb_cLcR::synapse0x246afb0() {
   return (neuron0x24688b0()*-0.0267066);
}

double NNfunction_sb_cLcR::synapse0x246aff0() {
   return (neuron0x2468e10()*0.038027);
}

double NNfunction_sb_cLcR::synapse0x246b780() {
   return (neuron0x2469030()*0.138182);
}

double NNfunction_sb_cLcR::synapse0x246b7c0() {
   return (neuron0x2469370()*0.0557193);
}

double NNfunction_sb_cLcR::synapse0x246b800() {
   return (neuron0x24696b0()*-0.0195199);
}

double NNfunction_sb_cLcR::synapse0x246b840() {
   return (neuron0x24699f0()*0.0367511);
}

double NNfunction_sb_cLcR::synapse0x246b880() {
   return (neuron0x2469d30()*-0.0258902);
}

double NNfunction_sb_cLcR::synapse0x246b8c0() {
   return (neuron0x246a070()*0.0549581);
}

double NNfunction_sb_cLcR::synapse0x246bc40() {
   return (neuron0x24654b0()*-0.0853466);
}

double NNfunction_sb_cLcR::synapse0x246bc80() {
   return (neuron0x24657f0()*-0.150906);
}

double NNfunction_sb_cLcR::synapse0x246bcc0() {
   return (neuron0x2465b30()*-0.115004);
}

double NNfunction_sb_cLcR::synapse0x246bd00() {
   return (neuron0x2465e70()*-0.474742);
}

double NNfunction_sb_cLcR::synapse0x246bd40() {
   return (neuron0x24661b0()*-0.0365537);
}

double NNfunction_sb_cLcR::synapse0x246bd80() {
   return (neuron0x24664f0()*0.00375495);
}

double NNfunction_sb_cLcR::synapse0x246bdc0() {
   return (neuron0x2466830()*-0.000314974);
}

double NNfunction_sb_cLcR::synapse0x246be00() {
   return (neuron0x2466b70()*0.0256773);
}

double NNfunction_sb_cLcR::synapse0x246be40() {
   return (neuron0x2466eb0()*-0.0676972);
}

double NNfunction_sb_cLcR::synapse0x246be80() {
   return (neuron0x24671f0()*-0.00785231);
}

double NNfunction_sb_cLcR::synapse0x246bec0() {
   return (neuron0x2467530()*0.0987104);
}

double NNfunction_sb_cLcR::synapse0x246bf00() {
   return (neuron0x2467870()*0.692069);
}

double NNfunction_sb_cLcR::synapse0x246bf40() {
   return (neuron0x2467bb0()*0.0214697);
}

double NNfunction_sb_cLcR::synapse0x246bf80() {
   return (neuron0x2467ef0()*-0.125092);
}

double NNfunction_sb_cLcR::synapse0x246bfc0() {
   return (neuron0x2468230()*0.208885);
}

double NNfunction_sb_cLcR::synapse0x246c000() {
   return (neuron0x2468570()*-0.0552444);
}

double NNfunction_sb_cLcR::synapse0x246ba90() {
   return (neuron0x24688b0()*-0.095438);
}

double NNfunction_sb_cLcR::synapse0x246bad0() {
   return (neuron0x2468e10()*0.455939);
}

double NNfunction_sb_cLcR::synapse0x2224a10() {
   return (neuron0x2469030()*0.189899);
}

double NNfunction_sb_cLcR::synapse0x2224a50() {
   return (neuron0x2469370()*-0.0576377);
}

double NNfunction_sb_cLcR::synapse0x2454540() {
   return (neuron0x24696b0()*-0.0462843);
}

double NNfunction_sb_cLcR::synapse0x2454580() {
   return (neuron0x24699f0()*0.0117642);
}

double NNfunction_sb_cLcR::synapse0x24545c0() {
   return (neuron0x2469d30()*-0.00102982);
}

double NNfunction_sb_cLcR::synapse0x24653f0() {
   return (neuron0x246a070()*-0.0269542);
}

double NNfunction_sb_cLcR::synapse0x246b550() {
   return (neuron0x24654b0()*0.46116);
}

double NNfunction_sb_cLcR::synapse0x2465430() {
   return (neuron0x24657f0()*0.824348);
}

double NNfunction_sb_cLcR::synapse0x2465470() {
   return (neuron0x2465b30()*-0.755974);
}

double NNfunction_sb_cLcR::synapse0x246c150() {
   return (neuron0x2465e70()*0.976251);
}

double NNfunction_sb_cLcR::synapse0x246c190() {
   return (neuron0x24661b0()*0.513223);
}

double NNfunction_sb_cLcR::synapse0x246c1d0() {
   return (neuron0x24664f0()*0.0372061);
}

double NNfunction_sb_cLcR::synapse0x246c210() {
   return (neuron0x2466830()*0.353069);
}

double NNfunction_sb_cLcR::synapse0x246c250() {
   return (neuron0x2466b70()*-0.249265);
}

double NNfunction_sb_cLcR::synapse0x246c290() {
   return (neuron0x2466eb0()*0.263565);
}

double NNfunction_sb_cLcR::synapse0x246c2d0() {
   return (neuron0x24671f0()*0.521137);
}

double NNfunction_sb_cLcR::synapse0x246c310() {
   return (neuron0x2467530()*-0.350841);
}

double NNfunction_sb_cLcR::synapse0x246c350() {
   return (neuron0x2467870()*-0.155674);
}

double NNfunction_sb_cLcR::synapse0x246c390() {
   return (neuron0x2467bb0()*-0.0545355);
}

double NNfunction_sb_cLcR::synapse0x246c3d0() {
   return (neuron0x2467ef0()*0.356652);
}

double NNfunction_sb_cLcR::synapse0x246c410() {
   return (neuron0x2468230()*-0.0246496);
}

double NNfunction_sb_cLcR::synapse0x246c450() {
   return (neuron0x2468570()*0.069164);
}

double NNfunction_sb_cLcR::synapse0x246b3a0() {
   return (neuron0x24688b0()*-0.121159);
}

double NNfunction_sb_cLcR::synapse0x246b3e0() {
   return (neuron0x2468e10()*0.355442);
}

double NNfunction_sb_cLcR::synapse0x246c5a0() {
   return (neuron0x2469030()*0.072824);
}

double NNfunction_sb_cLcR::synapse0x246c5e0() {
   return (neuron0x2469370()*-0.0374558);
}

double NNfunction_sb_cLcR::synapse0x246c620() {
   return (neuron0x24696b0()*0.590017);
}

double NNfunction_sb_cLcR::synapse0x246c660() {
   return (neuron0x24699f0()*0.000234696);
}

double NNfunction_sb_cLcR::synapse0x246c6a0() {
   return (neuron0x2469d30()*0.21559);
}

double NNfunction_sb_cLcR::synapse0x246c6e0() {
   return (neuron0x246a070()*0.266008);
}

double NNfunction_sb_cLcR::synapse0x246ca60() {
   return (neuron0x24654b0()*0.000986906);
}

double NNfunction_sb_cLcR::synapse0x246caa0() {
   return (neuron0x24657f0()*0.0152693);
}

double NNfunction_sb_cLcR::synapse0x246cae0() {
   return (neuron0x2465b30()*-0.0176609);
}

double NNfunction_sb_cLcR::synapse0x246cb20() {
   return (neuron0x2465e70()*-0.026053);
}

double NNfunction_sb_cLcR::synapse0x246cb60() {
   return (neuron0x24661b0()*0.00448687);
}

double NNfunction_sb_cLcR::synapse0x246cba0() {
   return (neuron0x24664f0()*-0.0764031);
}

double NNfunction_sb_cLcR::synapse0x246cbe0() {
   return (neuron0x2466830()*-0.00102517);
}

double NNfunction_sb_cLcR::synapse0x246cc20() {
   return (neuron0x2466b70()*-0.0570472);
}

double NNfunction_sb_cLcR::synapse0x246cc60() {
   return (neuron0x2466eb0()*-0.00908792);
}

double NNfunction_sb_cLcR::synapse0x246cca0() {
   return (neuron0x24671f0()*-0.00863198);
}

double NNfunction_sb_cLcR::synapse0x246cce0() {
   return (neuron0x2467530()*0.0101514);
}

double NNfunction_sb_cLcR::synapse0x246cd20() {
   return (neuron0x2467870()*-0.0070365);
}

double NNfunction_sb_cLcR::synapse0x246cd60() {
   return (neuron0x2467bb0()*-0.182613);
}

double NNfunction_sb_cLcR::synapse0x246cda0() {
   return (neuron0x2467ef0()*0.00937123);
}

double NNfunction_sb_cLcR::synapse0x246cde0() {
   return (neuron0x2468230()*0.0172347);
}

double NNfunction_sb_cLcR::synapse0x246ce20() {
   return (neuron0x2468570()*2.08111);
}

double NNfunction_sb_cLcR::synapse0x246c8b0() {
   return (neuron0x24688b0()*0.0860966);
}

double NNfunction_sb_cLcR::synapse0x246c8f0() {
   return (neuron0x2468e10()*9.83684e-05);
}

double NNfunction_sb_cLcR::synapse0x246cf70() {
   return (neuron0x2469030()*-0.0402835);
}

double NNfunction_sb_cLcR::synapse0x246cfb0() {
   return (neuron0x2469370()*0.0115991);
}

double NNfunction_sb_cLcR::synapse0x246cff0() {
   return (neuron0x24696b0()*-0.0418613);
}

double NNfunction_sb_cLcR::synapse0x246d030() {
   return (neuron0x24699f0()*0.000736242);
}

double NNfunction_sb_cLcR::synapse0x246d070() {
   return (neuron0x2469d30()*0.0113221);
}

double NNfunction_sb_cLcR::synapse0x246d0b0() {
   return (neuron0x246a070()*-0.0147517);
}

double NNfunction_sb_cLcR::synapse0x246d430() {
   return (neuron0x24654b0()*0.0835356);
}

double NNfunction_sb_cLcR::synapse0x246d470() {
   return (neuron0x24657f0()*0.252947);
}

double NNfunction_sb_cLcR::synapse0x246d4b0() {
   return (neuron0x2465b30()*0.215051);
}

double NNfunction_sb_cLcR::synapse0x246d4f0() {
   return (neuron0x2465e70()*-0.465511);
}

double NNfunction_sb_cLcR::synapse0x246d530() {
   return (neuron0x24661b0()*-0.0962791);
}

double NNfunction_sb_cLcR::synapse0x246d570() {
   return (neuron0x24664f0()*-0.0674647);
}

double NNfunction_sb_cLcR::synapse0x246d5b0() {
   return (neuron0x2466830()*-0.294388);
}

double NNfunction_sb_cLcR::synapse0x246d5f0() {
   return (neuron0x2466b70()*-0.0832517);
}

double NNfunction_sb_cLcR::synapse0x246d630() {
   return (neuron0x2466eb0()*0.356346);
}

double NNfunction_sb_cLcR::synapse0x2224d80() {
   return (neuron0x24671f0()*0.100419);
}

double NNfunction_sb_cLcR::synapse0x2224dc0() {
   return (neuron0x2467530()*0.210634);
}

double NNfunction_sb_cLcR::synapse0x2224e00() {
   return (neuron0x2467870()*-0.07629);
}

double NNfunction_sb_cLcR::synapse0x2224e40() {
   return (neuron0x2467bb0()*0.302319);
}

double NNfunction_sb_cLcR::synapse0x2224e80() {
   return (neuron0x2467ef0()*0.108671);
}

double NNfunction_sb_cLcR::synapse0x2224ec0() {
   return (neuron0x2468230()*-0.0461336);
}

double NNfunction_sb_cLcR::synapse0x2224f00() {
   return (neuron0x2468570()*-0.539642);
}

double NNfunction_sb_cLcR::synapse0x246d280() {
   return (neuron0x24688b0()*-0.10478);
}

double NNfunction_sb_cLcR::synapse0x246d2c0() {
   return (neuron0x2468e10()*0.438077);
}

double NNfunction_sb_cLcR::synapse0x2225050() {
   return (neuron0x2469030()*0.547796);
}

double NNfunction_sb_cLcR::synapse0x2225090() {
   return (neuron0x2469370()*-0.216469);
}

double NNfunction_sb_cLcR::synapse0x22250d0() {
   return (neuron0x24696b0()*0.0138987);
}

double NNfunction_sb_cLcR::synapse0x2225110() {
   return (neuron0x24699f0()*-0.135681);
}

double NNfunction_sb_cLcR::synapse0x2225150() {
   return (neuron0x2469d30()*-0.138721);
}

double NNfunction_sb_cLcR::synapse0x246de80() {
   return (neuron0x246a070()*0.101307);
}

double NNfunction_sb_cLcR::synapse0x246e200() {
   return (neuron0x24654b0()*0.0248138);
}

double NNfunction_sb_cLcR::synapse0x246e240() {
   return (neuron0x24657f0()*-0.16619);
}

double NNfunction_sb_cLcR::synapse0x246e280() {
   return (neuron0x2465b30()*0.338048);
}

double NNfunction_sb_cLcR::synapse0x246e2c0() {
   return (neuron0x2465e70()*1.26227);
}

double NNfunction_sb_cLcR::synapse0x246e300() {
   return (neuron0x24661b0()*0.0380688);
}

double NNfunction_sb_cLcR::synapse0x246e340() {
   return (neuron0x24664f0()*-0.126551);
}

double NNfunction_sb_cLcR::synapse0x246e380() {
   return (neuron0x2466830()*0.0213992);
}

double NNfunction_sb_cLcR::synapse0x246e3c0() {
   return (neuron0x2466b70()*-0.238489);
}

double NNfunction_sb_cLcR::synapse0x246e400() {
   return (neuron0x2466eb0()*0.0331739);
}

double NNfunction_sb_cLcR::synapse0x246e440() {
   return (neuron0x24671f0()*0.0344656);
}

double NNfunction_sb_cLcR::synapse0x246e480() {
   return (neuron0x2467530()*0.023355);
}

double NNfunction_sb_cLcR::synapse0x246e4c0() {
   return (neuron0x2467870()*0.0331911);
}

double NNfunction_sb_cLcR::synapse0x246e500() {
   return (neuron0x2467bb0()*0.288825);
}

double NNfunction_sb_cLcR::synapse0x246e540() {
   return (neuron0x2467ef0()*-0.23891);
}

double NNfunction_sb_cLcR::synapse0x246e580() {
   return (neuron0x2468230()*-0.170812);
}

double NNfunction_sb_cLcR::synapse0x246e5c0() {
   return (neuron0x2468570()*0.135107);
}

double NNfunction_sb_cLcR::synapse0x246e050() {
   return (neuron0x24688b0()*-0.369196);
}

double NNfunction_sb_cLcR::synapse0x246e090() {
   return (neuron0x2468e10()*0.117136);
}

double NNfunction_sb_cLcR::synapse0x246e710() {
   return (neuron0x2469030()*-0.117241);
}

double NNfunction_sb_cLcR::synapse0x246e750() {
   return (neuron0x2469370()*0.27561);
}

double NNfunction_sb_cLcR::synapse0x246e790() {
   return (neuron0x24696b0()*0.0784524);
}

double NNfunction_sb_cLcR::synapse0x246e7d0() {
   return (neuron0x24699f0()*0.00829916);
}

double NNfunction_sb_cLcR::synapse0x246e810() {
   return (neuron0x2469d30()*-0.0778936);
}

double NNfunction_sb_cLcR::synapse0x246e850() {
   return (neuron0x246a070()*0.0966459);
}

double NNfunction_sb_cLcR::synapse0x246ebd0() {
   return (neuron0x24654b0()*0.018844);
}

double NNfunction_sb_cLcR::synapse0x246ec10() {
   return (neuron0x24657f0()*0.0102183);
}

double NNfunction_sb_cLcR::synapse0x246ec50() {
   return (neuron0x2465b30()*0.16541);
}

double NNfunction_sb_cLcR::synapse0x246ec90() {
   return (neuron0x2465e70()*-0.381354);
}

double NNfunction_sb_cLcR::synapse0x246ecd0() {
   return (neuron0x24661b0()*-0.209252);
}

double NNfunction_sb_cLcR::synapse0x246ed10() {
   return (neuron0x24664f0()*0.398516);
}

double NNfunction_sb_cLcR::synapse0x246ed50() {
   return (neuron0x2466830()*-0.0187707);
}

double NNfunction_sb_cLcR::synapse0x246ed90() {
   return (neuron0x2466b70()*0.546676);
}

double NNfunction_sb_cLcR::synapse0x246edd0() {
   return (neuron0x2466eb0()*0.0910666);
}

double NNfunction_sb_cLcR::synapse0x246ee10() {
   return (neuron0x24671f0()*0.0341183);
}

double NNfunction_sb_cLcR::synapse0x246ee50() {
   return (neuron0x2467530()*0.0378499);
}

double NNfunction_sb_cLcR::synapse0x246ee90() {
   return (neuron0x2467870()*-0.0187571);
}

double NNfunction_sb_cLcR::synapse0x246eed0() {
   return (neuron0x2467bb0()*-0.138479);
}

double NNfunction_sb_cLcR::synapse0x246ef10() {
   return (neuron0x2467ef0()*0.138525);
}

double NNfunction_sb_cLcR::synapse0x246ef50() {
   return (neuron0x2468230()*-0.0335805);
}

double NNfunction_sb_cLcR::synapse0x246ef90() {
   return (neuron0x2468570()*0.557407);
}

double NNfunction_sb_cLcR::synapse0x246ea20() {
   return (neuron0x24688b0()*0.138197);
}

double NNfunction_sb_cLcR::synapse0x246ea60() {
   return (neuron0x2468e10()*0.0986411);
}

double NNfunction_sb_cLcR::synapse0x246f0e0() {
   return (neuron0x2469030()*-0.0932947);
}

double NNfunction_sb_cLcR::synapse0x246f120() {
   return (neuron0x2469370()*0.0119982);
}

double NNfunction_sb_cLcR::synapse0x246f160() {
   return (neuron0x24696b0()*-0.077119);
}

double NNfunction_sb_cLcR::synapse0x246f1a0() {
   return (neuron0x24699f0()*-0.109705);
}

double NNfunction_sb_cLcR::synapse0x246f1e0() {
   return (neuron0x2469d30()*-0.0917013);
}

double NNfunction_sb_cLcR::synapse0x246f220() {
   return (neuron0x246a070()*0.00522801);
}

double NNfunction_sb_cLcR::synapse0x2468d00() {
   return (neuron0x24654b0()*0.294905);
}

double NNfunction_sb_cLcR::synapse0x2468d40() {
   return (neuron0x24657f0()*0.686928);
}

double NNfunction_sb_cLcR::synapse0x2468d80() {
   return (neuron0x2465b30()*0.132006);
}

double NNfunction_sb_cLcR::synapse0x2468dc0() {
   return (neuron0x2465e70()*-0.465187);
}

double NNfunction_sb_cLcR::synapse0x246f7b0() {
   return (neuron0x24661b0()*0.280889);
}

double NNfunction_sb_cLcR::synapse0x246f7f0() {
   return (neuron0x24664f0()*-0.235681);
}

double NNfunction_sb_cLcR::synapse0x246f830() {
   return (neuron0x2466830()*-0.163473);
}

double NNfunction_sb_cLcR::synapse0x246f870() {
   return (neuron0x2466b70()*0.0577126);
}

double NNfunction_sb_cLcR::synapse0x246f8b0() {
   return (neuron0x2466eb0()*-0.534865);
}

double NNfunction_sb_cLcR::synapse0x246f8f0() {
   return (neuron0x24671f0()*0.870642);
}

double NNfunction_sb_cLcR::synapse0x246f930() {
   return (neuron0x2467530()*0.381592);
}

double NNfunction_sb_cLcR::synapse0x246f970() {
   return (neuron0x2467870()*0.302448);
}

double NNfunction_sb_cLcR::synapse0x246f9b0() {
   return (neuron0x2467bb0()*-0.508559);
}

double NNfunction_sb_cLcR::synapse0x246f9f0() {
   return (neuron0x2467ef0()*0.422748);
}

double NNfunction_sb_cLcR::synapse0x246fa30() {
   return (neuron0x2468230()*-0.128002);
}

double NNfunction_sb_cLcR::synapse0x246fa70() {
   return (neuron0x2468570()*-0.475906);
}

double NNfunction_sb_cLcR::synapse0x246f3f0() {
   return (neuron0x24688b0()*-0.0304721);
}

double NNfunction_sb_cLcR::synapse0x246f430() {
   return (neuron0x2468e10()*0.320027);
}

double NNfunction_sb_cLcR::synapse0x246fbc0() {
   return (neuron0x2469030()*0.899519);
}

double NNfunction_sb_cLcR::synapse0x246fc00() {
   return (neuron0x2469370()*0.203755);
}

double NNfunction_sb_cLcR::synapse0x246fc40() {
   return (neuron0x24696b0()*-0.0840452);
}

double NNfunction_sb_cLcR::synapse0x246fc80() {
   return (neuron0x24699f0()*-0.113328);
}

double NNfunction_sb_cLcR::synapse0x246fcc0() {
   return (neuron0x2469d30()*0.0511072);
}

double NNfunction_sb_cLcR::synapse0x246fd00() {
   return (neuron0x246a070()*0.709899);
}

double NNfunction_sb_cLcR::synapse0x2470080() {
   return (neuron0x24654b0()*0.000150249);
}

double NNfunction_sb_cLcR::synapse0x24700c0() {
   return (neuron0x24657f0()*0.00426061);
}

double NNfunction_sb_cLcR::synapse0x2470100() {
   return (neuron0x2465b30()*0.030352);
}

double NNfunction_sb_cLcR::synapse0x2470140() {
   return (neuron0x2465e70()*0.321328);
}

double NNfunction_sb_cLcR::synapse0x2470180() {
   return (neuron0x24661b0()*-0.00992345);
}

double NNfunction_sb_cLcR::synapse0x24701c0() {
   return (neuron0x24664f0()*-0.0163953);
}

double NNfunction_sb_cLcR::synapse0x2470200() {
   return (neuron0x2466830()*-0.0110095);
}

double NNfunction_sb_cLcR::synapse0x2470240() {
   return (neuron0x2466b70()*-0.0146215);
}

double NNfunction_sb_cLcR::synapse0x2470280() {
   return (neuron0x2466eb0()*0.00153515);
}

double NNfunction_sb_cLcR::synapse0x24702c0() {
   return (neuron0x24671f0()*0.0100615);
}

double NNfunction_sb_cLcR::synapse0x2470300() {
   return (neuron0x2467530()*0.025205);
}

double NNfunction_sb_cLcR::synapse0x2470340() {
   return (neuron0x2467870()*-0.00697639);
}

double NNfunction_sb_cLcR::synapse0x2470380() {
   return (neuron0x2467bb0()*-0.501126);
}

double NNfunction_sb_cLcR::synapse0x24703c0() {
   return (neuron0x2467ef0()*-0.00846015);
}

double NNfunction_sb_cLcR::synapse0x2470400() {
   return (neuron0x2468230()*0.00650799);
}

double NNfunction_sb_cLcR::synapse0x2470440() {
   return (neuron0x2468570()*0.0219221);
}

double NNfunction_sb_cLcR::synapse0x246fed0() {
   return (neuron0x24688b0()*0.00357202);
}

double NNfunction_sb_cLcR::synapse0x246ff10() {
   return (neuron0x2468e10()*0.0129189);
}

double NNfunction_sb_cLcR::synapse0x2470590() {
   return (neuron0x2469030()*-0.0231473);
}

double NNfunction_sb_cLcR::synapse0x24705d0() {
   return (neuron0x2469370()*0.0255671);
}

double NNfunction_sb_cLcR::synapse0x2470610() {
   return (neuron0x24696b0()*0.00290261);
}

double NNfunction_sb_cLcR::synapse0x2470650() {
   return (neuron0x24699f0()*0.0194189);
}

double NNfunction_sb_cLcR::synapse0x2470690() {
   return (neuron0x2469d30()*-0.02336);
}

double NNfunction_sb_cLcR::synapse0x24706d0() {
   return (neuron0x246a070()*1.73181e-05);
}

double NNfunction_sb_cLcR::synapse0x2470a50() {
   return (neuron0x24654b0()*0.328001);
}

double NNfunction_sb_cLcR::synapse0x2470a90() {
   return (neuron0x24657f0()*0.445209);
}

double NNfunction_sb_cLcR::synapse0x2470ad0() {
   return (neuron0x2465b30()*0.397461);
}

double NNfunction_sb_cLcR::synapse0x2470b10() {
   return (neuron0x2465e70()*-0.00945478);
}

double NNfunction_sb_cLcR::synapse0x2470b50() {
   return (neuron0x24661b0()*0.949081);
}

double NNfunction_sb_cLcR::synapse0x2470b90() {
   return (neuron0x24664f0()*0.20707);
}

double NNfunction_sb_cLcR::synapse0x2470bd0() {
   return (neuron0x2466830()*0.227021);
}

double NNfunction_sb_cLcR::synapse0x2470c10() {
   return (neuron0x2466b70()*-0.300388);
}

double NNfunction_sb_cLcR::synapse0x2470c50() {
   return (neuron0x2466eb0()*-0.250768);
}

double NNfunction_sb_cLcR::synapse0x2470c90() {
   return (neuron0x24671f0()*0.191601);
}

double NNfunction_sb_cLcR::synapse0x2470cd0() {
   return (neuron0x2467530()*-0.252772);
}

double NNfunction_sb_cLcR::synapse0x2470d10() {
   return (neuron0x2467870()*-0.00975185);
}

double NNfunction_sb_cLcR::synapse0x2470d50() {
   return (neuron0x2467bb0()*-0.308664);
}

double NNfunction_sb_cLcR::synapse0x2470d90() {
   return (neuron0x2467ef0()*0.0610492);
}

double NNfunction_sb_cLcR::synapse0x2470dd0() {
   return (neuron0x2468230()*0.0660191);
}

double NNfunction_sb_cLcR::synapse0x2470e10() {
   return (neuron0x2468570()*-1.83733);
}

double NNfunction_sb_cLcR::synapse0x24708a0() {
   return (neuron0x24688b0()*0.183308);
}

double NNfunction_sb_cLcR::synapse0x24708e0() {
   return (neuron0x2468e10()*0.0476079);
}

double NNfunction_sb_cLcR::synapse0x246d670() {
   return (neuron0x2469030()*-0.0833442);
}

double NNfunction_sb_cLcR::synapse0x246d6b0() {
   return (neuron0x2469370()*-0.331726);
}

double NNfunction_sb_cLcR::synapse0x246d6f0() {
   return (neuron0x24696b0()*0.169409);
}

double NNfunction_sb_cLcR::synapse0x246d730() {
   return (neuron0x24699f0()*0.416523);
}

double NNfunction_sb_cLcR::synapse0x246d770() {
   return (neuron0x2469d30()*0.279407);
}

double NNfunction_sb_cLcR::synapse0x246d7b0() {
   return (neuron0x246a070()*-0.122018);
}

double NNfunction_sb_cLcR::synapse0x246db30() {
   return (neuron0x24654b0()*0.0080027);
}

double NNfunction_sb_cLcR::synapse0x246db70() {
   return (neuron0x24657f0()*0.474654);
}

double NNfunction_sb_cLcR::synapse0x246dbb0() {
   return (neuron0x2465b30()*-0.0544397);
}

double NNfunction_sb_cLcR::synapse0x246dbf0() {
   return (neuron0x2465e70()*-1.37407);
}

double NNfunction_sb_cLcR::synapse0x246dc30() {
   return (neuron0x24661b0()*0.0639859);
}

double NNfunction_sb_cLcR::synapse0x246dc70() {
   return (neuron0x24664f0()*-0.0158581);
}

double NNfunction_sb_cLcR::synapse0x246dcb0() {
   return (neuron0x2466830()*0.0772332);
}

double NNfunction_sb_cLcR::synapse0x246dcf0() {
   return (neuron0x2466b70()*-0.0314158);
}

double NNfunction_sb_cLcR::synapse0x246dd30() {
   return (neuron0x2466eb0()*-0.096329);
}

double NNfunction_sb_cLcR::synapse0x246dd70() {
   return (neuron0x24671f0()*0.0209162);
}

double NNfunction_sb_cLcR::synapse0x246ddb0() {
   return (neuron0x2467530()*-0.10485);
}

double NNfunction_sb_cLcR::synapse0x246ddf0() {
   return (neuron0x2467870()*0.0171626);
}

double NNfunction_sb_cLcR::synapse0x246de30() {
   return (neuron0x2467bb0()*0.140244);
}

double NNfunction_sb_cLcR::synapse0x2471f70() {
   return (neuron0x2467ef0()*-0.0116051);
}

double NNfunction_sb_cLcR::synapse0x2471fb0() {
   return (neuron0x2468230()*0.039015);
}

double NNfunction_sb_cLcR::synapse0x2471ff0() {
   return (neuron0x2468570()*0.417731);
}

double NNfunction_sb_cLcR::synapse0x246d980() {
   return (neuron0x24688b0()*-0.0274089);
}

double NNfunction_sb_cLcR::synapse0x246d9c0() {
   return (neuron0x2468e10()*0.0733537);
}

double NNfunction_sb_cLcR::synapse0x2472140() {
   return (neuron0x2469030()*0.126161);
}

double NNfunction_sb_cLcR::synapse0x2472180() {
   return (neuron0x2469370()*-0.0130272);
}

double NNfunction_sb_cLcR::synapse0x24721c0() {
   return (neuron0x24696b0()*-0.0283619);
}

double NNfunction_sb_cLcR::synapse0x2472200() {
   return (neuron0x24699f0()*-0.000492703);
}

double NNfunction_sb_cLcR::synapse0x2472240() {
   return (neuron0x2469d30()*0.0150369);
}

double NNfunction_sb_cLcR::synapse0x2472280() {
   return (neuron0x246a070()*-0.0380161);
}

double NNfunction_sb_cLcR::synapse0x2472600() {
   return (neuron0x24654b0()*-0.0534097);
}

double NNfunction_sb_cLcR::synapse0x2472640() {
   return (neuron0x24657f0()*-0.188297);
}

double NNfunction_sb_cLcR::synapse0x2472680() {
   return (neuron0x2465b30()*0.00854052);
}

double NNfunction_sb_cLcR::synapse0x24726c0() {
   return (neuron0x2465e70()*5.48045);
}

double NNfunction_sb_cLcR::synapse0x2472700() {
   return (neuron0x24661b0()*-0.0406502);
}

double NNfunction_sb_cLcR::synapse0x2472740() {
   return (neuron0x24664f0()*-0.0160237);
}

double NNfunction_sb_cLcR::synapse0x2472780() {
   return (neuron0x2466830()*-0.0336281);
}

double NNfunction_sb_cLcR::synapse0x24727c0() {
   return (neuron0x2466b70()*0.0690473);
}

double NNfunction_sb_cLcR::synapse0x2472800() {
   return (neuron0x2466eb0()*0.0020365);
}

double NNfunction_sb_cLcR::synapse0x2472840() {
   return (neuron0x24671f0()*0.0220291);
}

double NNfunction_sb_cLcR::synapse0x2472880() {
   return (neuron0x2467530()*0.0598698);
}

double NNfunction_sb_cLcR::synapse0x24728c0() {
   return (neuron0x2467870()*-0.050022);
}

double NNfunction_sb_cLcR::synapse0x2472900() {
   return (neuron0x2467bb0()*0.132007);
}

double NNfunction_sb_cLcR::synapse0x2472940() {
   return (neuron0x2467ef0()*-0.079804);
}

double NNfunction_sb_cLcR::synapse0x2472980() {
   return (neuron0x2468230()*-0.0320186);
}

double NNfunction_sb_cLcR::synapse0x24729c0() {
   return (neuron0x2468570()*0.225308);
}

double NNfunction_sb_cLcR::synapse0x2472450() {
   return (neuron0x24688b0()*-0.00413428);
}

double NNfunction_sb_cLcR::synapse0x2472490() {
   return (neuron0x2468e10()*-0.000667157);
}

double NNfunction_sb_cLcR::synapse0x2472b10() {
   return (neuron0x2469030()*-0.0328984);
}

double NNfunction_sb_cLcR::synapse0x2472b50() {
   return (neuron0x2469370()*0.0172333);
}

double NNfunction_sb_cLcR::synapse0x2472b90() {
   return (neuron0x24696b0()*-0.0555777);
}

double NNfunction_sb_cLcR::synapse0x2472bd0() {
   return (neuron0x24699f0()*-0.00518631);
}

double NNfunction_sb_cLcR::synapse0x2472c10() {
   return (neuron0x2469d30()*-0.0345596);
}

double NNfunction_sb_cLcR::synapse0x2472c50() {
   return (neuron0x246a070()*-0.0603719);
}

double NNfunction_sb_cLcR::synapse0x2472fd0() {
   return (neuron0x24654b0()*-0.0279461);
}

double NNfunction_sb_cLcR::synapse0x2473010() {
   return (neuron0x24657f0()*0.00895942);
}

double NNfunction_sb_cLcR::synapse0x2473050() {
   return (neuron0x2465b30()*0.0210008);
}

double NNfunction_sb_cLcR::synapse0x2473090() {
   return (neuron0x2465e70()*0.0071306);
}

double NNfunction_sb_cLcR::synapse0x24730d0() {
   return (neuron0x24661b0()*-0.0203717);
}

double NNfunction_sb_cLcR::synapse0x2473110() {
   return (neuron0x24664f0()*-0.0130643);
}

double NNfunction_sb_cLcR::synapse0x2473150() {
   return (neuron0x2466830()*-0.0349825);
}

double NNfunction_sb_cLcR::synapse0x2473190() {
   return (neuron0x2466b70()*-0.00587984);
}

double NNfunction_sb_cLcR::synapse0x24731d0() {
   return (neuron0x2466eb0()*-0.011126);
}

double NNfunction_sb_cLcR::synapse0x2473210() {
   return (neuron0x24671f0()*-0.00199246);
}

double NNfunction_sb_cLcR::synapse0x2473250() {
   return (neuron0x2467530()*0.0186189);
}

double NNfunction_sb_cLcR::synapse0x2473290() {
   return (neuron0x2467870()*-0.00848217);
}

double NNfunction_sb_cLcR::synapse0x24732d0() {
   return (neuron0x2467bb0()*-0.911459);
}

double NNfunction_sb_cLcR::synapse0x2473310() {
   return (neuron0x2467ef0()*-0.000858688);
}

double NNfunction_sb_cLcR::synapse0x2473350() {
   return (neuron0x2468230()*-0.0220693);
}

double NNfunction_sb_cLcR::synapse0x2473390() {
   return (neuron0x2468570()*0.628543);
}

double NNfunction_sb_cLcR::synapse0x2472e20() {
   return (neuron0x24688b0()*-0.00147539);
}

double NNfunction_sb_cLcR::synapse0x2472e60() {
   return (neuron0x2468e10()*0.0173941);
}

double NNfunction_sb_cLcR::synapse0x24734e0() {
   return (neuron0x2469030()*-0.0216853);
}

double NNfunction_sb_cLcR::synapse0x2473520() {
   return (neuron0x2469370()*0.00162134);
}

double NNfunction_sb_cLcR::synapse0x2473560() {
   return (neuron0x24696b0()*-0.00748548);
}

double NNfunction_sb_cLcR::synapse0x24735a0() {
   return (neuron0x24699f0()*0.00193378);
}

double NNfunction_sb_cLcR::synapse0x24735e0() {
   return (neuron0x2469d30()*-0.0128279);
}

double NNfunction_sb_cLcR::synapse0x2473620() {
   return (neuron0x246a070()*-0.00301689);
}

double NNfunction_sb_cLcR::synapse0x24739a0() {
   return (neuron0x24654b0()*0.0235525);
}

double NNfunction_sb_cLcR::synapse0x24739e0() {
   return (neuron0x24657f0()*-0.907539);
}

double NNfunction_sb_cLcR::synapse0x2473a20() {
   return (neuron0x2465b30()*-0.340062);
}

double NNfunction_sb_cLcR::synapse0x2473a60() {
   return (neuron0x2465e70()*0.925032);
}

double NNfunction_sb_cLcR::synapse0x2473aa0() {
   return (neuron0x24661b0()*0.00622083);
}

double NNfunction_sb_cLcR::synapse0x2473ae0() {
   return (neuron0x24664f0()*0.0346825);
}

double NNfunction_sb_cLcR::synapse0x2473b20() {
   return (neuron0x2466830()*0.743582);
}

double NNfunction_sb_cLcR::synapse0x2473b60() {
   return (neuron0x2466b70()*0.0774475);
}

double NNfunction_sb_cLcR::synapse0x2473ba0() {
   return (neuron0x2466eb0()*-0.280131);
}

double NNfunction_sb_cLcR::synapse0x2473be0() {
   return (neuron0x24671f0()*0.377983);
}

double NNfunction_sb_cLcR::synapse0x2473c20() {
   return (neuron0x2467530()*-0.0687149);
}

double NNfunction_sb_cLcR::synapse0x2473c60() {
   return (neuron0x2467870()*0.356712);
}

double NNfunction_sb_cLcR::synapse0x2473ca0() {
   return (neuron0x2467bb0()*-0.191172);
}

double NNfunction_sb_cLcR::synapse0x2473ce0() {
   return (neuron0x2467ef0()*0.788842);
}

double NNfunction_sb_cLcR::synapse0x2473d20() {
   return (neuron0x2468230()*0.690335);
}

double NNfunction_sb_cLcR::synapse0x2473d60() {
   return (neuron0x2468570()*-0.314527);
}

double NNfunction_sb_cLcR::synapse0x24737f0() {
   return (neuron0x24688b0()*0.540225);
}

double NNfunction_sb_cLcR::synapse0x2473830() {
   return (neuron0x2468e10()*-0.655286);
}

double NNfunction_sb_cLcR::synapse0x2473eb0() {
   return (neuron0x2469030()*0.26453);
}

double NNfunction_sb_cLcR::synapse0x2473ef0() {
   return (neuron0x2469370()*-0.611983);
}

double NNfunction_sb_cLcR::synapse0x2473f30() {
   return (neuron0x24696b0()*-0.780776);
}

double NNfunction_sb_cLcR::synapse0x2473f70() {
   return (neuron0x24699f0()*0.0435625);
}

double NNfunction_sb_cLcR::synapse0x2473fb0() {
   return (neuron0x2469d30()*0.178351);
}

double NNfunction_sb_cLcR::synapse0x2473ff0() {
   return (neuron0x246a070()*-0.0636299);
}

double NNfunction_sb_cLcR::synapse0x2474370() {
   return (neuron0x24654b0()*0.184481);
}

double NNfunction_sb_cLcR::synapse0x24656d0() {
   return (neuron0x24657f0()*-0.239776);
}

double NNfunction_sb_cLcR::synapse0x2465710() {
   return (neuron0x2465b30()*-0.625263);
}

double NNfunction_sb_cLcR::synapse0x2465a10() {
   return (neuron0x2465e70()*-0.473561);
}

double NNfunction_sb_cLcR::synapse0x2465a50() {
   return (neuron0x24661b0()*0.510614);
}

double NNfunction_sb_cLcR::synapse0x2465d50() {
   return (neuron0x24664f0()*0.525203);
}

double NNfunction_sb_cLcR::synapse0x2465d90() {
   return (neuron0x2466830()*-0.600261);
}

double NNfunction_sb_cLcR::synapse0x2466090() {
   return (neuron0x2466b70()*-0.366467);
}

double NNfunction_sb_cLcR::synapse0x24660d0() {
   return (neuron0x2466eb0()*0.103144);
}

double NNfunction_sb_cLcR::synapse0x24663d0() {
   return (neuron0x24671f0()*0.298384);
}

double NNfunction_sb_cLcR::synapse0x2466410() {
   return (neuron0x2467530()*-0.387659);
}

double NNfunction_sb_cLcR::synapse0x2466710() {
   return (neuron0x2467870()*-0.726713);
}

double NNfunction_sb_cLcR::synapse0x2466750() {
   return (neuron0x2467bb0()*0.123977);
}

double NNfunction_sb_cLcR::synapse0x2466a50() {
   return (neuron0x2467ef0()*0.429172);
}

double NNfunction_sb_cLcR::synapse0x2466a90() {
   return (neuron0x2468230()*0.152096);
}

double NNfunction_sb_cLcR::synapse0x2466d90() {
   return (neuron0x2468570()*0.0921824);
}

double NNfunction_sb_cLcR::synapse0x2466dd0() {
   return (neuron0x24688b0()*0.341242);
}

double NNfunction_sb_cLcR::synapse0x24670d0() {
   return (neuron0x2468e10()*0.378474);
}

double NNfunction_sb_cLcR::synapse0x2467110() {
   return (neuron0x2469030()*0.890025);
}

double NNfunction_sb_cLcR::synapse0x2467410() {
   return (neuron0x2469370()*-0.0553919);
}

double NNfunction_sb_cLcR::synapse0x2467450() {
   return (neuron0x24696b0()*-0.38746);
}

double NNfunction_sb_cLcR::synapse0x2467750() {
   return (neuron0x24699f0()*0.248532);
}

double NNfunction_sb_cLcR::synapse0x2467790() {
   return (neuron0x2469d30()*0.00725246);
}

double NNfunction_sb_cLcR::synapse0x2467a90() {
   return (neuron0x246a070()*-0.538551);
}

double NNfunction_sb_cLcR::synapse0x2467ad0() {
   return (neuron0x24654b0()*0.0334621);
}

double NNfunction_sb_cLcR::synapse0x2468790() {
   return (neuron0x24657f0()*0.0591728);
}

double NNfunction_sb_cLcR::synapse0x24687d0() {
   return (neuron0x2465b30()*0.0479061);
}

double NNfunction_sb_cLcR::synapse0x24741c0() {
   return (neuron0x2465e70()*-4.46945);
}

double NNfunction_sb_cLcR::synapse0x2474200() {
   return (neuron0x24661b0()*-0.0142964);
}

double NNfunction_sb_cLcR::synapse0x2468ad0() {
   return (neuron0x24664f0()*-0.00290741);
}

double NNfunction_sb_cLcR::synapse0x2468b10() {
   return (neuron0x2466830()*0.0117768);
}

double NNfunction_sb_cLcR::synapse0x2216aa0() {
   return (neuron0x2466b70()*-0.039574);
}

double NNfunction_sb_cLcR::synapse0x2216ae0() {
   return (neuron0x2466eb0()*-0.0200432);
}

double NNfunction_sb_cLcR::synapse0x2469250() {
   return (neuron0x24671f0()*-0.0330251);
}

double NNfunction_sb_cLcR::synapse0x2469290() {
   return (neuron0x2467530()*-0.0195066);
}

double NNfunction_sb_cLcR::synapse0x2469590() {
   return (neuron0x2467870()*0.0177443);
}

double NNfunction_sb_cLcR::synapse0x24695d0() {
   return (neuron0x2467bb0()*0.24545);
}

double NNfunction_sb_cLcR::synapse0x24698d0() {
   return (neuron0x2467ef0()*0.043555);
}

double NNfunction_sb_cLcR::synapse0x2469910() {
   return (neuron0x2468230()*-0.000769207);
}

double NNfunction_sb_cLcR::synapse0x2469c10() {
   return (neuron0x2468570()*0.241109);
}

double NNfunction_sb_cLcR::synapse0x2469c50() {
   return (neuron0x24688b0()*0.0385874);
}

double NNfunction_sb_cLcR::synapse0x2469f50() {
   return (neuron0x2468e10()*-0.0502605);
}

double NNfunction_sb_cLcR::synapse0x2469f90() {
   return (neuron0x2469030()*0.0515591);
}

double NNfunction_sb_cLcR::synapse0x246a290() {
   return (neuron0x2469370()*-0.00288205);
}

double NNfunction_sb_cLcR::synapse0x246a2d0() {
   return (neuron0x24696b0()*0.03129);
}

double NNfunction_sb_cLcR::synapse0x2467dd0() {
   return (neuron0x24699f0()*0.00707658);
}

double NNfunction_sb_cLcR::synapse0x2467e10() {
   return (neuron0x2469d30()*0.021594);
}

double NNfunction_sb_cLcR::synapse0x24760e0() {
   return (neuron0x246a070()*0.0203351);
}

double NNfunction_sb_cLcR::synapse0x2476460() {
   return (neuron0x24654b0()*-0.223571);
}

double NNfunction_sb_cLcR::synapse0x24764a0() {
   return (neuron0x24657f0()*0.29382);
}

double NNfunction_sb_cLcR::synapse0x24764e0() {
   return (neuron0x2465b30()*-0.0984837);
}

double NNfunction_sb_cLcR::synapse0x2476520() {
   return (neuron0x2465e70()*-1.42009);
}

double NNfunction_sb_cLcR::synapse0x2476560() {
   return (neuron0x24661b0()*0.327988);
}

double NNfunction_sb_cLcR::synapse0x24765a0() {
   return (neuron0x24664f0()*0.116215);
}

double NNfunction_sb_cLcR::synapse0x24765e0() {
   return (neuron0x2466830()*0.213483);
}

double NNfunction_sb_cLcR::synapse0x2476620() {
   return (neuron0x2466b70()*-0.148466);
}

double NNfunction_sb_cLcR::synapse0x2476660() {
   return (neuron0x2466eb0()*0.0436992);
}

double NNfunction_sb_cLcR::synapse0x24766a0() {
   return (neuron0x24671f0()*0.27979);
}

double NNfunction_sb_cLcR::synapse0x24766e0() {
   return (neuron0x2467530()*0.186593);
}

double NNfunction_sb_cLcR::synapse0x2476720() {
   return (neuron0x2467870()*-0.0910493);
}

double NNfunction_sb_cLcR::synapse0x2476760() {
   return (neuron0x2467bb0()*1.30498);
}

double NNfunction_sb_cLcR::synapse0x24767a0() {
   return (neuron0x2467ef0()*0.245361);
}

double NNfunction_sb_cLcR::synapse0x24767e0() {
   return (neuron0x2468230()*-0.246166);
}

double NNfunction_sb_cLcR::synapse0x2476820() {
   return (neuron0x2468570()*0.152657);
}

double NNfunction_sb_cLcR::synapse0x24762b0() {
   return (neuron0x24688b0()*0.95725);
}

double NNfunction_sb_cLcR::synapse0x24762f0() {
   return (neuron0x2468e10()*-0.952688);
}

double NNfunction_sb_cLcR::synapse0x2476970() {
   return (neuron0x2469030()*0.515807);
}

double NNfunction_sb_cLcR::synapse0x24769b0() {
   return (neuron0x2469370()*-0.210786);
}

double NNfunction_sb_cLcR::synapse0x24769f0() {
   return (neuron0x24696b0()*-0.211802);
}

double NNfunction_sb_cLcR::synapse0x2476a30() {
   return (neuron0x24699f0()*-0.0455461);
}

double NNfunction_sb_cLcR::synapse0x2476a70() {
   return (neuron0x2469d30()*0.2579);
}

double NNfunction_sb_cLcR::synapse0x2476ab0() {
   return (neuron0x246a070()*0.191869);
}

double NNfunction_sb_cLcR::synapse0x2476e30() {
   return (neuron0x24654b0()*-0.0359737);
}

double NNfunction_sb_cLcR::synapse0x2476e70() {
   return (neuron0x24657f0()*0.00440894);
}

double NNfunction_sb_cLcR::synapse0x2476eb0() {
   return (neuron0x2465b30()*0.0511017);
}

double NNfunction_sb_cLcR::synapse0x2476ef0() {
   return (neuron0x2465e70()*-12.6032);
}

double NNfunction_sb_cLcR::synapse0x2476f30() {
   return (neuron0x24661b0()*0.00672568);
}

double NNfunction_sb_cLcR::synapse0x2476f70() {
   return (neuron0x24664f0()*0.0202928);
}

double NNfunction_sb_cLcR::synapse0x2476fb0() {
   return (neuron0x2466830()*-0.0480268);
}

double NNfunction_sb_cLcR::synapse0x2476ff0() {
   return (neuron0x2466b70()*0.0515087);
}

double NNfunction_sb_cLcR::synapse0x2477030() {
   return (neuron0x2466eb0()*0.019318);
}

double NNfunction_sb_cLcR::synapse0x2477070() {
   return (neuron0x24671f0()*0.0127988);
}

double NNfunction_sb_cLcR::synapse0x24770b0() {
   return (neuron0x2467530()*0.0140334);
}

double NNfunction_sb_cLcR::synapse0x24770f0() {
   return (neuron0x2467870()*0.0707224);
}

double NNfunction_sb_cLcR::synapse0x2477130() {
   return (neuron0x2467bb0()*-0.286699);
}

double NNfunction_sb_cLcR::synapse0x2477170() {
   return (neuron0x2467ef0()*0.0444868);
}

double NNfunction_sb_cLcR::synapse0x24771b0() {
   return (neuron0x2468230()*-0.0175971);
}

double NNfunction_sb_cLcR::synapse0x24771f0() {
   return (neuron0x2468570()*-0.705403);
}

double NNfunction_sb_cLcR::synapse0x2476c80() {
   return (neuron0x24688b0()*-0.0533504);
}

double NNfunction_sb_cLcR::synapse0x2476cc0() {
   return (neuron0x2468e10()*0.00773567);
}

double NNfunction_sb_cLcR::synapse0x2477340() {
   return (neuron0x2469030()*-0.0121644);
}

double NNfunction_sb_cLcR::synapse0x2477380() {
   return (neuron0x2469370()*-0.000663317);
}

double NNfunction_sb_cLcR::synapse0x24773c0() {
   return (neuron0x24696b0()*0.0550708);
}

double NNfunction_sb_cLcR::synapse0x2477400() {
   return (neuron0x24699f0()*-0.018261);
}

double NNfunction_sb_cLcR::synapse0x2477440() {
   return (neuron0x2469d30()*0.0136147);
}

double NNfunction_sb_cLcR::synapse0x2477480() {
   return (neuron0x246a070()*-6.92389e-06);
}

double NNfunction_sb_cLcR::synapse0x2477800() {
   return (neuron0x24654b0()*-0.0648264);
}

double NNfunction_sb_cLcR::synapse0x2477840() {
   return (neuron0x24657f0()*-0.0387067);
}

double NNfunction_sb_cLcR::synapse0x2477880() {
   return (neuron0x2465b30()*-0.127205);
}

double NNfunction_sb_cLcR::synapse0x24778c0() {
   return (neuron0x2465e70()*-1.18333);
}

double NNfunction_sb_cLcR::synapse0x2477900() {
   return (neuron0x24661b0()*0.0279678);
}

double NNfunction_sb_cLcR::synapse0x2477940() {
   return (neuron0x24664f0()*-0.0860913);
}

double NNfunction_sb_cLcR::synapse0x2477980() {
   return (neuron0x2466830()*-0.00528028);
}

double NNfunction_sb_cLcR::synapse0x24779c0() {
   return (neuron0x2466b70()*-0.00150025);
}

double NNfunction_sb_cLcR::synapse0x2477a00() {
   return (neuron0x2466eb0()*0.05248);
}

double NNfunction_sb_cLcR::synapse0x2477a40() {
   return (neuron0x24671f0()*-0.039877);
}

double NNfunction_sb_cLcR::synapse0x2477a80() {
   return (neuron0x2467530()*0.00428994);
}

double NNfunction_sb_cLcR::synapse0x2477ac0() {
   return (neuron0x2467870()*0.0812513);
}

double NNfunction_sb_cLcR::synapse0x2477b00() {
   return (neuron0x2467bb0()*-1.19687);
}

double NNfunction_sb_cLcR::synapse0x2477b40() {
   return (neuron0x2467ef0()*-0.0492066);
}

double NNfunction_sb_cLcR::synapse0x2477b80() {
   return (neuron0x2468230()*0.0590707);
}

double NNfunction_sb_cLcR::synapse0x2477bc0() {
   return (neuron0x2468570()*-0.619662);
}

double NNfunction_sb_cLcR::synapse0x2477650() {
   return (neuron0x24688b0()*-0.0379676);
}

double NNfunction_sb_cLcR::synapse0x2477690() {
   return (neuron0x2468e10()*0.0320535);
}

double NNfunction_sb_cLcR::synapse0x2477d10() {
   return (neuron0x2469030()*-0.0430687);
}

double NNfunction_sb_cLcR::synapse0x2477d50() {
   return (neuron0x2469370()*-0.036776);
}

double NNfunction_sb_cLcR::synapse0x2477d90() {
   return (neuron0x24696b0()*-0.0140802);
}

double NNfunction_sb_cLcR::synapse0x2477dd0() {
   return (neuron0x24699f0()*0.0301366);
}

double NNfunction_sb_cLcR::synapse0x2477e10() {
   return (neuron0x2469d30()*0.0669486);
}

double NNfunction_sb_cLcR::synapse0x2477e50() {
   return (neuron0x246a070()*-0.0656149);
}

double NNfunction_sb_cLcR::synapse0x24781d0() {
   return (neuron0x24654b0()*-0.105785);
}

double NNfunction_sb_cLcR::synapse0x2478210() {
   return (neuron0x24657f0()*0.539037);
}

double NNfunction_sb_cLcR::synapse0x2478250() {
   return (neuron0x2465b30()*0.0318147);
}

double NNfunction_sb_cLcR::synapse0x2478290() {
   return (neuron0x2465e70()*0.948438);
}

double NNfunction_sb_cLcR::synapse0x24782d0() {
   return (neuron0x24661b0()*-0.0200118);
}

double NNfunction_sb_cLcR::synapse0x2478310() {
   return (neuron0x24664f0()*0.0142988);
}

double NNfunction_sb_cLcR::synapse0x2478350() {
   return (neuron0x2466830()*0.0538058);
}

double NNfunction_sb_cLcR::synapse0x2478390() {
   return (neuron0x2466b70()*-0.0547953);
}

double NNfunction_sb_cLcR::synapse0x24783d0() {
   return (neuron0x2466eb0()*0.0167195);
}

double NNfunction_sb_cLcR::synapse0x2478410() {
   return (neuron0x24671f0()*0.107589);
}

double NNfunction_sb_cLcR::synapse0x2478450() {
   return (neuron0x2467530()*0.723821);
}

double NNfunction_sb_cLcR::synapse0x2478490() {
   return (neuron0x2467870()*0.234965);
}

double NNfunction_sb_cLcR::synapse0x24784d0() {
   return (neuron0x2467bb0()*-0.0806839);
}

double NNfunction_sb_cLcR::synapse0x2478510() {
   return (neuron0x2467ef0()*-0.0304607);
}

double NNfunction_sb_cLcR::synapse0x2478550() {
   return (neuron0x2468230()*-0.016508);
}

double NNfunction_sb_cLcR::synapse0x2478590() {
   return (neuron0x2468570()*-0.319451);
}

double NNfunction_sb_cLcR::synapse0x2478020() {
   return (neuron0x24688b0()*-0.0269524);
}

double NNfunction_sb_cLcR::synapse0x2478060() {
   return (neuron0x2468e10()*-0.12595);
}

double NNfunction_sb_cLcR::synapse0x24786e0() {
   return (neuron0x2469030()*-0.373679);
}

double NNfunction_sb_cLcR::synapse0x2478720() {
   return (neuron0x2469370()*0.0651311);
}

double NNfunction_sb_cLcR::synapse0x2478760() {
   return (neuron0x24696b0()*-0.0433605);
}

double NNfunction_sb_cLcR::synapse0x24787a0() {
   return (neuron0x24699f0()*0.0304057);
}

double NNfunction_sb_cLcR::synapse0x24787e0() {
   return (neuron0x2469d30()*-0.0647155);
}

double NNfunction_sb_cLcR::synapse0x2478820() {
   return (neuron0x246a070()*0.103825);
}

double NNfunction_sb_cLcR::synapse0x2478ba0() {
   return (neuron0x24654b0()*-0.173324);
}

double NNfunction_sb_cLcR::synapse0x2478be0() {
   return (neuron0x24657f0()*-0.28819);
}

double NNfunction_sb_cLcR::synapse0x2478c20() {
   return (neuron0x2465b30()*-0.233334);
}

double NNfunction_sb_cLcR::synapse0x2478c60() {
   return (neuron0x2465e70()*-0.289235);
}

double NNfunction_sb_cLcR::synapse0x2478ca0() {
   return (neuron0x24661b0()*0.441118);
}

double NNfunction_sb_cLcR::synapse0x2478ce0() {
   return (neuron0x24664f0()*0.47726);
}

double NNfunction_sb_cLcR::synapse0x2478d20() {
   return (neuron0x2466830()*0.642652);
}

double NNfunction_sb_cLcR::synapse0x2478d60() {
   return (neuron0x2466b70()*-0.255137);
}

double NNfunction_sb_cLcR::synapse0x2478da0() {
   return (neuron0x2466eb0()*-0.0380152);
}

double NNfunction_sb_cLcR::synapse0x2470f60() {
   return (neuron0x24671f0()*0.587761);
}

double NNfunction_sb_cLcR::synapse0x2470fa0() {
   return (neuron0x2467530()*-0.115324);
}

double NNfunction_sb_cLcR::synapse0x2470fe0() {
   return (neuron0x2467870()*-0.0911946);
}

double NNfunction_sb_cLcR::synapse0x2471020() {
   return (neuron0x2467bb0()*0.0876455);
}

double NNfunction_sb_cLcR::synapse0x2471060() {
   return (neuron0x2467ef0()*-0.241585);
}

double NNfunction_sb_cLcR::synapse0x24710a0() {
   return (neuron0x2468230()*0.080701);
}

double NNfunction_sb_cLcR::synapse0x24710e0() {
   return (neuron0x2468570()*-0.343933);
}

double NNfunction_sb_cLcR::synapse0x24789f0() {
   return (neuron0x24688b0()*0.646007);
}

double NNfunction_sb_cLcR::synapse0x2478a30() {
   return (neuron0x2468e10()*-0.0109893);
}

double NNfunction_sb_cLcR::synapse0x2471230() {
   return (neuron0x2469030()*-0.150434);
}

double NNfunction_sb_cLcR::synapse0x2471270() {
   return (neuron0x2469370()*-0.127164);
}

double NNfunction_sb_cLcR::synapse0x24712b0() {
   return (neuron0x24696b0()*-0.0391548);
}

double NNfunction_sb_cLcR::synapse0x24712f0() {
   return (neuron0x24699f0()*0.268469);
}

double NNfunction_sb_cLcR::synapse0x2471330() {
   return (neuron0x2469d30()*0.0104781);
}

double NNfunction_sb_cLcR::synapse0x2471370() {
   return (neuron0x246a070()*0.338902);
}

double NNfunction_sb_cLcR::synapse0x24716f0() {
   return (neuron0x24654b0()*-0.338511);
}

double NNfunction_sb_cLcR::synapse0x2471730() {
   return (neuron0x24657f0()*0.733416);
}

double NNfunction_sb_cLcR::synapse0x2471770() {
   return (neuron0x2465b30()*0.0960531);
}

double NNfunction_sb_cLcR::synapse0x24717b0() {
   return (neuron0x2465e70()*0.139523);
}

double NNfunction_sb_cLcR::synapse0x24717f0() {
   return (neuron0x24661b0()*0.144936);
}

double NNfunction_sb_cLcR::synapse0x2471830() {
   return (neuron0x24664f0()*0.00586076);
}

double NNfunction_sb_cLcR::synapse0x2471870() {
   return (neuron0x2466830()*0.135109);
}

double NNfunction_sb_cLcR::synapse0x24718b0() {
   return (neuron0x2466b70()*-0.124612);
}

double NNfunction_sb_cLcR::synapse0x24718f0() {
   return (neuron0x2466eb0()*0.0861127);
}

double NNfunction_sb_cLcR::synapse0x2471930() {
   return (neuron0x24671f0()*-0.90027);
}

double NNfunction_sb_cLcR::synapse0x2471970() {
   return (neuron0x2467530()*-0.709416);
}

double NNfunction_sb_cLcR::synapse0x24719b0() {
   return (neuron0x2467870()*-0.291922);
}

double NNfunction_sb_cLcR::synapse0x24719f0() {
   return (neuron0x2467bb0()*0.326433);
}

double NNfunction_sb_cLcR::synapse0x2471a30() {
   return (neuron0x2467ef0()*0.285);
}

double NNfunction_sb_cLcR::synapse0x2471a70() {
   return (neuron0x2468230()*-0.426983);
}

double NNfunction_sb_cLcR::synapse0x2471ab0() {
   return (neuron0x2468570()*-0.536221);
}

double NNfunction_sb_cLcR::synapse0x2471540() {
   return (neuron0x24688b0()*0.240512);
}

double NNfunction_sb_cLcR::synapse0x2471580() {
   return (neuron0x2468e10()*-1.2148);
}

double NNfunction_sb_cLcR::synapse0x2471c00() {
   return (neuron0x2469030()*-0.219675);
}

double NNfunction_sb_cLcR::synapse0x2471c40() {
   return (neuron0x2469370()*0.326328);
}

double NNfunction_sb_cLcR::synapse0x2471c80() {
   return (neuron0x24696b0()*-0.0783636);
}

double NNfunction_sb_cLcR::synapse0x2471cc0() {
   return (neuron0x24699f0()*0.128438);
}

double NNfunction_sb_cLcR::synapse0x2471d00() {
   return (neuron0x2469d30()*0.0763195);
}

double NNfunction_sb_cLcR::synapse0x2471d40() {
   return (neuron0x246a070()*-0.222039);
}

double NNfunction_sb_cLcR::synapse0x2471f10() {
   return (neuron0x24654b0()*0.399364);
}

double NNfunction_sb_cLcR::synapse0x247afa0() {
   return (neuron0x24657f0()*-0.204667);
}

double NNfunction_sb_cLcR::synapse0x247afe0() {
   return (neuron0x2465b30()*-0.00913125);
}

double NNfunction_sb_cLcR::synapse0x247b020() {
   return (neuron0x2465e70()*-0.698338);
}

double NNfunction_sb_cLcR::synapse0x247b060() {
   return (neuron0x24661b0()*-0.0200162);
}

double NNfunction_sb_cLcR::synapse0x247b0a0() {
   return (neuron0x24664f0()*0.205233);
}

double NNfunction_sb_cLcR::synapse0x247b0e0() {
   return (neuron0x2466830()*0.262146);
}

double NNfunction_sb_cLcR::synapse0x247b120() {
   return (neuron0x2466b70()*0.244023);
}

double NNfunction_sb_cLcR::synapse0x247b160() {
   return (neuron0x2466eb0()*0.545037);
}

double NNfunction_sb_cLcR::synapse0x247b1a0() {
   return (neuron0x24671f0()*-0.0712838);
}

double NNfunction_sb_cLcR::synapse0x247b1e0() {
   return (neuron0x2467530()*-0.3937);
}

double NNfunction_sb_cLcR::synapse0x247b220() {
   return (neuron0x2467870()*-0.0902858);
}

double NNfunction_sb_cLcR::synapse0x247b260() {
   return (neuron0x2467bb0()*-0.905007);
}

double NNfunction_sb_cLcR::synapse0x247b2a0() {
   return (neuron0x2467ef0()*-0.534493);
}

double NNfunction_sb_cLcR::synapse0x247b2e0() {
   return (neuron0x2468230()*0.417619);
}

double NNfunction_sb_cLcR::synapse0x247b320() {
   return (neuron0x2468570()*-0.4367);
}

double NNfunction_sb_cLcR::synapse0x247adf0() {
   return (neuron0x24688b0()*-0.145387);
}

double NNfunction_sb_cLcR::synapse0x247ae30() {
   return (neuron0x2468e10()*-0.331747);
}

double NNfunction_sb_cLcR::synapse0x247b470() {
   return (neuron0x2469030()*-0.0170075);
}

double NNfunction_sb_cLcR::synapse0x247b4b0() {
   return (neuron0x2469370()*0.217161);
}

double NNfunction_sb_cLcR::synapse0x247b4f0() {
   return (neuron0x24696b0()*0.0533219);
}

double NNfunction_sb_cLcR::synapse0x247b530() {
   return (neuron0x24699f0()*-0.0130774);
}

double NNfunction_sb_cLcR::synapse0x247b570() {
   return (neuron0x2469d30()*-0.235841);
}

double NNfunction_sb_cLcR::synapse0x247b5b0() {
   return (neuron0x246a070()*0.0353943);
}

double NNfunction_sb_cLcR::synapse0x247b930() {
   return (neuron0x24654b0()*-0.00562477);
}

double NNfunction_sb_cLcR::synapse0x247b970() {
   return (neuron0x24657f0()*0.0514124);
}

double NNfunction_sb_cLcR::synapse0x247b9b0() {
   return (neuron0x2465b30()*-0.0390852);
}

double NNfunction_sb_cLcR::synapse0x247b9f0() {
   return (neuron0x2465e70()*1.35777);
}

double NNfunction_sb_cLcR::synapse0x247ba30() {
   return (neuron0x24661b0()*0.0140357);
}

double NNfunction_sb_cLcR::synapse0x247ba70() {
   return (neuron0x24664f0()*0.016999);
}

double NNfunction_sb_cLcR::synapse0x247bab0() {
   return (neuron0x2466830()*-0.0102468);
}

double NNfunction_sb_cLcR::synapse0x247baf0() {
   return (neuron0x2466b70()*-0.000517654);
}

double NNfunction_sb_cLcR::synapse0x247bb30() {
   return (neuron0x2466eb0()*0.0306245);
}

double NNfunction_sb_cLcR::synapse0x247bb70() {
   return (neuron0x24671f0()*-0.00473673);
}

double NNfunction_sb_cLcR::synapse0x247bbb0() {
   return (neuron0x2467530()*-0.00187164);
}

double NNfunction_sb_cLcR::synapse0x247bbf0() {
   return (neuron0x2467870()*-0.0784351);
}

double NNfunction_sb_cLcR::synapse0x247bc30() {
   return (neuron0x2467bb0()*0.191067);
}

double NNfunction_sb_cLcR::synapse0x247bc70() {
   return (neuron0x2467ef0()*-0.00493332);
}

double NNfunction_sb_cLcR::synapse0x247bcb0() {
   return (neuron0x2468230()*6.73017e-05);
}

double NNfunction_sb_cLcR::synapse0x247bcf0() {
   return (neuron0x2468570()*0.0796517);
}

double NNfunction_sb_cLcR::synapse0x247b780() {
   return (neuron0x24688b0()*0.0170479);
}

double NNfunction_sb_cLcR::synapse0x247b7c0() {
   return (neuron0x2468e10()*-0.0524328);
}

double NNfunction_sb_cLcR::synapse0x247be40() {
   return (neuron0x2469030()*-0.0327604);
}

double NNfunction_sb_cLcR::synapse0x247be80() {
   return (neuron0x2469370()*0.00679193);
}

double NNfunction_sb_cLcR::synapse0x247bec0() {
   return (neuron0x24696b0()*0.00713588);
}

double NNfunction_sb_cLcR::synapse0x247bf00() {
   return (neuron0x24699f0()*-0.00136089);
}

double NNfunction_sb_cLcR::synapse0x247bf40() {
   return (neuron0x2469d30()*0.0026256);
}

double NNfunction_sb_cLcR::synapse0x247bf80() {
   return (neuron0x246a070()*-0.0113702);
}

double NNfunction_sb_cLcR::synapse0x247c300() {
   return (neuron0x24654b0()*-0.0271588);
}

double NNfunction_sb_cLcR::synapse0x247c340() {
   return (neuron0x24657f0()*0.239593);
}

double NNfunction_sb_cLcR::synapse0x247c380() {
   return (neuron0x2465b30()*0.0582947);
}

double NNfunction_sb_cLcR::synapse0x247c3c0() {
   return (neuron0x2465e70()*1.6727);
}

double NNfunction_sb_cLcR::synapse0x247c400() {
   return (neuron0x24661b0()*0.0145428);
}

double NNfunction_sb_cLcR::synapse0x247c440() {
   return (neuron0x24664f0()*0.00709504);
}

double NNfunction_sb_cLcR::synapse0x247c480() {
   return (neuron0x2466830()*-0.0077811);
}

double NNfunction_sb_cLcR::synapse0x247c4c0() {
   return (neuron0x2466b70()*0.016306);
}

double NNfunction_sb_cLcR::synapse0x247c500() {
   return (neuron0x2466eb0()*-0.0284574);
}

double NNfunction_sb_cLcR::synapse0x247c540() {
   return (neuron0x24671f0()*-0.000552667);
}

double NNfunction_sb_cLcR::synapse0x247c580() {
   return (neuron0x2467530()*-0.0725743);
}

double NNfunction_sb_cLcR::synapse0x247c5c0() {
   return (neuron0x2467870()*0.0868036);
}

double NNfunction_sb_cLcR::synapse0x247c600() {
   return (neuron0x2467bb0()*-0.172437);
}

double NNfunction_sb_cLcR::synapse0x247c640() {
   return (neuron0x2467ef0()*-0.0329471);
}

double NNfunction_sb_cLcR::synapse0x247c680() {
   return (neuron0x2468230()*0.0305142);
}

double NNfunction_sb_cLcR::synapse0x247c6c0() {
   return (neuron0x2468570()*-0.323654);
}

double NNfunction_sb_cLcR::synapse0x247c150() {
   return (neuron0x24688b0()*-0.0478371);
}

double NNfunction_sb_cLcR::synapse0x247c190() {
   return (neuron0x2468e10()*0.0580528);
}

double NNfunction_sb_cLcR::synapse0x247c810() {
   return (neuron0x2469030()*0.0553195);
}

double NNfunction_sb_cLcR::synapse0x247c850() {
   return (neuron0x2469370()*0.0281071);
}

double NNfunction_sb_cLcR::synapse0x247c890() {
   return (neuron0x24696b0()*-0.0206784);
}

double NNfunction_sb_cLcR::synapse0x247c8d0() {
   return (neuron0x24699f0()*-0.0253382);
}

double NNfunction_sb_cLcR::synapse0x247c910() {
   return (neuron0x2469d30()*0.0424277);
}

double NNfunction_sb_cLcR::synapse0x247c950() {
   return (neuron0x246a070()*-0.0487371);
}

double NNfunction_sb_cLcR::synapse0x247ccd0() {
   return (neuron0x24654b0()*0.1872);
}

double NNfunction_sb_cLcR::synapse0x247cd10() {
   return (neuron0x24657f0()*-0.0836054);
}

double NNfunction_sb_cLcR::synapse0x247cd50() {
   return (neuron0x2465b30()*0.165527);
}

double NNfunction_sb_cLcR::synapse0x247cd90() {
   return (neuron0x2465e70()*4.32055);
}

double NNfunction_sb_cLcR::synapse0x247cdd0() {
   return (neuron0x24661b0()*0.138603);
}

double NNfunction_sb_cLcR::synapse0x247ce10() {
   return (neuron0x24664f0()*0.137859);
}

double NNfunction_sb_cLcR::synapse0x247ce50() {
   return (neuron0x2466830()*0.0563845);
}

double NNfunction_sb_cLcR::synapse0x247ce90() {
   return (neuron0x2466b70()*-0.0099226);
}

double NNfunction_sb_cLcR::synapse0x247ced0() {
   return (neuron0x2466eb0()*0.0409695);
}

double NNfunction_sb_cLcR::synapse0x247cf10() {
   return (neuron0x24671f0()*0.0219705);
}

double NNfunction_sb_cLcR::synapse0x247cf50() {
   return (neuron0x2467530()*-0.084149);
}

double NNfunction_sb_cLcR::synapse0x247cf90() {
   return (neuron0x2467870()*0.0439913);
}

double NNfunction_sb_cLcR::synapse0x247cfd0() {
   return (neuron0x2467bb0()*0.320525);
}

double NNfunction_sb_cLcR::synapse0x247d010() {
   return (neuron0x2467ef0()*0.0591205);
}

double NNfunction_sb_cLcR::synapse0x247d050() {
   return (neuron0x2468230()*-0.0763397);
}

double NNfunction_sb_cLcR::synapse0x247d090() {
   return (neuron0x2468570()*-1.08301);
}

double NNfunction_sb_cLcR::synapse0x247cb20() {
   return (neuron0x24688b0()*-0.197107);
}

double NNfunction_sb_cLcR::synapse0x247cb60() {
   return (neuron0x2468e10()*0.0674238);
}

double NNfunction_sb_cLcR::synapse0x247d1e0() {
   return (neuron0x2469030()*-0.0724664);
}

double NNfunction_sb_cLcR::synapse0x247d220() {
   return (neuron0x2469370()*-0.0180613);
}

double NNfunction_sb_cLcR::synapse0x247d260() {
   return (neuron0x24696b0()*0.070264);
}

double NNfunction_sb_cLcR::synapse0x247d2a0() {
   return (neuron0x24699f0()*-0.0599949);
}

double NNfunction_sb_cLcR::synapse0x247d2e0() {
   return (neuron0x2469d30()*0.0699673);
}

double NNfunction_sb_cLcR::synapse0x247d320() {
   return (neuron0x246a070()*0.245675);
}

double NNfunction_sb_cLcR::synapse0x247d6a0() {
   return (neuron0x24654b0()*-0.0959061);
}

double NNfunction_sb_cLcR::synapse0x247d6e0() {
   return (neuron0x24657f0()*-0.312517);
}

double NNfunction_sb_cLcR::synapse0x247d720() {
   return (neuron0x2465b30()*0.2353);
}

double NNfunction_sb_cLcR::synapse0x247d760() {
   return (neuron0x2465e70()*0.681305);
}

double NNfunction_sb_cLcR::synapse0x247d7a0() {
   return (neuron0x24661b0()*-0.120051);
}

double NNfunction_sb_cLcR::synapse0x247d7e0() {
   return (neuron0x24664f0()*-0.265049);
}

double NNfunction_sb_cLcR::synapse0x247d820() {
   return (neuron0x2466830()*-1.81651);
}

double NNfunction_sb_cLcR::synapse0x247d860() {
   return (neuron0x2466b70()*0.112143);
}

double NNfunction_sb_cLcR::synapse0x247d8a0() {
   return (neuron0x2466eb0()*-0.612069);
}

double NNfunction_sb_cLcR::synapse0x247d8e0() {
   return (neuron0x24671f0()*0.547869);
}

double NNfunction_sb_cLcR::synapse0x247d920() {
   return (neuron0x2467530()*0.000191065);
}

double NNfunction_sb_cLcR::synapse0x247d960() {
   return (neuron0x2467870()*-1.09842);
}

double NNfunction_sb_cLcR::synapse0x247d9a0() {
   return (neuron0x2467bb0()*-0.272484);
}

double NNfunction_sb_cLcR::synapse0x247d9e0() {
   return (neuron0x2467ef0()*-0.512224);
}

double NNfunction_sb_cLcR::synapse0x247da20() {
   return (neuron0x2468230()*0.205631);
}

double NNfunction_sb_cLcR::synapse0x247da60() {
   return (neuron0x2468570()*0.106029);
}

double NNfunction_sb_cLcR::synapse0x247d4f0() {
   return (neuron0x24688b0()*-1.08445);
}

double NNfunction_sb_cLcR::synapse0x247d530() {
   return (neuron0x2468e10()*0.172602);
}

double NNfunction_sb_cLcR::synapse0x247dbb0() {
   return (neuron0x2469030()*0.469126);
}

double NNfunction_sb_cLcR::synapse0x247dbf0() {
   return (neuron0x2469370()*0.259863);
}

double NNfunction_sb_cLcR::synapse0x247dc30() {
   return (neuron0x24696b0()*0.117498);
}

double NNfunction_sb_cLcR::synapse0x247dc70() {
   return (neuron0x24699f0()*-0.127597);
}

double NNfunction_sb_cLcR::synapse0x247dcb0() {
   return (neuron0x2469d30()*-0.108118);
}

double NNfunction_sb_cLcR::synapse0x247dcf0() {
   return (neuron0x246a070()*-0.377103);
}

double NNfunction_sb_cLcR::synapse0x247e070() {
   return (neuron0x24654b0()*0.242556);
}

double NNfunction_sb_cLcR::synapse0x247e0b0() {
   return (neuron0x24657f0()*0.347157);
}

double NNfunction_sb_cLcR::synapse0x247e0f0() {
   return (neuron0x2465b30()*0.316478);
}

double NNfunction_sb_cLcR::synapse0x247e130() {
   return (neuron0x2465e70()*-0.132698);
}

double NNfunction_sb_cLcR::synapse0x247e170() {
   return (neuron0x24661b0()*-0.787326);
}

double NNfunction_sb_cLcR::synapse0x247e1b0() {
   return (neuron0x24664f0()*-1.04965);
}

double NNfunction_sb_cLcR::synapse0x247e1f0() {
   return (neuron0x2466830()*1.09762);
}

double NNfunction_sb_cLcR::synapse0x247e230() {
   return (neuron0x2466b70()*-0.187123);
}

double NNfunction_sb_cLcR::synapse0x247e270() {
   return (neuron0x2466eb0()*-0.708208);
}

double NNfunction_sb_cLcR::synapse0x247e2b0() {
   return (neuron0x24671f0()*0.211111);
}

double NNfunction_sb_cLcR::synapse0x247e2f0() {
   return (neuron0x2467530()*-0.386547);
}

double NNfunction_sb_cLcR::synapse0x247e330() {
   return (neuron0x2467870()*0.315751);
}

double NNfunction_sb_cLcR::synapse0x247e370() {
   return (neuron0x2467bb0()*0.224436);
}

double NNfunction_sb_cLcR::synapse0x247e3b0() {
   return (neuron0x2467ef0()*0.630038);
}

double NNfunction_sb_cLcR::synapse0x247e3f0() {
   return (neuron0x2468230()*-0.120675);
}

double NNfunction_sb_cLcR::synapse0x247e430() {
   return (neuron0x2468570()*0.0537453);
}

double NNfunction_sb_cLcR::synapse0x247dec0() {
   return (neuron0x24688b0()*-0.546821);
}

double NNfunction_sb_cLcR::synapse0x247df00() {
   return (neuron0x2468e10()*0.896428);
}

double NNfunction_sb_cLcR::synapse0x247e580() {
   return (neuron0x2469030()*0.389509);
}

double NNfunction_sb_cLcR::synapse0x247e5c0() {
   return (neuron0x2469370()*0.189466);
}

double NNfunction_sb_cLcR::synapse0x247e600() {
   return (neuron0x24696b0()*0.663446);
}

double NNfunction_sb_cLcR::synapse0x247e640() {
   return (neuron0x24699f0()*0.0526024);
}

double NNfunction_sb_cLcR::synapse0x247e680() {
   return (neuron0x2469d30()*-0.258619);
}

double NNfunction_sb_cLcR::synapse0x247e6c0() {
   return (neuron0x246a070()*-0.246107);
}

double NNfunction_sb_cLcR::synapse0x247ea40() {
   return (neuron0x24654b0()*0.045513);
}

double NNfunction_sb_cLcR::synapse0x247ea80() {
   return (neuron0x24657f0()*-0.0772079);
}

double NNfunction_sb_cLcR::synapse0x247eac0() {
   return (neuron0x2465b30()*0.542863);
}

double NNfunction_sb_cLcR::synapse0x247eb00() {
   return (neuron0x2465e70()*-0.973444);
}

double NNfunction_sb_cLcR::synapse0x247eb40() {
   return (neuron0x24661b0()*-0.0154379);
}

double NNfunction_sb_cLcR::synapse0x247eb80() {
   return (neuron0x24664f0()*-0.000517975);
}

double NNfunction_sb_cLcR::synapse0x247ebc0() {
   return (neuron0x2466830()*-0.0273645);
}

double NNfunction_sb_cLcR::synapse0x247ec00() {
   return (neuron0x2466b70()*0.0164466);
}

double NNfunction_sb_cLcR::synapse0x247ec40() {
   return (neuron0x2466eb0()*-0.0777745);
}

double NNfunction_sb_cLcR::synapse0x247ec80() {
   return (neuron0x24671f0()*-0.0147169);
}

double NNfunction_sb_cLcR::synapse0x247ecc0() {
   return (neuron0x2467530()*0.00667052);
}

double NNfunction_sb_cLcR::synapse0x247ed00() {
   return (neuron0x2467870()*0.115818);
}

double NNfunction_sb_cLcR::synapse0x247ed40() {
   return (neuron0x2467bb0()*-0.162421);
}

double NNfunction_sb_cLcR::synapse0x247ed80() {
   return (neuron0x2467ef0()*0.0601577);
}

double NNfunction_sb_cLcR::synapse0x247edc0() {
   return (neuron0x2468230()*0.0143565);
}

double NNfunction_sb_cLcR::synapse0x247ee00() {
   return (neuron0x2468570()*0.15017);
}

double NNfunction_sb_cLcR::synapse0x247e890() {
   return (neuron0x24688b0()*-0.0128665);
}

double NNfunction_sb_cLcR::synapse0x247e8d0() {
   return (neuron0x2468e10()*0.0406266);
}

double NNfunction_sb_cLcR::synapse0x247ef50() {
   return (neuron0x2469030()*0.145051);
}

double NNfunction_sb_cLcR::synapse0x247ef90() {
   return (neuron0x2469370()*-0.00902253);
}

double NNfunction_sb_cLcR::synapse0x247efd0() {
   return (neuron0x24696b0()*-0.0421518);
}

double NNfunction_sb_cLcR::synapse0x247f010() {
   return (neuron0x24699f0()*-0.0488435);
}

double NNfunction_sb_cLcR::synapse0x247f050() {
   return (neuron0x2469d30()*0.0190765);
}

double NNfunction_sb_cLcR::synapse0x247f090() {
   return (neuron0x246a070()*0.0181075);
}

double NNfunction_sb_cLcR::synapse0x247f410() {
   return (neuron0x24654b0()*0.0277786);
}

double NNfunction_sb_cLcR::synapse0x247f450() {
   return (neuron0x24657f0()*-0.0218962);
}

double NNfunction_sb_cLcR::synapse0x247f490() {
   return (neuron0x2465b30()*1.29198);
}

double NNfunction_sb_cLcR::synapse0x247f4d0() {
   return (neuron0x2465e70()*0.0139157);
}

double NNfunction_sb_cLcR::synapse0x247f510() {
   return (neuron0x24661b0()*0.0386699);
}

double NNfunction_sb_cLcR::synapse0x247f550() {
   return (neuron0x24664f0()*-0.0279424);
}

double NNfunction_sb_cLcR::synapse0x247f590() {
   return (neuron0x2466830()*-0.000744005);
}

double NNfunction_sb_cLcR::synapse0x247f5d0() {
   return (neuron0x2466b70()*0.0118469);
}

double NNfunction_sb_cLcR::synapse0x247f610() {
   return (neuron0x2466eb0()*-0.0895725);
}

double NNfunction_sb_cLcR::synapse0x247f650() {
   return (neuron0x24671f0()*0.0176428);
}

double NNfunction_sb_cLcR::synapse0x247f690() {
   return (neuron0x2467530()*-0.0380583);
}

double NNfunction_sb_cLcR::synapse0x247f6d0() {
   return (neuron0x2467870()*-0.00100148);
}

double NNfunction_sb_cLcR::synapse0x247f710() {
   return (neuron0x2467bb0()*-0.487886);
}

double NNfunction_sb_cLcR::synapse0x247f750() {
   return (neuron0x2467ef0()*0.110217);
}

double NNfunction_sb_cLcR::synapse0x247f790() {
   return (neuron0x2468230()*0.0390648);
}

double NNfunction_sb_cLcR::synapse0x247f7d0() {
   return (neuron0x2468570()*0.0405187);
}

double NNfunction_sb_cLcR::synapse0x247f260() {
   return (neuron0x24688b0()*0.00924765);
}

double NNfunction_sb_cLcR::synapse0x247f2a0() {
   return (neuron0x2468e10()*0.0178115);
}

double NNfunction_sb_cLcR::synapse0x247f920() {
   return (neuron0x2469030()*0.0233006);
}

double NNfunction_sb_cLcR::synapse0x247f960() {
   return (neuron0x2469370()*0.067106);
}

double NNfunction_sb_cLcR::synapse0x247f9a0() {
   return (neuron0x24696b0()*0.0524814);
}

double NNfunction_sb_cLcR::synapse0x247f9e0() {
   return (neuron0x24699f0()*0.00108001);
}

double NNfunction_sb_cLcR::synapse0x247fa20() {
   return (neuron0x2469d30()*-0.0140335);
}

double NNfunction_sb_cLcR::synapse0x247fa60() {
   return (neuron0x246a070()*-0.0244727);
}

double NNfunction_sb_cLcR::synapse0x247fde0() {
   return (neuron0x24654b0()*0.246521);
}

double NNfunction_sb_cLcR::synapse0x24743b0() {
   return (neuron0x24657f0()*0.580249);
}

double NNfunction_sb_cLcR::synapse0x24743f0() {
   return (neuron0x2465b30()*0.539324);
}

double NNfunction_sb_cLcR::synapse0x2474430() {
   return (neuron0x2465e70()*0.529173);
}

double NNfunction_sb_cLcR::synapse0x2474680() {
   return (neuron0x24661b0()*-0.433229);
}

double NNfunction_sb_cLcR::synapse0x24746c0() {
   return (neuron0x24664f0()*0.0767195);
}

double NNfunction_sb_cLcR::synapse0x2474700() {
   return (neuron0x2466830()*0.799568);
}

double NNfunction_sb_cLcR::synapse0x2474950() {
   return (neuron0x2466b70()*0.233656);
}

double NNfunction_sb_cLcR::synapse0x2474990() {
   return (neuron0x2466eb0()*-0.664142);
}

double NNfunction_sb_cLcR::synapse0x2474be0() {
   return (neuron0x24671f0()*-0.515114);
}

double NNfunction_sb_cLcR::synapse0x2474c20() {
   return (neuron0x2467530()*0.230389);
}

double NNfunction_sb_cLcR::synapse0x2474c60() {
   return (neuron0x2467870()*0.137429);
}

double NNfunction_sb_cLcR::synapse0x2474eb0() {
   return (neuron0x2467bb0()*0.155817);
}

double NNfunction_sb_cLcR::synapse0x2474ef0() {
   return (neuron0x2467ef0()*0.270147);
}

double NNfunction_sb_cLcR::synapse0x2475140() {
   return (neuron0x2468230()*-0.0285581);
}

double NNfunction_sb_cLcR::synapse0x2475180() {
   return (neuron0x2468570()*-0.376811);
}

double NNfunction_sb_cLcR::synapse0x247fc30() {
   return (neuron0x24688b0()*-0.479522);
}

double NNfunction_sb_cLcR::synapse0x247fc70() {
   return (neuron0x2468e10()*-0.652457);
}

double NNfunction_sb_cLcR::synapse0x24752d0() {
   return (neuron0x2469030()*-0.0466631);
}

double NNfunction_sb_cLcR::synapse0x24757e0() {
   return (neuron0x2469370()*-0.378238);
}

double NNfunction_sb_cLcR::synapse0x2475820() {
   return (neuron0x24696b0()*0.350601);
}

double NNfunction_sb_cLcR::synapse0x2475860() {
   return (neuron0x24699f0()*-0.0910319);
}

double NNfunction_sb_cLcR::synapse0x2475ab0() {
   return (neuron0x2469d30()*0.191832);
}

double NNfunction_sb_cLcR::synapse0x2475af0() {
   return (neuron0x246a070()*0.437897);
}

double NNfunction_sb_cLcR::synapse0x24753a0() {
   return (neuron0x24654b0()*0.104243);
}

double NNfunction_sb_cLcR::synapse0x24753e0() {
   return (neuron0x24657f0()*-0.283677);
}

double NNfunction_sb_cLcR::synapse0x2475420() {
   return (neuron0x2465b30()*-0.492833);
}

double NNfunction_sb_cLcR::synapse0x2475460() {
   return (neuron0x2465e70()*0.000968172);
}

double NNfunction_sb_cLcR::synapse0x2475de0() {
   return (neuron0x24661b0()*0.0384204);
}

double NNfunction_sb_cLcR::synapse0x2482130() {
   return (neuron0x24664f0()*-0.0604734);
}

double NNfunction_sb_cLcR::synapse0x2482170() {
   return (neuron0x2466830()*-0.0202623);
}

double NNfunction_sb_cLcR::synapse0x24821b0() {
   return (neuron0x2466b70()*-0.0216138);
}

double NNfunction_sb_cLcR::synapse0x24821f0() {
   return (neuron0x2466eb0()*0.125603);
}

double NNfunction_sb_cLcR::synapse0x2482230() {
   return (neuron0x24671f0()*-0.00168614);
}

double NNfunction_sb_cLcR::synapse0x2482270() {
   return (neuron0x2467530()*-0.0523403);
}

double NNfunction_sb_cLcR::synapse0x24822b0() {
   return (neuron0x2467870()*0.691527);
}

double NNfunction_sb_cLcR::synapse0x24822f0() {
   return (neuron0x2467bb0()*0.223267);
}

double NNfunction_sb_cLcR::synapse0x2482330() {
   return (neuron0x2467ef0()*-0.220583);
}

double NNfunction_sb_cLcR::synapse0x2482370() {
   return (neuron0x2468230()*0.134188);
}

double NNfunction_sb_cLcR::synapse0x24823b0() {
   return (neuron0x2468570()*-0.601373);
}

double NNfunction_sb_cLcR::synapse0x2475cc0() {
   return (neuron0x24688b0()*-0.217306);
}

double NNfunction_sb_cLcR::synapse0x2475d00() {
   return (neuron0x2468e10()*-0.103739);
}

double NNfunction_sb_cLcR::synapse0x2482500() {
   return (neuron0x2469030()*0.673445);
}

double NNfunction_sb_cLcR::synapse0x2482540() {
   return (neuron0x2469370()*0.372162);
}

double NNfunction_sb_cLcR::synapse0x2482580() {
   return (neuron0x24696b0()*0.0706675);
}

double NNfunction_sb_cLcR::synapse0x24825c0() {
   return (neuron0x24699f0()*0.128966);
}

double NNfunction_sb_cLcR::synapse0x2482600() {
   return (neuron0x2469d30()*0.0325073);
}

double NNfunction_sb_cLcR::synapse0x2482640() {
   return (neuron0x246a070()*0.0312375);
}

double NNfunction_sb_cLcR::synapse0x24829c0() {
   return (neuron0x24654b0()*0.583602);
}

double NNfunction_sb_cLcR::synapse0x2482a00() {
   return (neuron0x24657f0()*0.0840256);
}

double NNfunction_sb_cLcR::synapse0x2482a40() {
   return (neuron0x2465b30()*-0.340035);
}

double NNfunction_sb_cLcR::synapse0x2482a80() {
   return (neuron0x2465e70()*-0.297322);
}

double NNfunction_sb_cLcR::synapse0x2482ac0() {
   return (neuron0x24661b0()*0.297556);
}

double NNfunction_sb_cLcR::synapse0x2482b00() {
   return (neuron0x24664f0()*-0.000197619);
}

double NNfunction_sb_cLcR::synapse0x2482b40() {
   return (neuron0x2466830()*-1.27058);
}

double NNfunction_sb_cLcR::synapse0x2482b80() {
   return (neuron0x2466b70()*0.279725);
}

double NNfunction_sb_cLcR::synapse0x2482bc0() {
   return (neuron0x2466eb0()*0.0777836);
}

double NNfunction_sb_cLcR::synapse0x2482c00() {
   return (neuron0x24671f0()*-0.7039);
}

double NNfunction_sb_cLcR::synapse0x2482c40() {
   return (neuron0x2467530()*-0.116702);
}

double NNfunction_sb_cLcR::synapse0x2482c80() {
   return (neuron0x2467870()*0.0237937);
}

double NNfunction_sb_cLcR::synapse0x2482cc0() {
   return (neuron0x2467bb0()*-0.0893227);
}

double NNfunction_sb_cLcR::synapse0x2482d00() {
   return (neuron0x2467ef0()*0.14662);
}

double NNfunction_sb_cLcR::synapse0x2482d40() {
   return (neuron0x2468230()*-0.525249);
}

double NNfunction_sb_cLcR::synapse0x2482d80() {
   return (neuron0x2468570()*0.695964);
}

double NNfunction_sb_cLcR::synapse0x2482810() {
   return (neuron0x24688b0()*-0.657547);
}

double NNfunction_sb_cLcR::synapse0x2482850() {
   return (neuron0x2468e10()*0.142632);
}

double NNfunction_sb_cLcR::synapse0x2482ed0() {
   return (neuron0x2469030()*-0.190616);
}

double NNfunction_sb_cLcR::synapse0x2482f10() {
   return (neuron0x2469370()*0.033694);
}

double NNfunction_sb_cLcR::synapse0x2482f50() {
   return (neuron0x24696b0()*-0.408717);
}

double NNfunction_sb_cLcR::synapse0x2482f90() {
   return (neuron0x24699f0()*-0.196491);
}

double NNfunction_sb_cLcR::synapse0x2482fd0() {
   return (neuron0x2469d30()*0.0715755);
}

double NNfunction_sb_cLcR::synapse0x2483010() {
   return (neuron0x246a070()*-0.271159);
}

double NNfunction_sb_cLcR::synapse0x2483390() {
   return (neuron0x24654b0()*-0.25845);
}

double NNfunction_sb_cLcR::synapse0x24833d0() {
   return (neuron0x24657f0()*-0.40763);
}

double NNfunction_sb_cLcR::synapse0x2483410() {
   return (neuron0x2465b30()*0.291254);
}

double NNfunction_sb_cLcR::synapse0x2483450() {
   return (neuron0x2465e70()*0.197553);
}

double NNfunction_sb_cLcR::synapse0x2483490() {
   return (neuron0x24661b0()*0.251559);
}

double NNfunction_sb_cLcR::synapse0x24834d0() {
   return (neuron0x24664f0()*-0.0399563);
}

double NNfunction_sb_cLcR::synapse0x2483510() {
   return (neuron0x2466830()*0.111516);
}

double NNfunction_sb_cLcR::synapse0x2483550() {
   return (neuron0x2466b70()*-0.0879326);
}

double NNfunction_sb_cLcR::synapse0x2483590() {
   return (neuron0x2466eb0()*-0.168334);
}

double NNfunction_sb_cLcR::synapse0x24835d0() {
   return (neuron0x24671f0()*0.424839);
}

double NNfunction_sb_cLcR::synapse0x2483610() {
   return (neuron0x2467530()*0.442059);
}

double NNfunction_sb_cLcR::synapse0x2483650() {
   return (neuron0x2467870()*-0.717087);
}

double NNfunction_sb_cLcR::synapse0x2483690() {
   return (neuron0x2467bb0()*0.313416);
}

double NNfunction_sb_cLcR::synapse0x24836d0() {
   return (neuron0x2467ef0()*-0.800074);
}

double NNfunction_sb_cLcR::synapse0x2483710() {
   return (neuron0x2468230()*-0.634906);
}

double NNfunction_sb_cLcR::synapse0x2483750() {
   return (neuron0x2468570()*0.515216);
}

double NNfunction_sb_cLcR::synapse0x24831e0() {
   return (neuron0x24688b0()*0.417558);
}

double NNfunction_sb_cLcR::synapse0x2483220() {
   return (neuron0x2468e10()*0.00595098);
}

double NNfunction_sb_cLcR::synapse0x24838a0() {
   return (neuron0x2469030()*0.273405);
}

double NNfunction_sb_cLcR::synapse0x24838e0() {
   return (neuron0x2469370()*0.497042);
}

double NNfunction_sb_cLcR::synapse0x2483920() {
   return (neuron0x24696b0()*0.222534);
}

double NNfunction_sb_cLcR::synapse0x2483960() {
   return (neuron0x24699f0()*-0.350006);
}

double NNfunction_sb_cLcR::synapse0x24839a0() {
   return (neuron0x2469d30()*0.019008);
}

double NNfunction_sb_cLcR::synapse0x24839e0() {
   return (neuron0x246a070()*-0.220698);
}

double NNfunction_sb_cLcR::synapse0x2483d60() {
   return (neuron0x24654b0()*0.124787);
}

double NNfunction_sb_cLcR::synapse0x2483da0() {
   return (neuron0x24657f0()*0.390596);
}

double NNfunction_sb_cLcR::synapse0x2483de0() {
   return (neuron0x2465b30()*-0.107965);
}

double NNfunction_sb_cLcR::synapse0x2483e20() {
   return (neuron0x2465e70()*4.84437);
}

double NNfunction_sb_cLcR::synapse0x2483e60() {
   return (neuron0x24661b0()*0.197351);
}

double NNfunction_sb_cLcR::synapse0x2483ea0() {
   return (neuron0x24664f0()*0.0615157);
}

double NNfunction_sb_cLcR::synapse0x2483ee0() {
   return (neuron0x2466830()*0.131057);
}

double NNfunction_sb_cLcR::synapse0x2483f20() {
   return (neuron0x2466b70()*-0.13725);
}

double NNfunction_sb_cLcR::synapse0x2483f60() {
   return (neuron0x2466eb0()*0.0434847);
}

double NNfunction_sb_cLcR::synapse0x2483fa0() {
   return (neuron0x24671f0()*-0.0115788);
}

double NNfunction_sb_cLcR::synapse0x2483fe0() {
   return (neuron0x2467530()*-0.1477);
}

double NNfunction_sb_cLcR::synapse0x2484020() {
   return (neuron0x2467870()*-0.0984557);
}

double NNfunction_sb_cLcR::synapse0x2484060() {
   return (neuron0x2467bb0()*0.184263);
}

double NNfunction_sb_cLcR::synapse0x24840a0() {
   return (neuron0x2467ef0()*0.101533);
}

double NNfunction_sb_cLcR::synapse0x24840e0() {
   return (neuron0x2468230()*0.0259811);
}

double NNfunction_sb_cLcR::synapse0x2484120() {
   return (neuron0x2468570()*0.110504);
}

double NNfunction_sb_cLcR::synapse0x2483bb0() {
   return (neuron0x24688b0()*-0.0787468);
}

double NNfunction_sb_cLcR::synapse0x2483bf0() {
   return (neuron0x2468e10()*0.0781335);
}

double NNfunction_sb_cLcR::synapse0x2484270() {
   return (neuron0x2469030()*-0.11128);
}

double NNfunction_sb_cLcR::synapse0x24842b0() {
   return (neuron0x2469370()*-0.0115273);
}

double NNfunction_sb_cLcR::synapse0x24842f0() {
   return (neuron0x24696b0()*0.0983452);
}

double NNfunction_sb_cLcR::synapse0x2484330() {
   return (neuron0x24699f0()*-0.0214674);
}

double NNfunction_sb_cLcR::synapse0x2484370() {
   return (neuron0x2469d30()*-0.00339212);
}

double NNfunction_sb_cLcR::synapse0x24843b0() {
   return (neuron0x246a070()*0.106142);
}

double NNfunction_sb_cLcR::synapse0x2484730() {
   return (neuron0x24654b0()*0.167605);
}

double NNfunction_sb_cLcR::synapse0x2484770() {
   return (neuron0x24657f0()*0.24653);
}

double NNfunction_sb_cLcR::synapse0x24847b0() {
   return (neuron0x2465b30()*-0.142714);
}

double NNfunction_sb_cLcR::synapse0x24847f0() {
   return (neuron0x2465e70()*-4.47341);
}

double NNfunction_sb_cLcR::synapse0x2484830() {
   return (neuron0x24661b0()*0.216477);
}

double NNfunction_sb_cLcR::synapse0x2484870() {
   return (neuron0x24664f0()*-0.0159864);
}

double NNfunction_sb_cLcR::synapse0x24848b0() {
   return (neuron0x2466830()*-0.00408315);
}

double NNfunction_sb_cLcR::synapse0x24848f0() {
   return (neuron0x2466b70()*0.0880096);
}

double NNfunction_sb_cLcR::synapse0x2484930() {
   return (neuron0x2466eb0()*0.0417301);
}

double NNfunction_sb_cLcR::synapse0x2484970() {
   return (neuron0x24671f0()*0.0589634);
}

double NNfunction_sb_cLcR::synapse0x24849b0() {
   return (neuron0x2467530()*-0.223506);
}

double NNfunction_sb_cLcR::synapse0x24849f0() {
   return (neuron0x2467870()*-0.069328);
}

double NNfunction_sb_cLcR::synapse0x2484a30() {
   return (neuron0x2467bb0()*0.150804);
}

double NNfunction_sb_cLcR::synapse0x2484a70() {
   return (neuron0x2467ef0()*0.17164);
}

double NNfunction_sb_cLcR::synapse0x2484ab0() {
   return (neuron0x2468230()*0.00894855);
}

double NNfunction_sb_cLcR::synapse0x2484af0() {
   return (neuron0x2468570()*0.512158);
}

double NNfunction_sb_cLcR::synapse0x2484580() {
   return (neuron0x24688b0()*-0.0986105);
}

double NNfunction_sb_cLcR::synapse0x24845c0() {
   return (neuron0x2468e10()*0.164698);
}

double NNfunction_sb_cLcR::synapse0x2484c40() {
   return (neuron0x2469030()*-0.512748);
}

double NNfunction_sb_cLcR::synapse0x2484c80() {
   return (neuron0x2469370()*-0.061581);
}

double NNfunction_sb_cLcR::synapse0x2484cc0() {
   return (neuron0x24696b0()*-0.002414);
}

double NNfunction_sb_cLcR::synapse0x2484d00() {
   return (neuron0x24699f0()*-0.0172354);
}

double NNfunction_sb_cLcR::synapse0x2484d40() {
   return (neuron0x2469d30()*0.0296962);
}

double NNfunction_sb_cLcR::synapse0x2484d80() {
   return (neuron0x246a070()*-0.0619106);
}

double NNfunction_sb_cLcR::synapse0x2485100() {
   return (neuron0x24654b0()*-0.786615);
}

double NNfunction_sb_cLcR::synapse0x2485140() {
   return (neuron0x24657f0()*0.839696);
}

double NNfunction_sb_cLcR::synapse0x2485180() {
   return (neuron0x2465b30()*0.648995);
}

double NNfunction_sb_cLcR::synapse0x24851c0() {
   return (neuron0x2465e70()*0.881053);
}

double NNfunction_sb_cLcR::synapse0x2485200() {
   return (neuron0x24661b0()*0.216621);
}

double NNfunction_sb_cLcR::synapse0x2485240() {
   return (neuron0x24664f0()*0.186332);
}

double NNfunction_sb_cLcR::synapse0x2485280() {
   return (neuron0x2466830()*0.25259);
}

double NNfunction_sb_cLcR::synapse0x24852c0() {
   return (neuron0x2466b70()*0.471973);
}

double NNfunction_sb_cLcR::synapse0x2485300() {
   return (neuron0x2466eb0()*0.128216);
}

double NNfunction_sb_cLcR::synapse0x2485340() {
   return (neuron0x24671f0()*0.0815351);
}

double NNfunction_sb_cLcR::synapse0x2485380() {
   return (neuron0x2467530()*-0.624621);
}

double NNfunction_sb_cLcR::synapse0x24853c0() {
   return (neuron0x2467870()*-1.24697);
}

double NNfunction_sb_cLcR::synapse0x2485400() {
   return (neuron0x2467bb0()*-0.569084);
}

double NNfunction_sb_cLcR::synapse0x2485440() {
   return (neuron0x2467ef0()*0.464918);
}

double NNfunction_sb_cLcR::synapse0x2485480() {
   return (neuron0x2468230()*-0.215558);
}

double NNfunction_sb_cLcR::synapse0x24854c0() {
   return (neuron0x2468570()*0.0799585);
}

double NNfunction_sb_cLcR::synapse0x2484f50() {
   return (neuron0x24688b0()*-0.0221787);
}

double NNfunction_sb_cLcR::synapse0x2484f90() {
   return (neuron0x2468e10()*-0.309118);
}

double NNfunction_sb_cLcR::synapse0x2485610() {
   return (neuron0x2469030()*0.531978);
}

double NNfunction_sb_cLcR::synapse0x2485650() {
   return (neuron0x2469370()*-0.789878);
}

double NNfunction_sb_cLcR::synapse0x2485690() {
   return (neuron0x24696b0()*0.119669);
}

double NNfunction_sb_cLcR::synapse0x24856d0() {
   return (neuron0x24699f0()*-0.267716);
}

double NNfunction_sb_cLcR::synapse0x2485710() {
   return (neuron0x2469d30()*0.223172);
}

double NNfunction_sb_cLcR::synapse0x2485750() {
   return (neuron0x246a070()*-0.217814);
}

double NNfunction_sb_cLcR::synapse0x2485ad0() {
   return (neuron0x24654b0()*0.181398);
}

double NNfunction_sb_cLcR::synapse0x2485b10() {
   return (neuron0x24657f0()*0.553843);
}

double NNfunction_sb_cLcR::synapse0x2485b50() {
   return (neuron0x2465b30()*1.04228);
}

double NNfunction_sb_cLcR::synapse0x2485b90() {
   return (neuron0x2465e70()*0.684432);
}

double NNfunction_sb_cLcR::synapse0x2485bd0() {
   return (neuron0x24661b0()*-0.313739);
}

double NNfunction_sb_cLcR::synapse0x2485c10() {
   return (neuron0x24664f0()*0.141186);
}

double NNfunction_sb_cLcR::synapse0x2485c50() {
   return (neuron0x2466830()*-0.00417111);
}

double NNfunction_sb_cLcR::synapse0x2485c90() {
   return (neuron0x2466b70()*-0.0814634);
}

double NNfunction_sb_cLcR::synapse0x2485cd0() {
   return (neuron0x2466eb0()*0.51758);
}

double NNfunction_sb_cLcR::synapse0x2485d10() {
   return (neuron0x24671f0()*0.258336);
}

double NNfunction_sb_cLcR::synapse0x2485d50() {
   return (neuron0x2467530()*-0.0652566);
}

double NNfunction_sb_cLcR::synapse0x2485d90() {
   return (neuron0x2467870()*-0.29585);
}

double NNfunction_sb_cLcR::synapse0x2485dd0() {
   return (neuron0x2467bb0()*-0.0758857);
}

double NNfunction_sb_cLcR::synapse0x2485e10() {
   return (neuron0x2467ef0()*-0.0563752);
}

double NNfunction_sb_cLcR::synapse0x2485e50() {
   return (neuron0x2468230()*0.070407);
}

double NNfunction_sb_cLcR::synapse0x2485e90() {
   return (neuron0x2468570()*-1.03354);
}

double NNfunction_sb_cLcR::synapse0x2485920() {
   return (neuron0x24688b0()*0.252045);
}

double NNfunction_sb_cLcR::synapse0x2485960() {
   return (neuron0x2468e10()*0.134256);
}

double NNfunction_sb_cLcR::synapse0x2485fe0() {
   return (neuron0x2469030()*0.759047);
}

double NNfunction_sb_cLcR::synapse0x2486020() {
   return (neuron0x2469370()*-0.116834);
}

double NNfunction_sb_cLcR::synapse0x2486060() {
   return (neuron0x24696b0()*-0.0515778);
}

double NNfunction_sb_cLcR::synapse0x24860a0() {
   return (neuron0x24699f0()*0.190769);
}

double NNfunction_sb_cLcR::synapse0x24860e0() {
   return (neuron0x2469d30()*-0.222631);
}

double NNfunction_sb_cLcR::synapse0x2486120() {
   return (neuron0x246a070()*0.133451);
}

double NNfunction_sb_cLcR::synapse0x24864a0() {
   return (neuron0x24654b0()*0.508747);
}

double NNfunction_sb_cLcR::synapse0x24864e0() {
   return (neuron0x24657f0()*0.267268);
}

double NNfunction_sb_cLcR::synapse0x2486520() {
   return (neuron0x2465b30()*0.375088);
}

double NNfunction_sb_cLcR::synapse0x2486560() {
   return (neuron0x2465e70()*-0.782366);
}

double NNfunction_sb_cLcR::synapse0x24865a0() {
   return (neuron0x24661b0()*-0.202011);
}

double NNfunction_sb_cLcR::synapse0x24865e0() {
   return (neuron0x24664f0()*-0.519334);
}

double NNfunction_sb_cLcR::synapse0x2486620() {
   return (neuron0x2466830()*-0.675545);
}

double NNfunction_sb_cLcR::synapse0x2486660() {
   return (neuron0x2466b70()*0.121703);
}

double NNfunction_sb_cLcR::synapse0x24866a0() {
   return (neuron0x2466eb0()*-0.206224);
}

double NNfunction_sb_cLcR::synapse0x24866e0() {
   return (neuron0x24671f0()*-0.248959);
}

double NNfunction_sb_cLcR::synapse0x2486720() {
   return (neuron0x2467530()*-0.0845414);
}

double NNfunction_sb_cLcR::synapse0x2486760() {
   return (neuron0x2467870()*1.5911);
}

double NNfunction_sb_cLcR::synapse0x24867a0() {
   return (neuron0x2467bb0()*1.16017);
}

double NNfunction_sb_cLcR::synapse0x24867e0() {
   return (neuron0x2467ef0()*-0.432498);
}

double NNfunction_sb_cLcR::synapse0x2486820() {
   return (neuron0x2468230()*0.0534339);
}

double NNfunction_sb_cLcR::synapse0x2486860() {
   return (neuron0x2468570()*-0.0513227);
}

double NNfunction_sb_cLcR::synapse0x24862f0() {
   return (neuron0x24688b0()*-0.392756);
}

double NNfunction_sb_cLcR::synapse0x2486330() {
   return (neuron0x2468e10()*-0.429324);
}

double NNfunction_sb_cLcR::synapse0x24869b0() {
   return (neuron0x2469030()*0.309817);
}

double NNfunction_sb_cLcR::synapse0x24869f0() {
   return (neuron0x2469370()*0.292716);
}

double NNfunction_sb_cLcR::synapse0x2486a30() {
   return (neuron0x24696b0()*-0.718099);
}

double NNfunction_sb_cLcR::synapse0x2486a70() {
   return (neuron0x24699f0()*-0.0226025);
}

double NNfunction_sb_cLcR::synapse0x2486ab0() {
   return (neuron0x2469d30()*-0.770772);
}

double NNfunction_sb_cLcR::synapse0x2486af0() {
   return (neuron0x246a070()*-0.499814);
}

double NNfunction_sb_cLcR::synapse0x246f5a0() {
   return (neuron0x24654b0()*0.045453);
}

double NNfunction_sb_cLcR::synapse0x246f5e0() {
   return (neuron0x24657f0()*-0.484627);
}

double NNfunction_sb_cLcR::synapse0x246f620() {
   return (neuron0x2465b30()*-0.66409);
}

double NNfunction_sb_cLcR::synapse0x246f660() {
   return (neuron0x2465e70()*1.05413);
}

double NNfunction_sb_cLcR::synapse0x246f6a0() {
   return (neuron0x24661b0()*0.480302);
}

double NNfunction_sb_cLcR::synapse0x246f6e0() {
   return (neuron0x24664f0()*0.0292842);
}

double NNfunction_sb_cLcR::synapse0x246f720() {
   return (neuron0x2466830()*-0.15287);
}

double NNfunction_sb_cLcR::synapse0x246f760() {
   return (neuron0x2466b70()*-0.00770435);
}

double NNfunction_sb_cLcR::synapse0x2487280() {
   return (neuron0x2466eb0()*-0.29661);
}

double NNfunction_sb_cLcR::synapse0x24872c0() {
   return (neuron0x24671f0()*0.175613);
}

double NNfunction_sb_cLcR::synapse0x2487300() {
   return (neuron0x2467530()*0.182609);
}

double NNfunction_sb_cLcR::synapse0x2487340() {
   return (neuron0x2467870()*-0.508586);
}

double NNfunction_sb_cLcR::synapse0x2487380() {
   return (neuron0x2467bb0()*-0.748483);
}

double NNfunction_sb_cLcR::synapse0x24873c0() {
   return (neuron0x2467ef0()*-0.150957);
}

double NNfunction_sb_cLcR::synapse0x2487400() {
   return (neuron0x2468230()*0.124429);
}

double NNfunction_sb_cLcR::synapse0x2487440() {
   return (neuron0x2468570()*-0.42735);
}

double NNfunction_sb_cLcR::synapse0x2486cc0() {
   return (neuron0x24688b0()*-0.0464834);
}

double NNfunction_sb_cLcR::synapse0x2486d00() {
   return (neuron0x2468e10()*-0.203018);
}

double NNfunction_sb_cLcR::synapse0x2487590() {
   return (neuron0x2469030()*1.0736);
}

double NNfunction_sb_cLcR::synapse0x24875d0() {
   return (neuron0x2469370()*0.117053);
}

double NNfunction_sb_cLcR::synapse0x2487610() {
   return (neuron0x24696b0()*0.0626025);
}

double NNfunction_sb_cLcR::synapse0x2487650() {
   return (neuron0x24699f0()*-0.0638379);
}

double NNfunction_sb_cLcR::synapse0x2487690() {
   return (neuron0x2469d30()*-0.179401);
}

double NNfunction_sb_cLcR::synapse0x24876d0() {
   return (neuron0x246a070()*0.365737);
}

double NNfunction_sb_cLcR::synapse0x2487a50() {
   return (neuron0x24654b0()*-0.272835);
}

double NNfunction_sb_cLcR::synapse0x2487a90() {
   return (neuron0x24657f0()*0.0716414);
}

double NNfunction_sb_cLcR::synapse0x2487ad0() {
   return (neuron0x2465b30()*-0.390608);
}

double NNfunction_sb_cLcR::synapse0x2487b10() {
   return (neuron0x2465e70()*0.247998);
}

double NNfunction_sb_cLcR::synapse0x2487b50() {
   return (neuron0x24661b0()*1.19272);
}

double NNfunction_sb_cLcR::synapse0x2487b90() {
   return (neuron0x24664f0()*0.0171651);
}

double NNfunction_sb_cLcR::synapse0x2487bd0() {
   return (neuron0x2466830()*-0.0564186);
}

double NNfunction_sb_cLcR::synapse0x2487c10() {
   return (neuron0x2466b70()*0.285312);
}

double NNfunction_sb_cLcR::synapse0x2487c50() {
   return (neuron0x2466eb0()*-0.329165);
}

double NNfunction_sb_cLcR::synapse0x2487c90() {
   return (neuron0x24671f0()*0.471637);
}

double NNfunction_sb_cLcR::synapse0x2487cd0() {
   return (neuron0x2467530()*-0.0501406);
}

double NNfunction_sb_cLcR::synapse0x2487d10() {
   return (neuron0x2467870()*0.152506);
}

double NNfunction_sb_cLcR::synapse0x2487d50() {
   return (neuron0x2467bb0()*-0.191173);
}

double NNfunction_sb_cLcR::synapse0x2487d90() {
   return (neuron0x2467ef0()*0.0354743);
}

double NNfunction_sb_cLcR::synapse0x2487dd0() {
   return (neuron0x2468230()*-0.110256);
}

double NNfunction_sb_cLcR::synapse0x2487e10() {
   return (neuron0x2468570()*-0.43213);
}

double NNfunction_sb_cLcR::synapse0x24878a0() {
   return (neuron0x24688b0()*-0.117909);
}

double NNfunction_sb_cLcR::synapse0x24878e0() {
   return (neuron0x2468e10()*0.0834069);
}

double NNfunction_sb_cLcR::synapse0x2487f60() {
   return (neuron0x2469030()*0.429446);
}

double NNfunction_sb_cLcR::synapse0x2487fa0() {
   return (neuron0x2469370()*0.0428206);
}

double NNfunction_sb_cLcR::synapse0x2487fe0() {
   return (neuron0x24696b0()*0.153663);
}

double NNfunction_sb_cLcR::synapse0x2488020() {
   return (neuron0x24699f0()*-0.559351);
}

double NNfunction_sb_cLcR::synapse0x2488060() {
   return (neuron0x2469d30()*-0.334349);
}

double NNfunction_sb_cLcR::synapse0x24880a0() {
   return (neuron0x246a070()*0.117857);
}

double NNfunction_sb_cLcR::synapse0x2488420() {
   return (neuron0x24654b0()*0.0918595);
}

double NNfunction_sb_cLcR::synapse0x2488460() {
   return (neuron0x24657f0()*0.00340415);
}

double NNfunction_sb_cLcR::synapse0x24884a0() {
   return (neuron0x2465b30()*-0.057828);
}

double NNfunction_sb_cLcR::synapse0x24884e0() {
   return (neuron0x2465e70()*-0.0912298);
}

double NNfunction_sb_cLcR::synapse0x2488520() {
   return (neuron0x24661b0()*0.0338211);
}

double NNfunction_sb_cLcR::synapse0x2488560() {
   return (neuron0x24664f0()*-0.0407976);
}

double NNfunction_sb_cLcR::synapse0x24885a0() {
   return (neuron0x2466830()*0.112763);
}

double NNfunction_sb_cLcR::synapse0x24885e0() {
   return (neuron0x2466b70()*-0.0219546);
}

double NNfunction_sb_cLcR::synapse0x2488620() {
   return (neuron0x2466eb0()*0.00965857);
}

double NNfunction_sb_cLcR::synapse0x2488660() {
   return (neuron0x24671f0()*0.0712588);
}

double NNfunction_sb_cLcR::synapse0x24886a0() {
   return (neuron0x2467530()*-0.0223024);
}

double NNfunction_sb_cLcR::synapse0x24886e0() {
   return (neuron0x2467870()*-0.0142206);
}

double NNfunction_sb_cLcR::synapse0x2488720() {
   return (neuron0x2467bb0()*2.10716);
}

double NNfunction_sb_cLcR::synapse0x2488760() {
   return (neuron0x2467ef0()*-0.0130308);
}

double NNfunction_sb_cLcR::synapse0x24887a0() {
   return (neuron0x2468230()*0.0994336);
}

double NNfunction_sb_cLcR::synapse0x24887e0() {
   return (neuron0x2468570()*-0.191956);
}

double NNfunction_sb_cLcR::synapse0x2488270() {
   return (neuron0x24688b0()*0.0992522);
}

double NNfunction_sb_cLcR::synapse0x24882b0() {
   return (neuron0x2468e10()*-0.0301044);
}

double NNfunction_sb_cLcR::synapse0x2478de0() {
   return (neuron0x2469030()*0.055103);
}

double NNfunction_sb_cLcR::synapse0x2478e20() {
   return (neuron0x2469370()*0.0102167);
}

double NNfunction_sb_cLcR::synapse0x2478e60() {
   return (neuron0x24696b0()*-0.0146685);
}

double NNfunction_sb_cLcR::synapse0x2478ea0() {
   return (neuron0x24699f0()*0.0137453);
}

double NNfunction_sb_cLcR::synapse0x2478ee0() {
   return (neuron0x2469d30()*-0.0265575);
}

double NNfunction_sb_cLcR::synapse0x2478f20() {
   return (neuron0x246a070()*0.0317397);
}

double NNfunction_sb_cLcR::synapse0x24792a0() {
   return (neuron0x24654b0()*-0.215198);
}

double NNfunction_sb_cLcR::synapse0x24792e0() {
   return (neuron0x24657f0()*-0.00353473);
}

double NNfunction_sb_cLcR::synapse0x2479320() {
   return (neuron0x2465b30()*0.0874848);
}

double NNfunction_sb_cLcR::synapse0x2479360() {
   return (neuron0x2465e70()*0.12427);
}

double NNfunction_sb_cLcR::synapse0x24793a0() {
   return (neuron0x24661b0()*-0.386942);
}

double NNfunction_sb_cLcR::synapse0x24793e0() {
   return (neuron0x24664f0()*-0.451402);
}

double NNfunction_sb_cLcR::synapse0x2479420() {
   return (neuron0x2466830()*-0.81575);
}

double NNfunction_sb_cLcR::synapse0x2479460() {
   return (neuron0x2466b70()*-0.185642);
}

double NNfunction_sb_cLcR::synapse0x24794a0() {
   return (neuron0x2466eb0()*-0.157453);
}

double NNfunction_sb_cLcR::synapse0x24794e0() {
   return (neuron0x24671f0()*-0.0417617);
}

double NNfunction_sb_cLcR::synapse0x2479520() {
   return (neuron0x2467530()*-0.223989);
}

double NNfunction_sb_cLcR::synapse0x2479560() {
   return (neuron0x2467870()*0.0980839);
}

double NNfunction_sb_cLcR::synapse0x24795a0() {
   return (neuron0x2467bb0()*1.07539);
}

double NNfunction_sb_cLcR::synapse0x24795e0() {
   return (neuron0x2467ef0()*0.262165);
}

double NNfunction_sb_cLcR::synapse0x2479620() {
   return (neuron0x2468230()*0.0934121);
}

double NNfunction_sb_cLcR::synapse0x2479660() {
   return (neuron0x2468570()*0.465153);
}

double NNfunction_sb_cLcR::synapse0x24790f0() {
   return (neuron0x24688b0()*-0.199819);
}

double NNfunction_sb_cLcR::synapse0x2479130() {
   return (neuron0x2468e10()*0.256713);
}

double NNfunction_sb_cLcR::synapse0x24797b0() {
   return (neuron0x2469030()*0.157261);
}

double NNfunction_sb_cLcR::synapse0x24797f0() {
   return (neuron0x2469370()*-0.0231512);
}

double NNfunction_sb_cLcR::synapse0x2479830() {
   return (neuron0x24696b0()*0.131568);
}

double NNfunction_sb_cLcR::synapse0x2479870() {
   return (neuron0x24699f0()*0.103169);
}

double NNfunction_sb_cLcR::synapse0x24798b0() {
   return (neuron0x2469d30()*-0.18412);
}

double NNfunction_sb_cLcR::synapse0x24798f0() {
   return (neuron0x246a070()*0.0105746);
}

double NNfunction_sb_cLcR::synapse0x2479c70() {
   return (neuron0x24654b0()*-0.00242948);
}

double NNfunction_sb_cLcR::synapse0x2479cb0() {
   return (neuron0x24657f0()*0.304262);
}

double NNfunction_sb_cLcR::synapse0x2479cf0() {
   return (neuron0x2465b30()*-0.122141);
}

double NNfunction_sb_cLcR::synapse0x2479d30() {
   return (neuron0x2465e70()*0.452673);
}

double NNfunction_sb_cLcR::synapse0x2479d70() {
   return (neuron0x24661b0()*-0.0742813);
}

double NNfunction_sb_cLcR::synapse0x2479db0() {
   return (neuron0x24664f0()*-0.0981312);
}

double NNfunction_sb_cLcR::synapse0x2479df0() {
   return (neuron0x2466830()*-0.0497237);
}

double NNfunction_sb_cLcR::synapse0x2479e30() {
   return (neuron0x2466b70()*0.59684);
}

double NNfunction_sb_cLcR::synapse0x2479e70() {
   return (neuron0x2466eb0()*0.193366);
}

double NNfunction_sb_cLcR::synapse0x2479eb0() {
   return (neuron0x24671f0()*0.56474);
}

double NNfunction_sb_cLcR::synapse0x2479ef0() {
   return (neuron0x2467530()*0.0705584);
}

double NNfunction_sb_cLcR::synapse0x2479f30() {
   return (neuron0x2467870()*-0.000578161);
}

double NNfunction_sb_cLcR::synapse0x2479f70() {
   return (neuron0x2467bb0()*0.106969);
}

double NNfunction_sb_cLcR::synapse0x2479fb0() {
   return (neuron0x2467ef0()*0.0312465);
}

double NNfunction_sb_cLcR::synapse0x2479ff0() {
   return (neuron0x2468230()*-0.213471);
}

double NNfunction_sb_cLcR::synapse0x247a030() {
   return (neuron0x2468570()*0.725872);
}

double NNfunction_sb_cLcR::synapse0x2479ac0() {
   return (neuron0x24688b0()*0.932813);
}

double NNfunction_sb_cLcR::synapse0x2479b00() {
   return (neuron0x2468e10()*0.212094);
}

double NNfunction_sb_cLcR::synapse0x247a180() {
   return (neuron0x2469030()*0.0573539);
}

double NNfunction_sb_cLcR::synapse0x247a1c0() {
   return (neuron0x2469370()*-0.5037);
}

double NNfunction_sb_cLcR::synapse0x247a200() {
   return (neuron0x24696b0()*-0.0508729);
}

double NNfunction_sb_cLcR::synapse0x247a240() {
   return (neuron0x24699f0()*0.101768);
}

double NNfunction_sb_cLcR::synapse0x247a280() {
   return (neuron0x2469d30()*-0.0767224);
}

double NNfunction_sb_cLcR::synapse0x247a2c0() {
   return (neuron0x246a070()*-0.197907);
}

double NNfunction_sb_cLcR::synapse0x247a640() {
   return (neuron0x24654b0()*0.0188606);
}

double NNfunction_sb_cLcR::synapse0x247a680() {
   return (neuron0x24657f0()*-0.0797194);
}

double NNfunction_sb_cLcR::synapse0x247a6c0() {
   return (neuron0x2465b30()*-0.466504);
}

double NNfunction_sb_cLcR::synapse0x247a700() {
   return (neuron0x2465e70()*0.939254);
}

double NNfunction_sb_cLcR::synapse0x247a740() {
   return (neuron0x24661b0()*-0.274635);
}

double NNfunction_sb_cLcR::synapse0x247a780() {
   return (neuron0x24664f0()*0.618519);
}

double NNfunction_sb_cLcR::synapse0x247a7c0() {
   return (neuron0x2466830()*0.0811351);
}

double NNfunction_sb_cLcR::synapse0x247a800() {
   return (neuron0x2466b70()*0.249509);
}

double NNfunction_sb_cLcR::synapse0x247a840() {
   return (neuron0x2466eb0()*-0.54579);
}

double NNfunction_sb_cLcR::synapse0x247a880() {
   return (neuron0x24671f0()*-0.173391);
}

double NNfunction_sb_cLcR::synapse0x247a8c0() {
   return (neuron0x2467530()*-0.151493);
}

double NNfunction_sb_cLcR::synapse0x247a900() {
   return (neuron0x2467870()*0.252956);
}

double NNfunction_sb_cLcR::synapse0x247a940() {
   return (neuron0x2467bb0()*-0.0169642);
}

double NNfunction_sb_cLcR::synapse0x247a980() {
   return (neuron0x2467ef0()*-0.275499);
}

double NNfunction_sb_cLcR::synapse0x247a9c0() {
   return (neuron0x2468230()*-0.0140887);
}

double NNfunction_sb_cLcR::synapse0x247aa00() {
   return (neuron0x2468570()*-0.0557814);
}

double NNfunction_sb_cLcR::synapse0x247a490() {
   return (neuron0x24688b0()*0.198544);
}

double NNfunction_sb_cLcR::synapse0x247a4d0() {
   return (neuron0x2468e10()*-0.0345169);
}

double NNfunction_sb_cLcR::synapse0x247ab50() {
   return (neuron0x2469030()*-0.259811);
}

double NNfunction_sb_cLcR::synapse0x247ab90() {
   return (neuron0x2469370()*0.231093);
}

double NNfunction_sb_cLcR::synapse0x247abd0() {
   return (neuron0x24696b0()*-0.0581547);
}

double NNfunction_sb_cLcR::synapse0x247ac10() {
   return (neuron0x24699f0()*-0.0709215);
}

double NNfunction_sb_cLcR::synapse0x247ac50() {
   return (neuron0x2469d30()*0.183456);
}

double NNfunction_sb_cLcR::synapse0x247ac90() {
   return (neuron0x246a070()*-0.039212);
}

double NNfunction_sb_cLcR::synapse0x248cb60() {
   return (neuron0x24654b0()*0.0153387);
}

double NNfunction_sb_cLcR::synapse0x248cba0() {
   return (neuron0x24657f0()*-0.130884);
}

double NNfunction_sb_cLcR::synapse0x248cbe0() {
   return (neuron0x2465b30()*-0.740299);
}

double NNfunction_sb_cLcR::synapse0x248cc20() {
   return (neuron0x2465e70()*1.14818);
}

double NNfunction_sb_cLcR::synapse0x248cc60() {
   return (neuron0x24661b0()*0.18296);
}

double NNfunction_sb_cLcR::synapse0x248cca0() {
   return (neuron0x24664f0()*0.330271);
}

double NNfunction_sb_cLcR::synapse0x248cce0() {
   return (neuron0x2466830()*-0.253985);
}

double NNfunction_sb_cLcR::synapse0x248cd20() {
   return (neuron0x2466b70()*-0.172628);
}

double NNfunction_sb_cLcR::synapse0x248cd60() {
   return (neuron0x2466eb0()*-0.122579);
}

double NNfunction_sb_cLcR::synapse0x248cda0() {
   return (neuron0x24671f0()*-1.08018);
}

double NNfunction_sb_cLcR::synapse0x248cde0() {
   return (neuron0x2467530()*-0.149551);
}

double NNfunction_sb_cLcR::synapse0x248ce20() {
   return (neuron0x2467870()*0.13387);
}

double NNfunction_sb_cLcR::synapse0x248ce60() {
   return (neuron0x2467bb0()*-0.105924);
}

double NNfunction_sb_cLcR::synapse0x248cea0() {
   return (neuron0x2467ef0()*0.0766904);
}

double NNfunction_sb_cLcR::synapse0x248cee0() {
   return (neuron0x2468230()*0.240613);
}

double NNfunction_sb_cLcR::synapse0x248cf20() {
   return (neuron0x2468570()*-0.0941946);
}

double NNfunction_sb_cLcR::synapse0x247acd0() {
   return (neuron0x24688b0()*-0.224265);
}

double NNfunction_sb_cLcR::synapse0x247ad10() {
   return (neuron0x2468e10()*-0.245535);
}

double NNfunction_sb_cLcR::synapse0x248d070() {
   return (neuron0x2469030()*0.448755);
}

double NNfunction_sb_cLcR::synapse0x248d0b0() {
   return (neuron0x2469370()*-0.824062);
}

double NNfunction_sb_cLcR::synapse0x248d0f0() {
   return (neuron0x24696b0()*0.00231038);
}

double NNfunction_sb_cLcR::synapse0x248d130() {
   return (neuron0x24699f0()*0.106271);
}

double NNfunction_sb_cLcR::synapse0x248d170() {
   return (neuron0x2469d30()*0.0515062);
}

double NNfunction_sb_cLcR::synapse0x248d1b0() {
   return (neuron0x246a070()*0.0825701);
}

double NNfunction_sb_cLcR::synapse0x248d530() {
   return (neuron0x24654b0()*0.0206961);
}

double NNfunction_sb_cLcR::synapse0x248d570() {
   return (neuron0x24657f0()*-0.180534);
}

double NNfunction_sb_cLcR::synapse0x248d5b0() {
   return (neuron0x2465b30()*-0.556109);
}

double NNfunction_sb_cLcR::synapse0x248d5f0() {
   return (neuron0x2465e70()*0.376503);
}

double NNfunction_sb_cLcR::synapse0x248d630() {
   return (neuron0x24661b0()*0.0937855);
}

double NNfunction_sb_cLcR::synapse0x248d670() {
   return (neuron0x24664f0()*0.0495496);
}

double NNfunction_sb_cLcR::synapse0x248d6b0() {
   return (neuron0x2466830()*0.0714462);
}

double NNfunction_sb_cLcR::synapse0x248d6f0() {
   return (neuron0x2466b70()*0.0782359);
}

double NNfunction_sb_cLcR::synapse0x248d730() {
   return (neuron0x2466eb0()*-0.0109706);
}

double NNfunction_sb_cLcR::synapse0x248d770() {
   return (neuron0x24671f0()*0.213532);
}

double NNfunction_sb_cLcR::synapse0x248d7b0() {
   return (neuron0x2467530()*-0.151365);
}

double NNfunction_sb_cLcR::synapse0x248d7f0() {
   return (neuron0x2467870()*-0.427643);
}

double NNfunction_sb_cLcR::synapse0x248d830() {
   return (neuron0x2467bb0()*-0.36496);
}

double NNfunction_sb_cLcR::synapse0x248d870() {
   return (neuron0x2467ef0()*0.113458);
}

double NNfunction_sb_cLcR::synapse0x248d8b0() {
   return (neuron0x2468230()*-0.0449263);
}

double NNfunction_sb_cLcR::synapse0x248d8f0() {
   return (neuron0x2468570()*-0.428282);
}

double NNfunction_sb_cLcR::synapse0x248d380() {
   return (neuron0x24688b0()*0.171488);
}

double NNfunction_sb_cLcR::synapse0x248d3c0() {
   return (neuron0x2468e10()*0.341328);
}

double NNfunction_sb_cLcR::synapse0x248da40() {
   return (neuron0x2469030()*0.0369594);
}

double NNfunction_sb_cLcR::synapse0x248da80() {
   return (neuron0x2469370()*-0.292219);
}

double NNfunction_sb_cLcR::synapse0x248dac0() {
   return (neuron0x24696b0()*0.052833);
}

double NNfunction_sb_cLcR::synapse0x248db00() {
   return (neuron0x24699f0()*-0.0556479);
}

double NNfunction_sb_cLcR::synapse0x248db40() {
   return (neuron0x2469d30()*0.0111726);
}

double NNfunction_sb_cLcR::synapse0x248db80() {
   return (neuron0x246a070()*-0.0313834);
}

double NNfunction_sb_cLcR::synapse0x248df00() {
   return (neuron0x24654b0()*0.211849);
}

double NNfunction_sb_cLcR::synapse0x248df40() {
   return (neuron0x24657f0()*0.361964);
}

double NNfunction_sb_cLcR::synapse0x248df80() {
   return (neuron0x2465b30()*-0.041017);
}

double NNfunction_sb_cLcR::synapse0x248dfc0() {
   return (neuron0x2465e70()*2.01855);
}

double NNfunction_sb_cLcR::synapse0x248e000() {
   return (neuron0x24661b0()*0.258568);
}

double NNfunction_sb_cLcR::synapse0x248e040() {
   return (neuron0x24664f0()*-0.067448);
}

double NNfunction_sb_cLcR::synapse0x248e080() {
   return (neuron0x2466830()*0.0350838);
}

double NNfunction_sb_cLcR::synapse0x248e0c0() {
   return (neuron0x2466b70()*-0.160706);
}

double NNfunction_sb_cLcR::synapse0x248e100() {
   return (neuron0x2466eb0()*-0.132229);
}

double NNfunction_sb_cLcR::synapse0x248e140() {
   return (neuron0x24671f0()*0.378276);
}

double NNfunction_sb_cLcR::synapse0x248e180() {
   return (neuron0x2467530()*-0.120353);
}

double NNfunction_sb_cLcR::synapse0x248e1c0() {
   return (neuron0x2467870()*0.823988);
}

double NNfunction_sb_cLcR::synapse0x248e200() {
   return (neuron0x2467bb0()*0.280918);
}

double NNfunction_sb_cLcR::synapse0x248e240() {
   return (neuron0x2467ef0()*0.398677);
}

double NNfunction_sb_cLcR::synapse0x248e280() {
   return (neuron0x2468230()*0.337672);
}

double NNfunction_sb_cLcR::synapse0x248e2c0() {
   return (neuron0x2468570()*-0.43351);
}

double NNfunction_sb_cLcR::synapse0x248dd50() {
   return (neuron0x24688b0()*-0.000666838);
}

double NNfunction_sb_cLcR::synapse0x248dd90() {
   return (neuron0x2468e10()*0.365539);
}

double NNfunction_sb_cLcR::synapse0x248e410() {
   return (neuron0x2469030()*0.388818);
}

double NNfunction_sb_cLcR::synapse0x248e450() {
   return (neuron0x2469370()*-0.262417);
}

double NNfunction_sb_cLcR::synapse0x248e490() {
   return (neuron0x24696b0()*0.122488);
}

double NNfunction_sb_cLcR::synapse0x248e4d0() {
   return (neuron0x24699f0()*0.0218204);
}

double NNfunction_sb_cLcR::synapse0x248e510() {
   return (neuron0x2469d30()*0.156589);
}

double NNfunction_sb_cLcR::synapse0x248e550() {
   return (neuron0x246a070()*0.395394);
}

double NNfunction_sb_cLcR::synapse0x248e8d0() {
   return (neuron0x24654b0()*0.0291139);
}

double NNfunction_sb_cLcR::synapse0x248e910() {
   return (neuron0x24657f0()*-0.251437);
}

double NNfunction_sb_cLcR::synapse0x248e950() {
   return (neuron0x2465b30()*0.196419);
}

double NNfunction_sb_cLcR::synapse0x248e990() {
   return (neuron0x2465e70()*1.10489);
}

double NNfunction_sb_cLcR::synapse0x248e9d0() {
   return (neuron0x24661b0()*0.186482);
}

double NNfunction_sb_cLcR::synapse0x248ea10() {
   return (neuron0x24664f0()*-0.300168);
}

double NNfunction_sb_cLcR::synapse0x248ea50() {
   return (neuron0x2466830()*0.113743);
}

double NNfunction_sb_cLcR::synapse0x248ea90() {
   return (neuron0x2466b70()*-0.162962);
}

double NNfunction_sb_cLcR::synapse0x248ead0() {
   return (neuron0x2466eb0()*0.123471);
}

double NNfunction_sb_cLcR::synapse0x248eb10() {
   return (neuron0x24671f0()*0.741451);
}

double NNfunction_sb_cLcR::synapse0x248eb50() {
   return (neuron0x2467530()*0.304308);
}

double NNfunction_sb_cLcR::synapse0x248eb90() {
   return (neuron0x2467870()*0.00534858);
}

double NNfunction_sb_cLcR::synapse0x248ebd0() {
   return (neuron0x2467bb0()*0.574875);
}

double NNfunction_sb_cLcR::synapse0x248ec10() {
   return (neuron0x2467ef0()*-0.179852);
}

double NNfunction_sb_cLcR::synapse0x248ec50() {
   return (neuron0x2468230()*0.139946);
}

double NNfunction_sb_cLcR::synapse0x248ec90() {
   return (neuron0x2468570()*0.108788);
}

double NNfunction_sb_cLcR::synapse0x248e720() {
   return (neuron0x24688b0()*-0.025942);
}

double NNfunction_sb_cLcR::synapse0x248e760() {
   return (neuron0x2468e10()*0.8003);
}

double NNfunction_sb_cLcR::synapse0x248ede0() {
   return (neuron0x2469030()*-0.1262);
}

double NNfunction_sb_cLcR::synapse0x248ee20() {
   return (neuron0x2469370()*0.627997);
}

double NNfunction_sb_cLcR::synapse0x248ee60() {
   return (neuron0x24696b0()*0.0545954);
}

double NNfunction_sb_cLcR::synapse0x248eea0() {
   return (neuron0x24699f0()*-0.0649095);
}

double NNfunction_sb_cLcR::synapse0x248eee0() {
   return (neuron0x2469d30()*-0.0802015);
}

double NNfunction_sb_cLcR::synapse0x248ef20() {
   return (neuron0x246a070()*-0.127261);
}

double NNfunction_sb_cLcR::synapse0x246b4c0() {
   return (neuron0x246a510()*0.469666);
}

double NNfunction_sb_cLcR::synapse0x246b500() {
   return (neuron0x246ae20()*-1.71661);
}

double NNfunction_sb_cLcR::synapse0x246c9d0() {
   return (neuron0x246b900()*0.375858);
}

double NNfunction_sb_cLcR::synapse0x246ca10() {
   return (neuron0x2225190()*0.95041);
}

double NNfunction_sb_cLcR::synapse0x246d3a0() {
   return (neuron0x246c720()*-0.383945);
}

double NNfunction_sb_cLcR::synapse0x246d3e0() {
   return (neuron0x246d0f0()*-1.12136);
}

double NNfunction_sb_cLcR::synapse0x246e170() {
   return (neuron0x246dec0()*-1.52407);
}

double NNfunction_sb_cLcR::synapse0x246e1b0() {
   return (neuron0x246e890()*1.32171);
}

double NNfunction_sb_cLcR::synapse0x246eb40() {
   return (neuron0x246f260()*-0.45839);
}

double NNfunction_sb_cLcR::synapse0x246eb80() {
   return (neuron0x246fd40()*-2.52613);
}

double NNfunction_sb_cLcR::synapse0x246f510() {
   return (neuron0x2470710()*-0.568707);
}

double NNfunction_sb_cLcR::synapse0x246f550() {
   return (neuron0x246d7f0()*3.87208);
}

double NNfunction_sb_cLcR::synapse0x246fff0() {
   return (neuron0x24722c0()*4.2577);
}

double NNfunction_sb_cLcR::synapse0x2470030() {
   return (neuron0x2472c90()*0.322169);
}

double NNfunction_sb_cLcR::synapse0x24709c0() {
   return (neuron0x2473660()*-0.0612866);
}

double NNfunction_sb_cLcR::synapse0x2470a00() {
   return (neuron0x2474030()*-0.651734);
}

double NNfunction_sb_cLcR::synapse0x246daa0() {
   return (neuron0x2475e40()*-2.36153);
}

double NNfunction_sb_cLcR::synapse0x246dae0() {
   return (neuron0x2476120()*-0.197397);
}

double NNfunction_sb_cLcR::synapse0x2472570() {
   return (neuron0x2476af0()*-0.810962);
}

double NNfunction_sb_cLcR::synapse0x24725b0() {
   return (neuron0x24774c0()*1.38434);
}

double NNfunction_sb_cLcR::synapse0x2472f40() {
   return (neuron0x2477e90()*0.714826);
}

double NNfunction_sb_cLcR::synapse0x2472f80() {
   return (neuron0x2478860()*0.988821);
}

double NNfunction_sb_cLcR::synapse0x2473910() {
   return (neuron0x24713b0()*0.0780158);
}

double NNfunction_sb_cLcR::synapse0x2473950() {
   return (neuron0x2471d80()*-0.673242);
}

double NNfunction_sb_cLcR::synapse0x24742e0() {
   return (neuron0x247b5f0()*-2.78558);
}

double NNfunction_sb_cLcR::synapse0x2474320() {
   return (neuron0x247bfc0()*-5.42034);
}

double NNfunction_sb_cLcR::synapse0x2468450() {
   return (neuron0x247c990()*0.0499846);
}

double NNfunction_sb_cLcR::synapse0x2468490() {
   return (neuron0x247d360()*0.424242);
}

double NNfunction_sb_cLcR::synapse0x24763d0() {
   return (neuron0x247dd30()*0.255658);
}

double NNfunction_sb_cLcR::synapse0x2476410() {
   return (neuron0x247e700()*-0.431134);
}

double NNfunction_sb_cLcR::synapse0x2476da0() {
   return (neuron0x247f0d0()*1.30756);
}

double NNfunction_sb_cLcR::synapse0x2476de0() {
   return (neuron0x247faa0()*-0.626547);
}

double NNfunction_sb_cLcR::synapse0x2477770() {
   return (neuron0x2475b30()*0.556215);
}

double NNfunction_sb_cLcR::synapse0x24777b0() {
   return (neuron0x2482680()*0.726131);
}

double NNfunction_sb_cLcR::synapse0x2478140() {
   return (neuron0x2483050()*0.587761);
}

double NNfunction_sb_cLcR::synapse0x2478180() {
   return (neuron0x2483a20()*3.00715);
}

double NNfunction_sb_cLcR::synapse0x2478b10() {
   return (neuron0x24843f0()*-1.82037);
}

double NNfunction_sb_cLcR::synapse0x2478b50() {
   return (neuron0x2484dc0()*0.229275);
}

double NNfunction_sb_cLcR::synapse0x2471660() {
   return (neuron0x2485790()*0.0097633);
}

double NNfunction_sb_cLcR::synapse0x24716a0() {
   return (neuron0x2486160()*0.399887);
}

double NNfunction_sb_cLcR::synapse0x247af10() {
   return (neuron0x2486b30()*0.865007);
}

double NNfunction_sb_cLcR::synapse0x247af50() {
   return (neuron0x2487710()*-0.70808);
}

double NNfunction_sb_cLcR::synapse0x247b8a0() {
   return (neuron0x24880e0()*1.38736);
}

double NNfunction_sb_cLcR::synapse0x247b8e0() {
   return (neuron0x2478f60()*-0.0284922);
}

double NNfunction_sb_cLcR::synapse0x247c270() {
   return (neuron0x2479930()*-0.553836);
}

double NNfunction_sb_cLcR::synapse0x247c2b0() {
   return (neuron0x247a300()*-0.497601);
}

double NNfunction_sb_cLcR::synapse0x247cc40() {
   return (neuron0x248c940()*0.144529);
}

double NNfunction_sb_cLcR::synapse0x247cc80() {
   return (neuron0x248d1f0()*-0.124017);
}

double NNfunction_sb_cLcR::synapse0x247d610() {
   return (neuron0x248dbc0()*0.753304);
}

double NNfunction_sb_cLcR::synapse0x247d650() {
   return (neuron0x248e590()*-0.460665);
}

double NNfunction_sb_cLcR::synapse0x247fd50() {
   return (neuron0x246a510()*0.1294);
}

double NNfunction_sb_cLcR::synapse0x247fd90() {
   return (neuron0x246ae20()*-3.78246);
}

double NNfunction_sb_cLcR::synapse0x2475310() {
   return (neuron0x246b900()*0.437881);
}

double NNfunction_sb_cLcR::synapse0x2475350() {
   return (neuron0x2225190()*-0.167008);
}

double NNfunction_sb_cLcR::synapse0x2482930() {
   return (neuron0x246c720()*0.743377);
}

double NNfunction_sb_cLcR::synapse0x2482970() {
   return (neuron0x246d0f0()*-0.149971);
}

double NNfunction_sb_cLcR::synapse0x2483300() {
   return (neuron0x246dec0()*-0.00558675);
}

double NNfunction_sb_cLcR::synapse0x2483340() {
   return (neuron0x246e890()*-0.0861955);
}

double NNfunction_sb_cLcR::synapse0x2483cd0() {
   return (neuron0x246f260()*-0.0895492);
}

double NNfunction_sb_cLcR::synapse0x2483d10() {
   return (neuron0x246fd40()*-1.06823);
}

double NNfunction_sb_cLcR::synapse0x24846a0() {
   return (neuron0x2470710()*0.0313207);
}

double NNfunction_sb_cLcR::synapse0x24846e0() {
   return (neuron0x246d7f0()*-0.365551);
}

double NNfunction_sb_cLcR::synapse0x2485070() {
   return (neuron0x24722c0()*1.28525);
}

double NNfunction_sb_cLcR::synapse0x24850b0() {
   return (neuron0x2472c90()*1.8184);
}

double NNfunction_sb_cLcR::synapse0x2485a40() {
   return (neuron0x2473660()*0.0275131);
}

double NNfunction_sb_cLcR::synapse0x2485a80() {
   return (neuron0x2474030()*-0.122846);
}

double NNfunction_sb_cLcR::synapse0x2486410() {
   return (neuron0x2475e40()*3.02081);
}

double NNfunction_sb_cLcR::synapse0x2486450() {
   return (neuron0x2476120()*-0.027215);
}

double NNfunction_sb_cLcR::synapse0x2486de0() {
   return (neuron0x2476af0()*-3.93966);
}

double NNfunction_sb_cLcR::synapse0x2486e20() {
   return (neuron0x24774c0()*-0.427037);
}

double NNfunction_sb_cLcR::synapse0x24879c0() {
   return (neuron0x2477e90()*0.650592);
}

double NNfunction_sb_cLcR::synapse0x2487a00() {
   return (neuron0x2478860()*-0.00812822);
}

double NNfunction_sb_cLcR::synapse0x2488390() {
   return (neuron0x24713b0()*0.00136524);
}

double NNfunction_sb_cLcR::synapse0x24883d0() {
   return (neuron0x2471d80()*0.0886897);
}

double NNfunction_sb_cLcR::synapse0x2479210() {
   return (neuron0x247b5f0()*2.38229);
}

double NNfunction_sb_cLcR::synapse0x2479250() {
   return (neuron0x247bfc0()*0.229359);
}

double NNfunction_sb_cLcR::synapse0x2479be0() {
   return (neuron0x247c990()*-0.133846);
}

double NNfunction_sb_cLcR::synapse0x2479c20() {
   return (neuron0x247d360()*0.0175272);
}

double NNfunction_sb_cLcR::synapse0x247a5b0() {
   return (neuron0x247dd30()*-0.0627489);
}

double NNfunction_sb_cLcR::synapse0x247a5f0() {
   return (neuron0x247e700()*-0.291964);
}

double NNfunction_sb_cLcR::synapse0x248cad0() {
   return (neuron0x247f0d0()*0.622571);
}

double NNfunction_sb_cLcR::synapse0x248cb10() {
   return (neuron0x247faa0()*0.106921);
}

double NNfunction_sb_cLcR::synapse0x248d4a0() {
   return (neuron0x2475b30()*0.676414);
}

double NNfunction_sb_cLcR::synapse0x248d4e0() {
   return (neuron0x2482680()*0.121623);
}

double NNfunction_sb_cLcR::synapse0x248de70() {
   return (neuron0x2483050()*-0.0464413);
}

double NNfunction_sb_cLcR::synapse0x248deb0() {
   return (neuron0x2483a20()*0.420214);
}

double NNfunction_sb_cLcR::synapse0x248e840() {
   return (neuron0x24843f0()*0.68485);
}

double NNfunction_sb_cLcR::synapse0x248e880() {
   return (neuron0x2484dc0()*0.0257353);
}

double NNfunction_sb_cLcR::synapse0x246a730() {
   return (neuron0x2485790()*0.276736);
}

double NNfunction_sb_cLcR::synapse0x246a770() {
   return (neuron0x2486160()*0.00356688);
}

double NNfunction_sb_cLcR::synapse0x247dfe0() {
   return (neuron0x2486b30()*-0.0599655);
}

double NNfunction_sb_cLcR::synapse0x247e020() {
   return (neuron0x2487710()*0.0946567);
}

double NNfunction_sb_cLcR::synapse0x248ef60() {
   return (neuron0x24880e0()*-0.397569);
}

double NNfunction_sb_cLcR::synapse0x248efa0() {
   return (neuron0x2478f60()*0.133852);
}

double NNfunction_sb_cLcR::synapse0x248efe0() {
   return (neuron0x2479930()*-0.227246);
}

double NNfunction_sb_cLcR::synapse0x248f020() {
   return (neuron0x247a300()*0.100861);
}

double NNfunction_sb_cLcR::synapse0x2495ed0() {
   return (neuron0x248c940()*-0.0273371);
}

double NNfunction_sb_cLcR::synapse0x2495f10() {
   return (neuron0x248d1f0()*1.2351);
}

double NNfunction_sb_cLcR::synapse0x2495f50() {
   return (neuron0x248dbc0()*0.00974939);
}

double NNfunction_sb_cLcR::synapse0x2495f90() {
   return (neuron0x248e590()*-0.0168786);
}

double NNfunction_sb_cLcR::synapse0x2496310() {
   return (neuron0x246a510()*-0.0929898);
}

double NNfunction_sb_cLcR::synapse0x2496350() {
   return (neuron0x246ae20()*-1.33642);
}

double NNfunction_sb_cLcR::synapse0x2496390() {
   return (neuron0x246b900()*0.20521);
}

double NNfunction_sb_cLcR::synapse0x24963d0() {
   return (neuron0x2225190()*0.0782078);
}

double NNfunction_sb_cLcR::synapse0x2496410() {
   return (neuron0x246c720()*-0.105456);
}

double NNfunction_sb_cLcR::synapse0x2496450() {
   return (neuron0x246d0f0()*0.0600561);
}

double NNfunction_sb_cLcR::synapse0x2496490() {
   return (neuron0x246dec0()*0.306398);
}

double NNfunction_sb_cLcR::synapse0x24964d0() {
   return (neuron0x246e890()*0.326583);
}

double NNfunction_sb_cLcR::synapse0x2496510() {
   return (neuron0x246f260()*0.121101);
}

double NNfunction_sb_cLcR::synapse0x2496550() {
   return (neuron0x246fd40()*-2.58354);
}

double NNfunction_sb_cLcR::synapse0x2496590() {
   return (neuron0x2470710()*0.00080028);
}

double NNfunction_sb_cLcR::synapse0x24965d0() {
   return (neuron0x246d7f0()*1.02029);
}

double NNfunction_sb_cLcR::synapse0x2496610() {
   return (neuron0x24722c0()*0.499783);
}

double NNfunction_sb_cLcR::synapse0x2496650() {
   return (neuron0x2472c90()*1.48995);
}

double NNfunction_sb_cLcR::synapse0x2496690() {
   return (neuron0x2473660()*0.0116825);
}

double NNfunction_sb_cLcR::synapse0x24966d0() {
   return (neuron0x2474030()*0.139104);
}

double NNfunction_sb_cLcR::synapse0x2496160() {
   return (neuron0x2475e40()*-0.0245304);
}

double NNfunction_sb_cLcR::synapse0x24961a0() {
   return (neuron0x2476120()*0.0188087);
}

double NNfunction_sb_cLcR::synapse0x2496820() {
   return (neuron0x2476af0()*-1.40987);
}

double NNfunction_sb_cLcR::synapse0x2496860() {
   return (neuron0x24774c0()*0.565666);
}

double NNfunction_sb_cLcR::synapse0x24968a0() {
   return (neuron0x2477e90()*-0.624283);
}

double NNfunction_sb_cLcR::synapse0x24968e0() {
   return (neuron0x2478860()*-0.0275078);
}

double NNfunction_sb_cLcR::synapse0x2496920() {
   return (neuron0x24713b0()*0.00456146);
}

double NNfunction_sb_cLcR::synapse0x2496960() {
   return (neuron0x2471d80()*-0.15505);
}

double NNfunction_sb_cLcR::synapse0x24969a0() {
   return (neuron0x247b5f0()*0.841085);
}

double NNfunction_sb_cLcR::synapse0x24969e0() {
   return (neuron0x247bfc0()*-1.22316);
}

double NNfunction_sb_cLcR::synapse0x2496a20() {
   return (neuron0x247c990()*0.441498);
}

double NNfunction_sb_cLcR::synapse0x2496a60() {
   return (neuron0x247d360()*-0.027769);
}

double NNfunction_sb_cLcR::synapse0x2496aa0() {
   return (neuron0x247dd30()*0.0857773);
}

double NNfunction_sb_cLcR::synapse0x2496ae0() {
   return (neuron0x247e700()*-1.05401);
}

double NNfunction_sb_cLcR::synapse0x2496b20() {
   return (neuron0x247f0d0()*-0.182478);
}

double NNfunction_sb_cLcR::synapse0x2496b60() {
   return (neuron0x247faa0()*-0.0888619);
}

double NNfunction_sb_cLcR::synapse0x2496710() {
   return (neuron0x2475b30()*-0.540053);
}

double NNfunction_sb_cLcR::synapse0x2496750() {
   return (neuron0x2482680()*-0.13567);
}

double NNfunction_sb_cLcR::synapse0x2496790() {
   return (neuron0x2483050()*0.024132);
}

double NNfunction_sb_cLcR::synapse0x24967d0() {
   return (neuron0x2483a20()*0.00261506);
}

double NNfunction_sb_cLcR::synapse0x2496db0() {
   return (neuron0x24843f0()*-0.673954);
}

double NNfunction_sb_cLcR::synapse0x2496df0() {
   return (neuron0x2484dc0()*-0.072157);
}

double NNfunction_sb_cLcR::synapse0x2496e30() {
   return (neuron0x2485790()*-0.284006);
}

double NNfunction_sb_cLcR::synapse0x2496e70() {
   return (neuron0x2486160()*-0.0147851);
}

double NNfunction_sb_cLcR::synapse0x2496eb0() {
   return (neuron0x2486b30()*0.111308);
}

double NNfunction_sb_cLcR::synapse0x2496ef0() {
   return (neuron0x2487710()*-0.125728);
}

double NNfunction_sb_cLcR::synapse0x2496f30() {
   return (neuron0x24880e0()*1.17455);
}

double NNfunction_sb_cLcR::synapse0x2496f70() {
   return (neuron0x2478f60()*-0.0701861);
}

double NNfunction_sb_cLcR::synapse0x2496fb0() {
   return (neuron0x2479930()*0.258695);
}

double NNfunction_sb_cLcR::synapse0x2496ff0() {
   return (neuron0x247a300()*-0.141773);
}

double NNfunction_sb_cLcR::synapse0x2497030() {
   return (neuron0x248c940()*0.0780784);
}

double NNfunction_sb_cLcR::synapse0x2497070() {
   return (neuron0x248d1f0()*-1.18753);
}

double NNfunction_sb_cLcR::synapse0x24970b0() {
   return (neuron0x248dbc0()*0.0381168);
}

double NNfunction_sb_cLcR::synapse0x24970f0() {
   return (neuron0x248e590()*0.0730195);
}

double NNfunction_sb_cLcR::synapse0x2497470() {
   return (neuron0x246a510()*-2.04049);
}

double NNfunction_sb_cLcR::synapse0x24974b0() {
   return (neuron0x246ae20()*-6.36604);
}

double NNfunction_sb_cLcR::synapse0x24974f0() {
   return (neuron0x246b900()*-0.192217);
}

double NNfunction_sb_cLcR::synapse0x2497530() {
   return (neuron0x2225190()*1.47371);
}

double NNfunction_sb_cLcR::synapse0x2497570() {
   return (neuron0x246c720()*0.617254);
}

double NNfunction_sb_cLcR::synapse0x24975b0() {
   return (neuron0x246d0f0()*-1.97913);
}

double NNfunction_sb_cLcR::synapse0x24975f0() {
   return (neuron0x246dec0()*0.869408);
}

double NNfunction_sb_cLcR::synapse0x2497630() {
   return (neuron0x246e890()*-0.567563);
}

double NNfunction_sb_cLcR::synapse0x2497670() {
   return (neuron0x246f260()*0.487054);
}

double NNfunction_sb_cLcR::synapse0x24976b0() {
   return (neuron0x246fd40()*-0.476494);
}

double NNfunction_sb_cLcR::synapse0x24976f0() {
   return (neuron0x2470710()*-1.40816);
}

double NNfunction_sb_cLcR::synapse0x2497730() {
   return (neuron0x246d7f0()*0.151927);
}

double NNfunction_sb_cLcR::synapse0x2497770() {
   return (neuron0x24722c0()*3.0152);
}

double NNfunction_sb_cLcR::synapse0x24977b0() {
   return (neuron0x2472c90()*0.641046);
}

double NNfunction_sb_cLcR::synapse0x24977f0() {
   return (neuron0x2473660()*1.58765);
}

double NNfunction_sb_cLcR::synapse0x2497830() {
   return (neuron0x2474030()*-0.331211);
}

double NNfunction_sb_cLcR::synapse0x24972c0() {
   return (neuron0x2475e40()*1.36942);
}

double NNfunction_sb_cLcR::synapse0x2497300() {
   return (neuron0x2476120()*-2.28249);
}

double NNfunction_sb_cLcR::synapse0x2497980() {
   return (neuron0x2476af0()*-4.90937);
}

double NNfunction_sb_cLcR::synapse0x24979c0() {
   return (neuron0x24774c0()*-2.95817);
}

double NNfunction_sb_cLcR::synapse0x2497a00() {
   return (neuron0x2477e90()*1.90755);
}

double NNfunction_sb_cLcR::synapse0x2497a40() {
   return (neuron0x2478860()*0.830813);
}

double NNfunction_sb_cLcR::synapse0x2497a80() {
   return (neuron0x24713b0()*1.66839);
}

double NNfunction_sb_cLcR::synapse0x2497ac0() {
   return (neuron0x2471d80()*-1.66124);
}

double NNfunction_sb_cLcR::synapse0x2497b00() {
   return (neuron0x247b5f0()*0.32929);
}

double NNfunction_sb_cLcR::synapse0x2497b40() {
   return (neuron0x247bfc0()*0.00852662);
}

double NNfunction_sb_cLcR::synapse0x2497b80() {
   return (neuron0x247c990()*-4.53804);
}

double NNfunction_sb_cLcR::synapse0x2497bc0() {
   return (neuron0x247d360()*-0.483673);
}

double NNfunction_sb_cLcR::synapse0x2497c00() {
   return (neuron0x247dd30()*-1.11362);
}

double NNfunction_sb_cLcR::synapse0x2497c40() {
   return (neuron0x247e700()*-2.21699);
}

double NNfunction_sb_cLcR::synapse0x2497c80() {
   return (neuron0x247f0d0()*2.2756);
}

double NNfunction_sb_cLcR::synapse0x2497cc0() {
   return (neuron0x247faa0()*0.798601);
}

double NNfunction_sb_cLcR::synapse0x2497870() {
   return (neuron0x2475b30()*1.01672);
}

double NNfunction_sb_cLcR::synapse0x24978b0() {
   return (neuron0x2482680()*1.16357);
}

double NNfunction_sb_cLcR::synapse0x24978f0() {
   return (neuron0x2483050()*1.57093);
}

double NNfunction_sb_cLcR::synapse0x2497930() {
   return (neuron0x2483a20()*-0.474713);
}

double NNfunction_sb_cLcR::synapse0x2497f10() {
   return (neuron0x24843f0()*2.52626);
}

double NNfunction_sb_cLcR::synapse0x2497f50() {
   return (neuron0x2484dc0()*1.65526);
}

double NNfunction_sb_cLcR::synapse0x2497f90() {
   return (neuron0x2485790()*1.97998);
}

double NNfunction_sb_cLcR::synapse0x2497fd0() {
   return (neuron0x2486160()*0.906209);
}

double NNfunction_sb_cLcR::synapse0x2498010() {
   return (neuron0x2486b30()*-0.35002);
}

double NNfunction_sb_cLcR::synapse0x2498050() {
   return (neuron0x2487710()*-0.62334);
}

double NNfunction_sb_cLcR::synapse0x2498090() {
   return (neuron0x24880e0()*0.695728);
}

double NNfunction_sb_cLcR::synapse0x24980d0() {
   return (neuron0x2478f60()*2.31359);
}

double NNfunction_sb_cLcR::synapse0x2498110() {
   return (neuron0x2479930()*1.58103);
}

double NNfunction_sb_cLcR::synapse0x2498150() {
   return (neuron0x247a300()*1.84921);
}

double NNfunction_sb_cLcR::synapse0x2498190() {
   return (neuron0x248c940()*2.03219);
}

double NNfunction_sb_cLcR::synapse0x24981d0() {
   return (neuron0x248d1f0()*1.39642);
}

double NNfunction_sb_cLcR::synapse0x2498210() {
   return (neuron0x248dbc0()*0.967664);
}

double NNfunction_sb_cLcR::synapse0x2498250() {
   return (neuron0x248e590()*2.57599);
}

double NNfunction_sb_cLcR::synapse0x24985d0() {
   return (neuron0x246a510()*0.404651);
}

double NNfunction_sb_cLcR::synapse0x2498610() {
   return (neuron0x246ae20()*2.90828);
}

double NNfunction_sb_cLcR::synapse0x2498650() {
   return (neuron0x246b900()*0.280814);
}

double NNfunction_sb_cLcR::synapse0x2498690() {
   return (neuron0x2225190()*0.838728);
}

double NNfunction_sb_cLcR::synapse0x24986d0() {
   return (neuron0x246c720()*-0.453307);
}

double NNfunction_sb_cLcR::synapse0x2498710() {
   return (neuron0x246d0f0()*-1.05872);
}

double NNfunction_sb_cLcR::synapse0x2498750() {
   return (neuron0x246dec0()*-1.18867);
}

double NNfunction_sb_cLcR::synapse0x2498790() {
   return (neuron0x246e890()*1.26392);
}

double NNfunction_sb_cLcR::synapse0x24987d0() {
   return (neuron0x246f260()*-0.428065);
}

double NNfunction_sb_cLcR::synapse0x2498810() {
   return (neuron0x246fd40()*-0.512058);
}

double NNfunction_sb_cLcR::synapse0x2498850() {
   return (neuron0x2470710()*-0.520577);
}

double NNfunction_sb_cLcR::synapse0x2498890() {
   return (neuron0x246d7f0()*0.659616);
}

double NNfunction_sb_cLcR::synapse0x24988d0() {
   return (neuron0x24722c0()*1.31938);
}

double NNfunction_sb_cLcR::synapse0x2498910() {
   return (neuron0x2472c90()*-0.349932);
}

double NNfunction_sb_cLcR::synapse0x2498950() {
   return (neuron0x2473660()*-0.00709239);
}

double NNfunction_sb_cLcR::synapse0x2498990() {
   return (neuron0x2474030()*-0.621635);
}

double NNfunction_sb_cLcR::synapse0x2498420() {
   return (neuron0x2475e40()*-2.14524);
}

double NNfunction_sb_cLcR::synapse0x2498460() {
   return (neuron0x2476120()*-0.198473);
}

double NNfunction_sb_cLcR::synapse0x2498ae0() {
   return (neuron0x2476af0()*-2.43598);
}

double NNfunction_sb_cLcR::synapse0x2498b20() {
   return (neuron0x24774c0()*1.57159);
}

double NNfunction_sb_cLcR::synapse0x2498b60() {
   return (neuron0x2477e90()*0.679534);
}

double NNfunction_sb_cLcR::synapse0x2498ba0() {
   return (neuron0x2478860()*0.912926);
}

double NNfunction_sb_cLcR::synapse0x2498be0() {
   return (neuron0x24713b0()*0.104799);
}

double NNfunction_sb_cLcR::synapse0x2498c20() {
   return (neuron0x2471d80()*-0.696982);
}

double NNfunction_sb_cLcR::synapse0x2498c60() {
   return (neuron0x247b5f0()*-1.29019);
}

double NNfunction_sb_cLcR::synapse0x2498ca0() {
   return (neuron0x247bfc0()*0.997245);
}

double NNfunction_sb_cLcR::synapse0x2498ce0() {
   return (neuron0x247c990()*0.220687);
}

double NNfunction_sb_cLcR::synapse0x2498d20() {
   return (neuron0x247d360()*0.379553);
}

double NNfunction_sb_cLcR::synapse0x2498d60() {
   return (neuron0x247dd30()*0.235148);
}

double NNfunction_sb_cLcR::synapse0x2498da0() {
   return (neuron0x247e700()*-0.419632);
}

double NNfunction_sb_cLcR::synapse0x2498de0() {
   return (neuron0x247f0d0()*1.05246);
}

double NNfunction_sb_cLcR::synapse0x2498e20() {
   return (neuron0x247faa0()*-0.552201);
}

double NNfunction_sb_cLcR::synapse0x24989d0() {
   return (neuron0x2475b30()*0.537002);
}

double NNfunction_sb_cLcR::synapse0x2498a10() {
   return (neuron0x2482680()*0.689659);
}

double NNfunction_sb_cLcR::synapse0x2498a50() {
   return (neuron0x2483050()*0.548184);
}

double NNfunction_sb_cLcR::synapse0x2498a90() {
   return (neuron0x2483a20()*2.00528);
}

double NNfunction_sb_cLcR::synapse0x2499070() {
   return (neuron0x24843f0()*-1.89837);
}

double NNfunction_sb_cLcR::synapse0x24990b0() {
   return (neuron0x2484dc0()*0.242016);
}

double NNfunction_sb_cLcR::synapse0x24990f0() {
   return (neuron0x2485790()*0.0569845);
}

double NNfunction_sb_cLcR::synapse0x2499130() {
   return (neuron0x2486160()*0.378735);
}

double NNfunction_sb_cLcR::synapse0x2499170() {
   return (neuron0x2486b30()*0.790332);
}

double NNfunction_sb_cLcR::synapse0x24991b0() {
   return (neuron0x2487710()*-0.641045);
}

double NNfunction_sb_cLcR::synapse0x24991f0() {
   return (neuron0x24880e0()*1.25469);
}

double NNfunction_sb_cLcR::synapse0x2499230() {
   return (neuron0x2478f60()*-0.00133032);
}

double NNfunction_sb_cLcR::synapse0x2499270() {
   return (neuron0x2479930()*-0.481126);
}

double NNfunction_sb_cLcR::synapse0x24992b0() {
   return (neuron0x247a300()*-0.404174);
}

double NNfunction_sb_cLcR::synapse0x24992f0() {
   return (neuron0x248c940()*0.146403);
}

double NNfunction_sb_cLcR::synapse0x2499330() {
   return (neuron0x248d1f0()*0.0252687);
}

double NNfunction_sb_cLcR::synapse0x2499370() {
   return (neuron0x248dbc0()*0.825128);
}

double NNfunction_sb_cLcR::synapse0x24993b0() {
   return (neuron0x248e590()*-0.412108);
}

double NNfunction_sb_cLcR::synapse0x246a4d0() {
   return (neuron0x2495790()*-7.57777);
}

double NNfunction_sb_cLcR::synapse0x2499610() {
   return (neuron0x2495b30()*-4.83853);
}

double NNfunction_sb_cLcR::synapse0x2499650() {
   return (neuron0x2495fd0()*-4.54946);
}

double NNfunction_sb_cLcR::synapse0x2499690() {
   return (neuron0x2497130()*-6.11821);
}

double NNfunction_sb_cLcR::synapse0x24996d0() {
   return (neuron0x2498290()*8.17318);
}

