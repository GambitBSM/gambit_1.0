#include "NNfunction-ss_uLcR.h"
#include <cmath>

double NNfunction-ss_uLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.949)/15.0141;
   input1 = (in1 - 46.9791)/763.365;
   input2 = (in2 - 375.278)/478.685;
   input3 = (in3 - 239.395)/626.14;
   input4 = (in4 - 750.645)/714.176;
   input5 = (in5 - 652.26)/684.56;
   input6 = (in6 - 660.342)/691.836;
   input7 = (in7 - 653.935)/683.97;
   input8 = (in8 - 646.078)/697.459;
   input9 = (in9 - 637.175)/682.063;
   input10 = (in10 - 654.534)/712.13;
   input11 = (in11 - 537.076)/341.615;
   input12 = (in12 - 670.561)/589.212;
   input13 = (in13 - 517.415)/365.095;
   input14 = (in14 - 670.045)/567.329;
   input15 = (in15 - 545.462)/346.711;
   input16 = (in16 - 469.553)/392.234;
   input17 = (in17 - 681.937)/607.83;
   input18 = (in18 - 676.127)/605.648;
   input19 = (in19 - 681.701)/602.758;
   input20 = (in20 - -190.957)/405.735;
   input21 = (in21 - -244.774)/885.042;
   input22 = (in22 - 1.79047)/895.556;
   input23 = (in23 - -21.3249)/492.785;
   switch(index) {
     case 0:
         return neuron0x27d3030();
     default:
         return 0.;
   }
}

double NNfunction-ss_uLcR::Value(int index, double* input) {
   input0 = (input[0] - 22.949)/15.0141;
   input1 = (input[1] - 46.9791)/763.365;
   input2 = (input[2] - 375.278)/478.685;
   input3 = (input[3] - 239.395)/626.14;
   input4 = (input[4] - 750.645)/714.176;
   input5 = (input[5] - 652.26)/684.56;
   input6 = (input[6] - 660.342)/691.836;
   input7 = (input[7] - 653.935)/683.97;
   input8 = (input[8] - 646.078)/697.459;
   input9 = (input[9] - 637.175)/682.063;
   input10 = (input[10] - 654.534)/712.13;
   input11 = (input[11] - 537.076)/341.615;
   input12 = (input[12] - 670.561)/589.212;
   input13 = (input[13] - 517.415)/365.095;
   input14 = (input[14] - 670.045)/567.329;
   input15 = (input[15] - 545.462)/346.711;
   input16 = (input[16] - 469.553)/392.234;
   input17 = (input[17] - 681.937)/607.83;
   input18 = (input[18] - 676.127)/605.648;
   input19 = (input[19] - 681.701)/602.758;
   input20 = (input[20] - -190.957)/405.735;
   input21 = (input[21] - -244.774)/885.042;
   input22 = (input[22] - 1.79047)/895.556;
   input23 = (input[23] - -21.3249)/492.785;
   switch(index) {
     case 0:
         return neuron0x27d3030();
     default:
         return 0.;
   }
}

double NNfunction-ss_uLcR::neuron0x279f1f0() {
   return input0;
}

double NNfunction-ss_uLcR::neuron0x279f4a0() {
   return input1;
}

double NNfunction-ss_uLcR::neuron0x279f7e0() {
   return input2;
}

double NNfunction-ss_uLcR::neuron0x279fb20() {
   return input3;
}

double NNfunction-ss_uLcR::neuron0x279fe60() {
   return input4;
}

double NNfunction-ss_uLcR::neuron0x27a01a0() {
   return input5;
}

double NNfunction-ss_uLcR::neuron0x27a04e0() {
   return input6;
}

double NNfunction-ss_uLcR::neuron0x27a0820() {
   return input7;
}

double NNfunction-ss_uLcR::neuron0x27a0b60() {
   return input8;
}

double NNfunction-ss_uLcR::neuron0x27a0ea0() {
   return input9;
}

double NNfunction-ss_uLcR::neuron0x27a11e0() {
   return input10;
}

double NNfunction-ss_uLcR::neuron0x27a1520() {
   return input11;
}

double NNfunction-ss_uLcR::neuron0x27a1860() {
   return input12;
}

double NNfunction-ss_uLcR::neuron0x27a1ba0() {
   return input13;
}

double NNfunction-ss_uLcR::neuron0x27a1ee0() {
   return input14;
}

double NNfunction-ss_uLcR::neuron0x27a2220() {
   return input15;
}

double NNfunction-ss_uLcR::neuron0x27a2560() {
   return input16;
}

double NNfunction-ss_uLcR::neuron0x27a2ac0() {
   return input17;
}

double NNfunction-ss_uLcR::neuron0x27a2ce0() {
   return input18;
}

double NNfunction-ss_uLcR::neuron0x27a3020() {
   return input19;
}

double NNfunction-ss_uLcR::neuron0x27a3360() {
   return input20;
}

double NNfunction-ss_uLcR::neuron0x27a36a0() {
   return input21;
}

double NNfunction-ss_uLcR::neuron0x27a39e0() {
   return input22;
}

double NNfunction-ss_uLcR::neuron0x27a3d20() {
   return input23;
}

