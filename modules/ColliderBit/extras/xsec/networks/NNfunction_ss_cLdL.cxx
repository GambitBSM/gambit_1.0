#include "NNfunction_ss_cLdL.h"
#include <cmath>

double NNfunction_ss_cLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7966)/15.0035;
   input1 = (in1 - 51.8807)/732.913;
   input2 = (in2 - 369.46)/469.014;
   input3 = (in3 - 266.774)/585.589;
   input4 = (in4 - 705.952)/671.908;
   input5 = (in5 - 615.069)/652.454;
   input6 = (in6 - 618.294)/652.927;
   input7 = (in7 - 617.202)/654.137;
   input8 = (in8 - 619.648)/690.873;
   input9 = (in9 - 607.672)/673.557;
   input10 = (in10 - 618.173)/699.15;
   input11 = (in11 - 502.266)/289.411;
   input12 = (in12 - 502.123)/288.726;
   input13 = (in13 - 512.64)/350.284;
   input14 = (in14 - 646.251)/526.637;
   input15 = (in15 - 646.125)/527.378;
   input16 = (in16 - 461.719)/372.898;
   input17 = (in17 - 674.471)/601.453;
   input18 = (in18 - 669.037)/599.749;
   input19 = (in19 - 669.796)/586.382;
   input20 = (in20 - -207.207)/396.386;
   input21 = (in21 - -267.226)/867.265;
   input22 = (in22 - 3.75375)/869.978;
   input23 = (in23 - -12.1298)/487.968;
   switch(index) {
     case 0:
         return neuron0x36c9d80();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLdL::Value(int index, double* input) {
   input0 = (input[0] - 22.7966)/15.0035;
   input1 = (input[1] - 51.8807)/732.913;
   input2 = (input[2] - 369.46)/469.014;
   input3 = (input[3] - 266.774)/585.589;
   input4 = (input[4] - 705.952)/671.908;
   input5 = (input[5] - 615.069)/652.454;
   input6 = (input[6] - 618.294)/652.927;
   input7 = (input[7] - 617.202)/654.137;
   input8 = (input[8] - 619.648)/690.873;
   input9 = (input[9] - 607.672)/673.557;
   input10 = (input[10] - 618.173)/699.15;
   input11 = (input[11] - 502.266)/289.411;
   input12 = (input[12] - 502.123)/288.726;
   input13 = (input[13] - 512.64)/350.284;
   input14 = (input[14] - 646.251)/526.637;
   input15 = (input[15] - 646.125)/527.378;
   input16 = (input[16] - 461.719)/372.898;
   input17 = (input[17] - 674.471)/601.453;
   input18 = (input[18] - 669.037)/599.749;
   input19 = (input[19] - 669.796)/586.382;
   input20 = (input[20] - -207.207)/396.386;
   input21 = (input[21] - -267.226)/867.265;
   input22 = (input[22] - 3.75375)/869.978;
   input23 = (input[23] - -12.1298)/487.968;
   switch(index) {
     case 0:
         return neuron0x36c9d80();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLdL::neuron0x3694df0() {
   return input0;
}

double NNfunction_ss_cLdL::neuron0x36950a0() {
   return input1;
}

double NNfunction_ss_cLdL::neuron0x36953e0() {
   return input2;
}

double NNfunction_ss_cLdL::neuron0x3695720() {
   return input3;
}

double NNfunction_ss_cLdL::neuron0x3695a60() {
   return input4;
}

double NNfunction_ss_cLdL::neuron0x3695da0() {
   return input5;
}

double NNfunction_ss_cLdL::neuron0x36960e0() {
   return input6;
}

double NNfunction_ss_cLdL::neuron0x3696420() {
   return input7;
}

double NNfunction_ss_cLdL::neuron0x3696760() {
   return input8;
}

double NNfunction_ss_cLdL::neuron0x3696aa0() {
   return input9;
}

double NNfunction_ss_cLdL::neuron0x3696de0() {
   return input10;
}

double NNfunction_ss_cLdL::neuron0x3697120() {
   return input11;
}

double NNfunction_ss_cLdL::neuron0x3697460() {
   return input12;
}

double NNfunction_ss_cLdL::neuron0x36977a0() {
   return input13;
}

double NNfunction_ss_cLdL::neuron0x3697ae0() {
   return input14;
}

double NNfunction_ss_cLdL::neuron0x3697e20() {
   return input15;
}

double NNfunction_ss_cLdL::neuron0x3698160() {
   return input16;
}

double NNfunction_ss_cLdL::neuron0x36986c0() {
   return input17;
}

double NNfunction_ss_cLdL::neuron0x3698a00() {
   return input18;
}

double NNfunction_ss_cLdL::neuron0x3698d40() {
   return input19;
}

double NNfunction_ss_cLdL::neuron0x3699080() {
   return input20;
}

double NNfunction_ss_cLdL::neuron0x36993c0() {
   return input21;
}

double NNfunction_ss_cLdL::neuron0x3699700() {
   return input22;
}

double NNfunction_ss_cLdL::neuron0x3699a40() {
   return input23;
}

double NNfunction_ss_cLdL::input0x3699eb0() {
   double input = -0.513005;
   input += synapse0x369a1f0();
   input += synapse0x369a230();
   input += synapse0x369a270();
   input += synapse0x369a2b0();
   input += synapse0x369a2f0();
   input += synapse0x369a330();
   input += synapse0x369a370();
   input += synapse0x369a3b0();
   input += synapse0x369a3f0();
   input += synapse0x369a430();
   input += synapse0x369a470();
   input += synapse0x369a4b0();
   input += synapse0x369a4f0();
   input += synapse0x369a530();
   input += synapse0x369a570();
   input += synapse0x369a5b0();
   input += synapse0x369a040();
   input += synapse0x369a080();
   input += synapse0x3450fb0();
   input += synapse0x3450ff0();
   input += synapse0x369a5f0();
   input += synapse0x369a630();
   input += synapse0x369a670();
   input += synapse0x369a6b0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x3699eb0() {
   double input = input0x3699eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x369a6f0() {
   double input = -1.72099;
   input += synapse0x369aa30();
   input += synapse0x369aa70();
   input += synapse0x369aab0();
   input += synapse0x369aaf0();
   input += synapse0x369ab30();
   input += synapse0x369ab70();
   input += synapse0x369abb0();
   input += synapse0x369abf0();
   input += synapse0x369ac30();
   input += synapse0x3450e00();
   input += synapse0x3450e40();
   input += synapse0x3450e80();
   input += synapse0x3450ec0();
   input += synapse0x369ae80();
   input += synapse0x369aec0();
   input += synapse0x369af00();
   input += synapse0x369a880();
   input += synapse0x369a8c0();
   input += synapse0x369b050();
   input += synapse0x369b090();
   input += synapse0x369b0d0();
   input += synapse0x369b110();
   input += synapse0x369b150();
   input += synapse0x369b190();
   return input;
}

double NNfunction_ss_cLdL::neuron0x369a6f0() {
   double input = input0x369a6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x369b1d0() {
   double input = -0.594339;
   input += synapse0x369b510();
   input += synapse0x369b550();
   input += synapse0x369b590();
   input += synapse0x369b5d0();
   input += synapse0x369b610();
   input += synapse0x369b650();
   input += synapse0x369b690();
   input += synapse0x369b6d0();
   input += synapse0x369b710();
   input += synapse0x369b750();
   input += synapse0x369b790();
   input += synapse0x369b7d0();
   input += synapse0x369b810();
   input += synapse0x369b850();
   input += synapse0x369b890();
   input += synapse0x369b8d0();
   input += synapse0x369b360();
   input += synapse0x369b3a0();
   input += synapse0x3451660();
   input += synapse0x345ef30();
   input += synapse0x345ef70();
   input += synapse0x369d800();
   input += synapse0x369d840();
   input += synapse0x3694b30();
   return input;
}

double NNfunction_ss_cLdL::neuron0x369b1d0() {
   double input = input0x369b1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x369ac70() {
   double input = 1.20282;
   input += synapse0x3694c00();
   input += synapse0x345f7b0();
   input += synapse0x369ae00();
   input += synapse0x369ae40();
   input += synapse0x369ba20();
   input += synapse0x369ba60();
   input += synapse0x369baa0();
   input += synapse0x369bae0();
   input += synapse0x369bb20();
   input += synapse0x369bb60();
   input += synapse0x369bba0();
   input += synapse0x369bbe0();
   input += synapse0x369bc20();
   input += synapse0x369bc60();
   input += synapse0x369bca0();
   input += synapse0x369bce0();
   input += synapse0x3694b70();
   input += synapse0x3694bb0();
   input += synapse0x369be30();
   input += synapse0x369be70();
   input += synapse0x369beb0();
   input += synapse0x369bef0();
   input += synapse0x369bf30();
   input += synapse0x369bf70();
   return input;
}

double NNfunction_ss_cLdL::neuron0x369ac70() {
   double input = input0x369ac70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x369bfb0() {
   double input = 0.1434;
   input += synapse0x369c2f0();
   input += synapse0x369c330();
   input += synapse0x369c370();
   input += synapse0x369c3b0();
   input += synapse0x369c3f0();
   input += synapse0x369c430();
   input += synapse0x369c470();
   input += synapse0x369c4b0();
   input += synapse0x369c4f0();
   input += synapse0x369c530();
   input += synapse0x369c570();
   input += synapse0x369c5b0();
   input += synapse0x369c5f0();
   input += synapse0x369c630();
   input += synapse0x369c670();
   input += synapse0x369c6b0();
   input += synapse0x369c800();
   input += synapse0x369c140();
   input += synapse0x369c180();
   input += synapse0x369d940();
   input += synapse0x369d980();
   input += synapse0x369d9c0();
   input += synapse0x369da00();
   input += synapse0x369da40();
   return input;
}

double NNfunction_ss_cLdL::neuron0x369bfb0() {
   double input = input0x369bfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x369da80() {
   double input = 1.5166;
   input += synapse0x369ddc0();
   input += synapse0x369de00();
   input += synapse0x369de40();
   input += synapse0x369de80();
   input += synapse0x369dec0();
   input += synapse0x369df00();
   input += synapse0x369df40();
   input += synapse0x369df80();
   input += synapse0x369dfc0();
   input += synapse0x345f280();
   input += synapse0x345f2c0();
   input += synapse0x345f300();
   input += synapse0x345f340();
   input += synapse0x345f380();
   input += synapse0x345f3c0();
   input += synapse0x345f400();
   input += synapse0x369dc10();
   input += synapse0x369dc50();
   input += synapse0x345f550();
   input += synapse0x345f590();
   input += synapse0x345f5d0();
   input += synapse0x345f610();
   input += synapse0x345f650();
   input += synapse0x369e810();
   return input;
}

double NNfunction_ss_cLdL::neuron0x369da80() {
   double input = input0x369da80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x369e850() {
   double input = 0.436269;
   input += synapse0x369eb90();
   input += synapse0x369ebd0();
   input += synapse0x369ec10();
   input += synapse0x369ec50();
   input += synapse0x369ec90();
   input += synapse0x369ecd0();
   input += synapse0x369ed10();
   input += synapse0x369ed50();
   input += synapse0x369ed90();
   input += synapse0x369edd0();
   input += synapse0x369ee10();
   input += synapse0x369ee50();
   input += synapse0x369ee90();
   input += synapse0x369eed0();
   input += synapse0x369ef10();
   input += synapse0x369ef50();
   input += synapse0x369e9e0();
   input += synapse0x369ea20();
   input += synapse0x369f0a0();
   input += synapse0x369f0e0();
   input += synapse0x369f120();
   input += synapse0x369f160();
   input += synapse0x369f1a0();
   input += synapse0x369f1e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x369e850() {
   double input = input0x369e850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x369f220() {
   double input = 2.43176;
   input += synapse0x369f560();
   input += synapse0x369f5a0();
   input += synapse0x369f5e0();
   input += synapse0x369f620();
   input += synapse0x369f660();
   input += synapse0x369f6a0();
   input += synapse0x369f6e0();
   input += synapse0x369f720();
   input += synapse0x369f760();
   input += synapse0x369f7a0();
   input += synapse0x369f7e0();
   input += synapse0x369f820();
   input += synapse0x369f860();
   input += synapse0x369f8a0();
   input += synapse0x369f8e0();
   input += synapse0x369f920();
   input += synapse0x369f3b0();
   input += synapse0x369f3f0();
   input += synapse0x369fa70();
   input += synapse0x369fab0();
   input += synapse0x369faf0();
   input += synapse0x369fb30();
   input += synapse0x369fb70();
   input += synapse0x369fbb0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x369f220() {
   double input = input0x369f220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x369fbf0() {
   double input = 3.09181;
   input += synapse0x36985b0();
   input += synapse0x36985f0();
   input += synapse0x3698630();
   input += synapse0x3698670();
   input += synapse0x36a0140();
   input += synapse0x36a0180();
   input += synapse0x36a01c0();
   input += synapse0x36a0200();
   input += synapse0x36a0240();
   input += synapse0x36a0280();
   input += synapse0x36a02c0();
   input += synapse0x36a0300();
   input += synapse0x36a0340();
   input += synapse0x36a0380();
   input += synapse0x36a03c0();
   input += synapse0x36a0400();
   input += synapse0x369fd80();
   input += synapse0x369fdc0();
   input += synapse0x36a0550();
   input += synapse0x36a0590();
   input += synapse0x36a05d0();
   input += synapse0x36a0610();
   input += synapse0x36a0650();
   input += synapse0x36a0690();
   return input;
}

double NNfunction_ss_cLdL::neuron0x369fbf0() {
   double input = input0x369fbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a06d0() {
   double input = 1.47718;
   input += synapse0x36a0a10();
   input += synapse0x36a0a50();
   input += synapse0x36a0a90();
   input += synapse0x36a0ad0();
   input += synapse0x36a0b10();
   input += synapse0x36a0b50();
   input += synapse0x36a0b90();
   input += synapse0x36a0bd0();
   input += synapse0x36a0c10();
   input += synapse0x36a0c50();
   input += synapse0x36a0c90();
   input += synapse0x36a0cd0();
   input += synapse0x36a0d10();
   input += synapse0x36a0d50();
   input += synapse0x36a0d90();
   input += synapse0x36a0dd0();
   input += synapse0x36a0860();
   input += synapse0x36a08a0();
   input += synapse0x36a0f20();
   input += synapse0x36a0f60();
   input += synapse0x36a0fa0();
   input += synapse0x36a0fe0();
   input += synapse0x36a1020();
   input += synapse0x36a1060();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a06d0() {
   double input = input0x36a06d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a10a0() {
   double input = -0.0905951;
   input += synapse0x36a13e0();
   input += synapse0x36a1420();
   input += synapse0x36a1460();
   input += synapse0x36a14a0();
   input += synapse0x36a14e0();
   input += synapse0x36a1520();
   input += synapse0x36a1560();
   input += synapse0x36a15a0();
   input += synapse0x36a15e0();
   input += synapse0x36a1620();
   input += synapse0x36a1660();
   input += synapse0x36a16a0();
   input += synapse0x36a16e0();
   input += synapse0x36a1720();
   input += synapse0x36a1760();
   input += synapse0x36a17a0();
   input += synapse0x36a1230();
   input += synapse0x36a1270();
   input += synapse0x369e000();
   input += synapse0x369e040();
   input += synapse0x369e080();
   input += synapse0x369e0c0();
   input += synapse0x369e100();
   input += synapse0x369e140();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a10a0() {
   double input = input0x36a10a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x369e180() {
   double input = 1.08662;
   input += synapse0x369e4c0();
   input += synapse0x369e500();
   input += synapse0x369e540();
   input += synapse0x369e580();
   input += synapse0x369e5c0();
   input += synapse0x369e600();
   input += synapse0x369e640();
   input += synapse0x369e680();
   input += synapse0x369e6c0();
   input += synapse0x369e700();
   input += synapse0x369e740();
   input += synapse0x369e780();
   input += synapse0x369e7c0();
   input += synapse0x36a2900();
   input += synapse0x36a2940();
   input += synapse0x36a2980();
   input += synapse0x369e310();
   input += synapse0x369e350();
   input += synapse0x36a2ad0();
   input += synapse0x36a2b10();
   input += synapse0x36a2b50();
   input += synapse0x36a2b90();
   input += synapse0x36a2bd0();
   input += synapse0x36a2c10();
   return input;
}

double NNfunction_ss_cLdL::neuron0x369e180() {
   double input = input0x369e180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a2c50() {
   double input = 3.7391;
   input += synapse0x36a2f90();
   input += synapse0x36a2fd0();
   input += synapse0x36a3010();
   input += synapse0x36a3050();
   input += synapse0x36a3090();
   input += synapse0x36a30d0();
   input += synapse0x36a3110();
   input += synapse0x36a3150();
   input += synapse0x36a3190();
   input += synapse0x36a31d0();
   input += synapse0x36a3210();
   input += synapse0x36a3250();
   input += synapse0x36a3290();
   input += synapse0x36a32d0();
   input += synapse0x36a3310();
   input += synapse0x36a3350();
   input += synapse0x36a2de0();
   input += synapse0x36a2e20();
   input += synapse0x36a34a0();
   input += synapse0x36a34e0();
   input += synapse0x36a3520();
   input += synapse0x36a3560();
   input += synapse0x36a35a0();
   input += synapse0x36a35e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a2c50() {
   double input = input0x36a2c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a3620() {
   double input = 0.512856;
   input += synapse0x36a3960();
   input += synapse0x36a39a0();
   input += synapse0x36a39e0();
   input += synapse0x36a3a20();
   input += synapse0x36a3a60();
   input += synapse0x36a3aa0();
   input += synapse0x36a3ae0();
   input += synapse0x36a3b20();
   input += synapse0x36a3b60();
   input += synapse0x36a3ba0();
   input += synapse0x36a3be0();
   input += synapse0x36a3c20();
   input += synapse0x36a3c60();
   input += synapse0x36a3ca0();
   input += synapse0x36a3ce0();
   input += synapse0x36a3d20();
   input += synapse0x36a37b0();
   input += synapse0x36a37f0();
   input += synapse0x36a3e70();
   input += synapse0x36a3eb0();
   input += synapse0x36a3ef0();
   input += synapse0x36a3f30();
   input += synapse0x36a3f70();
   input += synapse0x36a3fb0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a3620() {
   double input = input0x36a3620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a3ff0() {
   double input = 0.935946;
   input += synapse0x36a4330();
   input += synapse0x36a4370();
   input += synapse0x36a43b0();
   input += synapse0x36a43f0();
   input += synapse0x36a4430();
   input += synapse0x36a4470();
   input += synapse0x36a44b0();
   input += synapse0x36a44f0();
   input += synapse0x36a4530();
   input += synapse0x36a4570();
   input += synapse0x36a45b0();
   input += synapse0x36a45f0();
   input += synapse0x36a4630();
   input += synapse0x36a4670();
   input += synapse0x36a46b0();
   input += synapse0x36a46f0();
   input += synapse0x36a4180();
   input += synapse0x36a41c0();
   input += synapse0x36a4840();
   input += synapse0x36a4880();
   input += synapse0x36a48c0();
   input += synapse0x36a4900();
   input += synapse0x36a4940();
   input += synapse0x36a4980();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a3ff0() {
   double input = input0x36a3ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a49c0() {
   double input = 0.135064;
   input += synapse0x36a4d00();
   input += synapse0x3694f80();
   input += synapse0x3694fc0();
   input += synapse0x36952c0();
   input += synapse0x3695300();
   input += synapse0x3695600();
   input += synapse0x3695640();
   input += synapse0x3695940();
   input += synapse0x3695980();
   input += synapse0x3695c80();
   input += synapse0x3695cc0();
   input += synapse0x3695fc0();
   input += synapse0x3696000();
   input += synapse0x3696300();
   input += synapse0x3696340();
   input += synapse0x3696640();
   input += synapse0x3696680();
   input += synapse0x3696980();
   input += synapse0x36969c0();
   input += synapse0x3696cc0();
   input += synapse0x3696d00();
   input += synapse0x3697000();
   input += synapse0x3697040();
   input += synapse0x3697340();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a49c0() {
   double input = input0x36a49c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a67d0() {
   double input = 0.252423;
   input += synapse0x3697380();
   input += synapse0x3698040();
   input += synapse0x3698080();
   input += synapse0x36a4b50();
   input += synapse0x36a4b90();
   input += synapse0x3698380();
   input += synapse0x36983c0();
   input += synapse0x36988e0();
   input += synapse0x3698920();
   input += synapse0x3698c20();
   input += synapse0x3698c60();
   input += synapse0x3698f60();
   input += synapse0x3698fa0();
   input += synapse0x36992a0();
   input += synapse0x36992e0();
   input += synapse0x36995e0();
   input += synapse0x3699620();
   input += synapse0x3699920();
   input += synapse0x3699960();
   input += synapse0x3699c60();
   input += synapse0x3699ca0();
   input += synapse0x3697680();
   input += synapse0x36976c0();
   input += synapse0x36a6a70();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a67d0() {
   double input = input0x36a67d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a6ab0() {
   double input = 0.621193;
   input += synapse0x36a6df0();
   input += synapse0x36a6e30();
   input += synapse0x36a6e70();
   input += synapse0x36a6eb0();
   input += synapse0x36a6ef0();
   input += synapse0x36a6f30();
   input += synapse0x36a6f70();
   input += synapse0x36a6fb0();
   input += synapse0x36a6ff0();
   input += synapse0x36a7030();
   input += synapse0x36a7070();
   input += synapse0x36a70b0();
   input += synapse0x36a70f0();
   input += synapse0x36a7130();
   input += synapse0x36a7170();
   input += synapse0x36a71b0();
   input += synapse0x36a6c40();
   input += synapse0x36a6c80();
   input += synapse0x36a7300();
   input += synapse0x36a7340();
   input += synapse0x36a7380();
   input += synapse0x36a73c0();
   input += synapse0x36a7400();
   input += synapse0x36a7440();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a6ab0() {
   double input = input0x36a6ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a7480() {
   double input = 0.868435;
   input += synapse0x36a77c0();
   input += synapse0x36a7800();
   input += synapse0x36a7840();
   input += synapse0x36a7880();
   input += synapse0x36a78c0();
   input += synapse0x36a7900();
   input += synapse0x36a7940();
   input += synapse0x36a7980();
   input += synapse0x36a79c0();
   input += synapse0x36a7a00();
   input += synapse0x36a7a40();
   input += synapse0x36a7a80();
   input += synapse0x36a7ac0();
   input += synapse0x36a7b00();
   input += synapse0x36a7b40();
   input += synapse0x36a7b80();
   input += synapse0x36a7610();
   input += synapse0x36a7650();
   input += synapse0x36a7cd0();
   input += synapse0x36a7d10();
   input += synapse0x36a7d50();
   input += synapse0x36a7d90();
   input += synapse0x36a7dd0();
   input += synapse0x36a7e10();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a7480() {
   double input = input0x36a7480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a7e50() {
   double input = -2.94064;
   input += synapse0x36a8190();
   input += synapse0x36a81d0();
   input += synapse0x36a8210();
   input += synapse0x36a8250();
   input += synapse0x36a8290();
   input += synapse0x36a82d0();
   input += synapse0x36a8310();
   input += synapse0x36a8350();
   input += synapse0x36a8390();
   input += synapse0x36a83d0();
   input += synapse0x36a8410();
   input += synapse0x36a8450();
   input += synapse0x36a8490();
   input += synapse0x36a84d0();
   input += synapse0x36a8510();
   input += synapse0x36a8550();
   input += synapse0x36a7fe0();
   input += synapse0x36a8020();
   input += synapse0x36a86a0();
   input += synapse0x36a86e0();
   input += synapse0x36a8720();
   input += synapse0x36a8760();
   input += synapse0x36a87a0();
   input += synapse0x36a87e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a7e50() {
   double input = input0x36a7e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a8820() {
   double input = 0.433962;
   input += synapse0x36a8b60();
   input += synapse0x36a8ba0();
   input += synapse0x36a8be0();
   input += synapse0x36a8c20();
   input += synapse0x36a8c60();
   input += synapse0x36a8ca0();
   input += synapse0x36a8ce0();
   input += synapse0x36a8d20();
   input += synapse0x36a8d60();
   input += synapse0x36a8da0();
   input += synapse0x36a8de0();
   input += synapse0x36a8e20();
   input += synapse0x36a8e60();
   input += synapse0x36a8ea0();
   input += synapse0x36a8ee0();
   input += synapse0x36a8f20();
   input += synapse0x36a89b0();
   input += synapse0x36a89f0();
   input += synapse0x36a9070();
   input += synapse0x36a90b0();
   input += synapse0x36a90f0();
   input += synapse0x36a9130();
   input += synapse0x36a9170();
   input += synapse0x36a91b0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a8820() {
   double input = input0x36a8820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a91f0() {
   double input = 0.0684762;
   input += synapse0x36a9530();
   input += synapse0x36a9570();
   input += synapse0x36a95b0();
   input += synapse0x36a95f0();
   input += synapse0x36a9630();
   input += synapse0x36a9670();
   input += synapse0x36a96b0();
   input += synapse0x36a96f0();
   input += synapse0x36a9730();
   input += synapse0x36a18f0();
   input += synapse0x36a1930();
   input += synapse0x36a1970();
   input += synapse0x36a19b0();
   input += synapse0x36a19f0();
   input += synapse0x36a1a30();
   input += synapse0x36a1a70();
   input += synapse0x36a9380();
   input += synapse0x36a93c0();
   input += synapse0x36a1bc0();
   input += synapse0x36a1c00();
   input += synapse0x36a1c40();
   input += synapse0x36a1c80();
   input += synapse0x36a1cc0();
   input += synapse0x36a1d00();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a91f0() {
   double input = input0x36a91f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a1d40() {
   double input = -0.569421;
   input += synapse0x36a2080();
   input += synapse0x36a20c0();
   input += synapse0x36a2100();
   input += synapse0x36a2140();
   input += synapse0x36a2180();
   input += synapse0x36a21c0();
   input += synapse0x36a2200();
   input += synapse0x36a2240();
   input += synapse0x36a2280();
   input += synapse0x36a22c0();
   input += synapse0x36a2300();
   input += synapse0x36a2340();
   input += synapse0x36a2380();
   input += synapse0x36a23c0();
   input += synapse0x36a2400();
   input += synapse0x36a2440();
   input += synapse0x36a1ed0();
   input += synapse0x36a1f10();
   input += synapse0x36a2590();
   input += synapse0x36a25d0();
   input += synapse0x36a2610();
   input += synapse0x36a2650();
   input += synapse0x36a2690();
   input += synapse0x36a26d0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a1d40() {
   double input = input0x36a1d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a2710() {
   double input = -0.67271;
   input += synapse0x36a28a0();
   input += synapse0x36ab930();
   input += synapse0x36ab970();
   input += synapse0x36ab9b0();
   input += synapse0x36ab9f0();
   input += synapse0x36aba30();
   input += synapse0x36aba70();
   input += synapse0x36abab0();
   input += synapse0x36abaf0();
   input += synapse0x36abb30();
   input += synapse0x36abb70();
   input += synapse0x36abbb0();
   input += synapse0x36abbf0();
   input += synapse0x36abc30();
   input += synapse0x36abc70();
   input += synapse0x36abcb0();
   input += synapse0x36ab780();
   input += synapse0x36ab7c0();
   input += synapse0x36abe00();
   input += synapse0x36abe40();
   input += synapse0x36abe80();
   input += synapse0x36abec0();
   input += synapse0x36abf00();
   input += synapse0x36abf40();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a2710() {
   double input = input0x36a2710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36abf80() {
   double input = 0.949619;
   input += synapse0x36ac2c0();
   input += synapse0x36ac300();
   input += synapse0x36ac340();
   input += synapse0x36ac380();
   input += synapse0x36ac3c0();
   input += synapse0x36ac400();
   input += synapse0x36ac440();
   input += synapse0x36ac480();
   input += synapse0x36ac4c0();
   input += synapse0x36ac500();
   input += synapse0x36ac540();
   input += synapse0x36ac580();
   input += synapse0x36ac5c0();
   input += synapse0x36ac600();
   input += synapse0x36ac640();
   input += synapse0x36ac680();
   input += synapse0x36ac110();
   input += synapse0x36ac150();
   input += synapse0x36ac7d0();
   input += synapse0x36ac810();
   input += synapse0x36ac850();
   input += synapse0x36ac890();
   input += synapse0x36ac8d0();
   input += synapse0x36ac910();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36abf80() {
   double input = input0x36abf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36ac950() {
   double input = -0.460037;
   input += synapse0x36acc90();
   input += synapse0x36accd0();
   input += synapse0x36acd10();
   input += synapse0x36acd50();
   input += synapse0x36acd90();
   input += synapse0x36acdd0();
   input += synapse0x36ace10();
   input += synapse0x36ace50();
   input += synapse0x36ace90();
   input += synapse0x36aced0();
   input += synapse0x36acf10();
   input += synapse0x36acf50();
   input += synapse0x36acf90();
   input += synapse0x36acfd0();
   input += synapse0x36ad010();
   input += synapse0x36ad050();
   input += synapse0x36acae0();
   input += synapse0x36acb20();
   input += synapse0x36ad1a0();
   input += synapse0x36ad1e0();
   input += synapse0x36ad220();
   input += synapse0x36ad260();
   input += synapse0x36ad2a0();
   input += synapse0x36ad2e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36ac950() {
   double input = input0x36ac950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36ad320() {
   double input = -0.847298;
   input += synapse0x36ad660();
   input += synapse0x36ad6a0();
   input += synapse0x36ad6e0();
   input += synapse0x36ad720();
   input += synapse0x36ad760();
   input += synapse0x36ad7a0();
   input += synapse0x36ad7e0();
   input += synapse0x36ad820();
   input += synapse0x36ad860();
   input += synapse0x36ad8a0();
   input += synapse0x36ad8e0();
   input += synapse0x36ad920();
   input += synapse0x36ad960();
   input += synapse0x36ad9a0();
   input += synapse0x36ad9e0();
   input += synapse0x36ada20();
   input += synapse0x36ad4b0();
   input += synapse0x36ad4f0();
   input += synapse0x36adb70();
   input += synapse0x36adbb0();
   input += synapse0x36adbf0();
   input += synapse0x36adc30();
   input += synapse0x36adc70();
   input += synapse0x36adcb0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36ad320() {
   double input = input0x36ad320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36adcf0() {
   double input = 0.175263;
   input += synapse0x36ae030();
   input += synapse0x36ae070();
   input += synapse0x36ae0b0();
   input += synapse0x36ae0f0();
   input += synapse0x36ae130();
   input += synapse0x36ae170();
   input += synapse0x36ae1b0();
   input += synapse0x36ae1f0();
   input += synapse0x36ae230();
   input += synapse0x36ae270();
   input += synapse0x36ae2b0();
   input += synapse0x36ae2f0();
   input += synapse0x36ae330();
   input += synapse0x36ae370();
   input += synapse0x36ae3b0();
   input += synapse0x36ae3f0();
   input += synapse0x36ade80();
   input += synapse0x36adec0();
   input += synapse0x36ae540();
   input += synapse0x36ae580();
   input += synapse0x36ae5c0();
   input += synapse0x36ae600();
   input += synapse0x36ae640();
   input += synapse0x36ae680();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36adcf0() {
   double input = input0x36adcf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36ae6c0() {
   double input = -0.904313;
   input += synapse0x36aea00();
   input += synapse0x36aea40();
   input += synapse0x36aea80();
   input += synapse0x36aeac0();
   input += synapse0x36aeb00();
   input += synapse0x36aeb40();
   input += synapse0x36aeb80();
   input += synapse0x36aebc0();
   input += synapse0x36aec00();
   input += synapse0x36aec40();
   input += synapse0x36aec80();
   input += synapse0x36aecc0();
   input += synapse0x36aed00();
   input += synapse0x36aed40();
   input += synapse0x36aed80();
   input += synapse0x36aedc0();
   input += synapse0x36ae850();
   input += synapse0x36ae890();
   input += synapse0x36aef10();
   input += synapse0x36aef50();
   input += synapse0x36aef90();
   input += synapse0x36aefd0();
   input += synapse0x36af010();
   input += synapse0x36af050();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36ae6c0() {
   double input = input0x36ae6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36af090() {
   double input = -0.560745;
   input += synapse0x36af3d0();
   input += synapse0x36af410();
   input += synapse0x36af450();
   input += synapse0x36af490();
   input += synapse0x36af4d0();
   input += synapse0x36af510();
   input += synapse0x36af550();
   input += synapse0x36af590();
   input += synapse0x36af5d0();
   input += synapse0x36af610();
   input += synapse0x36af650();
   input += synapse0x36af690();
   input += synapse0x36af6d0();
   input += synapse0x36af710();
   input += synapse0x36af750();
   input += synapse0x36af790();
   input += synapse0x36af220();
   input += synapse0x36af260();
   input += synapse0x36af8e0();
   input += synapse0x36af920();
   input += synapse0x36af960();
   input += synapse0x36af9a0();
   input += synapse0x36af9e0();
   input += synapse0x36afa20();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36af090() {
   double input = input0x36af090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36afa60() {
   double input = 1.4265;
   input += synapse0x36afda0();
   input += synapse0x36afde0();
   input += synapse0x36afe20();
   input += synapse0x36afe60();
   input += synapse0x36afea0();
   input += synapse0x36afee0();
   input += synapse0x36aff20();
   input += synapse0x36aff60();
   input += synapse0x36affa0();
   input += synapse0x36affe0();
   input += synapse0x36b0020();
   input += synapse0x36b0060();
   input += synapse0x36b00a0();
   input += synapse0x36b00e0();
   input += synapse0x36b0120();
   input += synapse0x36b0160();
   input += synapse0x36afbf0();
   input += synapse0x36afc30();
   input += synapse0x36b02b0();
   input += synapse0x36b02f0();
   input += synapse0x36b0330();
   input += synapse0x36b0370();
   input += synapse0x36b03b0();
   input += synapse0x36b03f0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36afa60() {
   double input = input0x36afa60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b0430() {
   double input = -1.04215;
   input += synapse0x36b0770();
   input += synapse0x36a4d40();
   input += synapse0x36a4d80();
   input += synapse0x36a4dc0();
   input += synapse0x36a5010();
   input += synapse0x36a5050();
   input += synapse0x36a5090();
   input += synapse0x36a52e0();
   input += synapse0x36a5320();
   input += synapse0x36a5570();
   input += synapse0x36a55b0();
   input += synapse0x36a55f0();
   input += synapse0x36a5840();
   input += synapse0x36a5880();
   input += synapse0x36a5ad0();
   input += synapse0x36a5b10();
   input += synapse0x36b05c0();
   input += synapse0x36b0600();
   input += synapse0x36a5c60();
   input += synapse0x36a6170();
   input += synapse0x36a61b0();
   input += synapse0x36a61f0();
   input += synapse0x36a6440();
   input += synapse0x36a6480();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b0430() {
   double input = input0x36b0430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a64c0() {
   double input = -2.45372;
   input += synapse0x36a5d30();
   input += synapse0x36a5d70();
   input += synapse0x36a5db0();
   input += synapse0x36a5df0();
   input += synapse0x36a6770();
   input += synapse0x36b2ac0();
   input += synapse0x36b2b00();
   input += synapse0x36b2b40();
   input += synapse0x36b2b80();
   input += synapse0x36b2bc0();
   input += synapse0x36b2c00();
   input += synapse0x36b2c40();
   input += synapse0x36b2c80();
   input += synapse0x36b2cc0();
   input += synapse0x36b2d00();
   input += synapse0x36b2d40();
   input += synapse0x36a6650();
   input += synapse0x36a6690();
   input += synapse0x36b2e90();
   input += synapse0x36b2ed0();
   input += synapse0x36b2f10();
   input += synapse0x36b2f50();
   input += synapse0x36b2f90();
   input += synapse0x36b2fd0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a64c0() {
   double input = input0x36a64c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b3010() {
   double input = 0.319608;
   input += synapse0x36b3350();
   input += synapse0x36b3390();
   input += synapse0x36b33d0();
   input += synapse0x36b3410();
   input += synapse0x36b3450();
   input += synapse0x36b3490();
   input += synapse0x36b34d0();
   input += synapse0x36b3510();
   input += synapse0x36b3550();
   input += synapse0x36b3590();
   input += synapse0x36b35d0();
   input += synapse0x36b3610();
   input += synapse0x36b3650();
   input += synapse0x36b3690();
   input += synapse0x36b36d0();
   input += synapse0x36b3710();
   input += synapse0x36b31a0();
   input += synapse0x36b31e0();
   input += synapse0x36b3860();
   input += synapse0x36b38a0();
   input += synapse0x36b38e0();
   input += synapse0x36b3920();
   input += synapse0x36b3960();
   input += synapse0x36b39a0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b3010() {
   double input = input0x36b3010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b39e0() {
   double input = 0.151026;
   input += synapse0x36b3d20();
   input += synapse0x36b3d60();
   input += synapse0x36b3da0();
   input += synapse0x36b3de0();
   input += synapse0x36b3e20();
   input += synapse0x36b3e60();
   input += synapse0x36b3ea0();
   input += synapse0x36b3ee0();
   input += synapse0x36b3f20();
   input += synapse0x36b3f60();
   input += synapse0x36b3fa0();
   input += synapse0x36b3fe0();
   input += synapse0x36b4020();
   input += synapse0x36b4060();
   input += synapse0x36b40a0();
   input += synapse0x36b40e0();
   input += synapse0x36b3b70();
   input += synapse0x36b3bb0();
   input += synapse0x36b4230();
   input += synapse0x36b4270();
   input += synapse0x36b42b0();
   input += synapse0x36b42f0();
   input += synapse0x36b4330();
   input += synapse0x36b4370();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b39e0() {
   double input = input0x36b39e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b43b0() {
   double input = -0.0596469;
   input += synapse0x36b46f0();
   input += synapse0x36b4730();
   input += synapse0x36b4770();
   input += synapse0x36b47b0();
   input += synapse0x36b47f0();
   input += synapse0x36b4830();
   input += synapse0x36b4870();
   input += synapse0x36b48b0();
   input += synapse0x36b48f0();
   input += synapse0x36b4930();
   input += synapse0x36b4970();
   input += synapse0x36b49b0();
   input += synapse0x36b49f0();
   input += synapse0x36b4a30();
   input += synapse0x36b4a70();
   input += synapse0x36b4ab0();
   input += synapse0x36b4540();
   input += synapse0x36b4580();
   input += synapse0x36b4c00();
   input += synapse0x36b4c40();
   input += synapse0x36b4c80();
   input += synapse0x36b4cc0();
   input += synapse0x36b4d00();
   input += synapse0x36b4d40();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b43b0() {
   double input = input0x36b43b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b4d80() {
   double input = -2.04758;
   input += synapse0x36b50c0();
   input += synapse0x36b5100();
   input += synapse0x36b5140();
   input += synapse0x36b5180();
   input += synapse0x36b51c0();
   input += synapse0x36b5200();
   input += synapse0x36b5240();
   input += synapse0x36b5280();
   input += synapse0x36b52c0();
   input += synapse0x36b5300();
   input += synapse0x36b5340();
   input += synapse0x36b5380();
   input += synapse0x36b53c0();
   input += synapse0x36b5400();
   input += synapse0x36b5440();
   input += synapse0x36b5480();
   input += synapse0x36b4f10();
   input += synapse0x36b4f50();
   input += synapse0x36b55d0();
   input += synapse0x36b5610();
   input += synapse0x36b5650();
   input += synapse0x36b5690();
   input += synapse0x36b56d0();
   input += synapse0x36b5710();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b4d80() {
   double input = input0x36b4d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b5750() {
   double input = 0.0879954;
   input += synapse0x36b5a90();
   input += synapse0x36b5ad0();
   input += synapse0x36b5b10();
   input += synapse0x36b5b50();
   input += synapse0x36b5b90();
   input += synapse0x36b5bd0();
   input += synapse0x36b5c10();
   input += synapse0x36b5c50();
   input += synapse0x36b5c90();
   input += synapse0x36b5cd0();
   input += synapse0x36b5d10();
   input += synapse0x36b5d50();
   input += synapse0x36b5d90();
   input += synapse0x36b5dd0();
   input += synapse0x36b5e10();
   input += synapse0x36b5e50();
   input += synapse0x36b58e0();
   input += synapse0x36b5920();
   input += synapse0x36b5fa0();
   input += synapse0x36b5fe0();
   input += synapse0x36b6020();
   input += synapse0x36b6060();
   input += synapse0x36b60a0();
   input += synapse0x36b60e0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b5750() {
   double input = input0x36b5750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b6120() {
   double input = -1.78161;
   input += synapse0x36b6460();
   input += synapse0x36b64a0();
   input += synapse0x36b64e0();
   input += synapse0x36b6520();
   input += synapse0x36b6560();
   input += synapse0x36b65a0();
   input += synapse0x36b65e0();
   input += synapse0x36b6620();
   input += synapse0x36b6660();
   input += synapse0x36b66a0();
   input += synapse0x36b66e0();
   input += synapse0x36b6720();
   input += synapse0x36b6760();
   input += synapse0x36b67a0();
   input += synapse0x36b67e0();
   input += synapse0x36b6820();
   input += synapse0x36b62b0();
   input += synapse0x36b62f0();
   input += synapse0x36b6970();
   input += synapse0x36b69b0();
   input += synapse0x36b69f0();
   input += synapse0x36b6a30();
   input += synapse0x36b6a70();
   input += synapse0x36b6ab0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b6120() {
   double input = input0x36b6120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b6af0() {
   double input = 3.49262;
   input += synapse0x36b6e30();
   input += synapse0x36b6e70();
   input += synapse0x36b6eb0();
   input += synapse0x36b6ef0();
   input += synapse0x36b6f30();
   input += synapse0x36b6f70();
   input += synapse0x36b6fb0();
   input += synapse0x36b6ff0();
   input += synapse0x36b7030();
   input += synapse0x36b7070();
   input += synapse0x36b70b0();
   input += synapse0x36b70f0();
   input += synapse0x36b7130();
   input += synapse0x36b7170();
   input += synapse0x36b71b0();
   input += synapse0x36b71f0();
   input += synapse0x36b6c80();
   input += synapse0x36b6cc0();
   input += synapse0x36b7340();
   input += synapse0x36b7380();
   input += synapse0x36b73c0();
   input += synapse0x36b7400();
   input += synapse0x36b7440();
   input += synapse0x36b7480();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b6af0() {
   double input = input0x36b6af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b74c0() {
   double input = -0.0117894;
   input += synapse0x369ff30();
   input += synapse0x369ff70();
   input += synapse0x369ffb0();
   input += synapse0x369fff0();
   input += synapse0x36a0030();
   input += synapse0x36a0070();
   input += synapse0x36a00b0();
   input += synapse0x36a00f0();
   input += synapse0x36b7c10();
   input += synapse0x36b7c50();
   input += synapse0x36b7c90();
   input += synapse0x36b7cd0();
   input += synapse0x36b7d10();
   input += synapse0x36b7d50();
   input += synapse0x36b7d90();
   input += synapse0x36b7dd0();
   input += synapse0x36b7650();
   input += synapse0x36b7690();
   input += synapse0x36b7f20();
   input += synapse0x36b7f60();
   input += synapse0x36b7fa0();
   input += synapse0x36b7fe0();
   input += synapse0x36b8020();
   input += synapse0x36b8060();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b74c0() {
   double input = input0x36b74c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b80a0() {
   double input = -0.498333;
   input += synapse0x36b83e0();
   input += synapse0x36b8420();
   input += synapse0x36b8460();
   input += synapse0x36b84a0();
   input += synapse0x36b84e0();
   input += synapse0x36b8520();
   input += synapse0x36b8560();
   input += synapse0x36b85a0();
   input += synapse0x36b85e0();
   input += synapse0x36b8620();
   input += synapse0x36b8660();
   input += synapse0x36b86a0();
   input += synapse0x36b86e0();
   input += synapse0x36b8720();
   input += synapse0x36b8760();
   input += synapse0x36b87a0();
   input += synapse0x36b8230();
   input += synapse0x36b8270();
   input += synapse0x36b88f0();
   input += synapse0x36b8930();
   input += synapse0x36b8970();
   input += synapse0x36b89b0();
   input += synapse0x36b89f0();
   input += synapse0x36b8a30();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b80a0() {
   double input = input0x36b80a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36b8a70() {
   double input = 0.290884;
   input += synapse0x36b8db0();
   input += synapse0x36b8df0();
   input += synapse0x36b8e30();
   input += synapse0x36b8e70();
   input += synapse0x36b8eb0();
   input += synapse0x36b8ef0();
   input += synapse0x36b8f30();
   input += synapse0x36b8f70();
   input += synapse0x36b8fb0();
   input += synapse0x36b8ff0();
   input += synapse0x36b9030();
   input += synapse0x36b9070();
   input += synapse0x36b90b0();
   input += synapse0x36b90f0();
   input += synapse0x36b9130();
   input += synapse0x36b9170();
   input += synapse0x36b8c00();
   input += synapse0x36b8c40();
   input += synapse0x36a9770();
   input += synapse0x36a97b0();
   input += synapse0x36a97f0();
   input += synapse0x36a9830();
   input += synapse0x36a9870();
   input += synapse0x36a98b0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36b8a70() {
   double input = input0x36b8a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36a98f0() {
   double input = -0.707306;
   input += synapse0x36a9c30();
   input += synapse0x36a9c70();
   input += synapse0x36a9cb0();
   input += synapse0x36a9cf0();
   input += synapse0x36a9d30();
   input += synapse0x36a9d70();
   input += synapse0x36a9db0();
   input += synapse0x36a9df0();
   input += synapse0x36a9e30();
   input += synapse0x36a9e70();
   input += synapse0x36a9eb0();
   input += synapse0x36a9ef0();
   input += synapse0x36a9f30();
   input += synapse0x36a9f70();
   input += synapse0x36a9fb0();
   input += synapse0x36a9ff0();
   input += synapse0x36a9a80();
   input += synapse0x36a9ac0();
   input += synapse0x36aa140();
   input += synapse0x36aa180();
   input += synapse0x36aa1c0();
   input += synapse0x36aa200();
   input += synapse0x36aa240();
   input += synapse0x36aa280();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36a98f0() {
   double input = input0x36a98f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36aa2c0() {
   double input = -0.405654;
   input += synapse0x36aa600();
   input += synapse0x36aa640();
   input += synapse0x36aa680();
   input += synapse0x36aa6c0();
   input += synapse0x36aa700();
   input += synapse0x36aa740();
   input += synapse0x36aa780();
   input += synapse0x36aa7c0();
   input += synapse0x36aa800();
   input += synapse0x36aa840();
   input += synapse0x36aa880();
   input += synapse0x36aa8c0();
   input += synapse0x36aa900();
   input += synapse0x36aa940();
   input += synapse0x36aa980();
   input += synapse0x36aa9c0();
   input += synapse0x36aa450();
   input += synapse0x36aa490();
   input += synapse0x36aab10();
   input += synapse0x36aab50();
   input += synapse0x36aab90();
   input += synapse0x36aabd0();
   input += synapse0x36aac10();
   input += synapse0x36aac50();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36aa2c0() {
   double input = input0x36aa2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36aac90() {
   double input = 1.44204;
   input += synapse0x36aafd0();
   input += synapse0x36ab010();
   input += synapse0x36ab050();
   input += synapse0x36ab090();
   input += synapse0x36ab0d0();
   input += synapse0x36ab110();
   input += synapse0x36ab150();
   input += synapse0x36ab190();
   input += synapse0x36ab1d0();
   input += synapse0x36ab210();
   input += synapse0x36ab250();
   input += synapse0x36ab290();
   input += synapse0x36ab2d0();
   input += synapse0x36ab310();
   input += synapse0x36ab350();
   input += synapse0x36ab390();
   input += synapse0x36aae20();
   input += synapse0x36aae60();
   input += synapse0x36ab4e0();
   input += synapse0x36ab520();
   input += synapse0x36ab560();
   input += synapse0x36ab5a0();
   input += synapse0x36ab5e0();
   input += synapse0x36ab620();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36aac90() {
   double input = input0x36aac90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36bd2d0() {
   double input = -1.79869;
   input += synapse0x36bd4f0();
   input += synapse0x36bd530();
   input += synapse0x36bd570();
   input += synapse0x36bd5b0();
   input += synapse0x36bd5f0();
   input += synapse0x36bd630();
   input += synapse0x36bd670();
   input += synapse0x36bd6b0();
   input += synapse0x36bd6f0();
   input += synapse0x36bd730();
   input += synapse0x36bd770();
   input += synapse0x36bd7b0();
   input += synapse0x36bd7f0();
   input += synapse0x36bd830();
   input += synapse0x36bd870();
   input += synapse0x36bd8b0();
   input += synapse0x36ab660();
   input += synapse0x36ab6a0();
   input += synapse0x36bda00();
   input += synapse0x36bda40();
   input += synapse0x36bda80();
   input += synapse0x36bdac0();
   input += synapse0x36bdb00();
   input += synapse0x36bdb40();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36bd2d0() {
   double input = input0x36bd2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36bdb80() {
   double input = 1.7309;
   input += synapse0x36bdec0();
   input += synapse0x36bdf00();
   input += synapse0x36bdf40();
   input += synapse0x36bdf80();
   input += synapse0x36bdfc0();
   input += synapse0x36be000();
   input += synapse0x36be040();
   input += synapse0x36be080();
   input += synapse0x36be0c0();
   input += synapse0x36be100();
   input += synapse0x36be140();
   input += synapse0x36be180();
   input += synapse0x36be1c0();
   input += synapse0x36be200();
   input += synapse0x36be240();
   input += synapse0x36be280();
   input += synapse0x36bdd10();
   input += synapse0x36bdd50();
   input += synapse0x36be3d0();
   input += synapse0x36be410();
   input += synapse0x36be450();
   input += synapse0x36be490();
   input += synapse0x36be4d0();
   input += synapse0x36be510();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36bdb80() {
   double input = input0x36bdb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36be550() {
   double input = 0.028021;
   input += synapse0x36be890();
   input += synapse0x36be8d0();
   input += synapse0x36be910();
   input += synapse0x36be950();
   input += synapse0x36be990();
   input += synapse0x36be9d0();
   input += synapse0x36bea10();
   input += synapse0x36bea50();
   input += synapse0x36bea90();
   input += synapse0x36bead0();
   input += synapse0x36beb10();
   input += synapse0x36beb50();
   input += synapse0x36beb90();
   input += synapse0x36bebd0();
   input += synapse0x36bec10();
   input += synapse0x36bec50();
   input += synapse0x36be6e0();
   input += synapse0x36be720();
   input += synapse0x36beda0();
   input += synapse0x36bede0();
   input += synapse0x36bee20();
   input += synapse0x36bee60();
   input += synapse0x36beea0();
   input += synapse0x36beee0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36be550() {
   double input = input0x36be550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36bef20() {
   double input = 0.180399;
   input += synapse0x36bf260();
   input += synapse0x36bf2a0();
   input += synapse0x36bf2e0();
   input += synapse0x36bf320();
   input += synapse0x36bf360();
   input += synapse0x36bf3a0();
   input += synapse0x36bf3e0();
   input += synapse0x36bf420();
   input += synapse0x36bf460();
   input += synapse0x36bf4a0();
   input += synapse0x36bf4e0();
   input += synapse0x36bf520();
   input += synapse0x36bf560();
   input += synapse0x36bf5a0();
   input += synapse0x36bf5e0();
   input += synapse0x36bf620();
   input += synapse0x36bf0b0();
   input += synapse0x36bf0f0();
   input += synapse0x36bf770();
   input += synapse0x36bf7b0();
   input += synapse0x36bf7f0();
   input += synapse0x36bf830();
   input += synapse0x36bf870();
   input += synapse0x36bf8b0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36bef20() {
   double input = input0x36bef20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36c6120() {
   double input = -0.670212;
   input += synapse0x345f720();
   input += synapse0x345f760();
   input += synapse0x369c260();
   input += synapse0x369c2a0();
   input += synapse0x369dd30();
   input += synapse0x369dd70();
   input += synapse0x369eb00();
   input += synapse0x369eb40();
   input += synapse0x369f4d0();
   input += synapse0x369f510();
   input += synapse0x369fea0();
   input += synapse0x369fee0();
   input += synapse0x36a0980();
   input += synapse0x36a09c0();
   input += synapse0x36a1350();
   input += synapse0x36a1390();
   input += synapse0x369e430();
   input += synapse0x369e470();
   input += synapse0x36a2f00();
   input += synapse0x36a2f40();
   input += synapse0x36a38d0();
   input += synapse0x36a3910();
   input += synapse0x36a42a0();
   input += synapse0x36a42e0();
   input += synapse0x36a4c70();
   input += synapse0x36a4cb0();
   input += synapse0x3697d00();
   input += synapse0x3697d40();
   input += synapse0x36a6d60();
   input += synapse0x36a6da0();
   input += synapse0x36a7730();
   input += synapse0x36a7770();
   input += synapse0x36a8100();
   input += synapse0x36a8140();
   input += synapse0x36a8ad0();
   input += synapse0x36a8b10();
   input += synapse0x36a94a0();
   input += synapse0x36a94e0();
   input += synapse0x36a1ff0();
   input += synapse0x36a2030();
   input += synapse0x36ab8a0();
   input += synapse0x36ab8e0();
   input += synapse0x36ac230();
   input += synapse0x36ac270();
   input += synapse0x36acc00();
   input += synapse0x36acc40();
   input += synapse0x36ad5d0();
   input += synapse0x36ad610();
   input += synapse0x36adfa0();
   input += synapse0x36adfe0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36c6120() {
   double input = input0x36c6120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36c64c0() {
   double input = -0.142361;
   input += synapse0x36b06e0();
   input += synapse0x36b0720();
   input += synapse0x36a5ca0();
   input += synapse0x36a5ce0();
   input += synapse0x36b32c0();
   input += synapse0x36b3300();
   input += synapse0x36b3c90();
   input += synapse0x36b3cd0();
   input += synapse0x36b4660();
   input += synapse0x36b46a0();
   input += synapse0x36b5030();
   input += synapse0x36b5070();
   input += synapse0x36b5a00();
   input += synapse0x36b5a40();
   input += synapse0x36b63d0();
   input += synapse0x36b6410();
   input += synapse0x36b6da0();
   input += synapse0x36b6de0();
   input += synapse0x36b7770();
   input += synapse0x36b77b0();
   input += synapse0x36b8350();
   input += synapse0x36b8390();
   input += synapse0x36b8d20();
   input += synapse0x36b8d60();
   input += synapse0x36a9ba0();
   input += synapse0x36a9be0();
   input += synapse0x36aa570();
   input += synapse0x36aa5b0();
   input += synapse0x36aaf40();
   input += synapse0x36aaf80();
   input += synapse0x36bd460();
   input += synapse0x36bd4a0();
   input += synapse0x36bde30();
   input += synapse0x36bde70();
   input += synapse0x36be800();
   input += synapse0x36be840();
   input += synapse0x36bf1d0();
   input += synapse0x36bf210();
   input += synapse0x369a160();
   input += synapse0x369a1a0();
   input += synapse0x36ae970();
   input += synapse0x36ae9b0();
   input += synapse0x36bf8f0();
   input += synapse0x36bf930();
   input += synapse0x36bf970();
   input += synapse0x36bf9b0();
   input += synapse0x36c6860();
   input += synapse0x36c68a0();
   input += synapse0x36c68e0();
   input += synapse0x36c6920();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36c64c0() {
   double input = input0x36c64c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36c6960() {
   double input = -0.476013;
   input += synapse0x36c6ca0();
   input += synapse0x36c6ce0();
   input += synapse0x36c6d20();
   input += synapse0x36c6d60();
   input += synapse0x36c6da0();
   input += synapse0x36c6de0();
   input += synapse0x36c6e20();
   input += synapse0x36c6e60();
   input += synapse0x36c6ea0();
   input += synapse0x36c6ee0();
   input += synapse0x36c6f20();
   input += synapse0x36c6f60();
   input += synapse0x36c6fa0();
   input += synapse0x36c6fe0();
   input += synapse0x36c7020();
   input += synapse0x36c7060();
   input += synapse0x36c6af0();
   input += synapse0x36c6b30();
   input += synapse0x36c71b0();
   input += synapse0x36c71f0();
   input += synapse0x36c7230();
   input += synapse0x36c7270();
   input += synapse0x36c72b0();
   input += synapse0x36c72f0();
   input += synapse0x36c7330();
   input += synapse0x36c7370();
   input += synapse0x36c73b0();
   input += synapse0x36c73f0();
   input += synapse0x36c7430();
   input += synapse0x36c7470();
   input += synapse0x36c74b0();
   input += synapse0x36c74f0();
   input += synapse0x36c70a0();
   input += synapse0x36c70e0();
   input += synapse0x36c7120();
   input += synapse0x36c7160();
   input += synapse0x36c7740();
   input += synapse0x36c7780();
   input += synapse0x36c77c0();
   input += synapse0x36c7800();
   input += synapse0x36c7840();
   input += synapse0x36c7880();
   input += synapse0x36c78c0();
   input += synapse0x36c7900();
   input += synapse0x36c7940();
   input += synapse0x36c7980();
   input += synapse0x36c79c0();
   input += synapse0x36c7a00();
   input += synapse0x36c7a40();
   input += synapse0x36c7a80();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36c6960() {
   double input = input0x36c6960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36c7ac0() {
   double input = -0.601463;
   input += synapse0x36c7e00();
   input += synapse0x36c7e40();
   input += synapse0x36c7e80();
   input += synapse0x36c7ec0();
   input += synapse0x36c7f00();
   input += synapse0x36c7f40();
   input += synapse0x36c7f80();
   input += synapse0x36c7fc0();
   input += synapse0x36c8000();
   input += synapse0x36c8040();
   input += synapse0x36c8080();
   input += synapse0x36c80c0();
   input += synapse0x36c8100();
   input += synapse0x36c8140();
   input += synapse0x36c8180();
   input += synapse0x36c81c0();
   input += synapse0x36c7c50();
   input += synapse0x36c7c90();
   input += synapse0x36c8310();
   input += synapse0x36c8350();
   input += synapse0x36c8390();
   input += synapse0x36c83d0();
   input += synapse0x36c8410();
   input += synapse0x36c8450();
   input += synapse0x36c8490();
   input += synapse0x36c84d0();
   input += synapse0x36c8510();
   input += synapse0x36c8550();
   input += synapse0x36c8590();
   input += synapse0x36c85d0();
   input += synapse0x36c8610();
   input += synapse0x36c8650();
   input += synapse0x36c8200();
   input += synapse0x36c8240();
   input += synapse0x36c8280();
   input += synapse0x36c82c0();
   input += synapse0x36c88a0();
   input += synapse0x36c88e0();
   input += synapse0x36c8920();
   input += synapse0x36c8960();
   input += synapse0x36c89a0();
   input += synapse0x36c89e0();
   input += synapse0x36c8a20();
   input += synapse0x36c8a60();
   input += synapse0x36c8aa0();
   input += synapse0x36c8ae0();
   input += synapse0x36c8b20();
   input += synapse0x36c8b60();
   input += synapse0x36c8ba0();
   input += synapse0x36c8be0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36c7ac0() {
   double input = input0x36c7ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36c8c20() {
   double input = 0.0520627;
   input += synapse0x36c8f60();
   input += synapse0x36c8fa0();
   input += synapse0x36c8fe0();
   input += synapse0x36c9020();
   input += synapse0x36c9060();
   input += synapse0x36c90a0();
   input += synapse0x36c90e0();
   input += synapse0x36c9120();
   input += synapse0x36c9160();
   input += synapse0x36c91a0();
   input += synapse0x36c91e0();
   input += synapse0x36c9220();
   input += synapse0x36c9260();
   input += synapse0x36c92a0();
   input += synapse0x36c92e0();
   input += synapse0x36c9320();
   input += synapse0x36c8db0();
   input += synapse0x36c8df0();
   input += synapse0x36c9470();
   input += synapse0x36c94b0();
   input += synapse0x36c94f0();
   input += synapse0x36c9530();
   input += synapse0x36c9570();
   input += synapse0x36c95b0();
   input += synapse0x36c95f0();
   input += synapse0x36c9630();
   input += synapse0x36c9670();
   input += synapse0x36c96b0();
   input += synapse0x36c96f0();
   input += synapse0x36c9730();
   input += synapse0x36c9770();
   input += synapse0x36c97b0();
   input += synapse0x36c9360();
   input += synapse0x36c93a0();
   input += synapse0x36c93e0();
   input += synapse0x36c9420();
   input += synapse0x36c9a00();
   input += synapse0x36c9a40();
   input += synapse0x36c9a80();
   input += synapse0x36c9ac0();
   input += synapse0x36c9b00();
   input += synapse0x36c9b40();
   input += synapse0x36c9b80();
   input += synapse0x36c9bc0();
   input += synapse0x36c9c00();
   input += synapse0x36c9c40();
   input += synapse0x36c9c80();
   input += synapse0x36c9cc0();
   input += synapse0x36c9d00();
   input += synapse0x36c9d40();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36c8c20() {
   double input = input0x36c8c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLdL::input0x36c9d80() {
   double input = 8.65279;
   input += synapse0x36c9fa0();
   input += synapse0x36c9fe0();
   input += synapse0x36ca020();
   input += synapse0x36ca060();
   input += synapse0x36ca0a0();
   return input;
}

double NNfunction_ss_cLdL::neuron0x36c9d80() {
   double input = input0x36c9d80();
   return (input * 1)+0;
}

double NNfunction_ss_cLdL::synapse0x369a1f0() {
   return (neuron0x3694df0()*0.13284);
}

double NNfunction_ss_cLdL::synapse0x369a230() {
   return (neuron0x36950a0()*0.59701);
}

double NNfunction_ss_cLdL::synapse0x369a270() {
   return (neuron0x36953e0()*-0.146871);
}

double NNfunction_ss_cLdL::synapse0x369a2b0() {
   return (neuron0x3695720()*0.452944);
}

double NNfunction_ss_cLdL::synapse0x369a2f0() {
   return (neuron0x3695a60()*0.159591);
}

double NNfunction_ss_cLdL::synapse0x369a330() {
   return (neuron0x3695da0()*-1.00692);
}

double NNfunction_ss_cLdL::synapse0x369a370() {
   return (neuron0x36960e0()*0.698937);
}

double NNfunction_ss_cLdL::synapse0x369a3b0() {
   return (neuron0x3696420()*-0.261404);
}

double NNfunction_ss_cLdL::synapse0x369a3f0() {
   return (neuron0x3696760()*0.100046);
}

double NNfunction_ss_cLdL::synapse0x369a430() {
   return (neuron0x3696aa0()*0.0776799);
}

double NNfunction_ss_cLdL::synapse0x369a470() {
   return (neuron0x3696de0()*0.0897742);
}

double NNfunction_ss_cLdL::synapse0x369a4b0() {
   return (neuron0x3697120()*-0.195457);
}

double NNfunction_ss_cLdL::synapse0x369a4f0() {
   return (neuron0x3697460()*0.00047914);
}

double NNfunction_ss_cLdL::synapse0x369a530() {
   return (neuron0x36977a0()*-0.286336);
}

double NNfunction_ss_cLdL::synapse0x369a570() {
   return (neuron0x3697ae0()*0.708101);
}

double NNfunction_ss_cLdL::synapse0x369a5b0() {
   return (neuron0x3697e20()*0.925255);
}

double NNfunction_ss_cLdL::synapse0x369a040() {
   return (neuron0x3698160()*-0.705256);
}

double NNfunction_ss_cLdL::synapse0x369a080() {
   return (neuron0x36986c0()*0.705095);
}

double NNfunction_ss_cLdL::synapse0x3450fb0() {
   return (neuron0x3698a00()*-0.34335);
}

double NNfunction_ss_cLdL::synapse0x3450ff0() {
   return (neuron0x3698d40()*-0.0839986);
}

double NNfunction_ss_cLdL::synapse0x369a5f0() {
   return (neuron0x3699080()*-0.246864);
}

double NNfunction_ss_cLdL::synapse0x369a630() {
   return (neuron0x36993c0()*0.251808);
}

double NNfunction_ss_cLdL::synapse0x369a670() {
   return (neuron0x3699700()*0.18809);
}

double NNfunction_ss_cLdL::synapse0x369a6b0() {
   return (neuron0x3699a40()*-0.288659);
}

double NNfunction_ss_cLdL::synapse0x369aa30() {
   return (neuron0x3694df0()*-0.168329);
}

double NNfunction_ss_cLdL::synapse0x369aa70() {
   return (neuron0x36950a0()*-0.285351);
}

double NNfunction_ss_cLdL::synapse0x369aab0() {
   return (neuron0x36953e0()*-1.12161);
}

double NNfunction_ss_cLdL::synapse0x369aaf0() {
   return (neuron0x3695720()*-0.277954);
}

double NNfunction_ss_cLdL::synapse0x369ab30() {
   return (neuron0x3695a60()*-0.315093);
}

double NNfunction_ss_cLdL::synapse0x369ab70() {
   return (neuron0x3695da0()*-1.18747);
}

double NNfunction_ss_cLdL::synapse0x369abb0() {
   return (neuron0x36960e0()*-0.718303);
}

double NNfunction_ss_cLdL::synapse0x369abf0() {
   return (neuron0x3696420()*-0.656096);
}

double NNfunction_ss_cLdL::synapse0x369ac30() {
   return (neuron0x3696760()*-0.494187);
}

double NNfunction_ss_cLdL::synapse0x3450e00() {
   return (neuron0x3696aa0()*-1.84097);
}

double NNfunction_ss_cLdL::synapse0x3450e40() {
   return (neuron0x3696de0()*-0.287971);
}

double NNfunction_ss_cLdL::synapse0x3450e80() {
   return (neuron0x3697120()*0.742406);
}

double NNfunction_ss_cLdL::synapse0x3450ec0() {
   return (neuron0x3697460()*2.06703);
}

double NNfunction_ss_cLdL::synapse0x369ae80() {
   return (neuron0x36977a0()*-0.0576636);
}

double NNfunction_ss_cLdL::synapse0x369aec0() {
   return (neuron0x3697ae0()*-0.331278);
}

double NNfunction_ss_cLdL::synapse0x369af00() {
   return (neuron0x3697e20()*0.0289327);
}

double NNfunction_ss_cLdL::synapse0x369a880() {
   return (neuron0x3698160()*0.201277);
}

double NNfunction_ss_cLdL::synapse0x369a8c0() {
   return (neuron0x36986c0()*0.0626361);
}

double NNfunction_ss_cLdL::synapse0x369b050() {
   return (neuron0x3698a00()*-0.149563);
}

double NNfunction_ss_cLdL::synapse0x369b090() {
   return (neuron0x3698d40()*0.39351);
}

double NNfunction_ss_cLdL::synapse0x369b0d0() {
   return (neuron0x3699080()*-0.781898);
}

double NNfunction_ss_cLdL::synapse0x369b110() {
   return (neuron0x36993c0()*0.29642);
}

double NNfunction_ss_cLdL::synapse0x369b150() {
   return (neuron0x3699700()*0.0965463);
}

double NNfunction_ss_cLdL::synapse0x369b190() {
   return (neuron0x3699a40()*-0.113066);
}

double NNfunction_ss_cLdL::synapse0x369b510() {
   return (neuron0x3694df0()*-0.163863);
}

double NNfunction_ss_cLdL::synapse0x369b550() {
   return (neuron0x36950a0()*-0.146641);
}

double NNfunction_ss_cLdL::synapse0x369b590() {
   return (neuron0x36953e0()*0.108357);
}

double NNfunction_ss_cLdL::synapse0x369b5d0() {
   return (neuron0x3695720()*0.410449);
}

double NNfunction_ss_cLdL::synapse0x369b610() {
   return (neuron0x3695a60()*-0.270249);
}

double NNfunction_ss_cLdL::synapse0x369b650() {
   return (neuron0x3695da0()*0.1986);
}

double NNfunction_ss_cLdL::synapse0x369b690() {
   return (neuron0x36960e0()*0.0596808);
}

double NNfunction_ss_cLdL::synapse0x369b6d0() {
   return (neuron0x3696420()*-0.299134);
}

double NNfunction_ss_cLdL::synapse0x369b710() {
   return (neuron0x3696760()*0.165047);
}

double NNfunction_ss_cLdL::synapse0x369b750() {
   return (neuron0x3696aa0()*0.342151);
}

double NNfunction_ss_cLdL::synapse0x369b790() {
   return (neuron0x3696de0()*0.472911);
}

double NNfunction_ss_cLdL::synapse0x369b7d0() {
   return (neuron0x3697120()*-0.241223);
}

double NNfunction_ss_cLdL::synapse0x369b810() {
   return (neuron0x3697460()*-1.12157);
}

double NNfunction_ss_cLdL::synapse0x369b850() {
   return (neuron0x36977a0()*-0.495405);
}

double NNfunction_ss_cLdL::synapse0x369b890() {
   return (neuron0x3697ae0()*0.348742);
}

double NNfunction_ss_cLdL::synapse0x369b8d0() {
   return (neuron0x3697e20()*-0.78022);
}

double NNfunction_ss_cLdL::synapse0x369b360() {
   return (neuron0x3698160()*-0.104475);
}

double NNfunction_ss_cLdL::synapse0x369b3a0() {
   return (neuron0x36986c0()*0.343769);
}

double NNfunction_ss_cLdL::synapse0x3451660() {
   return (neuron0x3698a00()*-0.158686);
}

double NNfunction_ss_cLdL::synapse0x345ef30() {
   return (neuron0x3698d40()*-0.079225);
}

double NNfunction_ss_cLdL::synapse0x345ef70() {
   return (neuron0x3699080()*-0.041998);
}

double NNfunction_ss_cLdL::synapse0x369d800() {
   return (neuron0x36993c0()*0.054504);
}

double NNfunction_ss_cLdL::synapse0x369d840() {
   return (neuron0x3699700()*-0.17428);
}

double NNfunction_ss_cLdL::synapse0x3694b30() {
   return (neuron0x3699a40()*0.394645);
}

double NNfunction_ss_cLdL::synapse0x3694c00() {
   return (neuron0x3694df0()*-0.171978);
}

double NNfunction_ss_cLdL::synapse0x345f7b0() {
   return (neuron0x36950a0()*0.0839455);
}

double NNfunction_ss_cLdL::synapse0x369ae00() {
   return (neuron0x36953e0()*0.277614);
}

double NNfunction_ss_cLdL::synapse0x369ae40() {
   return (neuron0x3695720()*0.364039);
}

double NNfunction_ss_cLdL::synapse0x369ba20() {
   return (neuron0x3695a60()*-0.109881);
}

double NNfunction_ss_cLdL::synapse0x369ba60() {
   return (neuron0x3695da0()*-0.113366);
}

double NNfunction_ss_cLdL::synapse0x369baa0() {
   return (neuron0x36960e0()*0.212915);
}

double NNfunction_ss_cLdL::synapse0x369bae0() {
   return (neuron0x3696420()*-0.0668967);
}

double NNfunction_ss_cLdL::synapse0x369bb20() {
   return (neuron0x3696760()*0.258944);
}

double NNfunction_ss_cLdL::synapse0x369bb60() {
   return (neuron0x3696aa0()*-0.794076);
}

double NNfunction_ss_cLdL::synapse0x369bba0() {
   return (neuron0x3696de0()*0.114353);
}

double NNfunction_ss_cLdL::synapse0x369bbe0() {
   return (neuron0x3697120()*1.17954);
}

double NNfunction_ss_cLdL::synapse0x369bc20() {
   return (neuron0x3697460()*-1.66057);
}

double NNfunction_ss_cLdL::synapse0x369bc60() {
   return (neuron0x36977a0()*0.196512);
}

double NNfunction_ss_cLdL::synapse0x369bca0() {
   return (neuron0x3697ae0()*0.696746);
}

double NNfunction_ss_cLdL::synapse0x369bce0() {
   return (neuron0x3697e20()*0.204713);
}

double NNfunction_ss_cLdL::synapse0x3694b70() {
   return (neuron0x3698160()*0.0530066);
}

double NNfunction_ss_cLdL::synapse0x3694bb0() {
   return (neuron0x36986c0()*-0.382724);
}

double NNfunction_ss_cLdL::synapse0x369be30() {
   return (neuron0x3698a00()*0.410591);
}

double NNfunction_ss_cLdL::synapse0x369be70() {
   return (neuron0x3698d40()*-0.394782);
}

double NNfunction_ss_cLdL::synapse0x369beb0() {
   return (neuron0x3699080()*0.260341);
}

double NNfunction_ss_cLdL::synapse0x369bef0() {
   return (neuron0x36993c0()*0.200995);
}

double NNfunction_ss_cLdL::synapse0x369bf30() {
   return (neuron0x3699700()*-0.0841416);
}

double NNfunction_ss_cLdL::synapse0x369bf70() {
   return (neuron0x3699a40()*0.168723);
}

double NNfunction_ss_cLdL::synapse0x369c2f0() {
   return (neuron0x3694df0()*-0.288456);
}

double NNfunction_ss_cLdL::synapse0x369c330() {
   return (neuron0x36950a0()*-0.30345);
}

double NNfunction_ss_cLdL::synapse0x369c370() {
   return (neuron0x36953e0()*0.445127);
}

double NNfunction_ss_cLdL::synapse0x369c3b0() {
   return (neuron0x3695720()*1.00084);
}

double NNfunction_ss_cLdL::synapse0x369c3f0() {
   return (neuron0x3695a60()*0.11405);
}

double NNfunction_ss_cLdL::synapse0x369c430() {
   return (neuron0x3695da0()*0.332699);
}

double NNfunction_ss_cLdL::synapse0x369c470() {
   return (neuron0x36960e0()*-0.282163);
}

double NNfunction_ss_cLdL::synapse0x369c4b0() {
   return (neuron0x3696420()*0.177177);
}

double NNfunction_ss_cLdL::synapse0x369c4f0() {
   return (neuron0x3696760()*0.0971032);
}

double NNfunction_ss_cLdL::synapse0x369c530() {
   return (neuron0x3696aa0()*0.330322);
}

double NNfunction_ss_cLdL::synapse0x369c570() {
   return (neuron0x3696de0()*-0.33842);
}

double NNfunction_ss_cLdL::synapse0x369c5b0() {
   return (neuron0x3697120()*-0.0743607);
}

double NNfunction_ss_cLdL::synapse0x369c5f0() {
   return (neuron0x3697460()*-0.370605);
}

double NNfunction_ss_cLdL::synapse0x369c630() {
   return (neuron0x36977a0()*-0.41749);
}

double NNfunction_ss_cLdL::synapse0x369c670() {
   return (neuron0x3697ae0()*0.00311817);
}

double NNfunction_ss_cLdL::synapse0x369c6b0() {
   return (neuron0x3697e20()*0.232997);
}

double NNfunction_ss_cLdL::synapse0x369c800() {
   return (neuron0x3698160()*-0.0914939);
}

double NNfunction_ss_cLdL::synapse0x369c140() {
   return (neuron0x36986c0()*-0.314758);
}

double NNfunction_ss_cLdL::synapse0x369c180() {
   return (neuron0x3698a00()*0.0342613);
}

double NNfunction_ss_cLdL::synapse0x369d940() {
   return (neuron0x3698d40()*0.0666178);
}

double NNfunction_ss_cLdL::synapse0x369d980() {
   return (neuron0x3699080()*0.239955);
}

double NNfunction_ss_cLdL::synapse0x369d9c0() {
   return (neuron0x36993c0()*0.124241);
}

double NNfunction_ss_cLdL::synapse0x369da00() {
   return (neuron0x3699700()*0.495385);
}

double NNfunction_ss_cLdL::synapse0x369da40() {
   return (neuron0x3699a40()*-0.155787);
}

double NNfunction_ss_cLdL::synapse0x369ddc0() {
   return (neuron0x3694df0()*-0.336163);
}

double NNfunction_ss_cLdL::synapse0x369de00() {
   return (neuron0x36950a0()*0.0997144);
}

double NNfunction_ss_cLdL::synapse0x369de40() {
   return (neuron0x36953e0()*-0.68879);
}

double NNfunction_ss_cLdL::synapse0x369de80() {
   return (neuron0x3695720()*0.78854);
}

double NNfunction_ss_cLdL::synapse0x369dec0() {
   return (neuron0x3695a60()*-0.246294);
}

double NNfunction_ss_cLdL::synapse0x369df00() {
   return (neuron0x3695da0()*0.0347458);
}

double NNfunction_ss_cLdL::synapse0x369df40() {
   return (neuron0x36960e0()*0.0147356);
}

double NNfunction_ss_cLdL::synapse0x369df80() {
   return (neuron0x3696420()*-0.195602);
}

double NNfunction_ss_cLdL::synapse0x369dfc0() {
   return (neuron0x3696760()*0.0208844);
}

double NNfunction_ss_cLdL::synapse0x345f280() {
   return (neuron0x3696aa0()*0.291423);
}

double NNfunction_ss_cLdL::synapse0x345f2c0() {
   return (neuron0x3696de0()*0.00365427);
}

double NNfunction_ss_cLdL::synapse0x345f300() {
   return (neuron0x3697120()*-0.0346994);
}

double NNfunction_ss_cLdL::synapse0x345f340() {
   return (neuron0x3697460()*-0.0232995);
}

double NNfunction_ss_cLdL::synapse0x345f380() {
   return (neuron0x36977a0()*0.0798366);
}

double NNfunction_ss_cLdL::synapse0x345f3c0() {
   return (neuron0x3697ae0()*-0.153971);
}

double NNfunction_ss_cLdL::synapse0x345f400() {
   return (neuron0x3697e20()*-0.0110057);
}

double NNfunction_ss_cLdL::synapse0x369dc10() {
   return (neuron0x3698160()*0.0542803);
}

double NNfunction_ss_cLdL::synapse0x369dc50() {
   return (neuron0x36986c0()*-0.035738);
}

double NNfunction_ss_cLdL::synapse0x345f550() {
   return (neuron0x3698a00()*-0.293149);
}

double NNfunction_ss_cLdL::synapse0x345f590() {
   return (neuron0x3698d40()*-0.155689);
}

double NNfunction_ss_cLdL::synapse0x345f5d0() {
   return (neuron0x3699080()*0.0496107);
}

double NNfunction_ss_cLdL::synapse0x345f610() {
   return (neuron0x36993c0()*0.0556818);
}

double NNfunction_ss_cLdL::synapse0x345f650() {
   return (neuron0x3699700()*0.0282169);
}

double NNfunction_ss_cLdL::synapse0x369e810() {
   return (neuron0x3699a40()*-0.0739914);
}

double NNfunction_ss_cLdL::synapse0x369eb90() {
   return (neuron0x3694df0()*-0.469582);
}

double NNfunction_ss_cLdL::synapse0x369ebd0() {
   return (neuron0x36950a0()*-0.0802274);
}

double NNfunction_ss_cLdL::synapse0x369ec10() {
   return (neuron0x36953e0()*-0.618721);
}

double NNfunction_ss_cLdL::synapse0x369ec50() {
   return (neuron0x3695720()*-0.685781);
}

double NNfunction_ss_cLdL::synapse0x369ec90() {
   return (neuron0x3695a60()*0.168817);
}

double NNfunction_ss_cLdL::synapse0x369ecd0() {
   return (neuron0x3695da0()*0.072721);
}

double NNfunction_ss_cLdL::synapse0x369ed10() {
   return (neuron0x36960e0()*-0.19032);
}

double NNfunction_ss_cLdL::synapse0x369ed50() {
   return (neuron0x3696420()*0.00752589);
}

double NNfunction_ss_cLdL::synapse0x369ed90() {
   return (neuron0x3696760()*-0.90711);
}

double NNfunction_ss_cLdL::synapse0x369edd0() {
   return (neuron0x3696aa0()*0.614528);
}

double NNfunction_ss_cLdL::synapse0x369ee10() {
   return (neuron0x3696de0()*0.332025);
}

double NNfunction_ss_cLdL::synapse0x369ee50() {
   return (neuron0x3697120()*-0.459208);
}

double NNfunction_ss_cLdL::synapse0x369ee90() {
   return (neuron0x3697460()*0.148632);
}

double NNfunction_ss_cLdL::synapse0x369eed0() {
   return (neuron0x36977a0()*0.0947312);
}

double NNfunction_ss_cLdL::synapse0x369ef10() {
   return (neuron0x3697ae0()*-0.578045);
}

double NNfunction_ss_cLdL::synapse0x369ef50() {
   return (neuron0x3697e20()*0.670269);
}

double NNfunction_ss_cLdL::synapse0x369e9e0() {
   return (neuron0x3698160()*0.120884);
}

double NNfunction_ss_cLdL::synapse0x369ea20() {
   return (neuron0x36986c0()*0.439541);
}

double NNfunction_ss_cLdL::synapse0x369f0a0() {
   return (neuron0x3698a00()*0.43973);
}

double NNfunction_ss_cLdL::synapse0x369f0e0() {
   return (neuron0x3698d40()*-0.649254);
}

double NNfunction_ss_cLdL::synapse0x369f120() {
   return (neuron0x3699080()*-0.244071);
}

double NNfunction_ss_cLdL::synapse0x369f160() {
   return (neuron0x36993c0()*0.147708);
}

double NNfunction_ss_cLdL::synapse0x369f1a0() {
   return (neuron0x3699700()*0.581942);
}

double NNfunction_ss_cLdL::synapse0x369f1e0() {
   return (neuron0x3699a40()*0.370949);
}

double NNfunction_ss_cLdL::synapse0x369f560() {
   return (neuron0x3694df0()*-0.00427933);
}

double NNfunction_ss_cLdL::synapse0x369f5a0() {
   return (neuron0x36950a0()*-0.00559498);
}

double NNfunction_ss_cLdL::synapse0x369f5e0() {
   return (neuron0x36953e0()*0.0418319);
}

double NNfunction_ss_cLdL::synapse0x369f620() {
   return (neuron0x3695720()*2.57793);
}

double NNfunction_ss_cLdL::synapse0x369f660() {
   return (neuron0x3695a60()*0.0614787);
}

double NNfunction_ss_cLdL::synapse0x369f6a0() {
   return (neuron0x3695da0()*-0.0124285);
}

double NNfunction_ss_cLdL::synapse0x369f6e0() {
   return (neuron0x36960e0()*0.0239858);
}

double NNfunction_ss_cLdL::synapse0x369f720() {
   return (neuron0x3696420()*0.0332711);
}

double NNfunction_ss_cLdL::synapse0x369f760() {
   return (neuron0x3696760()*-0.0188335);
}

double NNfunction_ss_cLdL::synapse0x369f7a0() {
   return (neuron0x3696aa0()*-0.00483506);
}

double NNfunction_ss_cLdL::synapse0x369f7e0() {
   return (neuron0x3696de0()*-0.00851058);
}

double NNfunction_ss_cLdL::synapse0x369f820() {
   return (neuron0x3697120()*-0.142655);
}

double NNfunction_ss_cLdL::synapse0x369f860() {
   return (neuron0x3697460()*-0.227582);
}

double NNfunction_ss_cLdL::synapse0x369f8a0() {
   return (neuron0x36977a0()*0.00911288);
}

double NNfunction_ss_cLdL::synapse0x369f8e0() {
   return (neuron0x3697ae0()*-0.0295271);
}

double NNfunction_ss_cLdL::synapse0x369f920() {
   return (neuron0x3697e20()*0.00749718);
}

double NNfunction_ss_cLdL::synapse0x369f3b0() {
   return (neuron0x3698160()*0.0161625);
}

double NNfunction_ss_cLdL::synapse0x369f3f0() {
   return (neuron0x36986c0()*0.0032794);
}

double NNfunction_ss_cLdL::synapse0x369fa70() {
   return (neuron0x3698a00()*0.0237584);
}

double NNfunction_ss_cLdL::synapse0x369fab0() {
   return (neuron0x3698d40()*0.00783416);
}

double NNfunction_ss_cLdL::synapse0x369faf0() {
   return (neuron0x3699080()*0.009471);
}

double NNfunction_ss_cLdL::synapse0x369fb30() {
   return (neuron0x36993c0()*-0.00835134);
}

double NNfunction_ss_cLdL::synapse0x369fb70() {
   return (neuron0x3699700()*0.0107006);
}

double NNfunction_ss_cLdL::synapse0x369fbb0() {
   return (neuron0x3699a40()*0.00305794);
}

double NNfunction_ss_cLdL::synapse0x36985b0() {
   return (neuron0x3694df0()*-0.00452269);
}

double NNfunction_ss_cLdL::synapse0x36985f0() {
   return (neuron0x36950a0()*-0.0181401);
}

double NNfunction_ss_cLdL::synapse0x3698630() {
   return (neuron0x36953e0()*-0.231076);
}

double NNfunction_ss_cLdL::synapse0x3698670() {
   return (neuron0x3695720()*8.00284);
}

double NNfunction_ss_cLdL::synapse0x36a0140() {
   return (neuron0x3695a60()*-0.0499832);
}

double NNfunction_ss_cLdL::synapse0x36a0180() {
   return (neuron0x3695da0()*-0.0606096);
}

double NNfunction_ss_cLdL::synapse0x36a01c0() {
   return (neuron0x36960e0()*-0.0517002);
}

double NNfunction_ss_cLdL::synapse0x36a0200() {
   return (neuron0x3696420()*-0.0655962);
}

double NNfunction_ss_cLdL::synapse0x36a0240() {
   return (neuron0x3696760()*-0.0469433);
}

double NNfunction_ss_cLdL::synapse0x36a0280() {
   return (neuron0x3696aa0()*-0.0280072);
}

double NNfunction_ss_cLdL::synapse0x36a02c0() {
   return (neuron0x3696de0()*-0.130041);
}

double NNfunction_ss_cLdL::synapse0x36a0300() {
   return (neuron0x3697120()*0.237104);
}

double NNfunction_ss_cLdL::synapse0x36a0340() {
   return (neuron0x3697460()*0.0792829);
}

double NNfunction_ss_cLdL::synapse0x36a0380() {
   return (neuron0x36977a0()*0.0329327);
}

double NNfunction_ss_cLdL::synapse0x36a03c0() {
   return (neuron0x3697ae0()*0.0262223);
}

double NNfunction_ss_cLdL::synapse0x36a0400() {
   return (neuron0x3697e20()*0.000194407);
}

double NNfunction_ss_cLdL::synapse0x369fd80() {
   return (neuron0x3698160()*-0.0580132);
}

double NNfunction_ss_cLdL::synapse0x369fdc0() {
   return (neuron0x36986c0()*-0.0114137);
}

double NNfunction_ss_cLdL::synapse0x36a0550() {
   return (neuron0x3698a00()*-0.0313677);
}

double NNfunction_ss_cLdL::synapse0x36a0590() {
   return (neuron0x3698d40()*0.00989004);
}

double NNfunction_ss_cLdL::synapse0x36a05d0() {
   return (neuron0x3699080()*-0.02499);
}

double NNfunction_ss_cLdL::synapse0x36a0610() {
   return (neuron0x36993c0()*0.0314631);
}

double NNfunction_ss_cLdL::synapse0x36a0650() {
   return (neuron0x3699700()*0.0238333);
}

double NNfunction_ss_cLdL::synapse0x36a0690() {
   return (neuron0x3699a40()*0.0529911);
}

double NNfunction_ss_cLdL::synapse0x36a0a10() {
   return (neuron0x3694df0()*-0.0444239);
}

double NNfunction_ss_cLdL::synapse0x36a0a50() {
   return (neuron0x36950a0()*-0.0171787);
}

double NNfunction_ss_cLdL::synapse0x36a0a90() {
   return (neuron0x36953e0()*0.0183526);
}

double NNfunction_ss_cLdL::synapse0x36a0ad0() {
   return (neuron0x3695720()*-0.11581);
}

double NNfunction_ss_cLdL::synapse0x36a0b10() {
   return (neuron0x3695a60()*-0.0111158);
}

double NNfunction_ss_cLdL::synapse0x36a0b50() {
   return (neuron0x3695da0()*-0.0258333);
}

double NNfunction_ss_cLdL::synapse0x36a0b90() {
   return (neuron0x36960e0()*0.0120548);
}

double NNfunction_ss_cLdL::synapse0x36a0bd0() {
   return (neuron0x3696420()*-0.0100902);
}

double NNfunction_ss_cLdL::synapse0x36a0c10() {
   return (neuron0x3696760()*0.000284785);
}

double NNfunction_ss_cLdL::synapse0x36a0c50() {
   return (neuron0x3696aa0()*0.0141334);
}

double NNfunction_ss_cLdL::synapse0x36a0c90() {
   return (neuron0x3696de0()*-0.0277573);
}

double NNfunction_ss_cLdL::synapse0x36a0cd0() {
   return (neuron0x3697120()*-0.695376);
}

double NNfunction_ss_cLdL::synapse0x36a0d10() {
   return (neuron0x3697460()*-0.39691);
}

double NNfunction_ss_cLdL::synapse0x36a0d50() {
   return (neuron0x36977a0()*-0.0254983);
}

double NNfunction_ss_cLdL::synapse0x36a0d90() {
   return (neuron0x3697ae0()*-0.0102147);
}

double NNfunction_ss_cLdL::synapse0x36a0dd0() {
   return (neuron0x3697e20()*0.0531649);
}

double NNfunction_ss_cLdL::synapse0x36a0860() {
   return (neuron0x3698160()*0.00316376);
}

double NNfunction_ss_cLdL::synapse0x36a08a0() {
   return (neuron0x36986c0()*0.0252899);
}

double NNfunction_ss_cLdL::synapse0x36a0f20() {
   return (neuron0x3698a00()*0.0187721);
}

double NNfunction_ss_cLdL::synapse0x36a0f60() {
   return (neuron0x3698d40()*-0.0275188);
}

double NNfunction_ss_cLdL::synapse0x36a0fa0() {
   return (neuron0x3699080()*0.0494372);
}

double NNfunction_ss_cLdL::synapse0x36a0fe0() {
   return (neuron0x36993c0()*0.0127334);
}

double NNfunction_ss_cLdL::synapse0x36a1020() {
   return (neuron0x3699700()*0.00981604);
}

double NNfunction_ss_cLdL::synapse0x36a1060() {
   return (neuron0x3699a40()*-0.0527519);
}

double NNfunction_ss_cLdL::synapse0x36a13e0() {
   return (neuron0x3694df0()*-0.16653);
}

double NNfunction_ss_cLdL::synapse0x36a1420() {
   return (neuron0x36950a0()*-0.0515301);
}

double NNfunction_ss_cLdL::synapse0x36a1460() {
   return (neuron0x36953e0()*-0.109162);
}

double NNfunction_ss_cLdL::synapse0x36a14a0() {
   return (neuron0x3695720()*0.732363);
}

double NNfunction_ss_cLdL::synapse0x36a14e0() {
   return (neuron0x3695a60()*0.175412);
}

double NNfunction_ss_cLdL::synapse0x36a1520() {
   return (neuron0x3695da0()*-0.14356);
}

double NNfunction_ss_cLdL::synapse0x36a1560() {
   return (neuron0x36960e0()*0.22635);
}

double NNfunction_ss_cLdL::synapse0x36a15a0() {
   return (neuron0x3696420()*0.115806);
}

double NNfunction_ss_cLdL::synapse0x36a15e0() {
   return (neuron0x3696760()*0.386316);
}

double NNfunction_ss_cLdL::synapse0x36a1620() {
   return (neuron0x3696aa0()*-0.175084);
}

double NNfunction_ss_cLdL::synapse0x36a1660() {
   return (neuron0x3696de0()*0.00564035);
}

double NNfunction_ss_cLdL::synapse0x36a16a0() {
   return (neuron0x3697120()*-0.183387);
}

double NNfunction_ss_cLdL::synapse0x36a16e0() {
   return (neuron0x3697460()*-0.519822);
}

double NNfunction_ss_cLdL::synapse0x36a1720() {
   return (neuron0x36977a0()*0.501015);
}

double NNfunction_ss_cLdL::synapse0x36a1760() {
   return (neuron0x3697ae0()*-0.160061);
}

double NNfunction_ss_cLdL::synapse0x36a17a0() {
   return (neuron0x3697e20()*-0.021641);
}

double NNfunction_ss_cLdL::synapse0x36a1230() {
   return (neuron0x3698160()*-0.32046);
}

double NNfunction_ss_cLdL::synapse0x36a1270() {
   return (neuron0x36986c0()*-0.0809954);
}

double NNfunction_ss_cLdL::synapse0x369e000() {
   return (neuron0x3698a00()*0.395596);
}

double NNfunction_ss_cLdL::synapse0x369e040() {
   return (neuron0x3698d40()*0.614008);
}

double NNfunction_ss_cLdL::synapse0x369e080() {
   return (neuron0x3699080()*-0.0534011);
}

double NNfunction_ss_cLdL::synapse0x369e0c0() {
   return (neuron0x36993c0()*0.222282);
}

double NNfunction_ss_cLdL::synapse0x369e100() {
   return (neuron0x3699700()*-0.259675);
}

double NNfunction_ss_cLdL::synapse0x369e140() {
   return (neuron0x3699a40()*0.196016);
}

double NNfunction_ss_cLdL::synapse0x369e4c0() {
   return (neuron0x3694df0()*0.041039);
}

double NNfunction_ss_cLdL::synapse0x369e500() {
   return (neuron0x36950a0()*-0.0646611);
}

double NNfunction_ss_cLdL::synapse0x369e540() {
   return (neuron0x36953e0()*-0.00227021);
}

double NNfunction_ss_cLdL::synapse0x369e580() {
   return (neuron0x3695720()*-0.108465);
}

double NNfunction_ss_cLdL::synapse0x369e5c0() {
   return (neuron0x3695a60()*0.0153829);
}

double NNfunction_ss_cLdL::synapse0x369e600() {
   return (neuron0x3695da0()*0.180432);
}

double NNfunction_ss_cLdL::synapse0x369e640() {
   return (neuron0x36960e0()*0.0787187);
}

double NNfunction_ss_cLdL::synapse0x369e680() {
   return (neuron0x3696420()*0.470417);
}

double NNfunction_ss_cLdL::synapse0x369e6c0() {
   return (neuron0x3696760()*0.237406);
}

double NNfunction_ss_cLdL::synapse0x369e700() {
   return (neuron0x3696aa0()*0.0984144);
}

double NNfunction_ss_cLdL::synapse0x369e740() {
   return (neuron0x3696de0()*-0.102162);
}

double NNfunction_ss_cLdL::synapse0x369e780() {
   return (neuron0x3697120()*-0.17929);
}

double NNfunction_ss_cLdL::synapse0x369e7c0() {
   return (neuron0x3697460()*0.882904);
}

double NNfunction_ss_cLdL::synapse0x36a2900() {
   return (neuron0x36977a0()*1.11834);
}

double NNfunction_ss_cLdL::synapse0x36a2940() {
   return (neuron0x3697ae0()*-0.927163);
}

double NNfunction_ss_cLdL::synapse0x36a2980() {
   return (neuron0x3697e20()*-0.0410445);
}

double NNfunction_ss_cLdL::synapse0x369e310() {
   return (neuron0x3698160()*-0.527864);
}

double NNfunction_ss_cLdL::synapse0x369e350() {
   return (neuron0x36986c0()*-0.196382);
}

double NNfunction_ss_cLdL::synapse0x36a2ad0() {
   return (neuron0x3698a00()*-0.606017);
}

double NNfunction_ss_cLdL::synapse0x36a2b10() {
   return (neuron0x3698d40()*-0.345806);
}

double NNfunction_ss_cLdL::synapse0x36a2b50() {
   return (neuron0x3699080()*0.285747);
}

double NNfunction_ss_cLdL::synapse0x36a2b90() {
   return (neuron0x36993c0()*0.0907405);
}

double NNfunction_ss_cLdL::synapse0x36a2bd0() {
   return (neuron0x3699700()*0.422662);
}

double NNfunction_ss_cLdL::synapse0x36a2c10() {
   return (neuron0x3699a40()*0.473324);
}

double NNfunction_ss_cLdL::synapse0x36a2f90() {
   return (neuron0x3694df0()*-0.0236994);
}

double NNfunction_ss_cLdL::synapse0x36a2fd0() {
   return (neuron0x36950a0()*0.0207792);
}

double NNfunction_ss_cLdL::synapse0x36a3010() {
   return (neuron0x36953e0()*0.0534053);
}

double NNfunction_ss_cLdL::synapse0x36a3050() {
   return (neuron0x3695720()*-2.7061);
}

double NNfunction_ss_cLdL::synapse0x36a3090() {
   return (neuron0x3695a60()*0.0865786);
}

double NNfunction_ss_cLdL::synapse0x36a30d0() {
   return (neuron0x3695da0()*0.0187863);
}

double NNfunction_ss_cLdL::synapse0x36a3110() {
   return (neuron0x36960e0()*-0.0183008);
}

double NNfunction_ss_cLdL::synapse0x36a3150() {
   return (neuron0x3696420()*-0.00173691);
}

double NNfunction_ss_cLdL::synapse0x36a3190() {
   return (neuron0x3696760()*-0.0440678);
}

double NNfunction_ss_cLdL::synapse0x36a31d0() {
   return (neuron0x3696aa0()*0.0271438);
}

double NNfunction_ss_cLdL::synapse0x36a3210() {
   return (neuron0x3696de0()*-0.106625);
}

double NNfunction_ss_cLdL::synapse0x36a3250() {
   return (neuron0x3697120()*-0.113252);
}

double NNfunction_ss_cLdL::synapse0x36a3290() {
   return (neuron0x3697460()*-0.097729);
}

double NNfunction_ss_cLdL::synapse0x36a32d0() {
   return (neuron0x36977a0()*0.0499255);
}

double NNfunction_ss_cLdL::synapse0x36a3310() {
   return (neuron0x3697ae0()*-0.0408754);
}

double NNfunction_ss_cLdL::synapse0x36a3350() {
   return (neuron0x3697e20()*0.0687581);
}

double NNfunction_ss_cLdL::synapse0x36a2de0() {
   return (neuron0x3698160()*0.0402603);
}

double NNfunction_ss_cLdL::synapse0x36a2e20() {
   return (neuron0x36986c0()*-0.0329462);
}

double NNfunction_ss_cLdL::synapse0x36a34a0() {
   return (neuron0x3698a00()*0.00446137);
}

double NNfunction_ss_cLdL::synapse0x36a34e0() {
   return (neuron0x3698d40()*-0.0271061);
}

double NNfunction_ss_cLdL::synapse0x36a3520() {
   return (neuron0x3699080()*0.0407739);
}

double NNfunction_ss_cLdL::synapse0x36a3560() {
   return (neuron0x36993c0()*0.0169173);
}

double NNfunction_ss_cLdL::synapse0x36a35a0() {
   return (neuron0x3699700()*-0.0130462);
}

double NNfunction_ss_cLdL::synapse0x36a35e0() {
   return (neuron0x3699a40()*0.0367879);
}

double NNfunction_ss_cLdL::synapse0x36a3960() {
   return (neuron0x3694df0()*-0.0122402);
}

double NNfunction_ss_cLdL::synapse0x36a39a0() {
   return (neuron0x36950a0()*-0.0202292);
}

double NNfunction_ss_cLdL::synapse0x36a39e0() {
   return (neuron0x36953e0()*0.0182035);
}

double NNfunction_ss_cLdL::synapse0x36a3a20() {
   return (neuron0x3695720()*-0.158745);
}

double NNfunction_ss_cLdL::synapse0x36a3a60() {
   return (neuron0x3695a60()*0.00463267);
}

double NNfunction_ss_cLdL::synapse0x36a3aa0() {
   return (neuron0x3695da0()*-0.0312171);
}

double NNfunction_ss_cLdL::synapse0x36a3ae0() {
   return (neuron0x36960e0()*-0.0302056);
}

double NNfunction_ss_cLdL::synapse0x36a3b20() {
   return (neuron0x3696420()*-0.00532169);
}

double NNfunction_ss_cLdL::synapse0x36a3b60() {
   return (neuron0x3696760()*0.0243656);
}

double NNfunction_ss_cLdL::synapse0x36a3ba0() {
   return (neuron0x3696aa0()*-0.00953143);
}

double NNfunction_ss_cLdL::synapse0x36a3be0() {
   return (neuron0x3696de0()*0.00845443);
}

double NNfunction_ss_cLdL::synapse0x36a3c20() {
   return (neuron0x3697120()*0.385497);
}

double NNfunction_ss_cLdL::synapse0x36a3c60() {
   return (neuron0x3697460()*-0.849811);
}

double NNfunction_ss_cLdL::synapse0x36a3ca0() {
   return (neuron0x36977a0()*0.0177562);
}

double NNfunction_ss_cLdL::synapse0x36a3ce0() {
   return (neuron0x3697ae0()*-0.0390775);
}

double NNfunction_ss_cLdL::synapse0x36a3d20() {
   return (neuron0x3697e20()*-0.00963473);
}

double NNfunction_ss_cLdL::synapse0x36a37b0() {
   return (neuron0x3698160()*0.00297666);
}

double NNfunction_ss_cLdL::synapse0x36a37f0() {
   return (neuron0x36986c0()*-0.00151311);
}

double NNfunction_ss_cLdL::synapse0x36a3e70() {
   return (neuron0x3698a00()*-0.0172636);
}

double NNfunction_ss_cLdL::synapse0x36a3eb0() {
   return (neuron0x3698d40()*-0.0159973);
}

double NNfunction_ss_cLdL::synapse0x36a3ef0() {
   return (neuron0x3699080()*0.00393121);
}

double NNfunction_ss_cLdL::synapse0x36a3f30() {
   return (neuron0x36993c0()*0.000407292);
}

double NNfunction_ss_cLdL::synapse0x36a3f70() {
   return (neuron0x3699700()*-0.00287714);
}

double NNfunction_ss_cLdL::synapse0x36a3fb0() {
   return (neuron0x3699a40()*-0.0382763);
}

double NNfunction_ss_cLdL::synapse0x36a4330() {
   return (neuron0x3694df0()*0.120609);
}

double NNfunction_ss_cLdL::synapse0x36a4370() {
   return (neuron0x36950a0()*-0.0790537);
}

double NNfunction_ss_cLdL::synapse0x36a43b0() {
   return (neuron0x36953e0()*-0.524603);
}

double NNfunction_ss_cLdL::synapse0x36a43f0() {
   return (neuron0x3695720()*-0.057442);
}

double NNfunction_ss_cLdL::synapse0x36a4430() {
   return (neuron0x3695a60()*-0.143838);
}

double NNfunction_ss_cLdL::synapse0x36a4470() {
   return (neuron0x3695da0()*-0.215237);
}

double NNfunction_ss_cLdL::synapse0x36a44b0() {
   return (neuron0x36960e0()*-0.144761);
}

double NNfunction_ss_cLdL::synapse0x36a44f0() {
   return (neuron0x3696420()*-0.298969);
}

double NNfunction_ss_cLdL::synapse0x36a4530() {
   return (neuron0x3696760()*-0.848061);
}

double NNfunction_ss_cLdL::synapse0x36a4570() {
   return (neuron0x3696aa0()*-0.355426);
}

double NNfunction_ss_cLdL::synapse0x36a45b0() {
   return (neuron0x3696de0()*-0.332233);
}

double NNfunction_ss_cLdL::synapse0x36a45f0() {
   return (neuron0x3697120()*0.400025);
}

double NNfunction_ss_cLdL::synapse0x36a4630() {
   return (neuron0x3697460()*0.459868);
}

double NNfunction_ss_cLdL::synapse0x36a4670() {
   return (neuron0x36977a0()*0.124304);
}

double NNfunction_ss_cLdL::synapse0x36a46b0() {
   return (neuron0x3697ae0()*-0.121842);
}

double NNfunction_ss_cLdL::synapse0x36a46f0() {
   return (neuron0x3697e20()*-0.342642);
}

double NNfunction_ss_cLdL::synapse0x36a4180() {
   return (neuron0x3698160()*0.0698096);
}

double NNfunction_ss_cLdL::synapse0x36a41c0() {
   return (neuron0x36986c0()*-0.133832);
}

double NNfunction_ss_cLdL::synapse0x36a4840() {
   return (neuron0x3698a00()*0.139663);
}

double NNfunction_ss_cLdL::synapse0x36a4880() {
   return (neuron0x3698d40()*-0.136886);
}

double NNfunction_ss_cLdL::synapse0x36a48c0() {
   return (neuron0x3699080()*-0.154291);
}

double NNfunction_ss_cLdL::synapse0x36a4900() {
   return (neuron0x36993c0()*0.119076);
}

double NNfunction_ss_cLdL::synapse0x36a4940() {
   return (neuron0x3699700()*-0.100101);
}

double NNfunction_ss_cLdL::synapse0x36a4980() {
   return (neuron0x3699a40()*-0.126694);
}

double NNfunction_ss_cLdL::synapse0x36a4d00() {
   return (neuron0x3694df0()*-0.00828755);
}

double NNfunction_ss_cLdL::synapse0x3694f80() {
   return (neuron0x36950a0()*0.343472);
}

double NNfunction_ss_cLdL::synapse0x3694fc0() {
   return (neuron0x36953e0()*-1.65372);
}

double NNfunction_ss_cLdL::synapse0x36952c0() {
   return (neuron0x3695720()*0.7246);
}

double NNfunction_ss_cLdL::synapse0x3695300() {
   return (neuron0x3695a60()*-0.423877);
}

double NNfunction_ss_cLdL::synapse0x3695600() {
   return (neuron0x3695da0()*0.336763);
}

double NNfunction_ss_cLdL::synapse0x3695640() {
   return (neuron0x36960e0()*-0.234546);
}

double NNfunction_ss_cLdL::synapse0x3695940() {
   return (neuron0x3696420()*0.037262);
}

double NNfunction_ss_cLdL::synapse0x3695980() {
   return (neuron0x3696760()*0.188955);
}

double NNfunction_ss_cLdL::synapse0x3695c80() {
   return (neuron0x3696aa0()*0.493423);
}

double NNfunction_ss_cLdL::synapse0x3695cc0() {
   return (neuron0x3696de0()*0.567981);
}

double NNfunction_ss_cLdL::synapse0x3695fc0() {
   return (neuron0x3697120()*-0.24335);
}

double NNfunction_ss_cLdL::synapse0x3696000() {
   return (neuron0x3697460()*0.334343);
}

double NNfunction_ss_cLdL::synapse0x3696300() {
   return (neuron0x36977a0()*-0.0640301);
}

double NNfunction_ss_cLdL::synapse0x3696340() {
   return (neuron0x3697ae0()*0.488401);
}

double NNfunction_ss_cLdL::synapse0x3696640() {
   return (neuron0x3697e20()*0.178134);
}

double NNfunction_ss_cLdL::synapse0x3696680() {
   return (neuron0x3698160()*0.278591);
}

double NNfunction_ss_cLdL::synapse0x3696980() {
   return (neuron0x36986c0()*0.78835);
}

double NNfunction_ss_cLdL::synapse0x36969c0() {
   return (neuron0x3698a00()*-0.250599);
}

double NNfunction_ss_cLdL::synapse0x3696cc0() {
   return (neuron0x3698d40()*-0.00509658);
}

double NNfunction_ss_cLdL::synapse0x3696d00() {
   return (neuron0x3699080()*-0.170298);
}

double NNfunction_ss_cLdL::synapse0x3697000() {
   return (neuron0x36993c0()*-0.685699);
}

double NNfunction_ss_cLdL::synapse0x3697040() {
   return (neuron0x3699700()*0.294363);
}

double NNfunction_ss_cLdL::synapse0x3697340() {
   return (neuron0x3699a40()*-0.486101);
}

double NNfunction_ss_cLdL::synapse0x3697380() {
   return (neuron0x3694df0()*0.351484);
}

double NNfunction_ss_cLdL::synapse0x3698040() {
   return (neuron0x36950a0()*-0.135394);
}

double NNfunction_ss_cLdL::synapse0x3698080() {
   return (neuron0x36953e0()*-0.539022);
}

double NNfunction_ss_cLdL::synapse0x36a4b50() {
   return (neuron0x3695720()*1.07208);
}

double NNfunction_ss_cLdL::synapse0x36a4b90() {
   return (neuron0x3695a60()*-0.360157);
}

double NNfunction_ss_cLdL::synapse0x3698380() {
   return (neuron0x3695da0()*0.458458);
}

double NNfunction_ss_cLdL::synapse0x36983c0() {
   return (neuron0x36960e0()*-0.987613);
}

double NNfunction_ss_cLdL::synapse0x36988e0() {
   return (neuron0x3696420()*-0.0693724);
}

double NNfunction_ss_cLdL::synapse0x3698920() {
   return (neuron0x3696760()*0.0459877);
}

double NNfunction_ss_cLdL::synapse0x3698c20() {
   return (neuron0x3696aa0()*0.678501);
}

double NNfunction_ss_cLdL::synapse0x3698c60() {
   return (neuron0x3696de0()*-0.82723);
}

double NNfunction_ss_cLdL::synapse0x3698f60() {
   return (neuron0x3697120()*1.13671);
}

double NNfunction_ss_cLdL::synapse0x3698fa0() {
   return (neuron0x3697460()*0.895133);
}

double NNfunction_ss_cLdL::synapse0x36992a0() {
   return (neuron0x36977a0()*0.0747379);
}

double NNfunction_ss_cLdL::synapse0x36992e0() {
   return (neuron0x3697ae0()*-0.336404);
}

double NNfunction_ss_cLdL::synapse0x36995e0() {
   return (neuron0x3697e20()*0.652791);
}

double NNfunction_ss_cLdL::synapse0x3699620() {
   return (neuron0x3698160()*-0.340337);
}

double NNfunction_ss_cLdL::synapse0x3699920() {
   return (neuron0x36986c0()*0.336255);
}

double NNfunction_ss_cLdL::synapse0x3699960() {
   return (neuron0x3698a00()*-1.45217);
}

double NNfunction_ss_cLdL::synapse0x3699c60() {
   return (neuron0x3698d40()*-0.0378725);
}

double NNfunction_ss_cLdL::synapse0x3699ca0() {
   return (neuron0x3699080()*0.609052);
}

double NNfunction_ss_cLdL::synapse0x3697680() {
   return (neuron0x36993c0()*-0.0352766);
}

double NNfunction_ss_cLdL::synapse0x36976c0() {
   return (neuron0x3699700()*-0.314337);
}

double NNfunction_ss_cLdL::synapse0x36a6a70() {
   return (neuron0x3699a40()*-0.143061);
}

double NNfunction_ss_cLdL::synapse0x36a6df0() {
   return (neuron0x3694df0()*-0.0224503);
}

double NNfunction_ss_cLdL::synapse0x36a6e30() {
   return (neuron0x36950a0()*-0.0226814);
}

double NNfunction_ss_cLdL::synapse0x36a6e70() {
   return (neuron0x36953e0()*-1.17416);
}

double NNfunction_ss_cLdL::synapse0x36a6eb0() {
   return (neuron0x3695720()*-0.134088);
}

double NNfunction_ss_cLdL::synapse0x36a6ef0() {
   return (neuron0x3695a60()*0.0242586);
}

double NNfunction_ss_cLdL::synapse0x36a6f30() {
   return (neuron0x3695da0()*0.00606029);
}

double NNfunction_ss_cLdL::synapse0x36a6f70() {
   return (neuron0x36960e0()*-0.0196919);
}

double NNfunction_ss_cLdL::synapse0x36a6fb0() {
   return (neuron0x3696420()*-0.0130975);
}

double NNfunction_ss_cLdL::synapse0x36a6ff0() {
   return (neuron0x3696760()*-0.0159418);
}

double NNfunction_ss_cLdL::synapse0x36a7030() {
   return (neuron0x3696aa0()*0.000391117);
}

double NNfunction_ss_cLdL::synapse0x36a7070() {
   return (neuron0x3696de0()*0.0145343);
}

double NNfunction_ss_cLdL::synapse0x36a70b0() {
   return (neuron0x3697120()*0.178324);
}

double NNfunction_ss_cLdL::synapse0x36a70f0() {
   return (neuron0x3697460()*0.164375);
}

double NNfunction_ss_cLdL::synapse0x36a7130() {
   return (neuron0x36977a0()*-0.0416936);
}

double NNfunction_ss_cLdL::synapse0x36a7170() {
   return (neuron0x3697ae0()*-0.0660187);
}

double NNfunction_ss_cLdL::synapse0x36a71b0() {
   return (neuron0x3697e20()*0.0237424);
}

double NNfunction_ss_cLdL::synapse0x36a6c40() {
   return (neuron0x3698160()*-0.0332567);
}

double NNfunction_ss_cLdL::synapse0x36a6c80() {
   return (neuron0x36986c0()*0.0608607);
}

double NNfunction_ss_cLdL::synapse0x36a7300() {
   return (neuron0x3698a00()*-0.0257856);
}

double NNfunction_ss_cLdL::synapse0x36a7340() {
   return (neuron0x3698d40()*-0.000294707);
}

double NNfunction_ss_cLdL::synapse0x36a7380() {
   return (neuron0x3699080()*0.0765748);
}

double NNfunction_ss_cLdL::synapse0x36a73c0() {
   return (neuron0x36993c0()*0.0548414);
}

double NNfunction_ss_cLdL::synapse0x36a7400() {
   return (neuron0x3699700()*0.0145945);
}

double NNfunction_ss_cLdL::synapse0x36a7440() {
   return (neuron0x3699a40()*0.0460768);
}

double NNfunction_ss_cLdL::synapse0x36a77c0() {
   return (neuron0x3694df0()*-0.500115);
}

double NNfunction_ss_cLdL::synapse0x36a7800() {
   return (neuron0x36950a0()*-0.560666);
}

double NNfunction_ss_cLdL::synapse0x36a7840() {
   return (neuron0x36953e0()*-0.165402);
}

double NNfunction_ss_cLdL::synapse0x36a7880() {
   return (neuron0x3695720()*-0.265979);
}

double NNfunction_ss_cLdL::synapse0x36a78c0() {
   return (neuron0x3695a60()*-1.04449);
}

double NNfunction_ss_cLdL::synapse0x36a7900() {
   return (neuron0x3695da0()*0.646287);
}

double NNfunction_ss_cLdL::synapse0x36a7940() {
   return (neuron0x36960e0()*0.550473);
}

double NNfunction_ss_cLdL::synapse0x36a7980() {
   return (neuron0x3696420()*0.102316);
}

double NNfunction_ss_cLdL::synapse0x36a79c0() {
   return (neuron0x3696760()*0.190176);
}

double NNfunction_ss_cLdL::synapse0x36a7a00() {
   return (neuron0x3696aa0()*-0.368434);
}

double NNfunction_ss_cLdL::synapse0x36a7a40() {
   return (neuron0x3696de0()*0.134093);
}

double NNfunction_ss_cLdL::synapse0x36a7a80() {
   return (neuron0x3697120()*1.50063);
}

double NNfunction_ss_cLdL::synapse0x36a7ac0() {
   return (neuron0x3697460()*-0.823027);
}

double NNfunction_ss_cLdL::synapse0x36a7b00() {
   return (neuron0x36977a0()*-0.0881236);
}

double NNfunction_ss_cLdL::synapse0x36a7b40() {
   return (neuron0x3697ae0()*0.193374);
}

double NNfunction_ss_cLdL::synapse0x36a7b80() {
   return (neuron0x3697e20()*-0.614808);
}

double NNfunction_ss_cLdL::synapse0x36a7610() {
   return (neuron0x3698160()*0.373239);
}

double NNfunction_ss_cLdL::synapse0x36a7650() {
   return (neuron0x36986c0()*0.924214);
}

double NNfunction_ss_cLdL::synapse0x36a7cd0() {
   return (neuron0x3698a00()*0.156913);
}

double NNfunction_ss_cLdL::synapse0x36a7d10() {
   return (neuron0x3698d40()*-0.477399);
}

double NNfunction_ss_cLdL::synapse0x36a7d50() {
   return (neuron0x3699080()*-0.879896);
}

double NNfunction_ss_cLdL::synapse0x36a7d90() {
   return (neuron0x36993c0()*-0.02837);
}

double NNfunction_ss_cLdL::synapse0x36a7dd0() {
   return (neuron0x3699700()*0.109111);
}

double NNfunction_ss_cLdL::synapse0x36a7e10() {
   return (neuron0x3699a40()*0.468261);
}

double NNfunction_ss_cLdL::synapse0x36a8190() {
   return (neuron0x3694df0()*0.0133779);
}

double NNfunction_ss_cLdL::synapse0x36a81d0() {
   return (neuron0x36950a0()*-0.00646367);
}

double NNfunction_ss_cLdL::synapse0x36a8210() {
   return (neuron0x36953e0()*-0.1017);
}

double NNfunction_ss_cLdL::synapse0x36a8250() {
   return (neuron0x3695720()*1.63511);
}

double NNfunction_ss_cLdL::synapse0x36a8290() {
   return (neuron0x3695a60()*-0.0632913);
}

double NNfunction_ss_cLdL::synapse0x36a82d0() {
   return (neuron0x3695da0()*-0.022464);
}

double NNfunction_ss_cLdL::synapse0x36a8310() {
   return (neuron0x36960e0()*-0.00552158);
}

double NNfunction_ss_cLdL::synapse0x36a8350() {
   return (neuron0x3696420()*-0.00132632);
}

double NNfunction_ss_cLdL::synapse0x36a8390() {
   return (neuron0x3696760()*0.0236054);
}

double NNfunction_ss_cLdL::synapse0x36a83d0() {
   return (neuron0x3696aa0()*-0.00800945);
}

double NNfunction_ss_cLdL::synapse0x36a8410() {
   return (neuron0x3696de0()*0.0984412);
}

double NNfunction_ss_cLdL::synapse0x36a8450() {
   return (neuron0x3697120()*0.405899);
}

double NNfunction_ss_cLdL::synapse0x36a8490() {
   return (neuron0x3697460()*0.279486);
}

double NNfunction_ss_cLdL::synapse0x36a84d0() {
   return (neuron0x36977a0()*-0.0460552);
}

double NNfunction_ss_cLdL::synapse0x36a8510() {
   return (neuron0x3697ae0()*0.0350526);
}

double NNfunction_ss_cLdL::synapse0x36a8550() {
   return (neuron0x3697e20()*-0.0552934);
}

double NNfunction_ss_cLdL::synapse0x36a7fe0() {
   return (neuron0x3698160()*-0.0509934);
}

double NNfunction_ss_cLdL::synapse0x36a8020() {
   return (neuron0x36986c0()*0.0700295);
}

double NNfunction_ss_cLdL::synapse0x36a86a0() {
   return (neuron0x3698a00()*0.00447989);
}

double NNfunction_ss_cLdL::synapse0x36a86e0() {
   return (neuron0x3698d40()*0.0513073);
}

double NNfunction_ss_cLdL::synapse0x36a8720() {
   return (neuron0x3699080()*-0.0416161);
}

double NNfunction_ss_cLdL::synapse0x36a8760() {
   return (neuron0x36993c0()*-0.00873479);
}

double NNfunction_ss_cLdL::synapse0x36a87a0() {
   return (neuron0x3699700()*0.00406068);
}

double NNfunction_ss_cLdL::synapse0x36a87e0() {
   return (neuron0x3699a40()*-0.00190655);
}

double NNfunction_ss_cLdL::synapse0x36a8b60() {
   return (neuron0x3694df0()*-0.434878);
}

double NNfunction_ss_cLdL::synapse0x36a8ba0() {
   return (neuron0x36950a0()*-0.118456);
}

double NNfunction_ss_cLdL::synapse0x36a8be0() {
   return (neuron0x36953e0()*0.168271);
}

double NNfunction_ss_cLdL::synapse0x36a8c20() {
   return (neuron0x3695720()*-0.69081);
}

double NNfunction_ss_cLdL::synapse0x36a8c60() {
   return (neuron0x3695a60()*-0.408449);
}

double NNfunction_ss_cLdL::synapse0x36a8ca0() {
   return (neuron0x3695da0()*-0.0047066);
}

double NNfunction_ss_cLdL::synapse0x36a8ce0() {
   return (neuron0x36960e0()*0.178953);
}

double NNfunction_ss_cLdL::synapse0x36a8d20() {
   return (neuron0x3696420()*0.0142181);
}

double NNfunction_ss_cLdL::synapse0x36a8d60() {
   return (neuron0x3696760()*0.273294);
}

double NNfunction_ss_cLdL::synapse0x36a8da0() {
   return (neuron0x3696aa0()*0.406154);
}

double NNfunction_ss_cLdL::synapse0x36a8de0() {
   return (neuron0x3696de0()*0.0120893);
}

double NNfunction_ss_cLdL::synapse0x36a8e20() {
   return (neuron0x3697120()*-0.140415);
}

double NNfunction_ss_cLdL::synapse0x36a8e60() {
   return (neuron0x3697460()*0.0235258);
}

double NNfunction_ss_cLdL::synapse0x36a8ea0() {
   return (neuron0x36977a0()*0.71148);
}

double NNfunction_ss_cLdL::synapse0x36a8ee0() {
   return (neuron0x3697ae0()*-0.369555);
}

double NNfunction_ss_cLdL::synapse0x36a8f20() {
   return (neuron0x3697e20()*-0.0602989);
}

double NNfunction_ss_cLdL::synapse0x36a89b0() {
   return (neuron0x3698160()*-0.171173);
}

double NNfunction_ss_cLdL::synapse0x36a89f0() {
   return (neuron0x36986c0()*-0.0587716);
}

double NNfunction_ss_cLdL::synapse0x36a9070() {
   return (neuron0x3698a00()*0.00898465);
}

double NNfunction_ss_cLdL::synapse0x36a90b0() {
   return (neuron0x3698d40()*0.072431);
}

double NNfunction_ss_cLdL::synapse0x36a90f0() {
   return (neuron0x3699080()*0.13974);
}

double NNfunction_ss_cLdL::synapse0x36a9130() {
   return (neuron0x36993c0()*-0.084347);
}

double NNfunction_ss_cLdL::synapse0x36a9170() {
   return (neuron0x3699700()*0.26481);
}

double NNfunction_ss_cLdL::synapse0x36a91b0() {
   return (neuron0x3699a40()*-0.10094);
}

double NNfunction_ss_cLdL::synapse0x36a9530() {
   return (neuron0x3694df0()*0.00459256);
}

double NNfunction_ss_cLdL::synapse0x36a9570() {
   return (neuron0x36950a0()*-0.00365376);
}

double NNfunction_ss_cLdL::synapse0x36a95b0() {
   return (neuron0x36953e0()*0.203226);
}

double NNfunction_ss_cLdL::synapse0x36a95f0() {
   return (neuron0x3695720()*4.29498);
}

double NNfunction_ss_cLdL::synapse0x36a9630() {
   return (neuron0x3695a60()*0.0201701);
}

double NNfunction_ss_cLdL::synapse0x36a9670() {
   return (neuron0x3695da0()*0.116926);
}

double NNfunction_ss_cLdL::synapse0x36a96b0() {
   return (neuron0x36960e0()*0.0695384);
}

double NNfunction_ss_cLdL::synapse0x36a96f0() {
   return (neuron0x3696420()*0.0563074);
}

double NNfunction_ss_cLdL::synapse0x36a9730() {
   return (neuron0x3696760()*0.116382);
}

double NNfunction_ss_cLdL::synapse0x36a18f0() {
   return (neuron0x3696aa0()*0.114942);
}

double NNfunction_ss_cLdL::synapse0x36a1930() {
   return (neuron0x3696de0()*0.090824);
}

double NNfunction_ss_cLdL::synapse0x36a1970() {
   return (neuron0x3697120()*-0.130557);
}

double NNfunction_ss_cLdL::synapse0x36a19b0() {
   return (neuron0x3697460()*-0.240572);
}

double NNfunction_ss_cLdL::synapse0x36a19f0() {
   return (neuron0x36977a0()*-0.0344923);
}

double NNfunction_ss_cLdL::synapse0x36a1a30() {
   return (neuron0x3697ae0()*0.0390802);
}

double NNfunction_ss_cLdL::synapse0x36a1a70() {
   return (neuron0x3697e20()*-0.0118644);
}

double NNfunction_ss_cLdL::synapse0x36a9380() {
   return (neuron0x3698160()*0.0576878);
}

double NNfunction_ss_cLdL::synapse0x36a93c0() {
   return (neuron0x36986c0()*0.00109189);
}

double NNfunction_ss_cLdL::synapse0x36a1bc0() {
   return (neuron0x3698a00()*0.021044);
}

double NNfunction_ss_cLdL::synapse0x36a1c00() {
   return (neuron0x3698d40()*-0.00192513);
}

double NNfunction_ss_cLdL::synapse0x36a1c40() {
   return (neuron0x3699080()*0.0215054);
}

double NNfunction_ss_cLdL::synapse0x36a1c80() {
   return (neuron0x36993c0()*-0.0481549);
}

double NNfunction_ss_cLdL::synapse0x36a1cc0() {
   return (neuron0x3699700()*-0.0437255);
}

double NNfunction_ss_cLdL::synapse0x36a1d00() {
   return (neuron0x3699a40()*-0.101436);
}

double NNfunction_ss_cLdL::synapse0x36a2080() {
   return (neuron0x3694df0()*0.114471);
}

double NNfunction_ss_cLdL::synapse0x36a20c0() {
   return (neuron0x36950a0()*-0.352469);
}

double NNfunction_ss_cLdL::synapse0x36a2100() {
   return (neuron0x36953e0()*-0.272077);
}

double NNfunction_ss_cLdL::synapse0x36a2140() {
   return (neuron0x3695720()*-0.57134);
}

double NNfunction_ss_cLdL::synapse0x36a2180() {
   return (neuron0x3695a60()*0.740027);
}

double NNfunction_ss_cLdL::synapse0x36a21c0() {
   return (neuron0x3695da0()*0.0728204);
}

double NNfunction_ss_cLdL::synapse0x36a2200() {
   return (neuron0x36960e0()*0.309576);
}

double NNfunction_ss_cLdL::synapse0x36a2240() {
   return (neuron0x3696420()*0.368085);
}

double NNfunction_ss_cLdL::synapse0x36a2280() {
   return (neuron0x3696760()*0.0116379);
}

double NNfunction_ss_cLdL::synapse0x36a22c0() {
   return (neuron0x3696aa0()*-0.934214);
}

double NNfunction_ss_cLdL::synapse0x36a2300() {
   return (neuron0x3696de0()*0.232724);
}

double NNfunction_ss_cLdL::synapse0x36a2340() {
   return (neuron0x3697120()*-0.846426);
}

double NNfunction_ss_cLdL::synapse0x36a2380() {
   return (neuron0x3697460()*0.963718);
}

double NNfunction_ss_cLdL::synapse0x36a23c0() {
   return (neuron0x36977a0()*0.086131);
}

double NNfunction_ss_cLdL::synapse0x36a2400() {
   return (neuron0x3697ae0()*0.270731);
}

double NNfunction_ss_cLdL::synapse0x36a2440() {
   return (neuron0x3697e20()*0.533431);
}

double NNfunction_ss_cLdL::synapse0x36a1ed0() {
   return (neuron0x3698160()*0.600632);
}

double NNfunction_ss_cLdL::synapse0x36a1f10() {
   return (neuron0x36986c0()*-0.275451);
}

double NNfunction_ss_cLdL::synapse0x36a2590() {
   return (neuron0x3698a00()*0.445745);
}

double NNfunction_ss_cLdL::synapse0x36a25d0() {
   return (neuron0x3698d40()*0.139387);
}

double NNfunction_ss_cLdL::synapse0x36a2610() {
   return (neuron0x3699080()*-0.269967);
}

double NNfunction_ss_cLdL::synapse0x36a2650() {
   return (neuron0x36993c0()*-0.583492);
}

double NNfunction_ss_cLdL::synapse0x36a2690() {
   return (neuron0x3699700()*0.21623);
}

double NNfunction_ss_cLdL::synapse0x36a26d0() {
   return (neuron0x3699a40()*-0.159425);
}

double NNfunction_ss_cLdL::synapse0x36a28a0() {
   return (neuron0x3694df0()*-0.314042);
}

double NNfunction_ss_cLdL::synapse0x36ab930() {
   return (neuron0x36950a0()*-0.630342);
}

double NNfunction_ss_cLdL::synapse0x36ab970() {
   return (neuron0x36953e0()*0.0771764);
}

double NNfunction_ss_cLdL::synapse0x36ab9b0() {
   return (neuron0x3695720()*-0.72728);
}

double NNfunction_ss_cLdL::synapse0x36ab9f0() {
   return (neuron0x3695a60()*-0.859769);
}

double NNfunction_ss_cLdL::synapse0x36aba30() {
   return (neuron0x3695da0()*1.03329);
}

double NNfunction_ss_cLdL::synapse0x36aba70() {
   return (neuron0x36960e0()*0.396426);
}

double NNfunction_ss_cLdL::synapse0x36abab0() {
   return (neuron0x3696420()*0.484018);
}

double NNfunction_ss_cLdL::synapse0x36abaf0() {
   return (neuron0x3696760()*-0.0479279);
}

double NNfunction_ss_cLdL::synapse0x36abb30() {
   return (neuron0x3696aa0()*-0.173012);
}

double NNfunction_ss_cLdL::synapse0x36abb70() {
   return (neuron0x3696de0()*0.0466425);
}

double NNfunction_ss_cLdL::synapse0x36abbb0() {
   return (neuron0x3697120()*1.58678);
}

double NNfunction_ss_cLdL::synapse0x36abbf0() {
   return (neuron0x3697460()*-1.21794);
}

double NNfunction_ss_cLdL::synapse0x36abc30() {
   return (neuron0x36977a0()*-0.258793);
}

double NNfunction_ss_cLdL::synapse0x36abc70() {
   return (neuron0x3697ae0()*0.415228);
}

double NNfunction_ss_cLdL::synapse0x36abcb0() {
   return (neuron0x3697e20()*-0.594338);
}

double NNfunction_ss_cLdL::synapse0x36ab780() {
   return (neuron0x3698160()*0.532019);
}

double NNfunction_ss_cLdL::synapse0x36ab7c0() {
   return (neuron0x36986c0()*1.04082);
}

double NNfunction_ss_cLdL::synapse0x36abe00() {
   return (neuron0x3698a00()*0.272203);
}

double NNfunction_ss_cLdL::synapse0x36abe40() {
   return (neuron0x3698d40()*-0.69351);
}

double NNfunction_ss_cLdL::synapse0x36abe80() {
   return (neuron0x3699080()*-0.629768);
}

double NNfunction_ss_cLdL::synapse0x36abec0() {
   return (neuron0x36993c0()*0.190402);
}

double NNfunction_ss_cLdL::synapse0x36abf00() {
   return (neuron0x3699700()*0.0717709);
}

double NNfunction_ss_cLdL::synapse0x36abf40() {
   return (neuron0x3699a40()*0.564468);
}

double NNfunction_ss_cLdL::synapse0x36ac2c0() {
   return (neuron0x3694df0()*-0.150926);
}

double NNfunction_ss_cLdL::synapse0x36ac300() {
   return (neuron0x36950a0()*0.0141611);
}

double NNfunction_ss_cLdL::synapse0x36ac340() {
   return (neuron0x36953e0()*0.30146);
}

double NNfunction_ss_cLdL::synapse0x36ac380() {
   return (neuron0x3695720()*-0.12134);
}

double NNfunction_ss_cLdL::synapse0x36ac3c0() {
   return (neuron0x3695a60()*-0.185546);
}

double NNfunction_ss_cLdL::synapse0x36ac400() {
   return (neuron0x3695da0()*0.118396);
}

double NNfunction_ss_cLdL::synapse0x36ac440() {
   return (neuron0x36960e0()*0.209132);
}

double NNfunction_ss_cLdL::synapse0x36ac480() {
   return (neuron0x3696420()*-0.202657);
}

double NNfunction_ss_cLdL::synapse0x36ac4c0() {
   return (neuron0x3696760()*-0.0383412);
}

double NNfunction_ss_cLdL::synapse0x36ac500() {
   return (neuron0x3696aa0()*0.249971);
}

double NNfunction_ss_cLdL::synapse0x36ac540() {
   return (neuron0x3696de0()*0.064129);
}

double NNfunction_ss_cLdL::synapse0x36ac580() {
   return (neuron0x3697120()*-0.919099);
}

double NNfunction_ss_cLdL::synapse0x36ac5c0() {
   return (neuron0x3697460()*-0.915112);
}

double NNfunction_ss_cLdL::synapse0x36ac600() {
   return (neuron0x36977a0()*-0.216378);
}

double NNfunction_ss_cLdL::synapse0x36ac640() {
   return (neuron0x3697ae0()*0.242259);
}

double NNfunction_ss_cLdL::synapse0x36ac680() {
   return (neuron0x3697e20()*-0.216814);
}

double NNfunction_ss_cLdL::synapse0x36ac110() {
   return (neuron0x3698160()*-0.0123077);
}

double NNfunction_ss_cLdL::synapse0x36ac150() {
   return (neuron0x36986c0()*-0.356855);
}

double NNfunction_ss_cLdL::synapse0x36ac7d0() {
   return (neuron0x3698a00()*-0.126388);
}

double NNfunction_ss_cLdL::synapse0x36ac810() {
   return (neuron0x3698d40()*-0.299277);
}

double NNfunction_ss_cLdL::synapse0x36ac850() {
   return (neuron0x3699080()*-0.282491);
}

double NNfunction_ss_cLdL::synapse0x36ac890() {
   return (neuron0x36993c0()*-0.224861);
}

double NNfunction_ss_cLdL::synapse0x36ac8d0() {
   return (neuron0x3699700()*0.183831);
}

double NNfunction_ss_cLdL::synapse0x36ac910() {
   return (neuron0x3699a40()*-0.1063);
}

double NNfunction_ss_cLdL::synapse0x36acc90() {
   return (neuron0x3694df0()*0.0135033);
}

double NNfunction_ss_cLdL::synapse0x36accd0() {
   return (neuron0x36950a0()*-0.00187972);
}

double NNfunction_ss_cLdL::synapse0x36acd10() {
   return (neuron0x36953e0()*-0.0278941);
}

double NNfunction_ss_cLdL::synapse0x36acd50() {
   return (neuron0x3695720()*2.35801);
}

double NNfunction_ss_cLdL::synapse0x36acd90() {
   return (neuron0x3695a60()*-0.0370553);
}

double NNfunction_ss_cLdL::synapse0x36acdd0() {
   return (neuron0x3695da0()*-0.0240561);
}

double NNfunction_ss_cLdL::synapse0x36ace10() {
   return (neuron0x36960e0()*-0.00570387);
}

double NNfunction_ss_cLdL::synapse0x36ace50() {
   return (neuron0x3696420()*-0.0126293);
}

double NNfunction_ss_cLdL::synapse0x36ace90() {
   return (neuron0x3696760()*0.000603078);
}

double NNfunction_ss_cLdL::synapse0x36aced0() {
   return (neuron0x3696aa0()*-0.0299047);
}

double NNfunction_ss_cLdL::synapse0x36acf10() {
   return (neuron0x3696de0()*0.029076);
}

double NNfunction_ss_cLdL::synapse0x36acf50() {
   return (neuron0x3697120()*0.130354);
}

double NNfunction_ss_cLdL::synapse0x36acf90() {
   return (neuron0x3697460()*0.0754607);
}

double NNfunction_ss_cLdL::synapse0x36acfd0() {
   return (neuron0x36977a0()*-0.00296103);
}

double NNfunction_ss_cLdL::synapse0x36ad010() {
   return (neuron0x3697ae0()*0.011827);
}

double NNfunction_ss_cLdL::synapse0x36ad050() {
   return (neuron0x3697e20()*-0.0206662);
}

double NNfunction_ss_cLdL::synapse0x36acae0() {
   return (neuron0x3698160()*-0.019444);
}

double NNfunction_ss_cLdL::synapse0x36acb20() {
   return (neuron0x36986c0()*0.011637);
}

double NNfunction_ss_cLdL::synapse0x36ad1a0() {
   return (neuron0x3698a00()*-0.00894619);
}

double NNfunction_ss_cLdL::synapse0x36ad1e0() {
   return (neuron0x3698d40()*0.00382981);
}

double NNfunction_ss_cLdL::synapse0x36ad220() {
   return (neuron0x3699080()*-0.0177133);
}

double NNfunction_ss_cLdL::synapse0x36ad260() {
   return (neuron0x36993c0()*0.00368949);
}

double NNfunction_ss_cLdL::synapse0x36ad2a0() {
   return (neuron0x3699700()*0.010161);
}

double NNfunction_ss_cLdL::synapse0x36ad2e0() {
   return (neuron0x3699a40()*0.0168176);
}

double NNfunction_ss_cLdL::synapse0x36ad660() {
   return (neuron0x3694df0()*0.028025);
}

double NNfunction_ss_cLdL::synapse0x36ad6a0() {
   return (neuron0x36950a0()*-0.0280553);
}

double NNfunction_ss_cLdL::synapse0x36ad6e0() {
   return (neuron0x36953e0()*0.183062);
}

double NNfunction_ss_cLdL::synapse0x36ad720() {
   return (neuron0x3695720()*-5.29505);
}

double NNfunction_ss_cLdL::synapse0x36ad760() {
   return (neuron0x3695a60()*0.0430572);
}

double NNfunction_ss_cLdL::synapse0x36ad7a0() {
   return (neuron0x3695da0()*-0.0374692);
}

double NNfunction_ss_cLdL::synapse0x36ad7e0() {
   return (neuron0x36960e0()*0.0413975);
}

double NNfunction_ss_cLdL::synapse0x36ad820() {
   return (neuron0x3696420()*0.0712015);
}

double NNfunction_ss_cLdL::synapse0x36ad860() {
   return (neuron0x3696760()*0.0580755);
}

double NNfunction_ss_cLdL::synapse0x36ad8a0() {
   return (neuron0x3696aa0()*0.000633458);
}

double NNfunction_ss_cLdL::synapse0x36ad8e0() {
   return (neuron0x3696de0()*0.0925042);
}

double NNfunction_ss_cLdL::synapse0x36ad920() {
   return (neuron0x3697120()*-0.244014);
}

double NNfunction_ss_cLdL::synapse0x36ad960() {
   return (neuron0x3697460()*1.6224);
}

double NNfunction_ss_cLdL::synapse0x36ad9a0() {
   return (neuron0x36977a0()*-0.0113021);
}

double NNfunction_ss_cLdL::synapse0x36ad9e0() {
   return (neuron0x3697ae0()*-0.0959885);
}

double NNfunction_ss_cLdL::synapse0x36ada20() {
   return (neuron0x3697e20()*-0.0529559);
}

double NNfunction_ss_cLdL::synapse0x36ad4b0() {
   return (neuron0x3698160()*0.0204705);
}

double NNfunction_ss_cLdL::synapse0x36ad4f0() {
   return (neuron0x36986c0()*-0.00378649);
}

double NNfunction_ss_cLdL::synapse0x36adb70() {
   return (neuron0x3698a00()*-0.0252259);
}

double NNfunction_ss_cLdL::synapse0x36adbb0() {
   return (neuron0x3698d40()*-0.0904602);
}

double NNfunction_ss_cLdL::synapse0x36adbf0() {
   return (neuron0x3699080()*0.0493914);
}

double NNfunction_ss_cLdL::synapse0x36adc30() {
   return (neuron0x36993c0()*-0.0329994);
}

double NNfunction_ss_cLdL::synapse0x36adc70() {
   return (neuron0x3699700()*-0.0157673);
}

double NNfunction_ss_cLdL::synapse0x36adcb0() {
   return (neuron0x3699a40()*-0.033791);
}

double NNfunction_ss_cLdL::synapse0x36ae030() {
   return (neuron0x3694df0()*0.44888);
}

double NNfunction_ss_cLdL::synapse0x36ae070() {
   return (neuron0x36950a0()*-0.309113);
}

double NNfunction_ss_cLdL::synapse0x36ae0b0() {
   return (neuron0x36953e0()*1.3955);
}

double NNfunction_ss_cLdL::synapse0x36ae0f0() {
   return (neuron0x3695720()*-0.158255);
}

double NNfunction_ss_cLdL::synapse0x36ae130() {
   return (neuron0x3695a60()*-0.174637);
}

double NNfunction_ss_cLdL::synapse0x36ae170() {
   return (neuron0x3695da0()*0.183128);
}

double NNfunction_ss_cLdL::synapse0x36ae1b0() {
   return (neuron0x36960e0()*0.129071);
}

double NNfunction_ss_cLdL::synapse0x36ae1f0() {
   return (neuron0x3696420()*0.426333);
}

double NNfunction_ss_cLdL::synapse0x36ae230() {
   return (neuron0x3696760()*0.45456);
}

double NNfunction_ss_cLdL::synapse0x36ae270() {
   return (neuron0x3696aa0()*-0.201073);
}

double NNfunction_ss_cLdL::synapse0x36ae2b0() {
   return (neuron0x3696de0()*0.545308);
}

double NNfunction_ss_cLdL::synapse0x36ae2f0() {
   return (neuron0x3697120()*-0.99628);
}

double NNfunction_ss_cLdL::synapse0x36ae330() {
   return (neuron0x3697460()*-0.123218);
}

double NNfunction_ss_cLdL::synapse0x36ae370() {
   return (neuron0x36977a0()*0.321185);
}

double NNfunction_ss_cLdL::synapse0x36ae3b0() {
   return (neuron0x3697ae0()*-0.88873);
}

double NNfunction_ss_cLdL::synapse0x36ae3f0() {
   return (neuron0x3697e20()*0.511234);
}

double NNfunction_ss_cLdL::synapse0x36ade80() {
   return (neuron0x3698160()*0.395634);
}

double NNfunction_ss_cLdL::synapse0x36adec0() {
   return (neuron0x36986c0()*-0.909197);
}

double NNfunction_ss_cLdL::synapse0x36ae540() {
   return (neuron0x3698a00()*-0.626431);
}

double NNfunction_ss_cLdL::synapse0x36ae580() {
   return (neuron0x3698d40()*-0.31812);
}

double NNfunction_ss_cLdL::synapse0x36ae5c0() {
   return (neuron0x3699080()*0.00930434);
}

double NNfunction_ss_cLdL::synapse0x36ae600() {
   return (neuron0x36993c0()*-0.127106);
}

double NNfunction_ss_cLdL::synapse0x36ae640() {
   return (neuron0x3699700()*0.347489);
}

double NNfunction_ss_cLdL::synapse0x36ae680() {
   return (neuron0x3699a40()*-0.211185);
}

double NNfunction_ss_cLdL::synapse0x36aea00() {
   return (neuron0x3694df0()*-0.353602);
}

double NNfunction_ss_cLdL::synapse0x36aea40() {
   return (neuron0x36950a0()*-0.192817);
}

double NNfunction_ss_cLdL::synapse0x36aea80() {
   return (neuron0x36953e0()*0.821266);
}

double NNfunction_ss_cLdL::synapse0x36aeac0() {
   return (neuron0x3695720()*0.164223);
}

double NNfunction_ss_cLdL::synapse0x36aeb00() {
   return (neuron0x3695a60()*0.154508);
}

double NNfunction_ss_cLdL::synapse0x36aeb40() {
   return (neuron0x3695da0()*0.540147);
}

double NNfunction_ss_cLdL::synapse0x36aeb80() {
   return (neuron0x36960e0()*0.748021);
}

double NNfunction_ss_cLdL::synapse0x36aebc0() {
   return (neuron0x3696420()*-0.139091);
}

double NNfunction_ss_cLdL::synapse0x36aec00() {
   return (neuron0x3696760()*0.267783);
}

double NNfunction_ss_cLdL::synapse0x36aec40() {
   return (neuron0x3696aa0()*0.155271);
}

double NNfunction_ss_cLdL::synapse0x36aec80() {
   return (neuron0x3696de0()*0.262281);
}

double NNfunction_ss_cLdL::synapse0x36aecc0() {
   return (neuron0x3697120()*0.265292);
}

double NNfunction_ss_cLdL::synapse0x36aed00() {
   return (neuron0x3697460()*0.463551);
}

double NNfunction_ss_cLdL::synapse0x36aed40() {
   return (neuron0x36977a0()*0.431543);
}

double NNfunction_ss_cLdL::synapse0x36aed80() {
   return (neuron0x3697ae0()*-0.40922);
}

double NNfunction_ss_cLdL::synapse0x36aedc0() {
   return (neuron0x3697e20()*0.00523764);
}

double NNfunction_ss_cLdL::synapse0x36ae850() {
   return (neuron0x3698160()*0.24226);
}

double NNfunction_ss_cLdL::synapse0x36ae890() {
   return (neuron0x36986c0()*-0.770119);
}

double NNfunction_ss_cLdL::synapse0x36aef10() {
   return (neuron0x3698a00()*-0.824377);
}

double NNfunction_ss_cLdL::synapse0x36aef50() {
   return (neuron0x3698d40()*-0.0881742);
}

double NNfunction_ss_cLdL::synapse0x36aef90() {
   return (neuron0x3699080()*0.256057);
}

double NNfunction_ss_cLdL::synapse0x36aefd0() {
   return (neuron0x36993c0()*-0.611304);
}

double NNfunction_ss_cLdL::synapse0x36af010() {
   return (neuron0x3699700()*-0.328974);
}

double NNfunction_ss_cLdL::synapse0x36af050() {
   return (neuron0x3699a40()*0.0787439);
}

double NNfunction_ss_cLdL::synapse0x36af3d0() {
   return (neuron0x3694df0()*-0.0286843);
}

double NNfunction_ss_cLdL::synapse0x36af410() {
   return (neuron0x36950a0()*0.00231461);
}

double NNfunction_ss_cLdL::synapse0x36af450() {
   return (neuron0x36953e0()*0.0510511);
}

double NNfunction_ss_cLdL::synapse0x36af490() {
   return (neuron0x3695720()*-6.82187e-06);
}

double NNfunction_ss_cLdL::synapse0x36af4d0() {
   return (neuron0x3695a60()*-0.00061524);
}

double NNfunction_ss_cLdL::synapse0x36af510() {
   return (neuron0x3695da0()*0.0304415);
}

double NNfunction_ss_cLdL::synapse0x36af550() {
   return (neuron0x36960e0()*0.0246643);
}

double NNfunction_ss_cLdL::synapse0x36af590() {
   return (neuron0x3696420()*0.0209856);
}

double NNfunction_ss_cLdL::synapse0x36af5d0() {
   return (neuron0x3696760()*0.0114174);
}

double NNfunction_ss_cLdL::synapse0x36af610() {
   return (neuron0x3696aa0()*0.0143793);
}

double NNfunction_ss_cLdL::synapse0x36af650() {
   return (neuron0x3696de0()*-0.0130596);
}

double NNfunction_ss_cLdL::synapse0x36af690() {
   return (neuron0x3697120()*1.36468);
}

double NNfunction_ss_cLdL::synapse0x36af6d0() {
   return (neuron0x3697460()*-0.673533);
}

double NNfunction_ss_cLdL::synapse0x36af710() {
   return (neuron0x36977a0()*-0.00764946);
}

double NNfunction_ss_cLdL::synapse0x36af750() {
   return (neuron0x3697ae0()*-0.0120988);
}

double NNfunction_ss_cLdL::synapse0x36af790() {
   return (neuron0x3697e20()*0.0095596);
}

double NNfunction_ss_cLdL::synapse0x36af220() {
   return (neuron0x3698160()*-0.0017537);
}

double NNfunction_ss_cLdL::synapse0x36af260() {
   return (neuron0x36986c0()*0.0463878);
}

double NNfunction_ss_cLdL::synapse0x36af8e0() {
   return (neuron0x3698a00()*-0.00504612);
}

double NNfunction_ss_cLdL::synapse0x36af920() {
   return (neuron0x3698d40()*0.0224837);
}

double NNfunction_ss_cLdL::synapse0x36af960() {
   return (neuron0x3699080()*0.0192319);
}

double NNfunction_ss_cLdL::synapse0x36af9a0() {
   return (neuron0x36993c0()*-0.00530595);
}

double NNfunction_ss_cLdL::synapse0x36af9e0() {
   return (neuron0x3699700()*0.00596368);
}

double NNfunction_ss_cLdL::synapse0x36afa20() {
   return (neuron0x3699a40()*0.0314553);
}

double NNfunction_ss_cLdL::synapse0x36afda0() {
   return (neuron0x3694df0()*-0.000179739);
}

double NNfunction_ss_cLdL::synapse0x36afde0() {
   return (neuron0x36950a0()*0.0156137);
}

double NNfunction_ss_cLdL::synapse0x36afe20() {
   return (neuron0x36953e0()*-0.124147);
}

double NNfunction_ss_cLdL::synapse0x36afe60() {
   return (neuron0x3695720()*-0.634722);
}

double NNfunction_ss_cLdL::synapse0x36afea0() {
   return (neuron0x3695a60()*0.066175);
}

double NNfunction_ss_cLdL::synapse0x36afee0() {
   return (neuron0x3695da0()*0.017808);
}

double NNfunction_ss_cLdL::synapse0x36aff20() {
   return (neuron0x36960e0()*-0.0540406);
}

double NNfunction_ss_cLdL::synapse0x36aff60() {
   return (neuron0x3696420()*0.0173926);
}

double NNfunction_ss_cLdL::synapse0x36affa0() {
   return (neuron0x3696760()*0.00504113);
}

double NNfunction_ss_cLdL::synapse0x36affe0() {
   return (neuron0x3696aa0()*0.00603126);
}

double NNfunction_ss_cLdL::synapse0x36b0020() {
   return (neuron0x3696de0()*0.0120754);
}

double NNfunction_ss_cLdL::synapse0x36b0060() {
   return (neuron0x3697120()*0.0807612);
}

double NNfunction_ss_cLdL::synapse0x36b00a0() {
   return (neuron0x3697460()*0.0529144);
}

double NNfunction_ss_cLdL::synapse0x36b00e0() {
   return (neuron0x36977a0()*-0.0267505);
}

double NNfunction_ss_cLdL::synapse0x36b0120() {
   return (neuron0x3697ae0()*-0.0367817);
}

double NNfunction_ss_cLdL::synapse0x36b0160() {
   return (neuron0x3697e20()*0.00173968);
}

double NNfunction_ss_cLdL::synapse0x36afbf0() {
   return (neuron0x3698160()*0.0298128);
}

double NNfunction_ss_cLdL::synapse0x36afc30() {
   return (neuron0x36986c0()*0.0196791);
}

double NNfunction_ss_cLdL::synapse0x36b02b0() {
   return (neuron0x3698a00()*-0.0224854);
}

double NNfunction_ss_cLdL::synapse0x36b02f0() {
   return (neuron0x3698d40()*0.0110524);
}

double NNfunction_ss_cLdL::synapse0x36b0330() {
   return (neuron0x3699080()*0.0157234);
}

double NNfunction_ss_cLdL::synapse0x36b0370() {
   return (neuron0x36993c0()*0.00557914);
}

double NNfunction_ss_cLdL::synapse0x36b03b0() {
   return (neuron0x3699700()*-0.0177271);
}

double NNfunction_ss_cLdL::synapse0x36b03f0() {
   return (neuron0x3699a40()*0.00424861);
}

double NNfunction_ss_cLdL::synapse0x36b0770() {
   return (neuron0x3694df0()*-0.188392);
}

double NNfunction_ss_cLdL::synapse0x36a4d40() {
   return (neuron0x36950a0()*-0.158727);
}

double NNfunction_ss_cLdL::synapse0x36a4d80() {
   return (neuron0x36953e0()*0.266936);
}

double NNfunction_ss_cLdL::synapse0x36a4dc0() {
   return (neuron0x3695720()*-0.295934);
}

double NNfunction_ss_cLdL::synapse0x36a5010() {
   return (neuron0x3695a60()*-0.982968);
}

double NNfunction_ss_cLdL::synapse0x36a5050() {
   return (neuron0x3695da0()*-0.127988);
}

double NNfunction_ss_cLdL::synapse0x36a5090() {
   return (neuron0x36960e0()*-0.625044);
}

double NNfunction_ss_cLdL::synapse0x36a52e0() {
   return (neuron0x3696420()*-0.203197);
}

double NNfunction_ss_cLdL::synapse0x36a5320() {
   return (neuron0x3696760()*0.536889);
}

double NNfunction_ss_cLdL::synapse0x36a5570() {
   return (neuron0x3696aa0()*0.380724);
}

double NNfunction_ss_cLdL::synapse0x36a55b0() {
   return (neuron0x3696de0()*-0.327125);
}

double NNfunction_ss_cLdL::synapse0x36a55f0() {
   return (neuron0x3697120()*-0.417126);
}

double NNfunction_ss_cLdL::synapse0x36a5840() {
   return (neuron0x3697460()*0.154148);
}

double NNfunction_ss_cLdL::synapse0x36a5880() {
   return (neuron0x36977a0()*-0.160334);
}

double NNfunction_ss_cLdL::synapse0x36a5ad0() {
   return (neuron0x3697ae0()*-0.165349);
}

double NNfunction_ss_cLdL::synapse0x36a5b10() {
   return (neuron0x3697e20()*0.178979);
}

double NNfunction_ss_cLdL::synapse0x36b05c0() {
   return (neuron0x3698160()*1.76616);
}

double NNfunction_ss_cLdL::synapse0x36b0600() {
   return (neuron0x36986c0()*0.117065);
}

double NNfunction_ss_cLdL::synapse0x36a5c60() {
   return (neuron0x3698a00()*0.174825);
}

double NNfunction_ss_cLdL::synapse0x36a6170() {
   return (neuron0x3698d40()*0.409198);
}

double NNfunction_ss_cLdL::synapse0x36a61b0() {
   return (neuron0x3699080()*-0.030154);
}

double NNfunction_ss_cLdL::synapse0x36a61f0() {
   return (neuron0x36993c0()*0.143616);
}

double NNfunction_ss_cLdL::synapse0x36a6440() {
   return (neuron0x3699700()*-0.232824);
}

double NNfunction_ss_cLdL::synapse0x36a6480() {
   return (neuron0x3699a40()*-0.181355);
}

double NNfunction_ss_cLdL::synapse0x36a5d30() {
   return (neuron0x3694df0()*0.141124);
}

double NNfunction_ss_cLdL::synapse0x36a5d70() {
   return (neuron0x36950a0()*0.342819);
}

double NNfunction_ss_cLdL::synapse0x36a5db0() {
   return (neuron0x36953e0()*0.691729);
}

double NNfunction_ss_cLdL::synapse0x36a5df0() {
   return (neuron0x3695720()*-0.0149485);
}

double NNfunction_ss_cLdL::synapse0x36a6770() {
   return (neuron0x3695a60()*0.0498448);
}

double NNfunction_ss_cLdL::synapse0x36b2ac0() {
   return (neuron0x3695da0()*0.442173);
}

double NNfunction_ss_cLdL::synapse0x36b2b00() {
   return (neuron0x36960e0()*-0.134864);
}

double NNfunction_ss_cLdL::synapse0x36b2b40() {
   return (neuron0x3696420()*0.201306);
}

double NNfunction_ss_cLdL::synapse0x36b2b80() {
   return (neuron0x3696760()*-0.240911);
}

double NNfunction_ss_cLdL::synapse0x36b2bc0() {
   return (neuron0x3696aa0()*0.0754121);
}

double NNfunction_ss_cLdL::synapse0x36b2c00() {
   return (neuron0x3696de0()*-0.188628);
}

double NNfunction_ss_cLdL::synapse0x36b2c40() {
   return (neuron0x3697120()*0.935786);
}

double NNfunction_ss_cLdL::synapse0x36b2c80() {
   return (neuron0x3697460()*0.697874);
}

double NNfunction_ss_cLdL::synapse0x36b2cc0() {
   return (neuron0x36977a0()*-0.00212645);
}

double NNfunction_ss_cLdL::synapse0x36b2d00() {
   return (neuron0x3697ae0()*0.762818);
}

double NNfunction_ss_cLdL::synapse0x36b2d40() {
   return (neuron0x3697e20()*-0.386879);
}

double NNfunction_ss_cLdL::synapse0x36a6650() {
   return (neuron0x3698160()*-0.126563);
}

double NNfunction_ss_cLdL::synapse0x36a6690() {
   return (neuron0x36986c0()*0.0724468);
}

double NNfunction_ss_cLdL::synapse0x36b2e90() {
   return (neuron0x3698a00()*-0.138731);
}

double NNfunction_ss_cLdL::synapse0x36b2ed0() {
   return (neuron0x3698d40()*0.0507923);
}

double NNfunction_ss_cLdL::synapse0x36b2f10() {
   return (neuron0x3699080()*-0.041823);
}

double NNfunction_ss_cLdL::synapse0x36b2f50() {
   return (neuron0x36993c0()*0.147165);
}

double NNfunction_ss_cLdL::synapse0x36b2f90() {
   return (neuron0x3699700()*0.0301873);
}

double NNfunction_ss_cLdL::synapse0x36b2fd0() {
   return (neuron0x3699a40()*0.351873);
}

double NNfunction_ss_cLdL::synapse0x36b3350() {
   return (neuron0x3694df0()*0.0826382);
}

double NNfunction_ss_cLdL::synapse0x36b3390() {
   return (neuron0x36950a0()*-0.00777251);
}

double NNfunction_ss_cLdL::synapse0x36b33d0() {
   return (neuron0x36953e0()*0.875779);
}

double NNfunction_ss_cLdL::synapse0x36b3410() {
   return (neuron0x3695720()*0.34505);
}

double NNfunction_ss_cLdL::synapse0x36b3450() {
   return (neuron0x3695a60()*0.54522);
}

double NNfunction_ss_cLdL::synapse0x36b3490() {
   return (neuron0x3695da0()*0.122894);
}

double NNfunction_ss_cLdL::synapse0x36b34d0() {
   return (neuron0x36960e0()*-0.166302);
}

double NNfunction_ss_cLdL::synapse0x36b3510() {
   return (neuron0x3696420()*0.137108);
}

double NNfunction_ss_cLdL::synapse0x36b3550() {
   return (neuron0x3696760()*-0.0815857);
}

double NNfunction_ss_cLdL::synapse0x36b3590() {
   return (neuron0x3696aa0()*-0.0316484);
}

double NNfunction_ss_cLdL::synapse0x36b35d0() {
   return (neuron0x3696de0()*-0.842438);
}

double NNfunction_ss_cLdL::synapse0x36b3610() {
   return (neuron0x3697120()*-0.00482039);
}

double NNfunction_ss_cLdL::synapse0x36b3650() {
   return (neuron0x3697460()*0.25363);
}

double NNfunction_ss_cLdL::synapse0x36b3690() {
   return (neuron0x36977a0()*-0.158945);
}

double NNfunction_ss_cLdL::synapse0x36b36d0() {
   return (neuron0x3697ae0()*-0.987672);
}

double NNfunction_ss_cLdL::synapse0x36b3710() {
   return (neuron0x3697e20()*-0.239253);
}

double NNfunction_ss_cLdL::synapse0x36b31a0() {
   return (neuron0x3698160()*0.898645);
}

double NNfunction_ss_cLdL::synapse0x36b31e0() {
   return (neuron0x36986c0()*-0.306838);
}

double NNfunction_ss_cLdL::synapse0x36b3860() {
   return (neuron0x3698a00()*0.539149);
}

double NNfunction_ss_cLdL::synapse0x36b38a0() {
   return (neuron0x3698d40()*-0.00726039);
}

double NNfunction_ss_cLdL::synapse0x36b38e0() {
   return (neuron0x3699080()*-0.841782);
}

double NNfunction_ss_cLdL::synapse0x36b3920() {
   return (neuron0x36993c0()*0.369438);
}

double NNfunction_ss_cLdL::synapse0x36b3960() {
   return (neuron0x3699700()*0.843573);
}

double NNfunction_ss_cLdL::synapse0x36b39a0() {
   return (neuron0x3699a40()*-0.159136);
}

double NNfunction_ss_cLdL::synapse0x36b3d20() {
   return (neuron0x3694df0()*0.0122587);
}

double NNfunction_ss_cLdL::synapse0x36b3d60() {
   return (neuron0x36950a0()*-0.232554);
}

double NNfunction_ss_cLdL::synapse0x36b3da0() {
   return (neuron0x36953e0()*0.112069);
}

double NNfunction_ss_cLdL::synapse0x36b3de0() {
   return (neuron0x3695720()*1.0378);
}

double NNfunction_ss_cLdL::synapse0x36b3e20() {
   return (neuron0x3695a60()*-0.426517);
}

double NNfunction_ss_cLdL::synapse0x36b3e60() {
   return (neuron0x3695da0()*-0.00188358);
}

double NNfunction_ss_cLdL::synapse0x36b3ea0() {
   return (neuron0x36960e0()*0.107389);
}

double NNfunction_ss_cLdL::synapse0x36b3ee0() {
   return (neuron0x3696420()*-0.0291559);
}

double NNfunction_ss_cLdL::synapse0x36b3f20() {
   return (neuron0x3696760()*0.542568);
}

double NNfunction_ss_cLdL::synapse0x36b3f60() {
   return (neuron0x3696aa0()*-0.649675);
}

double NNfunction_ss_cLdL::synapse0x36b3fa0() {
   return (neuron0x3696de0()*0.324432);
}

double NNfunction_ss_cLdL::synapse0x36b3fe0() {
   return (neuron0x3697120()*-0.207917);
}

double NNfunction_ss_cLdL::synapse0x36b4020() {
   return (neuron0x3697460()*1.13806);
}

double NNfunction_ss_cLdL::synapse0x36b4060() {
   return (neuron0x36977a0()*-0.1442);
}

double NNfunction_ss_cLdL::synapse0x36b40a0() {
   return (neuron0x3697ae0()*0.601912);
}

double NNfunction_ss_cLdL::synapse0x36b40e0() {
   return (neuron0x3697e20()*0.195452);
}

double NNfunction_ss_cLdL::synapse0x36b3b70() {
   return (neuron0x3698160()*-0.0180988);
}

double NNfunction_ss_cLdL::synapse0x36b3bb0() {
   return (neuron0x36986c0()*0.186457);
}

double NNfunction_ss_cLdL::synapse0x36b4230() {
   return (neuron0x3698a00()*0.0417676);
}

double NNfunction_ss_cLdL::synapse0x36b4270() {
   return (neuron0x3698d40()*-0.689829);
}

double NNfunction_ss_cLdL::synapse0x36b42b0() {
   return (neuron0x3699080()*0.166877);
}

double NNfunction_ss_cLdL::synapse0x36b42f0() {
   return (neuron0x36993c0()*0.142034);
}

double NNfunction_ss_cLdL::synapse0x36b4330() {
   return (neuron0x3699700()*-0.374442);
}

double NNfunction_ss_cLdL::synapse0x36b4370() {
   return (neuron0x3699a40()*0.404873);
}

double NNfunction_ss_cLdL::synapse0x36b46f0() {
   return (neuron0x3694df0()*-0.0198054);
}

double NNfunction_ss_cLdL::synapse0x36b4730() {
   return (neuron0x36950a0()*-0.24064);
}

double NNfunction_ss_cLdL::synapse0x36b4770() {
   return (neuron0x36953e0()*-0.713464);
}

double NNfunction_ss_cLdL::synapse0x36b47b0() {
   return (neuron0x3695720()*0.5396);
}

double NNfunction_ss_cLdL::synapse0x36b47f0() {
   return (neuron0x3695a60()*-0.123074);
}

double NNfunction_ss_cLdL::synapse0x36b4830() {
   return (neuron0x3695da0()*-0.124419);
}

double NNfunction_ss_cLdL::synapse0x36b4870() {
   return (neuron0x36960e0()*-0.112123);
}

double NNfunction_ss_cLdL::synapse0x36b48b0() {
   return (neuron0x3696420()*-0.166635);
}

double NNfunction_ss_cLdL::synapse0x36b48f0() {
   return (neuron0x3696760()*-0.206971);
}

double NNfunction_ss_cLdL::synapse0x36b4930() {
   return (neuron0x3696aa0()*-0.231939);
}

double NNfunction_ss_cLdL::synapse0x36b4970() {
   return (neuron0x3696de0()*-0.359588);
}

double NNfunction_ss_cLdL::synapse0x36b49b0() {
   return (neuron0x3697120()*-0.340457);
}

double NNfunction_ss_cLdL::synapse0x36b49f0() {
   return (neuron0x3697460()*0.243028);
}

double NNfunction_ss_cLdL::synapse0x36b4a30() {
   return (neuron0x36977a0()*-0.314726);
}

double NNfunction_ss_cLdL::synapse0x36b4a70() {
   return (neuron0x3697ae0()*-0.17926);
}

double NNfunction_ss_cLdL::synapse0x36b4ab0() {
   return (neuron0x3697e20()*-0.428209);
}

double NNfunction_ss_cLdL::synapse0x36b4540() {
   return (neuron0x3698160()*-0.390761);
}

double NNfunction_ss_cLdL::synapse0x36b4580() {
   return (neuron0x36986c0()*1.34422);
}

double NNfunction_ss_cLdL::synapse0x36b4c00() {
   return (neuron0x3698a00()*0.225726);
}

double NNfunction_ss_cLdL::synapse0x36b4c40() {
   return (neuron0x3698d40()*0.543476);
}

double NNfunction_ss_cLdL::synapse0x36b4c80() {
   return (neuron0x3699080()*0.0624403);
}

double NNfunction_ss_cLdL::synapse0x36b4cc0() {
   return (neuron0x36993c0()*-0.646973);
}

double NNfunction_ss_cLdL::synapse0x36b4d00() {
   return (neuron0x3699700()*-0.0532781);
}

double NNfunction_ss_cLdL::synapse0x36b4d40() {
   return (neuron0x3699a40()*0.265488);
}

double NNfunction_ss_cLdL::synapse0x36b50c0() {
   return (neuron0x3694df0()*-0.00400804);
}

double NNfunction_ss_cLdL::synapse0x36b5100() {
   return (neuron0x36950a0()*0.00436666);
}

double NNfunction_ss_cLdL::synapse0x36b5140() {
   return (neuron0x36953e0()*-0.0228795);
}

double NNfunction_ss_cLdL::synapse0x36b5180() {
   return (neuron0x3695720()*-4.90719);
}

double NNfunction_ss_cLdL::synapse0x36b51c0() {
   return (neuron0x3695a60()*0.00387188);
}

double NNfunction_ss_cLdL::synapse0x36b5200() {
   return (neuron0x3695da0()*-0.0159621);
}

double NNfunction_ss_cLdL::synapse0x36b5240() {
   return (neuron0x36960e0()*0.00796094);
}

double NNfunction_ss_cLdL::synapse0x36b5280() {
   return (neuron0x3696420()*-0.000239283);
}

double NNfunction_ss_cLdL::synapse0x36b52c0() {
   return (neuron0x3696760()*-0.0276);
}

double NNfunction_ss_cLdL::synapse0x36b5300() {
   return (neuron0x3696aa0()*-0.0115154);
}

double NNfunction_ss_cLdL::synapse0x36b5340() {
   return (neuron0x3696de0()*0.0173303);
}

double NNfunction_ss_cLdL::synapse0x36b5380() {
   return (neuron0x3697120()*0.464432);
}

double NNfunction_ss_cLdL::synapse0x36b53c0() {
   return (neuron0x3697460()*0.443498);
}

double NNfunction_ss_cLdL::synapse0x36b5400() {
   return (neuron0x36977a0()*-0.00767541);
}

double NNfunction_ss_cLdL::synapse0x36b5440() {
   return (neuron0x3697ae0()*-0.0208354);
}

double NNfunction_ss_cLdL::synapse0x36b5480() {
   return (neuron0x3697e20()*-0.00900807);
}

double NNfunction_ss_cLdL::synapse0x36b4f10() {
   return (neuron0x3698160()*-0.022567);
}

double NNfunction_ss_cLdL::synapse0x36b4f50() {
   return (neuron0x36986c0()*0.00582833);
}

double NNfunction_ss_cLdL::synapse0x36b55d0() {
   return (neuron0x3698a00()*0.020718);
}

double NNfunction_ss_cLdL::synapse0x36b5610() {
   return (neuron0x3698d40()*-0.00863318);
}

double NNfunction_ss_cLdL::synapse0x36b5650() {
   return (neuron0x3699080()*0.0121956);
}

double NNfunction_ss_cLdL::synapse0x36b5690() {
   return (neuron0x36993c0()*0.00416753);
}

double NNfunction_ss_cLdL::synapse0x36b56d0() {
   return (neuron0x3699700()*-0.00135959);
}

double NNfunction_ss_cLdL::synapse0x36b5710() {
   return (neuron0x3699a40()*0.00777824);
}

double NNfunction_ss_cLdL::synapse0x36b5a90() {
   return (neuron0x3694df0()*0.0891716);
}

double NNfunction_ss_cLdL::synapse0x36b5ad0() {
   return (neuron0x36950a0()*0.158613);
}

double NNfunction_ss_cLdL::synapse0x36b5b10() {
   return (neuron0x36953e0()*-0.0816661);
}

double NNfunction_ss_cLdL::synapse0x36b5b50() {
   return (neuron0x3695720()*-0.0373085);
}

double NNfunction_ss_cLdL::synapse0x36b5b90() {
   return (neuron0x3695a60()*-0.678079);
}

double NNfunction_ss_cLdL::synapse0x36b5bd0() {
   return (neuron0x3695da0()*0.189713);
}

double NNfunction_ss_cLdL::synapse0x36b5c10() {
   return (neuron0x36960e0()*-0.357443);
}

double NNfunction_ss_cLdL::synapse0x36b5c50() {
   return (neuron0x3696420()*0.197986);
}

double NNfunction_ss_cLdL::synapse0x36b5c90() {
   return (neuron0x3696760()*-0.315953);
}

double NNfunction_ss_cLdL::synapse0x36b5cd0() {
   return (neuron0x3696aa0()*0.256275);
}

double NNfunction_ss_cLdL::synapse0x36b5d10() {
   return (neuron0x3696de0()*-0.546009);
}

double NNfunction_ss_cLdL::synapse0x36b5d50() {
   return (neuron0x3697120()*0.584854);
}

double NNfunction_ss_cLdL::synapse0x36b5d90() {
   return (neuron0x3697460()*0.426993);
}

double NNfunction_ss_cLdL::synapse0x36b5dd0() {
   return (neuron0x36977a0()*0.126019);
}

double NNfunction_ss_cLdL::synapse0x36b5e10() {
   return (neuron0x3697ae0()*-0.0359943);
}

double NNfunction_ss_cLdL::synapse0x36b5e50() {
   return (neuron0x3697e20()*0.56241);
}

double NNfunction_ss_cLdL::synapse0x36b58e0() {
   return (neuron0x3698160()*0.0197674);
}

double NNfunction_ss_cLdL::synapse0x36b5920() {
   return (neuron0x36986c0()*0.285503);
}

double NNfunction_ss_cLdL::synapse0x36b5fa0() {
   return (neuron0x3698a00()*-0.726891);
}

double NNfunction_ss_cLdL::synapse0x36b5fe0() {
   return (neuron0x3698d40()*-0.23216);
}

double NNfunction_ss_cLdL::synapse0x36b6020() {
   return (neuron0x3699080()*0.17019);
}

double NNfunction_ss_cLdL::synapse0x36b6060() {
   return (neuron0x36993c0()*-0.138985);
}

double NNfunction_ss_cLdL::synapse0x36b60a0() {
   return (neuron0x3699700()*0.298344);
}

double NNfunction_ss_cLdL::synapse0x36b60e0() {
   return (neuron0x3699a40()*-0.136397);
}

double NNfunction_ss_cLdL::synapse0x36b6460() {
   return (neuron0x3694df0()*-0.0433562);
}

double NNfunction_ss_cLdL::synapse0x36b64a0() {
   return (neuron0x36950a0()*0.00820087);
}

double NNfunction_ss_cLdL::synapse0x36b64e0() {
   return (neuron0x36953e0()*0.120516);
}

double NNfunction_ss_cLdL::synapse0x36b6520() {
   return (neuron0x3695720()*-0.15404);
}

double NNfunction_ss_cLdL::synapse0x36b6560() {
   return (neuron0x3695a60()*0.0353496);
}

double NNfunction_ss_cLdL::synapse0x36b65a0() {
   return (neuron0x3695da0()*0.0289513);
}

double NNfunction_ss_cLdL::synapse0x36b65e0() {
   return (neuron0x36960e0()*0.0392232);
}

double NNfunction_ss_cLdL::synapse0x36b6620() {
   return (neuron0x3696420()*0.0350893);
}

double NNfunction_ss_cLdL::synapse0x36b6660() {
   return (neuron0x3696760()*0.0262452);
}

double NNfunction_ss_cLdL::synapse0x36b66a0() {
   return (neuron0x3696aa0()*0.0529806);
}

double NNfunction_ss_cLdL::synapse0x36b66e0() {
   return (neuron0x3696de0()*0.0161329);
}

double NNfunction_ss_cLdL::synapse0x36b6720() {
   return (neuron0x3697120()*-0.983051);
}

double NNfunction_ss_cLdL::synapse0x36b6760() {
   return (neuron0x3697460()*-0.726563);
}

double NNfunction_ss_cLdL::synapse0x36b67a0() {
   return (neuron0x36977a0()*-0.0607174);
}

double NNfunction_ss_cLdL::synapse0x36b67e0() {
   return (neuron0x3697ae0()*-0.0472918);
}

double NNfunction_ss_cLdL::synapse0x36b6820() {
   return (neuron0x3697e20()*-0.00770284);
}

double NNfunction_ss_cLdL::synapse0x36b62b0() {
   return (neuron0x3698160()*0.0600201);
}

double NNfunction_ss_cLdL::synapse0x36b62f0() {
   return (neuron0x36986c0()*-0.0239087);
}

double NNfunction_ss_cLdL::synapse0x36b6970() {
   return (neuron0x3698a00()*-0.019457);
}

double NNfunction_ss_cLdL::synapse0x36b69b0() {
   return (neuron0x3698d40()*-0.000488463);
}

double NNfunction_ss_cLdL::synapse0x36b69f0() {
   return (neuron0x3699080()*0.0399508);
}

double NNfunction_ss_cLdL::synapse0x36b6a30() {
   return (neuron0x36993c0()*-0.00280128);
}

double NNfunction_ss_cLdL::synapse0x36b6a70() {
   return (neuron0x3699700()*-0.0205021);
}

double NNfunction_ss_cLdL::synapse0x36b6ab0() {
   return (neuron0x3699a40()*-0.0693574);
}

double NNfunction_ss_cLdL::synapse0x36b6e30() {
   return (neuron0x3694df0()*0.158853);
}

double NNfunction_ss_cLdL::synapse0x36b6e70() {
   return (neuron0x36950a0()*0.0498666);
}

double NNfunction_ss_cLdL::synapse0x36b6eb0() {
   return (neuron0x36953e0()*-0.488371);
}

double NNfunction_ss_cLdL::synapse0x36b6ef0() {
   return (neuron0x3695720()*1.06251);
}

double NNfunction_ss_cLdL::synapse0x36b6f30() {
   return (neuron0x3695a60()*0.167706);
}

double NNfunction_ss_cLdL::synapse0x36b6f70() {
   return (neuron0x3695da0()*-0.103062);
}

double NNfunction_ss_cLdL::synapse0x36b6fb0() {
   return (neuron0x36960e0()*0.0172914);
}

double NNfunction_ss_cLdL::synapse0x36b6ff0() {
   return (neuron0x3696420()*0.0148642);
}

double NNfunction_ss_cLdL::synapse0x36b7030() {
   return (neuron0x3696760()*-0.100402);
}

double NNfunction_ss_cLdL::synapse0x36b7070() {
   return (neuron0x3696aa0()*-0.117494);
}

double NNfunction_ss_cLdL::synapse0x36b70b0() {
   return (neuron0x3696de0()*-0.00928979);
}

double NNfunction_ss_cLdL::synapse0x36b70f0() {
   return (neuron0x3697120()*-0.338615);
}

double NNfunction_ss_cLdL::synapse0x36b7130() {
   return (neuron0x3697460()*0.358311);
}

double NNfunction_ss_cLdL::synapse0x36b7170() {
   return (neuron0x36977a0()*-0.104016);
}

double NNfunction_ss_cLdL::synapse0x36b71b0() {
   return (neuron0x3697ae0()*0.183939);
}

double NNfunction_ss_cLdL::synapse0x36b71f0() {
   return (neuron0x3697e20()*-0.0558991);
}

double NNfunction_ss_cLdL::synapse0x36b6c80() {
   return (neuron0x3698160()*0.0226862);
}

double NNfunction_ss_cLdL::synapse0x36b6cc0() {
   return (neuron0x36986c0()*-0.0756892);
}

double NNfunction_ss_cLdL::synapse0x36b7340() {
   return (neuron0x3698a00()*0.0505508);
}

double NNfunction_ss_cLdL::synapse0x36b7380() {
   return (neuron0x3698d40()*-0.0598917);
}

double NNfunction_ss_cLdL::synapse0x36b73c0() {
   return (neuron0x3699080()*0.0114942);
}

double NNfunction_ss_cLdL::synapse0x36b7400() {
   return (neuron0x36993c0()*-0.0293944);
}

double NNfunction_ss_cLdL::synapse0x36b7440() {
   return (neuron0x3699700()*0.0476622);
}

double NNfunction_ss_cLdL::synapse0x36b7480() {
   return (neuron0x3699a40()*-0.0230811);
}

double NNfunction_ss_cLdL::synapse0x369ff30() {
   return (neuron0x3694df0()*-0.529157);
}

double NNfunction_ss_cLdL::synapse0x369ff70() {
   return (neuron0x36950a0()*-0.0370128);
}

double NNfunction_ss_cLdL::synapse0x369ffb0() {
   return (neuron0x36953e0()*-0.205094);
}

double NNfunction_ss_cLdL::synapse0x369fff0() {
   return (neuron0x3695720()*-0.0725763);
}

double NNfunction_ss_cLdL::synapse0x36a0030() {
   return (neuron0x3695a60()*-0.434327);
}

double NNfunction_ss_cLdL::synapse0x36a0070() {
   return (neuron0x3695da0()*-0.482192);
}

double NNfunction_ss_cLdL::synapse0x36a00b0() {
   return (neuron0x36960e0()*0.253223);
}

double NNfunction_ss_cLdL::synapse0x36a00f0() {
   return (neuron0x3696420()*-0.366356);
}

double NNfunction_ss_cLdL::synapse0x36b7c10() {
   return (neuron0x3696760()*0.554061);
}

double NNfunction_ss_cLdL::synapse0x36b7c50() {
   return (neuron0x3696aa0()*-0.378626);
}

double NNfunction_ss_cLdL::synapse0x36b7c90() {
   return (neuron0x3696de0()*0.0989112);
}

double NNfunction_ss_cLdL::synapse0x36b7cd0() {
   return (neuron0x3697120()*-0.49708);
}

double NNfunction_ss_cLdL::synapse0x36b7d10() {
   return (neuron0x3697460()*0.465533);
}

double NNfunction_ss_cLdL::synapse0x36b7d50() {
   return (neuron0x36977a0()*0.393378);
}

double NNfunction_ss_cLdL::synapse0x36b7d90() {
   return (neuron0x3697ae0()*-0.272116);
}

double NNfunction_ss_cLdL::synapse0x36b7dd0() {
   return (neuron0x3697e20()*-0.653396);
}

double NNfunction_ss_cLdL::synapse0x36b7650() {
   return (neuron0x3698160()*-0.0558524);
}

double NNfunction_ss_cLdL::synapse0x36b7690() {
   return (neuron0x36986c0()*0.58485);
}

double NNfunction_ss_cLdL::synapse0x36b7f20() {
   return (neuron0x3698a00()*0.401368);
}

double NNfunction_ss_cLdL::synapse0x36b7f60() {
   return (neuron0x3698d40()*0.104575);
}

double NNfunction_ss_cLdL::synapse0x36b7fa0() {
   return (neuron0x3699080()*-0.307426);
}

double NNfunction_ss_cLdL::synapse0x36b7fe0() {
   return (neuron0x36993c0()*-0.154724);
}

double NNfunction_ss_cLdL::synapse0x36b8020() {
   return (neuron0x3699700()*-0.143095);
}

double NNfunction_ss_cLdL::synapse0x36b8060() {
   return (neuron0x3699a40()*0.403638);
}

double NNfunction_ss_cLdL::synapse0x36b83e0() {
   return (neuron0x3694df0()*-0.327668);
}

double NNfunction_ss_cLdL::synapse0x36b8420() {
   return (neuron0x36950a0()*0.0394724);
}

double NNfunction_ss_cLdL::synapse0x36b8460() {
   return (neuron0x36953e0()*-0.240326);
}

double NNfunction_ss_cLdL::synapse0x36b84a0() {
   return (neuron0x3695720()*0.0436862);
}

double NNfunction_ss_cLdL::synapse0x36b84e0() {
   return (neuron0x3695a60()*0.133444);
}

double NNfunction_ss_cLdL::synapse0x36b8520() {
   return (neuron0x3695da0()*-0.550954);
}

double NNfunction_ss_cLdL::synapse0x36b8560() {
   return (neuron0x36960e0()*0.0661472);
}

double NNfunction_ss_cLdL::synapse0x36b85a0() {
   return (neuron0x3696420()*-0.109151);
}

double NNfunction_ss_cLdL::synapse0x36b85e0() {
   return (neuron0x3696760()*0.180372);
}

double NNfunction_ss_cLdL::synapse0x36b8620() {
   return (neuron0x3696aa0()*0.153495);
}

double NNfunction_ss_cLdL::synapse0x36b8660() {
   return (neuron0x3696de0()*0.371632);
}

double NNfunction_ss_cLdL::synapse0x36b86a0() {
   return (neuron0x3697120()*0.401484);
}

double NNfunction_ss_cLdL::synapse0x36b86e0() {
   return (neuron0x3697460()*-1.04979);
}

double NNfunction_ss_cLdL::synapse0x36b8720() {
   return (neuron0x36977a0()*-0.78123);
}

double NNfunction_ss_cLdL::synapse0x36b8760() {
   return (neuron0x3697ae0()*-0.0883753);
}

double NNfunction_ss_cLdL::synapse0x36b87a0() {
   return (neuron0x3697e20()*0.263279);
}

double NNfunction_ss_cLdL::synapse0x36b8230() {
   return (neuron0x3698160()*0.620235);
}

double NNfunction_ss_cLdL::synapse0x36b8270() {
   return (neuron0x36986c0()*-0.538293);
}

double NNfunction_ss_cLdL::synapse0x36b88f0() {
   return (neuron0x3698a00()*-1.01369);
}

double NNfunction_ss_cLdL::synapse0x36b8930() {
   return (neuron0x3698d40()*0.307269);
}

double NNfunction_ss_cLdL::synapse0x36b8970() {
   return (neuron0x3699080()*-0.106964);
}

double NNfunction_ss_cLdL::synapse0x36b89b0() {
   return (neuron0x36993c0()*0.447266);
}

double NNfunction_ss_cLdL::synapse0x36b89f0() {
   return (neuron0x3699700()*0.469844);
}

double NNfunction_ss_cLdL::synapse0x36b8a30() {
   return (neuron0x3699a40()*-0.139165);
}

double NNfunction_ss_cLdL::synapse0x36b8db0() {
   return (neuron0x3694df0()*-0.101943);
}

double NNfunction_ss_cLdL::synapse0x36b8df0() {
   return (neuron0x36950a0()*-0.0136338);
}

double NNfunction_ss_cLdL::synapse0x36b8e30() {
   return (neuron0x36953e0()*0.0398669);
}

double NNfunction_ss_cLdL::synapse0x36b8e70() {
   return (neuron0x3695720()*-0.477591);
}

double NNfunction_ss_cLdL::synapse0x36b8eb0() {
   return (neuron0x3695a60()*0.0137086);
}

double NNfunction_ss_cLdL::synapse0x36b8ef0() {
   return (neuron0x3695da0()*0.00935403);
}

double NNfunction_ss_cLdL::synapse0x36b8f30() {
   return (neuron0x36960e0()*0.00694023);
}

double NNfunction_ss_cLdL::synapse0x36b8f70() {
   return (neuron0x3696420()*-0.0053002);
}

double NNfunction_ss_cLdL::synapse0x36b8fb0() {
   return (neuron0x3696760()*0.0481359);
}

double NNfunction_ss_cLdL::synapse0x36b8ff0() {
   return (neuron0x3696aa0()*0.0227322);
}

double NNfunction_ss_cLdL::synapse0x36b9030() {
   return (neuron0x3696de0()*-0.0427759);
}

double NNfunction_ss_cLdL::synapse0x36b9070() {
   return (neuron0x3697120()*-0.408998);
}

double NNfunction_ss_cLdL::synapse0x36b90b0() {
   return (neuron0x3697460()*-0.213774);
}

double NNfunction_ss_cLdL::synapse0x36b90f0() {
   return (neuron0x36977a0()*-0.146686);
}

double NNfunction_ss_cLdL::synapse0x36b9130() {
   return (neuron0x3697ae0()*0.271592);
}

double NNfunction_ss_cLdL::synapse0x36b9170() {
   return (neuron0x3697e20()*0.467099);
}

double NNfunction_ss_cLdL::synapse0x36b8c00() {
   return (neuron0x3698160()*-0.0670662);
}

double NNfunction_ss_cLdL::synapse0x36b8c40() {
   return (neuron0x36986c0()*0.354811);
}

double NNfunction_ss_cLdL::synapse0x36a9770() {
   return (neuron0x3698a00()*0.271015);
}

double NNfunction_ss_cLdL::synapse0x36a97b0() {
   return (neuron0x3698d40()*-0.0151675);
}

double NNfunction_ss_cLdL::synapse0x36a97f0() {
   return (neuron0x3699080()*0.0652333);
}

double NNfunction_ss_cLdL::synapse0x36a9830() {
   return (neuron0x36993c0()*-0.0198691);
}

double NNfunction_ss_cLdL::synapse0x36a9870() {
   return (neuron0x3699700()*-0.0112664);
}

double NNfunction_ss_cLdL::synapse0x36a98b0() {
   return (neuron0x3699a40()*-0.0118779);
}

double NNfunction_ss_cLdL::synapse0x36a9c30() {
   return (neuron0x3694df0()*0.318594);
}

double NNfunction_ss_cLdL::synapse0x36a9c70() {
   return (neuron0x36950a0()*0.701479);
}

double NNfunction_ss_cLdL::synapse0x36a9cb0() {
   return (neuron0x36953e0()*0.488859);
}

double NNfunction_ss_cLdL::synapse0x36a9cf0() {
   return (neuron0x3695720()*0.118193);
}

double NNfunction_ss_cLdL::synapse0x36a9d30() {
   return (neuron0x3695a60()*1.07459);
}

double NNfunction_ss_cLdL::synapse0x36a9d70() {
   return (neuron0x3695da0()*0.0679667);
}

double NNfunction_ss_cLdL::synapse0x36a9db0() {
   return (neuron0x36960e0()*0.399676);
}

double NNfunction_ss_cLdL::synapse0x36a9df0() {
   return (neuron0x3696420()*0.568674);
}

double NNfunction_ss_cLdL::synapse0x36a9e30() {
   return (neuron0x3696760()*-0.0146656);
}

double NNfunction_ss_cLdL::synapse0x36a9e70() {
   return (neuron0x3696aa0()*0.342811);
}

double NNfunction_ss_cLdL::synapse0x36a9eb0() {
   return (neuron0x3696de0()*0.890114);
}

double NNfunction_ss_cLdL::synapse0x36a9ef0() {
   return (neuron0x3697120()*0.802594);
}

double NNfunction_ss_cLdL::synapse0x36a9f30() {
   return (neuron0x3697460()*-0.615056);
}

double NNfunction_ss_cLdL::synapse0x36a9f70() {
   return (neuron0x36977a0()*0.274842);
}

double NNfunction_ss_cLdL::synapse0x36a9fb0() {
   return (neuron0x3697ae0()*0.293018);
}

double NNfunction_ss_cLdL::synapse0x36a9ff0() {
   return (neuron0x3697e20()*0.268674);
}

double NNfunction_ss_cLdL::synapse0x36a9a80() {
   return (neuron0x3698160()*0.231261);
}

double NNfunction_ss_cLdL::synapse0x36a9ac0() {
   return (neuron0x36986c0()*-0.0507123);
}

double NNfunction_ss_cLdL::synapse0x36aa140() {
   return (neuron0x3698a00()*-0.788066);
}

double NNfunction_ss_cLdL::synapse0x36aa180() {
   return (neuron0x3698d40()*-0.584625);
}

double NNfunction_ss_cLdL::synapse0x36aa1c0() {
   return (neuron0x3699080()*0.411381);
}

double NNfunction_ss_cLdL::synapse0x36aa200() {
   return (neuron0x36993c0()*0.298134);
}

double NNfunction_ss_cLdL::synapse0x36aa240() {
   return (neuron0x3699700()*-0.579219);
}

double NNfunction_ss_cLdL::synapse0x36aa280() {
   return (neuron0x3699a40()*0.116989);
}

double NNfunction_ss_cLdL::synapse0x36aa600() {
   return (neuron0x3694df0()*-0.0469742);
}

double NNfunction_ss_cLdL::synapse0x36aa640() {
   return (neuron0x36950a0()*-0.0267505);
}

double NNfunction_ss_cLdL::synapse0x36aa680() {
   return (neuron0x36953e0()*0.0479303);
}

double NNfunction_ss_cLdL::synapse0x36aa6c0() {
   return (neuron0x3695720()*-0.617707);
}

double NNfunction_ss_cLdL::synapse0x36aa700() {
   return (neuron0x3695a60()*-0.0578643);
}

double NNfunction_ss_cLdL::synapse0x36aa740() {
   return (neuron0x3695da0()*-0.0157384);
}

double NNfunction_ss_cLdL::synapse0x36aa780() {
   return (neuron0x36960e0()*0.0761977);
}

double NNfunction_ss_cLdL::synapse0x36aa7c0() {
   return (neuron0x3696420()*-0.0126369);
}

double NNfunction_ss_cLdL::synapse0x36aa800() {
   return (neuron0x3696760()*0.00148532);
}

double NNfunction_ss_cLdL::synapse0x36aa840() {
   return (neuron0x3696aa0()*0.0517344);
}

double NNfunction_ss_cLdL::synapse0x36aa880() {
   return (neuron0x3696de0()*-0.0203954);
}

double NNfunction_ss_cLdL::synapse0x36aa8c0() {
   return (neuron0x3697120()*-0.217611);
}

double NNfunction_ss_cLdL::synapse0x36aa900() {
   return (neuron0x3697460()*-0.124683);
}

double NNfunction_ss_cLdL::synapse0x36aa940() {
   return (neuron0x36977a0()*0.0463526);
}

double NNfunction_ss_cLdL::synapse0x36aa980() {
   return (neuron0x3697ae0()*-0.00821838);
}

double NNfunction_ss_cLdL::synapse0x36aa9c0() {
   return (neuron0x3697e20()*0.00359146);
}

double NNfunction_ss_cLdL::synapse0x36aa450() {
   return (neuron0x3698160()*-0.0105149);
}

double NNfunction_ss_cLdL::synapse0x36aa490() {
   return (neuron0x36986c0()*-0.0263748);
}

double NNfunction_ss_cLdL::synapse0x36aab10() {
   return (neuron0x3698a00()*0.0225496);
}

double NNfunction_ss_cLdL::synapse0x36aab50() {
   return (neuron0x3698d40()*-0.0194518);
}

double NNfunction_ss_cLdL::synapse0x36aab90() {
   return (neuron0x3699080()*0.00788298);
}

double NNfunction_ss_cLdL::synapse0x36aabd0() {
   return (neuron0x36993c0()*0.000409451);
}

double NNfunction_ss_cLdL::synapse0x36aac10() {
   return (neuron0x3699700()*0.00774869);
}

double NNfunction_ss_cLdL::synapse0x36aac50() {
   return (neuron0x3699a40()*-0.0452372);
}

double NNfunction_ss_cLdL::synapse0x36aafd0() {
   return (neuron0x3694df0()*0.00104024);
}

double NNfunction_ss_cLdL::synapse0x36ab010() {
   return (neuron0x36950a0()*0.00149234);
}

double NNfunction_ss_cLdL::synapse0x36ab050() {
   return (neuron0x36953e0()*0.387806);
}

double NNfunction_ss_cLdL::synapse0x36ab090() {
   return (neuron0x3695720()*0.755506);
}

double NNfunction_ss_cLdL::synapse0x36ab0d0() {
   return (neuron0x3695a60()*-0.0688062);
}

double NNfunction_ss_cLdL::synapse0x36ab110() {
   return (neuron0x3695da0()*0.00468486);
}

double NNfunction_ss_cLdL::synapse0x36ab150() {
   return (neuron0x36960e0()*0.101697);
}

double NNfunction_ss_cLdL::synapse0x36ab190() {
   return (neuron0x3696420()*-0.0282764);
}

double NNfunction_ss_cLdL::synapse0x36ab1d0() {
   return (neuron0x3696760()*-0.0221089);
}

double NNfunction_ss_cLdL::synapse0x36ab210() {
   return (neuron0x3696aa0()*0.0519224);
}

double NNfunction_ss_cLdL::synapse0x36ab250() {
   return (neuron0x3696de0()*-0.0810091);
}

double NNfunction_ss_cLdL::synapse0x36ab290() {
   return (neuron0x3697120()*-0.299901);
}

double NNfunction_ss_cLdL::synapse0x36ab2d0() {
   return (neuron0x3697460()*-0.25729);
}

double NNfunction_ss_cLdL::synapse0x36ab310() {
   return (neuron0x36977a0()*0.0828624);
}

double NNfunction_ss_cLdL::synapse0x36ab350() {
   return (neuron0x3697ae0()*0.0648679);
}

double NNfunction_ss_cLdL::synapse0x36ab390() {
   return (neuron0x3697e20()*-0.025782);
}

double NNfunction_ss_cLdL::synapse0x36aae20() {
   return (neuron0x3698160()*-0.0144338);
}

double NNfunction_ss_cLdL::synapse0x36aae60() {
   return (neuron0x36986c0()*-0.0978821);
}

double NNfunction_ss_cLdL::synapse0x36ab4e0() {
   return (neuron0x3698a00()*0.0490933);
}

double NNfunction_ss_cLdL::synapse0x36ab520() {
   return (neuron0x3698d40()*-0.0106811);
}

double NNfunction_ss_cLdL::synapse0x36ab560() {
   return (neuron0x3699080()*-0.0630475);
}

double NNfunction_ss_cLdL::synapse0x36ab5a0() {
   return (neuron0x36993c0()*-0.0213264);
}

double NNfunction_ss_cLdL::synapse0x36ab5e0() {
   return (neuron0x3699700()*0.00233989);
}

double NNfunction_ss_cLdL::synapse0x36ab620() {
   return (neuron0x3699a40()*-0.00168682);
}

double NNfunction_ss_cLdL::synapse0x36bd4f0() {
   return (neuron0x3694df0()*-0.44407);
}

double NNfunction_ss_cLdL::synapse0x36bd530() {
   return (neuron0x36950a0()*0.158482);
}

double NNfunction_ss_cLdL::synapse0x36bd570() {
   return (neuron0x36953e0()*0.331363);
}

double NNfunction_ss_cLdL::synapse0x36bd5b0() {
   return (neuron0x3695720()*0.304348);
}

double NNfunction_ss_cLdL::synapse0x36bd5f0() {
   return (neuron0x3695a60()*0.0180913);
}

double NNfunction_ss_cLdL::synapse0x36bd630() {
   return (neuron0x3695da0()*0.181257);
}

double NNfunction_ss_cLdL::synapse0x36bd670() {
   return (neuron0x36960e0()*-0.321474);
}

double NNfunction_ss_cLdL::synapse0x36bd6b0() {
   return (neuron0x3696420()*-0.135853);
}

double NNfunction_ss_cLdL::synapse0x36bd6f0() {
   return (neuron0x3696760()*0.516483);
}

double NNfunction_ss_cLdL::synapse0x36bd730() {
   return (neuron0x3696aa0()*0.108328);
}

double NNfunction_ss_cLdL::synapse0x36bd770() {
   return (neuron0x3696de0()*0.685341);
}

double NNfunction_ss_cLdL::synapse0x36bd7b0() {
   return (neuron0x3697120()*1.44935);
}

double NNfunction_ss_cLdL::synapse0x36bd7f0() {
   return (neuron0x3697460()*-1.14522);
}

double NNfunction_ss_cLdL::synapse0x36bd830() {
   return (neuron0x36977a0()*-0.501536);
}

double NNfunction_ss_cLdL::synapse0x36bd870() {
   return (neuron0x3697ae0()*-0.313759);
}

double NNfunction_ss_cLdL::synapse0x36bd8b0() {
   return (neuron0x3697e20()*0.414679);
}

double NNfunction_ss_cLdL::synapse0x36ab660() {
   return (neuron0x3698160()*0.158683);
}

double NNfunction_ss_cLdL::synapse0x36ab6a0() {
   return (neuron0x36986c0()*-0.873586);
}

double NNfunction_ss_cLdL::synapse0x36bda00() {
   return (neuron0x3698a00()*-0.380988);
}

double NNfunction_ss_cLdL::synapse0x36bda40() {
   return (neuron0x3698d40()*-0.590676);
}

double NNfunction_ss_cLdL::synapse0x36bda80() {
   return (neuron0x3699080()*0.302026);
}

double NNfunction_ss_cLdL::synapse0x36bdac0() {
   return (neuron0x36993c0()*0.138517);
}

double NNfunction_ss_cLdL::synapse0x36bdb00() {
   return (neuron0x3699700()*0.0242871);
}

double NNfunction_ss_cLdL::synapse0x36bdb40() {
   return (neuron0x3699a40()*-0.142219);
}

double NNfunction_ss_cLdL::synapse0x36bdec0() {
   return (neuron0x3694df0()*0.0327468);
}

double NNfunction_ss_cLdL::synapse0x36bdf00() {
   return (neuron0x36950a0()*0.00545811);
}

double NNfunction_ss_cLdL::synapse0x36bdf40() {
   return (neuron0x36953e0()*-0.013004);
}

double NNfunction_ss_cLdL::synapse0x36bdf80() {
   return (neuron0x3695720()*2.01403);
}

double NNfunction_ss_cLdL::synapse0x36bdfc0() {
   return (neuron0x3695a60()*0.0374465);
}

double NNfunction_ss_cLdL::synapse0x36be000() {
   return (neuron0x3695da0()*-0.0135192);
}

double NNfunction_ss_cLdL::synapse0x36be040() {
   return (neuron0x36960e0()*-0.0249169);
}

double NNfunction_ss_cLdL::synapse0x36be080() {
   return (neuron0x3696420()*0.00262605);
}

double NNfunction_ss_cLdL::synapse0x36be0c0() {
   return (neuron0x3696760()*-0.00897713);
}

double NNfunction_ss_cLdL::synapse0x36be100() {
   return (neuron0x3696aa0()*-0.0379865);
}

double NNfunction_ss_cLdL::synapse0x36be140() {
   return (neuron0x3696de0()*-0.026584);
}

double NNfunction_ss_cLdL::synapse0x36be180() {
   return (neuron0x3697120()*0.503398);
}

double NNfunction_ss_cLdL::synapse0x36be1c0() {
   return (neuron0x3697460()*0.283148);
}

double NNfunction_ss_cLdL::synapse0x36be200() {
   return (neuron0x36977a0()*0.00109014);
}

double NNfunction_ss_cLdL::synapse0x36be240() {
   return (neuron0x3697ae0()*-0.0115915);
}

double NNfunction_ss_cLdL::synapse0x36be280() {
   return (neuron0x3697e20()*-0.0128559);
}

double NNfunction_ss_cLdL::synapse0x36bdd10() {
   return (neuron0x3698160()*0.0249824);
}

double NNfunction_ss_cLdL::synapse0x36bdd50() {
   return (neuron0x36986c0()*-0.0211837);
}

double NNfunction_ss_cLdL::synapse0x36be3d0() {
   return (neuron0x3698a00()*-0.0212677);
}

double NNfunction_ss_cLdL::synapse0x36be410() {
   return (neuron0x3698d40()*0.00507827);
}

double NNfunction_ss_cLdL::synapse0x36be450() {
   return (neuron0x3699080()*0.0104959);
}

double NNfunction_ss_cLdL::synapse0x36be490() {
   return (neuron0x36993c0()*0.000675999);
}

double NNfunction_ss_cLdL::synapse0x36be4d0() {
   return (neuron0x3699700()*0.0379951);
}

double NNfunction_ss_cLdL::synapse0x36be510() {
   return (neuron0x3699a40()*-0.0100566);
}

double NNfunction_ss_cLdL::synapse0x36be890() {
   return (neuron0x3694df0()*0.220409);
}

double NNfunction_ss_cLdL::synapse0x36be8d0() {
   return (neuron0x36950a0()*-0.0579977);
}

double NNfunction_ss_cLdL::synapse0x36be910() {
   return (neuron0x36953e0()*-0.588858);
}

double NNfunction_ss_cLdL::synapse0x36be950() {
   return (neuron0x3695720()*-1.25421);
}

double NNfunction_ss_cLdL::synapse0x36be990() {
   return (neuron0x3695a60()*-0.200415);
}

double NNfunction_ss_cLdL::synapse0x36be9d0() {
   return (neuron0x3695da0()*-0.230314);
}

double NNfunction_ss_cLdL::synapse0x36bea10() {
   return (neuron0x36960e0()*0.0336847);
}

double NNfunction_ss_cLdL::synapse0x36bea50() {
   return (neuron0x3696420()*-0.175431);
}

double NNfunction_ss_cLdL::synapse0x36bea90() {
   return (neuron0x3696760()*-0.217531);
}

double NNfunction_ss_cLdL::synapse0x36bead0() {
   return (neuron0x3696aa0()*-0.404454);
}

double NNfunction_ss_cLdL::synapse0x36beb10() {
   return (neuron0x3696de0()*-0.129341);
}

double NNfunction_ss_cLdL::synapse0x36beb50() {
   return (neuron0x3697120()*1.21831);
}

double NNfunction_ss_cLdL::synapse0x36beb90() {
   return (neuron0x3697460()*1.51835);
}

double NNfunction_ss_cLdL::synapse0x36bebd0() {
   return (neuron0x36977a0()*0.24146);
}

double NNfunction_ss_cLdL::synapse0x36bec10() {
   return (neuron0x3697ae0()*0.158343);
}

double NNfunction_ss_cLdL::synapse0x36bec50() {
   return (neuron0x3697e20()*0.0327269);
}

double NNfunction_ss_cLdL::synapse0x36be6e0() {
   return (neuron0x3698160()*-0.527356);
}

double NNfunction_ss_cLdL::synapse0x36be720() {
   return (neuron0x36986c0()*0.0553642);
}

double NNfunction_ss_cLdL::synapse0x36beda0() {
   return (neuron0x3698a00()*0.112917);
}

double NNfunction_ss_cLdL::synapse0x36bede0() {
   return (neuron0x3698d40()*-0.0217492);
}

double NNfunction_ss_cLdL::synapse0x36bee20() {
   return (neuron0x3699080()*-0.00983502);
}

double NNfunction_ss_cLdL::synapse0x36bee60() {
   return (neuron0x36993c0()*-0.18547);
}

double NNfunction_ss_cLdL::synapse0x36beea0() {
   return (neuron0x3699700()*0.0368641);
}

double NNfunction_ss_cLdL::synapse0x36beee0() {
   return (neuron0x3699a40()*0.296762);
}

double NNfunction_ss_cLdL::synapse0x36bf260() {
   return (neuron0x3694df0()*-0.367727);
}

double NNfunction_ss_cLdL::synapse0x36bf2a0() {
   return (neuron0x36950a0()*0.43379);
}

double NNfunction_ss_cLdL::synapse0x36bf2e0() {
   return (neuron0x36953e0()*0.661142);
}

double NNfunction_ss_cLdL::synapse0x36bf320() {
   return (neuron0x3695720()*-0.46581);
}

double NNfunction_ss_cLdL::synapse0x36bf360() {
   return (neuron0x3695a60()*-0.639063);
}

double NNfunction_ss_cLdL::synapse0x36bf3a0() {
   return (neuron0x3695da0()*-1.36372);
}

double NNfunction_ss_cLdL::synapse0x36bf3e0() {
   return (neuron0x36960e0()*0.137497);
}

double NNfunction_ss_cLdL::synapse0x36bf420() {
   return (neuron0x3696420()*0.0195121);
}

double NNfunction_ss_cLdL::synapse0x36bf460() {
   return (neuron0x3696760()*-0.349505);
}

double NNfunction_ss_cLdL::synapse0x36bf4a0() {
   return (neuron0x3696aa0()*0.199873);
}

double NNfunction_ss_cLdL::synapse0x36bf4e0() {
   return (neuron0x3696de0()*-0.0630278);
}

double NNfunction_ss_cLdL::synapse0x36bf520() {
   return (neuron0x3697120()*-0.657305);
}

double NNfunction_ss_cLdL::synapse0x36bf560() {
   return (neuron0x3697460()*0.635744);
}

double NNfunction_ss_cLdL::synapse0x36bf5a0() {
   return (neuron0x36977a0()*0.74757);
}

double NNfunction_ss_cLdL::synapse0x36bf5e0() {
   return (neuron0x3697ae0()*-0.30916);
}

double NNfunction_ss_cLdL::synapse0x36bf620() {
   return (neuron0x3697e20()*-1.04663);
}

double NNfunction_ss_cLdL::synapse0x36bf0b0() {
   return (neuron0x3698160()*-0.194008);
}

double NNfunction_ss_cLdL::synapse0x36bf0f0() {
   return (neuron0x36986c0()*0.00561371);
}

double NNfunction_ss_cLdL::synapse0x36bf770() {
   return (neuron0x3698a00()*0.591231);
}

double NNfunction_ss_cLdL::synapse0x36bf7b0() {
   return (neuron0x3698d40()*-0.534609);
}

double NNfunction_ss_cLdL::synapse0x36bf7f0() {
   return (neuron0x3699080()*-0.481141);
}

double NNfunction_ss_cLdL::synapse0x36bf830() {
   return (neuron0x36993c0()*1.14685);
}

double NNfunction_ss_cLdL::synapse0x36bf870() {
   return (neuron0x3699700()*-0.48283);
}

double NNfunction_ss_cLdL::synapse0x36bf8b0() {
   return (neuron0x3699a40()*0.181805);
}

double NNfunction_ss_cLdL::synapse0x345f720() {
   return (neuron0x3699eb0()*0.780957);
}

double NNfunction_ss_cLdL::synapse0x345f760() {
   return (neuron0x369a6f0()*-1.43274);
}

double NNfunction_ss_cLdL::synapse0x369c260() {
   return (neuron0x369b1d0()*1.38196);
}

double NNfunction_ss_cLdL::synapse0x369c2a0() {
   return (neuron0x369ac70()*-1.04422);
}

double NNfunction_ss_cLdL::synapse0x369dd30() {
   return (neuron0x369bfb0()*1.13087);
}

double NNfunction_ss_cLdL::synapse0x369dd70() {
   return (neuron0x369da80()*2.09258);
}

double NNfunction_ss_cLdL::synapse0x369eb00() {
   return (neuron0x369e850()*0.0280739);
}

double NNfunction_ss_cLdL::synapse0x369eb40() {
   return (neuron0x369f220()*-3.47748);
}

double NNfunction_ss_cLdL::synapse0x369f4d0() {
   return (neuron0x369fbf0()*3.41026);
}

double NNfunction_ss_cLdL::synapse0x369f510() {
   return (neuron0x36a06d0()*-1.03793);
}

double NNfunction_ss_cLdL::synapse0x369fea0() {
   return (neuron0x36a10a0()*1.50753);
}

double NNfunction_ss_cLdL::synapse0x369fee0() {
   return (neuron0x369e180()*0.525954);
}

double NNfunction_ss_cLdL::synapse0x36a0980() {
   return (neuron0x36a2c50()*0.00180573);
}

double NNfunction_ss_cLdL::synapse0x36a09c0() {
   return (neuron0x36a3620()*-0.757751);
}

double NNfunction_ss_cLdL::synapse0x36a1350() {
   return (neuron0x36a3ff0()*1.53752);
}

double NNfunction_ss_cLdL::synapse0x36a1390() {
   return (neuron0x36a49c0()*-0.481701);
}

double NNfunction_ss_cLdL::synapse0x369e430() {
   return (neuron0x36a67d0()*-0.87841);
}

double NNfunction_ss_cLdL::synapse0x369e470() {
   return (neuron0x36a6ab0()*-2.32264);
}

double NNfunction_ss_cLdL::synapse0x36a2f00() {
   return (neuron0x36a7480()*-0.273656);
}

double NNfunction_ss_cLdL::synapse0x36a2f40() {
   return (neuron0x36a7e50()*-0.650424);
}

double NNfunction_ss_cLdL::synapse0x36a38d0() {
   return (neuron0x36a8820()*-1.52639);
}

double NNfunction_ss_cLdL::synapse0x36a3910() {
   return (neuron0x36a91f0()*1.99442);
}

double NNfunction_ss_cLdL::synapse0x36a42a0() {
   return (neuron0x36a1d40()*0.793132);
}

double NNfunction_ss_cLdL::synapse0x36a42e0() {
   return (neuron0x36a2710()*0.674221);
}

double NNfunction_ss_cLdL::synapse0x36a4c70() {
   return (neuron0x36abf80()*-1.58551);
}

double NNfunction_ss_cLdL::synapse0x36a4cb0() {
   return (neuron0x36ac950()*-1.07343);
}

double NNfunction_ss_cLdL::synapse0x3697d00() {
   return (neuron0x36ad320()*2.8735);
}

double NNfunction_ss_cLdL::synapse0x3697d40() {
   return (neuron0x36adcf0()*0.792062);
}

double NNfunction_ss_cLdL::synapse0x36a6d60() {
   return (neuron0x36ae6c0()*-0.918031);
}

double NNfunction_ss_cLdL::synapse0x36a6da0() {
   return (neuron0x36af090()*1.17637);
}

double NNfunction_ss_cLdL::synapse0x36a7730() {
   return (neuron0x36afa60()*-0.786805);
}

double NNfunction_ss_cLdL::synapse0x36a7770() {
   return (neuron0x36b0430()*0.791209);
}

double NNfunction_ss_cLdL::synapse0x36a8100() {
   return (neuron0x36a64c0()*-1.25792);
}

double NNfunction_ss_cLdL::synapse0x36a8140() {
   return (neuron0x36b3010()*-0.895545);
}

double NNfunction_ss_cLdL::synapse0x36a8ad0() {
   return (neuron0x36b39e0()*-1.14133);
}

double NNfunction_ss_cLdL::synapse0x36a8b10() {
   return (neuron0x36b43b0()*-0.723176);
}

double NNfunction_ss_cLdL::synapse0x36a94a0() {
   return (neuron0x36b4d80()*3.98821);
}

double NNfunction_ss_cLdL::synapse0x36a94e0() {
   return (neuron0x36b5750()*1.21973);
}

double NNfunction_ss_cLdL::synapse0x36a1ff0() {
   return (neuron0x36b6120()*-3.27263);
}

double NNfunction_ss_cLdL::synapse0x36a2030() {
   return (neuron0x36b6af0()*3.44131);
}

double NNfunction_ss_cLdL::synapse0x36ab8a0() {
   return (neuron0x36b74c0()*1.19618);
}

double NNfunction_ss_cLdL::synapse0x36ab8e0() {
   return (neuron0x36b80a0()*-0.988571);
}

double NNfunction_ss_cLdL::synapse0x36ac230() {
   return (neuron0x36b8a70()*-0.0362312);
}

double NNfunction_ss_cLdL::synapse0x36ac270() {
   return (neuron0x36a98f0()*0.318584);
}

double NNfunction_ss_cLdL::synapse0x36acc00() {
   return (neuron0x36aa2c0()*-0.968324);
}

double NNfunction_ss_cLdL::synapse0x36acc40() {
   return (neuron0x36aac90()*2.63877);
}

double NNfunction_ss_cLdL::synapse0x36ad5d0() {
   return (neuron0x36bd2d0()*0.89463);
}

double NNfunction_ss_cLdL::synapse0x36ad610() {
   return (neuron0x36bdb80()*0.98602);
}

double NNfunction_ss_cLdL::synapse0x36adfa0() {
   return (neuron0x36be550()*-1.61761);
}

double NNfunction_ss_cLdL::synapse0x36adfe0() {
   return (neuron0x36bef20()*-0.948395);
}

double NNfunction_ss_cLdL::synapse0x36b06e0() {
   return (neuron0x3699eb0()*0.441732);
}

double NNfunction_ss_cLdL::synapse0x36b0720() {
   return (neuron0x369a6f0()*-0.133007);
}

double NNfunction_ss_cLdL::synapse0x36a5ca0() {
   return (neuron0x369b1d0()*0.721344);
}

double NNfunction_ss_cLdL::synapse0x36a5ce0() {
   return (neuron0x369ac70()*-0.457153);
}

double NNfunction_ss_cLdL::synapse0x36b32c0() {
   return (neuron0x369bfb0()*0.751357);
}

double NNfunction_ss_cLdL::synapse0x36b3300() {
   return (neuron0x369da80()*-0.320222);
}

double NNfunction_ss_cLdL::synapse0x36b3c90() {
   return (neuron0x369e850()*-0.133712);
}

double NNfunction_ss_cLdL::synapse0x36b3cd0() {
   return (neuron0x369f220()*-0.952056);
}

double NNfunction_ss_cLdL::synapse0x36b4660() {
   return (neuron0x369fbf0()*0.94539);
}

double NNfunction_ss_cLdL::synapse0x36b46a0() {
   return (neuron0x36a06d0()*-1.39364);
}

double NNfunction_ss_cLdL::synapse0x36b5030() {
   return (neuron0x36a10a0()*0.412151);
}

double NNfunction_ss_cLdL::synapse0x36b5070() {
   return (neuron0x369e180()*0.193065);
}

double NNfunction_ss_cLdL::synapse0x36b5a00() {
   return (neuron0x36a2c50()*-2.97844);
}

double NNfunction_ss_cLdL::synapse0x36b5a40() {
   return (neuron0x36a3620()*-1.00073);
}

double NNfunction_ss_cLdL::synapse0x36b63d0() {
   return (neuron0x36a3ff0()*0.84094);
}

double NNfunction_ss_cLdL::synapse0x36b6410() {
   return (neuron0x36a49c0()*-0.369832);
}

double NNfunction_ss_cLdL::synapse0x36b6da0() {
   return (neuron0x36a67d0()*-0.503675);
}

double NNfunction_ss_cLdL::synapse0x36b6de0() {
   return (neuron0x36a6ab0()*-0.253763);
}

double NNfunction_ss_cLdL::synapse0x36b7770() {
   return (neuron0x36a7480()*0.260778);
}

double NNfunction_ss_cLdL::synapse0x36b77b0() {
   return (neuron0x36a7e50()*-3.02191);
}

double NNfunction_ss_cLdL::synapse0x36b8350() {
   return (neuron0x36a8820()*-0.28106);
}

double NNfunction_ss_cLdL::synapse0x36b8390() {
   return (neuron0x36a91f0()*0.0627049);
}

double NNfunction_ss_cLdL::synapse0x36b8d20() {
   return (neuron0x36a1d40()*0.177201);
}

double NNfunction_ss_cLdL::synapse0x36b8d60() {
   return (neuron0x36a2710()*-0.0844221);
}

double NNfunction_ss_cLdL::synapse0x36a9ba0() {
   return (neuron0x36abf80()*0.0750056);
}

double NNfunction_ss_cLdL::synapse0x36a9be0() {
   return (neuron0x36ac950()*1.70551);
}

double NNfunction_ss_cLdL::synapse0x36aa570() {
   return (neuron0x36ad320()*0.212973);
}

double NNfunction_ss_cLdL::synapse0x36aa5b0() {
   return (neuron0x36adcf0()*0.339044);
}

double NNfunction_ss_cLdL::synapse0x36aaf40() {
   return (neuron0x36ae6c0()*-0.408182);
}

double NNfunction_ss_cLdL::synapse0x36aaf80() {
   return (neuron0x36af090()*-0.132794);
}

double NNfunction_ss_cLdL::synapse0x36bd460() {
   return (neuron0x36afa60()*2.54605);
}

double NNfunction_ss_cLdL::synapse0x36bd4a0() {
   return (neuron0x36b0430()*0.387885);
}

double NNfunction_ss_cLdL::synapse0x36bde30() {
   return (neuron0x36a64c0()*-0.427437);
}

double NNfunction_ss_cLdL::synapse0x36bde70() {
   return (neuron0x36b3010()*-0.387456);
}

double NNfunction_ss_cLdL::synapse0x36be800() {
   return (neuron0x36b39e0()*-0.556317);
}

double NNfunction_ss_cLdL::synapse0x36be840() {
   return (neuron0x36b43b0()*-0.334034);
}

double NNfunction_ss_cLdL::synapse0x36bf1d0() {
   return (neuron0x36b4d80()*1.37289);
}

double NNfunction_ss_cLdL::synapse0x36bf210() {
   return (neuron0x36b5750()*0.76201);
}

double NNfunction_ss_cLdL::synapse0x369a160() {
   return (neuron0x36b6120()*-1.16553);
}

double NNfunction_ss_cLdL::synapse0x369a1a0() {
   return (neuron0x36b6af0()*0.421791);
}

double NNfunction_ss_cLdL::synapse0x36ae970() {
   return (neuron0x36b74c0()*0.756276);
}

double NNfunction_ss_cLdL::synapse0x36ae9b0() {
   return (neuron0x36b80a0()*-0.597214);
}

double NNfunction_ss_cLdL::synapse0x36bf8f0() {
   return (neuron0x36b8a70()*0.142903);
}

double NNfunction_ss_cLdL::synapse0x36bf930() {
   return (neuron0x36a98f0()*0.432111);
}

double NNfunction_ss_cLdL::synapse0x36bf970() {
   return (neuron0x36aa2c0()*1.58038);
}

double NNfunction_ss_cLdL::synapse0x36bf9b0() {
   return (neuron0x36aac90()*-0.235253);
}

double NNfunction_ss_cLdL::synapse0x36c6860() {
   return (neuron0x36bd2d0()*0.512272);
}

double NNfunction_ss_cLdL::synapse0x36c68a0() {
   return (neuron0x36bdb80()*0.768997);
}

double NNfunction_ss_cLdL::synapse0x36c68e0() {
   return (neuron0x36be550()*-0.400084);
}

double NNfunction_ss_cLdL::synapse0x36c6920() {
   return (neuron0x36bef20()*-0.459883);
}

double NNfunction_ss_cLdL::synapse0x36c6ca0() {
   return (neuron0x3699eb0()*-0.675167);
}

double NNfunction_ss_cLdL::synapse0x36c6ce0() {
   return (neuron0x369a6f0()*0.268439);
}

double NNfunction_ss_cLdL::synapse0x36c6d20() {
   return (neuron0x369b1d0()*-1.06313);
}

double NNfunction_ss_cLdL::synapse0x36c6d60() {
   return (neuron0x369ac70()*0.670589);
}

double NNfunction_ss_cLdL::synapse0x36c6da0() {
   return (neuron0x369bfb0()*-1.09664);
}

double NNfunction_ss_cLdL::synapse0x36c6de0() {
   return (neuron0x369da80()*0.247051);
}

double NNfunction_ss_cLdL::synapse0x36c6e20() {
   return (neuron0x369e850()*0.177248);
}

double NNfunction_ss_cLdL::synapse0x36c6e60() {
   return (neuron0x369f220()*0.218689);
}

double NNfunction_ss_cLdL::synapse0x36c6ea0() {
   return (neuron0x369fbf0()*-0.392476);
}

double NNfunction_ss_cLdL::synapse0x36c6ee0() {
   return (neuron0x36a06d0()*-0.454009);
}

double NNfunction_ss_cLdL::synapse0x36c6f20() {
   return (neuron0x36a10a0()*-0.654048);
}

double NNfunction_ss_cLdL::synapse0x36c6f60() {
   return (neuron0x369e180()*-0.320048);
}

double NNfunction_ss_cLdL::synapse0x36c6fa0() {
   return (neuron0x36a2c50()*0.875126);
}

double NNfunction_ss_cLdL::synapse0x36c6fe0() {
   return (neuron0x36a3620()*0.0286476);
}

double NNfunction_ss_cLdL::synapse0x36c7020() {
   return (neuron0x36a3ff0()*-1.21764);
}

double NNfunction_ss_cLdL::synapse0x36c7060() {
   return (neuron0x36a49c0()*0.515273);
}

double NNfunction_ss_cLdL::synapse0x36c6af0() {
   return (neuron0x36a67d0()*0.728633);
}

double NNfunction_ss_cLdL::synapse0x36c6b30() {
   return (neuron0x36a6ab0()*-0.18116);
}

double NNfunction_ss_cLdL::synapse0x36c71b0() {
   return (neuron0x36a7480()*-0.290273);
}

double NNfunction_ss_cLdL::synapse0x36c71f0() {
   return (neuron0x36a7e50()*-2.75624);
}

double NNfunction_ss_cLdL::synapse0x36c7230() {
   return (neuron0x36a8820()*0.421027);
}

double NNfunction_ss_cLdL::synapse0x36c7270() {
   return (neuron0x36a91f0()*0.476774);
}

double NNfunction_ss_cLdL::synapse0x36c72b0() {
   return (neuron0x36a1d40()*-0.300639);
}

double NNfunction_ss_cLdL::synapse0x36c72f0() {
   return (neuron0x36a2710()*0.0139104);
}

double NNfunction_ss_cLdL::synapse0x36c7330() {
   return (neuron0x36abf80()*-0.026804);
}

double NNfunction_ss_cLdL::synapse0x36c7370() {
   return (neuron0x36ac950()*0.838279);
}

double NNfunction_ss_cLdL::synapse0x36c73b0() {
   return (neuron0x36ad320()*-0.0387738);
}

double NNfunction_ss_cLdL::synapse0x36c73f0() {
   return (neuron0x36adcf0()*-0.513863);
}

double NNfunction_ss_cLdL::synapse0x36c7430() {
   return (neuron0x36ae6c0()*0.588685);
}

double NNfunction_ss_cLdL::synapse0x36c7470() {
   return (neuron0x36af090()*0.775795);
}

double NNfunction_ss_cLdL::synapse0x36c74b0() {
   return (neuron0x36afa60()*1.2438);
}

double NNfunction_ss_cLdL::synapse0x36c74f0() {
   return (neuron0x36b0430()*-0.577113);
}

double NNfunction_ss_cLdL::synapse0x36c70a0() {
   return (neuron0x36a64c0()*0.585679);
}

double NNfunction_ss_cLdL::synapse0x36c70e0() {
   return (neuron0x36b3010()*0.569164);
}

double NNfunction_ss_cLdL::synapse0x36c7120() {
   return (neuron0x36b39e0()*0.835546);
}

double NNfunction_ss_cLdL::synapse0x36c7160() {
   return (neuron0x36b43b0()*0.462797);
}

double NNfunction_ss_cLdL::synapse0x36c7740() {
   return (neuron0x36b4d80()*-0.376765);
}

double NNfunction_ss_cLdL::synapse0x36c7780() {
   return (neuron0x36b5750()*-1.12049);
}

double NNfunction_ss_cLdL::synapse0x36c77c0() {
   return (neuron0x36b6120()*0.651855);
}

double NNfunction_ss_cLdL::synapse0x36c7800() {
   return (neuron0x36b6af0()*-0.580842);
}

double NNfunction_ss_cLdL::synapse0x36c7840() {
   return (neuron0x36b74c0()*-1.08522);
}

double NNfunction_ss_cLdL::synapse0x36c7880() {
   return (neuron0x36b80a0()*0.849351);
}

double NNfunction_ss_cLdL::synapse0x36c78c0() {
   return (neuron0x36b8a70()*0.218607);
}

double NNfunction_ss_cLdL::synapse0x36c7900() {
   return (neuron0x36a98f0()*-0.605221);
}

double NNfunction_ss_cLdL::synapse0x36c7940() {
   return (neuron0x36aa2c0()*1.13678);
}

double NNfunction_ss_cLdL::synapse0x36c7980() {
   return (neuron0x36aac90()*-0.825431);
}

double NNfunction_ss_cLdL::synapse0x36c79c0() {
   return (neuron0x36bd2d0()*-0.74626);
}

double NNfunction_ss_cLdL::synapse0x36c7a00() {
   return (neuron0x36bdb80()*0.41287);
}

double NNfunction_ss_cLdL::synapse0x36c7a40() {
   return (neuron0x36be550()*0.506205);
}

double NNfunction_ss_cLdL::synapse0x36c7a80() {
   return (neuron0x36bef20()*0.671084);
}

double NNfunction_ss_cLdL::synapse0x36c7e00() {
   return (neuron0x3699eb0()*0.224126);
}

double NNfunction_ss_cLdL::synapse0x36c7e40() {
   return (neuron0x369a6f0()*-0.0284465);
}

double NNfunction_ss_cLdL::synapse0x36c7e80() {
   return (neuron0x369b1d0()*0.151607);
}

double NNfunction_ss_cLdL::synapse0x36c7ec0() {
   return (neuron0x369ac70()*-0.0804529);
}

double NNfunction_ss_cLdL::synapse0x36c7f00() {
   return (neuron0x369bfb0()*0.237622);
}

double NNfunction_ss_cLdL::synapse0x36c7f40() {
   return (neuron0x369da80()*0.213657);
}

double NNfunction_ss_cLdL::synapse0x36c7f80() {
   return (neuron0x369e850()*-0.226265);
}

double NNfunction_ss_cLdL::synapse0x36c7fc0() {
   return (neuron0x369f220()*-0.985701);
}

double NNfunction_ss_cLdL::synapse0x36c8000() {
   return (neuron0x369fbf0()*1.18231);
}

double NNfunction_ss_cLdL::synapse0x36c8040() {
   return (neuron0x36a06d0()*-1.43734);
}

double NNfunction_ss_cLdL::synapse0x36c8080() {
   return (neuron0x36a10a0()*0.046392);
}

double NNfunction_ss_cLdL::synapse0x36c80c0() {
   return (neuron0x369e180()*-0.299685);
}

double NNfunction_ss_cLdL::synapse0x36c8100() {
   return (neuron0x36a2c50()*-2.49696);
}

double NNfunction_ss_cLdL::synapse0x36c8140() {
   return (neuron0x36a3620()*-0.783592);
}

double NNfunction_ss_cLdL::synapse0x36c8180() {
   return (neuron0x36a3ff0()*0.28617);
}

double NNfunction_ss_cLdL::synapse0x36c81c0() {
   return (neuron0x36a49c0()*-0.277397);
}

double NNfunction_ss_cLdL::synapse0x36c7c50() {
   return (neuron0x36a67d0()*-0.175008);
}

double NNfunction_ss_cLdL::synapse0x36c7c90() {
   return (neuron0x36a6ab0()*0.405286);
}

double NNfunction_ss_cLdL::synapse0x36c8310() {
   return (neuron0x36a7480()*-0.629795);
}

double NNfunction_ss_cLdL::synapse0x36c8350() {
   return (neuron0x36a7e50()*0.622879);
}

double NNfunction_ss_cLdL::synapse0x36c8390() {
   return (neuron0x36a8820()*0.648202);
}

double NNfunction_ss_cLdL::synapse0x36c83d0() {
   return (neuron0x36a91f0()*0.856703);
}

double NNfunction_ss_cLdL::synapse0x36c8410() {
   return (neuron0x36a1d40()*-0.0466762);
}

double NNfunction_ss_cLdL::synapse0x36c8450() {
   return (neuron0x36a2710()*0.705154);
}

double NNfunction_ss_cLdL::synapse0x36c8490() {
   return (neuron0x36abf80()*0.178849);
}

double NNfunction_ss_cLdL::synapse0x36c84d0() {
   return (neuron0x36ac950()*1.38598);
}

double NNfunction_ss_cLdL::synapse0x36c8510() {
   return (neuron0x36ad320()*-0.177025);
}

double NNfunction_ss_cLdL::synapse0x36c8550() {
   return (neuron0x36adcf0()*0.307898);
}

double NNfunction_ss_cLdL::synapse0x36c8590() {
   return (neuron0x36ae6c0()*-0.115778);
}

double NNfunction_ss_cLdL::synapse0x36c85d0() {
   return (neuron0x36af090()*0.36161);
}

double NNfunction_ss_cLdL::synapse0x36c8610() {
   return (neuron0x36afa60()*0.681378);
}

double NNfunction_ss_cLdL::synapse0x36c8650() {
   return (neuron0x36b0430()*0.140257);
}

double NNfunction_ss_cLdL::synapse0x36c8200() {
   return (neuron0x36a64c0()*0.209413);
}

double NNfunction_ss_cLdL::synapse0x36c8240() {
   return (neuron0x36b3010()*-0.0331802);
}

double NNfunction_ss_cLdL::synapse0x36c8280() {
   return (neuron0x36b39e0()*-0.258266);
}

double NNfunction_ss_cLdL::synapse0x36c82c0() {
   return (neuron0x36b43b0()*0.458877);
}

double NNfunction_ss_cLdL::synapse0x36c88a0() {
   return (neuron0x36b4d80()*-1.27585);
}

double NNfunction_ss_cLdL::synapse0x36c88e0() {
   return (neuron0x36b5750()*0.163748);
}

double NNfunction_ss_cLdL::synapse0x36c8920() {
   return (neuron0x36b6120()*-2.66776);
}

double NNfunction_ss_cLdL::synapse0x36c8960() {
   return (neuron0x36b6af0()*-0.209203);
}

double NNfunction_ss_cLdL::synapse0x36c89a0() {
   return (neuron0x36b74c0()*-0.0943312);
}

double NNfunction_ss_cLdL::synapse0x36c89e0() {
   return (neuron0x36b80a0()*-0.0139463);
}

double NNfunction_ss_cLdL::synapse0x36c8a20() {
   return (neuron0x36b8a70()*0.397669);
}

double NNfunction_ss_cLdL::synapse0x36c8a60() {
   return (neuron0x36a98f0()*0.276394);
}

double NNfunction_ss_cLdL::synapse0x36c8aa0() {
   return (neuron0x36aa2c0()*-0.215033);
}

double NNfunction_ss_cLdL::synapse0x36c8ae0() {
   return (neuron0x36aac90()*-1.33875);
}

double NNfunction_ss_cLdL::synapse0x36c8b20() {
   return (neuron0x36bd2d0()*0.221212);
}

double NNfunction_ss_cLdL::synapse0x36c8b60() {
   return (neuron0x36bdb80()*0.049098);
}

double NNfunction_ss_cLdL::synapse0x36c8ba0() {
   return (neuron0x36be550()*0.477954);
}

double NNfunction_ss_cLdL::synapse0x36c8be0() {
   return (neuron0x36bef20()*0.134566);
}

double NNfunction_ss_cLdL::synapse0x36c8f60() {
   return (neuron0x3699eb0()*-0.297577);
}

double NNfunction_ss_cLdL::synapse0x36c8fa0() {
   return (neuron0x369a6f0()*-0.0279426);
}

double NNfunction_ss_cLdL::synapse0x36c8fe0() {
   return (neuron0x369b1d0()*0.102813);
}

double NNfunction_ss_cLdL::synapse0x36c9020() {
   return (neuron0x369ac70()*0.0992657);
}

double NNfunction_ss_cLdL::synapse0x36c9060() {
   return (neuron0x369bfb0()*-0.36379);
}

double NNfunction_ss_cLdL::synapse0x36c90a0() {
   return (neuron0x369da80()*-0.0336994);
}

double NNfunction_ss_cLdL::synapse0x36c90e0() {
   return (neuron0x369e850()*-0.266606);
}

double NNfunction_ss_cLdL::synapse0x36c9120() {
   return (neuron0x369f220()*-0.120302);
}

double NNfunction_ss_cLdL::synapse0x36c9160() {
   return (neuron0x369fbf0()*-0.0678777);
}

double NNfunction_ss_cLdL::synapse0x36c91a0() {
   return (neuron0x36a06d0()*0.305961);
}

double NNfunction_ss_cLdL::synapse0x36c91e0() {
   return (neuron0x36a10a0()*-0.597481);
}

double NNfunction_ss_cLdL::synapse0x36c9220() {
   return (neuron0x369e180()*-0.597474);
}

double NNfunction_ss_cLdL::synapse0x36c9260() {
   return (neuron0x36a2c50()*0.220495);
}

double NNfunction_ss_cLdL::synapse0x36c92a0() {
   return (neuron0x36a3620()*-0.357198);
}

double NNfunction_ss_cLdL::synapse0x36c92e0() {
   return (neuron0x36a3ff0()*-0.0420612);
}

double NNfunction_ss_cLdL::synapse0x36c9320() {
   return (neuron0x36a49c0()*-0.0432259);
}

double NNfunction_ss_cLdL::synapse0x36c8db0() {
   return (neuron0x36a67d0()*-0.33965);
}

double NNfunction_ss_cLdL::synapse0x36c8df0() {
   return (neuron0x36a6ab0()*0.169106);
}

double NNfunction_ss_cLdL::synapse0x36c9470() {
   return (neuron0x36a7480()*-0.0217819);
}

double NNfunction_ss_cLdL::synapse0x36c94b0() {
   return (neuron0x36a7e50()*-0.370857);
}

double NNfunction_ss_cLdL::synapse0x36c94f0() {
   return (neuron0x36a8820()*0.389725);
}

double NNfunction_ss_cLdL::synapse0x36c9530() {
   return (neuron0x36a91f0()*-0.174799);
}

double NNfunction_ss_cLdL::synapse0x36c9570() {
   return (neuron0x36a1d40()*-0.447674);
}

double NNfunction_ss_cLdL::synapse0x36c95b0() {
   return (neuron0x36a2710()*-0.256471);
}

double NNfunction_ss_cLdL::synapse0x36c95f0() {
   return (neuron0x36abf80()*-0.395444);
}

double NNfunction_ss_cLdL::synapse0x36c9630() {
   return (neuron0x36ac950()*-0.00796465);
}

double NNfunction_ss_cLdL::synapse0x36c9670() {
   return (neuron0x36ad320()*-0.0184854);
}

double NNfunction_ss_cLdL::synapse0x36c96b0() {
   return (neuron0x36adcf0()*0.145851);
}

double NNfunction_ss_cLdL::synapse0x36c96f0() {
   return (neuron0x36ae6c0()*-0.377834);
}

double NNfunction_ss_cLdL::synapse0x36c9730() {
   return (neuron0x36af090()*-0.173797);
}

double NNfunction_ss_cLdL::synapse0x36c9770() {
   return (neuron0x36afa60()*-0.0737665);
}

double NNfunction_ss_cLdL::synapse0x36c97b0() {
   return (neuron0x36b0430()*-0.368524);
}

double NNfunction_ss_cLdL::synapse0x36c9360() {
   return (neuron0x36a64c0()*-0.285267);
}

double NNfunction_ss_cLdL::synapse0x36c93a0() {
   return (neuron0x36b3010()*-0.270763);
}

double NNfunction_ss_cLdL::synapse0x36c93e0() {
   return (neuron0x36b39e0()*0.188357);
}

double NNfunction_ss_cLdL::synapse0x36c9420() {
   return (neuron0x36b43b0()*-0.343753);
}

double NNfunction_ss_cLdL::synapse0x36c9a00() {
   return (neuron0x36b4d80()*0.156791);
}

double NNfunction_ss_cLdL::synapse0x36c9a40() {
   return (neuron0x36b5750()*-0.285766);
}

double NNfunction_ss_cLdL::synapse0x36c9a80() {
   return (neuron0x36b6120()*0.296281);
}

double NNfunction_ss_cLdL::synapse0x36c9ac0() {
   return (neuron0x36b6af0()*-0.335035);
}

double NNfunction_ss_cLdL::synapse0x36c9b00() {
   return (neuron0x36b74c0()*-0.471695);
}

double NNfunction_ss_cLdL::synapse0x36c9b40() {
   return (neuron0x36b80a0()*-0.479215);
}

double NNfunction_ss_cLdL::synapse0x36c9b80() {
   return (neuron0x36b8a70()*0.226193);
}

double NNfunction_ss_cLdL::synapse0x36c9bc0() {
   return (neuron0x36a98f0()*-0.35697);
}

double NNfunction_ss_cLdL::synapse0x36c9c00() {
   return (neuron0x36aa2c0()*0.315332);
}

double NNfunction_ss_cLdL::synapse0x36c9c40() {
   return (neuron0x36aac90()*-0.144718);
}

double NNfunction_ss_cLdL::synapse0x36c9c80() {
   return (neuron0x36bd2d0()*0.118431);
}

double NNfunction_ss_cLdL::synapse0x36c9cc0() {
   return (neuron0x36bdb80()*-0.521298);
}

double NNfunction_ss_cLdL::synapse0x36c9d00() {
   return (neuron0x36be550()*-0.614352);
}

double NNfunction_ss_cLdL::synapse0x36c9d40() {
   return (neuron0x36bef20()*-0.298556);
}

double NNfunction_ss_cLdL::synapse0x36c9fa0() {
   return (neuron0x36c6120()*-5.30869);
}

double NNfunction_ss_cLdL::synapse0x36c9fe0() {
   return (neuron0x36c64c0()*-6.3986);
}

double NNfunction_ss_cLdL::synapse0x36ca020() {
   return (neuron0x36c6960()*-4.82564);
}

double NNfunction_ss_cLdL::synapse0x36ca060() {
   return (neuron0x36c7ac0()*-3.58776);
}

double NNfunction_ss_cLdL::synapse0x36ca0a0() {
   return (neuron0x36c8c20()*0.512853);
}

