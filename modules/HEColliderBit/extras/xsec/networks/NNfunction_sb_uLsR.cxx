#include "NNfunction_sb_uLsR.h"
#include <cmath>

double NNfunction_sb_uLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.852)/15.0534;
   input1 = (in1 - 59.5912)/725.672;
   input2 = (in2 - 379.662)/466.684;
   input3 = (in3 - 309.544)/635.291;
   input4 = (in4 - 753.721)/673.853;
   input5 = (in5 - 650.973)/645.776;
   input6 = (in6 - 659.543)/653.681;
   input7 = (in7 - 649.255)/644.874;
   input8 = (in8 - 653.166)/685.437;
   input9 = (in9 - 643.499)/669.946;
   input10 = (in10 - 648.288)/694.02;
   input11 = (in11 - 605.297)/378.674;
   input12 = (in12 - 720.963)/587.929;
   input13 = (in13 - 560.028)/369.971;
   input14 = (in14 - 703.659)/542.085;
   input15 = (in15 - 703.897)/540.946;
   input16 = (in16 - 497.266)/378.177;
   input17 = (in17 - 726.705)/603.784;
   input18 = (in18 - 598.626)/379.463;
   input19 = (in19 - 721.237)/592.632;
   input20 = (in20 - -238.735)/422.824;
   input21 = (in21 - -307.932)/902.866;
   input22 = (in22 - -0.491211)/893.982;
   input23 = (in23 - 3.96056)/509.248;
   switch(index) {
     case 0:
         return neuron0x35912f0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLsR::Value(int index, double* input) {
   input0 = (input[0] - 22.852)/15.0534;
   input1 = (input[1] - 59.5912)/725.672;
   input2 = (input[2] - 379.662)/466.684;
   input3 = (input[3] - 309.544)/635.291;
   input4 = (input[4] - 753.721)/673.853;
   input5 = (input[5] - 650.973)/645.776;
   input6 = (input[6] - 659.543)/653.681;
   input7 = (input[7] - 649.255)/644.874;
   input8 = (input[8] - 653.166)/685.437;
   input9 = (input[9] - 643.499)/669.946;
   input10 = (input[10] - 648.288)/694.02;
   input11 = (input[11] - 605.297)/378.674;
   input12 = (input[12] - 720.963)/587.929;
   input13 = (input[13] - 560.028)/369.971;
   input14 = (input[14] - 703.659)/542.085;
   input15 = (input[15] - 703.897)/540.946;
   input16 = (input[16] - 497.266)/378.177;
   input17 = (input[17] - 726.705)/603.784;
   input18 = (input[18] - 598.626)/379.463;
   input19 = (input[19] - 721.237)/592.632;
   input20 = (input[20] - -238.735)/422.824;
   input21 = (input[21] - -307.932)/902.866;
   input22 = (input[22] - -0.491211)/893.982;
   input23 = (input[23] - 3.96056)/509.248;
   switch(index) {
     case 0:
         return neuron0x35912f0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLsR::neuron0x355d3e0() {
   return input0;
}

double NNfunction_sb_uLsR::neuron0x355d720() {
   return input1;
}

double NNfunction_sb_uLsR::neuron0x355da60() {
   return input2;
}

double NNfunction_sb_uLsR::neuron0x355dda0() {
   return input3;
}

double NNfunction_sb_uLsR::neuron0x355e0e0() {
   return input4;
}

double NNfunction_sb_uLsR::neuron0x355e420() {
   return input5;
}

double NNfunction_sb_uLsR::neuron0x355e760() {
   return input6;
}

double NNfunction_sb_uLsR::neuron0x355eaa0() {
   return input7;
}

double NNfunction_sb_uLsR::neuron0x355ede0() {
   return input8;
}

double NNfunction_sb_uLsR::neuron0x355f120() {
   return input9;
}

double NNfunction_sb_uLsR::neuron0x355f460() {
   return input10;
}

double NNfunction_sb_uLsR::neuron0x355f7a0() {
   return input11;
}

double NNfunction_sb_uLsR::neuron0x355fae0() {
   return input12;
}

double NNfunction_sb_uLsR::neuron0x355fe20() {
   return input13;
}

double NNfunction_sb_uLsR::neuron0x3560160() {
   return input14;
}

double NNfunction_sb_uLsR::neuron0x35604a0() {
   return input15;
}

double NNfunction_sb_uLsR::neuron0x35607e0() {
   return input16;
}

double NNfunction_sb_uLsR::neuron0x3560d40() {
   return input17;
}

double NNfunction_sb_uLsR::neuron0x3560f60() {
   return input18;
}

double NNfunction_sb_uLsR::neuron0x35612a0() {
   return input19;
}

double NNfunction_sb_uLsR::neuron0x35615e0() {
   return input20;
}

double NNfunction_sb_uLsR::neuron0x3561920() {
   return input21;
}

double NNfunction_sb_uLsR::neuron0x3561c60() {
   return input22;
}

double NNfunction_sb_uLsR::neuron0x3561fa0() {
   return input23;
}

double NNfunction_sb_uLsR::input0x3562410() {
   double input = 1.48627;
   input += synapse0x355d2a0();
   input += synapse0x355d2e0();
   input += synapse0x35626c0();
   input += synapse0x3562700();
   input += synapse0x3562740();
   input += synapse0x3562780();
   input += synapse0x35627c0();
   input += synapse0x3562800();
   input += synapse0x3562840();
   input += synapse0x3562880();
   input += synapse0x35628c0();
   input += synapse0x3562900();
   input += synapse0x3562940();
   input += synapse0x3562980();
   input += synapse0x35629c0();
   input += synapse0x3562a00();
   input += synapse0x355d210();
   input += synapse0x355d250();
   input += synapse0x3318630();
   input += synapse0x3318670();
   input += synapse0x3562c60();
   input += synapse0x3562ca0();
   input += synapse0x3562ce0();
   input += synapse0x3562d20();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3562410() {
   double input = input0x3562410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3562d60() {
   double input = -0.0858735;
   input += synapse0x35630a0();
   input += synapse0x35630e0();
   input += synapse0x3563120();
   input += synapse0x3563160();
   input += synapse0x35631a0();
   input += synapse0x35631e0();
   input += synapse0x3563220();
   input += synapse0x3563260();
   input += synapse0x35632a0();
   input += synapse0x3562b50();
   input += synapse0x3562b90();
   input += synapse0x3562bd0();
   input += synapse0x3562c10();
   input += synapse0x35634f0();
   input += synapse0x3563530();
   input += synapse0x3563570();
   input += synapse0x3562ef0();
   input += synapse0x3562f30();
   input += synapse0x35636c0();
   input += synapse0x3563700();
   input += synapse0x3563740();
   input += synapse0x3563780();
   input += synapse0x35637c0();
   input += synapse0x3563800();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3562d60() {
   double input = input0x3562d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3563840() {
   double input = 0.694763;
   input += synapse0x3563b80();
   input += synapse0x3563bc0();
   input += synapse0x3563c00();
   input += synapse0x3563c40();
   input += synapse0x3563c80();
   input += synapse0x3563cc0();
   input += synapse0x3563d00();
   input += synapse0x3563d40();
   input += synapse0x3563d80();
   input += synapse0x3563dc0();
   input += synapse0x3563e00();
   input += synapse0x3563e40();
   input += synapse0x3563e80();
   input += synapse0x3563ec0();
   input += synapse0x3563f00();
   input += synapse0x3563f40();
   input += synapse0x35639d0();
   input += synapse0x3563a10();
   input += synapse0x3318cd0();
   input += synapse0x3326540();
   input += synapse0x3326580();
   input += synapse0x354c470();
   input += synapse0x354c4b0();
   input += synapse0x354c4f0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3563840() {
   double input = input0x3563840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x35632e0() {
   double input = 0.532343;
   input += synapse0x3326dc0();
   input += synapse0x3563470();
   input += synapse0x35634b0();
   input += synapse0x3564090();
   input += synapse0x35640d0();
   input += synapse0x3564110();
   input += synapse0x3564150();
   input += synapse0x3564190();
   input += synapse0x35641d0();
   input += synapse0x3564210();
   input += synapse0x3564250();
   input += synapse0x3564290();
   input += synapse0x35642d0();
   input += synapse0x3564310();
   input += synapse0x3564350();
   input += synapse0x3564390();
   input += synapse0x355d320();
   input += synapse0x355d360();
   input += synapse0x355d3a0();
   input += synapse0x35644e0();
   input += synapse0x3564520();
   input += synapse0x3564560();
   input += synapse0x35645a0();
   input += synapse0x35645e0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x35632e0() {
   double input = input0x35632e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3564620() {
   double input = -0.385975;
   input += synapse0x3564960();
   input += synapse0x35649a0();
   input += synapse0x35649e0();
   input += synapse0x3564a20();
   input += synapse0x3564a60();
   input += synapse0x3564aa0();
   input += synapse0x3564ae0();
   input += synapse0x3564b20();
   input += synapse0x3564b60();
   input += synapse0x3564ba0();
   input += synapse0x3564be0();
   input += synapse0x3564c20();
   input += synapse0x3564c60();
   input += synapse0x3564ca0();
   input += synapse0x3564ce0();
   input += synapse0x3564d20();
   input += synapse0x35647b0();
   input += synapse0x35647f0();
   input += synapse0x3564e70();
   input += synapse0x3564eb0();
   input += synapse0x3564ef0();
   input += synapse0x3564f30();
   input += synapse0x3564f70();
   input += synapse0x3564fb0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3564620() {
   double input = input0x3564620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3564ff0() {
   double input = -0.131941;
   input += synapse0x3565330();
   input += synapse0x3565370();
   input += synapse0x35653b0();
   input += synapse0x35653f0();
   input += synapse0x3565430();
   input += synapse0x3565470();
   input += synapse0x35654b0();
   input += synapse0x35654f0();
   input += synapse0x3565530();
   input += synapse0x3326890();
   input += synapse0x33268d0();
   input += synapse0x3326910();
   input += synapse0x3326950();
   input += synapse0x3326990();
   input += synapse0x33269d0();
   input += synapse0x3326a10();
   input += synapse0x3565180();
   input += synapse0x35651c0();
   input += synapse0x3326b60();
   input += synapse0x3326ba0();
   input += synapse0x3326be0();
   input += synapse0x3326c20();
   input += synapse0x3326c60();
   input += synapse0x3565d80();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3564ff0() {
   double input = input0x3564ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3565dc0() {
   double input = 0.191827;
   input += synapse0x3566100();
   input += synapse0x3566140();
   input += synapse0x3566180();
   input += synapse0x35661c0();
   input += synapse0x3566200();
   input += synapse0x3566240();
   input += synapse0x3566280();
   input += synapse0x35662c0();
   input += synapse0x3566300();
   input += synapse0x3566340();
   input += synapse0x3566380();
   input += synapse0x35663c0();
   input += synapse0x3566400();
   input += synapse0x3566440();
   input += synapse0x3566480();
   input += synapse0x35664c0();
   input += synapse0x3565f50();
   input += synapse0x3565f90();
   input += synapse0x3566610();
   input += synapse0x3566650();
   input += synapse0x3566690();
   input += synapse0x35666d0();
   input += synapse0x3566710();
   input += synapse0x3566750();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3565dc0() {
   double input = input0x3565dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3566790() {
   double input = 0.576683;
   input += synapse0x3566ad0();
   input += synapse0x3566b10();
   input += synapse0x3566b50();
   input += synapse0x3566b90();
   input += synapse0x3566bd0();
   input += synapse0x3566c10();
   input += synapse0x3566c50();
   input += synapse0x3566c90();
   input += synapse0x3566cd0();
   input += synapse0x3566d10();
   input += synapse0x3566d50();
   input += synapse0x3566d90();
   input += synapse0x3566dd0();
   input += synapse0x3566e10();
   input += synapse0x3566e50();
   input += synapse0x3566e90();
   input += synapse0x3566920();
   input += synapse0x3566960();
   input += synapse0x3566fe0();
   input += synapse0x3567020();
   input += synapse0x3567060();
   input += synapse0x35670a0();
   input += synapse0x35670e0();
   input += synapse0x3567120();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3566790() {
   double input = input0x3566790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3567160() {
   double input = -0.849485;
   input += synapse0x3560c30();
   input += synapse0x3560c70();
   input += synapse0x3560cb0();
   input += synapse0x3560cf0();
   input += synapse0x35676b0();
   input += synapse0x35676f0();
   input += synapse0x3567730();
   input += synapse0x3567770();
   input += synapse0x35677b0();
   input += synapse0x35677f0();
   input += synapse0x3567830();
   input += synapse0x3567870();
   input += synapse0x35678b0();
   input += synapse0x35678f0();
   input += synapse0x3567930();
   input += synapse0x3567970();
   input += synapse0x35672f0();
   input += synapse0x3567330();
   input += synapse0x3567ac0();
   input += synapse0x3567b00();
   input += synapse0x3567b40();
   input += synapse0x3567b80();
   input += synapse0x3567bc0();
   input += synapse0x3567c00();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3567160() {
   double input = input0x3567160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3567c40() {
   double input = 0.238291;
   input += synapse0x3567f80();
   input += synapse0x3567fc0();
   input += synapse0x3568000();
   input += synapse0x3568040();
   input += synapse0x3568080();
   input += synapse0x35680c0();
   input += synapse0x3568100();
   input += synapse0x3568140();
   input += synapse0x3568180();
   input += synapse0x35681c0();
   input += synapse0x3568200();
   input += synapse0x3568240();
   input += synapse0x3568280();
   input += synapse0x35682c0();
   input += synapse0x3568300();
   input += synapse0x3568340();
   input += synapse0x3567dd0();
   input += synapse0x3567e10();
   input += synapse0x3568490();
   input += synapse0x35684d0();
   input += synapse0x3568510();
   input += synapse0x3568550();
   input += synapse0x3568590();
   input += synapse0x35685d0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3567c40() {
   double input = input0x3567c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3568610() {
   double input = 0.958372;
   input += synapse0x3568950();
   input += synapse0x3568990();
   input += synapse0x35689d0();
   input += synapse0x3568a10();
   input += synapse0x3568a50();
   input += synapse0x3568a90();
   input += synapse0x3568ad0();
   input += synapse0x3568b10();
   input += synapse0x3568b50();
   input += synapse0x3568b90();
   input += synapse0x3568bd0();
   input += synapse0x3568c10();
   input += synapse0x3568c50();
   input += synapse0x3568c90();
   input += synapse0x3568cd0();
   input += synapse0x3568d10();
   input += synapse0x35687a0();
   input += synapse0x35687e0();
   input += synapse0x3565570();
   input += synapse0x35655b0();
   input += synapse0x35655f0();
   input += synapse0x3565630();
   input += synapse0x3565670();
   input += synapse0x35656b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3568610() {
   double input = input0x3568610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x35656f0() {
   double input = 1.38595;
   input += synapse0x3565a30();
   input += synapse0x3565a70();
   input += synapse0x3565ab0();
   input += synapse0x3565af0();
   input += synapse0x3565b30();
   input += synapse0x3565b70();
   input += synapse0x3565bb0();
   input += synapse0x3565bf0();
   input += synapse0x3565c30();
   input += synapse0x3565c70();
   input += synapse0x3565cb0();
   input += synapse0x3565cf0();
   input += synapse0x3565d30();
   input += synapse0x3569e70();
   input += synapse0x3569eb0();
   input += synapse0x3569ef0();
   input += synapse0x3565880();
   input += synapse0x35658c0();
   input += synapse0x356a040();
   input += synapse0x356a080();
   input += synapse0x356a0c0();
   input += synapse0x356a100();
   input += synapse0x356a140();
   input += synapse0x356a180();
   return input;
}

double NNfunction_sb_uLsR::neuron0x35656f0() {
   double input = input0x35656f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356a1c0() {
   double input = -5.07758;
   input += synapse0x356a500();
   input += synapse0x356a540();
   input += synapse0x356a580();
   input += synapse0x356a5c0();
   input += synapse0x356a600();
   input += synapse0x356a640();
   input += synapse0x356a680();
   input += synapse0x356a6c0();
   input += synapse0x356a700();
   input += synapse0x356a740();
   input += synapse0x356a780();
   input += synapse0x356a7c0();
   input += synapse0x356a800();
   input += synapse0x356a840();
   input += synapse0x356a880();
   input += synapse0x356a8c0();
   input += synapse0x356a350();
   input += synapse0x356a390();
   input += synapse0x356aa10();
   input += synapse0x356aa50();
   input += synapse0x356aa90();
   input += synapse0x356aad0();
   input += synapse0x356ab10();
   input += synapse0x356ab50();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356a1c0() {
   double input = input0x356a1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356ab90() {
   double input = -0.397063;
   input += synapse0x356aed0();
   input += synapse0x356af10();
   input += synapse0x356af50();
   input += synapse0x356af90();
   input += synapse0x356afd0();
   input += synapse0x356b010();
   input += synapse0x356b050();
   input += synapse0x356b090();
   input += synapse0x356b0d0();
   input += synapse0x356b110();
   input += synapse0x356b150();
   input += synapse0x356b190();
   input += synapse0x356b1d0();
   input += synapse0x356b210();
   input += synapse0x356b250();
   input += synapse0x356b290();
   input += synapse0x356ad20();
   input += synapse0x356ad60();
   input += synapse0x356b3e0();
   input += synapse0x356b420();
   input += synapse0x356b460();
   input += synapse0x356b4a0();
   input += synapse0x356b4e0();
   input += synapse0x356b520();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356ab90() {
   double input = input0x356ab90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356b560() {
   double input = 1.77705;
   input += synapse0x356b8a0();
   input += synapse0x356b8e0();
   input += synapse0x356b920();
   input += synapse0x356b960();
   input += synapse0x356b9a0();
   input += synapse0x356b9e0();
   input += synapse0x356ba20();
   input += synapse0x356ba60();
   input += synapse0x356baa0();
   input += synapse0x356bae0();
   input += synapse0x356bb20();
   input += synapse0x356bb60();
   input += synapse0x356bba0();
   input += synapse0x356bbe0();
   input += synapse0x356bc20();
   input += synapse0x356bc60();
   input += synapse0x356b6f0();
   input += synapse0x356b730();
   input += synapse0x356bdb0();
   input += synapse0x356bdf0();
   input += synapse0x356be30();
   input += synapse0x356be70();
   input += synapse0x356beb0();
   input += synapse0x356bef0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356b560() {
   double input = input0x356b560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356bf30() {
   double input = 0.250857;
   input += synapse0x356c270();
   input += synapse0x355d600();
   input += synapse0x355d640();
   input += synapse0x355d940();
   input += synapse0x355d980();
   input += synapse0x355dc80();
   input += synapse0x355dcc0();
   input += synapse0x355dfc0();
   input += synapse0x355e000();
   input += synapse0x355e300();
   input += synapse0x355e340();
   input += synapse0x355e640();
   input += synapse0x355e680();
   input += synapse0x355e980();
   input += synapse0x355e9c0();
   input += synapse0x355ecc0();
   input += synapse0x355ed00();
   input += synapse0x355f000();
   input += synapse0x355f040();
   input += synapse0x355f340();
   input += synapse0x355f380();
   input += synapse0x355f680();
   input += synapse0x355f6c0();
   input += synapse0x355f9c0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356bf30() {
   double input = input0x356bf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356dd40() {
   double input = -0.560635;
   input += synapse0x355fa00();
   input += synapse0x35606c0();
   input += synapse0x3560700();
   input += synapse0x356c0c0();
   input += synapse0x356c100();
   input += synapse0x3560a00();
   input += synapse0x3560a40();
   input += synapse0x3318510();
   input += synapse0x3318550();
   input += synapse0x3561180();
   input += synapse0x35611c0();
   input += synapse0x35614c0();
   input += synapse0x3561500();
   input += synapse0x3561800();
   input += synapse0x3561840();
   input += synapse0x3561b40();
   input += synapse0x3561b80();
   input += synapse0x3561e80();
   input += synapse0x3561ec0();
   input += synapse0x35621c0();
   input += synapse0x3562200();
   input += synapse0x355fd00();
   input += synapse0x355fd40();
   input += synapse0x356dfe0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356dd40() {
   double input = input0x356dd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356e020() {
   double input = 0.263916;
   input += synapse0x356e360();
   input += synapse0x356e3a0();
   input += synapse0x356e3e0();
   input += synapse0x356e420();
   input += synapse0x356e460();
   input += synapse0x356e4a0();
   input += synapse0x356e4e0();
   input += synapse0x356e520();
   input += synapse0x356e560();
   input += synapse0x356e5a0();
   input += synapse0x356e5e0();
   input += synapse0x356e620();
   input += synapse0x356e660();
   input += synapse0x356e6a0();
   input += synapse0x356e6e0();
   input += synapse0x356e720();
   input += synapse0x356e1b0();
   input += synapse0x356e1f0();
   input += synapse0x356e870();
   input += synapse0x356e8b0();
   input += synapse0x356e8f0();
   input += synapse0x356e930();
   input += synapse0x356e970();
   input += synapse0x356e9b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356e020() {
   double input = input0x356e020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356e9f0() {
   double input = 0.266418;
   input += synapse0x356ed30();
   input += synapse0x356ed70();
   input += synapse0x356edb0();
   input += synapse0x356edf0();
   input += synapse0x356ee30();
   input += synapse0x356ee70();
   input += synapse0x356eeb0();
   input += synapse0x356eef0();
   input += synapse0x356ef30();
   input += synapse0x356ef70();
   input += synapse0x356efb0();
   input += synapse0x356eff0();
   input += synapse0x356f030();
   input += synapse0x356f070();
   input += synapse0x356f0b0();
   input += synapse0x356f0f0();
   input += synapse0x356eb80();
   input += synapse0x356ebc0();
   input += synapse0x356f240();
   input += synapse0x356f280();
   input += synapse0x356f2c0();
   input += synapse0x356f300();
   input += synapse0x356f340();
   input += synapse0x356f380();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356e9f0() {
   double input = input0x356e9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356f3c0() {
   double input = 0.090255;
   input += synapse0x356f700();
   input += synapse0x356f740();
   input += synapse0x356f780();
   input += synapse0x356f7c0();
   input += synapse0x356f800();
   input += synapse0x356f840();
   input += synapse0x356f880();
   input += synapse0x356f8c0();
   input += synapse0x356f900();
   input += synapse0x356f940();
   input += synapse0x356f980();
   input += synapse0x356f9c0();
   input += synapse0x356fa00();
   input += synapse0x356fa40();
   input += synapse0x356fa80();
   input += synapse0x356fac0();
   input += synapse0x356f550();
   input += synapse0x356f590();
   input += synapse0x356fc10();
   input += synapse0x356fc50();
   input += synapse0x356fc90();
   input += synapse0x356fcd0();
   input += synapse0x356fd10();
   input += synapse0x356fd50();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356f3c0() {
   double input = input0x356f3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356fd90() {
   double input = -0.0831955;
   input += synapse0x35700d0();
   input += synapse0x3570110();
   input += synapse0x3570150();
   input += synapse0x3570190();
   input += synapse0x35701d0();
   input += synapse0x3570210();
   input += synapse0x3570250();
   input += synapse0x3570290();
   input += synapse0x35702d0();
   input += synapse0x3570310();
   input += synapse0x3570350();
   input += synapse0x3570390();
   input += synapse0x35703d0();
   input += synapse0x3570410();
   input += synapse0x3570450();
   input += synapse0x3570490();
   input += synapse0x356ff20();
   input += synapse0x356ff60();
   input += synapse0x35705e0();
   input += synapse0x3570620();
   input += synapse0x3570660();
   input += synapse0x35706a0();
   input += synapse0x35706e0();
   input += synapse0x3570720();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356fd90() {
   double input = input0x356fd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3570760() {
   double input = 0.423321;
   input += synapse0x3570aa0();
   input += synapse0x3570ae0();
   input += synapse0x3570b20();
   input += synapse0x3570b60();
   input += synapse0x3570ba0();
   input += synapse0x3570be0();
   input += synapse0x3570c20();
   input += synapse0x3570c60();
   input += synapse0x3570ca0();
   input += synapse0x3568e60();
   input += synapse0x3568ea0();
   input += synapse0x3568ee0();
   input += synapse0x3568f20();
   input += synapse0x3568f60();
   input += synapse0x3568fa0();
   input += synapse0x3568fe0();
   input += synapse0x35708f0();
   input += synapse0x3570930();
   input += synapse0x3569130();
   input += synapse0x3569170();
   input += synapse0x35691b0();
   input += synapse0x35691f0();
   input += synapse0x3569230();
   input += synapse0x3569270();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3570760() {
   double input = input0x3570760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x35692b0() {
   double input = 0.536288;
   input += synapse0x35695f0();
   input += synapse0x3569630();
   input += synapse0x3569670();
   input += synapse0x35696b0();
   input += synapse0x35696f0();
   input += synapse0x3569730();
   input += synapse0x3569770();
   input += synapse0x35697b0();
   input += synapse0x35697f0();
   input += synapse0x3569830();
   input += synapse0x3569870();
   input += synapse0x35698b0();
   input += synapse0x35698f0();
   input += synapse0x3569930();
   input += synapse0x3569970();
   input += synapse0x35699b0();
   input += synapse0x3569440();
   input += synapse0x3569480();
   input += synapse0x3569b00();
   input += synapse0x3569b40();
   input += synapse0x3569b80();
   input += synapse0x3569bc0();
   input += synapse0x3569c00();
   input += synapse0x3569c40();
   return input;
}

double NNfunction_sb_uLsR::neuron0x35692b0() {
   double input = input0x35692b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3569c80() {
   double input = 1.41006;
   input += synapse0x3569e10();
   input += synapse0x3572ea0();
   input += synapse0x3572ee0();
   input += synapse0x3572f20();
   input += synapse0x3572f60();
   input += synapse0x3572fa0();
   input += synapse0x3572fe0();
   input += synapse0x3573020();
   input += synapse0x3573060();
   input += synapse0x35730a0();
   input += synapse0x35730e0();
   input += synapse0x3573120();
   input += synapse0x3573160();
   input += synapse0x35731a0();
   input += synapse0x35731e0();
   input += synapse0x3573220();
   input += synapse0x3572cf0();
   input += synapse0x3572d30();
   input += synapse0x3573370();
   input += synapse0x35733b0();
   input += synapse0x35733f0();
   input += synapse0x3573430();
   input += synapse0x3573470();
   input += synapse0x35734b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3569c80() {
   double input = input0x3569c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x35734f0() {
   double input = 0.707738;
   input += synapse0x3573830();
   input += synapse0x3573870();
   input += synapse0x35738b0();
   input += synapse0x35738f0();
   input += synapse0x3573930();
   input += synapse0x3573970();
   input += synapse0x35739b0();
   input += synapse0x35739f0();
   input += synapse0x3573a30();
   input += synapse0x3573a70();
   input += synapse0x3573ab0();
   input += synapse0x3573af0();
   input += synapse0x3573b30();
   input += synapse0x3573b70();
   input += synapse0x3573bb0();
   input += synapse0x3573bf0();
   input += synapse0x3573680();
   input += synapse0x35736c0();
   input += synapse0x3573d40();
   input += synapse0x3573d80();
   input += synapse0x3573dc0();
   input += synapse0x3573e00();
   input += synapse0x3573e40();
   input += synapse0x3573e80();
   return input;
}

double NNfunction_sb_uLsR::neuron0x35734f0() {
   double input = input0x35734f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3573ec0() {
   double input = 1.18545;
   input += synapse0x3574200();
   input += synapse0x3574240();
   input += synapse0x3574280();
   input += synapse0x35742c0();
   input += synapse0x3574300();
   input += synapse0x3574340();
   input += synapse0x3574380();
   input += synapse0x35743c0();
   input += synapse0x3574400();
   input += synapse0x3574440();
   input += synapse0x3574480();
   input += synapse0x35744c0();
   input += synapse0x3574500();
   input += synapse0x3574540();
   input += synapse0x3574580();
   input += synapse0x35745c0();
   input += synapse0x3574050();
   input += synapse0x3574090();
   input += synapse0x3574710();
   input += synapse0x3574750();
   input += synapse0x3574790();
   input += synapse0x35747d0();
   input += synapse0x3574810();
   input += synapse0x3574850();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3573ec0() {
   double input = input0x3573ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3574890() {
   double input = 0.635862;
   input += synapse0x3574bd0();
   input += synapse0x3574c10();
   input += synapse0x3574c50();
   input += synapse0x3574c90();
   input += synapse0x3574cd0();
   input += synapse0x3574d10();
   input += synapse0x3574d50();
   input += synapse0x3574d90();
   input += synapse0x3574dd0();
   input += synapse0x3574e10();
   input += synapse0x3574e50();
   input += synapse0x3574e90();
   input += synapse0x3574ed0();
   input += synapse0x3574f10();
   input += synapse0x3574f50();
   input += synapse0x3574f90();
   input += synapse0x3574a20();
   input += synapse0x3574a60();
   input += synapse0x35750e0();
   input += synapse0x3575120();
   input += synapse0x3575160();
   input += synapse0x35751a0();
   input += synapse0x35751e0();
   input += synapse0x3575220();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3574890() {
   double input = input0x3574890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3575260() {
   double input = -1.22822;
   input += synapse0x35755a0();
   input += synapse0x35755e0();
   input += synapse0x3575620();
   input += synapse0x3575660();
   input += synapse0x35756a0();
   input += synapse0x35756e0();
   input += synapse0x3575720();
   input += synapse0x3575760();
   input += synapse0x35757a0();
   input += synapse0x35757e0();
   input += synapse0x3575820();
   input += synapse0x3575860();
   input += synapse0x35758a0();
   input += synapse0x35758e0();
   input += synapse0x3575920();
   input += synapse0x3575960();
   input += synapse0x35753f0();
   input += synapse0x3575430();
   input += synapse0x3575ab0();
   input += synapse0x3575af0();
   input += synapse0x3575b30();
   input += synapse0x3575b70();
   input += synapse0x3575bb0();
   input += synapse0x3575bf0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3575260() {
   double input = input0x3575260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3575c30() {
   double input = -0.708959;
   input += synapse0x3575f70();
   input += synapse0x3575fb0();
   input += synapse0x3575ff0();
   input += synapse0x3576030();
   input += synapse0x3576070();
   input += synapse0x35760b0();
   input += synapse0x35760f0();
   input += synapse0x3576130();
   input += synapse0x3576170();
   input += synapse0x35761b0();
   input += synapse0x35761f0();
   input += synapse0x3576230();
   input += synapse0x3576270();
   input += synapse0x35762b0();
   input += synapse0x35762f0();
   input += synapse0x3576330();
   input += synapse0x3575dc0();
   input += synapse0x3575e00();
   input += synapse0x3576480();
   input += synapse0x35764c0();
   input += synapse0x3576500();
   input += synapse0x3576540();
   input += synapse0x3576580();
   input += synapse0x35765c0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3575c30() {
   double input = input0x3575c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3576600() {
   double input = 0.16784;
   input += synapse0x3576940();
   input += synapse0x3576980();
   input += synapse0x35769c0();
   input += synapse0x3576a00();
   input += synapse0x3576a40();
   input += synapse0x3576a80();
   input += synapse0x3576ac0();
   input += synapse0x3576b00();
   input += synapse0x3576b40();
   input += synapse0x3576b80();
   input += synapse0x3576bc0();
   input += synapse0x3576c00();
   input += synapse0x3576c40();
   input += synapse0x3576c80();
   input += synapse0x3576cc0();
   input += synapse0x3576d00();
   input += synapse0x3576790();
   input += synapse0x35767d0();
   input += synapse0x3576e50();
   input += synapse0x3576e90();
   input += synapse0x3576ed0();
   input += synapse0x3576f10();
   input += synapse0x3576f50();
   input += synapse0x3576f90();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3576600() {
   double input = input0x3576600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3576fd0() {
   double input = 0.15975;
   input += synapse0x3577310();
   input += synapse0x3577350();
   input += synapse0x3577390();
   input += synapse0x35773d0();
   input += synapse0x3577410();
   input += synapse0x3577450();
   input += synapse0x3577490();
   input += synapse0x35774d0();
   input += synapse0x3577510();
   input += synapse0x3577550();
   input += synapse0x3577590();
   input += synapse0x35775d0();
   input += synapse0x3577610();
   input += synapse0x3577650();
   input += synapse0x3577690();
   input += synapse0x35776d0();
   input += synapse0x3577160();
   input += synapse0x35771a0();
   input += synapse0x3577820();
   input += synapse0x3577860();
   input += synapse0x35778a0();
   input += synapse0x35778e0();
   input += synapse0x3577920();
   input += synapse0x3577960();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3576fd0() {
   double input = input0x3576fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x35779a0() {
   double input = -0.0778399;
   input += synapse0x3577ce0();
   input += synapse0x356c2b0();
   input += synapse0x356c2f0();
   input += synapse0x356c330();
   input += synapse0x356c580();
   input += synapse0x356c5c0();
   input += synapse0x356c600();
   input += synapse0x356c850();
   input += synapse0x356c890();
   input += synapse0x356cae0();
   input += synapse0x356cb20();
   input += synapse0x356cb60();
   input += synapse0x356cdb0();
   input += synapse0x356cdf0();
   input += synapse0x356d040();
   input += synapse0x356d080();
   input += synapse0x3577b30();
   input += synapse0x3577b70();
   input += synapse0x356d1d0();
   input += synapse0x356d6e0();
   input += synapse0x356d720();
   input += synapse0x356d760();
   input += synapse0x356d9b0();
   input += synapse0x356d9f0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x35779a0() {
   double input = input0x35779a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x356da30() {
   double input = -0.439762;
   input += synapse0x356d2a0();
   input += synapse0x356d2e0();
   input += synapse0x356d320();
   input += synapse0x356d360();
   input += synapse0x356dce0();
   input += synapse0x357a030();
   input += synapse0x357a070();
   input += synapse0x357a0b0();
   input += synapse0x357a0f0();
   input += synapse0x357a130();
   input += synapse0x357a170();
   input += synapse0x357a1b0();
   input += synapse0x357a1f0();
   input += synapse0x357a230();
   input += synapse0x357a270();
   input += synapse0x357a2b0();
   input += synapse0x356dbc0();
   input += synapse0x356dc00();
   input += synapse0x357a400();
   input += synapse0x357a440();
   input += synapse0x357a480();
   input += synapse0x357a4c0();
   input += synapse0x357a500();
   input += synapse0x357a540();
   return input;
}

double NNfunction_sb_uLsR::neuron0x356da30() {
   double input = input0x356da30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357a580() {
   double input = 2.52337;
   input += synapse0x357a8c0();
   input += synapse0x357a900();
   input += synapse0x357a940();
   input += synapse0x357a980();
   input += synapse0x357a9c0();
   input += synapse0x357aa00();
   input += synapse0x357aa40();
   input += synapse0x357aa80();
   input += synapse0x357aac0();
   input += synapse0x357ab00();
   input += synapse0x357ab40();
   input += synapse0x357ab80();
   input += synapse0x357abc0();
   input += synapse0x357ac00();
   input += synapse0x357ac40();
   input += synapse0x357ac80();
   input += synapse0x357a710();
   input += synapse0x357a750();
   input += synapse0x357add0();
   input += synapse0x357ae10();
   input += synapse0x357ae50();
   input += synapse0x357ae90();
   input += synapse0x357aed0();
   input += synapse0x357af10();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357a580() {
   double input = input0x357a580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357af50() {
   double input = -0.0498177;
   input += synapse0x357b290();
   input += synapse0x357b2d0();
   input += synapse0x357b310();
   input += synapse0x357b350();
   input += synapse0x357b390();
   input += synapse0x357b3d0();
   input += synapse0x357b410();
   input += synapse0x357b450();
   input += synapse0x357b490();
   input += synapse0x357b4d0();
   input += synapse0x357b510();
   input += synapse0x357b550();
   input += synapse0x357b590();
   input += synapse0x357b5d0();
   input += synapse0x357b610();
   input += synapse0x357b650();
   input += synapse0x357b0e0();
   input += synapse0x357b120();
   input += synapse0x357b7a0();
   input += synapse0x357b7e0();
   input += synapse0x357b820();
   input += synapse0x357b860();
   input += synapse0x357b8a0();
   input += synapse0x357b8e0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357af50() {
   double input = input0x357af50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357b920() {
   double input = 1.16369;
   input += synapse0x357bc60();
   input += synapse0x357bca0();
   input += synapse0x357bce0();
   input += synapse0x357bd20();
   input += synapse0x357bd60();
   input += synapse0x357bda0();
   input += synapse0x357bde0();
   input += synapse0x357be20();
   input += synapse0x357be60();
   input += synapse0x357bea0();
   input += synapse0x357bee0();
   input += synapse0x357bf20();
   input += synapse0x357bf60();
   input += synapse0x357bfa0();
   input += synapse0x357bfe0();
   input += synapse0x357c020();
   input += synapse0x357bab0();
   input += synapse0x357baf0();
   input += synapse0x357c170();
   input += synapse0x357c1b0();
   input += synapse0x357c1f0();
   input += synapse0x357c230();
   input += synapse0x357c270();
   input += synapse0x357c2b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357b920() {
   double input = input0x357b920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357c2f0() {
   double input = 6.10374;
   input += synapse0x357c630();
   input += synapse0x357c670();
   input += synapse0x357c6b0();
   input += synapse0x357c6f0();
   input += synapse0x357c730();
   input += synapse0x357c770();
   input += synapse0x357c7b0();
   input += synapse0x357c7f0();
   input += synapse0x357c830();
   input += synapse0x357c870();
   input += synapse0x357c8b0();
   input += synapse0x357c8f0();
   input += synapse0x357c930();
   input += synapse0x357c970();
   input += synapse0x357c9b0();
   input += synapse0x357c9f0();
   input += synapse0x357c480();
   input += synapse0x357c4c0();
   input += synapse0x357cb40();
   input += synapse0x357cb80();
   input += synapse0x357cbc0();
   input += synapse0x357cc00();
   input += synapse0x357cc40();
   input += synapse0x357cc80();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357c2f0() {
   double input = input0x357c2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357ccc0() {
   double input = -0.490564;
   input += synapse0x357d000();
   input += synapse0x357d040();
   input += synapse0x357d080();
   input += synapse0x357d0c0();
   input += synapse0x357d100();
   input += synapse0x357d140();
   input += synapse0x357d180();
   input += synapse0x357d1c0();
   input += synapse0x357d200();
   input += synapse0x357d240();
   input += synapse0x357d280();
   input += synapse0x357d2c0();
   input += synapse0x357d300();
   input += synapse0x357d340();
   input += synapse0x357d380();
   input += synapse0x357d3c0();
   input += synapse0x357ce50();
   input += synapse0x357ce90();
   input += synapse0x357d510();
   input += synapse0x357d550();
   input += synapse0x357d590();
   input += synapse0x357d5d0();
   input += synapse0x357d610();
   input += synapse0x357d650();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357ccc0() {
   double input = input0x357ccc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357d690() {
   double input = -0.612779;
   input += synapse0x357d9d0();
   input += synapse0x357da10();
   input += synapse0x357da50();
   input += synapse0x357da90();
   input += synapse0x357dad0();
   input += synapse0x357db10();
   input += synapse0x357db50();
   input += synapse0x357db90();
   input += synapse0x357dbd0();
   input += synapse0x357dc10();
   input += synapse0x357dc50();
   input += synapse0x357dc90();
   input += synapse0x357dcd0();
   input += synapse0x357dd10();
   input += synapse0x357dd50();
   input += synapse0x357dd90();
   input += synapse0x357d820();
   input += synapse0x357d860();
   input += synapse0x357dee0();
   input += synapse0x357df20();
   input += synapse0x357df60();
   input += synapse0x357dfa0();
   input += synapse0x357dfe0();
   input += synapse0x357e020();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357d690() {
   double input = input0x357d690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357e060() {
   double input = -1.52361;
   input += synapse0x357e3a0();
   input += synapse0x357e3e0();
   input += synapse0x357e420();
   input += synapse0x357e460();
   input += synapse0x357e4a0();
   input += synapse0x357e4e0();
   input += synapse0x357e520();
   input += synapse0x357e560();
   input += synapse0x357e5a0();
   input += synapse0x357e5e0();
   input += synapse0x357e620();
   input += synapse0x357e660();
   input += synapse0x357e6a0();
   input += synapse0x357e6e0();
   input += synapse0x357e720();
   input += synapse0x357e760();
   input += synapse0x357e1f0();
   input += synapse0x357e230();
   input += synapse0x357e8b0();
   input += synapse0x357e8f0();
   input += synapse0x357e930();
   input += synapse0x357e970();
   input += synapse0x357e9b0();
   input += synapse0x357e9f0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357e060() {
   double input = input0x357e060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357ea30() {
   double input = 0.681321;
   input += synapse0x35674a0();
   input += synapse0x35674e0();
   input += synapse0x3567520();
   input += synapse0x3567560();
   input += synapse0x35675a0();
   input += synapse0x35675e0();
   input += synapse0x3567620();
   input += synapse0x3567660();
   input += synapse0x357f180();
   input += synapse0x357f1c0();
   input += synapse0x357f200();
   input += synapse0x357f240();
   input += synapse0x357f280();
   input += synapse0x357f2c0();
   input += synapse0x357f300();
   input += synapse0x357f340();
   input += synapse0x357ebc0();
   input += synapse0x357ec00();
   input += synapse0x357f490();
   input += synapse0x357f4d0();
   input += synapse0x357f510();
   input += synapse0x357f550();
   input += synapse0x357f590();
   input += synapse0x357f5d0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357ea30() {
   double input = input0x357ea30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357f610() {
   double input = -0.316991;
   input += synapse0x357f950();
   input += synapse0x357f990();
   input += synapse0x357f9d0();
   input += synapse0x357fa10();
   input += synapse0x357fa50();
   input += synapse0x357fa90();
   input += synapse0x357fad0();
   input += synapse0x357fb10();
   input += synapse0x357fb50();
   input += synapse0x357fb90();
   input += synapse0x357fbd0();
   input += synapse0x357fc10();
   input += synapse0x357fc50();
   input += synapse0x357fc90();
   input += synapse0x357fcd0();
   input += synapse0x357fd10();
   input += synapse0x357f7a0();
   input += synapse0x357f7e0();
   input += synapse0x357fe60();
   input += synapse0x357fea0();
   input += synapse0x357fee0();
   input += synapse0x357ff20();
   input += synapse0x357ff60();
   input += synapse0x357ffa0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357f610() {
   double input = input0x357f610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x357ffe0() {
   double input = 0.137171;
   input += synapse0x3580320();
   input += synapse0x3580360();
   input += synapse0x35803a0();
   input += synapse0x35803e0();
   input += synapse0x3580420();
   input += synapse0x3580460();
   input += synapse0x35804a0();
   input += synapse0x35804e0();
   input += synapse0x3580520();
   input += synapse0x3580560();
   input += synapse0x35805a0();
   input += synapse0x35805e0();
   input += synapse0x3580620();
   input += synapse0x3580660();
   input += synapse0x35806a0();
   input += synapse0x35806e0();
   input += synapse0x3580170();
   input += synapse0x35801b0();
   input += synapse0x3570ce0();
   input += synapse0x3570d20();
   input += synapse0x3570d60();
   input += synapse0x3570da0();
   input += synapse0x3570de0();
   input += synapse0x3570e20();
   return input;
}

double NNfunction_sb_uLsR::neuron0x357ffe0() {
   double input = input0x357ffe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3570e60() {
   double input = 0.963047;
   input += synapse0x35711a0();
   input += synapse0x35711e0();
   input += synapse0x3571220();
   input += synapse0x3571260();
   input += synapse0x35712a0();
   input += synapse0x35712e0();
   input += synapse0x3571320();
   input += synapse0x3571360();
   input += synapse0x35713a0();
   input += synapse0x35713e0();
   input += synapse0x3571420();
   input += synapse0x3571460();
   input += synapse0x35714a0();
   input += synapse0x35714e0();
   input += synapse0x3571520();
   input += synapse0x3571560();
   input += synapse0x3570ff0();
   input += synapse0x3571030();
   input += synapse0x35716b0();
   input += synapse0x35716f0();
   input += synapse0x3571730();
   input += synapse0x3571770();
   input += synapse0x35717b0();
   input += synapse0x35717f0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3570e60() {
   double input = input0x3570e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3571830() {
   double input = 1.36063;
   input += synapse0x3571b70();
   input += synapse0x3571bb0();
   input += synapse0x3571bf0();
   input += synapse0x3571c30();
   input += synapse0x3571c70();
   input += synapse0x3571cb0();
   input += synapse0x3571cf0();
   input += synapse0x3571d30();
   input += synapse0x3571d70();
   input += synapse0x3571db0();
   input += synapse0x3571df0();
   input += synapse0x3571e30();
   input += synapse0x3571e70();
   input += synapse0x3571eb0();
   input += synapse0x3571ef0();
   input += synapse0x3571f30();
   input += synapse0x35719c0();
   input += synapse0x3571a00();
   input += synapse0x3572080();
   input += synapse0x35720c0();
   input += synapse0x3572100();
   input += synapse0x3572140();
   input += synapse0x3572180();
   input += synapse0x35721c0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3571830() {
   double input = input0x3571830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3572200() {
   double input = -1.93609;
   input += synapse0x3572540();
   input += synapse0x3572580();
   input += synapse0x35725c0();
   input += synapse0x3572600();
   input += synapse0x3572640();
   input += synapse0x3572680();
   input += synapse0x35726c0();
   input += synapse0x3572700();
   input += synapse0x3572740();
   input += synapse0x3572780();
   input += synapse0x35727c0();
   input += synapse0x3572800();
   input += synapse0x3572840();
   input += synapse0x3572880();
   input += synapse0x35728c0();
   input += synapse0x3572900();
   input += synapse0x3572390();
   input += synapse0x35723d0();
   input += synapse0x3572a50();
   input += synapse0x3572a90();
   input += synapse0x3572ad0();
   input += synapse0x3572b10();
   input += synapse0x3572b50();
   input += synapse0x3572b90();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3572200() {
   double input = input0x3572200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3584840() {
   double input = 0.512879;
   input += synapse0x3584a60();
   input += synapse0x3584aa0();
   input += synapse0x3584ae0();
   input += synapse0x3584b20();
   input += synapse0x3584b60();
   input += synapse0x3584ba0();
   input += synapse0x3584be0();
   input += synapse0x3584c20();
   input += synapse0x3584c60();
   input += synapse0x3584ca0();
   input += synapse0x3584ce0();
   input += synapse0x3584d20();
   input += synapse0x3584d60();
   input += synapse0x3584da0();
   input += synapse0x3584de0();
   input += synapse0x3584e20();
   input += synapse0x3572bd0();
   input += synapse0x3572c10();
   input += synapse0x3584f70();
   input += synapse0x3584fb0();
   input += synapse0x3584ff0();
   input += synapse0x3585030();
   input += synapse0x3585070();
   input += synapse0x35850b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3584840() {
   double input = input0x3584840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x35850f0() {
   double input = 1.07456;
   input += synapse0x3585430();
   input += synapse0x3585470();
   input += synapse0x35854b0();
   input += synapse0x35854f0();
   input += synapse0x3585530();
   input += synapse0x3585570();
   input += synapse0x35855b0();
   input += synapse0x35855f0();
   input += synapse0x3585630();
   input += synapse0x3585670();
   input += synapse0x35856b0();
   input += synapse0x35856f0();
   input += synapse0x3585730();
   input += synapse0x3585770();
   input += synapse0x35857b0();
   input += synapse0x35857f0();
   input += synapse0x3585280();
   input += synapse0x35852c0();
   input += synapse0x3585940();
   input += synapse0x3585980();
   input += synapse0x35859c0();
   input += synapse0x3585a00();
   input += synapse0x3585a40();
   input += synapse0x3585a80();
   return input;
}

double NNfunction_sb_uLsR::neuron0x35850f0() {
   double input = input0x35850f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3585ac0() {
   double input = 1.82615;
   input += synapse0x3585e00();
   input += synapse0x3585e40();
   input += synapse0x3585e80();
   input += synapse0x3585ec0();
   input += synapse0x3585f00();
   input += synapse0x3585f40();
   input += synapse0x3585f80();
   input += synapse0x3585fc0();
   input += synapse0x3586000();
   input += synapse0x3586040();
   input += synapse0x3586080();
   input += synapse0x35860c0();
   input += synapse0x3586100();
   input += synapse0x3586140();
   input += synapse0x3586180();
   input += synapse0x35861c0();
   input += synapse0x3585c50();
   input += synapse0x3585c90();
   input += synapse0x3586310();
   input += synapse0x3586350();
   input += synapse0x3586390();
   input += synapse0x35863d0();
   input += synapse0x3586410();
   input += synapse0x3586450();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3585ac0() {
   double input = input0x3585ac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3586490() {
   double input = -0.527354;
   input += synapse0x35867d0();
   input += synapse0x3586810();
   input += synapse0x3586850();
   input += synapse0x3586890();
   input += synapse0x35868d0();
   input += synapse0x3586910();
   input += synapse0x3586950();
   input += synapse0x3586990();
   input += synapse0x35869d0();
   input += synapse0x3586a10();
   input += synapse0x3586a50();
   input += synapse0x3586a90();
   input += synapse0x3586ad0();
   input += synapse0x3586b10();
   input += synapse0x3586b50();
   input += synapse0x3586b90();
   input += synapse0x3586620();
   input += synapse0x3586660();
   input += synapse0x3586ce0();
   input += synapse0x3586d20();
   input += synapse0x3586d60();
   input += synapse0x3586da0();
   input += synapse0x3586de0();
   input += synapse0x3586e20();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3586490() {
   double input = input0x3586490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x358d690() {
   double input = -0.235899;
   input += synapse0x3326d30();
   input += synapse0x3326d70();
   input += synapse0x35648d0();
   input += synapse0x3564910();
   input += synapse0x35652a0();
   input += synapse0x35652e0();
   input += synapse0x3566070();
   input += synapse0x35660b0();
   input += synapse0x3566a40();
   input += synapse0x3566a80();
   input += synapse0x3567410();
   input += synapse0x3567450();
   input += synapse0x3567ef0();
   input += synapse0x3567f30();
   input += synapse0x35688c0();
   input += synapse0x3568900();
   input += synapse0x35659a0();
   input += synapse0x35659e0();
   input += synapse0x356a470();
   input += synapse0x356a4b0();
   input += synapse0x356ae40();
   input += synapse0x356ae80();
   input += synapse0x356b810();
   input += synapse0x356b850();
   input += synapse0x356c1e0();
   input += synapse0x356c220();
   input += synapse0x3560380();
   input += synapse0x35603c0();
   input += synapse0x356e2d0();
   input += synapse0x356e310();
   input += synapse0x356eca0();
   input += synapse0x356ece0();
   input += synapse0x356f670();
   input += synapse0x356f6b0();
   input += synapse0x3570040();
   input += synapse0x3570080();
   input += synapse0x3570a10();
   input += synapse0x3570a50();
   input += synapse0x3569560();
   input += synapse0x35695a0();
   input += synapse0x3572e10();
   input += synapse0x3572e50();
   input += synapse0x35737a0();
   input += synapse0x35737e0();
   input += synapse0x3574170();
   input += synapse0x35741b0();
   input += synapse0x3574b40();
   input += synapse0x3574b80();
   input += synapse0x3575510();
   input += synapse0x3575550();
   return input;
}

double NNfunction_sb_uLsR::neuron0x358d690() {
   double input = input0x358d690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x358da30() {
   double input = 0.765575;
   input += synapse0x3577c50();
   input += synapse0x3577c90();
   input += synapse0x356d210();
   input += synapse0x356d250();
   input += synapse0x357a830();
   input += synapse0x357a870();
   input += synapse0x357b200();
   input += synapse0x357b240();
   input += synapse0x357bbd0();
   input += synapse0x357bc10();
   input += synapse0x357c5a0();
   input += synapse0x357c5e0();
   input += synapse0x357cf70();
   input += synapse0x357cfb0();
   input += synapse0x357d940();
   input += synapse0x357d980();
   input += synapse0x357e310();
   input += synapse0x357e350();
   input += synapse0x357ece0();
   input += synapse0x357ed20();
   input += synapse0x357f8c0();
   input += synapse0x357f900();
   input += synapse0x3580290();
   input += synapse0x35802d0();
   input += synapse0x3571110();
   input += synapse0x3571150();
   input += synapse0x3571ae0();
   input += synapse0x3571b20();
   input += synapse0x35724b0();
   input += synapse0x35724f0();
   input += synapse0x35849d0();
   input += synapse0x3584a10();
   input += synapse0x35853a0();
   input += synapse0x35853e0();
   input += synapse0x3585d70();
   input += synapse0x3585db0();
   input += synapse0x3586740();
   input += synapse0x3586780();
   input += synapse0x3562630();
   input += synapse0x3562670();
   input += synapse0x3575ee0();
   input += synapse0x3575f20();
   input += synapse0x3586e60();
   input += synapse0x3586ea0();
   input += synapse0x3586ee0();
   input += synapse0x3586f20();
   input += synapse0x358ddd0();
   input += synapse0x358de10();
   input += synapse0x358de50();
   input += synapse0x358de90();
   return input;
}

double NNfunction_sb_uLsR::neuron0x358da30() {
   double input = input0x358da30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x358ded0() {
   double input = 0.547954;
   input += synapse0x358e210();
   input += synapse0x358e250();
   input += synapse0x358e290();
   input += synapse0x358e2d0();
   input += synapse0x358e310();
   input += synapse0x358e350();
   input += synapse0x358e390();
   input += synapse0x358e3d0();
   input += synapse0x358e410();
   input += synapse0x358e450();
   input += synapse0x358e490();
   input += synapse0x358e4d0();
   input += synapse0x358e510();
   input += synapse0x358e550();
   input += synapse0x358e590();
   input += synapse0x358e5d0();
   input += synapse0x358e060();
   input += synapse0x358e0a0();
   input += synapse0x358e720();
   input += synapse0x358e760();
   input += synapse0x358e7a0();
   input += synapse0x358e7e0();
   input += synapse0x358e820();
   input += synapse0x358e860();
   input += synapse0x358e8a0();
   input += synapse0x358e8e0();
   input += synapse0x358e920();
   input += synapse0x358e960();
   input += synapse0x358e9a0();
   input += synapse0x358e9e0();
   input += synapse0x358ea20();
   input += synapse0x358ea60();
   input += synapse0x358e610();
   input += synapse0x358e650();
   input += synapse0x358e690();
   input += synapse0x358e6d0();
   input += synapse0x358ecb0();
   input += synapse0x358ecf0();
   input += synapse0x358ed30();
   input += synapse0x358ed70();
   input += synapse0x358edb0();
   input += synapse0x358edf0();
   input += synapse0x358ee30();
   input += synapse0x358ee70();
   input += synapse0x358eeb0();
   input += synapse0x358eef0();
   input += synapse0x358ef30();
   input += synapse0x358ef70();
   input += synapse0x358efb0();
   input += synapse0x358eff0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x358ded0() {
   double input = input0x358ded0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x358f030() {
   double input = -0.17387;
   input += synapse0x358f370();
   input += synapse0x358f3b0();
   input += synapse0x358f3f0();
   input += synapse0x358f430();
   input += synapse0x358f470();
   input += synapse0x358f4b0();
   input += synapse0x358f4f0();
   input += synapse0x358f530();
   input += synapse0x358f570();
   input += synapse0x358f5b0();
   input += synapse0x358f5f0();
   input += synapse0x358f630();
   input += synapse0x358f670();
   input += synapse0x358f6b0();
   input += synapse0x358f6f0();
   input += synapse0x358f730();
   input += synapse0x358f1c0();
   input += synapse0x358f200();
   input += synapse0x358f880();
   input += synapse0x358f8c0();
   input += synapse0x358f900();
   input += synapse0x358f940();
   input += synapse0x358f980();
   input += synapse0x358f9c0();
   input += synapse0x358fa00();
   input += synapse0x358fa40();
   input += synapse0x358fa80();
   input += synapse0x358fac0();
   input += synapse0x358fb00();
   input += synapse0x358fb40();
   input += synapse0x358fb80();
   input += synapse0x358fbc0();
   input += synapse0x358f770();
   input += synapse0x358f7b0();
   input += synapse0x358f7f0();
   input += synapse0x358f830();
   input += synapse0x358fe10();
   input += synapse0x358fe50();
   input += synapse0x358fe90();
   input += synapse0x358fed0();
   input += synapse0x358ff10();
   input += synapse0x358ff50();
   input += synapse0x358ff90();
   input += synapse0x358ffd0();
   input += synapse0x3590010();
   input += synapse0x3590050();
   input += synapse0x3590090();
   input += synapse0x35900d0();
   input += synapse0x3590110();
   input += synapse0x3590150();
   return input;
}

double NNfunction_sb_uLsR::neuron0x358f030() {
   double input = input0x358f030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x3590190() {
   double input = 0.0720466;
   input += synapse0x35904d0();
   input += synapse0x3590510();
   input += synapse0x3590550();
   input += synapse0x3590590();
   input += synapse0x35905d0();
   input += synapse0x3590610();
   input += synapse0x3590650();
   input += synapse0x3590690();
   input += synapse0x35906d0();
   input += synapse0x3590710();
   input += synapse0x3590750();
   input += synapse0x3590790();
   input += synapse0x35907d0();
   input += synapse0x3590810();
   input += synapse0x3590850();
   input += synapse0x3590890();
   input += synapse0x3590320();
   input += synapse0x3590360();
   input += synapse0x35909e0();
   input += synapse0x3590a20();
   input += synapse0x3590a60();
   input += synapse0x3590aa0();
   input += synapse0x3590ae0();
   input += synapse0x3590b20();
   input += synapse0x3590b60();
   input += synapse0x3590ba0();
   input += synapse0x3590be0();
   input += synapse0x3590c20();
   input += synapse0x3590c60();
   input += synapse0x3590ca0();
   input += synapse0x3590ce0();
   input += synapse0x3590d20();
   input += synapse0x35908d0();
   input += synapse0x3590910();
   input += synapse0x3590950();
   input += synapse0x3590990();
   input += synapse0x3590f70();
   input += synapse0x3590fb0();
   input += synapse0x3590ff0();
   input += synapse0x3591030();
   input += synapse0x3591070();
   input += synapse0x35910b0();
   input += synapse0x35910f0();
   input += synapse0x3591130();
   input += synapse0x3591170();
   input += synapse0x35911b0();
   input += synapse0x35911f0();
   input += synapse0x3591230();
   input += synapse0x3591270();
   input += synapse0x35912b0();
   return input;
}

double NNfunction_sb_uLsR::neuron0x3590190() {
   double input = input0x3590190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLsR::input0x35912f0() {
   double input = 2.5847;
   input += synapse0x3591510();
   input += synapse0x3591550();
   input += synapse0x3591590();
   input += synapse0x35915d0();
   input += synapse0x3591610();
   return input;
}

double NNfunction_sb_uLsR::neuron0x35912f0() {
   double input = input0x35912f0();
   return (input * 1)+0;
}

double NNfunction_sb_uLsR::synapse0x355d2a0() {
   return (neuron0x355d3e0()*-0.0287225);
}

double NNfunction_sb_uLsR::synapse0x355d2e0() {
   return (neuron0x355d720()*0.00766357);
}

double NNfunction_sb_uLsR::synapse0x35626c0() {
   return (neuron0x355da60()*-0.0411023);
}

double NNfunction_sb_uLsR::synapse0x3562700() {
   return (neuron0x355dda0()*0.396722);
}

double NNfunction_sb_uLsR::synapse0x3562740() {
   return (neuron0x355e0e0()*0.00874185);
}

double NNfunction_sb_uLsR::synapse0x3562780() {
   return (neuron0x355e420()*0.015353);
}

double NNfunction_sb_uLsR::synapse0x35627c0() {
   return (neuron0x355e760()*0.0261736);
}

double NNfunction_sb_uLsR::synapse0x3562800() {
   return (neuron0x355eaa0()*-0.0296557);
}

double NNfunction_sb_uLsR::synapse0x3562840() {
   return (neuron0x355ede0()*-0.00238689);
}

double NNfunction_sb_uLsR::synapse0x3562880() {
   return (neuron0x355f120()*0.0115419);
}

double NNfunction_sb_uLsR::synapse0x35628c0() {
   return (neuron0x355f460()*0.0181547);
}

double NNfunction_sb_uLsR::synapse0x3562900() {
   return (neuron0x355f7a0()*0.826312);
}

double NNfunction_sb_uLsR::synapse0x3562940() {
   return (neuron0x355fae0()*0.0165614);
}

double NNfunction_sb_uLsR::synapse0x3562980() {
   return (neuron0x355fe20()*0.0168026);
}

double NNfunction_sb_uLsR::synapse0x35629c0() {
   return (neuron0x3560160()*0.0221465);
}

double NNfunction_sb_uLsR::synapse0x3562a00() {
   return (neuron0x35604a0()*0.0105621);
}

double NNfunction_sb_uLsR::synapse0x355d210() {
   return (neuron0x35607e0()*-0.0159815);
}

double NNfunction_sb_uLsR::synapse0x355d250() {
   return (neuron0x3560d40()*0.00288512);
}

double NNfunction_sb_uLsR::synapse0x3318630() {
   return (neuron0x3560f60()*0.500412);
}

double NNfunction_sb_uLsR::synapse0x3318670() {
   return (neuron0x35612a0()*0.00756371);
}

double NNfunction_sb_uLsR::synapse0x3562c60() {
   return (neuron0x35615e0()*0.00202867);
}

double NNfunction_sb_uLsR::synapse0x3562ca0() {
   return (neuron0x3561920()*-0.0251042);
}

double NNfunction_sb_uLsR::synapse0x3562ce0() {
   return (neuron0x3561c60()*0.00134329);
}

double NNfunction_sb_uLsR::synapse0x3562d20() {
   return (neuron0x3561fa0()*-0.0100744);
}

double NNfunction_sb_uLsR::synapse0x35630a0() {
   return (neuron0x355d3e0()*0.246521);
}

double NNfunction_sb_uLsR::synapse0x35630e0() {
   return (neuron0x355d720()*0.222304);
}

double NNfunction_sb_uLsR::synapse0x3563120() {
   return (neuron0x355da60()*0.633199);
}

double NNfunction_sb_uLsR::synapse0x3563160() {
   return (neuron0x355dda0()*-0.337501);
}

double NNfunction_sb_uLsR::synapse0x35631a0() {
   return (neuron0x355e0e0()*0.0601085);
}

double NNfunction_sb_uLsR::synapse0x35631e0() {
   return (neuron0x355e420()*-0.260548);
}

double NNfunction_sb_uLsR::synapse0x3563220() {
   return (neuron0x355e760()*0.00239662);
}

double NNfunction_sb_uLsR::synapse0x3563260() {
   return (neuron0x355eaa0()*0.260787);
}

double NNfunction_sb_uLsR::synapse0x35632a0() {
   return (neuron0x355ede0()*-0.132776);
}

double NNfunction_sb_uLsR::synapse0x3562b50() {
   return (neuron0x355f120()*0.111284);
}

double NNfunction_sb_uLsR::synapse0x3562b90() {
   return (neuron0x355f460()*-0.0202913);
}

double NNfunction_sb_uLsR::synapse0x3562bd0() {
   return (neuron0x355f7a0()*0.153169);
}

double NNfunction_sb_uLsR::synapse0x3562c10() {
   return (neuron0x355fae0()*0.107148);
}

double NNfunction_sb_uLsR::synapse0x35634f0() {
   return (neuron0x355fe20()*-0.121999);
}

double NNfunction_sb_uLsR::synapse0x3563530() {
   return (neuron0x3560160()*0.0620283);
}

double NNfunction_sb_uLsR::synapse0x3563570() {
   return (neuron0x35604a0()*-0.304836);
}

double NNfunction_sb_uLsR::synapse0x3562ef0() {
   return (neuron0x35607e0()*0.229821);
}

double NNfunction_sb_uLsR::synapse0x3562f30() {
   return (neuron0x3560d40()*0.300955);
}

double NNfunction_sb_uLsR::synapse0x35636c0() {
   return (neuron0x3560f60()*0.0211688);
}

double NNfunction_sb_uLsR::synapse0x3563700() {
   return (neuron0x35612a0()*-0.132902);
}

double NNfunction_sb_uLsR::synapse0x3563740() {
   return (neuron0x35615e0()*0.283613);
}

double NNfunction_sb_uLsR::synapse0x3563780() {
   return (neuron0x3561920()*0.575161);
}

double NNfunction_sb_uLsR::synapse0x35637c0() {
   return (neuron0x3561c60()*0.36626);
}

double NNfunction_sb_uLsR::synapse0x3563800() {
   return (neuron0x3561fa0()*-0.521202);
}

double NNfunction_sb_uLsR::synapse0x3563b80() {
   return (neuron0x355d3e0()*0.324994);
}

double NNfunction_sb_uLsR::synapse0x3563bc0() {
   return (neuron0x355d720()*-0.0166754);
}

double NNfunction_sb_uLsR::synapse0x3563c00() {
   return (neuron0x355da60()*0.0613756);
}

double NNfunction_sb_uLsR::synapse0x3563c40() {
   return (neuron0x355dda0()*0.620612);
}

double NNfunction_sb_uLsR::synapse0x3563c80() {
   return (neuron0x355e0e0()*-0.0624523);
}

double NNfunction_sb_uLsR::synapse0x3563cc0() {
   return (neuron0x355e420()*-0.441198);
}

double NNfunction_sb_uLsR::synapse0x3563d00() {
   return (neuron0x355e760()*-0.355323);
}

double NNfunction_sb_uLsR::synapse0x3563d40() {
   return (neuron0x355eaa0()*0.0490071);
}

double NNfunction_sb_uLsR::synapse0x3563d80() {
   return (neuron0x355ede0()*-0.498399);
}

double NNfunction_sb_uLsR::synapse0x3563dc0() {
   return (neuron0x355f120()*-0.77409);
}

double NNfunction_sb_uLsR::synapse0x3563e00() {
   return (neuron0x355f460()*0.0918061);
}

double NNfunction_sb_uLsR::synapse0x3563e40() {
   return (neuron0x355f7a0()*0.339424);
}

double NNfunction_sb_uLsR::synapse0x3563e80() {
   return (neuron0x355fae0()*-0.521342);
}

double NNfunction_sb_uLsR::synapse0x3563ec0() {
   return (neuron0x355fe20()*0.183001);
}

double NNfunction_sb_uLsR::synapse0x3563f00() {
   return (neuron0x3560160()*-0.398387);
}

double NNfunction_sb_uLsR::synapse0x3563f40() {
   return (neuron0x35604a0()*0.275707);
}

double NNfunction_sb_uLsR::synapse0x35639d0() {
   return (neuron0x35607e0()*0.542537);
}

double NNfunction_sb_uLsR::synapse0x3563a10() {
   return (neuron0x3560d40()*0.601266);
}

double NNfunction_sb_uLsR::synapse0x3318cd0() {
   return (neuron0x3560f60()*0.28158);
}

double NNfunction_sb_uLsR::synapse0x3326540() {
   return (neuron0x35612a0()*0.476762);
}

double NNfunction_sb_uLsR::synapse0x3326580() {
   return (neuron0x35615e0()*-0.459172);
}

double NNfunction_sb_uLsR::synapse0x354c470() {
   return (neuron0x3561920()*0.206153);
}

double NNfunction_sb_uLsR::synapse0x354c4b0() {
   return (neuron0x3561c60()*0.232939);
}

double NNfunction_sb_uLsR::synapse0x354c4f0() {
   return (neuron0x3561fa0()*0.472259);
}

double NNfunction_sb_uLsR::synapse0x3326dc0() {
   return (neuron0x355d3e0()*-0.0771145);
}

double NNfunction_sb_uLsR::synapse0x3563470() {
   return (neuron0x355d720()*-0.288959);
}

double NNfunction_sb_uLsR::synapse0x35634b0() {
   return (neuron0x355da60()*0.145828);
}

double NNfunction_sb_uLsR::synapse0x3564090() {
   return (neuron0x355dda0()*0.469621);
}

double NNfunction_sb_uLsR::synapse0x35640d0() {
   return (neuron0x355e0e0()*0.155891);
}

double NNfunction_sb_uLsR::synapse0x3564110() {
   return (neuron0x355e420()*0.211993);
}

double NNfunction_sb_uLsR::synapse0x3564150() {
   return (neuron0x355e760()*-0.235409);
}

double NNfunction_sb_uLsR::synapse0x3564190() {
   return (neuron0x355eaa0()*0.226528);
}

double NNfunction_sb_uLsR::synapse0x35641d0() {
   return (neuron0x355ede0()*-0.0587015);
}

double NNfunction_sb_uLsR::synapse0x3564210() {
   return (neuron0x355f120()*0.130249);
}

double NNfunction_sb_uLsR::synapse0x3564250() {
   return (neuron0x355f460()*-0.142817);
}

double NNfunction_sb_uLsR::synapse0x3564290() {
   return (neuron0x355f7a0()*-1.26386);
}

double NNfunction_sb_uLsR::synapse0x35642d0() {
   return (neuron0x355fae0()*0.134521);
}

double NNfunction_sb_uLsR::synapse0x3564310() {
   return (neuron0x355fe20()*-0.261766);
}

double NNfunction_sb_uLsR::synapse0x3564350() {
   return (neuron0x3560160()*-0.411212);
}

double NNfunction_sb_uLsR::synapse0x3564390() {
   return (neuron0x35604a0()*-0.273337);
}

double NNfunction_sb_uLsR::synapse0x355d320() {
   return (neuron0x35607e0()*-0.105384);
}

double NNfunction_sb_uLsR::synapse0x355d360() {
   return (neuron0x3560d40()*-0.0516195);
}

double NNfunction_sb_uLsR::synapse0x355d3a0() {
   return (neuron0x3560f60()*-0.261575);
}

double NNfunction_sb_uLsR::synapse0x35644e0() {
   return (neuron0x35612a0()*0.0653957);
}

double NNfunction_sb_uLsR::synapse0x3564520() {
   return (neuron0x35615e0()*0.191629);
}

double NNfunction_sb_uLsR::synapse0x3564560() {
   return (neuron0x3561920()*-0.125272);
}

double NNfunction_sb_uLsR::synapse0x35645a0() {
   return (neuron0x3561c60()*-0.020565);
}

double NNfunction_sb_uLsR::synapse0x35645e0() {
   return (neuron0x3561fa0()*0.0512427);
}

double NNfunction_sb_uLsR::synapse0x3564960() {
   return (neuron0x355d3e0()*0.180429);
}

double NNfunction_sb_uLsR::synapse0x35649a0() {
   return (neuron0x355d720()*-0.160644);
}

double NNfunction_sb_uLsR::synapse0x35649e0() {
   return (neuron0x355da60()*0.103761);
}

double NNfunction_sb_uLsR::synapse0x3564a20() {
   return (neuron0x355dda0()*0.832871);
}

double NNfunction_sb_uLsR::synapse0x3564a60() {
   return (neuron0x355e0e0()*0.161795);
}

double NNfunction_sb_uLsR::synapse0x3564aa0() {
   return (neuron0x355e420()*-0.102337);
}

double NNfunction_sb_uLsR::synapse0x3564ae0() {
   return (neuron0x355e760()*0.300763);
}

double NNfunction_sb_uLsR::synapse0x3564b20() {
   return (neuron0x355eaa0()*0.0975329);
}

double NNfunction_sb_uLsR::synapse0x3564b60() {
   return (neuron0x355ede0()*-0.082176);
}

double NNfunction_sb_uLsR::synapse0x3564ba0() {
   return (neuron0x355f120()*-0.0110042);
}

double NNfunction_sb_uLsR::synapse0x3564be0() {
   return (neuron0x355f460()*0.126345);
}

double NNfunction_sb_uLsR::synapse0x3564c20() {
   return (neuron0x355f7a0()*1.25102);
}

double NNfunction_sb_uLsR::synapse0x3564c60() {
   return (neuron0x355fae0()*0.0498471);
}

double NNfunction_sb_uLsR::synapse0x3564ca0() {
   return (neuron0x355fe20()*0.236682);
}

double NNfunction_sb_uLsR::synapse0x3564ce0() {
   return (neuron0x3560160()*0.0168182);
}

double NNfunction_sb_uLsR::synapse0x3564d20() {
   return (neuron0x35604a0()*0.0189259);
}

double NNfunction_sb_uLsR::synapse0x35647b0() {
   return (neuron0x35607e0()*-0.02559);
}

double NNfunction_sb_uLsR::synapse0x35647f0() {
   return (neuron0x3560d40()*0.0507016);
}

double NNfunction_sb_uLsR::synapse0x3564e70() {
   return (neuron0x3560f60()*0.18311);
}

double NNfunction_sb_uLsR::synapse0x3564eb0() {
   return (neuron0x35612a0()*0.024134);
}

double NNfunction_sb_uLsR::synapse0x3564ef0() {
   return (neuron0x35615e0()*0.000656506);
}

double NNfunction_sb_uLsR::synapse0x3564f30() {
   return (neuron0x3561920()*-0.0539884);
}

double NNfunction_sb_uLsR::synapse0x3564f70() {
   return (neuron0x3561c60()*-0.0975984);
}

double NNfunction_sb_uLsR::synapse0x3564fb0() {
   return (neuron0x3561fa0()*-0.119226);
}

double NNfunction_sb_uLsR::synapse0x3565330() {
   return (neuron0x355d3e0()*0.541762);
}

double NNfunction_sb_uLsR::synapse0x3565370() {
   return (neuron0x355d720()*-0.276046);
}

double NNfunction_sb_uLsR::synapse0x35653b0() {
   return (neuron0x355da60()*0.437825);
}

double NNfunction_sb_uLsR::synapse0x35653f0() {
   return (neuron0x355dda0()*-0.573667);
}

double NNfunction_sb_uLsR::synapse0x3565430() {
   return (neuron0x355e0e0()*0.0561904);
}

double NNfunction_sb_uLsR::synapse0x3565470() {
   return (neuron0x355e420()*0.184003);
}

double NNfunction_sb_uLsR::synapse0x35654b0() {
   return (neuron0x355e760()*-0.145814);
}

double NNfunction_sb_uLsR::synapse0x35654f0() {
   return (neuron0x355eaa0()*-0.671279);
}

double NNfunction_sb_uLsR::synapse0x3565530() {
   return (neuron0x355ede0()*-0.245731);
}

double NNfunction_sb_uLsR::synapse0x3326890() {
   return (neuron0x355f120()*-0.0717506);
}

double NNfunction_sb_uLsR::synapse0x33268d0() {
   return (neuron0x355f460()*-0.12159);
}

double NNfunction_sb_uLsR::synapse0x3326910() {
   return (neuron0x355f7a0()*1.06283);
}

double NNfunction_sb_uLsR::synapse0x3326950() {
   return (neuron0x355fae0()*0.319623);
}

double NNfunction_sb_uLsR::synapse0x3326990() {
   return (neuron0x355fe20()*0.412319);
}

double NNfunction_sb_uLsR::synapse0x33269d0() {
   return (neuron0x3560160()*0.208939);
}

double NNfunction_sb_uLsR::synapse0x3326a10() {
   return (neuron0x35604a0()*0.128359);
}

double NNfunction_sb_uLsR::synapse0x3565180() {
   return (neuron0x35607e0()*0.35091);
}

double NNfunction_sb_uLsR::synapse0x35651c0() {
   return (neuron0x3560d40()*0.361629);
}

double NNfunction_sb_uLsR::synapse0x3326b60() {
   return (neuron0x3560f60()*-0.157402);
}

double NNfunction_sb_uLsR::synapse0x3326ba0() {
   return (neuron0x35612a0()*0.390031);
}

double NNfunction_sb_uLsR::synapse0x3326be0() {
   return (neuron0x35615e0()*-0.0963426);
}

double NNfunction_sb_uLsR::synapse0x3326c20() {
   return (neuron0x3561920()*-0.21615);
}

double NNfunction_sb_uLsR::synapse0x3326c60() {
   return (neuron0x3561c60()*-0.188901);
}

double NNfunction_sb_uLsR::synapse0x3565d80() {
   return (neuron0x3561fa0()*0.286508);
}

double NNfunction_sb_uLsR::synapse0x3566100() {
   return (neuron0x355d3e0()*0.0280501);
}

double NNfunction_sb_uLsR::synapse0x3566140() {
   return (neuron0x355d720()*0.0661335);
}

double NNfunction_sb_uLsR::synapse0x3566180() {
   return (neuron0x355da60()*-0.454294);
}

double NNfunction_sb_uLsR::synapse0x35661c0() {
   return (neuron0x355dda0()*-0.866896);
}

double NNfunction_sb_uLsR::synapse0x3566200() {
   return (neuron0x355e0e0()*-0.129114);
}

double NNfunction_sb_uLsR::synapse0x3566240() {
   return (neuron0x355e420()*-0.273778);
}

double NNfunction_sb_uLsR::synapse0x3566280() {
   return (neuron0x355e760()*0.070954);
}

double NNfunction_sb_uLsR::synapse0x35662c0() {
   return (neuron0x355eaa0()*-0.609051);
}

double NNfunction_sb_uLsR::synapse0x3566300() {
   return (neuron0x355ede0()*0.103639);
}

double NNfunction_sb_uLsR::synapse0x3566340() {
   return (neuron0x355f120()*0.488179);
}

double NNfunction_sb_uLsR::synapse0x3566380() {
   return (neuron0x355f460()*-0.221208);
}

double NNfunction_sb_uLsR::synapse0x35663c0() {
   return (neuron0x355f7a0()*-0.414636);
}

double NNfunction_sb_uLsR::synapse0x3566400() {
   return (neuron0x355fae0()*-0.290685);
}

double NNfunction_sb_uLsR::synapse0x3566440() {
   return (neuron0x355fe20()*-0.15335);
}

double NNfunction_sb_uLsR::synapse0x3566480() {
   return (neuron0x3560160()*0.216644);
}

double NNfunction_sb_uLsR::synapse0x35664c0() {
   return (neuron0x35604a0()*0.101814);
}

double NNfunction_sb_uLsR::synapse0x3565f50() {
   return (neuron0x35607e0()*-0.340792);
}

double NNfunction_sb_uLsR::synapse0x3565f90() {
   return (neuron0x3560d40()*-0.258958);
}

double NNfunction_sb_uLsR::synapse0x3566610() {
   return (neuron0x3560f60()*0.00641095);
}

double NNfunction_sb_uLsR::synapse0x3566650() {
   return (neuron0x35612a0()*0.394773);
}

double NNfunction_sb_uLsR::synapse0x3566690() {
   return (neuron0x35615e0()*0.103706);
}

double NNfunction_sb_uLsR::synapse0x35666d0() {
   return (neuron0x3561920()*-0.51919);
}

double NNfunction_sb_uLsR::synapse0x3566710() {
   return (neuron0x3561c60()*0.300354);
}

double NNfunction_sb_uLsR::synapse0x3566750() {
   return (neuron0x3561fa0()*-0.158927);
}

double NNfunction_sb_uLsR::synapse0x3566ad0() {
   return (neuron0x355d3e0()*-0.106736);
}

double NNfunction_sb_uLsR::synapse0x3566b10() {
   return (neuron0x355d720()*0.0815125);
}

double NNfunction_sb_uLsR::synapse0x3566b50() {
   return (neuron0x355da60()*-0.042984);
}

double NNfunction_sb_uLsR::synapse0x3566b90() {
   return (neuron0x355dda0()*-1.12389);
}

double NNfunction_sb_uLsR::synapse0x3566bd0() {
   return (neuron0x355e0e0()*0.380839);
}

double NNfunction_sb_uLsR::synapse0x3566c10() {
   return (neuron0x355e420()*0.193078);
}

double NNfunction_sb_uLsR::synapse0x3566c50() {
   return (neuron0x355e760()*0.187275);
}

double NNfunction_sb_uLsR::synapse0x3566c90() {
   return (neuron0x355eaa0()*0.208367);
}

double NNfunction_sb_uLsR::synapse0x3566cd0() {
   return (neuron0x355ede0()*0.234036);
}

double NNfunction_sb_uLsR::synapse0x3566d10() {
   return (neuron0x355f120()*-0.160882);
}

double NNfunction_sb_uLsR::synapse0x3566d50() {
   return (neuron0x355f460()*-0.0720967);
}

double NNfunction_sb_uLsR::synapse0x3566d90() {
   return (neuron0x355f7a0()*-1.02993);
}

double NNfunction_sb_uLsR::synapse0x3566dd0() {
   return (neuron0x355fae0()*-0.261905);
}

double NNfunction_sb_uLsR::synapse0x3566e10() {
   return (neuron0x355fe20()*0.200162);
}

double NNfunction_sb_uLsR::synapse0x3566e50() {
   return (neuron0x3560160()*0.160521);
}

double NNfunction_sb_uLsR::synapse0x3566e90() {
   return (neuron0x35604a0()*-0.227297);
}

double NNfunction_sb_uLsR::synapse0x3566920() {
   return (neuron0x35607e0()*-0.83447);
}

double NNfunction_sb_uLsR::synapse0x3566960() {
   return (neuron0x3560d40()*-0.249214);
}

double NNfunction_sb_uLsR::synapse0x3566fe0() {
   return (neuron0x3560f60()*-0.214799);
}

double NNfunction_sb_uLsR::synapse0x3567020() {
   return (neuron0x35612a0()*-0.259657);
}

double NNfunction_sb_uLsR::synapse0x3567060() {
   return (neuron0x35615e0()*0.491528);
}

double NNfunction_sb_uLsR::synapse0x35670a0() {
   return (neuron0x3561920()*0.599112);
}

double NNfunction_sb_uLsR::synapse0x35670e0() {
   return (neuron0x3561c60()*-0.12917);
}

double NNfunction_sb_uLsR::synapse0x3567120() {
   return (neuron0x3561fa0()*-0.0242832);
}

double NNfunction_sb_uLsR::synapse0x3560c30() {
   return (neuron0x355d3e0()*-0.132143);
}

double NNfunction_sb_uLsR::synapse0x3560c70() {
   return (neuron0x355d720()*0.114179);
}

double NNfunction_sb_uLsR::synapse0x3560cb0() {
   return (neuron0x355da60()*-0.381641);
}

double NNfunction_sb_uLsR::synapse0x3560cf0() {
   return (neuron0x355dda0()*-0.394225);
}

double NNfunction_sb_uLsR::synapse0x35676b0() {
   return (neuron0x355e0e0()*-0.196015);
}

double NNfunction_sb_uLsR::synapse0x35676f0() {
   return (neuron0x355e420()*0.135262);
}

double NNfunction_sb_uLsR::synapse0x3567730() {
   return (neuron0x355e760()*-0.00151239);
}

double NNfunction_sb_uLsR::synapse0x3567770() {
   return (neuron0x355eaa0()*-0.0551552);
}

double NNfunction_sb_uLsR::synapse0x35677b0() {
   return (neuron0x355ede0()*-0.2294);
}

double NNfunction_sb_uLsR::synapse0x35677f0() {
   return (neuron0x355f120()*-0.0512171);
}

double NNfunction_sb_uLsR::synapse0x3567830() {
   return (neuron0x355f460()*0.00142771);
}

double NNfunction_sb_uLsR::synapse0x3567870() {
   return (neuron0x355f7a0()*0.156907);
}

double NNfunction_sb_uLsR::synapse0x35678b0() {
   return (neuron0x355fae0()*-0.177439);
}

double NNfunction_sb_uLsR::synapse0x35678f0() {
   return (neuron0x355fe20()*-0.0497415);
}

double NNfunction_sb_uLsR::synapse0x3567930() {
   return (neuron0x3560160()*-0.0253278);
}

double NNfunction_sb_uLsR::synapse0x3567970() {
   return (neuron0x35604a0()*-0.656076);
}

double NNfunction_sb_uLsR::synapse0x35672f0() {
   return (neuron0x35607e0()*-0.159111);
}

double NNfunction_sb_uLsR::synapse0x3567330() {
   return (neuron0x3560d40()*-0.382339);
}

double NNfunction_sb_uLsR::synapse0x3567ac0() {
   return (neuron0x3560f60()*-0.29465);
}

double NNfunction_sb_uLsR::synapse0x3567b00() {
   return (neuron0x35612a0()*-0.0177312);
}

double NNfunction_sb_uLsR::synapse0x3567b40() {
   return (neuron0x35615e0()*0.424113);
}

double NNfunction_sb_uLsR::synapse0x3567b80() {
   return (neuron0x3561920()*0.0402334);
}

double NNfunction_sb_uLsR::synapse0x3567bc0() {
   return (neuron0x3561c60()*-0.0447616);
}

double NNfunction_sb_uLsR::synapse0x3567c00() {
   return (neuron0x3561fa0()*-0.163843);
}

double NNfunction_sb_uLsR::synapse0x3567f80() {
   return (neuron0x355d3e0()*0.194114);
}

double NNfunction_sb_uLsR::synapse0x3567fc0() {
   return (neuron0x355d720()*0.231926);
}

double NNfunction_sb_uLsR::synapse0x3568000() {
   return (neuron0x355da60()*0.704949);
}

double NNfunction_sb_uLsR::synapse0x3568040() {
   return (neuron0x355dda0()*0.582126);
}

double NNfunction_sb_uLsR::synapse0x3568080() {
   return (neuron0x355e0e0()*0.143337);
}

double NNfunction_sb_uLsR::synapse0x35680c0() {
   return (neuron0x355e420()*0.718875);
}

double NNfunction_sb_uLsR::synapse0x3568100() {
   return (neuron0x355e760()*0.317237);
}

double NNfunction_sb_uLsR::synapse0x3568140() {
   return (neuron0x355eaa0()*-0.038586);
}

double NNfunction_sb_uLsR::synapse0x3568180() {
   return (neuron0x355ede0()*0.399314);
}

double NNfunction_sb_uLsR::synapse0x35681c0() {
   return (neuron0x355f120()*-0.0693619);
}

double NNfunction_sb_uLsR::synapse0x3568200() {
   return (neuron0x355f460()*0.0912595);
}

double NNfunction_sb_uLsR::synapse0x3568240() {
   return (neuron0x355f7a0()*0.101407);
}

double NNfunction_sb_uLsR::synapse0x3568280() {
   return (neuron0x355fae0()*0.00838112);
}

double NNfunction_sb_uLsR::synapse0x35682c0() {
   return (neuron0x355fe20()*0.00400675);
}

double NNfunction_sb_uLsR::synapse0x3568300() {
   return (neuron0x3560160()*-0.137602);
}

double NNfunction_sb_uLsR::synapse0x3568340() {
   return (neuron0x35604a0()*-0.486204);
}

double NNfunction_sb_uLsR::synapse0x3567dd0() {
   return (neuron0x35607e0()*0.259185);
}

double NNfunction_sb_uLsR::synapse0x3567e10() {
   return (neuron0x3560d40()*-0.611248);
}

double NNfunction_sb_uLsR::synapse0x3568490() {
   return (neuron0x3560f60()*-0.0738343);
}

double NNfunction_sb_uLsR::synapse0x35684d0() {
   return (neuron0x35612a0()*0.0877714);
}

double NNfunction_sb_uLsR::synapse0x3568510() {
   return (neuron0x35615e0()*0.418);
}

double NNfunction_sb_uLsR::synapse0x3568550() {
   return (neuron0x3561920()*0.630275);
}

double NNfunction_sb_uLsR::synapse0x3568590() {
   return (neuron0x3561c60()*0.0772489);
}

double NNfunction_sb_uLsR::synapse0x35685d0() {
   return (neuron0x3561fa0()*0.608241);
}

double NNfunction_sb_uLsR::synapse0x3568950() {
   return (neuron0x355d3e0()*0.00127967);
}

double NNfunction_sb_uLsR::synapse0x3568990() {
   return (neuron0x355d720()*0.0131031);
}

double NNfunction_sb_uLsR::synapse0x35689d0() {
   return (neuron0x355da60()*0.00554561);
}

double NNfunction_sb_uLsR::synapse0x3568a10() {
   return (neuron0x355dda0()*3.44442);
}

double NNfunction_sb_uLsR::synapse0x3568a50() {
   return (neuron0x355e0e0()*0.0250427);
}

double NNfunction_sb_uLsR::synapse0x3568a90() {
   return (neuron0x355e420()*0.0289036);
}

double NNfunction_sb_uLsR::synapse0x3568ad0() {
   return (neuron0x355e760()*0.00498062);
}

double NNfunction_sb_uLsR::synapse0x3568b10() {
   return (neuron0x355eaa0()*-0.00944703);
}

double NNfunction_sb_uLsR::synapse0x3568b50() {
   return (neuron0x355ede0()*0.0625477);
}

double NNfunction_sb_uLsR::synapse0x3568b90() {
   return (neuron0x355f120()*-0.000150115);
}

double NNfunction_sb_uLsR::synapse0x3568bd0() {
   return (neuron0x355f460()*0.00966119);
}

double NNfunction_sb_uLsR::synapse0x3568c10() {
   return (neuron0x355f7a0()*0.13443);
}

double NNfunction_sb_uLsR::synapse0x3568c50() {
   return (neuron0x355fae0()*0.0163189);
}

double NNfunction_sb_uLsR::synapse0x3568c90() {
   return (neuron0x355fe20()*-0.0128494);
}

double NNfunction_sb_uLsR::synapse0x3568cd0() {
   return (neuron0x3560160()*0.0431905);
}

double NNfunction_sb_uLsR::synapse0x3568d10() {
   return (neuron0x35604a0()*-0.0132993);
}

double NNfunction_sb_uLsR::synapse0x35687a0() {
   return (neuron0x35607e0()*-0.0217981);
}

double NNfunction_sb_uLsR::synapse0x35687e0() {
   return (neuron0x3560d40()*-0.0407991);
}

double NNfunction_sb_uLsR::synapse0x3565570() {
   return (neuron0x3560f60()*-0.609248);
}

double NNfunction_sb_uLsR::synapse0x35655b0() {
   return (neuron0x35612a0()*-0.00880344);
}

double NNfunction_sb_uLsR::synapse0x35655f0() {
   return (neuron0x35615e0()*0.0122674);
}

double NNfunction_sb_uLsR::synapse0x3565630() {
   return (neuron0x3561920()*-0.0175184);
}

double NNfunction_sb_uLsR::synapse0x3565670() {
   return (neuron0x3561c60()*-0.00643039);
}

double NNfunction_sb_uLsR::synapse0x35656b0() {
   return (neuron0x3561fa0()*-0.00859758);
}

double NNfunction_sb_uLsR::synapse0x3565a30() {
   return (neuron0x355d3e0()*0.0190637);
}

double NNfunction_sb_uLsR::synapse0x3565a70() {
   return (neuron0x355d720()*0.0297729);
}

double NNfunction_sb_uLsR::synapse0x3565ab0() {
   return (neuron0x355da60()*-0.0632334);
}

double NNfunction_sb_uLsR::synapse0x3565af0() {
   return (neuron0x355dda0()*1.38627);
}

double NNfunction_sb_uLsR::synapse0x3565b30() {
   return (neuron0x355e0e0()*-0.0335427);
}

double NNfunction_sb_uLsR::synapse0x3565b70() {
   return (neuron0x355e420()*0.051623);
}

double NNfunction_sb_uLsR::synapse0x3565bb0() {
   return (neuron0x355e760()*-0.00249001);
}

double NNfunction_sb_uLsR::synapse0x3565bf0() {
   return (neuron0x355eaa0()*-0.0639316);
}

double NNfunction_sb_uLsR::synapse0x3565c30() {
   return (neuron0x355ede0()*-0.0267873);
}

double NNfunction_sb_uLsR::synapse0x3565c70() {
   return (neuron0x355f120()*0.00137174);
}

double NNfunction_sb_uLsR::synapse0x3565cb0() {
   return (neuron0x355f460()*0.0703686);
}

double NNfunction_sb_uLsR::synapse0x3565cf0() {
   return (neuron0x355f7a0()*0.217004);
}

double NNfunction_sb_uLsR::synapse0x3565d30() {
   return (neuron0x355fae0()*-0.0764096);
}

double NNfunction_sb_uLsR::synapse0x3569e70() {
   return (neuron0x355fe20()*-0.0717566);
}

double NNfunction_sb_uLsR::synapse0x3569eb0() {
   return (neuron0x3560160()*-0.0132771);
}

double NNfunction_sb_uLsR::synapse0x3569ef0() {
   return (neuron0x35604a0()*0.0366877);
}

double NNfunction_sb_uLsR::synapse0x3565880() {
   return (neuron0x35607e0()*-0.00437041);
}

double NNfunction_sb_uLsR::synapse0x35658c0() {
   return (neuron0x3560d40()*-0.00821659);
}

double NNfunction_sb_uLsR::synapse0x356a040() {
   return (neuron0x3560f60()*-1.47183);
}

double NNfunction_sb_uLsR::synapse0x356a080() {
   return (neuron0x35612a0()*-0.0123609);
}

double NNfunction_sb_uLsR::synapse0x356a0c0() {
   return (neuron0x35615e0()*-0.0498637);
}

double NNfunction_sb_uLsR::synapse0x356a100() {
   return (neuron0x3561920()*0.00932018);
}

double NNfunction_sb_uLsR::synapse0x356a140() {
   return (neuron0x3561c60()*-0.012797);
}

double NNfunction_sb_uLsR::synapse0x356a180() {
   return (neuron0x3561fa0()*-0.0242714);
}

double NNfunction_sb_uLsR::synapse0x356a500() {
   return (neuron0x355d3e0()*-0.016459);
}

double NNfunction_sb_uLsR::synapse0x356a540() {
   return (neuron0x355d720()*-0.00766888);
}

double NNfunction_sb_uLsR::synapse0x356a580() {
   return (neuron0x355da60()*-0.00782728);
}

double NNfunction_sb_uLsR::synapse0x356a5c0() {
   return (neuron0x355dda0()*-7.90672);
}

double NNfunction_sb_uLsR::synapse0x356a600() {
   return (neuron0x355e0e0()*-0.000636321);
}

double NNfunction_sb_uLsR::synapse0x356a640() {
   return (neuron0x355e420()*-0.0115644);
}

double NNfunction_sb_uLsR::synapse0x356a680() {
   return (neuron0x355e760()*0.00865068);
}

double NNfunction_sb_uLsR::synapse0x356a6c0() {
   return (neuron0x355eaa0()*-0.0118751);
}

double NNfunction_sb_uLsR::synapse0x356a700() {
   return (neuron0x355ede0()*0.0120328);
}

double NNfunction_sb_uLsR::synapse0x356a740() {
   return (neuron0x355f120()*0.00951674);
}

double NNfunction_sb_uLsR::synapse0x356a780() {
   return (neuron0x355f460()*-0.0181894);
}

double NNfunction_sb_uLsR::synapse0x356a7c0() {
   return (neuron0x355f7a0()*-0.311089);
}

double NNfunction_sb_uLsR::synapse0x356a800() {
   return (neuron0x355fae0()*-0.0404512);
}

double NNfunction_sb_uLsR::synapse0x356a840() {
   return (neuron0x355fe20()*0.0538849);
}

double NNfunction_sb_uLsR::synapse0x356a880() {
   return (neuron0x3560160()*-0.00470736);
}

double NNfunction_sb_uLsR::synapse0x356a8c0() {
   return (neuron0x35604a0()*0.034599);
}

double NNfunction_sb_uLsR::synapse0x356a350() {
   return (neuron0x35607e0()*0.0326205);
}

double NNfunction_sb_uLsR::synapse0x356a390() {
   return (neuron0x3560d40()*0.0148562);
}

double NNfunction_sb_uLsR::synapse0x356aa10() {
   return (neuron0x3560f60()*0.085887);
}

double NNfunction_sb_uLsR::synapse0x356aa50() {
   return (neuron0x35612a0()*-0.00671488);
}

double NNfunction_sb_uLsR::synapse0x356aa90() {
   return (neuron0x35615e0()*-0.034551);
}

double NNfunction_sb_uLsR::synapse0x356aad0() {
   return (neuron0x3561920()*-0.0082509);
}

double NNfunction_sb_uLsR::synapse0x356ab10() {
   return (neuron0x3561c60()*0.0423235);
}

double NNfunction_sb_uLsR::synapse0x356ab50() {
   return (neuron0x3561fa0()*-0.0516277);
}

double NNfunction_sb_uLsR::synapse0x356aed0() {
   return (neuron0x355d3e0()*0.0199554);
}

double NNfunction_sb_uLsR::synapse0x356af10() {
   return (neuron0x355d720()*-0.130225);
}

double NNfunction_sb_uLsR::synapse0x356af50() {
   return (neuron0x355da60()*-0.312997);
}

double NNfunction_sb_uLsR::synapse0x356af90() {
   return (neuron0x355dda0()*0.578372);
}

double NNfunction_sb_uLsR::synapse0x356afd0() {
   return (neuron0x355e0e0()*-0.0884895);
}

double NNfunction_sb_uLsR::synapse0x356b010() {
   return (neuron0x355e420()*0.229266);
}

double NNfunction_sb_uLsR::synapse0x356b050() {
   return (neuron0x355e760()*-0.0795879);
}

double NNfunction_sb_uLsR::synapse0x356b090() {
   return (neuron0x355eaa0()*0.359813);
}

double NNfunction_sb_uLsR::synapse0x356b0d0() {
   return (neuron0x355ede0()*-0.00255079);
}

double NNfunction_sb_uLsR::synapse0x356b110() {
   return (neuron0x355f120()*-0.0926551);
}

double NNfunction_sb_uLsR::synapse0x356b150() {
   return (neuron0x355f460()*-0.196066);
}

double NNfunction_sb_uLsR::synapse0x356b190() {
   return (neuron0x355f7a0()*0.125899);
}

double NNfunction_sb_uLsR::synapse0x356b1d0() {
   return (neuron0x355fae0()*-0.10345);
}

double NNfunction_sb_uLsR::synapse0x356b210() {
   return (neuron0x355fe20()*0.0324483);
}

double NNfunction_sb_uLsR::synapse0x356b250() {
   return (neuron0x3560160()*-0.287711);
}

double NNfunction_sb_uLsR::synapse0x356b290() {
   return (neuron0x35604a0()*-0.126923);
}

double NNfunction_sb_uLsR::synapse0x356ad20() {
   return (neuron0x35607e0()*-0.171731);
}

double NNfunction_sb_uLsR::synapse0x356ad60() {
   return (neuron0x3560d40()*0.216143);
}

double NNfunction_sb_uLsR::synapse0x356b3e0() {
   return (neuron0x3560f60()*0.176769);
}

double NNfunction_sb_uLsR::synapse0x356b420() {
   return (neuron0x35612a0()*0.193338);
}

double NNfunction_sb_uLsR::synapse0x356b460() {
   return (neuron0x35615e0()*0.0487288);
}

double NNfunction_sb_uLsR::synapse0x356b4a0() {
   return (neuron0x3561920()*-0.0570109);
}

double NNfunction_sb_uLsR::synapse0x356b4e0() {
   return (neuron0x3561c60()*0.0781761);
}

double NNfunction_sb_uLsR::synapse0x356b520() {
   return (neuron0x3561fa0()*-0.401551);
}

double NNfunction_sb_uLsR::synapse0x356b8a0() {
   return (neuron0x355d3e0()*-0.00103401);
}

double NNfunction_sb_uLsR::synapse0x356b8e0() {
   return (neuron0x355d720()*-0.00338417);
}

double NNfunction_sb_uLsR::synapse0x356b920() {
   return (neuron0x355da60()*0.0116042);
}

double NNfunction_sb_uLsR::synapse0x356b960() {
   return (neuron0x355dda0()*-0.239508);
}

double NNfunction_sb_uLsR::synapse0x356b9a0() {
   return (neuron0x355e0e0()*0.00989864);
}

double NNfunction_sb_uLsR::synapse0x356b9e0() {
   return (neuron0x355e420()*0.00651424);
}

double NNfunction_sb_uLsR::synapse0x356ba20() {
   return (neuron0x355e760()*0.0050865);
}

double NNfunction_sb_uLsR::synapse0x356ba60() {
   return (neuron0x355eaa0()*-0.000365485);
}

double NNfunction_sb_uLsR::synapse0x356baa0() {
   return (neuron0x355ede0()*0.0086078);
}

double NNfunction_sb_uLsR::synapse0x356bae0() {
   return (neuron0x355f120()*-0.0105048);
}

double NNfunction_sb_uLsR::synapse0x356bb20() {
   return (neuron0x355f460()*0.00249577);
}

double NNfunction_sb_uLsR::synapse0x356bb60() {
   return (neuron0x355f7a0()*-0.558768);
}

double NNfunction_sb_uLsR::synapse0x356bba0() {
   return (neuron0x355fae0()*-0.0144025);
}

double NNfunction_sb_uLsR::synapse0x356bbe0() {
   return (neuron0x355fe20()*-0.00756837);
}

double NNfunction_sb_uLsR::synapse0x356bc20() {
   return (neuron0x3560160()*-0.0140294);
}

double NNfunction_sb_uLsR::synapse0x356bc60() {
   return (neuron0x35604a0()*-0.0033822);
}

double NNfunction_sb_uLsR::synapse0x356b6f0() {
   return (neuron0x35607e0()*0.00972966);
}

double NNfunction_sb_uLsR::synapse0x356b730() {
   return (neuron0x3560d40()*-0.00641577);
}

double NNfunction_sb_uLsR::synapse0x356bdb0() {
   return (neuron0x3560f60()*-0.461242);
}

double NNfunction_sb_uLsR::synapse0x356bdf0() {
   return (neuron0x35612a0()*-0.006109);
}

double NNfunction_sb_uLsR::synapse0x356be30() {
   return (neuron0x35615e0()*-7.94468e-05);
}

double NNfunction_sb_uLsR::synapse0x356be70() {
   return (neuron0x3561920()*0.00530061);
}

double NNfunction_sb_uLsR::synapse0x356beb0() {
   return (neuron0x3561c60()*0.00484851);
}

double NNfunction_sb_uLsR::synapse0x356bef0() {
   return (neuron0x3561fa0()*-0.000539343);
}

double NNfunction_sb_uLsR::synapse0x356c270() {
   return (neuron0x355d3e0()*-0.314923);
}

double NNfunction_sb_uLsR::synapse0x355d600() {
   return (neuron0x355d720()*0.0861758);
}

double NNfunction_sb_uLsR::synapse0x355d640() {
   return (neuron0x355da60()*0.268038);
}

double NNfunction_sb_uLsR::synapse0x355d940() {
   return (neuron0x355dda0()*0.42152);
}

double NNfunction_sb_uLsR::synapse0x355d980() {
   return (neuron0x355e0e0()*-0.253593);
}

double NNfunction_sb_uLsR::synapse0x355dc80() {
   return (neuron0x355e420()*0.682981);
}

double NNfunction_sb_uLsR::synapse0x355dcc0() {
   return (neuron0x355e760()*-0.112639);
}

double NNfunction_sb_uLsR::synapse0x355dfc0() {
   return (neuron0x355eaa0()*0.213414);
}

double NNfunction_sb_uLsR::synapse0x355e000() {
   return (neuron0x355ede0()*-0.431371);
}

double NNfunction_sb_uLsR::synapse0x355e300() {
   return (neuron0x355f120()*-0.371913);
}

double NNfunction_sb_uLsR::synapse0x355e340() {
   return (neuron0x355f460()*0.040176);
}

double NNfunction_sb_uLsR::synapse0x355e640() {
   return (neuron0x355f7a0()*-0.0170861);
}

double NNfunction_sb_uLsR::synapse0x355e680() {
   return (neuron0x355fae0()*-0.11304);
}

double NNfunction_sb_uLsR::synapse0x355e980() {
   return (neuron0x355fe20()*0.727439);
}

double NNfunction_sb_uLsR::synapse0x355e9c0() {
   return (neuron0x3560160()*-0.510485);
}

double NNfunction_sb_uLsR::synapse0x355ecc0() {
   return (neuron0x35604a0()*-0.222908);
}

double NNfunction_sb_uLsR::synapse0x355ed00() {
   return (neuron0x35607e0()*0.412777);
}

double NNfunction_sb_uLsR::synapse0x355f000() {
   return (neuron0x3560d40()*0.340664);
}

double NNfunction_sb_uLsR::synapse0x355f040() {
   return (neuron0x3560f60()*0.394461);
}

double NNfunction_sb_uLsR::synapse0x355f340() {
   return (neuron0x35612a0()*0.0839172);
}

double NNfunction_sb_uLsR::synapse0x355f380() {
   return (neuron0x35615e0()*-0.744356);
}

double NNfunction_sb_uLsR::synapse0x355f680() {
   return (neuron0x3561920()*-0.259647);
}

double NNfunction_sb_uLsR::synapse0x355f6c0() {
   return (neuron0x3561c60()*0.4325);
}

double NNfunction_sb_uLsR::synapse0x355f9c0() {
   return (neuron0x3561fa0()*-0.405375);
}

double NNfunction_sb_uLsR::synapse0x355fa00() {
   return (neuron0x355d3e0()*-0.383085);
}

double NNfunction_sb_uLsR::synapse0x35606c0() {
   return (neuron0x355d720()*0.0827168);
}

double NNfunction_sb_uLsR::synapse0x3560700() {
   return (neuron0x355da60()*-1.01637);
}

double NNfunction_sb_uLsR::synapse0x356c0c0() {
   return (neuron0x355dda0()*-0.122706);
}

double NNfunction_sb_uLsR::synapse0x356c100() {
   return (neuron0x355e0e0()*0.122977);
}

double NNfunction_sb_uLsR::synapse0x3560a00() {
   return (neuron0x355e420()*0.183899);
}

double NNfunction_sb_uLsR::synapse0x3560a40() {
   return (neuron0x355e760()*0.0354324);
}

double NNfunction_sb_uLsR::synapse0x3318510() {
   return (neuron0x355eaa0()*-0.013913);
}

double NNfunction_sb_uLsR::synapse0x3318550() {
   return (neuron0x355ede0()*0.000784709);
}

double NNfunction_sb_uLsR::synapse0x3561180() {
   return (neuron0x355f120()*-0.0674255);
}

double NNfunction_sb_uLsR::synapse0x35611c0() {
   return (neuron0x355f460()*0.118426);
}

double NNfunction_sb_uLsR::synapse0x35614c0() {
   return (neuron0x355f7a0()*-0.689792);
}

double NNfunction_sb_uLsR::synapse0x3561500() {
   return (neuron0x355fae0()*-0.167867);
}

double NNfunction_sb_uLsR::synapse0x3561800() {
   return (neuron0x355fe20()*-0.111585);
}

double NNfunction_sb_uLsR::synapse0x3561840() {
   return (neuron0x3560160()*-0.0203856);
}

double NNfunction_sb_uLsR::synapse0x3561b40() {
   return (neuron0x35604a0()*-0.0341562);
}

double NNfunction_sb_uLsR::synapse0x3561b80() {
   return (neuron0x35607e0()*0.116024);
}

double NNfunction_sb_uLsR::synapse0x3561e80() {
   return (neuron0x3560d40()*-0.0170316);
}

double NNfunction_sb_uLsR::synapse0x3561ec0() {
   return (neuron0x3560f60()*-0.195092);
}

double NNfunction_sb_uLsR::synapse0x35621c0() {
   return (neuron0x35612a0()*-0.0415657);
}

double NNfunction_sb_uLsR::synapse0x3562200() {
   return (neuron0x35615e0()*-0.0795056);
}

double NNfunction_sb_uLsR::synapse0x355fd00() {
   return (neuron0x3561920()*0.191471);
}

double NNfunction_sb_uLsR::synapse0x355fd40() {
   return (neuron0x3561c60()*-0.0204282);
}

double NNfunction_sb_uLsR::synapse0x356dfe0() {
   return (neuron0x3561fa0()*0.00559368);
}

double NNfunction_sb_uLsR::synapse0x356e360() {
   return (neuron0x355d3e0()*0.272875);
}

double NNfunction_sb_uLsR::synapse0x356e3a0() {
   return (neuron0x355d720()*-0.289493);
}

double NNfunction_sb_uLsR::synapse0x356e3e0() {
   return (neuron0x355da60()*0.250922);
}

double NNfunction_sb_uLsR::synapse0x356e420() {
   return (neuron0x355dda0()*0.499762);
}

double NNfunction_sb_uLsR::synapse0x356e460() {
   return (neuron0x355e0e0()*-0.630531);
}

double NNfunction_sb_uLsR::synapse0x356e4a0() {
   return (neuron0x355e420()*-0.491287);
}

double NNfunction_sb_uLsR::synapse0x356e4e0() {
   return (neuron0x355e760()*0.309518);
}

double NNfunction_sb_uLsR::synapse0x356e520() {
   return (neuron0x355eaa0()*0.0214819);
}

double NNfunction_sb_uLsR::synapse0x356e560() {
   return (neuron0x355ede0()*0.456668);
}

double NNfunction_sb_uLsR::synapse0x356e5a0() {
   return (neuron0x355f120()*0.0204126);
}

double NNfunction_sb_uLsR::synapse0x356e5e0() {
   return (neuron0x355f460()*-0.213624);
}

double NNfunction_sb_uLsR::synapse0x356e620() {
   return (neuron0x355f7a0()*-0.16502);
}

double NNfunction_sb_uLsR::synapse0x356e660() {
   return (neuron0x355fae0()*0.462029);
}

double NNfunction_sb_uLsR::synapse0x356e6a0() {
   return (neuron0x355fe20()*0.178795);
}

double NNfunction_sb_uLsR::synapse0x356e6e0() {
   return (neuron0x3560160()*0.245702);
}

double NNfunction_sb_uLsR::synapse0x356e720() {
   return (neuron0x35604a0()*-0.076143);
}

double NNfunction_sb_uLsR::synapse0x356e1b0() {
   return (neuron0x35607e0()*0.451384);
}

double NNfunction_sb_uLsR::synapse0x356e1f0() {
   return (neuron0x3560d40()*-0.166628);
}

double NNfunction_sb_uLsR::synapse0x356e870() {
   return (neuron0x3560f60()*-1.44274);
}

double NNfunction_sb_uLsR::synapse0x356e8b0() {
   return (neuron0x35612a0()*0.184148);
}

double NNfunction_sb_uLsR::synapse0x356e8f0() {
   return (neuron0x35615e0()*0.291209);
}

double NNfunction_sb_uLsR::synapse0x356e930() {
   return (neuron0x3561920()*0.105174);
}

double NNfunction_sb_uLsR::synapse0x356e970() {
   return (neuron0x3561c60()*0.0823683);
}

double NNfunction_sb_uLsR::synapse0x356e9b0() {
   return (neuron0x3561fa0()*-0.0325771);
}

double NNfunction_sb_uLsR::synapse0x356ed30() {
   return (neuron0x355d3e0()*0.0369273);
}

double NNfunction_sb_uLsR::synapse0x356ed70() {
   return (neuron0x355d720()*-0.180764);
}

double NNfunction_sb_uLsR::synapse0x356edb0() {
   return (neuron0x355da60()*0.042685);
}

double NNfunction_sb_uLsR::synapse0x356edf0() {
   return (neuron0x355dda0()*-0.214354);
}

double NNfunction_sb_uLsR::synapse0x356ee30() {
   return (neuron0x355e0e0()*0.251093);
}

double NNfunction_sb_uLsR::synapse0x356ee70() {
   return (neuron0x355e420()*0.334956);
}

double NNfunction_sb_uLsR::synapse0x356eeb0() {
   return (neuron0x355e760()*0.0417706);
}

double NNfunction_sb_uLsR::synapse0x356eef0() {
   return (neuron0x355eaa0()*-0.169418);
}

double NNfunction_sb_uLsR::synapse0x356ef30() {
   return (neuron0x355ede0()*0.201499);
}

double NNfunction_sb_uLsR::synapse0x356ef70() {
   return (neuron0x355f120()*-0.0879902);
}

double NNfunction_sb_uLsR::synapse0x356efb0() {
   return (neuron0x355f460()*0.350816);
}

double NNfunction_sb_uLsR::synapse0x356eff0() {
   return (neuron0x355f7a0()*0.711465);
}

double NNfunction_sb_uLsR::synapse0x356f030() {
   return (neuron0x355fae0()*0.105025);
}

double NNfunction_sb_uLsR::synapse0x356f070() {
   return (neuron0x355fe20()*0.0840781);
}

double NNfunction_sb_uLsR::synapse0x356f0b0() {
   return (neuron0x3560160()*-0.18748);
}

double NNfunction_sb_uLsR::synapse0x356f0f0() {
   return (neuron0x35604a0()*-0.0888498);
}

double NNfunction_sb_uLsR::synapse0x356eb80() {
   return (neuron0x35607e0()*-0.23409);
}

double NNfunction_sb_uLsR::synapse0x356ebc0() {
   return (neuron0x3560d40()*0.161379);
}

double NNfunction_sb_uLsR::synapse0x356f240() {
   return (neuron0x3560f60()*1.2648);
}

double NNfunction_sb_uLsR::synapse0x356f280() {
   return (neuron0x35612a0()*0.0598631);
}

double NNfunction_sb_uLsR::synapse0x356f2c0() {
   return (neuron0x35615e0()*0.164498);
}

double NNfunction_sb_uLsR::synapse0x356f300() {
   return (neuron0x3561920()*-0.314778);
}

double NNfunction_sb_uLsR::synapse0x356f340() {
   return (neuron0x3561c60()*0.0575289);
}

double NNfunction_sb_uLsR::synapse0x356f380() {
   return (neuron0x3561fa0()*0.31643);
}

double NNfunction_sb_uLsR::synapse0x356f700() {
   return (neuron0x355d3e0()*0.277181);
}

double NNfunction_sb_uLsR::synapse0x356f740() {
   return (neuron0x355d720()*0.342922);
}

double NNfunction_sb_uLsR::synapse0x356f780() {
   return (neuron0x355da60()*1.55228);
}

double NNfunction_sb_uLsR::synapse0x356f7c0() {
   return (neuron0x355dda0()*-0.436088);
}

double NNfunction_sb_uLsR::synapse0x356f800() {
   return (neuron0x355e0e0()*-0.612928);
}

double NNfunction_sb_uLsR::synapse0x356f840() {
   return (neuron0x355e420()*-0.54279);
}

double NNfunction_sb_uLsR::synapse0x356f880() {
   return (neuron0x355e760()*-0.41489);
}

double NNfunction_sb_uLsR::synapse0x356f8c0() {
   return (neuron0x355eaa0()*-0.0185909);
}

double NNfunction_sb_uLsR::synapse0x356f900() {
   return (neuron0x355ede0()*0.229757);
}

double NNfunction_sb_uLsR::synapse0x356f940() {
   return (neuron0x355f120()*0.0435037);
}

double NNfunction_sb_uLsR::synapse0x356f980() {
   return (neuron0x355f460()*-0.000843759);
}

double NNfunction_sb_uLsR::synapse0x356f9c0() {
   return (neuron0x355f7a0()*-0.0924308);
}

double NNfunction_sb_uLsR::synapse0x356fa00() {
   return (neuron0x355fae0()*0.279609);
}

double NNfunction_sb_uLsR::synapse0x356fa40() {
   return (neuron0x355fe20()*-0.415607);
}

double NNfunction_sb_uLsR::synapse0x356fa80() {
   return (neuron0x3560160()*0.149459);
}

double NNfunction_sb_uLsR::synapse0x356fac0() {
   return (neuron0x35604a0()*-0.486351);
}

double NNfunction_sb_uLsR::synapse0x356f550() {
   return (neuron0x35607e0()*0.121996);
}

double NNfunction_sb_uLsR::synapse0x356f590() {
   return (neuron0x3560d40()*0.332564);
}

double NNfunction_sb_uLsR::synapse0x356fc10() {
   return (neuron0x3560f60()*-0.422835);
}

double NNfunction_sb_uLsR::synapse0x356fc50() {
   return (neuron0x35612a0()*-0.0239861);
}

double NNfunction_sb_uLsR::synapse0x356fc90() {
   return (neuron0x35615e0()*0.202167);
}

double NNfunction_sb_uLsR::synapse0x356fcd0() {
   return (neuron0x3561920()*-0.157518);
}

double NNfunction_sb_uLsR::synapse0x356fd10() {
   return (neuron0x3561c60()*-0.137384);
}

double NNfunction_sb_uLsR::synapse0x356fd50() {
   return (neuron0x3561fa0()*-0.822796);
}

double NNfunction_sb_uLsR::synapse0x35700d0() {
   return (neuron0x355d3e0()*0.0639322);
}

double NNfunction_sb_uLsR::synapse0x3570110() {
   return (neuron0x355d720()*0.331889);
}

double NNfunction_sb_uLsR::synapse0x3570150() {
   return (neuron0x355da60()*-0.0900294);
}

double NNfunction_sb_uLsR::synapse0x3570190() {
   return (neuron0x355dda0()*0.143966);
}

double NNfunction_sb_uLsR::synapse0x35701d0() {
   return (neuron0x355e0e0()*0.0666809);
}

double NNfunction_sb_uLsR::synapse0x3570210() {
   return (neuron0x355e420()*-0.109708);
}

double NNfunction_sb_uLsR::synapse0x3570250() {
   return (neuron0x355e760()*-0.0135611);
}

double NNfunction_sb_uLsR::synapse0x3570290() {
   return (neuron0x355eaa0()*-0.0888654);
}

double NNfunction_sb_uLsR::synapse0x35702d0() {
   return (neuron0x355ede0()*-0.177482);
}

double NNfunction_sb_uLsR::synapse0x3570310() {
   return (neuron0x355f120()*-0.167194);
}

double NNfunction_sb_uLsR::synapse0x3570350() {
   return (neuron0x355f460()*-0.478089);
}

double NNfunction_sb_uLsR::synapse0x3570390() {
   return (neuron0x355f7a0()*0.514923);
}

double NNfunction_sb_uLsR::synapse0x35703d0() {
   return (neuron0x355fae0()*0.612992);
}

double NNfunction_sb_uLsR::synapse0x3570410() {
   return (neuron0x355fe20()*0.546796);
}

double NNfunction_sb_uLsR::synapse0x3570450() {
   return (neuron0x3560160()*0.0774061);
}

double NNfunction_sb_uLsR::synapse0x3570490() {
   return (neuron0x35604a0()*-0.228923);
}

double NNfunction_sb_uLsR::synapse0x356ff20() {
   return (neuron0x35607e0()*-0.272344);
}

double NNfunction_sb_uLsR::synapse0x356ff60() {
   return (neuron0x3560d40()*-0.116198);
}

double NNfunction_sb_uLsR::synapse0x35705e0() {
   return (neuron0x3560f60()*-0.093268);
}

double NNfunction_sb_uLsR::synapse0x3570620() {
   return (neuron0x35612a0()*0.293612);
}

double NNfunction_sb_uLsR::synapse0x3570660() {
   return (neuron0x35615e0()*0.0640391);
}

double NNfunction_sb_uLsR::synapse0x35706a0() {
   return (neuron0x3561920()*0.0584219);
}

double NNfunction_sb_uLsR::synapse0x35706e0() {
   return (neuron0x3561c60()*0.060255);
}

double NNfunction_sb_uLsR::synapse0x3570720() {
   return (neuron0x3561fa0()*-0.00145682);
}

double NNfunction_sb_uLsR::synapse0x3570aa0() {
   return (neuron0x355d3e0()*0.413092);
}

double NNfunction_sb_uLsR::synapse0x3570ae0() {
   return (neuron0x355d720()*0.0508231);
}

double NNfunction_sb_uLsR::synapse0x3570b20() {
   return (neuron0x355da60()*-0.0539324);
}

double NNfunction_sb_uLsR::synapse0x3570b60() {
   return (neuron0x355dda0()*-0.180481);
}

double NNfunction_sb_uLsR::synapse0x3570ba0() {
   return (neuron0x355e0e0()*0.0472043);
}

double NNfunction_sb_uLsR::synapse0x3570be0() {
   return (neuron0x355e420()*-0.0713319);
}

double NNfunction_sb_uLsR::synapse0x3570c20() {
   return (neuron0x355e760()*-0.190307);
}

double NNfunction_sb_uLsR::synapse0x3570c60() {
   return (neuron0x355eaa0()*-0.307015);
}

double NNfunction_sb_uLsR::synapse0x3570ca0() {
   return (neuron0x355ede0()*-0.248972);
}

double NNfunction_sb_uLsR::synapse0x3568e60() {
   return (neuron0x355f120()*0.0939799);
}

double NNfunction_sb_uLsR::synapse0x3568ea0() {
   return (neuron0x355f460()*0.328031);
}

double NNfunction_sb_uLsR::synapse0x3568ee0() {
   return (neuron0x355f7a0()*0.633725);
}

double NNfunction_sb_uLsR::synapse0x3568f20() {
   return (neuron0x355fae0()*0.597537);
}

double NNfunction_sb_uLsR::synapse0x3568f60() {
   return (neuron0x355fe20()*0.0160725);
}

double NNfunction_sb_uLsR::synapse0x3568fa0() {
   return (neuron0x3560160()*1.86722);
}

double NNfunction_sb_uLsR::synapse0x3568fe0() {
   return (neuron0x35604a0()*0.0844391);
}

double NNfunction_sb_uLsR::synapse0x35708f0() {
   return (neuron0x35607e0()*0.000499356);
}

double NNfunction_sb_uLsR::synapse0x3570930() {
   return (neuron0x3560d40()*0.0514052);
}

double NNfunction_sb_uLsR::synapse0x3569130() {
   return (neuron0x3560f60()*-0.173974);
}

double NNfunction_sb_uLsR::synapse0x3569170() {
   return (neuron0x35612a0()*0.0599496);
}

double NNfunction_sb_uLsR::synapse0x35691b0() {
   return (neuron0x35615e0()*0.156972);
}

double NNfunction_sb_uLsR::synapse0x35691f0() {
   return (neuron0x3561920()*-0.132964);
}

double NNfunction_sb_uLsR::synapse0x3569230() {
   return (neuron0x3561c60()*-0.645194);
}

double NNfunction_sb_uLsR::synapse0x3569270() {
   return (neuron0x3561fa0()*-0.519675);
}

double NNfunction_sb_uLsR::synapse0x35695f0() {
   return (neuron0x355d3e0()*0.0417981);
}

double NNfunction_sb_uLsR::synapse0x3569630() {
   return (neuron0x355d720()*-0.0152174);
}

double NNfunction_sb_uLsR::synapse0x3569670() {
   return (neuron0x355da60()*-0.0299952);
}

double NNfunction_sb_uLsR::synapse0x35696b0() {
   return (neuron0x355dda0()*-0.510752);
}

double NNfunction_sb_uLsR::synapse0x35696f0() {
   return (neuron0x355e0e0()*0.0117231);
}

double NNfunction_sb_uLsR::synapse0x3569730() {
   return (neuron0x355e420()*0.011485);
}

double NNfunction_sb_uLsR::synapse0x3569770() {
   return (neuron0x355e760()*0.0186176);
}

double NNfunction_sb_uLsR::synapse0x35697b0() {
   return (neuron0x355eaa0()*0.0547103);
}

double NNfunction_sb_uLsR::synapse0x35697f0() {
   return (neuron0x355ede0()*0.000463642);
}

double NNfunction_sb_uLsR::synapse0x3569830() {
   return (neuron0x355f120()*0.036956);
}

double NNfunction_sb_uLsR::synapse0x3569870() {
   return (neuron0x355f460()*-0.0140894);
}

double NNfunction_sb_uLsR::synapse0x35698b0() {
   return (neuron0x355f7a0()*0.18838);
}

double NNfunction_sb_uLsR::synapse0x35698f0() {
   return (neuron0x355fae0()*0.078979);
}

double NNfunction_sb_uLsR::synapse0x3569930() {
   return (neuron0x355fe20()*0.011625);
}

double NNfunction_sb_uLsR::synapse0x3569970() {
   return (neuron0x3560160()*0.0800645);
}

double NNfunction_sb_uLsR::synapse0x35699b0() {
   return (neuron0x35604a0()*-0.0101394);
}

double NNfunction_sb_uLsR::synapse0x3569440() {
   return (neuron0x35607e0()*-0.016386);
}

double NNfunction_sb_uLsR::synapse0x3569480() {
   return (neuron0x3560d40()*0.0213563);
}

double NNfunction_sb_uLsR::synapse0x3569b00() {
   return (neuron0x3560f60()*0.0514286);
}

double NNfunction_sb_uLsR::synapse0x3569b40() {
   return (neuron0x35612a0()*-0.00149579);
}

double NNfunction_sb_uLsR::synapse0x3569b80() {
   return (neuron0x35615e0()*-0.0061068);
}

double NNfunction_sb_uLsR::synapse0x3569bc0() {
   return (neuron0x3561920()*-0.00507751);
}

double NNfunction_sb_uLsR::synapse0x3569c00() {
   return (neuron0x3561c60()*-0.00394154);
}

double NNfunction_sb_uLsR::synapse0x3569c40() {
   return (neuron0x3561fa0()*0.0171843);
}

double NNfunction_sb_uLsR::synapse0x3569e10() {
   return (neuron0x355d3e0()*0.214081);
}

double NNfunction_sb_uLsR::synapse0x3572ea0() {
   return (neuron0x355d720()*0.218111);
}

double NNfunction_sb_uLsR::synapse0x3572ee0() {
   return (neuron0x355da60()*-0.396097);
}

double NNfunction_sb_uLsR::synapse0x3572f20() {
   return (neuron0x355dda0()*-0.0954462);
}

double NNfunction_sb_uLsR::synapse0x3572f60() {
   return (neuron0x355e0e0()*0.21094);
}

double NNfunction_sb_uLsR::synapse0x3572fa0() {
   return (neuron0x355e420()*0.0963577);
}

double NNfunction_sb_uLsR::synapse0x3572fe0() {
   return (neuron0x355e760()*0.376478);
}

double NNfunction_sb_uLsR::synapse0x3573020() {
   return (neuron0x355eaa0()*-0.396872);
}

double NNfunction_sb_uLsR::synapse0x3573060() {
   return (neuron0x355ede0()*-0.0153043);
}

double NNfunction_sb_uLsR::synapse0x35730a0() {
   return (neuron0x355f120()*0.00437012);
}

double NNfunction_sb_uLsR::synapse0x35730e0() {
   return (neuron0x355f460()*0.0243391);
}

double NNfunction_sb_uLsR::synapse0x3573120() {
   return (neuron0x355f7a0()*-0.479641);
}

double NNfunction_sb_uLsR::synapse0x3573160() {
   return (neuron0x355fae0()*0.344898);
}

double NNfunction_sb_uLsR::synapse0x35731a0() {
   return (neuron0x355fe20()*-0.194948);
}

double NNfunction_sb_uLsR::synapse0x35731e0() {
   return (neuron0x3560160()*-0.64488);
}

double NNfunction_sb_uLsR::synapse0x3573220() {
   return (neuron0x35604a0()*-0.106554);
}

double NNfunction_sb_uLsR::synapse0x3572cf0() {
   return (neuron0x35607e0()*-0.256474);
}

double NNfunction_sb_uLsR::synapse0x3572d30() {
   return (neuron0x3560d40()*-0.0644627);
}

double NNfunction_sb_uLsR::synapse0x3573370() {
   return (neuron0x3560f60()*-0.278617);
}

double NNfunction_sb_uLsR::synapse0x35733b0() {
   return (neuron0x35612a0()*-0.18492);
}

double NNfunction_sb_uLsR::synapse0x35733f0() {
   return (neuron0x35615e0()*0.124311);
}

double NNfunction_sb_uLsR::synapse0x3573430() {
   return (neuron0x3561920()*0.0609881);
}

double NNfunction_sb_uLsR::synapse0x3573470() {
   return (neuron0x3561c60()*-0.0579909);
}

double NNfunction_sb_uLsR::synapse0x35734b0() {
   return (neuron0x3561fa0()*-0.301039);
}

double NNfunction_sb_uLsR::synapse0x3573830() {
   return (neuron0x355d3e0()*-0.30236);
}

double NNfunction_sb_uLsR::synapse0x3573870() {
   return (neuron0x355d720()*-0.221983);
}

double NNfunction_sb_uLsR::synapse0x35738b0() {
   return (neuron0x355da60()*0.393654);
}

double NNfunction_sb_uLsR::synapse0x35738f0() {
   return (neuron0x355dda0()*0.571131);
}

double NNfunction_sb_uLsR::synapse0x3573930() {
   return (neuron0x355e0e0()*0.451036);
}

double NNfunction_sb_uLsR::synapse0x3573970() {
   return (neuron0x355e420()*0.506894);
}

double NNfunction_sb_uLsR::synapse0x35739b0() {
   return (neuron0x355e760()*0.448213);
}

double NNfunction_sb_uLsR::synapse0x35739f0() {
   return (neuron0x355eaa0()*-0.374398);
}

double NNfunction_sb_uLsR::synapse0x3573a30() {
   return (neuron0x355ede0()*-0.691361);
}

double NNfunction_sb_uLsR::synapse0x3573a70() {
   return (neuron0x355f120()*-0.387151);
}

double NNfunction_sb_uLsR::synapse0x3573ab0() {
   return (neuron0x355f460()*0.0536893);
}

double NNfunction_sb_uLsR::synapse0x3573af0() {
   return (neuron0x355f7a0()*-0.442897);
}

double NNfunction_sb_uLsR::synapse0x3573b30() {
   return (neuron0x355fae0()*-0.0174276);
}

double NNfunction_sb_uLsR::synapse0x3573b70() {
   return (neuron0x355fe20()*0.251352);
}

double NNfunction_sb_uLsR::synapse0x3573bb0() {
   return (neuron0x3560160()*0.400806);
}

double NNfunction_sb_uLsR::synapse0x3573bf0() {
   return (neuron0x35604a0()*-0.109186);
}

double NNfunction_sb_uLsR::synapse0x3573680() {
   return (neuron0x35607e0()*-0.402204);
}

double NNfunction_sb_uLsR::synapse0x35736c0() {
   return (neuron0x3560d40()*-0.463761);
}

double NNfunction_sb_uLsR::synapse0x3573d40() {
   return (neuron0x3560f60()*0.281563);
}

double NNfunction_sb_uLsR::synapse0x3573d80() {
   return (neuron0x35612a0()*-0.00227958);
}

double NNfunction_sb_uLsR::synapse0x3573dc0() {
   return (neuron0x35615e0()*0.000232372);
}

double NNfunction_sb_uLsR::synapse0x3573e00() {
   return (neuron0x3561920()*0.722216);
}

double NNfunction_sb_uLsR::synapse0x3573e40() {
   return (neuron0x3561c60()*-0.121259);
}

double NNfunction_sb_uLsR::synapse0x3573e80() {
   return (neuron0x3561fa0()*0.0182533);
}

double NNfunction_sb_uLsR::synapse0x3574200() {
   return (neuron0x355d3e0()*0.0390599);
}

double NNfunction_sb_uLsR::synapse0x3574240() {
   return (neuron0x355d720()*0.0240193);
}

double NNfunction_sb_uLsR::synapse0x3574280() {
   return (neuron0x355da60()*0.0143508);
}

double NNfunction_sb_uLsR::synapse0x35742c0() {
   return (neuron0x355dda0()*0.816739);
}

double NNfunction_sb_uLsR::synapse0x3574300() {
   return (neuron0x355e0e0()*0.0151089);
}

double NNfunction_sb_uLsR::synapse0x3574340() {
   return (neuron0x355e420()*-0.0151745);
}

double NNfunction_sb_uLsR::synapse0x3574380() {
   return (neuron0x355e760()*0.0496186);
}

double NNfunction_sb_uLsR::synapse0x35743c0() {
   return (neuron0x355eaa0()*0.00158147);
}

double NNfunction_sb_uLsR::synapse0x3574400() {
   return (neuron0x355ede0()*-0.0316596);
}

double NNfunction_sb_uLsR::synapse0x3574440() {
   return (neuron0x355f120()*0.0759062);
}

double NNfunction_sb_uLsR::synapse0x3574480() {
   return (neuron0x355f460()*0.00306939);
}

double NNfunction_sb_uLsR::synapse0x35744c0() {
   return (neuron0x355f7a0()*0.0856004);
}

double NNfunction_sb_uLsR::synapse0x3574500() {
   return (neuron0x355fae0()*0.106313);
}

double NNfunction_sb_uLsR::synapse0x3574540() {
   return (neuron0x355fe20()*0.042664);
}

double NNfunction_sb_uLsR::synapse0x3574580() {
   return (neuron0x3560160()*0.148409);
}

double NNfunction_sb_uLsR::synapse0x35745c0() {
   return (neuron0x35604a0()*0.0457059);
}

double NNfunction_sb_uLsR::synapse0x3574050() {
   return (neuron0x35607e0()*-0.0166127);
}

double NNfunction_sb_uLsR::synapse0x3574090() {
   return (neuron0x3560d40()*0.0206296);
}

double NNfunction_sb_uLsR::synapse0x3574710() {
   return (neuron0x3560f60()*0.131419);
}

double NNfunction_sb_uLsR::synapse0x3574750() {
   return (neuron0x35612a0()*0.0130646);
}

double NNfunction_sb_uLsR::synapse0x3574790() {
   return (neuron0x35615e0()*-0.0268217);
}

double NNfunction_sb_uLsR::synapse0x35747d0() {
   return (neuron0x3561920()*-0.0552058);
}

double NNfunction_sb_uLsR::synapse0x3574810() {
   return (neuron0x3561c60()*-0.0312937);
}

double NNfunction_sb_uLsR::synapse0x3574850() {
   return (neuron0x3561fa0()*0.0106931);
}

double NNfunction_sb_uLsR::synapse0x3574bd0() {
   return (neuron0x355d3e0()*0.00354567);
}

double NNfunction_sb_uLsR::synapse0x3574c10() {
   return (neuron0x355d720()*0.197261);
}

double NNfunction_sb_uLsR::synapse0x3574c50() {
   return (neuron0x355da60()*-0.592773);
}

double NNfunction_sb_uLsR::synapse0x3574c90() {
   return (neuron0x355dda0()*-0.0283225);
}

double NNfunction_sb_uLsR::synapse0x3574cd0() {
   return (neuron0x355e0e0()*0.129124);
}

double NNfunction_sb_uLsR::synapse0x3574d10() {
   return (neuron0x355e420()*-0.284185);
}

double NNfunction_sb_uLsR::synapse0x3574d50() {
   return (neuron0x355e760()*0.0865193);
}

double NNfunction_sb_uLsR::synapse0x3574d90() {
   return (neuron0x355eaa0()*0.308854);
}

double NNfunction_sb_uLsR::synapse0x3574dd0() {
   return (neuron0x355ede0()*0.124193);
}

double NNfunction_sb_uLsR::synapse0x3574e10() {
   return (neuron0x355f120()*0.249151);
}

double NNfunction_sb_uLsR::synapse0x3574e50() {
   return (neuron0x355f460()*-0.392057);
}

double NNfunction_sb_uLsR::synapse0x3574e90() {
   return (neuron0x355f7a0()*-0.128774);
}

double NNfunction_sb_uLsR::synapse0x3574ed0() {
   return (neuron0x355fae0()*0.470781);
}

double NNfunction_sb_uLsR::synapse0x3574f10() {
   return (neuron0x355fe20()*-0.299737);
}

double NNfunction_sb_uLsR::synapse0x3574f50() {
   return (neuron0x3560160()*-0.0580915);
}

double NNfunction_sb_uLsR::synapse0x3574f90() {
   return (neuron0x35604a0()*-0.0757027);
}

double NNfunction_sb_uLsR::synapse0x3574a20() {
   return (neuron0x35607e0()*0.800625);
}

double NNfunction_sb_uLsR::synapse0x3574a60() {
   return (neuron0x3560d40()*0.311736);
}

double NNfunction_sb_uLsR::synapse0x35750e0() {
   return (neuron0x3560f60()*-0.424524);
}

double NNfunction_sb_uLsR::synapse0x3575120() {
   return (neuron0x35612a0()*0.0338123);
}

double NNfunction_sb_uLsR::synapse0x3575160() {
   return (neuron0x35615e0()*-0.0827081);
}

double NNfunction_sb_uLsR::synapse0x35751a0() {
   return (neuron0x3561920()*0.279372);
}

double NNfunction_sb_uLsR::synapse0x35751e0() {
   return (neuron0x3561c60()*-0.0839867);
}

double NNfunction_sb_uLsR::synapse0x3575220() {
   return (neuron0x3561fa0()*0.240744);
}

double NNfunction_sb_uLsR::synapse0x35755a0() {
   return (neuron0x355d3e0()*0.0317951);
}

double NNfunction_sb_uLsR::synapse0x35755e0() {
   return (neuron0x355d720()*-0.0186894);
}

double NNfunction_sb_uLsR::synapse0x3575620() {
   return (neuron0x355da60()*0.0218751);
}

double NNfunction_sb_uLsR::synapse0x3575660() {
   return (neuron0x355dda0()*0.123186);
}

double NNfunction_sb_uLsR::synapse0x35756a0() {
   return (neuron0x355e0e0()*0.0234701);
}

double NNfunction_sb_uLsR::synapse0x35756e0() {
   return (neuron0x355e420()*0.00651475);
}

double NNfunction_sb_uLsR::synapse0x3575720() {
   return (neuron0x355e760()*0.0106357);
}

double NNfunction_sb_uLsR::synapse0x3575760() {
   return (neuron0x355eaa0()*0.00999294);
}

double NNfunction_sb_uLsR::synapse0x35757a0() {
   return (neuron0x355ede0()*0.00513401);
}

double NNfunction_sb_uLsR::synapse0x35757e0() {
   return (neuron0x355f120()*0.00874744);
}

double NNfunction_sb_uLsR::synapse0x3575820() {
   return (neuron0x355f460()*0.00377279);
}

double NNfunction_sb_uLsR::synapse0x3575860() {
   return (neuron0x355f7a0()*-1.74875);
}

double NNfunction_sb_uLsR::synapse0x35758a0() {
   return (neuron0x355fae0()*-0.0164284);
}

double NNfunction_sb_uLsR::synapse0x35758e0() {
   return (neuron0x355fe20()*-0.00419246);
}

double NNfunction_sb_uLsR::synapse0x3575920() {
   return (neuron0x3560160()*0.00386955);
}

double NNfunction_sb_uLsR::synapse0x3575960() {
   return (neuron0x35604a0()*-0.000695727);
}

double NNfunction_sb_uLsR::synapse0x35753f0() {
   return (neuron0x35607e0()*-0.00426044);
}

double NNfunction_sb_uLsR::synapse0x3575430() {
   return (neuron0x3560d40()*-0.00248432);
}

double NNfunction_sb_uLsR::synapse0x3575ab0() {
   return (neuron0x3560f60()*0.300569);
}

double NNfunction_sb_uLsR::synapse0x3575af0() {
   return (neuron0x35612a0()*-0.0192304);
}

double NNfunction_sb_uLsR::synapse0x3575b30() {
   return (neuron0x35615e0()*0.00234561);
}

double NNfunction_sb_uLsR::synapse0x3575b70() {
   return (neuron0x3561920()*-0.00790603);
}

double NNfunction_sb_uLsR::synapse0x3575bb0() {
   return (neuron0x3561c60()*0.0170469);
}

double NNfunction_sb_uLsR::synapse0x3575bf0() {
   return (neuron0x3561fa0()*0.00495098);
}

double NNfunction_sb_uLsR::synapse0x3575f70() {
   return (neuron0x355d3e0()*-0.0205877);
}

double NNfunction_sb_uLsR::synapse0x3575fb0() {
   return (neuron0x355d720()*0.00669013);
}

double NNfunction_sb_uLsR::synapse0x3575ff0() {
   return (neuron0x355da60()*0.00852073);
}

double NNfunction_sb_uLsR::synapse0x3576030() {
   return (neuron0x355dda0()*4.7023);
}

double NNfunction_sb_uLsR::synapse0x3576070() {
   return (neuron0x355e0e0()*0.0525791);
}

double NNfunction_sb_uLsR::synapse0x35760b0() {
   return (neuron0x355e420()*0.0335569);
}

double NNfunction_sb_uLsR::synapse0x35760f0() {
   return (neuron0x355e760()*0.023926);
}

double NNfunction_sb_uLsR::synapse0x3576130() {
   return (neuron0x355eaa0()*-0.00494081);
}

double NNfunction_sb_uLsR::synapse0x3576170() {
   return (neuron0x355ede0()*0.0675126);
}

double NNfunction_sb_uLsR::synapse0x35761b0() {
   return (neuron0x355f120()*0.0214158);
}

double NNfunction_sb_uLsR::synapse0x35761f0() {
   return (neuron0x355f460()*0.047626);
}

double NNfunction_sb_uLsR::synapse0x3576230() {
   return (neuron0x355f7a0()*-1.00896);
}

double NNfunction_sb_uLsR::synapse0x3576270() {
   return (neuron0x355fae0()*0.0155439);
}

double NNfunction_sb_uLsR::synapse0x35762b0() {
   return (neuron0x355fe20()*-0.0313704);
}

double NNfunction_sb_uLsR::synapse0x35762f0() {
   return (neuron0x3560160()*0.00177597);
}

double NNfunction_sb_uLsR::synapse0x3576330() {
   return (neuron0x35604a0()*-0.00691811);
}

double NNfunction_sb_uLsR::synapse0x3575dc0() {
   return (neuron0x35607e0()*-0.00571009);
}

double NNfunction_sb_uLsR::synapse0x3575e00() {
   return (neuron0x3560d40()*-0.0302168);
}

double NNfunction_sb_uLsR::synapse0x3576480() {
   return (neuron0x3560f60()*0.430358);
}

double NNfunction_sb_uLsR::synapse0x35764c0() {
   return (neuron0x35612a0()*-0.00921369);
}

double NNfunction_sb_uLsR::synapse0x3576500() {
   return (neuron0x35615e0()*0.0204207);
}

double NNfunction_sb_uLsR::synapse0x3576540() {
   return (neuron0x3561920()*-0.00673056);
}

double NNfunction_sb_uLsR::synapse0x3576580() {
   return (neuron0x3561c60()*0.0340942);
}

double NNfunction_sb_uLsR::synapse0x35765c0() {
   return (neuron0x3561fa0()*0.0326453);
}

double NNfunction_sb_uLsR::synapse0x3576940() {
   return (neuron0x355d3e0()*-0.00965397);
}

double NNfunction_sb_uLsR::synapse0x3576980() {
   return (neuron0x355d720()*0.00795586);
}

double NNfunction_sb_uLsR::synapse0x35769c0() {
   return (neuron0x355da60()*0.00620812);
}

double NNfunction_sb_uLsR::synapse0x3576a00() {
   return (neuron0x355dda0()*2.16825);
}

double NNfunction_sb_uLsR::synapse0x3576a40() {
   return (neuron0x355e0e0()*0.0176241);
}

double NNfunction_sb_uLsR::synapse0x3576a80() {
   return (neuron0x355e420()*0.0229667);
}

double NNfunction_sb_uLsR::synapse0x3576ac0() {
   return (neuron0x355e760()*0.00675707);
}

double NNfunction_sb_uLsR::synapse0x3576b00() {
   return (neuron0x355eaa0()*-0.00487006);
}

double NNfunction_sb_uLsR::synapse0x3576b40() {
   return (neuron0x355ede0()*0.0431061);
}

double NNfunction_sb_uLsR::synapse0x3576b80() {
   return (neuron0x355f120()*0.0015792);
}

double NNfunction_sb_uLsR::synapse0x3576bc0() {
   return (neuron0x355f460()*0.0114484);
}

double NNfunction_sb_uLsR::synapse0x3576c00() {
   return (neuron0x355f7a0()*0.111735);
}

double NNfunction_sb_uLsR::synapse0x3576c40() {
   return (neuron0x355fae0()*-0.0233428);
}

double NNfunction_sb_uLsR::synapse0x3576c80() {
   return (neuron0x355fe20()*-0.0109931);
}

double NNfunction_sb_uLsR::synapse0x3576cc0() {
   return (neuron0x3560160()*0.00244246);
}

double NNfunction_sb_uLsR::synapse0x3576d00() {
   return (neuron0x35604a0()*-0.00369535);
}

double NNfunction_sb_uLsR::synapse0x3576790() {
   return (neuron0x35607e0()*-0.00559794);
}

double NNfunction_sb_uLsR::synapse0x35767d0() {
   return (neuron0x3560d40()*-0.0268171);
}

double NNfunction_sb_uLsR::synapse0x3576e50() {
   return (neuron0x3560f60()*0.174246);
}

double NNfunction_sb_uLsR::synapse0x3576e90() {
   return (neuron0x35612a0()*-0.0139814);
}

double NNfunction_sb_uLsR::synapse0x3576ed0() {
   return (neuron0x35615e0()*0.00577111);
}

double NNfunction_sb_uLsR::synapse0x3576f10() {
   return (neuron0x3561920()*-0.0104739);
}

double NNfunction_sb_uLsR::synapse0x3576f50() {
   return (neuron0x3561c60()*0.000343059);
}

double NNfunction_sb_uLsR::synapse0x3576f90() {
   return (neuron0x3561fa0()*-0.0107882);
}

double NNfunction_sb_uLsR::synapse0x3577310() {
   return (neuron0x355d3e0()*-0.354947);
}

double NNfunction_sb_uLsR::synapse0x3577350() {
   return (neuron0x355d720()*-0.204296);
}

double NNfunction_sb_uLsR::synapse0x3577390() {
   return (neuron0x355da60()*-0.682681);
}

double NNfunction_sb_uLsR::synapse0x35773d0() {
   return (neuron0x355dda0()*0.181906);
}

double NNfunction_sb_uLsR::synapse0x3577410() {
   return (neuron0x355e0e0()*0.308456);
}

double NNfunction_sb_uLsR::synapse0x3577450() {
   return (neuron0x355e420()*0.270463);
}

double NNfunction_sb_uLsR::synapse0x3577490() {
   return (neuron0x355e760()*0.138381);
}

double NNfunction_sb_uLsR::synapse0x35774d0() {
   return (neuron0x355eaa0()*0.0607426);
}

double NNfunction_sb_uLsR::synapse0x3577510() {
   return (neuron0x355ede0()*-0.899023);
}

double NNfunction_sb_uLsR::synapse0x3577550() {
   return (neuron0x355f120()*-0.132947);
}

double NNfunction_sb_uLsR::synapse0x3577590() {
   return (neuron0x355f460()*0.387199);
}

double NNfunction_sb_uLsR::synapse0x35775d0() {
   return (neuron0x355f7a0()*0.439878);
}

double NNfunction_sb_uLsR::synapse0x3577610() {
   return (neuron0x355fae0()*-0.320938);
}

double NNfunction_sb_uLsR::synapse0x3577650() {
   return (neuron0x355fe20()*0.18426);
}

double NNfunction_sb_uLsR::synapse0x3577690() {
   return (neuron0x3560160()*0.26973);
}

double NNfunction_sb_uLsR::synapse0x35776d0() {
   return (neuron0x35604a0()*0.309148);
}

double NNfunction_sb_uLsR::synapse0x3577160() {
   return (neuron0x35607e0()*-0.410694);
}

double NNfunction_sb_uLsR::synapse0x35771a0() {
   return (neuron0x3560d40()*0.396412);
}

double NNfunction_sb_uLsR::synapse0x3577820() {
   return (neuron0x3560f60()*0.916192);
}

double NNfunction_sb_uLsR::synapse0x3577860() {
   return (neuron0x35612a0()*-0.143314);
}

double NNfunction_sb_uLsR::synapse0x35778a0() {
   return (neuron0x35615e0()*-0.255187);
}

double NNfunction_sb_uLsR::synapse0x35778e0() {
   return (neuron0x3561920()*-0.0142489);
}

double NNfunction_sb_uLsR::synapse0x3577920() {
   return (neuron0x3561c60()*0.0855214);
}

double NNfunction_sb_uLsR::synapse0x3577960() {
   return (neuron0x3561fa0()*0.030299);
}

double NNfunction_sb_uLsR::synapse0x3577ce0() {
   return (neuron0x355d3e0()*-0.116787);
}

double NNfunction_sb_uLsR::synapse0x356c2b0() {
   return (neuron0x355d720()*-0.242385);
}

double NNfunction_sb_uLsR::synapse0x356c2f0() {
   return (neuron0x355da60()*-0.187329);
}

double NNfunction_sb_uLsR::synapse0x356c330() {
   return (neuron0x355dda0()*0.874924);
}

double NNfunction_sb_uLsR::synapse0x356c580() {
   return (neuron0x355e0e0()*-0.347622);
}

double NNfunction_sb_uLsR::synapse0x356c5c0() {
   return (neuron0x355e420()*0.318793);
}

double NNfunction_sb_uLsR::synapse0x356c600() {
   return (neuron0x355e760()*-0.170968);
}

double NNfunction_sb_uLsR::synapse0x356c850() {
   return (neuron0x355eaa0()*-0.00828045);
}

double NNfunction_sb_uLsR::synapse0x356c890() {
   return (neuron0x355ede0()*-0.156939);
}

double NNfunction_sb_uLsR::synapse0x356cae0() {
   return (neuron0x355f120()*-0.464207);
}

double NNfunction_sb_uLsR::synapse0x356cb20() {
   return (neuron0x355f460()*0.310974);
}

double NNfunction_sb_uLsR::synapse0x356cb60() {
   return (neuron0x355f7a0()*0.381393);
}

double NNfunction_sb_uLsR::synapse0x356cdb0() {
   return (neuron0x355fae0()*0.184349);
}

double NNfunction_sb_uLsR::synapse0x356cdf0() {
   return (neuron0x355fe20()*0.0172395);
}

double NNfunction_sb_uLsR::synapse0x356d040() {
   return (neuron0x3560160()*-0.0936622);
}

double NNfunction_sb_uLsR::synapse0x356d080() {
   return (neuron0x35604a0()*-0.0540794);
}

double NNfunction_sb_uLsR::synapse0x3577b30() {
   return (neuron0x35607e0()*-0.234073);
}

double NNfunction_sb_uLsR::synapse0x3577b70() {
   return (neuron0x3560d40()*-0.591454);
}

double NNfunction_sb_uLsR::synapse0x356d1d0() {
   return (neuron0x3560f60()*0.432199);
}

double NNfunction_sb_uLsR::synapse0x356d6e0() {
   return (neuron0x35612a0()*-0.368427);
}

double NNfunction_sb_uLsR::synapse0x356d720() {
   return (neuron0x35615e0()*0.176898);
}

double NNfunction_sb_uLsR::synapse0x356d760() {
   return (neuron0x3561920()*0.0152968);
}

double NNfunction_sb_uLsR::synapse0x356d9b0() {
   return (neuron0x3561c60()*0.145933);
}

double NNfunction_sb_uLsR::synapse0x356d9f0() {
   return (neuron0x3561fa0()*-0.249793);
}

double NNfunction_sb_uLsR::synapse0x356d2a0() {
   return (neuron0x355d3e0()*-0.0747686);
}

double NNfunction_sb_uLsR::synapse0x356d2e0() {
   return (neuron0x355d720()*0.439399);
}

double NNfunction_sb_uLsR::synapse0x356d320() {
   return (neuron0x355da60()*0.945946);
}

double NNfunction_sb_uLsR::synapse0x356d360() {
   return (neuron0x355dda0()*-1.04844);
}

double NNfunction_sb_uLsR::synapse0x356dce0() {
   return (neuron0x355e0e0()*0.216061);
}

double NNfunction_sb_uLsR::synapse0x357a030() {
   return (neuron0x355e420()*-0.29194);
}

double NNfunction_sb_uLsR::synapse0x357a070() {
   return (neuron0x355e760()*-0.0270922);
}

double NNfunction_sb_uLsR::synapse0x357a0b0() {
   return (neuron0x355eaa0()*0.0651776);
}

double NNfunction_sb_uLsR::synapse0x357a0f0() {
   return (neuron0x355ede0()*-0.0757616);
}

double NNfunction_sb_uLsR::synapse0x357a130() {
   return (neuron0x355f120()*0.134862);
}

double NNfunction_sb_uLsR::synapse0x357a170() {
   return (neuron0x355f460()*-0.0885242);
}

double NNfunction_sb_uLsR::synapse0x357a1b0() {
   return (neuron0x355f7a0()*-0.757488);
}

double NNfunction_sb_uLsR::synapse0x357a1f0() {
   return (neuron0x355fae0()*0.106498);
}

double NNfunction_sb_uLsR::synapse0x357a230() {
   return (neuron0x355fe20()*-0.00725347);
}

double NNfunction_sb_uLsR::synapse0x357a270() {
   return (neuron0x3560160()*0.322419);
}

double NNfunction_sb_uLsR::synapse0x357a2b0() {
   return (neuron0x35604a0()*0.269096);
}

double NNfunction_sb_uLsR::synapse0x356dbc0() {
   return (neuron0x35607e0()*0.078842);
}

double NNfunction_sb_uLsR::synapse0x356dc00() {
   return (neuron0x3560d40()*-0.0990141);
}

double NNfunction_sb_uLsR::synapse0x357a400() {
   return (neuron0x3560f60()*-1.01706);
}

double NNfunction_sb_uLsR::synapse0x357a440() {
   return (neuron0x35612a0()*0.17856);
}

double NNfunction_sb_uLsR::synapse0x357a480() {
   return (neuron0x35615e0()*-0.138702);
}

double NNfunction_sb_uLsR::synapse0x357a4c0() {
   return (neuron0x3561920()*0.0611782);
}

double NNfunction_sb_uLsR::synapse0x357a500() {
   return (neuron0x3561c60()*-0.180813);
}

double NNfunction_sb_uLsR::synapse0x357a540() {
   return (neuron0x3561fa0()*0.303679);
}

double NNfunction_sb_uLsR::synapse0x357a8c0() {
   return (neuron0x355d3e0()*-0.00870583);
}

double NNfunction_sb_uLsR::synapse0x357a900() {
   return (neuron0x355d720()*-0.0129426);
}

double NNfunction_sb_uLsR::synapse0x357a940() {
   return (neuron0x355da60()*-0.0601751);
}

double NNfunction_sb_uLsR::synapse0x357a980() {
   return (neuron0x355dda0()*3.93763);
}

double NNfunction_sb_uLsR::synapse0x357a9c0() {
   return (neuron0x355e0e0()*0.0228348);
}

double NNfunction_sb_uLsR::synapse0x357aa00() {
   return (neuron0x355e420()*0.0461064);
}

double NNfunction_sb_uLsR::synapse0x357aa40() {
   return (neuron0x355e760()*0.00819273);
}

double NNfunction_sb_uLsR::synapse0x357aa80() {
   return (neuron0x355eaa0()*0.0284931);
}

double NNfunction_sb_uLsR::synapse0x357aac0() {
   return (neuron0x355ede0()*-0.0121622);
}

double NNfunction_sb_uLsR::synapse0x357ab00() {
   return (neuron0x355f120()*-0.00533584);
}

double NNfunction_sb_uLsR::synapse0x357ab40() {
   return (neuron0x355f460()*-0.0155322);
}

double NNfunction_sb_uLsR::synapse0x357ab80() {
   return (neuron0x355f7a0()*-1.01558);
}

double NNfunction_sb_uLsR::synapse0x357abc0() {
   return (neuron0x355fae0()*-0.00501014);
}

double NNfunction_sb_uLsR::synapse0x357ac00() {
   return (neuron0x355fe20()*0.00297068);
}

double NNfunction_sb_uLsR::synapse0x357ac40() {
   return (neuron0x3560160()*0.0315672);
}

double NNfunction_sb_uLsR::synapse0x357ac80() {
   return (neuron0x35604a0()*0.038947);
}

double NNfunction_sb_uLsR::synapse0x357a710() {
   return (neuron0x35607e0()*0.0279388);
}

double NNfunction_sb_uLsR::synapse0x357a750() {
   return (neuron0x3560d40()*0.0178152);
}

double NNfunction_sb_uLsR::synapse0x357add0() {
   return (neuron0x3560f60()*-0.463032);
}

double NNfunction_sb_uLsR::synapse0x357ae10() {
   return (neuron0x35612a0()*-0.00275526);
}

double NNfunction_sb_uLsR::synapse0x357ae50() {
   return (neuron0x35615e0()*-0.00484122);
}

double NNfunction_sb_uLsR::synapse0x357ae90() {
   return (neuron0x3561920()*-0.000717973);
}

double NNfunction_sb_uLsR::synapse0x357aed0() {
   return (neuron0x3561c60()*0.0264688);
}

double NNfunction_sb_uLsR::synapse0x357af10() {
   return (neuron0x3561fa0()*-0.0423371);
}

double NNfunction_sb_uLsR::synapse0x357b290() {
   return (neuron0x355d3e0()*0.0446552);
}

double NNfunction_sb_uLsR::synapse0x357b2d0() {
   return (neuron0x355d720()*-0.0672428);
}

double NNfunction_sb_uLsR::synapse0x357b310() {
   return (neuron0x355da60()*-0.00234907);
}

double NNfunction_sb_uLsR::synapse0x357b350() {
   return (neuron0x355dda0()*-1.19152);
}

double NNfunction_sb_uLsR::synapse0x357b390() {
   return (neuron0x355e0e0()*0.0451292);
}

double NNfunction_sb_uLsR::synapse0x357b3d0() {
   return (neuron0x355e420()*0.191587);
}

double NNfunction_sb_uLsR::synapse0x357b410() {
   return (neuron0x355e760()*0.121299);
}

double NNfunction_sb_uLsR::synapse0x357b450() {
   return (neuron0x355eaa0()*0.241768);
}

double NNfunction_sb_uLsR::synapse0x357b490() {
   return (neuron0x355ede0()*0.228153);
}

double NNfunction_sb_uLsR::synapse0x357b4d0() {
   return (neuron0x355f120()*0.73142);
}

double NNfunction_sb_uLsR::synapse0x357b510() {
   return (neuron0x355f460()*0.058334);
}

double NNfunction_sb_uLsR::synapse0x357b550() {
   return (neuron0x355f7a0()*-0.201538);
}

double NNfunction_sb_uLsR::synapse0x357b590() {
   return (neuron0x355fae0()*0.25044);
}

double NNfunction_sb_uLsR::synapse0x357b5d0() {
   return (neuron0x355fe20()*-0.12514);
}

double NNfunction_sb_uLsR::synapse0x357b610() {
   return (neuron0x3560160()*0.193057);
}

double NNfunction_sb_uLsR::synapse0x357b650() {
   return (neuron0x35604a0()*-0.0788287);
}

double NNfunction_sb_uLsR::synapse0x357b0e0() {
   return (neuron0x35607e0()*-0.172616);
}

double NNfunction_sb_uLsR::synapse0x357b120() {
   return (neuron0x3560d40()*-0.129526);
}

double NNfunction_sb_uLsR::synapse0x357b7a0() {
   return (neuron0x3560f60()*-0.24235);
}

double NNfunction_sb_uLsR::synapse0x357b7e0() {
   return (neuron0x35612a0()*-0.121363);
}

double NNfunction_sb_uLsR::synapse0x357b820() {
   return (neuron0x35615e0()*0.153106);
}

double NNfunction_sb_uLsR::synapse0x357b860() {
   return (neuron0x3561920()*-0.0792768);
}

double NNfunction_sb_uLsR::synapse0x357b8a0() {
   return (neuron0x3561c60()*-0.161994);
}

double NNfunction_sb_uLsR::synapse0x357b8e0() {
   return (neuron0x3561fa0()*-0.200044);
}

double NNfunction_sb_uLsR::synapse0x357bc60() {
   return (neuron0x355d3e0()*-0.0799814);
}

double NNfunction_sb_uLsR::synapse0x357bca0() {
   return (neuron0x355d720()*-0.0129226);
}

double NNfunction_sb_uLsR::synapse0x357bce0() {
   return (neuron0x355da60()*0.0473862);
}

double NNfunction_sb_uLsR::synapse0x357bd20() {
   return (neuron0x355dda0()*-0.269446);
}

double NNfunction_sb_uLsR::synapse0x357bd60() {
   return (neuron0x355e0e0()*-0.0238496);
}

double NNfunction_sb_uLsR::synapse0x357bda0() {
   return (neuron0x355e420()*0.00587492);
}

double NNfunction_sb_uLsR::synapse0x357bde0() {
   return (neuron0x355e760()*-0.058621);
}

double NNfunction_sb_uLsR::synapse0x357be20() {
   return (neuron0x355eaa0()*-0.0393012);
}

double NNfunction_sb_uLsR::synapse0x357be60() {
   return (neuron0x355ede0()*-0.0176408);
}

double NNfunction_sb_uLsR::synapse0x357bea0() {
   return (neuron0x355f120()*-0.0112016);
}

double NNfunction_sb_uLsR::synapse0x357bee0() {
   return (neuron0x355f460()*0.0590463);
}

double NNfunction_sb_uLsR::synapse0x357bf20() {
   return (neuron0x355f7a0()*0.199694);
}

double NNfunction_sb_uLsR::synapse0x357bf60() {
   return (neuron0x355fae0()*0.282999);
}

double NNfunction_sb_uLsR::synapse0x357bfa0() {
   return (neuron0x355fe20()*-0.0761169);
}

double NNfunction_sb_uLsR::synapse0x357bfe0() {
   return (neuron0x3560160()*0.0725544);
}

double NNfunction_sb_uLsR::synapse0x357c020() {
   return (neuron0x35604a0()*0.336384);
}

double NNfunction_sb_uLsR::synapse0x357bab0() {
   return (neuron0x35607e0()*0.00958877);
}

double NNfunction_sb_uLsR::synapse0x357baf0() {
   return (neuron0x3560d40()*0.2147);
}

double NNfunction_sb_uLsR::synapse0x357c170() {
   return (neuron0x3560f60()*-0.0122397);
}

double NNfunction_sb_uLsR::synapse0x357c1b0() {
   return (neuron0x35612a0()*-0.0022296);
}

double NNfunction_sb_uLsR::synapse0x357c1f0() {
   return (neuron0x35615e0()*-0.0146305);
}

double NNfunction_sb_uLsR::synapse0x357c230() {
   return (neuron0x3561920()*0.0435223);
}

double NNfunction_sb_uLsR::synapse0x357c270() {
   return (neuron0x3561c60()*0.00109104);
}

double NNfunction_sb_uLsR::synapse0x357c2b0() {
   return (neuron0x3561fa0()*-0.011672);
}

double NNfunction_sb_uLsR::synapse0x357c630() {
   return (neuron0x355d3e0()*-0.00695043);
}

double NNfunction_sb_uLsR::synapse0x357c670() {
   return (neuron0x355d720()*0.000213112);
}

double NNfunction_sb_uLsR::synapse0x357c6b0() {
   return (neuron0x355da60()*-0.0115392);
}

double NNfunction_sb_uLsR::synapse0x357c6f0() {
   return (neuron0x355dda0()*12.9307);
}

double NNfunction_sb_uLsR::synapse0x357c730() {
   return (neuron0x355e0e0()*0.0363594);
}

double NNfunction_sb_uLsR::synapse0x357c770() {
   return (neuron0x355e420()*-0.0125916);
}

double NNfunction_sb_uLsR::synapse0x357c7b0() {
   return (neuron0x355e760()*0.0122029);
}

double NNfunction_sb_uLsR::synapse0x357c7f0() {
   return (neuron0x355eaa0()*0.0074592);
}

double NNfunction_sb_uLsR::synapse0x357c830() {
   return (neuron0x355ede0()*-0.0175704);
}

double NNfunction_sb_uLsR::synapse0x357c870() {
   return (neuron0x355f120()*0.00885083);
}

double NNfunction_sb_uLsR::synapse0x357c8b0() {
   return (neuron0x355f460()*0.0272426);
}

double NNfunction_sb_uLsR::synapse0x357c8f0() {
   return (neuron0x355f7a0()*-0.149357);
}

double NNfunction_sb_uLsR::synapse0x357c930() {
   return (neuron0x355fae0()*0.0341903);
}

double NNfunction_sb_uLsR::synapse0x357c970() {
   return (neuron0x355fe20()*-0.0179922);
}

double NNfunction_sb_uLsR::synapse0x357c9b0() {
   return (neuron0x3560160()*-0.00318997);
}

double NNfunction_sb_uLsR::synapse0x357c9f0() {
   return (neuron0x35604a0()*-0.0289914);
}

double NNfunction_sb_uLsR::synapse0x357c480() {
   return (neuron0x35607e0()*-0.0084848);
}

double NNfunction_sb_uLsR::synapse0x357c4c0() {
   return (neuron0x3560d40()*-0.0118077);
}

double NNfunction_sb_uLsR::synapse0x357cb40() {
   return (neuron0x3560f60()*-0.0421418);
}

double NNfunction_sb_uLsR::synapse0x357cb80() {
   return (neuron0x35612a0()*0.0143208);
}

double NNfunction_sb_uLsR::synapse0x357cbc0() {
   return (neuron0x35615e0()*0.0308059);
}

double NNfunction_sb_uLsR::synapse0x357cc00() {
   return (neuron0x3561920()*0.00259876);
}

double NNfunction_sb_uLsR::synapse0x357cc40() {
   return (neuron0x3561c60()*0.0113104);
}

double NNfunction_sb_uLsR::synapse0x357cc80() {
   return (neuron0x3561fa0()*0.02155);
}

double NNfunction_sb_uLsR::synapse0x357d000() {
   return (neuron0x355d3e0()*0.206439);
}

double NNfunction_sb_uLsR::synapse0x357d040() {
   return (neuron0x355d720()*-0.103763);
}

double NNfunction_sb_uLsR::synapse0x357d080() {
   return (neuron0x355da60()*0.19327);
}

double NNfunction_sb_uLsR::synapse0x357d0c0() {
   return (neuron0x355dda0()*-0.330041);
}

double NNfunction_sb_uLsR::synapse0x357d100() {
   return (neuron0x355e0e0()*0.0745418);
}

double NNfunction_sb_uLsR::synapse0x357d140() {
   return (neuron0x355e420()*-0.00643627);
}

double NNfunction_sb_uLsR::synapse0x357d180() {
   return (neuron0x355e760()*0.399003);
}

double NNfunction_sb_uLsR::synapse0x357d1c0() {
   return (neuron0x355eaa0()*0.2635);
}

double NNfunction_sb_uLsR::synapse0x357d200() {
   return (neuron0x355ede0()*-0.399737);
}

double NNfunction_sb_uLsR::synapse0x357d240() {
   return (neuron0x355f120()*-0.0852303);
}

double NNfunction_sb_uLsR::synapse0x357d280() {
   return (neuron0x355f460()*-0.0939822);
}

double NNfunction_sb_uLsR::synapse0x357d2c0() {
   return (neuron0x355f7a0()*-0.210543);
}

double NNfunction_sb_uLsR::synapse0x357d300() {
   return (neuron0x355fae0()*0.200027);
}

double NNfunction_sb_uLsR::synapse0x357d340() {
   return (neuron0x355fe20()*0.167728);
}

double NNfunction_sb_uLsR::synapse0x357d380() {
   return (neuron0x3560160()*-0.268402);
}

double NNfunction_sb_uLsR::synapse0x357d3c0() {
   return (neuron0x35604a0()*-0.139783);
}

double NNfunction_sb_uLsR::synapse0x357ce50() {
   return (neuron0x35607e0()*-0.113636);
}

double NNfunction_sb_uLsR::synapse0x357ce90() {
   return (neuron0x3560d40()*-0.0824051);
}

double NNfunction_sb_uLsR::synapse0x357d510() {
   return (neuron0x3560f60()*0.0312385);
}

double NNfunction_sb_uLsR::synapse0x357d550() {
   return (neuron0x35612a0()*0.165542);
}

double NNfunction_sb_uLsR::synapse0x357d590() {
   return (neuron0x35615e0()*-0.0394187);
}

double NNfunction_sb_uLsR::synapse0x357d5d0() {
   return (neuron0x3561920()*0.169304);
}

double NNfunction_sb_uLsR::synapse0x357d610() {
   return (neuron0x3561c60()*0.0868429);
}

double NNfunction_sb_uLsR::synapse0x357d650() {
   return (neuron0x3561fa0()*0.295301);
}

double NNfunction_sb_uLsR::synapse0x357d9d0() {
   return (neuron0x355d3e0()*-0.0671996);
}

double NNfunction_sb_uLsR::synapse0x357da10() {
   return (neuron0x355d720()*0.155798);
}

double NNfunction_sb_uLsR::synapse0x357da50() {
   return (neuron0x355da60()*0.227803);
}

double NNfunction_sb_uLsR::synapse0x357da90() {
   return (neuron0x355dda0()*-0.200643);
}

double NNfunction_sb_uLsR::synapse0x357dad0() {
   return (neuron0x355e0e0()*0.0481291);
}

double NNfunction_sb_uLsR::synapse0x357db10() {
   return (neuron0x355e420()*-0.230096);
}

double NNfunction_sb_uLsR::synapse0x357db50() {
   return (neuron0x355e760()*-0.181708);
}

double NNfunction_sb_uLsR::synapse0x357db90() {
   return (neuron0x355eaa0()*0.00380065);
}

double NNfunction_sb_uLsR::synapse0x357dbd0() {
   return (neuron0x355ede0()*-0.0965973);
}

double NNfunction_sb_uLsR::synapse0x357dc10() {
   return (neuron0x355f120()*-0.0493495);
}

double NNfunction_sb_uLsR::synapse0x357dc50() {
   return (neuron0x355f460()*0.240706);
}

double NNfunction_sb_uLsR::synapse0x357dc90() {
   return (neuron0x355f7a0()*-0.349953);
}

double NNfunction_sb_uLsR::synapse0x357dcd0() {
   return (neuron0x355fae0()*0.0754098);
}

double NNfunction_sb_uLsR::synapse0x357dd10() {
   return (neuron0x355fe20()*-0.0744134);
}

double NNfunction_sb_uLsR::synapse0x357dd50() {
   return (neuron0x3560160()*0.632616);
}

double NNfunction_sb_uLsR::synapse0x357dd90() {
   return (neuron0x35604a0()*-0.0351768);
}

double NNfunction_sb_uLsR::synapse0x357d820() {
   return (neuron0x35607e0()*-0.0793845);
}

double NNfunction_sb_uLsR::synapse0x357d860() {
   return (neuron0x3560d40()*0.208003);
}

double NNfunction_sb_uLsR::synapse0x357dee0() {
   return (neuron0x3560f60()*-0.567682);
}

double NNfunction_sb_uLsR::synapse0x357df20() {
   return (neuron0x35612a0()*0.28121);
}

double NNfunction_sb_uLsR::synapse0x357df60() {
   return (neuron0x35615e0()*-0.0620146);
}

double NNfunction_sb_uLsR::synapse0x357dfa0() {
   return (neuron0x3561920()*0.00248286);
}

double NNfunction_sb_uLsR::synapse0x357dfe0() {
   return (neuron0x3561c60()*-0.31489);
}

double NNfunction_sb_uLsR::synapse0x357e020() {
   return (neuron0x3561fa0()*-0.194223);
}

double NNfunction_sb_uLsR::synapse0x357e3a0() {
   return (neuron0x355d3e0()*0.180908);
}

double NNfunction_sb_uLsR::synapse0x357e3e0() {
   return (neuron0x355d720()*-0.115558);
}

double NNfunction_sb_uLsR::synapse0x357e420() {
   return (neuron0x355da60()*-0.153581);
}

double NNfunction_sb_uLsR::synapse0x357e460() {
   return (neuron0x355dda0()*-0.235255);
}

double NNfunction_sb_uLsR::synapse0x357e4a0() {
   return (neuron0x355e0e0()*0.0169211);
}

double NNfunction_sb_uLsR::synapse0x357e4e0() {
   return (neuron0x355e420()*0.199443);
}

double NNfunction_sb_uLsR::synapse0x357e520() {
   return (neuron0x355e760()*-0.08708);
}

double NNfunction_sb_uLsR::synapse0x357e560() {
   return (neuron0x355eaa0()*0.0676951);
}

double NNfunction_sb_uLsR::synapse0x357e5a0() {
   return (neuron0x355ede0()*0.134291);
}

double NNfunction_sb_uLsR::synapse0x357e5e0() {
   return (neuron0x355f120()*0.250125);
}

double NNfunction_sb_uLsR::synapse0x357e620() {
   return (neuron0x355f460()*0.0179962);
}

double NNfunction_sb_uLsR::synapse0x357e660() {
   return (neuron0x355f7a0()*0.377739);
}

double NNfunction_sb_uLsR::synapse0x357e6a0() {
   return (neuron0x355fae0()*0.264053);
}

double NNfunction_sb_uLsR::synapse0x357e6e0() {
   return (neuron0x355fe20()*-0.154155);
}

double NNfunction_sb_uLsR::synapse0x357e720() {
   return (neuron0x3560160()*0.227851);
}

double NNfunction_sb_uLsR::synapse0x357e760() {
   return (neuron0x35604a0()*0.00575705);
}

double NNfunction_sb_uLsR::synapse0x357e1f0() {
   return (neuron0x35607e0()*-0.497751);
}

double NNfunction_sb_uLsR::synapse0x357e230() {
   return (neuron0x3560d40()*0.147452);
}

double NNfunction_sb_uLsR::synapse0x357e8b0() {
   return (neuron0x3560f60()*-0.0593961);
}

double NNfunction_sb_uLsR::synapse0x357e8f0() {
   return (neuron0x35612a0()*-0.0249605);
}

double NNfunction_sb_uLsR::synapse0x357e930() {
   return (neuron0x35615e0()*0.397104);
}

double NNfunction_sb_uLsR::synapse0x357e970() {
   return (neuron0x3561920()*0.37359);
}

double NNfunction_sb_uLsR::synapse0x357e9b0() {
   return (neuron0x3561c60()*0.00217503);
}

double NNfunction_sb_uLsR::synapse0x357e9f0() {
   return (neuron0x3561fa0()*-0.0517955);
}

double NNfunction_sb_uLsR::synapse0x35674a0() {
   return (neuron0x355d3e0()*0.553046);
}

double NNfunction_sb_uLsR::synapse0x35674e0() {
   return (neuron0x355d720()*-0.0232196);
}

double NNfunction_sb_uLsR::synapse0x3567520() {
   return (neuron0x355da60()*-0.549049);
}

double NNfunction_sb_uLsR::synapse0x3567560() {
   return (neuron0x355dda0()*-0.373664);
}

double NNfunction_sb_uLsR::synapse0x35675a0() {
   return (neuron0x355e0e0()*0.294457);
}

double NNfunction_sb_uLsR::synapse0x35675e0() {
   return (neuron0x355e420()*-0.0102275);
}

double NNfunction_sb_uLsR::synapse0x3567620() {
   return (neuron0x355e760()*0.314403);
}

double NNfunction_sb_uLsR::synapse0x3567660() {
   return (neuron0x355eaa0()*0.114628);
}

double NNfunction_sb_uLsR::synapse0x357f180() {
   return (neuron0x355ede0()*0.463516);
}

double NNfunction_sb_uLsR::synapse0x357f1c0() {
   return (neuron0x355f120()*-0.141677);
}

double NNfunction_sb_uLsR::synapse0x357f200() {
   return (neuron0x355f460()*-0.218);
}

double NNfunction_sb_uLsR::synapse0x357f240() {
   return (neuron0x355f7a0()*-0.435461);
}

double NNfunction_sb_uLsR::synapse0x357f280() {
   return (neuron0x355fae0()*0.592568);
}

double NNfunction_sb_uLsR::synapse0x357f2c0() {
   return (neuron0x355fe20()*0.787556);
}

double NNfunction_sb_uLsR::synapse0x357f300() {
   return (neuron0x3560160()*0.761913);
}

double NNfunction_sb_uLsR::synapse0x357f340() {
   return (neuron0x35604a0()*0.088403);
}

double NNfunction_sb_uLsR::synapse0x357ebc0() {
   return (neuron0x35607e0()*0.443224);
}

double NNfunction_sb_uLsR::synapse0x357ec00() {
   return (neuron0x3560d40()*-0.16879);
}

double NNfunction_sb_uLsR::synapse0x357f490() {
   return (neuron0x3560f60()*-0.665682);
}

double NNfunction_sb_uLsR::synapse0x357f4d0() {
   return (neuron0x35612a0()*-0.269046);
}

double NNfunction_sb_uLsR::synapse0x357f510() {
   return (neuron0x35615e0()*-0.490112);
}

double NNfunction_sb_uLsR::synapse0x357f550() {
   return (neuron0x3561920()*-0.111953);
}

double NNfunction_sb_uLsR::synapse0x357f590() {
   return (neuron0x3561c60()*-0.106078);
}

double NNfunction_sb_uLsR::synapse0x357f5d0() {
   return (neuron0x3561fa0()*-0.1976);
}

double NNfunction_sb_uLsR::synapse0x357f950() {
   return (neuron0x355d3e0()*-0.00801271);
}

double NNfunction_sb_uLsR::synapse0x357f990() {
   return (neuron0x355d720()*0.0103271);
}

double NNfunction_sb_uLsR::synapse0x357f9d0() {
   return (neuron0x355da60()*0.542673);
}

double NNfunction_sb_uLsR::synapse0x357fa10() {
   return (neuron0x355dda0()*-0.975053);
}

double NNfunction_sb_uLsR::synapse0x357fa50() {
   return (neuron0x355e0e0()*-0.201185);
}

double NNfunction_sb_uLsR::synapse0x357fa90() {
   return (neuron0x355e420()*-0.0458073);
}

double NNfunction_sb_uLsR::synapse0x357fad0() {
   return (neuron0x355e760()*-0.0573711);
}

double NNfunction_sb_uLsR::synapse0x357fb10() {
   return (neuron0x355eaa0()*0.0649957);
}

double NNfunction_sb_uLsR::synapse0x357fb50() {
   return (neuron0x355ede0()*-0.307408);
}

double NNfunction_sb_uLsR::synapse0x357fb90() {
   return (neuron0x355f120()*-0.393732);
}

double NNfunction_sb_uLsR::synapse0x357fbd0() {
   return (neuron0x355f460()*0.0596906);
}

double NNfunction_sb_uLsR::synapse0x357fc10() {
   return (neuron0x355f7a0()*-0.367164);
}

double NNfunction_sb_uLsR::synapse0x357fc50() {
   return (neuron0x355fae0()*-0.133839);
}

double NNfunction_sb_uLsR::synapse0x357fc90() {
   return (neuron0x355fe20()*-0.0234186);
}

double NNfunction_sb_uLsR::synapse0x357fcd0() {
   return (neuron0x3560160()*-0.296506);
}

double NNfunction_sb_uLsR::synapse0x357fd10() {
   return (neuron0x35604a0()*0.139582);
}

double NNfunction_sb_uLsR::synapse0x357f7a0() {
   return (neuron0x35607e0()*0.0733936);
}

double NNfunction_sb_uLsR::synapse0x357f7e0() {
   return (neuron0x3560d40()*-0.138682);
}

double NNfunction_sb_uLsR::synapse0x357fe60() {
   return (neuron0x3560f60()*-0.28649);
}

double NNfunction_sb_uLsR::synapse0x357fea0() {
   return (neuron0x35612a0()*-0.0961131);
}

double NNfunction_sb_uLsR::synapse0x357fee0() {
   return (neuron0x35615e0()*-0.177832);
}

double NNfunction_sb_uLsR::synapse0x357ff20() {
   return (neuron0x3561920()*-0.32958);
}

double NNfunction_sb_uLsR::synapse0x357ff60() {
   return (neuron0x3561c60()*0.109035);
}

double NNfunction_sb_uLsR::synapse0x357ffa0() {
   return (neuron0x3561fa0()*-0.223352);
}

double NNfunction_sb_uLsR::synapse0x3580320() {
   return (neuron0x355d3e0()*0.150351);
}

double NNfunction_sb_uLsR::synapse0x3580360() {
   return (neuron0x355d720()*-0.167567);
}

double NNfunction_sb_uLsR::synapse0x35803a0() {
   return (neuron0x355da60()*-0.318658);
}

double NNfunction_sb_uLsR::synapse0x35803e0() {
   return (neuron0x355dda0()*-0.00703861);
}

double NNfunction_sb_uLsR::synapse0x3580420() {
   return (neuron0x355e0e0()*-0.287087);
}

double NNfunction_sb_uLsR::synapse0x3580460() {
   return (neuron0x355e420()*-0.0911813);
}

double NNfunction_sb_uLsR::synapse0x35804a0() {
   return (neuron0x355e760()*-0.404518);
}

double NNfunction_sb_uLsR::synapse0x35804e0() {
   return (neuron0x355eaa0()*0.0672696);
}

double NNfunction_sb_uLsR::synapse0x3580520() {
   return (neuron0x355ede0()*-0.456595);
}

double NNfunction_sb_uLsR::synapse0x3580560() {
   return (neuron0x355f120()*-0.141712);
}

double NNfunction_sb_uLsR::synapse0x35805a0() {
   return (neuron0x355f460()*0.571663);
}

double NNfunction_sb_uLsR::synapse0x35805e0() {
   return (neuron0x355f7a0()*-0.409274);
}

double NNfunction_sb_uLsR::synapse0x3580620() {
   return (neuron0x355fae0()*-0.518077);
}

double NNfunction_sb_uLsR::synapse0x3580660() {
   return (neuron0x355fe20()*0.0919959);
}

double NNfunction_sb_uLsR::synapse0x35806a0() {
   return (neuron0x3560160()*0.100237);
}

double NNfunction_sb_uLsR::synapse0x35806e0() {
   return (neuron0x35604a0()*0.472492);
}

double NNfunction_sb_uLsR::synapse0x3580170() {
   return (neuron0x35607e0()*-0.0292106);
}

double NNfunction_sb_uLsR::synapse0x35801b0() {
   return (neuron0x3560d40()*0.199127);
}

double NNfunction_sb_uLsR::synapse0x3570ce0() {
   return (neuron0x3560f60()*-0.149643);
}

double NNfunction_sb_uLsR::synapse0x3570d20() {
   return (neuron0x35612a0()*0.0554063);
}

double NNfunction_sb_uLsR::synapse0x3570d60() {
   return (neuron0x35615e0()*-0.101133);
}

double NNfunction_sb_uLsR::synapse0x3570da0() {
   return (neuron0x3561920()*0.250768);
}

double NNfunction_sb_uLsR::synapse0x3570de0() {
   return (neuron0x3561c60()*-0.33899);
}

double NNfunction_sb_uLsR::synapse0x3570e20() {
   return (neuron0x3561fa0()*0.223779);
}

double NNfunction_sb_uLsR::synapse0x35711a0() {
   return (neuron0x355d3e0()*0.234602);
}

double NNfunction_sb_uLsR::synapse0x35711e0() {
   return (neuron0x355d720()*-0.132889);
}

double NNfunction_sb_uLsR::synapse0x3571220() {
   return (neuron0x355da60()*0.13991);
}

double NNfunction_sb_uLsR::synapse0x3571260() {
   return (neuron0x355dda0()*0.361823);
}

double NNfunction_sb_uLsR::synapse0x35712a0() {
   return (neuron0x355e0e0()*-0.157792);
}

double NNfunction_sb_uLsR::synapse0x35712e0() {
   return (neuron0x355e420()*-0.279529);
}

double NNfunction_sb_uLsR::synapse0x3571320() {
   return (neuron0x355e760()*0.07397);
}

double NNfunction_sb_uLsR::synapse0x3571360() {
   return (neuron0x355eaa0()*0.0895687);
}

double NNfunction_sb_uLsR::synapse0x35713a0() {
   return (neuron0x355ede0()*0.113069);
}

double NNfunction_sb_uLsR::synapse0x35713e0() {
   return (neuron0x355f120()*-0.0479822);
}

double NNfunction_sb_uLsR::synapse0x3571420() {
   return (neuron0x355f460()*0.119257);
}

double NNfunction_sb_uLsR::synapse0x3571460() {
   return (neuron0x355f7a0()*1.43925);
}

double NNfunction_sb_uLsR::synapse0x35714a0() {
   return (neuron0x355fae0()*0.14156);
}

double NNfunction_sb_uLsR::synapse0x35714e0() {
   return (neuron0x355fe20()*0.182025);
}

double NNfunction_sb_uLsR::synapse0x3571520() {
   return (neuron0x3560160()*0.0698135);
}

double NNfunction_sb_uLsR::synapse0x3571560() {
   return (neuron0x35604a0()*0.0767624);
}

double NNfunction_sb_uLsR::synapse0x3570ff0() {
   return (neuron0x35607e0()*-0.0886819);
}

double NNfunction_sb_uLsR::synapse0x3571030() {
   return (neuron0x3560d40()*0.177502);
}

double NNfunction_sb_uLsR::synapse0x35716b0() {
   return (neuron0x3560f60()*0.740769);
}

double NNfunction_sb_uLsR::synapse0x35716f0() {
   return (neuron0x35612a0()*0.077541);
}

double NNfunction_sb_uLsR::synapse0x3571730() {
   return (neuron0x35615e0()*0.0479265);
}

double NNfunction_sb_uLsR::synapse0x3571770() {
   return (neuron0x3561920()*0.158192);
}

double NNfunction_sb_uLsR::synapse0x35717b0() {
   return (neuron0x3561c60()*-0.0708017);
}

double NNfunction_sb_uLsR::synapse0x35717f0() {
   return (neuron0x3561fa0()*0.109175);
}

double NNfunction_sb_uLsR::synapse0x3571b70() {
   return (neuron0x355d3e0()*0.0218775);
}

double NNfunction_sb_uLsR::synapse0x3571bb0() {
   return (neuron0x355d720()*-0.0925252);
}

double NNfunction_sb_uLsR::synapse0x3571bf0() {
   return (neuron0x355da60()*-0.343205);
}

double NNfunction_sb_uLsR::synapse0x3571c30() {
   return (neuron0x355dda0()*-0.968007);
}

double NNfunction_sb_uLsR::synapse0x3571c70() {
   return (neuron0x355e0e0()*-0.0942855);
}

double NNfunction_sb_uLsR::synapse0x3571cb0() {
   return (neuron0x355e420()*0.0228992);
}

double NNfunction_sb_uLsR::synapse0x3571cf0() {
   return (neuron0x355e760()*-0.0500482);
}

double NNfunction_sb_uLsR::synapse0x3571d30() {
   return (neuron0x355eaa0()*0.103551);
}

double NNfunction_sb_uLsR::synapse0x3571d70() {
   return (neuron0x355ede0()*-0.0966887);
}

double NNfunction_sb_uLsR::synapse0x3571db0() {
   return (neuron0x355f120()*-0.0731058);
}

double NNfunction_sb_uLsR::synapse0x3571df0() {
   return (neuron0x355f460()*-0.0781224);
}

double NNfunction_sb_uLsR::synapse0x3571e30() {
   return (neuron0x355f7a0()*0.132083);
}

double NNfunction_sb_uLsR::synapse0x3571e70() {
   return (neuron0x355fae0()*-0.0479376);
}

double NNfunction_sb_uLsR::synapse0x3571eb0() {
   return (neuron0x355fe20()*0.075218);
}

double NNfunction_sb_uLsR::synapse0x3571ef0() {
   return (neuron0x3560160()*-0.0982279);
}

double NNfunction_sb_uLsR::synapse0x3571f30() {
   return (neuron0x35604a0()*-0.0286821);
}

double NNfunction_sb_uLsR::synapse0x35719c0() {
   return (neuron0x35607e0()*0.127028);
}

double NNfunction_sb_uLsR::synapse0x3571a00() {
   return (neuron0x3560d40()*-0.0302791);
}

double NNfunction_sb_uLsR::synapse0x3572080() {
   return (neuron0x3560f60()*-0.555755);
}

double NNfunction_sb_uLsR::synapse0x35720c0() {
   return (neuron0x35612a0()*-0.0492062);
}

double NNfunction_sb_uLsR::synapse0x3572100() {
   return (neuron0x35615e0()*0.0303263);
}

double NNfunction_sb_uLsR::synapse0x3572140() {
   return (neuron0x3561920()*-0.0351415);
}

double NNfunction_sb_uLsR::synapse0x3572180() {
   return (neuron0x3561c60()*-0.0160137);
}

double NNfunction_sb_uLsR::synapse0x35721c0() {
   return (neuron0x3561fa0()*-0.0139369);
}

double NNfunction_sb_uLsR::synapse0x3572540() {
   return (neuron0x355d3e0()*0.00713364);
}

double NNfunction_sb_uLsR::synapse0x3572580() {
   return (neuron0x355d720()*-0.00089339);
}

double NNfunction_sb_uLsR::synapse0x35725c0() {
   return (neuron0x355da60()*0.0254083);
}

double NNfunction_sb_uLsR::synapse0x3572600() {
   return (neuron0x355dda0()*-0.0448458);
}

double NNfunction_sb_uLsR::synapse0x3572640() {
   return (neuron0x355e0e0()*0.0110786);
}

double NNfunction_sb_uLsR::synapse0x3572680() {
   return (neuron0x355e420()*-0.00252847);
}

double NNfunction_sb_uLsR::synapse0x35726c0() {
   return (neuron0x355e760()*0.00633059);
}

double NNfunction_sb_uLsR::synapse0x3572700() {
   return (neuron0x355eaa0()*-0.00809029);
}

double NNfunction_sb_uLsR::synapse0x3572740() {
   return (neuron0x355ede0()*0.00121651);
}

double NNfunction_sb_uLsR::synapse0x3572780() {
   return (neuron0x355f120()*0.00626209);
}

double NNfunction_sb_uLsR::synapse0x35727c0() {
   return (neuron0x355f460()*0.00356337);
}

double NNfunction_sb_uLsR::synapse0x3572800() {
   return (neuron0x355f7a0()*-1.30282);
}

double NNfunction_sb_uLsR::synapse0x3572840() {
   return (neuron0x355fae0()*-0.022556);
}

double NNfunction_sb_uLsR::synapse0x3572880() {
   return (neuron0x355fe20()*-0.00280089);
}

double NNfunction_sb_uLsR::synapse0x35728c0() {
   return (neuron0x3560160()*-0.00870288);
}

double NNfunction_sb_uLsR::synapse0x3572900() {
   return (neuron0x35604a0()*-0.00477777);
}

double NNfunction_sb_uLsR::synapse0x3572390() {
   return (neuron0x35607e0()*-0.000795399);
}

double NNfunction_sb_uLsR::synapse0x35723d0() {
   return (neuron0x3560d40()*-0.00271365);
}

double NNfunction_sb_uLsR::synapse0x3572a50() {
   return (neuron0x3560f60()*0.485247);
}

double NNfunction_sb_uLsR::synapse0x3572a90() {
   return (neuron0x35612a0()*-0.00593235);
}

double NNfunction_sb_uLsR::synapse0x3572ad0() {
   return (neuron0x35615e0()*-0.00347607);
}

double NNfunction_sb_uLsR::synapse0x3572b10() {
   return (neuron0x3561920()*-0.000977685);
}

double NNfunction_sb_uLsR::synapse0x3572b50() {
   return (neuron0x3561c60()*0.00912174);
}

double NNfunction_sb_uLsR::synapse0x3572b90() {
   return (neuron0x3561fa0()*-0.00453931);
}

double NNfunction_sb_uLsR::synapse0x3584a60() {
   return (neuron0x355d3e0()*-0.251988);
}

double NNfunction_sb_uLsR::synapse0x3584aa0() {
   return (neuron0x355d720()*0.061882);
}

double NNfunction_sb_uLsR::synapse0x3584ae0() {
   return (neuron0x355da60()*-0.418355);
}

double NNfunction_sb_uLsR::synapse0x3584b20() {
   return (neuron0x355dda0()*0.157636);
}

double NNfunction_sb_uLsR::synapse0x3584b60() {
   return (neuron0x355e0e0()*0.404407);
}

double NNfunction_sb_uLsR::synapse0x3584ba0() {
   return (neuron0x355e420()*0.20962);
}

double NNfunction_sb_uLsR::synapse0x3584be0() {
   return (neuron0x355e760()*-0.112275);
}

double NNfunction_sb_uLsR::synapse0x3584c20() {
   return (neuron0x355eaa0()*0.0318421);
}

double NNfunction_sb_uLsR::synapse0x3584c60() {
   return (neuron0x355ede0()*-0.126232);
}

double NNfunction_sb_uLsR::synapse0x3584ca0() {
   return (neuron0x355f120()*-0.139239);
}

double NNfunction_sb_uLsR::synapse0x3584ce0() {
   return (neuron0x355f460()*-0.0907998);
}

double NNfunction_sb_uLsR::synapse0x3584d20() {
   return (neuron0x355f7a0()*-0.459506);
}

double NNfunction_sb_uLsR::synapse0x3584d60() {
   return (neuron0x355fae0()*0.121187);
}

double NNfunction_sb_uLsR::synapse0x3584da0() {
   return (neuron0x355fe20()*-0.340012);
}

double NNfunction_sb_uLsR::synapse0x3584de0() {
   return (neuron0x3560160()*0.745664);
}

double NNfunction_sb_uLsR::synapse0x3584e20() {
   return (neuron0x35604a0()*-0.043632);
}

double NNfunction_sb_uLsR::synapse0x3572bd0() {
   return (neuron0x35607e0()*-0.355086);
}

double NNfunction_sb_uLsR::synapse0x3572c10() {
   return (neuron0x3560d40()*0.306131);
}

double NNfunction_sb_uLsR::synapse0x3584f70() {
   return (neuron0x3560f60()*-1.11207);
}

double NNfunction_sb_uLsR::synapse0x3584fb0() {
   return (neuron0x35612a0()*0.0581071);
}

double NNfunction_sb_uLsR::synapse0x3584ff0() {
   return (neuron0x35615e0()*-0.231108);
}

double NNfunction_sb_uLsR::synapse0x3585030() {
   return (neuron0x3561920()*-0.238089);
}

double NNfunction_sb_uLsR::synapse0x3585070() {
   return (neuron0x3561c60()*-0.190467);
}

double NNfunction_sb_uLsR::synapse0x35850b0() {
   return (neuron0x3561fa0()*-0.442759);
}

double NNfunction_sb_uLsR::synapse0x3585430() {
   return (neuron0x355d3e0()*0.0106977);
}

double NNfunction_sb_uLsR::synapse0x3585470() {
   return (neuron0x355d720()*-0.00155353);
}

double NNfunction_sb_uLsR::synapse0x35854b0() {
   return (neuron0x355da60()*0.0044469);
}

double NNfunction_sb_uLsR::synapse0x35854f0() {
   return (neuron0x355dda0()*-0.1123);
}

double NNfunction_sb_uLsR::synapse0x3585530() {
   return (neuron0x355e0e0()*-0.021802);
}

double NNfunction_sb_uLsR::synapse0x3585570() {
   return (neuron0x355e420()*-0.0282719);
}

double NNfunction_sb_uLsR::synapse0x35855b0() {
   return (neuron0x355e760()*-0.0305652);
}

double NNfunction_sb_uLsR::synapse0x35855f0() {
   return (neuron0x355eaa0()*0.0275943);
}

double NNfunction_sb_uLsR::synapse0x3585630() {
   return (neuron0x355ede0()*-0.0109653);
}

double NNfunction_sb_uLsR::synapse0x3585670() {
   return (neuron0x355f120()*-0.0167507);
}

double NNfunction_sb_uLsR::synapse0x35856b0() {
   return (neuron0x355f460()*-0.052799);
}

double NNfunction_sb_uLsR::synapse0x35856f0() {
   return (neuron0x355f7a0()*-0.33055);
}

double NNfunction_sb_uLsR::synapse0x3585730() {
   return (neuron0x355fae0()*-0.00628949);
}

double NNfunction_sb_uLsR::synapse0x3585770() {
   return (neuron0x355fe20()*0.0342795);
}

double NNfunction_sb_uLsR::synapse0x35857b0() {
   return (neuron0x3560160()*0.0382);
}

double NNfunction_sb_uLsR::synapse0x35857f0() {
   return (neuron0x35604a0()*0.0234256);
}

double NNfunction_sb_uLsR::synapse0x3585280() {
   return (neuron0x35607e0()*-0.0224434);
}

double NNfunction_sb_uLsR::synapse0x35852c0() {
   return (neuron0x3560d40()*0.010495);
}

double NNfunction_sb_uLsR::synapse0x3585940() {
   return (neuron0x3560f60()*2.04964);
}

double NNfunction_sb_uLsR::synapse0x3585980() {
   return (neuron0x35612a0()*0.00725182);
}

double NNfunction_sb_uLsR::synapse0x35859c0() {
   return (neuron0x35615e0()*0.0258308);
}

double NNfunction_sb_uLsR::synapse0x3585a00() {
   return (neuron0x3561920()*-0.0487025);
}

double NNfunction_sb_uLsR::synapse0x3585a40() {
   return (neuron0x3561c60()*-0.0145101);
}

double NNfunction_sb_uLsR::synapse0x3585a80() {
   return (neuron0x3561fa0()*0.0295519);
}

double NNfunction_sb_uLsR::synapse0x3585e00() {
   return (neuron0x355d3e0()*-0.0277026);
}

double NNfunction_sb_uLsR::synapse0x3585e40() {
   return (neuron0x355d720()*-0.00612915);
}

double NNfunction_sb_uLsR::synapse0x3585e80() {
   return (neuron0x355da60()*0.0283701);
}

double NNfunction_sb_uLsR::synapse0x3585ec0() {
   return (neuron0x355dda0()*-0.639533);
}

double NNfunction_sb_uLsR::synapse0x3585f00() {
   return (neuron0x355e0e0()*0.0412756);
}

double NNfunction_sb_uLsR::synapse0x3585f40() {
   return (neuron0x355e420()*0.0139247);
}

double NNfunction_sb_uLsR::synapse0x3585f80() {
   return (neuron0x355e760()*-0.0178723);
}

double NNfunction_sb_uLsR::synapse0x3585fc0() {
   return (neuron0x355eaa0()*-0.0511825);
}

double NNfunction_sb_uLsR::synapse0x3586000() {
   return (neuron0x355ede0()*0.0195978);
}

double NNfunction_sb_uLsR::synapse0x3586040() {
   return (neuron0x355f120()*0.0193644);
}

double NNfunction_sb_uLsR::synapse0x3586080() {
   return (neuron0x355f460()*0.0373799);
}

double NNfunction_sb_uLsR::synapse0x35860c0() {
   return (neuron0x355f7a0()*0.0759995);
}

double NNfunction_sb_uLsR::synapse0x3586100() {
   return (neuron0x355fae0()*-0.180311);
}

double NNfunction_sb_uLsR::synapse0x3586140() {
   return (neuron0x355fe20()*0.0212836);
}

double NNfunction_sb_uLsR::synapse0x3586180() {
   return (neuron0x3560160()*-0.0998287);
}

double NNfunction_sb_uLsR::synapse0x35861c0() {
   return (neuron0x35604a0()*-0.0426363);
}

double NNfunction_sb_uLsR::synapse0x3585c50() {
   return (neuron0x35607e0()*0.0573503);
}

double NNfunction_sb_uLsR::synapse0x3585c90() {
   return (neuron0x3560d40()*-0.0574214);
}

double NNfunction_sb_uLsR::synapse0x3586310() {
   return (neuron0x3560f60()*0.0821949);
}

double NNfunction_sb_uLsR::synapse0x3586350() {
   return (neuron0x35612a0()*-0.000839005);
}

double NNfunction_sb_uLsR::synapse0x3586390() {
   return (neuron0x35615e0()*-0.00416758);
}

double NNfunction_sb_uLsR::synapse0x35863d0() {
   return (neuron0x3561920()*-0.00799676);
}

double NNfunction_sb_uLsR::synapse0x3586410() {
   return (neuron0x3561c60()*-0.0138973);
}

double NNfunction_sb_uLsR::synapse0x3586450() {
   return (neuron0x3561fa0()*-0.0339399);
}

double NNfunction_sb_uLsR::synapse0x35867d0() {
   return (neuron0x355d3e0()*0.0786788);
}

double NNfunction_sb_uLsR::synapse0x3586810() {
   return (neuron0x355d720()*-0.223962);
}

double NNfunction_sb_uLsR::synapse0x3586850() {
   return (neuron0x355da60()*0.9103);
}

double NNfunction_sb_uLsR::synapse0x3586890() {
   return (neuron0x355dda0()*-0.256998);
}

double NNfunction_sb_uLsR::synapse0x35868d0() {
   return (neuron0x355e0e0()*0.0589358);
}

double NNfunction_sb_uLsR::synapse0x3586910() {
   return (neuron0x355e420()*0.192818);
}

double NNfunction_sb_uLsR::synapse0x3586950() {
   return (neuron0x355e760()*0.311711);
}

double NNfunction_sb_uLsR::synapse0x3586990() {
   return (neuron0x355eaa0()*0.732022);
}

double NNfunction_sb_uLsR::synapse0x35869d0() {
   return (neuron0x355ede0()*-0.0139026);
}

double NNfunction_sb_uLsR::synapse0x3586a10() {
   return (neuron0x355f120()*-0.305801);
}

double NNfunction_sb_uLsR::synapse0x3586a50() {
   return (neuron0x355f460()*-0.0424381);
}

double NNfunction_sb_uLsR::synapse0x3586a90() {
   return (neuron0x355f7a0()*1.11122);
}

double NNfunction_sb_uLsR::synapse0x3586ad0() {
   return (neuron0x355fae0()*0.59198);
}

double NNfunction_sb_uLsR::synapse0x3586b10() {
   return (neuron0x355fe20()*0.285662);
}

double NNfunction_sb_uLsR::synapse0x3586b50() {
   return (neuron0x3560160()*-0.173342);
}

double NNfunction_sb_uLsR::synapse0x3586b90() {
   return (neuron0x35604a0()*0.360337);
}

double NNfunction_sb_uLsR::synapse0x3586620() {
   return (neuron0x35607e0()*0.526937);
}

double NNfunction_sb_uLsR::synapse0x3586660() {
   return (neuron0x3560d40()*0.0724619);
}

double NNfunction_sb_uLsR::synapse0x3586ce0() {
   return (neuron0x3560f60()*-0.245732);
}

double NNfunction_sb_uLsR::synapse0x3586d20() {
   return (neuron0x35612a0()*-0.28161);
}

double NNfunction_sb_uLsR::synapse0x3586d60() {
   return (neuron0x35615e0()*-0.322456);
}

double NNfunction_sb_uLsR::synapse0x3586da0() {
   return (neuron0x3561920()*0.353197);
}

double NNfunction_sb_uLsR::synapse0x3586de0() {
   return (neuron0x3561c60()*-0.608778);
}

double NNfunction_sb_uLsR::synapse0x3586e20() {
   return (neuron0x3561fa0()*0.297815);
}

double NNfunction_sb_uLsR::synapse0x3326d30() {
   return (neuron0x3562410()*0.625611);
}

double NNfunction_sb_uLsR::synapse0x3326d70() {
   return (neuron0x3562d60()*0.15587);
}

double NNfunction_sb_uLsR::synapse0x35648d0() {
   return (neuron0x3563840()*-0.156857);
}

double NNfunction_sb_uLsR::synapse0x3564910() {
   return (neuron0x35632e0()*0.213513);
}

double NNfunction_sb_uLsR::synapse0x35652a0() {
   return (neuron0x3564620()*-0.66574);
}

double NNfunction_sb_uLsR::synapse0x35652e0() {
   return (neuron0x3564ff0()*-0.0511319);
}

double NNfunction_sb_uLsR::synapse0x3566070() {
   return (neuron0x3565dc0()*0.0576207);
}

double NNfunction_sb_uLsR::synapse0x35660b0() {
   return (neuron0x3566790()*0.0259859);
}

double NNfunction_sb_uLsR::synapse0x3566a40() {
   return (neuron0x3567160()*-0.0756175);
}

double NNfunction_sb_uLsR::synapse0x3566a80() {
   return (neuron0x3567c40()*-0.0402035);
}

double NNfunction_sb_uLsR::synapse0x3567410() {
   return (neuron0x3568610()*-1.76822);
}

double NNfunction_sb_uLsR::synapse0x3567450() {
   return (neuron0x35656f0()*-0.159672);
}

double NNfunction_sb_uLsR::synapse0x3567ef0() {
   return (neuron0x356a1c0()*4.58695);
}

double NNfunction_sb_uLsR::synapse0x3567f30() {
   return (neuron0x356ab90()*-0.154806);
}

double NNfunction_sb_uLsR::synapse0x35688c0() {
   return (neuron0x356b560()*-0.856264);
}

double NNfunction_sb_uLsR::synapse0x3568900() {
   return (neuron0x356bf30()*0.114764);
}

double NNfunction_sb_uLsR::synapse0x35659a0() {
   return (neuron0x356dd40()*-0.182333);
}

double NNfunction_sb_uLsR::synapse0x35659e0() {
   return (neuron0x356e020()*0.0706198);
}

double NNfunction_sb_uLsR::synapse0x356a470() {
   return (neuron0x356e9f0()*0.123);
}

double NNfunction_sb_uLsR::synapse0x356a4b0() {
   return (neuron0x356f3c0()*-0.0182798);
}

double NNfunction_sb_uLsR::synapse0x356ae40() {
   return (neuron0x356fd90()*-0.0815088);
}

double NNfunction_sb_uLsR::synapse0x356ae80() {
   return (neuron0x3570760()*0.0156349);
}

double NNfunction_sb_uLsR::synapse0x356b810() {
   return (neuron0x35692b0()*0.0523524);
}

double NNfunction_sb_uLsR::synapse0x356b850() {
   return (neuron0x3569c80()*0.163926);
}

double NNfunction_sb_uLsR::synapse0x356c1e0() {
   return (neuron0x35734f0()*-0.0111164);
}

double NNfunction_sb_uLsR::synapse0x356c220() {
   return (neuron0x3573ec0()*0.218258);
}

double NNfunction_sb_uLsR::synapse0x3560380() {
   return (neuron0x3574890()*0.0133914);
}

double NNfunction_sb_uLsR::synapse0x35603c0() {
   return (neuron0x3575260()*-0.304378);
}

double NNfunction_sb_uLsR::synapse0x356e2d0() {
   return (neuron0x3575c30()*1.34599);
}

double NNfunction_sb_uLsR::synapse0x356e310() {
   return (neuron0x3576600()*2.33239);
}

double NNfunction_sb_uLsR::synapse0x356eca0() {
   return (neuron0x3576fd0()*0.0180484);
}

double NNfunction_sb_uLsR::synapse0x356ece0() {
   return (neuron0x35779a0()*0.00511091);
}

double NNfunction_sb_uLsR::synapse0x356f670() {
   return (neuron0x356da30()*0.0185813);
}

double NNfunction_sb_uLsR::synapse0x356f6b0() {
   return (neuron0x357a580()*-1.2095);
}

double NNfunction_sb_uLsR::synapse0x3570040() {
   return (neuron0x357af50()*-0.169936);
}

double NNfunction_sb_uLsR::synapse0x3570080() {
   return (neuron0x357b920()*0.369787);
}

double NNfunction_sb_uLsR::synapse0x3570a10() {
   return (neuron0x357c2f0()*-0.978142);
}

double NNfunction_sb_uLsR::synapse0x3570a50() {
   return (neuron0x357ccc0()*0.373575);
}

double NNfunction_sb_uLsR::synapse0x3569560() {
   return (neuron0x357d690()*0.172796);
}

double NNfunction_sb_uLsR::synapse0x35695a0() {
   return (neuron0x357e060()*-0.05039);
}

double NNfunction_sb_uLsR::synapse0x3572e10() {
   return (neuron0x357ea30()*0.00346967);
}

double NNfunction_sb_uLsR::synapse0x3572e50() {
   return (neuron0x357f610()*-0.0845179);
}

double NNfunction_sb_uLsR::synapse0x35737a0() {
   return (neuron0x357ffe0()*0.00121618);
}

double NNfunction_sb_uLsR::synapse0x35737e0() {
   return (neuron0x3570e60()*0.430067);
}

double NNfunction_sb_uLsR::synapse0x3574170() {
   return (neuron0x3571830()*0.542703);
}

double NNfunction_sb_uLsR::synapse0x35741b0() {
   return (neuron0x3572200()*0.0881995);
}

double NNfunction_sb_uLsR::synapse0x3574b40() {
   return (neuron0x3584840()*0.162361);
}

double NNfunction_sb_uLsR::synapse0x3574b80() {
   return (neuron0x35850f0()*0.23663);
}

double NNfunction_sb_uLsR::synapse0x3575510() {
   return (neuron0x3585ac0()*0.747012);
}

double NNfunction_sb_uLsR::synapse0x3575550() {
   return (neuron0x3586490()*-0.00228985);
}

double NNfunction_sb_uLsR::synapse0x3577c50() {
   return (neuron0x3562410()*-0.152968);
}

double NNfunction_sb_uLsR::synapse0x3577c90() {
   return (neuron0x3562d60()*-0.0832452);
}

double NNfunction_sb_uLsR::synapse0x356d210() {
   return (neuron0x3563840()*0.0602053);
}

double NNfunction_sb_uLsR::synapse0x356d250() {
   return (neuron0x35632e0()*-0.0200297);
}

double NNfunction_sb_uLsR::synapse0x357a830() {
   return (neuron0x3564620()*0.305428);
}

double NNfunction_sb_uLsR::synapse0x357a870() {
   return (neuron0x3564ff0()*0.0163836);
}

double NNfunction_sb_uLsR::synapse0x357b200() {
   return (neuron0x3565dc0()*-0.0787666);
}

double NNfunction_sb_uLsR::synapse0x357b240() {
   return (neuron0x3566790()*-0.0324633);
}

double NNfunction_sb_uLsR::synapse0x357bbd0() {
   return (neuron0x3567160()*0.0117917);
}

double NNfunction_sb_uLsR::synapse0x357bc10() {
   return (neuron0x3567c40()*0.0268157);
}

double NNfunction_sb_uLsR::synapse0x357c5a0() {
   return (neuron0x3568610()*1.49597);
}

double NNfunction_sb_uLsR::synapse0x357c5e0() {
   return (neuron0x35656f0()*-0.0137134);
}

double NNfunction_sb_uLsR::synapse0x357cf70() {
   return (neuron0x356a1c0()*0.581093);
}

double NNfunction_sb_uLsR::synapse0x357cfb0() {
   return (neuron0x356ab90()*0.22936);
}

double NNfunction_sb_uLsR::synapse0x357d940() {
   return (neuron0x356b560()*2.40859);
}

double NNfunction_sb_uLsR::synapse0x357d980() {
   return (neuron0x356bf30()*-0.0642037);
}

double NNfunction_sb_uLsR::synapse0x357e310() {
   return (neuron0x356dd40()*0.147943);
}

double NNfunction_sb_uLsR::synapse0x357e350() {
   return (neuron0x356e020()*-0.0670417);
}

double NNfunction_sb_uLsR::synapse0x357ece0() {
   return (neuron0x356e9f0()*-0.133726);
}

double NNfunction_sb_uLsR::synapse0x357ed20() {
   return (neuron0x356f3c0()*-0.0184956);
}

double NNfunction_sb_uLsR::synapse0x357f8c0() {
   return (neuron0x356fd90()*-0.00953243);
}

double NNfunction_sb_uLsR::synapse0x357f900() {
   return (neuron0x3570760()*-0.00551834);
}

double NNfunction_sb_uLsR::synapse0x3580290() {
   return (neuron0x35692b0()*-1.78323);
}

double NNfunction_sb_uLsR::synapse0x35802d0() {
   return (neuron0x3569c80()*-0.0902775);
}

double NNfunction_sb_uLsR::synapse0x3571110() {
   return (neuron0x35734f0()*-0.00778485);
}

double NNfunction_sb_uLsR::synapse0x3571150() {
   return (neuron0x3573ec0()*1.39904);
}

double NNfunction_sb_uLsR::synapse0x3571ae0() {
   return (neuron0x3574890()*0.0320187);
}

double NNfunction_sb_uLsR::synapse0x3571b20() {
   return (neuron0x3575260()*1.31562);
}

double NNfunction_sb_uLsR::synapse0x35724b0() {
   return (neuron0x3575c30()*2.16315);
}

double NNfunction_sb_uLsR::synapse0x35724f0() {
   return (neuron0x3576600()*-3.34976);
}

double NNfunction_sb_uLsR::synapse0x35849d0() {
   return (neuron0x3576fd0()*-0.045908);
}

double NNfunction_sb_uLsR::synapse0x3584a10() {
   return (neuron0x35779a0()*0.083085);
}

double NNfunction_sb_uLsR::synapse0x35853a0() {
   return (neuron0x356da30()*-0.07214);
}

double NNfunction_sb_uLsR::synapse0x35853e0() {
   return (neuron0x357a580()*0.154822);
}

double NNfunction_sb_uLsR::synapse0x3585d70() {
   return (neuron0x357af50()*-0.0190752);
}

double NNfunction_sb_uLsR::synapse0x3585db0() {
   return (neuron0x357b920()*-0.516565);
}

double NNfunction_sb_uLsR::synapse0x3586740() {
   return (neuron0x357c2f0()*-4.27893);
}

double NNfunction_sb_uLsR::synapse0x3586780() {
   return (neuron0x357ccc0()*-0.211809);
}

double NNfunction_sb_uLsR::synapse0x3562630() {
   return (neuron0x357d690()*-0.114283);
}

double NNfunction_sb_uLsR::synapse0x3562670() {
   return (neuron0x357e060()*0.0312155);
}

double NNfunction_sb_uLsR::synapse0x3575ee0() {
   return (neuron0x357ea30()*-0.0397328);
}

double NNfunction_sb_uLsR::synapse0x3575f20() {
   return (neuron0x357f610()*-0.0394918);
}

double NNfunction_sb_uLsR::synapse0x3586e60() {
   return (neuron0x357ffe0()*0.00670123);
}

double NNfunction_sb_uLsR::synapse0x3586ea0() {
   return (neuron0x3570e60()*-0.10884);
}

double NNfunction_sb_uLsR::synapse0x3586ee0() {
   return (neuron0x3571830()*-0.675064);
}

double NNfunction_sb_uLsR::synapse0x3586f20() {
   return (neuron0x3572200()*-1.82861);
}

double NNfunction_sb_uLsR::synapse0x358ddd0() {
   return (neuron0x3584840()*-0.104822);
}

double NNfunction_sb_uLsR::synapse0x358de10() {
   return (neuron0x35850f0()*-0.273195);
}

double NNfunction_sb_uLsR::synapse0x358de50() {
   return (neuron0x3585ac0()*-1.24547);
}

double NNfunction_sb_uLsR::synapse0x358de90() {
   return (neuron0x3586490()*-0.0324286);
}

double NNfunction_sb_uLsR::synapse0x358e210() {
   return (neuron0x3562410()*1.13969);
}

double NNfunction_sb_uLsR::synapse0x358e250() {
   return (neuron0x3562d60()*-0.1144);
}

double NNfunction_sb_uLsR::synapse0x358e290() {
   return (neuron0x3563840()*0.103764);
}

double NNfunction_sb_uLsR::synapse0x358e2d0() {
   return (neuron0x35632e0()*-0.145311);
}

double NNfunction_sb_uLsR::synapse0x358e310() {
   return (neuron0x3564620()*0.575546);
}

double NNfunction_sb_uLsR::synapse0x358e350() {
   return (neuron0x3564ff0()*0.0489334);
}

double NNfunction_sb_uLsR::synapse0x358e390() {
   return (neuron0x3565dc0()*-0.125685);
}

double NNfunction_sb_uLsR::synapse0x358e3d0() {
   return (neuron0x3566790()*-0.0389598);
}

double NNfunction_sb_uLsR::synapse0x358e410() {
   return (neuron0x3567160()*0.0734453);
}

double NNfunction_sb_uLsR::synapse0x358e450() {
   return (neuron0x3567c40()*0.0522919);
}

double NNfunction_sb_uLsR::synapse0x358e490() {
   return (neuron0x3568610()*0.534743);
}

double NNfunction_sb_uLsR::synapse0x358e4d0() {
   return (neuron0x35656f0()*0.138742);
}

double NNfunction_sb_uLsR::synapse0x358e510() {
   return (neuron0x356a1c0()*0.998444);
}

double NNfunction_sb_uLsR::synapse0x358e550() {
   return (neuron0x356ab90()*0.236952);
}

double NNfunction_sb_uLsR::synapse0x358e590() {
   return (neuron0x356b560()*-2.12819);
}

double NNfunction_sb_uLsR::synapse0x358e5d0() {
   return (neuron0x356bf30()*-0.111185);
}

double NNfunction_sb_uLsR::synapse0x358e060() {
   return (neuron0x356dd40()*0.108621);
}

double NNfunction_sb_uLsR::synapse0x358e0a0() {
   return (neuron0x356e020()*-0.138846);
}

double NNfunction_sb_uLsR::synapse0x358e720() {
   return (neuron0x356e9f0()*-0.285164);
}

double NNfunction_sb_uLsR::synapse0x358e760() {
   return (neuron0x356f3c0()*-0.0771966);
}

double NNfunction_sb_uLsR::synapse0x358e7a0() {
   return (neuron0x356fd90()*-0.0507497);
}

double NNfunction_sb_uLsR::synapse0x358e7e0() {
   return (neuron0x3570760()*-0.00584129);
}

double NNfunction_sb_uLsR::synapse0x358e820() {
   return (neuron0x35692b0()*1.03504);
}

double NNfunction_sb_uLsR::synapse0x358e860() {
   return (neuron0x3569c80()*-0.134512);
}

double NNfunction_sb_uLsR::synapse0x358e8a0() {
   return (neuron0x35734f0()*-0.0583116);
}

double NNfunction_sb_uLsR::synapse0x358e8e0() {
   return (neuron0x3573ec0()*0.930626);
}

double NNfunction_sb_uLsR::synapse0x358e920() {
   return (neuron0x3574890()*0.00807826);
}

double NNfunction_sb_uLsR::synapse0x358e960() {
   return (neuron0x3575260()*0.142096);
}

double NNfunction_sb_uLsR::synapse0x358e9a0() {
   return (neuron0x3575c30()*-1.80883);
}

double NNfunction_sb_uLsR::synapse0x358e9e0() {
   return (neuron0x3576600()*0.401068);
}

double NNfunction_sb_uLsR::synapse0x358ea20() {
   return (neuron0x3576fd0()*-0.113533);
}

double NNfunction_sb_uLsR::synapse0x358ea60() {
   return (neuron0x35779a0()*0.104168);
}

double NNfunction_sb_uLsR::synapse0x358e610() {
   return (neuron0x356da30()*-0.136798);
}

double NNfunction_sb_uLsR::synapse0x358e650() {
   return (neuron0x357a580()*0.0451248);
}

double NNfunction_sb_uLsR::synapse0x358e690() {
   return (neuron0x357af50()*-0.161543);
}

double NNfunction_sb_uLsR::synapse0x358e6d0() {
   return (neuron0x357b920()*-0.0208543);
}

double NNfunction_sb_uLsR::synapse0x358ecb0() {
   return (neuron0x357c2f0()*-0.435661);
}

double NNfunction_sb_uLsR::synapse0x358ecf0() {
   return (neuron0x357ccc0()*-0.295232);
}

double NNfunction_sb_uLsR::synapse0x358ed30() {
   return (neuron0x357d690()*-0.0947374);
}

double NNfunction_sb_uLsR::synapse0x358ed70() {
   return (neuron0x357e060()*0.047713);
}

double NNfunction_sb_uLsR::synapse0x358edb0() {
   return (neuron0x357ea30()*-0.0547993);
}

double NNfunction_sb_uLsR::synapse0x358edf0() {
   return (neuron0x357f610()*-0.00416886);
}

double NNfunction_sb_uLsR::synapse0x358ee30() {
   return (neuron0x357ffe0()*-0.0733839);
}

double NNfunction_sb_uLsR::synapse0x358ee70() {
   return (neuron0x3570e60()*-0.267855);
}

double NNfunction_sb_uLsR::synapse0x358eeb0() {
   return (neuron0x3571830()*-0.888665);
}

double NNfunction_sb_uLsR::synapse0x358eef0() {
   return (neuron0x3572200()*0.251285);
}

double NNfunction_sb_uLsR::synapse0x358ef30() {
   return (neuron0x3584840()*-0.209208);
}

double NNfunction_sb_uLsR::synapse0x358ef70() {
   return (neuron0x35850f0()*0.126023);
}

double NNfunction_sb_uLsR::synapse0x358efb0() {
   return (neuron0x3585ac0()*0.381841);
}

double NNfunction_sb_uLsR::synapse0x358eff0() {
   return (neuron0x3586490()*-0.0145009);
}

double NNfunction_sb_uLsR::synapse0x358f370() {
   return (neuron0x3562410()*1.36052);
}

double NNfunction_sb_uLsR::synapse0x358f3b0() {
   return (neuron0x3562d60()*-0.423866);
}

double NNfunction_sb_uLsR::synapse0x358f3f0() {
   return (neuron0x3563840()*0.43041);
}

double NNfunction_sb_uLsR::synapse0x358f430() {
   return (neuron0x35632e0()*-0.189688);
}

double NNfunction_sb_uLsR::synapse0x358f470() {
   return (neuron0x3564620()*0.0150156);
}

double NNfunction_sb_uLsR::synapse0x358f4b0() {
   return (neuron0x3564ff0()*-0.157277);
}

double NNfunction_sb_uLsR::synapse0x358f4f0() {
   return (neuron0x3565dc0()*1.3235);
}

double NNfunction_sb_uLsR::synapse0x358f530() {
   return (neuron0x3566790()*0.0414718);
}

double NNfunction_sb_uLsR::synapse0x358f570() {
   return (neuron0x3567160()*0.862287);
}

double NNfunction_sb_uLsR::synapse0x358f5b0() {
   return (neuron0x3567c40()*-0.842553);
}

double NNfunction_sb_uLsR::synapse0x358f5f0() {
   return (neuron0x3568610()*0.561558);
}

double NNfunction_sb_uLsR::synapse0x358f630() {
   return (neuron0x35656f0()*0.96306);
}

double NNfunction_sb_uLsR::synapse0x358f670() {
   return (neuron0x356a1c0()*0.780117);
}

double NNfunction_sb_uLsR::synapse0x358f6b0() {
   return (neuron0x356ab90()*0.465474);
}

double NNfunction_sb_uLsR::synapse0x358f6f0() {
   return (neuron0x356b560()*-0.563226);
}

double NNfunction_sb_uLsR::synapse0x358f730() {
   return (neuron0x356bf30()*-0.747292);
}

double NNfunction_sb_uLsR::synapse0x358f1c0() {
   return (neuron0x356dd40()*1.28197);
}

double NNfunction_sb_uLsR::synapse0x358f200() {
   return (neuron0x356e020()*-0.384571);
}

double NNfunction_sb_uLsR::synapse0x358f880() {
   return (neuron0x356e9f0()*0.436776);
}

double NNfunction_sb_uLsR::synapse0x358f8c0() {
   return (neuron0x356f3c0()*-0.55147);
}

double NNfunction_sb_uLsR::synapse0x358f900() {
   return (neuron0x356fd90()*1.14279);
}

double NNfunction_sb_uLsR::synapse0x358f940() {
   return (neuron0x3570760()*-0.126502);
}

double NNfunction_sb_uLsR::synapse0x358f980() {
   return (neuron0x35692b0()*0.730876);
}

double NNfunction_sb_uLsR::synapse0x358f9c0() {
   return (neuron0x3569c80()*0.295721);
}

double NNfunction_sb_uLsR::synapse0x358fa00() {
   return (neuron0x35734f0()*-0.203122);
}

double NNfunction_sb_uLsR::synapse0x358fa40() {
   return (neuron0x3573ec0()*0.0230741);
}

double NNfunction_sb_uLsR::synapse0x358fa80() {
   return (neuron0x3574890()*1.14788);
}

double NNfunction_sb_uLsR::synapse0x358fac0() {
   return (neuron0x3575260()*-1.04611);
}

double NNfunction_sb_uLsR::synapse0x358fb00() {
   return (neuron0x3575c30()*-0.324734);
}

double NNfunction_sb_uLsR::synapse0x358fb40() {
   return (neuron0x3576600()*0.120669);
}

double NNfunction_sb_uLsR::synapse0x358fb80() {
   return (neuron0x3576fd0()*0.577611);
}

double NNfunction_sb_uLsR::synapse0x358fbc0() {
   return (neuron0x35779a0()*0.955494);
}

double NNfunction_sb_uLsR::synapse0x358f770() {
   return (neuron0x356da30()*-0.00944076);
}

double NNfunction_sb_uLsR::synapse0x358f7b0() {
   return (neuron0x357a580()*-0.901788);
}

double NNfunction_sb_uLsR::synapse0x358f7f0() {
   return (neuron0x357af50()*-0.287447);
}

double NNfunction_sb_uLsR::synapse0x358f830() {
   return (neuron0x357b920()*0.796222);
}

double NNfunction_sb_uLsR::synapse0x358fe10() {
   return (neuron0x357c2f0()*1.15813);
}

double NNfunction_sb_uLsR::synapse0x358fe50() {
   return (neuron0x357ccc0()*-0.455304);
}

double NNfunction_sb_uLsR::synapse0x358fe90() {
   return (neuron0x357d690()*-0.334274);
}

double NNfunction_sb_uLsR::synapse0x358fed0() {
   return (neuron0x357e060()*0.0374941);
}

double NNfunction_sb_uLsR::synapse0x358ff10() {
   return (neuron0x357ea30()*0.493779);
}

double NNfunction_sb_uLsR::synapse0x358ff50() {
   return (neuron0x357f610()*-1.28633);
}

double NNfunction_sb_uLsR::synapse0x358ff90() {
   return (neuron0x357ffe0()*0.45875);
}

double NNfunction_sb_uLsR::synapse0x358ffd0() {
   return (neuron0x3570e60()*1.3427);
}

double NNfunction_sb_uLsR::synapse0x3590010() {
   return (neuron0x3571830()*1.23389);
}

double NNfunction_sb_uLsR::synapse0x3590050() {
   return (neuron0x3572200()*0.0460962);
}

double NNfunction_sb_uLsR::synapse0x3590090() {
   return (neuron0x3584840()*0.307235);
}

double NNfunction_sb_uLsR::synapse0x35900d0() {
   return (neuron0x35850f0()*0.812042);
}

double NNfunction_sb_uLsR::synapse0x3590110() {
   return (neuron0x3585ac0()*0.756307);
}

double NNfunction_sb_uLsR::synapse0x3590150() {
   return (neuron0x3586490()*-0.223114);
}

double NNfunction_sb_uLsR::synapse0x35904d0() {
   return (neuron0x3562410()*-1.61719);
}

double NNfunction_sb_uLsR::synapse0x3590510() {
   return (neuron0x3562d60()*0.0683127);
}

double NNfunction_sb_uLsR::synapse0x3590550() {
   return (neuron0x3563840()*0.206697);
}

double NNfunction_sb_uLsR::synapse0x3590590() {
   return (neuron0x35632e0()*-1.22513);
}

double NNfunction_sb_uLsR::synapse0x35905d0() {
   return (neuron0x3564620()*-0.143572);
}

double NNfunction_sb_uLsR::synapse0x3590610() {
   return (neuron0x3564ff0()*0.709528);
}

double NNfunction_sb_uLsR::synapse0x3590650() {
   return (neuron0x3565dc0()*0.835791);
}

double NNfunction_sb_uLsR::synapse0x3590690() {
   return (neuron0x3566790()*1.24361);
}

double NNfunction_sb_uLsR::synapse0x35906d0() {
   return (neuron0x3567160()*1.36204);
}

double NNfunction_sb_uLsR::synapse0x3590710() {
   return (neuron0x3567c40()*-0.64285);
}

double NNfunction_sb_uLsR::synapse0x3590750() {
   return (neuron0x3568610()*-1.46837);
}

double NNfunction_sb_uLsR::synapse0x3590790() {
   return (neuron0x35656f0()*-3.01636);
}

double NNfunction_sb_uLsR::synapse0x35907d0() {
   return (neuron0x356a1c0()*-4.53499);
}

double NNfunction_sb_uLsR::synapse0x3590810() {
   return (neuron0x356ab90()*-1.23664);
}

double NNfunction_sb_uLsR::synapse0x3590850() {
   return (neuron0x356b560()*0.918893);
}

double NNfunction_sb_uLsR::synapse0x3590890() {
   return (neuron0x356bf30()*0.172918);
}

double NNfunction_sb_uLsR::synapse0x3590320() {
   return (neuron0x356dd40()*0.854871);
}

double NNfunction_sb_uLsR::synapse0x3590360() {
   return (neuron0x356e020()*-0.783072);
}

double NNfunction_sb_uLsR::synapse0x35909e0() {
   return (neuron0x356e9f0()*-0.353108);
}

double NNfunction_sb_uLsR::synapse0x3590a20() {
   return (neuron0x356f3c0()*-0.831178);
}

double NNfunction_sb_uLsR::synapse0x3590a60() {
   return (neuron0x356fd90()*-0.745415);
}

double NNfunction_sb_uLsR::synapse0x3590aa0() {
   return (neuron0x3570760()*-0.516649);
}

double NNfunction_sb_uLsR::synapse0x3590ae0() {
   return (neuron0x35692b0()*0.662937);
}

double NNfunction_sb_uLsR::synapse0x3590b20() {
   return (neuron0x3569c80()*-0.515988);
}

double NNfunction_sb_uLsR::synapse0x3590b60() {
   return (neuron0x35734f0()*-0.757453);
}

double NNfunction_sb_uLsR::synapse0x3590ba0() {
   return (neuron0x3573ec0()*-2.46412);
}

double NNfunction_sb_uLsR::synapse0x3590be0() {
   return (neuron0x3574890()*-0.870538);
}

double NNfunction_sb_uLsR::synapse0x3590c20() {
   return (neuron0x3575260()*0.754454);
}

double NNfunction_sb_uLsR::synapse0x3590c60() {
   return (neuron0x3575c30()*-1.27594);
}

double NNfunction_sb_uLsR::synapse0x3590ca0() {
   return (neuron0x3576600()*-4.51522);
}

double NNfunction_sb_uLsR::synapse0x3590ce0() {
   return (neuron0x3576fd0()*-0.95137);
}

double NNfunction_sb_uLsR::synapse0x3590d20() {
   return (neuron0x35779a0()*-0.908575);
}

double NNfunction_sb_uLsR::synapse0x35908d0() {
   return (neuron0x356da30()*-1.10492);
}

double NNfunction_sb_uLsR::synapse0x3590910() {
   return (neuron0x357a580()*6.05928);
}

double NNfunction_sb_uLsR::synapse0x3590950() {
   return (neuron0x357af50()*0.388506);
}

double NNfunction_sb_uLsR::synapse0x3590990() {
   return (neuron0x357b920()*2.07732);
}

double NNfunction_sb_uLsR::synapse0x3590f70() {
   return (neuron0x357c2f0()*-0.174155);
}

double NNfunction_sb_uLsR::synapse0x3590fb0() {
   return (neuron0x357ccc0()*1.03913);
}

double NNfunction_sb_uLsR::synapse0x3590ff0() {
   return (neuron0x357d690()*1.69368);
}

double NNfunction_sb_uLsR::synapse0x3591030() {
   return (neuron0x357e060()*1.51342);
}

double NNfunction_sb_uLsR::synapse0x3591070() {
   return (neuron0x357ea30()*0.59158);
}

double NNfunction_sb_uLsR::synapse0x35910b0() {
   return (neuron0x357f610()*1.21212);
}

double NNfunction_sb_uLsR::synapse0x35910f0() {
   return (neuron0x357ffe0()*-0.928935);
}

double NNfunction_sb_uLsR::synapse0x3591130() {
   return (neuron0x3570e60()*-1.22575);
}

double NNfunction_sb_uLsR::synapse0x3591170() {
   return (neuron0x3571830()*-0.440973);
}

double NNfunction_sb_uLsR::synapse0x35911b0() {
   return (neuron0x3572200()*0.954695);
}

double NNfunction_sb_uLsR::synapse0x35911f0() {
   return (neuron0x3584840()*-0.723106);
}

double NNfunction_sb_uLsR::synapse0x3591230() {
   return (neuron0x35850f0()*-1.4811);
}

double NNfunction_sb_uLsR::synapse0x3591270() {
   return (neuron0x3585ac0()*-0.663553);
}

double NNfunction_sb_uLsR::synapse0x35912b0() {
   return (neuron0x3586490()*0.869745);
}

double NNfunction_sb_uLsR::synapse0x3591510() {
   return (neuron0x358d690()*-4.15613);
}

double NNfunction_sb_uLsR::synapse0x3591550() {
   return (neuron0x358da30()*7.19521);
}

double NNfunction_sb_uLsR::synapse0x3591590() {
   return (neuron0x358ded0()*-3.98448);
}

double NNfunction_sb_uLsR::synapse0x35915d0() {
   return (neuron0x358f030()*-1.13076);
}

double NNfunction_sb_uLsR::synapse0x3591610() {
   return (neuron0x3590190()*6.97763);
}

