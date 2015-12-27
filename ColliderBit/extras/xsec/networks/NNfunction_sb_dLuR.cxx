#include "NNfunction_sb_dLuR.h"
#include <cmath>

double NNfunction_sb_dLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8024)/15.0375;
   input1 = (in1 - 64.4727)/718.292;
   input2 = (in2 - 374.299)/450.758;
   input3 = (in3 - 339.527)/642.755;
   input4 = (in4 - 779.396)/673.63;
   input5 = (in5 - 676.661)/649.25;
   input6 = (in6 - 682.741)/653.343;
   input7 = (in7 - 672.021)/645.399;
   input8 = (in8 - 664.596)/664.351;
   input9 = (in9 - 654.619)/649.396;
   input10 = (in10 - 658.043)/673.349;
   input11 = (in11 - 648.706)/408.163;
   input12 = (in12 - 747.593)/578.384;
   input13 = (in13 - 587.261)/375.951;
   input14 = (in14 - 656.646)/412.454;
   input15 = (in15 - 742.488)/554.024;
   input16 = (in16 - 518.427)/384.044;
   input17 = (in17 - 751.072)/588.052;
   input18 = (in18 - 747.673)/590.838;
   input19 = (in19 - 744.297)/579.549;
   input20 = (in20 - -259.066)/436.955;
   input21 = (in21 - -336.815)/919.041;
   input22 = (in22 - -4.4105)/902.636;
   input23 = (in23 - 17.0811)/521.561;
   switch(index) {
     case 0:
         return neuron0x26d81a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLuR::Value(int index, double* input) {
   input0 = (input[0] - 22.8024)/15.0375;
   input1 = (input[1] - 64.4727)/718.292;
   input2 = (input[2] - 374.299)/450.758;
   input3 = (input[3] - 339.527)/642.755;
   input4 = (input[4] - 779.396)/673.63;
   input5 = (input[5] - 676.661)/649.25;
   input6 = (input[6] - 682.741)/653.343;
   input7 = (input[7] - 672.021)/645.399;
   input8 = (input[8] - 664.596)/664.351;
   input9 = (input[9] - 654.619)/649.396;
   input10 = (input[10] - 658.043)/673.349;
   input11 = (input[11] - 648.706)/408.163;
   input12 = (input[12] - 747.593)/578.384;
   input13 = (input[13] - 587.261)/375.951;
   input14 = (input[14] - 656.646)/412.454;
   input15 = (input[15] - 742.488)/554.024;
   input16 = (input[16] - 518.427)/384.044;
   input17 = (input[17] - 751.072)/588.052;
   input18 = (input[18] - 747.673)/590.838;
   input19 = (input[19] - 744.297)/579.549;
   input20 = (input[20] - -259.066)/436.955;
   input21 = (input[21] - -336.815)/919.041;
   input22 = (input[22] - -4.4105)/902.636;
   input23 = (input[23] - 17.0811)/521.561;
   switch(index) {
     case 0:
         return neuron0x26d81a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLuR::neuron0x26a4360() {
   return input0;
}

double NNfunction_sb_dLuR::neuron0x26a4610() {
   return input1;
}

double NNfunction_sb_dLuR::neuron0x26a4950() {
   return input2;
}

double NNfunction_sb_dLuR::neuron0x26a4c90() {
   return input3;
}

double NNfunction_sb_dLuR::neuron0x26a4fd0() {
   return input4;
}

double NNfunction_sb_dLuR::neuron0x26a5310() {
   return input5;
}

double NNfunction_sb_dLuR::neuron0x26a5650() {
   return input6;
}

double NNfunction_sb_dLuR::neuron0x26a5990() {
   return input7;
}

double NNfunction_sb_dLuR::neuron0x26a5cd0() {
   return input8;
}

double NNfunction_sb_dLuR::neuron0x26a6010() {
   return input9;
}

double NNfunction_sb_dLuR::neuron0x26a6350() {
   return input10;
}

double NNfunction_sb_dLuR::neuron0x26a6690() {
   return input11;
}

double NNfunction_sb_dLuR::neuron0x26a69d0() {
   return input12;
}

double NNfunction_sb_dLuR::neuron0x26a6d10() {
   return input13;
}

double NNfunction_sb_dLuR::neuron0x26a7050() {
   return input14;
}

double NNfunction_sb_dLuR::neuron0x26a7390() {
   return input15;
}

double NNfunction_sb_dLuR::neuron0x26a76d0() {
   return input16;
}

double NNfunction_sb_dLuR::neuron0x26a7c30() {
   return input17;
}

double NNfunction_sb_dLuR::neuron0x26a7e50() {
   return input18;
}

double NNfunction_sb_dLuR::neuron0x26a8190() {
   return input19;
}

double NNfunction_sb_dLuR::neuron0x26a84d0() {
   return input20;
}

double NNfunction_sb_dLuR::neuron0x26a8810() {
   return input21;
}

double NNfunction_sb_dLuR::neuron0x26a8b50() {
   return input22;
}

double NNfunction_sb_dLuR::neuron0x26a8e90() {
   return input23;
}

double NNfunction_sb_dLuR::input0x26a9300() {
   double input = 0.10451;
   input += synapse0x26a42e0();
   input += synapse0x26a4320();
   input += synapse0x26a95b0();
   input += synapse0x26a95f0();
   input += synapse0x26a9630();
   input += synapse0x26a9670();
   input += synapse0x26a96b0();
   input += synapse0x26a96f0();
   input += synapse0x26a9730();
   input += synapse0x26a9770();
   input += synapse0x26a97b0();
   input += synapse0x26a97f0();
   input += synapse0x26a9830();
   input += synapse0x26a9870();
   input += synapse0x26a98b0();
   input += synapse0x26a98f0();
   input += synapse0x26a4250();
   input += synapse0x26a4290();
   input += synapse0x245f420();
   input += synapse0x245f460();
   input += synapse0x26a9b50();
   input += synapse0x26a9b90();
   input += synapse0x26a9bd0();
   input += synapse0x26a9c10();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26a9300() {
   double input = input0x26a9300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26a9c50() {
   double input = -0.795522;
   input += synapse0x26a9f90();
   input += synapse0x26a9fd0();
   input += synapse0x26aa010();
   input += synapse0x26aa050();
   input += synapse0x26aa090();
   input += synapse0x26aa0d0();
   input += synapse0x26aa110();
   input += synapse0x26aa150();
   input += synapse0x26aa190();
   input += synapse0x26a9a40();
   input += synapse0x26a9a80();
   input += synapse0x26a9ac0();
   input += synapse0x26a9b00();
   input += synapse0x26aa3e0();
   input += synapse0x26aa420();
   input += synapse0x26aa460();
   input += synapse0x26a9de0();
   input += synapse0x26a9e20();
   input += synapse0x26aa5b0();
   input += synapse0x26aa5f0();
   input += synapse0x26aa630();
   input += synapse0x26aa670();
   input += synapse0x26aa6b0();
   input += synapse0x26aa6f0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26a9c50() {
   double input = input0x26a9c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26aa730() {
   double input = 0.4283;
   input += synapse0x26aaa70();
   input += synapse0x26aaab0();
   input += synapse0x26aaaf0();
   input += synapse0x26aab30();
   input += synapse0x26aab70();
   input += synapse0x26aabb0();
   input += synapse0x26aabf0();
   input += synapse0x26aac30();
   input += synapse0x26aac70();
   input += synapse0x26aacb0();
   input += synapse0x26aacf0();
   input += synapse0x26aad30();
   input += synapse0x26aad70();
   input += synapse0x26aadb0();
   input += synapse0x26aadf0();
   input += synapse0x26aae30();
   input += synapse0x26aa8c0();
   input += synapse0x26aa900();
   input += synapse0x26933d0();
   input += synapse0x246d320();
   input += synapse0x246d360();
   input += synapse0x2588870();
   input += synapse0x25888b0();
   input += synapse0x26a40c0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26aa730() {
   double input = input0x26aa730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x246da80() {
   double input = 0.337975;
   input += synapse0x246dc10();
   input += synapse0x26aa2f0();
   input += synapse0x26aa330();
   input += synapse0x26aa370();
   input += synapse0x26aaf80();
   input += synapse0x26aafc0();
   input += synapse0x26ab000();
   input += synapse0x26ab040();
   input += synapse0x26ab080();
   input += synapse0x26ab0c0();
   input += synapse0x26ab100();
   input += synapse0x26ab140();
   input += synapse0x26ab180();
   input += synapse0x26ab1c0();
   input += synapse0x26ab200();
   input += synapse0x26ab240();
   input += synapse0x26a4100();
   input += synapse0x26a4140();
   input += synapse0x26a4180();
   input += synapse0x26ab390();
   input += synapse0x26ab3d0();
   input += synapse0x26ab410();
   input += synapse0x26ab450();
   input += synapse0x26ab490();
   return input;
}

double NNfunction_sb_dLuR::neuron0x246da80() {
   double input = input0x246da80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26ab4d0() {
   double input = 0.119357;
   input += synapse0x26ab810();
   input += synapse0x26ab850();
   input += synapse0x26ab890();
   input += synapse0x26ab8d0();
   input += synapse0x26ab910();
   input += synapse0x26ab950();
   input += synapse0x26ab990();
   input += synapse0x26ab9d0();
   input += synapse0x26aba10();
   input += synapse0x26aba50();
   input += synapse0x26aba90();
   input += synapse0x26abad0();
   input += synapse0x26abb10();
   input += synapse0x26abb50();
   input += synapse0x26abb90();
   input += synapse0x26abbd0();
   input += synapse0x26ab660();
   input += synapse0x26ab6a0();
   input += synapse0x26abd20();
   input += synapse0x26abd60();
   input += synapse0x26abda0();
   input += synapse0x26abde0();
   input += synapse0x26abe20();
   input += synapse0x26abe60();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26ab4d0() {
   double input = input0x26ab4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26abea0() {
   double input = 0.101481;
   input += synapse0x26ac1e0();
   input += synapse0x26ac220();
   input += synapse0x26ac260();
   input += synapse0x26ac2a0();
   input += synapse0x26ac2e0();
   input += synapse0x26ac320();
   input += synapse0x26ac360();
   input += synapse0x26ac3a0();
   input += synapse0x26ac3e0();
   input += synapse0x246d670();
   input += synapse0x246d6b0();
   input += synapse0x246d6f0();
   input += synapse0x246d730();
   input += synapse0x246d770();
   input += synapse0x246d7b0();
   input += synapse0x246d7f0();
   input += synapse0x26ac030();
   input += synapse0x26ac070();
   input += synapse0x246d940();
   input += synapse0x246d980();
   input += synapse0x246d9c0();
   input += synapse0x246da00();
   input += synapse0x246da40();
   input += synapse0x26acc30();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26abea0() {
   double input = input0x26abea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26acc70() {
   double input = -1.10431;
   input += synapse0x26acfb0();
   input += synapse0x26acff0();
   input += synapse0x26ad030();
   input += synapse0x26ad070();
   input += synapse0x26ad0b0();
   input += synapse0x26ad0f0();
   input += synapse0x26ad130();
   input += synapse0x26ad170();
   input += synapse0x26ad1b0();
   input += synapse0x26ad1f0();
   input += synapse0x26ad230();
   input += synapse0x26ad270();
   input += synapse0x26ad2b0();
   input += synapse0x26ad2f0();
   input += synapse0x26ad330();
   input += synapse0x26ad370();
   input += synapse0x26ace00();
   input += synapse0x26ace40();
   input += synapse0x26ad4c0();
   input += synapse0x26ad500();
   input += synapse0x26ad540();
   input += synapse0x26ad580();
   input += synapse0x26ad5c0();
   input += synapse0x26ad600();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26acc70() {
   double input = input0x26acc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26ad640() {
   double input = 0.978213;
   input += synapse0x26ad980();
   input += synapse0x26ad9c0();
   input += synapse0x26ada00();
   input += synapse0x26ada40();
   input += synapse0x26ada80();
   input += synapse0x26adac0();
   input += synapse0x26adb00();
   input += synapse0x26adb40();
   input += synapse0x26adb80();
   input += synapse0x26adbc0();
   input += synapse0x26adc00();
   input += synapse0x26adc40();
   input += synapse0x26adc80();
   input += synapse0x26adcc0();
   input += synapse0x26add00();
   input += synapse0x26add40();
   input += synapse0x26ad7d0();
   input += synapse0x26ad810();
   input += synapse0x26ade90();
   input += synapse0x26aded0();
   input += synapse0x26adf10();
   input += synapse0x26adf50();
   input += synapse0x26adf90();
   input += synapse0x26adfd0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26ad640() {
   double input = input0x26ad640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26ae010() {
   double input = -0.483908;
   input += synapse0x26a7b20();
   input += synapse0x26a7b60();
   input += synapse0x26a7ba0();
   input += synapse0x26a7be0();
   input += synapse0x26ae560();
   input += synapse0x26ae5a0();
   input += synapse0x26ae5e0();
   input += synapse0x26ae620();
   input += synapse0x26ae660();
   input += synapse0x26ae6a0();
   input += synapse0x26ae6e0();
   input += synapse0x26ae720();
   input += synapse0x26ae760();
   input += synapse0x26ae7a0();
   input += synapse0x26ae7e0();
   input += synapse0x26ae820();
   input += synapse0x26ae1a0();
   input += synapse0x26ae1e0();
   input += synapse0x26ae970();
   input += synapse0x26ae9b0();
   input += synapse0x26ae9f0();
   input += synapse0x26aea30();
   input += synapse0x26aea70();
   input += synapse0x26aeab0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26ae010() {
   double input = input0x26ae010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26aeaf0() {
   double input = -5.36822;
   input += synapse0x26aee30();
   input += synapse0x26aee70();
   input += synapse0x26aeeb0();
   input += synapse0x26aeef0();
   input += synapse0x26aef30();
   input += synapse0x26aef70();
   input += synapse0x26aefb0();
   input += synapse0x26aeff0();
   input += synapse0x26af030();
   input += synapse0x26af070();
   input += synapse0x26af0b0();
   input += synapse0x26af0f0();
   input += synapse0x26af130();
   input += synapse0x26af170();
   input += synapse0x26af1b0();
   input += synapse0x26af1f0();
   input += synapse0x26aec80();
   input += synapse0x26aecc0();
   input += synapse0x26af340();
   input += synapse0x26af380();
   input += synapse0x26af3c0();
   input += synapse0x26af400();
   input += synapse0x26af440();
   input += synapse0x26af480();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26aeaf0() {
   double input = input0x26aeaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26af4c0() {
   double input = 0.462659;
   input += synapse0x26af800();
   input += synapse0x26af840();
   input += synapse0x26af880();
   input += synapse0x26af8c0();
   input += synapse0x26af900();
   input += synapse0x26af940();
   input += synapse0x26af980();
   input += synapse0x26af9c0();
   input += synapse0x26afa00();
   input += synapse0x26afa40();
   input += synapse0x26afa80();
   input += synapse0x26afac0();
   input += synapse0x26afb00();
   input += synapse0x26afb40();
   input += synapse0x26afb80();
   input += synapse0x26afbc0();
   input += synapse0x26af650();
   input += synapse0x26af690();
   input += synapse0x26ac420();
   input += synapse0x26ac460();
   input += synapse0x26ac4a0();
   input += synapse0x26ac4e0();
   input += synapse0x26ac520();
   input += synapse0x26ac560();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26af4c0() {
   double input = input0x26af4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26ac5a0() {
   double input = -1.14026;
   input += synapse0x26ac8e0();
   input += synapse0x26ac920();
   input += synapse0x26ac960();
   input += synapse0x26ac9a0();
   input += synapse0x26ac9e0();
   input += synapse0x26aca20();
   input += synapse0x26aca60();
   input += synapse0x26acaa0();
   input += synapse0x26acae0();
   input += synapse0x26acb20();
   input += synapse0x26acb60();
   input += synapse0x26acba0();
   input += synapse0x26acbe0();
   input += synapse0x26b0d20();
   input += synapse0x26b0d60();
   input += synapse0x26b0da0();
   input += synapse0x26ac730();
   input += synapse0x26ac770();
   input += synapse0x26b0ef0();
   input += synapse0x26b0f30();
   input += synapse0x26b0f70();
   input += synapse0x26b0fb0();
   input += synapse0x26b0ff0();
   input += synapse0x26b1030();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26ac5a0() {
   double input = input0x26ac5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b1070() {
   double input = -0.54345;
   input += synapse0x26b13b0();
   input += synapse0x26b13f0();
   input += synapse0x26b1430();
   input += synapse0x26b1470();
   input += synapse0x26b14b0();
   input += synapse0x26b14f0();
   input += synapse0x26b1530();
   input += synapse0x26b1570();
   input += synapse0x26b15b0();
   input += synapse0x26b15f0();
   input += synapse0x26b1630();
   input += synapse0x26b1670();
   input += synapse0x26b16b0();
   input += synapse0x26b16f0();
   input += synapse0x26b1730();
   input += synapse0x26b1770();
   input += synapse0x26b1200();
   input += synapse0x26b1240();
   input += synapse0x26b18c0();
   input += synapse0x26b1900();
   input += synapse0x26b1940();
   input += synapse0x26b1980();
   input += synapse0x26b19c0();
   input += synapse0x26b1a00();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b1070() {
   double input = input0x26b1070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b1a40() {
   double input = 1.28662;
   input += synapse0x26b1d80();
   input += synapse0x26b1dc0();
   input += synapse0x26b1e00();
   input += synapse0x26b1e40();
   input += synapse0x26b1e80();
   input += synapse0x26b1ec0();
   input += synapse0x26b1f00();
   input += synapse0x26b1f40();
   input += synapse0x26b1f80();
   input += synapse0x26b1fc0();
   input += synapse0x26b2000();
   input += synapse0x26b2040();
   input += synapse0x26b2080();
   input += synapse0x26b20c0();
   input += synapse0x26b2100();
   input += synapse0x26b2140();
   input += synapse0x26b1bd0();
   input += synapse0x26b1c10();
   input += synapse0x26b2290();
   input += synapse0x26b22d0();
   input += synapse0x26b2310();
   input += synapse0x26b2350();
   input += synapse0x26b2390();
   input += synapse0x26b23d0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b1a40() {
   double input = input0x26b1a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b2410() {
   double input = -1.24033;
   input += synapse0x26b2750();
   input += synapse0x26b2790();
   input += synapse0x26b27d0();
   input += synapse0x26b2810();
   input += synapse0x26b2850();
   input += synapse0x26b2890();
   input += synapse0x26b28d0();
   input += synapse0x26b2910();
   input += synapse0x26b2950();
   input += synapse0x26b2990();
   input += synapse0x26b29d0();
   input += synapse0x26b2a10();
   input += synapse0x26b2a50();
   input += synapse0x26b2a90();
   input += synapse0x26b2ad0();
   input += synapse0x26b2b10();
   input += synapse0x26b25a0();
   input += synapse0x26b25e0();
   input += synapse0x26b2c60();
   input += synapse0x26b2ca0();
   input += synapse0x26b2ce0();
   input += synapse0x26b2d20();
   input += synapse0x26b2d60();
   input += synapse0x26b2da0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b2410() {
   double input = input0x26b2410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b2de0() {
   double input = -0.320081;
   input += synapse0x26b3120();
   input += synapse0x26a44f0();
   input += synapse0x26a4530();
   input += synapse0x26a4830();
   input += synapse0x26a4870();
   input += synapse0x26a4b70();
   input += synapse0x26a4bb0();
   input += synapse0x26a4eb0();
   input += synapse0x26a4ef0();
   input += synapse0x26a51f0();
   input += synapse0x26a5230();
   input += synapse0x26a5530();
   input += synapse0x26a5570();
   input += synapse0x26a5870();
   input += synapse0x26a58b0();
   input += synapse0x26a5bb0();
   input += synapse0x26a5bf0();
   input += synapse0x26a5ef0();
   input += synapse0x26a5f30();
   input += synapse0x26a6230();
   input += synapse0x26a6270();
   input += synapse0x26a6570();
   input += synapse0x26a65b0();
   input += synapse0x26a68b0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b2de0() {
   double input = input0x26b2de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b4bf0() {
   double input = -0.505084;
   input += synapse0x26a68f0();
   input += synapse0x26a75b0();
   input += synapse0x26a75f0();
   input += synapse0x26b2f70();
   input += synapse0x26b2fb0();
   input += synapse0x26a78f0();
   input += synapse0x26a7930();
   input += synapse0x245f300();
   input += synapse0x245f340();
   input += synapse0x26a8070();
   input += synapse0x26a80b0();
   input += synapse0x26a83b0();
   input += synapse0x26a83f0();
   input += synapse0x26a86f0();
   input += synapse0x26a8730();
   input += synapse0x26a8a30();
   input += synapse0x26a8a70();
   input += synapse0x26a8d70();
   input += synapse0x26a8db0();
   input += synapse0x26a90b0();
   input += synapse0x26a90f0();
   input += synapse0x26a6bf0();
   input += synapse0x26a6c30();
   input += synapse0x26b4e90();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b4bf0() {
   double input = input0x26b4bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b4ed0() {
   double input = -2.50617;
   input += synapse0x26b5210();
   input += synapse0x26b5250();
   input += synapse0x26b5290();
   input += synapse0x26b52d0();
   input += synapse0x26b5310();
   input += synapse0x26b5350();
   input += synapse0x26b5390();
   input += synapse0x26b53d0();
   input += synapse0x26b5410();
   input += synapse0x26b5450();
   input += synapse0x26b5490();
   input += synapse0x26b54d0();
   input += synapse0x26b5510();
   input += synapse0x26b5550();
   input += synapse0x26b5590();
   input += synapse0x26b55d0();
   input += synapse0x26b5060();
   input += synapse0x26b50a0();
   input += synapse0x26b5720();
   input += synapse0x26b5760();
   input += synapse0x26b57a0();
   input += synapse0x26b57e0();
   input += synapse0x26b5820();
   input += synapse0x26b5860();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b4ed0() {
   double input = input0x26b4ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b58a0() {
   double input = 0.388405;
   input += synapse0x26b5be0();
   input += synapse0x26b5c20();
   input += synapse0x26b5c60();
   input += synapse0x26b5ca0();
   input += synapse0x26b5ce0();
   input += synapse0x26b5d20();
   input += synapse0x26b5d60();
   input += synapse0x26b5da0();
   input += synapse0x26b5de0();
   input += synapse0x26b5e20();
   input += synapse0x26b5e60();
   input += synapse0x26b5ea0();
   input += synapse0x26b5ee0();
   input += synapse0x26b5f20();
   input += synapse0x26b5f60();
   input += synapse0x26b5fa0();
   input += synapse0x26b5a30();
   input += synapse0x26b5a70();
   input += synapse0x26b60f0();
   input += synapse0x26b6130();
   input += synapse0x26b6170();
   input += synapse0x26b61b0();
   input += synapse0x26b61f0();
   input += synapse0x26b6230();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b58a0() {
   double input = input0x26b58a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b6270() {
   double input = 1.36175;
   input += synapse0x26b65b0();
   input += synapse0x26b65f0();
   input += synapse0x26b6630();
   input += synapse0x26b6670();
   input += synapse0x26b66b0();
   input += synapse0x26b66f0();
   input += synapse0x26b6730();
   input += synapse0x26b6770();
   input += synapse0x26b67b0();
   input += synapse0x26b67f0();
   input += synapse0x26b6830();
   input += synapse0x26b6870();
   input += synapse0x26b68b0();
   input += synapse0x26b68f0();
   input += synapse0x26b6930();
   input += synapse0x26b6970();
   input += synapse0x26b6400();
   input += synapse0x26b6440();
   input += synapse0x26b6ac0();
   input += synapse0x26b6b00();
   input += synapse0x26b6b40();
   input += synapse0x26b6b80();
   input += synapse0x26b6bc0();
   input += synapse0x26b6c00();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b6270() {
   double input = input0x26b6270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b6c40() {
   double input = 0.115295;
   input += synapse0x26b6f80();
   input += synapse0x26b6fc0();
   input += synapse0x26b7000();
   input += synapse0x26b7040();
   input += synapse0x26b7080();
   input += synapse0x26b70c0();
   input += synapse0x26b7100();
   input += synapse0x26b7140();
   input += synapse0x26b7180();
   input += synapse0x26b71c0();
   input += synapse0x26b7200();
   input += synapse0x26b7240();
   input += synapse0x26b7280();
   input += synapse0x26b72c0();
   input += synapse0x26b7300();
   input += synapse0x26b7340();
   input += synapse0x26b6dd0();
   input += synapse0x26b6e10();
   input += synapse0x26b7490();
   input += synapse0x26b74d0();
   input += synapse0x26b7510();
   input += synapse0x26b7550();
   input += synapse0x26b7590();
   input += synapse0x26b75d0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b6c40() {
   double input = input0x26b6c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b7610() {
   double input = -0.132442;
   input += synapse0x26b7950();
   input += synapse0x26b7990();
   input += synapse0x26b79d0();
   input += synapse0x26b7a10();
   input += synapse0x26b7a50();
   input += synapse0x26b7a90();
   input += synapse0x26b7ad0();
   input += synapse0x26b7b10();
   input += synapse0x26b7b50();
   input += synapse0x26afd10();
   input += synapse0x26afd50();
   input += synapse0x26afd90();
   input += synapse0x26afdd0();
   input += synapse0x26afe10();
   input += synapse0x26afe50();
   input += synapse0x26afe90();
   input += synapse0x26b77a0();
   input += synapse0x26b77e0();
   input += synapse0x26affe0();
   input += synapse0x26b0020();
   input += synapse0x26b0060();
   input += synapse0x26b00a0();
   input += synapse0x26b00e0();
   input += synapse0x26b0120();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b7610() {
   double input = input0x26b7610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b0160() {
   double input = 1.24558;
   input += synapse0x26b04a0();
   input += synapse0x26b04e0();
   input += synapse0x26b0520();
   input += synapse0x26b0560();
   input += synapse0x26b05a0();
   input += synapse0x26b05e0();
   input += synapse0x26b0620();
   input += synapse0x26b0660();
   input += synapse0x26b06a0();
   input += synapse0x26b06e0();
   input += synapse0x26b0720();
   input += synapse0x26b0760();
   input += synapse0x26b07a0();
   input += synapse0x26b07e0();
   input += synapse0x26b0820();
   input += synapse0x26b0860();
   input += synapse0x26b02f0();
   input += synapse0x26b0330();
   input += synapse0x26b09b0();
   input += synapse0x26b09f0();
   input += synapse0x26b0a30();
   input += synapse0x26b0a70();
   input += synapse0x26b0ab0();
   input += synapse0x26b0af0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b0160() {
   double input = input0x26b0160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b0b30() {
   double input = 1.07726;
   input += synapse0x26b0cc0();
   input += synapse0x26b9d50();
   input += synapse0x26b9d90();
   input += synapse0x26b9dd0();
   input += synapse0x26b9e10();
   input += synapse0x26b9e50();
   input += synapse0x26b9e90();
   input += synapse0x26b9ed0();
   input += synapse0x26b9f10();
   input += synapse0x26b9f50();
   input += synapse0x26b9f90();
   input += synapse0x26b9fd0();
   input += synapse0x26ba010();
   input += synapse0x26ba050();
   input += synapse0x26ba090();
   input += synapse0x26ba0d0();
   input += synapse0x26b9ba0();
   input += synapse0x26b9be0();
   input += synapse0x26ba220();
   input += synapse0x26ba260();
   input += synapse0x26ba2a0();
   input += synapse0x26ba2e0();
   input += synapse0x26ba320();
   input += synapse0x26ba360();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b0b30() {
   double input = input0x26b0b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26ba3a0() {
   double input = 1.58806;
   input += synapse0x26ba6e0();
   input += synapse0x26ba720();
   input += synapse0x26ba760();
   input += synapse0x26ba7a0();
   input += synapse0x26ba7e0();
   input += synapse0x26ba820();
   input += synapse0x26ba860();
   input += synapse0x26ba8a0();
   input += synapse0x26ba8e0();
   input += synapse0x26ba920();
   input += synapse0x26ba960();
   input += synapse0x26ba9a0();
   input += synapse0x26ba9e0();
   input += synapse0x26baa20();
   input += synapse0x26baa60();
   input += synapse0x26baaa0();
   input += synapse0x26ba530();
   input += synapse0x26ba570();
   input += synapse0x26babf0();
   input += synapse0x26bac30();
   input += synapse0x26bac70();
   input += synapse0x26bacb0();
   input += synapse0x26bacf0();
   input += synapse0x26bad30();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26ba3a0() {
   double input = input0x26ba3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26bad70() {
   double input = 0.44578;
   input += synapse0x26bb0b0();
   input += synapse0x26bb0f0();
   input += synapse0x26bb130();
   input += synapse0x26bb170();
   input += synapse0x26bb1b0();
   input += synapse0x26bb1f0();
   input += synapse0x26bb230();
   input += synapse0x26bb270();
   input += synapse0x26bb2b0();
   input += synapse0x26bb2f0();
   input += synapse0x26bb330();
   input += synapse0x26bb370();
   input += synapse0x26bb3b0();
   input += synapse0x26bb3f0();
   input += synapse0x26bb430();
   input += synapse0x26bb470();
   input += synapse0x26baf00();
   input += synapse0x26baf40();
   input += synapse0x26bb5c0();
   input += synapse0x26bb600();
   input += synapse0x26bb640();
   input += synapse0x26bb680();
   input += synapse0x26bb6c0();
   input += synapse0x26bb700();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26bad70() {
   double input = input0x26bad70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26bb740() {
   double input = 1.61257;
   input += synapse0x26bba80();
   input += synapse0x26bbac0();
   input += synapse0x26bbb00();
   input += synapse0x26bbb40();
   input += synapse0x26bbb80();
   input += synapse0x26bbbc0();
   input += synapse0x26bbc00();
   input += synapse0x26bbc40();
   input += synapse0x26bbc80();
   input += synapse0x26bbcc0();
   input += synapse0x26bbd00();
   input += synapse0x26bbd40();
   input += synapse0x26bbd80();
   input += synapse0x26bbdc0();
   input += synapse0x26bbe00();
   input += synapse0x26bbe40();
   input += synapse0x26bb8d0();
   input += synapse0x26bb910();
   input += synapse0x26bbf90();
   input += synapse0x26bbfd0();
   input += synapse0x26bc010();
   input += synapse0x26bc050();
   input += synapse0x26bc090();
   input += synapse0x26bc0d0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26bb740() {
   double input = input0x26bb740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26bc110() {
   double input = -0.137689;
   input += synapse0x26bc450();
   input += synapse0x26bc490();
   input += synapse0x26bc4d0();
   input += synapse0x26bc510();
   input += synapse0x26bc550();
   input += synapse0x26bc590();
   input += synapse0x26bc5d0();
   input += synapse0x26bc610();
   input += synapse0x26bc650();
   input += synapse0x26bc690();
   input += synapse0x26bc6d0();
   input += synapse0x26bc710();
   input += synapse0x26bc750();
   input += synapse0x26bc790();
   input += synapse0x26bc7d0();
   input += synapse0x26bc810();
   input += synapse0x26bc2a0();
   input += synapse0x26bc2e0();
   input += synapse0x26bc960();
   input += synapse0x26bc9a0();
   input += synapse0x26bc9e0();
   input += synapse0x26bca20();
   input += synapse0x26bca60();
   input += synapse0x26bcaa0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26bc110() {
   double input = input0x26bc110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26bcae0() {
   double input = -1.15458;
   input += synapse0x26bce20();
   input += synapse0x26bce60();
   input += synapse0x26bcea0();
   input += synapse0x26bcee0();
   input += synapse0x26bcf20();
   input += synapse0x26bcf60();
   input += synapse0x26bcfa0();
   input += synapse0x26bcfe0();
   input += synapse0x26bd020();
   input += synapse0x26bd060();
   input += synapse0x26bd0a0();
   input += synapse0x26bd0e0();
   input += synapse0x26bd120();
   input += synapse0x26bd160();
   input += synapse0x26bd1a0();
   input += synapse0x26bd1e0();
   input += synapse0x26bcc70();
   input += synapse0x26bccb0();
   input += synapse0x26bd330();
   input += synapse0x26bd370();
   input += synapse0x26bd3b0();
   input += synapse0x26bd3f0();
   input += synapse0x26bd430();
   input += synapse0x26bd470();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26bcae0() {
   double input = input0x26bcae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26bd4b0() {
   double input = 0.96701;
   input += synapse0x26bd7f0();
   input += synapse0x26bd830();
   input += synapse0x26bd870();
   input += synapse0x26bd8b0();
   input += synapse0x26bd8f0();
   input += synapse0x26bd930();
   input += synapse0x26bd970();
   input += synapse0x26bd9b0();
   input += synapse0x26bd9f0();
   input += synapse0x26bda30();
   input += synapse0x26bda70();
   input += synapse0x26bdab0();
   input += synapse0x26bdaf0();
   input += synapse0x26bdb30();
   input += synapse0x26bdb70();
   input += synapse0x26bdbb0();
   input += synapse0x26bd640();
   input += synapse0x26bd680();
   input += synapse0x26bdd00();
   input += synapse0x26bdd40();
   input += synapse0x26bdd80();
   input += synapse0x26bddc0();
   input += synapse0x26bde00();
   input += synapse0x26bde40();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26bd4b0() {
   double input = input0x26bd4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26bde80() {
   double input = -1.10844;
   input += synapse0x26be1c0();
   input += synapse0x26be200();
   input += synapse0x26be240();
   input += synapse0x26be280();
   input += synapse0x26be2c0();
   input += synapse0x26be300();
   input += synapse0x26be340();
   input += synapse0x26be380();
   input += synapse0x26be3c0();
   input += synapse0x26be400();
   input += synapse0x26be440();
   input += synapse0x26be480();
   input += synapse0x26be4c0();
   input += synapse0x26be500();
   input += synapse0x26be540();
   input += synapse0x26be580();
   input += synapse0x26be010();
   input += synapse0x26be050();
   input += synapse0x26be6d0();
   input += synapse0x26be710();
   input += synapse0x26be750();
   input += synapse0x26be790();
   input += synapse0x26be7d0();
   input += synapse0x26be810();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26bde80() {
   double input = input0x26bde80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26be850() {
   double input = 0.0414855;
   input += synapse0x26beb90();
   input += synapse0x26b3160();
   input += synapse0x26b31a0();
   input += synapse0x26b31e0();
   input += synapse0x26b3430();
   input += synapse0x26b3470();
   input += synapse0x26b34b0();
   input += synapse0x26b3700();
   input += synapse0x26b3740();
   input += synapse0x26b3990();
   input += synapse0x26b39d0();
   input += synapse0x26b3a10();
   input += synapse0x26b3c60();
   input += synapse0x26b3ca0();
   input += synapse0x26b3ef0();
   input += synapse0x26b3f30();
   input += synapse0x26be9e0();
   input += synapse0x26bea20();
   input += synapse0x26b4080();
   input += synapse0x26b4590();
   input += synapse0x26b45d0();
   input += synapse0x26b4610();
   input += synapse0x26b4860();
   input += synapse0x26b48a0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26be850() {
   double input = input0x26be850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b48e0() {
   double input = -0.0681031;
   input += synapse0x26b4150();
   input += synapse0x26b4190();
   input += synapse0x26b41d0();
   input += synapse0x26b4210();
   input += synapse0x26b4b90();
   input += synapse0x26c0ee0();
   input += synapse0x26c0f20();
   input += synapse0x26c0f60();
   input += synapse0x26c0fa0();
   input += synapse0x26c0fe0();
   input += synapse0x26c1020();
   input += synapse0x26c1060();
   input += synapse0x26c10a0();
   input += synapse0x26c10e0();
   input += synapse0x26c1120();
   input += synapse0x26c1160();
   input += synapse0x26b4a70();
   input += synapse0x26b4ab0();
   input += synapse0x26c12b0();
   input += synapse0x26c12f0();
   input += synapse0x26c1330();
   input += synapse0x26c1370();
   input += synapse0x26c13b0();
   input += synapse0x26c13f0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b48e0() {
   double input = input0x26b48e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c1430() {
   double input = -0.245533;
   input += synapse0x26c1770();
   input += synapse0x26c17b0();
   input += synapse0x26c17f0();
   input += synapse0x26c1830();
   input += synapse0x26c1870();
   input += synapse0x26c18b0();
   input += synapse0x26c18f0();
   input += synapse0x26c1930();
   input += synapse0x26c1970();
   input += synapse0x26c19b0();
   input += synapse0x26c19f0();
   input += synapse0x26c1a30();
   input += synapse0x26c1a70();
   input += synapse0x26c1ab0();
   input += synapse0x26c1af0();
   input += synapse0x26c1b30();
   input += synapse0x26c15c0();
   input += synapse0x26c1600();
   input += synapse0x26c1c80();
   input += synapse0x26c1cc0();
   input += synapse0x26c1d00();
   input += synapse0x26c1d40();
   input += synapse0x26c1d80();
   input += synapse0x26c1dc0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c1430() {
   double input = input0x26c1430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c1e00() {
   double input = 0.271542;
   input += synapse0x26c2140();
   input += synapse0x26c2180();
   input += synapse0x26c21c0();
   input += synapse0x26c2200();
   input += synapse0x26c2240();
   input += synapse0x26c2280();
   input += synapse0x26c22c0();
   input += synapse0x26c2300();
   input += synapse0x26c2340();
   input += synapse0x26c2380();
   input += synapse0x26c23c0();
   input += synapse0x26c2400();
   input += synapse0x26c2440();
   input += synapse0x26c2480();
   input += synapse0x26c24c0();
   input += synapse0x26c2500();
   input += synapse0x26c1f90();
   input += synapse0x26c1fd0();
   input += synapse0x26c2650();
   input += synapse0x26c2690();
   input += synapse0x26c26d0();
   input += synapse0x26c2710();
   input += synapse0x26c2750();
   input += synapse0x26c2790();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c1e00() {
   double input = input0x26c1e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c27d0() {
   double input = -0.591887;
   input += synapse0x26c2b10();
   input += synapse0x26c2b50();
   input += synapse0x26c2b90();
   input += synapse0x26c2bd0();
   input += synapse0x26c2c10();
   input += synapse0x26c2c50();
   input += synapse0x26c2c90();
   input += synapse0x26c2cd0();
   input += synapse0x26c2d10();
   input += synapse0x26c2d50();
   input += synapse0x26c2d90();
   input += synapse0x26c2dd0();
   input += synapse0x26c2e10();
   input += synapse0x26c2e50();
   input += synapse0x26c2e90();
   input += synapse0x26c2ed0();
   input += synapse0x26c2960();
   input += synapse0x26c29a0();
   input += synapse0x26c3020();
   input += synapse0x26c3060();
   input += synapse0x26c30a0();
   input += synapse0x26c30e0();
   input += synapse0x26c3120();
   input += synapse0x26c3160();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c27d0() {
   double input = input0x26c27d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c31a0() {
   double input = 0.799579;
   input += synapse0x26c34e0();
   input += synapse0x26c3520();
   input += synapse0x26c3560();
   input += synapse0x26c35a0();
   input += synapse0x26c35e0();
   input += synapse0x26c3620();
   input += synapse0x26c3660();
   input += synapse0x26c36a0();
   input += synapse0x26c36e0();
   input += synapse0x26c3720();
   input += synapse0x26c3760();
   input += synapse0x26c37a0();
   input += synapse0x26c37e0();
   input += synapse0x26c3820();
   input += synapse0x26c3860();
   input += synapse0x26c38a0();
   input += synapse0x26c3330();
   input += synapse0x26c3370();
   input += synapse0x26c39f0();
   input += synapse0x26c3a30();
   input += synapse0x26c3a70();
   input += synapse0x26c3ab0();
   input += synapse0x26c3af0();
   input += synapse0x26c3b30();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c31a0() {
   double input = input0x26c31a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c3b70() {
   double input = 7.56581;
   input += synapse0x26c3eb0();
   input += synapse0x26c3ef0();
   input += synapse0x26c3f30();
   input += synapse0x26c3f70();
   input += synapse0x26c3fb0();
   input += synapse0x26c3ff0();
   input += synapse0x26c4030();
   input += synapse0x26c4070();
   input += synapse0x26c40b0();
   input += synapse0x26c40f0();
   input += synapse0x26c4130();
   input += synapse0x26c4170();
   input += synapse0x26c41b0();
   input += synapse0x26c41f0();
   input += synapse0x26c4230();
   input += synapse0x26c4270();
   input += synapse0x26c3d00();
   input += synapse0x26c3d40();
   input += synapse0x26c43c0();
   input += synapse0x26c4400();
   input += synapse0x26c4440();
   input += synapse0x26c4480();
   input += synapse0x26c44c0();
   input += synapse0x26c4500();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c3b70() {
   double input = input0x26c3b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c4540() {
   double input = 0.502165;
   input += synapse0x26c4880();
   input += synapse0x26c48c0();
   input += synapse0x26c4900();
   input += synapse0x26c4940();
   input += synapse0x26c4980();
   input += synapse0x26c49c0();
   input += synapse0x26c4a00();
   input += synapse0x26c4a40();
   input += synapse0x26c4a80();
   input += synapse0x26c4ac0();
   input += synapse0x26c4b00();
   input += synapse0x26c4b40();
   input += synapse0x26c4b80();
   input += synapse0x26c4bc0();
   input += synapse0x26c4c00();
   input += synapse0x26c4c40();
   input += synapse0x26c46d0();
   input += synapse0x26c4710();
   input += synapse0x26c4d90();
   input += synapse0x26c4dd0();
   input += synapse0x26c4e10();
   input += synapse0x26c4e50();
   input += synapse0x26c4e90();
   input += synapse0x26c4ed0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c4540() {
   double input = input0x26c4540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c4f10() {
   double input = -0.885888;
   input += synapse0x26c5250();
   input += synapse0x26c5290();
   input += synapse0x26c52d0();
   input += synapse0x26c5310();
   input += synapse0x26c5350();
   input += synapse0x26c5390();
   input += synapse0x26c53d0();
   input += synapse0x26c5410();
   input += synapse0x26c5450();
   input += synapse0x26c5490();
   input += synapse0x26c54d0();
   input += synapse0x26c5510();
   input += synapse0x26c5550();
   input += synapse0x26c5590();
   input += synapse0x26c55d0();
   input += synapse0x26c5610();
   input += synapse0x26c50a0();
   input += synapse0x26c50e0();
   input += synapse0x26c5760();
   input += synapse0x26c57a0();
   input += synapse0x26c57e0();
   input += synapse0x26c5820();
   input += synapse0x26c5860();
   input += synapse0x26c58a0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c4f10() {
   double input = input0x26c4f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c58e0() {
   double input = 0.817254;
   input += synapse0x26ae350();
   input += synapse0x26ae390();
   input += synapse0x26ae3d0();
   input += synapse0x26ae410();
   input += synapse0x26ae450();
   input += synapse0x26ae490();
   input += synapse0x26ae4d0();
   input += synapse0x26ae510();
   input += synapse0x26c6030();
   input += synapse0x26c6070();
   input += synapse0x26c60b0();
   input += synapse0x26c60f0();
   input += synapse0x26c6130();
   input += synapse0x26c6170();
   input += synapse0x26c61b0();
   input += synapse0x26c61f0();
   input += synapse0x26c5a70();
   input += synapse0x26c5ab0();
   input += synapse0x26c6340();
   input += synapse0x26c6380();
   input += synapse0x26c63c0();
   input += synapse0x26c6400();
   input += synapse0x26c6440();
   input += synapse0x26c6480();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c58e0() {
   double input = input0x26c58e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c64c0() {
   double input = 0.656719;
   input += synapse0x26c6800();
   input += synapse0x26c6840();
   input += synapse0x26c6880();
   input += synapse0x26c68c0();
   input += synapse0x26c6900();
   input += synapse0x26c6940();
   input += synapse0x26c6980();
   input += synapse0x26c69c0();
   input += synapse0x26c6a00();
   input += synapse0x26c6a40();
   input += synapse0x26c6a80();
   input += synapse0x26c6ac0();
   input += synapse0x26c6b00();
   input += synapse0x26c6b40();
   input += synapse0x26c6b80();
   input += synapse0x26c6bc0();
   input += synapse0x26c6650();
   input += synapse0x26c6690();
   input += synapse0x26c6d10();
   input += synapse0x26c6d50();
   input += synapse0x26c6d90();
   input += synapse0x26c6dd0();
   input += synapse0x26c6e10();
   input += synapse0x26c6e50();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c64c0() {
   double input = input0x26c64c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26c6e90() {
   double input = 0.404331;
   input += synapse0x26c71d0();
   input += synapse0x26c7210();
   input += synapse0x26c7250();
   input += synapse0x26c7290();
   input += synapse0x26c72d0();
   input += synapse0x26c7310();
   input += synapse0x26c7350();
   input += synapse0x26c7390();
   input += synapse0x26c73d0();
   input += synapse0x26c7410();
   input += synapse0x26c7450();
   input += synapse0x26c7490();
   input += synapse0x26c74d0();
   input += synapse0x26c7510();
   input += synapse0x26c7550();
   input += synapse0x26c7590();
   input += synapse0x26c7020();
   input += synapse0x26c7060();
   input += synapse0x26b7b90();
   input += synapse0x26b7bd0();
   input += synapse0x26b7c10();
   input += synapse0x26b7c50();
   input += synapse0x26b7c90();
   input += synapse0x26b7cd0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26c6e90() {
   double input = input0x26c6e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b7d10() {
   double input = 0.892579;
   input += synapse0x26b8050();
   input += synapse0x26b8090();
   input += synapse0x26b80d0();
   input += synapse0x26b8110();
   input += synapse0x26b8150();
   input += synapse0x26b8190();
   input += synapse0x26b81d0();
   input += synapse0x26b8210();
   input += synapse0x26b8250();
   input += synapse0x26b8290();
   input += synapse0x26b82d0();
   input += synapse0x26b8310();
   input += synapse0x26b8350();
   input += synapse0x26b8390();
   input += synapse0x26b83d0();
   input += synapse0x26b8410();
   input += synapse0x26b7ea0();
   input += synapse0x26b7ee0();
   input += synapse0x26b8560();
   input += synapse0x26b85a0();
   input += synapse0x26b85e0();
   input += synapse0x26b8620();
   input += synapse0x26b8660();
   input += synapse0x26b86a0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b7d10() {
   double input = input0x26b7d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b86e0() {
   double input = -0.0501211;
   input += synapse0x26b8a20();
   input += synapse0x26b8a60();
   input += synapse0x26b8aa0();
   input += synapse0x26b8ae0();
   input += synapse0x26b8b20();
   input += synapse0x26b8b60();
   input += synapse0x26b8ba0();
   input += synapse0x26b8be0();
   input += synapse0x26b8c20();
   input += synapse0x26b8c60();
   input += synapse0x26b8ca0();
   input += synapse0x26b8ce0();
   input += synapse0x26b8d20();
   input += synapse0x26b8d60();
   input += synapse0x26b8da0();
   input += synapse0x26b8de0();
   input += synapse0x26b8870();
   input += synapse0x26b88b0();
   input += synapse0x26b8f30();
   input += synapse0x26b8f70();
   input += synapse0x26b8fb0();
   input += synapse0x26b8ff0();
   input += synapse0x26b9030();
   input += synapse0x26b9070();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b86e0() {
   double input = input0x26b86e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26b90b0() {
   double input = 1.88071;
   input += synapse0x26b93f0();
   input += synapse0x26b9430();
   input += synapse0x26b9470();
   input += synapse0x26b94b0();
   input += synapse0x26b94f0();
   input += synapse0x26b9530();
   input += synapse0x26b9570();
   input += synapse0x26b95b0();
   input += synapse0x26b95f0();
   input += synapse0x26b9630();
   input += synapse0x26b9670();
   input += synapse0x26b96b0();
   input += synapse0x26b96f0();
   input += synapse0x26b9730();
   input += synapse0x26b9770();
   input += synapse0x26b97b0();
   input += synapse0x26b9240();
   input += synapse0x26b9280();
   input += synapse0x26b9900();
   input += synapse0x26b9940();
   input += synapse0x26b9980();
   input += synapse0x26b99c0();
   input += synapse0x26b9a00();
   input += synapse0x26b9a40();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26b90b0() {
   double input = input0x26b90b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26cb6f0() {
   double input = 1.07463;
   input += synapse0x26cb910();
   input += synapse0x26cb950();
   input += synapse0x26cb990();
   input += synapse0x26cb9d0();
   input += synapse0x26cba10();
   input += synapse0x26cba50();
   input += synapse0x26cba90();
   input += synapse0x26cbad0();
   input += synapse0x26cbb10();
   input += synapse0x26cbb50();
   input += synapse0x26cbb90();
   input += synapse0x26cbbd0();
   input += synapse0x26cbc10();
   input += synapse0x26cbc50();
   input += synapse0x26cbc90();
   input += synapse0x26cbcd0();
   input += synapse0x26b9a80();
   input += synapse0x26b9ac0();
   input += synapse0x26cbe20();
   input += synapse0x26cbe60();
   input += synapse0x26cbea0();
   input += synapse0x26cbee0();
   input += synapse0x26cbf20();
   input += synapse0x26cbf60();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26cb6f0() {
   double input = input0x26cb6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26cbfa0() {
   double input = 1.65653;
   input += synapse0x26cc2e0();
   input += synapse0x26cc320();
   input += synapse0x26cc360();
   input += synapse0x26cc3a0();
   input += synapse0x26cc3e0();
   input += synapse0x26cc420();
   input += synapse0x26cc460();
   input += synapse0x26cc4a0();
   input += synapse0x26cc4e0();
   input += synapse0x26cc520();
   input += synapse0x26cc560();
   input += synapse0x26cc5a0();
   input += synapse0x26cc5e0();
   input += synapse0x26cc620();
   input += synapse0x26cc660();
   input += synapse0x26cc6a0();
   input += synapse0x26cc130();
   input += synapse0x26cc170();
   input += synapse0x26cc7f0();
   input += synapse0x26cc830();
   input += synapse0x26cc870();
   input += synapse0x26cc8b0();
   input += synapse0x26cc8f0();
   input += synapse0x26cc930();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26cbfa0() {
   double input = input0x26cbfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26cc970() {
   double input = -1.42624;
   input += synapse0x26cccb0();
   input += synapse0x26cccf0();
   input += synapse0x26ccd30();
   input += synapse0x26ccd70();
   input += synapse0x26ccdb0();
   input += synapse0x26ccdf0();
   input += synapse0x26cce30();
   input += synapse0x26cce70();
   input += synapse0x26cceb0();
   input += synapse0x26ccef0();
   input += synapse0x26ccf30();
   input += synapse0x26ccf70();
   input += synapse0x26ccfb0();
   input += synapse0x26ccff0();
   input += synapse0x26cd030();
   input += synapse0x26cd070();
   input += synapse0x26ccb00();
   input += synapse0x26ccb40();
   input += synapse0x26cd1c0();
   input += synapse0x26cd200();
   input += synapse0x26cd240();
   input += synapse0x26cd280();
   input += synapse0x26cd2c0();
   input += synapse0x26cd300();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26cc970() {
   double input = input0x26cc970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26cd340() {
   double input = 0.868868;
   input += synapse0x26cd680();
   input += synapse0x26cd6c0();
   input += synapse0x26cd700();
   input += synapse0x26cd740();
   input += synapse0x26cd780();
   input += synapse0x26cd7c0();
   input += synapse0x26cd800();
   input += synapse0x26cd840();
   input += synapse0x26cd880();
   input += synapse0x26cd8c0();
   input += synapse0x26cd900();
   input += synapse0x26cd940();
   input += synapse0x26cd980();
   input += synapse0x26cd9c0();
   input += synapse0x26cda00();
   input += synapse0x26cda40();
   input += synapse0x26cd4d0();
   input += synapse0x26cd510();
   input += synapse0x26cdb90();
   input += synapse0x26cdbd0();
   input += synapse0x26cdc10();
   input += synapse0x26cdc50();
   input += synapse0x26cdc90();
   input += synapse0x26cdcd0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26cd340() {
   double input = input0x26cd340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26d4540() {
   double input = 0.869262;
   input += synapse0x26aa260();
   input += synapse0x26aa2a0();
   input += synapse0x26ab780();
   input += synapse0x26ab7c0();
   input += synapse0x26ac150();
   input += synapse0x26ac190();
   input += synapse0x26acf20();
   input += synapse0x26acf60();
   input += synapse0x26ad8f0();
   input += synapse0x26ad930();
   input += synapse0x26ae2c0();
   input += synapse0x26ae300();
   input += synapse0x26aeda0();
   input += synapse0x26aede0();
   input += synapse0x26af770();
   input += synapse0x26af7b0();
   input += synapse0x26ac850();
   input += synapse0x26ac890();
   input += synapse0x26b1320();
   input += synapse0x26b1360();
   input += synapse0x26b1cf0();
   input += synapse0x26b1d30();
   input += synapse0x26b26c0();
   input += synapse0x26b2700();
   input += synapse0x26b3090();
   input += synapse0x26b30d0();
   input += synapse0x26a7270();
   input += synapse0x26a72b0();
   input += synapse0x26b5180();
   input += synapse0x26b51c0();
   input += synapse0x26b5b50();
   input += synapse0x26b5b90();
   input += synapse0x26b6520();
   input += synapse0x26b6560();
   input += synapse0x26b6ef0();
   input += synapse0x26b6f30();
   input += synapse0x26b78c0();
   input += synapse0x26b7900();
   input += synapse0x26b0410();
   input += synapse0x26b0450();
   input += synapse0x26b9cc0();
   input += synapse0x26b9d00();
   input += synapse0x26ba650();
   input += synapse0x26ba690();
   input += synapse0x26bb020();
   input += synapse0x26bb060();
   input += synapse0x26bb9f0();
   input += synapse0x26bba30();
   input += synapse0x26bc3c0();
   input += synapse0x26bc400();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26d4540() {
   double input = input0x26d4540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26d48e0() {
   double input = -0.174681;
   input += synapse0x26beb00();
   input += synapse0x26beb40();
   input += synapse0x26b40c0();
   input += synapse0x26b4100();
   input += synapse0x26c16e0();
   input += synapse0x26c1720();
   input += synapse0x26c20b0();
   input += synapse0x26c20f0();
   input += synapse0x26c2a80();
   input += synapse0x26c2ac0();
   input += synapse0x26c3450();
   input += synapse0x26c3490();
   input += synapse0x26c3e20();
   input += synapse0x26c3e60();
   input += synapse0x26c47f0();
   input += synapse0x26c4830();
   input += synapse0x26c51c0();
   input += synapse0x26c5200();
   input += synapse0x26c5b90();
   input += synapse0x26c5bd0();
   input += synapse0x26c6770();
   input += synapse0x26c67b0();
   input += synapse0x26c7140();
   input += synapse0x26c7180();
   input += synapse0x26b7fc0();
   input += synapse0x26b8000();
   input += synapse0x26b8990();
   input += synapse0x26b89d0();
   input += synapse0x26b9360();
   input += synapse0x26b93a0();
   input += synapse0x26cb880();
   input += synapse0x26cb8c0();
   input += synapse0x26cc250();
   input += synapse0x26cc290();
   input += synapse0x26ccc20();
   input += synapse0x26ccc60();
   input += synapse0x26cd5f0();
   input += synapse0x26cd630();
   input += synapse0x26a9520();
   input += synapse0x26a9560();
   input += synapse0x26bcd90();
   input += synapse0x26bcdd0();
   input += synapse0x26cdd10();
   input += synapse0x26cdd50();
   input += synapse0x26cdd90();
   input += synapse0x26cddd0();
   input += synapse0x26d4c80();
   input += synapse0x26d4cc0();
   input += synapse0x26d4d00();
   input += synapse0x26d4d40();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26d48e0() {
   double input = input0x26d48e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26d4d80() {
   double input = 0.185988;
   input += synapse0x26d50c0();
   input += synapse0x26d5100();
   input += synapse0x26d5140();
   input += synapse0x26d5180();
   input += synapse0x26d51c0();
   input += synapse0x26d5200();
   input += synapse0x26d5240();
   input += synapse0x26d5280();
   input += synapse0x26d52c0();
   input += synapse0x26d5300();
   input += synapse0x26d5340();
   input += synapse0x26d5380();
   input += synapse0x26d53c0();
   input += synapse0x26d5400();
   input += synapse0x26d5440();
   input += synapse0x26d5480();
   input += synapse0x26d4f10();
   input += synapse0x26d4f50();
   input += synapse0x26d55d0();
   input += synapse0x26d5610();
   input += synapse0x26d5650();
   input += synapse0x26d5690();
   input += synapse0x26d56d0();
   input += synapse0x26d5710();
   input += synapse0x26d5750();
   input += synapse0x26d5790();
   input += synapse0x26d57d0();
   input += synapse0x26d5810();
   input += synapse0x26d5850();
   input += synapse0x26d5890();
   input += synapse0x26d58d0();
   input += synapse0x26d5910();
   input += synapse0x26d54c0();
   input += synapse0x26d5500();
   input += synapse0x26d5540();
   input += synapse0x26d5580();
   input += synapse0x26d5b60();
   input += synapse0x26d5ba0();
   input += synapse0x26d5be0();
   input += synapse0x26d5c20();
   input += synapse0x26d5c60();
   input += synapse0x26d5ca0();
   input += synapse0x26d5ce0();
   input += synapse0x26d5d20();
   input += synapse0x26d5d60();
   input += synapse0x26d5da0();
   input += synapse0x26d5de0();
   input += synapse0x26d5e20();
   input += synapse0x26d5e60();
   input += synapse0x26d5ea0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26d4d80() {
   double input = input0x26d4d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26d5ee0() {
   double input = -0.319769;
   input += synapse0x26d6220();
   input += synapse0x26d6260();
   input += synapse0x26d62a0();
   input += synapse0x26d62e0();
   input += synapse0x26d6320();
   input += synapse0x26d6360();
   input += synapse0x26d63a0();
   input += synapse0x26d63e0();
   input += synapse0x26d6420();
   input += synapse0x26d6460();
   input += synapse0x26d64a0();
   input += synapse0x26d64e0();
   input += synapse0x26d6520();
   input += synapse0x26d6560();
   input += synapse0x26d65a0();
   input += synapse0x26d65e0();
   input += synapse0x26d6070();
   input += synapse0x26d60b0();
   input += synapse0x26d6730();
   input += synapse0x26d6770();
   input += synapse0x26d67b0();
   input += synapse0x26d67f0();
   input += synapse0x26d6830();
   input += synapse0x26d6870();
   input += synapse0x26d68b0();
   input += synapse0x26d68f0();
   input += synapse0x26d6930();
   input += synapse0x26d6970();
   input += synapse0x26d69b0();
   input += synapse0x26d69f0();
   input += synapse0x26d6a30();
   input += synapse0x26d6a70();
   input += synapse0x26d6620();
   input += synapse0x26d6660();
   input += synapse0x26d66a0();
   input += synapse0x26d66e0();
   input += synapse0x26d6cc0();
   input += synapse0x26d6d00();
   input += synapse0x26d6d40();
   input += synapse0x26d6d80();
   input += synapse0x26d6dc0();
   input += synapse0x26d6e00();
   input += synapse0x26d6e40();
   input += synapse0x26d6e80();
   input += synapse0x26d6ec0();
   input += synapse0x26d6f00();
   input += synapse0x26d6f40();
   input += synapse0x26d6f80();
   input += synapse0x26d6fc0();
   input += synapse0x26d7000();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26d5ee0() {
   double input = input0x26d5ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26d7040() {
   double input = -1.24834;
   input += synapse0x26d7380();
   input += synapse0x26d73c0();
   input += synapse0x26d7400();
   input += synapse0x26d7440();
   input += synapse0x26d7480();
   input += synapse0x26d74c0();
   input += synapse0x26d7500();
   input += synapse0x26d7540();
   input += synapse0x26d7580();
   input += synapse0x26d75c0();
   input += synapse0x26d7600();
   input += synapse0x26d7640();
   input += synapse0x26d7680();
   input += synapse0x26d76c0();
   input += synapse0x26d7700();
   input += synapse0x26d7740();
   input += synapse0x26d71d0();
   input += synapse0x26d7210();
   input += synapse0x26d7890();
   input += synapse0x26d78d0();
   input += synapse0x26d7910();
   input += synapse0x26d7950();
   input += synapse0x26d7990();
   input += synapse0x26d79d0();
   input += synapse0x26d7a10();
   input += synapse0x26d7a50();
   input += synapse0x26d7a90();
   input += synapse0x26d7ad0();
   input += synapse0x26d7b10();
   input += synapse0x26d7b50();
   input += synapse0x26d7b90();
   input += synapse0x26d7bd0();
   input += synapse0x26d7780();
   input += synapse0x26d77c0();
   input += synapse0x26d7800();
   input += synapse0x26d7840();
   input += synapse0x26d7e20();
   input += synapse0x26d7e60();
   input += synapse0x26d7ea0();
   input += synapse0x26d7ee0();
   input += synapse0x26d7f20();
   input += synapse0x26d7f60();
   input += synapse0x26d7fa0();
   input += synapse0x26d7fe0();
   input += synapse0x26d8020();
   input += synapse0x26d8060();
   input += synapse0x26d80a0();
   input += synapse0x26d80e0();
   input += synapse0x26d8120();
   input += synapse0x26d8160();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26d7040() {
   double input = input0x26d7040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x26d81a0() {
   double input = 2.31258;
   input += synapse0x26d83c0();
   input += synapse0x26d8400();
   input += synapse0x26d8440();
   input += synapse0x26d8480();
   input += synapse0x26d84c0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x26d81a0() {
   double input = input0x26d81a0();
   return (input * 1)+0;
}

double NNfunction_sb_dLuR::synapse0x26a42e0() {
   return (neuron0x26a4360()*-0.427732);
}

double NNfunction_sb_dLuR::synapse0x26a4320() {
   return (neuron0x26a4610()*0.113781);
}

double NNfunction_sb_dLuR::synapse0x26a95b0() {
   return (neuron0x26a4950()*0.0608626);
}

double NNfunction_sb_dLuR::synapse0x26a95f0() {
   return (neuron0x26a4c90()*0.352791);
}

double NNfunction_sb_dLuR::synapse0x26a9630() {
   return (neuron0x26a4fd0()*0.0188535);
}

double NNfunction_sb_dLuR::synapse0x26a9670() {
   return (neuron0x26a5310()*0.126229);
}

double NNfunction_sb_dLuR::synapse0x26a96b0() {
   return (neuron0x26a5650()*-0.0747249);
}

double NNfunction_sb_dLuR::synapse0x26a96f0() {
   return (neuron0x26a5990()*-0.358048);
}

double NNfunction_sb_dLuR::synapse0x26a9730() {
   return (neuron0x26a5cd0()*0.428669);
}

double NNfunction_sb_dLuR::synapse0x26a9770() {
   return (neuron0x26a6010()*0.3686);
}

double NNfunction_sb_dLuR::synapse0x26a97b0() {
   return (neuron0x26a6350()*0.330745);
}

double NNfunction_sb_dLuR::synapse0x26a97f0() {
   return (neuron0x26a6690()*0.0473617);
}

double NNfunction_sb_dLuR::synapse0x26a9830() {
   return (neuron0x26a69d0()*-0.412491);
}

double NNfunction_sb_dLuR::synapse0x26a9870() {
   return (neuron0x26a6d10()*-0.534913);
}

double NNfunction_sb_dLuR::synapse0x26a98b0() {
   return (neuron0x26a7050()*0.41871);
}

double NNfunction_sb_dLuR::synapse0x26a98f0() {
   return (neuron0x26a7390()*0.781509);
}

double NNfunction_sb_dLuR::synapse0x26a4250() {
   return (neuron0x26a76d0()*-0.17078);
}

double NNfunction_sb_dLuR::synapse0x26a4290() {
   return (neuron0x26a7c30()*0.0299763);
}

double NNfunction_sb_dLuR::synapse0x245f420() {
   return (neuron0x26a7e50()*0.130972);
}

double NNfunction_sb_dLuR::synapse0x245f460() {
   return (neuron0x26a8190()*0.561022);
}

double NNfunction_sb_dLuR::synapse0x26a9b50() {
   return (neuron0x26a84d0()*0.486612);
}

double NNfunction_sb_dLuR::synapse0x26a9b90() {
   return (neuron0x26a8810()*0.168847);
}

double NNfunction_sb_dLuR::synapse0x26a9bd0() {
   return (neuron0x26a8b50()*-0.221949);
}

double NNfunction_sb_dLuR::synapse0x26a9c10() {
   return (neuron0x26a8e90()*0.551178);
}

double NNfunction_sb_dLuR::synapse0x26a9f90() {
   return (neuron0x26a4360()*0.0292677);
}

double NNfunction_sb_dLuR::synapse0x26a9fd0() {
   return (neuron0x26a4610()*0.196194);
}

double NNfunction_sb_dLuR::synapse0x26aa010() {
   return (neuron0x26a4950()*0.00150501);
}

double NNfunction_sb_dLuR::synapse0x26aa050() {
   return (neuron0x26a4c90()*0.436464);
}

double NNfunction_sb_dLuR::synapse0x26aa090() {
   return (neuron0x26a4fd0()*-0.0461986);
}

double NNfunction_sb_dLuR::synapse0x26aa0d0() {
   return (neuron0x26a5310()*-0.0277637);
}

double NNfunction_sb_dLuR::synapse0x26aa110() {
   return (neuron0x26a5650()*-0.0671358);
}

double NNfunction_sb_dLuR::synapse0x26aa150() {
   return (neuron0x26a5990()*-0.134705);
}

double NNfunction_sb_dLuR::synapse0x26aa190() {
   return (neuron0x26a5cd0()*0.0359862);
}

double NNfunction_sb_dLuR::synapse0x26a9a40() {
   return (neuron0x26a6010()*0.00172771);
}

double NNfunction_sb_dLuR::synapse0x26a9a80() {
   return (neuron0x26a6350()*0.127164);
}

double NNfunction_sb_dLuR::synapse0x26a9ac0() {
   return (neuron0x26a6690()*0.0954798);
}

double NNfunction_sb_dLuR::synapse0x26a9b00() {
   return (neuron0x26a69d0()*-0.0217932);
}

double NNfunction_sb_dLuR::synapse0x26aa3e0() {
   return (neuron0x26a6d10()*0.0561732);
}

double NNfunction_sb_dLuR::synapse0x26aa420() {
   return (neuron0x26a7050()*-0.23599);
}

double NNfunction_sb_dLuR::synapse0x26aa460() {
   return (neuron0x26a7390()*-0.0702989);
}

double NNfunction_sb_dLuR::synapse0x26a9de0() {
   return (neuron0x26a76d0()*-0.0204753);
}

double NNfunction_sb_dLuR::synapse0x26a9e20() {
   return (neuron0x26a7c30()*-0.160079);
}

double NNfunction_sb_dLuR::synapse0x26aa5b0() {
   return (neuron0x26a7e50()*-0.122129);
}

double NNfunction_sb_dLuR::synapse0x26aa5f0() {
   return (neuron0x26a8190()*-0.0297324);
}

double NNfunction_sb_dLuR::synapse0x26aa630() {
   return (neuron0x26a84d0()*-0.00398131);
}

double NNfunction_sb_dLuR::synapse0x26aa670() {
   return (neuron0x26a8810()*0.0159321);
}

double NNfunction_sb_dLuR::synapse0x26aa6b0() {
   return (neuron0x26a8b50()*0.00269501);
}

double NNfunction_sb_dLuR::synapse0x26aa6f0() {
   return (neuron0x26a8e90()*-0.0596205);
}

double NNfunction_sb_dLuR::synapse0x26aaa70() {
   return (neuron0x26a4360()*0.302285);
}

double NNfunction_sb_dLuR::synapse0x26aaab0() {
   return (neuron0x26a4610()*0.0241301);
}

double NNfunction_sb_dLuR::synapse0x26aaaf0() {
   return (neuron0x26a4950()*-0.313989);
}

double NNfunction_sb_dLuR::synapse0x26aab30() {
   return (neuron0x26a4c90()*0.468828);
}

double NNfunction_sb_dLuR::synapse0x26aab70() {
   return (neuron0x26a4fd0()*-0.0526315);
}

double NNfunction_sb_dLuR::synapse0x26aabb0() {
   return (neuron0x26a5310()*-0.0877288);
}

double NNfunction_sb_dLuR::synapse0x26aabf0() {
   return (neuron0x26a5650()*-0.202818);
}

double NNfunction_sb_dLuR::synapse0x26aac30() {
   return (neuron0x26a5990()*0.601805);
}

double NNfunction_sb_dLuR::synapse0x26aac70() {
   return (neuron0x26a5cd0()*0.182769);
}

double NNfunction_sb_dLuR::synapse0x26aacb0() {
   return (neuron0x26a6010()*-0.204141);
}

double NNfunction_sb_dLuR::synapse0x26aacf0() {
   return (neuron0x26a6350()*0.3475);
}

double NNfunction_sb_dLuR::synapse0x26aad30() {
   return (neuron0x26a6690()*-0.558585);
}

double NNfunction_sb_dLuR::synapse0x26aad70() {
   return (neuron0x26a69d0()*0.246586);
}

double NNfunction_sb_dLuR::synapse0x26aadb0() {
   return (neuron0x26a6d10()*0.872767);
}

double NNfunction_sb_dLuR::synapse0x26aadf0() {
   return (neuron0x26a7050()*-0.0469125);
}

double NNfunction_sb_dLuR::synapse0x26aae30() {
   return (neuron0x26a7390()*-0.111466);
}

double NNfunction_sb_dLuR::synapse0x26aa8c0() {
   return (neuron0x26a76d0()*-0.15694);
}

double NNfunction_sb_dLuR::synapse0x26aa900() {
   return (neuron0x26a7c30()*-0.0227386);
}

double NNfunction_sb_dLuR::synapse0x26933d0() {
   return (neuron0x26a7e50()*0.414118);
}

double NNfunction_sb_dLuR::synapse0x246d320() {
   return (neuron0x26a8190()*0.353442);
}

double NNfunction_sb_dLuR::synapse0x246d360() {
   return (neuron0x26a84d0()*0.288218);
}

double NNfunction_sb_dLuR::synapse0x2588870() {
   return (neuron0x26a8810()*0.409761);
}

double NNfunction_sb_dLuR::synapse0x25888b0() {
   return (neuron0x26a8b50()*-0.158602);
}

double NNfunction_sb_dLuR::synapse0x26a40c0() {
   return (neuron0x26a8e90()*0.112138);
}

double NNfunction_sb_dLuR::synapse0x246dc10() {
   return (neuron0x26a4360()*-0.154888);
}

double NNfunction_sb_dLuR::synapse0x26aa2f0() {
   return (neuron0x26a4610()*-0.128096);
}

double NNfunction_sb_dLuR::synapse0x26aa330() {
   return (neuron0x26a4950()*0.0191019);
}

double NNfunction_sb_dLuR::synapse0x26aa370() {
   return (neuron0x26a4c90()*-0.466507);
}

double NNfunction_sb_dLuR::synapse0x26aaf80() {
   return (neuron0x26a4fd0()*-0.431914);
}

double NNfunction_sb_dLuR::synapse0x26aafc0() {
   return (neuron0x26a5310()*-0.208278);
}

double NNfunction_sb_dLuR::synapse0x26ab000() {
   return (neuron0x26a5650()*-0.513135);
}

double NNfunction_sb_dLuR::synapse0x26ab040() {
   return (neuron0x26a5990()*0.2412);
}

double NNfunction_sb_dLuR::synapse0x26ab080() {
   return (neuron0x26a5cd0()*0.380593);
}

double NNfunction_sb_dLuR::synapse0x26ab0c0() {
   return (neuron0x26a6010()*0.476205);
}

double NNfunction_sb_dLuR::synapse0x26ab100() {
   return (neuron0x26a6350()*0.191365);
}

double NNfunction_sb_dLuR::synapse0x26ab140() {
   return (neuron0x26a6690()*-0.466076);
}

double NNfunction_sb_dLuR::synapse0x26ab180() {
   return (neuron0x26a69d0()*0.165935);
}

double NNfunction_sb_dLuR::synapse0x26ab1c0() {
   return (neuron0x26a6d10()*0.448376);
}

double NNfunction_sb_dLuR::synapse0x26ab200() {
   return (neuron0x26a7050()*0.0209754);
}

double NNfunction_sb_dLuR::synapse0x26ab240() {
   return (neuron0x26a7390()*-0.443406);
}

double NNfunction_sb_dLuR::synapse0x26a4100() {
   return (neuron0x26a76d0()*-0.257869);
}

double NNfunction_sb_dLuR::synapse0x26a4140() {
   return (neuron0x26a7c30()*0.0374642);
}

double NNfunction_sb_dLuR::synapse0x26a4180() {
   return (neuron0x26a7e50()*0.414706);
}

double NNfunction_sb_dLuR::synapse0x26ab390() {
   return (neuron0x26a8190()*-0.117873);
}

double NNfunction_sb_dLuR::synapse0x26ab3d0() {
   return (neuron0x26a84d0()*-0.361775);
}

double NNfunction_sb_dLuR::synapse0x26ab410() {
   return (neuron0x26a8810()*-0.443402);
}

double NNfunction_sb_dLuR::synapse0x26ab450() {
   return (neuron0x26a8b50()*0.0754574);
}

double NNfunction_sb_dLuR::synapse0x26ab490() {
   return (neuron0x26a8e90()*-0.15157);
}

double NNfunction_sb_dLuR::synapse0x26ab810() {
   return (neuron0x26a4360()*-0.00485962);
}

double NNfunction_sb_dLuR::synapse0x26ab850() {
   return (neuron0x26a4610()*0.0492038);
}

double NNfunction_sb_dLuR::synapse0x26ab890() {
   return (neuron0x26a4950()*0.547368);
}

double NNfunction_sb_dLuR::synapse0x26ab8d0() {
   return (neuron0x26a4c90()*-0.0212723);
}

double NNfunction_sb_dLuR::synapse0x26ab910() {
   return (neuron0x26a4fd0()*0.246522);
}

double NNfunction_sb_dLuR::synapse0x26ab950() {
   return (neuron0x26a5310()*-0.309249);
}

double NNfunction_sb_dLuR::synapse0x26ab990() {
   return (neuron0x26a5650()*-0.13623);
}

double NNfunction_sb_dLuR::synapse0x26ab9d0() {
   return (neuron0x26a5990()*-0.0498202);
}

double NNfunction_sb_dLuR::synapse0x26aba10() {
   return (neuron0x26a5cd0()*-0.212585);
}

double NNfunction_sb_dLuR::synapse0x26aba50() {
   return (neuron0x26a6010()*0.437471);
}

double NNfunction_sb_dLuR::synapse0x26aba90() {
   return (neuron0x26a6350()*0.190748);
}

double NNfunction_sb_dLuR::synapse0x26abad0() {
   return (neuron0x26a6690()*-0.875336);
}

double NNfunction_sb_dLuR::synapse0x26abb10() {
   return (neuron0x26a69d0()*-0.371471);
}

double NNfunction_sb_dLuR::synapse0x26abb50() {
   return (neuron0x26a6d10()*0.118608);
}

double NNfunction_sb_dLuR::synapse0x26abb90() {
   return (neuron0x26a7050()*0.166307);
}

double NNfunction_sb_dLuR::synapse0x26abbd0() {
   return (neuron0x26a7390()*0.869851);
}

double NNfunction_sb_dLuR::synapse0x26ab660() {
   return (neuron0x26a76d0()*0.0226494);
}

double NNfunction_sb_dLuR::synapse0x26ab6a0() {
   return (neuron0x26a7c30()*0.273617);
}

double NNfunction_sb_dLuR::synapse0x26abd20() {
   return (neuron0x26a7e50()*0.3178);
}

double NNfunction_sb_dLuR::synapse0x26abd60() {
   return (neuron0x26a8190()*-0.063974);
}

double NNfunction_sb_dLuR::synapse0x26abda0() {
   return (neuron0x26a84d0()*-0.173546);
}

double NNfunction_sb_dLuR::synapse0x26abde0() {
   return (neuron0x26a8810()*0.219001);
}

double NNfunction_sb_dLuR::synapse0x26abe20() {
   return (neuron0x26a8b50()*0.0313809);
}

double NNfunction_sb_dLuR::synapse0x26abe60() {
   return (neuron0x26a8e90()*0.28262);
}

double NNfunction_sb_dLuR::synapse0x26ac1e0() {
   return (neuron0x26a4360()*-0.158054);
}

double NNfunction_sb_dLuR::synapse0x26ac220() {
   return (neuron0x26a4610()*-0.185451);
}

double NNfunction_sb_dLuR::synapse0x26ac260() {
   return (neuron0x26a4950()*-0.636995);
}

double NNfunction_sb_dLuR::synapse0x26ac2a0() {
   return (neuron0x26a4c90()*0.376566);
}

double NNfunction_sb_dLuR::synapse0x26ac2e0() {
   return (neuron0x26a4fd0()*-0.124066);
}

double NNfunction_sb_dLuR::synapse0x26ac320() {
   return (neuron0x26a5310()*-0.101948);
}

double NNfunction_sb_dLuR::synapse0x26ac360() {
   return (neuron0x26a5650()*-0.0712534);
}

double NNfunction_sb_dLuR::synapse0x26ac3a0() {
   return (neuron0x26a5990()*0.190957);
}

double NNfunction_sb_dLuR::synapse0x26ac3e0() {
   return (neuron0x26a5cd0()*-0.0349447);
}

double NNfunction_sb_dLuR::synapse0x246d670() {
   return (neuron0x26a6010()*-0.398503);
}

double NNfunction_sb_dLuR::synapse0x246d6b0() {
   return (neuron0x26a6350()*0.0266113);
}

double NNfunction_sb_dLuR::synapse0x246d6f0() {
   return (neuron0x26a6690()*-0.11355);
}

double NNfunction_sb_dLuR::synapse0x246d730() {
   return (neuron0x26a69d0()*-0.0472311);
}

double NNfunction_sb_dLuR::synapse0x246d770() {
   return (neuron0x26a6d10()*0.239909);
}

double NNfunction_sb_dLuR::synapse0x246d7b0() {
   return (neuron0x26a7050()*0.669897);
}

double NNfunction_sb_dLuR::synapse0x246d7f0() {
   return (neuron0x26a7390()*0.0858657);
}

double NNfunction_sb_dLuR::synapse0x26ac030() {
   return (neuron0x26a76d0()*0.0604385);
}

double NNfunction_sb_dLuR::synapse0x26ac070() {
   return (neuron0x26a7c30()*-0.166517);
}

double NNfunction_sb_dLuR::synapse0x246d940() {
   return (neuron0x26a7e50()*-0.607008);
}

double NNfunction_sb_dLuR::synapse0x246d980() {
   return (neuron0x26a8190()*0.0466869);
}

double NNfunction_sb_dLuR::synapse0x246d9c0() {
   return (neuron0x26a84d0()*-0.399201);
}

double NNfunction_sb_dLuR::synapse0x246da00() {
   return (neuron0x26a8810()*0.257625);
}

double NNfunction_sb_dLuR::synapse0x246da40() {
   return (neuron0x26a8b50()*-0.413198);
}

double NNfunction_sb_dLuR::synapse0x26acc30() {
   return (neuron0x26a8e90()*0.175408);
}

double NNfunction_sb_dLuR::synapse0x26acfb0() {
   return (neuron0x26a4360()*-0.00337837);
}

double NNfunction_sb_dLuR::synapse0x26acff0() {
   return (neuron0x26a4610()*-0.0224426);
}

double NNfunction_sb_dLuR::synapse0x26ad030() {
   return (neuron0x26a4950()*0.0660035);
}

double NNfunction_sb_dLuR::synapse0x26ad070() {
   return (neuron0x26a4c90()*0.534368);
}

double NNfunction_sb_dLuR::synapse0x26ad0b0() {
   return (neuron0x26a4fd0()*-0.0104788);
}

double NNfunction_sb_dLuR::synapse0x26ad0f0() {
   return (neuron0x26a5310()*0.00619975);
}

double NNfunction_sb_dLuR::synapse0x26ad130() {
   return (neuron0x26a5650()*0.0306557);
}

double NNfunction_sb_dLuR::synapse0x26ad170() {
   return (neuron0x26a5990()*0.0174505);
}

double NNfunction_sb_dLuR::synapse0x26ad1b0() {
   return (neuron0x26a5cd0()*0.0264906);
}

double NNfunction_sb_dLuR::synapse0x26ad1f0() {
   return (neuron0x26a6010()*-0.00801204);
}

double NNfunction_sb_dLuR::synapse0x26ad230() {
   return (neuron0x26a6350()*-0.000396136);
}

double NNfunction_sb_dLuR::synapse0x26ad270() {
   return (neuron0x26a6690()*0.0667184);
}

double NNfunction_sb_dLuR::synapse0x26ad2b0() {
   return (neuron0x26a69d0()*0.0764317);
}

double NNfunction_sb_dLuR::synapse0x26ad2f0() {
   return (neuron0x26a6d10()*-0.0270447);
}

double NNfunction_sb_dLuR::synapse0x26ad330() {
   return (neuron0x26a7050()*-0.0392519);
}

double NNfunction_sb_dLuR::synapse0x26ad370() {
   return (neuron0x26a7390()*0.0132041);
}

double NNfunction_sb_dLuR::synapse0x26ace00() {
   return (neuron0x26a76d0()*-0.0198102);
}

double NNfunction_sb_dLuR::synapse0x26ace40() {
   return (neuron0x26a7c30()*0.0504953);
}

double NNfunction_sb_dLuR::synapse0x26ad4c0() {
   return (neuron0x26a7e50()*0.0375719);
}

double NNfunction_sb_dLuR::synapse0x26ad500() {
   return (neuron0x26a8190()*0.0278894);
}

double NNfunction_sb_dLuR::synapse0x26ad540() {
   return (neuron0x26a84d0()*-0.0160881);
}

double NNfunction_sb_dLuR::synapse0x26ad580() {
   return (neuron0x26a8810()*-0.00192359);
}

double NNfunction_sb_dLuR::synapse0x26ad5c0() {
   return (neuron0x26a8b50()*-0.00486682);
}

double NNfunction_sb_dLuR::synapse0x26ad600() {
   return (neuron0x26a8e90()*0.0178173);
}

double NNfunction_sb_dLuR::synapse0x26ad980() {
   return (neuron0x26a4360()*-0.276847);
}

double NNfunction_sb_dLuR::synapse0x26ad9c0() {
   return (neuron0x26a4610()*0.215881);
}

double NNfunction_sb_dLuR::synapse0x26ada00() {
   return (neuron0x26a4950()*-0.400989);
}

double NNfunction_sb_dLuR::synapse0x26ada40() {
   return (neuron0x26a4c90()*0.520055);
}

double NNfunction_sb_dLuR::synapse0x26ada80() {
   return (neuron0x26a4fd0()*0.137389);
}

double NNfunction_sb_dLuR::synapse0x26adac0() {
   return (neuron0x26a5310()*-0.0679448);
}

double NNfunction_sb_dLuR::synapse0x26adb00() {
   return (neuron0x26a5650()*-0.155036);
}

double NNfunction_sb_dLuR::synapse0x26adb40() {
   return (neuron0x26a5990()*0.201776);
}

double NNfunction_sb_dLuR::synapse0x26adb80() {
   return (neuron0x26a5cd0()*-0.382322);
}

double NNfunction_sb_dLuR::synapse0x26adbc0() {
   return (neuron0x26a6010()*0.250317);
}

double NNfunction_sb_dLuR::synapse0x26adc00() {
   return (neuron0x26a6350()*0.0177694);
}

double NNfunction_sb_dLuR::synapse0x26adc40() {
   return (neuron0x26a6690()*0.476282);
}

double NNfunction_sb_dLuR::synapse0x26adc80() {
   return (neuron0x26a69d0()*-0.160785);
}

double NNfunction_sb_dLuR::synapse0x26adcc0() {
   return (neuron0x26a6d10()*0.0318446);
}

double NNfunction_sb_dLuR::synapse0x26add00() {
   return (neuron0x26a7050()*-0.365082);
}

double NNfunction_sb_dLuR::synapse0x26add40() {
   return (neuron0x26a7390()*0.571895);
}

double NNfunction_sb_dLuR::synapse0x26ad7d0() {
   return (neuron0x26a76d0()*0.156298);
}

double NNfunction_sb_dLuR::synapse0x26ad810() {
   return (neuron0x26a7c30()*0.0536931);
}

double NNfunction_sb_dLuR::synapse0x26ade90() {
   return (neuron0x26a7e50()*-0.0577345);
}

double NNfunction_sb_dLuR::synapse0x26aded0() {
   return (neuron0x26a8190()*-0.00366696);
}

double NNfunction_sb_dLuR::synapse0x26adf10() {
   return (neuron0x26a84d0()*-0.0973419);
}

double NNfunction_sb_dLuR::synapse0x26adf50() {
   return (neuron0x26a8810()*0.271747);
}

double NNfunction_sb_dLuR::synapse0x26adf90() {
   return (neuron0x26a8b50()*-0.0299152);
}

double NNfunction_sb_dLuR::synapse0x26adfd0() {
   return (neuron0x26a8e90()*0.262361);
}

double NNfunction_sb_dLuR::synapse0x26a7b20() {
   return (neuron0x26a4360()*0.0122748);
}

double NNfunction_sb_dLuR::synapse0x26a7b60() {
   return (neuron0x26a4610()*0.0968674);
}

double NNfunction_sb_dLuR::synapse0x26a7ba0() {
   return (neuron0x26a4950()*-0.0675483);
}

double NNfunction_sb_dLuR::synapse0x26a7be0() {
   return (neuron0x26a4c90()*-0.617948);
}

double NNfunction_sb_dLuR::synapse0x26ae560() {
   return (neuron0x26a4fd0()*-0.000956749);
}

double NNfunction_sb_dLuR::synapse0x26ae5a0() {
   return (neuron0x26a5310()*-0.634078);
}

double NNfunction_sb_dLuR::synapse0x26ae5e0() {
   return (neuron0x26a5650()*0.225281);
}

double NNfunction_sb_dLuR::synapse0x26ae620() {
   return (neuron0x26a5990()*-0.161491);
}

double NNfunction_sb_dLuR::synapse0x26ae660() {
   return (neuron0x26a5cd0()*0.0445106);
}

double NNfunction_sb_dLuR::synapse0x26ae6a0() {
   return (neuron0x26a6010()*0.00280996);
}

double NNfunction_sb_dLuR::synapse0x26ae6e0() {
   return (neuron0x26a6350()*-0.44987);
}

double NNfunction_sb_dLuR::synapse0x26ae720() {
   return (neuron0x26a6690()*-0.0331014);
}

double NNfunction_sb_dLuR::synapse0x26ae760() {
   return (neuron0x26a69d0()*-0.0886958);
}

double NNfunction_sb_dLuR::synapse0x26ae7a0() {
   return (neuron0x26a6d10()*0.246724);
}

double NNfunction_sb_dLuR::synapse0x26ae7e0() {
   return (neuron0x26a7050()*0.199774);
}

double NNfunction_sb_dLuR::synapse0x26ae820() {
   return (neuron0x26a7390()*-0.307528);
}

double NNfunction_sb_dLuR::synapse0x26ae1a0() {
   return (neuron0x26a76d0()*-0.477181);
}

double NNfunction_sb_dLuR::synapse0x26ae1e0() {
   return (neuron0x26a7c30()*-0.135914);
}

double NNfunction_sb_dLuR::synapse0x26ae970() {
   return (neuron0x26a7e50()*0.157088);
}

double NNfunction_sb_dLuR::synapse0x26ae9b0() {
   return (neuron0x26a8190()*0.0167734);
}

double NNfunction_sb_dLuR::synapse0x26ae9f0() {
   return (neuron0x26a84d0()*0.295026);
}

double NNfunction_sb_dLuR::synapse0x26aea30() {
   return (neuron0x26a8810()*0.386751);
}

double NNfunction_sb_dLuR::synapse0x26aea70() {
   return (neuron0x26a8b50()*0.0090239);
}

double NNfunction_sb_dLuR::synapse0x26aeab0() {
   return (neuron0x26a8e90()*0.123894);
}

double NNfunction_sb_dLuR::synapse0x26aee30() {
   return (neuron0x26a4360()*-0.00540362);
}

double NNfunction_sb_dLuR::synapse0x26aee70() {
   return (neuron0x26a4610()*0.00432694);
}

double NNfunction_sb_dLuR::synapse0x26aeeb0() {
   return (neuron0x26a4950()*0.0246529);
}

double NNfunction_sb_dLuR::synapse0x26aeef0() {
   return (neuron0x26a4c90()*-10.3632);
}

double NNfunction_sb_dLuR::synapse0x26aef30() {
   return (neuron0x26a4fd0()*-0.0121814);
}

double NNfunction_sb_dLuR::synapse0x26aef70() {
   return (neuron0x26a5310()*0.0161359);
}

double NNfunction_sb_dLuR::synapse0x26aefb0() {
   return (neuron0x26a5650()*0.00864395);
}

double NNfunction_sb_dLuR::synapse0x26aeff0() {
   return (neuron0x26a5990()*0.00481681);
}

double NNfunction_sb_dLuR::synapse0x26af030() {
   return (neuron0x26a5cd0()*0.0147434);
}

double NNfunction_sb_dLuR::synapse0x26af070() {
   return (neuron0x26a6010()*0.00712492);
}

double NNfunction_sb_dLuR::synapse0x26af0b0() {
   return (neuron0x26a6350()*0.025092);
}

double NNfunction_sb_dLuR::synapse0x26af0f0() {
   return (neuron0x26a6690()*-0.26214);
}

double NNfunction_sb_dLuR::synapse0x26af130() {
   return (neuron0x26a69d0()*0.011856);
}

double NNfunction_sb_dLuR::synapse0x26af170() {
   return (neuron0x26a6d10()*0.00288734);
}

double NNfunction_sb_dLuR::synapse0x26af1b0() {
   return (neuron0x26a7050()*0.142689);
}

double NNfunction_sb_dLuR::synapse0x26af1f0() {
   return (neuron0x26a7390()*0.0209737);
}

double NNfunction_sb_dLuR::synapse0x26aec80() {
   return (neuron0x26a76d0()*-0.00291473);
}

double NNfunction_sb_dLuR::synapse0x26aecc0() {
   return (neuron0x26a7c30()*0.0149853);
}

double NNfunction_sb_dLuR::synapse0x26af340() {
   return (neuron0x26a7e50()*0.0439263);
}

double NNfunction_sb_dLuR::synapse0x26af380() {
   return (neuron0x26a8190()*-0.023777);
}

double NNfunction_sb_dLuR::synapse0x26af3c0() {
   return (neuron0x26a84d0()*0.0237609);
}

double NNfunction_sb_dLuR::synapse0x26af400() {
   return (neuron0x26a8810()*0.0107717);
}

double NNfunction_sb_dLuR::synapse0x26af440() {
   return (neuron0x26a8b50()*0.0322037);
}

double NNfunction_sb_dLuR::synapse0x26af480() {
   return (neuron0x26a8e90()*-0.0475694);
}

double NNfunction_sb_dLuR::synapse0x26af800() {
   return (neuron0x26a4360()*0.324731);
}

double NNfunction_sb_dLuR::synapse0x26af840() {
   return (neuron0x26a4610()*0.130918);
}

double NNfunction_sb_dLuR::synapse0x26af880() {
   return (neuron0x26a4950()*-0.142231);
}

double NNfunction_sb_dLuR::synapse0x26af8c0() {
   return (neuron0x26a4c90()*-0.168316);
}

double NNfunction_sb_dLuR::synapse0x26af900() {
   return (neuron0x26a4fd0()*0.0338426);
}

double NNfunction_sb_dLuR::synapse0x26af940() {
   return (neuron0x26a5310()*-0.0872787);
}

double NNfunction_sb_dLuR::synapse0x26af980() {
   return (neuron0x26a5650()*0.0113448);
}

double NNfunction_sb_dLuR::synapse0x26af9c0() {
   return (neuron0x26a5990()*0.161427);
}

double NNfunction_sb_dLuR::synapse0x26afa00() {
   return (neuron0x26a5cd0()*-0.018975);
}

double NNfunction_sb_dLuR::synapse0x26afa40() {
   return (neuron0x26a6010()*-0.162395);
}

double NNfunction_sb_dLuR::synapse0x26afa80() {
   return (neuron0x26a6350()*0.0244615);
}

double NNfunction_sb_dLuR::synapse0x26afac0() {
   return (neuron0x26a6690()*-0.0790264);
}

double NNfunction_sb_dLuR::synapse0x26afb00() {
   return (neuron0x26a69d0()*0.760081);
}

double NNfunction_sb_dLuR::synapse0x26afb40() {
   return (neuron0x26a6d10()*-0.257458);
}

double NNfunction_sb_dLuR::synapse0x26afb80() {
   return (neuron0x26a7050()*0.024605);
}

double NNfunction_sb_dLuR::synapse0x26afbc0() {
   return (neuron0x26a7390()*0.104064);
}

double NNfunction_sb_dLuR::synapse0x26af650() {
   return (neuron0x26a76d0()*-0.337263);
}

double NNfunction_sb_dLuR::synapse0x26af690() {
   return (neuron0x26a7c30()*0.0751346);
}

double NNfunction_sb_dLuR::synapse0x26ac420() {
   return (neuron0x26a7e50()*0.0476525);
}

double NNfunction_sb_dLuR::synapse0x26ac460() {
   return (neuron0x26a8190()*-0.0736015);
}

double NNfunction_sb_dLuR::synapse0x26ac4a0() {
   return (neuron0x26a84d0()*-0.0362493);
}

double NNfunction_sb_dLuR::synapse0x26ac4e0() {
   return (neuron0x26a8810()*-0.0263951);
}

double NNfunction_sb_dLuR::synapse0x26ac520() {
   return (neuron0x26a8b50()*0.0359991);
}

double NNfunction_sb_dLuR::synapse0x26ac560() {
   return (neuron0x26a8e90()*-0.0821667);
}

double NNfunction_sb_dLuR::synapse0x26ac8e0() {
   return (neuron0x26a4360()*-0.0228224);
}

double NNfunction_sb_dLuR::synapse0x26ac920() {
   return (neuron0x26a4610()*0.0106025);
}

double NNfunction_sb_dLuR::synapse0x26ac960() {
   return (neuron0x26a4950()*-0.0211731);
}

double NNfunction_sb_dLuR::synapse0x26ac9a0() {
   return (neuron0x26a4c90()*0.13636);
}

double NNfunction_sb_dLuR::synapse0x26ac9e0() {
   return (neuron0x26a4fd0()*0.000388033);
}

double NNfunction_sb_dLuR::synapse0x26aca20() {
   return (neuron0x26a5310()*0.00525191);
}

double NNfunction_sb_dLuR::synapse0x26aca60() {
   return (neuron0x26a5650()*0.0175751);
}

double NNfunction_sb_dLuR::synapse0x26acaa0() {
   return (neuron0x26a5990()*-0.0138784);
}

double NNfunction_sb_dLuR::synapse0x26acae0() {
   return (neuron0x26a5cd0()*0.0158568);
}

double NNfunction_sb_dLuR::synapse0x26acb20() {
   return (neuron0x26a6010()*-0.0158975);
}

double NNfunction_sb_dLuR::synapse0x26acb60() {
   return (neuron0x26a6350()*-0.0255037);
}

double NNfunction_sb_dLuR::synapse0x26acba0() {
   return (neuron0x26a6690()*0.97015);
}

double NNfunction_sb_dLuR::synapse0x26acbe0() {
   return (neuron0x26a69d0()*-0.02349);
}

double NNfunction_sb_dLuR::synapse0x26b0d20() {
   return (neuron0x26a6d10()*-0.0197167);
}

double NNfunction_sb_dLuR::synapse0x26b0d60() {
   return (neuron0x26a7050()*0.11289);
}

double NNfunction_sb_dLuR::synapse0x26b0da0() {
   return (neuron0x26a7390()*-0.0175062);
}

double NNfunction_sb_dLuR::synapse0x26ac730() {
   return (neuron0x26a76d0()*0.032339);
}

double NNfunction_sb_dLuR::synapse0x26ac770() {
   return (neuron0x26a7c30()*-0.0303767);
}

double NNfunction_sb_dLuR::synapse0x26b0ef0() {
   return (neuron0x26a7e50()*-0.00568161);
}

double NNfunction_sb_dLuR::synapse0x26b0f30() {
   return (neuron0x26a8190()*0.0161984);
}

double NNfunction_sb_dLuR::synapse0x26b0f70() {
   return (neuron0x26a84d0()*0.0136754);
}

double NNfunction_sb_dLuR::synapse0x26b0fb0() {
   return (neuron0x26a8810()*-0.00505617);
}

double NNfunction_sb_dLuR::synapse0x26b0ff0() {
   return (neuron0x26a8b50()*-0.0153099);
}

double NNfunction_sb_dLuR::synapse0x26b1030() {
   return (neuron0x26a8e90()*-0.0145681);
}

double NNfunction_sb_dLuR::synapse0x26b13b0() {
   return (neuron0x26a4360()*-0.31625);
}

double NNfunction_sb_dLuR::synapse0x26b13f0() {
   return (neuron0x26a4610()*-0.0734894);
}

double NNfunction_sb_dLuR::synapse0x26b1430() {
   return (neuron0x26a4950()*-0.343521);
}

double NNfunction_sb_dLuR::synapse0x26b1470() {
   return (neuron0x26a4c90()*-0.326599);
}

double NNfunction_sb_dLuR::synapse0x26b14b0() {
   return (neuron0x26a4fd0()*0.0564611);
}

double NNfunction_sb_dLuR::synapse0x26b14f0() {
   return (neuron0x26a5310()*-0.279697);
}

double NNfunction_sb_dLuR::synapse0x26b1530() {
   return (neuron0x26a5650()*-0.108803);
}

double NNfunction_sb_dLuR::synapse0x26b1570() {
   return (neuron0x26a5990()*0.344608);
}

double NNfunction_sb_dLuR::synapse0x26b15b0() {
   return (neuron0x26a5cd0()*0.0578033);
}

double NNfunction_sb_dLuR::synapse0x26b15f0() {
   return (neuron0x26a6010()*-0.0482608);
}

double NNfunction_sb_dLuR::synapse0x26b1630() {
   return (neuron0x26a6350()*-0.471599);
}

double NNfunction_sb_dLuR::synapse0x26b1670() {
   return (neuron0x26a6690()*-0.300464);
}

double NNfunction_sb_dLuR::synapse0x26b16b0() {
   return (neuron0x26a69d0()*0.207966);
}

double NNfunction_sb_dLuR::synapse0x26b16f0() {
   return (neuron0x26a6d10()*0.357489);
}

double NNfunction_sb_dLuR::synapse0x26b1730() {
   return (neuron0x26a7050()*-0.916712);
}

double NNfunction_sb_dLuR::synapse0x26b1770() {
   return (neuron0x26a7390()*0.934164);
}

double NNfunction_sb_dLuR::synapse0x26b1200() {
   return (neuron0x26a76d0()*0.425806);
}

double NNfunction_sb_dLuR::synapse0x26b1240() {
   return (neuron0x26a7c30()*0.238364);
}

double NNfunction_sb_dLuR::synapse0x26b18c0() {
   return (neuron0x26a7e50()*0.00855441);
}

double NNfunction_sb_dLuR::synapse0x26b1900() {
   return (neuron0x26a8190()*0.181935);
}

double NNfunction_sb_dLuR::synapse0x26b1940() {
   return (neuron0x26a84d0()*-0.23916);
}

double NNfunction_sb_dLuR::synapse0x26b1980() {
   return (neuron0x26a8810()*0.166697);
}

double NNfunction_sb_dLuR::synapse0x26b19c0() {
   return (neuron0x26a8b50()*-0.31833);
}

double NNfunction_sb_dLuR::synapse0x26b1a00() {
   return (neuron0x26a8e90()*-0.0018867);
}

double NNfunction_sb_dLuR::synapse0x26b1d80() {
   return (neuron0x26a4360()*-0.0493931);
}

double NNfunction_sb_dLuR::synapse0x26b1dc0() {
   return (neuron0x26a4610()*-0.0854352);
}

double NNfunction_sb_dLuR::synapse0x26b1e00() {
   return (neuron0x26a4950()*-0.127811);
}

double NNfunction_sb_dLuR::synapse0x26b1e40() {
   return (neuron0x26a4c90()*0.110591);
}

double NNfunction_sb_dLuR::synapse0x26b1e80() {
   return (neuron0x26a4fd0()*-0.0480234);
}

double NNfunction_sb_dLuR::synapse0x26b1ec0() {
   return (neuron0x26a5310()*-0.000773689);
}

double NNfunction_sb_dLuR::synapse0x26b1f00() {
   return (neuron0x26a5650()*-0.0197204);
}

double NNfunction_sb_dLuR::synapse0x26b1f40() {
   return (neuron0x26a5990()*-0.10227);
}

double NNfunction_sb_dLuR::synapse0x26b1f80() {
   return (neuron0x26a5cd0()*0.0332438);
}

double NNfunction_sb_dLuR::synapse0x26b1fc0() {
   return (neuron0x26a6010()*0.0841789);
}

double NNfunction_sb_dLuR::synapse0x26b2000() {
   return (neuron0x26a6350()*-0.00517193);
}

double NNfunction_sb_dLuR::synapse0x26b2040() {
   return (neuron0x26a6690()*0.113252);
}

double NNfunction_sb_dLuR::synapse0x26b2080() {
   return (neuron0x26a69d0()*0.463159);
}

double NNfunction_sb_dLuR::synapse0x26b20c0() {
   return (neuron0x26a6d10()*0.0194389);
}

double NNfunction_sb_dLuR::synapse0x26b2100() {
   return (neuron0x26a7050()*-0.263603);
}

double NNfunction_sb_dLuR::synapse0x26b2140() {
   return (neuron0x26a7390()*0.238997);
}

double NNfunction_sb_dLuR::synapse0x26b1bd0() {
   return (neuron0x26a76d0()*0.0363324);
}

double NNfunction_sb_dLuR::synapse0x26b1c10() {
   return (neuron0x26a7c30()*0.24003);
}

double NNfunction_sb_dLuR::synapse0x26b2290() {
   return (neuron0x26a7e50()*0.329813);
}

double NNfunction_sb_dLuR::synapse0x26b22d0() {
   return (neuron0x26a8190()*-0.0416067);
}

double NNfunction_sb_dLuR::synapse0x26b2310() {
   return (neuron0x26a84d0()*0.0290371);
}

double NNfunction_sb_dLuR::synapse0x26b2350() {
   return (neuron0x26a8810()*-0.00221005);
}

double NNfunction_sb_dLuR::synapse0x26b2390() {
   return (neuron0x26a8b50()*0.0244947);
}

double NNfunction_sb_dLuR::synapse0x26b23d0() {
   return (neuron0x26a8e90()*-0.0482153);
}

double NNfunction_sb_dLuR::synapse0x26b2750() {
   return (neuron0x26a4360()*0.00361208);
}

double NNfunction_sb_dLuR::synapse0x26b2790() {
   return (neuron0x26a4610()*-0.0253404);
}

double NNfunction_sb_dLuR::synapse0x26b27d0() {
   return (neuron0x26a4950()*0.0158648);
}

double NNfunction_sb_dLuR::synapse0x26b2810() {
   return (neuron0x26a4c90()*-3.77086);
}

double NNfunction_sb_dLuR::synapse0x26b2850() {
   return (neuron0x26a4fd0()*-0.0337448);
}

double NNfunction_sb_dLuR::synapse0x26b2890() {
   return (neuron0x26a5310()*0.000395086);
}

double NNfunction_sb_dLuR::synapse0x26b28d0() {
   return (neuron0x26a5650()*0.00156007);
}

double NNfunction_sb_dLuR::synapse0x26b2910() {
   return (neuron0x26a5990()*-0.00876184);
}

double NNfunction_sb_dLuR::synapse0x26b2950() {
   return (neuron0x26a5cd0()*-0.0218332);
}

double NNfunction_sb_dLuR::synapse0x26b2990() {
   return (neuron0x26a6010()*-0.00889062);
}

double NNfunction_sb_dLuR::synapse0x26b29d0() {
   return (neuron0x26a6350()*0.000674576);
}

double NNfunction_sb_dLuR::synapse0x26b2a10() {
   return (neuron0x26a6690()*1.40106);
}

double NNfunction_sb_dLuR::synapse0x26b2a50() {
   return (neuron0x26a69d0()*-0.0604072);
}

double NNfunction_sb_dLuR::synapse0x26b2a90() {
   return (neuron0x26a6d10()*-0.0194899);
}

double NNfunction_sb_dLuR::synapse0x26b2ad0() {
   return (neuron0x26a7050()*-0.203759);
}

double NNfunction_sb_dLuR::synapse0x26b2b10() {
   return (neuron0x26a7390()*-0.0311696);
}

double NNfunction_sb_dLuR::synapse0x26b25a0() {
   return (neuron0x26a76d0()*-0.0157095);
}

double NNfunction_sb_dLuR::synapse0x26b25e0() {
   return (neuron0x26a7c30()*0.0238833);
}

double NNfunction_sb_dLuR::synapse0x26b2c60() {
   return (neuron0x26a7e50()*-0.00888284);
}

double NNfunction_sb_dLuR::synapse0x26b2ca0() {
   return (neuron0x26a8190()*0.00101022);
}

double NNfunction_sb_dLuR::synapse0x26b2ce0() {
   return (neuron0x26a84d0()*-0.00190188);
}

double NNfunction_sb_dLuR::synapse0x26b2d20() {
   return (neuron0x26a8810()*-0.01058);
}

double NNfunction_sb_dLuR::synapse0x26b2d60() {
   return (neuron0x26a8b50()*0.00210066);
}

double NNfunction_sb_dLuR::synapse0x26b2da0() {
   return (neuron0x26a8e90()*0.022047);
}

double NNfunction_sb_dLuR::synapse0x26b3120() {
   return (neuron0x26a4360()*-0.0694356);
}

double NNfunction_sb_dLuR::synapse0x26a44f0() {
   return (neuron0x26a4610()*0.172013);
}

double NNfunction_sb_dLuR::synapse0x26a4530() {
   return (neuron0x26a4950()*0.165803);
}

double NNfunction_sb_dLuR::synapse0x26a4830() {
   return (neuron0x26a4c90()*-0.274142);
}

double NNfunction_sb_dLuR::synapse0x26a4870() {
   return (neuron0x26a4fd0()*-0.0173364);
}

double NNfunction_sb_dLuR::synapse0x26a4b70() {
   return (neuron0x26a5310()*-0.0203525);
}

double NNfunction_sb_dLuR::synapse0x26a4bb0() {
   return (neuron0x26a5650()*0.0867719);
}

double NNfunction_sb_dLuR::synapse0x26a4eb0() {
   return (neuron0x26a5990()*0.00787788);
}

double NNfunction_sb_dLuR::synapse0x26a4ef0() {
   return (neuron0x26a5cd0()*0.177636);
}

double NNfunction_sb_dLuR::synapse0x26a51f0() {
   return (neuron0x26a6010()*-0.111976);
}

double NNfunction_sb_dLuR::synapse0x26a5230() {
   return (neuron0x26a6350()*-0.710166);
}

double NNfunction_sb_dLuR::synapse0x26a5530() {
   return (neuron0x26a6690()*0.225859);
}

double NNfunction_sb_dLuR::synapse0x26a5570() {
   return (neuron0x26a69d0()*-0.33467);
}

double NNfunction_sb_dLuR::synapse0x26a5870() {
   return (neuron0x26a6d10()*0.0869999);
}

double NNfunction_sb_dLuR::synapse0x26a58b0() {
   return (neuron0x26a7050()*0.121389);
}

double NNfunction_sb_dLuR::synapse0x26a5bb0() {
   return (neuron0x26a7390()*0.236486);
}

double NNfunction_sb_dLuR::synapse0x26a5bf0() {
   return (neuron0x26a76d0()*0.157456);
}

double NNfunction_sb_dLuR::synapse0x26a5ef0() {
   return (neuron0x26a7c30()*-0.718301);
}

double NNfunction_sb_dLuR::synapse0x26a5f30() {
   return (neuron0x26a7e50()*0.503333);
}

double NNfunction_sb_dLuR::synapse0x26a6230() {
   return (neuron0x26a8190()*0.540285);
}

double NNfunction_sb_dLuR::synapse0x26a6270() {
   return (neuron0x26a84d0()*0.190322);
}

double NNfunction_sb_dLuR::synapse0x26a6570() {
   return (neuron0x26a8810()*-0.267673);
}

double NNfunction_sb_dLuR::synapse0x26a65b0() {
   return (neuron0x26a8b50()*-0.103071);
}

double NNfunction_sb_dLuR::synapse0x26a68b0() {
   return (neuron0x26a8e90()*0.0724565);
}

double NNfunction_sb_dLuR::synapse0x26a68f0() {
   return (neuron0x26a4360()*0.614785);
}

double NNfunction_sb_dLuR::synapse0x26a75b0() {
   return (neuron0x26a4610()*0.315826);
}

double NNfunction_sb_dLuR::synapse0x26a75f0() {
   return (neuron0x26a4950()*-0.137326);
}

double NNfunction_sb_dLuR::synapse0x26b2f70() {
   return (neuron0x26a4c90()*-0.234914);
}

double NNfunction_sb_dLuR::synapse0x26b2fb0() {
   return (neuron0x26a4fd0()*0.722048);
}

double NNfunction_sb_dLuR::synapse0x26a78f0() {
   return (neuron0x26a5310()*-0.367038);
}

double NNfunction_sb_dLuR::synapse0x26a7930() {
   return (neuron0x26a5650()*-0.287803);
}

double NNfunction_sb_dLuR::synapse0x245f300() {
   return (neuron0x26a5990()*0.0159169);
}

double NNfunction_sb_dLuR::synapse0x245f340() {
   return (neuron0x26a5cd0()*0.249277);
}

double NNfunction_sb_dLuR::synapse0x26a8070() {
   return (neuron0x26a6010()*0.39916);
}

double NNfunction_sb_dLuR::synapse0x26a80b0() {
   return (neuron0x26a6350()*-0.0745273);
}

double NNfunction_sb_dLuR::synapse0x26a83b0() {
   return (neuron0x26a6690()*-0.31466);
}

double NNfunction_sb_dLuR::synapse0x26a83f0() {
   return (neuron0x26a69d0()*0.119106);
}

double NNfunction_sb_dLuR::synapse0x26a86f0() {
   return (neuron0x26a6d10()*0.432615);
}

double NNfunction_sb_dLuR::synapse0x26a8730() {
   return (neuron0x26a7050()*0.321632);
}

double NNfunction_sb_dLuR::synapse0x26a8a30() {
   return (neuron0x26a7390()*0.441656);
}

double NNfunction_sb_dLuR::synapse0x26a8a70() {
   return (neuron0x26a76d0()*-0.245874);
}

double NNfunction_sb_dLuR::synapse0x26a8d70() {
   return (neuron0x26a7c30()*-0.306984);
}

double NNfunction_sb_dLuR::synapse0x26a8db0() {
   return (neuron0x26a7e50()*-0.436794);
}

double NNfunction_sb_dLuR::synapse0x26a90b0() {
   return (neuron0x26a8190()*0.139816);
}

double NNfunction_sb_dLuR::synapse0x26a90f0() {
   return (neuron0x26a84d0()*-0.33218);
}

double NNfunction_sb_dLuR::synapse0x26a6bf0() {
   return (neuron0x26a8810()*-0.237837);
}

double NNfunction_sb_dLuR::synapse0x26a6c30() {
   return (neuron0x26a8b50()*0.0925026);
}

double NNfunction_sb_dLuR::synapse0x26b4e90() {
   return (neuron0x26a8e90()*-0.146841);
}

double NNfunction_sb_dLuR::synapse0x26b5210() {
   return (neuron0x26a4360()*-0.00541001);
}

double NNfunction_sb_dLuR::synapse0x26b5250() {
   return (neuron0x26a4610()*0.0131496);
}

double NNfunction_sb_dLuR::synapse0x26b5290() {
   return (neuron0x26a4950()*0.0459688);
}

double NNfunction_sb_dLuR::synapse0x26b52d0() {
   return (neuron0x26a4c90()*-8.38951);
}

double NNfunction_sb_dLuR::synapse0x26b5310() {
   return (neuron0x26a4fd0()*-0.0191937);
}

double NNfunction_sb_dLuR::synapse0x26b5350() {
   return (neuron0x26a5310()*0.0157192);
}

double NNfunction_sb_dLuR::synapse0x26b5390() {
   return (neuron0x26a5650()*0.00167029);
}

double NNfunction_sb_dLuR::synapse0x26b53d0() {
   return (neuron0x26a5990()*-0.000547708);
}

double NNfunction_sb_dLuR::synapse0x26b5410() {
   return (neuron0x26a5cd0()*0.0030523);
}

double NNfunction_sb_dLuR::synapse0x26b5450() {
   return (neuron0x26a6010()*0.0127347);
}

double NNfunction_sb_dLuR::synapse0x26b5490() {
   return (neuron0x26a6350()*0.0283463);
}

double NNfunction_sb_dLuR::synapse0x26b54d0() {
   return (neuron0x26a6690()*0.136004);
}

double NNfunction_sb_dLuR::synapse0x26b5510() {
   return (neuron0x26a69d0()*0.0170315);
}

double NNfunction_sb_dLuR::synapse0x26b5550() {
   return (neuron0x26a6d10()*-0.00964903);
}

double NNfunction_sb_dLuR::synapse0x26b5590() {
   return (neuron0x26a7050()*0.156968);
}

double NNfunction_sb_dLuR::synapse0x26b55d0() {
   return (neuron0x26a7390()*0.00417598);
}

double NNfunction_sb_dLuR::synapse0x26b5060() {
   return (neuron0x26a76d0()*0.0201763);
}

double NNfunction_sb_dLuR::synapse0x26b50a0() {
   return (neuron0x26a7c30()*0.0462808);
}

double NNfunction_sb_dLuR::synapse0x26b5720() {
   return (neuron0x26a7e50()*0.0367671);
}

double NNfunction_sb_dLuR::synapse0x26b5760() {
   return (neuron0x26a8190()*-0.0333554);
}

double NNfunction_sb_dLuR::synapse0x26b57a0() {
   return (neuron0x26a84d0()*0.0310582);
}

double NNfunction_sb_dLuR::synapse0x26b57e0() {
   return (neuron0x26a8810()*0.00286864);
}

double NNfunction_sb_dLuR::synapse0x26b5820() {
   return (neuron0x26a8b50()*0.0122767);
}

double NNfunction_sb_dLuR::synapse0x26b5860() {
   return (neuron0x26a8e90()*-0.0534043);
}

double NNfunction_sb_dLuR::synapse0x26b5be0() {
   return (neuron0x26a4360()*0.205928);
}

double NNfunction_sb_dLuR::synapse0x26b5c20() {
   return (neuron0x26a4610()*0.231048);
}

double NNfunction_sb_dLuR::synapse0x26b5c60() {
   return (neuron0x26a4950()*1.09523);
}

double NNfunction_sb_dLuR::synapse0x26b5ca0() {
   return (neuron0x26a4c90()*0.24359);
}

double NNfunction_sb_dLuR::synapse0x26b5ce0() {
   return (neuron0x26a4fd0()*-0.349949);
}

double NNfunction_sb_dLuR::synapse0x26b5d20() {
   return (neuron0x26a5310()*-0.0418199);
}

double NNfunction_sb_dLuR::synapse0x26b5d60() {
   return (neuron0x26a5650()*-0.294424);
}

double NNfunction_sb_dLuR::synapse0x26b5da0() {
   return (neuron0x26a5990()*0.171873);
}

double NNfunction_sb_dLuR::synapse0x26b5de0() {
   return (neuron0x26a5cd0()*-0.0141793);
}

double NNfunction_sb_dLuR::synapse0x26b5e20() {
   return (neuron0x26a6010()*-0.0705193);
}

double NNfunction_sb_dLuR::synapse0x26b5e60() {
   return (neuron0x26a6350()*0.0368075);
}

double NNfunction_sb_dLuR::synapse0x26b5ea0() {
   return (neuron0x26a6690()*-0.255991);
}

double NNfunction_sb_dLuR::synapse0x26b5ee0() {
   return (neuron0x26a69d0()*0.291613);
}

double NNfunction_sb_dLuR::synapse0x26b5f20() {
   return (neuron0x26a6d10()*-0.0199542);
}

double NNfunction_sb_dLuR::synapse0x26b5f60() {
   return (neuron0x26a7050()*0.036964);
}

double NNfunction_sb_dLuR::synapse0x26b5fa0() {
   return (neuron0x26a7390()*-0.119256);
}

double NNfunction_sb_dLuR::synapse0x26b5a30() {
   return (neuron0x26a76d0()*-0.0077019);
}

double NNfunction_sb_dLuR::synapse0x26b5a70() {
   return (neuron0x26a7c30()*0.327949);
}

double NNfunction_sb_dLuR::synapse0x26b60f0() {
   return (neuron0x26a7e50()*0.119936);
}

double NNfunction_sb_dLuR::synapse0x26b6130() {
   return (neuron0x26a8190()*-0.0115921);
}

double NNfunction_sb_dLuR::synapse0x26b6170() {
   return (neuron0x26a84d0()*0.0208163);
}

double NNfunction_sb_dLuR::synapse0x26b61b0() {
   return (neuron0x26a8810()*-0.0639692);
}

double NNfunction_sb_dLuR::synapse0x26b61f0() {
   return (neuron0x26a8b50()*-0.0124518);
}

double NNfunction_sb_dLuR::synapse0x26b6230() {
   return (neuron0x26a8e90()*-0.0673043);
}

double NNfunction_sb_dLuR::synapse0x26b65b0() {
   return (neuron0x26a4360()*-0.0938869);
}

double NNfunction_sb_dLuR::synapse0x26b65f0() {
   return (neuron0x26a4610()*0.0840102);
}

double NNfunction_sb_dLuR::synapse0x26b6630() {
   return (neuron0x26a4950()*-0.0534381);
}

double NNfunction_sb_dLuR::synapse0x26b6670() {
   return (neuron0x26a4c90()*-0.378691);
}

double NNfunction_sb_dLuR::synapse0x26b66b0() {
   return (neuron0x26a4fd0()*-0.00798894);
}

double NNfunction_sb_dLuR::synapse0x26b66f0() {
   return (neuron0x26a5310()*0.0567632);
}

double NNfunction_sb_dLuR::synapse0x26b6730() {
   return (neuron0x26a5650()*0.0684176);
}

double NNfunction_sb_dLuR::synapse0x26b6770() {
   return (neuron0x26a5990()*0.00305893);
}

double NNfunction_sb_dLuR::synapse0x26b67b0() {
   return (neuron0x26a5cd0()*0.0497491);
}

double NNfunction_sb_dLuR::synapse0x26b67f0() {
   return (neuron0x26a6010()*-0.0985605);
}

double NNfunction_sb_dLuR::synapse0x26b6830() {
   return (neuron0x26a6350()*0.0444065);
}

double NNfunction_sb_dLuR::synapse0x26b6870() {
   return (neuron0x26a6690()*-0.0305069);
}

double NNfunction_sb_dLuR::synapse0x26b68b0() {
   return (neuron0x26a69d0()*0.0267257);
}

double NNfunction_sb_dLuR::synapse0x26b68f0() {
   return (neuron0x26a6d10()*-0.028718);
}

double NNfunction_sb_dLuR::synapse0x26b6930() {
   return (neuron0x26a7050()*0.0562786);
}

double NNfunction_sb_dLuR::synapse0x26b6970() {
   return (neuron0x26a7390()*0.097312);
}

double NNfunction_sb_dLuR::synapse0x26b6400() {
   return (neuron0x26a76d0()*-0.0521483);
}

double NNfunction_sb_dLuR::synapse0x26b6440() {
   return (neuron0x26a7c30()*0.190966);
}

double NNfunction_sb_dLuR::synapse0x26b6ac0() {
   return (neuron0x26a7e50()*0.118495);
}

double NNfunction_sb_dLuR::synapse0x26b6b00() {
   return (neuron0x26a8190()*0.0346752);
}

double NNfunction_sb_dLuR::synapse0x26b6b40() {
   return (neuron0x26a84d0()*-0.0496545);
}

double NNfunction_sb_dLuR::synapse0x26b6b80() {
   return (neuron0x26a8810()*0.00226462);
}

double NNfunction_sb_dLuR::synapse0x26b6bc0() {
   return (neuron0x26a8b50()*-0.00199769);
}

double NNfunction_sb_dLuR::synapse0x26b6c00() {
   return (neuron0x26a8e90()*-0.0136408);
}

double NNfunction_sb_dLuR::synapse0x26b6f80() {
   return (neuron0x26a4360()*-0.284897);
}

double NNfunction_sb_dLuR::synapse0x26b6fc0() {
   return (neuron0x26a4610()*-0.413414);
}

double NNfunction_sb_dLuR::synapse0x26b7000() {
   return (neuron0x26a4950()*-0.365904);
}

double NNfunction_sb_dLuR::synapse0x26b7040() {
   return (neuron0x26a4c90()*-0.565407);
}

double NNfunction_sb_dLuR::synapse0x26b7080() {
   return (neuron0x26a4fd0()*-0.0374198);
}

double NNfunction_sb_dLuR::synapse0x26b70c0() {
   return (neuron0x26a5310()*-0.129066);
}

double NNfunction_sb_dLuR::synapse0x26b7100() {
   return (neuron0x26a5650()*-0.404599);
}

double NNfunction_sb_dLuR::synapse0x26b7140() {
   return (neuron0x26a5990()*0.459525);
}

double NNfunction_sb_dLuR::synapse0x26b7180() {
   return (neuron0x26a5cd0()*0.550964);
}

double NNfunction_sb_dLuR::synapse0x26b71c0() {
   return (neuron0x26a6010()*0.358194);
}

double NNfunction_sb_dLuR::synapse0x26b7200() {
   return (neuron0x26a6350()*-0.349711);
}

double NNfunction_sb_dLuR::synapse0x26b7240() {
   return (neuron0x26a6690()*0.034844);
}

double NNfunction_sb_dLuR::synapse0x26b7280() {
   return (neuron0x26a69d0()*-0.781921);
}

double NNfunction_sb_dLuR::synapse0x26b72c0() {
   return (neuron0x26a6d10()*-0.330037);
}

double NNfunction_sb_dLuR::synapse0x26b7300() {
   return (neuron0x26a7050()*0.0746392);
}

double NNfunction_sb_dLuR::synapse0x26b7340() {
   return (neuron0x26a7390()*-0.483882);
}

double NNfunction_sb_dLuR::synapse0x26b6dd0() {
   return (neuron0x26a76d0()*0.11586);
}

double NNfunction_sb_dLuR::synapse0x26b6e10() {
   return (neuron0x26a7c30()*-0.393637);
}

double NNfunction_sb_dLuR::synapse0x26b7490() {
   return (neuron0x26a7e50()*-0.21695);
}

double NNfunction_sb_dLuR::synapse0x26b74d0() {
   return (neuron0x26a8190()*-0.20808);
}

double NNfunction_sb_dLuR::synapse0x26b7510() {
   return (neuron0x26a84d0()*-0.053188);
}

double NNfunction_sb_dLuR::synapse0x26b7550() {
   return (neuron0x26a8810()*0.528791);
}

double NNfunction_sb_dLuR::synapse0x26b7590() {
   return (neuron0x26a8b50()*-0.288148);
}

double NNfunction_sb_dLuR::synapse0x26b75d0() {
   return (neuron0x26a8e90()*-0.0369467);
}

double NNfunction_sb_dLuR::synapse0x26b7950() {
   return (neuron0x26a4360()*-0.636573);
}

double NNfunction_sb_dLuR::synapse0x26b7990() {
   return (neuron0x26a4610()*0.0208279);
}

double NNfunction_sb_dLuR::synapse0x26b79d0() {
   return (neuron0x26a4950()*-0.324396);
}

double NNfunction_sb_dLuR::synapse0x26b7a10() {
   return (neuron0x26a4c90()*0.156932);
}

double NNfunction_sb_dLuR::synapse0x26b7a50() {
   return (neuron0x26a4fd0()*0.00828694);
}

double NNfunction_sb_dLuR::synapse0x26b7a90() {
   return (neuron0x26a5310()*0.21114);
}

double NNfunction_sb_dLuR::synapse0x26b7ad0() {
   return (neuron0x26a5650()*-0.0246155);
}

double NNfunction_sb_dLuR::synapse0x26b7b10() {
   return (neuron0x26a5990()*-0.188625);
}

double NNfunction_sb_dLuR::synapse0x26b7b50() {
   return (neuron0x26a5cd0()*0.0409432);
}

double NNfunction_sb_dLuR::synapse0x26afd10() {
   return (neuron0x26a6010()*-0.0565222);
}

double NNfunction_sb_dLuR::synapse0x26afd50() {
   return (neuron0x26a6350()*0.0189826);
}

double NNfunction_sb_dLuR::synapse0x26afd90() {
   return (neuron0x26a6690()*-1.42094);
}

double NNfunction_sb_dLuR::synapse0x26afdd0() {
   return (neuron0x26a69d0()*-0.226548);
}

double NNfunction_sb_dLuR::synapse0x26afe10() {
   return (neuron0x26a6d10()*-0.0640502);
}

double NNfunction_sb_dLuR::synapse0x26afe50() {
   return (neuron0x26a7050()*-1.10005);
}

double NNfunction_sb_dLuR::synapse0x26afe90() {
   return (neuron0x26a7390()*-0.14759);
}

double NNfunction_sb_dLuR::synapse0x26b77a0() {
   return (neuron0x26a76d0()*0.108692);
}

double NNfunction_sb_dLuR::synapse0x26b77e0() {
   return (neuron0x26a7c30()*-0.178511);
}

double NNfunction_sb_dLuR::synapse0x26affe0() {
   return (neuron0x26a7e50()*-0.0639756);
}

double NNfunction_sb_dLuR::synapse0x26b0020() {
   return (neuron0x26a8190()*0.0793914);
}

double NNfunction_sb_dLuR::synapse0x26b0060() {
   return (neuron0x26a84d0()*-0.0832743);
}

double NNfunction_sb_dLuR::synapse0x26b00a0() {
   return (neuron0x26a8810()*-0.151113);
}

double NNfunction_sb_dLuR::synapse0x26b00e0() {
   return (neuron0x26a8b50()*-0.189963);
}

double NNfunction_sb_dLuR::synapse0x26b0120() {
   return (neuron0x26a8e90()*-0.0636822);
}

double NNfunction_sb_dLuR::synapse0x26b04a0() {
   return (neuron0x26a4360()*-0.00069372);
}

double NNfunction_sb_dLuR::synapse0x26b04e0() {
   return (neuron0x26a4610()*0.00112798);
}

double NNfunction_sb_dLuR::synapse0x26b0520() {
   return (neuron0x26a4950()*-0.00660245);
}

double NNfunction_sb_dLuR::synapse0x26b0560() {
   return (neuron0x26a4c90()*-2.00888);
}

double NNfunction_sb_dLuR::synapse0x26b05a0() {
   return (neuron0x26a4fd0()*-0.000108367);
}

double NNfunction_sb_dLuR::synapse0x26b05e0() {
   return (neuron0x26a5310()*-0.013092);
}

double NNfunction_sb_dLuR::synapse0x26b0620() {
   return (neuron0x26a5650()*-0.00889977);
}

double NNfunction_sb_dLuR::synapse0x26b0660() {
   return (neuron0x26a5990()*0.0157834);
}

double NNfunction_sb_dLuR::synapse0x26b06a0() {
   return (neuron0x26a5cd0()*-0.00882359);
}

double NNfunction_sb_dLuR::synapse0x26b06e0() {
   return (neuron0x26a6010()*-0.021961);
}

double NNfunction_sb_dLuR::synapse0x26b0720() {
   return (neuron0x26a6350()*-0.00125128);
}

double NNfunction_sb_dLuR::synapse0x26b0760() {
   return (neuron0x26a6690()*-0.00464295);
}

double NNfunction_sb_dLuR::synapse0x26b07a0() {
   return (neuron0x26a69d0()*-0.0216663);
}

double NNfunction_sb_dLuR::synapse0x26b07e0() {
   return (neuron0x26a6d10()*0.00954729);
}

double NNfunction_sb_dLuR::synapse0x26b0820() {
   return (neuron0x26a7050()*0.450406);
}

double NNfunction_sb_dLuR::synapse0x26b0860() {
   return (neuron0x26a7390()*-0.0232772);
}

double NNfunction_sb_dLuR::synapse0x26b02f0() {
   return (neuron0x26a76d0()*0.0146985);
}

double NNfunction_sb_dLuR::synapse0x26b0330() {
   return (neuron0x26a7c30()*-0.00697096);
}

double NNfunction_sb_dLuR::synapse0x26b09b0() {
   return (neuron0x26a7e50()*-0.00334909);
}

double NNfunction_sb_dLuR::synapse0x26b09f0() {
   return (neuron0x26a8190()*0.00047508);
}

double NNfunction_sb_dLuR::synapse0x26b0a30() {
   return (neuron0x26a84d0()*0.0101764);
}

double NNfunction_sb_dLuR::synapse0x26b0a70() {
   return (neuron0x26a8810()*0.0110356);
}

double NNfunction_sb_dLuR::synapse0x26b0ab0() {
   return (neuron0x26a8b50()*-0.0140923);
}

double NNfunction_sb_dLuR::synapse0x26b0af0() {
   return (neuron0x26a8e90()*-0.014591);
}

double NNfunction_sb_dLuR::synapse0x26b0cc0() {
   return (neuron0x26a4360()*0.0279512);
}

double NNfunction_sb_dLuR::synapse0x26b9d50() {
   return (neuron0x26a4610()*-0.0380075);
}

double NNfunction_sb_dLuR::synapse0x26b9d90() {
   return (neuron0x26a4950()*-0.0220947);
}

double NNfunction_sb_dLuR::synapse0x26b9dd0() {
   return (neuron0x26a4c90()*1.92752);
}

double NNfunction_sb_dLuR::synapse0x26b9e10() {
   return (neuron0x26a4fd0()*-0.0524676);
}

double NNfunction_sb_dLuR::synapse0x26b9e50() {
   return (neuron0x26a5310()*-0.0388608);
}

double NNfunction_sb_dLuR::synapse0x26b9e90() {
   return (neuron0x26a5650()*0.0296672);
}

double NNfunction_sb_dLuR::synapse0x26b9ed0() {
   return (neuron0x26a5990()*0.0316337);
}

double NNfunction_sb_dLuR::synapse0x26b9f10() {
   return (neuron0x26a5cd0()*-0.0323083);
}

double NNfunction_sb_dLuR::synapse0x26b9f50() {
   return (neuron0x26a6010()*-0.0560597);
}

double NNfunction_sb_dLuR::synapse0x26b9f90() {
   return (neuron0x26a6350()*0.0128783);
}

double NNfunction_sb_dLuR::synapse0x26b9fd0() {
   return (neuron0x26a6690()*-0.429979);
}

double NNfunction_sb_dLuR::synapse0x26ba010() {
   return (neuron0x26a69d0()*-0.0116029);
}

double NNfunction_sb_dLuR::synapse0x26ba050() {
   return (neuron0x26a6d10()*-0.0511102);
}

double NNfunction_sb_dLuR::synapse0x26ba090() {
   return (neuron0x26a7050()*-0.280073);
}

double NNfunction_sb_dLuR::synapse0x26ba0d0() {
   return (neuron0x26a7390()*-0.099864);
}

double NNfunction_sb_dLuR::synapse0x26b9ba0() {
   return (neuron0x26a76d0()*-0.0700865);
}

double NNfunction_sb_dLuR::synapse0x26b9be0() {
   return (neuron0x26a7c30()*0.0637734);
}

double NNfunction_sb_dLuR::synapse0x26ba220() {
   return (neuron0x26a7e50()*0.0430838);
}

double NNfunction_sb_dLuR::synapse0x26ba260() {
   return (neuron0x26a8190()*0.0450485);
}

double NNfunction_sb_dLuR::synapse0x26ba2a0() {
   return (neuron0x26a84d0()*0.0778932);
}

double NNfunction_sb_dLuR::synapse0x26ba2e0() {
   return (neuron0x26a8810()*0.0407798);
}

double NNfunction_sb_dLuR::synapse0x26ba320() {
   return (neuron0x26a8b50()*-0.000853514);
}

double NNfunction_sb_dLuR::synapse0x26ba360() {
   return (neuron0x26a8e90()*0.00867025);
}

double NNfunction_sb_dLuR::synapse0x26ba6e0() {
   return (neuron0x26a4360()*-0.372709);
}

double NNfunction_sb_dLuR::synapse0x26ba720() {
   return (neuron0x26a4610()*0.0492866);
}

double NNfunction_sb_dLuR::synapse0x26ba760() {
   return (neuron0x26a4950()*-0.0211845);
}

double NNfunction_sb_dLuR::synapse0x26ba7a0() {
   return (neuron0x26a4c90()*1.13566);
}

double NNfunction_sb_dLuR::synapse0x26ba7e0() {
   return (neuron0x26a4fd0()*0.147955);
}

double NNfunction_sb_dLuR::synapse0x26ba820() {
   return (neuron0x26a5310()*0.0866668);
}

double NNfunction_sb_dLuR::synapse0x26ba860() {
   return (neuron0x26a5650()*-0.0229502);
}

double NNfunction_sb_dLuR::synapse0x26ba8a0() {
   return (neuron0x26a5990()*-0.269459);
}

double NNfunction_sb_dLuR::synapse0x26ba8e0() {
   return (neuron0x26a5cd0()*0.0442323);
}

double NNfunction_sb_dLuR::synapse0x26ba920() {
   return (neuron0x26a6010()*-0.0133599);
}

double NNfunction_sb_dLuR::synapse0x26ba960() {
   return (neuron0x26a6350()*-0.0768062);
}

double NNfunction_sb_dLuR::synapse0x26ba9a0() {
   return (neuron0x26a6690()*-1.42834);
}

double NNfunction_sb_dLuR::synapse0x26ba9e0() {
   return (neuron0x26a69d0()*-0.336352);
}

double NNfunction_sb_dLuR::synapse0x26baa20() {
   return (neuron0x26a6d10()*-0.113375);
}

double NNfunction_sb_dLuR::synapse0x26baa60() {
   return (neuron0x26a7050()*-0.0454709);
}

double NNfunction_sb_dLuR::synapse0x26baaa0() {
   return (neuron0x26a7390()*0.115194);
}

double NNfunction_sb_dLuR::synapse0x26ba530() {
   return (neuron0x26a76d0()*0.105445);
}

double NNfunction_sb_dLuR::synapse0x26ba570() {
   return (neuron0x26a7c30()*-0.0992063);
}

double NNfunction_sb_dLuR::synapse0x26babf0() {
   return (neuron0x26a7e50()*0.00498059);
}

double NNfunction_sb_dLuR::synapse0x26bac30() {
   return (neuron0x26a8190()*-0.00590253);
}

double NNfunction_sb_dLuR::synapse0x26bac70() {
   return (neuron0x26a84d0()*-0.114802);
}

double NNfunction_sb_dLuR::synapse0x26bacb0() {
   return (neuron0x26a8810()*-0.0924478);
}

double NNfunction_sb_dLuR::synapse0x26bacf0() {
   return (neuron0x26a8b50()*-0.0549907);
}

double NNfunction_sb_dLuR::synapse0x26bad30() {
   return (neuron0x26a8e90()*-0.0875733);
}

double NNfunction_sb_dLuR::synapse0x26bb0b0() {
   return (neuron0x26a4360()*-0.603102);
}

double NNfunction_sb_dLuR::synapse0x26bb0f0() {
   return (neuron0x26a4610()*0.408505);
}

double NNfunction_sb_dLuR::synapse0x26bb130() {
   return (neuron0x26a4950()*-0.332689);
}

double NNfunction_sb_dLuR::synapse0x26bb170() {
   return (neuron0x26a4c90()*-0.12423);
}

double NNfunction_sb_dLuR::synapse0x26bb1b0() {
   return (neuron0x26a4fd0()*0.0394129);
}

double NNfunction_sb_dLuR::synapse0x26bb1f0() {
   return (neuron0x26a5310()*0.443622);
}

double NNfunction_sb_dLuR::synapse0x26bb230() {
   return (neuron0x26a5650()*-0.124325);
}

double NNfunction_sb_dLuR::synapse0x26bb270() {
   return (neuron0x26a5990()*-0.353578);
}

double NNfunction_sb_dLuR::synapse0x26bb2b0() {
   return (neuron0x26a5cd0()*0.115356);
}

double NNfunction_sb_dLuR::synapse0x26bb2f0() {
   return (neuron0x26a6010()*0.0276314);
}

double NNfunction_sb_dLuR::synapse0x26bb330() {
   return (neuron0x26a6350()*0.233482);
}

double NNfunction_sb_dLuR::synapse0x26bb370() {
   return (neuron0x26a6690()*-0.191663);
}

double NNfunction_sb_dLuR::synapse0x26bb3b0() {
   return (neuron0x26a69d0()*-0.399834);
}

double NNfunction_sb_dLuR::synapse0x26bb3f0() {
   return (neuron0x26a6d10()*-0.468713);
}

double NNfunction_sb_dLuR::synapse0x26bb430() {
   return (neuron0x26a7050()*-0.0914875);
}

double NNfunction_sb_dLuR::synapse0x26bb470() {
   return (neuron0x26a7390()*0.653407);
}

double NNfunction_sb_dLuR::synapse0x26baf00() {
   return (neuron0x26a76d0()*0.259461);
}

double NNfunction_sb_dLuR::synapse0x26baf40() {
   return (neuron0x26a7c30()*0.114031);
}

double NNfunction_sb_dLuR::synapse0x26bb5c0() {
   return (neuron0x26a7e50()*-0.296907);
}

double NNfunction_sb_dLuR::synapse0x26bb600() {
   return (neuron0x26a8190()*0.548599);
}

double NNfunction_sb_dLuR::synapse0x26bb640() {
   return (neuron0x26a84d0()*0.254257);
}

double NNfunction_sb_dLuR::synapse0x26bb680() {
   return (neuron0x26a8810()*0.0163062);
}

double NNfunction_sb_dLuR::synapse0x26bb6c0() {
   return (neuron0x26a8b50()*-0.126552);
}

double NNfunction_sb_dLuR::synapse0x26bb700() {
   return (neuron0x26a8e90()*-0.171226);
}

double NNfunction_sb_dLuR::synapse0x26bba80() {
   return (neuron0x26a4360()*-0.0477605);
}

double NNfunction_sb_dLuR::synapse0x26bbac0() {
   return (neuron0x26a4610()*-0.00989614);
}

double NNfunction_sb_dLuR::synapse0x26bbb00() {
   return (neuron0x26a4950()*-0.0322511);
}

double NNfunction_sb_dLuR::synapse0x26bbb40() {
   return (neuron0x26a4c90()*-0.213776);
}

double NNfunction_sb_dLuR::synapse0x26bbb80() {
   return (neuron0x26a4fd0()*-0.00989067);
}

double NNfunction_sb_dLuR::synapse0x26bbbc0() {
   return (neuron0x26a5310()*0.00757185);
}

double NNfunction_sb_dLuR::synapse0x26bbc00() {
   return (neuron0x26a5650()*-0.0381782);
}

double NNfunction_sb_dLuR::synapse0x26bbc40() {
   return (neuron0x26a5990()*-0.0505965);
}

double NNfunction_sb_dLuR::synapse0x26bbc80() {
   return (neuron0x26a5cd0()*-0.0166077);
}

double NNfunction_sb_dLuR::synapse0x26bbcc0() {
   return (neuron0x26a6010()*-0.00309102);
}

double NNfunction_sb_dLuR::synapse0x26bbd00() {
   return (neuron0x26a6350()*0.03216);
}

double NNfunction_sb_dLuR::synapse0x26bbd40() {
   return (neuron0x26a6690()*-0.538747);
}

double NNfunction_sb_dLuR::synapse0x26bbd80() {
   return (neuron0x26a69d0()*-0.0212814);
}

double NNfunction_sb_dLuR::synapse0x26bbdc0() {
   return (neuron0x26a6d10()*0.0095616);
}

double NNfunction_sb_dLuR::synapse0x26bbe00() {
   return (neuron0x26a7050()*-0.804305);
}

double NNfunction_sb_dLuR::synapse0x26bbe40() {
   return (neuron0x26a7390()*0.0452762);
}

double NNfunction_sb_dLuR::synapse0x26bb8d0() {
   return (neuron0x26a76d0()*0.00875864);
}

double NNfunction_sb_dLuR::synapse0x26bb910() {
   return (neuron0x26a7c30()*0.0171477);
}

double NNfunction_sb_dLuR::synapse0x26bbf90() {
   return (neuron0x26a7e50()*0.0237002);
}

double NNfunction_sb_dLuR::synapse0x26bbfd0() {
   return (neuron0x26a8190()*-0.014636);
}

double NNfunction_sb_dLuR::synapse0x26bc010() {
   return (neuron0x26a84d0()*-0.0351813);
}

double NNfunction_sb_dLuR::synapse0x26bc050() {
   return (neuron0x26a8810()*0.0231535);
}

double NNfunction_sb_dLuR::synapse0x26bc090() {
   return (neuron0x26a8b50()*0.0306051);
}

double NNfunction_sb_dLuR::synapse0x26bc0d0() {
   return (neuron0x26a8e90()*-0.0276249);
}

double NNfunction_sb_dLuR::synapse0x26bc450() {
   return (neuron0x26a4360()*0.0724529);
}

double NNfunction_sb_dLuR::synapse0x26bc490() {
   return (neuron0x26a4610()*-0.031252);
}

double NNfunction_sb_dLuR::synapse0x26bc4d0() {
   return (neuron0x26a4950()*-0.0331393);
}

double NNfunction_sb_dLuR::synapse0x26bc510() {
   return (neuron0x26a4c90()*0.950392);
}

double NNfunction_sb_dLuR::synapse0x26bc550() {
   return (neuron0x26a4fd0()*-0.0855074);
}

double NNfunction_sb_dLuR::synapse0x26bc590() {
   return (neuron0x26a5310()*-0.172745);
}

double NNfunction_sb_dLuR::synapse0x26bc5d0() {
   return (neuron0x26a5650()*-0.563238);
}

double NNfunction_sb_dLuR::synapse0x26bc610() {
   return (neuron0x26a5990()*-0.0364483);
}

double NNfunction_sb_dLuR::synapse0x26bc650() {
   return (neuron0x26a5cd0()*-0.172338);
}

double NNfunction_sb_dLuR::synapse0x26bc690() {
   return (neuron0x26a6010()*0.100016);
}

double NNfunction_sb_dLuR::synapse0x26bc6d0() {
   return (neuron0x26a6350()*0.0133303);
}

double NNfunction_sb_dLuR::synapse0x26bc710() {
   return (neuron0x26a6690()*0.305252);
}

double NNfunction_sb_dLuR::synapse0x26bc750() {
   return (neuron0x26a69d0()*-0.0420624);
}

double NNfunction_sb_dLuR::synapse0x26bc790() {
   return (neuron0x26a6d10()*0.109372);
}

double NNfunction_sb_dLuR::synapse0x26bc7d0() {
   return (neuron0x26a7050()*0.372244);
}

double NNfunction_sb_dLuR::synapse0x26bc810() {
   return (neuron0x26a7390()*-0.337719);
}

double NNfunction_sb_dLuR::synapse0x26bc2a0() {
   return (neuron0x26a76d0()*0.033082);
}

double NNfunction_sb_dLuR::synapse0x26bc2e0() {
   return (neuron0x26a7c30()*-0.327388);
}

double NNfunction_sb_dLuR::synapse0x26bc960() {
   return (neuron0x26a7e50()*-0.228251);
}

double NNfunction_sb_dLuR::synapse0x26bc9a0() {
   return (neuron0x26a8190()*0.0253586);
}

double NNfunction_sb_dLuR::synapse0x26bc9e0() {
   return (neuron0x26a84d0()*0.0207241);
}

double NNfunction_sb_dLuR::synapse0x26bca20() {
   return (neuron0x26a8810()*0.0714561);
}

double NNfunction_sb_dLuR::synapse0x26bca60() {
   return (neuron0x26a8b50()*-0.0762748);
}

double NNfunction_sb_dLuR::synapse0x26bcaa0() {
   return (neuron0x26a8e90()*0.0117951);
}

double NNfunction_sb_dLuR::synapse0x26bce20() {
   return (neuron0x26a4360()*-0.0645955);
}

double NNfunction_sb_dLuR::synapse0x26bce60() {
   return (neuron0x26a4610()*0.00951789);
}

double NNfunction_sb_dLuR::synapse0x26bcea0() {
   return (neuron0x26a4950()*-0.0728696);
}

double NNfunction_sb_dLuR::synapse0x26bcee0() {
   return (neuron0x26a4c90()*0.201682);
}

double NNfunction_sb_dLuR::synapse0x26bcf20() {
   return (neuron0x26a4fd0()*-0.02143);
}

double NNfunction_sb_dLuR::synapse0x26bcf60() {
   return (neuron0x26a5310()*-0.0104281);
}

double NNfunction_sb_dLuR::synapse0x26bcfa0() {
   return (neuron0x26a5650()*0.00786808);
}

double NNfunction_sb_dLuR::synapse0x26bcfe0() {
   return (neuron0x26a5990()*-0.0126557);
}

double NNfunction_sb_dLuR::synapse0x26bd020() {
   return (neuron0x26a5cd0()*0.0357664);
}

double NNfunction_sb_dLuR::synapse0x26bd060() {
   return (neuron0x26a6010()*-0.00256675);
}

double NNfunction_sb_dLuR::synapse0x26bd0a0() {
   return (neuron0x26a6350()*0.0132516);
}

double NNfunction_sb_dLuR::synapse0x26bd0e0() {
   return (neuron0x26a6690()*-0.122163);
}

double NNfunction_sb_dLuR::synapse0x26bd120() {
   return (neuron0x26a69d0()*0.0184199);
}

double NNfunction_sb_dLuR::synapse0x26bd160() {
   return (neuron0x26a6d10()*-0.0293064);
}

double NNfunction_sb_dLuR::synapse0x26bd1a0() {
   return (neuron0x26a7050()*0.933879);
}

double NNfunction_sb_dLuR::synapse0x26bd1e0() {
   return (neuron0x26a7390()*0.023381);
}

double NNfunction_sb_dLuR::synapse0x26bcc70() {
   return (neuron0x26a76d0()*0.0388595);
}

double NNfunction_sb_dLuR::synapse0x26bccb0() {
   return (neuron0x26a7c30()*0.047101);
}

double NNfunction_sb_dLuR::synapse0x26bd330() {
   return (neuron0x26a7e50()*0.0239914);
}

double NNfunction_sb_dLuR::synapse0x26bd370() {
   return (neuron0x26a8190()*0.034826);
}

double NNfunction_sb_dLuR::synapse0x26bd3b0() {
   return (neuron0x26a84d0()*0.0126291);
}

double NNfunction_sb_dLuR::synapse0x26bd3f0() {
   return (neuron0x26a8810()*0.0181372);
}

double NNfunction_sb_dLuR::synapse0x26bd430() {
   return (neuron0x26a8b50()*0.0164217);
}

double NNfunction_sb_dLuR::synapse0x26bd470() {
   return (neuron0x26a8e90()*-0.0226026);
}

double NNfunction_sb_dLuR::synapse0x26bd7f0() {
   return (neuron0x26a4360()*0.216689);
}

double NNfunction_sb_dLuR::synapse0x26bd830() {
   return (neuron0x26a4610()*-0.253996);
}

double NNfunction_sb_dLuR::synapse0x26bd870() {
   return (neuron0x26a4950()*-0.153641);
}

double NNfunction_sb_dLuR::synapse0x26bd8b0() {
   return (neuron0x26a4c90()*0.368504);
}

double NNfunction_sb_dLuR::synapse0x26bd8f0() {
   return (neuron0x26a4fd0()*0.0490514);
}

double NNfunction_sb_dLuR::synapse0x26bd930() {
   return (neuron0x26a5310()*-0.0973297);
}

double NNfunction_sb_dLuR::synapse0x26bd970() {
   return (neuron0x26a5650()*0.223508);
}

double NNfunction_sb_dLuR::synapse0x26bd9b0() {
   return (neuron0x26a5990()*-0.00934905);
}

double NNfunction_sb_dLuR::synapse0x26bd9f0() {
   return (neuron0x26a5cd0()*0.39212);
}

double NNfunction_sb_dLuR::synapse0x26bda30() {
   return (neuron0x26a6010()*0.362479);
}

double NNfunction_sb_dLuR::synapse0x26bda70() {
   return (neuron0x26a6350()*-0.207426);
}

double NNfunction_sb_dLuR::synapse0x26bdab0() {
   return (neuron0x26a6690()*0.376567);
}

double NNfunction_sb_dLuR::synapse0x26bdaf0() {
   return (neuron0x26a69d0()*-0.187916);
}

double NNfunction_sb_dLuR::synapse0x26bdb30() {
   return (neuron0x26a6d10()*-0.0185427);
}

double NNfunction_sb_dLuR::synapse0x26bdb70() {
   return (neuron0x26a7050()*-0.328607);
}

double NNfunction_sb_dLuR::synapse0x26bdbb0() {
   return (neuron0x26a7390()*-0.0675496);
}

double NNfunction_sb_dLuR::synapse0x26bd640() {
   return (neuron0x26a76d0()*0.0292047);
}

double NNfunction_sb_dLuR::synapse0x26bd680() {
   return (neuron0x26a7c30()*0.125717);
}

double NNfunction_sb_dLuR::synapse0x26bdd00() {
   return (neuron0x26a7e50()*-0.166657);
}

double NNfunction_sb_dLuR::synapse0x26bdd40() {
   return (neuron0x26a8190()*-0.162399);
}

double NNfunction_sb_dLuR::synapse0x26bdd80() {
   return (neuron0x26a84d0()*-0.0283802);
}

double NNfunction_sb_dLuR::synapse0x26bddc0() {
   return (neuron0x26a8810()*-0.248268);
}

double NNfunction_sb_dLuR::synapse0x26bde00() {
   return (neuron0x26a8b50()*0.0338136);
}

double NNfunction_sb_dLuR::synapse0x26bde40() {
   return (neuron0x26a8e90()*-0.236021);
}

double NNfunction_sb_dLuR::synapse0x26be1c0() {
   return (neuron0x26a4360()*0.0793906);
}

double NNfunction_sb_dLuR::synapse0x26be200() {
   return (neuron0x26a4610()*0.202521);
}

double NNfunction_sb_dLuR::synapse0x26be240() {
   return (neuron0x26a4950()*-0.035138);
}

double NNfunction_sb_dLuR::synapse0x26be280() {
   return (neuron0x26a4c90()*0.0762646);
}

double NNfunction_sb_dLuR::synapse0x26be2c0() {
   return (neuron0x26a4fd0()*-0.123416);
}

double NNfunction_sb_dLuR::synapse0x26be300() {
   return (neuron0x26a5310()*-0.274868);
}

double NNfunction_sb_dLuR::synapse0x26be340() {
   return (neuron0x26a5650()*0.36709);
}

double NNfunction_sb_dLuR::synapse0x26be380() {
   return (neuron0x26a5990()*0.101715);
}

double NNfunction_sb_dLuR::synapse0x26be3c0() {
   return (neuron0x26a5cd0()*-0.445133);
}

double NNfunction_sb_dLuR::synapse0x26be400() {
   return (neuron0x26a6010()*0.323705);
}

double NNfunction_sb_dLuR::synapse0x26be440() {
   return (neuron0x26a6350()*0.372132);
}

double NNfunction_sb_dLuR::synapse0x26be480() {
   return (neuron0x26a6690()*0.759576);
}

double NNfunction_sb_dLuR::synapse0x26be4c0() {
   return (neuron0x26a69d0()*-0.164693);
}

double NNfunction_sb_dLuR::synapse0x26be500() {
   return (neuron0x26a6d10()*0.558638);
}

double NNfunction_sb_dLuR::synapse0x26be540() {
   return (neuron0x26a7050()*-0.198346);
}

double NNfunction_sb_dLuR::synapse0x26be580() {
   return (neuron0x26a7390()*0.863954);
}

double NNfunction_sb_dLuR::synapse0x26be010() {
   return (neuron0x26a76d0()*0.659);
}

double NNfunction_sb_dLuR::synapse0x26be050() {
   return (neuron0x26a7c30()*0.435211);
}

double NNfunction_sb_dLuR::synapse0x26be6d0() {
   return (neuron0x26a7e50()*0.0940257);
}

double NNfunction_sb_dLuR::synapse0x26be710() {
   return (neuron0x26a8190()*0.242971);
}

double NNfunction_sb_dLuR::synapse0x26be750() {
   return (neuron0x26a84d0()*-0.12031);
}

double NNfunction_sb_dLuR::synapse0x26be790() {
   return (neuron0x26a8810()*-0.362354);
}

double NNfunction_sb_dLuR::synapse0x26be7d0() {
   return (neuron0x26a8b50()*-0.166455);
}

double NNfunction_sb_dLuR::synapse0x26be810() {
   return (neuron0x26a8e90()*-0.336213);
}

double NNfunction_sb_dLuR::synapse0x26beb90() {
   return (neuron0x26a4360()*-0.188749);
}

double NNfunction_sb_dLuR::synapse0x26b3160() {
   return (neuron0x26a4610()*0.0234295);
}

double NNfunction_sb_dLuR::synapse0x26b31a0() {
   return (neuron0x26a4950()*0.145915);
}

double NNfunction_sb_dLuR::synapse0x26b31e0() {
   return (neuron0x26a4c90()*0.495152);
}

double NNfunction_sb_dLuR::synapse0x26b3430() {
   return (neuron0x26a4fd0()*0.352306);
}

double NNfunction_sb_dLuR::synapse0x26b3470() {
   return (neuron0x26a5310()*0.527778);
}

double NNfunction_sb_dLuR::synapse0x26b34b0() {
   return (neuron0x26a5650()*-0.13737);
}

double NNfunction_sb_dLuR::synapse0x26b3700() {
   return (neuron0x26a5990()*-0.558711);
}

double NNfunction_sb_dLuR::synapse0x26b3740() {
   return (neuron0x26a5cd0()*0.113725);
}

double NNfunction_sb_dLuR::synapse0x26b3990() {
   return (neuron0x26a6010()*0.00316157);
}

double NNfunction_sb_dLuR::synapse0x26b39d0() {
   return (neuron0x26a6350()*-0.173319);
}

double NNfunction_sb_dLuR::synapse0x26b3a10() {
   return (neuron0x26a6690()*0.126534);
}

double NNfunction_sb_dLuR::synapse0x26b3c60() {
   return (neuron0x26a69d0()*-0.0352553);
}

double NNfunction_sb_dLuR::synapse0x26b3ca0() {
   return (neuron0x26a6d10()*-0.252911);
}

double NNfunction_sb_dLuR::synapse0x26b3ef0() {
   return (neuron0x26a7050()*0.934546);
}

double NNfunction_sb_dLuR::synapse0x26b3f30() {
   return (neuron0x26a7390()*0.485949);
}

double NNfunction_sb_dLuR::synapse0x26be9e0() {
   return (neuron0x26a76d0()*0.618538);
}

double NNfunction_sb_dLuR::synapse0x26bea20() {
   return (neuron0x26a7c30()*0.0603956);
}

double NNfunction_sb_dLuR::synapse0x26b4080() {
   return (neuron0x26a7e50()*-0.224562);
}

double NNfunction_sb_dLuR::synapse0x26b4590() {
   return (neuron0x26a8190()*0.0105292);
}

double NNfunction_sb_dLuR::synapse0x26b45d0() {
   return (neuron0x26a84d0()*-0.345304);
}

double NNfunction_sb_dLuR::synapse0x26b4610() {
   return (neuron0x26a8810()*-0.0399807);
}

double NNfunction_sb_dLuR::synapse0x26b4860() {
   return (neuron0x26a8b50()*-0.277411);
}

double NNfunction_sb_dLuR::synapse0x26b48a0() {
   return (neuron0x26a8e90()*-0.492885);
}

double NNfunction_sb_dLuR::synapse0x26b4150() {
   return (neuron0x26a4360()*-0.0599665);
}

double NNfunction_sb_dLuR::synapse0x26b4190() {
   return (neuron0x26a4610()*-0.00557899);
}

double NNfunction_sb_dLuR::synapse0x26b41d0() {
   return (neuron0x26a4950()*0.0159108);
}

double NNfunction_sb_dLuR::synapse0x26b4210() {
   return (neuron0x26a4c90()*0.376581);
}

double NNfunction_sb_dLuR::synapse0x26b4b90() {
   return (neuron0x26a4fd0()*-0.216001);
}

double NNfunction_sb_dLuR::synapse0x26c0ee0() {
   return (neuron0x26a5310()*0.142583);
}

double NNfunction_sb_dLuR::synapse0x26c0f20() {
   return (neuron0x26a5650()*0.0326072);
}

double NNfunction_sb_dLuR::synapse0x26c0f60() {
   return (neuron0x26a5990()*0.26198);
}

double NNfunction_sb_dLuR::synapse0x26c0fa0() {
   return (neuron0x26a5cd0()*0.203326);
}

double NNfunction_sb_dLuR::synapse0x26c0fe0() {
   return (neuron0x26a6010()*-0.236624);
}

double NNfunction_sb_dLuR::synapse0x26c1020() {
   return (neuron0x26a6350()*-0.0950906);
}

double NNfunction_sb_dLuR::synapse0x26c1060() {
   return (neuron0x26a6690()*0.16846);
}

double NNfunction_sb_dLuR::synapse0x26c10a0() {
   return (neuron0x26a69d0()*0.370291);
}

double NNfunction_sb_dLuR::synapse0x26c10e0() {
   return (neuron0x26a6d10()*0.150574);
}

double NNfunction_sb_dLuR::synapse0x26c1120() {
   return (neuron0x26a7050()*-0.472956);
}

double NNfunction_sb_dLuR::synapse0x26c1160() {
   return (neuron0x26a7390()*-0.151972);
}

double NNfunction_sb_dLuR::synapse0x26b4a70() {
   return (neuron0x26a76d0()*0.144201);
}

double NNfunction_sb_dLuR::synapse0x26b4ab0() {
   return (neuron0x26a7c30()*0.186695);
}

double NNfunction_sb_dLuR::synapse0x26c12b0() {
   return (neuron0x26a7e50()*0.155757);
}

double NNfunction_sb_dLuR::synapse0x26c12f0() {
   return (neuron0x26a8190()*0.00482979);
}

double NNfunction_sb_dLuR::synapse0x26c1330() {
   return (neuron0x26a84d0()*-0.0364473);
}

double NNfunction_sb_dLuR::synapse0x26c1370() {
   return (neuron0x26a8810()*-0.102248);
}

double NNfunction_sb_dLuR::synapse0x26c13b0() {
   return (neuron0x26a8b50()*-0.047008);
}

double NNfunction_sb_dLuR::synapse0x26c13f0() {
   return (neuron0x26a8e90()*-0.391438);
}

double NNfunction_sb_dLuR::synapse0x26c1770() {
   return (neuron0x26a4360()*-0.0248234);
}

double NNfunction_sb_dLuR::synapse0x26c17b0() {
   return (neuron0x26a4610()*-0.681087);
}

double NNfunction_sb_dLuR::synapse0x26c17f0() {
   return (neuron0x26a4950()*0.213321);
}

double NNfunction_sb_dLuR::synapse0x26c1830() {
   return (neuron0x26a4c90()*-0.0333662);
}

double NNfunction_sb_dLuR::synapse0x26c1870() {
   return (neuron0x26a4fd0()*0.34336);
}

double NNfunction_sb_dLuR::synapse0x26c18b0() {
   return (neuron0x26a5310()*-0.0242976);
}

double NNfunction_sb_dLuR::synapse0x26c18f0() {
   return (neuron0x26a5650()*-0.269788);
}

double NNfunction_sb_dLuR::synapse0x26c1930() {
   return (neuron0x26a5990()*-0.018726);
}

double NNfunction_sb_dLuR::synapse0x26c1970() {
   return (neuron0x26a5cd0()*-0.183668);
}

double NNfunction_sb_dLuR::synapse0x26c19b0() {
   return (neuron0x26a6010()*0.425794);
}

double NNfunction_sb_dLuR::synapse0x26c19f0() {
   return (neuron0x26a6350()*-0.136827);
}

double NNfunction_sb_dLuR::synapse0x26c1a30() {
   return (neuron0x26a6690()*0.715551);
}

double NNfunction_sb_dLuR::synapse0x26c1a70() {
   return (neuron0x26a69d0()*0.133445);
}

double NNfunction_sb_dLuR::synapse0x26c1ab0() {
   return (neuron0x26a6d10()*-0.173523);
}

double NNfunction_sb_dLuR::synapse0x26c1af0() {
   return (neuron0x26a7050()*0.417114);
}

double NNfunction_sb_dLuR::synapse0x26c1b30() {
   return (neuron0x26a7390()*0.0522276);
}

double NNfunction_sb_dLuR::synapse0x26c15c0() {
   return (neuron0x26a76d0()*-0.00959159);
}

double NNfunction_sb_dLuR::synapse0x26c1600() {
   return (neuron0x26a7c30()*-0.166061);
}

double NNfunction_sb_dLuR::synapse0x26c1c80() {
   return (neuron0x26a7e50()*0.123946);
}

double NNfunction_sb_dLuR::synapse0x26c1cc0() {
   return (neuron0x26a8190()*0.111173);
}

double NNfunction_sb_dLuR::synapse0x26c1d00() {
   return (neuron0x26a84d0()*0.272333);
}

double NNfunction_sb_dLuR::synapse0x26c1d40() {
   return (neuron0x26a8810()*0.185395);
}

double NNfunction_sb_dLuR::synapse0x26c1d80() {
   return (neuron0x26a8b50()*-0.0858344);
}

double NNfunction_sb_dLuR::synapse0x26c1dc0() {
   return (neuron0x26a8e90()*0.0621693);
}

double NNfunction_sb_dLuR::synapse0x26c2140() {
   return (neuron0x26a4360()*0.468793);
}

double NNfunction_sb_dLuR::synapse0x26c2180() {
   return (neuron0x26a4610()*0.169123);
}

double NNfunction_sb_dLuR::synapse0x26c21c0() {
   return (neuron0x26a4950()*0.134987);
}

double NNfunction_sb_dLuR::synapse0x26c2200() {
   return (neuron0x26a4c90()*-0.298858);
}

double NNfunction_sb_dLuR::synapse0x26c2240() {
   return (neuron0x26a4fd0()*0.0524192);
}

double NNfunction_sb_dLuR::synapse0x26c2280() {
   return (neuron0x26a5310()*0.72355);
}

double NNfunction_sb_dLuR::synapse0x26c22c0() {
   return (neuron0x26a5650()*0.302345);
}

double NNfunction_sb_dLuR::synapse0x26c2300() {
   return (neuron0x26a5990()*0.488874);
}

double NNfunction_sb_dLuR::synapse0x26c2340() {
   return (neuron0x26a5cd0()*-0.077518);
}

double NNfunction_sb_dLuR::synapse0x26c2380() {
   return (neuron0x26a6010()*-0.378949);
}

double NNfunction_sb_dLuR::synapse0x26c23c0() {
   return (neuron0x26a6350()*-0.049402);
}

double NNfunction_sb_dLuR::synapse0x26c2400() {
   return (neuron0x26a6690()*0.0432026);
}

double NNfunction_sb_dLuR::synapse0x26c2440() {
   return (neuron0x26a69d0()*0.130938);
}

double NNfunction_sb_dLuR::synapse0x26c2480() {
   return (neuron0x26a6d10()*0.434952);
}

double NNfunction_sb_dLuR::synapse0x26c24c0() {
   return (neuron0x26a7050()*-0.62786);
}

double NNfunction_sb_dLuR::synapse0x26c2500() {
   return (neuron0x26a7390()*-0.320749);
}

double NNfunction_sb_dLuR::synapse0x26c1f90() {
   return (neuron0x26a76d0()*-0.077936);
}

double NNfunction_sb_dLuR::synapse0x26c1fd0() {
   return (neuron0x26a7c30()*0.442518);
}

double NNfunction_sb_dLuR::synapse0x26c2650() {
   return (neuron0x26a7e50()*0.424049);
}

double NNfunction_sb_dLuR::synapse0x26c2690() {
   return (neuron0x26a8190()*-0.056428);
}

double NNfunction_sb_dLuR::synapse0x26c26d0() {
   return (neuron0x26a84d0()*0.00558869);
}

double NNfunction_sb_dLuR::synapse0x26c2710() {
   return (neuron0x26a8810()*-0.260286);
}

double NNfunction_sb_dLuR::synapse0x26c2750() {
   return (neuron0x26a8b50()*-0.134492);
}

double NNfunction_sb_dLuR::synapse0x26c2790() {
   return (neuron0x26a8e90()*0.0248635);
}

double NNfunction_sb_dLuR::synapse0x26c2b10() {
   return (neuron0x26a4360()*0.00777433);
}

double NNfunction_sb_dLuR::synapse0x26c2b50() {
   return (neuron0x26a4610()*0.110776);
}

double NNfunction_sb_dLuR::synapse0x26c2b90() {
   return (neuron0x26a4950()*-0.149557);
}

double NNfunction_sb_dLuR::synapse0x26c2bd0() {
   return (neuron0x26a4c90()*0.51931);
}

double NNfunction_sb_dLuR::synapse0x26c2c10() {
   return (neuron0x26a4fd0()*0.298754);
}

double NNfunction_sb_dLuR::synapse0x26c2c50() {
   return (neuron0x26a5310()*-0.262839);
}

double NNfunction_sb_dLuR::synapse0x26c2c90() {
   return (neuron0x26a5650()*0.356999);
}

double NNfunction_sb_dLuR::synapse0x26c2cd0() {
   return (neuron0x26a5990()*0.395453);
}

double NNfunction_sb_dLuR::synapse0x26c2d10() {
   return (neuron0x26a5cd0()*-0.140665);
}

double NNfunction_sb_dLuR::synapse0x26c2d50() {
   return (neuron0x26a6010()*0.0141577);
}

double NNfunction_sb_dLuR::synapse0x26c2d90() {
   return (neuron0x26a6350()*-0.0750065);
}

double NNfunction_sb_dLuR::synapse0x26c2dd0() {
   return (neuron0x26a6690()*0.552241);
}

double NNfunction_sb_dLuR::synapse0x26c2e10() {
   return (neuron0x26a69d0()*-0.0947418);
}

double NNfunction_sb_dLuR::synapse0x26c2e50() {
   return (neuron0x26a6d10()*0.448558);
}

double NNfunction_sb_dLuR::synapse0x26c2e90() {
   return (neuron0x26a7050()*-0.464196);
}

double NNfunction_sb_dLuR::synapse0x26c2ed0() {
   return (neuron0x26a7390()*0.170564);
}

double NNfunction_sb_dLuR::synapse0x26c2960() {
   return (neuron0x26a76d0()*0.100309);
}

double NNfunction_sb_dLuR::synapse0x26c29a0() {
   return (neuron0x26a7c30()*0.458986);
}

double NNfunction_sb_dLuR::synapse0x26c3020() {
   return (neuron0x26a7e50()*0.273387);
}

double NNfunction_sb_dLuR::synapse0x26c3060() {
   return (neuron0x26a8190()*0.168209);
}

double NNfunction_sb_dLuR::synapse0x26c30a0() {
   return (neuron0x26a84d0()*-0.0697016);
}

double NNfunction_sb_dLuR::synapse0x26c30e0() {
   return (neuron0x26a8810()*0.12376);
}

double NNfunction_sb_dLuR::synapse0x26c3120() {
   return (neuron0x26a8b50()*-0.209481);
}

double NNfunction_sb_dLuR::synapse0x26c3160() {
   return (neuron0x26a8e90()*-0.00923331);
}

double NNfunction_sb_dLuR::synapse0x26c34e0() {
   return (neuron0x26a4360()*0.0420601);
}

double NNfunction_sb_dLuR::synapse0x26c3520() {
   return (neuron0x26a4610()*0.0510814);
}

double NNfunction_sb_dLuR::synapse0x26c3560() {
   return (neuron0x26a4950()*-0.0262329);
}

double NNfunction_sb_dLuR::synapse0x26c35a0() {
   return (neuron0x26a4c90()*-0.706313);
}

double NNfunction_sb_dLuR::synapse0x26c35e0() {
   return (neuron0x26a4fd0()*0.0194746);
}

double NNfunction_sb_dLuR::synapse0x26c3620() {
   return (neuron0x26a5310()*-0.00576707);
}

double NNfunction_sb_dLuR::synapse0x26c3660() {
   return (neuron0x26a5650()*0.0380843);
}

double NNfunction_sb_dLuR::synapse0x26c36a0() {
   return (neuron0x26a5990()*0.0752944);
}

double NNfunction_sb_dLuR::synapse0x26c36e0() {
   return (neuron0x26a5cd0()*0.0893827);
}

double NNfunction_sb_dLuR::synapse0x26c3720() {
   return (neuron0x26a6010()*-0.0414898);
}

double NNfunction_sb_dLuR::synapse0x26c3760() {
   return (neuron0x26a6350()*-0.0182941);
}

double NNfunction_sb_dLuR::synapse0x26c37a0() {
   return (neuron0x26a6690()*0.0654415);
}

double NNfunction_sb_dLuR::synapse0x26c37e0() {
   return (neuron0x26a69d0()*0.0194682);
}

double NNfunction_sb_dLuR::synapse0x26c3820() {
   return (neuron0x26a6d10()*-0.0200279);
}

double NNfunction_sb_dLuR::synapse0x26c3860() {
   return (neuron0x26a7050()*0.647562);
}

double NNfunction_sb_dLuR::synapse0x26c38a0() {
   return (neuron0x26a7390()*-0.0853573);
}

double NNfunction_sb_dLuR::synapse0x26c3330() {
   return (neuron0x26a76d0()*0.00862913);
}

double NNfunction_sb_dLuR::synapse0x26c3370() {
   return (neuron0x26a7c30()*-0.0217513);
}

double NNfunction_sb_dLuR::synapse0x26c39f0() {
   return (neuron0x26a7e50()*0.0333534);
}

double NNfunction_sb_dLuR::synapse0x26c3a30() {
   return (neuron0x26a8190()*0.00580043);
}

double NNfunction_sb_dLuR::synapse0x26c3a70() {
   return (neuron0x26a84d0()*0.0645951);
}

double NNfunction_sb_dLuR::synapse0x26c3ab0() {
   return (neuron0x26a8810()*-0.0224661);
}

double NNfunction_sb_dLuR::synapse0x26c3af0() {
   return (neuron0x26a8b50()*-0.03143);
}

double NNfunction_sb_dLuR::synapse0x26c3b30() {
   return (neuron0x26a8e90()*-0.0419792);
}

double NNfunction_sb_dLuR::synapse0x26c3eb0() {
   return (neuron0x26a4360()*-0.0176901);
}

double NNfunction_sb_dLuR::synapse0x26c3ef0() {
   return (neuron0x26a4610()*0.001614);
}

double NNfunction_sb_dLuR::synapse0x26c3f30() {
   return (neuron0x26a4950()*-0.0155453);
}

double NNfunction_sb_dLuR::synapse0x26c3f70() {
   return (neuron0x26a4c90()*12.4365);
}

double NNfunction_sb_dLuR::synapse0x26c3fb0() {
   return (neuron0x26a4fd0()*0.0229949);
}

double NNfunction_sb_dLuR::synapse0x26c3ff0() {
   return (neuron0x26a5310()*-0.0115997);
}

double NNfunction_sb_dLuR::synapse0x26c4030() {
   return (neuron0x26a5650()*-0.00870256);
}

double NNfunction_sb_dLuR::synapse0x26c4070() {
   return (neuron0x26a5990()*-0.00104499);
}

double NNfunction_sb_dLuR::synapse0x26c40b0() {
   return (neuron0x26a5cd0()*-0.0088478);
}

double NNfunction_sb_dLuR::synapse0x26c40f0() {
   return (neuron0x26a6010()*-0.0153806);
}

double NNfunction_sb_dLuR::synapse0x26c4130() {
   return (neuron0x26a6350()*-0.0224479);
}

double NNfunction_sb_dLuR::synapse0x26c4170() {
   return (neuron0x26a6690()*0.284983);
}

double NNfunction_sb_dLuR::synapse0x26c41b0() {
   return (neuron0x26a69d0()*0.00271841);
}

double NNfunction_sb_dLuR::synapse0x26c41f0() {
   return (neuron0x26a6d10()*0.00533465);
}

double NNfunction_sb_dLuR::synapse0x26c4230() {
   return (neuron0x26a7050()*0.269361);
}

double NNfunction_sb_dLuR::synapse0x26c4270() {
   return (neuron0x26a7390()*-0.00624771);
}

double NNfunction_sb_dLuR::synapse0x26c3d00() {
   return (neuron0x26a76d0()*0.0101483);
}

double NNfunction_sb_dLuR::synapse0x26c3d40() {
   return (neuron0x26a7c30()*-0.00442086);
}

double NNfunction_sb_dLuR::synapse0x26c43c0() {
   return (neuron0x26a7e50()*-0.0316131);
}

double NNfunction_sb_dLuR::synapse0x26c4400() {
   return (neuron0x26a8190()*0.00680742);
}

double NNfunction_sb_dLuR::synapse0x26c4440() {
   return (neuron0x26a84d0()*-0.0201801);
}

double NNfunction_sb_dLuR::synapse0x26c4480() {
   return (neuron0x26a8810()*0.00188434);
}

double NNfunction_sb_dLuR::synapse0x26c44c0() {
   return (neuron0x26a8b50()*-0.0189563);
}

double NNfunction_sb_dLuR::synapse0x26c4500() {
   return (neuron0x26a8e90()*0.0147166);
}

double NNfunction_sb_dLuR::synapse0x26c4880() {
   return (neuron0x26a4360()*-0.586696);
}

double NNfunction_sb_dLuR::synapse0x26c48c0() {
   return (neuron0x26a4610()*0.00844717);
}

double NNfunction_sb_dLuR::synapse0x26c4900() {
   return (neuron0x26a4950()*0.0302744);
}

double NNfunction_sb_dLuR::synapse0x26c4940() {
   return (neuron0x26a4c90()*0.0700001);
}

double NNfunction_sb_dLuR::synapse0x26c4980() {
   return (neuron0x26a4fd0()*0.470037);
}

double NNfunction_sb_dLuR::synapse0x26c49c0() {
   return (neuron0x26a5310()*0.312452);
}

double NNfunction_sb_dLuR::synapse0x26c4a00() {
   return (neuron0x26a5650()*-0.205017);
}

double NNfunction_sb_dLuR::synapse0x26c4a40() {
   return (neuron0x26a5990()*0.404967);
}

double NNfunction_sb_dLuR::synapse0x26c4a80() {
   return (neuron0x26a5cd0()*-1.06693);
}

double NNfunction_sb_dLuR::synapse0x26c4ac0() {
   return (neuron0x26a6010()*0.281567);
}

double NNfunction_sb_dLuR::synapse0x26c4b00() {
   return (neuron0x26a6350()*-0.535971);
}

double NNfunction_sb_dLuR::synapse0x26c4b40() {
   return (neuron0x26a6690()*0.322844);
}

double NNfunction_sb_dLuR::synapse0x26c4b80() {
   return (neuron0x26a69d0()*-0.236703);
}

double NNfunction_sb_dLuR::synapse0x26c4bc0() {
   return (neuron0x26a6d10()*0.424872);
}

double NNfunction_sb_dLuR::synapse0x26c4c00() {
   return (neuron0x26a7050()*0.213681);
}

double NNfunction_sb_dLuR::synapse0x26c4c40() {
   return (neuron0x26a7390()*0.57232);
}

double NNfunction_sb_dLuR::synapse0x26c46d0() {
   return (neuron0x26a76d0()*0.205695);
}

double NNfunction_sb_dLuR::synapse0x26c4710() {
   return (neuron0x26a7c30()*-0.126066);
}

double NNfunction_sb_dLuR::synapse0x26c4d90() {
   return (neuron0x26a7e50()*0.719844);
}

double NNfunction_sb_dLuR::synapse0x26c4dd0() {
   return (neuron0x26a8190()*-0.0107377);
}

double NNfunction_sb_dLuR::synapse0x26c4e10() {
   return (neuron0x26a84d0()*0.469012);
}

double NNfunction_sb_dLuR::synapse0x26c4e50() {
   return (neuron0x26a8810()*-0.116955);
}

double NNfunction_sb_dLuR::synapse0x26c4e90() {
   return (neuron0x26a8b50()*-0.264591);
}

double NNfunction_sb_dLuR::synapse0x26c4ed0() {
   return (neuron0x26a8e90()*-0.024514);
}

double NNfunction_sb_dLuR::synapse0x26c5250() {
   return (neuron0x26a4360()*-0.106024);
}

double NNfunction_sb_dLuR::synapse0x26c5290() {
   return (neuron0x26a4610()*0.00438079);
}

double NNfunction_sb_dLuR::synapse0x26c52d0() {
   return (neuron0x26a4950()*-0.0307828);
}

double NNfunction_sb_dLuR::synapse0x26c5310() {
   return (neuron0x26a4c90()*0.606595);
}

double NNfunction_sb_dLuR::synapse0x26c5350() {
   return (neuron0x26a4fd0()*0.00487249);
}

double NNfunction_sb_dLuR::synapse0x26c5390() {
   return (neuron0x26a5310()*-0.0387522);
}

double NNfunction_sb_dLuR::synapse0x26c53d0() {
   return (neuron0x26a5650()*0.0025812);
}

double NNfunction_sb_dLuR::synapse0x26c5410() {
   return (neuron0x26a5990()*-0.0174099);
}

double NNfunction_sb_dLuR::synapse0x26c5450() {
   return (neuron0x26a5cd0()*0.093003);
}

double NNfunction_sb_dLuR::synapse0x26c5490() {
   return (neuron0x26a6010()*-0.0447957);
}

double NNfunction_sb_dLuR::synapse0x26c54d0() {
   return (neuron0x26a6350()*0.0803617);
}

double NNfunction_sb_dLuR::synapse0x26c5510() {
   return (neuron0x26a6690()*0.432232);
}

double NNfunction_sb_dLuR::synapse0x26c5550() {
   return (neuron0x26a69d0()*-0.0648785);
}

double NNfunction_sb_dLuR::synapse0x26c5590() {
   return (neuron0x26a6d10()*-0.0825253);
}

double NNfunction_sb_dLuR::synapse0x26c55d0() {
   return (neuron0x26a7050()*0.32407);
}

double NNfunction_sb_dLuR::synapse0x26c5610() {
   return (neuron0x26a7390()*-0.028007);
}

double NNfunction_sb_dLuR::synapse0x26c50a0() {
   return (neuron0x26a76d0()*-0.0115664);
}

double NNfunction_sb_dLuR::synapse0x26c50e0() {
   return (neuron0x26a7c30()*-0.00445291);
}

double NNfunction_sb_dLuR::synapse0x26c5760() {
   return (neuron0x26a7e50()*-0.0164776);
}

double NNfunction_sb_dLuR::synapse0x26c57a0() {
   return (neuron0x26a8190()*0.107996);
}

double NNfunction_sb_dLuR::synapse0x26c57e0() {
   return (neuron0x26a84d0()*0.0222431);
}

double NNfunction_sb_dLuR::synapse0x26c5820() {
   return (neuron0x26a8810()*0.029583);
}

double NNfunction_sb_dLuR::synapse0x26c5860() {
   return (neuron0x26a8b50()*0.0128997);
}

double NNfunction_sb_dLuR::synapse0x26c58a0() {
   return (neuron0x26a8e90()*-0.0407261);
}

double NNfunction_sb_dLuR::synapse0x26ae350() {
   return (neuron0x26a4360()*-0.0444837);
}

double NNfunction_sb_dLuR::synapse0x26ae390() {
   return (neuron0x26a4610()*-0.258528);
}

double NNfunction_sb_dLuR::synapse0x26ae3d0() {
   return (neuron0x26a4950()*-0.369118);
}

double NNfunction_sb_dLuR::synapse0x26ae410() {
   return (neuron0x26a4c90()*0.646598);
}

double NNfunction_sb_dLuR::synapse0x26ae450() {
   return (neuron0x26a4fd0()*-0.119443);
}

double NNfunction_sb_dLuR::synapse0x26ae490() {
   return (neuron0x26a5310()*-0.0409875);
}

double NNfunction_sb_dLuR::synapse0x26ae4d0() {
   return (neuron0x26a5650()*-0.243047);
}

double NNfunction_sb_dLuR::synapse0x26ae510() {
   return (neuron0x26a5990()*0.0118776);
}

double NNfunction_sb_dLuR::synapse0x26c6030() {
   return (neuron0x26a5cd0()*0.0663488);
}

double NNfunction_sb_dLuR::synapse0x26c6070() {
   return (neuron0x26a6010()*0.0188058);
}

double NNfunction_sb_dLuR::synapse0x26c60b0() {
   return (neuron0x26a6350()*0.150561);
}

double NNfunction_sb_dLuR::synapse0x26c60f0() {
   return (neuron0x26a6690()*-0.514389);
}

double NNfunction_sb_dLuR::synapse0x26c6130() {
   return (neuron0x26a69d0()*-0.109862);
}

double NNfunction_sb_dLuR::synapse0x26c6170() {
   return (neuron0x26a6d10()*0.0841146);
}

double NNfunction_sb_dLuR::synapse0x26c61b0() {
   return (neuron0x26a7050()*-0.537684);
}

double NNfunction_sb_dLuR::synapse0x26c61f0() {
   return (neuron0x26a7390()*-0.18855);
}

double NNfunction_sb_dLuR::synapse0x26c5a70() {
   return (neuron0x26a76d0()*-0.00381544);
}

double NNfunction_sb_dLuR::synapse0x26c5ab0() {
   return (neuron0x26a7c30()*-0.121245);
}

double NNfunction_sb_dLuR::synapse0x26c6340() {
   return (neuron0x26a7e50()*0.0467033);
}

double NNfunction_sb_dLuR::synapse0x26c6380() {
   return (neuron0x26a8190()*-0.0833102);
}

double NNfunction_sb_dLuR::synapse0x26c63c0() {
   return (neuron0x26a84d0()*-0.0647553);
}

double NNfunction_sb_dLuR::synapse0x26c6400() {
   return (neuron0x26a8810()*-0.0338167);
}

double NNfunction_sb_dLuR::synapse0x26c6440() {
   return (neuron0x26a8b50()*0.0150674);
}

double NNfunction_sb_dLuR::synapse0x26c6480() {
   return (neuron0x26a8e90()*0.00127249);
}

double NNfunction_sb_dLuR::synapse0x26c6800() {
   return (neuron0x26a4360()*0.158193);
}

double NNfunction_sb_dLuR::synapse0x26c6840() {
   return (neuron0x26a4610()*-0.141134);
}

double NNfunction_sb_dLuR::synapse0x26c6880() {
   return (neuron0x26a4950()*0.0607236);
}

double NNfunction_sb_dLuR::synapse0x26c68c0() {
   return (neuron0x26a4c90()*0.407051);
}

double NNfunction_sb_dLuR::synapse0x26c6900() {
   return (neuron0x26a4fd0()*0.305179);
}

double NNfunction_sb_dLuR::synapse0x26c6940() {
   return (neuron0x26a5310()*-0.341288);
}

double NNfunction_sb_dLuR::synapse0x26c6980() {
   return (neuron0x26a5650()*-0.207835);
}

double NNfunction_sb_dLuR::synapse0x26c69c0() {
   return (neuron0x26a5990()*-0.452293);
}

double NNfunction_sb_dLuR::synapse0x26c6a00() {
   return (neuron0x26a5cd0()*-0.196657);
}

double NNfunction_sb_dLuR::synapse0x26c6a40() {
   return (neuron0x26a6010()*-0.238351);
}

double NNfunction_sb_dLuR::synapse0x26c6a80() {
   return (neuron0x26a6350()*-0.387857);
}

double NNfunction_sb_dLuR::synapse0x26c6ac0() {
   return (neuron0x26a6690()*-0.823063);
}

double NNfunction_sb_dLuR::synapse0x26c6b00() {
   return (neuron0x26a69d0()*0.484431);
}

double NNfunction_sb_dLuR::synapse0x26c6b40() {
   return (neuron0x26a6d10()*0.273682);
}

double NNfunction_sb_dLuR::synapse0x26c6b80() {
   return (neuron0x26a7050()*0.406166);
}

double NNfunction_sb_dLuR::synapse0x26c6bc0() {
   return (neuron0x26a7390()*0.115536);
}

double NNfunction_sb_dLuR::synapse0x26c6650() {
   return (neuron0x26a76d0()*-0.375647);
}

double NNfunction_sb_dLuR::synapse0x26c6690() {
   return (neuron0x26a7c30()*-0.00323101);
}

double NNfunction_sb_dLuR::synapse0x26c6d10() {
   return (neuron0x26a7e50()*-0.223502);
}

double NNfunction_sb_dLuR::synapse0x26c6d50() {
   return (neuron0x26a8190()*-0.219004);
}

double NNfunction_sb_dLuR::synapse0x26c6d90() {
   return (neuron0x26a84d0()*-0.384444);
}

double NNfunction_sb_dLuR::synapse0x26c6dd0() {
   return (neuron0x26a8810()*0.0365613);
}

double NNfunction_sb_dLuR::synapse0x26c6e10() {
   return (neuron0x26a8b50()*-0.225222);
}

double NNfunction_sb_dLuR::synapse0x26c6e50() {
   return (neuron0x26a8e90()*0.290325);
}

double NNfunction_sb_dLuR::synapse0x26c71d0() {
   return (neuron0x26a4360()*-0.235548);
}

double NNfunction_sb_dLuR::synapse0x26c7210() {
   return (neuron0x26a4610()*-0.0112735);
}

double NNfunction_sb_dLuR::synapse0x26c7250() {
   return (neuron0x26a4950()*-0.640602);
}

double NNfunction_sb_dLuR::synapse0x26c7290() {
   return (neuron0x26a4c90()*-0.102248);
}

double NNfunction_sb_dLuR::synapse0x26c72d0() {
   return (neuron0x26a4fd0()*-0.115357);
}

double NNfunction_sb_dLuR::synapse0x26c7310() {
   return (neuron0x26a5310()*-0.0215065);
}

double NNfunction_sb_dLuR::synapse0x26c7350() {
   return (neuron0x26a5650()*-0.0888268);
}

double NNfunction_sb_dLuR::synapse0x26c7390() {
   return (neuron0x26a5990()*-0.0785509);
}

double NNfunction_sb_dLuR::synapse0x26c73d0() {
   return (neuron0x26a5cd0()*0.0213667);
}

double NNfunction_sb_dLuR::synapse0x26c7410() {
   return (neuron0x26a6010()*0.0244838);
}

double NNfunction_sb_dLuR::synapse0x26c7450() {
   return (neuron0x26a6350()*0.0570115);
}

double NNfunction_sb_dLuR::synapse0x26c7490() {
   return (neuron0x26a6690()*0.504357);
}

double NNfunction_sb_dLuR::synapse0x26c74d0() {
   return (neuron0x26a69d0()*0.0229685);
}

double NNfunction_sb_dLuR::synapse0x26c7510() {
   return (neuron0x26a6d10()*-0.0689787);
}

double NNfunction_sb_dLuR::synapse0x26c7550() {
   return (neuron0x26a7050()*-0.290266);
}

double NNfunction_sb_dLuR::synapse0x26c7590() {
   return (neuron0x26a7390()*-0.0743842);
}

double NNfunction_sb_dLuR::synapse0x26c7020() {
   return (neuron0x26a76d0()*0.041442);
}

double NNfunction_sb_dLuR::synapse0x26c7060() {
   return (neuron0x26a7c30()*0.0676512);
}

double NNfunction_sb_dLuR::synapse0x26b7b90() {
   return (neuron0x26a7e50()*0.0943175);
}

double NNfunction_sb_dLuR::synapse0x26b7bd0() {
   return (neuron0x26a8190()*0.037966);
}

double NNfunction_sb_dLuR::synapse0x26b7c10() {
   return (neuron0x26a84d0()*0.000832239);
}

double NNfunction_sb_dLuR::synapse0x26b7c50() {
   return (neuron0x26a8810()*0.0322716);
}

double NNfunction_sb_dLuR::synapse0x26b7c90() {
   return (neuron0x26a8b50()*-0.00319475);
}

double NNfunction_sb_dLuR::synapse0x26b7cd0() {
   return (neuron0x26a8e90()*-0.156266);
}

double NNfunction_sb_dLuR::synapse0x26b8050() {
   return (neuron0x26a4360()*0.00588357);
}

double NNfunction_sb_dLuR::synapse0x26b8090() {
   return (neuron0x26a4610()*0.00864088);
}

double NNfunction_sb_dLuR::synapse0x26b80d0() {
   return (neuron0x26a4950()*0.01045);
}

double NNfunction_sb_dLuR::synapse0x26b8110() {
   return (neuron0x26a4c90()*-2.21517);
}

double NNfunction_sb_dLuR::synapse0x26b8150() {
   return (neuron0x26a4fd0()*-0.00639269);
}

double NNfunction_sb_dLuR::synapse0x26b8190() {
   return (neuron0x26a5310()*-0.010268);
}

double NNfunction_sb_dLuR::synapse0x26b81d0() {
   return (neuron0x26a5650()*0.00866271);
}

double NNfunction_sb_dLuR::synapse0x26b8210() {
   return (neuron0x26a5990()*0.0144074);
}

double NNfunction_sb_dLuR::synapse0x26b8250() {
   return (neuron0x26a5cd0()*-0.0112945);
}

double NNfunction_sb_dLuR::synapse0x26b8290() {
   return (neuron0x26a6010()*-0.0339261);
}

double NNfunction_sb_dLuR::synapse0x26b82d0() {
   return (neuron0x26a6350()*0.0142244);
}

double NNfunction_sb_dLuR::synapse0x26b8310() {
   return (neuron0x26a6690()*-0.0951851);
}

double NNfunction_sb_dLuR::synapse0x26b8350() {
   return (neuron0x26a69d0()*-0.0374937);
}

double NNfunction_sb_dLuR::synapse0x26b8390() {
   return (neuron0x26a6d10()*0.025976);
}

double NNfunction_sb_dLuR::synapse0x26b83d0() {
   return (neuron0x26a7050()*1.11535);
}

double NNfunction_sb_dLuR::synapse0x26b8410() {
   return (neuron0x26a7390()*-0.0248736);
}

double NNfunction_sb_dLuR::synapse0x26b7ea0() {
   return (neuron0x26a76d0()*0.0329359);
}

double NNfunction_sb_dLuR::synapse0x26b7ee0() {
   return (neuron0x26a7c30()*-0.0176925);
}

double NNfunction_sb_dLuR::synapse0x26b8560() {
   return (neuron0x26a7e50()*-0.005412);
}

double NNfunction_sb_dLuR::synapse0x26b85a0() {
   return (neuron0x26a8190()*-0.00199982);
}

double NNfunction_sb_dLuR::synapse0x26b85e0() {
   return (neuron0x26a84d0()*-0.00561071);
}

double NNfunction_sb_dLuR::synapse0x26b8620() {
   return (neuron0x26a8810()*0.0235933);
}

double NNfunction_sb_dLuR::synapse0x26b8660() {
   return (neuron0x26a8b50()*-0.0138008);
}

double NNfunction_sb_dLuR::synapse0x26b86a0() {
   return (neuron0x26a8e90()*-0.0306078);
}

double NNfunction_sb_dLuR::synapse0x26b8a20() {
   return (neuron0x26a4360()*-0.440683);
}

double NNfunction_sb_dLuR::synapse0x26b8a60() {
   return (neuron0x26a4610()*0.0385537);
}

double NNfunction_sb_dLuR::synapse0x26b8aa0() {
   return (neuron0x26a4950()*0.274696);
}

double NNfunction_sb_dLuR::synapse0x26b8ae0() {
   return (neuron0x26a4c90()*-0.449406);
}

double NNfunction_sb_dLuR::synapse0x26b8b20() {
   return (neuron0x26a4fd0()*-0.0142064);
}

double NNfunction_sb_dLuR::synapse0x26b8b60() {
   return (neuron0x26a5310()*0.4045);
}

double NNfunction_sb_dLuR::synapse0x26b8ba0() {
   return (neuron0x26a5650()*0.436497);
}

double NNfunction_sb_dLuR::synapse0x26b8be0() {
   return (neuron0x26a5990()*-0.259303);
}

double NNfunction_sb_dLuR::synapse0x26b8c20() {
   return (neuron0x26a5cd0()*-0.525988);
}

double NNfunction_sb_dLuR::synapse0x26b8c60() {
   return (neuron0x26a6010()*-0.255637);
}

double NNfunction_sb_dLuR::synapse0x26b8ca0() {
   return (neuron0x26a6350()*0.180547);
}

double NNfunction_sb_dLuR::synapse0x26b8ce0() {
   return (neuron0x26a6690()*-0.0830196);
}

double NNfunction_sb_dLuR::synapse0x26b8d20() {
   return (neuron0x26a69d0()*0.593316);
}

double NNfunction_sb_dLuR::synapse0x26b8d60() {
   return (neuron0x26a6d10()*0.0704187);
}

double NNfunction_sb_dLuR::synapse0x26b8da0() {
   return (neuron0x26a7050()*0.275466);
}

double NNfunction_sb_dLuR::synapse0x26b8de0() {
   return (neuron0x26a7390()*0.260316);
}

double NNfunction_sb_dLuR::synapse0x26b8870() {
   return (neuron0x26a76d0()*-0.390956);
}

double NNfunction_sb_dLuR::synapse0x26b88b0() {
   return (neuron0x26a7c30()*0.275513);
}

double NNfunction_sb_dLuR::synapse0x26b8f30() {
   return (neuron0x26a7e50()*0.286994);
}

double NNfunction_sb_dLuR::synapse0x26b8f70() {
   return (neuron0x26a8190()*0.181365);
}

double NNfunction_sb_dLuR::synapse0x26b8fb0() {
   return (neuron0x26a84d0()*-0.200779);
}

double NNfunction_sb_dLuR::synapse0x26b8ff0() {
   return (neuron0x26a8810()*-0.325213);
}

double NNfunction_sb_dLuR::synapse0x26b9030() {
   return (neuron0x26a8b50()*0.278603);
}

double NNfunction_sb_dLuR::synapse0x26b9070() {
   return (neuron0x26a8e90()*0.710382);
}

double NNfunction_sb_dLuR::synapse0x26b93f0() {
   return (neuron0x26a4360()*0.0398598);
}

double NNfunction_sb_dLuR::synapse0x26b9430() {
   return (neuron0x26a4610()*-0.0103973);
}

double NNfunction_sb_dLuR::synapse0x26b9470() {
   return (neuron0x26a4950()*0.0631817);
}

double NNfunction_sb_dLuR::synapse0x26b94b0() {
   return (neuron0x26a4c90()*0.375889);
}

double NNfunction_sb_dLuR::synapse0x26b94f0() {
   return (neuron0x26a4fd0()*-0.00772764);
}

double NNfunction_sb_dLuR::synapse0x26b9530() {
   return (neuron0x26a5310()*-0.0320043);
}

double NNfunction_sb_dLuR::synapse0x26b9570() {
   return (neuron0x26a5650()*0.0163168);
}

double NNfunction_sb_dLuR::synapse0x26b95b0() {
   return (neuron0x26a5990()*0.0543018);
}

double NNfunction_sb_dLuR::synapse0x26b95f0() {
   return (neuron0x26a5cd0()*0.0190259);
}

double NNfunction_sb_dLuR::synapse0x26b9630() {
   return (neuron0x26a6010()*-0.0110931);
}

double NNfunction_sb_dLuR::synapse0x26b9670() {
   return (neuron0x26a6350()*-0.0196857);
}

double NNfunction_sb_dLuR::synapse0x26b96b0() {
   return (neuron0x26a6690()*-0.485674);
}

double NNfunction_sb_dLuR::synapse0x26b96f0() {
   return (neuron0x26a69d0()*0.122314);
}

double NNfunction_sb_dLuR::synapse0x26b9730() {
   return (neuron0x26a6d10()*-0.0390734);
}

double NNfunction_sb_dLuR::synapse0x26b9770() {
   return (neuron0x26a7050()*-0.778391);
}

double NNfunction_sb_dLuR::synapse0x26b97b0() {
   return (neuron0x26a7390()*-0.0477331);
}

double NNfunction_sb_dLuR::synapse0x26b9240() {
   return (neuron0x26a76d0()*-0.0152265);
}

double NNfunction_sb_dLuR::synapse0x26b9280() {
   return (neuron0x26a7c30()*0.0510917);
}

double NNfunction_sb_dLuR::synapse0x26b9900() {
   return (neuron0x26a7e50()*0.0247685);
}

double NNfunction_sb_dLuR::synapse0x26b9940() {
   return (neuron0x26a8190()*0.0247917);
}

double NNfunction_sb_dLuR::synapse0x26b9980() {
   return (neuron0x26a84d0()*0.0275839);
}

double NNfunction_sb_dLuR::synapse0x26b99c0() {
   return (neuron0x26a8810()*-0.00207076);
}

double NNfunction_sb_dLuR::synapse0x26b9a00() {
   return (neuron0x26a8b50()*-0.0203779);
}

double NNfunction_sb_dLuR::synapse0x26b9a40() {
   return (neuron0x26a8e90()*-0.0120665);
}

double NNfunction_sb_dLuR::synapse0x26cb910() {
   return (neuron0x26a4360()*-0.157568);
}

double NNfunction_sb_dLuR::synapse0x26cb950() {
   return (neuron0x26a4610()*-0.178803);
}

double NNfunction_sb_dLuR::synapse0x26cb990() {
   return (neuron0x26a4950()*0.327509);
}

double NNfunction_sb_dLuR::synapse0x26cb9d0() {
   return (neuron0x26a4c90()*-0.616779);
}

double NNfunction_sb_dLuR::synapse0x26cba10() {
   return (neuron0x26a4fd0()*-0.0159949);
}

double NNfunction_sb_dLuR::synapse0x26cba50() {
   return (neuron0x26a5310()*-0.00778472);
}

double NNfunction_sb_dLuR::synapse0x26cba90() {
   return (neuron0x26a5650()*0.0442289);
}

double NNfunction_sb_dLuR::synapse0x26cbad0() {
   return (neuron0x26a5990()*-0.0600072);
}

double NNfunction_sb_dLuR::synapse0x26cbb10() {
   return (neuron0x26a5cd0()*0.073034);
}

double NNfunction_sb_dLuR::synapse0x26cbb50() {
   return (neuron0x26a6010()*-0.0492554);
}

double NNfunction_sb_dLuR::synapse0x26cbb90() {
   return (neuron0x26a6350()*0.0740976);
}

double NNfunction_sb_dLuR::synapse0x26cbbd0() {
   return (neuron0x26a6690()*0.0457705);
}

double NNfunction_sb_dLuR::synapse0x26cbc10() {
   return (neuron0x26a69d0()*0.0697874);
}

double NNfunction_sb_dLuR::synapse0x26cbc50() {
   return (neuron0x26a6d10()*0.00222082);
}

double NNfunction_sb_dLuR::synapse0x26cbc90() {
   return (neuron0x26a7050()*-0.102086);
}

double NNfunction_sb_dLuR::synapse0x26cbcd0() {
   return (neuron0x26a7390()*-0.0170377);
}

double NNfunction_sb_dLuR::synapse0x26b9a80() {
   return (neuron0x26a76d0()*0.0234699);
}

double NNfunction_sb_dLuR::synapse0x26b9ac0() {
   return (neuron0x26a7c30()*-0.102857);
}

double NNfunction_sb_dLuR::synapse0x26cbe20() {
   return (neuron0x26a7e50()*-0.00406861);
}

double NNfunction_sb_dLuR::synapse0x26cbe60() {
   return (neuron0x26a8190()*0.0966259);
}

double NNfunction_sb_dLuR::synapse0x26cbea0() {
   return (neuron0x26a84d0()*-0.0385933);
}

double NNfunction_sb_dLuR::synapse0x26cbee0() {
   return (neuron0x26a8810()*0.0755667);
}

double NNfunction_sb_dLuR::synapse0x26cbf20() {
   return (neuron0x26a8b50()*-0.039761);
}

double NNfunction_sb_dLuR::synapse0x26cbf60() {
   return (neuron0x26a8e90()*-0.0401785);
}

double NNfunction_sb_dLuR::synapse0x26cc2e0() {
   return (neuron0x26a4360()*-0.0115719);
}

double NNfunction_sb_dLuR::synapse0x26cc320() {
   return (neuron0x26a4610()*-0.0372034);
}

double NNfunction_sb_dLuR::synapse0x26cc360() {
   return (neuron0x26a4950()*-0.0912532);
}

double NNfunction_sb_dLuR::synapse0x26cc3a0() {
   return (neuron0x26a4c90()*0.403857);
}

double NNfunction_sb_dLuR::synapse0x26cc3e0() {
   return (neuron0x26a4fd0()*-0.0594247);
}

double NNfunction_sb_dLuR::synapse0x26cc420() {
   return (neuron0x26a5310()*-0.0229083);
}

double NNfunction_sb_dLuR::synapse0x26cc460() {
   return (neuron0x26a5650()*0.00764931);
}

double NNfunction_sb_dLuR::synapse0x26cc4a0() {
   return (neuron0x26a5990()*0.0507563);
}

double NNfunction_sb_dLuR::synapse0x26cc4e0() {
   return (neuron0x26a5cd0()*-0.0326936);
}

double NNfunction_sb_dLuR::synapse0x26cc520() {
   return (neuron0x26a6010()*0.0180925);
}

double NNfunction_sb_dLuR::synapse0x26cc560() {
   return (neuron0x26a6350()*-0.0399032);
}

double NNfunction_sb_dLuR::synapse0x26cc5a0() {
   return (neuron0x26a6690()*-0.661356);
}

double NNfunction_sb_dLuR::synapse0x26cc5e0() {
   return (neuron0x26a69d0()*-0.0205932);
}

double NNfunction_sb_dLuR::synapse0x26cc620() {
   return (neuron0x26a6d10()*0.00435675);
}

double NNfunction_sb_dLuR::synapse0x26cc660() {
   return (neuron0x26a7050()*2.06634);
}

double NNfunction_sb_dLuR::synapse0x26cc6a0() {
   return (neuron0x26a7390()*-0.0837408);
}

double NNfunction_sb_dLuR::synapse0x26cc130() {
   return (neuron0x26a76d0()*0.0474866);
}

double NNfunction_sb_dLuR::synapse0x26cc170() {
   return (neuron0x26a7c30()*-0.041635);
}

double NNfunction_sb_dLuR::synapse0x26cc7f0() {
   return (neuron0x26a7e50()*-0.0363334);
}

double NNfunction_sb_dLuR::synapse0x26cc830() {
   return (neuron0x26a8190()*0.0476537);
}

double NNfunction_sb_dLuR::synapse0x26cc870() {
   return (neuron0x26a84d0()*-0.0294962);
}

double NNfunction_sb_dLuR::synapse0x26cc8b0() {
   return (neuron0x26a8810()*-0.0230432);
}

double NNfunction_sb_dLuR::synapse0x26cc8f0() {
   return (neuron0x26a8b50()*0.0162158);
}

double NNfunction_sb_dLuR::synapse0x26cc930() {
   return (neuron0x26a8e90()*0.013626);
}

double NNfunction_sb_dLuR::synapse0x26cccb0() {
   return (neuron0x26a4360()*0.327926);
}

double NNfunction_sb_dLuR::synapse0x26cccf0() {
   return (neuron0x26a4610()*-0.171264);
}

double NNfunction_sb_dLuR::synapse0x26ccd30() {
   return (neuron0x26a4950()*0.319273);
}

double NNfunction_sb_dLuR::synapse0x26ccd70() {
   return (neuron0x26a4c90()*-0.712561);
}

double NNfunction_sb_dLuR::synapse0x26ccdb0() {
   return (neuron0x26a4fd0()*0.020811);
}

double NNfunction_sb_dLuR::synapse0x26ccdf0() {
   return (neuron0x26a5310()*-0.155238);
}

double NNfunction_sb_dLuR::synapse0x26cce30() {
   return (neuron0x26a5650()*0.0105252);
}

double NNfunction_sb_dLuR::synapse0x26cce70() {
   return (neuron0x26a5990()*-0.00968565);
}

double NNfunction_sb_dLuR::synapse0x26cceb0() {
   return (neuron0x26a5cd0()*0.246655);
}

double NNfunction_sb_dLuR::synapse0x26ccef0() {
   return (neuron0x26a6010()*0.0311046);
}

double NNfunction_sb_dLuR::synapse0x26ccf30() {
   return (neuron0x26a6350()*0.133007);
}

double NNfunction_sb_dLuR::synapse0x26ccf70() {
   return (neuron0x26a6690()*0.426289);
}

double NNfunction_sb_dLuR::synapse0x26ccfb0() {
   return (neuron0x26a69d0()*-0.27002);
}

double NNfunction_sb_dLuR::synapse0x26ccff0() {
   return (neuron0x26a6d10()*0.0594354);
}

double NNfunction_sb_dLuR::synapse0x26cd030() {
   return (neuron0x26a7050()*0.550711);
}

double NNfunction_sb_dLuR::synapse0x26cd070() {
   return (neuron0x26a7390()*0.249398);
}

double NNfunction_sb_dLuR::synapse0x26ccb00() {
   return (neuron0x26a76d0()*-0.0550801);
}

double NNfunction_sb_dLuR::synapse0x26ccb40() {
   return (neuron0x26a7c30()*0.251147);
}

double NNfunction_sb_dLuR::synapse0x26cd1c0() {
   return (neuron0x26a7e50()*0.0547483);
}

double NNfunction_sb_dLuR::synapse0x26cd200() {
   return (neuron0x26a8190()*-0.483347);
}

double NNfunction_sb_dLuR::synapse0x26cd240() {
   return (neuron0x26a84d0()*0.0403593);
}

double NNfunction_sb_dLuR::synapse0x26cd280() {
   return (neuron0x26a8810()*0.0287373);
}

double NNfunction_sb_dLuR::synapse0x26cd2c0() {
   return (neuron0x26a8b50()*0.130951);
}

double NNfunction_sb_dLuR::synapse0x26cd300() {
   return (neuron0x26a8e90()*0.0991245);
}

double NNfunction_sb_dLuR::synapse0x26cd680() {
   return (neuron0x26a4360()*-0.0376929);
}

double NNfunction_sb_dLuR::synapse0x26cd6c0() {
   return (neuron0x26a4610()*-0.00791952);
}

double NNfunction_sb_dLuR::synapse0x26cd700() {
   return (neuron0x26a4950()*-0.0349375);
}

double NNfunction_sb_dLuR::synapse0x26cd740() {
   return (neuron0x26a4c90()*0.0454911);
}

double NNfunction_sb_dLuR::synapse0x26cd780() {
   return (neuron0x26a4fd0()*-0.0434715);
}

double NNfunction_sb_dLuR::synapse0x26cd7c0() {
   return (neuron0x26a5310()*-0.00592959);
}

double NNfunction_sb_dLuR::synapse0x26cd800() {
   return (neuron0x26a5650()*0.0231347);
}

double NNfunction_sb_dLuR::synapse0x26cd840() {
   return (neuron0x26a5990()*0.00581795);
}

double NNfunction_sb_dLuR::synapse0x26cd880() {
   return (neuron0x26a5cd0()*-0.0308658);
}

double NNfunction_sb_dLuR::synapse0x26cd8c0() {
   return (neuron0x26a6010()*-0.00761311);
}

double NNfunction_sb_dLuR::synapse0x26cd900() {
   return (neuron0x26a6350()*0.0204982);
}

double NNfunction_sb_dLuR::synapse0x26cd940() {
   return (neuron0x26a6690()*1.8814);
}

double NNfunction_sb_dLuR::synapse0x26cd980() {
   return (neuron0x26a69d0()*0.00853254);
}

double NNfunction_sb_dLuR::synapse0x26cd9c0() {
   return (neuron0x26a6d10()*0.0179469);
}

double NNfunction_sb_dLuR::synapse0x26cda00() {
   return (neuron0x26a7050()*-0.295471);
}

double NNfunction_sb_dLuR::synapse0x26cda40() {
   return (neuron0x26a7390()*0.0227817);
}

double NNfunction_sb_dLuR::synapse0x26cd4d0() {
   return (neuron0x26a76d0()*0.0045772);
}

double NNfunction_sb_dLuR::synapse0x26cd510() {
   return (neuron0x26a7c30()*0.00721351);
}

double NNfunction_sb_dLuR::synapse0x26cdb90() {
   return (neuron0x26a7e50()*-0.0107366);
}

double NNfunction_sb_dLuR::synapse0x26cdbd0() {
   return (neuron0x26a8190()*0.012433);
}

double NNfunction_sb_dLuR::synapse0x26cdc10() {
   return (neuron0x26a84d0()*0.00550961);
}

double NNfunction_sb_dLuR::synapse0x26cdc50() {
   return (neuron0x26a8810()*-0.00434777);
}

double NNfunction_sb_dLuR::synapse0x26cdc90() {
   return (neuron0x26a8b50()*-0.0148675);
}

double NNfunction_sb_dLuR::synapse0x26cdcd0() {
   return (neuron0x26a8e90()*-0.00190758);
}

double NNfunction_sb_dLuR::synapse0x26aa260() {
   return (neuron0x26a9300()*0.967677);
}

double NNfunction_sb_dLuR::synapse0x26aa2a0() {
   return (neuron0x26a9c50()*0.78554);
}

double NNfunction_sb_dLuR::synapse0x26ab780() {
   return (neuron0x26aa730()*0.4754);
}

double NNfunction_sb_dLuR::synapse0x26ab7c0() {
   return (neuron0x246da80()*-0.609361);
}

double NNfunction_sb_dLuR::synapse0x26ac150() {
   return (neuron0x26ab4d0()*-0.736778);
}

double NNfunction_sb_dLuR::synapse0x26ac190() {
   return (neuron0x26abea0()*-0.474759);
}

double NNfunction_sb_dLuR::synapse0x26acf20() {
   return (neuron0x26acc70()*-1.13691);
}

double NNfunction_sb_dLuR::synapse0x26acf60() {
   return (neuron0x26ad640()*1.48112);
}

double NNfunction_sb_dLuR::synapse0x26ad8f0() {
   return (neuron0x26ae010()*-0.767415);
}

double NNfunction_sb_dLuR::synapse0x26ad930() {
   return (neuron0x26aeaf0()*3.08455);
}

double NNfunction_sb_dLuR::synapse0x26ae2c0() {
   return (neuron0x26af4c0()*-0.154472);
}

double NNfunction_sb_dLuR::synapse0x26ae300() {
   return (neuron0x26ac5a0()*0.513248);
}

double NNfunction_sb_dLuR::synapse0x26aeda0() {
   return (neuron0x26b1070()*-0.98776);
}

double NNfunction_sb_dLuR::synapse0x26aede0() {
   return (neuron0x26b1a40()*0.317671);
}

double NNfunction_sb_dLuR::synapse0x26af770() {
   return (neuron0x26b2410()*5.11966);
}

double NNfunction_sb_dLuR::synapse0x26af7b0() {
   return (neuron0x26b2de0()*-0.0482362);
}

double NNfunction_sb_dLuR::synapse0x26ac850() {
   return (neuron0x26b4bf0()*-0.627188);
}

double NNfunction_sb_dLuR::synapse0x26ac890() {
   return (neuron0x26b4ed0()*-4.99103);
}

double NNfunction_sb_dLuR::synapse0x26b1320() {
   return (neuron0x26b58a0()*0.828236);
}

double NNfunction_sb_dLuR::synapse0x26b1360() {
   return (neuron0x26b6270()*0.437797);
}

double NNfunction_sb_dLuR::synapse0x26b1cf0() {
   return (neuron0x26b6c40()*-0.556579);
}

double NNfunction_sb_dLuR::synapse0x26b1d30() {
   return (neuron0x26b7610()*-1.36143);
}

double NNfunction_sb_dLuR::synapse0x26b26c0() {
   return (neuron0x26b0160()*-0.791777);
}

double NNfunction_sb_dLuR::synapse0x26b2700() {
   return (neuron0x26b0b30()*-1.83409);
}

double NNfunction_sb_dLuR::synapse0x26b3090() {
   return (neuron0x26ba3a0()*1.96659);
}

double NNfunction_sb_dLuR::synapse0x26b30d0() {
   return (neuron0x26bad70()*-0.859682);
}

double NNfunction_sb_dLuR::synapse0x26a7270() {
   return (neuron0x26bb740()*-0.31527);
}

double NNfunction_sb_dLuR::synapse0x26a72b0() {
   return (neuron0x26bc110()*-0.339315);
}

double NNfunction_sb_dLuR::synapse0x26b5180() {
   return (neuron0x26bcae0()*0.624304);
}

double NNfunction_sb_dLuR::synapse0x26b51c0() {
   return (neuron0x26bd4b0()*1.5152);
}

double NNfunction_sb_dLuR::synapse0x26b5b50() {
   return (neuron0x26bde80()*-0.833613);
}

double NNfunction_sb_dLuR::synapse0x26b5b90() {
   return (neuron0x26be850()*0.190646);
}

double NNfunction_sb_dLuR::synapse0x26b6520() {
   return (neuron0x26b48e0()*0.616881);
}

double NNfunction_sb_dLuR::synapse0x26b6560() {
   return (neuron0x26c1430()*-0.80068);
}

double NNfunction_sb_dLuR::synapse0x26b6ef0() {
   return (neuron0x26c1e00()*-0.749757);
}

double NNfunction_sb_dLuR::synapse0x26b6f30() {
   return (neuron0x26c27d0()*1.27231);
}

double NNfunction_sb_dLuR::synapse0x26b78c0() {
   return (neuron0x26c31a0()*0.00853099);
}

double NNfunction_sb_dLuR::synapse0x26b7900() {
   return (neuron0x26c3b70()*0.55511);
}

double NNfunction_sb_dLuR::synapse0x26b0410() {
   return (neuron0x26c4540()*0.47266);
}

double NNfunction_sb_dLuR::synapse0x26b0450() {
   return (neuron0x26c4f10()*0.699703);
}

double NNfunction_sb_dLuR::synapse0x26b9cc0() {
   return (neuron0x26c58e0()*1.45226);
}

double NNfunction_sb_dLuR::synapse0x26b9d00() {
   return (neuron0x26c64c0()*0.999819);
}

double NNfunction_sb_dLuR::synapse0x26ba650() {
   return (neuron0x26c6e90()*-1.07451);
}

double NNfunction_sb_dLuR::synapse0x26ba690() {
   return (neuron0x26b7d10()*0.0757648);
}

double NNfunction_sb_dLuR::synapse0x26bb020() {
   return (neuron0x26b86e0()*-0.686119);
}

double NNfunction_sb_dLuR::synapse0x26bb060() {
   return (neuron0x26b90b0()*-1.08758);
}

double NNfunction_sb_dLuR::synapse0x26bb9f0() {
   return (neuron0x26cb6f0()*0.904391);
}

double NNfunction_sb_dLuR::synapse0x26bba30() {
   return (neuron0x26cbfa0()*2.06953);
}

double NNfunction_sb_dLuR::synapse0x26bc3c0() {
   return (neuron0x26cc970()*-1.2834);
}

double NNfunction_sb_dLuR::synapse0x26bc400() {
   return (neuron0x26cd340()*2.13827);
}

double NNfunction_sb_dLuR::synapse0x26beb00() {
   return (neuron0x26a9300()*0.00886323);
}

double NNfunction_sb_dLuR::synapse0x26beb40() {
   return (neuron0x26a9c50()*0.53648);
}

double NNfunction_sb_dLuR::synapse0x26b40c0() {
   return (neuron0x26aa730()*0.042025);
}

double NNfunction_sb_dLuR::synapse0x26b4100() {
   return (neuron0x246da80()*-0.0128033);
}

double NNfunction_sb_dLuR::synapse0x26c16e0() {
   return (neuron0x26ab4d0()*0.0777139);
}

double NNfunction_sb_dLuR::synapse0x26c1720() {
   return (neuron0x26abea0()*-0.0270407);
}

double NNfunction_sb_dLuR::synapse0x26c20b0() {
   return (neuron0x26acc70()*2.41889);
}

double NNfunction_sb_dLuR::synapse0x26c20f0() {
   return (neuron0x26ad640()*0.0557485);
}

double NNfunction_sb_dLuR::synapse0x26c2a80() {
   return (neuron0x26ae010()*-0.170709);
}

double NNfunction_sb_dLuR::synapse0x26c2ac0() {
   return (neuron0x26aeaf0()*-4.78127);
}

double NNfunction_sb_dLuR::synapse0x26c3450() {
   return (neuron0x26af4c0()*-0.0912076);
}

double NNfunction_sb_dLuR::synapse0x26c3490() {
   return (neuron0x26ac5a0()*-1.65561);
}

double NNfunction_sb_dLuR::synapse0x26c3e20() {
   return (neuron0x26b1070()*-0.00731183);
}

double NNfunction_sb_dLuR::synapse0x26c3e60() {
   return (neuron0x26b1a40()*-0.0298352);
}

double NNfunction_sb_dLuR::synapse0x26c47f0() {
   return (neuron0x26b2410()*0.390418);
}

double NNfunction_sb_dLuR::synapse0x26c4830() {
   return (neuron0x26b2de0()*0.0193993);
}

double NNfunction_sb_dLuR::synapse0x26c51c0() {
   return (neuron0x26b4bf0()*-0.114992);
}

double NNfunction_sb_dLuR::synapse0x26c5200() {
   return (neuron0x26b4ed0()*1.32845);
}

double NNfunction_sb_dLuR::synapse0x26c5b90() {
   return (neuron0x26b58a0()*0.040386);
}

double NNfunction_sb_dLuR::synapse0x26c5bd0() {
   return (neuron0x26b6270()*-1.00375);
}

double NNfunction_sb_dLuR::synapse0x26c6770() {
   return (neuron0x26b6c40()*0.0134189);
}

double NNfunction_sb_dLuR::synapse0x26c67b0() {
   return (neuron0x26b7610()*0.0519251);
}

double NNfunction_sb_dLuR::synapse0x26c7140() {
   return (neuron0x26b0160()*2.5468);
}

double NNfunction_sb_dLuR::synapse0x26c7180() {
   return (neuron0x26b0b30()*0.451798);
}

double NNfunction_sb_dLuR::synapse0x26b7fc0() {
   return (neuron0x26ba3a0()*0.1554);
}

double NNfunction_sb_dLuR::synapse0x26b8000() {
   return (neuron0x26bad70()*-0.0302884);
}

double NNfunction_sb_dLuR::synapse0x26b8990() {
   return (neuron0x26bb740()*2.05203);
}

double NNfunction_sb_dLuR::synapse0x26b89d0() {
   return (neuron0x26bc110()*-0.271631);
}

double NNfunction_sb_dLuR::synapse0x26b9360() {
   return (neuron0x26bcae0()*-1.62014);
}

double NNfunction_sb_dLuR::synapse0x26b93a0() {
   return (neuron0x26bd4b0()*0.120648);
}

double NNfunction_sb_dLuR::synapse0x26cb880() {
   return (neuron0x26bde80()*-0.0656959);
}

double NNfunction_sb_dLuR::synapse0x26cb8c0() {
   return (neuron0x26be850()*-0.0855237);
}

double NNfunction_sb_dLuR::synapse0x26cc250() {
   return (neuron0x26b48e0()*0.197724);
}

double NNfunction_sb_dLuR::synapse0x26cc290() {
   return (neuron0x26c1430()*-0.0720213);
}

double NNfunction_sb_dLuR::synapse0x26ccc20() {
   return (neuron0x26c1e00()*-0.00892663);
}

double NNfunction_sb_dLuR::synapse0x26ccc60() {
   return (neuron0x26c27d0()*0.119685);
}

double NNfunction_sb_dLuR::synapse0x26cd5f0() {
   return (neuron0x26c31a0()*-1.05847);
}

double NNfunction_sb_dLuR::synapse0x26cd630() {
   return (neuron0x26c3b70()*-3.68251);
}

double NNfunction_sb_dLuR::synapse0x26a9520() {
   return (neuron0x26c4540()*0.00438474);
}

double NNfunction_sb_dLuR::synapse0x26a9560() {
   return (neuron0x26c4f10()*0.893653);
}

double NNfunction_sb_dLuR::synapse0x26bcd90() {
   return (neuron0x26c58e0()*-0.0836681);
}

double NNfunction_sb_dLuR::synapse0x26bcdd0() {
   return (neuron0x26c64c0()*0.0969193);
}

double NNfunction_sb_dLuR::synapse0x26cdd10() {
   return (neuron0x26c6e90()*0.241468);
}

double NNfunction_sb_dLuR::synapse0x26cdd50() {
   return (neuron0x26b7d10()*-0.647164);
}

double NNfunction_sb_dLuR::synapse0x26cdd90() {
   return (neuron0x26b86e0()*-0.0047292);
}

double NNfunction_sb_dLuR::synapse0x26cddd0() {
   return (neuron0x26b90b0()*0.364239);
}

double NNfunction_sb_dLuR::synapse0x26d4c80() {
   return (neuron0x26cb6f0()*-0.510248);
}

double NNfunction_sb_dLuR::synapse0x26d4cc0() {
   return (neuron0x26cbfa0()*-0.190606);
}

double NNfunction_sb_dLuR::synapse0x26d4d00() {
   return (neuron0x26cc970()*-0.0748531);
}

double NNfunction_sb_dLuR::synapse0x26d4d40() {
   return (neuron0x26cd340()*-0.666716);
}

double NNfunction_sb_dLuR::synapse0x26d50c0() {
   return (neuron0x26a9300()*0.648667);
}

double NNfunction_sb_dLuR::synapse0x26d5100() {
   return (neuron0x26a9c50()*-0.487334);
}

double NNfunction_sb_dLuR::synapse0x26d5140() {
   return (neuron0x26aa730()*-0.0155694);
}

double NNfunction_sb_dLuR::synapse0x26d5180() {
   return (neuron0x246da80()*0.596073);
}

double NNfunction_sb_dLuR::synapse0x26d51c0() {
   return (neuron0x26ab4d0()*0.310171);
}

double NNfunction_sb_dLuR::synapse0x26d5200() {
   return (neuron0x26abea0()*0.150664);
}

double NNfunction_sb_dLuR::synapse0x26d5240() {
   return (neuron0x26acc70()*0.107007);
}

double NNfunction_sb_dLuR::synapse0x26d5280() {
   return (neuron0x26ad640()*-0.00314192);
}

double NNfunction_sb_dLuR::synapse0x26d52c0() {
   return (neuron0x26ae010()*0.428325);
}

double NNfunction_sb_dLuR::synapse0x26d5300() {
   return (neuron0x26aeaf0()*0.672491);
}

double NNfunction_sb_dLuR::synapse0x26d5340() {
   return (neuron0x26af4c0()*0.182421);
}

double NNfunction_sb_dLuR::synapse0x26d5380() {
   return (neuron0x26ac5a0()*0.571519);
}

double NNfunction_sb_dLuR::synapse0x26d53c0() {
   return (neuron0x26b1070()*-0.14758);
}

double NNfunction_sb_dLuR::synapse0x26d5400() {
   return (neuron0x26b1a40()*0.255008);
}

double NNfunction_sb_dLuR::synapse0x26d5440() {
   return (neuron0x26b2410()*0.289669);
}

double NNfunction_sb_dLuR::synapse0x26d5480() {
   return (neuron0x26b2de0()*0.721201);
}

double NNfunction_sb_dLuR::synapse0x26d4f10() {
   return (neuron0x26b4bf0()*0.524605);
}

double NNfunction_sb_dLuR::synapse0x26d4f50() {
   return (neuron0x26b4ed0()*-0.244889);
}

double NNfunction_sb_dLuR::synapse0x26d55d0() {
   return (neuron0x26b58a0()*0.249192);
}

double NNfunction_sb_dLuR::synapse0x26d5610() {
   return (neuron0x26b6270()*0.557079);
}

double NNfunction_sb_dLuR::synapse0x26d5650() {
   return (neuron0x26b6c40()*0.370514);
}

double NNfunction_sb_dLuR::synapse0x26d5690() {
   return (neuron0x26b7610()*-0.241262);
}

double NNfunction_sb_dLuR::synapse0x26d56d0() {
   return (neuron0x26b0160()*0.0476976);
}

double NNfunction_sb_dLuR::synapse0x26d5710() {
   return (neuron0x26b0b30()*0.401098);
}

double NNfunction_sb_dLuR::synapse0x26d5750() {
   return (neuron0x26ba3a0()*0.733464);
}

double NNfunction_sb_dLuR::synapse0x26d5790() {
   return (neuron0x26bad70()*0.149105);
}

double NNfunction_sb_dLuR::synapse0x26d57d0() {
   return (neuron0x26bb740()*0.304137);
}

double NNfunction_sb_dLuR::synapse0x26d5810() {
   return (neuron0x26bc110()*1.00223);
}

double NNfunction_sb_dLuR::synapse0x26d5850() {
   return (neuron0x26bcae0()*0.301718);
}

double NNfunction_sb_dLuR::synapse0x26d5890() {
   return (neuron0x26bd4b0()*0.300355);
}

double NNfunction_sb_dLuR::synapse0x26d58d0() {
   return (neuron0x26bde80()*0.425936);
}

double NNfunction_sb_dLuR::synapse0x26d5910() {
   return (neuron0x26be850()*0.610202);
}

double NNfunction_sb_dLuR::synapse0x26d54c0() {
   return (neuron0x26b48e0()*0.300338);
}

double NNfunction_sb_dLuR::synapse0x26d5500() {
   return (neuron0x26c1430()*1.0853);
}

double NNfunction_sb_dLuR::synapse0x26d5540() {
   return (neuron0x26c1e00()*0.549172);
}

double NNfunction_sb_dLuR::synapse0x26d5580() {
   return (neuron0x26c27d0()*0.849057);
}

double NNfunction_sb_dLuR::synapse0x26d5b60() {
   return (neuron0x26c31a0()*-0.0453902);
}

double NNfunction_sb_dLuR::synapse0x26d5ba0() {
   return (neuron0x26c3b70()*0.500368);
}

double NNfunction_sb_dLuR::synapse0x26d5be0() {
   return (neuron0x26c4540()*0.414946);
}

double NNfunction_sb_dLuR::synapse0x26d5c20() {
   return (neuron0x26c4f10()*0.61325);
}

double NNfunction_sb_dLuR::synapse0x26d5c60() {
   return (neuron0x26c58e0()*0.0347309);
}

double NNfunction_sb_dLuR::synapse0x26d5ca0() {
   return (neuron0x26c64c0()*0.274489);
}

double NNfunction_sb_dLuR::synapse0x26d5ce0() {
   return (neuron0x26c6e90()*0.693702);
}

double NNfunction_sb_dLuR::synapse0x26d5d20() {
   return (neuron0x26b7d10()*0.0756148);
}

double NNfunction_sb_dLuR::synapse0x26d5d60() {
   return (neuron0x26b86e0()*0.0790391);
}

double NNfunction_sb_dLuR::synapse0x26d5da0() {
   return (neuron0x26b90b0()*0.13097);
}

double NNfunction_sb_dLuR::synapse0x26d5de0() {
   return (neuron0x26cb6f0()*0.356155);
}

double NNfunction_sb_dLuR::synapse0x26d5e20() {
   return (neuron0x26cbfa0()*1.16073);
}

double NNfunction_sb_dLuR::synapse0x26d5e60() {
   return (neuron0x26cc970()*0.483223);
}

double NNfunction_sb_dLuR::synapse0x26d5ea0() {
   return (neuron0x26cd340()*0.99737);
}

double NNfunction_sb_dLuR::synapse0x26d6220() {
   return (neuron0x26a9300()*0.24093);
}

double NNfunction_sb_dLuR::synapse0x26d6260() {
   return (neuron0x26a9c50()*0.171361);
}

double NNfunction_sb_dLuR::synapse0x26d62a0() {
   return (neuron0x26aa730()*-0.321797);
}

double NNfunction_sb_dLuR::synapse0x26d62e0() {
   return (neuron0x246da80()*-0.383294);
}

double NNfunction_sb_dLuR::synapse0x26d6320() {
   return (neuron0x26ab4d0()*-0.604432);
}

double NNfunction_sb_dLuR::synapse0x26d6360() {
   return (neuron0x26abea0()*0.228311);
}

double NNfunction_sb_dLuR::synapse0x26d63a0() {
   return (neuron0x26acc70()*-0.633433);
}

double NNfunction_sb_dLuR::synapse0x26d63e0() {
   return (neuron0x26ad640()*0.209055);
}

double NNfunction_sb_dLuR::synapse0x26d6420() {
   return (neuron0x26ae010()*0.210466);
}

double NNfunction_sb_dLuR::synapse0x26d6460() {
   return (neuron0x26aeaf0()*-0.431917);
}

double NNfunction_sb_dLuR::synapse0x26d64a0() {
   return (neuron0x26af4c0()*0.0120108);
}

double NNfunction_sb_dLuR::synapse0x26d64e0() {
   return (neuron0x26ac5a0()*0.537014);
}

double NNfunction_sb_dLuR::synapse0x26d6520() {
   return (neuron0x26b1070()*-0.227607);
}

double NNfunction_sb_dLuR::synapse0x26d6560() {
   return (neuron0x26b1a40()*0.138693);
}

double NNfunction_sb_dLuR::synapse0x26d65a0() {
   return (neuron0x26b2410()*-0.454391);
}

double NNfunction_sb_dLuR::synapse0x26d65e0() {
   return (neuron0x26b2de0()*0.341903);
}

double NNfunction_sb_dLuR::synapse0x26d6070() {
   return (neuron0x26b4bf0()*0.237458);
}

double NNfunction_sb_dLuR::synapse0x26d60b0() {
   return (neuron0x26b4ed0()*-0.117309);
}

double NNfunction_sb_dLuR::synapse0x26d6730() {
   return (neuron0x26b58a0()*-0.267645);
}

double NNfunction_sb_dLuR::synapse0x26d6770() {
   return (neuron0x26b6270()*-0.0565453);
}

double NNfunction_sb_dLuR::synapse0x26d67b0() {
   return (neuron0x26b6c40()*-0.12562);
}

double NNfunction_sb_dLuR::synapse0x26d67f0() {
   return (neuron0x26b7610()*-0.56823);
}

double NNfunction_sb_dLuR::synapse0x26d6830() {
   return (neuron0x26b0160()*-0.21755);
}

double NNfunction_sb_dLuR::synapse0x26d6870() {
   return (neuron0x26b0b30()*-0.0238434);
}

double NNfunction_sb_dLuR::synapse0x26d68b0() {
   return (neuron0x26ba3a0()*-0.130118);
}

double NNfunction_sb_dLuR::synapse0x26d68f0() {
   return (neuron0x26bad70()*-0.562942);
}

double NNfunction_sb_dLuR::synapse0x26d6930() {
   return (neuron0x26bb740()*-0.97043);
}

double NNfunction_sb_dLuR::synapse0x26d6970() {
   return (neuron0x26bc110()*0.557708);
}

double NNfunction_sb_dLuR::synapse0x26d69b0() {
   return (neuron0x26bcae0()*0.42197);
}

double NNfunction_sb_dLuR::synapse0x26d69f0() {
   return (neuron0x26bd4b0()*-0.22809);
}

double NNfunction_sb_dLuR::synapse0x26d6a30() {
   return (neuron0x26bde80()*0.271481);
}

double NNfunction_sb_dLuR::synapse0x26d6a70() {
   return (neuron0x26be850()*0.232836);
}

double NNfunction_sb_dLuR::synapse0x26d6620() {
   return (neuron0x26b48e0()*0.515969);
}

double NNfunction_sb_dLuR::synapse0x26d6660() {
   return (neuron0x26c1430()*0.477154);
}

double NNfunction_sb_dLuR::synapse0x26d66a0() {
   return (neuron0x26c1e00()*-0.303341);
}

double NNfunction_sb_dLuR::synapse0x26d66e0() {
   return (neuron0x26c27d0()*-0.0586566);
}

double NNfunction_sb_dLuR::synapse0x26d6cc0() {
   return (neuron0x26c31a0()*0.205244);
}

double NNfunction_sb_dLuR::synapse0x26d6d00() {
   return (neuron0x26c3b70()*-1.13269);
}

double NNfunction_sb_dLuR::synapse0x26d6d40() {
   return (neuron0x26c4540()*0.227935);
}

double NNfunction_sb_dLuR::synapse0x26d6d80() {
   return (neuron0x26c4f10()*0.831628);
}

double NNfunction_sb_dLuR::synapse0x26d6dc0() {
   return (neuron0x26c58e0()*-0.302345);
}

double NNfunction_sb_dLuR::synapse0x26d6e00() {
   return (neuron0x26c64c0()*0.0728254);
}

double NNfunction_sb_dLuR::synapse0x26d6e40() {
   return (neuron0x26c6e90()*-0.11456);
}

double NNfunction_sb_dLuR::synapse0x26d6e80() {
   return (neuron0x26b7d10()*0.561112);
}

double NNfunction_sb_dLuR::synapse0x26d6ec0() {
   return (neuron0x26b86e0()*-0.166263);
}

double NNfunction_sb_dLuR::synapse0x26d6f00() {
   return (neuron0x26b90b0()*-0.536384);
}

double NNfunction_sb_dLuR::synapse0x26d6f40() {
   return (neuron0x26cb6f0()*0.0762836);
}

double NNfunction_sb_dLuR::synapse0x26d6f80() {
   return (neuron0x26cbfa0()*-0.0120687);
}

double NNfunction_sb_dLuR::synapse0x26d6fc0() {
   return (neuron0x26cc970()*0.505929);
}

double NNfunction_sb_dLuR::synapse0x26d7000() {
   return (neuron0x26cd340()*0.0268109);
}

double NNfunction_sb_dLuR::synapse0x26d7380() {
   return (neuron0x26a9300()*-0.140153);
}

double NNfunction_sb_dLuR::synapse0x26d73c0() {
   return (neuron0x26a9c50()*-0.046224);
}

double NNfunction_sb_dLuR::synapse0x26d7400() {
   return (neuron0x26aa730()*0.101396);
}

double NNfunction_sb_dLuR::synapse0x26d7440() {
   return (neuron0x246da80()*0.126746);
}

double NNfunction_sb_dLuR::synapse0x26d7480() {
   return (neuron0x26ab4d0()*0.284589);
}

double NNfunction_sb_dLuR::synapse0x26d74c0() {
   return (neuron0x26abea0()*-0.106068);
}

double NNfunction_sb_dLuR::synapse0x26d7500() {
   return (neuron0x26acc70()*-0.694682);
}

double NNfunction_sb_dLuR::synapse0x26d7540() {
   return (neuron0x26ad640()*-0.105047);
}

double NNfunction_sb_dLuR::synapse0x26d7580() {
   return (neuron0x26ae010()*-0.136458);
}

double NNfunction_sb_dLuR::synapse0x26d75c0() {
   return (neuron0x26aeaf0()*1.01886);
}

double NNfunction_sb_dLuR::synapse0x26d7600() {
   return (neuron0x26af4c0()*0.157363);
}

double NNfunction_sb_dLuR::synapse0x26d7640() {
   return (neuron0x26ac5a0()*0.409399);
}

double NNfunction_sb_dLuR::synapse0x26d7680() {
   return (neuron0x26b1070()*0.0737161);
}

double NNfunction_sb_dLuR::synapse0x26d76c0() {
   return (neuron0x26b1a40()*0.469145);
}

double NNfunction_sb_dLuR::synapse0x26d7700() {
   return (neuron0x26b2410()*0.662085);
}

double NNfunction_sb_dLuR::synapse0x26d7740() {
   return (neuron0x26b2de0()*-0.117827);
}

double NNfunction_sb_dLuR::synapse0x26d71d0() {
   return (neuron0x26b4bf0()*-0.116491);
}

double NNfunction_sb_dLuR::synapse0x26d7210() {
   return (neuron0x26b4ed0()*1.09641);
}

double NNfunction_sb_dLuR::synapse0x26d7890() {
   return (neuron0x26b58a0()*0.151303);
}

double NNfunction_sb_dLuR::synapse0x26d78d0() {
   return (neuron0x26b6270()*0.187928);
}

double NNfunction_sb_dLuR::synapse0x26d7910() {
   return (neuron0x26b6c40()*0.101961);
}

double NNfunction_sb_dLuR::synapse0x26d7950() {
   return (neuron0x26b7610()*0.169667);
}

double NNfunction_sb_dLuR::synapse0x26d7990() {
   return (neuron0x26b0160()*-0.081944);
}

double NNfunction_sb_dLuR::synapse0x26d79d0() {
   return (neuron0x26b0b30()*0.580874);
}

double NNfunction_sb_dLuR::synapse0x26d7a10() {
   return (neuron0x26ba3a0()*0.131857);
}

double NNfunction_sb_dLuR::synapse0x26d7a50() {
   return (neuron0x26bad70()*0.122795);
}

double NNfunction_sb_dLuR::synapse0x26d7a90() {
   return (neuron0x26bb740()*-1.29824);
}

double NNfunction_sb_dLuR::synapse0x26d7ad0() {
   return (neuron0x26bc110()*-0.0854045);
}

double NNfunction_sb_dLuR::synapse0x26d7b10() {
   return (neuron0x26bcae0()*-0.502943);
}

double NNfunction_sb_dLuR::synapse0x26d7b50() {
   return (neuron0x26bd4b0()*0.0697297);
}

double NNfunction_sb_dLuR::synapse0x26d7b90() {
   return (neuron0x26bde80()*-0.0927923);
}

double NNfunction_sb_dLuR::synapse0x26d7bd0() {
   return (neuron0x26be850()*-0.107343);
}

double NNfunction_sb_dLuR::synapse0x26d7780() {
   return (neuron0x26b48e0()*0.0350255);
}

double NNfunction_sb_dLuR::synapse0x26d77c0() {
   return (neuron0x26c1430()*-0.0386069);
}

double NNfunction_sb_dLuR::synapse0x26d7800() {
   return (neuron0x26c1e00()*0.089834);
}

double NNfunction_sb_dLuR::synapse0x26d7840() {
   return (neuron0x26c27d0()*0.0936295);
}

double NNfunction_sb_dLuR::synapse0x26d7e20() {
   return (neuron0x26c31a0()*-1.39271);
}

double NNfunction_sb_dLuR::synapse0x26d7e60() {
   return (neuron0x26c3b70()*2.26994);
}

double NNfunction_sb_dLuR::synapse0x26d7ea0() {
   return (neuron0x26c4540()*-0.119911);
}

double NNfunction_sb_dLuR::synapse0x26d7ee0() {
   return (neuron0x26c4f10()*0.60154);
}

double NNfunction_sb_dLuR::synapse0x26d7f20() {
   return (neuron0x26c58e0()*-0.104308);
}

double NNfunction_sb_dLuR::synapse0x26d7f60() {
   return (neuron0x26c64c0()*0.0244307);
}

double NNfunction_sb_dLuR::synapse0x26d7fa0() {
   return (neuron0x26c6e90()*-0.0632493);
}

double NNfunction_sb_dLuR::synapse0x26d7fe0() {
   return (neuron0x26b7d10()*0.628734);
}

double NNfunction_sb_dLuR::synapse0x26d8020() {
   return (neuron0x26b86e0()*0.0730248);
}

double NNfunction_sb_dLuR::synapse0x26d8060() {
   return (neuron0x26b90b0()*-1.61754);
}

double NNfunction_sb_dLuR::synapse0x26d80a0() {
   return (neuron0x26cb6f0()*-0.109846);
}

double NNfunction_sb_dLuR::synapse0x26d80e0() {
   return (neuron0x26cbfa0()*-0.0482173);
}

double NNfunction_sb_dLuR::synapse0x26d8120() {
   return (neuron0x26cc970()*-0.180409);
}

double NNfunction_sb_dLuR::synapse0x26d8160() {
   return (neuron0x26cd340()*0.0844528);
}

double NNfunction_sb_dLuR::synapse0x26d83c0() {
   return (neuron0x26d4540()*-5.98891);
}

double NNfunction_sb_dLuR::synapse0x26d8400() {
   return (neuron0x26d48e0()*8.82451);
}

double NNfunction_sb_dLuR::synapse0x26d8440() {
   return (neuron0x26d4d80()*2.24583);
}

double NNfunction_sb_dLuR::synapse0x26d8480() {
   return (neuron0x26d5ee0()*-1.33351);
}

double NNfunction_sb_dLuR::synapse0x26d84c0() {
   return (neuron0x26d7040()*-4.2825);
}

