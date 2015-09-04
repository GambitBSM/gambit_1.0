#include "NNfunction_ss_dLuL.h"
#include <cmath>

double NNfunction_ss_dLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5231)/15.3095;
   input1 = (in1 - -1.56282)/1151.72;
   input2 = (in2 - 662.861)/625.604;
   input3 = (in3 - -56.1744)/831.978;
   input4 = (in4 - 1066.47)/957.285;
   input5 = (in5 - 895.372)/946.397;
   input6 = (in6 - 909.4)/950.135;
   input7 = (in7 - 926.404)/934.84;
   input8 = (in8 - 930.623)/977.102;
   input9 = (in9 - 903.936)/954.874;
   input10 = (in10 - 992.24)/958.605;
   input11 = (in11 - 409.229)/401.514;
   input12 = (in12 - 729.306)/877.067;
   input13 = (in13 - 508.444)/528.936;
   input14 = (in14 - 720.37)/817.702;
   input15 = (in15 - 724.166)/821.067;
   input16 = (in16 - 538.192)/564.944;
   input17 = (in17 - 767.458)/905.254;
   input18 = (in18 - 754.533)/902.161;
   input19 = (in19 - 807.741)/886.078;
   input20 = (in20 - -4.64811)/492.893;
   input21 = (in21 - 2.19772)/1162.73;
   input22 = (in22 - 10.3851)/1204.96;
   input23 = (in23 - -192.127)/596.37;
   switch(index) {
     case 0:
         return neuron0x34b7680();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLuL::Value(int index, double* input) {
   input0 = (input[0] - 23.5231)/15.3095;
   input1 = (input[1] - -1.56282)/1151.72;
   input2 = (input[2] - 662.861)/625.604;
   input3 = (input[3] - -56.1744)/831.978;
   input4 = (input[4] - 1066.47)/957.285;
   input5 = (input[5] - 895.372)/946.397;
   input6 = (input[6] - 909.4)/950.135;
   input7 = (input[7] - 926.404)/934.84;
   input8 = (input[8] - 930.623)/977.102;
   input9 = (input[9] - 903.936)/954.874;
   input10 = (input[10] - 992.24)/958.605;
   input11 = (input[11] - 409.229)/401.514;
   input12 = (input[12] - 729.306)/877.067;
   input13 = (input[13] - 508.444)/528.936;
   input14 = (input[14] - 720.37)/817.702;
   input15 = (input[15] - 724.166)/821.067;
   input16 = (input[16] - 538.192)/564.944;
   input17 = (input[17] - 767.458)/905.254;
   input18 = (input[18] - 754.533)/902.161;
   input19 = (input[19] - 807.741)/886.078;
   input20 = (input[20] - -4.64811)/492.893;
   input21 = (input[21] - 2.19772)/1162.73;
   input22 = (input[22] - 10.3851)/1204.96;
   input23 = (input[23] - -192.127)/596.37;
   switch(index) {
     case 0:
         return neuron0x34b7680();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLuL::neuron0x34826f0() {
   return input0;
}

double NNfunction_ss_dLuL::neuron0x34829a0() {
   return input1;
}

double NNfunction_ss_dLuL::neuron0x3482ce0() {
   return input2;
}

double NNfunction_ss_dLuL::neuron0x3483020() {
   return input3;
}

double NNfunction_ss_dLuL::neuron0x3483360() {
   return input4;
}

double NNfunction_ss_dLuL::neuron0x34836a0() {
   return input5;
}

double NNfunction_ss_dLuL::neuron0x34839e0() {
   return input6;
}

double NNfunction_ss_dLuL::neuron0x3483d20() {
   return input7;
}

double NNfunction_ss_dLuL::neuron0x3484060() {
   return input8;
}

double NNfunction_ss_dLuL::neuron0x34843a0() {
   return input9;
}

double NNfunction_ss_dLuL::neuron0x34846e0() {
   return input10;
}

double NNfunction_ss_dLuL::neuron0x3484a20() {
   return input11;
}

double NNfunction_ss_dLuL::neuron0x3484d60() {
   return input12;
}

double NNfunction_ss_dLuL::neuron0x34850a0() {
   return input13;
}

double NNfunction_ss_dLuL::neuron0x34853e0() {
   return input14;
}

double NNfunction_ss_dLuL::neuron0x3485720() {
   return input15;
}

double NNfunction_ss_dLuL::neuron0x3485a60() {
   return input16;
}

double NNfunction_ss_dLuL::neuron0x3485fc0() {
   return input17;
}

double NNfunction_ss_dLuL::neuron0x3486300() {
   return input18;
}

double NNfunction_ss_dLuL::neuron0x3486640() {
   return input19;
}

double NNfunction_ss_dLuL::neuron0x3486980() {
   return input20;
}

double NNfunction_ss_dLuL::neuron0x3486cc0() {
   return input21;
}

double NNfunction_ss_dLuL::neuron0x3487000() {
   return input22;
}

double NNfunction_ss_dLuL::neuron0x3487340() {
   return input23;
}

double NNfunction_ss_dLuL::input0x34877b0() {
   double input = 0.647872;
   input += synapse0x3487af0();
   input += synapse0x3487b30();
   input += synapse0x3487b70();
   input += synapse0x3487bb0();
   input += synapse0x3487bf0();
   input += synapse0x3487c30();
   input += synapse0x3487c70();
   input += synapse0x3487cb0();
   input += synapse0x3487cf0();
   input += synapse0x3487d30();
   input += synapse0x3487d70();
   input += synapse0x3487db0();
   input += synapse0x3487df0();
   input += synapse0x3487e30();
   input += synapse0x3487e70();
   input += synapse0x3487eb0();
   input += synapse0x3487940();
   input += synapse0x3487980();
   input += synapse0x323e8f0();
   input += synapse0x323e930();
   input += synapse0x3487ef0();
   input += synapse0x3487f30();
   input += synapse0x3487f70();
   input += synapse0x3487fb0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34877b0() {
   double input = input0x34877b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3487ff0() {
   double input = -0.642306;
   input += synapse0x3488330();
   input += synapse0x3488370();
   input += synapse0x34883b0();
   input += synapse0x34883f0();
   input += synapse0x3488430();
   input += synapse0x3488470();
   input += synapse0x34884b0();
   input += synapse0x34884f0();
   input += synapse0x3488530();
   input += synapse0x323e740();
   input += synapse0x323e780();
   input += synapse0x323e7c0();
   input += synapse0x323e800();
   input += synapse0x3488780();
   input += synapse0x34887c0();
   input += synapse0x3488800();
   input += synapse0x3488180();
   input += synapse0x34881c0();
   input += synapse0x3488950();
   input += synapse0x3488990();
   input += synapse0x34889d0();
   input += synapse0x3488a10();
   input += synapse0x3488a50();
   input += synapse0x3488a90();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3487ff0() {
   double input = input0x3487ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3488ad0() {
   double input = 0.0230111;
   input += synapse0x3488e10();
   input += synapse0x3488e50();
   input += synapse0x3488e90();
   input += synapse0x3488ed0();
   input += synapse0x3488f10();
   input += synapse0x3488f50();
   input += synapse0x3488f90();
   input += synapse0x3488fd0();
   input += synapse0x3489010();
   input += synapse0x3489050();
   input += synapse0x3489090();
   input += synapse0x34890d0();
   input += synapse0x3489110();
   input += synapse0x3489150();
   input += synapse0x3489190();
   input += synapse0x34891d0();
   input += synapse0x3488c60();
   input += synapse0x3488ca0();
   input += synapse0x324c790();
   input += synapse0x324c7d0();
   input += synapse0x348b100();
   input += synapse0x348b140();
   input += synapse0x3482430();
   input += synapse0x3482470();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3488ad0() {
   double input = input0x3488ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x324cef0() {
   double input = 1.33304;
   input += synapse0x324d080();
   input += synapse0x3488690();
   input += synapse0x34886d0();
   input += synapse0x3488710();
   input += synapse0x3489320();
   input += synapse0x3489360();
   input += synapse0x34893a0();
   input += synapse0x34893e0();
   input += synapse0x3489420();
   input += synapse0x3489460();
   input += synapse0x34894a0();
   input += synapse0x34894e0();
   input += synapse0x3489520();
   input += synapse0x3489560();
   input += synapse0x34895a0();
   input += synapse0x34895e0();
   input += synapse0x34824b0();
   input += synapse0x34824f0();
   input += synapse0x3489730();
   input += synapse0x3489770();
   input += synapse0x34897b0();
   input += synapse0x34897f0();
   input += synapse0x3489830();
   input += synapse0x3489870();
   return input;
}

double NNfunction_ss_dLuL::neuron0x324cef0() {
   double input = input0x324cef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34898b0() {
   double input = 0.0559746;
   input += synapse0x3489bf0();
   input += synapse0x3489c30();
   input += synapse0x3489c70();
   input += synapse0x3489cb0();
   input += synapse0x3489cf0();
   input += synapse0x3489d30();
   input += synapse0x3489d70();
   input += synapse0x3489db0();
   input += synapse0x3489df0();
   input += synapse0x3489e30();
   input += synapse0x3489e70();
   input += synapse0x3489eb0();
   input += synapse0x3489ef0();
   input += synapse0x3489f30();
   input += synapse0x3489f70();
   input += synapse0x3489fb0();
   input += synapse0x348a100();
   input += synapse0x3489a40();
   input += synapse0x3489a80();
   input += synapse0x348b240();
   input += synapse0x348b280();
   input += synapse0x348b2c0();
   input += synapse0x348b300();
   input += synapse0x348b340();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34898b0() {
   double input = input0x34898b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x348b380() {
   double input = -0.14521;
   input += synapse0x348b6c0();
   input += synapse0x348b700();
   input += synapse0x348b740();
   input += synapse0x348b780();
   input += synapse0x348b7c0();
   input += synapse0x348b800();
   input += synapse0x348b840();
   input += synapse0x348b880();
   input += synapse0x348b8c0();
   input += synapse0x324cae0();
   input += synapse0x324cb20();
   input += synapse0x324cb60();
   input += synapse0x324cba0();
   input += synapse0x324cbe0();
   input += synapse0x324cc20();
   input += synapse0x324cc60();
   input += synapse0x348b510();
   input += synapse0x348b550();
   input += synapse0x324cdb0();
   input += synapse0x324cdf0();
   input += synapse0x324ce30();
   input += synapse0x324ce70();
   input += synapse0x324ceb0();
   input += synapse0x348c110();
   return input;
}

double NNfunction_ss_dLuL::neuron0x348b380() {
   double input = input0x348b380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x348c150() {
   double input = -0.784975;
   input += synapse0x348c490();
   input += synapse0x348c4d0();
   input += synapse0x348c510();
   input += synapse0x348c550();
   input += synapse0x348c590();
   input += synapse0x348c5d0();
   input += synapse0x348c610();
   input += synapse0x348c650();
   input += synapse0x348c690();
   input += synapse0x348c6d0();
   input += synapse0x348c710();
   input += synapse0x348c750();
   input += synapse0x348c790();
   input += synapse0x348c7d0();
   input += synapse0x348c810();
   input += synapse0x348c850();
   input += synapse0x348c2e0();
   input += synapse0x348c320();
   input += synapse0x348c9a0();
   input += synapse0x348c9e0();
   input += synapse0x348ca20();
   input += synapse0x348ca60();
   input += synapse0x348caa0();
   input += synapse0x348cae0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x348c150() {
   double input = input0x348c150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x348cb20() {
   double input = -0.368699;
   input += synapse0x348ce60();
   input += synapse0x348cea0();
   input += synapse0x348cee0();
   input += synapse0x348cf20();
   input += synapse0x348cf60();
   input += synapse0x348cfa0();
   input += synapse0x348cfe0();
   input += synapse0x348d020();
   input += synapse0x348d060();
   input += synapse0x348d0a0();
   input += synapse0x348d0e0();
   input += synapse0x348d120();
   input += synapse0x348d160();
   input += synapse0x348d1a0();
   input += synapse0x348d1e0();
   input += synapse0x348d220();
   input += synapse0x348ccb0();
   input += synapse0x348ccf0();
   input += synapse0x348d370();
   input += synapse0x348d3b0();
   input += synapse0x348d3f0();
   input += synapse0x348d430();
   input += synapse0x348d470();
   input += synapse0x348d4b0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x348cb20() {
   double input = input0x348cb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x348d4f0() {
   double input = 1.38084;
   input += synapse0x3485eb0();
   input += synapse0x3485ef0();
   input += synapse0x3485f30();
   input += synapse0x3485f70();
   input += synapse0x348da40();
   input += synapse0x348da80();
   input += synapse0x348dac0();
   input += synapse0x348db00();
   input += synapse0x348db40();
   input += synapse0x348db80();
   input += synapse0x348dbc0();
   input += synapse0x348dc00();
   input += synapse0x348dc40();
   input += synapse0x348dc80();
   input += synapse0x348dcc0();
   input += synapse0x348dd00();
   input += synapse0x348d680();
   input += synapse0x348d6c0();
   input += synapse0x348de50();
   input += synapse0x348de90();
   input += synapse0x348ded0();
   input += synapse0x348df10();
   input += synapse0x348df50();
   input += synapse0x348df90();
   return input;
}

double NNfunction_ss_dLuL::neuron0x348d4f0() {
   double input = input0x348d4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x348dfd0() {
   double input = -0.297492;
   input += synapse0x348e310();
   input += synapse0x348e350();
   input += synapse0x348e390();
   input += synapse0x348e3d0();
   input += synapse0x348e410();
   input += synapse0x348e450();
   input += synapse0x348e490();
   input += synapse0x348e4d0();
   input += synapse0x348e510();
   input += synapse0x348e550();
   input += synapse0x348e590();
   input += synapse0x348e5d0();
   input += synapse0x348e610();
   input += synapse0x348e650();
   input += synapse0x348e690();
   input += synapse0x348e6d0();
   input += synapse0x348e160();
   input += synapse0x348e1a0();
   input += synapse0x348e820();
   input += synapse0x348e860();
   input += synapse0x348e8a0();
   input += synapse0x348e8e0();
   input += synapse0x348e920();
   input += synapse0x348e960();
   return input;
}

double NNfunction_ss_dLuL::neuron0x348dfd0() {
   double input = input0x348dfd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x348e9a0() {
   double input = -2.57296;
   input += synapse0x348ece0();
   input += synapse0x348ed20();
   input += synapse0x348ed60();
   input += synapse0x348eda0();
   input += synapse0x348ede0();
   input += synapse0x348ee20();
   input += synapse0x348ee60();
   input += synapse0x348eea0();
   input += synapse0x348eee0();
   input += synapse0x348ef20();
   input += synapse0x348ef60();
   input += synapse0x348efa0();
   input += synapse0x348efe0();
   input += synapse0x348f020();
   input += synapse0x348f060();
   input += synapse0x348f0a0();
   input += synapse0x348eb30();
   input += synapse0x348eb70();
   input += synapse0x348b900();
   input += synapse0x348b940();
   input += synapse0x348b980();
   input += synapse0x348b9c0();
   input += synapse0x348ba00();
   input += synapse0x348ba40();
   return input;
}

double NNfunction_ss_dLuL::neuron0x348e9a0() {
   double input = input0x348e9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x348ba80() {
   double input = -1.0373;
   input += synapse0x348bdc0();
   input += synapse0x348be00();
   input += synapse0x348be40();
   input += synapse0x348be80();
   input += synapse0x348bec0();
   input += synapse0x348bf00();
   input += synapse0x348bf40();
   input += synapse0x348bf80();
   input += synapse0x348bfc0();
   input += synapse0x348c000();
   input += synapse0x348c040();
   input += synapse0x348c080();
   input += synapse0x348c0c0();
   input += synapse0x3490200();
   input += synapse0x3490240();
   input += synapse0x3490280();
   input += synapse0x348bc10();
   input += synapse0x348bc50();
   input += synapse0x34903d0();
   input += synapse0x3490410();
   input += synapse0x3490450();
   input += synapse0x3490490();
   input += synapse0x34904d0();
   input += synapse0x3490510();
   return input;
}

double NNfunction_ss_dLuL::neuron0x348ba80() {
   double input = input0x348ba80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3490550() {
   double input = 0.792653;
   input += synapse0x3490890();
   input += synapse0x34908d0();
   input += synapse0x3490910();
   input += synapse0x3490950();
   input += synapse0x3490990();
   input += synapse0x34909d0();
   input += synapse0x3490a10();
   input += synapse0x3490a50();
   input += synapse0x3490a90();
   input += synapse0x3490ad0();
   input += synapse0x3490b10();
   input += synapse0x3490b50();
   input += synapse0x3490b90();
   input += synapse0x3490bd0();
   input += synapse0x3490c10();
   input += synapse0x3490c50();
   input += synapse0x34906e0();
   input += synapse0x3490720();
   input += synapse0x3490da0();
   input += synapse0x3490de0();
   input += synapse0x3490e20();
   input += synapse0x3490e60();
   input += synapse0x3490ea0();
   input += synapse0x3490ee0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3490550() {
   double input = input0x3490550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3490f20() {
   double input = 0.567847;
   input += synapse0x3491260();
   input += synapse0x34912a0();
   input += synapse0x34912e0();
   input += synapse0x3491320();
   input += synapse0x3491360();
   input += synapse0x34913a0();
   input += synapse0x34913e0();
   input += synapse0x3491420();
   input += synapse0x3491460();
   input += synapse0x34914a0();
   input += synapse0x34914e0();
   input += synapse0x3491520();
   input += synapse0x3491560();
   input += synapse0x34915a0();
   input += synapse0x34915e0();
   input += synapse0x3491620();
   input += synapse0x34910b0();
   input += synapse0x34910f0();
   input += synapse0x3491770();
   input += synapse0x34917b0();
   input += synapse0x34917f0();
   input += synapse0x3491830();
   input += synapse0x3491870();
   input += synapse0x34918b0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3490f20() {
   double input = input0x3490f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34918f0() {
   double input = 0.642312;
   input += synapse0x3491c30();
   input += synapse0x3491c70();
   input += synapse0x3491cb0();
   input += synapse0x3491cf0();
   input += synapse0x3491d30();
   input += synapse0x3491d70();
   input += synapse0x3491db0();
   input += synapse0x3491df0();
   input += synapse0x3491e30();
   input += synapse0x3491e70();
   input += synapse0x3491eb0();
   input += synapse0x3491ef0();
   input += synapse0x3491f30();
   input += synapse0x3491f70();
   input += synapse0x3491fb0();
   input += synapse0x3491ff0();
   input += synapse0x3491a80();
   input += synapse0x3491ac0();
   input += synapse0x3492140();
   input += synapse0x3492180();
   input += synapse0x34921c0();
   input += synapse0x3492200();
   input += synapse0x3492240();
   input += synapse0x3492280();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34918f0() {
   double input = input0x34918f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34922c0() {
   double input = -1.39695;
   input += synapse0x3492600();
   input += synapse0x3482880();
   input += synapse0x34828c0();
   input += synapse0x3482bc0();
   input += synapse0x3482c00();
   input += synapse0x3482f00();
   input += synapse0x3482f40();
   input += synapse0x3483240();
   input += synapse0x3483280();
   input += synapse0x3483580();
   input += synapse0x34835c0();
   input += synapse0x34838c0();
   input += synapse0x3483900();
   input += synapse0x3483c00();
   input += synapse0x3483c40();
   input += synapse0x3483f40();
   input += synapse0x3483f80();
   input += synapse0x3484280();
   input += synapse0x34842c0();
   input += synapse0x34845c0();
   input += synapse0x3484600();
   input += synapse0x3484900();
   input += synapse0x3484940();
   input += synapse0x3484c40();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34922c0() {
   double input = input0x34922c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34940d0() {
   double input = 2.36815;
   input += synapse0x3484c80();
   input += synapse0x3485940();
   input += synapse0x3485980();
   input += synapse0x3492450();
   input += synapse0x3492490();
   input += synapse0x3485c80();
   input += synapse0x3485cc0();
   input += synapse0x34861e0();
   input += synapse0x3486220();
   input += synapse0x3486520();
   input += synapse0x3486560();
   input += synapse0x3486860();
   input += synapse0x34868a0();
   input += synapse0x3486ba0();
   input += synapse0x3486be0();
   input += synapse0x3486ee0();
   input += synapse0x3486f20();
   input += synapse0x3487220();
   input += synapse0x3487260();
   input += synapse0x3487560();
   input += synapse0x34875a0();
   input += synapse0x3484f80();
   input += synapse0x3484fc0();
   input += synapse0x3494370();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34940d0() {
   double input = input0x34940d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34943b0() {
   double input = 1.33724;
   input += synapse0x34946f0();
   input += synapse0x3494730();
   input += synapse0x3494770();
   input += synapse0x34947b0();
   input += synapse0x34947f0();
   input += synapse0x3494830();
   input += synapse0x3494870();
   input += synapse0x34948b0();
   input += synapse0x34948f0();
   input += synapse0x3494930();
   input += synapse0x3494970();
   input += synapse0x34949b0();
   input += synapse0x34949f0();
   input += synapse0x3494a30();
   input += synapse0x3494a70();
   input += synapse0x3494ab0();
   input += synapse0x3494540();
   input += synapse0x3494580();
   input += synapse0x3494c00();
   input += synapse0x3494c40();
   input += synapse0x3494c80();
   input += synapse0x3494cc0();
   input += synapse0x3494d00();
   input += synapse0x3494d40();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34943b0() {
   double input = input0x34943b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3494d80() {
   double input = 0.819736;
   input += synapse0x34950c0();
   input += synapse0x3495100();
   input += synapse0x3495140();
   input += synapse0x3495180();
   input += synapse0x34951c0();
   input += synapse0x3495200();
   input += synapse0x3495240();
   input += synapse0x3495280();
   input += synapse0x34952c0();
   input += synapse0x3495300();
   input += synapse0x3495340();
   input += synapse0x3495380();
   input += synapse0x34953c0();
   input += synapse0x3495400();
   input += synapse0x3495440();
   input += synapse0x3495480();
   input += synapse0x3494f10();
   input += synapse0x3494f50();
   input += synapse0x34955d0();
   input += synapse0x3495610();
   input += synapse0x3495650();
   input += synapse0x3495690();
   input += synapse0x34956d0();
   input += synapse0x3495710();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3494d80() {
   double input = input0x3494d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3495750() {
   double input = 0.0995307;
   input += synapse0x3495a90();
   input += synapse0x3495ad0();
   input += synapse0x3495b10();
   input += synapse0x3495b50();
   input += synapse0x3495b90();
   input += synapse0x3495bd0();
   input += synapse0x3495c10();
   input += synapse0x3495c50();
   input += synapse0x3495c90();
   input += synapse0x3495cd0();
   input += synapse0x3495d10();
   input += synapse0x3495d50();
   input += synapse0x3495d90();
   input += synapse0x3495dd0();
   input += synapse0x3495e10();
   input += synapse0x3495e50();
   input += synapse0x34958e0();
   input += synapse0x3495920();
   input += synapse0x3495fa0();
   input += synapse0x3495fe0();
   input += synapse0x3496020();
   input += synapse0x3496060();
   input += synapse0x34960a0();
   input += synapse0x34960e0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3495750() {
   double input = input0x3495750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3496120() {
   double input = -0.260554;
   input += synapse0x3496460();
   input += synapse0x34964a0();
   input += synapse0x34964e0();
   input += synapse0x3496520();
   input += synapse0x3496560();
   input += synapse0x34965a0();
   input += synapse0x34965e0();
   input += synapse0x3496620();
   input += synapse0x3496660();
   input += synapse0x34966a0();
   input += synapse0x34966e0();
   input += synapse0x3496720();
   input += synapse0x3496760();
   input += synapse0x34967a0();
   input += synapse0x34967e0();
   input += synapse0x3496820();
   input += synapse0x34962b0();
   input += synapse0x34962f0();
   input += synapse0x3496970();
   input += synapse0x34969b0();
   input += synapse0x34969f0();
   input += synapse0x3496a30();
   input += synapse0x3496a70();
   input += synapse0x3496ab0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3496120() {
   double input = input0x3496120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3496af0() {
   double input = 1.32161;
   input += synapse0x3496e30();
   input += synapse0x3496e70();
   input += synapse0x3496eb0();
   input += synapse0x3496ef0();
   input += synapse0x3496f30();
   input += synapse0x3496f70();
   input += synapse0x3496fb0();
   input += synapse0x3496ff0();
   input += synapse0x3497030();
   input += synapse0x348f1f0();
   input += synapse0x348f230();
   input += synapse0x348f270();
   input += synapse0x348f2b0();
   input += synapse0x348f2f0();
   input += synapse0x348f330();
   input += synapse0x348f370();
   input += synapse0x3496c80();
   input += synapse0x3496cc0();
   input += synapse0x348f4c0();
   input += synapse0x348f500();
   input += synapse0x348f540();
   input += synapse0x348f580();
   input += synapse0x348f5c0();
   input += synapse0x348f600();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3496af0() {
   double input = input0x3496af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x348f640() {
   double input = 3.09772;
   input += synapse0x348f980();
   input += synapse0x348f9c0();
   input += synapse0x348fa00();
   input += synapse0x348fa40();
   input += synapse0x348fa80();
   input += synapse0x348fac0();
   input += synapse0x348fb00();
   input += synapse0x348fb40();
   input += synapse0x348fb80();
   input += synapse0x348fbc0();
   input += synapse0x348fc00();
   input += synapse0x348fc40();
   input += synapse0x348fc80();
   input += synapse0x348fcc0();
   input += synapse0x348fd00();
   input += synapse0x348fd40();
   input += synapse0x348f7d0();
   input += synapse0x348f810();
   input += synapse0x348fe90();
   input += synapse0x348fed0();
   input += synapse0x348ff10();
   input += synapse0x348ff50();
   input += synapse0x348ff90();
   input += synapse0x348ffd0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x348f640() {
   double input = input0x348f640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3490010() {
   double input = 1.87306;
   input += synapse0x34901a0();
   input += synapse0x3499230();
   input += synapse0x3499270();
   input += synapse0x34992b0();
   input += synapse0x34992f0();
   input += synapse0x3499330();
   input += synapse0x3499370();
   input += synapse0x34993b0();
   input += synapse0x34993f0();
   input += synapse0x3499430();
   input += synapse0x3499470();
   input += synapse0x34994b0();
   input += synapse0x34994f0();
   input += synapse0x3499530();
   input += synapse0x3499570();
   input += synapse0x34995b0();
   input += synapse0x3499080();
   input += synapse0x34990c0();
   input += synapse0x3499700();
   input += synapse0x3499740();
   input += synapse0x3499780();
   input += synapse0x34997c0();
   input += synapse0x3499800();
   input += synapse0x3499840();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3490010() {
   double input = input0x3490010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3499880() {
   double input = 1.25273;
   input += synapse0x3499bc0();
   input += synapse0x3499c00();
   input += synapse0x3499c40();
   input += synapse0x3499c80();
   input += synapse0x3499cc0();
   input += synapse0x3499d00();
   input += synapse0x3499d40();
   input += synapse0x3499d80();
   input += synapse0x3499dc0();
   input += synapse0x3499e00();
   input += synapse0x3499e40();
   input += synapse0x3499e80();
   input += synapse0x3499ec0();
   input += synapse0x3499f00();
   input += synapse0x3499f40();
   input += synapse0x3499f80();
   input += synapse0x3499a10();
   input += synapse0x3499a50();
   input += synapse0x349a0d0();
   input += synapse0x349a110();
   input += synapse0x349a150();
   input += synapse0x349a190();
   input += synapse0x349a1d0();
   input += synapse0x349a210();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3499880() {
   double input = input0x3499880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x349a250() {
   double input = 0.9939;
   input += synapse0x349a590();
   input += synapse0x349a5d0();
   input += synapse0x349a610();
   input += synapse0x349a650();
   input += synapse0x349a690();
   input += synapse0x349a6d0();
   input += synapse0x349a710();
   input += synapse0x349a750();
   input += synapse0x349a790();
   input += synapse0x349a7d0();
   input += synapse0x349a810();
   input += synapse0x349a850();
   input += synapse0x349a890();
   input += synapse0x349a8d0();
   input += synapse0x349a910();
   input += synapse0x349a950();
   input += synapse0x349a3e0();
   input += synapse0x349a420();
   input += synapse0x349aaa0();
   input += synapse0x349aae0();
   input += synapse0x349ab20();
   input += synapse0x349ab60();
   input += synapse0x349aba0();
   input += synapse0x349abe0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x349a250() {
   double input = input0x349a250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x349ac20() {
   double input = 0.118934;
   input += synapse0x349af60();
   input += synapse0x349afa0();
   input += synapse0x349afe0();
   input += synapse0x349b020();
   input += synapse0x349b060();
   input += synapse0x349b0a0();
   input += synapse0x349b0e0();
   input += synapse0x349b120();
   input += synapse0x349b160();
   input += synapse0x349b1a0();
   input += synapse0x349b1e0();
   input += synapse0x349b220();
   input += synapse0x349b260();
   input += synapse0x349b2a0();
   input += synapse0x349b2e0();
   input += synapse0x349b320();
   input += synapse0x349adb0();
   input += synapse0x349adf0();
   input += synapse0x349b470();
   input += synapse0x349b4b0();
   input += synapse0x349b4f0();
   input += synapse0x349b530();
   input += synapse0x349b570();
   input += synapse0x349b5b0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x349ac20() {
   double input = input0x349ac20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x349b5f0() {
   double input = -1.28687;
   input += synapse0x349b930();
   input += synapse0x349b970();
   input += synapse0x349b9b0();
   input += synapse0x349b9f0();
   input += synapse0x349ba30();
   input += synapse0x349ba70();
   input += synapse0x349bab0();
   input += synapse0x349baf0();
   input += synapse0x349bb30();
   input += synapse0x349bb70();
   input += synapse0x349bbb0();
   input += synapse0x349bbf0();
   input += synapse0x349bc30();
   input += synapse0x349bc70();
   input += synapse0x349bcb0();
   input += synapse0x349bcf0();
   input += synapse0x349b780();
   input += synapse0x349b7c0();
   input += synapse0x349be40();
   input += synapse0x349be80();
   input += synapse0x349bec0();
   input += synapse0x349bf00();
   input += synapse0x349bf40();
   input += synapse0x349bf80();
   return input;
}

double NNfunction_ss_dLuL::neuron0x349b5f0() {
   double input = input0x349b5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x349bfc0() {
   double input = 1.15243;
   input += synapse0x349c300();
   input += synapse0x349c340();
   input += synapse0x349c380();
   input += synapse0x349c3c0();
   input += synapse0x349c400();
   input += synapse0x349c440();
   input += synapse0x349c480();
   input += synapse0x349c4c0();
   input += synapse0x349c500();
   input += synapse0x349c540();
   input += synapse0x349c580();
   input += synapse0x349c5c0();
   input += synapse0x349c600();
   input += synapse0x349c640();
   input += synapse0x349c680();
   input += synapse0x349c6c0();
   input += synapse0x349c150();
   input += synapse0x349c190();
   input += synapse0x349c810();
   input += synapse0x349c850();
   input += synapse0x349c890();
   input += synapse0x349c8d0();
   input += synapse0x349c910();
   input += synapse0x349c950();
   return input;
}

double NNfunction_ss_dLuL::neuron0x349bfc0() {
   double input = input0x349bfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x349c990() {
   double input = 1.46644;
   input += synapse0x349ccd0();
   input += synapse0x349cd10();
   input += synapse0x349cd50();
   input += synapse0x349cd90();
   input += synapse0x349cdd0();
   input += synapse0x349ce10();
   input += synapse0x349ce50();
   input += synapse0x349ce90();
   input += synapse0x349ced0();
   input += synapse0x349cf10();
   input += synapse0x349cf50();
   input += synapse0x349cf90();
   input += synapse0x349cfd0();
   input += synapse0x349d010();
   input += synapse0x349d050();
   input += synapse0x349d090();
   input += synapse0x349cb20();
   input += synapse0x349cb60();
   input += synapse0x349d1e0();
   input += synapse0x349d220();
   input += synapse0x349d260();
   input += synapse0x349d2a0();
   input += synapse0x349d2e0();
   input += synapse0x349d320();
   return input;
}

double NNfunction_ss_dLuL::neuron0x349c990() {
   double input = input0x349c990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x349d360() {
   double input = -1.83353;
   input += synapse0x349d6a0();
   input += synapse0x349d6e0();
   input += synapse0x349d720();
   input += synapse0x349d760();
   input += synapse0x349d7a0();
   input += synapse0x349d7e0();
   input += synapse0x349d820();
   input += synapse0x349d860();
   input += synapse0x349d8a0();
   input += synapse0x349d8e0();
   input += synapse0x349d920();
   input += synapse0x349d960();
   input += synapse0x349d9a0();
   input += synapse0x349d9e0();
   input += synapse0x349da20();
   input += synapse0x349da60();
   input += synapse0x349d4f0();
   input += synapse0x349d530();
   input += synapse0x349dbb0();
   input += synapse0x349dbf0();
   input += synapse0x349dc30();
   input += synapse0x349dc70();
   input += synapse0x349dcb0();
   input += synapse0x349dcf0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x349d360() {
   double input = input0x349d360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x349dd30() {
   double input = 1.59431;
   input += synapse0x349e070();
   input += synapse0x3492640();
   input += synapse0x3492680();
   input += synapse0x34926c0();
   input += synapse0x3492910();
   input += synapse0x3492950();
   input += synapse0x3492990();
   input += synapse0x3492be0();
   input += synapse0x3492c20();
   input += synapse0x3492e70();
   input += synapse0x3492eb0();
   input += synapse0x3492ef0();
   input += synapse0x3493140();
   input += synapse0x3493180();
   input += synapse0x34933d0();
   input += synapse0x3493410();
   input += synapse0x349dec0();
   input += synapse0x349df00();
   input += synapse0x3493560();
   input += synapse0x3493a70();
   input += synapse0x3493ab0();
   input += synapse0x3493af0();
   input += synapse0x3493d40();
   input += synapse0x3493d80();
   return input;
}

double NNfunction_ss_dLuL::neuron0x349dd30() {
   double input = input0x349dd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3493dc0() {
   double input = 0.459219;
   input += synapse0x3493630();
   input += synapse0x3493670();
   input += synapse0x34936b0();
   input += synapse0x34936f0();
   input += synapse0x3494070();
   input += synapse0x34a03c0();
   input += synapse0x34a0400();
   input += synapse0x34a0440();
   input += synapse0x34a0480();
   input += synapse0x34a04c0();
   input += synapse0x34a0500();
   input += synapse0x34a0540();
   input += synapse0x34a0580();
   input += synapse0x34a05c0();
   input += synapse0x34a0600();
   input += synapse0x34a0640();
   input += synapse0x3493f50();
   input += synapse0x3493f90();
   input += synapse0x34a0790();
   input += synapse0x34a07d0();
   input += synapse0x34a0810();
   input += synapse0x34a0850();
   input += synapse0x34a0890();
   input += synapse0x34a08d0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3493dc0() {
   double input = input0x3493dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a0910() {
   double input = 1.58939;
   input += synapse0x34a0c50();
   input += synapse0x34a0c90();
   input += synapse0x34a0cd0();
   input += synapse0x34a0d10();
   input += synapse0x34a0d50();
   input += synapse0x34a0d90();
   input += synapse0x34a0dd0();
   input += synapse0x34a0e10();
   input += synapse0x34a0e50();
   input += synapse0x34a0e90();
   input += synapse0x34a0ed0();
   input += synapse0x34a0f10();
   input += synapse0x34a0f50();
   input += synapse0x34a0f90();
   input += synapse0x34a0fd0();
   input += synapse0x34a1010();
   input += synapse0x34a0aa0();
   input += synapse0x34a0ae0();
   input += synapse0x34a1160();
   input += synapse0x34a11a0();
   input += synapse0x34a11e0();
   input += synapse0x34a1220();
   input += synapse0x34a1260();
   input += synapse0x34a12a0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a0910() {
   double input = input0x34a0910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a12e0() {
   double input = -0.302866;
   input += synapse0x34a1620();
   input += synapse0x34a1660();
   input += synapse0x34a16a0();
   input += synapse0x34a16e0();
   input += synapse0x34a1720();
   input += synapse0x34a1760();
   input += synapse0x34a17a0();
   input += synapse0x34a17e0();
   input += synapse0x34a1820();
   input += synapse0x34a1860();
   input += synapse0x34a18a0();
   input += synapse0x34a18e0();
   input += synapse0x34a1920();
   input += synapse0x34a1960();
   input += synapse0x34a19a0();
   input += synapse0x34a19e0();
   input += synapse0x34a1470();
   input += synapse0x34a14b0();
   input += synapse0x34a1b30();
   input += synapse0x34a1b70();
   input += synapse0x34a1bb0();
   input += synapse0x34a1bf0();
   input += synapse0x34a1c30();
   input += synapse0x34a1c70();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a12e0() {
   double input = input0x34a12e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a1cb0() {
   double input = 1.04553;
   input += synapse0x34a1ff0();
   input += synapse0x34a2030();
   input += synapse0x34a2070();
   input += synapse0x34a20b0();
   input += synapse0x34a20f0();
   input += synapse0x34a2130();
   input += synapse0x34a2170();
   input += synapse0x34a21b0();
   input += synapse0x34a21f0();
   input += synapse0x34a2230();
   input += synapse0x34a2270();
   input += synapse0x34a22b0();
   input += synapse0x34a22f0();
   input += synapse0x34a2330();
   input += synapse0x34a2370();
   input += synapse0x34a23b0();
   input += synapse0x34a1e40();
   input += synapse0x34a1e80();
   input += synapse0x34a2500();
   input += synapse0x34a2540();
   input += synapse0x34a2580();
   input += synapse0x34a25c0();
   input += synapse0x34a2600();
   input += synapse0x34a2640();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a1cb0() {
   double input = input0x34a1cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a2680() {
   double input = -0.663503;
   input += synapse0x34a29c0();
   input += synapse0x34a2a00();
   input += synapse0x34a2a40();
   input += synapse0x34a2a80();
   input += synapse0x34a2ac0();
   input += synapse0x34a2b00();
   input += synapse0x34a2b40();
   input += synapse0x34a2b80();
   input += synapse0x34a2bc0();
   input += synapse0x34a2c00();
   input += synapse0x34a2c40();
   input += synapse0x34a2c80();
   input += synapse0x34a2cc0();
   input += synapse0x34a2d00();
   input += synapse0x34a2d40();
   input += synapse0x34a2d80();
   input += synapse0x34a2810();
   input += synapse0x34a2850();
   input += synapse0x34a2ed0();
   input += synapse0x34a2f10();
   input += synapse0x34a2f50();
   input += synapse0x34a2f90();
   input += synapse0x34a2fd0();
   input += synapse0x34a3010();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a2680() {
   double input = input0x34a2680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a3050() {
   double input = 1.9557;
   input += synapse0x34a3390();
   input += synapse0x34a33d0();
   input += synapse0x34a3410();
   input += synapse0x34a3450();
   input += synapse0x34a3490();
   input += synapse0x34a34d0();
   input += synapse0x34a3510();
   input += synapse0x34a3550();
   input += synapse0x34a3590();
   input += synapse0x34a35d0();
   input += synapse0x34a3610();
   input += synapse0x34a3650();
   input += synapse0x34a3690();
   input += synapse0x34a36d0();
   input += synapse0x34a3710();
   input += synapse0x34a3750();
   input += synapse0x34a31e0();
   input += synapse0x34a3220();
   input += synapse0x34a38a0();
   input += synapse0x34a38e0();
   input += synapse0x34a3920();
   input += synapse0x34a3960();
   input += synapse0x34a39a0();
   input += synapse0x34a39e0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a3050() {
   double input = input0x34a3050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a3a20() {
   double input = -0.211744;
   input += synapse0x34a3d60();
   input += synapse0x34a3da0();
   input += synapse0x34a3de0();
   input += synapse0x34a3e20();
   input += synapse0x34a3e60();
   input += synapse0x34a3ea0();
   input += synapse0x34a3ee0();
   input += synapse0x34a3f20();
   input += synapse0x34a3f60();
   input += synapse0x34a3fa0();
   input += synapse0x34a3fe0();
   input += synapse0x34a4020();
   input += synapse0x34a4060();
   input += synapse0x34a40a0();
   input += synapse0x34a40e0();
   input += synapse0x34a4120();
   input += synapse0x34a3bb0();
   input += synapse0x34a3bf0();
   input += synapse0x34a4270();
   input += synapse0x34a42b0();
   input += synapse0x34a42f0();
   input += synapse0x34a4330();
   input += synapse0x34a4370();
   input += synapse0x34a43b0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a3a20() {
   double input = input0x34a3a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a43f0() {
   double input = 0.56763;
   input += synapse0x34a4730();
   input += synapse0x34a4770();
   input += synapse0x34a47b0();
   input += synapse0x34a47f0();
   input += synapse0x34a4830();
   input += synapse0x34a4870();
   input += synapse0x34a48b0();
   input += synapse0x34a48f0();
   input += synapse0x34a4930();
   input += synapse0x34a4970();
   input += synapse0x34a49b0();
   input += synapse0x34a49f0();
   input += synapse0x34a4a30();
   input += synapse0x34a4a70();
   input += synapse0x34a4ab0();
   input += synapse0x34a4af0();
   input += synapse0x34a4580();
   input += synapse0x34a45c0();
   input += synapse0x34a4c40();
   input += synapse0x34a4c80();
   input += synapse0x34a4cc0();
   input += synapse0x34a4d00();
   input += synapse0x34a4d40();
   input += synapse0x34a4d80();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a43f0() {
   double input = input0x34a43f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a4dc0() {
   double input = -1.11433;
   input += synapse0x348d830();
   input += synapse0x348d870();
   input += synapse0x348d8b0();
   input += synapse0x348d8f0();
   input += synapse0x348d930();
   input += synapse0x348d970();
   input += synapse0x348d9b0();
   input += synapse0x348d9f0();
   input += synapse0x34a5510();
   input += synapse0x34a5550();
   input += synapse0x34a5590();
   input += synapse0x34a55d0();
   input += synapse0x34a5610();
   input += synapse0x34a5650();
   input += synapse0x34a5690();
   input += synapse0x34a56d0();
   input += synapse0x34a4f50();
   input += synapse0x34a4f90();
   input += synapse0x34a5820();
   input += synapse0x34a5860();
   input += synapse0x34a58a0();
   input += synapse0x34a58e0();
   input += synapse0x34a5920();
   input += synapse0x34a5960();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a4dc0() {
   double input = input0x34a4dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a59a0() {
   double input = 1.23313;
   input += synapse0x34a5ce0();
   input += synapse0x34a5d20();
   input += synapse0x34a5d60();
   input += synapse0x34a5da0();
   input += synapse0x34a5de0();
   input += synapse0x34a5e20();
   input += synapse0x34a5e60();
   input += synapse0x34a5ea0();
   input += synapse0x34a5ee0();
   input += synapse0x34a5f20();
   input += synapse0x34a5f60();
   input += synapse0x34a5fa0();
   input += synapse0x34a5fe0();
   input += synapse0x34a6020();
   input += synapse0x34a6060();
   input += synapse0x34a60a0();
   input += synapse0x34a5b30();
   input += synapse0x34a5b70();
   input += synapse0x34a61f0();
   input += synapse0x34a6230();
   input += synapse0x34a6270();
   input += synapse0x34a62b0();
   input += synapse0x34a62f0();
   input += synapse0x34a6330();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a59a0() {
   double input = input0x34a59a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34a6370() {
   double input = 0.5754;
   input += synapse0x34a66b0();
   input += synapse0x34a66f0();
   input += synapse0x34a6730();
   input += synapse0x34a6770();
   input += synapse0x34a67b0();
   input += synapse0x34a67f0();
   input += synapse0x34a6830();
   input += synapse0x34a6870();
   input += synapse0x34a68b0();
   input += synapse0x34a68f0();
   input += synapse0x34a6930();
   input += synapse0x34a6970();
   input += synapse0x34a69b0();
   input += synapse0x34a69f0();
   input += synapse0x34a6a30();
   input += synapse0x34a6a70();
   input += synapse0x34a6500();
   input += synapse0x34a6540();
   input += synapse0x3497070();
   input += synapse0x34970b0();
   input += synapse0x34970f0();
   input += synapse0x3497130();
   input += synapse0x3497170();
   input += synapse0x34971b0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34a6370() {
   double input = input0x34a6370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34971f0() {
   double input = -1.18733;
   input += synapse0x3497530();
   input += synapse0x3497570();
   input += synapse0x34975b0();
   input += synapse0x34975f0();
   input += synapse0x3497630();
   input += synapse0x3497670();
   input += synapse0x34976b0();
   input += synapse0x34976f0();
   input += synapse0x3497730();
   input += synapse0x3497770();
   input += synapse0x34977b0();
   input += synapse0x34977f0();
   input += synapse0x3497830();
   input += synapse0x3497870();
   input += synapse0x34978b0();
   input += synapse0x34978f0();
   input += synapse0x3497380();
   input += synapse0x34973c0();
   input += synapse0x3497a40();
   input += synapse0x3497a80();
   input += synapse0x3497ac0();
   input += synapse0x3497b00();
   input += synapse0x3497b40();
   input += synapse0x3497b80();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34971f0() {
   double input = input0x34971f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3497bc0() {
   double input = 0.163348;
   input += synapse0x3497f00();
   input += synapse0x3497f40();
   input += synapse0x3497f80();
   input += synapse0x3497fc0();
   input += synapse0x3498000();
   input += synapse0x3498040();
   input += synapse0x3498080();
   input += synapse0x34980c0();
   input += synapse0x3498100();
   input += synapse0x3498140();
   input += synapse0x3498180();
   input += synapse0x34981c0();
   input += synapse0x3498200();
   input += synapse0x3498240();
   input += synapse0x3498280();
   input += synapse0x34982c0();
   input += synapse0x3497d50();
   input += synapse0x3497d90();
   input += synapse0x3498410();
   input += synapse0x3498450();
   input += synapse0x3498490();
   input += synapse0x34984d0();
   input += synapse0x3498510();
   input += synapse0x3498550();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3497bc0() {
   double input = input0x3497bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x3498590() {
   double input = -0.115702;
   input += synapse0x34988d0();
   input += synapse0x3498910();
   input += synapse0x3498950();
   input += synapse0x3498990();
   input += synapse0x34989d0();
   input += synapse0x3498a10();
   input += synapse0x3498a50();
   input += synapse0x3498a90();
   input += synapse0x3498ad0();
   input += synapse0x3498b10();
   input += synapse0x3498b50();
   input += synapse0x3498b90();
   input += synapse0x3498bd0();
   input += synapse0x3498c10();
   input += synapse0x3498c50();
   input += synapse0x3498c90();
   input += synapse0x3498720();
   input += synapse0x3498760();
   input += synapse0x3498de0();
   input += synapse0x3498e20();
   input += synapse0x3498e60();
   input += synapse0x3498ea0();
   input += synapse0x3498ee0();
   input += synapse0x3498f20();
   return input;
}

double NNfunction_ss_dLuL::neuron0x3498590() {
   double input = input0x3498590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34aabd0() {
   double input = 3.01905;
   input += synapse0x34aadf0();
   input += synapse0x34aae30();
   input += synapse0x34aae70();
   input += synapse0x34aaeb0();
   input += synapse0x34aaef0();
   input += synapse0x34aaf30();
   input += synapse0x34aaf70();
   input += synapse0x34aafb0();
   input += synapse0x34aaff0();
   input += synapse0x34ab030();
   input += synapse0x34ab070();
   input += synapse0x34ab0b0();
   input += synapse0x34ab0f0();
   input += synapse0x34ab130();
   input += synapse0x34ab170();
   input += synapse0x34ab1b0();
   input += synapse0x3498f60();
   input += synapse0x3498fa0();
   input += synapse0x34ab300();
   input += synapse0x34ab340();
   input += synapse0x34ab380();
   input += synapse0x34ab3c0();
   input += synapse0x34ab400();
   input += synapse0x34ab440();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34aabd0() {
   double input = input0x34aabd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34ab480() {
   double input = 1.04709;
   input += synapse0x34ab7c0();
   input += synapse0x34ab800();
   input += synapse0x34ab840();
   input += synapse0x34ab880();
   input += synapse0x34ab8c0();
   input += synapse0x34ab900();
   input += synapse0x34ab940();
   input += synapse0x34ab980();
   input += synapse0x34ab9c0();
   input += synapse0x34aba00();
   input += synapse0x34aba40();
   input += synapse0x34aba80();
   input += synapse0x34abac0();
   input += synapse0x34abb00();
   input += synapse0x34abb40();
   input += synapse0x34abb80();
   input += synapse0x34ab610();
   input += synapse0x34ab650();
   input += synapse0x34abcd0();
   input += synapse0x34abd10();
   input += synapse0x34abd50();
   input += synapse0x34abd90();
   input += synapse0x34abdd0();
   input += synapse0x34abe10();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34ab480() {
   double input = input0x34ab480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34abe50() {
   double input = 0.608315;
   input += synapse0x34ac190();
   input += synapse0x34ac1d0();
   input += synapse0x34ac210();
   input += synapse0x34ac250();
   input += synapse0x34ac290();
   input += synapse0x34ac2d0();
   input += synapse0x34ac310();
   input += synapse0x34ac350();
   input += synapse0x34ac390();
   input += synapse0x34ac3d0();
   input += synapse0x34ac410();
   input += synapse0x34ac450();
   input += synapse0x34ac490();
   input += synapse0x34ac4d0();
   input += synapse0x34ac510();
   input += synapse0x34ac550();
   input += synapse0x34abfe0();
   input += synapse0x34ac020();
   input += synapse0x34ac6a0();
   input += synapse0x34ac6e0();
   input += synapse0x34ac720();
   input += synapse0x34ac760();
   input += synapse0x34ac7a0();
   input += synapse0x34ac7e0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34abe50() {
   double input = input0x34abe50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34ac820() {
   double input = -0.689823;
   input += synapse0x34acb60();
   input += synapse0x34acba0();
   input += synapse0x34acbe0();
   input += synapse0x34acc20();
   input += synapse0x34acc60();
   input += synapse0x34acca0();
   input += synapse0x34acce0();
   input += synapse0x34acd20();
   input += synapse0x34acd60();
   input += synapse0x34acda0();
   input += synapse0x34acde0();
   input += synapse0x34ace20();
   input += synapse0x34ace60();
   input += synapse0x34acea0();
   input += synapse0x34acee0();
   input += synapse0x34acf20();
   input += synapse0x34ac9b0();
   input += synapse0x34ac9f0();
   input += synapse0x34ad070();
   input += synapse0x34ad0b0();
   input += synapse0x34ad0f0();
   input += synapse0x34ad130();
   input += synapse0x34ad170();
   input += synapse0x34ad1b0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34ac820() {
   double input = input0x34ac820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34b3a20() {
   double input = -0.304787;
   input += synapse0x3488600();
   input += synapse0x3488640();
   input += synapse0x3489b60();
   input += synapse0x3489ba0();
   input += synapse0x348b630();
   input += synapse0x348b670();
   input += synapse0x348c400();
   input += synapse0x348c440();
   input += synapse0x348cdd0();
   input += synapse0x348ce10();
   input += synapse0x348d7a0();
   input += synapse0x348d7e0();
   input += synapse0x348e280();
   input += synapse0x348e2c0();
   input += synapse0x348ec50();
   input += synapse0x348ec90();
   input += synapse0x348bd30();
   input += synapse0x348bd70();
   input += synapse0x3490800();
   input += synapse0x3490840();
   input += synapse0x34911d0();
   input += synapse0x3491210();
   input += synapse0x3491ba0();
   input += synapse0x3491be0();
   input += synapse0x3492570();
   input += synapse0x34925b0();
   input += synapse0x3485600();
   input += synapse0x3485640();
   input += synapse0x3494660();
   input += synapse0x34946a0();
   input += synapse0x3495030();
   input += synapse0x3495070();
   input += synapse0x3495a00();
   input += synapse0x3495a40();
   input += synapse0x34963d0();
   input += synapse0x3496410();
   input += synapse0x3496da0();
   input += synapse0x3496de0();
   input += synapse0x348f8f0();
   input += synapse0x348f930();
   input += synapse0x34991a0();
   input += synapse0x34991e0();
   input += synapse0x3499b30();
   input += synapse0x3499b70();
   input += synapse0x349a500();
   input += synapse0x349a540();
   input += synapse0x349aed0();
   input += synapse0x349af10();
   input += synapse0x349b8a0();
   input += synapse0x349b8e0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34b3a20() {
   double input = input0x34b3a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34b3dc0() {
   double input = 0.473754;
   input += synapse0x349dfe0();
   input += synapse0x349e020();
   input += synapse0x34935a0();
   input += synapse0x34935e0();
   input += synapse0x34a0bc0();
   input += synapse0x34a0c00();
   input += synapse0x34a1590();
   input += synapse0x34a15d0();
   input += synapse0x34a1f60();
   input += synapse0x34a1fa0();
   input += synapse0x34a2930();
   input += synapse0x34a2970();
   input += synapse0x34a3300();
   input += synapse0x34a3340();
   input += synapse0x34a3cd0();
   input += synapse0x34a3d10();
   input += synapse0x34a46a0();
   input += synapse0x34a46e0();
   input += synapse0x34a5070();
   input += synapse0x34a50b0();
   input += synapse0x34a5c50();
   input += synapse0x34a5c90();
   input += synapse0x34a6620();
   input += synapse0x34a6660();
   input += synapse0x34974a0();
   input += synapse0x34974e0();
   input += synapse0x3497e70();
   input += synapse0x3497eb0();
   input += synapse0x3498840();
   input += synapse0x3498880();
   input += synapse0x34aad60();
   input += synapse0x34aada0();
   input += synapse0x34ab730();
   input += synapse0x34ab770();
   input += synapse0x34ac100();
   input += synapse0x34ac140();
   input += synapse0x34acad0();
   input += synapse0x34acb10();
   input += synapse0x3487a60();
   input += synapse0x3487aa0();
   input += synapse0x349c270();
   input += synapse0x349c2b0();
   input += synapse0x34ad1f0();
   input += synapse0x34ad230();
   input += synapse0x34ad270();
   input += synapse0x34ad2b0();
   input += synapse0x34b4160();
   input += synapse0x34b41a0();
   input += synapse0x34b41e0();
   input += synapse0x34b4220();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34b3dc0() {
   double input = input0x34b3dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34b4260() {
   double input = 1.03955;
   input += synapse0x34b45a0();
   input += synapse0x34b45e0();
   input += synapse0x34b4620();
   input += synapse0x34b4660();
   input += synapse0x34b46a0();
   input += synapse0x34b46e0();
   input += synapse0x34b4720();
   input += synapse0x34b4760();
   input += synapse0x34b47a0();
   input += synapse0x34b47e0();
   input += synapse0x34b4820();
   input += synapse0x34b4860();
   input += synapse0x34b48a0();
   input += synapse0x34b48e0();
   input += synapse0x34b4920();
   input += synapse0x34b4960();
   input += synapse0x34b43f0();
   input += synapse0x34b4430();
   input += synapse0x34b4ab0();
   input += synapse0x34b4af0();
   input += synapse0x34b4b30();
   input += synapse0x34b4b70();
   input += synapse0x34b4bb0();
   input += synapse0x34b4bf0();
   input += synapse0x34b4c30();
   input += synapse0x34b4c70();
   input += synapse0x34b4cb0();
   input += synapse0x34b4cf0();
   input += synapse0x34b4d30();
   input += synapse0x34b4d70();
   input += synapse0x34b4db0();
   input += synapse0x34b4df0();
   input += synapse0x34b49a0();
   input += synapse0x34b49e0();
   input += synapse0x34b4a20();
   input += synapse0x34b4a60();
   input += synapse0x34b5040();
   input += synapse0x34b5080();
   input += synapse0x34b50c0();
   input += synapse0x34b5100();
   input += synapse0x34b5140();
   input += synapse0x34b5180();
   input += synapse0x34b51c0();
   input += synapse0x34b5200();
   input += synapse0x34b5240();
   input += synapse0x34b5280();
   input += synapse0x34b52c0();
   input += synapse0x34b5300();
   input += synapse0x34b5340();
   input += synapse0x34b5380();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34b4260() {
   double input = input0x34b4260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34b53c0() {
   double input = 0.326981;
   input += synapse0x34b5700();
   input += synapse0x34b5740();
   input += synapse0x34b5780();
   input += synapse0x34b57c0();
   input += synapse0x34b5800();
   input += synapse0x34b5840();
   input += synapse0x34b5880();
   input += synapse0x34b58c0();
   input += synapse0x34b5900();
   input += synapse0x34b5940();
   input += synapse0x34b5980();
   input += synapse0x34b59c0();
   input += synapse0x34b5a00();
   input += synapse0x34b5a40();
   input += synapse0x34b5a80();
   input += synapse0x34b5ac0();
   input += synapse0x34b5550();
   input += synapse0x34b5590();
   input += synapse0x34b5c10();
   input += synapse0x34b5c50();
   input += synapse0x34b5c90();
   input += synapse0x34b5cd0();
   input += synapse0x34b5d10();
   input += synapse0x34b5d50();
   input += synapse0x34b5d90();
   input += synapse0x34b5dd0();
   input += synapse0x34b5e10();
   input += synapse0x34b5e50();
   input += synapse0x34b5e90();
   input += synapse0x34b5ed0();
   input += synapse0x34b5f10();
   input += synapse0x34b5f50();
   input += synapse0x34b5b00();
   input += synapse0x34b5b40();
   input += synapse0x34b5b80();
   input += synapse0x34b5bc0();
   input += synapse0x34b61a0();
   input += synapse0x34b61e0();
   input += synapse0x34b6220();
   input += synapse0x34b6260();
   input += synapse0x34b62a0();
   input += synapse0x34b62e0();
   input += synapse0x34b6320();
   input += synapse0x34b6360();
   input += synapse0x34b63a0();
   input += synapse0x34b63e0();
   input += synapse0x34b6420();
   input += synapse0x34b6460();
   input += synapse0x34b64a0();
   input += synapse0x34b64e0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34b53c0() {
   double input = input0x34b53c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34b6520() {
   double input = -0.240282;
   input += synapse0x34b6860();
   input += synapse0x34b68a0();
   input += synapse0x34b68e0();
   input += synapse0x34b6920();
   input += synapse0x34b6960();
   input += synapse0x34b69a0();
   input += synapse0x34b69e0();
   input += synapse0x34b6a20();
   input += synapse0x34b6a60();
   input += synapse0x34b6aa0();
   input += synapse0x34b6ae0();
   input += synapse0x34b6b20();
   input += synapse0x34b6b60();
   input += synapse0x34b6ba0();
   input += synapse0x34b6be0();
   input += synapse0x34b6c20();
   input += synapse0x34b66b0();
   input += synapse0x34b66f0();
   input += synapse0x34b6d70();
   input += synapse0x34b6db0();
   input += synapse0x34b6df0();
   input += synapse0x34b6e30();
   input += synapse0x34b6e70();
   input += synapse0x34b6eb0();
   input += synapse0x34b6ef0();
   input += synapse0x34b6f30();
   input += synapse0x34b6f70();
   input += synapse0x34b6fb0();
   input += synapse0x34b6ff0();
   input += synapse0x34b7030();
   input += synapse0x34b7070();
   input += synapse0x34b70b0();
   input += synapse0x34b6c60();
   input += synapse0x34b6ca0();
   input += synapse0x34b6ce0();
   input += synapse0x34b6d20();
   input += synapse0x34b7300();
   input += synapse0x34b7340();
   input += synapse0x34b7380();
   input += synapse0x34b73c0();
   input += synapse0x34b7400();
   input += synapse0x34b7440();
   input += synapse0x34b7480();
   input += synapse0x34b74c0();
   input += synapse0x34b7500();
   input += synapse0x34b7540();
   input += synapse0x34b7580();
   input += synapse0x34b75c0();
   input += synapse0x34b7600();
   input += synapse0x34b7640();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34b6520() {
   double input = input0x34b6520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuL::input0x34b7680() {
   double input = 0.641852;
   input += synapse0x34b78a0();
   input += synapse0x34b78e0();
   input += synapse0x34b7920();
   input += synapse0x34b7960();
   input += synapse0x34b79a0();
   return input;
}

double NNfunction_ss_dLuL::neuron0x34b7680() {
   double input = input0x34b7680();
   return (input * 1)+0;
}

double NNfunction_ss_dLuL::synapse0x3487af0() {
   return (neuron0x34826f0()*0.114378);
}

double NNfunction_ss_dLuL::synapse0x3487b30() {
   return (neuron0x34829a0()*0.0119569);
}

double NNfunction_ss_dLuL::synapse0x3487b70() {
   return (neuron0x3482ce0()*0.023047);
}

double NNfunction_ss_dLuL::synapse0x3487bb0() {
   return (neuron0x3483020()*-0.236349);
}

double NNfunction_ss_dLuL::synapse0x3487bf0() {
   return (neuron0x3483360()*-0.0329087);
}

double NNfunction_ss_dLuL::synapse0x3487c30() {
   return (neuron0x34836a0()*0.034271);
}

double NNfunction_ss_dLuL::synapse0x3487c70() {
   return (neuron0x34839e0()*0.00845886);
}

double NNfunction_ss_dLuL::synapse0x3487cb0() {
   return (neuron0x3483d20()*-0.00103734);
}

double NNfunction_ss_dLuL::synapse0x3487cf0() {
   return (neuron0x3484060()*-0.00792168);
}

double NNfunction_ss_dLuL::synapse0x3487d30() {
   return (neuron0x34843a0()*-0.0225695);
}

double NNfunction_ss_dLuL::synapse0x3487d70() {
   return (neuron0x34846e0()*0.00617435);
}

double NNfunction_ss_dLuL::synapse0x3487db0() {
   return (neuron0x3484a20()*-0.418718);
}

double NNfunction_ss_dLuL::synapse0x3487df0() {
   return (neuron0x3484d60()*0.00900229);
}

double NNfunction_ss_dLuL::synapse0x3487e30() {
   return (neuron0x34850a0()*0.0290902);
}

double NNfunction_ss_dLuL::synapse0x3487e70() {
   return (neuron0x34853e0()*-0.0225879);
}

double NNfunction_ss_dLuL::synapse0x3487eb0() {
   return (neuron0x3485720()*-0.0467884);
}

double NNfunction_ss_dLuL::synapse0x3487940() {
   return (neuron0x3485a60()*0.0305458);
}

double NNfunction_ss_dLuL::synapse0x3487980() {
   return (neuron0x3485fc0()*0.0350401);
}

double NNfunction_ss_dLuL::synapse0x323e8f0() {
   return (neuron0x3486300()*-0.0289605);
}

double NNfunction_ss_dLuL::synapse0x323e930() {
   return (neuron0x3486640()*0.0212296);
}

double NNfunction_ss_dLuL::synapse0x3487ef0() {
   return (neuron0x3486980()*0.021498);
}

double NNfunction_ss_dLuL::synapse0x3487f30() {
   return (neuron0x3486cc0()*0.021521);
}

double NNfunction_ss_dLuL::synapse0x3487f70() {
   return (neuron0x3487000()*-0.0380549);
}

double NNfunction_ss_dLuL::synapse0x3487fb0() {
   return (neuron0x3487340()*0.0466823);
}

double NNfunction_ss_dLuL::synapse0x3488330() {
   return (neuron0x34826f0()*0.0726184);
}

double NNfunction_ss_dLuL::synapse0x3488370() {
   return (neuron0x34829a0()*-0.11518);
}

double NNfunction_ss_dLuL::synapse0x34883b0() {
   return (neuron0x3482ce0()*-0.266742);
}

double NNfunction_ss_dLuL::synapse0x34883f0() {
   return (neuron0x3483020()*-0.125184);
}

double NNfunction_ss_dLuL::synapse0x3488430() {
   return (neuron0x3483360()*0.00647288);
}

double NNfunction_ss_dLuL::synapse0x3488470() {
   return (neuron0x34836a0()*0.0554048);
}

double NNfunction_ss_dLuL::synapse0x34884b0() {
   return (neuron0x34839e0()*0.0763398);
}

double NNfunction_ss_dLuL::synapse0x34884f0() {
   return (neuron0x3483d20()*0.100918);
}

double NNfunction_ss_dLuL::synapse0x3488530() {
   return (neuron0x3484060()*-0.541166);
}

double NNfunction_ss_dLuL::synapse0x323e740() {
   return (neuron0x34843a0()*-0.240865);
}

double NNfunction_ss_dLuL::synapse0x323e780() {
   return (neuron0x34846e0()*0.0381184);
}

double NNfunction_ss_dLuL::synapse0x323e7c0() {
   return (neuron0x3484a20()*0.701912);
}

double NNfunction_ss_dLuL::synapse0x323e800() {
   return (neuron0x3484d60()*0.332517);
}

double NNfunction_ss_dLuL::synapse0x3488780() {
   return (neuron0x34850a0()*0.00754772);
}

double NNfunction_ss_dLuL::synapse0x34887c0() {
   return (neuron0x34853e0()*0.289961);
}

double NNfunction_ss_dLuL::synapse0x3488800() {
   return (neuron0x3485720()*0.317713);
}

double NNfunction_ss_dLuL::synapse0x3488180() {
   return (neuron0x3485a60()*-0.0472295);
}

double NNfunction_ss_dLuL::synapse0x34881c0() {
   return (neuron0x3485fc0()*-0.0532211);
}

double NNfunction_ss_dLuL::synapse0x3488950() {
   return (neuron0x3486300()*-0.164338);
}

double NNfunction_ss_dLuL::synapse0x3488990() {
   return (neuron0x3486640()*-0.0245839);
}

double NNfunction_ss_dLuL::synapse0x34889d0() {
   return (neuron0x3486980()*-0.120491);
}

double NNfunction_ss_dLuL::synapse0x3488a10() {
   return (neuron0x3486cc0()*-0.150146);
}

double NNfunction_ss_dLuL::synapse0x3488a50() {
   return (neuron0x3487000()*-0.112068);
}

double NNfunction_ss_dLuL::synapse0x3488a90() {
   return (neuron0x3487340()*-0.0756476);
}

double NNfunction_ss_dLuL::synapse0x3488e10() {
   return (neuron0x34826f0()*-0.290674);
}

double NNfunction_ss_dLuL::synapse0x3488e50() {
   return (neuron0x34829a0()*0.70861);
}

double NNfunction_ss_dLuL::synapse0x3488e90() {
   return (neuron0x3482ce0()*0.0484712);
}

double NNfunction_ss_dLuL::synapse0x3488ed0() {
   return (neuron0x3483020()*0.0424247);
}

double NNfunction_ss_dLuL::synapse0x3488f10() {
   return (neuron0x3483360()*0.0725669);
}

double NNfunction_ss_dLuL::synapse0x3488f50() {
   return (neuron0x34836a0()*0.862969);
}

double NNfunction_ss_dLuL::synapse0x3488f90() {
   return (neuron0x34839e0()*0.157343);
}

double NNfunction_ss_dLuL::synapse0x3488fd0() {
   return (neuron0x3483d20()*0.914814);
}

double NNfunction_ss_dLuL::synapse0x3489010() {
   return (neuron0x3484060()*0.0342896);
}

double NNfunction_ss_dLuL::synapse0x3489050() {
   return (neuron0x34843a0()*0.305835);
}

double NNfunction_ss_dLuL::synapse0x3489090() {
   return (neuron0x34846e0()*-0.251861);
}

double NNfunction_ss_dLuL::synapse0x34890d0() {
   return (neuron0x3484a20()*-0.097237);
}

double NNfunction_ss_dLuL::synapse0x3489110() {
   return (neuron0x3484d60()*0.190228);
}

double NNfunction_ss_dLuL::synapse0x3489150() {
   return (neuron0x34850a0()*0.207444);
}

double NNfunction_ss_dLuL::synapse0x3489190() {
   return (neuron0x34853e0()*-0.319216);
}

double NNfunction_ss_dLuL::synapse0x34891d0() {
   return (neuron0x3485720()*-0.300515);
}

double NNfunction_ss_dLuL::synapse0x3488c60() {
   return (neuron0x3485a60()*-0.0445172);
}

double NNfunction_ss_dLuL::synapse0x3488ca0() {
   return (neuron0x3485fc0()*0.975561);
}

double NNfunction_ss_dLuL::synapse0x324c790() {
   return (neuron0x3486300()*-0.334649);
}

double NNfunction_ss_dLuL::synapse0x324c7d0() {
   return (neuron0x3486640()*-0.0893939);
}

double NNfunction_ss_dLuL::synapse0x348b100() {
   return (neuron0x3486980()*0.504725);
}

double NNfunction_ss_dLuL::synapse0x348b140() {
   return (neuron0x3486cc0()*0.219854);
}

double NNfunction_ss_dLuL::synapse0x3482430() {
   return (neuron0x3487000()*0.274888);
}

double NNfunction_ss_dLuL::synapse0x3482470() {
   return (neuron0x3487340()*-0.253417);
}

double NNfunction_ss_dLuL::synapse0x324d080() {
   return (neuron0x34826f0()*0.238672);
}

double NNfunction_ss_dLuL::synapse0x3488690() {
   return (neuron0x34829a0()*0.0543201);
}

double NNfunction_ss_dLuL::synapse0x34886d0() {
   return (neuron0x3482ce0()*-0.614605);
}

double NNfunction_ss_dLuL::synapse0x3488710() {
   return (neuron0x3483020()*0.27574);
}

double NNfunction_ss_dLuL::synapse0x3489320() {
   return (neuron0x3483360()*-0.217468);
}

double NNfunction_ss_dLuL::synapse0x3489360() {
   return (neuron0x34836a0()*0.062254);
}

double NNfunction_ss_dLuL::synapse0x34893a0() {
   return (neuron0x34839e0()*0.0123442);
}

double NNfunction_ss_dLuL::synapse0x34893e0() {
   return (neuron0x3483d20()*-0.186914);
}

double NNfunction_ss_dLuL::synapse0x3489420() {
   return (neuron0x3484060()*0.223085);
}

double NNfunction_ss_dLuL::synapse0x3489460() {
   return (neuron0x34843a0()*-0.277123);
}

double NNfunction_ss_dLuL::synapse0x34894a0() {
   return (neuron0x34846e0()*0.0458899);
}

double NNfunction_ss_dLuL::synapse0x34894e0() {
   return (neuron0x3484a20()*0.485548);
}

double NNfunction_ss_dLuL::synapse0x3489520() {
   return (neuron0x3484d60()*-0.143131);
}

double NNfunction_ss_dLuL::synapse0x3489560() {
   return (neuron0x34850a0()*0.270424);
}

double NNfunction_ss_dLuL::synapse0x34895a0() {
   return (neuron0x34853e0()*0.449456);
}

double NNfunction_ss_dLuL::synapse0x34895e0() {
   return (neuron0x3485720()*0.0792419);
}

double NNfunction_ss_dLuL::synapse0x34824b0() {
   return (neuron0x3485a60()*0.571495);
}

double NNfunction_ss_dLuL::synapse0x34824f0() {
   return (neuron0x3485fc0()*-0.310491);
}

double NNfunction_ss_dLuL::synapse0x3489730() {
   return (neuron0x3486300()*-0.406817);
}

double NNfunction_ss_dLuL::synapse0x3489770() {
   return (neuron0x3486640()*-0.195351);
}

double NNfunction_ss_dLuL::synapse0x34897b0() {
   return (neuron0x3486980()*-0.0774427);
}

double NNfunction_ss_dLuL::synapse0x34897f0() {
   return (neuron0x3486cc0()*-0.290296);
}

double NNfunction_ss_dLuL::synapse0x3489830() {
   return (neuron0x3487000()*-0.0843689);
}

double NNfunction_ss_dLuL::synapse0x3489870() {
   return (neuron0x3487340()*0.104481);
}

double NNfunction_ss_dLuL::synapse0x3489bf0() {
   return (neuron0x34826f0()*-0.555053);
}

double NNfunction_ss_dLuL::synapse0x3489c30() {
   return (neuron0x34829a0()*0.00571753);
}

double NNfunction_ss_dLuL::synapse0x3489c70() {
   return (neuron0x3482ce0()*-0.484045);
}

double NNfunction_ss_dLuL::synapse0x3489cb0() {
   return (neuron0x3483020()*-1.05824);
}

double NNfunction_ss_dLuL::synapse0x3489cf0() {
   return (neuron0x3483360()*0.0256222);
}

double NNfunction_ss_dLuL::synapse0x3489d30() {
   return (neuron0x34836a0()*0.0678978);
}

double NNfunction_ss_dLuL::synapse0x3489d70() {
   return (neuron0x34839e0()*-0.195874);
}

double NNfunction_ss_dLuL::synapse0x3489db0() {
   return (neuron0x3483d20()*-0.475018);
}

double NNfunction_ss_dLuL::synapse0x3489df0() {
   return (neuron0x3484060()*-0.186453);
}

double NNfunction_ss_dLuL::synapse0x3489e30() {
   return (neuron0x34843a0()*0.00440236);
}

double NNfunction_ss_dLuL::synapse0x3489e70() {
   return (neuron0x34846e0()*-0.472473);
}

double NNfunction_ss_dLuL::synapse0x3489eb0() {
   return (neuron0x3484a20()*-0.366571);
}

double NNfunction_ss_dLuL::synapse0x3489ef0() {
   return (neuron0x3484d60()*-0.645731);
}

double NNfunction_ss_dLuL::synapse0x3489f30() {
   return (neuron0x34850a0()*0.0535268);
}

double NNfunction_ss_dLuL::synapse0x3489f70() {
   return (neuron0x34853e0()*0.511151);
}

double NNfunction_ss_dLuL::synapse0x3489fb0() {
   return (neuron0x3485720()*-0.221543);
}

double NNfunction_ss_dLuL::synapse0x348a100() {
   return (neuron0x3485a60()*0.499123);
}

double NNfunction_ss_dLuL::synapse0x3489a40() {
   return (neuron0x3485fc0()*-0.422462);
}

double NNfunction_ss_dLuL::synapse0x3489a80() {
   return (neuron0x3486300()*-0.14037);
}

double NNfunction_ss_dLuL::synapse0x348b240() {
   return (neuron0x3486640()*-0.958964);
}

double NNfunction_ss_dLuL::synapse0x348b280() {
   return (neuron0x3486980()*-0.00136391);
}

double NNfunction_ss_dLuL::synapse0x348b2c0() {
   return (neuron0x3486cc0()*0.394557);
}

double NNfunction_ss_dLuL::synapse0x348b300() {
   return (neuron0x3487000()*-0.0552439);
}

double NNfunction_ss_dLuL::synapse0x348b340() {
   return (neuron0x3487340()*-0.0671713);
}

double NNfunction_ss_dLuL::synapse0x348b6c0() {
   return (neuron0x34826f0()*-0.45624);
}

double NNfunction_ss_dLuL::synapse0x348b700() {
   return (neuron0x34829a0()*0.0483288);
}

double NNfunction_ss_dLuL::synapse0x348b740() {
   return (neuron0x3482ce0()*-0.0137039);
}

double NNfunction_ss_dLuL::synapse0x348b780() {
   return (neuron0x3483020()*-0.067511);
}

double NNfunction_ss_dLuL::synapse0x348b7c0() {
   return (neuron0x3483360()*-0.207153);
}

double NNfunction_ss_dLuL::synapse0x348b800() {
   return (neuron0x34836a0()*0.193426);
}

double NNfunction_ss_dLuL::synapse0x348b840() {
   return (neuron0x34839e0()*0.206717);
}

double NNfunction_ss_dLuL::synapse0x348b880() {
   return (neuron0x3483d20()*0.213901);
}

double NNfunction_ss_dLuL::synapse0x348b8c0() {
   return (neuron0x3484060()*-0.625656);
}

double NNfunction_ss_dLuL::synapse0x324cae0() {
   return (neuron0x34843a0()*0.221812);
}

double NNfunction_ss_dLuL::synapse0x324cb20() {
   return (neuron0x34846e0()*-0.363886);
}

double NNfunction_ss_dLuL::synapse0x324cb60() {
   return (neuron0x3484a20()*1.57008);
}

double NNfunction_ss_dLuL::synapse0x324cba0() {
   return (neuron0x3484d60()*0.187601);
}

double NNfunction_ss_dLuL::synapse0x324cbe0() {
   return (neuron0x34850a0()*-0.0405655);
}

double NNfunction_ss_dLuL::synapse0x324cc20() {
   return (neuron0x34853e0()*0.133496);
}

double NNfunction_ss_dLuL::synapse0x324cc60() {
   return (neuron0x3485720()*-0.10518);
}

double NNfunction_ss_dLuL::synapse0x348b510() {
   return (neuron0x3485a60()*0.191688);
}

double NNfunction_ss_dLuL::synapse0x348b550() {
   return (neuron0x3485fc0()*0.275195);
}

double NNfunction_ss_dLuL::synapse0x324cdb0() {
   return (neuron0x3486300()*0.180731);
}

double NNfunction_ss_dLuL::synapse0x324cdf0() {
   return (neuron0x3486640()*0.155161);
}

double NNfunction_ss_dLuL::synapse0x324ce30() {
   return (neuron0x3486980()*0.543188);
}

double NNfunction_ss_dLuL::synapse0x324ce70() {
   return (neuron0x3486cc0()*0.145624);
}

double NNfunction_ss_dLuL::synapse0x324ceb0() {
   return (neuron0x3487000()*0.172407);
}

double NNfunction_ss_dLuL::synapse0x348c110() {
   return (neuron0x3487340()*0.227542);
}

double NNfunction_ss_dLuL::synapse0x348c490() {
   return (neuron0x34826f0()*0.202121);
}

double NNfunction_ss_dLuL::synapse0x348c4d0() {
   return (neuron0x34829a0()*-0.141822);
}

double NNfunction_ss_dLuL::synapse0x348c510() {
   return (neuron0x3482ce0()*-0.0697461);
}

double NNfunction_ss_dLuL::synapse0x348c550() {
   return (neuron0x3483020()*-0.35013);
}

double NNfunction_ss_dLuL::synapse0x348c590() {
   return (neuron0x3483360()*-0.147085);
}

double NNfunction_ss_dLuL::synapse0x348c5d0() {
   return (neuron0x34836a0()*0.419749);
}

double NNfunction_ss_dLuL::synapse0x348c610() {
   return (neuron0x34839e0()*-0.166889);
}

double NNfunction_ss_dLuL::synapse0x348c650() {
   return (neuron0x3483d20()*0.177823);
}

double NNfunction_ss_dLuL::synapse0x348c690() {
   return (neuron0x3484060()*0.505301);
}

double NNfunction_ss_dLuL::synapse0x348c6d0() {
   return (neuron0x34843a0()*-0.106045);
}

double NNfunction_ss_dLuL::synapse0x348c710() {
   return (neuron0x34846e0()*-0.16402);
}

double NNfunction_ss_dLuL::synapse0x348c750() {
   return (neuron0x3484a20()*0.711423);
}

double NNfunction_ss_dLuL::synapse0x348c790() {
   return (neuron0x3484d60()*0.10576);
}

double NNfunction_ss_dLuL::synapse0x348c7d0() {
   return (neuron0x34850a0()*0.252751);
}

double NNfunction_ss_dLuL::synapse0x348c810() {
   return (neuron0x34853e0()*0.410974);
}

double NNfunction_ss_dLuL::synapse0x348c850() {
   return (neuron0x3485720()*0.339468);
}

double NNfunction_ss_dLuL::synapse0x348c2e0() {
   return (neuron0x3485a60()*0.169018);
}

double NNfunction_ss_dLuL::synapse0x348c320() {
   return (neuron0x3485fc0()*0.079743);
}

double NNfunction_ss_dLuL::synapse0x348c9a0() {
   return (neuron0x3486300()*-0.23576);
}

double NNfunction_ss_dLuL::synapse0x348c9e0() {
   return (neuron0x3486640()*0.0737697);
}

double NNfunction_ss_dLuL::synapse0x348ca20() {
   return (neuron0x3486980()*0.0434862);
}

double NNfunction_ss_dLuL::synapse0x348ca60() {
   return (neuron0x3486cc0()*-0.192348);
}

double NNfunction_ss_dLuL::synapse0x348caa0() {
   return (neuron0x3487000()*0.00487925);
}

double NNfunction_ss_dLuL::synapse0x348cae0() {
   return (neuron0x3487340()*-0.153365);
}

double NNfunction_ss_dLuL::synapse0x348ce60() {
   return (neuron0x34826f0()*-0.54099);
}

double NNfunction_ss_dLuL::synapse0x348cea0() {
   return (neuron0x34829a0()*0.14482);
}

double NNfunction_ss_dLuL::synapse0x348cee0() {
   return (neuron0x3482ce0()*-0.219054);
}

double NNfunction_ss_dLuL::synapse0x348cf20() {
   return (neuron0x3483020()*0.679912);
}

double NNfunction_ss_dLuL::synapse0x348cf60() {
   return (neuron0x3483360()*0.581153);
}

double NNfunction_ss_dLuL::synapse0x348cfa0() {
   return (neuron0x34836a0()*0.0854542);
}

double NNfunction_ss_dLuL::synapse0x348cfe0() {
   return (neuron0x34839e0()*0.536711);
}

double NNfunction_ss_dLuL::synapse0x348d020() {
   return (neuron0x3483d20()*0.0706785);
}

double NNfunction_ss_dLuL::synapse0x348d060() {
   return (neuron0x3484060()*-0.358772);
}

double NNfunction_ss_dLuL::synapse0x348d0a0() {
   return (neuron0x34843a0()*-0.15526);
}

double NNfunction_ss_dLuL::synapse0x348d0e0() {
   return (neuron0x34846e0()*-0.105897);
}

double NNfunction_ss_dLuL::synapse0x348d120() {
   return (neuron0x3484a20()*0.572424);
}

double NNfunction_ss_dLuL::synapse0x348d160() {
   return (neuron0x3484d60()*0.23668);
}

double NNfunction_ss_dLuL::synapse0x348d1a0() {
   return (neuron0x34850a0()*0.602167);
}

double NNfunction_ss_dLuL::synapse0x348d1e0() {
   return (neuron0x34853e0()*0.0293054);
}

double NNfunction_ss_dLuL::synapse0x348d220() {
   return (neuron0x3485720()*-0.332753);
}

double NNfunction_ss_dLuL::synapse0x348ccb0() {
   return (neuron0x3485a60()*-0.0344836);
}

double NNfunction_ss_dLuL::synapse0x348ccf0() {
   return (neuron0x3485fc0()*0.387927);
}

double NNfunction_ss_dLuL::synapse0x348d370() {
   return (neuron0x3486300()*-0.084406);
}

double NNfunction_ss_dLuL::synapse0x348d3b0() {
   return (neuron0x3486640()*-0.555689);
}

double NNfunction_ss_dLuL::synapse0x348d3f0() {
   return (neuron0x3486980()*-0.169046);
}

double NNfunction_ss_dLuL::synapse0x348d430() {
   return (neuron0x3486cc0()*0.0423242);
}

double NNfunction_ss_dLuL::synapse0x348d470() {
   return (neuron0x3487000()*0.432536);
}

double NNfunction_ss_dLuL::synapse0x348d4b0() {
   return (neuron0x3487340()*0.271375);
}

double NNfunction_ss_dLuL::synapse0x3485eb0() {
   return (neuron0x34826f0()*-0.357081);
}

double NNfunction_ss_dLuL::synapse0x3485ef0() {
   return (neuron0x34829a0()*0.0857234);
}

double NNfunction_ss_dLuL::synapse0x3485f30() {
   return (neuron0x3482ce0()*-0.446515);
}

double NNfunction_ss_dLuL::synapse0x3485f70() {
   return (neuron0x3483020()*0.104314);
}

double NNfunction_ss_dLuL::synapse0x348da40() {
   return (neuron0x3483360()*0.049183);
}

double NNfunction_ss_dLuL::synapse0x348da80() {
   return (neuron0x34836a0()*0.152618);
}

double NNfunction_ss_dLuL::synapse0x348dac0() {
   return (neuron0x34839e0()*0.234626);
}

double NNfunction_ss_dLuL::synapse0x348db00() {
   return (neuron0x3483d20()*0.223836);
}

double NNfunction_ss_dLuL::synapse0x348db40() {
   return (neuron0x3484060()*0.0138099);
}

double NNfunction_ss_dLuL::synapse0x348db80() {
   return (neuron0x34843a0()*-0.0777805);
}

double NNfunction_ss_dLuL::synapse0x348dbc0() {
   return (neuron0x34846e0()*-0.0660458);
}

double NNfunction_ss_dLuL::synapse0x348dc00() {
   return (neuron0x3484a20()*-0.14287);
}

double NNfunction_ss_dLuL::synapse0x348dc40() {
   return (neuron0x3484d60()*0.294589);
}

double NNfunction_ss_dLuL::synapse0x348dc80() {
   return (neuron0x34850a0()*-0.136475);
}

double NNfunction_ss_dLuL::synapse0x348dcc0() {
   return (neuron0x34853e0()*0.921484);
}

double NNfunction_ss_dLuL::synapse0x348dd00() {
   return (neuron0x3485720()*0.689967);
}

double NNfunction_ss_dLuL::synapse0x348d680() {
   return (neuron0x3485a60()*-0.45344);
}

double NNfunction_ss_dLuL::synapse0x348d6c0() {
   return (neuron0x3485fc0()*0.152069);
}

double NNfunction_ss_dLuL::synapse0x348de50() {
   return (neuron0x3486300()*0.308051);
}

double NNfunction_ss_dLuL::synapse0x348de90() {
   return (neuron0x3486640()*-0.00673898);
}

double NNfunction_ss_dLuL::synapse0x348ded0() {
   return (neuron0x3486980()*0.281611);
}

double NNfunction_ss_dLuL::synapse0x348df10() {
   return (neuron0x3486cc0()*0.00818522);
}

double NNfunction_ss_dLuL::synapse0x348df50() {
   return (neuron0x3487000()*-0.199422);
}

double NNfunction_ss_dLuL::synapse0x348df90() {
   return (neuron0x3487340()*-0.192125);
}

double NNfunction_ss_dLuL::synapse0x348e310() {
   return (neuron0x34826f0()*-0.0447726);
}

double NNfunction_ss_dLuL::synapse0x348e350() {
   return (neuron0x34829a0()*-0.00403777);
}

double NNfunction_ss_dLuL::synapse0x348e390() {
   return (neuron0x3482ce0()*-0.0561466);
}

double NNfunction_ss_dLuL::synapse0x348e3d0() {
   return (neuron0x3483020()*-2.52764);
}

double NNfunction_ss_dLuL::synapse0x348e410() {
   return (neuron0x3483360()*-0.0223098);
}

double NNfunction_ss_dLuL::synapse0x348e450() {
   return (neuron0x34836a0()*-0.0253395);
}

double NNfunction_ss_dLuL::synapse0x348e490() {
   return (neuron0x34839e0()*0.0160363);
}

double NNfunction_ss_dLuL::synapse0x348e4d0() {
   return (neuron0x3483d20()*0.0321952);
}

double NNfunction_ss_dLuL::synapse0x348e510() {
   return (neuron0x3484060()*0.0558157);
}

double NNfunction_ss_dLuL::synapse0x348e550() {
   return (neuron0x34843a0()*-0.014775);
}

double NNfunction_ss_dLuL::synapse0x348e590() {
   return (neuron0x34846e0()*0.0132825);
}

double NNfunction_ss_dLuL::synapse0x348e5d0() {
   return (neuron0x3484a20()*0.894795);
}

double NNfunction_ss_dLuL::synapse0x348e610() {
   return (neuron0x3484d60()*0.0841163);
}

double NNfunction_ss_dLuL::synapse0x348e650() {
   return (neuron0x34850a0()*-0.0575611);
}

double NNfunction_ss_dLuL::synapse0x348e690() {
   return (neuron0x34853e0()*0.063206);
}

double NNfunction_ss_dLuL::synapse0x348e6d0() {
   return (neuron0x3485720()*0.0925872);
}

double NNfunction_ss_dLuL::synapse0x348e160() {
   return (neuron0x3485a60()*0.0209709);
}

double NNfunction_ss_dLuL::synapse0x348e1a0() {
   return (neuron0x3485fc0()*-0.0155996);
}

double NNfunction_ss_dLuL::synapse0x348e820() {
   return (neuron0x3486300()*0.056035);
}

double NNfunction_ss_dLuL::synapse0x348e860() {
   return (neuron0x3486640()*0.00778035);
}

double NNfunction_ss_dLuL::synapse0x348e8a0() {
   return (neuron0x3486980()*0.015879);
}

double NNfunction_ss_dLuL::synapse0x348e8e0() {
   return (neuron0x3486cc0()*-0.00996548);
}

double NNfunction_ss_dLuL::synapse0x348e920() {
   return (neuron0x3487000()*0.00282938);
}

double NNfunction_ss_dLuL::synapse0x348e960() {
   return (neuron0x3487340()*-0.0312735);
}

double NNfunction_ss_dLuL::synapse0x348ece0() {
   return (neuron0x34826f0()*-0.317519);
}

double NNfunction_ss_dLuL::synapse0x348ed20() {
   return (neuron0x34829a0()*0.0862655);
}

double NNfunction_ss_dLuL::synapse0x348ed60() {
   return (neuron0x3482ce0()*-0.117585);
}

double NNfunction_ss_dLuL::synapse0x348eda0() {
   return (neuron0x3483020()*1.97577);
}

double NNfunction_ss_dLuL::synapse0x348ede0() {
   return (neuron0x3483360()*-0.227419);
}

double NNfunction_ss_dLuL::synapse0x348ee20() {
   return (neuron0x34836a0()*0.200443);
}

double NNfunction_ss_dLuL::synapse0x348ee60() {
   return (neuron0x34839e0()*0.240881);
}

double NNfunction_ss_dLuL::synapse0x348eea0() {
   return (neuron0x3483d20()*0.539566);
}

double NNfunction_ss_dLuL::synapse0x348eee0() {
   return (neuron0x3484060()*0.00253922);
}

double NNfunction_ss_dLuL::synapse0x348ef20() {
   return (neuron0x34843a0()*0.239598);
}

double NNfunction_ss_dLuL::synapse0x348ef60() {
   return (neuron0x34846e0()*0.0991881);
}

double NNfunction_ss_dLuL::synapse0x348efa0() {
   return (neuron0x3484a20()*1.2544);
}

double NNfunction_ss_dLuL::synapse0x348efe0() {
   return (neuron0x3484d60()*0.271907);
}

double NNfunction_ss_dLuL::synapse0x348f020() {
   return (neuron0x34850a0()*0.047128);
}

double NNfunction_ss_dLuL::synapse0x348f060() {
   return (neuron0x34853e0()*0.298082);
}

double NNfunction_ss_dLuL::synapse0x348f0a0() {
   return (neuron0x3485720()*0.157871);
}

double NNfunction_ss_dLuL::synapse0x348eb30() {
   return (neuron0x3485a60()*0.134418);
}

double NNfunction_ss_dLuL::synapse0x348eb70() {
   return (neuron0x3485fc0()*-0.127652);
}

double NNfunction_ss_dLuL::synapse0x348b900() {
   return (neuron0x3486300()*0.0616411);
}

double NNfunction_ss_dLuL::synapse0x348b940() {
   return (neuron0x3486640()*0.122603);
}

double NNfunction_ss_dLuL::synapse0x348b980() {
   return (neuron0x3486980()*0.422031);
}

double NNfunction_ss_dLuL::synapse0x348b9c0() {
   return (neuron0x3486cc0()*-0.101401);
}

double NNfunction_ss_dLuL::synapse0x348ba00() {
   return (neuron0x3487000()*0.121307);
}

double NNfunction_ss_dLuL::synapse0x348ba40() {
   return (neuron0x3487340()*-0.0505255);
}

double NNfunction_ss_dLuL::synapse0x348bdc0() {
   return (neuron0x34826f0()*-0.0108556);
}

double NNfunction_ss_dLuL::synapse0x348be00() {
   return (neuron0x34829a0()*-0.0120745);
}

double NNfunction_ss_dLuL::synapse0x348be40() {
   return (neuron0x3482ce0()*0.0520604);
}

double NNfunction_ss_dLuL::synapse0x348be80() {
   return (neuron0x3483020()*-0.343592);
}

double NNfunction_ss_dLuL::synapse0x348bec0() {
   return (neuron0x3483360()*-0.00171985);
}

double NNfunction_ss_dLuL::synapse0x348bf00() {
   return (neuron0x34836a0()*0.00708741);
}

double NNfunction_ss_dLuL::synapse0x348bf40() {
   return (neuron0x34839e0()*0.0127034);
}

double NNfunction_ss_dLuL::synapse0x348bf80() {
   return (neuron0x3483d20()*0.0035483);
}

double NNfunction_ss_dLuL::synapse0x348bfc0() {
   return (neuron0x3484060()*0.00568898);
}

double NNfunction_ss_dLuL::synapse0x348c000() {
   return (neuron0x34843a0()*0.00820624);
}

double NNfunction_ss_dLuL::synapse0x348c040() {
   return (neuron0x34846e0()*-0.00661523);
}

double NNfunction_ss_dLuL::synapse0x348c080() {
   return (neuron0x3484a20()*-2.75045);
}

double NNfunction_ss_dLuL::synapse0x348c0c0() {
   return (neuron0x3484d60()*-0.0610885);
}

double NNfunction_ss_dLuL::synapse0x3490200() {
   return (neuron0x34850a0()*-0.0141603);
}

double NNfunction_ss_dLuL::synapse0x3490240() {
   return (neuron0x34853e0()*-0.0285723);
}

double NNfunction_ss_dLuL::synapse0x3490280() {
   return (neuron0x3485720()*-0.039247);
}

double NNfunction_ss_dLuL::synapse0x348bc10() {
   return (neuron0x3485a60()*-0.0174482);
}

double NNfunction_ss_dLuL::synapse0x348bc50() {
   return (neuron0x3485fc0()*-0.031847);
}

double NNfunction_ss_dLuL::synapse0x34903d0() {
   return (neuron0x3486300()*-0.0176432);
}

double NNfunction_ss_dLuL::synapse0x3490410() {
   return (neuron0x3486640()*-0.0107763);
}

double NNfunction_ss_dLuL::synapse0x3490450() {
   return (neuron0x3486980()*0.00843255);
}

double NNfunction_ss_dLuL::synapse0x3490490() {
   return (neuron0x3486cc0()*-0.00577582);
}

double NNfunction_ss_dLuL::synapse0x34904d0() {
   return (neuron0x3487000()*-0.00768539);
}

double NNfunction_ss_dLuL::synapse0x3490510() {
   return (neuron0x3487340()*0.0108396);
}

double NNfunction_ss_dLuL::synapse0x3490890() {
   return (neuron0x34826f0()*-0.774372);
}

double NNfunction_ss_dLuL::synapse0x34908d0() {
   return (neuron0x34829a0()*-0.939958);
}

double NNfunction_ss_dLuL::synapse0x3490910() {
   return (neuron0x3482ce0()*-0.136404);
}

double NNfunction_ss_dLuL::synapse0x3490950() {
   return (neuron0x3483020()*-0.736375);
}

double NNfunction_ss_dLuL::synapse0x3490990() {
   return (neuron0x3483360()*-0.0301028);
}

double NNfunction_ss_dLuL::synapse0x34909d0() {
   return (neuron0x34836a0()*-0.508118);
}

double NNfunction_ss_dLuL::synapse0x3490a10() {
   return (neuron0x34839e0()*-0.14879);
}

double NNfunction_ss_dLuL::synapse0x3490a50() {
   return (neuron0x3483d20()*0.430783);
}

double NNfunction_ss_dLuL::synapse0x3490a90() {
   return (neuron0x3484060()*0.483685);
}

double NNfunction_ss_dLuL::synapse0x3490ad0() {
   return (neuron0x34843a0()*-0.256465);
}

double NNfunction_ss_dLuL::synapse0x3490b10() {
   return (neuron0x34846e0()*0.0480836);
}

double NNfunction_ss_dLuL::synapse0x3490b50() {
   return (neuron0x3484a20()*-0.516757);
}

double NNfunction_ss_dLuL::synapse0x3490b90() {
   return (neuron0x3484d60()*0.193174);
}

double NNfunction_ss_dLuL::synapse0x3490bd0() {
   return (neuron0x34850a0()*-0.261101);
}

double NNfunction_ss_dLuL::synapse0x3490c10() {
   return (neuron0x34853e0()*-0.605031);
}

double NNfunction_ss_dLuL::synapse0x3490c50() {
   return (neuron0x3485720()*-0.180879);
}

double NNfunction_ss_dLuL::synapse0x34906e0() {
   return (neuron0x3485a60()*-0.280932);
}

double NNfunction_ss_dLuL::synapse0x3490720() {
   return (neuron0x3485fc0()*0.0490413);
}

double NNfunction_ss_dLuL::synapse0x3490da0() {
   return (neuron0x3486300()*0.272987);
}

double NNfunction_ss_dLuL::synapse0x3490de0() {
   return (neuron0x3486640()*0.572477);
}

double NNfunction_ss_dLuL::synapse0x3490e20() {
   return (neuron0x3486980()*0.097053);
}

double NNfunction_ss_dLuL::synapse0x3490e60() {
   return (neuron0x3486cc0()*0.0181925);
}

double NNfunction_ss_dLuL::synapse0x3490ea0() {
   return (neuron0x3487000()*0.109092);
}

double NNfunction_ss_dLuL::synapse0x3490ee0() {
   return (neuron0x3487340()*0.107815);
}

double NNfunction_ss_dLuL::synapse0x3491260() {
   return (neuron0x34826f0()*0.160207);
}

double NNfunction_ss_dLuL::synapse0x34912a0() {
   return (neuron0x34829a0()*0.136263);
}

double NNfunction_ss_dLuL::synapse0x34912e0() {
   return (neuron0x3482ce0()*-0.153929);
}

double NNfunction_ss_dLuL::synapse0x3491320() {
   return (neuron0x3483020()*-1.23572);
}

double NNfunction_ss_dLuL::synapse0x3491360() {
   return (neuron0x3483360()*-0.370225);
}

double NNfunction_ss_dLuL::synapse0x34913a0() {
   return (neuron0x34836a0()*-0.287087);
}

double NNfunction_ss_dLuL::synapse0x34913e0() {
   return (neuron0x34839e0()*0.402724);
}

double NNfunction_ss_dLuL::synapse0x3491420() {
   return (neuron0x3483d20()*0.0999984);
}

double NNfunction_ss_dLuL::synapse0x3491460() {
   return (neuron0x3484060()*-0.150059);
}

double NNfunction_ss_dLuL::synapse0x34914a0() {
   return (neuron0x34843a0()*0.00430417);
}

double NNfunction_ss_dLuL::synapse0x34914e0() {
   return (neuron0x34846e0()*0.474428);
}

double NNfunction_ss_dLuL::synapse0x3491520() {
   return (neuron0x3484a20()*0.993225);
}

double NNfunction_ss_dLuL::synapse0x3491560() {
   return (neuron0x3484d60()*-0.202024);
}

double NNfunction_ss_dLuL::synapse0x34915a0() {
   return (neuron0x34850a0()*-0.188612);
}

double NNfunction_ss_dLuL::synapse0x34915e0() {
   return (neuron0x34853e0()*-0.268412);
}

double NNfunction_ss_dLuL::synapse0x3491620() {
   return (neuron0x3485720()*-0.338356);
}

double NNfunction_ss_dLuL::synapse0x34910b0() {
   return (neuron0x3485a60()*-0.406122);
}

double NNfunction_ss_dLuL::synapse0x34910f0() {
   return (neuron0x3485fc0()*-0.31194);
}

double NNfunction_ss_dLuL::synapse0x3491770() {
   return (neuron0x3486300()*0.730661);
}

double NNfunction_ss_dLuL::synapse0x34917b0() {
   return (neuron0x3486640()*-0.505522);
}

double NNfunction_ss_dLuL::synapse0x34917f0() {
   return (neuron0x3486980()*-0.572528);
}

double NNfunction_ss_dLuL::synapse0x3491830() {
   return (neuron0x3486cc0()*0.271328);
}

double NNfunction_ss_dLuL::synapse0x3491870() {
   return (neuron0x3487000()*0.174581);
}

double NNfunction_ss_dLuL::synapse0x34918b0() {
   return (neuron0x3487340()*0.459029);
}

double NNfunction_ss_dLuL::synapse0x3491c30() {
   return (neuron0x34826f0()*-0.983542);
}

double NNfunction_ss_dLuL::synapse0x3491c70() {
   return (neuron0x34829a0()*0.14711);
}

double NNfunction_ss_dLuL::synapse0x3491cb0() {
   return (neuron0x3482ce0()*0.00601394);
}

double NNfunction_ss_dLuL::synapse0x3491cf0() {
   return (neuron0x3483020()*0.485725);
}

double NNfunction_ss_dLuL::synapse0x3491d30() {
   return (neuron0x3483360()*0.20267);
}

double NNfunction_ss_dLuL::synapse0x3491d70() {
   return (neuron0x34836a0()*-0.188738);
}

double NNfunction_ss_dLuL::synapse0x3491db0() {
   return (neuron0x34839e0()*0.76032);
}

double NNfunction_ss_dLuL::synapse0x3491df0() {
   return (neuron0x3483d20()*0.280144);
}

double NNfunction_ss_dLuL::synapse0x3491e30() {
   return (neuron0x3484060()*-0.905124);
}

double NNfunction_ss_dLuL::synapse0x3491e70() {
   return (neuron0x34843a0()*0.418887);
}

double NNfunction_ss_dLuL::synapse0x3491eb0() {
   return (neuron0x34846e0()*-0.293262);
}

double NNfunction_ss_dLuL::synapse0x3491ef0() {
   return (neuron0x3484a20()*-1.1892);
}

double NNfunction_ss_dLuL::synapse0x3491f30() {
   return (neuron0x3484d60()*0.27467);
}

double NNfunction_ss_dLuL::synapse0x3491f70() {
   return (neuron0x34850a0()*0.129096);
}

double NNfunction_ss_dLuL::synapse0x3491fb0() {
   return (neuron0x34853e0()*-0.190824);
}

double NNfunction_ss_dLuL::synapse0x3491ff0() {
   return (neuron0x3485720()*-0.363866);
}

double NNfunction_ss_dLuL::synapse0x3491a80() {
   return (neuron0x3485a60()*0.420483);
}

double NNfunction_ss_dLuL::synapse0x3491ac0() {
   return (neuron0x3485fc0()*-0.373163);
}

double NNfunction_ss_dLuL::synapse0x3492140() {
   return (neuron0x3486300()*-0.0752924);
}

double NNfunction_ss_dLuL::synapse0x3492180() {
   return (neuron0x3486640()*-0.451555);
}

double NNfunction_ss_dLuL::synapse0x34921c0() {
   return (neuron0x3486980()*0.218972);
}

double NNfunction_ss_dLuL::synapse0x3492200() {
   return (neuron0x3486cc0()*-0.289041);
}

double NNfunction_ss_dLuL::synapse0x3492240() {
   return (neuron0x3487000()*-0.254207);
}

double NNfunction_ss_dLuL::synapse0x3492280() {
   return (neuron0x3487340()*0.180709);
}

double NNfunction_ss_dLuL::synapse0x3492600() {
   return (neuron0x34826f0()*0.245832);
}

double NNfunction_ss_dLuL::synapse0x3482880() {
   return (neuron0x34829a0()*-0.0418654);
}

double NNfunction_ss_dLuL::synapse0x34828c0() {
   return (neuron0x3482ce0()*-0.984168);
}

double NNfunction_ss_dLuL::synapse0x3482bc0() {
   return (neuron0x3483020()*-0.481142);
}

double NNfunction_ss_dLuL::synapse0x3482c00() {
   return (neuron0x3483360()*0.2181);
}

double NNfunction_ss_dLuL::synapse0x3482f00() {
   return (neuron0x34836a0()*0.439014);
}

double NNfunction_ss_dLuL::synapse0x3482f40() {
   return (neuron0x34839e0()*0.573975);
}

double NNfunction_ss_dLuL::synapse0x3483240() {
   return (neuron0x3483d20()*0.150681);
}

double NNfunction_ss_dLuL::synapse0x3483280() {
   return (neuron0x3484060()*-0.672557);
}

double NNfunction_ss_dLuL::synapse0x3483580() {
   return (neuron0x34843a0()*0.344738);
}

double NNfunction_ss_dLuL::synapse0x34835c0() {
   return (neuron0x34846e0()*0.302355);
}

double NNfunction_ss_dLuL::synapse0x34838c0() {
   return (neuron0x3484a20()*0.0770036);
}

double NNfunction_ss_dLuL::synapse0x3483900() {
   return (neuron0x3484d60()*0.103024);
}

double NNfunction_ss_dLuL::synapse0x3483c00() {
   return (neuron0x34850a0()*0.623602);
}

double NNfunction_ss_dLuL::synapse0x3483c40() {
   return (neuron0x34853e0()*-0.669818);
}

double NNfunction_ss_dLuL::synapse0x3483f40() {
   return (neuron0x3485720()*0.0410896);
}

double NNfunction_ss_dLuL::synapse0x3483f80() {
   return (neuron0x3485a60()*0.0490155);
}

double NNfunction_ss_dLuL::synapse0x3484280() {
   return (neuron0x3485fc0()*0.164143);
}

double NNfunction_ss_dLuL::synapse0x34842c0() {
   return (neuron0x3486300()*-0.171933);
}

double NNfunction_ss_dLuL::synapse0x34845c0() {
   return (neuron0x3486640()*0.124708);
}

double NNfunction_ss_dLuL::synapse0x3484600() {
   return (neuron0x3486980()*0.768651);
}

double NNfunction_ss_dLuL::synapse0x3484900() {
   return (neuron0x3486cc0()*0.431028);
}

double NNfunction_ss_dLuL::synapse0x3484940() {
   return (neuron0x3487000()*0.474781);
}

double NNfunction_ss_dLuL::synapse0x3484c40() {
   return (neuron0x3487340()*0.0590437);
}

double NNfunction_ss_dLuL::synapse0x3484c80() {
   return (neuron0x34826f0()*-0.106857);
}

double NNfunction_ss_dLuL::synapse0x3485940() {
   return (neuron0x34829a0()*-0.0110186);
}

double NNfunction_ss_dLuL::synapse0x3485980() {
   return (neuron0x3482ce0()*-0.890826);
}

double NNfunction_ss_dLuL::synapse0x3492450() {
   return (neuron0x3483020()*-0.910595);
}

double NNfunction_ss_dLuL::synapse0x3492490() {
   return (neuron0x3483360()*-0.0843422);
}

double NNfunction_ss_dLuL::synapse0x3485c80() {
   return (neuron0x34836a0()*0.125007);
}

double NNfunction_ss_dLuL::synapse0x3485cc0() {
   return (neuron0x34839e0()*0.080315);
}

double NNfunction_ss_dLuL::synapse0x34861e0() {
   return (neuron0x3483d20()*0.159473);
}

double NNfunction_ss_dLuL::synapse0x3486220() {
   return (neuron0x3484060()*-0.0490043);
}

double NNfunction_ss_dLuL::synapse0x3486520() {
   return (neuron0x34843a0()*-0.048674);
}

double NNfunction_ss_dLuL::synapse0x3486560() {
   return (neuron0x34846e0()*-0.0722474);
}

double NNfunction_ss_dLuL::synapse0x3486860() {
   return (neuron0x3484a20()*0.166483);
}

double NNfunction_ss_dLuL::synapse0x34868a0() {
   return (neuron0x3484d60()*0.0371887);
}

double NNfunction_ss_dLuL::synapse0x3486ba0() {
   return (neuron0x34850a0()*-0.0259153);
}

double NNfunction_ss_dLuL::synapse0x3486be0() {
   return (neuron0x34853e0()*-0.0243757);
}

double NNfunction_ss_dLuL::synapse0x3486ee0() {
   return (neuron0x3485720()*0.105343);
}

double NNfunction_ss_dLuL::synapse0x3486f20() {
   return (neuron0x3485a60()*0.121694);
}

double NNfunction_ss_dLuL::synapse0x3487220() {
   return (neuron0x3485fc0()*0.0193924);
}

double NNfunction_ss_dLuL::synapse0x3487260() {
   return (neuron0x3486300()*0.0287538);
}

double NNfunction_ss_dLuL::synapse0x3487560() {
   return (neuron0x3486640()*-0.0077662);
}

double NNfunction_ss_dLuL::synapse0x34875a0() {
   return (neuron0x3486980()*0.0806107);
}

double NNfunction_ss_dLuL::synapse0x3484f80() {
   return (neuron0x3486cc0()*0.0376686);
}

double NNfunction_ss_dLuL::synapse0x3484fc0() {
   return (neuron0x3487000()*-0.0683258);
}

double NNfunction_ss_dLuL::synapse0x3494370() {
   return (neuron0x3487340()*0.0660413);
}

double NNfunction_ss_dLuL::synapse0x34946f0() {
   return (neuron0x34826f0()*0.317526);
}

double NNfunction_ss_dLuL::synapse0x3494730() {
   return (neuron0x34829a0()*-0.117844);
}

double NNfunction_ss_dLuL::synapse0x3494770() {
   return (neuron0x3482ce0()*-0.659089);
}

double NNfunction_ss_dLuL::synapse0x34947b0() {
   return (neuron0x3483020()*-0.620275);
}

double NNfunction_ss_dLuL::synapse0x34947f0() {
   return (neuron0x3483360()*-0.309894);
}

double NNfunction_ss_dLuL::synapse0x3494830() {
   return (neuron0x34836a0()*-0.0965941);
}

double NNfunction_ss_dLuL::synapse0x3494870() {
   return (neuron0x34839e0()*-0.0649635);
}

double NNfunction_ss_dLuL::synapse0x34948b0() {
   return (neuron0x3483d20()*0.36362);
}

double NNfunction_ss_dLuL::synapse0x34948f0() {
   return (neuron0x3484060()*0.42075);
}

double NNfunction_ss_dLuL::synapse0x3494930() {
   return (neuron0x34843a0()*0.102853);
}

double NNfunction_ss_dLuL::synapse0x3494970() {
   return (neuron0x34846e0()*-0.0627255);
}

double NNfunction_ss_dLuL::synapse0x34949b0() {
   return (neuron0x3484a20()*-1.22743);
}

double NNfunction_ss_dLuL::synapse0x34949f0() {
   return (neuron0x3484d60()*0.0601581);
}

double NNfunction_ss_dLuL::synapse0x3494a30() {
   return (neuron0x34850a0()*-0.267931);
}

double NNfunction_ss_dLuL::synapse0x3494a70() {
   return (neuron0x34853e0()*0.826356);
}

double NNfunction_ss_dLuL::synapse0x3494ab0() {
   return (neuron0x3485720()*-0.664237);
}

double NNfunction_ss_dLuL::synapse0x3494540() {
   return (neuron0x3485a60()*0.13448);
}

double NNfunction_ss_dLuL::synapse0x3494580() {
   return (neuron0x3485fc0()*0.245829);
}

double NNfunction_ss_dLuL::synapse0x3494c00() {
   return (neuron0x3486300()*0.134353);
}

double NNfunction_ss_dLuL::synapse0x3494c40() {
   return (neuron0x3486640()*-0.191804);
}

double NNfunction_ss_dLuL::synapse0x3494c80() {
   return (neuron0x3486980()*0.310268);
}

double NNfunction_ss_dLuL::synapse0x3494cc0() {
   return (neuron0x3486cc0()*-0.0020485);
}

double NNfunction_ss_dLuL::synapse0x3494d00() {
   return (neuron0x3487000()*-0.126767);
}

double NNfunction_ss_dLuL::synapse0x3494d40() {
   return (neuron0x3487340()*0.237735);
}

double NNfunction_ss_dLuL::synapse0x34950c0() {
   return (neuron0x34826f0()*0.496582);
}

double NNfunction_ss_dLuL::synapse0x3495100() {
   return (neuron0x34829a0()*0.489945);
}

double NNfunction_ss_dLuL::synapse0x3495140() {
   return (neuron0x3482ce0()*0.225094);
}

double NNfunction_ss_dLuL::synapse0x3495180() {
   return (neuron0x3483020()*-0.588532);
}

double NNfunction_ss_dLuL::synapse0x34951c0() {
   return (neuron0x3483360()*-0.176271);
}

double NNfunction_ss_dLuL::synapse0x3495200() {
   return (neuron0x34836a0()*0.370111);
}

double NNfunction_ss_dLuL::synapse0x3495240() {
   return (neuron0x34839e0()*-0.186946);
}

double NNfunction_ss_dLuL::synapse0x3495280() {
   return (neuron0x3483d20()*-0.471969);
}

double NNfunction_ss_dLuL::synapse0x34952c0() {
   return (neuron0x3484060()*0.519952);
}

double NNfunction_ss_dLuL::synapse0x3495300() {
   return (neuron0x34843a0()*0.0579709);
}

double NNfunction_ss_dLuL::synapse0x3495340() {
   return (neuron0x34846e0()*0.463555);
}

double NNfunction_ss_dLuL::synapse0x3495380() {
   return (neuron0x3484a20()*0.231487);
}

double NNfunction_ss_dLuL::synapse0x34953c0() {
   return (neuron0x3484d60()*-0.323762);
}

double NNfunction_ss_dLuL::synapse0x3495400() {
   return (neuron0x34850a0()*-0.890667);
}

double NNfunction_ss_dLuL::synapse0x3495440() {
   return (neuron0x34853e0()*-0.517792);
}

double NNfunction_ss_dLuL::synapse0x3495480() {
   return (neuron0x3485720()*-0.299218);
}

double NNfunction_ss_dLuL::synapse0x3494f10() {
   return (neuron0x3485a60()*-0.662353);
}

double NNfunction_ss_dLuL::synapse0x3494f50() {
   return (neuron0x3485fc0()*0.573929);
}

double NNfunction_ss_dLuL::synapse0x34955d0() {
   return (neuron0x3486300()*0.984607);
}

double NNfunction_ss_dLuL::synapse0x3495610() {
   return (neuron0x3486640()*-0.096936);
}

double NNfunction_ss_dLuL::synapse0x3495650() {
   return (neuron0x3486980()*0.165673);
}

double NNfunction_ss_dLuL::synapse0x3495690() {
   return (neuron0x3486cc0()*-0.710322);
}

double NNfunction_ss_dLuL::synapse0x34956d0() {
   return (neuron0x3487000()*0.276942);
}

double NNfunction_ss_dLuL::synapse0x3495710() {
   return (neuron0x3487340()*0.149285);
}

double NNfunction_ss_dLuL::synapse0x3495a90() {
   return (neuron0x34826f0()*-0.222584);
}

double NNfunction_ss_dLuL::synapse0x3495ad0() {
   return (neuron0x34829a0()*-0.558118);
}

double NNfunction_ss_dLuL::synapse0x3495b10() {
   return (neuron0x3482ce0()*0.651028);
}

double NNfunction_ss_dLuL::synapse0x3495b50() {
   return (neuron0x3483020()*0.231166);
}

double NNfunction_ss_dLuL::synapse0x3495b90() {
   return (neuron0x3483360()*0.323577);
}

double NNfunction_ss_dLuL::synapse0x3495bd0() {
   return (neuron0x34836a0()*0.307395);
}

double NNfunction_ss_dLuL::synapse0x3495c10() {
   return (neuron0x34839e0()*0.977487);
}

double NNfunction_ss_dLuL::synapse0x3495c50() {
   return (neuron0x3483d20()*-0.196647);
}

double NNfunction_ss_dLuL::synapse0x3495c90() {
   return (neuron0x3484060()*-0.502707);
}

double NNfunction_ss_dLuL::synapse0x3495cd0() {
   return (neuron0x34843a0()*0.553976);
}

double NNfunction_ss_dLuL::synapse0x3495d10() {
   return (neuron0x34846e0()*0.729108);
}

double NNfunction_ss_dLuL::synapse0x3495d50() {
   return (neuron0x3484a20()*-1.34611);
}

double NNfunction_ss_dLuL::synapse0x3495d90() {
   return (neuron0x3484d60()*0.12652);
}

double NNfunction_ss_dLuL::synapse0x3495dd0() {
   return (neuron0x34850a0()*-0.0619029);
}

double NNfunction_ss_dLuL::synapse0x3495e10() {
   return (neuron0x34853e0()*0.348601);
}

double NNfunction_ss_dLuL::synapse0x3495e50() {
   return (neuron0x3485720()*-0.233886);
}

double NNfunction_ss_dLuL::synapse0x34958e0() {
   return (neuron0x3485a60()*0.35421);
}

double NNfunction_ss_dLuL::synapse0x3495920() {
   return (neuron0x3485fc0()*-0.233871);
}

double NNfunction_ss_dLuL::synapse0x3495fa0() {
   return (neuron0x3486300()*-1.01397);
}

double NNfunction_ss_dLuL::synapse0x3495fe0() {
   return (neuron0x3486640()*-0.57588);
}

double NNfunction_ss_dLuL::synapse0x3496020() {
   return (neuron0x3486980()*-0.192312);
}

double NNfunction_ss_dLuL::synapse0x3496060() {
   return (neuron0x3486cc0()*-0.459786);
}

double NNfunction_ss_dLuL::synapse0x34960a0() {
   return (neuron0x3487000()*0.162988);
}

double NNfunction_ss_dLuL::synapse0x34960e0() {
   return (neuron0x3487340()*0.568988);
}

double NNfunction_ss_dLuL::synapse0x3496460() {
   return (neuron0x34826f0()*-0.580734);
}

double NNfunction_ss_dLuL::synapse0x34964a0() {
   return (neuron0x34829a0()*0.240467);
}

double NNfunction_ss_dLuL::synapse0x34964e0() {
   return (neuron0x3482ce0()*-0.701534);
}

double NNfunction_ss_dLuL::synapse0x3496520() {
   return (neuron0x3483020()*-0.599942);
}

double NNfunction_ss_dLuL::synapse0x3496560() {
   return (neuron0x3483360()*-0.084244);
}

double NNfunction_ss_dLuL::synapse0x34965a0() {
   return (neuron0x34836a0()*-0.188117);
}

double NNfunction_ss_dLuL::synapse0x34965e0() {
   return (neuron0x34839e0()*0.118265);
}

double NNfunction_ss_dLuL::synapse0x3496620() {
   return (neuron0x3483d20()*0.566723);
}

double NNfunction_ss_dLuL::synapse0x3496660() {
   return (neuron0x3484060()*-0.20342);
}

double NNfunction_ss_dLuL::synapse0x34966a0() {
   return (neuron0x34843a0()*-0.00589266);
}

double NNfunction_ss_dLuL::synapse0x34966e0() {
   return (neuron0x34846e0()*-0.55208);
}

double NNfunction_ss_dLuL::synapse0x3496720() {
   return (neuron0x3484a20()*-0.338422);
}

double NNfunction_ss_dLuL::synapse0x3496760() {
   return (neuron0x3484d60()*-0.249151);
}

double NNfunction_ss_dLuL::synapse0x34967a0() {
   return (neuron0x34850a0()*-0.404105);
}

double NNfunction_ss_dLuL::synapse0x34967e0() {
   return (neuron0x34853e0()*-0.574372);
}

double NNfunction_ss_dLuL::synapse0x3496820() {
   return (neuron0x3485720()*0.464633);
}

double NNfunction_ss_dLuL::synapse0x34962b0() {
   return (neuron0x3485a60()*0.575636);
}

double NNfunction_ss_dLuL::synapse0x34962f0() {
   return (neuron0x3485fc0()*0.103221);
}

double NNfunction_ss_dLuL::synapse0x3496970() {
   return (neuron0x3486300()*-0.0842051);
}

double NNfunction_ss_dLuL::synapse0x34969b0() {
   return (neuron0x3486640()*0.0388173);
}

double NNfunction_ss_dLuL::synapse0x34969f0() {
   return (neuron0x3486980()*0.135843);
}

double NNfunction_ss_dLuL::synapse0x3496a30() {
   return (neuron0x3486cc0()*-0.179871);
}

double NNfunction_ss_dLuL::synapse0x3496a70() {
   return (neuron0x3487000()*0.0572084);
}

double NNfunction_ss_dLuL::synapse0x3496ab0() {
   return (neuron0x3487340()*-0.147786);
}

double NNfunction_ss_dLuL::synapse0x3496e30() {
   return (neuron0x34826f0()*0.00772846);
}

double NNfunction_ss_dLuL::synapse0x3496e70() {
   return (neuron0x34829a0()*-0.0229603);
}

double NNfunction_ss_dLuL::synapse0x3496eb0() {
   return (neuron0x3482ce0()*0.0121128);
}

double NNfunction_ss_dLuL::synapse0x3496ef0() {
   return (neuron0x3483020()*0.252284);
}

double NNfunction_ss_dLuL::synapse0x3496f30() {
   return (neuron0x3483360()*0.0476748);
}

double NNfunction_ss_dLuL::synapse0x3496f70() {
   return (neuron0x34836a0()*-0.0331599);
}

double NNfunction_ss_dLuL::synapse0x3496fb0() {
   return (neuron0x34839e0()*0.00242352);
}

double NNfunction_ss_dLuL::synapse0x3496ff0() {
   return (neuron0x3483d20()*-0.000983677);
}

double NNfunction_ss_dLuL::synapse0x3497030() {
   return (neuron0x3484060()*-0.018697);
}

double NNfunction_ss_dLuL::synapse0x348f1f0() {
   return (neuron0x34843a0()*-0.0349474);
}

double NNfunction_ss_dLuL::synapse0x348f230() {
   return (neuron0x34846e0()*0.0798026);
}

double NNfunction_ss_dLuL::synapse0x348f270() {
   return (neuron0x3484a20()*-0.511609);
}

double NNfunction_ss_dLuL::synapse0x348f2b0() {
   return (neuron0x3484d60()*0.0188587);
}

double NNfunction_ss_dLuL::synapse0x348f2f0() {
   return (neuron0x34850a0()*0.000243647);
}

double NNfunction_ss_dLuL::synapse0x348f330() {
   return (neuron0x34853e0()*0.00379994);
}

double NNfunction_ss_dLuL::synapse0x348f370() {
   return (neuron0x3485720()*0.0252252);
}

double NNfunction_ss_dLuL::synapse0x3496c80() {
   return (neuron0x3485a60()*-0.0355227);
}

double NNfunction_ss_dLuL::synapse0x3496cc0() {
   return (neuron0x3485fc0()*-0.0329328);
}

double NNfunction_ss_dLuL::synapse0x348f4c0() {
   return (neuron0x3486300()*-0.00805732);
}

double NNfunction_ss_dLuL::synapse0x348f500() {
   return (neuron0x3486640()*0.0196118);
}

double NNfunction_ss_dLuL::synapse0x348f540() {
   return (neuron0x3486980()*-0.0210333);
}

double NNfunction_ss_dLuL::synapse0x348f580() {
   return (neuron0x3486cc0()*-0.0348057);
}

double NNfunction_ss_dLuL::synapse0x348f5c0() {
   return (neuron0x3487000()*0.0144146);
}

double NNfunction_ss_dLuL::synapse0x348f600() {
   return (neuron0x3487340()*-0.0351275);
}

double NNfunction_ss_dLuL::synapse0x348f980() {
   return (neuron0x34826f0()*0.0226255);
}

double NNfunction_ss_dLuL::synapse0x348f9c0() {
   return (neuron0x34829a0()*-0.000808428);
}

double NNfunction_ss_dLuL::synapse0x348fa00() {
   return (neuron0x3482ce0()*0.0094379);
}

double NNfunction_ss_dLuL::synapse0x348fa40() {
   return (neuron0x3483020()*-3.62668);
}

double NNfunction_ss_dLuL::synapse0x348fa80() {
   return (neuron0x3483360()*0.00470207);
}

double NNfunction_ss_dLuL::synapse0x348fac0() {
   return (neuron0x34836a0()*0.0120757);
}

double NNfunction_ss_dLuL::synapse0x348fb00() {
   return (neuron0x34839e0()*0.0263633);
}

double NNfunction_ss_dLuL::synapse0x348fb40() {
   return (neuron0x3483d20()*0.00771624);
}

double NNfunction_ss_dLuL::synapse0x348fb80() {
   return (neuron0x3484060()*-0.0470208);
}

double NNfunction_ss_dLuL::synapse0x348fbc0() {
   return (neuron0x34843a0()*-0.0263734);
}

double NNfunction_ss_dLuL::synapse0x348fc00() {
   return (neuron0x34846e0()*-0.00783957);
}

double NNfunction_ss_dLuL::synapse0x348fc40() {
   return (neuron0x3484a20()*0.653633);
}

double NNfunction_ss_dLuL::synapse0x348fc80() {
   return (neuron0x3484d60()*0.0350728);
}

double NNfunction_ss_dLuL::synapse0x348fcc0() {
   return (neuron0x34850a0()*-0.0105115);
}

double NNfunction_ss_dLuL::synapse0x348fd00() {
   return (neuron0x34853e0()*0.0257243);
}

double NNfunction_ss_dLuL::synapse0x348fd40() {
   return (neuron0x3485720()*0.0733085);
}

double NNfunction_ss_dLuL::synapse0x348f7d0() {
   return (neuron0x3485a60()*-0.0176998);
}

double NNfunction_ss_dLuL::synapse0x348f810() {
   return (neuron0x3485fc0()*0.0299024);
}

double NNfunction_ss_dLuL::synapse0x348fe90() {
   return (neuron0x3486300()*0.0146571);
}

double NNfunction_ss_dLuL::synapse0x348fed0() {
   return (neuron0x3486640()*-0.0330292);
}

double NNfunction_ss_dLuL::synapse0x348ff10() {
   return (neuron0x3486980()*0.00738911);
}

double NNfunction_ss_dLuL::synapse0x348ff50() {
   return (neuron0x3486cc0()*0.00184345);
}

double NNfunction_ss_dLuL::synapse0x348ff90() {
   return (neuron0x3487000()*0.00983171);
}

double NNfunction_ss_dLuL::synapse0x348ffd0() {
   return (neuron0x3487340()*-0.0461529);
}

double NNfunction_ss_dLuL::synapse0x34901a0() {
   return (neuron0x34826f0()*0.0264241);
}

double NNfunction_ss_dLuL::synapse0x3499230() {
   return (neuron0x34829a0()*0.0338328);
}

double NNfunction_ss_dLuL::synapse0x3499270() {
   return (neuron0x3482ce0()*-0.184182);
}

double NNfunction_ss_dLuL::synapse0x34992b0() {
   return (neuron0x3483020()*4.19718);
}

double NNfunction_ss_dLuL::synapse0x34992f0() {
   return (neuron0x3483360()*-0.0403436);
}

double NNfunction_ss_dLuL::synapse0x3499330() {
   return (neuron0x34836a0()*-0.0118918);
}

double NNfunction_ss_dLuL::synapse0x3499370() {
   return (neuron0x34839e0()*-0.0708697);
}

double NNfunction_ss_dLuL::synapse0x34993b0() {
   return (neuron0x3483d20()*0.0184916);
}

double NNfunction_ss_dLuL::synapse0x34993f0() {
   return (neuron0x3484060()*0.0108761);
}

double NNfunction_ss_dLuL::synapse0x3499430() {
   return (neuron0x34843a0()*-0.0736519);
}

double NNfunction_ss_dLuL::synapse0x3499470() {
   return (neuron0x34846e0()*-0.0101851);
}

double NNfunction_ss_dLuL::synapse0x34994b0() {
   return (neuron0x3484a20()*0.0999698);
}

double NNfunction_ss_dLuL::synapse0x34994f0() {
   return (neuron0x3484d60()*-0.00381028);
}

double NNfunction_ss_dLuL::synapse0x3499530() {
   return (neuron0x34850a0()*-0.0824941);
}

double NNfunction_ss_dLuL::synapse0x3499570() {
   return (neuron0x34853e0()*0.106412);
}

double NNfunction_ss_dLuL::synapse0x34995b0() {
   return (neuron0x3485720()*0.0862746);
}

double NNfunction_ss_dLuL::synapse0x3499080() {
   return (neuron0x3485a60()*-0.0130111);
}

double NNfunction_ss_dLuL::synapse0x34990c0() {
   return (neuron0x3485fc0()*0.0436045);
}

double NNfunction_ss_dLuL::synapse0x3499700() {
   return (neuron0x3486300()*0.035614);
}

double NNfunction_ss_dLuL::synapse0x3499740() {
   return (neuron0x3486640()*-0.00558803);
}

double NNfunction_ss_dLuL::synapse0x3499780() {
   return (neuron0x3486980()*0.0366164);
}

double NNfunction_ss_dLuL::synapse0x34997c0() {
   return (neuron0x3486cc0()*-0.120595);
}

double NNfunction_ss_dLuL::synapse0x3499800() {
   return (neuron0x3487000()*-0.0241425);
}

double NNfunction_ss_dLuL::synapse0x3499840() {
   return (neuron0x3487340()*-0.0245797);
}

double NNfunction_ss_dLuL::synapse0x3499bc0() {
   return (neuron0x34826f0()*0.0347889);
}

double NNfunction_ss_dLuL::synapse0x3499c00() {
   return (neuron0x34829a0()*-0.076618);
}

double NNfunction_ss_dLuL::synapse0x3499c40() {
   return (neuron0x3482ce0()*0.347344);
}

double NNfunction_ss_dLuL::synapse0x3499c80() {
   return (neuron0x3483020()*3.51492);
}

double NNfunction_ss_dLuL::synapse0x3499cc0() {
   return (neuron0x3483360()*0.0893248);
}

double NNfunction_ss_dLuL::synapse0x3499d00() {
   return (neuron0x34836a0()*-0.0139912);
}

double NNfunction_ss_dLuL::synapse0x3499d40() {
   return (neuron0x34839e0()*0.0483776);
}

double NNfunction_ss_dLuL::synapse0x3499d80() {
   return (neuron0x3483d20()*-0.0558889);
}

double NNfunction_ss_dLuL::synapse0x3499dc0() {
   return (neuron0x3484060()*-0.0805244);
}

double NNfunction_ss_dLuL::synapse0x3499e00() {
   return (neuron0x34843a0()*0.0910952);
}

double NNfunction_ss_dLuL::synapse0x3499e40() {
   return (neuron0x34846e0()*0.0654869);
}

double NNfunction_ss_dLuL::synapse0x3499e80() {
   return (neuron0x3484a20()*-0.231051);
}

double NNfunction_ss_dLuL::synapse0x3499ec0() {
   return (neuron0x3484d60()*0.203504);
}

double NNfunction_ss_dLuL::synapse0x3499f00() {
   return (neuron0x34850a0()*0.0494126);
}

double NNfunction_ss_dLuL::synapse0x3499f40() {
   return (neuron0x34853e0()*-0.0510671);
}

double NNfunction_ss_dLuL::synapse0x3499f80() {
   return (neuron0x3485720()*0.0424954);
}

double NNfunction_ss_dLuL::synapse0x3499a10() {
   return (neuron0x3485a60()*-0.153334);
}

double NNfunction_ss_dLuL::synapse0x3499a50() {
   return (neuron0x3485fc0()*-0.0167043);
}

double NNfunction_ss_dLuL::synapse0x349a0d0() {
   return (neuron0x3486300()*0.0534862);
}

double NNfunction_ss_dLuL::synapse0x349a110() {
   return (neuron0x3486640()*-0.010455);
}

double NNfunction_ss_dLuL::synapse0x349a150() {
   return (neuron0x3486980()*-0.114668);
}

double NNfunction_ss_dLuL::synapse0x349a190() {
   return (neuron0x3486cc0()*0.15262);
}

double NNfunction_ss_dLuL::synapse0x349a1d0() {
   return (neuron0x3487000()*0.104927);
}

double NNfunction_ss_dLuL::synapse0x349a210() {
   return (neuron0x3487340()*-0.106363);
}

double NNfunction_ss_dLuL::synapse0x349a590() {
   return (neuron0x34826f0()*0.398964);
}

double NNfunction_ss_dLuL::synapse0x349a5d0() {
   return (neuron0x34829a0()*-0.0993266);
}

double NNfunction_ss_dLuL::synapse0x349a610() {
   return (neuron0x3482ce0()*0.134716);
}

double NNfunction_ss_dLuL::synapse0x349a650() {
   return (neuron0x3483020()*-1.21303);
}

double NNfunction_ss_dLuL::synapse0x349a690() {
   return (neuron0x3483360()*0.36422);
}

double NNfunction_ss_dLuL::synapse0x349a6d0() {
   return (neuron0x34836a0()*-0.00151434);
}

double NNfunction_ss_dLuL::synapse0x349a710() {
   return (neuron0x34839e0()*-0.10946);
}

double NNfunction_ss_dLuL::synapse0x349a750() {
   return (neuron0x3483d20()*-0.51215);
}

double NNfunction_ss_dLuL::synapse0x349a790() {
   return (neuron0x3484060()*-0.42436);
}

double NNfunction_ss_dLuL::synapse0x349a7d0() {
   return (neuron0x34843a0()*-0.474055);
}

double NNfunction_ss_dLuL::synapse0x349a810() {
   return (neuron0x34846e0()*-0.0376168);
}

double NNfunction_ss_dLuL::synapse0x349a850() {
   return (neuron0x3484a20()*1.20774);
}

double NNfunction_ss_dLuL::synapse0x349a890() {
   return (neuron0x3484d60()*-0.163547);
}

double NNfunction_ss_dLuL::synapse0x349a8d0() {
   return (neuron0x34850a0()*0.0722475);
}

double NNfunction_ss_dLuL::synapse0x349a910() {
   return (neuron0x34853e0()*-0.155621);
}

double NNfunction_ss_dLuL::synapse0x349a950() {
   return (neuron0x3485720()*0.0736413);
}

double NNfunction_ss_dLuL::synapse0x349a3e0() {
   return (neuron0x3485a60()*-0.046337);
}

double NNfunction_ss_dLuL::synapse0x349a420() {
   return (neuron0x3485fc0()*-0.143737);
}

double NNfunction_ss_dLuL::synapse0x349aaa0() {
   return (neuron0x3486300()*-0.0639845);
}

double NNfunction_ss_dLuL::synapse0x349aae0() {
   return (neuron0x3486640()*0.140436);
}

double NNfunction_ss_dLuL::synapse0x349ab20() {
   return (neuron0x3486980()*0.132472);
}

double NNfunction_ss_dLuL::synapse0x349ab60() {
   return (neuron0x3486cc0()*0.303183);
}

double NNfunction_ss_dLuL::synapse0x349aba0() {
   return (neuron0x3487000()*-0.190095);
}

double NNfunction_ss_dLuL::synapse0x349abe0() {
   return (neuron0x3487340()*0.199172);
}

double NNfunction_ss_dLuL::synapse0x349af60() {
   return (neuron0x34826f0()*-0.478183);
}

double NNfunction_ss_dLuL::synapse0x349afa0() {
   return (neuron0x34829a0()*-0.366444);
}

double NNfunction_ss_dLuL::synapse0x349afe0() {
   return (neuron0x3482ce0()*-0.935062);
}

double NNfunction_ss_dLuL::synapse0x349b020() {
   return (neuron0x3483020()*-0.352864);
}

double NNfunction_ss_dLuL::synapse0x349b060() {
   return (neuron0x3483360()*0.16711);
}

double NNfunction_ss_dLuL::synapse0x349b0a0() {
   return (neuron0x34836a0()*-0.298124);
}

double NNfunction_ss_dLuL::synapse0x349b0e0() {
   return (neuron0x34839e0()*-0.574175);
}

double NNfunction_ss_dLuL::synapse0x349b120() {
   return (neuron0x3483d20()*-0.362734);
}

double NNfunction_ss_dLuL::synapse0x349b160() {
   return (neuron0x3484060()*0.316478);
}

double NNfunction_ss_dLuL::synapse0x349b1a0() {
   return (neuron0x34843a0()*-0.0386003);
}

double NNfunction_ss_dLuL::synapse0x349b1e0() {
   return (neuron0x34846e0()*-0.831211);
}

double NNfunction_ss_dLuL::synapse0x349b220() {
   return (neuron0x3484a20()*-0.656554);
}

double NNfunction_ss_dLuL::synapse0x349b260() {
   return (neuron0x3484d60()*0.125323);
}

double NNfunction_ss_dLuL::synapse0x349b2a0() {
   return (neuron0x34850a0()*0.283319);
}

double NNfunction_ss_dLuL::synapse0x349b2e0() {
   return (neuron0x34853e0()*0.78618);
}

double NNfunction_ss_dLuL::synapse0x349b320() {
   return (neuron0x3485720()*-0.568874);
}

double NNfunction_ss_dLuL::synapse0x349adb0() {
   return (neuron0x3485a60()*-0.816409);
}

double NNfunction_ss_dLuL::synapse0x349adf0() {
   return (neuron0x3485fc0()*-0.013282);
}

double NNfunction_ss_dLuL::synapse0x349b470() {
   return (neuron0x3486300()*0.697938);
}

double NNfunction_ss_dLuL::synapse0x349b4b0() {
   return (neuron0x3486640()*0.538745);
}

double NNfunction_ss_dLuL::synapse0x349b4f0() {
   return (neuron0x3486980()*0.439172);
}

double NNfunction_ss_dLuL::synapse0x349b530() {
   return (neuron0x3486cc0()*0.398315);
}

double NNfunction_ss_dLuL::synapse0x349b570() {
   return (neuron0x3487000()*0.169161);
}

double NNfunction_ss_dLuL::synapse0x349b5b0() {
   return (neuron0x3487340()*-0.205898);
}

double NNfunction_ss_dLuL::synapse0x349b930() {
   return (neuron0x34826f0()*0.403933);
}

double NNfunction_ss_dLuL::synapse0x349b970() {
   return (neuron0x34829a0()*-0.0791335);
}

double NNfunction_ss_dLuL::synapse0x349b9b0() {
   return (neuron0x3482ce0()*-0.291906);
}

double NNfunction_ss_dLuL::synapse0x349b9f0() {
   return (neuron0x3483020()*-1.19463);
}

double NNfunction_ss_dLuL::synapse0x349ba30() {
   return (neuron0x3483360()*-0.193109);
}

double NNfunction_ss_dLuL::synapse0x349ba70() {
   return (neuron0x34836a0()*-0.337283);
}

double NNfunction_ss_dLuL::synapse0x349bab0() {
   return (neuron0x34839e0()*-0.564835);
}

double NNfunction_ss_dLuL::synapse0x349baf0() {
   return (neuron0x3483d20()*0.143817);
}

double NNfunction_ss_dLuL::synapse0x349bb30() {
   return (neuron0x3484060()*0.244099);
}

double NNfunction_ss_dLuL::synapse0x349bb70() {
   return (neuron0x34843a0()*0.491711);
}

double NNfunction_ss_dLuL::synapse0x349bbb0() {
   return (neuron0x34846e0()*-0.238255);
}

double NNfunction_ss_dLuL::synapse0x349bbf0() {
   return (neuron0x3484a20()*-0.0752721);
}

double NNfunction_ss_dLuL::synapse0x349bc30() {
   return (neuron0x3484d60()*0.478734);
}

double NNfunction_ss_dLuL::synapse0x349bc70() {
   return (neuron0x34850a0()*0.465701);
}

double NNfunction_ss_dLuL::synapse0x349bcb0() {
   return (neuron0x34853e0()*0.283789);
}

double NNfunction_ss_dLuL::synapse0x349bcf0() {
   return (neuron0x3485720()*0.458194);
}

double NNfunction_ss_dLuL::synapse0x349b780() {
   return (neuron0x3485a60()*-0.160905);
}

double NNfunction_ss_dLuL::synapse0x349b7c0() {
   return (neuron0x3485fc0()*0.251056);
}

double NNfunction_ss_dLuL::synapse0x349be40() {
   return (neuron0x3486300()*0.313201);
}

double NNfunction_ss_dLuL::synapse0x349be80() {
   return (neuron0x3486640()*-0.169425);
}

double NNfunction_ss_dLuL::synapse0x349bec0() {
   return (neuron0x3486980()*0.277353);
}

double NNfunction_ss_dLuL::synapse0x349bf00() {
   return (neuron0x3486cc0()*-0.498895);
}

double NNfunction_ss_dLuL::synapse0x349bf40() {
   return (neuron0x3487000()*0.28903);
}

double NNfunction_ss_dLuL::synapse0x349bf80() {
   return (neuron0x3487340()*0.350985);
}

double NNfunction_ss_dLuL::synapse0x349c300() {
   return (neuron0x34826f0()*-0.549145);
}

double NNfunction_ss_dLuL::synapse0x349c340() {
   return (neuron0x34829a0()*0.522085);
}

double NNfunction_ss_dLuL::synapse0x349c380() {
   return (neuron0x3482ce0()*-0.141985);
}

double NNfunction_ss_dLuL::synapse0x349c3c0() {
   return (neuron0x3483020()*4.41893);
}

double NNfunction_ss_dLuL::synapse0x349c400() {
   return (neuron0x3483360()*-0.0335001);
}

double NNfunction_ss_dLuL::synapse0x349c440() {
   return (neuron0x34836a0()*0.352585);
}

double NNfunction_ss_dLuL::synapse0x349c480() {
   return (neuron0x34839e0()*0.235374);
}

double NNfunction_ss_dLuL::synapse0x349c4c0() {
   return (neuron0x3483d20()*0.596898);
}

double NNfunction_ss_dLuL::synapse0x349c500() {
   return (neuron0x3484060()*0.313473);
}

double NNfunction_ss_dLuL::synapse0x349c540() {
   return (neuron0x34843a0()*0.256252);
}

double NNfunction_ss_dLuL::synapse0x349c580() {
   return (neuron0x34846e0()*-0.112657);
}

double NNfunction_ss_dLuL::synapse0x349c5c0() {
   return (neuron0x3484a20()*-0.764386);
}

double NNfunction_ss_dLuL::synapse0x349c600() {
   return (neuron0x3484d60()*0.362947);
}

double NNfunction_ss_dLuL::synapse0x349c640() {
   return (neuron0x34850a0()*-0.103131);
}

double NNfunction_ss_dLuL::synapse0x349c680() {
   return (neuron0x34853e0()*0.380714);
}

double NNfunction_ss_dLuL::synapse0x349c6c0() {
   return (neuron0x3485720()*0.472175);
}

double NNfunction_ss_dLuL::synapse0x349c150() {
   return (neuron0x3485a60()*0.164887);
}

double NNfunction_ss_dLuL::synapse0x349c190() {
   return (neuron0x3485fc0()*0.0703448);
}

double NNfunction_ss_dLuL::synapse0x349c810() {
   return (neuron0x3486300()*0.517474);
}

double NNfunction_ss_dLuL::synapse0x349c850() {
   return (neuron0x3486640()*0.198141);
}

double NNfunction_ss_dLuL::synapse0x349c890() {
   return (neuron0x3486980()*0.229665);
}

double NNfunction_ss_dLuL::synapse0x349c8d0() {
   return (neuron0x3486cc0()*-0.101777);
}

double NNfunction_ss_dLuL::synapse0x349c910() {
   return (neuron0x3487000()*0.125112);
}

double NNfunction_ss_dLuL::synapse0x349c950() {
   return (neuron0x3487340()*0.431821);
}

double NNfunction_ss_dLuL::synapse0x349ccd0() {
   return (neuron0x34826f0()*0.408562);
}

double NNfunction_ss_dLuL::synapse0x349cd10() {
   return (neuron0x34829a0()*-0.10067);
}

double NNfunction_ss_dLuL::synapse0x349cd50() {
   return (neuron0x3482ce0()*-0.492691);
}

double NNfunction_ss_dLuL::synapse0x349cd90() {
   return (neuron0x3483020()*0.0905693);
}

double NNfunction_ss_dLuL::synapse0x349cdd0() {
   return (neuron0x3483360()*0.234418);
}

double NNfunction_ss_dLuL::synapse0x349ce10() {
   return (neuron0x34836a0()*-0.17125);
}

double NNfunction_ss_dLuL::synapse0x349ce50() {
   return (neuron0x34839e0()*-0.0155712);
}

double NNfunction_ss_dLuL::synapse0x349ce90() {
   return (neuron0x3483d20()*0.194828);
}

double NNfunction_ss_dLuL::synapse0x349ced0() {
   return (neuron0x3484060()*-0.0432625);
}

double NNfunction_ss_dLuL::synapse0x349cf10() {
   return (neuron0x34843a0()*-0.158826);
}

double NNfunction_ss_dLuL::synapse0x349cf50() {
   return (neuron0x34846e0()*0.327978);
}

double NNfunction_ss_dLuL::synapse0x349cf90() {
   return (neuron0x3484a20()*0.787663);
}

double NNfunction_ss_dLuL::synapse0x349cfd0() {
   return (neuron0x3484d60()*-0.116359);
}

double NNfunction_ss_dLuL::synapse0x349d010() {
   return (neuron0x34850a0()*-0.0845886);
}

double NNfunction_ss_dLuL::synapse0x349d050() {
   return (neuron0x34853e0()*-0.369656);
}

double NNfunction_ss_dLuL::synapse0x349d090() {
   return (neuron0x3485720()*0.906838);
}

double NNfunction_ss_dLuL::synapse0x349cb20() {
   return (neuron0x3485a60()*-0.190515);
}

double NNfunction_ss_dLuL::synapse0x349cb60() {
   return (neuron0x3485fc0()*0.00284381);
}

double NNfunction_ss_dLuL::synapse0x349d1e0() {
   return (neuron0x3486300()*-0.566486);
}

double NNfunction_ss_dLuL::synapse0x349d220() {
   return (neuron0x3486640()*-0.117863);
}

double NNfunction_ss_dLuL::synapse0x349d260() {
   return (neuron0x3486980()*-0.291863);
}

double NNfunction_ss_dLuL::synapse0x349d2a0() {
   return (neuron0x3486cc0()*-0.179011);
}

double NNfunction_ss_dLuL::synapse0x349d2e0() {
   return (neuron0x3487000()*0.0651707);
}

double NNfunction_ss_dLuL::synapse0x349d320() {
   return (neuron0x3487340()*-0.062193);
}

double NNfunction_ss_dLuL::synapse0x349d6a0() {
   return (neuron0x34826f0()*0.0208754);
}

double NNfunction_ss_dLuL::synapse0x349d6e0() {
   return (neuron0x34829a0()*-0.182976);
}

double NNfunction_ss_dLuL::synapse0x349d720() {
   return (neuron0x3482ce0()*0.157486);
}

double NNfunction_ss_dLuL::synapse0x349d760() {
   return (neuron0x3483020()*-2.07432);
}

double NNfunction_ss_dLuL::synapse0x349d7a0() {
   return (neuron0x3483360()*0.0662267);
}

double NNfunction_ss_dLuL::synapse0x349d7e0() {
   return (neuron0x34836a0()*-0.126895);
}

double NNfunction_ss_dLuL::synapse0x349d820() {
   return (neuron0x34839e0()*0.214147);
}

double NNfunction_ss_dLuL::synapse0x349d860() {
   return (neuron0x3483d20()*-0.176912);
}

double NNfunction_ss_dLuL::synapse0x349d8a0() {
   return (neuron0x3484060()*-0.0227849);
}

double NNfunction_ss_dLuL::synapse0x349d8e0() {
   return (neuron0x34843a0()*-0.0586097);
}

double NNfunction_ss_dLuL::synapse0x349d920() {
   return (neuron0x34846e0()*-0.0110498);
}

double NNfunction_ss_dLuL::synapse0x349d960() {
   return (neuron0x3484a20()*0.845362);
}

double NNfunction_ss_dLuL::synapse0x349d9a0() {
   return (neuron0x3484d60()*-0.0697902);
}

double NNfunction_ss_dLuL::synapse0x349d9e0() {
   return (neuron0x34850a0()*0.0857709);
}

double NNfunction_ss_dLuL::synapse0x349da20() {
   return (neuron0x34853e0()*0.126939);
}

double NNfunction_ss_dLuL::synapse0x349da60() {
   return (neuron0x3485720()*-0.0629772);
}

double NNfunction_ss_dLuL::synapse0x349d4f0() {
   return (neuron0x3485a60()*-0.0660541);
}

double NNfunction_ss_dLuL::synapse0x349d530() {
   return (neuron0x3485fc0()*-0.175032);
}

double NNfunction_ss_dLuL::synapse0x349dbb0() {
   return (neuron0x3486300()*-0.145753);
}

double NNfunction_ss_dLuL::synapse0x349dbf0() {
   return (neuron0x3486640()*-0.0205763);
}

double NNfunction_ss_dLuL::synapse0x349dc30() {
   return (neuron0x3486980()*-0.159892);
}

double NNfunction_ss_dLuL::synapse0x349dc70() {
   return (neuron0x3486cc0()*-0.0708675);
}

double NNfunction_ss_dLuL::synapse0x349dcb0() {
   return (neuron0x3487000()*-0.0957957);
}

double NNfunction_ss_dLuL::synapse0x349dcf0() {
   return (neuron0x3487340()*-0.23365);
}

double NNfunction_ss_dLuL::synapse0x349e070() {
   return (neuron0x34826f0()*-0.0560268);
}

double NNfunction_ss_dLuL::synapse0x3492640() {
   return (neuron0x34829a0()*-0.0279638);
}

double NNfunction_ss_dLuL::synapse0x3492680() {
   return (neuron0x3482ce0()*0.00861752);
}

double NNfunction_ss_dLuL::synapse0x34926c0() {
   return (neuron0x3483020()*-13.8725);
}

double NNfunction_ss_dLuL::synapse0x3492910() {
   return (neuron0x3483360()*0.0238785);
}

double NNfunction_ss_dLuL::synapse0x3492950() {
   return (neuron0x34836a0()*0.0283269);
}

double NNfunction_ss_dLuL::synapse0x3492990() {
   return (neuron0x34839e0()*0.011565);
}

double NNfunction_ss_dLuL::synapse0x3492be0() {
   return (neuron0x3483d20()*0.0126943);
}

double NNfunction_ss_dLuL::synapse0x3492c20() {
   return (neuron0x3484060()*0.0283355);
}

double NNfunction_ss_dLuL::synapse0x3492e70() {
   return (neuron0x34843a0()*0.0444231);
}

double NNfunction_ss_dLuL::synapse0x3492eb0() {
   return (neuron0x34846e0()*-0.0188849);
}

double NNfunction_ss_dLuL::synapse0x3492ef0() {
   return (neuron0x3484a20()*0.939623);
}

double NNfunction_ss_dLuL::synapse0x3493140() {
   return (neuron0x3484d60()*0.0142268);
}

double NNfunction_ss_dLuL::synapse0x3493180() {
   return (neuron0x34850a0()*0.00917596);
}

double NNfunction_ss_dLuL::synapse0x34933d0() {
   return (neuron0x34853e0()*-0.000129491);
}

double NNfunction_ss_dLuL::synapse0x3493410() {
   return (neuron0x3485720()*0.00118189);
}

double NNfunction_ss_dLuL::synapse0x349dec0() {
   return (neuron0x3485a60()*0.0287138);
}

double NNfunction_ss_dLuL::synapse0x349df00() {
   return (neuron0x3485fc0()*0.000746393);
}

double NNfunction_ss_dLuL::synapse0x3493560() {
   return (neuron0x3486300()*-0.0457575);
}

double NNfunction_ss_dLuL::synapse0x3493a70() {
   return (neuron0x3486640()*0.0137245);
}

double NNfunction_ss_dLuL::synapse0x3493ab0() {
   return (neuron0x3486980()*0.0131409);
}

double NNfunction_ss_dLuL::synapse0x3493af0() {
   return (neuron0x3486cc0()*0.00973954);
}

double NNfunction_ss_dLuL::synapse0x3493d40() {
   return (neuron0x3487000()*-0.0081505);
}

double NNfunction_ss_dLuL::synapse0x3493d80() {
   return (neuron0x3487340()*0.00409235);
}

double NNfunction_ss_dLuL::synapse0x3493630() {
   return (neuron0x34826f0()*0.206006);
}

double NNfunction_ss_dLuL::synapse0x3493670() {
   return (neuron0x34829a0()*-0.177354);
}

double NNfunction_ss_dLuL::synapse0x34936b0() {
   return (neuron0x3482ce0()*-0.266828);
}

double NNfunction_ss_dLuL::synapse0x34936f0() {
   return (neuron0x3483020()*0.255301);
}

double NNfunction_ss_dLuL::synapse0x3494070() {
   return (neuron0x3483360()*0.146735);
}

double NNfunction_ss_dLuL::synapse0x34a03c0() {
   return (neuron0x34836a0()*-0.0235144);
}

double NNfunction_ss_dLuL::synapse0x34a0400() {
   return (neuron0x34839e0()*0.0254939);
}

double NNfunction_ss_dLuL::synapse0x34a0440() {
   return (neuron0x3483d20()*-0.213859);
}

double NNfunction_ss_dLuL::synapse0x34a0480() {
   return (neuron0x3484060()*-0.0797249);
}

double NNfunction_ss_dLuL::synapse0x34a04c0() {
   return (neuron0x34843a0()*-0.0675875);
}

double NNfunction_ss_dLuL::synapse0x34a0500() {
   return (neuron0x34846e0()*0.0724518);
}

double NNfunction_ss_dLuL::synapse0x34a0540() {
   return (neuron0x3484a20()*-0.0742441);
}

double NNfunction_ss_dLuL::synapse0x34a0580() {
   return (neuron0x3484d60()*0.431753);
}

double NNfunction_ss_dLuL::synapse0x34a05c0() {
   return (neuron0x34850a0()*-0.282642);
}

double NNfunction_ss_dLuL::synapse0x34a0600() {
   return (neuron0x34853e0()*-0.0761069);
}

double NNfunction_ss_dLuL::synapse0x34a0640() {
   return (neuron0x3485720()*-0.104256);
}

double NNfunction_ss_dLuL::synapse0x3493f50() {
   return (neuron0x3485a60()*-0.312239);
}

double NNfunction_ss_dLuL::synapse0x3493f90() {
   return (neuron0x3485fc0()*-0.0298526);
}

double NNfunction_ss_dLuL::synapse0x34a0790() {
   return (neuron0x3486300()*0.0722585);
}

double NNfunction_ss_dLuL::synapse0x34a07d0() {
   return (neuron0x3486640()*0.0908748);
}

double NNfunction_ss_dLuL::synapse0x34a0810() {
   return (neuron0x3486980()*-0.0844043);
}

double NNfunction_ss_dLuL::synapse0x34a0850() {
   return (neuron0x3486cc0()*0.0789995);
}

double NNfunction_ss_dLuL::synapse0x34a0890() {
   return (neuron0x3487000()*-0.135395);
}

double NNfunction_ss_dLuL::synapse0x34a08d0() {
   return (neuron0x3487340()*0.014946);
}

double NNfunction_ss_dLuL::synapse0x34a0c50() {
   return (neuron0x34826f0()*-0.228827);
}

double NNfunction_ss_dLuL::synapse0x34a0c90() {
   return (neuron0x34829a0()*-0.067763);
}

double NNfunction_ss_dLuL::synapse0x34a0cd0() {
   return (neuron0x3482ce0()*0.287309);
}

double NNfunction_ss_dLuL::synapse0x34a0d10() {
   return (neuron0x3483020()*-1.63616);
}

double NNfunction_ss_dLuL::synapse0x34a0d50() {
   return (neuron0x3483360()*0.0386375);
}

double NNfunction_ss_dLuL::synapse0x34a0d90() {
   return (neuron0x34836a0()*0.0182037);
}

double NNfunction_ss_dLuL::synapse0x34a0dd0() {
   return (neuron0x34839e0()*-0.0525155);
}

double NNfunction_ss_dLuL::synapse0x34a0e10() {
   return (neuron0x3483d20()*0.072931);
}

double NNfunction_ss_dLuL::synapse0x34a0e50() {
   return (neuron0x3484060()*-0.210666);
}

double NNfunction_ss_dLuL::synapse0x34a0e90() {
   return (neuron0x34843a0()*0.0884883);
}

double NNfunction_ss_dLuL::synapse0x34a0ed0() {
   return (neuron0x34846e0()*0.0846135);
}

double NNfunction_ss_dLuL::synapse0x34a0f10() {
   return (neuron0x3484a20()*-1.77456);
}

double NNfunction_ss_dLuL::synapse0x34a0f50() {
   return (neuron0x3484d60()*0.160999);
}

double NNfunction_ss_dLuL::synapse0x34a0f90() {
   return (neuron0x34850a0()*0.1511);
}

double NNfunction_ss_dLuL::synapse0x34a0fd0() {
   return (neuron0x34853e0()*0.0956882);
}

double NNfunction_ss_dLuL::synapse0x34a1010() {
   return (neuron0x3485720()*0.253159);
}

double NNfunction_ss_dLuL::synapse0x34a0aa0() {
   return (neuron0x3485a60()*-0.213755);
}

double NNfunction_ss_dLuL::synapse0x34a0ae0() {
   return (neuron0x3485fc0()*-0.0510239);
}

double NNfunction_ss_dLuL::synapse0x34a1160() {
   return (neuron0x3486300()*-0.0331836);
}

double NNfunction_ss_dLuL::synapse0x34a11a0() {
   return (neuron0x3486640()*0.0506518);
}

double NNfunction_ss_dLuL::synapse0x34a11e0() {
   return (neuron0x3486980()*0.0986184);
}

double NNfunction_ss_dLuL::synapse0x34a1220() {
   return (neuron0x3486cc0()*-0.0749805);
}

double NNfunction_ss_dLuL::synapse0x34a1260() {
   return (neuron0x3487000()*0.125373);
}

double NNfunction_ss_dLuL::synapse0x34a12a0() {
   return (neuron0x3487340()*-0.21403);
}

double NNfunction_ss_dLuL::synapse0x34a1620() {
   return (neuron0x34826f0()*-0.0168507);
}

double NNfunction_ss_dLuL::synapse0x34a1660() {
   return (neuron0x34829a0()*-0.017254);
}

double NNfunction_ss_dLuL::synapse0x34a16a0() {
   return (neuron0x3482ce0()*1.10331);
}

double NNfunction_ss_dLuL::synapse0x34a16e0() {
   return (neuron0x3483020()*-0.0963612);
}

double NNfunction_ss_dLuL::synapse0x34a1720() {
   return (neuron0x3483360()*-0.0351998);
}

double NNfunction_ss_dLuL::synapse0x34a1760() {
   return (neuron0x34836a0()*0.0105691);
}

double NNfunction_ss_dLuL::synapse0x34a17a0() {
   return (neuron0x34839e0()*-0.0126454);
}

double NNfunction_ss_dLuL::synapse0x34a17e0() {
   return (neuron0x3483d20()*0.0184311);
}

double NNfunction_ss_dLuL::synapse0x34a1820() {
   return (neuron0x3484060()*0.050097);
}

double NNfunction_ss_dLuL::synapse0x34a1860() {
   return (neuron0x34843a0()*-0.0165077);
}

double NNfunction_ss_dLuL::synapse0x34a18a0() {
   return (neuron0x34846e0()*-0.0154909);
}

double NNfunction_ss_dLuL::synapse0x34a18e0() {
   return (neuron0x3484a20()*-0.565347);
}

double NNfunction_ss_dLuL::synapse0x34a1920() {
   return (neuron0x3484d60()*-0.0219785);
}

double NNfunction_ss_dLuL::synapse0x34a1960() {
   return (neuron0x34850a0()*0.0875855);
}

double NNfunction_ss_dLuL::synapse0x34a19a0() {
   return (neuron0x34853e0()*0.0142934);
}

double NNfunction_ss_dLuL::synapse0x34a19e0() {
   return (neuron0x3485720()*-0.0128306);
}

double NNfunction_ss_dLuL::synapse0x34a1470() {
   return (neuron0x3485a60()*0.0873475);
}

double NNfunction_ss_dLuL::synapse0x34a14b0() {
   return (neuron0x3485fc0()*0.022115);
}

double NNfunction_ss_dLuL::synapse0x34a1b30() {
   return (neuron0x3486300()*0.00287436);
}

double NNfunction_ss_dLuL::synapse0x34a1b70() {
   return (neuron0x3486640()*-0.0205417);
}

double NNfunction_ss_dLuL::synapse0x34a1bb0() {
   return (neuron0x3486980()*0.0446029);
}

double NNfunction_ss_dLuL::synapse0x34a1bf0() {
   return (neuron0x3486cc0()*0.0275971);
}

double NNfunction_ss_dLuL::synapse0x34a1c30() {
   return (neuron0x3487000()*-0.00342558);
}

double NNfunction_ss_dLuL::synapse0x34a1c70() {
   return (neuron0x3487340()*0.00857859);
}

double NNfunction_ss_dLuL::synapse0x34a1ff0() {
   return (neuron0x34826f0()*0.231699);
}

double NNfunction_ss_dLuL::synapse0x34a2030() {
   return (neuron0x34829a0()*0.00112427);
}

double NNfunction_ss_dLuL::synapse0x34a2070() {
   return (neuron0x3482ce0()*0.249169);
}

double NNfunction_ss_dLuL::synapse0x34a20b0() {
   return (neuron0x3483020()*0.553668);
}

double NNfunction_ss_dLuL::synapse0x34a20f0() {
   return (neuron0x3483360()*-0.335872);
}

double NNfunction_ss_dLuL::synapse0x34a2130() {
   return (neuron0x34836a0()*0.021025);
}

double NNfunction_ss_dLuL::synapse0x34a2170() {
   return (neuron0x34839e0()*-0.0992024);
}

double NNfunction_ss_dLuL::synapse0x34a21b0() {
   return (neuron0x3483d20()*-0.238879);
}

double NNfunction_ss_dLuL::synapse0x34a21f0() {
   return (neuron0x3484060()*-0.497225);
}

double NNfunction_ss_dLuL::synapse0x34a2230() {
   return (neuron0x34843a0()*0.00582865);
}

double NNfunction_ss_dLuL::synapse0x34a2270() {
   return (neuron0x34846e0()*-0.568963);
}

double NNfunction_ss_dLuL::synapse0x34a22b0() {
   return (neuron0x3484a20()*0.0795388);
}

double NNfunction_ss_dLuL::synapse0x34a22f0() {
   return (neuron0x3484d60()*-0.0595373);
}

double NNfunction_ss_dLuL::synapse0x34a2330() {
   return (neuron0x34850a0()*-0.0836705);
}

double NNfunction_ss_dLuL::synapse0x34a2370() {
   return (neuron0x34853e0()*-0.415259);
}

double NNfunction_ss_dLuL::synapse0x34a23b0() {
   return (neuron0x3485720()*0.736);
}

double NNfunction_ss_dLuL::synapse0x34a1e40() {
   return (neuron0x3485a60()*-0.20099);
}

double NNfunction_ss_dLuL::synapse0x34a1e80() {
   return (neuron0x3485fc0()*0.0756233);
}

double NNfunction_ss_dLuL::synapse0x34a2500() {
   return (neuron0x3486300()*-0.0443894);
}

double NNfunction_ss_dLuL::synapse0x34a2540() {
   return (neuron0x3486640()*-0.347421);
}

double NNfunction_ss_dLuL::synapse0x34a2580() {
   return (neuron0x3486980()*0.155892);
}

double NNfunction_ss_dLuL::synapse0x34a25c0() {
   return (neuron0x3486cc0()*0.0379311);
}

double NNfunction_ss_dLuL::synapse0x34a2600() {
   return (neuron0x3487000()*0.171652);
}

double NNfunction_ss_dLuL::synapse0x34a2640() {
   return (neuron0x3487340()*-0.00991349);
}

double NNfunction_ss_dLuL::synapse0x34a29c0() {
   return (neuron0x34826f0()*0.0429833);
}

double NNfunction_ss_dLuL::synapse0x34a2a00() {
   return (neuron0x34829a0()*-0.166069);
}

double NNfunction_ss_dLuL::synapse0x34a2a40() {
   return (neuron0x3482ce0()*0.853235);
}

double NNfunction_ss_dLuL::synapse0x34a2a80() {
   return (neuron0x3483020()*-0.0118705);
}

double NNfunction_ss_dLuL::synapse0x34a2ac0() {
   return (neuron0x3483360()*-0.0177217);
}

double NNfunction_ss_dLuL::synapse0x34a2b00() {
   return (neuron0x34836a0()*0.150205);
}

double NNfunction_ss_dLuL::synapse0x34a2b40() {
   return (neuron0x34839e0()*-0.0698836);
}

double NNfunction_ss_dLuL::synapse0x34a2b80() {
   return (neuron0x3483d20()*0.337978);
}

double NNfunction_ss_dLuL::synapse0x34a2bc0() {
   return (neuron0x3484060()*0.27811);
}

double NNfunction_ss_dLuL::synapse0x34a2c00() {
   return (neuron0x34843a0()*-0.203659);
}

double NNfunction_ss_dLuL::synapse0x34a2c40() {
   return (neuron0x34846e0()*0.0118298);
}

double NNfunction_ss_dLuL::synapse0x34a2c80() {
   return (neuron0x3484a20()*0.582495);
}

double NNfunction_ss_dLuL::synapse0x34a2cc0() {
   return (neuron0x3484d60()*0.129372);
}

double NNfunction_ss_dLuL::synapse0x34a2d00() {
   return (neuron0x34850a0()*-0.0864788);
}

double NNfunction_ss_dLuL::synapse0x34a2d40() {
   return (neuron0x34853e0()*0.122688);
}

double NNfunction_ss_dLuL::synapse0x34a2d80() {
   return (neuron0x3485720()*0.13587);
}

double NNfunction_ss_dLuL::synapse0x34a2810() {
   return (neuron0x3485a60()*0.172245);
}

double NNfunction_ss_dLuL::synapse0x34a2850() {
   return (neuron0x3485fc0()*-0.0957909);
}

double NNfunction_ss_dLuL::synapse0x34a2ed0() {
   return (neuron0x3486300()*-0.177598);
}

double NNfunction_ss_dLuL::synapse0x34a2f10() {
   return (neuron0x3486640()*-0.0279408);
}

double NNfunction_ss_dLuL::synapse0x34a2f50() {
   return (neuron0x3486980()*-0.0555607);
}

double NNfunction_ss_dLuL::synapse0x34a2f90() {
   return (neuron0x3486cc0()*0.132773);
}

double NNfunction_ss_dLuL::synapse0x34a2fd0() {
   return (neuron0x3487000()*-0.232415);
}

double NNfunction_ss_dLuL::synapse0x34a3010() {
   return (neuron0x3487340()*0.154214);
}

double NNfunction_ss_dLuL::synapse0x34a3390() {
   return (neuron0x34826f0()*0.0560116);
}

double NNfunction_ss_dLuL::synapse0x34a33d0() {
   return (neuron0x34829a0()*-0.0029705);
}

double NNfunction_ss_dLuL::synapse0x34a3410() {
   return (neuron0x3482ce0()*0.105198);
}

double NNfunction_ss_dLuL::synapse0x34a3450() {
   return (neuron0x3483020()*-1.03993);
}

double NNfunction_ss_dLuL::synapse0x34a3490() {
   return (neuron0x3483360()*-0.059606);
}

double NNfunction_ss_dLuL::synapse0x34a34d0() {
   return (neuron0x34836a0()*0.0451069);
}

double NNfunction_ss_dLuL::synapse0x34a3510() {
   return (neuron0x34839e0()*0.0294972);
}

double NNfunction_ss_dLuL::synapse0x34a3550() {
   return (neuron0x3483d20()*0.0492708);
}

double NNfunction_ss_dLuL::synapse0x34a3590() {
   return (neuron0x3484060()*-0.0107187);
}

double NNfunction_ss_dLuL::synapse0x34a35d0() {
   return (neuron0x34843a0()*-0.0070329);
}

double NNfunction_ss_dLuL::synapse0x34a3610() {
   return (neuron0x34846e0()*0.00277426);
}

double NNfunction_ss_dLuL::synapse0x34a3650() {
   return (neuron0x3484a20()*1.97247);
}

double NNfunction_ss_dLuL::synapse0x34a3690() {
   return (neuron0x3484d60()*0.101258);
}

double NNfunction_ss_dLuL::synapse0x34a36d0() {
   return (neuron0x34850a0()*0.0212375);
}

double NNfunction_ss_dLuL::synapse0x34a3710() {
   return (neuron0x34853e0()*0.0182185);
}

double NNfunction_ss_dLuL::synapse0x34a3750() {
   return (neuron0x3485720()*-0.0110326);
}

double NNfunction_ss_dLuL::synapse0x34a31e0() {
   return (neuron0x3485a60()*0.0267675);
}

double NNfunction_ss_dLuL::synapse0x34a3220() {
   return (neuron0x3485fc0()*0.108113);
}

double NNfunction_ss_dLuL::synapse0x34a38a0() {
   return (neuron0x3486300()*-0.00281384);
}

double NNfunction_ss_dLuL::synapse0x34a38e0() {
   return (neuron0x3486640()*-0.0171377);
}

double NNfunction_ss_dLuL::synapse0x34a3920() {
   return (neuron0x3486980()*0.0443471);
}

double NNfunction_ss_dLuL::synapse0x34a3960() {
   return (neuron0x3486cc0()*0.00935313);
}

double NNfunction_ss_dLuL::synapse0x34a39a0() {
   return (neuron0x3487000()*-0.0316764);
}

double NNfunction_ss_dLuL::synapse0x34a39e0() {
   return (neuron0x3487340()*0.0890365);
}

double NNfunction_ss_dLuL::synapse0x34a3d60() {
   return (neuron0x34826f0()*-0.547275);
}

double NNfunction_ss_dLuL::synapse0x34a3da0() {
   return (neuron0x34829a0()*-0.724593);
}

double NNfunction_ss_dLuL::synapse0x34a3de0() {
   return (neuron0x3482ce0()*-1.16479);
}

double NNfunction_ss_dLuL::synapse0x34a3e20() {
   return (neuron0x3483020()*-0.0606264);
}

double NNfunction_ss_dLuL::synapse0x34a3e60() {
   return (neuron0x3483360()*-0.501106);
}

double NNfunction_ss_dLuL::synapse0x34a3ea0() {
   return (neuron0x34836a0()*0.0287901);
}

double NNfunction_ss_dLuL::synapse0x34a3ee0() {
   return (neuron0x34839e0()*0.018305);
}

double NNfunction_ss_dLuL::synapse0x34a3f20() {
   return (neuron0x3483d20()*-0.339976);
}

double NNfunction_ss_dLuL::synapse0x34a3f60() {
   return (neuron0x3484060()*-0.307834);
}

double NNfunction_ss_dLuL::synapse0x34a3fa0() {
   return (neuron0x34843a0()*0.335861);
}

double NNfunction_ss_dLuL::synapse0x34a3fe0() {
   return (neuron0x34846e0()*-0.636289);
}

double NNfunction_ss_dLuL::synapse0x34a4020() {
   return (neuron0x3484a20()*0.49593);
}

double NNfunction_ss_dLuL::synapse0x34a4060() {
   return (neuron0x3484d60()*0.322229);
}

double NNfunction_ss_dLuL::synapse0x34a40a0() {
   return (neuron0x34850a0()*-0.585763);
}

double NNfunction_ss_dLuL::synapse0x34a40e0() {
   return (neuron0x34853e0()*-0.126092);
}

double NNfunction_ss_dLuL::synapse0x34a4120() {
   return (neuron0x3485720()*0.473987);
}

double NNfunction_ss_dLuL::synapse0x34a3bb0() {
   return (neuron0x3485a60()*-0.352008);
}

double NNfunction_ss_dLuL::synapse0x34a3bf0() {
   return (neuron0x3485fc0()*0.574834);
}

double NNfunction_ss_dLuL::synapse0x34a4270() {
   return (neuron0x3486300()*0.145318);
}

double NNfunction_ss_dLuL::synapse0x34a42b0() {
   return (neuron0x3486640()*-0.455204);
}

double NNfunction_ss_dLuL::synapse0x34a42f0() {
   return (neuron0x3486980()*0.0892317);
}

double NNfunction_ss_dLuL::synapse0x34a4330() {
   return (neuron0x3486cc0()*-0.19421);
}

double NNfunction_ss_dLuL::synapse0x34a4370() {
   return (neuron0x3487000()*0.633686);
}

double NNfunction_ss_dLuL::synapse0x34a43b0() {
   return (neuron0x3487340()*0.212326);
}

double NNfunction_ss_dLuL::synapse0x34a4730() {
   return (neuron0x34826f0()*-0.368141);
}

double NNfunction_ss_dLuL::synapse0x34a4770() {
   return (neuron0x34829a0()*-0.0435809);
}

double NNfunction_ss_dLuL::synapse0x34a47b0() {
   return (neuron0x3482ce0()*0.592516);
}

double NNfunction_ss_dLuL::synapse0x34a47f0() {
   return (neuron0x3483020()*-0.538529);
}

double NNfunction_ss_dLuL::synapse0x34a4830() {
   return (neuron0x3483360()*-0.435815);
}

double NNfunction_ss_dLuL::synapse0x34a4870() {
   return (neuron0x34836a0()*-0.222916);
}

double NNfunction_ss_dLuL::synapse0x34a48b0() {
   return (neuron0x34839e0()*0.142057);
}

double NNfunction_ss_dLuL::synapse0x34a48f0() {
   return (neuron0x3483d20()*-0.818679);
}

double NNfunction_ss_dLuL::synapse0x34a4930() {
   return (neuron0x3484060()*0.17279);
}

double NNfunction_ss_dLuL::synapse0x34a4970() {
   return (neuron0x34843a0()*0.612862);
}

double NNfunction_ss_dLuL::synapse0x34a49b0() {
   return (neuron0x34846e0()*-0.00620741);
}

double NNfunction_ss_dLuL::synapse0x34a49f0() {
   return (neuron0x3484a20()*-0.500618);
}

double NNfunction_ss_dLuL::synapse0x34a4a30() {
   return (neuron0x3484d60()*0.748518);
}

double NNfunction_ss_dLuL::synapse0x34a4a70() {
   return (neuron0x34850a0()*-0.0384594);
}

double NNfunction_ss_dLuL::synapse0x34a4ab0() {
   return (neuron0x34853e0()*0.0420143);
}

double NNfunction_ss_dLuL::synapse0x34a4af0() {
   return (neuron0x3485720()*-0.422562);
}

double NNfunction_ss_dLuL::synapse0x34a4580() {
   return (neuron0x3485a60()*0.557149);
}

double NNfunction_ss_dLuL::synapse0x34a45c0() {
   return (neuron0x3485fc0()*-0.666599);
}

double NNfunction_ss_dLuL::synapse0x34a4c40() {
   return (neuron0x3486300()*0.508514);
}

double NNfunction_ss_dLuL::synapse0x34a4c80() {
   return (neuron0x3486640()*0.599138);
}

double NNfunction_ss_dLuL::synapse0x34a4cc0() {
   return (neuron0x3486980()*-0.215241);
}

double NNfunction_ss_dLuL::synapse0x34a4d00() {
   return (neuron0x3486cc0()*-0.056337);
}

double NNfunction_ss_dLuL::synapse0x34a4d40() {
   return (neuron0x3487000()*0.330178);
}

double NNfunction_ss_dLuL::synapse0x34a4d80() {
   return (neuron0x3487340()*0.682216);
}

double NNfunction_ss_dLuL::synapse0x348d830() {
   return (neuron0x34826f0()*0.160585);
}

double NNfunction_ss_dLuL::synapse0x348d870() {
   return (neuron0x34829a0()*0.0385797);
}

double NNfunction_ss_dLuL::synapse0x348d8b0() {
   return (neuron0x3482ce0()*-0.115561);
}

double NNfunction_ss_dLuL::synapse0x348d8f0() {
   return (neuron0x3483020()*-0.326505);
}

double NNfunction_ss_dLuL::synapse0x348d930() {
   return (neuron0x3483360()*0.0739935);
}

double NNfunction_ss_dLuL::synapse0x348d970() {
   return (neuron0x34836a0()*-0.177307);
}

double NNfunction_ss_dLuL::synapse0x348d9b0() {
   return (neuron0x34839e0()*-0.0591979);
}

double NNfunction_ss_dLuL::synapse0x348d9f0() {
   return (neuron0x3483d20()*-0.0942863);
}

double NNfunction_ss_dLuL::synapse0x34a5510() {
   return (neuron0x3484060()*-0.0662356);
}

double NNfunction_ss_dLuL::synapse0x34a5550() {
   return (neuron0x34843a0()*0.446371);
}

double NNfunction_ss_dLuL::synapse0x34a5590() {
   return (neuron0x34846e0()*-0.0508658);
}

double NNfunction_ss_dLuL::synapse0x34a55d0() {
   return (neuron0x3484a20()*0.909869);
}

double NNfunction_ss_dLuL::synapse0x34a5610() {
   return (neuron0x3484d60()*-0.0822744);
}

double NNfunction_ss_dLuL::synapse0x34a5650() {
   return (neuron0x34850a0()*0.0797044);
}

double NNfunction_ss_dLuL::synapse0x34a5690() {
   return (neuron0x34853e0()*-0.0674296);
}

double NNfunction_ss_dLuL::synapse0x34a56d0() {
   return (neuron0x3485720()*-0.00605684);
}

double NNfunction_ss_dLuL::synapse0x34a4f50() {
   return (neuron0x3485a60()*-0.235103);
}

double NNfunction_ss_dLuL::synapse0x34a4f90() {
   return (neuron0x3485fc0()*0.00462474);
}

double NNfunction_ss_dLuL::synapse0x34a5820() {
   return (neuron0x3486300()*0.0791099);
}

double NNfunction_ss_dLuL::synapse0x34a5860() {
   return (neuron0x3486640()*-0.0652628);
}

double NNfunction_ss_dLuL::synapse0x34a58a0() {
   return (neuron0x3486980()*-0.0949492);
}

double NNfunction_ss_dLuL::synapse0x34a58e0() {
   return (neuron0x3486cc0()*-0.109504);
}

double NNfunction_ss_dLuL::synapse0x34a5920() {
   return (neuron0x3487000()*0.285682);
}

double NNfunction_ss_dLuL::synapse0x34a5960() {
   return (neuron0x3487340()*-0.081483);
}

double NNfunction_ss_dLuL::synapse0x34a5ce0() {
   return (neuron0x34826f0()*-0.144182);
}

double NNfunction_ss_dLuL::synapse0x34a5d20() {
   return (neuron0x34829a0()*0.350129);
}

double NNfunction_ss_dLuL::synapse0x34a5d60() {
   return (neuron0x3482ce0()*-0.707897);
}

double NNfunction_ss_dLuL::synapse0x34a5da0() {
   return (neuron0x3483020()*0.381859);
}

double NNfunction_ss_dLuL::synapse0x34a5de0() {
   return (neuron0x3483360()*0.447548);
}

double NNfunction_ss_dLuL::synapse0x34a5e20() {
   return (neuron0x34836a0()*-0.646579);
}

double NNfunction_ss_dLuL::synapse0x34a5e60() {
   return (neuron0x34839e0()*-0.0063965);
}

double NNfunction_ss_dLuL::synapse0x34a5ea0() {
   return (neuron0x3483d20()*-0.0459999);
}

double NNfunction_ss_dLuL::synapse0x34a5ee0() {
   return (neuron0x3484060()*0.291921);
}

double NNfunction_ss_dLuL::synapse0x34a5f20() {
   return (neuron0x34843a0()*-0.0733085);
}

double NNfunction_ss_dLuL::synapse0x34a5f60() {
   return (neuron0x34846e0()*0.259856);
}

double NNfunction_ss_dLuL::synapse0x34a5fa0() {
   return (neuron0x3484a20()*-0.313191);
}

double NNfunction_ss_dLuL::synapse0x34a5fe0() {
   return (neuron0x3484d60()*-0.0303053);
}

double NNfunction_ss_dLuL::synapse0x34a6020() {
   return (neuron0x34850a0()*-0.163547);
}

double NNfunction_ss_dLuL::synapse0x34a6060() {
   return (neuron0x34853e0()*0.130692);
}

double NNfunction_ss_dLuL::synapse0x34a60a0() {
   return (neuron0x3485720()*0.0446879);
}

double NNfunction_ss_dLuL::synapse0x34a5b30() {
   return (neuron0x3485a60()*0.0474079);
}

double NNfunction_ss_dLuL::synapse0x34a5b70() {
   return (neuron0x3485fc0()*-0.013272);
}

double NNfunction_ss_dLuL::synapse0x34a61f0() {
   return (neuron0x3486300()*-0.00650397);
}

double NNfunction_ss_dLuL::synapse0x34a6230() {
   return (neuron0x3486640()*-0.451462);
}

double NNfunction_ss_dLuL::synapse0x34a6270() {
   return (neuron0x3486980()*-0.726146);
}

double NNfunction_ss_dLuL::synapse0x34a62b0() {
   return (neuron0x3486cc0()*0.156152);
}

double NNfunction_ss_dLuL::synapse0x34a62f0() {
   return (neuron0x3487000()*0.187209);
}

double NNfunction_ss_dLuL::synapse0x34a6330() {
   return (neuron0x3487340()*-0.12367);
}

double NNfunction_ss_dLuL::synapse0x34a66b0() {
   return (neuron0x34826f0()*-0.1896);
}

double NNfunction_ss_dLuL::synapse0x34a66f0() {
   return (neuron0x34829a0()*0.0997925);
}

double NNfunction_ss_dLuL::synapse0x34a6730() {
   return (neuron0x3482ce0()*-0.132631);
}

double NNfunction_ss_dLuL::synapse0x34a6770() {
   return (neuron0x3483020()*1.0206);
}

double NNfunction_ss_dLuL::synapse0x34a67b0() {
   return (neuron0x3483360()*0.0296189);
}

double NNfunction_ss_dLuL::synapse0x34a67f0() {
   return (neuron0x34836a0()*0.122561);
}

double NNfunction_ss_dLuL::synapse0x34a6830() {
   return (neuron0x34839e0()*0.191256);
}

double NNfunction_ss_dLuL::synapse0x34a6870() {
   return (neuron0x3483d20()*0.127515);
}

double NNfunction_ss_dLuL::synapse0x34a68b0() {
   return (neuron0x3484060()*-0.047604);
}

double NNfunction_ss_dLuL::synapse0x34a68f0() {
   return (neuron0x34843a0()*-0.0246652);
}

double NNfunction_ss_dLuL::synapse0x34a6930() {
   return (neuron0x34846e0()*-0.0241948);
}

double NNfunction_ss_dLuL::synapse0x34a6970() {
   return (neuron0x3484a20()*-0.299128);
}

double NNfunction_ss_dLuL::synapse0x34a69b0() {
   return (neuron0x3484d60()*0.0998563);
}

double NNfunction_ss_dLuL::synapse0x34a69f0() {
   return (neuron0x34850a0()*-0.206551);
}

double NNfunction_ss_dLuL::synapse0x34a6a30() {
   return (neuron0x34853e0()*0.347103);
}

double NNfunction_ss_dLuL::synapse0x34a6a70() {
   return (neuron0x3485720()*0.1895);
}

double NNfunction_ss_dLuL::synapse0x34a6500() {
   return (neuron0x3485a60()*0.124596);
}

double NNfunction_ss_dLuL::synapse0x34a6540() {
   return (neuron0x3485fc0()*-0.136288);
}

double NNfunction_ss_dLuL::synapse0x3497070() {
   return (neuron0x3486300()*0.0358972);
}

double NNfunction_ss_dLuL::synapse0x34970b0() {
   return (neuron0x3486640()*-0.0137712);
}

double NNfunction_ss_dLuL::synapse0x34970f0() {
   return (neuron0x3486980()*-0.0275735);
}

double NNfunction_ss_dLuL::synapse0x3497130() {
   return (neuron0x3486cc0()*0.0130719);
}

double NNfunction_ss_dLuL::synapse0x3497170() {
   return (neuron0x3487000()*0.0828083);
}

double NNfunction_ss_dLuL::synapse0x34971b0() {
   return (neuron0x3487340()*0.0576244);
}

double NNfunction_ss_dLuL::synapse0x3497530() {
   return (neuron0x34826f0()*0.130744);
}

double NNfunction_ss_dLuL::synapse0x3497570() {
   return (neuron0x34829a0()*0.0024895);
}

double NNfunction_ss_dLuL::synapse0x34975b0() {
   return (neuron0x3482ce0()*0.0227958);
}

double NNfunction_ss_dLuL::synapse0x34975f0() {
   return (neuron0x3483020()*-0.0908832);
}

double NNfunction_ss_dLuL::synapse0x3497630() {
   return (neuron0x3483360()*0.0271871);
}

double NNfunction_ss_dLuL::synapse0x3497670() {
   return (neuron0x34836a0()*-0.00915981);
}

double NNfunction_ss_dLuL::synapse0x34976b0() {
   return (neuron0x34839e0()*0.0298577);
}

double NNfunction_ss_dLuL::synapse0x34976f0() {
   return (neuron0x3483d20()*-0.0134787);
}

double NNfunction_ss_dLuL::synapse0x3497730() {
   return (neuron0x3484060()*-0.0398579);
}

double NNfunction_ss_dLuL::synapse0x3497770() {
   return (neuron0x34843a0()*-0.0433449);
}

double NNfunction_ss_dLuL::synapse0x34977b0() {
   return (neuron0x34846e0()*0.106038);
}

double NNfunction_ss_dLuL::synapse0x34977f0() {
   return (neuron0x3484a20()*0.498718);
}

double NNfunction_ss_dLuL::synapse0x3497830() {
   return (neuron0x3484d60()*0.0352896);
}

double NNfunction_ss_dLuL::synapse0x3497870() {
   return (neuron0x34850a0()*0.0448402);
}

double NNfunction_ss_dLuL::synapse0x34978b0() {
   return (neuron0x34853e0()*-0.042287);
}

double NNfunction_ss_dLuL::synapse0x34978f0() {
   return (neuron0x3485720()*-0.0173949);
}

double NNfunction_ss_dLuL::synapse0x3497380() {
   return (neuron0x3485a60()*0.00793621);
}

double NNfunction_ss_dLuL::synapse0x34973c0() {
   return (neuron0x3485fc0()*0.0282171);
}

double NNfunction_ss_dLuL::synapse0x3497a40() {
   return (neuron0x3486300()*-0.0309526);
}

double NNfunction_ss_dLuL::synapse0x3497a80() {
   return (neuron0x3486640()*0.0318996);
}

double NNfunction_ss_dLuL::synapse0x3497ac0() {
   return (neuron0x3486980()*-0.0139058);
}

double NNfunction_ss_dLuL::synapse0x3497b00() {
   return (neuron0x3486cc0()*-0.0169846);
}

double NNfunction_ss_dLuL::synapse0x3497b40() {
   return (neuron0x3487000()*0.014934);
}

double NNfunction_ss_dLuL::synapse0x3497b80() {
   return (neuron0x3487340()*0.0121829);
}

double NNfunction_ss_dLuL::synapse0x3497f00() {
   return (neuron0x34826f0()*-0.142556);
}

double NNfunction_ss_dLuL::synapse0x3497f40() {
   return (neuron0x34829a0()*0.00238962);
}

double NNfunction_ss_dLuL::synapse0x3497f80() {
   return (neuron0x3482ce0()*0.0830325);
}

double NNfunction_ss_dLuL::synapse0x3497fc0() {
   return (neuron0x3483020()*0.640257);
}

double NNfunction_ss_dLuL::synapse0x3498000() {
   return (neuron0x3483360()*-0.532182);
}

double NNfunction_ss_dLuL::synapse0x3498040() {
   return (neuron0x34836a0()*-0.671063);
}

double NNfunction_ss_dLuL::synapse0x3498080() {
   return (neuron0x34839e0()*0.285492);
}

double NNfunction_ss_dLuL::synapse0x34980c0() {
   return (neuron0x3483d20()*-0.640384);
}

double NNfunction_ss_dLuL::synapse0x3498100() {
   return (neuron0x3484060()*0.268812);
}

double NNfunction_ss_dLuL::synapse0x3498140() {
   return (neuron0x34843a0()*0.749873);
}

double NNfunction_ss_dLuL::synapse0x3498180() {
   return (neuron0x34846e0()*0.233669);
}

double NNfunction_ss_dLuL::synapse0x34981c0() {
   return (neuron0x3484a20()*-0.490361);
}

double NNfunction_ss_dLuL::synapse0x3498200() {
   return (neuron0x3484d60()*0.385485);
}

double NNfunction_ss_dLuL::synapse0x3498240() {
   return (neuron0x34850a0()*-0.0677241);
}

double NNfunction_ss_dLuL::synapse0x3498280() {
   return (neuron0x34853e0()*0.10842);
}

double NNfunction_ss_dLuL::synapse0x34982c0() {
   return (neuron0x3485720()*-0.379942);
}

double NNfunction_ss_dLuL::synapse0x3497d50() {
   return (neuron0x3485a60()*0.385439);
}

double NNfunction_ss_dLuL::synapse0x3497d90() {
   return (neuron0x3485fc0()*-0.834125);
}

double NNfunction_ss_dLuL::synapse0x3498410() {
   return (neuron0x3486300()*0.701102);
}

double NNfunction_ss_dLuL::synapse0x3498450() {
   return (neuron0x3486640()*0.618248);
}

double NNfunction_ss_dLuL::synapse0x3498490() {
   return (neuron0x3486980()*-0.316067);
}

double NNfunction_ss_dLuL::synapse0x34984d0() {
   return (neuron0x3486cc0()*0.105296);
}

double NNfunction_ss_dLuL::synapse0x3498510() {
   return (neuron0x3487000()*-0.105015);
}

double NNfunction_ss_dLuL::synapse0x3498550() {
   return (neuron0x3487340()*0.546718);
}

double NNfunction_ss_dLuL::synapse0x34988d0() {
   return (neuron0x34826f0()*-0.164578);
}

double NNfunction_ss_dLuL::synapse0x3498910() {
   return (neuron0x34829a0()*-0.840082);
}

double NNfunction_ss_dLuL::synapse0x3498950() {
   return (neuron0x3482ce0()*-0.0642382);
}

double NNfunction_ss_dLuL::synapse0x3498990() {
   return (neuron0x3483020()*0.109978);
}

double NNfunction_ss_dLuL::synapse0x34989d0() {
   return (neuron0x3483360()*-0.0602003);
}

double NNfunction_ss_dLuL::synapse0x3498a10() {
   return (neuron0x34836a0()*0.167549);
}

double NNfunction_ss_dLuL::synapse0x3498a50() {
   return (neuron0x34839e0()*-0.0370306);
}

double NNfunction_ss_dLuL::synapse0x3498a90() {
   return (neuron0x3483d20()*-0.212226);
}

double NNfunction_ss_dLuL::synapse0x3498ad0() {
   return (neuron0x3484060()*-0.2942);
}

double NNfunction_ss_dLuL::synapse0x3498b10() {
   return (neuron0x34843a0()*-0.00205169);
}

double NNfunction_ss_dLuL::synapse0x3498b50() {
   return (neuron0x34846e0()*-0.547864);
}

double NNfunction_ss_dLuL::synapse0x3498b90() {
   return (neuron0x3484a20()*-0.336208);
}

double NNfunction_ss_dLuL::synapse0x3498bd0() {
   return (neuron0x3484d60()*-0.36032);
}

double NNfunction_ss_dLuL::synapse0x3498c10() {
   return (neuron0x34850a0()*0.0761426);
}

double NNfunction_ss_dLuL::synapse0x3498c50() {
   return (neuron0x34853e0()*-0.111373);
}

double NNfunction_ss_dLuL::synapse0x3498c90() {
   return (neuron0x3485720()*-0.0323154);
}

double NNfunction_ss_dLuL::synapse0x3498720() {
   return (neuron0x3485a60()*-0.154791);
}

double NNfunction_ss_dLuL::synapse0x3498760() {
   return (neuron0x3485fc0()*-0.405252);
}

double NNfunction_ss_dLuL::synapse0x3498de0() {
   return (neuron0x3486300()*0.226229);
}

double NNfunction_ss_dLuL::synapse0x3498e20() {
   return (neuron0x3486640()*-0.188871);
}

double NNfunction_ss_dLuL::synapse0x3498e60() {
   return (neuron0x3486980()*0.882146);
}

double NNfunction_ss_dLuL::synapse0x3498ea0() {
   return (neuron0x3486cc0()*0.454982);
}

double NNfunction_ss_dLuL::synapse0x3498ee0() {
   return (neuron0x3487000()*0.716785);
}

double NNfunction_ss_dLuL::synapse0x3498f20() {
   return (neuron0x3487340()*0.319206);
}

double NNfunction_ss_dLuL::synapse0x34aadf0() {
   return (neuron0x34826f0()*0.014904);
}

double NNfunction_ss_dLuL::synapse0x34aae30() {
   return (neuron0x34829a0()*-0.091202);
}

double NNfunction_ss_dLuL::synapse0x34aae70() {
   return (neuron0x3482ce0()*-0.48527);
}

double NNfunction_ss_dLuL::synapse0x34aaeb0() {
   return (neuron0x3483020()*0.948121);
}

double NNfunction_ss_dLuL::synapse0x34aaef0() {
   return (neuron0x3483360()*-0.00295929);
}

double NNfunction_ss_dLuL::synapse0x34aaf30() {
   return (neuron0x34836a0()*-0.0300164);
}

double NNfunction_ss_dLuL::synapse0x34aaf70() {
   return (neuron0x34839e0()*-0.177537);
}

double NNfunction_ss_dLuL::synapse0x34aafb0() {
   return (neuron0x3483d20()*-0.127606);
}

double NNfunction_ss_dLuL::synapse0x34aaff0() {
   return (neuron0x3484060()*0.00046632);
}

double NNfunction_ss_dLuL::synapse0x34ab030() {
   return (neuron0x34843a0()*0.0114106);
}

double NNfunction_ss_dLuL::synapse0x34ab070() {
   return (neuron0x34846e0()*0.0612411);
}

double NNfunction_ss_dLuL::synapse0x34ab0b0() {
   return (neuron0x3484a20()*0.85552);
}

double NNfunction_ss_dLuL::synapse0x34ab0f0() {
   return (neuron0x3484d60()*-0.0683499);
}

double NNfunction_ss_dLuL::synapse0x34ab130() {
   return (neuron0x34850a0()*0.047061);
}

double NNfunction_ss_dLuL::synapse0x34ab170() {
   return (neuron0x34853e0()*0.103363);
}

double NNfunction_ss_dLuL::synapse0x34ab1b0() {
   return (neuron0x3485720()*-0.25695);
}

double NNfunction_ss_dLuL::synapse0x3498f60() {
   return (neuron0x3485a60()*-0.118294);
}

double NNfunction_ss_dLuL::synapse0x3498fa0() {
   return (neuron0x3485fc0()*0.017883);
}

double NNfunction_ss_dLuL::synapse0x34ab300() {
   return (neuron0x3486300()*-0.0333334);
}

double NNfunction_ss_dLuL::synapse0x34ab340() {
   return (neuron0x3486640()*0.0850208);
}

double NNfunction_ss_dLuL::synapse0x34ab380() {
   return (neuron0x3486980()*-0.049532);
}

double NNfunction_ss_dLuL::synapse0x34ab3c0() {
   return (neuron0x3486cc0()*-0.0481451);
}

double NNfunction_ss_dLuL::synapse0x34ab400() {
   return (neuron0x3487000()*0.026822);
}

double NNfunction_ss_dLuL::synapse0x34ab440() {
   return (neuron0x3487340()*-0.0229114);
}

double NNfunction_ss_dLuL::synapse0x34ab7c0() {
   return (neuron0x34826f0()*0.104041);
}

double NNfunction_ss_dLuL::synapse0x34ab800() {
   return (neuron0x34829a0()*0.0760696);
}

double NNfunction_ss_dLuL::synapse0x34ab840() {
   return (neuron0x3482ce0()*-0.126532);
}

double NNfunction_ss_dLuL::synapse0x34ab880() {
   return (neuron0x3483020()*0.324203);
}

double NNfunction_ss_dLuL::synapse0x34ab8c0() {
   return (neuron0x3483360()*0.0287511);
}

double NNfunction_ss_dLuL::synapse0x34ab900() {
   return (neuron0x34836a0()*-0.0325245);
}

double NNfunction_ss_dLuL::synapse0x34ab940() {
   return (neuron0x34839e0()*0.00613508);
}

double NNfunction_ss_dLuL::synapse0x34ab980() {
   return (neuron0x3483d20()*-0.0943562);
}

double NNfunction_ss_dLuL::synapse0x34ab9c0() {
   return (neuron0x3484060()*0.267944);
}

double NNfunction_ss_dLuL::synapse0x34aba00() {
   return (neuron0x34843a0()*0.0315663);
}

double NNfunction_ss_dLuL::synapse0x34aba40() {
   return (neuron0x34846e0()*-0.0244795);
}

double NNfunction_ss_dLuL::synapse0x34aba80() {
   return (neuron0x3484a20()*-0.91098);
}

double NNfunction_ss_dLuL::synapse0x34abac0() {
   return (neuron0x3484d60()*-0.418412);
}

double NNfunction_ss_dLuL::synapse0x34abb00() {
   return (neuron0x34850a0()*0.280474);
}

double NNfunction_ss_dLuL::synapse0x34abb40() {
   return (neuron0x34853e0()*-0.362323);
}

double NNfunction_ss_dLuL::synapse0x34abb80() {
   return (neuron0x3485720()*-0.26071);
}

double NNfunction_ss_dLuL::synapse0x34ab610() {
   return (neuron0x3485a60()*0.0598651);
}

double NNfunction_ss_dLuL::synapse0x34ab650() {
   return (neuron0x3485fc0()*-0.0729126);
}

double NNfunction_ss_dLuL::synapse0x34abcd0() {
   return (neuron0x3486300()*-0.0714051);
}

double NNfunction_ss_dLuL::synapse0x34abd10() {
   return (neuron0x3486640()*-0.0463267);
}

double NNfunction_ss_dLuL::synapse0x34abd50() {
   return (neuron0x3486980()*-0.0968153);
}

double NNfunction_ss_dLuL::synapse0x34abd90() {
   return (neuron0x3486cc0()*0.089314);
}

double NNfunction_ss_dLuL::synapse0x34abdd0() {
   return (neuron0x3487000()*-0.100954);
}

double NNfunction_ss_dLuL::synapse0x34abe10() {
   return (neuron0x3487340()*-0.00492015);
}

double NNfunction_ss_dLuL::synapse0x34ac190() {
   return (neuron0x34826f0()*-0.269083);
}

double NNfunction_ss_dLuL::synapse0x34ac1d0() {
   return (neuron0x34829a0()*-0.419642);
}

double NNfunction_ss_dLuL::synapse0x34ac210() {
   return (neuron0x3482ce0()*-0.129824);
}

double NNfunction_ss_dLuL::synapse0x34ac250() {
   return (neuron0x3483020()*0.740099);
}

double NNfunction_ss_dLuL::synapse0x34ac290() {
   return (neuron0x3483360()*-0.102163);
}

double NNfunction_ss_dLuL::synapse0x34ac2d0() {
   return (neuron0x34836a0()*0.0483266);
}

double NNfunction_ss_dLuL::synapse0x34ac310() {
   return (neuron0x34839e0()*-0.67582);
}

double NNfunction_ss_dLuL::synapse0x34ac350() {
   return (neuron0x3483d20()*0.369351);
}

double NNfunction_ss_dLuL::synapse0x34ac390() {
   return (neuron0x3484060()*0.0747058);
}

double NNfunction_ss_dLuL::synapse0x34ac3d0() {
   return (neuron0x34843a0()*0.0053858);
}

double NNfunction_ss_dLuL::synapse0x34ac410() {
   return (neuron0x34846e0()*-0.000377939);
}

double NNfunction_ss_dLuL::synapse0x34ac450() {
   return (neuron0x3484a20()*-0.501369);
}

double NNfunction_ss_dLuL::synapse0x34ac490() {
   return (neuron0x3484d60()*-0.386854);
}

double NNfunction_ss_dLuL::synapse0x34ac4d0() {
   return (neuron0x34850a0()*0.254811);
}

double NNfunction_ss_dLuL::synapse0x34ac510() {
   return (neuron0x34853e0()*-0.128298);
}

double NNfunction_ss_dLuL::synapse0x34ac550() {
   return (neuron0x3485720()*0.38569);
}

double NNfunction_ss_dLuL::synapse0x34abfe0() {
   return (neuron0x3485a60()*0.465038);
}

double NNfunction_ss_dLuL::synapse0x34ac020() {
   return (neuron0x3485fc0()*0.181209);
}

double NNfunction_ss_dLuL::synapse0x34ac6a0() {
   return (neuron0x3486300()*-0.151589);
}

double NNfunction_ss_dLuL::synapse0x34ac6e0() {
   return (neuron0x3486640()*0.0248609);
}

double NNfunction_ss_dLuL::synapse0x34ac720() {
   return (neuron0x3486980()*-0.0814954);
}

double NNfunction_ss_dLuL::synapse0x34ac760() {
   return (neuron0x3486cc0()*0.00965037);
}

double NNfunction_ss_dLuL::synapse0x34ac7a0() {
   return (neuron0x3487000()*-0.360545);
}

double NNfunction_ss_dLuL::synapse0x34ac7e0() {
   return (neuron0x3487340()*-0.137786);
}

double NNfunction_ss_dLuL::synapse0x34acb60() {
   return (neuron0x34826f0()*0.0217061);
}

double NNfunction_ss_dLuL::synapse0x34acba0() {
   return (neuron0x34829a0()*0.0111886);
}

double NNfunction_ss_dLuL::synapse0x34acbe0() {
   return (neuron0x3482ce0()*0.00396896);
}

double NNfunction_ss_dLuL::synapse0x34acc20() {
   return (neuron0x3483020()*12.2016);
}

double NNfunction_ss_dLuL::synapse0x34acc60() {
   return (neuron0x3483360()*0.0385099);
}

double NNfunction_ss_dLuL::synapse0x34acca0() {
   return (neuron0x34836a0()*-0.00671352);
}

double NNfunction_ss_dLuL::synapse0x34acce0() {
   return (neuron0x34839e0()*-0.0142521);
}

double NNfunction_ss_dLuL::synapse0x34acd20() {
   return (neuron0x3483d20()*-0.0205433);
}

double NNfunction_ss_dLuL::synapse0x34acd60() {
   return (neuron0x3484060()*-0.00773942);
}

double NNfunction_ss_dLuL::synapse0x34acda0() {
   return (neuron0x34843a0()*0.00369185);
}

double NNfunction_ss_dLuL::synapse0x34acde0() {
   return (neuron0x34846e0()*-0.00921761);
}

double NNfunction_ss_dLuL::synapse0x34ace20() {
   return (neuron0x3484a20()*0.72198);
}

double NNfunction_ss_dLuL::synapse0x34ace60() {
   return (neuron0x3484d60()*-0.0330148);
}

double NNfunction_ss_dLuL::synapse0x34acea0() {
   return (neuron0x34850a0()*0.0535846);
}

double NNfunction_ss_dLuL::synapse0x34acee0() {
   return (neuron0x34853e0()*0.00160739);
}

double NNfunction_ss_dLuL::synapse0x34acf20() {
   return (neuron0x3485720()*-0.0249894);
}

double NNfunction_ss_dLuL::synapse0x34ac9b0() {
   return (neuron0x3485a60()*-0.0209142);
}

double NNfunction_ss_dLuL::synapse0x34ac9f0() {
   return (neuron0x3485fc0()*-0.0026613);
}

double NNfunction_ss_dLuL::synapse0x34ad070() {
   return (neuron0x3486300()*-0.00124932);
}

double NNfunction_ss_dLuL::synapse0x34ad0b0() {
   return (neuron0x3486640()*-0.0228126);
}

double NNfunction_ss_dLuL::synapse0x34ad0f0() {
   return (neuron0x3486980()*-0.0312118);
}

double NNfunction_ss_dLuL::synapse0x34ad130() {
   return (neuron0x3486cc0()*-0.00103824);
}

double NNfunction_ss_dLuL::synapse0x34ad170() {
   return (neuron0x3487000()*0.01653);
}

double NNfunction_ss_dLuL::synapse0x34ad1b0() {
   return (neuron0x3487340()*0.00765591);
}

double NNfunction_ss_dLuL::synapse0x3488600() {
   return (neuron0x34877b0()*-2.00937);
}

double NNfunction_ss_dLuL::synapse0x3488640() {
   return (neuron0x3487ff0()*0.0593355);
}

double NNfunction_ss_dLuL::synapse0x3489b60() {
   return (neuron0x3488ad0()*-0.0399601);
}

double NNfunction_ss_dLuL::synapse0x3489ba0() {
   return (neuron0x324cef0()*-0.00942004);
}

double NNfunction_ss_dLuL::synapse0x348b630() {
   return (neuron0x34898b0()*-0.0170817);
}

double NNfunction_ss_dLuL::synapse0x348b670() {
   return (neuron0x348b380()*-0.0112496);
}

double NNfunction_ss_dLuL::synapse0x348c400() {
   return (neuron0x348c150()*-0.042341);
}

double NNfunction_ss_dLuL::synapse0x348c440() {
   return (neuron0x348cb20()*-0.0017992);
}

double NNfunction_ss_dLuL::synapse0x348cdd0() {
   return (neuron0x348d4f0()*0.0192852);
}

double NNfunction_ss_dLuL::synapse0x348ce10() {
   return (neuron0x348dfd0()*0.3221);
}

double NNfunction_ss_dLuL::synapse0x348d7a0() {
   return (neuron0x348e9a0()*0.0559257);
}

double NNfunction_ss_dLuL::synapse0x348d7e0() {
   return (neuron0x348ba80()*-1.63069);
}

double NNfunction_ss_dLuL::synapse0x348e280() {
   return (neuron0x3490550()*-0.0377784);
}

double NNfunction_ss_dLuL::synapse0x348e2c0() {
   return (neuron0x3490f20()*-0.0293346);
}

double NNfunction_ss_dLuL::synapse0x348ec50() {
   return (neuron0x34918f0()*-0.0156897);
}

double NNfunction_ss_dLuL::synapse0x348ec90() {
   return (neuron0x34922c0()*-0.00757404);
}

double NNfunction_ss_dLuL::synapse0x348bd30() {
   return (neuron0x34940d0()*0.0228345);
}

double NNfunction_ss_dLuL::synapse0x348bd70() {
   return (neuron0x34943b0()*-0.0181039);
}

double NNfunction_ss_dLuL::synapse0x3490800() {
   return (neuron0x3494d80()*-0.0141397);
}

double NNfunction_ss_dLuL::synapse0x3490840() {
   return (neuron0x3495750()*-0.00805519);
}

double NNfunction_ss_dLuL::synapse0x34911d0() {
   return (neuron0x3496120()*-0.0227514);
}

double NNfunction_ss_dLuL::synapse0x3491210() {
   return (neuron0x3496af0()*-2.20314);
}

double NNfunction_ss_dLuL::synapse0x3491ba0() {
   return (neuron0x348f640()*-0.0714666);
}

double NNfunction_ss_dLuL::synapse0x3491be0() {
   return (neuron0x3490010()*0.354422);
}

double NNfunction_ss_dLuL::synapse0x3492570() {
   return (neuron0x3499880()*0.176691);
}

double NNfunction_ss_dLuL::synapse0x34925b0() {
   return (neuron0x349a250()*0.0203112);
}

double NNfunction_ss_dLuL::synapse0x3485600() {
   return (neuron0x349ac20()*0.0169249);
}

double NNfunction_ss_dLuL::synapse0x3485640() {
   return (neuron0x349b5f0()*0.00450168);
}

double NNfunction_ss_dLuL::synapse0x3494660() {
   return (neuron0x349bfc0()*0.0179519);
}

double NNfunction_ss_dLuL::synapse0x34946a0() {
   return (neuron0x349c990()*-0.0269889);
}

double NNfunction_ss_dLuL::synapse0x3495030() {
   return (neuron0x349d360()*0.00509812);
}

double NNfunction_ss_dLuL::synapse0x3495070() {
   return (neuron0x349dd30()*0.667772);
}

double NNfunction_ss_dLuL::synapse0x3495a00() {
   return (neuron0x3493dc0()*-0.00141442);
}

double NNfunction_ss_dLuL::synapse0x3495a40() {
   return (neuron0x34a0910()*-0.132863);
}

double NNfunction_ss_dLuL::synapse0x34963d0() {
   return (neuron0x34a12e0()*-0.0358667);
}

double NNfunction_ss_dLuL::synapse0x3496410() {
   return (neuron0x34a1cb0()*-0.0248652);
}

double NNfunction_ss_dLuL::synapse0x3496da0() {
   return (neuron0x34a2680()*0.124117);
}

double NNfunction_ss_dLuL::synapse0x3496de0() {
   return (neuron0x34a3050()*0.476868);
}

double NNfunction_ss_dLuL::synapse0x348f8f0() {
   return (neuron0x34a3a20()*0.0118936);
}

double NNfunction_ss_dLuL::synapse0x348f930() {
   return (neuron0x34a43f0()*-0.0274119);
}

double NNfunction_ss_dLuL::synapse0x34991a0() {
   return (neuron0x34a4dc0()*-0.0544133);
}

double NNfunction_ss_dLuL::synapse0x34991e0() {
   return (neuron0x34a59a0()*-0.0451621);
}

double NNfunction_ss_dLuL::synapse0x3499b30() {
   return (neuron0x34a6370()*-0.158307);
}

double NNfunction_ss_dLuL::synapse0x3499b70() {
   return (neuron0x34971f0()*1.50156);
}

double NNfunction_ss_dLuL::synapse0x349a500() {
   return (neuron0x3497bc0()*-0.00659639);
}

double NNfunction_ss_dLuL::synapse0x349a540() {
   return (neuron0x3498590()*-0.01227);
}

double NNfunction_ss_dLuL::synapse0x349aed0() {
   return (neuron0x34aabd0()*0.421105);
}

double NNfunction_ss_dLuL::synapse0x349af10() {
   return (neuron0x34ab480()*-0.0534672);
}

double NNfunction_ss_dLuL::synapse0x349b8a0() {
   return (neuron0x34abe50()*-0.0355066);
}

double NNfunction_ss_dLuL::synapse0x349b8e0() {
   return (neuron0x34ac820()*0.521912);
}

double NNfunction_ss_dLuL::synapse0x349dfe0() {
   return (neuron0x34877b0()*1.54885);
}

double NNfunction_ss_dLuL::synapse0x349e020() {
   return (neuron0x3487ff0()*0.054105);
}

double NNfunction_ss_dLuL::synapse0x34935a0() {
   return (neuron0x3488ad0()*-0.796127);
}

double NNfunction_ss_dLuL::synapse0x34935e0() {
   return (neuron0x324cef0()*-0.578143);
}

double NNfunction_ss_dLuL::synapse0x34a0bc0() {
   return (neuron0x34898b0()*-1.60311);
}

double NNfunction_ss_dLuL::synapse0x34a0c00() {
   return (neuron0x348b380()*-1.43209);
}

double NNfunction_ss_dLuL::synapse0x34a1590() {
   return (neuron0x348c150()*-2.08981);
}

double NNfunction_ss_dLuL::synapse0x34a15d0() {
   return (neuron0x348cb20()*1.66793);
}

double NNfunction_ss_dLuL::synapse0x34a1f60() {
   return (neuron0x348d4f0()*-0.806294);
}

double NNfunction_ss_dLuL::synapse0x34a1fa0() {
   return (neuron0x348dfd0()*-1.7193);
}

double NNfunction_ss_dLuL::synapse0x34a2930() {
   return (neuron0x348e9a0()*2.5725);
}

double NNfunction_ss_dLuL::synapse0x34a2970() {
   return (neuron0x348ba80()*2.23335);
}

double NNfunction_ss_dLuL::synapse0x34a3300() {
   return (neuron0x3490550()*-1.33699);
}

double NNfunction_ss_dLuL::synapse0x34a3340() {
   return (neuron0x3490f20()*-1.75355);
}

double NNfunction_ss_dLuL::synapse0x34a3cd0() {
   return (neuron0x34918f0()*0.0405103);
}

double NNfunction_ss_dLuL::synapse0x34a3d10() {
   return (neuron0x34922c0()*-0.742686);
}

double NNfunction_ss_dLuL::synapse0x34a46a0() {
   return (neuron0x34940d0()*-2.71378);
}

double NNfunction_ss_dLuL::synapse0x34a46e0() {
   return (neuron0x34943b0()*-0.83949);
}

double NNfunction_ss_dLuL::synapse0x34a5070() {
   return (neuron0x3494d80()*-0.053893);
}

double NNfunction_ss_dLuL::synapse0x34a50b0() {
   return (neuron0x3495750()*-0.475502);
}

double NNfunction_ss_dLuL::synapse0x34a5c50() {
   return (neuron0x3496120()*-1.24611);
}

double NNfunction_ss_dLuL::synapse0x34a5c90() {
   return (neuron0x3496af0()*1.73445);
}

double NNfunction_ss_dLuL::synapse0x34a6620() {
   return (neuron0x348f640()*7.21798);
}

double NNfunction_ss_dLuL::synapse0x34a6660() {
   return (neuron0x3490010()*1.44064);
}

double NNfunction_ss_dLuL::synapse0x34974a0() {
   return (neuron0x3499880()*0.847494);
}

double NNfunction_ss_dLuL::synapse0x34974e0() {
   return (neuron0x349a250()*-1.90595);
}

double NNfunction_ss_dLuL::synapse0x3497e70() {
   return (neuron0x349ac20()*0.234326);
}

double NNfunction_ss_dLuL::synapse0x3497eb0() {
   return (neuron0x349b5f0()*-0.468008);
}

double NNfunction_ss_dLuL::synapse0x3498840() {
   return (neuron0x349bfc0()*0.64001);
}

double NNfunction_ss_dLuL::synapse0x3498880() {
   return (neuron0x349c990()*-0.367945);
}

double NNfunction_ss_dLuL::synapse0x34aad60() {
   return (neuron0x349d360()*-0.800808);
}

double NNfunction_ss_dLuL::synapse0x34aada0() {
   return (neuron0x349dd30()*-3.71291);
}

double NNfunction_ss_dLuL::synapse0x34ab730() {
   return (neuron0x3493dc0()*-0.397655);
}

double NNfunction_ss_dLuL::synapse0x34ab770() {
   return (neuron0x34a0910()*-2.33031);
}

double NNfunction_ss_dLuL::synapse0x34ac100() {
   return (neuron0x34a12e0()*-3.10706);
}

double NNfunction_ss_dLuL::synapse0x34ac140() {
   return (neuron0x34a1cb0()*0.863979);
}

double NNfunction_ss_dLuL::synapse0x34acad0() {
   return (neuron0x34a2680()*1.16643);
}

double NNfunction_ss_dLuL::synapse0x34acb10() {
   return (neuron0x34a3050()*-1.21104);
}

double NNfunction_ss_dLuL::synapse0x3487a60() {
   return (neuron0x34a3a20()*0.504639);
}

double NNfunction_ss_dLuL::synapse0x3487aa0() {
   return (neuron0x34a43f0()*-1.57385);
}

double NNfunction_ss_dLuL::synapse0x349c270() {
   return (neuron0x34a4dc0()*-1.61197);
}

double NNfunction_ss_dLuL::synapse0x349c2b0() {
   return (neuron0x34a59a0()*-0.262478);
}

double NNfunction_ss_dLuL::synapse0x34ad1f0() {
   return (neuron0x34a6370()*1.61931);
}

double NNfunction_ss_dLuL::synapse0x34ad230() {
   return (neuron0x34971f0()*-1.60426);
}

double NNfunction_ss_dLuL::synapse0x34ad270() {
   return (neuron0x3497bc0()*1.50716);
}

double NNfunction_ss_dLuL::synapse0x34ad2b0() {
   return (neuron0x3498590()*1.00272);
}

double NNfunction_ss_dLuL::synapse0x34b4160() {
   return (neuron0x34aabd0()*-0.804636);
}

double NNfunction_ss_dLuL::synapse0x34b41a0() {
   return (neuron0x34ab480()*0.602591);
}

double NNfunction_ss_dLuL::synapse0x34b41e0() {
   return (neuron0x34abe50()*0.562144);
}

double NNfunction_ss_dLuL::synapse0x34b4220() {
   return (neuron0x34ac820()*-5.87071);
}

double NNfunction_ss_dLuL::synapse0x34b45a0() {
   return (neuron0x34877b0()*0.693264);
}

double NNfunction_ss_dLuL::synapse0x34b45e0() {
   return (neuron0x3487ff0()*-0.106264);
}

double NNfunction_ss_dLuL::synapse0x34b4620() {
   return (neuron0x3488ad0()*0.12807);
}

double NNfunction_ss_dLuL::synapse0x34b4660() {
   return (neuron0x324cef0()*-0.136412);
}

double NNfunction_ss_dLuL::synapse0x34b46a0() {
   return (neuron0x34898b0()*0.270843);
}

double NNfunction_ss_dLuL::synapse0x34b46e0() {
   return (neuron0x348b380()*0.0843762);
}

double NNfunction_ss_dLuL::synapse0x34b4720() {
   return (neuron0x348c150()*0.139641);
}

double NNfunction_ss_dLuL::synapse0x34b4760() {
   return (neuron0x348cb20()*-0.253154);
}

double NNfunction_ss_dLuL::synapse0x34b47a0() {
   return (neuron0x348d4f0()*0.128523);
}

double NNfunction_ss_dLuL::synapse0x34b47e0() {
   return (neuron0x348dfd0()*1.88372);
}

double NNfunction_ss_dLuL::synapse0x34b4820() {
   return (neuron0x348e9a0()*0.180352);
}

double NNfunction_ss_dLuL::synapse0x34b4860() {
   return (neuron0x348ba80()*0.261616);
}

double NNfunction_ss_dLuL::synapse0x34b48a0() {
   return (neuron0x3490550()*0.235006);
}

double NNfunction_ss_dLuL::synapse0x34b48e0() {
   return (neuron0x3490f20()*0.217278);
}

double NNfunction_ss_dLuL::synapse0x34b4920() {
   return (neuron0x34918f0()*0.00507419);
}

double NNfunction_ss_dLuL::synapse0x34b4960() {
   return (neuron0x34922c0()*0.108151);
}

double NNfunction_ss_dLuL::synapse0x34b43f0() {
   return (neuron0x34940d0()*0.0689234);
}

double NNfunction_ss_dLuL::synapse0x34b4430() {
   return (neuron0x34943b0()*-0.0649407);
}

double NNfunction_ss_dLuL::synapse0x34b4ab0() {
   return (neuron0x3494d80()*0.0764448);
}

double NNfunction_ss_dLuL::synapse0x34b4af0() {
   return (neuron0x3495750()*0.139524);
}

double NNfunction_ss_dLuL::synapse0x34b4b30() {
   return (neuron0x3496120()*0.245418);
}

double NNfunction_ss_dLuL::synapse0x34b4b70() {
   return (neuron0x3496af0()*0.63424);
}

double NNfunction_ss_dLuL::synapse0x34b4bb0() {
   return (neuron0x348f640()*-3.82561);
}

double NNfunction_ss_dLuL::synapse0x34b4bf0() {
   return (neuron0x3490010()*-1.60126);
}

double NNfunction_ss_dLuL::synapse0x34b4c30() {
   return (neuron0x3499880()*-0.756218);
}

double NNfunction_ss_dLuL::synapse0x34b4c70() {
   return (neuron0x349a250()*0.249408);
}

double NNfunction_ss_dLuL::synapse0x34b4cb0() {
   return (neuron0x349ac20()*0.0784844);
}

double NNfunction_ss_dLuL::synapse0x34b4cf0() {
   return (neuron0x349b5f0()*0.350608);
}

double NNfunction_ss_dLuL::synapse0x34b4d30() {
   return (neuron0x349bfc0()*-0.0947474);
}

double NNfunction_ss_dLuL::synapse0x34b4d70() {
   return (neuron0x349c990()*-0.00293058);
}

double NNfunction_ss_dLuL::synapse0x34b4db0() {
   return (neuron0x349d360()*0.597443);
}

double NNfunction_ss_dLuL::synapse0x34b4df0() {
   return (neuron0x349dd30()*-7.73861);
}

double NNfunction_ss_dLuL::synapse0x34b49a0() {
   return (neuron0x3493dc0()*0.280033);
}

double NNfunction_ss_dLuL::synapse0x34b49e0() {
   return (neuron0x34a0910()*0.662628);
}

double NNfunction_ss_dLuL::synapse0x34b4a20() {
   return (neuron0x34a12e0()*0.408693);
}

double NNfunction_ss_dLuL::synapse0x34b4a60() {
   return (neuron0x34a1cb0()*-0.053767);
}

double NNfunction_ss_dLuL::synapse0x34b5040() {
   return (neuron0x34a2680()*-0.1979);
}

double NNfunction_ss_dLuL::synapse0x34b5080() {
   return (neuron0x34a3050()*2.32202);
}

double NNfunction_ss_dLuL::synapse0x34b50c0() {
   return (neuron0x34a3a20()*-0.0173455);
}

double NNfunction_ss_dLuL::synapse0x34b5100() {
   return (neuron0x34a43f0()*0.254239);
}

double NNfunction_ss_dLuL::synapse0x34b5140() {
   return (neuron0x34a4dc0()*-0.186642);
}

double NNfunction_ss_dLuL::synapse0x34b5180() {
   return (neuron0x34a59a0()*0.0546672);
}

double NNfunction_ss_dLuL::synapse0x34b51c0() {
   return (neuron0x34a6370()*0.705573);
}

double NNfunction_ss_dLuL::synapse0x34b5200() {
   return (neuron0x34971f0()*0.614306);
}

double NNfunction_ss_dLuL::synapse0x34b5240() {
   return (neuron0x3497bc0()*-0.240133);
}

double NNfunction_ss_dLuL::synapse0x34b5280() {
   return (neuron0x3498590()*-0.184691);
}

double NNfunction_ss_dLuL::synapse0x34b52c0() {
   return (neuron0x34aabd0()*-0.443821);
}

double NNfunction_ss_dLuL::synapse0x34b5300() {
   return (neuron0x34ab480()*0.450799);
}

double NNfunction_ss_dLuL::synapse0x34b5340() {
   return (neuron0x34abe50()*0.0943962);
}

double NNfunction_ss_dLuL::synapse0x34b5380() {
   return (neuron0x34ac820()*7.44668);
}

double NNfunction_ss_dLuL::synapse0x34b5700() {
   return (neuron0x34877b0()*1.50912);
}

double NNfunction_ss_dLuL::synapse0x34b5740() {
   return (neuron0x3487ff0()*0.274581);
}

double NNfunction_ss_dLuL::synapse0x34b5780() {
   return (neuron0x3488ad0()*-0.413181);
}

double NNfunction_ss_dLuL::synapse0x34b57c0() {
   return (neuron0x324cef0()*-1.02061);
}

double NNfunction_ss_dLuL::synapse0x34b5800() {
   return (neuron0x34898b0()*1.55579);
}

double NNfunction_ss_dLuL::synapse0x34b5840() {
   return (neuron0x348b380()*-0.631601);
}

double NNfunction_ss_dLuL::synapse0x34b5880() {
   return (neuron0x348c150()*-0.970376);
}

double NNfunction_ss_dLuL::synapse0x34b58c0() {
   return (neuron0x348cb20()*-1.41205);
}

double NNfunction_ss_dLuL::synapse0x34b5900() {
   return (neuron0x348d4f0()*-0.852467);
}

double NNfunction_ss_dLuL::synapse0x34b5940() {
   return (neuron0x348dfd0()*-0.431916);
}

double NNfunction_ss_dLuL::synapse0x34b5980() {
   return (neuron0x348e9a0()*0.459248);
}

double NNfunction_ss_dLuL::synapse0x34b59c0() {
   return (neuron0x348ba80()*1.41576);
}

double NNfunction_ss_dLuL::synapse0x34b5a00() {
   return (neuron0x3490550()*0.0693179);
}

double NNfunction_ss_dLuL::synapse0x34b5a40() {
   return (neuron0x3490f20()*0.914932);
}

double NNfunction_ss_dLuL::synapse0x34b5a80() {
   return (neuron0x34918f0()*-1.08307);
}

double NNfunction_ss_dLuL::synapse0x34b5ac0() {
   return (neuron0x34922c0()*1.09294);
}

double NNfunction_ss_dLuL::synapse0x34b5550() {
   return (neuron0x34940d0()*0.502519);
}

double NNfunction_ss_dLuL::synapse0x34b5590() {
   return (neuron0x34943b0()*-0.977813);
}

double NNfunction_ss_dLuL::synapse0x34b5c10() {
   return (neuron0x3494d80()*-0.390552);
}

double NNfunction_ss_dLuL::synapse0x34b5c50() {
   return (neuron0x3495750()*1.0697);
}

double NNfunction_ss_dLuL::synapse0x34b5c90() {
   return (neuron0x3496120()*1.47945);
}

double NNfunction_ss_dLuL::synapse0x34b5cd0() {
   return (neuron0x3496af0()*1.57197);
}

double NNfunction_ss_dLuL::synapse0x34b5d10() {
   return (neuron0x348f640()*0.973964);
}

double NNfunction_ss_dLuL::synapse0x34b5d50() {
   return (neuron0x3490010()*0.981645);
}

double NNfunction_ss_dLuL::synapse0x34b5d90() {
   return (neuron0x3499880()*2.01622);
}

double NNfunction_ss_dLuL::synapse0x34b5dd0() {
   return (neuron0x349a250()*0.777461);
}

double NNfunction_ss_dLuL::synapse0x34b5e10() {
   return (neuron0x349ac20()*0.9782);
}

double NNfunction_ss_dLuL::synapse0x34b5e50() {
   return (neuron0x349b5f0()*1.72023);
}

double NNfunction_ss_dLuL::synapse0x34b5e90() {
   return (neuron0x349bfc0()*1.3813);
}

double NNfunction_ss_dLuL::synapse0x34b5ed0() {
   return (neuron0x349c990()*-0.953806);
}

double NNfunction_ss_dLuL::synapse0x34b5f10() {
   return (neuron0x349d360()*2.9828);
}

double NNfunction_ss_dLuL::synapse0x34b5f50() {
   return (neuron0x349dd30()*-6.90981);
}

double NNfunction_ss_dLuL::synapse0x34b5b00() {
   return (neuron0x3493dc0()*-1.08911);
}

double NNfunction_ss_dLuL::synapse0x34b5b40() {
   return (neuron0x34a0910()*-0.239577);
}

double NNfunction_ss_dLuL::synapse0x34b5b80() {
   return (neuron0x34a12e0()*-1.16781);
}

double NNfunction_ss_dLuL::synapse0x34b5bc0() {
   return (neuron0x34a1cb0()*-1.62791);
}

double NNfunction_ss_dLuL::synapse0x34b61a0() {
   return (neuron0x34a2680()*0.921365);
}

double NNfunction_ss_dLuL::synapse0x34b61e0() {
   return (neuron0x34a3050()*2.27568);
}

double NNfunction_ss_dLuL::synapse0x34b6220() {
   return (neuron0x34a3a20()*0.837013);
}

double NNfunction_ss_dLuL::synapse0x34b6260() {
   return (neuron0x34a43f0()*0.497827);
}

double NNfunction_ss_dLuL::synapse0x34b62a0() {
   return (neuron0x34a4dc0()*-0.993628);
}

double NNfunction_ss_dLuL::synapse0x34b62e0() {
   return (neuron0x34a59a0()*-0.866427);
}

double NNfunction_ss_dLuL::synapse0x34b6320() {
   return (neuron0x34a6370()*-1.97208);
}

double NNfunction_ss_dLuL::synapse0x34b6360() {
   return (neuron0x34971f0()*-1.5309);
}

double NNfunction_ss_dLuL::synapse0x34b63a0() {
   return (neuron0x3497bc0()*-1.72296);
}

double NNfunction_ss_dLuL::synapse0x34b63e0() {
   return (neuron0x3498590()*-1.50558);
}

double NNfunction_ss_dLuL::synapse0x34b6420() {
   return (neuron0x34aabd0()*-2.99291);
}

double NNfunction_ss_dLuL::synapse0x34b6460() {
   return (neuron0x34ab480()*-0.649005);
}

double NNfunction_ss_dLuL::synapse0x34b64a0() {
   return (neuron0x34abe50()*-1.34795);
}

double NNfunction_ss_dLuL::synapse0x34b64e0() {
   return (neuron0x34ac820()*8.39218);
}

double NNfunction_ss_dLuL::synapse0x34b6860() {
   return (neuron0x34877b0()*0.360786);
}

double NNfunction_ss_dLuL::synapse0x34b68a0() {
   return (neuron0x3487ff0()*-0.668894);
}

double NNfunction_ss_dLuL::synapse0x34b68e0() {
   return (neuron0x3488ad0()*0.0684165);
}

double NNfunction_ss_dLuL::synapse0x34b6920() {
   return (neuron0x324cef0()*-0.115588);
}

double NNfunction_ss_dLuL::synapse0x34b6960() {
   return (neuron0x34898b0()*0.199651);
}

double NNfunction_ss_dLuL::synapse0x34b69a0() {
   return (neuron0x348b380()*-0.127505);
}

double NNfunction_ss_dLuL::synapse0x34b69e0() {
   return (neuron0x348c150()*0.207473);
}

double NNfunction_ss_dLuL::synapse0x34b6a20() {
   return (neuron0x348cb20()*-0.214593);
}

double NNfunction_ss_dLuL::synapse0x34b6a60() {
   return (neuron0x348d4f0()*-0.118576);
}

double NNfunction_ss_dLuL::synapse0x34b6aa0() {
   return (neuron0x348dfd0()*-1.74269);
}

double NNfunction_ss_dLuL::synapse0x34b6ae0() {
   return (neuron0x348e9a0()*-0.678695);
}

double NNfunction_ss_dLuL::synapse0x34b6b20() {
   return (neuron0x348ba80()*3.45341);
}

double NNfunction_ss_dLuL::synapse0x34b6b60() {
   return (neuron0x3490550()*0.192112);
}

double NNfunction_ss_dLuL::synapse0x34b6ba0() {
   return (neuron0x3490f20()*0.151426);
}

double NNfunction_ss_dLuL::synapse0x34b6be0() {
   return (neuron0x34918f0()*-0.0143084);
}

double NNfunction_ss_dLuL::synapse0x34b6c20() {
   return (neuron0x34922c0()*0.111295);
}

double NNfunction_ss_dLuL::synapse0x34b66b0() {
   return (neuron0x34940d0()*-1.3109);
}

double NNfunction_ss_dLuL::synapse0x34b66f0() {
   return (neuron0x34943b0()*0.0355062);
}

double NNfunction_ss_dLuL::synapse0x34b6d70() {
   return (neuron0x3494d80()*-0.0863116);
}

double NNfunction_ss_dLuL::synapse0x34b6db0() {
   return (neuron0x3495750()*0.0719683);
}

double NNfunction_ss_dLuL::synapse0x34b6df0() {
   return (neuron0x3496120()*0.167408);
}

double NNfunction_ss_dLuL::synapse0x34b6e30() {
   return (neuron0x3496af0()*0.274802);
}

double NNfunction_ss_dLuL::synapse0x34b6e70() {
   return (neuron0x348f640()*1.77818);
}

double NNfunction_ss_dLuL::synapse0x34b6eb0() {
   return (neuron0x3490010()*1.70318);
}

double NNfunction_ss_dLuL::synapse0x34b6ef0() {
   return (neuron0x3499880()*1.08459);
}

double NNfunction_ss_dLuL::synapse0x34b6f30() {
   return (neuron0x349a250()*0.366141);
}

double NNfunction_ss_dLuL::synapse0x34b6f70() {
   return (neuron0x349ac20()*-0.0264746);
}

double NNfunction_ss_dLuL::synapse0x34b6fb0() {
   return (neuron0x349b5f0()*0.116032);
}

double NNfunction_ss_dLuL::synapse0x34b6ff0() {
   return (neuron0x349bfc0()*-0.0602208);
}

double NNfunction_ss_dLuL::synapse0x34b7030() {
   return (neuron0x349c990()*-0.248395);
}

double NNfunction_ss_dLuL::synapse0x34b7070() {
   return (neuron0x349d360()*0.738262);
}

double NNfunction_ss_dLuL::synapse0x34b70b0() {
   return (neuron0x349dd30()*-2.80112);
}

double NNfunction_ss_dLuL::synapse0x34b6c60() {
   return (neuron0x3493dc0()*-0.865751);
}

double NNfunction_ss_dLuL::synapse0x34b6ca0() {
   return (neuron0x34a0910()*0.676816);
}

double NNfunction_ss_dLuL::synapse0x34b6ce0() {
   return (neuron0x34a12e0()*-2.48539);
}

double NNfunction_ss_dLuL::synapse0x34b6d20() {
   return (neuron0x34a1cb0()*-0.169138);
}

double NNfunction_ss_dLuL::synapse0x34b7300() {
   return (neuron0x34a2680()*0.305006);
}

double NNfunction_ss_dLuL::synapse0x34b7340() {
   return (neuron0x34a3050()*1.29908);
}

double NNfunction_ss_dLuL::synapse0x34b7380() {
   return (neuron0x34a3a20()*-0.0799229);
}

double NNfunction_ss_dLuL::synapse0x34b73c0() {
   return (neuron0x34a43f0()*0.24669);
}

double NNfunction_ss_dLuL::synapse0x34b7400() {
   return (neuron0x34a4dc0()*-0.524899);
}

double NNfunction_ss_dLuL::synapse0x34b7440() {
   return (neuron0x34a59a0()*-0.110021);
}

double NNfunction_ss_dLuL::synapse0x34b7480() {
   return (neuron0x34a6370()*-0.329117);
}

double NNfunction_ss_dLuL::synapse0x34b74c0() {
   return (neuron0x34971f0()*-0.458857);
}

double NNfunction_ss_dLuL::synapse0x34b7500() {
   return (neuron0x3497bc0()*-0.19041);
}

double NNfunction_ss_dLuL::synapse0x34b7540() {
   return (neuron0x3498590()*-0.156164);
}

double NNfunction_ss_dLuL::synapse0x34b7580() {
   return (neuron0x34aabd0()*-1.69845);
}

double NNfunction_ss_dLuL::synapse0x34b75c0() {
   return (neuron0x34ab480()*-1.36645);
}

double NNfunction_ss_dLuL::synapse0x34b7600() {
   return (neuron0x34abe50()*-0.139582);
}

double NNfunction_ss_dLuL::synapse0x34b7640() {
   return (neuron0x34ac820()*-2.90235);
}

double NNfunction_ss_dLuL::synapse0x34b78a0() {
   return (neuron0x34b3a20()*-6.6084);
}

double NNfunction_ss_dLuL::synapse0x34b78e0() {
   return (neuron0x34b3dc0()*9.00542);
}

double NNfunction_ss_dLuL::synapse0x34b7920() {
   return (neuron0x34b4260()*-7.8659);
}

double NNfunction_ss_dLuL::synapse0x34b7960() {
   return (neuron0x34b53c0()*7.6819);
}

double NNfunction_ss_dLuL::synapse0x34b79a0() {
   return (neuron0x34b6520()*5.50337);
}