double NNfunction-ss_uLcR::input0x27a4190() {
   double input = 0.902373;
   input += synapse0x279f170();
   input += synapse0x279f1b0();
   input += synapse0x27a4440();
   input += synapse0x27a4480();
   input += synapse0x27a44c0();
   input += synapse0x27a4500();
   input += synapse0x27a4540();
   input += synapse0x27a4580();
   input += synapse0x27a45c0();
   input += synapse0x27a4600();
   input += synapse0x27a4640();
   input += synapse0x27a4680();
   input += synapse0x27a46c0();
   input += synapse0x27a4700();
   input += synapse0x27a4740();
   input += synapse0x27a4780();
   input += synapse0x279f0e0();
   input += synapse0x279f120();
   input += synapse0x255a2b0();
   input += synapse0x255a2f0();
   input += synapse0x27a49e0();
   input += synapse0x27a4a20();
   input += synapse0x27a4a60();
   input += synapse0x27a4aa0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a4190() {
   double input = input0x27a4190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27a4ae0() {
   double input = -1.33329;
   input += synapse0x27a4e20();
   input += synapse0x27a4e60();
   input += synapse0x27a4ea0();
   input += synapse0x27a4ee0();
   input += synapse0x27a4f20();
   input += synapse0x27a4f60();
   input += synapse0x27a4fa0();
   input += synapse0x27a4fe0();
   input += synapse0x27a5020();
   input += synapse0x27a48d0();
   input += synapse0x27a4910();
   input += synapse0x27a4950();
   input += synapse0x27a4990();
   input += synapse0x27a5270();
   input += synapse0x27a52b0();
   input += synapse0x27a52f0();
   input += synapse0x27a4c70();
   input += synapse0x27a4cb0();
   input += synapse0x27a5440();
   input += synapse0x27a5480();
   input += synapse0x27a54c0();
   input += synapse0x27a5500();
   input += synapse0x27a5540();
   input += synapse0x27a5580();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a4ae0() {
   double input = input0x27a4ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27a55c0() {
   double input = 0.211963;
   input += synapse0x27a5900();
   input += synapse0x27a5940();
   input += synapse0x27a5980();
   input += synapse0x27a59c0();
   input += synapse0x27a5a00();
   input += synapse0x27a5a40();
   input += synapse0x27a5a80();
   input += synapse0x27a5ac0();
   input += synapse0x27a5b00();
   input += synapse0x27a5b40();
   input += synapse0x27a5b80();
   input += synapse0x27a5bc0();
   input += synapse0x27a5c00();
   input += synapse0x27a5c40();
   input += synapse0x27a5c80();
   input += synapse0x27a5cc0();
   input += synapse0x27a5750();
   input += synapse0x27a5790();
   input += synapse0x278e260();
   input += synapse0x25681b0();
   input += synapse0x25681f0();
   input += synapse0x2683700();
   input += synapse0x2683740();
   input += synapse0x279ef50();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a55c0() {
   double input = input0x27a55c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x2568910() {
   double input = -0.680415;
   input += synapse0x2568aa0();
   input += synapse0x27a5180();
   input += synapse0x27a51c0();
   input += synapse0x27a5200();
   input += synapse0x27a5e10();
   input += synapse0x27a5e50();
   input += synapse0x27a5e90();
   input += synapse0x27a5ed0();
   input += synapse0x27a5f10();
   input += synapse0x27a5f50();
   input += synapse0x27a5f90();
   input += synapse0x27a5fd0();
   input += synapse0x27a6010();
   input += synapse0x27a6050();
   input += synapse0x27a6090();
   input += synapse0x27a60d0();
   input += synapse0x279ef90();
   input += synapse0x279efd0();
   input += synapse0x279f010();
   input += synapse0x27a6220();
   input += synapse0x27a6260();
   input += synapse0x27a62a0();
   input += synapse0x27a62e0();
   input += synapse0x27a6320();
   return input;
}

double NNfunction-ss_uLcR::neuron0x2568910() {
   double input = input0x2568910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27a6360() {
   double input = -1.2172;
   input += synapse0x27a66a0();
   input += synapse0x27a66e0();
   input += synapse0x27a6720();
   input += synapse0x27a6760();
   input += synapse0x27a67a0();
   input += synapse0x27a67e0();
   input += synapse0x27a6820();
   input += synapse0x27a6860();
   input += synapse0x27a68a0();
   input += synapse0x27a68e0();
   input += synapse0x27a6920();
   input += synapse0x27a6960();
   input += synapse0x27a69a0();
   input += synapse0x27a69e0();
   input += synapse0x27a6a20();
   input += synapse0x27a6a60();
   input += synapse0x27a64f0();
   input += synapse0x27a6530();
   input += synapse0x27a6bb0();
   input += synapse0x27a6bf0();
   input += synapse0x27a6c30();
   input += synapse0x27a6c70();
   input += synapse0x27a6cb0();
   input += synapse0x27a6cf0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a6360() {
   double input = input0x27a6360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27a6d30() {
   double input = 4.24361;
   input += synapse0x27a7070();
   input += synapse0x27a70b0();
   input += synapse0x27a70f0();
   input += synapse0x27a7130();
   input += synapse0x27a7170();
   input += synapse0x27a71b0();
   input += synapse0x27a71f0();
   input += synapse0x27a7230();
   input += synapse0x27a7270();
   input += synapse0x2568500();
   input += synapse0x2568540();
   input += synapse0x2568580();
   input += synapse0x25685c0();
   input += synapse0x2568600();
   input += synapse0x2568640();
   input += synapse0x2568680();
   input += synapse0x27a6ec0();
   input += synapse0x27a6f00();
   input += synapse0x25687d0();
   input += synapse0x2568810();
   input += synapse0x2568850();
   input += synapse0x2568890();
   input += synapse0x25688d0();
   input += synapse0x27a7ac0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a6d30() {
   double input = input0x27a6d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27a7b00() {
   double input = 1.05855;
   input += synapse0x27a7e40();
   input += synapse0x27a7e80();
   input += synapse0x27a7ec0();
   input += synapse0x27a7f00();
   input += synapse0x27a7f40();
   input += synapse0x27a7f80();
   input += synapse0x27a7fc0();
   input += synapse0x27a8000();
   input += synapse0x27a8040();
   input += synapse0x27a8080();
   input += synapse0x27a80c0();
   input += synapse0x27a8100();
   input += synapse0x27a8140();
   input += synapse0x27a8180();
   input += synapse0x27a81c0();
   input += synapse0x27a8200();
   input += synapse0x27a7c90();
   input += synapse0x27a7cd0();
   input += synapse0x27a8350();
   input += synapse0x27a8390();
   input += synapse0x27a83d0();
   input += synapse0x27a8410();
   input += synapse0x27a8450();
   input += synapse0x27a8490();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a7b00() {
   double input = input0x27a7b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27a84d0() {
   double input = -0.414329;
   input += synapse0x27a8810();
   input += synapse0x27a8850();
   input += synapse0x27a8890();
   input += synapse0x27a88d0();
   input += synapse0x27a8910();
   input += synapse0x27a8950();
   input += synapse0x27a8990();
   input += synapse0x27a89d0();
   input += synapse0x27a8a10();
   input += synapse0x27a8a50();
   input += synapse0x27a8a90();
   input += synapse0x27a8ad0();
   input += synapse0x27a8b10();
   input += synapse0x27a8b50();
   input += synapse0x27a8b90();
   input += synapse0x27a8bd0();
   input += synapse0x27a8660();
   input += synapse0x27a86a0();
   input += synapse0x27a8d20();
   input += synapse0x27a8d60();
   input += synapse0x27a8da0();
   input += synapse0x27a8de0();
   input += synapse0x27a8e20();
   input += synapse0x27a8e60();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a84d0() {
   double input = input0x27a84d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27a8ea0() {
   double input = 2.28381;
   input += synapse0x27a29b0();
   input += synapse0x27a29f0();
   input += synapse0x27a2a30();
   input += synapse0x27a2a70();
   input += synapse0x27a93f0();
   input += synapse0x27a9430();
   input += synapse0x27a9470();
   input += synapse0x27a94b0();
   input += synapse0x27a94f0();
   input += synapse0x27a9530();
   input += synapse0x27a9570();
   input += synapse0x27a95b0();
   input += synapse0x27a95f0();
   input += synapse0x27a9630();
   input += synapse0x27a9670();
   input += synapse0x27a96b0();
   input += synapse0x27a9030();
   input += synapse0x27a9070();
   input += synapse0x27a9800();
   input += synapse0x27a9840();
   input += synapse0x27a9880();
   input += synapse0x27a98c0();
   input += synapse0x27a9900();
   input += synapse0x27a9940();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a8ea0() {
   double input = input0x27a8ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27a9980() {
   double input = -0.188682;
   input += synapse0x27a9cc0();
   input += synapse0x27a9d00();
   input += synapse0x27a9d40();
   input += synapse0x27a9d80();
   input += synapse0x27a9dc0();
   input += synapse0x27a9e00();
   input += synapse0x27a9e40();
   input += synapse0x27a9e80();
   input += synapse0x27a9ec0();
   input += synapse0x27a9f00();
   input += synapse0x27a9f40();
   input += synapse0x27a9f80();
   input += synapse0x27a9fc0();
   input += synapse0x27aa000();
   input += synapse0x27aa040();
   input += synapse0x27aa080();
   input += synapse0x27a9b10();
   input += synapse0x27a9b50();
   input += synapse0x27aa1d0();
   input += synapse0x27aa210();
   input += synapse0x27aa250();
   input += synapse0x27aa290();
   input += synapse0x27aa2d0();
   input += synapse0x27aa310();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a9980() {
   double input = input0x27a9980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27aa350() {
   double input = -0.270937;
   input += synapse0x27aa690();
   input += synapse0x27aa6d0();
   input += synapse0x27aa710();
   input += synapse0x27aa750();
   input += synapse0x27aa790();
   input += synapse0x27aa7d0();
   input += synapse0x27aa810();
   input += synapse0x27aa850();
   input += synapse0x27aa890();
   input += synapse0x27aa8d0();
   input += synapse0x27aa910();
   input += synapse0x27aa950();
   input += synapse0x27aa990();
   input += synapse0x27aa9d0();
   input += synapse0x27aaa10();
   input += synapse0x27aaa50();
   input += synapse0x27aa4e0();
   input += synapse0x27aa520();
   input += synapse0x27a72b0();
   input += synapse0x27a72f0();
   input += synapse0x27a7330();
   input += synapse0x27a7370();
   input += synapse0x27a73b0();
   input += synapse0x27a73f0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27aa350() {
   double input = input0x27aa350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27a7430() {
   double input = 0.817299;
   input += synapse0x27a7770();
   input += synapse0x27a77b0();
   input += synapse0x27a77f0();
   input += synapse0x27a7830();
   input += synapse0x27a7870();
   input += synapse0x27a78b0();
   input += synapse0x27a78f0();
   input += synapse0x27a7930();
   input += synapse0x27a7970();
   input += synapse0x27a79b0();
   input += synapse0x27a79f0();
   input += synapse0x27a7a30();
   input += synapse0x27a7a70();
   input += synapse0x27abbb0();
   input += synapse0x27abbf0();
   input += synapse0x27abc30();
   input += synapse0x27a75c0();
   input += synapse0x27a7600();
   input += synapse0x27abd80();
   input += synapse0x27abdc0();
   input += synapse0x27abe00();
   input += synapse0x27abe40();
   input += synapse0x27abe80();
   input += synapse0x27abec0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27a7430() {
   double input = input0x27a7430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27abf00() {
   double input = -0.242088;
   input += synapse0x27ac240();
   input += synapse0x27ac280();
   input += synapse0x27ac2c0();
   input += synapse0x27ac300();
   input += synapse0x27ac340();
   input += synapse0x27ac380();
   input += synapse0x27ac3c0();
   input += synapse0x27ac400();
   input += synapse0x27ac440();
   input += synapse0x27ac480();
   input += synapse0x27ac4c0();
   input += synapse0x27ac500();
   input += synapse0x27ac540();
   input += synapse0x27ac580();
   input += synapse0x27ac5c0();
   input += synapse0x27ac600();
   input += synapse0x27ac090();
   input += synapse0x27ac0d0();
   input += synapse0x27ac750();
   input += synapse0x27ac790();
   input += synapse0x27ac7d0();
   input += synapse0x27ac810();
   input += synapse0x27ac850();
   input += synapse0x27ac890();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27abf00() {
   double input = input0x27abf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27ac8d0() {
   double input = 0.589431;
   input += synapse0x27acc10();
   input += synapse0x27acc50();
   input += synapse0x27acc90();
   input += synapse0x27accd0();
   input += synapse0x27acd10();
   input += synapse0x27acd50();
   input += synapse0x27acd90();
   input += synapse0x27acdd0();
   input += synapse0x27ace10();
   input += synapse0x27ace50();
   input += synapse0x27ace90();
   input += synapse0x27aced0();
   input += synapse0x27acf10();
   input += synapse0x27acf50();
   input += synapse0x27acf90();
   input += synapse0x27acfd0();
   input += synapse0x27aca60();
   input += synapse0x27acaa0();
   input += synapse0x27ad120();
   input += synapse0x27ad160();
   input += synapse0x27ad1a0();
   input += synapse0x27ad1e0();
   input += synapse0x27ad220();
   input += synapse0x27ad260();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27ac8d0() {
   double input = input0x27ac8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27ad2a0() {
   double input = 1.20703;
   input += synapse0x27ad5e0();
   input += synapse0x27ad620();
   input += synapse0x27ad660();
   input += synapse0x27ad6a0();
   input += synapse0x27ad6e0();
   input += synapse0x27ad720();
   input += synapse0x27ad760();
   input += synapse0x27ad7a0();
   input += synapse0x27ad7e0();
   input += synapse0x27ad820();
   input += synapse0x27ad860();
   input += synapse0x27ad8a0();
   input += synapse0x27ad8e0();
   input += synapse0x27ad920();
   input += synapse0x27ad960();
   input += synapse0x27ad9a0();
   input += synapse0x27ad430();
   input += synapse0x27ad470();
   input += synapse0x27adaf0();
   input += synapse0x27adb30();
   input += synapse0x27adb70();
   input += synapse0x27adbb0();
   input += synapse0x27adbf0();
   input += synapse0x27adc30();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27ad2a0() {
   double input = input0x27ad2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27adc70() {
   double input = -0.58785;
   input += synapse0x27adfb0();
   input += synapse0x279f380();
   input += synapse0x279f3c0();
   input += synapse0x279f6c0();
   input += synapse0x279f700();
   input += synapse0x279fa00();
   input += synapse0x279fa40();
   input += synapse0x279fd40();
   input += synapse0x279fd80();
   input += synapse0x27a0080();
   input += synapse0x27a00c0();
   input += synapse0x27a03c0();
   input += synapse0x27a0400();
   input += synapse0x27a0700();
   input += synapse0x27a0740();
   input += synapse0x27a0a40();
   input += synapse0x27a0a80();
   input += synapse0x27a0d80();
   input += synapse0x27a0dc0();
   input += synapse0x27a10c0();
   input += synapse0x27a1100();
   input += synapse0x27a1400();
   input += synapse0x27a1440();
   input += synapse0x27a1740();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27adc70() {
   double input = input0x27adc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27afa80() {
   double input = -0.421102;
   input += synapse0x27a1780();
   input += synapse0x27a2440();
   input += synapse0x27a2480();
   input += synapse0x27ade00();
   input += synapse0x27ade40();
   input += synapse0x27a2780();
   input += synapse0x27a27c0();
   input += synapse0x255a190();
   input += synapse0x255a1d0();
   input += synapse0x27a2f00();
   input += synapse0x27a2f40();
   input += synapse0x27a3240();
   input += synapse0x27a3280();
   input += synapse0x27a3580();
   input += synapse0x27a35c0();
   input += synapse0x27a38c0();
   input += synapse0x27a3900();
   input += synapse0x27a3c00();
   input += synapse0x27a3c40();
   input += synapse0x27a3f40();
   input += synapse0x27a3f80();
   input += synapse0x27a1a80();
   input += synapse0x27a1ac0();
   input += synapse0x27afd20();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27afa80() {
   double input = input0x27afa80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27afd60() {
   double input = -0.63376;
   input += synapse0x27b00a0();
   input += synapse0x27b00e0();
   input += synapse0x27b0120();
   input += synapse0x27b0160();
   input += synapse0x27b01a0();
   input += synapse0x27b01e0();
   input += synapse0x27b0220();
   input += synapse0x27b0260();
   input += synapse0x27b02a0();
   input += synapse0x27b02e0();
   input += synapse0x27b0320();
   input += synapse0x27b0360();
   input += synapse0x27b03a0();
   input += synapse0x27b03e0();
   input += synapse0x27b0420();
   input += synapse0x27b0460();
   input += synapse0x27afef0();
   input += synapse0x27aff30();
   input += synapse0x27b05b0();
   input += synapse0x27b05f0();
   input += synapse0x27b0630();
   input += synapse0x27b0670();
   input += synapse0x27b06b0();
   input += synapse0x27b06f0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27afd60() {
   double input = input0x27afd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b0730() {
   double input = 0.508445;
   input += synapse0x27b0a70();
   input += synapse0x27b0ab0();
   input += synapse0x27b0af0();
   input += synapse0x27b0b30();
   input += synapse0x27b0b70();
   input += synapse0x27b0bb0();
   input += synapse0x27b0bf0();
   input += synapse0x27b0c30();
   input += synapse0x27b0c70();
   input += synapse0x27b0cb0();
   input += synapse0x27b0cf0();
   input += synapse0x27b0d30();
   input += synapse0x27b0d70();
   input += synapse0x27b0db0();
   input += synapse0x27b0df0();
   input += synapse0x27b0e30();
   input += synapse0x27b08c0();
   input += synapse0x27b0900();
   input += synapse0x27b0f80();
   input += synapse0x27b0fc0();
   input += synapse0x27b1000();
   input += synapse0x27b1040();
   input += synapse0x27b1080();
   input += synapse0x27b10c0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b0730() {
   double input = input0x27b0730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b1100() {
   double input = 0.25475;
   input += synapse0x27b1440();
   input += synapse0x27b1480();
   input += synapse0x27b14c0();
   input += synapse0x27b1500();
   input += synapse0x27b1540();
   input += synapse0x27b1580();
   input += synapse0x27b15c0();
   input += synapse0x27b1600();
   input += synapse0x27b1640();
   input += synapse0x27b1680();
   input += synapse0x27b16c0();
   input += synapse0x27b1700();
   input += synapse0x27b1740();
   input += synapse0x27b1780();
   input += synapse0x27b17c0();
   input += synapse0x27b1800();
   input += synapse0x27b1290();
   input += synapse0x27b12d0();
   input += synapse0x27b1950();
   input += synapse0x27b1990();
   input += synapse0x27b19d0();
   input += synapse0x27b1a10();
   input += synapse0x27b1a50();
   input += synapse0x27b1a90();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b1100() {
   double input = input0x27b1100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b1ad0() {
   double input = 1.12486;
   input += synapse0x27b1e10();
   input += synapse0x27b1e50();
   input += synapse0x27b1e90();
   input += synapse0x27b1ed0();
   input += synapse0x27b1f10();
   input += synapse0x27b1f50();
   input += synapse0x27b1f90();
   input += synapse0x27b1fd0();
   input += synapse0x27b2010();
   input += synapse0x27b2050();
   input += synapse0x27b2090();
   input += synapse0x27b20d0();
   input += synapse0x27b2110();
   input += synapse0x27b2150();
   input += synapse0x27b2190();
   input += synapse0x27b21d0();
   input += synapse0x27b1c60();
   input += synapse0x27b1ca0();
   input += synapse0x27b2320();
   input += synapse0x27b2360();
   input += synapse0x27b23a0();
   input += synapse0x27b23e0();
   input += synapse0x27b2420();
   input += synapse0x27b2460();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b1ad0() {
   double input = input0x27b1ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b24a0() {
   double input = -0.429814;
   input += synapse0x27b27e0();
   input += synapse0x27b2820();
   input += synapse0x27b2860();
   input += synapse0x27b28a0();
   input += synapse0x27b28e0();
   input += synapse0x27b2920();
   input += synapse0x27b2960();
   input += synapse0x27b29a0();
   input += synapse0x27b29e0();
   input += synapse0x27aaba0();
   input += synapse0x27aabe0();
   input += synapse0x27aac20();
   input += synapse0x27aac60();
   input += synapse0x27aaca0();
   input += synapse0x27aace0();
   input += synapse0x27aad20();
   input += synapse0x27b2630();
   input += synapse0x27b2670();
   input += synapse0x27aae70();
   input += synapse0x27aaeb0();
   input += synapse0x27aaef0();
   input += synapse0x27aaf30();
   input += synapse0x27aaf70();
   input += synapse0x27aafb0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b24a0() {
   double input = input0x27b24a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27aaff0() {
   double input = 0.707953;
   input += synapse0x27ab330();
   input += synapse0x27ab370();
   input += synapse0x27ab3b0();
   input += synapse0x27ab3f0();
   input += synapse0x27ab430();
   input += synapse0x27ab470();
   input += synapse0x27ab4b0();
   input += synapse0x27ab4f0();
   input += synapse0x27ab530();
   input += synapse0x27ab570();
   input += synapse0x27ab5b0();
   input += synapse0x27ab5f0();
   input += synapse0x27ab630();
   input += synapse0x27ab670();
   input += synapse0x27ab6b0();
   input += synapse0x27ab6f0();
   input += synapse0x27ab180();
   input += synapse0x27ab1c0();
   input += synapse0x27ab840();
   input += synapse0x27ab880();
   input += synapse0x27ab8c0();
   input += synapse0x27ab900();
   input += synapse0x27ab940();
   input += synapse0x27ab980();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27aaff0() {
   double input = input0x27aaff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27ab9c0() {
   double input = -0.515603;
   input += synapse0x27abb50();
   input += synapse0x27b4be0();
   input += synapse0x27b4c20();
   input += synapse0x27b4c60();
   input += synapse0x27b4ca0();
   input += synapse0x27b4ce0();
   input += synapse0x27b4d20();
   input += synapse0x27b4d60();
   input += synapse0x27b4da0();
   input += synapse0x27b4de0();
   input += synapse0x27b4e20();
   input += synapse0x27b4e60();
   input += synapse0x27b4ea0();
   input += synapse0x27b4ee0();
   input += synapse0x27b4f20();
   input += synapse0x27b4f60();
   input += synapse0x27b4a30();
   input += synapse0x27b4a70();
   input += synapse0x27b50b0();
   input += synapse0x27b50f0();
   input += synapse0x27b5130();
   input += synapse0x27b5170();
   input += synapse0x27b51b0();
   input += synapse0x27b51f0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27ab9c0() {
   double input = input0x27ab9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b5230() {
   double input = 1.46864;
   input += synapse0x27b5570();
   input += synapse0x27b55b0();
   input += synapse0x27b55f0();
   input += synapse0x27b5630();
   input += synapse0x27b5670();
   input += synapse0x27b56b0();
   input += synapse0x27b56f0();
   input += synapse0x27b5730();
   input += synapse0x27b5770();
   input += synapse0x27b57b0();
   input += synapse0x27b57f0();
   input += synapse0x27b5830();
   input += synapse0x27b5870();
   input += synapse0x27b58b0();
   input += synapse0x27b58f0();
   input += synapse0x27b5930();
   input += synapse0x27b53c0();
   input += synapse0x27b5400();
   input += synapse0x27b5a80();
   input += synapse0x27b5ac0();
   input += synapse0x27b5b00();
   input += synapse0x27b5b40();
   input += synapse0x27b5b80();
   input += synapse0x27b5bc0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b5230() {
   double input = input0x27b5230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b5c00() {
   double input = -0.5717;
   input += synapse0x27b5f40();
   input += synapse0x27b5f80();
   input += synapse0x27b5fc0();
   input += synapse0x27b6000();
   input += synapse0x27b6040();
   input += synapse0x27b6080();
   input += synapse0x27b60c0();
   input += synapse0x27b6100();
   input += synapse0x27b6140();
   input += synapse0x27b6180();
   input += synapse0x27b61c0();
   input += synapse0x27b6200();
   input += synapse0x27b6240();
   input += synapse0x27b6280();
   input += synapse0x27b62c0();
   input += synapse0x27b6300();
   input += synapse0x27b5d90();
   input += synapse0x27b5dd0();
   input += synapse0x27b6450();
   input += synapse0x27b6490();
   input += synapse0x27b64d0();
   input += synapse0x27b6510();
   input += synapse0x27b6550();
   input += synapse0x27b6590();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b5c00() {
   double input = input0x27b5c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b65d0() {
   double input = 0.345758;
   input += synapse0x27b6910();
   input += synapse0x27b6950();
   input += synapse0x27b6990();
   input += synapse0x27b69d0();
   input += synapse0x27b6a10();
   input += synapse0x27b6a50();
   input += synapse0x27b6a90();
   input += synapse0x27b6ad0();
   input += synapse0x27b6b10();
   input += synapse0x27b6b50();
   input += synapse0x27b6b90();
   input += synapse0x27b6bd0();
   input += synapse0x27b6c10();
   input += synapse0x27b6c50();
   input += synapse0x27b6c90();
   input += synapse0x27b6cd0();
   input += synapse0x27b6760();
   input += synapse0x27b67a0();
   input += synapse0x27b6e20();
   input += synapse0x27b6e60();
   input += synapse0x27b6ea0();
   input += synapse0x27b6ee0();
   input += synapse0x27b6f20();
   input += synapse0x27b6f60();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b65d0() {
   double input = input0x27b65d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b6fa0() {
   double input = 0.746741;
   input += synapse0x27b72e0();
   input += synapse0x27b7320();
   input += synapse0x27b7360();
   input += synapse0x27b73a0();
   input += synapse0x27b73e0();
   input += synapse0x27b7420();
   input += synapse0x27b7460();
   input += synapse0x27b74a0();
   input += synapse0x27b74e0();
   input += synapse0x27b7520();
   input += synapse0x27b7560();
   input += synapse0x27b75a0();
   input += synapse0x27b75e0();
   input += synapse0x27b7620();
   input += synapse0x27b7660();
   input += synapse0x27b76a0();
   input += synapse0x27b7130();
   input += synapse0x27b7170();
   input += synapse0x27b77f0();
   input += synapse0x27b7830();
   input += synapse0x27b7870();
   input += synapse0x27b78b0();
   input += synapse0x27b78f0();
   input += synapse0x27b7930();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b6fa0() {
   double input = input0x27b6fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b7970() {
   double input = 2.27349;
   input += synapse0x27b7cb0();
   input += synapse0x27b7cf0();
   input += synapse0x27b7d30();
   input += synapse0x27b7d70();
   input += synapse0x27b7db0();
   input += synapse0x27b7df0();
   input += synapse0x27b7e30();
   input += synapse0x27b7e70();
   input += synapse0x27b7eb0();
   input += synapse0x27b7ef0();
   input += synapse0x27b7f30();
   input += synapse0x27b7f70();
   input += synapse0x27b7fb0();
   input += synapse0x27b7ff0();
   input += synapse0x27b8030();
   input += synapse0x27b8070();
   input += synapse0x27b7b00();
   input += synapse0x27b7b40();
   input += synapse0x27b81c0();
   input += synapse0x27b8200();
   input += synapse0x27b8240();
   input += synapse0x27b8280();
   input += synapse0x27b82c0();
   input += synapse0x27b8300();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b7970() {
   double input = input0x27b7970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b8340() {
   double input = -2.96368;
   input += synapse0x27b8680();
   input += synapse0x27b86c0();
   input += synapse0x27b8700();
   input += synapse0x27b8740();
   input += synapse0x27b8780();
   input += synapse0x27b87c0();
   input += synapse0x27b8800();
   input += synapse0x27b8840();
   input += synapse0x27b8880();
   input += synapse0x27b88c0();
   input += synapse0x27b8900();
   input += synapse0x27b8940();
   input += synapse0x27b8980();
   input += synapse0x27b89c0();
   input += synapse0x27b8a00();
   input += synapse0x27b8a40();
   input += synapse0x27b84d0();
   input += synapse0x27b8510();
   input += synapse0x27b8b90();
   input += synapse0x27b8bd0();
   input += synapse0x27b8c10();
   input += synapse0x27b8c50();
   input += synapse0x27b8c90();
   input += synapse0x27b8cd0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b8340() {
   double input = input0x27b8340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b8d10() {
   double input = 0.235618;
   input += synapse0x27b9050();
   input += synapse0x27b9090();
   input += synapse0x27b90d0();
   input += synapse0x27b9110();
   input += synapse0x27b9150();
   input += synapse0x27b9190();
   input += synapse0x27b91d0();
   input += synapse0x27b9210();
   input += synapse0x27b9250();
   input += synapse0x27b9290();
   input += synapse0x27b92d0();
   input += synapse0x27b9310();
   input += synapse0x27b9350();
   input += synapse0x27b9390();
   input += synapse0x27b93d0();
   input += synapse0x27b9410();
   input += synapse0x27b8ea0();
   input += synapse0x27b8ee0();
   input += synapse0x27b9560();
   input += synapse0x27b95a0();
   input += synapse0x27b95e0();
   input += synapse0x27b9620();
   input += synapse0x27b9660();
   input += synapse0x27b96a0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b8d10() {
   double input = input0x27b8d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b96e0() {
   double input = 0.13343;
   input += synapse0x27b9a20();
   input += synapse0x27adff0();
   input += synapse0x27ae030();
   input += synapse0x27ae070();
   input += synapse0x27ae2c0();
   input += synapse0x27ae300();
   input += synapse0x27ae340();
   input += synapse0x27ae590();
   input += synapse0x27ae5d0();
   input += synapse0x27ae820();
   input += synapse0x27ae860();
   input += synapse0x27ae8a0();
   input += synapse0x27aeaf0();
   input += synapse0x27aeb30();
   input += synapse0x27aed80();
   input += synapse0x27aedc0();
   input += synapse0x27b9870();
   input += synapse0x27b98b0();
   input += synapse0x27aef10();
   input += synapse0x27af420();
   input += synapse0x27af460();
   input += synapse0x27af4a0();
   input += synapse0x27af6f0();
   input += synapse0x27af730();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b96e0() {
   double input = input0x27b96e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27af770() {
   double input = 0.889996;
   input += synapse0x27aefe0();
   input += synapse0x27af020();
   input += synapse0x27af060();
   input += synapse0x27af0a0();
   input += synapse0x27afa20();
   input += synapse0x27bbd70();
   input += synapse0x27bbdb0();
   input += synapse0x27bbdf0();
   input += synapse0x27bbe30();
   input += synapse0x27bbe70();
   input += synapse0x27bbeb0();
   input += synapse0x27bbef0();
   input += synapse0x27bbf30();
   input += synapse0x27bbf70();
   input += synapse0x27bbfb0();
   input += synapse0x27bbff0();
   input += synapse0x27af900();
   input += synapse0x27af940();
   input += synapse0x27bc140();
   input += synapse0x27bc180();
   input += synapse0x27bc1c0();
   input += synapse0x27bc200();
   input += synapse0x27bc240();
   input += synapse0x27bc280();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27af770() {
   double input = input0x27af770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27bc2c0() {
   double input = 1.24286;
   input += synapse0x27bc600();
   input += synapse0x27bc640();
   input += synapse0x27bc680();
   input += synapse0x27bc6c0();
   input += synapse0x27bc700();
   input += synapse0x27bc740();
   input += synapse0x27bc780();
   input += synapse0x27bc7c0();
   input += synapse0x27bc800();
   input += synapse0x27bc840();
   input += synapse0x27bc880();
   input += synapse0x27bc8c0();
   input += synapse0x27bc900();
   input += synapse0x27bc940();
   input += synapse0x27bc980();
   input += synapse0x27bc9c0();
   input += synapse0x27bc450();
   input += synapse0x27bc490();
   input += synapse0x27bcb10();
   input += synapse0x27bcb50();
   input += synapse0x27bcb90();
   input += synapse0x27bcbd0();
   input += synapse0x27bcc10();
   input += synapse0x27bcc50();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27bc2c0() {
   double input = input0x27bc2c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27bcc90() {
   double input = -1.81784;
   input += synapse0x27bcfd0();
   input += synapse0x27bd010();
   input += synapse0x27bd050();
   input += synapse0x27bd090();
   input += synapse0x27bd0d0();
   input += synapse0x27bd110();
   input += synapse0x27bd150();
   input += synapse0x27bd190();
   input += synapse0x27bd1d0();
   input += synapse0x27bd210();
   input += synapse0x27bd250();
   input += synapse0x27bd290();
   input += synapse0x27bd2d0();
   input += synapse0x27bd310();
   input += synapse0x27bd350();
   input += synapse0x27bd390();
   input += synapse0x27bce20();
   input += synapse0x27bce60();
   input += synapse0x27bd4e0();
   input += synapse0x27bd520();
   input += synapse0x27bd560();
   input += synapse0x27bd5a0();
   input += synapse0x27bd5e0();
   input += synapse0x27bd620();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27bcc90() {
   double input = input0x27bcc90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27bd660() {
   double input = 0.261798;
   input += synapse0x27bd9a0();
   input += synapse0x27bd9e0();
   input += synapse0x27bda20();
   input += synapse0x27bda60();
   input += synapse0x27bdaa0();
   input += synapse0x27bdae0();
   input += synapse0x27bdb20();
   input += synapse0x27bdb60();
   input += synapse0x27bdba0();
   input += synapse0x27bdbe0();
   input += synapse0x27bdc20();
   input += synapse0x27bdc60();
   input += synapse0x27bdca0();
   input += synapse0x27bdce0();
   input += synapse0x27bdd20();
   input += synapse0x27bdd60();
   input += synapse0x27bd7f0();
   input += synapse0x27bd830();
   input += synapse0x27bdeb0();
   input += synapse0x27bdef0();
   input += synapse0x27bdf30();
   input += synapse0x27bdf70();
   input += synapse0x27bdfb0();
   input += synapse0x27bdff0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27bd660() {
   double input = input0x27bd660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27be030() {
   double input = 1.61392;
   input += synapse0x27be370();
   input += synapse0x27be3b0();
   input += synapse0x27be3f0();
   input += synapse0x27be430();
   input += synapse0x27be470();
   input += synapse0x27be4b0();
   input += synapse0x27be4f0();
   input += synapse0x27be530();
   input += synapse0x27be570();
   input += synapse0x27be5b0();
   input += synapse0x27be5f0();
   input += synapse0x27be630();
   input += synapse0x27be670();
   input += synapse0x27be6b0();
   input += synapse0x27be6f0();
   input += synapse0x27be730();
   input += synapse0x27be1c0();
   input += synapse0x27be200();
   input += synapse0x27be880();
   input += synapse0x27be8c0();
   input += synapse0x27be900();
   input += synapse0x27be940();
   input += synapse0x27be980();
   input += synapse0x27be9c0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27be030() {
   double input = input0x27be030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27bea00() {
   double input = -1.58597;
   input += synapse0x27bed40();
   input += synapse0x27bed80();
   input += synapse0x27bedc0();
   input += synapse0x27bee00();
   input += synapse0x27bee40();
   input += synapse0x27bee80();
   input += synapse0x27beec0();
   input += synapse0x27bef00();
   input += synapse0x27bef40();
   input += synapse0x27bef80();
   input += synapse0x27befc0();
   input += synapse0x27bf000();
   input += synapse0x27bf040();
   input += synapse0x27bf080();
   input += synapse0x27bf0c0();
   input += synapse0x27bf100();
   input += synapse0x27beb90();
   input += synapse0x27bebd0();
   input += synapse0x27bf250();
   input += synapse0x27bf290();
   input += synapse0x27bf2d0();
   input += synapse0x27bf310();
   input += synapse0x27bf350();
   input += synapse0x27bf390();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27bea00() {
   double input = input0x27bea00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27bf3d0() {
   double input = 1.65385;
   input += synapse0x27bf710();
   input += synapse0x27bf750();
   input += synapse0x27bf790();
   input += synapse0x27bf7d0();
   input += synapse0x27bf810();
   input += synapse0x27bf850();
   input += synapse0x27bf890();
   input += synapse0x27bf8d0();
   input += synapse0x27bf910();
   input += synapse0x27bf950();
   input += synapse0x27bf990();
   input += synapse0x27bf9d0();
   input += synapse0x27bfa10();
   input += synapse0x27bfa50();
   input += synapse0x27bfa90();
   input += synapse0x27bfad0();
   input += synapse0x27bf560();
   input += synapse0x27bf5a0();
   input += synapse0x27bfc20();
   input += synapse0x27bfc60();
   input += synapse0x27bfca0();
   input += synapse0x27bfce0();
   input += synapse0x27bfd20();
   input += synapse0x27bfd60();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27bf3d0() {
   double input = input0x27bf3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27bfda0() {
   double input = 0.0872496;
   input += synapse0x27c00e0();
   input += synapse0x27c0120();
   input += synapse0x27c0160();
   input += synapse0x27c01a0();
   input += synapse0x27c01e0();
   input += synapse0x27c0220();
   input += synapse0x27c0260();
   input += synapse0x27c02a0();
   input += synapse0x27c02e0();
   input += synapse0x27c0320();
   input += synapse0x27c0360();
   input += synapse0x27c03a0();
   input += synapse0x27c03e0();
   input += synapse0x27c0420();
   input += synapse0x27c0460();
   input += synapse0x27c04a0();
   input += synapse0x27bff30();
   input += synapse0x27bff70();
   input += synapse0x27c05f0();
   input += synapse0x27c0630();
   input += synapse0x27c0670();
   input += synapse0x27c06b0();
   input += synapse0x27c06f0();
   input += synapse0x27c0730();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27bfda0() {
   double input = input0x27bfda0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27c0770() {
   double input = -1.84528;
   input += synapse0x27a91e0();
   input += synapse0x27a9220();
   input += synapse0x27a9260();
   input += synapse0x27a92a0();
   input += synapse0x27a92e0();
   input += synapse0x27a9320();
   input += synapse0x27a9360();
   input += synapse0x27a93a0();
   input += synapse0x27c0ec0();
   input += synapse0x27c0f00();
   input += synapse0x27c0f40();
   input += synapse0x27c0f80();
   input += synapse0x27c0fc0();
   input += synapse0x27c1000();
   input += synapse0x27c1040();
   input += synapse0x27c1080();
   input += synapse0x27c0900();
   input += synapse0x27c0940();
   input += synapse0x27c11d0();
   input += synapse0x27c1210();
   input += synapse0x27c1250();
   input += synapse0x27c1290();
   input += synapse0x27c12d0();
   input += synapse0x27c1310();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27c0770() {
   double input = input0x27c0770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27c1350() {
   double input = 0.246739;
   input += synapse0x27c1690();
   input += synapse0x27c16d0();
   input += synapse0x27c1710();
   input += synapse0x27c1750();
   input += synapse0x27c1790();
   input += synapse0x27c17d0();
   input += synapse0x27c1810();
   input += synapse0x27c1850();
   input += synapse0x27c1890();
   input += synapse0x27c18d0();
   input += synapse0x27c1910();
   input += synapse0x27c1950();
   input += synapse0x27c1990();
   input += synapse0x27c19d0();
   input += synapse0x27c1a10();
   input += synapse0x27c1a50();
   input += synapse0x27c14e0();
   input += synapse0x27c1520();
   input += synapse0x27c1ba0();
   input += synapse0x27c1be0();
   input += synapse0x27c1c20();
   input += synapse0x27c1c60();
   input += synapse0x27c1ca0();
   input += synapse0x27c1ce0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27c1350() {
   double input = input0x27c1350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27c1d20() {
   double input = -0.161335;
   input += synapse0x27c2060();
   input += synapse0x27c20a0();
   input += synapse0x27c20e0();
   input += synapse0x27c2120();
   input += synapse0x27c2160();
   input += synapse0x27c21a0();
   input += synapse0x27c21e0();
   input += synapse0x27c2220();
   input += synapse0x27c2260();
   input += synapse0x27c22a0();
   input += synapse0x27c22e0();
   input += synapse0x27c2320();
   input += synapse0x27c2360();
   input += synapse0x27c23a0();
   input += synapse0x27c23e0();
   input += synapse0x27c2420();
   input += synapse0x27c1eb0();
   input += synapse0x27c1ef0();
   input += synapse0x27b2a20();
   input += synapse0x27b2a60();
   input += synapse0x27b2aa0();
   input += synapse0x27b2ae0();
   input += synapse0x27b2b20();
   input += synapse0x27b2b60();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27c1d20() {
   double input = input0x27c1d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b2ba0() {
   double input = 0.598308;
   input += synapse0x27b2ee0();
   input += synapse0x27b2f20();
   input += synapse0x27b2f60();
   input += synapse0x27b2fa0();
   input += synapse0x27b2fe0();
   input += synapse0x27b3020();
   input += synapse0x27b3060();
   input += synapse0x27b30a0();
   input += synapse0x27b30e0();
   input += synapse0x27b3120();
   input += synapse0x27b3160();
   input += synapse0x27b31a0();
   input += synapse0x27b31e0();
   input += synapse0x27b3220();
   input += synapse0x27b3260();
   input += synapse0x27b32a0();
   input += synapse0x27b2d30();
   input += synapse0x27b2d70();
   input += synapse0x27b33f0();
   input += synapse0x27b3430();
   input += synapse0x27b3470();
   input += synapse0x27b34b0();
   input += synapse0x27b34f0();
   input += synapse0x27b3530();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b2ba0() {
   double input = input0x27b2ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b3570() {
   double input = -0.478467;
   input += synapse0x27b38b0();
   input += synapse0x27b38f0();
   input += synapse0x27b3930();
   input += synapse0x27b3970();
   input += synapse0x27b39b0();
   input += synapse0x27b39f0();
   input += synapse0x27b3a30();
   input += synapse0x27b3a70();
   input += synapse0x27b3ab0();
   input += synapse0x27b3af0();
   input += synapse0x27b3b30();
   input += synapse0x27b3b70();
   input += synapse0x27b3bb0();
   input += synapse0x27b3bf0();
   input += synapse0x27b3c30();
   input += synapse0x27b3c70();
   input += synapse0x27b3700();
   input += synapse0x27b3740();
   input += synapse0x27b3dc0();
   input += synapse0x27b3e00();
   input += synapse0x27b3e40();
   input += synapse0x27b3e80();
   input += synapse0x27b3ec0();
   input += synapse0x27b3f00();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b3570() {
   double input = input0x27b3570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27b3f40() {
   double input = 2.20801;
   input += synapse0x27b4280();
   input += synapse0x27b42c0();
   input += synapse0x27b4300();
   input += synapse0x27b4340();
   input += synapse0x27b4380();
   input += synapse0x27b43c0();
   input += synapse0x27b4400();
   input += synapse0x27b4440();
   input += synapse0x27b4480();
   input += synapse0x27b44c0();
   input += synapse0x27b4500();
   input += synapse0x27b4540();
   input += synapse0x27b4580();
   input += synapse0x27b45c0();
   input += synapse0x27b4600();
   input += synapse0x27b4640();
   input += synapse0x27b40d0();
   input += synapse0x27b4110();
   input += synapse0x27b4790();
   input += synapse0x27b47d0();
   input += synapse0x27b4810();
   input += synapse0x27b4850();
   input += synapse0x27b4890();
   input += synapse0x27b48d0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27b3f40() {
   double input = input0x27b3f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27c6580() {
   double input = 0.733005;
   input += synapse0x27c67a0();
   input += synapse0x27c67e0();
   input += synapse0x27c6820();
   input += synapse0x27c6860();
   input += synapse0x27c68a0();
   input += synapse0x27c68e0();
   input += synapse0x27c6920();
   input += synapse0x27c6960();
   input += synapse0x27c69a0();
   input += synapse0x27c69e0();
   input += synapse0x27c6a20();
   input += synapse0x27c6a60();
   input += synapse0x27c6aa0();
   input += synapse0x27c6ae0();
   input += synapse0x27c6b20();
   input += synapse0x27c6b60();
   input += synapse0x27b4910();
   input += synapse0x27b4950();
   input += synapse0x27c6cb0();
   input += synapse0x27c6cf0();
   input += synapse0x27c6d30();
   input += synapse0x27c6d70();
   input += synapse0x27c6db0();
   input += synapse0x27c6df0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27c6580() {
   double input = input0x27c6580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27c6e30() {
   double input = -0.0617382;
   input += synapse0x27c7170();
   input += synapse0x27c71b0();
   input += synapse0x27c71f0();
   input += synapse0x27c7230();
   input += synapse0x27c7270();
   input += synapse0x27c72b0();
   input += synapse0x27c72f0();
   input += synapse0x27c7330();
   input += synapse0x27c7370();
   input += synapse0x27c73b0();
   input += synapse0x27c73f0();
   input += synapse0x27c7430();
   input += synapse0x27c7470();
   input += synapse0x27c74b0();
   input += synapse0x27c74f0();
   input += synapse0x27c7530();
   input += synapse0x27c6fc0();
   input += synapse0x27c7000();
   input += synapse0x27c7680();
   input += synapse0x27c76c0();
   input += synapse0x27c7700();
   input += synapse0x27c7740();
   input += synapse0x27c7780();
   input += synapse0x27c77c0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27c6e30() {
   double input = input0x27c6e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27c7800() {
   double input = 1.14657;
   input += synapse0x27c7b40();
   input += synapse0x27c7b80();
   input += synapse0x27c7bc0();
   input += synapse0x27c7c00();
   input += synapse0x27c7c40();
   input += synapse0x27c7c80();
   input += synapse0x27c7cc0();
   input += synapse0x27c7d00();
   input += synapse0x27c7d40();
   input += synapse0x27c7d80();
   input += synapse0x27c7dc0();
   input += synapse0x27c7e00();
   input += synapse0x27c7e40();
   input += synapse0x27c7e80();
   input += synapse0x27c7ec0();
   input += synapse0x27c7f00();
   input += synapse0x27c7990();
   input += synapse0x27c79d0();
   input += synapse0x27c8050();
   input += synapse0x27c8090();
   input += synapse0x27c80d0();
   input += synapse0x27c8110();
   input += synapse0x27c8150();
   input += synapse0x27c8190();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27c7800() {
   double input = input0x27c7800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27c81d0() {
   double input = -2.22607;
   input += synapse0x27c8510();
   input += synapse0x27c8550();
   input += synapse0x27c8590();
   input += synapse0x27c85d0();
   input += synapse0x27c8610();
   input += synapse0x27c8650();
   input += synapse0x27c8690();
   input += synapse0x27c86d0();
   input += synapse0x27c8710();
   input += synapse0x27c8750();
   input += synapse0x27c8790();
   input += synapse0x27c87d0();
   input += synapse0x27c8810();
   input += synapse0x27c8850();
   input += synapse0x27c8890();
   input += synapse0x27c88d0();
   input += synapse0x27c8360();
   input += synapse0x27c83a0();
   input += synapse0x27c8a20();
   input += synapse0x27c8a60();
   input += synapse0x27c8aa0();
   input += synapse0x27c8ae0();
   input += synapse0x27c8b20();
   input += synapse0x27c8b60();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27c81d0() {
   double input = input0x27c81d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27cf3d0() {
   double input = 0.103178;
   input += synapse0x27a50f0();
   input += synapse0x27a5130();
   input += synapse0x27a6610();
   input += synapse0x27a6650();
   input += synapse0x27a6fe0();
   input += synapse0x27a7020();
   input += synapse0x27a7db0();
   input += synapse0x27a7df0();
   input += synapse0x27a8780();
   input += synapse0x27a87c0();
   input += synapse0x27a9150();
   input += synapse0x27a9190();
   input += synapse0x27a9c30();
   input += synapse0x27a9c70();
   input += synapse0x27aa600();
   input += synapse0x27aa640();
   input += synapse0x27a76e0();
   input += synapse0x27a7720();
   input += synapse0x27ac1b0();
   input += synapse0x27ac1f0();
   input += synapse0x27acb80();
   input += synapse0x27acbc0();
   input += synapse0x27ad550();
   input += synapse0x27ad590();
   input += synapse0x27adf20();
   input += synapse0x27adf60();
   input += synapse0x27a2100();
   input += synapse0x27a2140();
   input += synapse0x27b0010();
   input += synapse0x27b0050();
   input += synapse0x27b09e0();
   input += synapse0x27b0a20();
   input += synapse0x27b13b0();
   input += synapse0x27b13f0();
   input += synapse0x27b1d80();
   input += synapse0x27b1dc0();
   input += synapse0x27b2750();
   input += synapse0x27b2790();
   input += synapse0x27ab2a0();
   input += synapse0x27ab2e0();
   input += synapse0x27b4b50();
   input += synapse0x27b4b90();
   input += synapse0x27b54e0();
   input += synapse0x27b5520();
   input += synapse0x27b5eb0();
   input += synapse0x27b5ef0();
   input += synapse0x27b6880();
   input += synapse0x27b68c0();
   input += synapse0x27b7250();
   input += synapse0x27b7290();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27cf3d0() {
   double input = input0x27cf3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27cf770() {
   double input = -0.285944;
   input += synapse0x27b9990();
   input += synapse0x27b99d0();
   input += synapse0x27aef50();
   input += synapse0x27aef90();
   input += synapse0x27bc570();
   input += synapse0x27bc5b0();
   input += synapse0x27bcf40();
   input += synapse0x27bcf80();
   input += synapse0x27bd910();
   input += synapse0x27bd950();
   input += synapse0x27be2e0();
   input += synapse0x27be320();
   input += synapse0x27becb0();
   input += synapse0x27becf0();
   input += synapse0x27bf680();
   input += synapse0x27bf6c0();
   input += synapse0x27c0050();
   input += synapse0x27c0090();
   input += synapse0x27c0a20();
   input += synapse0x27c0a60();
   input += synapse0x27c1600();
   input += synapse0x27c1640();
   input += synapse0x27c1fd0();
   input += synapse0x27c2010();
   input += synapse0x27b2e50();
   input += synapse0x27b2e90();
   input += synapse0x27b3820();
   input += synapse0x27b3860();
   input += synapse0x27b41f0();
   input += synapse0x27b4230();
   input += synapse0x27c6710();
   input += synapse0x27c6750();
   input += synapse0x27c70e0();
   input += synapse0x27c7120();
   input += synapse0x27c7ab0();
   input += synapse0x27c7af0();
   input += synapse0x27c8480();
   input += synapse0x27c84c0();
   input += synapse0x27a43b0();
   input += synapse0x27a43f0();
   input += synapse0x27b7c20();
   input += synapse0x27b7c60();
   input += synapse0x27c8ba0();
   input += synapse0x27c8be0();
   input += synapse0x27c8c20();
   input += synapse0x27c8c60();
   input += synapse0x27cfb10();
   input += synapse0x27cfb50();
   input += synapse0x27cfb90();
   input += synapse0x27cfbd0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27cf770() {
   double input = input0x27cf770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27cfc10() {
   double input = -0.0364184;
   input += synapse0x27cff50();
   input += synapse0x27cff90();
   input += synapse0x27cffd0();
   input += synapse0x27d0010();
   input += synapse0x27d0050();
   input += synapse0x27d0090();
   input += synapse0x27d00d0();
   input += synapse0x27d0110();
   input += synapse0x27d0150();
   input += synapse0x27d0190();
   input += synapse0x27d01d0();
   input += synapse0x27d0210();
   input += synapse0x27d0250();
   input += synapse0x27d0290();
   input += synapse0x27d02d0();
   input += synapse0x27d0310();
   input += synapse0x27cfda0();
   input += synapse0x27cfde0();
   input += synapse0x27d0460();
   input += synapse0x27d04a0();
   input += synapse0x27d04e0();
   input += synapse0x27d0520();
   input += synapse0x27d0560();
   input += synapse0x27d05a0();
   input += synapse0x27d05e0();
   input += synapse0x27d0620();
   input += synapse0x27d0660();
   input += synapse0x27d06a0();
   input += synapse0x27d06e0();
   input += synapse0x27d0720();
   input += synapse0x27d0760();
   input += synapse0x27d07a0();
   input += synapse0x27d0350();
   input += synapse0x27d0390();
   input += synapse0x27d03d0();
   input += synapse0x27d0410();
   input += synapse0x27d09f0();
   input += synapse0x27d0a30();
   input += synapse0x27d0a70();
   input += synapse0x27d0ab0();
   input += synapse0x27d0af0();
   input += synapse0x27d0b30();
   input += synapse0x27d0b70();
   input += synapse0x27d0bb0();
   input += synapse0x27d0bf0();
   input += synapse0x27d0c30();
   input += synapse0x27d0c70();
   input += synapse0x27d0cb0();
   input += synapse0x27d0cf0();
   input += synapse0x27d0d30();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27cfc10() {
   double input = input0x27cfc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27d0d70() {
   double input = -0.137988;
   input += synapse0x27d10b0();
   input += synapse0x27d10f0();
   input += synapse0x27d1130();
   input += synapse0x27d1170();
   input += synapse0x27d11b0();
   input += synapse0x27d11f0();
   input += synapse0x27d1230();
   input += synapse0x27d1270();
   input += synapse0x27d12b0();
   input += synapse0x27d12f0();
   input += synapse0x27d1330();
   input += synapse0x27d1370();
   input += synapse0x27d13b0();
   input += synapse0x27d13f0();
   input += synapse0x27d1430();
   input += synapse0x27d1470();
   input += synapse0x27d0f00();
   input += synapse0x27d0f40();
   input += synapse0x27d15c0();
   input += synapse0x27d1600();
   input += synapse0x27d1640();
   input += synapse0x27d1680();
   input += synapse0x27d16c0();
   input += synapse0x27d1700();
   input += synapse0x27d1740();
   input += synapse0x27d1780();
   input += synapse0x27d17c0();
   input += synapse0x27d1800();
   input += synapse0x27d1840();
   input += synapse0x27d1880();
   input += synapse0x27d18c0();
   input += synapse0x27d1900();
   input += synapse0x27d14b0();
   input += synapse0x27d14f0();
   input += synapse0x27d1530();
   input += synapse0x27d1570();
   input += synapse0x27d1b50();
   input += synapse0x27d1b90();
   input += synapse0x27d1bd0();
   input += synapse0x27d1c10();
   input += synapse0x27d1c50();
   input += synapse0x27d1c90();
   input += synapse0x27d1cd0();
   input += synapse0x27d1d10();
   input += synapse0x27d1d50();
   input += synapse0x27d1d90();
   input += synapse0x27d1dd0();
   input += synapse0x27d1e10();
   input += synapse0x27d1e50();
   input += synapse0x27d1e90();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27d0d70() {
   double input = input0x27d0d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27d1ed0() {
   double input = 0.196691;
   input += synapse0x27d2210();
   input += synapse0x27d2250();
   input += synapse0x27d2290();
   input += synapse0x27d22d0();
   input += synapse0x27d2310();
   input += synapse0x27d2350();
   input += synapse0x27d2390();
   input += synapse0x27d23d0();
   input += synapse0x27d2410();
   input += synapse0x27d2450();
   input += synapse0x27d2490();
   input += synapse0x27d24d0();
   input += synapse0x27d2510();
   input += synapse0x27d2550();
   input += synapse0x27d2590();
   input += synapse0x27d25d0();
   input += synapse0x27d2060();
   input += synapse0x27d20a0();
   input += synapse0x27d2720();
   input += synapse0x27d2760();
   input += synapse0x27d27a0();
   input += synapse0x27d27e0();
   input += synapse0x27d2820();
   input += synapse0x27d2860();
   input += synapse0x27d28a0();
   input += synapse0x27d28e0();
   input += synapse0x27d2920();
   input += synapse0x27d2960();
   input += synapse0x27d29a0();
   input += synapse0x27d29e0();
   input += synapse0x27d2a20();
   input += synapse0x27d2a60();
   input += synapse0x27d2610();
   input += synapse0x27d2650();
   input += synapse0x27d2690();
   input += synapse0x27d26d0();
   input += synapse0x27d2cb0();
   input += synapse0x27d2cf0();
   input += synapse0x27d2d30();
   input += synapse0x27d2d70();
   input += synapse0x27d2db0();
   input += synapse0x27d2df0();
   input += synapse0x27d2e30();
   input += synapse0x27d2e70();
   input += synapse0x27d2eb0();
   input += synapse0x27d2ef0();
   input += synapse0x27d2f30();
   input += synapse0x27d2f70();
   input += synapse0x27d2fb0();
   input += synapse0x27d2ff0();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27d1ed0() {
   double input = input0x27d1ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLcR::input0x27d3030() {
   double input = 11.864;
   input += synapse0x27d3250();
   input += synapse0x27d3290();
   input += synapse0x27d32d0();
   input += synapse0x27d3310();
   input += synapse0x27d3350();
   return input;
}

double NNfunction-ss_uLcR::neuron0x27d3030() {
   double input = input0x27d3030();
   return (input * 1)+0;
}

double NNfunction-ss_uLcR::synapse0x279f170() {
   return (neuron0x279f1f0()*0.0147942);
}

double NNfunction-ss_uLcR::synapse0x279f1b0() {
   return (neuron0x279f4a0()*0.0751513);
}

double NNfunction-ss_uLcR::synapse0x27a4440() {
   return (neuron0x279f7e0()*-0.10671);
}

double NNfunction-ss_uLcR::synapse0x27a4480() {
   return (neuron0x279fb20()*-0.190933);
}

double NNfunction-ss_uLcR::synapse0x27a44c0() {
   return (neuron0x279fe60()*-0.0773812);
}

double NNfunction-ss_uLcR::synapse0x27a4500() {
   return (neuron0x27a01a0()*-0.118533);
}

double NNfunction-ss_uLcR::synapse0x27a4540() {
   return (neuron0x27a04e0()*-0.0984619);
}

double NNfunction-ss_uLcR::synapse0x27a4580() {
   return (neuron0x27a0820()*-0.157725);
}

double NNfunction-ss_uLcR::synapse0x27a45c0() {
   return (neuron0x27a0b60()*-0.0979445);
}

double NNfunction-ss_uLcR::synapse0x27a4600() {
   return (neuron0x27a0ea0()*-0.109667);
}

double NNfunction-ss_uLcR::synapse0x27a4640() {
   return (neuron0x27a11e0()*-0.106114);
}

double NNfunction-ss_uLcR::synapse0x27a4680() {
   return (neuron0x27a1520()*-0.432095);
}

double NNfunction-ss_uLcR::synapse0x27a46c0() {
   return (neuron0x27a1860()*-0.0136672);
}

double NNfunction-ss_uLcR::synapse0x27a4700() {
   return (neuron0x27a1ba0()*-0.0427601);
}

double NNfunction-ss_uLcR::synapse0x27a4740() {
   return (neuron0x27a1ee0()*-0.0111064);
}

double NNfunction-ss_uLcR::synapse0x27a4780() {
   return (neuron0x27a2220()*-0.356287);
}

double NNfunction-ss_uLcR::synapse0x279f0e0() {
   return (neuron0x27a2560()*-0.0243005);
}

double NNfunction-ss_uLcR::synapse0x279f120() {
   return (neuron0x27a2ac0()*-0.0240363);
}

double NNfunction-ss_uLcR::synapse0x255a2b0() {
   return (neuron0x27a2ce0()*-0.0505711);
}

double NNfunction-ss_uLcR::synapse0x255a2f0() {
   return (neuron0x27a3020()*-0.0891375);
}

double NNfunction-ss_uLcR::synapse0x27a49e0() {
   return (neuron0x27a3360()*-0.0240003);
}

double NNfunction-ss_uLcR::synapse0x27a4a20() {
   return (neuron0x27a36a0()*-0.00820215);
}

double NNfunction-ss_uLcR::synapse0x27a4a60() {
   return (neuron0x27a39e0()*0.0611454);
}

double NNfunction-ss_uLcR::synapse0x27a4aa0() {
   return (neuron0x27a3d20()*-0.0106303);
}

double NNfunction-ss_uLcR::synapse0x27a4e20() {
   return (neuron0x279f1f0()*0.0120422);
}

double NNfunction-ss_uLcR::synapse0x27a4e60() {
   return (neuron0x279f4a0()*-0.00983514);
}

double NNfunction-ss_uLcR::synapse0x27a4ea0() {
   return (neuron0x279f7e0()*-0.102777);
}

double NNfunction-ss_uLcR::synapse0x27a4ee0() {
   return (neuron0x279fb20()*0.0390321);
}

double NNfunction-ss_uLcR::synapse0x27a4f20() {
   return (neuron0x279fe60()*-0.0379284);
}

double NNfunction-ss_uLcR::synapse0x27a4f60() {
   return (neuron0x27a01a0()*-0.0431372);
}

double NNfunction-ss_uLcR::synapse0x27a4fa0() {
   return (neuron0x27a04e0()*-0.0221157);
}

double NNfunction-ss_uLcR::synapse0x27a4fe0() {
   return (neuron0x27a0820()*-0.103047);
}

double NNfunction-ss_uLcR::synapse0x27a5020() {
   return (neuron0x27a0b60()*-0.0112858);
}

double NNfunction-ss_uLcR::synapse0x27a48d0() {
   return (neuron0x27a0ea0()*0.000754109);
}

double NNfunction-ss_uLcR::synapse0x27a4910() {
   return (neuron0x27a11e0()*-0.00291184);
}

double NNfunction-ss_uLcR::synapse0x27a4950() {
   return (neuron0x27a1520()*-1.07355);
}

double NNfunction-ss_uLcR::synapse0x27a4990() {
   return (neuron0x27a1860()*-0.0427548);
}

double NNfunction-ss_uLcR::synapse0x27a5270() {
   return (neuron0x27a1ba0()*0.0261105);
}

double NNfunction-ss_uLcR::synapse0x27a52b0() {
   return (neuron0x27a1ee0()*-0.0292034);
}

double NNfunction-ss_uLcR::synapse0x27a52f0() {
   return (neuron0x27a2220()*0.829319);
}

double NNfunction-ss_uLcR::synapse0x27a4c70() {
   return (neuron0x27a2560()*-0.00224999);
}

double NNfunction-ss_uLcR::synapse0x27a4cb0() {
   return (neuron0x27a2ac0()*0.0182045);
}

double NNfunction-ss_uLcR::synapse0x27a5440() {
   return (neuron0x27a2ce0()*0.00314047);
}

double NNfunction-ss_uLcR::synapse0x27a5480() {
   return (neuron0x27a3020()*-0.0183566);
}

double NNfunction-ss_uLcR::synapse0x27a54c0() {
   return (neuron0x27a3360()*-0.0187287);
}

double NNfunction-ss_uLcR::synapse0x27a5500() {
   return (neuron0x27a36a0()*0.0152784);
}

double NNfunction-ss_uLcR::synapse0x27a5540() {
   return (neuron0x27a39e0()*-0.0168248);
}

double NNfunction-ss_uLcR::synapse0x27a5580() {
   return (neuron0x27a3d20()*0.00711875);
}

double NNfunction-ss_uLcR::synapse0x27a5900() {
   return (neuron0x279f1f0()*0.0561222);
}

double NNfunction-ss_uLcR::synapse0x27a5940() {
   return (neuron0x279f4a0()*-0.121222);
}

double NNfunction-ss_uLcR::synapse0x27a5980() {
   return (neuron0x279f7e0()*-1.14912);
}

double NNfunction-ss_uLcR::synapse0x27a59c0() {
   return (neuron0x279fb20()*0.404283);
}

double NNfunction-ss_uLcR::synapse0x27a5a00() {
   return (neuron0x279fe60()*0.424479);
}

double NNfunction-ss_uLcR::synapse0x27a5a40() {
   return (neuron0x27a01a0()*0.496734);
}

double NNfunction-ss_uLcR::synapse0x27a5a80() {
   return (neuron0x27a04e0()*-0.115265);
}

double NNfunction-ss_uLcR::synapse0x27a5ac0() {
   return (neuron0x27a0820()*0.360538);
}

double NNfunction-ss_uLcR::synapse0x27a5b00() {
   return (neuron0x27a0b60()*0.374234);
}

double NNfunction-ss_uLcR::synapse0x27a5b40() {
   return (neuron0x27a0ea0()*1.56777);
}

double NNfunction-ss_uLcR::synapse0x27a5b80() {
   return (neuron0x27a11e0()*-0.00123592);
}

double NNfunction-ss_uLcR::synapse0x27a5bc0() {
   return (neuron0x27a1520()*-0.132719);
}

double NNfunction-ss_uLcR::synapse0x27a5c00() {
   return (neuron0x27a1860()*-0.915164);
}

double NNfunction-ss_uLcR::synapse0x27a5c40() {
   return (neuron0x27a1ba0()*-0.300434);
}

double NNfunction-ss_uLcR::synapse0x27a5c80() {
   return (neuron0x27a1ee0()*-0.416245);
}

double NNfunction-ss_uLcR::synapse0x27a5cc0() {
   return (neuron0x27a2220()*-0.182457);
}

double NNfunction-ss_uLcR::synapse0x27a5750() {
   return (neuron0x27a2560()*-0.218944);
}

double NNfunction-ss_uLcR::synapse0x27a5790() {
   return (neuron0x27a2ac0()*0.582209);
}

double NNfunction-ss_uLcR::synapse0x278e260() {
   return (neuron0x27a2ce0()*-0.368307);
}

double NNfunction-ss_uLcR::synapse0x25681b0() {
   return (neuron0x27a3020()*-0.0477053);
}

double NNfunction-ss_uLcR::synapse0x25681f0() {
   return (neuron0x27a3360()*0.235737);
}

double NNfunction-ss_uLcR::synapse0x2683700() {
   return (neuron0x27a36a0()*0.183414);
}

double NNfunction-ss_uLcR::synapse0x2683740() {
   return (neuron0x27a39e0()*-0.3);
}

double NNfunction-ss_uLcR::synapse0x279ef50() {
   return (neuron0x27a3d20()*-0.0679194);
}

double NNfunction-ss_uLcR::synapse0x2568aa0() {
   return (neuron0x279f1f0()*0.0284627);
}

double NNfunction-ss_uLcR::synapse0x27a5180() {
   return (neuron0x279f4a0()*-0.0206658);
}

double NNfunction-ss_uLcR::synapse0x27a51c0() {
   return (neuron0x279f7e0()*-0.125773);
}

double NNfunction-ss_uLcR::synapse0x27a5200() {
   return (neuron0x279fb20()*0.129577);
}

double NNfunction-ss_uLcR::synapse0x27a5e10() {
   return (neuron0x279fe60()*-0.0326528);
}

double NNfunction-ss_uLcR::synapse0x27a5e50() {
   return (neuron0x27a01a0()*0.0231847);
}

double NNfunction-ss_uLcR::synapse0x27a5e90() {
   return (neuron0x27a04e0()*-0.076334);
}

double NNfunction-ss_uLcR::synapse0x27a5ed0() {
   return (neuron0x27a0820()*-0.105246);
}

double NNfunction-ss_uLcR::synapse0x27a5f10() {
   return (neuron0x27a0b60()*0.0365026);
}

double NNfunction-ss_uLcR::synapse0x27a5f50() {
   return (neuron0x27a0ea0()*0.0179564);
}

double NNfunction-ss_uLcR::synapse0x27a5f90() {
   return (neuron0x27a11e0()*-0.0133635);
}

double NNfunction-ss_uLcR::synapse0x27a5fd0() {
   return (neuron0x27a1520()*-0.0971292);
}

double NNfunction-ss_uLcR::synapse0x27a6010() {
   return (neuron0x27a1860()*-0.0299085);
}

double NNfunction-ss_uLcR::synapse0x27a6050() {
   return (neuron0x27a1ba0()*-0.0326134);
}

double NNfunction-ss_uLcR::synapse0x27a6090() {
   return (neuron0x27a1ee0()*0.00669462);
}

double NNfunction-ss_uLcR::synapse0x27a60d0() {
   return (neuron0x27a2220()*0.486661);
}

double NNfunction-ss_uLcR::synapse0x279ef90() {
   return (neuron0x27a2560()*0.0160663);
}

double NNfunction-ss_uLcR::synapse0x279efd0() {
   return (neuron0x27a2ac0()*0.00608097);
}

double NNfunction-ss_uLcR::synapse0x279f010() {
   return (neuron0x27a2ce0()*-0.00459107);
}

double NNfunction-ss_uLcR::synapse0x27a6220() {
   return (neuron0x27a3020()*0.00439987);
}

double NNfunction-ss_uLcR::synapse0x27a6260() {
   return (neuron0x27a3360()*-0.0148538);
}

double NNfunction-ss_uLcR::synapse0x27a62a0() {
   return (neuron0x27a36a0()*0.019592);
}

double NNfunction-ss_uLcR::synapse0x27a62e0() {
   return (neuron0x27a39e0()*-0.0108668);
}

double NNfunction-ss_uLcR::synapse0x27a6320() {
   return (neuron0x27a3d20()*0.00498142);
}

double NNfunction-ss_uLcR::synapse0x27a66a0() {
   return (neuron0x279f1f0()*-0.0133819);
}

double NNfunction-ss_uLcR::synapse0x27a66e0() {
   return (neuron0x279f4a0()*-0.182982);
}

double NNfunction-ss_uLcR::synapse0x27a6720() {
   return (neuron0x279f7e0()*-0.254136);
}

double NNfunction-ss_uLcR::synapse0x27a6760() {
   return (neuron0x279fb20()*-0.111695);
}

double NNfunction-ss_uLcR::synapse0x27a67a0() {
   return (neuron0x279fe60()*0.0189046);
}

double NNfunction-ss_uLcR::synapse0x27a67e0() {
   return (neuron0x27a01a0()*0.0191494);
}

double NNfunction-ss_uLcR::synapse0x27a6820() {
   return (neuron0x27a04e0()*0.0166971);
}

double NNfunction-ss_uLcR::synapse0x27a6860() {
   return (neuron0x27a0820()*0.00778171);
}

double NNfunction-ss_uLcR::synapse0x27a68a0() {
   return (neuron0x27a0b60()*0.0465117);
}

double NNfunction-ss_uLcR::synapse0x27a68e0() {
   return (neuron0x27a0ea0()*0.107919);
}

double NNfunction-ss_uLcR::synapse0x27a6920() {
   return (neuron0x27a11e0()*-0.0964022);
}

double NNfunction-ss_uLcR::synapse0x27a6960() {
   return (neuron0x27a1520()*-0.204201);
}

double NNfunction-ss_uLcR::synapse0x27a69a0() {
   return (neuron0x27a1860()*-0.384899);
}

double NNfunction-ss_uLcR::synapse0x27a69e0() {
   return (neuron0x27a1ba0()*0.0766632);
}

double NNfunction-ss_uLcR::synapse0x27a6a20() {
   return (neuron0x27a1ee0()*-0.113307);
}

double NNfunction-ss_uLcR::synapse0x27a6a60() {
   return (neuron0x27a2220()*-0.0955951);
}

double NNfunction-ss_uLcR::synapse0x27a64f0() {
   return (neuron0x27a2560()*-0.0177681);
}

double NNfunction-ss_uLcR::synapse0x27a6530() {
   return (neuron0x27a2ac0()*-0.153226);
}

double NNfunction-ss_uLcR::synapse0x27a6bb0() {
   return (neuron0x27a2ce0()*-0.1953);
}

double NNfunction-ss_uLcR::synapse0x27a6bf0() {
   return (neuron0x27a3020()*-0.0120441);
}

double NNfunction-ss_uLcR::synapse0x27a6c30() {
   return (neuron0x27a3360()*-0.0581415);
}

double NNfunction-ss_uLcR::synapse0x27a6c70() {
   return (neuron0x27a36a0()*-0.0349009);
}

double NNfunction-ss_uLcR::synapse0x27a6cb0() {
   return (neuron0x27a39e0()*-0.020069);
}

double NNfunction-ss_uLcR::synapse0x27a6cf0() {
   return (neuron0x27a3d20()*0.0592958);
}

double NNfunction-ss_uLcR::synapse0x27a7070() {
   return (neuron0x279f1f0()*-0.0264069);
}

double NNfunction-ss_uLcR::synapse0x27a70b0() {
   return (neuron0x279f4a0()*-0.00553214);
}

double NNfunction-ss_uLcR::synapse0x27a70f0() {
   return (neuron0x279f7e0()*0.0100344);
}

double NNfunction-ss_uLcR::synapse0x27a7130() {
   return (neuron0x279fb20()*-2.14823);
}

double NNfunction-ss_uLcR::synapse0x27a7170() {
   return (neuron0x279fe60()*0.0177555);
}

double NNfunction-ss_uLcR::synapse0x27a71b0() {
   return (neuron0x27a01a0()*0.0259011);
}

double NNfunction-ss_uLcR::synapse0x27a71f0() {
   return (neuron0x27a04e0()*0.00386461);
}

double NNfunction-ss_uLcR::synapse0x27a7230() {
   return (neuron0x27a0820()*0.0234148);
}

double NNfunction-ss_uLcR::synapse0x27a7270() {
   return (neuron0x27a0b60()*-0.0503721);
}

double NNfunction-ss_uLcR::synapse0x2568500() {
   return (neuron0x27a0ea0()*-0.019158);
}

double NNfunction-ss_uLcR::synapse0x2568540() {
   return (neuron0x27a11e0()*-0.0130974);
}

double NNfunction-ss_uLcR::synapse0x2568580() {
   return (neuron0x27a1520()*0.132984);
}

double NNfunction-ss_uLcR::synapse0x25685c0() {
   return (neuron0x27a1860()*-0.0157323);
}

double NNfunction-ss_uLcR::synapse0x2568600() {
   return (neuron0x27a1ba0()*0.0223178);
}

double NNfunction-ss_uLcR::synapse0x2568640() {
   return (neuron0x27a1ee0()*0.0186045);
}

double NNfunction-ss_uLcR::synapse0x2568680() {
   return (neuron0x27a2220()*-0.186272);
}

double NNfunction-ss_uLcR::synapse0x27a6ec0() {
   return (neuron0x27a2560()*0.0140582);
}

double NNfunction-ss_uLcR::synapse0x27a6f00() {
   return (neuron0x27a2ac0()*-0.00662072);
}

double NNfunction-ss_uLcR::synapse0x25687d0() {
   return (neuron0x27a2ce0()*-0.00391014);
}

double NNfunction-ss_uLcR::synapse0x2568810() {
   return (neuron0x27a3020()*-0.0206287);
}

double NNfunction-ss_uLcR::synapse0x2568850() {
   return (neuron0x27a3360()*-0.00828283);
}

double NNfunction-ss_uLcR::synapse0x2568890() {
   return (neuron0x27a36a0()*-0.000907861);
}

double NNfunction-ss_uLcR::synapse0x25688d0() {
   return (neuron0x27a39e0()*0.0340626);
}

double NNfunction-ss_uLcR::synapse0x27a7ac0() {
   return (neuron0x27a3d20()*0.0496922);
}

double NNfunction-ss_uLcR::synapse0x27a7e40() {
   return (neuron0x279f1f0()*0.0992341);
}

double NNfunction-ss_uLcR::synapse0x27a7e80() {
   return (neuron0x279f4a0()*-0.716236);
}

double NNfunction-ss_uLcR::synapse0x27a7ec0() {
   return (neuron0x279f7e0()*-0.602013);
}

double NNfunction-ss_uLcR::synapse0x27a7f00() {
   return (neuron0x279fb20()*0.164909);
}

double NNfunction-ss_uLcR::synapse0x27a7f40() {
   return (neuron0x279fe60()*0.532133);
}

double NNfunction-ss_uLcR::synapse0x27a7f80() {
   return (neuron0x27a01a0()*0.548823);
}

double NNfunction-ss_uLcR::synapse0x27a7fc0() {
   return (neuron0x27a04e0()*-0.333429);
}

double NNfunction-ss_uLcR::synapse0x27a8000() {
   return (neuron0x27a0820()*-1.04278);
}

double NNfunction-ss_uLcR::synapse0x27a8040() {
   return (neuron0x27a0b60()*-0.0689751);
}

double NNfunction-ss_uLcR::synapse0x27a8080() {
   return (neuron0x27a0ea0()*-0.0528289);
}

double NNfunction-ss_uLcR::synapse0x27a80c0() {
   return (neuron0x27a11e0()*0.141625);
}

double NNfunction-ss_uLcR::synapse0x27a8100() {
   return (neuron0x27a1520()*0.175498);
}

double NNfunction-ss_uLcR::synapse0x27a8140() {
   return (neuron0x27a1860()*0.489416);
}

double NNfunction-ss_uLcR::synapse0x27a8180() {
   return (neuron0x27a1ba0()*-0.142851);
}

double NNfunction-ss_uLcR::synapse0x27a81c0() {
   return (neuron0x27a1ee0()*0.259883);
}

double NNfunction-ss_uLcR::synapse0x27a8200() {
   return (neuron0x27a2220()*-0.201825);
}

double NNfunction-ss_uLcR::synapse0x27a7c90() {
   return (neuron0x27a2560()*0.511065);
}

double NNfunction-ss_uLcR::synapse0x27a7cd0() {
   return (neuron0x27a2ac0()*-0.164189);
}

double NNfunction-ss_uLcR::synapse0x27a8350() {
   return (neuron0x27a2ce0()*1.16315);
}

double NNfunction-ss_uLcR::synapse0x27a8390() {
   return (neuron0x27a3020()*-0.674019);
}

double NNfunction-ss_uLcR::synapse0x27a83d0() {
   return (neuron0x27a3360()*0.339886);
}

double NNfunction-ss_uLcR::synapse0x27a8410() {
   return (neuron0x27a36a0()*0.290983);
}

double NNfunction-ss_uLcR::synapse0x27a8450() {
   return (neuron0x27a39e0()*-0.197603);
}

double NNfunction-ss_uLcR::synapse0x27a8490() {
   return (neuron0x27a3d20()*-0.0890379);
}

double NNfunction-ss_uLcR::synapse0x27a8810() {
   return (neuron0x279f1f0()*0.0421403);
}

double NNfunction-ss_uLcR::synapse0x27a8850() {
   return (neuron0x279f4a0()*-0.11183);
}

double NNfunction-ss_uLcR::synapse0x27a8890() {
   return (neuron0x279f7e0()*0.0484461);
}

double NNfunction-ss_uLcR::synapse0x27a88d0() {
   return (neuron0x279fb20()*-0.905274);
}

double NNfunction-ss_uLcR::synapse0x27a8910() {
   return (neuron0x279fe60()*0.0231243);
}

double NNfunction-ss_uLcR::synapse0x27a8950() {
   return (neuron0x27a01a0()*0.0521232);
}

double NNfunction-ss_uLcR::synapse0x27a8990() {
   return (neuron0x27a04e0()*0.0391356);
}

double NNfunction-ss_uLcR::synapse0x27a89d0() {
   return (neuron0x27a0820()*0.048936);
}

double NNfunction-ss_uLcR::synapse0x27a8a10() {
   return (neuron0x27a0b60()*0.143902);
}

double NNfunction-ss_uLcR::synapse0x27a8a50() {
   return (neuron0x27a0ea0()*0.0506595);
}

double NNfunction-ss_uLcR::synapse0x27a8a90() {
   return (neuron0x27a11e0()*0.0438106);
}

double NNfunction-ss_uLcR::synapse0x27a8ad0() {
   return (neuron0x27a1520()*0.0674496);
}

double NNfunction-ss_uLcR::synapse0x27a8b10() {
   return (neuron0x27a1860()*0.296944);
}

double NNfunction-ss_uLcR::synapse0x27a8b50() {
   return (neuron0x27a1ba0()*0.120761);
}

double NNfunction-ss_uLcR::synapse0x27a8b90() {
   return (neuron0x27a1ee0()*0.0959216);
}

double NNfunction-ss_uLcR::synapse0x27a8bd0() {
   return (neuron0x27a2220()*0.157426);
}

double NNfunction-ss_uLcR::synapse0x27a8660() {
   return (neuron0x27a2560()*0.0455803);
}

double NNfunction-ss_uLcR::synapse0x27a86a0() {
   return (neuron0x27a2ac0()*0.0931243);
}

double NNfunction-ss_uLcR::synapse0x27a8d20() {
   return (neuron0x27a2ce0()*0.165349);
}

double NNfunction-ss_uLcR::synapse0x27a8d60() {
   return (neuron0x27a3020()*0.190777);
}

double NNfunction-ss_uLcR::synapse0x27a8da0() {
   return (neuron0x27a3360()*-0.0857259);
}

double NNfunction-ss_uLcR::synapse0x27a8de0() {
   return (neuron0x27a36a0()*-0.123655);
}

double NNfunction-ss_uLcR::synapse0x27a8e20() {
   return (neuron0x27a39e0()*-0.0702731);
}

double NNfunction-ss_uLcR::synapse0x27a8e60() {
   return (neuron0x27a3d20()*-0.0553326);
}

double NNfunction-ss_uLcR::synapse0x27a29b0() {
   return (neuron0x279f1f0()*0.131778);
}

double NNfunction-ss_uLcR::synapse0x27a29f0() {
   return (neuron0x279f4a0()*-0.78911);
}

double NNfunction-ss_uLcR::synapse0x27a2a30() {
   return (neuron0x279f7e0()*0.837167);
}

double NNfunction-ss_uLcR::synapse0x27a2a70() {
   return (neuron0x279fb20()*-1.51482);
}

double NNfunction-ss_uLcR::synapse0x27a93f0() {
   return (neuron0x279fe60()*0.62896);
}

double NNfunction-ss_uLcR::synapse0x27a9430() {
   return (neuron0x27a01a0()*0.708067);
}

double NNfunction-ss_uLcR::synapse0x27a9470() {
   return (neuron0x27a04e0()*0.373303);
}

double NNfunction-ss_uLcR::synapse0x27a94b0() {
   return (neuron0x27a0820()*0.373225);
}

double NNfunction-ss_uLcR::synapse0x27a94f0() {
   return (neuron0x27a0b60()*0.676424);
}

double NNfunction-ss_uLcR::synapse0x27a9530() {
   return (neuron0x27a0ea0()*0.370926);
}

double NNfunction-ss_uLcR::synapse0x27a9570() {
   return (neuron0x27a11e0()*0.653463);
}

double NNfunction-ss_uLcR::synapse0x27a95b0() {
   return (neuron0x27a1520()*0.866959);
}

double NNfunction-ss_uLcR::synapse0x27a95f0() {
   return (neuron0x27a1860()*0.179514);
}

double NNfunction-ss_uLcR::synapse0x27a9630() {
   return (neuron0x27a1ba0()*-0.121998);
}

double NNfunction-ss_uLcR::synapse0x27a9670() {
   return (neuron0x27a1ee0()*0.28468);
}

double NNfunction-ss_uLcR::synapse0x27a96b0() {
   return (neuron0x27a2220()*-1.97483);
}

double NNfunction-ss_uLcR::synapse0x27a9030() {
   return (neuron0x27a2560()*0.468923);
}

double NNfunction-ss_uLcR::synapse0x27a9070() {
   return (neuron0x27a2ac0()*-0.143174);
}

double NNfunction-ss_uLcR::synapse0x27a9800() {
   return (neuron0x27a2ce0()*-0.0823601);
}

double NNfunction-ss_uLcR::synapse0x27a9840() {
   return (neuron0x27a3020()*-0.0747416);
}

double NNfunction-ss_uLcR::synapse0x27a9880() {
   return (neuron0x27a3360()*0.111914);
}

double NNfunction-ss_uLcR::synapse0x27a98c0() {
   return (neuron0x27a36a0()*0.411652);
}

double NNfunction-ss_uLcR::synapse0x27a9900() {
   return (neuron0x27a39e0()*-0.307183);
}

double NNfunction-ss_uLcR::synapse0x27a9940() {
   return (neuron0x27a3d20()*-0.0985429);
}

double NNfunction-ss_uLcR::synapse0x27a9cc0() {
   return (neuron0x279f1f0()*0.000895321);
}

double NNfunction-ss_uLcR::synapse0x27a9d00() {
   return (neuron0x279f4a0()*0.2815);
}

double NNfunction-ss_uLcR::synapse0x27a9d40() {
   return (neuron0x279f7e0()*-0.0612394);
}

double NNfunction-ss_uLcR::synapse0x27a9d80() {
   return (neuron0x279fb20()*-0.974767);
}

double NNfunction-ss_uLcR::synapse0x27a9dc0() {
   return (neuron0x279fe60()*0.00420853);
}

double NNfunction-ss_uLcR::synapse0x27a9e00() {
   return (neuron0x27a01a0()*0.126515);
}

double NNfunction-ss_uLcR::synapse0x27a9e40() {
   return (neuron0x27a04e0()*-0.102415);
}

double NNfunction-ss_uLcR::synapse0x27a9e80() {
   return (neuron0x27a0820()*0.114215);
}

double NNfunction-ss_uLcR::synapse0x27a9ec0() {
   return (neuron0x27a0b60()*0.171422);
}

double NNfunction-ss_uLcR::synapse0x27a9f00() {
   return (neuron0x27a0ea0()*-0.0203043);
}

double NNfunction-ss_uLcR::synapse0x27a9f40() {
   return (neuron0x27a11e0()*-0.0281046);
}

double NNfunction-ss_uLcR::synapse0x27a9f80() {
   return (neuron0x27a1520()*-0.558348);
}

double NNfunction-ss_uLcR::synapse0x27a9fc0() {
   return (neuron0x27a1860()*0.0602345);
}

double NNfunction-ss_uLcR::synapse0x27aa000() {
   return (neuron0x27a1ba0()*-0.191917);
}

double NNfunction-ss_uLcR::synapse0x27aa040() {
   return (neuron0x27a1ee0()*0.103434);
}

double NNfunction-ss_uLcR::synapse0x27aa080() {
   return (neuron0x27a2220()*-0.59994);
}

double NNfunction-ss_uLcR::synapse0x27a9b10() {
   return (neuron0x27a2560()*-0.113214);
}

double NNfunction-ss_uLcR::synapse0x27a9b50() {
   return (neuron0x27a2ac0()*0.589626);
}

double NNfunction-ss_uLcR::synapse0x27aa1d0() {
   return (neuron0x27a2ce0()*0.677817);
}

double NNfunction-ss_uLcR::synapse0x27aa210() {
   return (neuron0x27a3020()*0.64939);
}

double NNfunction-ss_uLcR::synapse0x27aa250() {
   return (neuron0x27a3360()*0.204195);
}

double NNfunction-ss_uLcR::synapse0x27aa290() {
   return (neuron0x27a36a0()*-0.319003);
}

double NNfunction-ss_uLcR::synapse0x27aa2d0() {
   return (neuron0x27a39e0()*0.104456);
}

double NNfunction-ss_uLcR::synapse0x27aa310() {
   return (neuron0x27a3d20()*0.134929);
}

double NNfunction-ss_uLcR::synapse0x27aa690() {
   return (neuron0x279f1f0()*-0.0960056);
}

double NNfunction-ss_uLcR::synapse0x27aa6d0() {
   return (neuron0x279f4a0()*0.273308);
}

double NNfunction-ss_uLcR::synapse0x27aa710() {
   return (neuron0x279f7e0()*-0.264616);
}

double NNfunction-ss_uLcR::synapse0x27aa750() {
   return (neuron0x279fb20()*1.10452);
}

double NNfunction-ss_uLcR::synapse0x27aa790() {
   return (neuron0x279fe60()*-0.366207);
}

double NNfunction-ss_uLcR::synapse0x27aa7d0() {
   return (neuron0x27a01a0()*1.14315);
}

double NNfunction-ss_uLcR::synapse0x27aa810() {
   return (neuron0x27a04e0()*0.0522986);
}

double NNfunction-ss_uLcR::synapse0x27aa850() {
   return (neuron0x27a0820()*0.0449025);
}

double NNfunction-ss_uLcR::synapse0x27aa890() {
   return (neuron0x27a0b60()*0.791122);
}

double NNfunction-ss_uLcR::synapse0x27aa8d0() {
   return (neuron0x27a0ea0()*0.635959);
}

double NNfunction-ss_uLcR::synapse0x27aa910() {
   return (neuron0x27a11e0()*0.834869);
}

double NNfunction-ss_uLcR::synapse0x27aa950() {
   return (neuron0x27a1520()*-1.05458);
}

double NNfunction-ss_uLcR::synapse0x27aa990() {
   return (neuron0x27a1860()*0.167903);
}

double NNfunction-ss_uLcR::synapse0x27aa9d0() {
   return (neuron0x27a1ba0()*0.15162);
}

double NNfunction-ss_uLcR::synapse0x27aaa10() {
   return (neuron0x27a1ee0()*-1.09344);
}

double NNfunction-ss_uLcR::synapse0x27aaa50() {
   return (neuron0x27a2220()*1.70936);
}

double NNfunction-ss_uLcR::synapse0x27aa4e0() {
   return (neuron0x27a2560()*0.148811);
}

double NNfunction-ss_uLcR::synapse0x27aa520() {
   return (neuron0x27a2ac0()*0.408789);
}

double NNfunction-ss_uLcR::synapse0x27a72b0() {
   return (neuron0x27a2ce0()*0.168356);
}

double NNfunction-ss_uLcR::synapse0x27a72f0() {
   return (neuron0x27a3020()*-0.659381);
}

double NNfunction-ss_uLcR::synapse0x27a7330() {
   return (neuron0x27a3360()*0.886481);
}

double NNfunction-ss_uLcR::synapse0x27a7370() {
   return (neuron0x27a36a0()*-0.750324);
}

double NNfunction-ss_uLcR::synapse0x27a73b0() {
   return (neuron0x27a39e0()*-0.124969);
}

double NNfunction-ss_uLcR::synapse0x27a73f0() {
   return (neuron0x27a3d20()*0.0305246);
}

double NNfunction-ss_uLcR::synapse0x27a7770() {
   return (neuron0x279f1f0()*-0.232755);
}

double NNfunction-ss_uLcR::synapse0x27a77b0() {
   return (neuron0x279f4a0()*0.766051);
}

double NNfunction-ss_uLcR::synapse0x27a77f0() {
   return (neuron0x279f7e0()*-0.377127);
}

double NNfunction-ss_uLcR::synapse0x27a7830() {
   return (neuron0x279fb20()*0.457565);
}

double NNfunction-ss_uLcR::synapse0x27a7870() {
   return (neuron0x279fe60()*-0.235165);
}

double NNfunction-ss_uLcR::synapse0x27a78b0() {
   return (neuron0x27a01a0()*-0.102672);
}

double NNfunction-ss_uLcR::synapse0x27a78f0() {
   return (neuron0x27a04e0()*0.171801);
}

double NNfunction-ss_uLcR::synapse0x27a7930() {
   return (neuron0x27a0820()*-0.717633);
}

double NNfunction-ss_uLcR::synapse0x27a7970() {
   return (neuron0x27a0b60()*-0.561538);
}

double NNfunction-ss_uLcR::synapse0x27a79b0() {
   return (neuron0x27a0ea0()*-0.118108);
}

double NNfunction-ss_uLcR::synapse0x27a79f0() {
   return (neuron0x27a11e0()*0.354246);
}

double NNfunction-ss_uLcR::synapse0x27a7a30() {
   return (neuron0x27a1520()*0.243309);
}

double NNfunction-ss_uLcR::synapse0x27a7a70() {
   return (neuron0x27a1860()*0.528287);
}

double NNfunction-ss_uLcR::synapse0x27abbb0() {
   return (neuron0x27a1ba0()*0.181114);
}

double NNfunction-ss_uLcR::synapse0x27abbf0() {
   return (neuron0x27a1ee0()*-1.32127);
}

double NNfunction-ss_uLcR::synapse0x27abc30() {
   return (neuron0x27a2220()*0.934478);
}

double NNfunction-ss_uLcR::synapse0x27a75c0() {
   return (neuron0x27a2560()*-0.277472);
}

double NNfunction-ss_uLcR::synapse0x27a7600() {
   return (neuron0x27a2ac0()*0.174681);
}

double NNfunction-ss_uLcR::synapse0x27abd80() {
   return (neuron0x27a2ce0()*0.377619);
}

double NNfunction-ss_uLcR::synapse0x27abdc0() {
   return (neuron0x27a3020()*0.0270664);
}

double NNfunction-ss_uLcR::synapse0x27abe00() {
   return (neuron0x27a3360()*0.318345);
}

double NNfunction-ss_uLcR::synapse0x27abe40() {
   return (neuron0x27a36a0()*-0.77033);
}

double NNfunction-ss_uLcR::synapse0x27abe80() {
   return (neuron0x27a39e0()*0.493477);
}

double NNfunction-ss_uLcR::synapse0x27abec0() {
   return (neuron0x27a3d20()*-0.167735);
}

double NNfunction-ss_uLcR::synapse0x27ac240() {
   return (neuron0x279f1f0()*-0.224975);
}

double NNfunction-ss_uLcR::synapse0x27ac280() {
   return (neuron0x279f4a0()*-0.130225);
}

double NNfunction-ss_uLcR::synapse0x27ac2c0() {
   return (neuron0x279f7e0()*-0.563417);
}

double NNfunction-ss_uLcR::synapse0x27ac300() {
   return (neuron0x279fb20()*-1.10603);
}

double NNfunction-ss_uLcR::synapse0x27ac340() {
   return (neuron0x279fe60()*-0.137175);
}

double NNfunction-ss_uLcR::synapse0x27ac380() {
   return (neuron0x27a01a0()*0.861799);
}

double NNfunction-ss_uLcR::synapse0x27ac3c0() {
   return (neuron0x27a04e0()*0.128816);
}

double NNfunction-ss_uLcR::synapse0x27ac400() {
   return (neuron0x27a0820()*-0.414009);
}

double NNfunction-ss_uLcR::synapse0x27ac440() {
   return (neuron0x27a0b60()*0.644622);
}

double NNfunction-ss_uLcR::synapse0x27ac480() {
   return (neuron0x27a0ea0()*0.256877);
}

double NNfunction-ss_uLcR::synapse0x27ac4c0() {
   return (neuron0x27a11e0()*-0.51619);
}

double NNfunction-ss_uLcR::synapse0x27ac500() {
   return (neuron0x27a1520()*-0.26747);
}

double NNfunction-ss_uLcR::synapse0x27ac540() {
   return (neuron0x27a1860()*1.05402);
}

double NNfunction-ss_uLcR::synapse0x27ac580() {
   return (neuron0x27a1ba0()*-0.374538);
}

double NNfunction-ss_uLcR::synapse0x27ac5c0() {
   return (neuron0x27a1ee0()*-0.0269866);
}

double NNfunction-ss_uLcR::synapse0x27ac600() {
   return (neuron0x27a2220()*-0.596837);
}

double NNfunction-ss_uLcR::synapse0x27ac090() {
   return (neuron0x27a2560()*1.23553);
}

double NNfunction-ss_uLcR::synapse0x27ac0d0() {
   return (neuron0x27a2ac0()*0.0806089);
}

double NNfunction-ss_uLcR::synapse0x27ac750() {
   return (neuron0x27a2ce0()*0.218363);
}

double NNfunction-ss_uLcR::synapse0x27ac790() {
   return (neuron0x27a3020()*0.432207);
}

double NNfunction-ss_uLcR::synapse0x27ac7d0() {
   return (neuron0x27a3360()*-0.479397);
}

double NNfunction-ss_uLcR::synapse0x27ac810() {
   return (neuron0x27a36a0()*0.334536);
}

double NNfunction-ss_uLcR::synapse0x27ac850() {
   return (neuron0x27a39e0()*-0.185438);
}

double NNfunction-ss_uLcR::synapse0x27ac890() {
   return (neuron0x27a3d20()*0.390599);
}

double NNfunction-ss_uLcR::synapse0x27acc10() {
   return (neuron0x279f1f0()*0.0307648);
}

double NNfunction-ss_uLcR::synapse0x27acc50() {
   return (neuron0x279f4a0()*0.0418072);
}

double NNfunction-ss_uLcR::synapse0x27acc90() {
   return (neuron0x279f7e0()*0.0928615);
}

double NNfunction-ss_uLcR::synapse0x27accd0() {
   return (neuron0x279fb20()*-0.232594);
}

double NNfunction-ss_uLcR::synapse0x27acd10() {
   return (neuron0x279fe60()*0.00586084);
}

double NNfunction-ss_uLcR::synapse0x27acd50() {
   return (neuron0x27a01a0()*0.0110797);
}

double NNfunction-ss_uLcR::synapse0x27acd90() {
   return (neuron0x27a04e0()*0.0974377);
}

double NNfunction-ss_uLcR::synapse0x27acdd0() {
   return (neuron0x27a0820()*-0.0334798);
}

double NNfunction-ss_uLcR::synapse0x27ace10() {
   return (neuron0x27a0b60()*0.00690725);
}

double NNfunction-ss_uLcR::synapse0x27ace50() {
   return (neuron0x27a0ea0()*0.0166581);
}

double NNfunction-ss_uLcR::synapse0x27ace90() {
   return (neuron0x27a11e0()*-0.0351624);
}

double NNfunction-ss_uLcR::synapse0x27aced0() {
   return (neuron0x27a1520()*0.143705);
}

double NNfunction-ss_uLcR::synapse0x27acf10() {
   return (neuron0x27a1860()*0.0914527);
}

double NNfunction-ss_uLcR::synapse0x27acf50() {
   return (neuron0x27a1ba0()*0.0306224);
}

double NNfunction-ss_uLcR::synapse0x27acf90() {
   return (neuron0x27a1ee0()*0.0241118);
}

double NNfunction-ss_uLcR::synapse0x27acfd0() {
   return (neuron0x27a2220()*1.56042);
}

double NNfunction-ss_uLcR::synapse0x27aca60() {
   return (neuron0x27a2560()*-0.0137715);
}

double NNfunction-ss_uLcR::synapse0x27acaa0() {
   return (neuron0x27a2ac0()*0.0686784);
}

double NNfunction-ss_uLcR::synapse0x27ad120() {
   return (neuron0x27a2ce0()*0.0410588);
}

double NNfunction-ss_uLcR::synapse0x27ad160() {
   return (neuron0x27a3020()*0.0154573);
}

double NNfunction-ss_uLcR::synapse0x27ad1a0() {
   return (neuron0x27a3360()*-0.0980439);
}

double NNfunction-ss_uLcR::synapse0x27ad1e0() {
   return (neuron0x27a36a0()*-0.0441789);
}

double NNfunction-ss_uLcR::synapse0x27ad220() {
   return (neuron0x27a39e0()*-0.00868956);
}

double NNfunction-ss_uLcR::synapse0x27ad260() {
   return (neuron0x27a3d20()*-0.05887);
}

double NNfunction-ss_uLcR::synapse0x27ad5e0() {
   return (neuron0x279f1f0()*0.0408648);
}

double NNfunction-ss_uLcR::synapse0x27ad620() {
   return (neuron0x279f4a0()*0.0908228);
}

double NNfunction-ss_uLcR::synapse0x27ad660() {
   return (neuron0x279f7e0()*-0.011344);
}

double NNfunction-ss_uLcR::synapse0x27ad6a0() {
   return (neuron0x279fb20()*-1.01394);
}

double NNfunction-ss_uLcR::synapse0x27ad6e0() {
   return (neuron0x279fe60()*0.0116508);
}

double NNfunction-ss_uLcR::synapse0x27ad720() {
   return (neuron0x27a01a0()*-0.0375408);
}

double NNfunction-ss_uLcR::synapse0x27ad760() {
   return (neuron0x27a04e0()*-0.0890595);
}

double NNfunction-ss_uLcR::synapse0x27ad7a0() {
   return (neuron0x27a0820()*-0.0848441);
}

double NNfunction-ss_uLcR::synapse0x27ad7e0() {
   return (neuron0x27a0b60()*0.114538);
}

double NNfunction-ss_uLcR::synapse0x27ad820() {
   return (neuron0x27a0ea0()*-0.0746704);
}

double NNfunction-ss_uLcR::synapse0x27ad860() {
   return (neuron0x27a11e0()*0.147665);
}

double NNfunction-ss_uLcR::synapse0x27ad8a0() {
   return (neuron0x27a1520()*0.158614);
}

double NNfunction-ss_uLcR::synapse0x27ad8e0() {
   return (neuron0x27a1860()*-0.135413);
}

double NNfunction-ss_uLcR::synapse0x27ad920() {
   return (neuron0x27a1ba0()*-0.105993);
}

double NNfunction-ss_uLcR::synapse0x27ad960() {
   return (neuron0x27a1ee0()*-0.109017);
}

double NNfunction-ss_uLcR::synapse0x27ad9a0() {
   return (neuron0x27a2220()*0.208549);
}

double NNfunction-ss_uLcR::synapse0x27ad430() {
   return (neuron0x27a2560()*0.0651278);
}

double NNfunction-ss_uLcR::synapse0x27ad470() {
   return (neuron0x27a2ac0()*0.00934118);
}

double NNfunction-ss_uLcR::synapse0x27adaf0() {
   return (neuron0x27a2ce0()*-0.229255);
}

double NNfunction-ss_uLcR::synapse0x27adb30() {
   return (neuron0x27a3020()*-0.145007);
}

double NNfunction-ss_uLcR::synapse0x27adb70() {
   return (neuron0x27a3360()*0.109711);
}

double NNfunction-ss_uLcR::synapse0x27adbb0() {
   return (neuron0x27a36a0()*0.0223198);
}

double NNfunction-ss_uLcR::synapse0x27adbf0() {
   return (neuron0x27a39e0()*-0.0978589);
}

double NNfunction-ss_uLcR::synapse0x27adc30() {
   return (neuron0x27a3d20()*0.0472056);
}

double NNfunction-ss_uLcR::synapse0x27adfb0() {
   return (neuron0x279f1f0()*0.206198);
}

double NNfunction-ss_uLcR::synapse0x279f380() {
   return (neuron0x279f4a0()*1.47506);
}

double NNfunction-ss_uLcR::synapse0x279f3c0() {
   return (neuron0x279f7e0()*0.287085);
}

double NNfunction-ss_uLcR::synapse0x279f6c0() {
   return (neuron0x279fb20()*0.933169);
}

double NNfunction-ss_uLcR::synapse0x279f700() {
   return (neuron0x279fe60()*0.238706);
}

double NNfunction-ss_uLcR::synapse0x279fa00() {
   return (neuron0x27a01a0()*-0.252861);
}

double NNfunction-ss_uLcR::synapse0x279fa40() {
   return (neuron0x27a04e0()*-0.273407);
}

double NNfunction-ss_uLcR::synapse0x279fd40() {
   return (neuron0x27a0820()*0.927222);
}

double NNfunction-ss_uLcR::synapse0x279fd80() {
   return (neuron0x27a0b60()*-1.12077);
}

double NNfunction-ss_uLcR::synapse0x27a0080() {
   return (neuron0x27a0ea0()*-0.0846845);
}

double NNfunction-ss_uLcR::synapse0x27a00c0() {
   return (neuron0x27a11e0()*1.09863);
}

double NNfunction-ss_uLcR::synapse0x27a03c0() {
   return (neuron0x27a1520()*0.763491);
}

double NNfunction-ss_uLcR::synapse0x27a0400() {
   return (neuron0x27a1860()*-0.517588);
}

double NNfunction-ss_uLcR::synapse0x27a0700() {
   return (neuron0x27a1ba0()*0.435002);
}

double NNfunction-ss_uLcR::synapse0x27a0740() {
   return (neuron0x27a1ee0()*0.0919673);
}

double NNfunction-ss_uLcR::synapse0x27a0a40() {
   return (neuron0x27a2220()*-1.00639);
}

double NNfunction-ss_uLcR::synapse0x27a0a80() {
   return (neuron0x27a2560()*0.218601);
}

double NNfunction-ss_uLcR::synapse0x27a0d80() {
   return (neuron0x27a2ac0()*0.150518);
}

double NNfunction-ss_uLcR::synapse0x27a0dc0() {
   return (neuron0x27a2ce0()*0.0296372);
}

double NNfunction-ss_uLcR::synapse0x27a10c0() {
   return (neuron0x27a3020()*0.000899596);
}

double NNfunction-ss_uLcR::synapse0x27a1100() {
   return (neuron0x27a3360()*-0.129852);
}

double NNfunction-ss_uLcR::synapse0x27a1400() {
   return (neuron0x27a36a0()*0.136292);
}

double NNfunction-ss_uLcR::synapse0x27a1440() {
   return (neuron0x27a39e0()*-0.482448);
}

double NNfunction-ss_uLcR::synapse0x27a1740() {
   return (neuron0x27a3d20()*-0.283632);
}

double NNfunction-ss_uLcR::synapse0x27a1780() {
   return (neuron0x279f1f0()*-0.179096);
}

double NNfunction-ss_uLcR::synapse0x27a2440() {
   return (neuron0x279f4a0()*-0.616122);
}

double NNfunction-ss_uLcR::synapse0x27a2480() {
   return (neuron0x279f7e0()*-1.34425);
}

double NNfunction-ss_uLcR::synapse0x27ade00() {
   return (neuron0x279fb20()*0.406277);
}

double NNfunction-ss_uLcR::synapse0x27ade40() {
   return (neuron0x279fe60()*-0.239438);
}

double NNfunction-ss_uLcR::synapse0x27a2780() {
   return (neuron0x27a01a0()*-0.555584);
}

double NNfunction-ss_uLcR::synapse0x27a27c0() {
   return (neuron0x27a04e0()*-0.064033);
}

double NNfunction-ss_uLcR::synapse0x255a190() {
   return (neuron0x27a0820()*-0.885555);
}

double NNfunction-ss_uLcR::synapse0x255a1d0() {
   return (neuron0x27a0b60()*-0.0722595);
}

double NNfunction-ss_uLcR::synapse0x27a2f00() {
   return (neuron0x27a0ea0()*0.552557);
}

double NNfunction-ss_uLcR::synapse0x27a2f40() {
   return (neuron0x27a11e0()*-0.441572);
}

double NNfunction-ss_uLcR::synapse0x27a3240() {
   return (neuron0x27a1520()*0.574881);
}

double NNfunction-ss_uLcR::synapse0x27a3280() {
   return (neuron0x27a1860()*-0.0152978);
}

double NNfunction-ss_uLcR::synapse0x27a3580() {
   return (neuron0x27a1ba0()*0.0344294);
}

double NNfunction-ss_uLcR::synapse0x27a35c0() {
   return (neuron0x27a1ee0()*-0.875822);
}

double NNfunction-ss_uLcR::synapse0x27a38c0() {
   return (neuron0x27a2220()*-0.787248);
}

double NNfunction-ss_uLcR::synapse0x27a3900() {
   return (neuron0x27a2560()*0.239563);
}

double NNfunction-ss_uLcR::synapse0x27a3c00() {
   return (neuron0x27a2ac0()*1.2506);
}

double NNfunction-ss_uLcR::synapse0x27a3c40() {
   return (neuron0x27a2ce0()*0.281112);
}

double NNfunction-ss_uLcR::synapse0x27a3f40() {
   return (neuron0x27a3020()*-0.613021);
}

double NNfunction-ss_uLcR::synapse0x27a3f80() {
   return (neuron0x27a3360()*0.0921274);
}

double NNfunction-ss_uLcR::synapse0x27a1a80() {
   return (neuron0x27a36a0()*0.059046);
}

double NNfunction-ss_uLcR::synapse0x27a1ac0() {
   return (neuron0x27a39e0()*-0.0524021);
}

double NNfunction-ss_uLcR::synapse0x27afd20() {
   return (neuron0x27a3d20()*0.472561);
}

double NNfunction-ss_uLcR::synapse0x27b00a0() {
   return (neuron0x279f1f0()*0.434176);
}

double NNfunction-ss_uLcR::synapse0x27b00e0() {
   return (neuron0x279f4a0()*-0.654586);
}

double NNfunction-ss_uLcR::synapse0x27b0120() {
   return (neuron0x279f7e0()*0.820664);
}

double NNfunction-ss_uLcR::synapse0x27b0160() {
   return (neuron0x279fb20()*-0.279595);
}

double NNfunction-ss_uLcR::synapse0x27b01a0() {
   return (neuron0x279fe60()*-0.0856558);
}

double NNfunction-ss_uLcR::synapse0x27b01e0() {
   return (neuron0x27a01a0()*-0.430503);
}

double NNfunction-ss_uLcR::synapse0x27b0220() {
   return (neuron0x27a04e0()*0.456702);
}

double NNfunction-ss_uLcR::synapse0x27b0260() {
   return (neuron0x27a0820()*-0.622535);
}

double NNfunction-ss_uLcR::synapse0x27b02a0() {
   return (neuron0x27a0b60()*0.110621);
}

double NNfunction-ss_uLcR::synapse0x27b02e0() {
   return (neuron0x27a0ea0()*-0.129066);
}

double NNfunction-ss_uLcR::synapse0x27b0320() {
   return (neuron0x27a11e0()*0.271394);
}

double NNfunction-ss_uLcR::synapse0x27b0360() {
   return (neuron0x27a1520()*-0.831135);
}

double NNfunction-ss_uLcR::synapse0x27b03a0() {
   return (neuron0x27a1860()*0.401142);
}

double NNfunction-ss_uLcR::synapse0x27b03e0() {
   return (neuron0x27a1ba0()*-0.211938);
}

double NNfunction-ss_uLcR::synapse0x27b0420() {
   return (neuron0x27a1ee0()*-0.58471);
}

double NNfunction-ss_uLcR::synapse0x27b0460() {
   return (neuron0x27a2220()*1.30517);
}

double NNfunction-ss_uLcR::synapse0x27afef0() {
   return (neuron0x27a2560()*0.171632);
}

double NNfunction-ss_uLcR::synapse0x27aff30() {
   return (neuron0x27a2ac0()*-0.0258031);
}

double NNfunction-ss_uLcR::synapse0x27b05b0() {
   return (neuron0x27a2ce0()*0.269703);
}

double NNfunction-ss_uLcR::synapse0x27b05f0() {
   return (neuron0x27a3020()*0.244953);
}

double NNfunction-ss_uLcR::synapse0x27b0630() {
   return (neuron0x27a3360()*0.0458274);
}

double NNfunction-ss_uLcR::synapse0x27b0670() {
   return (neuron0x27a36a0()*0.0893472);
}

double NNfunction-ss_uLcR::synapse0x27b06b0() {
   return (neuron0x27a39e0()*0.723525);
}

double NNfunction-ss_uLcR::synapse0x27b06f0() {
   return (neuron0x27a3d20()*-0.068882);
}

double NNfunction-ss_uLcR::synapse0x27b0a70() {
   return (neuron0x279f1f0()*0.012426);
}

double NNfunction-ss_uLcR::synapse0x27b0ab0() {
   return (neuron0x279f4a0()*-0.0536256);
}

double NNfunction-ss_uLcR::synapse0x27b0af0() {
   return (neuron0x279f7e0()*-0.0167749);
}

double NNfunction-ss_uLcR::synapse0x27b0b30() {
   return (neuron0x279fb20()*0.467062);
}

double NNfunction-ss_uLcR::synapse0x27b0b70() {
   return (neuron0x279fe60()*0.0216454);
}

double NNfunction-ss_uLcR::synapse0x27b0bb0() {
   return (neuron0x27a01a0()*-0.11853);
}

double NNfunction-ss_uLcR::synapse0x27b0bf0() {
   return (neuron0x27a04e0()*-0.0441232);
}

double NNfunction-ss_uLcR::synapse0x27b0c30() {
   return (neuron0x27a0820()*-0.0405718);
}

double NNfunction-ss_uLcR::synapse0x27b0c70() {
   return (neuron0x27a0b60()*-0.0457103);
}

double NNfunction-ss_uLcR::synapse0x27b0cb0() {
   return (neuron0x27a0ea0()*0.0392668);
}

double NNfunction-ss_uLcR::synapse0x27b0cf0() {
   return (neuron0x27a11e0()*-0.0340468);
}

double NNfunction-ss_uLcR::synapse0x27b0d30() {
   return (neuron0x27a1520()*0.894714);
}

double NNfunction-ss_uLcR::synapse0x27b0d70() {
   return (neuron0x27a1860()*-0.095282);
}

double NNfunction-ss_uLcR::synapse0x27b0db0() {
   return (neuron0x27a1ba0()*-0.0158134);
}

double NNfunction-ss_uLcR::synapse0x27b0df0() {
   return (neuron0x27a1ee0()*-0.0330863);
}

double NNfunction-ss_uLcR::synapse0x27b0e30() {
   return (neuron0x27a2220()*0.594843);
}

double NNfunction-ss_uLcR::synapse0x27b08c0() {
   return (neuron0x27a2560()*-0.0608003);
}

double NNfunction-ss_uLcR::synapse0x27b0900() {
   return (neuron0x27a2ac0()*-0.0593146);
}

double NNfunction-ss_uLcR::synapse0x27b0f80() {
   return (neuron0x27a2ce0()*-0.0639988);
}

double NNfunction-ss_uLcR::synapse0x27b0fc0() {
   return (neuron0x27a3020()*-0.0949984);
}

double NNfunction-ss_uLcR::synapse0x27b1000() {
   return (neuron0x27a3360()*-0.01067);
}

double NNfunction-ss_uLcR::synapse0x27b1040() {
   return (neuron0x27a36a0()*0.0885852);
}

double NNfunction-ss_uLcR::synapse0x27b1080() {
   return (neuron0x27a39e0()*-0.0410703);
}

double NNfunction-ss_uLcR::synapse0x27b10c0() {
   return (neuron0x27a3d20()*0.017593);
}

double NNfunction-ss_uLcR::synapse0x27b1440() {
   return (neuron0x279f1f0()*0.0754934);
}

double NNfunction-ss_uLcR::synapse0x27b1480() {
   return (neuron0x279f4a0()*0.841001);
}

double NNfunction-ss_uLcR::synapse0x27b14c0() {
   return (neuron0x279f7e0()*0.0338474);
}

double NNfunction-ss_uLcR::synapse0x27b1500() {
   return (neuron0x279fb20()*3.53308);
}

double NNfunction-ss_uLcR::synapse0x27b1540() {
   return (neuron0x279fe60()*0.036927);
}

double NNfunction-ss_uLcR::synapse0x27b1580() {
   return (neuron0x27a01a0()*-0.959918);
}

double NNfunction-ss_uLcR::synapse0x27b15c0() {
   return (neuron0x27a04e0()*-0.185943);
}

double NNfunction-ss_uLcR::synapse0x27b1600() {
   return (neuron0x27a0820()*-0.0141555);
}

double NNfunction-ss_uLcR::synapse0x27b1640() {
   return (neuron0x27a0b60()*0.169179);
}

double NNfunction-ss_uLcR::synapse0x27b1680() {
   return (neuron0x27a0ea0()*-0.502361);
}

double NNfunction-ss_uLcR::synapse0x27b16c0() {
   return (neuron0x27a11e0()*-0.306978);
}

double NNfunction-ss_uLcR::synapse0x27b1700() {
   return (neuron0x27a1520()*1.62265);
}

double NNfunction-ss_uLcR::synapse0x27b1740() {
   return (neuron0x27a1860()*-0.272852);
}

double NNfunction-ss_uLcR::synapse0x27b1780() {
   return (neuron0x27a1ba0()*-0.93888);
}

double NNfunction-ss_uLcR::synapse0x27b17c0() {
   return (neuron0x27a1ee0()*-0.145373);
}

double NNfunction-ss_uLcR::synapse0x27b1800() {
   return (neuron0x27a2220()*1.07221);
}

double NNfunction-ss_uLcR::synapse0x27b1290() {
   return (neuron0x27a2560()*0.236897);
}

double NNfunction-ss_uLcR::synapse0x27b12d0() {
   return (neuron0x27a2ac0()*0.13471);
}

double NNfunction-ss_uLcR::synapse0x27b1950() {
   return (neuron0x27a2ce0()*-0.768062);
}

double NNfunction-ss_uLcR::synapse0x27b1990() {
   return (neuron0x27a3020()*-0.0068579);
}

double NNfunction-ss_uLcR::synapse0x27b19d0() {
   return (neuron0x27a3360()*-0.0179211);
}

double NNfunction-ss_uLcR::synapse0x27b1a10() {
   return (neuron0x27a36a0()*0.413206);
}

double NNfunction-ss_uLcR::synapse0x27b1a50() {
   return (neuron0x27a39e0()*-0.144732);
}

double NNfunction-ss_uLcR::synapse0x27b1a90() {
   return (neuron0x27a3d20()*0.174143);
}

double NNfunction-ss_uLcR::synapse0x27b1e10() {
   return (neuron0x279f1f0()*-0.370832);
}

double NNfunction-ss_uLcR::synapse0x27b1e50() {
   return (neuron0x279f4a0()*-0.322014);
}

double NNfunction-ss_uLcR::synapse0x27b1e90() {
   return (neuron0x279f7e0()*0.0628221);
}

double NNfunction-ss_uLcR::synapse0x27b1ed0() {
   return (neuron0x279fb20()*0.0875495);
}

double NNfunction-ss_uLcR::synapse0x27b1f10() {
   return (neuron0x279fe60()*0.218698);
}

double NNfunction-ss_uLcR::synapse0x27b1f50() {
   return (neuron0x27a01a0()*-0.0501529);
}

double NNfunction-ss_uLcR::synapse0x27b1f90() {
   return (neuron0x27a04e0()*0.564747);
}

double NNfunction-ss_uLcR::synapse0x27b1fd0() {
   return (neuron0x27a0820()*-0.239103);
}

double NNfunction-ss_uLcR::synapse0x27b2010() {
   return (neuron0x27a0b60()*0.539115);
}

double NNfunction-ss_uLcR::synapse0x27b2050() {
   return (neuron0x27a0ea0()*-0.0394085);
}

double NNfunction-ss_uLcR::synapse0x27b2090() {
   return (neuron0x27a11e0()*-0.552855);
}

double NNfunction-ss_uLcR::synapse0x27b20d0() {
   return (neuron0x27a1520()*-0.20315);
}

double NNfunction-ss_uLcR::synapse0x27b2110() {
   return (neuron0x27a1860()*0.679219);
}

double NNfunction-ss_uLcR::synapse0x27b2150() {
   return (neuron0x27a1ba0()*-0.718926);
}

double NNfunction-ss_uLcR::synapse0x27b2190() {
   return (neuron0x27a1ee0()*-0.16996);
}

double NNfunction-ss_uLcR::synapse0x27b21d0() {
   return (neuron0x27a2220()*-0.817476);
}

double NNfunction-ss_uLcR::synapse0x27b1c60() {
   return (neuron0x27a2560()*0.133515);
}

double NNfunction-ss_uLcR::synapse0x27b1ca0() {
   return (neuron0x27a2ac0()*0.891744);
}

double NNfunction-ss_uLcR::synapse0x27b2320() {
   return (neuron0x27a2ce0()*0.389057);
}

double NNfunction-ss_uLcR::synapse0x27b2360() {
   return (neuron0x27a3020()*0.124591);
}

double NNfunction-ss_uLcR::synapse0x27b23a0() {
   return (neuron0x27a3360()*-0.246244);
}

double NNfunction-ss_uLcR::synapse0x27b23e0() {
   return (neuron0x27a36a0()*0.230887);
}

double NNfunction-ss_uLcR::synapse0x27b2420() {
   return (neuron0x27a39e0()*0.284058);
}

double NNfunction-ss_uLcR::synapse0x27b2460() {
   return (neuron0x27a3d20()*0.461531);
}

double NNfunction-ss_uLcR::synapse0x27b27e0() {
   return (neuron0x279f1f0()*0.0254436);
}

double NNfunction-ss_uLcR::synapse0x27b2820() {
   return (neuron0x279f4a0()*0.0447914);
}

double NNfunction-ss_uLcR::synapse0x27b2860() {
   return (neuron0x279f7e0()*0.0686847);
}

double NNfunction-ss_uLcR::synapse0x27b28a0() {
   return (neuron0x279fb20()*-0.664159);
}

double NNfunction-ss_uLcR::synapse0x27b28e0() {
   return (neuron0x279fe60()*0.0158565);
}

double NNfunction-ss_uLcR::synapse0x27b2920() {
   return (neuron0x27a01a0()*-0.00709373);
}

double NNfunction-ss_uLcR::synapse0x27b2960() {
   return (neuron0x27a04e0()*0.0575325);
}

double NNfunction-ss_uLcR::synapse0x27b29a0() {
   return (neuron0x27a0820()*-0.0138029);
}

double NNfunction-ss_uLcR::synapse0x27b29e0() {
   return (neuron0x27a0b60()*0.0111948);
}

double NNfunction-ss_uLcR::synapse0x27aaba0() {
   return (neuron0x27a0ea0()*-0.0470238);
}

double NNfunction-ss_uLcR::synapse0x27aabe0() {
   return (neuron0x27a11e0()*0.0152024);
}

double NNfunction-ss_uLcR::synapse0x27aac20() {
   return (neuron0x27a1520()*0.136392);
}

double NNfunction-ss_uLcR::synapse0x27aac60() {
   return (neuron0x27a1860()*0.145001);
}

double NNfunction-ss_uLcR::synapse0x27aaca0() {
   return (neuron0x27a1ba0()*-0.0238193);
}

double NNfunction-ss_uLcR::synapse0x27aace0() {
   return (neuron0x27a1ee0()*0.0216522);
}

double NNfunction-ss_uLcR::synapse0x27aad20() {
   return (neuron0x27a2220()*1.01026);
}

double NNfunction-ss_uLcR::synapse0x27b2630() {
   return (neuron0x27a2560()*-0.0216323);
}

double NNfunction-ss_uLcR::synapse0x27b2670() {
   return (neuron0x27a2ac0()*0.158654);
}

double NNfunction-ss_uLcR::synapse0x27aae70() {
   return (neuron0x27a2ce0()*0.0421832);
}

double NNfunction-ss_uLcR::synapse0x27aaeb0() {
   return (neuron0x27a3020()*0.030025);
}

double NNfunction-ss_uLcR::synapse0x27aaef0() {
   return (neuron0x27a3360()*-0.0761049);
}

double NNfunction-ss_uLcR::synapse0x27aaf30() {
   return (neuron0x27a36a0()*-0.0714462);
}

double NNfunction-ss_uLcR::synapse0x27aaf70() {
   return (neuron0x27a39e0()*-0.0243432);
}

double NNfunction-ss_uLcR::synapse0x27aafb0() {
   return (neuron0x27a3d20()*-0.00804743);
}

double NNfunction-ss_uLcR::synapse0x27ab330() {
   return (neuron0x279f1f0()*-0.0449563);
}

double NNfunction-ss_uLcR::synapse0x27ab370() {
   return (neuron0x279f4a0()*0.464659);
}

double NNfunction-ss_uLcR::synapse0x27ab3b0() {
   return (neuron0x279f7e0()*-0.578753);
}

double NNfunction-ss_uLcR::synapse0x27ab3f0() {
   return (neuron0x279fb20()*0.107167);
}

double NNfunction-ss_uLcR::synapse0x27ab430() {
   return (neuron0x279fe60()*-0.856801);
}

double NNfunction-ss_uLcR::synapse0x27ab470() {
   return (neuron0x27a01a0()*0.409972);
}

double NNfunction-ss_uLcR::synapse0x27ab4b0() {
   return (neuron0x27a04e0()*-0.531467);
}

double NNfunction-ss_uLcR::synapse0x27ab4f0() {
   return (neuron0x27a0820()*0.195163);
}

double NNfunction-ss_uLcR::synapse0x27ab530() {
   return (neuron0x27a0b60()*0.569322);
}

double NNfunction-ss_uLcR::synapse0x27ab570() {
   return (neuron0x27a0ea0()*-0.230432);
}

double NNfunction-ss_uLcR::synapse0x27ab5b0() {
   return (neuron0x27a11e0()*-0.30427);
}

double NNfunction-ss_uLcR::synapse0x27ab5f0() {
   return (neuron0x27a1520()*-0.333394);
}

double NNfunction-ss_uLcR::synapse0x27ab630() {
   return (neuron0x27a1860()*-0.480907);
}

double NNfunction-ss_uLcR::synapse0x27ab670() {
   return (neuron0x27a1ba0()*0.21547);
}

double NNfunction-ss_uLcR::synapse0x27ab6b0() {
   return (neuron0x27a1ee0()*0.603548);
}

double NNfunction-ss_uLcR::synapse0x27ab6f0() {
   return (neuron0x27a2220()*-0.140538);
}

double NNfunction-ss_uLcR::synapse0x27ab180() {
   return (neuron0x27a2560()*-0.670724);
}

double NNfunction-ss_uLcR::synapse0x27ab1c0() {
   return (neuron0x27a2ac0()*-0.228467);
}

double NNfunction-ss_uLcR::synapse0x27ab840() {
   return (neuron0x27a2ce0()*0.197647);
}

double NNfunction-ss_uLcR::synapse0x27ab880() {
   return (neuron0x27a3020()*0.139769);
}

double NNfunction-ss_uLcR::synapse0x27ab8c0() {
   return (neuron0x27a3360()*-0.167069);
}

double NNfunction-ss_uLcR::synapse0x27ab900() {
   return (neuron0x27a36a0()*0.813327);
}

double NNfunction-ss_uLcR::synapse0x27ab940() {
   return (neuron0x27a39e0()*-0.397354);
}

double NNfunction-ss_uLcR::synapse0x27ab980() {
   return (neuron0x27a3d20()*-0.0460042);
}

double NNfunction-ss_uLcR::synapse0x27abb50() {
   return (neuron0x279f1f0()*-0.408588);
}

double NNfunction-ss_uLcR::synapse0x27b4be0() {
   return (neuron0x279f4a0()*0.199866);
}

double NNfunction-ss_uLcR::synapse0x27b4c20() {
   return (neuron0x279f7e0()*-1.15782);
}

double NNfunction-ss_uLcR::synapse0x27b4c60() {
   return (neuron0x279fb20()*1.24884);
}

double NNfunction-ss_uLcR::synapse0x27b4ca0() {
   return (neuron0x279fe60()*-0.175798);
}

double NNfunction-ss_uLcR::synapse0x27b4ce0() {
   return (neuron0x27a01a0()*-0.272265);
}

double NNfunction-ss_uLcR::synapse0x27b4d20() {
   return (neuron0x27a04e0()*-0.630916);
}

double NNfunction-ss_uLcR::synapse0x27b4d60() {
   return (neuron0x27a0820()*0.0129561);
}

double NNfunction-ss_uLcR::synapse0x27b4da0() {
   return (neuron0x27a0b60()*-0.276082);
}

double NNfunction-ss_uLcR::synapse0x27b4de0() {
   return (neuron0x27a0ea0()*0.163357);
}

double NNfunction-ss_uLcR::synapse0x27b4e20() {
   return (neuron0x27a11e0()*-0.359968);
}

double NNfunction-ss_uLcR::synapse0x27b4e60() {
   return (neuron0x27a1520()*1.03558);
}

double NNfunction-ss_uLcR::synapse0x27b4ea0() {
   return (neuron0x27a1860()*-0.425821);
}

double NNfunction-ss_uLcR::synapse0x27b4ee0() {
   return (neuron0x27a1ba0()*0.207266);
}

double NNfunction-ss_uLcR::synapse0x27b4f20() {
   return (neuron0x27a1ee0()*0.0394838);
}

double NNfunction-ss_uLcR::synapse0x27b4f60() {
   return (neuron0x27a2220()*0.764517);
}

double NNfunction-ss_uLcR::synapse0x27b4a30() {
   return (neuron0x27a2560()*0.053527);
}

double NNfunction-ss_uLcR::synapse0x27b4a70() {
   return (neuron0x27a2ac0()*-0.0368444);
}

double NNfunction-ss_uLcR::synapse0x27b50b0() {
   return (neuron0x27a2ce0()*-0.761169);
}

double NNfunction-ss_uLcR::synapse0x27b50f0() {
   return (neuron0x27a3020()*-0.550653);
}

double NNfunction-ss_uLcR::synapse0x27b5130() {
   return (neuron0x27a3360()*-1.07001);
}

double NNfunction-ss_uLcR::synapse0x27b5170() {
   return (neuron0x27a36a0()*0.430033);
}

double NNfunction-ss_uLcR::synapse0x27b51b0() {
   return (neuron0x27a39e0()*0.550663);
}

double NNfunction-ss_uLcR::synapse0x27b51f0() {
   return (neuron0x27a3d20()*-0.434978);
}

double NNfunction-ss_uLcR::synapse0x27b5570() {
   return (neuron0x279f1f0()*0.545892);
}

double NNfunction-ss_uLcR::synapse0x27b55b0() {
   return (neuron0x279f4a0()*0.36123);
}

double NNfunction-ss_uLcR::synapse0x27b55f0() {
   return (neuron0x279f7e0()*0.958463);
}

double NNfunction-ss_uLcR::synapse0x27b5630() {
   return (neuron0x279fb20()*-0.396934);
}

double NNfunction-ss_uLcR::synapse0x27b5670() {
   return (neuron0x279fe60()*-0.0912604);
}

double NNfunction-ss_uLcR::synapse0x27b56b0() {
   return (neuron0x27a01a0()*0.853091);
}

double NNfunction-ss_uLcR::synapse0x27b56f0() {
   return (neuron0x27a04e0()*0.953882);
}

double NNfunction-ss_uLcR::synapse0x27b5730() {
   return (neuron0x27a0820()*1.47359);
}

double NNfunction-ss_uLcR::synapse0x27b5770() {
   return (neuron0x27a0b60()*0.715935);
}

double NNfunction-ss_uLcR::synapse0x27b57b0() {
   return (neuron0x27a0ea0()*-0.590096);
}

double NNfunction-ss_uLcR::synapse0x27b57f0() {
   return (neuron0x27a11e0()*0.817953);
}

double NNfunction-ss_uLcR::synapse0x27b5830() {
   return (neuron0x27a1520()*-0.410113);
}

double NNfunction-ss_uLcR::synapse0x27b5870() {
   return (neuron0x27a1860()*0.262227);
}

double NNfunction-ss_uLcR::synapse0x27b58b0() {
   return (neuron0x27a1ba0()*0.00570874);
}

double NNfunction-ss_uLcR::synapse0x27b58f0() {
   return (neuron0x27a1ee0()*0.0881977);
}

double NNfunction-ss_uLcR::synapse0x27b5930() {
   return (neuron0x27a2220()*-0.283381);
}

double NNfunction-ss_uLcR::synapse0x27b53c0() {
   return (neuron0x27a2560()*-0.623937);
}

double NNfunction-ss_uLcR::synapse0x27b5400() {
   return (neuron0x27a2ac0()*-0.124492);
}

double NNfunction-ss_uLcR::synapse0x27b5a80() {
   return (neuron0x27a2ce0()*0.802572);
}

double NNfunction-ss_uLcR::synapse0x27b5ac0() {
   return (neuron0x27a3020()*0.453346);
}

double NNfunction-ss_uLcR::synapse0x27b5b00() {
   return (neuron0x27a3360()*1.47641);
}

double NNfunction-ss_uLcR::synapse0x27b5b40() {
   return (neuron0x27a36a0()*-0.0817969);
}

double NNfunction-ss_uLcR::synapse0x27b5b80() {
   return (neuron0x27a39e0()*-0.938433);
}

double NNfunction-ss_uLcR::synapse0x27b5bc0() {
   return (neuron0x27a3d20()*0.420922);
}

double NNfunction-ss_uLcR::synapse0x27b5f40() {
   return (neuron0x279f1f0()*-0.0131183);
}

double NNfunction-ss_uLcR::synapse0x27b5f80() {
   return (neuron0x279f4a0()*0.0150095);
}

double NNfunction-ss_uLcR::synapse0x27b5fc0() {
   return (neuron0x279f7e0()*-0.00700649);
}

double NNfunction-ss_uLcR::synapse0x27b6000() {
   return (neuron0x279fb20()*0.250864);
}

double NNfunction-ss_uLcR::synapse0x27b6040() {
   return (neuron0x279fe60()*0.0420006);
}

double NNfunction-ss_uLcR::synapse0x27b6080() {
   return (neuron0x27a01a0()*0.01009);
}

double NNfunction-ss_uLcR::synapse0x27b60c0() {
   return (neuron0x27a04e0()*0.351907);
}

double NNfunction-ss_uLcR::synapse0x27b6100() {
   return (neuron0x27a0820()*-0.269438);
}

double NNfunction-ss_uLcR::synapse0x27b6140() {
   return (neuron0x27a0b60()*0.0195058);
}

double NNfunction-ss_uLcR::synapse0x27b6180() {
   return (neuron0x27a0ea0()*0.0562334);
}

double NNfunction-ss_uLcR::synapse0x27b61c0() {
   return (neuron0x27a11e0()*-0.0252631);
}

double NNfunction-ss_uLcR::synapse0x27b6200() {
   return (neuron0x27a1520()*-0.880926);
}

double NNfunction-ss_uLcR::synapse0x27b6240() {
   return (neuron0x27a1860()*-0.0965136);
}

double NNfunction-ss_uLcR::synapse0x27b6280() {
   return (neuron0x27a1ba0()*-0.0907657);
}

double NNfunction-ss_uLcR::synapse0x27b62c0() {
   return (neuron0x27a1ee0()*0.0166601);
}

double NNfunction-ss_uLcR::synapse0x27b6300() {
   return (neuron0x27a2220()*-1.10653);
}

double NNfunction-ss_uLcR::synapse0x27b5d90() {
   return (neuron0x27a2560()*-0.0460088);
}

double NNfunction-ss_uLcR::synapse0x27b5dd0() {
   return (neuron0x27a2ac0()*-0.0979292);
}

double NNfunction-ss_uLcR::synapse0x27b6450() {
   return (neuron0x27a2ce0()*-0.0741065);
}

double NNfunction-ss_uLcR::synapse0x27b6490() {
   return (neuron0x27a3020()*-0.14804);
}

double NNfunction-ss_uLcR::synapse0x27b64d0() {
   return (neuron0x27a3360()*-0.0661985);
}

double NNfunction-ss_uLcR::synapse0x27b6510() {
   return (neuron0x27a36a0()*0.0194859);
}

double NNfunction-ss_uLcR::synapse0x27b6550() {
   return (neuron0x27a39e0()*0.0383845);
}

double NNfunction-ss_uLcR::synapse0x27b6590() {
   return (neuron0x27a3d20()*-0.0598016);
}

double NNfunction-ss_uLcR::synapse0x27b6910() {
   return (neuron0x279f1f0()*0.0216132);
}

double NNfunction-ss_uLcR::synapse0x27b6950() {
   return (neuron0x279f4a0()*-0.0276387);
}

double NNfunction-ss_uLcR::synapse0x27b6990() {
   return (neuron0x279f7e0()*0.0338587);
}

double NNfunction-ss_uLcR::synapse0x27b69d0() {
   return (neuron0x279fb20()*-0.127331);
}

double NNfunction-ss_uLcR::synapse0x27b6a10() {
   return (neuron0x279fe60()*-0.110694);
}

double NNfunction-ss_uLcR::synapse0x27b6a50() {
   return (neuron0x27a01a0()*-0.0237905);
}

double NNfunction-ss_uLcR::synapse0x27b6a90() {
   return (neuron0x27a04e0()*0.0224526);
}

double NNfunction-ss_uLcR::synapse0x27b6ad0() {
   return (neuron0x27a0820()*-0.0409229);
}

double NNfunction-ss_uLcR::synapse0x27b6b10() {
   return (neuron0x27a0b60()*-0.0691718);
}

double NNfunction-ss_uLcR::synapse0x27b6b50() {
   return (neuron0x27a0ea0()*-0.00659342);
}

double NNfunction-ss_uLcR::synapse0x27b6b90() {
   return (neuron0x27a11e0()*-0.0898362);
}

double NNfunction-ss_uLcR::synapse0x27b6bd0() {
   return (neuron0x27a1520()*1.80315);
}

double NNfunction-ss_uLcR::synapse0x27b6c10() {
   return (neuron0x27a1860()*-0.0322219);
}

double NNfunction-ss_uLcR::synapse0x27b6c50() {
   return (neuron0x27a1ba0()*0.0219492);
}

double NNfunction-ss_uLcR::synapse0x27b6c90() {
   return (neuron0x27a1ee0()*-0.0866587);
}

double NNfunction-ss_uLcR::synapse0x27b6cd0() {
   return (neuron0x27a2220()*-0.335001);
}

double NNfunction-ss_uLcR::synapse0x27b6760() {
   return (neuron0x27a2560()*-0.0322302);
}

double NNfunction-ss_uLcR::synapse0x27b67a0() {
   return (neuron0x27a2ac0()*-0.00151786);
}

double NNfunction-ss_uLcR::synapse0x27b6e20() {
   return (neuron0x27a2ce0()*-0.0252614);
}

double NNfunction-ss_uLcR::synapse0x27b6e60() {
   return (neuron0x27a3020()*-0.0487609);
}

double NNfunction-ss_uLcR::synapse0x27b6ea0() {
   return (neuron0x27a3360()*-0.0306145);
}

double NNfunction-ss_uLcR::synapse0x27b6ee0() {
   return (neuron0x27a36a0()*0.031198);
}

double NNfunction-ss_uLcR::synapse0x27b6f20() {
   return (neuron0x27a39e0()*-0.0135837);
}

double NNfunction-ss_uLcR::synapse0x27b6f60() {
   return (neuron0x27a3d20()*0.0257648);
}

double NNfunction-ss_uLcR::synapse0x27b72e0() {
   return (neuron0x279f1f0()*0.0568476);
}

double NNfunction-ss_uLcR::synapse0x27b7320() {
   return (neuron0x279f4a0()*0.128699);
}

double NNfunction-ss_uLcR::synapse0x27b7360() {
   return (neuron0x279f7e0()*-0.0808646);
}

double NNfunction-ss_uLcR::synapse0x27b73a0() {
   return (neuron0x279fb20()*0.00276776);
}

double NNfunction-ss_uLcR::synapse0x27b73e0() {
   return (neuron0x279fe60()*0.000232301);
}

double NNfunction-ss_uLcR::synapse0x27b7420() {
   return (neuron0x27a01a0()*0.200016);
}

double NNfunction-ss_uLcR::synapse0x27b7460() {
   return (neuron0x27a04e0()*0.0269233);
}

double NNfunction-ss_uLcR::synapse0x27b74a0() {
   return (neuron0x27a0820()*-0.150378);
}

double NNfunction-ss_uLcR::synapse0x27b74e0() {
   return (neuron0x27a0b60()*0.106925);
}

double NNfunction-ss_uLcR::synapse0x27b7520() {
   return (neuron0x27a0ea0()*-0.0250709);
}

double NNfunction-ss_uLcR::synapse0x27b7560() {
   return (neuron0x27a11e0()*-0.0333644);
}

double NNfunction-ss_uLcR::synapse0x27b75a0() {
   return (neuron0x27a1520()*1.46777);
}

double NNfunction-ss_uLcR::synapse0x27b75e0() {
   return (neuron0x27a1860()*0.104373);
}

double NNfunction-ss_uLcR::synapse0x27b7620() {
   return (neuron0x27a1ba0()*0.00847295);
}

double NNfunction-ss_uLcR::synapse0x27b7660() {
   return (neuron0x27a1ee0()*0.14961);
}

double NNfunction-ss_uLcR::synapse0x27b76a0() {
   return (neuron0x27a2220()*1.03379);
}

double NNfunction-ss_uLcR::synapse0x27b7130() {
   return (neuron0x27a2560()*0.0827806);
}

double NNfunction-ss_uLcR::synapse0x27b7170() {
   return (neuron0x27a2ac0()*0.1923);
}

double NNfunction-ss_uLcR::synapse0x27b77f0() {
   return (neuron0x27a2ce0()*0.00979393);
}

double NNfunction-ss_uLcR::synapse0x27b7830() {
   return (neuron0x27a3020()*-0.0104705);
}

double NNfunction-ss_uLcR::synapse0x27b7870() {
   return (neuron0x27a3360()*-0.0521773);
}

double NNfunction-ss_uLcR::synapse0x27b78b0() {
   return (neuron0x27a36a0()*-0.0962645);
}

double NNfunction-ss_uLcR::synapse0x27b78f0() {
   return (neuron0x27a39e0()*-0.0469311);
}

double NNfunction-ss_uLcR::synapse0x27b7930() {
   return (neuron0x27a3d20()*-0.016447);
}

double NNfunction-ss_uLcR::synapse0x27b7cb0() {
   return (neuron0x279f1f0()*0.0506844);
}

double NNfunction-ss_uLcR::synapse0x27b7cf0() {
   return (neuron0x279f4a0()*0.0638453);
}

double NNfunction-ss_uLcR::synapse0x27b7d30() {
   return (neuron0x279f7e0()*0.0623249);
}

double NNfunction-ss_uLcR::synapse0x27b7d70() {
   return (neuron0x279fb20()*2.74111);
}

double NNfunction-ss_uLcR::synapse0x27b7db0() {
   return (neuron0x279fe60()*0.043804);
}

double NNfunction-ss_uLcR::synapse0x27b7df0() {
   return (neuron0x27a01a0()*0.0263008);
}

double NNfunction-ss_uLcR::synapse0x27b7e30() {
   return (neuron0x27a04e0()*0.0331538);
}

double NNfunction-ss_uLcR::synapse0x27b7e70() {
   return (neuron0x27a0820()*-0.00579822);
}

double NNfunction-ss_uLcR::synapse0x27b7eb0() {
   return (neuron0x27a0b60()*0.0577537);
}

double NNfunction-ss_uLcR::synapse0x27b7ef0() {
   return (neuron0x27a0ea0()*0.0344641);
}

double NNfunction-ss_uLcR::synapse0x27b7f30() {
   return (neuron0x27a11e0()*0.0161759);
}

double NNfunction-ss_uLcR::synapse0x27b7f70() {
   return (neuron0x27a1520()*-0.381079);
}

double NNfunction-ss_uLcR::synapse0x27b7fb0() {
   return (neuron0x27a1860()*0.0531342);
}

double NNfunction-ss_uLcR::synapse0x27b7ff0() {
   return (neuron0x27a1ba0()*-0.021118);
}

double NNfunction-ss_uLcR::synapse0x27b8030() {
   return (neuron0x27a1ee0()*0.0284711);
}

double NNfunction-ss_uLcR::synapse0x27b8070() {
   return (neuron0x27a2220()*-0.525715);
}

double NNfunction-ss_uLcR::synapse0x27b7b00() {
   return (neuron0x27a2560()*-0.00299928);
}

double NNfunction-ss_uLcR::synapse0x27b7b40() {
   return (neuron0x27a2ac0()*0.0195971);
}

double NNfunction-ss_uLcR::synapse0x27b81c0() {
   return (neuron0x27a2ce0()*-0.0170417);
}

double NNfunction-ss_uLcR::synapse0x27b8200() {
   return (neuron0x27a3020()*-0.0066332);
}

double NNfunction-ss_uLcR::synapse0x27b8240() {
   return (neuron0x27a3360()*-0.021352);
}

double NNfunction-ss_uLcR::synapse0x27b8280() {
   return (neuron0x27a36a0()*-0.0312926);
}

double NNfunction-ss_uLcR::synapse0x27b82c0() {
   return (neuron0x27a39e0()*0.00472818);
}

double NNfunction-ss_uLcR::synapse0x27b8300() {
   return (neuron0x27a3d20()*0.013634);
}

double NNfunction-ss_uLcR::synapse0x27b8680() {
   return (neuron0x279f1f0()*-0.00912694);
}

double NNfunction-ss_uLcR::synapse0x27b86c0() {
   return (neuron0x279f4a0()*0.000205673);
}

double NNfunction-ss_uLcR::synapse0x27b8700() {
   return (neuron0x279f7e0()*0.0206474);
}

double NNfunction-ss_uLcR::synapse0x27b8740() {
   return (neuron0x279fb20()*-9.8232);
}

double NNfunction-ss_uLcR::synapse0x27b8780() {
   return (neuron0x279fe60()*0.000201808);
}

double NNfunction-ss_uLcR::synapse0x27b87c0() {
   return (neuron0x27a01a0()*0.0207919);
}

double NNfunction-ss_uLcR::synapse0x27b8800() {
   return (neuron0x27a04e0()*-0.0481666);
}

double NNfunction-ss_uLcR::synapse0x27b8840() {
   return (neuron0x27a0820()*0.0238238);
}

double NNfunction-ss_uLcR::synapse0x27b8880() {
   return (neuron0x27a0b60()*0.0202396);
}

double NNfunction-ss_uLcR::synapse0x27b88c0() {
   return (neuron0x27a0ea0()*-0.0199173);
}

double NNfunction-ss_uLcR::synapse0x27b8900() {
   return (neuron0x27a11e0()*-0.011961);
}

double NNfunction-ss_uLcR::synapse0x27b8940() {
   return (neuron0x27a1520()*-0.0047719);
}

double NNfunction-ss_uLcR::synapse0x27b8980() {
   return (neuron0x27a1860()*-0.0170577);
}

double NNfunction-ss_uLcR::synapse0x27b89c0() {
   return (neuron0x27a1ba0()*-0.0181214);
}

double NNfunction-ss_uLcR::synapse0x27b8a00() {
   return (neuron0x27a1ee0()*-0.0386238);
}

double NNfunction-ss_uLcR::synapse0x27b8a40() {
   return (neuron0x27a2220()*-0.0248463);
}

double NNfunction-ss_uLcR::synapse0x27b84d0() {
   return (neuron0x27a2560()*0.0282464);
}

double NNfunction-ss_uLcR::synapse0x27b8510() {
   return (neuron0x27a2ac0()*0.0037208);
}

double NNfunction-ss_uLcR::synapse0x27b8b90() {
   return (neuron0x27a2ce0()*-0.0458257);
}

double NNfunction-ss_uLcR::synapse0x27b8bd0() {
   return (neuron0x27a3020()*0.0316976);
}

double NNfunction-ss_uLcR::synapse0x27b8c10() {
   return (neuron0x27a3360()*-0.00637001);
}

double NNfunction-ss_uLcR::synapse0x27b8c50() {
   return (neuron0x27a36a0()*0.0115669);
}

double NNfunction-ss_uLcR::synapse0x27b8c90() {
   return (neuron0x27a39e0()*-0.00325915);
}

double NNfunction-ss_uLcR::synapse0x27b8cd0() {
   return (neuron0x27a3d20()*-0.0182479);
}

double NNfunction-ss_uLcR::synapse0x27b9050() {
   return (neuron0x279f1f0()*0.266549);
}

double NNfunction-ss_uLcR::synapse0x27b9090() {
   return (neuron0x279f4a0()*-0.46495);
}

double NNfunction-ss_uLcR::synapse0x27b90d0() {
   return (neuron0x279f7e0()*0.0759073);
}

double NNfunction-ss_uLcR::synapse0x27b9110() {
   return (neuron0x279fb20()*-0.130115);
}

double NNfunction-ss_uLcR::synapse0x27b9150() {
   return (neuron0x279fe60()*-0.62972);
}

double NNfunction-ss_uLcR::synapse0x27b9190() {
   return (neuron0x27a01a0()*-0.0638678);
}

double NNfunction-ss_uLcR::synapse0x27b91d0() {
   return (neuron0x27a04e0()*-0.712169);
}

double NNfunction-ss_uLcR::synapse0x27b9210() {
   return (neuron0x27a0820()*-0.986446);
}

double NNfunction-ss_uLcR::synapse0x27b9250() {
   return (neuron0x27a0b60()*0.100155);
}

double NNfunction-ss_uLcR::synapse0x27b9290() {
   return (neuron0x27a0ea0()*0.966225);
}

double NNfunction-ss_uLcR::synapse0x27b92d0() {
   return (neuron0x27a11e0()*-0.495642);
}

double NNfunction-ss_uLcR::synapse0x27b9310() {
   return (neuron0x27a1520()*1.45243);
}

double NNfunction-ss_uLcR::synapse0x27b9350() {
   return (neuron0x27a1860()*0.341588);
}

double NNfunction-ss_uLcR::synapse0x27b9390() {
   return (neuron0x27a1ba0()*0.543451);
}

double NNfunction-ss_uLcR::synapse0x27b93d0() {
   return (neuron0x27a1ee0()*0.0573087);
}

double NNfunction-ss_uLcR::synapse0x27b9410() {
   return (neuron0x27a2220()*0.269346);
}

double NNfunction-ss_uLcR::synapse0x27b8ea0() {
   return (neuron0x27a2560()*-0.60287);
}

double NNfunction-ss_uLcR::synapse0x27b8ee0() {
   return (neuron0x27a2ac0()*-0.423732);
}

double NNfunction-ss_uLcR::synapse0x27b9560() {
   return (neuron0x27a2ce0()*0.103917);
}

double NNfunction-ss_uLcR::synapse0x27b95a0() {
   return (neuron0x27a3020()*-0.147596);
}

double NNfunction-ss_uLcR::synapse0x27b95e0() {
   return (neuron0x27a3360()*0.0997432);
}

double NNfunction-ss_uLcR::synapse0x27b9620() {
   return (neuron0x27a36a0()*-0.852173);
}

double NNfunction-ss_uLcR::synapse0x27b9660() {
   return (neuron0x27a39e0()*-0.0477301);
}

double NNfunction-ss_uLcR::synapse0x27b96a0() {
   return (neuron0x27a3d20()*0.00735957);
}

double NNfunction-ss_uLcR::synapse0x27b9a20() {
   return (neuron0x279f1f0()*-0.0306776);
}

double NNfunction-ss_uLcR::synapse0x27adff0() {
   return (neuron0x279f4a0()*-0.0280793);
}

double NNfunction-ss_uLcR::synapse0x27ae030() {
   return (neuron0x279f7e0()*-0.0339719);
}

double NNfunction-ss_uLcR::synapse0x27ae070() {
   return (neuron0x279fb20()*-6.20216);
}

double NNfunction-ss_uLcR::synapse0x27ae2c0() {
   return (neuron0x279fe60()*-0.0180761);
}

double NNfunction-ss_uLcR::synapse0x27ae300() {
   return (neuron0x27a01a0()*-0.0124267);
}

double NNfunction-ss_uLcR::synapse0x27ae340() {
   return (neuron0x27a04e0()*-0.0200572);
}

double NNfunction-ss_uLcR::synapse0x27ae590() {
   return (neuron0x27a0820()*-0.0169893);
}

double NNfunction-ss_uLcR::synapse0x27ae5d0() {
   return (neuron0x27a0b60()*0.00314906);
}

double NNfunction-ss_uLcR::synapse0x27ae820() {
   return (neuron0x27a0ea0()*-0.0511524);
}

double NNfunction-ss_uLcR::synapse0x27ae860() {
   return (neuron0x27a11e0()*0.000785123);
}

double NNfunction-ss_uLcR::synapse0x27ae8a0() {
   return (neuron0x27a1520()*0.872427);
}

double NNfunction-ss_uLcR::synapse0x27aeaf0() {
   return (neuron0x27a1860()*-0.0404649);
}

double NNfunction-ss_uLcR::synapse0x27aeb30() {
   return (neuron0x27a1ba0()*0.0245797);
}

double NNfunction-ss_uLcR::synapse0x27aed80() {
   return (neuron0x27a1ee0()*-0.0313606);
}

double NNfunction-ss_uLcR::synapse0x27aedc0() {
   return (neuron0x27a2220()*1.1812);
}

double NNfunction-ss_uLcR::synapse0x27b9870() {
   return (neuron0x27a2560()*0.0123722);
}

double NNfunction-ss_uLcR::synapse0x27b98b0() {
   return (neuron0x27a2ac0()*-0.0180148);
}

double NNfunction-ss_uLcR::synapse0x27aef10() {
   return (neuron0x27a2ce0()*-0.0547785);
}

double NNfunction-ss_uLcR::synapse0x27af420() {
   return (neuron0x27a3020()*0.0317086);
}

double NNfunction-ss_uLcR::synapse0x27af460() {
   return (neuron0x27a3360()*0.00252705);
}

double NNfunction-ss_uLcR::synapse0x27af4a0() {
   return (neuron0x27a36a0()*-0.0159871);
}

double NNfunction-ss_uLcR::synapse0x27af6f0() {
   return (neuron0x27a39e0()*-0.0206323);
}

double NNfunction-ss_uLcR::synapse0x27af730() {
   return (neuron0x27a3d20()*-0.00627627);
}

double NNfunction-ss_uLcR::synapse0x27aefe0() {
   return (neuron0x279f1f0()*-0.000330157);
}

double NNfunction-ss_uLcR::synapse0x27af020() {
   return (neuron0x279f4a0()*-0.150454);
}

double NNfunction-ss_uLcR::synapse0x27af060() {
   return (neuron0x279f7e0()*0.816944);
}

double NNfunction-ss_uLcR::synapse0x27af0a0() {
   return (neuron0x279fb20()*0.317648);
}

double NNfunction-ss_uLcR::synapse0x27afa20() {
   return (neuron0x279fe60()*0.0442621);
}

double NNfunction-ss_uLcR::synapse0x27bbd70() {
   return (neuron0x27a01a0()*-0.000661363);
}

double NNfunction-ss_uLcR::synapse0x27bbdb0() {
   return (neuron0x27a04e0()*0.0254215);
}

double NNfunction-ss_uLcR::synapse0x27bbdf0() {
   return (neuron0x27a0820()*0.0360564);
}

double NNfunction-ss_uLcR::synapse0x27bbe30() {
   return (neuron0x27a0b60()*-0.0142253);
}

double NNfunction-ss_uLcR::synapse0x27bbe70() {
   return (neuron0x27a0ea0()*0.0568338);
}

double NNfunction-ss_uLcR::synapse0x27bbeb0() {
   return (neuron0x27a11e0()*-0.0900433);
}

double NNfunction-ss_uLcR::synapse0x27bbef0() {
   return (neuron0x27a1520()*0.306803);
}

double NNfunction-ss_uLcR::synapse0x27bbf30() {
   return (neuron0x27a1860()*-0.026361);
}

double NNfunction-ss_uLcR::synapse0x27bbf70() {
   return (neuron0x27a1ba0()*0.0571691);
}

double NNfunction-ss_uLcR::synapse0x27bbfb0() {
   return (neuron0x27a1ee0()*-0.0175773);
}

double NNfunction-ss_uLcR::synapse0x27bbff0() {
   return (neuron0x27a2220()*-0.00237564);
}

double NNfunction-ss_uLcR::synapse0x27af900() {
   return (neuron0x27a2560()*0.01534);
}

double NNfunction-ss_uLcR::synapse0x27af940() {
   return (neuron0x27a2ac0()*0.0155025);
}

double NNfunction-ss_uLcR::synapse0x27bc140() {
   return (neuron0x27a2ce0()*-0.0109469);
}

double NNfunction-ss_uLcR::synapse0x27bc180() {
   return (neuron0x27a3020()*-0.0835158);
}

double NNfunction-ss_uLcR::synapse0x27bc1c0() {
   return (neuron0x27a3360()*-0.0486101);
}

double NNfunction-ss_uLcR::synapse0x27bc200() {
   return (neuron0x27a36a0()*-0.0094922);
}

double NNfunction-ss_uLcR::synapse0x27bc240() {
   return (neuron0x27a39e0()*0.0318292);
}

double NNfunction-ss_uLcR::synapse0x27bc280() {
   return (neuron0x27a3d20()*0.0124953);
}

double NNfunction-ss_uLcR::synapse0x27bc600() {
   return (neuron0x279f1f0()*-0.485822);
}

double NNfunction-ss_uLcR::synapse0x27bc640() {
   return (neuron0x279f4a0()*0.304476);
}

double NNfunction-ss_uLcR::synapse0x27bc680() {
   return (neuron0x279f7e0()*0.226618);
}

double NNfunction-ss_uLcR::synapse0x27bc6c0() {
   return (neuron0x279fb20()*0.392553);
}

double NNfunction-ss_uLcR::synapse0x27bc700() {
   return (neuron0x279fe60()*-0.13013);
}

double NNfunction-ss_uLcR::synapse0x27bc740() {
   return (neuron0x27a01a0()*-0.155486);
}

double NNfunction-ss_uLcR::synapse0x27bc780() {
   return (neuron0x27a04e0()*0.0370734);
}

double NNfunction-ss_uLcR::synapse0x27bc7c0() {
   return (neuron0x27a0820()*0.128235);
}

double NNfunction-ss_uLcR::synapse0x27bc800() {
   return (neuron0x27a0b60()*0.0530741);
}

double NNfunction-ss_uLcR::synapse0x27bc840() {
   return (neuron0x27a0ea0()*0.15891);
}

double NNfunction-ss_uLcR::synapse0x27bc880() {
   return (neuron0x27a11e0()*0.0547985);
}

double NNfunction-ss_uLcR::synapse0x27bc8c0() {
   return (neuron0x27a1520()*0.647309);
}

double NNfunction-ss_uLcR::synapse0x27bc900() {
   return (neuron0x27a1860()*0.0982503);
}

double NNfunction-ss_uLcR::synapse0x27bc940() {
   return (neuron0x27a1ba0()*0.221471);
}

double NNfunction-ss_uLcR::synapse0x27bc980() {
   return (neuron0x27a1ee0()*0.0115608);
}

double NNfunction-ss_uLcR::synapse0x27bc9c0() {
   return (neuron0x27a2220()*-0.478211);
}

double NNfunction-ss_uLcR::synapse0x27bc450() {
   return (neuron0x27a2560()*-0.461752);
}

double NNfunction-ss_uLcR::synapse0x27bc490() {
   return (neuron0x27a2ac0()*0.304016);
}

double NNfunction-ss_uLcR::synapse0x27bcb10() {
   return (neuron0x27a2ce0()*-0.0363006);
}

double NNfunction-ss_uLcR::synapse0x27bcb50() {
   return (neuron0x27a3020()*0.231566);
}

double NNfunction-ss_uLcR::synapse0x27bcb90() {
   return (neuron0x27a3360()*-0.128531);
}

double NNfunction-ss_uLcR::synapse0x27bcbd0() {
   return (neuron0x27a36a0()*0.223707);
}

double NNfunction-ss_uLcR::synapse0x27bcc10() {
   return (neuron0x27a39e0()*-0.277485);
}

double NNfunction-ss_uLcR::synapse0x27bcc50() {
   return (neuron0x27a3d20()*0.216516);
}

double NNfunction-ss_uLcR::synapse0x27bcfd0() {
   return (neuron0x279f1f0()*-0.0316486);
}

double NNfunction-ss_uLcR::synapse0x27bd010() {
   return (neuron0x279f4a0()*0.0259328);
}

double NNfunction-ss_uLcR::synapse0x27bd050() {
   return (neuron0x279f7e0()*-0.0397973);
}

double NNfunction-ss_uLcR::synapse0x27bd090() {
   return (neuron0x279fb20()*0.12013);
}

double NNfunction-ss_uLcR::synapse0x27bd0d0() {
   return (neuron0x279fe60()*-0.0329801);
}

double NNfunction-ss_uLcR::synapse0x27bd110() {
   return (neuron0x27a01a0()*0.0015466);
}

double NNfunction-ss_uLcR::synapse0x27bd150() {
   return (neuron0x27a04e0()*-0.0687999);
}

double NNfunction-ss_uLcR::synapse0x27bd190() {
   return (neuron0x27a0820()*-0.028578);
}

double NNfunction-ss_uLcR::synapse0x27bd1d0() {
   return (neuron0x27a0b60()*-0.013666);
}

double NNfunction-ss_uLcR::synapse0x27bd210() {
   return (neuron0x27a0ea0()*-0.0578376);
}

double NNfunction-ss_uLcR::synapse0x27bd250() {
   return (neuron0x27a11e0()*-0.0480315);
}

double NNfunction-ss_uLcR::synapse0x27bd290() {
   return (neuron0x27a1520()*0.873051);
}

double NNfunction-ss_uLcR::synapse0x27bd2d0() {
   return (neuron0x27a1860()*-0.0192738);
}

double NNfunction-ss_uLcR::synapse0x27bd310() {
   return (neuron0x27a1ba0()*-0.0372068);
}

double NNfunction-ss_uLcR::synapse0x27bd350() {
   return (neuron0x27a1ee0()*-0.0220789);
}

double NNfunction-ss_uLcR::synapse0x27bd390() {
   return (neuron0x27a2220()*0.197185);
}

double NNfunction-ss_uLcR::synapse0x27bce20() {
   return (neuron0x27a2560()*-0.0195389);
}

double NNfunction-ss_uLcR::synapse0x27bce60() {
   return (neuron0x27a2ac0()*0.0286008);
}

double NNfunction-ss_uLcR::synapse0x27bd4e0() {
   return (neuron0x27a2ce0()*-0.0400927);
}

double NNfunction-ss_uLcR::synapse0x27bd520() {
   return (neuron0x27a3020()*-0.0291902);
}

double NNfunction-ss_uLcR::synapse0x27bd560() {
   return (neuron0x27a3360()*0.0349876);
}

double NNfunction-ss_uLcR::synapse0x27bd5a0() {
   return (neuron0x27a36a0()*-0.00849793);
}

double NNfunction-ss_uLcR::synapse0x27bd5e0() {
   return (neuron0x27a39e0()*0.0103175);
}

double NNfunction-ss_uLcR::synapse0x27bd620() {
   return (neuron0x27a3d20()*0.0467268);
}

double NNfunction-ss_uLcR::synapse0x27bd9a0() {
   return (neuron0x279f1f0()*-0.346675);
}

double NNfunction-ss_uLcR::synapse0x27bd9e0() {
   return (neuron0x279f4a0()*0.204248);
}

double NNfunction-ss_uLcR::synapse0x27bda20() {
   return (neuron0x279f7e0()*0.577982);
}

double NNfunction-ss_uLcR::synapse0x27bda60() {
   return (neuron0x279fb20()*1.69132);
}

double NNfunction-ss_uLcR::synapse0x27bdaa0() {
   return (neuron0x279fe60()*0.218332);
}

double NNfunction-ss_uLcR::synapse0x27bdae0() {
   return (neuron0x27a01a0()*0.0212916);
}

double NNfunction-ss_uLcR::synapse0x27bdb20() {
   return (neuron0x27a04e0()*0.167337);
}

double NNfunction-ss_uLcR::synapse0x27bdb60() {
   return (neuron0x27a0820()*0.409193);
}

double NNfunction-ss_uLcR::synapse0x27bdba0() {
   return (neuron0x27a0b60()*0.0916712);
}

double NNfunction-ss_uLcR::synapse0x27bdbe0() {
   return (neuron0x27a0ea0()*0.0862417);
}

double NNfunction-ss_uLcR::synapse0x27bdc20() {
   return (neuron0x27a11e0()*0.276574);
}

double NNfunction-ss_uLcR::synapse0x27bdc60() {
   return (neuron0x27a1520()*0.370603);
}

double NNfunction-ss_uLcR::synapse0x27bdca0() {
   return (neuron0x27a1860()*0.43665);
}

double NNfunction-ss_uLcR::synapse0x27bdce0() {
   return (neuron0x27a1ba0()*0.409168);
}

double NNfunction-ss_uLcR::synapse0x27bdd20() {
   return (neuron0x27a1ee0()*-0.1495);
}

double NNfunction-ss_uLcR::synapse0x27bdd60() {
   return (neuron0x27a2220()*0.0213178);
}

double NNfunction-ss_uLcR::synapse0x27bd7f0() {
   return (neuron0x27a2560()*-0.225526);
}

double NNfunction-ss_uLcR::synapse0x27bd830() {
   return (neuron0x27a2ac0()*-0.116316);
}

double NNfunction-ss_uLcR::synapse0x27bdeb0() {
   return (neuron0x27a2ce0()*0.145235);
}

double NNfunction-ss_uLcR::synapse0x27bdef0() {
   return (neuron0x27a3020()*0.306386);
}

double NNfunction-ss_uLcR::synapse0x27bdf30() {
   return (neuron0x27a3360()*-0.0546778);
}

double NNfunction-ss_uLcR::synapse0x27bdf70() {
   return (neuron0x27a36a0()*-0.071615);
}

double NNfunction-ss_uLcR::synapse0x27bdfb0() {
   return (neuron0x27a39e0()*-0.16224);
}

double NNfunction-ss_uLcR::synapse0x27bdff0() {
   return (neuron0x27a3d20()*0.225689);
}

double NNfunction-ss_uLcR::synapse0x27be370() {
   return (neuron0x279f1f0()*0.0197577);
}

double NNfunction-ss_uLcR::synapse0x27be3b0() {
   return (neuron0x279f4a0()*-0.00187448);
}

double NNfunction-ss_uLcR::synapse0x27be3f0() {
   return (neuron0x279f7e0()*0.0115396);
}

double NNfunction-ss_uLcR::synapse0x27be430() {
   return (neuron0x279fb20()*-2.37752);
}

double NNfunction-ss_uLcR::synapse0x27be470() {
   return (neuron0x279fe60()*0.0559703);
}

double NNfunction-ss_uLcR::synapse0x27be4b0() {
   return (neuron0x27a01a0()*0.0645073);
}

double NNfunction-ss_uLcR::synapse0x27be4f0() {
   return (neuron0x27a04e0()*0.0127817);
}

double NNfunction-ss_uLcR::synapse0x27be530() {
   return (neuron0x27a0820()*0.0386785);
}

double NNfunction-ss_uLcR::synapse0x27be570() {
   return (neuron0x27a0b60()*-0.0151708);
}

double NNfunction-ss_uLcR::synapse0x27be5b0() {
   return (neuron0x27a0ea0()*-0.0365459);
}

double NNfunction-ss_uLcR::synapse0x27be5f0() {
   return (neuron0x27a11e0()*-0.0661495);
}

double NNfunction-ss_uLcR::synapse0x27be630() {
   return (neuron0x27a1520()*0.963919);
}

double NNfunction-ss_uLcR::synapse0x27be670() {
   return (neuron0x27a1860()*0.0185948);
}

double NNfunction-ss_uLcR::synapse0x27be6b0() {
   return (neuron0x27a1ba0()*-0.0249365);
}

double NNfunction-ss_uLcR::synapse0x27be6f0() {
   return (neuron0x27a1ee0()*-0.0413461);
}

double NNfunction-ss_uLcR::synapse0x27be730() {
   return (neuron0x27a2220()*-0.267126);
}

double NNfunction-ss_uLcR::synapse0x27be1c0() {
   return (neuron0x27a2560()*-0.0291256);
}

double NNfunction-ss_uLcR::synapse0x27be200() {
   return (neuron0x27a2ac0()*-0.027811);
}

double NNfunction-ss_uLcR::synapse0x27be880() {
   return (neuron0x27a2ce0()*-0.0303536);
}

double NNfunction-ss_uLcR::synapse0x27be8c0() {
   return (neuron0x27a3020()*-0.0213239);
}

double NNfunction-ss_uLcR::synapse0x27be900() {
   return (neuron0x27a3360()*0.0139474);
}

double NNfunction-ss_uLcR::synapse0x27be940() {
   return (neuron0x27a36a0()*0.0120596);
}

double NNfunction-ss_uLcR::synapse0x27be980() {
   return (neuron0x27a39e0()*0.0395742);
}

double NNfunction-ss_uLcR::synapse0x27be9c0() {
   return (neuron0x27a3d20()*0.01509);
}

double NNfunction-ss_uLcR::synapse0x27bed40() {
   return (neuron0x279f1f0()*-0.0131851);
}

double NNfunction-ss_uLcR::synapse0x27bed80() {
   return (neuron0x279f4a0()*-0.16359);
}

double NNfunction-ss_uLcR::synapse0x27bedc0() {
   return (neuron0x279f7e0()*0.137238);
}

double NNfunction-ss_uLcR::synapse0x27bee00() {
   return (neuron0x279fb20()*-0.475776);
}

double NNfunction-ss_uLcR::synapse0x27bee40() {
   return (neuron0x279fe60()*-0.0196312);
}

double NNfunction-ss_uLcR::synapse0x27bee80() {
   return (neuron0x27a01a0()*0.0235624);
}

double NNfunction-ss_uLcR::synapse0x27beec0() {
   return (neuron0x27a04e0()*-0.0177752);
}

double NNfunction-ss_uLcR::synapse0x27bef00() {
   return (neuron0x27a0820()*0.0267472);
}

double NNfunction-ss_uLcR::synapse0x27bef40() {
   return (neuron0x27a0b60()*0.00555447);
}

double NNfunction-ss_uLcR::synapse0x27bef80() {
   return (neuron0x27a0ea0()*0.0429897);
}

double NNfunction-ss_uLcR::synapse0x27befc0() {
   return (neuron0x27a11e0()*0.0593814);
}

double NNfunction-ss_uLcR::synapse0x27bf000() {
   return (neuron0x27a1520()*0.0564562);
}

double NNfunction-ss_uLcR::synapse0x27bf040() {
   return (neuron0x27a1860()*0.0352922);
}

double NNfunction-ss_uLcR::synapse0x27bf080() {
   return (neuron0x27a1ba0()*-0.0401013);
}

double NNfunction-ss_uLcR::synapse0x27bf0c0() {
   return (neuron0x27a1ee0()*0.0401606);
}

double NNfunction-ss_uLcR::synapse0x27bf100() {
   return (neuron0x27a2220()*-0.0726129);
}

double NNfunction-ss_uLcR::synapse0x27beb90() {
   return (neuron0x27a2560()*-0.0306923);
}

double NNfunction-ss_uLcR::synapse0x27bebd0() {
   return (neuron0x27a2ac0()*0.0563687);
}

double NNfunction-ss_uLcR::synapse0x27bf250() {
   return (neuron0x27a2ce0()*-0.0267114);
}

double NNfunction-ss_uLcR::synapse0x27bf290() {
   return (neuron0x27a3020()*0.0631753);
}

double NNfunction-ss_uLcR::synapse0x27bf2d0() {
   return (neuron0x27a3360()*-0.0206875);
}

double NNfunction-ss_uLcR::synapse0x27bf310() {
   return (neuron0x27a36a0()*0.0725556);
}

double NNfunction-ss_uLcR::synapse0x27bf350() {
   return (neuron0x27a39e0()*-0.0406647);
}

double NNfunction-ss_uLcR::synapse0x27bf390() {
   return (neuron0x27a3d20()*0.0182127);
}

double NNfunction-ss_uLcR::synapse0x27bf710() {
   return (neuron0x279f1f0()*0.0715509);
}

double NNfunction-ss_uLcR::synapse0x27bf750() {
   return (neuron0x279f4a0()*-0.135217);
}

double NNfunction-ss_uLcR::synapse0x27bf790() {
   return (neuron0x279f7e0()*-0.270272);
}

double NNfunction-ss_uLcR::synapse0x27bf7d0() {
   return (neuron0x279fb20()*0.241296);
}

double NNfunction-ss_uLcR::synapse0x27bf810() {
   return (neuron0x279fe60()*-0.014017);
}

double NNfunction-ss_uLcR::synapse0x27bf850() {
   return (neuron0x27a01a0()*0.0470756);
}

double NNfunction-ss_uLcR::synapse0x27bf890() {
   return (neuron0x27a04e0()*0.0251115);
}

double NNfunction-ss_uLcR::synapse0x27bf8d0() {
   return (neuron0x27a0820()*-0.00658198);
}

double NNfunction-ss_uLcR::synapse0x27bf910() {
   return (neuron0x27a0b60()*-0.0327958);
}

double NNfunction-ss_uLcR::synapse0x27bf950() {
   return (neuron0x27a0ea0()*0.10286);
}

double NNfunction-ss_uLcR::synapse0x27bf990() {
   return (neuron0x27a11e0()*-0.0172795);
}

double NNfunction-ss_uLcR::synapse0x27bf9d0() {
   return (neuron0x27a1520()*0.161344);
}

double NNfunction-ss_uLcR::synapse0x27bfa10() {
   return (neuron0x27a1860()*0.346661);
}

double NNfunction-ss_uLcR::synapse0x27bfa50() {
   return (neuron0x27a1ba0()*-0.0729068);
}

double NNfunction-ss_uLcR::synapse0x27bfa90() {
   return (neuron0x27a1ee0()*0.111048);
}

double NNfunction-ss_uLcR::synapse0x27bfad0() {
   return (neuron0x27a2220()*0.0499894);
}

double NNfunction-ss_uLcR::synapse0x27bf560() {
   return (neuron0x27a2560()*-0.131414);
}

double NNfunction-ss_uLcR::synapse0x27bf5a0() {
   return (neuron0x27a2ac0()*0.223242);
}

double NNfunction-ss_uLcR::synapse0x27bfc20() {
   return (neuron0x27a2ce0()*0.13698);
}

double NNfunction-ss_uLcR::synapse0x27bfc60() {
   return (neuron0x27a3020()*-0.103113);
}

double NNfunction-ss_uLcR::synapse0x27bfca0() {
   return (neuron0x27a3360()*-0.0710565);
}

double NNfunction-ss_uLcR::synapse0x27bfce0() {
   return (neuron0x27a36a0()*0.018444);
}

double NNfunction-ss_uLcR::synapse0x27bfd20() {
   return (neuron0x27a39e0()*0.0598845);
}

double NNfunction-ss_uLcR::synapse0x27bfd60() {
   return (neuron0x27a3d20()*-0.0129787);
}

double NNfunction-ss_uLcR::synapse0x27c00e0() {
   return (neuron0x279f1f0()*0.14513);
}

double NNfunction-ss_uLcR::synapse0x27c0120() {
   return (neuron0x279f4a0()*0.337735);
}

double NNfunction-ss_uLcR::synapse0x27c0160() {
   return (neuron0x279f7e0()*-1.62409);
}

double NNfunction-ss_uLcR::synapse0x27c01a0() {
   return (neuron0x279fb20()*-0.947593);
}

double NNfunction-ss_uLcR::synapse0x27c01e0() {
   return (neuron0x279fe60()*-0.146871);
}

double NNfunction-ss_uLcR::synapse0x27c0220() {
   return (neuron0x27a01a0()*1.8358);
}

double NNfunction-ss_uLcR::synapse0x27c0260() {
   return (neuron0x27a04e0()*-0.0222187);
}

double NNfunction-ss_uLcR::synapse0x27c02a0() {
   return (neuron0x27a0820()*0.344825);
}

double NNfunction-ss_uLcR::synapse0x27c02e0() {
   return (neuron0x27a0b60()*0.118071);
}

double NNfunction-ss_uLcR::synapse0x27c0320() {
   return (neuron0x27a0ea0()*0.180347);
}

double NNfunction-ss_uLcR::synapse0x27c0360() {
   return (neuron0x27a11e0()*0.136816);
}

double NNfunction-ss_uLcR::synapse0x27c03a0() {
   return (neuron0x27a1520()*-1.03096);
}

double NNfunction-ss_uLcR::synapse0x27c03e0() {
   return (neuron0x27a1860()*0.481201);
}

double NNfunction-ss_uLcR::synapse0x27c0420() {
   return (neuron0x27a1ba0()*-0.0750994);
}

double NNfunction-ss_uLcR::synapse0x27c0460() {
   return (neuron0x27a1ee0()*0.579391);
}

double NNfunction-ss_uLcR::synapse0x27c04a0() {
   return (neuron0x27a2220()*-0.0018173);
}

double NNfunction-ss_uLcR::synapse0x27bff30() {
   return (neuron0x27a2560()*-0.763965);
}

double NNfunction-ss_uLcR::synapse0x27bff70() {
   return (neuron0x27a2ac0()*-0.490482);
}

double NNfunction-ss_uLcR::synapse0x27c05f0() {
   return (neuron0x27a2ce0()*-0.110962);
}

double NNfunction-ss_uLcR::synapse0x27c0630() {
   return (neuron0x27a3020()*-0.222862);
}

double NNfunction-ss_uLcR::synapse0x27c0670() {
   return (neuron0x27a3360()*-0.509173);
}

double NNfunction-ss_uLcR::synapse0x27c06b0() {
   return (neuron0x27a36a0()*0.310935);
}

double NNfunction-ss_uLcR::synapse0x27c06f0() {
   return (neuron0x27a39e0()*-0.162285);
}

double NNfunction-ss_uLcR::synapse0x27c0730() {
   return (neuron0x27a3d20()*-0.0621956);
}

double NNfunction-ss_uLcR::synapse0x27a91e0() {
   return (neuron0x279f1f0()*0.139551);
}

double NNfunction-ss_uLcR::synapse0x27a9220() {
   return (neuron0x279f4a0()*0.37778);
}

double NNfunction-ss_uLcR::synapse0x27a9260() {
   return (neuron0x279f7e0()*0.265973);
}

double NNfunction-ss_uLcR::synapse0x27a92a0() {
   return (neuron0x279fb20()*-0.949785);
}

double NNfunction-ss_uLcR::synapse0x27a92e0() {
   return (neuron0x279fe60()*-0.0174763);
}

double NNfunction-ss_uLcR::synapse0x27a9320() {
   return (neuron0x27a01a0()*0.0526682);
}

double NNfunction-ss_uLcR::synapse0x27a9360() {
   return (neuron0x27a04e0()*0.0477073);
}

double NNfunction-ss_uLcR::synapse0x27a93a0() {
   return (neuron0x27a0820()*-0.0718376);
}

double NNfunction-ss_uLcR::synapse0x27c0ec0() {
   return (neuron0x27a0b60()*-0.00104394);
}

double NNfunction-ss_uLcR::synapse0x27c0f00() {
   return (neuron0x27a0ea0()*0.130318);
}

double NNfunction-ss_uLcR::synapse0x27c0f40() {
   return (neuron0x27a11e0()*-0.122592);
}

double NNfunction-ss_uLcR::synapse0x27c0f80() {
   return (neuron0x27a1520()*0.725974);
}

double NNfunction-ss_uLcR::synapse0x27c0fc0() {
   return (neuron0x27a1860()*-0.00104953);
}

double NNfunction-ss_uLcR::synapse0x27c1000() {
   return (neuron0x27a1ba0()*0.0475032);
}

double NNfunction-ss_uLcR::synapse0x27c1040() {
   return (neuron0x27a1ee0()*0.0114168);
}

double NNfunction-ss_uLcR::synapse0x27c1080() {
   return (neuron0x27a2220()*0.619365);
}

double NNfunction-ss_uLcR::synapse0x27c0900() {
   return (neuron0x27a2560()*0.00296934);
}

double NNfunction-ss_uLcR::synapse0x27c0940() {
   return (neuron0x27a2ac0()*0.131616);
}

double NNfunction-ss_uLcR::synapse0x27c11d0() {
   return (neuron0x27a2ce0()*0.0669913);
}

double NNfunction-ss_uLcR::synapse0x27c1210() {
   return (neuron0x27a3020()*-0.171203);
}

double NNfunction-ss_uLcR::synapse0x27c1250() {
   return (neuron0x27a3360()*-0.0180514);
}

double NNfunction-ss_uLcR::synapse0x27c1290() {
   return (neuron0x27a36a0()*-0.00920033);
}

double NNfunction-ss_uLcR::synapse0x27c12d0() {
   return (neuron0x27a39e0()*0.0279724);
}

double NNfunction-ss_uLcR::synapse0x27c1310() {
   return (neuron0x27a3d20()*-0.0004845);
}

double NNfunction-ss_uLcR::synapse0x27c1690() {
   return (neuron0x279f1f0()*0.0324827);
}

double NNfunction-ss_uLcR::synapse0x27c16d0() {
   return (neuron0x279f4a0()*0.161255);
}

double NNfunction-ss_uLcR::synapse0x27c1710() {
   return (neuron0x279f7e0()*-0.293666);
}

double NNfunction-ss_uLcR::synapse0x27c1750() {
   return (neuron0x279fb20()*0.349262);
}

double NNfunction-ss_uLcR::synapse0x27c1790() {
   return (neuron0x279fe60()*0.243852);
}

double NNfunction-ss_uLcR::synapse0x27c17d0() {
   return (neuron0x27a01a0()*-0.0416503);
}

double NNfunction-ss_uLcR::synapse0x27c1810() {
   return (neuron0x27a04e0()*-0.0509607);
}

double NNfunction-ss_uLcR::synapse0x27c1850() {
   return (neuron0x27a0820()*-0.0379097);
}

double NNfunction-ss_uLcR::synapse0x27c1890() {
   return (neuron0x27a0b60()*0.332645);
}

double NNfunction-ss_uLcR::synapse0x27c18d0() {
   return (neuron0x27a0ea0()*0.460179);
}

double NNfunction-ss_uLcR::synapse0x27c1910() {
   return (neuron0x27a11e0()*-0.237968);
}

double NNfunction-ss_uLcR::synapse0x27c1950() {
   return (neuron0x27a1520()*-0.146508);
}

double NNfunction-ss_uLcR::synapse0x27c1990() {
   return (neuron0x27a1860()*0.0137841);
}

double NNfunction-ss_uLcR::synapse0x27c19d0() {
   return (neuron0x27a1ba0()*0.24328);
}

double NNfunction-ss_uLcR::synapse0x27c1a10() {
   return (neuron0x27a1ee0()*-0.0206878);
}

double NNfunction-ss_uLcR::synapse0x27c1a50() {
   return (neuron0x27a2220()*-0.752022);
}

double NNfunction-ss_uLcR::synapse0x27c14e0() {
   return (neuron0x27a2560()*-0.491965);
}

double NNfunction-ss_uLcR::synapse0x27c1520() {
   return (neuron0x27a2ac0()*-0.257533);
}

double NNfunction-ss_uLcR::synapse0x27c1ba0() {
   return (neuron0x27a2ce0()*0.14786);
}

double NNfunction-ss_uLcR::synapse0x27c1be0() {
   return (neuron0x27a3020()*-0.511381);
}

double NNfunction-ss_uLcR::synapse0x27c1c20() {
   return (neuron0x27a3360()*-0.156499);
}

double NNfunction-ss_uLcR::synapse0x27c1c60() {
   return (neuron0x27a36a0()*0.175094);
}

double NNfunction-ss_uLcR::synapse0x27c1ca0() {
   return (neuron0x27a39e0()*-0.210129);
}

double NNfunction-ss_uLcR::synapse0x27c1ce0() {
   return (neuron0x27a3d20()*0.252099);
}

double NNfunction-ss_uLcR::synapse0x27c2060() {
   return (neuron0x279f1f0()*0.239023);
}

double NNfunction-ss_uLcR::synapse0x27c20a0() {
   return (neuron0x279f4a0()*0.0875655);
}

double NNfunction-ss_uLcR::synapse0x27c20e0() {
   return (neuron0x279f7e0()*1.38279);
}

double NNfunction-ss_uLcR::synapse0x27c2120() {
   return (neuron0x279fb20()*0.411885);
}

double NNfunction-ss_uLcR::synapse0x27c2160() {
   return (neuron0x279fe60()*-0.172974);
}

double NNfunction-ss_uLcR::synapse0x27c21a0() {
   return (neuron0x27a01a0()*-0.200968);
}

double NNfunction-ss_uLcR::synapse0x27c21e0() {
   return (neuron0x27a04e0()*-0.346031);
}

double NNfunction-ss_uLcR::synapse0x27c2220() {
   return (neuron0x27a0820()*-0.415971);
}

double NNfunction-ss_uLcR::synapse0x27c2260() {
   return (neuron0x27a0b60()*-0.470181);
}

double NNfunction-ss_uLcR::synapse0x27c22a0() {
   return (neuron0x27a0ea0()*0.151334);
}

double NNfunction-ss_uLcR::synapse0x27c22e0() {
   return (neuron0x27a11e0()*-0.150284);
}

double NNfunction-ss_uLcR::synapse0x27c2320() {
   return (neuron0x27a1520()*-1.13338);
}

double NNfunction-ss_uLcR::synapse0x27c2360() {
   return (neuron0x27a1860()*-0.135839);
}

double NNfunction-ss_uLcR::synapse0x27c23a0() {
   return (neuron0x27a1ba0()*-0.0422087);
}

double NNfunction-ss_uLcR::synapse0x27c23e0() {
   return (neuron0x27a1ee0()*0.971563);
}

double NNfunction-ss_uLcR::synapse0x27c2420() {
   return (neuron0x27a2220()*1.06924);
}

double NNfunction-ss_uLcR::synapse0x27c1eb0() {
   return (neuron0x27a2560()*0.620623);
}

double NNfunction-ss_uLcR::synapse0x27c1ef0() {
   return (neuron0x27a2ac0()*-0.246532);
}

double NNfunction-ss_uLcR::synapse0x27b2a20() {
   return (neuron0x27a2ce0()*0.627237);
}

double NNfunction-ss_uLcR::synapse0x27b2a60() {
   return (neuron0x27a3020()*0.532257);
}

double NNfunction-ss_uLcR::synapse0x27b2aa0() {
   return (neuron0x27a3360()*-0.303844);
}

double NNfunction-ss_uLcR::synapse0x27b2ae0() {
   return (neuron0x27a36a0()*-0.414557);
}

double NNfunction-ss_uLcR::synapse0x27b2b20() {
   return (neuron0x27a39e0()*0.15048);
}

double NNfunction-ss_uLcR::synapse0x27b2b60() {
   return (neuron0x27a3d20()*-0.156352);
}

double NNfunction-ss_uLcR::synapse0x27b2ee0() {
   return (neuron0x279f1f0()*0.043972);
}

double NNfunction-ss_uLcR::synapse0x27b2f20() {
   return (neuron0x279f4a0()*-0.0255392);
}

double NNfunction-ss_uLcR::synapse0x27b2f60() {
   return (neuron0x279f7e0()*0.00526191);
}

double NNfunction-ss_uLcR::synapse0x27b2fa0() {
   return (neuron0x279fb20()*-0.16238);
}

double NNfunction-ss_uLcR::synapse0x27b2fe0() {
   return (neuron0x279fe60()*0.0237449);
}

double NNfunction-ss_uLcR::synapse0x27b3020() {
   return (neuron0x27a01a0()*0.0605982);
}

double NNfunction-ss_uLcR::synapse0x27b3060() {
   return (neuron0x27a04e0()*-0.0469879);
}

double NNfunction-ss_uLcR::synapse0x27b30a0() {
   return (neuron0x27a0820()*-0.0649707);
}

double NNfunction-ss_uLcR::synapse0x27b30e0() {
   return (neuron0x27a0b60()*0.00602062);
}

double NNfunction-ss_uLcR::synapse0x27b3120() {
   return (neuron0x27a0ea0()*0.00794081);
}

double NNfunction-ss_uLcR::synapse0x27b3160() {
   return (neuron0x27a11e0()*-0.0154203);
}

double NNfunction-ss_uLcR::synapse0x27b31a0() {
   return (neuron0x27a1520()*0.0806109);
}

double NNfunction-ss_uLcR::synapse0x27b31e0() {
   return (neuron0x27a1860()*0.00514228);
}

double NNfunction-ss_uLcR::synapse0x27b3220() {
   return (neuron0x27a1ba0()*-0.0139531);
}

double NNfunction-ss_uLcR::synapse0x27b3260() {
   return (neuron0x27a1ee0()*0.0112262);
}

double NNfunction-ss_uLcR::synapse0x27b32a0() {
   return (neuron0x27a2220()*-0.669715);
}

double NNfunction-ss_uLcR::synapse0x27b2d30() {
   return (neuron0x27a2560()*0.00170949);
}

double NNfunction-ss_uLcR::synapse0x27b2d70() {
   return (neuron0x27a2ac0()*0.0236801);
}

double NNfunction-ss_uLcR::synapse0x27b33f0() {
   return (neuron0x27a2ce0()*0.0077654);
}

double NNfunction-ss_uLcR::synapse0x27b3430() {
   return (neuron0x27a3020()*-0.0163762);
}

double NNfunction-ss_uLcR::synapse0x27b3470() {
   return (neuron0x27a3360()*0.0166253);
}

double NNfunction-ss_uLcR::synapse0x27b34b0() {
   return (neuron0x27a36a0()*0.0304821);
}

double NNfunction-ss_uLcR::synapse0x27b34f0() {
   return (neuron0x27a39e0()*0.00616405);
}

double NNfunction-ss_uLcR::synapse0x27b3530() {
   return (neuron0x27a3d20()*0.00786464);
}

double NNfunction-ss_uLcR::synapse0x27b38b0() {
   return (neuron0x279f1f0()*0.0653773);
}

double NNfunction-ss_uLcR::synapse0x27b38f0() {
   return (neuron0x279f4a0()*-0.225825);
}

double NNfunction-ss_uLcR::synapse0x27b3930() {
   return (neuron0x279f7e0()*0.0223418);
}

double NNfunction-ss_uLcR::synapse0x27b3970() {
   return (neuron0x279fb20()*0.357169);
}

double NNfunction-ss_uLcR::synapse0x27b39b0() {
   return (neuron0x279fe60()*0.400882);
}

double NNfunction-ss_uLcR::synapse0x27b39f0() {
   return (neuron0x27a01a0()*0.0060568);
}

double NNfunction-ss_uLcR::synapse0x27b3a30() {
   return (neuron0x27a04e0()*0.483773);
}

double NNfunction-ss_uLcR::synapse0x27b3a70() {
   return (neuron0x27a0820()*0.714758);
}

double NNfunction-ss_uLcR::synapse0x27b3ab0() {
   return (neuron0x27a0b60()*0.657613);
}

double NNfunction-ss_uLcR::synapse0x27b3af0() {
   return (neuron0x27a0ea0()*1.02301);
}

double NNfunction-ss_uLcR::synapse0x27b3b30() {
   return (neuron0x27a11e0()*0.748437);
}

double NNfunction-ss_uLcR::synapse0x27b3b70() {
   return (neuron0x27a1520()*-0.378299);
}

double NNfunction-ss_uLcR::synapse0x27b3bb0() {
   return (neuron0x27a1860()*-0.0417132);
}

double NNfunction-ss_uLcR::synapse0x27b3bf0() {
   return (neuron0x27a1ba0()*0.250643);
}

double NNfunction-ss_uLcR::synapse0x27b3c30() {
   return (neuron0x27a1ee0()*0.659103);
}

double NNfunction-ss_uLcR::synapse0x27b3c70() {
   return (neuron0x27a2220()*0.57093);
}

double NNfunction-ss_uLcR::synapse0x27b3700() {
   return (neuron0x27a2560()*0.643644);
}

double NNfunction-ss_uLcR::synapse0x27b3740() {
   return (neuron0x27a2ac0()*-0.472331);
}

double NNfunction-ss_uLcR::synapse0x27b3dc0() {
   return (neuron0x27a2ce0()*0.137253);
}

double NNfunction-ss_uLcR::synapse0x27b3e00() {
   return (neuron0x27a3020()*-0.105123);
}

double NNfunction-ss_uLcR::synapse0x27b3e40() {
   return (neuron0x27a3360()*0.10713);
}

double NNfunction-ss_uLcR::synapse0x27b3e80() {
   return (neuron0x27a36a0()*0.341623);
}

double NNfunction-ss_uLcR::synapse0x27b3ec0() {
   return (neuron0x27a39e0()*0.0376941);
}

double NNfunction-ss_uLcR::synapse0x27b3f00() {
   return (neuron0x27a3d20()*-0.0991306);
}

double NNfunction-ss_uLcR::synapse0x27b4280() {
   return (neuron0x279f1f0()*0.0233343);
}

double NNfunction-ss_uLcR::synapse0x27b42c0() {
   return (neuron0x279f4a0()*0.114959);
}

double NNfunction-ss_uLcR::synapse0x27b4300() {
   return (neuron0x279f7e0()*-0.0701936);
}

double NNfunction-ss_uLcR::synapse0x27b4340() {
   return (neuron0x279fb20()*0.875187);
}

double NNfunction-ss_uLcR::synapse0x27b4380() {
   return (neuron0x279fe60()*0.0360244);
}

double NNfunction-ss_uLcR::synapse0x27b43c0() {
   return (neuron0x27a01a0()*-0.0912761);
}

double NNfunction-ss_uLcR::synapse0x27b4400() {
   return (neuron0x27a04e0()*0.0025818);
}

double NNfunction-ss_uLcR::synapse0x27b4440() {
   return (neuron0x27a0820()*-0.0239067);
}

double NNfunction-ss_uLcR::synapse0x27b4480() {
   return (neuron0x27a0b60()*0.0526635);
}

double NNfunction-ss_uLcR::synapse0x27b44c0() {
   return (neuron0x27a0ea0()*-0.0139473);
}

double NNfunction-ss_uLcR::synapse0x27b4500() {
   return (neuron0x27a11e0()*-0.0197825);
}

double NNfunction-ss_uLcR::synapse0x27b4540() {
   return (neuron0x27a1520()*-0.105491);
}

double NNfunction-ss_uLcR::synapse0x27b4580() {
   return (neuron0x27a1860()*-0.0335623);
}

double NNfunction-ss_uLcR::synapse0x27b45c0() {
   return (neuron0x27a1ba0()*-0.0353742);
}

double NNfunction-ss_uLcR::synapse0x27b4600() {
   return (neuron0x27a1ee0()*0.011031);
}

double NNfunction-ss_uLcR::synapse0x27b4640() {
   return (neuron0x27a2220()*0.144753);
}

double NNfunction-ss_uLcR::synapse0x27b40d0() {
   return (neuron0x27a2560()*-0.0366388);
}

double NNfunction-ss_uLcR::synapse0x27b4110() {
   return (neuron0x27a2ac0()*-0.00354087);
}

double NNfunction-ss_uLcR::synapse0x27b4790() {
   return (neuron0x27a2ce0()*-0.00262472);
}

double NNfunction-ss_uLcR::synapse0x27b47d0() {
   return (neuron0x27a3020()*-0.0984581);
}

double NNfunction-ss_uLcR::synapse0x27b4810() {
   return (neuron0x27a3360()*-0.0462413);
}

double NNfunction-ss_uLcR::synapse0x27b4850() {
   return (neuron0x27a36a0()*-0.0365566);
}

double NNfunction-ss_uLcR::synapse0x27b4890() {
   return (neuron0x27a39e0()*-0.022615);
}

double NNfunction-ss_uLcR::synapse0x27b48d0() {
   return (neuron0x27a3d20()*0.0138734);
}

double NNfunction-ss_uLcR::synapse0x27c67a0() {
   return (neuron0x279f1f0()*0.215003);
}

double NNfunction-ss_uLcR::synapse0x27c67e0() {
   return (neuron0x279f4a0()*0.138808);
}

double NNfunction-ss_uLcR::synapse0x27c6820() {
   return (neuron0x279f7e0()*0.0373789);
}

double NNfunction-ss_uLcR::synapse0x27c6860() {
   return (neuron0x279fb20()*0.875984);
}

double NNfunction-ss_uLcR::synapse0x27c68a0() {
   return (neuron0x279fe60()*0.19365);
}

double NNfunction-ss_uLcR::synapse0x27c68e0() {
   return (neuron0x27a01a0()*0.147311);
}

double NNfunction-ss_uLcR::synapse0x27c6920() {
   return (neuron0x27a04e0()*0.0219149);
}

double NNfunction-ss_uLcR::synapse0x27c6960() {
   return (neuron0x27a0820()*0.00210175);
}

double NNfunction-ss_uLcR::synapse0x27c69a0() {
   return (neuron0x27a0b60()*-0.084372);
}

double NNfunction-ss_uLcR::synapse0x27c69e0() {
   return (neuron0x27a0ea0()*0.137039);
}

double NNfunction-ss_uLcR::synapse0x27c6a20() {
   return (neuron0x27a11e0()*0.0140701);
}

double NNfunction-ss_uLcR::synapse0x27c6a60() {
   return (neuron0x27a1520()*0.133832);
}

double NNfunction-ss_uLcR::synapse0x27c6aa0() {
   return (neuron0x27a1860()*-0.0533385);
}

double NNfunction-ss_uLcR::synapse0x27c6ae0() {
   return (neuron0x27a1ba0()*-0.0936483);
}

double NNfunction-ss_uLcR::synapse0x27c6b20() {
   return (neuron0x27a1ee0()*0.164804);
}

double NNfunction-ss_uLcR::synapse0x27c6b60() {
   return (neuron0x27a2220()*-0.256873);
}

double NNfunction-ss_uLcR::synapse0x27b4910() {
   return (neuron0x27a2560()*0.086304);
}

double NNfunction-ss_uLcR::synapse0x27b4950() {
   return (neuron0x27a2ac0()*0.296925);
}

double NNfunction-ss_uLcR::synapse0x27c6cb0() {
   return (neuron0x27a2ce0()*-0.0615491);
}

double NNfunction-ss_uLcR::synapse0x27c6cf0() {
   return (neuron0x27a3020()*0.10038);
}

double NNfunction-ss_uLcR::synapse0x27c6d30() {
   return (neuron0x27a3360()*0.00524384);
}

double NNfunction-ss_uLcR::synapse0x27c6d70() {
   return (neuron0x27a36a0()*-0.0703821);
}

double NNfunction-ss_uLcR::synapse0x27c6db0() {
   return (neuron0x27a39e0()*0.0214522);
}

double NNfunction-ss_uLcR::synapse0x27c6df0() {
   return (neuron0x27a3d20()*0.0964424);
}

double NNfunction-ss_uLcR::synapse0x27c7170() {
   return (neuron0x279f1f0()*0.00494449);
}

double NNfunction-ss_uLcR::synapse0x27c71b0() {
   return (neuron0x279f4a0()*0.123662);
}

double NNfunction-ss_uLcR::synapse0x27c71f0() {
   return (neuron0x279f7e0()*0.1729);
}

double NNfunction-ss_uLcR::synapse0x27c7230() {
   return (neuron0x279fb20()*-0.570113);
}

double NNfunction-ss_uLcR::synapse0x27c7270() {
   return (neuron0x279fe60()*-0.0701144);
}

double NNfunction-ss_uLcR::synapse0x27c72b0() {
   return (neuron0x27a01a0()*0.0226138);
}

double NNfunction-ss_uLcR::synapse0x27c72f0() {
   return (neuron0x27a04e0()*-0.0195698);
}

double NNfunction-ss_uLcR::synapse0x27c7330() {
   return (neuron0x27a0820()*-0.0805157);
}

double NNfunction-ss_uLcR::synapse0x27c7370() {
   return (neuron0x27a0b60()*-0.0485409);
}

double NNfunction-ss_uLcR::synapse0x27c73b0() {
   return (neuron0x27a0ea0()*0.159959);
}

double NNfunction-ss_uLcR::synapse0x27c73f0() {
   return (neuron0x27a11e0()*-0.0779775);
}

double NNfunction-ss_uLcR::synapse0x27c7430() {
   return (neuron0x27a1520()*-0.538734);
}

double NNfunction-ss_uLcR::synapse0x27c7470() {
   return (neuron0x27a1860()*0.00756025);
}

double NNfunction-ss_uLcR::synapse0x27c74b0() {
   return (neuron0x27a1ba0()*0.0202771);
}

double NNfunction-ss_uLcR::synapse0x27c74f0() {
   return (neuron0x27a1ee0()*0.0162551);
}

double NNfunction-ss_uLcR::synapse0x27c7530() {
   return (neuron0x27a2220()*0.499446);
}

double NNfunction-ss_uLcR::synapse0x27c6fc0() {
   return (neuron0x27a2560()*-0.102623);
}

double NNfunction-ss_uLcR::synapse0x27c7000() {
   return (neuron0x27a2ac0()*0.154216);
}

double NNfunction-ss_uLcR::synapse0x27c7680() {
   return (neuron0x27a2ce0()*0.183728);
}

double NNfunction-ss_uLcR::synapse0x27c76c0() {
   return (neuron0x27a3020()*-0.0408601);
}

double NNfunction-ss_uLcR::synapse0x27c7700() {
   return (neuron0x27a3360()*-0.0835454);
}

double NNfunction-ss_uLcR::synapse0x27c7740() {
   return (neuron0x27a36a0()*0.0477128);
}

double NNfunction-ss_uLcR::synapse0x27c7780() {
   return (neuron0x27a39e0()*0.0160553);
}

double NNfunction-ss_uLcR::synapse0x27c77c0() {
   return (neuron0x27a3d20()*0.03812);
}

double NNfunction-ss_uLcR::synapse0x27c7b40() {
   return (neuron0x279f1f0()*-0.0914398);
}

double NNfunction-ss_uLcR::synapse0x27c7b80() {
   return (neuron0x279f4a0()*-0.857734);
}

double NNfunction-ss_uLcR::synapse0x27c7bc0() {
   return (neuron0x279f7e0()*0.919819);
}

double NNfunction-ss_uLcR::synapse0x27c7c00() {
   return (neuron0x279fb20()*-0.458199);
}

double NNfunction-ss_uLcR::synapse0x27c7c40() {
   return (neuron0x279fe60()*-0.246653);
}

double NNfunction-ss_uLcR::synapse0x27c7c80() {
   return (neuron0x27a01a0()*0.0600717);
}

double NNfunction-ss_uLcR::synapse0x27c7cc0() {
   return (neuron0x27a04e0()*0.486443);
}

double NNfunction-ss_uLcR::synapse0x27c7d00() {
   return (neuron0x27a0820()*-0.0481032);
}

double NNfunction-ss_uLcR::synapse0x27c7d40() {
   return (neuron0x27a0b60()*-0.287369);
}

double NNfunction-ss_uLcR::synapse0x27c7d80() {
   return (neuron0x27a0ea0()*1.08863);
}

double NNfunction-ss_uLcR::synapse0x27c7dc0() {
   return (neuron0x27a11e0()*-0.283135);
}

double NNfunction-ss_uLcR::synapse0x27c7e00() {
   return (neuron0x27a1520()*0.526529);
}

double NNfunction-ss_uLcR::synapse0x27c7e40() {
   return (neuron0x27a1860()*-0.364274);
}

double NNfunction-ss_uLcR::synapse0x27c7e80() {
   return (neuron0x27a1ba0()*-0.526683);
}

double NNfunction-ss_uLcR::synapse0x27c7ec0() {
   return (neuron0x27a1ee0()*-0.105573);
}

double NNfunction-ss_uLcR::synapse0x27c7f00() {
   return (neuron0x27a2220()*-0.143775);
}

double NNfunction-ss_uLcR::synapse0x27c7990() {
   return (neuron0x27a2560()*-0.673658);
}

double NNfunction-ss_uLcR::synapse0x27c79d0() {
   return (neuron0x27a2ac0()*-0.811299);
}

double NNfunction-ss_uLcR::synapse0x27c8050() {
   return (neuron0x27a2ce0()*0.147798);
}

double NNfunction-ss_uLcR::synapse0x27c8090() {
   return (neuron0x27a3020()*-1.08108);
}

double NNfunction-ss_uLcR::synapse0x27c80d0() {
   return (neuron0x27a3360()*0.292635);
}

double NNfunction-ss_uLcR::synapse0x27c8110() {
   return (neuron0x27a36a0()*0.394973);
}

double NNfunction-ss_uLcR::synapse0x27c8150() {
   return (neuron0x27a39e0()*-0.700287);
}

double NNfunction-ss_uLcR::synapse0x27c8190() {
   return (neuron0x27a3d20()*0.107313);
}

double NNfunction-ss_uLcR::synapse0x27c8510() {
   return (neuron0x279f1f0()*-0.00293691);
}

double NNfunction-ss_uLcR::synapse0x27c8550() {
   return (neuron0x279f4a0()*-0.000231558);
}

double NNfunction-ss_uLcR::synapse0x27c8590() {
   return (neuron0x279f7e0()*0.00657959);
}

double NNfunction-ss_uLcR::synapse0x27c85d0() {
   return (neuron0x279fb20()*-1.09205);
}

double NNfunction-ss_uLcR::synapse0x27c8610() {
   return (neuron0x279fe60()*0.0469901);
}

double NNfunction-ss_uLcR::synapse0x27c8650() {
   return (neuron0x27a01a0()*-0.0238804);
}

double NNfunction-ss_uLcR::synapse0x27c8690() {
   return (neuron0x27a04e0()*0.0189037);
}

double NNfunction-ss_uLcR::synapse0x27c86d0() {
   return (neuron0x27a0820()*-0.016858);
}

double NNfunction-ss_uLcR::synapse0x27c8710() {
   return (neuron0x27a0b60()*0.0278086);
}

double NNfunction-ss_uLcR::synapse0x27c8750() {
   return (neuron0x27a0ea0()*-0.0208479);
}

double NNfunction-ss_uLcR::synapse0x27c8790() {
   return (neuron0x27a11e0()*0.0105661);
}

double NNfunction-ss_uLcR::synapse0x27c87d0() {
   return (neuron0x27a1520()*0.00614685);
}

double NNfunction-ss_uLcR::synapse0x27c8810() {
   return (neuron0x27a1860()*-0.00314647);
}

double NNfunction-ss_uLcR::synapse0x27c8850() {
   return (neuron0x27a1ba0()*-0.0705887);
}

double NNfunction-ss_uLcR::synapse0x27c8890() {
   return (neuron0x27a1ee0()*0.0350963);
}

double NNfunction-ss_uLcR::synapse0x27c88d0() {
   return (neuron0x27a2220()*-0.314346);
}

double NNfunction-ss_uLcR::synapse0x27c8360() {
   return (neuron0x27a2560()*-0.0696415);
}

double NNfunction-ss_uLcR::synapse0x27c83a0() {
   return (neuron0x27a2ac0()*0.0131805);
}

double NNfunction-ss_uLcR::synapse0x27c8a20() {
   return (neuron0x27a2ce0()*-0.0376836);
}

double NNfunction-ss_uLcR::synapse0x27c8a60() {
   return (neuron0x27a3020()*-0.0334314);
}

double NNfunction-ss_uLcR::synapse0x27c8aa0() {
   return (neuron0x27a3360()*-0.0490158);
}

double NNfunction-ss_uLcR::synapse0x27c8ae0() {
   return (neuron0x27a36a0()*0.00844984);
}

double NNfunction-ss_uLcR::synapse0x27c8b20() {
   return (neuron0x27a39e0()*-0.0115251);
}

double NNfunction-ss_uLcR::synapse0x27c8b60() {
   return (neuron0x27a3d20()*0.0459353);
}

double NNfunction-ss_uLcR::synapse0x27a50f0() {
   return (neuron0x27a4190()*0.167467);
}

double NNfunction-ss_uLcR::synapse0x27a5130() {
   return (neuron0x27a4ae0()*0.989902);
}

double NNfunction-ss_uLcR::synapse0x27a6610() {
   return (neuron0x27a55c0()*-0.0111993);
}

double NNfunction-ss_uLcR::synapse0x27a6650() {
   return (neuron0x2568910()*0.172443);
}

double NNfunction-ss_uLcR::synapse0x27a6fe0() {
   return (neuron0x27a6360()*-0.474117);
}

double NNfunction-ss_uLcR::synapse0x27a7020() {
   return (neuron0x27a6d30()*4.27239);
}

double NNfunction-ss_uLcR::synapse0x27a7db0() {
   return (neuron0x27a7b00()*0.0724717);
}

double NNfunction-ss_uLcR::synapse0x27a7df0() {
   return (neuron0x27a84d0()*0.431417);
}

double NNfunction-ss_uLcR::synapse0x27a8780() {
   return (neuron0x27a8ea0()*0.206048);
}

double NNfunction-ss_uLcR::synapse0x27a87c0() {
   return (neuron0x27a9980()*0.179975);
}

double NNfunction-ss_uLcR::synapse0x27a9150() {
   return (neuron0x27aa350()*-0.00523481);
}

double NNfunction-ss_uLcR::synapse0x27a9190() {
   return (neuron0x27a7430()*0.0893262);
}

double NNfunction-ss_uLcR::synapse0x27a9c30() {
   return (neuron0x27abf00()*-0.0723519);
}

double NNfunction-ss_uLcR::synapse0x27a9c70() {
   return (neuron0x27ac8d0()*1.24351);
}

double NNfunction-ss_uLcR::synapse0x27aa600() {
   return (neuron0x27ad2a0()*0.716527);
}

double NNfunction-ss_uLcR::synapse0x27aa640() {
   return (neuron0x27adc70()*-0.0699861);
}

double NNfunction-ss_uLcR::synapse0x27a76e0() {
   return (neuron0x27afa80()*0.0851831);
}

double NNfunction-ss_uLcR::synapse0x27a7720() {
   return (neuron0x27afd60()*-0.105133);
}

double NNfunction-ss_uLcR::synapse0x27ac1b0() {
   return (neuron0x27b0730()*0.722175);
}

double NNfunction-ss_uLcR::synapse0x27ac1f0() {
   return (neuron0x27b1100()*-0.0869663);
}

double NNfunction-ss_uLcR::synapse0x27acb80() {
   return (neuron0x27b1ad0()*0.148675);
}

double NNfunction-ss_uLcR::synapse0x27acbc0() {
   return (neuron0x27b24a0()*-1.52028);
}

double NNfunction-ss_uLcR::synapse0x27ad550() {
   return (neuron0x27aaff0()*0.0347482);
}

double NNfunction-ss_uLcR::synapse0x27ad590() {
   return (neuron0x27ab9c0()*0.195178);
}

double NNfunction-ss_uLcR::synapse0x27adf20() {
   return (neuron0x27b5230()*0.175656);
}

double NNfunction-ss_uLcR::synapse0x27adf60() {
   return (neuron0x27b5c00()*-0.372915);
}

double NNfunction-ss_uLcR::synapse0x27a2100() {
   return (neuron0x27b65d0()*0.598855);
}

double NNfunction-ss_uLcR::synapse0x27a2140() {
   return (neuron0x27b6fa0()*0.0211542);
}

double NNfunction-ss_uLcR::synapse0x27b0010() {
   return (neuron0x27b7970()*-0.262719);
}

double NNfunction-ss_uLcR::synapse0x27b0050() {
   return (neuron0x27b8340()*-7.57696);
}

double NNfunction-ss_uLcR::synapse0x27b09e0() {
   return (neuron0x27b8d10()*0.0995628);
}

double NNfunction-ss_uLcR::synapse0x27b0a20() {
   return (neuron0x27b96e0()*1.00276);
}

double NNfunction-ss_uLcR::synapse0x27b13b0() {
   return (neuron0x27af770()*0.162228);
}

double NNfunction-ss_uLcR::synapse0x27b13f0() {
   return (neuron0x27bc2c0()*-0.0587811);
}

double NNfunction-ss_uLcR::synapse0x27b1d80() {
   return (neuron0x27bcc90()*0.344209);
}

double NNfunction-ss_uLcR::synapse0x27b1dc0() {
   return (neuron0x27bd660()*0.177193);
}

double NNfunction-ss_uLcR::synapse0x27b2750() {
   return (neuron0x27be030()*1.71215);
}

double NNfunction-ss_uLcR::synapse0x27b2790() {
   return (neuron0x27bea00()*-0.853168);
}

double NNfunction-ss_uLcR::synapse0x27ab2a0() {
   return (neuron0x27bf3d0()*-0.148182);
}

double NNfunction-ss_uLcR::synapse0x27ab2e0() {
   return (neuron0x27bfda0()*0.0803825);
}

double NNfunction-ss_uLcR::synapse0x27b4b50() {
   return (neuron0x27c0770()*-0.0294796);
}

double NNfunction-ss_uLcR::synapse0x27b4b90() {
   return (neuron0x27c1350()*-0.293294);
}

double NNfunction-ss_uLcR::synapse0x27b54e0() {
   return (neuron0x27c1d20()*-0.0927763);
}

double NNfunction-ss_uLcR::synapse0x27b5520() {
   return (neuron0x27b2ba0()*-1.44056);
}

double NNfunction-ss_uLcR::synapse0x27b5eb0() {
   return (neuron0x27b3570()*0.129359);
}

double NNfunction-ss_uLcR::synapse0x27b5ef0() {
   return (neuron0x27b3f40()*-0.77716);
}

double NNfunction-ss_uLcR::synapse0x27b6880() {
   return (neuron0x27c6580()*0.340116);
}

double NNfunction-ss_uLcR::synapse0x27b68c0() {
   return (neuron0x27c6e30()*-0.120236);
}

double NNfunction-ss_uLcR::synapse0x27b7250() {
   return (neuron0x27c7800()*0.0836728);
}

double NNfunction-ss_uLcR::synapse0x27b7290() {
   return (neuron0x27c81d0()*2.03055);
}

double NNfunction-ss_uLcR::synapse0x27b9990() {
   return (neuron0x27a4190()*0.350992);
}

double NNfunction-ss_uLcR::synapse0x27b99d0() {
   return (neuron0x27a4ae0()*-2.25196);
}

double NNfunction-ss_uLcR::synapse0x27aef50() {
   return (neuron0x27a55c0()*0.244489);
}

double NNfunction-ss_uLcR::synapse0x27aef90() {
   return (neuron0x2568910()*0.784296);
}

double NNfunction-ss_uLcR::synapse0x27bc570() {
   return (neuron0x27a6360()*0.307786);
}

double NNfunction-ss_uLcR::synapse0x27bc5b0() {
   return (neuron0x27a6d30()*-0.998439);
}

double NNfunction-ss_uLcR::synapse0x27bcf40() {
   return (neuron0x27a7b00()*-0.467001);
}

double NNfunction-ss_uLcR::synapse0x27bcf80() {
   return (neuron0x27a84d0()*-0.595353);
}

double NNfunction-ss_uLcR::synapse0x27bd910() {
   return (neuron0x27a8ea0()*0.164681);
}

double NNfunction-ss_uLcR::synapse0x27bd950() {
   return (neuron0x27a9980()*0.324484);
}

double NNfunction-ss_uLcR::synapse0x27be2e0() {
   return (neuron0x27aa350()*0.555707);
}

double NNfunction-ss_uLcR::synapse0x27be320() {
   return (neuron0x27a7430()*-0.691786);
}

double NNfunction-ss_uLcR::synapse0x27becb0() {
   return (neuron0x27abf00()*0.559155);
}

double NNfunction-ss_uLcR::synapse0x27becf0() {
   return (neuron0x27ac8d0()*-0.691337);
}

double NNfunction-ss_uLcR::synapse0x27bf680() {
   return (neuron0x27ad2a0()*-0.929171);
}

double NNfunction-ss_uLcR::synapse0x27bf6c0() {
   return (neuron0x27adc70()*0.516638);
}

double NNfunction-ss_uLcR::synapse0x27c0050() {
   return (neuron0x27afa80()*-0.424227);
}

double NNfunction-ss_uLcR::synapse0x27c0090() {
   return (neuron0x27afd60()*0.700617);
}

double NNfunction-ss_uLcR::synapse0x27c0a20() {
   return (neuron0x27b0730()*0.734121);
}

double NNfunction-ss_uLcR::synapse0x27c0a60() {
   return (neuron0x27b1100()*-0.31454);
}

double NNfunction-ss_uLcR::synapse0x27c1600() {
   return (neuron0x27b1ad0()*-0.723486);
}

double NNfunction-ss_uLcR::synapse0x27c1640() {
   return (neuron0x27b24a0()*0.862265);
}

double NNfunction-ss_uLcR::synapse0x27c1fd0() {
   return (neuron0x27aaff0()*-0.544642);
}

double NNfunction-ss_uLcR::synapse0x27c2010() {
   return (neuron0x27ab9c0()*-0.729819);
}

double NNfunction-ss_uLcR::synapse0x27b2e50() {
   return (neuron0x27b5230()*-0.462587);
}

double NNfunction-ss_uLcR::synapse0x27b2e90() {
   return (neuron0x27b5c00()*0.729487);
}

double NNfunction-ss_uLcR::synapse0x27b3820() {
   return (neuron0x27b65d0()*-1.31658);
}

double NNfunction-ss_uLcR::synapse0x27b3860() {
   return (neuron0x27b6fa0()*1.04545);
}

double NNfunction-ss_uLcR::synapse0x27b41f0() {
   return (neuron0x27b7970()*-2.03894);
}

double NNfunction-ss_uLcR::synapse0x27b4230() {
   return (neuron0x27b8340()*2.96492);
}

double NNfunction-ss_uLcR::synapse0x27c6710() {
   return (neuron0x27b8d10()*-0.558417);
}

double NNfunction-ss_uLcR::synapse0x27c6750() {
   return (neuron0x27b96e0()*2.65577);
}

double NNfunction-ss_uLcR::synapse0x27c70e0() {
   return (neuron0x27af770()*0.209494);
}

double NNfunction-ss_uLcR::synapse0x27c7120() {
   return (neuron0x27bc2c0()*0.920469);
}

double NNfunction-ss_uLcR::synapse0x27c7ab0() {
   return (neuron0x27bcc90()*0.32763);
}

double NNfunction-ss_uLcR::synapse0x27c7af0() {
   return (neuron0x27bd660()*-0.954343);
}

double NNfunction-ss_uLcR::synapse0x27c8480() {
   return (neuron0x27be030()*0.733873);
}

double NNfunction-ss_uLcR::synapse0x27c84c0() {
   return (neuron0x27bea00()*-0.635119);
}

double NNfunction-ss_uLcR::synapse0x27a43b0() {
   return (neuron0x27bf3d0()*1.19765);
}

double NNfunction-ss_uLcR::synapse0x27a43f0() {
   return (neuron0x27bfda0()*-0.252258);
}

double NNfunction-ss_uLcR::synapse0x27b7c20() {
   return (neuron0x27c0770()*-0.137059);
}

double NNfunction-ss_uLcR::synapse0x27b7c60() {
   return (neuron0x27c1350()*1.14);
}

double NNfunction-ss_uLcR::synapse0x27c8ba0() {
   return (neuron0x27c1d20()*0.463445);
}

double NNfunction-ss_uLcR::synapse0x27c8be0() {
   return (neuron0x27b2ba0()*0.669598);
}

double NNfunction-ss_uLcR::synapse0x27c8c20() {
   return (neuron0x27b3570()*-0.472894);
}

double NNfunction-ss_uLcR::synapse0x27c8c60() {
   return (neuron0x27b3f40()*-0.593368);
}

double NNfunction-ss_uLcR::synapse0x27cfb10() {
   return (neuron0x27c6580()*-1.38918);
}

double NNfunction-ss_uLcR::synapse0x27cfb50() {
   return (neuron0x27c6e30()*0.0291971);
}

double NNfunction-ss_uLcR::synapse0x27cfb90() {
   return (neuron0x27c7800()*-0.320134);
}

double NNfunction-ss_uLcR::synapse0x27cfbd0() {
   return (neuron0x27c81d0()*-1.62658);
}

double NNfunction-ss_uLcR::synapse0x27cff50() {
   return (neuron0x27a4190()*-0.502165);
}

double NNfunction-ss_uLcR::synapse0x27cff90() {
   return (neuron0x27a4ae0()*1.46317);
}

double NNfunction-ss_uLcR::synapse0x27cffd0() {
   return (neuron0x27a55c0()*0.208733);
}

double NNfunction-ss_uLcR::synapse0x27d0010() {
   return (neuron0x2568910()*1.33118);
}

double NNfunction-ss_uLcR::synapse0x27d0050() {
   return (neuron0x27a6360()*-0.44283);
}

double NNfunction-ss_uLcR::synapse0x27d0090() {
   return (neuron0x27a6d30()*1.27525);
}

double NNfunction-ss_uLcR::synapse0x27d00d0() {
   return (neuron0x27a7b00()*0.16399);
}

double NNfunction-ss_uLcR::synapse0x27d0110() {
   return (neuron0x27a84d0()*-0.217553);
}

double NNfunction-ss_uLcR::synapse0x27d0150() {
   return (neuron0x27a8ea0()*-0.318572);
}

double NNfunction-ss_uLcR::synapse0x27d0190() {
   return (neuron0x27a9980()*0.061341);
}

double NNfunction-ss_uLcR::synapse0x27d01d0() {
   return (neuron0x27aa350()*0.0750648);
}

double NNfunction-ss_uLcR::synapse0x27d0210() {
   return (neuron0x27a7430()*0.19866);
}

double NNfunction-ss_uLcR::synapse0x27d0250() {
   return (neuron0x27abf00()*0.19201);
}

double NNfunction-ss_uLcR::synapse0x27d0290() {
   return (neuron0x27ac8d0()*1.22737);
}

double NNfunction-ss_uLcR::synapse0x27d02d0() {
   return (neuron0x27ad2a0()*-0.428373);
}

double NNfunction-ss_uLcR::synapse0x27d0310() {
   return (neuron0x27adc70()*0.0149842);
}

double NNfunction-ss_uLcR::synapse0x27cfda0() {
   return (neuron0x27afa80()*-0.387104);
}

double NNfunction-ss_uLcR::synapse0x27cfde0() {
   return (neuron0x27afd60()*0.143907);
}

double NNfunction-ss_uLcR::synapse0x27d0460() {
   return (neuron0x27b0730()*0.70931);
}

double NNfunction-ss_uLcR::synapse0x27d04a0() {
   return (neuron0x27b1100()*0.192414);
}

double NNfunction-ss_uLcR::synapse0x27d04e0() {
   return (neuron0x27b1ad0()*-0.0968305);
}

double NNfunction-ss_uLcR::synapse0x27d0520() {
   return (neuron0x27b24a0()*-1.58597);
}

double NNfunction-ss_uLcR::synapse0x27d0560() {
   return (neuron0x27aaff0()*0.246882);
}

double NNfunction-ss_uLcR::synapse0x27d05a0() {
   return (neuron0x27ab9c0()*-0.157554);
}

double NNfunction-ss_uLcR::synapse0x27d05e0() {
   return (neuron0x27b5230()*-0.1899);
}

double NNfunction-ss_uLcR::synapse0x27d0620() {
   return (neuron0x27b5c00()*-0.535195);
}

double NNfunction-ss_uLcR::synapse0x27d0660() {
   return (neuron0x27b65d0()*1.68935);
}

double NNfunction-ss_uLcR::synapse0x27d06a0() {
   return (neuron0x27b6fa0()*0.730719);
}

double NNfunction-ss_uLcR::synapse0x27d06e0() {
   return (neuron0x27b7970()*-3.1516);
}

double NNfunction-ss_uLcR::synapse0x27d0720() {
   return (neuron0x27b8340()*-2.60489);
}

double NNfunction-ss_uLcR::synapse0x27d0760() {
   return (neuron0x27b8d10()*-0.0950122);
}

double NNfunction-ss_uLcR::synapse0x27d07a0() {
   return (neuron0x27b96e0()*4.76727);
}

double NNfunction-ss_uLcR::synapse0x27d0350() {
   return (neuron0x27af770()*1.65241);
}

double NNfunction-ss_uLcR::synapse0x27d0390() {
   return (neuron0x27bc2c0()*0.37387);
}

double NNfunction-ss_uLcR::synapse0x27d03d0() {
   return (neuron0x27bcc90()*0.415803);
}

double NNfunction-ss_uLcR::synapse0x27d0410() {
   return (neuron0x27bd660()*-0.124007);
}

double NNfunction-ss_uLcR::synapse0x27d09f0() {
   return (neuron0x27be030()*-0.453235);
}

double NNfunction-ss_uLcR::synapse0x27d0a30() {
   return (neuron0x27bea00()*-1.65368);
}

double NNfunction-ss_uLcR::synapse0x27d0a70() {
   return (neuron0x27bf3d0()*1.14346);
}

double NNfunction-ss_uLcR::synapse0x27d0ab0() {
   return (neuron0x27bfda0()*-0.019368);
}

double NNfunction-ss_uLcR::synapse0x27d0af0() {
   return (neuron0x27c0770()*-1.80756);
}

double NNfunction-ss_uLcR::synapse0x27d0b30() {
   return (neuron0x27c1350()*0.159578);
}

double NNfunction-ss_uLcR::synapse0x27d0b70() {
   return (neuron0x27c1d20()*0.0503834);
}

double NNfunction-ss_uLcR::synapse0x27d0bb0() {
   return (neuron0x27b2ba0()*-1.06041);
}

double NNfunction-ss_uLcR::synapse0x27d0bf0() {
   return (neuron0x27b3570()*0.0344258);
}

double NNfunction-ss_uLcR::synapse0x27d0c30() {
   return (neuron0x27b3f40()*2.29049);
}

double NNfunction-ss_uLcR::synapse0x27d0c70() {
   return (neuron0x27c6580()*1.1845);
}

double NNfunction-ss_uLcR::synapse0x27d0cb0() {
   return (neuron0x27c6e30()*-1.52879);
}

double NNfunction-ss_uLcR::synapse0x27d0cf0() {
   return (neuron0x27c7800()*0.0190017);
}

double NNfunction-ss_uLcR::synapse0x27d0d30() {
   return (neuron0x27c81d0()*-0.407168);
}

double NNfunction-ss_uLcR::synapse0x27d10b0() {
   return (neuron0x27a4190()*-0.154734);
}

double NNfunction-ss_uLcR::synapse0x27d10f0() {
   return (neuron0x27a4ae0()*1.25808);
}

double NNfunction-ss_uLcR::synapse0x27d1130() {
   return (neuron0x27a55c0()*-0.116071);
}

double NNfunction-ss_uLcR::synapse0x27d1170() {
   return (neuron0x2568910()*0.565282);
}

double NNfunction-ss_uLcR::synapse0x27d11b0() {
   return (neuron0x27a6360()*-0.623958);
}

double NNfunction-ss_uLcR::synapse0x27d11f0() {
   return (neuron0x27a6d30()*-0.369715);
}

double NNfunction-ss_uLcR::synapse0x27d1230() {
   return (neuron0x27a7b00()*0.0530107);
}

double NNfunction-ss_uLcR::synapse0x27d1270() {
   return (neuron0x27a84d0()*-0.868963);
}

double NNfunction-ss_uLcR::synapse0x27d12b0() {
   return (neuron0x27a8ea0()*0.30641);
}

double NNfunction-ss_uLcR::synapse0x27d12f0() {
   return (neuron0x27a9980()*0.285904);
}

double NNfunction-ss_uLcR::synapse0x27d1330() {
   return (neuron0x27aa350()*-0.0781027);
}

double NNfunction-ss_uLcR::synapse0x27d1370() {
   return (neuron0x27a7430()*0.118456);
}

double NNfunction-ss_uLcR::synapse0x27d13b0() {
   return (neuron0x27abf00()*-0.176898);
}

double NNfunction-ss_uLcR::synapse0x27d13f0() {
   return (neuron0x27ac8d0()*0.720316);
}

double NNfunction-ss_uLcR::synapse0x27d1430() {
   return (neuron0x27ad2a0()*-0.00624023);
}

double NNfunction-ss_uLcR::synapse0x27d1470() {
   return (neuron0x27adc70()*-0.148252);
}

double NNfunction-ss_uLcR::synapse0x27d0f00() {
   return (neuron0x27afa80()*0.238779);
}

double NNfunction-ss_uLcR::synapse0x27d0f40() {
   return (neuron0x27afd60()*-0.270039);
}

double NNfunction-ss_uLcR::synapse0x27d15c0() {
   return (neuron0x27b0730()*0.630103);
}

double NNfunction-ss_uLcR::synapse0x27d1600() {
   return (neuron0x27b1100()*-0.196598);
}

double NNfunction-ss_uLcR::synapse0x27d1640() {
   return (neuron0x27b1ad0()*0.333545);
}

double NNfunction-ss_uLcR::synapse0x27d1680() {
   return (neuron0x27b24a0()*-0.211027);
}

double NNfunction-ss_uLcR::synapse0x27d16c0() {
   return (neuron0x27aaff0()*0.0088353);
}

double NNfunction-ss_uLcR::synapse0x27d1700() {
   return (neuron0x27ab9c0()*0.379489);
}

double NNfunction-ss_uLcR::synapse0x27d1740() {
   return (neuron0x27b5230()*0.336186);
}

double NNfunction-ss_uLcR::synapse0x27d1780() {
   return (neuron0x27b5c00()*-0.433311);
}

double NNfunction-ss_uLcR::synapse0x27d17c0() {
   return (neuron0x27b65d0()*0.635499);
}

double NNfunction-ss_uLcR::synapse0x27d1800() {
   return (neuron0x27b6fa0()*0.11904);
}

double NNfunction-ss_uLcR::synapse0x27d1840() {
   return (neuron0x27b7970()*0.677195);
}

double NNfunction-ss_uLcR::synapse0x27d1880() {
   return (neuron0x27b8340()*-3.55897);
}

double NNfunction-ss_uLcR::synapse0x27d18c0() {
   return (neuron0x27b8d10()*0.225339);
}

double NNfunction-ss_uLcR::synapse0x27d1900() {
   return (neuron0x27b96e0()*-0.804607);
}

double NNfunction-ss_uLcR::synapse0x27d14b0() {
   return (neuron0x27af770()*0.0267896);
}

double NNfunction-ss_uLcR::synapse0x27d14f0() {
   return (neuron0x27bc2c0()*-0.247738);
}

double NNfunction-ss_uLcR::synapse0x27d1530() {
   return (neuron0x27bcc90()*0.207243);
}

double NNfunction-ss_uLcR::synapse0x27d1570() {
   return (neuron0x27bd660()*0.615279);
}

double NNfunction-ss_uLcR::synapse0x27d1b50() {
   return (neuron0x27be030()*-0.712874);
}

double NNfunction-ss_uLcR::synapse0x27d1b90() {
   return (neuron0x27bea00()*-0.00841472);
}

double NNfunction-ss_uLcR::synapse0x27d1bd0() {
   return (neuron0x27bf3d0()*-0.443618);
}

double NNfunction-ss_uLcR::synapse0x27d1c10() {
   return (neuron0x27bfda0()*0.123267);
}

double NNfunction-ss_uLcR::synapse0x27d1c50() {
   return (neuron0x27c0770()*0.0425051);
}

double NNfunction-ss_uLcR::synapse0x27d1c90() {
   return (neuron0x27c1350()*-0.47614);
}

double NNfunction-ss_uLcR::synapse0x27d1cd0() {
   return (neuron0x27c1d20()*-0.174591);
}

double NNfunction-ss_uLcR::synapse0x27d1d10() {
   return (neuron0x27b2ba0()*0.168051);
}

double NNfunction-ss_uLcR::synapse0x27d1d50() {
   return (neuron0x27b3570()*0.248642);
}

double NNfunction-ss_uLcR::synapse0x27d1d90() {
   return (neuron0x27b3f40()*0.366977);
}

double NNfunction-ss_uLcR::synapse0x27d1dd0() {
   return (neuron0x27c6580()*0.126157);
}

double NNfunction-ss_uLcR::synapse0x27d1e10() {
   return (neuron0x27c6e30()*-0.721395);
}

double NNfunction-ss_uLcR::synapse0x27d1e50() {
   return (neuron0x27c7800()*0.116557);
}

double NNfunction-ss_uLcR::synapse0x27d1e90() {
   return (neuron0x27c81d0()*0.0131157);
}

double NNfunction-ss_uLcR::synapse0x27d2210() {
   return (neuron0x27a4190()*-1.77989);
}

double NNfunction-ss_uLcR::synapse0x27d2250() {
   return (neuron0x27a4ae0()*-0.882415);
}

double NNfunction-ss_uLcR::synapse0x27d2290() {
   return (neuron0x27a55c0()*-0.0866037);
}

double NNfunction-ss_uLcR::synapse0x27d22d0() {
   return (neuron0x2568910()*1.80938);
}

double NNfunction-ss_uLcR::synapse0x27d2310() {
   return (neuron0x27a6360()*-0.315035);
}

double NNfunction-ss_uLcR::synapse0x27d2350() {
   return (neuron0x27a6d30()*0.126565);
}

double NNfunction-ss_uLcR::synapse0x27d2390() {
   return (neuron0x27a7b00()*0.0283889);
}

double NNfunction-ss_uLcR::synapse0x27d23d0() {
   return (neuron0x27a84d0()*-0.0454492);
}

double NNfunction-ss_uLcR::synapse0x27d2410() {
   return (neuron0x27a8ea0()*-0.346391);
}

double NNfunction-ss_uLcR::synapse0x27d2450() {
   return (neuron0x27a9980()*-0.352534);
}

double NNfunction-ss_uLcR::synapse0x27d2490() {
   return (neuron0x27aa350()*-0.164087);
}

double NNfunction-ss_uLcR::synapse0x27d24d0() {
   return (neuron0x27a7430()*0.0479583);
}

double NNfunction-ss_uLcR::synapse0x27d2510() {
   return (neuron0x27abf00()*-0.0915763);
}

double NNfunction-ss_uLcR::synapse0x27d2550() {
   return (neuron0x27ac8d0()*-0.18325);
}

double NNfunction-ss_uLcR::synapse0x27d2590() {
   return (neuron0x27ad2a0()*-0.120927);
}

double NNfunction-ss_uLcR::synapse0x27d25d0() {
   return (neuron0x27adc70()*0.035526);
}

double NNfunction-ss_uLcR::synapse0x27d2060() {
   return (neuron0x27afa80()*-0.00560898);
}

double NNfunction-ss_uLcR::synapse0x27d20a0() {
   return (neuron0x27afd60()*0.0186905);
}

double NNfunction-ss_uLcR::synapse0x27d2720() {
   return (neuron0x27b0730()*-0.0488006);
}

double NNfunction-ss_uLcR::synapse0x27d2760() {
   return (neuron0x27b1100()*0.183556);
}

double NNfunction-ss_uLcR::synapse0x27d27a0() {
   return (neuron0x27b1ad0()*-0.0467784);
}

double NNfunction-ss_uLcR::synapse0x27d27e0() {
   return (neuron0x27b24a0()*0.475273);
}

double NNfunction-ss_uLcR::synapse0x27d2820() {
   return (neuron0x27aaff0()*0.072764);
}

double NNfunction-ss_uLcR::synapse0x27d2860() {
   return (neuron0x27ab9c0()*-0.115084);
}

double NNfunction-ss_uLcR::synapse0x27d28a0() {
   return (neuron0x27b5230()*-0.155865);
}

double NNfunction-ss_uLcR::synapse0x27d28e0() {
   return (neuron0x27b5c00()*0.122998);
}

double NNfunction-ss_uLcR::synapse0x27d2920() {
   return (neuron0x27b65d0()*-0.0219769);
}

double NNfunction-ss_uLcR::synapse0x27d2960() {
   return (neuron0x27b6fa0()*0.040097);
}

double NNfunction-ss_uLcR::synapse0x27d29a0() {
   return (neuron0x27b7970()*0.998624);
}

double NNfunction-ss_uLcR::synapse0x27d29e0() {
   return (neuron0x27b8340()*0.10703);
}

double NNfunction-ss_uLcR::synapse0x27d2a20() {
   return (neuron0x27b8d10()*0.0024939);
}

double NNfunction-ss_uLcR::synapse0x27d2a60() {
   return (neuron0x27b96e0()*0.110181);
}

double NNfunction-ss_uLcR::synapse0x27d2610() {
   return (neuron0x27af770()*0.145033);
}

double NNfunction-ss_uLcR::synapse0x27d2650() {
   return (neuron0x27bc2c0()*-0.0346794);
}

double NNfunction-ss_uLcR::synapse0x27d2690() {
   return (neuron0x27bcc90()*1.39602);
}

double NNfunction-ss_uLcR::synapse0x27d26d0() {
   return (neuron0x27bd660()*-0.179961);
}

double NNfunction-ss_uLcR::synapse0x27d2cb0() {
   return (neuron0x27be030()*0.593203);
}

double NNfunction-ss_uLcR::synapse0x27d2cf0() {
   return (neuron0x27bea00()*-0.986799);
}

double NNfunction-ss_uLcR::synapse0x27d2d30() {
   return (neuron0x27bf3d0()*0.522578);
}

double NNfunction-ss_uLcR::synapse0x27d2d70() {
   return (neuron0x27bfda0()*-0.0932051);
}

double NNfunction-ss_uLcR::synapse0x27d2db0() {
   return (neuron0x27c0770()*0.0654283);
}

double NNfunction-ss_uLcR::synapse0x27d2df0() {
   return (neuron0x27c1350()*0.0823836);
}

double NNfunction-ss_uLcR::synapse0x27d2e30() {
   return (neuron0x27c1d20()*0.0984615);
}

double NNfunction-ss_uLcR::synapse0x27d2e70() {
   return (neuron0x27b2ba0()*-1.0505);
}

double NNfunction-ss_uLcR::synapse0x27d2eb0() {
   return (neuron0x27b3570()*-0.0585277);
}

double NNfunction-ss_uLcR::synapse0x27d2ef0() {
   return (neuron0x27b3f40()*-1.01432);
}

double NNfunction-ss_uLcR::synapse0x27d2f30() {
   return (neuron0x27c6580()*-0.0801419);
}

double NNfunction-ss_uLcR::synapse0x27d2f70() {
   return (neuron0x27c6e30()*0.154602);
}

double NNfunction-ss_uLcR::synapse0x27d2fb0() {
   return (neuron0x27c7800()*-0.0814007);
}

double NNfunction-ss_uLcR::synapse0x27d2ff0() {
   return (neuron0x27c81d0()*-0.00898303);
}

double NNfunction-ss_uLcR::synapse0x27d3250() {
   return (neuron0x27cf3d0()*-5.41318);
}

double NNfunction-ss_uLcR::synapse0x27d3290() {
   return (neuron0x27cf770()*-5.35304);
}

double NNfunction-ss_uLcR::synapse0x27d32d0() {
   return (neuron0x27cfc10()*-4.27918);
}

double NNfunction-ss_uLcR::synapse0x27d3310() {
   return (neuron0x27d0d70()*-3.53452);
}

double NNfunction-ss_uLcR::synapse0x27d3350() {
   return (neuron0x27d1ed0()*-4.31945);
}

