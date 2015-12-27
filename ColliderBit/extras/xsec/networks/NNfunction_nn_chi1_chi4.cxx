#include "NNfunction_nn_chi1_chi4.h"
#include <cmath>

double NNfunction_nn_chi1_chi4::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.3114)/14.8053;
   input1 = (in1 - 10.1511)/224.036;
   input2 = (in2 - 192.983)/184.803;
   input3 = (in3 - 186.569)/640.272;
   input4 = (in4 - 900.632)/787.135;
   input5 = (in5 - 881.392)/831.768;
   input6 = (in6 - 884.877)/831.703;
   input7 = (in7 - 874.482)/810.561;
   input8 = (in8 - 878.712)/850.292;
   input9 = (in9 - 869.416)/842.43;
   input10 = (in10 - 860.932)/824.119;
   input11 = (in11 - 726.874)/711.169;
   input12 = (in12 - 821.089)/764.083;
   input13 = (in13 - 616.469)/513.325;
   input14 = (in14 - 811.725)/731.732;
   input15 = (in15 - 811.353)/729.111;
   input16 = (in16 - 554.72)/475.104;
   input17 = (in17 - 827.793)/775.003;
   input18 = (in18 - 831.289)/780.627;
   input19 = (in19 - 805.987)/734.151;
   input20 = (in20 - -140.941)/392.919;
   input21 = (in21 - -181.305)/858.13;
   input22 = (in22 - 7.44662)/897.638;
   input23 = (in23 - 9.75708)/251.557;
   switch(index) {
     case 0:
         return neuron0x3000aa0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_chi4::Value(int index, double* input) {
   input0 = (input[0] - 24.3114)/14.8053;
   input1 = (input[1] - 10.1511)/224.036;
   input2 = (input[2] - 192.983)/184.803;
   input3 = (input[3] - 186.569)/640.272;
   input4 = (input[4] - 900.632)/787.135;
   input5 = (input[5] - 881.392)/831.768;
   input6 = (input[6] - 884.877)/831.703;
   input7 = (input[7] - 874.482)/810.561;
   input8 = (input[8] - 878.712)/850.292;
   input9 = (input[9] - 869.416)/842.43;
   input10 = (input[10] - 860.932)/824.119;
   input11 = (input[11] - 726.874)/711.169;
   input12 = (input[12] - 821.089)/764.083;
   input13 = (input[13] - 616.469)/513.325;
   input14 = (input[14] - 811.725)/731.732;
   input15 = (input[15] - 811.353)/729.111;
   input16 = (input[16] - 554.72)/475.104;
   input17 = (input[17] - 827.793)/775.003;
   input18 = (input[18] - 831.289)/780.627;
   input19 = (input[19] - 805.987)/734.151;
   input20 = (input[20] - -140.941)/392.919;
   input21 = (input[21] - -181.305)/858.13;
   input22 = (input[22] - 7.44662)/897.638;
   input23 = (input[23] - 9.75708)/251.557;
   switch(index) {
     case 0:
         return neuron0x3000aa0();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_chi4::neuron0x2fccc60() {
   return input0;
}

double NNfunction_nn_chi1_chi4::neuron0x2fccf10() {
   return input1;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcd250() {
   return input2;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcd590() {
   return input3;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcd8d0() {
   return input4;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcdc10() {
   return input5;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcdf50() {
   return input6;
}

double NNfunction_nn_chi1_chi4::neuron0x2fce290() {
   return input7;
}

double NNfunction_nn_chi1_chi4::neuron0x2fce5d0() {
   return input8;
}

double NNfunction_nn_chi1_chi4::neuron0x2fce910() {
   return input9;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcec50() {
   return input10;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcef90() {
   return input11;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcf2d0() {
   return input12;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcf610() {
   return input13;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcf950() {
   return input14;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcfc90() {
   return input15;
}

double NNfunction_nn_chi1_chi4::neuron0x2fcffd0() {
   return input16;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd0530() {
   return input17;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd0750() {
   return input18;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd0a90() {
   return input19;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd0dd0() {
   return input20;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd1110() {
   return input21;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd1450() {
   return input22;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd1790() {
   return input23;
}

double NNfunction_nn_chi1_chi4::input0x2fd1c00() {
   double input = 0.434697;
   input += synapse0x2fccbe0();
   input += synapse0x2fccc20();
   input += synapse0x2fd1eb0();
   input += synapse0x2fd1ef0();
   input += synapse0x2fd1f30();
   input += synapse0x2fd1f70();
   input += synapse0x2fd1fb0();
   input += synapse0x2fd1ff0();
   input += synapse0x2fd2030();
   input += synapse0x2fd2070();
   input += synapse0x2fd20b0();
   input += synapse0x2fd20f0();
   input += synapse0x2fd2130();
   input += synapse0x2fd2170();
   input += synapse0x2fd21b0();
   input += synapse0x2fd21f0();
   input += synapse0x2fccb50();
   input += synapse0x2fccb90();
   input += synapse0x2d87d40();
   input += synapse0x2d87d80();
   input += synapse0x2fd2450();
   input += synapse0x2fd2490();
   input += synapse0x2fd24d0();
   input += synapse0x2fd2510();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd1c00() {
   double input = input0x2fd1c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd2550() {
   double input = -0.0261727;
   input += synapse0x2fd2890();
   input += synapse0x2fd28d0();
   input += synapse0x2fd2910();
   input += synapse0x2fd2950();
   input += synapse0x2fd2990();
   input += synapse0x2fd29d0();
   input += synapse0x2fd2a10();
   input += synapse0x2fd2a50();
   input += synapse0x2fd2a90();
   input += synapse0x2fd2340();
   input += synapse0x2fd2380();
   input += synapse0x2fd23c0();
   input += synapse0x2fd2400();
   input += synapse0x2fd2ce0();
   input += synapse0x2fd2d20();
   input += synapse0x2fd2d60();
   input += synapse0x2fd26e0();
   input += synapse0x2fd2720();
   input += synapse0x2fd2eb0();
   input += synapse0x2fd2ef0();
   input += synapse0x2fd2f30();
   input += synapse0x2fd2f70();
   input += synapse0x2fd2fb0();
   input += synapse0x2fd2ff0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd2550() {
   double input = input0x2fd2550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd3030() {
   double input = 1.86576;
   input += synapse0x2fd3370();
   input += synapse0x2fd33b0();
   input += synapse0x2fd33f0();
   input += synapse0x2fd3430();
   input += synapse0x2fd3470();
   input += synapse0x2fd34b0();
   input += synapse0x2fd34f0();
   input += synapse0x2fd3530();
   input += synapse0x2fd3570();
   input += synapse0x2fd35b0();
   input += synapse0x2fd35f0();
   input += synapse0x2fd3630();
   input += synapse0x2fd3670();
   input += synapse0x2fd36b0();
   input += synapse0x2fd36f0();
   input += synapse0x2fd3730();
   input += synapse0x2fd31c0();
   input += synapse0x2fd3200();
   input += synapse0x2fbbcd0();
   input += synapse0x2d95c20();
   input += synapse0x2d95c60();
   input += synapse0x2eb1170();
   input += synapse0x2eb11b0();
   input += synapse0x2fcc9c0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd3030() {
   double input = input0x2fd3030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2d96380() {
   double input = 1.17152;
   input += synapse0x2d96510();
   input += synapse0x2fd2bf0();
   input += synapse0x2fd2c30();
   input += synapse0x2fd2c70();
   input += synapse0x2fd3880();
   input += synapse0x2fd38c0();
   input += synapse0x2fd3900();
   input += synapse0x2fd3940();
   input += synapse0x2fd3980();
   input += synapse0x2fd39c0();
   input += synapse0x2fd3a00();
   input += synapse0x2fd3a40();
   input += synapse0x2fd3a80();
   input += synapse0x2fd3ac0();
   input += synapse0x2fd3b00();
   input += synapse0x2fd3b40();
   input += synapse0x2fcca00();
   input += synapse0x2fcca40();
   input += synapse0x2fcca80();
   input += synapse0x2fd3c90();
   input += synapse0x2fd3cd0();
   input += synapse0x2fd3d10();
   input += synapse0x2fd3d50();
   input += synapse0x2fd3d90();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2d96380() {
   double input = input0x2d96380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd3dd0() {
   double input = -0.371886;
   input += synapse0x2fd4110();
   input += synapse0x2fd4150();
   input += synapse0x2fd4190();
   input += synapse0x2fd41d0();
   input += synapse0x2fd4210();
   input += synapse0x2fd4250();
   input += synapse0x2fd4290();
   input += synapse0x2fd42d0();
   input += synapse0x2fd4310();
   input += synapse0x2fd4350();
   input += synapse0x2fd4390();
   input += synapse0x2fd43d0();
   input += synapse0x2fd4410();
   input += synapse0x2fd4450();
   input += synapse0x2fd4490();
   input += synapse0x2fd44d0();
   input += synapse0x2fd3f60();
   input += synapse0x2fd3fa0();
   input += synapse0x2fd4620();
   input += synapse0x2fd4660();
   input += synapse0x2fd46a0();
   input += synapse0x2fd46e0();
   input += synapse0x2fd4720();
   input += synapse0x2fd4760();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd3dd0() {
   double input = input0x2fd3dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd47a0() {
   double input = -1.17789;
   input += synapse0x2fd4ae0();
   input += synapse0x2fd4b20();
   input += synapse0x2fd4b60();
   input += synapse0x2fd4ba0();
   input += synapse0x2fd4be0();
   input += synapse0x2fd4c20();
   input += synapse0x2fd4c60();
   input += synapse0x2fd4ca0();
   input += synapse0x2fd4ce0();
   input += synapse0x2d95f70();
   input += synapse0x2d95fb0();
   input += synapse0x2d95ff0();
   input += synapse0x2d96030();
   input += synapse0x2d96070();
   input += synapse0x2d960b0();
   input += synapse0x2d960f0();
   input += synapse0x2fd4930();
   input += synapse0x2fd4970();
   input += synapse0x2d96240();
   input += synapse0x2d96280();
   input += synapse0x2d962c0();
   input += synapse0x2d96300();
   input += synapse0x2d96340();
   input += synapse0x2fd5530();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd47a0() {
   double input = input0x2fd47a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd5570() {
   double input = -0.353745;
   input += synapse0x2fd58b0();
   input += synapse0x2fd58f0();
   input += synapse0x2fd5930();
   input += synapse0x2fd5970();
   input += synapse0x2fd59b0();
   input += synapse0x2fd59f0();
   input += synapse0x2fd5a30();
   input += synapse0x2fd5a70();
   input += synapse0x2fd5ab0();
   input += synapse0x2fd5af0();
   input += synapse0x2fd5b30();
   input += synapse0x2fd5b70();
   input += synapse0x2fd5bb0();
   input += synapse0x2fd5bf0();
   input += synapse0x2fd5c30();
   input += synapse0x2fd5c70();
   input += synapse0x2fd5700();
   input += synapse0x2fd5740();
   input += synapse0x2fd5dc0();
   input += synapse0x2fd5e00();
   input += synapse0x2fd5e40();
   input += synapse0x2fd5e80();
   input += synapse0x2fd5ec0();
   input += synapse0x2fd5f00();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd5570() {
   double input = input0x2fd5570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd5f40() {
   double input = -0.150636;
   input += synapse0x2fd6280();
   input += synapse0x2fd62c0();
   input += synapse0x2fd6300();
   input += synapse0x2fd6340();
   input += synapse0x2fd6380();
   input += synapse0x2fd63c0();
   input += synapse0x2fd6400();
   input += synapse0x2fd6440();
   input += synapse0x2fd6480();
   input += synapse0x2fd64c0();
   input += synapse0x2fd6500();
   input += synapse0x2fd6540();
   input += synapse0x2fd6580();
   input += synapse0x2fd65c0();
   input += synapse0x2fd6600();
   input += synapse0x2fd6640();
   input += synapse0x2fd60d0();
   input += synapse0x2fd6110();
   input += synapse0x2fd6790();
   input += synapse0x2fd67d0();
   input += synapse0x2fd6810();
   input += synapse0x2fd6850();
   input += synapse0x2fd6890();
   input += synapse0x2fd68d0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd5f40() {
   double input = input0x2fd5f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd6910() {
   double input = 1.05559;
   input += synapse0x2fd0420();
   input += synapse0x2fd0460();
   input += synapse0x2fd04a0();
   input += synapse0x2fd04e0();
   input += synapse0x2fd6e60();
   input += synapse0x2fd6ea0();
   input += synapse0x2fd6ee0();
   input += synapse0x2fd6f20();
   input += synapse0x2fd6f60();
   input += synapse0x2fd6fa0();
   input += synapse0x2fd6fe0();
   input += synapse0x2fd7020();
   input += synapse0x2fd7060();
   input += synapse0x2fd70a0();
   input += synapse0x2fd70e0();
   input += synapse0x2fd7120();
   input += synapse0x2fd6aa0();
   input += synapse0x2fd6ae0();
   input += synapse0x2fd7270();
   input += synapse0x2fd72b0();
   input += synapse0x2fd72f0();
   input += synapse0x2fd7330();
   input += synapse0x2fd7370();
   input += synapse0x2fd73b0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd6910() {
   double input = input0x2fd6910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd73f0() {
   double input = 1.29324;
   input += synapse0x2fd7730();
   input += synapse0x2fd7770();
   input += synapse0x2fd77b0();
   input += synapse0x2fd77f0();
   input += synapse0x2fd7830();
   input += synapse0x2fd7870();
   input += synapse0x2fd78b0();
   input += synapse0x2fd78f0();
   input += synapse0x2fd7930();
   input += synapse0x2fd7970();
   input += synapse0x2fd79b0();
   input += synapse0x2fd79f0();
   input += synapse0x2fd7a30();
   input += synapse0x2fd7a70();
   input += synapse0x2fd7ab0();
   input += synapse0x2fd7af0();
   input += synapse0x2fd7580();
   input += synapse0x2fd75c0();
   input += synapse0x2fd7c40();
   input += synapse0x2fd7c80();
   input += synapse0x2fd7cc0();
   input += synapse0x2fd7d00();
   input += synapse0x2fd7d40();
   input += synapse0x2fd7d80();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd73f0() {
   double input = input0x2fd73f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd7dc0() {
   double input = -1.08796;
   input += synapse0x2fd8100();
   input += synapse0x2fd8140();
   input += synapse0x2fd8180();
   input += synapse0x2fd81c0();
   input += synapse0x2fd8200();
   input += synapse0x2fd8240();
   input += synapse0x2fd8280();
   input += synapse0x2fd82c0();
   input += synapse0x2fd8300();
   input += synapse0x2fd8340();
   input += synapse0x2fd8380();
   input += synapse0x2fd83c0();
   input += synapse0x2fd8400();
   input += synapse0x2fd8440();
   input += synapse0x2fd8480();
   input += synapse0x2fd84c0();
   input += synapse0x2fd7f50();
   input += synapse0x2fd7f90();
   input += synapse0x2fd4d20();
   input += synapse0x2fd4d60();
   input += synapse0x2fd4da0();
   input += synapse0x2fd4de0();
   input += synapse0x2fd4e20();
   input += synapse0x2fd4e60();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd7dc0() {
   double input = input0x2fd7dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd4ea0() {
   double input = -1.43588;
   input += synapse0x2fd51e0();
   input += synapse0x2fd5220();
   input += synapse0x2fd5260();
   input += synapse0x2fd52a0();
   input += synapse0x2fd52e0();
   input += synapse0x2fd5320();
   input += synapse0x2fd5360();
   input += synapse0x2fd53a0();
   input += synapse0x2fd53e0();
   input += synapse0x2fd5420();
   input += synapse0x2fd5460();
   input += synapse0x2fd54a0();
   input += synapse0x2fd54e0();
   input += synapse0x2fd9620();
   input += synapse0x2fd9660();
   input += synapse0x2fd96a0();
   input += synapse0x2fd5030();
   input += synapse0x2fd5070();
   input += synapse0x2fd97f0();
   input += synapse0x2fd9830();
   input += synapse0x2fd9870();
   input += synapse0x2fd98b0();
   input += synapse0x2fd98f0();
   input += synapse0x2fd9930();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd4ea0() {
   double input = input0x2fd4ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd9970() {
   double input = -1.54288;
   input += synapse0x2fd9cb0();
   input += synapse0x2fd9cf0();
   input += synapse0x2fd9d30();
   input += synapse0x2fd9d70();
   input += synapse0x2fd9db0();
   input += synapse0x2fd9df0();
   input += synapse0x2fd9e30();
   input += synapse0x2fd9e70();
   input += synapse0x2fd9eb0();
   input += synapse0x2fd9ef0();
   input += synapse0x2fd9f30();
   input += synapse0x2fd9f70();
   input += synapse0x2fd9fb0();
   input += synapse0x2fd9ff0();
   input += synapse0x2fda030();
   input += synapse0x2fda070();
   input += synapse0x2fd9b00();
   input += synapse0x2fd9b40();
   input += synapse0x2fda1c0();
   input += synapse0x2fda200();
   input += synapse0x2fda240();
   input += synapse0x2fda280();
   input += synapse0x2fda2c0();
   input += synapse0x2fda300();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd9970() {
   double input = input0x2fd9970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fda340() {
   double input = 0.00414897;
   input += synapse0x2fda680();
   input += synapse0x2fda6c0();
   input += synapse0x2fda700();
   input += synapse0x2fda740();
   input += synapse0x2fda780();
   input += synapse0x2fda7c0();
   input += synapse0x2fda800();
   input += synapse0x2fda840();
   input += synapse0x2fda880();
   input += synapse0x2fda8c0();
   input += synapse0x2fda900();
   input += synapse0x2fda940();
   input += synapse0x2fda980();
   input += synapse0x2fda9c0();
   input += synapse0x2fdaa00();
   input += synapse0x2fdaa40();
   input += synapse0x2fda4d0();
   input += synapse0x2fda510();
   input += synapse0x2fdab90();
   input += synapse0x2fdabd0();
   input += synapse0x2fdac10();
   input += synapse0x2fdac50();
   input += synapse0x2fdac90();
   input += synapse0x2fdacd0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fda340() {
   double input = input0x2fda340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fdad10() {
   double input = -0.636993;
   input += synapse0x2fdb050();
   input += synapse0x2fdb090();
   input += synapse0x2fdb0d0();
   input += synapse0x2fdb110();
   input += synapse0x2fdb150();
   input += synapse0x2fdb190();
   input += synapse0x2fdb1d0();
   input += synapse0x2fdb210();
   input += synapse0x2fdb250();
   input += synapse0x2fdb290();
   input += synapse0x2fdb2d0();
   input += synapse0x2fdb310();
   input += synapse0x2fdb350();
   input += synapse0x2fdb390();
   input += synapse0x2fdb3d0();
   input += synapse0x2fdb410();
   input += synapse0x2fdaea0();
   input += synapse0x2fdaee0();
   input += synapse0x2fdb560();
   input += synapse0x2fdb5a0();
   input += synapse0x2fdb5e0();
   input += synapse0x2fdb620();
   input += synapse0x2fdb660();
   input += synapse0x2fdb6a0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fdad10() {
   double input = input0x2fdad10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fdb6e0() {
   double input = -2.06995;
   input += synapse0x2fdba20();
   input += synapse0x2fccdf0();
   input += synapse0x2fcce30();
   input += synapse0x2fcd130();
   input += synapse0x2fcd170();
   input += synapse0x2fcd470();
   input += synapse0x2fcd4b0();
   input += synapse0x2fcd7b0();
   input += synapse0x2fcd7f0();
   input += synapse0x2fcdaf0();
   input += synapse0x2fcdb30();
   input += synapse0x2fcde30();
   input += synapse0x2fcde70();
   input += synapse0x2fce170();
   input += synapse0x2fce1b0();
   input += synapse0x2fce4b0();
   input += synapse0x2fce4f0();
   input += synapse0x2fce7f0();
   input += synapse0x2fce830();
   input += synapse0x2fceb30();
   input += synapse0x2fceb70();
   input += synapse0x2fcee70();
   input += synapse0x2fceeb0();
   input += synapse0x2fcf1b0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fdb6e0() {
   double input = input0x2fdb6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fdd4f0() {
   double input = 2.06208;
   input += synapse0x2fcf1f0();
   input += synapse0x2fcfeb0();
   input += synapse0x2fcfef0();
   input += synapse0x2fdb870();
   input += synapse0x2fdb8b0();
   input += synapse0x2fd01f0();
   input += synapse0x2fd0230();
   input += synapse0x2d87c20();
   input += synapse0x2d87c60();
   input += synapse0x2fd0970();
   input += synapse0x2fd09b0();
   input += synapse0x2fd0cb0();
   input += synapse0x2fd0cf0();
   input += synapse0x2fd0ff0();
   input += synapse0x2fd1030();
   input += synapse0x2fd1330();
   input += synapse0x2fd1370();
   input += synapse0x2fd1670();
   input += synapse0x2fd16b0();
   input += synapse0x2fd19b0();
   input += synapse0x2fd19f0();
   input += synapse0x2fcf4f0();
   input += synapse0x2fcf530();
   input += synapse0x2fdd790();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fdd4f0() {
   double input = input0x2fdd4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fdd7d0() {
   double input = 3.38942;
   input += synapse0x2fddb10();
   input += synapse0x2fddb50();
   input += synapse0x2fddb90();
   input += synapse0x2fddbd0();
   input += synapse0x2fddc10();
   input += synapse0x2fddc50();
   input += synapse0x2fddc90();
   input += synapse0x2fddcd0();
   input += synapse0x2fddd10();
   input += synapse0x2fddd50();
   input += synapse0x2fddd90();
   input += synapse0x2fdddd0();
   input += synapse0x2fdde10();
   input += synapse0x2fdde50();
   input += synapse0x2fdde90();
   input += synapse0x2fdded0();
   input += synapse0x2fdd960();
   input += synapse0x2fdd9a0();
   input += synapse0x2fde020();
   input += synapse0x2fde060();
   input += synapse0x2fde0a0();
   input += synapse0x2fde0e0();
   input += synapse0x2fde120();
   input += synapse0x2fde160();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fdd7d0() {
   double input = input0x2fdd7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fde1a0() {
   double input = -0.836215;
   input += synapse0x2fde4e0();
   input += synapse0x2fde520();
   input += synapse0x2fde560();
   input += synapse0x2fde5a0();
   input += synapse0x2fde5e0();
   input += synapse0x2fde620();
   input += synapse0x2fde660();
   input += synapse0x2fde6a0();
   input += synapse0x2fde6e0();
   input += synapse0x2fde720();
   input += synapse0x2fde760();
   input += synapse0x2fde7a0();
   input += synapse0x2fde7e0();
   input += synapse0x2fde820();
   input += synapse0x2fde860();
   input += synapse0x2fde8a0();
   input += synapse0x2fde330();
   input += synapse0x2fde370();
   input += synapse0x2fde9f0();
   input += synapse0x2fdea30();
   input += synapse0x2fdea70();
   input += synapse0x2fdeab0();
   input += synapse0x2fdeaf0();
   input += synapse0x2fdeb30();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fde1a0() {
   double input = input0x2fde1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fdeb70() {
   double input = -1.33991;
   input += synapse0x2fdeeb0();
   input += synapse0x2fdeef0();
   input += synapse0x2fdef30();
   input += synapse0x2fdef70();
   input += synapse0x2fdefb0();
   input += synapse0x2fdeff0();
   input += synapse0x2fdf030();
   input += synapse0x2fdf070();
   input += synapse0x2fdf0b0();
   input += synapse0x2fdf0f0();
   input += synapse0x2fdf130();
   input += synapse0x2fdf170();
   input += synapse0x2fdf1b0();
   input += synapse0x2fdf1f0();
   input += synapse0x2fdf230();
   input += synapse0x2fdf270();
   input += synapse0x2fded00();
   input += synapse0x2fded40();
   input += synapse0x2fdf3c0();
   input += synapse0x2fdf400();
   input += synapse0x2fdf440();
   input += synapse0x2fdf480();
   input += synapse0x2fdf4c0();
   input += synapse0x2fdf500();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fdeb70() {
   double input = input0x2fdeb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fdf540() {
   double input = -2.94809;
   input += synapse0x2fdf880();
   input += synapse0x2fdf8c0();
   input += synapse0x2fdf900();
   input += synapse0x2fdf940();
   input += synapse0x2fdf980();
   input += synapse0x2fdf9c0();
   input += synapse0x2fdfa00();
   input += synapse0x2fdfa40();
   input += synapse0x2fdfa80();
   input += synapse0x2fdfac0();
   input += synapse0x2fdfb00();
   input += synapse0x2fdfb40();
   input += synapse0x2fdfb80();
   input += synapse0x2fdfbc0();
   input += synapse0x2fdfc00();
   input += synapse0x2fdfc40();
   input += synapse0x2fdf6d0();
   input += synapse0x2fdf710();
   input += synapse0x2fdfd90();
   input += synapse0x2fdfdd0();
   input += synapse0x2fdfe10();
   input += synapse0x2fdfe50();
   input += synapse0x2fdfe90();
   input += synapse0x2fdfed0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fdf540() {
   double input = input0x2fdf540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fdff10() {
   double input = 4.77143;
   input += synapse0x2fe0250();
   input += synapse0x2fe0290();
   input += synapse0x2fe02d0();
   input += synapse0x2fe0310();
   input += synapse0x2fe0350();
   input += synapse0x2fe0390();
   input += synapse0x2fe03d0();
   input += synapse0x2fe0410();
   input += synapse0x2fe0450();
   input += synapse0x2fd8610();
   input += synapse0x2fd8650();
   input += synapse0x2fd8690();
   input += synapse0x2fd86d0();
   input += synapse0x2fd8710();
   input += synapse0x2fd8750();
   input += synapse0x2fd8790();
   input += synapse0x2fe00a0();
   input += synapse0x2fe00e0();
   input += synapse0x2fd88e0();
   input += synapse0x2fd8920();
   input += synapse0x2fd8960();
   input += synapse0x2fd89a0();
   input += synapse0x2fd89e0();
   input += synapse0x2fd8a20();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fdff10() {
   double input = input0x2fdff10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd8a60() {
   double input = -0.762109;
   input += synapse0x2fd8da0();
   input += synapse0x2fd8de0();
   input += synapse0x2fd8e20();
   input += synapse0x2fd8e60();
   input += synapse0x2fd8ea0();
   input += synapse0x2fd8ee0();
   input += synapse0x2fd8f20();
   input += synapse0x2fd8f60();
   input += synapse0x2fd8fa0();
   input += synapse0x2fd8fe0();
   input += synapse0x2fd9020();
   input += synapse0x2fd9060();
   input += synapse0x2fd90a0();
   input += synapse0x2fd90e0();
   input += synapse0x2fd9120();
   input += synapse0x2fd9160();
   input += synapse0x2fd8bf0();
   input += synapse0x2fd8c30();
   input += synapse0x2fd92b0();
   input += synapse0x2fd92f0();
   input += synapse0x2fd9330();
   input += synapse0x2fd9370();
   input += synapse0x2fd93b0();
   input += synapse0x2fd93f0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd8a60() {
   double input = input0x2fd8a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fd9430() {
   double input = -1.34913;
   input += synapse0x2fd95c0();
   input += synapse0x2fe2650();
   input += synapse0x2fe2690();
   input += synapse0x2fe26d0();
   input += synapse0x2fe2710();
   input += synapse0x2fe2750();
   input += synapse0x2fe2790();
   input += synapse0x2fe27d0();
   input += synapse0x2fe2810();
   input += synapse0x2fe2850();
   input += synapse0x2fe2890();
   input += synapse0x2fe28d0();
   input += synapse0x2fe2910();
   input += synapse0x2fe2950();
   input += synapse0x2fe2990();
   input += synapse0x2fe29d0();
   input += synapse0x2fe24a0();
   input += synapse0x2fe24e0();
   input += synapse0x2fe2b20();
   input += synapse0x2fe2b60();
   input += synapse0x2fe2ba0();
   input += synapse0x2fe2be0();
   input += synapse0x2fe2c20();
   input += synapse0x2fe2c60();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fd9430() {
   double input = input0x2fd9430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe2ca0() {
   double input = 2.97923;
   input += synapse0x2fe2fe0();
   input += synapse0x2fe3020();
   input += synapse0x2fe3060();
   input += synapse0x2fe30a0();
   input += synapse0x2fe30e0();
   input += synapse0x2fe3120();
   input += synapse0x2fe3160();
   input += synapse0x2fe31a0();
   input += synapse0x2fe31e0();
   input += synapse0x2fe3220();
   input += synapse0x2fe3260();
   input += synapse0x2fe32a0();
   input += synapse0x2fe32e0();
   input += synapse0x2fe3320();
   input += synapse0x2fe3360();
   input += synapse0x2fe33a0();
   input += synapse0x2fe2e30();
   input += synapse0x2fe2e70();
   input += synapse0x2fe34f0();
   input += synapse0x2fe3530();
   input += synapse0x2fe3570();
   input += synapse0x2fe35b0();
   input += synapse0x2fe35f0();
   input += synapse0x2fe3630();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe2ca0() {
   double input = input0x2fe2ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe3670() {
   double input = 1.42921;
   input += synapse0x2fe39b0();
   input += synapse0x2fe39f0();
   input += synapse0x2fe3a30();
   input += synapse0x2fe3a70();
   input += synapse0x2fe3ab0();
   input += synapse0x2fe3af0();
   input += synapse0x2fe3b30();
   input += synapse0x2fe3b70();
   input += synapse0x2fe3bb0();
   input += synapse0x2fe3bf0();
   input += synapse0x2fe3c30();
   input += synapse0x2fe3c70();
   input += synapse0x2fe3cb0();
   input += synapse0x2fe3cf0();
   input += synapse0x2fe3d30();
   input += synapse0x2fe3d70();
   input += synapse0x2fe3800();
   input += synapse0x2fe3840();
   input += synapse0x2fe3ec0();
   input += synapse0x2fe3f00();
   input += synapse0x2fe3f40();
   input += synapse0x2fe3f80();
   input += synapse0x2fe3fc0();
   input += synapse0x2fe4000();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe3670() {
   double input = input0x2fe3670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe4040() {
   double input = 1.50668;
   input += synapse0x2fe4380();
   input += synapse0x2fe43c0();
   input += synapse0x2fe4400();
   input += synapse0x2fe4440();
   input += synapse0x2fe4480();
   input += synapse0x2fe44c0();
   input += synapse0x2fe4500();
   input += synapse0x2fe4540();
   input += synapse0x2fe4580();
   input += synapse0x2fe45c0();
   input += synapse0x2fe4600();
   input += synapse0x2fe4640();
   input += synapse0x2fe4680();
   input += synapse0x2fe46c0();
   input += synapse0x2fe4700();
   input += synapse0x2fe4740();
   input += synapse0x2fe41d0();
   input += synapse0x2fe4210();
   input += synapse0x2fe4890();
   input += synapse0x2fe48d0();
   input += synapse0x2fe4910();
   input += synapse0x2fe4950();
   input += synapse0x2fe4990();
   input += synapse0x2fe49d0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe4040() {
   double input = input0x2fe4040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe4a10() {
   double input = 1.16278;
   input += synapse0x2fe4d50();
   input += synapse0x2fe4d90();
   input += synapse0x2fe4dd0();
   input += synapse0x2fe4e10();
   input += synapse0x2fe4e50();
   input += synapse0x2fe4e90();
   input += synapse0x2fe4ed0();
   input += synapse0x2fe4f10();
   input += synapse0x2fe4f50();
   input += synapse0x2fe4f90();
   input += synapse0x2fe4fd0();
   input += synapse0x2fe5010();
   input += synapse0x2fe5050();
   input += synapse0x2fe5090();
   input += synapse0x2fe50d0();
   input += synapse0x2fe5110();
   input += synapse0x2fe4ba0();
   input += synapse0x2fe4be0();
   input += synapse0x2fe5260();
   input += synapse0x2fe52a0();
   input += synapse0x2fe52e0();
   input += synapse0x2fe5320();
   input += synapse0x2fe5360();
   input += synapse0x2fe53a0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe4a10() {
   double input = input0x2fe4a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe53e0() {
   double input = -0.815813;
   input += synapse0x2fe5720();
   input += synapse0x2fe5760();
   input += synapse0x2fe57a0();
   input += synapse0x2fe57e0();
   input += synapse0x2fe5820();
   input += synapse0x2fe5860();
   input += synapse0x2fe58a0();
   input += synapse0x2fe58e0();
   input += synapse0x2fe5920();
   input += synapse0x2fe5960();
   input += synapse0x2fe59a0();
   input += synapse0x2fe59e0();
   input += synapse0x2fe5a20();
   input += synapse0x2fe5a60();
   input += synapse0x2fe5aa0();
   input += synapse0x2fe5ae0();
   input += synapse0x2fe5570();
   input += synapse0x2fe55b0();
   input += synapse0x2fe5c30();
   input += synapse0x2fe5c70();
   input += synapse0x2fe5cb0();
   input += synapse0x2fe5cf0();
   input += synapse0x2fe5d30();
   input += synapse0x2fe5d70();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe53e0() {
   double input = input0x2fe53e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe5db0() {
   double input = -0.589073;
   input += synapse0x2fe60f0();
   input += synapse0x2fe6130();
   input += synapse0x2fe6170();
   input += synapse0x2fe61b0();
   input += synapse0x2fe61f0();
   input += synapse0x2fe6230();
   input += synapse0x2fe6270();
   input += synapse0x2fe62b0();
   input += synapse0x2fe62f0();
   input += synapse0x2fe6330();
   input += synapse0x2fe6370();
   input += synapse0x2fe63b0();
   input += synapse0x2fe63f0();
   input += synapse0x2fe6430();
   input += synapse0x2fe6470();
   input += synapse0x2fe64b0();
   input += synapse0x2fe5f40();
   input += synapse0x2fe5f80();
   input += synapse0x2fe6600();
   input += synapse0x2fe6640();
   input += synapse0x2fe6680();
   input += synapse0x2fe66c0();
   input += synapse0x2fe6700();
   input += synapse0x2fe6740();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe5db0() {
   double input = input0x2fe5db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe6780() {
   double input = 0.72536;
   input += synapse0x2fe6ac0();
   input += synapse0x2fe6b00();
   input += synapse0x2fe6b40();
   input += synapse0x2fe6b80();
   input += synapse0x2fe6bc0();
   input += synapse0x2fe6c00();
   input += synapse0x2fe6c40();
   input += synapse0x2fe6c80();
   input += synapse0x2fe6cc0();
   input += synapse0x2fe6d00();
   input += synapse0x2fe6d40();
   input += synapse0x2fe6d80();
   input += synapse0x2fe6dc0();
   input += synapse0x2fe6e00();
   input += synapse0x2fe6e40();
   input += synapse0x2fe6e80();
   input += synapse0x2fe6910();
   input += synapse0x2fe6950();
   input += synapse0x2fe6fd0();
   input += synapse0x2fe7010();
   input += synapse0x2fe7050();
   input += synapse0x2fe7090();
   input += synapse0x2fe70d0();
   input += synapse0x2fe7110();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe6780() {
   double input = input0x2fe6780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe7150() {
   double input = -1.96106;
   input += synapse0x2fe7490();
   input += synapse0x2fdba60();
   input += synapse0x2fdbaa0();
   input += synapse0x2fdbae0();
   input += synapse0x2fdbd30();
   input += synapse0x2fdbd70();
   input += synapse0x2fdbdb0();
   input += synapse0x2fdc000();
   input += synapse0x2fdc040();
   input += synapse0x2fdc290();
   input += synapse0x2fdc2d0();
   input += synapse0x2fdc310();
   input += synapse0x2fdc560();
   input += synapse0x2fdc5a0();
   input += synapse0x2fdc7f0();
   input += synapse0x2fdc830();
   input += synapse0x2fe72e0();
   input += synapse0x2fe7320();
   input += synapse0x2fdc980();
   input += synapse0x2fdce90();
   input += synapse0x2fdced0();
   input += synapse0x2fdcf10();
   input += synapse0x2fdd160();
   input += synapse0x2fdd1a0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe7150() {
   double input = input0x2fe7150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fdd1e0() {
   double input = -2.32002;
   input += synapse0x2fdca50();
   input += synapse0x2fdca90();
   input += synapse0x2fdcad0();
   input += synapse0x2fdcb10();
   input += synapse0x2fdd490();
   input += synapse0x2fe97e0();
   input += synapse0x2fe9820();
   input += synapse0x2fe9860();
   input += synapse0x2fe98a0();
   input += synapse0x2fe98e0();
   input += synapse0x2fe9920();
   input += synapse0x2fe9960();
   input += synapse0x2fe99a0();
   input += synapse0x2fe99e0();
   input += synapse0x2fe9a20();
   input += synapse0x2fe9a60();
   input += synapse0x2fdd370();
   input += synapse0x2fdd3b0();
   input += synapse0x2fe9bb0();
   input += synapse0x2fe9bf0();
   input += synapse0x2fe9c30();
   input += synapse0x2fe9c70();
   input += synapse0x2fe9cb0();
   input += synapse0x2fe9cf0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fdd1e0() {
   double input = input0x2fdd1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe9d30() {
   double input = 0.134971;
   input += synapse0x2fea070();
   input += synapse0x2fea0b0();
   input += synapse0x2fea0f0();
   input += synapse0x2fea130();
   input += synapse0x2fea170();
   input += synapse0x2fea1b0();
   input += synapse0x2fea1f0();
   input += synapse0x2fea230();
   input += synapse0x2fea270();
   input += synapse0x2fea2b0();
   input += synapse0x2fea2f0();
   input += synapse0x2fea330();
   input += synapse0x2fea370();
   input += synapse0x2fea3b0();
   input += synapse0x2fea3f0();
   input += synapse0x2fea430();
   input += synapse0x2fe9ec0();
   input += synapse0x2fe9f00();
   input += synapse0x2fea580();
   input += synapse0x2fea5c0();
   input += synapse0x2fea600();
   input += synapse0x2fea640();
   input += synapse0x2fea680();
   input += synapse0x2fea6c0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe9d30() {
   double input = input0x2fe9d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fea700() {
   double input = -3.14119;
   input += synapse0x2feaa40();
   input += synapse0x2feaa80();
   input += synapse0x2feaac0();
   input += synapse0x2feab00();
   input += synapse0x2feab40();
   input += synapse0x2feab80();
   input += synapse0x2feabc0();
   input += synapse0x2feac00();
   input += synapse0x2feac40();
   input += synapse0x2feac80();
   input += synapse0x2feacc0();
   input += synapse0x2fead00();
   input += synapse0x2fead40();
   input += synapse0x2fead80();
   input += synapse0x2feadc0();
   input += synapse0x2feae00();
   input += synapse0x2fea890();
   input += synapse0x2fea8d0();
   input += synapse0x2feaf50();
   input += synapse0x2feaf90();
   input += synapse0x2feafd0();
   input += synapse0x2feb010();
   input += synapse0x2feb050();
   input += synapse0x2feb090();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fea700() {
   double input = input0x2fea700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2feb0d0() {
   double input = 0.951744;
   input += synapse0x2feb410();
   input += synapse0x2feb450();
   input += synapse0x2feb490();
   input += synapse0x2feb4d0();
   input += synapse0x2feb510();
   input += synapse0x2feb550();
   input += synapse0x2feb590();
   input += synapse0x2feb5d0();
   input += synapse0x2feb610();
   input += synapse0x2feb650();
   input += synapse0x2feb690();
   input += synapse0x2feb6d0();
   input += synapse0x2feb710();
   input += synapse0x2feb750();
   input += synapse0x2feb790();
   input += synapse0x2feb7d0();
   input += synapse0x2feb260();
   input += synapse0x2feb2a0();
   input += synapse0x2feb920();
   input += synapse0x2feb960();
   input += synapse0x2feb9a0();
   input += synapse0x2feb9e0();
   input += synapse0x2feba20();
   input += synapse0x2feba60();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2feb0d0() {
   double input = input0x2feb0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2febaa0() {
   double input = 1.96226;
   input += synapse0x2febde0();
   input += synapse0x2febe20();
   input += synapse0x2febe60();
   input += synapse0x2febea0();
   input += synapse0x2febee0();
   input += synapse0x2febf20();
   input += synapse0x2febf60();
   input += synapse0x2febfa0();
   input += synapse0x2febfe0();
   input += synapse0x2fec020();
   input += synapse0x2fec060();
   input += synapse0x2fec0a0();
   input += synapse0x2fec0e0();
   input += synapse0x2fec120();
   input += synapse0x2fec160();
   input += synapse0x2fec1a0();
   input += synapse0x2febc30();
   input += synapse0x2febc70();
   input += synapse0x2fec2f0();
   input += synapse0x2fec330();
   input += synapse0x2fec370();
   input += synapse0x2fec3b0();
   input += synapse0x2fec3f0();
   input += synapse0x2fec430();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2febaa0() {
   double input = input0x2febaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fec470() {
   double input = 0.401716;
   input += synapse0x2fec7b0();
   input += synapse0x2fec7f0();
   input += synapse0x2fec830();
   input += synapse0x2fec870();
   input += synapse0x2fec8b0();
   input += synapse0x2fec8f0();
   input += synapse0x2fec930();
   input += synapse0x2fec970();
   input += synapse0x2fec9b0();
   input += synapse0x2fec9f0();
   input += synapse0x2feca30();
   input += synapse0x2feca70();
   input += synapse0x2fecab0();
   input += synapse0x2fecaf0();
   input += synapse0x2fecb30();
   input += synapse0x2fecb70();
   input += synapse0x2fec600();
   input += synapse0x2fec640();
   input += synapse0x2feccc0();
   input += synapse0x2fecd00();
   input += synapse0x2fecd40();
   input += synapse0x2fecd80();
   input += synapse0x2fecdc0();
   input += synapse0x2fece00();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fec470() {
   double input = input0x2fec470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fece40() {
   double input = -2.76527;
   input += synapse0x2fed180();
   input += synapse0x2fed1c0();
   input += synapse0x2fed200();
   input += synapse0x2fed240();
   input += synapse0x2fed280();
   input += synapse0x2fed2c0();
   input += synapse0x2fed300();
   input += synapse0x2fed340();
   input += synapse0x2fed380();
   input += synapse0x2fed3c0();
   input += synapse0x2fed400();
   input += synapse0x2fed440();
   input += synapse0x2fed480();
   input += synapse0x2fed4c0();
   input += synapse0x2fed500();
   input += synapse0x2fed540();
   input += synapse0x2fecfd0();
   input += synapse0x2fed010();
   input += synapse0x2fed690();
   input += synapse0x2fed6d0();
   input += synapse0x2fed710();
   input += synapse0x2fed750();
   input += synapse0x2fed790();
   input += synapse0x2fed7d0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fece40() {
   double input = input0x2fece40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fed810() {
   double input = -1.48062;
   input += synapse0x2fedb50();
   input += synapse0x2fedb90();
   input += synapse0x2fedbd0();
   input += synapse0x2fedc10();
   input += synapse0x2fedc50();
   input += synapse0x2fedc90();
   input += synapse0x2fedcd0();
   input += synapse0x2fedd10();
   input += synapse0x2fedd50();
   input += synapse0x2fedd90();
   input += synapse0x2feddd0();
   input += synapse0x2fede10();
   input += synapse0x2fede50();
   input += synapse0x2fede90();
   input += synapse0x2feded0();
   input += synapse0x2fedf10();
   input += synapse0x2fed9a0();
   input += synapse0x2fed9e0();
   input += synapse0x2fee060();
   input += synapse0x2fee0a0();
   input += synapse0x2fee0e0();
   input += synapse0x2fee120();
   input += synapse0x2fee160();
   input += synapse0x2fee1a0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fed810() {
   double input = input0x2fed810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fee1e0() {
   double input = 1.03939;
   input += synapse0x2fd6c50();
   input += synapse0x2fd6c90();
   input += synapse0x2fd6cd0();
   input += synapse0x2fd6d10();
   input += synapse0x2fd6d50();
   input += synapse0x2fd6d90();
   input += synapse0x2fd6dd0();
   input += synapse0x2fd6e10();
   input += synapse0x2fee930();
   input += synapse0x2fee970();
   input += synapse0x2fee9b0();
   input += synapse0x2fee9f0();
   input += synapse0x2feea30();
   input += synapse0x2feea70();
   input += synapse0x2feeab0();
   input += synapse0x2feeaf0();
   input += synapse0x2fee370();
   input += synapse0x2fee3b0();
   input += synapse0x2feec40();
   input += synapse0x2feec80();
   input += synapse0x2feecc0();
   input += synapse0x2feed00();
   input += synapse0x2feed40();
   input += synapse0x2feed80();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fee1e0() {
   double input = input0x2fee1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2feedc0() {
   double input = -0.443982;
   input += synapse0x2fef100();
   input += synapse0x2fef140();
   input += synapse0x2fef180();
   input += synapse0x2fef1c0();
   input += synapse0x2fef200();
   input += synapse0x2fef240();
   input += synapse0x2fef280();
   input += synapse0x2fef2c0();
   input += synapse0x2fef300();
   input += synapse0x2fef340();
   input += synapse0x2fef380();
   input += synapse0x2fef3c0();
   input += synapse0x2fef400();
   input += synapse0x2fef440();
   input += synapse0x2fef480();
   input += synapse0x2fef4c0();
   input += synapse0x2feef50();
   input += synapse0x2feef90();
   input += synapse0x2fef610();
   input += synapse0x2fef650();
   input += synapse0x2fef690();
   input += synapse0x2fef6d0();
   input += synapse0x2fef710();
   input += synapse0x2fef750();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2feedc0() {
   double input = input0x2feedc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fef790() {
   double input = -7.26517;
   input += synapse0x2fefad0();
   input += synapse0x2fefb10();
   input += synapse0x2fefb50();
   input += synapse0x2fefb90();
   input += synapse0x2fefbd0();
   input += synapse0x2fefc10();
   input += synapse0x2fefc50();
   input += synapse0x2fefc90();
   input += synapse0x2fefcd0();
   input += synapse0x2fefd10();
   input += synapse0x2fefd50();
   input += synapse0x2fefd90();
   input += synapse0x2fefdd0();
   input += synapse0x2fefe10();
   input += synapse0x2fefe50();
   input += synapse0x2fefe90();
   input += synapse0x2fef920();
   input += synapse0x2fef960();
   input += synapse0x2fe0490();
   input += synapse0x2fe04d0();
   input += synapse0x2fe0510();
   input += synapse0x2fe0550();
   input += synapse0x2fe0590();
   input += synapse0x2fe05d0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fef790() {
   double input = input0x2fef790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe0610() {
   double input = -0.979945;
   input += synapse0x2fe0950();
   input += synapse0x2fe0990();
   input += synapse0x2fe09d0();
   input += synapse0x2fe0a10();
   input += synapse0x2fe0a50();
   input += synapse0x2fe0a90();
   input += synapse0x2fe0ad0();
   input += synapse0x2fe0b10();
   input += synapse0x2fe0b50();
   input += synapse0x2fe0b90();
   input += synapse0x2fe0bd0();
   input += synapse0x2fe0c10();
   input += synapse0x2fe0c50();
   input += synapse0x2fe0c90();
   input += synapse0x2fe0cd0();
   input += synapse0x2fe0d10();
   input += synapse0x2fe07a0();
   input += synapse0x2fe07e0();
   input += synapse0x2fe0e60();
   input += synapse0x2fe0ea0();
   input += synapse0x2fe0ee0();
   input += synapse0x2fe0f20();
   input += synapse0x2fe0f60();
   input += synapse0x2fe0fa0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe0610() {
   double input = input0x2fe0610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe0fe0() {
   double input = 2.60053;
   input += synapse0x2fe1320();
   input += synapse0x2fe1360();
   input += synapse0x2fe13a0();
   input += synapse0x2fe13e0();
   input += synapse0x2fe1420();
   input += synapse0x2fe1460();
   input += synapse0x2fe14a0();
   input += synapse0x2fe14e0();
   input += synapse0x2fe1520();
   input += synapse0x2fe1560();
   input += synapse0x2fe15a0();
   input += synapse0x2fe15e0();
   input += synapse0x2fe1620();
   input += synapse0x2fe1660();
   input += synapse0x2fe16a0();
   input += synapse0x2fe16e0();
   input += synapse0x2fe1170();
   input += synapse0x2fe11b0();
   input += synapse0x2fe1830();
   input += synapse0x2fe1870();
   input += synapse0x2fe18b0();
   input += synapse0x2fe18f0();
   input += synapse0x2fe1930();
   input += synapse0x2fe1970();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe0fe0() {
   double input = input0x2fe0fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fe19b0() {
   double input = 2.38853;
   input += synapse0x2fe1cf0();
   input += synapse0x2fe1d30();
   input += synapse0x2fe1d70();
   input += synapse0x2fe1db0();
   input += synapse0x2fe1df0();
   input += synapse0x2fe1e30();
   input += synapse0x2fe1e70();
   input += synapse0x2fe1eb0();
   input += synapse0x2fe1ef0();
   input += synapse0x2fe1f30();
   input += synapse0x2fe1f70();
   input += synapse0x2fe1fb0();
   input += synapse0x2fe1ff0();
   input += synapse0x2fe2030();
   input += synapse0x2fe2070();
   input += synapse0x2fe20b0();
   input += synapse0x2fe1b40();
   input += synapse0x2fe1b80();
   input += synapse0x2fe2200();
   input += synapse0x2fe2240();
   input += synapse0x2fe2280();
   input += synapse0x2fe22c0();
   input += synapse0x2fe2300();
   input += synapse0x2fe2340();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fe19b0() {
   double input = input0x2fe19b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2ff3ff0() {
   double input = 0.942545;
   input += synapse0x2ff4210();
   input += synapse0x2ff4250();
   input += synapse0x2ff4290();
   input += synapse0x2ff42d0();
   input += synapse0x2ff4310();
   input += synapse0x2ff4350();
   input += synapse0x2ff4390();
   input += synapse0x2ff43d0();
   input += synapse0x2ff4410();
   input += synapse0x2ff4450();
   input += synapse0x2ff4490();
   input += synapse0x2ff44d0();
   input += synapse0x2ff4510();
   input += synapse0x2ff4550();
   input += synapse0x2ff4590();
   input += synapse0x2ff45d0();
   input += synapse0x2fe2380();
   input += synapse0x2fe23c0();
   input += synapse0x2ff4720();
   input += synapse0x2ff4760();
   input += synapse0x2ff47a0();
   input += synapse0x2ff47e0();
   input += synapse0x2ff4820();
   input += synapse0x2ff4860();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2ff3ff0() {
   double input = input0x2ff3ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2ff48a0() {
   double input = 1.47328;
   input += synapse0x2ff4be0();
   input += synapse0x2ff4c20();
   input += synapse0x2ff4c60();
   input += synapse0x2ff4ca0();
   input += synapse0x2ff4ce0();
   input += synapse0x2ff4d20();
   input += synapse0x2ff4d60();
   input += synapse0x2ff4da0();
   input += synapse0x2ff4de0();
   input += synapse0x2ff4e20();
   input += synapse0x2ff4e60();
   input += synapse0x2ff4ea0();
   input += synapse0x2ff4ee0();
   input += synapse0x2ff4f20();
   input += synapse0x2ff4f60();
   input += synapse0x2ff4fa0();
   input += synapse0x2ff4a30();
   input += synapse0x2ff4a70();
   input += synapse0x2ff50f0();
   input += synapse0x2ff5130();
   input += synapse0x2ff5170();
   input += synapse0x2ff51b0();
   input += synapse0x2ff51f0();
   input += synapse0x2ff5230();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2ff48a0() {
   double input = input0x2ff48a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2ff5270() {
   double input = 1.92971;
   input += synapse0x2ff55b0();
   input += synapse0x2ff55f0();
   input += synapse0x2ff5630();
   input += synapse0x2ff5670();
   input += synapse0x2ff56b0();
   input += synapse0x2ff56f0();
   input += synapse0x2ff5730();
   input += synapse0x2ff5770();
   input += synapse0x2ff57b0();
   input += synapse0x2ff57f0();
   input += synapse0x2ff5830();
   input += synapse0x2ff5870();
   input += synapse0x2ff58b0();
   input += synapse0x2ff58f0();
   input += synapse0x2ff5930();
   input += synapse0x2ff5970();
   input += synapse0x2ff5400();
   input += synapse0x2ff5440();
   input += synapse0x2ff5ac0();
   input += synapse0x2ff5b00();
   input += synapse0x2ff5b40();
   input += synapse0x2ff5b80();
   input += synapse0x2ff5bc0();
   input += synapse0x2ff5c00();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2ff5270() {
   double input = input0x2ff5270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2ff5c40() {
   double input = 3.81431;
   input += synapse0x2ff5f80();
   input += synapse0x2ff5fc0();
   input += synapse0x2ff6000();
   input += synapse0x2ff6040();
   input += synapse0x2ff6080();
   input += synapse0x2ff60c0();
   input += synapse0x2ff6100();
   input += synapse0x2ff6140();
   input += synapse0x2ff6180();
   input += synapse0x2ff61c0();
   input += synapse0x2ff6200();
   input += synapse0x2ff6240();
   input += synapse0x2ff6280();
   input += synapse0x2ff62c0();
   input += synapse0x2ff6300();
   input += synapse0x2ff6340();
   input += synapse0x2ff5dd0();
   input += synapse0x2ff5e10();
   input += synapse0x2ff6490();
   input += synapse0x2ff64d0();
   input += synapse0x2ff6510();
   input += synapse0x2ff6550();
   input += synapse0x2ff6590();
   input += synapse0x2ff65d0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2ff5c40() {
   double input = input0x2ff5c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2ffce40() {
   double input = 2.95719;
   input += synapse0x2fd2b60();
   input += synapse0x2fd2ba0();
   input += synapse0x2fd4080();
   input += synapse0x2fd40c0();
   input += synapse0x2fd4a50();
   input += synapse0x2fd4a90();
   input += synapse0x2fd5820();
   input += synapse0x2fd5860();
   input += synapse0x2fd61f0();
   input += synapse0x2fd6230();
   input += synapse0x2fd6bc0();
   input += synapse0x2fd6c00();
   input += synapse0x2fd76a0();
   input += synapse0x2fd76e0();
   input += synapse0x2fd8070();
   input += synapse0x2fd80b0();
   input += synapse0x2fd5150();
   input += synapse0x2fd5190();
   input += synapse0x2fd9c20();
   input += synapse0x2fd9c60();
   input += synapse0x2fda5f0();
   input += synapse0x2fda630();
   input += synapse0x2fdafc0();
   input += synapse0x2fdb000();
   input += synapse0x2fdb990();
   input += synapse0x2fdb9d0();
   input += synapse0x2fcfb70();
   input += synapse0x2fcfbb0();
   input += synapse0x2fdda80();
   input += synapse0x2fddac0();
   input += synapse0x2fde450();
   input += synapse0x2fde490();
   input += synapse0x2fdee20();
   input += synapse0x2fdee60();
   input += synapse0x2fdf7f0();
   input += synapse0x2fdf830();
   input += synapse0x2fe01c0();
   input += synapse0x2fe0200();
   input += synapse0x2fd8d10();
   input += synapse0x2fd8d50();
   input += synapse0x2fe25c0();
   input += synapse0x2fe2600();
   input += synapse0x2fe2f50();
   input += synapse0x2fe2f90();
   input += synapse0x2fe3920();
   input += synapse0x2fe3960();
   input += synapse0x2fe42f0();
   input += synapse0x2fe4330();
   input += synapse0x2fe4cc0();
   input += synapse0x2fe4d00();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2ffce40() {
   double input = input0x2ffce40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2ffd1e0() {
   double input = 7.05334;
   input += synapse0x2fe7400();
   input += synapse0x2fe7440();
   input += synapse0x2fdc9c0();
   input += synapse0x2fdca00();
   input += synapse0x2fe9fe0();
   input += synapse0x2fea020();
   input += synapse0x2fea9b0();
   input += synapse0x2fea9f0();
   input += synapse0x2feb380();
   input += synapse0x2feb3c0();
   input += synapse0x2febd50();
   input += synapse0x2febd90();
   input += synapse0x2fec720();
   input += synapse0x2fec760();
   input += synapse0x2fed0f0();
   input += synapse0x2fed130();
   input += synapse0x2fedac0();
   input += synapse0x2fedb00();
   input += synapse0x2fee490();
   input += synapse0x2fee4d0();
   input += synapse0x2fef070();
   input += synapse0x2fef0b0();
   input += synapse0x2fefa40();
   input += synapse0x2fefa80();
   input += synapse0x2fe08c0();
   input += synapse0x2fe0900();
   input += synapse0x2fe1290();
   input += synapse0x2fe12d0();
   input += synapse0x2fe1c60();
   input += synapse0x2fe1ca0();
   input += synapse0x2ff4180();
   input += synapse0x2ff41c0();
   input += synapse0x2ff4b50();
   input += synapse0x2ff4b90();
   input += synapse0x2ff5520();
   input += synapse0x2ff5560();
   input += synapse0x2ff5ef0();
   input += synapse0x2ff5f30();
   input += synapse0x2fd1e20();
   input += synapse0x2fd1e60();
   input += synapse0x2fe5690();
   input += synapse0x2fe56d0();
   input += synapse0x2ff6610();
   input += synapse0x2ff6650();
   input += synapse0x2ff6690();
   input += synapse0x2ff66d0();
   input += synapse0x2ffd580();
   input += synapse0x2ffd5c0();
   input += synapse0x2ffd600();
   input += synapse0x2ffd640();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2ffd1e0() {
   double input = input0x2ffd1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2ffd680() {
   double input = -1.71639;
   input += synapse0x2ffd9c0();
   input += synapse0x2ffda00();
   input += synapse0x2ffda40();
   input += synapse0x2ffda80();
   input += synapse0x2ffdac0();
   input += synapse0x2ffdb00();
   input += synapse0x2ffdb40();
   input += synapse0x2ffdb80();
   input += synapse0x2ffdbc0();
   input += synapse0x2ffdc00();
   input += synapse0x2ffdc40();
   input += synapse0x2ffdc80();
   input += synapse0x2ffdcc0();
   input += synapse0x2ffdd00();
   input += synapse0x2ffdd40();
   input += synapse0x2ffdd80();
   input += synapse0x2ffd810();
   input += synapse0x2ffd850();
   input += synapse0x2ffded0();
   input += synapse0x2ffdf10();
   input += synapse0x2ffdf50();
   input += synapse0x2ffdf90();
   input += synapse0x2ffdfd0();
   input += synapse0x2ffe010();
   input += synapse0x2ffe050();
   input += synapse0x2ffe090();
   input += synapse0x2ffe0d0();
   input += synapse0x2ffe110();
   input += synapse0x2ffe150();
   input += synapse0x2ffe190();
   input += synapse0x2ffe1d0();
   input += synapse0x2ffe210();
   input += synapse0x2ffddc0();
   input += synapse0x2ffde00();
   input += synapse0x2ffde40();
   input += synapse0x2ffde80();
   input += synapse0x2ffe460();
   input += synapse0x2ffe4a0();
   input += synapse0x2ffe4e0();
   input += synapse0x2ffe520();
   input += synapse0x2ffe560();
   input += synapse0x2ffe5a0();
   input += synapse0x2ffe5e0();
   input += synapse0x2ffe620();
   input += synapse0x2ffe660();
   input += synapse0x2ffe6a0();
   input += synapse0x2ffe6e0();
   input += synapse0x2ffe720();
   input += synapse0x2ffe760();
   input += synapse0x2ffe7a0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2ffd680() {
   double input = input0x2ffd680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2ffe7e0() {
   double input = -0.585969;
   input += synapse0x2ffeb20();
   input += synapse0x2ffeb60();
   input += synapse0x2ffeba0();
   input += synapse0x2ffebe0();
   input += synapse0x2ffec20();
   input += synapse0x2ffec60();
   input += synapse0x2ffeca0();
   input += synapse0x2ffece0();
   input += synapse0x2ffed20();
   input += synapse0x2ffed60();
   input += synapse0x2ffeda0();
   input += synapse0x2ffede0();
   input += synapse0x2ffee20();
   input += synapse0x2ffee60();
   input += synapse0x2ffeea0();
   input += synapse0x2ffeee0();
   input += synapse0x2ffe970();
   input += synapse0x2ffe9b0();
   input += synapse0x2fff030();
   input += synapse0x2fff070();
   input += synapse0x2fff0b0();
   input += synapse0x2fff0f0();
   input += synapse0x2fff130();
   input += synapse0x2fff170();
   input += synapse0x2fff1b0();
   input += synapse0x2fff1f0();
   input += synapse0x2fff230();
   input += synapse0x2fff270();
   input += synapse0x2fff2b0();
   input += synapse0x2fff2f0();
   input += synapse0x2fff330();
   input += synapse0x2fff370();
   input += synapse0x2ffef20();
   input += synapse0x2ffef60();
   input += synapse0x2ffefa0();
   input += synapse0x2ffefe0();
   input += synapse0x2fff5c0();
   input += synapse0x2fff600();
   input += synapse0x2fff640();
   input += synapse0x2fff680();
   input += synapse0x2fff6c0();
   input += synapse0x2fff700();
   input += synapse0x2fff740();
   input += synapse0x2fff780();
   input += synapse0x2fff7c0();
   input += synapse0x2fff800();
   input += synapse0x2fff840();
   input += synapse0x2fff880();
   input += synapse0x2fff8c0();
   input += synapse0x2fff900();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2ffe7e0() {
   double input = input0x2ffe7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x2fff940() {
   double input = 0.426209;
   input += synapse0x2fffc80();
   input += synapse0x2fffcc0();
   input += synapse0x2fffd00();
   input += synapse0x2fffd40();
   input += synapse0x2fffd80();
   input += synapse0x2fffdc0();
   input += synapse0x2fffe00();
   input += synapse0x2fffe40();
   input += synapse0x2fffe80();
   input += synapse0x2fffec0();
   input += synapse0x2ffff00();
   input += synapse0x2ffff40();
   input += synapse0x2ffff80();
   input += synapse0x2ffffc0();
   input += synapse0x3000000();
   input += synapse0x3000040();
   input += synapse0x2fffad0();
   input += synapse0x2fffb10();
   input += synapse0x3000190();
   input += synapse0x30001d0();
   input += synapse0x3000210();
   input += synapse0x3000250();
   input += synapse0x3000290();
   input += synapse0x30002d0();
   input += synapse0x3000310();
   input += synapse0x3000350();
   input += synapse0x3000390();
   input += synapse0x30003d0();
   input += synapse0x3000410();
   input += synapse0x3000450();
   input += synapse0x3000490();
   input += synapse0x30004d0();
   input += synapse0x3000080();
   input += synapse0x30000c0();
   input += synapse0x3000100();
   input += synapse0x3000140();
   input += synapse0x3000720();
   input += synapse0x3000760();
   input += synapse0x30007a0();
   input += synapse0x30007e0();
   input += synapse0x3000820();
   input += synapse0x3000860();
   input += synapse0x30008a0();
   input += synapse0x30008e0();
   input += synapse0x3000920();
   input += synapse0x3000960();
   input += synapse0x30009a0();
   input += synapse0x30009e0();
   input += synapse0x3000a20();
   input += synapse0x3000a60();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x2fff940() {
   double input = input0x2fff940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_chi4::input0x3000aa0() {
   double input = 0.302103;
   input += synapse0x3000cc0();
   input += synapse0x3000d00();
   input += synapse0x3000d40();
   input += synapse0x3000d80();
   input += synapse0x3000dc0();
   return input;
}

double NNfunction_nn_chi1_chi4::neuron0x3000aa0() {
   double input = input0x3000aa0();
   return (input * 1)+0;
}

double NNfunction_nn_chi1_chi4::synapse0x2fccbe0() {
   return (neuron0x2fccc60()*-0.0254758);
}

double NNfunction_nn_chi1_chi4::synapse0x2fccc20() {
   return (neuron0x2fccf10()*0.655142);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1eb0() {
   return (neuron0x2fcd250()*1.56104);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1ef0() {
   return (neuron0x2fcd590()*-0.211061);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1f30() {
   return (neuron0x2fcd8d0()*-0.281375);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1f70() {
   return (neuron0x2fcdc10()*-1.96663);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1fb0() {
   return (neuron0x2fcdf50()*0.928798);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1ff0() {
   return (neuron0x2fce290()*-1.09077);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2030() {
   return (neuron0x2fce5d0()*-0.262787);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2070() {
   return (neuron0x2fce910()*0.398863);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd20b0() {
   return (neuron0x2fcec50()*-1.57997);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd20f0() {
   return (neuron0x2fcef90()*1.65511);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2130() {
   return (neuron0x2fcf2d0()*0.174672);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2170() {
   return (neuron0x2fcf610()*0.763378);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd21b0() {
   return (neuron0x2fcf950()*1.33449);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd21f0() {
   return (neuron0x2fcfc90()*-1.07662);
}

double NNfunction_nn_chi1_chi4::synapse0x2fccb50() {
   return (neuron0x2fcffd0()*-0.626973);
}

double NNfunction_nn_chi1_chi4::synapse0x2fccb90() {
   return (neuron0x2fd0530()*-0.086994);
}

double NNfunction_nn_chi1_chi4::synapse0x2d87d40() {
   return (neuron0x2fd0750()*0.234746);
}

double NNfunction_nn_chi1_chi4::synapse0x2d87d80() {
   return (neuron0x2fd0a90()*0.721878);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2450() {
   return (neuron0x2fd0dd0()*-0.120824);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2490() {
   return (neuron0x2fd1110()*-1.89371);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd24d0() {
   return (neuron0x2fd1450()*-0.226533);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2510() {
   return (neuron0x2fd1790()*-0.313081);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2890() {
   return (neuron0x2fccc60()*0.189402);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd28d0() {
   return (neuron0x2fccf10()*4.14587);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2910() {
   return (neuron0x2fcd250()*-3.57615);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2950() {
   return (neuron0x2fcd590()*0.245057);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2990() {
   return (neuron0x2fcd8d0()*0.530578);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd29d0() {
   return (neuron0x2fcdc10()*-0.35873);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2a10() {
   return (neuron0x2fcdf50()*0.167988);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2a50() {
   return (neuron0x2fce290()*0.023663);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2a90() {
   return (neuron0x2fce5d0()*1.52335);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2340() {
   return (neuron0x2fce910()*-0.541193);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2380() {
   return (neuron0x2fcec50()*0.00466814);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd23c0() {
   return (neuron0x2fcef90()*-0.920092);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2400() {
   return (neuron0x2fcf2d0()*-0.29128);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2ce0() {
   return (neuron0x2fcf610()*-0.782087);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2d20() {
   return (neuron0x2fcf950()*-0.370556);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2d60() {
   return (neuron0x2fcfc90()*-0.405511);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd26e0() {
   return (neuron0x2fcffd0()*0.303481);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2720() {
   return (neuron0x2fd0530()*0.440235);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2eb0() {
   return (neuron0x2fd0750()*-0.540185);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2ef0() {
   return (neuron0x2fd0a90()*-0.188788);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2f30() {
   return (neuron0x2fd0dd0()*3.24614);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2f70() {
   return (neuron0x2fd1110()*2.26586);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2fb0() {
   return (neuron0x2fd1450()*-1.01815);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2ff0() {
   return (neuron0x2fd1790()*1.54857);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3370() {
   return (neuron0x2fccc60()*0.240999);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd33b0() {
   return (neuron0x2fccf10()*-2.35566);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd33f0() {
   return (neuron0x2fcd250()*2.62676);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3430() {
   return (neuron0x2fcd590()*0.0211737);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3470() {
   return (neuron0x2fcd8d0()*0.0345077);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd34b0() {
   return (neuron0x2fcdc10()*0.094603);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd34f0() {
   return (neuron0x2fcdf50()*-0.024893);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3530() {
   return (neuron0x2fce290()*0.0831087);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3570() {
   return (neuron0x2fce5d0()*0.0199309);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd35b0() {
   return (neuron0x2fce910()*0.0813021);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd35f0() {
   return (neuron0x2fcec50()*0.047287);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3630() {
   return (neuron0x2fcef90()*0.507885);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3670() {
   return (neuron0x2fcf2d0()*-0.0196274);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd36b0() {
   return (neuron0x2fcf610()*-0.198656);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd36f0() {
   return (neuron0x2fcf950()*-0.0482277);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3730() {
   return (neuron0x2fcfc90()*0.00223442);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd31c0() {
   return (neuron0x2fcffd0()*0.071819);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3200() {
   return (neuron0x2fd0530()*-0.00276585);
}

double NNfunction_nn_chi1_chi4::synapse0x2fbbcd0() {
   return (neuron0x2fd0750()*0.0780729);
}

double NNfunction_nn_chi1_chi4::synapse0x2d95c20() {
   return (neuron0x2fd0a90()*0.136684);
}

double NNfunction_nn_chi1_chi4::synapse0x2d95c60() {
   return (neuron0x2fd0dd0()*-0.0501067);
}

double NNfunction_nn_chi1_chi4::synapse0x2eb1170() {
   return (neuron0x2fd1110()*-0.0245046);
}

double NNfunction_nn_chi1_chi4::synapse0x2eb11b0() {
   return (neuron0x2fd1450()*-0.00140449);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcc9c0() {
   return (neuron0x2fd1790()*-0.732675);
}

double NNfunction_nn_chi1_chi4::synapse0x2d96510() {
   return (neuron0x2fccc60()*-0.792783);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2bf0() {
   return (neuron0x2fccf10()*3.11185);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2c30() {
   return (neuron0x2fcd250()*1.53889);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2c70() {
   return (neuron0x2fcd590()*-1.08603);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3880() {
   return (neuron0x2fcd8d0()*-0.0467683);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd38c0() {
   return (neuron0x2fcdc10()*-0.531003);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3900() {
   return (neuron0x2fcdf50()*-0.271131);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3940() {
   return (neuron0x2fce290()*0.47646);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3980() {
   return (neuron0x2fce5d0()*0.99234);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd39c0() {
   return (neuron0x2fce910()*-0.974656);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3a00() {
   return (neuron0x2fcec50()*-0.766259);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3a40() {
   return (neuron0x2fcef90()*0.503239);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3a80() {
   return (neuron0x2fcf2d0()*-1.50813);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3ac0() {
   return (neuron0x2fcf610()*0.729704);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3b00() {
   return (neuron0x2fcf950()*-0.606898);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3b40() {
   return (neuron0x2fcfc90()*-1.87097);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcca00() {
   return (neuron0x2fcffd0()*0.202351);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcca40() {
   return (neuron0x2fd0530()*1.50854);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcca80() {
   return (neuron0x2fd0750()*-0.744736);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3c90() {
   return (neuron0x2fd0a90()*0.174086);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3cd0() {
   return (neuron0x2fd0dd0()*-0.187755);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3d10() {
   return (neuron0x2fd1110()*-1.11137);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3d50() {
   return (neuron0x2fd1450()*-0.291289);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3d90() {
   return (neuron0x2fd1790()*-1.80251);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4110() {
   return (neuron0x2fccc60()*-0.268538);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4150() {
   return (neuron0x2fccf10()*-0.215844);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4190() {
   return (neuron0x2fcd250()*0.62126);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd41d0() {
   return (neuron0x2fcd590()*-0.491889);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4210() {
   return (neuron0x2fcd8d0()*0.00540557);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4250() {
   return (neuron0x2fcdc10()*0.179095);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4290() {
   return (neuron0x2fcdf50()*-0.945413);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd42d0() {
   return (neuron0x2fce290()*0.0407692);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4310() {
   return (neuron0x2fce5d0()*-0.286251);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4350() {
   return (neuron0x2fce910()*-0.761459);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4390() {
   return (neuron0x2fcec50()*-0.295315);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd43d0() {
   return (neuron0x2fcef90()*1.54495);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4410() {
   return (neuron0x2fcf2d0()*0.623133);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4450() {
   return (neuron0x2fcf610()*0.705913);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4490() {
   return (neuron0x2fcf950()*-0.794403);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd44d0() {
   return (neuron0x2fcfc90()*-3.27785);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3f60() {
   return (neuron0x2fcffd0()*-0.66532);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd3fa0() {
   return (neuron0x2fd0530()*-0.51767);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4620() {
   return (neuron0x2fd0750()*-0.047368);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4660() {
   return (neuron0x2fd0a90()*-0.204495);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd46a0() {
   return (neuron0x2fd0dd0()*0.453921);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd46e0() {
   return (neuron0x2fd1110()*-0.487743);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4720() {
   return (neuron0x2fd1450()*-0.798095);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4760() {
   return (neuron0x2fd1790()*0.345752);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4ae0() {
   return (neuron0x2fccc60()*-0.077121);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4b20() {
   return (neuron0x2fccf10()*-1.9083);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4b60() {
   return (neuron0x2fcd250()*-0.763281);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4ba0() {
   return (neuron0x2fcd590()*0.050835);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4be0() {
   return (neuron0x2fcd8d0()*0.0489913);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4c20() {
   return (neuron0x2fcdc10()*-0.0522742);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4c60() {
   return (neuron0x2fcdf50()*-0.074409);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4ca0() {
   return (neuron0x2fce290()*0.0497246);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4ce0() {
   return (neuron0x2fce5d0()*0.0216615);
}

double NNfunction_nn_chi1_chi4::synapse0x2d95f70() {
   return (neuron0x2fce910()*-0.0797035);
}

double NNfunction_nn_chi1_chi4::synapse0x2d95fb0() {
   return (neuron0x2fcec50()*-0.141499);
}

double NNfunction_nn_chi1_chi4::synapse0x2d95ff0() {
   return (neuron0x2fcef90()*0.811809);
}

double NNfunction_nn_chi1_chi4::synapse0x2d96030() {
   return (neuron0x2fcf2d0()*0.119802);
}

double NNfunction_nn_chi1_chi4::synapse0x2d96070() {
   return (neuron0x2fcf610()*0.218652);
}

double NNfunction_nn_chi1_chi4::synapse0x2d960b0() {
   return (neuron0x2fcf950()*0.0243586);
}

double NNfunction_nn_chi1_chi4::synapse0x2d960f0() {
   return (neuron0x2fcfc90()*0.194944);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4930() {
   return (neuron0x2fcffd0()*-0.00649833);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4970() {
   return (neuron0x2fd0530()*0.0180631);
}

double NNfunction_nn_chi1_chi4::synapse0x2d96240() {
   return (neuron0x2fd0750()*-0.0340193);
}

double NNfunction_nn_chi1_chi4::synapse0x2d96280() {
   return (neuron0x2fd0a90()*0.0244626);
}

double NNfunction_nn_chi1_chi4::synapse0x2d962c0() {
   return (neuron0x2fd0dd0()*0.0695943);
}

double NNfunction_nn_chi1_chi4::synapse0x2d96300() {
   return (neuron0x2fd1110()*-0.181292);
}

double NNfunction_nn_chi1_chi4::synapse0x2d96340() {
   return (neuron0x2fd1450()*-0.0938791);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5530() {
   return (neuron0x2fd1790()*3.43539);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd58b0() {
   return (neuron0x2fccc60()*0.242023);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd58f0() {
   return (neuron0x2fccf10()*-0.0667366);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5930() {
   return (neuron0x2fcd250()*-2.46967);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5970() {
   return (neuron0x2fcd590()*1.9676);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd59b0() {
   return (neuron0x2fcd8d0()*0.558631);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd59f0() {
   return (neuron0x2fcdc10()*0.886304);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5a30() {
   return (neuron0x2fcdf50()*1.04196);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5a70() {
   return (neuron0x2fce290()*-0.614738);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5ab0() {
   return (neuron0x2fce5d0()*-1.04265);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5af0() {
   return (neuron0x2fce910()*0.114851);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5b30() {
   return (neuron0x2fcec50()*-0.396997);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5b70() {
   return (neuron0x2fcef90()*-0.430196);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5bb0() {
   return (neuron0x2fcf2d0()*-0.375415);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5bf0() {
   return (neuron0x2fcf610()*-0.144469);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5c30() {
   return (neuron0x2fcf950()*1.08426);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5c70() {
   return (neuron0x2fcfc90()*-1.12585);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5700() {
   return (neuron0x2fcffd0()*-1.13453);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5740() {
   return (neuron0x2fd0530()*-0.94378);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5dc0() {
   return (neuron0x2fd0750()*1.34066);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5e00() {
   return (neuron0x2fd0a90()*-1.21184);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5e40() {
   return (neuron0x2fd0dd0()*-0.372229);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5e80() {
   return (neuron0x2fd1110()*0.475894);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5ec0() {
   return (neuron0x2fd1450()*0.122819);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5f00() {
   return (neuron0x2fd1790()*-1.36068);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6280() {
   return (neuron0x2fccc60()*0.0225206);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd62c0() {
   return (neuron0x2fccf10()*0.429601);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6300() {
   return (neuron0x2fcd250()*0.601979);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6340() {
   return (neuron0x2fcd590()*0.0106524);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6380() {
   return (neuron0x2fcd8d0()*0.00324918);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd63c0() {
   return (neuron0x2fcdc10()*-0.0126083);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6400() {
   return (neuron0x2fcdf50()*0.0137856);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6440() {
   return (neuron0x2fce290()*0.0103349);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6480() {
   return (neuron0x2fce5d0()*0.0161137);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd64c0() {
   return (neuron0x2fce910()*-0.000968057);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6500() {
   return (neuron0x2fcec50()*0.00489517);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6540() {
   return (neuron0x2fcef90()*0.0182435);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6580() {
   return (neuron0x2fcf2d0()*0.0161156);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd65c0() {
   return (neuron0x2fcf610()*4.90586e-05);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6600() {
   return (neuron0x2fcf950()*0.0320143);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6640() {
   return (neuron0x2fcfc90()*0.00169175);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd60d0() {
   return (neuron0x2fcffd0()*0.0084142);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6110() {
   return (neuron0x2fd0530()*0.00634806);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6790() {
   return (neuron0x2fd0750()*0.0129096);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd67d0() {
   return (neuron0x2fd0a90()*-0.000265959);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6810() {
   return (neuron0x2fd0dd0()*-0.00323309);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6850() {
   return (neuron0x2fd1110()*0.0129359);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6890() {
   return (neuron0x2fd1450()*0.00901935);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd68d0() {
   return (neuron0x2fd1790()*0.339569);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd0420() {
   return (neuron0x2fccc60()*0.609623);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd0460() {
   return (neuron0x2fccf10()*4.81322);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd04a0() {
   return (neuron0x2fcd250()*-0.151849);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd04e0() {
   return (neuron0x2fcd590()*0.605087);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6e60() {
   return (neuron0x2fcd8d0()*-0.746255);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6ea0() {
   return (neuron0x2fcdc10()*-0.508996);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6ee0() {
   return (neuron0x2fcdf50()*0.648066);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6f20() {
   return (neuron0x2fce290()*-0.513895);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6f60() {
   return (neuron0x2fce5d0()*0.267049);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6fa0() {
   return (neuron0x2fce910()*-0.0565694);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6fe0() {
   return (neuron0x2fcec50()*0.122701);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7020() {
   return (neuron0x2fcef90()*0.734234);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7060() {
   return (neuron0x2fcf2d0()*-0.32677);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd70a0() {
   return (neuron0x2fcf610()*-0.887411);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd70e0() {
   return (neuron0x2fcf950()*0.462283);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7120() {
   return (neuron0x2fcfc90()*0.0357608);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6aa0() {
   return (neuron0x2fcffd0()*0.210363);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6ae0() {
   return (neuron0x2fd0530()*0.390779);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7270() {
   return (neuron0x2fd0750()*0.161782);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd72b0() {
   return (neuron0x2fd0a90()*0.527308);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd72f0() {
   return (neuron0x2fd0dd0()*0.151479);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7330() {
   return (neuron0x2fd1110()*0.222959);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7370() {
   return (neuron0x2fd1450()*-0.0946678);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd73b0() {
   return (neuron0x2fd1790()*0.677631);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7730() {
   return (neuron0x2fccc60()*-0.249491);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7770() {
   return (neuron0x2fccf10()*0.654541);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd77b0() {
   return (neuron0x2fcd250()*0.776856);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd77f0() {
   return (neuron0x2fcd590()*-0.184931);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7830() {
   return (neuron0x2fcd8d0()*0.345872);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7870() {
   return (neuron0x2fcdc10()*0.894641);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd78b0() {
   return (neuron0x2fcdf50()*-0.0336631);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd78f0() {
   return (neuron0x2fce290()*-0.575023);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7930() {
   return (neuron0x2fce5d0()*0.00900902);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7970() {
   return (neuron0x2fce910()*-0.0742349);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd79b0() {
   return (neuron0x2fcec50()*-1.11283);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd79f0() {
   return (neuron0x2fcef90()*0.264132);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7a30() {
   return (neuron0x2fcf2d0()*-0.224524);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7a70() {
   return (neuron0x2fcf610()*-0.474481);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7ab0() {
   return (neuron0x2fcf950()*0.176992);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7af0() {
   return (neuron0x2fcfc90()*-0.0205661);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7580() {
   return (neuron0x2fcffd0()*0.0269803);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd75c0() {
   return (neuron0x2fd0530()*0.213519);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7c40() {
   return (neuron0x2fd0750()*0.0372647);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7c80() {
   return (neuron0x2fd0a90()*-0.0106447);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7cc0() {
   return (neuron0x2fd0dd0()*0.24014);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7d00() {
   return (neuron0x2fd1110()*0.0800481);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7d40() {
   return (neuron0x2fd1450()*0.0551908);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7d80() {
   return (neuron0x2fd1790()*1.13484);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8100() {
   return (neuron0x2fccc60()*-0.024719);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8140() {
   return (neuron0x2fccf10()*6.55785);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8180() {
   return (neuron0x2fcd250()*-0.27557);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd81c0() {
   return (neuron0x2fcd590()*0.00715199);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8200() {
   return (neuron0x2fcd8d0()*-0.0997759);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8240() {
   return (neuron0x2fcdc10()*0.0703122);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8280() {
   return (neuron0x2fcdf50()*-0.0176388);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd82c0() {
   return (neuron0x2fce290()*0.0179856);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8300() {
   return (neuron0x2fce5d0()*0.0424848);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8340() {
   return (neuron0x2fce910()*0.0500647);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8380() {
   return (neuron0x2fcec50()*0.0737348);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd83c0() {
   return (neuron0x2fcef90()*0.0696707);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8400() {
   return (neuron0x2fcf2d0()*-0.0555684);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8440() {
   return (neuron0x2fcf610()*-0.127717);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8480() {
   return (neuron0x2fcf950()*0.0110422);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd84c0() {
   return (neuron0x2fcfc90()*-0.0411417);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7f50() {
   return (neuron0x2fcffd0()*-0.0411618);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd7f90() {
   return (neuron0x2fd0530()*-0.0537505);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4d20() {
   return (neuron0x2fd0750()*0.0557823);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4d60() {
   return (neuron0x2fd0a90()*0.00152287);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4da0() {
   return (neuron0x2fd0dd0()*-0.0322714);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4de0() {
   return (neuron0x2fd1110()*0.0315534);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4e20() {
   return (neuron0x2fd1450()*0.0269756);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4e60() {
   return (neuron0x2fd1790()*0.648068);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd51e0() {
   return (neuron0x2fccc60()*-0.573802);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5220() {
   return (neuron0x2fccf10()*-0.758961);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5260() {
   return (neuron0x2fcd250()*-1.8479);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd52a0() {
   return (neuron0x2fcd590()*0.325842);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd52e0() {
   return (neuron0x2fcd8d0()*-1.48701);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5320() {
   return (neuron0x2fcdc10()*0.608577);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5360() {
   return (neuron0x2fcdf50()*0.397122);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd53a0() {
   return (neuron0x2fce290()*-0.161668);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd53e0() {
   return (neuron0x2fce5d0()*1.83836);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5420() {
   return (neuron0x2fce910()*-0.676873);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5460() {
   return (neuron0x2fcec50()*0.205043);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd54a0() {
   return (neuron0x2fcef90()*-2.4467);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd54e0() {
   return (neuron0x2fcf2d0()*-0.271775);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9620() {
   return (neuron0x2fcf610()*0.217959);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9660() {
   return (neuron0x2fcf950()*0.269528);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd96a0() {
   return (neuron0x2fcfc90()*0.385745);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5030() {
   return (neuron0x2fcffd0()*0.920246);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5070() {
   return (neuron0x2fd0530()*0.303994);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd97f0() {
   return (neuron0x2fd0750()*-0.718944);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9830() {
   return (neuron0x2fd0a90()*1.32748);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9870() {
   return (neuron0x2fd0dd0()*0.767765);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd98b0() {
   return (neuron0x2fd1110()*-1.05278);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd98f0() {
   return (neuron0x2fd1450()*0.453377);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9930() {
   return (neuron0x2fd1790()*-0.613035);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9cb0() {
   return (neuron0x2fccc60()*0.00483184);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9cf0() {
   return (neuron0x2fccf10()*1.58905);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9d30() {
   return (neuron0x2fcd250()*-1.12265);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9d70() {
   return (neuron0x2fcd590()*0.00622253);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9db0() {
   return (neuron0x2fcd8d0()*0.0244714);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9df0() {
   return (neuron0x2fcdc10()*0.0664687);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9e30() {
   return (neuron0x2fcdf50()*-0.00837046);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9e70() {
   return (neuron0x2fce290()*-0.0131417);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9eb0() {
   return (neuron0x2fce5d0()*-0.0301402);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9ef0() {
   return (neuron0x2fce910()*-0.0278604);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9f30() {
   return (neuron0x2fcec50()*0.00279224);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9f70() {
   return (neuron0x2fcef90()*-0.276912);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9fb0() {
   return (neuron0x2fcf2d0()*-0.000613603);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9ff0() {
   return (neuron0x2fcf610()*-0.0376559);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda030() {
   return (neuron0x2fcf950()*0.0331919);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda070() {
   return (neuron0x2fcfc90()*0.00510184);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9b00() {
   return (neuron0x2fcffd0()*0.0413306);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9b40() {
   return (neuron0x2fd0530()*0.0131004);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda1c0() {
   return (neuron0x2fd0750()*0.00958694);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda200() {
   return (neuron0x2fd0a90()*0.0103817);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda240() {
   return (neuron0x2fd0dd0()*0.0209982);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda280() {
   return (neuron0x2fd1110()*0.0141755);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda2c0() {
   return (neuron0x2fd1450()*-0.00556484);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda300() {
   return (neuron0x2fd1790()*2.0708);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda680() {
   return (neuron0x2fccc60()*1.41521);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda6c0() {
   return (neuron0x2fccf10()*-1.16432);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda700() {
   return (neuron0x2fcd250()*-1.7681);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda740() {
   return (neuron0x2fcd590()*1.57454);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda780() {
   return (neuron0x2fcd8d0()*0.115562);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda7c0() {
   return (neuron0x2fcdc10()*0.414063);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda800() {
   return (neuron0x2fcdf50()*0.307271);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda840() {
   return (neuron0x2fce290()*-2.77676);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda880() {
   return (neuron0x2fce5d0()*-0.122087);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda8c0() {
   return (neuron0x2fce910()*-0.431782);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda900() {
   return (neuron0x2fcec50()*-0.918917);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda940() {
   return (neuron0x2fcef90()*-0.614354);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda980() {
   return (neuron0x2fcf2d0()*-0.784752);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda9c0() {
   return (neuron0x2fcf610()*-0.752305);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdaa00() {
   return (neuron0x2fcf950()*-2.01751);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdaa40() {
   return (neuron0x2fcfc90()*0.860722);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda4d0() {
   return (neuron0x2fcffd0()*1.2951);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda510() {
   return (neuron0x2fd0530()*2.91796);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdab90() {
   return (neuron0x2fd0750()*1.89969);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdabd0() {
   return (neuron0x2fd0a90()*0.769178);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdac10() {
   return (neuron0x2fd0dd0()*-1.76239);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdac50() {
   return (neuron0x2fd1110()*-1.66421);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdac90() {
   return (neuron0x2fd1450()*1.83888);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdacd0() {
   return (neuron0x2fd1790()*-3.48983);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb050() {
   return (neuron0x2fccc60()*0.738871);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb090() {
   return (neuron0x2fccf10()*1.49698);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb0d0() {
   return (neuron0x2fcd250()*-4.92605);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb110() {
   return (neuron0x2fcd590()*1.2845);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb150() {
   return (neuron0x2fcd8d0()*0.101008);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb190() {
   return (neuron0x2fcdc10()*1.84943);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb1d0() {
   return (neuron0x2fcdf50()*-0.50638);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb210() {
   return (neuron0x2fce290()*-0.257599);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb250() {
   return (neuron0x2fce5d0()*-0.0358286);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb290() {
   return (neuron0x2fce910()*-0.241149);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb2d0() {
   return (neuron0x2fcec50()*1.12663);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb310() {
   return (neuron0x2fcef90()*-1.33693);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb350() {
   return (neuron0x2fcf2d0()*-0.320919);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb390() {
   return (neuron0x2fcf610()*-1.90296);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb3d0() {
   return (neuron0x2fcf950()*0.738714);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb410() {
   return (neuron0x2fcfc90()*0.364653);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdaea0() {
   return (neuron0x2fcffd0()*-0.231268);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdaee0() {
   return (neuron0x2fd0530()*-0.216733);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb560() {
   return (neuron0x2fd0750()*-0.949872);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb5a0() {
   return (neuron0x2fd0a90()*0.830274);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb5e0() {
   return (neuron0x2fd0dd0()*0.592002);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb620() {
   return (neuron0x2fd1110()*1.41747);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb660() {
   return (neuron0x2fd1450()*1.21012);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb6a0() {
   return (neuron0x2fd1790()*0.648878);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdba20() {
   return (neuron0x2fccc60()*0.457771);
}

double NNfunction_nn_chi1_chi4::synapse0x2fccdf0() {
   return (neuron0x2fccf10()*-0.499686);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcce30() {
   return (neuron0x2fcd250()*0.723445);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcd130() {
   return (neuron0x2fcd590()*0.0116568);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcd170() {
   return (neuron0x2fcd8d0()*-0.257285);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcd470() {
   return (neuron0x2fcdc10()*-0.726808);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcd4b0() {
   return (neuron0x2fcdf50()*0.811067);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcd7b0() {
   return (neuron0x2fce290()*-0.764708);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcd7f0() {
   return (neuron0x2fce5d0()*0.0315029);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcdaf0() {
   return (neuron0x2fce910()*0.774622);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcdb30() {
   return (neuron0x2fcec50()*0.439012);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcde30() {
   return (neuron0x2fcef90()*0.856704);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcde70() {
   return (neuron0x2fcf2d0()*-2.43594);
}

double NNfunction_nn_chi1_chi4::synapse0x2fce170() {
   return (neuron0x2fcf610()*0.0882971);
}

double NNfunction_nn_chi1_chi4::synapse0x2fce1b0() {
   return (neuron0x2fcf950()*0.721804);
}

double NNfunction_nn_chi1_chi4::synapse0x2fce4b0() {
   return (neuron0x2fcfc90()*0.0980114);
}

double NNfunction_nn_chi1_chi4::synapse0x2fce4f0() {
   return (neuron0x2fcffd0()*0.26961);
}

double NNfunction_nn_chi1_chi4::synapse0x2fce7f0() {
   return (neuron0x2fd0530()*-0.0340568);
}

double NNfunction_nn_chi1_chi4::synapse0x2fce830() {
   return (neuron0x2fd0750()*0.152213);
}

double NNfunction_nn_chi1_chi4::synapse0x2fceb30() {
   return (neuron0x2fd0a90()*1.00553);
}

double NNfunction_nn_chi1_chi4::synapse0x2fceb70() {
   return (neuron0x2fd0dd0()*-1.03708);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcee70() {
   return (neuron0x2fd1110()*-0.839761);
}

double NNfunction_nn_chi1_chi4::synapse0x2fceeb0() {
   return (neuron0x2fd1450()*-0.304091);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcf1b0() {
   return (neuron0x2fd1790()*-1.54632);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcf1f0() {
   return (neuron0x2fccc60()*-0.026972);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcfeb0() {
   return (neuron0x2fccf10()*-1.88892);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcfef0() {
   return (neuron0x2fcd250()*1.11299);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb870() {
   return (neuron0x2fcd590()*-0.00357252);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb8b0() {
   return (neuron0x2fcd8d0()*-0.00998007);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd01f0() {
   return (neuron0x2fcdc10()*0.0118512);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd0230() {
   return (neuron0x2fcdf50()*0.0118231);
}

double NNfunction_nn_chi1_chi4::synapse0x2d87c20() {
   return (neuron0x2fce290()*-0.00896605);
}

double NNfunction_nn_chi1_chi4::synapse0x2d87c60() {
   return (neuron0x2fce5d0()*-0.00972787);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd0970() {
   return (neuron0x2fce910()*0.0242614);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd09b0() {
   return (neuron0x2fcec50()*0.0105716);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd0cb0() {
   return (neuron0x2fcef90()*0.193023);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd0cf0() {
   return (neuron0x2fcf2d0()*-0.0168528);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd0ff0() {
   return (neuron0x2fcf610()*-0.0406854);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1030() {
   return (neuron0x2fcf950()*-0.014179);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1330() {
   return (neuron0x2fcfc90()*-0.000134913);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1370() {
   return (neuron0x2fcffd0()*0.0572281);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1670() {
   return (neuron0x2fd0530()*-0.00187567);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd16b0() {
   return (neuron0x2fd0750()*0.0237647);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd19b0() {
   return (neuron0x2fd0a90()*-0.0159572);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd19f0() {
   return (neuron0x2fd0dd0()*0.0327361);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcf4f0() {
   return (neuron0x2fd1110()*0.0245433);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcf530() {
   return (neuron0x2fd1450()*0.0125416);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdd790() {
   return (neuron0x2fd1790()*2.76349);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddb10() {
   return (neuron0x2fccc60()*0.28384);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddb50() {
   return (neuron0x2fccf10()*2.72397);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddb90() {
   return (neuron0x2fcd250()*5.26661);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddbd0() {
   return (neuron0x2fcd590()*-0.0697862);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddc10() {
   return (neuron0x2fcd8d0()*-0.0196515);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddc50() {
   return (neuron0x2fcdc10()*0.0214873);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddc90() {
   return (neuron0x2fcdf50()*-0.0463147);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddcd0() {
   return (neuron0x2fce290()*0.14016);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddd10() {
   return (neuron0x2fce5d0()*0.103613);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddd50() {
   return (neuron0x2fce910()*-0.119633);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddd90() {
   return (neuron0x2fcec50()*-0.0180154);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdddd0() {
   return (neuron0x2fcef90()*0.396252);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdde10() {
   return (neuron0x2fcf2d0()*0.0122467);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdde50() {
   return (neuron0x2fcf610()*0.0457447);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdde90() {
   return (neuron0x2fcf950()*-0.216641);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdded0() {
   return (neuron0x2fcfc90()*-0.00757206);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdd960() {
   return (neuron0x2fcffd0()*0.146825);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdd9a0() {
   return (neuron0x2fd0530()*-0.00163047);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde020() {
   return (neuron0x2fd0750()*0.0832845);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde060() {
   return (neuron0x2fd0a90()*0.0341593);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde0a0() {
   return (neuron0x2fd0dd0()*-0.0753981);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde0e0() {
   return (neuron0x2fd1110()*0.00532255);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde120() {
   return (neuron0x2fd1450()*0.100969);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde160() {
   return (neuron0x2fd1790()*-8.73513);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde4e0() {
   return (neuron0x2fccc60()*2.18734);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde520() {
   return (neuron0x2fccf10()*-0.613878);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde560() {
   return (neuron0x2fcd250()*0.533036);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde5a0() {
   return (neuron0x2fcd590()*0.770242);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde5e0() {
   return (neuron0x2fcd8d0()*0.153122);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde620() {
   return (neuron0x2fcdc10()*0.11178);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde660() {
   return (neuron0x2fcdf50()*-0.415652);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde6a0() {
   return (neuron0x2fce290()*0.282004);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde6e0() {
   return (neuron0x2fce5d0()*-0.109656);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde720() {
   return (neuron0x2fce910()*0.0770677);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde760() {
   return (neuron0x2fcec50()*-0.297584);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde7a0() {
   return (neuron0x2fcef90()*-0.404621);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde7e0() {
   return (neuron0x2fcf2d0()*0.709489);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde820() {
   return (neuron0x2fcf610()*-1.48394);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde860() {
   return (neuron0x2fcf950()*0.0803065);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde8a0() {
   return (neuron0x2fcfc90()*0.0343158);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde330() {
   return (neuron0x2fcffd0()*-0.541043);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde370() {
   return (neuron0x2fd0530()*0.213771);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde9f0() {
   return (neuron0x2fd0750()*0.641133);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdea30() {
   return (neuron0x2fd0a90()*1.08205);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdea70() {
   return (neuron0x2fd0dd0()*-0.174341);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdeab0() {
   return (neuron0x2fd1110()*-1.1022);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdeaf0() {
   return (neuron0x2fd1450()*0.291077);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdeb30() {
   return (neuron0x2fd1790()*-1.24332);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdeeb0() {
   return (neuron0x2fccc60()*0.240423);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdeef0() {
   return (neuron0x2fccf10()*3.65721);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdef30() {
   return (neuron0x2fcd250()*0.571293);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdef70() {
   return (neuron0x2fcd590()*-0.033311);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdefb0() {
   return (neuron0x2fcd8d0()*-0.114164);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdeff0() {
   return (neuron0x2fcdc10()*0.0622127);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf030() {
   return (neuron0x2fcdf50()*0.118725);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf070() {
   return (neuron0x2fce290()*-0.352982);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf0b0() {
   return (neuron0x2fce5d0()*-0.0908164);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf0f0() {
   return (neuron0x2fce910()*0.19887);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf130() {
   return (neuron0x2fcec50()*0.0831384);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf170() {
   return (neuron0x2fcef90()*1.72204);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf1b0() {
   return (neuron0x2fcf2d0()*0.276431);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf1f0() {
   return (neuron0x2fcf610()*0.112971);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf230() {
   return (neuron0x2fcf950()*-0.185769);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf270() {
   return (neuron0x2fcfc90()*0.330188);
}

double NNfunction_nn_chi1_chi4::synapse0x2fded00() {
   return (neuron0x2fcffd0()*0.0229645);
}

double NNfunction_nn_chi1_chi4::synapse0x2fded40() {
   return (neuron0x2fd0530()*0.0468148);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf3c0() {
   return (neuron0x2fd0750()*-0.0770259);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf400() {
   return (neuron0x2fd0a90()*0.0283369);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf440() {
   return (neuron0x2fd0dd0()*0.00839074);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf480() {
   return (neuron0x2fd1110()*-0.365871);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf4c0() {
   return (neuron0x2fd1450()*0.101825);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf500() {
   return (neuron0x2fd1790()*-0.191597);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf880() {
   return (neuron0x2fccc60()*0.254859);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf8c0() {
   return (neuron0x2fccf10()*1.30989);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf900() {
   return (neuron0x2fcd250()*-1.63785);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf940() {
   return (neuron0x2fcd590()*0.394763);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf980() {
   return (neuron0x2fcd8d0()*1.55888);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf9c0() {
   return (neuron0x2fcdc10()*0.649762);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfa00() {
   return (neuron0x2fcdf50()*0.102393);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfa40() {
   return (neuron0x2fce290()*0.0690848);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfa80() {
   return (neuron0x2fce5d0()*-0.0594093);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfac0() {
   return (neuron0x2fce910()*-0.527939);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfb00() {
   return (neuron0x2fcec50()*1.18805);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfb40() {
   return (neuron0x2fcef90()*1.34098);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfb80() {
   return (neuron0x2fcf2d0()*-0.801275);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfbc0() {
   return (neuron0x2fcf610()*0.228414);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfc00() {
   return (neuron0x2fcf950()*-1.966);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfc40() {
   return (neuron0x2fcfc90()*0.731907);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf6d0() {
   return (neuron0x2fcffd0()*-0.997833);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf710() {
   return (neuron0x2fd0530()*1.16011);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfd90() {
   return (neuron0x2fd0750()*0.129193);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfdd0() {
   return (neuron0x2fd0a90()*-0.62654);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfe10() {
   return (neuron0x2fd0dd0()*-1.04938);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfe50() {
   return (neuron0x2fd1110()*0.965807);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfe90() {
   return (neuron0x2fd1450()*0.346589);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdfed0() {
   return (neuron0x2fd1790()*2.5807);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0250() {
   return (neuron0x2fccc60()*0.0277241);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0290() {
   return (neuron0x2fccf10()*3.71276);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe02d0() {
   return (neuron0x2fcd250()*4.84716);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0310() {
   return (neuron0x2fcd590()*0.0761183);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0350() {
   return (neuron0x2fcd8d0()*0.148994);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0390() {
   return (neuron0x2fcdc10()*0.0476242);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe03d0() {
   return (neuron0x2fcdf50()*0.234129);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0410() {
   return (neuron0x2fce290()*0.194878);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0450() {
   return (neuron0x2fce5d0()*0.0286956);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8610() {
   return (neuron0x2fce910()*-0.0293703);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8650() {
   return (neuron0x2fcec50()*0.0911157);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8690() {
   return (neuron0x2fcef90()*-0.284399);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd86d0() {
   return (neuron0x2fcf2d0()*-0.113794);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8710() {
   return (neuron0x2fcf610()*0.192022);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8750() {
   return (neuron0x2fcf950()*-0.111781);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8790() {
   return (neuron0x2fcfc90()*0.0566731);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe00a0() {
   return (neuron0x2fcffd0()*-0.145031);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe00e0() {
   return (neuron0x2fd0530()*-0.157518);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd88e0() {
   return (neuron0x2fd0750()*0.0747389);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8920() {
   return (neuron0x2fd0a90()*-0.161169);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8960() {
   return (neuron0x2fd0dd0()*-0.125042);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd89a0() {
   return (neuron0x2fd1110()*0.0539493);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd89e0() {
   return (neuron0x2fd1450()*-0.071995);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8a20() {
   return (neuron0x2fd1790()*13.0376);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8da0() {
   return (neuron0x2fccc60()*0.0411582);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8de0() {
   return (neuron0x2fccf10()*-13.0132);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8e20() {
   return (neuron0x2fcd250()*0.487104);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8e60() {
   return (neuron0x2fcd590()*-0.115855);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8ea0() {
   return (neuron0x2fcd8d0()*0.0736106);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8ee0() {
   return (neuron0x2fcdc10()*-0.0839854);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8f20() {
   return (neuron0x2fcdf50()*-0.0852019);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8f60() {
   return (neuron0x2fce290()*0.0856136);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8fa0() {
   return (neuron0x2fce5d0()*-0.0373298);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8fe0() {
   return (neuron0x2fce910()*0.0324246);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9020() {
   return (neuron0x2fcec50()*-0.0492471);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9060() {
   return (neuron0x2fcef90()*0.0392873);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd90a0() {
   return (neuron0x2fcf2d0()*0.0284276);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd90e0() {
   return (neuron0x2fcf610()*0.165984);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9120() {
   return (neuron0x2fcf950()*-0.0938667);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9160() {
   return (neuron0x2fcfc90()*0.0736534);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8bf0() {
   return (neuron0x2fcffd0()*0.00587994);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8c30() {
   return (neuron0x2fd0530()*-0.0147317);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd92b0() {
   return (neuron0x2fd0750()*-0.1292);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd92f0() {
   return (neuron0x2fd0a90()*-0.0470152);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9330() {
   return (neuron0x2fd0dd0()*0.00152694);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9370() {
   return (neuron0x2fd1110()*0.0235684);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd93b0() {
   return (neuron0x2fd1450()*0.0281706);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd93f0() {
   return (neuron0x2fd1790()*0.347354);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd95c0() {
   return (neuron0x2fccc60()*-0.277957);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2650() {
   return (neuron0x2fccf10()*-1.44173);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2690() {
   return (neuron0x2fcd250()*3.2484);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe26d0() {
   return (neuron0x2fcd590()*-1.21569);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2710() {
   return (neuron0x2fcd8d0()*0.232109);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2750() {
   return (neuron0x2fcdc10()*-1.36503);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2790() {
   return (neuron0x2fcdf50()*0.245579);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe27d0() {
   return (neuron0x2fce290()*-0.18359);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2810() {
   return (neuron0x2fce5d0()*0.160429);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2850() {
   return (neuron0x2fce910()*-0.359723);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2890() {
   return (neuron0x2fcec50()*0.118239);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe28d0() {
   return (neuron0x2fcef90()*1.18844);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2910() {
   return (neuron0x2fcf2d0()*-0.275779);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2950() {
   return (neuron0x2fcf610()*0.378345);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2990() {
   return (neuron0x2fcf950()*-0.653205);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe29d0() {
   return (neuron0x2fcfc90()*0.0851508);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe24a0() {
   return (neuron0x2fcffd0()*-0.783006);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe24e0() {
   return (neuron0x2fd0530()*-0.0743134);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2b20() {
   return (neuron0x2fd0750()*0.74348);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2b60() {
   return (neuron0x2fd0a90()*-0.366279);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2ba0() {
   return (neuron0x2fd0dd0()*-0.458712);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2be0() {
   return (neuron0x2fd1110()*-0.0123329);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2c20() {
   return (neuron0x2fd1450()*-0.889116);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2c60() {
   return (neuron0x2fd1790()*-0.218683);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2fe0() {
   return (neuron0x2fccc60()*0.313519);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3020() {
   return (neuron0x2fccf10()*2.56682);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3060() {
   return (neuron0x2fcd250()*0.661517);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe30a0() {
   return (neuron0x2fcd590()*-0.237198);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe30e0() {
   return (neuron0x2fcd8d0()*0.438301);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3120() {
   return (neuron0x2fcdc10()*0.470646);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3160() {
   return (neuron0x2fcdf50()*-0.84288);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe31a0() {
   return (neuron0x2fce290()*0.364086);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe31e0() {
   return (neuron0x2fce5d0()*-0.234966);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3220() {
   return (neuron0x2fce910()*-0.47644);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3260() {
   return (neuron0x2fcec50()*-0.108851);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe32a0() {
   return (neuron0x2fcef90()*-0.484429);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe32e0() {
   return (neuron0x2fcf2d0()*1.40174);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3320() {
   return (neuron0x2fcf610()*0.194777);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3360() {
   return (neuron0x2fcf950()*-0.963657);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe33a0() {
   return (neuron0x2fcfc90()*-0.165356);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2e30() {
   return (neuron0x2fcffd0()*-0.774748);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2e70() {
   return (neuron0x2fd0530()*-0.0299349);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe34f0() {
   return (neuron0x2fd0750()*-0.0386785);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3530() {
   return (neuron0x2fd0a90()*-0.526093);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3570() {
   return (neuron0x2fd0dd0()*0.638905);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe35b0() {
   return (neuron0x2fd1110()*0.67128);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe35f0() {
   return (neuron0x2fd1450()*0.541645);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3630() {
   return (neuron0x2fd1790()*0.879256);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe39b0() {
   return (neuron0x2fccc60()*-0.0132902);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe39f0() {
   return (neuron0x2fccf10()*0.560586);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3a30() {
   return (neuron0x2fcd250()*0.150824);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3a70() {
   return (neuron0x2fcd590()*-0.0160497);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3ab0() {
   return (neuron0x2fcd8d0()*0.0106732);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3af0() {
   return (neuron0x2fcdc10()*0.0145923);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3b30() {
   return (neuron0x2fcdf50()*0.00347761);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3b70() {
   return (neuron0x2fce290()*0.00958987);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3bb0() {
   return (neuron0x2fce5d0()*-0.00601773);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3bf0() {
   return (neuron0x2fce910()*-0.0171484);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3c30() {
   return (neuron0x2fcec50()*-0.00852126);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3c70() {
   return (neuron0x2fcef90()*0.0842621);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3cb0() {
   return (neuron0x2fcf2d0()*0.00234346);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3cf0() {
   return (neuron0x2fcf610()*0.0172122);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3d30() {
   return (neuron0x2fcf950()*0.00843784);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3d70() {
   return (neuron0x2fcfc90()*-0.00428971);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3800() {
   return (neuron0x2fcffd0()*0.0234791);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3840() {
   return (neuron0x2fd0530()*-0.0148383);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3ec0() {
   return (neuron0x2fd0750()*-0.00311241);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3f00() {
   return (neuron0x2fd0a90()*-0.00577372);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3f40() {
   return (neuron0x2fd0dd0()*0.00246561);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3f80() {
   return (neuron0x2fd1110()*-0.0134207);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3fc0() {
   return (neuron0x2fd1450()*0.00902807);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4000() {
   return (neuron0x2fd1790()*-0.380227);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4380() {
   return (neuron0x2fccc60()*-1.77027);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe43c0() {
   return (neuron0x2fccf10()*-2.19438);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4400() {
   return (neuron0x2fcd250()*1.00758);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4440() {
   return (neuron0x2fcd590()*-1.72575);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4480() {
   return (neuron0x2fcd8d0()*-0.149043);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe44c0() {
   return (neuron0x2fcdc10()*0.581908);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4500() {
   return (neuron0x2fcdf50()*-0.685732);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4540() {
   return (neuron0x2fce290()*-1.38557);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4580() {
   return (neuron0x2fce5d0()*1.02564);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe45c0() {
   return (neuron0x2fce910()*-0.0261925);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4600() {
   return (neuron0x2fcec50()*-1.08054);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4640() {
   return (neuron0x2fcef90()*1.72442);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4680() {
   return (neuron0x2fcf2d0()*1.1021);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe46c0() {
   return (neuron0x2fcf610()*-1.24265);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4700() {
   return (neuron0x2fcf950()*-0.674627);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4740() {
   return (neuron0x2fcfc90()*-1.18816);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe41d0() {
   return (neuron0x2fcffd0()*-1.17788);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4210() {
   return (neuron0x2fd0530()*1.18741);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4890() {
   return (neuron0x2fd0750()*-0.94235);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe48d0() {
   return (neuron0x2fd0a90()*0.186295);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4910() {
   return (neuron0x2fd0dd0()*-0.101939);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4950() {
   return (neuron0x2fd1110()*0.0531666);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4990() {
   return (neuron0x2fd1450()*0.369334);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe49d0() {
   return (neuron0x2fd1790()*-0.28937);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4d50() {
   return (neuron0x2fccc60()*0.954541);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4d90() {
   return (neuron0x2fccf10()*5.99415);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4dd0() {
   return (neuron0x2fcd250()*1.44266);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4e10() {
   return (neuron0x2fcd590()*0.992183);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4e50() {
   return (neuron0x2fcd8d0()*0.286968);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4e90() {
   return (neuron0x2fcdc10()*-0.918082);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4ed0() {
   return (neuron0x2fcdf50()*0.40635);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4f10() {
   return (neuron0x2fce290()*0.633667);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4f50() {
   return (neuron0x2fce5d0()*-0.674067);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4f90() {
   return (neuron0x2fce910()*-0.35133);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4fd0() {
   return (neuron0x2fcec50()*1.0063);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5010() {
   return (neuron0x2fcef90()*0.292086);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5050() {
   return (neuron0x2fcf2d0()*-0.902246);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5090() {
   return (neuron0x2fcf610()*0.283509);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe50d0() {
   return (neuron0x2fcf950()*0.284989);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5110() {
   return (neuron0x2fcfc90()*0.764911);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4ba0() {
   return (neuron0x2fcffd0()*0.839199);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4be0() {
   return (neuron0x2fd0530()*-1.38369);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5260() {
   return (neuron0x2fd0750()*-0.102394);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe52a0() {
   return (neuron0x2fd0a90()*-0.591094);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe52e0() {
   return (neuron0x2fd0dd0()*0.103161);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5320() {
   return (neuron0x2fd1110()*0.717045);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5360() {
   return (neuron0x2fd1450()*0.437566);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe53a0() {
   return (neuron0x2fd1790()*-0.729799);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5720() {
   return (neuron0x2fccc60()*0.390999);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5760() {
   return (neuron0x2fccf10()*0.277403);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe57a0() {
   return (neuron0x2fcd250()*-0.545545);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe57e0() {
   return (neuron0x2fcd590()*-0.182025);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5820() {
   return (neuron0x2fcd8d0()*-0.351122);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5860() {
   return (neuron0x2fcdc10()*-1.73222);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe58a0() {
   return (neuron0x2fcdf50()*-0.00532375);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe58e0() {
   return (neuron0x2fce290()*0.279955);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5920() {
   return (neuron0x2fce5d0()*-0.186732);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5960() {
   return (neuron0x2fce910()*-0.258813);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe59a0() {
   return (neuron0x2fcec50()*1.3291);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe59e0() {
   return (neuron0x2fcef90()*-0.223056);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5a20() {
   return (neuron0x2fcf2d0()*0.291545);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5a60() {
   return (neuron0x2fcf610()*-0.0326877);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5aa0() {
   return (neuron0x2fcf950()*-0.37134);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5ae0() {
   return (neuron0x2fcfc90()*-0.513399);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5570() {
   return (neuron0x2fcffd0()*0.143743);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe55b0() {
   return (neuron0x2fd0530()*0.321661);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5c30() {
   return (neuron0x2fd0750()*-0.621363);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5c70() {
   return (neuron0x2fd0a90()*0.193163);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5cb0() {
   return (neuron0x2fd0dd0()*-0.594054);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5cf0() {
   return (neuron0x2fd1110()*0.0924921);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5d30() {
   return (neuron0x2fd1450()*0.328356);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5d70() {
   return (neuron0x2fd1790()*0.018502);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe60f0() {
   return (neuron0x2fccc60()*-0.000954425);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6130() {
   return (neuron0x2fccf10()*0.0265217);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6170() {
   return (neuron0x2fcd250()*-0.030241);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe61b0() {
   return (neuron0x2fcd590()*-0.00601309);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe61f0() {
   return (neuron0x2fcd8d0()*0.0330885);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6230() {
   return (neuron0x2fcdc10()*0.0300607);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6270() {
   return (neuron0x2fcdf50()*-0.0145372);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe62b0() {
   return (neuron0x2fce290()*-0.0261072);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe62f0() {
   return (neuron0x2fce5d0()*-0.0707368);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6330() {
   return (neuron0x2fce910()*0.0561126);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6370() {
   return (neuron0x2fcec50()*0.0134745);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe63b0() {
   return (neuron0x2fcef90()*-0.449366);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe63f0() {
   return (neuron0x2fcf2d0()*-0.115653);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6430() {
   return (neuron0x2fcf610()*0.0669663);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6470() {
   return (neuron0x2fcf950()*-0.036011);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe64b0() {
   return (neuron0x2fcfc90()*0.0157271);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5f40() {
   return (neuron0x2fcffd0()*0.0463202);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5f80() {
   return (neuron0x2fd0530()*-0.00269113);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6600() {
   return (neuron0x2fd0750()*0.0864198);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6640() {
   return (neuron0x2fd0a90()*-0.0178882);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6680() {
   return (neuron0x2fd0dd0()*0.0800873);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe66c0() {
   return (neuron0x2fd1110()*0.0404048);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6700() {
   return (neuron0x2fd1450()*-0.0256965);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6740() {
   return (neuron0x2fd1790()*14.9083);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6ac0() {
   return (neuron0x2fccc60()*-0.21462);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6b00() {
   return (neuron0x2fccf10()*-1.12597);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6b40() {
   return (neuron0x2fcd250()*1.59363);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6b80() {
   return (neuron0x2fcd590()*0.0435355);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6bc0() {
   return (neuron0x2fcd8d0()*-0.0393892);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6c00() {
   return (neuron0x2fcdc10()*-0.0345562);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6c40() {
   return (neuron0x2fcdf50()*0.0073962);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6c80() {
   return (neuron0x2fce290()*0.0608505);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6cc0() {
   return (neuron0x2fce5d0()*0.0960137);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6d00() {
   return (neuron0x2fce910()*-0.0147044);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6d40() {
   return (neuron0x2fcec50()*0.0997311);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6d80() {
   return (neuron0x2fcef90()*0.783577);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6dc0() {
   return (neuron0x2fcf2d0()*0.136731);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6e00() {
   return (neuron0x2fcf610()*0.0448408);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6e40() {
   return (neuron0x2fcf950()*-0.0128103);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6e80() {
   return (neuron0x2fcfc90()*0.125931);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6910() {
   return (neuron0x2fcffd0()*-0.0243654);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6950() {
   return (neuron0x2fd0530()*0.0159495);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe6fd0() {
   return (neuron0x2fd0750()*-0.120097);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe7010() {
   return (neuron0x2fd0a90()*0.0387197);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe7050() {
   return (neuron0x2fd0dd0()*-0.0556305);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe7090() {
   return (neuron0x2fd1110()*-0.101145);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe70d0() {
   return (neuron0x2fd1450()*0.0138154);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe7110() {
   return (neuron0x2fd1790()*-3.90907);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe7490() {
   return (neuron0x2fccc60()*-0.0602789);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdba60() {
   return (neuron0x2fccf10()*-1.76509);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdbaa0() {
   return (neuron0x2fcd250()*-0.895082);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdbae0() {
   return (neuron0x2fcd590()*-0.029425);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdbd30() {
   return (neuron0x2fcd8d0()*0.0166513);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdbd70() {
   return (neuron0x2fcdc10()*0.0302623);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdbdb0() {
   return (neuron0x2fcdf50()*0.0195758);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc000() {
   return (neuron0x2fce290()*0.00898833);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc040() {
   return (neuron0x2fce5d0()*-0.0326321);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc290() {
   return (neuron0x2fce910()*-0.0147578);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc2d0() {
   return (neuron0x2fcec50()*-0.0308554);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc310() {
   return (neuron0x2fcef90()*-0.123692);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc560() {
   return (neuron0x2fcf2d0()*0.00781027);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc5a0() {
   return (neuron0x2fcf610()*0.0140373);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc7f0() {
   return (neuron0x2fcf950()*-0.0162564);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc830() {
   return (neuron0x2fcfc90()*0.00964784);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe72e0() {
   return (neuron0x2fcffd0()*0.0252579);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe7320() {
   return (neuron0x2fd0530()*-0.0100384);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc980() {
   return (neuron0x2fd0750()*-0.00822027);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdce90() {
   return (neuron0x2fd0a90()*0.0139825);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdced0() {
   return (neuron0x2fd0dd0()*0.00375681);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdcf10() {
   return (neuron0x2fd1110()*-0.0263117);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdd160() {
   return (neuron0x2fd1450()*0.0122751);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdd1a0() {
   return (neuron0x2fd1790()*-1.3228);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdca50() {
   return (neuron0x2fccc60()*-0.0960893);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdca90() {
   return (neuron0x2fccf10()*-0.160664);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdcad0() {
   return (neuron0x2fcd250()*0.281003);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdcb10() {
   return (neuron0x2fcd590()*0.0245994);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdd490() {
   return (neuron0x2fcd8d0()*-0.00310782);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe97e0() {
   return (neuron0x2fcdc10()*0.0107068);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9820() {
   return (neuron0x2fcdf50()*0.0192451);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9860() {
   return (neuron0x2fce290()*0.0373226);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe98a0() {
   return (neuron0x2fce5d0()*0.0437417);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe98e0() {
   return (neuron0x2fce910()*-0.0286491);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9920() {
   return (neuron0x2fcec50()*-0.0716351);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9960() {
   return (neuron0x2fcef90()*-3.52659);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe99a0() {
   return (neuron0x2fcf2d0()*0.194382);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe99e0() {
   return (neuron0x2fcf610()*0.135743);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9a20() {
   return (neuron0x2fcf950()*0.0738334);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9a60() {
   return (neuron0x2fcfc90()*0.00314501);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdd370() {
   return (neuron0x2fcffd0()*0.0458669);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdd3b0() {
   return (neuron0x2fd0530()*0.0375397);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9bb0() {
   return (neuron0x2fd0750()*0.0177408);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9bf0() {
   return (neuron0x2fd0a90()*0.0688337);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9c30() {
   return (neuron0x2fd0dd0()*-0.0286077);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9c70() {
   return (neuron0x2fd1110()*0.0268677);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9cb0() {
   return (neuron0x2fd1450()*-0.0186585);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9cf0() {
   return (neuron0x2fd1790()*0.047201);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea070() {
   return (neuron0x2fccc60()*0.089282);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea0b0() {
   return (neuron0x2fccf10()*0.169297);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea0f0() {
   return (neuron0x2fcd250()*-0.273066);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea130() {
   return (neuron0x2fcd590()*0.0321312);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea170() {
   return (neuron0x2fcd8d0()*0.00401611);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea1b0() {
   return (neuron0x2fcdc10()*-0.00952654);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea1f0() {
   return (neuron0x2fcdf50()*0.0051599);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea230() {
   return (neuron0x2fce290()*0.00633001);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea270() {
   return (neuron0x2fce5d0()*0.00209379);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea2b0() {
   return (neuron0x2fce910()*0.019752);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea2f0() {
   return (neuron0x2fcec50()*0.0210771);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea330() {
   return (neuron0x2fcef90()*-0.630131);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea370() {
   return (neuron0x2fcf2d0()*-0.0357474);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea3b0() {
   return (neuron0x2fcf610()*-0.0638269);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea3f0() {
   return (neuron0x2fcf950()*-0.00113143);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea430() {
   return (neuron0x2fcfc90()*0.0250597);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9ec0() {
   return (neuron0x2fcffd0()*-0.0291234);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9f00() {
   return (neuron0x2fd0530()*-0.012082);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea580() {
   return (neuron0x2fd0750()*0.0179714);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea5c0() {
   return (neuron0x2fd0a90()*-0.0186084);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea600() {
   return (neuron0x2fd0dd0()*0.00690303);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea640() {
   return (neuron0x2fd1110()*0.0105073);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea680() {
   return (neuron0x2fd1450()*0.0290734);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea6c0() {
   return (neuron0x2fd1790()*0.479343);
}

double NNfunction_nn_chi1_chi4::synapse0x2feaa40() {
   return (neuron0x2fccc60()*-0.0492703);
}

double NNfunction_nn_chi1_chi4::synapse0x2feaa80() {
   return (neuron0x2fccf10()*-3.09851);
}

double NNfunction_nn_chi1_chi4::synapse0x2feaac0() {
   return (neuron0x2fcd250()*-1.93932);
}

double NNfunction_nn_chi1_chi4::synapse0x2feab00() {
   return (neuron0x2fcd590()*0.0267386);
}

double NNfunction_nn_chi1_chi4::synapse0x2feab40() {
   return (neuron0x2fcd8d0()*0.000419186);
}

double NNfunction_nn_chi1_chi4::synapse0x2feab80() {
   return (neuron0x2fcdc10()*0.00806948);
}

double NNfunction_nn_chi1_chi4::synapse0x2feabc0() {
   return (neuron0x2fcdf50()*0.0556191);
}

double NNfunction_nn_chi1_chi4::synapse0x2feac00() {
   return (neuron0x2fce290()*0.000475762);
}

double NNfunction_nn_chi1_chi4::synapse0x2feac40() {
   return (neuron0x2fce5d0()*-0.0145167);
}

double NNfunction_nn_chi1_chi4::synapse0x2feac80() {
   return (neuron0x2fce910()*0.0018248);
}

double NNfunction_nn_chi1_chi4::synapse0x2feacc0() {
   return (neuron0x2fcec50()*-0.0266659);
}

double NNfunction_nn_chi1_chi4::synapse0x2fead00() {
   return (neuron0x2fcef90()*-0.285376);
}

double NNfunction_nn_chi1_chi4::synapse0x2fead40() {
   return (neuron0x2fcf2d0()*-0.0152291);
}

double NNfunction_nn_chi1_chi4::synapse0x2fead80() {
   return (neuron0x2fcf610()*-0.00184962);
}

double NNfunction_nn_chi1_chi4::synapse0x2feadc0() {
   return (neuron0x2fcf950()*0.0103716);
}

double NNfunction_nn_chi1_chi4::synapse0x2feae00() {
   return (neuron0x2fcfc90()*-0.00842964);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea890() {
   return (neuron0x2fcffd0()*0.0135604);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea8d0() {
   return (neuron0x2fd0530()*0.0378844);
}

double NNfunction_nn_chi1_chi4::synapse0x2feaf50() {
   return (neuron0x2fd0750()*-0.033914);
}

double NNfunction_nn_chi1_chi4::synapse0x2feaf90() {
   return (neuron0x2fd0a90()*-0.0378946);
}

double NNfunction_nn_chi1_chi4::synapse0x2feafd0() {
   return (neuron0x2fd0dd0()*0.0364652);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb010() {
   return (neuron0x2fd1110()*0.0115128);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb050() {
   return (neuron0x2fd1450()*0.0232386);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb090() {
   return (neuron0x2fd1790()*2.27313);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb410() {
   return (neuron0x2fccc60()*0.751421);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb450() {
   return (neuron0x2fccf10()*3.97663);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb490() {
   return (neuron0x2fcd250()*-0.0267435);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb4d0() {
   return (neuron0x2fcd590()*0.594896);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb510() {
   return (neuron0x2fcd8d0()*-0.682808);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb550() {
   return (neuron0x2fcdc10()*-0.368257);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb590() {
   return (neuron0x2fcdf50()*0.615584);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb5d0() {
   return (neuron0x2fce290()*-0.495465);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb610() {
   return (neuron0x2fce5d0()*0.303902);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb650() {
   return (neuron0x2fce910()*0.0509868);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb690() {
   return (neuron0x2fcec50()*0.0391408);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb6d0() {
   return (neuron0x2fcef90()*0.450111);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb710() {
   return (neuron0x2fcf2d0()*-0.27793);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb750() {
   return (neuron0x2fcf610()*-0.656256);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb790() {
   return (neuron0x2fcf950()*0.393934);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb7d0() {
   return (neuron0x2fcfc90()*0.0688512);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb260() {
   return (neuron0x2fcffd0()*0.198186);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb2a0() {
   return (neuron0x2fd0530()*0.521105);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb920() {
   return (neuron0x2fd0750()*0.156979);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb960() {
   return (neuron0x2fd0a90()*0.503366);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb9a0() {
   return (neuron0x2fd0dd0()*-0.0552545);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb9e0() {
   return (neuron0x2fd1110()*0.162173);
}

double NNfunction_nn_chi1_chi4::synapse0x2feba20() {
   return (neuron0x2fd1450()*-0.049544);
}

double NNfunction_nn_chi1_chi4::synapse0x2feba60() {
   return (neuron0x2fd1790()*0.950569);
}

double NNfunction_nn_chi1_chi4::synapse0x2febde0() {
   return (neuron0x2fccc60()*0.00970741);
}

double NNfunction_nn_chi1_chi4::synapse0x2febe20() {
   return (neuron0x2fccf10()*-0.197406);
}

double NNfunction_nn_chi1_chi4::synapse0x2febe60() {
   return (neuron0x2fcd250()*-0.235409);
}

double NNfunction_nn_chi1_chi4::synapse0x2febea0() {
   return (neuron0x2fcd590()*0.0271836);
}

double NNfunction_nn_chi1_chi4::synapse0x2febee0() {
   return (neuron0x2fcd8d0()*0.0418254);
}

double NNfunction_nn_chi1_chi4::synapse0x2febf20() {
   return (neuron0x2fcdc10()*0.057452);
}

double NNfunction_nn_chi1_chi4::synapse0x2febf60() {
   return (neuron0x2fcdf50()*0.0282338);
}

double NNfunction_nn_chi1_chi4::synapse0x2febfa0() {
   return (neuron0x2fce290()*0.0351791);
}

double NNfunction_nn_chi1_chi4::synapse0x2febfe0() {
   return (neuron0x2fce5d0()*-0.010376);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec020() {
   return (neuron0x2fce910()*0.0277983);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec060() {
   return (neuron0x2fcec50()*-0.011268);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec0a0() {
   return (neuron0x2fcef90()*0.362113);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec0e0() {
   return (neuron0x2fcf2d0()*0.00193626);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec120() {
   return (neuron0x2fcf610()*0.14881);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec160() {
   return (neuron0x2fcf950()*-0.00236511);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec1a0() {
   return (neuron0x2fcfc90()*0.00555156);
}

double NNfunction_nn_chi1_chi4::synapse0x2febc30() {
   return (neuron0x2fcffd0()*0.0697129);
}

double NNfunction_nn_chi1_chi4::synapse0x2febc70() {
   return (neuron0x2fd0530()*0.00731638);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec2f0() {
   return (neuron0x2fd0750()*0.0569798);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec330() {
   return (neuron0x2fd0a90()*-0.0478074);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec370() {
   return (neuron0x2fd0dd0()*0.0217816);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec3b0() {
   return (neuron0x2fd1110()*0.0254558);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec3f0() {
   return (neuron0x2fd1450()*-0.0144137);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec430() {
   return (neuron0x2fd1790()*13.0152);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec7b0() {
   return (neuron0x2fccc60()*-1.51637);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec7f0() {
   return (neuron0x2fccf10()*-1.79212);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec830() {
   return (neuron0x2fcd250()*-1.00401);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec870() {
   return (neuron0x2fcd590()*0.231899);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec8b0() {
   return (neuron0x2fcd8d0()*0.401439);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec8f0() {
   return (neuron0x2fcdc10()*0.43102);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec930() {
   return (neuron0x2fcdf50()*-1.08471);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec970() {
   return (neuron0x2fce290()*-0.0958913);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec9b0() {
   return (neuron0x2fce5d0()*0.75827);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec9f0() {
   return (neuron0x2fce910()*1.72859);
}

double NNfunction_nn_chi1_chi4::synapse0x2feca30() {
   return (neuron0x2fcec50()*-0.221104);
}

double NNfunction_nn_chi1_chi4::synapse0x2feca70() {
   return (neuron0x2fcef90()*2.39724);
}

double NNfunction_nn_chi1_chi4::synapse0x2fecab0() {
   return (neuron0x2fcf2d0()*-0.933672);
}

double NNfunction_nn_chi1_chi4::synapse0x2fecaf0() {
   return (neuron0x2fcf610()*2.57238);
}

double NNfunction_nn_chi1_chi4::synapse0x2fecb30() {
   return (neuron0x2fcf950()*-0.203128);
}

double NNfunction_nn_chi1_chi4::synapse0x2fecb70() {
   return (neuron0x2fcfc90()*0.215759);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec600() {
   return (neuron0x2fcffd0()*-0.169813);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec640() {
   return (neuron0x2fd0530()*-0.188348);
}

double NNfunction_nn_chi1_chi4::synapse0x2feccc0() {
   return (neuron0x2fd0750()*1.06028);
}

double NNfunction_nn_chi1_chi4::synapse0x2fecd00() {
   return (neuron0x2fd0a90()*-1.0883);
}

double NNfunction_nn_chi1_chi4::synapse0x2fecd40() {
   return (neuron0x2fd0dd0()*0.390344);
}

double NNfunction_nn_chi1_chi4::synapse0x2fecd80() {
   return (neuron0x2fd1110()*-0.218812);
}

double NNfunction_nn_chi1_chi4::synapse0x2fecdc0() {
   return (neuron0x2fd1450()*-0.0304692);
}

double NNfunction_nn_chi1_chi4::synapse0x2fece00() {
   return (neuron0x2fd1790()*1.09844);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed180() {
   return (neuron0x2fccc60()*0.837247);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed1c0() {
   return (neuron0x2fccf10()*-1.14663);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed200() {
   return (neuron0x2fcd250()*1.93991);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed240() {
   return (neuron0x2fcd590()*1.28229);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed280() {
   return (neuron0x2fcd8d0()*-0.507862);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed2c0() {
   return (neuron0x2fcdc10()*-0.800587);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed300() {
   return (neuron0x2fcdf50()*-0.172622);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed340() {
   return (neuron0x2fce290()*-0.17265);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed380() {
   return (neuron0x2fce5d0()*1.0708);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed3c0() {
   return (neuron0x2fce910()*0.422645);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed400() {
   return (neuron0x2fcec50()*0.619939);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed440() {
   return (neuron0x2fcef90()*-1.4341);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed480() {
   return (neuron0x2fcf2d0()*-0.373436);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed4c0() {
   return (neuron0x2fcf610()*-2.73678);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed500() {
   return (neuron0x2fcf950()*1.32908);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed540() {
   return (neuron0x2fcfc90()*-0.202926);
}

double NNfunction_nn_chi1_chi4::synapse0x2fecfd0() {
   return (neuron0x2fcffd0()*-0.634756);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed010() {
   return (neuron0x2fd0530()*0.97027);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed690() {
   return (neuron0x2fd0750()*0.333915);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed6d0() {
   return (neuron0x2fd0a90()*1.96692);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed710() {
   return (neuron0x2fd0dd0()*0.167556);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed750() {
   return (neuron0x2fd1110()*-1.20708);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed790() {
   return (neuron0x2fd1450()*1.1235);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed7d0() {
   return (neuron0x2fd1790()*0.389643);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedb50() {
   return (neuron0x2fccc60()*-1.46777);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedb90() {
   return (neuron0x2fccf10()*-4.87555);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedbd0() {
   return (neuron0x2fcd250()*1.45532);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedc10() {
   return (neuron0x2fcd590()*0.555274);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedc50() {
   return (neuron0x2fcd8d0()*-0.755757);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedc90() {
   return (neuron0x2fcdc10()*-1.35224);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedcd0() {
   return (neuron0x2fcdf50()*1.08126);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedd10() {
   return (neuron0x2fce290()*-0.530897);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedd50() {
   return (neuron0x2fce5d0()*0.741509);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedd90() {
   return (neuron0x2fce910()*1.00869);
}

double NNfunction_nn_chi1_chi4::synapse0x2feddd0() {
   return (neuron0x2fcec50()*-0.659091);
}

double NNfunction_nn_chi1_chi4::synapse0x2fede10() {
   return (neuron0x2fcef90()*0.31952);
}

double NNfunction_nn_chi1_chi4::synapse0x2fede50() {
   return (neuron0x2fcf2d0()*-1.21745);
}

double NNfunction_nn_chi1_chi4::synapse0x2fede90() {
   return (neuron0x2fcf610()*-0.346665);
}

double NNfunction_nn_chi1_chi4::synapse0x2feded0() {
   return (neuron0x2fcf950()*1.49993);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedf10() {
   return (neuron0x2fcfc90()*0.990822);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed9a0() {
   return (neuron0x2fcffd0()*-0.0191956);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed9e0() {
   return (neuron0x2fd0530()*0.225886);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee060() {
   return (neuron0x2fd0750()*0.0907123);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee0a0() {
   return (neuron0x2fd0a90()*0.0471441);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee0e0() {
   return (neuron0x2fd0dd0()*-0.729178);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee120() {
   return (neuron0x2fd1110()*-1.24791);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee160() {
   return (neuron0x2fd1450()*-0.692646);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee1a0() {
   return (neuron0x2fd1790()*-0.142622);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6c50() {
   return (neuron0x2fccc60()*1.24487);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6c90() {
   return (neuron0x2fccf10()*1.37368);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6cd0() {
   return (neuron0x2fcd250()*-1.74714);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6d10() {
   return (neuron0x2fcd590()*-2.03471);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6d50() {
   return (neuron0x2fcd8d0()*1.51054);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6d90() {
   return (neuron0x2fcdc10()*-0.0800516);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6dd0() {
   return (neuron0x2fcdf50()*0.376937);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6e10() {
   return (neuron0x2fce290()*2.30709);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee930() {
   return (neuron0x2fce5d0()*0.348792);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee970() {
   return (neuron0x2fce910()*-0.212027);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee9b0() {
   return (neuron0x2fcec50()*0.501515);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee9f0() {
   return (neuron0x2fcef90()*-2.0385);
}

double NNfunction_nn_chi1_chi4::synapse0x2feea30() {
   return (neuron0x2fcf2d0()*-0.966379);
}

double NNfunction_nn_chi1_chi4::synapse0x2feea70() {
   return (neuron0x2fcf610()*0.416004);
}

double NNfunction_nn_chi1_chi4::synapse0x2feeab0() {
   return (neuron0x2fcf950()*-1.37986);
}

double NNfunction_nn_chi1_chi4::synapse0x2feeaf0() {
   return (neuron0x2fcfc90()*0.634061);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee370() {
   return (neuron0x2fcffd0()*-1.13457);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee3b0() {
   return (neuron0x2fd0530()*-0.458971);
}

double NNfunction_nn_chi1_chi4::synapse0x2feec40() {
   return (neuron0x2fd0750()*-1.29877);
}

double NNfunction_nn_chi1_chi4::synapse0x2feec80() {
   return (neuron0x2fd0a90()*-2.10308);
}

double NNfunction_nn_chi1_chi4::synapse0x2feecc0() {
   return (neuron0x2fd0dd0()*-0.0387988);
}

double NNfunction_nn_chi1_chi4::synapse0x2feed00() {
   return (neuron0x2fd1110()*2.80561);
}

double NNfunction_nn_chi1_chi4::synapse0x2feed40() {
   return (neuron0x2fd1450()*-1.66892);
}

double NNfunction_nn_chi1_chi4::synapse0x2feed80() {
   return (neuron0x2fd1790()*-0.667411);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef100() {
   return (neuron0x2fccc60()*0.410387);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef140() {
   return (neuron0x2fccf10()*-2.63065);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef180() {
   return (neuron0x2fcd250()*-0.228507);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef1c0() {
   return (neuron0x2fcd590()*-0.262877);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef200() {
   return (neuron0x2fcd8d0()*-0.157297);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef240() {
   return (neuron0x2fcdc10()*0.0391421);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef280() {
   return (neuron0x2fcdf50()*0.243044);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef2c0() {
   return (neuron0x2fce290()*0.104034);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef300() {
   return (neuron0x2fce5d0()*-0.0322818);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef340() {
   return (neuron0x2fce910()*-0.00757371);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef380() {
   return (neuron0x2fcec50()*0.336154);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef3c0() {
   return (neuron0x2fcef90()*-0.328514);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef400() {
   return (neuron0x2fcf2d0()*0.1095);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef440() {
   return (neuron0x2fcf610()*0.145678);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef480() {
   return (neuron0x2fcf950()*-0.0437391);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef4c0() {
   return (neuron0x2fcfc90()*0.255148);
}

double NNfunction_nn_chi1_chi4::synapse0x2feef50() {
   return (neuron0x2fcffd0()*0.293232);
}

double NNfunction_nn_chi1_chi4::synapse0x2feef90() {
   return (neuron0x2fd0530()*0.0375922);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef610() {
   return (neuron0x2fd0750()*0.00786513);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef650() {
   return (neuron0x2fd0a90()*0.248462);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef690() {
   return (neuron0x2fd0dd0()*-0.37189);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef6d0() {
   return (neuron0x2fd1110()*-0.278663);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef710() {
   return (neuron0x2fd1450()*0.201892);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef750() {
   return (neuron0x2fd1790()*-0.801164);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefad0() {
   return (neuron0x2fccc60()*-0.100232);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefb10() {
   return (neuron0x2fccf10()*-7.93593);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefb50() {
   return (neuron0x2fcd250()*-4.47402);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefb90() {
   return (neuron0x2fcd590()*0.00478991);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefbd0() {
   return (neuron0x2fcd8d0()*0.0138538);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefc10() {
   return (neuron0x2fcdc10()*-0.000435127);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefc50() {
   return (neuron0x2fcdf50()*0.102332);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefc90() {
   return (neuron0x2fce290()*0.0347167);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefcd0() {
   return (neuron0x2fce5d0()*-0.0785072);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefd10() {
   return (neuron0x2fce910()*-0.0338438);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefd50() {
   return (neuron0x2fcec50()*-0.00255377);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefd90() {
   return (neuron0x2fcef90()*-0.591042);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefdd0() {
   return (neuron0x2fcf2d0()*-0.0348999);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefe10() {
   return (neuron0x2fcf610()*0.0933381);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefe50() {
   return (neuron0x2fcf950()*-0.0254058);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefe90() {
   return (neuron0x2fcfc90()*0.023804);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef920() {
   return (neuron0x2fcffd0()*0.0323144);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef960() {
   return (neuron0x2fd0530()*0.06894);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0490() {
   return (neuron0x2fd0750()*-0.090322);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe04d0() {
   return (neuron0x2fd0a90()*-0.075767);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0510() {
   return (neuron0x2fd0dd0()*-0.0435974);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0550() {
   return (neuron0x2fd1110()*0.0191028);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0590() {
   return (neuron0x2fd1450()*0.0559365);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe05d0() {
   return (neuron0x2fd1790()*0.222401);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0950() {
   return (neuron0x2fccc60()*0.0916796);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0990() {
   return (neuron0x2fccf10()*0.245962);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe09d0() {
   return (neuron0x2fcd250()*1.13617);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0a10() {
   return (neuron0x2fcd590()*-0.0244275);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0a50() {
   return (neuron0x2fcd8d0()*0.0157274);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0a90() {
   return (neuron0x2fcdc10()*-0.00383595);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0ad0() {
   return (neuron0x2fcdf50()*0.0044541);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0b10() {
   return (neuron0x2fce290()*0.0165547);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0b50() {
   return (neuron0x2fce5d0()*0.00382664);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0b90() {
   return (neuron0x2fce910()*0.0288437);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0bd0() {
   return (neuron0x2fcec50()*0.0296571);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0c10() {
   return (neuron0x2fcef90()*-0.159717);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0c50() {
   return (neuron0x2fcf2d0()*-0.0242468);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0c90() {
   return (neuron0x2fcf610()*-0.0388237);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0cd0() {
   return (neuron0x2fcf950()*-0.00366211);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0d10() {
   return (neuron0x2fcfc90()*0.0143457);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe07a0() {
   return (neuron0x2fcffd0()*0.0278031);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe07e0() {
   return (neuron0x2fd0530()*-0.0092312);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0e60() {
   return (neuron0x2fd0750()*0.0122411);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0ea0() {
   return (neuron0x2fd0a90()*-0.00488447);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0ee0() {
   return (neuron0x2fd0dd0()*-0.0442512);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0f20() {
   return (neuron0x2fd1110()*-0.00448729);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0f60() {
   return (neuron0x2fd1450()*0.0345113);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0fa0() {
   return (neuron0x2fd1790()*-0.917687);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1320() {
   return (neuron0x2fccc60()*-0.0765125);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1360() {
   return (neuron0x2fccf10()*4.23705);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe13a0() {
   return (neuron0x2fcd250()*1.577);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe13e0() {
   return (neuron0x2fcd590()*0.0370414);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1420() {
   return (neuron0x2fcd8d0()*-0.0216899);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1460() {
   return (neuron0x2fcdc10()*0.0326204);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe14a0() {
   return (neuron0x2fcdf50()*-0.0163329);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe14e0() {
   return (neuron0x2fce290()*0.0237413);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1520() {
   return (neuron0x2fce5d0()*-0.00687351);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1560() {
   return (neuron0x2fce910()*-0.00137344);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe15a0() {
   return (neuron0x2fcec50()*-0.047524);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe15e0() {
   return (neuron0x2fcef90()*1.02031);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1620() {
   return (neuron0x2fcf2d0()*0.0335795);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1660() {
   return (neuron0x2fcf610()*-0.0386455);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe16a0() {
   return (neuron0x2fcf950()*-0.0511072);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe16e0() {
   return (neuron0x2fcfc90()*-0.0417315);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1170() {
   return (neuron0x2fcffd0()*-0.123048);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe11b0() {
   return (neuron0x2fd0530()*0.04965);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1830() {
   return (neuron0x2fd0750()*-0.00600941);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1870() {
   return (neuron0x2fd0a90()*-0.0168804);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe18b0() {
   return (neuron0x2fd0dd0()*0.0309226);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe18f0() {
   return (neuron0x2fd1110()*0.11792);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1930() {
   return (neuron0x2fd1450()*0.0346328);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1970() {
   return (neuron0x2fd1790()*-1.80467);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1cf0() {
   return (neuron0x2fccc60()*-0.0310313);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1d30() {
   return (neuron0x2fccf10()*3.93128);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1d70() {
   return (neuron0x2fcd250()*3.83868);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1db0() {
   return (neuron0x2fcd590()*0.0382477);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1df0() {
   return (neuron0x2fcd8d0()*0.0112244);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1e30() {
   return (neuron0x2fcdc10()*-0.0146174);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1e70() {
   return (neuron0x2fcdf50()*0.0271136);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1eb0() {
   return (neuron0x2fce290()*-0.0221665);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1ef0() {
   return (neuron0x2fce5d0()*0.020684);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1f30() {
   return (neuron0x2fce910()*-0.0298846);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1f70() {
   return (neuron0x2fcec50()*-0.0252429);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1fb0() {
   return (neuron0x2fcef90()*0.141093);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1ff0() {
   return (neuron0x2fcf2d0()*-0.0445249);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2030() {
   return (neuron0x2fcf610()*-0.0299724);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2070() {
   return (neuron0x2fcf950()*-0.0917273);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe20b0() {
   return (neuron0x2fcfc90()*0.00291632);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1b40() {
   return (neuron0x2fcffd0()*-0.0479059);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1b80() {
   return (neuron0x2fd0530()*-0.0802728);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2200() {
   return (neuron0x2fd0750()*0.0679482);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2240() {
   return (neuron0x2fd0a90()*-0.0190895);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2280() {
   return (neuron0x2fd0dd0()*-2.08304e-05);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe22c0() {
   return (neuron0x2fd1110()*0.0169427);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2300() {
   return (neuron0x2fd1450()*0.0523292);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2340() {
   return (neuron0x2fd1790()*3.71776);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4210() {
   return (neuron0x2fccc60()*0.0349536);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4250() {
   return (neuron0x2fccf10()*1.92377);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4290() {
   return (neuron0x2fcd250()*1.44334);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff42d0() {
   return (neuron0x2fcd590()*-0.139234);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4310() {
   return (neuron0x2fcd8d0()*1.46649);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4350() {
   return (neuron0x2fcdc10()*-0.355628);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4390() {
   return (neuron0x2fcdf50()*-0.162628);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff43d0() {
   return (neuron0x2fce290()*-0.592646);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4410() {
   return (neuron0x2fce5d0()*-1.16957);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4450() {
   return (neuron0x2fce910()*0.291518);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4490() {
   return (neuron0x2fcec50()*-1.31251);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff44d0() {
   return (neuron0x2fcef90()*3.42215);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4510() {
   return (neuron0x2fcf2d0()*0.849502);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4550() {
   return (neuron0x2fcf610()*-0.0829036);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4590() {
   return (neuron0x2fcf950()*-1.1064);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff45d0() {
   return (neuron0x2fcfc90()*-1.19021);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2380() {
   return (neuron0x2fcffd0()*-0.821319);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe23c0() {
   return (neuron0x2fd0530()*-0.191469);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4720() {
   return (neuron0x2fd0750()*0.140776);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4760() {
   return (neuron0x2fd0a90()*0.0237796);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff47a0() {
   return (neuron0x2fd0dd0()*-0.436484);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff47e0() {
   return (neuron0x2fd1110()*0.42076);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4820() {
   return (neuron0x2fd1450()*-0.180796);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4860() {
   return (neuron0x2fd1790()*1.12044);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4be0() {
   return (neuron0x2fccc60()*-0.0175731);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4c20() {
   return (neuron0x2fccf10()*3.85999);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4c60() {
   return (neuron0x2fcd250()*2.0322);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4ca0() {
   return (neuron0x2fcd590()*-0.530688);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4ce0() {
   return (neuron0x2fcd8d0()*0.0421671);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4d20() {
   return (neuron0x2fcdc10()*0.141631);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4d60() {
   return (neuron0x2fcdf50()*-0.181428);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4da0() {
   return (neuron0x2fce290()*0.180902);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4de0() {
   return (neuron0x2fce5d0()*0.0468873);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4e20() {
   return (neuron0x2fce910()*0.133733);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4e60() {
   return (neuron0x2fcec50()*0.0436216);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4ea0() {
   return (neuron0x2fcef90()*0.00785455);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4ee0() {
   return (neuron0x2fcf2d0()*-0.539725);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4f20() {
   return (neuron0x2fcf610()*1.06531);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4f60() {
   return (neuron0x2fcf950()*-0.61486);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4fa0() {
   return (neuron0x2fcfc90()*-0.633785);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4a30() {
   return (neuron0x2fcffd0()*-0.017934);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4a70() {
   return (neuron0x2fd0530()*0.467308);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff50f0() {
   return (neuron0x2fd0750()*-0.223411);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5130() {
   return (neuron0x2fd0a90()*-0.0382252);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5170() {
   return (neuron0x2fd0dd0()*-0.33118);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff51b0() {
   return (neuron0x2fd1110()*-0.147158);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff51f0() {
   return (neuron0x2fd1450()*-0.144653);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5230() {
   return (neuron0x2fd1790()*-0.173021);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff55b0() {
   return (neuron0x2fccc60()*-0.116766);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff55f0() {
   return (neuron0x2fccf10()*-2.85829);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5630() {
   return (neuron0x2fcd250()*1.77765);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5670() {
   return (neuron0x2fcd590()*0.00229302);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff56b0() {
   return (neuron0x2fcd8d0()*-0.0328215);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff56f0() {
   return (neuron0x2fcdc10()*-0.0170816);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5730() {
   return (neuron0x2fcdf50()*0.0120905);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5770() {
   return (neuron0x2fce290()*-0.00877802);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff57b0() {
   return (neuron0x2fce5d0()*0.00498667);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff57f0() {
   return (neuron0x2fce910()*0.00704856);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5830() {
   return (neuron0x2fcec50()*-0.0186022);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5870() {
   return (neuron0x2fcef90()*0.425136);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff58b0() {
   return (neuron0x2fcf2d0()*0.0126492);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff58f0() {
   return (neuron0x2fcf610()*0.0825228);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5930() {
   return (neuron0x2fcf950()*-0.0124142);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5970() {
   return (neuron0x2fcfc90()*-0.0152298);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5400() {
   return (neuron0x2fcffd0()*-0.0592455);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5440() {
   return (neuron0x2fd0530()*0.00697715);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5ac0() {
   return (neuron0x2fd0750()*-0.00264329);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5b00() {
   return (neuron0x2fd0a90()*-0.00312514);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5b40() {
   return (neuron0x2fd0dd0()*0.00942257);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5b80() {
   return (neuron0x2fd1110()*0.0525476);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5bc0() {
   return (neuron0x2fd1450()*-0.00484537);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5c00() {
   return (neuron0x2fd1790()*0.379806);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5f80() {
   return (neuron0x2fccc60()*-0.0722931);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5fc0() {
   return (neuron0x2fccf10()*-3.27774);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6000() {
   return (neuron0x2fcd250()*4.22189);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6040() {
   return (neuron0x2fcd590()*-0.0149556);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6080() {
   return (neuron0x2fcd8d0()*-0.0035734);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff60c0() {
   return (neuron0x2fcdc10()*0.0649759);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6100() {
   return (neuron0x2fcdf50()*-0.0325666);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6140() {
   return (neuron0x2fce290()*0.012422);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6180() {
   return (neuron0x2fce5d0()*-0.0279528);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff61c0() {
   return (neuron0x2fce910()*-0.0123141);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6200() {
   return (neuron0x2fcec50()*-0.0194461);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6240() {
   return (neuron0x2fcef90()*0.0955592);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6280() {
   return (neuron0x2fcf2d0()*0.0283097);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff62c0() {
   return (neuron0x2fcf610()*0.0152725);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6300() {
   return (neuron0x2fcf950()*-0.0614006);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6340() {
   return (neuron0x2fcfc90()*-0.00884075);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5dd0() {
   return (neuron0x2fcffd0()*0.00279925);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5e10() {
   return (neuron0x2fd0530()*0.0328372);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6490() {
   return (neuron0x2fd0750()*-0.0306074);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff64d0() {
   return (neuron0x2fd0a90()*0.0715465);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6510() {
   return (neuron0x2fd0dd0()*0.00975208);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6550() {
   return (neuron0x2fd1110()*0.0205091);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6590() {
   return (neuron0x2fd1450()*0.00359793);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff65d0() {
   return (neuron0x2fd1790()*-0.046084);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2b60() {
   return (neuron0x2fd1c00()*-0.528083);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd2ba0() {
   return (neuron0x2fd2550()*0.408946);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4080() {
   return (neuron0x2fd3030()*-1.44204);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd40c0() {
   return (neuron0x2d96380()*0.554751);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4a50() {
   return (neuron0x2fd3dd0()*-0.461328);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd4a90() {
   return (neuron0x2fd47a0()*-0.850996);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5820() {
   return (neuron0x2fd5570()*0.435635);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5860() {
   return (neuron0x2fd5f40()*-5.21584);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd61f0() {
   return (neuron0x2fd6910()*1.54212);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6230() {
   return (neuron0x2fd73f0()*1.02103);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6bc0() {
   return (neuron0x2fd7dc0()*0.275523);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd6c00() {
   return (neuron0x2fd4ea0()*0.528435);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd76a0() {
   return (neuron0x2fd9970()*-2.78153);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd76e0() {
   return (neuron0x2fda340()*-0.438966);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8070() {
   return (neuron0x2fdad10()*-0.625362);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd80b0() {
   return (neuron0x2fdb6e0()*0.814948);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5150() {
   return (neuron0x2fdd4f0()*2.20577);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd5190() {
   return (neuron0x2fdd7d0()*-1.22337);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9c20() {
   return (neuron0x2fde1a0()*0.572282);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd9c60() {
   return (neuron0x2fdeb70()*-0.675977);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda5f0() {
   return (neuron0x2fdf540()*0.313516);
}

double NNfunction_nn_chi1_chi4::synapse0x2fda630() {
   return (neuron0x2fdff10()*1.21166);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdafc0() {
   return (neuron0x2fd8a60()*0.109584);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb000() {
   return (neuron0x2fd9430()*-0.700042);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb990() {
   return (neuron0x2fe2ca0()*1.26052);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdb9d0() {
   return (neuron0x2fe3670()*2.37017);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcfb70() {
   return (neuron0x2fe4040()*-0.53019);
}

double NNfunction_nn_chi1_chi4::synapse0x2fcfbb0() {
   return (neuron0x2fe4a10()*-0.542102);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdda80() {
   return (neuron0x2fe53e0()*0.628487);
}

double NNfunction_nn_chi1_chi4::synapse0x2fddac0() {
   return (neuron0x2fe5db0()*-2.06162);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde450() {
   return (neuron0x2fe6780()*-0.888741);
}

double NNfunction_nn_chi1_chi4::synapse0x2fde490() {
   return (neuron0x2fe7150()*-6.34491);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdee20() {
   return (neuron0x2fdd1e0()*0.0322392);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdee60() {
   return (neuron0x2fe9d30()*-3.13816);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf7f0() {
   return (neuron0x2fea700()*-5.46081);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdf830() {
   return (neuron0x2feb0d0()*-1.6746);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe01c0() {
   return (neuron0x2febaa0()*0.881071);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0200() {
   return (neuron0x2fec470()*0.36821);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8d10() {
   return (neuron0x2fece40()*-0.527378);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd8d50() {
   return (neuron0x2fed810()*0.475134);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe25c0() {
   return (neuron0x2fee1e0()*-0.417789);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2600() {
   return (neuron0x2feedc0()*1.47973);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2f50() {
   return (neuron0x2fef790()*1.72301);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe2f90() {
   return (neuron0x2fe0610()*-6.56666);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3920() {
   return (neuron0x2fe0fe0()*-0.578682);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe3960() {
   return (neuron0x2fe19b0()*-2.1695);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe42f0() {
   return (neuron0x2ff3ff0()*0.564256);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4330() {
   return (neuron0x2ff48a0()*-0.848592);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4cc0() {
   return (neuron0x2ff5270()*-0.0623471);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe4d00() {
   return (neuron0x2ff5c40()*0.234049);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe7400() {
   return (neuron0x2fd1c00()*0.0271462);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe7440() {
   return (neuron0x2fd2550()*-0.0716765);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdc9c0() {
   return (neuron0x2fd3030()*2.04722);
}

double NNfunction_nn_chi1_chi4::synapse0x2fdca00() {
   return (neuron0x2d96380()*-0.0728655);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe9fe0() {
   return (neuron0x2fd3dd0()*0.0030411);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea020() {
   return (neuron0x2fd47a0()*1.01403);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea9b0() {
   return (neuron0x2fd5570()*0.194442);
}

double NNfunction_nn_chi1_chi4::synapse0x2fea9f0() {
   return (neuron0x2fd5f40()*-1.27996);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb380() {
   return (neuron0x2fd6910()*-0.113799);
}

double NNfunction_nn_chi1_chi4::synapse0x2feb3c0() {
   return (neuron0x2fd73f0()*0.0126197);
}

double NNfunction_nn_chi1_chi4::synapse0x2febd50() {
   return (neuron0x2fd7dc0()*-4.58243);
}

double NNfunction_nn_chi1_chi4::synapse0x2febd90() {
   return (neuron0x2fd4ea0()*0.249995);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec720() {
   return (neuron0x2fd9970()*2.53016);
}

double NNfunction_nn_chi1_chi4::synapse0x2fec760() {
   return (neuron0x2fda340()*-0.025153);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed0f0() {
   return (neuron0x2fdad10()*0.244938);
}

double NNfunction_nn_chi1_chi4::synapse0x2fed130() {
   return (neuron0x2fdb6e0()*-0.192376);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedac0() {
   return (neuron0x2fdd4f0()*-2.89389);
}

double NNfunction_nn_chi1_chi4::synapse0x2fedb00() {
   return (neuron0x2fdd7d0()*-1.49708);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee490() {
   return (neuron0x2fde1a0()*-0.199963);
}

double NNfunction_nn_chi1_chi4::synapse0x2fee4d0() {
   return (neuron0x2fdeb70()*0.130415);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef070() {
   return (neuron0x2fdf540()*-0.160966);
}

double NNfunction_nn_chi1_chi4::synapse0x2fef0b0() {
   return (neuron0x2fdff10()*-0.75418);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefa40() {
   return (neuron0x2fd8a60()*-3.81978);
}

double NNfunction_nn_chi1_chi4::synapse0x2fefa80() {
   return (neuron0x2fd9430()*0.326613);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe08c0() {
   return (neuron0x2fe2ca0()*0.0552487);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe0900() {
   return (neuron0x2fe3670()*-0.363827);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1290() {
   return (neuron0x2fe4040()*-0.164434);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe12d0() {
   return (neuron0x2fe4a10()*-0.101492);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1c60() {
   return (neuron0x2fe53e0()*-0.017839);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe1ca0() {
   return (neuron0x2fe5db0()*5.09306);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4180() {
   return (neuron0x2fe6780()*-1.66314);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff41c0() {
   return (neuron0x2fe7150()*0.287831);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4b50() {
   return (neuron0x2fdd1e0()*0.0757197);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff4b90() {
   return (neuron0x2fe9d30()*0.0266187);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5520() {
   return (neuron0x2fea700()*2.17685);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5560() {
   return (neuron0x2feb0d0()*0.00237392);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5ef0() {
   return (neuron0x2febaa0()*-5.03783);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff5f30() {
   return (neuron0x2fec470()*-0.0810594);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1e20() {
   return (neuron0x2fece40()*0.0894079);
}

double NNfunction_nn_chi1_chi4::synapse0x2fd1e60() {
   return (neuron0x2fed810()*0.0368155);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe5690() {
   return (neuron0x2fee1e0()*-0.109055);
}

double NNfunction_nn_chi1_chi4::synapse0x2fe56d0() {
   return (neuron0x2feedc0()*-0.0954787);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6610() {
   return (neuron0x2fef790()*-2.76226);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6650() {
   return (neuron0x2fe0610()*4.83228);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff6690() {
   return (neuron0x2fe0fe0()*2.08214);
}

double NNfunction_nn_chi1_chi4::synapse0x2ff66d0() {
   return (neuron0x2fe19b0()*-1.88896);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffd580() {
   return (neuron0x2ff3ff0()*0.0789815);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffd5c0() {
   return (neuron0x2ff48a0()*0.367671);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffd600() {
   return (neuron0x2ff5270()*5.37989);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffd640() {
   return (neuron0x2ff5c40()*-5.07003);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffd9c0() {
   return (neuron0x2fd1c00()*-0.226751);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffda00() {
   return (neuron0x2fd2550()*-0.89111);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffda40() {
   return (neuron0x2fd3030()*-5.00788);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffda80() {
   return (neuron0x2d96380()*-0.0651397);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdac0() {
   return (neuron0x2fd3dd0()*0.063942);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdb00() {
   return (neuron0x2fd47a0()*-0.329922);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdb40() {
   return (neuron0x2fd5570()*-0.716909);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdb80() {
   return (neuron0x2fd5f40()*0.977421);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdbc0() {
   return (neuron0x2fd6910()*-0.731758);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdc00() {
   return (neuron0x2fd73f0()*-0.759397);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdc40() {
   return (neuron0x2fd7dc0()*1.907);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdc80() {
   return (neuron0x2fd4ea0()*0.270026);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdcc0() {
   return (neuron0x2fd9970()*1.11792);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdd00() {
   return (neuron0x2fda340()*-0.276262);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdd40() {
   return (neuron0x2fdad10()*0.0424614);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdd80() {
   return (neuron0x2fdb6e0()*0.133272);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffd810() {
   return (neuron0x2fdd4f0()*-3.97481);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffd850() {
   return (neuron0x2fdd7d0()*1.79386);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffded0() {
   return (neuron0x2fde1a0()*-0.250185);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdf10() {
   return (neuron0x2fdeb70()*0.499751);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdf50() {
   return (neuron0x2fdf540()*0.444216);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdf90() {
   return (neuron0x2fdff10()*1.77446);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffdfd0() {
   return (neuron0x2fd8a60()*-2.60434);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe010() {
   return (neuron0x2fd9430()*-0.40013);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe050() {
   return (neuron0x2fe2ca0()*-1.23792);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe090() {
   return (neuron0x2fe3670()*-0.395112);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe0d0() {
   return (neuron0x2fe4040()*-0.127949);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe110() {
   return (neuron0x2fe4a10()*0.434729);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe150() {
   return (neuron0x2fe53e0()*-0.649906);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe190() {
   return (neuron0x2fe5db0()*1.27525);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe1d0() {
   return (neuron0x2fe6780()*-2.72253);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe210() {
   return (neuron0x2fe7150()*-1.58613);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffddc0() {
   return (neuron0x2fdd1e0()*0.403871);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffde00() {
   return (neuron0x2fe9d30()*-0.122985);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffde40() {
   return (neuron0x2fea700()*0.837269);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffde80() {
   return (neuron0x2feb0d0()*0.881952);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe460() {
   return (neuron0x2febaa0()*-1.9243);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe4a0() {
   return (neuron0x2fec470()*-0.226164);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe4e0() {
   return (neuron0x2fece40()*0.599758);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe520() {
   return (neuron0x2fed810()*-0.450781);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe560() {
   return (neuron0x2fee1e0()*-0.462606);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe5a0() {
   return (neuron0x2feedc0()*-2.81489);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe5e0() {
   return (neuron0x2fef790()*-3.39185);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe620() {
   return (neuron0x2fe0610()*1.53089);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe660() {
   return (neuron0x2fe0fe0()*1.53623);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe6a0() {
   return (neuron0x2fe19b0()*1.57483);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe6e0() {
   return (neuron0x2ff3ff0()*1.19486);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe720() {
   return (neuron0x2ff48a0()*1.21867);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe760() {
   return (neuron0x2ff5270()*-3.19879);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe7a0() {
   return (neuron0x2ff5c40()*-3.24906);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffeb20() {
   return (neuron0x2fd1c00()*-0.0109859);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffeb60() {
   return (neuron0x2fd2550()*-0.0268856);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffeba0() {
   return (neuron0x2fd3030()*-0.397275);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffebe0() {
   return (neuron0x2d96380()*-0.042778);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffec20() {
   return (neuron0x2fd3dd0()*0.0059985);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffec60() {
   return (neuron0x2fd47a0()*-0.597006);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffeca0() {
   return (neuron0x2fd5570()*-0.0708836);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffece0() {
   return (neuron0x2fd5f40()*5.49363);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffed20() {
   return (neuron0x2fd6910()*0.680085);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffed60() {
   return (neuron0x2fd73f0()*0.228224);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffeda0() {
   return (neuron0x2fd7dc0()*0.944498);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffede0() {
   return (neuron0x2fd4ea0()*0.0227608);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffee20() {
   return (neuron0x2fd9970()*2.50571);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffee60() {
   return (neuron0x2fda340()*-0.0783912);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffeea0() {
   return (neuron0x2fdad10()*-0.0686696);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffeee0() {
   return (neuron0x2fdb6e0()*0.0288117);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe970() {
   return (neuron0x2fdd4f0()*1.47517);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffe9b0() {
   return (neuron0x2fdd7d0()*0.528151);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff030() {
   return (neuron0x2fde1a0()*0.0936189);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff070() {
   return (neuron0x2fdeb70()*-0.0616678);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff0b0() {
   return (neuron0x2fdf540()*0.0187418);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff0f0() {
   return (neuron0x2fdff10()*-0.0454324);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff130() {
   return (neuron0x2fd8a60()*0.331359);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff170() {
   return (neuron0x2fd9430()*-0.111198);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff1b0() {
   return (neuron0x2fe2ca0()*0.0341258);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff1f0() {
   return (neuron0x2fe3670()*-2.4423);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff230() {
   return (neuron0x2fe4040()*0.0666996);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff270() {
   return (neuron0x2fe4a10()*0.0555665);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff2b0() {
   return (neuron0x2fe53e0()*0.0847088);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff2f0() {
   return (neuron0x2fe5db0()*1.51982);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff330() {
   return (neuron0x2fe6780()*1.11058);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff370() {
   return (neuron0x2fe7150()*0.9019);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffef20() {
   return (neuron0x2fdd1e0()*-0.531382);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffef60() {
   return (neuron0x2fe9d30()*-0.145354);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffefa0() {
   return (neuron0x2fea700()*0.263495);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffefe0() {
   return (neuron0x2feb0d0()*-0.791846);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff5c0() {
   return (neuron0x2febaa0()*-3.14762);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff600() {
   return (neuron0x2fec470()*0.0458128);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff640() {
   return (neuron0x2fece40()*-0.0709947);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff680() {
   return (neuron0x2fed810()*0.0629252);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff6c0() {
   return (neuron0x2fee1e0()*-0.0122944);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff700() {
   return (neuron0x2feedc0()*0.46105);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff740() {
   return (neuron0x2fef790()*0.503429);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff780() {
   return (neuron0x2fe0610()*-2.49176);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff7c0() {
   return (neuron0x2fe0fe0()*-1.02847);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff800() {
   return (neuron0x2fe19b0()*1.46216);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff840() {
   return (neuron0x2ff3ff0()*0.0978426);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff880() {
   return (neuron0x2ff48a0()*0.103866);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff8c0() {
   return (neuron0x2ff5270()*0.345903);
}

double NNfunction_nn_chi1_chi4::synapse0x2fff900() {
   return (neuron0x2ff5c40()*0.449772);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffc80() {
   return (neuron0x2fd1c00()*-0.0142393);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffcc0() {
   return (neuron0x2fd2550()*0.0145854);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffd00() {
   return (neuron0x2fd3030()*-0.476081);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffd40() {
   return (neuron0x2d96380()*-0.00170665);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffd80() {
   return (neuron0x2fd3dd0()*-0.00739654);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffdc0() {
   return (neuron0x2fd47a0()*-0.0904091);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffe00() {
   return (neuron0x2fd5570()*-0.0260152);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffe40() {
   return (neuron0x2fd5f40()*3.1216);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffe80() {
   return (neuron0x2fd6910()*0.14375);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffec0() {
   return (neuron0x2fd73f0()*0.0485455);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffff00() {
   return (neuron0x2fd7dc0()*0.552554);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffff40() {
   return (neuron0x2fd4ea0()*-0.00650524);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffff80() {
   return (neuron0x2fd9970()*0.777181);
}

double NNfunction_nn_chi1_chi4::synapse0x2ffffc0() {
   return (neuron0x2fda340()*-0.0213219);
}

double NNfunction_nn_chi1_chi4::synapse0x3000000() {
   return (neuron0x2fdad10()*-0.0656594);
}

double NNfunction_nn_chi1_chi4::synapse0x3000040() {
   return (neuron0x2fdb6e0()*0.0120718);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffad0() {
   return (neuron0x2fdd4f0()*0.188816);
}

double NNfunction_nn_chi1_chi4::synapse0x2fffb10() {
   return (neuron0x2fdd7d0()*0.345027);
}

double NNfunction_nn_chi1_chi4::synapse0x3000190() {
   return (neuron0x2fde1a0()*0.062847);
}

double NNfunction_nn_chi1_chi4::synapse0x30001d0() {
   return (neuron0x2fdeb70()*0.0271373);
}

double NNfunction_nn_chi1_chi4::synapse0x3000210() {
   return (neuron0x2fdf540()*0.00410834);
}

double NNfunction_nn_chi1_chi4::synapse0x3000250() {
   return (neuron0x2fdff10()*0.0650511);
}

double NNfunction_nn_chi1_chi4::synapse0x3000290() {
   return (neuron0x2fd8a60()*-0.00373381);
}

double NNfunction_nn_chi1_chi4::synapse0x30002d0() {
   return (neuron0x2fd9430()*-0.0822651);
}

double NNfunction_nn_chi1_chi4::synapse0x3000310() {
   return (neuron0x2fe2ca0()*0.0161004);
}

double NNfunction_nn_chi1_chi4::synapse0x3000350() {
   return (neuron0x2fe3670()*-2.51488);
}

double NNfunction_nn_chi1_chi4::synapse0x3000390() {
   return (neuron0x2fe4040()*0.0160482);
}

double NNfunction_nn_chi1_chi4::synapse0x30003d0() {
   return (neuron0x2fe4a10()*0.00823883);
}

double NNfunction_nn_chi1_chi4::synapse0x3000410() {
   return (neuron0x2fe53e0()*0.0129232);
}

double NNfunction_nn_chi1_chi4::synapse0x3000450() {
   return (neuron0x2fe5db0()*-1.4856);
}

double NNfunction_nn_chi1_chi4::synapse0x3000490() {
   return (neuron0x2fe6780()*0.62388);
}

double NNfunction_nn_chi1_chi4::synapse0x30004d0() {
   return (neuron0x2fe7150()*1.04126);
}

double NNfunction_nn_chi1_chi4::synapse0x3000080() {
   return (neuron0x2fdd1e0()*-0.581371);
}

double NNfunction_nn_chi1_chi4::synapse0x30000c0() {
   return (neuron0x2fe9d30()*-1.15079);
}

double NNfunction_nn_chi1_chi4::synapse0x3000100() {
   return (neuron0x2fea700()*-0.0584262);
}

double NNfunction_nn_chi1_chi4::synapse0x3000140() {
   return (neuron0x2feb0d0()*-0.168229);
}

double NNfunction_nn_chi1_chi4::synapse0x3000720() {
   return (neuron0x2febaa0()*1.23251);
}

double NNfunction_nn_chi1_chi4::synapse0x3000760() {
   return (neuron0x2fec470()*0.0300971);
}

double NNfunction_nn_chi1_chi4::synapse0x30007a0() {
   return (neuron0x2fece40()*-0.0444061);
}

double NNfunction_nn_chi1_chi4::synapse0x30007e0() {
   return (neuron0x2fed810()*-0.00613594);
}

double NNfunction_nn_chi1_chi4::synapse0x3000820() {
   return (neuron0x2fee1e0()*-0.00419736);
}

double NNfunction_nn_chi1_chi4::synapse0x3000860() {
   return (neuron0x2feedc0()*0.0831584);
}

double NNfunction_nn_chi1_chi4::synapse0x30008a0() {
   return (neuron0x2fef790()*0.278533);
}

double NNfunction_nn_chi1_chi4::synapse0x30008e0() {
   return (neuron0x2fe0610()*-0.501854);
}

double NNfunction_nn_chi1_chi4::synapse0x3000920() {
   return (neuron0x2fe0fe0()*-0.576053);
}

double NNfunction_nn_chi1_chi4::synapse0x3000960() {
   return (neuron0x2fe19b0()*0.657257);
}

double NNfunction_nn_chi1_chi4::synapse0x30009a0() {
   return (neuron0x2ff3ff0()*0.0305187);
}

double NNfunction_nn_chi1_chi4::synapse0x30009e0() {
   return (neuron0x2ff48a0()*-0.0283702);
}

double NNfunction_nn_chi1_chi4::synapse0x3000a20() {
   return (neuron0x2ff5270()*-0.338705);
}

double NNfunction_nn_chi1_chi4::synapse0x3000a60() {
   return (neuron0x2ff5c40()*1.00143);
}

double NNfunction_nn_chi1_chi4::synapse0x3000cc0() {
   return (neuron0x2ffce40()*11.263);
}

double NNfunction_nn_chi1_chi4::synapse0x3000d00() {
   return (neuron0x2ffd1e0()*-2.14286);
}

double NNfunction_nn_chi1_chi4::synapse0x3000d40() {
   return (neuron0x2ffd680()*-0.941657);
}

double NNfunction_nn_chi1_chi4::synapse0x3000d80() {
   return (neuron0x2ffe7e0()*4.93453);
}

double NNfunction_nn_chi1_chi4::synapse0x3000dc0() {
   return (neuron0x2fff940()*-8.99164);
}

