#include "NNfunction_ss_cLsL.h"
#include <cmath>

double NNfunction_ss_cLsL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8504)/15.0508;
   input1 = (in1 - 34.909)/835.251;
   input2 = (in2 - 410.553)/519.311;
   input3 = (in3 - 169.556)/619.206;
   input4 = (in4 - 729.03)/761.53;
   input5 = (in5 - 625.089)/739.652;
   input6 = (in6 - 629.894)/740.895;
   input7 = (in7 - 636.286)/742.902;
   input8 = (in8 - 632.831)/768.615;
   input9 = (in9 - 618.114)/747.9;
   input10 = (in10 - 654.362)/784.104;
   input11 = (in11 - 613.719)/639.811;
   input12 = (in12 - 337.826)/206.967;
   input13 = (in13 - 461.619)/378.721;
   input14 = (in14 - 609.079)/603.025;
   input15 = (in15 - 606.138)/603.05;
   input16 = (in16 - 436.848)/416.175;
   input17 = (in17 - 629.191)/667.175;
   input18 = (in18 - 629.215)/671.808;
   input19 = (in19 - 640.035)/659.254;
   input20 = (in20 - -139.793)/395.208;
   input21 = (in21 - -176.14)/891.364;
   input22 = (in22 - 7.04344)/915.584;
   input23 = (in23 - -61.3221)/498.186;
   switch(index) {
     case 0:
         return neuron0x23d0cc0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLsL::Value(int index, double* input) {
   input0 = (input[0] - 22.8504)/15.0508;
   input1 = (input[1] - 34.909)/835.251;
   input2 = (input[2] - 410.553)/519.311;
   input3 = (input[3] - 169.556)/619.206;
   input4 = (input[4] - 729.03)/761.53;
   input5 = (input[5] - 625.089)/739.652;
   input6 = (input[6] - 629.894)/740.895;
   input7 = (input[7] - 636.286)/742.902;
   input8 = (input[8] - 632.831)/768.615;
   input9 = (input[9] - 618.114)/747.9;
   input10 = (input[10] - 654.362)/784.104;
   input11 = (input[11] - 613.719)/639.811;
   input12 = (input[12] - 337.826)/206.967;
   input13 = (input[13] - 461.619)/378.721;
   input14 = (input[14] - 609.079)/603.025;
   input15 = (input[15] - 606.138)/603.05;
   input16 = (input[16] - 436.848)/416.175;
   input17 = (input[17] - 629.191)/667.175;
   input18 = (input[18] - 629.215)/671.808;
   input19 = (input[19] - 640.035)/659.254;
   input20 = (input[20] - -139.793)/395.208;
   input21 = (input[21] - -176.14)/891.364;
   input22 = (input[22] - 7.04344)/915.584;
   input23 = (input[23] - -61.3221)/498.186;
   switch(index) {
     case 0:
         return neuron0x23d0cc0();
     default:
         return 0.;
   }
}

double NNfunction_ss_cLsL::neuron0x239bd30() {
   return input0;
}

double NNfunction_ss_cLsL::neuron0x239bfe0() {
   return input1;
}

double NNfunction_ss_cLsL::neuron0x239c320() {
   return input2;
}

double NNfunction_ss_cLsL::neuron0x239c660() {
   return input3;
}

double NNfunction_ss_cLsL::neuron0x239c9a0() {
   return input4;
}

double NNfunction_ss_cLsL::neuron0x239cce0() {
   return input5;
}

double NNfunction_ss_cLsL::neuron0x239d020() {
   return input6;
}

double NNfunction_ss_cLsL::neuron0x239d360() {
   return input7;
}

double NNfunction_ss_cLsL::neuron0x239d6a0() {
   return input8;
}

double NNfunction_ss_cLsL::neuron0x239d9e0() {
   return input9;
}

double NNfunction_ss_cLsL::neuron0x239dd20() {
   return input10;
}

double NNfunction_ss_cLsL::neuron0x239e060() {
   return input11;
}

double NNfunction_ss_cLsL::neuron0x239e3a0() {
   return input12;
}

double NNfunction_ss_cLsL::neuron0x239e6e0() {
   return input13;
}

double NNfunction_ss_cLsL::neuron0x239ea20() {
   return input14;
}

double NNfunction_ss_cLsL::neuron0x239ed60() {
   return input15;
}

double NNfunction_ss_cLsL::neuron0x239f0a0() {
   return input16;
}

double NNfunction_ss_cLsL::neuron0x239f600() {
   return input17;
}

double NNfunction_ss_cLsL::neuron0x239f940() {
   return input18;
}

double NNfunction_ss_cLsL::neuron0x239fc80() {
   return input19;
}

double NNfunction_ss_cLsL::neuron0x239ffc0() {
   return input20;
}

double NNfunction_ss_cLsL::neuron0x23a0300() {
   return input21;
}

double NNfunction_ss_cLsL::neuron0x23a0640() {
   return input22;
}

double NNfunction_ss_cLsL::neuron0x23a0980() {
   return input23;
}

double NNfunction_ss_cLsL::input0x23a0df0() {
   double input = -0.300314;
   input += synapse0x23a1130();
   input += synapse0x23a1170();
   input += synapse0x23a11b0();
   input += synapse0x23a11f0();
   input += synapse0x23a1230();
   input += synapse0x23a1270();
   input += synapse0x23a12b0();
   input += synapse0x23a12f0();
   input += synapse0x23a1330();
   input += synapse0x23a1370();
   input += synapse0x23a13b0();
   input += synapse0x23a13f0();
   input += synapse0x23a1430();
   input += synapse0x23a1470();
   input += synapse0x23a14b0();
   input += synapse0x23a14f0();
   input += synapse0x23a0f80();
   input += synapse0x23a0fc0();
   input += synapse0x2157ef0();
   input += synapse0x2157f30();
   input += synapse0x23a1530();
   input += synapse0x23a1570();
   input += synapse0x23a15b0();
   input += synapse0x23a15f0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a0df0() {
   double input = input0x23a0df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a1630() {
   double input = -1.00167;
   input += synapse0x23a1970();
   input += synapse0x23a19b0();
   input += synapse0x23a19f0();
   input += synapse0x23a1a30();
   input += synapse0x23a1a70();
   input += synapse0x23a1ab0();
   input += synapse0x23a1af0();
   input += synapse0x23a1b30();
   input += synapse0x23a1b70();
   input += synapse0x2157d40();
   input += synapse0x2157d80();
   input += synapse0x2157dc0();
   input += synapse0x2157e00();
   input += synapse0x23a1dc0();
   input += synapse0x23a1e00();
   input += synapse0x23a1e40();
   input += synapse0x23a17c0();
   input += synapse0x23a1800();
   input += synapse0x23a1f90();
   input += synapse0x23a1fd0();
   input += synapse0x23a2010();
   input += synapse0x23a2050();
   input += synapse0x23a2090();
   input += synapse0x23a20d0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a1630() {
   double input = input0x23a1630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a2110() {
   double input = 1.28444;
   input += synapse0x23a2450();
   input += synapse0x23a2490();
   input += synapse0x23a24d0();
   input += synapse0x23a2510();
   input += synapse0x23a2550();
   input += synapse0x23a2590();
   input += synapse0x23a25d0();
   input += synapse0x23a2610();
   input += synapse0x23a2650();
   input += synapse0x23a2690();
   input += synapse0x23a26d0();
   input += synapse0x23a2710();
   input += synapse0x23a2750();
   input += synapse0x23a2790();
   input += synapse0x23a27d0();
   input += synapse0x23a2810();
   input += synapse0x23a22a0();
   input += synapse0x23a22e0();
   input += synapse0x21585a0();
   input += synapse0x2165e70();
   input += synapse0x2165eb0();
   input += synapse0x23a4740();
   input += synapse0x23a4780();
   input += synapse0x239ba70();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a2110() {
   double input = input0x23a2110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a1bb0() {
   double input = 5.3414;
   input += synapse0x239bb40();
   input += synapse0x21666f0();
   input += synapse0x23a1d40();
   input += synapse0x23a1d80();
   input += synapse0x23a2960();
   input += synapse0x23a29a0();
   input += synapse0x23a29e0();
   input += synapse0x23a2a20();
   input += synapse0x23a2a60();
   input += synapse0x23a2aa0();
   input += synapse0x23a2ae0();
   input += synapse0x23a2b20();
   input += synapse0x23a2b60();
   input += synapse0x23a2ba0();
   input += synapse0x23a2be0();
   input += synapse0x23a2c20();
   input += synapse0x239bab0();
   input += synapse0x239baf0();
   input += synapse0x23a2d70();
   input += synapse0x23a2db0();
   input += synapse0x23a2df0();
   input += synapse0x23a2e30();
   input += synapse0x23a2e70();
   input += synapse0x23a2eb0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a1bb0() {
   double input = input0x23a1bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a2ef0() {
   double input = 3.38035;
   input += synapse0x23a3230();
   input += synapse0x23a3270();
   input += synapse0x23a32b0();
   input += synapse0x23a32f0();
   input += synapse0x23a3330();
   input += synapse0x23a3370();
   input += synapse0x23a33b0();
   input += synapse0x23a33f0();
   input += synapse0x23a3430();
   input += synapse0x23a3470();
   input += synapse0x23a34b0();
   input += synapse0x23a34f0();
   input += synapse0x23a3530();
   input += synapse0x23a3570();
   input += synapse0x23a35b0();
   input += synapse0x23a35f0();
   input += synapse0x23a3740();
   input += synapse0x23a3080();
   input += synapse0x23a30c0();
   input += synapse0x23a4880();
   input += synapse0x23a48c0();
   input += synapse0x23a4900();
   input += synapse0x23a4940();
   input += synapse0x23a4980();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a2ef0() {
   double input = input0x23a2ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a49c0() {
   double input = 0.415592;
   input += synapse0x23a4d00();
   input += synapse0x23a4d40();
   input += synapse0x23a4d80();
   input += synapse0x23a4dc0();
   input += synapse0x23a4e00();
   input += synapse0x23a4e40();
   input += synapse0x23a4e80();
   input += synapse0x23a4ec0();
   input += synapse0x23a4f00();
   input += synapse0x21661c0();
   input += synapse0x2166200();
   input += synapse0x2166240();
   input += synapse0x2166280();
   input += synapse0x21662c0();
   input += synapse0x2166300();
   input += synapse0x2166340();
   input += synapse0x23a4b50();
   input += synapse0x23a4b90();
   input += synapse0x2166490();
   input += synapse0x21664d0();
   input += synapse0x2166510();
   input += synapse0x2166550();
   input += synapse0x2166590();
   input += synapse0x23a5750();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a49c0() {
   double input = input0x23a49c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a5790() {
   double input = 2.83073;
   input += synapse0x23a5ad0();
   input += synapse0x23a5b10();
   input += synapse0x23a5b50();
   input += synapse0x23a5b90();
   input += synapse0x23a5bd0();
   input += synapse0x23a5c10();
   input += synapse0x23a5c50();
   input += synapse0x23a5c90();
   input += synapse0x23a5cd0();
   input += synapse0x23a5d10();
   input += synapse0x23a5d50();
   input += synapse0x23a5d90();
   input += synapse0x23a5dd0();
   input += synapse0x23a5e10();
   input += synapse0x23a5e50();
   input += synapse0x23a5e90();
   input += synapse0x23a5920();
   input += synapse0x23a5960();
   input += synapse0x23a5fe0();
   input += synapse0x23a6020();
   input += synapse0x23a6060();
   input += synapse0x23a60a0();
   input += synapse0x23a60e0();
   input += synapse0x23a6120();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a5790() {
   double input = input0x23a5790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a6160() {
   double input = -0.0161876;
   input += synapse0x23a64a0();
   input += synapse0x23a64e0();
   input += synapse0x23a6520();
   input += synapse0x23a6560();
   input += synapse0x23a65a0();
   input += synapse0x23a65e0();
   input += synapse0x23a6620();
   input += synapse0x23a6660();
   input += synapse0x23a66a0();
   input += synapse0x23a66e0();
   input += synapse0x23a6720();
   input += synapse0x23a6760();
   input += synapse0x23a67a0();
   input += synapse0x23a67e0();
   input += synapse0x23a6820();
   input += synapse0x23a6860();
   input += synapse0x23a62f0();
   input += synapse0x23a6330();
   input += synapse0x23a69b0();
   input += synapse0x23a69f0();
   input += synapse0x23a6a30();
   input += synapse0x23a6a70();
   input += synapse0x23a6ab0();
   input += synapse0x23a6af0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a6160() {
   double input = input0x23a6160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a6b30() {
   double input = -1.4265;
   input += synapse0x239f4f0();
   input += synapse0x239f530();
   input += synapse0x239f570();
   input += synapse0x239f5b0();
   input += synapse0x23a7080();
   input += synapse0x23a70c0();
   input += synapse0x23a7100();
   input += synapse0x23a7140();
   input += synapse0x23a7180();
   input += synapse0x23a71c0();
   input += synapse0x23a7200();
   input += synapse0x23a7240();
   input += synapse0x23a7280();
   input += synapse0x23a72c0();
   input += synapse0x23a7300();
   input += synapse0x23a7340();
   input += synapse0x23a6cc0();
   input += synapse0x23a6d00();
   input += synapse0x23a7490();
   input += synapse0x23a74d0();
   input += synapse0x23a7510();
   input += synapse0x23a7550();
   input += synapse0x23a7590();
   input += synapse0x23a75d0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a6b30() {
   double input = input0x23a6b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a7610() {
   double input = -0.816087;
   input += synapse0x23a7950();
   input += synapse0x23a7990();
   input += synapse0x23a79d0();
   input += synapse0x23a7a10();
   input += synapse0x23a7a50();
   input += synapse0x23a7a90();
   input += synapse0x23a7ad0();
   input += synapse0x23a7b10();
   input += synapse0x23a7b50();
   input += synapse0x23a7b90();
   input += synapse0x23a7bd0();
   input += synapse0x23a7c10();
   input += synapse0x23a7c50();
   input += synapse0x23a7c90();
   input += synapse0x23a7cd0();
   input += synapse0x23a7d10();
   input += synapse0x23a77a0();
   input += synapse0x23a77e0();
   input += synapse0x23a7e60();
   input += synapse0x23a7ea0();
   input += synapse0x23a7ee0();
   input += synapse0x23a7f20();
   input += synapse0x23a7f60();
   input += synapse0x23a7fa0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a7610() {
   double input = input0x23a7610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a7fe0() {
   double input = 2.82057;
   input += synapse0x23a8320();
   input += synapse0x23a8360();
   input += synapse0x23a83a0();
   input += synapse0x23a83e0();
   input += synapse0x23a8420();
   input += synapse0x23a8460();
   input += synapse0x23a84a0();
   input += synapse0x23a84e0();
   input += synapse0x23a8520();
   input += synapse0x23a8560();
   input += synapse0x23a85a0();
   input += synapse0x23a85e0();
   input += synapse0x23a8620();
   input += synapse0x23a8660();
   input += synapse0x23a86a0();
   input += synapse0x23a86e0();
   input += synapse0x23a8170();
   input += synapse0x23a81b0();
   input += synapse0x23a4f40();
   input += synapse0x23a4f80();
   input += synapse0x23a4fc0();
   input += synapse0x23a5000();
   input += synapse0x23a5040();
   input += synapse0x23a5080();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a7fe0() {
   double input = input0x23a7fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a50c0() {
   double input = -1.59068;
   input += synapse0x23a5400();
   input += synapse0x23a5440();
   input += synapse0x23a5480();
   input += synapse0x23a54c0();
   input += synapse0x23a5500();
   input += synapse0x23a5540();
   input += synapse0x23a5580();
   input += synapse0x23a55c0();
   input += synapse0x23a5600();
   input += synapse0x23a5640();
   input += synapse0x23a5680();
   input += synapse0x23a56c0();
   input += synapse0x23a5700();
   input += synapse0x23a9840();
   input += synapse0x23a9880();
   input += synapse0x23a98c0();
   input += synapse0x23a5250();
   input += synapse0x23a5290();
   input += synapse0x23a9a10();
   input += synapse0x23a9a50();
   input += synapse0x23a9a90();
   input += synapse0x23a9ad0();
   input += synapse0x23a9b10();
   input += synapse0x23a9b50();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a50c0() {
   double input = input0x23a50c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a9b90() {
   double input = -1.84246;
   input += synapse0x23a9ed0();
   input += synapse0x23a9f10();
   input += synapse0x23a9f50();
   input += synapse0x23a9f90();
   input += synapse0x23a9fd0();
   input += synapse0x23aa010();
   input += synapse0x23aa050();
   input += synapse0x23aa090();
   input += synapse0x23aa0d0();
   input += synapse0x23aa110();
   input += synapse0x23aa150();
   input += synapse0x23aa190();
   input += synapse0x23aa1d0();
   input += synapse0x23aa210();
   input += synapse0x23aa250();
   input += synapse0x23aa290();
   input += synapse0x23a9d20();
   input += synapse0x23a9d60();
   input += synapse0x23aa3e0();
   input += synapse0x23aa420();
   input += synapse0x23aa460();
   input += synapse0x23aa4a0();
   input += synapse0x23aa4e0();
   input += synapse0x23aa520();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a9b90() {
   double input = input0x23a9b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23aa560() {
   double input = -1.32102;
   input += synapse0x23aa8a0();
   input += synapse0x23aa8e0();
   input += synapse0x23aa920();
   input += synapse0x23aa960();
   input += synapse0x23aa9a0();
   input += synapse0x23aa9e0();
   input += synapse0x23aaa20();
   input += synapse0x23aaa60();
   input += synapse0x23aaaa0();
   input += synapse0x23aaae0();
   input += synapse0x23aab20();
   input += synapse0x23aab60();
   input += synapse0x23aaba0();
   input += synapse0x23aabe0();
   input += synapse0x23aac20();
   input += synapse0x23aac60();
   input += synapse0x23aa6f0();
   input += synapse0x23aa730();
   input += synapse0x23aadb0();
   input += synapse0x23aadf0();
   input += synapse0x23aae30();
   input += synapse0x23aae70();
   input += synapse0x23aaeb0();
   input += synapse0x23aaef0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23aa560() {
   double input = input0x23aa560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23aaf30() {
   double input = 0.966286;
   input += synapse0x23ab270();
   input += synapse0x23ab2b0();
   input += synapse0x23ab2f0();
   input += synapse0x23ab330();
   input += synapse0x23ab370();
   input += synapse0x23ab3b0();
   input += synapse0x23ab3f0();
   input += synapse0x23ab430();
   input += synapse0x23ab470();
   input += synapse0x23ab4b0();
   input += synapse0x23ab4f0();
   input += synapse0x23ab530();
   input += synapse0x23ab570();
   input += synapse0x23ab5b0();
   input += synapse0x23ab5f0();
   input += synapse0x23ab630();
   input += synapse0x23ab0c0();
   input += synapse0x23ab100();
   input += synapse0x23ab780();
   input += synapse0x23ab7c0();
   input += synapse0x23ab800();
   input += synapse0x23ab840();
   input += synapse0x23ab880();
   input += synapse0x23ab8c0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23aaf30() {
   double input = input0x23aaf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23ab900() {
   double input = -0.0129962;
   input += synapse0x23abc40();
   input += synapse0x239bec0();
   input += synapse0x239bf00();
   input += synapse0x239c200();
   input += synapse0x239c240();
   input += synapse0x239c540();
   input += synapse0x239c580();
   input += synapse0x239c880();
   input += synapse0x239c8c0();
   input += synapse0x239cbc0();
   input += synapse0x239cc00();
   input += synapse0x239cf00();
   input += synapse0x239cf40();
   input += synapse0x239d240();
   input += synapse0x239d280();
   input += synapse0x239d580();
   input += synapse0x239d5c0();
   input += synapse0x239d8c0();
   input += synapse0x239d900();
   input += synapse0x239dc00();
   input += synapse0x239dc40();
   input += synapse0x239df40();
   input += synapse0x239df80();
   input += synapse0x239e280();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23ab900() {
   double input = input0x23ab900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23ad710() {
   double input = 1.72001;
   input += synapse0x239e2c0();
   input += synapse0x239ef80();
   input += synapse0x239efc0();
   input += synapse0x23aba90();
   input += synapse0x23abad0();
   input += synapse0x239f2c0();
   input += synapse0x239f300();
   input += synapse0x239f820();
   input += synapse0x239f860();
   input += synapse0x239fb60();
   input += synapse0x239fba0();
   input += synapse0x239fea0();
   input += synapse0x239fee0();
   input += synapse0x23a01e0();
   input += synapse0x23a0220();
   input += synapse0x23a0520();
   input += synapse0x23a0560();
   input += synapse0x23a0860();
   input += synapse0x23a08a0();
   input += synapse0x23a0ba0();
   input += synapse0x23a0be0();
   input += synapse0x239e5c0();
   input += synapse0x239e600();
   input += synapse0x23ad9b0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23ad710() {
   double input = input0x23ad710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23ad9f0() {
   double input = 0.816077;
   input += synapse0x23add30();
   input += synapse0x23add70();
   input += synapse0x23addb0();
   input += synapse0x23addf0();
   input += synapse0x23ade30();
   input += synapse0x23ade70();
   input += synapse0x23adeb0();
   input += synapse0x23adef0();
   input += synapse0x23adf30();
   input += synapse0x23adf70();
   input += synapse0x23adfb0();
   input += synapse0x23adff0();
   input += synapse0x23ae030();
   input += synapse0x23ae070();
   input += synapse0x23ae0b0();
   input += synapse0x23ae0f0();
   input += synapse0x23adb80();
   input += synapse0x23adbc0();
   input += synapse0x23ae240();
   input += synapse0x23ae280();
   input += synapse0x23ae2c0();
   input += synapse0x23ae300();
   input += synapse0x23ae340();
   input += synapse0x23ae380();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23ad9f0() {
   double input = input0x23ad9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23ae3c0() {
   double input = -0.221237;
   input += synapse0x23ae700();
   input += synapse0x23ae740();
   input += synapse0x23ae780();
   input += synapse0x23ae7c0();
   input += synapse0x23ae800();
   input += synapse0x23ae840();
   input += synapse0x23ae880();
   input += synapse0x23ae8c0();
   input += synapse0x23ae900();
   input += synapse0x23ae940();
   input += synapse0x23ae980();
   input += synapse0x23ae9c0();
   input += synapse0x23aea00();
   input += synapse0x23aea40();
   input += synapse0x23aea80();
   input += synapse0x23aeac0();
   input += synapse0x23ae550();
   input += synapse0x23ae590();
   input += synapse0x23aec10();
   input += synapse0x23aec50();
   input += synapse0x23aec90();
   input += synapse0x23aecd0();
   input += synapse0x23aed10();
   input += synapse0x23aed50();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23ae3c0() {
   double input = input0x23ae3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23aed90() {
   double input = -1.728;
   input += synapse0x23af0d0();
   input += synapse0x23af110();
   input += synapse0x23af150();
   input += synapse0x23af190();
   input += synapse0x23af1d0();
   input += synapse0x23af210();
   input += synapse0x23af250();
   input += synapse0x23af290();
   input += synapse0x23af2d0();
   input += synapse0x23af310();
   input += synapse0x23af350();
   input += synapse0x23af390();
   input += synapse0x23af3d0();
   input += synapse0x23af410();
   input += synapse0x23af450();
   input += synapse0x23af490();
   input += synapse0x23aef20();
   input += synapse0x23aef60();
   input += synapse0x23af5e0();
   input += synapse0x23af620();
   input += synapse0x23af660();
   input += synapse0x23af6a0();
   input += synapse0x23af6e0();
   input += synapse0x23af720();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23aed90() {
   double input = input0x23aed90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23af760() {
   double input = -0.642172;
   input += synapse0x23afaa0();
   input += synapse0x23afae0();
   input += synapse0x23afb20();
   input += synapse0x23afb60();
   input += synapse0x23afba0();
   input += synapse0x23afbe0();
   input += synapse0x23afc20();
   input += synapse0x23afc60();
   input += synapse0x23afca0();
   input += synapse0x23afce0();
   input += synapse0x23afd20();
   input += synapse0x23afd60();
   input += synapse0x23afda0();
   input += synapse0x23afde0();
   input += synapse0x23afe20();
   input += synapse0x23afe60();
   input += synapse0x23af8f0();
   input += synapse0x23af930();
   input += synapse0x23affb0();
   input += synapse0x23afff0();
   input += synapse0x23b0030();
   input += synapse0x23b0070();
   input += synapse0x23b00b0();
   input += synapse0x23b00f0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23af760() {
   double input = input0x23af760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b0130() {
   double input = 1.72114;
   input += synapse0x23b0470();
   input += synapse0x23b04b0();
   input += synapse0x23b04f0();
   input += synapse0x23b0530();
   input += synapse0x23b0570();
   input += synapse0x23b05b0();
   input += synapse0x23b05f0();
   input += synapse0x23b0630();
   input += synapse0x23b0670();
   input += synapse0x23a8830();
   input += synapse0x23a8870();
   input += synapse0x23a88b0();
   input += synapse0x23a88f0();
   input += synapse0x23a8930();
   input += synapse0x23a8970();
   input += synapse0x23a89b0();
   input += synapse0x23b02c0();
   input += synapse0x23b0300();
   input += synapse0x23a8b00();
   input += synapse0x23a8b40();
   input += synapse0x23a8b80();
   input += synapse0x23a8bc0();
   input += synapse0x23a8c00();
   input += synapse0x23a8c40();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b0130() {
   double input = input0x23b0130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a8c80() {
   double input = -1.16285;
   input += synapse0x23a8fc0();
   input += synapse0x23a9000();
   input += synapse0x23a9040();
   input += synapse0x23a9080();
   input += synapse0x23a90c0();
   input += synapse0x23a9100();
   input += synapse0x23a9140();
   input += synapse0x23a9180();
   input += synapse0x23a91c0();
   input += synapse0x23a9200();
   input += synapse0x23a9240();
   input += synapse0x23a9280();
   input += synapse0x23a92c0();
   input += synapse0x23a9300();
   input += synapse0x23a9340();
   input += synapse0x23a9380();
   input += synapse0x23a8e10();
   input += synapse0x23a8e50();
   input += synapse0x23a94d0();
   input += synapse0x23a9510();
   input += synapse0x23a9550();
   input += synapse0x23a9590();
   input += synapse0x23a95d0();
   input += synapse0x23a9610();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a8c80() {
   double input = input0x23a8c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23a9650() {
   double input = -0.0772152;
   input += synapse0x23a97e0();
   input += synapse0x23b2870();
   input += synapse0x23b28b0();
   input += synapse0x23b28f0();
   input += synapse0x23b2930();
   input += synapse0x23b2970();
   input += synapse0x23b29b0();
   input += synapse0x23b29f0();
   input += synapse0x23b2a30();
   input += synapse0x23b2a70();
   input += synapse0x23b2ab0();
   input += synapse0x23b2af0();
   input += synapse0x23b2b30();
   input += synapse0x23b2b70();
   input += synapse0x23b2bb0();
   input += synapse0x23b2bf0();
   input += synapse0x23b26c0();
   input += synapse0x23b2700();
   input += synapse0x23b2d40();
   input += synapse0x23b2d80();
   input += synapse0x23b2dc0();
   input += synapse0x23b2e00();
   input += synapse0x23b2e40();
   input += synapse0x23b2e80();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23a9650() {
   double input = input0x23a9650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b2ec0() {
   double input = -0.851749;
   input += synapse0x23b3200();
   input += synapse0x23b3240();
   input += synapse0x23b3280();
   input += synapse0x23b32c0();
   input += synapse0x23b3300();
   input += synapse0x23b3340();
   input += synapse0x23b3380();
   input += synapse0x23b33c0();
   input += synapse0x23b3400();
   input += synapse0x23b3440();
   input += synapse0x23b3480();
   input += synapse0x23b34c0();
   input += synapse0x23b3500();
   input += synapse0x23b3540();
   input += synapse0x23b3580();
   input += synapse0x23b35c0();
   input += synapse0x23b3050();
   input += synapse0x23b3090();
   input += synapse0x23b3710();
   input += synapse0x23b3750();
   input += synapse0x23b3790();
   input += synapse0x23b37d0();
   input += synapse0x23b3810();
   input += synapse0x23b3850();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b2ec0() {
   double input = input0x23b2ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b3890() {
   double input = -0.903686;
   input += synapse0x23b3bd0();
   input += synapse0x23b3c10();
   input += synapse0x23b3c50();
   input += synapse0x23b3c90();
   input += synapse0x23b3cd0();
   input += synapse0x23b3d10();
   input += synapse0x23b3d50();
   input += synapse0x23b3d90();
   input += synapse0x23b3dd0();
   input += synapse0x23b3e10();
   input += synapse0x23b3e50();
   input += synapse0x23b3e90();
   input += synapse0x23b3ed0();
   input += synapse0x23b3f10();
   input += synapse0x23b3f50();
   input += synapse0x23b3f90();
   input += synapse0x23b3a20();
   input += synapse0x23b3a60();
   input += synapse0x23b40e0();
   input += synapse0x23b4120();
   input += synapse0x23b4160();
   input += synapse0x23b41a0();
   input += synapse0x23b41e0();
   input += synapse0x23b4220();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b3890() {
   double input = input0x23b3890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b4260() {
   double input = -0.284054;
   input += synapse0x23b45a0();
   input += synapse0x23b45e0();
   input += synapse0x23b4620();
   input += synapse0x23b4660();
   input += synapse0x23b46a0();
   input += synapse0x23b46e0();
   input += synapse0x23b4720();
   input += synapse0x23b4760();
   input += synapse0x23b47a0();
   input += synapse0x23b47e0();
   input += synapse0x23b4820();
   input += synapse0x23b4860();
   input += synapse0x23b48a0();
   input += synapse0x23b48e0();
   input += synapse0x23b4920();
   input += synapse0x23b4960();
   input += synapse0x23b43f0();
   input += synapse0x23b4430();
   input += synapse0x23b4ab0();
   input += synapse0x23b4af0();
   input += synapse0x23b4b30();
   input += synapse0x23b4b70();
   input += synapse0x23b4bb0();
   input += synapse0x23b4bf0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b4260() {
   double input = input0x23b4260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b4c30() {
   double input = -3.19701;
   input += synapse0x23b4f70();
   input += synapse0x23b4fb0();
   input += synapse0x23b4ff0();
   input += synapse0x23b5030();
   input += synapse0x23b5070();
   input += synapse0x23b50b0();
   input += synapse0x23b50f0();
   input += synapse0x23b5130();
   input += synapse0x23b5170();
   input += synapse0x23b51b0();
   input += synapse0x23b51f0();
   input += synapse0x23b5230();
   input += synapse0x23b5270();
   input += synapse0x23b52b0();
   input += synapse0x23b52f0();
   input += synapse0x23b5330();
   input += synapse0x23b4dc0();
   input += synapse0x23b4e00();
   input += synapse0x23b5480();
   input += synapse0x23b54c0();
   input += synapse0x23b5500();
   input += synapse0x23b5540();
   input += synapse0x23b5580();
   input += synapse0x23b55c0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b4c30() {
   double input = input0x23b4c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b5600() {
   double input = -0.882377;
   input += synapse0x23b5940();
   input += synapse0x23b5980();
   input += synapse0x23b59c0();
   input += synapse0x23b5a00();
   input += synapse0x23b5a40();
   input += synapse0x23b5a80();
   input += synapse0x23b5ac0();
   input += synapse0x23b5b00();
   input += synapse0x23b5b40();
   input += synapse0x23b5b80();
   input += synapse0x23b5bc0();
   input += synapse0x23b5c00();
   input += synapse0x23b5c40();
   input += synapse0x23b5c80();
   input += synapse0x23b5cc0();
   input += synapse0x23b5d00();
   input += synapse0x23b5790();
   input += synapse0x23b57d0();
   input += synapse0x23b5e50();
   input += synapse0x23b5e90();
   input += synapse0x23b5ed0();
   input += synapse0x23b5f10();
   input += synapse0x23b5f50();
   input += synapse0x23b5f90();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b5600() {
   double input = input0x23b5600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b5fd0() {
   double input = -1.94253;
   input += synapse0x23b6310();
   input += synapse0x23b6350();
   input += synapse0x23b6390();
   input += synapse0x23b63d0();
   input += synapse0x23b6410();
   input += synapse0x23b6450();
   input += synapse0x23b6490();
   input += synapse0x23b64d0();
   input += synapse0x23b6510();
   input += synapse0x23b6550();
   input += synapse0x23b6590();
   input += synapse0x23b65d0();
   input += synapse0x23b6610();
   input += synapse0x23b6650();
   input += synapse0x23b6690();
   input += synapse0x23b66d0();
   input += synapse0x23b6160();
   input += synapse0x23b61a0();
   input += synapse0x23b6820();
   input += synapse0x23b6860();
   input += synapse0x23b68a0();
   input += synapse0x23b68e0();
   input += synapse0x23b6920();
   input += synapse0x23b6960();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b5fd0() {
   double input = input0x23b5fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b69a0() {
   double input = 0.0913097;
   input += synapse0x23b6ce0();
   input += synapse0x23b6d20();
   input += synapse0x23b6d60();
   input += synapse0x23b6da0();
   input += synapse0x23b6de0();
   input += synapse0x23b6e20();
   input += synapse0x23b6e60();
   input += synapse0x23b6ea0();
   input += synapse0x23b6ee0();
   input += synapse0x23b6f20();
   input += synapse0x23b6f60();
   input += synapse0x23b6fa0();
   input += synapse0x23b6fe0();
   input += synapse0x23b7020();
   input += synapse0x23b7060();
   input += synapse0x23b70a0();
   input += synapse0x23b6b30();
   input += synapse0x23b6b70();
   input += synapse0x23b71f0();
   input += synapse0x23b7230();
   input += synapse0x23b7270();
   input += synapse0x23b72b0();
   input += synapse0x23b72f0();
   input += synapse0x23b7330();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b69a0() {
   double input = input0x23b69a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b7370() {
   double input = -0.325442;
   input += synapse0x23b76b0();
   input += synapse0x23abc80();
   input += synapse0x23abcc0();
   input += synapse0x23abd00();
   input += synapse0x23abf50();
   input += synapse0x23abf90();
   input += synapse0x23abfd0();
   input += synapse0x23ac220();
   input += synapse0x23ac260();
   input += synapse0x23ac4b0();
   input += synapse0x23ac4f0();
   input += synapse0x23ac530();
   input += synapse0x23ac780();
   input += synapse0x23ac7c0();
   input += synapse0x23aca10();
   input += synapse0x23aca50();
   input += synapse0x23b7500();
   input += synapse0x23b7540();
   input += synapse0x23acba0();
   input += synapse0x23ad0b0();
   input += synapse0x23ad0f0();
   input += synapse0x23ad130();
   input += synapse0x23ad380();
   input += synapse0x23ad3c0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b7370() {
   double input = input0x23b7370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23ad400() {
   double input = 0.648995;
   input += synapse0x23acc70();
   input += synapse0x23accb0();
   input += synapse0x23accf0();
   input += synapse0x23acd30();
   input += synapse0x23ad6b0();
   input += synapse0x23b9a00();
   input += synapse0x23b9a40();
   input += synapse0x23b9a80();
   input += synapse0x23b9ac0();
   input += synapse0x23b9b00();
   input += synapse0x23b9b40();
   input += synapse0x23b9b80();
   input += synapse0x23b9bc0();
   input += synapse0x23b9c00();
   input += synapse0x23b9c40();
   input += synapse0x23b9c80();
   input += synapse0x23ad590();
   input += synapse0x23ad5d0();
   input += synapse0x23b9dd0();
   input += synapse0x23b9e10();
   input += synapse0x23b9e50();
   input += synapse0x23b9e90();
   input += synapse0x23b9ed0();
   input += synapse0x23b9f10();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23ad400() {
   double input = input0x23ad400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b9f50() {
   double input = -0.965745;
   input += synapse0x23ba290();
   input += synapse0x23ba2d0();
   input += synapse0x23ba310();
   input += synapse0x23ba350();
   input += synapse0x23ba390();
   input += synapse0x23ba3d0();
   input += synapse0x23ba410();
   input += synapse0x23ba450();
   input += synapse0x23ba490();
   input += synapse0x23ba4d0();
   input += synapse0x23ba510();
   input += synapse0x23ba550();
   input += synapse0x23ba590();
   input += synapse0x23ba5d0();
   input += synapse0x23ba610();
   input += synapse0x23ba650();
   input += synapse0x23ba0e0();
   input += synapse0x23ba120();
   input += synapse0x23ba7a0();
   input += synapse0x23ba7e0();
   input += synapse0x23ba820();
   input += synapse0x23ba860();
   input += synapse0x23ba8a0();
   input += synapse0x23ba8e0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b9f50() {
   double input = input0x23b9f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23ba920() {
   double input = -0.481454;
   input += synapse0x23bac60();
   input += synapse0x23baca0();
   input += synapse0x23bace0();
   input += synapse0x23bad20();
   input += synapse0x23bad60();
   input += synapse0x23bada0();
   input += synapse0x23bade0();
   input += synapse0x23bae20();
   input += synapse0x23bae60();
   input += synapse0x23baea0();
   input += synapse0x23baee0();
   input += synapse0x23baf20();
   input += synapse0x23baf60();
   input += synapse0x23bafa0();
   input += synapse0x23bafe0();
   input += synapse0x23bb020();
   input += synapse0x23baab0();
   input += synapse0x23baaf0();
   input += synapse0x23bb170();
   input += synapse0x23bb1b0();
   input += synapse0x23bb1f0();
   input += synapse0x23bb230();
   input += synapse0x23bb270();
   input += synapse0x23bb2b0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23ba920() {
   double input = input0x23ba920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23bb2f0() {
   double input = -1.88229;
   input += synapse0x23bb630();
   input += synapse0x23bb670();
   input += synapse0x23bb6b0();
   input += synapse0x23bb6f0();
   input += synapse0x23bb730();
   input += synapse0x23bb770();
   input += synapse0x23bb7b0();
   input += synapse0x23bb7f0();
   input += synapse0x23bb830();
   input += synapse0x23bb870();
   input += synapse0x23bb8b0();
   input += synapse0x23bb8f0();
   input += synapse0x23bb930();
   input += synapse0x23bb970();
   input += synapse0x23bb9b0();
   input += synapse0x23bb9f0();
   input += synapse0x23bb480();
   input += synapse0x23bb4c0();
   input += synapse0x23bbb40();
   input += synapse0x23bbb80();
   input += synapse0x23bbbc0();
   input += synapse0x23bbc00();
   input += synapse0x23bbc40();
   input += synapse0x23bbc80();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23bb2f0() {
   double input = input0x23bb2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23bbcc0() {
   double input = -4.58655;
   input += synapse0x23bc000();
   input += synapse0x23bc040();
   input += synapse0x23bc080();
   input += synapse0x23bc0c0();
   input += synapse0x23bc100();
   input += synapse0x23bc140();
   input += synapse0x23bc180();
   input += synapse0x23bc1c0();
   input += synapse0x23bc200();
   input += synapse0x23bc240();
   input += synapse0x23bc280();
   input += synapse0x23bc2c0();
   input += synapse0x23bc300();
   input += synapse0x23bc340();
   input += synapse0x23bc380();
   input += synapse0x23bc3c0();
   input += synapse0x23bbe50();
   input += synapse0x23bbe90();
   input += synapse0x23bc510();
   input += synapse0x23bc550();
   input += synapse0x23bc590();
   input += synapse0x23bc5d0();
   input += synapse0x23bc610();
   input += synapse0x23bc650();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23bbcc0() {
   double input = input0x23bbcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23bc690() {
   double input = -0.422466;
   input += synapse0x23bc9d0();
   input += synapse0x23bca10();
   input += synapse0x23bca50();
   input += synapse0x23bca90();
   input += synapse0x23bcad0();
   input += synapse0x23bcb10();
   input += synapse0x23bcb50();
   input += synapse0x23bcb90();
   input += synapse0x23bcbd0();
   input += synapse0x23bcc10();
   input += synapse0x23bcc50();
   input += synapse0x23bcc90();
   input += synapse0x23bccd0();
   input += synapse0x23bcd10();
   input += synapse0x23bcd50();
   input += synapse0x23bcd90();
   input += synapse0x23bc820();
   input += synapse0x23bc860();
   input += synapse0x23bcee0();
   input += synapse0x23bcf20();
   input += synapse0x23bcf60();
   input += synapse0x23bcfa0();
   input += synapse0x23bcfe0();
   input += synapse0x23bd020();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23bc690() {
   double input = input0x23bc690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23bd060() {
   double input = 0.761611;
   input += synapse0x23bd3a0();
   input += synapse0x23bd3e0();
   input += synapse0x23bd420();
   input += synapse0x23bd460();
   input += synapse0x23bd4a0();
   input += synapse0x23bd4e0();
   input += synapse0x23bd520();
   input += synapse0x23bd560();
   input += synapse0x23bd5a0();
   input += synapse0x23bd5e0();
   input += synapse0x23bd620();
   input += synapse0x23bd660();
   input += synapse0x23bd6a0();
   input += synapse0x23bd6e0();
   input += synapse0x23bd720();
   input += synapse0x23bd760();
   input += synapse0x23bd1f0();
   input += synapse0x23bd230();
   input += synapse0x23bd8b0();
   input += synapse0x23bd8f0();
   input += synapse0x23bd930();
   input += synapse0x23bd970();
   input += synapse0x23bd9b0();
   input += synapse0x23bd9f0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23bd060() {
   double input = input0x23bd060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23bda30() {
   double input = -1.01473;
   input += synapse0x23bdd70();
   input += synapse0x23bddb0();
   input += synapse0x23bddf0();
   input += synapse0x23bde30();
   input += synapse0x23bde70();
   input += synapse0x23bdeb0();
   input += synapse0x23bdef0();
   input += synapse0x23bdf30();
   input += synapse0x23bdf70();
   input += synapse0x23bdfb0();
   input += synapse0x23bdff0();
   input += synapse0x23be030();
   input += synapse0x23be070();
   input += synapse0x23be0b0();
   input += synapse0x23be0f0();
   input += synapse0x23be130();
   input += synapse0x23bdbc0();
   input += synapse0x23bdc00();
   input += synapse0x23be280();
   input += synapse0x23be2c0();
   input += synapse0x23be300();
   input += synapse0x23be340();
   input += synapse0x23be380();
   input += synapse0x23be3c0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23bda30() {
   double input = input0x23bda30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23be400() {
   double input = 0.273998;
   input += synapse0x23a6e70();
   input += synapse0x23a6eb0();
   input += synapse0x23a6ef0();
   input += synapse0x23a6f30();
   input += synapse0x23a6f70();
   input += synapse0x23a6fb0();
   input += synapse0x23a6ff0();
   input += synapse0x23a7030();
   input += synapse0x23beb50();
   input += synapse0x23beb90();
   input += synapse0x23bebd0();
   input += synapse0x23bec10();
   input += synapse0x23bec50();
   input += synapse0x23bec90();
   input += synapse0x23becd0();
   input += synapse0x23bed10();
   input += synapse0x23be590();
   input += synapse0x23be5d0();
   input += synapse0x23bee60();
   input += synapse0x23beea0();
   input += synapse0x23beee0();
   input += synapse0x23bef20();
   input += synapse0x23bef60();
   input += synapse0x23befa0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23be400() {
   double input = input0x23be400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23befe0() {
   double input = -1.63803;
   input += synapse0x23bf320();
   input += synapse0x23bf360();
   input += synapse0x23bf3a0();
   input += synapse0x23bf3e0();
   input += synapse0x23bf420();
   input += synapse0x23bf460();
   input += synapse0x23bf4a0();
   input += synapse0x23bf4e0();
   input += synapse0x23bf520();
   input += synapse0x23bf560();
   input += synapse0x23bf5a0();
   input += synapse0x23bf5e0();
   input += synapse0x23bf620();
   input += synapse0x23bf660();
   input += synapse0x23bf6a0();
   input += synapse0x23bf6e0();
   input += synapse0x23bf170();
   input += synapse0x23bf1b0();
   input += synapse0x23bf830();
   input += synapse0x23bf870();
   input += synapse0x23bf8b0();
   input += synapse0x23bf8f0();
   input += synapse0x23bf930();
   input += synapse0x23bf970();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23befe0() {
   double input = input0x23befe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23bf9b0() {
   double input = 0.999101;
   input += synapse0x23bfcf0();
   input += synapse0x23bfd30();
   input += synapse0x23bfd70();
   input += synapse0x23bfdb0();
   input += synapse0x23bfdf0();
   input += synapse0x23bfe30();
   input += synapse0x23bfe70();
   input += synapse0x23bfeb0();
   input += synapse0x23bfef0();
   input += synapse0x23bff30();
   input += synapse0x23bff70();
   input += synapse0x23bffb0();
   input += synapse0x23bfff0();
   input += synapse0x23c0030();
   input += synapse0x23c0070();
   input += synapse0x23c00b0();
   input += synapse0x23bfb40();
   input += synapse0x23bfb80();
   input += synapse0x23b06b0();
   input += synapse0x23b06f0();
   input += synapse0x23b0730();
   input += synapse0x23b0770();
   input += synapse0x23b07b0();
   input += synapse0x23b07f0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23bf9b0() {
   double input = input0x23bf9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b0830() {
   double input = 1.3371;
   input += synapse0x23b0b70();
   input += synapse0x23b0bb0();
   input += synapse0x23b0bf0();
   input += synapse0x23b0c30();
   input += synapse0x23b0c70();
   input += synapse0x23b0cb0();
   input += synapse0x23b0cf0();
   input += synapse0x23b0d30();
   input += synapse0x23b0d70();
   input += synapse0x23b0db0();
   input += synapse0x23b0df0();
   input += synapse0x23b0e30();
   input += synapse0x23b0e70();
   input += synapse0x23b0eb0();
   input += synapse0x23b0ef0();
   input += synapse0x23b0f30();
   input += synapse0x23b09c0();
   input += synapse0x23b0a00();
   input += synapse0x23b1080();
   input += synapse0x23b10c0();
   input += synapse0x23b1100();
   input += synapse0x23b1140();
   input += synapse0x23b1180();
   input += synapse0x23b11c0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b0830() {
   double input = input0x23b0830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b1200() {
   double input = -1.18994;
   input += synapse0x23b1540();
   input += synapse0x23b1580();
   input += synapse0x23b15c0();
   input += synapse0x23b1600();
   input += synapse0x23b1640();
   input += synapse0x23b1680();
   input += synapse0x23b16c0();
   input += synapse0x23b1700();
   input += synapse0x23b1740();
   input += synapse0x23b1780();
   input += synapse0x23b17c0();
   input += synapse0x23b1800();
   input += synapse0x23b1840();
   input += synapse0x23b1880();
   input += synapse0x23b18c0();
   input += synapse0x23b1900();
   input += synapse0x23b1390();
   input += synapse0x23b13d0();
   input += synapse0x23b1a50();
   input += synapse0x23b1a90();
   input += synapse0x23b1ad0();
   input += synapse0x23b1b10();
   input += synapse0x23b1b50();
   input += synapse0x23b1b90();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b1200() {
   double input = input0x23b1200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23b1bd0() {
   double input = -1.13493;
   input += synapse0x23b1f10();
   input += synapse0x23b1f50();
   input += synapse0x23b1f90();
   input += synapse0x23b1fd0();
   input += synapse0x23b2010();
   input += synapse0x23b2050();
   input += synapse0x23b2090();
   input += synapse0x23b20d0();
   input += synapse0x23b2110();
   input += synapse0x23b2150();
   input += synapse0x23b2190();
   input += synapse0x23b21d0();
   input += synapse0x23b2210();
   input += synapse0x23b2250();
   input += synapse0x23b2290();
   input += synapse0x23b22d0();
   input += synapse0x23b1d60();
   input += synapse0x23b1da0();
   input += synapse0x23b2420();
   input += synapse0x23b2460();
   input += synapse0x23b24a0();
   input += synapse0x23b24e0();
   input += synapse0x23b2520();
   input += synapse0x23b2560();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23b1bd0() {
   double input = input0x23b1bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23c4210() {
   double input = -0.67348;
   input += synapse0x23c4430();
   input += synapse0x23c4470();
   input += synapse0x23c44b0();
   input += synapse0x23c44f0();
   input += synapse0x23c4530();
   input += synapse0x23c4570();
   input += synapse0x23c45b0();
   input += synapse0x23c45f0();
   input += synapse0x23c4630();
   input += synapse0x23c4670();
   input += synapse0x23c46b0();
   input += synapse0x23c46f0();
   input += synapse0x23c4730();
   input += synapse0x23c4770();
   input += synapse0x23c47b0();
   input += synapse0x23c47f0();
   input += synapse0x23b25a0();
   input += synapse0x23b25e0();
   input += synapse0x23c4940();
   input += synapse0x23c4980();
   input += synapse0x23c49c0();
   input += synapse0x23c4a00();
   input += synapse0x23c4a40();
   input += synapse0x23c4a80();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23c4210() {
   double input = input0x23c4210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23c4ac0() {
   double input = -0.0296689;
   input += synapse0x23c4e00();
   input += synapse0x23c4e40();
   input += synapse0x23c4e80();
   input += synapse0x23c4ec0();
   input += synapse0x23c4f00();
   input += synapse0x23c4f40();
   input += synapse0x23c4f80();
   input += synapse0x23c4fc0();
   input += synapse0x23c5000();
   input += synapse0x23c5040();
   input += synapse0x23c5080();
   input += synapse0x23c50c0();
   input += synapse0x23c5100();
   input += synapse0x23c5140();
   input += synapse0x23c5180();
   input += synapse0x23c51c0();
   input += synapse0x23c4c50();
   input += synapse0x23c4c90();
   input += synapse0x23c5310();
   input += synapse0x23c5350();
   input += synapse0x23c5390();
   input += synapse0x23c53d0();
   input += synapse0x23c5410();
   input += synapse0x23c5450();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23c4ac0() {
   double input = input0x23c4ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23c5490() {
   double input = -1.05138;
   input += synapse0x23c57d0();
   input += synapse0x23c5810();
   input += synapse0x23c5850();
   input += synapse0x23c5890();
   input += synapse0x23c58d0();
   input += synapse0x23c5910();
   input += synapse0x23c5950();
   input += synapse0x23c5990();
   input += synapse0x23c59d0();
   input += synapse0x23c5a10();
   input += synapse0x23c5a50();
   input += synapse0x23c5a90();
   input += synapse0x23c5ad0();
   input += synapse0x23c5b10();
   input += synapse0x23c5b50();
   input += synapse0x23c5b90();
   input += synapse0x23c5620();
   input += synapse0x23c5660();
   input += synapse0x23c5ce0();
   input += synapse0x23c5d20();
   input += synapse0x23c5d60();
   input += synapse0x23c5da0();
   input += synapse0x23c5de0();
   input += synapse0x23c5e20();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23c5490() {
   double input = input0x23c5490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23c5e60() {
   double input = 1.37626;
   input += synapse0x23c61a0();
   input += synapse0x23c61e0();
   input += synapse0x23c6220();
   input += synapse0x23c6260();
   input += synapse0x23c62a0();
   input += synapse0x23c62e0();
   input += synapse0x23c6320();
   input += synapse0x23c6360();
   input += synapse0x23c63a0();
   input += synapse0x23c63e0();
   input += synapse0x23c6420();
   input += synapse0x23c6460();
   input += synapse0x23c64a0();
   input += synapse0x23c64e0();
   input += synapse0x23c6520();
   input += synapse0x23c6560();
   input += synapse0x23c5ff0();
   input += synapse0x23c6030();
   input += synapse0x23c66b0();
   input += synapse0x23c66f0();
   input += synapse0x23c6730();
   input += synapse0x23c6770();
   input += synapse0x23c67b0();
   input += synapse0x23c67f0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23c5e60() {
   double input = input0x23c5e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23cd060() {
   double input = -0.805684;
   input += synapse0x2166660();
   input += synapse0x21666a0();
   input += synapse0x23a31a0();
   input += synapse0x23a31e0();
   input += synapse0x23a4c70();
   input += synapse0x23a4cb0();
   input += synapse0x23a5a40();
   input += synapse0x23a5a80();
   input += synapse0x23a6410();
   input += synapse0x23a6450();
   input += synapse0x23a6de0();
   input += synapse0x23a6e20();
   input += synapse0x23a78c0();
   input += synapse0x23a7900();
   input += synapse0x23a8290();
   input += synapse0x23a82d0();
   input += synapse0x23a5370();
   input += synapse0x23a53b0();
   input += synapse0x23a9e40();
   input += synapse0x23a9e80();
   input += synapse0x23aa810();
   input += synapse0x23aa850();
   input += synapse0x23ab1e0();
   input += synapse0x23ab220();
   input += synapse0x23abbb0();
   input += synapse0x23abbf0();
   input += synapse0x239ec40();
   input += synapse0x239ec80();
   input += synapse0x23adca0();
   input += synapse0x23adce0();
   input += synapse0x23ae670();
   input += synapse0x23ae6b0();
   input += synapse0x23af040();
   input += synapse0x23af080();
   input += synapse0x23afa10();
   input += synapse0x23afa50();
   input += synapse0x23b03e0();
   input += synapse0x23b0420();
   input += synapse0x23a8f30();
   input += synapse0x23a8f70();
   input += synapse0x23b27e0();
   input += synapse0x23b2820();
   input += synapse0x23b3170();
   input += synapse0x23b31b0();
   input += synapse0x23b3b40();
   input += synapse0x23b3b80();
   input += synapse0x23b4510();
   input += synapse0x23b4550();
   input += synapse0x23b4ee0();
   input += synapse0x23b4f20();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23cd060() {
   double input = input0x23cd060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23cd400() {
   double input = 0.818191;
   input += synapse0x23b7620();
   input += synapse0x23b7660();
   input += synapse0x23acbe0();
   input += synapse0x23acc20();
   input += synapse0x23ba200();
   input += synapse0x23ba240();
   input += synapse0x23babd0();
   input += synapse0x23bac10();
   input += synapse0x23bb5a0();
   input += synapse0x23bb5e0();
   input += synapse0x23bbf70();
   input += synapse0x23bbfb0();
   input += synapse0x23bc940();
   input += synapse0x23bc980();
   input += synapse0x23bd310();
   input += synapse0x23bd350();
   input += synapse0x23bdce0();
   input += synapse0x23bdd20();
   input += synapse0x23be6b0();
   input += synapse0x23be6f0();
   input += synapse0x23bf290();
   input += synapse0x23bf2d0();
   input += synapse0x23bfc60();
   input += synapse0x23bfca0();
   input += synapse0x23b0ae0();
   input += synapse0x23b0b20();
   input += synapse0x23b14b0();
   input += synapse0x23b14f0();
   input += synapse0x23b1e80();
   input += synapse0x23b1ec0();
   input += synapse0x23c43a0();
   input += synapse0x23c43e0();
   input += synapse0x23c4d70();
   input += synapse0x23c4db0();
   input += synapse0x23c5740();
   input += synapse0x23c5780();
   input += synapse0x23c6110();
   input += synapse0x23c6150();
   input += synapse0x23a10a0();
   input += synapse0x23a10e0();
   input += synapse0x23b58b0();
   input += synapse0x23b58f0();
   input += synapse0x23c6830();
   input += synapse0x23c6870();
   input += synapse0x23c68b0();
   input += synapse0x23c68f0();
   input += synapse0x23cd7a0();
   input += synapse0x23cd7e0();
   input += synapse0x23cd820();
   input += synapse0x23cd860();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23cd400() {
   double input = input0x23cd400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23cd8a0() {
   double input = 0.00601091;
   input += synapse0x23cdbe0();
   input += synapse0x23cdc20();
   input += synapse0x23cdc60();
   input += synapse0x23cdca0();
   input += synapse0x23cdce0();
   input += synapse0x23cdd20();
   input += synapse0x23cdd60();
   input += synapse0x23cdda0();
   input += synapse0x23cdde0();
   input += synapse0x23cde20();
   input += synapse0x23cde60();
   input += synapse0x23cdea0();
   input += synapse0x23cdee0();
   input += synapse0x23cdf20();
   input += synapse0x23cdf60();
   input += synapse0x23cdfa0();
   input += synapse0x23cda30();
   input += synapse0x23cda70();
   input += synapse0x23ce0f0();
   input += synapse0x23ce130();
   input += synapse0x23ce170();
   input += synapse0x23ce1b0();
   input += synapse0x23ce1f0();
   input += synapse0x23ce230();
   input += synapse0x23ce270();
   input += synapse0x23ce2b0();
   input += synapse0x23ce2f0();
   input += synapse0x23ce330();
   input += synapse0x23ce370();
   input += synapse0x23ce3b0();
   input += synapse0x23ce3f0();
   input += synapse0x23ce430();
   input += synapse0x23cdfe0();
   input += synapse0x23ce020();
   input += synapse0x23ce060();
   input += synapse0x23ce0a0();
   input += synapse0x23ce680();
   input += synapse0x23ce6c0();
   input += synapse0x23ce700();
   input += synapse0x23ce740();
   input += synapse0x23ce780();
   input += synapse0x23ce7c0();
   input += synapse0x23ce800();
   input += synapse0x23ce840();
   input += synapse0x23ce880();
   input += synapse0x23ce8c0();
   input += synapse0x23ce900();
   input += synapse0x23ce940();
   input += synapse0x23ce980();
   input += synapse0x23ce9c0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23cd8a0() {
   double input = input0x23cd8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23cea00() {
   double input = 0.44475;
   input += synapse0x23ced40();
   input += synapse0x23ced80();
   input += synapse0x23cedc0();
   input += synapse0x23cee00();
   input += synapse0x23cee40();
   input += synapse0x23cee80();
   input += synapse0x23ceec0();
   input += synapse0x23cef00();
   input += synapse0x23cef40();
   input += synapse0x23cef80();
   input += synapse0x23cefc0();
   input += synapse0x23cf000();
   input += synapse0x23cf040();
   input += synapse0x23cf080();
   input += synapse0x23cf0c0();
   input += synapse0x23cf100();
   input += synapse0x23ceb90();
   input += synapse0x23cebd0();
   input += synapse0x23cf250();
   input += synapse0x23cf290();
   input += synapse0x23cf2d0();
   input += synapse0x23cf310();
   input += synapse0x23cf350();
   input += synapse0x23cf390();
   input += synapse0x23cf3d0();
   input += synapse0x23cf410();
   input += synapse0x23cf450();
   input += synapse0x23cf490();
   input += synapse0x23cf4d0();
   input += synapse0x23cf510();
   input += synapse0x23cf550();
   input += synapse0x23cf590();
   input += synapse0x23cf140();
   input += synapse0x23cf180();
   input += synapse0x23cf1c0();
   input += synapse0x23cf200();
   input += synapse0x23cf7e0();
   input += synapse0x23cf820();
   input += synapse0x23cf860();
   input += synapse0x23cf8a0();
   input += synapse0x23cf8e0();
   input += synapse0x23cf920();
   input += synapse0x23cf960();
   input += synapse0x23cf9a0();
   input += synapse0x23cf9e0();
   input += synapse0x23cfa20();
   input += synapse0x23cfa60();
   input += synapse0x23cfaa0();
   input += synapse0x23cfae0();
   input += synapse0x23cfb20();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23cea00() {
   double input = input0x23cea00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23cfb60() {
   double input = -0.750576;
   input += synapse0x23cfea0();
   input += synapse0x23cfee0();
   input += synapse0x23cff20();
   input += synapse0x23cff60();
   input += synapse0x23cffa0();
   input += synapse0x23cffe0();
   input += synapse0x23d0020();
   input += synapse0x23d0060();
   input += synapse0x23d00a0();
   input += synapse0x23d00e0();
   input += synapse0x23d0120();
   input += synapse0x23d0160();
   input += synapse0x23d01a0();
   input += synapse0x23d01e0();
   input += synapse0x23d0220();
   input += synapse0x23d0260();
   input += synapse0x23cfcf0();
   input += synapse0x23cfd30();
   input += synapse0x23d03b0();
   input += synapse0x23d03f0();
   input += synapse0x23d0430();
   input += synapse0x23d0470();
   input += synapse0x23d04b0();
   input += synapse0x23d04f0();
   input += synapse0x23d0530();
   input += synapse0x23d0570();
   input += synapse0x23d05b0();
   input += synapse0x23d05f0();
   input += synapse0x23d0630();
   input += synapse0x23d0670();
   input += synapse0x23d06b0();
   input += synapse0x23d06f0();
   input += synapse0x23d02a0();
   input += synapse0x23d02e0();
   input += synapse0x23d0320();
   input += synapse0x23d0360();
   input += synapse0x23d0940();
   input += synapse0x23d0980();
   input += synapse0x23d09c0();
   input += synapse0x23d0a00();
   input += synapse0x23d0a40();
   input += synapse0x23d0a80();
   input += synapse0x23d0ac0();
   input += synapse0x23d0b00();
   input += synapse0x23d0b40();
   input += synapse0x23d0b80();
   input += synapse0x23d0bc0();
   input += synapse0x23d0c00();
   input += synapse0x23d0c40();
   input += synapse0x23d0c80();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23cfb60() {
   double input = input0x23cfb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_cLsL::input0x23d0cc0() {
   double input = 6.26711;
   input += synapse0x23d0ee0();
   input += synapse0x23d0f20();
   input += synapse0x23d0f60();
   input += synapse0x23d0fa0();
   input += synapse0x23d0fe0();
   return input;
}

double NNfunction_ss_cLsL::neuron0x23d0cc0() {
   double input = input0x23d0cc0();
   return (input * 1)+0;
}

double NNfunction_ss_cLsL::synapse0x23a1130() {
   return (neuron0x239bd30()*-0.229215);
}

double NNfunction_ss_cLsL::synapse0x23a1170() {
   return (neuron0x239bfe0()*-0.722184);
}

double NNfunction_ss_cLsL::synapse0x23a11b0() {
   return (neuron0x239c320()*-0.275479);
}

double NNfunction_ss_cLsL::synapse0x23a11f0() {
   return (neuron0x239c660()*2.19975);
}

double NNfunction_ss_cLsL::synapse0x23a1230() {
   return (neuron0x239c9a0()*-0.0105667);
}

double NNfunction_ss_cLsL::synapse0x23a1270() {
   return (neuron0x239cce0()*0.443329);
}

double NNfunction_ss_cLsL::synapse0x23a12b0() {
   return (neuron0x239d020()*0.240724);
}

double NNfunction_ss_cLsL::synapse0x23a12f0() {
   return (neuron0x239d360()*0.274783);
}

double NNfunction_ss_cLsL::synapse0x23a1330() {
   return (neuron0x239d6a0()*0.0466659);
}

double NNfunction_ss_cLsL::synapse0x23a1370() {
   return (neuron0x239d9e0()*0.0180908);
}

double NNfunction_ss_cLsL::synapse0x23a13b0() {
   return (neuron0x239dd20()*-0.243688);
}

double NNfunction_ss_cLsL::synapse0x23a13f0() {
   return (neuron0x239e060()*1.3886);
}

double NNfunction_ss_cLsL::synapse0x23a1430() {
   return (neuron0x239e3a0()*-1.72331);
}

double NNfunction_ss_cLsL::synapse0x23a1470() {
   return (neuron0x239e6e0()*0.0516104);
}

double NNfunction_ss_cLsL::synapse0x23a14b0() {
   return (neuron0x239ea20()*0.953664);
}

double NNfunction_ss_cLsL::synapse0x23a14f0() {
   return (neuron0x239ed60()*0.786089);
}

double NNfunction_ss_cLsL::synapse0x23a0f80() {
   return (neuron0x239f0a0()*0.105082);
}

double NNfunction_ss_cLsL::synapse0x23a0fc0() {
   return (neuron0x239f600()*0.672973);
}

double NNfunction_ss_cLsL::synapse0x2157ef0() {
   return (neuron0x239f940()*0.238827);
}

double NNfunction_ss_cLsL::synapse0x2157f30() {
   return (neuron0x239fc80()*-0.160958);
}

double NNfunction_ss_cLsL::synapse0x23a1530() {
   return (neuron0x239ffc0()*-0.134577);
}

double NNfunction_ss_cLsL::synapse0x23a1570() {
   return (neuron0x23a0300()*-0.466369);
}

double NNfunction_ss_cLsL::synapse0x23a15b0() {
   return (neuron0x23a0640()*0.431544);
}

double NNfunction_ss_cLsL::synapse0x23a15f0() {
   return (neuron0x23a0980()*0.129513);
}

double NNfunction_ss_cLsL::synapse0x23a1970() {
   return (neuron0x239bd30()*0.376592);
}

double NNfunction_ss_cLsL::synapse0x23a19b0() {
   return (neuron0x239bfe0()*0.661658);
}

double NNfunction_ss_cLsL::synapse0x23a19f0() {
   return (neuron0x239c320()*-0.351265);
}

double NNfunction_ss_cLsL::synapse0x23a1a30() {
   return (neuron0x239c660()*0.479497);
}

double NNfunction_ss_cLsL::synapse0x23a1a70() {
   return (neuron0x239c9a0()*0.211526);
}

double NNfunction_ss_cLsL::synapse0x23a1ab0() {
   return (neuron0x239cce0()*0.729477);
}

double NNfunction_ss_cLsL::synapse0x23a1af0() {
   return (neuron0x239d020()*-0.261419);
}

double NNfunction_ss_cLsL::synapse0x23a1b30() {
   return (neuron0x239d360()*0.333954);
}

double NNfunction_ss_cLsL::synapse0x23a1b70() {
   return (neuron0x239d6a0()*0.256612);
}

double NNfunction_ss_cLsL::synapse0x2157d40() {
   return (neuron0x239d9e0()*0.333039);
}

double NNfunction_ss_cLsL::synapse0x2157d80() {
   return (neuron0x239dd20()*0.298896);
}

double NNfunction_ss_cLsL::synapse0x2157dc0() {
   return (neuron0x239e060()*-0.0138864);
}

double NNfunction_ss_cLsL::synapse0x2157e00() {
   return (neuron0x239e3a0()*-0.38202);
}

double NNfunction_ss_cLsL::synapse0x23a1dc0() {
   return (neuron0x239e6e0()*-0.00575004);
}

double NNfunction_ss_cLsL::synapse0x23a1e00() {
   return (neuron0x239ea20()*-0.523779);
}

double NNfunction_ss_cLsL::synapse0x23a1e40() {
   return (neuron0x239ed60()*0.522166);
}

double NNfunction_ss_cLsL::synapse0x23a17c0() {
   return (neuron0x239f0a0()*0.414176);
}

double NNfunction_ss_cLsL::synapse0x23a1800() {
   return (neuron0x239f600()*0.18985);
}

double NNfunction_ss_cLsL::synapse0x23a1f90() {
   return (neuron0x239f940()*0.438803);
}

double NNfunction_ss_cLsL::synapse0x23a1fd0() {
   return (neuron0x239fc80()*-0.0125906);
}

double NNfunction_ss_cLsL::synapse0x23a2010() {
   return (neuron0x239ffc0()*0.298811);
}

double NNfunction_ss_cLsL::synapse0x23a2050() {
   return (neuron0x23a0300()*-0.834394);
}

double NNfunction_ss_cLsL::synapse0x23a2090() {
   return (neuron0x23a0640()*0.272953);
}

double NNfunction_ss_cLsL::synapse0x23a20d0() {
   return (neuron0x23a0980()*0.474205);
}

double NNfunction_ss_cLsL::synapse0x23a2450() {
   return (neuron0x239bd30()*0.293026);
}

double NNfunction_ss_cLsL::synapse0x23a2490() {
   return (neuron0x239bfe0()*-0.199591);
}

double NNfunction_ss_cLsL::synapse0x23a24d0() {
   return (neuron0x239c320()*1.64996);
}

double NNfunction_ss_cLsL::synapse0x23a2510() {
   return (neuron0x239c660()*2.60494);
}

double NNfunction_ss_cLsL::synapse0x23a2550() {
   return (neuron0x239c9a0()*0.684189);
}

double NNfunction_ss_cLsL::synapse0x23a2590() {
   return (neuron0x239cce0()*0.149294);
}

double NNfunction_ss_cLsL::synapse0x23a25d0() {
   return (neuron0x239d020()*0.302821);
}

double NNfunction_ss_cLsL::synapse0x23a2610() {
   return (neuron0x239d360()*0.379661);
}

double NNfunction_ss_cLsL::synapse0x23a2650() {
   return (neuron0x239d6a0()*0.277912);
}

double NNfunction_ss_cLsL::synapse0x23a2690() {
   return (neuron0x239d9e0()*0.364215);
}

double NNfunction_ss_cLsL::synapse0x23a26d0() {
   return (neuron0x239dd20()*0.325834);
}

double NNfunction_ss_cLsL::synapse0x23a2710() {
   return (neuron0x239e060()*0.282394);
}

double NNfunction_ss_cLsL::synapse0x23a2750() {
   return (neuron0x239e3a0()*-2.30832);
}

double NNfunction_ss_cLsL::synapse0x23a2790() {
   return (neuron0x239e6e0()*-0.0589777);
}

double NNfunction_ss_cLsL::synapse0x23a27d0() {
   return (neuron0x239ea20()*0.148367);
}

double NNfunction_ss_cLsL::synapse0x23a2810() {
   return (neuron0x239ed60()*0.369891);
}

double NNfunction_ss_cLsL::synapse0x23a22a0() {
   return (neuron0x239f0a0()*0.332185);
}

double NNfunction_ss_cLsL::synapse0x23a22e0() {
   return (neuron0x239f600()*0.303639);
}

double NNfunction_ss_cLsL::synapse0x21585a0() {
   return (neuron0x239f940()*0.042301);
}

double NNfunction_ss_cLsL::synapse0x2165e70() {
   return (neuron0x239fc80()*0.993032);
}

double NNfunction_ss_cLsL::synapse0x2165eb0() {
   return (neuron0x239ffc0()*0.330376);
}

double NNfunction_ss_cLsL::synapse0x23a4740() {
   return (neuron0x23a0300()*0.476627);
}

double NNfunction_ss_cLsL::synapse0x23a4780() {
   return (neuron0x23a0640()*-0.205782);
}

double NNfunction_ss_cLsL::synapse0x239ba70() {
   return (neuron0x23a0980()*0.0942849);
}

double NNfunction_ss_cLsL::synapse0x239bb40() {
   return (neuron0x239bd30()*-0.37827);
}

double NNfunction_ss_cLsL::synapse0x21666f0() {
   return (neuron0x239bfe0()*-0.0567399);
}

double NNfunction_ss_cLsL::synapse0x23a1d40() {
   return (neuron0x239c320()*0.189849);
}

double NNfunction_ss_cLsL::synapse0x23a1d80() {
   return (neuron0x239c660()*2.18453);
}

double NNfunction_ss_cLsL::synapse0x23a2960() {
   return (neuron0x239c9a0()*0.022674);
}

double NNfunction_ss_cLsL::synapse0x23a29a0() {
   return (neuron0x239cce0()*0.0110222);
}

double NNfunction_ss_cLsL::synapse0x23a29e0() {
   return (neuron0x239d020()*-0.127444);
}

double NNfunction_ss_cLsL::synapse0x23a2a20() {
   return (neuron0x239d360()*0.235814);
}

double NNfunction_ss_cLsL::synapse0x23a2a60() {
   return (neuron0x239d6a0()*0.366071);
}

double NNfunction_ss_cLsL::synapse0x23a2aa0() {
   return (neuron0x239d9e0()*-0.0463625);
}

double NNfunction_ss_cLsL::synapse0x23a2ae0() {
   return (neuron0x239dd20()*0.301587);
}

double NNfunction_ss_cLsL::synapse0x23a2b20() {
   return (neuron0x239e060()*-0.0360539);
}

double NNfunction_ss_cLsL::synapse0x23a2b60() {
   return (neuron0x239e3a0()*-0.0408675);
}

double NNfunction_ss_cLsL::synapse0x23a2ba0() {
   return (neuron0x239e6e0()*0.24792);
}

double NNfunction_ss_cLsL::synapse0x23a2be0() {
   return (neuron0x239ea20()*-0.10586);
}

double NNfunction_ss_cLsL::synapse0x23a2c20() {
   return (neuron0x239ed60()*-0.00741305);
}

double NNfunction_ss_cLsL::synapse0x239bab0() {
   return (neuron0x239f0a0()*0.12038);
}

double NNfunction_ss_cLsL::synapse0x239baf0() {
   return (neuron0x239f600()*0.176494);
}

double NNfunction_ss_cLsL::synapse0x23a2d70() {
   return (neuron0x239f940()*0.429235);
}

double NNfunction_ss_cLsL::synapse0x23a2db0() {
   return (neuron0x239fc80()*-0.105756);
}

double NNfunction_ss_cLsL::synapse0x23a2df0() {
   return (neuron0x239ffc0()*-0.249351);
}

double NNfunction_ss_cLsL::synapse0x23a2e30() {
   return (neuron0x23a0300()*0.0423171);
}

double NNfunction_ss_cLsL::synapse0x23a2e70() {
   return (neuron0x23a0640()*-0.423001);
}

double NNfunction_ss_cLsL::synapse0x23a2eb0() {
   return (neuron0x23a0980()*0.00340023);
}

double NNfunction_ss_cLsL::synapse0x23a3230() {
   return (neuron0x239bd30()*0.0105996);
}

double NNfunction_ss_cLsL::synapse0x23a3270() {
   return (neuron0x239bfe0()*-0.494417);
}

double NNfunction_ss_cLsL::synapse0x23a32b0() {
   return (neuron0x239c320()*2.12354);
}

double NNfunction_ss_cLsL::synapse0x23a32f0() {
   return (neuron0x239c660()*-1.71047);
}

double NNfunction_ss_cLsL::synapse0x23a3330() {
   return (neuron0x239c9a0()*0.263659);
}

double NNfunction_ss_cLsL::synapse0x23a3370() {
   return (neuron0x239cce0()*0.464725);
}

double NNfunction_ss_cLsL::synapse0x23a33b0() {
   return (neuron0x239d020()*2.08318);
}

double NNfunction_ss_cLsL::synapse0x23a33f0() {
   return (neuron0x239d360()*0.474448);
}

double NNfunction_ss_cLsL::synapse0x23a3430() {
   return (neuron0x239d6a0()*0.177158);
}

double NNfunction_ss_cLsL::synapse0x23a3470() {
   return (neuron0x239d9e0()*-0.285687);
}

double NNfunction_ss_cLsL::synapse0x23a34b0() {
   return (neuron0x239dd20()*0.669074);
}

double NNfunction_ss_cLsL::synapse0x23a34f0() {
   return (neuron0x239e060()*0.382139);
}

double NNfunction_ss_cLsL::synapse0x23a3530() {
   return (neuron0x239e3a0()*-1.99606);
}

double NNfunction_ss_cLsL::synapse0x23a3570() {
   return (neuron0x239e6e0()*0.0150047);
}

double NNfunction_ss_cLsL::synapse0x23a35b0() {
   return (neuron0x239ea20()*-0.60009);
}

double NNfunction_ss_cLsL::synapse0x23a35f0() {
   return (neuron0x239ed60()*0.90049);
}

double NNfunction_ss_cLsL::synapse0x23a3740() {
   return (neuron0x239f0a0()*0.420734);
}

double NNfunction_ss_cLsL::synapse0x23a3080() {
   return (neuron0x239f600()*1.08708);
}

double NNfunction_ss_cLsL::synapse0x23a30c0() {
   return (neuron0x239f940()*0.273299);
}

double NNfunction_ss_cLsL::synapse0x23a4880() {
   return (neuron0x239fc80()*0.480895);
}

double NNfunction_ss_cLsL::synapse0x23a48c0() {
   return (neuron0x239ffc0()*0.719306);
}

double NNfunction_ss_cLsL::synapse0x23a4900() {
   return (neuron0x23a0300()*0.0989085);
}

double NNfunction_ss_cLsL::synapse0x23a4940() {
   return (neuron0x23a0640()*-0.388883);
}

double NNfunction_ss_cLsL::synapse0x23a4980() {
   return (neuron0x23a0980()*0.0225807);
}

double NNfunction_ss_cLsL::synapse0x23a4d00() {
   return (neuron0x239bd30()*-0.00686624);
}

double NNfunction_ss_cLsL::synapse0x23a4d40() {
   return (neuron0x239bfe0()*-0.242144);
}

double NNfunction_ss_cLsL::synapse0x23a4d80() {
   return (neuron0x239c320()*-0.435086);
}

double NNfunction_ss_cLsL::synapse0x23a4dc0() {
   return (neuron0x239c660()*0.133182);
}

double NNfunction_ss_cLsL::synapse0x23a4e00() {
   return (neuron0x239c9a0()*-0.351943);
}

double NNfunction_ss_cLsL::synapse0x23a4e40() {
   return (neuron0x239cce0()*-0.260731);
}

double NNfunction_ss_cLsL::synapse0x23a4e80() {
   return (neuron0x239d020()*-0.566141);
}

double NNfunction_ss_cLsL::synapse0x23a4ec0() {
   return (neuron0x239d360()*1.13243);
}

double NNfunction_ss_cLsL::synapse0x23a4f00() {
   return (neuron0x239d6a0()*-0.423565);
}

double NNfunction_ss_cLsL::synapse0x21661c0() {
   return (neuron0x239d9e0()*-0.966989);
}

double NNfunction_ss_cLsL::synapse0x2166200() {
   return (neuron0x239dd20()*0.323123);
}

double NNfunction_ss_cLsL::synapse0x2166240() {
   return (neuron0x239e060()*-0.0176124);
}

double NNfunction_ss_cLsL::synapse0x2166280() {
   return (neuron0x239e3a0()*-0.270765);
}

double NNfunction_ss_cLsL::synapse0x21662c0() {
   return (neuron0x239e6e0()*-0.227376);
}

double NNfunction_ss_cLsL::synapse0x2166300() {
   return (neuron0x239ea20()*0.0699353);
}

double NNfunction_ss_cLsL::synapse0x2166340() {
   return (neuron0x239ed60()*0.0132457);
}

double NNfunction_ss_cLsL::synapse0x23a4b50() {
   return (neuron0x239f0a0()*-0.780571);
}

double NNfunction_ss_cLsL::synapse0x23a4b90() {
   return (neuron0x239f600()*-0.0396497);
}

double NNfunction_ss_cLsL::synapse0x2166490() {
   return (neuron0x239f940()*-1.11894);
}

double NNfunction_ss_cLsL::synapse0x21664d0() {
   return (neuron0x239fc80()*0.554981);
}

double NNfunction_ss_cLsL::synapse0x2166510() {
   return (neuron0x239ffc0()*1.49716);
}

double NNfunction_ss_cLsL::synapse0x2166550() {
   return (neuron0x23a0300()*-0.884091);
}

double NNfunction_ss_cLsL::synapse0x2166590() {
   return (neuron0x23a0640()*-0.694923);
}

double NNfunction_ss_cLsL::synapse0x23a5750() {
   return (neuron0x23a0980()*0.420501);
}

double NNfunction_ss_cLsL::synapse0x23a5ad0() {
   return (neuron0x239bd30()*0.00739755);
}

double NNfunction_ss_cLsL::synapse0x23a5b10() {
   return (neuron0x239bfe0()*-0.000741396);
}

double NNfunction_ss_cLsL::synapse0x23a5b50() {
   return (neuron0x239c320()*0.0618161);
}

double NNfunction_ss_cLsL::synapse0x23a5b90() {
   return (neuron0x239c660()*-3.37721);
}

double NNfunction_ss_cLsL::synapse0x23a5bd0() {
   return (neuron0x239c9a0()*-0.0378447);
}

double NNfunction_ss_cLsL::synapse0x23a5c10() {
   return (neuron0x239cce0()*-0.0232562);
}

double NNfunction_ss_cLsL::synapse0x23a5c50() {
   return (neuron0x239d020()*0.00418712);
}

double NNfunction_ss_cLsL::synapse0x23a5c90() {
   return (neuron0x239d360()*0.0148644);
}

double NNfunction_ss_cLsL::synapse0x23a5cd0() {
   return (neuron0x239d6a0()*0.00744124);
}

double NNfunction_ss_cLsL::synapse0x23a5d10() {
   return (neuron0x239d9e0()*0.0185984);
}

double NNfunction_ss_cLsL::synapse0x23a5d50() {
   return (neuron0x239dd20()*-0.0052271);
}

double NNfunction_ss_cLsL::synapse0x23a5d90() {
   return (neuron0x239e060()*-0.0138022);
}

double NNfunction_ss_cLsL::synapse0x23a5dd0() {
   return (neuron0x239e3a0()*1.66479);
}

double NNfunction_ss_cLsL::synapse0x23a5e10() {
   return (neuron0x239e6e0()*0.0499241);
}

double NNfunction_ss_cLsL::synapse0x23a5e50() {
   return (neuron0x239ea20()*-0.0124831);
}

double NNfunction_ss_cLsL::synapse0x23a5e90() {
   return (neuron0x239ed60()*-0.0119285);
}

double NNfunction_ss_cLsL::synapse0x23a5920() {
   return (neuron0x239f0a0()*0.0294728);
}

double NNfunction_ss_cLsL::synapse0x23a5960() {
   return (neuron0x239f600()*-0.0192632);
}

double NNfunction_ss_cLsL::synapse0x23a5fe0() {
   return (neuron0x239f940()*-0.0381048);
}

double NNfunction_ss_cLsL::synapse0x23a6020() {
   return (neuron0x239fc80()*-0.020613);
}

double NNfunction_ss_cLsL::synapse0x23a6060() {
   return (neuron0x239ffc0()*-0.0234779);
}

double NNfunction_ss_cLsL::synapse0x23a60a0() {
   return (neuron0x23a0300()*-0.0162958);
}

double NNfunction_ss_cLsL::synapse0x23a60e0() {
   return (neuron0x23a0640()*0.00305734);
}

double NNfunction_ss_cLsL::synapse0x23a6120() {
   return (neuron0x23a0980()*0.00369834);
}

double NNfunction_ss_cLsL::synapse0x23a64a0() {
   return (neuron0x239bd30()*0.23712);
}

double NNfunction_ss_cLsL::synapse0x23a64e0() {
   return (neuron0x239bfe0()*0.335071);
}

double NNfunction_ss_cLsL::synapse0x23a6520() {
   return (neuron0x239c320()*-0.759278);
}

double NNfunction_ss_cLsL::synapse0x23a6560() {
   return (neuron0x239c660()*1.04483);
}

double NNfunction_ss_cLsL::synapse0x23a65a0() {
   return (neuron0x239c9a0()*-0.062451);
}

double NNfunction_ss_cLsL::synapse0x23a65e0() {
   return (neuron0x239cce0()*-0.0160173);
}

double NNfunction_ss_cLsL::synapse0x23a6620() {
   return (neuron0x239d020()*-0.0102687);
}

double NNfunction_ss_cLsL::synapse0x23a6660() {
   return (neuron0x239d360()*-0.103605);
}

double NNfunction_ss_cLsL::synapse0x23a66a0() {
   return (neuron0x239d6a0()*-0.268725);
}

double NNfunction_ss_cLsL::synapse0x23a66e0() {
   return (neuron0x239d9e0()*0.323601);
}

double NNfunction_ss_cLsL::synapse0x23a6720() {
   return (neuron0x239dd20()*-0.0752592);
}

double NNfunction_ss_cLsL::synapse0x23a6760() {
   return (neuron0x239e060()*0.0154744);
}

double NNfunction_ss_cLsL::synapse0x23a67a0() {
   return (neuron0x239e3a0()*0.0202727);
}

double NNfunction_ss_cLsL::synapse0x23a67e0() {
   return (neuron0x239e6e0()*-0.450683);
}

double NNfunction_ss_cLsL::synapse0x23a6820() {
   return (neuron0x239ea20()*0.287637);
}

double NNfunction_ss_cLsL::synapse0x23a6860() {
   return (neuron0x239ed60()*0.146384);
}

double NNfunction_ss_cLsL::synapse0x23a62f0() {
   return (neuron0x239f0a0()*-0.0782074);
}

double NNfunction_ss_cLsL::synapse0x23a6330() {
   return (neuron0x239f600()*-0.275736);
}

double NNfunction_ss_cLsL::synapse0x23a69b0() {
   return (neuron0x239f940()*0.1068);
}

double NNfunction_ss_cLsL::synapse0x23a69f0() {
   return (neuron0x239fc80()*-0.0475871);
}

double NNfunction_ss_cLsL::synapse0x23a6a30() {
   return (neuron0x239ffc0()*0.0217335);
}

double NNfunction_ss_cLsL::synapse0x23a6a70() {
   return (neuron0x23a0300()*0.113094);
}

double NNfunction_ss_cLsL::synapse0x23a6ab0() {
   return (neuron0x23a0640()*0.229193);
}

double NNfunction_ss_cLsL::synapse0x23a6af0() {
   return (neuron0x23a0980()*0.301736);
}

double NNfunction_ss_cLsL::synapse0x239f4f0() {
   return (neuron0x239bd30()*-0.0704245);
}

double NNfunction_ss_cLsL::synapse0x239f530() {
   return (neuron0x239bfe0()*-0.0442268);
}

double NNfunction_ss_cLsL::synapse0x239f570() {
   return (neuron0x239c320()*1.81988);
}

double NNfunction_ss_cLsL::synapse0x239f5b0() {
   return (neuron0x239c660()*0.0300193);
}

double NNfunction_ss_cLsL::synapse0x23a7080() {
   return (neuron0x239c9a0()*-0.034778);
}

double NNfunction_ss_cLsL::synapse0x23a70c0() {
   return (neuron0x239cce0()*-0.0468977);
}

double NNfunction_ss_cLsL::synapse0x23a7100() {
   return (neuron0x239d020()*-0.104338);
}

double NNfunction_ss_cLsL::synapse0x23a7140() {
   return (neuron0x239d360()*0.0221757);
}

double NNfunction_ss_cLsL::synapse0x23a7180() {
   return (neuron0x239d6a0()*0.0432585);
}

double NNfunction_ss_cLsL::synapse0x23a71c0() {
   return (neuron0x239d9e0()*-0.0259935);
}

double NNfunction_ss_cLsL::synapse0x23a7200() {
   return (neuron0x239dd20()*0.123484);
}

double NNfunction_ss_cLsL::synapse0x23a7240() {
   return (neuron0x239e060()*0.0457335);
}

double NNfunction_ss_cLsL::synapse0x23a7280() {
   return (neuron0x239e3a0()*-0.60168);
}

double NNfunction_ss_cLsL::synapse0x23a72c0() {
   return (neuron0x239e6e0()*0.0488017);
}

double NNfunction_ss_cLsL::synapse0x23a7300() {
   return (neuron0x239ea20()*-0.0287718);
}

double NNfunction_ss_cLsL::synapse0x23a7340() {
   return (neuron0x239ed60()*-0.103587);
}

double NNfunction_ss_cLsL::synapse0x23a6cc0() {
   return (neuron0x239f0a0()*0.14144);
}

double NNfunction_ss_cLsL::synapse0x23a6d00() {
   return (neuron0x239f600()*-0.0631054);
}

double NNfunction_ss_cLsL::synapse0x23a7490() {
   return (neuron0x239f940()*-0.00713479);
}

double NNfunction_ss_cLsL::synapse0x23a74d0() {
   return (neuron0x239fc80()*0.0138646);
}

double NNfunction_ss_cLsL::synapse0x23a7510() {
   return (neuron0x239ffc0()*-0.0798497);
}

double NNfunction_ss_cLsL::synapse0x23a7550() {
   return (neuron0x23a0300()*-0.0734831);
}

double NNfunction_ss_cLsL::synapse0x23a7590() {
   return (neuron0x23a0640()*-0.090168);
}

double NNfunction_ss_cLsL::synapse0x23a75d0() {
   return (neuron0x23a0980()*-0.0997406);
}

double NNfunction_ss_cLsL::synapse0x23a7950() {
   return (neuron0x239bd30()*0.0422888);
}

double NNfunction_ss_cLsL::synapse0x23a7990() {
   return (neuron0x239bfe0()*0.243952);
}

double NNfunction_ss_cLsL::synapse0x23a79d0() {
   return (neuron0x239c320()*0.467568);
}

double NNfunction_ss_cLsL::synapse0x23a7a10() {
   return (neuron0x239c660()*0.164173);
}

double NNfunction_ss_cLsL::synapse0x23a7a50() {
   return (neuron0x239c9a0()*0.139855);
}

double NNfunction_ss_cLsL::synapse0x23a7a90() {
   return (neuron0x239cce0()*0.469584);
}

double NNfunction_ss_cLsL::synapse0x23a7ad0() {
   return (neuron0x239d020()*-0.239241);
}

double NNfunction_ss_cLsL::synapse0x23a7b10() {
   return (neuron0x239d360()*0.359109);
}

double NNfunction_ss_cLsL::synapse0x23a7b50() {
   return (neuron0x239d6a0()*0.0629304);
}

double NNfunction_ss_cLsL::synapse0x23a7b90() {
   return (neuron0x239d9e0()*1.04314);
}

double NNfunction_ss_cLsL::synapse0x23a7bd0() {
   return (neuron0x239dd20()*1.51904);
}

double NNfunction_ss_cLsL::synapse0x23a7c10() {
   return (neuron0x239e060()*-0.0455657);
}

double NNfunction_ss_cLsL::synapse0x23a7c50() {
   return (neuron0x239e3a0()*-0.992651);
}

double NNfunction_ss_cLsL::synapse0x23a7c90() {
   return (neuron0x239e6e0()*0.256806);
}

double NNfunction_ss_cLsL::synapse0x23a7cd0() {
   return (neuron0x239ea20()*0.286073);
}

double NNfunction_ss_cLsL::synapse0x23a7d10() {
   return (neuron0x239ed60()*-0.035193);
}

double NNfunction_ss_cLsL::synapse0x23a77a0() {
   return (neuron0x239f0a0()*0.359926);
}

double NNfunction_ss_cLsL::synapse0x23a77e0() {
   return (neuron0x239f600()*-0.237381);
}

double NNfunction_ss_cLsL::synapse0x23a7e60() {
   return (neuron0x239f940()*0.170454);
}

double NNfunction_ss_cLsL::synapse0x23a7ea0() {
   return (neuron0x239fc80()*0.120168);
}

double NNfunction_ss_cLsL::synapse0x23a7ee0() {
   return (neuron0x239ffc0()*-0.753269);
}

double NNfunction_ss_cLsL::synapse0x23a7f20() {
   return (neuron0x23a0300()*-0.268502);
}

double NNfunction_ss_cLsL::synapse0x23a7f60() {
   return (neuron0x23a0640()*-0.624564);
}

double NNfunction_ss_cLsL::synapse0x23a7fa0() {
   return (neuron0x23a0980()*0.167344);
}

double NNfunction_ss_cLsL::synapse0x23a8320() {
   return (neuron0x239bd30()*0.0901179);
}

double NNfunction_ss_cLsL::synapse0x23a8360() {
   return (neuron0x239bfe0()*-0.101529);
}

double NNfunction_ss_cLsL::synapse0x23a83a0() {
   return (neuron0x239c320()*-0.758942);
}

double NNfunction_ss_cLsL::synapse0x23a83e0() {
   return (neuron0x239c660()*0.914112);
}

double NNfunction_ss_cLsL::synapse0x23a8420() {
   return (neuron0x239c9a0()*-0.18805);
}

double NNfunction_ss_cLsL::synapse0x23a8460() {
   return (neuron0x239cce0()*0.0760902);
}

double NNfunction_ss_cLsL::synapse0x23a84a0() {
   return (neuron0x239d020()*0.0433669);
}

double NNfunction_ss_cLsL::synapse0x23a84e0() {
   return (neuron0x239d360()*0.0109632);
}

double NNfunction_ss_cLsL::synapse0x23a8520() {
   return (neuron0x239d6a0()*-0.0944073);
}

double NNfunction_ss_cLsL::synapse0x23a8560() {
   return (neuron0x239d9e0()*0.0562163);
}

double NNfunction_ss_cLsL::synapse0x23a85a0() {
   return (neuron0x239dd20()*-0.181335);
}

double NNfunction_ss_cLsL::synapse0x23a85e0() {
   return (neuron0x239e060()*-0.11021);
}

double NNfunction_ss_cLsL::synapse0x23a8620() {
   return (neuron0x239e3a0()*-0.821287);
}

double NNfunction_ss_cLsL::synapse0x23a8660() {
   return (neuron0x239e6e0()*-0.133084);
}

double NNfunction_ss_cLsL::synapse0x23a86a0() {
   return (neuron0x239ea20()*-0.100799);
}

double NNfunction_ss_cLsL::synapse0x23a86e0() {
   return (neuron0x239ed60()*0.0162409);
}

double NNfunction_ss_cLsL::synapse0x23a8170() {
   return (neuron0x239f0a0()*-0.0782839);
}

double NNfunction_ss_cLsL::synapse0x23a81b0() {
   return (neuron0x239f600()*0.00627367);
}

double NNfunction_ss_cLsL::synapse0x23a4f40() {
   return (neuron0x239f940()*-0.237839);
}

double NNfunction_ss_cLsL::synapse0x23a4f80() {
   return (neuron0x239fc80()*-0.0344067);
}

double NNfunction_ss_cLsL::synapse0x23a4fc0() {
   return (neuron0x239ffc0()*0.0616665);
}

double NNfunction_ss_cLsL::synapse0x23a5000() {
   return (neuron0x23a0300()*-0.0302832);
}

double NNfunction_ss_cLsL::synapse0x23a5040() {
   return (neuron0x23a0640()*0.257914);
}

double NNfunction_ss_cLsL::synapse0x23a5080() {
   return (neuron0x23a0980()*-0.0341697);
}

double NNfunction_ss_cLsL::synapse0x23a5400() {
   return (neuron0x239bd30()*-0.561029);
}

double NNfunction_ss_cLsL::synapse0x23a5440() {
   return (neuron0x239bfe0()*-0.344485);
}

double NNfunction_ss_cLsL::synapse0x23a5480() {
   return (neuron0x239c320()*-0.317242);
}

double NNfunction_ss_cLsL::synapse0x23a54c0() {
   return (neuron0x239c660()*0.155368);
}

double NNfunction_ss_cLsL::synapse0x23a5500() {
   return (neuron0x239c9a0()*0.143537);
}

double NNfunction_ss_cLsL::synapse0x23a5540() {
   return (neuron0x239cce0()*-0.138538);
}

double NNfunction_ss_cLsL::synapse0x23a5580() {
   return (neuron0x239d020()*0.435986);
}

double NNfunction_ss_cLsL::synapse0x23a55c0() {
   return (neuron0x239d360()*0.334908);
}

double NNfunction_ss_cLsL::synapse0x23a5600() {
   return (neuron0x239d6a0()*0.0896493);
}

double NNfunction_ss_cLsL::synapse0x23a5640() {
   return (neuron0x239d9e0()*-0.484169);
}

double NNfunction_ss_cLsL::synapse0x23a5680() {
   return (neuron0x239dd20()*0.214971);
}

double NNfunction_ss_cLsL::synapse0x23a56c0() {
   return (neuron0x239e060()*0.821241);
}

double NNfunction_ss_cLsL::synapse0x23a5700() {
   return (neuron0x239e3a0()*-0.741497);
}

double NNfunction_ss_cLsL::synapse0x23a9840() {
   return (neuron0x239e6e0()*0.0209879);
}

double NNfunction_ss_cLsL::synapse0x23a9880() {
   return (neuron0x239ea20()*0.279748);
}

double NNfunction_ss_cLsL::synapse0x23a98c0() {
   return (neuron0x239ed60()*0.259948);
}

double NNfunction_ss_cLsL::synapse0x23a5250() {
   return (neuron0x239f0a0()*-0.19353);
}

double NNfunction_ss_cLsL::synapse0x23a5290() {
   return (neuron0x239f600()*0.330664);
}

double NNfunction_ss_cLsL::synapse0x23a9a10() {
   return (neuron0x239f940()*-0.304543);
}

double NNfunction_ss_cLsL::synapse0x23a9a50() {
   return (neuron0x239fc80()*0.195033);
}

double NNfunction_ss_cLsL::synapse0x23a9a90() {
   return (neuron0x239ffc0()*-0.277763);
}

double NNfunction_ss_cLsL::synapse0x23a9ad0() {
   return (neuron0x23a0300()*-0.377947);
}

double NNfunction_ss_cLsL::synapse0x23a9b10() {
   return (neuron0x23a0640()*0.0468402);
}

double NNfunction_ss_cLsL::synapse0x23a9b50() {
   return (neuron0x23a0980()*-0.00410249);
}

double NNfunction_ss_cLsL::synapse0x23a9ed0() {
   return (neuron0x239bd30()*0.313929);
}

double NNfunction_ss_cLsL::synapse0x23a9f10() {
   return (neuron0x239bfe0()*0.158222);
}

double NNfunction_ss_cLsL::synapse0x23a9f50() {
   return (neuron0x239c320()*0.667886);
}

double NNfunction_ss_cLsL::synapse0x23a9f90() {
   return (neuron0x239c660()*0.903869);
}

double NNfunction_ss_cLsL::synapse0x23a9fd0() {
   return (neuron0x239c9a0()*0.00945347);
}

double NNfunction_ss_cLsL::synapse0x23aa010() {
   return (neuron0x239cce0()*0.135539);
}

double NNfunction_ss_cLsL::synapse0x23aa050() {
   return (neuron0x239d020()*0.0751442);
}

double NNfunction_ss_cLsL::synapse0x23aa090() {
   return (neuron0x239d360()*0.033232);
}

double NNfunction_ss_cLsL::synapse0x23aa0d0() {
   return (neuron0x239d6a0()*0.173622);
}

double NNfunction_ss_cLsL::synapse0x23aa110() {
   return (neuron0x239d9e0()*-0.0156028);
}

double NNfunction_ss_cLsL::synapse0x23aa150() {
   return (neuron0x239dd20()*-0.101182);
}

double NNfunction_ss_cLsL::synapse0x23aa190() {
   return (neuron0x239e060()*-0.286374);
}

double NNfunction_ss_cLsL::synapse0x23aa1d0() {
   return (neuron0x239e3a0()*-0.393933);
}

double NNfunction_ss_cLsL::synapse0x23aa210() {
   return (neuron0x239e6e0()*-0.198235);
}

double NNfunction_ss_cLsL::synapse0x23aa250() {
   return (neuron0x239ea20()*0.178382);
}

double NNfunction_ss_cLsL::synapse0x23aa290() {
   return (neuron0x239ed60()*0.131202);
}

double NNfunction_ss_cLsL::synapse0x23a9d20() {
   return (neuron0x239f0a0()*-0.00530747);
}

double NNfunction_ss_cLsL::synapse0x23a9d60() {
   return (neuron0x239f600()*0.0737573);
}

double NNfunction_ss_cLsL::synapse0x23aa3e0() {
   return (neuron0x239f940()*-0.014002);
}

double NNfunction_ss_cLsL::synapse0x23aa420() {
   return (neuron0x239fc80()*-0.119665);
}

double NNfunction_ss_cLsL::synapse0x23aa460() {
   return (neuron0x239ffc0()*0.20307);
}

double NNfunction_ss_cLsL::synapse0x23aa4a0() {
   return (neuron0x23a0300()*-0.28529);
}

double NNfunction_ss_cLsL::synapse0x23aa4e0() {
   return (neuron0x23a0640()*0.101831);
}

double NNfunction_ss_cLsL::synapse0x23aa520() {
   return (neuron0x23a0980()*-0.314735);
}

double NNfunction_ss_cLsL::synapse0x23aa8a0() {
   return (neuron0x239bd30()*0.015589);
}

double NNfunction_ss_cLsL::synapse0x23aa8e0() {
   return (neuron0x239bfe0()*-0.0136678);
}

double NNfunction_ss_cLsL::synapse0x23aa920() {
   return (neuron0x239c320()*-0.0450868);
}

double NNfunction_ss_cLsL::synapse0x23aa960() {
   return (neuron0x239c660()*1.57249);
}

double NNfunction_ss_cLsL::synapse0x23aa9a0() {
   return (neuron0x239c9a0()*-0.0054238);
}

double NNfunction_ss_cLsL::synapse0x23aa9e0() {
   return (neuron0x239cce0()*-0.0127097);
}

double NNfunction_ss_cLsL::synapse0x23aaa20() {
   return (neuron0x239d020()*-0.00616744);
}

double NNfunction_ss_cLsL::synapse0x23aaa60() {
   return (neuron0x239d360()*-0.0357937);
}

double NNfunction_ss_cLsL::synapse0x23aaaa0() {
   return (neuron0x239d6a0()*-0.0141204);
}

double NNfunction_ss_cLsL::synapse0x23aaae0() {
   return (neuron0x239d9e0()*0.0049523);
}

double NNfunction_ss_cLsL::synapse0x23aab20() {
   return (neuron0x239dd20()*-0.0352548);
}

double NNfunction_ss_cLsL::synapse0x23aab60() {
   return (neuron0x239e060()*-0.00881712);
}

double NNfunction_ss_cLsL::synapse0x23aaba0() {
   return (neuron0x239e3a0()*2.36857);
}

double NNfunction_ss_cLsL::synapse0x23aabe0() {
   return (neuron0x239e6e0()*0.0140765);
}

double NNfunction_ss_cLsL::synapse0x23aac20() {
   return (neuron0x239ea20()*0.0123365);
}

double NNfunction_ss_cLsL::synapse0x23aac60() {
   return (neuron0x239ed60()*0.0341273);
}

double NNfunction_ss_cLsL::synapse0x23aa6f0() {
   return (neuron0x239f0a0()*-0.0317568);
}

double NNfunction_ss_cLsL::synapse0x23aa730() {
   return (neuron0x239f600()*-0.0476166);
}

double NNfunction_ss_cLsL::synapse0x23aadb0() {
   return (neuron0x239f940()*0.000636085);
}

double NNfunction_ss_cLsL::synapse0x23aadf0() {
   return (neuron0x239fc80()*0.0349933);
}

double NNfunction_ss_cLsL::synapse0x23aae30() {
   return (neuron0x239ffc0()*-0.011066);
}

double NNfunction_ss_cLsL::synapse0x23aae70() {
   return (neuron0x23a0300()*0.0650314);
}

double NNfunction_ss_cLsL::synapse0x23aaeb0() {
   return (neuron0x23a0640()*-0.00576881);
}

double NNfunction_ss_cLsL::synapse0x23aaef0() {
   return (neuron0x23a0980()*-0.0376721);
}

double NNfunction_ss_cLsL::synapse0x23ab270() {
   return (neuron0x239bd30()*-0.0919859);
}

double NNfunction_ss_cLsL::synapse0x23ab2b0() {
   return (neuron0x239bfe0()*0.174174);
}

double NNfunction_ss_cLsL::synapse0x23ab2f0() {
   return (neuron0x239c320()*-0.618984);
}

double NNfunction_ss_cLsL::synapse0x23ab330() {
   return (neuron0x239c660()*3.16709);
}

double NNfunction_ss_cLsL::synapse0x23ab370() {
   return (neuron0x239c9a0()*0.315264);
}

double NNfunction_ss_cLsL::synapse0x23ab3b0() {
   return (neuron0x239cce0()*-0.141755);
}

double NNfunction_ss_cLsL::synapse0x23ab3f0() {
   return (neuron0x239d020()*0.247532);
}

double NNfunction_ss_cLsL::synapse0x23ab430() {
   return (neuron0x239d360()*0.194937);
}

double NNfunction_ss_cLsL::synapse0x23ab470() {
   return (neuron0x239d6a0()*-0.149911);
}

double NNfunction_ss_cLsL::synapse0x23ab4b0() {
   return (neuron0x239d9e0()*-0.341973);
}

double NNfunction_ss_cLsL::synapse0x23ab4f0() {
   return (neuron0x239dd20()*0.117529);
}

double NNfunction_ss_cLsL::synapse0x23ab530() {
   return (neuron0x239e060()*0.727118);
}

double NNfunction_ss_cLsL::synapse0x23ab570() {
   return (neuron0x239e3a0()*-1.34863);
}

double NNfunction_ss_cLsL::synapse0x23ab5b0() {
   return (neuron0x239e6e0()*0.246704);
}

double NNfunction_ss_cLsL::synapse0x23ab5f0() {
   return (neuron0x239ea20()*-0.0954088);
}

double NNfunction_ss_cLsL::synapse0x23ab630() {
   return (neuron0x239ed60()*0.326528);
}

double NNfunction_ss_cLsL::synapse0x23ab0c0() {
   return (neuron0x239f0a0()*0.188345);
}

double NNfunction_ss_cLsL::synapse0x23ab100() {
   return (neuron0x239f600()*0.417807);
}

double NNfunction_ss_cLsL::synapse0x23ab780() {
   return (neuron0x239f940()*-0.253523);
}

double NNfunction_ss_cLsL::synapse0x23ab7c0() {
   return (neuron0x239fc80()*-0.0768321);
}

double NNfunction_ss_cLsL::synapse0x23ab800() {
   return (neuron0x239ffc0()*-0.212253);
}

double NNfunction_ss_cLsL::synapse0x23ab840() {
   return (neuron0x23a0300()*0.0760687);
}

double NNfunction_ss_cLsL::synapse0x23ab880() {
   return (neuron0x23a0640()*0.0865653);
}

double NNfunction_ss_cLsL::synapse0x23ab8c0() {
   return (neuron0x23a0980()*-0.283881);
}

double NNfunction_ss_cLsL::synapse0x23abc40() {
   return (neuron0x239bd30()*0.221663);
}

double NNfunction_ss_cLsL::synapse0x239bec0() {
   return (neuron0x239bfe0()*-0.0346883);
}

double NNfunction_ss_cLsL::synapse0x239bf00() {
   return (neuron0x239c320()*-1.3187);
}

double NNfunction_ss_cLsL::synapse0x239c200() {
   return (neuron0x239c660()*-0.704805);
}

double NNfunction_ss_cLsL::synapse0x239c240() {
   return (neuron0x239c9a0()*-0.184715);
}

double NNfunction_ss_cLsL::synapse0x239c540() {
   return (neuron0x239cce0()*-0.151128);
}

double NNfunction_ss_cLsL::synapse0x239c580() {
   return (neuron0x239d020()*-0.434797);
}

double NNfunction_ss_cLsL::synapse0x239c880() {
   return (neuron0x239d360()*-1.09484);
}

double NNfunction_ss_cLsL::synapse0x239c8c0() {
   return (neuron0x239d6a0()*-0.634247);
}

double NNfunction_ss_cLsL::synapse0x239cbc0() {
   return (neuron0x239d9e0()*-0.0645853);
}

double NNfunction_ss_cLsL::synapse0x239cc00() {
   return (neuron0x239dd20()*-0.340247);
}

double NNfunction_ss_cLsL::synapse0x239cf00() {
   return (neuron0x239e060()*-0.0436838);
}

double NNfunction_ss_cLsL::synapse0x239cf40() {
   return (neuron0x239e3a0()*0.944538);
}

double NNfunction_ss_cLsL::synapse0x239d240() {
   return (neuron0x239e6e0()*-0.0101729);
}

double NNfunction_ss_cLsL::synapse0x239d280() {
   return (neuron0x239ea20()*-0.0587491);
}

double NNfunction_ss_cLsL::synapse0x239d580() {
   return (neuron0x239ed60()*-0.734);
}

double NNfunction_ss_cLsL::synapse0x239d5c0() {
   return (neuron0x239f0a0()*0.182574);
}

double NNfunction_ss_cLsL::synapse0x239d8c0() {
   return (neuron0x239f600()*-0.719985);
}

double NNfunction_ss_cLsL::synapse0x239d900() {
   return (neuron0x239f940()*-0.908785);
}

double NNfunction_ss_cLsL::synapse0x239dc00() {
   return (neuron0x239fc80()*-0.86107);
}

double NNfunction_ss_cLsL::synapse0x239dc40() {
   return (neuron0x239ffc0()*0.0230333);
}

double NNfunction_ss_cLsL::synapse0x239df40() {
   return (neuron0x23a0300()*-0.191524);
}

double NNfunction_ss_cLsL::synapse0x239df80() {
   return (neuron0x23a0640()*-0.0632405);
}

double NNfunction_ss_cLsL::synapse0x239e280() {
   return (neuron0x23a0980()*0.156393);
}

double NNfunction_ss_cLsL::synapse0x239e2c0() {
   return (neuron0x239bd30()*0.0959027);
}

double NNfunction_ss_cLsL::synapse0x239ef80() {
   return (neuron0x239bfe0()*0.0862417);
}

double NNfunction_ss_cLsL::synapse0x239efc0() {
   return (neuron0x239c320()*-0.247278);
}

double NNfunction_ss_cLsL::synapse0x23aba90() {
   return (neuron0x239c660()*-0.146134);
}

double NNfunction_ss_cLsL::synapse0x23abad0() {
   return (neuron0x239c9a0()*0.314367);
}

double NNfunction_ss_cLsL::synapse0x239f2c0() {
   return (neuron0x239cce0()*0.078815);
}

double NNfunction_ss_cLsL::synapse0x239f300() {
   return (neuron0x239d020()*0.13049);
}

double NNfunction_ss_cLsL::synapse0x239f820() {
   return (neuron0x239d360()*-0.300164);
}

double NNfunction_ss_cLsL::synapse0x239f860() {
   return (neuron0x239d6a0()*0.160262);
}

double NNfunction_ss_cLsL::synapse0x239fb60() {
   return (neuron0x239d9e0()*-0.0801078);
}

double NNfunction_ss_cLsL::synapse0x239fba0() {
   return (neuron0x239dd20()*0.0310896);
}

double NNfunction_ss_cLsL::synapse0x239fea0() {
   return (neuron0x239e060()*0.237213);
}

double NNfunction_ss_cLsL::synapse0x239fee0() {
   return (neuron0x239e3a0()*2.16538);
}

double NNfunction_ss_cLsL::synapse0x23a01e0() {
   return (neuron0x239e6e0()*-0.415868);
}

double NNfunction_ss_cLsL::synapse0x23a0220() {
   return (neuron0x239ea20()*0.0556105);
}

double NNfunction_ss_cLsL::synapse0x23a0520() {
   return (neuron0x239ed60()*0.158228);
}

double NNfunction_ss_cLsL::synapse0x23a0560() {
   return (neuron0x239f0a0()*0.940323);
}

double NNfunction_ss_cLsL::synapse0x23a0860() {
   return (neuron0x239f600()*0.0436962);
}

double NNfunction_ss_cLsL::synapse0x23a08a0() {
   return (neuron0x239f940()*-1.2461);
}

double NNfunction_ss_cLsL::synapse0x23a0ba0() {
   return (neuron0x239fc80()*-0.113901);
}

double NNfunction_ss_cLsL::synapse0x23a0be0() {
   return (neuron0x239ffc0()*0.56535);
}

double NNfunction_ss_cLsL::synapse0x239e5c0() {
   return (neuron0x23a0300()*-0.111588);
}

double NNfunction_ss_cLsL::synapse0x239e600() {
   return (neuron0x23a0640()*-0.329914);
}

double NNfunction_ss_cLsL::synapse0x23ad9b0() {
   return (neuron0x23a0980()*0.162788);
}

double NNfunction_ss_cLsL::synapse0x23add30() {
   return (neuron0x239bd30()*0.126791);
}

double NNfunction_ss_cLsL::synapse0x23add70() {
   return (neuron0x239bfe0()*0.0492077);
}

double NNfunction_ss_cLsL::synapse0x23addb0() {
   return (neuron0x239c320()*-0.634358);
}

double NNfunction_ss_cLsL::synapse0x23addf0() {
   return (neuron0x239c660()*-0.728536);
}

double NNfunction_ss_cLsL::synapse0x23ade30() {
   return (neuron0x239c9a0()*0.0280164);
}

double NNfunction_ss_cLsL::synapse0x23ade70() {
   return (neuron0x239cce0()*0.0480784);
}

double NNfunction_ss_cLsL::synapse0x23adeb0() {
   return (neuron0x239d020()*0.0144858);
}

double NNfunction_ss_cLsL::synapse0x23adef0() {
   return (neuron0x239d360()*-0.00908652);
}

double NNfunction_ss_cLsL::synapse0x23adf30() {
   return (neuron0x239d6a0()*-0.0272456);
}

double NNfunction_ss_cLsL::synapse0x23adf70() {
   return (neuron0x239d9e0()*0.0457707);
}

double NNfunction_ss_cLsL::synapse0x23adfb0() {
   return (neuron0x239dd20()*-0.0507157);
}

double NNfunction_ss_cLsL::synapse0x23adff0() {
   return (neuron0x239e060()*-0.051767);
}

double NNfunction_ss_cLsL::synapse0x23ae030() {
   return (neuron0x239e3a0()*-0.421413);
}

double NNfunction_ss_cLsL::synapse0x23ae070() {
   return (neuron0x239e6e0()*-0.0730285);
}

double NNfunction_ss_cLsL::synapse0x23ae0b0() {
   return (neuron0x239ea20()*0.0705108);
}

double NNfunction_ss_cLsL::synapse0x23ae0f0() {
   return (neuron0x239ed60()*0.0831088);
}

double NNfunction_ss_cLsL::synapse0x23adb80() {
   return (neuron0x239f0a0()*-0.0545453);
}

double NNfunction_ss_cLsL::synapse0x23adbc0() {
   return (neuron0x239f600()*0.011586);
}

double NNfunction_ss_cLsL::synapse0x23ae240() {
   return (neuron0x239f940()*0.0310952);
}

double NNfunction_ss_cLsL::synapse0x23ae280() {
   return (neuron0x239fc80()*-0.031409);
}

double NNfunction_ss_cLsL::synapse0x23ae2c0() {
   return (neuron0x239ffc0()*0.00295689);
}

double NNfunction_ss_cLsL::synapse0x23ae300() {
   return (neuron0x23a0300()*-0.00433227);
}

double NNfunction_ss_cLsL::synapse0x23ae340() {
   return (neuron0x23a0640()*0.00122538);
}

double NNfunction_ss_cLsL::synapse0x23ae380() {
   return (neuron0x23a0980()*0.0519819);
}

double NNfunction_ss_cLsL::synapse0x23ae700() {
   return (neuron0x239bd30()*0.0439158);
}

double NNfunction_ss_cLsL::synapse0x23ae740() {
   return (neuron0x239bfe0()*1.44897);
}

double NNfunction_ss_cLsL::synapse0x23ae780() {
   return (neuron0x239c320()*-0.0488674);
}

double NNfunction_ss_cLsL::synapse0x23ae7c0() {
   return (neuron0x239c660()*-0.429017);
}

double NNfunction_ss_cLsL::synapse0x23ae800() {
   return (neuron0x239c9a0()*-0.924608);
}

double NNfunction_ss_cLsL::synapse0x23ae840() {
   return (neuron0x239cce0()*-0.3167);
}

double NNfunction_ss_cLsL::synapse0x23ae880() {
   return (neuron0x239d020()*-0.286759);
}

double NNfunction_ss_cLsL::synapse0x23ae8c0() {
   return (neuron0x239d360()*-0.103813);
}

double NNfunction_ss_cLsL::synapse0x23ae900() {
   return (neuron0x239d6a0()*0.0263923);
}

double NNfunction_ss_cLsL::synapse0x23ae940() {
   return (neuron0x239d9e0()*-0.780912);
}

double NNfunction_ss_cLsL::synapse0x23ae980() {
   return (neuron0x239dd20()*-0.133992);
}

double NNfunction_ss_cLsL::synapse0x23ae9c0() {
   return (neuron0x239e060()*-0.412487);
}

double NNfunction_ss_cLsL::synapse0x23aea00() {
   return (neuron0x239e3a0()*0.653897);
}

double NNfunction_ss_cLsL::synapse0x23aea40() {
   return (neuron0x239e6e0()*0.947652);
}

double NNfunction_ss_cLsL::synapse0x23aea80() {
   return (neuron0x239ea20()*0.273678);
}

double NNfunction_ss_cLsL::synapse0x23aeac0() {
   return (neuron0x239ed60()*0.138092);
}

double NNfunction_ss_cLsL::synapse0x23ae550() {
   return (neuron0x239f0a0()*-0.269469);
}

double NNfunction_ss_cLsL::synapse0x23ae590() {
   return (neuron0x239f600()*0.0453434);
}

double NNfunction_ss_cLsL::synapse0x23aec10() {
   return (neuron0x239f940()*-0.230459);
}

double NNfunction_ss_cLsL::synapse0x23aec50() {
   return (neuron0x239fc80()*0.441217);
}

double NNfunction_ss_cLsL::synapse0x23aec90() {
   return (neuron0x239ffc0()*0.253542);
}

double NNfunction_ss_cLsL::synapse0x23aecd0() {
   return (neuron0x23a0300()*0.183196);
}

double NNfunction_ss_cLsL::synapse0x23aed10() {
   return (neuron0x23a0640()*-0.076036);
}

double NNfunction_ss_cLsL::synapse0x23aed50() {
   return (neuron0x23a0980()*-0.200006);
}

double NNfunction_ss_cLsL::synapse0x23af0d0() {
   return (neuron0x239bd30()*0.369436);
}

double NNfunction_ss_cLsL::synapse0x23af110() {
   return (neuron0x239bfe0()*-0.109859);
}

double NNfunction_ss_cLsL::synapse0x23af150() {
   return (neuron0x239c320()*-0.748079);
}

double NNfunction_ss_cLsL::synapse0x23af190() {
   return (neuron0x239c660()*0.469052);
}

double NNfunction_ss_cLsL::synapse0x23af1d0() {
   return (neuron0x239c9a0()*0.283919);
}

double NNfunction_ss_cLsL::synapse0x23af210() {
   return (neuron0x239cce0()*-0.188833);
}

double NNfunction_ss_cLsL::synapse0x23af250() {
   return (neuron0x239d020()*-0.176421);
}

double NNfunction_ss_cLsL::synapse0x23af290() {
   return (neuron0x239d360()*-0.520192);
}

double NNfunction_ss_cLsL::synapse0x23af2d0() {
   return (neuron0x239d6a0()*0.580174);
}

double NNfunction_ss_cLsL::synapse0x23af310() {
   return (neuron0x239d9e0()*-0.0420468);
}

double NNfunction_ss_cLsL::synapse0x23af350() {
   return (neuron0x239dd20()*0.741933);
}

double NNfunction_ss_cLsL::synapse0x23af390() {
   return (neuron0x239e060()*0.106101);
}

double NNfunction_ss_cLsL::synapse0x23af3d0() {
   return (neuron0x239e3a0()*-0.597112);
}

double NNfunction_ss_cLsL::synapse0x23af410() {
   return (neuron0x239e6e0()*0.482343);
}

double NNfunction_ss_cLsL::synapse0x23af450() {
   return (neuron0x239ea20()*0.80055);
}

double NNfunction_ss_cLsL::synapse0x23af490() {
   return (neuron0x239ed60()*2.30533);
}

double NNfunction_ss_cLsL::synapse0x23aef20() {
   return (neuron0x239f0a0()*0.259406);
}

double NNfunction_ss_cLsL::synapse0x23aef60() {
   return (neuron0x239f600()*0.0380189);
}

double NNfunction_ss_cLsL::synapse0x23af5e0() {
   return (neuron0x239f940()*-0.296938);
}

double NNfunction_ss_cLsL::synapse0x23af620() {
   return (neuron0x239fc80()*0.194);
}

double NNfunction_ss_cLsL::synapse0x23af660() {
   return (neuron0x239ffc0()*-0.846904);
}

double NNfunction_ss_cLsL::synapse0x23af6a0() {
   return (neuron0x23a0300()*-1.04944);
}

double NNfunction_ss_cLsL::synapse0x23af6e0() {
   return (neuron0x23a0640()*1.41731);
}

double NNfunction_ss_cLsL::synapse0x23af720() {
   return (neuron0x23a0980()*-0.233736);
}

double NNfunction_ss_cLsL::synapse0x23afaa0() {
   return (neuron0x239bd30()*-0.056409);
}

double NNfunction_ss_cLsL::synapse0x23afae0() {
   return (neuron0x239bfe0()*0.00982282);
}

double NNfunction_ss_cLsL::synapse0x23afb20() {
   return (neuron0x239c320()*-0.301798);
}

double NNfunction_ss_cLsL::synapse0x23afb60() {
   return (neuron0x239c660()*1.33878);
}

double NNfunction_ss_cLsL::synapse0x23afba0() {
   return (neuron0x239c9a0()*-0.0317308);
}

double NNfunction_ss_cLsL::synapse0x23afbe0() {
   return (neuron0x239cce0()*-0.0158554);
}

double NNfunction_ss_cLsL::synapse0x23afc20() {
   return (neuron0x239d020()*-0.0196795);
}

double NNfunction_ss_cLsL::synapse0x23afc60() {
   return (neuron0x239d360()*-0.0498502);
}

double NNfunction_ss_cLsL::synapse0x23afca0() {
   return (neuron0x239d6a0()*0.00885604);
}

double NNfunction_ss_cLsL::synapse0x23afce0() {
   return (neuron0x239d9e0()*-0.0114331);
}

double NNfunction_ss_cLsL::synapse0x23afd20() {
   return (neuron0x239dd20()*0.0494383);
}

double NNfunction_ss_cLsL::synapse0x23afd60() {
   return (neuron0x239e060()*0.421271);
}

double NNfunction_ss_cLsL::synapse0x23afda0() {
   return (neuron0x239e3a0()*-0.141537);
}

double NNfunction_ss_cLsL::synapse0x23afde0() {
   return (neuron0x239e6e0()*-0.136967);
}

double NNfunction_ss_cLsL::synapse0x23afe20() {
   return (neuron0x239ea20()*0.22191);
}

double NNfunction_ss_cLsL::synapse0x23afe60() {
   return (neuron0x239ed60()*0.243078);
}

double NNfunction_ss_cLsL::synapse0x23af8f0() {
   return (neuron0x239f0a0()*-0.101035);
}

double NNfunction_ss_cLsL::synapse0x23af930() {
   return (neuron0x239f600()*0.206286);
}

double NNfunction_ss_cLsL::synapse0x23affb0() {
   return (neuron0x239f940()*0.18109);
}

double NNfunction_ss_cLsL::synapse0x23afff0() {
   return (neuron0x239fc80()*0.0602134);
}

double NNfunction_ss_cLsL::synapse0x23b0030() {
   return (neuron0x239ffc0()*-0.0395316);
}

double NNfunction_ss_cLsL::synapse0x23b0070() {
   return (neuron0x23a0300()*0.0318808);
}

double NNfunction_ss_cLsL::synapse0x23b00b0() {
   return (neuron0x23a0640()*-0.0276235);
}

double NNfunction_ss_cLsL::synapse0x23b00f0() {
   return (neuron0x23a0980()*0.0162419);
}

double NNfunction_ss_cLsL::synapse0x23b0470() {
   return (neuron0x239bd30()*-0.00889174);
}

double NNfunction_ss_cLsL::synapse0x23b04b0() {
   return (neuron0x239bfe0()*0.00299163);
}

double NNfunction_ss_cLsL::synapse0x23b04f0() {
   return (neuron0x239c320()*-0.0482423);
}

double NNfunction_ss_cLsL::synapse0x23b0530() {
   return (neuron0x239c660()*0.327739);
}

double NNfunction_ss_cLsL::synapse0x23b0570() {
   return (neuron0x239c9a0()*0.00931724);
}

double NNfunction_ss_cLsL::synapse0x23b05b0() {
   return (neuron0x239cce0()*0.00267909);
}

double NNfunction_ss_cLsL::synapse0x23b05f0() {
   return (neuron0x239d020()*-0.0098221);
}

double NNfunction_ss_cLsL::synapse0x23b0630() {
   return (neuron0x239d360()*-0.0201415);
}

double NNfunction_ss_cLsL::synapse0x23b0670() {
   return (neuron0x239d6a0()*0.0132613);
}

double NNfunction_ss_cLsL::synapse0x23a8830() {
   return (neuron0x239d9e0()*0.0122573);
}

double NNfunction_ss_cLsL::synapse0x23a8870() {
   return (neuron0x239dd20()*0.0302267);
}

double NNfunction_ss_cLsL::synapse0x23a88b0() {
   return (neuron0x239e060()*0.00291401);
}

double NNfunction_ss_cLsL::synapse0x23a88f0() {
   return (neuron0x239e3a0()*-1.62687);
}

double NNfunction_ss_cLsL::synapse0x23a8930() {
   return (neuron0x239e6e0()*-0.0266296);
}

double NNfunction_ss_cLsL::synapse0x23a8970() {
   return (neuron0x239ea20()*0.00363471);
}

double NNfunction_ss_cLsL::synapse0x23a89b0() {
   return (neuron0x239ed60()*0.000148689);
}

double NNfunction_ss_cLsL::synapse0x23b02c0() {
   return (neuron0x239f0a0()*-0.0134084);
}

double NNfunction_ss_cLsL::synapse0x23b0300() {
   return (neuron0x239f600()*0.00864937);
}

double NNfunction_ss_cLsL::synapse0x23a8b00() {
   return (neuron0x239f940()*-0.0136795);
}

double NNfunction_ss_cLsL::synapse0x23a8b40() {
   return (neuron0x239fc80()*0.0169837);
}

double NNfunction_ss_cLsL::synapse0x23a8b80() {
   return (neuron0x239ffc0()*-0.00280001);
}

double NNfunction_ss_cLsL::synapse0x23a8bc0() {
   return (neuron0x23a0300()*0.0103816);
}

double NNfunction_ss_cLsL::synapse0x23a8c00() {
   return (neuron0x23a0640()*-0.0241032);
}

double NNfunction_ss_cLsL::synapse0x23a8c40() {
   return (neuron0x23a0980()*0.00610113);
}

double NNfunction_ss_cLsL::synapse0x23a8fc0() {
   return (neuron0x239bd30()*0.714385);
}

double NNfunction_ss_cLsL::synapse0x23a9000() {
   return (neuron0x239bfe0()*0.498529);
}

double NNfunction_ss_cLsL::synapse0x23a9040() {
   return (neuron0x239c320()*-0.443728);
}

double NNfunction_ss_cLsL::synapse0x23a9080() {
   return (neuron0x239c660()*0.500908);
}

double NNfunction_ss_cLsL::synapse0x23a90c0() {
   return (neuron0x239c9a0()*-0.167827);
}

double NNfunction_ss_cLsL::synapse0x23a9100() {
   return (neuron0x239cce0()*0.0219011);
}

double NNfunction_ss_cLsL::synapse0x23a9140() {
   return (neuron0x239d020()*-0.0703235);
}

double NNfunction_ss_cLsL::synapse0x23a9180() {
   return (neuron0x239d360()*-0.5094);
}

double NNfunction_ss_cLsL::synapse0x23a91c0() {
   return (neuron0x239d6a0()*-0.784151);
}

double NNfunction_ss_cLsL::synapse0x23a9200() {
   return (neuron0x239d9e0()*-0.266065);
}

double NNfunction_ss_cLsL::synapse0x23a9240() {
   return (neuron0x239dd20()*-0.569503);
}

double NNfunction_ss_cLsL::synapse0x23a9280() {
   return (neuron0x239e060()*-0.340191);
}

double NNfunction_ss_cLsL::synapse0x23a92c0() {
   return (neuron0x239e3a0()*-0.791267);
}

double NNfunction_ss_cLsL::synapse0x23a9300() {
   return (neuron0x239e6e0()*-0.455588);
}

double NNfunction_ss_cLsL::synapse0x23a9340() {
   return (neuron0x239ea20()*-0.268017);
}

double NNfunction_ss_cLsL::synapse0x23a9380() {
   return (neuron0x239ed60()*-0.224511);
}

double NNfunction_ss_cLsL::synapse0x23a8e10() {
   return (neuron0x239f0a0()*1.39092);
}

double NNfunction_ss_cLsL::synapse0x23a8e50() {
   return (neuron0x239f600()*1.44355);
}

double NNfunction_ss_cLsL::synapse0x23a94d0() {
   return (neuron0x239f940()*0.501934);
}

double NNfunction_ss_cLsL::synapse0x23a9510() {
   return (neuron0x239fc80()*0.566289);
}

double NNfunction_ss_cLsL::synapse0x23a9550() {
   return (neuron0x239ffc0()*0.148724);
}

double NNfunction_ss_cLsL::synapse0x23a9590() {
   return (neuron0x23a0300()*0.219376);
}

double NNfunction_ss_cLsL::synapse0x23a95d0() {
   return (neuron0x23a0640()*0.068441);
}

double NNfunction_ss_cLsL::synapse0x23a9610() {
   return (neuron0x23a0980()*0.478819);
}

double NNfunction_ss_cLsL::synapse0x23a97e0() {
   return (neuron0x239bd30()*0.304003);
}

double NNfunction_ss_cLsL::synapse0x23b2870() {
   return (neuron0x239bfe0()*0.0716485);
}

double NNfunction_ss_cLsL::synapse0x23b28b0() {
   return (neuron0x239c320()*-0.733423);
}

double NNfunction_ss_cLsL::synapse0x23b28f0() {
   return (neuron0x239c660()*-0.496653);
}

double NNfunction_ss_cLsL::synapse0x23b2930() {
   return (neuron0x239c9a0()*-1.27651);
}

double NNfunction_ss_cLsL::synapse0x23b2970() {
   return (neuron0x239cce0()*0.409959);
}

double NNfunction_ss_cLsL::synapse0x23b29b0() {
   return (neuron0x239d020()*0.385795);
}

double NNfunction_ss_cLsL::synapse0x23b29f0() {
   return (neuron0x239d360()*0.170156);
}

double NNfunction_ss_cLsL::synapse0x23b2a30() {
   return (neuron0x239d6a0()*-0.93365);
}

double NNfunction_ss_cLsL::synapse0x23b2a70() {
   return (neuron0x239d9e0()*0.345721);
}

double NNfunction_ss_cLsL::synapse0x23b2ab0() {
   return (neuron0x239dd20()*0.123854);
}

double NNfunction_ss_cLsL::synapse0x23b2af0() {
   return (neuron0x239e060()*0.578127);
}

double NNfunction_ss_cLsL::synapse0x23b2b30() {
   return (neuron0x239e3a0()*-1.6088);
}

double NNfunction_ss_cLsL::synapse0x23b2b70() {
   return (neuron0x239e6e0()*0.510032);
}

double NNfunction_ss_cLsL::synapse0x23b2bb0() {
   return (neuron0x239ea20()*-0.852331);
}

double NNfunction_ss_cLsL::synapse0x23b2bf0() {
   return (neuron0x239ed60()*0.235464);
}

double NNfunction_ss_cLsL::synapse0x23b26c0() {
   return (neuron0x239f0a0()*0.231775);
}

double NNfunction_ss_cLsL::synapse0x23b2700() {
   return (neuron0x239f600()*-0.343723);
}

double NNfunction_ss_cLsL::synapse0x23b2d40() {
   return (neuron0x239f940()*0.452147);
}

double NNfunction_ss_cLsL::synapse0x23b2d80() {
   return (neuron0x239fc80()*-0.303595);
}

double NNfunction_ss_cLsL::synapse0x23b2dc0() {
   return (neuron0x239ffc0()*-0.702143);
}

double NNfunction_ss_cLsL::synapse0x23b2e00() {
   return (neuron0x23a0300()*-0.40946);
}

double NNfunction_ss_cLsL::synapse0x23b2e40() {
   return (neuron0x23a0640()*0.516971);
}

double NNfunction_ss_cLsL::synapse0x23b2e80() {
   return (neuron0x23a0980()*-0.554601);
}

double NNfunction_ss_cLsL::synapse0x23b3200() {
   return (neuron0x239bd30()*0.202606);
}

double NNfunction_ss_cLsL::synapse0x23b3240() {
   return (neuron0x239bfe0()*-0.149626);
}

double NNfunction_ss_cLsL::synapse0x23b3280() {
   return (neuron0x239c320()*0.188786);
}

double NNfunction_ss_cLsL::synapse0x23b32c0() {
   return (neuron0x239c660()*-1.01236);
}

double NNfunction_ss_cLsL::synapse0x23b3300() {
   return (neuron0x239c9a0()*1.30701);
}

double NNfunction_ss_cLsL::synapse0x23b3340() {
   return (neuron0x239cce0()*-0.350312);
}

double NNfunction_ss_cLsL::synapse0x23b3380() {
   return (neuron0x239d020()*-0.335566);
}

double NNfunction_ss_cLsL::synapse0x23b33c0() {
   return (neuron0x239d360()*0.556497);
}

double NNfunction_ss_cLsL::synapse0x23b3400() {
   return (neuron0x239d6a0()*0.874712);
}

double NNfunction_ss_cLsL::synapse0x23b3440() {
   return (neuron0x239d9e0()*0.112917);
}

double NNfunction_ss_cLsL::synapse0x23b3480() {
   return (neuron0x239dd20()*-0.447071);
}

double NNfunction_ss_cLsL::synapse0x23b34c0() {
   return (neuron0x239e060()*0.750508);
}

double NNfunction_ss_cLsL::synapse0x23b3500() {
   return (neuron0x239e3a0()*0.994988);
}

double NNfunction_ss_cLsL::synapse0x23b3540() {
   return (neuron0x239e6e0()*0.35105);
}

double NNfunction_ss_cLsL::synapse0x23b3580() {
   return (neuron0x239ea20()*0.161325);
}

double NNfunction_ss_cLsL::synapse0x23b35c0() {
   return (neuron0x239ed60()*-1.51656);
}

double NNfunction_ss_cLsL::synapse0x23b3050() {
   return (neuron0x239f0a0()*0.850434);
}

double NNfunction_ss_cLsL::synapse0x23b3090() {
   return (neuron0x239f600()*-0.0948355);
}

double NNfunction_ss_cLsL::synapse0x23b3710() {
   return (neuron0x239f940()*1.0315);
}

double NNfunction_ss_cLsL::synapse0x23b3750() {
   return (neuron0x239fc80()*0.706497);
}

double NNfunction_ss_cLsL::synapse0x23b3790() {
   return (neuron0x239ffc0()*0.479303);
}

double NNfunction_ss_cLsL::synapse0x23b37d0() {
   return (neuron0x23a0300()*0.466102);
}

double NNfunction_ss_cLsL::synapse0x23b3810() {
   return (neuron0x23a0640()*0.0682572);
}

double NNfunction_ss_cLsL::synapse0x23b3850() {
   return (neuron0x23a0980()*-0.80536);
}

double NNfunction_ss_cLsL::synapse0x23b3bd0() {
   return (neuron0x239bd30()*0.0266936);
}

double NNfunction_ss_cLsL::synapse0x23b3c10() {
   return (neuron0x239bfe0()*0.0249057);
}

double NNfunction_ss_cLsL::synapse0x23b3c50() {
   return (neuron0x239c320()*0.350287);
}

double NNfunction_ss_cLsL::synapse0x23b3c90() {
   return (neuron0x239c660()*-1.45271);
}

double NNfunction_ss_cLsL::synapse0x23b3cd0() {
   return (neuron0x239c9a0()*-0.012578);
}

double NNfunction_ss_cLsL::synapse0x23b3d10() {
   return (neuron0x239cce0()*-0.0303736);
}

double NNfunction_ss_cLsL::synapse0x23b3d50() {
   return (neuron0x239d020()*-0.0073661);
}

double NNfunction_ss_cLsL::synapse0x23b3d90() {
   return (neuron0x239d360()*-0.0112785);
}

double NNfunction_ss_cLsL::synapse0x23b3dd0() {
   return (neuron0x239d6a0()*-0.00819647);
}

double NNfunction_ss_cLsL::synapse0x23b3e10() {
   return (neuron0x239d9e0()*-0.0135584);
}

double NNfunction_ss_cLsL::synapse0x23b3e50() {
   return (neuron0x239dd20()*-0.0210666);
}

double NNfunction_ss_cLsL::synapse0x23b3e90() {
   return (neuron0x239e060()*0.15356);
}

double NNfunction_ss_cLsL::synapse0x23b3ed0() {
   return (neuron0x239e3a0()*-0.0159503);
}

double NNfunction_ss_cLsL::synapse0x23b3f10() {
   return (neuron0x239e6e0()*-0.0453212);
}

double NNfunction_ss_cLsL::synapse0x23b3f50() {
   return (neuron0x239ea20()*0.0967288);
}

double NNfunction_ss_cLsL::synapse0x23b3f90() {
   return (neuron0x239ed60()*0.135456);
}

double NNfunction_ss_cLsL::synapse0x23b3a20() {
   return (neuron0x239f0a0()*-0.0313947);
}

double NNfunction_ss_cLsL::synapse0x23b3a60() {
   return (neuron0x239f600()*0.0683443);
}

double NNfunction_ss_cLsL::synapse0x23b40e0() {
   return (neuron0x239f940()*0.0832481);
}

double NNfunction_ss_cLsL::synapse0x23b4120() {
   return (neuron0x239fc80()*-0.0160788);
}

double NNfunction_ss_cLsL::synapse0x23b4160() {
   return (neuron0x239ffc0()*0.00748736);
}

double NNfunction_ss_cLsL::synapse0x23b41a0() {
   return (neuron0x23a0300()*0.00321486);
}

double NNfunction_ss_cLsL::synapse0x23b41e0() {
   return (neuron0x23a0640()*0.00272978);
}

double NNfunction_ss_cLsL::synapse0x23b4220() {
   return (neuron0x23a0980()*-0.00492674);
}

double NNfunction_ss_cLsL::synapse0x23b45a0() {
   return (neuron0x239bd30()*0.0126462);
}

double NNfunction_ss_cLsL::synapse0x23b45e0() {
   return (neuron0x239bfe0()*1.24079);
}

double NNfunction_ss_cLsL::synapse0x23b4620() {
   return (neuron0x239c320()*1.64026);
}

double NNfunction_ss_cLsL::synapse0x23b4660() {
   return (neuron0x239c660()*1.19747);
}

double NNfunction_ss_cLsL::synapse0x23b46a0() {
   return (neuron0x239c9a0()*0.379617);
}

double NNfunction_ss_cLsL::synapse0x23b46e0() {
   return (neuron0x239cce0()*0.465951);
}

double NNfunction_ss_cLsL::synapse0x23b4720() {
   return (neuron0x239d020()*1.13549);
}

double NNfunction_ss_cLsL::synapse0x23b4760() {
   return (neuron0x239d360()*-0.187268);
}

double NNfunction_ss_cLsL::synapse0x23b47a0() {
   return (neuron0x239d6a0()*0.0175915);
}

double NNfunction_ss_cLsL::synapse0x23b47e0() {
   return (neuron0x239d9e0()*-0.756696);
}

double NNfunction_ss_cLsL::synapse0x23b4820() {
   return (neuron0x239dd20()*0.623792);
}

double NNfunction_ss_cLsL::synapse0x23b4860() {
   return (neuron0x239e060()*-0.530484);
}

double NNfunction_ss_cLsL::synapse0x23b48a0() {
   return (neuron0x239e3a0()*-0.61128);
}

double NNfunction_ss_cLsL::synapse0x23b48e0() {
   return (neuron0x239e6e0()*1.00956);
}

double NNfunction_ss_cLsL::synapse0x23b4920() {
   return (neuron0x239ea20()*-0.324743);
}

double NNfunction_ss_cLsL::synapse0x23b4960() {
   return (neuron0x239ed60()*0.23415);
}

double NNfunction_ss_cLsL::synapse0x23b43f0() {
   return (neuron0x239f0a0()*-0.0425428);
}

double NNfunction_ss_cLsL::synapse0x23b4430() {
   return (neuron0x239f600()*0.106488);
}

double NNfunction_ss_cLsL::synapse0x23b4ab0() {
   return (neuron0x239f940()*-0.393848);
}

double NNfunction_ss_cLsL::synapse0x23b4af0() {
   return (neuron0x239fc80()*0.789968);
}

double NNfunction_ss_cLsL::synapse0x23b4b30() {
   return (neuron0x239ffc0()*-0.0586444);
}

double NNfunction_ss_cLsL::synapse0x23b4b70() {
   return (neuron0x23a0300()*0.444107);
}

double NNfunction_ss_cLsL::synapse0x23b4bb0() {
   return (neuron0x23a0640()*-0.457425);
}

double NNfunction_ss_cLsL::synapse0x23b4bf0() {
   return (neuron0x23a0980()*0.348573);
}

double NNfunction_ss_cLsL::synapse0x23b4f70() {
   return (neuron0x239bd30()*-0.123406);
}

double NNfunction_ss_cLsL::synapse0x23b4fb0() {
   return (neuron0x239bfe0()*-0.0297057);
}

double NNfunction_ss_cLsL::synapse0x23b4ff0() {
   return (neuron0x239c320()*-0.259574);
}

double NNfunction_ss_cLsL::synapse0x23b5030() {
   return (neuron0x239c660()*-3.06095);
}

double NNfunction_ss_cLsL::synapse0x23b5070() {
   return (neuron0x239c9a0()*-0.0490994);
}

double NNfunction_ss_cLsL::synapse0x23b50b0() {
   return (neuron0x239cce0()*-0.0298234);
}

double NNfunction_ss_cLsL::synapse0x23b50f0() {
   return (neuron0x239d020()*-0.0165284);
}

double NNfunction_ss_cLsL::synapse0x23b5130() {
   return (neuron0x239d360()*-0.0155708);
}

double NNfunction_ss_cLsL::synapse0x23b5170() {
   return (neuron0x239d6a0()*0.0604939);
}

double NNfunction_ss_cLsL::synapse0x23b51b0() {
   return (neuron0x239d9e0()*-0.00146213);
}

double NNfunction_ss_cLsL::synapse0x23b51f0() {
   return (neuron0x239dd20()*0.11218);
}

double NNfunction_ss_cLsL::synapse0x23b5230() {
   return (neuron0x239e060()*0.0917398);
}

double NNfunction_ss_cLsL::synapse0x23b5270() {
   return (neuron0x239e3a0()*0.412531);
}

double NNfunction_ss_cLsL::synapse0x23b52b0() {
   return (neuron0x239e6e0()*0.065788);
}

double NNfunction_ss_cLsL::synapse0x23b52f0() {
   return (neuron0x239ea20()*-0.0650921);
}

double NNfunction_ss_cLsL::synapse0x23b5330() {
   return (neuron0x239ed60()*-0.0583267);
}

double NNfunction_ss_cLsL::synapse0x23b4dc0() {
   return (neuron0x239f0a0()*0.0810742);
}

double NNfunction_ss_cLsL::synapse0x23b4e00() {
   return (neuron0x239f600()*0.0433729);
}

double NNfunction_ss_cLsL::synapse0x23b5480() {
   return (neuron0x239f940()*-0.0305658);
}

double NNfunction_ss_cLsL::synapse0x23b54c0() {
   return (neuron0x239fc80()*0.0925479);
}

double NNfunction_ss_cLsL::synapse0x23b5500() {
   return (neuron0x239ffc0()*-0.0225926);
}

double NNfunction_ss_cLsL::synapse0x23b5540() {
   return (neuron0x23a0300()*0.0407313);
}

double NNfunction_ss_cLsL::synapse0x23b5580() {
   return (neuron0x23a0640()*-0.0412525);
}

double NNfunction_ss_cLsL::synapse0x23b55c0() {
   return (neuron0x23a0980()*-0.0259099);
}

double NNfunction_ss_cLsL::synapse0x23b5940() {
   return (neuron0x239bd30()*-0.154203);
}

double NNfunction_ss_cLsL::synapse0x23b5980() {
   return (neuron0x239bfe0()*-0.607901);
}

double NNfunction_ss_cLsL::synapse0x23b59c0() {
   return (neuron0x239c320()*0.209165);
}

double NNfunction_ss_cLsL::synapse0x23b5a00() {
   return (neuron0x239c660()*0.367622);
}

double NNfunction_ss_cLsL::synapse0x23b5a40() {
   return (neuron0x239c9a0()*-0.231918);
}

double NNfunction_ss_cLsL::synapse0x23b5a80() {
   return (neuron0x239cce0()*0.187885);
}

double NNfunction_ss_cLsL::synapse0x23b5ac0() {
   return (neuron0x239d020()*-0.268717);
}

double NNfunction_ss_cLsL::synapse0x23b5b00() {
   return (neuron0x239d360()*0.10431);
}

double NNfunction_ss_cLsL::synapse0x23b5b40() {
   return (neuron0x239d6a0()*-0.210086);
}

double NNfunction_ss_cLsL::synapse0x23b5b80() {
   return (neuron0x239d9e0()*-0.379749);
}

double NNfunction_ss_cLsL::synapse0x23b5bc0() {
   return (neuron0x239dd20()*0.497122);
}

double NNfunction_ss_cLsL::synapse0x23b5c00() {
   return (neuron0x239e060()*0.3375);
}

double NNfunction_ss_cLsL::synapse0x23b5c40() {
   return (neuron0x239e3a0()*0.727714);
}

double NNfunction_ss_cLsL::synapse0x23b5c80() {
   return (neuron0x239e6e0()*1.04799);
}

double NNfunction_ss_cLsL::synapse0x23b5cc0() {
   return (neuron0x239ea20()*-0.380065);
}

double NNfunction_ss_cLsL::synapse0x23b5d00() {
   return (neuron0x239ed60()*0.155589);
}

double NNfunction_ss_cLsL::synapse0x23b5790() {
   return (neuron0x239f0a0()*0.0446759);
}

double NNfunction_ss_cLsL::synapse0x23b57d0() {
   return (neuron0x239f600()*-0.198243);
}

double NNfunction_ss_cLsL::synapse0x23b5e50() {
   return (neuron0x239f940()*0.544608);
}

double NNfunction_ss_cLsL::synapse0x23b5e90() {
   return (neuron0x239fc80()*0.2391);
}

double NNfunction_ss_cLsL::synapse0x23b5ed0() {
   return (neuron0x239ffc0()*-1.48505);
}

double NNfunction_ss_cLsL::synapse0x23b5f10() {
   return (neuron0x23a0300()*0.303142);
}

double NNfunction_ss_cLsL::synapse0x23b5f50() {
   return (neuron0x23a0640()*-0.00911908);
}

double NNfunction_ss_cLsL::synapse0x23b5f90() {
   return (neuron0x23a0980()*0.290342);
}

double NNfunction_ss_cLsL::synapse0x23b6310() {
   return (neuron0x239bd30()*0.039304);
}

double NNfunction_ss_cLsL::synapse0x23b6350() {
   return (neuron0x239bfe0()*0.000775985);
}

double NNfunction_ss_cLsL::synapse0x23b6390() {
   return (neuron0x239c320()*0.0532846);
}

double NNfunction_ss_cLsL::synapse0x23b63d0() {
   return (neuron0x239c660()*0.108037);
}

double NNfunction_ss_cLsL::synapse0x23b6410() {
   return (neuron0x239c9a0()*0.0129741);
}

double NNfunction_ss_cLsL::synapse0x23b6450() {
   return (neuron0x239cce0()*0.00489228);
}

double NNfunction_ss_cLsL::synapse0x23b6490() {
   return (neuron0x239d020()*0.0288676);
}

double NNfunction_ss_cLsL::synapse0x23b64d0() {
   return (neuron0x239d360()*0.0188452);
}

double NNfunction_ss_cLsL::synapse0x23b6510() {
   return (neuron0x239d6a0()*-0.0101604);
}

double NNfunction_ss_cLsL::synapse0x23b6550() {
   return (neuron0x239d9e0()*0.0215364);
}

double NNfunction_ss_cLsL::synapse0x23b6590() {
   return (neuron0x239dd20()*0.018627);
}

double NNfunction_ss_cLsL::synapse0x23b65d0() {
   return (neuron0x239e060()*-0.0487045);
}

double NNfunction_ss_cLsL::synapse0x23b6610() {
   return (neuron0x239e3a0()*-2.65466);
}

double NNfunction_ss_cLsL::synapse0x23b6650() {
   return (neuron0x239e6e0()*-0.0554657);
}

double NNfunction_ss_cLsL::synapse0x23b6690() {
   return (neuron0x239ea20()*0.00310525);
}

double NNfunction_ss_cLsL::synapse0x23b66d0() {
   return (neuron0x239ed60()*-0.0138272);
}

double NNfunction_ss_cLsL::synapse0x23b6160() {
   return (neuron0x239f0a0()*-0.0129378);
}

double NNfunction_ss_cLsL::synapse0x23b61a0() {
   return (neuron0x239f600()*-0.0396872);
}

double NNfunction_ss_cLsL::synapse0x23b6820() {
   return (neuron0x239f940()*-0.031484);
}

double NNfunction_ss_cLsL::synapse0x23b6860() {
   return (neuron0x239fc80()*-0.00574466);
}

double NNfunction_ss_cLsL::synapse0x23b68a0() {
   return (neuron0x239ffc0()*-0.0124989);
}

double NNfunction_ss_cLsL::synapse0x23b68e0() {
   return (neuron0x23a0300()*-0.00692836);
}

double NNfunction_ss_cLsL::synapse0x23b6920() {
   return (neuron0x23a0640()*-0.0346302);
}

double NNfunction_ss_cLsL::synapse0x23b6960() {
   return (neuron0x23a0980()*-0.000560066);
}

double NNfunction_ss_cLsL::synapse0x23b6ce0() {
   return (neuron0x239bd30()*0.0196318);
}

double NNfunction_ss_cLsL::synapse0x23b6d20() {
   return (neuron0x239bfe0()*-0.00873552);
}

double NNfunction_ss_cLsL::synapse0x23b6d60() {
   return (neuron0x239c320()*-0.35655);
}

double NNfunction_ss_cLsL::synapse0x23b6da0() {
   return (neuron0x239c660()*-2.24799);
}

double NNfunction_ss_cLsL::synapse0x23b6de0() {
   return (neuron0x239c9a0()*-0.0174168);
}

double NNfunction_ss_cLsL::synapse0x23b6e20() {
   return (neuron0x239cce0()*-0.0272299);
}

double NNfunction_ss_cLsL::synapse0x23b6e60() {
   return (neuron0x239d020()*-0.00470665);
}

double NNfunction_ss_cLsL::synapse0x23b6ea0() {
   return (neuron0x239d360()*0.0110747);
}

double NNfunction_ss_cLsL::synapse0x23b6ee0() {
   return (neuron0x239d6a0()*-0.00336677);
}

double NNfunction_ss_cLsL::synapse0x23b6f20() {
   return (neuron0x239d9e0()*0.0150698);
}

double NNfunction_ss_cLsL::synapse0x23b6f60() {
   return (neuron0x239dd20()*-0.0041584);
}

double NNfunction_ss_cLsL::synapse0x23b6fa0() {
   return (neuron0x239e060()*0.0169025);
}

double NNfunction_ss_cLsL::synapse0x23b6fe0() {
   return (neuron0x239e3a0()*0.0429424);
}

double NNfunction_ss_cLsL::synapse0x23b7020() {
   return (neuron0x239e6e0()*-0.0208548);
}

double NNfunction_ss_cLsL::synapse0x23b7060() {
   return (neuron0x239ea20()*0.0049338);
}

double NNfunction_ss_cLsL::synapse0x23b70a0() {
   return (neuron0x239ed60()*0.0138704);
}

double NNfunction_ss_cLsL::synapse0x23b6b30() {
   return (neuron0x239f0a0()*-0.0193783);
}

double NNfunction_ss_cLsL::synapse0x23b6b70() {
   return (neuron0x239f600()*0.0115282);
}

double NNfunction_ss_cLsL::synapse0x23b71f0() {
   return (neuron0x239f940()*0.0114318);
}

double NNfunction_ss_cLsL::synapse0x23b7230() {
   return (neuron0x239fc80()*-0.00806191);
}

double NNfunction_ss_cLsL::synapse0x23b7270() {
   return (neuron0x239ffc0()*-0.0117375);
}

double NNfunction_ss_cLsL::synapse0x23b72b0() {
   return (neuron0x23a0300()*-0.00716634);
}

double NNfunction_ss_cLsL::synapse0x23b72f0() {
   return (neuron0x23a0640()*0.0105299);
}

double NNfunction_ss_cLsL::synapse0x23b7330() {
   return (neuron0x23a0980()*0.0101187);
}

double NNfunction_ss_cLsL::synapse0x23b76b0() {
   return (neuron0x239bd30()*0.23139);
}

double NNfunction_ss_cLsL::synapse0x23abc80() {
   return (neuron0x239bfe0()*-0.37407);
}

double NNfunction_ss_cLsL::synapse0x23abcc0() {
   return (neuron0x239c320()*-0.973708);
}

double NNfunction_ss_cLsL::synapse0x23abd00() {
   return (neuron0x239c660()*0.827275);
}

double NNfunction_ss_cLsL::synapse0x23abf50() {
   return (neuron0x239c9a0()*0.123976);
}

double NNfunction_ss_cLsL::synapse0x23abf90() {
   return (neuron0x239cce0()*-0.130916);
}

double NNfunction_ss_cLsL::synapse0x23abfd0() {
   return (neuron0x239d020()*0.722337);
}

double NNfunction_ss_cLsL::synapse0x23ac220() {
   return (neuron0x239d360()*0.300682);
}

double NNfunction_ss_cLsL::synapse0x23ac260() {
   return (neuron0x239d6a0()*-0.372691);
}

double NNfunction_ss_cLsL::synapse0x23ac4b0() {
   return (neuron0x239d9e0()*1.5137);
}

double NNfunction_ss_cLsL::synapse0x23ac4f0() {
   return (neuron0x239dd20()*0.603256);
}

double NNfunction_ss_cLsL::synapse0x23ac530() {
   return (neuron0x239e060()*2.01896);
}

double NNfunction_ss_cLsL::synapse0x23ac780() {
   return (neuron0x239e3a0()*-1.47043);
}

double NNfunction_ss_cLsL::synapse0x23ac7c0() {
   return (neuron0x239e6e0()*-0.82601);
}

double NNfunction_ss_cLsL::synapse0x23aca10() {
   return (neuron0x239ea20()*0.411717);
}

double NNfunction_ss_cLsL::synapse0x23aca50() {
   return (neuron0x239ed60()*-0.978287);
}

double NNfunction_ss_cLsL::synapse0x23b7500() {
   return (neuron0x239f0a0()*-0.313764);
}

double NNfunction_ss_cLsL::synapse0x23b7540() {
   return (neuron0x239f600()*0.0129356);
}

double NNfunction_ss_cLsL::synapse0x23acba0() {
   return (neuron0x239f940()*0.69552);
}

double NNfunction_ss_cLsL::synapse0x23ad0b0() {
   return (neuron0x239fc80()*1.01101);
}

double NNfunction_ss_cLsL::synapse0x23ad0f0() {
   return (neuron0x239ffc0()*0.771598);
}

double NNfunction_ss_cLsL::synapse0x23ad130() {
   return (neuron0x23a0300()*-0.64516);
}

double NNfunction_ss_cLsL::synapse0x23ad380() {
   return (neuron0x23a0640()*-0.590938);
}

double NNfunction_ss_cLsL::synapse0x23ad3c0() {
   return (neuron0x23a0980()*0.99996);
}

double NNfunction_ss_cLsL::synapse0x23acc70() {
   return (neuron0x239bd30()*-0.205847);
}

double NNfunction_ss_cLsL::synapse0x23accb0() {
   return (neuron0x239bfe0()*0.0116271);
}

double NNfunction_ss_cLsL::synapse0x23accf0() {
   return (neuron0x239c320()*-0.0606341);
}

double NNfunction_ss_cLsL::synapse0x23acd30() {
   return (neuron0x239c660()*-2.23804);
}

double NNfunction_ss_cLsL::synapse0x23ad6b0() {
   return (neuron0x239c9a0()*0.117583);
}

double NNfunction_ss_cLsL::synapse0x23b9a00() {
   return (neuron0x239cce0()*0.214377);
}

double NNfunction_ss_cLsL::synapse0x23b9a40() {
   return (neuron0x239d020()*0.0308999);
}

double NNfunction_ss_cLsL::synapse0x23b9a80() {
   return (neuron0x239d360()*-0.10636);
}

double NNfunction_ss_cLsL::synapse0x23b9ac0() {
   return (neuron0x239d6a0()*0.00481797);
}

double NNfunction_ss_cLsL::synapse0x23b9b00() {
   return (neuron0x239d9e0()*-0.0339891);
}

double NNfunction_ss_cLsL::synapse0x23b9b40() {
   return (neuron0x239dd20()*0.0849058);
}

double NNfunction_ss_cLsL::synapse0x23b9b80() {
   return (neuron0x239e060()*0.00220265);
}

double NNfunction_ss_cLsL::synapse0x23b9bc0() {
   return (neuron0x239e3a0()*0.0424324);
}

double NNfunction_ss_cLsL::synapse0x23b9c00() {
   return (neuron0x239e6e0()*-0.153766);
}

double NNfunction_ss_cLsL::synapse0x23b9c40() {
   return (neuron0x239ea20()*-0.0585802);
}

double NNfunction_ss_cLsL::synapse0x23b9c80() {
   return (neuron0x239ed60()*0.0346102);
}

double NNfunction_ss_cLsL::synapse0x23ad590() {
   return (neuron0x239f0a0()*-0.267163);
}

double NNfunction_ss_cLsL::synapse0x23ad5d0() {
   return (neuron0x239f600()*-0.0534041);
}

double NNfunction_ss_cLsL::synapse0x23b9dd0() {
   return (neuron0x239f940()*-0.0173046);
}

double NNfunction_ss_cLsL::synapse0x23b9e10() {
   return (neuron0x239fc80()*0.148811);
}

double NNfunction_ss_cLsL::synapse0x23b9e50() {
   return (neuron0x239ffc0()*-0.00748795);
}

double NNfunction_ss_cLsL::synapse0x23b9e90() {
   return (neuron0x23a0300()*0.0547103);
}

double NNfunction_ss_cLsL::synapse0x23b9ed0() {
   return (neuron0x23a0640()*-0.0922667);
}

double NNfunction_ss_cLsL::synapse0x23b9f10() {
   return (neuron0x23a0980()*0.100832);
}

double NNfunction_ss_cLsL::synapse0x23ba290() {
   return (neuron0x239bd30()*0.158814);
}

double NNfunction_ss_cLsL::synapse0x23ba2d0() {
   return (neuron0x239bfe0()*0.585487);
}

double NNfunction_ss_cLsL::synapse0x23ba310() {
   return (neuron0x239c320()*-0.467144);
}

double NNfunction_ss_cLsL::synapse0x23ba350() {
   return (neuron0x239c660()*0.646619);
}

double NNfunction_ss_cLsL::synapse0x23ba390() {
   return (neuron0x239c9a0()*-0.210828);
}

double NNfunction_ss_cLsL::synapse0x23ba3d0() {
   return (neuron0x239cce0()*1.57678);
}

double NNfunction_ss_cLsL::synapse0x23ba410() {
   return (neuron0x239d020()*0.780061);
}

double NNfunction_ss_cLsL::synapse0x23ba450() {
   return (neuron0x239d360()*0.448192);
}

double NNfunction_ss_cLsL::synapse0x23ba490() {
   return (neuron0x239d6a0()*-0.957415);
}

double NNfunction_ss_cLsL::synapse0x23ba4d0() {
   return (neuron0x239d9e0()*0.867815);
}

double NNfunction_ss_cLsL::synapse0x23ba510() {
   return (neuron0x239dd20()*-0.477809);
}

double NNfunction_ss_cLsL::synapse0x23ba550() {
   return (neuron0x239e060()*0.0751334);
}

double NNfunction_ss_cLsL::synapse0x23ba590() {
   return (neuron0x239e3a0()*0.390323);
}

double NNfunction_ss_cLsL::synapse0x23ba5d0() {
   return (neuron0x239e6e0()*0.256713);
}

double NNfunction_ss_cLsL::synapse0x23ba610() {
   return (neuron0x239ea20()*0.38721);
}

double NNfunction_ss_cLsL::synapse0x23ba650() {
   return (neuron0x239ed60()*-0.263241);
}

double NNfunction_ss_cLsL::synapse0x23ba0e0() {
   return (neuron0x239f0a0()*0.410298);
}

double NNfunction_ss_cLsL::synapse0x23ba120() {
   return (neuron0x239f600()*0.331094);
}

double NNfunction_ss_cLsL::synapse0x23ba7a0() {
   return (neuron0x239f940()*-0.278683);
}

double NNfunction_ss_cLsL::synapse0x23ba7e0() {
   return (neuron0x239fc80()*-1.00445);
}

double NNfunction_ss_cLsL::synapse0x23ba820() {
   return (neuron0x239ffc0()*-0.452288);
}

double NNfunction_ss_cLsL::synapse0x23ba860() {
   return (neuron0x23a0300()*0.682225);
}

double NNfunction_ss_cLsL::synapse0x23ba8a0() {
   return (neuron0x23a0640()*0.29455);
}

double NNfunction_ss_cLsL::synapse0x23ba8e0() {
   return (neuron0x23a0980()*-0.242878);
}

double NNfunction_ss_cLsL::synapse0x23bac60() {
   return (neuron0x239bd30()*0.342635);
}

double NNfunction_ss_cLsL::synapse0x23baca0() {
   return (neuron0x239bfe0()*-0.850182);
}

double NNfunction_ss_cLsL::synapse0x23bace0() {
   return (neuron0x239c320()*-1.88621);
}

double NNfunction_ss_cLsL::synapse0x23bad20() {
   return (neuron0x239c660()*-0.0796117);
}

double NNfunction_ss_cLsL::synapse0x23bad60() {
   return (neuron0x239c9a0()*0.347515);
}

double NNfunction_ss_cLsL::synapse0x23bada0() {
   return (neuron0x239cce0()*0.658091);
}

double NNfunction_ss_cLsL::synapse0x23bade0() {
   return (neuron0x239d020()*0.29402);
}

double NNfunction_ss_cLsL::synapse0x23bae20() {
   return (neuron0x239d360()*-1.54046);
}

double NNfunction_ss_cLsL::synapse0x23bae60() {
   return (neuron0x239d6a0()*0.89661);
}

double NNfunction_ss_cLsL::synapse0x23baea0() {
   return (neuron0x239d9e0()*-0.37696);
}

double NNfunction_ss_cLsL::synapse0x23baee0() {
   return (neuron0x239dd20()*-0.554869);
}

double NNfunction_ss_cLsL::synapse0x23baf20() {
   return (neuron0x239e060()*0.856526);
}

double NNfunction_ss_cLsL::synapse0x23baf60() {
   return (neuron0x239e3a0()*-0.801898);
}

double NNfunction_ss_cLsL::synapse0x23bafa0() {
   return (neuron0x239e6e0()*-0.220068);
}

double NNfunction_ss_cLsL::synapse0x23bafe0() {
   return (neuron0x239ea20()*-0.319242);
}

double NNfunction_ss_cLsL::synapse0x23bb020() {
   return (neuron0x239ed60()*-0.975768);
}

double NNfunction_ss_cLsL::synapse0x23baab0() {
   return (neuron0x239f0a0()*-0.936587);
}

double NNfunction_ss_cLsL::synapse0x23baaf0() {
   return (neuron0x239f600()*-0.444807);
}

double NNfunction_ss_cLsL::synapse0x23bb170() {
   return (neuron0x239f940()*-0.979177);
}

double NNfunction_ss_cLsL::synapse0x23bb1b0() {
   return (neuron0x239fc80()*-0.586586);
}

double NNfunction_ss_cLsL::synapse0x23bb1f0() {
   return (neuron0x239ffc0()*1.24391);
}

double NNfunction_ss_cLsL::synapse0x23bb230() {
   return (neuron0x23a0300()*-0.285407);
}

double NNfunction_ss_cLsL::synapse0x23bb270() {
   return (neuron0x23a0640()*-0.0221616);
}

double NNfunction_ss_cLsL::synapse0x23bb2b0() {
   return (neuron0x23a0980()*-0.215844);
}

double NNfunction_ss_cLsL::synapse0x23bb630() {
   return (neuron0x239bd30()*0.337467);
}

double NNfunction_ss_cLsL::synapse0x23bb670() {
   return (neuron0x239bfe0()*-0.265785);
}

double NNfunction_ss_cLsL::synapse0x23bb6b0() {
   return (neuron0x239c320()*0.794144);
}

double NNfunction_ss_cLsL::synapse0x23bb6f0() {
   return (neuron0x239c660()*-1.70562);
}

double NNfunction_ss_cLsL::synapse0x23bb730() {
   return (neuron0x239c9a0()*-0.262634);
}

double NNfunction_ss_cLsL::synapse0x23bb770() {
   return (neuron0x239cce0()*-0.180417);
}

double NNfunction_ss_cLsL::synapse0x23bb7b0() {
   return (neuron0x239d020()*-0.0172178);
}

double NNfunction_ss_cLsL::synapse0x23bb7f0() {
   return (neuron0x239d360()*-0.184136);
}

double NNfunction_ss_cLsL::synapse0x23bb830() {
   return (neuron0x239d6a0()*-0.308416);
}

double NNfunction_ss_cLsL::synapse0x23bb870() {
   return (neuron0x239d9e0()*-0.115591);
}

double NNfunction_ss_cLsL::synapse0x23bb8b0() {
   return (neuron0x239dd20()*0.00645161);
}

double NNfunction_ss_cLsL::synapse0x23bb8f0() {
   return (neuron0x239e060()*0.478897);
}

double NNfunction_ss_cLsL::synapse0x23bb930() {
   return (neuron0x239e3a0()*-0.15335);
}

double NNfunction_ss_cLsL::synapse0x23bb970() {
   return (neuron0x239e6e0()*-0.185619);
}

double NNfunction_ss_cLsL::synapse0x23bb9b0() {
   return (neuron0x239ea20()*0.941141);
}

double NNfunction_ss_cLsL::synapse0x23bb9f0() {
   return (neuron0x239ed60()*-0.288021);
}

double NNfunction_ss_cLsL::synapse0x23bb480() {
   return (neuron0x239f0a0()*0.0833934);
}

double NNfunction_ss_cLsL::synapse0x23bb4c0() {
   return (neuron0x239f600()*0.297852);
}

double NNfunction_ss_cLsL::synapse0x23bbb40() {
   return (neuron0x239f940()*-0.899797);
}

double NNfunction_ss_cLsL::synapse0x23bbb80() {
   return (neuron0x239fc80()*-0.140529);
}

double NNfunction_ss_cLsL::synapse0x23bbbc0() {
   return (neuron0x239ffc0()*-0.18389);
}

double NNfunction_ss_cLsL::synapse0x23bbc00() {
   return (neuron0x23a0300()*-0.259504);
}

double NNfunction_ss_cLsL::synapse0x23bbc40() {
   return (neuron0x23a0640()*0.221696);
}

double NNfunction_ss_cLsL::synapse0x23bbc80() {
   return (neuron0x23a0980()*-0.323652);
}

double NNfunction_ss_cLsL::synapse0x23bc000() {
   return (neuron0x239bd30()*-0.175649);
}

double NNfunction_ss_cLsL::synapse0x23bc040() {
   return (neuron0x239bfe0()*-0.00749669);
}

double NNfunction_ss_cLsL::synapse0x23bc080() {
   return (neuron0x239c320()*0.0405687);
}

double NNfunction_ss_cLsL::synapse0x23bc0c0() {
   return (neuron0x239c660()*-2.17735);
}

double NNfunction_ss_cLsL::synapse0x23bc100() {
   return (neuron0x239c9a0()*-0.000107007);
}

double NNfunction_ss_cLsL::synapse0x23bc140() {
   return (neuron0x239cce0()*-0.0812469);
}

double NNfunction_ss_cLsL::synapse0x23bc180() {
   return (neuron0x239d020()*-0.0680476);
}

double NNfunction_ss_cLsL::synapse0x23bc1c0() {
   return (neuron0x239d360()*-0.0776995);
}

double NNfunction_ss_cLsL::synapse0x23bc200() {
   return (neuron0x239d6a0()*0.06632);
}

double NNfunction_ss_cLsL::synapse0x23bc240() {
   return (neuron0x239d9e0()*-0.00975461);
}

double NNfunction_ss_cLsL::synapse0x23bc280() {
   return (neuron0x239dd20()*0.16404);
}

double NNfunction_ss_cLsL::synapse0x23bc2c0() {
   return (neuron0x239e060()*0.157883);
}

double NNfunction_ss_cLsL::synapse0x23bc300() {
   return (neuron0x239e3a0()*1.18595);
}

double NNfunction_ss_cLsL::synapse0x23bc340() {
   return (neuron0x239e6e0()*-0.0133438);
}

double NNfunction_ss_cLsL::synapse0x23bc380() {
   return (neuron0x239ea20()*0.0408598);
}

double NNfunction_ss_cLsL::synapse0x23bc3c0() {
   return (neuron0x239ed60()*0.0208861);
}

double NNfunction_ss_cLsL::synapse0x23bbe50() {
   return (neuron0x239f0a0()*-0.0449786);
}

double NNfunction_ss_cLsL::synapse0x23bbe90() {
   return (neuron0x239f600()*0.0987112);
}

double NNfunction_ss_cLsL::synapse0x23bc510() {
   return (neuron0x239f940()*-0.0941275);
}

double NNfunction_ss_cLsL::synapse0x23bc550() {
   return (neuron0x239fc80()*0.120309);
}

double NNfunction_ss_cLsL::synapse0x23bc590() {
   return (neuron0x239ffc0()*-0.0704051);
}

double NNfunction_ss_cLsL::synapse0x23bc5d0() {
   return (neuron0x23a0300()*0.0119576);
}

double NNfunction_ss_cLsL::synapse0x23bc610() {
   return (neuron0x23a0640()*-0.13168);
}

double NNfunction_ss_cLsL::synapse0x23bc650() {
   return (neuron0x23a0980()*0.0387894);
}

double NNfunction_ss_cLsL::synapse0x23bc9d0() {
   return (neuron0x239bd30()*-0.00885275);
}

double NNfunction_ss_cLsL::synapse0x23bca10() {
   return (neuron0x239bfe0()*0.0257643);
}

double NNfunction_ss_cLsL::synapse0x23bca50() {
   return (neuron0x239c320()*0.227785);
}

double NNfunction_ss_cLsL::synapse0x23bca90() {
   return (neuron0x239c660()*-0.0117322);
}

double NNfunction_ss_cLsL::synapse0x23bcad0() {
   return (neuron0x239c9a0()*0.0651093);
}

double NNfunction_ss_cLsL::synapse0x23bcb10() {
   return (neuron0x239cce0()*0.306685);
}

double NNfunction_ss_cLsL::synapse0x23bcb50() {
   return (neuron0x239d020()*0.39718);
}

double NNfunction_ss_cLsL::synapse0x23bcb90() {
   return (neuron0x239d360()*0.227069);
}

double NNfunction_ss_cLsL::synapse0x23bcbd0() {
   return (neuron0x239d6a0()*0.497357);
}

double NNfunction_ss_cLsL::synapse0x23bcc10() {
   return (neuron0x239d9e0()*-0.216267);
}

double NNfunction_ss_cLsL::synapse0x23bcc50() {
   return (neuron0x239dd20()*-0.0193691);
}

double NNfunction_ss_cLsL::synapse0x23bcc90() {
   return (neuron0x239e060()*1.02063);
}

double NNfunction_ss_cLsL::synapse0x23bccd0() {
   return (neuron0x239e3a0()*0.00164316);
}

double NNfunction_ss_cLsL::synapse0x23bcd10() {
   return (neuron0x239e6e0()*0.341999);
}

double NNfunction_ss_cLsL::synapse0x23bcd50() {
   return (neuron0x239ea20()*0.493484);
}

double NNfunction_ss_cLsL::synapse0x23bcd90() {
   return (neuron0x239ed60()*-0.0979105);
}

double NNfunction_ss_cLsL::synapse0x23bc820() {
   return (neuron0x239f0a0()*0.0445624);
}

double NNfunction_ss_cLsL::synapse0x23bc860() {
   return (neuron0x239f600()*0.334784);
}

double NNfunction_ss_cLsL::synapse0x23bcee0() {
   return (neuron0x239f940()*0.169183);
}

double NNfunction_ss_cLsL::synapse0x23bcf20() {
   return (neuron0x239fc80()*-0.348763);
}

double NNfunction_ss_cLsL::synapse0x23bcf60() {
   return (neuron0x239ffc0()*1.34889);
}

double NNfunction_ss_cLsL::synapse0x23bcfa0() {
   return (neuron0x23a0300()*0.112295);
}

double NNfunction_ss_cLsL::synapse0x23bcfe0() {
   return (neuron0x23a0640()*-0.264059);
}

double NNfunction_ss_cLsL::synapse0x23bd020() {
   return (neuron0x23a0980()*-0.407532);
}

double NNfunction_ss_cLsL::synapse0x23bd3a0() {
   return (neuron0x239bd30()*-0.301013);
}

double NNfunction_ss_cLsL::synapse0x23bd3e0() {
   return (neuron0x239bfe0()*0.154376);
}

double NNfunction_ss_cLsL::synapse0x23bd420() {
   return (neuron0x239c320()*-0.224313);
}

double NNfunction_ss_cLsL::synapse0x23bd460() {
   return (neuron0x239c660()*-2.01675);
}

double NNfunction_ss_cLsL::synapse0x23bd4a0() {
   return (neuron0x239c9a0()*0.0117402);
}

double NNfunction_ss_cLsL::synapse0x23bd4e0() {
   return (neuron0x239cce0()*-0.499119);
}

double NNfunction_ss_cLsL::synapse0x23bd520() {
   return (neuron0x239d020()*-0.230517);
}

double NNfunction_ss_cLsL::synapse0x23bd560() {
   return (neuron0x239d360()*-0.0750636);
}

double NNfunction_ss_cLsL::synapse0x23bd5a0() {
   return (neuron0x239d6a0()*-0.269827);
}

double NNfunction_ss_cLsL::synapse0x23bd5e0() {
   return (neuron0x239d9e0()*-0.148416);
}

double NNfunction_ss_cLsL::synapse0x23bd620() {
   return (neuron0x239dd20()*-0.344645);
}

double NNfunction_ss_cLsL::synapse0x23bd660() {
   return (neuron0x239e060()*0.206897);
}

double NNfunction_ss_cLsL::synapse0x23bd6a0() {
   return (neuron0x239e3a0()*0.281848);
}

double NNfunction_ss_cLsL::synapse0x23bd6e0() {
   return (neuron0x239e6e0()*-0.382967);
}

double NNfunction_ss_cLsL::synapse0x23bd720() {
   return (neuron0x239ea20()*-0.176583);
}

double NNfunction_ss_cLsL::synapse0x23bd760() {
   return (neuron0x239ed60()*0.043437);
}

double NNfunction_ss_cLsL::synapse0x23bd1f0() {
   return (neuron0x239f0a0()*-0.0556956);
}

double NNfunction_ss_cLsL::synapse0x23bd230() {
   return (neuron0x239f600()*-0.235299);
}

double NNfunction_ss_cLsL::synapse0x23bd8b0() {
   return (neuron0x239f940()*-0.182924);
}

double NNfunction_ss_cLsL::synapse0x23bd8f0() {
   return (neuron0x239fc80()*0.0558211);
}

double NNfunction_ss_cLsL::synapse0x23bd930() {
   return (neuron0x239ffc0()*0.491088);
}

double NNfunction_ss_cLsL::synapse0x23bd970() {
   return (neuron0x23a0300()*0.155321);
}

double NNfunction_ss_cLsL::synapse0x23bd9b0() {
   return (neuron0x23a0640()*0.307025);
}

double NNfunction_ss_cLsL::synapse0x23bd9f0() {
   return (neuron0x23a0980()*0.292469);
}

double NNfunction_ss_cLsL::synapse0x23bdd70() {
   return (neuron0x239bd30()*0.0324718);
}

double NNfunction_ss_cLsL::synapse0x23bddb0() {
   return (neuron0x239bfe0()*-0.00948336);
}

double NNfunction_ss_cLsL::synapse0x23bddf0() {
   return (neuron0x239c320()*0.287069);
}

double NNfunction_ss_cLsL::synapse0x23bde30() {
   return (neuron0x239c660()*-2.52075);
}

double NNfunction_ss_cLsL::synapse0x23bde70() {
   return (neuron0x239c9a0()*0.00121705);
}

double NNfunction_ss_cLsL::synapse0x23bdeb0() {
   return (neuron0x239cce0()*0.0349535);
}

double NNfunction_ss_cLsL::synapse0x23bdef0() {
   return (neuron0x239d020()*0.0112895);
}

double NNfunction_ss_cLsL::synapse0x23bdf30() {
   return (neuron0x239d360()*0.0163473);
}

double NNfunction_ss_cLsL::synapse0x23bdf70() {
   return (neuron0x239d6a0()*0.00537445);
}

double NNfunction_ss_cLsL::synapse0x23bdfb0() {
   return (neuron0x239d9e0()*0.0152698);
}

double NNfunction_ss_cLsL::synapse0x23bdff0() {
   return (neuron0x239dd20()*-0.000283935);
}

double NNfunction_ss_cLsL::synapse0x23be030() {
   return (neuron0x239e060()*-0.152008);
}

double NNfunction_ss_cLsL::synapse0x23be070() {
   return (neuron0x239e3a0()*-0.185249);
}

double NNfunction_ss_cLsL::synapse0x23be0b0() {
   return (neuron0x239e6e0()*0.081092);
}

double NNfunction_ss_cLsL::synapse0x23be0f0() {
   return (neuron0x239ea20()*-0.0293733);
}

double NNfunction_ss_cLsL::synapse0x23be130() {
   return (neuron0x239ed60()*-0.130734);
}

double NNfunction_ss_cLsL::synapse0x23bdbc0() {
   return (neuron0x239f0a0()*0.0949649);
}

double NNfunction_ss_cLsL::synapse0x23bdc00() {
   return (neuron0x239f600()*-0.0591571);
}

double NNfunction_ss_cLsL::synapse0x23be280() {
   return (neuron0x239f940()*-0.108858);
}

double NNfunction_ss_cLsL::synapse0x23be2c0() {
   return (neuron0x239fc80()*-0.0119109);
}

double NNfunction_ss_cLsL::synapse0x23be300() {
   return (neuron0x239ffc0()*-0.00855997);
}

double NNfunction_ss_cLsL::synapse0x23be340() {
   return (neuron0x23a0300()*-0.0292255);
}

double NNfunction_ss_cLsL::synapse0x23be380() {
   return (neuron0x23a0640()*-0.00303043);
}

double NNfunction_ss_cLsL::synapse0x23be3c0() {
   return (neuron0x23a0980()*-0.0241839);
}

double NNfunction_ss_cLsL::synapse0x23a6e70() {
   return (neuron0x239bd30()*0.164808);
}

double NNfunction_ss_cLsL::synapse0x23a6eb0() {
   return (neuron0x239bfe0()*-0.228168);
}

double NNfunction_ss_cLsL::synapse0x23a6ef0() {
   return (neuron0x239c320()*0.774325);
}

double NNfunction_ss_cLsL::synapse0x23a6f30() {
   return (neuron0x239c660()*1.05534);
}

double NNfunction_ss_cLsL::synapse0x23a6f70() {
   return (neuron0x239c9a0()*0.0615295);
}

double NNfunction_ss_cLsL::synapse0x23a6fb0() {
   return (neuron0x239cce0()*0.103532);
}

double NNfunction_ss_cLsL::synapse0x23a6ff0() {
   return (neuron0x239d020()*0.160431);
}

double NNfunction_ss_cLsL::synapse0x23a7030() {
   return (neuron0x239d360()*-0.26516);
}

double NNfunction_ss_cLsL::synapse0x23beb50() {
   return (neuron0x239d6a0()*-0.0880352);
}

double NNfunction_ss_cLsL::synapse0x23beb90() {
   return (neuron0x239d9e0()*0.452118);
}

double NNfunction_ss_cLsL::synapse0x23bebd0() {
   return (neuron0x239dd20()*0.174546);
}

double NNfunction_ss_cLsL::synapse0x23bec10() {
   return (neuron0x239e060()*1.37893);
}

double NNfunction_ss_cLsL::synapse0x23bec50() {
   return (neuron0x239e3a0()*-1.70055);
}

double NNfunction_ss_cLsL::synapse0x23bec90() {
   return (neuron0x239e6e0()*-0.176862);
}

double NNfunction_ss_cLsL::synapse0x23becd0() {
   return (neuron0x239ea20()*1.01533);
}

double NNfunction_ss_cLsL::synapse0x23bed10() {
   return (neuron0x239ed60()*-0.0756213);
}

double NNfunction_ss_cLsL::synapse0x23be590() {
   return (neuron0x239f0a0()*-0.593273);
}

double NNfunction_ss_cLsL::synapse0x23be5d0() {
   return (neuron0x239f600()*0.842305);
}

double NNfunction_ss_cLsL::synapse0x23bee60() {
   return (neuron0x239f940()*0.349575);
}

double NNfunction_ss_cLsL::synapse0x23beea0() {
   return (neuron0x239fc80()*0.316968);
}

double NNfunction_ss_cLsL::synapse0x23beee0() {
   return (neuron0x239ffc0()*-0.1085);
}

double NNfunction_ss_cLsL::synapse0x23bef20() {
   return (neuron0x23a0300()*-0.0349182);
}

double NNfunction_ss_cLsL::synapse0x23bef60() {
   return (neuron0x23a0640()*-0.0608329);
}

double NNfunction_ss_cLsL::synapse0x23befa0() {
   return (neuron0x23a0980()*-0.156366);
}

double NNfunction_ss_cLsL::synapse0x23bf320() {
   return (neuron0x239bd30()*0.241982);
}

double NNfunction_ss_cLsL::synapse0x23bf360() {
   return (neuron0x239bfe0()*0.307056);
}

double NNfunction_ss_cLsL::synapse0x23bf3a0() {
   return (neuron0x239c320()*0.895667);
}

double NNfunction_ss_cLsL::synapse0x23bf3e0() {
   return (neuron0x239c660()*-0.719729);
}

double NNfunction_ss_cLsL::synapse0x23bf420() {
   return (neuron0x239c9a0()*0.815778);
}

double NNfunction_ss_cLsL::synapse0x23bf460() {
   return (neuron0x239cce0()*0.882958);
}

double NNfunction_ss_cLsL::synapse0x23bf4a0() {
   return (neuron0x239d020()*0.589626);
}

double NNfunction_ss_cLsL::synapse0x23bf4e0() {
   return (neuron0x239d360()*1.06165);
}

double NNfunction_ss_cLsL::synapse0x23bf520() {
   return (neuron0x239d6a0()*0.21416);
}

double NNfunction_ss_cLsL::synapse0x23bf560() {
   return (neuron0x239d9e0()*0.281506);
}

double NNfunction_ss_cLsL::synapse0x23bf5a0() {
   return (neuron0x239dd20()*0.54484);
}

double NNfunction_ss_cLsL::synapse0x23bf5e0() {
   return (neuron0x239e060()*1.78372);
}

double NNfunction_ss_cLsL::synapse0x23bf620() {
   return (neuron0x239e3a0()*0.138841);
}

double NNfunction_ss_cLsL::synapse0x23bf660() {
   return (neuron0x239e6e0()*0.626224);
}

double NNfunction_ss_cLsL::synapse0x23bf6a0() {
   return (neuron0x239ea20()*1.55194);
}

double NNfunction_ss_cLsL::synapse0x23bf6e0() {
   return (neuron0x239ed60()*0.55123);
}

double NNfunction_ss_cLsL::synapse0x23bf170() {
   return (neuron0x239f0a0()*-0.0760813);
}

double NNfunction_ss_cLsL::synapse0x23bf1b0() {
   return (neuron0x239f600()*1.28367);
}

double NNfunction_ss_cLsL::synapse0x23bf830() {
   return (neuron0x239f940()*0.702983);
}

double NNfunction_ss_cLsL::synapse0x23bf870() {
   return (neuron0x239fc80()*-1.06087);
}

double NNfunction_ss_cLsL::synapse0x23bf8b0() {
   return (neuron0x239ffc0()*0.145002);
}

double NNfunction_ss_cLsL::synapse0x23bf8f0() {
   return (neuron0x23a0300()*-0.0631117);
}

double NNfunction_ss_cLsL::synapse0x23bf930() {
   return (neuron0x23a0640()*0.0637019);
}

double NNfunction_ss_cLsL::synapse0x23bf970() {
   return (neuron0x23a0980()*-0.166487);
}

double NNfunction_ss_cLsL::synapse0x23bfcf0() {
   return (neuron0x239bd30()*0.798766);
}

double NNfunction_ss_cLsL::synapse0x23bfd30() {
   return (neuron0x239bfe0()*0.535103);
}

double NNfunction_ss_cLsL::synapse0x23bfd70() {
   return (neuron0x239c320()*-0.252602);
}

double NNfunction_ss_cLsL::synapse0x23bfdb0() {
   return (neuron0x239c660()*0.127243);
}

double NNfunction_ss_cLsL::synapse0x23bfdf0() {
   return (neuron0x239c9a0()*-0.297989);
}

double NNfunction_ss_cLsL::synapse0x23bfe30() {
   return (neuron0x239cce0()*0.784417);
}

double NNfunction_ss_cLsL::synapse0x23bfe70() {
   return (neuron0x239d020()*-0.115188);
}

double NNfunction_ss_cLsL::synapse0x23bfeb0() {
   return (neuron0x239d360()*0.918903);
}

double NNfunction_ss_cLsL::synapse0x23bfef0() {
   return (neuron0x239d6a0()*0.128144);
}

double NNfunction_ss_cLsL::synapse0x23bff30() {
   return (neuron0x239d9e0()*-0.718646);
}

double NNfunction_ss_cLsL::synapse0x23bff70() {
   return (neuron0x239dd20()*-0.463861);
}

double NNfunction_ss_cLsL::synapse0x23bffb0() {
   return (neuron0x239e060()*-0.0954065);
}

double NNfunction_ss_cLsL::synapse0x23bfff0() {
   return (neuron0x239e3a0()*0.0920643);
}

double NNfunction_ss_cLsL::synapse0x23c0030() {
   return (neuron0x239e6e0()*0.508164);
}

double NNfunction_ss_cLsL::synapse0x23c0070() {
   return (neuron0x239ea20()*-0.94913);
}

double NNfunction_ss_cLsL::synapse0x23c00b0() {
   return (neuron0x239ed60()*0.502445);
}

double NNfunction_ss_cLsL::synapse0x23bfb40() {
   return (neuron0x239f0a0()*-0.375043);
}

double NNfunction_ss_cLsL::synapse0x23bfb80() {
   return (neuron0x239f600()*-0.0328049);
}

double NNfunction_ss_cLsL::synapse0x23b06b0() {
   return (neuron0x239f940()*-0.670241);
}

double NNfunction_ss_cLsL::synapse0x23b06f0() {
   return (neuron0x239fc80()*-0.131395);
}

double NNfunction_ss_cLsL::synapse0x23b0730() {
   return (neuron0x239ffc0()*0.133188);
}

double NNfunction_ss_cLsL::synapse0x23b0770() {
   return (neuron0x23a0300()*-0.0760904);
}

double NNfunction_ss_cLsL::synapse0x23b07b0() {
   return (neuron0x23a0640()*-0.387557);
}

double NNfunction_ss_cLsL::synapse0x23b07f0() {
   return (neuron0x23a0980()*0.387138);
}

double NNfunction_ss_cLsL::synapse0x23b0b70() {
   return (neuron0x239bd30()*0.000393286);
}

double NNfunction_ss_cLsL::synapse0x23b0bb0() {
   return (neuron0x239bfe0()*-0.00884943);
}

double NNfunction_ss_cLsL::synapse0x23b0bf0() {
   return (neuron0x239c320()*-0.174463);
}

double NNfunction_ss_cLsL::synapse0x23b0c30() {
   return (neuron0x239c660()*8.14287);
}

double NNfunction_ss_cLsL::synapse0x23b0c70() {
   return (neuron0x239c9a0()*0.00831939);
}

double NNfunction_ss_cLsL::synapse0x23b0cb0() {
   return (neuron0x239cce0()*0.0115534);
}

double NNfunction_ss_cLsL::synapse0x23b0cf0() {
   return (neuron0x239d020()*0.0540899);
}

double NNfunction_ss_cLsL::synapse0x23b0d30() {
   return (neuron0x239d360()*-0.0142619);
}

double NNfunction_ss_cLsL::synapse0x23b0d70() {
   return (neuron0x239d6a0()*-0.00511145);
}

double NNfunction_ss_cLsL::synapse0x23b0db0() {
   return (neuron0x239d9e0()*0.00605354);
}

double NNfunction_ss_cLsL::synapse0x23b0df0() {
   return (neuron0x239dd20()*-0.0110386);
}

double NNfunction_ss_cLsL::synapse0x23b0e30() {
   return (neuron0x239e060()*-0.0411128);
}

double NNfunction_ss_cLsL::synapse0x23b0e70() {
   return (neuron0x239e3a0()*-0.397719);
}

double NNfunction_ss_cLsL::synapse0x23b0eb0() {
   return (neuron0x239e6e0()*0.0278565);
}

double NNfunction_ss_cLsL::synapse0x23b0ef0() {
   return (neuron0x239ea20()*0.0167296);
}

double NNfunction_ss_cLsL::synapse0x23b0f30() {
   return (neuron0x239ed60()*0.000740449);
}

double NNfunction_ss_cLsL::synapse0x23b09c0() {
   return (neuron0x239f0a0()*-0.0184679);
}

double NNfunction_ss_cLsL::synapse0x23b0a00() {
   return (neuron0x239f600()*-0.0266412);
}

double NNfunction_ss_cLsL::synapse0x23b1080() {
   return (neuron0x239f940()*-0.00354974);
}

double NNfunction_ss_cLsL::synapse0x23b10c0() {
   return (neuron0x239fc80()*-0.00772253);
}

double NNfunction_ss_cLsL::synapse0x23b1100() {
   return (neuron0x239ffc0()*-0.00823609);
}

double NNfunction_ss_cLsL::synapse0x23b1140() {
   return (neuron0x23a0300()*-0.0105443);
}

double NNfunction_ss_cLsL::synapse0x23b1180() {
   return (neuron0x23a0640()*0.0182404);
}

double NNfunction_ss_cLsL::synapse0x23b11c0() {
   return (neuron0x23a0980()*-0.00853455);
}

double NNfunction_ss_cLsL::synapse0x23b1540() {
   return (neuron0x239bd30()*0.093268);
}

double NNfunction_ss_cLsL::synapse0x23b1580() {
   return (neuron0x239bfe0()*0.0803102);
}

double NNfunction_ss_cLsL::synapse0x23b15c0() {
   return (neuron0x239c320()*0.880392);
}

double NNfunction_ss_cLsL::synapse0x23b1600() {
   return (neuron0x239c660()*3.38687);
}

double NNfunction_ss_cLsL::synapse0x23b1640() {
   return (neuron0x239c9a0()*0.0614898);
}

double NNfunction_ss_cLsL::synapse0x23b1680() {
   return (neuron0x239cce0()*0.101279);
}

double NNfunction_ss_cLsL::synapse0x23b16c0() {
   return (neuron0x239d020()*0.0236389);
}

double NNfunction_ss_cLsL::synapse0x23b1700() {
   return (neuron0x239d360()*-0.0231015);
}

double NNfunction_ss_cLsL::synapse0x23b1740() {
   return (neuron0x239d6a0()*-0.0371272);
}

double NNfunction_ss_cLsL::synapse0x23b1780() {
   return (neuron0x239d9e0()*0.0445061);
}

double NNfunction_ss_cLsL::synapse0x23b17c0() {
   return (neuron0x239dd20()*-0.0351349);
}

double NNfunction_ss_cLsL::synapse0x23b1800() {
   return (neuron0x239e060()*-0.0492272);
}

double NNfunction_ss_cLsL::synapse0x23b1840() {
   return (neuron0x239e3a0()*-0.634203);
}

double NNfunction_ss_cLsL::synapse0x23b1880() {
   return (neuron0x239e6e0()*-0.0432984);
}

double NNfunction_ss_cLsL::synapse0x23b18c0() {
   return (neuron0x239ea20()*0.0541409);
}

double NNfunction_ss_cLsL::synapse0x23b1900() {
   return (neuron0x239ed60()*0.112237);
}

double NNfunction_ss_cLsL::synapse0x23b1390() {
   return (neuron0x239f0a0()*-0.0303436);
}

double NNfunction_ss_cLsL::synapse0x23b13d0() {
   return (neuron0x239f600()*-0.0344328);
}

double NNfunction_ss_cLsL::synapse0x23b1a50() {
   return (neuron0x239f940()*0.0362368);
}

double NNfunction_ss_cLsL::synapse0x23b1a90() {
   return (neuron0x239fc80()*0.00431979);
}

double NNfunction_ss_cLsL::synapse0x23b1ad0() {
   return (neuron0x239ffc0()*0.0102545);
}

double NNfunction_ss_cLsL::synapse0x23b1b10() {
   return (neuron0x23a0300()*0.0149073);
}

double NNfunction_ss_cLsL::synapse0x23b1b50() {
   return (neuron0x23a0640()*-0.0137235);
}

double NNfunction_ss_cLsL::synapse0x23b1b90() {
   return (neuron0x23a0980()*0.056342);
}

double NNfunction_ss_cLsL::synapse0x23b1f10() {
   return (neuron0x239bd30()*0.30872);
}

double NNfunction_ss_cLsL::synapse0x23b1f50() {
   return (neuron0x239bfe0()*-0.760209);
}

double NNfunction_ss_cLsL::synapse0x23b1f90() {
   return (neuron0x239c320()*-0.239662);
}

double NNfunction_ss_cLsL::synapse0x23b1fd0() {
   return (neuron0x239c660()*-0.35381);
}

double NNfunction_ss_cLsL::synapse0x23b2010() {
   return (neuron0x239c9a0()*1.01699);
}

double NNfunction_ss_cLsL::synapse0x23b2050() {
   return (neuron0x239cce0()*0.411207);
}

double NNfunction_ss_cLsL::synapse0x23b2090() {
   return (neuron0x239d020()*-0.195129);
}

double NNfunction_ss_cLsL::synapse0x23b20d0() {
   return (neuron0x239d360()*-0.409708);
}

double NNfunction_ss_cLsL::synapse0x23b2110() {
   return (neuron0x239d6a0()*0.388032);
}

double NNfunction_ss_cLsL::synapse0x23b2150() {
   return (neuron0x239d9e0()*0.811326);
}

double NNfunction_ss_cLsL::synapse0x23b2190() {
   return (neuron0x239dd20()*0.697769);
}

double NNfunction_ss_cLsL::synapse0x23b21d0() {
   return (neuron0x239e060()*-0.406891);
}

double NNfunction_ss_cLsL::synapse0x23b2210() {
   return (neuron0x239e3a0()*-0.457237);
}

double NNfunction_ss_cLsL::synapse0x23b2250() {
   return (neuron0x239e6e0()*-0.25297);
}

double NNfunction_ss_cLsL::synapse0x23b2290() {
   return (neuron0x239ea20()*-0.569977);
}

double NNfunction_ss_cLsL::synapse0x23b22d0() {
   return (neuron0x239ed60()*0.152384);
}

double NNfunction_ss_cLsL::synapse0x23b1d60() {
   return (neuron0x239f0a0()*-0.953198);
}

double NNfunction_ss_cLsL::synapse0x23b1da0() {
   return (neuron0x239f600()*-1.204);
}

double NNfunction_ss_cLsL::synapse0x23b2420() {
   return (neuron0x239f940()*1.21289);
}

double NNfunction_ss_cLsL::synapse0x23b2460() {
   return (neuron0x239fc80()*-0.519297);
}

double NNfunction_ss_cLsL::synapse0x23b24a0() {
   return (neuron0x239ffc0()*0.478192);
}

double NNfunction_ss_cLsL::synapse0x23b24e0() {
   return (neuron0x23a0300()*-1.04506);
}

double NNfunction_ss_cLsL::synapse0x23b2520() {
   return (neuron0x23a0640()*0.947468);
}

double NNfunction_ss_cLsL::synapse0x23b2560() {
   return (neuron0x23a0980()*-0.741082);
}

double NNfunction_ss_cLsL::synapse0x23c4430() {
   return (neuron0x239bd30()*0.359988);
}

double NNfunction_ss_cLsL::synapse0x23c4470() {
   return (neuron0x239bfe0()*0.244016);
}

double NNfunction_ss_cLsL::synapse0x23c44b0() {
   return (neuron0x239c320()*-0.408768);
}

double NNfunction_ss_cLsL::synapse0x23c44f0() {
   return (neuron0x239c660()*0.941233);
}

double NNfunction_ss_cLsL::synapse0x23c4530() {
   return (neuron0x239c9a0()*-0.234021);
}

double NNfunction_ss_cLsL::synapse0x23c4570() {
   return (neuron0x239cce0()*-0.581867);
}

double NNfunction_ss_cLsL::synapse0x23c45b0() {
   return (neuron0x239d020()*0.208854);
}

double NNfunction_ss_cLsL::synapse0x23c45f0() {
   return (neuron0x239d360()*-0.410845);
}

double NNfunction_ss_cLsL::synapse0x23c4630() {
   return (neuron0x239d6a0()*-0.635623);
}

double NNfunction_ss_cLsL::synapse0x23c4670() {
   return (neuron0x239d9e0()*-0.0430597);
}

double NNfunction_ss_cLsL::synapse0x23c46b0() {
   return (neuron0x239dd20()*-0.117686);
}

double NNfunction_ss_cLsL::synapse0x23c46f0() {
   return (neuron0x239e060()*-0.251718);
}

double NNfunction_ss_cLsL::synapse0x23c4730() {
   return (neuron0x239e3a0()*0.863919);
}

double NNfunction_ss_cLsL::synapse0x23c4770() {
   return (neuron0x239e6e0()*-0.00426088);
}

double NNfunction_ss_cLsL::synapse0x23c47b0() {
   return (neuron0x239ea20()*0.0721905);
}

double NNfunction_ss_cLsL::synapse0x23c47f0() {
   return (neuron0x239ed60()*-0.212023);
}

double NNfunction_ss_cLsL::synapse0x23b25a0() {
   return (neuron0x239f0a0()*0.425223);
}

double NNfunction_ss_cLsL::synapse0x23b25e0() {
   return (neuron0x239f600()*0.593169);
}

double NNfunction_ss_cLsL::synapse0x23c4940() {
   return (neuron0x239f940()*-0.647523);
}

double NNfunction_ss_cLsL::synapse0x23c4980() {
   return (neuron0x239fc80()*0.32212);
}

double NNfunction_ss_cLsL::synapse0x23c49c0() {
   return (neuron0x239ffc0()*1.28157);
}

double NNfunction_ss_cLsL::synapse0x23c4a00() {
   return (neuron0x23a0300()*-0.281419);
}

double NNfunction_ss_cLsL::synapse0x23c4a40() {
   return (neuron0x23a0640()*-0.0907426);
}

double NNfunction_ss_cLsL::synapse0x23c4a80() {
   return (neuron0x23a0980()*-0.389551);
}

double NNfunction_ss_cLsL::synapse0x23c4e00() {
   return (neuron0x239bd30()*0.752179);
}

double NNfunction_ss_cLsL::synapse0x23c4e40() {
   return (neuron0x239bfe0()*0.0908151);
}

double NNfunction_ss_cLsL::synapse0x23c4e80() {
   return (neuron0x239c320()*0.324266);
}

double NNfunction_ss_cLsL::synapse0x23c4ec0() {
   return (neuron0x239c660()*-0.662811);
}

double NNfunction_ss_cLsL::synapse0x23c4f00() {
   return (neuron0x239c9a0()*-0.0655156);
}

double NNfunction_ss_cLsL::synapse0x23c4f40() {
   return (neuron0x239cce0()*0.164366);
}

double NNfunction_ss_cLsL::synapse0x23c4f80() {
   return (neuron0x239d020()*0.104748);
}

double NNfunction_ss_cLsL::synapse0x23c4fc0() {
   return (neuron0x239d360()*0.0275722);
}

double NNfunction_ss_cLsL::synapse0x23c5000() {
   return (neuron0x239d6a0()*0.779494);
}

double NNfunction_ss_cLsL::synapse0x23c5040() {
   return (neuron0x239d9e0()*1.00301);
}

double NNfunction_ss_cLsL::synapse0x23c5080() {
   return (neuron0x239dd20()*0.581738);
}

double NNfunction_ss_cLsL::synapse0x23c50c0() {
   return (neuron0x239e060()*-0.249182);
}

double NNfunction_ss_cLsL::synapse0x23c5100() {
   return (neuron0x239e3a0()*-2.25774);
}

double NNfunction_ss_cLsL::synapse0x23c5140() {
   return (neuron0x239e6e0()*0.781519);
}

double NNfunction_ss_cLsL::synapse0x23c5180() {
   return (neuron0x239ea20()*0.54078);
}

double NNfunction_ss_cLsL::synapse0x23c51c0() {
   return (neuron0x239ed60()*-0.398515);
}

double NNfunction_ss_cLsL::synapse0x23c4c50() {
   return (neuron0x239f0a0()*0.180468);
}

double NNfunction_ss_cLsL::synapse0x23c4c90() {
   return (neuron0x239f600()*0.149136);
}

double NNfunction_ss_cLsL::synapse0x23c5310() {
   return (neuron0x239f940()*0.769286);
}

double NNfunction_ss_cLsL::synapse0x23c5350() {
   return (neuron0x239fc80()*0.44179);
}

double NNfunction_ss_cLsL::synapse0x23c5390() {
   return (neuron0x239ffc0()*-0.779435);
}

double NNfunction_ss_cLsL::synapse0x23c53d0() {
   return (neuron0x23a0300()*-0.272329);
}

double NNfunction_ss_cLsL::synapse0x23c5410() {
   return (neuron0x23a0640()*-0.59689);
}

double NNfunction_ss_cLsL::synapse0x23c5450() {
   return (neuron0x23a0980()*-0.31339);
}

double NNfunction_ss_cLsL::synapse0x23c57d0() {
   return (neuron0x239bd30()*0.735696);
}

double NNfunction_ss_cLsL::synapse0x23c5810() {
   return (neuron0x239bfe0()*-0.158371);
}

double NNfunction_ss_cLsL::synapse0x23c5850() {
   return (neuron0x239c320()*0.517148);
}

double NNfunction_ss_cLsL::synapse0x23c5890() {
   return (neuron0x239c660()*-0.376996);
}

double NNfunction_ss_cLsL::synapse0x23c58d0() {
   return (neuron0x239c9a0()*-0.0407859);
}

double NNfunction_ss_cLsL::synapse0x23c5910() {
   return (neuron0x239cce0()*-0.368855);
}

double NNfunction_ss_cLsL::synapse0x23c5950() {
   return (neuron0x239d020()*0.254561);
}

double NNfunction_ss_cLsL::synapse0x23c5990() {
   return (neuron0x239d360()*-0.0854271);
}

double NNfunction_ss_cLsL::synapse0x23c59d0() {
   return (neuron0x239d6a0()*-0.702964);
}

double NNfunction_ss_cLsL::synapse0x23c5a10() {
   return (neuron0x239d9e0()*1.04882);
}

double NNfunction_ss_cLsL::synapse0x23c5a50() {
   return (neuron0x239dd20()*0.214969);
}

double NNfunction_ss_cLsL::synapse0x23c5a90() {
   return (neuron0x239e060()*-0.729231);
}

double NNfunction_ss_cLsL::synapse0x23c5ad0() {
   return (neuron0x239e3a0()*0.0258825);
}

double NNfunction_ss_cLsL::synapse0x23c5b10() {
   return (neuron0x239e6e0()*0.0250866);
}

double NNfunction_ss_cLsL::synapse0x23c5b50() {
   return (neuron0x239ea20()*-0.0658927);
}

double NNfunction_ss_cLsL::synapse0x23c5b90() {
   return (neuron0x239ed60()*0.591839);
}

double NNfunction_ss_cLsL::synapse0x23c5620() {
   return (neuron0x239f0a0()*-0.0257427);
}

double NNfunction_ss_cLsL::synapse0x23c5660() {
   return (neuron0x239f600()*0.353458);
}

double NNfunction_ss_cLsL::synapse0x23c5ce0() {
   return (neuron0x239f940()*0.388194);
}

double NNfunction_ss_cLsL::synapse0x23c5d20() {
   return (neuron0x239fc80()*0.449565);
}

double NNfunction_ss_cLsL::synapse0x23c5d60() {
   return (neuron0x239ffc0()*-0.062916);
}

double NNfunction_ss_cLsL::synapse0x23c5da0() {
   return (neuron0x23a0300()*-0.0780536);
}

double NNfunction_ss_cLsL::synapse0x23c5de0() {
   return (neuron0x23a0640()*0.0290654);
}

double NNfunction_ss_cLsL::synapse0x23c5e20() {
   return (neuron0x23a0980()*0.0528924);
}

double NNfunction_ss_cLsL::synapse0x23c61a0() {
   return (neuron0x239bd30()*-0.301563);
}

double NNfunction_ss_cLsL::synapse0x23c61e0() {
   return (neuron0x239bfe0()*-0.676081);
}

double NNfunction_ss_cLsL::synapse0x23c6220() {
   return (neuron0x239c320()*0.159766);
}

double NNfunction_ss_cLsL::synapse0x23c6260() {
   return (neuron0x239c660()*-0.330852);
}

double NNfunction_ss_cLsL::synapse0x23c62a0() {
   return (neuron0x239c9a0()*-0.677569);
}

double NNfunction_ss_cLsL::synapse0x23c62e0() {
   return (neuron0x239cce0()*1.14238);
}

double NNfunction_ss_cLsL::synapse0x23c6320() {
   return (neuron0x239d020()*0.240443);
}

double NNfunction_ss_cLsL::synapse0x23c6360() {
   return (neuron0x239d360()*-0.107603);
}

double NNfunction_ss_cLsL::synapse0x23c63a0() {
   return (neuron0x239d6a0()*-0.993308);
}

double NNfunction_ss_cLsL::synapse0x23c63e0() {
   return (neuron0x239d9e0()*0.391772);
}

double NNfunction_ss_cLsL::synapse0x23c6420() {
   return (neuron0x239dd20()*-0.41221);
}

double NNfunction_ss_cLsL::synapse0x23c6460() {
   return (neuron0x239e060()*0.136178);
}

double NNfunction_ss_cLsL::synapse0x23c64a0() {
   return (neuron0x239e3a0()*0.173034);
}

double NNfunction_ss_cLsL::synapse0x23c64e0() {
   return (neuron0x239e6e0()*0.300775);
}

double NNfunction_ss_cLsL::synapse0x23c6520() {
   return (neuron0x239ea20()*0.594558);
}

double NNfunction_ss_cLsL::synapse0x23c6560() {
   return (neuron0x239ed60()*-1.25276);
}

double NNfunction_ss_cLsL::synapse0x23c5ff0() {
   return (neuron0x239f0a0()*-0.400182);
}

double NNfunction_ss_cLsL::synapse0x23c6030() {
   return (neuron0x239f600()*-1.81487);
}

double NNfunction_ss_cLsL::synapse0x23c66b0() {
   return (neuron0x239f940()*0.106068);
}

double NNfunction_ss_cLsL::synapse0x23c66f0() {
   return (neuron0x239fc80()*-0.215468);
}

double NNfunction_ss_cLsL::synapse0x23c6730() {
   return (neuron0x239ffc0()*-0.154804);
}

double NNfunction_ss_cLsL::synapse0x23c6770() {
   return (neuron0x23a0300()*-0.418657);
}

double NNfunction_ss_cLsL::synapse0x23c67b0() {
   return (neuron0x23a0640()*0.412535);
}

double NNfunction_ss_cLsL::synapse0x23c67f0() {
   return (neuron0x23a0980()*0.0834411);
}

double NNfunction_ss_cLsL::synapse0x2166660() {
   return (neuron0x23a0df0()*0.00215001);
}

double NNfunction_ss_cLsL::synapse0x21666a0() {
   return (neuron0x23a1630()*-0.130199);
}

double NNfunction_ss_cLsL::synapse0x23a31a0() {
   return (neuron0x23a2110()*-0.0876636);
}

double NNfunction_ss_cLsL::synapse0x23a31e0() {
   return (neuron0x23a1bb0()*1.08816);
}

double NNfunction_ss_cLsL::synapse0x23a4c70() {
   return (neuron0x23a2ef0()*-0.246031);
}

double NNfunction_ss_cLsL::synapse0x23a4cb0() {
   return (neuron0x23a49c0()*0.0940883);
}

double NNfunction_ss_cLsL::synapse0x23a5a40() {
   return (neuron0x23a5790()*0.914601);
}

double NNfunction_ss_cLsL::synapse0x23a5a80() {
   return (neuron0x23a6160()*0.286326);
}

double NNfunction_ss_cLsL::synapse0x23a6410() {
   return (neuron0x23a6b30()*0.883342);
}

double NNfunction_ss_cLsL::synapse0x23a6450() {
   return (neuron0x23a7610()*-0.0316975);
}

double NNfunction_ss_cLsL::synapse0x23a6de0() {
   return (neuron0x23a7fe0()*0.580195);
}

double NNfunction_ss_cLsL::synapse0x23a6e20() {
   return (neuron0x23a50c0()*-0.0551668);
}

double NNfunction_ss_cLsL::synapse0x23a78c0() {
   return (neuron0x23a9b90()*-0.164593);
}

double NNfunction_ss_cLsL::synapse0x23a7900() {
   return (neuron0x23aa560()*-0.384541);
}

double NNfunction_ss_cLsL::synapse0x23a8290() {
   return (neuron0x23aaf30()*0.223598);
}

double NNfunction_ss_cLsL::synapse0x23a82d0() {
   return (neuron0x23ab900()*-0.095759);
}

double NNfunction_ss_cLsL::synapse0x23a5370() {
   return (neuron0x23ad710()*0.124269);
}

double NNfunction_ss_cLsL::synapse0x23a53b0() {
   return (neuron0x23ad9f0()*0.927499);
}

double NNfunction_ss_cLsL::synapse0x23a9e40() {
   return (neuron0x23ae3c0()*0.00527322);
}

double NNfunction_ss_cLsL::synapse0x23a9e80() {
   return (neuron0x23aed90()*0.0402202);
}

double NNfunction_ss_cLsL::synapse0x23aa810() {
   return (neuron0x23af760()*-0.0177115);
}

double NNfunction_ss_cLsL::synapse0x23aa850() {
   return (neuron0x23b0130()*1.32342);
}

double NNfunction_ss_cLsL::synapse0x23ab1e0() {
   return (neuron0x23a8c80()*-0.035031);
}

double NNfunction_ss_cLsL::synapse0x23ab220() {
   return (neuron0x23a9650()*-0.0759546);
}

double NNfunction_ss_cLsL::synapse0x23abbb0() {
   return (neuron0x23b2ec0()*-0.0400007);
}

double NNfunction_ss_cLsL::synapse0x23abbf0() {
   return (neuron0x23b3890()*-2.29452);
}

double NNfunction_ss_cLsL::synapse0x239ec40() {
   return (neuron0x23b4260()*0.00940364);
}

double NNfunction_ss_cLsL::synapse0x239ec80() {
   return (neuron0x23b4c30()*0.953705);
}

double NNfunction_ss_cLsL::synapse0x23adca0() {
   return (neuron0x23b5600()*-0.0929858);
}

double NNfunction_ss_cLsL::synapse0x23adce0() {
   return (neuron0x23b5fd0()*-1.78797);
}

double NNfunction_ss_cLsL::synapse0x23ae670() {
   return (neuron0x23b69a0()*-2.05168);
}

double NNfunction_ss_cLsL::synapse0x23ae6b0() {
   return (neuron0x23b7370()*0.0207357);
}

double NNfunction_ss_cLsL::synapse0x23af040() {
   return (neuron0x23ad400()*-1.19339);
}

double NNfunction_ss_cLsL::synapse0x23af080() {
   return (neuron0x23b9f50()*-0.0415404);
}

double NNfunction_ss_cLsL::synapse0x23afa10() {
   return (neuron0x23ba920()*0.090707);
}

double NNfunction_ss_cLsL::synapse0x23afa50() {
   return (neuron0x23bb2f0()*-0.264105);
}

double NNfunction_ss_cLsL::synapse0x23b03e0() {
   return (neuron0x23bbcc0()*0.236183);
}

double NNfunction_ss_cLsL::synapse0x23b0420() {
   return (neuron0x23bc690()*-0.114027);
}

double NNfunction_ss_cLsL::synapse0x23a8f30() {
   return (neuron0x23bd060()*-0.498532);
}

double NNfunction_ss_cLsL::synapse0x23a8f70() {
   return (neuron0x23bda30()*-2.31675);
}

double NNfunction_ss_cLsL::synapse0x23b27e0() {
   return (neuron0x23be400()*0.156802);
}

double NNfunction_ss_cLsL::synapse0x23b2820() {
   return (neuron0x23befe0()*-0.0407669);
}

double NNfunction_ss_cLsL::synapse0x23b3170() {
   return (neuron0x23bf9b0()*-0.0982198);
}

double NNfunction_ss_cLsL::synapse0x23b31b0() {
   return (neuron0x23b0830()*2.55407);
}

double NNfunction_ss_cLsL::synapse0x23b3b40() {
   return (neuron0x23b1200()*1.20261);
}

double NNfunction_ss_cLsL::synapse0x23b3b80() {
   return (neuron0x23b1bd0()*-0.0431446);
}

double NNfunction_ss_cLsL::synapse0x23b4510() {
   return (neuron0x23c4210()*0.0402118);
}

double NNfunction_ss_cLsL::synapse0x23b4550() {
   return (neuron0x23c4ac0()*-0.13197);
}

double NNfunction_ss_cLsL::synapse0x23b4ee0() {
   return (neuron0x23c5490()*-0.0622711);
}

double NNfunction_ss_cLsL::synapse0x23b4f20() {
   return (neuron0x23c5e60()*0.0596323);
}

double NNfunction_ss_cLsL::synapse0x23b7620() {
   return (neuron0x23a0df0()*0.020853);
}

double NNfunction_ss_cLsL::synapse0x23b7660() {
   return (neuron0x23a1630()*-0.0732382);
}

double NNfunction_ss_cLsL::synapse0x23acbe0() {
   return (neuron0x23a2110()*0.0546178);
}

double NNfunction_ss_cLsL::synapse0x23acc20() {
   return (neuron0x23a1bb0()*0.123768);
}

double NNfunction_ss_cLsL::synapse0x23ba200() {
   return (neuron0x23a2ef0()*0.0590918);
}

double NNfunction_ss_cLsL::synapse0x23ba240() {
   return (neuron0x23a49c0()*0.0627612);
}

double NNfunction_ss_cLsL::synapse0x23babd0() {
   return (neuron0x23a5790()*-0.321913);
}

double NNfunction_ss_cLsL::synapse0x23bac10() {
   return (neuron0x23a6160()*-0.112098);
}

double NNfunction_ss_cLsL::synapse0x23bb5a0() {
   return (neuron0x23a6b30()*-0.143325);
}

double NNfunction_ss_cLsL::synapse0x23bb5e0() {
   return (neuron0x23a7610()*-0.0258799);
}

double NNfunction_ss_cLsL::synapse0x23bbf70() {
   return (neuron0x23a7fe0()*0.224903);
}

double NNfunction_ss_cLsL::synapse0x23bbfb0() {
   return (neuron0x23a50c0()*-0.0805056);
}

double NNfunction_ss_cLsL::synapse0x23bc940() {
   return (neuron0x23a9b90()*-0.0887669);
}

double NNfunction_ss_cLsL::synapse0x23bc980() {
   return (neuron0x23aa560()*-0.422258);
}

double NNfunction_ss_cLsL::synapse0x23bd310() {
   return (neuron0x23aaf30()*-0.0651229);
}

double NNfunction_ss_cLsL::synapse0x23bd350() {
   return (neuron0x23ab900()*0.0898241);
}

double NNfunction_ss_cLsL::synapse0x23bdce0() {
   return (neuron0x23ad710()*0.0582841);
}

double NNfunction_ss_cLsL::synapse0x23bdd20() {
   return (neuron0x23ad9f0()*-0.0676456);
}

double NNfunction_ss_cLsL::synapse0x23be6b0() {
   return (neuron0x23ae3c0()*0.0465234);
}

double NNfunction_ss_cLsL::synapse0x23be6f0() {
   return (neuron0x23aed90()*0.053508);
}

double NNfunction_ss_cLsL::synapse0x23bf290() {
   return (neuron0x23af760()*-0.35367);
}

double NNfunction_ss_cLsL::synapse0x23bf2d0() {
   return (neuron0x23b0130()*-0.428358);
}

double NNfunction_ss_cLsL::synapse0x23bfc60() {
   return (neuron0x23a8c80()*0.00716624);
}

double NNfunction_ss_cLsL::synapse0x23bfca0() {
   return (neuron0x23a9650()*0.0529249);
}

double NNfunction_ss_cLsL::synapse0x23b0ae0() {
   return (neuron0x23b2ec0()*0.0307272);
}

double NNfunction_ss_cLsL::synapse0x23b0b20() {
   return (neuron0x23b3890()*1.36377);
}

double NNfunction_ss_cLsL::synapse0x23b14b0() {
   return (neuron0x23b4260()*0.0328073);
}

double NNfunction_ss_cLsL::synapse0x23b14f0() {
   return (neuron0x23b4c30()*-0.0124627);
}

double NNfunction_ss_cLsL::synapse0x23b1e80() {
   return (neuron0x23b5600()*-0.0723109);
}

double NNfunction_ss_cLsL::synapse0x23b1ec0() {
   return (neuron0x23b5fd0()*0.436244);
}

double NNfunction_ss_cLsL::synapse0x23c43a0() {
   return (neuron0x23b69a0()*1.83322);
}

double NNfunction_ss_cLsL::synapse0x23c43e0() {
   return (neuron0x23b7370()*0.0324274);
}

double NNfunction_ss_cLsL::synapse0x23c4d70() {
   return (neuron0x23ad400()*0.196111);
}

double NNfunction_ss_cLsL::synapse0x23c4db0() {
   return (neuron0x23b9f50()*0.0421093);
}

double NNfunction_ss_cLsL::synapse0x23c5740() {
   return (neuron0x23ba920()*-0.0344055);
}

double NNfunction_ss_cLsL::synapse0x23c5780() {
   return (neuron0x23bb2f0()*-0.0896674);
}

double NNfunction_ss_cLsL::synapse0x23c6110() {
   return (neuron0x23bbcc0()*-1.83543);
}

double NNfunction_ss_cLsL::synapse0x23c6150() {
   return (neuron0x23bc690()*-0.0873797);
}

double NNfunction_ss_cLsL::synapse0x23a10a0() {
   return (neuron0x23bd060()*-0.0204465);
}

double NNfunction_ss_cLsL::synapse0x23a10e0() {
   return (neuron0x23bda30()*1.40578);
}

double NNfunction_ss_cLsL::synapse0x23b58b0() {
   return (neuron0x23be400()*0.00978836);
}

double NNfunction_ss_cLsL::synapse0x23b58f0() {
   return (neuron0x23befe0()*0.0202693);
}

double NNfunction_ss_cLsL::synapse0x23c6830() {
   return (neuron0x23bf9b0()*-0.0578857);
}

double NNfunction_ss_cLsL::synapse0x23c6870() {
   return (neuron0x23b0830()*-0.833162);
}

double NNfunction_ss_cLsL::synapse0x23c68b0() {
   return (neuron0x23b1200()*-0.0241562);
}

double NNfunction_ss_cLsL::synapse0x23c68f0() {
   return (neuron0x23b1bd0()*0.0296146);
}

double NNfunction_ss_cLsL::synapse0x23cd7a0() {
   return (neuron0x23c4210()*-0.0620117);
}

double NNfunction_ss_cLsL::synapse0x23cd7e0() {
   return (neuron0x23c4ac0()*0.0370428);
}

double NNfunction_ss_cLsL::synapse0x23cd820() {
   return (neuron0x23c5490()*-0.0776283);
}

double NNfunction_ss_cLsL::synapse0x23cd860() {
   return (neuron0x23c5e60()*-0.025716);
}

double NNfunction_ss_cLsL::synapse0x23cdbe0() {
   return (neuron0x23a0df0()*1.60822);
}

double NNfunction_ss_cLsL::synapse0x23cdc20() {
   return (neuron0x23a1630()*-1.8032);
}

double NNfunction_ss_cLsL::synapse0x23cdc60() {
   return (neuron0x23a2110()*2.28473);
}

double NNfunction_ss_cLsL::synapse0x23cdca0() {
   return (neuron0x23a1bb0()*5.31239);
}

double NNfunction_ss_cLsL::synapse0x23cdce0() {
   return (neuron0x23a2ef0()*1.80241);
}

double NNfunction_ss_cLsL::synapse0x23cdd20() {
   return (neuron0x23a49c0()*1.97551);
}

double NNfunction_ss_cLsL::synapse0x23cdd60() {
   return (neuron0x23a5790()*-0.773389);
}

double NNfunction_ss_cLsL::synapse0x23cdda0() {
   return (neuron0x23a6160()*-2.98604);
}

double NNfunction_ss_cLsL::synapse0x23cdde0() {
   return (neuron0x23a6b30()*2.29085);
}

double NNfunction_ss_cLsL::synapse0x23cde20() {
   return (neuron0x23a7610()*-1.42209);
}

double NNfunction_ss_cLsL::synapse0x23cde60() {
   return (neuron0x23a7fe0()*3.07458);
}

double NNfunction_ss_cLsL::synapse0x23cdea0() {
   return (neuron0x23a50c0()*-2.04623);
}

double NNfunction_ss_cLsL::synapse0x23cdee0() {
   return (neuron0x23a9b90()*-3.23986);
}

double NNfunction_ss_cLsL::synapse0x23cdf20() {
   return (neuron0x23aa560()*-1.58335);
}

double NNfunction_ss_cLsL::synapse0x23cdf60() {
   return (neuron0x23aaf30()*-1.95798);
}

double NNfunction_ss_cLsL::synapse0x23cdfa0() {
   return (neuron0x23ab900()*2.6525);
}

double NNfunction_ss_cLsL::synapse0x23cda30() {
   return (neuron0x23ad710()*1.91749);
}

double NNfunction_ss_cLsL::synapse0x23cda70() {
   return (neuron0x23ad9f0()*3.20615);
}

double NNfunction_ss_cLsL::synapse0x23ce0f0() {
   return (neuron0x23ae3c0()*1.50712);
}

double NNfunction_ss_cLsL::synapse0x23ce130() {
   return (neuron0x23aed90()*1.52271);
}

double NNfunction_ss_cLsL::synapse0x23ce170() {
   return (neuron0x23af760()*-1.31824);
}

double NNfunction_ss_cLsL::synapse0x23ce1b0() {
   return (neuron0x23b0130()*-3.40892);
}

double NNfunction_ss_cLsL::synapse0x23ce1f0() {
   return (neuron0x23a8c80()*0.949829);
}

double NNfunction_ss_cLsL::synapse0x23ce230() {
   return (neuron0x23a9650()*1.55636);
}

double NNfunction_ss_cLsL::synapse0x23ce270() {
   return (neuron0x23b2ec0()*0.541752);
}

double NNfunction_ss_cLsL::synapse0x23ce2b0() {
   return (neuron0x23b3890()*0.146819);
}

double NNfunction_ss_cLsL::synapse0x23ce2f0() {
   return (neuron0x23b4260()*1.16382);
}

double NNfunction_ss_cLsL::synapse0x23ce330() {
   return (neuron0x23b4c30()*3.16568);
}

double NNfunction_ss_cLsL::synapse0x23ce370() {
   return (neuron0x23b5600()*-2.21452);
}

double NNfunction_ss_cLsL::synapse0x23ce3b0() {
   return (neuron0x23b5fd0()*-3.17046);
}

double NNfunction_ss_cLsL::synapse0x23ce3f0() {
   return (neuron0x23b69a0()*-0.949826);
}

double NNfunction_ss_cLsL::synapse0x23ce430() {
   return (neuron0x23b7370()*1.39681);
}

double NNfunction_ss_cLsL::synapse0x23cdfe0() {
   return (neuron0x23ad400()*-1.80757);
}

double NNfunction_ss_cLsL::synapse0x23ce020() {
   return (neuron0x23b9f50()*1.27646);
}

double NNfunction_ss_cLsL::synapse0x23ce060() {
   return (neuron0x23ba920()*-1.17609);
}

double NNfunction_ss_cLsL::synapse0x23ce0a0() {
   return (neuron0x23bb2f0()*-1.88244);
}

double NNfunction_ss_cLsL::synapse0x23ce680() {
   return (neuron0x23bbcc0()*-5.41574);
}

double NNfunction_ss_cLsL::synapse0x23ce6c0() {
   return (neuron0x23bc690()*-2.15907);
}

double NNfunction_ss_cLsL::synapse0x23ce700() {
   return (neuron0x23bd060()*-0.0969369);
}

double NNfunction_ss_cLsL::synapse0x23ce740() {
   return (neuron0x23bda30()*-1.35368);
}

double NNfunction_ss_cLsL::synapse0x23ce780() {
   return (neuron0x23be400()*0.824423);
}

double NNfunction_ss_cLsL::synapse0x23ce7c0() {
   return (neuron0x23befe0()*1.44022);
}

double NNfunction_ss_cLsL::synapse0x23ce800() {
   return (neuron0x23bf9b0()*-1.3809);
}

double NNfunction_ss_cLsL::synapse0x23ce840() {
   return (neuron0x23b0830()*-1.28408);
}

double NNfunction_ss_cLsL::synapse0x23ce880() {
   return (neuron0x23b1200()*0.828586);
}

double NNfunction_ss_cLsL::synapse0x23ce8c0() {
   return (neuron0x23b1bd0()*1.58663);
}

double NNfunction_ss_cLsL::synapse0x23ce900() {
   return (neuron0x23c4210()*-2.18087);
}

double NNfunction_ss_cLsL::synapse0x23ce940() {
   return (neuron0x23c4ac0()*1.44982);
}

double NNfunction_ss_cLsL::synapse0x23ce980() {
   return (neuron0x23c5490()*-2.06407);
}

double NNfunction_ss_cLsL::synapse0x23ce9c0() {
   return (neuron0x23c5e60()*-1.18461);
}

double NNfunction_ss_cLsL::synapse0x23ced40() {
   return (neuron0x23a0df0()*0.828818);
}

double NNfunction_ss_cLsL::synapse0x23ced80() {
   return (neuron0x23a1630()*0.755036);
}

double NNfunction_ss_cLsL::synapse0x23cedc0() {
   return (neuron0x23a2110()*0.305536);
}

double NNfunction_ss_cLsL::synapse0x23cee00() {
   return (neuron0x23a1bb0()*0.293013);
}

double NNfunction_ss_cLsL::synapse0x23cee40() {
   return (neuron0x23a2ef0()*2.65849);
}

double NNfunction_ss_cLsL::synapse0x23cee80() {
   return (neuron0x23a49c0()*-0.0291312);
}

double NNfunction_ss_cLsL::synapse0x23ceec0() {
   return (neuron0x23a5790()*-0.251388);
}

double NNfunction_ss_cLsL::synapse0x23cef00() {
   return (neuron0x23a6160()*-0.0855599);
}

double NNfunction_ss_cLsL::synapse0x23cef40() {
   return (neuron0x23a6b30()*1.14836);
}

double NNfunction_ss_cLsL::synapse0x23cef80() {
   return (neuron0x23a7610()*0.429726);
}

double NNfunction_ss_cLsL::synapse0x23cefc0() {
   return (neuron0x23a7fe0()*-0.587829);
}

double NNfunction_ss_cLsL::synapse0x23cf000() {
   return (neuron0x23a50c0()*-0.0515549);
}

double NNfunction_ss_cLsL::synapse0x23cf040() {
   return (neuron0x23a9b90()*0.437617);
}

double NNfunction_ss_cLsL::synapse0x23cf080() {
   return (neuron0x23aa560()*1.58075);
}

double NNfunction_ss_cLsL::synapse0x23cf0c0() {
   return (neuron0x23aaf30()*-1.08323);
}

double NNfunction_ss_cLsL::synapse0x23cf100() {
   return (neuron0x23ab900()*-0.186221);
}

double NNfunction_ss_cLsL::synapse0x23ceb90() {
   return (neuron0x23ad710()*0.403075);
}

double NNfunction_ss_cLsL::synapse0x23cebd0() {
   return (neuron0x23ad9f0()*-0.0890521);
}

double NNfunction_ss_cLsL::synapse0x23cf250() {
   return (neuron0x23ae3c0()*-0.0456511);
}

double NNfunction_ss_cLsL::synapse0x23cf290() {
   return (neuron0x23aed90()*0.975125);
}

double NNfunction_ss_cLsL::synapse0x23cf2d0() {
   return (neuron0x23af760()*0.0536161);
}

double NNfunction_ss_cLsL::synapse0x23cf310() {
   return (neuron0x23b0130()*-0.265825);
}

double NNfunction_ss_cLsL::synapse0x23cf350() {
   return (neuron0x23a8c80()*-1.24063);
}

double NNfunction_ss_cLsL::synapse0x23cf390() {
   return (neuron0x23a9650()*-1.31027);
}

double NNfunction_ss_cLsL::synapse0x23cf3d0() {
   return (neuron0x23b2ec0()*0.535129);
}

double NNfunction_ss_cLsL::synapse0x23cf410() {
   return (neuron0x23b3890()*1.10014);
}

double NNfunction_ss_cLsL::synapse0x23cf450() {
   return (neuron0x23b4260()*0.964075);
}

double NNfunction_ss_cLsL::synapse0x23cf490() {
   return (neuron0x23b4c30()*0.833717);
}

double NNfunction_ss_cLsL::synapse0x23cf4d0() {
   return (neuron0x23b5600()*0.268834);
}

double NNfunction_ss_cLsL::synapse0x23cf510() {
   return (neuron0x23b5fd0()*0.944096);
}

double NNfunction_ss_cLsL::synapse0x23cf550() {
   return (neuron0x23b69a0()*0.663149);
}

double NNfunction_ss_cLsL::synapse0x23cf590() {
   return (neuron0x23b7370()*0.630872);
}

double NNfunction_ss_cLsL::synapse0x23cf140() {
   return (neuron0x23ad400()*0.12617);
}

double NNfunction_ss_cLsL::synapse0x23cf180() {
   return (neuron0x23b9f50()*1.40908);
}

double NNfunction_ss_cLsL::synapse0x23cf1c0() {
   return (neuron0x23ba920()*-0.457853);
}

double NNfunction_ss_cLsL::synapse0x23cf200() {
   return (neuron0x23bb2f0()*0.483608);
}

double NNfunction_ss_cLsL::synapse0x23cf7e0() {
   return (neuron0x23bbcc0()*0.464498);
}

double NNfunction_ss_cLsL::synapse0x23cf820() {
   return (neuron0x23bc690()*0.98607);
}

double NNfunction_ss_cLsL::synapse0x23cf860() {
   return (neuron0x23bd060()*0.344762);
}

double NNfunction_ss_cLsL::synapse0x23cf8a0() {
   return (neuron0x23bda30()*0.740675);
}

double NNfunction_ss_cLsL::synapse0x23cf8e0() {
   return (neuron0x23be400()*1.70452);
}

double NNfunction_ss_cLsL::synapse0x23cf920() {
   return (neuron0x23befe0()*1.33502);
}

double NNfunction_ss_cLsL::synapse0x23cf960() {
   return (neuron0x23bf9b0()*0.311808);
}

double NNfunction_ss_cLsL::synapse0x23cf9a0() {
   return (neuron0x23b0830()*-1.08408);
}

double NNfunction_ss_cLsL::synapse0x23cf9e0() {
   return (neuron0x23b1200()*1.58871);
}

double NNfunction_ss_cLsL::synapse0x23cfa20() {
   return (neuron0x23b1bd0()*1.04765);
}

double NNfunction_ss_cLsL::synapse0x23cfa60() {
   return (neuron0x23c4210()*-0.694838);
}

double NNfunction_ss_cLsL::synapse0x23cfaa0() {
   return (neuron0x23c4ac0()*1.03783);
}

double NNfunction_ss_cLsL::synapse0x23cfae0() {
   return (neuron0x23c5490()*0.487094);
}

double NNfunction_ss_cLsL::synapse0x23cfb20() {
   return (neuron0x23c5e60()*-0.787711);
}

double NNfunction_ss_cLsL::synapse0x23cfea0() {
   return (neuron0x23a0df0()*-0.0077811);
}

double NNfunction_ss_cLsL::synapse0x23cfee0() {
   return (neuron0x23a1630()*0.0216762);
}

double NNfunction_ss_cLsL::synapse0x23cff20() {
   return (neuron0x23a2110()*-0.00778415);
}

double NNfunction_ss_cLsL::synapse0x23cff60() {
   return (neuron0x23a1bb0()*-0.0974945);
}

double NNfunction_ss_cLsL::synapse0x23cffa0() {
   return (neuron0x23a2ef0()*0.0383218);
}

double NNfunction_ss_cLsL::synapse0x23cffe0() {
   return (neuron0x23a49c0()*-0.0135902);
}

double NNfunction_ss_cLsL::synapse0x23d0020() {
   return (neuron0x23a5790()*2.19641);
}

double NNfunction_ss_cLsL::synapse0x23d0060() {
   return (neuron0x23a6160()*0.028827);
}

double NNfunction_ss_cLsL::synapse0x23d00a0() {
   return (neuron0x23a6b30()*0.0153142);
}

double NNfunction_ss_cLsL::synapse0x23d00e0() {
   return (neuron0x23a7610()*0.00335402);
}

double NNfunction_ss_cLsL::synapse0x23d0120() {
   return (neuron0x23a7fe0()*-0.0754327);
}

double NNfunction_ss_cLsL::synapse0x23d0160() {
   return (neuron0x23a50c0()*0.0163607);
}

double NNfunction_ss_cLsL::synapse0x23d01a0() {
   return (neuron0x23a9b90()*0.00484895);
}

double NNfunction_ss_cLsL::synapse0x23d01e0() {
   return (neuron0x23aa560()*0.0646236);
}

double NNfunction_ss_cLsL::synapse0x23d0220() {
   return (neuron0x23aaf30()*-0.022457);
}

double NNfunction_ss_cLsL::synapse0x23d0260() {
   return (neuron0x23ab900()*-0.0141493);
}

double NNfunction_ss_cLsL::synapse0x23cfcf0() {
   return (neuron0x23ad710()*-0.0241421);
}

double NNfunction_ss_cLsL::synapse0x23cfd30() {
   return (neuron0x23ad9f0()*0.764241);
}

double NNfunction_ss_cLsL::synapse0x23d03b0() {
   return (neuron0x23ae3c0()*-0.0227269);
}

double NNfunction_ss_cLsL::synapse0x23d03f0() {
   return (neuron0x23aed90()*-0.00922331);
}

double NNfunction_ss_cLsL::synapse0x23d0430() {
   return (neuron0x23af760()*-0.441217);
}

double NNfunction_ss_cLsL::synapse0x23d0470() {
   return (neuron0x23b0130()*-1.88494);
}

double NNfunction_ss_cLsL::synapse0x23d04b0() {
   return (neuron0x23a8c80()*-0.000873396);
}

double NNfunction_ss_cLsL::synapse0x23d04f0() {
   return (neuron0x23a9650()*0.0053898);
}

double NNfunction_ss_cLsL::synapse0x23d0530() {
   return (neuron0x23b2ec0()*-0.00359319);
}

double NNfunction_ss_cLsL::synapse0x23d0570() {
   return (neuron0x23b3890()*1.03521);
}

double NNfunction_ss_cLsL::synapse0x23d05b0() {
   return (neuron0x23b4260()*-0.0132128);
}

double NNfunction_ss_cLsL::synapse0x23d05f0() {
   return (neuron0x23b4c30()*0.409565);
}

double NNfunction_ss_cLsL::synapse0x23d0630() {
   return (neuron0x23b5600()*0.0293642);
}

double NNfunction_ss_cLsL::synapse0x23d0670() {
   return (neuron0x23b5fd0()*-0.224495);
}

double NNfunction_ss_cLsL::synapse0x23d06b0() {
   return (neuron0x23b69a0()*-0.778707);
}

double NNfunction_ss_cLsL::synapse0x23d06f0() {
   return (neuron0x23b7370()*-0.0121417);
}

double NNfunction_ss_cLsL::synapse0x23d02a0() {
   return (neuron0x23ad400()*0.30321);
}

double NNfunction_ss_cLsL::synapse0x23d02e0() {
   return (neuron0x23b9f50()*-0.0101547);
}

double NNfunction_ss_cLsL::synapse0x23d0320() {
   return (neuron0x23ba920()*0.000611232);
}

double NNfunction_ss_cLsL::synapse0x23d0360() {
   return (neuron0x23bb2f0()*0.0186814);
}

double NNfunction_ss_cLsL::synapse0x23d0940() {
   return (neuron0x23bbcc0()*0.168367);
}

double NNfunction_ss_cLsL::synapse0x23d0980() {
   return (neuron0x23bc690()*0.0299539);
}

double NNfunction_ss_cLsL::synapse0x23d09c0() {
   return (neuron0x23bd060()*0.0351081);
}

double NNfunction_ss_cLsL::synapse0x23d0a00() {
   return (neuron0x23bda30()*0.452843);
}

double NNfunction_ss_cLsL::synapse0x23d0a40() {
   return (neuron0x23be400()*0.0191795);
}

double NNfunction_ss_cLsL::synapse0x23d0a80() {
   return (neuron0x23befe0()*0.00432706);
}

double NNfunction_ss_cLsL::synapse0x23d0ac0() {
   return (neuron0x23bf9b0()*0.00420008);
}

double NNfunction_ss_cLsL::synapse0x23d0b00() {
   return (neuron0x23b0830()*-1.99868);
}

double NNfunction_ss_cLsL::synapse0x23d0b40() {
   return (neuron0x23b1200()*-0.87152);
}

double NNfunction_ss_cLsL::synapse0x23d0b80() {
   return (neuron0x23b1bd0()*-0.00353113);
}

double NNfunction_ss_cLsL::synapse0x23d0bc0() {
   return (neuron0x23c4210()*0.00803709);
}

double NNfunction_ss_cLsL::synapse0x23d0c00() {
   return (neuron0x23c4ac0()*-0.00271893);
}

double NNfunction_ss_cLsL::synapse0x23d0c40() {
   return (neuron0x23c5490()*0.0148541);
}

double NNfunction_ss_cLsL::synapse0x23d0c80() {
   return (neuron0x23c5e60()*-0.0011653);
}

double NNfunction_ss_cLsL::synapse0x23d0ee0() {
   return (neuron0x23cd060()*-4.7423);
}

double NNfunction_ss_cLsL::synapse0x23d0f20() {
   return (neuron0x23cd400()*5.97951);
}

double NNfunction_ss_cLsL::synapse0x23d0f60() {
   return (neuron0x23cd8a0()*-6.59116);
}

double NNfunction_ss_cLsL::synapse0x23d0fa0() {
   return (neuron0x23cea00()*-0.842245);
}

double NNfunction_ss_cLsL::synapse0x23d0fe0() {
   return (neuron0x23cfb60()*-9.63751);
}

