#include "NNfunction_nn_charge2p_charge2m.h"
#include <cmath>

double NNfunction_nn_charge2p_charge2m::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.221)/14.9416;
   input1 = (in1 - 68.3592)/823.5;
   input2 = (in2 - 271.348)/203.199;
   input3 = (in3 - 374.001)/749.831;
   input4 = (in4 - 1099.75)/875.192;
   input5 = (in5 - 1103.28)/987.953;
   input6 = (in6 - 1106.73)/986.411;
   input7 = (in7 - 1083.8)/949.186;
   input8 = (in8 - 1102.82)/1002.27;
   input9 = (in9 - 1095.92)/997.683;
   input10 = (in10 - 1053.48)/938.327;
   input11 = (in11 - 1106.84)/985.644;
   input12 = (in12 - 1116.36)/980.527;
   input13 = (in13 - 854.787)/722.23;
   input14 = (in14 - 1099.99)/957.288;
   input15 = (in15 - 1101.15)/957.633;
   input16 = (in16 - 734.317)/599.103;
   input17 = (in17 - 1124.19)/988.4;
   input18 = (in18 - 1123.59)/988.952;
   input19 = (in19 - 1074.92)/912.34;
   input20 = (in20 - -268.37)/499.26;
   input21 = (in21 - -342.126)/982.003;
   input22 = (in22 - 9.69374)/965.098;
   input23 = (in23 - 63.8062)/372.08;
   switch(index) {
     case 0:
         return neuron0x23887a0();
     default:
         return 0.;
   }
}

double NNfunction_nn_charge2p_charge2m::Value(int index, double* input) {
   input0 = (input[0] - 24.221)/14.9416;
   input1 = (input[1] - 68.3592)/823.5;
   input2 = (input[2] - 271.348)/203.199;
   input3 = (input[3] - 374.001)/749.831;
   input4 = (input[4] - 1099.75)/875.192;
   input5 = (input[5] - 1103.28)/987.953;
   input6 = (input[6] - 1106.73)/986.411;
   input7 = (input[7] - 1083.8)/949.186;
   input8 = (input[8] - 1102.82)/1002.27;
   input9 = (input[9] - 1095.92)/997.683;
   input10 = (input[10] - 1053.48)/938.327;
   input11 = (input[11] - 1106.84)/985.644;
   input12 = (input[12] - 1116.36)/980.527;
   input13 = (input[13] - 854.787)/722.23;
   input14 = (input[14] - 1099.99)/957.288;
   input15 = (input[15] - 1101.15)/957.633;
   input16 = (input[16] - 734.317)/599.103;
   input17 = (input[17] - 1124.19)/988.4;
   input18 = (input[18] - 1123.59)/988.952;
   input19 = (input[19] - 1074.92)/912.34;
   input20 = (input[20] - -268.37)/499.26;
   input21 = (input[21] - -342.126)/982.003;
   input22 = (input[22] - 9.69374)/965.098;
   input23 = (input[23] - 63.8062)/372.08;
   switch(index) {
     case 0:
         return neuron0x23887a0();
     default:
         return 0.;
   }
}

