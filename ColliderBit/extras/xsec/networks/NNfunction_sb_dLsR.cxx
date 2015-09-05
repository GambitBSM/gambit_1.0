#include "NNfunction_sb_dLsR.h"
#include <cmath>

double NNfunction_sb_dLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8272)/15.0327;
   input1 = (in1 - 52.5282)/744.773;
   input2 = (in2 - 383.128)/480.757;
   input3 = (in3 - 266.894)/628.733;
   input4 = (in4 - 735.62)/694.542;
   input5 = (in5 - 630.79)/664.527;
   input6 = (in6 - 641.592)/673.213;
   input7 = (in7 - 631.899)/662.582;
   input8 = (in8 - 637.607)/706.237;
   input9 = (in9 - 626.339)/689.345;
   input10 = (in10 - 638.98)/716.31;
   input11 = (in11 - 540.169)/334.801;
   input12 = (in12 - 680.913)/595.502;
   input13 = (in13 - 523.434)/363.35;
   input14 = (in14 - 662.633)/546.246;
   input15 = (in15 - 663.436)/546.371;
   input16 = (in16 - 472.116)/381.643;
   input17 = (in17 - 689.186)/615.882;
   input18 = (in18 - 532.171)/333.743;
   input19 = (in19 - 687.856)/606.072;
   input20 = (in20 - -208.796)/410.156;
   input21 = (in21 - -269.57)/892.919;
   input22 = (in22 - 2.38499)/890.34;
   input23 = (in23 - -14.1067)/496.063;
   switch(index) {
     case 0:
         return neuron0x2cd9f20();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLsR::Value(int index, double* input) {
   input0 = (input[0] - 22.8272)/15.0327;
   input1 = (input[1] - 52.5282)/744.773;
   input2 = (input[2] - 383.128)/480.757;
   input3 = (input[3] - 266.894)/628.733;
   input4 = (input[4] - 735.62)/694.542;
   input5 = (input[5] - 630.79)/664.527;
   input6 = (input[6] - 641.592)/673.213;
   input7 = (input[7] - 631.899)/662.582;
   input8 = (input[8] - 637.607)/706.237;
   input9 = (input[9] - 626.339)/689.345;
   input10 = (input[10] - 638.98)/716.31;
   input11 = (input[11] - 540.169)/334.801;
   input12 = (input[12] - 680.913)/595.502;
   input13 = (input[13] - 523.434)/363.35;
   input14 = (input[14] - 662.633)/546.246;
   input15 = (input[15] - 663.436)/546.371;
   input16 = (input[16] - 472.116)/381.643;
   input17 = (input[17] - 689.186)/615.882;
   input18 = (input[18] - 532.171)/333.743;
   input19 = (input[19] - 687.856)/606.072;
   input20 = (input[20] - -208.796)/410.156;
   input21 = (input[21] - -269.57)/892.919;
   input22 = (input[22] - 2.38499)/890.34;
   input23 = (input[23] - -14.1067)/496.063;
   switch(index) {
     case 0:
         return neuron0x2cd9f20();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLsR::neuron0x2ca60e0() {
   return input0;
}

double NNfunction_sb_dLsR::neuron0x2ca6390() {
   return input1;
}

double NNfunction_sb_dLsR::neuron0x2ca66d0() {
   return input2;
}

double NNfunction_sb_dLsR::neuron0x2ca6a10() {
   return input3;
}

double NNfunction_sb_dLsR::neuron0x2ca6d50() {
   return input4;
}

double NNfunction_sb_dLsR::neuron0x2ca7090() {
   return input5;
}

double NNfunction_sb_dLsR::neuron0x2ca73d0() {
   return input6;
}

double NNfunction_sb_dLsR::neuron0x2ca7710() {
   return input7;
}

double NNfunction_sb_dLsR::neuron0x2ca7a50() {
   return input8;
}

double NNfunction_sb_dLsR::neuron0x2ca7d90() {
   return input9;
}

double NNfunction_sb_dLsR::neuron0x2ca80d0() {
   return input10;
}

double NNfunction_sb_dLsR::neuron0x2ca8410() {
   return input11;
}

double NNfunction_sb_dLsR::neuron0x2ca8750() {
   return input12;
}

double NNfunction_sb_dLsR::neuron0x2ca8a90() {
   return input13;
}

double NNfunction_sb_dLsR::neuron0x2ca8dd0() {
   return input14;
}

double NNfunction_sb_dLsR::neuron0x2ca9110() {
   return input15;
}

double NNfunction_sb_dLsR::neuron0x2ca9450() {
   return input16;
}

double NNfunction_sb_dLsR::neuron0x2ca99b0() {
   return input17;
}

double NNfunction_sb_dLsR::neuron0x2ca9bd0() {
   return input18;
}

double NNfunction_sb_dLsR::neuron0x2ca9f10() {
   return input19;
}

double NNfunction_sb_dLsR::neuron0x2caa250() {
   return input20;
}

double NNfunction_sb_dLsR::neuron0x2caa590() {
   return input21;
}

double NNfunction_sb_dLsR::neuron0x2caa8d0() {
   return input22;
}

double NNfunction_sb_dLsR::neuron0x2caac10() {
   return input23;
}

double NNfunction_sb_dLsR::input0x2cab080() {
   double input = 0.353209;
   input += synapse0x2ca6060();
   input += synapse0x2ca60a0();
   input += synapse0x2cab330();
   input += synapse0x2cab370();
   input += synapse0x2cab3b0();
   input += synapse0x2cab3f0();
   input += synapse0x2cab430();
   input += synapse0x2cab470();
   input += synapse0x2cab4b0();
   input += synapse0x2cab4f0();
   input += synapse0x2cab530();
   input += synapse0x2cab570();
   input += synapse0x2cab5b0();
   input += synapse0x2cab5f0();
   input += synapse0x2cab630();
   input += synapse0x2cab670();
   input += synapse0x2ca5fd0();
   input += synapse0x2ca6010();
   input += synapse0x2a611b0();
   input += synapse0x2a611f0();
   input += synapse0x2cab8d0();
   input += synapse0x2cab910();
   input += synapse0x2cab950();
   input += synapse0x2cab990();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cab080() {
   double input = input0x2cab080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cab9d0() {
   double input = 2.70995;
   input += synapse0x2cabd10();
   input += synapse0x2cabd50();
   input += synapse0x2cabd90();
   input += synapse0x2cabdd0();
   input += synapse0x2cabe10();
   input += synapse0x2cabe50();
   input += synapse0x2cabe90();
   input += synapse0x2cabed0();
   input += synapse0x2cabf10();
   input += synapse0x2cab7c0();
   input += synapse0x2cab800();
   input += synapse0x2cab840();
   input += synapse0x2cab880();
   input += synapse0x2cac160();
   input += synapse0x2cac1a0();
   input += synapse0x2cac1e0();
   input += synapse0x2cabb60();
   input += synapse0x2cabba0();
   input += synapse0x2cac330();
   input += synapse0x2cac370();
   input += synapse0x2cac3b0();
   input += synapse0x2cac3f0();
   input += synapse0x2cac430();
   input += synapse0x2cac470();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cab9d0() {
   double input = input0x2cab9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cac4b0() {
   double input = 0.253564;
   input += synapse0x2cac7f0();
   input += synapse0x2cac830();
   input += synapse0x2cac870();
   input += synapse0x2cac8b0();
   input += synapse0x2cac8f0();
   input += synapse0x2cac930();
   input += synapse0x2cac970();
   input += synapse0x2cac9b0();
   input += synapse0x2cac9f0();
   input += synapse0x2caca30();
   input += synapse0x2caca70();
   input += synapse0x2cacab0();
   input += synapse0x2cacaf0();
   input += synapse0x2cacb30();
   input += synapse0x2cacb70();
   input += synapse0x2cacbb0();
   input += synapse0x2cac640();
   input += synapse0x2cac680();
   input += synapse0x2c95150();
   input += synapse0x2a6f0a0();
   input += synapse0x2a6f0e0();
   input += synapse0x2b8a5f0();
   input += synapse0x2b8a630();
   input += synapse0x2ca5e40();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cac4b0() {
   double input = input0x2cac4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2a6f800() {
   double input = 0.00493348;
   input += synapse0x2a6f990();
   input += synapse0x2cac070();
   input += synapse0x2cac0b0();
   input += synapse0x2cac0f0();
   input += synapse0x2cacd00();
   input += synapse0x2cacd40();
   input += synapse0x2cacd80();
   input += synapse0x2cacdc0();
   input += synapse0x2cace00();
   input += synapse0x2cace40();
   input += synapse0x2cace80();
   input += synapse0x2cacec0();
   input += synapse0x2cacf00();
   input += synapse0x2cacf40();
   input += synapse0x2cacf80();
   input += synapse0x2cacfc0();
   input += synapse0x2ca5e80();
   input += synapse0x2ca5ec0();
   input += synapse0x2ca5f00();
   input += synapse0x2cad110();
   input += synapse0x2cad150();
   input += synapse0x2cad190();
   input += synapse0x2cad1d0();
   input += synapse0x2cad210();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2a6f800() {
   double input = input0x2a6f800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cad250() {
   double input = 1.14571;
   input += synapse0x2cad590();
   input += synapse0x2cad5d0();
   input += synapse0x2cad610();
   input += synapse0x2cad650();
   input += synapse0x2cad690();
   input += synapse0x2cad6d0();
   input += synapse0x2cad710();
   input += synapse0x2cad750();
   input += synapse0x2cad790();
   input += synapse0x2cad7d0();
   input += synapse0x2cad810();
   input += synapse0x2cad850();
   input += synapse0x2cad890();
   input += synapse0x2cad8d0();
   input += synapse0x2cad910();
   input += synapse0x2cad950();
   input += synapse0x2cad3e0();
   input += synapse0x2cad420();
   input += synapse0x2cadaa0();
   input += synapse0x2cadae0();
   input += synapse0x2cadb20();
   input += synapse0x2cadb60();
   input += synapse0x2cadba0();
   input += synapse0x2cadbe0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cad250() {
   double input = input0x2cad250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cadc20() {
   double input = 0.380533;
   input += synapse0x2cadf60();
   input += synapse0x2cadfa0();
   input += synapse0x2cadfe0();
   input += synapse0x2cae020();
   input += synapse0x2cae060();
   input += synapse0x2cae0a0();
   input += synapse0x2cae0e0();
   input += synapse0x2cae120();
   input += synapse0x2cae160();
   input += synapse0x2a6f3f0();
   input += synapse0x2a6f430();
   input += synapse0x2a6f470();
   input += synapse0x2a6f4b0();
   input += synapse0x2a6f4f0();
   input += synapse0x2a6f530();
   input += synapse0x2a6f570();
   input += synapse0x2caddb0();
   input += synapse0x2caddf0();
   input += synapse0x2a6f6c0();
   input += synapse0x2a6f700();
   input += synapse0x2a6f740();
   input += synapse0x2a6f780();
   input += synapse0x2a6f7c0();
   input += synapse0x2cae9b0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cadc20() {
   double input = input0x2cadc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cae9f0() {
   double input = -0.0867629;
   input += synapse0x2caed30();
   input += synapse0x2caed70();
   input += synapse0x2caedb0();
   input += synapse0x2caedf0();
   input += synapse0x2caee30();
   input += synapse0x2caee70();
   input += synapse0x2caeeb0();
   input += synapse0x2caeef0();
   input += synapse0x2caef30();
   input += synapse0x2caef70();
   input += synapse0x2caefb0();
   input += synapse0x2caeff0();
   input += synapse0x2caf030();
   input += synapse0x2caf070();
   input += synapse0x2caf0b0();
   input += synapse0x2caf0f0();
   input += synapse0x2caeb80();
   input += synapse0x2caebc0();
   input += synapse0x2caf240();
   input += synapse0x2caf280();
   input += synapse0x2caf2c0();
   input += synapse0x2caf300();
   input += synapse0x2caf340();
   input += synapse0x2caf380();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cae9f0() {
   double input = input0x2cae9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2caf3c0() {
   double input = 0.166664;
   input += synapse0x2caf700();
   input += synapse0x2caf740();
   input += synapse0x2caf780();
   input += synapse0x2caf7c0();
   input += synapse0x2caf800();
   input += synapse0x2caf840();
   input += synapse0x2caf880();
   input += synapse0x2caf8c0();
   input += synapse0x2caf900();
   input += synapse0x2caf940();
   input += synapse0x2caf980();
   input += synapse0x2caf9c0();
   input += synapse0x2cafa00();
   input += synapse0x2cafa40();
   input += synapse0x2cafa80();
   input += synapse0x2cafac0();
   input += synapse0x2caf550();
   input += synapse0x2caf590();
   input += synapse0x2cafc10();
   input += synapse0x2cafc50();
   input += synapse0x2cafc90();
   input += synapse0x2cafcd0();
   input += synapse0x2cafd10();
   input += synapse0x2cafd50();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2caf3c0() {
   double input = input0x2caf3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cafd90() {
   double input = -2.30557;
   input += synapse0x2ca98a0();
   input += synapse0x2ca98e0();
   input += synapse0x2ca9920();
   input += synapse0x2ca9960();
   input += synapse0x2cb02e0();
   input += synapse0x2cb0320();
   input += synapse0x2cb0360();
   input += synapse0x2cb03a0();
   input += synapse0x2cb03e0();
   input += synapse0x2cb0420();
   input += synapse0x2cb0460();
   input += synapse0x2cb04a0();
   input += synapse0x2cb04e0();
   input += synapse0x2cb0520();
   input += synapse0x2cb0560();
   input += synapse0x2cb05a0();
   input += synapse0x2caff20();
   input += synapse0x2caff60();
   input += synapse0x2cb06f0();
   input += synapse0x2cb0730();
   input += synapse0x2cb0770();
   input += synapse0x2cb07b0();
   input += synapse0x2cb07f0();
   input += synapse0x2cb0830();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cafd90() {
   double input = input0x2cafd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb0870() {
   double input = -0.243963;
   input += synapse0x2cb0bb0();
   input += synapse0x2cb0bf0();
   input += synapse0x2cb0c30();
   input += synapse0x2cb0c70();
   input += synapse0x2cb0cb0();
   input += synapse0x2cb0cf0();
   input += synapse0x2cb0d30();
   input += synapse0x2cb0d70();
   input += synapse0x2cb0db0();
   input += synapse0x2cb0df0();
   input += synapse0x2cb0e30();
   input += synapse0x2cb0e70();
   input += synapse0x2cb0eb0();
   input += synapse0x2cb0ef0();
   input += synapse0x2cb0f30();
   input += synapse0x2cb0f70();
   input += synapse0x2cb0a00();
   input += synapse0x2cb0a40();
   input += synapse0x2cb10c0();
   input += synapse0x2cb1100();
   input += synapse0x2cb1140();
   input += synapse0x2cb1180();
   input += synapse0x2cb11c0();
   input += synapse0x2cb1200();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb0870() {
   double input = input0x2cb0870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb1240() {
   double input = -0.539094;
   input += synapse0x2cb1580();
   input += synapse0x2cb15c0();
   input += synapse0x2cb1600();
   input += synapse0x2cb1640();
   input += synapse0x2cb1680();
   input += synapse0x2cb16c0();
   input += synapse0x2cb1700();
   input += synapse0x2cb1740();
   input += synapse0x2cb1780();
   input += synapse0x2cb17c0();
   input += synapse0x2cb1800();
   input += synapse0x2cb1840();
   input += synapse0x2cb1880();
   input += synapse0x2cb18c0();
   input += synapse0x2cb1900();
   input += synapse0x2cb1940();
   input += synapse0x2cb13d0();
   input += synapse0x2cb1410();
   input += synapse0x2cae1a0();
   input += synapse0x2cae1e0();
   input += synapse0x2cae220();
   input += synapse0x2cae260();
   input += synapse0x2cae2a0();
   input += synapse0x2cae2e0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb1240() {
   double input = input0x2cb1240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cae320() {
   double input = -0.328877;
   input += synapse0x2cae660();
   input += synapse0x2cae6a0();
   input += synapse0x2cae6e0();
   input += synapse0x2cae720();
   input += synapse0x2cae760();
   input += synapse0x2cae7a0();
   input += synapse0x2cae7e0();
   input += synapse0x2cae820();
   input += synapse0x2cae860();
   input += synapse0x2cae8a0();
   input += synapse0x2cae8e0();
   input += synapse0x2cae920();
   input += synapse0x2cae960();
   input += synapse0x2cb2aa0();
   input += synapse0x2cb2ae0();
   input += synapse0x2cb2b20();
   input += synapse0x2cae4b0();
   input += synapse0x2cae4f0();
   input += synapse0x2cb2c70();
   input += synapse0x2cb2cb0();
   input += synapse0x2cb2cf0();
   input += synapse0x2cb2d30();
   input += synapse0x2cb2d70();
   input += synapse0x2cb2db0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cae320() {
   double input = input0x2cae320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb2df0() {
   double input = -0.195786;
   input += synapse0x2cb3130();
   input += synapse0x2cb3170();
   input += synapse0x2cb31b0();
   input += synapse0x2cb31f0();
   input += synapse0x2cb3230();
   input += synapse0x2cb3270();
   input += synapse0x2cb32b0();
   input += synapse0x2cb32f0();
   input += synapse0x2cb3330();
   input += synapse0x2cb3370();
   input += synapse0x2cb33b0();
   input += synapse0x2cb33f0();
   input += synapse0x2cb3430();
   input += synapse0x2cb3470();
   input += synapse0x2cb34b0();
   input += synapse0x2cb34f0();
   input += synapse0x2cb2f80();
   input += synapse0x2cb2fc0();
   input += synapse0x2cb3640();
   input += synapse0x2cb3680();
   input += synapse0x2cb36c0();
   input += synapse0x2cb3700();
   input += synapse0x2cb3740();
   input += synapse0x2cb3780();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb2df0() {
   double input = input0x2cb2df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb37c0() {
   double input = 0.538732;
   input += synapse0x2cb3b00();
   input += synapse0x2cb3b40();
   input += synapse0x2cb3b80();
   input += synapse0x2cb3bc0();
   input += synapse0x2cb3c00();
   input += synapse0x2cb3c40();
   input += synapse0x2cb3c80();
   input += synapse0x2cb3cc0();
   input += synapse0x2cb3d00();
   input += synapse0x2cb3d40();
   input += synapse0x2cb3d80();
   input += synapse0x2cb3dc0();
   input += synapse0x2cb3e00();
   input += synapse0x2cb3e40();
   input += synapse0x2cb3e80();
   input += synapse0x2cb3ec0();
   input += synapse0x2cb3950();
   input += synapse0x2cb3990();
   input += synapse0x2cb4010();
   input += synapse0x2cb4050();
   input += synapse0x2cb4090();
   input += synapse0x2cb40d0();
   input += synapse0x2cb4110();
   input += synapse0x2cb4150();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb37c0() {
   double input = input0x2cb37c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb4190() {
   double input = 0.132384;
   input += synapse0x2cb44d0();
   input += synapse0x2cb4510();
   input += synapse0x2cb4550();
   input += synapse0x2cb4590();
   input += synapse0x2cb45d0();
   input += synapse0x2cb4610();
   input += synapse0x2cb4650();
   input += synapse0x2cb4690();
   input += synapse0x2cb46d0();
   input += synapse0x2cb4710();
   input += synapse0x2cb4750();
   input += synapse0x2cb4790();
   input += synapse0x2cb47d0();
   input += synapse0x2cb4810();
   input += synapse0x2cb4850();
   input += synapse0x2cb4890();
   input += synapse0x2cb4320();
   input += synapse0x2cb4360();
   input += synapse0x2cb49e0();
   input += synapse0x2cb4a20();
   input += synapse0x2cb4a60();
   input += synapse0x2cb4aa0();
   input += synapse0x2cb4ae0();
   input += synapse0x2cb4b20();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb4190() {
   double input = input0x2cb4190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb4b60() {
   double input = -0.261184;
   input += synapse0x2cb4ea0();
   input += synapse0x2ca6270();
   input += synapse0x2ca62b0();
   input += synapse0x2ca65b0();
   input += synapse0x2ca65f0();
   input += synapse0x2ca68f0();
   input += synapse0x2ca6930();
   input += synapse0x2ca6c30();
   input += synapse0x2ca6c70();
   input += synapse0x2ca6f70();
   input += synapse0x2ca6fb0();
   input += synapse0x2ca72b0();
   input += synapse0x2ca72f0();
   input += synapse0x2ca75f0();
   input += synapse0x2ca7630();
   input += synapse0x2ca7930();
   input += synapse0x2ca7970();
   input += synapse0x2ca7c70();
   input += synapse0x2ca7cb0();
   input += synapse0x2ca7fb0();
   input += synapse0x2ca7ff0();
   input += synapse0x2ca82f0();
   input += synapse0x2ca8330();
   input += synapse0x2ca8630();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb4b60() {
   double input = input0x2cb4b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb6970() {
   double input = 0.455048;
   input += synapse0x2ca8670();
   input += synapse0x2ca9330();
   input += synapse0x2ca9370();
   input += synapse0x2cb4cf0();
   input += synapse0x2cb4d30();
   input += synapse0x2ca9670();
   input += synapse0x2ca96b0();
   input += synapse0x2a61090();
   input += synapse0x2a610d0();
   input += synapse0x2ca9df0();
   input += synapse0x2ca9e30();
   input += synapse0x2caa130();
   input += synapse0x2caa170();
   input += synapse0x2caa470();
   input += synapse0x2caa4b0();
   input += synapse0x2caa7b0();
   input += synapse0x2caa7f0();
   input += synapse0x2caaaf0();
   input += synapse0x2caab30();
   input += synapse0x2caae30();
   input += synapse0x2caae70();
   input += synapse0x2ca8970();
   input += synapse0x2ca89b0();
   input += synapse0x2cb6c10();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb6970() {
   double input = input0x2cb6970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb6c50() {
   double input = 2.28379;
   input += synapse0x2cb6f90();
   input += synapse0x2cb6fd0();
   input += synapse0x2cb7010();
   input += synapse0x2cb7050();
   input += synapse0x2cb7090();
   input += synapse0x2cb70d0();
   input += synapse0x2cb7110();
   input += synapse0x2cb7150();
   input += synapse0x2cb7190();
   input += synapse0x2cb71d0();
   input += synapse0x2cb7210();
   input += synapse0x2cb7250();
   input += synapse0x2cb7290();
   input += synapse0x2cb72d0();
   input += synapse0x2cb7310();
   input += synapse0x2cb7350();
   input += synapse0x2cb6de0();
   input += synapse0x2cb6e20();
   input += synapse0x2cb74a0();
   input += synapse0x2cb74e0();
   input += synapse0x2cb7520();
   input += synapse0x2cb7560();
   input += synapse0x2cb75a0();
   input += synapse0x2cb75e0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb6c50() {
   double input = input0x2cb6c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb7620() {
   double input = 3.49282;
   input += synapse0x2cb7960();
   input += synapse0x2cb79a0();
   input += synapse0x2cb79e0();
   input += synapse0x2cb7a20();
   input += synapse0x2cb7a60();
   input += synapse0x2cb7aa0();
   input += synapse0x2cb7ae0();
   input += synapse0x2cb7b20();
   input += synapse0x2cb7b60();
   input += synapse0x2cb7ba0();
   input += synapse0x2cb7be0();
   input += synapse0x2cb7c20();
   input += synapse0x2cb7c60();
   input += synapse0x2cb7ca0();
   input += synapse0x2cb7ce0();
   input += synapse0x2cb7d20();
   input += synapse0x2cb77b0();
   input += synapse0x2cb77f0();
   input += synapse0x2cb7e70();
   input += synapse0x2cb7eb0();
   input += synapse0x2cb7ef0();
   input += synapse0x2cb7f30();
   input += synapse0x2cb7f70();
   input += synapse0x2cb7fb0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb7620() {
   double input = input0x2cb7620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb7ff0() {
   double input = 0.0520591;
   input += synapse0x2cb8330();
   input += synapse0x2cb8370();
   input += synapse0x2cb83b0();
   input += synapse0x2cb83f0();
   input += synapse0x2cb8430();
   input += synapse0x2cb8470();
   input += synapse0x2cb84b0();
   input += synapse0x2cb84f0();
   input += synapse0x2cb8530();
   input += synapse0x2cb8570();
   input += synapse0x2cb85b0();
   input += synapse0x2cb85f0();
   input += synapse0x2cb8630();
   input += synapse0x2cb8670();
   input += synapse0x2cb86b0();
   input += synapse0x2cb86f0();
   input += synapse0x2cb8180();
   input += synapse0x2cb81c0();
   input += synapse0x2cb8840();
   input += synapse0x2cb8880();
   input += synapse0x2cb88c0();
   input += synapse0x2cb8900();
   input += synapse0x2cb8940();
   input += synapse0x2cb8980();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb7ff0() {
   double input = input0x2cb7ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb89c0() {
   double input = -0.590442;
   input += synapse0x2cb8d00();
   input += synapse0x2cb8d40();
   input += synapse0x2cb8d80();
   input += synapse0x2cb8dc0();
   input += synapse0x2cb8e00();
   input += synapse0x2cb8e40();
   input += synapse0x2cb8e80();
   input += synapse0x2cb8ec0();
   input += synapse0x2cb8f00();
   input += synapse0x2cb8f40();
   input += synapse0x2cb8f80();
   input += synapse0x2cb8fc0();
   input += synapse0x2cb9000();
   input += synapse0x2cb9040();
   input += synapse0x2cb9080();
   input += synapse0x2cb90c0();
   input += synapse0x2cb8b50();
   input += synapse0x2cb8b90();
   input += synapse0x2cb9210();
   input += synapse0x2cb9250();
   input += synapse0x2cb9290();
   input += synapse0x2cb92d0();
   input += synapse0x2cb9310();
   input += synapse0x2cb9350();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb89c0() {
   double input = input0x2cb89c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb9390() {
   double input = 0.185946;
   input += synapse0x2cb96d0();
   input += synapse0x2cb9710();
   input += synapse0x2cb9750();
   input += synapse0x2cb9790();
   input += synapse0x2cb97d0();
   input += synapse0x2cb9810();
   input += synapse0x2cb9850();
   input += synapse0x2cb9890();
   input += synapse0x2cb98d0();
   input += synapse0x2cb1a90();
   input += synapse0x2cb1ad0();
   input += synapse0x2cb1b10();
   input += synapse0x2cb1b50();
   input += synapse0x2cb1b90();
   input += synapse0x2cb1bd0();
   input += synapse0x2cb1c10();
   input += synapse0x2cb9520();
   input += synapse0x2cb9560();
   input += synapse0x2cb1d60();
   input += synapse0x2cb1da0();
   input += synapse0x2cb1de0();
   input += synapse0x2cb1e20();
   input += synapse0x2cb1e60();
   input += synapse0x2cb1ea0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb9390() {
   double input = input0x2cb9390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb1ee0() {
   double input = 0.479276;
   input += synapse0x2cb2220();
   input += synapse0x2cb2260();
   input += synapse0x2cb22a0();
   input += synapse0x2cb22e0();
   input += synapse0x2cb2320();
   input += synapse0x2cb2360();
   input += synapse0x2cb23a0();
   input += synapse0x2cb23e0();
   input += synapse0x2cb2420();
   input += synapse0x2cb2460();
   input += synapse0x2cb24a0();
   input += synapse0x2cb24e0();
   input += synapse0x2cb2520();
   input += synapse0x2cb2560();
   input += synapse0x2cb25a0();
   input += synapse0x2cb25e0();
   input += synapse0x2cb2070();
   input += synapse0x2cb20b0();
   input += synapse0x2cb2730();
   input += synapse0x2cb2770();
   input += synapse0x2cb27b0();
   input += synapse0x2cb27f0();
   input += synapse0x2cb2830();
   input += synapse0x2cb2870();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb1ee0() {
   double input = input0x2cb1ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb28b0() {
   double input = 0.847497;
   input += synapse0x2cb2a40();
   input += synapse0x2cbbad0();
   input += synapse0x2cbbb10();
   input += synapse0x2cbbb50();
   input += synapse0x2cbbb90();
   input += synapse0x2cbbbd0();
   input += synapse0x2cbbc10();
   input += synapse0x2cbbc50();
   input += synapse0x2cbbc90();
   input += synapse0x2cbbcd0();
   input += synapse0x2cbbd10();
   input += synapse0x2cbbd50();
   input += synapse0x2cbbd90();
   input += synapse0x2cbbdd0();
   input += synapse0x2cbbe10();
   input += synapse0x2cbbe50();
   input += synapse0x2cbb920();
   input += synapse0x2cbb960();
   input += synapse0x2cbbfa0();
   input += synapse0x2cbbfe0();
   input += synapse0x2cbc020();
   input += synapse0x2cbc060();
   input += synapse0x2cbc0a0();
   input += synapse0x2cbc0e0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb28b0() {
   double input = input0x2cb28b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cbc120() {
   double input = 1.71148;
   input += synapse0x2cbc460();
   input += synapse0x2cbc4a0();
   input += synapse0x2cbc4e0();
   input += synapse0x2cbc520();
   input += synapse0x2cbc560();
   input += synapse0x2cbc5a0();
   input += synapse0x2cbc5e0();
   input += synapse0x2cbc620();
   input += synapse0x2cbc660();
   input += synapse0x2cbc6a0();
   input += synapse0x2cbc6e0();
   input += synapse0x2cbc720();
   input += synapse0x2cbc760();
   input += synapse0x2cbc7a0();
   input += synapse0x2cbc7e0();
   input += synapse0x2cbc820();
   input += synapse0x2cbc2b0();
   input += synapse0x2cbc2f0();
   input += synapse0x2cbc970();
   input += synapse0x2cbc9b0();
   input += synapse0x2cbc9f0();
   input += synapse0x2cbca30();
   input += synapse0x2cbca70();
   input += synapse0x2cbcab0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cbc120() {
   double input = input0x2cbc120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cbcaf0() {
   double input = 0.429429;
   input += synapse0x2cbce30();
   input += synapse0x2cbce70();
   input += synapse0x2cbceb0();
   input += synapse0x2cbcef0();
   input += synapse0x2cbcf30();
   input += synapse0x2cbcf70();
   input += synapse0x2cbcfb0();
   input += synapse0x2cbcff0();
   input += synapse0x2cbd030();
   input += synapse0x2cbd070();
   input += synapse0x2cbd0b0();
   input += synapse0x2cbd0f0();
   input += synapse0x2cbd130();
   input += synapse0x2cbd170();
   input += synapse0x2cbd1b0();
   input += synapse0x2cbd1f0();
   input += synapse0x2cbcc80();
   input += synapse0x2cbccc0();
   input += synapse0x2cbd340();
   input += synapse0x2cbd380();
   input += synapse0x2cbd3c0();
   input += synapse0x2cbd400();
   input += synapse0x2cbd440();
   input += synapse0x2cbd480();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cbcaf0() {
   double input = input0x2cbcaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cbd4c0() {
   double input = 0.544857;
   input += synapse0x2cbd800();
   input += synapse0x2cbd840();
   input += synapse0x2cbd880();
   input += synapse0x2cbd8c0();
   input += synapse0x2cbd900();
   input += synapse0x2cbd940();
   input += synapse0x2cbd980();
   input += synapse0x2cbd9c0();
   input += synapse0x2cbda00();
   input += synapse0x2cbda40();
   input += synapse0x2cbda80();
   input += synapse0x2cbdac0();
   input += synapse0x2cbdb00();
   input += synapse0x2cbdb40();
   input += synapse0x2cbdb80();
   input += synapse0x2cbdbc0();
   input += synapse0x2cbd650();
   input += synapse0x2cbd690();
   input += synapse0x2cbdd10();
   input += synapse0x2cbdd50();
   input += synapse0x2cbdd90();
   input += synapse0x2cbddd0();
   input += synapse0x2cbde10();
   input += synapse0x2cbde50();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cbd4c0() {
   double input = input0x2cbd4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cbde90() {
   double input = 6.1869;
   input += synapse0x2cbe1d0();
   input += synapse0x2cbe210();
   input += synapse0x2cbe250();
   input += synapse0x2cbe290();
   input += synapse0x2cbe2d0();
   input += synapse0x2cbe310();
   input += synapse0x2cbe350();
   input += synapse0x2cbe390();
   input += synapse0x2cbe3d0();
   input += synapse0x2cbe410();
   input += synapse0x2cbe450();
   input += synapse0x2cbe490();
   input += synapse0x2cbe4d0();
   input += synapse0x2cbe510();
   input += synapse0x2cbe550();
   input += synapse0x2cbe590();
   input += synapse0x2cbe020();
   input += synapse0x2cbe060();
   input += synapse0x2cbe6e0();
   input += synapse0x2cbe720();
   input += synapse0x2cbe760();
   input += synapse0x2cbe7a0();
   input += synapse0x2cbe7e0();
   input += synapse0x2cbe820();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cbde90() {
   double input = input0x2cbde90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cbe860() {
   double input = -0.871216;
   input += synapse0x2cbeba0();
   input += synapse0x2cbebe0();
   input += synapse0x2cbec20();
   input += synapse0x2cbec60();
   input += synapse0x2cbeca0();
   input += synapse0x2cbece0();
   input += synapse0x2cbed20();
   input += synapse0x2cbed60();
   input += synapse0x2cbeda0();
   input += synapse0x2cbede0();
   input += synapse0x2cbee20();
   input += synapse0x2cbee60();
   input += synapse0x2cbeea0();
   input += synapse0x2cbeee0();
   input += synapse0x2cbef20();
   input += synapse0x2cbef60();
   input += synapse0x2cbe9f0();
   input += synapse0x2cbea30();
   input += synapse0x2cbf0b0();
   input += synapse0x2cbf0f0();
   input += synapse0x2cbf130();
   input += synapse0x2cbf170();
   input += synapse0x2cbf1b0();
   input += synapse0x2cbf1f0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cbe860() {
   double input = input0x2cbe860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cbf230() {
   double input = 0.463748;
   input += synapse0x2cbf570();
   input += synapse0x2cbf5b0();
   input += synapse0x2cbf5f0();
   input += synapse0x2cbf630();
   input += synapse0x2cbf670();
   input += synapse0x2cbf6b0();
   input += synapse0x2cbf6f0();
   input += synapse0x2cbf730();
   input += synapse0x2cbf770();
   input += synapse0x2cbf7b0();
   input += synapse0x2cbf7f0();
   input += synapse0x2cbf830();
   input += synapse0x2cbf870();
   input += synapse0x2cbf8b0();
   input += synapse0x2cbf8f0();
   input += synapse0x2cbf930();
   input += synapse0x2cbf3c0();
   input += synapse0x2cbf400();
   input += synapse0x2cbfa80();
   input += synapse0x2cbfac0();
   input += synapse0x2cbfb00();
   input += synapse0x2cbfb40();
   input += synapse0x2cbfb80();
   input += synapse0x2cbfbc0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cbf230() {
   double input = input0x2cbf230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cbfc00() {
   double input = -0.850817;
   input += synapse0x2cbff40();
   input += synapse0x2cbff80();
   input += synapse0x2cbffc0();
   input += synapse0x2cc0000();
   input += synapse0x2cc0040();
   input += synapse0x2cc0080();
   input += synapse0x2cc00c0();
   input += synapse0x2cc0100();
   input += synapse0x2cc0140();
   input += synapse0x2cc0180();
   input += synapse0x2cc01c0();
   input += synapse0x2cc0200();
   input += synapse0x2cc0240();
   input += synapse0x2cc0280();
   input += synapse0x2cc02c0();
   input += synapse0x2cc0300();
   input += synapse0x2cbfd90();
   input += synapse0x2cbfdd0();
   input += synapse0x2cc0450();
   input += synapse0x2cc0490();
   input += synapse0x2cc04d0();
   input += synapse0x2cc0510();
   input += synapse0x2cc0550();
   input += synapse0x2cc0590();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cbfc00() {
   double input = input0x2cbfc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc05d0() {
   double input = -0.643193;
   input += synapse0x2cc0910();
   input += synapse0x2cb4ee0();
   input += synapse0x2cb4f20();
   input += synapse0x2cb4f60();
   input += synapse0x2cb51b0();
   input += synapse0x2cb51f0();
   input += synapse0x2cb5230();
   input += synapse0x2cb5480();
   input += synapse0x2cb54c0();
   input += synapse0x2cb5710();
   input += synapse0x2cb5750();
   input += synapse0x2cb5790();
   input += synapse0x2cb59e0();
   input += synapse0x2cb5a20();
   input += synapse0x2cb5c70();
   input += synapse0x2cb5cb0();
   input += synapse0x2cc0760();
   input += synapse0x2cc07a0();
   input += synapse0x2cb5e00();
   input += synapse0x2cb6310();
   input += synapse0x2cb6350();
   input += synapse0x2cb6390();
   input += synapse0x2cb65e0();
   input += synapse0x2cb6620();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc05d0() {
   double input = input0x2cc05d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb6660() {
   double input = 0.376938;
   input += synapse0x2cb5ed0();
   input += synapse0x2cb5f10();
   input += synapse0x2cb5f50();
   input += synapse0x2cb5f90();
   input += synapse0x2cb6910();
   input += synapse0x2cc2c60();
   input += synapse0x2cc2ca0();
   input += synapse0x2cc2ce0();
   input += synapse0x2cc2d20();
   input += synapse0x2cc2d60();
   input += synapse0x2cc2da0();
   input += synapse0x2cc2de0();
   input += synapse0x2cc2e20();
   input += synapse0x2cc2e60();
   input += synapse0x2cc2ea0();
   input += synapse0x2cc2ee0();
   input += synapse0x2cb67f0();
   input += synapse0x2cb6830();
   input += synapse0x2cc3030();
   input += synapse0x2cc3070();
   input += synapse0x2cc30b0();
   input += synapse0x2cc30f0();
   input += synapse0x2cc3130();
   input += synapse0x2cc3170();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb6660() {
   double input = input0x2cb6660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc31b0() {
   double input = 1.39482;
   input += synapse0x2cc34f0();
   input += synapse0x2cc3530();
   input += synapse0x2cc3570();
   input += synapse0x2cc35b0();
   input += synapse0x2cc35f0();
   input += synapse0x2cc3630();
   input += synapse0x2cc3670();
   input += synapse0x2cc36b0();
   input += synapse0x2cc36f0();
   input += synapse0x2cc3730();
   input += synapse0x2cc3770();
   input += synapse0x2cc37b0();
   input += synapse0x2cc37f0();
   input += synapse0x2cc3830();
   input += synapse0x2cc3870();
   input += synapse0x2cc38b0();
   input += synapse0x2cc3340();
   input += synapse0x2cc3380();
   input += synapse0x2cc3a00();
   input += synapse0x2cc3a40();
   input += synapse0x2cc3a80();
   input += synapse0x2cc3ac0();
   input += synapse0x2cc3b00();
   input += synapse0x2cc3b40();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc31b0() {
   double input = input0x2cc31b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc3b80() {
   double input = 0.96215;
   input += synapse0x2cc3ec0();
   input += synapse0x2cc3f00();
   input += synapse0x2cc3f40();
   input += synapse0x2cc3f80();
   input += synapse0x2cc3fc0();
   input += synapse0x2cc4000();
   input += synapse0x2cc4040();
   input += synapse0x2cc4080();
   input += synapse0x2cc40c0();
   input += synapse0x2cc4100();
   input += synapse0x2cc4140();
   input += synapse0x2cc4180();
   input += synapse0x2cc41c0();
   input += synapse0x2cc4200();
   input += synapse0x2cc4240();
   input += synapse0x2cc4280();
   input += synapse0x2cc3d10();
   input += synapse0x2cc3d50();
   input += synapse0x2cc43d0();
   input += synapse0x2cc4410();
   input += synapse0x2cc4450();
   input += synapse0x2cc4490();
   input += synapse0x2cc44d0();
   input += synapse0x2cc4510();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc3b80() {
   double input = input0x2cc3b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc4550() {
   double input = -1.259;
   input += synapse0x2cc4890();
   input += synapse0x2cc48d0();
   input += synapse0x2cc4910();
   input += synapse0x2cc4950();
   input += synapse0x2cc4990();
   input += synapse0x2cc49d0();
   input += synapse0x2cc4a10();
   input += synapse0x2cc4a50();
   input += synapse0x2cc4a90();
   input += synapse0x2cc4ad0();
   input += synapse0x2cc4b10();
   input += synapse0x2cc4b50();
   input += synapse0x2cc4b90();
   input += synapse0x2cc4bd0();
   input += synapse0x2cc4c10();
   input += synapse0x2cc4c50();
   input += synapse0x2cc46e0();
   input += synapse0x2cc4720();
   input += synapse0x2cc4da0();
   input += synapse0x2cc4de0();
   input += synapse0x2cc4e20();
   input += synapse0x2cc4e60();
   input += synapse0x2cc4ea0();
   input += synapse0x2cc4ee0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc4550() {
   double input = input0x2cc4550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc4f20() {
   double input = -0.124119;
   input += synapse0x2cc5260();
   input += synapse0x2cc52a0();
   input += synapse0x2cc52e0();
   input += synapse0x2cc5320();
   input += synapse0x2cc5360();
   input += synapse0x2cc53a0();
   input += synapse0x2cc53e0();
   input += synapse0x2cc5420();
   input += synapse0x2cc5460();
   input += synapse0x2cc54a0();
   input += synapse0x2cc54e0();
   input += synapse0x2cc5520();
   input += synapse0x2cc5560();
   input += synapse0x2cc55a0();
   input += synapse0x2cc55e0();
   input += synapse0x2cc5620();
   input += synapse0x2cc50b0();
   input += synapse0x2cc50f0();
   input += synapse0x2cc5770();
   input += synapse0x2cc57b0();
   input += synapse0x2cc57f0();
   input += synapse0x2cc5830();
   input += synapse0x2cc5870();
   input += synapse0x2cc58b0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc4f20() {
   double input = input0x2cc4f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc58f0() {
   double input = 0.544988;
   input += synapse0x2cc5c30();
   input += synapse0x2cc5c70();
   input += synapse0x2cc5cb0();
   input += synapse0x2cc5cf0();
   input += synapse0x2cc5d30();
   input += synapse0x2cc5d70();
   input += synapse0x2cc5db0();
   input += synapse0x2cc5df0();
   input += synapse0x2cc5e30();
   input += synapse0x2cc5e70();
   input += synapse0x2cc5eb0();
   input += synapse0x2cc5ef0();
   input += synapse0x2cc5f30();
   input += synapse0x2cc5f70();
   input += synapse0x2cc5fb0();
   input += synapse0x2cc5ff0();
   input += synapse0x2cc5a80();
   input += synapse0x2cc5ac0();
   input += synapse0x2cc6140();
   input += synapse0x2cc6180();
   input += synapse0x2cc61c0();
   input += synapse0x2cc6200();
   input += synapse0x2cc6240();
   input += synapse0x2cc6280();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc58f0() {
   double input = input0x2cc58f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc62c0() {
   double input = 0.410238;
   input += synapse0x2cc6600();
   input += synapse0x2cc6640();
   input += synapse0x2cc6680();
   input += synapse0x2cc66c0();
   input += synapse0x2cc6700();
   input += synapse0x2cc6740();
   input += synapse0x2cc6780();
   input += synapse0x2cc67c0();
   input += synapse0x2cc6800();
   input += synapse0x2cc6840();
   input += synapse0x2cc6880();
   input += synapse0x2cc68c0();
   input += synapse0x2cc6900();
   input += synapse0x2cc6940();
   input += synapse0x2cc6980();
   input += synapse0x2cc69c0();
   input += synapse0x2cc6450();
   input += synapse0x2cc6490();
   input += synapse0x2cc6b10();
   input += synapse0x2cc6b50();
   input += synapse0x2cc6b90();
   input += synapse0x2cc6bd0();
   input += synapse0x2cc6c10();
   input += synapse0x2cc6c50();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc62c0() {
   double input = input0x2cc62c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc6c90() {
   double input = 0.679837;
   input += synapse0x2cc6fd0();
   input += synapse0x2cc7010();
   input += synapse0x2cc7050();
   input += synapse0x2cc7090();
   input += synapse0x2cc70d0();
   input += synapse0x2cc7110();
   input += synapse0x2cc7150();
   input += synapse0x2cc7190();
   input += synapse0x2cc71d0();
   input += synapse0x2cc7210();
   input += synapse0x2cc7250();
   input += synapse0x2cc7290();
   input += synapse0x2cc72d0();
   input += synapse0x2cc7310();
   input += synapse0x2cc7350();
   input += synapse0x2cc7390();
   input += synapse0x2cc6e20();
   input += synapse0x2cc6e60();
   input += synapse0x2cc74e0();
   input += synapse0x2cc7520();
   input += synapse0x2cc7560();
   input += synapse0x2cc75a0();
   input += synapse0x2cc75e0();
   input += synapse0x2cc7620();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc6c90() {
   double input = input0x2cc6c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc7660() {
   double input = 0.600526;
   input += synapse0x2cb00d0();
   input += synapse0x2cb0110();
   input += synapse0x2cb0150();
   input += synapse0x2cb0190();
   input += synapse0x2cb01d0();
   input += synapse0x2cb0210();
   input += synapse0x2cb0250();
   input += synapse0x2cb0290();
   input += synapse0x2cc7db0();
   input += synapse0x2cc7df0();
   input += synapse0x2cc7e30();
   input += synapse0x2cc7e70();
   input += synapse0x2cc7eb0();
   input += synapse0x2cc7ef0();
   input += synapse0x2cc7f30();
   input += synapse0x2cc7f70();
   input += synapse0x2cc77f0();
   input += synapse0x2cc7830();
   input += synapse0x2cc80c0();
   input += synapse0x2cc8100();
   input += synapse0x2cc8140();
   input += synapse0x2cc8180();
   input += synapse0x2cc81c0();
   input += synapse0x2cc8200();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc7660() {
   double input = input0x2cc7660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc8240() {
   double input = 0.802391;
   input += synapse0x2cc8580();
   input += synapse0x2cc85c0();
   input += synapse0x2cc8600();
   input += synapse0x2cc8640();
   input += synapse0x2cc8680();
   input += synapse0x2cc86c0();
   input += synapse0x2cc8700();
   input += synapse0x2cc8740();
   input += synapse0x2cc8780();
   input += synapse0x2cc87c0();
   input += synapse0x2cc8800();
   input += synapse0x2cc8840();
   input += synapse0x2cc8880();
   input += synapse0x2cc88c0();
   input += synapse0x2cc8900();
   input += synapse0x2cc8940();
   input += synapse0x2cc83d0();
   input += synapse0x2cc8410();
   input += synapse0x2cc8a90();
   input += synapse0x2cc8ad0();
   input += synapse0x2cc8b10();
   input += synapse0x2cc8b50();
   input += synapse0x2cc8b90();
   input += synapse0x2cc8bd0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc8240() {
   double input = input0x2cc8240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cc8c10() {
   double input = 0.40751;
   input += synapse0x2cc8f50();
   input += synapse0x2cc8f90();
   input += synapse0x2cc8fd0();
   input += synapse0x2cc9010();
   input += synapse0x2cc9050();
   input += synapse0x2cc9090();
   input += synapse0x2cc90d0();
   input += synapse0x2cc9110();
   input += synapse0x2cc9150();
   input += synapse0x2cc9190();
   input += synapse0x2cc91d0();
   input += synapse0x2cc9210();
   input += synapse0x2cc9250();
   input += synapse0x2cc9290();
   input += synapse0x2cc92d0();
   input += synapse0x2cc9310();
   input += synapse0x2cc8da0();
   input += synapse0x2cc8de0();
   input += synapse0x2cb9910();
   input += synapse0x2cb9950();
   input += synapse0x2cb9990();
   input += synapse0x2cb99d0();
   input += synapse0x2cb9a10();
   input += synapse0x2cb9a50();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cc8c10() {
   double input = input0x2cc8c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cb9a90() {
   double input = -0.420226;
   input += synapse0x2cb9dd0();
   input += synapse0x2cb9e10();
   input += synapse0x2cb9e50();
   input += synapse0x2cb9e90();
   input += synapse0x2cb9ed0();
   input += synapse0x2cb9f10();
   input += synapse0x2cb9f50();
   input += synapse0x2cb9f90();
   input += synapse0x2cb9fd0();
   input += synapse0x2cba010();
   input += synapse0x2cba050();
   input += synapse0x2cba090();
   input += synapse0x2cba0d0();
   input += synapse0x2cba110();
   input += synapse0x2cba150();
   input += synapse0x2cba190();
   input += synapse0x2cb9c20();
   input += synapse0x2cb9c60();
   input += synapse0x2cba2e0();
   input += synapse0x2cba320();
   input += synapse0x2cba360();
   input += synapse0x2cba3a0();
   input += synapse0x2cba3e0();
   input += synapse0x2cba420();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cb9a90() {
   double input = input0x2cb9a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cba460() {
   double input = 0.374321;
   input += synapse0x2cba7a0();
   input += synapse0x2cba7e0();
   input += synapse0x2cba820();
   input += synapse0x2cba860();
   input += synapse0x2cba8a0();
   input += synapse0x2cba8e0();
   input += synapse0x2cba920();
   input += synapse0x2cba960();
   input += synapse0x2cba9a0();
   input += synapse0x2cba9e0();
   input += synapse0x2cbaa20();
   input += synapse0x2cbaa60();
   input += synapse0x2cbaaa0();
   input += synapse0x2cbaae0();
   input += synapse0x2cbab20();
   input += synapse0x2cbab60();
   input += synapse0x2cba5f0();
   input += synapse0x2cba630();
   input += synapse0x2cbacb0();
   input += synapse0x2cbacf0();
   input += synapse0x2cbad30();
   input += synapse0x2cbad70();
   input += synapse0x2cbadb0();
   input += synapse0x2cbadf0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cba460() {
   double input = input0x2cba460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cbae30() {
   double input = 1.68779;
   input += synapse0x2cbb170();
   input += synapse0x2cbb1b0();
   input += synapse0x2cbb1f0();
   input += synapse0x2cbb230();
   input += synapse0x2cbb270();
   input += synapse0x2cbb2b0();
   input += synapse0x2cbb2f0();
   input += synapse0x2cbb330();
   input += synapse0x2cbb370();
   input += synapse0x2cbb3b0();
   input += synapse0x2cbb3f0();
   input += synapse0x2cbb430();
   input += synapse0x2cbb470();
   input += synapse0x2cbb4b0();
   input += synapse0x2cbb4f0();
   input += synapse0x2cbb530();
   input += synapse0x2cbafc0();
   input += synapse0x2cbb000();
   input += synapse0x2cbb680();
   input += synapse0x2cbb6c0();
   input += synapse0x2cbb700();
   input += synapse0x2cbb740();
   input += synapse0x2cbb780();
   input += synapse0x2cbb7c0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cbae30() {
   double input = input0x2cbae30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2ccd470() {
   double input = 0.253854;
   input += synapse0x2ccd690();
   input += synapse0x2ccd6d0();
   input += synapse0x2ccd710();
   input += synapse0x2ccd750();
   input += synapse0x2ccd790();
   input += synapse0x2ccd7d0();
   input += synapse0x2ccd810();
   input += synapse0x2ccd850();
   input += synapse0x2ccd890();
   input += synapse0x2ccd8d0();
   input += synapse0x2ccd910();
   input += synapse0x2ccd950();
   input += synapse0x2ccd990();
   input += synapse0x2ccd9d0();
   input += synapse0x2ccda10();
   input += synapse0x2ccda50();
   input += synapse0x2cbb800();
   input += synapse0x2cbb840();
   input += synapse0x2ccdba0();
   input += synapse0x2ccdbe0();
   input += synapse0x2ccdc20();
   input += synapse0x2ccdc60();
   input += synapse0x2ccdca0();
   input += synapse0x2ccdce0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2ccd470() {
   double input = input0x2ccd470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2ccdd20() {
   double input = 0.455616;
   input += synapse0x2cce060();
   input += synapse0x2cce0a0();
   input += synapse0x2cce0e0();
   input += synapse0x2cce120();
   input += synapse0x2cce160();
   input += synapse0x2cce1a0();
   input += synapse0x2cce1e0();
   input += synapse0x2cce220();
   input += synapse0x2cce260();
   input += synapse0x2cce2a0();
   input += synapse0x2cce2e0();
   input += synapse0x2cce320();
   input += synapse0x2cce360();
   input += synapse0x2cce3a0();
   input += synapse0x2cce3e0();
   input += synapse0x2cce420();
   input += synapse0x2ccdeb0();
   input += synapse0x2ccdef0();
   input += synapse0x2cce570();
   input += synapse0x2cce5b0();
   input += synapse0x2cce5f0();
   input += synapse0x2cce630();
   input += synapse0x2cce670();
   input += synapse0x2cce6b0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2ccdd20() {
   double input = input0x2ccdd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cce6f0() {
   double input = -2.38892;
   input += synapse0x2ccea30();
   input += synapse0x2ccea70();
   input += synapse0x2cceab0();
   input += synapse0x2cceaf0();
   input += synapse0x2cceb30();
   input += synapse0x2cceb70();
   input += synapse0x2ccebb0();
   input += synapse0x2ccebf0();
   input += synapse0x2ccec30();
   input += synapse0x2ccec70();
   input += synapse0x2ccecb0();
   input += synapse0x2ccecf0();
   input += synapse0x2cced30();
   input += synapse0x2cced70();
   input += synapse0x2ccedb0();
   input += synapse0x2ccedf0();
   input += synapse0x2cce880();
   input += synapse0x2cce8c0();
   input += synapse0x2ccef40();
   input += synapse0x2ccef80();
   input += synapse0x2ccefc0();
   input += synapse0x2ccf000();
   input += synapse0x2ccf040();
   input += synapse0x2ccf080();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cce6f0() {
   double input = input0x2cce6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2ccf0c0() {
   double input = -0.860206;
   input += synapse0x2ccf400();
   input += synapse0x2ccf440();
   input += synapse0x2ccf480();
   input += synapse0x2ccf4c0();
   input += synapse0x2ccf500();
   input += synapse0x2ccf540();
   input += synapse0x2ccf580();
   input += synapse0x2ccf5c0();
   input += synapse0x2ccf600();
   input += synapse0x2ccf640();
   input += synapse0x2ccf680();
   input += synapse0x2ccf6c0();
   input += synapse0x2ccf700();
   input += synapse0x2ccf740();
   input += synapse0x2ccf780();
   input += synapse0x2ccf7c0();
   input += synapse0x2ccf250();
   input += synapse0x2ccf290();
   input += synapse0x2ccf910();
   input += synapse0x2ccf950();
   input += synapse0x2ccf990();
   input += synapse0x2ccf9d0();
   input += synapse0x2ccfa10();
   input += synapse0x2ccfa50();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2ccf0c0() {
   double input = input0x2ccf0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cd62c0() {
   double input = 0.658787;
   input += synapse0x2cabfe0();
   input += synapse0x2cac020();
   input += synapse0x2cad500();
   input += synapse0x2cad540();
   input += synapse0x2caded0();
   input += synapse0x2cadf10();
   input += synapse0x2caeca0();
   input += synapse0x2caece0();
   input += synapse0x2caf670();
   input += synapse0x2caf6b0();
   input += synapse0x2cb0040();
   input += synapse0x2cb0080();
   input += synapse0x2cb0b20();
   input += synapse0x2cb0b60();
   input += synapse0x2cb14f0();
   input += synapse0x2cb1530();
   input += synapse0x2cae5d0();
   input += synapse0x2cae610();
   input += synapse0x2cb30a0();
   input += synapse0x2cb30e0();
   input += synapse0x2cb3a70();
   input += synapse0x2cb3ab0();
   input += synapse0x2cb4440();
   input += synapse0x2cb4480();
   input += synapse0x2cb4e10();
   input += synapse0x2cb4e50();
   input += synapse0x2ca8ff0();
   input += synapse0x2ca9030();
   input += synapse0x2cb6f00();
   input += synapse0x2cb6f40();
   input += synapse0x2cb78d0();
   input += synapse0x2cb7910();
   input += synapse0x2cb82a0();
   input += synapse0x2cb82e0();
   input += synapse0x2cb8c70();
   input += synapse0x2cb8cb0();
   input += synapse0x2cb9640();
   input += synapse0x2cb9680();
   input += synapse0x2cb2190();
   input += synapse0x2cb21d0();
   input += synapse0x2cbba40();
   input += synapse0x2cbba80();
   input += synapse0x2cbc3d0();
   input += synapse0x2cbc410();
   input += synapse0x2cbcda0();
   input += synapse0x2cbcde0();
   input += synapse0x2cbd770();
   input += synapse0x2cbd7b0();
   input += synapse0x2cbe140();
   input += synapse0x2cbe180();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cd62c0() {
   double input = input0x2cd62c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cd6660() {
   double input = 0.86069;
   input += synapse0x2cc0880();
   input += synapse0x2cc08c0();
   input += synapse0x2cb5e40();
   input += synapse0x2cb5e80();
   input += synapse0x2cc3460();
   input += synapse0x2cc34a0();
   input += synapse0x2cc3e30();
   input += synapse0x2cc3e70();
   input += synapse0x2cc4800();
   input += synapse0x2cc4840();
   input += synapse0x2cc51d0();
   input += synapse0x2cc5210();
   input += synapse0x2cc5ba0();
   input += synapse0x2cc5be0();
   input += synapse0x2cc6570();
   input += synapse0x2cc65b0();
   input += synapse0x2cc6f40();
   input += synapse0x2cc6f80();
   input += synapse0x2cc7910();
   input += synapse0x2cc7950();
   input += synapse0x2cc84f0();
   input += synapse0x2cc8530();
   input += synapse0x2cc8ec0();
   input += synapse0x2cc8f00();
   input += synapse0x2cb9d40();
   input += synapse0x2cb9d80();
   input += synapse0x2cba710();
   input += synapse0x2cba750();
   input += synapse0x2cbb0e0();
   input += synapse0x2cbb120();
   input += synapse0x2ccd600();
   input += synapse0x2ccd640();
   input += synapse0x2ccdfd0();
   input += synapse0x2cce010();
   input += synapse0x2cce9a0();
   input += synapse0x2cce9e0();
   input += synapse0x2ccf370();
   input += synapse0x2ccf3b0();
   input += synapse0x2cab2a0();
   input += synapse0x2cab2e0();
   input += synapse0x2cbeb10();
   input += synapse0x2cbeb50();
   input += synapse0x2ccfa90();
   input += synapse0x2ccfad0();
   input += synapse0x2ccfb10();
   input += synapse0x2ccfb50();
   input += synapse0x2cd6a00();
   input += synapse0x2cd6a40();
   input += synapse0x2cd6a80();
   input += synapse0x2cd6ac0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cd6660() {
   double input = input0x2cd6660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cd6b00() {
   double input = -0.436714;
   input += synapse0x2cd6e40();
   input += synapse0x2cd6e80();
   input += synapse0x2cd6ec0();
   input += synapse0x2cd6f00();
   input += synapse0x2cd6f40();
   input += synapse0x2cd6f80();
   input += synapse0x2cd6fc0();
   input += synapse0x2cd7000();
   input += synapse0x2cd7040();
   input += synapse0x2cd7080();
   input += synapse0x2cd70c0();
   input += synapse0x2cd7100();
   input += synapse0x2cd7140();
   input += synapse0x2cd7180();
   input += synapse0x2cd71c0();
   input += synapse0x2cd7200();
   input += synapse0x2cd6c90();
   input += synapse0x2cd6cd0();
   input += synapse0x2cd7350();
   input += synapse0x2cd7390();
   input += synapse0x2cd73d0();
   input += synapse0x2cd7410();
   input += synapse0x2cd7450();
   input += synapse0x2cd7490();
   input += synapse0x2cd74d0();
   input += synapse0x2cd7510();
   input += synapse0x2cd7550();
   input += synapse0x2cd7590();
   input += synapse0x2cd75d0();
   input += synapse0x2cd7610();
   input += synapse0x2cd7650();
   input += synapse0x2cd7690();
   input += synapse0x2cd7240();
   input += synapse0x2cd7280();
   input += synapse0x2cd72c0();
   input += synapse0x2cd7300();
   input += synapse0x2cd78e0();
   input += synapse0x2cd7920();
   input += synapse0x2cd7960();
   input += synapse0x2cd79a0();
   input += synapse0x2cd79e0();
   input += synapse0x2cd7a20();
   input += synapse0x2cd7a60();
   input += synapse0x2cd7aa0();
   input += synapse0x2cd7ae0();
   input += synapse0x2cd7b20();
   input += synapse0x2cd7b60();
   input += synapse0x2cd7ba0();
   input += synapse0x2cd7be0();
   input += synapse0x2cd7c20();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cd6b00() {
   double input = input0x2cd6b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cd7c60() {
   double input = -0.105214;
   input += synapse0x2cd7fa0();
   input += synapse0x2cd7fe0();
   input += synapse0x2cd8020();
   input += synapse0x2cd8060();
   input += synapse0x2cd80a0();
   input += synapse0x2cd80e0();
   input += synapse0x2cd8120();
   input += synapse0x2cd8160();
   input += synapse0x2cd81a0();
   input += synapse0x2cd81e0();
   input += synapse0x2cd8220();
   input += synapse0x2cd8260();
   input += synapse0x2cd82a0();
   input += synapse0x2cd82e0();
   input += synapse0x2cd8320();
   input += synapse0x2cd8360();
   input += synapse0x2cd7df0();
   input += synapse0x2cd7e30();
   input += synapse0x2cd84b0();
   input += synapse0x2cd84f0();
   input += synapse0x2cd8530();
   input += synapse0x2cd8570();
   input += synapse0x2cd85b0();
   input += synapse0x2cd85f0();
   input += synapse0x2cd8630();
   input += synapse0x2cd8670();
   input += synapse0x2cd86b0();
   input += synapse0x2cd86f0();
   input += synapse0x2cd8730();
   input += synapse0x2cd8770();
   input += synapse0x2cd87b0();
   input += synapse0x2cd87f0();
   input += synapse0x2cd83a0();
   input += synapse0x2cd83e0();
   input += synapse0x2cd8420();
   input += synapse0x2cd8460();
   input += synapse0x2cd8a40();
   input += synapse0x2cd8a80();
   input += synapse0x2cd8ac0();
   input += synapse0x2cd8b00();
   input += synapse0x2cd8b40();
   input += synapse0x2cd8b80();
   input += synapse0x2cd8bc0();
   input += synapse0x2cd8c00();
   input += synapse0x2cd8c40();
   input += synapse0x2cd8c80();
   input += synapse0x2cd8cc0();
   input += synapse0x2cd8d00();
   input += synapse0x2cd8d40();
   input += synapse0x2cd8d80();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cd7c60() {
   double input = input0x2cd7c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cd8dc0() {
   double input = -0.808795;
   input += synapse0x2cd9100();
   input += synapse0x2cd9140();
   input += synapse0x2cd9180();
   input += synapse0x2cd91c0();
   input += synapse0x2cd9200();
   input += synapse0x2cd9240();
   input += synapse0x2cd9280();
   input += synapse0x2cd92c0();
   input += synapse0x2cd9300();
   input += synapse0x2cd9340();
   input += synapse0x2cd9380();
   input += synapse0x2cd93c0();
   input += synapse0x2cd9400();
   input += synapse0x2cd9440();
   input += synapse0x2cd9480();
   input += synapse0x2cd94c0();
   input += synapse0x2cd8f50();
   input += synapse0x2cd8f90();
   input += synapse0x2cd9610();
   input += synapse0x2cd9650();
   input += synapse0x2cd9690();
   input += synapse0x2cd96d0();
   input += synapse0x2cd9710();
   input += synapse0x2cd9750();
   input += synapse0x2cd9790();
   input += synapse0x2cd97d0();
   input += synapse0x2cd9810();
   input += synapse0x2cd9850();
   input += synapse0x2cd9890();
   input += synapse0x2cd98d0();
   input += synapse0x2cd9910();
   input += synapse0x2cd9950();
   input += synapse0x2cd9500();
   input += synapse0x2cd9540();
   input += synapse0x2cd9580();
   input += synapse0x2cd95c0();
   input += synapse0x2cd9ba0();
   input += synapse0x2cd9be0();
   input += synapse0x2cd9c20();
   input += synapse0x2cd9c60();
   input += synapse0x2cd9ca0();
   input += synapse0x2cd9ce0();
   input += synapse0x2cd9d20();
   input += synapse0x2cd9d60();
   input += synapse0x2cd9da0();
   input += synapse0x2cd9de0();
   input += synapse0x2cd9e20();
   input += synapse0x2cd9e60();
   input += synapse0x2cd9ea0();
   input += synapse0x2cd9ee0();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cd8dc0() {
   double input = input0x2cd8dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLsR::input0x2cd9f20() {
   double input = 6.70023;
   input += synapse0x2cda140();
   input += synapse0x2cda180();
   input += synapse0x2cda1c0();
   input += synapse0x2cda200();
   input += synapse0x2cda240();
   return input;
}

double NNfunction_sb_dLsR::neuron0x2cd9f20() {
   double input = input0x2cd9f20();
   return (input * 1)+0;
}

double NNfunction_sb_dLsR::synapse0x2ca6060() {
   return (neuron0x2ca60e0()*-0.653469);
}

double NNfunction_sb_dLsR::synapse0x2ca60a0() {
   return (neuron0x2ca6390()*-0.355865);
}

double NNfunction_sb_dLsR::synapse0x2cab330() {
   return (neuron0x2ca66d0()*-0.499732);
}

double NNfunction_sb_dLsR::synapse0x2cab370() {
   return (neuron0x2ca6a10()*-0.551733);
}

double NNfunction_sb_dLsR::synapse0x2cab3b0() {
   return (neuron0x2ca6d50()*0.0967852);
}

double NNfunction_sb_dLsR::synapse0x2cab3f0() {
   return (neuron0x2ca7090()*0.15467);
}

double NNfunction_sb_dLsR::synapse0x2cab430() {
   return (neuron0x2ca73d0()*0.834562);
}

double NNfunction_sb_dLsR::synapse0x2cab470() {
   return (neuron0x2ca7710()*-0.645793);
}

double NNfunction_sb_dLsR::synapse0x2cab4b0() {
   return (neuron0x2ca7a50()*-0.168171);
}

double NNfunction_sb_dLsR::synapse0x2cab4f0() {
   return (neuron0x2ca7d90()*-0.152231);
}

double NNfunction_sb_dLsR::synapse0x2cab530() {
   return (neuron0x2ca80d0()*-0.0704539);
}

double NNfunction_sb_dLsR::synapse0x2cab570() {
   return (neuron0x2ca8410()*0.512815);
}

double NNfunction_sb_dLsR::synapse0x2cab5b0() {
   return (neuron0x2ca8750()*-0.0684597);
}

double NNfunction_sb_dLsR::synapse0x2cab5f0() {
   return (neuron0x2ca8a90()*-0.330664);
}

double NNfunction_sb_dLsR::synapse0x2cab630() {
   return (neuron0x2ca8dd0()*-0.164123);
}

double NNfunction_sb_dLsR::synapse0x2cab670() {
   return (neuron0x2ca9110()*-0.394576);
}

double NNfunction_sb_dLsR::synapse0x2ca5fd0() {
   return (neuron0x2ca9450()*-0.657846);
}

double NNfunction_sb_dLsR::synapse0x2ca6010() {
   return (neuron0x2ca99b0()*-0.518271);
}

double NNfunction_sb_dLsR::synapse0x2a611b0() {
   return (neuron0x2ca9bd0()*1.1119);
}

double NNfunction_sb_dLsR::synapse0x2a611f0() {
   return (neuron0x2ca9f10()*0.0485417);
}

double NNfunction_sb_dLsR::synapse0x2cab8d0() {
   return (neuron0x2caa250()*0.0773239);
}

double NNfunction_sb_dLsR::synapse0x2cab910() {
   return (neuron0x2caa590()*-0.216073);
}

double NNfunction_sb_dLsR::synapse0x2cab950() {
   return (neuron0x2caa8d0()*0.180473);
}

double NNfunction_sb_dLsR::synapse0x2cab990() {
   return (neuron0x2caac10()*0.0902819);
}

double NNfunction_sb_dLsR::synapse0x2cabd10() {
   return (neuron0x2ca60e0()*0.0805257);
}

double NNfunction_sb_dLsR::synapse0x2cabd50() {
   return (neuron0x2ca6390()*-0.0135387);
}

double NNfunction_sb_dLsR::synapse0x2cabd90() {
   return (neuron0x2ca66d0()*0.0383219);
}

double NNfunction_sb_dLsR::synapse0x2cabdd0() {
   return (neuron0x2ca6a10()*9.13264);
}

double NNfunction_sb_dLsR::synapse0x2cabe10() {
   return (neuron0x2ca6d50()*-0.0206978);
}

double NNfunction_sb_dLsR::synapse0x2cabe50() {
   return (neuron0x2ca7090()*0.0170274);
}

double NNfunction_sb_dLsR::synapse0x2cabe90() {
   return (neuron0x2ca73d0()*0.0266217);
}

double NNfunction_sb_dLsR::synapse0x2cabed0() {
   return (neuron0x2ca7710()*0.00546388);
}

double NNfunction_sb_dLsR::synapse0x2cabf10() {
   return (neuron0x2ca7a50()*-0.0186804);
}

double NNfunction_sb_dLsR::synapse0x2cab7c0() {
   return (neuron0x2ca7d90()*-0.0343553);
}

double NNfunction_sb_dLsR::synapse0x2cab800() {
   return (neuron0x2ca80d0()*0.0165932);
}

double NNfunction_sb_dLsR::synapse0x2cab840() {
   return (neuron0x2ca8410()*0.220092);
}

double NNfunction_sb_dLsR::synapse0x2cab880() {
   return (neuron0x2ca8750()*0.0266936);
}

double NNfunction_sb_dLsR::synapse0x2cac160() {
   return (neuron0x2ca8a90()*0.0154598);
}

double NNfunction_sb_dLsR::synapse0x2cac1a0() {
   return (neuron0x2ca8dd0()*-0.0104323);
}

double NNfunction_sb_dLsR::synapse0x2cac1e0() {
   return (neuron0x2ca9110()*0.000597902);
}

double NNfunction_sb_dLsR::synapse0x2cabb60() {
   return (neuron0x2ca9450()*-0.0033417);
}

double NNfunction_sb_dLsR::synapse0x2cabba0() {
   return (neuron0x2ca99b0()*-0.0747074);
}

double NNfunction_sb_dLsR::synapse0x2cac330() {
   return (neuron0x2ca9bd0()*-0.724183);
}

double NNfunction_sb_dLsR::synapse0x2cac370() {
   return (neuron0x2ca9f10()*-0.0157282);
}

double NNfunction_sb_dLsR::synapse0x2cac3b0() {
   return (neuron0x2caa250()*0.00145339);
}

double NNfunction_sb_dLsR::synapse0x2cac3f0() {
   return (neuron0x2caa590()*0.0313867);
}

double NNfunction_sb_dLsR::synapse0x2cac430() {
   return (neuron0x2caa8d0()*-0.0147124);
}

double NNfunction_sb_dLsR::synapse0x2cac470() {
   return (neuron0x2caac10()*-0.0390756);
}

double NNfunction_sb_dLsR::synapse0x2cac7f0() {
   return (neuron0x2ca60e0()*-0.829009);
}

double NNfunction_sb_dLsR::synapse0x2cac830() {
   return (neuron0x2ca6390()*-0.357926);
}

double NNfunction_sb_dLsR::synapse0x2cac870() {
   return (neuron0x2ca66d0()*-0.369765);
}

double NNfunction_sb_dLsR::synapse0x2cac8b0() {
   return (neuron0x2ca6a10()*-0.251949);
}

double NNfunction_sb_dLsR::synapse0x2cac8f0() {
   return (neuron0x2ca6d50()*0.0555895);
}

double NNfunction_sb_dLsR::synapse0x2cac930() {
   return (neuron0x2ca7090()*0.505107);
}

double NNfunction_sb_dLsR::synapse0x2cac970() {
   return (neuron0x2ca73d0()*-0.897031);
}

double NNfunction_sb_dLsR::synapse0x2cac9b0() {
   return (neuron0x2ca7710()*0.628067);
}

double NNfunction_sb_dLsR::synapse0x2cac9f0() {
   return (neuron0x2ca7a50()*-0.123628);
}

double NNfunction_sb_dLsR::synapse0x2caca30() {
   return (neuron0x2ca7d90()*-0.270854);
}

double NNfunction_sb_dLsR::synapse0x2caca70() {
   return (neuron0x2ca80d0()*0.555101);
}

double NNfunction_sb_dLsR::synapse0x2cacab0() {
   return (neuron0x2ca8410()*-0.882124);
}

double NNfunction_sb_dLsR::synapse0x2cacaf0() {
   return (neuron0x2ca8750()*0.270266);
}

double NNfunction_sb_dLsR::synapse0x2cacb30() {
   return (neuron0x2ca8a90()*-0.0734969);
}

double NNfunction_sb_dLsR::synapse0x2cacb70() {
   return (neuron0x2ca8dd0()*0.416385);
}

double NNfunction_sb_dLsR::synapse0x2cacbb0() {
   return (neuron0x2ca9110()*0.00976221);
}

double NNfunction_sb_dLsR::synapse0x2cac640() {
   return (neuron0x2ca9450()*-0.204193);
}

double NNfunction_sb_dLsR::synapse0x2cac680() {
   return (neuron0x2ca99b0()*-0.48984);
}

double NNfunction_sb_dLsR::synapse0x2c95150() {
   return (neuron0x2ca9bd0()*0.623649);
}

double NNfunction_sb_dLsR::synapse0x2a6f0a0() {
   return (neuron0x2ca9f10()*0.160161);
}

double NNfunction_sb_dLsR::synapse0x2a6f0e0() {
   return (neuron0x2caa250()*0.0410726);
}

double NNfunction_sb_dLsR::synapse0x2b8a5f0() {
   return (neuron0x2caa590()*0.362807);
}

double NNfunction_sb_dLsR::synapse0x2b8a630() {
   return (neuron0x2caa8d0()*-0.656875);
}

double NNfunction_sb_dLsR::synapse0x2ca5e40() {
   return (neuron0x2caac10()*-0.236679);
}

double NNfunction_sb_dLsR::synapse0x2a6f990() {
   return (neuron0x2ca60e0()*-0.0193324);
}

double NNfunction_sb_dLsR::synapse0x2cac070() {
   return (neuron0x2ca6390()*-0.161883);
}

double NNfunction_sb_dLsR::synapse0x2cac0b0() {
   return (neuron0x2ca66d0()*0.0958893);
}

double NNfunction_sb_dLsR::synapse0x2cac0f0() {
   return (neuron0x2ca6a10()*0.110127);
}

double NNfunction_sb_dLsR::synapse0x2cacd00() {
   return (neuron0x2ca6d50()*-0.0590431);
}

double NNfunction_sb_dLsR::synapse0x2cacd40() {
   return (neuron0x2ca7090()*0.0996098);
}

double NNfunction_sb_dLsR::synapse0x2cacd80() {
   return (neuron0x2ca73d0()*-0.17613);
}

double NNfunction_sb_dLsR::synapse0x2cacdc0() {
   return (neuron0x2ca7710()*-0.106687);
}

double NNfunction_sb_dLsR::synapse0x2cace00() {
   return (neuron0x2ca7a50()*0.264717);
}

double NNfunction_sb_dLsR::synapse0x2cace40() {
   return (neuron0x2ca7d90()*-0.0483551);
}

double NNfunction_sb_dLsR::synapse0x2cace80() {
   return (neuron0x2ca80d0()*0.0600613);
}

double NNfunction_sb_dLsR::synapse0x2cacec0() {
   return (neuron0x2ca8410()*0.553819);
}

double NNfunction_sb_dLsR::synapse0x2cacf00() {
   return (neuron0x2ca8750()*-0.0500852);
}

double NNfunction_sb_dLsR::synapse0x2cacf40() {
   return (neuron0x2ca8a90()*0.2067);
}

double NNfunction_sb_dLsR::synapse0x2cacf80() {
   return (neuron0x2ca8dd0()*-0.262306);
}

double NNfunction_sb_dLsR::synapse0x2cacfc0() {
   return (neuron0x2ca9110()*0.346344);
}

double NNfunction_sb_dLsR::synapse0x2ca5e80() {
   return (neuron0x2ca9450()*-0.213176);
}

double NNfunction_sb_dLsR::synapse0x2ca5ec0() {
   return (neuron0x2ca99b0()*1.02921);
}

double NNfunction_sb_dLsR::synapse0x2ca5f00() {
   return (neuron0x2ca9bd0()*1.00962);
}

double NNfunction_sb_dLsR::synapse0x2cad110() {
   return (neuron0x2ca9f10()*0.0142066);
}

double NNfunction_sb_dLsR::synapse0x2cad150() {
   return (neuron0x2caa250()*-0.00454502);
}

double NNfunction_sb_dLsR::synapse0x2cad190() {
   return (neuron0x2caa590()*-0.276929);
}

double NNfunction_sb_dLsR::synapse0x2cad1d0() {
   return (neuron0x2caa8d0()*-0.233563);
}

double NNfunction_sb_dLsR::synapse0x2cad210() {
   return (neuron0x2caac10()*-0.23274);
}

double NNfunction_sb_dLsR::synapse0x2cad590() {
   return (neuron0x2ca60e0()*0.0774753);
}

double NNfunction_sb_dLsR::synapse0x2cad5d0() {
   return (neuron0x2ca6390()*-0.0245006);
}

double NNfunction_sb_dLsR::synapse0x2cad610() {
   return (neuron0x2ca66d0()*0.00636039);
}

double NNfunction_sb_dLsR::synapse0x2cad650() {
   return (neuron0x2ca6a10()*0.101954);
}

double NNfunction_sb_dLsR::synapse0x2cad690() {
   return (neuron0x2ca6d50()*-0.0213897);
}

double NNfunction_sb_dLsR::synapse0x2cad6d0() {
   return (neuron0x2ca7090()*-0.00365954);
}

double NNfunction_sb_dLsR::synapse0x2cad710() {
   return (neuron0x2ca73d0()*0.0481727);
}

double NNfunction_sb_dLsR::synapse0x2cad750() {
   return (neuron0x2ca7710()*0.0505312);
}

double NNfunction_sb_dLsR::synapse0x2cad790() {
   return (neuron0x2ca7a50()*-0.00127756);
}

double NNfunction_sb_dLsR::synapse0x2cad7d0() {
   return (neuron0x2ca7d90()*-0.0271457);
}

double NNfunction_sb_dLsR::synapse0x2cad810() {
   return (neuron0x2ca80d0()*0.0645822);
}

double NNfunction_sb_dLsR::synapse0x2cad850() {
   return (neuron0x2ca8410()*-0.0512634);
}

double NNfunction_sb_dLsR::synapse0x2cad890() {
   return (neuron0x2ca8750()*0.5302);
}

double NNfunction_sb_dLsR::synapse0x2cad8d0() {
   return (neuron0x2ca8a90()*-0.0720428);
}

double NNfunction_sb_dLsR::synapse0x2cad910() {
   return (neuron0x2ca8dd0()*0.258912);
}

double NNfunction_sb_dLsR::synapse0x2cad950() {
   return (neuron0x2ca9110()*0.355362);
}

double NNfunction_sb_dLsR::synapse0x2cad3e0() {
   return (neuron0x2ca9450()*-0.100935);
}

double NNfunction_sb_dLsR::synapse0x2cad420() {
   return (neuron0x2ca99b0()*0.245797);
}

double NNfunction_sb_dLsR::synapse0x2cadaa0() {
   return (neuron0x2ca9bd0()*-0.0965648);
}

double NNfunction_sb_dLsR::synapse0x2cadae0() {
   return (neuron0x2ca9f10()*-0.0434572);
}

double NNfunction_sb_dLsR::synapse0x2cadb20() {
   return (neuron0x2caa250()*0.0326963);
}

double NNfunction_sb_dLsR::synapse0x2cadb60() {
   return (neuron0x2caa590()*0.0427403);
}

double NNfunction_sb_dLsR::synapse0x2cadba0() {
   return (neuron0x2caa8d0()*0.00268454);
}

double NNfunction_sb_dLsR::synapse0x2cadbe0() {
   return (neuron0x2caac10()*0.0311333);
}

double NNfunction_sb_dLsR::synapse0x2cadf60() {
   return (neuron0x2ca60e0()*-0.055987);
}

double NNfunction_sb_dLsR::synapse0x2cadfa0() {
   return (neuron0x2ca6390()*0.134999);
}

double NNfunction_sb_dLsR::synapse0x2cadfe0() {
   return (neuron0x2ca66d0()*-1.0007);
}

double NNfunction_sb_dLsR::synapse0x2cae020() {
   return (neuron0x2ca6a10()*0.0752306);
}

double NNfunction_sb_dLsR::synapse0x2cae060() {
   return (neuron0x2ca6d50()*-0.109541);
}

double NNfunction_sb_dLsR::synapse0x2cae0a0() {
   return (neuron0x2ca7090()*0.460922);
}

double NNfunction_sb_dLsR::synapse0x2cae0e0() {
   return (neuron0x2ca73d0()*-0.264554);
}

double NNfunction_sb_dLsR::synapse0x2cae120() {
   return (neuron0x2ca7710()*-0.248625);
}

double NNfunction_sb_dLsR::synapse0x2cae160() {
   return (neuron0x2ca7a50()*0.727789);
}

double NNfunction_sb_dLsR::synapse0x2a6f3f0() {
   return (neuron0x2ca7d90()*-0.505533);
}

double NNfunction_sb_dLsR::synapse0x2a6f430() {
   return (neuron0x2ca80d0()*-0.271308);
}

double NNfunction_sb_dLsR::synapse0x2a6f470() {
   return (neuron0x2ca8410()*-0.859417);
}

double NNfunction_sb_dLsR::synapse0x2a6f4b0() {
   return (neuron0x2ca8750()*0.226859);
}

double NNfunction_sb_dLsR::synapse0x2a6f4f0() {
   return (neuron0x2ca8a90()*0.259551);
}

double NNfunction_sb_dLsR::synapse0x2a6f530() {
   return (neuron0x2ca8dd0()*0.223647);
}

double NNfunction_sb_dLsR::synapse0x2a6f570() {
   return (neuron0x2ca9110()*-0.557609);
}

double NNfunction_sb_dLsR::synapse0x2caddb0() {
   return (neuron0x2ca9450()*0.00123267);
}

double NNfunction_sb_dLsR::synapse0x2caddf0() {
   return (neuron0x2ca99b0()*-0.0869931);
}

double NNfunction_sb_dLsR::synapse0x2a6f6c0() {
   return (neuron0x2ca9bd0()*-0.536769);
}

double NNfunction_sb_dLsR::synapse0x2a6f700() {
   return (neuron0x2ca9f10()*-0.839232);
}

double NNfunction_sb_dLsR::synapse0x2a6f740() {
   return (neuron0x2caa250()*0.487075);
}

double NNfunction_sb_dLsR::synapse0x2a6f780() {
   return (neuron0x2caa590()*0.158595);
}

double NNfunction_sb_dLsR::synapse0x2a6f7c0() {
   return (neuron0x2caa8d0()*-0.546578);
}

double NNfunction_sb_dLsR::synapse0x2cae9b0() {
   return (neuron0x2caac10()*-0.100611);
}

double NNfunction_sb_dLsR::synapse0x2caed30() {
   return (neuron0x2ca60e0()*0.0357594);
}

double NNfunction_sb_dLsR::synapse0x2caed70() {
   return (neuron0x2ca6390()*0.308609);
}

double NNfunction_sb_dLsR::synapse0x2caedb0() {
   return (neuron0x2ca66d0()*-0.535368);
}

double NNfunction_sb_dLsR::synapse0x2caedf0() {
   return (neuron0x2ca6a10()*-0.719232);
}

double NNfunction_sb_dLsR::synapse0x2caee30() {
   return (neuron0x2ca6d50()*0.0141429);
}

double NNfunction_sb_dLsR::synapse0x2caee70() {
   return (neuron0x2ca7090()*-0.145531);
}

double NNfunction_sb_dLsR::synapse0x2caeeb0() {
   return (neuron0x2ca73d0()*0.752467);
}

double NNfunction_sb_dLsR::synapse0x2caeef0() {
   return (neuron0x2ca7710()*0.00207505);
}

double NNfunction_sb_dLsR::synapse0x2caef30() {
   return (neuron0x2ca7a50()*-0.293556);
}

double NNfunction_sb_dLsR::synapse0x2caef70() {
   return (neuron0x2ca7d90()*0.0138229);
}

double NNfunction_sb_dLsR::synapse0x2caefb0() {
   return (neuron0x2ca80d0()*0.26336);
}

double NNfunction_sb_dLsR::synapse0x2caeff0() {
   return (neuron0x2ca8410()*-0.743148);
}

double NNfunction_sb_dLsR::synapse0x2caf030() {
   return (neuron0x2ca8750()*0.132014);
}

double NNfunction_sb_dLsR::synapse0x2caf070() {
   return (neuron0x2ca8a90()*-0.0353035);
}

double NNfunction_sb_dLsR::synapse0x2caf0b0() {
   return (neuron0x2ca8dd0()*0.220783);
}

double NNfunction_sb_dLsR::synapse0x2caf0f0() {
   return (neuron0x2ca9110()*-0.318454);
}

double NNfunction_sb_dLsR::synapse0x2caeb80() {
   return (neuron0x2ca9450()*-0.0465284);
}

double NNfunction_sb_dLsR::synapse0x2caebc0() {
   return (neuron0x2ca99b0()*-0.0789013);
}

double NNfunction_sb_dLsR::synapse0x2caf240() {
   return (neuron0x2ca9bd0()*-0.66149);
}

double NNfunction_sb_dLsR::synapse0x2caf280() {
   return (neuron0x2ca9f10()*-0.00815541);
}

double NNfunction_sb_dLsR::synapse0x2caf2c0() {
   return (neuron0x2caa250()*-0.106642);
}

double NNfunction_sb_dLsR::synapse0x2caf300() {
   return (neuron0x2caa590()*-0.21025);
}

double NNfunction_sb_dLsR::synapse0x2caf340() {
   return (neuron0x2caa8d0()*0.133329);
}

double NNfunction_sb_dLsR::synapse0x2caf380() {
   return (neuron0x2caac10()*-0.0376033);
}

double NNfunction_sb_dLsR::synapse0x2caf700() {
   return (neuron0x2ca60e0()*0.033415);
}

double NNfunction_sb_dLsR::synapse0x2caf740() {
   return (neuron0x2ca6390()*0.228277);
}

double NNfunction_sb_dLsR::synapse0x2caf780() {
   return (neuron0x2ca66d0()*0.144157);
}

double NNfunction_sb_dLsR::synapse0x2caf7c0() {
   return (neuron0x2ca6a10()*0.168394);
}

double NNfunction_sb_dLsR::synapse0x2caf800() {
   return (neuron0x2ca6d50()*0.191713);
}

double NNfunction_sb_dLsR::synapse0x2caf840() {
   return (neuron0x2ca7090()*-0.685341);
}

double NNfunction_sb_dLsR::synapse0x2caf880() {
   return (neuron0x2ca73d0()*0.00826811);
}

double NNfunction_sb_dLsR::synapse0x2caf8c0() {
   return (neuron0x2ca7710()*-0.303071);
}

double NNfunction_sb_dLsR::synapse0x2caf900() {
   return (neuron0x2ca7a50()*-0.525399);
}

double NNfunction_sb_dLsR::synapse0x2caf940() {
   return (neuron0x2ca7d90()*0.112775);
}

double NNfunction_sb_dLsR::synapse0x2caf980() {
   return (neuron0x2ca80d0()*0.251913);
}

double NNfunction_sb_dLsR::synapse0x2caf9c0() {
   return (neuron0x2ca8410()*0.1721);
}

double NNfunction_sb_dLsR::synapse0x2cafa00() {
   return (neuron0x2ca8750()*-0.21676);
}

double NNfunction_sb_dLsR::synapse0x2cafa40() {
   return (neuron0x2ca8a90()*0.926081);
}

double NNfunction_sb_dLsR::synapse0x2cafa80() {
   return (neuron0x2ca8dd0()*-0.0637762);
}

double NNfunction_sb_dLsR::synapse0x2cafac0() {
   return (neuron0x2ca9110()*0.373416);
}

double NNfunction_sb_dLsR::synapse0x2caf550() {
   return (neuron0x2ca9450()*-0.170787);
}

double NNfunction_sb_dLsR::synapse0x2caf590() {
   return (neuron0x2ca99b0()*-0.348128);
}

double NNfunction_sb_dLsR::synapse0x2cafc10() {
   return (neuron0x2ca9bd0()*0.173152);
}

double NNfunction_sb_dLsR::synapse0x2cafc50() {
   return (neuron0x2ca9f10()*-0.934817);
}

double NNfunction_sb_dLsR::synapse0x2cafc90() {
   return (neuron0x2caa250()*-0.0992579);
}

double NNfunction_sb_dLsR::synapse0x2cafcd0() {
   return (neuron0x2caa590()*-0.823507);
}

double NNfunction_sb_dLsR::synapse0x2cafd10() {
   return (neuron0x2caa8d0()*0.112197);
}

double NNfunction_sb_dLsR::synapse0x2cafd50() {
   return (neuron0x2caac10()*-0.100711);
}

double NNfunction_sb_dLsR::synapse0x2ca98a0() {
   return (neuron0x2ca60e0()*0.0990148);
}

double NNfunction_sb_dLsR::synapse0x2ca98e0() {
   return (neuron0x2ca6390()*0.00138918);
}

double NNfunction_sb_dLsR::synapse0x2ca9920() {
   return (neuron0x2ca66d0()*0.0474166);
}

double NNfunction_sb_dLsR::synapse0x2ca9960() {
   return (neuron0x2ca6a10()*-5.45817);
}

double NNfunction_sb_dLsR::synapse0x2cb02e0() {
   return (neuron0x2ca6d50()*-0.00173851);
}

double NNfunction_sb_dLsR::synapse0x2cb0320() {
   return (neuron0x2ca7090()*0.00862286);
}

double NNfunction_sb_dLsR::synapse0x2cb0360() {
   return (neuron0x2ca73d0()*0.0151386);
}

double NNfunction_sb_dLsR::synapse0x2cb03a0() {
   return (neuron0x2ca7710()*0.0670757);
}

double NNfunction_sb_dLsR::synapse0x2cb03e0() {
   return (neuron0x2ca7a50()*0.01848);
}

double NNfunction_sb_dLsR::synapse0x2cb0420() {
   return (neuron0x2ca7d90()*0.00549062);
}

double NNfunction_sb_dLsR::synapse0x2cb0460() {
   return (neuron0x2ca80d0()*-0.00880333);
}

double NNfunction_sb_dLsR::synapse0x2cb04a0() {
   return (neuron0x2ca8410()*0.569935);
}

double NNfunction_sb_dLsR::synapse0x2cb04e0() {
   return (neuron0x2ca8750()*0.0107786);
}

double NNfunction_sb_dLsR::synapse0x2cb0520() {
   return (neuron0x2ca8a90()*0.0159734);
}

double NNfunction_sb_dLsR::synapse0x2cb0560() {
   return (neuron0x2ca8dd0()*-0.00872664);
}

double NNfunction_sb_dLsR::synapse0x2cb05a0() {
   return (neuron0x2ca9110()*-0.0192561);
}

double NNfunction_sb_dLsR::synapse0x2caff20() {
   return (neuron0x2ca9450()*-0.00224502);
}

double NNfunction_sb_dLsR::synapse0x2caff60() {
   return (neuron0x2ca99b0()*-0.0426746);
}

double NNfunction_sb_dLsR::synapse0x2cb06f0() {
   return (neuron0x2ca9bd0()*0.554748);
}

double NNfunction_sb_dLsR::synapse0x2cb0730() {
   return (neuron0x2ca9f10()*-0.00568966);
}

double NNfunction_sb_dLsR::synapse0x2cb0770() {
   return (neuron0x2caa250()*-0.0076062);
}

double NNfunction_sb_dLsR::synapse0x2cb07b0() {
   return (neuron0x2caa590()*0.027216);
}

double NNfunction_sb_dLsR::synapse0x2cb07f0() {
   return (neuron0x2caa8d0()*0.00628252);
}

double NNfunction_sb_dLsR::synapse0x2cb0830() {
   return (neuron0x2caac10()*-0.0102593);
}

double NNfunction_sb_dLsR::synapse0x2cb0bb0() {
   return (neuron0x2ca60e0()*-0.165837);
}

double NNfunction_sb_dLsR::synapse0x2cb0bf0() {
   return (neuron0x2ca6390()*0.000374368);
}

double NNfunction_sb_dLsR::synapse0x2cb0c30() {
   return (neuron0x2ca66d0()*-0.20837);
}

double NNfunction_sb_dLsR::synapse0x2cb0c70() {
   return (neuron0x2ca6a10()*0.0322817);
}

double NNfunction_sb_dLsR::synapse0x2cb0cb0() {
   return (neuron0x2ca6d50()*-0.165466);
}

double NNfunction_sb_dLsR::synapse0x2cb0cf0() {
   return (neuron0x2ca7090()*0.00405415);
}

double NNfunction_sb_dLsR::synapse0x2cb0d30() {
   return (neuron0x2ca73d0()*-0.0131511);
}

double NNfunction_sb_dLsR::synapse0x2cb0d70() {
   return (neuron0x2ca7710()*-0.430125);
}

double NNfunction_sb_dLsR::synapse0x2cb0db0() {
   return (neuron0x2ca7a50()*-0.561449);
}

double NNfunction_sb_dLsR::synapse0x2cb0df0() {
   return (neuron0x2ca7d90()*0.290477);
}

double NNfunction_sb_dLsR::synapse0x2cb0e30() {
   return (neuron0x2ca80d0()*0.457242);
}

double NNfunction_sb_dLsR::synapse0x2cb0e70() {
   return (neuron0x2ca8410()*0.409665);
}

double NNfunction_sb_dLsR::synapse0x2cb0eb0() {
   return (neuron0x2ca8750()*0.166247);
}

double NNfunction_sb_dLsR::synapse0x2cb0ef0() {
   return (neuron0x2ca8a90()*0.101141);
}

double NNfunction_sb_dLsR::synapse0x2cb0f30() {
   return (neuron0x2ca8dd0()*0.0284858);
}

double NNfunction_sb_dLsR::synapse0x2cb0f70() {
   return (neuron0x2ca9110()*-0.174201);
}

double NNfunction_sb_dLsR::synapse0x2cb0a00() {
   return (neuron0x2ca9450()*-0.404461);
}

double NNfunction_sb_dLsR::synapse0x2cb0a40() {
   return (neuron0x2ca99b0()*-0.528635);
}

double NNfunction_sb_dLsR::synapse0x2cb10c0() {
   return (neuron0x2ca9bd0()*0.370892);
}

double NNfunction_sb_dLsR::synapse0x2cb1100() {
   return (neuron0x2ca9f10()*-0.385292);
}

double NNfunction_sb_dLsR::synapse0x2cb1140() {
   return (neuron0x2caa250()*0.0386573);
}

double NNfunction_sb_dLsR::synapse0x2cb1180() {
   return (neuron0x2caa590()*-0.491302);
}

double NNfunction_sb_dLsR::synapse0x2cb11c0() {
   return (neuron0x2caa8d0()*0.0284873);
}

double NNfunction_sb_dLsR::synapse0x2cb1200() {
   return (neuron0x2caac10()*-0.109488);
}

double NNfunction_sb_dLsR::synapse0x2cb1580() {
   return (neuron0x2ca60e0()*0.148907);
}

double NNfunction_sb_dLsR::synapse0x2cb15c0() {
   return (neuron0x2ca6390()*0.01451);
}

double NNfunction_sb_dLsR::synapse0x2cb1600() {
   return (neuron0x2ca66d0()*-0.0171618);
}

double NNfunction_sb_dLsR::synapse0x2cb1640() {
   return (neuron0x2ca6a10()*-0.341048);
}

double NNfunction_sb_dLsR::synapse0x2cb1680() {
   return (neuron0x2ca6d50()*0.114238);
}

double NNfunction_sb_dLsR::synapse0x2cb16c0() {
   return (neuron0x2ca7090()*0.171523);
}

double NNfunction_sb_dLsR::synapse0x2cb1700() {
   return (neuron0x2ca73d0()*-0.724739);
}

double NNfunction_sb_dLsR::synapse0x2cb1740() {
   return (neuron0x2ca7710()*0.0967995);
}

double NNfunction_sb_dLsR::synapse0x2cb1780() {
   return (neuron0x2ca7a50()*0.0217871);
}

double NNfunction_sb_dLsR::synapse0x2cb17c0() {
   return (neuron0x2ca7d90()*-0.105088);
}

double NNfunction_sb_dLsR::synapse0x2cb1800() {
   return (neuron0x2ca80d0()*0.327256);
}

double NNfunction_sb_dLsR::synapse0x2cb1840() {
   return (neuron0x2ca8410()*-0.184769);
}

double NNfunction_sb_dLsR::synapse0x2cb1880() {
   return (neuron0x2ca8750()*-0.0623792);
}

double NNfunction_sb_dLsR::synapse0x2cb18c0() {
   return (neuron0x2ca8a90()*-0.158557);
}

double NNfunction_sb_dLsR::synapse0x2cb1900() {
   return (neuron0x2ca8dd0()*0.506264);
}

double NNfunction_sb_dLsR::synapse0x2cb1940() {
   return (neuron0x2ca9110()*0.240319);
}

double NNfunction_sb_dLsR::synapse0x2cb13d0() {
   return (neuron0x2ca9450()*-0.107133);
}

double NNfunction_sb_dLsR::synapse0x2cb1410() {
   return (neuron0x2ca99b0()*0.227831);
}

double NNfunction_sb_dLsR::synapse0x2cae1a0() {
   return (neuron0x2ca9bd0()*-0.404749);
}

double NNfunction_sb_dLsR::synapse0x2cae1e0() {
   return (neuron0x2ca9f10()*-0.128876);
}

double NNfunction_sb_dLsR::synapse0x2cae220() {
   return (neuron0x2caa250()*-0.131775);
}

double NNfunction_sb_dLsR::synapse0x2cae260() {
   return (neuron0x2caa590()*0.0891739);
}

double NNfunction_sb_dLsR::synapse0x2cae2a0() {
   return (neuron0x2caa8d0()*-0.189789);
}

double NNfunction_sb_dLsR::synapse0x2cae2e0() {
   return (neuron0x2caac10()*0.0300196);
}

double NNfunction_sb_dLsR::synapse0x2cae660() {
   return (neuron0x2ca60e0()*0.126316);
}

double NNfunction_sb_dLsR::synapse0x2cae6a0() {
   return (neuron0x2ca6390()*0.440203);
}

double NNfunction_sb_dLsR::synapse0x2cae6e0() {
   return (neuron0x2ca66d0()*-0.335844);
}

double NNfunction_sb_dLsR::synapse0x2cae720() {
   return (neuron0x2ca6a10()*1.25841);
}

double NNfunction_sb_dLsR::synapse0x2cae760() {
   return (neuron0x2ca6d50()*-0.3757);
}

double NNfunction_sb_dLsR::synapse0x2cae7a0() {
   return (neuron0x2ca7090()*-0.345895);
}

double NNfunction_sb_dLsR::synapse0x2cae7e0() {
   return (neuron0x2ca73d0()*-0.101836);
}

double NNfunction_sb_dLsR::synapse0x2cae820() {
   return (neuron0x2ca7710()*-0.155738);
}

double NNfunction_sb_dLsR::synapse0x2cae860() {
   return (neuron0x2ca7a50()*-0.0793286);
}

double NNfunction_sb_dLsR::synapse0x2cae8a0() {
   return (neuron0x2ca7d90()*-0.125898);
}

double NNfunction_sb_dLsR::synapse0x2cae8e0() {
   return (neuron0x2ca80d0()*-0.168291);
}

double NNfunction_sb_dLsR::synapse0x2cae920() {
   return (neuron0x2ca8410()*0.736766);
}

double NNfunction_sb_dLsR::synapse0x2cae960() {
   return (neuron0x2ca8750()*-0.469674);
}

double NNfunction_sb_dLsR::synapse0x2cb2aa0() {
   return (neuron0x2ca8a90()*-0.118901);
}

double NNfunction_sb_dLsR::synapse0x2cb2ae0() {
   return (neuron0x2ca8dd0()*0.228352);
}

double NNfunction_sb_dLsR::synapse0x2cb2b20() {
   return (neuron0x2ca9110()*0.0758601);
}

double NNfunction_sb_dLsR::synapse0x2cae4b0() {
   return (neuron0x2ca9450()*-0.0684784);
}

double NNfunction_sb_dLsR::synapse0x2cae4f0() {
   return (neuron0x2ca99b0()*-0.282645);
}

double NNfunction_sb_dLsR::synapse0x2cb2c70() {
   return (neuron0x2ca9bd0()*-0.30165);
}

double NNfunction_sb_dLsR::synapse0x2cb2cb0() {
   return (neuron0x2ca9f10()*-0.0806394);
}

double NNfunction_sb_dLsR::synapse0x2cb2cf0() {
   return (neuron0x2caa250()*0.169155);
}

double NNfunction_sb_dLsR::synapse0x2cb2d30() {
   return (neuron0x2caa590()*0.0181996);
}

double NNfunction_sb_dLsR::synapse0x2cb2d70() {
   return (neuron0x2caa8d0()*0.182749);
}

double NNfunction_sb_dLsR::synapse0x2cb2db0() {
   return (neuron0x2caac10()*-0.0696289);
}

double NNfunction_sb_dLsR::synapse0x2cb3130() {
   return (neuron0x2ca60e0()*-0.174751);
}

double NNfunction_sb_dLsR::synapse0x2cb3170() {
   return (neuron0x2ca6390()*0.0491938);
}

double NNfunction_sb_dLsR::synapse0x2cb31b0() {
   return (neuron0x2ca66d0()*-0.411081);
}

double NNfunction_sb_dLsR::synapse0x2cb31f0() {
   return (neuron0x2ca6a10()*-0.70838);
}

double NNfunction_sb_dLsR::synapse0x2cb3230() {
   return (neuron0x2ca6d50()*-0.563907);
}

double NNfunction_sb_dLsR::synapse0x2cb3270() {
   return (neuron0x2ca7090()*0.411394);
}

double NNfunction_sb_dLsR::synapse0x2cb32b0() {
   return (neuron0x2ca73d0()*0.00221524);
}

double NNfunction_sb_dLsR::synapse0x2cb32f0() {
   return (neuron0x2ca7710()*0.0682959);
}

double NNfunction_sb_dLsR::synapse0x2cb3330() {
   return (neuron0x2ca7a50()*0.217084);
}

double NNfunction_sb_dLsR::synapse0x2cb3370() {
   return (neuron0x2ca7d90()*-0.0684054);
}

double NNfunction_sb_dLsR::synapse0x2cb33b0() {
   return (neuron0x2ca80d0()*-0.368894);
}

double NNfunction_sb_dLsR::synapse0x2cb33f0() {
   return (neuron0x2ca8410()*-0.742823);
}

double NNfunction_sb_dLsR::synapse0x2cb3430() {
   return (neuron0x2ca8750()*-0.612812);
}

double NNfunction_sb_dLsR::synapse0x2cb3470() {
   return (neuron0x2ca8a90()*0.0275913);
}

double NNfunction_sb_dLsR::synapse0x2cb34b0() {
   return (neuron0x2ca8dd0()*0.184301);
}

double NNfunction_sb_dLsR::synapse0x2cb34f0() {
   return (neuron0x2ca9110()*-0.0945734);
}

double NNfunction_sb_dLsR::synapse0x2cb2f80() {
   return (neuron0x2ca9450()*0.0179641);
}

double NNfunction_sb_dLsR::synapse0x2cb2fc0() {
   return (neuron0x2ca99b0()*-0.245326);
}

double NNfunction_sb_dLsR::synapse0x2cb3640() {
   return (neuron0x2ca9bd0()*-0.086605);
}

double NNfunction_sb_dLsR::synapse0x2cb3680() {
   return (neuron0x2ca9f10()*0.393094);
}

double NNfunction_sb_dLsR::synapse0x2cb36c0() {
   return (neuron0x2caa250()*-0.239282);
}

double NNfunction_sb_dLsR::synapse0x2cb3700() {
   return (neuron0x2caa590()*0.0959321);
}

double NNfunction_sb_dLsR::synapse0x2cb3740() {
   return (neuron0x2caa8d0()*-0.0816546);
}

double NNfunction_sb_dLsR::synapse0x2cb3780() {
   return (neuron0x2caac10()*-0.0204484);
}

double NNfunction_sb_dLsR::synapse0x2cb3b00() {
   return (neuron0x2ca60e0()*-0.0301927);
}

double NNfunction_sb_dLsR::synapse0x2cb3b40() {
   return (neuron0x2ca6390()*-0.0109291);
}

double NNfunction_sb_dLsR::synapse0x2cb3b80() {
   return (neuron0x2ca66d0()*-0.0120367);
}

double NNfunction_sb_dLsR::synapse0x2cb3bc0() {
   return (neuron0x2ca6a10()*0.0182011);
}

double NNfunction_sb_dLsR::synapse0x2cb3c00() {
   return (neuron0x2ca6d50()*-0.0152677);
}

double NNfunction_sb_dLsR::synapse0x2cb3c40() {
   return (neuron0x2ca7090()*-0.00884592);
}

double NNfunction_sb_dLsR::synapse0x2cb3c80() {
   return (neuron0x2ca73d0()*-0.0155134);
}

double NNfunction_sb_dLsR::synapse0x2cb3cc0() {
   return (neuron0x2ca7710()*-0.00250443);
}

double NNfunction_sb_dLsR::synapse0x2cb3d00() {
   return (neuron0x2ca7a50()*-0.014591);
}

double NNfunction_sb_dLsR::synapse0x2cb3d40() {
   return (neuron0x2ca7d90()*0.00060508);
}

double NNfunction_sb_dLsR::synapse0x2cb3d80() {
   return (neuron0x2ca80d0()*-0.00430865);
}

double NNfunction_sb_dLsR::synapse0x2cb3dc0() {
   return (neuron0x2ca8410()*1.66113);
}

double NNfunction_sb_dLsR::synapse0x2cb3e00() {
   return (neuron0x2ca8750()*0.0166336);
}

double NNfunction_sb_dLsR::synapse0x2cb3e40() {
   return (neuron0x2ca8a90()*-0.00255175);
}

double NNfunction_sb_dLsR::synapse0x2cb3e80() {
   return (neuron0x2ca8dd0()*-0.0096292);
}

double NNfunction_sb_dLsR::synapse0x2cb3ec0() {
   return (neuron0x2ca9110()*0.0192885);
}

double NNfunction_sb_dLsR::synapse0x2cb3950() {
   return (neuron0x2ca9450()*-0.00869667);
}

double NNfunction_sb_dLsR::synapse0x2cb3990() {
   return (neuron0x2ca99b0()*0.00255462);
}

double NNfunction_sb_dLsR::synapse0x2cb4010() {
   return (neuron0x2ca9bd0()*-0.333209);
}

double NNfunction_sb_dLsR::synapse0x2cb4050() {
   return (neuron0x2ca9f10()*0.021111);
}

double NNfunction_sb_dLsR::synapse0x2cb4090() {
   return (neuron0x2caa250()*-0.00522518);
}

double NNfunction_sb_dLsR::synapse0x2cb40d0() {
   return (neuron0x2caa590()*-0.00465786);
}

double NNfunction_sb_dLsR::synapse0x2cb4110() {
   return (neuron0x2caa8d0()*0.0209321);
}

double NNfunction_sb_dLsR::synapse0x2cb4150() {
   return (neuron0x2caac10()*-0.0117745);
}

double NNfunction_sb_dLsR::synapse0x2cb44d0() {
   return (neuron0x2ca60e0()*-0.485692);
}

double NNfunction_sb_dLsR::synapse0x2cb4510() {
   return (neuron0x2ca6390()*0.115153);
}

double NNfunction_sb_dLsR::synapse0x2cb4550() {
   return (neuron0x2ca66d0()*-0.10827);
}

double NNfunction_sb_dLsR::synapse0x2cb4590() {
   return (neuron0x2ca6a10()*-0.711842);
}

double NNfunction_sb_dLsR::synapse0x2cb45d0() {
   return (neuron0x2ca6d50()*-0.353542);
}

double NNfunction_sb_dLsR::synapse0x2cb4610() {
   return (neuron0x2ca7090()*-0.000440627);
}

double NNfunction_sb_dLsR::synapse0x2cb4650() {
   return (neuron0x2ca73d0()*-0.599525);
}

double NNfunction_sb_dLsR::synapse0x2cb4690() {
   return (neuron0x2ca7710()*0.410092);
}

double NNfunction_sb_dLsR::synapse0x2cb46d0() {
   return (neuron0x2ca7a50()*0.511627);
}

double NNfunction_sb_dLsR::synapse0x2cb4710() {
   return (neuron0x2ca7d90()*-0.0596269);
}

double NNfunction_sb_dLsR::synapse0x2cb4750() {
   return (neuron0x2ca80d0()*-0.386284);
}

double NNfunction_sb_dLsR::synapse0x2cb4790() {
   return (neuron0x2ca8410()*-0.0555585);
}

double NNfunction_sb_dLsR::synapse0x2cb47d0() {
   return (neuron0x2ca8750()*0.183883);
}

double NNfunction_sb_dLsR::synapse0x2cb4810() {
   return (neuron0x2ca8a90()*0.027094);
}

double NNfunction_sb_dLsR::synapse0x2cb4850() {
   return (neuron0x2ca8dd0()*-0.222867);
}

double NNfunction_sb_dLsR::synapse0x2cb4890() {
   return (neuron0x2ca9110()*0.181986);
}

double NNfunction_sb_dLsR::synapse0x2cb4320() {
   return (neuron0x2ca9450()*0.517562);
}

double NNfunction_sb_dLsR::synapse0x2cb4360() {
   return (neuron0x2ca99b0()*0.163306);
}

double NNfunction_sb_dLsR::synapse0x2cb49e0() {
   return (neuron0x2ca9bd0()*0.307895);
}

double NNfunction_sb_dLsR::synapse0x2cb4a20() {
   return (neuron0x2ca9f10()*-0.235559);
}

double NNfunction_sb_dLsR::synapse0x2cb4a60() {
   return (neuron0x2caa250()*-0.078336);
}

double NNfunction_sb_dLsR::synapse0x2cb4aa0() {
   return (neuron0x2caa590()*-0.479967);
}

double NNfunction_sb_dLsR::synapse0x2cb4ae0() {
   return (neuron0x2caa8d0()*0.406684);
}

double NNfunction_sb_dLsR::synapse0x2cb4b20() {
   return (neuron0x2caac10()*-0.47029);
}

double NNfunction_sb_dLsR::synapse0x2cb4ea0() {
   return (neuron0x2ca60e0()*0.00824472);
}

double NNfunction_sb_dLsR::synapse0x2ca6270() {
   return (neuron0x2ca6390()*0.0219484);
}

double NNfunction_sb_dLsR::synapse0x2ca62b0() {
   return (neuron0x2ca66d0()*-0.0502607);
}

double NNfunction_sb_dLsR::synapse0x2ca65b0() {
   return (neuron0x2ca6a10()*-0.0525789);
}

double NNfunction_sb_dLsR::synapse0x2ca65f0() {
   return (neuron0x2ca6d50()*0.00810064);
}

double NNfunction_sb_dLsR::synapse0x2ca68f0() {
   return (neuron0x2ca7090()*0.00414324);
}

double NNfunction_sb_dLsR::synapse0x2ca6930() {
   return (neuron0x2ca73d0()*0.00186399);
}

double NNfunction_sb_dLsR::synapse0x2ca6c30() {
   return (neuron0x2ca7710()*-0.0254215);
}

double NNfunction_sb_dLsR::synapse0x2ca6c70() {
   return (neuron0x2ca7a50()*-0.0149338);
}

double NNfunction_sb_dLsR::synapse0x2ca6f70() {
   return (neuron0x2ca7d90()*-0.00333794);
}

double NNfunction_sb_dLsR::synapse0x2ca6fb0() {
   return (neuron0x2ca80d0()*-0.039816);
}

double NNfunction_sb_dLsR::synapse0x2ca72b0() {
   return (neuron0x2ca8410()*1.55731);
}

double NNfunction_sb_dLsR::synapse0x2ca72f0() {
   return (neuron0x2ca8750()*0.00278389);
}

double NNfunction_sb_dLsR::synapse0x2ca75f0() {
   return (neuron0x2ca8a90()*-0.00799517);
}

double NNfunction_sb_dLsR::synapse0x2ca7630() {
   return (neuron0x2ca8dd0()*-0.038599);
}

double NNfunction_sb_dLsR::synapse0x2ca7930() {
   return (neuron0x2ca9110()*-0.0160227);
}

double NNfunction_sb_dLsR::synapse0x2ca7970() {
   return (neuron0x2ca9450()*0.0418761);
}

double NNfunction_sb_dLsR::synapse0x2ca7c70() {
   return (neuron0x2ca99b0()*0.037077);
}

double NNfunction_sb_dLsR::synapse0x2ca7cb0() {
   return (neuron0x2ca9bd0()*0.712084);
}

double NNfunction_sb_dLsR::synapse0x2ca7fb0() {
   return (neuron0x2ca9f10()*0.000713088);
}

double NNfunction_sb_dLsR::synapse0x2ca7ff0() {
   return (neuron0x2caa250()*0.0254256);
}

double NNfunction_sb_dLsR::synapse0x2ca82f0() {
   return (neuron0x2caa590()*-0.0272155);
}

double NNfunction_sb_dLsR::synapse0x2ca8330() {
   return (neuron0x2caa8d0()*-0.0164165);
}

double NNfunction_sb_dLsR::synapse0x2ca8630() {
   return (neuron0x2caac10()*-0.0189848);
}

double NNfunction_sb_dLsR::synapse0x2ca8670() {
   return (neuron0x2ca60e0()*0.0768008);
}

double NNfunction_sb_dLsR::synapse0x2ca9330() {
   return (neuron0x2ca6390()*-0.0423861);
}

double NNfunction_sb_dLsR::synapse0x2ca9370() {
   return (neuron0x2ca66d0()*-1.01182);
}

double NNfunction_sb_dLsR::synapse0x2cb4cf0() {
   return (neuron0x2ca6a10()*0.501459);
}

double NNfunction_sb_dLsR::synapse0x2cb4d30() {
   return (neuron0x2ca6d50()*0.299734);
}

double NNfunction_sb_dLsR::synapse0x2ca9670() {
   return (neuron0x2ca7090()*-0.017358);
}

double NNfunction_sb_dLsR::synapse0x2ca96b0() {
   return (neuron0x2ca73d0()*-0.451533);
}

double NNfunction_sb_dLsR::synapse0x2a61090() {
   return (neuron0x2ca7710()*-0.0450392);
}

double NNfunction_sb_dLsR::synapse0x2a610d0() {
   return (neuron0x2ca7a50()*0.112663);
}

double NNfunction_sb_dLsR::synapse0x2ca9df0() {
   return (neuron0x2ca7d90()*0.148415);
}

double NNfunction_sb_dLsR::synapse0x2ca9e30() {
   return (neuron0x2ca80d0()*-0.212453);
}

double NNfunction_sb_dLsR::synapse0x2caa130() {
   return (neuron0x2ca8410()*0.327937);
}

double NNfunction_sb_dLsR::synapse0x2caa170() {
   return (neuron0x2ca8750()*0.048468);
}

double NNfunction_sb_dLsR::synapse0x2caa470() {
   return (neuron0x2ca8a90()*0.020729);
}

double NNfunction_sb_dLsR::synapse0x2caa4b0() {
   return (neuron0x2ca8dd0()*0.115271);
}

double NNfunction_sb_dLsR::synapse0x2caa7b0() {
   return (neuron0x2ca9110()*0.163786);
}

double NNfunction_sb_dLsR::synapse0x2caa7f0() {
   return (neuron0x2ca9450()*-0.245775);
}

double NNfunction_sb_dLsR::synapse0x2caaaf0() {
   return (neuron0x2ca99b0()*-0.0232111);
}

double NNfunction_sb_dLsR::synapse0x2caab30() {
   return (neuron0x2ca9bd0()*-0.1095);
}

double NNfunction_sb_dLsR::synapse0x2caae30() {
   return (neuron0x2ca9f10()*0.202059);
}

double NNfunction_sb_dLsR::synapse0x2caae70() {
   return (neuron0x2caa250()*0.0822117);
}

double NNfunction_sb_dLsR::synapse0x2ca8970() {
   return (neuron0x2caa590()*-0.232786);
}

double NNfunction_sb_dLsR::synapse0x2ca89b0() {
   return (neuron0x2caa8d0()*0.30695);
}

double NNfunction_sb_dLsR::synapse0x2cb6c10() {
   return (neuron0x2caac10()*0.0396314);
}

double NNfunction_sb_dLsR::synapse0x2cb6f90() {
   return (neuron0x2ca60e0()*0.0168898);
}

double NNfunction_sb_dLsR::synapse0x2cb6fd0() {
   return (neuron0x2ca6390()*0.04079);
}

double NNfunction_sb_dLsR::synapse0x2cb7010() {
   return (neuron0x2ca66d0()*-0.0148049);
}

double NNfunction_sb_dLsR::synapse0x2cb7050() {
   return (neuron0x2ca6a10()*-1.66498);
}

double NNfunction_sb_dLsR::synapse0x2cb7090() {
   return (neuron0x2ca6d50()*-0.00810107);
}

double NNfunction_sb_dLsR::synapse0x2cb70d0() {
   return (neuron0x2ca7090()*-0.0354419);
}

double NNfunction_sb_dLsR::synapse0x2cb7110() {
   return (neuron0x2ca73d0()*-0.0743974);
}

double NNfunction_sb_dLsR::synapse0x2cb7150() {
   return (neuron0x2ca7710()*-0.000250827);
}

double NNfunction_sb_dLsR::synapse0x2cb7190() {
   return (neuron0x2ca7a50()*-0.0641225);
}

double NNfunction_sb_dLsR::synapse0x2cb71d0() {
   return (neuron0x2ca7d90()*-0.019213);
}

double NNfunction_sb_dLsR::synapse0x2cb7210() {
   return (neuron0x2ca80d0()*-0.197316);
}

double NNfunction_sb_dLsR::synapse0x2cb7250() {
   return (neuron0x2ca8410()*-0.0726458);
}

double NNfunction_sb_dLsR::synapse0x2cb7290() {
   return (neuron0x2ca8750()*-0.108375);
}

double NNfunction_sb_dLsR::synapse0x2cb72d0() {
   return (neuron0x2ca8a90()*0.0497195);
}

double NNfunction_sb_dLsR::synapse0x2cb7310() {
   return (neuron0x2ca8dd0()*0.108603);
}

double NNfunction_sb_dLsR::synapse0x2cb7350() {
   return (neuron0x2ca9110()*-0.0374267);
}

double NNfunction_sb_dLsR::synapse0x2cb6de0() {
   return (neuron0x2ca9450()*-0.0339842);
}

double NNfunction_sb_dLsR::synapse0x2cb6e20() {
   return (neuron0x2ca99b0()*-0.086941);
}

double NNfunction_sb_dLsR::synapse0x2cb74a0() {
   return (neuron0x2ca9bd0()*-0.598067);
}

double NNfunction_sb_dLsR::synapse0x2cb74e0() {
   return (neuron0x2ca9f10()*-0.09615);
}

double NNfunction_sb_dLsR::synapse0x2cb7520() {
   return (neuron0x2caa250()*0.0191558);
}

double NNfunction_sb_dLsR::synapse0x2cb7560() {
   return (neuron0x2caa590()*0.0954315);
}

double NNfunction_sb_dLsR::synapse0x2cb75a0() {
   return (neuron0x2caa8d0()*0.144259);
}

double NNfunction_sb_dLsR::synapse0x2cb75e0() {
   return (neuron0x2caac10()*-0.00791237);
}

double NNfunction_sb_dLsR::synapse0x2cb7960() {
   return (neuron0x2ca60e0()*0.00717191);
}

double NNfunction_sb_dLsR::synapse0x2cb79a0() {
   return (neuron0x2ca6390()*0.00159253);
}

double NNfunction_sb_dLsR::synapse0x2cb79e0() {
   return (neuron0x2ca66d0()*-0.0880163);
}

double NNfunction_sb_dLsR::synapse0x2cb7a20() {
   return (neuron0x2ca6a10()*2.33233);
}

double NNfunction_sb_dLsR::synapse0x2cb7a60() {
   return (neuron0x2ca6d50()*0.00207802);
}

double NNfunction_sb_dLsR::synapse0x2cb7aa0() {
   return (neuron0x2ca7090()*-0.00528669);
}

double NNfunction_sb_dLsR::synapse0x2cb7ae0() {
   return (neuron0x2ca73d0()*-0.00907007);
}

double NNfunction_sb_dLsR::synapse0x2cb7b20() {
   return (neuron0x2ca7710()*0.00943569);
}

double NNfunction_sb_dLsR::synapse0x2cb7b60() {
   return (neuron0x2ca7a50()*0.00759778);
}

double NNfunction_sb_dLsR::synapse0x2cb7ba0() {
   return (neuron0x2ca7d90()*-0.0061708);
}

double NNfunction_sb_dLsR::synapse0x2cb7be0() {
   return (neuron0x2ca80d0()*0.00154438);
}

double NNfunction_sb_dLsR::synapse0x2cb7c20() {
   return (neuron0x2ca8410()*0.0704035);
}

double NNfunction_sb_dLsR::synapse0x2cb7c60() {
   return (neuron0x2ca8750()*0.00678447);
}

double NNfunction_sb_dLsR::synapse0x2cb7ca0() {
   return (neuron0x2ca8a90()*0.00905589);
}

double NNfunction_sb_dLsR::synapse0x2cb7ce0() {
   return (neuron0x2ca8dd0()*-0.0081626);
}

double NNfunction_sb_dLsR::synapse0x2cb7d20() {
   return (neuron0x2ca9110()*0.010419);
}

double NNfunction_sb_dLsR::synapse0x2cb77b0() {
   return (neuron0x2ca9450()*0.00266573);
}

double NNfunction_sb_dLsR::synapse0x2cb77f0() {
   return (neuron0x2ca99b0()*-0.00477899);
}

double NNfunction_sb_dLsR::synapse0x2cb7e70() {
   return (neuron0x2ca9bd0()*0.0447371);
}

double NNfunction_sb_dLsR::synapse0x2cb7eb0() {
   return (neuron0x2ca9f10()*0.00258898);
}

double NNfunction_sb_dLsR::synapse0x2cb7ef0() {
   return (neuron0x2caa250()*0.0112176);
}

double NNfunction_sb_dLsR::synapse0x2cb7f30() {
   return (neuron0x2caa590()*-0.00874066);
}

double NNfunction_sb_dLsR::synapse0x2cb7f70() {
   return (neuron0x2caa8d0()*0.00289331);
}

double NNfunction_sb_dLsR::synapse0x2cb7fb0() {
   return (neuron0x2caac10()*-0.0191962);
}

double NNfunction_sb_dLsR::synapse0x2cb8330() {
   return (neuron0x2ca60e0()*-0.125753);
}

double NNfunction_sb_dLsR::synapse0x2cb8370() {
   return (neuron0x2ca6390()*-0.0477981);
}

double NNfunction_sb_dLsR::synapse0x2cb83b0() {
   return (neuron0x2ca66d0()*-0.199969);
}

double NNfunction_sb_dLsR::synapse0x2cb83f0() {
   return (neuron0x2ca6a10()*0.640613);
}

double NNfunction_sb_dLsR::synapse0x2cb8430() {
   return (neuron0x2ca6d50()*0.0509557);
}

double NNfunction_sb_dLsR::synapse0x2cb8470() {
   return (neuron0x2ca7090()*0.0116268);
}

double NNfunction_sb_dLsR::synapse0x2cb84b0() {
   return (neuron0x2ca73d0()*-0.0184133);
}

double NNfunction_sb_dLsR::synapse0x2cb84f0() {
   return (neuron0x2ca7710()*-0.0342354);
}

double NNfunction_sb_dLsR::synapse0x2cb8530() {
   return (neuron0x2ca7a50()*0.07509);
}

double NNfunction_sb_dLsR::synapse0x2cb8570() {
   return (neuron0x2ca7d90()*0.0060185);
}

double NNfunction_sb_dLsR::synapse0x2cb85b0() {
   return (neuron0x2ca80d0()*-0.0259135);
}

double NNfunction_sb_dLsR::synapse0x2cb85f0() {
   return (neuron0x2ca8410()*-0.117802);
}

double NNfunction_sb_dLsR::synapse0x2cb8630() {
   return (neuron0x2ca8750()*-0.0385599);
}

double NNfunction_sb_dLsR::synapse0x2cb8670() {
   return (neuron0x2ca8a90()*0.00593419);
}

double NNfunction_sb_dLsR::synapse0x2cb86b0() {
   return (neuron0x2ca8dd0()*-0.0569694);
}

double NNfunction_sb_dLsR::synapse0x2cb86f0() {
   return (neuron0x2ca9110()*-0.0246089);
}

double NNfunction_sb_dLsR::synapse0x2cb8180() {
   return (neuron0x2ca9450()*-0.0243005);
}

double NNfunction_sb_dLsR::synapse0x2cb81c0() {
   return (neuron0x2ca99b0()*0.0326132);
}

double NNfunction_sb_dLsR::synapse0x2cb8840() {
   return (neuron0x2ca9bd0()*-0.148641);
}

double NNfunction_sb_dLsR::synapse0x2cb8880() {
   return (neuron0x2ca9f10()*0.0130752);
}

double NNfunction_sb_dLsR::synapse0x2cb88c0() {
   return (neuron0x2caa250()*-0.0370951);
}

double NNfunction_sb_dLsR::synapse0x2cb8900() {
   return (neuron0x2caa590()*-0.0605604);
}

double NNfunction_sb_dLsR::synapse0x2cb8940() {
   return (neuron0x2caa8d0()*0.0157912);
}

double NNfunction_sb_dLsR::synapse0x2cb8980() {
   return (neuron0x2caac10()*-0.0508214);
}

double NNfunction_sb_dLsR::synapse0x2cb8d00() {
   return (neuron0x2ca60e0()*-0.0699076);
}

double NNfunction_sb_dLsR::synapse0x2cb8d40() {
   return (neuron0x2ca6390()*0.507026);
}

double NNfunction_sb_dLsR::synapse0x2cb8d80() {
   return (neuron0x2ca66d0()*-0.178399);
}

double NNfunction_sb_dLsR::synapse0x2cb8dc0() {
   return (neuron0x2ca6a10()*-0.00147718);
}

double NNfunction_sb_dLsR::synapse0x2cb8e00() {
   return (neuron0x2ca6d50()*-0.388308);
}

double NNfunction_sb_dLsR::synapse0x2cb8e40() {
   return (neuron0x2ca7090()*0.379642);
}

double NNfunction_sb_dLsR::synapse0x2cb8e80() {
   return (neuron0x2ca73d0()*-0.0296935);
}

double NNfunction_sb_dLsR::synapse0x2cb8ec0() {
   return (neuron0x2ca7710()*0.15246);
}

double NNfunction_sb_dLsR::synapse0x2cb8f00() {
   return (neuron0x2ca7a50()*0.218053);
}

double NNfunction_sb_dLsR::synapse0x2cb8f40() {
   return (neuron0x2ca7d90()*0.117536);
}

double NNfunction_sb_dLsR::synapse0x2cb8f80() {
   return (neuron0x2ca80d0()*-0.0678245);
}

double NNfunction_sb_dLsR::synapse0x2cb8fc0() {
   return (neuron0x2ca8410()*-0.552813);
}

double NNfunction_sb_dLsR::synapse0x2cb9000() {
   return (neuron0x2ca8750()*-0.00568145);
}

double NNfunction_sb_dLsR::synapse0x2cb9040() {
   return (neuron0x2ca8a90()*-0.126478);
}

double NNfunction_sb_dLsR::synapse0x2cb9080() {
   return (neuron0x2ca8dd0()*-0.10342);
}

double NNfunction_sb_dLsR::synapse0x2cb90c0() {
   return (neuron0x2ca9110()*-0.443569);
}

double NNfunction_sb_dLsR::synapse0x2cb8b50() {
   return (neuron0x2ca9450()*-0.526406);
}

double NNfunction_sb_dLsR::synapse0x2cb8b90() {
   return (neuron0x2ca99b0()*-0.642668);
}

double NNfunction_sb_dLsR::synapse0x2cb9210() {
   return (neuron0x2ca9bd0()*-1.07228);
}

double NNfunction_sb_dLsR::synapse0x2cb9250() {
   return (neuron0x2ca9f10()*0.0991464);
}

double NNfunction_sb_dLsR::synapse0x2cb9290() {
   return (neuron0x2caa250()*0.133905);
}

double NNfunction_sb_dLsR::synapse0x2cb92d0() {
   return (neuron0x2caa590()*0.804789);
}

double NNfunction_sb_dLsR::synapse0x2cb9310() {
   return (neuron0x2caa8d0()*0.360769);
}

double NNfunction_sb_dLsR::synapse0x2cb9350() {
   return (neuron0x2caac10()*0.335422);
}

double NNfunction_sb_dLsR::synapse0x2cb96d0() {
   return (neuron0x2ca60e0()*0.267686);
}

double NNfunction_sb_dLsR::synapse0x2cb9710() {
   return (neuron0x2ca6390()*-0.0129522);
}

double NNfunction_sb_dLsR::synapse0x2cb9750() {
   return (neuron0x2ca66d0()*-0.0677932);
}

double NNfunction_sb_dLsR::synapse0x2cb9790() {
   return (neuron0x2ca6a10()*-0.780328);
}

double NNfunction_sb_dLsR::synapse0x2cb97d0() {
   return (neuron0x2ca6d50()*0.121597);
}

double NNfunction_sb_dLsR::synapse0x2cb9810() {
   return (neuron0x2ca7090()*0.0236679);
}

double NNfunction_sb_dLsR::synapse0x2cb9850() {
   return (neuron0x2ca73d0()*-0.33878);
}

double NNfunction_sb_dLsR::synapse0x2cb9890() {
   return (neuron0x2ca7710()*-0.124534);
}

double NNfunction_sb_dLsR::synapse0x2cb98d0() {
   return (neuron0x2ca7a50()*0.0255191);
}

double NNfunction_sb_dLsR::synapse0x2cb1a90() {
   return (neuron0x2ca7d90()*-0.209767);
}

double NNfunction_sb_dLsR::synapse0x2cb1ad0() {
   return (neuron0x2ca80d0()*1.01639);
}

double NNfunction_sb_dLsR::synapse0x2cb1b10() {
   return (neuron0x2ca8410()*-0.0416551);
}

double NNfunction_sb_dLsR::synapse0x2cb1b50() {
   return (neuron0x2ca8750()*0.406242);
}

double NNfunction_sb_dLsR::synapse0x2cb1b90() {
   return (neuron0x2ca8a90()*-0.968233);
}

double NNfunction_sb_dLsR::synapse0x2cb1bd0() {
   return (neuron0x2ca8dd0()*-0.271384);
}

double NNfunction_sb_dLsR::synapse0x2cb1c10() {
   return (neuron0x2ca9110()*0.0324942);
}

double NNfunction_sb_dLsR::synapse0x2cb9520() {
   return (neuron0x2ca9450()*0.1598);
}

double NNfunction_sb_dLsR::synapse0x2cb9560() {
   return (neuron0x2ca99b0()*0.261981);
}

double NNfunction_sb_dLsR::synapse0x2cb1d60() {
   return (neuron0x2ca9bd0()*0.603516);
}

double NNfunction_sb_dLsR::synapse0x2cb1da0() {
   return (neuron0x2ca9f10()*0.885094);
}

double NNfunction_sb_dLsR::synapse0x2cb1de0() {
   return (neuron0x2caa250()*0.0273651);
}

double NNfunction_sb_dLsR::synapse0x2cb1e20() {
   return (neuron0x2caa590()*0.0916352);
}

double NNfunction_sb_dLsR::synapse0x2cb1e60() {
   return (neuron0x2caa8d0()*0.101388);
}

double NNfunction_sb_dLsR::synapse0x2cb1ea0() {
   return (neuron0x2caac10()*0.216007);
}

double NNfunction_sb_dLsR::synapse0x2cb2220() {
   return (neuron0x2ca60e0()*0.0547845);
}

double NNfunction_sb_dLsR::synapse0x2cb2260() {
   return (neuron0x2ca6390()*0.109307);
}

double NNfunction_sb_dLsR::synapse0x2cb22a0() {
   return (neuron0x2ca66d0()*1.03047);
}

double NNfunction_sb_dLsR::synapse0x2cb22e0() {
   return (neuron0x2ca6a10()*0.0979905);
}

double NNfunction_sb_dLsR::synapse0x2cb2320() {
   return (neuron0x2ca6d50()*-0.0802817);
}

double NNfunction_sb_dLsR::synapse0x2cb2360() {
   return (neuron0x2ca7090()*0.00110263);
}

double NNfunction_sb_dLsR::synapse0x2cb23a0() {
   return (neuron0x2ca73d0()*-0.0958725);
}

double NNfunction_sb_dLsR::synapse0x2cb23e0() {
   return (neuron0x2ca7710()*0.0183497);
}

double NNfunction_sb_dLsR::synapse0x2cb2420() {
   return (neuron0x2ca7a50()*-0.0103333);
}

double NNfunction_sb_dLsR::synapse0x2cb2460() {
   return (neuron0x2ca7d90()*0.0339024);
}

double NNfunction_sb_dLsR::synapse0x2cb24a0() {
   return (neuron0x2ca80d0()*0.0504011);
}

double NNfunction_sb_dLsR::synapse0x2cb24e0() {
   return (neuron0x2ca8410()*0.104345);
}

double NNfunction_sb_dLsR::synapse0x2cb2520() {
   return (neuron0x2ca8750()*0.0325242);
}

double NNfunction_sb_dLsR::synapse0x2cb2560() {
   return (neuron0x2ca8a90()*0.0676172);
}

double NNfunction_sb_dLsR::synapse0x2cb25a0() {
   return (neuron0x2ca8dd0()*0.136301);
}

double NNfunction_sb_dLsR::synapse0x2cb25e0() {
   return (neuron0x2ca9110()*-0.0106771);
}

double NNfunction_sb_dLsR::synapse0x2cb2070() {
   return (neuron0x2ca9450()*0.0029171);
}

double NNfunction_sb_dLsR::synapse0x2cb20b0() {
   return (neuron0x2ca99b0()*0.0348447);
}

double NNfunction_sb_dLsR::synapse0x2cb2730() {
   return (neuron0x2ca9bd0()*0.287008);
}

double NNfunction_sb_dLsR::synapse0x2cb2770() {
   return (neuron0x2ca9f10()*0.00232887);
}

double NNfunction_sb_dLsR::synapse0x2cb27b0() {
   return (neuron0x2caa250()*0.0456825);
}

double NNfunction_sb_dLsR::synapse0x2cb27f0() {
   return (neuron0x2caa590()*-0.00018948);
}

double NNfunction_sb_dLsR::synapse0x2cb2830() {
   return (neuron0x2caa8d0()*0.0393448);
}

double NNfunction_sb_dLsR::synapse0x2cb2870() {
   return (neuron0x2caac10()*0.024537);
}

double NNfunction_sb_dLsR::synapse0x2cb2a40() {
   return (neuron0x2ca60e0()*-0.00820888);
}

double NNfunction_sb_dLsR::synapse0x2cbbad0() {
   return (neuron0x2ca6390()*0.00467933);
}

double NNfunction_sb_dLsR::synapse0x2cbbb10() {
   return (neuron0x2ca66d0()*0.0621349);
}

double NNfunction_sb_dLsR::synapse0x2cbbb50() {
   return (neuron0x2ca6a10()*-0.144132);
}

double NNfunction_sb_dLsR::synapse0x2cbbb90() {
   return (neuron0x2ca6d50()*-0.0346269);
}

double NNfunction_sb_dLsR::synapse0x2cbbbd0() {
   return (neuron0x2ca7090()*0.0114967);
}

double NNfunction_sb_dLsR::synapse0x2cbbc10() {
   return (neuron0x2ca73d0()*0.0108);
}

double NNfunction_sb_dLsR::synapse0x2cbbc50() {
   return (neuron0x2ca7710()*-0.0269395);
}

double NNfunction_sb_dLsR::synapse0x2cbbc90() {
   return (neuron0x2ca7a50()*-0.0802841);
}

double NNfunction_sb_dLsR::synapse0x2cbbcd0() {
   return (neuron0x2ca7d90()*-0.0461848);
}

double NNfunction_sb_dLsR::synapse0x2cbbd10() {
   return (neuron0x2ca80d0()*-0.000173964);
}

double NNfunction_sb_dLsR::synapse0x2cbbd50() {
   return (neuron0x2ca8410()*-0.106107);
}

double NNfunction_sb_dLsR::synapse0x2cbbd90() {
   return (neuron0x2ca8750()*0.0239605);
}

double NNfunction_sb_dLsR::synapse0x2cbbdd0() {
   return (neuron0x2ca8a90()*-0.00375976);
}

double NNfunction_sb_dLsR::synapse0x2cbbe10() {
   return (neuron0x2ca8dd0()*-0.0226638);
}

double NNfunction_sb_dLsR::synapse0x2cbbe50() {
   return (neuron0x2ca9110()*0.0496823);
}

double NNfunction_sb_dLsR::synapse0x2cbb920() {
   return (neuron0x2ca9450()*-0.0252526);
}

double NNfunction_sb_dLsR::synapse0x2cbb960() {
   return (neuron0x2ca99b0()*0.0147582);
}

double NNfunction_sb_dLsR::synapse0x2cbbfa0() {
   return (neuron0x2ca9bd0()*1.95764);
}

double NNfunction_sb_dLsR::synapse0x2cbbfe0() {
   return (neuron0x2ca9f10()*-0.0060797);
}

double NNfunction_sb_dLsR::synapse0x2cbc020() {
   return (neuron0x2caa250()*0.00928258);
}

double NNfunction_sb_dLsR::synapse0x2cbc060() {
   return (neuron0x2caa590()*0.0382747);
}

double NNfunction_sb_dLsR::synapse0x2cbc0a0() {
   return (neuron0x2caa8d0()*0.0111022);
}

double NNfunction_sb_dLsR::synapse0x2cbc0e0() {
   return (neuron0x2caac10()*-0.00257292);
}

double NNfunction_sb_dLsR::synapse0x2cbc460() {
   return (neuron0x2ca60e0()*-0.17954);
}

double NNfunction_sb_dLsR::synapse0x2cbc4a0() {
   return (neuron0x2ca6390()*-0.0934134);
}

double NNfunction_sb_dLsR::synapse0x2cbc4e0() {
   return (neuron0x2ca66d0()*-0.619852);
}

double NNfunction_sb_dLsR::synapse0x2cbc520() {
   return (neuron0x2ca6a10()*-0.728396);
}

double NNfunction_sb_dLsR::synapse0x2cbc560() {
   return (neuron0x2ca6d50()*-0.256213);
}

double NNfunction_sb_dLsR::synapse0x2cbc5a0() {
   return (neuron0x2ca7090()*-0.112158);
}

double NNfunction_sb_dLsR::synapse0x2cbc5e0() {
   return (neuron0x2ca73d0()*-0.210658);
}

double NNfunction_sb_dLsR::synapse0x2cbc620() {
   return (neuron0x2ca7710()*-0.0530112);
}

double NNfunction_sb_dLsR::synapse0x2cbc660() {
   return (neuron0x2ca7a50()*-0.0469203);
}

double NNfunction_sb_dLsR::synapse0x2cbc6a0() {
   return (neuron0x2ca7d90()*0.091617);
}

double NNfunction_sb_dLsR::synapse0x2cbc6e0() {
   return (neuron0x2ca80d0()*0.156379);
}

double NNfunction_sb_dLsR::synapse0x2cbc720() {
   return (neuron0x2ca8410()*0.299864);
}

double NNfunction_sb_dLsR::synapse0x2cbc760() {
   return (neuron0x2ca8750()*0.0313655);
}

double NNfunction_sb_dLsR::synapse0x2cbc7a0() {
   return (neuron0x2ca8a90()*-0.0673417);
}

double NNfunction_sb_dLsR::synapse0x2cbc7e0() {
   return (neuron0x2ca8dd0()*-0.163319);
}

double NNfunction_sb_dLsR::synapse0x2cbc820() {
   return (neuron0x2ca9110()*0.00592157);
}

double NNfunction_sb_dLsR::synapse0x2cbc2b0() {
   return (neuron0x2ca9450()*0.0164264);
}

double NNfunction_sb_dLsR::synapse0x2cbc2f0() {
   return (neuron0x2ca99b0()*0.0724451);
}

double NNfunction_sb_dLsR::synapse0x2cbc970() {
   return (neuron0x2ca9bd0()*-0.251215);
}

double NNfunction_sb_dLsR::synapse0x2cbc9b0() {
   return (neuron0x2ca9f10()*0.0998703);
}

double NNfunction_sb_dLsR::synapse0x2cbc9f0() {
   return (neuron0x2caa250()*0.057026);
}

double NNfunction_sb_dLsR::synapse0x2cbca30() {
   return (neuron0x2caa590()*-0.157825);
}

double NNfunction_sb_dLsR::synapse0x2cbca70() {
   return (neuron0x2caa8d0()*-0.123727);
}

double NNfunction_sb_dLsR::synapse0x2cbcab0() {
   return (neuron0x2caac10()*0.164199);
}

double NNfunction_sb_dLsR::synapse0x2cbce30() {
   return (neuron0x2ca60e0()*-0.0083584);
}

double NNfunction_sb_dLsR::synapse0x2cbce70() {
   return (neuron0x2ca6390()*0.0793248);
}

double NNfunction_sb_dLsR::synapse0x2cbceb0() {
   return (neuron0x2ca66d0()*0.587891);
}

double NNfunction_sb_dLsR::synapse0x2cbcef0() {
   return (neuron0x2ca6a10()*-0.894298);
}

double NNfunction_sb_dLsR::synapse0x2cbcf30() {
   return (neuron0x2ca6d50()*0.131755);
}

double NNfunction_sb_dLsR::synapse0x2cbcf70() {
   return (neuron0x2ca7090()*0.206074);
}

double NNfunction_sb_dLsR::synapse0x2cbcfb0() {
   return (neuron0x2ca73d0()*-0.0463647);
}

double NNfunction_sb_dLsR::synapse0x2cbcff0() {
   return (neuron0x2ca7710()*0.596076);
}

double NNfunction_sb_dLsR::synapse0x2cbd030() {
   return (neuron0x2ca7a50()*0.206006);
}

double NNfunction_sb_dLsR::synapse0x2cbd070() {
   return (neuron0x2ca7d90()*0.111214);
}

double NNfunction_sb_dLsR::synapse0x2cbd0b0() {
   return (neuron0x2ca80d0()*-0.00215564);
}

double NNfunction_sb_dLsR::synapse0x2cbd0f0() {
   return (neuron0x2ca8410()*-0.546764);
}

double NNfunction_sb_dLsR::synapse0x2cbd130() {
   return (neuron0x2ca8750()*-0.427272);
}

double NNfunction_sb_dLsR::synapse0x2cbd170() {
   return (neuron0x2ca8a90()*-0.151764);
}

double NNfunction_sb_dLsR::synapse0x2cbd1b0() {
   return (neuron0x2ca8dd0()*-0.235262);
}

double NNfunction_sb_dLsR::synapse0x2cbd1f0() {
   return (neuron0x2ca9110()*0.922908);
}

double NNfunction_sb_dLsR::synapse0x2cbcc80() {
   return (neuron0x2ca9450()*0.231286);
}

double NNfunction_sb_dLsR::synapse0x2cbccc0() {
   return (neuron0x2ca99b0()*0.40339);
}

double NNfunction_sb_dLsR::synapse0x2cbd340() {
   return (neuron0x2ca9bd0()*-0.315341);
}

double NNfunction_sb_dLsR::synapse0x2cbd380() {
   return (neuron0x2ca9f10()*0.368752);
}

double NNfunction_sb_dLsR::synapse0x2cbd3c0() {
   return (neuron0x2caa250()*-0.281135);
}

double NNfunction_sb_dLsR::synapse0x2cbd400() {
   return (neuron0x2caa590()*-0.300988);
}

double NNfunction_sb_dLsR::synapse0x2cbd440() {
   return (neuron0x2caa8d0()*-0.381303);
}

double NNfunction_sb_dLsR::synapse0x2cbd480() {
   return (neuron0x2caac10()*0.235319);
}

double NNfunction_sb_dLsR::synapse0x2cbd800() {
   return (neuron0x2ca60e0()*-0.581088);
}

double NNfunction_sb_dLsR::synapse0x2cbd840() {
   return (neuron0x2ca6390()*-0.0758382);
}

double NNfunction_sb_dLsR::synapse0x2cbd880() {
   return (neuron0x2ca66d0()*0.452572);
}

double NNfunction_sb_dLsR::synapse0x2cbd8c0() {
   return (neuron0x2ca6a10()*0.724289);
}

double NNfunction_sb_dLsR::synapse0x2cbd900() {
   return (neuron0x2ca6d50()*-0.0905543);
}

double NNfunction_sb_dLsR::synapse0x2cbd940() {
   return (neuron0x2ca7090()*0.191598);
}

double NNfunction_sb_dLsR::synapse0x2cbd980() {
   return (neuron0x2ca73d0()*0.290436);
}

double NNfunction_sb_dLsR::synapse0x2cbd9c0() {
   return (neuron0x2ca7710()*0.0919459);
}

double NNfunction_sb_dLsR::synapse0x2cbda00() {
   return (neuron0x2ca7a50()*-0.153164);
}

double NNfunction_sb_dLsR::synapse0x2cbda40() {
   return (neuron0x2ca7d90()*-0.0519696);
}

double NNfunction_sb_dLsR::synapse0x2cbda80() {
   return (neuron0x2ca80d0()*-0.117855);
}

double NNfunction_sb_dLsR::synapse0x2cbdac0() {
   return (neuron0x2ca8410()*0.0634964);
}

double NNfunction_sb_dLsR::synapse0x2cbdb00() {
   return (neuron0x2ca8750()*0.403048);
}

double NNfunction_sb_dLsR::synapse0x2cbdb40() {
   return (neuron0x2ca8a90()*0.20653);
}

double NNfunction_sb_dLsR::synapse0x2cbdb80() {
   return (neuron0x2ca8dd0()*0.423599);
}

double NNfunction_sb_dLsR::synapse0x2cbdbc0() {
   return (neuron0x2ca9110()*0.211675);
}

double NNfunction_sb_dLsR::synapse0x2cbd650() {
   return (neuron0x2ca9450()*-0.324237);
}

double NNfunction_sb_dLsR::synapse0x2cbd690() {
   return (neuron0x2ca99b0()*0.393793);
}

double NNfunction_sb_dLsR::synapse0x2cbdd10() {
   return (neuron0x2ca9bd0()*-0.464755);
}

double NNfunction_sb_dLsR::synapse0x2cbdd50() {
   return (neuron0x2ca9f10()*-0.126089);
}

double NNfunction_sb_dLsR::synapse0x2cbdd90() {
   return (neuron0x2caa250()*-0.0933929);
}

double NNfunction_sb_dLsR::synapse0x2cbddd0() {
   return (neuron0x2caa590()*-0.19135);
}

double NNfunction_sb_dLsR::synapse0x2cbde10() {
   return (neuron0x2caa8d0()*0.122065);
}

double NNfunction_sb_dLsR::synapse0x2cbde50() {
   return (neuron0x2caac10()*-0.0841701);
}

double NNfunction_sb_dLsR::synapse0x2cbe1d0() {
   return (neuron0x2ca60e0()*-0.0255002);
}

double NNfunction_sb_dLsR::synapse0x2cbe210() {
   return (neuron0x2ca6390()*-0.0102786);
}

double NNfunction_sb_dLsR::synapse0x2cbe250() {
   return (neuron0x2ca66d0()*0.00527033);
}

double NNfunction_sb_dLsR::synapse0x2cbe290() {
   return (neuron0x2ca6a10()*11.3002);
}

double NNfunction_sb_dLsR::synapse0x2cbe2d0() {
   return (neuron0x2ca6d50()*0.00733136);
}

double NNfunction_sb_dLsR::synapse0x2cbe310() {
   return (neuron0x2ca7090()*0.00108317);
}

double NNfunction_sb_dLsR::synapse0x2cbe350() {
   return (neuron0x2ca73d0()*0.0181881);
}

double NNfunction_sb_dLsR::synapse0x2cbe390() {
   return (neuron0x2ca7710()*-0.0133752);
}

double NNfunction_sb_dLsR::synapse0x2cbe3d0() {
   return (neuron0x2ca7a50()*-0.0101467);
}

double NNfunction_sb_dLsR::synapse0x2cbe410() {
   return (neuron0x2ca7d90()*-0.0230231);
}

double NNfunction_sb_dLsR::synapse0x2cbe450() {
   return (neuron0x2ca80d0()*0.0174221);
}

double NNfunction_sb_dLsR::synapse0x2cbe490() {
   return (neuron0x2ca8410()*0.132055);
}

double NNfunction_sb_dLsR::synapse0x2cbe4d0() {
   return (neuron0x2ca8750()*-0.0274774);
}

double NNfunction_sb_dLsR::synapse0x2cbe510() {
   return (neuron0x2ca8a90()*0.0321297);
}

double NNfunction_sb_dLsR::synapse0x2cbe550() {
   return (neuron0x2ca8dd0()*-0.000280375);
}

double NNfunction_sb_dLsR::synapse0x2cbe590() {
   return (neuron0x2ca9110()*-0.0214232);
}

double NNfunction_sb_dLsR::synapse0x2cbe020() {
   return (neuron0x2ca9450()*0.00908707);
}

double NNfunction_sb_dLsR::synapse0x2cbe060() {
   return (neuron0x2ca99b0()*-0.0578682);
}

double NNfunction_sb_dLsR::synapse0x2cbe6e0() {
   return (neuron0x2ca9bd0()*0.625938);
}

double NNfunction_sb_dLsR::synapse0x2cbe720() {
   return (neuron0x2ca9f10()*-0.0514916);
}

double NNfunction_sb_dLsR::synapse0x2cbe760() {
   return (neuron0x2caa250()*0.0267494);
}

double NNfunction_sb_dLsR::synapse0x2cbe7a0() {
   return (neuron0x2caa590()*0.0297797);
}

double NNfunction_sb_dLsR::synapse0x2cbe7e0() {
   return (neuron0x2caa8d0()*0.00493778);
}

double NNfunction_sb_dLsR::synapse0x2cbe820() {
   return (neuron0x2caac10()*-0.0250215);
}

double NNfunction_sb_dLsR::synapse0x2cbeba0() {
   return (neuron0x2ca60e0()*0.0069563);
}

double NNfunction_sb_dLsR::synapse0x2cbebe0() {
   return (neuron0x2ca6390()*-0.143098);
}

double NNfunction_sb_dLsR::synapse0x2cbec20() {
   return (neuron0x2ca66d0()*-0.597964);
}

double NNfunction_sb_dLsR::synapse0x2cbec60() {
   return (neuron0x2ca6a10()*-0.313394);
}

double NNfunction_sb_dLsR::synapse0x2cbeca0() {
   return (neuron0x2ca6d50()*-0.194403);
}

double NNfunction_sb_dLsR::synapse0x2cbece0() {
   return (neuron0x2ca7090()*-0.201977);
}

double NNfunction_sb_dLsR::synapse0x2cbed20() {
   return (neuron0x2ca73d0()*0.331793);
}

double NNfunction_sb_dLsR::synapse0x2cbed60() {
   return (neuron0x2ca7710()*-0.036582);
}

double NNfunction_sb_dLsR::synapse0x2cbeda0() {
   return (neuron0x2ca7a50()*0.555691);
}

double NNfunction_sb_dLsR::synapse0x2cbede0() {
   return (neuron0x2ca7d90()*-0.548247);
}

double NNfunction_sb_dLsR::synapse0x2cbee20() {
   return (neuron0x2ca80d0()*-0.00308966);
}

double NNfunction_sb_dLsR::synapse0x2cbee60() {
   return (neuron0x2ca8410()*0.692511);
}

double NNfunction_sb_dLsR::synapse0x2cbeea0() {
   return (neuron0x2ca8750()*0.00777148);
}

double NNfunction_sb_dLsR::synapse0x2cbeee0() {
   return (neuron0x2ca8a90()*-0.523507);
}

double NNfunction_sb_dLsR::synapse0x2cbef20() {
   return (neuron0x2ca8dd0()*-0.218922);
}

double NNfunction_sb_dLsR::synapse0x2cbef60() {
   return (neuron0x2ca9110()*-0.0597549);
}

double NNfunction_sb_dLsR::synapse0x2cbe9f0() {
   return (neuron0x2ca9450()*0.144638);
}

double NNfunction_sb_dLsR::synapse0x2cbea30() {
   return (neuron0x2ca99b0()*-0.413443);
}

double NNfunction_sb_dLsR::synapse0x2cbf0b0() {
   return (neuron0x2ca9bd0()*0.194612);
}

double NNfunction_sb_dLsR::synapse0x2cbf0f0() {
   return (neuron0x2ca9f10()*-0.122363);
}

double NNfunction_sb_dLsR::synapse0x2cbf130() {
   return (neuron0x2caa250()*-0.384324);
}

double NNfunction_sb_dLsR::synapse0x2cbf170() {
   return (neuron0x2caa590()*-0.582096);
}

double NNfunction_sb_dLsR::synapse0x2cbf1b0() {
   return (neuron0x2caa8d0()*-0.146596);
}

double NNfunction_sb_dLsR::synapse0x2cbf1f0() {
   return (neuron0x2caac10()*0.0652974);
}

double NNfunction_sb_dLsR::synapse0x2cbf570() {
   return (neuron0x2ca60e0()*0.0707538);
}

double NNfunction_sb_dLsR::synapse0x2cbf5b0() {
   return (neuron0x2ca6390()*0.00800526);
}

double NNfunction_sb_dLsR::synapse0x2cbf5f0() {
   return (neuron0x2ca66d0()*-0.144216);
}

double NNfunction_sb_dLsR::synapse0x2cbf630() {
   return (neuron0x2ca6a10()*1.31441);
}

double NNfunction_sb_dLsR::synapse0x2cbf670() {
   return (neuron0x2ca6d50()*0.0538438);
}

double NNfunction_sb_dLsR::synapse0x2cbf6b0() {
   return (neuron0x2ca7090()*-0.00023597);
}

double NNfunction_sb_dLsR::synapse0x2cbf6f0() {
   return (neuron0x2ca73d0()*0.000402408);
}

double NNfunction_sb_dLsR::synapse0x2cbf730() {
   return (neuron0x2ca7710()*-0.0318749);
}

double NNfunction_sb_dLsR::synapse0x2cbf770() {
   return (neuron0x2ca7a50()*0.0258163);
}

double NNfunction_sb_dLsR::synapse0x2cbf7b0() {
   return (neuron0x2ca7d90()*0.003529);
}

double NNfunction_sb_dLsR::synapse0x2cbf7f0() {
   return (neuron0x2ca80d0()*0.0700357);
}

double NNfunction_sb_dLsR::synapse0x2cbf830() {
   return (neuron0x2ca8410()*0.389669);
}

double NNfunction_sb_dLsR::synapse0x2cbf870() {
   return (neuron0x2ca8750()*0.00429338);
}

double NNfunction_sb_dLsR::synapse0x2cbf8b0() {
   return (neuron0x2ca8a90()*-0.0282915);
}

double NNfunction_sb_dLsR::synapse0x2cbf8f0() {
   return (neuron0x2ca8dd0()*0.0535351);
}

double NNfunction_sb_dLsR::synapse0x2cbf930() {
   return (neuron0x2ca9110()*-0.0115372);
}

double NNfunction_sb_dLsR::synapse0x2cbf3c0() {
   return (neuron0x2ca9450()*0.0358562);
}

double NNfunction_sb_dLsR::synapse0x2cbf400() {
   return (neuron0x2ca99b0()*-0.00976821);
}

double NNfunction_sb_dLsR::synapse0x2cbfa80() {
   return (neuron0x2ca9bd0()*-1.94499);
}

double NNfunction_sb_dLsR::synapse0x2cbfac0() {
   return (neuron0x2ca9f10()*-0.0580637);
}

double NNfunction_sb_dLsR::synapse0x2cbfb00() {
   return (neuron0x2caa250()*0.0108054);
}

double NNfunction_sb_dLsR::synapse0x2cbfb40() {
   return (neuron0x2caa590()*-0.0730718);
}

double NNfunction_sb_dLsR::synapse0x2cbfb80() {
   return (neuron0x2caa8d0()*-0.0672125);
}

double NNfunction_sb_dLsR::synapse0x2cbfbc0() {
   return (neuron0x2caac10()*-0.0400815);
}

double NNfunction_sb_dLsR::synapse0x2cbff40() {
   return (neuron0x2ca60e0()*-0.138595);
}

double NNfunction_sb_dLsR::synapse0x2cbff80() {
   return (neuron0x2ca6390()*-0.134949);
}

double NNfunction_sb_dLsR::synapse0x2cbffc0() {
   return (neuron0x2ca66d0()*0.138438);
}

double NNfunction_sb_dLsR::synapse0x2cc0000() {
   return (neuron0x2ca6a10()*0.465413);
}

double NNfunction_sb_dLsR::synapse0x2cc0040() {
   return (neuron0x2ca6d50()*0.0206511);
}

double NNfunction_sb_dLsR::synapse0x2cc0080() {
   return (neuron0x2ca7090()*-0.286759);
}

double NNfunction_sb_dLsR::synapse0x2cc00c0() {
   return (neuron0x2ca73d0()*0.268024);
}

double NNfunction_sb_dLsR::synapse0x2cc0100() {
   return (neuron0x2ca7710()*0.250102);
}

double NNfunction_sb_dLsR::synapse0x2cc0140() {
   return (neuron0x2ca7a50()*0.0551242);
}

double NNfunction_sb_dLsR::synapse0x2cc0180() {
   return (neuron0x2ca7d90()*0.052144);
}

double NNfunction_sb_dLsR::synapse0x2cc01c0() {
   return (neuron0x2ca80d0()*-0.0369334);
}

double NNfunction_sb_dLsR::synapse0x2cc0200() {
   return (neuron0x2ca8410()*0.294717);
}

double NNfunction_sb_dLsR::synapse0x2cc0240() {
   return (neuron0x2ca8750()*-0.389908);
}

double NNfunction_sb_dLsR::synapse0x2cc0280() {
   return (neuron0x2ca8a90()*0.36519);
}

double NNfunction_sb_dLsR::synapse0x2cc02c0() {
   return (neuron0x2ca8dd0()*-0.848563);
}

double NNfunction_sb_dLsR::synapse0x2cc0300() {
   return (neuron0x2ca9110()*-0.312692);
}

double NNfunction_sb_dLsR::synapse0x2cbfd90() {
   return (neuron0x2ca9450()*0.0768318);
}

double NNfunction_sb_dLsR::synapse0x2cbfdd0() {
   return (neuron0x2ca99b0()*0.0850814);
}

double NNfunction_sb_dLsR::synapse0x2cc0450() {
   return (neuron0x2ca9bd0()*-0.432853);
}

double NNfunction_sb_dLsR::synapse0x2cc0490() {
   return (neuron0x2ca9f10()*0.0979826);
}

double NNfunction_sb_dLsR::synapse0x2cc04d0() {
   return (neuron0x2caa250()*0.0284856);
}

double NNfunction_sb_dLsR::synapse0x2cc0510() {
   return (neuron0x2caa590()*0.0941458);
}

double NNfunction_sb_dLsR::synapse0x2cc0550() {
   return (neuron0x2caa8d0()*0.193344);
}

double NNfunction_sb_dLsR::synapse0x2cc0590() {
   return (neuron0x2caac10()*-0.0334567);
}

double NNfunction_sb_dLsR::synapse0x2cc0910() {
   return (neuron0x2ca60e0()*0.030878);
}

double NNfunction_sb_dLsR::synapse0x2cb4ee0() {
   return (neuron0x2ca6390()*0.00406152);
}

double NNfunction_sb_dLsR::synapse0x2cb4f20() {
   return (neuron0x2ca66d0()*0.305258);
}

double NNfunction_sb_dLsR::synapse0x2cb4f60() {
   return (neuron0x2ca6a10()*-0.318394);
}

double NNfunction_sb_dLsR::synapse0x2cb51b0() {
   return (neuron0x2ca6d50()*0.060388);
}

double NNfunction_sb_dLsR::synapse0x2cb51f0() {
   return (neuron0x2ca7090()*-0.0521456);
}

double NNfunction_sb_dLsR::synapse0x2cb5230() {
   return (neuron0x2ca73d0()*0.398888);
}

double NNfunction_sb_dLsR::synapse0x2cb5480() {
   return (neuron0x2ca7710()*-0.571928);
}

double NNfunction_sb_dLsR::synapse0x2cb54c0() {
   return (neuron0x2ca7a50()*-0.396705);
}

double NNfunction_sb_dLsR::synapse0x2cb5710() {
   return (neuron0x2ca7d90()*-0.134553);
}

double NNfunction_sb_dLsR::synapse0x2cb5750() {
   return (neuron0x2ca80d0()*0.246784);
}

double NNfunction_sb_dLsR::synapse0x2cb5790() {
   return (neuron0x2ca8410()*0.887032);
}

double NNfunction_sb_dLsR::synapse0x2cb59e0() {
   return (neuron0x2ca8750()*0.138545);
}

double NNfunction_sb_dLsR::synapse0x2cb5a20() {
   return (neuron0x2ca8a90()*-0.332121);
}

double NNfunction_sb_dLsR::synapse0x2cb5c70() {
   return (neuron0x2ca8dd0()*-0.180811);
}

double NNfunction_sb_dLsR::synapse0x2cb5cb0() {
   return (neuron0x2ca9110()*-0.175525);
}

double NNfunction_sb_dLsR::synapse0x2cc0760() {
   return (neuron0x2ca9450()*-0.0522465);
}

double NNfunction_sb_dLsR::synapse0x2cc07a0() {
   return (neuron0x2ca99b0()*0.632116);
}

double NNfunction_sb_dLsR::synapse0x2cb5e00() {
   return (neuron0x2ca9bd0()*-0.106279);
}

double NNfunction_sb_dLsR::synapse0x2cb6310() {
   return (neuron0x2ca9f10()*0.335915);
}

double NNfunction_sb_dLsR::synapse0x2cb6350() {
   return (neuron0x2caa250()*0.00529627);
}

double NNfunction_sb_dLsR::synapse0x2cb6390() {
   return (neuron0x2caa590()*0.224346);
}

double NNfunction_sb_dLsR::synapse0x2cb65e0() {
   return (neuron0x2caa8d0()*0.27626);
}

double NNfunction_sb_dLsR::synapse0x2cb6620() {
   return (neuron0x2caac10()*0.159455);
}

double NNfunction_sb_dLsR::synapse0x2cb5ed0() {
   return (neuron0x2ca60e0()*-0.0827158);
}

double NNfunction_sb_dLsR::synapse0x2cb5f10() {
   return (neuron0x2ca6390()*-0.0438164);
}

double NNfunction_sb_dLsR::synapse0x2cb5f50() {
   return (neuron0x2ca66d0()*-0.191378);
}

double NNfunction_sb_dLsR::synapse0x2cb5f90() {
   return (neuron0x2ca6a10()*0.39932);
}

double NNfunction_sb_dLsR::synapse0x2cb6910() {
   return (neuron0x2ca6d50()*-0.043796);
}

double NNfunction_sb_dLsR::synapse0x2cc2c60() {
   return (neuron0x2ca7090()*0.264416);
}

double NNfunction_sb_dLsR::synapse0x2cc2ca0() {
   return (neuron0x2ca73d0()*-0.133821);
}

double NNfunction_sb_dLsR::synapse0x2cc2ce0() {
   return (neuron0x2ca7710()*-0.216189);
}

double NNfunction_sb_dLsR::synapse0x2cc2d20() {
   return (neuron0x2ca7a50()*0.875057);
}

double NNfunction_sb_dLsR::synapse0x2cc2d60() {
   return (neuron0x2ca7d90()*-0.484807);
}

double NNfunction_sb_dLsR::synapse0x2cc2da0() {
   return (neuron0x2ca80d0()*-0.360614);
}

double NNfunction_sb_dLsR::synapse0x2cc2de0() {
   return (neuron0x2ca8410()*-0.451701);
}

double NNfunction_sb_dLsR::synapse0x2cc2e20() {
   return (neuron0x2ca8750()*0.129776);
}

double NNfunction_sb_dLsR::synapse0x2cc2e60() {
   return (neuron0x2ca8a90()*0.323172);
}

double NNfunction_sb_dLsR::synapse0x2cc2ea0() {
   return (neuron0x2ca8dd0()*0.00498378);
}

double NNfunction_sb_dLsR::synapse0x2cc2ee0() {
   return (neuron0x2ca9110()*-0.356188);
}

double NNfunction_sb_dLsR::synapse0x2cb67f0() {
   return (neuron0x2ca9450()*-0.156431);
}

double NNfunction_sb_dLsR::synapse0x2cb6830() {
   return (neuron0x2ca99b0()*0.36976);
}

double NNfunction_sb_dLsR::synapse0x2cc3030() {
   return (neuron0x2ca9bd0()*-0.0367379);
}

double NNfunction_sb_dLsR::synapse0x2cc3070() {
   return (neuron0x2ca9f10()*-0.412383);
}

double NNfunction_sb_dLsR::synapse0x2cc30b0() {
   return (neuron0x2caa250()*0.0119318);
}

double NNfunction_sb_dLsR::synapse0x2cc30f0() {
   return (neuron0x2caa590()*-0.125481);
}

double NNfunction_sb_dLsR::synapse0x2cc3130() {
   return (neuron0x2caa8d0()*-0.275191);
}

double NNfunction_sb_dLsR::synapse0x2cc3170() {
   return (neuron0x2caac10()*-0.469451);
}

double NNfunction_sb_dLsR::synapse0x2cc34f0() {
   return (neuron0x2ca60e0()*0.136961);
}

double NNfunction_sb_dLsR::synapse0x2cc3530() {
   return (neuron0x2ca6390()*0.00643266);
}

double NNfunction_sb_dLsR::synapse0x2cc3570() {
   return (neuron0x2ca66d0()*-0.213125);
}

double NNfunction_sb_dLsR::synapse0x2cc35b0() {
   return (neuron0x2ca6a10()*0.424236);
}

double NNfunction_sb_dLsR::synapse0x2cc35f0() {
   return (neuron0x2ca6d50()*-0.00489507);
}

double NNfunction_sb_dLsR::synapse0x2cc3630() {
   return (neuron0x2ca7090()*0.0118585);
}

double NNfunction_sb_dLsR::synapse0x2cc3670() {
   return (neuron0x2ca73d0()*-0.0480734);
}

double NNfunction_sb_dLsR::synapse0x2cc36b0() {
   return (neuron0x2ca7710()*0.0949174);
}

double NNfunction_sb_dLsR::synapse0x2cc36f0() {
   return (neuron0x2ca7a50()*0.0394774);
}

double NNfunction_sb_dLsR::synapse0x2cc3730() {
   return (neuron0x2ca7d90()*0.0255416);
}

double NNfunction_sb_dLsR::synapse0x2cc3770() {
   return (neuron0x2ca80d0()*0.0442957);
}

double NNfunction_sb_dLsR::synapse0x2cc37b0() {
   return (neuron0x2ca8410()*0.145266);
}

double NNfunction_sb_dLsR::synapse0x2cc37f0() {
   return (neuron0x2ca8750()*-0.0414679);
}

double NNfunction_sb_dLsR::synapse0x2cc3830() {
   return (neuron0x2ca8a90()*0.0263186);
}

double NNfunction_sb_dLsR::synapse0x2cc3870() {
   return (neuron0x2ca8dd0()*0.0167869);
}

double NNfunction_sb_dLsR::synapse0x2cc38b0() {
   return (neuron0x2ca9110()*-0.110604);
}

double NNfunction_sb_dLsR::synapse0x2cc3340() {
   return (neuron0x2ca9450()*0.0479851);
}

double NNfunction_sb_dLsR::synapse0x2cc3380() {
   return (neuron0x2ca99b0()*-0.0447601);
}

double NNfunction_sb_dLsR::synapse0x2cc3a00() {
   return (neuron0x2ca9bd0()*0.582518);
}

double NNfunction_sb_dLsR::synapse0x2cc3a40() {
   return (neuron0x2ca9f10()*0.0206987);
}

double NNfunction_sb_dLsR::synapse0x2cc3a80() {
   return (neuron0x2caa250()*-0.0130582);
}

double NNfunction_sb_dLsR::synapse0x2cc3ac0() {
   return (neuron0x2caa590()*0.0507879);
}

double NNfunction_sb_dLsR::synapse0x2cc3b00() {
   return (neuron0x2caa8d0()*-0.0273742);
}

double NNfunction_sb_dLsR::synapse0x2cc3b40() {
   return (neuron0x2caac10()*0.056342);
}

double NNfunction_sb_dLsR::synapse0x2cc3ec0() {
   return (neuron0x2ca60e0()*0.177864);
}

double NNfunction_sb_dLsR::synapse0x2cc3f00() {
   return (neuron0x2ca6390()*0.0426749);
}

double NNfunction_sb_dLsR::synapse0x2cc3f40() {
   return (neuron0x2ca66d0()*-0.154901);
}

double NNfunction_sb_dLsR::synapse0x2cc3f80() {
   return (neuron0x2ca6a10()*-0.194224);
}

double NNfunction_sb_dLsR::synapse0x2cc3fc0() {
   return (neuron0x2ca6d50()*0.149584);
}

double NNfunction_sb_dLsR::synapse0x2cc4000() {
   return (neuron0x2ca7090()*-0.0989488);
}

double NNfunction_sb_dLsR::synapse0x2cc4040() {
   return (neuron0x2ca73d0()*0.0424809);
}

double NNfunction_sb_dLsR::synapse0x2cc4080() {
   return (neuron0x2ca7710()*-0.0604015);
}

double NNfunction_sb_dLsR::synapse0x2cc40c0() {
   return (neuron0x2ca7a50()*0.586104);
}

double NNfunction_sb_dLsR::synapse0x2cc4100() {
   return (neuron0x2ca7d90()*-0.18382);
}

double NNfunction_sb_dLsR::synapse0x2cc4140() {
   return (neuron0x2ca80d0()*-0.826317);
}

double NNfunction_sb_dLsR::synapse0x2cc4180() {
   return (neuron0x2ca8410()*0.333978);
}

double NNfunction_sb_dLsR::synapse0x2cc41c0() {
   return (neuron0x2ca8750()*-0.726567);
}

double NNfunction_sb_dLsR::synapse0x2cc4200() {
   return (neuron0x2ca8a90()*-0.255697);
}

double NNfunction_sb_dLsR::synapse0x2cc4240() {
   return (neuron0x2ca8dd0()*0.0320543);
}

double NNfunction_sb_dLsR::synapse0x2cc4280() {
   return (neuron0x2ca9110()*0.354266);
}

double NNfunction_sb_dLsR::synapse0x2cc3d10() {
   return (neuron0x2ca9450()*0.75463);
}

double NNfunction_sb_dLsR::synapse0x2cc3d50() {
   return (neuron0x2ca99b0()*-0.196666);
}

double NNfunction_sb_dLsR::synapse0x2cc43d0() {
   return (neuron0x2ca9bd0()*-0.239082);
}

double NNfunction_sb_dLsR::synapse0x2cc4410() {
   return (neuron0x2ca9f10()*-0.176077);
}

double NNfunction_sb_dLsR::synapse0x2cc4450() {
   return (neuron0x2caa250()*-0.0707487);
}

double NNfunction_sb_dLsR::synapse0x2cc4490() {
   return (neuron0x2caa590()*0.105637);
}

double NNfunction_sb_dLsR::synapse0x2cc44d0() {
   return (neuron0x2caa8d0()*-0.0787594);
}

double NNfunction_sb_dLsR::synapse0x2cc4510() {
   return (neuron0x2caac10()*0.00597537);
}

double NNfunction_sb_dLsR::synapse0x2cc4890() {
   return (neuron0x2ca60e0()*0.0936388);
}

double NNfunction_sb_dLsR::synapse0x2cc48d0() {
   return (neuron0x2ca6390()*0.0200684);
}

double NNfunction_sb_dLsR::synapse0x2cc4910() {
   return (neuron0x2ca66d0()*0.0116588);
}

double NNfunction_sb_dLsR::synapse0x2cc4950() {
   return (neuron0x2ca6a10()*0.00736044);
}

double NNfunction_sb_dLsR::synapse0x2cc4990() {
   return (neuron0x2ca6d50()*0.00045598);
}

double NNfunction_sb_dLsR::synapse0x2cc49d0() {
   return (neuron0x2ca7090()*-0.0256552);
}

double NNfunction_sb_dLsR::synapse0x2cc4a10() {
   return (neuron0x2ca73d0()*0.0327743);
}

double NNfunction_sb_dLsR::synapse0x2cc4a50() {
   return (neuron0x2ca7710()*0.00142339);
}

double NNfunction_sb_dLsR::synapse0x2cc4a90() {
   return (neuron0x2ca7a50()*-0.0144023);
}

double NNfunction_sb_dLsR::synapse0x2cc4ad0() {
   return (neuron0x2ca7d90()*-0.030607);
}

double NNfunction_sb_dLsR::synapse0x2cc4b10() {
   return (neuron0x2ca80d0()*0.133078);
}

double NNfunction_sb_dLsR::synapse0x2cc4b50() {
   return (neuron0x2ca8410()*-0.0771001);
}

double NNfunction_sb_dLsR::synapse0x2cc4b90() {
   return (neuron0x2ca8750()*0.0497076);
}

double NNfunction_sb_dLsR::synapse0x2cc4bd0() {
   return (neuron0x2ca8a90()*0.0517405);
}

double NNfunction_sb_dLsR::synapse0x2cc4c10() {
   return (neuron0x2ca8dd0()*0.032993);
}

double NNfunction_sb_dLsR::synapse0x2cc4c50() {
   return (neuron0x2ca9110()*0.049062);
}

double NNfunction_sb_dLsR::synapse0x2cc46e0() {
   return (neuron0x2ca9450()*0.00625231);
}

double NNfunction_sb_dLsR::synapse0x2cc4720() {
   return (neuron0x2ca99b0()*-0.00577642);
}

double NNfunction_sb_dLsR::synapse0x2cc4da0() {
   return (neuron0x2ca9bd0()*0.515827);
}

double NNfunction_sb_dLsR::synapse0x2cc4de0() {
   return (neuron0x2ca9f10()*-0.0151103);
}

double NNfunction_sb_dLsR::synapse0x2cc4e20() {
   return (neuron0x2caa250()*-0.0341161);
}

double NNfunction_sb_dLsR::synapse0x2cc4e60() {
   return (neuron0x2caa590()*0.0101547);
}

double NNfunction_sb_dLsR::synapse0x2cc4ea0() {
   return (neuron0x2caa8d0()*0.0110741);
}

double NNfunction_sb_dLsR::synapse0x2cc4ee0() {
   return (neuron0x2caac10()*0.0205806);
}

double NNfunction_sb_dLsR::synapse0x2cc5260() {
   return (neuron0x2ca60e0()*-0.0353513);
}

double NNfunction_sb_dLsR::synapse0x2cc52a0() {
   return (neuron0x2ca6390()*-0.132425);
}

double NNfunction_sb_dLsR::synapse0x2cc52e0() {
   return (neuron0x2ca66d0()*-0.0139741);
}

double NNfunction_sb_dLsR::synapse0x2cc5320() {
   return (neuron0x2ca6a10()*-0.366438);
}

double NNfunction_sb_dLsR::synapse0x2cc5360() {
   return (neuron0x2ca6d50()*0.109439);
}

double NNfunction_sb_dLsR::synapse0x2cc53a0() {
   return (neuron0x2ca7090()*0.229771);
}

double NNfunction_sb_dLsR::synapse0x2cc53e0() {
   return (neuron0x2ca73d0()*-0.174076);
}

double NNfunction_sb_dLsR::synapse0x2cc5420() {
   return (neuron0x2ca7710()*-0.00285946);
}

double NNfunction_sb_dLsR::synapse0x2cc5460() {
   return (neuron0x2ca7a50()*0.0602328);
}

double NNfunction_sb_dLsR::synapse0x2cc54a0() {
   return (neuron0x2ca7d90()*0.140432);
}

double NNfunction_sb_dLsR::synapse0x2cc54e0() {
   return (neuron0x2ca80d0()*0.229839);
}

double NNfunction_sb_dLsR::synapse0x2cc5520() {
   return (neuron0x2ca8410()*0.51829);
}

double NNfunction_sb_dLsR::synapse0x2cc5560() {
   return (neuron0x2ca8750()*0.166117);
}

double NNfunction_sb_dLsR::synapse0x2cc55a0() {
   return (neuron0x2ca8a90()*-0.0642687);
}

double NNfunction_sb_dLsR::synapse0x2cc55e0() {
   return (neuron0x2ca8dd0()*0.694151);
}

double NNfunction_sb_dLsR::synapse0x2cc5620() {
   return (neuron0x2ca9110()*-0.123493);
}

double NNfunction_sb_dLsR::synapse0x2cc50b0() {
   return (neuron0x2ca9450()*-0.215948);
}

double NNfunction_sb_dLsR::synapse0x2cc50f0() {
   return (neuron0x2ca99b0()*0.456542);
}

double NNfunction_sb_dLsR::synapse0x2cc5770() {
   return (neuron0x2ca9bd0()*-0.400469);
}

double NNfunction_sb_dLsR::synapse0x2cc57b0() {
   return (neuron0x2ca9f10()*-0.0203879);
}

double NNfunction_sb_dLsR::synapse0x2cc57f0() {
   return (neuron0x2caa250()*0.0207553);
}

double NNfunction_sb_dLsR::synapse0x2cc5830() {
   return (neuron0x2caa590()*0.310606);
}

double NNfunction_sb_dLsR::synapse0x2cc5870() {
   return (neuron0x2caa8d0()*-0.217383);
}

double NNfunction_sb_dLsR::synapse0x2cc58b0() {
   return (neuron0x2caac10()*-0.154802);
}

double NNfunction_sb_dLsR::synapse0x2cc5c30() {
   return (neuron0x2ca60e0()*-0.562615);
}

double NNfunction_sb_dLsR::synapse0x2cc5c70() {
   return (neuron0x2ca6390()*-0.245155);
}

double NNfunction_sb_dLsR::synapse0x2cc5cb0() {
   return (neuron0x2ca66d0()*0.306923);
}

double NNfunction_sb_dLsR::synapse0x2cc5cf0() {
   return (neuron0x2ca6a10()*0.235228);
}

double NNfunction_sb_dLsR::synapse0x2cc5d30() {
   return (neuron0x2ca6d50()*0.132842);
}

double NNfunction_sb_dLsR::synapse0x2cc5d70() {
   return (neuron0x2ca7090()*0.441114);
}

double NNfunction_sb_dLsR::synapse0x2cc5db0() {
   return (neuron0x2ca73d0()*-0.194009);
}

double NNfunction_sb_dLsR::synapse0x2cc5df0() {
   return (neuron0x2ca7710()*-0.0501686);
}

double NNfunction_sb_dLsR::synapse0x2cc5e30() {
   return (neuron0x2ca7a50()*-0.0807426);
}

double NNfunction_sb_dLsR::synapse0x2cc5e70() {
   return (neuron0x2ca7d90()*-0.217393);
}

double NNfunction_sb_dLsR::synapse0x2cc5eb0() {
   return (neuron0x2ca80d0()*-0.317689);
}

double NNfunction_sb_dLsR::synapse0x2cc5ef0() {
   return (neuron0x2ca8410()*-0.0699249);
}

double NNfunction_sb_dLsR::synapse0x2cc5f30() {
   return (neuron0x2ca8750()*0.812102);
}

double NNfunction_sb_dLsR::synapse0x2cc5f70() {
   return (neuron0x2ca8a90()*-0.132899);
}

double NNfunction_sb_dLsR::synapse0x2cc5fb0() {
   return (neuron0x2ca8dd0()*0.854198);
}

double NNfunction_sb_dLsR::synapse0x2cc5ff0() {
   return (neuron0x2ca9110()*-0.162692);
}

double NNfunction_sb_dLsR::synapse0x2cc5a80() {
   return (neuron0x2ca9450()*-0.259535);
}

double NNfunction_sb_dLsR::synapse0x2cc5ac0() {
   return (neuron0x2ca99b0()*0.629272);
}

double NNfunction_sb_dLsR::synapse0x2cc6140() {
   return (neuron0x2ca9bd0()*-0.294792);
}

double NNfunction_sb_dLsR::synapse0x2cc6180() {
   return (neuron0x2ca9f10()*0.0241218);
}

double NNfunction_sb_dLsR::synapse0x2cc61c0() {
   return (neuron0x2caa250()*-0.300875);
}

double NNfunction_sb_dLsR::synapse0x2cc6200() {
   return (neuron0x2caa590()*-0.14137);
}

double NNfunction_sb_dLsR::synapse0x2cc6240() {
   return (neuron0x2caa8d0()*0.130185);
}

double NNfunction_sb_dLsR::synapse0x2cc6280() {
   return (neuron0x2caac10()*-0.0111019);
}

double NNfunction_sb_dLsR::synapse0x2cc6600() {
   return (neuron0x2ca60e0()*-0.524894);
}

double NNfunction_sb_dLsR::synapse0x2cc6640() {
   return (neuron0x2ca6390()*0.655266);
}

double NNfunction_sb_dLsR::synapse0x2cc6680() {
   return (neuron0x2ca66d0()*-0.820293);
}

double NNfunction_sb_dLsR::synapse0x2cc66c0() {
   return (neuron0x2ca6a10()*0.608527);
}

double NNfunction_sb_dLsR::synapse0x2cc6700() {
   return (neuron0x2ca6d50()*-0.0482249);
}

double NNfunction_sb_dLsR::synapse0x2cc6740() {
   return (neuron0x2ca7090()*0.55447);
}

double NNfunction_sb_dLsR::synapse0x2cc6780() {
   return (neuron0x2ca73d0()*-0.634159);
}

double NNfunction_sb_dLsR::synapse0x2cc67c0() {
   return (neuron0x2ca7710()*0.172707);
}

double NNfunction_sb_dLsR::synapse0x2cc6800() {
   return (neuron0x2ca7a50()*-0.0202);
}

double NNfunction_sb_dLsR::synapse0x2cc6840() {
   return (neuron0x2ca7d90()*-0.154565);
}

double NNfunction_sb_dLsR::synapse0x2cc6880() {
   return (neuron0x2ca80d0()*-0.43805);
}

double NNfunction_sb_dLsR::synapse0x2cc68c0() {
   return (neuron0x2ca8410()*0.0520501);
}

double NNfunction_sb_dLsR::synapse0x2cc6900() {
   return (neuron0x2ca8750()*-0.254488);
}

double NNfunction_sb_dLsR::synapse0x2cc6940() {
   return (neuron0x2ca8a90()*-0.278142);
}

double NNfunction_sb_dLsR::synapse0x2cc6980() {
   return (neuron0x2ca8dd0()*0.747386);
}

double NNfunction_sb_dLsR::synapse0x2cc69c0() {
   return (neuron0x2ca9110()*-0.25127);
}

double NNfunction_sb_dLsR::synapse0x2cc6450() {
   return (neuron0x2ca9450()*-0.0811641);
}

double NNfunction_sb_dLsR::synapse0x2cc6490() {
   return (neuron0x2ca99b0()*0.0990765);
}

double NNfunction_sb_dLsR::synapse0x2cc6b10() {
   return (neuron0x2ca9bd0()*0.337399);
}

double NNfunction_sb_dLsR::synapse0x2cc6b50() {
   return (neuron0x2ca9f10()*0.102995);
}

double NNfunction_sb_dLsR::synapse0x2cc6b90() {
   return (neuron0x2caa250()*-0.120733);
}

double NNfunction_sb_dLsR::synapse0x2cc6bd0() {
   return (neuron0x2caa590()*-0.0524772);
}

double NNfunction_sb_dLsR::synapse0x2cc6c10() {
   return (neuron0x2caa8d0()*-0.457255);
}

double NNfunction_sb_dLsR::synapse0x2cc6c50() {
   return (neuron0x2caac10()*0.465059);
}

double NNfunction_sb_dLsR::synapse0x2cc6fd0() {
   return (neuron0x2ca60e0()*0.0231263);
}

double NNfunction_sb_dLsR::synapse0x2cc7010() {
   return (neuron0x2ca6390()*-0.197729);
}

double NNfunction_sb_dLsR::synapse0x2cc7050() {
   return (neuron0x2ca66d0()*0.632927);
}

double NNfunction_sb_dLsR::synapse0x2cc7090() {
   return (neuron0x2ca6a10()*0.0459655);
}

double NNfunction_sb_dLsR::synapse0x2cc70d0() {
   return (neuron0x2ca6d50()*0.527225);
}

double NNfunction_sb_dLsR::synapse0x2cc7110() {
   return (neuron0x2ca7090()*0.150472);
}

double NNfunction_sb_dLsR::synapse0x2cc7150() {
   return (neuron0x2ca73d0()*0.537642);
}

double NNfunction_sb_dLsR::synapse0x2cc7190() {
   return (neuron0x2ca7710()*0.354792);
}

double NNfunction_sb_dLsR::synapse0x2cc71d0() {
   return (neuron0x2ca7a50()*-0.318518);
}

double NNfunction_sb_dLsR::synapse0x2cc7210() {
   return (neuron0x2ca7d90()*0.126814);
}

double NNfunction_sb_dLsR::synapse0x2cc7250() {
   return (neuron0x2ca80d0()*-0.0445327);
}

double NNfunction_sb_dLsR::synapse0x2cc7290() {
   return (neuron0x2ca8410()*0.44503);
}

double NNfunction_sb_dLsR::synapse0x2cc72d0() {
   return (neuron0x2ca8750()*-0.0894027);
}

double NNfunction_sb_dLsR::synapse0x2cc7310() {
   return (neuron0x2ca8a90()*0.825692);
}

double NNfunction_sb_dLsR::synapse0x2cc7350() {
   return (neuron0x2ca8dd0()*-0.0980873);
}

double NNfunction_sb_dLsR::synapse0x2cc7390() {
   return (neuron0x2ca9110()*0.239841);
}

double NNfunction_sb_dLsR::synapse0x2cc6e20() {
   return (neuron0x2ca9450()*-0.0149573);
}

double NNfunction_sb_dLsR::synapse0x2cc6e60() {
   return (neuron0x2ca99b0()*0.314247);
}

double NNfunction_sb_dLsR::synapse0x2cc74e0() {
   return (neuron0x2ca9bd0()*0.26594);
}

double NNfunction_sb_dLsR::synapse0x2cc7520() {
   return (neuron0x2ca9f10()*-0.437166);
}

double NNfunction_sb_dLsR::synapse0x2cc7560() {
   return (neuron0x2caa250()*-0.265064);
}

double NNfunction_sb_dLsR::synapse0x2cc75a0() {
   return (neuron0x2caa590()*-0.0384854);
}

double NNfunction_sb_dLsR::synapse0x2cc75e0() {
   return (neuron0x2caa8d0()*0.100336);
}

double NNfunction_sb_dLsR::synapse0x2cc7620() {
   return (neuron0x2caac10()*-0.0513165);
}

double NNfunction_sb_dLsR::synapse0x2cb00d0() {
   return (neuron0x2ca60e0()*-0.0453698);
}

double NNfunction_sb_dLsR::synapse0x2cb0110() {
   return (neuron0x2ca6390()*0.0262405);
}

double NNfunction_sb_dLsR::synapse0x2cb0150() {
   return (neuron0x2ca66d0()*-0.0755821);
}

double NNfunction_sb_dLsR::synapse0x2cb0190() {
   return (neuron0x2ca6a10()*-0.186689);
}

double NNfunction_sb_dLsR::synapse0x2cb01d0() {
   return (neuron0x2ca6d50()*0.127712);
}

double NNfunction_sb_dLsR::synapse0x2cb0210() {
   return (neuron0x2ca7090()*0.51087);
}

double NNfunction_sb_dLsR::synapse0x2cb0250() {
   return (neuron0x2ca73d0()*-0.642187);
}

double NNfunction_sb_dLsR::synapse0x2cb0290() {
   return (neuron0x2ca7710()*-0.0864695);
}

double NNfunction_sb_dLsR::synapse0x2cc7db0() {
   return (neuron0x2ca7a50()*0.0744082);
}

double NNfunction_sb_dLsR::synapse0x2cc7df0() {
   return (neuron0x2ca7d90()*-0.210627);
}

double NNfunction_sb_dLsR::synapse0x2cc7e30() {
   return (neuron0x2ca80d0()*0.398681);
}

double NNfunction_sb_dLsR::synapse0x2cc7e70() {
   return (neuron0x2ca8410()*0.277547);
}

double NNfunction_sb_dLsR::synapse0x2cc7eb0() {
   return (neuron0x2ca8750()*0.247476);
}

double NNfunction_sb_dLsR::synapse0x2cc7ef0() {
   return (neuron0x2ca8a90()*0.900116);
}

double NNfunction_sb_dLsR::synapse0x2cc7f30() {
   return (neuron0x2ca8dd0()*-0.657464);
}

double NNfunction_sb_dLsR::synapse0x2cc7f70() {
   return (neuron0x2ca9110()*-0.0838197);
}

double NNfunction_sb_dLsR::synapse0x2cc77f0() {
   return (neuron0x2ca9450()*0.148479);
}

double NNfunction_sb_dLsR::synapse0x2cc7830() {
   return (neuron0x2ca99b0()*0.145047);
}

double NNfunction_sb_dLsR::synapse0x2cc80c0() {
   return (neuron0x2ca9bd0()*-0.103662);
}

double NNfunction_sb_dLsR::synapse0x2cc8100() {
   return (neuron0x2ca9f10()*0.422351);
}

double NNfunction_sb_dLsR::synapse0x2cc8140() {
   return (neuron0x2caa250()*-0.0900657);
}

double NNfunction_sb_dLsR::synapse0x2cc8180() {
   return (neuron0x2caa590()*0.25514);
}

double NNfunction_sb_dLsR::synapse0x2cc81c0() {
   return (neuron0x2caa8d0()*0.0686992);
}

double NNfunction_sb_dLsR::synapse0x2cc8200() {
   return (neuron0x2caac10()*0.0427092);
}

double NNfunction_sb_dLsR::synapse0x2cc8580() {
   return (neuron0x2ca60e0()*0.0487614);
}

double NNfunction_sb_dLsR::synapse0x2cc85c0() {
   return (neuron0x2ca6390()*0.133464);
}

double NNfunction_sb_dLsR::synapse0x2cc8600() {
   return (neuron0x2ca66d0()*0.119368);
}

double NNfunction_sb_dLsR::synapse0x2cc8640() {
   return (neuron0x2ca6a10()*0.277793);
}

double NNfunction_sb_dLsR::synapse0x2cc8680() {
   return (neuron0x2ca6d50()*-0.0982215);
}

double NNfunction_sb_dLsR::synapse0x2cc86c0() {
   return (neuron0x2ca7090()*0.345341);
}

double NNfunction_sb_dLsR::synapse0x2cc8700() {
   return (neuron0x2ca73d0()*-0.639447);
}

double NNfunction_sb_dLsR::synapse0x2cc8740() {
   return (neuron0x2ca7710()*0.0331313);
}

double NNfunction_sb_dLsR::synapse0x2cc8780() {
   return (neuron0x2ca7a50()*0.71242);
}

double NNfunction_sb_dLsR::synapse0x2cc87c0() {
   return (neuron0x2ca7d90()*0.0632251);
}

double NNfunction_sb_dLsR::synapse0x2cc8800() {
   return (neuron0x2ca80d0()*-0.305953);
}

double NNfunction_sb_dLsR::synapse0x2cc8840() {
   return (neuron0x2ca8410()*-0.67208);
}

double NNfunction_sb_dLsR::synapse0x2cc8880() {
   return (neuron0x2ca8750()*-0.234371);
}

double NNfunction_sb_dLsR::synapse0x2cc88c0() {
   return (neuron0x2ca8a90()*0.359751);
}

double NNfunction_sb_dLsR::synapse0x2cc8900() {
   return (neuron0x2ca8dd0()*0.32523);
}

double NNfunction_sb_dLsR::synapse0x2cc8940() {
   return (neuron0x2ca9110()*0.550233);
}

double NNfunction_sb_dLsR::synapse0x2cc83d0() {
   return (neuron0x2ca9450()*0.22895);
}

double NNfunction_sb_dLsR::synapse0x2cc8410() {
   return (neuron0x2ca99b0()*0.0138936);
}

double NNfunction_sb_dLsR::synapse0x2cc8a90() {
   return (neuron0x2ca9bd0()*0.136739);
}

double NNfunction_sb_dLsR::synapse0x2cc8ad0() {
   return (neuron0x2ca9f10()*-0.622274);
}

double NNfunction_sb_dLsR::synapse0x2cc8b10() {
   return (neuron0x2caa250()*0.0940091);
}

double NNfunction_sb_dLsR::synapse0x2cc8b50() {
   return (neuron0x2caa590()*-0.229619);
}

double NNfunction_sb_dLsR::synapse0x2cc8b90() {
   return (neuron0x2caa8d0()*-0.338943);
}

double NNfunction_sb_dLsR::synapse0x2cc8bd0() {
   return (neuron0x2caac10()*-0.298547);
}

double NNfunction_sb_dLsR::synapse0x2cc8f50() {
   return (neuron0x2ca60e0()*-0.044171);
}

double NNfunction_sb_dLsR::synapse0x2cc8f90() {
   return (neuron0x2ca6390()*0.10781);
}

double NNfunction_sb_dLsR::synapse0x2cc8fd0() {
   return (neuron0x2ca66d0()*-0.13616);
}

double NNfunction_sb_dLsR::synapse0x2cc9010() {
   return (neuron0x2ca6a10()*-0.427117);
}

double NNfunction_sb_dLsR::synapse0x2cc9050() {
   return (neuron0x2ca6d50()*1.04305);
}

double NNfunction_sb_dLsR::synapse0x2cc9090() {
   return (neuron0x2ca7090()*-0.391471);
}

double NNfunction_sb_dLsR::synapse0x2cc90d0() {
   return (neuron0x2ca73d0()*-0.457452);
}

double NNfunction_sb_dLsR::synapse0x2cc9110() {
   return (neuron0x2ca7710()*0.275515);
}

double NNfunction_sb_dLsR::synapse0x2cc9150() {
   return (neuron0x2ca7a50()*-0.317506);
}

double NNfunction_sb_dLsR::synapse0x2cc9190() {
   return (neuron0x2ca7d90()*-0.0433283);
}

double NNfunction_sb_dLsR::synapse0x2cc91d0() {
   return (neuron0x2ca80d0()*0.13938);
}

double NNfunction_sb_dLsR::synapse0x2cc9210() {
   return (neuron0x2ca8410()*0.536161);
}

double NNfunction_sb_dLsR::synapse0x2cc9250() {
   return (neuron0x2ca8750()*0.0947855);
}

double NNfunction_sb_dLsR::synapse0x2cc9290() {
   return (neuron0x2ca8a90()*-0.237619);
}

double NNfunction_sb_dLsR::synapse0x2cc92d0() {
   return (neuron0x2ca8dd0()*-0.119529);
}

double NNfunction_sb_dLsR::synapse0x2cc9310() {
   return (neuron0x2ca9110()*0.133671);
}

double NNfunction_sb_dLsR::synapse0x2cc8da0() {
   return (neuron0x2ca9450()*-0.239972);
}

double NNfunction_sb_dLsR::synapse0x2cc8de0() {
   return (neuron0x2ca99b0()*-0.5099);
}

double NNfunction_sb_dLsR::synapse0x2cb9910() {
   return (neuron0x2ca9bd0()*-0.223741);
}

double NNfunction_sb_dLsR::synapse0x2cb9950() {
   return (neuron0x2ca9f10()*0.349451);
}

double NNfunction_sb_dLsR::synapse0x2cb9990() {
   return (neuron0x2caa250()*0.163688);
}

double NNfunction_sb_dLsR::synapse0x2cb99d0() {
   return (neuron0x2caa590()*0.625244);
}

double NNfunction_sb_dLsR::synapse0x2cb9a10() {
   return (neuron0x2caa8d0()*0.457329);
}

double NNfunction_sb_dLsR::synapse0x2cb9a50() {
   return (neuron0x2caac10()*0.0237089);
}

double NNfunction_sb_dLsR::synapse0x2cb9dd0() {
   return (neuron0x2ca60e0()*-0.074326);
}

double NNfunction_sb_dLsR::synapse0x2cb9e10() {
   return (neuron0x2ca6390()*-0.00244141);
}

double NNfunction_sb_dLsR::synapse0x2cb9e50() {
   return (neuron0x2ca66d0()*-0.0738317);
}

double NNfunction_sb_dLsR::synapse0x2cb9e90() {
   return (neuron0x2ca6a10()*-3.44191);
}

double NNfunction_sb_dLsR::synapse0x2cb9ed0() {
   return (neuron0x2ca6d50()*0.0224217);
}

double NNfunction_sb_dLsR::synapse0x2cb9f10() {
   return (neuron0x2ca7090()*-0.00915875);
}

double NNfunction_sb_dLsR::synapse0x2cb9f50() {
   return (neuron0x2ca73d0()*-0.000645757);
}

double NNfunction_sb_dLsR::synapse0x2cb9f90() {
   return (neuron0x2ca7710()*-0.00854736);
}

double NNfunction_sb_dLsR::synapse0x2cb9fd0() {
   return (neuron0x2ca7a50()*-0.00482093);
}

double NNfunction_sb_dLsR::synapse0x2cba010() {
   return (neuron0x2ca7d90()*0.00581587);
}

double NNfunction_sb_dLsR::synapse0x2cba050() {
   return (neuron0x2ca80d0()*-0.0199519);
}

double NNfunction_sb_dLsR::synapse0x2cba090() {
   return (neuron0x2ca8410()*0.0130878);
}

double NNfunction_sb_dLsR::synapse0x2cba0d0() {
   return (neuron0x2ca8750()*0.0160946);
}

double NNfunction_sb_dLsR::synapse0x2cba110() {
   return (neuron0x2ca8a90()*-0.00965887);
}

double NNfunction_sb_dLsR::synapse0x2cba150() {
   return (neuron0x2ca8dd0()*-0.0148995);
}

double NNfunction_sb_dLsR::synapse0x2cba190() {
   return (neuron0x2ca9110()*0.00432624);
}

double NNfunction_sb_dLsR::synapse0x2cb9c20() {
   return (neuron0x2ca9450()*-0.0176918);
}

double NNfunction_sb_dLsR::synapse0x2cb9c60() {
   return (neuron0x2ca99b0()*0.0493702);
}

double NNfunction_sb_dLsR::synapse0x2cba2e0() {
   return (neuron0x2ca9bd0()*-0.121282);
}

double NNfunction_sb_dLsR::synapse0x2cba320() {
   return (neuron0x2ca9f10()*0.00905634);
}

double NNfunction_sb_dLsR::synapse0x2cba360() {
   return (neuron0x2caa250()*0.0235499);
}

double NNfunction_sb_dLsR::synapse0x2cba3a0() {
   return (neuron0x2caa590()*-0.0280358);
}

double NNfunction_sb_dLsR::synapse0x2cba3e0() {
   return (neuron0x2caa8d0()*0.0210391);
}

double NNfunction_sb_dLsR::synapse0x2cba420() {
   return (neuron0x2caac10()*-0.0177186);
}

double NNfunction_sb_dLsR::synapse0x2cba7a0() {
   return (neuron0x2ca60e0()*-0.55599);
}

double NNfunction_sb_dLsR::synapse0x2cba7e0() {
   return (neuron0x2ca6390()*0.0861327);
}

double NNfunction_sb_dLsR::synapse0x2cba820() {
   return (neuron0x2ca66d0()*-0.0732029);
}

double NNfunction_sb_dLsR::synapse0x2cba860() {
   return (neuron0x2ca6a10()*0.46949);
}

double NNfunction_sb_dLsR::synapse0x2cba8a0() {
   return (neuron0x2ca6d50()*-0.031806);
}

double NNfunction_sb_dLsR::synapse0x2cba8e0() {
   return (neuron0x2ca7090()*0.513053);
}

double NNfunction_sb_dLsR::synapse0x2cba920() {
   return (neuron0x2ca73d0()*-0.790828);
}

double NNfunction_sb_dLsR::synapse0x2cba960() {
   return (neuron0x2ca7710()*0.254592);
}

double NNfunction_sb_dLsR::synapse0x2cba9a0() {
   return (neuron0x2ca7a50()*-0.158796);
}

double NNfunction_sb_dLsR::synapse0x2cba9e0() {
   return (neuron0x2ca7d90()*-0.0522829);
}

double NNfunction_sb_dLsR::synapse0x2cbaa20() {
   return (neuron0x2ca80d0()*-0.107849);
}

double NNfunction_sb_dLsR::synapse0x2cbaa60() {
   return (neuron0x2ca8410()*-0.262674);
}

double NNfunction_sb_dLsR::synapse0x2cbaaa0() {
   return (neuron0x2ca8750()*-0.340631);
}

double NNfunction_sb_dLsR::synapse0x2cbaae0() {
   return (neuron0x2ca8a90()*-0.301243);
}

double NNfunction_sb_dLsR::synapse0x2cbab20() {
   return (neuron0x2ca8dd0()*0.485445);
}

double NNfunction_sb_dLsR::synapse0x2cbab60() {
   return (neuron0x2ca9110()*0.386038);
}

double NNfunction_sb_dLsR::synapse0x2cba5f0() {
   return (neuron0x2ca9450()*0.19224);
}

double NNfunction_sb_dLsR::synapse0x2cba630() {
   return (neuron0x2ca99b0()*0.161863);
}

double NNfunction_sb_dLsR::synapse0x2cbacb0() {
   return (neuron0x2ca9bd0()*-0.00269857);
}

double NNfunction_sb_dLsR::synapse0x2cbacf0() {
   return (neuron0x2ca9f10()*-0.0041184);
}

double NNfunction_sb_dLsR::synapse0x2cbad30() {
   return (neuron0x2caa250()*-0.591706);
}

double NNfunction_sb_dLsR::synapse0x2cbad70() {
   return (neuron0x2caa590()*0.0711174);
}

double NNfunction_sb_dLsR::synapse0x2cbadb0() {
   return (neuron0x2caa8d0()*-0.063704);
}

double NNfunction_sb_dLsR::synapse0x2cbadf0() {
   return (neuron0x2caac10()*0.129122);
}

double NNfunction_sb_dLsR::synapse0x2cbb170() {
   return (neuron0x2ca60e0()*0.026818);
}

double NNfunction_sb_dLsR::synapse0x2cbb1b0() {
   return (neuron0x2ca6390()*0.0186948);
}

double NNfunction_sb_dLsR::synapse0x2cbb1f0() {
   return (neuron0x2ca66d0()*0.026208);
}

double NNfunction_sb_dLsR::synapse0x2cbb230() {
   return (neuron0x2ca6a10()*-0.107885);
}

double NNfunction_sb_dLsR::synapse0x2cbb270() {
   return (neuron0x2ca6d50()*-0.0147909);
}

double NNfunction_sb_dLsR::synapse0x2cbb2b0() {
   return (neuron0x2ca7090()*0.00931387);
}

double NNfunction_sb_dLsR::synapse0x2cbb2f0() {
   return (neuron0x2ca73d0()*-0.000324035);
}

double NNfunction_sb_dLsR::synapse0x2cbb330() {
   return (neuron0x2ca7710()*0.0189581);
}

double NNfunction_sb_dLsR::synapse0x2cbb370() {
   return (neuron0x2ca7a50()*-0.000773203);
}

double NNfunction_sb_dLsR::synapse0x2cbb3b0() {
   return (neuron0x2ca7d90()*-0.00883974);
}

double NNfunction_sb_dLsR::synapse0x2cbb3f0() {
   return (neuron0x2ca80d0()*0.00625683);
}

double NNfunction_sb_dLsR::synapse0x2cbb430() {
   return (neuron0x2ca8410()*-0.791568);
}

double NNfunction_sb_dLsR::synapse0x2cbb470() {
   return (neuron0x2ca8750()*0.0364943);
}

double NNfunction_sb_dLsR::synapse0x2cbb4b0() {
   return (neuron0x2ca8a90()*-0.0112602);
}

double NNfunction_sb_dLsR::synapse0x2cbb4f0() {
   return (neuron0x2ca8dd0()*0.0370709);
}

double NNfunction_sb_dLsR::synapse0x2cbb530() {
   return (neuron0x2ca9110()*0.0307307);
}

double NNfunction_sb_dLsR::synapse0x2cbafc0() {
   return (neuron0x2ca9450()*-0.00763012);
}

double NNfunction_sb_dLsR::synapse0x2cbb000() {
   return (neuron0x2ca99b0()*0.0120862);
}

double NNfunction_sb_dLsR::synapse0x2cbb680() {
   return (neuron0x2ca9bd0()*-0.298317);
}

double NNfunction_sb_dLsR::synapse0x2cbb6c0() {
   return (neuron0x2ca9f10()*-0.00228086);
}

double NNfunction_sb_dLsR::synapse0x2cbb700() {
   return (neuron0x2caa250()*0.000321747);
}

double NNfunction_sb_dLsR::synapse0x2cbb740() {
   return (neuron0x2caa590()*0.0183381);
}

double NNfunction_sb_dLsR::synapse0x2cbb780() {
   return (neuron0x2caa8d0()*-0.00226256);
}

double NNfunction_sb_dLsR::synapse0x2cbb7c0() {
   return (neuron0x2caac10()*0.0132832);
}

double NNfunction_sb_dLsR::synapse0x2ccd690() {
   return (neuron0x2ca60e0()*-0.157435);
}

double NNfunction_sb_dLsR::synapse0x2ccd6d0() {
   return (neuron0x2ca6390()*0.119276);
}

double NNfunction_sb_dLsR::synapse0x2ccd710() {
   return (neuron0x2ca66d0()*0.672986);
}

double NNfunction_sb_dLsR::synapse0x2ccd750() {
   return (neuron0x2ca6a10()*0.500765);
}

double NNfunction_sb_dLsR::synapse0x2ccd790() {
   return (neuron0x2ca6d50()*-0.42307);
}

double NNfunction_sb_dLsR::synapse0x2ccd7d0() {
   return (neuron0x2ca7090()*0.317714);
}

double NNfunction_sb_dLsR::synapse0x2ccd810() {
   return (neuron0x2ca73d0()*0.259029);
}

double NNfunction_sb_dLsR::synapse0x2ccd850() {
   return (neuron0x2ca7710()*0.127425);
}

double NNfunction_sb_dLsR::synapse0x2ccd890() {
   return (neuron0x2ca7a50()*0.102863);
}

double NNfunction_sb_dLsR::synapse0x2ccd8d0() {
   return (neuron0x2ca7d90()*0.160359);
}

double NNfunction_sb_dLsR::synapse0x2ccd910() {
   return (neuron0x2ca80d0()*0.239272);
}

double NNfunction_sb_dLsR::synapse0x2ccd950() {
   return (neuron0x2ca8410()*0.583339);
}

double NNfunction_sb_dLsR::synapse0x2ccd990() {
   return (neuron0x2ca8750()*0.423455);
}

double NNfunction_sb_dLsR::synapse0x2ccd9d0() {
   return (neuron0x2ca8a90()*-0.174011);
}

double NNfunction_sb_dLsR::synapse0x2ccda10() {
   return (neuron0x2ca8dd0()*0.290403);
}

double NNfunction_sb_dLsR::synapse0x2ccda50() {
   return (neuron0x2ca9110()*-0.0170542);
}

double NNfunction_sb_dLsR::synapse0x2cbb800() {
   return (neuron0x2ca9450()*-0.337171);
}

double NNfunction_sb_dLsR::synapse0x2cbb840() {
   return (neuron0x2ca99b0()*0.293238);
}

double NNfunction_sb_dLsR::synapse0x2ccdba0() {
   return (neuron0x2ca9bd0()*-0.605096);
}

double NNfunction_sb_dLsR::synapse0x2ccdbe0() {
   return (neuron0x2ca9f10()*0.029552);
}

double NNfunction_sb_dLsR::synapse0x2ccdc20() {
   return (neuron0x2caa250()*-0.143437);
}

double NNfunction_sb_dLsR::synapse0x2ccdc60() {
   return (neuron0x2caa590()*0.264147);
}

double NNfunction_sb_dLsR::synapse0x2ccdca0() {
   return (neuron0x2caa8d0()*-0.358674);
}

double NNfunction_sb_dLsR::synapse0x2ccdce0() {
   return (neuron0x2caac10()*-0.103091);
}

double NNfunction_sb_dLsR::synapse0x2cce060() {
   return (neuron0x2ca60e0()*-0.300509);
}

double NNfunction_sb_dLsR::synapse0x2cce0a0() {
   return (neuron0x2ca6390()*0.0837207);
}

double NNfunction_sb_dLsR::synapse0x2cce0e0() {
   return (neuron0x2ca66d0()*0.10258);
}

double NNfunction_sb_dLsR::synapse0x2cce120() {
   return (neuron0x2ca6a10()*0.605671);
}

double NNfunction_sb_dLsR::synapse0x2cce160() {
   return (neuron0x2ca6d50()*-0.246849);
}

double NNfunction_sb_dLsR::synapse0x2cce1a0() {
   return (neuron0x2ca7090()*0.0666011);
}

double NNfunction_sb_dLsR::synapse0x2cce1e0() {
   return (neuron0x2ca73d0()*0.102317);
}

double NNfunction_sb_dLsR::synapse0x2cce220() {
   return (neuron0x2ca7710()*-0.333582);
}

double NNfunction_sb_dLsR::synapse0x2cce260() {
   return (neuron0x2ca7a50()*-1.04472);
}

double NNfunction_sb_dLsR::synapse0x2cce2a0() {
   return (neuron0x2ca7d90()*-0.80482);
}

double NNfunction_sb_dLsR::synapse0x2cce2e0() {
   return (neuron0x2ca80d0()*0.565011);
}

double NNfunction_sb_dLsR::synapse0x2cce320() {
   return (neuron0x2ca8410()*0.475028);
}

double NNfunction_sb_dLsR::synapse0x2cce360() {
   return (neuron0x2ca8750()*-0.17312);
}

double NNfunction_sb_dLsR::synapse0x2cce3a0() {
   return (neuron0x2ca8a90()*0.598589);
}

double NNfunction_sb_dLsR::synapse0x2cce3e0() {
   return (neuron0x2ca8dd0()*-0.0298946);
}

double NNfunction_sb_dLsR::synapse0x2cce420() {
   return (neuron0x2ca9110()*0.162806);
}

double NNfunction_sb_dLsR::synapse0x2ccdeb0() {
   return (neuron0x2ca9450()*0.285974);
}

double NNfunction_sb_dLsR::synapse0x2ccdef0() {
   return (neuron0x2ca99b0()*0.334805);
}

double NNfunction_sb_dLsR::synapse0x2cce570() {
   return (neuron0x2ca9bd0()*-0.146504);
}

double NNfunction_sb_dLsR::synapse0x2cce5b0() {
   return (neuron0x2ca9f10()*-0.314098);
}

double NNfunction_sb_dLsR::synapse0x2cce5f0() {
   return (neuron0x2caa250()*0.426179);
}

double NNfunction_sb_dLsR::synapse0x2cce630() {
   return (neuron0x2caa590()*-0.0463898);
}

double NNfunction_sb_dLsR::synapse0x2cce670() {
   return (neuron0x2caa8d0()*0.0597141);
}

double NNfunction_sb_dLsR::synapse0x2cce6b0() {
   return (neuron0x2caac10()*0.0647229);
}

double NNfunction_sb_dLsR::synapse0x2ccea30() {
   return (neuron0x2ca60e0()*-0.0469256);
}

double NNfunction_sb_dLsR::synapse0x2ccea70() {
   return (neuron0x2ca6390()*-0.0154914);
}

double NNfunction_sb_dLsR::synapse0x2cceab0() {
   return (neuron0x2ca66d0()*-0.0484302);
}

double NNfunction_sb_dLsR::synapse0x2cceaf0() {
   return (neuron0x2ca6a10()*-1.44478);
}

double NNfunction_sb_dLsR::synapse0x2cceb30() {
   return (neuron0x2ca6d50()*-0.00932183);
}

double NNfunction_sb_dLsR::synapse0x2cceb70() {
   return (neuron0x2ca7090()*-0.0322732);
}

double NNfunction_sb_dLsR::synapse0x2ccebb0() {
   return (neuron0x2ca73d0()*0.0223161);
}

double NNfunction_sb_dLsR::synapse0x2ccebf0() {
   return (neuron0x2ca7710()*0.008221);
}

double NNfunction_sb_dLsR::synapse0x2ccec30() {
   return (neuron0x2ca7a50()*0.0241214);
}

double NNfunction_sb_dLsR::synapse0x2ccec70() {
   return (neuron0x2ca7d90()*-0.020432);
}

double NNfunction_sb_dLsR::synapse0x2ccecb0() {
   return (neuron0x2ca80d0()*0.013192);
}

double NNfunction_sb_dLsR::synapse0x2ccecf0() {
   return (neuron0x2ca8410()*0.692211);
}

double NNfunction_sb_dLsR::synapse0x2cced30() {
   return (neuron0x2ca8750()*-0.0466774);
}

double NNfunction_sb_dLsR::synapse0x2cced70() {
   return (neuron0x2ca8a90()*0.055529);
}

double NNfunction_sb_dLsR::synapse0x2ccedb0() {
   return (neuron0x2ca8dd0()*-0.0565432);
}

double NNfunction_sb_dLsR::synapse0x2ccedf0() {
   return (neuron0x2ca9110()*0.0435181);
}

double NNfunction_sb_dLsR::synapse0x2cce880() {
   return (neuron0x2ca9450()*-0.0113567);
}

double NNfunction_sb_dLsR::synapse0x2cce8c0() {
   return (neuron0x2ca99b0()*-0.0346929);
}

double NNfunction_sb_dLsR::synapse0x2ccef40() {
   return (neuron0x2ca9bd0()*0.600739);
}

double NNfunction_sb_dLsR::synapse0x2ccef80() {
   return (neuron0x2ca9f10()*0.0259673);
}

double NNfunction_sb_dLsR::synapse0x2ccefc0() {
   return (neuron0x2caa250()*0.0175088);
}

double NNfunction_sb_dLsR::synapse0x2ccf000() {
   return (neuron0x2caa590()*-0.0102512);
}

double NNfunction_sb_dLsR::synapse0x2ccf040() {
   return (neuron0x2caa8d0()*0.029678);
}

double NNfunction_sb_dLsR::synapse0x2ccf080() {
   return (neuron0x2caac10()*-0.0367768);
}

double NNfunction_sb_dLsR::synapse0x2ccf400() {
   return (neuron0x2ca60e0()*-0.0606459);
}

double NNfunction_sb_dLsR::synapse0x2ccf440() {
   return (neuron0x2ca6390()*0.00934184);
}

double NNfunction_sb_dLsR::synapse0x2ccf480() {
   return (neuron0x2ca66d0()*-0.058431);
}

double NNfunction_sb_dLsR::synapse0x2ccf4c0() {
   return (neuron0x2ca6a10()*0.0380962);
}

double NNfunction_sb_dLsR::synapse0x2ccf500() {
   return (neuron0x2ca6d50()*-0.0194478);
}

double NNfunction_sb_dLsR::synapse0x2ccf540() {
   return (neuron0x2ca7090()*0.0100002);
}

double NNfunction_sb_dLsR::synapse0x2ccf580() {
   return (neuron0x2ca73d0()*-0.0341638);
}

double NNfunction_sb_dLsR::synapse0x2ccf5c0() {
   return (neuron0x2ca7710()*-0.0206448);
}

double NNfunction_sb_dLsR::synapse0x2ccf600() {
   return (neuron0x2ca7a50()*0.00525144);
}

double NNfunction_sb_dLsR::synapse0x2ccf640() {
   return (neuron0x2ca7d90()*0.0216938);
}

double NNfunction_sb_dLsR::synapse0x2ccf680() {
   return (neuron0x2ca80d0()*-0.0890968);
}

double NNfunction_sb_dLsR::synapse0x2ccf6c0() {
   return (neuron0x2ca8410()*-0.116549);
}

double NNfunction_sb_dLsR::synapse0x2ccf700() {
   return (neuron0x2ca8750()*-0.0658998);
}

double NNfunction_sb_dLsR::synapse0x2ccf740() {
   return (neuron0x2ca8a90()*-0.0205605);
}

double NNfunction_sb_dLsR::synapse0x2ccf780() {
   return (neuron0x2ca8dd0()*-0.0245943);
}

double NNfunction_sb_dLsR::synapse0x2ccf7c0() {
   return (neuron0x2ca9110()*-0.0296176);
}

double NNfunction_sb_dLsR::synapse0x2ccf250() {
   return (neuron0x2ca9450()*0.0105503);
}

double NNfunction_sb_dLsR::synapse0x2ccf290() {
   return (neuron0x2ca99b0()*-0.0104185);
}

double NNfunction_sb_dLsR::synapse0x2ccf910() {
   return (neuron0x2ca9bd0()*0.470212);
}

double NNfunction_sb_dLsR::synapse0x2ccf950() {
   return (neuron0x2ca9f10()*0.0153007);
}

double NNfunction_sb_dLsR::synapse0x2ccf990() {
   return (neuron0x2caa250()*0.0190178);
}

double NNfunction_sb_dLsR::synapse0x2ccf9d0() {
   return (neuron0x2caa590()*-0.00534564);
}

double NNfunction_sb_dLsR::synapse0x2ccfa10() {
   return (neuron0x2caa8d0()*-0.0147658);
}

double NNfunction_sb_dLsR::synapse0x2ccfa50() {
   return (neuron0x2caac10()*0.00310916);
}

double NNfunction_sb_dLsR::synapse0x2cabfe0() {
   return (neuron0x2cab080()*-0.890629);
}

double NNfunction_sb_dLsR::synapse0x2cac020() {
   return (neuron0x2cab9d0()*-6.54915);
}

double NNfunction_sb_dLsR::synapse0x2cad500() {
   return (neuron0x2cac4b0()*-0.473975);
}

double NNfunction_sb_dLsR::synapse0x2cad540() {
   return (neuron0x2a6f800()*0.0766302);
}

double NNfunction_sb_dLsR::synapse0x2caded0() {
   return (neuron0x2cad250()*-0.330147);
}

double NNfunction_sb_dLsR::synapse0x2cadf10() {
   return (neuron0x2cadc20()*-0.787007);
}

double NNfunction_sb_dLsR::synapse0x2caeca0() {
   return (neuron0x2cae9f0()*0.244634);
}

double NNfunction_sb_dLsR::synapse0x2caece0() {
   return (neuron0x2caf3c0()*-0.667589);
}

double NNfunction_sb_dLsR::synapse0x2caf670() {
   return (neuron0x2cafd90()*-1.54754);
}

double NNfunction_sb_dLsR::synapse0x2caf6b0() {
   return (neuron0x2cb0870()*0.629954);
}

double NNfunction_sb_dLsR::synapse0x2cb0040() {
   return (neuron0x2cb1240()*0.0628934);
}

double NNfunction_sb_dLsR::synapse0x2cb0080() {
   return (neuron0x2cae320()*0.0263135);
}

double NNfunction_sb_dLsR::synapse0x2cb0b20() {
   return (neuron0x2cb2df0()*-0.654938);
}

double NNfunction_sb_dLsR::synapse0x2cb0b60() {
   return (neuron0x2cb37c0()*-0.10288);
}

double NNfunction_sb_dLsR::synapse0x2cb14f0() {
   return (neuron0x2cb4190()*-0.720024);
}

double NNfunction_sb_dLsR::synapse0x2cb1530() {
   return (neuron0x2cb4b60()*-0.0393152);
}

double NNfunction_sb_dLsR::synapse0x2cae5d0() {
   return (neuron0x2cb6970()*0.00703021);
}

double NNfunction_sb_dLsR::synapse0x2cae610() {
   return (neuron0x2cb6c50()*-0.0459071);
}

double NNfunction_sb_dLsR::synapse0x2cb30a0() {
   return (neuron0x2cb7620()*-0.830538);
}

double NNfunction_sb_dLsR::synapse0x2cb30e0() {
   return (neuron0x2cb7ff0()*0.639319);
}

double NNfunction_sb_dLsR::synapse0x2cb3a70() {
   return (neuron0x2cb89c0()*0.726438);
}

double NNfunction_sb_dLsR::synapse0x2cb3ab0() {
   return (neuron0x2cb9390()*-0.51559);
}

double NNfunction_sb_dLsR::synapse0x2cb4440() {
   return (neuron0x2cb1ee0()*-0.132228);
}

double NNfunction_sb_dLsR::synapse0x2cb4480() {
   return (neuron0x2cb28b0()*0.208565);
}

double NNfunction_sb_dLsR::synapse0x2cb4e10() {
   return (neuron0x2cbc120()*0.258592);
}

double NNfunction_sb_dLsR::synapse0x2cb4e50() {
   return (neuron0x2cbcaf0()*0.370363);
}

double NNfunction_sb_dLsR::synapse0x2ca8ff0() {
   return (neuron0x2cbd4c0()*0.481046);
}

double NNfunction_sb_dLsR::synapse0x2ca9030() {
   return (neuron0x2cbde90()*4.49214);
}

double NNfunction_sb_dLsR::synapse0x2cb6f00() {
   return (neuron0x2cbe860()*0.529598);
}

double NNfunction_sb_dLsR::synapse0x2cb6f40() {
   return (neuron0x2cbf230()*0.755637);
}

double NNfunction_sb_dLsR::synapse0x2cb78d0() {
   return (neuron0x2cbfc00()*-0.136696);
}

double NNfunction_sb_dLsR::synapse0x2cb7910() {
   return (neuron0x2cc05d0()*-0.835571);
}

double NNfunction_sb_dLsR::synapse0x2cb82a0() {
   return (neuron0x2cb6660()*0.443655);
}

double NNfunction_sb_dLsR::synapse0x2cb82e0() {
   return (neuron0x2cc31b0()*-1.2223);
}

double NNfunction_sb_dLsR::synapse0x2cb8c70() {
   return (neuron0x2cc3b80()*0.577051);
}

double NNfunction_sb_dLsR::synapse0x2cb8cb0() {
   return (neuron0x2cc4550()*-1.44606);
}

double NNfunction_sb_dLsR::synapse0x2cb9640() {
   return (neuron0x2cc4f20()*0.325845);
}

double NNfunction_sb_dLsR::synapse0x2cb9680() {
   return (neuron0x2cc58f0()*0.325846);
}

double NNfunction_sb_dLsR::synapse0x2cb2190() {
   return (neuron0x2cc62c0()*-0.352098);
}

double NNfunction_sb_dLsR::synapse0x2cb21d0() {
   return (neuron0x2cc6c90()*-0.598838);
}

double NNfunction_sb_dLsR::synapse0x2cbba40() {
   return (neuron0x2cc7660()*0.36059);
}

double NNfunction_sb_dLsR::synapse0x2cbba80() {
   return (neuron0x2cc8240()*-0.443758);
}

double NNfunction_sb_dLsR::synapse0x2cbc3d0() {
   return (neuron0x2cc8c10()*-0.0516468);
}

double NNfunction_sb_dLsR::synapse0x2cbc410() {
   return (neuron0x2cb9a90()*-0.639402);
}

double NNfunction_sb_dLsR::synapse0x2cbcda0() {
   return (neuron0x2cba460()*0.1198);
}

double NNfunction_sb_dLsR::synapse0x2cbcde0() {
   return (neuron0x2cbae30()*-0.56665);
}

double NNfunction_sb_dLsR::synapse0x2cbd770() {
   return (neuron0x2ccd470()*-0.045601);
}

double NNfunction_sb_dLsR::synapse0x2cbd7b0() {
   return (neuron0x2ccdd20()*0.614233);
}

double NNfunction_sb_dLsR::synapse0x2cbe140() {
   return (neuron0x2cce6f0()*-0.391727);
}

double NNfunction_sb_dLsR::synapse0x2cbe180() {
   return (neuron0x2ccf0c0()*-0.433985);
}

double NNfunction_sb_dLsR::synapse0x2cc0880() {
   return (neuron0x2cab080()*0.23181);
}

double NNfunction_sb_dLsR::synapse0x2cc08c0() {
   return (neuron0x2cab9d0()*-2.17846);
}

double NNfunction_sb_dLsR::synapse0x2cb5e40() {
   return (neuron0x2cac4b0()*0.19101);
}

double NNfunction_sb_dLsR::synapse0x2cb5e80() {
   return (neuron0x2a6f800()*-0.253617);
}

double NNfunction_sb_dLsR::synapse0x2cc3460() {
   return (neuron0x2cad250()*0.562342);
}

double NNfunction_sb_dLsR::synapse0x2cc34a0() {
   return (neuron0x2cadc20()*0.297247);
}

double NNfunction_sb_dLsR::synapse0x2cc3e30() {
   return (neuron0x2cae9f0()*-0.177682);
}

double NNfunction_sb_dLsR::synapse0x2cc3e70() {
   return (neuron0x2caf3c0()*0.256765);
}

double NNfunction_sb_dLsR::synapse0x2cc4800() {
   return (neuron0x2cafd90()*0.139242);
}

double NNfunction_sb_dLsR::synapse0x2cc4840() {
   return (neuron0x2cb0870()*-0.315982);
}

double NNfunction_sb_dLsR::synapse0x2cc51d0() {
   return (neuron0x2cb1240()*0.144514);
}

double NNfunction_sb_dLsR::synapse0x2cc5210() {
   return (neuron0x2cae320()*0.213525);
}

double NNfunction_sb_dLsR::synapse0x2cc5ba0() {
   return (neuron0x2cb2df0()*0.155797);
}

double NNfunction_sb_dLsR::synapse0x2cc5be0() {
   return (neuron0x2cb37c0()*1.3119);
}

double NNfunction_sb_dLsR::synapse0x2cc6570() {
   return (neuron0x2cb4190()*0.0883294);
}

double NNfunction_sb_dLsR::synapse0x2cc65b0() {
   return (neuron0x2cb4b60()*1.07978);
}

double NNfunction_sb_dLsR::synapse0x2cc6f40() {
   return (neuron0x2cb6970()*0.128192);
}

double NNfunction_sb_dLsR::synapse0x2cc6f80() {
   return (neuron0x2cb6c50()*-0.840775);
}

double NNfunction_sb_dLsR::synapse0x2cc7910() {
   return (neuron0x2cb7620()*-1.55369);
}

double NNfunction_sb_dLsR::synapse0x2cc7950() {
   return (neuron0x2cb7ff0()*1.30472);
}

double NNfunction_sb_dLsR::synapse0x2cc84f0() {
   return (neuron0x2cb89c0()*-0.254514);
}

double NNfunction_sb_dLsR::synapse0x2cc8530() {
   return (neuron0x2cb9390()*0.232298);
}

double NNfunction_sb_dLsR::synapse0x2cc8ec0() {
   return (neuron0x2cb1ee0()*0.196551);
}

double NNfunction_sb_dLsR::synapse0x2cc8f00() {
   return (neuron0x2cb28b0()*0.526085);
}

double NNfunction_sb_dLsR::synapse0x2cb9d40() {
   return (neuron0x2cbc120()*-0.4735);
}

double NNfunction_sb_dLsR::synapse0x2cb9d80() {
   return (neuron0x2cbcaf0()*-0.206087);
}

double NNfunction_sb_dLsR::synapse0x2cba710() {
   return (neuron0x2cbd4c0()*-0.329059);
}

double NNfunction_sb_dLsR::synapse0x2cba750() {
   return (neuron0x2cbde90()*2.09818);
}

double NNfunction_sb_dLsR::synapse0x2cbb0e0() {
   return (neuron0x2cbe860()*-0.191102);
}

double NNfunction_sb_dLsR::synapse0x2cbb120() {
   return (neuron0x2cbf230()*-0.410751);
}

double NNfunction_sb_dLsR::synapse0x2ccd600() {
   return (neuron0x2cbfc00()*0.213026);
}

double NNfunction_sb_dLsR::synapse0x2ccd640() {
   return (neuron0x2cc05d0()*0.367668);
}

double NNfunction_sb_dLsR::synapse0x2ccdfd0() {
   return (neuron0x2cb6660()*-0.312098);
}

double NNfunction_sb_dLsR::synapse0x2cce010() {
   return (neuron0x2cc31b0()*0.849011);
}

double NNfunction_sb_dLsR::synapse0x2cce9a0() {
   return (neuron0x2cc3b80()*-0.277496);
}

double NNfunction_sb_dLsR::synapse0x2cce9e0() {
   return (neuron0x2cc4550()*0.608952);
}

double NNfunction_sb_dLsR::synapse0x2ccf370() {
   return (neuron0x2cc4f20()*-0.370765);
}

double NNfunction_sb_dLsR::synapse0x2ccf3b0() {
   return (neuron0x2cc58f0()*0.121735);
}

double NNfunction_sb_dLsR::synapse0x2cab2a0() {
   return (neuron0x2cc62c0()*0.150242);
}

double NNfunction_sb_dLsR::synapse0x2cab2e0() {
   return (neuron0x2cc6c90()*0.294297);
}

double NNfunction_sb_dLsR::synapse0x2cbeb10() {
   return (neuron0x2cc7660()*-0.204619);
}

double NNfunction_sb_dLsR::synapse0x2cbeb50() {
   return (neuron0x2cc8240()*0.34338);
}

double NNfunction_sb_dLsR::synapse0x2ccfa90() {
   return (neuron0x2cc8c10()*-0.177006);
}

double NNfunction_sb_dLsR::synapse0x2ccfad0() {
   return (neuron0x2cb9a90()*-0.162455);
}

double NNfunction_sb_dLsR::synapse0x2ccfb10() {
   return (neuron0x2cba460()*-0.185589);
}

double NNfunction_sb_dLsR::synapse0x2ccfb50() {
   return (neuron0x2cbae30()*-0.0820795);
}

double NNfunction_sb_dLsR::synapse0x2cd6a00() {
   return (neuron0x2ccd470()*0.185303);
}

double NNfunction_sb_dLsR::synapse0x2cd6a40() {
   return (neuron0x2ccdd20()*-0.189307);
}

double NNfunction_sb_dLsR::synapse0x2cd6a80() {
   return (neuron0x2cce6f0()*1.01813);
}

double NNfunction_sb_dLsR::synapse0x2cd6ac0() {
   return (neuron0x2ccf0c0()*1.2607);
}

double NNfunction_sb_dLsR::synapse0x2cd6e40() {
   return (neuron0x2cab080()*0.300911);
}

double NNfunction_sb_dLsR::synapse0x2cd6e80() {
   return (neuron0x2cab9d0()*-1.74721);
}

double NNfunction_sb_dLsR::synapse0x2cd6ec0() {
   return (neuron0x2cac4b0()*-0.203515);
}

double NNfunction_sb_dLsR::synapse0x2cd6f00() {
   return (neuron0x2a6f800()*0.892384);
}

double NNfunction_sb_dLsR::synapse0x2cd6f40() {
   return (neuron0x2cad250()*0.611834);
}

double NNfunction_sb_dLsR::synapse0x2cd6f80() {
   return (neuron0x2cadc20()*0.560234);
}

double NNfunction_sb_dLsR::synapse0x2cd6fc0() {
   return (neuron0x2cae9f0()*0.712956);
}

double NNfunction_sb_dLsR::synapse0x2cd7000() {
   return (neuron0x2caf3c0()*0.875264);
}

double NNfunction_sb_dLsR::synapse0x2cd7040() {
   return (neuron0x2cafd90()*2.13081);
}

double NNfunction_sb_dLsR::synapse0x2cd7080() {
   return (neuron0x2cb0870()*0.115569);
}

double NNfunction_sb_dLsR::synapse0x2cd70c0() {
   return (neuron0x2cb1240()*-0.266989);
}

double NNfunction_sb_dLsR::synapse0x2cd7100() {
   return (neuron0x2cae320()*-1.52709);
}

double NNfunction_sb_dLsR::synapse0x2cd7140() {
   return (neuron0x2cb2df0()*0.952023);
}

double NNfunction_sb_dLsR::synapse0x2cd7180() {
   return (neuron0x2cb37c0()*1.37047);
}

double NNfunction_sb_dLsR::synapse0x2cd71c0() {
   return (neuron0x2cb4190()*0.959925);
}

double NNfunction_sb_dLsR::synapse0x2cd7200() {
   return (neuron0x2cb4b60()*0.389337);
}

double NNfunction_sb_dLsR::synapse0x2cd6c90() {
   return (neuron0x2cb6970()*-1.36113);
}

double NNfunction_sb_dLsR::synapse0x2cd6cd0() {
   return (neuron0x2cb6c50()*3.17316);
}

double NNfunction_sb_dLsR::synapse0x2cd7350() {
   return (neuron0x2cb7620()*0.565995);
}

double NNfunction_sb_dLsR::synapse0x2cd7390() {
   return (neuron0x2cb7ff0()*0.0725361);
}

double NNfunction_sb_dLsR::synapse0x2cd73d0() {
   return (neuron0x2cb89c0()*0.149718);
}

double NNfunction_sb_dLsR::synapse0x2cd7410() {
   return (neuron0x2cb9390()*0.260003);
}

double NNfunction_sb_dLsR::synapse0x2cd7450() {
   return (neuron0x2cb1ee0()*0.471254);
}

double NNfunction_sb_dLsR::synapse0x2cd7490() {
   return (neuron0x2cb28b0()*1.51933);
}

double NNfunction_sb_dLsR::synapse0x2cd74d0() {
   return (neuron0x2cbc120()*1.52314);
}

double NNfunction_sb_dLsR::synapse0x2cd7510() {
   return (neuron0x2cbcaf0()*0.537607);
}

double NNfunction_sb_dLsR::synapse0x2cd7550() {
   return (neuron0x2cbd4c0()*-0.581677);
}

double NNfunction_sb_dLsR::synapse0x2cd7590() {
   return (neuron0x2cbde90()*1.50334);
}

double NNfunction_sb_dLsR::synapse0x2cd75d0() {
   return (neuron0x2cbe860()*-0.470324);
}

double NNfunction_sb_dLsR::synapse0x2cd7610() {
   return (neuron0x2cbf230()*-0.250875);
}

double NNfunction_sb_dLsR::synapse0x2cd7650() {
   return (neuron0x2cbfc00()*-1.10713);
}

double NNfunction_sb_dLsR::synapse0x2cd7690() {
   return (neuron0x2cc05d0()*-0.208509);
}

double NNfunction_sb_dLsR::synapse0x2cd7240() {
   return (neuron0x2cb6660()*0.135032);
}

double NNfunction_sb_dLsR::synapse0x2cd7280() {
   return (neuron0x2cc31b0()*0.856231);
}

double NNfunction_sb_dLsR::synapse0x2cd72c0() {
   return (neuron0x2cc3b80()*0.26815);
}

double NNfunction_sb_dLsR::synapse0x2cd7300() {
   return (neuron0x2cc4550()*0.687189);
}

double NNfunction_sb_dLsR::synapse0x2cd78e0() {
   return (neuron0x2cc4f20()*0.975374);
}

double NNfunction_sb_dLsR::synapse0x2cd7920() {
   return (neuron0x2cc58f0()*-0.648242);
}

double NNfunction_sb_dLsR::synapse0x2cd7960() {
   return (neuron0x2cc62c0()*-0.265605);
}

double NNfunction_sb_dLsR::synapse0x2cd79a0() {
   return (neuron0x2cc6c90()*-0.118072);
}

double NNfunction_sb_dLsR::synapse0x2cd79e0() {
   return (neuron0x2cc7660()*0.05292);
}

double NNfunction_sb_dLsR::synapse0x2cd7a20() {
   return (neuron0x2cc8240()*-0.62921);
}

double NNfunction_sb_dLsR::synapse0x2cd7a60() {
   return (neuron0x2cc8c10()*0.796004);
}

double NNfunction_sb_dLsR::synapse0x2cd7aa0() {
   return (neuron0x2cb9a90()*-6.07771);
}

double NNfunction_sb_dLsR::synapse0x2cd7ae0() {
   return (neuron0x2cba460()*-0.25188);
}

double NNfunction_sb_dLsR::synapse0x2cd7b20() {
   return (neuron0x2cbae30()*-0.527264);
}

double NNfunction_sb_dLsR::synapse0x2cd7b60() {
   return (neuron0x2ccd470()*-0.705873);
}

double NNfunction_sb_dLsR::synapse0x2cd7ba0() {
   return (neuron0x2ccdd20()*-0.260814);
}

double NNfunction_sb_dLsR::synapse0x2cd7be0() {
   return (neuron0x2cce6f0()*0.353751);
}

double NNfunction_sb_dLsR::synapse0x2cd7c20() {
   return (neuron0x2ccf0c0()*1.02013);
}

double NNfunction_sb_dLsR::synapse0x2cd7fa0() {
   return (neuron0x2cab080()*0.167066);
}

double NNfunction_sb_dLsR::synapse0x2cd7fe0() {
   return (neuron0x2cab9d0()*-2.00261);
}

double NNfunction_sb_dLsR::synapse0x2cd8020() {
   return (neuron0x2cac4b0()*0.253076);
}

double NNfunction_sb_dLsR::synapse0x2cd8060() {
   return (neuron0x2a6f800()*-0.843126);
}

double NNfunction_sb_dLsR::synapse0x2cd80a0() {
   return (neuron0x2cad250()*-0.306249);
}

double NNfunction_sb_dLsR::synapse0x2cd80e0() {
   return (neuron0x2cadc20()*0.619539);
}

double NNfunction_sb_dLsR::synapse0x2cd8120() {
   return (neuron0x2cae9f0()*-0.648224);
}

double NNfunction_sb_dLsR::synapse0x2cd8160() {
   return (neuron0x2caf3c0()*0.60436);
}

double NNfunction_sb_dLsR::synapse0x2cd81a0() {
   return (neuron0x2cafd90()*-3.33538);
}

double NNfunction_sb_dLsR::synapse0x2cd81e0() {
   return (neuron0x2cb0870()*-0.798701);
}

double NNfunction_sb_dLsR::synapse0x2cd8220() {
   return (neuron0x2cb1240()*1.14163);
}

double NNfunction_sb_dLsR::synapse0x2cd8260() {
   return (neuron0x2cae320()*0.352751);
}

double NNfunction_sb_dLsR::synapse0x2cd82a0() {
   return (neuron0x2cb2df0()*0.675996);
}

double NNfunction_sb_dLsR::synapse0x2cd82e0() {
   return (neuron0x2cb37c0()*-1.66716);
}

double NNfunction_sb_dLsR::synapse0x2cd8320() {
   return (neuron0x2cb4190()*0.259639);
}

double NNfunction_sb_dLsR::synapse0x2cd8360() {
   return (neuron0x2cb4b60()*-0.583091);
}

double NNfunction_sb_dLsR::synapse0x2cd7df0() {
   return (neuron0x2cb6970()*0.214933);
}

double NNfunction_sb_dLsR::synapse0x2cd7e30() {
   return (neuron0x2cb6c50()*-1.24727);
}

double NNfunction_sb_dLsR::synapse0x2cd84b0() {
   return (neuron0x2cb7620()*3.43079);
}

double NNfunction_sb_dLsR::synapse0x2cd84f0() {
   return (neuron0x2cb7ff0()*-1.29549);
}

double NNfunction_sb_dLsR::synapse0x2cd8530() {
   return (neuron0x2cb89c0()*-0.302618);
}

double NNfunction_sb_dLsR::synapse0x2cd8570() {
   return (neuron0x2cb9390()*0.602691);
}

double NNfunction_sb_dLsR::synapse0x2cd85b0() {
   return (neuron0x2cb1ee0()*-1.32204);
}

double NNfunction_sb_dLsR::synapse0x2cd85f0() {
   return (neuron0x2cb28b0()*-2.08366);
}

double NNfunction_sb_dLsR::synapse0x2cd8630() {
   return (neuron0x2cbc120()*-1.01819);
}

double NNfunction_sb_dLsR::synapse0x2cd8670() {
   return (neuron0x2cbcaf0()*-0.462278);
}

double NNfunction_sb_dLsR::synapse0x2cd86b0() {
   return (neuron0x2cbd4c0()*-1.18606);
}

double NNfunction_sb_dLsR::synapse0x2cd86f0() {
   return (neuron0x2cbde90()*1.73611);
}

double NNfunction_sb_dLsR::synapse0x2cd8730() {
   return (neuron0x2cbe860()*-0.458529);
}

double NNfunction_sb_dLsR::synapse0x2cd8770() {
   return (neuron0x2cbf230()*-2.13702);
}

double NNfunction_sb_dLsR::synapse0x2cd87b0() {
   return (neuron0x2cbfc00()*0.696867);
}

double NNfunction_sb_dLsR::synapse0x2cd87f0() {
   return (neuron0x2cc05d0()*0.644238);
}

double NNfunction_sb_dLsR::synapse0x2cd83a0() {
   return (neuron0x2cb6660()*-0.879514);
}

double NNfunction_sb_dLsR::synapse0x2cd83e0() {
   return (neuron0x2cc31b0()*-1.81109);
}

double NNfunction_sb_dLsR::synapse0x2cd8420() {
   return (neuron0x2cc3b80()*-0.672122);
}

double NNfunction_sb_dLsR::synapse0x2cd8460() {
   return (neuron0x2cc4550()*-0.322604);
}

double NNfunction_sb_dLsR::synapse0x2cd8a40() {
   return (neuron0x2cc4f20()*-0.867139);
}

double NNfunction_sb_dLsR::synapse0x2cd8a80() {
   return (neuron0x2cc58f0()*0.893618);
}

double NNfunction_sb_dLsR::synapse0x2cd8ac0() {
   return (neuron0x2cc62c0()*0.473674);
}

double NNfunction_sb_dLsR::synapse0x2cd8b00() {
   return (neuron0x2cc6c90()*0.723423);
}

double NNfunction_sb_dLsR::synapse0x2cd8b40() {
   return (neuron0x2cc7660()*-0.414683);
}

double NNfunction_sb_dLsR::synapse0x2cd8b80() {
   return (neuron0x2cc8240()*0.720696);
}

double NNfunction_sb_dLsR::synapse0x2cd8bc0() {
   return (neuron0x2cc8c10()*-0.560591);
}

double NNfunction_sb_dLsR::synapse0x2cd8c00() {
   return (neuron0x2cb9a90()*3.57957);
}

double NNfunction_sb_dLsR::synapse0x2cd8c40() {
   return (neuron0x2cba460()*-0.873297);
}

double NNfunction_sb_dLsR::synapse0x2cd8c80() {
   return (neuron0x2cbae30()*1.28409);
}

double NNfunction_sb_dLsR::synapse0x2cd8cc0() {
   return (neuron0x2ccd470()*0.711678);
}

double NNfunction_sb_dLsR::synapse0x2cd8d00() {
   return (neuron0x2ccdd20()*-0.416503);
}

double NNfunction_sb_dLsR::synapse0x2cd8d40() {
   return (neuron0x2cce6f0()*3.60212);
}

double NNfunction_sb_dLsR::synapse0x2cd8d80() {
   return (neuron0x2ccf0c0()*-2.17518);
}

double NNfunction_sb_dLsR::synapse0x2cd9100() {
   return (neuron0x2cab080()*0.0521603);
}

double NNfunction_sb_dLsR::synapse0x2cd9140() {
   return (neuron0x2cab9d0()*0.144602);
}

double NNfunction_sb_dLsR::synapse0x2cd9180() {
   return (neuron0x2cac4b0()*0.0391032);
}

double NNfunction_sb_dLsR::synapse0x2cd91c0() {
   return (neuron0x2a6f800()*-0.113204);
}

double NNfunction_sb_dLsR::synapse0x2cd9200() {
   return (neuron0x2cad250()*0.364997);
}

double NNfunction_sb_dLsR::synapse0x2cd9240() {
   return (neuron0x2cadc20()*0.0756828);
}

double NNfunction_sb_dLsR::synapse0x2cd9280() {
   return (neuron0x2cae9f0()*-0.133107);
}

double NNfunction_sb_dLsR::synapse0x2cd92c0() {
   return (neuron0x2caf3c0()*0.0356742);
}

double NNfunction_sb_dLsR::synapse0x2cd9300() {
   return (neuron0x2cafd90()*0.627075);
}

double NNfunction_sb_dLsR::synapse0x2cd9340() {
   return (neuron0x2cb0870()*-0.0803195);
}

double NNfunction_sb_dLsR::synapse0x2cd9380() {
   return (neuron0x2cb1240()*0.12925);
}

double NNfunction_sb_dLsR::synapse0x2cd93c0() {
   return (neuron0x2cae320()*0.0829294);
}

double NNfunction_sb_dLsR::synapse0x2cd9400() {
   return (neuron0x2cb2df0()*0.0591977);
}

double NNfunction_sb_dLsR::synapse0x2cd9440() {
   return (neuron0x2cb37c0()*0.253026);
}

double NNfunction_sb_dLsR::synapse0x2cd9480() {
   return (neuron0x2cb4190()*0.07853);
}

double NNfunction_sb_dLsR::synapse0x2cd94c0() {
   return (neuron0x2cb4b60()*0.260352);
}

double NNfunction_sb_dLsR::synapse0x2cd8f50() {
   return (neuron0x2cb6970()*-0.000397743);
}

double NNfunction_sb_dLsR::synapse0x2cd8f90() {
   return (neuron0x2cb6c50()*-0.148297);
}

double NNfunction_sb_dLsR::synapse0x2cd9610() {
   return (neuron0x2cb7620()*0.189962);
}

double NNfunction_sb_dLsR::synapse0x2cd9650() {
   return (neuron0x2cb7ff0()*-0.0833847);
}

double NNfunction_sb_dLsR::synapse0x2cd9690() {
   return (neuron0x2cb89c0()*-0.069435);
}

double NNfunction_sb_dLsR::synapse0x2cd96d0() {
   return (neuron0x2cb9390()*0.0616845);
}

double NNfunction_sb_dLsR::synapse0x2cd9710() {
   return (neuron0x2cb1ee0()*-0.00257547);
}

double NNfunction_sb_dLsR::synapse0x2cd9750() {
   return (neuron0x2cb28b0()*0.0520095);
}

double NNfunction_sb_dLsR::synapse0x2cd9790() {
   return (neuron0x2cbc120()*-0.215956);
}

double NNfunction_sb_dLsR::synapse0x2cd97d0() {
   return (neuron0x2cbcaf0()*-0.0535464);
}

double NNfunction_sb_dLsR::synapse0x2cd9810() {
   return (neuron0x2cbd4c0()*-0.134168);
}

double NNfunction_sb_dLsR::synapse0x2cd9850() {
   return (neuron0x2cbde90()*0.591749);
}

double NNfunction_sb_dLsR::synapse0x2cd9890() {
   return (neuron0x2cbe860()*-0.0292972);
}

double NNfunction_sb_dLsR::synapse0x2cd98d0() {
   return (neuron0x2cbf230()*-0.138824);
}

double NNfunction_sb_dLsR::synapse0x2cd9910() {
   return (neuron0x2cbfc00()*0.0692196);
}

double NNfunction_sb_dLsR::synapse0x2cd9950() {
   return (neuron0x2cc05d0()*0.0945204);
}

double NNfunction_sb_dLsR::synapse0x2cd9500() {
   return (neuron0x2cb6660()*-0.111665);
}

double NNfunction_sb_dLsR::synapse0x2cd9540() {
   return (neuron0x2cc31b0()*0.21464);
}

double NNfunction_sb_dLsR::synapse0x2cd9580() {
   return (neuron0x2cc3b80()*-0.109929);
}

double NNfunction_sb_dLsR::synapse0x2cd95c0() {
   return (neuron0x2cc4550()*1.14578);
}

double NNfunction_sb_dLsR::synapse0x2cd9ba0() {
   return (neuron0x2cc4f20()*-0.0952085);
}

double NNfunction_sb_dLsR::synapse0x2cd9be0() {
   return (neuron0x2cc58f0()*0.117939);
}

double NNfunction_sb_dLsR::synapse0x2cd9c20() {
   return (neuron0x2cc62c0()*0.0790397);
}

double NNfunction_sb_dLsR::synapse0x2cd9c60() {
   return (neuron0x2cc6c90()*0.137211);
}

double NNfunction_sb_dLsR::synapse0x2cd9ca0() {
   return (neuron0x2cc7660()*-0.0670126);
}

double NNfunction_sb_dLsR::synapse0x2cd9ce0() {
   return (neuron0x2cc8240()*0.0805588);
}

double NNfunction_sb_dLsR::synapse0x2cd9d20() {
   return (neuron0x2cc8c10()*-0.0350229);
}

double NNfunction_sb_dLsR::synapse0x2cd9d60() {
   return (neuron0x2cb9a90()*0.107249);
}

double NNfunction_sb_dLsR::synapse0x2cd9da0() {
   return (neuron0x2cba460()*-0.100264);
}

double NNfunction_sb_dLsR::synapse0x2cd9de0() {
   return (neuron0x2cbae30()*-2.30176);
}

double NNfunction_sb_dLsR::synapse0x2cd9e20() {
   return (neuron0x2ccd470()*0.123424);
}

double NNfunction_sb_dLsR::synapse0x2cd9e60() {
   return (neuron0x2ccdd20()*-0.0717399);
}

double NNfunction_sb_dLsR::synapse0x2cd9ea0() {
   return (neuron0x2cce6f0()*0.677116);
}

double NNfunction_sb_dLsR::synapse0x2cd9ee0() {
   return (neuron0x2ccf0c0()*1.30033);
}

double NNfunction_sb_dLsR::synapse0x2cda140() {
   return (neuron0x2cd62c0()*-6.20569);
}

double NNfunction_sb_dLsR::synapse0x2cda180() {
   return (neuron0x2cd6660()*-3.61283);
}

double NNfunction_sb_dLsR::synapse0x2cda1c0() {
   return (neuron0x2cd6b00()*-4.01949);
}

double NNfunction_sb_dLsR::synapse0x2cda200() {
   return (neuron0x2cd7c60()*7.09485);
}

double NNfunction_sb_dLsR::synapse0x2cda240() {
   return (neuron0x2cd8dc0()*-4.66512);
}

