#include "NNfunction_ns_chiPlus1_cL.h"
#include <cmath>

double NNfunction_ns_chiPlus1_cL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.2771)/15.1754;
   input1 = (in1 - 30.5791)/972.973;
   input2 = (in2 - 420.393)/485.631;
   input3 = (in3 - 118.381)/735.022;
   input4 = (in4 - 898.919)/847.518;
   input5 = (in5 - 771.797)/830.55;
   input6 = (in6 - 767.311)/823.761;
   input7 = (in7 - 777.646)/811.763;
   input8 = (in8 - 784.924)/860.043;
   input9 = (in9 - 773.842)/845.524;
   input10 = (in10 - 808.634)/857.242;
   input11 = (in11 - 702.071)/740.1;
   input12 = (in12 - 361.704)/281.935;
   input13 = (in13 - 509.665)/440.097;
   input14 = (in14 - 690.52)/685.58;
   input15 = (in15 - 692.845)/688.642;
   input16 = (in16 - 494.258)/469.533;
   input17 = (in17 - 726.019)/772.732;
   input18 = (in18 - 728.437)/775.195;
   input19 = (in19 - 738.345)/748.099;
   input20 = (in20 - -101.866)/451.839;
   input21 = (in21 - -132.959)/1026.98;
   input22 = (in22 - 6.75114)/1045.64;
   input23 = (in23 - -78.4663)/537.963;
   switch(index) {
     case 0:
         return neuron0x1edbc70();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus1_cL::Value(int index, double* input) {
   input0 = (input[0] - 23.2771)/15.1754;
   input1 = (input[1] - 30.5791)/972.973;
   input2 = (input[2] - 420.393)/485.631;
   input3 = (input[3] - 118.381)/735.022;
   input4 = (input[4] - 898.919)/847.518;
   input5 = (input[5] - 771.797)/830.55;
   input6 = (input[6] - 767.311)/823.761;
   input7 = (input[7] - 777.646)/811.763;
   input8 = (input[8] - 784.924)/860.043;
   input9 = (input[9] - 773.842)/845.524;
   input10 = (input[10] - 808.634)/857.242;
   input11 = (input[11] - 702.071)/740.1;
   input12 = (input[12] - 361.704)/281.935;
   input13 = (input[13] - 509.665)/440.097;
   input14 = (input[14] - 690.52)/685.58;
   input15 = (input[15] - 692.845)/688.642;
   input16 = (input[16] - 494.258)/469.533;
   input17 = (input[17] - 726.019)/772.732;
   input18 = (input[18] - 728.437)/775.195;
   input19 = (input[19] - 738.345)/748.099;
   input20 = (input[20] - -101.866)/451.839;
   input21 = (input[21] - -132.959)/1026.98;
   input22 = (input[22] - 6.75114)/1045.64;
   input23 = (input[23] - -78.4663)/537.963;
   switch(index) {
     case 0:
         return neuron0x1edbc70();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea7e30() {
   return input0;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea80e0() {
   return input1;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea8420() {
   return input2;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea8760() {
   return input3;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea8aa0() {
   return input4;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea8de0() {
   return input5;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea9120() {
   return input6;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea9460() {
   return input7;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea97a0() {
   return input8;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea9ae0() {
   return input9;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ea9e20() {
   return input10;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eaa160() {
   return input11;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eaa4a0() {
   return input12;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eaa7e0() {
   return input13;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eaab20() {
   return input14;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eaae60() {
   return input15;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eab1a0() {
   return input16;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eab700() {
   return input17;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eab920() {
   return input18;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eabc60() {
   return input19;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eabfa0() {
   return input20;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eac2e0() {
   return input21;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eac620() {
   return input22;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eac960() {
   return input23;
}

double NNfunction_ns_chiPlus1_cL::input0x1eacdd0() {
   double input = 0.33967;
   input += synapse0x1ea7db0();
   input += synapse0x1ea7df0();
   input += synapse0x1ead080();
   input += synapse0x1ead0c0();
   input += synapse0x1ead100();
   input += synapse0x1ead140();
   input += synapse0x1ead180();
   input += synapse0x1ead1c0();
   input += synapse0x1ead200();
   input += synapse0x1ead240();
   input += synapse0x1ead280();
   input += synapse0x1ead2c0();
   input += synapse0x1ead300();
   input += synapse0x1ead340();
   input += synapse0x1ead380();
   input += synapse0x1ead3c0();
   input += synapse0x1ea7d20();
   input += synapse0x1ea7d60();
   input += synapse0x1c62ef0();
   input += synapse0x1c62f30();
   input += synapse0x1ead620();
   input += synapse0x1ead660();
   input += synapse0x1ead6a0();
   input += synapse0x1ead6e0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eacdd0() {
   double input = input0x1eacdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ead720() {
   double input = -1.82809;
   input += synapse0x1eada60();
   input += synapse0x1eadaa0();
   input += synapse0x1eadae0();
   input += synapse0x1eadb20();
   input += synapse0x1eadb60();
   input += synapse0x1eadba0();
   input += synapse0x1eadbe0();
   input += synapse0x1eadc20();
   input += synapse0x1eadc60();
   input += synapse0x1ead510();
   input += synapse0x1ead550();
   input += synapse0x1ead590();
   input += synapse0x1ead5d0();
   input += synapse0x1eadeb0();
   input += synapse0x1eadef0();
   input += synapse0x1eadf30();
   input += synapse0x1ead8b0();
   input += synapse0x1ead8f0();
   input += synapse0x1eae080();
   input += synapse0x1eae0c0();
   input += synapse0x1eae100();
   input += synapse0x1eae140();
   input += synapse0x1eae180();
   input += synapse0x1eae1c0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ead720() {
   double input = input0x1ead720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eae200() {
   double input = 0.74518;
   input += synapse0x1eae540();
   input += synapse0x1eae580();
   input += synapse0x1eae5c0();
   input += synapse0x1eae600();
   input += synapse0x1eae640();
   input += synapse0x1eae680();
   input += synapse0x1eae6c0();
   input += synapse0x1eae700();
   input += synapse0x1eae740();
   input += synapse0x1eae780();
   input += synapse0x1eae7c0();
   input += synapse0x1eae800();
   input += synapse0x1eae840();
   input += synapse0x1eae880();
   input += synapse0x1eae8c0();
   input += synapse0x1eae900();
   input += synapse0x1eae390();
   input += synapse0x1eae3d0();
   input += synapse0x1e96ea0();
   input += synapse0x1c70df0();
   input += synapse0x1c70e30();
   input += synapse0x1d8c340();
   input += synapse0x1d8c380();
   input += synapse0x1ea7b90();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eae200() {
   double input = input0x1eae200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1c71550() {
   double input = -1.10031;
   input += synapse0x1c716e0();
   input += synapse0x1eaddc0();
   input += synapse0x1eade00();
   input += synapse0x1eade40();
   input += synapse0x1eaea50();
   input += synapse0x1eaea90();
   input += synapse0x1eaead0();
   input += synapse0x1eaeb10();
   input += synapse0x1eaeb50();
   input += synapse0x1eaeb90();
   input += synapse0x1eaebd0();
   input += synapse0x1eaec10();
   input += synapse0x1eaec50();
   input += synapse0x1eaec90();
   input += synapse0x1eaecd0();
   input += synapse0x1eaed10();
   input += synapse0x1ea7bd0();
   input += synapse0x1ea7c10();
   input += synapse0x1ea7c50();
   input += synapse0x1eaee60();
   input += synapse0x1eaeea0();
   input += synapse0x1eaeee0();
   input += synapse0x1eaef20();
   input += synapse0x1eaef60();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1c71550() {
   double input = input0x1c71550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eaefa0() {
   double input = -0.147701;
   input += synapse0x1eaf2e0();
   input += synapse0x1eaf320();
   input += synapse0x1eaf360();
   input += synapse0x1eaf3a0();
   input += synapse0x1eaf3e0();
   input += synapse0x1eaf420();
   input += synapse0x1eaf460();
   input += synapse0x1eaf4a0();
   input += synapse0x1eaf4e0();
   input += synapse0x1eaf520();
   input += synapse0x1eaf560();
   input += synapse0x1eaf5a0();
   input += synapse0x1eaf5e0();
   input += synapse0x1eaf620();
   input += synapse0x1eaf660();
   input += synapse0x1eaf6a0();
   input += synapse0x1eaf130();
   input += synapse0x1eaf170();
   input += synapse0x1eaf7f0();
   input += synapse0x1eaf830();
   input += synapse0x1eaf870();
   input += synapse0x1eaf8b0();
   input += synapse0x1eaf8f0();
   input += synapse0x1eaf930();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eaefa0() {
   double input = input0x1eaefa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eaf970() {
   double input = 3.42723;
   input += synapse0x1eafcb0();
   input += synapse0x1eafcf0();
   input += synapse0x1eafd30();
   input += synapse0x1eafd70();
   input += synapse0x1eafdb0();
   input += synapse0x1eafdf0();
   input += synapse0x1eafe30();
   input += synapse0x1eafe70();
   input += synapse0x1eafeb0();
   input += synapse0x1c71140();
   input += synapse0x1c71180();
   input += synapse0x1c711c0();
   input += synapse0x1c71200();
   input += synapse0x1c71240();
   input += synapse0x1c71280();
   input += synapse0x1c712c0();
   input += synapse0x1eafb00();
   input += synapse0x1eafb40();
   input += synapse0x1c71410();
   input += synapse0x1c71450();
   input += synapse0x1c71490();
   input += synapse0x1c714d0();
   input += synapse0x1c71510();
   input += synapse0x1eb0700();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eaf970() {
   double input = input0x1eaf970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb0740() {
   double input = -2.12315;
   input += synapse0x1eb0a80();
   input += synapse0x1eb0ac0();
   input += synapse0x1eb0b00();
   input += synapse0x1eb0b40();
   input += synapse0x1eb0b80();
   input += synapse0x1eb0bc0();
   input += synapse0x1eb0c00();
   input += synapse0x1eb0c40();
   input += synapse0x1eb0c80();
   input += synapse0x1eb0cc0();
   input += synapse0x1eb0d00();
   input += synapse0x1eb0d40();
   input += synapse0x1eb0d80();
   input += synapse0x1eb0dc0();
   input += synapse0x1eb0e00();
   input += synapse0x1eb0e40();
   input += synapse0x1eb08d0();
   input += synapse0x1eb0910();
   input += synapse0x1eb0f90();
   input += synapse0x1eb0fd0();
   input += synapse0x1eb1010();
   input += synapse0x1eb1050();
   input += synapse0x1eb1090();
   input += synapse0x1eb10d0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb0740() {
   double input = input0x1eb0740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb1110() {
   double input = -0.565675;
   input += synapse0x1eb1450();
   input += synapse0x1eb1490();
   input += synapse0x1eb14d0();
   input += synapse0x1eb1510();
   input += synapse0x1eb1550();
   input += synapse0x1eb1590();
   input += synapse0x1eb15d0();
   input += synapse0x1eb1610();
   input += synapse0x1eb1650();
   input += synapse0x1eb1690();
   input += synapse0x1eb16d0();
   input += synapse0x1eb1710();
   input += synapse0x1eb1750();
   input += synapse0x1eb1790();
   input += synapse0x1eb17d0();
   input += synapse0x1eb1810();
   input += synapse0x1eb12a0();
   input += synapse0x1eb12e0();
   input += synapse0x1eb1960();
   input += synapse0x1eb19a0();
   input += synapse0x1eb19e0();
   input += synapse0x1eb1a20();
   input += synapse0x1eb1a60();
   input += synapse0x1eb1aa0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb1110() {
   double input = input0x1eb1110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb1ae0() {
   double input = 0.190338;
   input += synapse0x1eab5f0();
   input += synapse0x1eab630();
   input += synapse0x1eab670();
   input += synapse0x1eab6b0();
   input += synapse0x1eb2030();
   input += synapse0x1eb2070();
   input += synapse0x1eb20b0();
   input += synapse0x1eb20f0();
   input += synapse0x1eb2130();
   input += synapse0x1eb2170();
   input += synapse0x1eb21b0();
   input += synapse0x1eb21f0();
   input += synapse0x1eb2230();
   input += synapse0x1eb2270();
   input += synapse0x1eb22b0();
   input += synapse0x1eb22f0();
   input += synapse0x1eb1c70();
   input += synapse0x1eb1cb0();
   input += synapse0x1eb2440();
   input += synapse0x1eb2480();
   input += synapse0x1eb24c0();
   input += synapse0x1eb2500();
   input += synapse0x1eb2540();
   input += synapse0x1eb2580();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb1ae0() {
   double input = input0x1eb1ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb25c0() {
   double input = -2.99752;
   input += synapse0x1eb2900();
   input += synapse0x1eb2940();
   input += synapse0x1eb2980();
   input += synapse0x1eb29c0();
   input += synapse0x1eb2a00();
   input += synapse0x1eb2a40();
   input += synapse0x1eb2a80();
   input += synapse0x1eb2ac0();
   input += synapse0x1eb2b00();
   input += synapse0x1eb2b40();
   input += synapse0x1eb2b80();
   input += synapse0x1eb2bc0();
   input += synapse0x1eb2c00();
   input += synapse0x1eb2c40();
   input += synapse0x1eb2c80();
   input += synapse0x1eb2cc0();
   input += synapse0x1eb2750();
   input += synapse0x1eb2790();
   input += synapse0x1eb2e10();
   input += synapse0x1eb2e50();
   input += synapse0x1eb2e90();
   input += synapse0x1eb2ed0();
   input += synapse0x1eb2f10();
   input += synapse0x1eb2f50();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb25c0() {
   double input = input0x1eb25c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb2f90() {
   double input = -2.53082;
   input += synapse0x1eb32d0();
   input += synapse0x1eb3310();
   input += synapse0x1eb3350();
   input += synapse0x1eb3390();
   input += synapse0x1eb33d0();
   input += synapse0x1eb3410();
   input += synapse0x1eb3450();
   input += synapse0x1eb3490();
   input += synapse0x1eb34d0();
   input += synapse0x1eb3510();
   input += synapse0x1eb3550();
   input += synapse0x1eb3590();
   input += synapse0x1eb35d0();
   input += synapse0x1eb3610();
   input += synapse0x1eb3650();
   input += synapse0x1eb3690();
   input += synapse0x1eb3120();
   input += synapse0x1eb3160();
   input += synapse0x1eafef0();
   input += synapse0x1eaff30();
   input += synapse0x1eaff70();
   input += synapse0x1eaffb0();
   input += synapse0x1eafff0();
   input += synapse0x1eb0030();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb2f90() {
   double input = input0x1eb2f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb0070() {
   double input = 0.775422;
   input += synapse0x1eb03b0();
   input += synapse0x1eb03f0();
   input += synapse0x1eb0430();
   input += synapse0x1eb0470();
   input += synapse0x1eb04b0();
   input += synapse0x1eb04f0();
   input += synapse0x1eb0530();
   input += synapse0x1eb0570();
   input += synapse0x1eb05b0();
   input += synapse0x1eb05f0();
   input += synapse0x1eb0630();
   input += synapse0x1eb0670();
   input += synapse0x1eb06b0();
   input += synapse0x1eb47f0();
   input += synapse0x1eb4830();
   input += synapse0x1eb4870();
   input += synapse0x1eb0200();
   input += synapse0x1eb0240();
   input += synapse0x1eb49c0();
   input += synapse0x1eb4a00();
   input += synapse0x1eb4a40();
   input += synapse0x1eb4a80();
   input += synapse0x1eb4ac0();
   input += synapse0x1eb4b00();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb0070() {
   double input = input0x1eb0070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb4b40() {
   double input = -1.91276;
   input += synapse0x1eb4e80();
   input += synapse0x1eb4ec0();
   input += synapse0x1eb4f00();
   input += synapse0x1eb4f40();
   input += synapse0x1eb4f80();
   input += synapse0x1eb4fc0();
   input += synapse0x1eb5000();
   input += synapse0x1eb5040();
   input += synapse0x1eb5080();
   input += synapse0x1eb50c0();
   input += synapse0x1eb5100();
   input += synapse0x1eb5140();
   input += synapse0x1eb5180();
   input += synapse0x1eb51c0();
   input += synapse0x1eb5200();
   input += synapse0x1eb5240();
   input += synapse0x1eb4cd0();
   input += synapse0x1eb4d10();
   input += synapse0x1eb5390();
   input += synapse0x1eb53d0();
   input += synapse0x1eb5410();
   input += synapse0x1eb5450();
   input += synapse0x1eb5490();
   input += synapse0x1eb54d0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb4b40() {
   double input = input0x1eb4b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb5510() {
   double input = 0.549481;
   input += synapse0x1eb5850();
   input += synapse0x1eb5890();
   input += synapse0x1eb58d0();
   input += synapse0x1eb5910();
   input += synapse0x1eb5950();
   input += synapse0x1eb5990();
   input += synapse0x1eb59d0();
   input += synapse0x1eb5a10();
   input += synapse0x1eb5a50();
   input += synapse0x1eb5a90();
   input += synapse0x1eb5ad0();
   input += synapse0x1eb5b10();
   input += synapse0x1eb5b50();
   input += synapse0x1eb5b90();
   input += synapse0x1eb5bd0();
   input += synapse0x1eb5c10();
   input += synapse0x1eb56a0();
   input += synapse0x1eb56e0();
   input += synapse0x1eb5d60();
   input += synapse0x1eb5da0();
   input += synapse0x1eb5de0();
   input += synapse0x1eb5e20();
   input += synapse0x1eb5e60();
   input += synapse0x1eb5ea0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb5510() {
   double input = input0x1eb5510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb5ee0() {
   double input = 1.78572;
   input += synapse0x1eb6220();
   input += synapse0x1eb6260();
   input += synapse0x1eb62a0();
   input += synapse0x1eb62e0();
   input += synapse0x1eb6320();
   input += synapse0x1eb6360();
   input += synapse0x1eb63a0();
   input += synapse0x1eb63e0();
   input += synapse0x1eb6420();
   input += synapse0x1eb6460();
   input += synapse0x1eb64a0();
   input += synapse0x1eb64e0();
   input += synapse0x1eb6520();
   input += synapse0x1eb6560();
   input += synapse0x1eb65a0();
   input += synapse0x1eb65e0();
   input += synapse0x1eb6070();
   input += synapse0x1eb60b0();
   input += synapse0x1eb6730();
   input += synapse0x1eb6770();
   input += synapse0x1eb67b0();
   input += synapse0x1eb67f0();
   input += synapse0x1eb6830();
   input += synapse0x1eb6870();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb5ee0() {
   double input = input0x1eb5ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb68b0() {
   double input = 0.0768061;
   input += synapse0x1eb6bf0();
   input += synapse0x1ea7fc0();
   input += synapse0x1ea8000();
   input += synapse0x1ea8300();
   input += synapse0x1ea8340();
   input += synapse0x1ea8640();
   input += synapse0x1ea8680();
   input += synapse0x1ea8980();
   input += synapse0x1ea89c0();
   input += synapse0x1ea8cc0();
   input += synapse0x1ea8d00();
   input += synapse0x1ea9000();
   input += synapse0x1ea9040();
   input += synapse0x1ea9340();
   input += synapse0x1ea9380();
   input += synapse0x1ea9680();
   input += synapse0x1ea96c0();
   input += synapse0x1ea99c0();
   input += synapse0x1ea9a00();
   input += synapse0x1ea9d00();
   input += synapse0x1ea9d40();
   input += synapse0x1eaa040();
   input += synapse0x1eaa080();
   input += synapse0x1eaa380();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb68b0() {
   double input = input0x1eb68b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb86c0() {
   double input = 0.0240152;
   input += synapse0x1eaa3c0();
   input += synapse0x1eab080();
   input += synapse0x1eab0c0();
   input += synapse0x1eb6a40();
   input += synapse0x1eb6a80();
   input += synapse0x1eab3c0();
   input += synapse0x1eab400();
   input += synapse0x1c62dd0();
   input += synapse0x1c62e10();
   input += synapse0x1eabb40();
   input += synapse0x1eabb80();
   input += synapse0x1eabe80();
   input += synapse0x1eabec0();
   input += synapse0x1eac1c0();
   input += synapse0x1eac200();
   input += synapse0x1eac500();
   input += synapse0x1eac540();
   input += synapse0x1eac840();
   input += synapse0x1eac880();
   input += synapse0x1eacb80();
   input += synapse0x1eacbc0();
   input += synapse0x1eaa6c0();
   input += synapse0x1eaa700();
   input += synapse0x1eb8960();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb86c0() {
   double input = input0x1eb86c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb89a0() {
   double input = -0.699085;
   input += synapse0x1eb8ce0();
   input += synapse0x1eb8d20();
   input += synapse0x1eb8d60();
   input += synapse0x1eb8da0();
   input += synapse0x1eb8de0();
   input += synapse0x1eb8e20();
   input += synapse0x1eb8e60();
   input += synapse0x1eb8ea0();
   input += synapse0x1eb8ee0();
   input += synapse0x1eb8f20();
   input += synapse0x1eb8f60();
   input += synapse0x1eb8fa0();
   input += synapse0x1eb8fe0();
   input += synapse0x1eb9020();
   input += synapse0x1eb9060();
   input += synapse0x1eb90a0();
   input += synapse0x1eb8b30();
   input += synapse0x1eb8b70();
   input += synapse0x1eb91f0();
   input += synapse0x1eb9230();
   input += synapse0x1eb9270();
   input += synapse0x1eb92b0();
   input += synapse0x1eb92f0();
   input += synapse0x1eb9330();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb89a0() {
   double input = input0x1eb89a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb9370() {
   double input = 0.729466;
   input += synapse0x1eb96b0();
   input += synapse0x1eb96f0();
   input += synapse0x1eb9730();
   input += synapse0x1eb9770();
   input += synapse0x1eb97b0();
   input += synapse0x1eb97f0();
   input += synapse0x1eb9830();
   input += synapse0x1eb9870();
   input += synapse0x1eb98b0();
   input += synapse0x1eb98f0();
   input += synapse0x1eb9930();
   input += synapse0x1eb9970();
   input += synapse0x1eb99b0();
   input += synapse0x1eb99f0();
   input += synapse0x1eb9a30();
   input += synapse0x1eb9a70();
   input += synapse0x1eb9500();
   input += synapse0x1eb9540();
   input += synapse0x1eb9bc0();
   input += synapse0x1eb9c00();
   input += synapse0x1eb9c40();
   input += synapse0x1eb9c80();
   input += synapse0x1eb9cc0();
   input += synapse0x1eb9d00();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb9370() {
   double input = input0x1eb9370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb9d40() {
   double input = -1.70504;
   input += synapse0x1eba080();
   input += synapse0x1eba0c0();
   input += synapse0x1eba100();
   input += synapse0x1eba140();
   input += synapse0x1eba180();
   input += synapse0x1eba1c0();
   input += synapse0x1eba200();
   input += synapse0x1eba240();
   input += synapse0x1eba280();
   input += synapse0x1eba2c0();
   input += synapse0x1eba300();
   input += synapse0x1eba340();
   input += synapse0x1eba380();
   input += synapse0x1eba3c0();
   input += synapse0x1eba400();
   input += synapse0x1eba440();
   input += synapse0x1eb9ed0();
   input += synapse0x1eb9f10();
   input += synapse0x1eba590();
   input += synapse0x1eba5d0();
   input += synapse0x1eba610();
   input += synapse0x1eba650();
   input += synapse0x1eba690();
   input += synapse0x1eba6d0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb9d40() {
   double input = input0x1eb9d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eba710() {
   double input = -3.2937;
   input += synapse0x1ebaa50();
   input += synapse0x1ebaa90();
   input += synapse0x1ebaad0();
   input += synapse0x1ebab10();
   input += synapse0x1ebab50();
   input += synapse0x1ebab90();
   input += synapse0x1ebabd0();
   input += synapse0x1ebac10();
   input += synapse0x1ebac50();
   input += synapse0x1ebac90();
   input += synapse0x1ebacd0();
   input += synapse0x1ebad10();
   input += synapse0x1ebad50();
   input += synapse0x1ebad90();
   input += synapse0x1ebadd0();
   input += synapse0x1ebae10();
   input += synapse0x1eba8a0();
   input += synapse0x1eba8e0();
   input += synapse0x1ebaf60();
   input += synapse0x1ebafa0();
   input += synapse0x1ebafe0();
   input += synapse0x1ebb020();
   input += synapse0x1ebb060();
   input += synapse0x1ebb0a0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eba710() {
   double input = input0x1eba710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ebb0e0() {
   double input = 0.397964;
   input += synapse0x1ebb420();
   input += synapse0x1ebb460();
   input += synapse0x1ebb4a0();
   input += synapse0x1ebb4e0();
   input += synapse0x1ebb520();
   input += synapse0x1ebb560();
   input += synapse0x1ebb5a0();
   input += synapse0x1ebb5e0();
   input += synapse0x1ebb620();
   input += synapse0x1eb37e0();
   input += synapse0x1eb3820();
   input += synapse0x1eb3860();
   input += synapse0x1eb38a0();
   input += synapse0x1eb38e0();
   input += synapse0x1eb3920();
   input += synapse0x1eb3960();
   input += synapse0x1ebb270();
   input += synapse0x1ebb2b0();
   input += synapse0x1eb3ab0();
   input += synapse0x1eb3af0();
   input += synapse0x1eb3b30();
   input += synapse0x1eb3b70();
   input += synapse0x1eb3bb0();
   input += synapse0x1eb3bf0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ebb0e0() {
   double input = input0x1ebb0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb3c30() {
   double input = 3.05655;
   input += synapse0x1eb3f70();
   input += synapse0x1eb3fb0();
   input += synapse0x1eb3ff0();
   input += synapse0x1eb4030();
   input += synapse0x1eb4070();
   input += synapse0x1eb40b0();
   input += synapse0x1eb40f0();
   input += synapse0x1eb4130();
   input += synapse0x1eb4170();
   input += synapse0x1eb41b0();
   input += synapse0x1eb41f0();
   input += synapse0x1eb4230();
   input += synapse0x1eb4270();
   input += synapse0x1eb42b0();
   input += synapse0x1eb42f0();
   input += synapse0x1eb4330();
   input += synapse0x1eb3dc0();
   input += synapse0x1eb3e00();
   input += synapse0x1eb4480();
   input += synapse0x1eb44c0();
   input += synapse0x1eb4500();
   input += synapse0x1eb4540();
   input += synapse0x1eb4580();
   input += synapse0x1eb45c0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb3c30() {
   double input = input0x1eb3c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb4600() {
   double input = 0.706758;
   input += synapse0x1eb4790();
   input += synapse0x1ebd820();
   input += synapse0x1ebd860();
   input += synapse0x1ebd8a0();
   input += synapse0x1ebd8e0();
   input += synapse0x1ebd920();
   input += synapse0x1ebd960();
   input += synapse0x1ebd9a0();
   input += synapse0x1ebd9e0();
   input += synapse0x1ebda20();
   input += synapse0x1ebda60();
   input += synapse0x1ebdaa0();
   input += synapse0x1ebdae0();
   input += synapse0x1ebdb20();
   input += synapse0x1ebdb60();
   input += synapse0x1ebdba0();
   input += synapse0x1ebd670();
   input += synapse0x1ebd6b0();
   input += synapse0x1ebdcf0();
   input += synapse0x1ebdd30();
   input += synapse0x1ebdd70();
   input += synapse0x1ebddb0();
   input += synapse0x1ebddf0();
   input += synapse0x1ebde30();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb4600() {
   double input = input0x1eb4600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ebde70() {
   double input = -1.88488;
   input += synapse0x1ebe1b0();
   input += synapse0x1ebe1f0();
   input += synapse0x1ebe230();
   input += synapse0x1ebe270();
   input += synapse0x1ebe2b0();
   input += synapse0x1ebe2f0();
   input += synapse0x1ebe330();
   input += synapse0x1ebe370();
   input += synapse0x1ebe3b0();
   input += synapse0x1ebe3f0();
   input += synapse0x1ebe430();
   input += synapse0x1ebe470();
   input += synapse0x1ebe4b0();
   input += synapse0x1ebe4f0();
   input += synapse0x1ebe530();
   input += synapse0x1ebe570();
   input += synapse0x1ebe000();
   input += synapse0x1ebe040();
   input += synapse0x1ebe6c0();
   input += synapse0x1ebe700();
   input += synapse0x1ebe740();
   input += synapse0x1ebe780();
   input += synapse0x1ebe7c0();
   input += synapse0x1ebe800();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ebde70() {
   double input = input0x1ebde70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ebe840() {
   double input = -2.17287;
   input += synapse0x1ebeb80();
   input += synapse0x1ebebc0();
   input += synapse0x1ebec00();
   input += synapse0x1ebec40();
   input += synapse0x1ebec80();
   input += synapse0x1ebecc0();
   input += synapse0x1ebed00();
   input += synapse0x1ebed40();
   input += synapse0x1ebed80();
   input += synapse0x1ebedc0();
   input += synapse0x1ebee00();
   input += synapse0x1ebee40();
   input += synapse0x1ebee80();
   input += synapse0x1ebeec0();
   input += synapse0x1ebef00();
   input += synapse0x1ebef40();
   input += synapse0x1ebe9d0();
   input += synapse0x1ebea10();
   input += synapse0x1ebf090();
   input += synapse0x1ebf0d0();
   input += synapse0x1ebf110();
   input += synapse0x1ebf150();
   input += synapse0x1ebf190();
   input += synapse0x1ebf1d0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ebe840() {
   double input = input0x1ebe840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ebf210() {
   double input = 7.58454;
   input += synapse0x1ebf550();
   input += synapse0x1ebf590();
   input += synapse0x1ebf5d0();
   input += synapse0x1ebf610();
   input += synapse0x1ebf650();
   input += synapse0x1ebf690();
   input += synapse0x1ebf6d0();
   input += synapse0x1ebf710();
   input += synapse0x1ebf750();
   input += synapse0x1ebf790();
   input += synapse0x1ebf7d0();
   input += synapse0x1ebf810();
   input += synapse0x1ebf850();
   input += synapse0x1ebf890();
   input += synapse0x1ebf8d0();
   input += synapse0x1ebf910();
   input += synapse0x1ebf3a0();
   input += synapse0x1ebf3e0();
   input += synapse0x1ebfa60();
   input += synapse0x1ebfaa0();
   input += synapse0x1ebfae0();
   input += synapse0x1ebfb20();
   input += synapse0x1ebfb60();
   input += synapse0x1ebfba0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ebf210() {
   double input = input0x1ebf210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ebfbe0() {
   double input = 1.18266;
   input += synapse0x1ebff20();
   input += synapse0x1ebff60();
   input += synapse0x1ebffa0();
   input += synapse0x1ebffe0();
   input += synapse0x1ec0020();
   input += synapse0x1ec0060();
   input += synapse0x1ec00a0();
   input += synapse0x1ec00e0();
   input += synapse0x1ec0120();
   input += synapse0x1ec0160();
   input += synapse0x1ec01a0();
   input += synapse0x1ec01e0();
   input += synapse0x1ec0220();
   input += synapse0x1ec0260();
   input += synapse0x1ec02a0();
   input += synapse0x1ec02e0();
   input += synapse0x1ebfd70();
   input += synapse0x1ebfdb0();
   input += synapse0x1ec0430();
   input += synapse0x1ec0470();
   input += synapse0x1ec04b0();
   input += synapse0x1ec04f0();
   input += synapse0x1ec0530();
   input += synapse0x1ec0570();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ebfbe0() {
   double input = input0x1ebfbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec05b0() {
   double input = 0.889609;
   input += synapse0x1ec08f0();
   input += synapse0x1ec0930();
   input += synapse0x1ec0970();
   input += synapse0x1ec09b0();
   input += synapse0x1ec09f0();
   input += synapse0x1ec0a30();
   input += synapse0x1ec0a70();
   input += synapse0x1ec0ab0();
   input += synapse0x1ec0af0();
   input += synapse0x1ec0b30();
   input += synapse0x1ec0b70();
   input += synapse0x1ec0bb0();
   input += synapse0x1ec0bf0();
   input += synapse0x1ec0c30();
   input += synapse0x1ec0c70();
   input += synapse0x1ec0cb0();
   input += synapse0x1ec0740();
   input += synapse0x1ec0780();
   input += synapse0x1ec0e00();
   input += synapse0x1ec0e40();
   input += synapse0x1ec0e80();
   input += synapse0x1ec0ec0();
   input += synapse0x1ec0f00();
   input += synapse0x1ec0f40();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec05b0() {
   double input = input0x1ec05b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec0f80() {
   double input = -0.236334;
   input += synapse0x1ec12c0();
   input += synapse0x1ec1300();
   input += synapse0x1ec1340();
   input += synapse0x1ec1380();
   input += synapse0x1ec13c0();
   input += synapse0x1ec1400();
   input += synapse0x1ec1440();
   input += synapse0x1ec1480();
   input += synapse0x1ec14c0();
   input += synapse0x1ec1500();
   input += synapse0x1ec1540();
   input += synapse0x1ec1580();
   input += synapse0x1ec15c0();
   input += synapse0x1ec1600();
   input += synapse0x1ec1640();
   input += synapse0x1ec1680();
   input += synapse0x1ec1110();
   input += synapse0x1ec1150();
   input += synapse0x1ec17d0();
   input += synapse0x1ec1810();
   input += synapse0x1ec1850();
   input += synapse0x1ec1890();
   input += synapse0x1ec18d0();
   input += synapse0x1ec1910();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec0f80() {
   double input = input0x1ec0f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec1950() {
   double input = -0.339741;
   input += synapse0x1ec1c90();
   input += synapse0x1ec1cd0();
   input += synapse0x1ec1d10();
   input += synapse0x1ec1d50();
   input += synapse0x1ec1d90();
   input += synapse0x1ec1dd0();
   input += synapse0x1ec1e10();
   input += synapse0x1ec1e50();
   input += synapse0x1ec1e90();
   input += synapse0x1ec1ed0();
   input += synapse0x1ec1f10();
   input += synapse0x1ec1f50();
   input += synapse0x1ec1f90();
   input += synapse0x1ec1fd0();
   input += synapse0x1ec2010();
   input += synapse0x1ec2050();
   input += synapse0x1ec1ae0();
   input += synapse0x1ec1b20();
   input += synapse0x1ec21a0();
   input += synapse0x1ec21e0();
   input += synapse0x1ec2220();
   input += synapse0x1ec2260();
   input += synapse0x1ec22a0();
   input += synapse0x1ec22e0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec1950() {
   double input = input0x1ec1950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec2320() {
   double input = -0.194159;
   input += synapse0x1ec2660();
   input += synapse0x1eb6c30();
   input += synapse0x1eb6c70();
   input += synapse0x1eb6cb0();
   input += synapse0x1eb6f00();
   input += synapse0x1eb6f40();
   input += synapse0x1eb6f80();
   input += synapse0x1eb71d0();
   input += synapse0x1eb7210();
   input += synapse0x1eb7460();
   input += synapse0x1eb74a0();
   input += synapse0x1eb74e0();
   input += synapse0x1eb7730();
   input += synapse0x1eb7770();
   input += synapse0x1eb79c0();
   input += synapse0x1eb7a00();
   input += synapse0x1ec24b0();
   input += synapse0x1ec24f0();
   input += synapse0x1eb7b50();
   input += synapse0x1eb8060();
   input += synapse0x1eb80a0();
   input += synapse0x1eb80e0();
   input += synapse0x1eb8330();
   input += synapse0x1eb8370();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec2320() {
   double input = input0x1ec2320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eb83b0() {
   double input = -0.754849;
   input += synapse0x1eb7c20();
   input += synapse0x1eb7c60();
   input += synapse0x1eb7ca0();
   input += synapse0x1eb7ce0();
   input += synapse0x1eb8660();
   input += synapse0x1ec49b0();
   input += synapse0x1ec49f0();
   input += synapse0x1ec4a30();
   input += synapse0x1ec4a70();
   input += synapse0x1ec4ab0();
   input += synapse0x1ec4af0();
   input += synapse0x1ec4b30();
   input += synapse0x1ec4b70();
   input += synapse0x1ec4bb0();
   input += synapse0x1ec4bf0();
   input += synapse0x1ec4c30();
   input += synapse0x1eb8540();
   input += synapse0x1eb8580();
   input += synapse0x1ec4d80();
   input += synapse0x1ec4dc0();
   input += synapse0x1ec4e00();
   input += synapse0x1ec4e40();
   input += synapse0x1ec4e80();
   input += synapse0x1ec4ec0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eb83b0() {
   double input = input0x1eb83b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec4f00() {
   double input = -0.547072;
   input += synapse0x1ec5240();
   input += synapse0x1ec5280();
   input += synapse0x1ec52c0();
   input += synapse0x1ec5300();
   input += synapse0x1ec5340();
   input += synapse0x1ec5380();
   input += synapse0x1ec53c0();
   input += synapse0x1ec5400();
   input += synapse0x1ec5440();
   input += synapse0x1ec5480();
   input += synapse0x1ec54c0();
   input += synapse0x1ec5500();
   input += synapse0x1ec5540();
   input += synapse0x1ec5580();
   input += synapse0x1ec55c0();
   input += synapse0x1ec5600();
   input += synapse0x1ec5090();
   input += synapse0x1ec50d0();
   input += synapse0x1ec5750();
   input += synapse0x1ec5790();
   input += synapse0x1ec57d0();
   input += synapse0x1ec5810();
   input += synapse0x1ec5850();
   input += synapse0x1ec5890();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec4f00() {
   double input = input0x1ec4f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec58d0() {
   double input = -0.461782;
   input += synapse0x1ec5c10();
   input += synapse0x1ec5c50();
   input += synapse0x1ec5c90();
   input += synapse0x1ec5cd0();
   input += synapse0x1ec5d10();
   input += synapse0x1ec5d50();
   input += synapse0x1ec5d90();
   input += synapse0x1ec5dd0();
   input += synapse0x1ec5e10();
   input += synapse0x1ec5e50();
   input += synapse0x1ec5e90();
   input += synapse0x1ec5ed0();
   input += synapse0x1ec5f10();
   input += synapse0x1ec5f50();
   input += synapse0x1ec5f90();
   input += synapse0x1ec5fd0();
   input += synapse0x1ec5a60();
   input += synapse0x1ec5aa0();
   input += synapse0x1ec6120();
   input += synapse0x1ec6160();
   input += synapse0x1ec61a0();
   input += synapse0x1ec61e0();
   input += synapse0x1ec6220();
   input += synapse0x1ec6260();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec58d0() {
   double input = input0x1ec58d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec62a0() {
   double input = 1.58581;
   input += synapse0x1ec65e0();
   input += synapse0x1ec6620();
   input += synapse0x1ec6660();
   input += synapse0x1ec66a0();
   input += synapse0x1ec66e0();
   input += synapse0x1ec6720();
   input += synapse0x1ec6760();
   input += synapse0x1ec67a0();
   input += synapse0x1ec67e0();
   input += synapse0x1ec6820();
   input += synapse0x1ec6860();
   input += synapse0x1ec68a0();
   input += synapse0x1ec68e0();
   input += synapse0x1ec6920();
   input += synapse0x1ec6960();
   input += synapse0x1ec69a0();
   input += synapse0x1ec6430();
   input += synapse0x1ec6470();
   input += synapse0x1ec6af0();
   input += synapse0x1ec6b30();
   input += synapse0x1ec6b70();
   input += synapse0x1ec6bb0();
   input += synapse0x1ec6bf0();
   input += synapse0x1ec6c30();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec62a0() {
   double input = input0x1ec62a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec6c70() {
   double input = -0.342173;
   input += synapse0x1ec6fb0();
   input += synapse0x1ec6ff0();
   input += synapse0x1ec7030();
   input += synapse0x1ec7070();
   input += synapse0x1ec70b0();
   input += synapse0x1ec70f0();
   input += synapse0x1ec7130();
   input += synapse0x1ec7170();
   input += synapse0x1ec71b0();
   input += synapse0x1ec71f0();
   input += synapse0x1ec7230();
   input += synapse0x1ec7270();
   input += synapse0x1ec72b0();
   input += synapse0x1ec72f0();
   input += synapse0x1ec7330();
   input += synapse0x1ec7370();
   input += synapse0x1ec6e00();
   input += synapse0x1ec6e40();
   input += synapse0x1ec74c0();
   input += synapse0x1ec7500();
   input += synapse0x1ec7540();
   input += synapse0x1ec7580();
   input += synapse0x1ec75c0();
   input += synapse0x1ec7600();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec6c70() {
   double input = input0x1ec6c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec7640() {
   double input = -1.20339;
   input += synapse0x1ec7980();
   input += synapse0x1ec79c0();
   input += synapse0x1ec7a00();
   input += synapse0x1ec7a40();
   input += synapse0x1ec7a80();
   input += synapse0x1ec7ac0();
   input += synapse0x1ec7b00();
   input += synapse0x1ec7b40();
   input += synapse0x1ec7b80();
   input += synapse0x1ec7bc0();
   input += synapse0x1ec7c00();
   input += synapse0x1ec7c40();
   input += synapse0x1ec7c80();
   input += synapse0x1ec7cc0();
   input += synapse0x1ec7d00();
   input += synapse0x1ec7d40();
   input += synapse0x1ec77d0();
   input += synapse0x1ec7810();
   input += synapse0x1ec7e90();
   input += synapse0x1ec7ed0();
   input += synapse0x1ec7f10();
   input += synapse0x1ec7f50();
   input += synapse0x1ec7f90();
   input += synapse0x1ec7fd0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec7640() {
   double input = input0x1ec7640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec8010() {
   double input = -0.394796;
   input += synapse0x1ec8350();
   input += synapse0x1ec8390();
   input += synapse0x1ec83d0();
   input += synapse0x1ec8410();
   input += synapse0x1ec8450();
   input += synapse0x1ec8490();
   input += synapse0x1ec84d0();
   input += synapse0x1ec8510();
   input += synapse0x1ec8550();
   input += synapse0x1ec8590();
   input += synapse0x1ec85d0();
   input += synapse0x1ec8610();
   input += synapse0x1ec8650();
   input += synapse0x1ec8690();
   input += synapse0x1ec86d0();
   input += synapse0x1ec8710();
   input += synapse0x1ec81a0();
   input += synapse0x1ec81e0();
   input += synapse0x1ec8860();
   input += synapse0x1ec88a0();
   input += synapse0x1ec88e0();
   input += synapse0x1ec8920();
   input += synapse0x1ec8960();
   input += synapse0x1ec89a0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec8010() {
   double input = input0x1ec8010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec89e0() {
   double input = -1.57457;
   input += synapse0x1ec8d20();
   input += synapse0x1ec8d60();
   input += synapse0x1ec8da0();
   input += synapse0x1ec8de0();
   input += synapse0x1ec8e20();
   input += synapse0x1ec8e60();
   input += synapse0x1ec8ea0();
   input += synapse0x1ec8ee0();
   input += synapse0x1ec8f20();
   input += synapse0x1ec8f60();
   input += synapse0x1ec8fa0();
   input += synapse0x1ec8fe0();
   input += synapse0x1ec9020();
   input += synapse0x1ec9060();
   input += synapse0x1ec90a0();
   input += synapse0x1ec90e0();
   input += synapse0x1ec8b70();
   input += synapse0x1ec8bb0();
   input += synapse0x1ec9230();
   input += synapse0x1ec9270();
   input += synapse0x1ec92b0();
   input += synapse0x1ec92f0();
   input += synapse0x1ec9330();
   input += synapse0x1ec9370();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec89e0() {
   double input = input0x1ec89e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec93b0() {
   double input = -0.686331;
   input += synapse0x1eb1e20();
   input += synapse0x1eb1e60();
   input += synapse0x1eb1ea0();
   input += synapse0x1eb1ee0();
   input += synapse0x1eb1f20();
   input += synapse0x1eb1f60();
   input += synapse0x1eb1fa0();
   input += synapse0x1eb1fe0();
   input += synapse0x1ec9b00();
   input += synapse0x1ec9b40();
   input += synapse0x1ec9b80();
   input += synapse0x1ec9bc0();
   input += synapse0x1ec9c00();
   input += synapse0x1ec9c40();
   input += synapse0x1ec9c80();
   input += synapse0x1ec9cc0();
   input += synapse0x1ec9540();
   input += synapse0x1ec9580();
   input += synapse0x1ec9e10();
   input += synapse0x1ec9e50();
   input += synapse0x1ec9e90();
   input += synapse0x1ec9ed0();
   input += synapse0x1ec9f10();
   input += synapse0x1ec9f50();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec93b0() {
   double input = input0x1ec93b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ec9f90() {
   double input = -0.0859145;
   input += synapse0x1eca2d0();
   input += synapse0x1eca310();
   input += synapse0x1eca350();
   input += synapse0x1eca390();
   input += synapse0x1eca3d0();
   input += synapse0x1eca410();
   input += synapse0x1eca450();
   input += synapse0x1eca490();
   input += synapse0x1eca4d0();
   input += synapse0x1eca510();
   input += synapse0x1eca550();
   input += synapse0x1eca590();
   input += synapse0x1eca5d0();
   input += synapse0x1eca610();
   input += synapse0x1eca650();
   input += synapse0x1eca690();
   input += synapse0x1eca120();
   input += synapse0x1eca160();
   input += synapse0x1eca7e0();
   input += synapse0x1eca820();
   input += synapse0x1eca860();
   input += synapse0x1eca8a0();
   input += synapse0x1eca8e0();
   input += synapse0x1eca920();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ec9f90() {
   double input = input0x1ec9f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1eca960() {
   double input = 0.618027;
   input += synapse0x1ecaca0();
   input += synapse0x1ecace0();
   input += synapse0x1ecad20();
   input += synapse0x1ecad60();
   input += synapse0x1ecada0();
   input += synapse0x1ecade0();
   input += synapse0x1ecae20();
   input += synapse0x1ecae60();
   input += synapse0x1ecaea0();
   input += synapse0x1ecaee0();
   input += synapse0x1ecaf20();
   input += synapse0x1ecaf60();
   input += synapse0x1ecafa0();
   input += synapse0x1ecafe0();
   input += synapse0x1ecb020();
   input += synapse0x1ecb060();
   input += synapse0x1ecaaf0();
   input += synapse0x1ecab30();
   input += synapse0x1ebb660();
   input += synapse0x1ebb6a0();
   input += synapse0x1ebb6e0();
   input += synapse0x1ebb720();
   input += synapse0x1ebb760();
   input += synapse0x1ebb7a0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1eca960() {
   double input = input0x1eca960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ebb7e0() {
   double input = 0.199593;
   input += synapse0x1ebbb20();
   input += synapse0x1ebbb60();
   input += synapse0x1ebbba0();
   input += synapse0x1ebbbe0();
   input += synapse0x1ebbc20();
   input += synapse0x1ebbc60();
   input += synapse0x1ebbca0();
   input += synapse0x1ebbce0();
   input += synapse0x1ebbd20();
   input += synapse0x1ebbd60();
   input += synapse0x1ebbda0();
   input += synapse0x1ebbde0();
   input += synapse0x1ebbe20();
   input += synapse0x1ebbe60();
   input += synapse0x1ebbea0();
   input += synapse0x1ebbee0();
   input += synapse0x1ebb970();
   input += synapse0x1ebb9b0();
   input += synapse0x1ebc030();
   input += synapse0x1ebc070();
   input += synapse0x1ebc0b0();
   input += synapse0x1ebc0f0();
   input += synapse0x1ebc130();
   input += synapse0x1ebc170();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ebb7e0() {
   double input = input0x1ebb7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ebc1b0() {
   double input = 0.64384;
   input += synapse0x1ebc4f0();
   input += synapse0x1ebc530();
   input += synapse0x1ebc570();
   input += synapse0x1ebc5b0();
   input += synapse0x1ebc5f0();
   input += synapse0x1ebc630();
   input += synapse0x1ebc670();
   input += synapse0x1ebc6b0();
   input += synapse0x1ebc6f0();
   input += synapse0x1ebc730();
   input += synapse0x1ebc770();
   input += synapse0x1ebc7b0();
   input += synapse0x1ebc7f0();
   input += synapse0x1ebc830();
   input += synapse0x1ebc870();
   input += synapse0x1ebc8b0();
   input += synapse0x1ebc340();
   input += synapse0x1ebc380();
   input += synapse0x1ebca00();
   input += synapse0x1ebca40();
   input += synapse0x1ebca80();
   input += synapse0x1ebcac0();
   input += synapse0x1ebcb00();
   input += synapse0x1ebcb40();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ebc1b0() {
   double input = input0x1ebc1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ebcb80() {
   double input = 0.147101;
   input += synapse0x1ebcec0();
   input += synapse0x1ebcf00();
   input += synapse0x1ebcf40();
   input += synapse0x1ebcf80();
   input += synapse0x1ebcfc0();
   input += synapse0x1ebd000();
   input += synapse0x1ebd040();
   input += synapse0x1ebd080();
   input += synapse0x1ebd0c0();
   input += synapse0x1ebd100();
   input += synapse0x1ebd140();
   input += synapse0x1ebd180();
   input += synapse0x1ebd1c0();
   input += synapse0x1ebd200();
   input += synapse0x1ebd240();
   input += synapse0x1ebd280();
   input += synapse0x1ebcd10();
   input += synapse0x1ebcd50();
   input += synapse0x1ebd3d0();
   input += synapse0x1ebd410();
   input += synapse0x1ebd450();
   input += synapse0x1ebd490();
   input += synapse0x1ebd4d0();
   input += synapse0x1ebd510();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ebcb80() {
   double input = input0x1ebcb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ecf1c0() {
   double input = -0.408945;
   input += synapse0x1ecf3e0();
   input += synapse0x1ecf420();
   input += synapse0x1ecf460();
   input += synapse0x1ecf4a0();
   input += synapse0x1ecf4e0();
   input += synapse0x1ecf520();
   input += synapse0x1ecf560();
   input += synapse0x1ecf5a0();
   input += synapse0x1ecf5e0();
   input += synapse0x1ecf620();
   input += synapse0x1ecf660();
   input += synapse0x1ecf6a0();
   input += synapse0x1ecf6e0();
   input += synapse0x1ecf720();
   input += synapse0x1ecf760();
   input += synapse0x1ecf7a0();
   input += synapse0x1ebd550();
   input += synapse0x1ebd590();
   input += synapse0x1ecf8f0();
   input += synapse0x1ecf930();
   input += synapse0x1ecf970();
   input += synapse0x1ecf9b0();
   input += synapse0x1ecf9f0();
   input += synapse0x1ecfa30();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ecf1c0() {
   double input = input0x1ecf1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ecfa70() {
   double input = -0.69396;
   input += synapse0x1ecfdb0();
   input += synapse0x1ecfdf0();
   input += synapse0x1ecfe30();
   input += synapse0x1ecfe70();
   input += synapse0x1ecfeb0();
   input += synapse0x1ecfef0();
   input += synapse0x1ecff30();
   input += synapse0x1ecff70();
   input += synapse0x1ecffb0();
   input += synapse0x1ecfff0();
   input += synapse0x1ed0030();
   input += synapse0x1ed0070();
   input += synapse0x1ed00b0();
   input += synapse0x1ed00f0();
   input += synapse0x1ed0130();
   input += synapse0x1ed0170();
   input += synapse0x1ecfc00();
   input += synapse0x1ecfc40();
   input += synapse0x1ed02c0();
   input += synapse0x1ed0300();
   input += synapse0x1ed0340();
   input += synapse0x1ed0380();
   input += synapse0x1ed03c0();
   input += synapse0x1ed0400();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ecfa70() {
   double input = input0x1ecfa70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ed0440() {
   double input = -2.10624;
   input += synapse0x1ed0780();
   input += synapse0x1ed07c0();
   input += synapse0x1ed0800();
   input += synapse0x1ed0840();
   input += synapse0x1ed0880();
   input += synapse0x1ed08c0();
   input += synapse0x1ed0900();
   input += synapse0x1ed0940();
   input += synapse0x1ed0980();
   input += synapse0x1ed09c0();
   input += synapse0x1ed0a00();
   input += synapse0x1ed0a40();
   input += synapse0x1ed0a80();
   input += synapse0x1ed0ac0();
   input += synapse0x1ed0b00();
   input += synapse0x1ed0b40();
   input += synapse0x1ed05d0();
   input += synapse0x1ed0610();
   input += synapse0x1ed0c90();
   input += synapse0x1ed0cd0();
   input += synapse0x1ed0d10();
   input += synapse0x1ed0d50();
   input += synapse0x1ed0d90();
   input += synapse0x1ed0dd0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ed0440() {
   double input = input0x1ed0440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ed0e10() {
   double input = 6.70615;
   input += synapse0x1ed1150();
   input += synapse0x1ed1190();
   input += synapse0x1ed11d0();
   input += synapse0x1ed1210();
   input += synapse0x1ed1250();
   input += synapse0x1ed1290();
   input += synapse0x1ed12d0();
   input += synapse0x1ed1310();
   input += synapse0x1ed1350();
   input += synapse0x1ed1390();
   input += synapse0x1ed13d0();
   input += synapse0x1ed1410();
   input += synapse0x1ed1450();
   input += synapse0x1ed1490();
   input += synapse0x1ed14d0();
   input += synapse0x1ed1510();
   input += synapse0x1ed0fa0();
   input += synapse0x1ed0fe0();
   input += synapse0x1ed1660();
   input += synapse0x1ed16a0();
   input += synapse0x1ed16e0();
   input += synapse0x1ed1720();
   input += synapse0x1ed1760();
   input += synapse0x1ed17a0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ed0e10() {
   double input = input0x1ed0e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ed8010() {
   double input = -0.735348;
   input += synapse0x1eadd30();
   input += synapse0x1eadd70();
   input += synapse0x1eaf250();
   input += synapse0x1eaf290();
   input += synapse0x1eafc20();
   input += synapse0x1eafc60();
   input += synapse0x1eb09f0();
   input += synapse0x1eb0a30();
   input += synapse0x1eb13c0();
   input += synapse0x1eb1400();
   input += synapse0x1eb1d90();
   input += synapse0x1eb1dd0();
   input += synapse0x1eb2870();
   input += synapse0x1eb28b0();
   input += synapse0x1eb3240();
   input += synapse0x1eb3280();
   input += synapse0x1eb0320();
   input += synapse0x1eb0360();
   input += synapse0x1eb4df0();
   input += synapse0x1eb4e30();
   input += synapse0x1eb57c0();
   input += synapse0x1eb5800();
   input += synapse0x1eb6190();
   input += synapse0x1eb61d0();
   input += synapse0x1eb6b60();
   input += synapse0x1eb6ba0();
   input += synapse0x1eaad40();
   input += synapse0x1eaad80();
   input += synapse0x1eb8c50();
   input += synapse0x1eb8c90();
   input += synapse0x1eb9620();
   input += synapse0x1eb9660();
   input += synapse0x1eb9ff0();
   input += synapse0x1eba030();
   input += synapse0x1eba9c0();
   input += synapse0x1ebaa00();
   input += synapse0x1ebb390();
   input += synapse0x1ebb3d0();
   input += synapse0x1eb3ee0();
   input += synapse0x1eb3f20();
   input += synapse0x1ebd790();
   input += synapse0x1ebd7d0();
   input += synapse0x1ebe120();
   input += synapse0x1ebe160();
   input += synapse0x1ebeaf0();
   input += synapse0x1ebeb30();
   input += synapse0x1ebf4c0();
   input += synapse0x1ebf500();
   input += synapse0x1ebfe90();
   input += synapse0x1ebfed0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ed8010() {
   double input = input0x1ed8010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ed83b0() {
   double input = 0.0120749;
   input += synapse0x1ec25d0();
   input += synapse0x1ec2610();
   input += synapse0x1eb7b90();
   input += synapse0x1eb7bd0();
   input += synapse0x1ec51b0();
   input += synapse0x1ec51f0();
   input += synapse0x1ec5b80();
   input += synapse0x1ec5bc0();
   input += synapse0x1ec6550();
   input += synapse0x1ec6590();
   input += synapse0x1ec6f20();
   input += synapse0x1ec6f60();
   input += synapse0x1ec78f0();
   input += synapse0x1ec7930();
   input += synapse0x1ec82c0();
   input += synapse0x1ec8300();
   input += synapse0x1ec8c90();
   input += synapse0x1ec8cd0();
   input += synapse0x1ec9660();
   input += synapse0x1ec96a0();
   input += synapse0x1eca240();
   input += synapse0x1eca280();
   input += synapse0x1ecac10();
   input += synapse0x1ecac50();
   input += synapse0x1ebba90();
   input += synapse0x1ebbad0();
   input += synapse0x1ebc460();
   input += synapse0x1ebc4a0();
   input += synapse0x1ebce30();
   input += synapse0x1ebce70();
   input += synapse0x1ecf350();
   input += synapse0x1ecf390();
   input += synapse0x1ecfd20();
   input += synapse0x1ecfd60();
   input += synapse0x1ed06f0();
   input += synapse0x1ed0730();
   input += synapse0x1ed10c0();
   input += synapse0x1ed1100();
   input += synapse0x1eacff0();
   input += synapse0x1ead030();
   input += synapse0x1ec0860();
   input += synapse0x1ec08a0();
   input += synapse0x1ed17e0();
   input += synapse0x1ed1820();
   input += synapse0x1ed1860();
   input += synapse0x1ed18a0();
   input += synapse0x1ed8750();
   input += synapse0x1ed8790();
   input += synapse0x1ed87d0();
   input += synapse0x1ed8810();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ed83b0() {
   double input = input0x1ed83b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ed8850() {
   double input = -1.23607;
   input += synapse0x1ed8b90();
   input += synapse0x1ed8bd0();
   input += synapse0x1ed8c10();
   input += synapse0x1ed8c50();
   input += synapse0x1ed8c90();
   input += synapse0x1ed8cd0();
   input += synapse0x1ed8d10();
   input += synapse0x1ed8d50();
   input += synapse0x1ed8d90();
   input += synapse0x1ed8dd0();
   input += synapse0x1ed8e10();
   input += synapse0x1ed8e50();
   input += synapse0x1ed8e90();
   input += synapse0x1ed8ed0();
   input += synapse0x1ed8f10();
   input += synapse0x1ed8f50();
   input += synapse0x1ed89e0();
   input += synapse0x1ed8a20();
   input += synapse0x1ed90a0();
   input += synapse0x1ed90e0();
   input += synapse0x1ed9120();
   input += synapse0x1ed9160();
   input += synapse0x1ed91a0();
   input += synapse0x1ed91e0();
   input += synapse0x1ed9220();
   input += synapse0x1ed9260();
   input += synapse0x1ed92a0();
   input += synapse0x1ed92e0();
   input += synapse0x1ed9320();
   input += synapse0x1ed9360();
   input += synapse0x1ed93a0();
   input += synapse0x1ed93e0();
   input += synapse0x1ed8f90();
   input += synapse0x1ed8fd0();
   input += synapse0x1ed9010();
   input += synapse0x1ed9050();
   input += synapse0x1ed9630();
   input += synapse0x1ed9670();
   input += synapse0x1ed96b0();
   input += synapse0x1ed96f0();
   input += synapse0x1ed9730();
   input += synapse0x1ed9770();
   input += synapse0x1ed97b0();
   input += synapse0x1ed97f0();
   input += synapse0x1ed9830();
   input += synapse0x1ed9870();
   input += synapse0x1ed98b0();
   input += synapse0x1ed98f0();
   input += synapse0x1ed9930();
   input += synapse0x1ed9970();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ed8850() {
   double input = input0x1ed8850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1ed99b0() {
   double input = -0.176911;
   input += synapse0x1ed9cf0();
   input += synapse0x1ed9d30();
   input += synapse0x1ed9d70();
   input += synapse0x1ed9db0();
   input += synapse0x1ed9df0();
   input += synapse0x1ed9e30();
   input += synapse0x1ed9e70();
   input += synapse0x1ed9eb0();
   input += synapse0x1ed9ef0();
   input += synapse0x1ed9f30();
   input += synapse0x1ed9f70();
   input += synapse0x1ed9fb0();
   input += synapse0x1ed9ff0();
   input += synapse0x1eda030();
   input += synapse0x1eda070();
   input += synapse0x1eda0b0();
   input += synapse0x1ed9b40();
   input += synapse0x1ed9b80();
   input += synapse0x1eda200();
   input += synapse0x1eda240();
   input += synapse0x1eda280();
   input += synapse0x1eda2c0();
   input += synapse0x1eda300();
   input += synapse0x1eda340();
   input += synapse0x1eda380();
   input += synapse0x1eda3c0();
   input += synapse0x1eda400();
   input += synapse0x1eda440();
   input += synapse0x1eda480();
   input += synapse0x1eda4c0();
   input += synapse0x1eda500();
   input += synapse0x1eda540();
   input += synapse0x1eda0f0();
   input += synapse0x1eda130();
   input += synapse0x1eda170();
   input += synapse0x1eda1b0();
   input += synapse0x1eda790();
   input += synapse0x1eda7d0();
   input += synapse0x1eda810();
   input += synapse0x1eda850();
   input += synapse0x1eda890();
   input += synapse0x1eda8d0();
   input += synapse0x1eda910();
   input += synapse0x1eda950();
   input += synapse0x1eda990();
   input += synapse0x1eda9d0();
   input += synapse0x1edaa10();
   input += synapse0x1edaa50();
   input += synapse0x1edaa90();
   input += synapse0x1edaad0();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1ed99b0() {
   double input = input0x1ed99b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1edab10() {
   double input = -0.597736;
   input += synapse0x1edae50();
   input += synapse0x1edae90();
   input += synapse0x1edaed0();
   input += synapse0x1edaf10();
   input += synapse0x1edaf50();
   input += synapse0x1edaf90();
   input += synapse0x1edafd0();
   input += synapse0x1edb010();
   input += synapse0x1edb050();
   input += synapse0x1edb090();
   input += synapse0x1edb0d0();
   input += synapse0x1edb110();
   input += synapse0x1edb150();
   input += synapse0x1edb190();
   input += synapse0x1edb1d0();
   input += synapse0x1edb210();
   input += synapse0x1edaca0();
   input += synapse0x1edace0();
   input += synapse0x1edb360();
   input += synapse0x1edb3a0();
   input += synapse0x1edb3e0();
   input += synapse0x1edb420();
   input += synapse0x1edb460();
   input += synapse0x1edb4a0();
   input += synapse0x1edb4e0();
   input += synapse0x1edb520();
   input += synapse0x1edb560();
   input += synapse0x1edb5a0();
   input += synapse0x1edb5e0();
   input += synapse0x1edb620();
   input += synapse0x1edb660();
   input += synapse0x1edb6a0();
   input += synapse0x1edb250();
   input += synapse0x1edb290();
   input += synapse0x1edb2d0();
   input += synapse0x1edb310();
   input += synapse0x1edb8f0();
   input += synapse0x1edb930();
   input += synapse0x1edb970();
   input += synapse0x1edb9b0();
   input += synapse0x1edb9f0();
   input += synapse0x1edba30();
   input += synapse0x1edba70();
   input += synapse0x1edbab0();
   input += synapse0x1edbaf0();
   input += synapse0x1edbb30();
   input += synapse0x1edbb70();
   input += synapse0x1edbbb0();
   input += synapse0x1edbbf0();
   input += synapse0x1edbc30();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1edab10() {
   double input = input0x1edab10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::input0x1edbc70() {
   double input = 8.32098;
   input += synapse0x1edbe90();
   input += synapse0x1edbed0();
   input += synapse0x1edbf10();
   input += synapse0x1edbf50();
   input += synapse0x1edbf90();
   return input;
}

double NNfunction_ns_chiPlus1_cL::neuron0x1edbc70() {
   double input = input0x1edbc70();
   return (input * 1)+0;
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea7db0() {
   return (neuron0x1ea7e30()*-0.206801);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea7df0() {
   return (neuron0x1ea80e0()*-0.08678);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead080() {
   return (neuron0x1ea8420()*0.0690009);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead0c0() {
   return (neuron0x1ea8760()*0.411513);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead100() {
   return (neuron0x1ea8aa0()*-0.245814);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead140() {
   return (neuron0x1ea8de0()*0.00703903);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead180() {
   return (neuron0x1ea9120()*0.302382);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead1c0() {
   return (neuron0x1ea9460()*0.139912);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead200() {
   return (neuron0x1ea97a0()*0.0550895);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead240() {
   return (neuron0x1ea9ae0()*-0.040659);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead280() {
   return (neuron0x1ea9e20()*0.955037);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead2c0() {
   return (neuron0x1eaa160()*0.339539);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead300() {
   return (neuron0x1eaa4a0()*-0.388861);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead340() {
   return (neuron0x1eaa7e0()*0.0326361);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead380() {
   return (neuron0x1eaab20()*0.0185629);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead3c0() {
   return (neuron0x1eaae60()*-0.00238058);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea7d20() {
   return (neuron0x1eab1a0()*-0.121861);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea7d60() {
   return (neuron0x1eab700()*0.00511648);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c62ef0() {
   return (neuron0x1eab920()*0.211136);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c62f30() {
   return (neuron0x1eabc60()*0.252366);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead620() {
   return (neuron0x1eabfa0()*-0.0442061);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead660() {
   return (neuron0x1eac2e0()*-0.286638);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead6a0() {
   return (neuron0x1eac620()*-0.151298);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead6e0() {
   return (neuron0x1eac960()*0.233296);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eada60() {
   return (neuron0x1ea7e30()*-0.0278144);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadaa0() {
   return (neuron0x1ea80e0()*0.0047687);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadae0() {
   return (neuron0x1ea8420()*0.728998);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadb20() {
   return (neuron0x1ea8760()*0.00530807);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadb60() {
   return (neuron0x1ea8aa0()*-0.0296541);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadba0() {
   return (neuron0x1ea8de0()*-0.00422494);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadbe0() {
   return (neuron0x1ea9120()*0.00527451);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadc20() {
   return (neuron0x1ea9460()*0.0387834);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadc60() {
   return (neuron0x1ea97a0()*0.0123064);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead510() {
   return (neuron0x1ea9ae0()*0.00617445);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead550() {
   return (neuron0x1ea9e20()*-0.00203607);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead590() {
   return (neuron0x1eaa160()*0.0128278);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead5d0() {
   return (neuron0x1eaa4a0()*-0.749922);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadeb0() {
   return (neuron0x1eaa7e0()*-0.000883504);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadef0() {
   return (neuron0x1eaab20()*-0.0160318);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadf30() {
   return (neuron0x1eaae60()*-0.0131864);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead8b0() {
   return (neuron0x1eab1a0()*-0.000477961);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead8f0() {
   return (neuron0x1eab700()*-0.00104855);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae080() {
   return (neuron0x1eab920()*0.00273659);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae0c0() {
   return (neuron0x1eabc60()*0.0118563);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae100() {
   return (neuron0x1eabfa0()*0.000340329);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae140() {
   return (neuron0x1eac2e0()*-0.0132571);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae180() {
   return (neuron0x1eac620()*0.0102921);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae1c0() {
   return (neuron0x1eac960()*-0.025471);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae540() {
   return (neuron0x1ea7e30()*-0.232072);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae580() {
   return (neuron0x1ea80e0()*-0.0216825);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae5c0() {
   return (neuron0x1ea8420()*-0.690657);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae600() {
   return (neuron0x1ea8760()*1.14264);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae640() {
   return (neuron0x1ea8aa0()*-0.296037);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae680() {
   return (neuron0x1ea8de0()*-0.314726);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae6c0() {
   return (neuron0x1ea9120()*0.0319224);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae700() {
   return (neuron0x1ea9460()*-0.152611);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae740() {
   return (neuron0x1ea97a0()*0.000391983);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae780() {
   return (neuron0x1ea9ae0()*-0.208426);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae7c0() {
   return (neuron0x1ea9e20()*0.165243);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae800() {
   return (neuron0x1eaa160()*-0.0628722);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae840() {
   return (neuron0x1eaa4a0()*-0.00764471);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae880() {
   return (neuron0x1eaa7e0()*0.133494);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae8c0() {
   return (neuron0x1eaab20()*-0.122629);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae900() {
   return (neuron0x1eaae60()*0.0338708);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae390() {
   return (neuron0x1eab1a0()*-0.0623249);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eae3d0() {
   return (neuron0x1eab700()*0.219851);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1e96ea0() {
   return (neuron0x1eab920()*0.243948);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c70df0() {
   return (neuron0x1eabc60()*0.0525361);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c70e30() {
   return (neuron0x1eabfa0()*0.218948);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1d8c340() {
   return (neuron0x1eac2e0()*0.0763037);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1d8c380() {
   return (neuron0x1eac620()*0.0248344);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea7b90() {
   return (neuron0x1eac960()*-0.0806935);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c716e0() {
   return (neuron0x1ea7e30()*0.00136376);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaddc0() {
   return (neuron0x1ea80e0()*-0.0269155);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eade00() {
   return (neuron0x1ea8420()*0.305726);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eade40() {
   return (neuron0x1ea8760()*-0.237053);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaea50() {
   return (neuron0x1ea8aa0()*-0.557806);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaea90() {
   return (neuron0x1ea8de0()*0.106012);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaead0() {
   return (neuron0x1ea9120()*-0.0183735);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaeb10() {
   return (neuron0x1ea9460()*0.13326);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaeb50() {
   return (neuron0x1ea97a0()*-0.0501108);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaeb90() {
   return (neuron0x1ea9ae0()*0.00676239);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaebd0() {
   return (neuron0x1ea9e20()*-0.0116753);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaec10() {
   return (neuron0x1eaa160()*0.0336285);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaec50() {
   return (neuron0x1eaa4a0()*0.0192188);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaec90() {
   return (neuron0x1eaa7e0()*-0.053492);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaecd0() {
   return (neuron0x1eaab20()*0.217659);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaed10() {
   return (neuron0x1eaae60()*0.0212128);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea7bd0() {
   return (neuron0x1eab1a0()*-0.10816);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea7c10() {
   return (neuron0x1eab700()*0.0224984);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea7c50() {
   return (neuron0x1eab920()*0.0706928);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaee60() {
   return (neuron0x1eabc60()*0.0589855);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaeea0() {
   return (neuron0x1eabfa0()*-0.00603774);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaeee0() {
   return (neuron0x1eac2e0()*-0.0292434);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaef20() {
   return (neuron0x1eac620()*0.0812601);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaef60() {
   return (neuron0x1eac960()*-0.0771942);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf2e0() {
   return (neuron0x1ea7e30()*-0.0646464);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf320() {
   return (neuron0x1ea80e0()*-0.0700545);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf360() {
   return (neuron0x1ea8420()*0.477531);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf3a0() {
   return (neuron0x1ea8760()*-0.968299);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf3e0() {
   return (neuron0x1ea8aa0()*-0.110071);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf420() {
   return (neuron0x1ea8de0()*0.045672);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf460() {
   return (neuron0x1ea9120()*0.10228);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf4a0() {
   return (neuron0x1ea9460()*-0.508263);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf4e0() {
   return (neuron0x1ea97a0()*-0.00350893);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf520() {
   return (neuron0x1ea9ae0()*-0.0417552);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf560() {
   return (neuron0x1ea9e20()*0.0280494);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf5a0() {
   return (neuron0x1eaa160()*-0.0896495);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf5e0() {
   return (neuron0x1eaa4a0()*0.226707);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf620() {
   return (neuron0x1eaa7e0()*-0.0744844);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf660() {
   return (neuron0x1eaab20()*0.00427496);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf6a0() {
   return (neuron0x1eaae60()*0.0871844);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf130() {
   return (neuron0x1eab1a0()*-0.138455);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf170() {
   return (neuron0x1eab700()*0.0863548);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf7f0() {
   return (neuron0x1eab920()*0.134644);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf830() {
   return (neuron0x1eabc60()*0.036296);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf870() {
   return (neuron0x1eabfa0()*0.0625425);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf8b0() {
   return (neuron0x1eac2e0()*0.0938312);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf8f0() {
   return (neuron0x1eac620()*0.00888081);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf930() {
   return (neuron0x1eac960()*0.00278581);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafcb0() {
   return (neuron0x1ea7e30()*0.000670732);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafcf0() {
   return (neuron0x1ea80e0()*0.0036409);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafd30() {
   return (neuron0x1ea8420()*-0.146205);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafd70() {
   return (neuron0x1ea8760()*-0.0765047);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafdb0() {
   return (neuron0x1ea8aa0()*-0.00344803);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafdf0() {
   return (neuron0x1ea8de0()*0.00649499);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafe30() {
   return (neuron0x1ea9120()*-0.0180689);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafe70() {
   return (neuron0x1ea9460()*0.0208711);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafeb0() {
   return (neuron0x1ea97a0()*0.00378095);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c71140() {
   return (neuron0x1ea9ae0()*0.00963761);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c71180() {
   return (neuron0x1ea9e20()*0.00741694);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c711c0() {
   return (neuron0x1eaa160()*0.0327606);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c71200() {
   return (neuron0x1eaa4a0()*4.71617);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c71240() {
   return (neuron0x1eaa7e0()*0.0431193);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c71280() {
   return (neuron0x1eaab20()*0.000619876);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c712c0() {
   return (neuron0x1eaae60()*-0.00153639);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafb00() {
   return (neuron0x1eab1a0()*0.0524241);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafb40() {
   return (neuron0x1eab700()*0.0136074);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c71410() {
   return (neuron0x1eab920()*0.0091644);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c71450() {
   return (neuron0x1eabc60()*0.00945041);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c71490() {
   return (neuron0x1eabfa0()*0.0102479);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c714d0() {
   return (neuron0x1eac2e0()*0.00937696);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c71510() {
   return (neuron0x1eac620()*0.00335471);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0700() {
   return (neuron0x1eac960()*-0.0176038);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0a80() {
   return (neuron0x1ea7e30()*0.051669);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0ac0() {
   return (neuron0x1ea80e0()*0.0363137);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0b00() {
   return (neuron0x1ea8420()*0.859728);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0b40() {
   return (neuron0x1ea8760()*0.927285);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0b80() {
   return (neuron0x1ea8aa0()*-0.0597481);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0bc0() {
   return (neuron0x1ea8de0()*0.0289935);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0c00() {
   return (neuron0x1ea9120()*0.02101);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0c40() {
   return (neuron0x1ea9460()*-0.0143425);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0c80() {
   return (neuron0x1ea97a0()*-0.0067847);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0cc0() {
   return (neuron0x1ea9ae0()*-0.0831221);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0d00() {
   return (neuron0x1ea9e20()*0.039335);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0d40() {
   return (neuron0x1eaa160()*-0.143695);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0d80() {
   return (neuron0x1eaa4a0()*0.254669);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0dc0() {
   return (neuron0x1eaa7e0()*0.043001);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0e00() {
   return (neuron0x1eaab20()*-0.0508554);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0e40() {
   return (neuron0x1eaae60()*0.0289382);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb08d0() {
   return (neuron0x1eab1a0()*0.0822466);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0910() {
   return (neuron0x1eab700()*0.0396312);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0f90() {
   return (neuron0x1eab920()*-0.0890992);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0fd0() {
   return (neuron0x1eabc60()*-0.046963);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1010() {
   return (neuron0x1eabfa0()*-0.0104386);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1050() {
   return (neuron0x1eac2e0()*-0.0146045);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1090() {
   return (neuron0x1eac620()*0.0116285);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb10d0() {
   return (neuron0x1eac960()*0.094848);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1450() {
   return (neuron0x1ea7e30()*-0.0497706);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1490() {
   return (neuron0x1ea80e0()*0.0615662);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb14d0() {
   return (neuron0x1ea8420()*0.259129);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1510() {
   return (neuron0x1ea8760()*-0.507238);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1550() {
   return (neuron0x1ea8aa0()*0.0577085);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1590() {
   return (neuron0x1ea8de0()*-0.0316127);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb15d0() {
   return (neuron0x1ea9120()*-0.756091);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1610() {
   return (neuron0x1ea9460()*-0.0102706);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1650() {
   return (neuron0x1ea97a0()*-0.0605876);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1690() {
   return (neuron0x1ea9ae0()*-0.0237801);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb16d0() {
   return (neuron0x1ea9e20()*-0.143607);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1710() {
   return (neuron0x1eaa160()*-0.409022);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1750() {
   return (neuron0x1eaa4a0()*0.414365);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1790() {
   return (neuron0x1eaa7e0()*0.182157);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb17d0() {
   return (neuron0x1eaab20()*0.0966541);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1810() {
   return (neuron0x1eaae60()*0.0403105);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb12a0() {
   return (neuron0x1eab1a0()*0.306264);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb12e0() {
   return (neuron0x1eab700()*-0.0762531);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1960() {
   return (neuron0x1eab920()*-0.139666);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb19a0() {
   return (neuron0x1eabc60()*-0.143435);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb19e0() {
   return (neuron0x1eabfa0()*0.00234575);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1a20() {
   return (neuron0x1eac2e0()*0.0886928);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1a60() {
   return (neuron0x1eac620()*0.064292);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1aa0() {
   return (neuron0x1eac960()*-0.10057);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eab5f0() {
   return (neuron0x1ea7e30()*0.157806);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eab630() {
   return (neuron0x1ea80e0()*0.019161);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eab670() {
   return (neuron0x1ea8420()*0.330356);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eab6b0() {
   return (neuron0x1ea8760()*0.0788528);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2030() {
   return (neuron0x1ea8aa0()*-0.0250399);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2070() {
   return (neuron0x1ea8de0()*-0.0371939);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb20b0() {
   return (neuron0x1ea9120()*-0.0180551);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb20f0() {
   return (neuron0x1ea9460()*-0.00182187);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2130() {
   return (neuron0x1ea97a0()*0.0221865);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2170() {
   return (neuron0x1ea9ae0()*0.0183265);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb21b0() {
   return (neuron0x1ea9e20()*0.0012516);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb21f0() {
   return (neuron0x1eaa160()*-0.00149387);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2230() {
   return (neuron0x1eaa4a0()*-0.382413);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2270() {
   return (neuron0x1eaa7e0()*0.0250197);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb22b0() {
   return (neuron0x1eaab20()*-0.00653005);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb22f0() {
   return (neuron0x1eaae60()*0.000149638);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1c70() {
   return (neuron0x1eab1a0()*0.0341981);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1cb0() {
   return (neuron0x1eab700()*0.0122218);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2440() {
   return (neuron0x1eab920()*0.0460752);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2480() {
   return (neuron0x1eabc60()*0.0422488);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb24c0() {
   return (neuron0x1eabfa0()*-0.0220486);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2500() {
   return (neuron0x1eac2e0()*-0.0521912);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2540() {
   return (neuron0x1eac620()*-0.00397915);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2580() {
   return (neuron0x1eac960()*0.879868);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2900() {
   return (neuron0x1ea7e30()*0.0231455);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2940() {
   return (neuron0x1ea80e0()*-0.00791762);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2980() {
   return (neuron0x1ea8420()*-3.81715);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb29c0() {
   return (neuron0x1ea8760()*0.0372071);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2a00() {
   return (neuron0x1ea8aa0()*-0.00891811);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2a40() {
   return (neuron0x1ea8de0()*-0.0102401);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2a80() {
   return (neuron0x1ea9120()*-0.00924042);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2ac0() {
   return (neuron0x1ea9460()*-0.00665031);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2b00() {
   return (neuron0x1ea97a0()*-0.00709026);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2b40() {
   return (neuron0x1ea9ae0()*-0.00681779);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2b80() {
   return (neuron0x1ea9e20()*-0.00882484);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2bc0() {
   return (neuron0x1eaa160()*-0.00188643);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2c00() {
   return (neuron0x1eaa4a0()*0.0465642);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2c40() {
   return (neuron0x1eaa7e0()*-0.00605163);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2c80() {
   return (neuron0x1eaab20()*-0.00852358);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2cc0() {
   return (neuron0x1eaae60()*-0.00586345);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2750() {
   return (neuron0x1eab1a0()*0.00544525);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2790() {
   return (neuron0x1eab700()*-0.0161214);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2e10() {
   return (neuron0x1eab920()*-0.00431456);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2e50() {
   return (neuron0x1eabc60()*0.00575959);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2e90() {
   return (neuron0x1eabfa0()*-0.029078);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2ed0() {
   return (neuron0x1eac2e0()*0.00250992);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2f10() {
   return (neuron0x1eac620()*-0.00395239);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2f50() {
   return (neuron0x1eac960()*5.42423);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb32d0() {
   return (neuron0x1ea7e30()*0.000833744);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3310() {
   return (neuron0x1ea80e0()*0.00857864);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3350() {
   return (neuron0x1ea8420()*0.298952);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3390() {
   return (neuron0x1ea8760()*0.78665);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb33d0() {
   return (neuron0x1ea8aa0()*-0.0374873);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3410() {
   return (neuron0x1ea8de0()*-0.0411828);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3450() {
   return (neuron0x1ea9120()*-0.158126);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3490() {
   return (neuron0x1ea9460()*0.125291);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb34d0() {
   return (neuron0x1ea97a0()*-0.00750139);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3510() {
   return (neuron0x1ea9ae0()*-0.117532);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3550() {
   return (neuron0x1ea9e20()*0.0478631);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3590() {
   return (neuron0x1eaa160()*0.440437);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb35d0() {
   return (neuron0x1eaa4a0()*-0.382356);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3610() {
   return (neuron0x1eaa7e0()*-0.197134);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3650() {
   return (neuron0x1eaab20()*-0.0675561);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3690() {
   return (neuron0x1eaae60()*-0.0404789);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3120() {
   return (neuron0x1eab1a0()*-0.215151);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3160() {
   return (neuron0x1eab700()*0.126668);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafef0() {
   return (neuron0x1eab920()*0.0963241);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaff30() {
   return (neuron0x1eabc60()*0.131119);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaff70() {
   return (neuron0x1eabfa0()*0.00584009);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaffb0() {
   return (neuron0x1eac2e0()*-0.0469684);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafff0() {
   return (neuron0x1eac620()*0.0107699);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0030() {
   return (neuron0x1eac960()*0.0261977);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb03b0() {
   return (neuron0x1ea7e30()*0.254635);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb03f0() {
   return (neuron0x1ea80e0()*0.331906);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0430() {
   return (neuron0x1ea8420()*-0.405647);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0470() {
   return (neuron0x1ea8760()*-0.934909);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb04b0() {
   return (neuron0x1ea8aa0()*0.0571097);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb04f0() {
   return (neuron0x1ea8de0()*-0.139028);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0530() {
   return (neuron0x1ea9120()*-0.0306222);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0570() {
   return (neuron0x1ea9460()*0.0529805);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb05b0() {
   return (neuron0x1ea97a0()*0.117643);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb05f0() {
   return (neuron0x1ea9ae0()*0.133899);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0630() {
   return (neuron0x1ea9e20()*0.146502);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0670() {
   return (neuron0x1eaa160()*0.135837);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb06b0() {
   return (neuron0x1eaa4a0()*-0.0199635);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb47f0() {
   return (neuron0x1eaa7e0()*0.097967);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4830() {
   return (neuron0x1eaab20()*-0.176745);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4870() {
   return (neuron0x1eaae60()*-0.197205);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0200() {
   return (neuron0x1eab1a0()*0.0643288);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0240() {
   return (neuron0x1eab700()*0.0250984);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb49c0() {
   return (neuron0x1eab920()*-0.00434067);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4a00() {
   return (neuron0x1eabc60()*0.0451983);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4a40() {
   return (neuron0x1eabfa0()*0.0651558);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4a80() {
   return (neuron0x1eac2e0()*0.0820713);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4ac0() {
   return (neuron0x1eac620()*-0.00874307);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4b00() {
   return (neuron0x1eac960()*-0.282924);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4e80() {
   return (neuron0x1ea7e30()*0.0969729);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4ec0() {
   return (neuron0x1ea80e0()*0.0292797);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4f00() {
   return (neuron0x1ea8420()*0.220888);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4f40() {
   return (neuron0x1ea8760()*-0.668766);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4f80() {
   return (neuron0x1ea8aa0()*0.297062);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4fc0() {
   return (neuron0x1ea8de0()*0.135361);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5000() {
   return (neuron0x1ea9120()*-0.0550286);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5040() {
   return (neuron0x1ea9460()*-0.00918843);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5080() {
   return (neuron0x1ea97a0()*0.00311851);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb50c0() {
   return (neuron0x1ea9ae0()*0.0527354);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5100() {
   return (neuron0x1ea9e20()*-0.0113178);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5140() {
   return (neuron0x1eaa160()*0.120594);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5180() {
   return (neuron0x1eaa4a0()*0.296114);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb51c0() {
   return (neuron0x1eaa7e0()*-0.338882);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5200() {
   return (neuron0x1eaab20()*0.101077);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5240() {
   return (neuron0x1eaae60()*0.108391);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4cd0() {
   return (neuron0x1eab1a0()*-0.512979);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4d10() {
   return (neuron0x1eab700()*0.064324);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5390() {
   return (neuron0x1eab920()*0.116473);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb53d0() {
   return (neuron0x1eabc60()*0.0518969);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5410() {
   return (neuron0x1eabfa0()*-0.0471623);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5450() {
   return (neuron0x1eac2e0()*0.00811488);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5490() {
   return (neuron0x1eac620()*0.0212225);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb54d0() {
   return (neuron0x1eac960()*0.0359196);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5850() {
   return (neuron0x1ea7e30()*0.018015);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5890() {
   return (neuron0x1ea80e0()*0.0468363);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb58d0() {
   return (neuron0x1ea8420()*0.613136);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5910() {
   return (neuron0x1ea8760()*-0.633158);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5950() {
   return (neuron0x1ea8aa0()*-0.0465913);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5990() {
   return (neuron0x1ea8de0()*-0.105967);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb59d0() {
   return (neuron0x1ea9120()*-0.0306156);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5a10() {
   return (neuron0x1ea9460()*0.0222482);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5a50() {
   return (neuron0x1ea97a0()*0.0028727);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5a90() {
   return (neuron0x1ea9ae0()*0.0132719);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5ad0() {
   return (neuron0x1ea9e20()*0.0168989);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5b10() {
   return (neuron0x1eaa160()*-0.0240192);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5b50() {
   return (neuron0x1eaa4a0()*-0.122255);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5b90() {
   return (neuron0x1eaa7e0()*0.0281436);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5bd0() {
   return (neuron0x1eaab20()*0.00706264);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5c10() {
   return (neuron0x1eaae60()*-0.000778415);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb56a0() {
   return (neuron0x1eab1a0()*-0.0283901);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb56e0() {
   return (neuron0x1eab700()*-0.0211549);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5d60() {
   return (neuron0x1eab920()*0.0444355);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5da0() {
   return (neuron0x1eabc60()*0.00680648);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5de0() {
   return (neuron0x1eabfa0()*0.0133488);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5e20() {
   return (neuron0x1eac2e0()*0.0237204);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5e60() {
   return (neuron0x1eac620()*0.0073927);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5ea0() {
   return (neuron0x1eac960()*0.0517383);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6220() {
   return (neuron0x1ea7e30()*0.0693812);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6260() {
   return (neuron0x1ea80e0()*-0.00475687);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb62a0() {
   return (neuron0x1ea8420()*-1.33442);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb62e0() {
   return (neuron0x1ea8760()*-0.0792095);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6320() {
   return (neuron0x1ea8aa0()*-0.0266975);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6360() {
   return (neuron0x1ea8de0()*-0.00413033);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb63a0() {
   return (neuron0x1ea9120()*0.0116403);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb63e0() {
   return (neuron0x1ea9460()*0.0151327);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6420() {
   return (neuron0x1ea97a0()*0.0313593);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6460() {
   return (neuron0x1ea9ae0()*0.0151437);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb64a0() {
   return (neuron0x1ea9e20()*-0.0886622);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb64e0() {
   return (neuron0x1eaa160()*0.006904);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6520() {
   return (neuron0x1eaa4a0()*0.28584);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6560() {
   return (neuron0x1eaa7e0()*-0.0313801);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb65a0() {
   return (neuron0x1eaab20()*-0.026655);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb65e0() {
   return (neuron0x1eaae60()*-0.01129);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6070() {
   return (neuron0x1eab1a0()*-0.0470532);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb60b0() {
   return (neuron0x1eab700()*-0.00860659);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6730() {
   return (neuron0x1eab920()*0.023153);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6770() {
   return (neuron0x1eabc60()*0.0259904);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb67b0() {
   return (neuron0x1eabfa0()*-0.00936027);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb67f0() {
   return (neuron0x1eac2e0()*-0.024854);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6830() {
   return (neuron0x1eac620()*0.000556679);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6870() {
   return (neuron0x1eac960()*-0.0382119);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6bf0() {
   return (neuron0x1ea7e30()*0.218547);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea7fc0() {
   return (neuron0x1ea80e0()*0.0567148);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea8000() {
   return (neuron0x1ea8420()*-0.206936);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea8300() {
   return (neuron0x1ea8760()*-0.0226523);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea8340() {
   return (neuron0x1ea8aa0()*0.187553);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea8640() {
   return (neuron0x1ea8de0()*0.060654);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea8680() {
   return (neuron0x1ea9120()*0.0209787);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea8980() {
   return (neuron0x1ea9460()*-0.203911);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea89c0() {
   return (neuron0x1ea97a0()*-0.0703969);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea8cc0() {
   return (neuron0x1ea9ae0()*1.27836);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea8d00() {
   return (neuron0x1ea9e20()*-0.00575544);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea9000() {
   return (neuron0x1eaa160()*-0.0634828);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea9040() {
   return (neuron0x1eaa4a0()*-0.183757);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea9340() {
   return (neuron0x1eaa7e0()*0.0959167);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea9380() {
   return (neuron0x1eaab20()*-0.0383339);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea9680() {
   return (neuron0x1eaae60()*0.129442);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea96c0() {
   return (neuron0x1eab1a0()*0.0530553);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea99c0() {
   return (neuron0x1eab700()*-0.244224);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea9a00() {
   return (neuron0x1eab920()*-0.0354037);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea9d00() {
   return (neuron0x1eabc60()*-0.0612236);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ea9d40() {
   return (neuron0x1eabfa0()*0.079638);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaa040() {
   return (neuron0x1eac2e0()*0.0864564);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaa080() {
   return (neuron0x1eac620()*-0.148125);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaa380() {
   return (neuron0x1eac960()*-0.160081);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaa3c0() {
   return (neuron0x1ea7e30()*-0.055763);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eab080() {
   return (neuron0x1ea80e0()*0.0184024);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eab0c0() {
   return (neuron0x1ea8420()*-0.0767697);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6a40() {
   return (neuron0x1ea8760()*0.165557);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6a80() {
   return (neuron0x1ea8aa0()*-0.142787);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eab3c0() {
   return (neuron0x1ea8de0()*-0.0196043);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eab400() {
   return (neuron0x1ea9120()*0.0300377);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c62dd0() {
   return (neuron0x1ea9460()*-0.0366862);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1c62e10() {
   return (neuron0x1ea97a0()*0.0426954);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eabb40() {
   return (neuron0x1ea9ae0()*0.139557);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eabb80() {
   return (neuron0x1ea9e20()*0.0303207);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eabe80() {
   return (neuron0x1eaa160()*0.0835685);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eabec0() {
   return (neuron0x1eaa4a0()*-0.0965367);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eac1c0() {
   return (neuron0x1eaa7e0()*-0.168285);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eac200() {
   return (neuron0x1eaab20()*-0.0885071);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eac500() {
   return (neuron0x1eaae60()*1.12579);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eac540() {
   return (neuron0x1eab1a0()*-0.133829);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eac840() {
   return (neuron0x1eab700()*0.0360973);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eac880() {
   return (neuron0x1eab920()*0.123918);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eacb80() {
   return (neuron0x1eabc60()*0.0291901);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eacbc0() {
   return (neuron0x1eabfa0()*-0.00550037);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaa6c0() {
   return (neuron0x1eac2e0()*0.0224342);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaa700() {
   return (neuron0x1eac620()*0.0149563);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8960() {
   return (neuron0x1eac960()*-0.115314);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8ce0() {
   return (neuron0x1ea7e30()*0.152884);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8d20() {
   return (neuron0x1ea80e0()*-0.0064482);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8d60() {
   return (neuron0x1ea8420()*1.0822);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8da0() {
   return (neuron0x1ea8760()*0.0635945);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8de0() {
   return (neuron0x1ea8aa0()*0.0146816);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8e20() {
   return (neuron0x1ea8de0()*0.00600969);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8e60() {
   return (neuron0x1ea9120()*0.0358875);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8ea0() {
   return (neuron0x1ea9460()*0.0133483);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8ee0() {
   return (neuron0x1ea97a0()*0.0454472);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8f20() {
   return (neuron0x1ea9ae0()*0.0375982);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8f60() {
   return (neuron0x1ea9e20()*-0.14006);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8fa0() {
   return (neuron0x1eaa160()*0.0321637);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8fe0() {
   return (neuron0x1eaa4a0()*0.00749048);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9020() {
   return (neuron0x1eaa7e0()*0.00893797);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9060() {
   return (neuron0x1eaab20()*-0.00384099);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb90a0() {
   return (neuron0x1eaae60()*-0.00663173);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8b30() {
   return (neuron0x1eab1a0()*0.00469902);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8b70() {
   return (neuron0x1eab700()*0.0158418);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb91f0() {
   return (neuron0x1eab920()*0.0486802);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9230() {
   return (neuron0x1eabc60()*0.0130021);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9270() {
   return (neuron0x1eabfa0()*-0.0257638);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb92b0() {
   return (neuron0x1eac2e0()*-0.0216886);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb92f0() {
   return (neuron0x1eac620()*-0.0160422);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9330() {
   return (neuron0x1eac960()*0.0812873);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb96b0() {
   return (neuron0x1ea7e30()*0.0689773);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb96f0() {
   return (neuron0x1ea80e0()*0.00396012);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9730() {
   return (neuron0x1ea8420()*0.399106);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9770() {
   return (neuron0x1ea8760()*-0.597205);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb97b0() {
   return (neuron0x1ea8aa0()*0.5581);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb97f0() {
   return (neuron0x1ea8de0()*-0.445575);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9830() {
   return (neuron0x1ea9120()*-0.240472);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9870() {
   return (neuron0x1ea9460()*-0.254296);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb98b0() {
   return (neuron0x1ea97a0()*0.210469);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb98f0() {
   return (neuron0x1ea9ae0()*-0.275498);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9930() {
   return (neuron0x1ea9e20()*0.295361);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9970() {
   return (neuron0x1eaa160()*0.012446);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb99b0() {
   return (neuron0x1eaa4a0()*0.0644712);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb99f0() {
   return (neuron0x1eaa7e0()*0.379526);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9a30() {
   return (neuron0x1eaab20()*0.476827);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9a70() {
   return (neuron0x1eaae60()*0.0871263);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9500() {
   return (neuron0x1eab1a0()*0.163954);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9540() {
   return (neuron0x1eab700()*-0.194404);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9bc0() {
   return (neuron0x1eab920()*-0.198817);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9c00() {
   return (neuron0x1eabc60()*-0.182098);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9c40() {
   return (neuron0x1eabfa0()*-0.103322);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9c80() {
   return (neuron0x1eac2e0()*0.168192);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9cc0() {
   return (neuron0x1eac620()*-0.155944);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9d00() {
   return (neuron0x1eac960()*-0.0993183);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba080() {
   return (neuron0x1ea7e30()*-1.14506);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba0c0() {
   return (neuron0x1ea80e0()*-0.0282077);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba100() {
   return (neuron0x1ea8420()*-0.100834);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba140() {
   return (neuron0x1ea8760()*0.0753288);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba180() {
   return (neuron0x1ea8aa0()*-0.0636201);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba1c0() {
   return (neuron0x1ea8de0()*0.00272468);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba200() {
   return (neuron0x1ea9120()*0.0521977);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba240() {
   return (neuron0x1ea9460()*0.0782828);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba280() {
   return (neuron0x1ea97a0()*0.0854868);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba2c0() {
   return (neuron0x1ea9ae0()*0.0828558);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba300() {
   return (neuron0x1ea9e20()*-0.369491);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba340() {
   return (neuron0x1eaa160()*-0.0103833);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba380() {
   return (neuron0x1eaa4a0()*0.923974);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba3c0() {
   return (neuron0x1eaa7e0()*-0.0232737);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba400() {
   return (neuron0x1eaab20()*0.0175328);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba440() {
   return (neuron0x1eaae60()*0.0140708);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9ed0() {
   return (neuron0x1eab1a0()*0.0638922);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9f10() {
   return (neuron0x1eab700()*0.0341534);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba590() {
   return (neuron0x1eab920()*0.019478);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba5d0() {
   return (neuron0x1eabc60()*0.01319);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba610() {
   return (neuron0x1eabfa0()*-0.0253878);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba650() {
   return (neuron0x1eac2e0()*-0.0519397);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba690() {
   return (neuron0x1eac620()*-0.0384397);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba6d0() {
   return (neuron0x1eac960()*0.0131705);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebaa50() {
   return (neuron0x1ea7e30()*0.0504339);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebaa90() {
   return (neuron0x1ea80e0()*-0.0442501);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebaad0() {
   return (neuron0x1ea8420()*0.690675);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebab10() {
   return (neuron0x1ea8760()*-0.656623);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebab50() {
   return (neuron0x1ea8aa0()*0.15273);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebab90() {
   return (neuron0x1ea8de0()*-0.0419122);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebabd0() {
   return (neuron0x1ea9120()*0.102862);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebac10() {
   return (neuron0x1ea9460()*-0.0828807);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebac50() {
   return (neuron0x1ea97a0()*-0.0599564);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebac90() {
   return (neuron0x1ea9ae0()*-0.0123881);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebacd0() {
   return (neuron0x1ea9e20()*-0.0540856);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebad10() {
   return (neuron0x1eaa160()*-0.0890065);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebad50() {
   return (neuron0x1eaa4a0()*-0.105287);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebad90() {
   return (neuron0x1eaa7e0()*0.127647);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebadd0() {
   return (neuron0x1eaab20()*0.0783513);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebae10() {
   return (neuron0x1eaae60()*0.026114);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba8a0() {
   return (neuron0x1eab1a0()*0.214312);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba8e0() {
   return (neuron0x1eab700()*-0.114067);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebaf60() {
   return (neuron0x1eab920()*-0.0289975);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebafa0() {
   return (neuron0x1eabc60()*-0.0516731);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebafe0() {
   return (neuron0x1eabfa0()*-0.0122813);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb020() {
   return (neuron0x1eac2e0()*0.0620725);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb060() {
   return (neuron0x1eac620()*0.00851289);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb0a0() {
   return (neuron0x1eac960()*-0.0457343);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb420() {
   return (neuron0x1ea7e30()*0.0276537);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb460() {
   return (neuron0x1ea80e0()*-0.00677066);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb4a0() {
   return (neuron0x1ea8420()*0.541145);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb4e0() {
   return (neuron0x1ea8760()*-0.0034041);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb520() {
   return (neuron0x1ea8aa0()*-0.00129259);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb560() {
   return (neuron0x1ea8de0()*-0.00458409);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb5a0() {
   return (neuron0x1ea9120()*0.00327913);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb5e0() {
   return (neuron0x1ea9460()*-0.00177175);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb620() {
   return (neuron0x1ea97a0()*-0.00193073);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb37e0() {
   return (neuron0x1ea9ae0()*-0.00445687);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3820() {
   return (neuron0x1ea9e20()*-0.00687885);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3860() {
   return (neuron0x1eaa160()*0.00233014);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb38a0() {
   return (neuron0x1eaa4a0()*0.0712772);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb38e0() {
   return (neuron0x1eaa7e0()*-0.00717019);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3920() {
   return (neuron0x1eaab20()*-0.0011974);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3960() {
   return (neuron0x1eaae60()*-0.00136822);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb270() {
   return (neuron0x1eab1a0()*-0.00667449);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb2b0() {
   return (neuron0x1eab700()*0.00469473);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3ab0() {
   return (neuron0x1eab920()*0.00149515);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3af0() {
   return (neuron0x1eabc60()*-0.00733538);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3b30() {
   return (neuron0x1eabfa0()*-0.00195966);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3b70() {
   return (neuron0x1eac2e0()*-0.00287726);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3bb0() {
   return (neuron0x1eac620()*0.000927884);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3bf0() {
   return (neuron0x1eac960()*2.99158);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3f70() {
   return (neuron0x1ea7e30()*0.0534024);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3fb0() {
   return (neuron0x1ea80e0()*0.0014055);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3ff0() {
   return (neuron0x1ea8420()*3.32069);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4030() {
   return (neuron0x1ea8760()*-0.0170143);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4070() {
   return (neuron0x1ea8aa0()*0.00933605);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb40b0() {
   return (neuron0x1ea8de0()*0.00859478);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb40f0() {
   return (neuron0x1ea9120()*0.00748213);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4130() {
   return (neuron0x1ea9460()*0.0145101);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4170() {
   return (neuron0x1ea97a0()*0.0127607);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb41b0() {
   return (neuron0x1ea9ae0()*0.00594501);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb41f0() {
   return (neuron0x1ea9e20()*0.0115287);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4230() {
   return (neuron0x1eaa160()*0.00106648);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4270() {
   return (neuron0x1eaa4a0()*0.00413443);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb42b0() {
   return (neuron0x1eaa7e0()*0.00224866);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb42f0() {
   return (neuron0x1eaab20()*0.00533575);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4330() {
   return (neuron0x1eaae60()*0.00745456);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3dc0() {
   return (neuron0x1eab1a0()*-0.00063612);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3e00() {
   return (neuron0x1eab700()*0.0109209);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4480() {
   return (neuron0x1eab920()*0.0038888);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb44c0() {
   return (neuron0x1eabc60()*-0.0021775);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4500() {
   return (neuron0x1eabfa0()*0.0173949);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4540() {
   return (neuron0x1eac2e0()*0.00353212);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4580() {
   return (neuron0x1eac620()*0.0031074);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb45c0() {
   return (neuron0x1eac960()*-4.48755);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4790() {
   return (neuron0x1ea7e30()*0.0606302);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd820() {
   return (neuron0x1ea80e0()*-0.0378017);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd860() {
   return (neuron0x1ea8420()*0.0124947);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd8a0() {
   return (neuron0x1ea8760()*-0.0324576);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd8e0() {
   return (neuron0x1ea8aa0()*-0.0250188);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd920() {
   return (neuron0x1ea8de0()*0.0545084);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd960() {
   return (neuron0x1ea9120()*-0.120045);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd9a0() {
   return (neuron0x1ea9460()*-0.171851);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd9e0() {
   return (neuron0x1ea97a0()*0.00803997);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebda20() {
   return (neuron0x1ea9ae0()*0.0265732);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebda60() {
   return (neuron0x1ea9e20()*0.00605108);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebdaa0() {
   return (neuron0x1eaa160()*0.0233834);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebdae0() {
   return (neuron0x1eaa4a0()*-0.491842);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebdb20() {
   return (neuron0x1eaa7e0()*-0.0219983);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebdb60() {
   return (neuron0x1eaab20()*-0.189881);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebdba0() {
   return (neuron0x1eaae60()*-0.093088);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd670() {
   return (neuron0x1eab1a0()*-0.0924605);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd6b0() {
   return (neuron0x1eab700()*0.00463344);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebdcf0() {
   return (neuron0x1eab920()*0.0263487);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebdd30() {
   return (neuron0x1eabc60()*0.0202853);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebdd70() {
   return (neuron0x1eabfa0()*0.00746393);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebddb0() {
   return (neuron0x1eac2e0()*-0.00823688);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebddf0() {
   return (neuron0x1eac620()*-0.0105466);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebde30() {
   return (neuron0x1eac960()*-0.0287841);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe1b0() {
   return (neuron0x1ea7e30()*-0.00449675);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe1f0() {
   return (neuron0x1ea80e0()*0.00442189);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe230() {
   return (neuron0x1ea8420()*-2.48836);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe270() {
   return (neuron0x1ea8760()*-0.0421016);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe2b0() {
   return (neuron0x1ea8aa0()*-0.0131535);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe2f0() {
   return (neuron0x1ea8de0()*0.0417532);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe330() {
   return (neuron0x1ea9120()*-0.00504953);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe370() {
   return (neuron0x1ea9460()*0.0401801);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe3b0() {
   return (neuron0x1ea97a0()*-0.0500444);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe3f0() {
   return (neuron0x1ea9ae0()*-0.0196802);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe430() {
   return (neuron0x1ea9e20()*-0.0136209);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe470() {
   return (neuron0x1eaa160()*-0.00416107);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe4b0() {
   return (neuron0x1eaa4a0()*0.299978);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe4f0() {
   return (neuron0x1eaa7e0()*0.00368665);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe530() {
   return (neuron0x1eaab20()*0.0181055);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe570() {
   return (neuron0x1eaae60()*0.011805);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe000() {
   return (neuron0x1eab1a0()*0.0697991);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe040() {
   return (neuron0x1eab700()*0.00119755);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe6c0() {
   return (neuron0x1eab920()*-0.0139523);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe700() {
   return (neuron0x1eabc60()*0.029611);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe740() {
   return (neuron0x1eabfa0()*-0.0357721);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe780() {
   return (neuron0x1eac2e0()*-0.0215563);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe7c0() {
   return (neuron0x1eac620()*0.0199797);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe800() {
   return (neuron0x1eac960()*0.0289236);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebeb80() {
   return (neuron0x1ea7e30()*0.0078527);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebebc0() {
   return (neuron0x1ea80e0()*-0.0107622);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebec00() {
   return (neuron0x1ea8420()*-4.63651);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebec40() {
   return (neuron0x1ea8760()*0.00373833);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebec80() {
   return (neuron0x1ea8aa0()*0.00263954);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebecc0() {
   return (neuron0x1ea8de0()*-0.00943998);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebed00() {
   return (neuron0x1ea9120()*-0.0222668);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebed40() {
   return (neuron0x1ea9460()*-0.00298783);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebed80() {
   return (neuron0x1ea97a0()*-0.00561512);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebedc0() {
   return (neuron0x1ea9ae0()*-0.00709068);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebee00() {
   return (neuron0x1ea9e20()*-0.00311314);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebee40() {
   return (neuron0x1eaa160()*-0.0134586);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebee80() {
   return (neuron0x1eaa4a0()*-0.00872347);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebeec0() {
   return (neuron0x1eaa7e0()*-0.00660168);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebef00() {
   return (neuron0x1eaab20()*-0.00452746);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebef40() {
   return (neuron0x1eaae60()*-0.00495536);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe9d0() {
   return (neuron0x1eab1a0()*-0.00655362);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebea10() {
   return (neuron0x1eab700()*-0.000138422);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf090() {
   return (neuron0x1eab920()*0.00437493);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf0d0() {
   return (neuron0x1eabc60()*5.33512e-05);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf110() {
   return (neuron0x1eabfa0()*-0.00738129);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf150() {
   return (neuron0x1eac2e0()*0.00188203);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf190() {
   return (neuron0x1eac620()*0.00417617);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf1d0() {
   return (neuron0x1eac960()*-5.83529);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf550() {
   return (neuron0x1ea7e30()*-0.0124166);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf590() {
   return (neuron0x1ea80e0()*-0.0300164);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf5d0() {
   return (neuron0x1ea8420()*0.102191);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf610() {
   return (neuron0x1ea8760()*-3.63757);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf650() {
   return (neuron0x1ea8aa0()*-0.0396371);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf690() {
   return (neuron0x1ea8de0()*-0.0218467);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf6d0() {
   return (neuron0x1ea9120()*0.00514321);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf710() {
   return (neuron0x1ea9460()*0.0123896);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf750() {
   return (neuron0x1ea97a0()*-0.00928954);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf790() {
   return (neuron0x1ea9ae0()*-0.0462434);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf7d0() {
   return (neuron0x1ea9e20()*0.00739395);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf810() {
   return (neuron0x1eaa160()*0.0528568);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf850() {
   return (neuron0x1eaa4a0()*0.111733);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf890() {
   return (neuron0x1eaa7e0()*-0.0429532);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf8d0() {
   return (neuron0x1eaab20()*-0.00542041);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf910() {
   return (neuron0x1eaae60()*-0.0200325);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf3a0() {
   return (neuron0x1eab1a0()*-0.0462495);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf3e0() {
   return (neuron0x1eab700()*0.000630111);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfa60() {
   return (neuron0x1eab920()*-0.025709);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfaa0() {
   return (neuron0x1eabc60()*-0.00275475);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfae0() {
   return (neuron0x1eabfa0()*-0.0221198);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfb20() {
   return (neuron0x1eac2e0()*-0.00705359);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfb60() {
   return (neuron0x1eac620()*0.00465546);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfba0() {
   return (neuron0x1eac960()*0.0633352);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebff20() {
   return (neuron0x1ea7e30()*-0.00684061);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebff60() {
   return (neuron0x1ea80e0()*0.00290049);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebffa0() {
   return (neuron0x1ea8420()*0.0900054);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebffe0() {
   return (neuron0x1ea8760()*0.721976);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0020() {
   return (neuron0x1ea8aa0()*-0.0101355);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0060() {
   return (neuron0x1ea8de0()*0.00427521);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec00a0() {
   return (neuron0x1ea9120()*0.061554);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec00e0() {
   return (neuron0x1ea9460()*0.064663);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0120() {
   return (neuron0x1ea97a0()*-0.0345821);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0160() {
   return (neuron0x1ea9ae0()*-0.0549842);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec01a0() {
   return (neuron0x1ea9e20()*-0.0584278);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec01e0() {
   return (neuron0x1eaa160()*0.283475);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0220() {
   return (neuron0x1eaa4a0()*-0.142361);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0260() {
   return (neuron0x1eaa7e0()*0.325603);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec02a0() {
   return (neuron0x1eaab20()*0.0671221);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec02e0() {
   return (neuron0x1eaae60()*0.108379);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfd70() {
   return (neuron0x1eab1a0()*0.263173);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfdb0() {
   return (neuron0x1eab700()*0.166189);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0430() {
   return (neuron0x1eab920()*0.147188);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0470() {
   return (neuron0x1eabc60()*0.162115);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec04b0() {
   return (neuron0x1eabfa0()*0.0362497);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec04f0() {
   return (neuron0x1eac2e0()*-0.00482457);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0530() {
   return (neuron0x1eac620()*0.00696068);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0570() {
   return (neuron0x1eac960()*-0.043777);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec08f0() {
   return (neuron0x1ea7e30()*-0.00347807);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0930() {
   return (neuron0x1ea80e0()*-0.0163639);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0970() {
   return (neuron0x1ea8420()*0.12222);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec09b0() {
   return (neuron0x1ea8760()*0.0257223);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec09f0() {
   return (neuron0x1ea8aa0()*-0.0104489);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0a30() {
   return (neuron0x1ea8de0()*-0.00810968);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0a70() {
   return (neuron0x1ea9120()*-0.0103368);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0ab0() {
   return (neuron0x1ea9460()*-0.006657);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0af0() {
   return (neuron0x1ea97a0()*-0.00306478);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0b30() {
   return (neuron0x1ea9ae0()*-0.00143509);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0b70() {
   return (neuron0x1ea9e20()*-0.00977181);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0bb0() {
   return (neuron0x1eaa160()*-0.00449535);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0bf0() {
   return (neuron0x1eaa4a0()*-0.0872574);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0c30() {
   return (neuron0x1eaa7e0()*-0.00868042);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0c70() {
   return (neuron0x1eaab20()*-0.0112101);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0cb0() {
   return (neuron0x1eaae60()*-0.000386943);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0740() {
   return (neuron0x1eab1a0()*-0.00740397);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0780() {
   return (neuron0x1eab700()*0.0104469);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0e00() {
   return (neuron0x1eab920()*0.0142112);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0e40() {
   return (neuron0x1eabc60()*-0.0115003);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0e80() {
   return (neuron0x1eabfa0()*0.00891564);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0ec0() {
   return (neuron0x1eac2e0()*-0.0116215);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0f00() {
   return (neuron0x1eac620()*-0.00019466);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0f40() {
   return (neuron0x1eac960()*-6.29964);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec12c0() {
   return (neuron0x1ea7e30()*-0.0176554);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1300() {
   return (neuron0x1ea80e0()*-0.032578);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1340() {
   return (neuron0x1ea8420()*0.106349);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1380() {
   return (neuron0x1ea8760()*4.03994);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec13c0() {
   return (neuron0x1ea8aa0()*-0.0241413);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1400() {
   return (neuron0x1ea8de0()*0.00925164);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1440() {
   return (neuron0x1ea9120()*0.0138604);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1480() {
   return (neuron0x1ea9460()*-0.00212396);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec14c0() {
   return (neuron0x1ea97a0()*-0.0234915);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1500() {
   return (neuron0x1ea9ae0()*-0.0211027);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1540() {
   return (neuron0x1ea9e20()*0.00164699);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1580() {
   return (neuron0x1eaa160()*-0.0167584);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec15c0() {
   return (neuron0x1eaa4a0()*0.626247);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1600() {
   return (neuron0x1eaa7e0()*0.0512255);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1640() {
   return (neuron0x1eaab20()*0.000853671);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1680() {
   return (neuron0x1eaae60()*-0.00490329);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1110() {
   return (neuron0x1eab1a0()*0.0398001);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1150() {
   return (neuron0x1eab700()*-0.0136617);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec17d0() {
   return (neuron0x1eab920()*-0.0169292);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1810() {
   return (neuron0x1eabc60()*-0.00587415);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1850() {
   return (neuron0x1eabfa0()*-0.00964249);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1890() {
   return (neuron0x1eac2e0()*-0.0117623);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec18d0() {
   return (neuron0x1eac620()*-0.00248763);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1910() {
   return (neuron0x1eac960()*0.0295741);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1c90() {
   return (neuron0x1ea7e30()*0.415282);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1cd0() {
   return (neuron0x1ea80e0()*0.454961);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1d10() {
   return (neuron0x1ea8420()*-0.316181);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1d50() {
   return (neuron0x1ea8760()*-0.285067);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1d90() {
   return (neuron0x1ea8aa0()*0.12997);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1dd0() {
   return (neuron0x1ea8de0()*0.286437);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1e10() {
   return (neuron0x1ea9120()*0.499071);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1e50() {
   return (neuron0x1ea9460()*-0.115445);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1e90() {
   return (neuron0x1ea97a0()*0.172183);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1ed0() {
   return (neuron0x1ea9ae0()*-0.356008);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1f10() {
   return (neuron0x1ea9e20()*-0.0413028);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1f50() {
   return (neuron0x1eaa160()*0.279199);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1f90() {
   return (neuron0x1eaa4a0()*-0.429093);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1fd0() {
   return (neuron0x1eaa7e0()*0.0700968);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec2010() {
   return (neuron0x1eaab20()*0.0318305);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec2050() {
   return (neuron0x1eaae60()*0.320356);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1ae0() {
   return (neuron0x1eab1a0()*0.244667);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec1b20() {
   return (neuron0x1eab700()*0.0548891);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec21a0() {
   return (neuron0x1eab920()*-0.520723);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec21e0() {
   return (neuron0x1eabc60()*0.0786375);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec2220() {
   return (neuron0x1eabfa0()*0.186069);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec2260() {
   return (neuron0x1eac2e0()*0.196263);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec22a0() {
   return (neuron0x1eac620()*0.416757);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec22e0() {
   return (neuron0x1eac960()*0.134777);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec2660() {
   return (neuron0x1ea7e30()*0.00721569);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6c30() {
   return (neuron0x1ea80e0()*0.00606854);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6c70() {
   return (neuron0x1ea8420()*-0.118042);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6cb0() {
   return (neuron0x1ea8760()*-0.00556707);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6f00() {
   return (neuron0x1ea8aa0()*0.000779374);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6f40() {
   return (neuron0x1ea8de0()*-0.00094706);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6f80() {
   return (neuron0x1ea9120()*0.000957352);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb71d0() {
   return (neuron0x1ea9460()*0.00994219);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7210() {
   return (neuron0x1ea97a0()*0.00522199);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7460() {
   return (neuron0x1ea9ae0()*0.00244403);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb74a0() {
   return (neuron0x1ea9e20()*-0.000640605);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb74e0() {
   return (neuron0x1eaa160()*0.00489339);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7730() {
   return (neuron0x1eaa4a0()*2.308);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7770() {
   return (neuron0x1eaa7e0()*0.00945995);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb79c0() {
   return (neuron0x1eaab20()*0.0137977);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7a00() {
   return (neuron0x1eaae60()*0.00492152);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec24b0() {
   return (neuron0x1eab1a0()*0.0131806);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec24f0() {
   return (neuron0x1eab700()*0.00448709);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7b50() {
   return (neuron0x1eab920()*0.00495816);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8060() {
   return (neuron0x1eabc60()*0.00178286);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb80a0() {
   return (neuron0x1eabfa0()*-0.00206916);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb80e0() {
   return (neuron0x1eac2e0()*8.7468e-05);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8330() {
   return (neuron0x1eac620()*0.00178799);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8370() {
   return (neuron0x1eac960()*0.00292768);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7c20() {
   return (neuron0x1ea7e30()*0.101635);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7c60() {
   return (neuron0x1ea80e0()*-0.000313751);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7ca0() {
   return (neuron0x1ea8420()*0.083641);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7ce0() {
   return (neuron0x1ea8760()*1.37721);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8660() {
   return (neuron0x1ea8aa0()*-0.00373456);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec49b0() {
   return (neuron0x1ea8de0()*-0.0362856);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec49f0() {
   return (neuron0x1ea9120()*0.0225313);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4a30() {
   return (neuron0x1ea9460()*0.0912163);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4a70() {
   return (neuron0x1ea97a0()*-0.0558617);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4ab0() {
   return (neuron0x1ea9ae0()*0.158051);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4af0() {
   return (neuron0x1ea9e20()*0.0496268);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4b30() {
   return (neuron0x1eaa160()*-0.234572);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4b70() {
   return (neuron0x1eaa4a0()*0.609709);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4bb0() {
   return (neuron0x1eaa7e0()*-0.0836607);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4bf0() {
   return (neuron0x1eaab20()*0.168426);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4c30() {
   return (neuron0x1eaae60()*-0.174929);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8540() {
   return (neuron0x1eab1a0()*-0.22918);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8580() {
   return (neuron0x1eab700()*-0.120805);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4d80() {
   return (neuron0x1eab920()*0.117427);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4dc0() {
   return (neuron0x1eabc60()*-0.0242825);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4e00() {
   return (neuron0x1eabfa0()*-0.0209817);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4e40() {
   return (neuron0x1eac2e0()*0.0182247);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4e80() {
   return (neuron0x1eac620()*-0.01996);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec4ec0() {
   return (neuron0x1eac960()*-0.0342599);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5240() {
   return (neuron0x1ea7e30()*-0.0721048);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5280() {
   return (neuron0x1ea80e0()*-0.0099104);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec52c0() {
   return (neuron0x1ea8420()*-0.591747);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5300() {
   return (neuron0x1ea8760()*0.00132832);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5340() {
   return (neuron0x1ea8aa0()*-0.00304261);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5380() {
   return (neuron0x1ea8de0()*-0.00353695);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec53c0() {
   return (neuron0x1ea9120()*-0.00450575);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5400() {
   return (neuron0x1ea9460()*-0.00449203);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5440() {
   return (neuron0x1ea97a0()*-0.000129389);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5480() {
   return (neuron0x1ea9ae0()*-0.00385497);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec54c0() {
   return (neuron0x1ea9e20()*0.00204754);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5500() {
   return (neuron0x1eaa160()*-0.00443463);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5540() {
   return (neuron0x1eaa4a0()*-0.0393337);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5580() {
   return (neuron0x1eaa7e0()*-0.000914901);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec55c0() {
   return (neuron0x1eaab20()*-0.00713585);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5600() {
   return (neuron0x1eaae60()*-0.0028824);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5090() {
   return (neuron0x1eab1a0()*0.00171323);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec50d0() {
   return (neuron0x1eab700()*0.00153197);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5750() {
   return (neuron0x1eab920()*0.000540015);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5790() {
   return (neuron0x1eabc60()*-0.00571832);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec57d0() {
   return (neuron0x1eabfa0()*-0.00140017);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5810() {
   return (neuron0x1eac2e0()*-0.0073172);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5850() {
   return (neuron0x1eac620()*0.00190385);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5890() {
   return (neuron0x1eac960()*2.52479);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5c10() {
   return (neuron0x1ea7e30()*-0.1645);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5c50() {
   return (neuron0x1ea80e0()*-0.123151);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5c90() {
   return (neuron0x1ea8420()*-0.19033);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5cd0() {
   return (neuron0x1ea8760()*0.0111182);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5d10() {
   return (neuron0x1ea8aa0()*-0.0605);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5d50() {
   return (neuron0x1ea8de0()*0.0452779);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5d90() {
   return (neuron0x1ea9120()*-0.0563247);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5dd0() {
   return (neuron0x1ea9460()*0.0949625);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5e10() {
   return (neuron0x1ea97a0()*-1.17178);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5e50() {
   return (neuron0x1ea9ae0()*-0.11952);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5e90() {
   return (neuron0x1ea9e20()*-0.0722139);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5ed0() {
   return (neuron0x1eaa160()*-0.0701668);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5f10() {
   return (neuron0x1eaa4a0()*0.155583);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5f50() {
   return (neuron0x1eaa7e0()*-0.105917);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5f90() {
   return (neuron0x1eaab20()*-0.0443324);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5fd0() {
   return (neuron0x1eaae60()*0.0189676);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5a60() {
   return (neuron0x1eab1a0()*-0.0666507);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5aa0() {
   return (neuron0x1eab700()*0.101934);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6120() {
   return (neuron0x1eab920()*-0.0183049);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6160() {
   return (neuron0x1eabc60()*0.0274882);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec61a0() {
   return (neuron0x1eabfa0()*0.15738);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec61e0() {
   return (neuron0x1eac2e0()*-0.0766054);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6220() {
   return (neuron0x1eac620()*-0.0021767);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6260() {
   return (neuron0x1eac960()*-0.00118896);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec65e0() {
   return (neuron0x1ea7e30()*-0.014197);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6620() {
   return (neuron0x1ea80e0()*-0.00383992);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6660() {
   return (neuron0x1ea8420()*-0.028194);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec66a0() {
   return (neuron0x1ea8760()*-0.0246363);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec66e0() {
   return (neuron0x1ea8aa0()*-0.00535156);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6720() {
   return (neuron0x1ea8de0()*0.00413248);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6760() {
   return (neuron0x1ea9120()*-0.00763744);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec67a0() {
   return (neuron0x1ea9460()*-0.0162635);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec67e0() {
   return (neuron0x1ea97a0()*-0.00241093);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6820() {
   return (neuron0x1ea9ae0()*0.000596122);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6860() {
   return (neuron0x1ea9e20()*-0.0126698);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec68a0() {
   return (neuron0x1eaa160()*0.0106911);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec68e0() {
   return (neuron0x1eaa4a0()*-0.990043);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6920() {
   return (neuron0x1eaa7e0()*0.00541696);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6960() {
   return (neuron0x1eaab20()*-0.0135034);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec69a0() {
   return (neuron0x1eaae60()*-0.000339387);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6430() {
   return (neuron0x1eab1a0()*-0.000686009);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6470() {
   return (neuron0x1eab700()*0.000606241);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6af0() {
   return (neuron0x1eab920()*0.00295101);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6b30() {
   return (neuron0x1eabc60()*0.0049201);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6b70() {
   return (neuron0x1eabfa0()*-0.00107939);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6bb0() {
   return (neuron0x1eac2e0()*-0.000485475);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6bf0() {
   return (neuron0x1eac620()*-0.0022527);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6c30() {
   return (neuron0x1eac960()*-0.00519803);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6fb0() {
   return (neuron0x1ea7e30()*-0.887753);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6ff0() {
   return (neuron0x1ea80e0()*0.125881);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7030() {
   return (neuron0x1ea8420()*0.474685);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7070() {
   return (neuron0x1ea8760()*0.460409);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec70b0() {
   return (neuron0x1ea8aa0()*-0.430764);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec70f0() {
   return (neuron0x1ea8de0()*-0.438155);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7130() {
   return (neuron0x1ea9120()*0.0945141);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7170() {
   return (neuron0x1ea9460()*0.142281);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec71b0() {
   return (neuron0x1ea97a0()*0.162628);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec71f0() {
   return (neuron0x1ea9ae0()*-0.171565);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7230() {
   return (neuron0x1ea9e20()*0.0860578);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7270() {
   return (neuron0x1eaa160()*-0.128445);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec72b0() {
   return (neuron0x1eaa4a0()*0.225412);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec72f0() {
   return (neuron0x1eaa7e0()*-0.0387259);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7330() {
   return (neuron0x1eaab20()*-0.406511);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7370() {
   return (neuron0x1eaae60()*-0.858285);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6e00() {
   return (neuron0x1eab1a0()*0.60272);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6e40() {
   return (neuron0x1eab700()*0.050206);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec74c0() {
   return (neuron0x1eab920()*0.107477);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7500() {
   return (neuron0x1eabc60()*0.0717984);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7540() {
   return (neuron0x1eabfa0()*-0.480995);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7580() {
   return (neuron0x1eac2e0()*0.229018);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec75c0() {
   return (neuron0x1eac620()*-0.100047);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7600() {
   return (neuron0x1eac960()*-0.0133589);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7980() {
   return (neuron0x1ea7e30()*-0.263009);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec79c0() {
   return (neuron0x1ea80e0()*-0.114335);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7a00() {
   return (neuron0x1ea8420()*0.485826);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7a40() {
   return (neuron0x1ea8760()*-0.654038);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7a80() {
   return (neuron0x1ea8aa0()*0.162902);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7ac0() {
   return (neuron0x1ea8de0()*-0.414259);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7b00() {
   return (neuron0x1ea9120()*0.279977);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7b40() {
   return (neuron0x1ea9460()*0.325472);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7b80() {
   return (neuron0x1ea97a0()*0.0116829);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7bc0() {
   return (neuron0x1ea9ae0()*-0.151122);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7c00() {
   return (neuron0x1ea9e20()*-0.0744225);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7c40() {
   return (neuron0x1eaa160()*0.12598);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7c80() {
   return (neuron0x1eaa4a0()*0.0430227);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7cc0() {
   return (neuron0x1eaa7e0()*0.0714511);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7d00() {
   return (neuron0x1eaab20()*0.0705879);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7d40() {
   return (neuron0x1eaae60()*0.262968);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec77d0() {
   return (neuron0x1eab1a0()*-0.0919099);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7810() {
   return (neuron0x1eab700()*0.197919);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7e90() {
   return (neuron0x1eab920()*0.0709061);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7ed0() {
   return (neuron0x1eabc60()*0.0452694);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7f10() {
   return (neuron0x1eabfa0()*0.157804);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7f50() {
   return (neuron0x1eac2e0()*-0.0811487);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7f90() {
   return (neuron0x1eac620()*-0.142335);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7fd0() {
   return (neuron0x1eac960()*0.00717711);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8350() {
   return (neuron0x1ea7e30()*-0.313726);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8390() {
   return (neuron0x1ea80e0()*-0.444889);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec83d0() {
   return (neuron0x1ea8420()*-1.05436);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8410() {
   return (neuron0x1ea8760()*0.0939179);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8450() {
   return (neuron0x1ea8aa0()*0.0816611);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8490() {
   return (neuron0x1ea8de0()*0.178923);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec84d0() {
   return (neuron0x1ea9120()*0.247985);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8510() {
   return (neuron0x1ea9460()*0.393707);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8550() {
   return (neuron0x1ea97a0()*-0.746383);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8590() {
   return (neuron0x1ea9ae0()*-0.124385);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec85d0() {
   return (neuron0x1ea9e20()*-0.82565);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8610() {
   return (neuron0x1eaa160()*-0.329254);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8650() {
   return (neuron0x1eaa4a0()*-0.0886754);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8690() {
   return (neuron0x1eaa7e0()*-0.725335);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec86d0() {
   return (neuron0x1eaab20()*-0.508016);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8710() {
   return (neuron0x1eaae60()*0.470482);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec81a0() {
   return (neuron0x1eab1a0()*0.0308369);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec81e0() {
   return (neuron0x1eab700()*0.101568);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8860() {
   return (neuron0x1eab920()*0.253768);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec88a0() {
   return (neuron0x1eabc60()*-0.134922);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec88e0() {
   return (neuron0x1eabfa0()*0.321854);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8920() {
   return (neuron0x1eac2e0()*0.11116);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8960() {
   return (neuron0x1eac620()*0.204568);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec89a0() {
   return (neuron0x1eac960()*-0.029424);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8d20() {
   return (neuron0x1ea7e30()*-0.0188259);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8d60() {
   return (neuron0x1ea80e0()*-0.0238772);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8da0() {
   return (neuron0x1ea8420()*0.0990221);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8de0() {
   return (neuron0x1ea8760()*-3.35706);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8e20() {
   return (neuron0x1ea8aa0()*0.000377186);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8e60() {
   return (neuron0x1ea8de0()*-0.00814039);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8ea0() {
   return (neuron0x1ea9120()*0.0139537);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8ee0() {
   return (neuron0x1ea9460()*-0.00516261);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8f20() {
   return (neuron0x1ea97a0()*-0.0248506);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8f60() {
   return (neuron0x1ea9ae0()*-0.0197819);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8fa0() {
   return (neuron0x1ea9e20()*-0.0183557);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8fe0() {
   return (neuron0x1eaa160()*-0.0140261);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9020() {
   return (neuron0x1eaa4a0()*0.325413);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9060() {
   return (neuron0x1eaa7e0()*0.0704075);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec90a0() {
   return (neuron0x1eaab20()*-0.0129256);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec90e0() {
   return (neuron0x1eaae60()*0.0201922);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8b70() {
   return (neuron0x1eab1a0()*0.0615734);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8bb0() {
   return (neuron0x1eab700()*-0.0118102);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9230() {
   return (neuron0x1eab920()*-0.00619348);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9270() {
   return (neuron0x1eabc60()*-0.000243157);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec92b0() {
   return (neuron0x1eabfa0()*-0.0100906);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec92f0() {
   return (neuron0x1eac2e0()*0.00485456);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9330() {
   return (neuron0x1eac620()*0.00274104);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9370() {
   return (neuron0x1eac960()*0.0228567);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1e20() {
   return (neuron0x1ea7e30()*-0.0396231);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1e60() {
   return (neuron0x1ea80e0()*0.0168375);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1ea0() {
   return (neuron0x1ea8420()*0.210729);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1ee0() {
   return (neuron0x1ea8760()*-0.397407);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1f20() {
   return (neuron0x1ea8aa0()*-0.0965811);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1f60() {
   return (neuron0x1ea8de0()*0.0499103);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1fa0() {
   return (neuron0x1ea9120()*0.0585735);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1fe0() {
   return (neuron0x1ea9460()*0.114805);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9b00() {
   return (neuron0x1ea97a0()*-0.0262769);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9b40() {
   return (neuron0x1ea9ae0()*0.0183943);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9b80() {
   return (neuron0x1ea9e20()*-0.0499682);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9bc0() {
   return (neuron0x1eaa160()*-0.100908);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9c00() {
   return (neuron0x1eaa4a0()*0.139615);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9c40() {
   return (neuron0x1eaa7e0()*0.0991906);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9c80() {
   return (neuron0x1eaab20()*-0.655509);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9cc0() {
   return (neuron0x1eaae60()*0.0694323);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9540() {
   return (neuron0x1eab1a0()*0.186792);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9580() {
   return (neuron0x1eab700()*-0.0344355);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9e10() {
   return (neuron0x1eab920()*-0.0141263);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9e50() {
   return (neuron0x1eabc60()*-0.0389774);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9e90() {
   return (neuron0x1eabfa0()*0.0126063);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9ed0() {
   return (neuron0x1eac2e0()*-0.0334646);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9f10() {
   return (neuron0x1eac620()*0.0439407);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9f50() {
   return (neuron0x1eac960()*0.037078);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca2d0() {
   return (neuron0x1ea7e30()*-0.0068409);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca310() {
   return (neuron0x1ea80e0()*0.20295);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca350() {
   return (neuron0x1ea8420()*0.184322);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca390() {
   return (neuron0x1ea8760()*1.21413);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca3d0() {
   return (neuron0x1ea8aa0()*-0.026279);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca410() {
   return (neuron0x1ea8de0()*-0.0874279);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca450() {
   return (neuron0x1ea9120()*-0.067939);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca490() {
   return (neuron0x1ea9460()*-0.35393);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca4d0() {
   return (neuron0x1ea97a0()*0.0888473);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca510() {
   return (neuron0x1ea9ae0()*0.0309014);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca550() {
   return (neuron0x1ea9e20()*0.0831741);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca590() {
   return (neuron0x1eaa160()*0.178529);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca5d0() {
   return (neuron0x1eaa4a0()*-0.588678);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca610() {
   return (neuron0x1eaa7e0()*-0.0587645);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca650() {
   return (neuron0x1eaab20()*-0.108762);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca690() {
   return (neuron0x1eaae60()*0.397202);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca120() {
   return (neuron0x1eab1a0()*-0.0716121);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca160() {
   return (neuron0x1eab700()*-0.111147);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca7e0() {
   return (neuron0x1eab920()*-0.250394);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca820() {
   return (neuron0x1eabc60()*0.0422519);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca860() {
   return (neuron0x1eabfa0()*-0.00924327);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca8a0() {
   return (neuron0x1eac2e0()*0.207944);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca8e0() {
   return (neuron0x1eac620()*-0.0199716);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca920() {
   return (neuron0x1eac960()*-0.369729);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecaca0() {
   return (neuron0x1ea7e30()*-0.0209091);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecace0() {
   return (neuron0x1ea80e0()*0.00766851);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecad20() {
   return (neuron0x1ea8420()*2.22828);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecad60() {
   return (neuron0x1ea8760()*0.00778574);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecada0() {
   return (neuron0x1ea8aa0()*-0.00173546);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecade0() {
   return (neuron0x1ea8de0()*-0.0101378);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecae20() {
   return (neuron0x1ea9120()*0.00154705);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecae60() {
   return (neuron0x1ea9460()*0.00639231);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecaea0() {
   return (neuron0x1ea97a0()*0.00501045);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecaee0() {
   return (neuron0x1ea9ae0()*0.000795457);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecaf20() {
   return (neuron0x1ea9e20()*0.0207427);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecaf60() {
   return (neuron0x1eaa160()*0.00364008);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecafa0() {
   return (neuron0x1eaa4a0()*-0.426097);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecafe0() {
   return (neuron0x1eaa7e0()*0.021419);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecb020() {
   return (neuron0x1eaab20()*-0.000315818);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecb060() {
   return (neuron0x1eaae60()*-0.00842465);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecaaf0() {
   return (neuron0x1eab1a0()*0.0197756);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecab30() {
   return (neuron0x1eab700()*0.00499521);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb660() {
   return (neuron0x1eab920()*-0.00250777);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb6a0() {
   return (neuron0x1eabc60()*0.000198191);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb6e0() {
   return (neuron0x1eabfa0()*-0.000370732);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb720() {
   return (neuron0x1eac2e0()*-0.00210108);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb760() {
   return (neuron0x1eac620()*-0.00364148);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb7a0() {
   return (neuron0x1eac960()*-0.0320718);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbb20() {
   return (neuron0x1ea7e30()*-0.0132086);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbb60() {
   return (neuron0x1ea80e0()*0.00682586);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbba0() {
   return (neuron0x1ea8420()*-0.654354);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbbe0() {
   return (neuron0x1ea8760()*-0.722355);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbc20() {
   return (neuron0x1ea8aa0()*-0.0242627);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbc60() {
   return (neuron0x1ea8de0()*0.298);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbca0() {
   return (neuron0x1ea9120()*-0.0467405);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbce0() {
   return (neuron0x1ea9460()*0.0514732);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbd20() {
   return (neuron0x1ea97a0()*-0.252788);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbd60() {
   return (neuron0x1ea9ae0()*-0.129591);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbda0() {
   return (neuron0x1ea9e20()*0.149929);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbde0() {
   return (neuron0x1eaa160()*0.229027);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbe20() {
   return (neuron0x1eaa4a0()*0.242518);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbe60() {
   return (neuron0x1eaa7e0()*-0.000353205);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbea0() {
   return (neuron0x1eaab20()*0.0785046);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbee0() {
   return (neuron0x1eaae60()*0.15018);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb970() {
   return (neuron0x1eab1a0()*-0.16935);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb9b0() {
   return (neuron0x1eab700()*-0.0734158);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc030() {
   return (neuron0x1eab920()*-0.105819);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc070() {
   return (neuron0x1eabc60()*0.12007);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc0b0() {
   return (neuron0x1eabfa0()*-0.0338061);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc0f0() {
   return (neuron0x1eac2e0()*0.023194);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc130() {
   return (neuron0x1eac620()*-0.000735594);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc170() {
   return (neuron0x1eac960()*-0.189566);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc4f0() {
   return (neuron0x1ea7e30()*1.09044);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc530() {
   return (neuron0x1ea80e0()*-0.240175);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc570() {
   return (neuron0x1ea8420()*-0.322625);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc5b0() {
   return (neuron0x1ea8760()*-0.0271695);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc5f0() {
   return (neuron0x1ea8aa0()*-0.0192181);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc630() {
   return (neuron0x1ea8de0()*-0.473825);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc670() {
   return (neuron0x1ea9120()*-0.271873);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc6b0() {
   return (neuron0x1ea9460()*0.24909);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc6f0() {
   return (neuron0x1ea97a0()*0.191497);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc730() {
   return (neuron0x1ea9ae0()*0.115686);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc770() {
   return (neuron0x1ea9e20()*0.204344);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc7b0() {
   return (neuron0x1eaa160()*-0.334817);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc7f0() {
   return (neuron0x1eaa4a0()*0.0710415);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc830() {
   return (neuron0x1eaa7e0()*0.121997);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc870() {
   return (neuron0x1eaab20()*0.0078388);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc8b0() {
   return (neuron0x1eaae60()*-0.211636);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc340() {
   return (neuron0x1eab1a0()*0.239372);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc380() {
   return (neuron0x1eab700()*-0.0539536);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebca00() {
   return (neuron0x1eab920()*0.157848);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebca40() {
   return (neuron0x1eabc60()*0.264119);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebca80() {
   return (neuron0x1eabfa0()*-0.162163);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcac0() {
   return (neuron0x1eac2e0()*0.30571);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcb00() {
   return (neuron0x1eac620()*0.535782);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcb40() {
   return (neuron0x1eac960()*0.126207);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcec0() {
   return (neuron0x1ea7e30()*-0.163978);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcf00() {
   return (neuron0x1ea80e0()*0.0664539);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcf40() {
   return (neuron0x1ea8420()*0.614173);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcf80() {
   return (neuron0x1ea8760()*0.115119);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcfc0() {
   return (neuron0x1ea8aa0()*-0.0150756);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd000() {
   return (neuron0x1ea8de0()*0.922111);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd040() {
   return (neuron0x1ea9120()*0.113388);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd080() {
   return (neuron0x1ea9460()*0.443975);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd0c0() {
   return (neuron0x1ea97a0()*-0.0454097);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd100() {
   return (neuron0x1ea9ae0()*-0.0329444);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd140() {
   return (neuron0x1ea9e20()*0.113193);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd180() {
   return (neuron0x1eaa160()*0.0499354);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd1c0() {
   return (neuron0x1eaa4a0()*-0.112669);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd200() {
   return (neuron0x1eaa7e0()*-0.0585263);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd240() {
   return (neuron0x1eaab20()*0.0191344);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd280() {
   return (neuron0x1eaae60()*0.0386755);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcd10() {
   return (neuron0x1eab1a0()*0.506443);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebcd50() {
   return (neuron0x1eab700()*-0.0253129);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd3d0() {
   return (neuron0x1eab920()*0.00881935);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd410() {
   return (neuron0x1eabc60()*-0.00375606);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd450() {
   return (neuron0x1eabfa0()*0.0447511);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd490() {
   return (neuron0x1eac2e0()*0.0125015);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd4d0() {
   return (neuron0x1eac620()*0.0681435);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd510() {
   return (neuron0x1eac960()*-0.0300741);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf3e0() {
   return (neuron0x1ea7e30()*0.0205524);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf420() {
   return (neuron0x1ea80e0()*0.0125112);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf460() {
   return (neuron0x1ea8420()*0.0375329);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf4a0() {
   return (neuron0x1ea8760()*0.0157597);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf4e0() {
   return (neuron0x1ea8aa0()*0.00322547);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf520() {
   return (neuron0x1ea8de0()*-0.00274171);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf560() {
   return (neuron0x1ea9120()*0.0139639);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf5a0() {
   return (neuron0x1ea9460()*0.00675687);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf5e0() {
   return (neuron0x1ea97a0()*0.00203284);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf620() {
   return (neuron0x1ea9ae0()*0.00233054);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf660() {
   return (neuron0x1ea9e20()*0.012636);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf6a0() {
   return (neuron0x1eaa160()*-0.00439581);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf6e0() {
   return (neuron0x1eaa4a0()*0.00394627);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf720() {
   return (neuron0x1eaa7e0()*0.0137811);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf760() {
   return (neuron0x1eaab20()*0.0117241);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf7a0() {
   return (neuron0x1eaae60()*-0.0142016);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd550() {
   return (neuron0x1eab1a0()*0.00780307);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd590() {
   return (neuron0x1eab700()*-0.0108614);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf8f0() {
   return (neuron0x1eab920()*-0.0129672);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf930() {
   return (neuron0x1eabc60()*0.0157957);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf970() {
   return (neuron0x1eabfa0()*-0.0137723);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf9b0() {
   return (neuron0x1eac2e0()*0.00885163);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf9f0() {
   return (neuron0x1eac620()*-0.00253496);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfa30() {
   return (neuron0x1eac960()*8.60453);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfdb0() {
   return (neuron0x1ea7e30()*0.842924);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfdf0() {
   return (neuron0x1ea80e0()*-0.0300066);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfe30() {
   return (neuron0x1ea8420()*-0.431196);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfe70() {
   return (neuron0x1ea8760()*0.0109523);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfeb0() {
   return (neuron0x1ea8aa0()*-0.0218772);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfef0() {
   return (neuron0x1ea8de0()*-0.0217396);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecff30() {
   return (neuron0x1ea9120()*0.0158561);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecff70() {
   return (neuron0x1ea9460()*-0.0152296);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecffb0() {
   return (neuron0x1ea97a0()*0.00709966);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfff0() {
   return (neuron0x1ea9ae0()*0.0188755);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0030() {
   return (neuron0x1ea9e20()*-0.0990033);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0070() {
   return (neuron0x1eaa160()*0.000218448);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed00b0() {
   return (neuron0x1eaa4a0()*0.18276);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed00f0() {
   return (neuron0x1eaa7e0()*0.0183084);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0130() {
   return (neuron0x1eaab20()*-0.00321047);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0170() {
   return (neuron0x1eaae60()*-0.0547592);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfc00() {
   return (neuron0x1eab1a0()*-0.0279622);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfc40() {
   return (neuron0x1eab700()*0.0164484);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed02c0() {
   return (neuron0x1eab920()*0.0393307);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0300() {
   return (neuron0x1eabc60()*0.0451018);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0340() {
   return (neuron0x1eabfa0()*0.00984241);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0380() {
   return (neuron0x1eac2e0()*-0.0352765);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed03c0() {
   return (neuron0x1eac620()*-0.009678);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0400() {
   return (neuron0x1eac960()*2.35136);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0780() {
   return (neuron0x1ea7e30()*-0.0153762);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed07c0() {
   return (neuron0x1ea80e0()*-0.0111817);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0800() {
   return (neuron0x1ea8420()*-5.06575);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0840() {
   return (neuron0x1ea8760()*0.00829047);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0880() {
   return (neuron0x1ea8aa0()*0.00271461);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed08c0() {
   return (neuron0x1ea8de0()*-0.0152311);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0900() {
   return (neuron0x1ea9120()*-0.0243639);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0940() {
   return (neuron0x1ea9460()*-0.00439222);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0980() {
   return (neuron0x1ea97a0()*-0.010638);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed09c0() {
   return (neuron0x1ea9ae0()*-0.00859681);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0a00() {
   return (neuron0x1ea9e20()*-0.00373752);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0a40() {
   return (neuron0x1eaa160()*-0.0130926);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0a80() {
   return (neuron0x1eaa4a0()*0.00941645);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0ac0() {
   return (neuron0x1eaa7e0()*-0.00668752);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0b00() {
   return (neuron0x1eaab20()*-0.00272329);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0b40() {
   return (neuron0x1eaae60()*-0.00721196);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed05d0() {
   return (neuron0x1eab1a0()*-0.00604241);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0610() {
   return (neuron0x1eab700()*0.00327899);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0c90() {
   return (neuron0x1eab920()*0.00642194);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0cd0() {
   return (neuron0x1eabc60()*-0.00343301);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0d10() {
   return (neuron0x1eabfa0()*-0.00860616);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0d50() {
   return (neuron0x1eac2e0()*0.00136644);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0d90() {
   return (neuron0x1eac620()*0.00359746);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0dd0() {
   return (neuron0x1eac960()*-6.48218);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1150() {
   return (neuron0x1ea7e30()*0.00582718);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1190() {
   return (neuron0x1ea80e0()*-0.020172);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed11d0() {
   return (neuron0x1ea8420()*0.120583);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1210() {
   return (neuron0x1ea8760()*3.17839);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1250() {
   return (neuron0x1ea8aa0()*0.0409333);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1290() {
   return (neuron0x1ea8de0()*-0.0166444);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed12d0() {
   return (neuron0x1ea9120()*0.028218);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1310() {
   return (neuron0x1ea9460()*-0.0121709);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1350() {
   return (neuron0x1ea97a0()*-0.04802);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1390() {
   return (neuron0x1ea9ae0()*-0.00745808);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed13d0() {
   return (neuron0x1ea9e20()*-0.0328994);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1410() {
   return (neuron0x1eaa160()*0.0317998);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1450() {
   return (neuron0x1eaa4a0()*-0.577832);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1490() {
   return (neuron0x1eaa7e0()*0.0715444);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed14d0() {
   return (neuron0x1eaab20()*-0.00923943);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1510() {
   return (neuron0x1eaae60()*0.0777452);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0fa0() {
   return (neuron0x1eab1a0()*0.033469);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0fe0() {
   return (neuron0x1eab700()*0.00599147);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1660() {
   return (neuron0x1eab920()*0.0355475);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed16a0() {
   return (neuron0x1eabc60()*0.0267261);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed16e0() {
   return (neuron0x1eabfa0()*0.000228067);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1720() {
   return (neuron0x1eac2e0()*0.00830097);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1760() {
   return (neuron0x1eac620()*0.0072498);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed17a0() {
   return (neuron0x1eac960()*0.0431507);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadd30() {
   return (neuron0x1eacdd0()*-0.00151982);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eadd70() {
   return (neuron0x1ead720()*1.9184);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf250() {
   return (neuron0x1eae200()*-0.203084);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaf290() {
   return (neuron0x1c71550()*-0.0989432);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafc20() {
   return (neuron0x1eaefa0()*0.0271326);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eafc60() {
   return (neuron0x1eaf970()*0.278113);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb09f0() {
   return (neuron0x1eb0740()*-0.148791);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0a30() {
   return (neuron0x1eb1110()*-0.0692194);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb13c0() {
   return (neuron0x1eb1ae0()*-0.1113);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1400() {
   return (neuron0x1eb25c0()*-1.31265);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1d90() {
   return (neuron0x1eb2f90()*-0.0814586);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb1dd0() {
   return (neuron0x1eb0070()*-0.219597);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb2870() {
   return (neuron0x1eb4b40()*-0.0810866);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb28b0() {
   return (neuron0x1eb5510()*0.55974);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3240() {
   return (neuron0x1eb5ee0()*-1.1434);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3280() {
   return (neuron0x1eb68b0()*-0.00835032);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0320() {
   return (neuron0x1eb86c0()*-0.00446449);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb0360() {
   return (neuron0x1eb89a0()*0.522568);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4df0() {
   return (neuron0x1eb9370()*-0.004935);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb4e30() {
   return (neuron0x1eb9d40()*0.087741);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb57c0() {
   return (neuron0x1eba710()*-0.329972);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb5800() {
   return (neuron0x1ebb0e0()*1.48847);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6190() {
   return (neuron0x1eb3c30()*2.27483);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb61d0() {
   return (neuron0x1eb4600()*0.516242);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6b60() {
   return (neuron0x1ebde70()*0.0228402);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb6ba0() {
   return (neuron0x1ebe840()*-1.6442);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaad40() {
   return (neuron0x1ebf210()*-0.105211);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eaad80() {
   return (neuron0x1ebfbe0()*0.00112052);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8c50() {
   return (neuron0x1ec05b0()*2.25821);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb8c90() {
   return (neuron0x1ec0f80()*-0.246571);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9620() {
   return (neuron0x1ec1950()*0.0414325);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9660() {
   return (neuron0x1ec2320()*-0.536957);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb9ff0() {
   return (neuron0x1eb83b0()*-0.0656673);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba030() {
   return (neuron0x1ec4f00()*-0.489991);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eba9c0() {
   return (neuron0x1ec58d0()*0.00971253);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebaa00() {
   return (neuron0x1ec62a0()*-1.62955);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb390() {
   return (neuron0x1ec6c70()*-0.0615568);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebb3d0() {
   return (neuron0x1ec7640()*-0.0210899);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3ee0() {
   return (neuron0x1ec8010()*-0.01386);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb3f20() {
   return (neuron0x1ec89e0()*-0.382703);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd790() {
   return (neuron0x1ec93b0()*-0.0892626);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebd7d0() {
   return (neuron0x1ec9f90()*0.0537713);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe120() {
   return (neuron0x1eca960()*-0.567515);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebe160() {
   return (neuron0x1ebb7e0()*0.0410768);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebeaf0() {
   return (neuron0x1ebc1b0()*0.033818);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebeb30() {
   return (neuron0x1ebcb80()*0.026188);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf4c0() {
   return (neuron0x1ecf1c0()*2.0591);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebf500() {
   return (neuron0x1ecfa70()*-0.204745);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfe90() {
   return (neuron0x1ed0440()*-0.801847);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebfed0() {
   return (neuron0x1ed0e10()*-0.0686379);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec25d0() {
   return (neuron0x1eacdd0()*-0.0791343);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec2610() {
   return (neuron0x1ead720()*1.29264);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7b90() {
   return (neuron0x1eae200()*-0.00435208);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eb7bd0() {
   return (neuron0x1c71550()*-0.169093);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec51b0() {
   return (neuron0x1eaefa0()*-0.0305202);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec51f0() {
   return (neuron0x1eaf970()*0.611108);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5b80() {
   return (neuron0x1eb0740()*0.287793);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec5bc0() {
   return (neuron0x1eb1110()*-0.107369);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6550() {
   return (neuron0x1eb1ae0()*0.368782);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6590() {
   return (neuron0x1eb25c0()*1.00947);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6f20() {
   return (neuron0x1eb2f90()*-0.160129);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec6f60() {
   return (neuron0x1eb0070()*0.0724999);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec78f0() {
   return (neuron0x1eb4b40()*-0.247376);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec7930() {
   return (neuron0x1eb5510()*-0.0902154);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec82c0() {
   return (neuron0x1eb5ee0()*-0.341824);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8300() {
   return (neuron0x1eb68b0()*-0.0474056);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8c90() {
   return (neuron0x1eb86c0()*0.202737);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec8cd0() {
   return (neuron0x1eb89a0()*0.249896);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec9660() {
   return (neuron0x1eb9370()*0.0618739);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec96a0() {
   return (neuron0x1eb9d40()*0.130981);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca240() {
   return (neuron0x1eba710()*-0.333283);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eca280() {
   return (neuron0x1ebb0e0()*-2.3076);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecac10() {
   return (neuron0x1eb3c30()*0.189338);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecac50() {
   return (neuron0x1eb4600()*0.77389);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebba90() {
   return (neuron0x1ebde70()*-0.328024);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebbad0() {
   return (neuron0x1ebe840()*-1.31314);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc460() {
   return (neuron0x1ebf210()*1.49941);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebc4a0() {
   return (neuron0x1ebfbe0()*-0.651356);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebce30() {
   return (neuron0x1ec05b0()*-2.15363);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ebce70() {
   return (neuron0x1ec0f80()*1.10355);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf350() {
   return (neuron0x1ec1950()*0.0952503);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecf390() {
   return (neuron0x1ec2320()*3.18438);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfd20() {
   return (neuron0x1eb83b0()*0.354189);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ecfd60() {
   return (neuron0x1ec4f00()*1.06886);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed06f0() {
   return (neuron0x1ec58d0()*0.0591664);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed0730() {
   return (neuron0x1ec62a0()*-2.23291);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed10c0() {
   return (neuron0x1ec6c70()*0.0640642);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1100() {
   return (neuron0x1ec7640()*0.0642818);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eacff0() {
   return (neuron0x1ec8010()*0.061495);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ead030() {
   return (neuron0x1ec89e0()*1.28774);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec0860() {
   return (neuron0x1ec93b0()*-0.342386);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ec08a0() {
   return (neuron0x1ec9f90()*-0.117955);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed17e0() {
   return (neuron0x1eca960()*2.11911);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1820() {
   return (neuron0x1ebb7e0()*0.0278249);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed1860() {
   return (neuron0x1ebc1b0()*0.0052103);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed18a0() {
   return (neuron0x1ebcb80()*0.039303);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8750() {
   return (neuron0x1ecf1c0()*-1.63587);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8790() {
   return (neuron0x1ecfa70()*0.215317);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed87d0() {
   return (neuron0x1ed0440()*1.70375);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8810() {
   return (neuron0x1ed0e10()*0.964107);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8b90() {
   return (neuron0x1eacdd0()*-0.851063);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8bd0() {
   return (neuron0x1ead720()*1.78797);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8c10() {
   return (neuron0x1eae200()*0.9891);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8c50() {
   return (neuron0x1c71550()*-2.31815);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8c90() {
   return (neuron0x1eaefa0()*-1.75333);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8cd0() {
   return (neuron0x1eaf970()*3.88653);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8d10() {
   return (neuron0x1eb0740()*-3.29748);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8d50() {
   return (neuron0x1eb1110()*-1.68193);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8d90() {
   return (neuron0x1eb1ae0()*-0.308392);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8dd0() {
   return (neuron0x1eb25c0()*1.3293);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8e10() {
   return (neuron0x1eb2f90()*-3.04188);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8e50() {
   return (neuron0x1eb0070()*1.52897);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8e90() {
   return (neuron0x1eb4b40()*-2.63076);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8ed0() {
   return (neuron0x1eb5510()*0.612546);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8f10() {
   return (neuron0x1eb5ee0()*-2.89124);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8f50() {
   return (neuron0x1eb68b0()*-0.908947);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed89e0() {
   return (neuron0x1eb86c0()*0.904223);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8a20() {
   return (neuron0x1eb89a0()*0.652134);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed90a0() {
   return (neuron0x1eb9370()*-1.02826);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed90e0() {
   return (neuron0x1eb9d40()*1.26619);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9120() {
   return (neuron0x1eba710()*-4.72676);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9160() {
   return (neuron0x1ebb0e0()*-0.663608);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed91a0() {
   return (neuron0x1eb3c30()*0.739201);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed91e0() {
   return (neuron0x1eb4600()*0.31521);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9220() {
   return (neuron0x1ebde70()*-3.27347);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9260() {
   return (neuron0x1ebe840()*-1.18737);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed92a0() {
   return (neuron0x1ebf210()*6.34261);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed92e0() {
   return (neuron0x1ebfbe0()*-1.96101);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9320() {
   return (neuron0x1ec05b0()*-3.47117);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9360() {
   return (neuron0x1ec0f80()*7.9454);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed93a0() {
   return (neuron0x1ec1950()*-0.918456);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed93e0() {
   return (neuron0x1ec2320()*3.32045);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8f90() {
   return (neuron0x1eb83b0()*-1.77151);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed8fd0() {
   return (neuron0x1ec4f00()*0.20207);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9010() {
   return (neuron0x1ec58d0()*0.763473);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9050() {
   return (neuron0x1ec62a0()*-2.53669);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9630() {
   return (neuron0x1ec6c70()*-0.809419);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9670() {
   return (neuron0x1ec7640()*-1.62173);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed96b0() {
   return (neuron0x1ec8010()*-0.745595);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed96f0() {
   return (neuron0x1ec89e0()*9.57022);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9730() {
   return (neuron0x1ec93b0()*-2.47565);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9770() {
   return (neuron0x1ec9f90()*0.524731);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed97b0() {
   return (neuron0x1eca960()*0.650904);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed97f0() {
   return (neuron0x1ebb7e0()*-1.37181);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9830() {
   return (neuron0x1ebc1b0()*0.528816);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9870() {
   return (neuron0x1ebcb80()*0.916757);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed98b0() {
   return (neuron0x1ecf1c0()*-3.14075);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed98f0() {
   return (neuron0x1ecfa70()*-0.203175);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9930() {
   return (neuron0x1ed0440()*1.46613);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9970() {
   return (neuron0x1ed0e10()*5.66001);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9cf0() {
   return (neuron0x1eacdd0()*0.00200325);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9d30() {
   return (neuron0x1ead720()*-0.762371);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9d70() {
   return (neuron0x1eae200()*0.0268046);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9db0() {
   return (neuron0x1c71550()*-0.0361872);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9df0() {
   return (neuron0x1eaefa0()*-0.0731203);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9e30() {
   return (neuron0x1eaf970()*-0.121922);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9e70() {
   return (neuron0x1eb0740()*0.209932);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9eb0() {
   return (neuron0x1eb1110()*0.000881395);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9ef0() {
   return (neuron0x1eb1ae0()*0.208519);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9f30() {
   return (neuron0x1eb25c0()*-0.526679);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9f70() {
   return (neuron0x1eb2f90()*0.119564);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9fb0() {
   return (neuron0x1eb0070()*-0.070214);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9ff0() {
   return (neuron0x1eb4b40()*0.00678384);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda030() {
   return (neuron0x1eb5510()*-0.33411);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda070() {
   return (neuron0x1eb5ee0()*0.495456);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda0b0() {
   return (neuron0x1eb68b0()*0.0101053);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9b40() {
   return (neuron0x1eb86c0()*-0.0057966);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1ed9b80() {
   return (neuron0x1eb89a0()*-0.340025);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda200() {
   return (neuron0x1eb9370()*-0.0183733);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda240() {
   return (neuron0x1eb9d40()*-0.0469651);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda280() {
   return (neuron0x1eba710()*-0.0971536);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda2c0() {
   return (neuron0x1ebb0e0()*1.06912);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda300() {
   return (neuron0x1eb3c30()*-0.426746);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda340() {
   return (neuron0x1eb4600()*-0.224118);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda380() {
   return (neuron0x1ebde70()*-0.293235);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda3c0() {
   return (neuron0x1ebe840()*1.44691);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda400() {
   return (neuron0x1ebf210()*-0.0576643);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda440() {
   return (neuron0x1ebfbe0()*0.037384);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda480() {
   return (neuron0x1ec05b0()*0.286811);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda4c0() {
   return (neuron0x1ec0f80()*-0.157852);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda500() {
   return (neuron0x1ec1950()*0.0111741);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda540() {
   return (neuron0x1ec2320()*-0.641973);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda0f0() {
   return (neuron0x1eb83b0()*0.136712);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda130() {
   return (neuron0x1ec4f00()*-0.987856);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda170() {
   return (neuron0x1ec58d0()*-0.00930821);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda1b0() {
   return (neuron0x1ec62a0()*2.23908);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda790() {
   return (neuron0x1ec6c70()*0.00552135);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda7d0() {
   return (neuron0x1ec7640()*-0.0346421);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda810() {
   return (neuron0x1ec8010()*-1.56141e-05);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda850() {
   return (neuron0x1ec89e0()*-0.0787822);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda890() {
   return (neuron0x1ec93b0()*-0.00262844);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda8d0() {
   return (neuron0x1ec9f90()*0.0286602);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda910() {
   return (neuron0x1eca960()*-0.907744);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda950() {
   return (neuron0x1ebb7e0()*-0.0589218);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda990() {
   return (neuron0x1ebc1b0()*0.00662914);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1eda9d0() {
   return (neuron0x1ebcb80()*-0.00703515);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edaa10() {
   return (neuron0x1ecf1c0()*0.321685);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edaa50() {
   return (neuron0x1ecfa70()*-0.126512);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edaa90() {
   return (neuron0x1ed0440()*-1.34946);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edaad0() {
   return (neuron0x1ed0e10()*-0.153749);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edae50() {
   return (neuron0x1eacdd0()*-0.0346013);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edae90() {
   return (neuron0x1ead720()*0.322187);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edaed0() {
   return (neuron0x1eae200()*0.554309);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edaf10() {
   return (neuron0x1c71550()*-0.878454);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edaf50() {
   return (neuron0x1eaefa0()*-1.31821);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edaf90() {
   return (neuron0x1eaf970()*0.163443);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edafd0() {
   return (neuron0x1eb0740()*1.42238);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb010() {
   return (neuron0x1eb1110()*-0.304355);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb050() {
   return (neuron0x1eb1ae0()*0.0531072);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb090() {
   return (neuron0x1eb25c0()*0.0789113);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb0d0() {
   return (neuron0x1eb2f90()*1.08216);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb110() {
   return (neuron0x1eb0070()*-1.35689);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb150() {
   return (neuron0x1eb4b40()*-0.523934);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb190() {
   return (neuron0x1eb5510()*-0.851375);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb1d0() {
   return (neuron0x1eb5ee0()*-0.0467687);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb210() {
   return (neuron0x1eb68b0()*-0.102842);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edaca0() {
   return (neuron0x1eb86c0()*-0.140794);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edace0() {
   return (neuron0x1eb89a0()*-0.176777);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb360() {
   return (neuron0x1eb9370()*-0.325931);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb3a0() {
   return (neuron0x1eb9d40()*-0.238592);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb3e0() {
   return (neuron0x1eba710()*-0.8125);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb420() {
   return (neuron0x1ebb0e0()*-0.517489);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb460() {
   return (neuron0x1eb3c30()*-0.166761);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb4a0() {
   return (neuron0x1eb4600()*0.0321882);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb4e0() {
   return (neuron0x1ebde70()*-0.580214);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb520() {
   return (neuron0x1ebe840()*-0.382502);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb560() {
   return (neuron0x1ebf210()*-0.723414);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb5a0() {
   return (neuron0x1ebfbe0()*0.459916);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb5e0() {
   return (neuron0x1ec05b0()*0.0212898);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb620() {
   return (neuron0x1ec0f80()*1.56595);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb660() {
   return (neuron0x1ec1950()*0.0716927);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb6a0() {
   return (neuron0x1ec2320()*0.267732);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb250() {
   return (neuron0x1eb83b0()*1.20048);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb290() {
   return (neuron0x1ec4f00()*0.258111);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb2d0() {
   return (neuron0x1ec58d0()*0.183582);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb310() {
   return (neuron0x1ec62a0()*-0.129135);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb8f0() {
   return (neuron0x1ec6c70()*-0.0660338);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb930() {
   return (neuron0x1ec7640()*-0.585466);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb970() {
   return (neuron0x1ec8010()*-0.0510403);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb9b0() {
   return (neuron0x1ec89e0()*-0.434034);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edb9f0() {
   return (neuron0x1ec93b0()*-0.385045);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edba30() {
   return (neuron0x1ec9f90()*1.24195);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edba70() {
   return (neuron0x1eca960()*-0.228741);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbab0() {
   return (neuron0x1ebb7e0()*-1.0954);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbaf0() {
   return (neuron0x1ebc1b0()*-0.0583276);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbb30() {
   return (neuron0x1ebcb80()*0.114799);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbb70() {
   return (neuron0x1ecf1c0()*0.0908615);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbbb0() {
   return (neuron0x1ecfa70()*-0.0463721);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbbf0() {
   return (neuron0x1ed0440()*0.494004);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbc30() {
   return (neuron0x1ed0e10()*-0.000665958);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbe90() {
   return (neuron0x1ed8010()*-1.6444);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbed0() {
   return (neuron0x1ed83b0()*-4.40671);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbf10() {
   return (neuron0x1ed8850()*-9.6331);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbf50() {
   return (neuron0x1ed99b0()*7.21652);
}

double NNfunction_ns_chiPlus1_cL::synapse0x1edbf90() {
   return (neuron0x1edab10()*-0.797618);
}

