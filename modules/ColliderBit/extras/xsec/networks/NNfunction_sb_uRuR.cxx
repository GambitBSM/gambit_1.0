#include "NNfunction_sb_uRuR.h"
#include <cmath>

double NNfunction_sb_uRuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9099)/15.0296;
   input1 = (in1 - 59.9382)/725.335;
   input2 = (in2 - 366.717)/451.981;
   input3 = (in3 - 327.715)/628.244;
   input4 = (in4 - 788.261)/681.593;
   input5 = (in5 - 693.792)/660.288;
   input6 = (in6 - 698.256)/663.57;
   input7 = (in7 - 686.874)/653.113;
   input8 = (in8 - 676.03)/661.751;
   input9 = (in9 - 668.83)/650.06;
   input10 = (in10 - 668.185)/666.677;
   input11 = (in11 - 747.589)/568.126;
   input12 = (in12 - 748.596)/571.212;
   input13 = (in13 - 588.756)/372.19;
   input14 = (in14 - 609.545)/350.788;
   input15 = (in15 - 753.214)/563.211;
   input16 = (in16 - 520.102)/388.186;
   input17 = (in17 - 750.882)/579.045;
   input18 = (in18 - 750.513)/585.651;
   input19 = (in19 - 743.843)/571.3;
   input20 = (in20 - -252.517)/427.967;
   input21 = (in21 - -326.063)/906.877;
   input22 = (in22 - -3.54772)/896.365;
   input23 = (in23 - 14.643)/518.966;
   switch(index) {
     case 0:
         return neuron0x37681e0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRuR::Value(int index, double* input) {
   input0 = (input[0] - 22.9099)/15.0296;
   input1 = (input[1] - 59.9382)/725.335;
   input2 = (input[2] - 366.717)/451.981;
   input3 = (input[3] - 327.715)/628.244;
   input4 = (input[4] - 788.261)/681.593;
   input5 = (input[5] - 693.792)/660.288;
   input6 = (input[6] - 698.256)/663.57;
   input7 = (input[7] - 686.874)/653.113;
   input8 = (input[8] - 676.03)/661.751;
   input9 = (input[9] - 668.83)/650.06;
   input10 = (input[10] - 668.185)/666.677;
   input11 = (input[11] - 747.589)/568.126;
   input12 = (input[12] - 748.596)/571.212;
   input13 = (input[13] - 588.756)/372.19;
   input14 = (input[14] - 609.545)/350.788;
   input15 = (input[15] - 753.214)/563.211;
   input16 = (input[16] - 520.102)/388.186;
   input17 = (input[17] - 750.882)/579.045;
   input18 = (input[18] - 750.513)/585.651;
   input19 = (input[19] - 743.843)/571.3;
   input20 = (input[20] - -252.517)/427.967;
   input21 = (input[21] - -326.063)/906.877;
   input22 = (input[22] - -3.54772)/896.365;
   input23 = (input[23] - 14.643)/518.966;
   switch(index) {
     case 0:
         return neuron0x37681e0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRuR::neuron0x3734360() {
   return input0;
}

double NNfunction_sb_uRuR::neuron0x3734610() {
   return input1;
}

double NNfunction_sb_uRuR::neuron0x3734950() {
   return input2;
}

double NNfunction_sb_uRuR::neuron0x3734c90() {
   return input3;
}

double NNfunction_sb_uRuR::neuron0x3734fd0() {
   return input4;
}

double NNfunction_sb_uRuR::neuron0x3735310() {
   return input5;
}

double NNfunction_sb_uRuR::neuron0x3735650() {
   return input6;
}

double NNfunction_sb_uRuR::neuron0x3735990() {
   return input7;
}

double NNfunction_sb_uRuR::neuron0x3735cd0() {
   return input8;
}

double NNfunction_sb_uRuR::neuron0x3736010() {
   return input9;
}

double NNfunction_sb_uRuR::neuron0x3736350() {
   return input10;
}

double NNfunction_sb_uRuR::neuron0x3736690() {
   return input11;
}

double NNfunction_sb_uRuR::neuron0x37369d0() {
   return input12;
}

double NNfunction_sb_uRuR::neuron0x3736d10() {
   return input13;
}

double NNfunction_sb_uRuR::neuron0x3737050() {
   return input14;
}

double NNfunction_sb_uRuR::neuron0x3737390() {
   return input15;
}

double NNfunction_sb_uRuR::neuron0x37376d0() {
   return input16;
}

double NNfunction_sb_uRuR::neuron0x3737c30() {
   return input17;
}

double NNfunction_sb_uRuR::neuron0x3737e50() {
   return input18;
}

double NNfunction_sb_uRuR::neuron0x3738190() {
   return input19;
}

double NNfunction_sb_uRuR::neuron0x37384d0() {
   return input20;
}

double NNfunction_sb_uRuR::neuron0x3738810() {
   return input21;
}

double NNfunction_sb_uRuR::neuron0x3738b50() {
   return input22;
}

double NNfunction_sb_uRuR::neuron0x3738e90() {
   return input23;
}

double NNfunction_sb_uRuR::input0x3739300() {
   double input = 5.24103;
   input += synapse0x37342e0();
   input += synapse0x3734320();
   input += synapse0x37395b0();
   input += synapse0x37395f0();
   input += synapse0x3739630();
   input += synapse0x3739670();
   input += synapse0x37396b0();
   input += synapse0x37396f0();
   input += synapse0x3739730();
   input += synapse0x3739770();
   input += synapse0x37397b0();
   input += synapse0x37397f0();
   input += synapse0x3739830();
   input += synapse0x3739870();
   input += synapse0x37398b0();
   input += synapse0x37398f0();
   input += synapse0x3734250();
   input += synapse0x3734290();
   input += synapse0x34ef450();
   input += synapse0x34ef490();
   input += synapse0x3739b50();
   input += synapse0x3739b90();
   input += synapse0x3739bd0();
   input += synapse0x3739c10();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3739300() {
   double input = input0x3739300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3739c50() {
   double input = 1.4515;
   input += synapse0x3739f90();
   input += synapse0x3739fd0();
   input += synapse0x373a010();
   input += synapse0x373a050();
   input += synapse0x373a090();
   input += synapse0x373a0d0();
   input += synapse0x373a110();
   input += synapse0x373a150();
   input += synapse0x373a190();
   input += synapse0x3739a40();
   input += synapse0x3739a80();
   input += synapse0x3739ac0();
   input += synapse0x3739b00();
   input += synapse0x373a3e0();
   input += synapse0x373a420();
   input += synapse0x373a460();
   input += synapse0x3739de0();
   input += synapse0x3739e20();
   input += synapse0x373a5b0();
   input += synapse0x373a5f0();
   input += synapse0x373a630();
   input += synapse0x373a670();
   input += synapse0x373a6b0();
   input += synapse0x373a6f0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3739c50() {
   double input = input0x3739c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373a730() {
   double input = -1.21264;
   input += synapse0x373aa70();
   input += synapse0x373aab0();
   input += synapse0x373aaf0();
   input += synapse0x373ab30();
   input += synapse0x373ab70();
   input += synapse0x373abb0();
   input += synapse0x373abf0();
   input += synapse0x373ac30();
   input += synapse0x373ac70();
   input += synapse0x373acb0();
   input += synapse0x373acf0();
   input += synapse0x373ad30();
   input += synapse0x373ad70();
   input += synapse0x373adb0();
   input += synapse0x373adf0();
   input += synapse0x373ae30();
   input += synapse0x373a8c0();
   input += synapse0x373a900();
   input += synapse0x34ee5a0();
   input += synapse0x37233d0();
   input += synapse0x34fd330();
   input += synapse0x34fd370();
   input += synapse0x3618870();
   input += synapse0x36188b0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373a730() {
   double input = input0x373a730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373a1d0() {
   double input = 0.827669;
   input += synapse0x34fdbb0();
   input += synapse0x3734150();
   input += synapse0x373a360();
   input += synapse0x373a3a0();
   input += synapse0x373af80();
   input += synapse0x373afc0();
   input += synapse0x373b000();
   input += synapse0x373b040();
   input += synapse0x373b080();
   input += synapse0x373b0c0();
   input += synapse0x373b100();
   input += synapse0x373b140();
   input += synapse0x373b180();
   input += synapse0x373b1c0();
   input += synapse0x373b200();
   input += synapse0x373b240();
   input += synapse0x37340c0();
   input += synapse0x3734100();
   input += synapse0x373b390();
   input += synapse0x373b3d0();
   input += synapse0x373b410();
   input += synapse0x373b450();
   input += synapse0x373b490();
   input += synapse0x373b4d0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373a1d0() {
   double input = input0x373a1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373b510() {
   double input = -1.424;
   input += synapse0x373b850();
   input += synapse0x373b890();
   input += synapse0x373b8d0();
   input += synapse0x373b910();
   input += synapse0x373b950();
   input += synapse0x373b990();
   input += synapse0x373b9d0();
   input += synapse0x373ba10();
   input += synapse0x373ba50();
   input += synapse0x373ba90();
   input += synapse0x373bad0();
   input += synapse0x373bb10();
   input += synapse0x373bb50();
   input += synapse0x373bb90();
   input += synapse0x373bbd0();
   input += synapse0x373bc10();
   input += synapse0x373b6a0();
   input += synapse0x373b6e0();
   input += synapse0x373bd60();
   input += synapse0x373bda0();
   input += synapse0x373bde0();
   input += synapse0x373be20();
   input += synapse0x373be60();
   input += synapse0x373bea0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373b510() {
   double input = input0x373b510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373bee0() {
   double input = 0.586576;
   input += synapse0x373c220();
   input += synapse0x373c260();
   input += synapse0x373c2a0();
   input += synapse0x373c2e0();
   input += synapse0x373c320();
   input += synapse0x373c360();
   input += synapse0x373c3a0();
   input += synapse0x373c3e0();
   input += synapse0x373c420();
   input += synapse0x34fd680();
   input += synapse0x34fd6c0();
   input += synapse0x34fd700();
   input += synapse0x34fd740();
   input += synapse0x34fd780();
   input += synapse0x34fd7c0();
   input += synapse0x34fd800();
   input += synapse0x373c070();
   input += synapse0x373c0b0();
   input += synapse0x34fd950();
   input += synapse0x34fd990();
   input += synapse0x34fd9d0();
   input += synapse0x34fda10();
   input += synapse0x34fda50();
   input += synapse0x373cc70();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373bee0() {
   double input = input0x373bee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373ccb0() {
   double input = 0.750973;
   input += synapse0x373cff0();
   input += synapse0x373d030();
   input += synapse0x373d070();
   input += synapse0x373d0b0();
   input += synapse0x373d0f0();
   input += synapse0x373d130();
   input += synapse0x373d170();
   input += synapse0x373d1b0();
   input += synapse0x373d1f0();
   input += synapse0x373d230();
   input += synapse0x373d270();
   input += synapse0x373d2b0();
   input += synapse0x373d2f0();
   input += synapse0x373d330();
   input += synapse0x373d370();
   input += synapse0x373d3b0();
   input += synapse0x373ce40();
   input += synapse0x373ce80();
   input += synapse0x373d500();
   input += synapse0x373d540();
   input += synapse0x373d580();
   input += synapse0x373d5c0();
   input += synapse0x373d600();
   input += synapse0x373d640();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373ccb0() {
   double input = input0x373ccb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373d680() {
   double input = 0.205618;
   input += synapse0x373d9c0();
   input += synapse0x373da00();
   input += synapse0x373da40();
   input += synapse0x373da80();
   input += synapse0x373dac0();
   input += synapse0x373db00();
   input += synapse0x373db40();
   input += synapse0x373db80();
   input += synapse0x373dbc0();
   input += synapse0x373dc00();
   input += synapse0x373dc40();
   input += synapse0x373dc80();
   input += synapse0x373dcc0();
   input += synapse0x373dd00();
   input += synapse0x373dd40();
   input += synapse0x373dd80();
   input += synapse0x373d810();
   input += synapse0x373d850();
   input += synapse0x373ded0();
   input += synapse0x373df10();
   input += synapse0x373df50();
   input += synapse0x373df90();
   input += synapse0x373dfd0();
   input += synapse0x373e010();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373d680() {
   double input = input0x373d680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373e050() {
   double input = -3.71212;
   input += synapse0x3737b20();
   input += synapse0x3737b60();
   input += synapse0x3737ba0();
   input += synapse0x3737be0();
   input += synapse0x373e5a0();
   input += synapse0x373e5e0();
   input += synapse0x373e620();
   input += synapse0x373e660();
   input += synapse0x373e6a0();
   input += synapse0x373e6e0();
   input += synapse0x373e720();
   input += synapse0x373e760();
   input += synapse0x373e7a0();
   input += synapse0x373e7e0();
   input += synapse0x373e820();
   input += synapse0x373e860();
   input += synapse0x373e1e0();
   input += synapse0x373e220();
   input += synapse0x373e9b0();
   input += synapse0x373e9f0();
   input += synapse0x373ea30();
   input += synapse0x373ea70();
   input += synapse0x373eab0();
   input += synapse0x373eaf0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373e050() {
   double input = input0x373e050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373eb30() {
   double input = 1.32666;
   input += synapse0x373ee70();
   input += synapse0x373eeb0();
   input += synapse0x373eef0();
   input += synapse0x373ef30();
   input += synapse0x373ef70();
   input += synapse0x373efb0();
   input += synapse0x373eff0();
   input += synapse0x373f030();
   input += synapse0x373f070();
   input += synapse0x373f0b0();
   input += synapse0x373f0f0();
   input += synapse0x373f130();
   input += synapse0x373f170();
   input += synapse0x373f1b0();
   input += synapse0x373f1f0();
   input += synapse0x373f230();
   input += synapse0x373ecc0();
   input += synapse0x373ed00();
   input += synapse0x373f380();
   input += synapse0x373f3c0();
   input += synapse0x373f400();
   input += synapse0x373f440();
   input += synapse0x373f480();
   input += synapse0x373f4c0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373eb30() {
   double input = input0x373eb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373f500() {
   double input = -1.67178;
   input += synapse0x373f840();
   input += synapse0x373f880();
   input += synapse0x373f8c0();
   input += synapse0x373f900();
   input += synapse0x373f940();
   input += synapse0x373f980();
   input += synapse0x373f9c0();
   input += synapse0x373fa00();
   input += synapse0x373fa40();
   input += synapse0x373fa80();
   input += synapse0x373fac0();
   input += synapse0x373fb00();
   input += synapse0x373fb40();
   input += synapse0x373fb80();
   input += synapse0x373fbc0();
   input += synapse0x373fc00();
   input += synapse0x373f690();
   input += synapse0x373f6d0();
   input += synapse0x373c460();
   input += synapse0x373c4a0();
   input += synapse0x373c4e0();
   input += synapse0x373c520();
   input += synapse0x373c560();
   input += synapse0x373c5a0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373f500() {
   double input = input0x373f500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x373c5e0() {
   double input = -1.74586;
   input += synapse0x373c920();
   input += synapse0x373c960();
   input += synapse0x373c9a0();
   input += synapse0x373c9e0();
   input += synapse0x373ca20();
   input += synapse0x373ca60();
   input += synapse0x373caa0();
   input += synapse0x373cae0();
   input += synapse0x373cb20();
   input += synapse0x373cb60();
   input += synapse0x373cba0();
   input += synapse0x373cbe0();
   input += synapse0x373cc20();
   input += synapse0x3740d60();
   input += synapse0x3740da0();
   input += synapse0x3740de0();
   input += synapse0x373c770();
   input += synapse0x373c7b0();
   input += synapse0x3740f30();
   input += synapse0x3740f70();
   input += synapse0x3740fb0();
   input += synapse0x3740ff0();
   input += synapse0x3741030();
   input += synapse0x3741070();
   return input;
}

double NNfunction_sb_uRuR::neuron0x373c5e0() {
   double input = input0x373c5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x37410b0() {
   double input = 1.56976;
   input += synapse0x37413f0();
   input += synapse0x3741430();
   input += synapse0x3741470();
   input += synapse0x37414b0();
   input += synapse0x37414f0();
   input += synapse0x3741530();
   input += synapse0x3741570();
   input += synapse0x37415b0();
   input += synapse0x37415f0();
   input += synapse0x3741630();
   input += synapse0x3741670();
   input += synapse0x37416b0();
   input += synapse0x37416f0();
   input += synapse0x3741730();
   input += synapse0x3741770();
   input += synapse0x37417b0();
   input += synapse0x3741240();
   input += synapse0x3741280();
   input += synapse0x3741900();
   input += synapse0x3741940();
   input += synapse0x3741980();
   input += synapse0x37419c0();
   input += synapse0x3741a00();
   input += synapse0x3741a40();
   return input;
}

double NNfunction_sb_uRuR::neuron0x37410b0() {
   double input = input0x37410b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3741a80() {
   double input = 1.75815;
   input += synapse0x3741dc0();
   input += synapse0x3741e00();
   input += synapse0x3741e40();
   input += synapse0x3741e80();
   input += synapse0x3741ec0();
   input += synapse0x3741f00();
   input += synapse0x3741f40();
   input += synapse0x3741f80();
   input += synapse0x3741fc0();
   input += synapse0x3742000();
   input += synapse0x3742040();
   input += synapse0x3742080();
   input += synapse0x37420c0();
   input += synapse0x3742100();
   input += synapse0x3742140();
   input += synapse0x3742180();
   input += synapse0x3741c10();
   input += synapse0x3741c50();
   input += synapse0x37422d0();
   input += synapse0x3742310();
   input += synapse0x3742350();
   input += synapse0x3742390();
   input += synapse0x37423d0();
   input += synapse0x3742410();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3741a80() {
   double input = input0x3741a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3742450() {
   double input = 0.443121;
   input += synapse0x3742790();
   input += synapse0x37427d0();
   input += synapse0x3742810();
   input += synapse0x3742850();
   input += synapse0x3742890();
   input += synapse0x37428d0();
   input += synapse0x3742910();
   input += synapse0x3742950();
   input += synapse0x3742990();
   input += synapse0x37429d0();
   input += synapse0x3742a10();
   input += synapse0x3742a50();
   input += synapse0x3742a90();
   input += synapse0x3742ad0();
   input += synapse0x3742b10();
   input += synapse0x3742b50();
   input += synapse0x37425e0();
   input += synapse0x3742620();
   input += synapse0x3742ca0();
   input += synapse0x3742ce0();
   input += synapse0x3742d20();
   input += synapse0x3742d60();
   input += synapse0x3742da0();
   input += synapse0x3742de0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3742450() {
   double input = input0x3742450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3742e20() {
   double input = 0.621378;
   input += synapse0x3743160();
   input += synapse0x37344f0();
   input += synapse0x3734530();
   input += synapse0x3734830();
   input += synapse0x3734870();
   input += synapse0x3734b70();
   input += synapse0x3734bb0();
   input += synapse0x3734eb0();
   input += synapse0x3734ef0();
   input += synapse0x37351f0();
   input += synapse0x3735230();
   input += synapse0x3735530();
   input += synapse0x3735570();
   input += synapse0x3735870();
   input += synapse0x37358b0();
   input += synapse0x3735bb0();
   input += synapse0x3735bf0();
   input += synapse0x3735ef0();
   input += synapse0x3735f30();
   input += synapse0x3736230();
   input += synapse0x3736270();
   input += synapse0x3736570();
   input += synapse0x37365b0();
   input += synapse0x37368b0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3742e20() {
   double input = input0x3742e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3744c30() {
   double input = -0.828318;
   input += synapse0x37368f0();
   input += synapse0x37375b0();
   input += synapse0x37375f0();
   input += synapse0x3742fb0();
   input += synapse0x3742ff0();
   input += synapse0x37378f0();
   input += synapse0x3737930();
   input += synapse0x34ef330();
   input += synapse0x34ef370();
   input += synapse0x3738070();
   input += synapse0x37380b0();
   input += synapse0x37383b0();
   input += synapse0x37383f0();
   input += synapse0x37386f0();
   input += synapse0x3738730();
   input += synapse0x3738a30();
   input += synapse0x3738a70();
   input += synapse0x3738d70();
   input += synapse0x3738db0();
   input += synapse0x37390b0();
   input += synapse0x37390f0();
   input += synapse0x3736bf0();
   input += synapse0x3736c30();
   input += synapse0x3744ed0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3744c30() {
   double input = input0x3744c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3744f10() {
   double input = -0.326451;
   input += synapse0x3745250();
   input += synapse0x3745290();
   input += synapse0x37452d0();
   input += synapse0x3745310();
   input += synapse0x3745350();
   input += synapse0x3745390();
   input += synapse0x37453d0();
   input += synapse0x3745410();
   input += synapse0x3745450();
   input += synapse0x3745490();
   input += synapse0x37454d0();
   input += synapse0x3745510();
   input += synapse0x3745550();
   input += synapse0x3745590();
   input += synapse0x37455d0();
   input += synapse0x3745610();
   input += synapse0x37450a0();
   input += synapse0x37450e0();
   input += synapse0x3745760();
   input += synapse0x37457a0();
   input += synapse0x37457e0();
   input += synapse0x3745820();
   input += synapse0x3745860();
   input += synapse0x37458a0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3744f10() {
   double input = input0x3744f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x37458e0() {
   double input = -0.355449;
   input += synapse0x3745c20();
   input += synapse0x3745c60();
   input += synapse0x3745ca0();
   input += synapse0x3745ce0();
   input += synapse0x3745d20();
   input += synapse0x3745d60();
   input += synapse0x3745da0();
   input += synapse0x3745de0();
   input += synapse0x3745e20();
   input += synapse0x3745e60();
   input += synapse0x3745ea0();
   input += synapse0x3745ee0();
   input += synapse0x3745f20();
   input += synapse0x3745f60();
   input += synapse0x3745fa0();
   input += synapse0x3745fe0();
   input += synapse0x3745a70();
   input += synapse0x3745ab0();
   input += synapse0x3746130();
   input += synapse0x3746170();
   input += synapse0x37461b0();
   input += synapse0x37461f0();
   input += synapse0x3746230();
   input += synapse0x3746270();
   return input;
}

double NNfunction_sb_uRuR::neuron0x37458e0() {
   double input = input0x37458e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x37462b0() {
   double input = 0.385751;
   input += synapse0x37465f0();
   input += synapse0x3746630();
   input += synapse0x3746670();
   input += synapse0x37466b0();
   input += synapse0x37466f0();
   input += synapse0x3746730();
   input += synapse0x3746770();
   input += synapse0x37467b0();
   input += synapse0x37467f0();
   input += synapse0x3746830();
   input += synapse0x3746870();
   input += synapse0x37468b0();
   input += synapse0x37468f0();
   input += synapse0x3746930();
   input += synapse0x3746970();
   input += synapse0x37469b0();
   input += synapse0x3746440();
   input += synapse0x3746480();
   input += synapse0x3746b00();
   input += synapse0x3746b40();
   input += synapse0x3746b80();
   input += synapse0x3746bc0();
   input += synapse0x3746c00();
   input += synapse0x3746c40();
   return input;
}

double NNfunction_sb_uRuR::neuron0x37462b0() {
   double input = input0x37462b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3746c80() {
   double input = 0.455563;
   input += synapse0x3746fc0();
   input += synapse0x3747000();
   input += synapse0x3747040();
   input += synapse0x3747080();
   input += synapse0x37470c0();
   input += synapse0x3747100();
   input += synapse0x3747140();
   input += synapse0x3747180();
   input += synapse0x37471c0();
   input += synapse0x3747200();
   input += synapse0x3747240();
   input += synapse0x3747280();
   input += synapse0x37472c0();
   input += synapse0x3747300();
   input += synapse0x3747340();
   input += synapse0x3747380();
   input += synapse0x3746e10();
   input += synapse0x3746e50();
   input += synapse0x37474d0();
   input += synapse0x3747510();
   input += synapse0x3747550();
   input += synapse0x3747590();
   input += synapse0x37475d0();
   input += synapse0x3747610();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3746c80() {
   double input = input0x3746c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3747650() {
   double input = 1.76698;
   input += synapse0x3747990();
   input += synapse0x37479d0();
   input += synapse0x3747a10();
   input += synapse0x3747a50();
   input += synapse0x3747a90();
   input += synapse0x3747ad0();
   input += synapse0x3747b10();
   input += synapse0x3747b50();
   input += synapse0x3747b90();
   input += synapse0x373fd50();
   input += synapse0x373fd90();
   input += synapse0x373fdd0();
   input += synapse0x373fe10();
   input += synapse0x373fe50();
   input += synapse0x373fe90();
   input += synapse0x373fed0();
   input += synapse0x37477e0();
   input += synapse0x3747820();
   input += synapse0x3740020();
   input += synapse0x3740060();
   input += synapse0x37400a0();
   input += synapse0x37400e0();
   input += synapse0x3740120();
   input += synapse0x3740160();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3747650() {
   double input = input0x3747650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x37401a0() {
   double input = 0.923244;
   input += synapse0x37404e0();
   input += synapse0x3740520();
   input += synapse0x3740560();
   input += synapse0x37405a0();
   input += synapse0x37405e0();
   input += synapse0x3740620();
   input += synapse0x3740660();
   input += synapse0x37406a0();
   input += synapse0x37406e0();
   input += synapse0x3740720();
   input += synapse0x3740760();
   input += synapse0x37407a0();
   input += synapse0x37407e0();
   input += synapse0x3740820();
   input += synapse0x3740860();
   input += synapse0x37408a0();
   input += synapse0x3740330();
   input += synapse0x3740370();
   input += synapse0x37409f0();
   input += synapse0x3740a30();
   input += synapse0x3740a70();
   input += synapse0x3740ab0();
   input += synapse0x3740af0();
   input += synapse0x3740b30();
   return input;
}

double NNfunction_sb_uRuR::neuron0x37401a0() {
   double input = input0x37401a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3740b70() {
   double input = 0.580819;
   input += synapse0x3740d00();
   input += synapse0x3749d90();
   input += synapse0x3749dd0();
   input += synapse0x3749e10();
   input += synapse0x3749e50();
   input += synapse0x3749e90();
   input += synapse0x3749ed0();
   input += synapse0x3749f10();
   input += synapse0x3749f50();
   input += synapse0x3749f90();
   input += synapse0x3749fd0();
   input += synapse0x374a010();
   input += synapse0x374a050();
   input += synapse0x374a090();
   input += synapse0x374a0d0();
   input += synapse0x374a110();
   input += synapse0x3749be0();
   input += synapse0x3749c20();
   input += synapse0x374a260();
   input += synapse0x374a2a0();
   input += synapse0x374a2e0();
   input += synapse0x374a320();
   input += synapse0x374a360();
   input += synapse0x374a3a0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3740b70() {
   double input = input0x3740b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x374a3e0() {
   double input = 1.13428;
   input += synapse0x374a720();
   input += synapse0x374a760();
   input += synapse0x374a7a0();
   input += synapse0x374a7e0();
   input += synapse0x374a820();
   input += synapse0x374a860();
   input += synapse0x374a8a0();
   input += synapse0x374a8e0();
   input += synapse0x374a920();
   input += synapse0x374a960();
   input += synapse0x374a9a0();
   input += synapse0x374a9e0();
   input += synapse0x374aa20();
   input += synapse0x374aa60();
   input += synapse0x374aaa0();
   input += synapse0x374aae0();
   input += synapse0x374a570();
   input += synapse0x374a5b0();
   input += synapse0x374ac30();
   input += synapse0x374ac70();
   input += synapse0x374acb0();
   input += synapse0x374acf0();
   input += synapse0x374ad30();
   input += synapse0x374ad70();
   return input;
}

double NNfunction_sb_uRuR::neuron0x374a3e0() {
   double input = input0x374a3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x374adb0() {
   double input = 0.767359;
   input += synapse0x374b0f0();
   input += synapse0x374b130();
   input += synapse0x374b170();
   input += synapse0x374b1b0();
   input += synapse0x374b1f0();
   input += synapse0x374b230();
   input += synapse0x374b270();
   input += synapse0x374b2b0();
   input += synapse0x374b2f0();
   input += synapse0x374b330();
   input += synapse0x374b370();
   input += synapse0x374b3b0();
   input += synapse0x374b3f0();
   input += synapse0x374b430();
   input += synapse0x374b470();
   input += synapse0x374b4b0();
   input += synapse0x374af40();
   input += synapse0x374af80();
   input += synapse0x374b600();
   input += synapse0x374b640();
   input += synapse0x374b680();
   input += synapse0x374b6c0();
   input += synapse0x374b700();
   input += synapse0x374b740();
   return input;
}

double NNfunction_sb_uRuR::neuron0x374adb0() {
   double input = input0x374adb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x374b780() {
   double input = 3.08296;
   input += synapse0x374bac0();
   input += synapse0x374bb00();
   input += synapse0x374bb40();
   input += synapse0x374bb80();
   input += synapse0x374bbc0();
   input += synapse0x374bc00();
   input += synapse0x374bc40();
   input += synapse0x374bc80();
   input += synapse0x374bcc0();
   input += synapse0x374bd00();
   input += synapse0x374bd40();
   input += synapse0x374bd80();
   input += synapse0x374bdc0();
   input += synapse0x374be00();
   input += synapse0x374be40();
   input += synapse0x374be80();
   input += synapse0x374b910();
   input += synapse0x374b950();
   input += synapse0x374bfd0();
   input += synapse0x374c010();
   input += synapse0x374c050();
   input += synapse0x374c090();
   input += synapse0x374c0d0();
   input += synapse0x374c110();
   return input;
}

double NNfunction_sb_uRuR::neuron0x374b780() {
   double input = input0x374b780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x374c150() {
   double input = 1.11787;
   input += synapse0x374c490();
   input += synapse0x374c4d0();
   input += synapse0x374c510();
   input += synapse0x374c550();
   input += synapse0x374c590();
   input += synapse0x374c5d0();
   input += synapse0x374c610();
   input += synapse0x374c650();
   input += synapse0x374c690();
   input += synapse0x374c6d0();
   input += synapse0x374c710();
   input += synapse0x374c750();
   input += synapse0x374c790();
   input += synapse0x374c7d0();
   input += synapse0x374c810();
   input += synapse0x374c850();
   input += synapse0x374c2e0();
   input += synapse0x374c320();
   input += synapse0x374c9a0();
   input += synapse0x374c9e0();
   input += synapse0x374ca20();
   input += synapse0x374ca60();
   input += synapse0x374caa0();
   input += synapse0x374cae0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x374c150() {
   double input = input0x374c150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x374cb20() {
   double input = 0.00480484;
   input += synapse0x374ce60();
   input += synapse0x374cea0();
   input += synapse0x374cee0();
   input += synapse0x374cf20();
   input += synapse0x374cf60();
   input += synapse0x374cfa0();
   input += synapse0x374cfe0();
   input += synapse0x374d020();
   input += synapse0x374d060();
   input += synapse0x374d0a0();
   input += synapse0x374d0e0();
   input += synapse0x374d120();
   input += synapse0x374d160();
   input += synapse0x374d1a0();
   input += synapse0x374d1e0();
   input += synapse0x374d220();
   input += synapse0x374ccb0();
   input += synapse0x374ccf0();
   input += synapse0x374d370();
   input += synapse0x374d3b0();
   input += synapse0x374d3f0();
   input += synapse0x374d430();
   input += synapse0x374d470();
   input += synapse0x374d4b0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x374cb20() {
   double input = input0x374cb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x374d4f0() {
   double input = -2.2469;
   input += synapse0x374d830();
   input += synapse0x374d870();
   input += synapse0x374d8b0();
   input += synapse0x374d8f0();
   input += synapse0x374d930();
   input += synapse0x374d970();
   input += synapse0x374d9b0();
   input += synapse0x374d9f0();
   input += synapse0x374da30();
   input += synapse0x374da70();
   input += synapse0x374dab0();
   input += synapse0x374daf0();
   input += synapse0x374db30();
   input += synapse0x374db70();
   input += synapse0x374dbb0();
   input += synapse0x374dbf0();
   input += synapse0x374d680();
   input += synapse0x374d6c0();
   input += synapse0x374dd40();
   input += synapse0x374dd80();
   input += synapse0x374ddc0();
   input += synapse0x374de00();
   input += synapse0x374de40();
   input += synapse0x374de80();
   return input;
}

double NNfunction_sb_uRuR::neuron0x374d4f0() {
   double input = input0x374d4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x374dec0() {
   double input = 1.38577;
   input += synapse0x374e200();
   input += synapse0x374e240();
   input += synapse0x374e280();
   input += synapse0x374e2c0();
   input += synapse0x374e300();
   input += synapse0x374e340();
   input += synapse0x374e380();
   input += synapse0x374e3c0();
   input += synapse0x374e400();
   input += synapse0x374e440();
   input += synapse0x374e480();
   input += synapse0x374e4c0();
   input += synapse0x374e500();
   input += synapse0x374e540();
   input += synapse0x374e580();
   input += synapse0x374e5c0();
   input += synapse0x374e050();
   input += synapse0x374e090();
   input += synapse0x374e710();
   input += synapse0x374e750();
   input += synapse0x374e790();
   input += synapse0x374e7d0();
   input += synapse0x374e810();
   input += synapse0x374e850();
   return input;
}

double NNfunction_sb_uRuR::neuron0x374dec0() {
   double input = input0x374dec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x374e890() {
   double input = 0.684856;
   input += synapse0x374ebd0();
   input += synapse0x37431a0();
   input += synapse0x37431e0();
   input += synapse0x3743220();
   input += synapse0x3743470();
   input += synapse0x37434b0();
   input += synapse0x37434f0();
   input += synapse0x3743740();
   input += synapse0x3743780();
   input += synapse0x37439d0();
   input += synapse0x3743a10();
   input += synapse0x3743a50();
   input += synapse0x3743ca0();
   input += synapse0x3743ce0();
   input += synapse0x3743f30();
   input += synapse0x3743f70();
   input += synapse0x374ea20();
   input += synapse0x374ea60();
   input += synapse0x37440c0();
   input += synapse0x37445d0();
   input += synapse0x3744610();
   input += synapse0x3744650();
   input += synapse0x37448a0();
   input += synapse0x37448e0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x374e890() {
   double input = input0x374e890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3744920() {
   double input = 0.4465;
   input += synapse0x3744190();
   input += synapse0x37441d0();
   input += synapse0x3744210();
   input += synapse0x3744250();
   input += synapse0x3744bd0();
   input += synapse0x3750f20();
   input += synapse0x3750f60();
   input += synapse0x3750fa0();
   input += synapse0x3750fe0();
   input += synapse0x3751020();
   input += synapse0x3751060();
   input += synapse0x37510a0();
   input += synapse0x37510e0();
   input += synapse0x3751120();
   input += synapse0x3751160();
   input += synapse0x37511a0();
   input += synapse0x3744ab0();
   input += synapse0x3744af0();
   input += synapse0x37512f0();
   input += synapse0x3751330();
   input += synapse0x3751370();
   input += synapse0x37513b0();
   input += synapse0x37513f0();
   input += synapse0x3751430();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3744920() {
   double input = input0x3744920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3751470() {
   double input = 1.28263;
   input += synapse0x37517b0();
   input += synapse0x37517f0();
   input += synapse0x3751830();
   input += synapse0x3751870();
   input += synapse0x37518b0();
   input += synapse0x37518f0();
   input += synapse0x3751930();
   input += synapse0x3751970();
   input += synapse0x37519b0();
   input += synapse0x37519f0();
   input += synapse0x3751a30();
   input += synapse0x3751a70();
   input += synapse0x3751ab0();
   input += synapse0x3751af0();
   input += synapse0x3751b30();
   input += synapse0x3751b70();
   input += synapse0x3751600();
   input += synapse0x3751640();
   input += synapse0x3751cc0();
   input += synapse0x3751d00();
   input += synapse0x3751d40();
   input += synapse0x3751d80();
   input += synapse0x3751dc0();
   input += synapse0x3751e00();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3751470() {
   double input = input0x3751470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3751e40() {
   double input = -1.54147;
   input += synapse0x3752180();
   input += synapse0x37521c0();
   input += synapse0x3752200();
   input += synapse0x3752240();
   input += synapse0x3752280();
   input += synapse0x37522c0();
   input += synapse0x3752300();
   input += synapse0x3752340();
   input += synapse0x3752380();
   input += synapse0x37523c0();
   input += synapse0x3752400();
   input += synapse0x3752440();
   input += synapse0x3752480();
   input += synapse0x37524c0();
   input += synapse0x3752500();
   input += synapse0x3752540();
   input += synapse0x3751fd0();
   input += synapse0x3752010();
   input += synapse0x3752690();
   input += synapse0x37526d0();
   input += synapse0x3752710();
   input += synapse0x3752750();
   input += synapse0x3752790();
   input += synapse0x37527d0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3751e40() {
   double input = input0x3751e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3752810() {
   double input = -0.388989;
   input += synapse0x3752b50();
   input += synapse0x3752b90();
   input += synapse0x3752bd0();
   input += synapse0x3752c10();
   input += synapse0x3752c50();
   input += synapse0x3752c90();
   input += synapse0x3752cd0();
   input += synapse0x3752d10();
   input += synapse0x3752d50();
   input += synapse0x3752d90();
   input += synapse0x3752dd0();
   input += synapse0x3752e10();
   input += synapse0x3752e50();
   input += synapse0x3752e90();
   input += synapse0x3752ed0();
   input += synapse0x3752f10();
   input += synapse0x37529a0();
   input += synapse0x37529e0();
   input += synapse0x3753060();
   input += synapse0x37530a0();
   input += synapse0x37530e0();
   input += synapse0x3753120();
   input += synapse0x3753160();
   input += synapse0x37531a0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3752810() {
   double input = input0x3752810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x37531e0() {
   double input = 1.81379;
   input += synapse0x3753520();
   input += synapse0x3753560();
   input += synapse0x37535a0();
   input += synapse0x37535e0();
   input += synapse0x3753620();
   input += synapse0x3753660();
   input += synapse0x37536a0();
   input += synapse0x37536e0();
   input += synapse0x3753720();
   input += synapse0x3753760();
   input += synapse0x37537a0();
   input += synapse0x37537e0();
   input += synapse0x3753820();
   input += synapse0x3753860();
   input += synapse0x37538a0();
   input += synapse0x37538e0();
   input += synapse0x3753370();
   input += synapse0x37533b0();
   input += synapse0x3753a30();
   input += synapse0x3753a70();
   input += synapse0x3753ab0();
   input += synapse0x3753af0();
   input += synapse0x3753b30();
   input += synapse0x3753b70();
   return input;
}

double NNfunction_sb_uRuR::neuron0x37531e0() {
   double input = input0x37531e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3753bb0() {
   double input = -0.329516;
   input += synapse0x3753ef0();
   input += synapse0x3753f30();
   input += synapse0x3753f70();
   input += synapse0x3753fb0();
   input += synapse0x3753ff0();
   input += synapse0x3754030();
   input += synapse0x3754070();
   input += synapse0x37540b0();
   input += synapse0x37540f0();
   input += synapse0x3754130();
   input += synapse0x3754170();
   input += synapse0x37541b0();
   input += synapse0x37541f0();
   input += synapse0x3754230();
   input += synapse0x3754270();
   input += synapse0x37542b0();
   input += synapse0x3753d40();
   input += synapse0x3753d80();
   input += synapse0x3754400();
   input += synapse0x3754440();
   input += synapse0x3754480();
   input += synapse0x37544c0();
   input += synapse0x3754500();
   input += synapse0x3754540();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3753bb0() {
   double input = input0x3753bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3754580() {
   double input = -0.466588;
   input += synapse0x37548c0();
   input += synapse0x3754900();
   input += synapse0x3754940();
   input += synapse0x3754980();
   input += synapse0x37549c0();
   input += synapse0x3754a00();
   input += synapse0x3754a40();
   input += synapse0x3754a80();
   input += synapse0x3754ac0();
   input += synapse0x3754b00();
   input += synapse0x3754b40();
   input += synapse0x3754b80();
   input += synapse0x3754bc0();
   input += synapse0x3754c00();
   input += synapse0x3754c40();
   input += synapse0x3754c80();
   input += synapse0x3754710();
   input += synapse0x3754750();
   input += synapse0x3754dd0();
   input += synapse0x3754e10();
   input += synapse0x3754e50();
   input += synapse0x3754e90();
   input += synapse0x3754ed0();
   input += synapse0x3754f10();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3754580() {
   double input = input0x3754580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3754f50() {
   double input = 0.256358;
   input += synapse0x3755290();
   input += synapse0x37552d0();
   input += synapse0x3755310();
   input += synapse0x3755350();
   input += synapse0x3755390();
   input += synapse0x37553d0();
   input += synapse0x3755410();
   input += synapse0x3755450();
   input += synapse0x3755490();
   input += synapse0x37554d0();
   input += synapse0x3755510();
   input += synapse0x3755550();
   input += synapse0x3755590();
   input += synapse0x37555d0();
   input += synapse0x3755610();
   input += synapse0x3755650();
   input += synapse0x37550e0();
   input += synapse0x3755120();
   input += synapse0x37557a0();
   input += synapse0x37557e0();
   input += synapse0x3755820();
   input += synapse0x3755860();
   input += synapse0x37558a0();
   input += synapse0x37558e0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3754f50() {
   double input = input0x3754f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3755920() {
   double input = 0.449737;
   input += synapse0x373e390();
   input += synapse0x373e3d0();
   input += synapse0x373e410();
   input += synapse0x373e450();
   input += synapse0x373e490();
   input += synapse0x373e4d0();
   input += synapse0x373e510();
   input += synapse0x373e550();
   input += synapse0x3756070();
   input += synapse0x37560b0();
   input += synapse0x37560f0();
   input += synapse0x3756130();
   input += synapse0x3756170();
   input += synapse0x37561b0();
   input += synapse0x37561f0();
   input += synapse0x3756230();
   input += synapse0x3755ab0();
   input += synapse0x3755af0();
   input += synapse0x3756380();
   input += synapse0x37563c0();
   input += synapse0x3756400();
   input += synapse0x3756440();
   input += synapse0x3756480();
   input += synapse0x37564c0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3755920() {
   double input = input0x3755920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3756500() {
   double input = 0.455084;
   input += synapse0x3756840();
   input += synapse0x3756880();
   input += synapse0x37568c0();
   input += synapse0x3756900();
   input += synapse0x3756940();
   input += synapse0x3756980();
   input += synapse0x37569c0();
   input += synapse0x3756a00();
   input += synapse0x3756a40();
   input += synapse0x3756a80();
   input += synapse0x3756ac0();
   input += synapse0x3756b00();
   input += synapse0x3756b40();
   input += synapse0x3756b80();
   input += synapse0x3756bc0();
   input += synapse0x3756c00();
   input += synapse0x3756690();
   input += synapse0x37566d0();
   input += synapse0x3756d50();
   input += synapse0x3756d90();
   input += synapse0x3756dd0();
   input += synapse0x3756e10();
   input += synapse0x3756e50();
   input += synapse0x3756e90();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3756500() {
   double input = input0x3756500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3756ed0() {
   double input = -0.088391;
   input += synapse0x3757210();
   input += synapse0x3757250();
   input += synapse0x3757290();
   input += synapse0x37572d0();
   input += synapse0x3757310();
   input += synapse0x3757350();
   input += synapse0x3757390();
   input += synapse0x37573d0();
   input += synapse0x3757410();
   input += synapse0x3757450();
   input += synapse0x3757490();
   input += synapse0x37574d0();
   input += synapse0x3757510();
   input += synapse0x3757550();
   input += synapse0x3757590();
   input += synapse0x37575d0();
   input += synapse0x3757060();
   input += synapse0x37570a0();
   input += synapse0x3747bd0();
   input += synapse0x3747c10();
   input += synapse0x3747c50();
   input += synapse0x3747c90();
   input += synapse0x3747cd0();
   input += synapse0x3747d10();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3756ed0() {
   double input = input0x3756ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3747d50() {
   double input = 1.40451;
   input += synapse0x3748090();
   input += synapse0x37480d0();
   input += synapse0x3748110();
   input += synapse0x3748150();
   input += synapse0x3748190();
   input += synapse0x37481d0();
   input += synapse0x3748210();
   input += synapse0x3748250();
   input += synapse0x3748290();
   input += synapse0x37482d0();
   input += synapse0x3748310();
   input += synapse0x3748350();
   input += synapse0x3748390();
   input += synapse0x37483d0();
   input += synapse0x3748410();
   input += synapse0x3748450();
   input += synapse0x3747ee0();
   input += synapse0x3747f20();
   input += synapse0x37485a0();
   input += synapse0x37485e0();
   input += synapse0x3748620();
   input += synapse0x3748660();
   input += synapse0x37486a0();
   input += synapse0x37486e0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3747d50() {
   double input = input0x3747d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3748720() {
   double input = 0.614846;
   input += synapse0x3748a60();
   input += synapse0x3748aa0();
   input += synapse0x3748ae0();
   input += synapse0x3748b20();
   input += synapse0x3748b60();
   input += synapse0x3748ba0();
   input += synapse0x3748be0();
   input += synapse0x3748c20();
   input += synapse0x3748c60();
   input += synapse0x3748ca0();
   input += synapse0x3748ce0();
   input += synapse0x3748d20();
   input += synapse0x3748d60();
   input += synapse0x3748da0();
   input += synapse0x3748de0();
   input += synapse0x3748e20();
   input += synapse0x37488b0();
   input += synapse0x37488f0();
   input += synapse0x3748f70();
   input += synapse0x3748fb0();
   input += synapse0x3748ff0();
   input += synapse0x3749030();
   input += synapse0x3749070();
   input += synapse0x37490b0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3748720() {
   double input = input0x3748720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x37490f0() {
   double input = 0.0257743;
   input += synapse0x3749430();
   input += synapse0x3749470();
   input += synapse0x37494b0();
   input += synapse0x37494f0();
   input += synapse0x3749530();
   input += synapse0x3749570();
   input += synapse0x37495b0();
   input += synapse0x37495f0();
   input += synapse0x3749630();
   input += synapse0x3749670();
   input += synapse0x37496b0();
   input += synapse0x37496f0();
   input += synapse0x3749730();
   input += synapse0x3749770();
   input += synapse0x37497b0();
   input += synapse0x37497f0();
   input += synapse0x3749280();
   input += synapse0x37492c0();
   input += synapse0x3749940();
   input += synapse0x3749980();
   input += synapse0x37499c0();
   input += synapse0x3749a00();
   input += synapse0x3749a40();
   input += synapse0x3749a80();
   return input;
}

double NNfunction_sb_uRuR::neuron0x37490f0() {
   double input = input0x37490f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x375b730() {
   double input = -0.670951;
   input += synapse0x375b950();
   input += synapse0x375b990();
   input += synapse0x375b9d0();
   input += synapse0x375ba10();
   input += synapse0x375ba50();
   input += synapse0x375ba90();
   input += synapse0x375bad0();
   input += synapse0x375bb10();
   input += synapse0x375bb50();
   input += synapse0x375bb90();
   input += synapse0x375bbd0();
   input += synapse0x375bc10();
   input += synapse0x375bc50();
   input += synapse0x375bc90();
   input += synapse0x375bcd0();
   input += synapse0x375bd10();
   input += synapse0x3749ac0();
   input += synapse0x3749b00();
   input += synapse0x375be60();
   input += synapse0x375bea0();
   input += synapse0x375bee0();
   input += synapse0x375bf20();
   input += synapse0x375bf60();
   input += synapse0x375bfa0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x375b730() {
   double input = input0x375b730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x375bfe0() {
   double input = -1.09074;
   input += synapse0x375c320();
   input += synapse0x375c360();
   input += synapse0x375c3a0();
   input += synapse0x375c3e0();
   input += synapse0x375c420();
   input += synapse0x375c460();
   input += synapse0x375c4a0();
   input += synapse0x375c4e0();
   input += synapse0x375c520();
   input += synapse0x375c560();
   input += synapse0x375c5a0();
   input += synapse0x375c5e0();
   input += synapse0x375c620();
   input += synapse0x375c660();
   input += synapse0x375c6a0();
   input += synapse0x375c6e0();
   input += synapse0x375c170();
   input += synapse0x375c1b0();
   input += synapse0x375c830();
   input += synapse0x375c870();
   input += synapse0x375c8b0();
   input += synapse0x375c8f0();
   input += synapse0x375c930();
   input += synapse0x375c970();
   return input;
}

double NNfunction_sb_uRuR::neuron0x375bfe0() {
   double input = input0x375bfe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x375c9b0() {
   double input = 2.12855;
   input += synapse0x375ccf0();
   input += synapse0x375cd30();
   input += synapse0x375cd70();
   input += synapse0x375cdb0();
   input += synapse0x375cdf0();
   input += synapse0x375ce30();
   input += synapse0x375ce70();
   input += synapse0x375ceb0();
   input += synapse0x375cef0();
   input += synapse0x375cf30();
   input += synapse0x375cf70();
   input += synapse0x375cfb0();
   input += synapse0x375cff0();
   input += synapse0x375d030();
   input += synapse0x375d070();
   input += synapse0x375d0b0();
   input += synapse0x375cb40();
   input += synapse0x375cb80();
   input += synapse0x375d200();
   input += synapse0x375d240();
   input += synapse0x375d280();
   input += synapse0x375d2c0();
   input += synapse0x375d300();
   input += synapse0x375d340();
   return input;
}

double NNfunction_sb_uRuR::neuron0x375c9b0() {
   double input = input0x375c9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x375d380() {
   double input = 0.71351;
   input += synapse0x375d6c0();
   input += synapse0x375d700();
   input += synapse0x375d740();
   input += synapse0x375d780();
   input += synapse0x375d7c0();
   input += synapse0x375d800();
   input += synapse0x375d840();
   input += synapse0x375d880();
   input += synapse0x375d8c0();
   input += synapse0x375d900();
   input += synapse0x375d940();
   input += synapse0x375d980();
   input += synapse0x375d9c0();
   input += synapse0x375da00();
   input += synapse0x375da40();
   input += synapse0x375da80();
   input += synapse0x375d510();
   input += synapse0x375d550();
   input += synapse0x375dbd0();
   input += synapse0x375dc10();
   input += synapse0x375dc50();
   input += synapse0x375dc90();
   input += synapse0x375dcd0();
   input += synapse0x375dd10();
   return input;
}

double NNfunction_sb_uRuR::neuron0x375d380() {
   double input = input0x375d380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3764580() {
   double input = -0.718127;
   input += synapse0x34fdb20();
   input += synapse0x34fdb60();
   input += synapse0x373b7c0();
   input += synapse0x373b800();
   input += synapse0x373c190();
   input += synapse0x373c1d0();
   input += synapse0x373cf60();
   input += synapse0x373cfa0();
   input += synapse0x373d930();
   input += synapse0x373d970();
   input += synapse0x373e300();
   input += synapse0x373e340();
   input += synapse0x373ede0();
   input += synapse0x373ee20();
   input += synapse0x373f7b0();
   input += synapse0x373f7f0();
   input += synapse0x373c890();
   input += synapse0x373c8d0();
   input += synapse0x3741360();
   input += synapse0x37413a0();
   input += synapse0x3741d30();
   input += synapse0x3741d70();
   input += synapse0x3742700();
   input += synapse0x3742740();
   input += synapse0x37430d0();
   input += synapse0x3743110();
   input += synapse0x3737270();
   input += synapse0x37372b0();
   input += synapse0x37451c0();
   input += synapse0x3745200();
   input += synapse0x3745b90();
   input += synapse0x3745bd0();
   input += synapse0x3746560();
   input += synapse0x37465a0();
   input += synapse0x3746f30();
   input += synapse0x3746f70();
   input += synapse0x3747900();
   input += synapse0x3747940();
   input += synapse0x3740450();
   input += synapse0x3740490();
   input += synapse0x3749d00();
   input += synapse0x3749d40();
   input += synapse0x374a690();
   input += synapse0x374a6d0();
   input += synapse0x374b060();
   input += synapse0x374b0a0();
   input += synapse0x374ba30();
   input += synapse0x374ba70();
   input += synapse0x374c400();
   input += synapse0x374c440();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3764580() {
   double input = input0x3764580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3764920() {
   double input = 0.529686;
   input += synapse0x374eb40();
   input += synapse0x374eb80();
   input += synapse0x3744100();
   input += synapse0x3744140();
   input += synapse0x3751720();
   input += synapse0x3751760();
   input += synapse0x37520f0();
   input += synapse0x3752130();
   input += synapse0x3752ac0();
   input += synapse0x3752b00();
   input += synapse0x3753490();
   input += synapse0x37534d0();
   input += synapse0x3753e60();
   input += synapse0x3753ea0();
   input += synapse0x3754830();
   input += synapse0x3754870();
   input += synapse0x3755200();
   input += synapse0x3755240();
   input += synapse0x3755bd0();
   input += synapse0x3755c10();
   input += synapse0x37567b0();
   input += synapse0x37567f0();
   input += synapse0x3757180();
   input += synapse0x37571c0();
   input += synapse0x3748000();
   input += synapse0x3748040();
   input += synapse0x37489d0();
   input += synapse0x3748a10();
   input += synapse0x37493a0();
   input += synapse0x37493e0();
   input += synapse0x375b8c0();
   input += synapse0x375b900();
   input += synapse0x375c290();
   input += synapse0x375c2d0();
   input += synapse0x375cc60();
   input += synapse0x375cca0();
   input += synapse0x375d630();
   input += synapse0x375d670();
   input += synapse0x3739520();
   input += synapse0x3739560();
   input += synapse0x374cdd0();
   input += synapse0x374ce10();
   input += synapse0x375dd50();
   input += synapse0x375dd90();
   input += synapse0x375ddd0();
   input += synapse0x375de10();
   input += synapse0x3764cc0();
   input += synapse0x3764d00();
   input += synapse0x3764d40();
   input += synapse0x3764d80();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3764920() {
   double input = input0x3764920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3764dc0() {
   double input = 0.440965;
   input += synapse0x3765100();
   input += synapse0x3765140();
   input += synapse0x3765180();
   input += synapse0x37651c0();
   input += synapse0x3765200();
   input += synapse0x3765240();
   input += synapse0x3765280();
   input += synapse0x37652c0();
   input += synapse0x3765300();
   input += synapse0x3765340();
   input += synapse0x3765380();
   input += synapse0x37653c0();
   input += synapse0x3765400();
   input += synapse0x3765440();
   input += synapse0x3765480();
   input += synapse0x37654c0();
   input += synapse0x3764f50();
   input += synapse0x3764f90();
   input += synapse0x3765610();
   input += synapse0x3765650();
   input += synapse0x3765690();
   input += synapse0x37656d0();
   input += synapse0x3765710();
   input += synapse0x3765750();
   input += synapse0x3765790();
   input += synapse0x37657d0();
   input += synapse0x3765810();
   input += synapse0x3765850();
   input += synapse0x3765890();
   input += synapse0x37658d0();
   input += synapse0x3765910();
   input += synapse0x3765950();
   input += synapse0x3765500();
   input += synapse0x3765540();
   input += synapse0x3765580();
   input += synapse0x37655c0();
   input += synapse0x3765ba0();
   input += synapse0x3765be0();
   input += synapse0x3765c20();
   input += synapse0x3765c60();
   input += synapse0x3765ca0();
   input += synapse0x3765ce0();
   input += synapse0x3765d20();
   input += synapse0x3765d60();
   input += synapse0x3765da0();
   input += synapse0x3765de0();
   input += synapse0x3765e20();
   input += synapse0x3765e60();
   input += synapse0x3765ea0();
   input += synapse0x3765ee0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3764dc0() {
   double input = input0x3764dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3765f20() {
   double input = -0.827784;
   input += synapse0x3766260();
   input += synapse0x37662a0();
   input += synapse0x37662e0();
   input += synapse0x3766320();
   input += synapse0x3766360();
   input += synapse0x37663a0();
   input += synapse0x37663e0();
   input += synapse0x3766420();
   input += synapse0x3766460();
   input += synapse0x37664a0();
   input += synapse0x37664e0();
   input += synapse0x3766520();
   input += synapse0x3766560();
   input += synapse0x37665a0();
   input += synapse0x37665e0();
   input += synapse0x3766620();
   input += synapse0x37660b0();
   input += synapse0x37660f0();
   input += synapse0x3766770();
   input += synapse0x37667b0();
   input += synapse0x37667f0();
   input += synapse0x3766830();
   input += synapse0x3766870();
   input += synapse0x37668b0();
   input += synapse0x37668f0();
   input += synapse0x3766930();
   input += synapse0x3766970();
   input += synapse0x37669b0();
   input += synapse0x37669f0();
   input += synapse0x3766a30();
   input += synapse0x3766a70();
   input += synapse0x3766ab0();
   input += synapse0x3766660();
   input += synapse0x37666a0();
   input += synapse0x37666e0();
   input += synapse0x3766720();
   input += synapse0x3766d00();
   input += synapse0x3766d40();
   input += synapse0x3766d80();
   input += synapse0x3766dc0();
   input += synapse0x3766e00();
   input += synapse0x3766e40();
   input += synapse0x3766e80();
   input += synapse0x3766ec0();
   input += synapse0x3766f00();
   input += synapse0x3766f40();
   input += synapse0x3766f80();
   input += synapse0x3766fc0();
   input += synapse0x3767000();
   input += synapse0x3767040();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3765f20() {
   double input = input0x3765f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x3767080() {
   double input = 1.64828;
   input += synapse0x37673c0();
   input += synapse0x3767400();
   input += synapse0x3767440();
   input += synapse0x3767480();
   input += synapse0x37674c0();
   input += synapse0x3767500();
   input += synapse0x3767540();
   input += synapse0x3767580();
   input += synapse0x37675c0();
   input += synapse0x3767600();
   input += synapse0x3767640();
   input += synapse0x3767680();
   input += synapse0x37676c0();
   input += synapse0x3767700();
   input += synapse0x3767740();
   input += synapse0x3767780();
   input += synapse0x3767210();
   input += synapse0x3767250();
   input += synapse0x37678d0();
   input += synapse0x3767910();
   input += synapse0x3767950();
   input += synapse0x3767990();
   input += synapse0x37679d0();
   input += synapse0x3767a10();
   input += synapse0x3767a50();
   input += synapse0x3767a90();
   input += synapse0x3767ad0();
   input += synapse0x3767b10();
   input += synapse0x3767b50();
   input += synapse0x3767b90();
   input += synapse0x3767bd0();
   input += synapse0x3767c10();
   input += synapse0x37677c0();
   input += synapse0x3767800();
   input += synapse0x3767840();
   input += synapse0x3767880();
   input += synapse0x3767e60();
   input += synapse0x3767ea0();
   input += synapse0x3767ee0();
   input += synapse0x3767f20();
   input += synapse0x3767f60();
   input += synapse0x3767fa0();
   input += synapse0x3767fe0();
   input += synapse0x3768020();
   input += synapse0x3768060();
   input += synapse0x37680a0();
   input += synapse0x37680e0();
   input += synapse0x3768120();
   input += synapse0x3768160();
   input += synapse0x37681a0();
   return input;
}

double NNfunction_sb_uRuR::neuron0x3767080() {
   double input = input0x3767080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRuR::input0x37681e0() {
   double input = 4.89884;
   input += synapse0x3768400();
   input += synapse0x3768440();
   input += synapse0x3768480();
   input += synapse0x37684c0();
   input += synapse0x3768500();
   return input;
}

double NNfunction_sb_uRuR::neuron0x37681e0() {
   double input = input0x37681e0();
   return (input * 1)+0;
}

double NNfunction_sb_uRuR::synapse0x37342e0() {
   return (neuron0x3734360()*-0.0261709);
}

double NNfunction_sb_uRuR::synapse0x3734320() {
   return (neuron0x3734610()*0.00770978);
}

double NNfunction_sb_uRuR::synapse0x37395b0() {
   return (neuron0x3734950()*0.0108086);
}

double NNfunction_sb_uRuR::synapse0x37395f0() {
   return (neuron0x3734c90()*-0.0667724);
}

double NNfunction_sb_uRuR::synapse0x3739630() {
   return (neuron0x3734fd0()*-0.00375344);
}

double NNfunction_sb_uRuR::synapse0x3739670() {
   return (neuron0x3735310()*-0.00162955);
}

double NNfunction_sb_uRuR::synapse0x37396b0() {
   return (neuron0x3735650()*-0.0723678);
}

double NNfunction_sb_uRuR::synapse0x37396f0() {
   return (neuron0x3735990()*0.044467);
}

double NNfunction_sb_uRuR::synapse0x3739730() {
   return (neuron0x3735cd0()*-0.0109158);
}

double NNfunction_sb_uRuR::synapse0x3739770() {
   return (neuron0x3736010()*0.00776896);
}

double NNfunction_sb_uRuR::synapse0x37397b0() {
   return (neuron0x3736350()*0.00885887);
}

double NNfunction_sb_uRuR::synapse0x37397f0() {
   return (neuron0x3736690()*0.0277238);
}

double NNfunction_sb_uRuR::synapse0x3739830() {
   return (neuron0x37369d0()*0.0285029);
}

double NNfunction_sb_uRuR::synapse0x3739870() {
   return (neuron0x3736d10()*0.0409114);
}

double NNfunction_sb_uRuR::synapse0x37398b0() {
   return (neuron0x3737050()*4.57732);
}

double NNfunction_sb_uRuR::synapse0x37398f0() {
   return (neuron0x3737390()*0.0567665);
}

double NNfunction_sb_uRuR::synapse0x3734250() {
   return (neuron0x37376d0()*0.0343934);
}

double NNfunction_sb_uRuR::synapse0x3734290() {
   return (neuron0x3737c30()*0.00713513);
}

double NNfunction_sb_uRuR::synapse0x34ef450() {
   return (neuron0x3737e50()*0.0158149);
}

double NNfunction_sb_uRuR::synapse0x34ef490() {
   return (neuron0x3738190()*-0.00966199);
}

double NNfunction_sb_uRuR::synapse0x3739b50() {
   return (neuron0x37384d0()*0.00369328);
}

double NNfunction_sb_uRuR::synapse0x3739b90() {
   return (neuron0x3738810()*0.00109681);
}

double NNfunction_sb_uRuR::synapse0x3739bd0() {
   return (neuron0x3738b50()*-0.00359786);
}

double NNfunction_sb_uRuR::synapse0x3739c10() {
   return (neuron0x3738e90()*-0.00301335);
}

double NNfunction_sb_uRuR::synapse0x3739f90() {
   return (neuron0x3734360()*-0.00557705);
}

double NNfunction_sb_uRuR::synapse0x3739fd0() {
   return (neuron0x3734610()*0.0763354);
}

double NNfunction_sb_uRuR::synapse0x373a010() {
   return (neuron0x3734950()*0.0278415);
}

double NNfunction_sb_uRuR::synapse0x373a050() {
   return (neuron0x3734c90()*-0.276673);
}

double NNfunction_sb_uRuR::synapse0x373a090() {
   return (neuron0x3734fd0()*-0.0213908);
}

double NNfunction_sb_uRuR::synapse0x373a0d0() {
   return (neuron0x3735310()*-0.0404822);
}

double NNfunction_sb_uRuR::synapse0x373a110() {
   return (neuron0x3735650()*0.00571675);
}

double NNfunction_sb_uRuR::synapse0x373a150() {
   return (neuron0x3735990()*0.136949);
}

double NNfunction_sb_uRuR::synapse0x373a190() {
   return (neuron0x3735cd0()*-0.287592);
}

double NNfunction_sb_uRuR::synapse0x3739a40() {
   return (neuron0x3736010()*-0.542374);
}

double NNfunction_sb_uRuR::synapse0x3739a80() {
   return (neuron0x3736350()*-0.0227725);
}

double NNfunction_sb_uRuR::synapse0x3739ac0() {
   return (neuron0x3736690()*0.0091327);
}

double NNfunction_sb_uRuR::synapse0x3739b00() {
   return (neuron0x37369d0()*-0.109915);
}

double NNfunction_sb_uRuR::synapse0x373a3e0() {
   return (neuron0x3736d10()*0.152871);
}

double NNfunction_sb_uRuR::synapse0x373a420() {
   return (neuron0x3737050()*-0.815849);
}

double NNfunction_sb_uRuR::synapse0x373a460() {
   return (neuron0x3737390()*0.0719067);
}

double NNfunction_sb_uRuR::synapse0x3739de0() {
   return (neuron0x37376d0()*-0.00755902);
}

double NNfunction_sb_uRuR::synapse0x3739e20() {
   return (neuron0x3737c30()*-0.000553625);
}

double NNfunction_sb_uRuR::synapse0x373a5b0() {
   return (neuron0x3737e50()*-0.224758);
}

double NNfunction_sb_uRuR::synapse0x373a5f0() {
   return (neuron0x3738190()*0.373239);
}

double NNfunction_sb_uRuR::synapse0x373a630() {
   return (neuron0x37384d0()*-0.000155718);
}

double NNfunction_sb_uRuR::synapse0x373a670() {
   return (neuron0x3738810()*-0.00084901);
}

double NNfunction_sb_uRuR::synapse0x373a6b0() {
   return (neuron0x3738b50()*0.0869231);
}

double NNfunction_sb_uRuR::synapse0x373a6f0() {
   return (neuron0x3738e90()*-0.0544665);
}

double NNfunction_sb_uRuR::synapse0x373aa70() {
   return (neuron0x3734360()*-0.0354481);
}

double NNfunction_sb_uRuR::synapse0x373aab0() {
   return (neuron0x3734610()*-0.120614);
}

double NNfunction_sb_uRuR::synapse0x373aaf0() {
   return (neuron0x3734950()*0.278589);
}

double NNfunction_sb_uRuR::synapse0x373ab30() {
   return (neuron0x3734c90()*0.461216);
}

double NNfunction_sb_uRuR::synapse0x373ab70() {
   return (neuron0x3734fd0()*0.694628);
}

double NNfunction_sb_uRuR::synapse0x373abb0() {
   return (neuron0x3735310()*-0.703849);
}

double NNfunction_sb_uRuR::synapse0x373abf0() {
   return (neuron0x3735650()*-0.48503);
}

double NNfunction_sb_uRuR::synapse0x373ac30() {
   return (neuron0x3735990()*-0.366404);
}

double NNfunction_sb_uRuR::synapse0x373ac70() {
   return (neuron0x3735cd0()*-0.706644);
}

double NNfunction_sb_uRuR::synapse0x373acb0() {
   return (neuron0x3736010()*-0.620766);
}

double NNfunction_sb_uRuR::synapse0x373acf0() {
   return (neuron0x3736350()*0.0313772);
}

double NNfunction_sb_uRuR::synapse0x373ad30() {
   return (neuron0x3736690()*-0.203288);
}

double NNfunction_sb_uRuR::synapse0x373ad70() {
   return (neuron0x37369d0()*0.0534772);
}

double NNfunction_sb_uRuR::synapse0x373adb0() {
   return (neuron0x3736d10()*-0.237198);
}

double NNfunction_sb_uRuR::synapse0x373adf0() {
   return (neuron0x3737050()*-0.672865);
}

double NNfunction_sb_uRuR::synapse0x373ae30() {
   return (neuron0x3737390()*0.540985);
}

double NNfunction_sb_uRuR::synapse0x373a8c0() {
   return (neuron0x37376d0()*0.456693);
}

double NNfunction_sb_uRuR::synapse0x373a900() {
   return (neuron0x3737c30()*1.22006);
}

double NNfunction_sb_uRuR::synapse0x34ee5a0() {
   return (neuron0x3737e50()*-0.656336);
}

double NNfunction_sb_uRuR::synapse0x37233d0() {
   return (neuron0x3738190()*0.634075);
}

double NNfunction_sb_uRuR::synapse0x34fd330() {
   return (neuron0x37384d0()*-0.692045);
}

double NNfunction_sb_uRuR::synapse0x34fd370() {
   return (neuron0x3738810()*-0.31464);
}

double NNfunction_sb_uRuR::synapse0x3618870() {
   return (neuron0x3738b50()*0.420256);
}

double NNfunction_sb_uRuR::synapse0x36188b0() {
   return (neuron0x3738e90()*-0.164624);
}

double NNfunction_sb_uRuR::synapse0x34fdbb0() {
   return (neuron0x3734360()*0.00178409);
}

double NNfunction_sb_uRuR::synapse0x3734150() {
   return (neuron0x3734610()*0.21462);
}

double NNfunction_sb_uRuR::synapse0x373a360() {
   return (neuron0x3734950()*-0.0424163);
}

double NNfunction_sb_uRuR::synapse0x373a3a0() {
   return (neuron0x3734c90()*0.27467);
}

double NNfunction_sb_uRuR::synapse0x373af80() {
   return (neuron0x3734fd0()*-0.0454201);
}

double NNfunction_sb_uRuR::synapse0x373afc0() {
   return (neuron0x3735310()*0.0150935);
}

double NNfunction_sb_uRuR::synapse0x373b000() {
   return (neuron0x3735650()*0.0389166);
}

double NNfunction_sb_uRuR::synapse0x373b040() {
   return (neuron0x3735990()*0.0944745);
}

double NNfunction_sb_uRuR::synapse0x373b080() {
   return (neuron0x3735cd0()*-0.0890945);
}

double NNfunction_sb_uRuR::synapse0x373b0c0() {
   return (neuron0x3736010()*0.361286);
}

double NNfunction_sb_uRuR::synapse0x373b100() {
   return (neuron0x3736350()*-0.128197);
}

double NNfunction_sb_uRuR::synapse0x373b140() {
   return (neuron0x3736690()*-0.0523064);
}

double NNfunction_sb_uRuR::synapse0x373b180() {
   return (neuron0x37369d0()*-0.126257);
}

double NNfunction_sb_uRuR::synapse0x373b1c0() {
   return (neuron0x3736d10()*0.0594921);
}

double NNfunction_sb_uRuR::synapse0x373b200() {
   return (neuron0x3737050()*-0.393138);
}

double NNfunction_sb_uRuR::synapse0x373b240() {
   return (neuron0x3737390()*0.0694622);
}

double NNfunction_sb_uRuR::synapse0x37340c0() {
   return (neuron0x37376d0()*0.0104918);
}

double NNfunction_sb_uRuR::synapse0x3734100() {
   return (neuron0x3737c30()*-0.061021);
}

double NNfunction_sb_uRuR::synapse0x373b390() {
   return (neuron0x3737e50()*-0.132581);
}

double NNfunction_sb_uRuR::synapse0x373b3d0() {
   return (neuron0x3738190()*0.363825);
}

double NNfunction_sb_uRuR::synapse0x373b410() {
   return (neuron0x37384d0()*-0.0155432);
}

double NNfunction_sb_uRuR::synapse0x373b450() {
   return (neuron0x3738810()*0.00605305);
}

double NNfunction_sb_uRuR::synapse0x373b490() {
   return (neuron0x3738b50()*0.0224527);
}

double NNfunction_sb_uRuR::synapse0x373b4d0() {
   return (neuron0x3738e90()*-0.0710662);
}

double NNfunction_sb_uRuR::synapse0x373b850() {
   return (neuron0x3734360()*0.0517975);
}

double NNfunction_sb_uRuR::synapse0x373b890() {
   return (neuron0x3734610()*0.385475);
}

double NNfunction_sb_uRuR::synapse0x373b8d0() {
   return (neuron0x3734950()*0.0170286);
}

double NNfunction_sb_uRuR::synapse0x373b910() {
   return (neuron0x3734c90()*1.68924);
}

double NNfunction_sb_uRuR::synapse0x373b950() {
   return (neuron0x3734fd0()*-0.0254966);
}

double NNfunction_sb_uRuR::synapse0x373b990() {
   return (neuron0x3735310()*-0.0995014);
}

double NNfunction_sb_uRuR::synapse0x373b9d0() {
   return (neuron0x3735650()*0.0596066);
}

double NNfunction_sb_uRuR::synapse0x373ba10() {
   return (neuron0x3735990()*0.0625811);
}

double NNfunction_sb_uRuR::synapse0x373ba50() {
   return (neuron0x3735cd0()*0.0347911);
}

double NNfunction_sb_uRuR::synapse0x373ba90() {
   return (neuron0x3736010()*-0.033022);
}

double NNfunction_sb_uRuR::synapse0x373bad0() {
   return (neuron0x3736350()*-0.0854274);
}

double NNfunction_sb_uRuR::synapse0x373bb10() {
   return (neuron0x3736690()*0.0818333);
}

double NNfunction_sb_uRuR::synapse0x373bb50() {
   return (neuron0x37369d0()*-0.0252487);
}

double NNfunction_sb_uRuR::synapse0x373bb90() {
   return (neuron0x3736d10()*0.082241);
}

double NNfunction_sb_uRuR::synapse0x373bbd0() {
   return (neuron0x3737050()*1.21576);
}

double NNfunction_sb_uRuR::synapse0x373bc10() {
   return (neuron0x3737390()*0.0279494);
}

double NNfunction_sb_uRuR::synapse0x373b6a0() {
   return (neuron0x37376d0()*0.0588774);
}

double NNfunction_sb_uRuR::synapse0x373b6e0() {
   return (neuron0x3737c30()*0.0985254);
}

double NNfunction_sb_uRuR::synapse0x373bd60() {
   return (neuron0x3737e50()*-0.0737352);
}

double NNfunction_sb_uRuR::synapse0x373bda0() {
   return (neuron0x3738190()*-0.268512);
}

double NNfunction_sb_uRuR::synapse0x373bde0() {
   return (neuron0x37384d0()*-0.000686301);
}

double NNfunction_sb_uRuR::synapse0x373be20() {
   return (neuron0x3738810()*-0.0301108);
}

double NNfunction_sb_uRuR::synapse0x373be60() {
   return (neuron0x3738b50()*0.0363031);
}

double NNfunction_sb_uRuR::synapse0x373bea0() {
   return (neuron0x3738e90()*0.00985268);
}

double NNfunction_sb_uRuR::synapse0x373c220() {
   return (neuron0x3734360()*0.732038);
}

double NNfunction_sb_uRuR::synapse0x373c260() {
   return (neuron0x3734610()*1.05997);
}

double NNfunction_sb_uRuR::synapse0x373c2a0() {
   return (neuron0x3734950()*0.622355);
}

double NNfunction_sb_uRuR::synapse0x373c2e0() {
   return (neuron0x3734c90()*0.412728);
}

double NNfunction_sb_uRuR::synapse0x373c320() {
   return (neuron0x3734fd0()*0.0293719);
}

double NNfunction_sb_uRuR::synapse0x373c360() {
   return (neuron0x3735310()*0.565524);
}

double NNfunction_sb_uRuR::synapse0x373c3a0() {
   return (neuron0x3735650()*-0.363508);
}

double NNfunction_sb_uRuR::synapse0x373c3e0() {
   return (neuron0x3735990()*-0.224686);
}

double NNfunction_sb_uRuR::synapse0x373c420() {
   return (neuron0x3735cd0()*-0.115887);
}

double NNfunction_sb_uRuR::synapse0x34fd680() {
   return (neuron0x3736010()*-0.236696);
}

double NNfunction_sb_uRuR::synapse0x34fd6c0() {
   return (neuron0x3736350()*0.0524503);
}

double NNfunction_sb_uRuR::synapse0x34fd700() {
   return (neuron0x3736690()*0.194493);
}

double NNfunction_sb_uRuR::synapse0x34fd740() {
   return (neuron0x37369d0()*0.0703512);
}

double NNfunction_sb_uRuR::synapse0x34fd780() {
   return (neuron0x3736d10()*-0.408505);
}

double NNfunction_sb_uRuR::synapse0x34fd7c0() {
   return (neuron0x3737050()*0.905687);
}

double NNfunction_sb_uRuR::synapse0x34fd800() {
   return (neuron0x3737390()*-0.437089);
}

double NNfunction_sb_uRuR::synapse0x373c070() {
   return (neuron0x37376d0()*0.51806);
}

double NNfunction_sb_uRuR::synapse0x373c0b0() {
   return (neuron0x3737c30()*0.842475);
}

double NNfunction_sb_uRuR::synapse0x34fd950() {
   return (neuron0x3737e50()*0.256165);
}

double NNfunction_sb_uRuR::synapse0x34fd990() {
   return (neuron0x3738190()*-0.242546);
}

double NNfunction_sb_uRuR::synapse0x34fd9d0() {
   return (neuron0x37384d0()*0.384915);
}

double NNfunction_sb_uRuR::synapse0x34fda10() {
   return (neuron0x3738810()*-0.167089);
}

double NNfunction_sb_uRuR::synapse0x34fda50() {
   return (neuron0x3738b50()*0.157302);
}

double NNfunction_sb_uRuR::synapse0x373cc70() {
   return (neuron0x3738e90()*-0.199441);
}

double NNfunction_sb_uRuR::synapse0x373cff0() {
   return (neuron0x3734360()*0.562012);
}

double NNfunction_sb_uRuR::synapse0x373d030() {
   return (neuron0x3734610()*-0.78299);
}

double NNfunction_sb_uRuR::synapse0x373d070() {
   return (neuron0x3734950()*-0.259971);
}

double NNfunction_sb_uRuR::synapse0x373d0b0() {
   return (neuron0x3734c90()*-1.11963);
}

double NNfunction_sb_uRuR::synapse0x373d0f0() {
   return (neuron0x3734fd0()*-0.435319);
}

double NNfunction_sb_uRuR::synapse0x373d130() {
   return (neuron0x3735310()*-0.0113076);
}

double NNfunction_sb_uRuR::synapse0x373d170() {
   return (neuron0x3735650()*-0.073107);
}

double NNfunction_sb_uRuR::synapse0x373d1b0() {
   return (neuron0x3735990()*0.584915);
}

double NNfunction_sb_uRuR::synapse0x373d1f0() {
   return (neuron0x3735cd0()*-0.194049);
}

double NNfunction_sb_uRuR::synapse0x373d230() {
   return (neuron0x3736010()*-0.404184);
}

double NNfunction_sb_uRuR::synapse0x373d270() {
   return (neuron0x3736350()*0.855426);
}

double NNfunction_sb_uRuR::synapse0x373d2b0() {
   return (neuron0x3736690()*-0.324925);
}

double NNfunction_sb_uRuR::synapse0x373d2f0() {
   return (neuron0x37369d0()*0.0739677);
}

double NNfunction_sb_uRuR::synapse0x373d330() {
   return (neuron0x3736d10()*0.00999411);
}

double NNfunction_sb_uRuR::synapse0x373d370() {
   return (neuron0x3737050()*-0.101213);
}

double NNfunction_sb_uRuR::synapse0x373d3b0() {
   return (neuron0x3737390()*-0.0855247);
}

double NNfunction_sb_uRuR::synapse0x373ce40() {
   return (neuron0x37376d0()*0.802584);
}

double NNfunction_sb_uRuR::synapse0x373ce80() {
   return (neuron0x3737c30()*0.0354826);
}

double NNfunction_sb_uRuR::synapse0x373d500() {
   return (neuron0x3737e50()*0.31997);
}

double NNfunction_sb_uRuR::synapse0x373d540() {
   return (neuron0x3738190()*0.365987);
}

double NNfunction_sb_uRuR::synapse0x373d580() {
   return (neuron0x37384d0()*0.0902325);
}

double NNfunction_sb_uRuR::synapse0x373d5c0() {
   return (neuron0x3738810()*-0.752513);
}

double NNfunction_sb_uRuR::synapse0x373d600() {
   return (neuron0x3738b50()*0.496165);
}

double NNfunction_sb_uRuR::synapse0x373d640() {
   return (neuron0x3738e90()*0.211218);
}

double NNfunction_sb_uRuR::synapse0x373d9c0() {
   return (neuron0x3734360()*0.235385);
}

double NNfunction_sb_uRuR::synapse0x373da00() {
   return (neuron0x3734610()*-0.119258);
}

double NNfunction_sb_uRuR::synapse0x373da40() {
   return (neuron0x3734950()*0.188921);
}

double NNfunction_sb_uRuR::synapse0x373da80() {
   return (neuron0x3734c90()*0.265949);
}

double NNfunction_sb_uRuR::synapse0x373dac0() {
   return (neuron0x3734fd0()*0.338209);
}

double NNfunction_sb_uRuR::synapse0x373db00() {
   return (neuron0x3735310()*0.555561);
}

double NNfunction_sb_uRuR::synapse0x373db40() {
   return (neuron0x3735650()*0.360954);
}

double NNfunction_sb_uRuR::synapse0x373db80() {
   return (neuron0x3735990()*0.518744);
}

double NNfunction_sb_uRuR::synapse0x373dbc0() {
   return (neuron0x3735cd0()*0.179392);
}

double NNfunction_sb_uRuR::synapse0x373dc00() {
   return (neuron0x3736010()*0.276184);
}

double NNfunction_sb_uRuR::synapse0x373dc40() {
   return (neuron0x3736350()*-0.0290596);
}

double NNfunction_sb_uRuR::synapse0x373dc80() {
   return (neuron0x3736690()*0.0231142);
}

double NNfunction_sb_uRuR::synapse0x373dcc0() {
   return (neuron0x37369d0()*0.0493301);
}

double NNfunction_sb_uRuR::synapse0x373dd00() {
   return (neuron0x3736d10()*0.192402);
}

double NNfunction_sb_uRuR::synapse0x373dd40() {
   return (neuron0x3737050()*-0.474231);
}

double NNfunction_sb_uRuR::synapse0x373dd80() {
   return (neuron0x3737390()*-0.409973);
}

double NNfunction_sb_uRuR::synapse0x373d810() {
   return (neuron0x37376d0()*-0.342195);
}

double NNfunction_sb_uRuR::synapse0x373d850() {
   return (neuron0x3737c30()*0.0783059);
}

double NNfunction_sb_uRuR::synapse0x373ded0() {
   return (neuron0x3737e50()*0.0276385);
}

double NNfunction_sb_uRuR::synapse0x373df10() {
   return (neuron0x3738190()*-0.138062);
}

double NNfunction_sb_uRuR::synapse0x373df50() {
   return (neuron0x37384d0()*0.0751079);
}

double NNfunction_sb_uRuR::synapse0x373df90() {
   return (neuron0x3738810()*0.132383);
}

double NNfunction_sb_uRuR::synapse0x373dfd0() {
   return (neuron0x3738b50()*0.0207873);
}

double NNfunction_sb_uRuR::synapse0x373e010() {
   return (neuron0x3738e90()*-0.207699);
}

double NNfunction_sb_uRuR::synapse0x3737b20() {
   return (neuron0x3734360()*0.038355);
}

double NNfunction_sb_uRuR::synapse0x3737b60() {
   return (neuron0x3734610()*0.204952);
}

double NNfunction_sb_uRuR::synapse0x3737ba0() {
   return (neuron0x3734950()*0.000286358);
}

double NNfunction_sb_uRuR::synapse0x3737be0() {
   return (neuron0x3734c90()*-1.45464);
}

double NNfunction_sb_uRuR::synapse0x373e5a0() {
   return (neuron0x3734fd0()*-0.00260404);
}

double NNfunction_sb_uRuR::synapse0x373e5e0() {
   return (neuron0x3735310()*-0.00997992);
}

double NNfunction_sb_uRuR::synapse0x373e620() {
   return (neuron0x3735650()*0.000186194);
}

double NNfunction_sb_uRuR::synapse0x373e660() {
   return (neuron0x3735990()*-0.0210752);
}

double NNfunction_sb_uRuR::synapse0x373e6a0() {
   return (neuron0x3735cd0()*-0.0116627);
}

double NNfunction_sb_uRuR::synapse0x373e6e0() {
   return (neuron0x3736010()*0.103441);
}

double NNfunction_sb_uRuR::synapse0x373e720() {
   return (neuron0x3736350()*-0.0167671);
}

double NNfunction_sb_uRuR::synapse0x373e760() {
   return (neuron0x3736690()*0.0974737);
}

double NNfunction_sb_uRuR::synapse0x373e7a0() {
   return (neuron0x37369d0()*0.0437686);
}

double NNfunction_sb_uRuR::synapse0x373e7e0() {
   return (neuron0x3736d10()*0.0676144);
}

double NNfunction_sb_uRuR::synapse0x373e820() {
   return (neuron0x3737050()*0.64969);
}

double NNfunction_sb_uRuR::synapse0x373e860() {
   return (neuron0x3737390()*-0.0447962);
}

double NNfunction_sb_uRuR::synapse0x373e1e0() {
   return (neuron0x37376d0()*0.023574);
}

double NNfunction_sb_uRuR::synapse0x373e220() {
   return (neuron0x3737c30()*0.0157972);
}

double NNfunction_sb_uRuR::synapse0x373e9b0() {
   return (neuron0x3737e50()*-0.0416095);
}

double NNfunction_sb_uRuR::synapse0x373e9f0() {
   return (neuron0x3738190()*-0.0806681);
}

double NNfunction_sb_uRuR::synapse0x373ea30() {
   return (neuron0x37384d0()*0.0169188);
}

double NNfunction_sb_uRuR::synapse0x373ea70() {
   return (neuron0x3738810()*0.0189385);
}

double NNfunction_sb_uRuR::synapse0x373eab0() {
   return (neuron0x3738b50()*0.00207726);
}

double NNfunction_sb_uRuR::synapse0x373eaf0() {
   return (neuron0x3738e90()*-0.0379828);
}

double NNfunction_sb_uRuR::synapse0x373ee70() {
   return (neuron0x3734360()*-0.008746);
}

double NNfunction_sb_uRuR::synapse0x373eeb0() {
   return (neuron0x3734610()*-0.00117769);
}

double NNfunction_sb_uRuR::synapse0x373eef0() {
   return (neuron0x3734950()*-0.00559127);
}

double NNfunction_sb_uRuR::synapse0x373ef30() {
   return (neuron0x3734c90()*0.00161855);
}

double NNfunction_sb_uRuR::synapse0x373ef70() {
   return (neuron0x3734fd0()*-0.000560992);
}

double NNfunction_sb_uRuR::synapse0x373efb0() {
   return (neuron0x3735310()*0.0487973);
}

double NNfunction_sb_uRuR::synapse0x373eff0() {
   return (neuron0x3735650()*0.0750605);
}

double NNfunction_sb_uRuR::synapse0x373f030() {
   return (neuron0x3735990()*0.0396549);
}

double NNfunction_sb_uRuR::synapse0x373f070() {
   return (neuron0x3735cd0()*-0.00573672);
}

double NNfunction_sb_uRuR::synapse0x373f0b0() {
   return (neuron0x3736010()*-0.0215569);
}

double NNfunction_sb_uRuR::synapse0x373f0f0() {
   return (neuron0x3736350()*-0.0154527);
}

double NNfunction_sb_uRuR::synapse0x373f130() {
   return (neuron0x3736690()*0.0271414);
}

double NNfunction_sb_uRuR::synapse0x373f170() {
   return (neuron0x37369d0()*0.045742);
}

double NNfunction_sb_uRuR::synapse0x373f1b0() {
   return (neuron0x3736d10()*-0.0169722);
}

double NNfunction_sb_uRuR::synapse0x373f1f0() {
   return (neuron0x3737050()*-1.11694);
}

double NNfunction_sb_uRuR::synapse0x373f230() {
   return (neuron0x3737390()*-0.0896449);
}

double NNfunction_sb_uRuR::synapse0x373ecc0() {
   return (neuron0x37376d0()*-0.00145846);
}

double NNfunction_sb_uRuR::synapse0x373ed00() {
   return (neuron0x3737c30()*0.00686705);
}

double NNfunction_sb_uRuR::synapse0x373f380() {
   return (neuron0x3737e50()*0.0043638);
}

double NNfunction_sb_uRuR::synapse0x373f3c0() {
   return (neuron0x3738190()*0.0076036);
}

double NNfunction_sb_uRuR::synapse0x373f400() {
   return (neuron0x37384d0()*0.00232045);
}

double NNfunction_sb_uRuR::synapse0x373f440() {
   return (neuron0x3738810()*-0.0090387);
}

double NNfunction_sb_uRuR::synapse0x373f480() {
   return (neuron0x3738b50()*3.8398e-07);
}

double NNfunction_sb_uRuR::synapse0x373f4c0() {
   return (neuron0x3738e90()*0.00681638);
}

double NNfunction_sb_uRuR::synapse0x373f840() {
   return (neuron0x3734360()*0.0499683);
}

double NNfunction_sb_uRuR::synapse0x373f880() {
   return (neuron0x3734610()*-0.0117641);
}

double NNfunction_sb_uRuR::synapse0x373f8c0() {
   return (neuron0x3734950()*-0.0363886);
}

double NNfunction_sb_uRuR::synapse0x373f900() {
   return (neuron0x3734c90()*3.25299);
}

double NNfunction_sb_uRuR::synapse0x373f940() {
   return (neuron0x3734fd0()*0.0311264);
}

double NNfunction_sb_uRuR::synapse0x373f980() {
   return (neuron0x3735310()*0.0467758);
}

double NNfunction_sb_uRuR::synapse0x373f9c0() {
   return (neuron0x3735650()*-0.0591144);
}

double NNfunction_sb_uRuR::synapse0x373fa00() {
   return (neuron0x3735990()*-0.00825653);
}

double NNfunction_sb_uRuR::synapse0x373fa40() {
   return (neuron0x3735cd0()*-0.0351813);
}

double NNfunction_sb_uRuR::synapse0x373fa80() {
   return (neuron0x3736010()*-0.0751344);
}

double NNfunction_sb_uRuR::synapse0x373fac0() {
   return (neuron0x3736350()*-0.0165699);
}

double NNfunction_sb_uRuR::synapse0x373fb00() {
   return (neuron0x3736690()*-0.0225009);
}

double NNfunction_sb_uRuR::synapse0x373fb40() {
   return (neuron0x37369d0()*-0.0275005);
}

double NNfunction_sb_uRuR::synapse0x373fb80() {
   return (neuron0x3736d10()*-0.0211742);
}

double NNfunction_sb_uRuR::synapse0x373fbc0() {
   return (neuron0x3737050()*0.16224);
}

double NNfunction_sb_uRuR::synapse0x373fc00() {
   return (neuron0x3737390()*0.0175691);
}

double NNfunction_sb_uRuR::synapse0x373f690() {
   return (neuron0x37376d0()*-0.0297386);
}

double NNfunction_sb_uRuR::synapse0x373f6d0() {
   return (neuron0x3737c30()*-0.0640418);
}

double NNfunction_sb_uRuR::synapse0x373c460() {
   return (neuron0x3737e50()*-0.0514569);
}

double NNfunction_sb_uRuR::synapse0x373c4a0() {
   return (neuron0x3738190()*-0.00593924);
}

double NNfunction_sb_uRuR::synapse0x373c4e0() {
   return (neuron0x37384d0()*0.0258046);
}

double NNfunction_sb_uRuR::synapse0x373c520() {
   return (neuron0x3738810()*-0.00637227);
}

double NNfunction_sb_uRuR::synapse0x373c560() {
   return (neuron0x3738b50()*-0.0254129);
}

double NNfunction_sb_uRuR::synapse0x373c5a0() {
   return (neuron0x3738e90()*-0.059006);
}

double NNfunction_sb_uRuR::synapse0x373c920() {
   return (neuron0x3734360()*-0.0301108);
}

double NNfunction_sb_uRuR::synapse0x373c960() {
   return (neuron0x3734610()*-0.056227);
}

double NNfunction_sb_uRuR::synapse0x373c9a0() {
   return (neuron0x3734950()*-0.014934);
}

double NNfunction_sb_uRuR::synapse0x373c9e0() {
   return (neuron0x3734c90()*-1.76311);
}

double NNfunction_sb_uRuR::synapse0x373ca20() {
   return (neuron0x3734fd0()*0.00177493);
}

double NNfunction_sb_uRuR::synapse0x373ca60() {
   return (neuron0x3735310()*0.0149127);
}

double NNfunction_sb_uRuR::synapse0x373caa0() {
   return (neuron0x3735650()*-0.0013317);
}

double NNfunction_sb_uRuR::synapse0x373cae0() {
   return (neuron0x3735990()*0.0144925);
}

double NNfunction_sb_uRuR::synapse0x373cb20() {
   return (neuron0x3735cd0()*0.000852859);
}

double NNfunction_sb_uRuR::synapse0x373cb60() {
   return (neuron0x3736010()*-0.0486694);
}

double NNfunction_sb_uRuR::synapse0x373cba0() {
   return (neuron0x3736350()*0.0113642);
}

double NNfunction_sb_uRuR::synapse0x373cbe0() {
   return (neuron0x3736690()*-0.048237);
}

double NNfunction_sb_uRuR::synapse0x373cc20() {
   return (neuron0x37369d0()*-0.013204);
}

double NNfunction_sb_uRuR::synapse0x3740d60() {
   return (neuron0x3736d10()*-0.00424088);
}

double NNfunction_sb_uRuR::synapse0x3740da0() {
   return (neuron0x3737050()*0.0267854);
}

double NNfunction_sb_uRuR::synapse0x3740de0() {
   return (neuron0x3737390()*0.000881626);
}

double NNfunction_sb_uRuR::synapse0x373c770() {
   return (neuron0x37376d0()*0.0168303);
}

double NNfunction_sb_uRuR::synapse0x373c7b0() {
   return (neuron0x3737c30()*-0.0396906);
}

double NNfunction_sb_uRuR::synapse0x3740f30() {
   return (neuron0x3737e50()*0.0124416);
}

double NNfunction_sb_uRuR::synapse0x3740f70() {
   return (neuron0x3738190()*0.0273914);
}

double NNfunction_sb_uRuR::synapse0x3740fb0() {
   return (neuron0x37384d0()*0.0160371);
}

double NNfunction_sb_uRuR::synapse0x3740ff0() {
   return (neuron0x3738810()*0.00478729);
}

double NNfunction_sb_uRuR::synapse0x3741030() {
   return (neuron0x3738b50()*-0.0115967);
}

double NNfunction_sb_uRuR::synapse0x3741070() {
   return (neuron0x3738e90()*0.00874827);
}

double NNfunction_sb_uRuR::synapse0x37413f0() {
   return (neuron0x3734360()*0.0223395);
}

double NNfunction_sb_uRuR::synapse0x3741430() {
   return (neuron0x3734610()*0.000236904);
}

double NNfunction_sb_uRuR::synapse0x3741470() {
   return (neuron0x3734950()*-0.0199126);
}

double NNfunction_sb_uRuR::synapse0x37414b0() {
   return (neuron0x3734c90()*0.0722082);
}

double NNfunction_sb_uRuR::synapse0x37414f0() {
   return (neuron0x3734fd0()*-0.0147651);
}

double NNfunction_sb_uRuR::synapse0x3741530() {
   return (neuron0x3735310()*0.0208468);
}

double NNfunction_sb_uRuR::synapse0x3741570() {
   return (neuron0x3735650()*0.00217388);
}

double NNfunction_sb_uRuR::synapse0x37415b0() {
   return (neuron0x3735990()*0.00308488);
}

double NNfunction_sb_uRuR::synapse0x37415f0() {
   return (neuron0x3735cd0()*0.0112952);
}

double NNfunction_sb_uRuR::synapse0x3741630() {
   return (neuron0x3736010()*-0.014236);
}

double NNfunction_sb_uRuR::synapse0x3741670() {
   return (neuron0x3736350()*0.0159465);
}

double NNfunction_sb_uRuR::synapse0x37416b0() {
   return (neuron0x3736690()*0.42857);
}

double NNfunction_sb_uRuR::synapse0x37416f0() {
   return (neuron0x37369d0()*0.400421);
}

double NNfunction_sb_uRuR::synapse0x3741730() {
   return (neuron0x3736d10()*-0.0350267);
}

double NNfunction_sb_uRuR::synapse0x3741770() {
   return (neuron0x3737050()*-0.101958);
}

double NNfunction_sb_uRuR::synapse0x37417b0() {
   return (neuron0x3737390()*0.204797);
}

double NNfunction_sb_uRuR::synapse0x3741240() {
   return (neuron0x37376d0()*-0.0322052);
}

double NNfunction_sb_uRuR::synapse0x3741280() {
   return (neuron0x3737c30()*0.204115);
}

double NNfunction_sb_uRuR::synapse0x3741900() {
   return (neuron0x3737e50()*0.247999);
}

double NNfunction_sb_uRuR::synapse0x3741940() {
   return (neuron0x3738190()*0.0362052);
}

double NNfunction_sb_uRuR::synapse0x3741980() {
   return (neuron0x37384d0()*0.0214385);
}

double NNfunction_sb_uRuR::synapse0x37419c0() {
   return (neuron0x3738810()*-0.00484042);
}

double NNfunction_sb_uRuR::synapse0x3741a00() {
   return (neuron0x3738b50()*0.000314318);
}

double NNfunction_sb_uRuR::synapse0x3741a40() {
   return (neuron0x3738e90()*-0.0059989);
}

double NNfunction_sb_uRuR::synapse0x3741dc0() {
   return (neuron0x3734360()*0.264403);
}

double NNfunction_sb_uRuR::synapse0x3741e00() {
   return (neuron0x3734610()*-0.0310412);
}

double NNfunction_sb_uRuR::synapse0x3741e40() {
   return (neuron0x3734950()*0.49208);
}

double NNfunction_sb_uRuR::synapse0x3741e80() {
   return (neuron0x3734c90()*-0.567613);
}

double NNfunction_sb_uRuR::synapse0x3741ec0() {
   return (neuron0x3734fd0()*-0.190645);
}

double NNfunction_sb_uRuR::synapse0x3741f00() {
   return (neuron0x3735310()*-0.369613);
}

double NNfunction_sb_uRuR::synapse0x3741f40() {
   return (neuron0x3735650()*-0.0221022);
}

double NNfunction_sb_uRuR::synapse0x3741f80() {
   return (neuron0x3735990()*0.433664);
}

double NNfunction_sb_uRuR::synapse0x3741fc0() {
   return (neuron0x3735cd0()*0.361372);
}

double NNfunction_sb_uRuR::synapse0x3742000() {
   return (neuron0x3736010()*-0.787865);
}

double NNfunction_sb_uRuR::synapse0x3742040() {
   return (neuron0x3736350()*-0.399413);
}

double NNfunction_sb_uRuR::synapse0x3742080() {
   return (neuron0x3736690()*-0.126185);
}

double NNfunction_sb_uRuR::synapse0x37420c0() {
   return (neuron0x37369d0()*-0.0147174);
}

double NNfunction_sb_uRuR::synapse0x3742100() {
   return (neuron0x3736d10()*0.0068158);
}

double NNfunction_sb_uRuR::synapse0x3742140() {
   return (neuron0x3737050()*-0.690891);
}

double NNfunction_sb_uRuR::synapse0x3742180() {
   return (neuron0x3737390()*-0.146695);
}

double NNfunction_sb_uRuR::synapse0x3741c10() {
   return (neuron0x37376d0()*0.113386);
}

double NNfunction_sb_uRuR::synapse0x3741c50() {
   return (neuron0x3737c30()*-0.0452851);
}

double NNfunction_sb_uRuR::synapse0x37422d0() {
   return (neuron0x3737e50()*-0.888532);
}

double NNfunction_sb_uRuR::synapse0x3742310() {
   return (neuron0x3738190()*-0.0713725);
}

double NNfunction_sb_uRuR::synapse0x3742350() {
   return (neuron0x37384d0()*-0.055286);
}

double NNfunction_sb_uRuR::synapse0x3742390() {
   return (neuron0x3738810()*-0.356958);
}

double NNfunction_sb_uRuR::synapse0x37423d0() {
   return (neuron0x3738b50()*-0.0889398);
}

double NNfunction_sb_uRuR::synapse0x3742410() {
   return (neuron0x3738e90()*0.0683881);
}

double NNfunction_sb_uRuR::synapse0x3742790() {
   return (neuron0x3734360()*0.0325121);
}

double NNfunction_sb_uRuR::synapse0x37427d0() {
   return (neuron0x3734610()*0.00360146);
}

double NNfunction_sb_uRuR::synapse0x3742810() {
   return (neuron0x3734950()*0.00411554);
}

double NNfunction_sb_uRuR::synapse0x3742850() {
   return (neuron0x3734c90()*0.0483285);
}

double NNfunction_sb_uRuR::synapse0x3742890() {
   return (neuron0x3734fd0()*0.0187081);
}

double NNfunction_sb_uRuR::synapse0x37428d0() {
   return (neuron0x3735310()*-0.0887622);
}

double NNfunction_sb_uRuR::synapse0x3742910() {
   return (neuron0x3735650()*-0.157354);
}

double NNfunction_sb_uRuR::synapse0x3742950() {
   return (neuron0x3735990()*-0.088151);
}

double NNfunction_sb_uRuR::synapse0x3742990() {
   return (neuron0x3735cd0()*0.00352979);
}

double NNfunction_sb_uRuR::synapse0x37429d0() {
   return (neuron0x3736010()*0.0160566);
}

double NNfunction_sb_uRuR::synapse0x3742a10() {
   return (neuron0x3736350()*0.0274558);
}

double NNfunction_sb_uRuR::synapse0x3742a50() {
   return (neuron0x3736690()*0.0287473);
}

double NNfunction_sb_uRuR::synapse0x3742a90() {
   return (neuron0x37369d0()*0.00996855);
}

double NNfunction_sb_uRuR::synapse0x3742ad0() {
   return (neuron0x3736d10()*0.00280993);
}

double NNfunction_sb_uRuR::synapse0x3742b10() {
   return (neuron0x3737050()*-0.55006);
}

double NNfunction_sb_uRuR::synapse0x3742b50() {
   return (neuron0x3737390()*0.178041);
}

double NNfunction_sb_uRuR::synapse0x37425e0() {
   return (neuron0x37376d0()*-0.0180391);
}

double NNfunction_sb_uRuR::synapse0x3742620() {
   return (neuron0x3737c30()*0.0182555);
}

double NNfunction_sb_uRuR::synapse0x3742ca0() {
   return (neuron0x3737e50()*0.0293497);
}

double NNfunction_sb_uRuR::synapse0x3742ce0() {
   return (neuron0x3738190()*-0.00392746);
}

double NNfunction_sb_uRuR::synapse0x3742d20() {
   return (neuron0x37384d0()*0.0115721);
}

double NNfunction_sb_uRuR::synapse0x3742d60() {
   return (neuron0x3738810()*0.0166276);
}

double NNfunction_sb_uRuR::synapse0x3742da0() {
   return (neuron0x3738b50()*0.00130042);
}

double NNfunction_sb_uRuR::synapse0x3742de0() {
   return (neuron0x3738e90()*-0.0188537);
}

double NNfunction_sb_uRuR::synapse0x3743160() {
   return (neuron0x3734360()*-1.16666);
}

double NNfunction_sb_uRuR::synapse0x37344f0() {
   return (neuron0x3734610()*0.046323);
}

double NNfunction_sb_uRuR::synapse0x3734530() {
   return (neuron0x3734950()*-0.143613);
}

double NNfunction_sb_uRuR::synapse0x3734830() {
   return (neuron0x3734c90()*-0.893624);
}

double NNfunction_sb_uRuR::synapse0x3734870() {
   return (neuron0x3734fd0()*0.0755512);
}

double NNfunction_sb_uRuR::synapse0x3734b70() {
   return (neuron0x3735310()*0.352384);
}

double NNfunction_sb_uRuR::synapse0x3734bb0() {
   return (neuron0x3735650()*-0.691038);
}

double NNfunction_sb_uRuR::synapse0x3734eb0() {
   return (neuron0x3735990()*-0.158571);
}

double NNfunction_sb_uRuR::synapse0x3734ef0() {
   return (neuron0x3735cd0()*0.716867);
}

double NNfunction_sb_uRuR::synapse0x37351f0() {
   return (neuron0x3736010()*-0.169999);
}

double NNfunction_sb_uRuR::synapse0x3735230() {
   return (neuron0x3736350()*-0.00904259);
}

double NNfunction_sb_uRuR::synapse0x3735530() {
   return (neuron0x3736690()*0.190509);
}

double NNfunction_sb_uRuR::synapse0x3735570() {
   return (neuron0x37369d0()*-0.264833);
}

double NNfunction_sb_uRuR::synapse0x3735870() {
   return (neuron0x3736d10()*0.159466);
}

double NNfunction_sb_uRuR::synapse0x37358b0() {
   return (neuron0x3737050()*-0.287064);
}

double NNfunction_sb_uRuR::synapse0x3735bb0() {
   return (neuron0x3737390()*0.268302);
}

double NNfunction_sb_uRuR::synapse0x3735bf0() {
   return (neuron0x37376d0()*-0.137621);
}

double NNfunction_sb_uRuR::synapse0x3735ef0() {
   return (neuron0x3737c30()*1.41955);
}

double NNfunction_sb_uRuR::synapse0x3735f30() {
   return (neuron0x3737e50()*-0.184656);
}

double NNfunction_sb_uRuR::synapse0x3736230() {
   return (neuron0x3738190()*-0.52462);
}

double NNfunction_sb_uRuR::synapse0x3736270() {
   return (neuron0x37384d0()*-0.500235);
}

double NNfunction_sb_uRuR::synapse0x3736570() {
   return (neuron0x3738810()*0.127134);
}

double NNfunction_sb_uRuR::synapse0x37365b0() {
   return (neuron0x3738b50()*-0.612251);
}

double NNfunction_sb_uRuR::synapse0x37368b0() {
   return (neuron0x3738e90()*0.0384144);
}

double NNfunction_sb_uRuR::synapse0x37368f0() {
   return (neuron0x3734360()*-0.148918);
}

double NNfunction_sb_uRuR::synapse0x37375b0() {
   return (neuron0x3734610()*-0.154251);
}

double NNfunction_sb_uRuR::synapse0x37375f0() {
   return (neuron0x3734950()*-0.0390004);
}

double NNfunction_sb_uRuR::synapse0x3742fb0() {
   return (neuron0x3734c90()*0.199773);
}

double NNfunction_sb_uRuR::synapse0x3742ff0() {
   return (neuron0x3734fd0()*-0.0235472);
}

double NNfunction_sb_uRuR::synapse0x37378f0() {
   return (neuron0x3735310()*0.0598727);
}

double NNfunction_sb_uRuR::synapse0x3737930() {
   return (neuron0x3735650()*-0.0950119);
}

double NNfunction_sb_uRuR::synapse0x34ef330() {
   return (neuron0x3735990()*-0.0669787);
}

double NNfunction_sb_uRuR::synapse0x34ef370() {
   return (neuron0x3735cd0()*-0.142527);
}

double NNfunction_sb_uRuR::synapse0x3738070() {
   return (neuron0x3736010()*0.132496);
}

double NNfunction_sb_uRuR::synapse0x37380b0() {
   return (neuron0x3736350()*0.0570509);
}

double NNfunction_sb_uRuR::synapse0x37383b0() {
   return (neuron0x3736690()*0.0841013);
}

double NNfunction_sb_uRuR::synapse0x37383f0() {
   return (neuron0x37369d0()*0.254472);
}

double NNfunction_sb_uRuR::synapse0x37386f0() {
   return (neuron0x3736d10()*-0.305235);
}

double NNfunction_sb_uRuR::synapse0x3738730() {
   return (neuron0x3737050()*0.0314604);
}

double NNfunction_sb_uRuR::synapse0x3738a30() {
   return (neuron0x3737390()*-0.104089);
}

double NNfunction_sb_uRuR::synapse0x3738a70() {
   return (neuron0x37376d0()*0.0623631);
}

double NNfunction_sb_uRuR::synapse0x3738d70() {
   return (neuron0x3737c30()*-0.102209);
}

double NNfunction_sb_uRuR::synapse0x3738db0() {
   return (neuron0x3737e50()*-0.775053);
}

double NNfunction_sb_uRuR::synapse0x37390b0() {
   return (neuron0x3738190()*0.0375659);
}

double NNfunction_sb_uRuR::synapse0x37390f0() {
   return (neuron0x37384d0()*-0.0487979);
}

double NNfunction_sb_uRuR::synapse0x3736bf0() {
   return (neuron0x3738810()*-0.0408456);
}

double NNfunction_sb_uRuR::synapse0x3736c30() {
   return (neuron0x3738b50()*-0.0369394);
}

double NNfunction_sb_uRuR::synapse0x3744ed0() {
   return (neuron0x3738e90()*0.0386914);
}

double NNfunction_sb_uRuR::synapse0x3745250() {
   return (neuron0x3734360()*-0.0777322);
}

double NNfunction_sb_uRuR::synapse0x3745290() {
   return (neuron0x3734610()*0.0366209);
}

double NNfunction_sb_uRuR::synapse0x37452d0() {
   return (neuron0x3734950()*0.636802);
}

double NNfunction_sb_uRuR::synapse0x3745310() {
   return (neuron0x3734c90()*0.527273);
}

double NNfunction_sb_uRuR::synapse0x3745350() {
   return (neuron0x3734fd0()*-0.284779);
}

double NNfunction_sb_uRuR::synapse0x3745390() {
   return (neuron0x3735310()*-0.153229);
}

double NNfunction_sb_uRuR::synapse0x37453d0() {
   return (neuron0x3735650()*0.393552);
}

double NNfunction_sb_uRuR::synapse0x3745410() {
   return (neuron0x3735990()*0.016622);
}

double NNfunction_sb_uRuR::synapse0x3745450() {
   return (neuron0x3735cd0()*0.0391662);
}

double NNfunction_sb_uRuR::synapse0x3745490() {
   return (neuron0x3736010()*-0.173772);
}

double NNfunction_sb_uRuR::synapse0x37454d0() {
   return (neuron0x3736350()*0.282051);
}

double NNfunction_sb_uRuR::synapse0x3745510() {
   return (neuron0x3736690()*-0.717293);
}

double NNfunction_sb_uRuR::synapse0x3745550() {
   return (neuron0x37369d0()*0.200926);
}

double NNfunction_sb_uRuR::synapse0x3745590() {
   return (neuron0x3736d10()*-1.04997);
}

double NNfunction_sb_uRuR::synapse0x37455d0() {
   return (neuron0x3737050()*-0.720917);
}

double NNfunction_sb_uRuR::synapse0x3745610() {
   return (neuron0x3737390()*-0.224256);
}

double NNfunction_sb_uRuR::synapse0x37450a0() {
   return (neuron0x37376d0()*0.0268529);
}

double NNfunction_sb_uRuR::synapse0x37450e0() {
   return (neuron0x3737c30()*-0.00196972);
}

double NNfunction_sb_uRuR::synapse0x3745760() {
   return (neuron0x3737e50()*-0.395237);
}

double NNfunction_sb_uRuR::synapse0x37457a0() {
   return (neuron0x3738190()*-0.00725421);
}

double NNfunction_sb_uRuR::synapse0x37457e0() {
   return (neuron0x37384d0()*-0.508836);
}

double NNfunction_sb_uRuR::synapse0x3745820() {
   return (neuron0x3738810()*-0.266541);
}

double NNfunction_sb_uRuR::synapse0x3745860() {
   return (neuron0x3738b50()*0.381504);
}

double NNfunction_sb_uRuR::synapse0x37458a0() {
   return (neuron0x3738e90()*-0.00619205);
}

double NNfunction_sb_uRuR::synapse0x3745c20() {
   return (neuron0x3734360()*-0.578705);
}

double NNfunction_sb_uRuR::synapse0x3745c60() {
   return (neuron0x3734610()*-0.868079);
}

double NNfunction_sb_uRuR::synapse0x3745ca0() {
   return (neuron0x3734950()*-0.66163);
}

double NNfunction_sb_uRuR::synapse0x3745ce0() {
   return (neuron0x3734c90()*1.18487);
}

double NNfunction_sb_uRuR::synapse0x3745d20() {
   return (neuron0x3734fd0()*0.15597);
}

double NNfunction_sb_uRuR::synapse0x3745d60() {
   return (neuron0x3735310()*-0.544993);
}

double NNfunction_sb_uRuR::synapse0x3745da0() {
   return (neuron0x3735650()*-0.462511);
}

double NNfunction_sb_uRuR::synapse0x3745de0() {
   return (neuron0x3735990()*1.01475);
}

double NNfunction_sb_uRuR::synapse0x3745e20() {
   return (neuron0x3735cd0()*0.447104);
}

double NNfunction_sb_uRuR::synapse0x3745e60() {
   return (neuron0x3736010()*0.861238);
}

double NNfunction_sb_uRuR::synapse0x3745ea0() {
   return (neuron0x3736350()*-0.773969);
}

double NNfunction_sb_uRuR::synapse0x3745ee0() {
   return (neuron0x3736690()*0.245008);
}

double NNfunction_sb_uRuR::synapse0x3745f20() {
   return (neuron0x37369d0()*0.712529);
}

double NNfunction_sb_uRuR::synapse0x3745f60() {
   return (neuron0x3736d10()*-0.248717);
}

double NNfunction_sb_uRuR::synapse0x3745fa0() {
   return (neuron0x3737050()*0.250509);
}

double NNfunction_sb_uRuR::synapse0x3745fe0() {
   return (neuron0x3737390()*1.11327);
}

double NNfunction_sb_uRuR::synapse0x3745a70() {
   return (neuron0x37376d0()*-0.311239);
}

double NNfunction_sb_uRuR::synapse0x3745ab0() {
   return (neuron0x3737c30()*0.427637);
}

double NNfunction_sb_uRuR::synapse0x3746130() {
   return (neuron0x3737e50()*0.0888156);
}

double NNfunction_sb_uRuR::synapse0x3746170() {
   return (neuron0x3738190()*0.341407);
}

double NNfunction_sb_uRuR::synapse0x37461b0() {
   return (neuron0x37384d0()*-0.245051);
}

double NNfunction_sb_uRuR::synapse0x37461f0() {
   return (neuron0x3738810()*0.350729);
}

double NNfunction_sb_uRuR::synapse0x3746230() {
   return (neuron0x3738b50()*-0.648716);
}

double NNfunction_sb_uRuR::synapse0x3746270() {
   return (neuron0x3738e90()*0.19244);
}

double NNfunction_sb_uRuR::synapse0x37465f0() {
   return (neuron0x3734360()*-0.216815);
}

double NNfunction_sb_uRuR::synapse0x3746630() {
   return (neuron0x3734610()*-0.281337);
}

double NNfunction_sb_uRuR::synapse0x3746670() {
   return (neuron0x3734950()*0.132113);
}

double NNfunction_sb_uRuR::synapse0x37466b0() {
   return (neuron0x3734c90()*1.02557);
}

double NNfunction_sb_uRuR::synapse0x37466f0() {
   return (neuron0x3734fd0()*-1.61035);
}

double NNfunction_sb_uRuR::synapse0x3746730() {
   return (neuron0x3735310()*-0.357086);
}

double NNfunction_sb_uRuR::synapse0x3746770() {
   return (neuron0x3735650()*-0.392192);
}

double NNfunction_sb_uRuR::synapse0x37467b0() {
   return (neuron0x3735990()*0.415717);
}

double NNfunction_sb_uRuR::synapse0x37467f0() {
   return (neuron0x3735cd0()*0.122497);
}

double NNfunction_sb_uRuR::synapse0x3746830() {
   return (neuron0x3736010()*-0.0820296);
}

double NNfunction_sb_uRuR::synapse0x3746870() {
   return (neuron0x3736350()*-0.0845015);
}

double NNfunction_sb_uRuR::synapse0x37468b0() {
   return (neuron0x3736690()*-0.228773);
}

double NNfunction_sb_uRuR::synapse0x37468f0() {
   return (neuron0x37369d0()*0.128322);
}

double NNfunction_sb_uRuR::synapse0x3746930() {
   return (neuron0x3736d10()*-0.646409);
}

double NNfunction_sb_uRuR::synapse0x3746970() {
   return (neuron0x3737050()*0.788506);
}

double NNfunction_sb_uRuR::synapse0x37469b0() {
   return (neuron0x3737390()*-0.472472);
}

double NNfunction_sb_uRuR::synapse0x3746440() {
   return (neuron0x37376d0()*0.371895);
}

double NNfunction_sb_uRuR::synapse0x3746480() {
   return (neuron0x3737c30()*-0.0966732);
}

double NNfunction_sb_uRuR::synapse0x3746b00() {
   return (neuron0x3737e50()*0.164915);
}

double NNfunction_sb_uRuR::synapse0x3746b40() {
   return (neuron0x3738190()*-0.211653);
}

double NNfunction_sb_uRuR::synapse0x3746b80() {
   return (neuron0x37384d0()*0.0297319);
}

double NNfunction_sb_uRuR::synapse0x3746bc0() {
   return (neuron0x3738810()*-0.007793);
}

double NNfunction_sb_uRuR::synapse0x3746c00() {
   return (neuron0x3738b50()*0.087837);
}

double NNfunction_sb_uRuR::synapse0x3746c40() {
   return (neuron0x3738e90()*0.232642);
}

double NNfunction_sb_uRuR::synapse0x3746fc0() {
   return (neuron0x3734360()*0.0681419);
}

double NNfunction_sb_uRuR::synapse0x3747000() {
   return (neuron0x3734610()*0.0125452);
}

double NNfunction_sb_uRuR::synapse0x3747040() {
   return (neuron0x3734950()*-0.0398609);
}

double NNfunction_sb_uRuR::synapse0x3747080() {
   return (neuron0x3734c90()*-0.120987);
}

double NNfunction_sb_uRuR::synapse0x37470c0() {
   return (neuron0x3734fd0()*-0.00105581);
}

double NNfunction_sb_uRuR::synapse0x3747100() {
   return (neuron0x3735310()*-0.791192);
}

double NNfunction_sb_uRuR::synapse0x3747140() {
   return (neuron0x3735650()*-0.0512168);
}

double NNfunction_sb_uRuR::synapse0x3747180() {
   return (neuron0x3735990()*0.132215);
}

double NNfunction_sb_uRuR::synapse0x37471c0() {
   return (neuron0x3735cd0()*-0.0804147);
}

double NNfunction_sb_uRuR::synapse0x3747200() {
   return (neuron0x3736010()*-0.0354285);
}

double NNfunction_sb_uRuR::synapse0x3747240() {
   return (neuron0x3736350()*-0.0916839);
}

double NNfunction_sb_uRuR::synapse0x3747280() {
   return (neuron0x3736690()*-0.0551056);
}

double NNfunction_sb_uRuR::synapse0x37472c0() {
   return (neuron0x37369d0()*-0.0553574);
}

double NNfunction_sb_uRuR::synapse0x3747300() {
   return (neuron0x3736d10()*-0.0944605);
}

double NNfunction_sb_uRuR::synapse0x3747340() {
   return (neuron0x3737050()*0.933822);
}

double NNfunction_sb_uRuR::synapse0x3747380() {
   return (neuron0x3737390()*-0.631906);
}

double NNfunction_sb_uRuR::synapse0x3746e10() {
   return (neuron0x37376d0()*-0.375367);
}

double NNfunction_sb_uRuR::synapse0x3746e50() {
   return (neuron0x3737c30()*-0.10181);
}

double NNfunction_sb_uRuR::synapse0x37474d0() {
   return (neuron0x3737e50()*-0.026212);
}

double NNfunction_sb_uRuR::synapse0x3747510() {
   return (neuron0x3738190()*0.0242854);
}

double NNfunction_sb_uRuR::synapse0x3747550() {
   return (neuron0x37384d0()*0.0486181);
}

double NNfunction_sb_uRuR::synapse0x3747590() {
   return (neuron0x3738810()*0.0253671);
}

double NNfunction_sb_uRuR::synapse0x37475d0() {
   return (neuron0x3738b50()*-0.029707);
}

double NNfunction_sb_uRuR::synapse0x3747610() {
   return (neuron0x3738e90()*-0.00784405);
}

double NNfunction_sb_uRuR::synapse0x3747990() {
   return (neuron0x3734360()*-0.303131);
}

double NNfunction_sb_uRuR::synapse0x37479d0() {
   return (neuron0x3734610()*-0.179169);
}

double NNfunction_sb_uRuR::synapse0x3747a10() {
   return (neuron0x3734950()*0.0475532);
}

double NNfunction_sb_uRuR::synapse0x3747a50() {
   return (neuron0x3734c90()*-1.22131);
}

double NNfunction_sb_uRuR::synapse0x3747a90() {
   return (neuron0x3734fd0()*-0.165874);
}

double NNfunction_sb_uRuR::synapse0x3747ad0() {
   return (neuron0x3735310()*-0.08975);
}

double NNfunction_sb_uRuR::synapse0x3747b10() {
   return (neuron0x3735650()*0.398425);
}

double NNfunction_sb_uRuR::synapse0x3747b50() {
   return (neuron0x3735990()*0.208748);
}

double NNfunction_sb_uRuR::synapse0x3747b90() {
   return (neuron0x3735cd0()*-0.119905);
}

double NNfunction_sb_uRuR::synapse0x373fd50() {
   return (neuron0x3736010()*-0.213161);
}

double NNfunction_sb_uRuR::synapse0x373fd90() {
   return (neuron0x3736350()*-0.17089);
}

double NNfunction_sb_uRuR::synapse0x373fdd0() {
   return (neuron0x3736690()*-0.22384);
}

double NNfunction_sb_uRuR::synapse0x373fe10() {
   return (neuron0x37369d0()*0.0495585);
}

double NNfunction_sb_uRuR::synapse0x373fe50() {
   return (neuron0x3736d10()*0.184042);
}

double NNfunction_sb_uRuR::synapse0x373fe90() {
   return (neuron0x3737050()*2.34392);
}

double NNfunction_sb_uRuR::synapse0x373fed0() {
   return (neuron0x3737390()*0.265678);
}

double NNfunction_sb_uRuR::synapse0x37477e0() {
   return (neuron0x37376d0()*0.114728);
}

double NNfunction_sb_uRuR::synapse0x3747820() {
   return (neuron0x3737c30()*0.0941542);
}

double NNfunction_sb_uRuR::synapse0x3740020() {
   return (neuron0x3737e50()*-0.0440671);
}

double NNfunction_sb_uRuR::synapse0x3740060() {
   return (neuron0x3738190()*-0.0510847);
}

double NNfunction_sb_uRuR::synapse0x37400a0() {
   return (neuron0x37384d0()*0.104054);
}

double NNfunction_sb_uRuR::synapse0x37400e0() {
   return (neuron0x3738810()*-0.0584258);
}

double NNfunction_sb_uRuR::synapse0x3740120() {
   return (neuron0x3738b50()*-0.00890351);
}

double NNfunction_sb_uRuR::synapse0x3740160() {
   return (neuron0x3738e90()*0.182514);
}

double NNfunction_sb_uRuR::synapse0x37404e0() {
   return (neuron0x3734360()*-0.0784591);
}

double NNfunction_sb_uRuR::synapse0x3740520() {
   return (neuron0x3734610()*-0.341662);
}

double NNfunction_sb_uRuR::synapse0x3740560() {
   return (neuron0x3734950()*-0.152799);
}

double NNfunction_sb_uRuR::synapse0x37405a0() {
   return (neuron0x3734c90()*0.757117);
}

double NNfunction_sb_uRuR::synapse0x37405e0() {
   return (neuron0x3734fd0()*0.106668);
}

double NNfunction_sb_uRuR::synapse0x3740620() {
   return (neuron0x3735310()*-0.320283);
}

double NNfunction_sb_uRuR::synapse0x3740660() {
   return (neuron0x3735650()*0.0758655);
}

double NNfunction_sb_uRuR::synapse0x37406a0() {
   return (neuron0x3735990()*-0.00600158);
}

double NNfunction_sb_uRuR::synapse0x37406e0() {
   return (neuron0x3735cd0()*-0.648068);
}

double NNfunction_sb_uRuR::synapse0x3740720() {
   return (neuron0x3736010()*-0.237974);
}

double NNfunction_sb_uRuR::synapse0x3740760() {
   return (neuron0x3736350()*0.367177);
}

double NNfunction_sb_uRuR::synapse0x37407a0() {
   return (neuron0x3736690()*0.227472);
}

double NNfunction_sb_uRuR::synapse0x37407e0() {
   return (neuron0x37369d0()*-0.140764);
}

double NNfunction_sb_uRuR::synapse0x3740820() {
   return (neuron0x3736d10()*0.398454);
}

double NNfunction_sb_uRuR::synapse0x3740860() {
   return (neuron0x3737050()*0.369972);
}

double NNfunction_sb_uRuR::synapse0x37408a0() {
   return (neuron0x3737390()*-0.0221016);
}

double NNfunction_sb_uRuR::synapse0x3740330() {
   return (neuron0x37376d0()*0.0660134);
}

double NNfunction_sb_uRuR::synapse0x3740370() {
   return (neuron0x3737c30()*0.253276);
}

double NNfunction_sb_uRuR::synapse0x37409f0() {
   return (neuron0x3737e50()*-0.310609);
}

double NNfunction_sb_uRuR::synapse0x3740a30() {
   return (neuron0x3738190()*0.169144);
}

double NNfunction_sb_uRuR::synapse0x3740a70() {
   return (neuron0x37384d0()*0.144256);
}

double NNfunction_sb_uRuR::synapse0x3740ab0() {
   return (neuron0x3738810()*-0.28805);
}

double NNfunction_sb_uRuR::synapse0x3740af0() {
   return (neuron0x3738b50()*0.00488603);
}

double NNfunction_sb_uRuR::synapse0x3740b30() {
   return (neuron0x3738e90()*-0.049795);
}

double NNfunction_sb_uRuR::synapse0x3740d00() {
   return (neuron0x3734360()*-0.515498);
}

double NNfunction_sb_uRuR::synapse0x3749d90() {
   return (neuron0x3734610()*-0.139795);
}

double NNfunction_sb_uRuR::synapse0x3749dd0() {
   return (neuron0x3734950()*-0.259491);
}

double NNfunction_sb_uRuR::synapse0x3749e10() {
   return (neuron0x3734c90()*-0.462482);
}

double NNfunction_sb_uRuR::synapse0x3749e50() {
   return (neuron0x3734fd0()*-0.297639);
}

double NNfunction_sb_uRuR::synapse0x3749e90() {
   return (neuron0x3735310()*0.100226);
}

double NNfunction_sb_uRuR::synapse0x3749ed0() {
   return (neuron0x3735650()*-0.582104);
}

double NNfunction_sb_uRuR::synapse0x3749f10() {
   return (neuron0x3735990()*-0.392995);
}

double NNfunction_sb_uRuR::synapse0x3749f50() {
   return (neuron0x3735cd0()*0.287634);
}

double NNfunction_sb_uRuR::synapse0x3749f90() {
   return (neuron0x3736010()*-0.267929);
}

double NNfunction_sb_uRuR::synapse0x3749fd0() {
   return (neuron0x3736350()*-0.306917);
}

double NNfunction_sb_uRuR::synapse0x374a010() {
   return (neuron0x3736690()*-0.31359);
}

double NNfunction_sb_uRuR::synapse0x374a050() {
   return (neuron0x37369d0()*0.41169);
}

double NNfunction_sb_uRuR::synapse0x374a090() {
   return (neuron0x3736d10()*-0.170164);
}

double NNfunction_sb_uRuR::synapse0x374a0d0() {
   return (neuron0x3737050()*-0.0219038);
}

double NNfunction_sb_uRuR::synapse0x374a110() {
   return (neuron0x3737390()*-0.454635);
}

double NNfunction_sb_uRuR::synapse0x3749be0() {
   return (neuron0x37376d0()*0.277848);
}

double NNfunction_sb_uRuR::synapse0x3749c20() {
   return (neuron0x3737c30()*-0.0570814);
}

double NNfunction_sb_uRuR::synapse0x374a260() {
   return (neuron0x3737e50()*-0.185936);
}

double NNfunction_sb_uRuR::synapse0x374a2a0() {
   return (neuron0x3738190()*0.322411);
}

double NNfunction_sb_uRuR::synapse0x374a2e0() {
   return (neuron0x37384d0()*-0.0520595);
}

double NNfunction_sb_uRuR::synapse0x374a320() {
   return (neuron0x3738810()*-0.306464);
}

double NNfunction_sb_uRuR::synapse0x374a360() {
   return (neuron0x3738b50()*-0.112293);
}

double NNfunction_sb_uRuR::synapse0x374a3a0() {
   return (neuron0x3738e90()*-0.326994);
}

double NNfunction_sb_uRuR::synapse0x374a720() {
   return (neuron0x3734360()*-0.45555);
}

double NNfunction_sb_uRuR::synapse0x374a760() {
   return (neuron0x3734610()*0.005055);
}

double NNfunction_sb_uRuR::synapse0x374a7a0() {
   return (neuron0x3734950()*0.389763);
}

double NNfunction_sb_uRuR::synapse0x374a7e0() {
   return (neuron0x3734c90()*0.388086);
}

double NNfunction_sb_uRuR::synapse0x374a820() {
   return (neuron0x3734fd0()*0.111513);
}

double NNfunction_sb_uRuR::synapse0x374a860() {
   return (neuron0x3735310()*-0.124425);
}

double NNfunction_sb_uRuR::synapse0x374a8a0() {
   return (neuron0x3735650()*-0.291559);
}

double NNfunction_sb_uRuR::synapse0x374a8e0() {
   return (neuron0x3735990()*-1.39711);
}

double NNfunction_sb_uRuR::synapse0x374a920() {
   return (neuron0x3735cd0()*-0.499993);
}

double NNfunction_sb_uRuR::synapse0x374a960() {
   return (neuron0x3736010()*0.1252);
}

double NNfunction_sb_uRuR::synapse0x374a9a0() {
   return (neuron0x3736350()*-1.11632);
}

double NNfunction_sb_uRuR::synapse0x374a9e0() {
   return (neuron0x3736690()*-0.184949);
}

double NNfunction_sb_uRuR::synapse0x374aa20() {
   return (neuron0x37369d0()*0.619091);
}

double NNfunction_sb_uRuR::synapse0x374aa60() {
   return (neuron0x3736d10()*-0.823777);
}

double NNfunction_sb_uRuR::synapse0x374aaa0() {
   return (neuron0x3737050()*-0.699044);
}

double NNfunction_sb_uRuR::synapse0x374aae0() {
   return (neuron0x3737390()*-0.241627);
}

double NNfunction_sb_uRuR::synapse0x374a570() {
   return (neuron0x37376d0()*-0.300061);
}

double NNfunction_sb_uRuR::synapse0x374a5b0() {
   return (neuron0x3737c30()*-0.109392);
}

double NNfunction_sb_uRuR::synapse0x374ac30() {
   return (neuron0x3737e50()*-0.3907);
}

double NNfunction_sb_uRuR::synapse0x374ac70() {
   return (neuron0x3738190()*-0.00319396);
}

double NNfunction_sb_uRuR::synapse0x374acb0() {
   return (neuron0x37384d0()*0.206749);
}

double NNfunction_sb_uRuR::synapse0x374acf0() {
   return (neuron0x3738810()*-0.106246);
}

double NNfunction_sb_uRuR::synapse0x374ad30() {
   return (neuron0x3738b50()*0.380622);
}

double NNfunction_sb_uRuR::synapse0x374ad70() {
   return (neuron0x3738e90()*-0.0157727);
}

double NNfunction_sb_uRuR::synapse0x374b0f0() {
   return (neuron0x3734360()*0.255053);
}

double NNfunction_sb_uRuR::synapse0x374b130() {
   return (neuron0x3734610()*-0.45689);
}

double NNfunction_sb_uRuR::synapse0x374b170() {
   return (neuron0x3734950()*0.044309);
}

double NNfunction_sb_uRuR::synapse0x374b1b0() {
   return (neuron0x3734c90()*0.235293);
}

double NNfunction_sb_uRuR::synapse0x374b1f0() {
   return (neuron0x3734fd0()*-0.0430246);
}

double NNfunction_sb_uRuR::synapse0x374b230() {
   return (neuron0x3735310()*0.0329765);
}

double NNfunction_sb_uRuR::synapse0x374b270() {
   return (neuron0x3735650()*0.0425217);
}

double NNfunction_sb_uRuR::synapse0x374b2b0() {
   return (neuron0x3735990()*0.173778);
}

double NNfunction_sb_uRuR::synapse0x374b2f0() {
   return (neuron0x3735cd0()*-0.295983);
}

double NNfunction_sb_uRuR::synapse0x374b330() {
   return (neuron0x3736010()*0.264722);
}

double NNfunction_sb_uRuR::synapse0x374b370() {
   return (neuron0x3736350()*0.761336);
}

double NNfunction_sb_uRuR::synapse0x374b3b0() {
   return (neuron0x3736690()*-0.0309962);
}

double NNfunction_sb_uRuR::synapse0x374b3f0() {
   return (neuron0x37369d0()*0.0577004);
}

double NNfunction_sb_uRuR::synapse0x374b430() {
   return (neuron0x3736d10()*0.217493);
}

double NNfunction_sb_uRuR::synapse0x374b470() {
   return (neuron0x3737050()*-0.349055);
}

double NNfunction_sb_uRuR::synapse0x374b4b0() {
   return (neuron0x3737390()*0.15658);
}

double NNfunction_sb_uRuR::synapse0x374af40() {
   return (neuron0x37376d0()*0.0617422);
}

double NNfunction_sb_uRuR::synapse0x374af80() {
   return (neuron0x3737c30()*-0.140315);
}

double NNfunction_sb_uRuR::synapse0x374b600() {
   return (neuron0x3737e50()*0.0132122);
}

double NNfunction_sb_uRuR::synapse0x374b640() {
   return (neuron0x3738190()*-0.089397);
}

double NNfunction_sb_uRuR::synapse0x374b680() {
   return (neuron0x37384d0()*0.0299501);
}

double NNfunction_sb_uRuR::synapse0x374b6c0() {
   return (neuron0x3738810()*0.0190819);
}

double NNfunction_sb_uRuR::synapse0x374b700() {
   return (neuron0x3738b50()*0.0867317);
}

double NNfunction_sb_uRuR::synapse0x374b740() {
   return (neuron0x3738e90()*-0.0363172);
}

double NNfunction_sb_uRuR::synapse0x374bac0() {
   return (neuron0x3734360()*0.0821631);
}

double NNfunction_sb_uRuR::synapse0x374bb00() {
   return (neuron0x3734610()*0.256323);
}

double NNfunction_sb_uRuR::synapse0x374bb40() {
   return (neuron0x3734950()*-0.0110471);
}

double NNfunction_sb_uRuR::synapse0x374bb80() {
   return (neuron0x3734c90()*1.20805);
}

double NNfunction_sb_uRuR::synapse0x374bbc0() {
   return (neuron0x3734fd0()*0.0108544);
}

double NNfunction_sb_uRuR::synapse0x374bc00() {
   return (neuron0x3735310()*0.0537083);
}

double NNfunction_sb_uRuR::synapse0x374bc40() {
   return (neuron0x3735650()*0.0101556);
}

double NNfunction_sb_uRuR::synapse0x374bc80() {
   return (neuron0x3735990()*0.0358021);
}

double NNfunction_sb_uRuR::synapse0x374bcc0() {
   return (neuron0x3735cd0()*-0.0153638);
}

double NNfunction_sb_uRuR::synapse0x374bd00() {
   return (neuron0x3736010()*-0.0291136);
}

double NNfunction_sb_uRuR::synapse0x374bd40() {
   return (neuron0x3736350()*-0.063866);
}

double NNfunction_sb_uRuR::synapse0x374bd80() {
   return (neuron0x3736690()*-0.0361929);
}

double NNfunction_sb_uRuR::synapse0x374bdc0() {
   return (neuron0x37369d0()*0.0312969);
}

double NNfunction_sb_uRuR::synapse0x374be00() {
   return (neuron0x3736d10()*0.0470808);
}

double NNfunction_sb_uRuR::synapse0x374be40() {
   return (neuron0x3737050()*-0.599352);
}

double NNfunction_sb_uRuR::synapse0x374be80() {
   return (neuron0x3737390()*0.0253618);
}

double NNfunction_sb_uRuR::synapse0x374b910() {
   return (neuron0x37376d0()*0.0531681);
}

double NNfunction_sb_uRuR::synapse0x374b950() {
   return (neuron0x3737c30()*-0.139607);
}

double NNfunction_sb_uRuR::synapse0x374bfd0() {
   return (neuron0x3737e50()*-0.0952106);
}

double NNfunction_sb_uRuR::synapse0x374c010() {
   return (neuron0x3738190()*-0.241625);
}

double NNfunction_sb_uRuR::synapse0x374c050() {
   return (neuron0x37384d0()*0.0513692);
}

double NNfunction_sb_uRuR::synapse0x374c090() {
   return (neuron0x3738810()*0.0136821);
}

double NNfunction_sb_uRuR::synapse0x374c0d0() {
   return (neuron0x3738b50()*-0.0365125);
}

double NNfunction_sb_uRuR::synapse0x374c110() {
   return (neuron0x3738e90()*-0.0598287);
}

double NNfunction_sb_uRuR::synapse0x374c490() {
   return (neuron0x3734360()*0.0994751);
}

double NNfunction_sb_uRuR::synapse0x374c4d0() {
   return (neuron0x3734610()*-0.0967622);
}

double NNfunction_sb_uRuR::synapse0x374c510() {
   return (neuron0x3734950()*0.016851);
}

double NNfunction_sb_uRuR::synapse0x374c550() {
   return (neuron0x3734c90()*-0.384331);
}

double NNfunction_sb_uRuR::synapse0x374c590() {
   return (neuron0x3734fd0()*0.0281632);
}

double NNfunction_sb_uRuR::synapse0x374c5d0() {
   return (neuron0x3735310()*0.0175941);
}

double NNfunction_sb_uRuR::synapse0x374c610() {
   return (neuron0x3735650()*-0.0277635);
}

double NNfunction_sb_uRuR::synapse0x374c650() {
   return (neuron0x3735990()*0.0836179);
}

double NNfunction_sb_uRuR::synapse0x374c690() {
   return (neuron0x3735cd0()*-0.363042);
}

double NNfunction_sb_uRuR::synapse0x374c6d0() {
   return (neuron0x3736010()*0.0461646);
}

double NNfunction_sb_uRuR::synapse0x374c710() {
   return (neuron0x3736350()*-0.215239);
}

double NNfunction_sb_uRuR::synapse0x374c750() {
   return (neuron0x3736690()*-0.0529353);
}

double NNfunction_sb_uRuR::synapse0x374c790() {
   return (neuron0x37369d0()*-0.197622);
}

double NNfunction_sb_uRuR::synapse0x374c7d0() {
   return (neuron0x3736d10()*-0.0640048);
}

double NNfunction_sb_uRuR::synapse0x374c810() {
   return (neuron0x3737050()*-0.424533);
}

double NNfunction_sb_uRuR::synapse0x374c850() {
   return (neuron0x3737390()*0.076716);
}

double NNfunction_sb_uRuR::synapse0x374c2e0() {
   return (neuron0x37376d0()*0.04197);
}

double NNfunction_sb_uRuR::synapse0x374c320() {
   return (neuron0x3737c30()*0.371221);
}

double NNfunction_sb_uRuR::synapse0x374c9a0() {
   return (neuron0x3737e50()*-0.0348091);
}

double NNfunction_sb_uRuR::synapse0x374c9e0() {
   return (neuron0x3738190()*-0.242387);
}

double NNfunction_sb_uRuR::synapse0x374ca20() {
   return (neuron0x37384d0()*0.0321407);
}

double NNfunction_sb_uRuR::synapse0x374ca60() {
   return (neuron0x3738810()*0.0254256);
}

double NNfunction_sb_uRuR::synapse0x374caa0() {
   return (neuron0x3738b50()*0.0313504);
}

double NNfunction_sb_uRuR::synapse0x374cae0() {
   return (neuron0x3738e90()*0.0242783);
}

double NNfunction_sb_uRuR::synapse0x374ce60() {
   return (neuron0x3734360()*-0.0811355);
}

double NNfunction_sb_uRuR::synapse0x374cea0() {
   return (neuron0x3734610()*0.0096399);
}

double NNfunction_sb_uRuR::synapse0x374cee0() {
   return (neuron0x3734950()*-0.03957);
}

double NNfunction_sb_uRuR::synapse0x374cf20() {
   return (neuron0x3734c90()*0.133674);
}

double NNfunction_sb_uRuR::synapse0x374cf60() {
   return (neuron0x3734fd0()*-0.104356);
}

double NNfunction_sb_uRuR::synapse0x374cfa0() {
   return (neuron0x3735310()*-0.0302848);
}

double NNfunction_sb_uRuR::synapse0x374cfe0() {
   return (neuron0x3735650()*-0.0128074);
}

double NNfunction_sb_uRuR::synapse0x374d020() {
   return (neuron0x3735990()*-0.0415189);
}

double NNfunction_sb_uRuR::synapse0x374d060() {
   return (neuron0x3735cd0()*0.0938053);
}

double NNfunction_sb_uRuR::synapse0x374d0a0() {
   return (neuron0x3736010()*-0.0801275);
}

double NNfunction_sb_uRuR::synapse0x374d0e0() {
   return (neuron0x3736350()*-0.00864614);
}

double NNfunction_sb_uRuR::synapse0x374d120() {
   return (neuron0x3736690()*-0.986163);
}

double NNfunction_sb_uRuR::synapse0x374d160() {
   return (neuron0x37369d0()*0.0334752);
}

double NNfunction_sb_uRuR::synapse0x374d1a0() {
   return (neuron0x3736d10()*0.185517);
}

double NNfunction_sb_uRuR::synapse0x374d1e0() {
   return (neuron0x3737050()*-0.0128053);
}

double NNfunction_sb_uRuR::synapse0x374d220() {
   return (neuron0x3737390()*-0.183849);
}

double NNfunction_sb_uRuR::synapse0x374ccb0() {
   return (neuron0x37376d0()*0.229954);
}

double NNfunction_sb_uRuR::synapse0x374ccf0() {
   return (neuron0x3737c30()*0.137174);
}

double NNfunction_sb_uRuR::synapse0x374d370() {
   return (neuron0x3737e50()*0.013523);
}

double NNfunction_sb_uRuR::synapse0x374d3b0() {
   return (neuron0x3738190()*0.0621829);
}

double NNfunction_sb_uRuR::synapse0x374d3f0() {
   return (neuron0x37384d0()*-0.0521037);
}

double NNfunction_sb_uRuR::synapse0x374d430() {
   return (neuron0x3738810()*-0.00316811);
}

double NNfunction_sb_uRuR::synapse0x374d470() {
   return (neuron0x3738b50()*-0.0221887);
}

double NNfunction_sb_uRuR::synapse0x374d4b0() {
   return (neuron0x3738e90()*-0.0496697);
}

double NNfunction_sb_uRuR::synapse0x374d830() {
   return (neuron0x3734360()*0.0714671);
}

double NNfunction_sb_uRuR::synapse0x374d870() {
   return (neuron0x3734610()*-0.37598);
}

double NNfunction_sb_uRuR::synapse0x374d8b0() {
   return (neuron0x3734950()*-0.00128145);
}

double NNfunction_sb_uRuR::synapse0x374d8f0() {
   return (neuron0x3734c90()*0.89577);
}

double NNfunction_sb_uRuR::synapse0x374d930() {
   return (neuron0x3734fd0()*-0.0489384);
}

double NNfunction_sb_uRuR::synapse0x374d970() {
   return (neuron0x3735310()*0.0228211);
}

double NNfunction_sb_uRuR::synapse0x374d9b0() {
   return (neuron0x3735650()*-0.0153651);
}

double NNfunction_sb_uRuR::synapse0x374d9f0() {
   return (neuron0x3735990()*-0.0476604);
}

double NNfunction_sb_uRuR::synapse0x374da30() {
   return (neuron0x3735cd0()*0.152793);
}

double NNfunction_sb_uRuR::synapse0x374da70() {
   return (neuron0x3736010()*0.0762326);
}

double NNfunction_sb_uRuR::synapse0x374dab0() {
   return (neuron0x3736350()*-0.0186242);
}

double NNfunction_sb_uRuR::synapse0x374daf0() {
   return (neuron0x3736690()*0.188819);
}

double NNfunction_sb_uRuR::synapse0x374db30() {
   return (neuron0x37369d0()*0.0204545);
}

double NNfunction_sb_uRuR::synapse0x374db70() {
   return (neuron0x3736d10()*0.164866);
}

double NNfunction_sb_uRuR::synapse0x374dbb0() {
   return (neuron0x3737050()*-0.0051848);
}

double NNfunction_sb_uRuR::synapse0x374dbf0() {
   return (neuron0x3737390()*-0.109448);
}

double NNfunction_sb_uRuR::synapse0x374d680() {
   return (neuron0x37376d0()*0.0229842);
}

double NNfunction_sb_uRuR::synapse0x374d6c0() {
   return (neuron0x3737c30()*0.317112);
}

double NNfunction_sb_uRuR::synapse0x374dd40() {
   return (neuron0x3737e50()*-0.0811713);
}

double NNfunction_sb_uRuR::synapse0x374dd80() {
   return (neuron0x3738190()*0.144154);
}

double NNfunction_sb_uRuR::synapse0x374ddc0() {
   return (neuron0x37384d0()*-0.0170736);
}

double NNfunction_sb_uRuR::synapse0x374de00() {
   return (neuron0x3738810()*-0.00985667);
}

double NNfunction_sb_uRuR::synapse0x374de40() {
   return (neuron0x3738b50()*-0.00897771);
}

double NNfunction_sb_uRuR::synapse0x374de80() {
   return (neuron0x3738e90()*-0.0858623);
}

double NNfunction_sb_uRuR::synapse0x374e200() {
   return (neuron0x3734360()*0.206992);
}

double NNfunction_sb_uRuR::synapse0x374e240() {
   return (neuron0x3734610()*-0.0248453);
}

double NNfunction_sb_uRuR::synapse0x374e280() {
   return (neuron0x3734950()*-0.186402);
}

double NNfunction_sb_uRuR::synapse0x374e2c0() {
   return (neuron0x3734c90()*0.851582);
}

double NNfunction_sb_uRuR::synapse0x374e300() {
   return (neuron0x3734fd0()*0.00598064);
}

double NNfunction_sb_uRuR::synapse0x374e340() {
   return (neuron0x3735310()*0.395972);
}

double NNfunction_sb_uRuR::synapse0x374e380() {
   return (neuron0x3735650()*0.186464);
}

double NNfunction_sb_uRuR::synapse0x374e3c0() {
   return (neuron0x3735990()*0.195457);
}

double NNfunction_sb_uRuR::synapse0x374e400() {
   return (neuron0x3735cd0()*0.177919);
}

double NNfunction_sb_uRuR::synapse0x374e440() {
   return (neuron0x3736010()*-1.14061);
}

double NNfunction_sb_uRuR::synapse0x374e480() {
   return (neuron0x3736350()*-0.0690739);
}

double NNfunction_sb_uRuR::synapse0x374e4c0() {
   return (neuron0x3736690()*0.326094);
}

double NNfunction_sb_uRuR::synapse0x374e500() {
   return (neuron0x37369d0()*-0.338187);
}

double NNfunction_sb_uRuR::synapse0x374e540() {
   return (neuron0x3736d10()*0.442644);
}

double NNfunction_sb_uRuR::synapse0x374e580() {
   return (neuron0x3737050()*-0.0563958);
}

double NNfunction_sb_uRuR::synapse0x374e5c0() {
   return (neuron0x3737390()*0.269523);
}

double NNfunction_sb_uRuR::synapse0x374e050() {
   return (neuron0x37376d0()*-0.476476);
}

double NNfunction_sb_uRuR::synapse0x374e090() {
   return (neuron0x3737c30()*-0.227053);
}

double NNfunction_sb_uRuR::synapse0x374e710() {
   return (neuron0x3737e50()*0.550805);
}

double NNfunction_sb_uRuR::synapse0x374e750() {
   return (neuron0x3738190()*0.200112);
}

double NNfunction_sb_uRuR::synapse0x374e790() {
   return (neuron0x37384d0()*0.472228);
}

double NNfunction_sb_uRuR::synapse0x374e7d0() {
   return (neuron0x3738810()*-0.0358682);
}

double NNfunction_sb_uRuR::synapse0x374e810() {
   return (neuron0x3738b50()*0.141081);
}

double NNfunction_sb_uRuR::synapse0x374e850() {
   return (neuron0x3738e90()*-0.114837);
}

double NNfunction_sb_uRuR::synapse0x374ebd0() {
   return (neuron0x3734360()*0.0819666);
}

double NNfunction_sb_uRuR::synapse0x37431a0() {
   return (neuron0x3734610()*0.0187756);
}

double NNfunction_sb_uRuR::synapse0x37431e0() {
   return (neuron0x3734950()*-0.0561233);
}

double NNfunction_sb_uRuR::synapse0x3743220() {
   return (neuron0x3734c90()*0.1947);
}

double NNfunction_sb_uRuR::synapse0x3743470() {
   return (neuron0x3734fd0()*0.0509665);
}

double NNfunction_sb_uRuR::synapse0x37434b0() {
   return (neuron0x3735310()*-0.127585);
}

double NNfunction_sb_uRuR::synapse0x37434f0() {
   return (neuron0x3735650()*0.632469);
}

double NNfunction_sb_uRuR::synapse0x3743740() {
   return (neuron0x3735990()*-0.326246);
}

double NNfunction_sb_uRuR::synapse0x3743780() {
   return (neuron0x3735cd0()*0.0607507);
}

double NNfunction_sb_uRuR::synapse0x37439d0() {
   return (neuron0x3736010()*0.0823264);
}

double NNfunction_sb_uRuR::synapse0x3743a10() {
   return (neuron0x3736350()*0.0552349);
}

double NNfunction_sb_uRuR::synapse0x3743a50() {
   return (neuron0x3736690()*0.0458186);
}

double NNfunction_sb_uRuR::synapse0x3743ca0() {
   return (neuron0x37369d0()*0.0595592);
}

double NNfunction_sb_uRuR::synapse0x3743ce0() {
   return (neuron0x3736d10()*-0.0103275);
}

double NNfunction_sb_uRuR::synapse0x3743f30() {
   return (neuron0x3737050()*2.20124);
}

double NNfunction_sb_uRuR::synapse0x3743f70() {
   return (neuron0x3737390()*0.0586499);
}

double NNfunction_sb_uRuR::synapse0x374ea20() {
   return (neuron0x37376d0()*0.122241);
}

double NNfunction_sb_uRuR::synapse0x374ea60() {
   return (neuron0x3737c30()*-0.0451975);
}

double NNfunction_sb_uRuR::synapse0x37440c0() {
   return (neuron0x3737e50()*0.0574593);
}

double NNfunction_sb_uRuR::synapse0x37445d0() {
   return (neuron0x3738190()*-0.0492257);
}

double NNfunction_sb_uRuR::synapse0x3744610() {
   return (neuron0x37384d0()*-0.0496108);
}

double NNfunction_sb_uRuR::synapse0x3744650() {
   return (neuron0x3738810()*-0.0397866);
}

double NNfunction_sb_uRuR::synapse0x37448a0() {
   return (neuron0x3738b50()*-0.0424594);
}

double NNfunction_sb_uRuR::synapse0x37448e0() {
   return (neuron0x3738e90()*-0.00913725);
}

double NNfunction_sb_uRuR::synapse0x3744190() {
   return (neuron0x3734360()*0.0169987);
}

double NNfunction_sb_uRuR::synapse0x37441d0() {
   return (neuron0x3734610()*-0.152248);
}

double NNfunction_sb_uRuR::synapse0x3744210() {
   return (neuron0x3734950()*0.0483879);
}

double NNfunction_sb_uRuR::synapse0x3744250() {
   return (neuron0x3734c90()*-0.423758);
}

double NNfunction_sb_uRuR::synapse0x3744bd0() {
   return (neuron0x3734fd0()*0.0508178);
}

double NNfunction_sb_uRuR::synapse0x3750f20() {
   return (neuron0x3735310()*0.00390321);
}

double NNfunction_sb_uRuR::synapse0x3750f60() {
   return (neuron0x3735650()*0.0745406);
}

double NNfunction_sb_uRuR::synapse0x3750fa0() {
   return (neuron0x3735990()*0.045156);
}

double NNfunction_sb_uRuR::synapse0x3750fe0() {
   return (neuron0x3735cd0()*0.27021);
}

double NNfunction_sb_uRuR::synapse0x3751020() {
   return (neuron0x3736010()*-0.0132271);
}

double NNfunction_sb_uRuR::synapse0x3751060() {
   return (neuron0x3736350()*-0.160558);
}

double NNfunction_sb_uRuR::synapse0x37510a0() {
   return (neuron0x3736690()*-0.0231107);
}

double NNfunction_sb_uRuR::synapse0x37510e0() {
   return (neuron0x37369d0()*-0.0858549);
}

double NNfunction_sb_uRuR::synapse0x3751120() {
   return (neuron0x3736d10()*0.116155);
}

double NNfunction_sb_uRuR::synapse0x3751160() {
   return (neuron0x3737050()*-0.411334);
}

double NNfunction_sb_uRuR::synapse0x37511a0() {
   return (neuron0x3737390()*0.0366653);
}

double NNfunction_sb_uRuR::synapse0x3744ab0() {
   return (neuron0x37376d0()*0.0398108);
}

double NNfunction_sb_uRuR::synapse0x3744af0() {
   return (neuron0x3737c30()*-0.0895335);
}

double NNfunction_sb_uRuR::synapse0x37512f0() {
   return (neuron0x3737e50()*-0.161692);
}

double NNfunction_sb_uRuR::synapse0x3751330() {
   return (neuron0x3738190()*-0.129755);
}

double NNfunction_sb_uRuR::synapse0x3751370() {
   return (neuron0x37384d0()*0.0198575);
}

double NNfunction_sb_uRuR::synapse0x37513b0() {
   return (neuron0x3738810()*-0.0212046);
}

double NNfunction_sb_uRuR::synapse0x37513f0() {
   return (neuron0x3738b50()*0.0253623);
}

double NNfunction_sb_uRuR::synapse0x3751430() {
   return (neuron0x3738e90()*-0.0307023);
}

double NNfunction_sb_uRuR::synapse0x37517b0() {
   return (neuron0x3734360()*-0.337558);
}

double NNfunction_sb_uRuR::synapse0x37517f0() {
   return (neuron0x3734610()*-0.140744);
}

double NNfunction_sb_uRuR::synapse0x3751830() {
   return (neuron0x3734950()*-0.147971);
}

double NNfunction_sb_uRuR::synapse0x3751870() {
   return (neuron0x3734c90()*1.617);
}

double NNfunction_sb_uRuR::synapse0x37518b0() {
   return (neuron0x3734fd0()*-0.10231);
}

double NNfunction_sb_uRuR::synapse0x37518f0() {
   return (neuron0x3735310()*-0.458243);
}

double NNfunction_sb_uRuR::synapse0x3751930() {
   return (neuron0x3735650()*0.150208);
}

double NNfunction_sb_uRuR::synapse0x3751970() {
   return (neuron0x3735990()*-0.0985248);
}

double NNfunction_sb_uRuR::synapse0x37519b0() {
   return (neuron0x3735cd0()*0.0951986);
}

double NNfunction_sb_uRuR::synapse0x37519f0() {
   return (neuron0x3736010()*-0.0246775);
}

double NNfunction_sb_uRuR::synapse0x3751a30() {
   return (neuron0x3736350()*-0.19751);
}

double NNfunction_sb_uRuR::synapse0x3751a70() {
   return (neuron0x3736690()*0.343333);
}

double NNfunction_sb_uRuR::synapse0x3751ab0() {
   return (neuron0x37369d0()*0.316521);
}

double NNfunction_sb_uRuR::synapse0x3751af0() {
   return (neuron0x3736d10()*0.326709);
}

double NNfunction_sb_uRuR::synapse0x3751b30() {
   return (neuron0x3737050()*-1.16209);
}

double NNfunction_sb_uRuR::synapse0x3751b70() {
   return (neuron0x3737390()*-0.0814248);
}

double NNfunction_sb_uRuR::synapse0x3751600() {
   return (neuron0x37376d0()*0.268103);
}

double NNfunction_sb_uRuR::synapse0x3751640() {
   return (neuron0x3737c30()*0.209927);
}

double NNfunction_sb_uRuR::synapse0x3751cc0() {
   return (neuron0x3737e50()*0.0329435);
}

double NNfunction_sb_uRuR::synapse0x3751d00() {
   return (neuron0x3738190()*0.124846);
}

double NNfunction_sb_uRuR::synapse0x3751d40() {
   return (neuron0x37384d0()*0.0669253);
}

double NNfunction_sb_uRuR::synapse0x3751d80() {
   return (neuron0x3738810()*0.0237003);
}

double NNfunction_sb_uRuR::synapse0x3751dc0() {
   return (neuron0x3738b50()*0.0448141);
}

double NNfunction_sb_uRuR::synapse0x3751e00() {
   return (neuron0x3738e90()*0.079072);
}

double NNfunction_sb_uRuR::synapse0x3752180() {
   return (neuron0x3734360()*-0.0440055);
}

double NNfunction_sb_uRuR::synapse0x37521c0() {
   return (neuron0x3734610()*-0.0493186);
}

double NNfunction_sb_uRuR::synapse0x3752200() {
   return (neuron0x3734950()*0.00777072);
}

double NNfunction_sb_uRuR::synapse0x3752240() {
   return (neuron0x3734c90()*-6.07454);
}

double NNfunction_sb_uRuR::synapse0x3752280() {
   return (neuron0x3734fd0()*0.0117374);
}

double NNfunction_sb_uRuR::synapse0x37522c0() {
   return (neuron0x3735310()*-0.0143622);
}

double NNfunction_sb_uRuR::synapse0x3752300() {
   return (neuron0x3735650()*0.0137583);
}

double NNfunction_sb_uRuR::synapse0x3752340() {
   return (neuron0x3735990()*-0.0285365);
}

double NNfunction_sb_uRuR::synapse0x3752380() {
   return (neuron0x3735cd0()*-0.00222071);
}

double NNfunction_sb_uRuR::synapse0x37523c0() {
   return (neuron0x3736010()*0.0312629);
}

double NNfunction_sb_uRuR::synapse0x3752400() {
   return (neuron0x3736350()*0.0362183);
}

double NNfunction_sb_uRuR::synapse0x3752440() {
   return (neuron0x3736690()*-0.0109811);
}

double NNfunction_sb_uRuR::synapse0x3752480() {
   return (neuron0x37369d0()*-0.0393149);
}

double NNfunction_sb_uRuR::synapse0x37524c0() {
   return (neuron0x3736d10()*0.00999296);
}

double NNfunction_sb_uRuR::synapse0x3752500() {
   return (neuron0x3737050()*-0.182729);
}

double NNfunction_sb_uRuR::synapse0x3752540() {
   return (neuron0x3737390()*0.00984405);
}

double NNfunction_sb_uRuR::synapse0x3751fd0() {
   return (neuron0x37376d0()*0.00407083);
}

double NNfunction_sb_uRuR::synapse0x3752010() {
   return (neuron0x3737c30()*0.050895);
}

double NNfunction_sb_uRuR::synapse0x3752690() {
   return (neuron0x3737e50()*0.0299158);
}

double NNfunction_sb_uRuR::synapse0x37526d0() {
   return (neuron0x3738190()*0.00706681);
}

double NNfunction_sb_uRuR::synapse0x3752710() {
   return (neuron0x37384d0()*0.00511764);
}

double NNfunction_sb_uRuR::synapse0x3752750() {
   return (neuron0x3738810()*0.0465612);
}

double NNfunction_sb_uRuR::synapse0x3752790() {
   return (neuron0x3738b50()*-0.0290999);
}

double NNfunction_sb_uRuR::synapse0x37527d0() {
   return (neuron0x3738e90()*0.0127635);
}

double NNfunction_sb_uRuR::synapse0x3752b50() {
   return (neuron0x3734360()*-0.970092);
}

double NNfunction_sb_uRuR::synapse0x3752b90() {
   return (neuron0x3734610()*0.111787);
}

double NNfunction_sb_uRuR::synapse0x3752bd0() {
   return (neuron0x3734950()*-0.252766);
}

double NNfunction_sb_uRuR::synapse0x3752c10() {
   return (neuron0x3734c90()*-0.282311);
}

double NNfunction_sb_uRuR::synapse0x3752c50() {
   return (neuron0x3734fd0()*-0.269292);
}

double NNfunction_sb_uRuR::synapse0x3752c90() {
   return (neuron0x3735310()*0.836573);
}

double NNfunction_sb_uRuR::synapse0x3752cd0() {
   return (neuron0x3735650()*0.478001);
}

double NNfunction_sb_uRuR::synapse0x3752d10() {
   return (neuron0x3735990()*0.379909);
}

double NNfunction_sb_uRuR::synapse0x3752d50() {
   return (neuron0x3735cd0()*-0.0945505);
}

double NNfunction_sb_uRuR::synapse0x3752d90() {
   return (neuron0x3736010()*0.0808876);
}

double NNfunction_sb_uRuR::synapse0x3752dd0() {
   return (neuron0x3736350()*-0.494098);
}

double NNfunction_sb_uRuR::synapse0x3752e10() {
   return (neuron0x3736690()*-0.495205);
}

double NNfunction_sb_uRuR::synapse0x3752e50() {
   return (neuron0x37369d0()*-0.509178);
}

double NNfunction_sb_uRuR::synapse0x3752e90() {
   return (neuron0x3736d10()*0.353363);
}

double NNfunction_sb_uRuR::synapse0x3752ed0() {
   return (neuron0x3737050()*1.00132);
}

double NNfunction_sb_uRuR::synapse0x3752f10() {
   return (neuron0x3737390()*-1.0266);
}

double NNfunction_sb_uRuR::synapse0x37529a0() {
   return (neuron0x37376d0()*0.673502);
}

double NNfunction_sb_uRuR::synapse0x37529e0() {
   return (neuron0x3737c30()*-0.418742);
}

double NNfunction_sb_uRuR::synapse0x3753060() {
   return (neuron0x3737e50()*-0.45944);
}

double NNfunction_sb_uRuR::synapse0x37530a0() {
   return (neuron0x3738190()*-0.171019);
}

double NNfunction_sb_uRuR::synapse0x37530e0() {
   return (neuron0x37384d0()*0.0599409);
}

double NNfunction_sb_uRuR::synapse0x3753120() {
   return (neuron0x3738810()*0.255843);
}

double NNfunction_sb_uRuR::synapse0x3753160() {
   return (neuron0x3738b50()*-0.616006);
}

double NNfunction_sb_uRuR::synapse0x37531a0() {
   return (neuron0x3738e90()*-0.299972);
}

double NNfunction_sb_uRuR::synapse0x3753520() {
   return (neuron0x3734360()*-0.158524);
}

double NNfunction_sb_uRuR::synapse0x3753560() {
   return (neuron0x3734610()*-0.211911);
}

double NNfunction_sb_uRuR::synapse0x37535a0() {
   return (neuron0x3734950()*0.0603663);
}

double NNfunction_sb_uRuR::synapse0x37535e0() {
   return (neuron0x3734c90()*3.68266);
}

double NNfunction_sb_uRuR::synapse0x3753620() {
   return (neuron0x3734fd0()*0.0523544);
}

double NNfunction_sb_uRuR::synapse0x3753660() {
   return (neuron0x3735310()*0.0108382);
}

double NNfunction_sb_uRuR::synapse0x37536a0() {
   return (neuron0x3735650()*0.120266);
}

double NNfunction_sb_uRuR::synapse0x37536e0() {
   return (neuron0x3735990()*-0.0206437);
}

double NNfunction_sb_uRuR::synapse0x3753720() {
   return (neuron0x3735cd0()*-0.0443532);
}

double NNfunction_sb_uRuR::synapse0x3753760() {
   return (neuron0x3736010()*0.0531346);
}

double NNfunction_sb_uRuR::synapse0x37537a0() {
   return (neuron0x3736350()*0.116131);
}

double NNfunction_sb_uRuR::synapse0x37537e0() {
   return (neuron0x3736690()*-0.176588);
}

double NNfunction_sb_uRuR::synapse0x3753820() {
   return (neuron0x37369d0()*-0.077468);
}

double NNfunction_sb_uRuR::synapse0x3753860() {
   return (neuron0x3736d10()*0.00870981);
}

double NNfunction_sb_uRuR::synapse0x37538a0() {
   return (neuron0x3737050()*1.56568);
}

double NNfunction_sb_uRuR::synapse0x37538e0() {
   return (neuron0x3737390()*-0.0909279);
}

double NNfunction_sb_uRuR::synapse0x3753370() {
   return (neuron0x37376d0()*0.0724375);
}

double NNfunction_sb_uRuR::synapse0x37533b0() {
   return (neuron0x3737c30()*0.0289432);
}

double NNfunction_sb_uRuR::synapse0x3753a30() {
   return (neuron0x3737e50()*0.151235);
}

double NNfunction_sb_uRuR::synapse0x3753a70() {
   return (neuron0x3738190()*0.14378);
}

double NNfunction_sb_uRuR::synapse0x3753ab0() {
   return (neuron0x37384d0()*-0.00410073);
}

double NNfunction_sb_uRuR::synapse0x3753af0() {
   return (neuron0x3738810()*0.0790201);
}

double NNfunction_sb_uRuR::synapse0x3753b30() {
   return (neuron0x3738b50()*-0.10983);
}

double NNfunction_sb_uRuR::synapse0x3753b70() {
   return (neuron0x3738e90()*0.0901738);
}

double NNfunction_sb_uRuR::synapse0x3753ef0() {
   return (neuron0x3734360()*0.0223577);
}

double NNfunction_sb_uRuR::synapse0x3753f30() {
   return (neuron0x3734610()*0.0454318);
}

double NNfunction_sb_uRuR::synapse0x3753f70() {
   return (neuron0x3734950()*0.0274741);
}

double NNfunction_sb_uRuR::synapse0x3753fb0() {
   return (neuron0x3734c90()*-0.0144462);
}

double NNfunction_sb_uRuR::synapse0x3753ff0() {
   return (neuron0x3734fd0()*0.277371);
}

double NNfunction_sb_uRuR::synapse0x3754030() {
   return (neuron0x3735310()*-0.232781);
}

double NNfunction_sb_uRuR::synapse0x3754070() {
   return (neuron0x3735650()*0.141196);
}

double NNfunction_sb_uRuR::synapse0x37540b0() {
   return (neuron0x3735990()*0.395732);
}

double NNfunction_sb_uRuR::synapse0x37540f0() {
   return (neuron0x3735cd0()*-0.00389317);
}

double NNfunction_sb_uRuR::synapse0x3754130() {
   return (neuron0x3736010()*-0.0296689);
}

double NNfunction_sb_uRuR::synapse0x3754170() {
   return (neuron0x3736350()*-0.00607071);
}

double NNfunction_sb_uRuR::synapse0x37541b0() {
   return (neuron0x3736690()*-0.0260034);
}

double NNfunction_sb_uRuR::synapse0x37541f0() {
   return (neuron0x37369d0()*-0.0512785);
}

double NNfunction_sb_uRuR::synapse0x3754230() {
   return (neuron0x3736d10()*0.0336904);
}

double NNfunction_sb_uRuR::synapse0x3754270() {
   return (neuron0x3737050()*-1.3438);
}

double NNfunction_sb_uRuR::synapse0x37542b0() {
   return (neuron0x3737390()*0.340684);
}

double NNfunction_sb_uRuR::synapse0x3753d40() {
   return (neuron0x37376d0()*0.184425);
}

double NNfunction_sb_uRuR::synapse0x3753d80() {
   return (neuron0x3737c30()*-0.0227572);
}

double NNfunction_sb_uRuR::synapse0x3754400() {
   return (neuron0x3737e50()*-0.0156256);
}

double NNfunction_sb_uRuR::synapse0x3754440() {
   return (neuron0x3738190()*-0.0208933);
}

double NNfunction_sb_uRuR::synapse0x3754480() {
   return (neuron0x37384d0()*0.0210101);
}

double NNfunction_sb_uRuR::synapse0x37544c0() {
   return (neuron0x3738810()*-0.0295581);
}

double NNfunction_sb_uRuR::synapse0x3754500() {
   return (neuron0x3738b50()*0.017331);
}

double NNfunction_sb_uRuR::synapse0x3754540() {
   return (neuron0x3738e90()*0.012953);
}

double NNfunction_sb_uRuR::synapse0x37548c0() {
   return (neuron0x3734360()*0.574027);
}

double NNfunction_sb_uRuR::synapse0x3754900() {
   return (neuron0x3734610()*-0.532121);
}

double NNfunction_sb_uRuR::synapse0x3754940() {
   return (neuron0x3734950()*-0.599708);
}

double NNfunction_sb_uRuR::synapse0x3754980() {
   return (neuron0x3734c90()*-1.56542);
}

double NNfunction_sb_uRuR::synapse0x37549c0() {
   return (neuron0x3734fd0()*0.20242);
}

double NNfunction_sb_uRuR::synapse0x3754a00() {
   return (neuron0x3735310()*-0.12794);
}

double NNfunction_sb_uRuR::synapse0x3754a40() {
   return (neuron0x3735650()*0.272844);
}

double NNfunction_sb_uRuR::synapse0x3754a80() {
   return (neuron0x3735990()*0.500309);
}

double NNfunction_sb_uRuR::synapse0x3754ac0() {
   return (neuron0x3735cd0()*-0.832448);
}

double NNfunction_sb_uRuR::synapse0x3754b00() {
   return (neuron0x3736010()*0.209409);
}

double NNfunction_sb_uRuR::synapse0x3754b40() {
   return (neuron0x3736350()*0.309474);
}

double NNfunction_sb_uRuR::synapse0x3754b80() {
   return (neuron0x3736690()*-0.13256);
}

double NNfunction_sb_uRuR::synapse0x3754bc0() {
   return (neuron0x37369d0()*-0.45682);
}

double NNfunction_sb_uRuR::synapse0x3754c00() {
   return (neuron0x3736d10()*0.217315);
}

double NNfunction_sb_uRuR::synapse0x3754c40() {
   return (neuron0x3737050()*-0.661423);
}

double NNfunction_sb_uRuR::synapse0x3754c80() {
   return (neuron0x3737390()*-0.174106);
}

double NNfunction_sb_uRuR::synapse0x3754710() {
   return (neuron0x37376d0()*0.0357078);
}

double NNfunction_sb_uRuR::synapse0x3754750() {
   return (neuron0x3737c30()*0.390331);
}

double NNfunction_sb_uRuR::synapse0x3754dd0() {
   return (neuron0x3737e50()*0.363779);
}

double NNfunction_sb_uRuR::synapse0x3754e10() {
   return (neuron0x3738190()*-0.497909);
}

double NNfunction_sb_uRuR::synapse0x3754e50() {
   return (neuron0x37384d0()*-0.275021);
}

double NNfunction_sb_uRuR::synapse0x3754e90() {
   return (neuron0x3738810()*1.3015);
}

double NNfunction_sb_uRuR::synapse0x3754ed0() {
   return (neuron0x3738b50()*-0.402762);
}

double NNfunction_sb_uRuR::synapse0x3754f10() {
   return (neuron0x3738e90()*-0.438007);
}

double NNfunction_sb_uRuR::synapse0x3755290() {
   return (neuron0x3734360()*0.395988);
}

double NNfunction_sb_uRuR::synapse0x37552d0() {
   return (neuron0x3734610()*-0.943718);
}

double NNfunction_sb_uRuR::synapse0x3755310() {
   return (neuron0x3734950()*-0.637467);
}

double NNfunction_sb_uRuR::synapse0x3755350() {
   return (neuron0x3734c90()*0.439038);
}

double NNfunction_sb_uRuR::synapse0x3755390() {
   return (neuron0x3734fd0()*-0.0103499);
}

double NNfunction_sb_uRuR::synapse0x37553d0() {
   return (neuron0x3735310()*-0.314255);
}

double NNfunction_sb_uRuR::synapse0x3755410() {
   return (neuron0x3735650()*-0.0628067);
}

double NNfunction_sb_uRuR::synapse0x3755450() {
   return (neuron0x3735990()*0.236896);
}

double NNfunction_sb_uRuR::synapse0x3755490() {
   return (neuron0x3735cd0()*0.980238);
}

double NNfunction_sb_uRuR::synapse0x37554d0() {
   return (neuron0x3736010()*0.0202752);
}

double NNfunction_sb_uRuR::synapse0x3755510() {
   return (neuron0x3736350()*0.208223);
}

double NNfunction_sb_uRuR::synapse0x3755550() {
   return (neuron0x3736690()*0.0465099);
}

double NNfunction_sb_uRuR::synapse0x3755590() {
   return (neuron0x37369d0()*0.687444);
}

double NNfunction_sb_uRuR::synapse0x37555d0() {
   return (neuron0x3736d10()*-0.363472);
}

double NNfunction_sb_uRuR::synapse0x3755610() {
   return (neuron0x3737050()*-0.479088);
}

double NNfunction_sb_uRuR::synapse0x3755650() {
   return (neuron0x3737390()*0.285678);
}

double NNfunction_sb_uRuR::synapse0x37550e0() {
   return (neuron0x37376d0()*0.284988);
}

double NNfunction_sb_uRuR::synapse0x3755120() {
   return (neuron0x3737c30()*-0.167486);
}

double NNfunction_sb_uRuR::synapse0x37557a0() {
   return (neuron0x3737e50()*0.0756949);
}

double NNfunction_sb_uRuR::synapse0x37557e0() {
   return (neuron0x3738190()*0.624678);
}

double NNfunction_sb_uRuR::synapse0x3755820() {
   return (neuron0x37384d0()*-0.277905);
}

double NNfunction_sb_uRuR::synapse0x3755860() {
   return (neuron0x3738810()*-0.015699);
}

double NNfunction_sb_uRuR::synapse0x37558a0() {
   return (neuron0x3738b50()*0.135076);
}

double NNfunction_sb_uRuR::synapse0x37558e0() {
   return (neuron0x3738e90()*-0.0862629);
}

double NNfunction_sb_uRuR::synapse0x373e390() {
   return (neuron0x3734360()*0.572127);
}

double NNfunction_sb_uRuR::synapse0x373e3d0() {
   return (neuron0x3734610()*0.00859303);
}

double NNfunction_sb_uRuR::synapse0x373e410() {
   return (neuron0x3734950()*0.286954);
}

double NNfunction_sb_uRuR::synapse0x373e450() {
   return (neuron0x3734c90()*-1.65284);
}

double NNfunction_sb_uRuR::synapse0x373e490() {
   return (neuron0x3734fd0()*-0.178042);
}

double NNfunction_sb_uRuR::synapse0x373e4d0() {
   return (neuron0x3735310()*-0.153749);
}

double NNfunction_sb_uRuR::synapse0x373e510() {
   return (neuron0x3735650()*0.383545);
}

double NNfunction_sb_uRuR::synapse0x373e550() {
   return (neuron0x3735990()*0.341397);
}

double NNfunction_sb_uRuR::synapse0x3756070() {
   return (neuron0x3735cd0()*-0.0950422);
}

double NNfunction_sb_uRuR::synapse0x37560b0() {
   return (neuron0x3736010()*-0.151637);
}

double NNfunction_sb_uRuR::synapse0x37560f0() {
   return (neuron0x3736350()*-0.386144);
}

double NNfunction_sb_uRuR::synapse0x3756130() {
   return (neuron0x3736690()*0.606104);
}

double NNfunction_sb_uRuR::synapse0x3756170() {
   return (neuron0x37369d0()*1.05536);
}

double NNfunction_sb_uRuR::synapse0x37561b0() {
   return (neuron0x3736d10()*0.701781);
}

double NNfunction_sb_uRuR::synapse0x37561f0() {
   return (neuron0x3737050()*1.05964);
}

double NNfunction_sb_uRuR::synapse0x3756230() {
   return (neuron0x3737390()*-0.12416);
}

double NNfunction_sb_uRuR::synapse0x3755ab0() {
   return (neuron0x37376d0()*0.276716);
}

double NNfunction_sb_uRuR::synapse0x3755af0() {
   return (neuron0x3737c30()*-0.331629);
}

double NNfunction_sb_uRuR::synapse0x3756380() {
   return (neuron0x3737e50()*0.0476629);
}

double NNfunction_sb_uRuR::synapse0x37563c0() {
   return (neuron0x3738190()*0.0189486);
}

double NNfunction_sb_uRuR::synapse0x3756400() {
   return (neuron0x37384d0()*0.0878547);
}

double NNfunction_sb_uRuR::synapse0x3756440() {
   return (neuron0x3738810()*-0.210584);
}

double NNfunction_sb_uRuR::synapse0x3756480() {
   return (neuron0x3738b50()*0.397158);
}

double NNfunction_sb_uRuR::synapse0x37564c0() {
   return (neuron0x3738e90()*-0.272867);
}

double NNfunction_sb_uRuR::synapse0x3756840() {
   return (neuron0x3734360()*-0.142817);
}

double NNfunction_sb_uRuR::synapse0x3756880() {
   return (neuron0x3734610()*0.304196);
}

double NNfunction_sb_uRuR::synapse0x37568c0() {
   return (neuron0x3734950()*0.126565);
}

double NNfunction_sb_uRuR::synapse0x3756900() {
   return (neuron0x3734c90()*-0.458094);
}

double NNfunction_sb_uRuR::synapse0x3756940() {
   return (neuron0x3734fd0()*-0.330789);
}

double NNfunction_sb_uRuR::synapse0x3756980() {
   return (neuron0x3735310()*0.357687);
}

double NNfunction_sb_uRuR::synapse0x37569c0() {
   return (neuron0x3735650()*-0.163005);
}

double NNfunction_sb_uRuR::synapse0x3756a00() {
   return (neuron0x3735990()*0.0946921);
}

double NNfunction_sb_uRuR::synapse0x3756a40() {
   return (neuron0x3735cd0()*-0.165432);
}

double NNfunction_sb_uRuR::synapse0x3756a80() {
   return (neuron0x3736010()*0.888603);
}

double NNfunction_sb_uRuR::synapse0x3756ac0() {
   return (neuron0x3736350()*0.0270157);
}

double NNfunction_sb_uRuR::synapse0x3756b00() {
   return (neuron0x3736690()*-0.186045);
}

double NNfunction_sb_uRuR::synapse0x3756b40() {
   return (neuron0x37369d0()*-0.203097);
}

double NNfunction_sb_uRuR::synapse0x3756b80() {
   return (neuron0x3736d10()*0.701817);
}

double NNfunction_sb_uRuR::synapse0x3756bc0() {
   return (neuron0x3737050()*-0.186961);
}

double NNfunction_sb_uRuR::synapse0x3756c00() {
   return (neuron0x3737390()*0.216529);
}

double NNfunction_sb_uRuR::synapse0x3756690() {
   return (neuron0x37376d0()*-0.170966);
}

double NNfunction_sb_uRuR::synapse0x37566d0() {
   return (neuron0x3737c30()*-0.205793);
}

double NNfunction_sb_uRuR::synapse0x3756d50() {
   return (neuron0x3737e50()*-0.140622);
}

double NNfunction_sb_uRuR::synapse0x3756d90() {
   return (neuron0x3738190()*0.126484);
}

double NNfunction_sb_uRuR::synapse0x3756dd0() {
   return (neuron0x37384d0()*0.108831);
}

double NNfunction_sb_uRuR::synapse0x3756e10() {
   return (neuron0x3738810()*-0.105579);
}

double NNfunction_sb_uRuR::synapse0x3756e50() {
   return (neuron0x3738b50()*-0.050797);
}

double NNfunction_sb_uRuR::synapse0x3756e90() {
   return (neuron0x3738e90()*0.144531);
}

double NNfunction_sb_uRuR::synapse0x3757210() {
   return (neuron0x3734360()*-0.861846);
}

double NNfunction_sb_uRuR::synapse0x3757250() {
   return (neuron0x3734610()*0.136221);
}

double NNfunction_sb_uRuR::synapse0x3757290() {
   return (neuron0x3734950()*0.231419);
}

double NNfunction_sb_uRuR::synapse0x37572d0() {
   return (neuron0x3734c90()*1.83145);
}

double NNfunction_sb_uRuR::synapse0x3757310() {
   return (neuron0x3734fd0()*0.400938);
}

double NNfunction_sb_uRuR::synapse0x3757350() {
   return (neuron0x3735310()*0.813986);
}

double NNfunction_sb_uRuR::synapse0x3757390() {
   return (neuron0x3735650()*0.180926);
}

double NNfunction_sb_uRuR::synapse0x37573d0() {
   return (neuron0x3735990()*-0.738929);
}

double NNfunction_sb_uRuR::synapse0x3757410() {
   return (neuron0x3735cd0()*0.108796);
}

double NNfunction_sb_uRuR::synapse0x3757450() {
   return (neuron0x3736010()*-0.617496);
}

double NNfunction_sb_uRuR::synapse0x3757490() {
   return (neuron0x3736350()*0.149123);
}

double NNfunction_sb_uRuR::synapse0x37574d0() {
   return (neuron0x3736690()*-0.135952);
}

double NNfunction_sb_uRuR::synapse0x3757510() {
   return (neuron0x37369d0()*-0.819184);
}

double NNfunction_sb_uRuR::synapse0x3757550() {
   return (neuron0x3736d10()*-0.43809);
}

double NNfunction_sb_uRuR::synapse0x3757590() {
   return (neuron0x3737050()*0.156087);
}

double NNfunction_sb_uRuR::synapse0x37575d0() {
   return (neuron0x3737390()*-0.795917);
}

double NNfunction_sb_uRuR::synapse0x3757060() {
   return (neuron0x37376d0()*-0.754944);
}

double NNfunction_sb_uRuR::synapse0x37570a0() {
   return (neuron0x3737c30()*-0.121522);
}

double NNfunction_sb_uRuR::synapse0x3747bd0() {
   return (neuron0x3737e50()*-0.568282);
}

double NNfunction_sb_uRuR::synapse0x3747c10() {
   return (neuron0x3738190()*-0.33127);
}

double NNfunction_sb_uRuR::synapse0x3747c50() {
   return (neuron0x37384d0()*0.367437);
}

double NNfunction_sb_uRuR::synapse0x3747c90() {
   return (neuron0x3738810()*0.167475);
}

double NNfunction_sb_uRuR::synapse0x3747cd0() {
   return (neuron0x3738b50()*0.00387909);
}

double NNfunction_sb_uRuR::synapse0x3747d10() {
   return (neuron0x3738e90()*-0.0584465);
}

double NNfunction_sb_uRuR::synapse0x3748090() {
   return (neuron0x3734360()*0.0181064);
}

double NNfunction_sb_uRuR::synapse0x37480d0() {
   return (neuron0x3734610()*0.0206474);
}

double NNfunction_sb_uRuR::synapse0x3748110() {
   return (neuron0x3734950()*-0.00317116);
}

double NNfunction_sb_uRuR::synapse0x3748150() {
   return (neuron0x3734c90()*-0.0514099);
}

double NNfunction_sb_uRuR::synapse0x3748190() {
   return (neuron0x3734fd0()*0.000374963);
}

double NNfunction_sb_uRuR::synapse0x37481d0() {
   return (neuron0x3735310()*-0.0369757);
}

double NNfunction_sb_uRuR::synapse0x3748210() {
   return (neuron0x3735650()*-0.0722311);
}

double NNfunction_sb_uRuR::synapse0x3748250() {
   return (neuron0x3735990()*0.00456723);
}

double NNfunction_sb_uRuR::synapse0x3748290() {
   return (neuron0x3735cd0()*0.00466426);
}

double NNfunction_sb_uRuR::synapse0x37482d0() {
   return (neuron0x3736010()*0.0201325);
}

double NNfunction_sb_uRuR::synapse0x3748310() {
   return (neuron0x3736350()*0.0187434);
}

double NNfunction_sb_uRuR::synapse0x3748350() {
   return (neuron0x3736690()*0.0310019);
}

double NNfunction_sb_uRuR::synapse0x3748390() {
   return (neuron0x37369d0()*0.00712355);
}

double NNfunction_sb_uRuR::synapse0x37483d0() {
   return (neuron0x3736d10()*0.0135639);
}

double NNfunction_sb_uRuR::synapse0x3748410() {
   return (neuron0x3737050()*2.4186);
}

double NNfunction_sb_uRuR::synapse0x3748450() {
   return (neuron0x3737390()*0.0706949);
}

double NNfunction_sb_uRuR::synapse0x3747ee0() {
   return (neuron0x37376d0()*0.00152849);
}

double NNfunction_sb_uRuR::synapse0x3747f20() {
   return (neuron0x3737c30()*0.0293398);
}

double NNfunction_sb_uRuR::synapse0x37485a0() {
   return (neuron0x3737e50()*0.0166771);
}

double NNfunction_sb_uRuR::synapse0x37485e0() {
   return (neuron0x3738190()*-0.0105888);
}

double NNfunction_sb_uRuR::synapse0x3748620() {
   return (neuron0x37384d0()*0.00218307);
}

double NNfunction_sb_uRuR::synapse0x3748660() {
   return (neuron0x3738810()*0.0108556);
}

double NNfunction_sb_uRuR::synapse0x37486a0() {
   return (neuron0x3738b50()*-0.00887478);
}

double NNfunction_sb_uRuR::synapse0x37486e0() {
   return (neuron0x3738e90()*-0.0109497);
}

double NNfunction_sb_uRuR::synapse0x3748a60() {
   return (neuron0x3734360()*0.0272459);
}

double NNfunction_sb_uRuR::synapse0x3748aa0() {
   return (neuron0x3734610()*0.338606);
}

double NNfunction_sb_uRuR::synapse0x3748ae0() {
   return (neuron0x3734950()*0.0105768);
}

double NNfunction_sb_uRuR::synapse0x3748b20() {
   return (neuron0x3734c90()*-0.23548);
}

double NNfunction_sb_uRuR::synapse0x3748b60() {
   return (neuron0x3734fd0()*0.0321395);
}

double NNfunction_sb_uRuR::synapse0x3748ba0() {
   return (neuron0x3735310()*0.0341338);
}

double NNfunction_sb_uRuR::synapse0x3748be0() {
   return (neuron0x3735650()*-0.0147376);
}

double NNfunction_sb_uRuR::synapse0x3748c20() {
   return (neuron0x3735990()*-0.0132256);
}

double NNfunction_sb_uRuR::synapse0x3748c60() {
   return (neuron0x3735cd0()*0.325);
}

double NNfunction_sb_uRuR::synapse0x3748ca0() {
   return (neuron0x3736010()*-0.0479935);
}

double NNfunction_sb_uRuR::synapse0x3748ce0() {
   return (neuron0x3736350()*0.461908);
}

double NNfunction_sb_uRuR::synapse0x3748d20() {
   return (neuron0x3736690()*-0.0560824);
}

double NNfunction_sb_uRuR::synapse0x3748d60() {
   return (neuron0x37369d0()*-0.136705);
}

double NNfunction_sb_uRuR::synapse0x3748da0() {
   return (neuron0x3736d10()*0.0200101);
}

double NNfunction_sb_uRuR::synapse0x3748de0() {
   return (neuron0x3737050()*-0.271676);
}

double NNfunction_sb_uRuR::synapse0x3748e20() {
   return (neuron0x3737390()*0.0725121);
}

double NNfunction_sb_uRuR::synapse0x37488b0() {
   return (neuron0x37376d0()*0.0372039);
}

double NNfunction_sb_uRuR::synapse0x37488f0() {
   return (neuron0x3737c30()*0.346877);
}

double NNfunction_sb_uRuR::synapse0x3748f70() {
   return (neuron0x3737e50()*-0.132974);
}

double NNfunction_sb_uRuR::synapse0x3748fb0() {
   return (neuron0x3738190()*0.0386008);
}

double NNfunction_sb_uRuR::synapse0x3748ff0() {
   return (neuron0x37384d0()*-0.0146266);
}

double NNfunction_sb_uRuR::synapse0x3749030() {
   return (neuron0x3738810()*-0.00652982);
}

double NNfunction_sb_uRuR::synapse0x3749070() {
   return (neuron0x3738b50()*-0.0405398);
}

double NNfunction_sb_uRuR::synapse0x37490b0() {
   return (neuron0x3738e90()*-0.0255236);
}

double NNfunction_sb_uRuR::synapse0x3749430() {
   return (neuron0x3734360()*-0.560688);
}

double NNfunction_sb_uRuR::synapse0x3749470() {
   return (neuron0x3734610()*0.180125);
}

double NNfunction_sb_uRuR::synapse0x37494b0() {
   return (neuron0x3734950()*-0.7157);
}

double NNfunction_sb_uRuR::synapse0x37494f0() {
   return (neuron0x3734c90()*0.915373);
}

double NNfunction_sb_uRuR::synapse0x3749530() {
   return (neuron0x3734fd0()*1.24518);
}

double NNfunction_sb_uRuR::synapse0x3749570() {
   return (neuron0x3735310()*-0.35014);
}

double NNfunction_sb_uRuR::synapse0x37495b0() {
   return (neuron0x3735650()*-0.780485);
}

double NNfunction_sb_uRuR::synapse0x37495f0() {
   return (neuron0x3735990()*-0.934752);
}

double NNfunction_sb_uRuR::synapse0x3749630() {
   return (neuron0x3735cd0()*0.493184);
}

double NNfunction_sb_uRuR::synapse0x3749670() {
   return (neuron0x3736010()*0.304308);
}

double NNfunction_sb_uRuR::synapse0x37496b0() {
   return (neuron0x3736350()*-0.162507);
}

double NNfunction_sb_uRuR::synapse0x37496f0() {
   return (neuron0x3736690()*-0.135912);
}

double NNfunction_sb_uRuR::synapse0x3749730() {
   return (neuron0x37369d0()*0.0763359);
}

double NNfunction_sb_uRuR::synapse0x3749770() {
   return (neuron0x3736d10()*-0.15144);
}

double NNfunction_sb_uRuR::synapse0x37497b0() {
   return (neuron0x3737050()*0.792854);
}

double NNfunction_sb_uRuR::synapse0x37497f0() {
   return (neuron0x3737390()*1.08068);
}

double NNfunction_sb_uRuR::synapse0x3749280() {
   return (neuron0x37376d0()*-0.657684);
}

double NNfunction_sb_uRuR::synapse0x37492c0() {
   return (neuron0x3737c30()*0.133138);
}

double NNfunction_sb_uRuR::synapse0x3749940() {
   return (neuron0x3737e50()*0.100612);
}

double NNfunction_sb_uRuR::synapse0x3749980() {
   return (neuron0x3738190()*-0.0851253);
}

double NNfunction_sb_uRuR::synapse0x37499c0() {
   return (neuron0x37384d0()*-0.251211);
}

double NNfunction_sb_uRuR::synapse0x3749a00() {
   return (neuron0x3738810()*-0.376897);
}

double NNfunction_sb_uRuR::synapse0x3749a40() {
   return (neuron0x3738b50()*-0.305936);
}

double NNfunction_sb_uRuR::synapse0x3749a80() {
   return (neuron0x3738e90()*-0.314467);
}

double NNfunction_sb_uRuR::synapse0x375b950() {
   return (neuron0x3734360()*0.698262);
}

double NNfunction_sb_uRuR::synapse0x375b990() {
   return (neuron0x3734610()*0.0528976);
}

double NNfunction_sb_uRuR::synapse0x375b9d0() {
   return (neuron0x3734950()*-0.406634);
}

double NNfunction_sb_uRuR::synapse0x375ba10() {
   return (neuron0x3734c90()*-0.818537);
}

double NNfunction_sb_uRuR::synapse0x375ba50() {
   return (neuron0x3734fd0()*0.495853);
}

double NNfunction_sb_uRuR::synapse0x375ba90() {
   return (neuron0x3735310()*-0.268548);
}

double NNfunction_sb_uRuR::synapse0x375bad0() {
   return (neuron0x3735650()*-0.316745);
}

double NNfunction_sb_uRuR::synapse0x375bb10() {
   return (neuron0x3735990()*0.405619);
}

double NNfunction_sb_uRuR::synapse0x375bb50() {
   return (neuron0x3735cd0()*0.120886);
}

double NNfunction_sb_uRuR::synapse0x375bb90() {
   return (neuron0x3736010()*-0.121662);
}

double NNfunction_sb_uRuR::synapse0x375bbd0() {
   return (neuron0x3736350()*-0.0420663);
}

double NNfunction_sb_uRuR::synapse0x375bc10() {
   return (neuron0x3736690()*-0.151379);
}

double NNfunction_sb_uRuR::synapse0x375bc50() {
   return (neuron0x37369d0()*-0.219655);
}

double NNfunction_sb_uRuR::synapse0x375bc90() {
   return (neuron0x3736d10()*-0.623211);
}

double NNfunction_sb_uRuR::synapse0x375bcd0() {
   return (neuron0x3737050()*1.2122);
}

double NNfunction_sb_uRuR::synapse0x375bd10() {
   return (neuron0x3737390()*-0.564941);
}

double NNfunction_sb_uRuR::synapse0x3749ac0() {
   return (neuron0x37376d0()*0.181604);
}

double NNfunction_sb_uRuR::synapse0x3749b00() {
   return (neuron0x3737c30()*-0.0568717);
}

double NNfunction_sb_uRuR::synapse0x375be60() {
   return (neuron0x3737e50()*-0.13795);
}

double NNfunction_sb_uRuR::synapse0x375bea0() {
   return (neuron0x3738190()*0.36848);
}

double NNfunction_sb_uRuR::synapse0x375bee0() {
   return (neuron0x37384d0()*-0.286131);
}

double NNfunction_sb_uRuR::synapse0x375bf20() {
   return (neuron0x3738810()*-0.0532861);
}

double NNfunction_sb_uRuR::synapse0x375bf60() {
   return (neuron0x3738b50()*-0.0720178);
}

double NNfunction_sb_uRuR::synapse0x375bfa0() {
   return (neuron0x3738e90()*-0.280019);
}

double NNfunction_sb_uRuR::synapse0x375c320() {
   return (neuron0x3734360()*-0.0661691);
}

double NNfunction_sb_uRuR::synapse0x375c360() {
   return (neuron0x3734610()*-0.0563205);
}

double NNfunction_sb_uRuR::synapse0x375c3a0() {
   return (neuron0x3734950()*-0.015119);
}

double NNfunction_sb_uRuR::synapse0x375c3e0() {
   return (neuron0x3734c90()*-0.134497);
}

double NNfunction_sb_uRuR::synapse0x375c420() {
   return (neuron0x3734fd0()*0.396476);
}

double NNfunction_sb_uRuR::synapse0x375c460() {
   return (neuron0x3735310()*0.00875206);
}

double NNfunction_sb_uRuR::synapse0x375c4a0() {
   return (neuron0x3735650()*-0.239136);
}

double NNfunction_sb_uRuR::synapse0x375c4e0() {
   return (neuron0x3735990()*-0.142837);
}

double NNfunction_sb_uRuR::synapse0x375c520() {
   return (neuron0x3735cd0()*0.0451154);
}

double NNfunction_sb_uRuR::synapse0x375c560() {
   return (neuron0x3736010()*-0.0510761);
}

double NNfunction_sb_uRuR::synapse0x375c5a0() {
   return (neuron0x3736350()*-0.0332306);
}

double NNfunction_sb_uRuR::synapse0x375c5e0() {
   return (neuron0x3736690()*-0.0384654);
}

double NNfunction_sb_uRuR::synapse0x375c620() {
   return (neuron0x37369d0()*0.0635836);
}

double NNfunction_sb_uRuR::synapse0x375c660() {
   return (neuron0x3736d10()*-0.078951);
}

double NNfunction_sb_uRuR::synapse0x375c6a0() {
   return (neuron0x3737050()*0.658821);
}

double NNfunction_sb_uRuR::synapse0x375c6e0() {
   return (neuron0x3737390()*-0.302718);
}

double NNfunction_sb_uRuR::synapse0x375c170() {
   return (neuron0x37376d0()*0.184926);
}

double NNfunction_sb_uRuR::synapse0x375c1b0() {
   return (neuron0x3737c30()*0.0253476);
}

double NNfunction_sb_uRuR::synapse0x375c830() {
   return (neuron0x3737e50()*0.0191786);
}

double NNfunction_sb_uRuR::synapse0x375c870() {
   return (neuron0x3738190()*-0.0798544);
}

double NNfunction_sb_uRuR::synapse0x375c8b0() {
   return (neuron0x37384d0()*-0.0529212);
}

double NNfunction_sb_uRuR::synapse0x375c8f0() {
   return (neuron0x3738810()*-0.0076429);
}

double NNfunction_sb_uRuR::synapse0x375c930() {
   return (neuron0x3738b50()*-0.011837);
}

double NNfunction_sb_uRuR::synapse0x375c970() {
   return (neuron0x3738e90()*0.058764);
}

double NNfunction_sb_uRuR::synapse0x375ccf0() {
   return (neuron0x3734360()*0.154674);
}

double NNfunction_sb_uRuR::synapse0x375cd30() {
   return (neuron0x3734610()*-0.128051);
}

double NNfunction_sb_uRuR::synapse0x375cd70() {
   return (neuron0x3734950()*-0.247017);
}

double NNfunction_sb_uRuR::synapse0x375cdb0() {
   return (neuron0x3734c90()*0.932177);
}

double NNfunction_sb_uRuR::synapse0x375cdf0() {
   return (neuron0x3734fd0()*-0.305786);
}

double NNfunction_sb_uRuR::synapse0x375ce30() {
   return (neuron0x3735310()*0.0444173);
}

double NNfunction_sb_uRuR::synapse0x375ce70() {
   return (neuron0x3735650()*-0.311798);
}

double NNfunction_sb_uRuR::synapse0x375ceb0() {
   return (neuron0x3735990()*0.771383);
}

double NNfunction_sb_uRuR::synapse0x375cef0() {
   return (neuron0x3735cd0()*-0.0794209);
}

double NNfunction_sb_uRuR::synapse0x375cf30() {
   return (neuron0x3736010()*0.107388);
}

double NNfunction_sb_uRuR::synapse0x375cf70() {
   return (neuron0x3736350()*0.16686);
}

double NNfunction_sb_uRuR::synapse0x375cfb0() {
   return (neuron0x3736690()*0.14792);
}

double NNfunction_sb_uRuR::synapse0x375cff0() {
   return (neuron0x37369d0()*0.239567);
}

double NNfunction_sb_uRuR::synapse0x375d030() {
   return (neuron0x3736d10()*0.111841);
}

double NNfunction_sb_uRuR::synapse0x375d070() {
   return (neuron0x3737050()*-0.221789);
}

double NNfunction_sb_uRuR::synapse0x375d0b0() {
   return (neuron0x3737390()*0.0424162);
}

double NNfunction_sb_uRuR::synapse0x375cb40() {
   return (neuron0x37376d0()*0.373258);
}

double NNfunction_sb_uRuR::synapse0x375cb80() {
   return (neuron0x3737c30()*0.163984);
}

double NNfunction_sb_uRuR::synapse0x375d200() {
   return (neuron0x3737e50()*-0.103895);
}

double NNfunction_sb_uRuR::synapse0x375d240() {
   return (neuron0x3738190()*0.202092);
}

double NNfunction_sb_uRuR::synapse0x375d280() {
   return (neuron0x37384d0()*-0.214633);
}

double NNfunction_sb_uRuR::synapse0x375d2c0() {
   return (neuron0x3738810()*-0.136632);
}

double NNfunction_sb_uRuR::synapse0x375d300() {
   return (neuron0x3738b50()*-0.0668143);
}

double NNfunction_sb_uRuR::synapse0x375d340() {
   return (neuron0x3738e90()*0.0921274);
}

double NNfunction_sb_uRuR::synapse0x375d6c0() {
   return (neuron0x3734360()*-0.0179743);
}

double NNfunction_sb_uRuR::synapse0x375d700() {
   return (neuron0x3734610()*-0.0182095);
}

double NNfunction_sb_uRuR::synapse0x375d740() {
   return (neuron0x3734950()*-0.0323794);
}

double NNfunction_sb_uRuR::synapse0x375d780() {
   return (neuron0x3734c90()*-0.348518);
}

double NNfunction_sb_uRuR::synapse0x375d7c0() {
   return (neuron0x3734fd0()*0.0617449);
}

double NNfunction_sb_uRuR::synapse0x375d800() {
   return (neuron0x3735310()*0.0804912);
}

double NNfunction_sb_uRuR::synapse0x375d840() {
   return (neuron0x3735650()*0.0276474);
}

double NNfunction_sb_uRuR::synapse0x375d880() {
   return (neuron0x3735990()*0.0222615);
}

double NNfunction_sb_uRuR::synapse0x375d8c0() {
   return (neuron0x3735cd0()*-0.107016);
}

double NNfunction_sb_uRuR::synapse0x375d900() {
   return (neuron0x3736010()*0.120884);
}

double NNfunction_sb_uRuR::synapse0x375d940() {
   return (neuron0x3736350()*-0.126737);
}

double NNfunction_sb_uRuR::synapse0x375d980() {
   return (neuron0x3736690()*-0.116544);
}

double NNfunction_sb_uRuR::synapse0x375d9c0() {
   return (neuron0x37369d0()*1.02364);
}

double NNfunction_sb_uRuR::synapse0x375da00() {
   return (neuron0x3736d10()*-0.0624851);
}

double NNfunction_sb_uRuR::synapse0x375da40() {
   return (neuron0x3737050()*-0.0549884);
}

double NNfunction_sb_uRuR::synapse0x375da80() {
   return (neuron0x3737390()*0.0850401);
}

double NNfunction_sb_uRuR::synapse0x375d510() {
   return (neuron0x37376d0()*0.0475275);
}

double NNfunction_sb_uRuR::synapse0x375d550() {
   return (neuron0x3737c30()*0.425515);
}

double NNfunction_sb_uRuR::synapse0x375dbd0() {
   return (neuron0x3737e50()*-0.0622483);
}

double NNfunction_sb_uRuR::synapse0x375dc10() {
   return (neuron0x3738190()*-0.126557);
}

double NNfunction_sb_uRuR::synapse0x375dc50() {
   return (neuron0x37384d0()*-0.180938);
}

double NNfunction_sb_uRuR::synapse0x375dc90() {
   return (neuron0x3738810()*-0.05082);
}

double NNfunction_sb_uRuR::synapse0x375dcd0() {
   return (neuron0x3738b50()*0.107005);
}

double NNfunction_sb_uRuR::synapse0x375dd10() {
   return (neuron0x3738e90()*0.00284558);
}

double NNfunction_sb_uRuR::synapse0x34fdb20() {
   return (neuron0x3739300()*0.651161);
}

double NNfunction_sb_uRuR::synapse0x34fdb60() {
   return (neuron0x3739c50()*0.0343498);
}

double NNfunction_sb_uRuR::synapse0x373b7c0() {
   return (neuron0x373a730()*-0.0481604);
}

double NNfunction_sb_uRuR::synapse0x373b800() {
   return (neuron0x373a1d0()*-0.0440749);
}

double NNfunction_sb_uRuR::synapse0x373c190() {
   return (neuron0x373b510()*-0.0218214);
}

double NNfunction_sb_uRuR::synapse0x373c1d0() {
   return (neuron0x373bee0()*0.0106941);
}

double NNfunction_sb_uRuR::synapse0x373cf60() {
   return (neuron0x373ccb0()*-0.00215656);
}

double NNfunction_sb_uRuR::synapse0x373cfa0() {
   return (neuron0x373d680()*0.000294043);
}

double NNfunction_sb_uRuR::synapse0x373d930() {
   return (neuron0x373e050()*0.735866);
}

double NNfunction_sb_uRuR::synapse0x373d970() {
   return (neuron0x373eb30()*-1.38583);
}

double NNfunction_sb_uRuR::synapse0x373e300() {
   return (neuron0x373f500()*0.333153);
}

double NNfunction_sb_uRuR::synapse0x373e340() {
   return (neuron0x373c5e0()*-0.927518);
}

double NNfunction_sb_uRuR::synapse0x373ede0() {
   return (neuron0x37410b0()*0.595253);
}

double NNfunction_sb_uRuR::synapse0x373ee20() {
   return (neuron0x3741a80()*-0.0405447);
}

double NNfunction_sb_uRuR::synapse0x373f7b0() {
   return (neuron0x3742450()*-0.973059);
}

double NNfunction_sb_uRuR::synapse0x373f7f0() {
   return (neuron0x3742e20()*-0.015377);
}

double NNfunction_sb_uRuR::synapse0x373c890() {
   return (neuron0x3744c30()*-0.0536067);
}

double NNfunction_sb_uRuR::synapse0x373c8d0() {
   return (neuron0x3744f10()*0.0647559);
}

double NNfunction_sb_uRuR::synapse0x3741360() {
   return (neuron0x37458e0()*0.0242001);
}

double NNfunction_sb_uRuR::synapse0x37413a0() {
   return (neuron0x37462b0()*-0.0230652);
}

double NNfunction_sb_uRuR::synapse0x3741d30() {
   return (neuron0x3746c80()*0.000543161);
}

double NNfunction_sb_uRuR::synapse0x3741d70() {
   return (neuron0x3747650()*0.106589);
}

double NNfunction_sb_uRuR::synapse0x3742700() {
   return (neuron0x37401a0()*0.0439336);
}

double NNfunction_sb_uRuR::synapse0x3742740() {
   return (neuron0x3740b70()*0.0111058);
}

double NNfunction_sb_uRuR::synapse0x37430d0() {
   return (neuron0x374a3e0()*-0.0270393);
}

double NNfunction_sb_uRuR::synapse0x3743110() {
   return (neuron0x374adb0()*0.0348587);
}

double NNfunction_sb_uRuR::synapse0x3737270() {
   return (neuron0x374b780()*-0.251987);
}

double NNfunction_sb_uRuR::synapse0x37372b0() {
   return (neuron0x374c150()*0.00596776);
}

double NNfunction_sb_uRuR::synapse0x37451c0() {
   return (neuron0x374cb20()*0.0212861);
}

double NNfunction_sb_uRuR::synapse0x3745200() {
   return (neuron0x374d4f0()*-0.164015);
}

double NNfunction_sb_uRuR::synapse0x3745b90() {
   return (neuron0x374dec0()*-0.0153193);
}

double NNfunction_sb_uRuR::synapse0x3745bd0() {
   return (neuron0x374e890()*-0.066688);
}

double NNfunction_sb_uRuR::synapse0x3746560() {
   return (neuron0x3744920()*0.173187);
}

double NNfunction_sb_uRuR::synapse0x37465a0() {
   return (neuron0x3751470()*0.102828);
}

double NNfunction_sb_uRuR::synapse0x3746f30() {
   return (neuron0x3751e40()*-0.7266);
}

double NNfunction_sb_uRuR::synapse0x3746f70() {
   return (neuron0x3752810()*-0.0197971);
}

double NNfunction_sb_uRuR::synapse0x3747900() {
   return (neuron0x37531e0()*0.526119);
}

double NNfunction_sb_uRuR::synapse0x3747940() {
   return (neuron0x3753bb0()*-0.0687011);
}

double NNfunction_sb_uRuR::synapse0x3740450() {
   return (neuron0x3754580()*-0.0280123);
}

double NNfunction_sb_uRuR::synapse0x3740490() {
   return (neuron0x3754f50()*0.00328671);
}

double NNfunction_sb_uRuR::synapse0x3749d00() {
   return (neuron0x3755920()*-0.0467929);
}

double NNfunction_sb_uRuR::synapse0x3749d40() {
   return (neuron0x3756500()*-0.0172775);
}

double NNfunction_sb_uRuR::synapse0x374a690() {
   return (neuron0x3756ed0()*-0.0135116);
}

double NNfunction_sb_uRuR::synapse0x374a6d0() {
   return (neuron0x3747d50()*1.00556);
}

double NNfunction_sb_uRuR::synapse0x374b060() {
   return (neuron0x3748720()*0.00949977);
}

double NNfunction_sb_uRuR::synapse0x374b0a0() {
   return (neuron0x37490f0()*-0.00604085);
}

double NNfunction_sb_uRuR::synapse0x374ba30() {
   return (neuron0x375b730()*-0.0122223);
}

double NNfunction_sb_uRuR::synapse0x374ba70() {
   return (neuron0x375bfe0()*0.131649);
}

double NNfunction_sb_uRuR::synapse0x374c400() {
   return (neuron0x375c9b0()*-0.0318938);
}

double NNfunction_sb_uRuR::synapse0x374c440() {
   return (neuron0x375d380()*-0.00568732);
}

double NNfunction_sb_uRuR::synapse0x374eb40() {
   return (neuron0x3739300()*-3.49867);
}

double NNfunction_sb_uRuR::synapse0x374eb80() {
   return (neuron0x3739c50()*-1.63693);
}

double NNfunction_sb_uRuR::synapse0x3744100() {
   return (neuron0x373a730()*-0.995794);
}

double NNfunction_sb_uRuR::synapse0x3744140() {
   return (neuron0x373a1d0()*-0.874069);
}

double NNfunction_sb_uRuR::synapse0x3751720() {
   return (neuron0x373b510()*3.45348);
}

double NNfunction_sb_uRuR::synapse0x3751760() {
   return (neuron0x373bee0()*0.777865);
}

double NNfunction_sb_uRuR::synapse0x37520f0() {
   return (neuron0x373ccb0()*-1.47638);
}

double NNfunction_sb_uRuR::synapse0x3752130() {
   return (neuron0x373d680()*1.87268);
}

double NNfunction_sb_uRuR::synapse0x3752ac0() {
   return (neuron0x373e050()*0.213147);
}

double NNfunction_sb_uRuR::synapse0x3752b00() {
   return (neuron0x373eb30()*1.48864);
}

double NNfunction_sb_uRuR::synapse0x3753490() {
   return (neuron0x373f500()*-3.73146);
}

double NNfunction_sb_uRuR::synapse0x37534d0() {
   return (neuron0x373c5e0()*-3.58557);
}

double NNfunction_sb_uRuR::synapse0x3753e60() {
   return (neuron0x37410b0()*-0.137104);
}

double NNfunction_sb_uRuR::synapse0x3753ea0() {
   return (neuron0x3741a80()*-2.1939);
}

double NNfunction_sb_uRuR::synapse0x3754830() {
   return (neuron0x3742450()*2.59189);
}

double NNfunction_sb_uRuR::synapse0x3754870() {
   return (neuron0x3742e20()*-1.28098);
}

double NNfunction_sb_uRuR::synapse0x3755200() {
   return (neuron0x3744c30()*2.35877);
}

double NNfunction_sb_uRuR::synapse0x3755240() {
   return (neuron0x3744f10()*2.09405);
}

double NNfunction_sb_uRuR::synapse0x3755bd0() {
   return (neuron0x37458e0()*1.54365);
}

double NNfunction_sb_uRuR::synapse0x3755c10() {
   return (neuron0x37462b0()*-0.746506);
}

double NNfunction_sb_uRuR::synapse0x37567b0() {
   return (neuron0x3746c80()*-1.70913);
}

double NNfunction_sb_uRuR::synapse0x37567f0() {
   return (neuron0x3747650()*-3.47002);
}

double NNfunction_sb_uRuR::synapse0x3757180() {
   return (neuron0x37401a0()*1.91217);
}

double NNfunction_sb_uRuR::synapse0x37571c0() {
   return (neuron0x3740b70()*-0.174198);
}

double NNfunction_sb_uRuR::synapse0x3748000() {
   return (neuron0x374a3e0()*-1.29473);
}

double NNfunction_sb_uRuR::synapse0x3748040() {
   return (neuron0x374adb0()*-2.28175);
}

double NNfunction_sb_uRuR::synapse0x37489d0() {
   return (neuron0x374b780()*0.201167);
}

double NNfunction_sb_uRuR::synapse0x3748a10() {
   return (neuron0x374c150()*-2.19084);
}

double NNfunction_sb_uRuR::synapse0x37493a0() {
   return (neuron0x374cb20()*2.74346);
}

double NNfunction_sb_uRuR::synapse0x37493e0() {
   return (neuron0x374d4f0()*3.95457);
}

double NNfunction_sb_uRuR::synapse0x375b8c0() {
   return (neuron0x374dec0()*1.26534);
}

double NNfunction_sb_uRuR::synapse0x375b900() {
   return (neuron0x374e890()*-1.81599);
}

double NNfunction_sb_uRuR::synapse0x375c290() {
   return (neuron0x3744920()*-0.878656);
}

double NNfunction_sb_uRuR::synapse0x375c2d0() {
   return (neuron0x3751470()*3.30196);
}

double NNfunction_sb_uRuR::synapse0x375cc60() {
   return (neuron0x3751e40()*5.11133);
}

double NNfunction_sb_uRuR::synapse0x375cca0() {
   return (neuron0x3752810()*-1.53142);
}

double NNfunction_sb_uRuR::synapse0x375d630() {
   return (neuron0x37531e0()*-4.05909);
}

double NNfunction_sb_uRuR::synapse0x375d670() {
   return (neuron0x3753bb0()*1.93229);
}

double NNfunction_sb_uRuR::synapse0x3739520() {
   return (neuron0x3754580()*-1.07752);
}

double NNfunction_sb_uRuR::synapse0x3739560() {
   return (neuron0x3754f50()*-0.937224);
}

double NNfunction_sb_uRuR::synapse0x374cdd0() {
   return (neuron0x3755920()*-1.92559);
}

double NNfunction_sb_uRuR::synapse0x374ce10() {
   return (neuron0x3756500()*-1.76419);
}

double NNfunction_sb_uRuR::synapse0x375dd50() {
   return (neuron0x3756ed0()*-1.39927);
}

double NNfunction_sb_uRuR::synapse0x375dd90() {
   return (neuron0x3747d50()*-2.38868);
}

double NNfunction_sb_uRuR::synapse0x375ddd0() {
   return (neuron0x3748720()*-2.88665);
}

double NNfunction_sb_uRuR::synapse0x375de10() {
   return (neuron0x37490f0()*-1.13338);
}

double NNfunction_sb_uRuR::synapse0x3764cc0() {
   return (neuron0x375b730()*-2.3209);
}

double NNfunction_sb_uRuR::synapse0x3764d00() {
   return (neuron0x375bfe0()*-0.748301);
}

double NNfunction_sb_uRuR::synapse0x3764d40() {
   return (neuron0x375c9b0()*1.64674);
}

double NNfunction_sb_uRuR::synapse0x3764d80() {
   return (neuron0x375d380()*-1.83699);
}

double NNfunction_sb_uRuR::synapse0x3765100() {
   return (neuron0x3739300()*3.66454);
}

double NNfunction_sb_uRuR::synapse0x3765140() {
   return (neuron0x3739c50()*-0.0368308);
}

double NNfunction_sb_uRuR::synapse0x3765180() {
   return (neuron0x373a730()*0.117255);
}

double NNfunction_sb_uRuR::synapse0x37651c0() {
   return (neuron0x373a1d0()*2.05708);
}

double NNfunction_sb_uRuR::synapse0x3765200() {
   return (neuron0x373b510()*0.295445);
}

double NNfunction_sb_uRuR::synapse0x3765240() {
   return (neuron0x373bee0()*1.24067);
}

double NNfunction_sb_uRuR::synapse0x3765280() {
   return (neuron0x373ccb0()*-1.07108);
}

double NNfunction_sb_uRuR::synapse0x37652c0() {
   return (neuron0x373d680()*-0.447828);
}

double NNfunction_sb_uRuR::synapse0x3765300() {
   return (neuron0x373e050()*-3.35549);
}

double NNfunction_sb_uRuR::synapse0x3765340() {
   return (neuron0x373eb30()*-0.677953);
}

double NNfunction_sb_uRuR::synapse0x3765380() {
   return (neuron0x373f500()*-0.25899);
}

double NNfunction_sb_uRuR::synapse0x37653c0() {
   return (neuron0x373c5e0()*-0.21106);
}

double NNfunction_sb_uRuR::synapse0x3765400() {
   return (neuron0x37410b0()*-0.0643441);
}

double NNfunction_sb_uRuR::synapse0x3765440() {
   return (neuron0x3741a80()*1.38792);
}

double NNfunction_sb_uRuR::synapse0x3765480() {
   return (neuron0x3742450()*-1.93554);
}

double NNfunction_sb_uRuR::synapse0x37654c0() {
   return (neuron0x3742e20()*1.21619);
}

double NNfunction_sb_uRuR::synapse0x3764f50() {
   return (neuron0x3744c30()*-0.233836);
}

double NNfunction_sb_uRuR::synapse0x3764f90() {
   return (neuron0x3744f10()*-0.0551873);
}

double NNfunction_sb_uRuR::synapse0x3765610() {
   return (neuron0x37458e0()*-1.03332);
}

double NNfunction_sb_uRuR::synapse0x3765650() {
   return (neuron0x37462b0()*1.18506);
}

double NNfunction_sb_uRuR::synapse0x3765690() {
   return (neuron0x3746c80()*1.70331);
}

double NNfunction_sb_uRuR::synapse0x37656d0() {
   return (neuron0x3747650()*0.369521);
}

double NNfunction_sb_uRuR::synapse0x3765710() {
   return (neuron0x37401a0()*-0.0699543);
}

double NNfunction_sb_uRuR::synapse0x3765750() {
   return (neuron0x3740b70()*-2.13917);
}

double NNfunction_sb_uRuR::synapse0x3765790() {
   return (neuron0x374a3e0()*1.66768);
}

double NNfunction_sb_uRuR::synapse0x37657d0() {
   return (neuron0x374adb0()*2.06937);
}

double NNfunction_sb_uRuR::synapse0x3765810() {
   return (neuron0x374b780()*3.85112);
}

double NNfunction_sb_uRuR::synapse0x3765850() {
   return (neuron0x374c150()*0.204724);
}

double NNfunction_sb_uRuR::synapse0x3765890() {
   return (neuron0x374cb20()*0.334125);
}

double NNfunction_sb_uRuR::synapse0x37658d0() {
   return (neuron0x374d4f0()*-1.74944);
}

double NNfunction_sb_uRuR::synapse0x3765910() {
   return (neuron0x374dec0()*1.32735);
}

double NNfunction_sb_uRuR::synapse0x3765950() {
   return (neuron0x374e890()*1.85297);
}

double NNfunction_sb_uRuR::synapse0x3765500() {
   return (neuron0x3744920()*-1.08665);
}

double NNfunction_sb_uRuR::synapse0x3765540() {
   return (neuron0x3751470()*1.66756);
}

double NNfunction_sb_uRuR::synapse0x3765580() {
   return (neuron0x3751e40()*-0.124929);
}

double NNfunction_sb_uRuR::synapse0x37655c0() {
   return (neuron0x3752810()*0.943833);
}

double NNfunction_sb_uRuR::synapse0x3765ba0() {
   return (neuron0x37531e0()*0.275754);
}

double NNfunction_sb_uRuR::synapse0x3765be0() {
   return (neuron0x3753bb0()*-1.60236);
}

double NNfunction_sb_uRuR::synapse0x3765c20() {
   return (neuron0x3754580()*-0.147403);
}

double NNfunction_sb_uRuR::synapse0x3765c60() {
   return (neuron0x3754f50()*1.06689);
}

double NNfunction_sb_uRuR::synapse0x3765ca0() {
   return (neuron0x3755920()*-1.67418);
}

double NNfunction_sb_uRuR::synapse0x3765ce0() {
   return (neuron0x3756500()*-0.539592);
}

double NNfunction_sb_uRuR::synapse0x3765d20() {
   return (neuron0x3756ed0()*0.946157);
}

double NNfunction_sb_uRuR::synapse0x3765d60() {
   return (neuron0x3747d50()*1.79113);
}

double NNfunction_sb_uRuR::synapse0x3765da0() {
   return (neuron0x3748720()*-0.0138988);
}

double NNfunction_sb_uRuR::synapse0x3765de0() {
   return (neuron0x37490f0()*1.82489);
}

double NNfunction_sb_uRuR::synapse0x3765e20() {
   return (neuron0x375b730()*-0.491957);
}

double NNfunction_sb_uRuR::synapse0x3765e60() {
   return (neuron0x375bfe0()*0.46062);
}

double NNfunction_sb_uRuR::synapse0x3765ea0() {
   return (neuron0x375c9b0()*1.83849);
}

double NNfunction_sb_uRuR::synapse0x3765ee0() {
   return (neuron0x375d380()*-0.172292);
}

double NNfunction_sb_uRuR::synapse0x3766260() {
   return (neuron0x3739300()*0.488554);
}

double NNfunction_sb_uRuR::synapse0x37662a0() {
   return (neuron0x3739c50()*-0.0556073);
}

double NNfunction_sb_uRuR::synapse0x37662e0() {
   return (neuron0x373a730()*0.0417028);
}

double NNfunction_sb_uRuR::synapse0x3766320() {
   return (neuron0x373a1d0()*0.00888762);
}

double NNfunction_sb_uRuR::synapse0x3766360() {
   return (neuron0x373b510()*0.126673);
}

double NNfunction_sb_uRuR::synapse0x37663a0() {
   return (neuron0x373bee0()*-0.00719156);
}

double NNfunction_sb_uRuR::synapse0x37663e0() {
   return (neuron0x373ccb0()*0.00871236);
}

double NNfunction_sb_uRuR::synapse0x3766420() {
   return (neuron0x373d680()*0.0340796);
}

double NNfunction_sb_uRuR::synapse0x3766460() {
   return (neuron0x373e050()*-0.164524);
}

double NNfunction_sb_uRuR::synapse0x37664a0() {
   return (neuron0x373eb30()*-1.98028);
}

double NNfunction_sb_uRuR::synapse0x37664e0() {
   return (neuron0x373f500()*0.223787);
}

double NNfunction_sb_uRuR::synapse0x3766520() {
   return (neuron0x373c5e0()*1.2597);
}

double NNfunction_sb_uRuR::synapse0x3766560() {
   return (neuron0x37410b0()*0.416676);
}

double NNfunction_sb_uRuR::synapse0x37665a0() {
   return (neuron0x3741a80()*0.0504345);
}

double NNfunction_sb_uRuR::synapse0x37665e0() {
   return (neuron0x3742450()*-0.967076);
}

double NNfunction_sb_uRuR::synapse0x3766620() {
   return (neuron0x3742e20()*0.0194003);
}

double NNfunction_sb_uRuR::synapse0x37660b0() {
   return (neuron0x3744c30()*0.0660116);
}

double NNfunction_sb_uRuR::synapse0x37660f0() {
   return (neuron0x3744f10()*-0.0548192);
}

double NNfunction_sb_uRuR::synapse0x3766770() {
   return (neuron0x37458e0()*-0.0212425);
}

double NNfunction_sb_uRuR::synapse0x37667b0() {
   return (neuron0x37462b0()*0.0168051);
}

double NNfunction_sb_uRuR::synapse0x37667f0() {
   return (neuron0x3746c80()*-0.0149944);
}

double NNfunction_sb_uRuR::synapse0x3766830() {
   return (neuron0x3747650()*-0.094256);
}

double NNfunction_sb_uRuR::synapse0x3766870() {
   return (neuron0x37401a0()*-0.0187378);
}

double NNfunction_sb_uRuR::synapse0x37668b0() {
   return (neuron0x3740b70()*-0.0334504);
}

double NNfunction_sb_uRuR::synapse0x37668f0() {
   return (neuron0x374a3e0()*0.0406711);
}

double NNfunction_sb_uRuR::synapse0x3766930() {
   return (neuron0x374adb0()*-0.0453548);
}

double NNfunction_sb_uRuR::synapse0x3766970() {
   return (neuron0x374b780()*0.145515);
}

double NNfunction_sb_uRuR::synapse0x37669b0() {
   return (neuron0x374c150()*-0.0865855);
}

double NNfunction_sb_uRuR::synapse0x37669f0() {
   return (neuron0x374cb20()*0.01645);
}

double NNfunction_sb_uRuR::synapse0x3766a30() {
   return (neuron0x374d4f0()*0.193209);
}

double NNfunction_sb_uRuR::synapse0x3766a70() {
   return (neuron0x374dec0()*-0.00478511);
}

double NNfunction_sb_uRuR::synapse0x3766ab0() {
   return (neuron0x374e890()*-0.00221223);
}

double NNfunction_sb_uRuR::synapse0x3766660() {
   return (neuron0x3744920()*-0.274034);
}

double NNfunction_sb_uRuR::synapse0x37666a0() {
   return (neuron0x3751470()*-0.0561461);
}

double NNfunction_sb_uRuR::synapse0x37666e0() {
   return (neuron0x3751e40()*0.348409);
}

double NNfunction_sb_uRuR::synapse0x3766720() {
   return (neuron0x3752810()*-0.0109576);
}

double NNfunction_sb_uRuR::synapse0x3766d00() {
   return (neuron0x37531e0()*-0.44453);
}

double NNfunction_sb_uRuR::synapse0x3766d40() {
   return (neuron0x3753bb0()*0.0942915);
}

double NNfunction_sb_uRuR::synapse0x3766d80() {
   return (neuron0x3754580()*0.0286753);
}

double NNfunction_sb_uRuR::synapse0x3766dc0() {
   return (neuron0x3754f50()*-0.00514252);
}

double NNfunction_sb_uRuR::synapse0x3766e00() {
   return (neuron0x3755920()*0.0601366);
}

double NNfunction_sb_uRuR::synapse0x3766e40() {
   return (neuron0x3756500()*-0.00534423);
}

double NNfunction_sb_uRuR::synapse0x3766e80() {
   return (neuron0x3756ed0()*0.0352082);
}

double NNfunction_sb_uRuR::synapse0x3766ec0() {
   return (neuron0x3747d50()*1.09467);
}

double NNfunction_sb_uRuR::synapse0x3766f00() {
   return (neuron0x3748720()*-0.0778719);
}

double NNfunction_sb_uRuR::synapse0x3766f40() {
   return (neuron0x37490f0()*0.0011878);
}

double NNfunction_sb_uRuR::synapse0x3766f80() {
   return (neuron0x375b730()*-0.000517819);
}

double NNfunction_sb_uRuR::synapse0x3766fc0() {
   return (neuron0x375bfe0()*-0.0601889);
}

double NNfunction_sb_uRuR::synapse0x3767000() {
   return (neuron0x375c9b0()*0.00101634);
}

double NNfunction_sb_uRuR::synapse0x3767040() {
   return (neuron0x375d380()*0.018253);
}

double NNfunction_sb_uRuR::synapse0x37673c0() {
   return (neuron0x3739300()*-1.23644);
}

double NNfunction_sb_uRuR::synapse0x3767400() {
   return (neuron0x3739c50()*-0.874549);
}

double NNfunction_sb_uRuR::synapse0x3767440() {
   return (neuron0x373a730()*0.00501379);
}

double NNfunction_sb_uRuR::synapse0x3767480() {
   return (neuron0x373a1d0()*-1.15749);
}

double NNfunction_sb_uRuR::synapse0x37674c0() {
   return (neuron0x373b510()*1.23509);
}

double NNfunction_sb_uRuR::synapse0x3767500() {
   return (neuron0x373bee0()*-0.0196394);
}

double NNfunction_sb_uRuR::synapse0x3767540() {
   return (neuron0x373ccb0()*0.0677594);
}

double NNfunction_sb_uRuR::synapse0x3767580() {
   return (neuron0x373d680()*0.26411);
}

double NNfunction_sb_uRuR::synapse0x37675c0() {
   return (neuron0x373e050()*2.96667);
}

double NNfunction_sb_uRuR::synapse0x3767600() {
   return (neuron0x373eb30()*2.25384);
}

double NNfunction_sb_uRuR::synapse0x3767640() {
   return (neuron0x373f500()*-1.58345);
}

double NNfunction_sb_uRuR::synapse0x3767680() {
   return (neuron0x373c5e0()*-2.55215);
}

double NNfunction_sb_uRuR::synapse0x37676c0() {
   return (neuron0x37410b0()*-0.938542);
}

double NNfunction_sb_uRuR::synapse0x3767700() {
   return (neuron0x3741a80()*0.101995);
}

double NNfunction_sb_uRuR::synapse0x3767740() {
   return (neuron0x3742450()*1.24782);
}

double NNfunction_sb_uRuR::synapse0x3767780() {
   return (neuron0x3742e20()*-0.00413275);
}

double NNfunction_sb_uRuR::synapse0x3767210() {
   return (neuron0x3744c30()*0.464503);
}

double NNfunction_sb_uRuR::synapse0x3767250() {
   return (neuron0x3744f10()*-0.0599425);
}

double NNfunction_sb_uRuR::synapse0x37678d0() {
   return (neuron0x37458e0()*-0.0657229);
}

double NNfunction_sb_uRuR::synapse0x3767910() {
   return (neuron0x37462b0()*-0.116223);
}

double NNfunction_sb_uRuR::synapse0x3767950() {
   return (neuron0x3746c80()*-0.524345);
}

double NNfunction_sb_uRuR::synapse0x3767990() {
   return (neuron0x3747650()*-0.0643942);
}

double NNfunction_sb_uRuR::synapse0x37679d0() {
   return (neuron0x37401a0()*0.0666133);
}

double NNfunction_sb_uRuR::synapse0x3767a10() {
   return (neuron0x3740b70()*-0.101062);
}

double NNfunction_sb_uRuR::synapse0x3767a50() {
   return (neuron0x374a3e0()*0.0796003);
}

double NNfunction_sb_uRuR::synapse0x3767a90() {
   return (neuron0x374adb0()*-0.445697);
}

double NNfunction_sb_uRuR::synapse0x3767ad0() {
   return (neuron0x374b780()*-1.46702);
}

double NNfunction_sb_uRuR::synapse0x3767b10() {
   return (neuron0x374c150()*-1.03926);
}

double NNfunction_sb_uRuR::synapse0x3767b50() {
   return (neuron0x374cb20()*0.485821);
}

double NNfunction_sb_uRuR::synapse0x3767b90() {
   return (neuron0x374d4f0()*1.16923);
}

double NNfunction_sb_uRuR::synapse0x3767bd0() {
   return (neuron0x374dec0()*-0.000793109);
}

double NNfunction_sb_uRuR::synapse0x3767c10() {
   return (neuron0x374e890()*-0.74253);
}

double NNfunction_sb_uRuR::synapse0x37677c0() {
   return (neuron0x3744920()*-1.83889);
}

double NNfunction_sb_uRuR::synapse0x3767800() {
   return (neuron0x3751470()*0.160491);
}

double NNfunction_sb_uRuR::synapse0x3767840() {
   return (neuron0x3751e40()*1.21599);
}

double NNfunction_sb_uRuR::synapse0x3767880() {
   return (neuron0x3752810()*0.0288414);
}

double NNfunction_sb_uRuR::synapse0x3767e60() {
   return (neuron0x37531e0()*-0.388122);
}

double NNfunction_sb_uRuR::synapse0x3767ea0() {
   return (neuron0x3753bb0()*1.11231);
}

double NNfunction_sb_uRuR::synapse0x3767ee0() {
   return (neuron0x3754580()*0.0519459);
}

double NNfunction_sb_uRuR::synapse0x3767f20() {
   return (neuron0x3754f50()*-0.0115825);
}

double NNfunction_sb_uRuR::synapse0x3767f60() {
   return (neuron0x3755920()*0.0286924);
}

double NNfunction_sb_uRuR::synapse0x3767fa0() {
   return (neuron0x3756500()*-0.0716979);
}

double NNfunction_sb_uRuR::synapse0x3767fe0() {
   return (neuron0x3756ed0()*0.0757769);
}

double NNfunction_sb_uRuR::synapse0x3768020() {
   return (neuron0x3747d50()*-0.900904);
}

double NNfunction_sb_uRuR::synapse0x3768060() {
   return (neuron0x3748720()*-0.874049);
}

double NNfunction_sb_uRuR::synapse0x37680a0() {
   return (neuron0x37490f0()*0.0082044);
}

double NNfunction_sb_uRuR::synapse0x37680e0() {
   return (neuron0x375b730()*0.0969038);
}

double NNfunction_sb_uRuR::synapse0x3768120() {
   return (neuron0x375bfe0()*-1.22412);
}

double NNfunction_sb_uRuR::synapse0x3768160() {
   return (neuron0x375c9b0()*0.209031);
}

double NNfunction_sb_uRuR::synapse0x37681a0() {
   return (neuron0x375d380()*-0.379789);
}

double NNfunction_sb_uRuR::synapse0x3768400() {
   return (neuron0x3764580()*-3.46022);
}

double NNfunction_sb_uRuR::synapse0x3768440() {
   return (neuron0x3764920()*10.4527);
}

double NNfunction_sb_uRuR::synapse0x3768480() {
   return (neuron0x3764dc0()*-4.18178);
}

double NNfunction_sb_uRuR::synapse0x37684c0() {
   return (neuron0x3765f20()*-4.61072);
}

double NNfunction_sb_uRuR::synapse0x3768500() {
   return (neuron0x3767080()*8.2049);
}