double NNfunction_nn_charge2p_charge2m::neuron0x2354890() {
   return input0;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2354bd0() {
   return input1;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2354f10() {
   return input2;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2355250() {
   return input3;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2355590() {
   return input4;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23558d0() {
   return input5;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2355c10() {
   return input6;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2355f50() {
   return input7;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2356290() {
   return input8;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23565d0() {
   return input9;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2356910() {
   return input10;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2356c50() {
   return input11;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2356f90() {
   return input12;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23572d0() {
   return input13;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2357610() {
   return input14;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2357950() {
   return input15;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2357c90() {
   return input16;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23581f0() {
   return input17;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2358410() {
   return input18;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2358750() {
   return input19;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2358a90() {
   return input20;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2358dd0() {
   return input21;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2359110() {
   return input22;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2359450() {
   return input23;
}

double NNfunction_nn_charge2p_charge2m::input0x23598c0() {
   double input = -2.15862;
   input += synapse0x2354750();
   input += synapse0x2354790();
   input += synapse0x2359b70();
   input += synapse0x2359bb0();
   input += synapse0x2359bf0();
   input += synapse0x2359c30();
   input += synapse0x2359c70();
   input += synapse0x2359cb0();
   input += synapse0x2359cf0();
   input += synapse0x2359d30();
   input += synapse0x2359d70();
   input += synapse0x2359db0();
   input += synapse0x2359df0();
   input += synapse0x2359e30();
   input += synapse0x2359e70();
   input += synapse0x2359eb0();
   input += synapse0x23546c0();
   input += synapse0x2354700();
   input += synapse0x1295020();
   input += synapse0x1295060();
   input += synapse0x235a110();
   input += synapse0x235a150();
   input += synapse0x235a190();
   input += synapse0x235a1d0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23598c0() {
   double input = input0x23598c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235a210() {
   double input = 1.08284;
   input += synapse0x235a550();
   input += synapse0x235a590();
   input += synapse0x235a5d0();
   input += synapse0x235a610();
   input += synapse0x235a650();
   input += synapse0x235a690();
   input += synapse0x235a6d0();
   input += synapse0x235a710();
   input += synapse0x235a750();
   input += synapse0x235a000();
   input += synapse0x235a040();
   input += synapse0x235a080();
   input += synapse0x235a0c0();
   input += synapse0x235a9a0();
   input += synapse0x235a9e0();
   input += synapse0x235aa20();
   input += synapse0x235a3a0();
   input += synapse0x235a3e0();
   input += synapse0x235ab70();
   input += synapse0x235abb0();
   input += synapse0x235abf0();
   input += synapse0x235ac30();
   input += synapse0x235ac70();
   input += synapse0x235acb0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235a210() {
   double input = input0x235a210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235acf0() {
   double input = -2.09747;
   input += synapse0x235b030();
   input += synapse0x235b070();
   input += synapse0x235b0b0();
   input += synapse0x235b0f0();
   input += synapse0x235b130();
   input += synapse0x235b170();
   input += synapse0x235b1b0();
   input += synapse0x235b1f0();
   input += synapse0x235b230();
   input += synapse0x235b270();
   input += synapse0x235b2b0();
   input += synapse0x235b2f0();
   input += synapse0x235b330();
   input += synapse0x235b370();
   input += synapse0x235b3b0();
   input += synapse0x235b3f0();
   input += synapse0x235ae80();
   input += synapse0x235aec0();
   input += synapse0x1299b40();
   input += synapse0x211d9b0();
   input += synapse0x211d9f0();
   input += synapse0x2343920();
   input += synapse0x2343960();
   input += synapse0x23439a0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235acf0() {
   double input = input0x235acf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235a790() {
   double input = 1.2362;
   input += synapse0x211e230();
   input += synapse0x235a920();
   input += synapse0x235a960();
   input += synapse0x235b540();
   input += synapse0x235b580();
   input += synapse0x235b5c0();
   input += synapse0x235b600();
   input += synapse0x235b640();
   input += synapse0x235b680();
   input += synapse0x235b6c0();
   input += synapse0x235b700();
   input += synapse0x235b740();
   input += synapse0x235b780();
   input += synapse0x235b7c0();
   input += synapse0x235b800();
   input += synapse0x235b840();
   input += synapse0x23547d0();
   input += synapse0x2354810();
   input += synapse0x2354850();
   input += synapse0x235b990();
   input += synapse0x235b9d0();
   input += synapse0x235ba10();
   input += synapse0x235ba50();
   input += synapse0x235ba90();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235a790() {
   double input = input0x235a790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235bad0() {
   double input = 4.91752;
   input += synapse0x235be10();
   input += synapse0x235be50();
   input += synapse0x235be90();
   input += synapse0x235bed0();
   input += synapse0x235bf10();
   input += synapse0x235bf50();
   input += synapse0x235bf90();
   input += synapse0x235bfd0();
   input += synapse0x235c010();
   input += synapse0x235c050();
   input += synapse0x235c090();
   input += synapse0x235c0d0();
   input += synapse0x235c110();
   input += synapse0x235c150();
   input += synapse0x235c190();
   input += synapse0x235c1d0();
   input += synapse0x235bc60();
   input += synapse0x235bca0();
   input += synapse0x235c320();
   input += synapse0x235c360();
   input += synapse0x235c3a0();
   input += synapse0x235c3e0();
   input += synapse0x235c420();
   input += synapse0x235c460();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235bad0() {
   double input = input0x235bad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235c4a0() {
   double input = 1.13503;
   input += synapse0x235c7e0();
   input += synapse0x235c820();
   input += synapse0x235c860();
   input += synapse0x235c8a0();
   input += synapse0x235c8e0();
   input += synapse0x235c920();
   input += synapse0x235c960();
   input += synapse0x235c9a0();
   input += synapse0x235c9e0();
   input += synapse0x211dd00();
   input += synapse0x211dd40();
   input += synapse0x211dd80();
   input += synapse0x211ddc0();
   input += synapse0x211de00();
   input += synapse0x211de40();
   input += synapse0x211de80();
   input += synapse0x235c630();
   input += synapse0x235c670();
   input += synapse0x211dfd0();
   input += synapse0x211e010();
   input += synapse0x211e050();
   input += synapse0x211e090();
   input += synapse0x211e0d0();
   input += synapse0x235d230();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235c4a0() {
   double input = input0x235c4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235d270() {
   double input = 1.81824;
   input += synapse0x235d5b0();
   input += synapse0x235d5f0();
   input += synapse0x235d630();
   input += synapse0x235d670();
   input += synapse0x235d6b0();
   input += synapse0x235d6f0();
   input += synapse0x235d730();
   input += synapse0x235d770();
   input += synapse0x235d7b0();
   input += synapse0x235d7f0();
   input += synapse0x235d830();
   input += synapse0x235d870();
   input += synapse0x235d8b0();
   input += synapse0x235d8f0();
   input += synapse0x235d930();
   input += synapse0x235d970();
   input += synapse0x235d400();
   input += synapse0x235d440();
   input += synapse0x235dac0();
   input += synapse0x235db00();
   input += synapse0x235db40();
   input += synapse0x235db80();
   input += synapse0x235dbc0();
   input += synapse0x235dc00();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235d270() {
   double input = input0x235d270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235dc40() {
   double input = -0.75839;
   input += synapse0x235df80();
   input += synapse0x235dfc0();
   input += synapse0x235e000();
   input += synapse0x235e040();
   input += synapse0x235e080();
   input += synapse0x235e0c0();
   input += synapse0x235e100();
   input += synapse0x235e140();
   input += synapse0x235e180();
   input += synapse0x235e1c0();
   input += synapse0x235e200();
   input += synapse0x235e240();
   input += synapse0x235e280();
   input += synapse0x235e2c0();
   input += synapse0x235e300();
   input += synapse0x235e340();
   input += synapse0x235ddd0();
   input += synapse0x235de10();
   input += synapse0x235e490();
   input += synapse0x235e4d0();
   input += synapse0x235e510();
   input += synapse0x235e550();
   input += synapse0x235e590();
   input += synapse0x235e5d0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235dc40() {
   double input = input0x235dc40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235e610() {
   double input = -1.67161;
   input += synapse0x23580e0();
   input += synapse0x2358120();
   input += synapse0x2358160();
   input += synapse0x23581a0();
   input += synapse0x235eb60();
   input += synapse0x235eba0();
   input += synapse0x235ebe0();
   input += synapse0x235ec20();
   input += synapse0x235ec60();
   input += synapse0x235eca0();
   input += synapse0x235ece0();
   input += synapse0x235ed20();
   input += synapse0x235ed60();
   input += synapse0x235eda0();
   input += synapse0x235ede0();
   input += synapse0x235ee20();
   input += synapse0x235e7a0();
   input += synapse0x235e7e0();
   input += synapse0x235ef70();
   input += synapse0x235efb0();
   input += synapse0x235eff0();
   input += synapse0x235f030();
   input += synapse0x235f070();
   input += synapse0x235f0b0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235e610() {
   double input = input0x235e610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235f0f0() {
   double input = -3.20815;
   input += synapse0x235f430();
   input += synapse0x235f470();
   input += synapse0x235f4b0();
   input += synapse0x235f4f0();
   input += synapse0x235f530();
   input += synapse0x235f570();
   input += synapse0x235f5b0();
   input += synapse0x235f5f0();
   input += synapse0x235f630();
   input += synapse0x235f670();
   input += synapse0x235f6b0();
   input += synapse0x235f6f0();
   input += synapse0x235f730();
   input += synapse0x235f770();
   input += synapse0x235f7b0();
   input += synapse0x235f7f0();
   input += synapse0x235f280();
   input += synapse0x235f2c0();
   input += synapse0x235f940();
   input += synapse0x235f980();
   input += synapse0x235f9c0();
   input += synapse0x235fa00();
   input += synapse0x235fa40();
   input += synapse0x235fa80();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235f0f0() {
   double input = input0x235f0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235fac0() {
   double input = -0.0533297;
   input += synapse0x235fe00();
   input += synapse0x235fe40();
   input += synapse0x235fe80();
   input += synapse0x235fec0();
   input += synapse0x235ff00();
   input += synapse0x235ff40();
   input += synapse0x235ff80();
   input += synapse0x235ffc0();
   input += synapse0x2360000();
   input += synapse0x2360040();
   input += synapse0x2360080();
   input += synapse0x23600c0();
   input += synapse0x2360100();
   input += synapse0x2360140();
   input += synapse0x2360180();
   input += synapse0x23601c0();
   input += synapse0x235fc50();
   input += synapse0x235fc90();
   input += synapse0x235ca20();
   input += synapse0x235ca60();
   input += synapse0x235caa0();
   input += synapse0x235cae0();
   input += synapse0x235cb20();
   input += synapse0x235cb60();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235fac0() {
   double input = input0x235fac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x235cba0() {
   double input = 0.878206;
   input += synapse0x235cee0();
   input += synapse0x235cf20();
   input += synapse0x235cf60();
   input += synapse0x235cfa0();
   input += synapse0x235cfe0();
   input += synapse0x235d020();
   input += synapse0x235d060();
   input += synapse0x235d0a0();
   input += synapse0x235d0e0();
   input += synapse0x235d120();
   input += synapse0x235d160();
   input += synapse0x235d1a0();
   input += synapse0x235d1e0();
   input += synapse0x2361320();
   input += synapse0x2361360();
   input += synapse0x23613a0();
   input += synapse0x235cd30();
   input += synapse0x235cd70();
   input += synapse0x23614f0();
   input += synapse0x2361530();
   input += synapse0x2361570();
   input += synapse0x23615b0();
   input += synapse0x23615f0();
   input += synapse0x2361630();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x235cba0() {
   double input = input0x235cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2361670() {
   double input = -0.446954;
   input += synapse0x23619b0();
   input += synapse0x23619f0();
   input += synapse0x2361a30();
   input += synapse0x2361a70();
   input += synapse0x2361ab0();
   input += synapse0x2361af0();
   input += synapse0x2361b30();
   input += synapse0x2361b70();
   input += synapse0x2361bb0();
   input += synapse0x2361bf0();
   input += synapse0x2361c30();
   input += synapse0x2361c70();
   input += synapse0x2361cb0();
   input += synapse0x2361cf0();
   input += synapse0x2361d30();
   input += synapse0x2361d70();
   input += synapse0x2361800();
   input += synapse0x2361840();
   input += synapse0x2361ec0();
   input += synapse0x2361f00();
   input += synapse0x2361f40();
   input += synapse0x2361f80();
   input += synapse0x2361fc0();
   input += synapse0x2362000();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2361670() {
   double input = input0x2361670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2362040() {
   double input = 2.41099;
   input += synapse0x2362380();
   input += synapse0x23623c0();
   input += synapse0x2362400();
   input += synapse0x2362440();
   input += synapse0x2362480();
   input += synapse0x23624c0();
   input += synapse0x2362500();
   input += synapse0x2362540();
   input += synapse0x2362580();
   input += synapse0x23625c0();
   input += synapse0x2362600();
   input += synapse0x2362640();
   input += synapse0x2362680();
   input += synapse0x23626c0();
   input += synapse0x2362700();
   input += synapse0x2362740();
   input += synapse0x23621d0();
   input += synapse0x2362210();
   input += synapse0x2362890();
   input += synapse0x23628d0();
   input += synapse0x2362910();
   input += synapse0x2362950();
   input += synapse0x2362990();
   input += synapse0x23629d0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2362040() {
   double input = input0x2362040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2362a10() {
   double input = 2.47815;
   input += synapse0x2362d50();
   input += synapse0x2362d90();
   input += synapse0x2362dd0();
   input += synapse0x2362e10();
   input += synapse0x2362e50();
   input += synapse0x2362e90();
   input += synapse0x2362ed0();
   input += synapse0x2362f10();
   input += synapse0x2362f50();
   input += synapse0x2362f90();
   input += synapse0x2362fd0();
   input += synapse0x2363010();
   input += synapse0x2363050();
   input += synapse0x2363090();
   input += synapse0x23630d0();
   input += synapse0x2363110();
   input += synapse0x2362ba0();
   input += synapse0x2362be0();
   input += synapse0x2363260();
   input += synapse0x23632a0();
   input += synapse0x23632e0();
   input += synapse0x2363320();
   input += synapse0x2363360();
   input += synapse0x23633a0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2362a10() {
   double input = input0x2362a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x23633e0() {
   double input = 2.07575;
   input += synapse0x2363720();
   input += synapse0x2354ab0();
   input += synapse0x2354af0();
   input += synapse0x2354df0();
   input += synapse0x2354e30();
   input += synapse0x2355130();
   input += synapse0x2355170();
   input += synapse0x2355470();
   input += synapse0x23554b0();
   input += synapse0x23557b0();
   input += synapse0x23557f0();
   input += synapse0x2355af0();
   input += synapse0x2355b30();
   input += synapse0x2355e30();
   input += synapse0x2355e70();
   input += synapse0x2356170();
   input += synapse0x23561b0();
   input += synapse0x23564b0();
   input += synapse0x23564f0();
   input += synapse0x23567f0();
   input += synapse0x2356830();
   input += synapse0x2356b30();
   input += synapse0x2356b70();
   input += synapse0x2356e70();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23633e0() {
   double input = input0x23633e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x23651f0() {
   double input = -0.101898;
   input += synapse0x2356eb0();
   input += synapse0x2357b70();
   input += synapse0x2357bb0();
   input += synapse0x2363570();
   input += synapse0x23635b0();
   input += synapse0x2357eb0();
   input += synapse0x2357ef0();
   input += synapse0x1297ad0();
   input += synapse0x1297b10();
   input += synapse0x2358630();
   input += synapse0x2358670();
   input += synapse0x2358970();
   input += synapse0x23589b0();
   input += synapse0x2358cb0();
   input += synapse0x2358cf0();
   input += synapse0x2358ff0();
   input += synapse0x2359030();
   input += synapse0x2359330();
   input += synapse0x2359370();
   input += synapse0x2359670();
   input += synapse0x23596b0();
   input += synapse0x23571b0();
   input += synapse0x23571f0();
   input += synapse0x2365490();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23651f0() {
   double input = input0x23651f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x23654d0() {
   double input = -0.366203;
   input += synapse0x2365810();
   input += synapse0x2365850();
   input += synapse0x2365890();
   input += synapse0x23658d0();
   input += synapse0x2365910();
   input += synapse0x2365950();
   input += synapse0x2365990();
   input += synapse0x23659d0();
   input += synapse0x2365a10();
   input += synapse0x2365a50();
   input += synapse0x2365a90();
   input += synapse0x2365ad0();
   input += synapse0x2365b10();
   input += synapse0x2365b50();
   input += synapse0x2365b90();
   input += synapse0x2365bd0();
   input += synapse0x2365660();
   input += synapse0x23656a0();
   input += synapse0x2365d20();
   input += synapse0x2365d60();
   input += synapse0x2365da0();
   input += synapse0x2365de0();
   input += synapse0x2365e20();
   input += synapse0x2365e60();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23654d0() {
   double input = input0x23654d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2365ea0() {
   double input = -1.36241;
   input += synapse0x23661e0();
   input += synapse0x2366220();
   input += synapse0x2366260();
   input += synapse0x23662a0();
   input += synapse0x23662e0();
   input += synapse0x2366320();
   input += synapse0x2366360();
   input += synapse0x23663a0();
   input += synapse0x23663e0();
   input += synapse0x2366420();
   input += synapse0x2366460();
   input += synapse0x23664a0();
   input += synapse0x23664e0();
   input += synapse0x2366520();
   input += synapse0x2366560();
   input += synapse0x23665a0();
   input += synapse0x2366030();
   input += synapse0x2366070();
   input += synapse0x23666f0();
   input += synapse0x2366730();
   input += synapse0x2366770();
   input += synapse0x23667b0();
   input += synapse0x23667f0();
   input += synapse0x2366830();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2365ea0() {
   double input = input0x2365ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2366870() {
   double input = -0.283315;
   input += synapse0x2366bb0();
   input += synapse0x2366bf0();
   input += synapse0x2366c30();
   input += synapse0x2366c70();
   input += synapse0x2366cb0();
   input += synapse0x2366cf0();
   input += synapse0x2366d30();
   input += synapse0x2366d70();
   input += synapse0x2366db0();
   input += synapse0x2366df0();
   input += synapse0x2366e30();
   input += synapse0x2366e70();
   input += synapse0x2366eb0();
   input += synapse0x2366ef0();
   input += synapse0x2366f30();
   input += synapse0x2366f70();
   input += synapse0x2366a00();
   input += synapse0x2366a40();
   input += synapse0x23670c0();
   input += synapse0x2367100();
   input += synapse0x2367140();
   input += synapse0x2367180();
   input += synapse0x23671c0();
   input += synapse0x2367200();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2366870() {
   double input = input0x2366870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2367240() {
   double input = -0.253512;
   input += synapse0x2367580();
   input += synapse0x23675c0();
   input += synapse0x2367600();
   input += synapse0x2367640();
   input += synapse0x2367680();
   input += synapse0x23676c0();
   input += synapse0x2367700();
   input += synapse0x2367740();
   input += synapse0x2367780();
   input += synapse0x23677c0();
   input += synapse0x2367800();
   input += synapse0x2367840();
   input += synapse0x2367880();
   input += synapse0x23678c0();
   input += synapse0x2367900();
   input += synapse0x2367940();
   input += synapse0x23673d0();
   input += synapse0x2367410();
   input += synapse0x2367a90();
   input += synapse0x2367ad0();
   input += synapse0x2367b10();
   input += synapse0x2367b50();
   input += synapse0x2367b90();
   input += synapse0x2367bd0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2367240() {
   double input = input0x2367240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2367c10() {
   double input = -3.74766;
   input += synapse0x2367f50();
   input += synapse0x2367f90();
   input += synapse0x2367fd0();
   input += synapse0x2368010();
   input += synapse0x2368050();
   input += synapse0x2368090();
   input += synapse0x23680d0();
   input += synapse0x2368110();
   input += synapse0x2368150();
   input += synapse0x2360310();
   input += synapse0x2360350();
   input += synapse0x2360390();
   input += synapse0x23603d0();
   input += synapse0x2360410();
   input += synapse0x2360450();
   input += synapse0x2360490();
   input += synapse0x2367da0();
   input += synapse0x2367de0();
   input += synapse0x23605e0();
   input += synapse0x2360620();
   input += synapse0x2360660();
   input += synapse0x23606a0();
   input += synapse0x23606e0();
   input += synapse0x2360720();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2367c10() {
   double input = input0x2367c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2360760() {
   double input = -2.0228;
   input += synapse0x2360aa0();
   input += synapse0x2360ae0();
   input += synapse0x2360b20();
   input += synapse0x2360b60();
   input += synapse0x2360ba0();
   input += synapse0x2360be0();
   input += synapse0x2360c20();
   input += synapse0x2360c60();
   input += synapse0x2360ca0();
   input += synapse0x2360ce0();
   input += synapse0x2360d20();
   input += synapse0x2360d60();
   input += synapse0x2360da0();
   input += synapse0x2360de0();
   input += synapse0x2360e20();
   input += synapse0x2360e60();
   input += synapse0x23608f0();
   input += synapse0x2360930();
   input += synapse0x2360fb0();
   input += synapse0x2360ff0();
   input += synapse0x2361030();
   input += synapse0x2361070();
   input += synapse0x23610b0();
   input += synapse0x23610f0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2360760() {
   double input = input0x2360760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2361130() {
   double input = -0.05219;
   input += synapse0x23612c0();
   input += synapse0x236a350();
   input += synapse0x236a390();
   input += synapse0x236a3d0();
   input += synapse0x236a410();
   input += synapse0x236a450();
   input += synapse0x236a490();
   input += synapse0x236a4d0();
   input += synapse0x236a510();
   input += synapse0x236a550();
   input += synapse0x236a590();
   input += synapse0x236a5d0();
   input += synapse0x236a610();
   input += synapse0x236a650();
   input += synapse0x236a690();
   input += synapse0x236a6d0();
   input += synapse0x236a1a0();
   input += synapse0x236a1e0();
   input += synapse0x236a820();
   input += synapse0x236a860();
   input += synapse0x236a8a0();
   input += synapse0x236a8e0();
   input += synapse0x236a920();
   input += synapse0x236a960();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2361130() {
   double input = input0x2361130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x236a9a0() {
   double input = -0.302417;
   input += synapse0x236ace0();
   input += synapse0x236ad20();
   input += synapse0x236ad60();
   input += synapse0x236ada0();
   input += synapse0x236ade0();
   input += synapse0x236ae20();
   input += synapse0x236ae60();
   input += synapse0x236aea0();
   input += synapse0x236aee0();
   input += synapse0x236af20();
   input += synapse0x236af60();
   input += synapse0x236afa0();
   input += synapse0x236afe0();
   input += synapse0x236b020();
   input += synapse0x236b060();
   input += synapse0x236b0a0();
   input += synapse0x236ab30();
   input += synapse0x236ab70();
   input += synapse0x236b1f0();
   input += synapse0x236b230();
   input += synapse0x236b270();
   input += synapse0x236b2b0();
   input += synapse0x236b2f0();
   input += synapse0x236b330();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x236a9a0() {
   double input = input0x236a9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x236b370() {
   double input = -1.92379;
   input += synapse0x236b6b0();
   input += synapse0x236b6f0();
   input += synapse0x236b730();
   input += synapse0x236b770();
   input += synapse0x236b7b0();
   input += synapse0x236b7f0();
   input += synapse0x236b830();
   input += synapse0x236b870();
   input += synapse0x236b8b0();
   input += synapse0x236b8f0();
   input += synapse0x236b930();
   input += synapse0x236b970();
   input += synapse0x236b9b0();
   input += synapse0x236b9f0();
   input += synapse0x236ba30();
   input += synapse0x236ba70();
   input += synapse0x236b500();
   input += synapse0x236b540();
   input += synapse0x236bbc0();
   input += synapse0x236bc00();
   input += synapse0x236bc40();
   input += synapse0x236bc80();
   input += synapse0x236bcc0();
   input += synapse0x236bd00();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x236b370() {
   double input = input0x236b370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x236bd40() {
   double input = 0.252215;
   input += synapse0x236c080();
   input += synapse0x236c0c0();
   input += synapse0x236c100();
   input += synapse0x236c140();
   input += synapse0x236c180();
   input += synapse0x236c1c0();
   input += synapse0x236c200();
   input += synapse0x236c240();
   input += synapse0x236c280();
   input += synapse0x236c2c0();
   input += synapse0x236c300();
   input += synapse0x236c340();
   input += synapse0x236c380();
   input += synapse0x236c3c0();
   input += synapse0x236c400();
   input += synapse0x236c440();
   input += synapse0x236bed0();
   input += synapse0x236bf10();
   input += synapse0x236c590();
   input += synapse0x236c5d0();
   input += synapse0x236c610();
   input += synapse0x236c650();
   input += synapse0x236c690();
   input += synapse0x236c6d0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x236bd40() {
   double input = input0x236bd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x236c710() {
   double input = -0.5986;
   input += synapse0x236ca50();
   input += synapse0x236ca90();
   input += synapse0x236cad0();
   input += synapse0x236cb10();
   input += synapse0x236cb50();
   input += synapse0x236cb90();
   input += synapse0x236cbd0();
   input += synapse0x236cc10();
   input += synapse0x236cc50();
   input += synapse0x236cc90();
   input += synapse0x236ccd0();
   input += synapse0x236cd10();
   input += synapse0x236cd50();
   input += synapse0x236cd90();
   input += synapse0x236cdd0();
   input += synapse0x236ce10();
   input += synapse0x236c8a0();
   input += synapse0x236c8e0();
   input += synapse0x236cf60();
   input += synapse0x236cfa0();
   input += synapse0x236cfe0();
   input += synapse0x236d020();
   input += synapse0x236d060();
   input += synapse0x236d0a0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x236c710() {
   double input = input0x236c710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x236d0e0() {
   double input = 0.0103793;
   input += synapse0x236d420();
   input += synapse0x236d460();
   input += synapse0x236d4a0();
   input += synapse0x236d4e0();
   input += synapse0x236d520();
   input += synapse0x236d560();
   input += synapse0x236d5a0();
   input += synapse0x236d5e0();
   input += synapse0x236d620();
   input += synapse0x236d660();
   input += synapse0x236d6a0();
   input += synapse0x236d6e0();
   input += synapse0x236d720();
   input += synapse0x236d760();
   input += synapse0x236d7a0();
   input += synapse0x236d7e0();
   input += synapse0x236d270();
   input += synapse0x236d2b0();
   input += synapse0x236d930();
   input += synapse0x236d970();
   input += synapse0x236d9b0();
   input += synapse0x236d9f0();
   input += synapse0x236da30();
   input += synapse0x236da70();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x236d0e0() {
   double input = input0x236d0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x236dab0() {
   double input = 7.0191;
   input += synapse0x236ddf0();
   input += synapse0x236de30();
   input += synapse0x236de70();
   input += synapse0x236deb0();
   input += synapse0x236def0();
   input += synapse0x236df30();
   input += synapse0x236df70();
   input += synapse0x236dfb0();
   input += synapse0x236dff0();
   input += synapse0x236e030();
   input += synapse0x236e070();
   input += synapse0x236e0b0();
   input += synapse0x236e0f0();
   input += synapse0x236e130();
   input += synapse0x236e170();
   input += synapse0x236e1b0();
   input += synapse0x236dc40();
   input += synapse0x236dc80();
   input += synapse0x236e300();
   input += synapse0x236e340();
   input += synapse0x236e380();
   input += synapse0x236e3c0();
   input += synapse0x236e400();
   input += synapse0x236e440();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x236dab0() {
   double input = input0x236dab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x236e480() {
   double input = -3.34537;
   input += synapse0x236e7c0();
   input += synapse0x236e800();
   input += synapse0x236e840();
   input += synapse0x236e880();
   input += synapse0x236e8c0();
   input += synapse0x236e900();
   input += synapse0x236e940();
   input += synapse0x236e980();
   input += synapse0x236e9c0();
   input += synapse0x236ea00();
   input += synapse0x236ea40();
   input += synapse0x236ea80();
   input += synapse0x236eac0();
   input += synapse0x236eb00();
   input += synapse0x236eb40();
   input += synapse0x236eb80();
   input += synapse0x236e610();
   input += synapse0x236e650();
   input += synapse0x236ecd0();
   input += synapse0x236ed10();
   input += synapse0x236ed50();
   input += synapse0x236ed90();
   input += synapse0x236edd0();
   input += synapse0x236ee10();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x236e480() {
   double input = input0x236e480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x236ee50() {
   double input = 2.64201;
   input += synapse0x236f190();
   input += synapse0x2363760();
   input += synapse0x23637a0();
   input += synapse0x23637e0();
   input += synapse0x2363a30();
   input += synapse0x2363a70();
   input += synapse0x2363ab0();
   input += synapse0x2363d00();
   input += synapse0x2363d40();
   input += synapse0x2363f90();
   input += synapse0x2363fd0();
   input += synapse0x2364010();
   input += synapse0x2364260();
   input += synapse0x23642a0();
   input += synapse0x23644f0();
   input += synapse0x2364530();
   input += synapse0x236efe0();
   input += synapse0x236f020();
   input += synapse0x2364680();
   input += synapse0x2364b90();
   input += synapse0x2364bd0();
   input += synapse0x2364c10();
   input += synapse0x2364e60();
   input += synapse0x2364ea0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x236ee50() {
   double input = input0x236ee50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2364ee0() {
   double input = 0.696741;
   input += synapse0x2364750();
   input += synapse0x2364790();
   input += synapse0x23647d0();
   input += synapse0x2364810();
   input += synapse0x2365190();
   input += synapse0x23714e0();
   input += synapse0x2371520();
   input += synapse0x2371560();
   input += synapse0x23715a0();
   input += synapse0x23715e0();
   input += synapse0x2371620();
   input += synapse0x2371660();
   input += synapse0x23716a0();
   input += synapse0x23716e0();
   input += synapse0x2371720();
   input += synapse0x2371760();
   input += synapse0x2365070();
   input += synapse0x23650b0();
   input += synapse0x23718b0();
   input += synapse0x23718f0();
   input += synapse0x2371930();
   input += synapse0x2371970();
   input += synapse0x23719b0();
   input += synapse0x23719f0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2364ee0() {
   double input = input0x2364ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2371a30() {
   double input = -0.428215;
   input += synapse0x2371d70();
   input += synapse0x2371db0();
   input += synapse0x2371df0();
   input += synapse0x2371e30();
   input += synapse0x2371e70();
   input += synapse0x2371eb0();
   input += synapse0x2371ef0();
   input += synapse0x2371f30();
   input += synapse0x2371f70();
   input += synapse0x2371fb0();
   input += synapse0x2371ff0();
   input += synapse0x2372030();
   input += synapse0x2372070();
   input += synapse0x23720b0();
   input += synapse0x23720f0();
   input += synapse0x2372130();
   input += synapse0x2371bc0();
   input += synapse0x2371c00();
   input += synapse0x2372280();
   input += synapse0x23722c0();
   input += synapse0x2372300();
   input += synapse0x2372340();
   input += synapse0x2372380();
   input += synapse0x23723c0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2371a30() {
   double input = input0x2371a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2372400() {
   double input = 0.644707;
   input += synapse0x2372740();
   input += synapse0x2372780();
   input += synapse0x23727c0();
   input += synapse0x2372800();
   input += synapse0x2372840();
   input += synapse0x2372880();
   input += synapse0x23728c0();
   input += synapse0x2372900();
   input += synapse0x2372940();
   input += synapse0x2372980();
   input += synapse0x23729c0();
   input += synapse0x2372a00();
   input += synapse0x2372a40();
   input += synapse0x2372a80();
   input += synapse0x2372ac0();
   input += synapse0x2372b00();
   input += synapse0x2372590();
   input += synapse0x23725d0();
   input += synapse0x2372c50();
   input += synapse0x2372c90();
   input += synapse0x2372cd0();
   input += synapse0x2372d10();
   input += synapse0x2372d50();
   input += synapse0x2372d90();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2372400() {
   double input = input0x2372400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2372dd0() {
   double input = 0.00246519;
   input += synapse0x2373110();
   input += synapse0x2373150();
   input += synapse0x2373190();
   input += synapse0x23731d0();
   input += synapse0x2373210();
   input += synapse0x2373250();
   input += synapse0x2373290();
   input += synapse0x23732d0();
   input += synapse0x2373310();
   input += synapse0x2373350();
   input += synapse0x2373390();
   input += synapse0x23733d0();
   input += synapse0x2373410();
   input += synapse0x2373450();
   input += synapse0x2373490();
   input += synapse0x23734d0();
   input += synapse0x2372f60();
   input += synapse0x2372fa0();
   input += synapse0x2373620();
   input += synapse0x2373660();
   input += synapse0x23736a0();
   input += synapse0x23736e0();
   input += synapse0x2373720();
   input += synapse0x2373760();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2372dd0() {
   double input = input0x2372dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x23737a0() {
   double input = 0.121811;
   input += synapse0x2373ae0();
   input += synapse0x2373b20();
   input += synapse0x2373b60();
   input += synapse0x2373ba0();
   input += synapse0x2373be0();
   input += synapse0x2373c20();
   input += synapse0x2373c60();
   input += synapse0x2373ca0();
   input += synapse0x2373ce0();
   input += synapse0x2373d20();
   input += synapse0x2373d60();
   input += synapse0x2373da0();
   input += synapse0x2373de0();
   input += synapse0x2373e20();
   input += synapse0x2373e60();
   input += synapse0x2373ea0();
   input += synapse0x2373930();
   input += synapse0x2373970();
   input += synapse0x2373ff0();
   input += synapse0x2374030();
   input += synapse0x2374070();
   input += synapse0x23740b0();
   input += synapse0x23740f0();
   input += synapse0x2374130();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23737a0() {
   double input = input0x23737a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2374170() {
   double input = 0.140656;
   input += synapse0x23744b0();
   input += synapse0x23744f0();
   input += synapse0x2374530();
   input += synapse0x2374570();
   input += synapse0x23745b0();
   input += synapse0x23745f0();
   input += synapse0x2374630();
   input += synapse0x2374670();
   input += synapse0x23746b0();
   input += synapse0x23746f0();
   input += synapse0x2374730();
   input += synapse0x2374770();
   input += synapse0x23747b0();
   input += synapse0x23747f0();
   input += synapse0x2374830();
   input += synapse0x2374870();
   input += synapse0x2374300();
   input += synapse0x2374340();
   input += synapse0x23749c0();
   input += synapse0x2374a00();
   input += synapse0x2374a40();
   input += synapse0x2374a80();
   input += synapse0x2374ac0();
   input += synapse0x2374b00();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2374170() {
   double input = input0x2374170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2374b40() {
   double input = -0.7359;
   input += synapse0x2374e80();
   input += synapse0x2374ec0();
   input += synapse0x2374f00();
   input += synapse0x2374f40();
   input += synapse0x2374f80();
   input += synapse0x2374fc0();
   input += synapse0x2375000();
   input += synapse0x2375040();
   input += synapse0x2375080();
   input += synapse0x23750c0();
   input += synapse0x2375100();
   input += synapse0x2375140();
   input += synapse0x2375180();
   input += synapse0x23751c0();
   input += synapse0x2375200();
   input += synapse0x2375240();
   input += synapse0x2374cd0();
   input += synapse0x2374d10();
   input += synapse0x2375390();
   input += synapse0x23753d0();
   input += synapse0x2375410();
   input += synapse0x2375450();
   input += synapse0x2375490();
   input += synapse0x23754d0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2374b40() {
   double input = input0x2374b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2375510() {
   double input = 0.128351;
   input += synapse0x2375850();
   input += synapse0x2375890();
   input += synapse0x23758d0();
   input += synapse0x2375910();
   input += synapse0x2375950();
   input += synapse0x2375990();
   input += synapse0x23759d0();
   input += synapse0x2375a10();
   input += synapse0x2375a50();
   input += synapse0x2375a90();
   input += synapse0x2375ad0();
   input += synapse0x2375b10();
   input += synapse0x2375b50();
   input += synapse0x2375b90();
   input += synapse0x2375bd0();
   input += synapse0x2375c10();
   input += synapse0x23756a0();
   input += synapse0x23756e0();
   input += synapse0x2375d60();
   input += synapse0x2375da0();
   input += synapse0x2375de0();
   input += synapse0x2375e20();
   input += synapse0x2375e60();
   input += synapse0x2375ea0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2375510() {
   double input = input0x2375510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2375ee0() {
   double input = -1.96904;
   input += synapse0x235e950();
   input += synapse0x235e990();
   input += synapse0x235e9d0();
   input += synapse0x235ea10();
   input += synapse0x235ea50();
   input += synapse0x235ea90();
   input += synapse0x235ead0();
   input += synapse0x235eb10();
   input += synapse0x2376630();
   input += synapse0x2376670();
   input += synapse0x23766b0();
   input += synapse0x23766f0();
   input += synapse0x2376730();
   input += synapse0x2376770();
   input += synapse0x23767b0();
   input += synapse0x23767f0();
   input += synapse0x2376070();
   input += synapse0x23760b0();
   input += synapse0x2376940();
   input += synapse0x2376980();
   input += synapse0x23769c0();
   input += synapse0x2376a00();
   input += synapse0x2376a40();
   input += synapse0x2376a80();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2375ee0() {
   double input = input0x2375ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2376ac0() {
   double input = -1.25249;
   input += synapse0x2376e00();
   input += synapse0x2376e40();
   input += synapse0x2376e80();
   input += synapse0x2376ec0();
   input += synapse0x2376f00();
   input += synapse0x2376f40();
   input += synapse0x2376f80();
   input += synapse0x2376fc0();
   input += synapse0x2377000();
   input += synapse0x2377040();
   input += synapse0x2377080();
   input += synapse0x23770c0();
   input += synapse0x2377100();
   input += synapse0x2377140();
   input += synapse0x2377180();
   input += synapse0x23771c0();
   input += synapse0x2376c50();
   input += synapse0x2376c90();
   input += synapse0x2377310();
   input += synapse0x2377350();
   input += synapse0x2377390();
   input += synapse0x23773d0();
   input += synapse0x2377410();
   input += synapse0x2377450();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2376ac0() {
   double input = input0x2376ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2377490() {
   double input = 0.0252428;
   input += synapse0x23777d0();
   input += synapse0x2377810();
   input += synapse0x2377850();
   input += synapse0x2377890();
   input += synapse0x23778d0();
   input += synapse0x2377910();
   input += synapse0x2377950();
   input += synapse0x2377990();
   input += synapse0x23779d0();
   input += synapse0x2377a10();
   input += synapse0x2377a50();
   input += synapse0x2377a90();
   input += synapse0x2377ad0();
   input += synapse0x2377b10();
   input += synapse0x2377b50();
   input += synapse0x2377b90();
   input += synapse0x2377620();
   input += synapse0x2377660();
   input += synapse0x2368190();
   input += synapse0x23681d0();
   input += synapse0x2368210();
   input += synapse0x2368250();
   input += synapse0x2368290();
   input += synapse0x23682d0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2377490() {
   double input = input0x2377490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2368310() {
   double input = 0.183399;
   input += synapse0x2368650();
   input += synapse0x2368690();
   input += synapse0x23686d0();
   input += synapse0x2368710();
   input += synapse0x2368750();
   input += synapse0x2368790();
   input += synapse0x23687d0();
   input += synapse0x2368810();
   input += synapse0x2368850();
   input += synapse0x2368890();
   input += synapse0x23688d0();
   input += synapse0x2368910();
   input += synapse0x2368950();
   input += synapse0x2368990();
   input += synapse0x23689d0();
   input += synapse0x2368a10();
   input += synapse0x23684a0();
   input += synapse0x23684e0();
   input += synapse0x2368b60();
   input += synapse0x2368ba0();
   input += synapse0x2368be0();
   input += synapse0x2368c20();
   input += synapse0x2368c60();
   input += synapse0x2368ca0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2368310() {
   double input = input0x2368310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2368ce0() {
   double input = 0.226009;
   input += synapse0x2369020();
   input += synapse0x2369060();
   input += synapse0x23690a0();
   input += synapse0x23690e0();
   input += synapse0x2369120();
   input += synapse0x2369160();
   input += synapse0x23691a0();
   input += synapse0x23691e0();
   input += synapse0x2369220();
   input += synapse0x2369260();
   input += synapse0x23692a0();
   input += synapse0x23692e0();
   input += synapse0x2369320();
   input += synapse0x2369360();
   input += synapse0x23693a0();
   input += synapse0x23693e0();
   input += synapse0x2368e70();
   input += synapse0x2368eb0();
   input += synapse0x2369530();
   input += synapse0x2369570();
   input += synapse0x23695b0();
   input += synapse0x23695f0();
   input += synapse0x2369630();
   input += synapse0x2369670();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2368ce0() {
   double input = input0x2368ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x23696b0() {
   double input = -0.344645;
   input += synapse0x23699f0();
   input += synapse0x2369a30();
   input += synapse0x2369a70();
   input += synapse0x2369ab0();
   input += synapse0x2369af0();
   input += synapse0x2369b30();
   input += synapse0x2369b70();
   input += synapse0x2369bb0();
   input += synapse0x2369bf0();
   input += synapse0x2369c30();
   input += synapse0x2369c70();
   input += synapse0x2369cb0();
   input += synapse0x2369cf0();
   input += synapse0x2369d30();
   input += synapse0x2369d70();
   input += synapse0x2369db0();
   input += synapse0x2369840();
   input += synapse0x2369880();
   input += synapse0x2369f00();
   input += synapse0x2369f40();
   input += synapse0x2369f80();
   input += synapse0x2369fc0();
   input += synapse0x236a000();
   input += synapse0x236a040();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23696b0() {
   double input = input0x23696b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x237bcf0() {
   double input = 1.99686;
   input += synapse0x237bf10();
   input += synapse0x237bf50();
   input += synapse0x237bf90();
   input += synapse0x237bfd0();
   input += synapse0x237c010();
   input += synapse0x237c050();
   input += synapse0x237c090();
   input += synapse0x237c0d0();
   input += synapse0x237c110();
   input += synapse0x237c150();
   input += synapse0x237c190();
   input += synapse0x237c1d0();
   input += synapse0x237c210();
   input += synapse0x237c250();
   input += synapse0x237c290();
   input += synapse0x237c2d0();
   input += synapse0x236a080();
   input += synapse0x236a0c0();
   input += synapse0x237c420();
   input += synapse0x237c460();
   input += synapse0x237c4a0();
   input += synapse0x237c4e0();
   input += synapse0x237c520();
   input += synapse0x237c560();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x237bcf0() {
   double input = input0x237bcf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x237c5a0() {
   double input = -1.52317;
   input += synapse0x237c8e0();
   input += synapse0x237c920();
   input += synapse0x237c960();
   input += synapse0x237c9a0();
   input += synapse0x237c9e0();
   input += synapse0x237ca20();
   input += synapse0x237ca60();
   input += synapse0x237caa0();
   input += synapse0x237cae0();
   input += synapse0x237cb20();
   input += synapse0x237cb60();
   input += synapse0x237cba0();
   input += synapse0x237cbe0();
   input += synapse0x237cc20();
   input += synapse0x237cc60();
   input += synapse0x237cca0();
   input += synapse0x237c730();
   input += synapse0x237c770();
   input += synapse0x237cdf0();
   input += synapse0x237ce30();
   input += synapse0x237ce70();
   input += synapse0x237ceb0();
   input += synapse0x237cef0();
   input += synapse0x237cf30();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x237c5a0() {
   double input = input0x237c5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x237cf70() {
   double input = -0.972886;
   input += synapse0x237d2b0();
   input += synapse0x237d2f0();
   input += synapse0x237d330();
   input += synapse0x237d370();
   input += synapse0x237d3b0();
   input += synapse0x237d3f0();
   input += synapse0x237d430();
   input += synapse0x237d470();
   input += synapse0x237d4b0();
   input += synapse0x237d4f0();
   input += synapse0x237d530();
   input += synapse0x237d570();
   input += synapse0x237d5b0();
   input += synapse0x237d5f0();
   input += synapse0x237d630();
   input += synapse0x237d670();
   input += synapse0x237d100();
   input += synapse0x237d140();
   input += synapse0x237d7c0();
   input += synapse0x237d800();
   input += synapse0x237d840();
   input += synapse0x237d880();
   input += synapse0x237d8c0();
   input += synapse0x237d900();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x237cf70() {
   double input = input0x237cf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x237d940() {
   double input = -0.428926;
   input += synapse0x237dc80();
   input += synapse0x237dcc0();
   input += synapse0x237dd00();
   input += synapse0x237dd40();
   input += synapse0x237dd80();
   input += synapse0x237ddc0();
   input += synapse0x237de00();
   input += synapse0x237de40();
   input += synapse0x237de80();
   input += synapse0x237dec0();
   input += synapse0x237df00();
   input += synapse0x237df40();
   input += synapse0x237df80();
   input += synapse0x237dfc0();
   input += synapse0x237e000();
   input += synapse0x237e040();
   input += synapse0x237dad0();
   input += synapse0x237db10();
   input += synapse0x237e190();
   input += synapse0x237e1d0();
   input += synapse0x237e210();
   input += synapse0x237e250();
   input += synapse0x237e290();
   input += synapse0x237e2d0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x237d940() {
   double input = input0x237d940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2384b40() {
   double input = -0.386157;
   input += synapse0x211e1a0();
   input += synapse0x211e1e0();
   input += synapse0x235bd80();
   input += synapse0x235bdc0();
   input += synapse0x235c750();
   input += synapse0x235c790();
   input += synapse0x235d520();
   input += synapse0x235d560();
   input += synapse0x235def0();
   input += synapse0x235df30();
   input += synapse0x235e8c0();
   input += synapse0x235e900();
   input += synapse0x235f3a0();
   input += synapse0x235f3e0();
   input += synapse0x235fd70();
   input += synapse0x235fdb0();
   input += synapse0x235ce50();
   input += synapse0x235ce90();
   input += synapse0x2361920();
   input += synapse0x2361960();
   input += synapse0x23622f0();
   input += synapse0x2362330();
   input += synapse0x2362cc0();
   input += synapse0x2362d00();
   input += synapse0x2363690();
   input += synapse0x23636d0();
   input += synapse0x2357830();
   input += synapse0x2357870();
   input += synapse0x2365780();
   input += synapse0x23657c0();
   input += synapse0x2366150();
   input += synapse0x2366190();
   input += synapse0x2366b20();
   input += synapse0x2366b60();
   input += synapse0x23674f0();
   input += synapse0x2367530();
   input += synapse0x2367ec0();
   input += synapse0x2367f00();
   input += synapse0x2360a10();
   input += synapse0x2360a50();
   input += synapse0x236a2c0();
   input += synapse0x236a300();
   input += synapse0x236ac50();
   input += synapse0x236ac90();
   input += synapse0x236b620();
   input += synapse0x236b660();
   input += synapse0x236bff0();
   input += synapse0x236c030();
   input += synapse0x236c9c0();
   input += synapse0x236ca00();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2384b40() {
   double input = input0x2384b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2384ee0() {
   double input = 0.207867;
   input += synapse0x236f100();
   input += synapse0x236f140();
   input += synapse0x23646c0();
   input += synapse0x2364700();
   input += synapse0x2371ce0();
   input += synapse0x2371d20();
   input += synapse0x23726b0();
   input += synapse0x23726f0();
   input += synapse0x2373080();
   input += synapse0x23730c0();
   input += synapse0x2373a50();
   input += synapse0x2373a90();
   input += synapse0x2374420();
   input += synapse0x2374460();
   input += synapse0x2374df0();
   input += synapse0x2374e30();
   input += synapse0x23757c0();
   input += synapse0x2375800();
   input += synapse0x2376190();
   input += synapse0x23761d0();
   input += synapse0x2376d70();
   input += synapse0x2376db0();
   input += synapse0x2377740();
   input += synapse0x2377780();
   input += synapse0x23685c0();
   input += synapse0x2368600();
   input += synapse0x2368f90();
   input += synapse0x2368fd0();
   input += synapse0x2369960();
   input += synapse0x23699a0();
   input += synapse0x237be80();
   input += synapse0x237bec0();
   input += synapse0x237c850();
   input += synapse0x237c890();
   input += synapse0x237d220();
   input += synapse0x237d260();
   input += synapse0x237dbf0();
   input += synapse0x237dc30();
   input += synapse0x2359ae0();
   input += synapse0x2359b20();
   input += synapse0x236d390();
   input += synapse0x236d3d0();
   input += synapse0x237e310();
   input += synapse0x237e350();
   input += synapse0x237e390();
   input += synapse0x237e3d0();
   input += synapse0x2385280();
   input += synapse0x23852c0();
   input += synapse0x2385300();
   input += synapse0x2385340();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2384ee0() {
   double input = input0x2384ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2385380() {
   double input = -0.276361;
   input += synapse0x23856c0();
   input += synapse0x2385700();
   input += synapse0x2385740();
   input += synapse0x2385780();
   input += synapse0x23857c0();
   input += synapse0x2385800();
   input += synapse0x2385840();
   input += synapse0x2385880();
   input += synapse0x23858c0();
   input += synapse0x2385900();
   input += synapse0x2385940();
   input += synapse0x2385980();
   input += synapse0x23859c0();
   input += synapse0x2385a00();
   input += synapse0x2385a40();
   input += synapse0x2385a80();
   input += synapse0x2385510();
   input += synapse0x2385550();
   input += synapse0x2385bd0();
   input += synapse0x2385c10();
   input += synapse0x2385c50();
   input += synapse0x2385c90();
   input += synapse0x2385cd0();
   input += synapse0x2385d10();
   input += synapse0x2385d50();
   input += synapse0x2385d90();
   input += synapse0x2385dd0();
   input += synapse0x2385e10();
   input += synapse0x2385e50();
   input += synapse0x2385e90();
   input += synapse0x2385ed0();
   input += synapse0x2385f10();
   input += synapse0x2385ac0();
   input += synapse0x2385b00();
   input += synapse0x2385b40();
   input += synapse0x2385b80();
   input += synapse0x2386160();
   input += synapse0x23861a0();
   input += synapse0x23861e0();
   input += synapse0x2386220();
   input += synapse0x2386260();
   input += synapse0x23862a0();
   input += synapse0x23862e0();
   input += synapse0x2386320();
   input += synapse0x2386360();
   input += synapse0x23863a0();
   input += synapse0x23863e0();
   input += synapse0x2386420();
   input += synapse0x2386460();
   input += synapse0x23864a0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2385380() {
   double input = input0x2385380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x23864e0() {
   double input = 0.465123;
   input += synapse0x2386820();
   input += synapse0x2386860();
   input += synapse0x23868a0();
   input += synapse0x23868e0();
   input += synapse0x2386920();
   input += synapse0x2386960();
   input += synapse0x23869a0();
   input += synapse0x23869e0();
   input += synapse0x2386a20();
   input += synapse0x2386a60();
   input += synapse0x2386aa0();
   input += synapse0x2386ae0();
   input += synapse0x2386b20();
   input += synapse0x2386b60();
   input += synapse0x2386ba0();
   input += synapse0x2386be0();
   input += synapse0x2386670();
   input += synapse0x23866b0();
   input += synapse0x2386d30();
   input += synapse0x2386d70();
   input += synapse0x2386db0();
   input += synapse0x2386df0();
   input += synapse0x2386e30();
   input += synapse0x2386e70();
   input += synapse0x2386eb0();
   input += synapse0x2386ef0();
   input += synapse0x2386f30();
   input += synapse0x2386f70();
   input += synapse0x2386fb0();
   input += synapse0x2386ff0();
   input += synapse0x2387030();
   input += synapse0x2387070();
   input += synapse0x2386c20();
   input += synapse0x2386c60();
   input += synapse0x2386ca0();
   input += synapse0x2386ce0();
   input += synapse0x23872c0();
   input += synapse0x2387300();
   input += synapse0x2387340();
   input += synapse0x2387380();
   input += synapse0x23873c0();
   input += synapse0x2387400();
   input += synapse0x2387440();
   input += synapse0x2387480();
   input += synapse0x23874c0();
   input += synapse0x2387500();
   input += synapse0x2387540();
   input += synapse0x2387580();
   input += synapse0x23875c0();
   input += synapse0x2387600();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23864e0() {
   double input = input0x23864e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x2387640() {
   double input = 1.24285;
   input += synapse0x2387980();
   input += synapse0x23879c0();
   input += synapse0x2387a00();
   input += synapse0x2387a40();
   input += synapse0x2387a80();
   input += synapse0x2387ac0();
   input += synapse0x2387b00();
   input += synapse0x2387b40();
   input += synapse0x2387b80();
   input += synapse0x2387bc0();
   input += synapse0x2387c00();
   input += synapse0x2387c40();
   input += synapse0x2387c80();
   input += synapse0x2387cc0();
   input += synapse0x2387d00();
   input += synapse0x2387d40();
   input += synapse0x23877d0();
   input += synapse0x2387810();
   input += synapse0x2387e90();
   input += synapse0x2387ed0();
   input += synapse0x2387f10();
   input += synapse0x2387f50();
   input += synapse0x2387f90();
   input += synapse0x2387fd0();
   input += synapse0x2388010();
   input += synapse0x2388050();
   input += synapse0x2388090();
   input += synapse0x23880d0();
   input += synapse0x2388110();
   input += synapse0x2388150();
   input += synapse0x2388190();
   input += synapse0x23881d0();
   input += synapse0x2387d80();
   input += synapse0x2387dc0();
   input += synapse0x2387e00();
   input += synapse0x2387e40();
   input += synapse0x2388420();
   input += synapse0x2388460();
   input += synapse0x23884a0();
   input += synapse0x23884e0();
   input += synapse0x2388520();
   input += synapse0x2388560();
   input += synapse0x23885a0();
   input += synapse0x23885e0();
   input += synapse0x2388620();
   input += synapse0x2388660();
   input += synapse0x23886a0();
   input += synapse0x23886e0();
   input += synapse0x2388720();
   input += synapse0x2388760();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x2387640() {
   double input = input0x2387640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::input0x23887a0() {
   double input = 9.42793;
   input += synapse0x23889c0();
   input += synapse0x2388a00();
   input += synapse0x2388a40();
   input += synapse0x2388a80();
   input += synapse0x2388ac0();
   return input;
}

double NNfunction_nn_charge2p_charge2m::neuron0x23887a0() {
   double input = input0x23887a0();
   return (input * 1)+0;
}

double NNfunction_nn_charge2p_charge2m::synapse0x2354750() {
   return (neuron0x2354890()*0.452655);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2354790() {
   return (neuron0x2354bd0()*0.0355789);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359b70() {
   return (neuron0x2354f10()*2.26734);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359bb0() {
   return (neuron0x2355250()*-0.275496);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359bf0() {
   return (neuron0x2355590()*-0.21698);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359c30() {
   return (neuron0x23558d0()*0.161972);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359c70() {
   return (neuron0x2355c10()*0.184233);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359cb0() {
   return (neuron0x2355f50()*-0.2263);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359cf0() {
   return (neuron0x2356290()*-0.393343);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359d30() {
   return (neuron0x23565d0()*0.106474);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359d70() {
   return (neuron0x2356910()*0.0211255);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359db0() {
   return (neuron0x2356c50()*-0.640605);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359df0() {
   return (neuron0x2356f90()*-0.789089);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359e30() {
   return (neuron0x23572d0()*-0.0623318);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359e70() {
   return (neuron0x2357610()*-0.229058);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359eb0() {
   return (neuron0x2357950()*-0.408427);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23546c0() {
   return (neuron0x2357c90()*-0.0143841);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2354700() {
   return (neuron0x23581f0()*-0.611057);
}

double NNfunction_nn_charge2p_charge2m::synapse0x1295020() {
   return (neuron0x2358410()*-0.502581);
}

double NNfunction_nn_charge2p_charge2m::synapse0x1295060() {
   return (neuron0x2358750()*-0.202379);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a110() {
   return (neuron0x2358a90()*-1.26142);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a150() {
   return (neuron0x2358dd0()*-2.28847);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a190() {
   return (neuron0x2359110()*-2.25956);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a1d0() {
   return (neuron0x2359450()*-0.0976363);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a550() {
   return (neuron0x2354890()*-0.54555);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a590() {
   return (neuron0x2354bd0()*0.232062);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a5d0() {
   return (neuron0x2354f10()*-1.32185);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a610() {
   return (neuron0x2355250()*0.145233);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a650() {
   return (neuron0x2355590()*0.230575);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a690() {
   return (neuron0x23558d0()*0.219282);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a6d0() {
   return (neuron0x2355c10()*-0.215824);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a710() {
   return (neuron0x2355f50()*0.194588);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a750() {
   return (neuron0x2356290()*0.315206);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a000() {
   return (neuron0x23565d0()*0.345819);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a040() {
   return (neuron0x2356910()*0.238018);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a080() {
   return (neuron0x2356c50()*0.566387);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a0c0() {
   return (neuron0x2356f90()*0.413234);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a9a0() {
   return (neuron0x23572d0()*0.0646114);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a9e0() {
   return (neuron0x2357610()*0.13656);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235aa20() {
   return (neuron0x2357950()*0.3071);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a3a0() {
   return (neuron0x2357c90()*-0.161807);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a3e0() {
   return (neuron0x23581f0()*0.216945);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ab70() {
   return (neuron0x2358410()*-0.181068);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235abb0() {
   return (neuron0x2358750()*0.221517);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235abf0() {
   return (neuron0x2358a90()*-0.97589);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ac30() {
   return (neuron0x2358dd0()*-0.840024);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ac70() {
   return (neuron0x2359110()*-1.08453);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235acb0() {
   return (neuron0x2359450()*-1.1849);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b030() {
   return (neuron0x2354890()*0.00105853);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b070() {
   return (neuron0x2354bd0()*-0.00255461);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b0b0() {
   return (neuron0x2354f10()*0.618977);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b0f0() {
   return (neuron0x2355250()*-0.0293199);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b130() {
   return (neuron0x2355590()*0.00325153);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b170() {
   return (neuron0x23558d0()*0.00711566);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b1b0() {
   return (neuron0x2355c10()*0.00899033);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b1f0() {
   return (neuron0x2355f50()*0.0031932);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b230() {
   return (neuron0x2356290()*0.0050164);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b270() {
   return (neuron0x23565d0()*-0.00331061);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b2b0() {
   return (neuron0x2356910()*0.00346631);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b2f0() {
   return (neuron0x2356c50()*0.155595);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b330() {
   return (neuron0x2356f90()*-0.00908734);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b370() {
   return (neuron0x23572d0()*0.033159);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b3b0() {
   return (neuron0x2357610()*-0.0078916);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b3f0() {
   return (neuron0x2357950()*-0.00580964);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ae80() {
   return (neuron0x2357c90()*0.0127563);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235aec0() {
   return (neuron0x23581f0()*-0.0241148);
}

double NNfunction_nn_charge2p_charge2m::synapse0x1299b40() {
   return (neuron0x2358410()*-0.0100018);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211d9b0() {
   return (neuron0x2358750()*0.00418877);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211d9f0() {
   return (neuron0x2358a90()*0.0130957);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2343920() {
   return (neuron0x2358dd0()*0.00384687);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2343960() {
   return (neuron0x2359110()*-0.000515839);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23439a0() {
   return (neuron0x2359450()*-0.280933);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211e230() {
   return (neuron0x2354890()*-0.374782);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a920() {
   return (neuron0x2354bd0()*-0.460955);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235a960() {
   return (neuron0x2354f10()*1.24425);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b540() {
   return (neuron0x2355250()*0.506039);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b580() {
   return (neuron0x2355590()*-0.275595);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b5c0() {
   return (neuron0x23558d0()*0.345729);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b600() {
   return (neuron0x2355c10()*-0.392258);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b640() {
   return (neuron0x2355f50()*0.122808);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b680() {
   return (neuron0x2356290()*-0.609314);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b6c0() {
   return (neuron0x23565d0()*0.0526588);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b700() {
   return (neuron0x2356910()*-0.57567);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b740() {
   return (neuron0x2356c50()*0.193432);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b780() {
   return (neuron0x2356f90()*-0.133788);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b7c0() {
   return (neuron0x23572d0()*-0.0915788);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b800() {
   return (neuron0x2357610()*0.256651);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b840() {
   return (neuron0x2357950()*-0.316048);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23547d0() {
   return (neuron0x2357c90()*-0.518125);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2354810() {
   return (neuron0x23581f0()*0.159307);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2354850() {
   return (neuron0x2358410()*-0.531129);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b990() {
   return (neuron0x2358750()*0.408969);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235b9d0() {
   return (neuron0x2358a90()*0.180533);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ba10() {
   return (neuron0x2358dd0()*-0.013763);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ba50() {
   return (neuron0x2359110()*-0.398285);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ba90() {
   return (neuron0x2359450()*0.358284);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235be10() {
   return (neuron0x2354890()*-0.00823559);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235be50() {
   return (neuron0x2354bd0()*0.00683282);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235be90() {
   return (neuron0x2354f10()*-1.34753);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235bed0() {
   return (neuron0x2355250()*0.00302688);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235bf10() {
   return (neuron0x2355590()*0.00740485);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235bf50() {
   return (neuron0x23558d0()*0.00169104);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235bf90() {
   return (neuron0x2355c10()*-0.00241598);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235bfd0() {
   return (neuron0x2355f50()*-0.0018678);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c010() {
   return (neuron0x2356290()*0.00533269);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c050() {
   return (neuron0x23565d0()*0.00619787);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c090() {
   return (neuron0x2356910()*0.00956429);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c0d0() {
   return (neuron0x2356c50()*6.07117);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c110() {
   return (neuron0x2356f90()*0.0328407);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c150() {
   return (neuron0x23572d0()*-0.0191826);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c190() {
   return (neuron0x2357610()*-0.000715273);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c1d0() {
   return (neuron0x2357950()*0.0106955);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235bc60() {
   return (neuron0x2357c90()*0.0119674);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235bca0() {
   return (neuron0x23581f0()*0.0286327);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c320() {
   return (neuron0x2358410()*0.0183437);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c360() {
   return (neuron0x2358750()*-0.00345591);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c3a0() {
   return (neuron0x2358a90()*-0.000767234);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c3e0() {
   return (neuron0x2358dd0()*-0.00575591);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c420() {
   return (neuron0x2359110()*-0.000707765);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c460() {
   return (neuron0x2359450()*-1.15822);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c7e0() {
   return (neuron0x2354890()*-0.030774);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c820() {
   return (neuron0x2354bd0()*0.0144361);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c860() {
   return (neuron0x2354f10()*0.156782);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c8a0() {
   return (neuron0x2355250()*0.00778891);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c8e0() {
   return (neuron0x2355590()*0.15761);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c920() {
   return (neuron0x23558d0()*0.00967053);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c960() {
   return (neuron0x2355c10()*-0.00585705);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c9a0() {
   return (neuron0x2355f50()*-0.0235879);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c9e0() {
   return (neuron0x2356290()*-0.0165376);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211dd00() {
   return (neuron0x23565d0()*-0.00518984);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211dd40() {
   return (neuron0x2356910()*-0.023076);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211dd80() {
   return (neuron0x2356c50()*0.0084547);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211ddc0() {
   return (neuron0x2356f90()*0.00328682);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211de00() {
   return (neuron0x23572d0()*-0.0779153);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211de40() {
   return (neuron0x2357610()*0.0263298);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211de80() {
   return (neuron0x2357950()*-0.0119354);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c630() {
   return (neuron0x2357c90()*-0.0589738);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c670() {
   return (neuron0x23581f0()*0.0647651);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211dfd0() {
   return (neuron0x2358410()*-0.0107293);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211e010() {
   return (neuron0x2358750()*-0.0403714);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211e050() {
   return (neuron0x2358a90()*-0.131902);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211e090() {
   return (neuron0x2358dd0()*0.0027632);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211e0d0() {
   return (neuron0x2359110()*0.0243293);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d230() {
   return (neuron0x2359450()*-0.672374);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d5b0() {
   return (neuron0x2354890()*0.00627678);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d5f0() {
   return (neuron0x2354bd0()*0.00633396);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d630() {
   return (neuron0x2354f10()*-0.249734);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d670() {
   return (neuron0x2355250()*2.77731);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d6b0() {
   return (neuron0x2355590()*-0.000267303);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d6f0() {
   return (neuron0x23558d0()*0.00416928);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d730() {
   return (neuron0x2355c10()*0.0178468);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d770() {
   return (neuron0x2355f50()*-0.00623847);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d7b0() {
   return (neuron0x2356290()*0.0106037);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d7f0() {
   return (neuron0x23565d0()*0.000416424);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d830() {
   return (neuron0x2356910()*-0.00180498);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d870() {
   return (neuron0x2356c50()*-0.335765);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d8b0() {
   return (neuron0x2356f90()*0.0911515);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d8f0() {
   return (neuron0x23572d0()*-0.0436509);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d930() {
   return (neuron0x2357610()*0.03782);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d970() {
   return (neuron0x2357950()*0.0425643);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d400() {
   return (neuron0x2357c90()*-0.0491882);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d440() {
   return (neuron0x23581f0()*0.0433542);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235dac0() {
   return (neuron0x2358410()*0.0573113);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235db00() {
   return (neuron0x2358750()*-0.0126546);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235db40() {
   return (neuron0x2358a90()*0.00267252);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235db80() {
   return (neuron0x2358dd0()*-0.00264783);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235dbc0() {
   return (neuron0x2359110()*-0.00979171);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235dc00() {
   return (neuron0x2359450()*0.0970731);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235df80() {
   return (neuron0x2354890()*-0.168297);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235dfc0() {
   return (neuron0x2354bd0()*0.0939866);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e000() {
   return (neuron0x2354f10()*0.79388);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e040() {
   return (neuron0x2355250()*-0.2222);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e080() {
   return (neuron0x2355590()*0.039906);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e0c0() {
   return (neuron0x23558d0()*0.0419747);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e100() {
   return (neuron0x2355c10()*-0.076495);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e140() {
   return (neuron0x2355f50()*-0.00965746);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e180() {
   return (neuron0x2356290()*-0.0410303);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e1c0() {
   return (neuron0x23565d0()*0.0341991);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e200() {
   return (neuron0x2356910()*0.00774006);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e240() {
   return (neuron0x2356c50()*0.458722);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e280() {
   return (neuron0x2356f90()*-0.695745);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e2c0() {
   return (neuron0x23572d0()*0.311682);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e300() {
   return (neuron0x2357610()*-0.426641);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e340() {
   return (neuron0x2357950()*-0.58862);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ddd0() {
   return (neuron0x2357c90()*0.121088);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235de10() {
   return (neuron0x23581f0()*-0.132894);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e490() {
   return (neuron0x2358410()*-0.495699);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e4d0() {
   return (neuron0x2358750()*-0.0222523);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e510() {
   return (neuron0x2358a90()*-0.0286482);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e550() {
   return (neuron0x2358dd0()*-0.0315478);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e590() {
   return (neuron0x2359110()*-0.0574136);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e5d0() {
   return (neuron0x2359450()*-0.119707);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23580e0() {
   return (neuron0x2354890()*0.0220637);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2358120() {
   return (neuron0x2354bd0()*0.010502);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2358160() {
   return (neuron0x2354f10()*-1.21565);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23581a0() {
   return (neuron0x2355250()*0.0227092);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235eb60() {
   return (neuron0x2355590()*0.0018429);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235eba0() {
   return (neuron0x23558d0()*-0.00394255);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ebe0() {
   return (neuron0x2355c10()*-0.0110273);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ec20() {
   return (neuron0x2355f50()*0.0172895);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ec60() {
   return (neuron0x2356290()*-0.00887265);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235eca0() {
   return (neuron0x23565d0()*0.0050218);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ece0() {
   return (neuron0x2356910()*-0.00452193);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ed20() {
   return (neuron0x2356c50()*-0.65778);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ed60() {
   return (neuron0x2356f90()*0.134105);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235eda0() {
   return (neuron0x23572d0()*-0.0197746);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ede0() {
   return (neuron0x2357610()*0.0409195);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ee20() {
   return (neuron0x2357950()*0.0345878);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e7a0() {
   return (neuron0x2357c90()*-0.0469832);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e7e0() {
   return (neuron0x23581f0()*0.0573101);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ef70() {
   return (neuron0x2358410()*0.0309393);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235efb0() {
   return (neuron0x2358750()*0.0114014);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235eff0() {
   return (neuron0x2358a90()*0.00502778);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f030() {
   return (neuron0x2358dd0()*-0.0151494);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f070() {
   return (neuron0x2359110()*-0.00839607);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f0b0() {
   return (neuron0x2359450()*-0.451061);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f430() {
   return (neuron0x2354890()*0.0239707);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f470() {
   return (neuron0x2354bd0()*-0.00125559);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f4b0() {
   return (neuron0x2354f10()*-1.91311);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f4f0() {
   return (neuron0x2355250()*0.0584739);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f530() {
   return (neuron0x2355590()*-0.0241863);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f570() {
   return (neuron0x23558d0()*-0.0182342);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f5b0() {
   return (neuron0x2355c10()*-0.0198106);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f5f0() {
   return (neuron0x2355f50()*-0.00769184);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f630() {
   return (neuron0x2356290()*-0.00338308);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f670() {
   return (neuron0x23565d0()*0.00540964);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f6b0() {
   return (neuron0x2356910()*-0.0202891);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f6f0() {
   return (neuron0x2356c50()*0.296082);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f730() {
   return (neuron0x2356f90()*-0.0422163);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f770() {
   return (neuron0x23572d0()*0.0145871);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f7b0() {
   return (neuron0x2357610()*-0.00864218);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f7f0() {
   return (neuron0x2357950()*0.00165075);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f280() {
   return (neuron0x2357c90()*0.0132124);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f2c0() {
   return (neuron0x23581f0()*0.0171981);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f940() {
   return (neuron0x2358410()*-0.0246618);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f980() {
   return (neuron0x2358750()*0.00952617);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f9c0() {
   return (neuron0x2358a90()*-0.0208677);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fa00() {
   return (neuron0x2358dd0()*0.000445011);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fa40() {
   return (neuron0x2359110()*0.000292411);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fa80() {
   return (neuron0x2359450()*-1.90941);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fe00() {
   return (neuron0x2354890()*-0.0195507);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fe40() {
   return (neuron0x2354bd0()*0.0185317);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fe80() {
   return (neuron0x2354f10()*0.506236);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fec0() {
   return (neuron0x2355250()*-0.0352598);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ff00() {
   return (neuron0x2355590()*0.123938);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ff40() {
   return (neuron0x23558d0()*0.0262785);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ff80() {
   return (neuron0x2355c10()*-0.0263704);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ffc0() {
   return (neuron0x2355f50()*-0.00478426);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360000() {
   return (neuron0x2356290()*-0.0327868);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360040() {
   return (neuron0x23565d0()*-0.00461499);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360080() {
   return (neuron0x2356910()*-0.00524923);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23600c0() {
   return (neuron0x2356c50()*-0.131894);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360100() {
   return (neuron0x2356f90()*-0.039113);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360140() {
   return (neuron0x23572d0()*-0.0467673);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360180() {
   return (neuron0x2357610()*0.00286774);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23601c0() {
   return (neuron0x2357950()*-0.0317883);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fc50() {
   return (neuron0x2357c90()*-0.0600376);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fc90() {
   return (neuron0x23581f0()*-0.0156691);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ca20() {
   return (neuron0x2358410()*-0.000867418);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ca60() {
   return (neuron0x2358750()*-0.0290254);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235caa0() {
   return (neuron0x2358a90()*-0.0474495);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cae0() {
   return (neuron0x2358dd0()*-0.0156262);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cb20() {
   return (neuron0x2359110()*0.00619016);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cb60() {
   return (neuron0x2359450()*-0.0994356);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cee0() {
   return (neuron0x2354890()*0.0137059);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cf20() {
   return (neuron0x2354bd0()*0.00716338);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cf60() {
   return (neuron0x2354f10()*0.101805);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cfa0() {
   return (neuron0x2355250()*2.8939);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cfe0() {
   return (neuron0x2355590()*0.00389171);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d020() {
   return (neuron0x23558d0()*-0.0040649);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d060() {
   return (neuron0x2355c10()*0.0135507);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d0a0() {
   return (neuron0x2355f50()*-0.0201368);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d0e0() {
   return (neuron0x2356290()*0.010949);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d120() {
   return (neuron0x23565d0()*-0.0034563);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d160() {
   return (neuron0x2356910()*0.000816905);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d1a0() {
   return (neuron0x2356c50()*0.0353011);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d1e0() {
   return (neuron0x2356f90()*0.0536778);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361320() {
   return (neuron0x23572d0()*0.028439);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361360() {
   return (neuron0x2357610()*0.00569902);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23613a0() {
   return (neuron0x2357950()*0.0119089);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cd30() {
   return (neuron0x2357c90()*-0.00941982);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235cd70() {
   return (neuron0x23581f0()*0.00873249);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23614f0() {
   return (neuron0x2358410()*0.024914);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361530() {
   return (neuron0x2358750()*-0.0186597);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361570() {
   return (neuron0x2358a90()*-0.00605938);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23615b0() {
   return (neuron0x2358dd0()*-0.00580752);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23615f0() {
   return (neuron0x2359110()*-0.00222987);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361630() {
   return (neuron0x2359450()*0.0454329);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23619b0() {
   return (neuron0x2354890()*-0.990892);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23619f0() {
   return (neuron0x2354bd0()*0.00456149);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361a30() {
   return (neuron0x2354f10()*-0.435748);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361a70() {
   return (neuron0x2355250()*-0.0609667);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361ab0() {
   return (neuron0x2355590()*-0.0791556);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361af0() {
   return (neuron0x23558d0()*-0.0105385);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361b30() {
   return (neuron0x2355c10()*0.0162942);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361b70() {
   return (neuron0x2355f50()*-0.0105908);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361bb0() {
   return (neuron0x2356290()*-0.05839);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361bf0() {
   return (neuron0x23565d0()*0.022324);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361c30() {
   return (neuron0x2356910()*-0.0141766);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361c70() {
   return (neuron0x2356c50()*-0.0513625);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361cb0() {
   return (neuron0x2356f90()*-0.0889388);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361cf0() {
   return (neuron0x23572d0()*-0.166362);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361d30() {
   return (neuron0x2357610()*-0.00707625);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361d70() {
   return (neuron0x2357950()*-0.0131194);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361800() {
   return (neuron0x2357c90()*-0.0900412);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361840() {
   return (neuron0x23581f0()*-0.0723615);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361ec0() {
   return (neuron0x2358410()*-0.0169395);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361f00() {
   return (neuron0x2358750()*-0.00132666);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361f40() {
   return (neuron0x2358a90()*0.111943);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361f80() {
   return (neuron0x2358dd0()*-0.0118499);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361fc0() {
   return (neuron0x2359110()*0.00111926);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362000() {
   return (neuron0x2359450()*-1.57713);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362380() {
   return (neuron0x2354890()*-0.0621385);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23623c0() {
   return (neuron0x2354bd0()*0.0080301);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362400() {
   return (neuron0x2354f10()*0.48519);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362440() {
   return (neuron0x2355250()*-0.0199046);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362480() {
   return (neuron0x2355590()*0.339664);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23624c0() {
   return (neuron0x23558d0()*0.0404358);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362500() {
   return (neuron0x2355c10()*0.00264769);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362540() {
   return (neuron0x2355f50()*-0.045301);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362580() {
   return (neuron0x2356290()*-0.0350649);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23625c0() {
   return (neuron0x23565d0()*0.000317638);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362600() {
   return (neuron0x2356910()*-0.024461);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362640() {
   return (neuron0x2356c50()*-0.0212788);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362680() {
   return (neuron0x2356f90()*-0.0507812);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23626c0() {
   return (neuron0x23572d0()*-0.122627);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362700() {
   return (neuron0x2357610()*0.00425426);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362740() {
   return (neuron0x2357950()*-0.0664422);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23621d0() {
   return (neuron0x2357c90()*-0.116062);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362210() {
   return (neuron0x23581f0()*0.0896037);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362890() {
   return (neuron0x2358410()*-0.0389648);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23628d0() {
   return (neuron0x2358750()*-0.0901514);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362910() {
   return (neuron0x2358a90()*-0.248048);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362950() {
   return (neuron0x2358dd0()*0.0128107);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362990() {
   return (neuron0x2359110()*0.0596544);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23629d0() {
   return (neuron0x2359450()*0.69189);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362d50() {
   return (neuron0x2354890()*-0.0275906);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362d90() {
   return (neuron0x2354bd0()*0.00543394);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362dd0() {
   return (neuron0x2354f10()*3.26212);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362e10() {
   return (neuron0x2355250()*-0.0264515);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362e50() {
   return (neuron0x2355590()*0.0243795);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362e90() {
   return (neuron0x23558d0()*0.0452462);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362ed0() {
   return (neuron0x2355c10()*0.0379197);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362f10() {
   return (neuron0x2355f50()*0.0318396);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362f50() {
   return (neuron0x2356290()*-0.00851774);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362f90() {
   return (neuron0x23565d0()*-0.0194755);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362fd0() {
   return (neuron0x2356910()*0.0029674);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363010() {
   return (neuron0x2356c50()*-1.23741);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363050() {
   return (neuron0x2356f90()*0.0414224);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363090() {
   return (neuron0x23572d0()*-0.0143261);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23630d0() {
   return (neuron0x2357610()*0.0142832);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363110() {
   return (neuron0x2357950()*-0.00566204);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362ba0() {
   return (neuron0x2357c90()*-0.0213319);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362be0() {
   return (neuron0x23581f0()*-0.0418893);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363260() {
   return (neuron0x2358410()*0.00133071);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23632a0() {
   return (neuron0x2358750()*-0.0318165);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23632e0() {
   return (neuron0x2358a90()*0.0294066);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363320() {
   return (neuron0x2358dd0()*0.00617062);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363360() {
   return (neuron0x2359110()*-0.00666043);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23633a0() {
   return (neuron0x2359450()*5.31687);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363720() {
   return (neuron0x2354890()*-0.0435568);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2354ab0() {
   return (neuron0x2354bd0()*0.0155499);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2354af0() {
   return (neuron0x2354f10()*-0.373656);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2354df0() {
   return (neuron0x2355250()*0.00929451);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2354e30() {
   return (neuron0x2355590()*0.0755858);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2355130() {
   return (neuron0x23558d0()*0.0206456);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2355170() {
   return (neuron0x2355c10()*1.47147e-05);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2355470() {
   return (neuron0x2355f50()*-0.0063069);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23554b0() {
   return (neuron0x2356290()*0.00211309);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23557b0() {
   return (neuron0x23565d0()*-0.0036724);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23557f0() {
   return (neuron0x2356910()*-0.0121447);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2355af0() {
   return (neuron0x2356c50()*0.308883);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2355b30() {
   return (neuron0x2356f90()*-0.08142);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2355e30() {
   return (neuron0x23572d0()*-0.0239287);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2355e70() {
   return (neuron0x2357610()*-0.0172681);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2356170() {
   return (neuron0x2357950()*-0.0395984);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23561b0() {
   return (neuron0x2357c90()*-0.0235729);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23564b0() {
   return (neuron0x23581f0()*-0.0242451);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23564f0() {
   return (neuron0x2358410()*-0.0324169);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23567f0() {
   return (neuron0x2358750()*-0.0156679);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2356830() {
   return (neuron0x2358a90()*-0.0324046);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2356b30() {
   return (neuron0x2358dd0()*0.00736486);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2356b70() {
   return (neuron0x2359110()*-0.000437362);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2356e70() {
   return (neuron0x2359450()*1.2466);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2356eb0() {
   return (neuron0x2354890()*0.439547);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2357b70() {
   return (neuron0x2354bd0()*0.288549);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2357bb0() {
   return (neuron0x2354f10()*0.89032);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363570() {
   return (neuron0x2355250()*0.100649);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23635b0() {
   return (neuron0x2355590()*0.225726);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2357eb0() {
   return (neuron0x23558d0()*-0.238911);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2357ef0() {
   return (neuron0x2355c10()*0.32931);
}

double NNfunction_nn_charge2p_charge2m::synapse0x1297ad0() {
   return (neuron0x2355f50()*-0.202272);
}

double NNfunction_nn_charge2p_charge2m::synapse0x1297b10() {
   return (neuron0x2356290()*-0.0148301);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2358630() {
   return (neuron0x23565d0()*0.144829);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2358670() {
   return (neuron0x2356910()*-0.133642);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2358970() {
   return (neuron0x2356c50()*-0.782734);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23589b0() {
   return (neuron0x2356f90()*-0.104202);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2358cb0() {
   return (neuron0x23572d0()*-0.00740275);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2358cf0() {
   return (neuron0x2357610()*-0.141405);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2358ff0() {
   return (neuron0x2357950()*0.232418);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359030() {
   return (neuron0x2357c90()*-0.00579809);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359330() {
   return (neuron0x23581f0()*0.0916553);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359370() {
   return (neuron0x2358410()*-0.501626);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359670() {
   return (neuron0x2358750()*-0.0440434);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23596b0() {
   return (neuron0x2358a90()*0.327353);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23571b0() {
   return (neuron0x2358dd0()*0.593475);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23571f0() {
   return (neuron0x2359110()*0.550158);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365490() {
   return (neuron0x2359450()*-0.335143);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365810() {
   return (neuron0x2354890()*-0.134637);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365850() {
   return (neuron0x2354bd0()*0.102153);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365890() {
   return (neuron0x2354f10()*-0.648397);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23658d0() {
   return (neuron0x2355250()*0.149627);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365910() {
   return (neuron0x2355590()*0.00987828);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365950() {
   return (neuron0x23558d0()*0.0858784);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365990() {
   return (neuron0x2355c10()*0.305181);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23659d0() {
   return (neuron0x2355f50()*-0.235608);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365a10() {
   return (neuron0x2356290()*0.468583);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365a50() {
   return (neuron0x23565d0()*0.791556);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365a90() {
   return (neuron0x2356910()*0.115808);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365ad0() {
   return (neuron0x2356c50()*0.583674);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365b10() {
   return (neuron0x2356f90()*0.730818);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365b50() {
   return (neuron0x23572d0()*0.427524);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365b90() {
   return (neuron0x2357610()*0.264715);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365bd0() {
   return (neuron0x2357950()*0.55447);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365660() {
   return (neuron0x2357c90()*-0.135343);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23656a0() {
   return (neuron0x23581f0()*1.10908);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365d20() {
   return (neuron0x2358410()*0.960562);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365d60() {
   return (neuron0x2358750()*-0.0422983);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365da0() {
   return (neuron0x2358a90()*0.477624);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365de0() {
   return (neuron0x2358dd0()*0.972958);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365e20() {
   return (neuron0x2359110()*0.602591);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365e60() {
   return (neuron0x2359450()*-0.132692);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23661e0() {
   return (neuron0x2354890()*-0.0265031);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366220() {
   return (neuron0x2354bd0()*-0.00674586);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366260() {
   return (neuron0x2354f10()*-0.669589);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23662a0() {
   return (neuron0x2355250()*0.988679);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23662e0() {
   return (neuron0x2355590()*-0.0141895);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366320() {
   return (neuron0x23558d0()*-6.13648e-06);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366360() {
   return (neuron0x2355c10()*-0.01419);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23663a0() {
   return (neuron0x2355f50()*-0.00598156);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23663e0() {
   return (neuron0x2356290()*0.00262341);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366420() {
   return (neuron0x23565d0()*-0.0227174);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366460() {
   return (neuron0x2356910()*-0.0215581);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23664a0() {
   return (neuron0x2356c50()*0.0844526);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23664e0() {
   return (neuron0x2356f90()*0.0435367);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366520() {
   return (neuron0x23572d0()*-0.0849784);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366560() {
   return (neuron0x2357610()*0.0140296);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23665a0() {
   return (neuron0x2357950()*0.0273874);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366030() {
   return (neuron0x2357c90()*-0.0578285);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366070() {
   return (neuron0x23581f0()*0.0137284);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23666f0() {
   return (neuron0x2358410()*0.0400257);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366730() {
   return (neuron0x2358750()*-0.0196258);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366770() {
   return (neuron0x2358a90()*0.0173597);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23667b0() {
   return (neuron0x2358dd0()*-0.00998188);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23667f0() {
   return (neuron0x2359110()*-0.00168816);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366830() {
   return (neuron0x2359450()*0.301517);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366bb0() {
   return (neuron0x2354890()*-0.463295);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366bf0() {
   return (neuron0x2354bd0()*0.114661);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366c30() {
   return (neuron0x2354f10()*-0.147075);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366c70() {
   return (neuron0x2355250()*-0.486681);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366cb0() {
   return (neuron0x2355590()*0.323365);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366cf0() {
   return (neuron0x23558d0()*0.0900921);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366d30() {
   return (neuron0x2355c10()*-0.00868069);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366d70() {
   return (neuron0x2355f50()*-0.089445);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366db0() {
   return (neuron0x2356290()*0.300431);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366df0() {
   return (neuron0x23565d0()*0.343435);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366e30() {
   return (neuron0x2356910()*0.104297);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366e70() {
   return (neuron0x2356c50()*-0.163273);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366eb0() {
   return (neuron0x2356f90()*-0.570618);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366ef0() {
   return (neuron0x23572d0()*-0.279242);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366f30() {
   return (neuron0x2357610()*0.273914);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366f70() {
   return (neuron0x2357950()*-0.237503);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366a00() {
   return (neuron0x2357c90()*0.0776175);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366a40() {
   return (neuron0x23581f0()*0.125815);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23670c0() {
   return (neuron0x2358410()*-0.323753);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367100() {
   return (neuron0x2358750()*0.021533);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367140() {
   return (neuron0x2358a90()*0.615099);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367180() {
   return (neuron0x2358dd0()*0.504628);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23671c0() {
   return (neuron0x2359110()*0.035124);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367200() {
   return (neuron0x2359450()*-0.502026);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367580() {
   return (neuron0x2354890()*0.135841);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23675c0() {
   return (neuron0x2354bd0()*-0.499223);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367600() {
   return (neuron0x2354f10()*-0.741705);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367640() {
   return (neuron0x2355250()*-0.107442);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367680() {
   return (neuron0x2355590()*-0.175669);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23676c0() {
   return (neuron0x23558d0()*0.159068);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367700() {
   return (neuron0x2355c10()*0.121117);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367740() {
   return (neuron0x2355f50()*-0.334827);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367780() {
   return (neuron0x2356290()*-0.19804);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23677c0() {
   return (neuron0x23565d0()*0.057254);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367800() {
   return (neuron0x2356910()*0.154266);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367840() {
   return (neuron0x2356c50()*0.153123);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367880() {
   return (neuron0x2356f90()*0.0435313);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23678c0() {
   return (neuron0x23572d0()*-0.693161);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367900() {
   return (neuron0x2357610()*0.293035);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367940() {
   return (neuron0x2357950()*-0.429305);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23673d0() {
   return (neuron0x2357c90()*0.0112952);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367410() {
   return (neuron0x23581f0()*-0.243235);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367a90() {
   return (neuron0x2358410()*-0.0444478);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367ad0() {
   return (neuron0x2358750()*-0.839127);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367b10() {
   return (neuron0x2358a90()*0.460719);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367b50() {
   return (neuron0x2358dd0()*-0.128766);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367b90() {
   return (neuron0x2359110()*-0.281217);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367bd0() {
   return (neuron0x2359450()*0.269105);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367f50() {
   return (neuron0x2354890()*-0.0125851);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367f90() {
   return (neuron0x2354bd0()*0.00388045);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367fd0() {
   return (neuron0x2354f10()*-3.01009);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368010() {
   return (neuron0x2355250()*-0.00405506);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368050() {
   return (neuron0x2355590()*-0.0132886);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368090() {
   return (neuron0x23558d0()*-0.0139751);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23680d0() {
   return (neuron0x2355c10()*-0.014235);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368110() {
   return (neuron0x2355f50()*-0.00468452);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368150() {
   return (neuron0x2356290()*-0.00680983);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360310() {
   return (neuron0x23565d0()*-0.0102615);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360350() {
   return (neuron0x2356910()*-0.00712028);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360390() {
   return (neuron0x2356c50()*-0.169954);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23603d0() {
   return (neuron0x2356f90()*-0.0117651);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360410() {
   return (neuron0x23572d0()*-0.00372985);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360450() {
   return (neuron0x2357610()*-0.00481823);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360490() {
   return (neuron0x2357950()*-0.00125609);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367da0() {
   return (neuron0x2357c90()*-0.00953898);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367de0() {
   return (neuron0x23581f0()*-0.0173621);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23605e0() {
   return (neuron0x2358410()*0.0097181);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360620() {
   return (neuron0x2358750()*0.000790419);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360660() {
   return (neuron0x2358a90()*0.00248576);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23606a0() {
   return (neuron0x2358dd0()*0.000741033);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23606e0() {
   return (neuron0x2359110()*0.00179975);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360720() {
   return (neuron0x2359450()*-7.21412);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360aa0() {
   return (neuron0x2354890()*0.00198247);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360ae0() {
   return (neuron0x2354bd0()*-0.00182308);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360b20() {
   return (neuron0x2354f10()*0.376871);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360b60() {
   return (neuron0x2355250()*0.0190717);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360ba0() {
   return (neuron0x2355590()*0.0139023);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360be0() {
   return (neuron0x23558d0()*0.0184311);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360c20() {
   return (neuron0x2355c10()*0.020285);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360c60() {
   return (neuron0x2355f50()*-0.00913368);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360ca0() {
   return (neuron0x2356290()*0.0186747);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360ce0() {
   return (neuron0x23565d0()*0.0127888);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360d20() {
   return (neuron0x2356910()*-0.0110272);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360d60() {
   return (neuron0x2356c50()*-0.387984);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360da0() {
   return (neuron0x2356f90()*-0.435181);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360de0() {
   return (neuron0x23572d0()*0.119688);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360e20() {
   return (neuron0x2357610()*-0.192315);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360e60() {
   return (neuron0x2357950()*-0.149961);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23608f0() {
   return (neuron0x2357c90()*0.0451707);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360930() {
   return (neuron0x23581f0()*-0.190273);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360fb0() {
   return (neuron0x2358410()*-0.164421);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360ff0() {
   return (neuron0x2358750()*0.00127256);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361030() {
   return (neuron0x2358a90()*-4.00158e-05);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361070() {
   return (neuron0x2358dd0()*0.0114041);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23610b0() {
   return (neuron0x2359110()*0.00767396);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23610f0() {
   return (neuron0x2359450()*0.91864);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23612c0() {
   return (neuron0x2354890()*0.213865);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a350() {
   return (neuron0x2354bd0()*0.0239354);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a390() {
   return (neuron0x2354f10()*0.429491);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a3d0() {
   return (neuron0x2355250()*-0.044505);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a410() {
   return (neuron0x2355590()*-0.0412064);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a450() {
   return (neuron0x23558d0()*0.0158673);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a490() {
   return (neuron0x2355c10()*0.00760106);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a4d0() {
   return (neuron0x2355f50()*0.020466);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a510() {
   return (neuron0x2356290()*-0.0291283);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a550() {
   return (neuron0x23565d0()*-0.224217);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a590() {
   return (neuron0x2356910()*0.0453378);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a5d0() {
   return (neuron0x2356c50()*-0.135658);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a610() {
   return (neuron0x2356f90()*-0.118339);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a650() {
   return (neuron0x23572d0()*0.0653692);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a690() {
   return (neuron0x2357610()*-0.225684);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a6d0() {
   return (neuron0x2357950()*-0.297303);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a1a0() {
   return (neuron0x2357c90()*-0.157224);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a1e0() {
   return (neuron0x23581f0()*-0.278737);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a820() {
   return (neuron0x2358410()*0.242895);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a860() {
   return (neuron0x2358750()*-0.0337386);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a8a0() {
   return (neuron0x2358a90()*-0.0111083);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a8e0() {
   return (neuron0x2358dd0()*0.000543628);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a920() {
   return (neuron0x2359110()*-0.0742392);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a960() {
   return (neuron0x2359450()*-0.343256);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ace0() {
   return (neuron0x2354890()*0.0402589);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ad20() {
   return (neuron0x2354bd0()*-0.050602);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ad60() {
   return (neuron0x2354f10()*0.444531);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ada0() {
   return (neuron0x2355250()*0.099441);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ade0() {
   return (neuron0x2355590()*-0.783591);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ae20() {
   return (neuron0x23558d0()*-0.0306854);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ae60() {
   return (neuron0x2355c10()*0.0126756);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236aea0() {
   return (neuron0x2355f50()*0.0130843);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236aee0() {
   return (neuron0x2356290()*0.0862861);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236af20() {
   return (neuron0x23565d0()*-0.0178849);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236af60() {
   return (neuron0x2356910()*0.0282585);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236afa0() {
   return (neuron0x2356c50()*0.131001);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236afe0() {
   return (neuron0x2356f90()*0.0239155);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b020() {
   return (neuron0x23572d0()*0.158612);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b060() {
   return (neuron0x2357610()*-0.0714416);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b0a0() {
   return (neuron0x2357950()*0.0662033);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ab30() {
   return (neuron0x2357c90()*0.184262);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ab70() {
   return (neuron0x23581f0()*-0.0944669);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b1f0() {
   return (neuron0x2358410()*-0.0285088);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b230() {
   return (neuron0x2358750()*0.0951013);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b270() {
   return (neuron0x2358a90()*0.408934);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b2b0() {
   return (neuron0x2358dd0()*0.00315262);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b2f0() {
   return (neuron0x2359110()*-0.10715);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b330() {
   return (neuron0x2359450()*0.761191);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b6b0() {
   return (neuron0x2354890()*-0.0250419);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b6f0() {
   return (neuron0x2354bd0()*0.0117753);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b730() {
   return (neuron0x2354f10()*-1.08838);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b770() {
   return (neuron0x2355250()*-0.525353);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b7b0() {
   return (neuron0x2355590()*0.00951715);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b7f0() {
   return (neuron0x23558d0()*-0.0140834);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b830() {
   return (neuron0x2355c10()*-0.0438331);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b870() {
   return (neuron0x2355f50()*0.0151733);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b8b0() {
   return (neuron0x2356290()*-0.0238619);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b8f0() {
   return (neuron0x23565d0()*0.00820593);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b930() {
   return (neuron0x2356910()*-0.0197238);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b970() {
   return (neuron0x2356c50()*0.229881);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b9b0() {
   return (neuron0x2356f90()*0.0995787);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b9f0() {
   return (neuron0x23572d0()*-0.0664478);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ba30() {
   return (neuron0x2357610()*0.0473135);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ba70() {
   return (neuron0x2357950()*0.0421978);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b500() {
   return (neuron0x2357c90()*-0.0527752);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b540() {
   return (neuron0x23581f0()*0.0519856);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236bbc0() {
   return (neuron0x2358410()*0.0369681);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236bc00() {
   return (neuron0x2358750()*0.0346245);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236bc40() {
   return (neuron0x2358a90()*0.0311355);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236bc80() {
   return (neuron0x2358dd0()*-0.011524);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236bcc0() {
   return (neuron0x2359110()*-0.0218885);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236bd00() {
   return (neuron0x2359450()*0.145049);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c080() {
   return (neuron0x2354890()*0.135857);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c0c0() {
   return (neuron0x2354bd0()*0.137121);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c100() {
   return (neuron0x2354f10()*-0.773613);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c140() {
   return (neuron0x2355250()*-0.281034);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c180() {
   return (neuron0x2355590()*0.371745);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c1c0() {
   return (neuron0x23558d0()*0.167331);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c200() {
   return (neuron0x2355c10()*0.00662891);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c240() {
   return (neuron0x2355f50()*0.320051);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c280() {
   return (neuron0x2356290()*0.130806);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c2c0() {
   return (neuron0x23565d0()*0.382422);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c300() {
   return (neuron0x2356910()*0.177909);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c340() {
   return (neuron0x2356c50()*-0.025203);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c380() {
   return (neuron0x2356f90()*0.199025);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c3c0() {
   return (neuron0x23572d0()*0.192714);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c400() {
   return (neuron0x2357610()*0.0456352);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c440() {
   return (neuron0x2357950()*-0.184266);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236bed0() {
   return (neuron0x2357c90()*0.135722);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236bf10() {
   return (neuron0x23581f0()*0.13853);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c590() {
   return (neuron0x2358410()*0.231447);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c5d0() {
   return (neuron0x2358750()*-0.184955);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c610() {
   return (neuron0x2358a90()*0.586827);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c650() {
   return (neuron0x2358dd0()*1.2549);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c690() {
   return (neuron0x2359110()*1.10468);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c6d0() {
   return (neuron0x2359450()*0.118973);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ca50() {
   return (neuron0x2354890()*0.0922459);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ca90() {
   return (neuron0x2354bd0()*-0.143037);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cad0() {
   return (neuron0x2354f10()*-0.508625);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cb10() {
   return (neuron0x2355250()*-0.20285);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cb50() {
   return (neuron0x2355590()*0.380227);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cb90() {
   return (neuron0x23558d0()*0.256248);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cbd0() {
   return (neuron0x2355c10()*-0.103119);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cc10() {
   return (neuron0x2355f50()*-0.270547);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cc50() {
   return (neuron0x2356290()*-0.302118);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cc90() {
   return (neuron0x23565d0()*0.0243944);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ccd0() {
   return (neuron0x2356910()*-0.190758);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cd10() {
   return (neuron0x2356c50()*-0.289397);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cd50() {
   return (neuron0x2356f90()*-0.138877);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cd90() {
   return (neuron0x23572d0()*0.0768732);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cdd0() {
   return (neuron0x2357610()*-0.12411);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ce10() {
   return (neuron0x2357950()*-0.399553);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c8a0() {
   return (neuron0x2357c90()*-0.434437);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c8e0() {
   return (neuron0x23581f0()*0.183624);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cf60() {
   return (neuron0x2358410()*0.237337);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cfa0() {
   return (neuron0x2358750()*-0.316858);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236cfe0() {
   return (neuron0x2358a90()*0.0732687);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d020() {
   return (neuron0x2358dd0()*-0.254315);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d060() {
   return (neuron0x2359110()*0.262484);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d0a0() {
   return (neuron0x2359450()*0.220375);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d420() {
   return (neuron0x2354890()*-0.0227752);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d460() {
   return (neuron0x2354bd0()*-0.0654275);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d4a0() {
   return (neuron0x2354f10()*0.196232);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d4e0() {
   return (neuron0x2355250()*-0.00472639);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d520() {
   return (neuron0x2355590()*0.197247);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d560() {
   return (neuron0x23558d0()*0.0996652);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d5a0() {
   return (neuron0x2355c10()*0.25917);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d5e0() {
   return (neuron0x2355f50()*0.00102059);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d620() {
   return (neuron0x2356290()*0.134367);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d660() {
   return (neuron0x23565d0()*0.25191);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d6a0() {
   return (neuron0x2356910()*0.0225612);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d6e0() {
   return (neuron0x2356c50()*0.0805887);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d720() {
   return (neuron0x2356f90()*-0.137137);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d760() {
   return (neuron0x23572d0()*0.214616);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d7a0() {
   return (neuron0x2357610()*0.279492);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d7e0() {
   return (neuron0x2357950()*-0.0149073);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d270() {
   return (neuron0x2357c90()*0.258271);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d2b0() {
   return (neuron0x23581f0()*-0.0423339);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d930() {
   return (neuron0x2358410()*0.162168);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d970() {
   return (neuron0x2358750()*0.149515);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d9b0() {
   return (neuron0x2358a90()*0.210766);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d9f0() {
   return (neuron0x2358dd0()*0.319558);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236da30() {
   return (neuron0x2359110()*0.0630177);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236da70() {
   return (neuron0x2359450()*-0.291302);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ddf0() {
   return (neuron0x2354890()*0.000784554);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236de30() {
   return (neuron0x2354bd0()*0.00417166);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236de70() {
   return (neuron0x2354f10()*-0.967892);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236deb0() {
   return (neuron0x2355250()*0.00280303);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236def0() {
   return (neuron0x2355590()*-0.0128506);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236df30() {
   return (neuron0x23558d0()*-0.00701351);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236df70() {
   return (neuron0x2355c10()*-0.00643181);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236dfb0() {
   return (neuron0x2355f50()*0.0021205);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236dff0() {
   return (neuron0x2356290()*0.00151213);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e030() {
   return (neuron0x23565d0()*0.00820603);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e070() {
   return (neuron0x2356910()*0.000602432);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e0b0() {
   return (neuron0x2356c50()*7.22065);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e0f0() {
   return (neuron0x2356f90()*-0.00769737);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e130() {
   return (neuron0x23572d0()*-0.0169434);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e170() {
   return (neuron0x2357610()*0.000858075);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e1b0() {
   return (neuron0x2357950()*-0.00204597);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236dc40() {
   return (neuron0x2357c90()*0.0190584);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236dc80() {
   return (neuron0x23581f0()*0.0178129);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e300() {
   return (neuron0x2358410()*0.00882529);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e340() {
   return (neuron0x2358750()*-0.00273881);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e380() {
   return (neuron0x2358a90()*0.00515729);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e3c0() {
   return (neuron0x2358dd0()*0.00076033);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e400() {
   return (neuron0x2359110()*-0.00159866);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e440() {
   return (neuron0x2359450()*0.237575);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e7c0() {
   return (neuron0x2354890()*-0.00099986);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e800() {
   return (neuron0x2354bd0()*0.00294278);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e840() {
   return (neuron0x2354f10()*-1.38985);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e880() {
   return (neuron0x2355250()*-0.00203558);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e8c0() {
   return (neuron0x2355590()*0.0411773);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e900() {
   return (neuron0x23558d0()*0.00286846);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e940() {
   return (neuron0x2355c10()*0.00653381);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e980() {
   return (neuron0x2355f50()*-0.00260521);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e9c0() {
   return (neuron0x2356290()*0.00218674);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ea00() {
   return (neuron0x23565d0()*0.0030613);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ea40() {
   return (neuron0x2356910()*0.00431011);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ea80() {
   return (neuron0x2356c50()*-0.159182);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236eac0() {
   return (neuron0x2356f90()*0.0147711);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236eb00() {
   return (neuron0x23572d0()*-0.0145709);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236eb40() {
   return (neuron0x2357610()*0.00339651);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236eb80() {
   return (neuron0x2357950()*-0.00597733);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e610() {
   return (neuron0x2357c90()*-0.0134353);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236e650() {
   return (neuron0x23581f0()*0.0130541);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ecd0() {
   return (neuron0x2358410()*0.00442297);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ed10() {
   return (neuron0x2358750()*-0.00401163);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ed50() {
   return (neuron0x2358a90()*-0.0142665);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ed90() {
   return (neuron0x2358dd0()*-0.00170039);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236edd0() {
   return (neuron0x2359110()*0.00648382);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ee10() {
   return (neuron0x2359450()*-1.11248);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236f190() {
   return (neuron0x2354890()*-0.0682728);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363760() {
   return (neuron0x2354bd0()*0.015374);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23637a0() {
   return (neuron0x2354f10()*0.328151);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23637e0() {
   return (neuron0x2355250()*0.000186711);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363a30() {
   return (neuron0x2355590()*0.349654);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363a70() {
   return (neuron0x23558d0()*0.0351875);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363ab0() {
   return (neuron0x2355c10()*-0.00210242);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363d00() {
   return (neuron0x2355f50()*-0.0540811);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363d40() {
   return (neuron0x2356290()*-0.0350982);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363f90() {
   return (neuron0x23565d0()*-0.00498647);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363fd0() {
   return (neuron0x2356910()*-0.0376349);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364010() {
   return (neuron0x2356c50()*-0.00483118);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364260() {
   return (neuron0x2356f90()*-0.0360931);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23642a0() {
   return (neuron0x23572d0()*-0.147731);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23644f0() {
   return (neuron0x2357610()*0.0186089);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364530() {
   return (neuron0x2357950()*-0.0557642);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236efe0() {
   return (neuron0x2357c90()*-0.122254);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236f020() {
   return (neuron0x23581f0()*0.119002);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364680() {
   return (neuron0x2358410()*-0.0378733);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364b90() {
   return (neuron0x2358750()*-0.097944);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364bd0() {
   return (neuron0x2358a90()*-0.27404);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364c10() {
   return (neuron0x2358dd0()*0.01315);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364e60() {
   return (neuron0x2359110()*0.0595102);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364ea0() {
   return (neuron0x2359450()*0.026803);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364750() {
   return (neuron0x2354890()*0.0380019);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364790() {
   return (neuron0x2354bd0()*-0.00724167);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23647d0() {
   return (neuron0x2354f10()*-0.809722);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364810() {
   return (neuron0x2355250()*0.0319062);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365190() {
   return (neuron0x2355590()*-0.0922318);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23714e0() {
   return (neuron0x23558d0()*-0.0334937);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371520() {
   return (neuron0x2355c10()*0.00969532);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371560() {
   return (neuron0x2355f50()*-0.00174734);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23715a0() {
   return (neuron0x2356290()*0.0114793);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23715e0() {
   return (neuron0x23565d0()*-0.00209993);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371620() {
   return (neuron0x2356910()*-0.00311073);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371660() {
   return (neuron0x2356c50()*0.0933005);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23716a0() {
   return (neuron0x2356f90()*0.0358461);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23716e0() {
   return (neuron0x23572d0()*0.0186599);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371720() {
   return (neuron0x2357610()*0.022191);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371760() {
   return (neuron0x2357950()*0.028385);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365070() {
   return (neuron0x2357c90()*0.048604);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23650b0() {
   return (neuron0x23581f0()*0.0349237);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23718b0() {
   return (neuron0x2358410()*0.0209766);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23718f0() {
   return (neuron0x2358750()*0.0205937);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371930() {
   return (neuron0x2358a90()*0.0109598);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371970() {
   return (neuron0x2358dd0()*0.00679377);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23719b0() {
   return (neuron0x2359110()*-0.000795363);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23719f0() {
   return (neuron0x2359450()*-0.860711);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371d70() {
   return (neuron0x2354890()*-0.189863);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371db0() {
   return (neuron0x2354bd0()*-0.512131);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371df0() {
   return (neuron0x2354f10()*1.04328);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371e30() {
   return (neuron0x2355250()*0.630144);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371e70() {
   return (neuron0x2355590()*0.394779);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371eb0() {
   return (neuron0x23558d0()*-0.514473);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371ef0() {
   return (neuron0x2355c10()*-0.190552);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371f30() {
   return (neuron0x2355f50()*-0.492036);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371f70() {
   return (neuron0x2356290()*-0.126118);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371fb0() {
   return (neuron0x23565d0()*-0.547509);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371ff0() {
   return (neuron0x2356910()*-0.147617);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372030() {
   return (neuron0x2356c50()*-0.432077);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372070() {
   return (neuron0x2356f90()*-0.513757);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23720b0() {
   return (neuron0x23572d0()*0.261063);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23720f0() {
   return (neuron0x2357610()*0.24535);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372130() {
   return (neuron0x2357950()*-0.128033);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371bc0() {
   return (neuron0x2357c90()*-0.4322);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371c00() {
   return (neuron0x23581f0()*0.0101026);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372280() {
   return (neuron0x2358410()*0.0653643);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23722c0() {
   return (neuron0x2358750()*0.260311);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372300() {
   return (neuron0x2358a90()*0.219497);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372340() {
   return (neuron0x2358dd0()*-0.0438198);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372380() {
   return (neuron0x2359110()*-0.0874337);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23723c0() {
   return (neuron0x2359450()*0.704876);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372740() {
   return (neuron0x2354890()*0.0437289);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372780() {
   return (neuron0x2354bd0()*-0.00561735);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23727c0() {
   return (neuron0x2354f10()*0.367044);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372800() {
   return (neuron0x2355250()*0.38684);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372840() {
   return (neuron0x2355590()*0.00995558);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372880() {
   return (neuron0x23558d0()*0.00659959);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23728c0() {
   return (neuron0x2355c10()*0.0205994);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372900() {
   return (neuron0x2355f50()*-0.00190058);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372940() {
   return (neuron0x2356290()*0.0252063);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372980() {
   return (neuron0x23565d0()*0.00613195);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23729c0() {
   return (neuron0x2356910()*0.00610888);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372a00() {
   return (neuron0x2356c50()*-0.222703);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372a40() {
   return (neuron0x2356f90()*-0.0189994);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372a80() {
   return (neuron0x23572d0()*0.0405925);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372ac0() {
   return (neuron0x2357610()*-0.031871);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372b00() {
   return (neuron0x2357950()*-0.0590821);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372590() {
   return (neuron0x2357c90()*0.0048614);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23725d0() {
   return (neuron0x23581f0()*-0.027921);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372c50() {
   return (neuron0x2358410()*-0.0328941);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372c90() {
   return (neuron0x2358750()*-0.0128759);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372cd0() {
   return (neuron0x2358a90()*-0.0117133);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372d10() {
   return (neuron0x2358dd0()*0.0224367);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372d50() {
   return (neuron0x2359110()*0.00629238);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372d90() {
   return (neuron0x2359450()*-0.138449);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373110() {
   return (neuron0x2354890()*0.221878);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373150() {
   return (neuron0x2354bd0()*0.320515);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373190() {
   return (neuron0x2354f10()*-0.209987);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23731d0() {
   return (neuron0x2355250()*-0.603848);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373210() {
   return (neuron0x2355590()*0.268951);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373250() {
   return (neuron0x23558d0()*0.12584);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373290() {
   return (neuron0x2355c10()*-0.109798);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23732d0() {
   return (neuron0x2355f50()*-0.111855);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373310() {
   return (neuron0x2356290()*0.258277);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373350() {
   return (neuron0x23565d0()*-0.484967);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373390() {
   return (neuron0x2356910()*-0.156814);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23733d0() {
   return (neuron0x2356c50()*0.0688286);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373410() {
   return (neuron0x2356f90()*0.268216);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373450() {
   return (neuron0x23572d0()*-0.539469);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373490() {
   return (neuron0x2357610()*-0.393234);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23734d0() {
   return (neuron0x2357950()*-0.309154);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372f60() {
   return (neuron0x2357c90()*-0.149832);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2372fa0() {
   return (neuron0x23581f0()*0.458729);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373620() {
   return (neuron0x2358410()*0.192576);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373660() {
   return (neuron0x2358750()*0.266795);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23736a0() {
   return (neuron0x2358a90()*-0.667655);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23736e0() {
   return (neuron0x2358dd0()*-0.185082);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373720() {
   return (neuron0x2359110()*-0.734385);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373760() {
   return (neuron0x2359450()*0.502152);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373ae0() {
   return (neuron0x2354890()*0.0341145);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373b20() {
   return (neuron0x2354bd0()*-0.00301535);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373b60() {
   return (neuron0x2354f10()*-0.179423);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373ba0() {
   return (neuron0x2355250()*-0.014567);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373be0() {
   return (neuron0x2355590()*-0.254965);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373c20() {
   return (neuron0x23558d0()*-0.0105089);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373c60() {
   return (neuron0x2355c10()*-0.0199589);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373ca0() {
   return (neuron0x2355f50()*0.0542472);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373ce0() {
   return (neuron0x2356290()*-0.00122842);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373d20() {
   return (neuron0x23565d0()*-0.00838199);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373d60() {
   return (neuron0x2356910()*0.0416356);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373da0() {
   return (neuron0x2356c50()*-0.0775472);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373de0() {
   return (neuron0x2356f90()*-0.0152048);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373e20() {
   return (neuron0x23572d0()*0.126937);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373e60() {
   return (neuron0x2357610()*-0.0221368);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373ea0() {
   return (neuron0x2357950()*0.0193006);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373930() {
   return (neuron0x2357c90()*0.0772471);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373970() {
   return (neuron0x23581f0()*-0.15398);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373ff0() {
   return (neuron0x2358410()*0.0352862);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374030() {
   return (neuron0x2358750()*0.0823341);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374070() {
   return (neuron0x2358a90()*0.239533);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23740b0() {
   return (neuron0x2358dd0()*-0.0321142);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23740f0() {
   return (neuron0x2359110()*-0.0496211);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374130() {
   return (neuron0x2359450()*0.288691);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23744b0() {
   return (neuron0x2354890()*0.116579);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23744f0() {
   return (neuron0x2354bd0()*-0.0642444);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374530() {
   return (neuron0x2354f10()*0.104788);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374570() {
   return (neuron0x2355250()*0.283211);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23745b0() {
   return (neuron0x2355590()*0.0485875);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23745f0() {
   return (neuron0x23558d0()*0.0871814);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374630() {
   return (neuron0x2355c10()*0.395139);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374670() {
   return (neuron0x2355f50()*-0.106535);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23746b0() {
   return (neuron0x2356290()*0.241444);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23746f0() {
   return (neuron0x23565d0()*0.149625);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374730() {
   return (neuron0x2356910()*0.0806446);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374770() {
   return (neuron0x2356c50()*0.421022);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23747b0() {
   return (neuron0x2356f90()*0.546969);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23747f0() {
   return (neuron0x23572d0()*-0.321642);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374830() {
   return (neuron0x2357610()*0.553232);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374870() {
   return (neuron0x2357950()*0.737213);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374300() {
   return (neuron0x2357c90()*-0.00416407);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374340() {
   return (neuron0x23581f0()*0.25537);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23749c0() {
   return (neuron0x2358410()*-0.0207897);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374a00() {
   return (neuron0x2358750()*0.189101);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374a40() {
   return (neuron0x2358a90()*-0.313247);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374a80() {
   return (neuron0x2358dd0()*-0.126107);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374ac0() {
   return (neuron0x2359110()*-0.0687267);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374b00() {
   return (neuron0x2359450()*0.180047);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374e80() {
   return (neuron0x2354890()*0.0764157);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374ec0() {
   return (neuron0x2354bd0()*0.0148469);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374f00() {
   return (neuron0x2354f10()*1.63692);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374f40() {
   return (neuron0x2355250()*0.0139899);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374f80() {
   return (neuron0x2355590()*0.0195395);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374fc0() {
   return (neuron0x23558d0()*0.0123105);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375000() {
   return (neuron0x2355c10()*0.0117894);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375040() {
   return (neuron0x2355f50()*0.0253492);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375080() {
   return (neuron0x2356290()*0.00396897);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23750c0() {
   return (neuron0x23565d0()*0.0087446);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375100() {
   return (neuron0x2356910()*-0.00650691);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375140() {
   return (neuron0x2356c50()*-0.238872);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375180() {
   return (neuron0x2356f90()*0.0271312);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23751c0() {
   return (neuron0x23572d0()*0.00530421);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375200() {
   return (neuron0x2357610()*0.00463471);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375240() {
   return (neuron0x2357950()*0.014129);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374cd0() {
   return (neuron0x2357c90()*0.0118766);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374d10() {
   return (neuron0x23581f0()*0.0190158);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375390() {
   return (neuron0x2358410()*-0.0159999);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23753d0() {
   return (neuron0x2358750()*0.00407953);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375410() {
   return (neuron0x2358a90()*-0.00277962);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375450() {
   return (neuron0x2358dd0()*0.000269415);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375490() {
   return (neuron0x2359110()*-0.0033992);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23754d0() {
   return (neuron0x2359450()*-2.81619);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375850() {
   return (neuron0x2354890()*0.0428547);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375890() {
   return (neuron0x2354bd0()*-0.0850313);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23758d0() {
   return (neuron0x2354f10()*-0.947551);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375910() {
   return (neuron0x2355250()*-1.3488);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375950() {
   return (neuron0x2355590()*-0.0836485);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375990() {
   return (neuron0x23558d0()*0.050981);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23759d0() {
   return (neuron0x2355c10()*-0.09773);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375a10() {
   return (neuron0x2355f50()*-0.0322989);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375a50() {
   return (neuron0x2356290()*-0.0615138);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375a90() {
   return (neuron0x23565d0()*-0.106616);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375ad0() {
   return (neuron0x2356910()*-0.0218135);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375b10() {
   return (neuron0x2356c50()*-0.135754);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375b50() {
   return (neuron0x2356f90()*0.335099);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375b90() {
   return (neuron0x23572d0()*-0.195912);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375bd0() {
   return (neuron0x2357610()*0.0198635);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375c10() {
   return (neuron0x2357950()*0.11781);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23756a0() {
   return (neuron0x2357c90()*-0.16572);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23756e0() {
   return (neuron0x23581f0()*0.131162);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375d60() {
   return (neuron0x2358410()*0.17766);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375da0() {
   return (neuron0x2358750()*-0.108524);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375de0() {
   return (neuron0x2358a90()*0.0629711);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375e20() {
   return (neuron0x2358dd0()*-0.10625);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375e60() {
   return (neuron0x2359110()*0.0771944);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375ea0() {
   return (neuron0x2359450()*0.771281);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e950() {
   return (neuron0x2354890()*0.0152913);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e990() {
   return (neuron0x2354bd0()*0.0111006);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e9d0() {
   return (neuron0x2354f10()*1.33047);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ea10() {
   return (neuron0x2355250()*-0.00688487);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ea50() {
   return (neuron0x2355590()*0.0534515);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ea90() {
   return (neuron0x23558d0()*0.0377806);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ead0() {
   return (neuron0x2355c10()*-0.000836943);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235eb10() {
   return (neuron0x2355f50()*0.00947384);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376630() {
   return (neuron0x2356290()*-0.000151723);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376670() {
   return (neuron0x23565d0()*-0.0169889);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23766b0() {
   return (neuron0x2356910()*-0.00851643);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23766f0() {
   return (neuron0x2356c50()*-1.97907);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376730() {
   return (neuron0x2356f90()*0.0457972);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376770() {
   return (neuron0x23572d0()*-0.017594);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23767b0() {
   return (neuron0x2357610()*0.0217478);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23767f0() {
   return (neuron0x2357950()*0.0345841);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376070() {
   return (neuron0x2357c90()*-0.0602419);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23760b0() {
   return (neuron0x23581f0()*0.0147752);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376940() {
   return (neuron0x2358410()*0.0145899);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376980() {
   return (neuron0x2358750()*-0.0122001);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23769c0() {
   return (neuron0x2358a90()*0.00195328);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376a00() {
   return (neuron0x2358dd0()*-0.00372543);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376a40() {
   return (neuron0x2359110()*-0.00726233);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376a80() {
   return (neuron0x2359450()*0.78883);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376e00() {
   return (neuron0x2354890()*0.0202922);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376e40() {
   return (neuron0x2354bd0()*-0.0215863);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376e80() {
   return (neuron0x2354f10()*-1.29119);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376ec0() {
   return (neuron0x2355250()*-0.0723431);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376f00() {
   return (neuron0x2355590()*-0.0311916);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376f40() {
   return (neuron0x23558d0()*0.0134602);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376f80() {
   return (neuron0x2355c10()*0.0184791);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376fc0() {
   return (neuron0x2355f50()*-0.00806981);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377000() {
   return (neuron0x2356290()*0.00332458);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377040() {
   return (neuron0x23565d0()*-0.00909894);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377080() {
   return (neuron0x2356910()*0.0172246);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23770c0() {
   return (neuron0x2356c50()*-0.212306);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377100() {
   return (neuron0x2356f90()*0.045188);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377140() {
   return (neuron0x23572d0()*0.0249662);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377180() {
   return (neuron0x2357610()*0.0303066);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23771c0() {
   return (neuron0x2357950()*0.0159429);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376c50() {
   return (neuron0x2357c90()*-0.00457419);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376c90() {
   return (neuron0x23581f0()*-0.0141968);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377310() {
   return (neuron0x2358410()*0.0172751);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377350() {
   return (neuron0x2358750()*-0.0102217);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377390() {
   return (neuron0x2358a90()*0.0165026);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23773d0() {
   return (neuron0x2358dd0()*0.00857149);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377410() {
   return (neuron0x2359110()*0.000787654);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377450() {
   return (neuron0x2359450()*2.6018);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23777d0() {
   return (neuron0x2354890()*0.311791);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377810() {
   return (neuron0x2354bd0()*0.106318);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377850() {
   return (neuron0x2354f10()*-0.655376);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377890() {
   return (neuron0x2355250()*0.235482);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23778d0() {
   return (neuron0x2355590()*0.195095);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377910() {
   return (neuron0x23558d0()*0.113535);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377950() {
   return (neuron0x2355c10()*-0.209499);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377990() {
   return (neuron0x2355f50()*0.161167);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23779d0() {
   return (neuron0x2356290()*0.190822);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377a10() {
   return (neuron0x23565d0()*-0.0670517);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377a50() {
   return (neuron0x2356910()*0.219798);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377a90() {
   return (neuron0x2356c50()*-0.234895);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377ad0() {
   return (neuron0x2356f90()*0.206191);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377b10() {
   return (neuron0x23572d0()*-0.0231888);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377b50() {
   return (neuron0x2357610()*-0.102331);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377b90() {
   return (neuron0x2357950()*0.109334);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377620() {
   return (neuron0x2357c90()*-0.147396);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377660() {
   return (neuron0x23581f0()*-0.144855);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368190() {
   return (neuron0x2358410()*-0.324661);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23681d0() {
   return (neuron0x2358750()*-0.0200739);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368210() {
   return (neuron0x2358a90()*-0.651437);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368250() {
   return (neuron0x2358dd0()*-0.247766);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368290() {
   return (neuron0x2359110()*-0.460971);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23682d0() {
   return (neuron0x2359450()*0.319477);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368650() {
   return (neuron0x2354890()*-0.468884);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368690() {
   return (neuron0x2354bd0()*0.0375922);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23686d0() {
   return (neuron0x2354f10()*0.202743);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368710() {
   return (neuron0x2355250()*-0.242278);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368750() {
   return (neuron0x2355590()*-0.0140653);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368790() {
   return (neuron0x23558d0()*0.134337);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23687d0() {
   return (neuron0x2355c10()*-0.14219);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368810() {
   return (neuron0x2355f50()*0.134834);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368850() {
   return (neuron0x2356290()*-0.258562);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368890() {
   return (neuron0x23565d0()*-0.223959);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23688d0() {
   return (neuron0x2356910()*-0.343699);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368910() {
   return (neuron0x2356c50()*-0.200048);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368950() {
   return (neuron0x2356f90()*0.804516);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368990() {
   return (neuron0x23572d0()*0.411027);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23689d0() {
   return (neuron0x2357610()*-0.235625);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368a10() {
   return (neuron0x2357950()*0.149337);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23684a0() {
   return (neuron0x2357c90()*-0.392277);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23684e0() {
   return (neuron0x23581f0()*0.148234);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368b60() {
   return (neuron0x2358410()*-0.38425);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368ba0() {
   return (neuron0x2358750()*-0.235243);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368be0() {
   return (neuron0x2358a90()*-0.506228);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368c20() {
   return (neuron0x2358dd0()*-0.578533);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368c60() {
   return (neuron0x2359110()*-0.495268);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368ca0() {
   return (neuron0x2359450()*-0.30767);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369020() {
   return (neuron0x2354890()*0.00696737);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369060() {
   return (neuron0x2354bd0()*-0.0124666);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23690a0() {
   return (neuron0x2354f10()*1.07281);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23690e0() {
   return (neuron0x2355250()*-0.0263027);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369120() {
   return (neuron0x2355590()*-0.0380603);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369160() {
   return (neuron0x23558d0()*0.00318685);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23691a0() {
   return (neuron0x2355c10()*0.0153538);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23691e0() {
   return (neuron0x2355f50()*-0.00326367);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369220() {
   return (neuron0x2356290()*0.0130095);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369260() {
   return (neuron0x23565d0()*-0.00541127);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23692a0() {
   return (neuron0x2356910()*0.0161578);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23692e0() {
   return (neuron0x2356c50()*-0.136525);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369320() {
   return (neuron0x2356f90()*0.0106353);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369360() {
   return (neuron0x23572d0()*0.0032578);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23693a0() {
   return (neuron0x2357610()*0.0158845);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23693e0() {
   return (neuron0x2357950()*0.0256538);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368e70() {
   return (neuron0x2357c90()*0.00235706);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368eb0() {
   return (neuron0x23581f0()*0.00302189);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369530() {
   return (neuron0x2358410()*0.00245451);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369570() {
   return (neuron0x2358750()*0.00122603);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23695b0() {
   return (neuron0x2358a90()*0.00834513);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23695f0() {
   return (neuron0x2358dd0()*0.00286244);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369630() {
   return (neuron0x2359110()*-0.00151794);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369670() {
   return (neuron0x2359450()*-1.38528);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23699f0() {
   return (neuron0x2354890()*-0.000963429);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369a30() {
   return (neuron0x2354bd0()*-0.00363972);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369a70() {
   return (neuron0x2354f10()*-1.18825);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369ab0() {
   return (neuron0x2355250()*-0.0150498);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369af0() {
   return (neuron0x2355590()*0.0024449);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369b30() {
   return (neuron0x23558d0()*-0.00635987);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369b70() {
   return (neuron0x2355c10()*-0.00251491);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369bb0() {
   return (neuron0x2355f50()*-0.0103971);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369bf0() {
   return (neuron0x2356290()*0.00356343);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369c30() {
   return (neuron0x23565d0()*0.00170452);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369c70() {
   return (neuron0x2356910()*0.00877275);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369cb0() {
   return (neuron0x2356c50()*0.164814);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369cf0() {
   return (neuron0x2356f90()*-0.0101412);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369d30() {
   return (neuron0x23572d0()*0.00584589);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369d70() {
   return (neuron0x2357610()*-0.0055258);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369db0() {
   return (neuron0x2357950()*-0.00884975);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369840() {
   return (neuron0x2357c90()*0.000772486);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369880() {
   return (neuron0x23581f0()*-0.00371028);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369f00() {
   return (neuron0x2358410()*0.00679291);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369f40() {
   return (neuron0x2358750()*0.00262259);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369f80() {
   return (neuron0x2358a90()*0.005012);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369fc0() {
   return (neuron0x2358dd0()*-0.000172336);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a000() {
   return (neuron0x2359110()*0.00275836);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a040() {
   return (neuron0x2359450()*-4.74737);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237bf10() {
   return (neuron0x2354890()*0.00560913);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237bf50() {
   return (neuron0x2354bd0()*0.00530707);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237bf90() {
   return (neuron0x2354f10()*3.00744);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237bfd0() {
   return (neuron0x2355250()*0.00150712);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c010() {
   return (neuron0x2355590()*0.0223818);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c050() {
   return (neuron0x23558d0()*-0.00304844);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c090() {
   return (neuron0x2355c10()*-0.00386526);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c0d0() {
   return (neuron0x2355f50()*0.00813381);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c110() {
   return (neuron0x2356290()*-0.00316367);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c150() {
   return (neuron0x23565d0()*-0.00331532);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c190() {
   return (neuron0x2356910()*-0.00391521);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c1d0() {
   return (neuron0x2356c50()*-0.0293678);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c210() {
   return (neuron0x2356f90()*0.0173092);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c250() {
   return (neuron0x23572d0()*-0.0209077);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c290() {
   return (neuron0x2357610()*0.000384022);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c2d0() {
   return (neuron0x2357950()*0.00717596);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a080() {
   return (neuron0x2357c90()*0.000715789);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a0c0() {
   return (neuron0x23581f0()*0.00430727);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c420() {
   return (neuron0x2358410()*-0.0120426);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c460() {
   return (neuron0x2358750()*0.00532138);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c4a0() {
   return (neuron0x2358a90()*-0.024973);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c4e0() {
   return (neuron0x2358dd0()*-0.00471327);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c520() {
   return (neuron0x2359110()*0.000557922);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c560() {
   return (neuron0x2359450()*-5.40845);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c8e0() {
   return (neuron0x2354890()*-0.00660698);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c920() {
   return (neuron0x2354bd0()*0.0028977);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c960() {
   return (neuron0x2354f10()*-1.02942);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c9a0() {
   return (neuron0x2355250()*0.0302942);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c9e0() {
   return (neuron0x2355590()*-0.0309017);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237ca20() {
   return (neuron0x23558d0()*-0.0166478);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237ca60() {
   return (neuron0x2355c10()*-0.00791732);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237caa0() {
   return (neuron0x2355f50()*-0.00200209);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cae0() {
   return (neuron0x2356290()*-0.014653);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cb20() {
   return (neuron0x23565d0()*-0.0214989);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cb60() {
   return (neuron0x2356910()*-0.0157202);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cba0() {
   return (neuron0x2356c50()*0.1739);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cbe0() {
   return (neuron0x2356f90()*0.0837704);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cc20() {
   return (neuron0x23572d0()*-0.0159693);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cc60() {
   return (neuron0x2357610()*0.040419);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cca0() {
   return (neuron0x2357950()*0.024104);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c730() {
   return (neuron0x2357c90()*-0.000191844);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c770() {
   return (neuron0x23581f0()*0.0366958);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cdf0() {
   return (neuron0x2358410()*0.0451558);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237ce30() {
   return (neuron0x2358750()*0.00325379);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237ce70() {
   return (neuron0x2358a90()*-0.00663328);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237ceb0() {
   return (neuron0x2358dd0()*-0.00503005);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cef0() {
   return (neuron0x2359110()*0.00421726);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237cf30() {
   return (neuron0x2359450()*1.03066);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d2b0() {
   return (neuron0x2354890()*0.0886759);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d2f0() {
   return (neuron0x2354bd0()*-0.0963734);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d330() {
   return (neuron0x2354f10()*0.26977);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d370() {
   return (neuron0x2355250()*-0.510421);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d3b0() {
   return (neuron0x2355590()*-0.038672);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d3f0() {
   return (neuron0x23558d0()*-0.160105);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d430() {
   return (neuron0x2355c10()*-0.0705865);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d470() {
   return (neuron0x2355f50()*-0.182234);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d4b0() {
   return (neuron0x2356290()*0.00963782);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d4f0() {
   return (neuron0x23565d0()*-0.0359995);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d530() {
   return (neuron0x2356910()*0.0459834);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d570() {
   return (neuron0x2356c50()*0.185779);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d5b0() {
   return (neuron0x2356f90()*-0.00195239);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d5f0() {
   return (neuron0x23572d0()*0.0356855);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d630() {
   return (neuron0x2357610()*0.117591);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d670() {
   return (neuron0x2357950()*0.0380695);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d100() {
   return (neuron0x2357c90()*0.133014);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d140() {
   return (neuron0x23581f0()*0.00828641);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d7c0() {
   return (neuron0x2358410()*-0.0427955);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d800() {
   return (neuron0x2358750()*-0.150807);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d840() {
   return (neuron0x2358a90()*0.266438);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d880() {
   return (neuron0x2358dd0()*0.0583418);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d8c0() {
   return (neuron0x2359110()*0.221079);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d900() {
   return (neuron0x2359450()*-0.407894);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dc80() {
   return (neuron0x2354890()*-0.000413915);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dcc0() {
   return (neuron0x2354bd0()*0.00221388);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dd00() {
   return (neuron0x2354f10()*0.447208);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dd40() {
   return (neuron0x2355250()*-0.0201179);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dd80() {
   return (neuron0x2355590()*-0.0213873);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237ddc0() {
   return (neuron0x23558d0()*0.00957295);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237de00() {
   return (neuron0x2355c10()*0.00637548);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237de40() {
   return (neuron0x2355f50()*0.00558529);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237de80() {
   return (neuron0x2356290()*0.00471293);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dec0() {
   return (neuron0x23565d0()*0.00353522);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237df00() {
   return (neuron0x2356910()*0.00196954);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237df40() {
   return (neuron0x2356c50()*-0.106254);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237df80() {
   return (neuron0x2356f90()*-0.0233577);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dfc0() {
   return (neuron0x23572d0()*0.0250418);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e000() {
   return (neuron0x2357610()*-0.019806);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e040() {
   return (neuron0x2357950()*-0.00957256);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dad0() {
   return (neuron0x2357c90()*-0.00299602);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237db10() {
   return (neuron0x23581f0()*-0.0265438);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e190() {
   return (neuron0x2358410()*-0.0101949);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e1d0() {
   return (neuron0x2358750()*0.00868463);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e210() {
   return (neuron0x2358a90()*0.0292555);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e250() {
   return (neuron0x2358dd0()*-0.00644531);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e290() {
   return (neuron0x2359110()*-0.00624317);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e2d0() {
   return (neuron0x2359450()*1.41156);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211e1a0() {
   return (neuron0x23598c0()*0.00367825);
}

double NNfunction_nn_charge2p_charge2m::synapse0x211e1e0() {
   return (neuron0x235a210()*-0.0158942);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235bd80() {
   return (neuron0x235acf0()*-1.39541);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235bdc0() {
   return (neuron0x235a790()*0.0034378);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c750() {
   return (neuron0x235bad0()*0.87651);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235c790() {
   return (neuron0x235c4a0()*-1.29636);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d520() {
   return (neuron0x235d270()*0.737226);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235d560() {
   return (neuron0x235dc40()*0.0927786);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235def0() {
   return (neuron0x235e610()*0.657627);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235df30() {
   return (neuron0x235f0f0()*-0.542571);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e8c0() {
   return (neuron0x235fac0()*0.632754);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235e900() {
   return (neuron0x235cba0()*-0.647022);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f3a0() {
   return (neuron0x2361670()*-0.0849383);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235f3e0() {
   return (neuron0x2362040()*0.54961);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fd70() {
   return (neuron0x2362a10()*0.53577);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235fdb0() {
   return (neuron0x23633e0()*0.0692318);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ce50() {
   return (neuron0x23651f0()*-0.0128386);
}

double NNfunction_nn_charge2p_charge2m::synapse0x235ce90() {
   return (neuron0x23654d0()*0.0171951);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361920() {
   return (neuron0x2365ea0()*0.466215);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2361960() {
   return (neuron0x2366870()*-0.0158529);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23622f0() {
   return (neuron0x2367240()*-0.00797918);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362330() {
   return (neuron0x2367c10()*-0.0543374);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362cc0() {
   return (neuron0x2360760()*0.891432);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2362d00() {
   return (neuron0x2361130()*-0.0922649);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2363690() {
   return (neuron0x236a9a0()*-0.0312783);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23636d0() {
   return (neuron0x236b370()*0.123329);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2357830() {
   return (neuron0x236bd40()*0.000894288);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2357870() {
   return (neuron0x236c710()*-0.0950598);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2365780() {
   return (neuron0x236d0e0()*0.0181699);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23657c0() {
   return (neuron0x236dab0()*-1.14012);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366150() {
   return (neuron0x236e480()*0.107171);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366190() {
   return (neuron0x236ee50()*-0.736051);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366b20() {
   return (neuron0x2364ee0()*-0.86996);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2366b60() {
   return (neuron0x2371a30()*0.0111067);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23674f0() {
   return (neuron0x2372400()*-0.752933);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367530() {
   return (neuron0x2372dd0()*0.0170014);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367ec0() {
   return (neuron0x23737a0()*-0.752598);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2367f00() {
   return (neuron0x2374170()*0.0495316);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360a10() {
   return (neuron0x2374b40()*-1.8548);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2360a50() {
   return (neuron0x2375510()*0.00427329);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a2c0() {
   return (neuron0x2375ee0()*-0.917781);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236a300() {
   return (neuron0x2376ac0()*0.816616);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ac50() {
   return (neuron0x2377490()*0.0535569);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ac90() {
   return (neuron0x2368310()*-0.0371603);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b620() {
   return (neuron0x2368ce0()*-0.0437797);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236b660() {
   return (neuron0x23696b0()*-0.542753);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236bff0() {
   return (neuron0x237bcf0()*-1.14029);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c030() {
   return (neuron0x237c5a0()*1.4373);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236c9c0() {
   return (neuron0x237cf70()*0.125294);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236ca00() {
   return (neuron0x237d940()*0.542634);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236f100() {
   return (neuron0x23598c0()*0.00370946);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236f140() {
   return (neuron0x235a210()*-0.00590893);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23646c0() {
   return (neuron0x235acf0()*0.934426);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2364700() {
   return (neuron0x235a790()*0.00384239);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371ce0() {
   return (neuron0x235bad0()*-1.99221);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2371d20() {
   return (neuron0x235c4a0()*-1.65108);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23726b0() {
   return (neuron0x235d270()*1.73159);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23726f0() {
   return (neuron0x235dc40()*0.324567);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373080() {
   return (neuron0x235e610()*-1.4422);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23730c0() {
   return (neuron0x235f0f0()*0.84375);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373a50() {
   return (neuron0x235fac0()*0.762163);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2373a90() {
   return (neuron0x235cba0()*-1.55644);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374420() {
   return (neuron0x2361670()*0.0171107);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374460() {
   return (neuron0x2362040()*-0.378659);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374df0() {
   return (neuron0x2362a10()*1.27418);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2374e30() {
   return (neuron0x23633e0()*-1.78306);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23757c0() {
   return (neuron0x23651f0()*-0.00933556);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2375800() {
   return (neuron0x23654d0()*-0.0201391);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376190() {
   return (neuron0x2365ea0()*1.47159);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23761d0() {
   return (neuron0x2366870()*-0.0823426);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376d70() {
   return (neuron0x2367240()*-0.0665071);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2376db0() {
   return (neuron0x2367c10()*0.34474);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377740() {
   return (neuron0x2360760()*-0.466714);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2377780() {
   return (neuron0x2361130()*0.0871948);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23685c0() {
   return (neuron0x236a9a0()*-0.0325071);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368600() {
   return (neuron0x236b370()*1.33092);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368f90() {
   return (neuron0x236bd40()*0.0112313);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2368fd0() {
   return (neuron0x236c710()*-0.0560633);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2369960() {
   return (neuron0x236d0e0()*0.24444);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23699a0() {
   return (neuron0x236dab0()*-0.658197);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237be80() {
   return (neuron0x236e480()*0.532724);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237bec0() {
   return (neuron0x236ee50()*1.31805);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c850() {
   return (neuron0x2364ee0()*0.28035);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237c890() {
   return (neuron0x2371a30()*-0.0350274);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d220() {
   return (neuron0x2372400()*-0.751643);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237d260() {
   return (neuron0x2372dd0()*0.00488785);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dbf0() {
   return (neuron0x23737a0()*-0.547819);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237dc30() {
   return (neuron0x2374170()*0.0429738);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359ae0() {
   return (neuron0x2374b40()*0.658921);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2359b20() {
   return (neuron0x2375510()*0.0783783);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d390() {
   return (neuron0x2375ee0()*0.127856);
}

double NNfunction_nn_charge2p_charge2m::synapse0x236d3d0() {
   return (neuron0x2376ac0()*1.06606);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e310() {
   return (neuron0x2377490()*0.0100758);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e350() {
   return (neuron0x2368310()*0.0645674);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e390() {
   return (neuron0x2368ce0()*0.561662);
}

double NNfunction_nn_charge2p_charge2m::synapse0x237e3d0() {
   return (neuron0x23696b0()*-0.0393016);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385280() {
   return (neuron0x237bcf0()*1.63413);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23852c0() {
   return (neuron0x237c5a0()*-0.251963);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385300() {
   return (neuron0x237cf70()*0.174563);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385340() {
   return (neuron0x237d940()*0.747589);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23856c0() {
   return (neuron0x23598c0()*0.629094);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385700() {
   return (neuron0x235a210()*-0.72499);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385740() {
   return (neuron0x235acf0()*-0.702271);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385780() {
   return (neuron0x235a790()*-0.0307159);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23857c0() {
   return (neuron0x235bad0()*0.256717);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385800() {
   return (neuron0x235c4a0()*-0.838245);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385840() {
   return (neuron0x235d270()*-0.147549);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385880() {
   return (neuron0x235dc40()*-0.292711);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23858c0() {
   return (neuron0x235e610()*-0.484139);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385900() {
   return (neuron0x235f0f0()*-0.761727);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385940() {
   return (neuron0x235fac0()*0.238157);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385980() {
   return (neuron0x235cba0()*-0.279794);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23859c0() {
   return (neuron0x2361670()*-0.430057);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385a00() {
   return (neuron0x2362040()*-0.39047);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385a40() {
   return (neuron0x2362a10()*0.155109);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385a80() {
   return (neuron0x23633e0()*-0.512109);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385510() {
   return (neuron0x23651f0()*-0.929434);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385550() {
   return (neuron0x23654d0()*-0.376392);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385bd0() {
   return (neuron0x2365ea0()*0.557975);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385c10() {
   return (neuron0x2366870()*-0.967481);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385c50() {
   return (neuron0x2367240()*-0.421679);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385c90() {
   return (neuron0x2367c10()*-0.57433);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385cd0() {
   return (neuron0x2360760()*0.00503352);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385d10() {
   return (neuron0x2361130()*-0.397267);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385d50() {
   return (neuron0x236a9a0()*0.14677);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385d90() {
   return (neuron0x236b370()*-0.118638);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385dd0() {
   return (neuron0x236bd40()*-0.70136);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385e10() {
   return (neuron0x236c710()*-0.456723);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385e50() {
   return (neuron0x236d0e0()*-0.351955);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385e90() {
   return (neuron0x236dab0()*-0.0256586);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385ed0() {
   return (neuron0x236e480()*-0.0980848);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385f10() {
   return (neuron0x236ee50()*-0.506829);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385ac0() {
   return (neuron0x2364ee0()*-0.502182);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385b00() {
   return (neuron0x2371a30()*-0.297668);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385b40() {
   return (neuron0x2372400()*-0.890424);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2385b80() {
   return (neuron0x2372dd0()*-0.413652);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386160() {
   return (neuron0x23737a0()*-0.292615);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23861a0() {
   return (neuron0x2374170()*-0.0423163);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23861e0() {
   return (neuron0x2374b40()*-0.524906);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386220() {
   return (neuron0x2375510()*-0.487398);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386260() {
   return (neuron0x2375ee0()*-0.547453);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23862a0() {
   return (neuron0x2376ac0()*-0.300062);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23862e0() {
   return (neuron0x2377490()*-0.401125);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386320() {
   return (neuron0x2368310()*-0.327208);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386360() {
   return (neuron0x2368ce0()*-0.12351);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23863a0() {
   return (neuron0x23696b0()*-0.758055);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23863e0() {
   return (neuron0x237bcf0()*-0.546319);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386420() {
   return (neuron0x237c5a0()*-0.126826);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386460() {
   return (neuron0x237cf70()*0.0704541);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23864a0() {
   return (neuron0x237d940()*0.195078);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386820() {
   return (neuron0x23598c0()*-0.00582127);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386860() {
   return (neuron0x235a210()*0.0021318);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23868a0() {
   return (neuron0x235acf0()*2.11148);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23868e0() {
   return (neuron0x235a790()*-3.47615e-05);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386920() {
   return (neuron0x235bad0()*0.419907);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386960() {
   return (neuron0x235c4a0()*-2.1382);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23869a0() {
   return (neuron0x235d270()*-0.997582);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23869e0() {
   return (neuron0x235dc40()*-0.142331);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386a20() {
   return (neuron0x235e610()*-0.0793781);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386a60() {
   return (neuron0x235f0f0()*-0.360917);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386aa0() {
   return (neuron0x235fac0()*1.31165);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386ae0() {
   return (neuron0x235cba0()*0.884028);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386b20() {
   return (neuron0x2361670()*0.040531);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386b60() {
   return (neuron0x2362040()*-1.78483);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386ba0() {
   return (neuron0x2362a10()*-0.792228);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386be0() {
   return (neuron0x23633e0()*-0.040048);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386670() {
   return (neuron0x23651f0()*-0.00663514);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23866b0() {
   return (neuron0x23654d0()*-0.00588363);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386d30() {
   return (neuron0x2365ea0()*-0.816039);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386d70() {
   return (neuron0x2366870()*0.030745);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386db0() {
   return (neuron0x2367240()*0.00512176);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386df0() {
   return (neuron0x2367c10()*-0.085144);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386e30() {
   return (neuron0x2360760()*-0.34786);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386e70() {
   return (neuron0x2361130()*-0.0913852);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386eb0() {
   return (neuron0x236a9a0()*-0.0367575);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386ef0() {
   return (neuron0x236b370()*-0.543748);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386f30() {
   return (neuron0x236bd40()*-0.00826694);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386f70() {
   return (neuron0x236c710()*0.0200818);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386fb0() {
   return (neuron0x236d0e0()*-0.106292);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386ff0() {
   return (neuron0x236dab0()*0.633889);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387030() {
   return (neuron0x236e480()*1.60622);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387070() {
   return (neuron0x236ee50()*2.41259);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386c20() {
   return (neuron0x2364ee0()*1.05092);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386c60() {
   return (neuron0x2371a30()*0.0124449);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386ca0() {
   return (neuron0x2372400()*0.849346);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2386ce0() {
   return (neuron0x2372dd0()*-0.0133277);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23872c0() {
   return (neuron0x23737a0()*-0.514963);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387300() {
   return (neuron0x2374170()*-0.0471459);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387340() {
   return (neuron0x2374b40()*-0.484774);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387380() {
   return (neuron0x2375510()*-0.0739124);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23873c0() {
   return (neuron0x2375ee0()*0.446219);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387400() {
   return (neuron0x2376ac0()*-1.0957);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387440() {
   return (neuron0x2377490()*-0.0183597);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387480() {
   return (neuron0x2368310()*-0.0104873);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23874c0() {
   return (neuron0x2368ce0()*0.705748);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387500() {
   return (neuron0x23696b0()*-0.00725528);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387540() {
   return (neuron0x237bcf0()*-0.705601);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387580() {
   return (neuron0x237c5a0()*0.569671);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23875c0() {
   return (neuron0x237cf70()*-0.119002);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387600() {
   return (neuron0x237d940()*0.972551);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387980() {
   return (neuron0x23598c0()*0.0237644);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23879c0() {
   return (neuron0x235a210()*0.0108981);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387a00() {
   return (neuron0x235acf0()*0.540248);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387a40() {
   return (neuron0x235a790()*0.00205562);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387a80() {
   return (neuron0x235bad0()*-2.16648);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387ac0() {
   return (neuron0x235c4a0()*-1.29775);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387b00() {
   return (neuron0x235d270()*0.726185);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387b40() {
   return (neuron0x235dc40()*-0.017932);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387b80() {
   return (neuron0x235e610()*0.144579);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387bc0() {
   return (neuron0x235f0f0()*3.50696);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387c00() {
   return (neuron0x235fac0()*0.192236);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387c40() {
   return (neuron0x235cba0()*-0.624824);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387c80() {
   return (neuron0x2361670()*0.325476);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387cc0() {
   return (neuron0x2362040()*-0.186511);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387d00() {
   return (neuron0x2362a10()*-0.357799);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387d40() {
   return (neuron0x23633e0()*-1.16827);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23877d0() {
   return (neuron0x23651f0()*0.0456926);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387810() {
   return (neuron0x23654d0()*0.0392214);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387e90() {
   return (neuron0x2365ea0()*0.489084);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387ed0() {
   return (neuron0x2366870()*0.0342336);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387f10() {
   return (neuron0x2367240()*0.0622502);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387f50() {
   return (neuron0x2367c10()*-1.6423);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387f90() {
   return (neuron0x2360760()*0.942472);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387fd0() {
   return (neuron0x2361130()*0.376222);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388010() {
   return (neuron0x236a9a0()*-0.353461);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388050() {
   return (neuron0x236b370()*0.773947);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388090() {
   return (neuron0x236bd40()*0.0283521);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23880d0() {
   return (neuron0x236c710()*0.0368629);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388110() {
   return (neuron0x236d0e0()*0.0125168);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388150() {
   return (neuron0x236dab0()*2.039);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388190() {
   return (neuron0x236e480()*2.09756);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23881d0() {
   return (neuron0x236ee50()*0.499487);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387d80() {
   return (neuron0x2364ee0()*0.192226);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387dc0() {
   return (neuron0x2371a30()*-0.0224697);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387e00() {
   return (neuron0x2372400()*0.0160274);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2387e40() {
   return (neuron0x2372dd0()*0.02639);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388420() {
   return (neuron0x23737a0()*0.188772);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388460() {
   return (neuron0x2374170()*0.0856071);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23884a0() {
   return (neuron0x2374b40()*2.66053);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23884e0() {
   return (neuron0x2375510()*0.121472);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388520() {
   return (neuron0x2375ee0()*1.09144);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388560() {
   return (neuron0x2376ac0()*1.79499);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23885a0() {
   return (neuron0x2377490()*0.090769);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23885e0() {
   return (neuron0x2368310()*-0.0423406);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388620() {
   return (neuron0x2368ce0()*0.649155);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388660() {
   return (neuron0x23696b0()*-4.2152);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23886a0() {
   return (neuron0x237bcf0()*2.38703);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23886e0() {
   return (neuron0x237c5a0()*0.276486);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388720() {
   return (neuron0x237cf70()*0.165892);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388760() {
   return (neuron0x237d940()*0.25876);
}

double NNfunction_nn_charge2p_charge2m::synapse0x23889c0() {
   return (neuron0x2384b40()*-4.5055);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388a00() {
   return (neuron0x2384ee0()*-3.58881);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388a40() {
   return (neuron0x2385380()*-1.19199);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388a80() {
   return (neuron0x23864e0()*-8.94168);
}

double NNfunction_nn_charge2p_charge2m::synapse0x2388ac0() {
   return (neuron0x2387640()*-2.86736);
}

