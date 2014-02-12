#include "NNfunction_sb_sRcR.h"
#include <cmath>

double NNfunction_sb_sRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3191)/15.3146;
   input1 = (in1 - 5.78626)/1153.22;
   input2 = (in2 - 651.633)/620.018;
   input3 = (in3 - -52.8616)/763.611;
   input4 = (in4 - 1043.56)/950.425;
   input5 = (in5 - 878.303)/933.632;
   input6 = (in6 - 905.184)/952.336;
   input7 = (in7 - 914.059)/931.114;
   input8 = (in8 - 889.228)/948.579;
   input9 = (in9 - 874.256)/933.967;
   input10 = (in10 - 972.822)/939.87;
   input11 = (in11 - 692.184)/837.499;
   input12 = (in12 - 685.026)/833.1;
   input13 = (in13 - 495.539)/500.587;
   input14 = (in14 - 714.205)/813.987;
   input15 = (in15 - 260.264)/236.328;
   input16 = (in16 - 534.043)/557.133;
   input17 = (in17 - 733.362)/864.667;
   input18 = (in18 - 241.419)/224.659;
   input19 = (in19 - 782.049)/861.164;
   input20 = (in20 - -11.4675)/486.425;
   input21 = (in21 - 8.90569)/1149.34;
   input22 = (in22 - -4.51595)/1196.16;
   input23 = (in23 - -196.191)/602.643;
   switch(index) {
     case 0:
         return neuron0x15d43e0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sRcR::Value(int index, double* input) {
   input0 = (input[0] - 23.3191)/15.3146;
   input1 = (input[1] - 5.78626)/1153.22;
   input2 = (input[2] - 651.633)/620.018;
   input3 = (input[3] - -52.8616)/763.611;
   input4 = (input[4] - 1043.56)/950.425;
   input5 = (input[5] - 878.303)/933.632;
   input6 = (input[6] - 905.184)/952.336;
   input7 = (input[7] - 914.059)/931.114;
   input8 = (input[8] - 889.228)/948.579;
   input9 = (input[9] - 874.256)/933.967;
   input10 = (input[10] - 972.822)/939.87;
   input11 = (input[11] - 692.184)/837.499;
   input12 = (input[12] - 685.026)/833.1;
   input13 = (input[13] - 495.539)/500.587;
   input14 = (input[14] - 714.205)/813.987;
   input15 = (input[15] - 260.264)/236.328;
   input16 = (input[16] - 534.043)/557.133;
   input17 = (input[17] - 733.362)/864.667;
   input18 = (input[18] - 241.419)/224.659;
   input19 = (input[19] - 782.049)/861.164;
   input20 = (input[20] - -11.4675)/486.425;
   input21 = (input[21] - 8.90569)/1149.34;
   input22 = (input[22] - -4.51595)/1196.16;
   input23 = (input[23] - -196.191)/602.643;
   switch(index) {
     case 0:
         return neuron0x15d43e0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sRcR::neuron0x15a04a0() {
   return input0;
}

double NNfunction_sb_sRcR::neuron0x15a07e0() {
   return input1;
}

double NNfunction_sb_sRcR::neuron0x15a0b20() {
   return input2;
}

double NNfunction_sb_sRcR::neuron0x15a0e60() {
   return input3;
}

double NNfunction_sb_sRcR::neuron0x15a11a0() {
   return input4;
}

double NNfunction_sb_sRcR::neuron0x15a14e0() {
   return input5;
}

double NNfunction_sb_sRcR::neuron0x15a1820() {
   return input6;
}

double NNfunction_sb_sRcR::neuron0x15a1b60() {
   return input7;
}

double NNfunction_sb_sRcR::neuron0x15a1ea0() {
   return input8;
}

double NNfunction_sb_sRcR::neuron0x15a21e0() {
   return input9;
}

double NNfunction_sb_sRcR::neuron0x15a2520() {
   return input10;
}

double NNfunction_sb_sRcR::neuron0x15a2860() {
   return input11;
}

double NNfunction_sb_sRcR::neuron0x15a2ba0() {
   return input12;
}

double NNfunction_sb_sRcR::neuron0x15a2ee0() {
   return input13;
}

double NNfunction_sb_sRcR::neuron0x15a3220() {
   return input14;
}

double NNfunction_sb_sRcR::neuron0x15a3560() {
   return input15;
}

double NNfunction_sb_sRcR::neuron0x15a38a0() {
   return input16;
}

double NNfunction_sb_sRcR::neuron0x15a3e00() {
   return input17;
}

double NNfunction_sb_sRcR::neuron0x15a4020() {
   return input18;
}

double NNfunction_sb_sRcR::neuron0x15a4360() {
   return input19;
}

double NNfunction_sb_sRcR::neuron0x15a46a0() {
   return input20;
}

double NNfunction_sb_sRcR::neuron0x15a49e0() {
   return input21;
}

double NNfunction_sb_sRcR::neuron0x15a4d20() {
   return input22;
}

double NNfunction_sb_sRcR::neuron0x15a5060() {
   return input23;
}

double NNfunction_sb_sRcR::input0x15a5500() {
   double input = 2.24711;
   input += synapse0x1360310();
   input += synapse0x15a0360();
   input += synapse0x15a03a0();
   input += synapse0x15a57b0();
   input += synapse0x15a57f0();
   input += synapse0x15a5830();
   input += synapse0x15a5870();
   input += synapse0x15a58b0();
   input += synapse0x15a58f0();
   input += synapse0x15a5930();
   input += synapse0x15a5970();
   input += synapse0x15a59b0();
   input += synapse0x15a59f0();
   input += synapse0x15a5a30();
   input += synapse0x15a5a70();
   input += synapse0x15a5ab0();
   input += synapse0x15a02d0();
   input += synapse0x15a0310();
   input += synapse0x1351bb0();
   input += synapse0x1351bf0();
   input += synapse0x15a5d10();
   input += synapse0x15a5d50();
   input += synapse0x15a5d90();
   input += synapse0x15a5dd0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15a5500() {
   double input = input0x15a5500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15a5e10() {
   double input = -3.65749;
   input += synapse0x15a6150();
   input += synapse0x15a6190();
   input += synapse0x15a61d0();
   input += synapse0x15a6210();
   input += synapse0x15a6250();
   input += synapse0x15a6290();
   input += synapse0x15a62d0();
   input += synapse0x15a6310();
   input += synapse0x15a6350();
   input += synapse0x15a5c00();
   input += synapse0x15a5c40();
   input += synapse0x15a5c80();
   input += synapse0x15a5cc0();
   input += synapse0x15a65a0();
   input += synapse0x15a65e0();
   input += synapse0x15a6620();
   input += synapse0x15a5fa0();
   input += synapse0x15a5fe0();
   input += synapse0x15a6770();
   input += synapse0x15a67b0();
   input += synapse0x15a67f0();
   input += synapse0x15a6830();
   input += synapse0x15a6870();
   input += synapse0x15a68b0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15a5e10() {
   double input = input0x15a5e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15a68f0() {
   double input = 0.577595;
   input += synapse0x15a6c30();
   input += synapse0x15a6c70();
   input += synapse0x15a6cb0();
   input += synapse0x15a6cf0();
   input += synapse0x15a6d30();
   input += synapse0x15a6d70();
   input += synapse0x15a6db0();
   input += synapse0x15a6df0();
   input += synapse0x15a6e30();
   input += synapse0x15a6e70();
   input += synapse0x15a6eb0();
   input += synapse0x15a6ef0();
   input += synapse0x15a6f30();
   input += synapse0x15a6f70();
   input += synapse0x15a6fb0();
   input += synapse0x15a6ff0();
   input += synapse0x15a6a80();
   input += synapse0x15a6ac0();
   input += synapse0x135fa00();
   input += synapse0x135fa40();
   input += synapse0x158f530();
   input += synapse0x158f570();
   input += synapse0x158f5b0();
   input += synapse0x15a03e0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15a68f0() {
   double input = input0x15a68f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1360180() {
   double input = 0.414754;
   input += synapse0x15a6540();
   input += synapse0x15a0420();
   input += synapse0x15a0460();
   input += synapse0x15a7140();
   input += synapse0x15a7180();
   input += synapse0x15a71c0();
   input += synapse0x15a7200();
   input += synapse0x15a7240();
   input += synapse0x15a7280();
   input += synapse0x15a72c0();
   input += synapse0x15a7300();
   input += synapse0x15a7340();
   input += synapse0x15a7380();
   input += synapse0x15a73c0();
   input += synapse0x15a7400();
   input += synapse0x15a7440();
   input += synapse0x15a6390();
   input += synapse0x15a63d0();
   input += synapse0x15a7590();
   input += synapse0x15a75d0();
   input += synapse0x15a7610();
   input += synapse0x15a7650();
   input += synapse0x15a7690();
   input += synapse0x15a76d0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1360180() {
   double input = input0x1360180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15a7710() {
   double input = 0.249203;
   input += synapse0x15a7a50();
   input += synapse0x15a7a90();
   input += synapse0x15a7ad0();
   input += synapse0x15a7b10();
   input += synapse0x15a7b50();
   input += synapse0x15a7b90();
   input += synapse0x15a7bd0();
   input += synapse0x15a7c10();
   input += synapse0x15a7c50();
   input += synapse0x15a7c90();
   input += synapse0x15a7cd0();
   input += synapse0x15a7d10();
   input += synapse0x15a7d50();
   input += synapse0x15a7d90();
   input += synapse0x15a7dd0();
   input += synapse0x15a7e10();
   input += synapse0x15a78a0();
   input += synapse0x15a78e0();
   input += synapse0x15a7f60();
   input += synapse0x15a7fa0();
   input += synapse0x15a7fe0();
   input += synapse0x15a8020();
   input += synapse0x15a8060();
   input += synapse0x15a80a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15a7710() {
   double input = input0x15a7710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15a80e0() {
   double input = 0.34507;
   input += synapse0x15a8420();
   input += synapse0x15a8460();
   input += synapse0x15a84a0();
   input += synapse0x15a84e0();
   input += synapse0x15a8520();
   input += synapse0x15a8560();
   input += synapse0x15a85a0();
   input += synapse0x15a85e0();
   input += synapse0x15a8620();
   input += synapse0x135fd70();
   input += synapse0x135fdb0();
   input += synapse0x135fdf0();
   input += synapse0x135fe30();
   input += synapse0x135fe70();
   input += synapse0x135feb0();
   input += synapse0x135fef0();
   input += synapse0x15a8270();
   input += synapse0x15a82b0();
   input += synapse0x1360040();
   input += synapse0x1360080();
   input += synapse0x13600c0();
   input += synapse0x1360100();
   input += synapse0x1360140();
   input += synapse0x15a8e70();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15a80e0() {
   double input = input0x15a80e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15a8eb0() {
   double input = 2.03796;
   input += synapse0x15a91f0();
   input += synapse0x15a9230();
   input += synapse0x15a9270();
   input += synapse0x15a92b0();
   input += synapse0x15a92f0();
   input += synapse0x15a9330();
   input += synapse0x15a9370();
   input += synapse0x15a93b0();
   input += synapse0x15a93f0();
   input += synapse0x15a9430();
   input += synapse0x15a9470();
   input += synapse0x15a94b0();
   input += synapse0x15a94f0();
   input += synapse0x15a9530();
   input += synapse0x15a9570();
   input += synapse0x15a95b0();
   input += synapse0x15a9040();
   input += synapse0x15a9080();
   input += synapse0x15a9700();
   input += synapse0x15a9740();
   input += synapse0x15a9780();
   input += synapse0x15a97c0();
   input += synapse0x15a9800();
   input += synapse0x15a9840();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15a8eb0() {
   double input = input0x15a8eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15a9880() {
   double input = 1.5117;
   input += synapse0x15a9bc0();
   input += synapse0x15a9c00();
   input += synapse0x15a9c40();
   input += synapse0x15a9c80();
   input += synapse0x15a9cc0();
   input += synapse0x15a9d00();
   input += synapse0x15a9d40();
   input += synapse0x15a9d80();
   input += synapse0x15a9dc0();
   input += synapse0x15a9e00();
   input += synapse0x15a9e40();
   input += synapse0x15a9e80();
   input += synapse0x15a9ec0();
   input += synapse0x15a9f00();
   input += synapse0x15a9f40();
   input += synapse0x15a9f80();
   input += synapse0x15a9a10();
   input += synapse0x15a9a50();
   input += synapse0x15aa0d0();
   input += synapse0x15aa110();
   input += synapse0x15aa150();
   input += synapse0x15aa190();
   input += synapse0x15aa1d0();
   input += synapse0x15aa210();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15a9880() {
   double input = input0x15a9880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15aa250() {
   double input = -1.37545;
   input += synapse0x15a3cf0();
   input += synapse0x15a3d30();
   input += synapse0x15a3d70();
   input += synapse0x15a3db0();
   input += synapse0x15aa7a0();
   input += synapse0x15aa7e0();
   input += synapse0x15aa820();
   input += synapse0x15aa860();
   input += synapse0x15aa8a0();
   input += synapse0x15aa8e0();
   input += synapse0x15aa920();
   input += synapse0x15aa960();
   input += synapse0x15aa9a0();
   input += synapse0x15aa9e0();
   input += synapse0x15aaa20();
   input += synapse0x15aaa60();
   input += synapse0x15aa3e0();
   input += synapse0x15aa420();
   input += synapse0x15aabb0();
   input += synapse0x15aabf0();
   input += synapse0x15aac30();
   input += synapse0x15aac70();
   input += synapse0x15aacb0();
   input += synapse0x15aacf0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15aa250() {
   double input = input0x15aa250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15aad30() {
   double input = 0.901493;
   input += synapse0x15ab070();
   input += synapse0x15ab0b0();
   input += synapse0x15ab0f0();
   input += synapse0x15ab130();
   input += synapse0x15ab170();
   input += synapse0x15ab1b0();
   input += synapse0x15ab1f0();
   input += synapse0x15ab230();
   input += synapse0x15ab270();
   input += synapse0x15ab2b0();
   input += synapse0x15ab2f0();
   input += synapse0x15ab330();
   input += synapse0x15ab370();
   input += synapse0x15ab3b0();
   input += synapse0x15ab3f0();
   input += synapse0x15ab430();
   input += synapse0x15aaec0();
   input += synapse0x15aaf00();
   input += synapse0x15ab580();
   input += synapse0x15ab5c0();
   input += synapse0x15ab600();
   input += synapse0x15ab640();
   input += synapse0x15ab680();
   input += synapse0x15ab6c0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15aad30() {
   double input = input0x15aad30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15ab700() {
   double input = -0.26536;
   input += synapse0x15aba40();
   input += synapse0x15aba80();
   input += synapse0x15abac0();
   input += synapse0x15abb00();
   input += synapse0x15abb40();
   input += synapse0x15abb80();
   input += synapse0x15abbc0();
   input += synapse0x15abc00();
   input += synapse0x15abc40();
   input += synapse0x15abc80();
   input += synapse0x15abcc0();
   input += synapse0x15abd00();
   input += synapse0x15abd40();
   input += synapse0x15abd80();
   input += synapse0x15abdc0();
   input += synapse0x15abe00();
   input += synapse0x15ab890();
   input += synapse0x15ab8d0();
   input += synapse0x15a8660();
   input += synapse0x15a86a0();
   input += synapse0x15a86e0();
   input += synapse0x15a8720();
   input += synapse0x15a8760();
   input += synapse0x15a87a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15ab700() {
   double input = input0x15ab700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15a87e0() {
   double input = 0.86366;
   input += synapse0x15a8b20();
   input += synapse0x15a8b60();
   input += synapse0x15a8ba0();
   input += synapse0x15a8be0();
   input += synapse0x15a8c20();
   input += synapse0x15a8c60();
   input += synapse0x15a8ca0();
   input += synapse0x15a8ce0();
   input += synapse0x15a8d20();
   input += synapse0x15a8d60();
   input += synapse0x15a8da0();
   input += synapse0x15a8de0();
   input += synapse0x15a8e20();
   input += synapse0x15acf60();
   input += synapse0x15acfa0();
   input += synapse0x15acfe0();
   input += synapse0x15a8970();
   input += synapse0x15a89b0();
   input += synapse0x15ad130();
   input += synapse0x15ad170();
   input += synapse0x15ad1b0();
   input += synapse0x15ad1f0();
   input += synapse0x15ad230();
   input += synapse0x15ad270();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15a87e0() {
   double input = input0x15a87e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15ad2b0() {
   double input = -0.222076;
   input += synapse0x15ad5f0();
   input += synapse0x15ad630();
   input += synapse0x15ad670();
   input += synapse0x15ad6b0();
   input += synapse0x15ad6f0();
   input += synapse0x15ad730();
   input += synapse0x15ad770();
   input += synapse0x15ad7b0();
   input += synapse0x15ad7f0();
   input += synapse0x15ad830();
   input += synapse0x15ad870();
   input += synapse0x15ad8b0();
   input += synapse0x15ad8f0();
   input += synapse0x15ad930();
   input += synapse0x15ad970();
   input += synapse0x15ad9b0();
   input += synapse0x15ad440();
   input += synapse0x15ad480();
   input += synapse0x15adb00();
   input += synapse0x15adb40();
   input += synapse0x15adb80();
   input += synapse0x15adbc0();
   input += synapse0x15adc00();
   input += synapse0x15adc40();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15ad2b0() {
   double input = input0x15ad2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15adc80() {
   double input = 5.04555;
   input += synapse0x15adfc0();
   input += synapse0x15ae000();
   input += synapse0x15ae040();
   input += synapse0x15ae080();
   input += synapse0x15ae0c0();
   input += synapse0x15ae100();
   input += synapse0x15ae140();
   input += synapse0x15ae180();
   input += synapse0x15ae1c0();
   input += synapse0x15ae200();
   input += synapse0x15ae240();
   input += synapse0x15ae280();
   input += synapse0x15ae2c0();
   input += synapse0x15ae300();
   input += synapse0x15ae340();
   input += synapse0x15ae380();
   input += synapse0x15ade10();
   input += synapse0x15ade50();
   input += synapse0x15ae4d0();
   input += synapse0x15ae510();
   input += synapse0x15ae550();
   input += synapse0x15ae590();
   input += synapse0x15ae5d0();
   input += synapse0x15ae610();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15adc80() {
   double input = input0x15adc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15ae650() {
   double input = 0.215953;
   input += synapse0x15ae990();
   input += synapse0x15ae9d0();
   input += synapse0x15aea10();
   input += synapse0x15aea50();
   input += synapse0x15aea90();
   input += synapse0x15aead0();
   input += synapse0x15aeb10();
   input += synapse0x15aeb50();
   input += synapse0x15aeb90();
   input += synapse0x15aebd0();
   input += synapse0x15aec10();
   input += synapse0x15aec50();
   input += synapse0x15aec90();
   input += synapse0x15aecd0();
   input += synapse0x15aed10();
   input += synapse0x15aed50();
   input += synapse0x15ae7e0();
   input += synapse0x15ae820();
   input += synapse0x15aeea0();
   input += synapse0x15aeee0();
   input += synapse0x15aef20();
   input += synapse0x15aef60();
   input += synapse0x15aefa0();
   input += synapse0x15aefe0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15ae650() {
   double input = input0x15ae650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15af020() {
   double input = 3.21549;
   input += synapse0x15af360();
   input += synapse0x15a06c0();
   input += synapse0x15a0700();
   input += synapse0x15a0a00();
   input += synapse0x15a0a40();
   input += synapse0x15a0d40();
   input += synapse0x15a0d80();
   input += synapse0x15a1080();
   input += synapse0x15a10c0();
   input += synapse0x15a13c0();
   input += synapse0x15a1400();
   input += synapse0x15a1700();
   input += synapse0x15a1740();
   input += synapse0x15a1a40();
   input += synapse0x15a1a80();
   input += synapse0x15a1d80();
   input += synapse0x15a1dc0();
   input += synapse0x15a20c0();
   input += synapse0x15a2100();
   input += synapse0x15a2400();
   input += synapse0x15a2440();
   input += synapse0x15a2740();
   input += synapse0x15a2780();
   input += synapse0x15a2a80();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15af020() {
   double input = input0x15af020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b0e30() {
   double input = 0.309595;
   input += synapse0x15a2ac0();
   input += synapse0x15a3780();
   input += synapse0x15a37c0();
   input += synapse0x15af1b0();
   input += synapse0x15af1f0();
   input += synapse0x15a3ac0();
   input += synapse0x15a3b00();
   input += synapse0x1351a90();
   input += synapse0x1351ad0();
   input += synapse0x15a4240();
   input += synapse0x15a4280();
   input += synapse0x15a4580();
   input += synapse0x15a45c0();
   input += synapse0x15a48c0();
   input += synapse0x15a4900();
   input += synapse0x15a4c00();
   input += synapse0x15a4c40();
   input += synapse0x15a4f40();
   input += synapse0x15a4f80();
   input += synapse0x15a5280();
   input += synapse0x15a52c0();
   input += synapse0x15a2dc0();
   input += synapse0x15a2e00();
   input += synapse0x15b10d0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b0e30() {
   double input = input0x15b0e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b1110() {
   double input = 2.12229;
   input += synapse0x15b1450();
   input += synapse0x15b1490();
   input += synapse0x15b14d0();
   input += synapse0x15b1510();
   input += synapse0x15b1550();
   input += synapse0x15b1590();
   input += synapse0x15b15d0();
   input += synapse0x15b1610();
   input += synapse0x15b1650();
   input += synapse0x15b1690();
   input += synapse0x15b16d0();
   input += synapse0x15b1710();
   input += synapse0x15b1750();
   input += synapse0x15b1790();
   input += synapse0x15b17d0();
   input += synapse0x15b1810();
   input += synapse0x15b12a0();
   input += synapse0x15b12e0();
   input += synapse0x15b1960();
   input += synapse0x15b19a0();
   input += synapse0x15b19e0();
   input += synapse0x15b1a20();
   input += synapse0x15b1a60();
   input += synapse0x15b1aa0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b1110() {
   double input = input0x15b1110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b1ae0() {
   double input = -0.499176;
   input += synapse0x15b1e20();
   input += synapse0x15b1e60();
   input += synapse0x15b1ea0();
   input += synapse0x15b1ee0();
   input += synapse0x15b1f20();
   input += synapse0x15b1f60();
   input += synapse0x15b1fa0();
   input += synapse0x15b1fe0();
   input += synapse0x15b2020();
   input += synapse0x15b2060();
   input += synapse0x15b20a0();
   input += synapse0x15b20e0();
   input += synapse0x15b2120();
   input += synapse0x15b2160();
   input += synapse0x15b21a0();
   input += synapse0x15b21e0();
   input += synapse0x15b1c70();
   input += synapse0x15b1cb0();
   input += synapse0x15b2330();
   input += synapse0x15b2370();
   input += synapse0x15b23b0();
   input += synapse0x15b23f0();
   input += synapse0x15b2430();
   input += synapse0x15b2470();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b1ae0() {
   double input = input0x15b1ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b24b0() {
   double input = -1.77005;
   input += synapse0x15b27f0();
   input += synapse0x15b2830();
   input += synapse0x15b2870();
   input += synapse0x15b28b0();
   input += synapse0x15b28f0();
   input += synapse0x15b2930();
   input += synapse0x15b2970();
   input += synapse0x15b29b0();
   input += synapse0x15b29f0();
   input += synapse0x15b2a30();
   input += synapse0x15b2a70();
   input += synapse0x15b2ab0();
   input += synapse0x15b2af0();
   input += synapse0x15b2b30();
   input += synapse0x15b2b70();
   input += synapse0x15b2bb0();
   input += synapse0x15b2640();
   input += synapse0x15b2680();
   input += synapse0x15b2d00();
   input += synapse0x15b2d40();
   input += synapse0x15b2d80();
   input += synapse0x15b2dc0();
   input += synapse0x15b2e00();
   input += synapse0x15b2e40();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b24b0() {
   double input = input0x15b24b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b2e80() {
   double input = 1.24679;
   input += synapse0x15b31c0();
   input += synapse0x15b3200();
   input += synapse0x15b3240();
   input += synapse0x15b3280();
   input += synapse0x15b32c0();
   input += synapse0x15b3300();
   input += synapse0x15b3340();
   input += synapse0x15b3380();
   input += synapse0x15b33c0();
   input += synapse0x15b3400();
   input += synapse0x15b3440();
   input += synapse0x15b3480();
   input += synapse0x15b34c0();
   input += synapse0x15b3500();
   input += synapse0x15b3540();
   input += synapse0x15b3580();
   input += synapse0x15b3010();
   input += synapse0x15b3050();
   input += synapse0x15b36d0();
   input += synapse0x15b3710();
   input += synapse0x15b3750();
   input += synapse0x15b3790();
   input += synapse0x15b37d0();
   input += synapse0x15b3810();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b2e80() {
   double input = input0x15b2e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b3850() {
   double input = -0.438394;
   input += synapse0x15b3b90();
   input += synapse0x15b3bd0();
   input += synapse0x15b3c10();
   input += synapse0x15b3c50();
   input += synapse0x15b3c90();
   input += synapse0x15b3cd0();
   input += synapse0x15b3d10();
   input += synapse0x15b3d50();
   input += synapse0x15b3d90();
   input += synapse0x15abf50();
   input += synapse0x15abf90();
   input += synapse0x15abfd0();
   input += synapse0x15ac010();
   input += synapse0x15ac050();
   input += synapse0x15ac090();
   input += synapse0x15ac0d0();
   input += synapse0x15b39e0();
   input += synapse0x15b3a20();
   input += synapse0x15ac220();
   input += synapse0x15ac260();
   input += synapse0x15ac2a0();
   input += synapse0x15ac2e0();
   input += synapse0x15ac320();
   input += synapse0x15ac360();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b3850() {
   double input = input0x15b3850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15ac3a0() {
   double input = -1.14926;
   input += synapse0x15ac6e0();
   input += synapse0x15ac720();
   input += synapse0x15ac760();
   input += synapse0x15ac7a0();
   input += synapse0x15ac7e0();
   input += synapse0x15ac820();
   input += synapse0x15ac860();
   input += synapse0x15ac8a0();
   input += synapse0x15ac8e0();
   input += synapse0x15ac920();
   input += synapse0x15ac960();
   input += synapse0x15ac9a0();
   input += synapse0x15ac9e0();
   input += synapse0x15aca20();
   input += synapse0x15aca60();
   input += synapse0x15acaa0();
   input += synapse0x15ac530();
   input += synapse0x15ac570();
   input += synapse0x15acbf0();
   input += synapse0x15acc30();
   input += synapse0x15acc70();
   input += synapse0x15accb0();
   input += synapse0x15accf0();
   input += synapse0x15acd30();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15ac3a0() {
   double input = input0x15ac3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15acd70() {
   double input = -1.41814;
   input += synapse0x15acf00();
   input += synapse0x15b5f90();
   input += synapse0x15b5fd0();
   input += synapse0x15b6010();
   input += synapse0x15b6050();
   input += synapse0x15b6090();
   input += synapse0x15b60d0();
   input += synapse0x15b6110();
   input += synapse0x15b6150();
   input += synapse0x15b6190();
   input += synapse0x15b61d0();
   input += synapse0x15b6210();
   input += synapse0x15b6250();
   input += synapse0x15b6290();
   input += synapse0x15b62d0();
   input += synapse0x15b6310();
   input += synapse0x15b5de0();
   input += synapse0x15b5e20();
   input += synapse0x15b6460();
   input += synapse0x15b64a0();
   input += synapse0x15b64e0();
   input += synapse0x15b6520();
   input += synapse0x15b6560();
   input += synapse0x15b65a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15acd70() {
   double input = input0x15acd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b65e0() {
   double input = 0.776258;
   input += synapse0x15b6920();
   input += synapse0x15b6960();
   input += synapse0x15b69a0();
   input += synapse0x15b69e0();
   input += synapse0x15b6a20();
   input += synapse0x15b6a60();
   input += synapse0x15b6aa0();
   input += synapse0x15b6ae0();
   input += synapse0x15b6b20();
   input += synapse0x15b6b60();
   input += synapse0x15b6ba0();
   input += synapse0x15b6be0();
   input += synapse0x15b6c20();
   input += synapse0x15b6c60();
   input += synapse0x15b6ca0();
   input += synapse0x15b6ce0();
   input += synapse0x15b6770();
   input += synapse0x15b67b0();
   input += synapse0x15b6e30();
   input += synapse0x15b6e70();
   input += synapse0x15b6eb0();
   input += synapse0x15b6ef0();
   input += synapse0x15b6f30();
   input += synapse0x15b6f70();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b65e0() {
   double input = input0x15b65e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b6fb0() {
   double input = -0.0394538;
   input += synapse0x15b72f0();
   input += synapse0x15b7330();
   input += synapse0x15b7370();
   input += synapse0x15b73b0();
   input += synapse0x15b73f0();
   input += synapse0x15b7430();
   input += synapse0x15b7470();
   input += synapse0x15b74b0();
   input += synapse0x15b74f0();
   input += synapse0x15b7530();
   input += synapse0x15b7570();
   input += synapse0x15b75b0();
   input += synapse0x15b75f0();
   input += synapse0x15b7630();
   input += synapse0x15b7670();
   input += synapse0x15b76b0();
   input += synapse0x15b7140();
   input += synapse0x15b7180();
   input += synapse0x15b7800();
   input += synapse0x15b7840();
   input += synapse0x15b7880();
   input += synapse0x15b78c0();
   input += synapse0x15b7900();
   input += synapse0x15b7940();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b6fb0() {
   double input = input0x15b6fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b7980() {
   double input = -0.464218;
   input += synapse0x15b7cc0();
   input += synapse0x15b7d00();
   input += synapse0x15b7d40();
   input += synapse0x15b7d80();
   input += synapse0x15b7dc0();
   input += synapse0x15b7e00();
   input += synapse0x15b7e40();
   input += synapse0x15b7e80();
   input += synapse0x15b7ec0();
   input += synapse0x15b7f00();
   input += synapse0x15b7f40();
   input += synapse0x15b7f80();
   input += synapse0x15b7fc0();
   input += synapse0x15b8000();
   input += synapse0x15b8040();
   input += synapse0x15b8080();
   input += synapse0x15b7b10();
   input += synapse0x15b7b50();
   input += synapse0x15b81d0();
   input += synapse0x15b8210();
   input += synapse0x15b8250();
   input += synapse0x15b8290();
   input += synapse0x15b82d0();
   input += synapse0x15b8310();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b7980() {
   double input = input0x15b7980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b8350() {
   double input = 3.38452;
   input += synapse0x15b8690();
   input += synapse0x15b86d0();
   input += synapse0x15b8710();
   input += synapse0x15b8750();
   input += synapse0x15b8790();
   input += synapse0x15b87d0();
   input += synapse0x15b8810();
   input += synapse0x15b8850();
   input += synapse0x15b8890();
   input += synapse0x15b88d0();
   input += synapse0x15b8910();
   input += synapse0x15b8950();
   input += synapse0x15b8990();
   input += synapse0x15b89d0();
   input += synapse0x15b8a10();
   input += synapse0x15b8a50();
   input += synapse0x15b84e0();
   input += synapse0x15b8520();
   input += synapse0x15b8ba0();
   input += synapse0x15b8be0();
   input += synapse0x15b8c20();
   input += synapse0x15b8c60();
   input += synapse0x15b8ca0();
   input += synapse0x15b8ce0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b8350() {
   double input = input0x15b8350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b8d20() {
   double input = 0.659675;
   input += synapse0x15b9060();
   input += synapse0x15b90a0();
   input += synapse0x15b90e0();
   input += synapse0x15b9120();
   input += synapse0x15b9160();
   input += synapse0x15b91a0();
   input += synapse0x15b91e0();
   input += synapse0x15b9220();
   input += synapse0x15b9260();
   input += synapse0x15b92a0();
   input += synapse0x15b92e0();
   input += synapse0x15b9320();
   input += synapse0x15b9360();
   input += synapse0x15b93a0();
   input += synapse0x15b93e0();
   input += synapse0x15b9420();
   input += synapse0x15b8eb0();
   input += synapse0x15b8ef0();
   input += synapse0x15b9570();
   input += synapse0x15b95b0();
   input += synapse0x15b95f0();
   input += synapse0x15b9630();
   input += synapse0x15b9670();
   input += synapse0x15b96b0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b8d20() {
   double input = input0x15b8d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b96f0() {
   double input = 0.836463;
   input += synapse0x15b9a30();
   input += synapse0x15b9a70();
   input += synapse0x15b9ab0();
   input += synapse0x15b9af0();
   input += synapse0x15b9b30();
   input += synapse0x15b9b70();
   input += synapse0x15b9bb0();
   input += synapse0x15b9bf0();
   input += synapse0x15b9c30();
   input += synapse0x15b9c70();
   input += synapse0x15b9cb0();
   input += synapse0x15b9cf0();
   input += synapse0x15b9d30();
   input += synapse0x15b9d70();
   input += synapse0x15b9db0();
   input += synapse0x15b9df0();
   input += synapse0x15b9880();
   input += synapse0x15b98c0();
   input += synapse0x15b9f40();
   input += synapse0x15b9f80();
   input += synapse0x15b9fc0();
   input += synapse0x15ba000();
   input += synapse0x15ba040();
   input += synapse0x15ba080();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b96f0() {
   double input = input0x15b96f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15ba0c0() {
   double input = 0.175948;
   input += synapse0x15ba400();
   input += synapse0x15ba440();
   input += synapse0x15ba480();
   input += synapse0x15ba4c0();
   input += synapse0x15ba500();
   input += synapse0x15ba540();
   input += synapse0x15ba580();
   input += synapse0x15ba5c0();
   input += synapse0x15ba600();
   input += synapse0x15ba640();
   input += synapse0x15ba680();
   input += synapse0x15ba6c0();
   input += synapse0x15ba700();
   input += synapse0x15ba740();
   input += synapse0x15ba780();
   input += synapse0x15ba7c0();
   input += synapse0x15ba250();
   input += synapse0x15ba290();
   input += synapse0x15ba910();
   input += synapse0x15ba950();
   input += synapse0x15ba990();
   input += synapse0x15ba9d0();
   input += synapse0x15baa10();
   input += synapse0x15baa50();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15ba0c0() {
   double input = input0x15ba0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15baa90() {
   double input = 0.206622;
   input += synapse0x15badd0();
   input += synapse0x15af3a0();
   input += synapse0x15af3e0();
   input += synapse0x15af420();
   input += synapse0x15af670();
   input += synapse0x15af6b0();
   input += synapse0x15af6f0();
   input += synapse0x15af940();
   input += synapse0x15af980();
   input += synapse0x15afbd0();
   input += synapse0x15afc10();
   input += synapse0x15afc50();
   input += synapse0x15afea0();
   input += synapse0x15afee0();
   input += synapse0x15b0130();
   input += synapse0x15b0170();
   input += synapse0x15bac20();
   input += synapse0x15bac60();
   input += synapse0x15b02c0();
   input += synapse0x15b07d0();
   input += synapse0x15b0810();
   input += synapse0x15b0850();
   input += synapse0x15b0aa0();
   input += synapse0x15b0ae0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15baa90() {
   double input = input0x15baa90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b0b20() {
   double input = -0.490958;
   input += synapse0x15b0390();
   input += synapse0x15b03d0();
   input += synapse0x15b0410();
   input += synapse0x15b0450();
   input += synapse0x15b0dd0();
   input += synapse0x15bd120();
   input += synapse0x15bd160();
   input += synapse0x15bd1a0();
   input += synapse0x15bd1e0();
   input += synapse0x15bd220();
   input += synapse0x15bd260();
   input += synapse0x15bd2a0();
   input += synapse0x15bd2e0();
   input += synapse0x15bd320();
   input += synapse0x15bd360();
   input += synapse0x15bd3a0();
   input += synapse0x15b0cb0();
   input += synapse0x15b0cf0();
   input += synapse0x15bd4f0();
   input += synapse0x15bd530();
   input += synapse0x15bd570();
   input += synapse0x15bd5b0();
   input += synapse0x15bd5f0();
   input += synapse0x15bd630();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b0b20() {
   double input = input0x15b0b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15bd670() {
   double input = 0.174962;
   input += synapse0x15bd9b0();
   input += synapse0x15bd9f0();
   input += synapse0x15bda30();
   input += synapse0x15bda70();
   input += synapse0x15bdab0();
   input += synapse0x15bdaf0();
   input += synapse0x15bdb30();
   input += synapse0x15bdb70();
   input += synapse0x15bdbb0();
   input += synapse0x15bdbf0();
   input += synapse0x15bdc30();
   input += synapse0x15bdc70();
   input += synapse0x15bdcb0();
   input += synapse0x15bdcf0();
   input += synapse0x15bdd30();
   input += synapse0x15bdd70();
   input += synapse0x15bd800();
   input += synapse0x15bd840();
   input += synapse0x15bdec0();
   input += synapse0x15bdf00();
   input += synapse0x15bdf40();
   input += synapse0x15bdf80();
   input += synapse0x15bdfc0();
   input += synapse0x15be000();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15bd670() {
   double input = input0x15bd670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15be040() {
   double input = -0.27418;
   input += synapse0x15be380();
   input += synapse0x15be3c0();
   input += synapse0x15be400();
   input += synapse0x15be440();
   input += synapse0x15be480();
   input += synapse0x15be4c0();
   input += synapse0x15be500();
   input += synapse0x15be540();
   input += synapse0x15be580();
   input += synapse0x15be5c0();
   input += synapse0x15be600();
   input += synapse0x15be640();
   input += synapse0x15be680();
   input += synapse0x15be6c0();
   input += synapse0x15be700();
   input += synapse0x15be740();
   input += synapse0x15be1d0();
   input += synapse0x15be210();
   input += synapse0x15be890();
   input += synapse0x15be8d0();
   input += synapse0x15be910();
   input += synapse0x15be950();
   input += synapse0x15be990();
   input += synapse0x15be9d0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15be040() {
   double input = input0x15be040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15bea10() {
   double input = -0.511437;
   input += synapse0x15bed50();
   input += synapse0x15bed90();
   input += synapse0x15bedd0();
   input += synapse0x15bee10();
   input += synapse0x15bee50();
   input += synapse0x15bee90();
   input += synapse0x15beed0();
   input += synapse0x15bef10();
   input += synapse0x15bef50();
   input += synapse0x15bef90();
   input += synapse0x15befd0();
   input += synapse0x15bf010();
   input += synapse0x15bf050();
   input += synapse0x15bf090();
   input += synapse0x15bf0d0();
   input += synapse0x15bf110();
   input += synapse0x15beba0();
   input += synapse0x15bebe0();
   input += synapse0x15bf260();
   input += synapse0x15bf2a0();
   input += synapse0x15bf2e0();
   input += synapse0x15bf320();
   input += synapse0x15bf360();
   input += synapse0x15bf3a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15bea10() {
   double input = input0x15bea10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15bf3e0() {
   double input = 0.659976;
   input += synapse0x15bf720();
   input += synapse0x15bf760();
   input += synapse0x15bf7a0();
   input += synapse0x15bf7e0();
   input += synapse0x15bf820();
   input += synapse0x15bf860();
   input += synapse0x15bf8a0();
   input += synapse0x15bf8e0();
   input += synapse0x15bf920();
   input += synapse0x15bf960();
   input += synapse0x15bf9a0();
   input += synapse0x15bf9e0();
   input += synapse0x15bfa20();
   input += synapse0x15bfa60();
   input += synapse0x15bfaa0();
   input += synapse0x15bfae0();
   input += synapse0x15bf570();
   input += synapse0x15bf5b0();
   input += synapse0x15bfc30();
   input += synapse0x15bfc70();
   input += synapse0x15bfcb0();
   input += synapse0x15bfcf0();
   input += synapse0x15bfd30();
   input += synapse0x15bfd70();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15bf3e0() {
   double input = input0x15bf3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15bfdb0() {
   double input = -2.45063;
   input += synapse0x15c00f0();
   input += synapse0x15c0130();
   input += synapse0x15c0170();
   input += synapse0x15c01b0();
   input += synapse0x15c01f0();
   input += synapse0x15c0230();
   input += synapse0x15c0270();
   input += synapse0x15c02b0();
   input += synapse0x15c02f0();
   input += synapse0x15c0330();
   input += synapse0x15c0370();
   input += synapse0x15c03b0();
   input += synapse0x15c03f0();
   input += synapse0x15c0430();
   input += synapse0x15c0470();
   input += synapse0x15c04b0();
   input += synapse0x15bff40();
   input += synapse0x15bff80();
   input += synapse0x15c0600();
   input += synapse0x15c0640();
   input += synapse0x15c0680();
   input += synapse0x15c06c0();
   input += synapse0x15c0700();
   input += synapse0x15c0740();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15bfdb0() {
   double input = input0x15bfdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15c0780() {
   double input = -2.21427;
   input += synapse0x15c0ac0();
   input += synapse0x15c0b00();
   input += synapse0x15c0b40();
   input += synapse0x15c0b80();
   input += synapse0x15c0bc0();
   input += synapse0x15c0c00();
   input += synapse0x15c0c40();
   input += synapse0x15c0c80();
   input += synapse0x15c0cc0();
   input += synapse0x15c0d00();
   input += synapse0x15c0d40();
   input += synapse0x15c0d80();
   input += synapse0x15c0dc0();
   input += synapse0x15c0e00();
   input += synapse0x15c0e40();
   input += synapse0x15c0e80();
   input += synapse0x15c0910();
   input += synapse0x15c0950();
   input += synapse0x15c0fd0();
   input += synapse0x15c1010();
   input += synapse0x15c1050();
   input += synapse0x15c1090();
   input += synapse0x15c10d0();
   input += synapse0x15c1110();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15c0780() {
   double input = input0x15c0780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15c1150() {
   double input = 0.213048;
   input += synapse0x15c1490();
   input += synapse0x15c14d0();
   input += synapse0x15c1510();
   input += synapse0x15c1550();
   input += synapse0x15c1590();
   input += synapse0x15c15d0();
   input += synapse0x15c1610();
   input += synapse0x15c1650();
   input += synapse0x15c1690();
   input += synapse0x15c16d0();
   input += synapse0x15c1710();
   input += synapse0x15c1750();
   input += synapse0x15c1790();
   input += synapse0x15c17d0();
   input += synapse0x15c1810();
   input += synapse0x15c1850();
   input += synapse0x15c12e0();
   input += synapse0x15c1320();
   input += synapse0x15c19a0();
   input += synapse0x15c19e0();
   input += synapse0x15c1a20();
   input += synapse0x15c1a60();
   input += synapse0x15c1aa0();
   input += synapse0x15c1ae0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15c1150() {
   double input = input0x15c1150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15c1b20() {
   double input = -0.571494;
   input += synapse0x15aa590();
   input += synapse0x15aa5d0();
   input += synapse0x15aa610();
   input += synapse0x15aa650();
   input += synapse0x15aa690();
   input += synapse0x15aa6d0();
   input += synapse0x15aa710();
   input += synapse0x15aa750();
   input += synapse0x15c2270();
   input += synapse0x15c22b0();
   input += synapse0x15c22f0();
   input += synapse0x15c2330();
   input += synapse0x15c2370();
   input += synapse0x15c23b0();
   input += synapse0x15c23f0();
   input += synapse0x15c2430();
   input += synapse0x15c1cb0();
   input += synapse0x15c1cf0();
   input += synapse0x15c2580();
   input += synapse0x15c25c0();
   input += synapse0x15c2600();
   input += synapse0x15c2640();
   input += synapse0x15c2680();
   input += synapse0x15c26c0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15c1b20() {
   double input = input0x15c1b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15c2700() {
   double input = 0.636697;
   input += synapse0x15c2a40();
   input += synapse0x15c2a80();
   input += synapse0x15c2ac0();
   input += synapse0x15c2b00();
   input += synapse0x15c2b40();
   input += synapse0x15c2b80();
   input += synapse0x15c2bc0();
   input += synapse0x15c2c00();
   input += synapse0x15c2c40();
   input += synapse0x15c2c80();
   input += synapse0x15c2cc0();
   input += synapse0x15c2d00();
   input += synapse0x15c2d40();
   input += synapse0x15c2d80();
   input += synapse0x15c2dc0();
   input += synapse0x15c2e00();
   input += synapse0x15c2890();
   input += synapse0x15c28d0();
   input += synapse0x15c2f50();
   input += synapse0x15c2f90();
   input += synapse0x15c2fd0();
   input += synapse0x15c3010();
   input += synapse0x15c3050();
   input += synapse0x15c3090();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15c2700() {
   double input = input0x15c2700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15c30d0() {
   double input = 1.94996;
   input += synapse0x15c3410();
   input += synapse0x15c3450();
   input += synapse0x15c3490();
   input += synapse0x15c34d0();
   input += synapse0x15c3510();
   input += synapse0x15c3550();
   input += synapse0x15c3590();
   input += synapse0x15c35d0();
   input += synapse0x15c3610();
   input += synapse0x15c3650();
   input += synapse0x15c3690();
   input += synapse0x15c36d0();
   input += synapse0x15c3710();
   input += synapse0x15c3750();
   input += synapse0x15c3790();
   input += synapse0x15c37d0();
   input += synapse0x15c3260();
   input += synapse0x15c32a0();
   input += synapse0x15b3dd0();
   input += synapse0x15b3e10();
   input += synapse0x15b3e50();
   input += synapse0x15b3e90();
   input += synapse0x15b3ed0();
   input += synapse0x15b3f10();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15c30d0() {
   double input = input0x15c30d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b3f50() {
   double input = 1.84291;
   input += synapse0x15b4290();
   input += synapse0x15b42d0();
   input += synapse0x15b4310();
   input += synapse0x15b4350();
   input += synapse0x15b4390();
   input += synapse0x15b43d0();
   input += synapse0x15b4410();
   input += synapse0x15b4450();
   input += synapse0x15b4490();
   input += synapse0x15b44d0();
   input += synapse0x15b4510();
   input += synapse0x15b4550();
   input += synapse0x15b4590();
   input += synapse0x15b45d0();
   input += synapse0x15b4610();
   input += synapse0x15b4650();
   input += synapse0x15b40e0();
   input += synapse0x15b4120();
   input += synapse0x15b47a0();
   input += synapse0x15b47e0();
   input += synapse0x15b4820();
   input += synapse0x15b4860();
   input += synapse0x15b48a0();
   input += synapse0x15b48e0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b3f50() {
   double input = input0x15b3f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b4920() {
   double input = -0.422567;
   input += synapse0x15b4c60();
   input += synapse0x15b4ca0();
   input += synapse0x15b4ce0();
   input += synapse0x15b4d20();
   input += synapse0x15b4d60();
   input += synapse0x15b4da0();
   input += synapse0x15b4de0();
   input += synapse0x15b4e20();
   input += synapse0x15b4e60();
   input += synapse0x15b4ea0();
   input += synapse0x15b4ee0();
   input += synapse0x15b4f20();
   input += synapse0x15b4f60();
   input += synapse0x15b4fa0();
   input += synapse0x15b4fe0();
   input += synapse0x15b5020();
   input += synapse0x15b4ab0();
   input += synapse0x15b4af0();
   input += synapse0x15b5170();
   input += synapse0x15b51b0();
   input += synapse0x15b51f0();
   input += synapse0x15b5230();
   input += synapse0x15b5270();
   input += synapse0x15b52b0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b4920() {
   double input = input0x15b4920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15b52f0() {
   double input = 0.553063;
   input += synapse0x15b5630();
   input += synapse0x15b5670();
   input += synapse0x15b56b0();
   input += synapse0x15b56f0();
   input += synapse0x15b5730();
   input += synapse0x15b5770();
   input += synapse0x15b57b0();
   input += synapse0x15b57f0();
   input += synapse0x15b5830();
   input += synapse0x15b5870();
   input += synapse0x15b58b0();
   input += synapse0x15b58f0();
   input += synapse0x15b5930();
   input += synapse0x15b5970();
   input += synapse0x15b59b0();
   input += synapse0x15b59f0();
   input += synapse0x15b5480();
   input += synapse0x15b54c0();
   input += synapse0x15b5b40();
   input += synapse0x15b5b80();
   input += synapse0x15b5bc0();
   input += synapse0x15b5c00();
   input += synapse0x15b5c40();
   input += synapse0x15b5c80();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15b52f0() {
   double input = input0x15b52f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15c7930() {
   double input = 1.56285;
   input += synapse0x15c7b50();
   input += synapse0x15c7b90();
   input += synapse0x15c7bd0();
   input += synapse0x15c7c10();
   input += synapse0x15c7c50();
   input += synapse0x15c7c90();
   input += synapse0x15c7cd0();
   input += synapse0x15c7d10();
   input += synapse0x15c7d50();
   input += synapse0x15c7d90();
   input += synapse0x15c7dd0();
   input += synapse0x15c7e10();
   input += synapse0x15c7e50();
   input += synapse0x15c7e90();
   input += synapse0x15c7ed0();
   input += synapse0x15c7f10();
   input += synapse0x15b5cc0();
   input += synapse0x15b5d00();
   input += synapse0x15c8060();
   input += synapse0x15c80a0();
   input += synapse0x15c80e0();
   input += synapse0x15c8120();
   input += synapse0x15c8160();
   input += synapse0x15c81a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15c7930() {
   double input = input0x15c7930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15c81e0() {
   double input = 0.120424;
   input += synapse0x15c8520();
   input += synapse0x15c8560();
   input += synapse0x15c85a0();
   input += synapse0x15c85e0();
   input += synapse0x15c8620();
   input += synapse0x15c8660();
   input += synapse0x15c86a0();
   input += synapse0x15c86e0();
   input += synapse0x15c8720();
   input += synapse0x15c8760();
   input += synapse0x15c87a0();
   input += synapse0x15c87e0();
   input += synapse0x15c8820();
   input += synapse0x15c8860();
   input += synapse0x15c88a0();
   input += synapse0x15c88e0();
   input += synapse0x15c8370();
   input += synapse0x15c83b0();
   input += synapse0x15c8a30();
   input += synapse0x15c8a70();
   input += synapse0x15c8ab0();
   input += synapse0x15c8af0();
   input += synapse0x15c8b30();
   input += synapse0x15c8b70();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15c81e0() {
   double input = input0x15c81e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15c8bb0() {
   double input = 2.25405;
   input += synapse0x15c8ef0();
   input += synapse0x15c8f30();
   input += synapse0x15c8f70();
   input += synapse0x15c8fb0();
   input += synapse0x15c8ff0();
   input += synapse0x15c9030();
   input += synapse0x15c9070();
   input += synapse0x15c90b0();
   input += synapse0x15c90f0();
   input += synapse0x15c9130();
   input += synapse0x15c9170();
   input += synapse0x15c91b0();
   input += synapse0x15c91f0();
   input += synapse0x15c9230();
   input += synapse0x15c9270();
   input += synapse0x15c92b0();
   input += synapse0x15c8d40();
   input += synapse0x15c8d80();
   input += synapse0x15c9400();
   input += synapse0x15c9440();
   input += synapse0x15c9480();
   input += synapse0x15c94c0();
   input += synapse0x15c9500();
   input += synapse0x15c9540();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15c8bb0() {
   double input = input0x15c8bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15c9580() {
   double input = 1.7506;
   input += synapse0x15c98c0();
   input += synapse0x15c9900();
   input += synapse0x15c9940();
   input += synapse0x15c9980();
   input += synapse0x15c99c0();
   input += synapse0x15c9a00();
   input += synapse0x15c9a40();
   input += synapse0x15c9a80();
   input += synapse0x15c9ac0();
   input += synapse0x15c9b00();
   input += synapse0x15c9b40();
   input += synapse0x15c9b80();
   input += synapse0x15c9bc0();
   input += synapse0x15c9c00();
   input += synapse0x15c9c40();
   input += synapse0x15c9c80();
   input += synapse0x15c9710();
   input += synapse0x15c9750();
   input += synapse0x15c9dd0();
   input += synapse0x15c9e10();
   input += synapse0x15c9e50();
   input += synapse0x15c9e90();
   input += synapse0x15c9ed0();
   input += synapse0x15c9f10();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15c9580() {
   double input = input0x15c9580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15d0780() {
   double input = 1.08747;
   input += synapse0x15a64b0();
   input += synapse0x15a64f0();
   input += synapse0x15a79c0();
   input += synapse0x15a7a00();
   input += synapse0x15a8390();
   input += synapse0x15a83d0();
   input += synapse0x15a9160();
   input += synapse0x15a91a0();
   input += synapse0x15a9b30();
   input += synapse0x15a9b70();
   input += synapse0x15aa500();
   input += synapse0x15aa540();
   input += synapse0x15aafe0();
   input += synapse0x15ab020();
   input += synapse0x15ab9b0();
   input += synapse0x15ab9f0();
   input += synapse0x15a8a90();
   input += synapse0x15a8ad0();
   input += synapse0x15ad560();
   input += synapse0x15ad5a0();
   input += synapse0x15adf30();
   input += synapse0x15adf70();
   input += synapse0x15ae900();
   input += synapse0x15ae940();
   input += synapse0x15af2d0();
   input += synapse0x15af310();
   input += synapse0x15a3440();
   input += synapse0x15a3480();
   input += synapse0x15b13c0();
   input += synapse0x15b1400();
   input += synapse0x15b1d90();
   input += synapse0x15b1dd0();
   input += synapse0x15b2760();
   input += synapse0x15b27a0();
   input += synapse0x15b3130();
   input += synapse0x15b3170();
   input += synapse0x15b3b00();
   input += synapse0x15b3b40();
   input += synapse0x15ac650();
   input += synapse0x15ac690();
   input += synapse0x15b5f00();
   input += synapse0x15b5f40();
   input += synapse0x15b6890();
   input += synapse0x15b68d0();
   input += synapse0x15b7260();
   input += synapse0x15b72a0();
   input += synapse0x15b7c30();
   input += synapse0x15b7c70();
   input += synapse0x15b8600();
   input += synapse0x15b8640();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15d0780() {
   double input = input0x15d0780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15d0b20() {
   double input = 3.06065;
   input += synapse0x15bad40();
   input += synapse0x15bad80();
   input += synapse0x15b0300();
   input += synapse0x15b0340();
   input += synapse0x15bd920();
   input += synapse0x15bd960();
   input += synapse0x15be2f0();
   input += synapse0x15be330();
   input += synapse0x15becc0();
   input += synapse0x15bed00();
   input += synapse0x15bf690();
   input += synapse0x15bf6d0();
   input += synapse0x15c0060();
   input += synapse0x15c00a0();
   input += synapse0x15c0a30();
   input += synapse0x15c0a70();
   input += synapse0x15c1400();
   input += synapse0x15c1440();
   input += synapse0x15c1dd0();
   input += synapse0x15c1e10();
   input += synapse0x15c29b0();
   input += synapse0x15c29f0();
   input += synapse0x15c3380();
   input += synapse0x15c33c0();
   input += synapse0x15b4200();
   input += synapse0x15b4240();
   input += synapse0x15b4bd0();
   input += synapse0x15b4c10();
   input += synapse0x15b55a0();
   input += synapse0x15b55e0();
   input += synapse0x15c7ac0();
   input += synapse0x15c7b00();
   input += synapse0x15c8490();
   input += synapse0x15c84d0();
   input += synapse0x15c8e60();
   input += synapse0x15c8ea0();
   input += synapse0x15c9830();
   input += synapse0x15c9870();
   input += synapse0x15a5720();
   input += synapse0x15a5760();
   input += synapse0x15b8fd0();
   input += synapse0x15b9010();
   input += synapse0x15c9f50();
   input += synapse0x15c9f90();
   input += synapse0x15c9fd0();
   input += synapse0x15ca010();
   input += synapse0x15d0ec0();
   input += synapse0x15d0f00();
   input += synapse0x15d0f40();
   input += synapse0x15d0f80();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15d0b20() {
   double input = input0x15d0b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15d0fc0() {
   double input = 0.0444161;
   input += synapse0x15d1300();
   input += synapse0x15d1340();
   input += synapse0x15d1380();
   input += synapse0x15d13c0();
   input += synapse0x15d1400();
   input += synapse0x15d1440();
   input += synapse0x15d1480();
   input += synapse0x15d14c0();
   input += synapse0x15d1500();
   input += synapse0x15d1540();
   input += synapse0x15d1580();
   input += synapse0x15d15c0();
   input += synapse0x15d1600();
   input += synapse0x15d1640();
   input += synapse0x15d1680();
   input += synapse0x15d16c0();
   input += synapse0x15d1150();
   input += synapse0x15d1190();
   input += synapse0x15d1810();
   input += synapse0x15d1850();
   input += synapse0x15d1890();
   input += synapse0x15d18d0();
   input += synapse0x15d1910();
   input += synapse0x15d1950();
   input += synapse0x15d1990();
   input += synapse0x15d19d0();
   input += synapse0x15d1a10();
   input += synapse0x15d1a50();
   input += synapse0x15d1a90();
   input += synapse0x15d1ad0();
   input += synapse0x15d1b10();
   input += synapse0x15d1b50();
   input += synapse0x15d1700();
   input += synapse0x15d1740();
   input += synapse0x15d1780();
   input += synapse0x15d17c0();
   input += synapse0x15d1da0();
   input += synapse0x15d1de0();
   input += synapse0x15d1e20();
   input += synapse0x15d1e60();
   input += synapse0x15d1ea0();
   input += synapse0x15d1ee0();
   input += synapse0x15d1f20();
   input += synapse0x15d1f60();
   input += synapse0x15d1fa0();
   input += synapse0x15d1fe0();
   input += synapse0x15d2020();
   input += synapse0x15d2060();
   input += synapse0x15d20a0();
   input += synapse0x15d20e0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15d0fc0() {
   double input = input0x15d0fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15d2120() {
   double input = 0.289992;
   input += synapse0x15d2460();
   input += synapse0x15d24a0();
   input += synapse0x15d24e0();
   input += synapse0x15d2520();
   input += synapse0x15d2560();
   input += synapse0x15d25a0();
   input += synapse0x15d25e0();
   input += synapse0x15d2620();
   input += synapse0x15d2660();
   input += synapse0x15d26a0();
   input += synapse0x15d26e0();
   input += synapse0x15d2720();
   input += synapse0x15d2760();
   input += synapse0x15d27a0();
   input += synapse0x15d27e0();
   input += synapse0x15d2820();
   input += synapse0x15d22b0();
   input += synapse0x15d22f0();
   input += synapse0x15d2970();
   input += synapse0x15d29b0();
   input += synapse0x15d29f0();
   input += synapse0x15d2a30();
   input += synapse0x15d2a70();
   input += synapse0x15d2ab0();
   input += synapse0x15d2af0();
   input += synapse0x15d2b30();
   input += synapse0x15d2b70();
   input += synapse0x15d2bb0();
   input += synapse0x15d2bf0();
   input += synapse0x15d2c30();
   input += synapse0x15d2c70();
   input += synapse0x15d2cb0();
   input += synapse0x15d2860();
   input += synapse0x15d28a0();
   input += synapse0x15d28e0();
   input += synapse0x15d2920();
   input += synapse0x15d2f00();
   input += synapse0x15d2f40();
   input += synapse0x15d2f80();
   input += synapse0x15d2fc0();
   input += synapse0x15d3000();
   input += synapse0x15d3040();
   input += synapse0x15d3080();
   input += synapse0x15d30c0();
   input += synapse0x15d3100();
   input += synapse0x15d3140();
   input += synapse0x15d3180();
   input += synapse0x15d31c0();
   input += synapse0x15d3200();
   input += synapse0x15d3240();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15d2120() {
   double input = input0x15d2120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15d3280() {
   double input = -1.21497;
   input += synapse0x15d35c0();
   input += synapse0x15d3600();
   input += synapse0x15d3640();
   input += synapse0x15d3680();
   input += synapse0x15d36c0();
   input += synapse0x15d3700();
   input += synapse0x15d3740();
   input += synapse0x15d3780();
   input += synapse0x15d37c0();
   input += synapse0x15d3800();
   input += synapse0x15d3840();
   input += synapse0x15d3880();
   input += synapse0x15d38c0();
   input += synapse0x15d3900();
   input += synapse0x15d3940();
   input += synapse0x15d3980();
   input += synapse0x15d3410();
   input += synapse0x15d3450();
   input += synapse0x15d3ad0();
   input += synapse0x15d3b10();
   input += synapse0x15d3b50();
   input += synapse0x15d3b90();
   input += synapse0x15d3bd0();
   input += synapse0x15d3c10();
   input += synapse0x15d3c50();
   input += synapse0x15d3c90();
   input += synapse0x15d3cd0();
   input += synapse0x15d3d10();
   input += synapse0x15d3d50();
   input += synapse0x15d3d90();
   input += synapse0x15d3dd0();
   input += synapse0x15d3e10();
   input += synapse0x15d39c0();
   input += synapse0x15d3a00();
   input += synapse0x15d3a40();
   input += synapse0x15d3a80();
   input += synapse0x15d4060();
   input += synapse0x15d40a0();
   input += synapse0x15d40e0();
   input += synapse0x15d4120();
   input += synapse0x15d4160();
   input += synapse0x15d41a0();
   input += synapse0x15d41e0();
   input += synapse0x15d4220();
   input += synapse0x15d4260();
   input += synapse0x15d42a0();
   input += synapse0x15d42e0();
   input += synapse0x15d4320();
   input += synapse0x15d4360();
   input += synapse0x15d43a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15d3280() {
   double input = input0x15d3280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x15d43e0() {
   double input = 3.94268;
   input += synapse0x15a54c0();
   input += synapse0x15d4600();
   input += synapse0x15d4640();
   input += synapse0x15d4680();
   input += synapse0x15d46c0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x15d43e0() {
   double input = input0x15d43e0();
   return (input * 1)+0;
}

double NNfunction_sb_sRcR::synapse0x1360310() {
   return (neuron0x15a04a0()*0.0030391);
}

double NNfunction_sb_sRcR::synapse0x15a0360() {
   return (neuron0x15a07e0()*0.0713232);
}

double NNfunction_sb_sRcR::synapse0x15a03a0() {
   return (neuron0x15a0b20()*0.0143627);
}

double NNfunction_sb_sRcR::synapse0x15a57b0() {
   return (neuron0x15a0e60()*-9.17071);
}

double NNfunction_sb_sRcR::synapse0x15a57f0() {
   return (neuron0x15a11a0()*-0.0230443);
}

double NNfunction_sb_sRcR::synapse0x15a5830() {
   return (neuron0x15a14e0()*-0.0114054);
}

double NNfunction_sb_sRcR::synapse0x15a5870() {
   return (neuron0x15a1820()*-0.0189321);
}

double NNfunction_sb_sRcR::synapse0x15a58b0() {
   return (neuron0x15a1b60()*0.0303246);
}

double NNfunction_sb_sRcR::synapse0x15a58f0() {
   return (neuron0x15a1ea0()*-0.0015584);
}

double NNfunction_sb_sRcR::synapse0x15a5930() {
   return (neuron0x15a21e0()*-0.0421954);
}

double NNfunction_sb_sRcR::synapse0x15a5970() {
   return (neuron0x15a2520()*0.00855085);
}

double NNfunction_sb_sRcR::synapse0x15a59b0() {
   return (neuron0x15a2860()*-0.0025597);
}

double NNfunction_sb_sRcR::synapse0x15a59f0() {
   return (neuron0x15a2ba0()*-0.0411988);
}

double NNfunction_sb_sRcR::synapse0x15a5a30() {
   return (neuron0x15a2ee0()*0.0534938);
}

double NNfunction_sb_sRcR::synapse0x15a5a70() {
   return (neuron0x15a3220()*-0.0180973);
}

double NNfunction_sb_sRcR::synapse0x15a5ab0() {
   return (neuron0x15a3560()*-0.128437);
}

double NNfunction_sb_sRcR::synapse0x15a02d0() {
   return (neuron0x15a38a0()*0.0471547);
}

double NNfunction_sb_sRcR::synapse0x15a0310() {
   return (neuron0x15a3e00()*-0.0286781);
}

double NNfunction_sb_sRcR::synapse0x1351bb0() {
   return (neuron0x15a4020()*-0.17611);
}

double NNfunction_sb_sRcR::synapse0x1351bf0() {
   return (neuron0x15a4360()*-0.00391674);
}

double NNfunction_sb_sRcR::synapse0x15a5d10() {
   return (neuron0x15a46a0()*-0.0442862);
}

double NNfunction_sb_sRcR::synapse0x15a5d50() {
   return (neuron0x15a49e0()*-0.0183677);
}

double NNfunction_sb_sRcR::synapse0x15a5d90() {
   return (neuron0x15a4d20()*0.0169455);
}

double NNfunction_sb_sRcR::synapse0x15a5dd0() {
   return (neuron0x15a5060()*-0.00704199);
}

double NNfunction_sb_sRcR::synapse0x15a6150() {
   return (neuron0x15a04a0()*0.3568);
}

double NNfunction_sb_sRcR::synapse0x15a6190() {
   return (neuron0x15a07e0()*-0.174269);
}

double NNfunction_sb_sRcR::synapse0x15a61d0() {
   return (neuron0x15a0b20()*0.0773623);
}

double NNfunction_sb_sRcR::synapse0x15a6210() {
   return (neuron0x15a0e60()*-2.3597);
}

double NNfunction_sb_sRcR::synapse0x15a6250() {
   return (neuron0x15a11a0()*0.141744);
}

double NNfunction_sb_sRcR::synapse0x15a6290() {
   return (neuron0x15a14e0()*0.0636341);
}

double NNfunction_sb_sRcR::synapse0x15a62d0() {
   return (neuron0x15a1820()*0.620492);
}

double NNfunction_sb_sRcR::synapse0x15a6310() {
   return (neuron0x15a1b60()*-0.281061);
}

double NNfunction_sb_sRcR::synapse0x15a6350() {
   return (neuron0x15a1ea0()*0.431493);
}

double NNfunction_sb_sRcR::synapse0x15a5c00() {
   return (neuron0x15a21e0()*-0.716727);
}

double NNfunction_sb_sRcR::synapse0x15a5c40() {
   return (neuron0x15a2520()*0.168652);
}

double NNfunction_sb_sRcR::synapse0x15a5c80() {
   return (neuron0x15a2860()*-0.5709);
}

double NNfunction_sb_sRcR::synapse0x15a5cc0() {
   return (neuron0x15a2ba0()*-0.00991498);
}

double NNfunction_sb_sRcR::synapse0x15a65a0() {
   return (neuron0x15a2ee0()*0.238128);
}

double NNfunction_sb_sRcR::synapse0x15a65e0() {
   return (neuron0x15a3220()*-0.0922226);
}

double NNfunction_sb_sRcR::synapse0x15a6620() {
   return (neuron0x15a3560()*0.772156);
}

double NNfunction_sb_sRcR::synapse0x15a5fa0() {
   return (neuron0x15a38a0()*0.299173);
}

double NNfunction_sb_sRcR::synapse0x15a5fe0() {
   return (neuron0x15a3e00()*0.104987);
}

double NNfunction_sb_sRcR::synapse0x15a6770() {
   return (neuron0x15a4020()*0.481144);
}

double NNfunction_sb_sRcR::synapse0x15a67b0() {
   return (neuron0x15a4360()*-0.208592);
}

double NNfunction_sb_sRcR::synapse0x15a67f0() {
   return (neuron0x15a46a0()*-0.312354);
}

double NNfunction_sb_sRcR::synapse0x15a6830() {
   return (neuron0x15a49e0()*-0.142405);
}

double NNfunction_sb_sRcR::synapse0x15a6870() {
   return (neuron0x15a4d20()*0.758094);
}

double NNfunction_sb_sRcR::synapse0x15a68b0() {
   return (neuron0x15a5060()*-0.440327);
}

double NNfunction_sb_sRcR::synapse0x15a6c30() {
   return (neuron0x15a04a0()*-0.433104);
}

double NNfunction_sb_sRcR::synapse0x15a6c70() {
   return (neuron0x15a07e0()*0.0696343);
}

double NNfunction_sb_sRcR::synapse0x15a6cb0() {
   return (neuron0x15a0b20()*-0.0245224);
}

double NNfunction_sb_sRcR::synapse0x15a6cf0() {
   return (neuron0x15a0e60()*-0.305518);
}

double NNfunction_sb_sRcR::synapse0x15a6d30() {
   return (neuron0x15a11a0()*-0.538328);
}

double NNfunction_sb_sRcR::synapse0x15a6d70() {
   return (neuron0x15a14e0()*-0.683729);
}

double NNfunction_sb_sRcR::synapse0x15a6db0() {
   return (neuron0x15a1820()*-0.104275);
}

double NNfunction_sb_sRcR::synapse0x15a6df0() {
   return (neuron0x15a1b60()*0.402042);
}

double NNfunction_sb_sRcR::synapse0x15a6e30() {
   return (neuron0x15a1ea0()*-0.283445);
}

double NNfunction_sb_sRcR::synapse0x15a6e70() {
   return (neuron0x15a21e0()*0.458854);
}

double NNfunction_sb_sRcR::synapse0x15a6eb0() {
   return (neuron0x15a2520()*0.365498);
}

double NNfunction_sb_sRcR::synapse0x15a6ef0() {
   return (neuron0x15a2860()*2.2743);
}

double NNfunction_sb_sRcR::synapse0x15a6f30() {
   return (neuron0x15a2ba0()*-0.100098);
}

double NNfunction_sb_sRcR::synapse0x15a6f70() {
   return (neuron0x15a2ee0()*-0.338631);
}

double NNfunction_sb_sRcR::synapse0x15a6fb0() {
   return (neuron0x15a3220()*0.677622);
}

double NNfunction_sb_sRcR::synapse0x15a6ff0() {
   return (neuron0x15a3560()*-0.340705);
}

double NNfunction_sb_sRcR::synapse0x15a6a80() {
   return (neuron0x15a38a0()*-0.745982);
}

double NNfunction_sb_sRcR::synapse0x15a6ac0() {
   return (neuron0x15a3e00()*0.443804);
}

double NNfunction_sb_sRcR::synapse0x135fa00() {
   return (neuron0x15a4020()*-0.122669);
}

double NNfunction_sb_sRcR::synapse0x135fa40() {
   return (neuron0x15a4360()*-0.10226);
}

double NNfunction_sb_sRcR::synapse0x158f530() {
   return (neuron0x15a46a0()*-0.021348);
}

double NNfunction_sb_sRcR::synapse0x158f570() {
   return (neuron0x15a49e0()*0.364483);
}

double NNfunction_sb_sRcR::synapse0x158f5b0() {
   return (neuron0x15a4d20()*-0.182596);
}

double NNfunction_sb_sRcR::synapse0x15a03e0() {
   return (neuron0x15a5060()*-0.31434);
}

double NNfunction_sb_sRcR::synapse0x15a6540() {
   return (neuron0x15a04a0()*-0.908374);
}

double NNfunction_sb_sRcR::synapse0x15a0420() {
   return (neuron0x15a07e0()*-0.420636);
}

double NNfunction_sb_sRcR::synapse0x15a0460() {
   return (neuron0x15a0b20()*0.469769);
}

double NNfunction_sb_sRcR::synapse0x15a7140() {
   return (neuron0x15a0e60()*-0.90647);
}

double NNfunction_sb_sRcR::synapse0x15a7180() {
   return (neuron0x15a11a0()*-0.0370932);
}

double NNfunction_sb_sRcR::synapse0x15a71c0() {
   return (neuron0x15a14e0()*-0.0416306);
}

double NNfunction_sb_sRcR::synapse0x15a7200() {
   return (neuron0x15a1820()*-0.264429);
}

double NNfunction_sb_sRcR::synapse0x15a7240() {
   return (neuron0x15a1b60()*-0.14236);
}

double NNfunction_sb_sRcR::synapse0x15a7280() {
   return (neuron0x15a1ea0()*-0.0553654);
}

double NNfunction_sb_sRcR::synapse0x15a72c0() {
   return (neuron0x15a21e0()*0.0438647);
}

double NNfunction_sb_sRcR::synapse0x15a7300() {
   return (neuron0x15a2520()*-1.13353);
}

double NNfunction_sb_sRcR::synapse0x15a7340() {
   return (neuron0x15a2860()*-0.135399);
}

double NNfunction_sb_sRcR::synapse0x15a7380() {
   return (neuron0x15a2ba0()*0.525211);
}

double NNfunction_sb_sRcR::synapse0x15a73c0() {
   return (neuron0x15a2ee0()*-0.0297706);
}

double NNfunction_sb_sRcR::synapse0x15a7400() {
   return (neuron0x15a3220()*-0.691938);
}

double NNfunction_sb_sRcR::synapse0x15a7440() {
   return (neuron0x15a3560()*1.73717);
}

double NNfunction_sb_sRcR::synapse0x15a6390() {
   return (neuron0x15a38a0()*0.000408734);
}

double NNfunction_sb_sRcR::synapse0x15a63d0() {
   return (neuron0x15a3e00()*-0.0304401);
}

double NNfunction_sb_sRcR::synapse0x15a7590() {
   return (neuron0x15a4020()*-1.15283);
}

double NNfunction_sb_sRcR::synapse0x15a75d0() {
   return (neuron0x15a4360()*0.141027);
}

double NNfunction_sb_sRcR::synapse0x15a7610() {
   return (neuron0x15a46a0()*0.545249);
}

double NNfunction_sb_sRcR::synapse0x15a7650() {
   return (neuron0x15a49e0()*-0.997624);
}

double NNfunction_sb_sRcR::synapse0x15a7690() {
   return (neuron0x15a4d20()*0.145891);
}

double NNfunction_sb_sRcR::synapse0x15a76d0() {
   return (neuron0x15a5060()*0.110933);
}

double NNfunction_sb_sRcR::synapse0x15a7a50() {
   return (neuron0x15a04a0()*-1.0085);
}

double NNfunction_sb_sRcR::synapse0x15a7a90() {
   return (neuron0x15a07e0()*0.894202);
}

double NNfunction_sb_sRcR::synapse0x15a7ad0() {
   return (neuron0x15a0b20()*-0.620252);
}

double NNfunction_sb_sRcR::synapse0x15a7b10() {
   return (neuron0x15a0e60()*0.422293);
}

double NNfunction_sb_sRcR::synapse0x15a7b50() {
   return (neuron0x15a11a0()*-0.332714);
}

double NNfunction_sb_sRcR::synapse0x15a7b90() {
   return (neuron0x15a14e0()*-0.0748526);
}

double NNfunction_sb_sRcR::synapse0x15a7bd0() {
   return (neuron0x15a1820()*-0.42655);
}

double NNfunction_sb_sRcR::synapse0x15a7c10() {
   return (neuron0x15a1b60()*-0.284061);
}

double NNfunction_sb_sRcR::synapse0x15a7c50() {
   return (neuron0x15a1ea0()*1.02438);
}

double NNfunction_sb_sRcR::synapse0x15a7c90() {
   return (neuron0x15a21e0()*1.0365);
}

double NNfunction_sb_sRcR::synapse0x15a7cd0() {
   return (neuron0x15a2520()*-0.0759777);
}

double NNfunction_sb_sRcR::synapse0x15a7d10() {
   return (neuron0x15a2860()*0.612791);
}

double NNfunction_sb_sRcR::synapse0x15a7d50() {
   return (neuron0x15a2ba0()*1.23861);
}

double NNfunction_sb_sRcR::synapse0x15a7d90() {
   return (neuron0x15a2ee0()*0.189899);
}

double NNfunction_sb_sRcR::synapse0x15a7dd0() {
   return (neuron0x15a3220()*-0.129235);
}

double NNfunction_sb_sRcR::synapse0x15a7e10() {
   return (neuron0x15a3560()*-0.847268);
}

double NNfunction_sb_sRcR::synapse0x15a78a0() {
   return (neuron0x15a38a0()*0.414727);
}

double NNfunction_sb_sRcR::synapse0x15a78e0() {
   return (neuron0x15a3e00()*-0.560533);
}

double NNfunction_sb_sRcR::synapse0x15a7f60() {
   return (neuron0x15a4020()*0.983479);
}

double NNfunction_sb_sRcR::synapse0x15a7fa0() {
   return (neuron0x15a4360()*0.0752632);
}

double NNfunction_sb_sRcR::synapse0x15a7fe0() {
   return (neuron0x15a46a0()*-0.0451365);
}

double NNfunction_sb_sRcR::synapse0x15a8020() {
   return (neuron0x15a49e0()*-0.366143);
}

double NNfunction_sb_sRcR::synapse0x15a8060() {
   return (neuron0x15a4d20()*0.477798);
}

double NNfunction_sb_sRcR::synapse0x15a80a0() {
   return (neuron0x15a5060()*-0.78252);
}

double NNfunction_sb_sRcR::synapse0x15a8420() {
   return (neuron0x15a04a0()*0.873775);
}

double NNfunction_sb_sRcR::synapse0x15a8460() {
   return (neuron0x15a07e0()*0.936054);
}

double NNfunction_sb_sRcR::synapse0x15a84a0() {
   return (neuron0x15a0b20()*0.161344);
}

double NNfunction_sb_sRcR::synapse0x15a84e0() {
   return (neuron0x15a0e60()*0.271037);
}

double NNfunction_sb_sRcR::synapse0x15a8520() {
   return (neuron0x15a11a0()*-0.464429);
}

double NNfunction_sb_sRcR::synapse0x15a8560() {
   return (neuron0x15a14e0()*-0.257789);
}

double NNfunction_sb_sRcR::synapse0x15a85a0() {
   return (neuron0x15a1820()*0.36677);
}

double NNfunction_sb_sRcR::synapse0x15a85e0() {
   return (neuron0x15a1b60()*0.241277);
}

double NNfunction_sb_sRcR::synapse0x15a8620() {
   return (neuron0x15a1ea0()*0.150808);
}

double NNfunction_sb_sRcR::synapse0x135fd70() {
   return (neuron0x15a21e0()*-0.305545);
}

double NNfunction_sb_sRcR::synapse0x135fdb0() {
   return (neuron0x15a2520()*0.931273);
}

double NNfunction_sb_sRcR::synapse0x135fdf0() {
   return (neuron0x15a2860()*1.30302);
}

double NNfunction_sb_sRcR::synapse0x135fe30() {
   return (neuron0x15a2ba0()*-0.672636);
}

double NNfunction_sb_sRcR::synapse0x135fe70() {
   return (neuron0x15a2ee0()*-0.322346);
}

double NNfunction_sb_sRcR::synapse0x135feb0() {
   return (neuron0x15a3220()*0.130959);
}

double NNfunction_sb_sRcR::synapse0x135fef0() {
   return (neuron0x15a3560()*-0.386102);
}

double NNfunction_sb_sRcR::synapse0x15a8270() {
   return (neuron0x15a38a0()*0.281857);
}

double NNfunction_sb_sRcR::synapse0x15a82b0() {
   return (neuron0x15a3e00()*-0.564157);
}

double NNfunction_sb_sRcR::synapse0x1360040() {
   return (neuron0x15a4020()*0.808349);
}

double NNfunction_sb_sRcR::synapse0x1360080() {
   return (neuron0x15a4360()*0.484805);
}

double NNfunction_sb_sRcR::synapse0x13600c0() {
   return (neuron0x15a46a0()*0.423177);
}

double NNfunction_sb_sRcR::synapse0x1360100() {
   return (neuron0x15a49e0()*-0.844059);
}

double NNfunction_sb_sRcR::synapse0x1360140() {
   return (neuron0x15a4d20()*-0.52323);
}

double NNfunction_sb_sRcR::synapse0x15a8e70() {
   return (neuron0x15a5060()*0.79074);
}

double NNfunction_sb_sRcR::synapse0x15a91f0() {
   return (neuron0x15a04a0()*0.00442689);
}

double NNfunction_sb_sRcR::synapse0x15a9230() {
   return (neuron0x15a07e0()*0.00498712);
}

double NNfunction_sb_sRcR::synapse0x15a9270() {
   return (neuron0x15a0b20()*0.00952613);
}

double NNfunction_sb_sRcR::synapse0x15a92b0() {
   return (neuron0x15a0e60()*-0.157254);
}

double NNfunction_sb_sRcR::synapse0x15a92f0() {
   return (neuron0x15a11a0()*0.00568459);
}

double NNfunction_sb_sRcR::synapse0x15a9330() {
   return (neuron0x15a14e0()*0.00288633);
}

double NNfunction_sb_sRcR::synapse0x15a9370() {
   return (neuron0x15a1820()*0.0151397);
}

double NNfunction_sb_sRcR::synapse0x15a93b0() {
   return (neuron0x15a1b60()*0.0128193);
}

double NNfunction_sb_sRcR::synapse0x15a93f0() {
   return (neuron0x15a1ea0()*-0.0189221);
}

double NNfunction_sb_sRcR::synapse0x15a9430() {
   return (neuron0x15a21e0()*-0.0121688);
}

double NNfunction_sb_sRcR::synapse0x15a9470() {
   return (neuron0x15a2520()*-0.00287235);
}

double NNfunction_sb_sRcR::synapse0x15a94b0() {
   return (neuron0x15a2860()*0.06188);
}

double NNfunction_sb_sRcR::synapse0x15a94f0() {
   return (neuron0x15a2ba0()*0.0202049);
}

double NNfunction_sb_sRcR::synapse0x15a9530() {
   return (neuron0x15a2ee0()*-0.0115196);
}

double NNfunction_sb_sRcR::synapse0x15a9570() {
   return (neuron0x15a3220()*0.0356394);
}

double NNfunction_sb_sRcR::synapse0x15a95b0() {
   return (neuron0x15a3560()*-0.630627);
}

double NNfunction_sb_sRcR::synapse0x15a9040() {
   return (neuron0x15a38a0()*-0.00613473);
}

double NNfunction_sb_sRcR::synapse0x15a9080() {
   return (neuron0x15a3e00()*0.0106423);
}

double NNfunction_sb_sRcR::synapse0x15a9700() {
   return (neuron0x15a4020()*0.76958);
}

double NNfunction_sb_sRcR::synapse0x15a9740() {
   return (neuron0x15a4360()*0.00598153);
}

double NNfunction_sb_sRcR::synapse0x15a9780() {
   return (neuron0x15a46a0()*0.00668138);
}

double NNfunction_sb_sRcR::synapse0x15a97c0() {
   return (neuron0x15a49e0()*-0.022004);
}

double NNfunction_sb_sRcR::synapse0x15a9800() {
   return (neuron0x15a4d20()*0.0114981);
}

double NNfunction_sb_sRcR::synapse0x15a9840() {
   return (neuron0x15a5060()*-0.00236671);
}

double NNfunction_sb_sRcR::synapse0x15a9bc0() {
   return (neuron0x15a04a0()*0.161866);
}

double NNfunction_sb_sRcR::synapse0x15a9c00() {
   return (neuron0x15a07e0()*-1.15253);
}

double NNfunction_sb_sRcR::synapse0x15a9c40() {
   return (neuron0x15a0b20()*0.772495);
}

double NNfunction_sb_sRcR::synapse0x15a9c80() {
   return (neuron0x15a0e60()*0.240173);
}

double NNfunction_sb_sRcR::synapse0x15a9cc0() {
   return (neuron0x15a11a0()*-1.54591);
}

double NNfunction_sb_sRcR::synapse0x15a9d00() {
   return (neuron0x15a14e0()*-0.864926);
}

double NNfunction_sb_sRcR::synapse0x15a9d40() {
   return (neuron0x15a1820()*0.0621723);
}

double NNfunction_sb_sRcR::synapse0x15a9d80() {
   return (neuron0x15a1b60()*0.1662);
}

double NNfunction_sb_sRcR::synapse0x15a9dc0() {
   return (neuron0x15a1ea0()*0.77557);
}

double NNfunction_sb_sRcR::synapse0x15a9e00() {
   return (neuron0x15a21e0()*0.265371);
}

double NNfunction_sb_sRcR::synapse0x15a9e40() {
   return (neuron0x15a2520()*1.1599);
}

double NNfunction_sb_sRcR::synapse0x15a9e80() {
   return (neuron0x15a2860()*0.700518);
}

double NNfunction_sb_sRcR::synapse0x15a9ec0() {
   return (neuron0x15a2ba0()*-0.366421);
}

double NNfunction_sb_sRcR::synapse0x15a9f00() {
   return (neuron0x15a2ee0()*0.361895);
}

double NNfunction_sb_sRcR::synapse0x15a9f40() {
   return (neuron0x15a3220()*-1.15018);
}

double NNfunction_sb_sRcR::synapse0x15a9f80() {
   return (neuron0x15a3560()*0.501236);
}

double NNfunction_sb_sRcR::synapse0x15a9a10() {
   return (neuron0x15a38a0()*0.469892);
}

double NNfunction_sb_sRcR::synapse0x15a9a50() {
   return (neuron0x15a3e00()*-0.583622);
}

double NNfunction_sb_sRcR::synapse0x15aa0d0() {
   return (neuron0x15a4020()*-0.259911);
}

double NNfunction_sb_sRcR::synapse0x15aa110() {
   return (neuron0x15a4360()*0.133604);
}

double NNfunction_sb_sRcR::synapse0x15aa150() {
   return (neuron0x15a46a0()*0.356603);
}

double NNfunction_sb_sRcR::synapse0x15aa190() {
   return (neuron0x15a49e0()*-0.102039);
}

double NNfunction_sb_sRcR::synapse0x15aa1d0() {
   return (neuron0x15a4d20()*0.132935);
}

double NNfunction_sb_sRcR::synapse0x15aa210() {
   return (neuron0x15a5060()*0.00797702);
}

double NNfunction_sb_sRcR::synapse0x15a3cf0() {
   return (neuron0x15a04a0()*-0.744871);
}

double NNfunction_sb_sRcR::synapse0x15a3d30() {
   return (neuron0x15a07e0()*0.207031);
}

double NNfunction_sb_sRcR::synapse0x15a3d70() {
   return (neuron0x15a0b20()*0.176863);
}

double NNfunction_sb_sRcR::synapse0x15a3db0() {
   return (neuron0x15a0e60()*0.388906);
}

double NNfunction_sb_sRcR::synapse0x15aa7a0() {
   return (neuron0x15a11a0()*0.32485);
}

double NNfunction_sb_sRcR::synapse0x15aa7e0() {
   return (neuron0x15a14e0()*-1.0675);
}

double NNfunction_sb_sRcR::synapse0x15aa820() {
   return (neuron0x15a1820()*-1.03352);
}

double NNfunction_sb_sRcR::synapse0x15aa860() {
   return (neuron0x15a1b60()*0.0732495);
}

double NNfunction_sb_sRcR::synapse0x15aa8a0() {
   return (neuron0x15a1ea0()*-0.405525);
}

double NNfunction_sb_sRcR::synapse0x15aa8e0() {
   return (neuron0x15a21e0()*0.484636);
}

double NNfunction_sb_sRcR::synapse0x15aa920() {
   return (neuron0x15a2520()*0.521801);
}

double NNfunction_sb_sRcR::synapse0x15aa960() {
   return (neuron0x15a2860()*-0.52806);
}

double NNfunction_sb_sRcR::synapse0x15aa9a0() {
   return (neuron0x15a2ba0()*-0.384659);
}

double NNfunction_sb_sRcR::synapse0x15aa9e0() {
   return (neuron0x15a2ee0()*-0.564767);
}

double NNfunction_sb_sRcR::synapse0x15aaa20() {
   return (neuron0x15a3220()*0.723412);
}

double NNfunction_sb_sRcR::synapse0x15aaa60() {
   return (neuron0x15a3560()*0.587789);
}

double NNfunction_sb_sRcR::synapse0x15aa3e0() {
   return (neuron0x15a38a0()*0.46818);
}

double NNfunction_sb_sRcR::synapse0x15aa420() {
   return (neuron0x15a3e00()*-0.127315);
}

double NNfunction_sb_sRcR::synapse0x15aabb0() {
   return (neuron0x15a4020()*0.533895);
}

double NNfunction_sb_sRcR::synapse0x15aabf0() {
   return (neuron0x15a4360()*0.0325752);
}

double NNfunction_sb_sRcR::synapse0x15aac30() {
   return (neuron0x15a46a0()*-0.285396);
}

double NNfunction_sb_sRcR::synapse0x15aac70() {
   return (neuron0x15a49e0()*0.208926);
}

double NNfunction_sb_sRcR::synapse0x15aacb0() {
   return (neuron0x15a4d20()*0.0545849);
}

double NNfunction_sb_sRcR::synapse0x15aacf0() {
   return (neuron0x15a5060()*1.04983);
}

double NNfunction_sb_sRcR::synapse0x15ab070() {
   return (neuron0x15a04a0()*0.220606);
}

double NNfunction_sb_sRcR::synapse0x15ab0b0() {
   return (neuron0x15a07e0()*-0.127121);
}

double NNfunction_sb_sRcR::synapse0x15ab0f0() {
   return (neuron0x15a0b20()*0.329631);
}

double NNfunction_sb_sRcR::synapse0x15ab130() {
   return (neuron0x15a0e60()*-0.892483);
}

double NNfunction_sb_sRcR::synapse0x15ab170() {
   return (neuron0x15a11a0()*-0.667266);
}

double NNfunction_sb_sRcR::synapse0x15ab1b0() {
   return (neuron0x15a14e0()*-0.82062);
}

double NNfunction_sb_sRcR::synapse0x15ab1f0() {
   return (neuron0x15a1820()*0.32592);
}

double NNfunction_sb_sRcR::synapse0x15ab230() {
   return (neuron0x15a1b60()*0.703897);
}

double NNfunction_sb_sRcR::synapse0x15ab270() {
   return (neuron0x15a1ea0()*-0.605988);
}

double NNfunction_sb_sRcR::synapse0x15ab2b0() {
   return (neuron0x15a21e0()*1.40401);
}

double NNfunction_sb_sRcR::synapse0x15ab2f0() {
   return (neuron0x15a2520()*-0.298585);
}

double NNfunction_sb_sRcR::synapse0x15ab330() {
   return (neuron0x15a2860()*0.015148);
}

double NNfunction_sb_sRcR::synapse0x15ab370() {
   return (neuron0x15a2ba0()*0.141995);
}

double NNfunction_sb_sRcR::synapse0x15ab3b0() {
   return (neuron0x15a2ee0()*-0.217617);
}

double NNfunction_sb_sRcR::synapse0x15ab3f0() {
   return (neuron0x15a3220()*0.864198);
}

double NNfunction_sb_sRcR::synapse0x15ab430() {
   return (neuron0x15a3560()*-0.990665);
}

double NNfunction_sb_sRcR::synapse0x15aaec0() {
   return (neuron0x15a38a0()*0.417504);
}

double NNfunction_sb_sRcR::synapse0x15aaf00() {
   return (neuron0x15a3e00()*0.307118);
}

double NNfunction_sb_sRcR::synapse0x15ab580() {
   return (neuron0x15a4020()*-0.0846726);
}

double NNfunction_sb_sRcR::synapse0x15ab5c0() {
   return (neuron0x15a4360()*-0.0834628);
}

double NNfunction_sb_sRcR::synapse0x15ab600() {
   return (neuron0x15a46a0()*0.398243);
}

double NNfunction_sb_sRcR::synapse0x15ab640() {
   return (neuron0x15a49e0()*0.243087);
}

double NNfunction_sb_sRcR::synapse0x15ab680() {
   return (neuron0x15a4d20()*0.14975);
}

double NNfunction_sb_sRcR::synapse0x15ab6c0() {
   return (neuron0x15a5060()*-0.400136);
}

double NNfunction_sb_sRcR::synapse0x15aba40() {
   return (neuron0x15a04a0()*0.0664533);
}

double NNfunction_sb_sRcR::synapse0x15aba80() {
   return (neuron0x15a07e0()*-0.534405);
}

double NNfunction_sb_sRcR::synapse0x15abac0() {
   return (neuron0x15a0b20()*-0.149983);
}

double NNfunction_sb_sRcR::synapse0x15abb00() {
   return (neuron0x15a0e60()*-0.857481);
}

double NNfunction_sb_sRcR::synapse0x15abb40() {
   return (neuron0x15a11a0()*1.14355);
}

double NNfunction_sb_sRcR::synapse0x15abb80() {
   return (neuron0x15a14e0()*0.538229);
}

double NNfunction_sb_sRcR::synapse0x15abbc0() {
   return (neuron0x15a1820()*0.468761);
}

double NNfunction_sb_sRcR::synapse0x15abc00() {
   return (neuron0x15a1b60()*0.753214);
}

double NNfunction_sb_sRcR::synapse0x15abc40() {
   return (neuron0x15a1ea0()*-0.204702);
}

double NNfunction_sb_sRcR::synapse0x15abc80() {
   return (neuron0x15a21e0()*-0.472024);
}

double NNfunction_sb_sRcR::synapse0x15abcc0() {
   return (neuron0x15a2520()*-0.382774);
}

double NNfunction_sb_sRcR::synapse0x15abd00() {
   return (neuron0x15a2860()*0.265466);
}

double NNfunction_sb_sRcR::synapse0x15abd40() {
   return (neuron0x15a2ba0()*0.814346);
}

double NNfunction_sb_sRcR::synapse0x15abd80() {
   return (neuron0x15a2ee0()*0.010676);
}

double NNfunction_sb_sRcR::synapse0x15abdc0() {
   return (neuron0x15a3220()*-0.0102271);
}

double NNfunction_sb_sRcR::synapse0x15abe00() {
   return (neuron0x15a3560()*-0.178592);
}

double NNfunction_sb_sRcR::synapse0x15ab890() {
   return (neuron0x15a38a0()*0.593411);
}

double NNfunction_sb_sRcR::synapse0x15ab8d0() {
   return (neuron0x15a3e00()*0.358062);
}

double NNfunction_sb_sRcR::synapse0x15a8660() {
   return (neuron0x15a4020()*0.323704);
}

double NNfunction_sb_sRcR::synapse0x15a86a0() {
   return (neuron0x15a4360()*-0.19756);
}

double NNfunction_sb_sRcR::synapse0x15a86e0() {
   return (neuron0x15a46a0()*-0.129028);
}

double NNfunction_sb_sRcR::synapse0x15a8720() {
   return (neuron0x15a49e0()*-0.175947);
}

double NNfunction_sb_sRcR::synapse0x15a8760() {
   return (neuron0x15a4d20()*-0.22004);
}

double NNfunction_sb_sRcR::synapse0x15a87a0() {
   return (neuron0x15a5060()*-0.403032);
}

double NNfunction_sb_sRcR::synapse0x15a8b20() {
   return (neuron0x15a04a0()*-0.251055);
}

double NNfunction_sb_sRcR::synapse0x15a8b60() {
   return (neuron0x15a07e0()*-0.522198);
}

double NNfunction_sb_sRcR::synapse0x15a8ba0() {
   return (neuron0x15a0b20()*0.185321);
}

double NNfunction_sb_sRcR::synapse0x15a8be0() {
   return (neuron0x15a0e60()*-0.156817);
}

double NNfunction_sb_sRcR::synapse0x15a8c20() {
   return (neuron0x15a11a0()*0.600446);
}

double NNfunction_sb_sRcR::synapse0x15a8c60() {
   return (neuron0x15a14e0()*-0.376538);
}

double NNfunction_sb_sRcR::synapse0x15a8ca0() {
   return (neuron0x15a1820()*0.113927);
}

double NNfunction_sb_sRcR::synapse0x15a8ce0() {
   return (neuron0x15a1b60()*-1.38298);
}

double NNfunction_sb_sRcR::synapse0x15a8d20() {
   return (neuron0x15a1ea0()*-0.881691);
}

double NNfunction_sb_sRcR::synapse0x15a8d60() {
   return (neuron0x15a21e0()*0.848347);
}

double NNfunction_sb_sRcR::synapse0x15a8da0() {
   return (neuron0x15a2520()*-0.225808);
}

double NNfunction_sb_sRcR::synapse0x15a8de0() {
   return (neuron0x15a2860()*-0.670775);
}

double NNfunction_sb_sRcR::synapse0x15a8e20() {
   return (neuron0x15a2ba0()*0.467612);
}

double NNfunction_sb_sRcR::synapse0x15acf60() {
   return (neuron0x15a2ee0()*0.0124904);
}

double NNfunction_sb_sRcR::synapse0x15acfa0() {
   return (neuron0x15a3220()*0.408796);
}

double NNfunction_sb_sRcR::synapse0x15acfe0() {
   return (neuron0x15a3560()*-0.374863);
}

double NNfunction_sb_sRcR::synapse0x15a8970() {
   return (neuron0x15a38a0()*0.340727);
}

double NNfunction_sb_sRcR::synapse0x15a89b0() {
   return (neuron0x15a3e00()*-0.734189);
}

double NNfunction_sb_sRcR::synapse0x15ad130() {
   return (neuron0x15a4020()*0.437053);
}

double NNfunction_sb_sRcR::synapse0x15ad170() {
   return (neuron0x15a4360()*-0.541788);
}

double NNfunction_sb_sRcR::synapse0x15ad1b0() {
   return (neuron0x15a46a0()*0.949046);
}

double NNfunction_sb_sRcR::synapse0x15ad1f0() {
   return (neuron0x15a49e0()*-0.181949);
}

double NNfunction_sb_sRcR::synapse0x15ad230() {
   return (neuron0x15a4d20()*0.690115);
}

double NNfunction_sb_sRcR::synapse0x15ad270() {
   return (neuron0x15a5060()*-0.120857);
}

double NNfunction_sb_sRcR::synapse0x15ad5f0() {
   return (neuron0x15a04a0()*0.704957);
}

double NNfunction_sb_sRcR::synapse0x15ad630() {
   return (neuron0x15a07e0()*0.551094);
}

double NNfunction_sb_sRcR::synapse0x15ad670() {
   return (neuron0x15a0b20()*-0.577525);
}

double NNfunction_sb_sRcR::synapse0x15ad6b0() {
   return (neuron0x15a0e60()*-0.251035);
}

double NNfunction_sb_sRcR::synapse0x15ad6f0() {
   return (neuron0x15a11a0()*0.998585);
}

double NNfunction_sb_sRcR::synapse0x15ad730() {
   return (neuron0x15a14e0()*-0.207004);
}

double NNfunction_sb_sRcR::synapse0x15ad770() {
   return (neuron0x15a1820()*-0.868753);
}

double NNfunction_sb_sRcR::synapse0x15ad7b0() {
   return (neuron0x15a1b60()*-0.437751);
}

double NNfunction_sb_sRcR::synapse0x15ad7f0() {
   return (neuron0x15a1ea0()*-0.242682);
}

double NNfunction_sb_sRcR::synapse0x15ad830() {
   return (neuron0x15a21e0()*0.0458107);
}

double NNfunction_sb_sRcR::synapse0x15ad870() {
   return (neuron0x15a2520()*0.96518);
}

double NNfunction_sb_sRcR::synapse0x15ad8b0() {
   return (neuron0x15a2860()*-0.0472778);
}

double NNfunction_sb_sRcR::synapse0x15ad8f0() {
   return (neuron0x15a2ba0()*0.434726);
}

double NNfunction_sb_sRcR::synapse0x15ad930() {
   return (neuron0x15a2ee0()*0.426994);
}

double NNfunction_sb_sRcR::synapse0x15ad970() {
   return (neuron0x15a3220()*1.04425);
}

double NNfunction_sb_sRcR::synapse0x15ad9b0() {
   return (neuron0x15a3560()*0.180034);
}

double NNfunction_sb_sRcR::synapse0x15ad440() {
   return (neuron0x15a38a0()*-0.221107);
}

double NNfunction_sb_sRcR::synapse0x15ad480() {
   return (neuron0x15a3e00()*-0.0192659);
}

double NNfunction_sb_sRcR::synapse0x15adb00() {
   return (neuron0x15a4020()*-0.241231);
}

double NNfunction_sb_sRcR::synapse0x15adb40() {
   return (neuron0x15a4360()*-0.432438);
}

double NNfunction_sb_sRcR::synapse0x15adb80() {
   return (neuron0x15a46a0()*-0.975372);
}

double NNfunction_sb_sRcR::synapse0x15adbc0() {
   return (neuron0x15a49e0()*0.96088);
}

double NNfunction_sb_sRcR::synapse0x15adc00() {
   return (neuron0x15a4d20()*0.383177);
}

double NNfunction_sb_sRcR::synapse0x15adc40() {
   return (neuron0x15a5060()*-0.320154);
}

double NNfunction_sb_sRcR::synapse0x15adfc0() {
   return (neuron0x15a04a0()*-0.0577161);
}

double NNfunction_sb_sRcR::synapse0x15ae000() {
   return (neuron0x15a07e0()*-0.289057);
}

double NNfunction_sb_sRcR::synapse0x15ae040() {
   return (neuron0x15a0b20()*-0.06205);
}

double NNfunction_sb_sRcR::synapse0x15ae080() {
   return (neuron0x15a0e60()*-2.90547);
}

double NNfunction_sb_sRcR::synapse0x15ae0c0() {
   return (neuron0x15a11a0()*0.0719514);
}

double NNfunction_sb_sRcR::synapse0x15ae100() {
   return (neuron0x15a14e0()*0.0568167);
}

double NNfunction_sb_sRcR::synapse0x15ae140() {
   return (neuron0x15a1820()*0.0692442);
}

double NNfunction_sb_sRcR::synapse0x15ae180() {
   return (neuron0x15a1b60()*-0.0664488);
}

double NNfunction_sb_sRcR::synapse0x15ae1c0() {
   return (neuron0x15a1ea0()*0.0282417);
}

double NNfunction_sb_sRcR::synapse0x15ae200() {
   return (neuron0x15a21e0()*0.0379672);
}

double NNfunction_sb_sRcR::synapse0x15ae240() {
   return (neuron0x15a2520()*-0.0572696);
}

double NNfunction_sb_sRcR::synapse0x15ae280() {
   return (neuron0x15a2860()*0.0889695);
}

double NNfunction_sb_sRcR::synapse0x15ae2c0() {
   return (neuron0x15a2ba0()*-0.033948);
}

double NNfunction_sb_sRcR::synapse0x15ae300() {
   return (neuron0x15a2ee0()*-0.0201508);
}

double NNfunction_sb_sRcR::synapse0x15ae340() {
   return (neuron0x15a3220()*-0.0861387);
}

double NNfunction_sb_sRcR::synapse0x15ae380() {
   return (neuron0x15a3560()*-0.67951);
}

double NNfunction_sb_sRcR::synapse0x15ade10() {
   return (neuron0x15a38a0()*0.127688);
}

double NNfunction_sb_sRcR::synapse0x15ade50() {
   return (neuron0x15a3e00()*0.172262);
}

double NNfunction_sb_sRcR::synapse0x15ae4d0() {
   return (neuron0x15a4020()*-0.720158);
}

double NNfunction_sb_sRcR::synapse0x15ae510() {
   return (neuron0x15a4360()*-0.00971493);
}

double NNfunction_sb_sRcR::synapse0x15ae550() {
   return (neuron0x15a46a0()*0.0362447);
}

double NNfunction_sb_sRcR::synapse0x15ae590() {
   return (neuron0x15a49e0()*-0.00454295);
}

double NNfunction_sb_sRcR::synapse0x15ae5d0() {
   return (neuron0x15a4d20()*-0.0450127);
}

double NNfunction_sb_sRcR::synapse0x15ae610() {
   return (neuron0x15a5060()*0.0507988);
}

double NNfunction_sb_sRcR::synapse0x15ae990() {
   return (neuron0x15a04a0()*-0.736871);
}

double NNfunction_sb_sRcR::synapse0x15ae9d0() {
   return (neuron0x15a07e0()*-0.0739585);
}

double NNfunction_sb_sRcR::synapse0x15aea10() {
   return (neuron0x15a0b20()*0.0316351);
}

double NNfunction_sb_sRcR::synapse0x15aea50() {
   return (neuron0x15a0e60()*0.160183);
}

double NNfunction_sb_sRcR::synapse0x15aea90() {
   return (neuron0x15a11a0()*-0.721492);
}

double NNfunction_sb_sRcR::synapse0x15aead0() {
   return (neuron0x15a14e0()*-1.45198);
}

double NNfunction_sb_sRcR::synapse0x15aeb10() {
   return (neuron0x15a1820()*0.55841);
}

double NNfunction_sb_sRcR::synapse0x15aeb50() {
   return (neuron0x15a1b60()*-0.520308);
}

double NNfunction_sb_sRcR::synapse0x15aeb90() {
   return (neuron0x15a1ea0()*-2.0598);
}

double NNfunction_sb_sRcR::synapse0x15aebd0() {
   return (neuron0x15a21e0()*0.5776);
}

double NNfunction_sb_sRcR::synapse0x15aec10() {
   return (neuron0x15a2520()*0.188353);
}

double NNfunction_sb_sRcR::synapse0x15aec50() {
   return (neuron0x15a2860()*-0.0317394);
}

double NNfunction_sb_sRcR::synapse0x15aec90() {
   return (neuron0x15a2ba0()*2.04731);
}

double NNfunction_sb_sRcR::synapse0x15aecd0() {
   return (neuron0x15a2ee0()*0.0130468);
}

double NNfunction_sb_sRcR::synapse0x15aed10() {
   return (neuron0x15a3220()*0.620466);
}

double NNfunction_sb_sRcR::synapse0x15aed50() {
   return (neuron0x15a3560()*0.368861);
}

double NNfunction_sb_sRcR::synapse0x15ae7e0() {
   return (neuron0x15a38a0()*0.0448315);
}

double NNfunction_sb_sRcR::synapse0x15ae820() {
   return (neuron0x15a3e00()*-0.715959);
}

double NNfunction_sb_sRcR::synapse0x15aeea0() {
   return (neuron0x15a4020()*-0.420169);
}

double NNfunction_sb_sRcR::synapse0x15aeee0() {
   return (neuron0x15a4360()*0.0879781);
}

double NNfunction_sb_sRcR::synapse0x15aef20() {
   return (neuron0x15a46a0()*1.29047);
}

double NNfunction_sb_sRcR::synapse0x15aef60() {
   return (neuron0x15a49e0()*-0.0223266);
}

double NNfunction_sb_sRcR::synapse0x15aefa0() {
   return (neuron0x15a4d20()*0.631204);
}

double NNfunction_sb_sRcR::synapse0x15aefe0() {
   return (neuron0x15a5060()*0.347505);
}

double NNfunction_sb_sRcR::synapse0x15af360() {
   return (neuron0x15a04a0()*-0.00472814);
}

double NNfunction_sb_sRcR::synapse0x15a06c0() {
   return (neuron0x15a07e0()*-0.00867064);
}

double NNfunction_sb_sRcR::synapse0x15a0700() {
   return (neuron0x15a0b20()*-0.00224172);
}

double NNfunction_sb_sRcR::synapse0x15a0a00() {
   return (neuron0x15a0e60()*2.81888);
}

double NNfunction_sb_sRcR::synapse0x15a0a40() {
   return (neuron0x15a11a0()*-0.00245452);
}

double NNfunction_sb_sRcR::synapse0x15a0d40() {
   return (neuron0x15a14e0()*-0.00987002);
}

double NNfunction_sb_sRcR::synapse0x15a0d80() {
   return (neuron0x15a1820()*0.00346912);
}

double NNfunction_sb_sRcR::synapse0x15a1080() {
   return (neuron0x15a1b60()*-0.0296505);
}

double NNfunction_sb_sRcR::synapse0x15a10c0() {
   return (neuron0x15a1ea0()*0.0161637);
}

double NNfunction_sb_sRcR::synapse0x15a13c0() {
   return (neuron0x15a21e0()*0.0216403);
}

double NNfunction_sb_sRcR::synapse0x15a1400() {
   return (neuron0x15a2520()*0.0103325);
}

double NNfunction_sb_sRcR::synapse0x15a1700() {
   return (neuron0x15a2860()*0.0830766);
}

double NNfunction_sb_sRcR::synapse0x15a1740() {
   return (neuron0x15a2ba0()*0.105409);
}

double NNfunction_sb_sRcR::synapse0x15a1a40() {
   return (neuron0x15a2ee0()*-0.0136308);
}

double NNfunction_sb_sRcR::synapse0x15a1a80() {
   return (neuron0x15a3220()*0.0214133);
}

double NNfunction_sb_sRcR::synapse0x15a1d80() {
   return (neuron0x15a3560()*0.0561616);
}

double NNfunction_sb_sRcR::synapse0x15a1dc0() {
   return (neuron0x15a38a0()*-0.00954348);
}

double NNfunction_sb_sRcR::synapse0x15a20c0() {
   return (neuron0x15a3e00()*0.0698074);
}

double NNfunction_sb_sRcR::synapse0x15a2100() {
   return (neuron0x15a4020()*-0.0830122);
}

double NNfunction_sb_sRcR::synapse0x15a2400() {
   return (neuron0x15a4360()*0.00504821);
}

double NNfunction_sb_sRcR::synapse0x15a2440() {
   return (neuron0x15a46a0()*0.00563746);
}

double NNfunction_sb_sRcR::synapse0x15a2740() {
   return (neuron0x15a49e0()*-0.0051001);
}

double NNfunction_sb_sRcR::synapse0x15a2780() {
   return (neuron0x15a4d20()*-0.0160993);
}

double NNfunction_sb_sRcR::synapse0x15a2a80() {
   return (neuron0x15a5060()*0.00240696);
}

double NNfunction_sb_sRcR::synapse0x15a2ac0() {
   return (neuron0x15a04a0()*-1.17057);
}

double NNfunction_sb_sRcR::synapse0x15a3780() {
   return (neuron0x15a07e0()*0.0528951);
}

double NNfunction_sb_sRcR::synapse0x15a37c0() {
   return (neuron0x15a0b20()*-0.333544);
}

double NNfunction_sb_sRcR::synapse0x15af1b0() {
   return (neuron0x15a0e60()*0.257037);
}

double NNfunction_sb_sRcR::synapse0x15af1f0() {
   return (neuron0x15a11a0()*-1.1452);
}

double NNfunction_sb_sRcR::synapse0x15a3ac0() {
   return (neuron0x15a14e0()*-0.289094);
}

double NNfunction_sb_sRcR::synapse0x15a3b00() {
   return (neuron0x15a1820()*0.579836);
}

double NNfunction_sb_sRcR::synapse0x1351a90() {
   return (neuron0x15a1b60()*0.908636);
}

double NNfunction_sb_sRcR::synapse0x1351ad0() {
   return (neuron0x15a1ea0()*-0.112036);
}

double NNfunction_sb_sRcR::synapse0x15a4240() {
   return (neuron0x15a21e0()*-0.502302);
}

double NNfunction_sb_sRcR::synapse0x15a4280() {
   return (neuron0x15a2520()*-0.623279);
}

double NNfunction_sb_sRcR::synapse0x15a4580() {
   return (neuron0x15a2860()*0.201964);
}

double NNfunction_sb_sRcR::synapse0x15a45c0() {
   return (neuron0x15a2ba0()*-0.497037);
}

double NNfunction_sb_sRcR::synapse0x15a48c0() {
   return (neuron0x15a2ee0()*0.666396);
}

double NNfunction_sb_sRcR::synapse0x15a4900() {
   return (neuron0x15a3220()*-0.382249);
}

double NNfunction_sb_sRcR::synapse0x15a4c00() {
   return (neuron0x15a3560()*-0.768261);
}

double NNfunction_sb_sRcR::synapse0x15a4c40() {
   return (neuron0x15a38a0()*-0.245187);
}

double NNfunction_sb_sRcR::synapse0x15a4f40() {
   return (neuron0x15a3e00()*0.313581);
}

double NNfunction_sb_sRcR::synapse0x15a4f80() {
   return (neuron0x15a4020()*-0.297882);
}

double NNfunction_sb_sRcR::synapse0x15a5280() {
   return (neuron0x15a4360()*-0.475424);
}

double NNfunction_sb_sRcR::synapse0x15a52c0() {
   return (neuron0x15a46a0()*0.487388);
}

double NNfunction_sb_sRcR::synapse0x15a2dc0() {
   return (neuron0x15a49e0()*0.461883);
}

double NNfunction_sb_sRcR::synapse0x15a2e00() {
   return (neuron0x15a4d20()*0.0923715);
}

double NNfunction_sb_sRcR::synapse0x15b10d0() {
   return (neuron0x15a5060()*-0.180641);
}

double NNfunction_sb_sRcR::synapse0x15b1450() {
   return (neuron0x15a04a0()*-0.0568753);
}

double NNfunction_sb_sRcR::synapse0x15b1490() {
   return (neuron0x15a07e0()*0.688805);
}

double NNfunction_sb_sRcR::synapse0x15b14d0() {
   return (neuron0x15a0b20()*-0.664841);
}

double NNfunction_sb_sRcR::synapse0x15b1510() {
   return (neuron0x15a0e60()*0.877347);
}

double NNfunction_sb_sRcR::synapse0x15b1550() {
   return (neuron0x15a11a0()*0.00387593);
}

double NNfunction_sb_sRcR::synapse0x15b1590() {
   return (neuron0x15a14e0()*0.0202945);
}

double NNfunction_sb_sRcR::synapse0x15b15d0() {
   return (neuron0x15a1820()*0.600452);
}

double NNfunction_sb_sRcR::synapse0x15b1610() {
   return (neuron0x15a1b60()*0.05467);
}

double NNfunction_sb_sRcR::synapse0x15b1650() {
   return (neuron0x15a1ea0()*-0.378023);
}

double NNfunction_sb_sRcR::synapse0x15b1690() {
   return (neuron0x15a21e0()*-0.900526);
}

double NNfunction_sb_sRcR::synapse0x15b16d0() {
   return (neuron0x15a2520()*-0.573063);
}

double NNfunction_sb_sRcR::synapse0x15b1710() {
   return (neuron0x15a2860()*-0.151214);
}

double NNfunction_sb_sRcR::synapse0x15b1750() {
   return (neuron0x15a2ba0()*-0.0142784);
}

double NNfunction_sb_sRcR::synapse0x15b1790() {
   return (neuron0x15a2ee0()*0.380836);
}

double NNfunction_sb_sRcR::synapse0x15b17d0() {
   return (neuron0x15a3220()*-0.0921429);
}

double NNfunction_sb_sRcR::synapse0x15b1810() {
   return (neuron0x15a3560()*1.5327);
}

double NNfunction_sb_sRcR::synapse0x15b12a0() {
   return (neuron0x15a38a0()*0.29788);
}

double NNfunction_sb_sRcR::synapse0x15b12e0() {
   return (neuron0x15a3e00()*-0.0415563);
}

double NNfunction_sb_sRcR::synapse0x15b1960() {
   return (neuron0x15a4020()*-0.541797);
}

double NNfunction_sb_sRcR::synapse0x15b19a0() {
   return (neuron0x15a4360()*-0.529576);
}

double NNfunction_sb_sRcR::synapse0x15b19e0() {
   return (neuron0x15a46a0()*0.0977351);
}

double NNfunction_sb_sRcR::synapse0x15b1a20() {
   return (neuron0x15a49e0()*-0.0344139);
}

double NNfunction_sb_sRcR::synapse0x15b1a60() {
   return (neuron0x15a4d20()*-0.170921);
}

double NNfunction_sb_sRcR::synapse0x15b1aa0() {
   return (neuron0x15a5060()*-1.4189);
}

double NNfunction_sb_sRcR::synapse0x15b1e20() {
   return (neuron0x15a04a0()*-0.0274266);
}

double NNfunction_sb_sRcR::synapse0x15b1e60() {
   return (neuron0x15a07e0()*-0.0610498);
}

double NNfunction_sb_sRcR::synapse0x15b1ea0() {
   return (neuron0x15a0b20()*0.0228562);
}

double NNfunction_sb_sRcR::synapse0x15b1ee0() {
   return (neuron0x15a0e60()*-7.79335);
}

double NNfunction_sb_sRcR::synapse0x15b1f20() {
   return (neuron0x15a11a0()*0.0121952);
}

double NNfunction_sb_sRcR::synapse0x15b1f60() {
   return (neuron0x15a14e0()*0.110099);
}

double NNfunction_sb_sRcR::synapse0x15b1fa0() {
   return (neuron0x15a1820()*0.0349272);
}

double NNfunction_sb_sRcR::synapse0x15b1fe0() {
   return (neuron0x15a1b60()*-0.0148716);
}

double NNfunction_sb_sRcR::synapse0x15b2020() {
   return (neuron0x15a1ea0()*0.00285204);
}

double NNfunction_sb_sRcR::synapse0x15b2060() {
   return (neuron0x15a21e0()*0.107197);
}

double NNfunction_sb_sRcR::synapse0x15b20a0() {
   return (neuron0x15a2520()*0.0032368);
}

double NNfunction_sb_sRcR::synapse0x15b20e0() {
   return (neuron0x15a2860()*-0.00232669);
}

double NNfunction_sb_sRcR::synapse0x15b2120() {
   return (neuron0x15a2ba0()*0.15451);
}

double NNfunction_sb_sRcR::synapse0x15b2160() {
   return (neuron0x15a2ee0()*-0.129908);
}

double NNfunction_sb_sRcR::synapse0x15b21a0() {
   return (neuron0x15a3220()*0.0477676);
}

double NNfunction_sb_sRcR::synapse0x15b21e0() {
   return (neuron0x15a3560()*0.106014);
}

double NNfunction_sb_sRcR::synapse0x15b1c70() {
   return (neuron0x15a38a0()*-0.141156);
}

double NNfunction_sb_sRcR::synapse0x15b1cb0() {
   return (neuron0x15a3e00()*0.146555);
}

double NNfunction_sb_sRcR::synapse0x15b2330() {
   return (neuron0x15a4020()*0.136362);
}

double NNfunction_sb_sRcR::synapse0x15b2370() {
   return (neuron0x15a4360()*0.0604428);
}

double NNfunction_sb_sRcR::synapse0x15b23b0() {
   return (neuron0x15a46a0()*0.0627385);
}

double NNfunction_sb_sRcR::synapse0x15b23f0() {
   return (neuron0x15a49e0()*0.0741092);
}

double NNfunction_sb_sRcR::synapse0x15b2430() {
   return (neuron0x15a4d20()*-0.0408759);
}

double NNfunction_sb_sRcR::synapse0x15b2470() {
   return (neuron0x15a5060()*0.0082889);
}

double NNfunction_sb_sRcR::synapse0x15b27f0() {
   return (neuron0x15a04a0()*-0.47068);
}

double NNfunction_sb_sRcR::synapse0x15b2830() {
   return (neuron0x15a07e0()*-0.436819);
}

double NNfunction_sb_sRcR::synapse0x15b2870() {
   return (neuron0x15a0b20()*-0.515253);
}

double NNfunction_sb_sRcR::synapse0x15b28b0() {
   return (neuron0x15a0e60()*-1.7127);
}

double NNfunction_sb_sRcR::synapse0x15b28f0() {
   return (neuron0x15a11a0()*-0.714104);
}

double NNfunction_sb_sRcR::synapse0x15b2930() {
   return (neuron0x15a14e0()*0.872514);
}

double NNfunction_sb_sRcR::synapse0x15b2970() {
   return (neuron0x15a1820()*-0.0282524);
}

double NNfunction_sb_sRcR::synapse0x15b29b0() {
   return (neuron0x15a1b60()*-0.950172);
}

double NNfunction_sb_sRcR::synapse0x15b29f0() {
   return (neuron0x15a1ea0()*-0.351875);
}

double NNfunction_sb_sRcR::synapse0x15b2a30() {
   return (neuron0x15a21e0()*0.46155);
}

double NNfunction_sb_sRcR::synapse0x15b2a70() {
   return (neuron0x15a2520()*-0.252189);
}

double NNfunction_sb_sRcR::synapse0x15b2ab0() {
   return (neuron0x15a2860()*0.100296);
}

double NNfunction_sb_sRcR::synapse0x15b2af0() {
   return (neuron0x15a2ba0()*-0.0773274);
}

double NNfunction_sb_sRcR::synapse0x15b2b30() {
   return (neuron0x15a2ee0()*0.309549);
}

double NNfunction_sb_sRcR::synapse0x15b2b70() {
   return (neuron0x15a3220()*0.531888);
}

double NNfunction_sb_sRcR::synapse0x15b2bb0() {
   return (neuron0x15a3560()*0.515897);
}

double NNfunction_sb_sRcR::synapse0x15b2640() {
   return (neuron0x15a38a0()*0.710736);
}

double NNfunction_sb_sRcR::synapse0x15b2680() {
   return (neuron0x15a3e00()*0.200571);
}

double NNfunction_sb_sRcR::synapse0x15b2d00() {
   return (neuron0x15a4020()*0.989906);
}

double NNfunction_sb_sRcR::synapse0x15b2d40() {
   return (neuron0x15a4360()*0.277668);
}

double NNfunction_sb_sRcR::synapse0x15b2d80() {
   return (neuron0x15a46a0()*0.450077);
}

double NNfunction_sb_sRcR::synapse0x15b2dc0() {
   return (neuron0x15a49e0()*0.310832);
}

double NNfunction_sb_sRcR::synapse0x15b2e00() {
   return (neuron0x15a4d20()*-0.634708);
}

double NNfunction_sb_sRcR::synapse0x15b2e40() {
   return (neuron0x15a5060()*0.470576);
}

double NNfunction_sb_sRcR::synapse0x15b31c0() {
   return (neuron0x15a04a0()*0.0109358);
}

double NNfunction_sb_sRcR::synapse0x15b3200() {
   return (neuron0x15a07e0()*0.151522);
}

double NNfunction_sb_sRcR::synapse0x15b3240() {
   return (neuron0x15a0b20()*-0.014198);
}

double NNfunction_sb_sRcR::synapse0x15b3280() {
   return (neuron0x15a0e60()*0.211765);
}

double NNfunction_sb_sRcR::synapse0x15b32c0() {
   return (neuron0x15a11a0()*0.0168289);
}

double NNfunction_sb_sRcR::synapse0x15b3300() {
   return (neuron0x15a14e0()*-0.00472017);
}

double NNfunction_sb_sRcR::synapse0x15b3340() {
   return (neuron0x15a1820()*0.000265002);
}

double NNfunction_sb_sRcR::synapse0x15b3380() {
   return (neuron0x15a1b60()*-0.0085473);
}

double NNfunction_sb_sRcR::synapse0x15b33c0() {
   return (neuron0x15a1ea0()*-0.0102462);
}

double NNfunction_sb_sRcR::synapse0x15b3400() {
   return (neuron0x15a21e0()*-0.00640703);
}

double NNfunction_sb_sRcR::synapse0x15b3440() {
   return (neuron0x15a2520()*-0.00737419);
}

double NNfunction_sb_sRcR::synapse0x15b3480() {
   return (neuron0x15a2860()*0.390637);
}

double NNfunction_sb_sRcR::synapse0x15b34c0() {
   return (neuron0x15a2ba0()*0.470762);
}

double NNfunction_sb_sRcR::synapse0x15b3500() {
   return (neuron0x15a2ee0()*-0.0610031);
}

double NNfunction_sb_sRcR::synapse0x15b3540() {
   return (neuron0x15a3220()*0.161087);
}

double NNfunction_sb_sRcR::synapse0x15b3580() {
   return (neuron0x15a3560()*0.0472537);
}

double NNfunction_sb_sRcR::synapse0x15b3010() {
   return (neuron0x15a38a0()*-0.0728012);
}

double NNfunction_sb_sRcR::synapse0x15b3050() {
   return (neuron0x15a3e00()*0.166926);
}

double NNfunction_sb_sRcR::synapse0x15b36d0() {
   return (neuron0x15a4020()*0.013456);
}

double NNfunction_sb_sRcR::synapse0x15b3710() {
   return (neuron0x15a4360()*-0.0018961);
}

double NNfunction_sb_sRcR::synapse0x15b3750() {
   return (neuron0x15a46a0()*0.0105719);
}

double NNfunction_sb_sRcR::synapse0x15b3790() {
   return (neuron0x15a49e0()*-0.00707907);
}

double NNfunction_sb_sRcR::synapse0x15b37d0() {
   return (neuron0x15a4d20()*0.00530103);
}

double NNfunction_sb_sRcR::synapse0x15b3810() {
   return (neuron0x15a5060()*-0.00252469);
}

double NNfunction_sb_sRcR::synapse0x15b3b90() {
   return (neuron0x15a04a0()*0.978844);
}

double NNfunction_sb_sRcR::synapse0x15b3bd0() {
   return (neuron0x15a07e0()*0.507742);
}

double NNfunction_sb_sRcR::synapse0x15b3c10() {
   return (neuron0x15a0b20()*-0.26496);
}

double NNfunction_sb_sRcR::synapse0x15b3c50() {
   return (neuron0x15a0e60()*-0.772227);
}

double NNfunction_sb_sRcR::synapse0x15b3c90() {
   return (neuron0x15a11a0()*-0.211892);
}

double NNfunction_sb_sRcR::synapse0x15b3cd0() {
   return (neuron0x15a14e0()*-0.942793);
}

double NNfunction_sb_sRcR::synapse0x15b3d10() {
   return (neuron0x15a1820()*0.116563);
}

double NNfunction_sb_sRcR::synapse0x15b3d50() {
   return (neuron0x15a1b60()*0.54593);
}

double NNfunction_sb_sRcR::synapse0x15b3d90() {
   return (neuron0x15a1ea0()*-0.0748152);
}

double NNfunction_sb_sRcR::synapse0x15abf50() {
   return (neuron0x15a21e0()*0.318088);
}

double NNfunction_sb_sRcR::synapse0x15abf90() {
   return (neuron0x15a2520()*-0.0887478);
}

double NNfunction_sb_sRcR::synapse0x15abfd0() {
   return (neuron0x15a2860()*1.08744);
}

double NNfunction_sb_sRcR::synapse0x15ac010() {
   return (neuron0x15a2ba0()*0.218724);
}

double NNfunction_sb_sRcR::synapse0x15ac050() {
   return (neuron0x15a2ee0()*0.0351735);
}

double NNfunction_sb_sRcR::synapse0x15ac090() {
   return (neuron0x15a3220()*-0.471002);
}

double NNfunction_sb_sRcR::synapse0x15ac0d0() {
   return (neuron0x15a3560()*0.370813);
}

double NNfunction_sb_sRcR::synapse0x15b39e0() {
   return (neuron0x15a38a0()*0.512891);
}

double NNfunction_sb_sRcR::synapse0x15b3a20() {
   return (neuron0x15a3e00()*-0.543952);
}

double NNfunction_sb_sRcR::synapse0x15ac220() {
   return (neuron0x15a4020()*0.00392819);
}

double NNfunction_sb_sRcR::synapse0x15ac260() {
   return (neuron0x15a4360()*0.722148);
}

double NNfunction_sb_sRcR::synapse0x15ac2a0() {
   return (neuron0x15a46a0()*0.363945);
}

double NNfunction_sb_sRcR::synapse0x15ac2e0() {
   return (neuron0x15a49e0()*0.509497);
}

double NNfunction_sb_sRcR::synapse0x15ac320() {
   return (neuron0x15a4d20()*-0.359377);
}

double NNfunction_sb_sRcR::synapse0x15ac360() {
   return (neuron0x15a5060()*-0.247826);
}

double NNfunction_sb_sRcR::synapse0x15ac6e0() {
   return (neuron0x15a04a0()*-0.392933);
}

double NNfunction_sb_sRcR::synapse0x15ac720() {
   return (neuron0x15a07e0()*0.205941);
}

double NNfunction_sb_sRcR::synapse0x15ac760() {
   return (neuron0x15a0b20()*0.486875);
}

double NNfunction_sb_sRcR::synapse0x15ac7a0() {
   return (neuron0x15a0e60()*-1.00713);
}

double NNfunction_sb_sRcR::synapse0x15ac7e0() {
   return (neuron0x15a11a0()*0.482713);
}

double NNfunction_sb_sRcR::synapse0x15ac820() {
   return (neuron0x15a14e0()*-1.00879);
}

double NNfunction_sb_sRcR::synapse0x15ac860() {
   return (neuron0x15a1820()*0.59704);
}

double NNfunction_sb_sRcR::synapse0x15ac8a0() {
   return (neuron0x15a1b60()*-0.396357);
}

double NNfunction_sb_sRcR::synapse0x15ac8e0() {
   return (neuron0x15a1ea0()*0.224497);
}

double NNfunction_sb_sRcR::synapse0x15ac920() {
   return (neuron0x15a21e0()*0.134775);
}

double NNfunction_sb_sRcR::synapse0x15ac960() {
   return (neuron0x15a2520()*-0.114826);
}

double NNfunction_sb_sRcR::synapse0x15ac9a0() {
   return (neuron0x15a2860()*-0.986696);
}

double NNfunction_sb_sRcR::synapse0x15ac9e0() {
   return (neuron0x15a2ba0()*0.253312);
}

double NNfunction_sb_sRcR::synapse0x15aca20() {
   return (neuron0x15a2ee0()*-0.0435572);
}

double NNfunction_sb_sRcR::synapse0x15aca60() {
   return (neuron0x15a3220()*-0.0299014);
}

double NNfunction_sb_sRcR::synapse0x15acaa0() {
   return (neuron0x15a3560()*-0.189137);
}

double NNfunction_sb_sRcR::synapse0x15ac530() {
   return (neuron0x15a38a0()*-0.704245);
}

double NNfunction_sb_sRcR::synapse0x15ac570() {
   return (neuron0x15a3e00()*-0.692341);
}

double NNfunction_sb_sRcR::synapse0x15acbf0() {
   return (neuron0x15a4020()*0.25561);
}

double NNfunction_sb_sRcR::synapse0x15acc30() {
   return (neuron0x15a4360()*-0.225461);
}

double NNfunction_sb_sRcR::synapse0x15acc70() {
   return (neuron0x15a46a0()*-0.210163);
}

double NNfunction_sb_sRcR::synapse0x15accb0() {
   return (neuron0x15a49e0()*-0.0740421);
}

double NNfunction_sb_sRcR::synapse0x15accf0() {
   return (neuron0x15a4d20()*-0.236494);
}

double NNfunction_sb_sRcR::synapse0x15acd30() {
   return (neuron0x15a5060()*0.0140074);
}

double NNfunction_sb_sRcR::synapse0x15acf00() {
   return (neuron0x15a04a0()*-0.104523);
}

double NNfunction_sb_sRcR::synapse0x15b5f90() {
   return (neuron0x15a07e0()*-0.764071);
}

double NNfunction_sb_sRcR::synapse0x15b5fd0() {
   return (neuron0x15a0b20()*-0.125568);
}

double NNfunction_sb_sRcR::synapse0x15b6010() {
   return (neuron0x15a0e60()*0.5105);
}

double NNfunction_sb_sRcR::synapse0x15b6050() {
   return (neuron0x15a11a0()*0.0665116);
}

double NNfunction_sb_sRcR::synapse0x15b6090() {
   return (neuron0x15a14e0()*0.302688);
}

double NNfunction_sb_sRcR::synapse0x15b60d0() {
   return (neuron0x15a1820()*0.023738);
}

double NNfunction_sb_sRcR::synapse0x15b6110() {
   return (neuron0x15a1b60()*0.0257314);
}

double NNfunction_sb_sRcR::synapse0x15b6150() {
   return (neuron0x15a1ea0()*0.0912983);
}

double NNfunction_sb_sRcR::synapse0x15b6190() {
   return (neuron0x15a21e0()*-0.200159);
}

double NNfunction_sb_sRcR::synapse0x15b61d0() {
   return (neuron0x15a2520()*0.113666);
}

double NNfunction_sb_sRcR::synapse0x15b6210() {
   return (neuron0x15a2860()*0.600341);
}

double NNfunction_sb_sRcR::synapse0x15b6250() {
   return (neuron0x15a2ba0()*-0.0359157);
}

double NNfunction_sb_sRcR::synapse0x15b6290() {
   return (neuron0x15a2ee0()*0.469424);
}

double NNfunction_sb_sRcR::synapse0x15b62d0() {
   return (neuron0x15a3220()*-0.0505745);
}

double NNfunction_sb_sRcR::synapse0x15b6310() {
   return (neuron0x15a3560()*-0.122951);
}

double NNfunction_sb_sRcR::synapse0x15b5de0() {
   return (neuron0x15a38a0()*-0.0944624);
}

double NNfunction_sb_sRcR::synapse0x15b5e20() {
   return (neuron0x15a3e00()*0.026341);
}

double NNfunction_sb_sRcR::synapse0x15b6460() {
   return (neuron0x15a4020()*0.719553);
}

double NNfunction_sb_sRcR::synapse0x15b64a0() {
   return (neuron0x15a4360()*0.269709);
}

double NNfunction_sb_sRcR::synapse0x15b64e0() {
   return (neuron0x15a46a0()*-0.0391444);
}

double NNfunction_sb_sRcR::synapse0x15b6520() {
   return (neuron0x15a49e0()*-0.412847);
}

double NNfunction_sb_sRcR::synapse0x15b6560() {
   return (neuron0x15a4d20()*-0.128888);
}

double NNfunction_sb_sRcR::synapse0x15b65a0() {
   return (neuron0x15a5060()*-0.498803);
}

double NNfunction_sb_sRcR::synapse0x15b6920() {
   return (neuron0x15a04a0()*-0.401745);
}

double NNfunction_sb_sRcR::synapse0x15b6960() {
   return (neuron0x15a07e0()*0.526316);
}

double NNfunction_sb_sRcR::synapse0x15b69a0() {
   return (neuron0x15a0b20()*0.0961784);
}

double NNfunction_sb_sRcR::synapse0x15b69e0() {
   return (neuron0x15a0e60()*-0.538653);
}

double NNfunction_sb_sRcR::synapse0x15b6a20() {
   return (neuron0x15a11a0()*-0.578902);
}

double NNfunction_sb_sRcR::synapse0x15b6a60() {
   return (neuron0x15a14e0()*0.0915609);
}

double NNfunction_sb_sRcR::synapse0x15b6aa0() {
   return (neuron0x15a1820()*0.161873);
}

double NNfunction_sb_sRcR::synapse0x15b6ae0() {
   return (neuron0x15a1b60()*-0.565967);
}

double NNfunction_sb_sRcR::synapse0x15b6b20() {
   return (neuron0x15a1ea0()*-0.286949);
}

double NNfunction_sb_sRcR::synapse0x15b6b60() {
   return (neuron0x15a21e0()*-0.032308);
}

double NNfunction_sb_sRcR::synapse0x15b6ba0() {
   return (neuron0x15a2520()*-0.260452);
}

double NNfunction_sb_sRcR::synapse0x15b6be0() {
   return (neuron0x15a2860()*0.34394);
}

double NNfunction_sb_sRcR::synapse0x15b6c20() {
   return (neuron0x15a2ba0()*-0.609684);
}

double NNfunction_sb_sRcR::synapse0x15b6c60() {
   return (neuron0x15a2ee0()*-0.399904);
}

double NNfunction_sb_sRcR::synapse0x15b6ca0() {
   return (neuron0x15a3220()*0.163308);
}

double NNfunction_sb_sRcR::synapse0x15b6ce0() {
   return (neuron0x15a3560()*0.882489);
}

double NNfunction_sb_sRcR::synapse0x15b6770() {
   return (neuron0x15a38a0()*-0.713606);
}

double NNfunction_sb_sRcR::synapse0x15b67b0() {
   return (neuron0x15a3e00()*-0.338521);
}

double NNfunction_sb_sRcR::synapse0x15b6e30() {
   return (neuron0x15a4020()*-1.13983);
}

double NNfunction_sb_sRcR::synapse0x15b6e70() {
   return (neuron0x15a4360()*0.888148);
}

double NNfunction_sb_sRcR::synapse0x15b6eb0() {
   return (neuron0x15a46a0()*-0.0523536);
}

double NNfunction_sb_sRcR::synapse0x15b6ef0() {
   return (neuron0x15a49e0()*0.299342);
}

double NNfunction_sb_sRcR::synapse0x15b6f30() {
   return (neuron0x15a4d20()*-0.590908);
}

double NNfunction_sb_sRcR::synapse0x15b6f70() {
   return (neuron0x15a5060()*0.0790916);
}

double NNfunction_sb_sRcR::synapse0x15b72f0() {
   return (neuron0x15a04a0()*-0.172014);
}

double NNfunction_sb_sRcR::synapse0x15b7330() {
   return (neuron0x15a07e0()*0.413825);
}

double NNfunction_sb_sRcR::synapse0x15b7370() {
   return (neuron0x15a0b20()*-0.597958);
}

double NNfunction_sb_sRcR::synapse0x15b73b0() {
   return (neuron0x15a0e60()*0.880149);
}

double NNfunction_sb_sRcR::synapse0x15b73f0() {
   return (neuron0x15a11a0()*-0.20381);
}

double NNfunction_sb_sRcR::synapse0x15b7430() {
   return (neuron0x15a14e0()*-0.0169456);
}

double NNfunction_sb_sRcR::synapse0x15b7470() {
   return (neuron0x15a1820()*-0.851664);
}

double NNfunction_sb_sRcR::synapse0x15b74b0() {
   return (neuron0x15a1b60()*-0.543125);
}

double NNfunction_sb_sRcR::synapse0x15b74f0() {
   return (neuron0x15a1ea0()*0.838288);
}

double NNfunction_sb_sRcR::synapse0x15b7530() {
   return (neuron0x15a21e0()*-0.0311503);
}

double NNfunction_sb_sRcR::synapse0x15b7570() {
   return (neuron0x15a2520()*0.499223);
}

double NNfunction_sb_sRcR::synapse0x15b75b0() {
   return (neuron0x15a2860()*0.919657);
}

double NNfunction_sb_sRcR::synapse0x15b75f0() {
   return (neuron0x15a2ba0()*0.21058);
}

double NNfunction_sb_sRcR::synapse0x15b7630() {
   return (neuron0x15a2ee0()*0.496295);
}

double NNfunction_sb_sRcR::synapse0x15b7670() {
   return (neuron0x15a3220()*0.621845);
}

double NNfunction_sb_sRcR::synapse0x15b76b0() {
   return (neuron0x15a3560()*0.787704);
}

double NNfunction_sb_sRcR::synapse0x15b7140() {
   return (neuron0x15a38a0()*0.453012);
}

double NNfunction_sb_sRcR::synapse0x15b7180() {
   return (neuron0x15a3e00()*1.13991);
}

double NNfunction_sb_sRcR::synapse0x15b7800() {
   return (neuron0x15a4020()*-1.62592);
}

double NNfunction_sb_sRcR::synapse0x15b7840() {
   return (neuron0x15a4360()*0.794861);
}

double NNfunction_sb_sRcR::synapse0x15b7880() {
   return (neuron0x15a46a0()*-0.555689);
}

double NNfunction_sb_sRcR::synapse0x15b78c0() {
   return (neuron0x15a49e0()*-0.712182);
}

double NNfunction_sb_sRcR::synapse0x15b7900() {
   return (neuron0x15a4d20()*-0.688482);
}

double NNfunction_sb_sRcR::synapse0x15b7940() {
   return (neuron0x15a5060()*-0.352764);
}

double NNfunction_sb_sRcR::synapse0x15b7cc0() {
   return (neuron0x15a04a0()*-0.00810042);
}

double NNfunction_sb_sRcR::synapse0x15b7d00() {
   return (neuron0x15a07e0()*1.39889);
}

double NNfunction_sb_sRcR::synapse0x15b7d40() {
   return (neuron0x15a0b20()*0.0491343);
}

double NNfunction_sb_sRcR::synapse0x15b7d80() {
   return (neuron0x15a0e60()*0.16323);
}

double NNfunction_sb_sRcR::synapse0x15b7dc0() {
   return (neuron0x15a11a0()*1.40652);
}

double NNfunction_sb_sRcR::synapse0x15b7e00() {
   return (neuron0x15a14e0()*-0.175774);
}

double NNfunction_sb_sRcR::synapse0x15b7e40() {
   return (neuron0x15a1820()*-0.292984);
}

double NNfunction_sb_sRcR::synapse0x15b7e80() {
   return (neuron0x15a1b60()*-0.15702);
}

double NNfunction_sb_sRcR::synapse0x15b7ec0() {
   return (neuron0x15a1ea0()*-0.272944);
}

double NNfunction_sb_sRcR::synapse0x15b7f00() {
   return (neuron0x15a21e0()*-0.803009);
}

double NNfunction_sb_sRcR::synapse0x15b7f40() {
   return (neuron0x15a2520()*1.03256);
}

double NNfunction_sb_sRcR::synapse0x15b7f80() {
   return (neuron0x15a2860()*0.807249);
}

double NNfunction_sb_sRcR::synapse0x15b7fc0() {
   return (neuron0x15a2ba0()*-0.329977);
}

double NNfunction_sb_sRcR::synapse0x15b8000() {
   return (neuron0x15a2ee0()*-0.014748);
}

double NNfunction_sb_sRcR::synapse0x15b8040() {
   return (neuron0x15a3220()*-1.06242);
}

double NNfunction_sb_sRcR::synapse0x15b8080() {
   return (neuron0x15a3560()*-0.384212);
}

double NNfunction_sb_sRcR::synapse0x15b7b10() {
   return (neuron0x15a38a0()*-0.675377);
}

double NNfunction_sb_sRcR::synapse0x15b7b50() {
   return (neuron0x15a3e00()*0.00316338);
}

double NNfunction_sb_sRcR::synapse0x15b81d0() {
   return (neuron0x15a4020()*0.466713);
}

double NNfunction_sb_sRcR::synapse0x15b8210() {
   return (neuron0x15a4360()*-0.131602);
}

double NNfunction_sb_sRcR::synapse0x15b8250() {
   return (neuron0x15a46a0()*0.543147);
}

double NNfunction_sb_sRcR::synapse0x15b8290() {
   return (neuron0x15a49e0()*1.14248);
}

double NNfunction_sb_sRcR::synapse0x15b82d0() {
   return (neuron0x15a4d20()*0.465673);
}

double NNfunction_sb_sRcR::synapse0x15b8310() {
   return (neuron0x15a5060()*0.00265807);
}

double NNfunction_sb_sRcR::synapse0x15b8690() {
   return (neuron0x15a04a0()*0.239258);
}

double NNfunction_sb_sRcR::synapse0x15b86d0() {
   return (neuron0x15a07e0()*1.074);
}

double NNfunction_sb_sRcR::synapse0x15b8710() {
   return (neuron0x15a0b20()*-0.199155);
}

double NNfunction_sb_sRcR::synapse0x15b8750() {
   return (neuron0x15a0e60()*2.00632);
}

double NNfunction_sb_sRcR::synapse0x15b8790() {
   return (neuron0x15a11a0()*0.655991);
}

double NNfunction_sb_sRcR::synapse0x15b87d0() {
   return (neuron0x15a14e0()*0.362898);
}

double NNfunction_sb_sRcR::synapse0x15b8810() {
   return (neuron0x15a1820()*-0.0992297);
}

double NNfunction_sb_sRcR::synapse0x15b8850() {
   return (neuron0x15a1b60()*0.125797);
}

double NNfunction_sb_sRcR::synapse0x15b8890() {
   return (neuron0x15a1ea0()*-0.763342);
}

double NNfunction_sb_sRcR::synapse0x15b88d0() {
   return (neuron0x15a21e0()*-0.192543);
}

double NNfunction_sb_sRcR::synapse0x15b8910() {
   return (neuron0x15a2520()*-0.646667);
}

double NNfunction_sb_sRcR::synapse0x15b8950() {
   return (neuron0x15a2860()*-0.506464);
}

double NNfunction_sb_sRcR::synapse0x15b8990() {
   return (neuron0x15a2ba0()*-0.208171);
}

double NNfunction_sb_sRcR::synapse0x15b89d0() {
   return (neuron0x15a2ee0()*0.023477);
}

double NNfunction_sb_sRcR::synapse0x15b8a10() {
   return (neuron0x15a3220()*1.01799);
}

double NNfunction_sb_sRcR::synapse0x15b8a50() {
   return (neuron0x15a3560()*0.0350265);
}

double NNfunction_sb_sRcR::synapse0x15b84e0() {
   return (neuron0x15a38a0()*0.0986861);
}

double NNfunction_sb_sRcR::synapse0x15b8520() {
   return (neuron0x15a3e00()*0.776948);
}

double NNfunction_sb_sRcR::synapse0x15b8ba0() {
   return (neuron0x15a4020()*0.337743);
}

double NNfunction_sb_sRcR::synapse0x15b8be0() {
   return (neuron0x15a4360()*0.0640487);
}

double NNfunction_sb_sRcR::synapse0x15b8c20() {
   return (neuron0x15a46a0()*0.0850404);
}

double NNfunction_sb_sRcR::synapse0x15b8c60() {
   return (neuron0x15a49e0()*-0.294123);
}

double NNfunction_sb_sRcR::synapse0x15b8ca0() {
   return (neuron0x15a4d20()*-0.357315);
}

double NNfunction_sb_sRcR::synapse0x15b8ce0() {
   return (neuron0x15a5060()*0.128052);
}

double NNfunction_sb_sRcR::synapse0x15b9060() {
   return (neuron0x15a04a0()*-0.613646);
}

double NNfunction_sb_sRcR::synapse0x15b90a0() {
   return (neuron0x15a07e0()*-1.1587);
}

double NNfunction_sb_sRcR::synapse0x15b90e0() {
   return (neuron0x15a0b20()*-0.92345);
}

double NNfunction_sb_sRcR::synapse0x15b9120() {
   return (neuron0x15a0e60()*0.910207);
}

double NNfunction_sb_sRcR::synapse0x15b9160() {
   return (neuron0x15a11a0()*-0.683391);
}

double NNfunction_sb_sRcR::synapse0x15b91a0() {
   return (neuron0x15a14e0()*1.24553);
}

double NNfunction_sb_sRcR::synapse0x15b91e0() {
   return (neuron0x15a1820()*-0.555489);
}

double NNfunction_sb_sRcR::synapse0x15b9220() {
   return (neuron0x15a1b60()*0.304446);
}

double NNfunction_sb_sRcR::synapse0x15b9260() {
   return (neuron0x15a1ea0()*-0.548823);
}

double NNfunction_sb_sRcR::synapse0x15b92a0() {
   return (neuron0x15a21e0()*-0.822642);
}

double NNfunction_sb_sRcR::synapse0x15b92e0() {
   return (neuron0x15a2520()*-0.618517);
}

double NNfunction_sb_sRcR::synapse0x15b9320() {
   return (neuron0x15a2860()*0.371599);
}

double NNfunction_sb_sRcR::synapse0x15b9360() {
   return (neuron0x15a2ba0()*0.354252);
}

double NNfunction_sb_sRcR::synapse0x15b93a0() {
   return (neuron0x15a2ee0()*0.321896);
}

double NNfunction_sb_sRcR::synapse0x15b93e0() {
   return (neuron0x15a3220()*-0.0536113);
}

double NNfunction_sb_sRcR::synapse0x15b9420() {
   return (neuron0x15a3560()*0.192645);
}

double NNfunction_sb_sRcR::synapse0x15b8eb0() {
   return (neuron0x15a38a0()*0.215337);
}

double NNfunction_sb_sRcR::synapse0x15b8ef0() {
   return (neuron0x15a3e00()*-0.201161);
}

double NNfunction_sb_sRcR::synapse0x15b9570() {
   return (neuron0x15a4020()*-0.718518);
}

double NNfunction_sb_sRcR::synapse0x15b95b0() {
   return (neuron0x15a4360()*-1.07248);
}

double NNfunction_sb_sRcR::synapse0x15b95f0() {
   return (neuron0x15a46a0()*0.668813);
}

double NNfunction_sb_sRcR::synapse0x15b9630() {
   return (neuron0x15a49e0()*0.467303);
}

double NNfunction_sb_sRcR::synapse0x15b9670() {
   return (neuron0x15a4d20()*0.402568);
}

double NNfunction_sb_sRcR::synapse0x15b96b0() {
   return (neuron0x15a5060()*0.260965);
}

double NNfunction_sb_sRcR::synapse0x15b9a30() {
   return (neuron0x15a04a0()*-0.154676);
}

double NNfunction_sb_sRcR::synapse0x15b9a70() {
   return (neuron0x15a07e0()*-0.885584);
}

double NNfunction_sb_sRcR::synapse0x15b9ab0() {
   return (neuron0x15a0b20()*0.0676569);
}

double NNfunction_sb_sRcR::synapse0x15b9af0() {
   return (neuron0x15a0e60()*0.935517);
}

double NNfunction_sb_sRcR::synapse0x15b9b30() {
   return (neuron0x15a11a0()*-0.520607);
}

double NNfunction_sb_sRcR::synapse0x15b9b70() {
   return (neuron0x15a14e0()*-0.317108);
}

double NNfunction_sb_sRcR::synapse0x15b9bb0() {
   return (neuron0x15a1820()*0.263225);
}

double NNfunction_sb_sRcR::synapse0x15b9bf0() {
   return (neuron0x15a1b60()*-0.184319);
}

double NNfunction_sb_sRcR::synapse0x15b9c30() {
   return (neuron0x15a1ea0()*-0.559952);
}

double NNfunction_sb_sRcR::synapse0x15b9c70() {
   return (neuron0x15a21e0()*-0.12586);
}

double NNfunction_sb_sRcR::synapse0x15b9cb0() {
   return (neuron0x15a2520()*-0.497215);
}

double NNfunction_sb_sRcR::synapse0x15b9cf0() {
   return (neuron0x15a2860()*-0.332412);
}

double NNfunction_sb_sRcR::synapse0x15b9d30() {
   return (neuron0x15a2ba0()*0.699857);
}

double NNfunction_sb_sRcR::synapse0x15b9d70() {
   return (neuron0x15a2ee0()*0.79404);
}

double NNfunction_sb_sRcR::synapse0x15b9db0() {
   return (neuron0x15a3220()*-0.0200199);
}

double NNfunction_sb_sRcR::synapse0x15b9df0() {
   return (neuron0x15a3560()*-0.534314);
}

double NNfunction_sb_sRcR::synapse0x15b9880() {
   return (neuron0x15a38a0()*-0.365133);
}

double NNfunction_sb_sRcR::synapse0x15b98c0() {
   return (neuron0x15a3e00()*-0.244106);
}

double NNfunction_sb_sRcR::synapse0x15b9f40() {
   return (neuron0x15a4020()*0.521871);
}

double NNfunction_sb_sRcR::synapse0x15b9f80() {
   return (neuron0x15a4360()*-0.160106);
}

double NNfunction_sb_sRcR::synapse0x15b9fc0() {
   return (neuron0x15a46a0()*0.273188);
}

double NNfunction_sb_sRcR::synapse0x15ba000() {
   return (neuron0x15a49e0()*-0.430863);
}

double NNfunction_sb_sRcR::synapse0x15ba040() {
   return (neuron0x15a4d20()*1.09088);
}

double NNfunction_sb_sRcR::synapse0x15ba080() {
   return (neuron0x15a5060()*-0.195485);
}

double NNfunction_sb_sRcR::synapse0x15ba400() {
   return (neuron0x15a04a0()*0.107179);
}

double NNfunction_sb_sRcR::synapse0x15ba440() {
   return (neuron0x15a07e0()*-0.164771);
}

double NNfunction_sb_sRcR::synapse0x15ba480() {
   return (neuron0x15a0b20()*-0.183397);
}

double NNfunction_sb_sRcR::synapse0x15ba4c0() {
   return (neuron0x15a0e60()*-0.0652797);
}

double NNfunction_sb_sRcR::synapse0x15ba500() {
   return (neuron0x15a11a0()*0.0474282);
}

double NNfunction_sb_sRcR::synapse0x15ba540() {
   return (neuron0x15a14e0()*-0.14656);
}

double NNfunction_sb_sRcR::synapse0x15ba580() {
   return (neuron0x15a1820()*0.0493571);
}

double NNfunction_sb_sRcR::synapse0x15ba5c0() {
   return (neuron0x15a1b60()*-0.10459);
}

double NNfunction_sb_sRcR::synapse0x15ba600() {
   return (neuron0x15a1ea0()*0.184724);
}

double NNfunction_sb_sRcR::synapse0x15ba640() {
   return (neuron0x15a21e0()*0.0345737);
}

double NNfunction_sb_sRcR::synapse0x15ba680() {
   return (neuron0x15a2520()*-0.104035);
}

double NNfunction_sb_sRcR::synapse0x15ba6c0() {
   return (neuron0x15a2860()*0.263139);
}

double NNfunction_sb_sRcR::synapse0x15ba700() {
   return (neuron0x15a2ba0()*-0.0265413);
}

double NNfunction_sb_sRcR::synapse0x15ba740() {
   return (neuron0x15a2ee0()*0.0180654);
}

double NNfunction_sb_sRcR::synapse0x15ba780() {
   return (neuron0x15a3220()*-0.0212402);
}

double NNfunction_sb_sRcR::synapse0x15ba7c0() {
   return (neuron0x15a3560()*0.130185);
}

double NNfunction_sb_sRcR::synapse0x15ba250() {
   return (neuron0x15a38a0()*0.112893);
}

double NNfunction_sb_sRcR::synapse0x15ba290() {
   return (neuron0x15a3e00()*-0.124638);
}

double NNfunction_sb_sRcR::synapse0x15ba910() {
   return (neuron0x15a4020()*3.57024);
}

double NNfunction_sb_sRcR::synapse0x15ba950() {
   return (neuron0x15a4360()*0.194138);
}

double NNfunction_sb_sRcR::synapse0x15ba990() {
   return (neuron0x15a46a0()*0.0671383);
}

double NNfunction_sb_sRcR::synapse0x15ba9d0() {
   return (neuron0x15a49e0()*-0.0680835);
}

double NNfunction_sb_sRcR::synapse0x15baa10() {
   return (neuron0x15a4d20()*-0.141902);
}

double NNfunction_sb_sRcR::synapse0x15baa50() {
   return (neuron0x15a5060()*-0.0854689);
}

double NNfunction_sb_sRcR::synapse0x15badd0() {
   return (neuron0x15a04a0()*-0.00620213);
}

double NNfunction_sb_sRcR::synapse0x15af3a0() {
   return (neuron0x15a07e0()*0.0331812);
}

double NNfunction_sb_sRcR::synapse0x15af3e0() {
   return (neuron0x15a0b20()*0.00851638);
}

double NNfunction_sb_sRcR::synapse0x15af420() {
   return (neuron0x15a0e60()*0.104886);
}

double NNfunction_sb_sRcR::synapse0x15af670() {
   return (neuron0x15a11a0()*-0.00167307);
}

double NNfunction_sb_sRcR::synapse0x15af6b0() {
   return (neuron0x15a14e0()*-0.00670736);
}

double NNfunction_sb_sRcR::synapse0x15af6f0() {
   return (neuron0x15a1820()*0.00917812);
}

double NNfunction_sb_sRcR::synapse0x15af940() {
   return (neuron0x15a1b60()*-0.0139879);
}

double NNfunction_sb_sRcR::synapse0x15af980() {
   return (neuron0x15a1ea0()*0.00334166);
}

double NNfunction_sb_sRcR::synapse0x15afbd0() {
   return (neuron0x15a21e0()*-0.0114938);
}

double NNfunction_sb_sRcR::synapse0x15afc10() {
   return (neuron0x15a2520()*0.00398385);
}

double NNfunction_sb_sRcR::synapse0x15afc50() {
   return (neuron0x15a2860()*-0.0494596);
}

double NNfunction_sb_sRcR::synapse0x15afea0() {
   return (neuron0x15a2ba0()*-0.0387919);
}

double NNfunction_sb_sRcR::synapse0x15afee0() {
   return (neuron0x15a2ee0()*0.0116222);
}

double NNfunction_sb_sRcR::synapse0x15b0130() {
   return (neuron0x15a3220()*0.00233851);
}

double NNfunction_sb_sRcR::synapse0x15b0170() {
   return (neuron0x15a3560()*1.13574);
}

double NNfunction_sb_sRcR::synapse0x15bac20() {
   return (neuron0x15a38a0()*0.0284892);
}

double NNfunction_sb_sRcR::synapse0x15bac60() {
   return (neuron0x15a3e00()*-0.0242102);
}

double NNfunction_sb_sRcR::synapse0x15b02c0() {
   return (neuron0x15a4020()*-0.145031);
}

double NNfunction_sb_sRcR::synapse0x15b07d0() {
   return (neuron0x15a4360()*-0.00371066);
}

double NNfunction_sb_sRcR::synapse0x15b0810() {
   return (neuron0x15a46a0()*-0.00289053);
}

double NNfunction_sb_sRcR::synapse0x15b0850() {
   return (neuron0x15a49e0()*-0.0104013);
}

double NNfunction_sb_sRcR::synapse0x15b0aa0() {
   return (neuron0x15a4d20()*-0.000509882);
}

double NNfunction_sb_sRcR::synapse0x15b0ae0() {
   return (neuron0x15a5060()*-0.00591624);
}

double NNfunction_sb_sRcR::synapse0x15b0390() {
   return (neuron0x15a04a0()*0.50213);
}

double NNfunction_sb_sRcR::synapse0x15b03d0() {
   return (neuron0x15a07e0()*-0.780519);
}

double NNfunction_sb_sRcR::synapse0x15b0410() {
   return (neuron0x15a0b20()*0.0096186);
}

double NNfunction_sb_sRcR::synapse0x15b0450() {
   return (neuron0x15a0e60()*-0.0792727);
}

double NNfunction_sb_sRcR::synapse0x15b0dd0() {
   return (neuron0x15a11a0()*-1.28288);
}

double NNfunction_sb_sRcR::synapse0x15bd120() {
   return (neuron0x15a14e0()*0.643412);
}

double NNfunction_sb_sRcR::synapse0x15bd160() {
   return (neuron0x15a1820()*-1.46999);
}

double NNfunction_sb_sRcR::synapse0x15bd1a0() {
   return (neuron0x15a1b60()*0.9077);
}

double NNfunction_sb_sRcR::synapse0x15bd1e0() {
   return (neuron0x15a1ea0()*0.300833);
}

double NNfunction_sb_sRcR::synapse0x15bd220() {
   return (neuron0x15a21e0()*-0.224163);
}

double NNfunction_sb_sRcR::synapse0x15bd260() {
   return (neuron0x15a2520()*0.27061);
}

double NNfunction_sb_sRcR::synapse0x15bd2a0() {
   return (neuron0x15a2860()*-0.163861);
}

double NNfunction_sb_sRcR::synapse0x15bd2e0() {
   return (neuron0x15a2ba0()*0.333331);
}

double NNfunction_sb_sRcR::synapse0x15bd320() {
   return (neuron0x15a2ee0()*1.11214);
}

double NNfunction_sb_sRcR::synapse0x15bd360() {
   return (neuron0x15a3220()*1.11294);
}

double NNfunction_sb_sRcR::synapse0x15bd3a0() {
   return (neuron0x15a3560()*-1.33862);
}

double NNfunction_sb_sRcR::synapse0x15b0cb0() {
   return (neuron0x15a38a0()*-0.466168);
}

double NNfunction_sb_sRcR::synapse0x15b0cf0() {
   return (neuron0x15a3e00()*-0.456393);
}

double NNfunction_sb_sRcR::synapse0x15bd4f0() {
   return (neuron0x15a4020()*-0.834918);
}

double NNfunction_sb_sRcR::synapse0x15bd530() {
   return (neuron0x15a4360()*-0.499582);
}

double NNfunction_sb_sRcR::synapse0x15bd570() {
   return (neuron0x15a46a0()*-0.774481);
}

double NNfunction_sb_sRcR::synapse0x15bd5b0() {
   return (neuron0x15a49e0()*-0.262274);
}

double NNfunction_sb_sRcR::synapse0x15bd5f0() {
   return (neuron0x15a4d20()*-0.425375);
}

double NNfunction_sb_sRcR::synapse0x15bd630() {
   return (neuron0x15a5060()*-0.488305);
}

double NNfunction_sb_sRcR::synapse0x15bd9b0() {
   return (neuron0x15a04a0()*0.952665);
}

double NNfunction_sb_sRcR::synapse0x15bd9f0() {
   return (neuron0x15a07e0()*-1.41327);
}

double NNfunction_sb_sRcR::synapse0x15bda30() {
   return (neuron0x15a0b20()*0.249217);
}

double NNfunction_sb_sRcR::synapse0x15bda70() {
   return (neuron0x15a0e60()*0.504065);
}

double NNfunction_sb_sRcR::synapse0x15bdab0() {
   return (neuron0x15a11a0()*-0.0226354);
}

double NNfunction_sb_sRcR::synapse0x15bdaf0() {
   return (neuron0x15a14e0()*0.0965536);
}

double NNfunction_sb_sRcR::synapse0x15bdb30() {
   return (neuron0x15a1820()*0.613082);
}

double NNfunction_sb_sRcR::synapse0x15bdb70() {
   return (neuron0x15a1b60()*0.459603);
}

double NNfunction_sb_sRcR::synapse0x15bdbb0() {
   return (neuron0x15a1ea0()*0.347041);
}

double NNfunction_sb_sRcR::synapse0x15bdbf0() {
   return (neuron0x15a21e0()*0.166516);
}

double NNfunction_sb_sRcR::synapse0x15bdc30() {
   return (neuron0x15a2520()*2.04175);
}

double NNfunction_sb_sRcR::synapse0x15bdc70() {
   return (neuron0x15a2860()*0.100318);
}

double NNfunction_sb_sRcR::synapse0x15bdcb0() {
   return (neuron0x15a2ba0()*0.241893);
}

double NNfunction_sb_sRcR::synapse0x15bdcf0() {
   return (neuron0x15a2ee0()*0.205836);
}

double NNfunction_sb_sRcR::synapse0x15bdd30() {
   return (neuron0x15a3220()*0.27301);
}

double NNfunction_sb_sRcR::synapse0x15bdd70() {
   return (neuron0x15a3560()*0.0587649);
}

double NNfunction_sb_sRcR::synapse0x15bd800() {
   return (neuron0x15a38a0()*0.910539);
}

double NNfunction_sb_sRcR::synapse0x15bd840() {
   return (neuron0x15a3e00()*0.591157);
}

double NNfunction_sb_sRcR::synapse0x15bdec0() {
   return (neuron0x15a4020()*0.817249);
}

double NNfunction_sb_sRcR::synapse0x15bdf00() {
   return (neuron0x15a4360()*-0.341456);
}

double NNfunction_sb_sRcR::synapse0x15bdf40() {
   return (neuron0x15a46a0()*0.190016);
}

double NNfunction_sb_sRcR::synapse0x15bdf80() {
   return (neuron0x15a49e0()*-0.550037);
}

double NNfunction_sb_sRcR::synapse0x15bdfc0() {
   return (neuron0x15a4d20()*-0.278917);
}

double NNfunction_sb_sRcR::synapse0x15be000() {
   return (neuron0x15a5060()*-0.150591);
}

double NNfunction_sb_sRcR::synapse0x15be380() {
   return (neuron0x15a04a0()*0.748745);
}

double NNfunction_sb_sRcR::synapse0x15be3c0() {
   return (neuron0x15a07e0()*0.013135);
}

double NNfunction_sb_sRcR::synapse0x15be400() {
   return (neuron0x15a0b20()*-0.00659755);
}

double NNfunction_sb_sRcR::synapse0x15be440() {
   return (neuron0x15a0e60()*-0.077265);
}

double NNfunction_sb_sRcR::synapse0x15be480() {
   return (neuron0x15a11a0()*0.119216);
}

double NNfunction_sb_sRcR::synapse0x15be4c0() {
   return (neuron0x15a14e0()*-0.724874);
}

double NNfunction_sb_sRcR::synapse0x15be500() {
   return (neuron0x15a1820()*1.03843);
}

double NNfunction_sb_sRcR::synapse0x15be540() {
   return (neuron0x15a1b60()*-0.0659511);
}

double NNfunction_sb_sRcR::synapse0x15be580() {
   return (neuron0x15a1ea0()*0.95069);
}

double NNfunction_sb_sRcR::synapse0x15be5c0() {
   return (neuron0x15a21e0()*0.13241);
}

double NNfunction_sb_sRcR::synapse0x15be600() {
   return (neuron0x15a2520()*0.313309);
}

double NNfunction_sb_sRcR::synapse0x15be640() {
   return (neuron0x15a2860()*-0.663494);
}

double NNfunction_sb_sRcR::synapse0x15be680() {
   return (neuron0x15a2ba0()*0.429476);
}

double NNfunction_sb_sRcR::synapse0x15be6c0() {
   return (neuron0x15a2ee0()*-0.502511);
}

double NNfunction_sb_sRcR::synapse0x15be700() {
   return (neuron0x15a3220()*0.558316);
}

double NNfunction_sb_sRcR::synapse0x15be740() {
   return (neuron0x15a3560()*-0.714815);
}

double NNfunction_sb_sRcR::synapse0x15be1d0() {
   return (neuron0x15a38a0()*0.265014);
}

double NNfunction_sb_sRcR::synapse0x15be210() {
   return (neuron0x15a3e00()*-1.28571);
}

double NNfunction_sb_sRcR::synapse0x15be890() {
   return (neuron0x15a4020()*0.173115);
}

double NNfunction_sb_sRcR::synapse0x15be8d0() {
   return (neuron0x15a4360()*0.640455);
}

double NNfunction_sb_sRcR::synapse0x15be910() {
   return (neuron0x15a46a0()*-0.804277);
}

double NNfunction_sb_sRcR::synapse0x15be950() {
   return (neuron0x15a49e0()*0.232381);
}

double NNfunction_sb_sRcR::synapse0x15be990() {
   return (neuron0x15a4d20()*0.704893);
}

double NNfunction_sb_sRcR::synapse0x15be9d0() {
   return (neuron0x15a5060()*-0.973238);
}

double NNfunction_sb_sRcR::synapse0x15bed50() {
   return (neuron0x15a04a0()*-0.586974);
}

double NNfunction_sb_sRcR::synapse0x15bed90() {
   return (neuron0x15a07e0()*0.299916);
}

double NNfunction_sb_sRcR::synapse0x15bedd0() {
   return (neuron0x15a0b20()*-0.346049);
}

double NNfunction_sb_sRcR::synapse0x15bee10() {
   return (neuron0x15a0e60()*-0.156797);
}

double NNfunction_sb_sRcR::synapse0x15bee50() {
   return (neuron0x15a11a0()*-1.08621);
}

double NNfunction_sb_sRcR::synapse0x15bee90() {
   return (neuron0x15a14e0()*1.3348);
}

double NNfunction_sb_sRcR::synapse0x15beed0() {
   return (neuron0x15a1820()*-0.249125);
}

double NNfunction_sb_sRcR::synapse0x15bef10() {
   return (neuron0x15a1b60()*0.6258);
}

double NNfunction_sb_sRcR::synapse0x15bef50() {
   return (neuron0x15a1ea0()*-0.582333);
}

double NNfunction_sb_sRcR::synapse0x15bef90() {
   return (neuron0x15a21e0()*0.0300834);
}

double NNfunction_sb_sRcR::synapse0x15befd0() {
   return (neuron0x15a2520()*0.130464);
}

double NNfunction_sb_sRcR::synapse0x15bf010() {
   return (neuron0x15a2860()*-0.312452);
}

double NNfunction_sb_sRcR::synapse0x15bf050() {
   return (neuron0x15a2ba0()*-0.204152);
}

double NNfunction_sb_sRcR::synapse0x15bf090() {
   return (neuron0x15a2ee0()*0.51555);
}

double NNfunction_sb_sRcR::synapse0x15bf0d0() {
   return (neuron0x15a3220()*0.191177);
}

double NNfunction_sb_sRcR::synapse0x15bf110() {
   return (neuron0x15a3560()*1.28509);
}

double NNfunction_sb_sRcR::synapse0x15beba0() {
   return (neuron0x15a38a0()*0.106809);
}

double NNfunction_sb_sRcR::synapse0x15bebe0() {
   return (neuron0x15a3e00()*-0.124105);
}

double NNfunction_sb_sRcR::synapse0x15bf260() {
   return (neuron0x15a4020()*-0.514455);
}

double NNfunction_sb_sRcR::synapse0x15bf2a0() {
   return (neuron0x15a4360()*0.512468);
}

double NNfunction_sb_sRcR::synapse0x15bf2e0() {
   return (neuron0x15a46a0()*-0.47429);
}

double NNfunction_sb_sRcR::synapse0x15bf320() {
   return (neuron0x15a49e0()*-0.0369515);
}

double NNfunction_sb_sRcR::synapse0x15bf360() {
   return (neuron0x15a4d20()*-0.013423);
}

double NNfunction_sb_sRcR::synapse0x15bf3a0() {
   return (neuron0x15a5060()*-0.531609);
}

double NNfunction_sb_sRcR::synapse0x15bf720() {
   return (neuron0x15a04a0()*0.00344634);
}

double NNfunction_sb_sRcR::synapse0x15bf760() {
   return (neuron0x15a07e0()*-0.0110379);
}

double NNfunction_sb_sRcR::synapse0x15bf7a0() {
   return (neuron0x15a0b20()*-0.00146811);
}

double NNfunction_sb_sRcR::synapse0x15bf7e0() {
   return (neuron0x15a0e60()*-0.0289461);
}

double NNfunction_sb_sRcR::synapse0x15bf820() {
   return (neuron0x15a11a0()*-0.00841181);
}

double NNfunction_sb_sRcR::synapse0x15bf860() {
   return (neuron0x15a14e0()*-0.00501052);
}

double NNfunction_sb_sRcR::synapse0x15bf8a0() {
   return (neuron0x15a1820()*-0.0046855);
}

double NNfunction_sb_sRcR::synapse0x15bf8e0() {
   return (neuron0x15a1b60()*-0.0012446);
}

double NNfunction_sb_sRcR::synapse0x15bf920() {
   return (neuron0x15a1ea0()*-0.00521398);
}

double NNfunction_sb_sRcR::synapse0x15bf960() {
   return (neuron0x15a21e0()*-0.00729582);
}

double NNfunction_sb_sRcR::synapse0x15bf9a0() {
   return (neuron0x15a2520()*-0.00654332);
}

double NNfunction_sb_sRcR::synapse0x15bf9e0() {
   return (neuron0x15a2860()*0.0413373);
}

double NNfunction_sb_sRcR::synapse0x15bfa20() {
   return (neuron0x15a2ba0()*0.0386397);
}

double NNfunction_sb_sRcR::synapse0x15bfa60() {
   return (neuron0x15a2ee0()*-0.0188295);
}

double NNfunction_sb_sRcR::synapse0x15bfaa0() {
   return (neuron0x15a3220()*0.0166794);
}

double NNfunction_sb_sRcR::synapse0x15bfae0() {
   return (neuron0x15a3560()*-0.0312585);
}

double NNfunction_sb_sRcR::synapse0x15bf570() {
   return (neuron0x15a38a0()*-0.0182753);
}

double NNfunction_sb_sRcR::synapse0x15bf5b0() {
   return (neuron0x15a3e00()*-0.00378169);
}

double NNfunction_sb_sRcR::synapse0x15bfc30() {
   return (neuron0x15a4020()*-0.623519);
}

double NNfunction_sb_sRcR::synapse0x15bfc70() {
   return (neuron0x15a4360()*0.0046513);
}

double NNfunction_sb_sRcR::synapse0x15bfcb0() {
   return (neuron0x15a46a0()*-0.000563852);
}

double NNfunction_sb_sRcR::synapse0x15bfcf0() {
   return (neuron0x15a49e0()*-0.00512922);
}

double NNfunction_sb_sRcR::synapse0x15bfd30() {
   return (neuron0x15a4d20()*-0.00193795);
}

double NNfunction_sb_sRcR::synapse0x15bfd70() {
   return (neuron0x15a5060()*-0.00407273);
}

double NNfunction_sb_sRcR::synapse0x15c00f0() {
   return (neuron0x15a04a0()*0.0419797);
}

double NNfunction_sb_sRcR::synapse0x15c0130() {
   return (neuron0x15a07e0()*-0.146613);
}

double NNfunction_sb_sRcR::synapse0x15c0170() {
   return (neuron0x15a0b20()*0.489222);
}

double NNfunction_sb_sRcR::synapse0x15c01b0() {
   return (neuron0x15a0e60()*-2.15185);
}

double NNfunction_sb_sRcR::synapse0x15c01f0() {
   return (neuron0x15a11a0()*-0.527359);
}

double NNfunction_sb_sRcR::synapse0x15c0230() {
   return (neuron0x15a14e0()*-0.14812);
}

double NNfunction_sb_sRcR::synapse0x15c0270() {
   return (neuron0x15a1820()*0.243712);
}

double NNfunction_sb_sRcR::synapse0x15c02b0() {
   return (neuron0x15a1b60()*-0.101615);
}

double NNfunction_sb_sRcR::synapse0x15c02f0() {
   return (neuron0x15a1ea0()*-0.0468847);
}

double NNfunction_sb_sRcR::synapse0x15c0330() {
   return (neuron0x15a21e0()*-0.7275);
}

double NNfunction_sb_sRcR::synapse0x15c0370() {
   return (neuron0x15a2520()*-0.684477);
}

double NNfunction_sb_sRcR::synapse0x15c03b0() {
   return (neuron0x15a2860()*0.156775);
}

double NNfunction_sb_sRcR::synapse0x15c03f0() {
   return (neuron0x15a2ba0()*0.774166);
}

double NNfunction_sb_sRcR::synapse0x15c0430() {
   return (neuron0x15a2ee0()*0.418864);
}

double NNfunction_sb_sRcR::synapse0x15c0470() {
   return (neuron0x15a3220()*-0.671255);
}

double NNfunction_sb_sRcR::synapse0x15c04b0() {
   return (neuron0x15a3560()*0.100817);
}

double NNfunction_sb_sRcR::synapse0x15bff40() {
   return (neuron0x15a38a0()*-0.404407);
}

double NNfunction_sb_sRcR::synapse0x15bff80() {
   return (neuron0x15a3e00()*0.455851);
}

double NNfunction_sb_sRcR::synapse0x15c0600() {
   return (neuron0x15a4020()*0.491129);
}

double NNfunction_sb_sRcR::synapse0x15c0640() {
   return (neuron0x15a4360()*-0.47071);
}

double NNfunction_sb_sRcR::synapse0x15c0680() {
   return (neuron0x15a46a0()*0.109366);
}

double NNfunction_sb_sRcR::synapse0x15c06c0() {
   return (neuron0x15a49e0()*0.200445);
}

double NNfunction_sb_sRcR::synapse0x15c0700() {
   return (neuron0x15a4d20()*-0.159086);
}

double NNfunction_sb_sRcR::synapse0x15c0740() {
   return (neuron0x15a5060()*-0.498372);
}

double NNfunction_sb_sRcR::synapse0x15c0ac0() {
   return (neuron0x15a04a0()*-0.684964);
}

double NNfunction_sb_sRcR::synapse0x15c0b00() {
   return (neuron0x15a07e0()*0.505186);
}

double NNfunction_sb_sRcR::synapse0x15c0b40() {
   return (neuron0x15a0b20()*-0.651309);
}

double NNfunction_sb_sRcR::synapse0x15c0b80() {
   return (neuron0x15a0e60()*-2.00851);
}

double NNfunction_sb_sRcR::synapse0x15c0bc0() {
   return (neuron0x15a11a0()*0.93182);
}

double NNfunction_sb_sRcR::synapse0x15c0c00() {
   return (neuron0x15a14e0()*0.08244);
}

double NNfunction_sb_sRcR::synapse0x15c0c40() {
   return (neuron0x15a1820()*0.431524);
}

double NNfunction_sb_sRcR::synapse0x15c0c80() {
   return (neuron0x15a1b60()*0.491257);
}

double NNfunction_sb_sRcR::synapse0x15c0cc0() {
   return (neuron0x15a1ea0()*0.0103039);
}

double NNfunction_sb_sRcR::synapse0x15c0d00() {
   return (neuron0x15a21e0()*-0.280676);
}

double NNfunction_sb_sRcR::synapse0x15c0d40() {
   return (neuron0x15a2520()*-0.324008);
}

double NNfunction_sb_sRcR::synapse0x15c0d80() {
   return (neuron0x15a2860()*0.236156);
}

double NNfunction_sb_sRcR::synapse0x15c0dc0() {
   return (neuron0x15a2ba0()*-0.0210602);
}

double NNfunction_sb_sRcR::synapse0x15c0e00() {
   return (neuron0x15a2ee0()*0.661345);
}

double NNfunction_sb_sRcR::synapse0x15c0e40() {
   return (neuron0x15a3220()*0.503462);
}

double NNfunction_sb_sRcR::synapse0x15c0e80() {
   return (neuron0x15a3560()*0.831174);
}

double NNfunction_sb_sRcR::synapse0x15c0910() {
   return (neuron0x15a38a0()*0.608843);
}

double NNfunction_sb_sRcR::synapse0x15c0950() {
   return (neuron0x15a3e00()*0.338954);
}

double NNfunction_sb_sRcR::synapse0x15c0fd0() {
   return (neuron0x15a4020()*0.433239);
}

double NNfunction_sb_sRcR::synapse0x15c1010() {
   return (neuron0x15a4360()*-0.400484);
}

double NNfunction_sb_sRcR::synapse0x15c1050() {
   return (neuron0x15a46a0()*-0.202067);
}

double NNfunction_sb_sRcR::synapse0x15c1090() {
   return (neuron0x15a49e0()*0.0995535);
}

double NNfunction_sb_sRcR::synapse0x15c10d0() {
   return (neuron0x15a4d20()*0.293603);
}

double NNfunction_sb_sRcR::synapse0x15c1110() {
   return (neuron0x15a5060()*0.0435479);
}

double NNfunction_sb_sRcR::synapse0x15c1490() {
   return (neuron0x15a04a0()*0.998204);
}

double NNfunction_sb_sRcR::synapse0x15c14d0() {
   return (neuron0x15a07e0()*-0.064834);
}

double NNfunction_sb_sRcR::synapse0x15c1510() {
   return (neuron0x15a0b20()*0.15198);
}

double NNfunction_sb_sRcR::synapse0x15c1550() {
   return (neuron0x15a0e60()*-1.68356);
}

double NNfunction_sb_sRcR::synapse0x15c1590() {
   return (neuron0x15a11a0()*-0.887529);
}

double NNfunction_sb_sRcR::synapse0x15c15d0() {
   return (neuron0x15a14e0()*0.293501);
}

double NNfunction_sb_sRcR::synapse0x15c1610() {
   return (neuron0x15a1820()*-0.504849);
}

double NNfunction_sb_sRcR::synapse0x15c1650() {
   return (neuron0x15a1b60()*-0.491294);
}

double NNfunction_sb_sRcR::synapse0x15c1690() {
   return (neuron0x15a1ea0()*-0.304125);
}

double NNfunction_sb_sRcR::synapse0x15c16d0() {
   return (neuron0x15a21e0()*-0.222527);
}

double NNfunction_sb_sRcR::synapse0x15c1710() {
   return (neuron0x15a2520()*0.0871962);
}

double NNfunction_sb_sRcR::synapse0x15c1750() {
   return (neuron0x15a2860()*0.238285);
}

double NNfunction_sb_sRcR::synapse0x15c1790() {
   return (neuron0x15a2ba0()*-0.355017);
}

double NNfunction_sb_sRcR::synapse0x15c17d0() {
   return (neuron0x15a2ee0()*0.534643);
}

double NNfunction_sb_sRcR::synapse0x15c1810() {
   return (neuron0x15a3220()*0.128185);
}

double NNfunction_sb_sRcR::synapse0x15c1850() {
   return (neuron0x15a3560()*1.65104);
}

double NNfunction_sb_sRcR::synapse0x15c12e0() {
   return (neuron0x15a38a0()*-0.294793);
}

double NNfunction_sb_sRcR::synapse0x15c1320() {
   return (neuron0x15a3e00()*0.622924);
}

double NNfunction_sb_sRcR::synapse0x15c19a0() {
   return (neuron0x15a4020()*0.784225);
}

double NNfunction_sb_sRcR::synapse0x15c19e0() {
   return (neuron0x15a4360()*-0.310413);
}

double NNfunction_sb_sRcR::synapse0x15c1a20() {
   return (neuron0x15a46a0()*-0.42579);
}

double NNfunction_sb_sRcR::synapse0x15c1a60() {
   return (neuron0x15a49e0()*-0.722056);
}

double NNfunction_sb_sRcR::synapse0x15c1aa0() {
   return (neuron0x15a4d20()*-0.437097);
}

double NNfunction_sb_sRcR::synapse0x15c1ae0() {
   return (neuron0x15a5060()*0.568818);
}

double NNfunction_sb_sRcR::synapse0x15aa590() {
   return (neuron0x15a04a0()*-0.208467);
}

double NNfunction_sb_sRcR::synapse0x15aa5d0() {
   return (neuron0x15a07e0()*0.0746303);
}

double NNfunction_sb_sRcR::synapse0x15aa610() {
   return (neuron0x15a0b20()*-0.231651);
}

double NNfunction_sb_sRcR::synapse0x15aa650() {
   return (neuron0x15a0e60()*-0.03636);
}

double NNfunction_sb_sRcR::synapse0x15aa690() {
   return (neuron0x15a11a0()*0.45372);
}

double NNfunction_sb_sRcR::synapse0x15aa6d0() {
   return (neuron0x15a14e0()*0.929572);
}

double NNfunction_sb_sRcR::synapse0x15aa710() {
   return (neuron0x15a1820()*0.260974);
}

double NNfunction_sb_sRcR::synapse0x15aa750() {
   return (neuron0x15a1b60()*0.510757);
}

double NNfunction_sb_sRcR::synapse0x15c2270() {
   return (neuron0x15a1ea0()*0.101455);
}

double NNfunction_sb_sRcR::synapse0x15c22b0() {
   return (neuron0x15a21e0()*0.823347);
}

double NNfunction_sb_sRcR::synapse0x15c22f0() {
   return (neuron0x15a2520()*0.12165);
}

double NNfunction_sb_sRcR::synapse0x15c2330() {
   return (neuron0x15a2860()*0.872965);
}

double NNfunction_sb_sRcR::synapse0x15c2370() {
   return (neuron0x15a2ba0()*0.487374);
}

double NNfunction_sb_sRcR::synapse0x15c23b0() {
   return (neuron0x15a2ee0()*-1.20192);
}

double NNfunction_sb_sRcR::synapse0x15c23f0() {
   return (neuron0x15a3220()*0.110281);
}

double NNfunction_sb_sRcR::synapse0x15c2430() {
   return (neuron0x15a3560()*0.320099);
}

double NNfunction_sb_sRcR::synapse0x15c1cb0() {
   return (neuron0x15a38a0()*-0.177608);
}

double NNfunction_sb_sRcR::synapse0x15c1cf0() {
   return (neuron0x15a3e00()*-0.0461353);
}

double NNfunction_sb_sRcR::synapse0x15c2580() {
   return (neuron0x15a4020()*-0.432412);
}

double NNfunction_sb_sRcR::synapse0x15c25c0() {
   return (neuron0x15a4360()*-0.784022);
}

double NNfunction_sb_sRcR::synapse0x15c2600() {
   return (neuron0x15a46a0()*-0.216215);
}

double NNfunction_sb_sRcR::synapse0x15c2640() {
   return (neuron0x15a49e0()*-0.334285);
}

double NNfunction_sb_sRcR::synapse0x15c2680() {
   return (neuron0x15a4d20()*-0.804661);
}

double NNfunction_sb_sRcR::synapse0x15c26c0() {
   return (neuron0x15a5060()*-0.616334);
}

double NNfunction_sb_sRcR::synapse0x15c2a40() {
   return (neuron0x15a04a0()*-0.00379933);
}

double NNfunction_sb_sRcR::synapse0x15c2a80() {
   return (neuron0x15a07e0()*-0.0179139);
}

double NNfunction_sb_sRcR::synapse0x15c2ac0() {
   return (neuron0x15a0b20()*-0.00268296);
}

double NNfunction_sb_sRcR::synapse0x15c2b00() {
   return (neuron0x15a0e60()*-2.78301);
}

double NNfunction_sb_sRcR::synapse0x15c2b40() {
   return (neuron0x15a11a0()*0.00360835);
}

double NNfunction_sb_sRcR::synapse0x15c2b80() {
   return (neuron0x15a14e0()*-0.00588308);
}

double NNfunction_sb_sRcR::synapse0x15c2bc0() {
   return (neuron0x15a1820()*-0.00249964);
}

double NNfunction_sb_sRcR::synapse0x15c2c00() {
   return (neuron0x15a1b60()*-0.00772206);
}

double NNfunction_sb_sRcR::synapse0x15c2c40() {
   return (neuron0x15a1ea0()*0.00514405);
}

double NNfunction_sb_sRcR::synapse0x15c2c80() {
   return (neuron0x15a21e0()*0.0179541);
}

double NNfunction_sb_sRcR::synapse0x15c2cc0() {
   return (neuron0x15a2520()*0.00161636);
}

double NNfunction_sb_sRcR::synapse0x15c2d00() {
   return (neuron0x15a2860()*0.0262696);
}

double NNfunction_sb_sRcR::synapse0x15c2d40() {
   return (neuron0x15a2ba0()*0.0359527);
}

double NNfunction_sb_sRcR::synapse0x15c2d80() {
   return (neuron0x15a2ee0()*-0.0168309);
}

double NNfunction_sb_sRcR::synapse0x15c2dc0() {
   return (neuron0x15a3220()*0.00719749);
}

double NNfunction_sb_sRcR::synapse0x15c2e00() {
   return (neuron0x15a3560()*-0.153725);
}

double NNfunction_sb_sRcR::synapse0x15c2890() {
   return (neuron0x15a38a0()*-0.0135279);
}

double NNfunction_sb_sRcR::synapse0x15c28d0() {
   return (neuron0x15a3e00()*0.0255147);
}

double NNfunction_sb_sRcR::synapse0x15c2f50() {
   return (neuron0x15a4020()*-0.156651);
}

double NNfunction_sb_sRcR::synapse0x15c2f90() {
   return (neuron0x15a4360()*0.00563848);
}

double NNfunction_sb_sRcR::synapse0x15c2fd0() {
   return (neuron0x15a46a0()*0.00944791);
}

double NNfunction_sb_sRcR::synapse0x15c3010() {
   return (neuron0x15a49e0()*0.00542233);
}

double NNfunction_sb_sRcR::synapse0x15c3050() {
   return (neuron0x15a4d20()*-0.0104879);
}

double NNfunction_sb_sRcR::synapse0x15c3090() {
   return (neuron0x15a5060()*-0.000879304);
}

double NNfunction_sb_sRcR::synapse0x15c3410() {
   return (neuron0x15a04a0()*0.00249621);
}

double NNfunction_sb_sRcR::synapse0x15c3450() {
   return (neuron0x15a07e0()*-0.027234);
}

double NNfunction_sb_sRcR::synapse0x15c3490() {
   return (neuron0x15a0b20()*-0.00492319);
}

double NNfunction_sb_sRcR::synapse0x15c34d0() {
   return (neuron0x15a0e60()*-0.204402);
}

double NNfunction_sb_sRcR::synapse0x15c3510() {
   return (neuron0x15a11a0()*-0.00739648);
}

double NNfunction_sb_sRcR::synapse0x15c3550() {
   return (neuron0x15a14e0()*-0.00502137);
}

double NNfunction_sb_sRcR::synapse0x15c3590() {
   return (neuron0x15a1820()*0.000856651);
}

double NNfunction_sb_sRcR::synapse0x15c35d0() {
   return (neuron0x15a1b60()*-0.014931);
}

double NNfunction_sb_sRcR::synapse0x15c3610() {
   return (neuron0x15a1ea0()*0.00599972);
}

double NNfunction_sb_sRcR::synapse0x15c3650() {
   return (neuron0x15a21e0()*-0.00291447);
}

double NNfunction_sb_sRcR::synapse0x15c3690() {
   return (neuron0x15a2520()*0.0119194);
}

double NNfunction_sb_sRcR::synapse0x15c36d0() {
   return (neuron0x15a2860()*0.0522211);
}

double NNfunction_sb_sRcR::synapse0x15c3710() {
   return (neuron0x15a2ba0()*0.032626);
}

double NNfunction_sb_sRcR::synapse0x15c3750() {
   return (neuron0x15a2ee0()*0.00103257);
}

double NNfunction_sb_sRcR::synapse0x15c3790() {
   return (neuron0x15a3220()*0.0163851);
}

double NNfunction_sb_sRcR::synapse0x15c37d0() {
   return (neuron0x15a3560()*0.737106);
}

double NNfunction_sb_sRcR::synapse0x15c3260() {
   return (neuron0x15a38a0()*0.0113247);
}

double NNfunction_sb_sRcR::synapse0x15c32a0() {
   return (neuron0x15a3e00()*0.024093);
}

double NNfunction_sb_sRcR::synapse0x15b3dd0() {
   return (neuron0x15a4020()*0.0800099);
}

double NNfunction_sb_sRcR::synapse0x15b3e10() {
   return (neuron0x15a4360()*0.00654141);
}

double NNfunction_sb_sRcR::synapse0x15b3e50() {
   return (neuron0x15a46a0()*-0.000100891);
}

double NNfunction_sb_sRcR::synapse0x15b3e90() {
   return (neuron0x15a49e0()*-0.00735034);
}

double NNfunction_sb_sRcR::synapse0x15b3ed0() {
   return (neuron0x15a4d20()*0.00167252);
}

double NNfunction_sb_sRcR::synapse0x15b3f10() {
   return (neuron0x15a5060()*-0.00291738);
}

double NNfunction_sb_sRcR::synapse0x15b4290() {
   return (neuron0x15a04a0()*0.14407);
}

double NNfunction_sb_sRcR::synapse0x15b42d0() {
   return (neuron0x15a07e0()*-0.0399777);
}

double NNfunction_sb_sRcR::synapse0x15b4310() {
   return (neuron0x15a0b20()*0.154597);
}

double NNfunction_sb_sRcR::synapse0x15b4350() {
   return (neuron0x15a0e60()*0.878714);
}

double NNfunction_sb_sRcR::synapse0x15b4390() {
   return (neuron0x15a11a0()*0.957765);
}

double NNfunction_sb_sRcR::synapse0x15b43d0() {
   return (neuron0x15a14e0()*0.321258);
}

double NNfunction_sb_sRcR::synapse0x15b4410() {
   return (neuron0x15a1820()*0.255206);
}

double NNfunction_sb_sRcR::synapse0x15b4450() {
   return (neuron0x15a1b60()*-0.250613);
}

double NNfunction_sb_sRcR::synapse0x15b4490() {
   return (neuron0x15a1ea0()*0.198644);
}

double NNfunction_sb_sRcR::synapse0x15b44d0() {
   return (neuron0x15a21e0()*-0.643555);
}

double NNfunction_sb_sRcR::synapse0x15b4510() {
   return (neuron0x15a2520()*-0.499981);
}

double NNfunction_sb_sRcR::synapse0x15b4550() {
   return (neuron0x15a2860()*0.155972);
}

double NNfunction_sb_sRcR::synapse0x15b4590() {
   return (neuron0x15a2ba0()*-0.518232);
}

double NNfunction_sb_sRcR::synapse0x15b45d0() {
   return (neuron0x15a2ee0()*0.207078);
}

double NNfunction_sb_sRcR::synapse0x15b4610() {
   return (neuron0x15a3220()*-0.647812);
}

double NNfunction_sb_sRcR::synapse0x15b4650() {
   return (neuron0x15a3560()*-0.704944);
}

double NNfunction_sb_sRcR::synapse0x15b40e0() {
   return (neuron0x15a38a0()*-0.33655);
}

double NNfunction_sb_sRcR::synapse0x15b4120() {
   return (neuron0x15a3e00()*-0.73798);
}

double NNfunction_sb_sRcR::synapse0x15b47a0() {
   return (neuron0x15a4020()*-0.0759825);
}

double NNfunction_sb_sRcR::synapse0x15b47e0() {
   return (neuron0x15a4360()*0.500285);
}

double NNfunction_sb_sRcR::synapse0x15b4820() {
   return (neuron0x15a46a0()*-0.0166767);
}

double NNfunction_sb_sRcR::synapse0x15b4860() {
   return (neuron0x15a49e0()*0.173505);
}

double NNfunction_sb_sRcR::synapse0x15b48a0() {
   return (neuron0x15a4d20()*0.128823);
}

double NNfunction_sb_sRcR::synapse0x15b48e0() {
   return (neuron0x15a5060()*0.350202);
}

double NNfunction_sb_sRcR::synapse0x15b4c60() {
   return (neuron0x15a04a0()*0.00218484);
}

double NNfunction_sb_sRcR::synapse0x15b4ca0() {
   return (neuron0x15a07e0()*0.00201485);
}

double NNfunction_sb_sRcR::synapse0x15b4ce0() {
   return (neuron0x15a0b20()*0.0075394);
}

double NNfunction_sb_sRcR::synapse0x15b4d20() {
   return (neuron0x15a0e60()*-3.4444);
}

double NNfunction_sb_sRcR::synapse0x15b4d60() {
   return (neuron0x15a11a0()*-0.00260345);
}

double NNfunction_sb_sRcR::synapse0x15b4da0() {
   return (neuron0x15a14e0()*-0.0130796);
}

double NNfunction_sb_sRcR::synapse0x15b4de0() {
   return (neuron0x15a1820()*-0.00874954);
}

double NNfunction_sb_sRcR::synapse0x15b4e20() {
   return (neuron0x15a1b60()*0.00245017);
}

double NNfunction_sb_sRcR::synapse0x15b4e60() {
   return (neuron0x15a1ea0()*0.000101988);
}

double NNfunction_sb_sRcR::synapse0x15b4ea0() {
   return (neuron0x15a21e0()*-0.00205534);
}

double NNfunction_sb_sRcR::synapse0x15b4ee0() {
   return (neuron0x15a2520()*8.10897e-05);
}

double NNfunction_sb_sRcR::synapse0x15b4f20() {
   return (neuron0x15a2860()*-0.0154284);
}

double NNfunction_sb_sRcR::synapse0x15b4f60() {
   return (neuron0x15a2ba0()*-0.0184414);
}

double NNfunction_sb_sRcR::synapse0x15b4fa0() {
   return (neuron0x15a2ee0()*0.00389113);
}

double NNfunction_sb_sRcR::synapse0x15b4fe0() {
   return (neuron0x15a3220()*-0.00887308);
}

double NNfunction_sb_sRcR::synapse0x15b5020() {
   return (neuron0x15a3560()*0.0712498);
}

double NNfunction_sb_sRcR::synapse0x15b4ab0() {
   return (neuron0x15a38a0()*0.00249973);
}

double NNfunction_sb_sRcR::synapse0x15b4af0() {
   return (neuron0x15a3e00()*-0.0130278);
}

double NNfunction_sb_sRcR::synapse0x15b5170() {
   return (neuron0x15a4020()*0.0804125);
}

double NNfunction_sb_sRcR::synapse0x15b51b0() {
   return (neuron0x15a4360()*-0.00226275);
}

double NNfunction_sb_sRcR::synapse0x15b51f0() {
   return (neuron0x15a46a0()*0.000188798);
}

double NNfunction_sb_sRcR::synapse0x15b5230() {
   return (neuron0x15a49e0()*-0.000535742);
}

double NNfunction_sb_sRcR::synapse0x15b5270() {
   return (neuron0x15a4d20()*-0.000862549);
}

double NNfunction_sb_sRcR::synapse0x15b52b0() {
   return (neuron0x15a5060()*-0.00162352);
}

double NNfunction_sb_sRcR::synapse0x15b5630() {
   return (neuron0x15a04a0()*-0.678193);
}

double NNfunction_sb_sRcR::synapse0x15b5670() {
   return (neuron0x15a07e0()*-0.262572);
}

double NNfunction_sb_sRcR::synapse0x15b56b0() {
   return (neuron0x15a0b20()*-0.378208);
}

double NNfunction_sb_sRcR::synapse0x15b56f0() {
   return (neuron0x15a0e60()*0.403599);
}

double NNfunction_sb_sRcR::synapse0x15b5730() {
   return (neuron0x15a11a0()*-1.08089);
}

double NNfunction_sb_sRcR::synapse0x15b5770() {
   return (neuron0x15a14e0()*-0.558729);
}

double NNfunction_sb_sRcR::synapse0x15b57b0() {
   return (neuron0x15a1820()*0.100574);
}

double NNfunction_sb_sRcR::synapse0x15b57f0() {
   return (neuron0x15a1b60()*-1.34534);
}

double NNfunction_sb_sRcR::synapse0x15b5830() {
   return (neuron0x15a1ea0()*-0.00744263);
}

double NNfunction_sb_sRcR::synapse0x15b5870() {
   return (neuron0x15a21e0()*-0.871601);
}

double NNfunction_sb_sRcR::synapse0x15b58b0() {
   return (neuron0x15a2520()*-0.202163);
}

double NNfunction_sb_sRcR::synapse0x15b58f0() {
   return (neuron0x15a2860()*-0.319873);
}

double NNfunction_sb_sRcR::synapse0x15b5930() {
   return (neuron0x15a2ba0()*-0.579117);
}

double NNfunction_sb_sRcR::synapse0x15b5970() {
   return (neuron0x15a2ee0()*0.387811);
}

double NNfunction_sb_sRcR::synapse0x15b59b0() {
   return (neuron0x15a3220()*-0.485196);
}

double NNfunction_sb_sRcR::synapse0x15b59f0() {
   return (neuron0x15a3560()*0.319641);
}

double NNfunction_sb_sRcR::synapse0x15b5480() {
   return (neuron0x15a38a0()*0.365109);
}

double NNfunction_sb_sRcR::synapse0x15b54c0() {
   return (neuron0x15a3e00()*1.46012);
}

double NNfunction_sb_sRcR::synapse0x15b5b40() {
   return (neuron0x15a4020()*-0.0875184);
}

double NNfunction_sb_sRcR::synapse0x15b5b80() {
   return (neuron0x15a4360()*0.215223);
}

double NNfunction_sb_sRcR::synapse0x15b5bc0() {
   return (neuron0x15a46a0()*-0.674423);
}

double NNfunction_sb_sRcR::synapse0x15b5c00() {
   return (neuron0x15a49e0()*0.547583);
}

double NNfunction_sb_sRcR::synapse0x15b5c40() {
   return (neuron0x15a4d20()*-0.88796);
}

double NNfunction_sb_sRcR::synapse0x15b5c80() {
   return (neuron0x15a5060()*0.256529);
}

double NNfunction_sb_sRcR::synapse0x15c7b50() {
   return (neuron0x15a04a0()*-0.336283);
}

double NNfunction_sb_sRcR::synapse0x15c7b90() {
   return (neuron0x15a07e0()*-1.1779);
}

double NNfunction_sb_sRcR::synapse0x15c7bd0() {
   return (neuron0x15a0b20()*1.19831);
}

double NNfunction_sb_sRcR::synapse0x15c7c10() {
   return (neuron0x15a0e60()*0.90716);
}

double NNfunction_sb_sRcR::synapse0x15c7c50() {
   return (neuron0x15a11a0()*0.781701);
}

double NNfunction_sb_sRcR::synapse0x15c7c90() {
   return (neuron0x15a14e0()*0.259458);
}

double NNfunction_sb_sRcR::synapse0x15c7cd0() {
   return (neuron0x15a1820()*0.749783);
}

double NNfunction_sb_sRcR::synapse0x15c7d10() {
   return (neuron0x15a1b60()*-0.803421);
}

double NNfunction_sb_sRcR::synapse0x15c7d50() {
   return (neuron0x15a1ea0()*-0.024869);
}

double NNfunction_sb_sRcR::synapse0x15c7d90() {
   return (neuron0x15a21e0()*-0.455367);
}

double NNfunction_sb_sRcR::synapse0x15c7dd0() {
   return (neuron0x15a2520()*0.286228);
}

double NNfunction_sb_sRcR::synapse0x15c7e10() {
   return (neuron0x15a2860()*-1.14407);
}

double NNfunction_sb_sRcR::synapse0x15c7e50() {
   return (neuron0x15a2ba0()*0.843383);
}

double NNfunction_sb_sRcR::synapse0x15c7e90() {
   return (neuron0x15a2ee0()*0.567093);
}

double NNfunction_sb_sRcR::synapse0x15c7ed0() {
   return (neuron0x15a3220()*0.377953);
}

double NNfunction_sb_sRcR::synapse0x15c7f10() {
   return (neuron0x15a3560()*0.252234);
}

double NNfunction_sb_sRcR::synapse0x15b5cc0() {
   return (neuron0x15a38a0()*-0.350346);
}

double NNfunction_sb_sRcR::synapse0x15b5d00() {
   return (neuron0x15a3e00()*-0.737916);
}

double NNfunction_sb_sRcR::synapse0x15c8060() {
   return (neuron0x15a4020()*-0.13978);
}

double NNfunction_sb_sRcR::synapse0x15c80a0() {
   return (neuron0x15a4360()*-1.09741);
}

double NNfunction_sb_sRcR::synapse0x15c80e0() {
   return (neuron0x15a46a0()*-0.00771702);
}

double NNfunction_sb_sRcR::synapse0x15c8120() {
   return (neuron0x15a49e0()*1.23154);
}

double NNfunction_sb_sRcR::synapse0x15c8160() {
   return (neuron0x15a4d20()*0.180196);
}

double NNfunction_sb_sRcR::synapse0x15c81a0() {
   return (neuron0x15a5060()*-0.00509576);
}

double NNfunction_sb_sRcR::synapse0x15c8520() {
   return (neuron0x15a04a0()*-0.0354917);
}

double NNfunction_sb_sRcR::synapse0x15c8560() {
   return (neuron0x15a07e0()*0.197248);
}

double NNfunction_sb_sRcR::synapse0x15c85a0() {
   return (neuron0x15a0b20()*0.226062);
}

double NNfunction_sb_sRcR::synapse0x15c85e0() {
   return (neuron0x15a0e60()*-0.811776);
}

double NNfunction_sb_sRcR::synapse0x15c8620() {
   return (neuron0x15a11a0()*-0.144895);
}

double NNfunction_sb_sRcR::synapse0x15c8660() {
   return (neuron0x15a14e0()*0.26427);
}

double NNfunction_sb_sRcR::synapse0x15c86a0() {
   return (neuron0x15a1820()*-0.898119);
}

double NNfunction_sb_sRcR::synapse0x15c86e0() {
   return (neuron0x15a1b60()*0.30603);
}

double NNfunction_sb_sRcR::synapse0x15c8720() {
   return (neuron0x15a1ea0()*0.567665);
}

double NNfunction_sb_sRcR::synapse0x15c8760() {
   return (neuron0x15a21e0()*-0.123204);
}

double NNfunction_sb_sRcR::synapse0x15c87a0() {
   return (neuron0x15a2520()*0.37565);
}

double NNfunction_sb_sRcR::synapse0x15c87e0() {
   return (neuron0x15a2860()*0.0235607);
}

double NNfunction_sb_sRcR::synapse0x15c8820() {
   return (neuron0x15a2ba0()*0.256677);
}

double NNfunction_sb_sRcR::synapse0x15c8860() {
   return (neuron0x15a2ee0()*0.553252);
}

double NNfunction_sb_sRcR::synapse0x15c88a0() {
   return (neuron0x15a3220()*-0.144989);
}

double NNfunction_sb_sRcR::synapse0x15c88e0() {
   return (neuron0x15a3560()*-0.213201);
}

double NNfunction_sb_sRcR::synapse0x15c8370() {
   return (neuron0x15a38a0()*0.197765);
}

double NNfunction_sb_sRcR::synapse0x15c83b0() {
   return (neuron0x15a3e00()*2.10163);
}

double NNfunction_sb_sRcR::synapse0x15c8a30() {
   return (neuron0x15a4020()*0.136767);
}

double NNfunction_sb_sRcR::synapse0x15c8a70() {
   return (neuron0x15a4360()*-0.125242);
}

double NNfunction_sb_sRcR::synapse0x15c8ab0() {
   return (neuron0x15a46a0()*0.00137015);
}

double NNfunction_sb_sRcR::synapse0x15c8af0() {
   return (neuron0x15a49e0()*-0.578109);
}

double NNfunction_sb_sRcR::synapse0x15c8b30() {
   return (neuron0x15a4d20()*0.164067);
}

double NNfunction_sb_sRcR::synapse0x15c8b70() {
   return (neuron0x15a5060()*-0.0176732);
}

double NNfunction_sb_sRcR::synapse0x15c8ef0() {
   return (neuron0x15a04a0()*0.0117327);
}

double NNfunction_sb_sRcR::synapse0x15c8f30() {
   return (neuron0x15a07e0()*-0.32138);
}

double NNfunction_sb_sRcR::synapse0x15c8f70() {
   return (neuron0x15a0b20()*-0.0216899);
}

double NNfunction_sb_sRcR::synapse0x15c8fb0() {
   return (neuron0x15a0e60()*-0.139428);
}

double NNfunction_sb_sRcR::synapse0x15c8ff0() {
   return (neuron0x15a11a0()*0.00898051);
}

double NNfunction_sb_sRcR::synapse0x15c9030() {
   return (neuron0x15a14e0()*0.00347042);
}

double NNfunction_sb_sRcR::synapse0x15c9070() {
   return (neuron0x15a1820()*0.0162077);
}

double NNfunction_sb_sRcR::synapse0x15c90b0() {
   return (neuron0x15a1b60()*-0.00185201);
}

double NNfunction_sb_sRcR::synapse0x15c90f0() {
   return (neuron0x15a1ea0()*-0.0149644);
}

double NNfunction_sb_sRcR::synapse0x15c9130() {
   return (neuron0x15a21e0()*0.00406852);
}

double NNfunction_sb_sRcR::synapse0x15c9170() {
   return (neuron0x15a2520()*-0.0315199);
}

double NNfunction_sb_sRcR::synapse0x15c91b0() {
   return (neuron0x15a2860()*0.154049);
}

double NNfunction_sb_sRcR::synapse0x15c91f0() {
   return (neuron0x15a2ba0()*0.129419);
}

double NNfunction_sb_sRcR::synapse0x15c9230() {
   return (neuron0x15a2ee0()*-0.0252498);
}

double NNfunction_sb_sRcR::synapse0x15c9270() {
   return (neuron0x15a3220()*0.0320609);
}

double NNfunction_sb_sRcR::synapse0x15c92b0() {
   return (neuron0x15a3560()*0.167138);
}

double NNfunction_sb_sRcR::synapse0x15c8d40() {
   return (neuron0x15a38a0()*0.012661);
}

double NNfunction_sb_sRcR::synapse0x15c8d80() {
   return (neuron0x15a3e00()*0.0832212);
}

double NNfunction_sb_sRcR::synapse0x15c9400() {
   return (neuron0x15a4020()*-0.0295756);
}

double NNfunction_sb_sRcR::synapse0x15c9440() {
   return (neuron0x15a4360()*0.0130549);
}

double NNfunction_sb_sRcR::synapse0x15c9480() {
   return (neuron0x15a46a0()*0.00979597);
}

double NNfunction_sb_sRcR::synapse0x15c94c0() {
   return (neuron0x15a49e0()*-0.0173053);
}

double NNfunction_sb_sRcR::synapse0x15c9500() {
   return (neuron0x15a4d20()*0.000949617);
}

double NNfunction_sb_sRcR::synapse0x15c9540() {
   return (neuron0x15a5060()*-0.00174195);
}

double NNfunction_sb_sRcR::synapse0x15c98c0() {
   return (neuron0x15a04a0()*-0.110827);
}

double NNfunction_sb_sRcR::synapse0x15c9900() {
   return (neuron0x15a07e0()*-0.287896);
}

double NNfunction_sb_sRcR::synapse0x15c9940() {
   return (neuron0x15a0b20()*0.0338369);
}

double NNfunction_sb_sRcR::synapse0x15c9980() {
   return (neuron0x15a0e60()*-1.75429);
}

double NNfunction_sb_sRcR::synapse0x15c99c0() {
   return (neuron0x15a11a0()*-0.586884);
}

double NNfunction_sb_sRcR::synapse0x15c9a00() {
   return (neuron0x15a14e0()*0.479475);
}

double NNfunction_sb_sRcR::synapse0x15c9a40() {
   return (neuron0x15a1820()*-0.142918);
}

double NNfunction_sb_sRcR::synapse0x15c9a80() {
   return (neuron0x15a1b60()*0.465417);
}

double NNfunction_sb_sRcR::synapse0x15c9ac0() {
   return (neuron0x15a1ea0()*-0.431957);
}

double NNfunction_sb_sRcR::synapse0x15c9b00() {
   return (neuron0x15a21e0()*0.167026);
}

double NNfunction_sb_sRcR::synapse0x15c9b40() {
   return (neuron0x15a2520()*0.129917);
}

double NNfunction_sb_sRcR::synapse0x15c9b80() {
   return (neuron0x15a2860()*0.525981);
}

double NNfunction_sb_sRcR::synapse0x15c9bc0() {
   return (neuron0x15a2ba0()*-0.789651);
}

double NNfunction_sb_sRcR::synapse0x15c9c00() {
   return (neuron0x15a2ee0()*1.47671);
}

double NNfunction_sb_sRcR::synapse0x15c9c40() {
   return (neuron0x15a3220()*-0.235259);
}

double NNfunction_sb_sRcR::synapse0x15c9c80() {
   return (neuron0x15a3560()*-0.799882);
}

double NNfunction_sb_sRcR::synapse0x15c9710() {
   return (neuron0x15a38a0()*-0.0482019);
}

double NNfunction_sb_sRcR::synapse0x15c9750() {
   return (neuron0x15a3e00()*0.151841);
}

double NNfunction_sb_sRcR::synapse0x15c9dd0() {
   return (neuron0x15a4020()*-0.420581);
}

double NNfunction_sb_sRcR::synapse0x15c9e10() {
   return (neuron0x15a4360()*-0.757587);
}

double NNfunction_sb_sRcR::synapse0x15c9e50() {
   return (neuron0x15a46a0()*-0.232789);
}

double NNfunction_sb_sRcR::synapse0x15c9e90() {
   return (neuron0x15a49e0()*-0.0210031);
}

double NNfunction_sb_sRcR::synapse0x15c9ed0() {
   return (neuron0x15a4d20()*-0.100173);
}

double NNfunction_sb_sRcR::synapse0x15c9f10() {
   return (neuron0x15a5060()*-0.274913);
}

double NNfunction_sb_sRcR::synapse0x15a64b0() {
   return (neuron0x15a5500()*1.56614);
}

double NNfunction_sb_sRcR::synapse0x15a64f0() {
   return (neuron0x15a5e10()*0.149586);
}

double NNfunction_sb_sRcR::synapse0x15a79c0() {
   return (neuron0x15a68f0()*0.592536);
}

double NNfunction_sb_sRcR::synapse0x15a7a00() {
   return (neuron0x1360180()*0.360013);
}

double NNfunction_sb_sRcR::synapse0x15a8390() {
   return (neuron0x15a7710()*0.360649);
}

double NNfunction_sb_sRcR::synapse0x15a83d0() {
   return (neuron0x15a80e0()*0.628544);
}

double NNfunction_sb_sRcR::synapse0x15a9160() {
   return (neuron0x15a8eb0()*0.300458);
}

double NNfunction_sb_sRcR::synapse0x15a91a0() {
   return (neuron0x15a9880()*0.769206);
}

double NNfunction_sb_sRcR::synapse0x15a9b30() {
   return (neuron0x15aa250()*0.332117);
}

double NNfunction_sb_sRcR::synapse0x15a9b70() {
   return (neuron0x15aad30()*0.580628);
}

double NNfunction_sb_sRcR::synapse0x15aa500() {
   return (neuron0x15ab700()*-0.0888149);
}

double NNfunction_sb_sRcR::synapse0x15aa540() {
   return (neuron0x15a87e0()*-0.0398278);
}

double NNfunction_sb_sRcR::synapse0x15aafe0() {
   return (neuron0x15ad2b0()*0.202188);
}

double NNfunction_sb_sRcR::synapse0x15ab020() {
   return (neuron0x15adc80()*1.05436);
}

double NNfunction_sb_sRcR::synapse0x15ab9b0() {
   return (neuron0x15ae650()*1.26737);
}

double NNfunction_sb_sRcR::synapse0x15ab9f0() {
   return (neuron0x15af020()*1.01244);
}

double NNfunction_sb_sRcR::synapse0x15a8a90() {
   return (neuron0x15b0e30()*0.998475);
}

double NNfunction_sb_sRcR::synapse0x15a8ad0() {
   return (neuron0x15b1110()*0.143584);
}

double NNfunction_sb_sRcR::synapse0x15ad560() {
   return (neuron0x15b1ae0()*-0.969507);
}

double NNfunction_sb_sRcR::synapse0x15ad5a0() {
   return (neuron0x15b24b0()*-0.189972);
}

double NNfunction_sb_sRcR::synapse0x15adf30() {
   return (neuron0x15b2e80()*0.877634);
}

double NNfunction_sb_sRcR::synapse0x15adf70() {
   return (neuron0x15b3850()*-0.679857);
}

double NNfunction_sb_sRcR::synapse0x15ae900() {
   return (neuron0x15ac3a0()*0.0506116);
}

double NNfunction_sb_sRcR::synapse0x15ae940() {
   return (neuron0x15acd70()*0.544389);
}

double NNfunction_sb_sRcR::synapse0x15af2d0() {
   return (neuron0x15b65e0()*-0.659697);
}

double NNfunction_sb_sRcR::synapse0x15af310() {
   return (neuron0x15b6fb0()*0.424591);
}

double NNfunction_sb_sRcR::synapse0x15a3440() {
   return (neuron0x15b7980()*0.229142);
}

double NNfunction_sb_sRcR::synapse0x15a3480() {
   return (neuron0x15b8350()*1.24454);
}

double NNfunction_sb_sRcR::synapse0x15b13c0() {
   return (neuron0x15b8d20()*0.304899);
}

double NNfunction_sb_sRcR::synapse0x15b1400() {
   return (neuron0x15b96f0()*0.523074);
}

double NNfunction_sb_sRcR::synapse0x15b1d90() {
   return (neuron0x15ba0c0()*-0.199191);
}

double NNfunction_sb_sRcR::synapse0x15b1dd0() {
   return (neuron0x15baa90()*0.197772);
}

double NNfunction_sb_sRcR::synapse0x15b2760() {
   return (neuron0x15b0b20()*0.727272);
}

double NNfunction_sb_sRcR::synapse0x15b27a0() {
   return (neuron0x15bd670()*0.550661);
}

double NNfunction_sb_sRcR::synapse0x15b3130() {
   return (neuron0x15be040()*0.823595);
}

double NNfunction_sb_sRcR::synapse0x15b3170() {
   return (neuron0x15bea10()*-0.201995);
}

double NNfunction_sb_sRcR::synapse0x15b3b00() {
   return (neuron0x15bf3e0()*-0.0942924);
}

double NNfunction_sb_sRcR::synapse0x15b3b40() {
   return (neuron0x15bfdb0()*0.37923);
}

double NNfunction_sb_sRcR::synapse0x15ac650() {
   return (neuron0x15c0780()*-0.0867113);
}

double NNfunction_sb_sRcR::synapse0x15ac690() {
   return (neuron0x15c1150()*-0.070919);
}

double NNfunction_sb_sRcR::synapse0x15b5f00() {
   return (neuron0x15c1b20()*0.945927);
}

double NNfunction_sb_sRcR::synapse0x15b5f40() {
   return (neuron0x15c2700()*0.923514);
}

double NNfunction_sb_sRcR::synapse0x15b6890() {
   return (neuron0x15c30d0()*0.246053);
}

double NNfunction_sb_sRcR::synapse0x15b68d0() {
   return (neuron0x15b3f50()*0.44581);
}

double NNfunction_sb_sRcR::synapse0x15b7260() {
   return (neuron0x15b4920()*-0.823067);
}

double NNfunction_sb_sRcR::synapse0x15b72a0() {
   return (neuron0x15b52f0()*0.595413);
}

double NNfunction_sb_sRcR::synapse0x15b7c30() {
   return (neuron0x15c7930()*1.55135);
}

double NNfunction_sb_sRcR::synapse0x15b7c70() {
   return (neuron0x15c81e0()*-0.314783);
}

double NNfunction_sb_sRcR::synapse0x15b8600() {
   return (neuron0x15c8bb0()*0.989299);
}

double NNfunction_sb_sRcR::synapse0x15b8640() {
   return (neuron0x15c9580()*0.893002);
}

double NNfunction_sb_sRcR::synapse0x15bad40() {
   return (neuron0x15a5500()*-0.399533);
}

double NNfunction_sb_sRcR::synapse0x15bad80() {
   return (neuron0x15a5e10()*0.0073127);
}

double NNfunction_sb_sRcR::synapse0x15b0300() {
   return (neuron0x15a68f0()*0.020608);
}

double NNfunction_sb_sRcR::synapse0x15b0340() {
   return (neuron0x1360180()*-0.0118688);
}

double NNfunction_sb_sRcR::synapse0x15bd920() {
   return (neuron0x15a7710()*-0.00144513);
}

double NNfunction_sb_sRcR::synapse0x15bd960() {
   return (neuron0x15a80e0()*0.00168621);
}

double NNfunction_sb_sRcR::synapse0x15be2f0() {
   return (neuron0x15a8eb0()*-0.90422);
}

double NNfunction_sb_sRcR::synapse0x15be330() {
   return (neuron0x15a9880()*0.00564099);
}

double NNfunction_sb_sRcR::synapse0x15becc0() {
   return (neuron0x15aa250()*-0.00293601);
}

double NNfunction_sb_sRcR::synapse0x15bed00() {
   return (neuron0x15aad30()*0.00745514);
}

double NNfunction_sb_sRcR::synapse0x15bf690() {
   return (neuron0x15ab700()*-0.0177713);
}

double NNfunction_sb_sRcR::synapse0x15bf6d0() {
   return (neuron0x15a87e0()*0.00039912);
}

double NNfunction_sb_sRcR::synapse0x15c0060() {
   return (neuron0x15ad2b0()*-0.00479527);
}

double NNfunction_sb_sRcR::synapse0x15c00a0() {
   return (neuron0x15adc80()*-0.289004);
}

double NNfunction_sb_sRcR::synapse0x15c0a30() {
   return (neuron0x15ae650()*0.0089442);
}

double NNfunction_sb_sRcR::synapse0x15c0a70() {
   return (neuron0x15af020()*-0.766633);
}

double NNfunction_sb_sRcR::synapse0x15c1400() {
   return (neuron0x15b0e30()*0.00348727);
}

double NNfunction_sb_sRcR::synapse0x15c1440() {
   return (neuron0x15b1110()*-0.00795714);
}

double NNfunction_sb_sRcR::synapse0x15c1dd0() {
   return (neuron0x15b1ae0()*0.229051);
}

double NNfunction_sb_sRcR::synapse0x15c1e10() {
   return (neuron0x15b24b0()*0.013927);
}

double NNfunction_sb_sRcR::synapse0x15c29b0() {
   return (neuron0x15b2e80()*0.751253);
}

double NNfunction_sb_sRcR::synapse0x15c29f0() {
   return (neuron0x15b3850()*-0.00281813);
}

double NNfunction_sb_sRcR::synapse0x15c3380() {
   return (neuron0x15ac3a0()*-0.00700029);
}

double NNfunction_sb_sRcR::synapse0x15c33c0() {
   return (neuron0x15acd70()*0.0200885);
}

double NNfunction_sb_sRcR::synapse0x15b4200() {
   return (neuron0x15b65e0()*0.00526075);
}

double NNfunction_sb_sRcR::synapse0x15b4240() {
   return (neuron0x15b6fb0()*0.0124178);
}

double NNfunction_sb_sRcR::synapse0x15b4bd0() {
   return (neuron0x15b7980()*0.00936212);
}

double NNfunction_sb_sRcR::synapse0x15b4c10() {
   return (neuron0x15b8350()*0.00727512);
}

double NNfunction_sb_sRcR::synapse0x15b55a0() {
   return (neuron0x15b8d20()*-0.00935983);
}

double NNfunction_sb_sRcR::synapse0x15b55e0() {
   return (neuron0x15b96f0()*0.00548241);
}

double NNfunction_sb_sRcR::synapse0x15c7ac0() {
   return (neuron0x15ba0c0()*0.0579332);
}

double NNfunction_sb_sRcR::synapse0x15c7b00() {
   return (neuron0x15baa90()*1.05396);
}

double NNfunction_sb_sRcR::synapse0x15c8490() {
   return (neuron0x15b0b20()*0.00769569);
}

double NNfunction_sb_sRcR::synapse0x15c84d0() {
   return (neuron0x15bd670()*0.00125098);
}

double NNfunction_sb_sRcR::synapse0x15c8e60() {
   return (neuron0x15be040()*-0.00562068);
}

double NNfunction_sb_sRcR::synapse0x15c8ea0() {
   return (neuron0x15bea10()*-0.00153754);
}

double NNfunction_sb_sRcR::synapse0x15c9830() {
   return (neuron0x15bf3e0()*-1.79078);
}

double NNfunction_sb_sRcR::synapse0x15c9870() {
   return (neuron0x15bfdb0()*0.00222024);
}

double NNfunction_sb_sRcR::synapse0x15a5720() {
   return (neuron0x15c0780()*-0.000650219);
}

double NNfunction_sb_sRcR::synapse0x15a5760() {
   return (neuron0x15c1150()*-0.00185479);
}

double NNfunction_sb_sRcR::synapse0x15b8fd0() {
   return (neuron0x15c1b20()*0.0157242);
}

double NNfunction_sb_sRcR::synapse0x15b9010() {
   return (neuron0x15c2700()*-2.34254);
}

double NNfunction_sb_sRcR::synapse0x15c9f50() {
   return (neuron0x15c30d0()*-2.30882);
}

double NNfunction_sb_sRcR::synapse0x15c9f90() {
   return (neuron0x15b3f50()*0.012041);
}

double NNfunction_sb_sRcR::synapse0x15c9fd0() {
   return (neuron0x15b4920()*2.39313);
}

double NNfunction_sb_sRcR::synapse0x15ca010() {
   return (neuron0x15b52f0()*0.00384887);
}

double NNfunction_sb_sRcR::synapse0x15d0ec0() {
   return (neuron0x15c7930()*-1.47325e-05);
}

double NNfunction_sb_sRcR::synapse0x15d0f00() {
   return (neuron0x15c81e0()*0.00636771);
}

double NNfunction_sb_sRcR::synapse0x15d0f40() {
   return (neuron0x15c8bb0()*1.58692);
}

double NNfunction_sb_sRcR::synapse0x15d0f80() {
   return (neuron0x15c9580()*-0.0078151);
}

double NNfunction_sb_sRcR::synapse0x15d1300() {
   return (neuron0x15a5500()*-0.981793);
}

double NNfunction_sb_sRcR::synapse0x15d1340() {
   return (neuron0x15a5e10()*-4.40986);
}

double NNfunction_sb_sRcR::synapse0x15d1380() {
   return (neuron0x15a68f0()*0.830518);
}

double NNfunction_sb_sRcR::synapse0x15d13c0() {
   return (neuron0x1360180()*1.02274);
}

double NNfunction_sb_sRcR::synapse0x15d1400() {
   return (neuron0x15a7710()*2.51312);
}

double NNfunction_sb_sRcR::synapse0x15d1440() {
   return (neuron0x15a80e0()*0.532056);
}

double NNfunction_sb_sRcR::synapse0x15d1480() {
   return (neuron0x15a8eb0()*0.25896);
}

double NNfunction_sb_sRcR::synapse0x15d14c0() {
   return (neuron0x15a9880()*2.17002);
}

double NNfunction_sb_sRcR::synapse0x15d1500() {
   return (neuron0x15aa250()*1.50176);
}

double NNfunction_sb_sRcR::synapse0x15d1540() {
   return (neuron0x15aad30()*-2.42743);
}

double NNfunction_sb_sRcR::synapse0x15d1580() {
   return (neuron0x15ab700()*-0.23025);
}

double NNfunction_sb_sRcR::synapse0x15d15c0() {
   return (neuron0x15a87e0()*0.331241);
}

double NNfunction_sb_sRcR::synapse0x15d1600() {
   return (neuron0x15ad2b0()*1.44299);
}

double NNfunction_sb_sRcR::synapse0x15d1640() {
   return (neuron0x15adc80()*0.276744);
}

double NNfunction_sb_sRcR::synapse0x15d1680() {
   return (neuron0x15ae650()*-2.60866);
}

double NNfunction_sb_sRcR::synapse0x15d16c0() {
   return (neuron0x15af020()*-0.670483);
}

double NNfunction_sb_sRcR::synapse0x15d1150() {
   return (neuron0x15b0e30()*1.61469);
}

double NNfunction_sb_sRcR::synapse0x15d1190() {
   return (neuron0x15b1110()*2.00698);
}

double NNfunction_sb_sRcR::synapse0x15d1810() {
   return (neuron0x15b1ae0()*3.94773);
}

double NNfunction_sb_sRcR::synapse0x15d1850() {
   return (neuron0x15b24b0()*-2.80456);
}

double NNfunction_sb_sRcR::synapse0x15d1890() {
   return (neuron0x15b2e80()*2.8132);
}

double NNfunction_sb_sRcR::synapse0x15d18d0() {
   return (neuron0x15b3850()*-0.040341);
}

double NNfunction_sb_sRcR::synapse0x15d1910() {
   return (neuron0x15ac3a0()*-1.71824);
}

double NNfunction_sb_sRcR::synapse0x15d1950() {
   return (neuron0x15acd70()*-1.39207);
}

double NNfunction_sb_sRcR::synapse0x15d1990() {
   return (neuron0x15b65e0()*-1.14054);
}

double NNfunction_sb_sRcR::synapse0x15d19d0() {
   return (neuron0x15b6fb0()*-2.1375);
}

double NNfunction_sb_sRcR::synapse0x15d1a10() {
   return (neuron0x15b7980()*-2.66436);
}

double NNfunction_sb_sRcR::synapse0x15d1a50() {
   return (neuron0x15b8350()*4.10304);
}

double NNfunction_sb_sRcR::synapse0x15d1a90() {
   return (neuron0x15b8d20()*0.84236);
}

double NNfunction_sb_sRcR::synapse0x15d1ad0() {
   return (neuron0x15b96f0()*2.41277);
}

double NNfunction_sb_sRcR::synapse0x15d1b10() {
   return (neuron0x15ba0c0()*0.155977);
}

double NNfunction_sb_sRcR::synapse0x15d1b50() {
   return (neuron0x15baa90()*0.742561);
}

double NNfunction_sb_sRcR::synapse0x15d1700() {
   return (neuron0x15b0b20()*-2.27695);
}

double NNfunction_sb_sRcR::synapse0x15d1740() {
   return (neuron0x15bd670()*2.46329);
}

double NNfunction_sb_sRcR::synapse0x15d1780() {
   return (neuron0x15be040()*1.04245);
}

double NNfunction_sb_sRcR::synapse0x15d17c0() {
   return (neuron0x15bea10()*1.28851);
}

double NNfunction_sb_sRcR::synapse0x15d1da0() {
   return (neuron0x15bf3e0()*-1.07739);
}

double NNfunction_sb_sRcR::synapse0x15d1de0() {
   return (neuron0x15bfdb0()*-3.04999);
}

double NNfunction_sb_sRcR::synapse0x15d1e20() {
   return (neuron0x15c0780()*-2.32231);
}

double NNfunction_sb_sRcR::synapse0x15d1e60() {
   return (neuron0x15c1150()*1.31597);
}

double NNfunction_sb_sRcR::synapse0x15d1ea0() {
   return (neuron0x15c1b20()*-0.749655);
}

double NNfunction_sb_sRcR::synapse0x15d1ee0() {
   return (neuron0x15c2700()*-0.133982);
}

double NNfunction_sb_sRcR::synapse0x15d1f20() {
   return (neuron0x15c30d0()*-1.1129);
}

double NNfunction_sb_sRcR::synapse0x15d1f60() {
   return (neuron0x15b3f50()*2.66449);
}

double NNfunction_sb_sRcR::synapse0x15d1fa0() {
   return (neuron0x15b4920()*1.35817);
}

double NNfunction_sb_sRcR::synapse0x15d1fe0() {
   return (neuron0x15b52f0()*2.67105);
}

double NNfunction_sb_sRcR::synapse0x15d2020() {
   return (neuron0x15c7930()*2.71761);
}

double NNfunction_sb_sRcR::synapse0x15d2060() {
   return (neuron0x15c81e0()*-0.277339);
}

double NNfunction_sb_sRcR::synapse0x15d20a0() {
   return (neuron0x15c8bb0()*-0.910955);
}

double NNfunction_sb_sRcR::synapse0x15d20e0() {
   return (neuron0x15c9580()*-0.778179);
}

double NNfunction_sb_sRcR::synapse0x15d2460() {
   return (neuron0x15a5500()*-0.00215494);
}

double NNfunction_sb_sRcR::synapse0x15d24a0() {
   return (neuron0x15a5e10()*0.0787471);
}

double NNfunction_sb_sRcR::synapse0x15d24e0() {
   return (neuron0x15a68f0()*0.450457);
}

double NNfunction_sb_sRcR::synapse0x15d2520() {
   return (neuron0x1360180()*0.804549);
}

double NNfunction_sb_sRcR::synapse0x15d2560() {
   return (neuron0x15a7710()*-0.208952);
}

double NNfunction_sb_sRcR::synapse0x15d25a0() {
   return (neuron0x15a80e0()*0.306069);
}

double NNfunction_sb_sRcR::synapse0x15d25e0() {
   return (neuron0x15a8eb0()*-0.041303);
}

double NNfunction_sb_sRcR::synapse0x15d2620() {
   return (neuron0x15a9880()*0.831953);
}

double NNfunction_sb_sRcR::synapse0x15d2660() {
   return (neuron0x15aa250()*0.121934);
}

double NNfunction_sb_sRcR::synapse0x15d26a0() {
   return (neuron0x15aad30()*0.523715);
}

double NNfunction_sb_sRcR::synapse0x15d26e0() {
   return (neuron0x15ab700()*0.114109);
}

double NNfunction_sb_sRcR::synapse0x15d2720() {
   return (neuron0x15a87e0()*0.0400714);
}

double NNfunction_sb_sRcR::synapse0x15d2760() {
   return (neuron0x15ad2b0()*0.386357);
}

double NNfunction_sb_sRcR::synapse0x15d27a0() {
   return (neuron0x15adc80()*0.650846);
}

double NNfunction_sb_sRcR::synapse0x15d27e0() {
   return (neuron0x15ae650()*0.625488);
}

double NNfunction_sb_sRcR::synapse0x15d2820() {
   return (neuron0x15af020()*0.46724);
}

double NNfunction_sb_sRcR::synapse0x15d22b0() {
   return (neuron0x15b0e30()*0.235034);
}

double NNfunction_sb_sRcR::synapse0x15d22f0() {
   return (neuron0x15b1110()*0.398812);
}

double NNfunction_sb_sRcR::synapse0x15d2970() {
   return (neuron0x15b1ae0()*-0.274271);
}

double NNfunction_sb_sRcR::synapse0x15d29b0() {
   return (neuron0x15b24b0()*0.650372);
}

double NNfunction_sb_sRcR::synapse0x15d29f0() {
   return (neuron0x15b2e80()*0.293187);
}

double NNfunction_sb_sRcR::synapse0x15d2a30() {
   return (neuron0x15b3850()*0.760202);
}

double NNfunction_sb_sRcR::synapse0x15d2a70() {
   return (neuron0x15ac3a0()*0.64307);
}

double NNfunction_sb_sRcR::synapse0x15d2ab0() {
   return (neuron0x15acd70()*0.0662871);
}

double NNfunction_sb_sRcR::synapse0x15d2af0() {
   return (neuron0x15b65e0()*-0.130679);
}

double NNfunction_sb_sRcR::synapse0x15d2b30() {
   return (neuron0x15b6fb0()*-0.144005);
}

double NNfunction_sb_sRcR::synapse0x15d2b70() {
   return (neuron0x15b7980()*0.246493);
}

double NNfunction_sb_sRcR::synapse0x15d2bb0() {
   return (neuron0x15b8350()*0.136972);
}

double NNfunction_sb_sRcR::synapse0x15d2bf0() {
   return (neuron0x15b8d20()*-0.0301015);
}

double NNfunction_sb_sRcR::synapse0x15d2c30() {
   return (neuron0x15b96f0()*0.136237);
}

double NNfunction_sb_sRcR::synapse0x15d2c70() {
   return (neuron0x15ba0c0()*0.318549);
}

double NNfunction_sb_sRcR::synapse0x15d2cb0() {
   return (neuron0x15baa90()*-0.0293277);
}

double NNfunction_sb_sRcR::synapse0x15d2860() {
   return (neuron0x15b0b20()*0.144921);
}

double NNfunction_sb_sRcR::synapse0x15d28a0() {
   return (neuron0x15bd670()*0.168097);
}

double NNfunction_sb_sRcR::synapse0x15d28e0() {
   return (neuron0x15be040()*0.254728);
}

double NNfunction_sb_sRcR::synapse0x15d2920() {
   return (neuron0x15bea10()*0.748908);
}

double NNfunction_sb_sRcR::synapse0x15d2f00() {
   return (neuron0x15bf3e0()*-0.306218);
}

double NNfunction_sb_sRcR::synapse0x15d2f40() {
   return (neuron0x15bfdb0()*0.535856);
}

double NNfunction_sb_sRcR::synapse0x15d2f80() {
   return (neuron0x15c0780()*0.37619);
}

double NNfunction_sb_sRcR::synapse0x15d2fc0() {
   return (neuron0x15c1150()*0.329728);
}

double NNfunction_sb_sRcR::synapse0x15d3000() {
   return (neuron0x15c1b20()*0.211924);
}

double NNfunction_sb_sRcR::synapse0x15d3040() {
   return (neuron0x15c2700()*-0.0297354);
}

double NNfunction_sb_sRcR::synapse0x15d3080() {
   return (neuron0x15c30d0()*0.0435873);
}

double NNfunction_sb_sRcR::synapse0x15d30c0() {
   return (neuron0x15b3f50()*0.0431257);
}

double NNfunction_sb_sRcR::synapse0x15d3100() {
   return (neuron0x15b4920()*0.0317094);
}

double NNfunction_sb_sRcR::synapse0x15d3140() {
   return (neuron0x15b52f0()*0.0243373);
}

double NNfunction_sb_sRcR::synapse0x15d3180() {
   return (neuron0x15c7930()*-0.254293);
}

double NNfunction_sb_sRcR::synapse0x15d31c0() {
   return (neuron0x15c81e0()*0.285542);
}

double NNfunction_sb_sRcR::synapse0x15d3200() {
   return (neuron0x15c8bb0()*0.461288);
}

double NNfunction_sb_sRcR::synapse0x15d3240() {
   return (neuron0x15c9580()*0.255628);
}

double NNfunction_sb_sRcR::synapse0x15d35c0() {
   return (neuron0x15a5500()*-7.16591);
}

double NNfunction_sb_sRcR::synapse0x15d3600() {
   return (neuron0x15a5e10()*1.09068);
}

double NNfunction_sb_sRcR::synapse0x15d3640() {
   return (neuron0x15a68f0()*1.47903);
}

double NNfunction_sb_sRcR::synapse0x15d3680() {
   return (neuron0x1360180()*1.76698);
}

double NNfunction_sb_sRcR::synapse0x15d36c0() {
   return (neuron0x15a7710()*0.673665);
}

double NNfunction_sb_sRcR::synapse0x15d3700() {
   return (neuron0x15a80e0()*1.08239);
}

double NNfunction_sb_sRcR::synapse0x15d3740() {
   return (neuron0x15a8eb0()*-0.397038);
}

double NNfunction_sb_sRcR::synapse0x15d3780() {
   return (neuron0x15a9880()*0.609395);
}

double NNfunction_sb_sRcR::synapse0x15d37c0() {
   return (neuron0x15aa250()*0.785235);
}

double NNfunction_sb_sRcR::synapse0x15d3800() {
   return (neuron0x15aad30()*-1.03565);
}

double NNfunction_sb_sRcR::synapse0x15d3840() {
   return (neuron0x15ab700()*1.91868);
}

double NNfunction_sb_sRcR::synapse0x15d3880() {
   return (neuron0x15a87e0()*1.41275);
}

double NNfunction_sb_sRcR::synapse0x15d38c0() {
   return (neuron0x15ad2b0()*1.33543);
}

double NNfunction_sb_sRcR::synapse0x15d3900() {
   return (neuron0x15adc80()*5.1196);
}

double NNfunction_sb_sRcR::synapse0x15d3940() {
   return (neuron0x15ae650()*-0.854774);
}

double NNfunction_sb_sRcR::synapse0x15d3980() {
   return (neuron0x15af020()*-3.00649);
}

double NNfunction_sb_sRcR::synapse0x15d3410() {
   return (neuron0x15b0e30()*-0.388929);
}

double NNfunction_sb_sRcR::synapse0x15d3450() {
   return (neuron0x15b1110()*1.62501);
}

double NNfunction_sb_sRcR::synapse0x15d3ad0() {
   return (neuron0x15b1ae0()*5.37222);
}

double NNfunction_sb_sRcR::synapse0x15d3b10() {
   return (neuron0x15b24b0()*-0.0513725);
}

double NNfunction_sb_sRcR::synapse0x15d3b50() {
   return (neuron0x15b2e80()*-1.2008);
}

double NNfunction_sb_sRcR::synapse0x15d3b90() {
   return (neuron0x15b3850()*0.930474);
}

double NNfunction_sb_sRcR::synapse0x15d3bd0() {
   return (neuron0x15ac3a0()*1.19538);
}

double NNfunction_sb_sRcR::synapse0x15d3c10() {
   return (neuron0x15acd70()*-2.93147);
}

double NNfunction_sb_sRcR::synapse0x15d3c50() {
   return (neuron0x15b65e0()*1.983);
}

double NNfunction_sb_sRcR::synapse0x15d3c90() {
   return (neuron0x15b6fb0()*-1.28443);
}

double NNfunction_sb_sRcR::synapse0x15d3cd0() {
   return (neuron0x15b7980()*-0.747572);
}

double NNfunction_sb_sRcR::synapse0x15d3d10() {
   return (neuron0x15b8350()*-0.959976);
}

double NNfunction_sb_sRcR::synapse0x15d3d50() {
   return (neuron0x15b8d20()*1.24936);
}

double NNfunction_sb_sRcR::synapse0x15d3d90() {
   return (neuron0x15b96f0()*-0.934077);
}

double NNfunction_sb_sRcR::synapse0x15d3dd0() {
   return (neuron0x15ba0c0()*2.41081);
}

double NNfunction_sb_sRcR::synapse0x15d3e10() {
   return (neuron0x15baa90()*0.57211);
}

double NNfunction_sb_sRcR::synapse0x15d39c0() {
   return (neuron0x15b0b20()*-0.634166);
}

double NNfunction_sb_sRcR::synapse0x15d3a00() {
   return (neuron0x15bd670()*0.716142);
}

double NNfunction_sb_sRcR::synapse0x15d3a40() {
   return (neuron0x15be040()*0.961735);
}

double NNfunction_sb_sRcR::synapse0x15d3a80() {
   return (neuron0x15bea10()*1.5724);
}

double NNfunction_sb_sRcR::synapse0x15d4060() {
   return (neuron0x15bf3e0()*-1.40503);
}

double NNfunction_sb_sRcR::synapse0x15d40a0() {
   return (neuron0x15bfdb0()*-0.413551);
}

double NNfunction_sb_sRcR::synapse0x15d40e0() {
   return (neuron0x15c0780()*0.831228);
}

double NNfunction_sb_sRcR::synapse0x15d4120() {
   return (neuron0x15c1150()*0.909991);
}

double NNfunction_sb_sRcR::synapse0x15d4160() {
   return (neuron0x15c1b20()*-1.50935);
}

double NNfunction_sb_sRcR::synapse0x15d41a0() {
   return (neuron0x15c2700()*-3.92753);
}

double NNfunction_sb_sRcR::synapse0x15d41e0() {
   return (neuron0x15c30d0()*-0.645314);
}

double NNfunction_sb_sRcR::synapse0x15d4220() {
   return (neuron0x15b3f50()*0.78965);
}

double NNfunction_sb_sRcR::synapse0x15d4260() {
   return (neuron0x15b4920()*1.91519);
}

double NNfunction_sb_sRcR::synapse0x15d42a0() {
   return (neuron0x15b52f0()*-0.532335);
}

double NNfunction_sb_sRcR::synapse0x15d42e0() {
   return (neuron0x15c7930()*0.0611217);
}

double NNfunction_sb_sRcR::synapse0x15d4320() {
   return (neuron0x15c81e0()*1.91644);
}

double NNfunction_sb_sRcR::synapse0x15d4360() {
   return (neuron0x15c8bb0()*1.65186);
}

double NNfunction_sb_sRcR::synapse0x15d43a0() {
   return (neuron0x15c9580()*1.78123);
}

double NNfunction_sb_sRcR::synapse0x15a54c0() {
   return (neuron0x15d0780()*7.4167);
}

double NNfunction_sb_sRcR::synapse0x15d4600() {
   return (neuron0x15d0b20()*-9.59061);
}

double NNfunction_sb_sRcR::synapse0x15d4640() {
   return (neuron0x15d0fc0()*-5.43878);
}

double NNfunction_sb_sRcR::synapse0x15d4680() {
   return (neuron0x15d2120()*4.71439);
}

double NNfunction_sb_sRcR::synapse0x15d46c0() {
   return (neuron0x15d3280()*-7.36976);
}

