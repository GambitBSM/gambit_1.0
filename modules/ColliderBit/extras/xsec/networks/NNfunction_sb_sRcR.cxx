#include "NNfunction_sb_sRcR.h"
#include <cmath>

double NNfunction_sb_sRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7648)/14.9988;
   input1 = (in1 - 31.9201)/848.961;
   input2 = (in2 - 406.904)/528.379;
   input3 = (in3 - 135.201)/601.002;
   input4 = (in4 - 720.219)/786.484;
   input5 = (in5 - 613.935)/748.577;
   input6 = (in6 - 628.463)/766.382;
   input7 = (in7 - 626.985)/756.296;
   input8 = (in8 - 612.714)/764.302;
   input9 = (in9 - 604.568)/751.575;
   input10 = (in10 - 643.505)/782.362;
   input11 = (in11 - 576.779)/631.911;
   input12 = (in12 - 572.902)/628.055;
   input13 = (in13 - 437.796)/377.133;
   input14 = (in14 - 584.999)/618.281;
   input15 = (in15 - 339.312)/203.893;
   input16 = (in16 - 424.192)/429.659;
   input17 = (in17 - 594.94)/656.678;
   input18 = (in18 - 328.681)/200.681;
   input19 = (in19 - 611.775)/662.663;
   input20 = (in20 - -120.09)/390.471;
   input21 = (in21 - -140.583)/895.026;
   input22 = (in22 - 8.02116)/919.51;
   input23 = (in23 - -69.4044)/493.592;
   switch(index) {
     case 0:
         return neuron0x1a33aa0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sRcR::Value(int index, double* input) {
   input0 = (input[0] - 22.7648)/14.9988;
   input1 = (input[1] - 31.9201)/848.961;
   input2 = (input[2] - 406.904)/528.379;
   input3 = (input[3] - 135.201)/601.002;
   input4 = (input[4] - 720.219)/786.484;
   input5 = (input[5] - 613.935)/748.577;
   input6 = (input[6] - 628.463)/766.382;
   input7 = (input[7] - 626.985)/756.296;
   input8 = (input[8] - 612.714)/764.302;
   input9 = (input[9] - 604.568)/751.575;
   input10 = (input[10] - 643.505)/782.362;
   input11 = (input[11] - 576.779)/631.911;
   input12 = (input[12] - 572.902)/628.055;
   input13 = (input[13] - 437.796)/377.133;
   input14 = (input[14] - 584.999)/618.281;
   input15 = (input[15] - 339.312)/203.893;
   input16 = (input[16] - 424.192)/429.659;
   input17 = (input[17] - 594.94)/656.678;
   input18 = (input[18] - 328.681)/200.681;
   input19 = (input[19] - 611.775)/662.663;
   input20 = (input[20] - -120.09)/390.471;
   input21 = (input[21] - -140.583)/895.026;
   input22 = (input[22] - 8.02116)/919.51;
   input23 = (input[23] - -69.4044)/493.592;
   switch(index) {
     case 0:
         return neuron0x1a33aa0();
     default:
         return 0.;
   }
}

double NNfunction_sb_sRcR::neuron0x19ffb90() {
   return input0;
}

double NNfunction_sb_sRcR::neuron0x19ffed0() {
   return input1;
}

double NNfunction_sb_sRcR::neuron0x1a00210() {
   return input2;
}

double NNfunction_sb_sRcR::neuron0x1a00550() {
   return input3;
}

double NNfunction_sb_sRcR::neuron0x1a00890() {
   return input4;
}

double NNfunction_sb_sRcR::neuron0x1a00bd0() {
   return input5;
}

double NNfunction_sb_sRcR::neuron0x1a00f10() {
   return input6;
}

double NNfunction_sb_sRcR::neuron0x1a01250() {
   return input7;
}

double NNfunction_sb_sRcR::neuron0x1a01590() {
   return input8;
}

double NNfunction_sb_sRcR::neuron0x1a018d0() {
   return input9;
}

double NNfunction_sb_sRcR::neuron0x1a01c10() {
   return input10;
}

double NNfunction_sb_sRcR::neuron0x1a01f50() {
   return input11;
}

double NNfunction_sb_sRcR::neuron0x1a02290() {
   return input12;
}

double NNfunction_sb_sRcR::neuron0x1a025d0() {
   return input13;
}

double NNfunction_sb_sRcR::neuron0x1a02910() {
   return input14;
}

double NNfunction_sb_sRcR::neuron0x1a02c50() {
   return input15;
}

double NNfunction_sb_sRcR::neuron0x1a02f90() {
   return input16;
}

double NNfunction_sb_sRcR::neuron0x1a034f0() {
   return input17;
}

double NNfunction_sb_sRcR::neuron0x1a03710() {
   return input18;
}

double NNfunction_sb_sRcR::neuron0x1a03a50() {
   return input19;
}

double NNfunction_sb_sRcR::neuron0x1a03d90() {
   return input20;
}

double NNfunction_sb_sRcR::neuron0x1a040d0() {
   return input21;
}

double NNfunction_sb_sRcR::neuron0x1a04410() {
   return input22;
}

double NNfunction_sb_sRcR::neuron0x1a04750() {
   return input23;
}

double NNfunction_sb_sRcR::input0x1a04bc0() {
   double input = -1.46508;
   input += synapse0x19ffa50();
   input += synapse0x19ffa90();
   input += synapse0x1a04e70();
   input += synapse0x1a04eb0();
   input += synapse0x1a04ef0();
   input += synapse0x1a04f30();
   input += synapse0x1a04f70();
   input += synapse0x1a04fb0();
   input += synapse0x1a04ff0();
   input += synapse0x1a05030();
   input += synapse0x1a05070();
   input += synapse0x1a050b0();
   input += synapse0x1a050f0();
   input += synapse0x1a05130();
   input += synapse0x1a05170();
   input += synapse0x1a051b0();
   input += synapse0x19ff9c0();
   input += synapse0x19ffa00();
   input += synapse0x17bad80();
   input += synapse0x17badc0();
   input += synapse0x1a05410();
   input += synapse0x1a05450();
   input += synapse0x1a05490();
   input += synapse0x1a054d0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a04bc0() {
   double input = input0x1a04bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a05510() {
   double input = -1.56853;
   input += synapse0x1a05850();
   input += synapse0x1a05890();
   input += synapse0x1a058d0();
   input += synapse0x1a05910();
   input += synapse0x1a05950();
   input += synapse0x1a05990();
   input += synapse0x1a059d0();
   input += synapse0x1a05a10();
   input += synapse0x1a05a50();
   input += synapse0x1a05300();
   input += synapse0x1a05340();
   input += synapse0x1a05380();
   input += synapse0x1a053c0();
   input += synapse0x1a05ca0();
   input += synapse0x1a05ce0();
   input += synapse0x1a05d20();
   input += synapse0x1a056a0();
   input += synapse0x1a056e0();
   input += synapse0x1a05e70();
   input += synapse0x1a05eb0();
   input += synapse0x1a05ef0();
   input += synapse0x1a05f30();
   input += synapse0x1a05f70();
   input += synapse0x1a05fb0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a05510() {
   double input = input0x1a05510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a05ff0() {
   double input = -3.00992;
   input += synapse0x1a06330();
   input += synapse0x1a06370();
   input += synapse0x1a063b0();
   input += synapse0x1a063f0();
   input += synapse0x1a06430();
   input += synapse0x1a06470();
   input += synapse0x1a064b0();
   input += synapse0x1a064f0();
   input += synapse0x1a06530();
   input += synapse0x1a06570();
   input += synapse0x1a065b0();
   input += synapse0x1a065f0();
   input += synapse0x1a06630();
   input += synapse0x1a06670();
   input += synapse0x1a066b0();
   input += synapse0x1a066f0();
   input += synapse0x1a06180();
   input += synapse0x1a061c0();
   input += synapse0x17bb400();
   input += synapse0x17c8cd0();
   input += synapse0x17c8d10();
   input += synapse0x19eebf0();
   input += synapse0x19eec30();
   input += synapse0x19eec70();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a05ff0() {
   double input = input0x1a05ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a05a90() {
   double input = 0.0491876;
   input += synapse0x1a05c20();
   input += synapse0x1a05c60();
   input += synapse0x1a06840();
   input += synapse0x1a06880();
   input += synapse0x1a068c0();
   input += synapse0x1a06900();
   input += synapse0x1a06940();
   input += synapse0x1a06980();
   input += synapse0x1a069c0();
   input += synapse0x1a06a00();
   input += synapse0x1a06a40();
   input += synapse0x1a06a80();
   input += synapse0x1a06ac0();
   input += synapse0x1a06b00();
   input += synapse0x1a06b40();
   input += synapse0x1a06b80();
   input += synapse0x19ffad0();
   input += synapse0x19ffb10();
   input += synapse0x19ffb50();
   input += synapse0x1a06cd0();
   input += synapse0x1a06d10();
   input += synapse0x1a06d50();
   input += synapse0x1a06d90();
   input += synapse0x1a06dd0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a05a90() {
   double input = input0x1a05a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a06e10() {
   double input = -2.19261;
   input += synapse0x1a07150();
   input += synapse0x1a07190();
   input += synapse0x1a071d0();
   input += synapse0x1a07210();
   input += synapse0x1a07250();
   input += synapse0x1a07290();
   input += synapse0x1a072d0();
   input += synapse0x1a07310();
   input += synapse0x1a07350();
   input += synapse0x1a07390();
   input += synapse0x1a073d0();
   input += synapse0x1a07410();
   input += synapse0x1a07450();
   input += synapse0x1a07490();
   input += synapse0x1a074d0();
   input += synapse0x1a07510();
   input += synapse0x1a06fa0();
   input += synapse0x1a06fe0();
   input += synapse0x1a07660();
   input += synapse0x1a076a0();
   input += synapse0x1a076e0();
   input += synapse0x1a07720();
   input += synapse0x1a07760();
   input += synapse0x1a077a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a06e10() {
   double input = input0x1a06e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a077e0() {
   double input = -0.173375;
   input += synapse0x1a07b20();
   input += synapse0x1a07b60();
   input += synapse0x1a07ba0();
   input += synapse0x1a07be0();
   input += synapse0x1a07c20();
   input += synapse0x1a07c60();
   input += synapse0x1a07ca0();
   input += synapse0x1a07ce0();
   input += synapse0x1a07d20();
   input += synapse0x17c8fe0();
   input += synapse0x17c9020();
   input += synapse0x17c9060();
   input += synapse0x17c90a0();
   input += synapse0x17c90e0();
   input += synapse0x17c9120();
   input += synapse0x17c9160();
   input += synapse0x1a07970();
   input += synapse0x1a079b0();
   input += synapse0x17c92b0();
   input += synapse0x17c92f0();
   input += synapse0x17c9330();
   input += synapse0x17c9370();
   input += synapse0x17c93b0();
   input += synapse0x1a08570();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a077e0() {
   double input = input0x1a077e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a085b0() {
   double input = -0.357613;
   input += synapse0x1a088f0();
   input += synapse0x1a08930();
   input += synapse0x1a08970();
   input += synapse0x1a089b0();
   input += synapse0x1a089f0();
   input += synapse0x1a08a30();
   input += synapse0x1a08a70();
   input += synapse0x1a08ab0();
   input += synapse0x1a08af0();
   input += synapse0x1a08b30();
   input += synapse0x1a08b70();
   input += synapse0x1a08bb0();
   input += synapse0x1a08bf0();
   input += synapse0x1a08c30();
   input += synapse0x1a08c70();
   input += synapse0x1a08cb0();
   input += synapse0x1a08740();
   input += synapse0x1a08780();
   input += synapse0x1a08e00();
   input += synapse0x1a08e40();
   input += synapse0x1a08e80();
   input += synapse0x1a08ec0();
   input += synapse0x1a08f00();
   input += synapse0x1a08f40();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a085b0() {
   double input = input0x1a085b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a08f80() {
   double input = 0.863399;
   input += synapse0x1a092c0();
   input += synapse0x1a09300();
   input += synapse0x1a09340();
   input += synapse0x1a09380();
   input += synapse0x1a093c0();
   input += synapse0x1a09400();
   input += synapse0x1a09440();
   input += synapse0x1a09480();
   input += synapse0x1a094c0();
   input += synapse0x1a09500();
   input += synapse0x1a09540();
   input += synapse0x1a09580();
   input += synapse0x1a095c0();
   input += synapse0x1a09600();
   input += synapse0x1a09640();
   input += synapse0x1a09680();
   input += synapse0x1a09110();
   input += synapse0x1a09150();
   input += synapse0x1a097d0();
   input += synapse0x1a09810();
   input += synapse0x1a09850();
   input += synapse0x1a09890();
   input += synapse0x1a098d0();
   input += synapse0x1a09910();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a08f80() {
   double input = input0x1a08f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a09950() {
   double input = -0.39406;
   input += synapse0x1a033e0();
   input += synapse0x1a03420();
   input += synapse0x1a03460();
   input += synapse0x1a034a0();
   input += synapse0x1a09ea0();
   input += synapse0x1a09ee0();
   input += synapse0x1a09f20();
   input += synapse0x1a09f60();
   input += synapse0x1a09fa0();
   input += synapse0x1a09fe0();
   input += synapse0x1a0a020();
   input += synapse0x1a0a060();
   input += synapse0x1a0a0a0();
   input += synapse0x1a0a0e0();
   input += synapse0x1a0a120();
   input += synapse0x1a0a160();
   input += synapse0x1a09ae0();
   input += synapse0x1a09b20();
   input += synapse0x1a0a2b0();
   input += synapse0x1a0a2f0();
   input += synapse0x1a0a330();
   input += synapse0x1a0a370();
   input += synapse0x1a0a3b0();
   input += synapse0x1a0a3f0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a09950() {
   double input = input0x1a09950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a0a430() {
   double input = 2.03656;
   input += synapse0x1a0a770();
   input += synapse0x1a0a7b0();
   input += synapse0x1a0a7f0();
   input += synapse0x1a0a830();
   input += synapse0x1a0a870();
   input += synapse0x1a0a8b0();
   input += synapse0x1a0a8f0();
   input += synapse0x1a0a930();
   input += synapse0x1a0a970();
   input += synapse0x1a0a9b0();
   input += synapse0x1a0a9f0();
   input += synapse0x1a0aa30();
   input += synapse0x1a0aa70();
   input += synapse0x1a0aab0();
   input += synapse0x1a0aaf0();
   input += synapse0x1a0ab30();
   input += synapse0x1a0a5c0();
   input += synapse0x1a0a600();
   input += synapse0x1a0ac80();
   input += synapse0x1a0acc0();
   input += synapse0x1a0ad00();
   input += synapse0x1a0ad40();
   input += synapse0x1a0ad80();
   input += synapse0x1a0adc0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a0a430() {
   double input = input0x1a0a430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a0ae00() {
   double input = 1.22588;
   input += synapse0x1a0b140();
   input += synapse0x1a0b180();
   input += synapse0x1a0b1c0();
   input += synapse0x1a0b200();
   input += synapse0x1a0b240();
   input += synapse0x1a0b280();
   input += synapse0x1a0b2c0();
   input += synapse0x1a0b300();
   input += synapse0x1a0b340();
   input += synapse0x1a0b380();
   input += synapse0x1a0b3c0();
   input += synapse0x1a0b400();
   input += synapse0x1a0b440();
   input += synapse0x1a0b480();
   input += synapse0x1a0b4c0();
   input += synapse0x1a0b500();
   input += synapse0x1a0af90();
   input += synapse0x1a0afd0();
   input += synapse0x1a07d60();
   input += synapse0x1a07da0();
   input += synapse0x1a07de0();
   input += synapse0x1a07e20();
   input += synapse0x1a07e60();
   input += synapse0x1a07ea0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a0ae00() {
   double input = input0x1a0ae00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a07ee0() {
   double input = 4.42677;
   input += synapse0x1a08220();
   input += synapse0x1a08260();
   input += synapse0x1a082a0();
   input += synapse0x1a082e0();
   input += synapse0x1a08320();
   input += synapse0x1a08360();
   input += synapse0x1a083a0();
   input += synapse0x1a083e0();
   input += synapse0x1a08420();
   input += synapse0x1a08460();
   input += synapse0x1a084a0();
   input += synapse0x1a084e0();
   input += synapse0x1a08520();
   input += synapse0x1a0c660();
   input += synapse0x1a0c6a0();
   input += synapse0x1a0c6e0();
   input += synapse0x1a08070();
   input += synapse0x1a080b0();
   input += synapse0x1a0c830();
   input += synapse0x1a0c870();
   input += synapse0x1a0c8b0();
   input += synapse0x1a0c8f0();
   input += synapse0x1a0c930();
   input += synapse0x1a0c970();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a07ee0() {
   double input = input0x1a07ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a0c9b0() {
   double input = 0.0272383;
   input += synapse0x1a0ccf0();
   input += synapse0x1a0cd30();
   input += synapse0x1a0cd70();
   input += synapse0x1a0cdb0();
   input += synapse0x1a0cdf0();
   input += synapse0x1a0ce30();
   input += synapse0x1a0ce70();
   input += synapse0x1a0ceb0();
   input += synapse0x1a0cef0();
   input += synapse0x1a0cf30();
   input += synapse0x1a0cf70();
   input += synapse0x1a0cfb0();
   input += synapse0x1a0cff0();
   input += synapse0x1a0d030();
   input += synapse0x1a0d070();
   input += synapse0x1a0d0b0();
   input += synapse0x1a0cb40();
   input += synapse0x1a0cb80();
   input += synapse0x1a0d200();
   input += synapse0x1a0d240();
   input += synapse0x1a0d280();
   input += synapse0x1a0d2c0();
   input += synapse0x1a0d300();
   input += synapse0x1a0d340();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a0c9b0() {
   double input = input0x1a0c9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a0d380() {
   double input = 0.438457;
   input += synapse0x1a0d6c0();
   input += synapse0x1a0d700();
   input += synapse0x1a0d740();
   input += synapse0x1a0d780();
   input += synapse0x1a0d7c0();
   input += synapse0x1a0d800();
   input += synapse0x1a0d840();
   input += synapse0x1a0d880();
   input += synapse0x1a0d8c0();
   input += synapse0x1a0d900();
   input += synapse0x1a0d940();
   input += synapse0x1a0d980();
   input += synapse0x1a0d9c0();
   input += synapse0x1a0da00();
   input += synapse0x1a0da40();
   input += synapse0x1a0da80();
   input += synapse0x1a0d510();
   input += synapse0x1a0d550();
   input += synapse0x1a0dbd0();
   input += synapse0x1a0dc10();
   input += synapse0x1a0dc50();
   input += synapse0x1a0dc90();
   input += synapse0x1a0dcd0();
   input += synapse0x1a0dd10();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a0d380() {
   double input = input0x1a0d380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a0dd50() {
   double input = -0.352535;
   input += synapse0x1a0e090();
   input += synapse0x1a0e0d0();
   input += synapse0x1a0e110();
   input += synapse0x1a0e150();
   input += synapse0x1a0e190();
   input += synapse0x1a0e1d0();
   input += synapse0x1a0e210();
   input += synapse0x1a0e250();
   input += synapse0x1a0e290();
   input += synapse0x1a0e2d0();
   input += synapse0x1a0e310();
   input += synapse0x1a0e350();
   input += synapse0x1a0e390();
   input += synapse0x1a0e3d0();
   input += synapse0x1a0e410();
   input += synapse0x1a0e450();
   input += synapse0x1a0dee0();
   input += synapse0x1a0df20();
   input += synapse0x1a0e5a0();
   input += synapse0x1a0e5e0();
   input += synapse0x1a0e620();
   input += synapse0x1a0e660();
   input += synapse0x1a0e6a0();
   input += synapse0x1a0e6e0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a0dd50() {
   double input = input0x1a0dd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a0e720() {
   double input = 0.848233;
   input += synapse0x1a0ea60();
   input += synapse0x19ffdb0();
   input += synapse0x19ffdf0();
   input += synapse0x1a000f0();
   input += synapse0x1a00130();
   input += synapse0x1a00430();
   input += synapse0x1a00470();
   input += synapse0x1a00770();
   input += synapse0x1a007b0();
   input += synapse0x1a00ab0();
   input += synapse0x1a00af0();
   input += synapse0x1a00df0();
   input += synapse0x1a00e30();
   input += synapse0x1a01130();
   input += synapse0x1a01170();
   input += synapse0x1a01470();
   input += synapse0x1a014b0();
   input += synapse0x1a017b0();
   input += synapse0x1a017f0();
   input += synapse0x1a01af0();
   input += synapse0x1a01b30();
   input += synapse0x1a01e30();
   input += synapse0x1a01e70();
   input += synapse0x1a02170();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a0e720() {
   double input = input0x1a0e720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a10530() {
   double input = 0.321719;
   input += synapse0x1a021b0();
   input += synapse0x1a02e70();
   input += synapse0x1a02eb0();
   input += synapse0x1a0e8b0();
   input += synapse0x1a0e8f0();
   input += synapse0x1a031b0();
   input += synapse0x1a031f0();
   input += synapse0x17bac60();
   input += synapse0x17baca0();
   input += synapse0x1a03930();
   input += synapse0x1a03970();
   input += synapse0x1a03c70();
   input += synapse0x1a03cb0();
   input += synapse0x1a03fb0();
   input += synapse0x1a03ff0();
   input += synapse0x1a042f0();
   input += synapse0x1a04330();
   input += synapse0x1a04630();
   input += synapse0x1a04670();
   input += synapse0x1a04970();
   input += synapse0x1a049b0();
   input += synapse0x1a024b0();
   input += synapse0x1a024f0();
   input += synapse0x1a107d0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a10530() {
   double input = input0x1a10530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a10810() {
   double input = -1.05118;
   input += synapse0x1a10b50();
   input += synapse0x1a10b90();
   input += synapse0x1a10bd0();
   input += synapse0x1a10c10();
   input += synapse0x1a10c50();
   input += synapse0x1a10c90();
   input += synapse0x1a10cd0();
   input += synapse0x1a10d10();
   input += synapse0x1a10d50();
   input += synapse0x1a10d90();
   input += synapse0x1a10dd0();
   input += synapse0x1a10e10();
   input += synapse0x1a10e50();
   input += synapse0x1a10e90();
   input += synapse0x1a10ed0();
   input += synapse0x1a10f10();
   input += synapse0x1a109a0();
   input += synapse0x1a109e0();
   input += synapse0x1a11060();
   input += synapse0x1a110a0();
   input += synapse0x1a110e0();
   input += synapse0x1a11120();
   input += synapse0x1a11160();
   input += synapse0x1a111a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a10810() {
   double input = input0x1a10810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a111e0() {
   double input = -0.379171;
   input += synapse0x1a11520();
   input += synapse0x1a11560();
   input += synapse0x1a115a0();
   input += synapse0x1a115e0();
   input += synapse0x1a11620();
   input += synapse0x1a11660();
   input += synapse0x1a116a0();
   input += synapse0x1a116e0();
   input += synapse0x1a11720();
   input += synapse0x1a11760();
   input += synapse0x1a117a0();
   input += synapse0x1a117e0();
   input += synapse0x1a11820();
   input += synapse0x1a11860();
   input += synapse0x1a118a0();
   input += synapse0x1a118e0();
   input += synapse0x1a11370();
   input += synapse0x1a113b0();
   input += synapse0x1a11a30();
   input += synapse0x1a11a70();
   input += synapse0x1a11ab0();
   input += synapse0x1a11af0();
   input += synapse0x1a11b30();
   input += synapse0x1a11b70();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a111e0() {
   double input = input0x1a111e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a11bb0() {
   double input = -0.282714;
   input += synapse0x1a11ef0();
   input += synapse0x1a11f30();
   input += synapse0x1a11f70();
   input += synapse0x1a11fb0();
   input += synapse0x1a11ff0();
   input += synapse0x1a12030();
   input += synapse0x1a12070();
   input += synapse0x1a120b0();
   input += synapse0x1a120f0();
   input += synapse0x1a12130();
   input += synapse0x1a12170();
   input += synapse0x1a121b0();
   input += synapse0x1a121f0();
   input += synapse0x1a12230();
   input += synapse0x1a12270();
   input += synapse0x1a122b0();
   input += synapse0x1a11d40();
   input += synapse0x1a11d80();
   input += synapse0x1a12400();
   input += synapse0x1a12440();
   input += synapse0x1a12480();
   input += synapse0x1a124c0();
   input += synapse0x1a12500();
   input += synapse0x1a12540();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a11bb0() {
   double input = input0x1a11bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a12580() {
   double input = -2.61463;
   input += synapse0x1a128c0();
   input += synapse0x1a12900();
   input += synapse0x1a12940();
   input += synapse0x1a12980();
   input += synapse0x1a129c0();
   input += synapse0x1a12a00();
   input += synapse0x1a12a40();
   input += synapse0x1a12a80();
   input += synapse0x1a12ac0();
   input += synapse0x1a12b00();
   input += synapse0x1a12b40();
   input += synapse0x1a12b80();
   input += synapse0x1a12bc0();
   input += synapse0x1a12c00();
   input += synapse0x1a12c40();
   input += synapse0x1a12c80();
   input += synapse0x1a12710();
   input += synapse0x1a12750();
   input += synapse0x1a12dd0();
   input += synapse0x1a12e10();
   input += synapse0x1a12e50();
   input += synapse0x1a12e90();
   input += synapse0x1a12ed0();
   input += synapse0x1a12f10();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a12580() {
   double input = input0x1a12580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a12f50() {
   double input = -0.190795;
   input += synapse0x1a13290();
   input += synapse0x1a132d0();
   input += synapse0x1a13310();
   input += synapse0x1a13350();
   input += synapse0x1a13390();
   input += synapse0x1a133d0();
   input += synapse0x1a13410();
   input += synapse0x1a13450();
   input += synapse0x1a13490();
   input += synapse0x1a0b650();
   input += synapse0x1a0b690();
   input += synapse0x1a0b6d0();
   input += synapse0x1a0b710();
   input += synapse0x1a0b750();
   input += synapse0x1a0b790();
   input += synapse0x1a0b7d0();
   input += synapse0x1a130e0();
   input += synapse0x1a13120();
   input += synapse0x1a0b920();
   input += synapse0x1a0b960();
   input += synapse0x1a0b9a0();
   input += synapse0x1a0b9e0();
   input += synapse0x1a0ba20();
   input += synapse0x1a0ba60();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a12f50() {
   double input = input0x1a12f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a0baa0() {
   double input = 1.46217;
   input += synapse0x1a0bde0();
   input += synapse0x1a0be20();
   input += synapse0x1a0be60();
   input += synapse0x1a0bea0();
   input += synapse0x1a0bee0();
   input += synapse0x1a0bf20();
   input += synapse0x1a0bf60();
   input += synapse0x1a0bfa0();
   input += synapse0x1a0bfe0();
   input += synapse0x1a0c020();
   input += synapse0x1a0c060();
   input += synapse0x1a0c0a0();
   input += synapse0x1a0c0e0();
   input += synapse0x1a0c120();
   input += synapse0x1a0c160();
   input += synapse0x1a0c1a0();
   input += synapse0x1a0bc30();
   input += synapse0x1a0bc70();
   input += synapse0x1a0c2f0();
   input += synapse0x1a0c330();
   input += synapse0x1a0c370();
   input += synapse0x1a0c3b0();
   input += synapse0x1a0c3f0();
   input += synapse0x1a0c430();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a0baa0() {
   double input = input0x1a0baa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a0c470() {
   double input = -1.14695;
   input += synapse0x1a0c600();
   input += synapse0x1a15690();
   input += synapse0x1a156d0();
   input += synapse0x1a15710();
   input += synapse0x1a15750();
   input += synapse0x1a15790();
   input += synapse0x1a157d0();
   input += synapse0x1a15810();
   input += synapse0x1a15850();
   input += synapse0x1a15890();
   input += synapse0x1a158d0();
   input += synapse0x1a15910();
   input += synapse0x1a15950();
   input += synapse0x1a15990();
   input += synapse0x1a159d0();
   input += synapse0x1a15a10();
   input += synapse0x1a154e0();
   input += synapse0x1a15520();
   input += synapse0x1a15b60();
   input += synapse0x1a15ba0();
   input += synapse0x1a15be0();
   input += synapse0x1a15c20();
   input += synapse0x1a15c60();
   input += synapse0x1a15ca0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a0c470() {
   double input = input0x1a0c470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a15ce0() {
   double input = -1.44127;
   input += synapse0x1a16020();
   input += synapse0x1a16060();
   input += synapse0x1a160a0();
   input += synapse0x1a160e0();
   input += synapse0x1a16120();
   input += synapse0x1a16160();
   input += synapse0x1a161a0();
   input += synapse0x1a161e0();
   input += synapse0x1a16220();
   input += synapse0x1a16260();
   input += synapse0x1a162a0();
   input += synapse0x1a162e0();
   input += synapse0x1a16320();
   input += synapse0x1a16360();
   input += synapse0x1a163a0();
   input += synapse0x1a163e0();
   input += synapse0x1a15e70();
   input += synapse0x1a15eb0();
   input += synapse0x1a16530();
   input += synapse0x1a16570();
   input += synapse0x1a165b0();
   input += synapse0x1a165f0();
   input += synapse0x1a16630();
   input += synapse0x1a16670();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a15ce0() {
   double input = input0x1a15ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a166b0() {
   double input = -1.26099;
   input += synapse0x1a169f0();
   input += synapse0x1a16a30();
   input += synapse0x1a16a70();
   input += synapse0x1a16ab0();
   input += synapse0x1a16af0();
   input += synapse0x1a16b30();
   input += synapse0x1a16b70();
   input += synapse0x1a16bb0();
   input += synapse0x1a16bf0();
   input += synapse0x1a16c30();
   input += synapse0x1a16c70();
   input += synapse0x1a16cb0();
   input += synapse0x1a16cf0();
   input += synapse0x1a16d30();
   input += synapse0x1a16d70();
   input += synapse0x1a16db0();
   input += synapse0x1a16840();
   input += synapse0x1a16880();
   input += synapse0x1a16f00();
   input += synapse0x1a16f40();
   input += synapse0x1a16f80();
   input += synapse0x1a16fc0();
   input += synapse0x1a17000();
   input += synapse0x1a17040();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a166b0() {
   double input = input0x1a166b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a17080() {
   double input = 2.33811;
   input += synapse0x1a173c0();
   input += synapse0x1a17400();
   input += synapse0x1a17440();
   input += synapse0x1a17480();
   input += synapse0x1a174c0();
   input += synapse0x1a17500();
   input += synapse0x1a17540();
   input += synapse0x1a17580();
   input += synapse0x1a175c0();
   input += synapse0x1a17600();
   input += synapse0x1a17640();
   input += synapse0x1a17680();
   input += synapse0x1a176c0();
   input += synapse0x1a17700();
   input += synapse0x1a17740();
   input += synapse0x1a17780();
   input += synapse0x1a17210();
   input += synapse0x1a17250();
   input += synapse0x1a178d0();
   input += synapse0x1a17910();
   input += synapse0x1a17950();
   input += synapse0x1a17990();
   input += synapse0x1a179d0();
   input += synapse0x1a17a10();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a17080() {
   double input = input0x1a17080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a17a50() {
   double input = -1.4989;
   input += synapse0x1a17d90();
   input += synapse0x1a17dd0();
   input += synapse0x1a17e10();
   input += synapse0x1a17e50();
   input += synapse0x1a17e90();
   input += synapse0x1a17ed0();
   input += synapse0x1a17f10();
   input += synapse0x1a17f50();
   input += synapse0x1a17f90();
   input += synapse0x1a17fd0();
   input += synapse0x1a18010();
   input += synapse0x1a18050();
   input += synapse0x1a18090();
   input += synapse0x1a180d0();
   input += synapse0x1a18110();
   input += synapse0x1a18150();
   input += synapse0x1a17be0();
   input += synapse0x1a17c20();
   input += synapse0x1a182a0();
   input += synapse0x1a182e0();
   input += synapse0x1a18320();
   input += synapse0x1a18360();
   input += synapse0x1a183a0();
   input += synapse0x1a183e0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a17a50() {
   double input = input0x1a17a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a18420() {
   double input = -2.35443;
   input += synapse0x1a18760();
   input += synapse0x1a187a0();
   input += synapse0x1a187e0();
   input += synapse0x1a18820();
   input += synapse0x1a18860();
   input += synapse0x1a188a0();
   input += synapse0x1a188e0();
   input += synapse0x1a18920();
   input += synapse0x1a18960();
   input += synapse0x1a189a0();
   input += synapse0x1a189e0();
   input += synapse0x1a18a20();
   input += synapse0x1a18a60();
   input += synapse0x1a18aa0();
   input += synapse0x1a18ae0();
   input += synapse0x1a18b20();
   input += synapse0x1a185b0();
   input += synapse0x1a185f0();
   input += synapse0x1a18c70();
   input += synapse0x1a18cb0();
   input += synapse0x1a18cf0();
   input += synapse0x1a18d30();
   input += synapse0x1a18d70();
   input += synapse0x1a18db0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a18420() {
   double input = input0x1a18420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a18df0() {
   double input = -0.62304;
   input += synapse0x1a19130();
   input += synapse0x1a19170();
   input += synapse0x1a191b0();
   input += synapse0x1a191f0();
   input += synapse0x1a19230();
   input += synapse0x1a19270();
   input += synapse0x1a192b0();
   input += synapse0x1a192f0();
   input += synapse0x1a19330();
   input += synapse0x1a19370();
   input += synapse0x1a193b0();
   input += synapse0x1a193f0();
   input += synapse0x1a19430();
   input += synapse0x1a19470();
   input += synapse0x1a194b0();
   input += synapse0x1a194f0();
   input += synapse0x1a18f80();
   input += synapse0x1a18fc0();
   input += synapse0x1a19640();
   input += synapse0x1a19680();
   input += synapse0x1a196c0();
   input += synapse0x1a19700();
   input += synapse0x1a19740();
   input += synapse0x1a19780();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a18df0() {
   double input = input0x1a18df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a197c0() {
   double input = 1.4165;
   input += synapse0x1a19b00();
   input += synapse0x1a19b40();
   input += synapse0x1a19b80();
   input += synapse0x1a19bc0();
   input += synapse0x1a19c00();
   input += synapse0x1a19c40();
   input += synapse0x1a19c80();
   input += synapse0x1a19cc0();
   input += synapse0x1a19d00();
   input += synapse0x1a19d40();
   input += synapse0x1a19d80();
   input += synapse0x1a19dc0();
   input += synapse0x1a19e00();
   input += synapse0x1a19e40();
   input += synapse0x1a19e80();
   input += synapse0x1a19ec0();
   input += synapse0x1a19950();
   input += synapse0x1a19990();
   input += synapse0x1a1a010();
   input += synapse0x1a1a050();
   input += synapse0x1a1a090();
   input += synapse0x1a1a0d0();
   input += synapse0x1a1a110();
   input += synapse0x1a1a150();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a197c0() {
   double input = input0x1a197c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a1a190() {
   double input = -1.93969;
   input += synapse0x1a1a4d0();
   input += synapse0x1a0eaa0();
   input += synapse0x1a0eae0();
   input += synapse0x1a0eb20();
   input += synapse0x1a0ed70();
   input += synapse0x1a0edb0();
   input += synapse0x1a0edf0();
   input += synapse0x1a0f040();
   input += synapse0x1a0f080();
   input += synapse0x1a0f2d0();
   input += synapse0x1a0f310();
   input += synapse0x1a0f350();
   input += synapse0x1a0f5a0();
   input += synapse0x1a0f5e0();
   input += synapse0x1a0f830();
   input += synapse0x1a0f870();
   input += synapse0x1a1a320();
   input += synapse0x1a1a360();
   input += synapse0x1a0f9c0();
   input += synapse0x1a0fed0();
   input += synapse0x1a0ff10();
   input += synapse0x1a0ff50();
   input += synapse0x1a101a0();
   input += synapse0x1a101e0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a1a190() {
   double input = input0x1a1a190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a10220() {
   double input = 0.102259;
   input += synapse0x1a0fa90();
   input += synapse0x1a0fad0();
   input += synapse0x1a0fb10();
   input += synapse0x1a0fb50();
   input += synapse0x1a104d0();
   input += synapse0x1a1c820();
   input += synapse0x1a1c860();
   input += synapse0x1a1c8a0();
   input += synapse0x1a1c8e0();
   input += synapse0x1a1c920();
   input += synapse0x1a1c960();
   input += synapse0x1a1c9a0();
   input += synapse0x1a1c9e0();
   input += synapse0x1a1ca20();
   input += synapse0x1a1ca60();
   input += synapse0x1a1caa0();
   input += synapse0x1a103b0();
   input += synapse0x1a103f0();
   input += synapse0x1a1cbf0();
   input += synapse0x1a1cc30();
   input += synapse0x1a1cc70();
   input += synapse0x1a1ccb0();
   input += synapse0x1a1ccf0();
   input += synapse0x1a1cd30();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a10220() {
   double input = input0x1a10220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a1cd70() {
   double input = 0.0727055;
   input += synapse0x1a1d0b0();
   input += synapse0x1a1d0f0();
   input += synapse0x1a1d130();
   input += synapse0x1a1d170();
   input += synapse0x1a1d1b0();
   input += synapse0x1a1d1f0();
   input += synapse0x1a1d230();
   input += synapse0x1a1d270();
   input += synapse0x1a1d2b0();
   input += synapse0x1a1d2f0();
   input += synapse0x1a1d330();
   input += synapse0x1a1d370();
   input += synapse0x1a1d3b0();
   input += synapse0x1a1d3f0();
   input += synapse0x1a1d430();
   input += synapse0x1a1d470();
   input += synapse0x1a1cf00();
   input += synapse0x1a1cf40();
   input += synapse0x1a1d5c0();
   input += synapse0x1a1d600();
   input += synapse0x1a1d640();
   input += synapse0x1a1d680();
   input += synapse0x1a1d6c0();
   input += synapse0x1a1d700();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a1cd70() {
   double input = input0x1a1cd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a1d740() {
   double input = -1.09562;
   input += synapse0x1a1da80();
   input += synapse0x1a1dac0();
   input += synapse0x1a1db00();
   input += synapse0x1a1db40();
   input += synapse0x1a1db80();
   input += synapse0x1a1dbc0();
   input += synapse0x1a1dc00();
   input += synapse0x1a1dc40();
   input += synapse0x1a1dc80();
   input += synapse0x1a1dcc0();
   input += synapse0x1a1dd00();
   input += synapse0x1a1dd40();
   input += synapse0x1a1dd80();
   input += synapse0x1a1ddc0();
   input += synapse0x1a1de00();
   input += synapse0x1a1de40();
   input += synapse0x1a1d8d0();
   input += synapse0x1a1d910();
   input += synapse0x1a1df90();
   input += synapse0x1a1dfd0();
   input += synapse0x1a1e010();
   input += synapse0x1a1e050();
   input += synapse0x1a1e090();
   input += synapse0x1a1e0d0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a1d740() {
   double input = input0x1a1d740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a1e110() {
   double input = 0.301329;
   input += synapse0x1a1e450();
   input += synapse0x1a1e490();
   input += synapse0x1a1e4d0();
   input += synapse0x1a1e510();
   input += synapse0x1a1e550();
   input += synapse0x1a1e590();
   input += synapse0x1a1e5d0();
   input += synapse0x1a1e610();
   input += synapse0x1a1e650();
   input += synapse0x1a1e690();
   input += synapse0x1a1e6d0();
   input += synapse0x1a1e710();
   input += synapse0x1a1e750();
   input += synapse0x1a1e790();
   input += synapse0x1a1e7d0();
   input += synapse0x1a1e810();
   input += synapse0x1a1e2a0();
   input += synapse0x1a1e2e0();
   input += synapse0x1a1e960();
   input += synapse0x1a1e9a0();
   input += synapse0x1a1e9e0();
   input += synapse0x1a1ea20();
   input += synapse0x1a1ea60();
   input += synapse0x1a1eaa0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a1e110() {
   double input = input0x1a1e110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a1eae0() {
   double input = 1.77067;
   input += synapse0x1a1ee20();
   input += synapse0x1a1ee60();
   input += synapse0x1a1eea0();
   input += synapse0x1a1eee0();
   input += synapse0x1a1ef20();
   input += synapse0x1a1ef60();
   input += synapse0x1a1efa0();
   input += synapse0x1a1efe0();
   input += synapse0x1a1f020();
   input += synapse0x1a1f060();
   input += synapse0x1a1f0a0();
   input += synapse0x1a1f0e0();
   input += synapse0x1a1f120();
   input += synapse0x1a1f160();
   input += synapse0x1a1f1a0();
   input += synapse0x1a1f1e0();
   input += synapse0x1a1ec70();
   input += synapse0x1a1ecb0();
   input += synapse0x1a1f330();
   input += synapse0x1a1f370();
   input += synapse0x1a1f3b0();
   input += synapse0x1a1f3f0();
   input += synapse0x1a1f430();
   input += synapse0x1a1f470();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a1eae0() {
   double input = input0x1a1eae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a1f4b0() {
   double input = 0.618667;
   input += synapse0x1a1f7f0();
   input += synapse0x1a1f830();
   input += synapse0x1a1f870();
   input += synapse0x1a1f8b0();
   input += synapse0x1a1f8f0();
   input += synapse0x1a1f930();
   input += synapse0x1a1f970();
   input += synapse0x1a1f9b0();
   input += synapse0x1a1f9f0();
   input += synapse0x1a1fa30();
   input += synapse0x1a1fa70();
   input += synapse0x1a1fab0();
   input += synapse0x1a1faf0();
   input += synapse0x1a1fb30();
   input += synapse0x1a1fb70();
   input += synapse0x1a1fbb0();
   input += synapse0x1a1f640();
   input += synapse0x1a1f680();
   input += synapse0x1a1fd00();
   input += synapse0x1a1fd40();
   input += synapse0x1a1fd80();
   input += synapse0x1a1fdc0();
   input += synapse0x1a1fe00();
   input += synapse0x1a1fe40();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a1f4b0() {
   double input = input0x1a1f4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a1fe80() {
   double input = 0.577409;
   input += synapse0x1a201c0();
   input += synapse0x1a20200();
   input += synapse0x1a20240();
   input += synapse0x1a20280();
   input += synapse0x1a202c0();
   input += synapse0x1a20300();
   input += synapse0x1a20340();
   input += synapse0x1a20380();
   input += synapse0x1a203c0();
   input += synapse0x1a20400();
   input += synapse0x1a20440();
   input += synapse0x1a20480();
   input += synapse0x1a204c0();
   input += synapse0x1a20500();
   input += synapse0x1a20540();
   input += synapse0x1a20580();
   input += synapse0x1a20010();
   input += synapse0x1a20050();
   input += synapse0x1a206d0();
   input += synapse0x1a20710();
   input += synapse0x1a20750();
   input += synapse0x1a20790();
   input += synapse0x1a207d0();
   input += synapse0x1a20810();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a1fe80() {
   double input = input0x1a1fe80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a20850() {
   double input = -4.19588;
   input += synapse0x1a20b90();
   input += synapse0x1a20bd0();
   input += synapse0x1a20c10();
   input += synapse0x1a20c50();
   input += synapse0x1a20c90();
   input += synapse0x1a20cd0();
   input += synapse0x1a20d10();
   input += synapse0x1a20d50();
   input += synapse0x1a20d90();
   input += synapse0x1a20dd0();
   input += synapse0x1a20e10();
   input += synapse0x1a20e50();
   input += synapse0x1a20e90();
   input += synapse0x1a20ed0();
   input += synapse0x1a20f10();
   input += synapse0x1a20f50();
   input += synapse0x1a209e0();
   input += synapse0x1a20a20();
   input += synapse0x1a210a0();
   input += synapse0x1a210e0();
   input += synapse0x1a21120();
   input += synapse0x1a21160();
   input += synapse0x1a211a0();
   input += synapse0x1a211e0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a20850() {
   double input = input0x1a20850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a21220() {
   double input = -0.157749;
   input += synapse0x1a09c90();
   input += synapse0x1a09cd0();
   input += synapse0x1a09d10();
   input += synapse0x1a09d50();
   input += synapse0x1a09d90();
   input += synapse0x1a09dd0();
   input += synapse0x1a09e10();
   input += synapse0x1a09e50();
   input += synapse0x1a21970();
   input += synapse0x1a219b0();
   input += synapse0x1a219f0();
   input += synapse0x1a21a30();
   input += synapse0x1a21a70();
   input += synapse0x1a21ab0();
   input += synapse0x1a21af0();
   input += synapse0x1a21b30();
   input += synapse0x1a213b0();
   input += synapse0x1a213f0();
   input += synapse0x1a21c80();
   input += synapse0x1a21cc0();
   input += synapse0x1a21d00();
   input += synapse0x1a21d40();
   input += synapse0x1a21d80();
   input += synapse0x1a21dc0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a21220() {
   double input = input0x1a21220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a21e00() {
   double input = -1.0595;
   input += synapse0x1a22140();
   input += synapse0x1a22180();
   input += synapse0x1a221c0();
   input += synapse0x1a22200();
   input += synapse0x1a22240();
   input += synapse0x1a22280();
   input += synapse0x1a222c0();
   input += synapse0x1a22300();
   input += synapse0x1a22340();
   input += synapse0x1a22380();
   input += synapse0x1a223c0();
   input += synapse0x1a22400();
   input += synapse0x1a22440();
   input += synapse0x1a22480();
   input += synapse0x1a224c0();
   input += synapse0x1a22500();
   input += synapse0x1a21f90();
   input += synapse0x1a21fd0();
   input += synapse0x1a22650();
   input += synapse0x1a22690();
   input += synapse0x1a226d0();
   input += synapse0x1a22710();
   input += synapse0x1a22750();
   input += synapse0x1a22790();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a21e00() {
   double input = input0x1a21e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a227d0() {
   double input = -0.17523;
   input += synapse0x1a22b10();
   input += synapse0x1a22b50();
   input += synapse0x1a22b90();
   input += synapse0x1a22bd0();
   input += synapse0x1a22c10();
   input += synapse0x1a22c50();
   input += synapse0x1a22c90();
   input += synapse0x1a22cd0();
   input += synapse0x1a22d10();
   input += synapse0x1a22d50();
   input += synapse0x1a22d90();
   input += synapse0x1a22dd0();
   input += synapse0x1a22e10();
   input += synapse0x1a22e50();
   input += synapse0x1a22e90();
   input += synapse0x1a22ed0();
   input += synapse0x1a22960();
   input += synapse0x1a229a0();
   input += synapse0x1a134d0();
   input += synapse0x1a13510();
   input += synapse0x1a13550();
   input += synapse0x1a13590();
   input += synapse0x1a135d0();
   input += synapse0x1a13610();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a227d0() {
   double input = input0x1a227d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a13650() {
   double input = 2.05904;
   input += synapse0x1a13990();
   input += synapse0x1a139d0();
   input += synapse0x1a13a10();
   input += synapse0x1a13a50();
   input += synapse0x1a13a90();
   input += synapse0x1a13ad0();
   input += synapse0x1a13b10();
   input += synapse0x1a13b50();
   input += synapse0x1a13b90();
   input += synapse0x1a13bd0();
   input += synapse0x1a13c10();
   input += synapse0x1a13c50();
   input += synapse0x1a13c90();
   input += synapse0x1a13cd0();
   input += synapse0x1a13d10();
   input += synapse0x1a13d50();
   input += synapse0x1a137e0();
   input += synapse0x1a13820();
   input += synapse0x1a13ea0();
   input += synapse0x1a13ee0();
   input += synapse0x1a13f20();
   input += synapse0x1a13f60();
   input += synapse0x1a13fa0();
   input += synapse0x1a13fe0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a13650() {
   double input = input0x1a13650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a14020() {
   double input = -0.103961;
   input += synapse0x1a14360();
   input += synapse0x1a143a0();
   input += synapse0x1a143e0();
   input += synapse0x1a14420();
   input += synapse0x1a14460();
   input += synapse0x1a144a0();
   input += synapse0x1a144e0();
   input += synapse0x1a14520();
   input += synapse0x1a14560();
   input += synapse0x1a145a0();
   input += synapse0x1a145e0();
   input += synapse0x1a14620();
   input += synapse0x1a14660();
   input += synapse0x1a146a0();
   input += synapse0x1a146e0();
   input += synapse0x1a14720();
   input += synapse0x1a141b0();
   input += synapse0x1a141f0();
   input += synapse0x1a14870();
   input += synapse0x1a148b0();
   input += synapse0x1a148f0();
   input += synapse0x1a14930();
   input += synapse0x1a14970();
   input += synapse0x1a149b0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a14020() {
   double input = input0x1a14020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a149f0() {
   double input = 1.11453;
   input += synapse0x1a14d30();
   input += synapse0x1a14d70();
   input += synapse0x1a14db0();
   input += synapse0x1a14df0();
   input += synapse0x1a14e30();
   input += synapse0x1a14e70();
   input += synapse0x1a14eb0();
   input += synapse0x1a14ef0();
   input += synapse0x1a14f30();
   input += synapse0x1a14f70();
   input += synapse0x1a14fb0();
   input += synapse0x1a14ff0();
   input += synapse0x1a15030();
   input += synapse0x1a15070();
   input += synapse0x1a150b0();
   input += synapse0x1a150f0();
   input += synapse0x1a14b80();
   input += synapse0x1a14bc0();
   input += synapse0x1a15240();
   input += synapse0x1a15280();
   input += synapse0x1a152c0();
   input += synapse0x1a15300();
   input += synapse0x1a15340();
   input += synapse0x1a15380();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a149f0() {
   double input = input0x1a149f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a27030() {
   double input = -0.396565;
   input += synapse0x1a27250();
   input += synapse0x1a27290();
   input += synapse0x1a272d0();
   input += synapse0x1a27310();
   input += synapse0x1a27350();
   input += synapse0x1a27390();
   input += synapse0x1a273d0();
   input += synapse0x1a27410();
   input += synapse0x1a27450();
   input += synapse0x1a27490();
   input += synapse0x1a274d0();
   input += synapse0x1a27510();
   input += synapse0x1a27550();
   input += synapse0x1a27590();
   input += synapse0x1a275d0();
   input += synapse0x1a27610();
   input += synapse0x1a153c0();
   input += synapse0x1a15400();
   input += synapse0x1a27760();
   input += synapse0x1a277a0();
   input += synapse0x1a277e0();
   input += synapse0x1a27820();
   input += synapse0x1a27860();
   input += synapse0x1a278a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a27030() {
   double input = input0x1a27030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a278e0() {
   double input = 0.965418;
   input += synapse0x1a27c20();
   input += synapse0x1a27c60();
   input += synapse0x1a27ca0();
   input += synapse0x1a27ce0();
   input += synapse0x1a27d20();
   input += synapse0x1a27d60();
   input += synapse0x1a27da0();
   input += synapse0x1a27de0();
   input += synapse0x1a27e20();
   input += synapse0x1a27e60();
   input += synapse0x1a27ea0();
   input += synapse0x1a27ee0();
   input += synapse0x1a27f20();
   input += synapse0x1a27f60();
   input += synapse0x1a27fa0();
   input += synapse0x1a27fe0();
   input += synapse0x1a27a70();
   input += synapse0x1a27ab0();
   input += synapse0x1a28130();
   input += synapse0x1a28170();
   input += synapse0x1a281b0();
   input += synapse0x1a281f0();
   input += synapse0x1a28230();
   input += synapse0x1a28270();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a278e0() {
   double input = input0x1a278e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a282b0() {
   double input = -0.34618;
   input += synapse0x1a285f0();
   input += synapse0x1a28630();
   input += synapse0x1a28670();
   input += synapse0x1a286b0();
   input += synapse0x1a286f0();
   input += synapse0x1a28730();
   input += synapse0x1a28770();
   input += synapse0x1a287b0();
   input += synapse0x1a287f0();
   input += synapse0x1a28830();
   input += synapse0x1a28870();
   input += synapse0x1a288b0();
   input += synapse0x1a288f0();
   input += synapse0x1a28930();
   input += synapse0x1a28970();
   input += synapse0x1a289b0();
   input += synapse0x1a28440();
   input += synapse0x1a28480();
   input += synapse0x1a28b00();
   input += synapse0x1a28b40();
   input += synapse0x1a28b80();
   input += synapse0x1a28bc0();
   input += synapse0x1a28c00();
   input += synapse0x1a28c40();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a282b0() {
   double input = input0x1a282b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a28c80() {
   double input = -0.922199;
   input += synapse0x1a28fc0();
   input += synapse0x1a29000();
   input += synapse0x1a29040();
   input += synapse0x1a29080();
   input += synapse0x1a290c0();
   input += synapse0x1a29100();
   input += synapse0x1a29140();
   input += synapse0x1a29180();
   input += synapse0x1a291c0();
   input += synapse0x1a29200();
   input += synapse0x1a29240();
   input += synapse0x1a29280();
   input += synapse0x1a292c0();
   input += synapse0x1a29300();
   input += synapse0x1a29340();
   input += synapse0x1a29380();
   input += synapse0x1a28e10();
   input += synapse0x1a28e50();
   input += synapse0x1a294d0();
   input += synapse0x1a29510();
   input += synapse0x1a29550();
   input += synapse0x1a29590();
   input += synapse0x1a295d0();
   input += synapse0x1a29610();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a28c80() {
   double input = input0x1a28c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a2fe80() {
   double input = -0.0916763;
   input += synapse0x1a070c0();
   input += synapse0x1a07100();
   input += synapse0x1a07a90();
   input += synapse0x1a07ad0();
   input += synapse0x1a08860();
   input += synapse0x1a088a0();
   input += synapse0x1a09230();
   input += synapse0x1a09270();
   input += synapse0x1a09c00();
   input += synapse0x1a09c40();
   input += synapse0x1a0a6e0();
   input += synapse0x1a0a720();
   input += synapse0x1a0b0b0();
   input += synapse0x1a0b0f0();
   input += synapse0x1a08190();
   input += synapse0x1a081d0();
   input += synapse0x1a0cc60();
   input += synapse0x1a0cca0();
   input += synapse0x1a0d630();
   input += synapse0x1a0d670();
   input += synapse0x1a0e000();
   input += synapse0x1a0e040();
   input += synapse0x1a0e9d0();
   input += synapse0x1a0ea10();
   input += synapse0x1a02b30();
   input += synapse0x1a02b70();
   input += synapse0x1a10ac0();
   input += synapse0x1a10b00();
   input += synapse0x1a11490();
   input += synapse0x1a114d0();
   input += synapse0x1a11e60();
   input += synapse0x1a11ea0();
   input += synapse0x1a12830();
   input += synapse0x1a12870();
   input += synapse0x1a13200();
   input += synapse0x1a13240();
   input += synapse0x1a0bd50();
   input += synapse0x1a0bd90();
   input += synapse0x1a15600();
   input += synapse0x1a15640();
   input += synapse0x1a15f90();
   input += synapse0x1a15fd0();
   input += synapse0x1a16960();
   input += synapse0x1a169a0();
   input += synapse0x1a17330();
   input += synapse0x1a17370();
   input += synapse0x1a17d00();
   input += synapse0x1a17d40();
   input += synapse0x1a186d0();
   input += synapse0x1a18710();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a2fe80() {
   double input = input0x1a2fe80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a30220() {
   double input = 0.798787;
   input += synapse0x1a0fa00();
   input += synapse0x1a0fa40();
   input += synapse0x1a1d020();
   input += synapse0x1a1d060();
   input += synapse0x1a1d9f0();
   input += synapse0x1a1da30();
   input += synapse0x1a1e3c0();
   input += synapse0x1a1e400();
   input += synapse0x1a1ed90();
   input += synapse0x1a1edd0();
   input += synapse0x1a1f760();
   input += synapse0x1a1f7a0();
   input += synapse0x1a20130();
   input += synapse0x1a20170();
   input += synapse0x1a20b00();
   input += synapse0x1a20b40();
   input += synapse0x1a214d0();
   input += synapse0x1a21510();
   input += synapse0x1a220b0();
   input += synapse0x1a220f0();
   input += synapse0x1a22a80();
   input += synapse0x1a22ac0();
   input += synapse0x1a13900();
   input += synapse0x1a13940();
   input += synapse0x1a142d0();
   input += synapse0x1a14310();
   input += synapse0x1a14ca0();
   input += synapse0x1a14ce0();
   input += synapse0x1a271c0();
   input += synapse0x1a27200();
   input += synapse0x1a27b90();
   input += synapse0x1a27bd0();
   input += synapse0x1a28560();
   input += synapse0x1a285a0();
   input += synapse0x1a28f30();
   input += synapse0x1a28f70();
   input += synapse0x1a04de0();
   input += synapse0x1a04e20();
   input += synapse0x1a190a0();
   input += synapse0x1a190e0();
   input += synapse0x17c9480();
   input += synapse0x17c94c0();
   input += synapse0x17c9500();
   input += synapse0x1a29650();
   input += synapse0x1a29690();
   input += synapse0x1a296d0();
   input += synapse0x1a29710();
   input += synapse0x1a305c0();
   input += synapse0x1a30600();
   input += synapse0x1a30640();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a30220() {
   double input = input0x1a30220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a30680() {
   double input = 1.07659;
   input += synapse0x1a309c0();
   input += synapse0x1a30a00();
   input += synapse0x1a30a40();
   input += synapse0x1a30a80();
   input += synapse0x1a30ac0();
   input += synapse0x1a30b00();
   input += synapse0x1a30b40();
   input += synapse0x1a30b80();
   input += synapse0x1a30bc0();
   input += synapse0x1a30c00();
   input += synapse0x1a30c40();
   input += synapse0x1a30c80();
   input += synapse0x1a30cc0();
   input += synapse0x1a30d00();
   input += synapse0x1a30d40();
   input += synapse0x1a30d80();
   input += synapse0x1a30810();
   input += synapse0x1a30850();
   input += synapse0x1a30ed0();
   input += synapse0x1a30f10();
   input += synapse0x1a30f50();
   input += synapse0x1a30f90();
   input += synapse0x1a30fd0();
   input += synapse0x1a31010();
   input += synapse0x1a31050();
   input += synapse0x1a31090();
   input += synapse0x1a310d0();
   input += synapse0x1a31110();
   input += synapse0x1a31150();
   input += synapse0x1a31190();
   input += synapse0x1a311d0();
   input += synapse0x1a31210();
   input += synapse0x1a30dc0();
   input += synapse0x1a30e00();
   input += synapse0x1a30e40();
   input += synapse0x1a30e80();
   input += synapse0x1a31460();
   input += synapse0x1a314a0();
   input += synapse0x1a314e0();
   input += synapse0x1a31520();
   input += synapse0x1a31560();
   input += synapse0x1a315a0();
   input += synapse0x1a315e0();
   input += synapse0x1a31620();
   input += synapse0x1a31660();
   input += synapse0x1a316a0();
   input += synapse0x1a316e0();
   input += synapse0x1a31720();
   input += synapse0x1a31760();
   input += synapse0x1a317a0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a30680() {
   double input = input0x1a30680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a317e0() {
   double input = -0.897212;
   input += synapse0x1a31b20();
   input += synapse0x1a31b60();
   input += synapse0x1a31ba0();
   input += synapse0x1a31be0();
   input += synapse0x1a31c20();
   input += synapse0x1a31c60();
   input += synapse0x1a31ca0();
   input += synapse0x1a31ce0();
   input += synapse0x1a31d20();
   input += synapse0x1a31d60();
   input += synapse0x1a31da0();
   input += synapse0x1a31de0();
   input += synapse0x1a31e20();
   input += synapse0x1a31e60();
   input += synapse0x1a31ea0();
   input += synapse0x1a31ee0();
   input += synapse0x1a31970();
   input += synapse0x1a319b0();
   input += synapse0x1a32030();
   input += synapse0x1a32070();
   input += synapse0x1a320b0();
   input += synapse0x1a320f0();
   input += synapse0x1a32130();
   input += synapse0x1a32170();
   input += synapse0x1a321b0();
   input += synapse0x1a321f0();
   input += synapse0x1a32230();
   input += synapse0x1a32270();
   input += synapse0x1a322b0();
   input += synapse0x1a322f0();
   input += synapse0x1a32330();
   input += synapse0x1a32370();
   input += synapse0x1a31f20();
   input += synapse0x1a31f60();
   input += synapse0x1a31fa0();
   input += synapse0x1a31fe0();
   input += synapse0x1a325c0();
   input += synapse0x1a32600();
   input += synapse0x1a32640();
   input += synapse0x1a32680();
   input += synapse0x1a326c0();
   input += synapse0x1a32700();
   input += synapse0x1a32740();
   input += synapse0x1a32780();
   input += synapse0x1a327c0();
   input += synapse0x1a32800();
   input += synapse0x1a32840();
   input += synapse0x1a32880();
   input += synapse0x1a328c0();
   input += synapse0x1a32900();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a317e0() {
   double input = input0x1a317e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a32940() {
   double input = -0.416064;
   input += synapse0x1a32c80();
   input += synapse0x1a32cc0();
   input += synapse0x1a32d00();
   input += synapse0x1a32d40();
   input += synapse0x1a32d80();
   input += synapse0x1a32dc0();
   input += synapse0x1a32e00();
   input += synapse0x1a32e40();
   input += synapse0x1a32e80();
   input += synapse0x1a32ec0();
   input += synapse0x1a32f00();
   input += synapse0x1a32f40();
   input += synapse0x1a32f80();
   input += synapse0x1a32fc0();
   input += synapse0x1a33000();
   input += synapse0x1a33040();
   input += synapse0x1a32ad0();
   input += synapse0x1a32b10();
   input += synapse0x1a33190();
   input += synapse0x1a331d0();
   input += synapse0x1a33210();
   input += synapse0x1a33250();
   input += synapse0x1a33290();
   input += synapse0x1a332d0();
   input += synapse0x1a33310();
   input += synapse0x1a33350();
   input += synapse0x1a33390();
   input += synapse0x1a333d0();
   input += synapse0x1a33410();
   input += synapse0x1a33450();
   input += synapse0x1a33490();
   input += synapse0x1a334d0();
   input += synapse0x1a33080();
   input += synapse0x1a330c0();
   input += synapse0x1a33100();
   input += synapse0x1a33140();
   input += synapse0x1a33720();
   input += synapse0x1a33760();
   input += synapse0x1a337a0();
   input += synapse0x1a337e0();
   input += synapse0x1a33820();
   input += synapse0x1a33860();
   input += synapse0x1a338a0();
   input += synapse0x1a338e0();
   input += synapse0x1a33920();
   input += synapse0x1a33960();
   input += synapse0x1a339a0();
   input += synapse0x1a339e0();
   input += synapse0x1a33a20();
   input += synapse0x1a33a60();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a32940() {
   double input = input0x1a32940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sRcR::input0x1a33aa0() {
   double input = 12.0514;
   input += synapse0x1a33cc0();
   input += synapse0x1a33d00();
   input += synapse0x1a33d40();
   input += synapse0x1a33d80();
   input += synapse0x1a33dc0();
   return input;
}

double NNfunction_sb_sRcR::neuron0x1a33aa0() {
   double input = input0x1a33aa0();
   return (input * 1)+0;
}

double NNfunction_sb_sRcR::synapse0x19ffa50() {
   return (neuron0x19ffb90()*-0.593878);
}

double NNfunction_sb_sRcR::synapse0x19ffa90() {
   return (neuron0x19ffed0()*-1.52371);
}

double NNfunction_sb_sRcR::synapse0x1a04e70() {
   return (neuron0x1a00210()*0.318994);
}

double NNfunction_sb_sRcR::synapse0x1a04eb0() {
   return (neuron0x1a00550()*-0.141302);
}

double NNfunction_sb_sRcR::synapse0x1a04ef0() {
   return (neuron0x1a00890()*-0.137728);
}

double NNfunction_sb_sRcR::synapse0x1a04f30() {
   return (neuron0x1a00bd0()*0.735344);
}

double NNfunction_sb_sRcR::synapse0x1a04f70() {
   return (neuron0x1a00f10()*0.0174095);
}

double NNfunction_sb_sRcR::synapse0x1a04fb0() {
   return (neuron0x1a01250()*-0.285609);
}

double NNfunction_sb_sRcR::synapse0x1a04ff0() {
   return (neuron0x1a01590()*0.0429383);
}

double NNfunction_sb_sRcR::synapse0x1a05030() {
   return (neuron0x1a018d0()*0.148816);
}

double NNfunction_sb_sRcR::synapse0x1a05070() {
   return (neuron0x1a01c10()*-1.06129);
}

double NNfunction_sb_sRcR::synapse0x1a050b0() {
   return (neuron0x1a01f50()*-0.417868);
}

double NNfunction_sb_sRcR::synapse0x1a050f0() {
   return (neuron0x1a02290()*-0.268314);
}

double NNfunction_sb_sRcR::synapse0x1a05130() {
   return (neuron0x1a025d0()*-0.814685);
}

double NNfunction_sb_sRcR::synapse0x1a05170() {
   return (neuron0x1a02910()*-0.232384);
}

double NNfunction_sb_sRcR::synapse0x1a051b0() {
   return (neuron0x1a02c50()*-0.260662);
}

double NNfunction_sb_sRcR::synapse0x19ff9c0() {
   return (neuron0x1a02f90()*-0.110749);
}

double NNfunction_sb_sRcR::synapse0x19ffa00() {
   return (neuron0x1a034f0()*0.584515);
}

double NNfunction_sb_sRcR::synapse0x17bad80() {
   return (neuron0x1a03710()*0.153481);
}

double NNfunction_sb_sRcR::synapse0x17badc0() {
   return (neuron0x1a03a50()*-0.938742);
}

double NNfunction_sb_sRcR::synapse0x1a05410() {
   return (neuron0x1a03d90()*0.692483);
}

double NNfunction_sb_sRcR::synapse0x1a05450() {
   return (neuron0x1a040d0()*-0.0543015);
}

double NNfunction_sb_sRcR::synapse0x1a05490() {
   return (neuron0x1a04410()*-0.338506);
}

double NNfunction_sb_sRcR::synapse0x1a054d0() {
   return (neuron0x1a04750()*-0.305824);
}

double NNfunction_sb_sRcR::synapse0x1a05850() {
   return (neuron0x19ffb90()*0.0187809);
}

double NNfunction_sb_sRcR::synapse0x1a05890() {
   return (neuron0x19ffed0()*0.37704);
}

double NNfunction_sb_sRcR::synapse0x1a058d0() {
   return (neuron0x1a00210()*0.444252);
}

double NNfunction_sb_sRcR::synapse0x1a05910() {
   return (neuron0x1a00550()*-0.795402);
}

double NNfunction_sb_sRcR::synapse0x1a05950() {
   return (neuron0x1a00890()*-0.583545);
}

double NNfunction_sb_sRcR::synapse0x1a05990() {
   return (neuron0x1a00bd0()*0.764409);
}

double NNfunction_sb_sRcR::synapse0x1a059d0() {
   return (neuron0x1a00f10()*-0.591062);
}

double NNfunction_sb_sRcR::synapse0x1a05a10() {
   return (neuron0x1a01250()*-0.95634);
}

double NNfunction_sb_sRcR::synapse0x1a05a50() {
   return (neuron0x1a01590()*0.242116);
}

double NNfunction_sb_sRcR::synapse0x1a05300() {
   return (neuron0x1a018d0()*0.979346);
}

double NNfunction_sb_sRcR::synapse0x1a05340() {
   return (neuron0x1a01c10()*0.0521439);
}

double NNfunction_sb_sRcR::synapse0x1a05380() {
   return (neuron0x1a01f50()*0.436621);
}

double NNfunction_sb_sRcR::synapse0x1a053c0() {
   return (neuron0x1a02290()*0.12688);
}

double NNfunction_sb_sRcR::synapse0x1a05ca0() {
   return (neuron0x1a025d0()*0.577628);
}

double NNfunction_sb_sRcR::synapse0x1a05ce0() {
   return (neuron0x1a02910()*0.290899);
}

double NNfunction_sb_sRcR::synapse0x1a05d20() {
   return (neuron0x1a02c50()*0.283894);
}

double NNfunction_sb_sRcR::synapse0x1a056a0() {
   return (neuron0x1a02f90()*-0.0492434);
}

double NNfunction_sb_sRcR::synapse0x1a056e0() {
   return (neuron0x1a034f0()*-0.384757);
}

double NNfunction_sb_sRcR::synapse0x1a05e70() {
   return (neuron0x1a03710()*1.0748);
}

double NNfunction_sb_sRcR::synapse0x1a05eb0() {
   return (neuron0x1a03a50()*1.34905);
}

double NNfunction_sb_sRcR::synapse0x1a05ef0() {
   return (neuron0x1a03d90()*-1.03639);
}

double NNfunction_sb_sRcR::synapse0x1a05f30() {
   return (neuron0x1a040d0()*-0.0610335);
}

double NNfunction_sb_sRcR::synapse0x1a05f70() {
   return (neuron0x1a04410()*0.785496);
}

double NNfunction_sb_sRcR::synapse0x1a05fb0() {
   return (neuron0x1a04750()*-0.142492);
}

double NNfunction_sb_sRcR::synapse0x1a06330() {
   return (neuron0x19ffb90()*-0.0810472);
}

double NNfunction_sb_sRcR::synapse0x1a06370() {
   return (neuron0x19ffed0()*-0.0186978);
}

double NNfunction_sb_sRcR::synapse0x1a063b0() {
   return (neuron0x1a00210()*-0.00267015);
}

double NNfunction_sb_sRcR::synapse0x1a063f0() {
   return (neuron0x1a00550()*2.46982);
}

double NNfunction_sb_sRcR::synapse0x1a06430() {
   return (neuron0x1a00890()*0.0766884);
}

double NNfunction_sb_sRcR::synapse0x1a06470() {
   return (neuron0x1a00bd0()*-0.0373293);
}

double NNfunction_sb_sRcR::synapse0x1a064b0() {
   return (neuron0x1a00f10()*0.0632835);
}

double NNfunction_sb_sRcR::synapse0x1a064f0() {
   return (neuron0x1a01250()*0.16085);
}

double NNfunction_sb_sRcR::synapse0x1a06530() {
   return (neuron0x1a01590()*-0.0584675);
}

double NNfunction_sb_sRcR::synapse0x1a06570() {
   return (neuron0x1a018d0()*-0.00412106);
}

double NNfunction_sb_sRcR::synapse0x1a065b0() {
   return (neuron0x1a01c10()*-0.0742601);
}

double NNfunction_sb_sRcR::synapse0x1a065f0() {
   return (neuron0x1a01f50()*-0.0355302);
}

double NNfunction_sb_sRcR::synapse0x1a06630() {
   return (neuron0x1a02290()*-0.046483);
}

double NNfunction_sb_sRcR::synapse0x1a06670() {
   return (neuron0x1a025d0()*0.0758627);
}

double NNfunction_sb_sRcR::synapse0x1a066b0() {
   return (neuron0x1a02910()*0.0448782);
}

double NNfunction_sb_sRcR::synapse0x1a066f0() {
   return (neuron0x1a02c50()*0.196147);
}

double NNfunction_sb_sRcR::synapse0x1a06180() {
   return (neuron0x1a02f90()*0.0711923);
}

double NNfunction_sb_sRcR::synapse0x1a061c0() {
   return (neuron0x1a034f0()*-0.0641723);
}

double NNfunction_sb_sRcR::synapse0x17bb400() {
   return (neuron0x1a03710()*0.285499);
}

double NNfunction_sb_sRcR::synapse0x17c8cd0() {
   return (neuron0x1a03a50()*-0.007931);
}

double NNfunction_sb_sRcR::synapse0x17c8d10() {
   return (neuron0x1a03d90()*-0.119993);
}

double NNfunction_sb_sRcR::synapse0x19eebf0() {
   return (neuron0x1a040d0()*0.00910638);
}

double NNfunction_sb_sRcR::synapse0x19eec30() {
   return (neuron0x1a04410()*0.0549445);
}

double NNfunction_sb_sRcR::synapse0x19eec70() {
   return (neuron0x1a04750()*-0.00291012);
}

double NNfunction_sb_sRcR::synapse0x1a05c20() {
   return (neuron0x19ffb90()*-0.539065);
}

double NNfunction_sb_sRcR::synapse0x1a05c60() {
   return (neuron0x19ffed0()*-0.488517);
}

double NNfunction_sb_sRcR::synapse0x1a06840() {
   return (neuron0x1a00210()*-0.329791);
}

double NNfunction_sb_sRcR::synapse0x1a06880() {
   return (neuron0x1a00550()*-0.90152);
}

double NNfunction_sb_sRcR::synapse0x1a068c0() {
   return (neuron0x1a00890()*-0.582377);
}

double NNfunction_sb_sRcR::synapse0x1a06900() {
   return (neuron0x1a00bd0()*-0.218612);
}

double NNfunction_sb_sRcR::synapse0x1a06940() {
   return (neuron0x1a00f10()*-0.870915);
}

double NNfunction_sb_sRcR::synapse0x1a06980() {
   return (neuron0x1a01250()*-0.488272);
}

double NNfunction_sb_sRcR::synapse0x1a069c0() {
   return (neuron0x1a01590()*0.0252377);
}

double NNfunction_sb_sRcR::synapse0x1a06a00() {
   return (neuron0x1a018d0()*-0.4834);
}

double NNfunction_sb_sRcR::synapse0x1a06a40() {
   return (neuron0x1a01c10()*1.6016);
}

double NNfunction_sb_sRcR::synapse0x1a06a80() {
   return (neuron0x1a01f50()*0.0145145);
}

double NNfunction_sb_sRcR::synapse0x1a06ac0() {
   return (neuron0x1a02290()*0.525365);
}

double NNfunction_sb_sRcR::synapse0x1a06b00() {
   return (neuron0x1a025d0()*-1.75569);
}

double NNfunction_sb_sRcR::synapse0x1a06b40() {
   return (neuron0x1a02910()*-0.439968);
}

double NNfunction_sb_sRcR::synapse0x1a06b80() {
   return (neuron0x1a02c50()*0.347306);
}

double NNfunction_sb_sRcR::synapse0x19ffad0() {
   return (neuron0x1a02f90()*0.59293);
}

double NNfunction_sb_sRcR::synapse0x19ffb10() {
   return (neuron0x1a034f0()*0.437155);
}

double NNfunction_sb_sRcR::synapse0x19ffb50() {
   return (neuron0x1a03710()*-0.638226);
}

double NNfunction_sb_sRcR::synapse0x1a06cd0() {
   return (neuron0x1a03a50()*0.453076);
}

double NNfunction_sb_sRcR::synapse0x1a06d10() {
   return (neuron0x1a03d90()*-0.259099);
}

double NNfunction_sb_sRcR::synapse0x1a06d50() {
   return (neuron0x1a040d0()*0.291719);
}

double NNfunction_sb_sRcR::synapse0x1a06d90() {
   return (neuron0x1a04410()*-0.45398);
}

double NNfunction_sb_sRcR::synapse0x1a06dd0() {
   return (neuron0x1a04750()*-0.0574849);
}

double NNfunction_sb_sRcR::synapse0x1a07150() {
   return (neuron0x19ffb90()*-0.33635);
}

double NNfunction_sb_sRcR::synapse0x1a07190() {
   return (neuron0x19ffed0()*0.455968);
}

double NNfunction_sb_sRcR::synapse0x1a071d0() {
   return (neuron0x1a00210()*-0.46868);
}

double NNfunction_sb_sRcR::synapse0x1a07210() {
   return (neuron0x1a00550()*1.14801);
}

double NNfunction_sb_sRcR::synapse0x1a07250() {
   return (neuron0x1a00890()*0.254299);
}

double NNfunction_sb_sRcR::synapse0x1a07290() {
   return (neuron0x1a00bd0()*-0.142483);
}

double NNfunction_sb_sRcR::synapse0x1a072d0() {
   return (neuron0x1a00f10()*-0.0740413);
}

double NNfunction_sb_sRcR::synapse0x1a07310() {
   return (neuron0x1a01250()*0.0107253);
}

double NNfunction_sb_sRcR::synapse0x1a07350() {
   return (neuron0x1a01590()*0.268152);
}

double NNfunction_sb_sRcR::synapse0x1a07390() {
   return (neuron0x1a018d0()*-0.20277);
}

double NNfunction_sb_sRcR::synapse0x1a073d0() {
   return (neuron0x1a01c10()*-0.0269087);
}

double NNfunction_sb_sRcR::synapse0x1a07410() {
   return (neuron0x1a01f50()*-0.427533);
}

double NNfunction_sb_sRcR::synapse0x1a07450() {
   return (neuron0x1a02290()*-0.718541);
}

double NNfunction_sb_sRcR::synapse0x1a07490() {
   return (neuron0x1a025d0()*0.00251615);
}

double NNfunction_sb_sRcR::synapse0x1a074d0() {
   return (neuron0x1a02910()*-0.187264);
}

double NNfunction_sb_sRcR::synapse0x1a07510() {
   return (neuron0x1a02c50()*-0.200235);
}

double NNfunction_sb_sRcR::synapse0x1a06fa0() {
   return (neuron0x1a02f90()*-0.119704);
}

double NNfunction_sb_sRcR::synapse0x1a06fe0() {
   return (neuron0x1a034f0()*-0.164282);
}

double NNfunction_sb_sRcR::synapse0x1a07660() {
   return (neuron0x1a03710()*-0.388875);
}

double NNfunction_sb_sRcR::synapse0x1a076a0() {
   return (neuron0x1a03a50()*0.284342);
}

double NNfunction_sb_sRcR::synapse0x1a076e0() {
   return (neuron0x1a03d90()*-0.00686954);
}

double NNfunction_sb_sRcR::synapse0x1a07720() {
   return (neuron0x1a040d0()*0.0119224);
}

double NNfunction_sb_sRcR::synapse0x1a07760() {
   return (neuron0x1a04410()*0.116857);
}

double NNfunction_sb_sRcR::synapse0x1a077a0() {
   return (neuron0x1a04750()*0.136115);
}

double NNfunction_sb_sRcR::synapse0x1a07b20() {
   return (neuron0x19ffb90()*0.00286221);
}

double NNfunction_sb_sRcR::synapse0x1a07b60() {
   return (neuron0x19ffed0()*0.0366769);
}

double NNfunction_sb_sRcR::synapse0x1a07ba0() {
   return (neuron0x1a00210()*-0.001428);
}

double NNfunction_sb_sRcR::synapse0x1a07be0() {
   return (neuron0x1a00550()*0.0463649);
}

double NNfunction_sb_sRcR::synapse0x1a07c20() {
   return (neuron0x1a00890()*0.0114347);
}

double NNfunction_sb_sRcR::synapse0x1a07c60() {
   return (neuron0x1a00bd0()*-0.0103434);
}

double NNfunction_sb_sRcR::synapse0x1a07ca0() {
   return (neuron0x1a00f10()*0.035443);
}

double NNfunction_sb_sRcR::synapse0x1a07ce0() {
   return (neuron0x1a01250()*0.0290908);
}

double NNfunction_sb_sRcR::synapse0x1a07d20() {
   return (neuron0x1a01590()*-0.0331215);
}

double NNfunction_sb_sRcR::synapse0x17c8fe0() {
   return (neuron0x1a018d0()*0.0176307);
}

double NNfunction_sb_sRcR::synapse0x17c9020() {
   return (neuron0x1a01c10()*-0.0596861);
}

double NNfunction_sb_sRcR::synapse0x17c9060() {
   return (neuron0x1a01f50()*-0.0319941);
}

double NNfunction_sb_sRcR::synapse0x17c90a0() {
   return (neuron0x1a02290()*-0.0283985);
}

double NNfunction_sb_sRcR::synapse0x17c90e0() {
   return (neuron0x1a025d0()*0.0232249);
}

double NNfunction_sb_sRcR::synapse0x17c9120() {
   return (neuron0x1a02910()*-0.00137133);
}

double NNfunction_sb_sRcR::synapse0x17c9160() {
   return (neuron0x1a02c50()*-0.147912);
}

double NNfunction_sb_sRcR::synapse0x1a07970() {
   return (neuron0x1a02f90()*-0.00405796);
}

double NNfunction_sb_sRcR::synapse0x1a079b0() {
   return (neuron0x1a034f0()*0.00815153);
}

double NNfunction_sb_sRcR::synapse0x17c92b0() {
   return (neuron0x1a03710()*1.64893);
}

double NNfunction_sb_sRcR::synapse0x17c92f0() {
   return (neuron0x1a03a50()*-0.0134371);
}

double NNfunction_sb_sRcR::synapse0x17c9330() {
   return (neuron0x1a03d90()*0.00527863);
}

double NNfunction_sb_sRcR::synapse0x17c9370() {
   return (neuron0x1a040d0()*0.00800585);
}

double NNfunction_sb_sRcR::synapse0x17c93b0() {
   return (neuron0x1a04410()*-0.0236342);
}

double NNfunction_sb_sRcR::synapse0x1a08570() {
   return (neuron0x1a04750()*0.0110541);
}

double NNfunction_sb_sRcR::synapse0x1a088f0() {
   return (neuron0x19ffb90()*-0.114839);
}

double NNfunction_sb_sRcR::synapse0x1a08930() {
   return (neuron0x19ffed0()*0.220864);
}

double NNfunction_sb_sRcR::synapse0x1a08970() {
   return (neuron0x1a00210()*-0.351801);
}

double NNfunction_sb_sRcR::synapse0x1a089b0() {
   return (neuron0x1a00550()*0.194464);
}

double NNfunction_sb_sRcR::synapse0x1a089f0() {
   return (neuron0x1a00890()*0.814905);
}

double NNfunction_sb_sRcR::synapse0x1a08a30() {
   return (neuron0x1a00bd0()*-0.168377);
}

double NNfunction_sb_sRcR::synapse0x1a08a70() {
   return (neuron0x1a00f10()*-0.536191);
}

double NNfunction_sb_sRcR::synapse0x1a08ab0() {
   return (neuron0x1a01250()*0.396042);
}

double NNfunction_sb_sRcR::synapse0x1a08af0() {
   return (neuron0x1a01590()*0.597488);
}

double NNfunction_sb_sRcR::synapse0x1a08b30() {
   return (neuron0x1a018d0()*-0.559457);
}

double NNfunction_sb_sRcR::synapse0x1a08b70() {
   return (neuron0x1a01c10()*0.332032);
}

double NNfunction_sb_sRcR::synapse0x1a08bb0() {
   return (neuron0x1a01f50()*-0.474036);
}

double NNfunction_sb_sRcR::synapse0x1a08bf0() {
   return (neuron0x1a02290()*-0.549883);
}

double NNfunction_sb_sRcR::synapse0x1a08c30() {
   return (neuron0x1a025d0()*-0.125848);
}

double NNfunction_sb_sRcR::synapse0x1a08c70() {
   return (neuron0x1a02910()*-0.506835);
}

double NNfunction_sb_sRcR::synapse0x1a08cb0() {
   return (neuron0x1a02c50()*0.575305);
}

double NNfunction_sb_sRcR::synapse0x1a08740() {
   return (neuron0x1a02f90()*0.0561095);
}

double NNfunction_sb_sRcR::synapse0x1a08780() {
   return (neuron0x1a034f0()*-0.0255598);
}

double NNfunction_sb_sRcR::synapse0x1a08e00() {
   return (neuron0x1a03710()*0.232297);
}

double NNfunction_sb_sRcR::synapse0x1a08e40() {
   return (neuron0x1a03a50()*-0.0670029);
}

double NNfunction_sb_sRcR::synapse0x1a08e80() {
   return (neuron0x1a03d90()*-0.766848);
}

double NNfunction_sb_sRcR::synapse0x1a08ec0() {
   return (neuron0x1a040d0()*-0.0941295);
}

double NNfunction_sb_sRcR::synapse0x1a08f00() {
   return (neuron0x1a04410()*-0.886354);
}

double NNfunction_sb_sRcR::synapse0x1a08f40() {
   return (neuron0x1a04750()*0.501454);
}

double NNfunction_sb_sRcR::synapse0x1a092c0() {
   return (neuron0x19ffb90()*-0.686207);
}

double NNfunction_sb_sRcR::synapse0x1a09300() {
   return (neuron0x19ffed0()*-0.0660881);
}

double NNfunction_sb_sRcR::synapse0x1a09340() {
   return (neuron0x1a00210()*-0.802684);
}

double NNfunction_sb_sRcR::synapse0x1a09380() {
   return (neuron0x1a00550()*0.617756);
}

double NNfunction_sb_sRcR::synapse0x1a093c0() {
   return (neuron0x1a00890()*0.0632298);
}

double NNfunction_sb_sRcR::synapse0x1a09400() {
   return (neuron0x1a00bd0()*-0.1448);
}

double NNfunction_sb_sRcR::synapse0x1a09440() {
   return (neuron0x1a00f10()*0.473017);
}

double NNfunction_sb_sRcR::synapse0x1a09480() {
   return (neuron0x1a01250()*1.02037);
}

double NNfunction_sb_sRcR::synapse0x1a094c0() {
   return (neuron0x1a01590()*-0.51316);
}

double NNfunction_sb_sRcR::synapse0x1a09500() {
   return (neuron0x1a018d0()*-1.30452);
}

double NNfunction_sb_sRcR::synapse0x1a09540() {
   return (neuron0x1a01c10()*0.825134);
}

double NNfunction_sb_sRcR::synapse0x1a09580() {
   return (neuron0x1a01f50()*0.15898);
}

double NNfunction_sb_sRcR::synapse0x1a095c0() {
   return (neuron0x1a02290()*-0.0401949);
}

double NNfunction_sb_sRcR::synapse0x1a09600() {
   return (neuron0x1a025d0()*0.230511);
}

double NNfunction_sb_sRcR::synapse0x1a09640() {
   return (neuron0x1a02910()*-0.0712658);
}

double NNfunction_sb_sRcR::synapse0x1a09680() {
   return (neuron0x1a02c50()*-0.755857);
}

double NNfunction_sb_sRcR::synapse0x1a09110() {
   return (neuron0x1a02f90()*1.19639);
}

double NNfunction_sb_sRcR::synapse0x1a09150() {
   return (neuron0x1a034f0()*-0.185796);
}

double NNfunction_sb_sRcR::synapse0x1a097d0() {
   return (neuron0x1a03710()*-0.979048);
}

double NNfunction_sb_sRcR::synapse0x1a09810() {
   return (neuron0x1a03a50()*-0.893562);
}

double NNfunction_sb_sRcR::synapse0x1a09850() {
   return (neuron0x1a03d90()*0.603219);
}

double NNfunction_sb_sRcR::synapse0x1a09890() {
   return (neuron0x1a040d0()*0.492074);
}

double NNfunction_sb_sRcR::synapse0x1a098d0() {
   return (neuron0x1a04410()*-0.263411);
}

double NNfunction_sb_sRcR::synapse0x1a09910() {
   return (neuron0x1a04750()*-0.199203);
}

double NNfunction_sb_sRcR::synapse0x1a033e0() {
   return (neuron0x19ffb90()*-0.173054);
}

double NNfunction_sb_sRcR::synapse0x1a03420() {
   return (neuron0x19ffed0()*0.0380862);
}

double NNfunction_sb_sRcR::synapse0x1a03460() {
   return (neuron0x1a00210()*0.937209);
}

double NNfunction_sb_sRcR::synapse0x1a034a0() {
   return (neuron0x1a00550()*-0.87908);
}

double NNfunction_sb_sRcR::synapse0x1a09ea0() {
   return (neuron0x1a00890()*-0.225075);
}

double NNfunction_sb_sRcR::synapse0x1a09ee0() {
   return (neuron0x1a00bd0()*0.298343);
}

double NNfunction_sb_sRcR::synapse0x1a09f20() {
   return (neuron0x1a00f10()*-0.452061);
}

double NNfunction_sb_sRcR::synapse0x1a09f60() {
   return (neuron0x1a01250()*0.0288548);
}

double NNfunction_sb_sRcR::synapse0x1a09fa0() {
   return (neuron0x1a01590()*0.693941);
}

double NNfunction_sb_sRcR::synapse0x1a09fe0() {
   return (neuron0x1a018d0()*0.549302);
}

double NNfunction_sb_sRcR::synapse0x1a0a020() {
   return (neuron0x1a01c10()*-0.66058);
}

double NNfunction_sb_sRcR::synapse0x1a0a060() {
   return (neuron0x1a01f50()*-0.47905);
}

double NNfunction_sb_sRcR::synapse0x1a0a0a0() {
   return (neuron0x1a02290()*-0.579993);
}

double NNfunction_sb_sRcR::synapse0x1a0a0e0() {
   return (neuron0x1a025d0()*0.0381661);
}

double NNfunction_sb_sRcR::synapse0x1a0a120() {
   return (neuron0x1a02910()*-1.04884);
}

double NNfunction_sb_sRcR::synapse0x1a0a160() {
   return (neuron0x1a02c50()*0.633625);
}

double NNfunction_sb_sRcR::synapse0x1a09ae0() {
   return (neuron0x1a02f90()*-1.06463);
}

double NNfunction_sb_sRcR::synapse0x1a09b20() {
   return (neuron0x1a034f0()*0.823182);
}

double NNfunction_sb_sRcR::synapse0x1a0a2b0() {
   return (neuron0x1a03710()*0.118215);
}

double NNfunction_sb_sRcR::synapse0x1a0a2f0() {
   return (neuron0x1a03a50()*-0.367116);
}

double NNfunction_sb_sRcR::synapse0x1a0a330() {
   return (neuron0x1a03d90()*-0.29123);
}

double NNfunction_sb_sRcR::synapse0x1a0a370() {
   return (neuron0x1a040d0()*-0.273418);
}

double NNfunction_sb_sRcR::synapse0x1a0a3b0() {
   return (neuron0x1a04410()*0.960939);
}

double NNfunction_sb_sRcR::synapse0x1a0a3f0() {
   return (neuron0x1a04750()*0.331358);
}

double NNfunction_sb_sRcR::synapse0x1a0a770() {
   return (neuron0x19ffb90()*-0.00463433);
}

double NNfunction_sb_sRcR::synapse0x1a0a7b0() {
   return (neuron0x19ffed0()*-0.110636);
}

double NNfunction_sb_sRcR::synapse0x1a0a7f0() {
   return (neuron0x1a00210()*-0.0296308);
}

double NNfunction_sb_sRcR::synapse0x1a0a830() {
   return (neuron0x1a00550()*-3.74197);
}

double NNfunction_sb_sRcR::synapse0x1a0a870() {
   return (neuron0x1a00890()*0.0315527);
}

double NNfunction_sb_sRcR::synapse0x1a0a8b0() {
   return (neuron0x1a00bd0()*-0.00753533);
}

double NNfunction_sb_sRcR::synapse0x1a0a8f0() {
   return (neuron0x1a00f10()*0.00318199);
}

double NNfunction_sb_sRcR::synapse0x1a0a930() {
   return (neuron0x1a01250()*-0.0192804);
}

double NNfunction_sb_sRcR::synapse0x1a0a970() {
   return (neuron0x1a01590()*0.0242889);
}

double NNfunction_sb_sRcR::synapse0x1a0a9b0() {
   return (neuron0x1a018d0()*0.00805235);
}

double NNfunction_sb_sRcR::synapse0x1a0a9f0() {
   return (neuron0x1a01c10()*0.0130127);
}

double NNfunction_sb_sRcR::synapse0x1a0aa30() {
   return (neuron0x1a01f50()*0.0263621);
}

double NNfunction_sb_sRcR::synapse0x1a0aa70() {
   return (neuron0x1a02290()*-0.0101576);
}

double NNfunction_sb_sRcR::synapse0x1a0aab0() {
   return (neuron0x1a025d0()*-0.0523026);
}

double NNfunction_sb_sRcR::synapse0x1a0aaf0() {
   return (neuron0x1a02910()*0.0286486);
}

double NNfunction_sb_sRcR::synapse0x1a0ab30() {
   return (neuron0x1a02c50()*0.0155531);
}

double NNfunction_sb_sRcR::synapse0x1a0a5c0() {
   return (neuron0x1a02f90()*-0.0263691);
}

double NNfunction_sb_sRcR::synapse0x1a0a600() {
   return (neuron0x1a034f0()*-0.0208529);
}

double NNfunction_sb_sRcR::synapse0x1a0ac80() {
   return (neuron0x1a03710()*0.250253);
}

double NNfunction_sb_sRcR::synapse0x1a0acc0() {
   return (neuron0x1a03a50()*-0.0612199);
}

double NNfunction_sb_sRcR::synapse0x1a0ad00() {
   return (neuron0x1a03d90()*-0.0279293);
}

double NNfunction_sb_sRcR::synapse0x1a0ad40() {
   return (neuron0x1a040d0()*-0.0132091);
}

double NNfunction_sb_sRcR::synapse0x1a0ad80() {
   return (neuron0x1a04410()*-0.0319699);
}

double NNfunction_sb_sRcR::synapse0x1a0adc0() {
   return (neuron0x1a04750()*-0.0268197);
}

double NNfunction_sb_sRcR::synapse0x1a0b140() {
   return (neuron0x19ffb90()*-0.184541);
}

double NNfunction_sb_sRcR::synapse0x1a0b180() {
   return (neuron0x19ffed0()*0.229766);
}

double NNfunction_sb_sRcR::synapse0x1a0b1c0() {
   return (neuron0x1a00210()*0.217919);
}

double NNfunction_sb_sRcR::synapse0x1a0b200() {
   return (neuron0x1a00550()*-1.12891);
}

double NNfunction_sb_sRcR::synapse0x1a0b240() {
   return (neuron0x1a00890()*0.210775);
}

double NNfunction_sb_sRcR::synapse0x1a0b280() {
   return (neuron0x1a00bd0()*-0.019518);
}

double NNfunction_sb_sRcR::synapse0x1a0b2c0() {
   return (neuron0x1a00f10()*0.271051);
}

double NNfunction_sb_sRcR::synapse0x1a0b300() {
   return (neuron0x1a01250()*0.0810711);
}

double NNfunction_sb_sRcR::synapse0x1a0b340() {
   return (neuron0x1a01590()*-0.245033);
}

double NNfunction_sb_sRcR::synapse0x1a0b380() {
   return (neuron0x1a018d0()*-0.461825);
}

double NNfunction_sb_sRcR::synapse0x1a0b3c0() {
   return (neuron0x1a01c10()*0.177192);
}

double NNfunction_sb_sRcR::synapse0x1a0b400() {
   return (neuron0x1a01f50()*-0.421454);
}

double NNfunction_sb_sRcR::synapse0x1a0b440() {
   return (neuron0x1a02290()*0.141381);
}

double NNfunction_sb_sRcR::synapse0x1a0b480() {
   return (neuron0x1a025d0()*-0.59923);
}

double NNfunction_sb_sRcR::synapse0x1a0b4c0() {
   return (neuron0x1a02910()*0.389567);
}

double NNfunction_sb_sRcR::synapse0x1a0b500() {
   return (neuron0x1a02c50()*0.339764);
}

double NNfunction_sb_sRcR::synapse0x1a0af90() {
   return (neuron0x1a02f90()*0.097332);
}

double NNfunction_sb_sRcR::synapse0x1a0afd0() {
   return (neuron0x1a034f0()*-0.0955614);
}

double NNfunction_sb_sRcR::synapse0x1a07d60() {
   return (neuron0x1a03710()*-0.0773299);
}

double NNfunction_sb_sRcR::synapse0x1a07da0() {
   return (neuron0x1a03a50()*0.687695);
}

double NNfunction_sb_sRcR::synapse0x1a07de0() {
   return (neuron0x1a03d90()*0.216363);
}

double NNfunction_sb_sRcR::synapse0x1a07e20() {
   return (neuron0x1a040d0()*0.295551);
}

double NNfunction_sb_sRcR::synapse0x1a07e60() {
   return (neuron0x1a04410()*-0.126707);
}

double NNfunction_sb_sRcR::synapse0x1a07ea0() {
   return (neuron0x1a04750()*0.131314);
}

double NNfunction_sb_sRcR::synapse0x1a08220() {
   return (neuron0x19ffb90()*-0.150978);
}

double NNfunction_sb_sRcR::synapse0x1a08260() {
   return (neuron0x19ffed0()*0.0163645);
}

double NNfunction_sb_sRcR::synapse0x1a082a0() {
   return (neuron0x1a00210()*0.0214785);
}

double NNfunction_sb_sRcR::synapse0x1a082e0() {
   return (neuron0x1a00550()*-2.51044);
}

double NNfunction_sb_sRcR::synapse0x1a08320() {
   return (neuron0x1a00890()*0.0254974);
}

double NNfunction_sb_sRcR::synapse0x1a08360() {
   return (neuron0x1a00bd0()*-0.0315552);
}

double NNfunction_sb_sRcR::synapse0x1a083a0() {
   return (neuron0x1a00f10()*-0.192981);
}

double NNfunction_sb_sRcR::synapse0x1a083e0() {
   return (neuron0x1a01250()*0.0272657);
}

double NNfunction_sb_sRcR::synapse0x1a08420() {
   return (neuron0x1a01590()*0.0250215);
}

double NNfunction_sb_sRcR::synapse0x1a08460() {
   return (neuron0x1a018d0()*-0.0584683);
}

double NNfunction_sb_sRcR::synapse0x1a084a0() {
   return (neuron0x1a01c10()*0.0299275);
}

double NNfunction_sb_sRcR::synapse0x1a084e0() {
   return (neuron0x1a01f50()*-0.0386689);
}

double NNfunction_sb_sRcR::synapse0x1a08520() {
   return (neuron0x1a02290()*-0.0555583);
}

double NNfunction_sb_sRcR::synapse0x1a0c660() {
   return (neuron0x1a025d0()*-0.0162333);
}

double NNfunction_sb_sRcR::synapse0x1a0c6a0() {
   return (neuron0x1a02910()*0.111391);
}

double NNfunction_sb_sRcR::synapse0x1a0c6e0() {
   return (neuron0x1a02c50()*-0.512467);
}

double NNfunction_sb_sRcR::synapse0x1a08070() {
   return (neuron0x1a02f90()*0.158356);
}

double NNfunction_sb_sRcR::synapse0x1a080b0() {
   return (neuron0x1a034f0()*-0.0677523);
}

double NNfunction_sb_sRcR::synapse0x1a0c830() {
   return (neuron0x1a03710()*-0.759308);
}

double NNfunction_sb_sRcR::synapse0x1a0c870() {
   return (neuron0x1a03a50()*-0.0192266);
}

double NNfunction_sb_sRcR::synapse0x1a0c8b0() {
   return (neuron0x1a03d90()*0.0182597);
}

double NNfunction_sb_sRcR::synapse0x1a0c8f0() {
   return (neuron0x1a040d0()*0.211468);
}

double NNfunction_sb_sRcR::synapse0x1a0c930() {
   return (neuron0x1a04410()*0.00829798);
}

double NNfunction_sb_sRcR::synapse0x1a0c970() {
   return (neuron0x1a04750()*0.096213);
}

double NNfunction_sb_sRcR::synapse0x1a0ccf0() {
   return (neuron0x19ffb90()*-0.324544);
}

double NNfunction_sb_sRcR::synapse0x1a0cd30() {
   return (neuron0x19ffed0()*-0.150129);
}

double NNfunction_sb_sRcR::synapse0x1a0cd70() {
   return (neuron0x1a00210()*-0.0571756);
}

double NNfunction_sb_sRcR::synapse0x1a0cdb0() {
   return (neuron0x1a00550()*0.621439);
}

double NNfunction_sb_sRcR::synapse0x1a0cdf0() {
   return (neuron0x1a00890()*0.500843);
}

double NNfunction_sb_sRcR::synapse0x1a0ce30() {
   return (neuron0x1a00bd0()*0.486031);
}

double NNfunction_sb_sRcR::synapse0x1a0ce70() {
   return (neuron0x1a00f10()*-0.277177);
}

double NNfunction_sb_sRcR::synapse0x1a0ceb0() {
   return (neuron0x1a01250()*0.705638);
}

double NNfunction_sb_sRcR::synapse0x1a0cef0() {
   return (neuron0x1a01590()*-0.169264);
}

double NNfunction_sb_sRcR::synapse0x1a0cf30() {
   return (neuron0x1a018d0()*-0.314739);
}

double NNfunction_sb_sRcR::synapse0x1a0cf70() {
   return (neuron0x1a01c10()*-0.326238);
}

double NNfunction_sb_sRcR::synapse0x1a0cfb0() {
   return (neuron0x1a01f50()*0.158889);
}

double NNfunction_sb_sRcR::synapse0x1a0cff0() {
   return (neuron0x1a02290()*-0.251326);
}

double NNfunction_sb_sRcR::synapse0x1a0d030() {
   return (neuron0x1a025d0()*-0.0338589);
}

double NNfunction_sb_sRcR::synapse0x1a0d070() {
   return (neuron0x1a02910()*0.0512183);
}

double NNfunction_sb_sRcR::synapse0x1a0d0b0() {
   return (neuron0x1a02c50()*-0.0309529);
}

double NNfunction_sb_sRcR::synapse0x1a0cb40() {
   return (neuron0x1a02f90()*0.357248);
}

double NNfunction_sb_sRcR::synapse0x1a0cb80() {
   return (neuron0x1a034f0()*-0.00401899);
}

double NNfunction_sb_sRcR::synapse0x1a0d200() {
   return (neuron0x1a03710()*0.291642);
}

double NNfunction_sb_sRcR::synapse0x1a0d240() {
   return (neuron0x1a03a50()*-0.358052);
}

double NNfunction_sb_sRcR::synapse0x1a0d280() {
   return (neuron0x1a03d90()*-0.29678);
}

double NNfunction_sb_sRcR::synapse0x1a0d2c0() {
   return (neuron0x1a040d0()*0.313539);
}

double NNfunction_sb_sRcR::synapse0x1a0d300() {
   return (neuron0x1a04410()*0.0137197);
}

double NNfunction_sb_sRcR::synapse0x1a0d340() {
   return (neuron0x1a04750()*0.138095);
}

double NNfunction_sb_sRcR::synapse0x1a0d6c0() {
   return (neuron0x19ffb90()*-0.516623);
}

double NNfunction_sb_sRcR::synapse0x1a0d700() {
   return (neuron0x19ffed0()*1.05873);
}

double NNfunction_sb_sRcR::synapse0x1a0d740() {
   return (neuron0x1a00210()*-0.195697);
}

double NNfunction_sb_sRcR::synapse0x1a0d780() {
   return (neuron0x1a00550()*0.353874);
}

double NNfunction_sb_sRcR::synapse0x1a0d7c0() {
   return (neuron0x1a00890()*0.2608);
}

double NNfunction_sb_sRcR::synapse0x1a0d800() {
   return (neuron0x1a00bd0()*0.0648037);
}

double NNfunction_sb_sRcR::synapse0x1a0d840() {
   return (neuron0x1a00f10()*0.582028);
}

double NNfunction_sb_sRcR::synapse0x1a0d880() {
   return (neuron0x1a01250()*-0.0563091);
}

double NNfunction_sb_sRcR::synapse0x1a0d8c0() {
   return (neuron0x1a01590()*0.305514);
}

double NNfunction_sb_sRcR::synapse0x1a0d900() {
   return (neuron0x1a018d0()*1.52986);
}

double NNfunction_sb_sRcR::synapse0x1a0d940() {
   return (neuron0x1a01c10()*-0.67233);
}

double NNfunction_sb_sRcR::synapse0x1a0d980() {
   return (neuron0x1a01f50()*0.177676);
}

double NNfunction_sb_sRcR::synapse0x1a0d9c0() {
   return (neuron0x1a02290()*-0.394275);
}

double NNfunction_sb_sRcR::synapse0x1a0da00() {
   return (neuron0x1a025d0()*0.8412);
}

double NNfunction_sb_sRcR::synapse0x1a0da40() {
   return (neuron0x1a02910()*0.505628);
}

double NNfunction_sb_sRcR::synapse0x1a0da80() {
   return (neuron0x1a02c50()*-0.527242);
}

double NNfunction_sb_sRcR::synapse0x1a0d510() {
   return (neuron0x1a02f90()*-0.553309);
}

double NNfunction_sb_sRcR::synapse0x1a0d550() {
   return (neuron0x1a034f0()*0.438212);
}

double NNfunction_sb_sRcR::synapse0x1a0dbd0() {
   return (neuron0x1a03710()*0.790867);
}

double NNfunction_sb_sRcR::synapse0x1a0dc10() {
   return (neuron0x1a03a50()*-0.137728);
}

double NNfunction_sb_sRcR::synapse0x1a0dc50() {
   return (neuron0x1a03d90()*0.450699);
}

double NNfunction_sb_sRcR::synapse0x1a0dc90() {
   return (neuron0x1a040d0()*0.373685);
}

double NNfunction_sb_sRcR::synapse0x1a0dcd0() {
   return (neuron0x1a04410()*0.181946);
}

double NNfunction_sb_sRcR::synapse0x1a0dd10() {
   return (neuron0x1a04750()*0.443144);
}

double NNfunction_sb_sRcR::synapse0x1a0e090() {
   return (neuron0x19ffb90()*0.316403);
}

double NNfunction_sb_sRcR::synapse0x1a0e0d0() {
   return (neuron0x19ffed0()*-0.489376);
}

double NNfunction_sb_sRcR::synapse0x1a0e110() {
   return (neuron0x1a00210()*0.445807);
}

double NNfunction_sb_sRcR::synapse0x1a0e150() {
   return (neuron0x1a00550()*-0.678068);
}

double NNfunction_sb_sRcR::synapse0x1a0e190() {
   return (neuron0x1a00890()*-1.02425);
}

double NNfunction_sb_sRcR::synapse0x1a0e1d0() {
   return (neuron0x1a00bd0()*0.370245);
}

double NNfunction_sb_sRcR::synapse0x1a0e210() {
   return (neuron0x1a00f10()*-0.976794);
}

double NNfunction_sb_sRcR::synapse0x1a0e250() {
   return (neuron0x1a01250()*0.21087);
}

double NNfunction_sb_sRcR::synapse0x1a0e290() {
   return (neuron0x1a01590()*0.914976);
}

double NNfunction_sb_sRcR::synapse0x1a0e2d0() {
   return (neuron0x1a018d0()*0.351595);
}

double NNfunction_sb_sRcR::synapse0x1a0e310() {
   return (neuron0x1a01c10()*0.809066);
}

double NNfunction_sb_sRcR::synapse0x1a0e350() {
   return (neuron0x1a01f50()*-0.0027424);
}

double NNfunction_sb_sRcR::synapse0x1a0e390() {
   return (neuron0x1a02290()*-0.214567);
}

double NNfunction_sb_sRcR::synapse0x1a0e3d0() {
   return (neuron0x1a025d0()*0.893961);
}

double NNfunction_sb_sRcR::synapse0x1a0e410() {
   return (neuron0x1a02910()*0.744884);
}

double NNfunction_sb_sRcR::synapse0x1a0e450() {
   return (neuron0x1a02c50()*0.253159);
}

double NNfunction_sb_sRcR::synapse0x1a0dee0() {
   return (neuron0x1a02f90()*-0.381462);
}

double NNfunction_sb_sRcR::synapse0x1a0df20() {
   return (neuron0x1a034f0()*1.33837);
}

double NNfunction_sb_sRcR::synapse0x1a0e5a0() {
   return (neuron0x1a03710()*-0.128255);
}

double NNfunction_sb_sRcR::synapse0x1a0e5e0() {
   return (neuron0x1a03a50()*1.56051);
}

double NNfunction_sb_sRcR::synapse0x1a0e620() {
   return (neuron0x1a03d90()*-0.547139);
}

double NNfunction_sb_sRcR::synapse0x1a0e660() {
   return (neuron0x1a040d0()*-0.817952);
}

double NNfunction_sb_sRcR::synapse0x1a0e6a0() {
   return (neuron0x1a04410()*0.236273);
}

double NNfunction_sb_sRcR::synapse0x1a0e6e0() {
   return (neuron0x1a04750()*-0.249211);
}

double NNfunction_sb_sRcR::synapse0x1a0ea60() {
   return (neuron0x19ffb90()*-0.297205);
}

double NNfunction_sb_sRcR::synapse0x19ffdb0() {
   return (neuron0x19ffed0()*-0.00114247);
}

double NNfunction_sb_sRcR::synapse0x19ffdf0() {
   return (neuron0x1a00210()*-0.593973);
}

double NNfunction_sb_sRcR::synapse0x1a000f0() {
   return (neuron0x1a00550()*-0.844334);
}

double NNfunction_sb_sRcR::synapse0x1a00130() {
   return (neuron0x1a00890()*0.462093);
}

double NNfunction_sb_sRcR::synapse0x1a00430() {
   return (neuron0x1a00bd0()*0.233257);
}

double NNfunction_sb_sRcR::synapse0x1a00470() {
   return (neuron0x1a00f10()*0.626711);
}

double NNfunction_sb_sRcR::synapse0x1a00770() {
   return (neuron0x1a01250()*-0.68886);
}

double NNfunction_sb_sRcR::synapse0x1a007b0() {
   return (neuron0x1a01590()*-0.445848);
}

double NNfunction_sb_sRcR::synapse0x1a00ab0() {
   return (neuron0x1a018d0()*-0.572112);
}

double NNfunction_sb_sRcR::synapse0x1a00af0() {
   return (neuron0x1a01c10()*-0.355408);
}

double NNfunction_sb_sRcR::synapse0x1a00df0() {
   return (neuron0x1a01f50()*0.0525593);
}

double NNfunction_sb_sRcR::synapse0x1a00e30() {
   return (neuron0x1a02290()*0.122237);
}

double NNfunction_sb_sRcR::synapse0x1a01130() {
   return (neuron0x1a025d0()*0.0826166);
}

double NNfunction_sb_sRcR::synapse0x1a01170() {
   return (neuron0x1a02910()*0.0873754);
}

double NNfunction_sb_sRcR::synapse0x1a01470() {
   return (neuron0x1a02c50()*-0.0466675);
}

double NNfunction_sb_sRcR::synapse0x1a014b0() {
   return (neuron0x1a02f90()*-0.282884);
}

double NNfunction_sb_sRcR::synapse0x1a017b0() {
   return (neuron0x1a034f0()*-0.33521);
}

double NNfunction_sb_sRcR::synapse0x1a017f0() {
   return (neuron0x1a03710()*-0.506649);
}

double NNfunction_sb_sRcR::synapse0x1a01af0() {
   return (neuron0x1a03a50()*-0.264503);
}

double NNfunction_sb_sRcR::synapse0x1a01b30() {
   return (neuron0x1a03d90()*0.00143639);
}

double NNfunction_sb_sRcR::synapse0x1a01e30() {
   return (neuron0x1a040d0()*-0.0289186);
}

double NNfunction_sb_sRcR::synapse0x1a01e70() {
   return (neuron0x1a04410()*0.203386);
}

double NNfunction_sb_sRcR::synapse0x1a02170() {
   return (neuron0x1a04750()*-0.473764);
}

double NNfunction_sb_sRcR::synapse0x1a021b0() {
   return (neuron0x19ffb90()*-0.0344733);
}

double NNfunction_sb_sRcR::synapse0x1a02e70() {
   return (neuron0x19ffed0()*0.0322339);
}

double NNfunction_sb_sRcR::synapse0x1a02eb0() {
   return (neuron0x1a00210()*0.00474321);
}

double NNfunction_sb_sRcR::synapse0x1a0e8b0() {
   return (neuron0x1a00550()*7.98241);
}

double NNfunction_sb_sRcR::synapse0x1a0e8f0() {
   return (neuron0x1a00890()*-0.0123895);
}

double NNfunction_sb_sRcR::synapse0x1a031b0() {
   return (neuron0x1a00bd0()*-0.0230683);
}

double NNfunction_sb_sRcR::synapse0x1a031f0() {
   return (neuron0x1a00f10()*-0.033624);
}

double NNfunction_sb_sRcR::synapse0x17bac60() {
   return (neuron0x1a01250()*0.0128511);
}

double NNfunction_sb_sRcR::synapse0x17baca0() {
   return (neuron0x1a01590()*-0.00567054);
}

double NNfunction_sb_sRcR::synapse0x1a03930() {
   return (neuron0x1a018d0()*0.0315186);
}

double NNfunction_sb_sRcR::synapse0x1a03970() {
   return (neuron0x1a01c10()*0.0288901);
}

double NNfunction_sb_sRcR::synapse0x1a03c70() {
   return (neuron0x1a01f50()*0.0393709);
}

double NNfunction_sb_sRcR::synapse0x1a03cb0() {
   return (neuron0x1a02290()*0.0488011);
}

double NNfunction_sb_sRcR::synapse0x1a03fb0() {
   return (neuron0x1a025d0()*-0.0217325);
}

double NNfunction_sb_sRcR::synapse0x1a03ff0() {
   return (neuron0x1a02910()*-0.0162439);
}

double NNfunction_sb_sRcR::synapse0x1a042f0() {
   return (neuron0x1a02c50()*0.195073);
}

double NNfunction_sb_sRcR::synapse0x1a04330() {
   return (neuron0x1a02f90()*0.00769932);
}

double NNfunction_sb_sRcR::synapse0x1a04630() {
   return (neuron0x1a034f0()*0.00578237);
}

double NNfunction_sb_sRcR::synapse0x1a04670() {
   return (neuron0x1a03710()*0.194283);
}

double NNfunction_sb_sRcR::synapse0x1a04970() {
   return (neuron0x1a03a50()*0.0266929);
}

double NNfunction_sb_sRcR::synapse0x1a049b0() {
   return (neuron0x1a03d90()*-0.00633646);
}

double NNfunction_sb_sRcR::synapse0x1a024b0() {
   return (neuron0x1a040d0()*0.0220391);
}

double NNfunction_sb_sRcR::synapse0x1a024f0() {
   return (neuron0x1a04410()*0.00485849);
}

double NNfunction_sb_sRcR::synapse0x1a107d0() {
   return (neuron0x1a04750()*0.0566905);
}

double NNfunction_sb_sRcR::synapse0x1a10b50() {
   return (neuron0x19ffb90()*-0.928835);
}

double NNfunction_sb_sRcR::synapse0x1a10b90() {
   return (neuron0x19ffed0()*0.119446);
}

double NNfunction_sb_sRcR::synapse0x1a10bd0() {
   return (neuron0x1a00210()*-0.221559);
}

double NNfunction_sb_sRcR::synapse0x1a10c10() {
   return (neuron0x1a00550()*-0.705405);
}

double NNfunction_sb_sRcR::synapse0x1a10c50() {
   return (neuron0x1a00890()*-0.0909088);
}

double NNfunction_sb_sRcR::synapse0x1a10c90() {
   return (neuron0x1a00bd0()*0.042734);
}

double NNfunction_sb_sRcR::synapse0x1a10cd0() {
   return (neuron0x1a00f10()*-0.811694);
}

double NNfunction_sb_sRcR::synapse0x1a10d10() {
   return (neuron0x1a01250()*-0.0245073);
}

double NNfunction_sb_sRcR::synapse0x1a10d50() {
   return (neuron0x1a01590()*0.0246231);
}

double NNfunction_sb_sRcR::synapse0x1a10d90() {
   return (neuron0x1a018d0()*0.230564);
}

double NNfunction_sb_sRcR::synapse0x1a10dd0() {
   return (neuron0x1a01c10()*-0.42894);
}

double NNfunction_sb_sRcR::synapse0x1a10e10() {
   return (neuron0x1a01f50()*-0.509357);
}

double NNfunction_sb_sRcR::synapse0x1a10e50() {
   return (neuron0x1a02290()*0.861116);
}

double NNfunction_sb_sRcR::synapse0x1a10e90() {
   return (neuron0x1a025d0()*0.564867);
}

double NNfunction_sb_sRcR::synapse0x1a10ed0() {
   return (neuron0x1a02910()*0.541343);
}

double NNfunction_sb_sRcR::synapse0x1a10f10() {
   return (neuron0x1a02c50()*-0.0504173);
}

double NNfunction_sb_sRcR::synapse0x1a109a0() {
   return (neuron0x1a02f90()*-1.39258);
}

double NNfunction_sb_sRcR::synapse0x1a109e0() {
   return (neuron0x1a034f0()*0.488803);
}

double NNfunction_sb_sRcR::synapse0x1a11060() {
   return (neuron0x1a03710()*0.0788684);
}

double NNfunction_sb_sRcR::synapse0x1a110a0() {
   return (neuron0x1a03a50()*0.158702);
}

double NNfunction_sb_sRcR::synapse0x1a110e0() {
   return (neuron0x1a03d90()*-0.5248);
}

double NNfunction_sb_sRcR::synapse0x1a11120() {
   return (neuron0x1a040d0()*0.335022);
}

double NNfunction_sb_sRcR::synapse0x1a11160() {
   return (neuron0x1a04410()*-0.706186);
}

double NNfunction_sb_sRcR::synapse0x1a111a0() {
   return (neuron0x1a04750()*0.00534329);
}

double NNfunction_sb_sRcR::synapse0x1a11520() {
   return (neuron0x19ffb90()*0.706742);
}

double NNfunction_sb_sRcR::synapse0x1a11560() {
   return (neuron0x19ffed0()*-0.260361);
}

double NNfunction_sb_sRcR::synapse0x1a115a0() {
   return (neuron0x1a00210()*-1.31968);
}

double NNfunction_sb_sRcR::synapse0x1a115e0() {
   return (neuron0x1a00550()*0.543948);
}

double NNfunction_sb_sRcR::synapse0x1a11620() {
   return (neuron0x1a00890()*-0.296591);
}

double NNfunction_sb_sRcR::synapse0x1a11660() {
   return (neuron0x1a00bd0()*-0.89477);
}

double NNfunction_sb_sRcR::synapse0x1a116a0() {
   return (neuron0x1a00f10()*0.334676);
}

double NNfunction_sb_sRcR::synapse0x1a116e0() {
   return (neuron0x1a01250()*0.0420342);
}

double NNfunction_sb_sRcR::synapse0x1a11720() {
   return (neuron0x1a01590()*0.125469);
}

double NNfunction_sb_sRcR::synapse0x1a11760() {
   return (neuron0x1a018d0()*0.55226);
}

double NNfunction_sb_sRcR::synapse0x1a117a0() {
   return (neuron0x1a01c10()*-1.49228);
}

double NNfunction_sb_sRcR::synapse0x1a117e0() {
   return (neuron0x1a01f50()*-0.00301575);
}

double NNfunction_sb_sRcR::synapse0x1a11820() {
   return (neuron0x1a02290()*-0.332763);
}

double NNfunction_sb_sRcR::synapse0x1a11860() {
   return (neuron0x1a025d0()*-0.375712);
}

double NNfunction_sb_sRcR::synapse0x1a118a0() {
   return (neuron0x1a02910()*0.323363);
}

double NNfunction_sb_sRcR::synapse0x1a118e0() {
   return (neuron0x1a02c50()*-0.550551);
}

double NNfunction_sb_sRcR::synapse0x1a11370() {
   return (neuron0x1a02f90()*0.828351);
}

double NNfunction_sb_sRcR::synapse0x1a113b0() {
   return (neuron0x1a034f0()*0.322761);
}

double NNfunction_sb_sRcR::synapse0x1a11a30() {
   return (neuron0x1a03710()*0.16431);
}

double NNfunction_sb_sRcR::synapse0x1a11a70() {
   return (neuron0x1a03a50()*0.212649);
}

double NNfunction_sb_sRcR::synapse0x1a11ab0() {
   return (neuron0x1a03d90()*-1.40334);
}

double NNfunction_sb_sRcR::synapse0x1a11af0() {
   return (neuron0x1a040d0()*-0.520733);
}

double NNfunction_sb_sRcR::synapse0x1a11b30() {
   return (neuron0x1a04410()*-0.35671);
}

double NNfunction_sb_sRcR::synapse0x1a11b70() {
   return (neuron0x1a04750()*0.134446);
}

double NNfunction_sb_sRcR::synapse0x1a11ef0() {
   return (neuron0x19ffb90()*0.672476);
}

double NNfunction_sb_sRcR::synapse0x1a11f30() {
   return (neuron0x19ffed0()*0.466378);
}

double NNfunction_sb_sRcR::synapse0x1a11f70() {
   return (neuron0x1a00210()*-0.262528);
}

double NNfunction_sb_sRcR::synapse0x1a11fb0() {
   return (neuron0x1a00550()*0.375894);
}

double NNfunction_sb_sRcR::synapse0x1a11ff0() {
   return (neuron0x1a00890()*0.592858);
}

double NNfunction_sb_sRcR::synapse0x1a12030() {
   return (neuron0x1a00bd0()*-0.12511);
}

double NNfunction_sb_sRcR::synapse0x1a12070() {
   return (neuron0x1a00f10()*-0.39507);
}

double NNfunction_sb_sRcR::synapse0x1a120b0() {
   return (neuron0x1a01250()*-0.491083);
}

double NNfunction_sb_sRcR::synapse0x1a120f0() {
   return (neuron0x1a01590()*0.152373);
}

double NNfunction_sb_sRcR::synapse0x1a12130() {
   return (neuron0x1a018d0()*0.244789);
}

double NNfunction_sb_sRcR::synapse0x1a12170() {
   return (neuron0x1a01c10()*-0.0257024);
}

double NNfunction_sb_sRcR::synapse0x1a121b0() {
   return (neuron0x1a01f50()*0.158371);
}

double NNfunction_sb_sRcR::synapse0x1a121f0() {
   return (neuron0x1a02290()*0.569857);
}

double NNfunction_sb_sRcR::synapse0x1a12230() {
   return (neuron0x1a025d0()*0.122506);
}

double NNfunction_sb_sRcR::synapse0x1a12270() {
   return (neuron0x1a02910()*0.398401);
}

double NNfunction_sb_sRcR::synapse0x1a122b0() {
   return (neuron0x1a02c50()*-0.89715);
}

double NNfunction_sb_sRcR::synapse0x1a11d40() {
   return (neuron0x1a02f90()*0.17636);
}

double NNfunction_sb_sRcR::synapse0x1a11d80() {
   return (neuron0x1a034f0()*1.31264);
}

double NNfunction_sb_sRcR::synapse0x1a12400() {
   return (neuron0x1a03710()*0.318581);
}

double NNfunction_sb_sRcR::synapse0x1a12440() {
   return (neuron0x1a03a50()*-0.21633);
}

double NNfunction_sb_sRcR::synapse0x1a12480() {
   return (neuron0x1a03d90()*-0.767981);
}

double NNfunction_sb_sRcR::synapse0x1a124c0() {
   return (neuron0x1a040d0()*-0.00733395);
}

double NNfunction_sb_sRcR::synapse0x1a12500() {
   return (neuron0x1a04410()*-0.177707);
}

double NNfunction_sb_sRcR::synapse0x1a12540() {
   return (neuron0x1a04750()*-0.0621605);
}

double NNfunction_sb_sRcR::synapse0x1a128c0() {
   return (neuron0x19ffb90()*-0.00167072);
}

double NNfunction_sb_sRcR::synapse0x1a12900() {
   return (neuron0x19ffed0()*0.0279272);
}

double NNfunction_sb_sRcR::synapse0x1a12940() {
   return (neuron0x1a00210()*0.0189579);
}

double NNfunction_sb_sRcR::synapse0x1a12980() {
   return (neuron0x1a00550()*-6.33104);
}

double NNfunction_sb_sRcR::synapse0x1a129c0() {
   return (neuron0x1a00890()*-0.013909);
}

double NNfunction_sb_sRcR::synapse0x1a12a00() {
   return (neuron0x1a00bd0()*0.0238691);
}

double NNfunction_sb_sRcR::synapse0x1a12a40() {
   return (neuron0x1a00f10()*-0.00129914);
}

double NNfunction_sb_sRcR::synapse0x1a12a80() {
   return (neuron0x1a01250()*0.0172187);
}

double NNfunction_sb_sRcR::synapse0x1a12ac0() {
   return (neuron0x1a01590()*0.00142534);
}

double NNfunction_sb_sRcR::synapse0x1a12b00() {
   return (neuron0x1a018d0()*0.00968821);
}

double NNfunction_sb_sRcR::synapse0x1a12b40() {
   return (neuron0x1a01c10()*0.0201983);
}

double NNfunction_sb_sRcR::synapse0x1a12b80() {
   return (neuron0x1a01f50()*-8.72183e-05);
}

double NNfunction_sb_sRcR::synapse0x1a12bc0() {
   return (neuron0x1a02290()*0.0134246);
}

double NNfunction_sb_sRcR::synapse0x1a12c00() {
   return (neuron0x1a025d0()*-0.0155491);
}

double NNfunction_sb_sRcR::synapse0x1a12c40() {
   return (neuron0x1a02910()*-0.0410063);
}

double NNfunction_sb_sRcR::synapse0x1a12c80() {
   return (neuron0x1a02c50()*0.205683);
}

double NNfunction_sb_sRcR::synapse0x1a12710() {
   return (neuron0x1a02f90()*0.00975729);
}

double NNfunction_sb_sRcR::synapse0x1a12750() {
   return (neuron0x1a034f0()*0.0185999);
}

double NNfunction_sb_sRcR::synapse0x1a12dd0() {
   return (neuron0x1a03710()*0.21049);
}

double NNfunction_sb_sRcR::synapse0x1a12e10() {
   return (neuron0x1a03a50()*0.0252243);
}

double NNfunction_sb_sRcR::synapse0x1a12e50() {
   return (neuron0x1a03d90()*0.00724093);
}

double NNfunction_sb_sRcR::synapse0x1a12e90() {
   return (neuron0x1a040d0()*0.0213339);
}

double NNfunction_sb_sRcR::synapse0x1a12ed0() {
   return (neuron0x1a04410()*0.0237141);
}

double NNfunction_sb_sRcR::synapse0x1a12f10() {
   return (neuron0x1a04750()*0.00694631);
}

double NNfunction_sb_sRcR::synapse0x1a13290() {
   return (neuron0x19ffb90()*-0.00716053);
}

double NNfunction_sb_sRcR::synapse0x1a132d0() {
   return (neuron0x19ffed0()*0.0325764);
}

double NNfunction_sb_sRcR::synapse0x1a13310() {
   return (neuron0x1a00210()*-0.00256816);
}

double NNfunction_sb_sRcR::synapse0x1a13350() {
   return (neuron0x1a00550()*-2.23676);
}

double NNfunction_sb_sRcR::synapse0x1a13390() {
   return (neuron0x1a00890()*0.00343541);
}

double NNfunction_sb_sRcR::synapse0x1a133d0() {
   return (neuron0x1a00bd0()*0.00489886);
}

double NNfunction_sb_sRcR::synapse0x1a13410() {
   return (neuron0x1a00f10()*-0.0109096);
}

double NNfunction_sb_sRcR::synapse0x1a13450() {
   return (neuron0x1a01250()*0.00174791);
}

double NNfunction_sb_sRcR::synapse0x1a13490() {
   return (neuron0x1a01590()*-0.00640345);
}

double NNfunction_sb_sRcR::synapse0x1a0b650() {
   return (neuron0x1a018d0()*0.00322646);
}

double NNfunction_sb_sRcR::synapse0x1a0b690() {
   return (neuron0x1a01c10()*0.00186729);
}

double NNfunction_sb_sRcR::synapse0x1a0b6d0() {
   return (neuron0x1a01f50()*0.013327);
}

double NNfunction_sb_sRcR::synapse0x1a0b710() {
   return (neuron0x1a02290()*0.0184508);
}

double NNfunction_sb_sRcR::synapse0x1a0b750() {
   return (neuron0x1a025d0()*-0.0110058);
}

double NNfunction_sb_sRcR::synapse0x1a0b790() {
   return (neuron0x1a02910()*-6.38046e-06);
}

double NNfunction_sb_sRcR::synapse0x1a0b7d0() {
   return (neuron0x1a02c50()*-0.17581);
}

double NNfunction_sb_sRcR::synapse0x1a130e0() {
   return (neuron0x1a02f90()*0.00424361);
}

double NNfunction_sb_sRcR::synapse0x1a13120() {
   return (neuron0x1a034f0()*0.000759802);
}

double NNfunction_sb_sRcR::synapse0x1a0b920() {
   return (neuron0x1a03710()*-0.109709);
}

double NNfunction_sb_sRcR::synapse0x1a0b960() {
   return (neuron0x1a03a50()*0.0185204);
}

double NNfunction_sb_sRcR::synapse0x1a0b9a0() {
   return (neuron0x1a03d90()*0.00302435);
}

double NNfunction_sb_sRcR::synapse0x1a0b9e0() {
   return (neuron0x1a040d0()*0.0155411);
}

double NNfunction_sb_sRcR::synapse0x1a0ba20() {
   return (neuron0x1a04410()*0.0104884);
}

double NNfunction_sb_sRcR::synapse0x1a0ba60() {
   return (neuron0x1a04750()*0.00335709);
}

double NNfunction_sb_sRcR::synapse0x1a0bde0() {
   return (neuron0x19ffb90()*0.000775532);
}

double NNfunction_sb_sRcR::synapse0x1a0be20() {
   return (neuron0x19ffed0()*-0.0150695);
}

double NNfunction_sb_sRcR::synapse0x1a0be60() {
   return (neuron0x1a00210()*0.0269026);
}

double NNfunction_sb_sRcR::synapse0x1a0bea0() {
   return (neuron0x1a00550()*-0.345538);
}

double NNfunction_sb_sRcR::synapse0x1a0bee0() {
   return (neuron0x1a00890()*-0.0227168);
}

double NNfunction_sb_sRcR::synapse0x1a0bf20() {
   return (neuron0x1a00bd0()*-0.0330175);
}

double NNfunction_sb_sRcR::synapse0x1a0bf60() {
   return (neuron0x1a00f10()*0.0372524);
}

double NNfunction_sb_sRcR::synapse0x1a0bfa0() {
   return (neuron0x1a01250()*0.053737);
}

double NNfunction_sb_sRcR::synapse0x1a0bfe0() {
   return (neuron0x1a01590()*0.0255239);
}

double NNfunction_sb_sRcR::synapse0x1a0c020() {
   return (neuron0x1a018d0()*0.0138543);
}

double NNfunction_sb_sRcR::synapse0x1a0c060() {
   return (neuron0x1a01c10()*0.0126087);
}

double NNfunction_sb_sRcR::synapse0x1a0c0a0() {
   return (neuron0x1a01f50()*0.031595);
}

double NNfunction_sb_sRcR::synapse0x1a0c0e0() {
   return (neuron0x1a02290()*0.0154353);
}

double NNfunction_sb_sRcR::synapse0x1a0c120() {
   return (neuron0x1a025d0()*0.0268817);
}

double NNfunction_sb_sRcR::synapse0x1a0c160() {
   return (neuron0x1a02910()*0.0215443);
}

double NNfunction_sb_sRcR::synapse0x1a0c1a0() {
   return (neuron0x1a02c50()*0.255171);
}

double NNfunction_sb_sRcR::synapse0x1a0bc30() {
   return (neuron0x1a02f90()*0.00140454);
}

double NNfunction_sb_sRcR::synapse0x1a0bc70() {
   return (neuron0x1a034f0()*0.0236251);
}

double NNfunction_sb_sRcR::synapse0x1a0c2f0() {
   return (neuron0x1a03710()*-0.569531);
}

double NNfunction_sb_sRcR::synapse0x1a0c330() {
   return (neuron0x1a03a50()*-0.00660958);
}

double NNfunction_sb_sRcR::synapse0x1a0c370() {
   return (neuron0x1a03d90()*-0.0289528);
}

double NNfunction_sb_sRcR::synapse0x1a0c3b0() {
   return (neuron0x1a040d0()*-0.0121103);
}

double NNfunction_sb_sRcR::synapse0x1a0c3f0() {
   return (neuron0x1a04410()*-0.00467635);
}

double NNfunction_sb_sRcR::synapse0x1a0c430() {
   return (neuron0x1a04750()*0.021274);
}

double NNfunction_sb_sRcR::synapse0x1a0c600() {
   return (neuron0x19ffb90()*-0.0087653);
}

double NNfunction_sb_sRcR::synapse0x1a15690() {
   return (neuron0x19ffed0()*-0.579052);
}

double NNfunction_sb_sRcR::synapse0x1a156d0() {
   return (neuron0x1a00210()*-0.166407);
}

double NNfunction_sb_sRcR::synapse0x1a15710() {
   return (neuron0x1a00550()*0.498416);
}

double NNfunction_sb_sRcR::synapse0x1a15750() {
   return (neuron0x1a00890()*0.0325985);
}

double NNfunction_sb_sRcR::synapse0x1a15790() {
   return (neuron0x1a00bd0()*0.00447246);
}

double NNfunction_sb_sRcR::synapse0x1a157d0() {
   return (neuron0x1a00f10()*0.157843);
}

double NNfunction_sb_sRcR::synapse0x1a15810() {
   return (neuron0x1a01250()*-0.12191);
}

double NNfunction_sb_sRcR::synapse0x1a15850() {
   return (neuron0x1a01590()*-0.220839);
}

double NNfunction_sb_sRcR::synapse0x1a15890() {
   return (neuron0x1a018d0()*0.0424903);
}

double NNfunction_sb_sRcR::synapse0x1a158d0() {
   return (neuron0x1a01c10()*-0.195337);
}

double NNfunction_sb_sRcR::synapse0x1a15910() {
   return (neuron0x1a01f50()*0.295636);
}

double NNfunction_sb_sRcR::synapse0x1a15950() {
   return (neuron0x1a02290()*0.27342);
}

double NNfunction_sb_sRcR::synapse0x1a15990() {
   return (neuron0x1a025d0()*-0.13109);
}

double NNfunction_sb_sRcR::synapse0x1a159d0() {
   return (neuron0x1a02910()*0.108666);
}

double NNfunction_sb_sRcR::synapse0x1a15a10() {
   return (neuron0x1a02c50()*0.211903);
}

double NNfunction_sb_sRcR::synapse0x1a154e0() {
   return (neuron0x1a02f90()*-0.297971);
}

double NNfunction_sb_sRcR::synapse0x1a15520() {
   return (neuron0x1a034f0()*0.115732);
}

double NNfunction_sb_sRcR::synapse0x1a15b60() {
   return (neuron0x1a03710()*0.13925);
}

double NNfunction_sb_sRcR::synapse0x1a15ba0() {
   return (neuron0x1a03a50()*0.198766);
}

double NNfunction_sb_sRcR::synapse0x1a15be0() {
   return (neuron0x1a03d90()*0.0160979);
}

double NNfunction_sb_sRcR::synapse0x1a15c20() {
   return (neuron0x1a040d0()*0.0680136);
}

double NNfunction_sb_sRcR::synapse0x1a15c60() {
   return (neuron0x1a04410()*0.0383976);
}

double NNfunction_sb_sRcR::synapse0x1a15ca0() {
   return (neuron0x1a04750()*0.0668047);
}

double NNfunction_sb_sRcR::synapse0x1a16020() {
   return (neuron0x19ffb90()*0.00424657);
}

double NNfunction_sb_sRcR::synapse0x1a16060() {
   return (neuron0x19ffed0()*0.000192745);
}

double NNfunction_sb_sRcR::synapse0x1a160a0() {
   return (neuron0x1a00210()*-0.0219721);
}

double NNfunction_sb_sRcR::synapse0x1a160e0() {
   return (neuron0x1a00550()*0.12756);
}

double NNfunction_sb_sRcR::synapse0x1a16120() {
   return (neuron0x1a00890()*0.0011704);
}

double NNfunction_sb_sRcR::synapse0x1a16160() {
   return (neuron0x1a00bd0()*0.00746985);
}

double NNfunction_sb_sRcR::synapse0x1a161a0() {
   return (neuron0x1a00f10()*-0.0260503);
}

double NNfunction_sb_sRcR::synapse0x1a161e0() {
   return (neuron0x1a01250()*-0.0401928);
}

double NNfunction_sb_sRcR::synapse0x1a16220() {
   return (neuron0x1a01590()*-0.00792983);
}

double NNfunction_sb_sRcR::synapse0x1a16260() {
   return (neuron0x1a018d0()*-0.000225063);
}

double NNfunction_sb_sRcR::synapse0x1a162a0() {
   return (neuron0x1a01c10()*0.00493638);
}

double NNfunction_sb_sRcR::synapse0x1a162e0() {
   return (neuron0x1a01f50()*-0.0337545);
}

double NNfunction_sb_sRcR::synapse0x1a16320() {
   return (neuron0x1a02290()*-0.0095877);
}

double NNfunction_sb_sRcR::synapse0x1a16360() {
   return (neuron0x1a025d0()*0.00358635);
}

double NNfunction_sb_sRcR::synapse0x1a163a0() {
   return (neuron0x1a02910()*-0.0101178);
}

double NNfunction_sb_sRcR::synapse0x1a163e0() {
   return (neuron0x1a02c50()*0.835614);
}

double NNfunction_sb_sRcR::synapse0x1a15e70() {
   return (neuron0x1a02f90()*0.00109138);
}

double NNfunction_sb_sRcR::synapse0x1a15eb0() {
   return (neuron0x1a034f0()*-0.00529421);
}

double NNfunction_sb_sRcR::synapse0x1a16530() {
   return (neuron0x1a03710()*-0.209999);
}

double NNfunction_sb_sRcR::synapse0x1a16570() {
   return (neuron0x1a03a50()*0.022195);
}

double NNfunction_sb_sRcR::synapse0x1a165b0() {
   return (neuron0x1a03d90()*0.0136682);
}

double NNfunction_sb_sRcR::synapse0x1a165f0() {
   return (neuron0x1a040d0()*0.0206107);
}

double NNfunction_sb_sRcR::synapse0x1a16630() {
   return (neuron0x1a04410()*0.00209383);
}

double NNfunction_sb_sRcR::synapse0x1a16670() {
   return (neuron0x1a04750()*-0.00913551);
}

double NNfunction_sb_sRcR::synapse0x1a169f0() {
   return (neuron0x19ffb90()*-0.333468);
}

double NNfunction_sb_sRcR::synapse0x1a16a30() {
   return (neuron0x19ffed0()*1.85506);
}

double NNfunction_sb_sRcR::synapse0x1a16a70() {
   return (neuron0x1a00210()*0.165802);
}

double NNfunction_sb_sRcR::synapse0x1a16ab0() {
   return (neuron0x1a00550()*0.247627);
}

double NNfunction_sb_sRcR::synapse0x1a16af0() {
   return (neuron0x1a00890()*0.968613);
}

double NNfunction_sb_sRcR::synapse0x1a16b30() {
   return (neuron0x1a00bd0()*0.921986);
}

double NNfunction_sb_sRcR::synapse0x1a16b70() {
   return (neuron0x1a00f10()*0.504965);
}

double NNfunction_sb_sRcR::synapse0x1a16bb0() {
   return (neuron0x1a01250()*-0.0488169);
}

double NNfunction_sb_sRcR::synapse0x1a16bf0() {
   return (neuron0x1a01590()*-0.191883);
}

double NNfunction_sb_sRcR::synapse0x1a16c30() {
   return (neuron0x1a018d0()*-0.177029);
}

double NNfunction_sb_sRcR::synapse0x1a16c70() {
   return (neuron0x1a01c10()*0.26816);
}

double NNfunction_sb_sRcR::synapse0x1a16cb0() {
   return (neuron0x1a01f50()*-0.0901528);
}

double NNfunction_sb_sRcR::synapse0x1a16cf0() {
   return (neuron0x1a02290()*-0.89273);
}

double NNfunction_sb_sRcR::synapse0x1a16d30() {
   return (neuron0x1a025d0()*-0.995409);
}

double NNfunction_sb_sRcR::synapse0x1a16d70() {
   return (neuron0x1a02910()*-0.751853);
}

double NNfunction_sb_sRcR::synapse0x1a16db0() {
   return (neuron0x1a02c50()*-0.066626);
}

double NNfunction_sb_sRcR::synapse0x1a16840() {
   return (neuron0x1a02f90()*-0.71035);
}

double NNfunction_sb_sRcR::synapse0x1a16880() {
   return (neuron0x1a034f0()*-0.918027);
}

double NNfunction_sb_sRcR::synapse0x1a16f00() {
   return (neuron0x1a03710()*0.723772);
}

double NNfunction_sb_sRcR::synapse0x1a16f40() {
   return (neuron0x1a03a50()*-0.979697);
}

double NNfunction_sb_sRcR::synapse0x1a16f80() {
   return (neuron0x1a03d90()*-0.477201);
}

double NNfunction_sb_sRcR::synapse0x1a16fc0() {
   return (neuron0x1a040d0()*0.359319);
}

double NNfunction_sb_sRcR::synapse0x1a17000() {
   return (neuron0x1a04410()*0.697947);
}

double NNfunction_sb_sRcR::synapse0x1a17040() {
   return (neuron0x1a04750()*0.34509);
}

double NNfunction_sb_sRcR::synapse0x1a173c0() {
   return (neuron0x19ffb90()*-0.149809);
}

double NNfunction_sb_sRcR::synapse0x1a17400() {
   return (neuron0x19ffed0()*-0.744192);
}

double NNfunction_sb_sRcR::synapse0x1a17440() {
   return (neuron0x1a00210()*0.177164);
}

double NNfunction_sb_sRcR::synapse0x1a17480() {
   return (neuron0x1a00550()*-0.0839609);
}

double NNfunction_sb_sRcR::synapse0x1a174c0() {
   return (neuron0x1a00890()*-0.0179339);
}

double NNfunction_sb_sRcR::synapse0x1a17500() {
   return (neuron0x1a00bd0()*0.0625073);
}

double NNfunction_sb_sRcR::synapse0x1a17540() {
   return (neuron0x1a00f10()*-0.0147728);
}

double NNfunction_sb_sRcR::synapse0x1a17580() {
   return (neuron0x1a01250()*0.141682);
}

double NNfunction_sb_sRcR::synapse0x1a175c0() {
   return (neuron0x1a01590()*0.0477374);
}

double NNfunction_sb_sRcR::synapse0x1a17600() {
   return (neuron0x1a018d0()*-0.0159108);
}

double NNfunction_sb_sRcR::synapse0x1a17640() {
   return (neuron0x1a01c10()*0.0877923);
}

double NNfunction_sb_sRcR::synapse0x1a17680() {
   return (neuron0x1a01f50()*-0.0351042);
}

double NNfunction_sb_sRcR::synapse0x1a176c0() {
   return (neuron0x1a02290()*-0.44769);
}

double NNfunction_sb_sRcR::synapse0x1a17700() {
   return (neuron0x1a025d0()*0.148155);
}

double NNfunction_sb_sRcR::synapse0x1a17740() {
   return (neuron0x1a02910()*-0.0892965);
}

double NNfunction_sb_sRcR::synapse0x1a17780() {
   return (neuron0x1a02c50()*0.178251);
}

double NNfunction_sb_sRcR::synapse0x1a17210() {
   return (neuron0x1a02f90()*0.0983476);
}

double NNfunction_sb_sRcR::synapse0x1a17250() {
   return (neuron0x1a034f0()*-0.311648);
}

double NNfunction_sb_sRcR::synapse0x1a178d0() {
   return (neuron0x1a03710()*0.164572);
}

double NNfunction_sb_sRcR::synapse0x1a17910() {
   return (neuron0x1a03a50()*-0.0765081);
}

double NNfunction_sb_sRcR::synapse0x1a17950() {
   return (neuron0x1a03d90()*-0.0394267);
}

double NNfunction_sb_sRcR::synapse0x1a17990() {
   return (neuron0x1a040d0()*-0.0984391);
}

double NNfunction_sb_sRcR::synapse0x1a179d0() {
   return (neuron0x1a04410()*-0.00182062);
}

double NNfunction_sb_sRcR::synapse0x1a17a10() {
   return (neuron0x1a04750()*0.0737033);
}

double NNfunction_sb_sRcR::synapse0x1a17d90() {
   return (neuron0x19ffb90()*-0.0222471);
}

double NNfunction_sb_sRcR::synapse0x1a17dd0() {
   return (neuron0x19ffed0()*0.41325);
}

double NNfunction_sb_sRcR::synapse0x1a17e10() {
   return (neuron0x1a00210()*0.0990269);
}

double NNfunction_sb_sRcR::synapse0x1a17e50() {
   return (neuron0x1a00550()*-0.272276);
}

double NNfunction_sb_sRcR::synapse0x1a17e90() {
   return (neuron0x1a00890()*-0.155405);
}

double NNfunction_sb_sRcR::synapse0x1a17ed0() {
   return (neuron0x1a00bd0()*-0.025227);
}

double NNfunction_sb_sRcR::synapse0x1a17f10() {
   return (neuron0x1a00f10()*-0.562216);
}

double NNfunction_sb_sRcR::synapse0x1a17f50() {
   return (neuron0x1a01250()*-0.0945673);
}

double NNfunction_sb_sRcR::synapse0x1a17f90() {
   return (neuron0x1a01590()*-0.134203);
}

double NNfunction_sb_sRcR::synapse0x1a17fd0() {
   return (neuron0x1a018d0()*-0.318995);
}

double NNfunction_sb_sRcR::synapse0x1a18010() {
   return (neuron0x1a01c10()*-0.0350935);
}

double NNfunction_sb_sRcR::synapse0x1a18050() {
   return (neuron0x1a01f50()*0.563135);
}

double NNfunction_sb_sRcR::synapse0x1a18090() {
   return (neuron0x1a02290()*-1.78378);
}

double NNfunction_sb_sRcR::synapse0x1a180d0() {
   return (neuron0x1a025d0()*0.709794);
}

double NNfunction_sb_sRcR::synapse0x1a18110() {
   return (neuron0x1a02910()*0.134153);
}

double NNfunction_sb_sRcR::synapse0x1a18150() {
   return (neuron0x1a02c50()*-0.122755);
}

double NNfunction_sb_sRcR::synapse0x1a17be0() {
   return (neuron0x1a02f90()*0.644095);
}

double NNfunction_sb_sRcR::synapse0x1a17c20() {
   return (neuron0x1a034f0()*0.479701);
}

double NNfunction_sb_sRcR::synapse0x1a182a0() {
   return (neuron0x1a03710()*-0.654492);
}

double NNfunction_sb_sRcR::synapse0x1a182e0() {
   return (neuron0x1a03a50()*-0.780097);
}

double NNfunction_sb_sRcR::synapse0x1a18320() {
   return (neuron0x1a03d90()*-0.192105);
}

double NNfunction_sb_sRcR::synapse0x1a18360() {
   return (neuron0x1a040d0()*0.396883);
}

double NNfunction_sb_sRcR::synapse0x1a183a0() {
   return (neuron0x1a04410()*0.175031);
}

double NNfunction_sb_sRcR::synapse0x1a183e0() {
   return (neuron0x1a04750()*0.0305732);
}

double NNfunction_sb_sRcR::synapse0x1a18760() {
   return (neuron0x19ffb90()*-0.158189);
}

double NNfunction_sb_sRcR::synapse0x1a187a0() {
   return (neuron0x19ffed0()*0.358347);
}

double NNfunction_sb_sRcR::synapse0x1a187e0() {
   return (neuron0x1a00210()*-0.065986);
}

double NNfunction_sb_sRcR::synapse0x1a18820() {
   return (neuron0x1a00550()*-1.21934);
}

double NNfunction_sb_sRcR::synapse0x1a18860() {
   return (neuron0x1a00890()*-0.155621);
}

double NNfunction_sb_sRcR::synapse0x1a188a0() {
   return (neuron0x1a00bd0()*0.268858);
}

double NNfunction_sb_sRcR::synapse0x1a188e0() {
   return (neuron0x1a00f10()*0.343043);
}

double NNfunction_sb_sRcR::synapse0x1a18920() {
   return (neuron0x1a01250()*-0.291931);
}

double NNfunction_sb_sRcR::synapse0x1a18960() {
   return (neuron0x1a01590()*-0.0584456);
}

double NNfunction_sb_sRcR::synapse0x1a189a0() {
   return (neuron0x1a018d0()*-0.275262);
}

double NNfunction_sb_sRcR::synapse0x1a189e0() {
   return (neuron0x1a01c10()*-0.00385781);
}

double NNfunction_sb_sRcR::synapse0x1a18a20() {
   return (neuron0x1a01f50()*0.788317);
}

double NNfunction_sb_sRcR::synapse0x1a18a60() {
   return (neuron0x1a02290()*0.392921);
}

double NNfunction_sb_sRcR::synapse0x1a18aa0() {
   return (neuron0x1a025d0()*0.185967);
}

double NNfunction_sb_sRcR::synapse0x1a18ae0() {
   return (neuron0x1a02910()*0.123755);
}

double NNfunction_sb_sRcR::synapse0x1a18b20() {
   return (neuron0x1a02c50()*0.636851);
}

double NNfunction_sb_sRcR::synapse0x1a185b0() {
   return (neuron0x1a02f90()*-0.0300571);
}

double NNfunction_sb_sRcR::synapse0x1a185f0() {
   return (neuron0x1a034f0()*-0.360747);
}

double NNfunction_sb_sRcR::synapse0x1a18c70() {
   return (neuron0x1a03710()*-0.17734);
}

double NNfunction_sb_sRcR::synapse0x1a18cb0() {
   return (neuron0x1a03a50()*0.0785421);
}

double NNfunction_sb_sRcR::synapse0x1a18cf0() {
   return (neuron0x1a03d90()*-0.625823);
}

double NNfunction_sb_sRcR::synapse0x1a18d30() {
   return (neuron0x1a040d0()*0.359926);
}

double NNfunction_sb_sRcR::synapse0x1a18d70() {
   return (neuron0x1a04410()*-0.102166);
}

double NNfunction_sb_sRcR::synapse0x1a18db0() {
   return (neuron0x1a04750()*-0.448496);
}

double NNfunction_sb_sRcR::synapse0x1a19130() {
   return (neuron0x19ffb90()*0.268792);
}

double NNfunction_sb_sRcR::synapse0x1a19170() {
   return (neuron0x19ffed0()*0.153502);
}

double NNfunction_sb_sRcR::synapse0x1a191b0() {
   return (neuron0x1a00210()*-0.341938);
}

double NNfunction_sb_sRcR::synapse0x1a191f0() {
   return (neuron0x1a00550()*-1.43583);
}

double NNfunction_sb_sRcR::synapse0x1a19230() {
   return (neuron0x1a00890()*-0.0842649);
}

double NNfunction_sb_sRcR::synapse0x1a19270() {
   return (neuron0x1a00bd0()*-0.943322);
}

double NNfunction_sb_sRcR::synapse0x1a192b0() {
   return (neuron0x1a00f10()*-0.0998707);
}

double NNfunction_sb_sRcR::synapse0x1a192f0() {
   return (neuron0x1a01250()*-0.852255);
}

double NNfunction_sb_sRcR::synapse0x1a19330() {
   return (neuron0x1a01590()*0.257181);
}

double NNfunction_sb_sRcR::synapse0x1a19370() {
   return (neuron0x1a018d0()*-0.581728);
}

double NNfunction_sb_sRcR::synapse0x1a193b0() {
   return (neuron0x1a01c10()*-0.85757);
}

double NNfunction_sb_sRcR::synapse0x1a193f0() {
   return (neuron0x1a01f50()*0.0998662);
}

double NNfunction_sb_sRcR::synapse0x1a19430() {
   return (neuron0x1a02290()*-1.13911);
}

double NNfunction_sb_sRcR::synapse0x1a19470() {
   return (neuron0x1a025d0()*0.654006);
}

double NNfunction_sb_sRcR::synapse0x1a194b0() {
   return (neuron0x1a02910()*-0.724121);
}

double NNfunction_sb_sRcR::synapse0x1a194f0() {
   return (neuron0x1a02c50()*0.555142);
}

double NNfunction_sb_sRcR::synapse0x1a18f80() {
   return (neuron0x1a02f90()*-0.0145813);
}

double NNfunction_sb_sRcR::synapse0x1a18fc0() {
   return (neuron0x1a034f0()*0.279816);
}

double NNfunction_sb_sRcR::synapse0x1a19640() {
   return (neuron0x1a03710()*0.483679);
}

double NNfunction_sb_sRcR::synapse0x1a19680() {
   return (neuron0x1a03a50()*-0.236631);
}

double NNfunction_sb_sRcR::synapse0x1a196c0() {
   return (neuron0x1a03d90()*-0.957388);
}

double NNfunction_sb_sRcR::synapse0x1a19700() {
   return (neuron0x1a040d0()*-0.053546);
}

double NNfunction_sb_sRcR::synapse0x1a19740() {
   return (neuron0x1a04410()*-0.256816);
}

double NNfunction_sb_sRcR::synapse0x1a19780() {
   return (neuron0x1a04750()*-0.0721563);
}

double NNfunction_sb_sRcR::synapse0x1a19b00() {
   return (neuron0x19ffb90()*0.330191);
}

double NNfunction_sb_sRcR::synapse0x1a19b40() {
   return (neuron0x19ffed0()*-0.250404);
}

double NNfunction_sb_sRcR::synapse0x1a19b80() {
   return (neuron0x1a00210()*-0.608659);
}

double NNfunction_sb_sRcR::synapse0x1a19bc0() {
   return (neuron0x1a00550()*0.344623);
}

double NNfunction_sb_sRcR::synapse0x1a19c00() {
   return (neuron0x1a00890()*-1.24026);
}

double NNfunction_sb_sRcR::synapse0x1a19c40() {
   return (neuron0x1a00bd0()*-0.39797);
}

double NNfunction_sb_sRcR::synapse0x1a19c80() {
   return (neuron0x1a00f10()*-0.471501);
}

double NNfunction_sb_sRcR::synapse0x1a19cc0() {
   return (neuron0x1a01250()*-0.134043);
}

double NNfunction_sb_sRcR::synapse0x1a19d00() {
   return (neuron0x1a01590()*-0.0635093);
}

double NNfunction_sb_sRcR::synapse0x1a19d40() {
   return (neuron0x1a018d0()*-0.324402);
}

double NNfunction_sb_sRcR::synapse0x1a19d80() {
   return (neuron0x1a01c10()*0.192513);
}

double NNfunction_sb_sRcR::synapse0x1a19dc0() {
   return (neuron0x1a01f50()*-0.787083);
}

double NNfunction_sb_sRcR::synapse0x1a19e00() {
   return (neuron0x1a02290()*-0.810364);
}

double NNfunction_sb_sRcR::synapse0x1a19e40() {
   return (neuron0x1a025d0()*0.362184);
}

double NNfunction_sb_sRcR::synapse0x1a19e80() {
   return (neuron0x1a02910()*0.22663);
}

double NNfunction_sb_sRcR::synapse0x1a19ec0() {
   return (neuron0x1a02c50()*-0.0519885);
}

double NNfunction_sb_sRcR::synapse0x1a19950() {
   return (neuron0x1a02f90()*-0.69184);
}

double NNfunction_sb_sRcR::synapse0x1a19990() {
   return (neuron0x1a034f0()*-1.02079);
}

double NNfunction_sb_sRcR::synapse0x1a1a010() {
   return (neuron0x1a03710()*-0.156804);
}

double NNfunction_sb_sRcR::synapse0x1a1a050() {
   return (neuron0x1a03a50()*0.927348);
}

double NNfunction_sb_sRcR::synapse0x1a1a090() {
   return (neuron0x1a03d90()*0.336799);
}

double NNfunction_sb_sRcR::synapse0x1a1a0d0() {
   return (neuron0x1a040d0()*-0.14979);
}

double NNfunction_sb_sRcR::synapse0x1a1a110() {
   return (neuron0x1a04410()*-0.680479);
}

double NNfunction_sb_sRcR::synapse0x1a1a150() {
   return (neuron0x1a04750()*-0.53826);
}

double NNfunction_sb_sRcR::synapse0x1a1a4d0() {
   return (neuron0x19ffb90()*0.000664882);
}

double NNfunction_sb_sRcR::synapse0x1a0eaa0() {
   return (neuron0x19ffed0()*0.0133517);
}

double NNfunction_sb_sRcR::synapse0x1a0eae0() {
   return (neuron0x1a00210()*0.00450505);
}

double NNfunction_sb_sRcR::synapse0x1a0eb20() {
   return (neuron0x1a00550()*-2.34726);
}

double NNfunction_sb_sRcR::synapse0x1a0ed70() {
   return (neuron0x1a00890()*-0.000581541);
}

double NNfunction_sb_sRcR::synapse0x1a0edb0() {
   return (neuron0x1a00bd0()*0.00134137);
}

double NNfunction_sb_sRcR::synapse0x1a0edf0() {
   return (neuron0x1a00f10()*0.0039544);
}

double NNfunction_sb_sRcR::synapse0x1a0f040() {
   return (neuron0x1a01250()*0.0160496);
}

double NNfunction_sb_sRcR::synapse0x1a0f080() {
   return (neuron0x1a01590()*-0.00463928);
}

double NNfunction_sb_sRcR::synapse0x1a0f2d0() {
   return (neuron0x1a018d0()*-0.00203027);
}

double NNfunction_sb_sRcR::synapse0x1a0f310() {
   return (neuron0x1a01c10()*-0.00279451);
}

double NNfunction_sb_sRcR::synapse0x1a0f350() {
   return (neuron0x1a01f50()*0.00136626);
}

double NNfunction_sb_sRcR::synapse0x1a0f5a0() {
   return (neuron0x1a02290()*-0.00290551);
}

double NNfunction_sb_sRcR::synapse0x1a0f5e0() {
   return (neuron0x1a025d0()*0.0146089);
}

double NNfunction_sb_sRcR::synapse0x1a0f830() {
   return (neuron0x1a02910()*-0.00325492);
}

double NNfunction_sb_sRcR::synapse0x1a0f870() {
   return (neuron0x1a02c50()*0.0632044);
}

double NNfunction_sb_sRcR::synapse0x1a1a320() {
   return (neuron0x1a02f90()*0.0116924);
}

double NNfunction_sb_sRcR::synapse0x1a1a360() {
   return (neuron0x1a034f0()*-0.0105649);
}

double NNfunction_sb_sRcR::synapse0x1a0f9c0() {
   return (neuron0x1a03710()*0.111058);
}

double NNfunction_sb_sRcR::synapse0x1a0fed0() {
   return (neuron0x1a03a50()*0.00543573);
}

double NNfunction_sb_sRcR::synapse0x1a0ff10() {
   return (neuron0x1a03d90()*-0.0044873);
}

double NNfunction_sb_sRcR::synapse0x1a0ff50() {
   return (neuron0x1a040d0()*-0.0044045);
}

double NNfunction_sb_sRcR::synapse0x1a101a0() {
   return (neuron0x1a04410()*0.00349856);
}

double NNfunction_sb_sRcR::synapse0x1a101e0() {
   return (neuron0x1a04750()*0.00969879);
}

double NNfunction_sb_sRcR::synapse0x1a0fa90() {
   return (neuron0x19ffb90()*0.36567);
}

double NNfunction_sb_sRcR::synapse0x1a0fad0() {
   return (neuron0x19ffed0()*-0.583197);
}

double NNfunction_sb_sRcR::synapse0x1a0fb10() {
   return (neuron0x1a00210()*-2.24984);
}

double NNfunction_sb_sRcR::synapse0x1a0fb50() {
   return (neuron0x1a00550()*-0.718684);
}

double NNfunction_sb_sRcR::synapse0x1a104d0() {
   return (neuron0x1a00890()*0.97036);
}

double NNfunction_sb_sRcR::synapse0x1a1c820() {
   return (neuron0x1a00bd0()*0.261311);
}

double NNfunction_sb_sRcR::synapse0x1a1c860() {
   return (neuron0x1a00f10()*-0.0818091);
}

double NNfunction_sb_sRcR::synapse0x1a1c8a0() {
   return (neuron0x1a01250()*1.33299);
}

double NNfunction_sb_sRcR::synapse0x1a1c8e0() {
   return (neuron0x1a01590()*-0.239802);
}

double NNfunction_sb_sRcR::synapse0x1a1c920() {
   return (neuron0x1a018d0()*-1.09604);
}

double NNfunction_sb_sRcR::synapse0x1a1c960() {
   return (neuron0x1a01c10()*0.898279);
}

double NNfunction_sb_sRcR::synapse0x1a1c9a0() {
   return (neuron0x1a01f50()*-0.144106);
}

double NNfunction_sb_sRcR::synapse0x1a1c9e0() {
   return (neuron0x1a02290()*0.25577);
}

double NNfunction_sb_sRcR::synapse0x1a1ca20() {
   return (neuron0x1a025d0()*0.164666);
}

double NNfunction_sb_sRcR::synapse0x1a1ca60() {
   return (neuron0x1a02910()*-0.546279);
}

double NNfunction_sb_sRcR::synapse0x1a1caa0() {
   return (neuron0x1a02c50()*-0.00370779);
}

double NNfunction_sb_sRcR::synapse0x1a103b0() {
   return (neuron0x1a02f90()*1.16188);
}

double NNfunction_sb_sRcR::synapse0x1a103f0() {
   return (neuron0x1a034f0()*-0.152031);
}

double NNfunction_sb_sRcR::synapse0x1a1cbf0() {
   return (neuron0x1a03710()*1.04189);
}

double NNfunction_sb_sRcR::synapse0x1a1cc30() {
   return (neuron0x1a03a50()*-0.210223);
}

double NNfunction_sb_sRcR::synapse0x1a1cc70() {
   return (neuron0x1a03d90()*-0.343858);
}

double NNfunction_sb_sRcR::synapse0x1a1ccb0() {
   return (neuron0x1a040d0()*0.959022);
}

double NNfunction_sb_sRcR::synapse0x1a1ccf0() {
   return (neuron0x1a04410()*0.828457);
}

double NNfunction_sb_sRcR::synapse0x1a1cd30() {
   return (neuron0x1a04750()*0.234199);
}

double NNfunction_sb_sRcR::synapse0x1a1d0b0() {
   return (neuron0x19ffb90()*0.265729);
}

double NNfunction_sb_sRcR::synapse0x1a1d0f0() {
   return (neuron0x19ffed0()*-0.286543);
}

double NNfunction_sb_sRcR::synapse0x1a1d130() {
   return (neuron0x1a00210()*-0.918241);
}

double NNfunction_sb_sRcR::synapse0x1a1d170() {
   return (neuron0x1a00550()*-0.0441771);
}

double NNfunction_sb_sRcR::synapse0x1a1d1b0() {
   return (neuron0x1a00890()*1.53712);
}

double NNfunction_sb_sRcR::synapse0x1a1d1f0() {
   return (neuron0x1a00bd0()*0.0339851);
}

double NNfunction_sb_sRcR::synapse0x1a1d230() {
   return (neuron0x1a00f10()*-0.924482);
}

double NNfunction_sb_sRcR::synapse0x1a1d270() {
   return (neuron0x1a01250()*1.17755);
}

double NNfunction_sb_sRcR::synapse0x1a1d2b0() {
   return (neuron0x1a01590()*0.219654);
}

double NNfunction_sb_sRcR::synapse0x1a1d2f0() {
   return (neuron0x1a018d0()*0.628418);
}

double NNfunction_sb_sRcR::synapse0x1a1d330() {
   return (neuron0x1a01c10()*-0.562944);
}

double NNfunction_sb_sRcR::synapse0x1a1d370() {
   return (neuron0x1a01f50()*-0.309978);
}

double NNfunction_sb_sRcR::synapse0x1a1d3b0() {
   return (neuron0x1a02290()*0.298545);
}

double NNfunction_sb_sRcR::synapse0x1a1d3f0() {
   return (neuron0x1a025d0()*0.542442);
}

double NNfunction_sb_sRcR::synapse0x1a1d430() {
   return (neuron0x1a02910()*-0.45647);
}

double NNfunction_sb_sRcR::synapse0x1a1d470() {
   return (neuron0x1a02c50()*-0.501979);
}

double NNfunction_sb_sRcR::synapse0x1a1cf00() {
   return (neuron0x1a02f90()*0.655975);
}

double NNfunction_sb_sRcR::synapse0x1a1cf40() {
   return (neuron0x1a034f0()*-0.0313124);
}

double NNfunction_sb_sRcR::synapse0x1a1d5c0() {
   return (neuron0x1a03710()*0.89923);
}

double NNfunction_sb_sRcR::synapse0x1a1d600() {
   return (neuron0x1a03a50()*0.701759);
}

double NNfunction_sb_sRcR::synapse0x1a1d640() {
   return (neuron0x1a03d90()*-1.54591);
}

double NNfunction_sb_sRcR::synapse0x1a1d680() {
   return (neuron0x1a040d0()*-0.512295);
}

double NNfunction_sb_sRcR::synapse0x1a1d6c0() {
   return (neuron0x1a04410()*0.0760398);
}

double NNfunction_sb_sRcR::synapse0x1a1d700() {
   return (neuron0x1a04750()*0.506616);
}

double NNfunction_sb_sRcR::synapse0x1a1da80() {
   return (neuron0x19ffb90()*-0.432841);
}

double NNfunction_sb_sRcR::synapse0x1a1dac0() {
   return (neuron0x19ffed0()*0.212035);
}

double NNfunction_sb_sRcR::synapse0x1a1db00() {
   return (neuron0x1a00210()*-0.296292);
}

double NNfunction_sb_sRcR::synapse0x1a1db40() {
   return (neuron0x1a00550()*-0.38347);
}

double NNfunction_sb_sRcR::synapse0x1a1db80() {
   return (neuron0x1a00890()*-1.01379);
}

double NNfunction_sb_sRcR::synapse0x1a1dbc0() {
   return (neuron0x1a00bd0()*0.93033);
}

double NNfunction_sb_sRcR::synapse0x1a1dc00() {
   return (neuron0x1a00f10()*-0.0807064);
}

double NNfunction_sb_sRcR::synapse0x1a1dc40() {
   return (neuron0x1a01250()*-0.405361);
}

double NNfunction_sb_sRcR::synapse0x1a1dc80() {
   return (neuron0x1a01590()*0.156062);
}

double NNfunction_sb_sRcR::synapse0x1a1dcc0() {
   return (neuron0x1a018d0()*0.46911);
}

double NNfunction_sb_sRcR::synapse0x1a1dd00() {
   return (neuron0x1a01c10()*-0.0684039);
}

double NNfunction_sb_sRcR::synapse0x1a1dd40() {
   return (neuron0x1a01f50()*0.426267);
}

double NNfunction_sb_sRcR::synapse0x1a1dd80() {
   return (neuron0x1a02290()*-0.291453);
}

double NNfunction_sb_sRcR::synapse0x1a1ddc0() {
   return (neuron0x1a025d0()*0.330826);
}

double NNfunction_sb_sRcR::synapse0x1a1de00() {
   return (neuron0x1a02910()*-0.758745);
}

double NNfunction_sb_sRcR::synapse0x1a1de40() {
   return (neuron0x1a02c50()*-0.483888);
}

double NNfunction_sb_sRcR::synapse0x1a1d8d0() {
   return (neuron0x1a02f90()*0.835288);
}

double NNfunction_sb_sRcR::synapse0x1a1d910() {
   return (neuron0x1a034f0()*-0.476737);
}

double NNfunction_sb_sRcR::synapse0x1a1df90() {
   return (neuron0x1a03710()*0.294841);
}

double NNfunction_sb_sRcR::synapse0x1a1dfd0() {
   return (neuron0x1a03a50()*-1.07721);
}

double NNfunction_sb_sRcR::synapse0x1a1e010() {
   return (neuron0x1a03d90()*0.526736);
}

double NNfunction_sb_sRcR::synapse0x1a1e050() {
   return (neuron0x1a040d0()*-0.540803);
}

double NNfunction_sb_sRcR::synapse0x1a1e090() {
   return (neuron0x1a04410()*-0.139408);
}

double NNfunction_sb_sRcR::synapse0x1a1e0d0() {
   return (neuron0x1a04750()*-0.404828);
}

double NNfunction_sb_sRcR::synapse0x1a1e450() {
   return (neuron0x19ffb90()*0.403526);
}

double NNfunction_sb_sRcR::synapse0x1a1e490() {
   return (neuron0x19ffed0()*0.160684);
}

double NNfunction_sb_sRcR::synapse0x1a1e4d0() {
   return (neuron0x1a00210()*-0.371216);
}

double NNfunction_sb_sRcR::synapse0x1a1e510() {
   return (neuron0x1a00550()*1.21821);
}

double NNfunction_sb_sRcR::synapse0x1a1e550() {
   return (neuron0x1a00890()*-0.976405);
}

double NNfunction_sb_sRcR::synapse0x1a1e590() {
   return (neuron0x1a00bd0()*1.17638);
}

double NNfunction_sb_sRcR::synapse0x1a1e5d0() {
   return (neuron0x1a00f10()*0.265664);
}

double NNfunction_sb_sRcR::synapse0x1a1e610() {
   return (neuron0x1a01250()*-0.146647);
}

double NNfunction_sb_sRcR::synapse0x1a1e650() {
   return (neuron0x1a01590()*-0.122671);
}

double NNfunction_sb_sRcR::synapse0x1a1e690() {
   return (neuron0x1a018d0()*0.441841);
}

double NNfunction_sb_sRcR::synapse0x1a1e6d0() {
   return (neuron0x1a01c10()*0.414551);
}

double NNfunction_sb_sRcR::synapse0x1a1e710() {
   return (neuron0x1a01f50()*-0.564407);
}

double NNfunction_sb_sRcR::synapse0x1a1e750() {
   return (neuron0x1a02290()*0.0432452);
}

double NNfunction_sb_sRcR::synapse0x1a1e790() {
   return (neuron0x1a025d0()*-0.159119);
}

double NNfunction_sb_sRcR::synapse0x1a1e7d0() {
   return (neuron0x1a02910()*-0.0219827);
}

double NNfunction_sb_sRcR::synapse0x1a1e810() {
   return (neuron0x1a02c50()*-0.350079);
}

double NNfunction_sb_sRcR::synapse0x1a1e2a0() {
   return (neuron0x1a02f90()*-0.317026);
}

double NNfunction_sb_sRcR::synapse0x1a1e2e0() {
   return (neuron0x1a034f0()*-0.231072);
}

double NNfunction_sb_sRcR::synapse0x1a1e960() {
   return (neuron0x1a03710()*-0.271544);
}

double NNfunction_sb_sRcR::synapse0x1a1e9a0() {
   return (neuron0x1a03a50()*0.837354);
}

double NNfunction_sb_sRcR::synapse0x1a1e9e0() {
   return (neuron0x1a03d90()*-0.197939);
}

double NNfunction_sb_sRcR::synapse0x1a1ea20() {
   return (neuron0x1a040d0()*-0.0829661);
}

double NNfunction_sb_sRcR::synapse0x1a1ea60() {
   return (neuron0x1a04410()*0.242492);
}

double NNfunction_sb_sRcR::synapse0x1a1eaa0() {
   return (neuron0x1a04750()*0.0440098);
}

double NNfunction_sb_sRcR::synapse0x1a1ee20() {
   return (neuron0x19ffb90()*0.132627);
}

double NNfunction_sb_sRcR::synapse0x1a1ee60() {
   return (neuron0x19ffed0()*0.195224);
}

double NNfunction_sb_sRcR::synapse0x1a1eea0() {
   return (neuron0x1a00210()*0.0380946);
}

double NNfunction_sb_sRcR::synapse0x1a1eee0() {
   return (neuron0x1a00550()*0.818885);
}

double NNfunction_sb_sRcR::synapse0x1a1ef20() {
   return (neuron0x1a00890()*-0.380394);
}

double NNfunction_sb_sRcR::synapse0x1a1ef60() {
   return (neuron0x1a00bd0()*-1.66891);
}

double NNfunction_sb_sRcR::synapse0x1a1efa0() {
   return (neuron0x1a00f10()*0.419548);
}

double NNfunction_sb_sRcR::synapse0x1a1efe0() {
   return (neuron0x1a01250()*-0.199756);
}

double NNfunction_sb_sRcR::synapse0x1a1f020() {
   return (neuron0x1a01590()*-0.109189);
}

double NNfunction_sb_sRcR::synapse0x1a1f060() {
   return (neuron0x1a018d0()*0.356997);
}

double NNfunction_sb_sRcR::synapse0x1a1f0a0() {
   return (neuron0x1a01c10()*0.156236);
}

double NNfunction_sb_sRcR::synapse0x1a1f0e0() {
   return (neuron0x1a01f50()*-0.297813);
}

double NNfunction_sb_sRcR::synapse0x1a1f120() {
   return (neuron0x1a02290()*0.479409);
}

double NNfunction_sb_sRcR::synapse0x1a1f160() {
   return (neuron0x1a025d0()*0.159524);
}

double NNfunction_sb_sRcR::synapse0x1a1f1a0() {
   return (neuron0x1a02910()*-0.305668);
}

double NNfunction_sb_sRcR::synapse0x1a1f1e0() {
   return (neuron0x1a02c50()*0.306191);
}

double NNfunction_sb_sRcR::synapse0x1a1ec70() {
   return (neuron0x1a02f90()*0.0529985);
}

double NNfunction_sb_sRcR::synapse0x1a1ecb0() {
   return (neuron0x1a034f0()*0.052203);
}

double NNfunction_sb_sRcR::synapse0x1a1f330() {
   return (neuron0x1a03710()*0.356413);
}

double NNfunction_sb_sRcR::synapse0x1a1f370() {
   return (neuron0x1a03a50()*0.523651);
}

double NNfunction_sb_sRcR::synapse0x1a1f3b0() {
   return (neuron0x1a03d90()*-0.192685);
}

double NNfunction_sb_sRcR::synapse0x1a1f3f0() {
   return (neuron0x1a040d0()*0.0558048);
}

double NNfunction_sb_sRcR::synapse0x1a1f430() {
   return (neuron0x1a04410()*0.326217);
}

double NNfunction_sb_sRcR::synapse0x1a1f470() {
   return (neuron0x1a04750()*-0.0114399);
}

double NNfunction_sb_sRcR::synapse0x1a1f7f0() {
   return (neuron0x19ffb90()*0.321127);
}

double NNfunction_sb_sRcR::synapse0x1a1f830() {
   return (neuron0x19ffed0()*0.793174);
}

double NNfunction_sb_sRcR::synapse0x1a1f870() {
   return (neuron0x1a00210()*0.322546);
}

double NNfunction_sb_sRcR::synapse0x1a1f8b0() {
   return (neuron0x1a00550()*1.05793);
}

double NNfunction_sb_sRcR::synapse0x1a1f8f0() {
   return (neuron0x1a00890()*-0.384388);
}

double NNfunction_sb_sRcR::synapse0x1a1f930() {
   return (neuron0x1a00bd0()*0.297718);
}

double NNfunction_sb_sRcR::synapse0x1a1f970() {
   return (neuron0x1a00f10()*-0.45462);
}

double NNfunction_sb_sRcR::synapse0x1a1f9b0() {
   return (neuron0x1a01250()*-0.231756);
}

double NNfunction_sb_sRcR::synapse0x1a1f9f0() {
   return (neuron0x1a01590()*-0.117194);
}

double NNfunction_sb_sRcR::synapse0x1a1fa30() {
   return (neuron0x1a018d0()*-0.102104);
}

double NNfunction_sb_sRcR::synapse0x1a1fa70() {
   return (neuron0x1a01c10()*0.236481);
}

double NNfunction_sb_sRcR::synapse0x1a1fab0() {
   return (neuron0x1a01f50()*-0.762573);
}

double NNfunction_sb_sRcR::synapse0x1a1faf0() {
   return (neuron0x1a02290()*0.407613);
}

double NNfunction_sb_sRcR::synapse0x1a1fb30() {
   return (neuron0x1a025d0()*0.195025);
}

double NNfunction_sb_sRcR::synapse0x1a1fb70() {
   return (neuron0x1a02910()*-0.288053);
}

double NNfunction_sb_sRcR::synapse0x1a1fbb0() {
   return (neuron0x1a02c50()*-0.73667);
}

double NNfunction_sb_sRcR::synapse0x1a1f640() {
   return (neuron0x1a02f90()*0.198238);
}

double NNfunction_sb_sRcR::synapse0x1a1f680() {
   return (neuron0x1a034f0()*0.452839);
}

double NNfunction_sb_sRcR::synapse0x1a1fd00() {
   return (neuron0x1a03710()*-0.761262);
}

double NNfunction_sb_sRcR::synapse0x1a1fd40() {
   return (neuron0x1a03a50()*-0.163879);
}

double NNfunction_sb_sRcR::synapse0x1a1fd80() {
   return (neuron0x1a03d90()*-0.779115);
}

double NNfunction_sb_sRcR::synapse0x1a1fdc0() {
   return (neuron0x1a040d0()*-0.517808);
}

double NNfunction_sb_sRcR::synapse0x1a1fe00() {
   return (neuron0x1a04410()*-0.022345);
}

double NNfunction_sb_sRcR::synapse0x1a1fe40() {
   return (neuron0x1a04750()*0.0206283);
}

double NNfunction_sb_sRcR::synapse0x1a201c0() {
   return (neuron0x19ffb90()*-0.0132695);
}

double NNfunction_sb_sRcR::synapse0x1a20200() {
   return (neuron0x19ffed0()*-0.0303016);
}

double NNfunction_sb_sRcR::synapse0x1a20240() {
   return (neuron0x1a00210()*-0.014026);
}

double NNfunction_sb_sRcR::synapse0x1a20280() {
   return (neuron0x1a00550()*-2.46868);
}

double NNfunction_sb_sRcR::synapse0x1a202c0() {
   return (neuron0x1a00890()*0.0204624);
}

double NNfunction_sb_sRcR::synapse0x1a20300() {
   return (neuron0x1a00bd0()*-0.00386334);
}

double NNfunction_sb_sRcR::synapse0x1a20340() {
   return (neuron0x1a00f10()*0.00620161);
}

double NNfunction_sb_sRcR::synapse0x1a20380() {
   return (neuron0x1a01250()*0.00286394);
}

double NNfunction_sb_sRcR::synapse0x1a203c0() {
   return (neuron0x1a01590()*-0.00037136);
}

double NNfunction_sb_sRcR::synapse0x1a20400() {
   return (neuron0x1a018d0()*0.0055858);
}

double NNfunction_sb_sRcR::synapse0x1a20440() {
   return (neuron0x1a01c10()*0.0123091);
}

double NNfunction_sb_sRcR::synapse0x1a20480() {
   return (neuron0x1a01f50()*0.0384495);
}

double NNfunction_sb_sRcR::synapse0x1a204c0() {
   return (neuron0x1a02290()*0.00869299);
}

double NNfunction_sb_sRcR::synapse0x1a20500() {
   return (neuron0x1a025d0()*-0.0200105);
}

double NNfunction_sb_sRcR::synapse0x1a20540() {
   return (neuron0x1a02910()*0.00549358);
}

double NNfunction_sb_sRcR::synapse0x1a20580() {
   return (neuron0x1a02c50()*0.188584);
}

double NNfunction_sb_sRcR::synapse0x1a20010() {
   return (neuron0x1a02f90()*0.00267325);
}

double NNfunction_sb_sRcR::synapse0x1a20050() {
   return (neuron0x1a034f0()*-0.0199104);
}

double NNfunction_sb_sRcR::synapse0x1a206d0() {
   return (neuron0x1a03710()*0.586409);
}

double NNfunction_sb_sRcR::synapse0x1a20710() {
   return (neuron0x1a03a50()*0.00475198);
}

double NNfunction_sb_sRcR::synapse0x1a20750() {
   return (neuron0x1a03d90()*-0.0108168);
}

double NNfunction_sb_sRcR::synapse0x1a20790() {
   return (neuron0x1a040d0()*0.00998735);
}

double NNfunction_sb_sRcR::synapse0x1a207d0() {
   return (neuron0x1a04410()*-0.00162522);
}

double NNfunction_sb_sRcR::synapse0x1a20810() {
   return (neuron0x1a04750()*-0.00197923);
}

double NNfunction_sb_sRcR::synapse0x1a20b90() {
   return (neuron0x19ffb90()*-0.00814204);
}

double NNfunction_sb_sRcR::synapse0x1a20bd0() {
   return (neuron0x19ffed0()*-0.0522505);
}

double NNfunction_sb_sRcR::synapse0x1a20c10() {
   return (neuron0x1a00210()*0.0231362);
}

double NNfunction_sb_sRcR::synapse0x1a20c50() {
   return (neuron0x1a00550()*-2.06836);
}

double NNfunction_sb_sRcR::synapse0x1a20c90() {
   return (neuron0x1a00890()*0.00980615);
}

double NNfunction_sb_sRcR::synapse0x1a20cd0() {
   return (neuron0x1a00bd0()*-0.01135);
}

double NNfunction_sb_sRcR::synapse0x1a20d10() {
   return (neuron0x1a00f10()*0.0647719);
}

double NNfunction_sb_sRcR::synapse0x1a20d50() {
   return (neuron0x1a01250()*0.0202484);
}

double NNfunction_sb_sRcR::synapse0x1a20d90() {
   return (neuron0x1a01590()*-0.0503325);
}

double NNfunction_sb_sRcR::synapse0x1a20dd0() {
   return (neuron0x1a018d0()*-0.00146952);
}

double NNfunction_sb_sRcR::synapse0x1a20e10() {
   return (neuron0x1a01c10()*-0.0223893);
}

double NNfunction_sb_sRcR::synapse0x1a20e50() {
   return (neuron0x1a01f50()*0.00872321);
}

double NNfunction_sb_sRcR::synapse0x1a20e90() {
   return (neuron0x1a02290()*0.0230391);
}

double NNfunction_sb_sRcR::synapse0x1a20ed0() {
   return (neuron0x1a025d0()*0.0369646);
}

double NNfunction_sb_sRcR::synapse0x1a20f10() {
   return (neuron0x1a02910()*0.0133666);
}

double NNfunction_sb_sRcR::synapse0x1a20f50() {
   return (neuron0x1a02c50()*0.494256);
}

double NNfunction_sb_sRcR::synapse0x1a209e0() {
   return (neuron0x1a02f90()*0.0238203);
}

double NNfunction_sb_sRcR::synapse0x1a20a20() {
   return (neuron0x1a034f0()*-0.021672);
}

double NNfunction_sb_sRcR::synapse0x1a210a0() {
   return (neuron0x1a03710()*1.0318);
}

double NNfunction_sb_sRcR::synapse0x1a210e0() {
   return (neuron0x1a03a50()*0.00892574);
}

double NNfunction_sb_sRcR::synapse0x1a21120() {
   return (neuron0x1a03d90()*-0.0591615);
}

double NNfunction_sb_sRcR::synapse0x1a21160() {
   return (neuron0x1a040d0()*-0.000559498);
}

double NNfunction_sb_sRcR::synapse0x1a211a0() {
   return (neuron0x1a04410()*0.0165414);
}

double NNfunction_sb_sRcR::synapse0x1a211e0() {
   return (neuron0x1a04750()*-0.0241706);
}

double NNfunction_sb_sRcR::synapse0x1a09c90() {
   return (neuron0x19ffb90()*0.977035);
}

double NNfunction_sb_sRcR::synapse0x1a09cd0() {
   return (neuron0x19ffed0()*0.275061);
}

double NNfunction_sb_sRcR::synapse0x1a09d10() {
   return (neuron0x1a00210()*0.853085);
}

double NNfunction_sb_sRcR::synapse0x1a09d50() {
   return (neuron0x1a00550()*-0.288038);
}

double NNfunction_sb_sRcR::synapse0x1a09d90() {
   return (neuron0x1a00890()*-0.456625);
}

double NNfunction_sb_sRcR::synapse0x1a09dd0() {
   return (neuron0x1a00bd0()*0.0485322);
}

double NNfunction_sb_sRcR::synapse0x1a09e10() {
   return (neuron0x1a00f10()*-0.452135);
}

double NNfunction_sb_sRcR::synapse0x1a09e50() {
   return (neuron0x1a01250()*0.613602);
}

double NNfunction_sb_sRcR::synapse0x1a21970() {
   return (neuron0x1a01590()*-0.445284);
}

double NNfunction_sb_sRcR::synapse0x1a219b0() {
   return (neuron0x1a018d0()*0.39367);
}

double NNfunction_sb_sRcR::synapse0x1a219f0() {
   return (neuron0x1a01c10()*-0.114712);
}

double NNfunction_sb_sRcR::synapse0x1a21a30() {
   return (neuron0x1a01f50()*-0.0739433);
}

double NNfunction_sb_sRcR::synapse0x1a21a70() {
   return (neuron0x1a02290()*-0.582901);
}

double NNfunction_sb_sRcR::synapse0x1a21ab0() {
   return (neuron0x1a025d0()*1.34133);
}

double NNfunction_sb_sRcR::synapse0x1a21af0() {
   return (neuron0x1a02910()*0.500532);
}

double NNfunction_sb_sRcR::synapse0x1a21b30() {
   return (neuron0x1a02c50()*0.417331);
}

double NNfunction_sb_sRcR::synapse0x1a213b0() {
   return (neuron0x1a02f90()*0.191594);
}

double NNfunction_sb_sRcR::synapse0x1a213f0() {
   return (neuron0x1a034f0()*-0.801056);
}

double NNfunction_sb_sRcR::synapse0x1a21c80() {
   return (neuron0x1a03710()*0.310951);
}

double NNfunction_sb_sRcR::synapse0x1a21cc0() {
   return (neuron0x1a03a50()*-0.220708);
}

double NNfunction_sb_sRcR::synapse0x1a21d00() {
   return (neuron0x1a03d90()*0.0153533);
}

double NNfunction_sb_sRcR::synapse0x1a21d40() {
   return (neuron0x1a040d0()*0.0568795);
}

double NNfunction_sb_sRcR::synapse0x1a21d80() {
   return (neuron0x1a04410()*0.845686);
}

double NNfunction_sb_sRcR::synapse0x1a21dc0() {
   return (neuron0x1a04750()*-0.59175);
}

double NNfunction_sb_sRcR::synapse0x1a22140() {
   return (neuron0x19ffb90()*0.00222718);
}

double NNfunction_sb_sRcR::synapse0x1a22180() {
   return (neuron0x19ffed0()*-0.0178186);
}

double NNfunction_sb_sRcR::synapse0x1a221c0() {
   return (neuron0x1a00210()*0.0325661);
}

double NNfunction_sb_sRcR::synapse0x1a22200() {
   return (neuron0x1a00550()*-0.00812083);
}

double NNfunction_sb_sRcR::synapse0x1a22240() {
   return (neuron0x1a00890()*0.0165901);
}

double NNfunction_sb_sRcR::synapse0x1a22280() {
   return (neuron0x1a00bd0()*0.0235717);
}

double NNfunction_sb_sRcR::synapse0x1a222c0() {
   return (neuron0x1a00f10()*0.0165478);
}

double NNfunction_sb_sRcR::synapse0x1a22300() {
   return (neuron0x1a01250()*0.0409893);
}

double NNfunction_sb_sRcR::synapse0x1a22340() {
   return (neuron0x1a01590()*-0.007291);
}

double NNfunction_sb_sRcR::synapse0x1a22380() {
   return (neuron0x1a018d0()*-0.0301891);
}

double NNfunction_sb_sRcR::synapse0x1a223c0() {
   return (neuron0x1a01c10()*0.0313344);
}

double NNfunction_sb_sRcR::synapse0x1a22400() {
   return (neuron0x1a01f50()*-0.0333361);
}

double NNfunction_sb_sRcR::synapse0x1a22440() {
   return (neuron0x1a02290()*-0.0275094);
}

double NNfunction_sb_sRcR::synapse0x1a22480() {
   return (neuron0x1a025d0()*-0.0176002);
}

double NNfunction_sb_sRcR::synapse0x1a224c0() {
   return (neuron0x1a02910()*-0.0466024);
}

double NNfunction_sb_sRcR::synapse0x1a22500() {
   return (neuron0x1a02c50()*-2.67754);
}

double NNfunction_sb_sRcR::synapse0x1a21f90() {
   return (neuron0x1a02f90()*0.000652548);
}

double NNfunction_sb_sRcR::synapse0x1a21fd0() {
   return (neuron0x1a034f0()*-0.0172863);
}

double NNfunction_sb_sRcR::synapse0x1a22650() {
   return (neuron0x1a03710()*0.0345759);
}

double NNfunction_sb_sRcR::synapse0x1a22690() {
   return (neuron0x1a03a50()*-0.00736789);
}

double NNfunction_sb_sRcR::synapse0x1a226d0() {
   return (neuron0x1a03d90()*0.0204415);
}

double NNfunction_sb_sRcR::synapse0x1a22710() {
   return (neuron0x1a040d0()*-0.022165);
}

double NNfunction_sb_sRcR::synapse0x1a22750() {
   return (neuron0x1a04410()*-0.0269802);
}

double NNfunction_sb_sRcR::synapse0x1a22790() {
   return (neuron0x1a04750()*0.0189253);
}

double NNfunction_sb_sRcR::synapse0x1a22b10() {
   return (neuron0x19ffb90()*0.149053);
}

double NNfunction_sb_sRcR::synapse0x1a22b50() {
   return (neuron0x19ffed0()*-0.851753);
}

double NNfunction_sb_sRcR::synapse0x1a22b90() {
   return (neuron0x1a00210()*0.273509);
}

double NNfunction_sb_sRcR::synapse0x1a22bd0() {
   return (neuron0x1a00550()*-0.176935);
}

double NNfunction_sb_sRcR::synapse0x1a22c10() {
   return (neuron0x1a00890()*0.217841);
}

double NNfunction_sb_sRcR::synapse0x1a22c50() {
   return (neuron0x1a00bd0()*0.566077);
}

double NNfunction_sb_sRcR::synapse0x1a22c90() {
   return (neuron0x1a00f10()*0.352778);
}

double NNfunction_sb_sRcR::synapse0x1a22cd0() {
   return (neuron0x1a01250()*1.26562);
}

double NNfunction_sb_sRcR::synapse0x1a22d10() {
   return (neuron0x1a01590()*0.839735);
}

double NNfunction_sb_sRcR::synapse0x1a22d50() {
   return (neuron0x1a018d0()*0.841823);
}

double NNfunction_sb_sRcR::synapse0x1a22d90() {
   return (neuron0x1a01c10()*0.74762);
}

double NNfunction_sb_sRcR::synapse0x1a22dd0() {
   return (neuron0x1a01f50()*0.189479);
}

double NNfunction_sb_sRcR::synapse0x1a22e10() {
   return (neuron0x1a02290()*-0.32599);
}

double NNfunction_sb_sRcR::synapse0x1a22e50() {
   return (neuron0x1a025d0()*0.235892);
}

double NNfunction_sb_sRcR::synapse0x1a22e90() {
   return (neuron0x1a02910()*-0.055769);
}

double NNfunction_sb_sRcR::synapse0x1a22ed0() {
   return (neuron0x1a02c50()*0.644217);
}

double NNfunction_sb_sRcR::synapse0x1a22960() {
   return (neuron0x1a02f90()*-0.23145);
}

double NNfunction_sb_sRcR::synapse0x1a229a0() {
   return (neuron0x1a034f0()*0.711387);
}

double NNfunction_sb_sRcR::synapse0x1a134d0() {
   return (neuron0x1a03710()*-0.942606);
}

double NNfunction_sb_sRcR::synapse0x1a13510() {
   return (neuron0x1a03a50()*1.05664);
}

double NNfunction_sb_sRcR::synapse0x1a13550() {
   return (neuron0x1a03d90()*-0.882014);
}

double NNfunction_sb_sRcR::synapse0x1a13590() {
   return (neuron0x1a040d0()*0.903795);
}

double NNfunction_sb_sRcR::synapse0x1a135d0() {
   return (neuron0x1a04410()*0.225319);
}

double NNfunction_sb_sRcR::synapse0x1a13610() {
   return (neuron0x1a04750()*0.689409);
}

double NNfunction_sb_sRcR::synapse0x1a13990() {
   return (neuron0x19ffb90()*-0.0516495);
}

double NNfunction_sb_sRcR::synapse0x1a139d0() {
   return (neuron0x19ffed0()*0.042883);
}

double NNfunction_sb_sRcR::synapse0x1a13a10() {
   return (neuron0x1a00210()*-0.380486);
}

double NNfunction_sb_sRcR::synapse0x1a13a50() {
   return (neuron0x1a00550()*3.18215);
}

double NNfunction_sb_sRcR::synapse0x1a13a90() {
   return (neuron0x1a00890()*0.0665939);
}

double NNfunction_sb_sRcR::synapse0x1a13ad0() {
   return (neuron0x1a00bd0()*0.18967);
}

double NNfunction_sb_sRcR::synapse0x1a13b10() {
   return (neuron0x1a00f10()*0.130447);
}

double NNfunction_sb_sRcR::synapse0x1a13b50() {
   return (neuron0x1a01250()*0.491313);
}

double NNfunction_sb_sRcR::synapse0x1a13b90() {
   return (neuron0x1a01590()*-0.0533319);
}

double NNfunction_sb_sRcR::synapse0x1a13bd0() {
   return (neuron0x1a018d0()*-0.182221);
}

double NNfunction_sb_sRcR::synapse0x1a13c10() {
   return (neuron0x1a01c10()*0.211531);
}

double NNfunction_sb_sRcR::synapse0x1a13c50() {
   return (neuron0x1a01f50()*-0.243572);
}

double NNfunction_sb_sRcR::synapse0x1a13c90() {
   return (neuron0x1a02290()*-0.314146);
}

double NNfunction_sb_sRcR::synapse0x1a13cd0() {
   return (neuron0x1a025d0()*-0.141326);
}

double NNfunction_sb_sRcR::synapse0x1a13d10() {
   return (neuron0x1a02910()*-0.0299397);
}

double NNfunction_sb_sRcR::synapse0x1a13d50() {
   return (neuron0x1a02c50()*-0.391852);
}

double NNfunction_sb_sRcR::synapse0x1a137e0() {
   return (neuron0x1a02f90()*0.253717);
}

double NNfunction_sb_sRcR::synapse0x1a13820() {
   return (neuron0x1a034f0()*0.00882593);
}

double NNfunction_sb_sRcR::synapse0x1a13ea0() {
   return (neuron0x1a03710()*0.0478608);
}

double NNfunction_sb_sRcR::synapse0x1a13ee0() {
   return (neuron0x1a03a50()*-0.352469);
}

double NNfunction_sb_sRcR::synapse0x1a13f20() {
   return (neuron0x1a03d90()*-0.433704);
}

double NNfunction_sb_sRcR::synapse0x1a13f60() {
   return (neuron0x1a040d0()*-0.175005);
}

double NNfunction_sb_sRcR::synapse0x1a13fa0() {
   return (neuron0x1a04410()*0.414809);
}

double NNfunction_sb_sRcR::synapse0x1a13fe0() {
   return (neuron0x1a04750()*0.256568);
}

double NNfunction_sb_sRcR::synapse0x1a14360() {
   return (neuron0x19ffb90()*-0.758448);
}

double NNfunction_sb_sRcR::synapse0x1a143a0() {
   return (neuron0x19ffed0()*0.559329);
}

double NNfunction_sb_sRcR::synapse0x1a143e0() {
   return (neuron0x1a00210()*0.813091);
}

double NNfunction_sb_sRcR::synapse0x1a14420() {
   return (neuron0x1a00550()*0.371398);
}

double NNfunction_sb_sRcR::synapse0x1a14460() {
   return (neuron0x1a00890()*-0.0277422);
}

double NNfunction_sb_sRcR::synapse0x1a144a0() {
   return (neuron0x1a00bd0()*-1.13658);
}

double NNfunction_sb_sRcR::synapse0x1a144e0() {
   return (neuron0x1a00f10()*-0.295676);
}

double NNfunction_sb_sRcR::synapse0x1a14520() {
   return (neuron0x1a01250()*0.564061);
}

double NNfunction_sb_sRcR::synapse0x1a14560() {
   return (neuron0x1a01590()*0.727517);
}

double NNfunction_sb_sRcR::synapse0x1a145a0() {
   return (neuron0x1a018d0()*0.656101);
}

double NNfunction_sb_sRcR::synapse0x1a145e0() {
   return (neuron0x1a01c10()*-0.695594);
}

double NNfunction_sb_sRcR::synapse0x1a14620() {
   return (neuron0x1a01f50()*0.00534056);
}

double NNfunction_sb_sRcR::synapse0x1a14660() {
   return (neuron0x1a02290()*-0.181103);
}

double NNfunction_sb_sRcR::synapse0x1a146a0() {
   return (neuron0x1a025d0()*0.121075);
}

double NNfunction_sb_sRcR::synapse0x1a146e0() {
   return (neuron0x1a02910()*-0.683688);
}

double NNfunction_sb_sRcR::synapse0x1a14720() {
   return (neuron0x1a02c50()*-0.493643);
}

double NNfunction_sb_sRcR::synapse0x1a141b0() {
   return (neuron0x1a02f90()*0.0531402);
}

double NNfunction_sb_sRcR::synapse0x1a141f0() {
   return (neuron0x1a034f0()*0.104445);
}

double NNfunction_sb_sRcR::synapse0x1a14870() {
   return (neuron0x1a03710()*-0.0257735);
}

double NNfunction_sb_sRcR::synapse0x1a148b0() {
   return (neuron0x1a03a50()*0.031637);
}

double NNfunction_sb_sRcR::synapse0x1a148f0() {
   return (neuron0x1a03d90()*-0.00266403);
}

double NNfunction_sb_sRcR::synapse0x1a14930() {
   return (neuron0x1a040d0()*0.791429);
}

double NNfunction_sb_sRcR::synapse0x1a14970() {
   return (neuron0x1a04410()*0.254465);
}

double NNfunction_sb_sRcR::synapse0x1a149b0() {
   return (neuron0x1a04750()*0.224164);
}

double NNfunction_sb_sRcR::synapse0x1a14d30() {
   return (neuron0x19ffb90()*-0.141516);
}

double NNfunction_sb_sRcR::synapse0x1a14d70() {
   return (neuron0x19ffed0()*-0.775928);
}

double NNfunction_sb_sRcR::synapse0x1a14db0() {
   return (neuron0x1a00210()*0.055693);
}

double NNfunction_sb_sRcR::synapse0x1a14df0() {
   return (neuron0x1a00550()*-0.270918);
}

double NNfunction_sb_sRcR::synapse0x1a14e30() {
   return (neuron0x1a00890()*-1.02173);
}

double NNfunction_sb_sRcR::synapse0x1a14e70() {
   return (neuron0x1a00bd0()*0.726673);
}

double NNfunction_sb_sRcR::synapse0x1a14eb0() {
   return (neuron0x1a00f10()*-0.701952);
}

double NNfunction_sb_sRcR::synapse0x1a14ef0() {
   return (neuron0x1a01250()*-0.128973);
}

double NNfunction_sb_sRcR::synapse0x1a14f30() {
   return (neuron0x1a01590()*0.0698998);
}

double NNfunction_sb_sRcR::synapse0x1a14f70() {
   return (neuron0x1a018d0()*-0.275466);
}

double NNfunction_sb_sRcR::synapse0x1a14fb0() {
   return (neuron0x1a01c10()*0.152607);
}

double NNfunction_sb_sRcR::synapse0x1a14ff0() {
   return (neuron0x1a01f50()*1.03942);
}

double NNfunction_sb_sRcR::synapse0x1a15030() {
   return (neuron0x1a02290()*0.255435);
}

double NNfunction_sb_sRcR::synapse0x1a15070() {
   return (neuron0x1a025d0()*-0.0953982);
}

double NNfunction_sb_sRcR::synapse0x1a150b0() {
   return (neuron0x1a02910()*-0.335851);
}

double NNfunction_sb_sRcR::synapse0x1a150f0() {
   return (neuron0x1a02c50()*-1.13737);
}

double NNfunction_sb_sRcR::synapse0x1a14b80() {
   return (neuron0x1a02f90()*-0.277911);
}

double NNfunction_sb_sRcR::synapse0x1a14bc0() {
   return (neuron0x1a034f0()*-0.67502);
}

double NNfunction_sb_sRcR::synapse0x1a15240() {
   return (neuron0x1a03710()*-0.884297);
}

double NNfunction_sb_sRcR::synapse0x1a15280() {
   return (neuron0x1a03a50()*-0.0839047);
}

double NNfunction_sb_sRcR::synapse0x1a152c0() {
   return (neuron0x1a03d90()*0.424255);
}

double NNfunction_sb_sRcR::synapse0x1a15300() {
   return (neuron0x1a040d0()*-0.565186);
}

double NNfunction_sb_sRcR::synapse0x1a15340() {
   return (neuron0x1a04410()*0.101526);
}

double NNfunction_sb_sRcR::synapse0x1a15380() {
   return (neuron0x1a04750()*0.330599);
}

double NNfunction_sb_sRcR::synapse0x1a27250() {
   return (neuron0x19ffb90()*-0.470212);
}

double NNfunction_sb_sRcR::synapse0x1a27290() {
   return (neuron0x19ffed0()*0.749684);
}

double NNfunction_sb_sRcR::synapse0x1a272d0() {
   return (neuron0x1a00210()*-0.25746);
}

double NNfunction_sb_sRcR::synapse0x1a27310() {
   return (neuron0x1a00550()*0.21317);
}

double NNfunction_sb_sRcR::synapse0x1a27350() {
   return (neuron0x1a00890()*0.142418);
}

double NNfunction_sb_sRcR::synapse0x1a27390() {
   return (neuron0x1a00bd0()*-0.101537);
}

double NNfunction_sb_sRcR::synapse0x1a273d0() {
   return (neuron0x1a00f10()*-0.380041);
}

double NNfunction_sb_sRcR::synapse0x1a27410() {
   return (neuron0x1a01250()*0.467839);
}

double NNfunction_sb_sRcR::synapse0x1a27450() {
   return (neuron0x1a01590()*-0.818056);
}

double NNfunction_sb_sRcR::synapse0x1a27490() {
   return (neuron0x1a018d0()*-1.27396);
}

double NNfunction_sb_sRcR::synapse0x1a274d0() {
   return (neuron0x1a01c10()*-0.107221);
}

double NNfunction_sb_sRcR::synapse0x1a27510() {
   return (neuron0x1a01f50()*-0.0327867);
}

double NNfunction_sb_sRcR::synapse0x1a27550() {
   return (neuron0x1a02290()*1.22548);
}

double NNfunction_sb_sRcR::synapse0x1a27590() {
   return (neuron0x1a025d0()*0.35492);
}

double NNfunction_sb_sRcR::synapse0x1a275d0() {
   return (neuron0x1a02910()*0.957909);
}

double NNfunction_sb_sRcR::synapse0x1a27610() {
   return (neuron0x1a02c50()*0.140763);
}

double NNfunction_sb_sRcR::synapse0x1a153c0() {
   return (neuron0x1a02f90()*0.0284807);
}

double NNfunction_sb_sRcR::synapse0x1a15400() {
   return (neuron0x1a034f0()*-1.19682);
}

double NNfunction_sb_sRcR::synapse0x1a27760() {
   return (neuron0x1a03710()*-0.0543866);
}

double NNfunction_sb_sRcR::synapse0x1a277a0() {
   return (neuron0x1a03a50()*-1.01827);
}

double NNfunction_sb_sRcR::synapse0x1a277e0() {
   return (neuron0x1a03d90()*-0.939017);
}

double NNfunction_sb_sRcR::synapse0x1a27820() {
   return (neuron0x1a040d0()*-0.174835);
}

double NNfunction_sb_sRcR::synapse0x1a27860() {
   return (neuron0x1a04410()*0.602233);
}

double NNfunction_sb_sRcR::synapse0x1a278a0() {
   return (neuron0x1a04750()*-0.190946);
}

double NNfunction_sb_sRcR::synapse0x1a27c20() {
   return (neuron0x19ffb90()*0.0999783);
}

double NNfunction_sb_sRcR::synapse0x1a27c60() {
   return (neuron0x19ffed0()*0.495229);
}

double NNfunction_sb_sRcR::synapse0x1a27ca0() {
   return (neuron0x1a00210()*-0.105331);
}

double NNfunction_sb_sRcR::synapse0x1a27ce0() {
   return (neuron0x1a00550()*-0.233432);
}

double NNfunction_sb_sRcR::synapse0x1a27d20() {
   return (neuron0x1a00890()*-0.338875);
}

double NNfunction_sb_sRcR::synapse0x1a27d60() {
   return (neuron0x1a00bd0()*-0.428155);
}

double NNfunction_sb_sRcR::synapse0x1a27da0() {
   return (neuron0x1a00f10()*1.7991);
}

double NNfunction_sb_sRcR::synapse0x1a27de0() {
   return (neuron0x1a01250()*0.224469);
}

double NNfunction_sb_sRcR::synapse0x1a27e20() {
   return (neuron0x1a01590()*-0.217733);
}

double NNfunction_sb_sRcR::synapse0x1a27e60() {
   return (neuron0x1a018d0()*0.249131);
}

double NNfunction_sb_sRcR::synapse0x1a27ea0() {
   return (neuron0x1a01c10()*0.779206);
}

double NNfunction_sb_sRcR::synapse0x1a27ee0() {
   return (neuron0x1a01f50()*-0.497915);
}

double NNfunction_sb_sRcR::synapse0x1a27f20() {
   return (neuron0x1a02290()*0.215617);
}

double NNfunction_sb_sRcR::synapse0x1a27f60() {
   return (neuron0x1a025d0()*0.75511);
}

double NNfunction_sb_sRcR::synapse0x1a27fa0() {
   return (neuron0x1a02910()*-0.645355);
}

double NNfunction_sb_sRcR::synapse0x1a27fe0() {
   return (neuron0x1a02c50()*1.24187);
}

double NNfunction_sb_sRcR::synapse0x1a27a70() {
   return (neuron0x1a02f90()*0.54124);
}

double NNfunction_sb_sRcR::synapse0x1a27ab0() {
   return (neuron0x1a034f0()*-0.0391255);
}

double NNfunction_sb_sRcR::synapse0x1a28130() {
   return (neuron0x1a03710()*-0.600046);
}

double NNfunction_sb_sRcR::synapse0x1a28170() {
   return (neuron0x1a03a50()*0.105632);
}

double NNfunction_sb_sRcR::synapse0x1a281b0() {
   return (neuron0x1a03d90()*0.244598);
}

double NNfunction_sb_sRcR::synapse0x1a281f0() {
   return (neuron0x1a040d0()*-0.574162);
}

double NNfunction_sb_sRcR::synapse0x1a28230() {
   return (neuron0x1a04410()*0.33307);
}

double NNfunction_sb_sRcR::synapse0x1a28270() {
   return (neuron0x1a04750()*0.210528);
}

double NNfunction_sb_sRcR::synapse0x1a285f0() {
   return (neuron0x19ffb90()*-0.251717);
}

double NNfunction_sb_sRcR::synapse0x1a28630() {
   return (neuron0x19ffed0()*-0.137544);
}

double NNfunction_sb_sRcR::synapse0x1a28670() {
   return (neuron0x1a00210()*0.677342);
}

double NNfunction_sb_sRcR::synapse0x1a286b0() {
   return (neuron0x1a00550()*-0.0110994);
}

double NNfunction_sb_sRcR::synapse0x1a286f0() {
   return (neuron0x1a00890()*0.780578);
}

double NNfunction_sb_sRcR::synapse0x1a28730() {
   return (neuron0x1a00bd0()*1.06038);
}

double NNfunction_sb_sRcR::synapse0x1a28770() {
   return (neuron0x1a00f10()*-0.620489);
}

double NNfunction_sb_sRcR::synapse0x1a287b0() {
   return (neuron0x1a01250()*1.09783);
}

double NNfunction_sb_sRcR::synapse0x1a287f0() {
   return (neuron0x1a01590()*0.426689);
}

double NNfunction_sb_sRcR::synapse0x1a28830() {
   return (neuron0x1a018d0()*-0.0594029);
}

double NNfunction_sb_sRcR::synapse0x1a28870() {
   return (neuron0x1a01c10()*0.23184);
}

double NNfunction_sb_sRcR::synapse0x1a288b0() {
   return (neuron0x1a01f50()*0.174336);
}

double NNfunction_sb_sRcR::synapse0x1a288f0() {
   return (neuron0x1a02290()*0.347534);
}

double NNfunction_sb_sRcR::synapse0x1a28930() {
   return (neuron0x1a025d0()*-0.575896);
}

double NNfunction_sb_sRcR::synapse0x1a28970() {
   return (neuron0x1a02910()*0.574624);
}

double NNfunction_sb_sRcR::synapse0x1a289b0() {
   return (neuron0x1a02c50()*-0.31738);
}

double NNfunction_sb_sRcR::synapse0x1a28440() {
   return (neuron0x1a02f90()*1.06276);
}

double NNfunction_sb_sRcR::synapse0x1a28480() {
   return (neuron0x1a034f0()*0.411921);
}

double NNfunction_sb_sRcR::synapse0x1a28b00() {
   return (neuron0x1a03710()*0.122216);
}

double NNfunction_sb_sRcR::synapse0x1a28b40() {
   return (neuron0x1a03a50()*-0.714753);
}

double NNfunction_sb_sRcR::synapse0x1a28b80() {
   return (neuron0x1a03d90()*0.195486);
}

double NNfunction_sb_sRcR::synapse0x1a28bc0() {
   return (neuron0x1a040d0()*-0.964322);
}

double NNfunction_sb_sRcR::synapse0x1a28c00() {
   return (neuron0x1a04410()*-0.108296);
}

double NNfunction_sb_sRcR::synapse0x1a28c40() {
   return (neuron0x1a04750()*0.1836);
}

double NNfunction_sb_sRcR::synapse0x1a28fc0() {
   return (neuron0x19ffb90()*0.0278813);
}

double NNfunction_sb_sRcR::synapse0x1a29000() {
   return (neuron0x19ffed0()*-0.0183469);
}

double NNfunction_sb_sRcR::synapse0x1a29040() {
   return (neuron0x1a00210()*0.00510245);
}

double NNfunction_sb_sRcR::synapse0x1a29080() {
   return (neuron0x1a00550()*0.0741817);
}

double NNfunction_sb_sRcR::synapse0x1a290c0() {
   return (neuron0x1a00890()*0.0242427);
}

double NNfunction_sb_sRcR::synapse0x1a29100() {
   return (neuron0x1a00bd0()*-0.0181671);
}

double NNfunction_sb_sRcR::synapse0x1a29140() {
   return (neuron0x1a00f10()*0.0112789);
}

double NNfunction_sb_sRcR::synapse0x1a29180() {
   return (neuron0x1a01250()*-0.0528573);
}

double NNfunction_sb_sRcR::synapse0x1a291c0() {
   return (neuron0x1a01590()*-0.0660191);
}

double NNfunction_sb_sRcR::synapse0x1a29200() {
   return (neuron0x1a018d0()*0.0434361);
}

double NNfunction_sb_sRcR::synapse0x1a29240() {
   return (neuron0x1a01c10()*0.012521);
}

double NNfunction_sb_sRcR::synapse0x1a29280() {
   return (neuron0x1a01f50()*-0.694135);
}

double NNfunction_sb_sRcR::synapse0x1a292c0() {
   return (neuron0x1a02290()*-0.537975);
}

double NNfunction_sb_sRcR::synapse0x1a29300() {
   return (neuron0x1a025d0()*0.0632146);
}

double NNfunction_sb_sRcR::synapse0x1a29340() {
   return (neuron0x1a02910()*-0.278293);
}

double NNfunction_sb_sRcR::synapse0x1a29380() {
   return (neuron0x1a02c50()*0.0495134);
}

double NNfunction_sb_sRcR::synapse0x1a28e10() {
   return (neuron0x1a02f90()*0.039756);
}

double NNfunction_sb_sRcR::synapse0x1a28e50() {
   return (neuron0x1a034f0()*-0.332453);
}

double NNfunction_sb_sRcR::synapse0x1a294d0() {
   return (neuron0x1a03710()*0.0808953);
}

double NNfunction_sb_sRcR::synapse0x1a29510() {
   return (neuron0x1a03a50()*0.0769452);
}

double NNfunction_sb_sRcR::synapse0x1a29550() {
   return (neuron0x1a03d90()*0.00270041);
}

double NNfunction_sb_sRcR::synapse0x1a29590() {
   return (neuron0x1a040d0()*0.0227481);
}

double NNfunction_sb_sRcR::synapse0x1a295d0() {
   return (neuron0x1a04410()*-0.0309428);
}

double NNfunction_sb_sRcR::synapse0x1a29610() {
   return (neuron0x1a04750()*-0.00731456);
}

double NNfunction_sb_sRcR::synapse0x1a070c0() {
   return (neuron0x1a04bc0()*0.274481);
}

double NNfunction_sb_sRcR::synapse0x1a07100() {
   return (neuron0x1a05510()*-0.0750746);
}

double NNfunction_sb_sRcR::synapse0x1a07a90() {
   return (neuron0x1a05ff0()*0.468679);
}

double NNfunction_sb_sRcR::synapse0x1a07ad0() {
   return (neuron0x1a05a90()*0.0871009);
}

double NNfunction_sb_sRcR::synapse0x1a08860() {
   return (neuron0x1a06e10()*0.00170822);
}

double NNfunction_sb_sRcR::synapse0x1a088a0() {
   return (neuron0x1a077e0()*1.07625);
}

double NNfunction_sb_sRcR::synapse0x1a09230() {
   return (neuron0x1a085b0()*-0.0544504);
}

double NNfunction_sb_sRcR::synapse0x1a09270() {
   return (neuron0x1a08f80()*-0.208289);
}

double NNfunction_sb_sRcR::synapse0x1a09c00() {
   return (neuron0x1a09950()*-0.149405);
}

double NNfunction_sb_sRcR::synapse0x1a09c40() {
   return (neuron0x1a0a430()*-2.28177);
}

double NNfunction_sb_sRcR::synapse0x1a0a6e0() {
   return (neuron0x1a0ae00()*0.0463311);
}

double NNfunction_sb_sRcR::synapse0x1a0a720() {
   return (neuron0x1a07ee0()*1.09242);
}

double NNfunction_sb_sRcR::synapse0x1a0b0b0() {
   return (neuron0x1a0c9b0()*0.0685468);
}

double NNfunction_sb_sRcR::synapse0x1a0b0f0() {
   return (neuron0x1a0d380()*-0.135297);
}

double NNfunction_sb_sRcR::synapse0x1a08190() {
   return (neuron0x1a0dd50()*0.198887);
}

double NNfunction_sb_sRcR::synapse0x1a081d0() {
   return (neuron0x1a0e720()*0.647522);
}

double NNfunction_sb_sRcR::synapse0x1a0cc60() {
   return (neuron0x1a10530()*2.56751);
}

double NNfunction_sb_sRcR::synapse0x1a0cca0() {
   return (neuron0x1a10810()*0.133602);
}

double NNfunction_sb_sRcR::synapse0x1a0d630() {
   return (neuron0x1a111e0()*0.117713);
}

double NNfunction_sb_sRcR::synapse0x1a0d670() {
   return (neuron0x1a11bb0()*0.0218025);
}

double NNfunction_sb_sRcR::synapse0x1a0e000() {
   return (neuron0x1a12580()*2.03158);
}

double NNfunction_sb_sRcR::synapse0x1a0e040() {
   return (neuron0x1a12f50()*-1.00782);
}

double NNfunction_sb_sRcR::synapse0x1a0e9d0() {
   return (neuron0x1a0baa0()*-0.157098);
}

double NNfunction_sb_sRcR::synapse0x1a0ea10() {
   return (neuron0x1a0c470()*-0.485709);
}

double NNfunction_sb_sRcR::synapse0x1a02b30() {
   return (neuron0x1a15ce0()*-1.19546);
}

double NNfunction_sb_sRcR::synapse0x1a02b70() {
   return (neuron0x1a166b0()*0.171235);
}

double NNfunction_sb_sRcR::synapse0x1a10ac0() {
   return (neuron0x1a17080()*0.0197131);
}

double NNfunction_sb_sRcR::synapse0x1a10b00() {
   return (neuron0x1a17a50()*0.0716875);
}

double NNfunction_sb_sRcR::synapse0x1a11490() {
   return (neuron0x1a18420()*0.0802012);
}

double NNfunction_sb_sRcR::synapse0x1a114d0() {
   return (neuron0x1a18df0()*-0.145305);
}

double NNfunction_sb_sRcR::synapse0x1a11e60() {
   return (neuron0x1a197c0()*-0.0558398);
}

double NNfunction_sb_sRcR::synapse0x1a11ea0() {
   return (neuron0x1a1a190()*1.56868);
}

double NNfunction_sb_sRcR::synapse0x1a12830() {
   return (neuron0x1a10220()*0.103099);
}

double NNfunction_sb_sRcR::synapse0x1a12870() {
   return (neuron0x1a1cd70()*-0.0549719);
}

double NNfunction_sb_sRcR::synapse0x1a13200() {
   return (neuron0x1a1d740()*-0.139694);
}

double NNfunction_sb_sRcR::synapse0x1a13240() {
   return (neuron0x1a1e110()*-0.0838357);
}

double NNfunction_sb_sRcR::synapse0x1a0bd50() {
   return (neuron0x1a1eae0()*0.0446716);
}

double NNfunction_sb_sRcR::synapse0x1a0bd90() {
   return (neuron0x1a1f4b0()*0.0278074);
}

double NNfunction_sb_sRcR::synapse0x1a15600() {
   return (neuron0x1a1fe80()*1.01278);
}

double NNfunction_sb_sRcR::synapse0x1a15640() {
   return (neuron0x1a20850()*-0.303367);
}

double NNfunction_sb_sRcR::synapse0x1a15f90() {
   return (neuron0x1a21220()*0.25259);
}

double NNfunction_sb_sRcR::synapse0x1a15fd0() {
   return (neuron0x1a21e00()*-1.35401);
}

double NNfunction_sb_sRcR::synapse0x1a16960() {
   return (neuron0x1a227d0()*-0.0318541);
}

double NNfunction_sb_sRcR::synapse0x1a169a0() {
   return (neuron0x1a13650()*-0.277108);
}

double NNfunction_sb_sRcR::synapse0x1a17330() {
   return (neuron0x1a14020()*0.21778);
}

double NNfunction_sb_sRcR::synapse0x1a17370() {
   return (neuron0x1a149f0()*0.115773);
}

double NNfunction_sb_sRcR::synapse0x1a17d00() {
   return (neuron0x1a27030()*-0.0816665);
}

double NNfunction_sb_sRcR::synapse0x1a17d40() {
   return (neuron0x1a278e0()*0.175847);
}

double NNfunction_sb_sRcR::synapse0x1a186d0() {
   return (neuron0x1a282b0()*0.0930073);
}

double NNfunction_sb_sRcR::synapse0x1a18710() {
   return (neuron0x1a28c80()*0.178068);
}

double NNfunction_sb_sRcR::synapse0x1a0fa00() {
   return (neuron0x1a04bc0()*-0.0228435);
}

double NNfunction_sb_sRcR::synapse0x1a0fa40() {
   return (neuron0x1a05510()*0.00247932);
}

double NNfunction_sb_sRcR::synapse0x1a1d020() {
   return (neuron0x1a05ff0()*0.269302);
}

double NNfunction_sb_sRcR::synapse0x1a1d060() {
   return (neuron0x1a05a90()*-0.00213235);
}

double NNfunction_sb_sRcR::synapse0x1a1d9f0() {
   return (neuron0x1a06e10()*-0.0250278);
}

double NNfunction_sb_sRcR::synapse0x1a1da30() {
   return (neuron0x1a077e0()*0.232992);
}

double NNfunction_sb_sRcR::synapse0x1a1e3c0() {
   return (neuron0x1a085b0()*-0.00319092);
}

double NNfunction_sb_sRcR::synapse0x1a1e400() {
   return (neuron0x1a08f80()*0.0110144);
}

double NNfunction_sb_sRcR::synapse0x1a1ed90() {
   return (neuron0x1a09950()*0.00278805);
}

double NNfunction_sb_sRcR::synapse0x1a1edd0() {
   return (neuron0x1a0a430()*-0.325083);
}

double NNfunction_sb_sRcR::synapse0x1a1f760() {
   return (neuron0x1a0ae00()*-0.0119037);
}

double NNfunction_sb_sRcR::synapse0x1a1f7a0() {
   return (neuron0x1a07ee0()*-0.246585);
}

double NNfunction_sb_sRcR::synapse0x1a20130() {
   return (neuron0x1a0c9b0()*-0.020504);
}

double NNfunction_sb_sRcR::synapse0x1a20170() {
   return (neuron0x1a0d380()*0.0106623);
}

double NNfunction_sb_sRcR::synapse0x1a20b00() {
   return (neuron0x1a0dd50()*-0.0142621);
}

double NNfunction_sb_sRcR::synapse0x1a20b40() {
   return (neuron0x1a0e720()*-0.0701755);
}

double NNfunction_sb_sRcR::synapse0x1a214d0() {
   return (neuron0x1a10530()*0.0448707);
}

double NNfunction_sb_sRcR::synapse0x1a21510() {
   return (neuron0x1a10810()*0.000459743);
}

double NNfunction_sb_sRcR::synapse0x1a220b0() {
   return (neuron0x1a111e0()*-0.00956104);
}

double NNfunction_sb_sRcR::synapse0x1a220f0() {
   return (neuron0x1a11bb0()*0.00836844);
}

double NNfunction_sb_sRcR::synapse0x1a22a80() {
   return (neuron0x1a12580()*0.433072);
}

double NNfunction_sb_sRcR::synapse0x1a22ac0() {
   return (neuron0x1a12f50()*-2.41619);
}

double NNfunction_sb_sRcR::synapse0x1a13900() {
   return (neuron0x1a0baa0()*-0.809787);
}

double NNfunction_sb_sRcR::synapse0x1a13940() {
   return (neuron0x1a0c470()*-0.0400103);
}

double NNfunction_sb_sRcR::synapse0x1a142d0() {
   return (neuron0x1a15ce0()*1.26937);
}

double NNfunction_sb_sRcR::synapse0x1a14310() {
   return (neuron0x1a166b0()*-0.00713657);
}

double NNfunction_sb_sRcR::synapse0x1a14ca0() {
   return (neuron0x1a17080()*0.0599816);
}

double NNfunction_sb_sRcR::synapse0x1a14ce0() {
   return (neuron0x1a17a50()*-0.0180073);
}

double NNfunction_sb_sRcR::synapse0x1a271c0() {
   return (neuron0x1a18420()*-0.00465049);
}

double NNfunction_sb_sRcR::synapse0x1a27200() {
   return (neuron0x1a18df0()*0.000793321);
}

double NNfunction_sb_sRcR::synapse0x1a27b90() {
   return (neuron0x1a197c0()*0.000194889);
}

double NNfunction_sb_sRcR::synapse0x1a27bd0() {
   return (neuron0x1a1a190()*1.91676);
}

double NNfunction_sb_sRcR::synapse0x1a28560() {
   return (neuron0x1a10220()*-0.00946722);
}

double NNfunction_sb_sRcR::synapse0x1a285a0() {
   return (neuron0x1a1cd70()*-0.00466142);
}

double NNfunction_sb_sRcR::synapse0x1a28f30() {
   return (neuron0x1a1d740()*-0.00278045);
}

double NNfunction_sb_sRcR::synapse0x1a28f70() {
   return (neuron0x1a1e110()*0.00561681);
}

double NNfunction_sb_sRcR::synapse0x1a04de0() {
   return (neuron0x1a1eae0()*-0.0100117);
}

double NNfunction_sb_sRcR::synapse0x1a04e20() {
   return (neuron0x1a1f4b0()*-0.00782037);
}

double NNfunction_sb_sRcR::synapse0x1a190a0() {
   return (neuron0x1a1fe80()*0.841805);
}

double NNfunction_sb_sRcR::synapse0x1a190e0() {
   return (neuron0x1a20850()*0.495604);
}

double NNfunction_sb_sRcR::synapse0x17c9480() {
   return (neuron0x1a21220()*-0.0305028);
}

double NNfunction_sb_sRcR::synapse0x17c94c0() {
   return (neuron0x1a21e00()*-0.068497);
}

double NNfunction_sb_sRcR::synapse0x17c9500() {
   return (neuron0x1a227d0()*0.00794941);
}

double NNfunction_sb_sRcR::synapse0x1a29650() {
   return (neuron0x1a13650()*0.0285092);
}

double NNfunction_sb_sRcR::synapse0x1a29690() {
   return (neuron0x1a14020()*-0.0169861);
}

double NNfunction_sb_sRcR::synapse0x1a296d0() {
   return (neuron0x1a149f0()*-0.0137298);
}

double NNfunction_sb_sRcR::synapse0x1a29710() {
   return (neuron0x1a27030()*0.00124709);
}

double NNfunction_sb_sRcR::synapse0x1a305c0() {
   return (neuron0x1a278e0()*-0.0128381);
}

double NNfunction_sb_sRcR::synapse0x1a30600() {
   return (neuron0x1a282b0()*-0.0149108);
}

double NNfunction_sb_sRcR::synapse0x1a30640() {
   return (neuron0x1a28c80()*-0.340712);
}

double NNfunction_sb_sRcR::synapse0x1a309c0() {
   return (neuron0x1a04bc0()*-1.66017);
}

double NNfunction_sb_sRcR::synapse0x1a30a00() {
   return (neuron0x1a05510()*1.82468);
}

double NNfunction_sb_sRcR::synapse0x1a30a40() {
   return (neuron0x1a05ff0()*-0.6773);
}

double NNfunction_sb_sRcR::synapse0x1a30a80() {
   return (neuron0x1a05a90()*-1.46507);
}

double NNfunction_sb_sRcR::synapse0x1a30ac0() {
   return (neuron0x1a06e10()*1.36941);
}

double NNfunction_sb_sRcR::synapse0x1a30b00() {
   return (neuron0x1a077e0()*0.935588);
}

double NNfunction_sb_sRcR::synapse0x1a30b40() {
   return (neuron0x1a085b0()*0.26489);
}

double NNfunction_sb_sRcR::synapse0x1a30b80() {
   return (neuron0x1a08f80()*2.0809);
}

double NNfunction_sb_sRcR::synapse0x1a30bc0() {
   return (neuron0x1a09950()*1.4741);
}

double NNfunction_sb_sRcR::synapse0x1a30c00() {
   return (neuron0x1a0a430()*-0.302412);
}

double NNfunction_sb_sRcR::synapse0x1a30c40() {
   return (neuron0x1a0ae00()*-0.182448);
}

double NNfunction_sb_sRcR::synapse0x1a30c80() {
   return (neuron0x1a07ee0()*0.612019);
}

double NNfunction_sb_sRcR::synapse0x1a30cc0() {
   return (neuron0x1a0c9b0()*3.10366);
}

double NNfunction_sb_sRcR::synapse0x1a30d00() {
   return (neuron0x1a0d380()*-0.326441);
}

double NNfunction_sb_sRcR::synapse0x1a30d40() {
   return (neuron0x1a0dd50()*-1.91904);
}

double NNfunction_sb_sRcR::synapse0x1a30d80() {
   return (neuron0x1a0e720()*-1.14042);
}

double NNfunction_sb_sRcR::synapse0x1a30810() {
   return (neuron0x1a10530()*4.56612);
}

double NNfunction_sb_sRcR::synapse0x1a30850() {
   return (neuron0x1a10810()*-1.59677);
}

double NNfunction_sb_sRcR::synapse0x1a30ed0() {
   return (neuron0x1a111e0()*-1.37523);
}

double NNfunction_sb_sRcR::synapse0x1a30f10() {
   return (neuron0x1a11bb0()*2.05547);
}

double NNfunction_sb_sRcR::synapse0x1a30f50() {
   return (neuron0x1a12580()*4.25182);
}

double NNfunction_sb_sRcR::synapse0x1a30f90() {
   return (neuron0x1a12f50()*-0.435429);
}

double NNfunction_sb_sRcR::synapse0x1a30fd0() {
   return (neuron0x1a0baa0()*0.38872);
}

double NNfunction_sb_sRcR::synapse0x1a31010() {
   return (neuron0x1a0c470()*1.32017);
}

double NNfunction_sb_sRcR::synapse0x1a31050() {
   return (neuron0x1a15ce0()*-0.390584);
}

double NNfunction_sb_sRcR::synapse0x1a31090() {
   return (neuron0x1a166b0()*-1.47463);
}

double NNfunction_sb_sRcR::synapse0x1a310d0() {
   return (neuron0x1a17080()*0.148666);
}

double NNfunction_sb_sRcR::synapse0x1a31110() {
   return (neuron0x1a17a50()*-1.51952);
}

double NNfunction_sb_sRcR::synapse0x1a31150() {
   return (neuron0x1a18420()*-2.56388);
}

double NNfunction_sb_sRcR::synapse0x1a31190() {
   return (neuron0x1a18df0()*1.66689);
}

double NNfunction_sb_sRcR::synapse0x1a311d0() {
   return (neuron0x1a197c0()*1.66855);
}

double NNfunction_sb_sRcR::synapse0x1a31210() {
   return (neuron0x1a1a190()*2.25789);
}

double NNfunction_sb_sRcR::synapse0x1a30dc0() {
   return (neuron0x1a10220()*-1.41873);
}

double NNfunction_sb_sRcR::synapse0x1a30e00() {
   return (neuron0x1a1cd70()*-1.17132);
}

double NNfunction_sb_sRcR::synapse0x1a30e40() {
   return (neuron0x1a1d740()*2.32626);
}

double NNfunction_sb_sRcR::synapse0x1a30e80() {
   return (neuron0x1a1e110()*1.07312);
}

double NNfunction_sb_sRcR::synapse0x1a31460() {
   return (neuron0x1a1eae0()*2.25057);
}

double NNfunction_sb_sRcR::synapse0x1a314a0() {
   return (neuron0x1a1f4b0()*-0.918425);
}

double NNfunction_sb_sRcR::synapse0x1a314e0() {
   return (neuron0x1a1fe80()*1.72976);
}

double NNfunction_sb_sRcR::synapse0x1a31520() {
   return (neuron0x1a20850()*-5.26752);
}

double NNfunction_sb_sRcR::synapse0x1a31560() {
   return (neuron0x1a21220()*-1.44651);
}

double NNfunction_sb_sRcR::synapse0x1a315a0() {
   return (neuron0x1a21e00()*-1.96807);
}

double NNfunction_sb_sRcR::synapse0x1a315e0() {
   return (neuron0x1a227d0()*1.72189);
}

double NNfunction_sb_sRcR::synapse0x1a31620() {
   return (neuron0x1a13650()*-1.83836);
}

double NNfunction_sb_sRcR::synapse0x1a31660() {
   return (neuron0x1a14020()*-1.43634);
}

double NNfunction_sb_sRcR::synapse0x1a316a0() {
   return (neuron0x1a149f0()*-1.27095);
}

double NNfunction_sb_sRcR::synapse0x1a316e0() {
   return (neuron0x1a27030()*1.74734);
}

double NNfunction_sb_sRcR::synapse0x1a31720() {
   return (neuron0x1a278e0()*-1.61234);
}

double NNfunction_sb_sRcR::synapse0x1a31760() {
   return (neuron0x1a282b0()*0.952226);
}

double NNfunction_sb_sRcR::synapse0x1a317a0() {
   return (neuron0x1a28c80()*0.45048);
}

double NNfunction_sb_sRcR::synapse0x1a31b20() {
   return (neuron0x1a04bc0()*0.717929);
}

double NNfunction_sb_sRcR::synapse0x1a31b60() {
   return (neuron0x1a05510()*-1.15882);
}

double NNfunction_sb_sRcR::synapse0x1a31ba0() {
   return (neuron0x1a05ff0()*1.49346);
}

double NNfunction_sb_sRcR::synapse0x1a31be0() {
   return (neuron0x1a05a90()*1.08927);
}

double NNfunction_sb_sRcR::synapse0x1a31c20() {
   return (neuron0x1a06e10()*-2.95886);
}

double NNfunction_sb_sRcR::synapse0x1a31c60() {
   return (neuron0x1a077e0()*2.41589);
}

double NNfunction_sb_sRcR::synapse0x1a31ca0() {
   return (neuron0x1a085b0()*1.19808);
}

double NNfunction_sb_sRcR::synapse0x1a31ce0() {
   return (neuron0x1a08f80()*-0.895252);
}

double NNfunction_sb_sRcR::synapse0x1a31d20() {
   return (neuron0x1a09950()*-0.196677);
}

double NNfunction_sb_sRcR::synapse0x1a31d60() {
   return (neuron0x1a0a430()*-3.55756);
}

double NNfunction_sb_sRcR::synapse0x1a31da0() {
   return (neuron0x1a0ae00()*1.59136);
}

double NNfunction_sb_sRcR::synapse0x1a31de0() {
   return (neuron0x1a07ee0()*5.16728);
}

double NNfunction_sb_sRcR::synapse0x1a31e20() {
   return (neuron0x1a0c9b0()*-1.39273);
}

double NNfunction_sb_sRcR::synapse0x1a31e60() {
   return (neuron0x1a0d380()*1.50253);
}

double NNfunction_sb_sRcR::synapse0x1a31ea0() {
   return (neuron0x1a0dd50()*1.48683);
}

double NNfunction_sb_sRcR::synapse0x1a31ee0() {
   return (neuron0x1a0e720()*1.78984);
}

double NNfunction_sb_sRcR::synapse0x1a31970() {
   return (neuron0x1a10530()*2.03556);
}

double NNfunction_sb_sRcR::synapse0x1a319b0() {
   return (neuron0x1a10810()*0.392507);
}

double NNfunction_sb_sRcR::synapse0x1a32030() {
   return (neuron0x1a111e0()*1.1519);
}

double NNfunction_sb_sRcR::synapse0x1a32070() {
   return (neuron0x1a11bb0()*-1.69314);
}

double NNfunction_sb_sRcR::synapse0x1a320b0() {
   return (neuron0x1a12580()*2.65163);
}

double NNfunction_sb_sRcR::synapse0x1a320f0() {
   return (neuron0x1a12f50()*-1.67222);
}

double NNfunction_sb_sRcR::synapse0x1a32130() {
   return (neuron0x1a0baa0()*-0.357196);
}

double NNfunction_sb_sRcR::synapse0x1a32170() {
   return (neuron0x1a0c470()*-2.62944);
}

double NNfunction_sb_sRcR::synapse0x1a321b0() {
   return (neuron0x1a15ce0()*0.484248);
}

double NNfunction_sb_sRcR::synapse0x1a321f0() {
   return (neuron0x1a166b0()*0.658421);
}

double NNfunction_sb_sRcR::synapse0x1a32230() {
   return (neuron0x1a17080()*2.40374);
}

double NNfunction_sb_sRcR::synapse0x1a32270() {
   return (neuron0x1a17a50()*0.219306);
}

double NNfunction_sb_sRcR::synapse0x1a322b0() {
   return (neuron0x1a18420()*0.650787);
}

double NNfunction_sb_sRcR::synapse0x1a322f0() {
   return (neuron0x1a18df0()*-0.95123);
}

double NNfunction_sb_sRcR::synapse0x1a32330() {
   return (neuron0x1a197c0()*-0.966715);
}

double NNfunction_sb_sRcR::synapse0x1a32370() {
   return (neuron0x1a1a190()*-0.399734);
}

double NNfunction_sb_sRcR::synapse0x1a31f20() {
   return (neuron0x1a10220()*1.15413);
}

double NNfunction_sb_sRcR::synapse0x1a31f60() {
   return (neuron0x1a1cd70()*0.974517);
}

double NNfunction_sb_sRcR::synapse0x1a31fa0() {
   return (neuron0x1a1d740()*-1.05902);
}

double NNfunction_sb_sRcR::synapse0x1a31fe0() {
   return (neuron0x1a1e110()*-1.15402);
}

double NNfunction_sb_sRcR::synapse0x1a325c0() {
   return (neuron0x1a1eae0()*-1.26817);
}

double NNfunction_sb_sRcR::synapse0x1a32600() {
   return (neuron0x1a1f4b0()*1.44753);
}

double NNfunction_sb_sRcR::synapse0x1a32640() {
   return (neuron0x1a1fe80()*0.756344);
}

double NNfunction_sb_sRcR::synapse0x1a32680() {
   return (neuron0x1a20850()*-0.791308);
}

double NNfunction_sb_sRcR::synapse0x1a326c0() {
   return (neuron0x1a21220()*1.46327);
}

double NNfunction_sb_sRcR::synapse0x1a32700() {
   return (neuron0x1a21e00()*-1.13822);
}

double NNfunction_sb_sRcR::synapse0x1a32740() {
   return (neuron0x1a227d0()*-1.29309);
}

double NNfunction_sb_sRcR::synapse0x1a32780() {
   return (neuron0x1a13650()*0.160106);
}

double NNfunction_sb_sRcR::synapse0x1a327c0() {
   return (neuron0x1a14020()*0.0767292);
}

double NNfunction_sb_sRcR::synapse0x1a32800() {
   return (neuron0x1a149f0()*0.709861);
}

double NNfunction_sb_sRcR::synapse0x1a32840() {
   return (neuron0x1a27030()*-1.28125);
}

double NNfunction_sb_sRcR::synapse0x1a32880() {
   return (neuron0x1a278e0()*0.791942);
}

double NNfunction_sb_sRcR::synapse0x1a328c0() {
   return (neuron0x1a282b0()*-1.55028);
}

double NNfunction_sb_sRcR::synapse0x1a32900() {
   return (neuron0x1a28c80()*-2.48004);
}

double NNfunction_sb_sRcR::synapse0x1a32c80() {
   return (neuron0x1a04bc0()*-0.662206);
}

double NNfunction_sb_sRcR::synapse0x1a32cc0() {
   return (neuron0x1a05510()*-0.306803);
}

double NNfunction_sb_sRcR::synapse0x1a32d00() {
   return (neuron0x1a05ff0()*0.292449);
}

double NNfunction_sb_sRcR::synapse0x1a32d40() {
   return (neuron0x1a05a90()*-0.471491);
}

double NNfunction_sb_sRcR::synapse0x1a32d80() {
   return (neuron0x1a06e10()*-0.469015);
}

double NNfunction_sb_sRcR::synapse0x1a32dc0() {
   return (neuron0x1a077e0()*-0.235712);
}

double NNfunction_sb_sRcR::synapse0x1a32e00() {
   return (neuron0x1a085b0()*-0.158995);
}

double NNfunction_sb_sRcR::synapse0x1a32e40() {
   return (neuron0x1a08f80()*-0.823026);
}

double NNfunction_sb_sRcR::synapse0x1a32e80() {
   return (neuron0x1a09950()*-0.465765);
}

double NNfunction_sb_sRcR::synapse0x1a32ec0() {
   return (neuron0x1a0a430()*-0.635632);
}

double NNfunction_sb_sRcR::synapse0x1a32f00() {
   return (neuron0x1a0ae00()*-0.471585);
}

double NNfunction_sb_sRcR::synapse0x1a32f40() {
   return (neuron0x1a07ee0()*-0.434941);
}

double NNfunction_sb_sRcR::synapse0x1a32f80() {
   return (neuron0x1a0c9b0()*-0.353547);
}

double NNfunction_sb_sRcR::synapse0x1a32fc0() {
   return (neuron0x1a0d380()*-0.239591);
}

double NNfunction_sb_sRcR::synapse0x1a33000() {
   return (neuron0x1a0dd50()*-0.128325);
}

double NNfunction_sb_sRcR::synapse0x1a33040() {
   return (neuron0x1a0e720()*-0.567604);
}

double NNfunction_sb_sRcR::synapse0x1a32ad0() {
   return (neuron0x1a10530()*0.339463);
}

double NNfunction_sb_sRcR::synapse0x1a32b10() {
   return (neuron0x1a10810()*-0.086052);
}

double NNfunction_sb_sRcR::synapse0x1a33190() {
   return (neuron0x1a111e0()*0.285602);
}

double NNfunction_sb_sRcR::synapse0x1a331d0() {
   return (neuron0x1a11bb0()*-0.325783);
}

double NNfunction_sb_sRcR::synapse0x1a33210() {
   return (neuron0x1a12580()*0.382119);
}

double NNfunction_sb_sRcR::synapse0x1a33250() {
   return (neuron0x1a12f50()*-0.715959);
}

double NNfunction_sb_sRcR::synapse0x1a33290() {
   return (neuron0x1a0baa0()*-0.69621);
}

double NNfunction_sb_sRcR::synapse0x1a332d0() {
   return (neuron0x1a0c470()*-0.219322);
}

double NNfunction_sb_sRcR::synapse0x1a33310() {
   return (neuron0x1a15ce0()*-0.48849);
}

double NNfunction_sb_sRcR::synapse0x1a33350() {
   return (neuron0x1a166b0()*-0.510819);
}

double NNfunction_sb_sRcR::synapse0x1a33390() {
   return (neuron0x1a17080()*-0.490071);
}

double NNfunction_sb_sRcR::synapse0x1a333d0() {
   return (neuron0x1a17a50()*-0.100628);
}

double NNfunction_sb_sRcR::synapse0x1a33410() {
   return (neuron0x1a18420()*-0.782174);
}

double NNfunction_sb_sRcR::synapse0x1a33450() {
   return (neuron0x1a18df0()*-0.227657);
}

double NNfunction_sb_sRcR::synapse0x1a33490() {
   return (neuron0x1a197c0()*-0.614455);
}

double NNfunction_sb_sRcR::synapse0x1a334d0() {
   return (neuron0x1a1a190()*0.149074);
}

double NNfunction_sb_sRcR::synapse0x1a33080() {
   return (neuron0x1a10220()*-0.596522);
}

double NNfunction_sb_sRcR::synapse0x1a330c0() {
   return (neuron0x1a1cd70()*-0.557774);
}

double NNfunction_sb_sRcR::synapse0x1a33100() {
   return (neuron0x1a1d740()*-0.158193);
}

double NNfunction_sb_sRcR::synapse0x1a33140() {
   return (neuron0x1a1e110()*0.393229);
}

double NNfunction_sb_sRcR::synapse0x1a33720() {
   return (neuron0x1a1eae0()*-0.345072);
}

double NNfunction_sb_sRcR::synapse0x1a33760() {
   return (neuron0x1a1f4b0()*-0.331173);
}

double NNfunction_sb_sRcR::synapse0x1a337a0() {
   return (neuron0x1a1fe80()*-0.443809);
}

double NNfunction_sb_sRcR::synapse0x1a337e0() {
   return (neuron0x1a20850()*0.230594);
}

double NNfunction_sb_sRcR::synapse0x1a33820() {
   return (neuron0x1a21220()*-0.156723);
}

double NNfunction_sb_sRcR::synapse0x1a33860() {
   return (neuron0x1a21e00()*0.0472981);
}

double NNfunction_sb_sRcR::synapse0x1a338a0() {
   return (neuron0x1a227d0()*-0.117178);
}

double NNfunction_sb_sRcR::synapse0x1a338e0() {
   return (neuron0x1a13650()*-0.963022);
}

double NNfunction_sb_sRcR::synapse0x1a33920() {
   return (neuron0x1a14020()*-0.903829);
}

double NNfunction_sb_sRcR::synapse0x1a33960() {
   return (neuron0x1a149f0()*-0.774431);
}

double NNfunction_sb_sRcR::synapse0x1a339a0() {
   return (neuron0x1a27030()*-0.428552);
}

double NNfunction_sb_sRcR::synapse0x1a339e0() {
   return (neuron0x1a278e0()*-0.326851);
}

double NNfunction_sb_sRcR::synapse0x1a33a20() {
   return (neuron0x1a282b0()*-0.504782);
}

double NNfunction_sb_sRcR::synapse0x1a33a60() {
   return (neuron0x1a28c80()*-0.104723);
}

double NNfunction_sb_sRcR::synapse0x1a33cc0() {
   return (neuron0x1a2fe80()*-1.417);
}

double NNfunction_sb_sRcR::synapse0x1a33d00() {
   return (neuron0x1a30220()*-6.65479);
}

double NNfunction_sb_sRcR::synapse0x1a33d40() {
   return (neuron0x1a30680()*-5.11429);
}

double NNfunction_sb_sRcR::synapse0x1a33d80() {
   return (neuron0x1a317e0()*-5.2552);
}

double NNfunction_sb_sRcR::synapse0x1a33dc0() {
   return (neuron0x1a32940()*-0.10192);
}

