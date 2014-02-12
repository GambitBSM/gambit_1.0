#include "NNfunction_sb_cLuR.h"
#include <cmath>

double NNfunction_sb_cLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5318)/15.3151;
   input1 = (in1 - -4.76257)/1155.36;
   input2 = (in2 - 651.993)/620.015;
   input3 = (in3 - -55.4972)/827.036;
   input4 = (in4 - 1067.63)/960.121;
   input5 = (in5 - 899.58)/952.95;
   input6 = (in6 - 905.841)/951.518;
   input7 = (in7 - 926.78)/938.822;
   input8 = (in8 - 907.547)/956.535;
   input9 = (in9 - 886.787)/942.224;
   input10 = (in10 - 983.868)/946.397;
   input11 = (in11 - 709.054)/855.214;
   input12 = (in12 - 404.782)/428;
   input13 = (in13 - 500.035)/516.065;
   input14 = (in14 - 438.491)/450.36;
   input15 = (in15 - 720.933)/824.819;
   input16 = (in16 - 529.92)/560.515;
   input17 = (in17 - 752.081)/887.731;
   input18 = (in18 - 745.045)/897.129;
   input19 = (in19 - 792.161)/868.317;
   input20 = (in20 - -5.67128)/483.447;
   input21 = (in21 - 1.36146)/1159.56;
   input22 = (in22 - 3.64883)/1198.39;
   input23 = (in23 - -196.852)/603.404;
   switch(index) {
     case 0:
         return neuron0x15ed4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.5318)/15.3151;
   input1 = (input[1] - -4.76257)/1155.36;
   input2 = (input[2] - 651.993)/620.015;
   input3 = (input[3] - -55.4972)/827.036;
   input4 = (input[4] - 1067.63)/960.121;
   input5 = (input[5] - 899.58)/952.95;
   input6 = (input[6] - 905.841)/951.518;
   input7 = (input[7] - 926.78)/938.822;
   input8 = (input[8] - 907.547)/956.535;
   input9 = (input[9] - 886.787)/942.224;
   input10 = (input[10] - 983.868)/946.397;
   input11 = (input[11] - 709.054)/855.214;
   input12 = (input[12] - 404.782)/428;
   input13 = (input[13] - 500.035)/516.065;
   input14 = (input[14] - 438.491)/450.36;
   input15 = (input[15] - 720.933)/824.819;
   input16 = (input[16] - 529.92)/560.515;
   input17 = (input[17] - 752.081)/887.731;
   input18 = (input[18] - 745.045)/897.129;
   input19 = (input[19] - 792.161)/868.317;
   input20 = (input[20] - -5.67128)/483.447;
   input21 = (input[21] - 1.36146)/1159.56;
   input22 = (input[22] - 3.64883)/1198.39;
   input23 = (input[23] - -196.852)/603.404;
   switch(index) {
     case 0:
         return neuron0x15ed4b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLuR::neuron0x15b9570() {
   return input0;
}

double NNfunction_sb_cLuR::neuron0x15b98b0() {
   return input1;
}

double NNfunction_sb_cLuR::neuron0x15b9bf0() {
   return input2;
}

double NNfunction_sb_cLuR::neuron0x15b9f30() {
   return input3;
}

double NNfunction_sb_cLuR::neuron0x15ba270() {
   return input4;
}

double NNfunction_sb_cLuR::neuron0x15ba5b0() {
   return input5;
}

double NNfunction_sb_cLuR::neuron0x15ba8f0() {
   return input6;
}

double NNfunction_sb_cLuR::neuron0x15bac30() {
   return input7;
}

double NNfunction_sb_cLuR::neuron0x15baf70() {
   return input8;
}

double NNfunction_sb_cLuR::neuron0x15bb2b0() {
   return input9;
}

double NNfunction_sb_cLuR::neuron0x15bb5f0() {
   return input10;
}

double NNfunction_sb_cLuR::neuron0x15bb930() {
   return input11;
}

double NNfunction_sb_cLuR::neuron0x15bbc70() {
   return input12;
}

double NNfunction_sb_cLuR::neuron0x15bbfb0() {
   return input13;
}

double NNfunction_sb_cLuR::neuron0x15bc2f0() {
   return input14;
}

double NNfunction_sb_cLuR::neuron0x15bc630() {
   return input15;
}

double NNfunction_sb_cLuR::neuron0x15bc970() {
   return input16;
}

double NNfunction_sb_cLuR::neuron0x15bced0() {
   return input17;
}

double NNfunction_sb_cLuR::neuron0x15bd0f0() {
   return input18;
}

double NNfunction_sb_cLuR::neuron0x15bd430() {
   return input19;
}

double NNfunction_sb_cLuR::neuron0x15bd770() {
   return input20;
}

double NNfunction_sb_cLuR::neuron0x15bdab0() {
   return input21;
}

double NNfunction_sb_cLuR::neuron0x15bddf0() {
   return input22;
}

double NNfunction_sb_cLuR::neuron0x15be130() {
   return input23;
}

double NNfunction_sb_cLuR::input0x15be5d0() {
   double input = 0.244101;
   input += synapse0x13793e0();
   input += synapse0x15b9430();
   input += synapse0x15b9470();
   input += synapse0x15be880();
   input += synapse0x15be8c0();
   input += synapse0x15be900();
   input += synapse0x15be940();
   input += synapse0x15be980();
   input += synapse0x15be9c0();
   input += synapse0x15bea00();
   input += synapse0x15bea40();
   input += synapse0x15bea80();
   input += synapse0x15beac0();
   input += synapse0x15beb00();
   input += synapse0x15beb40();
   input += synapse0x15beb80();
   input += synapse0x15b93a0();
   input += synapse0x15b93e0();
   input += synapse0x136ac80();
   input += synapse0x136acc0();
   input += synapse0x15bede0();
   input += synapse0x15bee20();
   input += synapse0x15bee60();
   input += synapse0x15beea0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15be5d0() {
   double input = input0x15be5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15beee0() {
   double input = -0.167589;
   input += synapse0x15bf220();
   input += synapse0x15bf260();
   input += synapse0x15bf2a0();
   input += synapse0x15bf2e0();
   input += synapse0x15bf320();
   input += synapse0x15bf360();
   input += synapse0x15bf3a0();
   input += synapse0x15bf3e0();
   input += synapse0x15bf420();
   input += synapse0x15becd0();
   input += synapse0x15bed10();
   input += synapse0x15bed50();
   input += synapse0x15bed90();
   input += synapse0x15bf670();
   input += synapse0x15bf6b0();
   input += synapse0x15bf6f0();
   input += synapse0x15bf070();
   input += synapse0x15bf0b0();
   input += synapse0x15bf840();
   input += synapse0x15bf880();
   input += synapse0x15bf8c0();
   input += synapse0x15bf900();
   input += synapse0x15bf940();
   input += synapse0x15bf980();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15beee0() {
   double input = input0x15beee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15bf9c0() {
   double input = 0.726807;
   input += synapse0x15bfd00();
   input += synapse0x15bfd40();
   input += synapse0x15bfd80();
   input += synapse0x15bfdc0();
   input += synapse0x15bfe00();
   input += synapse0x15bfe40();
   input += synapse0x15bfe80();
   input += synapse0x15bfec0();
   input += synapse0x15bff00();
   input += synapse0x15bff40();
   input += synapse0x15bff80();
   input += synapse0x15bffc0();
   input += synapse0x15c0000();
   input += synapse0x15c0040();
   input += synapse0x15c0080();
   input += synapse0x15c00c0();
   input += synapse0x15bfb50();
   input += synapse0x15bfb90();
   input += synapse0x1378ad0();
   input += synapse0x1378b10();
   input += synapse0x15a8600();
   input += synapse0x15a8640();
   input += synapse0x15a8680();
   input += synapse0x15b94b0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15bf9c0() {
   double input = input0x15bf9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x1379250() {
   double input = -0.196703;
   input += synapse0x15bf610();
   input += synapse0x15b94f0();
   input += synapse0x15b9530();
   input += synapse0x15c0210();
   input += synapse0x15c0250();
   input += synapse0x15c0290();
   input += synapse0x15c02d0();
   input += synapse0x15c0310();
   input += synapse0x15c0350();
   input += synapse0x15c0390();
   input += synapse0x15c03d0();
   input += synapse0x15c0410();
   input += synapse0x15c0450();
   input += synapse0x15c0490();
   input += synapse0x15c04d0();
   input += synapse0x15c0510();
   input += synapse0x15bf460();
   input += synapse0x15bf4a0();
   input += synapse0x15c0660();
   input += synapse0x15c06a0();
   input += synapse0x15c06e0();
   input += synapse0x15c0720();
   input += synapse0x15c0760();
   input += synapse0x15c07a0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x1379250() {
   double input = input0x1379250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c07e0() {
   double input = -0.255645;
   input += synapse0x15c0b20();
   input += synapse0x15c0b60();
   input += synapse0x15c0ba0();
   input += synapse0x15c0be0();
   input += synapse0x15c0c20();
   input += synapse0x15c0c60();
   input += synapse0x15c0ca0();
   input += synapse0x15c0ce0();
   input += synapse0x15c0d20();
   input += synapse0x15c0d60();
   input += synapse0x15c0da0();
   input += synapse0x15c0de0();
   input += synapse0x15c0e20();
   input += synapse0x15c0e60();
   input += synapse0x15c0ea0();
   input += synapse0x15c0ee0();
   input += synapse0x15c0970();
   input += synapse0x15c09b0();
   input += synapse0x15c1030();
   input += synapse0x15c1070();
   input += synapse0x15c10b0();
   input += synapse0x15c10f0();
   input += synapse0x15c1130();
   input += synapse0x15c1170();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c07e0() {
   double input = input0x15c07e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c11b0() {
   double input = -0.142683;
   input += synapse0x15c14f0();
   input += synapse0x15c1530();
   input += synapse0x15c1570();
   input += synapse0x15c15b0();
   input += synapse0x15c15f0();
   input += synapse0x15c1630();
   input += synapse0x15c1670();
   input += synapse0x15c16b0();
   input += synapse0x15c16f0();
   input += synapse0x1378e40();
   input += synapse0x1378e80();
   input += synapse0x1378ec0();
   input += synapse0x1378f00();
   input += synapse0x1378f40();
   input += synapse0x1378f80();
   input += synapse0x1378fc0();
   input += synapse0x15c1340();
   input += synapse0x15c1380();
   input += synapse0x1379110();
   input += synapse0x1379150();
   input += synapse0x1379190();
   input += synapse0x13791d0();
   input += synapse0x1379210();
   input += synapse0x15c1f40();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c11b0() {
   double input = input0x15c11b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c1f80() {
   double input = -0.744721;
   input += synapse0x15c22c0();
   input += synapse0x15c2300();
   input += synapse0x15c2340();
   input += synapse0x15c2380();
   input += synapse0x15c23c0();
   input += synapse0x15c2400();
   input += synapse0x15c2440();
   input += synapse0x15c2480();
   input += synapse0x15c24c0();
   input += synapse0x15c2500();
   input += synapse0x15c2540();
   input += synapse0x15c2580();
   input += synapse0x15c25c0();
   input += synapse0x15c2600();
   input += synapse0x15c2640();
   input += synapse0x15c2680();
   input += synapse0x15c2110();
   input += synapse0x15c2150();
   input += synapse0x15c27d0();
   input += synapse0x15c2810();
   input += synapse0x15c2850();
   input += synapse0x15c2890();
   input += synapse0x15c28d0();
   input += synapse0x15c2910();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c1f80() {
   double input = input0x15c1f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c2950() {
   double input = 0.503258;
   input += synapse0x15c2c90();
   input += synapse0x15c2cd0();
   input += synapse0x15c2d10();
   input += synapse0x15c2d50();
   input += synapse0x15c2d90();
   input += synapse0x15c2dd0();
   input += synapse0x15c2e10();
   input += synapse0x15c2e50();
   input += synapse0x15c2e90();
   input += synapse0x15c2ed0();
   input += synapse0x15c2f10();
   input += synapse0x15c2f50();
   input += synapse0x15c2f90();
   input += synapse0x15c2fd0();
   input += synapse0x15c3010();
   input += synapse0x15c3050();
   input += synapse0x15c2ae0();
   input += synapse0x15c2b20();
   input += synapse0x15c31a0();
   input += synapse0x15c31e0();
   input += synapse0x15c3220();
   input += synapse0x15c3260();
   input += synapse0x15c32a0();
   input += synapse0x15c32e0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c2950() {
   double input = input0x15c2950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c3320() {
   double input = -0.76343;
   input += synapse0x15bcdc0();
   input += synapse0x15bce00();
   input += synapse0x15bce40();
   input += synapse0x15bce80();
   input += synapse0x15c3870();
   input += synapse0x15c38b0();
   input += synapse0x15c38f0();
   input += synapse0x15c3930();
   input += synapse0x15c3970();
   input += synapse0x15c39b0();
   input += synapse0x15c39f0();
   input += synapse0x15c3a30();
   input += synapse0x15c3a70();
   input += synapse0x15c3ab0();
   input += synapse0x15c3af0();
   input += synapse0x15c3b30();
   input += synapse0x15c34b0();
   input += synapse0x15c34f0();
   input += synapse0x15c3c80();
   input += synapse0x15c3cc0();
   input += synapse0x15c3d00();
   input += synapse0x15c3d40();
   input += synapse0x15c3d80();
   input += synapse0x15c3dc0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c3320() {
   double input = input0x15c3320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c3e00() {
   double input = -0.932268;
   input += synapse0x15c4140();
   input += synapse0x15c4180();
   input += synapse0x15c41c0();
   input += synapse0x15c4200();
   input += synapse0x15c4240();
   input += synapse0x15c4280();
   input += synapse0x15c42c0();
   input += synapse0x15c4300();
   input += synapse0x15c4340();
   input += synapse0x15c4380();
   input += synapse0x15c43c0();
   input += synapse0x15c4400();
   input += synapse0x15c4440();
   input += synapse0x15c4480();
   input += synapse0x15c44c0();
   input += synapse0x15c4500();
   input += synapse0x15c3f90();
   input += synapse0x15c3fd0();
   input += synapse0x15c4650();
   input += synapse0x15c4690();
   input += synapse0x15c46d0();
   input += synapse0x15c4710();
   input += synapse0x15c4750();
   input += synapse0x15c4790();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c3e00() {
   double input = input0x15c3e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c47d0() {
   double input = -1.01775;
   input += synapse0x15c4b10();
   input += synapse0x15c4b50();
   input += synapse0x15c4b90();
   input += synapse0x15c4bd0();
   input += synapse0x15c4c10();
   input += synapse0x15c4c50();
   input += synapse0x15c4c90();
   input += synapse0x15c4cd0();
   input += synapse0x15c4d10();
   input += synapse0x15c4d50();
   input += synapse0x15c4d90();
   input += synapse0x15c4dd0();
   input += synapse0x15c4e10();
   input += synapse0x15c4e50();
   input += synapse0x15c4e90();
   input += synapse0x15c4ed0();
   input += synapse0x15c4960();
   input += synapse0x15c49a0();
   input += synapse0x15c1730();
   input += synapse0x15c1770();
   input += synapse0x15c17b0();
   input += synapse0x15c17f0();
   input += synapse0x15c1830();
   input += synapse0x15c1870();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c47d0() {
   double input = input0x15c47d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c18b0() {
   double input = 0.64581;
   input += synapse0x15c1bf0();
   input += synapse0x15c1c30();
   input += synapse0x15c1c70();
   input += synapse0x15c1cb0();
   input += synapse0x15c1cf0();
   input += synapse0x15c1d30();
   input += synapse0x15c1d70();
   input += synapse0x15c1db0();
   input += synapse0x15c1df0();
   input += synapse0x15c1e30();
   input += synapse0x15c1e70();
   input += synapse0x15c1eb0();
   input += synapse0x15c1ef0();
   input += synapse0x15c6030();
   input += synapse0x15c6070();
   input += synapse0x15c60b0();
   input += synapse0x15c1a40();
   input += synapse0x15c1a80();
   input += synapse0x15c6200();
   input += synapse0x15c6240();
   input += synapse0x15c6280();
   input += synapse0x15c62c0();
   input += synapse0x15c6300();
   input += synapse0x15c6340();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c18b0() {
   double input = input0x15c18b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c6380() {
   double input = 0.36346;
   input += synapse0x15c66c0();
   input += synapse0x15c6700();
   input += synapse0x15c6740();
   input += synapse0x15c6780();
   input += synapse0x15c67c0();
   input += synapse0x15c6800();
   input += synapse0x15c6840();
   input += synapse0x15c6880();
   input += synapse0x15c68c0();
   input += synapse0x15c6900();
   input += synapse0x15c6940();
   input += synapse0x15c6980();
   input += synapse0x15c69c0();
   input += synapse0x15c6a00();
   input += synapse0x15c6a40();
   input += synapse0x15c6a80();
   input += synapse0x15c6510();
   input += synapse0x15c6550();
   input += synapse0x15c6bd0();
   input += synapse0x15c6c10();
   input += synapse0x15c6c50();
   input += synapse0x15c6c90();
   input += synapse0x15c6cd0();
   input += synapse0x15c6d10();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c6380() {
   double input = input0x15c6380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c6d50() {
   double input = -1.16346;
   input += synapse0x15c7090();
   input += synapse0x15c70d0();
   input += synapse0x15c7110();
   input += synapse0x15c7150();
   input += synapse0x15c7190();
   input += synapse0x15c71d0();
   input += synapse0x15c7210();
   input += synapse0x15c7250();
   input += synapse0x15c7290();
   input += synapse0x15c72d0();
   input += synapse0x15c7310();
   input += synapse0x15c7350();
   input += synapse0x15c7390();
   input += synapse0x15c73d0();
   input += synapse0x15c7410();
   input += synapse0x15c7450();
   input += synapse0x15c6ee0();
   input += synapse0x15c6f20();
   input += synapse0x15c75a0();
   input += synapse0x15c75e0();
   input += synapse0x15c7620();
   input += synapse0x15c7660();
   input += synapse0x15c76a0();
   input += synapse0x15c76e0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c6d50() {
   double input = input0x15c6d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c7720() {
   double input = -0.357896;
   input += synapse0x15c7a60();
   input += synapse0x15c7aa0();
   input += synapse0x15c7ae0();
   input += synapse0x15c7b20();
   input += synapse0x15c7b60();
   input += synapse0x15c7ba0();
   input += synapse0x15c7be0();
   input += synapse0x15c7c20();
   input += synapse0x15c7c60();
   input += synapse0x15c7ca0();
   input += synapse0x15c7ce0();
   input += synapse0x15c7d20();
   input += synapse0x15c7d60();
   input += synapse0x15c7da0();
   input += synapse0x15c7de0();
   input += synapse0x15c7e20();
   input += synapse0x15c78b0();
   input += synapse0x15c78f0();
   input += synapse0x15c7f70();
   input += synapse0x15c7fb0();
   input += synapse0x15c7ff0();
   input += synapse0x15c8030();
   input += synapse0x15c8070();
   input += synapse0x15c80b0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c7720() {
   double input = input0x15c7720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c80f0() {
   double input = 0.279483;
   input += synapse0x15c8430();
   input += synapse0x15b9790();
   input += synapse0x15b97d0();
   input += synapse0x15b9ad0();
   input += synapse0x15b9b10();
   input += synapse0x15b9e10();
   input += synapse0x15b9e50();
   input += synapse0x15ba150();
   input += synapse0x15ba190();
   input += synapse0x15ba490();
   input += synapse0x15ba4d0();
   input += synapse0x15ba7d0();
   input += synapse0x15ba810();
   input += synapse0x15bab10();
   input += synapse0x15bab50();
   input += synapse0x15bae50();
   input += synapse0x15bae90();
   input += synapse0x15bb190();
   input += synapse0x15bb1d0();
   input += synapse0x15bb4d0();
   input += synapse0x15bb510();
   input += synapse0x15bb810();
   input += synapse0x15bb850();
   input += synapse0x15bbb50();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c80f0() {
   double input = input0x15c80f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c9f00() {
   double input = 0.506495;
   input += synapse0x15bbb90();
   input += synapse0x15bc850();
   input += synapse0x15bc890();
   input += synapse0x15c8280();
   input += synapse0x15c82c0();
   input += synapse0x15bcb90();
   input += synapse0x15bcbd0();
   input += synapse0x136ab60();
   input += synapse0x136aba0();
   input += synapse0x15bd310();
   input += synapse0x15bd350();
   input += synapse0x15bd650();
   input += synapse0x15bd690();
   input += synapse0x15bd990();
   input += synapse0x15bd9d0();
   input += synapse0x15bdcd0();
   input += synapse0x15bdd10();
   input += synapse0x15be010();
   input += synapse0x15be050();
   input += synapse0x15be350();
   input += synapse0x15be390();
   input += synapse0x15bbe90();
   input += synapse0x15bbed0();
   input += synapse0x15ca1a0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c9f00() {
   double input = input0x15c9f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15ca1e0() {
   double input = -1.31878;
   input += synapse0x15ca520();
   input += synapse0x15ca560();
   input += synapse0x15ca5a0();
   input += synapse0x15ca5e0();
   input += synapse0x15ca620();
   input += synapse0x15ca660();
   input += synapse0x15ca6a0();
   input += synapse0x15ca6e0();
   input += synapse0x15ca720();
   input += synapse0x15ca760();
   input += synapse0x15ca7a0();
   input += synapse0x15ca7e0();
   input += synapse0x15ca820();
   input += synapse0x15ca860();
   input += synapse0x15ca8a0();
   input += synapse0x15ca8e0();
   input += synapse0x15ca370();
   input += synapse0x15ca3b0();
   input += synapse0x15caa30();
   input += synapse0x15caa70();
   input += synapse0x15caab0();
   input += synapse0x15caaf0();
   input += synapse0x15cab30();
   input += synapse0x15cab70();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15ca1e0() {
   double input = input0x15ca1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15cabb0() {
   double input = 0.641676;
   input += synapse0x15caef0();
   input += synapse0x15caf30();
   input += synapse0x15caf70();
   input += synapse0x15cafb0();
   input += synapse0x15caff0();
   input += synapse0x15cb030();
   input += synapse0x15cb070();
   input += synapse0x15cb0b0();
   input += synapse0x15cb0f0();
   input += synapse0x15cb130();
   input += synapse0x15cb170();
   input += synapse0x15cb1b0();
   input += synapse0x15cb1f0();
   input += synapse0x15cb230();
   input += synapse0x15cb270();
   input += synapse0x15cb2b0();
   input += synapse0x15cad40();
   input += synapse0x15cad80();
   input += synapse0x15cb400();
   input += synapse0x15cb440();
   input += synapse0x15cb480();
   input += synapse0x15cb4c0();
   input += synapse0x15cb500();
   input += synapse0x15cb540();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15cabb0() {
   double input = input0x15cabb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15cb580() {
   double input = 0.344988;
   input += synapse0x15cb8c0();
   input += synapse0x15cb900();
   input += synapse0x15cb940();
   input += synapse0x15cb980();
   input += synapse0x15cb9c0();
   input += synapse0x15cba00();
   input += synapse0x15cba40();
   input += synapse0x15cba80();
   input += synapse0x15cbac0();
   input += synapse0x15cbb00();
   input += synapse0x15cbb40();
   input += synapse0x15cbb80();
   input += synapse0x15cbbc0();
   input += synapse0x15cbc00();
   input += synapse0x15cbc40();
   input += synapse0x15cbc80();
   input += synapse0x15cb710();
   input += synapse0x15cb750();
   input += synapse0x15cbdd0();
   input += synapse0x15cbe10();
   input += synapse0x15cbe50();
   input += synapse0x15cbe90();
   input += synapse0x15cbed0();
   input += synapse0x15cbf10();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15cb580() {
   double input = input0x15cb580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15cbf50() {
   double input = 2.3779;
   input += synapse0x15cc290();
   input += synapse0x15cc2d0();
   input += synapse0x15cc310();
   input += synapse0x15cc350();
   input += synapse0x15cc390();
   input += synapse0x15cc3d0();
   input += synapse0x15cc410();
   input += synapse0x15cc450();
   input += synapse0x15cc490();
   input += synapse0x15cc4d0();
   input += synapse0x15cc510();
   input += synapse0x15cc550();
   input += synapse0x15cc590();
   input += synapse0x15cc5d0();
   input += synapse0x15cc610();
   input += synapse0x15cc650();
   input += synapse0x15cc0e0();
   input += synapse0x15cc120();
   input += synapse0x15cc7a0();
   input += synapse0x15cc7e0();
   input += synapse0x15cc820();
   input += synapse0x15cc860();
   input += synapse0x15cc8a0();
   input += synapse0x15cc8e0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15cbf50() {
   double input = input0x15cbf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15cc920() {
   double input = 0.900919;
   input += synapse0x15ccc60();
   input += synapse0x15ccca0();
   input += synapse0x15ccce0();
   input += synapse0x15ccd20();
   input += synapse0x15ccd60();
   input += synapse0x15ccda0();
   input += synapse0x15ccde0();
   input += synapse0x15cce20();
   input += synapse0x15cce60();
   input += synapse0x15c5020();
   input += synapse0x15c5060();
   input += synapse0x15c50a0();
   input += synapse0x15c50e0();
   input += synapse0x15c5120();
   input += synapse0x15c5160();
   input += synapse0x15c51a0();
   input += synapse0x15ccab0();
   input += synapse0x15ccaf0();
   input += synapse0x15c52f0();
   input += synapse0x15c5330();
   input += synapse0x15c5370();
   input += synapse0x15c53b0();
   input += synapse0x15c53f0();
   input += synapse0x15c5430();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15cc920() {
   double input = input0x15cc920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c5470() {
   double input = -1.83985;
   input += synapse0x15c57b0();
   input += synapse0x15c57f0();
   input += synapse0x15c5830();
   input += synapse0x15c5870();
   input += synapse0x15c58b0();
   input += synapse0x15c58f0();
   input += synapse0x15c5930();
   input += synapse0x15c5970();
   input += synapse0x15c59b0();
   input += synapse0x15c59f0();
   input += synapse0x15c5a30();
   input += synapse0x15c5a70();
   input += synapse0x15c5ab0();
   input += synapse0x15c5af0();
   input += synapse0x15c5b30();
   input += synapse0x15c5b70();
   input += synapse0x15c5600();
   input += synapse0x15c5640();
   input += synapse0x15c5cc0();
   input += synapse0x15c5d00();
   input += synapse0x15c5d40();
   input += synapse0x15c5d80();
   input += synapse0x15c5dc0();
   input += synapse0x15c5e00();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c5470() {
   double input = input0x15c5470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c5e40() {
   double input = 1.13961;
   input += synapse0x15c5fd0();
   input += synapse0x15cf060();
   input += synapse0x15cf0a0();
   input += synapse0x15cf0e0();
   input += synapse0x15cf120();
   input += synapse0x15cf160();
   input += synapse0x15cf1a0();
   input += synapse0x15cf1e0();
   input += synapse0x15cf220();
   input += synapse0x15cf260();
   input += synapse0x15cf2a0();
   input += synapse0x15cf2e0();
   input += synapse0x15cf320();
   input += synapse0x15cf360();
   input += synapse0x15cf3a0();
   input += synapse0x15cf3e0();
   input += synapse0x15ceeb0();
   input += synapse0x15ceef0();
   input += synapse0x15cf530();
   input += synapse0x15cf570();
   input += synapse0x15cf5b0();
   input += synapse0x15cf5f0();
   input += synapse0x15cf630();
   input += synapse0x15cf670();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c5e40() {
   double input = input0x15c5e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15cf6b0() {
   double input = 1.0962;
   input += synapse0x15cf9f0();
   input += synapse0x15cfa30();
   input += synapse0x15cfa70();
   input += synapse0x15cfab0();
   input += synapse0x15cfaf0();
   input += synapse0x15cfb30();
   input += synapse0x15cfb70();
   input += synapse0x15cfbb0();
   input += synapse0x15cfbf0();
   input += synapse0x15cfc30();
   input += synapse0x15cfc70();
   input += synapse0x15cfcb0();
   input += synapse0x15cfcf0();
   input += synapse0x15cfd30();
   input += synapse0x15cfd70();
   input += synapse0x15cfdb0();
   input += synapse0x15cf840();
   input += synapse0x15cf880();
   input += synapse0x15cff00();
   input += synapse0x15cff40();
   input += synapse0x15cff80();
   input += synapse0x15cffc0();
   input += synapse0x15d0000();
   input += synapse0x15d0040();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15cf6b0() {
   double input = input0x15cf6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d0080() {
   double input = -0.964639;
   input += synapse0x15d03c0();
   input += synapse0x15d0400();
   input += synapse0x15d0440();
   input += synapse0x15d0480();
   input += synapse0x15d04c0();
   input += synapse0x15d0500();
   input += synapse0x15d0540();
   input += synapse0x15d0580();
   input += synapse0x15d05c0();
   input += synapse0x15d0600();
   input += synapse0x15d0640();
   input += synapse0x15d0680();
   input += synapse0x15d06c0();
   input += synapse0x15d0700();
   input += synapse0x15d0740();
   input += synapse0x15d0780();
   input += synapse0x15d0210();
   input += synapse0x15d0250();
   input += synapse0x15d08d0();
   input += synapse0x15d0910();
   input += synapse0x15d0950();
   input += synapse0x15d0990();
   input += synapse0x15d09d0();
   input += synapse0x15d0a10();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d0080() {
   double input = input0x15d0080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d0a50() {
   double input = 1.47932;
   input += synapse0x15d0d90();
   input += synapse0x15d0dd0();
   input += synapse0x15d0e10();
   input += synapse0x15d0e50();
   input += synapse0x15d0e90();
   input += synapse0x15d0ed0();
   input += synapse0x15d0f10();
   input += synapse0x15d0f50();
   input += synapse0x15d0f90();
   input += synapse0x15d0fd0();
   input += synapse0x15d1010();
   input += synapse0x15d1050();
   input += synapse0x15d1090();
   input += synapse0x15d10d0();
   input += synapse0x15d1110();
   input += synapse0x15d1150();
   input += synapse0x15d0be0();
   input += synapse0x15d0c20();
   input += synapse0x15d12a0();
   input += synapse0x15d12e0();
   input += synapse0x15d1320();
   input += synapse0x15d1360();
   input += synapse0x15d13a0();
   input += synapse0x15d13e0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d0a50() {
   double input = input0x15d0a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d1420() {
   double input = 0.17273;
   input += synapse0x15d1760();
   input += synapse0x15d17a0();
   input += synapse0x15d17e0();
   input += synapse0x15d1820();
   input += synapse0x15d1860();
   input += synapse0x15d18a0();
   input += synapse0x15d18e0();
   input += synapse0x15d1920();
   input += synapse0x15d1960();
   input += synapse0x15d19a0();
   input += synapse0x15d19e0();
   input += synapse0x15d1a20();
   input += synapse0x15d1a60();
   input += synapse0x15d1aa0();
   input += synapse0x15d1ae0();
   input += synapse0x15d1b20();
   input += synapse0x15d15b0();
   input += synapse0x15d15f0();
   input += synapse0x15d1c70();
   input += synapse0x15d1cb0();
   input += synapse0x15d1cf0();
   input += synapse0x15d1d30();
   input += synapse0x15d1d70();
   input += synapse0x15d1db0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d1420() {
   double input = input0x15d1420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d1df0() {
   double input = 0.0951803;
   input += synapse0x15d2130();
   input += synapse0x15d2170();
   input += synapse0x15d21b0();
   input += synapse0x15d21f0();
   input += synapse0x15d2230();
   input += synapse0x15d2270();
   input += synapse0x15d22b0();
   input += synapse0x15d22f0();
   input += synapse0x15d2330();
   input += synapse0x15d2370();
   input += synapse0x15d23b0();
   input += synapse0x15d23f0();
   input += synapse0x15d2430();
   input += synapse0x15d2470();
   input += synapse0x15d24b0();
   input += synapse0x15d24f0();
   input += synapse0x15d1f80();
   input += synapse0x15d1fc0();
   input += synapse0x15d2640();
   input += synapse0x15d2680();
   input += synapse0x15d26c0();
   input += synapse0x15d2700();
   input += synapse0x15d2740();
   input += synapse0x15d2780();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d1df0() {
   double input = input0x15d1df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d27c0() {
   double input = -1.99489;
   input += synapse0x15d2b00();
   input += synapse0x15d2b40();
   input += synapse0x15d2b80();
   input += synapse0x15d2bc0();
   input += synapse0x15d2c00();
   input += synapse0x15d2c40();
   input += synapse0x15d2c80();
   input += synapse0x15d2cc0();
   input += synapse0x15d2d00();
   input += synapse0x15d2d40();
   input += synapse0x15d2d80();
   input += synapse0x15d2dc0();
   input += synapse0x15d2e00();
   input += synapse0x15d2e40();
   input += synapse0x15d2e80();
   input += synapse0x15d2ec0();
   input += synapse0x15d2950();
   input += synapse0x15d2990();
   input += synapse0x15d3010();
   input += synapse0x15d3050();
   input += synapse0x15d3090();
   input += synapse0x15d30d0();
   input += synapse0x15d3110();
   input += synapse0x15d3150();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d27c0() {
   double input = input0x15d27c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d3190() {
   double input = -1.53377;
   input += synapse0x15d34d0();
   input += synapse0x15d3510();
   input += synapse0x15d3550();
   input += synapse0x15d3590();
   input += synapse0x15d35d0();
   input += synapse0x15d3610();
   input += synapse0x15d3650();
   input += synapse0x15d3690();
   input += synapse0x15d36d0();
   input += synapse0x15d3710();
   input += synapse0x15d3750();
   input += synapse0x15d3790();
   input += synapse0x15d37d0();
   input += synapse0x15d3810();
   input += synapse0x15d3850();
   input += synapse0x15d3890();
   input += synapse0x15d3320();
   input += synapse0x15d3360();
   input += synapse0x15d39e0();
   input += synapse0x15d3a20();
   input += synapse0x15d3a60();
   input += synapse0x15d3aa0();
   input += synapse0x15d3ae0();
   input += synapse0x15d3b20();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d3190() {
   double input = input0x15d3190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d3b60() {
   double input = 1.43787;
   input += synapse0x15d3ea0();
   input += synapse0x15c8470();
   input += synapse0x15c84b0();
   input += synapse0x15c84f0();
   input += synapse0x15c8740();
   input += synapse0x15c8780();
   input += synapse0x15c87c0();
   input += synapse0x15c8a10();
   input += synapse0x15c8a50();
   input += synapse0x15c8ca0();
   input += synapse0x15c8ce0();
   input += synapse0x15c8d20();
   input += synapse0x15c8f70();
   input += synapse0x15c8fb0();
   input += synapse0x15c9200();
   input += synapse0x15c9240();
   input += synapse0x15d3cf0();
   input += synapse0x15d3d30();
   input += synapse0x15c9390();
   input += synapse0x15c98a0();
   input += synapse0x15c98e0();
   input += synapse0x15c9920();
   input += synapse0x15c9b70();
   input += synapse0x15c9bb0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d3b60() {
   double input = input0x15d3b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15c9bf0() {
   double input = 1.82706;
   input += synapse0x15c9460();
   input += synapse0x15c94a0();
   input += synapse0x15c94e0();
   input += synapse0x15c9520();
   input += synapse0x15c9ea0();
   input += synapse0x15d61f0();
   input += synapse0x15d6230();
   input += synapse0x15d6270();
   input += synapse0x15d62b0();
   input += synapse0x15d62f0();
   input += synapse0x15d6330();
   input += synapse0x15d6370();
   input += synapse0x15d63b0();
   input += synapse0x15d63f0();
   input += synapse0x15d6430();
   input += synapse0x15d6470();
   input += synapse0x15c9d80();
   input += synapse0x15c9dc0();
   input += synapse0x15d65c0();
   input += synapse0x15d6600();
   input += synapse0x15d6640();
   input += synapse0x15d6680();
   input += synapse0x15d66c0();
   input += synapse0x15d6700();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15c9bf0() {
   double input = input0x15c9bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d6740() {
   double input = 0.341971;
   input += synapse0x15d6a80();
   input += synapse0x15d6ac0();
   input += synapse0x15d6b00();
   input += synapse0x15d6b40();
   input += synapse0x15d6b80();
   input += synapse0x15d6bc0();
   input += synapse0x15d6c00();
   input += synapse0x15d6c40();
   input += synapse0x15d6c80();
   input += synapse0x15d6cc0();
   input += synapse0x15d6d00();
   input += synapse0x15d6d40();
   input += synapse0x15d6d80();
   input += synapse0x15d6dc0();
   input += synapse0x15d6e00();
   input += synapse0x15d6e40();
   input += synapse0x15d68d0();
   input += synapse0x15d6910();
   input += synapse0x15d6f90();
   input += synapse0x15d6fd0();
   input += synapse0x15d7010();
   input += synapse0x15d7050();
   input += synapse0x15d7090();
   input += synapse0x15d70d0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d6740() {
   double input = input0x15d6740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d7110() {
   double input = 0.675468;
   input += synapse0x15d7450();
   input += synapse0x15d7490();
   input += synapse0x15d74d0();
   input += synapse0x15d7510();
   input += synapse0x15d7550();
   input += synapse0x15d7590();
   input += synapse0x15d75d0();
   input += synapse0x15d7610();
   input += synapse0x15d7650();
   input += synapse0x15d7690();
   input += synapse0x15d76d0();
   input += synapse0x15d7710();
   input += synapse0x15d7750();
   input += synapse0x15d7790();
   input += synapse0x15d77d0();
   input += synapse0x15d7810();
   input += synapse0x15d72a0();
   input += synapse0x15d72e0();
   input += synapse0x15d7960();
   input += synapse0x15d79a0();
   input += synapse0x15d79e0();
   input += synapse0x15d7a20();
   input += synapse0x15d7a60();
   input += synapse0x15d7aa0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d7110() {
   double input = input0x15d7110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d7ae0() {
   double input = -1.26692;
   input += synapse0x15d7e20();
   input += synapse0x15d7e60();
   input += synapse0x15d7ea0();
   input += synapse0x15d7ee0();
   input += synapse0x15d7f20();
   input += synapse0x15d7f60();
   input += synapse0x15d7fa0();
   input += synapse0x15d7fe0();
   input += synapse0x15d8020();
   input += synapse0x15d8060();
   input += synapse0x15d80a0();
   input += synapse0x15d80e0();
   input += synapse0x15d8120();
   input += synapse0x15d8160();
   input += synapse0x15d81a0();
   input += synapse0x15d81e0();
   input += synapse0x15d7c70();
   input += synapse0x15d7cb0();
   input += synapse0x15d8330();
   input += synapse0x15d8370();
   input += synapse0x15d83b0();
   input += synapse0x15d83f0();
   input += synapse0x15d8430();
   input += synapse0x15d8470();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d7ae0() {
   double input = input0x15d7ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d84b0() {
   double input = -0.454861;
   input += synapse0x15d87f0();
   input += synapse0x15d8830();
   input += synapse0x15d8870();
   input += synapse0x15d88b0();
   input += synapse0x15d88f0();
   input += synapse0x15d8930();
   input += synapse0x15d8970();
   input += synapse0x15d89b0();
   input += synapse0x15d89f0();
   input += synapse0x15d8a30();
   input += synapse0x15d8a70();
   input += synapse0x15d8ab0();
   input += synapse0x15d8af0();
   input += synapse0x15d8b30();
   input += synapse0x15d8b70();
   input += synapse0x15d8bb0();
   input += synapse0x15d8640();
   input += synapse0x15d8680();
   input += synapse0x15d8d00();
   input += synapse0x15d8d40();
   input += synapse0x15d8d80();
   input += synapse0x15d8dc0();
   input += synapse0x15d8e00();
   input += synapse0x15d8e40();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d84b0() {
   double input = input0x15d84b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d8e80() {
   double input = 1.02319;
   input += synapse0x15d91c0();
   input += synapse0x15d9200();
   input += synapse0x15d9240();
   input += synapse0x15d9280();
   input += synapse0x15d92c0();
   input += synapse0x15d9300();
   input += synapse0x15d9340();
   input += synapse0x15d9380();
   input += synapse0x15d93c0();
   input += synapse0x15d9400();
   input += synapse0x15d9440();
   input += synapse0x15d9480();
   input += synapse0x15d94c0();
   input += synapse0x15d9500();
   input += synapse0x15d9540();
   input += synapse0x15d9580();
   input += synapse0x15d9010();
   input += synapse0x15d9050();
   input += synapse0x15d96d0();
   input += synapse0x15d9710();
   input += synapse0x15d9750();
   input += synapse0x15d9790();
   input += synapse0x15d97d0();
   input += synapse0x15d9810();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d8e80() {
   double input = input0x15d8e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15d9850() {
   double input = -0.380307;
   input += synapse0x15d9b90();
   input += synapse0x15d9bd0();
   input += synapse0x15d9c10();
   input += synapse0x15d9c50();
   input += synapse0x15d9c90();
   input += synapse0x15d9cd0();
   input += synapse0x15d9d10();
   input += synapse0x15d9d50();
   input += synapse0x15d9d90();
   input += synapse0x15d9dd0();
   input += synapse0x15d9e10();
   input += synapse0x15d9e50();
   input += synapse0x15d9e90();
   input += synapse0x15d9ed0();
   input += synapse0x15d9f10();
   input += synapse0x15d9f50();
   input += synapse0x15d99e0();
   input += synapse0x15d9a20();
   input += synapse0x15da0a0();
   input += synapse0x15da0e0();
   input += synapse0x15da120();
   input += synapse0x15da160();
   input += synapse0x15da1a0();
   input += synapse0x15da1e0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15d9850() {
   double input = input0x15d9850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15da220() {
   double input = -0.165698;
   input += synapse0x15da560();
   input += synapse0x15da5a0();
   input += synapse0x15da5e0();
   input += synapse0x15da620();
   input += synapse0x15da660();
   input += synapse0x15da6a0();
   input += synapse0x15da6e0();
   input += synapse0x15da720();
   input += synapse0x15da760();
   input += synapse0x15da7a0();
   input += synapse0x15da7e0();
   input += synapse0x15da820();
   input += synapse0x15da860();
   input += synapse0x15da8a0();
   input += synapse0x15da8e0();
   input += synapse0x15da920();
   input += synapse0x15da3b0();
   input += synapse0x15da3f0();
   input += synapse0x15daa70();
   input += synapse0x15daab0();
   input += synapse0x15daaf0();
   input += synapse0x15dab30();
   input += synapse0x15dab70();
   input += synapse0x15dabb0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15da220() {
   double input = input0x15da220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15dabf0() {
   double input = 0.512206;
   input += synapse0x15c3660();
   input += synapse0x15c36a0();
   input += synapse0x15c36e0();
   input += synapse0x15c3720();
   input += synapse0x15c3760();
   input += synapse0x15c37a0();
   input += synapse0x15c37e0();
   input += synapse0x15c3820();
   input += synapse0x15db340();
   input += synapse0x15db380();
   input += synapse0x15db3c0();
   input += synapse0x15db400();
   input += synapse0x15db440();
   input += synapse0x15db480();
   input += synapse0x15db4c0();
   input += synapse0x15db500();
   input += synapse0x15dad80();
   input += synapse0x15dadc0();
   input += synapse0x15db650();
   input += synapse0x15db690();
   input += synapse0x15db6d0();
   input += synapse0x15db710();
   input += synapse0x15db750();
   input += synapse0x15db790();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15dabf0() {
   double input = input0x15dabf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15db7d0() {
   double input = 1.09582;
   input += synapse0x15dbb10();
   input += synapse0x15dbb50();
   input += synapse0x15dbb90();
   input += synapse0x15dbbd0();
   input += synapse0x15dbc10();
   input += synapse0x15dbc50();
   input += synapse0x15dbc90();
   input += synapse0x15dbcd0();
   input += synapse0x15dbd10();
   input += synapse0x15dbd50();
   input += synapse0x15dbd90();
   input += synapse0x15dbdd0();
   input += synapse0x15dbe10();
   input += synapse0x15dbe50();
   input += synapse0x15dbe90();
   input += synapse0x15dbed0();
   input += synapse0x15db960();
   input += synapse0x15db9a0();
   input += synapse0x15dc020();
   input += synapse0x15dc060();
   input += synapse0x15dc0a0();
   input += synapse0x15dc0e0();
   input += synapse0x15dc120();
   input += synapse0x15dc160();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15db7d0() {
   double input = input0x15db7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15dc1a0() {
   double input = 1.44502;
   input += synapse0x15dc4e0();
   input += synapse0x15dc520();
   input += synapse0x15dc560();
   input += synapse0x15dc5a0();
   input += synapse0x15dc5e0();
   input += synapse0x15dc620();
   input += synapse0x15dc660();
   input += synapse0x15dc6a0();
   input += synapse0x15dc6e0();
   input += synapse0x15dc720();
   input += synapse0x15dc760();
   input += synapse0x15dc7a0();
   input += synapse0x15dc7e0();
   input += synapse0x15dc820();
   input += synapse0x15dc860();
   input += synapse0x15dc8a0();
   input += synapse0x15dc330();
   input += synapse0x15dc370();
   input += synapse0x15ccea0();
   input += synapse0x15ccee0();
   input += synapse0x15ccf20();
   input += synapse0x15ccf60();
   input += synapse0x15ccfa0();
   input += synapse0x15ccfe0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15dc1a0() {
   double input = input0x15dc1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15cd020() {
   double input = 2.36472;
   input += synapse0x15cd360();
   input += synapse0x15cd3a0();
   input += synapse0x15cd3e0();
   input += synapse0x15cd420();
   input += synapse0x15cd460();
   input += synapse0x15cd4a0();
   input += synapse0x15cd4e0();
   input += synapse0x15cd520();
   input += synapse0x15cd560();
   input += synapse0x15cd5a0();
   input += synapse0x15cd5e0();
   input += synapse0x15cd620();
   input += synapse0x15cd660();
   input += synapse0x15cd6a0();
   input += synapse0x15cd6e0();
   input += synapse0x15cd720();
   input += synapse0x15cd1b0();
   input += synapse0x15cd1f0();
   input += synapse0x15cd870();
   input += synapse0x15cd8b0();
   input += synapse0x15cd8f0();
   input += synapse0x15cd930();
   input += synapse0x15cd970();
   input += synapse0x15cd9b0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15cd020() {
   double input = input0x15cd020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15cd9f0() {
   double input = 0.762659;
   input += synapse0x15cdd30();
   input += synapse0x15cdd70();
   input += synapse0x15cddb0();
   input += synapse0x15cddf0();
   input += synapse0x15cde30();
   input += synapse0x15cde70();
   input += synapse0x15cdeb0();
   input += synapse0x15cdef0();
   input += synapse0x15cdf30();
   input += synapse0x15cdf70();
   input += synapse0x15cdfb0();
   input += synapse0x15cdff0();
   input += synapse0x15ce030();
   input += synapse0x15ce070();
   input += synapse0x15ce0b0();
   input += synapse0x15ce0f0();
   input += synapse0x15cdb80();
   input += synapse0x15cdbc0();
   input += synapse0x15ce240();
   input += synapse0x15ce280();
   input += synapse0x15ce2c0();
   input += synapse0x15ce300();
   input += synapse0x15ce340();
   input += synapse0x15ce380();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15cd9f0() {
   double input = input0x15cd9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15ce3c0() {
   double input = -0.669297;
   input += synapse0x15ce700();
   input += synapse0x15ce740();
   input += synapse0x15ce780();
   input += synapse0x15ce7c0();
   input += synapse0x15ce800();
   input += synapse0x15ce840();
   input += synapse0x15ce880();
   input += synapse0x15ce8c0();
   input += synapse0x15ce900();
   input += synapse0x15ce940();
   input += synapse0x15ce980();
   input += synapse0x15ce9c0();
   input += synapse0x15cea00();
   input += synapse0x15cea40();
   input += synapse0x15cea80();
   input += synapse0x15ceac0();
   input += synapse0x15ce550();
   input += synapse0x15ce590();
   input += synapse0x15cec10();
   input += synapse0x15cec50();
   input += synapse0x15cec90();
   input += synapse0x15cecd0();
   input += synapse0x15ced10();
   input += synapse0x15ced50();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15ce3c0() {
   double input = input0x15ce3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15e0a00() {
   double input = -1.26608;
   input += synapse0x15e0c20();
   input += synapse0x15e0c60();
   input += synapse0x15e0ca0();
   input += synapse0x15e0ce0();
   input += synapse0x15e0d20();
   input += synapse0x15e0d60();
   input += synapse0x15e0da0();
   input += synapse0x15e0de0();
   input += synapse0x15e0e20();
   input += synapse0x15e0e60();
   input += synapse0x15e0ea0();
   input += synapse0x15e0ee0();
   input += synapse0x15e0f20();
   input += synapse0x15e0f60();
   input += synapse0x15e0fa0();
   input += synapse0x15e0fe0();
   input += synapse0x15ced90();
   input += synapse0x15cedd0();
   input += synapse0x15e1130();
   input += synapse0x15e1170();
   input += synapse0x15e11b0();
   input += synapse0x15e11f0();
   input += synapse0x15e1230();
   input += synapse0x15e1270();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15e0a00() {
   double input = input0x15e0a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15e12b0() {
   double input = 2.4852;
   input += synapse0x15e15f0();
   input += synapse0x15e1630();
   input += synapse0x15e1670();
   input += synapse0x15e16b0();
   input += synapse0x15e16f0();
   input += synapse0x15e1730();
   input += synapse0x15e1770();
   input += synapse0x15e17b0();
   input += synapse0x15e17f0();
   input += synapse0x15e1830();
   input += synapse0x15e1870();
   input += synapse0x15e18b0();
   input += synapse0x15e18f0();
   input += synapse0x15e1930();
   input += synapse0x15e1970();
   input += synapse0x15e19b0();
   input += synapse0x15e1440();
   input += synapse0x15e1480();
   input += synapse0x15e1b00();
   input += synapse0x15e1b40();
   input += synapse0x15e1b80();
   input += synapse0x15e1bc0();
   input += synapse0x15e1c00();
   input += synapse0x15e1c40();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15e12b0() {
   double input = input0x15e12b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15e1c80() {
   double input = -1.2257;
   input += synapse0x15e1fc0();
   input += synapse0x15e2000();
   input += synapse0x15e2040();
   input += synapse0x15e2080();
   input += synapse0x15e20c0();
   input += synapse0x15e2100();
   input += synapse0x15e2140();
   input += synapse0x15e2180();
   input += synapse0x15e21c0();
   input += synapse0x15e2200();
   input += synapse0x15e2240();
   input += synapse0x15e2280();
   input += synapse0x15e22c0();
   input += synapse0x15e2300();
   input += synapse0x15e2340();
   input += synapse0x15e2380();
   input += synapse0x15e1e10();
   input += synapse0x15e1e50();
   input += synapse0x15e24d0();
   input += synapse0x15e2510();
   input += synapse0x15e2550();
   input += synapse0x15e2590();
   input += synapse0x15e25d0();
   input += synapse0x15e2610();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15e1c80() {
   double input = input0x15e1c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15e2650() {
   double input = 1.21101;
   input += synapse0x15e2990();
   input += synapse0x15e29d0();
   input += synapse0x15e2a10();
   input += synapse0x15e2a50();
   input += synapse0x15e2a90();
   input += synapse0x15e2ad0();
   input += synapse0x15e2b10();
   input += synapse0x15e2b50();
   input += synapse0x15e2b90();
   input += synapse0x15e2bd0();
   input += synapse0x15e2c10();
   input += synapse0x15e2c50();
   input += synapse0x15e2c90();
   input += synapse0x15e2cd0();
   input += synapse0x15e2d10();
   input += synapse0x15e2d50();
   input += synapse0x15e27e0();
   input += synapse0x15e2820();
   input += synapse0x15e2ea0();
   input += synapse0x15e2ee0();
   input += synapse0x15e2f20();
   input += synapse0x15e2f60();
   input += synapse0x15e2fa0();
   input += synapse0x15e2fe0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15e2650() {
   double input = input0x15e2650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15e9850() {
   double input = -0.964849;
   input += synapse0x15bf580();
   input += synapse0x15bf5c0();
   input += synapse0x15c0a90();
   input += synapse0x15c0ad0();
   input += synapse0x15c1460();
   input += synapse0x15c14a0();
   input += synapse0x15c2230();
   input += synapse0x15c2270();
   input += synapse0x15c2c00();
   input += synapse0x15c2c40();
   input += synapse0x15c35d0();
   input += synapse0x15c3610();
   input += synapse0x15c40b0();
   input += synapse0x15c40f0();
   input += synapse0x15c4a80();
   input += synapse0x15c4ac0();
   input += synapse0x15c1b60();
   input += synapse0x15c1ba0();
   input += synapse0x15c6630();
   input += synapse0x15c6670();
   input += synapse0x15c7000();
   input += synapse0x15c7040();
   input += synapse0x15c79d0();
   input += synapse0x15c7a10();
   input += synapse0x15c83a0();
   input += synapse0x15c83e0();
   input += synapse0x15bc510();
   input += synapse0x15bc550();
   input += synapse0x15ca490();
   input += synapse0x15ca4d0();
   input += synapse0x15cae60();
   input += synapse0x15caea0();
   input += synapse0x15cb830();
   input += synapse0x15cb870();
   input += synapse0x15cc200();
   input += synapse0x15cc240();
   input += synapse0x15ccbd0();
   input += synapse0x15ccc10();
   input += synapse0x15c5720();
   input += synapse0x15c5760();
   input += synapse0x15cefd0();
   input += synapse0x15cf010();
   input += synapse0x15cf960();
   input += synapse0x15cf9a0();
   input += synapse0x15d0330();
   input += synapse0x15d0370();
   input += synapse0x15d0d00();
   input += synapse0x15d0d40();
   input += synapse0x15d16d0();
   input += synapse0x15d1710();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15e9850() {
   double input = input0x15e9850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15e9bf0() {
   double input = -0.454083;
   input += synapse0x15d3e10();
   input += synapse0x15d3e50();
   input += synapse0x15c93d0();
   input += synapse0x15c9410();
   input += synapse0x15d69f0();
   input += synapse0x15d6a30();
   input += synapse0x15d73c0();
   input += synapse0x15d7400();
   input += synapse0x15d7d90();
   input += synapse0x15d7dd0();
   input += synapse0x15d8760();
   input += synapse0x15d87a0();
   input += synapse0x15d9130();
   input += synapse0x15d9170();
   input += synapse0x15d9b00();
   input += synapse0x15d9b40();
   input += synapse0x15da4d0();
   input += synapse0x15da510();
   input += synapse0x15daea0();
   input += synapse0x15daee0();
   input += synapse0x15dba80();
   input += synapse0x15dbac0();
   input += synapse0x15dc450();
   input += synapse0x15dc490();
   input += synapse0x15cd2d0();
   input += synapse0x15cd310();
   input += synapse0x15cdca0();
   input += synapse0x15cdce0();
   input += synapse0x15ce670();
   input += synapse0x15ce6b0();
   input += synapse0x15e0b90();
   input += synapse0x15e0bd0();
   input += synapse0x15e1560();
   input += synapse0x15e15a0();
   input += synapse0x15e1f30();
   input += synapse0x15e1f70();
   input += synapse0x15e2900();
   input += synapse0x15e2940();
   input += synapse0x15be7f0();
   input += synapse0x15be830();
   input += synapse0x15d20a0();
   input += synapse0x15d20e0();
   input += synapse0x15e3020();
   input += synapse0x15e3060();
   input += synapse0x15e30a0();
   input += synapse0x15e30e0();
   input += synapse0x15e9f90();
   input += synapse0x15e9fd0();
   input += synapse0x15ea010();
   input += synapse0x15ea050();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15e9bf0() {
   double input = input0x15e9bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15ea090() {
   double input = 0.395352;
   input += synapse0x15ea3d0();
   input += synapse0x15ea410();
   input += synapse0x15ea450();
   input += synapse0x15ea490();
   input += synapse0x15ea4d0();
   input += synapse0x15ea510();
   input += synapse0x15ea550();
   input += synapse0x15ea590();
   input += synapse0x15ea5d0();
   input += synapse0x15ea610();
   input += synapse0x15ea650();
   input += synapse0x15ea690();
   input += synapse0x15ea6d0();
   input += synapse0x15ea710();
   input += synapse0x15ea750();
   input += synapse0x15ea790();
   input += synapse0x15ea220();
   input += synapse0x15ea260();
   input += synapse0x15ea8e0();
   input += synapse0x15ea920();
   input += synapse0x15ea960();
   input += synapse0x15ea9a0();
   input += synapse0x15ea9e0();
   input += synapse0x15eaa20();
   input += synapse0x15eaa60();
   input += synapse0x15eaaa0();
   input += synapse0x15eaae0();
   input += synapse0x15eab20();
   input += synapse0x15eab60();
   input += synapse0x15eaba0();
   input += synapse0x15eabe0();
   input += synapse0x15eac20();
   input += synapse0x15ea7d0();
   input += synapse0x15ea810();
   input += synapse0x15ea850();
   input += synapse0x15ea890();
   input += synapse0x15eae70();
   input += synapse0x15eaeb0();
   input += synapse0x15eaef0();
   input += synapse0x15eaf30();
   input += synapse0x15eaf70();
   input += synapse0x15eafb0();
   input += synapse0x15eaff0();
   input += synapse0x15eb030();
   input += synapse0x15eb070();
   input += synapse0x15eb0b0();
   input += synapse0x15eb0f0();
   input += synapse0x15eb130();
   input += synapse0x15eb170();
   input += synapse0x15eb1b0();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15ea090() {
   double input = input0x15ea090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15eb1f0() {
   double input = -0.0026527;
   input += synapse0x15eb530();
   input += synapse0x15eb570();
   input += synapse0x15eb5b0();
   input += synapse0x15eb5f0();
   input += synapse0x15eb630();
   input += synapse0x15eb670();
   input += synapse0x15eb6b0();
   input += synapse0x15eb6f0();
   input += synapse0x15eb730();
   input += synapse0x15eb770();
   input += synapse0x15eb7b0();
   input += synapse0x15eb7f0();
   input += synapse0x15eb830();
   input += synapse0x15eb870();
   input += synapse0x15eb8b0();
   input += synapse0x15eb8f0();
   input += synapse0x15eb380();
   input += synapse0x15eb3c0();
   input += synapse0x15eba40();
   input += synapse0x15eba80();
   input += synapse0x15ebac0();
   input += synapse0x15ebb00();
   input += synapse0x15ebb40();
   input += synapse0x15ebb80();
   input += synapse0x15ebbc0();
   input += synapse0x15ebc00();
   input += synapse0x15ebc40();
   input += synapse0x15ebc80();
   input += synapse0x15ebcc0();
   input += synapse0x15ebd00();
   input += synapse0x15ebd40();
   input += synapse0x15ebd80();
   input += synapse0x15eb930();
   input += synapse0x15eb970();
   input += synapse0x15eb9b0();
   input += synapse0x15eb9f0();
   input += synapse0x15ebfd0();
   input += synapse0x15ec010();
   input += synapse0x15ec050();
   input += synapse0x15ec090();
   input += synapse0x15ec0d0();
   input += synapse0x15ec110();
   input += synapse0x15ec150();
   input += synapse0x15ec190();
   input += synapse0x15ec1d0();
   input += synapse0x15ec210();
   input += synapse0x15ec250();
   input += synapse0x15ec290();
   input += synapse0x15ec2d0();
   input += synapse0x15ec310();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15eb1f0() {
   double input = input0x15eb1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15ec350() {
   double input = -0.242462;
   input += synapse0x15ec690();
   input += synapse0x15ec6d0();
   input += synapse0x15ec710();
   input += synapse0x15ec750();
   input += synapse0x15ec790();
   input += synapse0x15ec7d0();
   input += synapse0x15ec810();
   input += synapse0x15ec850();
   input += synapse0x15ec890();
   input += synapse0x15ec8d0();
   input += synapse0x15ec910();
   input += synapse0x15ec950();
   input += synapse0x15ec990();
   input += synapse0x15ec9d0();
   input += synapse0x15eca10();
   input += synapse0x15eca50();
   input += synapse0x15ec4e0();
   input += synapse0x15ec520();
   input += synapse0x15ecba0();
   input += synapse0x15ecbe0();
   input += synapse0x15ecc20();
   input += synapse0x15ecc60();
   input += synapse0x15ecca0();
   input += synapse0x15ecce0();
   input += synapse0x15ecd20();
   input += synapse0x15ecd60();
   input += synapse0x15ecda0();
   input += synapse0x15ecde0();
   input += synapse0x15ece20();
   input += synapse0x15ece60();
   input += synapse0x15ecea0();
   input += synapse0x15ecee0();
   input += synapse0x15eca90();
   input += synapse0x15ecad0();
   input += synapse0x15ecb10();
   input += synapse0x15ecb50();
   input += synapse0x15ed130();
   input += synapse0x15ed170();
   input += synapse0x15ed1b0();
   input += synapse0x15ed1f0();
   input += synapse0x15ed230();
   input += synapse0x15ed270();
   input += synapse0x15ed2b0();
   input += synapse0x15ed2f0();
   input += synapse0x15ed330();
   input += synapse0x15ed370();
   input += synapse0x15ed3b0();
   input += synapse0x15ed3f0();
   input += synapse0x15ed430();
   input += synapse0x15ed470();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15ec350() {
   double input = input0x15ec350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuR::input0x15ed4b0() {
   double input = 2.39279;
   input += synapse0x15be590();
   input += synapse0x15ed6d0();
   input += synapse0x15ed710();
   input += synapse0x15ed750();
   input += synapse0x15ed790();
   return input;
}

double NNfunction_sb_cLuR::neuron0x15ed4b0() {
   double input = input0x15ed4b0();
   return (input * 1)+0;
}

double NNfunction_sb_cLuR::synapse0x13793e0() {
   return (neuron0x15b9570()*-0.34384);
}

double NNfunction_sb_cLuR::synapse0x15b9430() {
   return (neuron0x15b98b0()*0.0989332);
}

double NNfunction_sb_cLuR::synapse0x15b9470() {
   return (neuron0x15b9bf0()*-0.527778);
}

double NNfunction_sb_cLuR::synapse0x15be880() {
   return (neuron0x15b9f30()*0.717219);
}

double NNfunction_sb_cLuR::synapse0x15be8c0() {
   return (neuron0x15ba270()*-0.262567);
}

double NNfunction_sb_cLuR::synapse0x15be900() {
   return (neuron0x15ba5b0()*-0.107148);
}

double NNfunction_sb_cLuR::synapse0x15be940() {
   return (neuron0x15ba8f0()*0.434551);
}

double NNfunction_sb_cLuR::synapse0x15be980() {
   return (neuron0x15bac30()*-0.0242531);
}

double NNfunction_sb_cLuR::synapse0x15be9c0() {
   return (neuron0x15baf70()*0.27261);
}

double NNfunction_sb_cLuR::synapse0x15bea00() {
   return (neuron0x15bb2b0()*-0.373864);
}

double NNfunction_sb_cLuR::synapse0x15bea40() {
   return (neuron0x15bb5f0()*-0.573891);
}

double NNfunction_sb_cLuR::synapse0x15bea80() {
   return (neuron0x15bb930()*0.242217);
}

double NNfunction_sb_cLuR::synapse0x15beac0() {
   return (neuron0x15bbc70()*-0.686949);
}

double NNfunction_sb_cLuR::synapse0x15beb00() {
   return (neuron0x15bbfb0()*-0.239686);
}

double NNfunction_sb_cLuR::synapse0x15beb40() {
   return (neuron0x15bc2f0()*-0.67991);
}

double NNfunction_sb_cLuR::synapse0x15beb80() {
   return (neuron0x15bc630()*0.165139);
}

double NNfunction_sb_cLuR::synapse0x15b93a0() {
   return (neuron0x15bc970()*-0.10244);
}

double NNfunction_sb_cLuR::synapse0x15b93e0() {
   return (neuron0x15bced0()*1.12551);
}

double NNfunction_sb_cLuR::synapse0x136ac80() {
   return (neuron0x15bd0f0()*-0.580221);
}

double NNfunction_sb_cLuR::synapse0x136acc0() {
   return (neuron0x15bd430()*-0.0199255);
}

double NNfunction_sb_cLuR::synapse0x15bede0() {
   return (neuron0x15bd770()*0.0367681);
}

double NNfunction_sb_cLuR::synapse0x15bee20() {
   return (neuron0x15bdab0()*-0.113054);
}

double NNfunction_sb_cLuR::synapse0x15bee60() {
   return (neuron0x15bddf0()*0.0734879);
}

double NNfunction_sb_cLuR::synapse0x15beea0() {
   return (neuron0x15be130()*-0.0664243);
}

double NNfunction_sb_cLuR::synapse0x15bf220() {
   return (neuron0x15b9570()*0.0284777);
}

double NNfunction_sb_cLuR::synapse0x15bf260() {
   return (neuron0x15b98b0()*0.172928);
}

double NNfunction_sb_cLuR::synapse0x15bf2a0() {
   return (neuron0x15b9bf0()*0.125815);
}

double NNfunction_sb_cLuR::synapse0x15bf2e0() {
   return (neuron0x15b9f30()*0.562255);
}

double NNfunction_sb_cLuR::synapse0x15bf320() {
   return (neuron0x15ba270()*-0.383627);
}

double NNfunction_sb_cLuR::synapse0x15bf360() {
   return (neuron0x15ba5b0()*0.15831);
}

double NNfunction_sb_cLuR::synapse0x15bf3a0() {
   return (neuron0x15ba8f0()*-0.00491753);
}

double NNfunction_sb_cLuR::synapse0x15bf3e0() {
   return (neuron0x15bac30()*-0.122973);
}

double NNfunction_sb_cLuR::synapse0x15bf420() {
   return (neuron0x15baf70()*0.163146);
}

double NNfunction_sb_cLuR::synapse0x15becd0() {
   return (neuron0x15bb2b0()*-0.0980548);
}

double NNfunction_sb_cLuR::synapse0x15bed10() {
   return (neuron0x15bb5f0()*-0.0426939);
}

double NNfunction_sb_cLuR::synapse0x15bed50() {
   return (neuron0x15bb930()*0.0185566);
}

double NNfunction_sb_cLuR::synapse0x15bed90() {
   return (neuron0x15bbc70()*-0.515244);
}

double NNfunction_sb_cLuR::synapse0x15bf670() {
   return (neuron0x15bbfb0()*0.119158);
}

double NNfunction_sb_cLuR::synapse0x15bf6b0() {
   return (neuron0x15bc2f0()*0.677683);
}

double NNfunction_sb_cLuR::synapse0x15bf6f0() {
   return (neuron0x15bc630()*0.201273);
}

double NNfunction_sb_cLuR::synapse0x15bf070() {
   return (neuron0x15bc970()*-0.0810838);
}

double NNfunction_sb_cLuR::synapse0x15bf0b0() {
   return (neuron0x15bced0()*-0.830456);
}

double NNfunction_sb_cLuR::synapse0x15bf840() {
   return (neuron0x15bd0f0()*0.213194);
}

double NNfunction_sb_cLuR::synapse0x15bf880() {
   return (neuron0x15bd430()*0.0677253);
}

double NNfunction_sb_cLuR::synapse0x15bf8c0() {
   return (neuron0x15bd770()*-0.0989107);
}

double NNfunction_sb_cLuR::synapse0x15bf900() {
   return (neuron0x15bdab0()*0.108687);
}

double NNfunction_sb_cLuR::synapse0x15bf940() {
   return (neuron0x15bddf0()*-0.0542356);
}

double NNfunction_sb_cLuR::synapse0x15bf980() {
   return (neuron0x15be130()*0.0129503);
}

double NNfunction_sb_cLuR::synapse0x15bfd00() {
   return (neuron0x15b9570()*-0.00136052);
}

double NNfunction_sb_cLuR::synapse0x15bfd40() {
   return (neuron0x15b98b0()*-0.245244);
}

double NNfunction_sb_cLuR::synapse0x15bfd80() {
   return (neuron0x15b9bf0()*-0.0889324);
}

double NNfunction_sb_cLuR::synapse0x15bfdc0() {
   return (neuron0x15b9f30()*-0.255021);
}

double NNfunction_sb_cLuR::synapse0x15bfe00() {
   return (neuron0x15ba270()*0.0256403);
}

double NNfunction_sb_cLuR::synapse0x15bfe40() {
   return (neuron0x15ba5b0()*-0.0130249);
}

double NNfunction_sb_cLuR::synapse0x15bfe80() {
   return (neuron0x15ba8f0()*-0.0163073);
}

double NNfunction_sb_cLuR::synapse0x15bfec0() {
   return (neuron0x15bac30()*0.0480662);
}

double NNfunction_sb_cLuR::synapse0x15bff00() {
   return (neuron0x15baf70()*0.0177274);
}

double NNfunction_sb_cLuR::synapse0x15bff40() {
   return (neuron0x15bb2b0()*0.258582);
}

double NNfunction_sb_cLuR::synapse0x15bff80() {
   return (neuron0x15bb5f0()*0.0168835);
}

double NNfunction_sb_cLuR::synapse0x15bffc0() {
   return (neuron0x15bb930()*0.0927075);
}

double NNfunction_sb_cLuR::synapse0x15c0000() {
   return (neuron0x15bbc70()*0.462657);
}

double NNfunction_sb_cLuR::synapse0x15c0040() {
   return (neuron0x15bbfb0()*0.061408);
}

double NNfunction_sb_cLuR::synapse0x15c0080() {
   return (neuron0x15bc2f0()*-0.243876);
}

double NNfunction_sb_cLuR::synapse0x15c00c0() {
   return (neuron0x15bc630()*0.024269);
}

double NNfunction_sb_cLuR::synapse0x15bfb50() {
   return (neuron0x15bc970()*0.0146249);
}

double NNfunction_sb_cLuR::synapse0x15bfb90() {
   return (neuron0x15bced0()*0.0585388);
}

double NNfunction_sb_cLuR::synapse0x1378ad0() {
   return (neuron0x15bd0f0()*0.0503424);
}

double NNfunction_sb_cLuR::synapse0x1378b10() {
   return (neuron0x15bd430()*0.0503148);
}

double NNfunction_sb_cLuR::synapse0x15a8600() {
   return (neuron0x15bd770()*0.0120248);
}

double NNfunction_sb_cLuR::synapse0x15a8640() {
   return (neuron0x15bdab0()*0.020283);
}

double NNfunction_sb_cLuR::synapse0x15a8680() {
   return (neuron0x15bddf0()*0.022948);
}

double NNfunction_sb_cLuR::synapse0x15b94b0() {
   return (neuron0x15be130()*0.0121938);
}

double NNfunction_sb_cLuR::synapse0x15bf610() {
   return (neuron0x15b9570()*0.261491);
}

double NNfunction_sb_cLuR::synapse0x15b94f0() {
   return (neuron0x15b98b0()*0.463705);
}

double NNfunction_sb_cLuR::synapse0x15b9530() {
   return (neuron0x15b9bf0()*0.246079);
}

double NNfunction_sb_cLuR::synapse0x15c0210() {
   return (neuron0x15b9f30()*0.188373);
}

double NNfunction_sb_cLuR::synapse0x15c0250() {
   return (neuron0x15ba270()*0.263994);
}

double NNfunction_sb_cLuR::synapse0x15c0290() {
   return (neuron0x15ba5b0()*0.0906909);
}

double NNfunction_sb_cLuR::synapse0x15c02d0() {
   return (neuron0x15ba8f0()*0.199007);
}

double NNfunction_sb_cLuR::synapse0x15c0310() {
   return (neuron0x15bac30()*-0.0517442);
}

double NNfunction_sb_cLuR::synapse0x15c0350() {
   return (neuron0x15baf70()*0.470788);
}

double NNfunction_sb_cLuR::synapse0x15c0390() {
   return (neuron0x15bb2b0()*0.000705203);
}

double NNfunction_sb_cLuR::synapse0x15c03d0() {
   return (neuron0x15bb5f0()*-0.290015);
}

double NNfunction_sb_cLuR::synapse0x15c0410() {
   return (neuron0x15bb930()*0.959961);
}

double NNfunction_sb_cLuR::synapse0x15c0450() {
   return (neuron0x15bbc70()*-0.230024);
}

double NNfunction_sb_cLuR::synapse0x15c0490() {
   return (neuron0x15bbfb0()*-0.718419);
}

double NNfunction_sb_cLuR::synapse0x15c04d0() {
   return (neuron0x15bc2f0()*-0.118344);
}

double NNfunction_sb_cLuR::synapse0x15c0510() {
   return (neuron0x15bc630()*-0.36114);
}

double NNfunction_sb_cLuR::synapse0x15bf460() {
   return (neuron0x15bc970()*-0.256585);
}

double NNfunction_sb_cLuR::synapse0x15bf4a0() {
   return (neuron0x15bced0()*-0.325475);
}

double NNfunction_sb_cLuR::synapse0x15c0660() {
   return (neuron0x15bd0f0()*0.259678);
}

double NNfunction_sb_cLuR::synapse0x15c06a0() {
   return (neuron0x15bd430()*-0.263917);
}

double NNfunction_sb_cLuR::synapse0x15c06e0() {
   return (neuron0x15bd770()*0.695332);
}

double NNfunction_sb_cLuR::synapse0x15c0720() {
   return (neuron0x15bdab0()*0.413848);
}

double NNfunction_sb_cLuR::synapse0x15c0760() {
   return (neuron0x15bddf0()*-0.16117);
}

double NNfunction_sb_cLuR::synapse0x15c07a0() {
   return (neuron0x15be130()*0.0997875);
}

double NNfunction_sb_cLuR::synapse0x15c0b20() {
   return (neuron0x15b9570()*0.055839);
}

double NNfunction_sb_cLuR::synapse0x15c0b60() {
   return (neuron0x15b98b0()*-0.110329);
}

double NNfunction_sb_cLuR::synapse0x15c0ba0() {
   return (neuron0x15b9bf0()*0.0146331);
}

double NNfunction_sb_cLuR::synapse0x15c0be0() {
   return (neuron0x15b9f30()*0.536876);
}

double NNfunction_sb_cLuR::synapse0x15c0c20() {
   return (neuron0x15ba270()*0.0469134);
}

double NNfunction_sb_cLuR::synapse0x15c0c60() {
   return (neuron0x15ba5b0()*0.0799283);
}

double NNfunction_sb_cLuR::synapse0x15c0ca0() {
   return (neuron0x15ba8f0()*0.00559637);
}

double NNfunction_sb_cLuR::synapse0x15c0ce0() {
   return (neuron0x15bac30()*0.127201);
}

double NNfunction_sb_cLuR::synapse0x15c0d20() {
   return (neuron0x15baf70()*-0.124528);
}

double NNfunction_sb_cLuR::synapse0x15c0d60() {
   return (neuron0x15bb2b0()*0.0289433);
}

double NNfunction_sb_cLuR::synapse0x15c0da0() {
   return (neuron0x15bb5f0()*0.0309306);
}

double NNfunction_sb_cLuR::synapse0x15c0de0() {
   return (neuron0x15bb930()*0.0434201);
}

double NNfunction_sb_cLuR::synapse0x15c0e20() {
   return (neuron0x15bbc70()*-0.758322);
}

double NNfunction_sb_cLuR::synapse0x15c0e60() {
   return (neuron0x15bbfb0()*0.0274583);
}

double NNfunction_sb_cLuR::synapse0x15c0ea0() {
   return (neuron0x15bc2f0()*0.183927);
}

double NNfunction_sb_cLuR::synapse0x15c0ee0() {
   return (neuron0x15bc630()*0.0170841);
}

double NNfunction_sb_cLuR::synapse0x15c0970() {
   return (neuron0x15bc970()*-0.0185251);
}

double NNfunction_sb_cLuR::synapse0x15c09b0() {
   return (neuron0x15bced0()*0.110675);
}

double NNfunction_sb_cLuR::synapse0x15c1030() {
   return (neuron0x15bd0f0()*-0.0706013);
}

double NNfunction_sb_cLuR::synapse0x15c1070() {
   return (neuron0x15bd430()*0.145769);
}

double NNfunction_sb_cLuR::synapse0x15c10b0() {
   return (neuron0x15bd770()*-0.0172178);
}

double NNfunction_sb_cLuR::synapse0x15c10f0() {
   return (neuron0x15bdab0()*-0.0162338);
}

double NNfunction_sb_cLuR::synapse0x15c1130() {
   return (neuron0x15bddf0()*0.0306816);
}

double NNfunction_sb_cLuR::synapse0x15c1170() {
   return (neuron0x15be130()*-0.0512741);
}

double NNfunction_sb_cLuR::synapse0x15c14f0() {
   return (neuron0x15b9570()*0.0385396);
}

double NNfunction_sb_cLuR::synapse0x15c1530() {
   return (neuron0x15b98b0()*-0.0534726);
}

double NNfunction_sb_cLuR::synapse0x15c1570() {
   return (neuron0x15b9bf0()*0.104448);
}

double NNfunction_sb_cLuR::synapse0x15c15b0() {
   return (neuron0x15b9f30()*0.298148);
}

double NNfunction_sb_cLuR::synapse0x15c15f0() {
   return (neuron0x15ba270()*0.0997469);
}

double NNfunction_sb_cLuR::synapse0x15c1630() {
   return (neuron0x15ba5b0()*-0.472272);
}

double NNfunction_sb_cLuR::synapse0x15c1670() {
   return (neuron0x15ba8f0()*-0.731462);
}

double NNfunction_sb_cLuR::synapse0x15c16b0() {
   return (neuron0x15bac30()*0.20502);
}

double NNfunction_sb_cLuR::synapse0x15c16f0() {
   return (neuron0x15baf70()*0.00325592);
}

double NNfunction_sb_cLuR::synapse0x1378e40() {
   return (neuron0x15bb2b0()*-0.0768007);
}

double NNfunction_sb_cLuR::synapse0x1378e80() {
   return (neuron0x15bb5f0()*0.361618);
}

double NNfunction_sb_cLuR::synapse0x1378ec0() {
   return (neuron0x15bb930()*0.140289);
}

double NNfunction_sb_cLuR::synapse0x1378f00() {
   return (neuron0x15bbc70()*0.544972);
}

double NNfunction_sb_cLuR::synapse0x1378f40() {
   return (neuron0x15bbfb0()*0.0770084);
}

double NNfunction_sb_cLuR::synapse0x1378f80() {
   return (neuron0x15bc2f0()*0.756098);
}

double NNfunction_sb_cLuR::synapse0x1378fc0() {
   return (neuron0x15bc630()*-0.137698);
}

double NNfunction_sb_cLuR::synapse0x15c1340() {
   return (neuron0x15bc970()*0.177552);
}

double NNfunction_sb_cLuR::synapse0x15c1380() {
   return (neuron0x15bced0()*-0.128561);
}

double NNfunction_sb_cLuR::synapse0x1379110() {
   return (neuron0x15bd0f0()*0.0665987);
}

double NNfunction_sb_cLuR::synapse0x1379150() {
   return (neuron0x15bd430()*-0.0456969);
}

double NNfunction_sb_cLuR::synapse0x1379190() {
   return (neuron0x15bd770()*0.0859511);
}

double NNfunction_sb_cLuR::synapse0x13791d0() {
   return (neuron0x15bdab0()*0.329877);
}

double NNfunction_sb_cLuR::synapse0x1379210() {
   return (neuron0x15bddf0()*-0.0429147);
}

double NNfunction_sb_cLuR::synapse0x15c1f40() {
   return (neuron0x15be130()*-0.103818);
}

double NNfunction_sb_cLuR::synapse0x15c22c0() {
   return (neuron0x15b9570()*-0.0527071);
}

double NNfunction_sb_cLuR::synapse0x15c2300() {
   return (neuron0x15b98b0()*0.0161618);
}

double NNfunction_sb_cLuR::synapse0x15c2340() {
   return (neuron0x15b9bf0()*1.45044);
}

double NNfunction_sb_cLuR::synapse0x15c2380() {
   return (neuron0x15b9f30()*0.0584067);
}

double NNfunction_sb_cLuR::synapse0x15c23c0() {
   return (neuron0x15ba270()*-0.064757);
}

double NNfunction_sb_cLuR::synapse0x15c2400() {
   return (neuron0x15ba5b0()*0.00124308);
}

double NNfunction_sb_cLuR::synapse0x15c2440() {
   return (neuron0x15ba8f0()*-0.0251516);
}

double NNfunction_sb_cLuR::synapse0x15c2480() {
   return (neuron0x15bac30()*-0.0209057);
}

double NNfunction_sb_cLuR::synapse0x15c24c0() {
   return (neuron0x15baf70()*-0.00893342);
}

double NNfunction_sb_cLuR::synapse0x15c2500() {
   return (neuron0x15bb2b0()*-0.0306045);
}

double NNfunction_sb_cLuR::synapse0x15c2540() {
   return (neuron0x15bb5f0()*0.0493381);
}

double NNfunction_sb_cLuR::synapse0x15c2580() {
   return (neuron0x15bb930()*-0.0178264);
}

double NNfunction_sb_cLuR::synapse0x15c25c0() {
   return (neuron0x15bbc70()*-1.08799);
}

double NNfunction_sb_cLuR::synapse0x15c2600() {
   return (neuron0x15bbfb0()*-0.0142198);
}

double NNfunction_sb_cLuR::synapse0x15c2640() {
   return (neuron0x15bc2f0()*0.177201);
}

double NNfunction_sb_cLuR::synapse0x15c2680() {
   return (neuron0x15bc630()*0.0740579);
}

double NNfunction_sb_cLuR::synapse0x15c2110() {
   return (neuron0x15bc970()*-0.0206101);
}

double NNfunction_sb_cLuR::synapse0x15c2150() {
   return (neuron0x15bced0()*0.0331554);
}

double NNfunction_sb_cLuR::synapse0x15c27d0() {
   return (neuron0x15bd0f0()*-0.023723);
}

double NNfunction_sb_cLuR::synapse0x15c2810() {
   return (neuron0x15bd430()*0.0490168);
}

double NNfunction_sb_cLuR::synapse0x15c2850() {
   return (neuron0x15bd770()*-0.0392831);
}

double NNfunction_sb_cLuR::synapse0x15c2890() {
   return (neuron0x15bdab0()*0.047591);
}

double NNfunction_sb_cLuR::synapse0x15c28d0() {
   return (neuron0x15bddf0()*-0.0564622);
}

double NNfunction_sb_cLuR::synapse0x15c2910() {
   return (neuron0x15be130()*0.0331521);
}

double NNfunction_sb_cLuR::synapse0x15c2c90() {
   return (neuron0x15b9570()*0.113417);
}

double NNfunction_sb_cLuR::synapse0x15c2cd0() {
   return (neuron0x15b98b0()*-0.326249);
}

double NNfunction_sb_cLuR::synapse0x15c2d10() {
   return (neuron0x15b9bf0()*-0.210059);
}

double NNfunction_sb_cLuR::synapse0x15c2d50() {
   return (neuron0x15b9f30()*-0.115951);
}

double NNfunction_sb_cLuR::synapse0x15c2d90() {
   return (neuron0x15ba270()*-0.280162);
}

double NNfunction_sb_cLuR::synapse0x15c2dd0() {
   return (neuron0x15ba5b0()*-0.0990806);
}

double NNfunction_sb_cLuR::synapse0x15c2e10() {
   return (neuron0x15ba8f0()*0.231774);
}

double NNfunction_sb_cLuR::synapse0x15c2e50() {
   return (neuron0x15bac30()*-0.137037);
}

double NNfunction_sb_cLuR::synapse0x15c2e90() {
   return (neuron0x15baf70()*0.0719694);
}

double NNfunction_sb_cLuR::synapse0x15c2ed0() {
   return (neuron0x15bb2b0()*0.397781);
}

double NNfunction_sb_cLuR::synapse0x15c2f10() {
   return (neuron0x15bb5f0()*0.406905);
}

double NNfunction_sb_cLuR::synapse0x15c2f50() {
   return (neuron0x15bb930()*0.221372);
}

double NNfunction_sb_cLuR::synapse0x15c2f90() {
   return (neuron0x15bbc70()*1.37375);
}

double NNfunction_sb_cLuR::synapse0x15c2fd0() {
   return (neuron0x15bbfb0()*0.422027);
}

double NNfunction_sb_cLuR::synapse0x15c3010() {
   return (neuron0x15bc2f0()*-0.265118);
}

double NNfunction_sb_cLuR::synapse0x15c3050() {
   return (neuron0x15bc630()*0.126666);
}

double NNfunction_sb_cLuR::synapse0x15c2ae0() {
   return (neuron0x15bc970()*-0.113419);
}

double NNfunction_sb_cLuR::synapse0x15c2b20() {
   return (neuron0x15bced0()*-0.830141);
}

double NNfunction_sb_cLuR::synapse0x15c31a0() {
   return (neuron0x15bd0f0()*0.402207);
}

double NNfunction_sb_cLuR::synapse0x15c31e0() {
   return (neuron0x15bd430()*-0.162299);
}

double NNfunction_sb_cLuR::synapse0x15c3220() {
   return (neuron0x15bd770()*-0.0752134);
}

double NNfunction_sb_cLuR::synapse0x15c3260() {
   return (neuron0x15bdab0()*-0.270216);
}

double NNfunction_sb_cLuR::synapse0x15c32a0() {
   return (neuron0x15bddf0()*0.0607817);
}

double NNfunction_sb_cLuR::synapse0x15c32e0() {
   return (neuron0x15be130()*0.0270781);
}

double NNfunction_sb_cLuR::synapse0x15bcdc0() {
   return (neuron0x15b9570()*-0.235644);
}

double NNfunction_sb_cLuR::synapse0x15bce00() {
   return (neuron0x15b98b0()*-0.074669);
}

double NNfunction_sb_cLuR::synapse0x15bce40() {
   return (neuron0x15b9bf0()*-0.429463);
}

double NNfunction_sb_cLuR::synapse0x15bce80() {
   return (neuron0x15b9f30()*-0.749013);
}

double NNfunction_sb_cLuR::synapse0x15c3870() {
   return (neuron0x15ba270()*-0.0902444);
}

double NNfunction_sb_cLuR::synapse0x15c38b0() {
   return (neuron0x15ba5b0()*0.0927433);
}

double NNfunction_sb_cLuR::synapse0x15c38f0() {
   return (neuron0x15ba8f0()*-0.163435);
}

double NNfunction_sb_cLuR::synapse0x15c3930() {
   return (neuron0x15bac30()*-0.120284);
}

double NNfunction_sb_cLuR::synapse0x15c3970() {
   return (neuron0x15baf70()*-0.645391);
}

double NNfunction_sb_cLuR::synapse0x15c39b0() {
   return (neuron0x15bb2b0()*0.226733);
}

double NNfunction_sb_cLuR::synapse0x15c39f0() {
   return (neuron0x15bb5f0()*-0.0753988);
}

double NNfunction_sb_cLuR::synapse0x15c3a30() {
   return (neuron0x15bb930()*0.177774);
}

double NNfunction_sb_cLuR::synapse0x15c3a70() {
   return (neuron0x15bbc70()*-0.0593399);
}

double NNfunction_sb_cLuR::synapse0x15c3ab0() {
   return (neuron0x15bbfb0()*0.0521915);
}

double NNfunction_sb_cLuR::synapse0x15c3af0() {
   return (neuron0x15bc2f0()*0.416551);
}

double NNfunction_sb_cLuR::synapse0x15c3b30() {
   return (neuron0x15bc630()*0.0904759);
}

double NNfunction_sb_cLuR::synapse0x15c34b0() {
   return (neuron0x15bc970()*0.208707);
}

double NNfunction_sb_cLuR::synapse0x15c34f0() {
   return (neuron0x15bced0()*-0.337634);
}

double NNfunction_sb_cLuR::synapse0x15c3c80() {
   return (neuron0x15bd0f0()*-0.435217);
}

double NNfunction_sb_cLuR::synapse0x15c3cc0() {
   return (neuron0x15bd430()*-0.385905);
}

double NNfunction_sb_cLuR::synapse0x15c3d00() {
   return (neuron0x15bd770()*0.0346037);
}

double NNfunction_sb_cLuR::synapse0x15c3d40() {
   return (neuron0x15bdab0()*0.160411);
}

double NNfunction_sb_cLuR::synapse0x15c3d80() {
   return (neuron0x15bddf0()*-0.215207);
}

double NNfunction_sb_cLuR::synapse0x15c3dc0() {
   return (neuron0x15be130()*-0.213222);
}

double NNfunction_sb_cLuR::synapse0x15c4140() {
   return (neuron0x15b9570()*-0.30412);
}

double NNfunction_sb_cLuR::synapse0x15c4180() {
   return (neuron0x15b98b0()*0.155804);
}

double NNfunction_sb_cLuR::synapse0x15c41c0() {
   return (neuron0x15b9bf0()*-0.0937845);
}

double NNfunction_sb_cLuR::synapse0x15c4200() {
   return (neuron0x15b9f30()*0.310174);
}

double NNfunction_sb_cLuR::synapse0x15c4240() {
   return (neuron0x15ba270()*-0.360704);
}

double NNfunction_sb_cLuR::synapse0x15c4280() {
   return (neuron0x15ba5b0()*0.0740618);
}

double NNfunction_sb_cLuR::synapse0x15c42c0() {
   return (neuron0x15ba8f0()*-0.14988);
}

double NNfunction_sb_cLuR::synapse0x15c4300() {
   return (neuron0x15bac30()*-0.683791);
}

double NNfunction_sb_cLuR::synapse0x15c4340() {
   return (neuron0x15baf70()*0.395752);
}

double NNfunction_sb_cLuR::synapse0x15c4380() {
   return (neuron0x15bb2b0()*-0.190692);
}

double NNfunction_sb_cLuR::synapse0x15c43c0() {
   return (neuron0x15bb5f0()*-0.883425);
}

double NNfunction_sb_cLuR::synapse0x15c4400() {
   return (neuron0x15bb930()*-1.07607);
}

double NNfunction_sb_cLuR::synapse0x15c4440() {
   return (neuron0x15bbc70()*-0.309231);
}

double NNfunction_sb_cLuR::synapse0x15c4480() {
   return (neuron0x15bbfb0()*-0.301447);
}

double NNfunction_sb_cLuR::synapse0x15c44c0() {
   return (neuron0x15bc2f0()*-0.0359873);
}

double NNfunction_sb_cLuR::synapse0x15c4500() {
   return (neuron0x15bc630()*-0.211401);
}

double NNfunction_sb_cLuR::synapse0x15c3f90() {
   return (neuron0x15bc970()*0.0279214);
}

double NNfunction_sb_cLuR::synapse0x15c3fd0() {
   return (neuron0x15bced0()*-0.383587);
}

double NNfunction_sb_cLuR::synapse0x15c4650() {
   return (neuron0x15bd0f0()*-0.00077109);
}

double NNfunction_sb_cLuR::synapse0x15c4690() {
   return (neuron0x15bd430()*0.0969721);
}

double NNfunction_sb_cLuR::synapse0x15c46d0() {
   return (neuron0x15bd770()*0.516641);
}

double NNfunction_sb_cLuR::synapse0x15c4710() {
   return (neuron0x15bdab0()*0.091235);
}

double NNfunction_sb_cLuR::synapse0x15c4750() {
   return (neuron0x15bddf0()*-0.00658056);
}

double NNfunction_sb_cLuR::synapse0x15c4790() {
   return (neuron0x15be130()*0.317573);
}

double NNfunction_sb_cLuR::synapse0x15c4b10() {
   return (neuron0x15b9570()*-0.1113);
}

double NNfunction_sb_cLuR::synapse0x15c4b50() {
   return (neuron0x15b98b0()*-0.83427);
}

double NNfunction_sb_cLuR::synapse0x15c4b90() {
   return (neuron0x15b9bf0()*-0.640796);
}

double NNfunction_sb_cLuR::synapse0x15c4bd0() {
   return (neuron0x15b9f30()*0.283879);
}

double NNfunction_sb_cLuR::synapse0x15c4c10() {
   return (neuron0x15ba270()*-0.193593);
}

double NNfunction_sb_cLuR::synapse0x15c4c50() {
   return (neuron0x15ba5b0()*-0.260611);
}

double NNfunction_sb_cLuR::synapse0x15c4c90() {
   return (neuron0x15ba8f0()*0.0812851);
}

double NNfunction_sb_cLuR::synapse0x15c4cd0() {
   return (neuron0x15bac30()*-0.376215);
}

double NNfunction_sb_cLuR::synapse0x15c4d10() {
   return (neuron0x15baf70()*-0.0585051);
}

double NNfunction_sb_cLuR::synapse0x15c4d50() {
   return (neuron0x15bb2b0()*0.295218);
}

double NNfunction_sb_cLuR::synapse0x15c4d90() {
   return (neuron0x15bb5f0()*-0.19515);
}

double NNfunction_sb_cLuR::synapse0x15c4dd0() {
   return (neuron0x15bb930()*-0.533023);
}

double NNfunction_sb_cLuR::synapse0x15c4e10() {
   return (neuron0x15bbc70()*-0.0515398);
}

double NNfunction_sb_cLuR::synapse0x15c4e50() {
   return (neuron0x15bbfb0()*-0.53427);
}

double NNfunction_sb_cLuR::synapse0x15c4e90() {
   return (neuron0x15bc2f0()*0.343106);
}

double NNfunction_sb_cLuR::synapse0x15c4ed0() {
   return (neuron0x15bc630()*0.448527);
}

double NNfunction_sb_cLuR::synapse0x15c4960() {
   return (neuron0x15bc970()*0.0351547);
}

double NNfunction_sb_cLuR::synapse0x15c49a0() {
   return (neuron0x15bced0()*-0.703359);
}

double NNfunction_sb_cLuR::synapse0x15c1730() {
   return (neuron0x15bd0f0()*0.0766194);
}

double NNfunction_sb_cLuR::synapse0x15c1770() {
   return (neuron0x15bd430()*0.0303498);
}

double NNfunction_sb_cLuR::synapse0x15c17b0() {
   return (neuron0x15bd770()*-0.0331838);
}

double NNfunction_sb_cLuR::synapse0x15c17f0() {
   return (neuron0x15bdab0()*0.00951438);
}

double NNfunction_sb_cLuR::synapse0x15c1830() {
   return (neuron0x15bddf0()*-0.0197925);
}

double NNfunction_sb_cLuR::synapse0x15c1870() {
   return (neuron0x15be130()*-0.0558155);
}

double NNfunction_sb_cLuR::synapse0x15c1bf0() {
   return (neuron0x15b9570()*-0.137141);
}

double NNfunction_sb_cLuR::synapse0x15c1c30() {
   return (neuron0x15b98b0()*0.102626);
}

double NNfunction_sb_cLuR::synapse0x15c1c70() {
   return (neuron0x15b9bf0()*0.0854645);
}

double NNfunction_sb_cLuR::synapse0x15c1cb0() {
   return (neuron0x15b9f30()*-0.451689);
}

double NNfunction_sb_cLuR::synapse0x15c1cf0() {
   return (neuron0x15ba270()*-0.3859);
}

double NNfunction_sb_cLuR::synapse0x15c1d30() {
   return (neuron0x15ba5b0()*0.270581);
}

double NNfunction_sb_cLuR::synapse0x15c1d70() {
   return (neuron0x15ba8f0()*0.324548);
}

double NNfunction_sb_cLuR::synapse0x15c1db0() {
   return (neuron0x15bac30()*-0.377364);
}

double NNfunction_sb_cLuR::synapse0x15c1df0() {
   return (neuron0x15baf70()*-0.190047);
}

double NNfunction_sb_cLuR::synapse0x15c1e30() {
   return (neuron0x15bb2b0()*0.630618);
}

double NNfunction_sb_cLuR::synapse0x15c1e70() {
   return (neuron0x15bb5f0()*-0.696725);
}

double NNfunction_sb_cLuR::synapse0x15c1eb0() {
   return (neuron0x15bb930()*-0.475657);
}

double NNfunction_sb_cLuR::synapse0x15c1ef0() {
   return (neuron0x15bbc70()*0.505525);
}

double NNfunction_sb_cLuR::synapse0x15c6030() {
   return (neuron0x15bbfb0()*-0.233157);
}

double NNfunction_sb_cLuR::synapse0x15c6070() {
   return (neuron0x15bc2f0()*-0.17501);
}

double NNfunction_sb_cLuR::synapse0x15c60b0() {
   return (neuron0x15bc630()*-0.690731);
}

double NNfunction_sb_cLuR::synapse0x15c1a40() {
   return (neuron0x15bc970()*-0.0338525);
}

double NNfunction_sb_cLuR::synapse0x15c1a80() {
   return (neuron0x15bced0()*0.304184);
}

double NNfunction_sb_cLuR::synapse0x15c6200() {
   return (neuron0x15bd0f0()*0.532175);
}

double NNfunction_sb_cLuR::synapse0x15c6240() {
   return (neuron0x15bd430()*-0.328412);
}

double NNfunction_sb_cLuR::synapse0x15c6280() {
   return (neuron0x15bd770()*0.297135);
}

double NNfunction_sb_cLuR::synapse0x15c62c0() {
   return (neuron0x15bdab0()*-0.250276);
}

double NNfunction_sb_cLuR::synapse0x15c6300() {
   return (neuron0x15bddf0()*0.277503);
}

double NNfunction_sb_cLuR::synapse0x15c6340() {
   return (neuron0x15be130()*-0.15961);
}

double NNfunction_sb_cLuR::synapse0x15c66c0() {
   return (neuron0x15b9570()*0.575845);
}

double NNfunction_sb_cLuR::synapse0x15c6700() {
   return (neuron0x15b98b0()*0.0260082);
}

double NNfunction_sb_cLuR::synapse0x15c6740() {
   return (neuron0x15b9bf0()*0.891631);
}

double NNfunction_sb_cLuR::synapse0x15c6780() {
   return (neuron0x15b9f30()*1.22413);
}

double NNfunction_sb_cLuR::synapse0x15c67c0() {
   return (neuron0x15ba270()*0.203382);
}

double NNfunction_sb_cLuR::synapse0x15c6800() {
   return (neuron0x15ba5b0()*0.281821);
}

double NNfunction_sb_cLuR::synapse0x15c6840() {
   return (neuron0x15ba8f0()*-0.00317666);
}

double NNfunction_sb_cLuR::synapse0x15c6880() {
   return (neuron0x15bac30()*-0.0194793);
}

double NNfunction_sb_cLuR::synapse0x15c68c0() {
   return (neuron0x15baf70()*0.00608776);
}

double NNfunction_sb_cLuR::synapse0x15c6900() {
   return (neuron0x15bb2b0()*0.474097);
}

double NNfunction_sb_cLuR::synapse0x15c6940() {
   return (neuron0x15bb5f0()*-0.415476);
}

double NNfunction_sb_cLuR::synapse0x15c6980() {
   return (neuron0x15bb930()*-0.232125);
}

double NNfunction_sb_cLuR::synapse0x15c69c0() {
   return (neuron0x15bbc70()*-1.04843);
}

double NNfunction_sb_cLuR::synapse0x15c6a00() {
   return (neuron0x15bbfb0()*-0.0223801);
}

double NNfunction_sb_cLuR::synapse0x15c6a40() {
   return (neuron0x15bc2f0()*-0.269245);
}

double NNfunction_sb_cLuR::synapse0x15c6a80() {
   return (neuron0x15bc630()*0.24237);
}

double NNfunction_sb_cLuR::synapse0x15c6510() {
   return (neuron0x15bc970()*-0.163124);
}

double NNfunction_sb_cLuR::synapse0x15c6550() {
   return (neuron0x15bced0()*0.538522);
}

double NNfunction_sb_cLuR::synapse0x15c6bd0() {
   return (neuron0x15bd0f0()*-0.22666);
}

double NNfunction_sb_cLuR::synapse0x15c6c10() {
   return (neuron0x15bd430()*0.102886);
}

double NNfunction_sb_cLuR::synapse0x15c6c50() {
   return (neuron0x15bd770()*0.0655794);
}

double NNfunction_sb_cLuR::synapse0x15c6c90() {
   return (neuron0x15bdab0()*0.459065);
}

double NNfunction_sb_cLuR::synapse0x15c6cd0() {
   return (neuron0x15bddf0()*-0.00980306);
}

double NNfunction_sb_cLuR::synapse0x15c6d10() {
   return (neuron0x15be130()*0.136855);
}

double NNfunction_sb_cLuR::synapse0x15c7090() {
   return (neuron0x15b9570()*-0.0343702);
}

double NNfunction_sb_cLuR::synapse0x15c70d0() {
   return (neuron0x15b98b0()*0.0211834);
}

double NNfunction_sb_cLuR::synapse0x15c7110() {
   return (neuron0x15b9bf0()*-0.0107529);
}

double NNfunction_sb_cLuR::synapse0x15c7150() {
   return (neuron0x15b9f30()*0.644251);
}

double NNfunction_sb_cLuR::synapse0x15c7190() {
   return (neuron0x15ba270()*0.0420805);
}

double NNfunction_sb_cLuR::synapse0x15c71d0() {
   return (neuron0x15ba5b0()*-0.00295283);
}

double NNfunction_sb_cLuR::synapse0x15c7210() {
   return (neuron0x15ba8f0()*0.0122366);
}

double NNfunction_sb_cLuR::synapse0x15c7250() {
   return (neuron0x15bac30()*0.0116732);
}

double NNfunction_sb_cLuR::synapse0x15c7290() {
   return (neuron0x15baf70()*-0.0354005);
}

double NNfunction_sb_cLuR::synapse0x15c72d0() {
   return (neuron0x15bb2b0()*-0.0229036);
}

double NNfunction_sb_cLuR::synapse0x15c7310() {
   return (neuron0x15bb5f0()*0.0147914);
}

double NNfunction_sb_cLuR::synapse0x15c7350() {
   return (neuron0x15bb930()*-0.0142152);
}

double NNfunction_sb_cLuR::synapse0x15c7390() {
   return (neuron0x15bbc70()*0.304343);
}

double NNfunction_sb_cLuR::synapse0x15c73d0() {
   return (neuron0x15bbfb0()*0.0249506);
}

double NNfunction_sb_cLuR::synapse0x15c7410() {
   return (neuron0x15bc2f0()*-2.26243);
}

double NNfunction_sb_cLuR::synapse0x15c7450() {
   return (neuron0x15bc630()*-0.0218879);
}

double NNfunction_sb_cLuR::synapse0x15c6ee0() {
   return (neuron0x15bc970()*-0.000524256);
}

double NNfunction_sb_cLuR::synapse0x15c6f20() {
   return (neuron0x15bced0()*0.0958928);
}

double NNfunction_sb_cLuR::synapse0x15c75a0() {
   return (neuron0x15bd0f0()*-0.0337315);
}

double NNfunction_sb_cLuR::synapse0x15c75e0() {
   return (neuron0x15bd430()*-0.0683139);
}

double NNfunction_sb_cLuR::synapse0x15c7620() {
   return (neuron0x15bd770()*-0.00302598);
}

double NNfunction_sb_cLuR::synapse0x15c7660() {
   return (neuron0x15bdab0()*0.0069106);
}

double NNfunction_sb_cLuR::synapse0x15c76a0() {
   return (neuron0x15bddf0()*-0.0320944);
}

double NNfunction_sb_cLuR::synapse0x15c76e0() {
   return (neuron0x15be130()*0.004043);
}

double NNfunction_sb_cLuR::synapse0x15c7a60() {
   return (neuron0x15b9570()*0.0189147);
}

double NNfunction_sb_cLuR::synapse0x15c7aa0() {
   return (neuron0x15b98b0()*0.0218906);
}

double NNfunction_sb_cLuR::synapse0x15c7ae0() {
   return (neuron0x15b9bf0()*-0.00430445);
}

double NNfunction_sb_cLuR::synapse0x15c7b20() {
   return (neuron0x15b9f30()*0.366252);
}

double NNfunction_sb_cLuR::synapse0x15c7b60() {
   return (neuron0x15ba270()*0.0176807);
}

double NNfunction_sb_cLuR::synapse0x15c7ba0() {
   return (neuron0x15ba5b0()*0.0451748);
}

double NNfunction_sb_cLuR::synapse0x15c7be0() {
   return (neuron0x15ba8f0()*0.0326026);
}

double NNfunction_sb_cLuR::synapse0x15c7c20() {
   return (neuron0x15bac30()*-0.0424583);
}

double NNfunction_sb_cLuR::synapse0x15c7c60() {
   return (neuron0x15baf70()*-0.00184719);
}

double NNfunction_sb_cLuR::synapse0x15c7ca0() {
   return (neuron0x15bb2b0()*-0.0373523);
}

double NNfunction_sb_cLuR::synapse0x15c7ce0() {
   return (neuron0x15bb5f0()*-0.069464);
}

double NNfunction_sb_cLuR::synapse0x15c7d20() {
   return (neuron0x15bb930()*-0.0166496);
}

double NNfunction_sb_cLuR::synapse0x15c7d60() {
   return (neuron0x15bbc70()*0.0837947);
}

double NNfunction_sb_cLuR::synapse0x15c7da0() {
   return (neuron0x15bbfb0()*-0.0478035);
}

double NNfunction_sb_cLuR::synapse0x15c7de0() {
   return (neuron0x15bc2f0()*-3.20637);
}

double NNfunction_sb_cLuR::synapse0x15c7e20() {
   return (neuron0x15bc630()*-0.0153659);
}

double NNfunction_sb_cLuR::synapse0x15c78b0() {
   return (neuron0x15bc970()*-0.0770096);
}

double NNfunction_sb_cLuR::synapse0x15c78f0() {
   return (neuron0x15bced0()*0.0132405);
}

double NNfunction_sb_cLuR::synapse0x15c7f70() {
   return (neuron0x15bd0f0()*-0.0218275);
}

double NNfunction_sb_cLuR::synapse0x15c7fb0() {
   return (neuron0x15bd430()*0.0012613);
}

double NNfunction_sb_cLuR::synapse0x15c7ff0() {
   return (neuron0x15bd770()*0.0471842);
}

double NNfunction_sb_cLuR::synapse0x15c8030() {
   return (neuron0x15bdab0()*0.0270508);
}

double NNfunction_sb_cLuR::synapse0x15c8070() {
   return (neuron0x15bddf0()*0.00379283);
}

double NNfunction_sb_cLuR::synapse0x15c80b0() {
   return (neuron0x15be130()*0.00734992);
}

double NNfunction_sb_cLuR::synapse0x15c8430() {
   return (neuron0x15b9570()*0.0784851);
}

double NNfunction_sb_cLuR::synapse0x15b9790() {
   return (neuron0x15b98b0()*-0.238127);
}

double NNfunction_sb_cLuR::synapse0x15b97d0() {
   return (neuron0x15b9bf0()*-0.334937);
}

double NNfunction_sb_cLuR::synapse0x15b9ad0() {
   return (neuron0x15b9f30()*0.530097);
}

double NNfunction_sb_cLuR::synapse0x15b9b10() {
   return (neuron0x15ba270()*-0.637207);
}

double NNfunction_sb_cLuR::synapse0x15b9e10() {
   return (neuron0x15ba5b0()*-0.209992);
}

double NNfunction_sb_cLuR::synapse0x15b9e50() {
   return (neuron0x15ba8f0()*0.0410719);
}

double NNfunction_sb_cLuR::synapse0x15ba150() {
   return (neuron0x15bac30()*-1.09743);
}

double NNfunction_sb_cLuR::synapse0x15ba190() {
   return (neuron0x15baf70()*0.69113);
}

double NNfunction_sb_cLuR::synapse0x15ba490() {
   return (neuron0x15bb2b0()*-0.610121);
}

double NNfunction_sb_cLuR::synapse0x15ba4d0() {
   return (neuron0x15bb5f0()*-0.510291);
}

double NNfunction_sb_cLuR::synapse0x15ba7d0() {
   return (neuron0x15bb930()*-0.20771);
}

double NNfunction_sb_cLuR::synapse0x15ba810() {
   return (neuron0x15bbc70()*0.0155741);
}

double NNfunction_sb_cLuR::synapse0x15bab10() {
   return (neuron0x15bbfb0()*0.841433);
}

double NNfunction_sb_cLuR::synapse0x15bab50() {
   return (neuron0x15bc2f0()*0.326252);
}

double NNfunction_sb_cLuR::synapse0x15bae50() {
   return (neuron0x15bc630()*-0.0366934);
}

double NNfunction_sb_cLuR::synapse0x15bae90() {
   return (neuron0x15bc970()*0.371751);
}

double NNfunction_sb_cLuR::synapse0x15bb190() {
   return (neuron0x15bced0()*-0.244568);
}

double NNfunction_sb_cLuR::synapse0x15bb1d0() {
   return (neuron0x15bd0f0()*0.202875);
}

double NNfunction_sb_cLuR::synapse0x15bb4d0() {
   return (neuron0x15bd430()*0.193266);
}

double NNfunction_sb_cLuR::synapse0x15bb510() {
   return (neuron0x15bd770()*0.00976338);
}

double NNfunction_sb_cLuR::synapse0x15bb810() {
   return (neuron0x15bdab0()*-0.160932);
}

double NNfunction_sb_cLuR::synapse0x15bb850() {
   return (neuron0x15bddf0()*0.347466);
}

double NNfunction_sb_cLuR::synapse0x15bbb50() {
   return (neuron0x15be130()*-0.398354);
}

double NNfunction_sb_cLuR::synapse0x15bbb90() {
   return (neuron0x15b9570()*-0.0183352);
}

double NNfunction_sb_cLuR::synapse0x15bc850() {
   return (neuron0x15b98b0()*0.0308034);
}

double NNfunction_sb_cLuR::synapse0x15bc890() {
   return (neuron0x15b9bf0()*0.0236568);
}

double NNfunction_sb_cLuR::synapse0x15c8280() {
   return (neuron0x15b9f30()*-12.6315);
}

double NNfunction_sb_cLuR::synapse0x15c82c0() {
   return (neuron0x15ba270()*0.0125807);
}

double NNfunction_sb_cLuR::synapse0x15bcb90() {
   return (neuron0x15ba5b0()*0.05908);
}

double NNfunction_sb_cLuR::synapse0x15bcbd0() {
   return (neuron0x15ba8f0()*0.012168);
}

double NNfunction_sb_cLuR::synapse0x136ab60() {
   return (neuron0x15bac30()*-0.00908854);
}

double NNfunction_sb_cLuR::synapse0x136aba0() {
   return (neuron0x15baf70()*-0.0109044);
}

double NNfunction_sb_cLuR::synapse0x15bd310() {
   return (neuron0x15bb2b0()*-0.00506928);
}

double NNfunction_sb_cLuR::synapse0x15bd350() {
   return (neuron0x15bb5f0()*0.0177889);
}

double NNfunction_sb_cLuR::synapse0x15bd650() {
   return (neuron0x15bb930()*-0.0248362);
}

double NNfunction_sb_cLuR::synapse0x15bd690() {
   return (neuron0x15bbc70()*0.198034);
}

double NNfunction_sb_cLuR::synapse0x15bd990() {
   return (neuron0x15bbfb0()*-0.00709278);
}

double NNfunction_sb_cLuR::synapse0x15bd9d0() {
   return (neuron0x15bc2f0()*0.24003);
}

double NNfunction_sb_cLuR::synapse0x15bdcd0() {
   return (neuron0x15bc630()*6.46665e-05);
}

double NNfunction_sb_cLuR::synapse0x15bdd10() {
   return (neuron0x15bc970()*0.0140162);
}

double NNfunction_sb_cLuR::synapse0x15be010() {
   return (neuron0x15bced0()*0.00471698);
}

double NNfunction_sb_cLuR::synapse0x15be050() {
   return (neuron0x15bd0f0()*0.00115427);
}

double NNfunction_sb_cLuR::synapse0x15be350() {
   return (neuron0x15bd430()*-0.000789656);
}

double NNfunction_sb_cLuR::synapse0x15be390() {
   return (neuron0x15bd770()*-0.0200338);
}

double NNfunction_sb_cLuR::synapse0x15bbe90() {
   return (neuron0x15bdab0()*-0.0355604);
}

double NNfunction_sb_cLuR::synapse0x15bbed0() {
   return (neuron0x15bddf0()*0.0179915);
}

double NNfunction_sb_cLuR::synapse0x15ca1a0() {
   return (neuron0x15be130()*-0.0191563);
}

double NNfunction_sb_cLuR::synapse0x15ca520() {
   return (neuron0x15b9570()*0.230577);
}

double NNfunction_sb_cLuR::synapse0x15ca560() {
   return (neuron0x15b98b0()*0.607191);
}

double NNfunction_sb_cLuR::synapse0x15ca5a0() {
   return (neuron0x15b9bf0()*0.262624);
}

double NNfunction_sb_cLuR::synapse0x15ca5e0() {
   return (neuron0x15b9f30()*-0.858372);
}

double NNfunction_sb_cLuR::synapse0x15ca620() {
   return (neuron0x15ba270()*-0.470047);
}

double NNfunction_sb_cLuR::synapse0x15ca660() {
   return (neuron0x15ba5b0()*0.679003);
}

double NNfunction_sb_cLuR::synapse0x15ca6a0() {
   return (neuron0x15ba8f0()*0.348458);
}

double NNfunction_sb_cLuR::synapse0x15ca6e0() {
   return (neuron0x15bac30()*0.0550068);
}

double NNfunction_sb_cLuR::synapse0x15ca720() {
   return (neuron0x15baf70()*-0.373932);
}

double NNfunction_sb_cLuR::synapse0x15ca760() {
   return (neuron0x15bb2b0()*-0.644896);
}

double NNfunction_sb_cLuR::synapse0x15ca7a0() {
   return (neuron0x15bb5f0()*-0.826904);
}

double NNfunction_sb_cLuR::synapse0x15ca7e0() {
   return (neuron0x15bb930()*0.0245043);
}

double NNfunction_sb_cLuR::synapse0x15ca820() {
   return (neuron0x15bbc70()*0.460852);
}

double NNfunction_sb_cLuR::synapse0x15ca860() {
   return (neuron0x15bbfb0()*0.449524);
}

double NNfunction_sb_cLuR::synapse0x15ca8a0() {
   return (neuron0x15bc2f0()*-0.410286);
}

double NNfunction_sb_cLuR::synapse0x15ca8e0() {
   return (neuron0x15bc630()*0.154092);
}

double NNfunction_sb_cLuR::synapse0x15ca370() {
   return (neuron0x15bc970()*-0.160819);
}

double NNfunction_sb_cLuR::synapse0x15ca3b0() {
   return (neuron0x15bced0()*-0.189209);
}

double NNfunction_sb_cLuR::synapse0x15caa30() {
   return (neuron0x15bd0f0()*-0.36385);
}

double NNfunction_sb_cLuR::synapse0x15caa70() {
   return (neuron0x15bd430()*0.236977);
}

double NNfunction_sb_cLuR::synapse0x15caab0() {
   return (neuron0x15bd770()*-0.318627);
}

double NNfunction_sb_cLuR::synapse0x15caaf0() {
   return (neuron0x15bdab0()*0.140889);
}

double NNfunction_sb_cLuR::synapse0x15cab30() {
   return (neuron0x15bddf0()*0.853312);
}

double NNfunction_sb_cLuR::synapse0x15cab70() {
   return (neuron0x15be130()*-0.107358);
}

double NNfunction_sb_cLuR::synapse0x15caef0() {
   return (neuron0x15b9570()*0.0821516);
}

double NNfunction_sb_cLuR::synapse0x15caf30() {
   return (neuron0x15b98b0()*-0.0752397);
}

double NNfunction_sb_cLuR::synapse0x15caf70() {
   return (neuron0x15b9bf0()*-0.154733);
}

double NNfunction_sb_cLuR::synapse0x15cafb0() {
   return (neuron0x15b9f30()*0.172503);
}

double NNfunction_sb_cLuR::synapse0x15caff0() {
   return (neuron0x15ba270()*-0.312176);
}

double NNfunction_sb_cLuR::synapse0x15cb030() {
   return (neuron0x15ba5b0()*-0.290623);
}

double NNfunction_sb_cLuR::synapse0x15cb070() {
   return (neuron0x15ba8f0()*0.0428865);
}

double NNfunction_sb_cLuR::synapse0x15cb0b0() {
   return (neuron0x15bac30()*0.273683);
}

double NNfunction_sb_cLuR::synapse0x15cb0f0() {
   return (neuron0x15baf70()*-0.00298655);
}

double NNfunction_sb_cLuR::synapse0x15cb130() {
   return (neuron0x15bb2b0()*0.00113045);
}

double NNfunction_sb_cLuR::synapse0x15cb170() {
   return (neuron0x15bb5f0()*-0.0533672);
}

double NNfunction_sb_cLuR::synapse0x15cb1b0() {
   return (neuron0x15bb930()*0.021687);
}

double NNfunction_sb_cLuR::synapse0x15cb1f0() {
   return (neuron0x15bbc70()*-0.332265);
}

double NNfunction_sb_cLuR::synapse0x15cb230() {
   return (neuron0x15bbfb0()*0.0415159);
}

double NNfunction_sb_cLuR::synapse0x15cb270() {
   return (neuron0x15bc2f0()*-0.502932);
}

double NNfunction_sb_cLuR::synapse0x15cb2b0() {
   return (neuron0x15bc630()*0.021563);
}

double NNfunction_sb_cLuR::synapse0x15cad40() {
   return (neuron0x15bc970()*-0.0548611);
}

double NNfunction_sb_cLuR::synapse0x15cad80() {
   return (neuron0x15bced0()*0.120538);
}

double NNfunction_sb_cLuR::synapse0x15cb400() {
   return (neuron0x15bd0f0()*0.0505362);
}

double NNfunction_sb_cLuR::synapse0x15cb440() {
   return (neuron0x15bd430()*0.00516996);
}

double NNfunction_sb_cLuR::synapse0x15cb480() {
   return (neuron0x15bd770()*-0.00396359);
}

double NNfunction_sb_cLuR::synapse0x15cb4c0() {
   return (neuron0x15bdab0()*-0.0927154);
}

double NNfunction_sb_cLuR::synapse0x15cb500() {
   return (neuron0x15bddf0()*0.0649308);
}

double NNfunction_sb_cLuR::synapse0x15cb540() {
   return (neuron0x15be130()*-0.0493128);
}

double NNfunction_sb_cLuR::synapse0x15cb8c0() {
   return (neuron0x15b9570()*-0.318399);
}

double NNfunction_sb_cLuR::synapse0x15cb900() {
   return (neuron0x15b98b0()*-0.463802);
}

double NNfunction_sb_cLuR::synapse0x15cb940() {
   return (neuron0x15b9bf0()*-0.348435);
}

double NNfunction_sb_cLuR::synapse0x15cb980() {
   return (neuron0x15b9f30()*-0.978743);
}

double NNfunction_sb_cLuR::synapse0x15cb9c0() {
   return (neuron0x15ba270()*0.0702391);
}

double NNfunction_sb_cLuR::synapse0x15cba00() {
   return (neuron0x15ba5b0()*0.203684);
}

double NNfunction_sb_cLuR::synapse0x15cba40() {
   return (neuron0x15ba8f0()*-0.659416);
}

double NNfunction_sb_cLuR::synapse0x15cba80() {
   return (neuron0x15bac30()*-0.132265);
}

double NNfunction_sb_cLuR::synapse0x15cbac0() {
   return (neuron0x15baf70()*0.289407);
}

double NNfunction_sb_cLuR::synapse0x15cbb00() {
   return (neuron0x15bb2b0()*-0.0117013);
}

double NNfunction_sb_cLuR::synapse0x15cbb40() {
   return (neuron0x15bb5f0()*0.487239);
}

double NNfunction_sb_cLuR::synapse0x15cbb80() {
   return (neuron0x15bb930()*0.0686261);
}

double NNfunction_sb_cLuR::synapse0x15cbbc0() {
   return (neuron0x15bbc70()*0.0409169);
}

double NNfunction_sb_cLuR::synapse0x15cbc00() {
   return (neuron0x15bbfb0()*-0.321746);
}

double NNfunction_sb_cLuR::synapse0x15cbc40() {
   return (neuron0x15bc2f0()*-0.586051);
}

double NNfunction_sb_cLuR::synapse0x15cbc80() {
   return (neuron0x15bc630()*0.286898);
}

double NNfunction_sb_cLuR::synapse0x15cb710() {
   return (neuron0x15bc970()*0.277872);
}

double NNfunction_sb_cLuR::synapse0x15cb750() {
   return (neuron0x15bced0()*0.236334);
}

double NNfunction_sb_cLuR::synapse0x15cbdd0() {
   return (neuron0x15bd0f0()*0.47091);
}

double NNfunction_sb_cLuR::synapse0x15cbe10() {
   return (neuron0x15bd430()*0.22472);
}

double NNfunction_sb_cLuR::synapse0x15cbe50() {
   return (neuron0x15bd770()*0.236537);
}

double NNfunction_sb_cLuR::synapse0x15cbe90() {
   return (neuron0x15bdab0()*-0.0666248);
}

double NNfunction_sb_cLuR::synapse0x15cbed0() {
   return (neuron0x15bddf0()*-0.00290677);
}

double NNfunction_sb_cLuR::synapse0x15cbf10() {
   return (neuron0x15be130()*0.228798);
}

double NNfunction_sb_cLuR::synapse0x15cc290() {
   return (neuron0x15b9570()*-0.00344682);
}

double NNfunction_sb_cLuR::synapse0x15cc2d0() {
   return (neuron0x15b98b0()*0.0839833);
}

double NNfunction_sb_cLuR::synapse0x15cc310() {
   return (neuron0x15b9bf0()*-0.00855315);
}

double NNfunction_sb_cLuR::synapse0x15cc350() {
   return (neuron0x15b9f30()*-5.06863);
}

double NNfunction_sb_cLuR::synapse0x15cc390() {
   return (neuron0x15ba270()*-0.0346467);
}

double NNfunction_sb_cLuR::synapse0x15cc3d0() {
   return (neuron0x15ba5b0()*-0.00741704);
}

double NNfunction_sb_cLuR::synapse0x15cc410() {
   return (neuron0x15ba8f0()*-0.0167866);
}

double NNfunction_sb_cLuR::synapse0x15cc450() {
   return (neuron0x15bac30()*0.0546286);
}

double NNfunction_sb_cLuR::synapse0x15cc490() {
   return (neuron0x15baf70()*0.0107436);
}

double NNfunction_sb_cLuR::synapse0x15cc4d0() {
   return (neuron0x15bb2b0()*-0.0688991);
}

double NNfunction_sb_cLuR::synapse0x15cc510() {
   return (neuron0x15bb5f0()*-0.0200161);
}

double NNfunction_sb_cLuR::synapse0x15cc550() {
   return (neuron0x15bb930()*-0.0509768);
}

double NNfunction_sb_cLuR::synapse0x15cc590() {
   return (neuron0x15bbc70()*2.58061);
}

double NNfunction_sb_cLuR::synapse0x15cc5d0() {
   return (neuron0x15bbfb0()*0.0690746);
}

double NNfunction_sb_cLuR::synapse0x15cc610() {
   return (neuron0x15bc2f0()*-0.0224756);
}

double NNfunction_sb_cLuR::synapse0x15cc650() {
   return (neuron0x15bc630()*-0.0503224);
}

double NNfunction_sb_cLuR::synapse0x15cc0e0() {
   return (neuron0x15bc970()*0.0559824);
}

double NNfunction_sb_cLuR::synapse0x15cc120() {
   return (neuron0x15bced0()*-0.0416866);
}

double NNfunction_sb_cLuR::synapse0x15cc7a0() {
   return (neuron0x15bd0f0()*-0.0202573);
}

double NNfunction_sb_cLuR::synapse0x15cc7e0() {
   return (neuron0x15bd430()*-0.0276793);
}

double NNfunction_sb_cLuR::synapse0x15cc820() {
   return (neuron0x15bd770()*0.036203);
}

double NNfunction_sb_cLuR::synapse0x15cc860() {
   return (neuron0x15bdab0()*0.0266166);
}

double NNfunction_sb_cLuR::synapse0x15cc8a0() {
   return (neuron0x15bddf0()*0.00272133);
}

double NNfunction_sb_cLuR::synapse0x15cc8e0() {
   return (neuron0x15be130()*-0.0338297);
}

double NNfunction_sb_cLuR::synapse0x15ccc60() {
   return (neuron0x15b9570()*-0.857822);
}

double NNfunction_sb_cLuR::synapse0x15ccca0() {
   return (neuron0x15b98b0()*-0.546055);
}

double NNfunction_sb_cLuR::synapse0x15ccce0() {
   return (neuron0x15b9bf0()*-0.545291);
}

double NNfunction_sb_cLuR::synapse0x15ccd20() {
   return (neuron0x15b9f30()*0.531746);
}

double NNfunction_sb_cLuR::synapse0x15ccd60() {
   return (neuron0x15ba270()*0.111921);
}

double NNfunction_sb_cLuR::synapse0x15ccda0() {
   return (neuron0x15ba5b0()*0.423266);
}

double NNfunction_sb_cLuR::synapse0x15ccde0() {
   return (neuron0x15ba8f0()*-0.295415);
}

double NNfunction_sb_cLuR::synapse0x15cce20() {
   return (neuron0x15bac30()*-0.526138);
}

double NNfunction_sb_cLuR::synapse0x15cce60() {
   return (neuron0x15baf70()*0.55941);
}

double NNfunction_sb_cLuR::synapse0x15c5020() {
   return (neuron0x15bb2b0()*-0.378965);
}

double NNfunction_sb_cLuR::synapse0x15c5060() {
   return (neuron0x15bb5f0()*-0.100037);
}

double NNfunction_sb_cLuR::synapse0x15c50a0() {
   return (neuron0x15bb930()*0.0920546);
}

double NNfunction_sb_cLuR::synapse0x15c50e0() {
   return (neuron0x15bbc70()*-0.262993);
}

double NNfunction_sb_cLuR::synapse0x15c5120() {
   return (neuron0x15bbfb0()*0.0575823);
}

double NNfunction_sb_cLuR::synapse0x15c5160() {
   return (neuron0x15bc2f0()*-0.131145);
}

double NNfunction_sb_cLuR::synapse0x15c51a0() {
   return (neuron0x15bc630()*0.473892);
}

double NNfunction_sb_cLuR::synapse0x15ccab0() {
   return (neuron0x15bc970()*-0.113257);
}

double NNfunction_sb_cLuR::synapse0x15ccaf0() {
   return (neuron0x15bced0()*-0.481358);
}

double NNfunction_sb_cLuR::synapse0x15c52f0() {
   return (neuron0x15bd0f0()*0.782615);
}

double NNfunction_sb_cLuR::synapse0x15c5330() {
   return (neuron0x15bd430()*-0.298422);
}

double NNfunction_sb_cLuR::synapse0x15c5370() {
   return (neuron0x15bd770()*-0.148866);
}

double NNfunction_sb_cLuR::synapse0x15c53b0() {
   return (neuron0x15bdab0()*0.0889136);
}

double NNfunction_sb_cLuR::synapse0x15c53f0() {
   return (neuron0x15bddf0()*-0.00627648);
}

double NNfunction_sb_cLuR::synapse0x15c5430() {
   return (neuron0x15be130()*0.150745);
}

double NNfunction_sb_cLuR::synapse0x15c57b0() {
   return (neuron0x15b9570()*-0.0266134);
}

double NNfunction_sb_cLuR::synapse0x15c57f0() {
   return (neuron0x15b98b0()*-0.204151);
}

double NNfunction_sb_cLuR::synapse0x15c5830() {
   return (neuron0x15b9bf0()*0.0224899);
}

double NNfunction_sb_cLuR::synapse0x15c5870() {
   return (neuron0x15b9f30()*0.59995);
}

double NNfunction_sb_cLuR::synapse0x15c58b0() {
   return (neuron0x15ba270()*0.00695884);
}

double NNfunction_sb_cLuR::synapse0x15c58f0() {
   return (neuron0x15ba5b0()*-0.0252192);
}

double NNfunction_sb_cLuR::synapse0x15c5930() {
   return (neuron0x15ba8f0()*0.00399919);
}

double NNfunction_sb_cLuR::synapse0x15c5970() {
   return (neuron0x15bac30()*-0.0472407);
}

double NNfunction_sb_cLuR::synapse0x15c59b0() {
   return (neuron0x15baf70()*0.0270666);
}

double NNfunction_sb_cLuR::synapse0x15c59f0() {
   return (neuron0x15bb2b0()*-0.00953457);
}

double NNfunction_sb_cLuR::synapse0x15c5a30() {
   return (neuron0x15bb5f0()*0.0343238);
}

double NNfunction_sb_cLuR::synapse0x15c5a70() {
   return (neuron0x15bb930()*0.0058342);
}

double NNfunction_sb_cLuR::synapse0x15c5ab0() {
   return (neuron0x15bbc70()*-0.229381);
}

double NNfunction_sb_cLuR::synapse0x15c5af0() {
   return (neuron0x15bbfb0()*-0.0300254);
}

double NNfunction_sb_cLuR::synapse0x15c5b30() {
   return (neuron0x15bc2f0()*-0.299936);
}

double NNfunction_sb_cLuR::synapse0x15c5b70() {
   return (neuron0x15bc630()*-0.032657);
}

double NNfunction_sb_cLuR::synapse0x15c5600() {
   return (neuron0x15bc970()*-0.0554553);
}

double NNfunction_sb_cLuR::synapse0x15c5640() {
   return (neuron0x15bced0()*0.00904383);
}

double NNfunction_sb_cLuR::synapse0x15c5cc0() {
   return (neuron0x15bd0f0()*0.00622383);
}

double NNfunction_sb_cLuR::synapse0x15c5d00() {
   return (neuron0x15bd430()*0.0999135);
}

double NNfunction_sb_cLuR::synapse0x15c5d40() {
   return (neuron0x15bd770()*0.0035784);
}

double NNfunction_sb_cLuR::synapse0x15c5d80() {
   return (neuron0x15bdab0()*0.0125969);
}

double NNfunction_sb_cLuR::synapse0x15c5dc0() {
   return (neuron0x15bddf0()*0.000443165);
}

double NNfunction_sb_cLuR::synapse0x15c5e00() {
   return (neuron0x15be130()*-0.028995);
}

double NNfunction_sb_cLuR::synapse0x15c5fd0() {
   return (neuron0x15b9570()*-0.026652);
}

double NNfunction_sb_cLuR::synapse0x15cf060() {
   return (neuron0x15b98b0()*-0.0310921);
}

double NNfunction_sb_cLuR::synapse0x15cf0a0() {
   return (neuron0x15b9bf0()*-0.0309578);
}

double NNfunction_sb_cLuR::synapse0x15cf0e0() {
   return (neuron0x15b9f30()*-0.119474);
}

double NNfunction_sb_cLuR::synapse0x15cf120() {
   return (neuron0x15ba270()*0.00554422);
}

double NNfunction_sb_cLuR::synapse0x15cf160() {
   return (neuron0x15ba5b0()*0.00227101);
}

double NNfunction_sb_cLuR::synapse0x15cf1a0() {
   return (neuron0x15ba8f0()*-0.00662517);
}

double NNfunction_sb_cLuR::synapse0x15cf1e0() {
   return (neuron0x15bac30()*0.0236091);
}

double NNfunction_sb_cLuR::synapse0x15cf220() {
   return (neuron0x15baf70()*0.0185906);
}

double NNfunction_sb_cLuR::synapse0x15cf260() {
   return (neuron0x15bb2b0()*-0.0442785);
}

double NNfunction_sb_cLuR::synapse0x15cf2a0() {
   return (neuron0x15bb5f0()*-0.0357953);
}

double NNfunction_sb_cLuR::synapse0x15cf2e0() {
   return (neuron0x15bb930()*0.417021);
}

double NNfunction_sb_cLuR::synapse0x15cf320() {
   return (neuron0x15bbc70()*0.0940653);
}

double NNfunction_sb_cLuR::synapse0x15cf360() {
   return (neuron0x15bbfb0()*-0.0745532);
}

double NNfunction_sb_cLuR::synapse0x15cf3a0() {
   return (neuron0x15bc2f0()*-0.0912845);
}

double NNfunction_sb_cLuR::synapse0x15cf3e0() {
   return (neuron0x15bc630()*0.168617);
}

double NNfunction_sb_cLuR::synapse0x15ceeb0() {
   return (neuron0x15bc970()*-0.0577237);
}

double NNfunction_sb_cLuR::synapse0x15ceef0() {
   return (neuron0x15bced0()*0.181513);
}

double NNfunction_sb_cLuR::synapse0x15cf530() {
   return (neuron0x15bd0f0()*0.246638);
}

double NNfunction_sb_cLuR::synapse0x15cf570() {
   return (neuron0x15bd430()*-0.0421965);
}

double NNfunction_sb_cLuR::synapse0x15cf5b0() {
   return (neuron0x15bd770()*0.0194112);
}

double NNfunction_sb_cLuR::synapse0x15cf5f0() {
   return (neuron0x15bdab0()*-0.010371);
}

double NNfunction_sb_cLuR::synapse0x15cf630() {
   return (neuron0x15bddf0()*-0.00344309);
}

double NNfunction_sb_cLuR::synapse0x15cf670() {
   return (neuron0x15be130()*0.0046218);
}

double NNfunction_sb_cLuR::synapse0x15cf9f0() {
   return (neuron0x15b9570()*-0.350399);
}

double NNfunction_sb_cLuR::synapse0x15cfa30() {
   return (neuron0x15b98b0()*0.323687);
}

double NNfunction_sb_cLuR::synapse0x15cfa70() {
   return (neuron0x15b9bf0()*0.0943027);
}

double NNfunction_sb_cLuR::synapse0x15cfab0() {
   return (neuron0x15b9f30()*1.12626);
}

double NNfunction_sb_cLuR::synapse0x15cfaf0() {
   return (neuron0x15ba270()*-0.17083);
}

double NNfunction_sb_cLuR::synapse0x15cfb30() {
   return (neuron0x15ba5b0()*-0.0520907);
}

double NNfunction_sb_cLuR::synapse0x15cfb70() {
   return (neuron0x15ba8f0()*-0.25057);
}

double NNfunction_sb_cLuR::synapse0x15cfbb0() {
   return (neuron0x15bac30()*0.290739);
}

double NNfunction_sb_cLuR::synapse0x15cfbf0() {
   return (neuron0x15baf70()*-0.108916);
}

double NNfunction_sb_cLuR::synapse0x15cfc30() {
   return (neuron0x15bb2b0()*-0.24258);
}

double NNfunction_sb_cLuR::synapse0x15cfc70() {
   return (neuron0x15bb5f0()*0.345326);
}

double NNfunction_sb_cLuR::synapse0x15cfcb0() {
   return (neuron0x15bb930()*-0.03838);
}

double NNfunction_sb_cLuR::synapse0x15cfcf0() {
   return (neuron0x15bbc70()*-0.628819);
}

double NNfunction_sb_cLuR::synapse0x15cfd30() {
   return (neuron0x15bbfb0()*0.272217);
}

double NNfunction_sb_cLuR::synapse0x15cfd70() {
   return (neuron0x15bc2f0()*0.196448);
}

double NNfunction_sb_cLuR::synapse0x15cfdb0() {
   return (neuron0x15bc630()*-0.123752);
}

double NNfunction_sb_cLuR::synapse0x15cf840() {
   return (neuron0x15bc970()*-0.0547427);
}

double NNfunction_sb_cLuR::synapse0x15cf880() {
   return (neuron0x15bced0()*0.276779);
}

double NNfunction_sb_cLuR::synapse0x15cff00() {
   return (neuron0x15bd0f0()*0.240567);
}

double NNfunction_sb_cLuR::synapse0x15cff40() {
   return (neuron0x15bd430()*-0.175622);
}

double NNfunction_sb_cLuR::synapse0x15cff80() {
   return (neuron0x15bd770()*-0.110019);
}

double NNfunction_sb_cLuR::synapse0x15cffc0() {
   return (neuron0x15bdab0()*-0.0388302);
}

double NNfunction_sb_cLuR::synapse0x15d0000() {
   return (neuron0x15bddf0()*-0.0175962);
}

double NNfunction_sb_cLuR::synapse0x15d0040() {
   return (neuron0x15be130()*0.16279);
}

double NNfunction_sb_cLuR::synapse0x15d03c0() {
   return (neuron0x15b9570()*-0.010531);
}

double NNfunction_sb_cLuR::synapse0x15d0400() {
   return (neuron0x15b98b0()*0.0134613);
}

double NNfunction_sb_cLuR::synapse0x15d0440() {
   return (neuron0x15b9bf0()*0.00812088);
}

double NNfunction_sb_cLuR::synapse0x15d0480() {
   return (neuron0x15b9f30()*3.11332);
}

double NNfunction_sb_cLuR::synapse0x15d04c0() {
   return (neuron0x15ba270()*0.00829613);
}

double NNfunction_sb_cLuR::synapse0x15d0500() {
   return (neuron0x15ba5b0()*0.00914003);
}

double NNfunction_sb_cLuR::synapse0x15d0540() {
   return (neuron0x15ba8f0()*-0.0310657);
}

double NNfunction_sb_cLuR::synapse0x15d0580() {
   return (neuron0x15bac30()*-0.00298405);
}

double NNfunction_sb_cLuR::synapse0x15d05c0() {
   return (neuron0x15baf70()*0.0135868);
}

double NNfunction_sb_cLuR::synapse0x15d0600() {
   return (neuron0x15bb2b0()*0.0209572);
}

double NNfunction_sb_cLuR::synapse0x15d0640() {
   return (neuron0x15bb5f0()*-0.00896079);
}

double NNfunction_sb_cLuR::synapse0x15d0680() {
   return (neuron0x15bb930()*0.017581);
}

double NNfunction_sb_cLuR::synapse0x15d06c0() {
   return (neuron0x15bbc70()*-0.380148);
}

double NNfunction_sb_cLuR::synapse0x15d0700() {
   return (neuron0x15bbfb0()*-0.0254263);
}

double NNfunction_sb_cLuR::synapse0x15d0740() {
   return (neuron0x15bc2f0()*-1.82243);
}

double NNfunction_sb_cLuR::synapse0x15d0780() {
   return (neuron0x15bc630()*-0.0282041);
}

double NNfunction_sb_cLuR::synapse0x15d0210() {
   return (neuron0x15bc970()*-0.0128235);
}

double NNfunction_sb_cLuR::synapse0x15d0250() {
   return (neuron0x15bced0()*0.0306442);
}

double NNfunction_sb_cLuR::synapse0x15d08d0() {
   return (neuron0x15bd0f0()*-0.00394454);
}

double NNfunction_sb_cLuR::synapse0x15d0910() {
   return (neuron0x15bd430()*0.012536);
}

double NNfunction_sb_cLuR::synapse0x15d0950() {
   return (neuron0x15bd770()*0.0131518);
}

double NNfunction_sb_cLuR::synapse0x15d0990() {
   return (neuron0x15bdab0()*-0.0153711);
}

double NNfunction_sb_cLuR::synapse0x15d09d0() {
   return (neuron0x15bddf0()*0.0213771);
}

double NNfunction_sb_cLuR::synapse0x15d0a10() {
   return (neuron0x15be130()*0.0027346);
}

double NNfunction_sb_cLuR::synapse0x15d0d90() {
   return (neuron0x15b9570()*-0.0288572);
}

double NNfunction_sb_cLuR::synapse0x15d0dd0() {
   return (neuron0x15b98b0()*-0.0322874);
}

double NNfunction_sb_cLuR::synapse0x15d0e10() {
   return (neuron0x15b9bf0()*-0.0155876);
}

double NNfunction_sb_cLuR::synapse0x15d0e50() {
   return (neuron0x15b9f30()*-0.0369291);
}

double NNfunction_sb_cLuR::synapse0x15d0e90() {
   return (neuron0x15ba270()*0.0597013);
}

double NNfunction_sb_cLuR::synapse0x15d0ed0() {
   return (neuron0x15ba5b0()*0.104563);
}

double NNfunction_sb_cLuR::synapse0x15d0f10() {
   return (neuron0x15ba8f0()*-0.0557044);
}

double NNfunction_sb_cLuR::synapse0x15d0f50() {
   return (neuron0x15bac30()*0.16217);
}

double NNfunction_sb_cLuR::synapse0x15d0f90() {
   return (neuron0x15baf70()*-0.000565862);
}

double NNfunction_sb_cLuR::synapse0x15d0fd0() {
   return (neuron0x15bb2b0()*-0.012266);
}

double NNfunction_sb_cLuR::synapse0x15d1010() {
   return (neuron0x15bb5f0()*0.02075);
}

double NNfunction_sb_cLuR::synapse0x15d1050() {
   return (neuron0x15bb930()*0.0674651);
}

double NNfunction_sb_cLuR::synapse0x15d1090() {
   return (neuron0x15bbc70()*-0.5848);
}

double NNfunction_sb_cLuR::synapse0x15d10d0() {
   return (neuron0x15bbfb0()*0.0221386);
}

double NNfunction_sb_cLuR::synapse0x15d1110() {
   return (neuron0x15bc2f0()*-0.353656);
}

double NNfunction_sb_cLuR::synapse0x15d1150() {
   return (neuron0x15bc630()*-0.010522);
}

double NNfunction_sb_cLuR::synapse0x15d0be0() {
   return (neuron0x15bc970()*0.0637431);
}

double NNfunction_sb_cLuR::synapse0x15d0c20() {
   return (neuron0x15bced0()*0.0142429);
}

double NNfunction_sb_cLuR::synapse0x15d12a0() {
   return (neuron0x15bd0f0()*0.0388405);
}

double NNfunction_sb_cLuR::synapse0x15d12e0() {
   return (neuron0x15bd430()*-0.0339471);
}

double NNfunction_sb_cLuR::synapse0x15d1320() {
   return (neuron0x15bd770()*-0.00773585);
}

double NNfunction_sb_cLuR::synapse0x15d1360() {
   return (neuron0x15bdab0()*-0.0161801);
}

double NNfunction_sb_cLuR::synapse0x15d13a0() {
   return (neuron0x15bddf0()*0.0117496);
}

double NNfunction_sb_cLuR::synapse0x15d13e0() {
   return (neuron0x15be130()*0.0158915);
}

double NNfunction_sb_cLuR::synapse0x15d1760() {
   return (neuron0x15b9570()*0.224871);
}

double NNfunction_sb_cLuR::synapse0x15d17a0() {
   return (neuron0x15b98b0()*-0.449833);
}

double NNfunction_sb_cLuR::synapse0x15d17e0() {
   return (neuron0x15b9bf0()*0.297894);
}

double NNfunction_sb_cLuR::synapse0x15d1820() {
   return (neuron0x15b9f30()*0.127542);
}

double NNfunction_sb_cLuR::synapse0x15d1860() {
   return (neuron0x15ba270()*-0.408206);
}

double NNfunction_sb_cLuR::synapse0x15d18a0() {
   return (neuron0x15ba5b0()*-0.177178);
}

double NNfunction_sb_cLuR::synapse0x15d18e0() {
   return (neuron0x15ba8f0()*-0.61427);
}

double NNfunction_sb_cLuR::synapse0x15d1920() {
   return (neuron0x15bac30()*-0.209038);
}

double NNfunction_sb_cLuR::synapse0x15d1960() {
   return (neuron0x15baf70()*0.651126);
}

double NNfunction_sb_cLuR::synapse0x15d19a0() {
   return (neuron0x15bb2b0()*-0.703118);
}

double NNfunction_sb_cLuR::synapse0x15d19e0() {
   return (neuron0x15bb5f0()*0.0052924);
}

double NNfunction_sb_cLuR::synapse0x15d1a20() {
   return (neuron0x15bb930()*-0.0516963);
}

double NNfunction_sb_cLuR::synapse0x15d1a60() {
   return (neuron0x15bbc70()*-0.213237);
}

double NNfunction_sb_cLuR::synapse0x15d1aa0() {
   return (neuron0x15bbfb0()*0.490782);
}

double NNfunction_sb_cLuR::synapse0x15d1ae0() {
   return (neuron0x15bc2f0()*-0.180415);
}

double NNfunction_sb_cLuR::synapse0x15d1b20() {
   return (neuron0x15bc630()*-0.186667);
}

double NNfunction_sb_cLuR::synapse0x15d15b0() {
   return (neuron0x15bc970()*-0.230848);
}

double NNfunction_sb_cLuR::synapse0x15d15f0() {
   return (neuron0x15bced0()*-0.00796657);
}

double NNfunction_sb_cLuR::synapse0x15d1c70() {
   return (neuron0x15bd0f0()*0.533285);
}

double NNfunction_sb_cLuR::synapse0x15d1cb0() {
   return (neuron0x15bd430()*-0.186709);
}

double NNfunction_sb_cLuR::synapse0x15d1cf0() {
   return (neuron0x15bd770()*0.163552);
}

double NNfunction_sb_cLuR::synapse0x15d1d30() {
   return (neuron0x15bdab0()*-0.360442);
}

double NNfunction_sb_cLuR::synapse0x15d1d70() {
   return (neuron0x15bddf0()*-0.0644665);
}

double NNfunction_sb_cLuR::synapse0x15d1db0() {
   return (neuron0x15be130()*-0.226433);
}

double NNfunction_sb_cLuR::synapse0x15d2130() {
   return (neuron0x15b9570()*-0.447597);
}

double NNfunction_sb_cLuR::synapse0x15d2170() {
   return (neuron0x15b98b0()*-0.264663);
}

double NNfunction_sb_cLuR::synapse0x15d21b0() {
   return (neuron0x15b9bf0()*-0.467018);
}

double NNfunction_sb_cLuR::synapse0x15d21f0() {
   return (neuron0x15b9f30()*0.0663681);
}

double NNfunction_sb_cLuR::synapse0x15d2230() {
   return (neuron0x15ba270()*0.0311299);
}

double NNfunction_sb_cLuR::synapse0x15d2270() {
   return (neuron0x15ba5b0()*0.310906);
}

double NNfunction_sb_cLuR::synapse0x15d22b0() {
   return (neuron0x15ba8f0()*0.0469841);
}

double NNfunction_sb_cLuR::synapse0x15d22f0() {
   return (neuron0x15bac30()*0.178838);
}

double NNfunction_sb_cLuR::synapse0x15d2330() {
   return (neuron0x15baf70()*0.0471315);
}

double NNfunction_sb_cLuR::synapse0x15d2370() {
   return (neuron0x15bb2b0()*0.0894225);
}

double NNfunction_sb_cLuR::synapse0x15d23b0() {
   return (neuron0x15bb5f0()*0.738053);
}

double NNfunction_sb_cLuR::synapse0x15d23f0() {
   return (neuron0x15bb930()*1.05054);
}

double NNfunction_sb_cLuR::synapse0x15d2430() {
   return (neuron0x15bbc70()*0.194528);
}

double NNfunction_sb_cLuR::synapse0x15d2470() {
   return (neuron0x15bbfb0()*0.382816);
}

double NNfunction_sb_cLuR::synapse0x15d24b0() {
   return (neuron0x15bc2f0()*-0.380256);
}

double NNfunction_sb_cLuR::synapse0x15d24f0() {
   return (neuron0x15bc630()*-0.550507);
}

double NNfunction_sb_cLuR::synapse0x15d1f80() {
   return (neuron0x15bc970()*-0.517714);
}

double NNfunction_sb_cLuR::synapse0x15d1fc0() {
   return (neuron0x15bced0()*-0.221181);
}

double NNfunction_sb_cLuR::synapse0x15d2640() {
   return (neuron0x15bd0f0()*0.199987);
}

double NNfunction_sb_cLuR::synapse0x15d2680() {
   return (neuron0x15bd430()*0.500961);
}

double NNfunction_sb_cLuR::synapse0x15d26c0() {
   return (neuron0x15bd770()*0.214508);
}

double NNfunction_sb_cLuR::synapse0x15d2700() {
   return (neuron0x15bdab0()*0.0796764);
}

double NNfunction_sb_cLuR::synapse0x15d2740() {
   return (neuron0x15bddf0()*0.0821142);
}

double NNfunction_sb_cLuR::synapse0x15d2780() {
   return (neuron0x15be130()*-0.387662);
}

double NNfunction_sb_cLuR::synapse0x15d2b00() {
   return (neuron0x15b9570()*0.00219864);
}

double NNfunction_sb_cLuR::synapse0x15d2b40() {
   return (neuron0x15b98b0()*0.0385553);
}

double NNfunction_sb_cLuR::synapse0x15d2b80() {
   return (neuron0x15b9bf0()*-0.0305248);
}

double NNfunction_sb_cLuR::synapse0x15d2bc0() {
   return (neuron0x15b9f30()*0.101295);
}

double NNfunction_sb_cLuR::synapse0x15d2c00() {
   return (neuron0x15ba270()*0.0142419);
}

double NNfunction_sb_cLuR::synapse0x15d2c40() {
   return (neuron0x15ba5b0()*0.0244344);
}

double NNfunction_sb_cLuR::synapse0x15d2c80() {
   return (neuron0x15ba8f0()*0.00062161);
}

double NNfunction_sb_cLuR::synapse0x15d2cc0() {
   return (neuron0x15bac30()*0.106256);
}

double NNfunction_sb_cLuR::synapse0x15d2d00() {
   return (neuron0x15baf70()*-0.00978251);
}

double NNfunction_sb_cLuR::synapse0x15d2d40() {
   return (neuron0x15bb2b0()*-0.00121584);
}

double NNfunction_sb_cLuR::synapse0x15d2d80() {
   return (neuron0x15bb5f0()*0.014462);
}

double NNfunction_sb_cLuR::synapse0x15d2dc0() {
   return (neuron0x15bb930()*-0.0105513);
}

double NNfunction_sb_cLuR::synapse0x15d2e00() {
   return (neuron0x15bbc70()*0.62267);
}

double NNfunction_sb_cLuR::synapse0x15d2e40() {
   return (neuron0x15bbfb0()*0.0168122);
}

double NNfunction_sb_cLuR::synapse0x15d2e80() {
   return (neuron0x15bc2f0()*0.755912);
}

double NNfunction_sb_cLuR::synapse0x15d2ec0() {
   return (neuron0x15bc630()*-0.00270201);
}

double NNfunction_sb_cLuR::synapse0x15d2950() {
   return (neuron0x15bc970()*0.0317494);
}

double NNfunction_sb_cLuR::synapse0x15d2990() {
   return (neuron0x15bced0()*-0.0098516);
}

double NNfunction_sb_cLuR::synapse0x15d3010() {
   return (neuron0x15bd0f0()*0.0017122);
}

double NNfunction_sb_cLuR::synapse0x15d3050() {
   return (neuron0x15bd430()*-0.0147812);
}

double NNfunction_sb_cLuR::synapse0x15d3090() {
   return (neuron0x15bd770()*-0.00513552);
}

double NNfunction_sb_cLuR::synapse0x15d30d0() {
   return (neuron0x15bdab0()*-0.0142926);
}

double NNfunction_sb_cLuR::synapse0x15d3110() {
   return (neuron0x15bddf0()*0.0138844);
}

double NNfunction_sb_cLuR::synapse0x15d3150() {
   return (neuron0x15be130()*0.00420033);
}

double NNfunction_sb_cLuR::synapse0x15d34d0() {
   return (neuron0x15b9570()*0.00953957);
}

double NNfunction_sb_cLuR::synapse0x15d3510() {
   return (neuron0x15b98b0()*-0.237189);
}

double NNfunction_sb_cLuR::synapse0x15d3550() {
   return (neuron0x15b9bf0()*0.0946013);
}

double NNfunction_sb_cLuR::synapse0x15d3590() {
   return (neuron0x15b9f30()*2.23678);
}

double NNfunction_sb_cLuR::synapse0x15d35d0() {
   return (neuron0x15ba270()*-0.0051678);
}

double NNfunction_sb_cLuR::synapse0x15d3610() {
   return (neuron0x15ba5b0()*0.0131213);
}

double NNfunction_sb_cLuR::synapse0x15d3650() {
   return (neuron0x15ba8f0()*0.0204186);
}

double NNfunction_sb_cLuR::synapse0x15d3690() {
   return (neuron0x15bac30()*0.10455);
}

double NNfunction_sb_cLuR::synapse0x15d36d0() {
   return (neuron0x15baf70()*-0.180295);
}

double NNfunction_sb_cLuR::synapse0x15d3710() {
   return (neuron0x15bb2b0()*-0.129455);
}

double NNfunction_sb_cLuR::synapse0x15d3750() {
   return (neuron0x15bb5f0()*0.0205582);
}

double NNfunction_sb_cLuR::synapse0x15d3790() {
   return (neuron0x15bb930()*0.0634847);
}

double NNfunction_sb_cLuR::synapse0x15d37d0() {
   return (neuron0x15bbc70()*-0.25889);
}

double NNfunction_sb_cLuR::synapse0x15d3810() {
   return (neuron0x15bbfb0()*0.0352067);
}

double NNfunction_sb_cLuR::synapse0x15d3850() {
   return (neuron0x15bc2f0()*-0.909721);
}

double NNfunction_sb_cLuR::synapse0x15d3890() {
   return (neuron0x15bc630()*0.0740578);
}

double NNfunction_sb_cLuR::synapse0x15d3320() {
   return (neuron0x15bc970()*-0.011307);
}

double NNfunction_sb_cLuR::synapse0x15d3360() {
   return (neuron0x15bced0()*0.258561);
}

double NNfunction_sb_cLuR::synapse0x15d39e0() {
   return (neuron0x15bd0f0()*0.166376);
}

double NNfunction_sb_cLuR::synapse0x15d3a20() {
   return (neuron0x15bd430()*-0.0231485);
}

double NNfunction_sb_cLuR::synapse0x15d3a60() {
   return (neuron0x15bd770()*-0.0689129);
}

double NNfunction_sb_cLuR::synapse0x15d3aa0() {
   return (neuron0x15bdab0()*0.00179711);
}

double NNfunction_sb_cLuR::synapse0x15d3ae0() {
   return (neuron0x15bddf0()*-0.03541);
}

double NNfunction_sb_cLuR::synapse0x15d3b20() {
   return (neuron0x15be130()*-0.0218413);
}

double NNfunction_sb_cLuR::synapse0x15d3ea0() {
   return (neuron0x15b9570()*-0.00527546);
}

double NNfunction_sb_cLuR::synapse0x15c8470() {
   return (neuron0x15b98b0()*-0.00894225);
}

double NNfunction_sb_cLuR::synapse0x15c84b0() {
   return (neuron0x15b9bf0()*-0.00526433);
}

double NNfunction_sb_cLuR::synapse0x15c84f0() {
   return (neuron0x15b9f30()*-1.78032);
}

double NNfunction_sb_cLuR::synapse0x15c8740() {
   return (neuron0x15ba270()*0.00404766);
}

double NNfunction_sb_cLuR::synapse0x15c8780() {
   return (neuron0x15ba5b0()*-0.00211526);
}

double NNfunction_sb_cLuR::synapse0x15c87c0() {
   return (neuron0x15ba8f0()*0.00602204);
}

double NNfunction_sb_cLuR::synapse0x15c8a10() {
   return (neuron0x15bac30()*0.0109025);
}

double NNfunction_sb_cLuR::synapse0x15c8a50() {
   return (neuron0x15baf70()*-0.00365419);
}

double NNfunction_sb_cLuR::synapse0x15c8ca0() {
   return (neuron0x15bb2b0()*-0.0102524);
}

double NNfunction_sb_cLuR::synapse0x15c8ce0() {
   return (neuron0x15bb5f0()*0.00101285);
}

double NNfunction_sb_cLuR::synapse0x15c8d20() {
   return (neuron0x15bb930()*0.00234133);
}

double NNfunction_sb_cLuR::synapse0x15c8f70() {
   return (neuron0x15bbc70()*0.0404939);
}

double NNfunction_sb_cLuR::synapse0x15c8fb0() {
   return (neuron0x15bbfb0()*0.0172495);
}

double NNfunction_sb_cLuR::synapse0x15c9200() {
   return (neuron0x15bc2f0()*0.0912958);
}

double NNfunction_sb_cLuR::synapse0x15c9240() {
   return (neuron0x15bc630()*0.0132589);
}

double NNfunction_sb_cLuR::synapse0x15d3cf0() {
   return (neuron0x15bc970()*0.0117323);
}

double NNfunction_sb_cLuR::synapse0x15d3d30() {
   return (neuron0x15bced0()*-0.00380028);
}

double NNfunction_sb_cLuR::synapse0x15c9390() {
   return (neuron0x15bd0f0()*-0.00168895);
}

double NNfunction_sb_cLuR::synapse0x15c98a0() {
   return (neuron0x15bd430()*-0.00360638);
}

double NNfunction_sb_cLuR::synapse0x15c98e0() {
   return (neuron0x15bd770()*-0.0103531);
}

double NNfunction_sb_cLuR::synapse0x15c9920() {
   return (neuron0x15bdab0()*0.0086696);
}

double NNfunction_sb_cLuR::synapse0x15c9b70() {
   return (neuron0x15bddf0()*-0.00574885);
}

double NNfunction_sb_cLuR::synapse0x15c9bb0() {
   return (neuron0x15be130()*0.00470275);
}

double NNfunction_sb_cLuR::synapse0x15c9460() {
   return (neuron0x15b9570()*-0.0186201);
}

double NNfunction_sb_cLuR::synapse0x15c94a0() {
   return (neuron0x15b98b0()*-0.108892);
}

double NNfunction_sb_cLuR::synapse0x15c94e0() {
   return (neuron0x15b9bf0()*0.0241539);
}

double NNfunction_sb_cLuR::synapse0x15c9520() {
   return (neuron0x15b9f30()*-1.13768);
}

double NNfunction_sb_cLuR::synapse0x15c9ea0() {
   return (neuron0x15ba270()*0.00956747);
}

double NNfunction_sb_cLuR::synapse0x15d61f0() {
   return (neuron0x15ba5b0()*-0.00494462);
}

double NNfunction_sb_cLuR::synapse0x15d6230() {
   return (neuron0x15ba8f0()*-0.00170052);
}

double NNfunction_sb_cLuR::synapse0x15d6270() {
   return (neuron0x15bac30()*-0.00306433);
}

double NNfunction_sb_cLuR::synapse0x15d62b0() {
   return (neuron0x15baf70()*-0.00953449);
}

double NNfunction_sb_cLuR::synapse0x15d62f0() {
   return (neuron0x15bb2b0()*-0.0333894);
}

double NNfunction_sb_cLuR::synapse0x15d6330() {
   return (neuron0x15bb5f0()*-0.00146016);
}

double NNfunction_sb_cLuR::synapse0x15d6370() {
   return (neuron0x15bb930()*-0.0163737);
}

double NNfunction_sb_cLuR::synapse0x15d63b0() {
   return (neuron0x15bbc70()*-0.379588);
}

double NNfunction_sb_cLuR::synapse0x15d63f0() {
   return (neuron0x15bbfb0()*0.0101055);
}

double NNfunction_sb_cLuR::synapse0x15d6430() {
   return (neuron0x15bc2f0()*-0.306103);
}

double NNfunction_sb_cLuR::synapse0x15d6470() {
   return (neuron0x15bc630()*-0.00624718);
}

double NNfunction_sb_cLuR::synapse0x15c9d80() {
   return (neuron0x15bc970()*-0.00579775);
}

double NNfunction_sb_cLuR::synapse0x15c9dc0() {
   return (neuron0x15bced0()*0.0274774);
}

double NNfunction_sb_cLuR::synapse0x15d65c0() {
   return (neuron0x15bd0f0()*0.00286185);
}

double NNfunction_sb_cLuR::synapse0x15d6600() {
   return (neuron0x15bd430()*-0.00331855);
}

double NNfunction_sb_cLuR::synapse0x15d6640() {
   return (neuron0x15bd770()*-0.013515);
}

double NNfunction_sb_cLuR::synapse0x15d6680() {
   return (neuron0x15bdab0()*0.00421929);
}

double NNfunction_sb_cLuR::synapse0x15d66c0() {
   return (neuron0x15bddf0()*-0.00747968);
}

double NNfunction_sb_cLuR::synapse0x15d6700() {
   return (neuron0x15be130()*-0.00346299);
}

double NNfunction_sb_cLuR::synapse0x15d6a80() {
   return (neuron0x15b9570()*-0.38816);
}

double NNfunction_sb_cLuR::synapse0x15d6ac0() {
   return (neuron0x15b98b0()*0.116144);
}

double NNfunction_sb_cLuR::synapse0x15d6b00() {
   return (neuron0x15b9bf0()*-0.375307);
}

double NNfunction_sb_cLuR::synapse0x15d6b40() {
   return (neuron0x15b9f30()*0.632404);
}

double NNfunction_sb_cLuR::synapse0x15d6b80() {
   return (neuron0x15ba270()*0.0149558);
}

double NNfunction_sb_cLuR::synapse0x15d6bc0() {
   return (neuron0x15ba5b0()*0.290371);
}

double NNfunction_sb_cLuR::synapse0x15d6c00() {
   return (neuron0x15ba8f0()*0.0410108);
}

double NNfunction_sb_cLuR::synapse0x15d6c40() {
   return (neuron0x15bac30()*-0.139408);
}

double NNfunction_sb_cLuR::synapse0x15d6c80() {
   return (neuron0x15baf70()*-0.158945);
}

double NNfunction_sb_cLuR::synapse0x15d6cc0() {
   return (neuron0x15bb2b0()*-0.402034);
}

double NNfunction_sb_cLuR::synapse0x15d6d00() {
   return (neuron0x15bb5f0()*0.224946);
}

double NNfunction_sb_cLuR::synapse0x15d6d40() {
   return (neuron0x15bb930()*-0.239458);
}

double NNfunction_sb_cLuR::synapse0x15d6d80() {
   return (neuron0x15bbc70()*0.704816);
}

double NNfunction_sb_cLuR::synapse0x15d6dc0() {
   return (neuron0x15bbfb0()*0.0819682);
}

double NNfunction_sb_cLuR::synapse0x15d6e00() {
   return (neuron0x15bc2f0()*-0.0416154);
}

double NNfunction_sb_cLuR::synapse0x15d6e40() {
   return (neuron0x15bc630()*0.0629963);
}

double NNfunction_sb_cLuR::synapse0x15d68d0() {
   return (neuron0x15bc970()*0.0825965);
}

double NNfunction_sb_cLuR::synapse0x15d6910() {
   return (neuron0x15bced0()*0.222275);
}

double NNfunction_sb_cLuR::synapse0x15d6f90() {
   return (neuron0x15bd0f0()*-0.233774);
}

double NNfunction_sb_cLuR::synapse0x15d6fd0() {
   return (neuron0x15bd430()*0.733733);
}

double NNfunction_sb_cLuR::synapse0x15d7010() {
   return (neuron0x15bd770()*-0.197006);
}

double NNfunction_sb_cLuR::synapse0x15d7050() {
   return (neuron0x15bdab0()*-0.070479);
}

double NNfunction_sb_cLuR::synapse0x15d7090() {
   return (neuron0x15bddf0()*0.0242977);
}

double NNfunction_sb_cLuR::synapse0x15d70d0() {
   return (neuron0x15be130()*-0.242305);
}

double NNfunction_sb_cLuR::synapse0x15d7450() {
   return (neuron0x15b9570()*0.0183019);
}

double NNfunction_sb_cLuR::synapse0x15d7490() {
   return (neuron0x15b98b0()*0.0366737);
}

double NNfunction_sb_cLuR::synapse0x15d74d0() {
   return (neuron0x15b9bf0()*-0.0128093);
}

double NNfunction_sb_cLuR::synapse0x15d7510() {
   return (neuron0x15b9f30()*-1.41458);
}

double NNfunction_sb_cLuR::synapse0x15d7550() {
   return (neuron0x15ba270()*-0.0153783);
}

double NNfunction_sb_cLuR::synapse0x15d7590() {
   return (neuron0x15ba5b0()*-0.0666245);
}

double NNfunction_sb_cLuR::synapse0x15d75d0() {
   return (neuron0x15ba8f0()*0.0518139);
}

double NNfunction_sb_cLuR::synapse0x15d7610() {
   return (neuron0x15bac30()*0.108869);
}

double NNfunction_sb_cLuR::synapse0x15d7650() {
   return (neuron0x15baf70()*0.0408763);
}

double NNfunction_sb_cLuR::synapse0x15d7690() {
   return (neuron0x15bb2b0()*-0.00937905);
}

double NNfunction_sb_cLuR::synapse0x15d76d0() {
   return (neuron0x15bb5f0()*0.0389334);
}

double NNfunction_sb_cLuR::synapse0x15d7710() {
   return (neuron0x15bb930()*0.0143116);
}

double NNfunction_sb_cLuR::synapse0x15d7750() {
   return (neuron0x15bbc70()*-1.15764);
}

double NNfunction_sb_cLuR::synapse0x15d7790() {
   return (neuron0x15bbfb0()*0.0217665);
}

double NNfunction_sb_cLuR::synapse0x15d77d0() {
   return (neuron0x15bc2f0()*-0.649268);
}

double NNfunction_sb_cLuR::synapse0x15d7810() {
   return (neuron0x15bc630()*0.0521877);
}

double NNfunction_sb_cLuR::synapse0x15d72a0() {
   return (neuron0x15bc970()*-0.0860252);
}

double NNfunction_sb_cLuR::synapse0x15d72e0() {
   return (neuron0x15bced0()*-0.0457145);
}

double NNfunction_sb_cLuR::synapse0x15d7960() {
   return (neuron0x15bd0f0()*-0.0515006);
}

double NNfunction_sb_cLuR::synapse0x15d79a0() {
   return (neuron0x15bd430()*0.0339758);
}

double NNfunction_sb_cLuR::synapse0x15d79e0() {
   return (neuron0x15bd770()*0.027923);
}

double NNfunction_sb_cLuR::synapse0x15d7a20() {
   return (neuron0x15bdab0()*0.0112149);
}

double NNfunction_sb_cLuR::synapse0x15d7a60() {
   return (neuron0x15bddf0()*-0.0306674);
}

double NNfunction_sb_cLuR::synapse0x15d7aa0() {
   return (neuron0x15be130()*-0.00570617);
}

double NNfunction_sb_cLuR::synapse0x15d7e20() {
   return (neuron0x15b9570()*0.0178121);
}

double NNfunction_sb_cLuR::synapse0x15d7e60() {
   return (neuron0x15b98b0()*-0.0125959);
}

double NNfunction_sb_cLuR::synapse0x15d7ea0() {
   return (neuron0x15b9bf0()*-0.0244424);
}

double NNfunction_sb_cLuR::synapse0x15d7ee0() {
   return (neuron0x15b9f30()*12.8207);
}

double NNfunction_sb_cLuR::synapse0x15d7f20() {
   return (neuron0x15ba270()*0.010483);
}

double NNfunction_sb_cLuR::synapse0x15d7f60() {
   return (neuron0x15ba5b0()*-0.0266971);
}

double NNfunction_sb_cLuR::synapse0x15d7fa0() {
   return (neuron0x15ba8f0()*0.0150104);
}

double NNfunction_sb_cLuR::synapse0x15d7fe0() {
   return (neuron0x15bac30()*0.00687009);
}

double NNfunction_sb_cLuR::synapse0x15d8020() {
   return (neuron0x15baf70()*-0.0252271);
}

double NNfunction_sb_cLuR::synapse0x15d8060() {
   return (neuron0x15bb2b0()*-0.00543533);
}

double NNfunction_sb_cLuR::synapse0x15d80a0() {
   return (neuron0x15bb5f0()*-0.0249859);
}

double NNfunction_sb_cLuR::synapse0x15d80e0() {
   return (neuron0x15bb930()*-0.00942489);
}

double NNfunction_sb_cLuR::synapse0x15d8120() {
   return (neuron0x15bbc70()*0.313104);
}

double NNfunction_sb_cLuR::synapse0x15d8160() {
   return (neuron0x15bbfb0()*0.00383248);
}

double NNfunction_sb_cLuR::synapse0x15d81a0() {
   return (neuron0x15bc2f0()*0.243181);
}

double NNfunction_sb_cLuR::synapse0x15d81e0() {
   return (neuron0x15bc630()*-0.00586581);
}

double NNfunction_sb_cLuR::synapse0x15d7c70() {
   return (neuron0x15bc970()*0.0139888);
}

double NNfunction_sb_cLuR::synapse0x15d7cb0() {
   return (neuron0x15bced0()*-0.00616606);
}

double NNfunction_sb_cLuR::synapse0x15d8330() {
   return (neuron0x15bd0f0()*-0.0256662);
}

double NNfunction_sb_cLuR::synapse0x15d8370() {
   return (neuron0x15bd430()*-0.0105592);
}

double NNfunction_sb_cLuR::synapse0x15d83b0() {
   return (neuron0x15bd770()*0.0101845);
}

double NNfunction_sb_cLuR::synapse0x15d83f0() {
   return (neuron0x15bdab0()*0.0278143);
}

double NNfunction_sb_cLuR::synapse0x15d8430() {
   return (neuron0x15bddf0()*-0.0287555);
}

double NNfunction_sb_cLuR::synapse0x15d8470() {
   return (neuron0x15be130()*0.0234303);
}

double NNfunction_sb_cLuR::synapse0x15d87f0() {
   return (neuron0x15b9570()*-0.128351);
}

double NNfunction_sb_cLuR::synapse0x15d8830() {
   return (neuron0x15b98b0()*-0.0619125);
}

double NNfunction_sb_cLuR::synapse0x15d8870() {
   return (neuron0x15b9bf0()*-0.0194144);
}

double NNfunction_sb_cLuR::synapse0x15d88b0() {
   return (neuron0x15b9f30()*-0.0911654);
}

double NNfunction_sb_cLuR::synapse0x15d88f0() {
   return (neuron0x15ba270()*-0.0583445);
}

double NNfunction_sb_cLuR::synapse0x15d8930() {
   return (neuron0x15ba5b0()*0.165489);
}

double NNfunction_sb_cLuR::synapse0x15d8970() {
   return (neuron0x15ba8f0()*0.583362);
}

double NNfunction_sb_cLuR::synapse0x15d89b0() {
   return (neuron0x15bac30()*-0.139691);
}

double NNfunction_sb_cLuR::synapse0x15d89f0() {
   return (neuron0x15baf70()*0.072032);
}

double NNfunction_sb_cLuR::synapse0x15d8a30() {
   return (neuron0x15bb2b0()*0.0828572);
}

double NNfunction_sb_cLuR::synapse0x15d8a70() {
   return (neuron0x15bb5f0()*0.121052);
}

double NNfunction_sb_cLuR::synapse0x15d8ab0() {
   return (neuron0x15bb930()*0.210803);
}

double NNfunction_sb_cLuR::synapse0x15d8af0() {
   return (neuron0x15bbc70()*-1.8584);
}

double NNfunction_sb_cLuR::synapse0x15d8b30() {
   return (neuron0x15bbfb0()*0.213706);
}

double NNfunction_sb_cLuR::synapse0x15d8b70() {
   return (neuron0x15bc2f0()*0.143205);
}

double NNfunction_sb_cLuR::synapse0x15d8bb0() {
   return (neuron0x15bc630()*-0.0150878);
}

double NNfunction_sb_cLuR::synapse0x15d8640() {
   return (neuron0x15bc970()*0.299705);
}

double NNfunction_sb_cLuR::synapse0x15d8680() {
   return (neuron0x15bced0()*0.299612);
}

double NNfunction_sb_cLuR::synapse0x15d8d00() {
   return (neuron0x15bd0f0()*0.197628);
}

double NNfunction_sb_cLuR::synapse0x15d8d40() {
   return (neuron0x15bd430()*0.0409455);
}

double NNfunction_sb_cLuR::synapse0x15d8d80() {
   return (neuron0x15bd770()*0.0928329);
}

double NNfunction_sb_cLuR::synapse0x15d8dc0() {
   return (neuron0x15bdab0()*-0.201465);
}

double NNfunction_sb_cLuR::synapse0x15d8e00() {
   return (neuron0x15bddf0()*0.172657);
}

double NNfunction_sb_cLuR::synapse0x15d8e40() {
   return (neuron0x15be130()*-0.0185889);
}

double NNfunction_sb_cLuR::synapse0x15d91c0() {
   return (neuron0x15b9570()*0.484035);
}

double NNfunction_sb_cLuR::synapse0x15d9200() {
   return (neuron0x15b98b0()*-0.722688);
}

double NNfunction_sb_cLuR::synapse0x15d9240() {
   return (neuron0x15b9bf0()*-0.335296);
}

double NNfunction_sb_cLuR::synapse0x15d9280() {
   return (neuron0x15b9f30()*1.0026);
}

double NNfunction_sb_cLuR::synapse0x15d92c0() {
   return (neuron0x15ba270()*0.000889003);
}

double NNfunction_sb_cLuR::synapse0x15d9300() {
   return (neuron0x15ba5b0()*0.0545811);
}

double NNfunction_sb_cLuR::synapse0x15d9340() {
   return (neuron0x15ba8f0()*0.162694);
}

double NNfunction_sb_cLuR::synapse0x15d9380() {
   return (neuron0x15bac30()*0.0267238);
}

double NNfunction_sb_cLuR::synapse0x15d93c0() {
   return (neuron0x15baf70()*0.20974);
}

double NNfunction_sb_cLuR::synapse0x15d9400() {
   return (neuron0x15bb2b0()*0.0529244);
}

double NNfunction_sb_cLuR::synapse0x15d9440() {
   return (neuron0x15bb5f0()*0.0942744);
}

double NNfunction_sb_cLuR::synapse0x15d9480() {
   return (neuron0x15bb930()*0.0600526);
}

double NNfunction_sb_cLuR::synapse0x15d94c0() {
   return (neuron0x15bbc70()*-0.141732);
}

double NNfunction_sb_cLuR::synapse0x15d9500() {
   return (neuron0x15bbfb0()*-0.268382);
}

double NNfunction_sb_cLuR::synapse0x15d9540() {
   return (neuron0x15bc2f0()*-0.235186);
}

double NNfunction_sb_cLuR::synapse0x15d9580() {
   return (neuron0x15bc630()*-0.0802647);
}

double NNfunction_sb_cLuR::synapse0x15d9010() {
   return (neuron0x15bc970()*0.277271);
}

double NNfunction_sb_cLuR::synapse0x15d9050() {
   return (neuron0x15bced0()*-0.158688);
}

double NNfunction_sb_cLuR::synapse0x15d96d0() {
   return (neuron0x15bd0f0()*-0.195003);
}

double NNfunction_sb_cLuR::synapse0x15d9710() {
   return (neuron0x15bd430()*-0.51038);
}

double NNfunction_sb_cLuR::synapse0x15d9750() {
   return (neuron0x15bd770()*0.148238);
}

double NNfunction_sb_cLuR::synapse0x15d9790() {
   return (neuron0x15bdab0()*-0.0969205);
}

double NNfunction_sb_cLuR::synapse0x15d97d0() {
   return (neuron0x15bddf0()*0.179596);
}

double NNfunction_sb_cLuR::synapse0x15d9810() {
   return (neuron0x15be130()*-0.0779166);
}

double NNfunction_sb_cLuR::synapse0x15d9b90() {
   return (neuron0x15b9570()*-0.47318);
}

double NNfunction_sb_cLuR::synapse0x15d9bd0() {
   return (neuron0x15b98b0()*0.343606);
}

double NNfunction_sb_cLuR::synapse0x15d9c10() {
   return (neuron0x15b9bf0()*-0.319062);
}

double NNfunction_sb_cLuR::synapse0x15d9c50() {
   return (neuron0x15b9f30()*0.153372);
}

double NNfunction_sb_cLuR::synapse0x15d9c90() {
   return (neuron0x15ba270()*0.337958);
}

double NNfunction_sb_cLuR::synapse0x15d9cd0() {
   return (neuron0x15ba5b0()*0.400001);
}

double NNfunction_sb_cLuR::synapse0x15d9d10() {
   return (neuron0x15ba8f0()*-0.701134);
}

double NNfunction_sb_cLuR::synapse0x15d9d50() {
   return (neuron0x15bac30()*0.297194);
}

double NNfunction_sb_cLuR::synapse0x15d9d90() {
   return (neuron0x15baf70()*1.05849);
}

double NNfunction_sb_cLuR::synapse0x15d9dd0() {
   return (neuron0x15bb2b0()*0.655475);
}

double NNfunction_sb_cLuR::synapse0x15d9e10() {
   return (neuron0x15bb5f0()*0.384439);
}

double NNfunction_sb_cLuR::synapse0x15d9e50() {
   return (neuron0x15bb930()*0.240813);
}

double NNfunction_sb_cLuR::synapse0x15d9e90() {
   return (neuron0x15bbc70()*0.279426);
}

double NNfunction_sb_cLuR::synapse0x15d9ed0() {
   return (neuron0x15bbfb0()*0.242549);
}

double NNfunction_sb_cLuR::synapse0x15d9f10() {
   return (neuron0x15bc2f0()*-0.00953343);
}

double NNfunction_sb_cLuR::synapse0x15d9f50() {
   return (neuron0x15bc630()*0.405601);
}

double NNfunction_sb_cLuR::synapse0x15d99e0() {
   return (neuron0x15bc970()*-0.102224);
}

double NNfunction_sb_cLuR::synapse0x15d9a20() {
   return (neuron0x15bced0()*0.216739);
}

double NNfunction_sb_cLuR::synapse0x15da0a0() {
   return (neuron0x15bd0f0()*-0.404777);
}

double NNfunction_sb_cLuR::synapse0x15da0e0() {
   return (neuron0x15bd430()*-0.500629);
}

double NNfunction_sb_cLuR::synapse0x15da120() {
   return (neuron0x15bd770()*0.217801);
}

double NNfunction_sb_cLuR::synapse0x15da160() {
   return (neuron0x15bdab0()*-0.331501);
}

double NNfunction_sb_cLuR::synapse0x15da1a0() {
   return (neuron0x15bddf0()*-0.57624);
}

double NNfunction_sb_cLuR::synapse0x15da1e0() {
   return (neuron0x15be130()*-0.0068317);
}

double NNfunction_sb_cLuR::synapse0x15da560() {
   return (neuron0x15b9570()*-0.193344);
}

double NNfunction_sb_cLuR::synapse0x15da5a0() {
   return (neuron0x15b98b0()*-0.110283);
}

double NNfunction_sb_cLuR::synapse0x15da5e0() {
   return (neuron0x15b9bf0()*-0.249608);
}

double NNfunction_sb_cLuR::synapse0x15da620() {
   return (neuron0x15b9f30()*0.478367);
}

double NNfunction_sb_cLuR::synapse0x15da660() {
   return (neuron0x15ba270()*0.468087);
}

double NNfunction_sb_cLuR::synapse0x15da6a0() {
   return (neuron0x15ba5b0()*0.468011);
}

double NNfunction_sb_cLuR::synapse0x15da6e0() {
   return (neuron0x15ba8f0()*0.117323);
}

double NNfunction_sb_cLuR::synapse0x15da720() {
   return (neuron0x15bac30()*0.0561896);
}

double NNfunction_sb_cLuR::synapse0x15da760() {
   return (neuron0x15baf70()*-0.0741433);
}

double NNfunction_sb_cLuR::synapse0x15da7a0() {
   return (neuron0x15bb2b0()*-0.315449);
}

double NNfunction_sb_cLuR::synapse0x15da7e0() {
   return (neuron0x15bb5f0()*-0.0326649);
}

double NNfunction_sb_cLuR::synapse0x15da820() {
   return (neuron0x15bb930()*0.142576);
}

double NNfunction_sb_cLuR::synapse0x15da860() {
   return (neuron0x15bbc70()*-0.0035763);
}

double NNfunction_sb_cLuR::synapse0x15da8a0() {
   return (neuron0x15bbfb0()*0.142098);
}

double NNfunction_sb_cLuR::synapse0x15da8e0() {
   return (neuron0x15bc2f0()*0.488493);
}

double NNfunction_sb_cLuR::synapse0x15da920() {
   return (neuron0x15bc630()*0.673012);
}

double NNfunction_sb_cLuR::synapse0x15da3b0() {
   return (neuron0x15bc970()*-0.334236);
}

double NNfunction_sb_cLuR::synapse0x15da3f0() {
   return (neuron0x15bced0()*0.153918);
}

double NNfunction_sb_cLuR::synapse0x15daa70() {
   return (neuron0x15bd0f0()*0.454596);
}

double NNfunction_sb_cLuR::synapse0x15daab0() {
   return (neuron0x15bd430()*-0.00481656);
}

double NNfunction_sb_cLuR::synapse0x15daaf0() {
   return (neuron0x15bd770()*0.259191);
}

double NNfunction_sb_cLuR::synapse0x15dab30() {
   return (neuron0x15bdab0()*0.284403);
}

double NNfunction_sb_cLuR::synapse0x15dab70() {
   return (neuron0x15bddf0()*-0.239532);
}

double NNfunction_sb_cLuR::synapse0x15dabb0() {
   return (neuron0x15be130()*0.0640471);
}

double NNfunction_sb_cLuR::synapse0x15c3660() {
   return (neuron0x15b9570()*0.0145294);
}

double NNfunction_sb_cLuR::synapse0x15c36a0() {
   return (neuron0x15b98b0()*0.0503807);
}

double NNfunction_sb_cLuR::synapse0x15c36e0() {
   return (neuron0x15b9bf0()*-0.000378028);
}

double NNfunction_sb_cLuR::synapse0x15c3720() {
   return (neuron0x15b9f30()*-0.262177);
}

double NNfunction_sb_cLuR::synapse0x15c3760() {
   return (neuron0x15ba270()*-0.0225874);
}

double NNfunction_sb_cLuR::synapse0x15c37a0() {
   return (neuron0x15ba5b0()*0.0237989);
}

double NNfunction_sb_cLuR::synapse0x15c37e0() {
   return (neuron0x15ba8f0()*0.0672793);
}

double NNfunction_sb_cLuR::synapse0x15c3820() {
   return (neuron0x15bac30()*0.0230377);
}

double NNfunction_sb_cLuR::synapse0x15db340() {
   return (neuron0x15baf70()*-0.0633296);
}

double NNfunction_sb_cLuR::synapse0x15db380() {
   return (neuron0x15bb2b0()*-0.0325572);
}

double NNfunction_sb_cLuR::synapse0x15db3c0() {
   return (neuron0x15bb5f0()*-0.0380346);
}

double NNfunction_sb_cLuR::synapse0x15db400() {
   return (neuron0x15bb930()*-0.0570937);
}

double NNfunction_sb_cLuR::synapse0x15db440() {
   return (neuron0x15bbc70()*0.549337);
}

double NNfunction_sb_cLuR::synapse0x15db480() {
   return (neuron0x15bbfb0()*-0.0173006);
}

double NNfunction_sb_cLuR::synapse0x15db4c0() {
   return (neuron0x15bc2f0()*0.333072);
}

double NNfunction_sb_cLuR::synapse0x15db500() {
   return (neuron0x15bc630()*0.0147254);
}

double NNfunction_sb_cLuR::synapse0x15dad80() {
   return (neuron0x15bc970()*-0.00874266);
}

double NNfunction_sb_cLuR::synapse0x15dadc0() {
   return (neuron0x15bced0()*-0.0386297);
}

double NNfunction_sb_cLuR::synapse0x15db650() {
   return (neuron0x15bd0f0()*-0.0689989);
}

double NNfunction_sb_cLuR::synapse0x15db690() {
   return (neuron0x15bd430()*0.121769);
}

double NNfunction_sb_cLuR::synapse0x15db6d0() {
   return (neuron0x15bd770()*-0.0286501);
}

double NNfunction_sb_cLuR::synapse0x15db710() {
   return (neuron0x15bdab0()*-0.0142024);
}

double NNfunction_sb_cLuR::synapse0x15db750() {
   return (neuron0x15bddf0()*0.0192778);
}

double NNfunction_sb_cLuR::synapse0x15db790() {
   return (neuron0x15be130()*0.00711821);
}

double NNfunction_sb_cLuR::synapse0x15dbb10() {
   return (neuron0x15b9570()*0.117076);
}

double NNfunction_sb_cLuR::synapse0x15dbb50() {
   return (neuron0x15b98b0()*-0.283986);
}

double NNfunction_sb_cLuR::synapse0x15dbb90() {
   return (neuron0x15b9bf0()*-0.75268);
}

double NNfunction_sb_cLuR::synapse0x15dbbd0() {
   return (neuron0x15b9f30()*-0.0932247);
}

double NNfunction_sb_cLuR::synapse0x15dbc10() {
   return (neuron0x15ba270()*0.113472);
}

double NNfunction_sb_cLuR::synapse0x15dbc50() {
   return (neuron0x15ba5b0()*-0.107642);
}

double NNfunction_sb_cLuR::synapse0x15dbc90() {
   return (neuron0x15ba8f0()*-0.232348);
}

double NNfunction_sb_cLuR::synapse0x15dbcd0() {
   return (neuron0x15bac30()*0.720815);
}

double NNfunction_sb_cLuR::synapse0x15dbd10() {
   return (neuron0x15baf70()*-0.562458);
}

double NNfunction_sb_cLuR::synapse0x15dbd50() {
   return (neuron0x15bb2b0()*0.169553);
}

double NNfunction_sb_cLuR::synapse0x15dbd90() {
   return (neuron0x15bb5f0()*-0.314061);
}

double NNfunction_sb_cLuR::synapse0x15dbdd0() {
   return (neuron0x15bb930()*-0.190453);
}

double NNfunction_sb_cLuR::synapse0x15dbe10() {
   return (neuron0x15bbc70()*0.185299);
}

double NNfunction_sb_cLuR::synapse0x15dbe50() {
   return (neuron0x15bbfb0()*0.442045);
}

double NNfunction_sb_cLuR::synapse0x15dbe90() {
   return (neuron0x15bc2f0()*-0.549287);
}

double NNfunction_sb_cLuR::synapse0x15dbed0() {
   return (neuron0x15bc630()*0.0977568);
}

double NNfunction_sb_cLuR::synapse0x15db960() {
   return (neuron0x15bc970()*-0.058874);
}

double NNfunction_sb_cLuR::synapse0x15db9a0() {
   return (neuron0x15bced0()*-0.320276);
}

double NNfunction_sb_cLuR::synapse0x15dc020() {
   return (neuron0x15bd0f0()*-0.291816);
}

double NNfunction_sb_cLuR::synapse0x15dc060() {
   return (neuron0x15bd430()*0.39697);
}

double NNfunction_sb_cLuR::synapse0x15dc0a0() {
   return (neuron0x15bd770()*0.042306);
}

double NNfunction_sb_cLuR::synapse0x15dc0e0() {
   return (neuron0x15bdab0()*-0.0447902);
}

double NNfunction_sb_cLuR::synapse0x15dc120() {
   return (neuron0x15bddf0()*0.0377154);
}

double NNfunction_sb_cLuR::synapse0x15dc160() {
   return (neuron0x15be130()*0.319557);
}

double NNfunction_sb_cLuR::synapse0x15dc4e0() {
   return (neuron0x15b9570()*-0.0140104);
}

double NNfunction_sb_cLuR::synapse0x15dc520() {
   return (neuron0x15b98b0()*0.046797);
}

double NNfunction_sb_cLuR::synapse0x15dc560() {
   return (neuron0x15b9bf0()*-0.140234);
}

double NNfunction_sb_cLuR::synapse0x15dc5a0() {
   return (neuron0x15b9f30()*1.43393);
}

double NNfunction_sb_cLuR::synapse0x15dc5e0() {
   return (neuron0x15ba270()*0.159145);
}

double NNfunction_sb_cLuR::synapse0x15dc620() {
   return (neuron0x15ba5b0()*-0.0182391);
}

double NNfunction_sb_cLuR::synapse0x15dc660() {
   return (neuron0x15ba8f0()*0.252042);
}

double NNfunction_sb_cLuR::synapse0x15dc6a0() {
   return (neuron0x15bac30()*-0.370163);
}

double NNfunction_sb_cLuR::synapse0x15dc6e0() {
   return (neuron0x15baf70()*-0.457855);
}

double NNfunction_sb_cLuR::synapse0x15dc720() {
   return (neuron0x15bb2b0()*-0.189278);
}

double NNfunction_sb_cLuR::synapse0x15dc760() {
   return (neuron0x15bb5f0()*0.0935377);
}

double NNfunction_sb_cLuR::synapse0x15dc7a0() {
   return (neuron0x15bb930()*0.568661);
}

double NNfunction_sb_cLuR::synapse0x15dc7e0() {
   return (neuron0x15bbc70()*-0.483478);
}

double NNfunction_sb_cLuR::synapse0x15dc820() {
   return (neuron0x15bbfb0()*-0.277087);
}

double NNfunction_sb_cLuR::synapse0x15dc860() {
   return (neuron0x15bc2f0()*-0.498083);
}

double NNfunction_sb_cLuR::synapse0x15dc8a0() {
   return (neuron0x15bc630()*0.032645);
}

double NNfunction_sb_cLuR::synapse0x15dc330() {
   return (neuron0x15bc970()*-0.0249758);
}

double NNfunction_sb_cLuR::synapse0x15dc370() {
   return (neuron0x15bced0()*-0.269846);
}

double NNfunction_sb_cLuR::synapse0x15ccea0() {
   return (neuron0x15bd0f0()*-0.0420878);
}

double NNfunction_sb_cLuR::synapse0x15ccee0() {
   return (neuron0x15bd430()*0.151309);
}

double NNfunction_sb_cLuR::synapse0x15ccf20() {
   return (neuron0x15bd770()*-0.00557669);
}

double NNfunction_sb_cLuR::synapse0x15ccf60() {
   return (neuron0x15bdab0()*-0.0938733);
}

double NNfunction_sb_cLuR::synapse0x15ccfa0() {
   return (neuron0x15bddf0()*0.119132);
}

double NNfunction_sb_cLuR::synapse0x15ccfe0() {
   return (neuron0x15be130()*0.133617);
}

double NNfunction_sb_cLuR::synapse0x15cd360() {
   return (neuron0x15b9570()*0.113914);
}

double NNfunction_sb_cLuR::synapse0x15cd3a0() {
   return (neuron0x15b98b0()*0.549376);
}

double NNfunction_sb_cLuR::synapse0x15cd3e0() {
   return (neuron0x15b9bf0()*-0.256649);
}

double NNfunction_sb_cLuR::synapse0x15cd420() {
   return (neuron0x15b9f30()*1.33129);
}

double NNfunction_sb_cLuR::synapse0x15cd460() {
   return (neuron0x15ba270()*-0.143709);
}

double NNfunction_sb_cLuR::synapse0x15cd4a0() {
   return (neuron0x15ba5b0()*-0.0524051);
}

double NNfunction_sb_cLuR::synapse0x15cd4e0() {
   return (neuron0x15ba8f0()*-0.144612);
}

double NNfunction_sb_cLuR::synapse0x15cd520() {
   return (neuron0x15bac30()*-0.00826831);
}

double NNfunction_sb_cLuR::synapse0x15cd560() {
   return (neuron0x15baf70()*-0.122344);
}

double NNfunction_sb_cLuR::synapse0x15cd5a0() {
   return (neuron0x15bb2b0()*0.239656);
}

double NNfunction_sb_cLuR::synapse0x15cd5e0() {
   return (neuron0x15bb5f0()*-0.35732);
}

double NNfunction_sb_cLuR::synapse0x15cd620() {
   return (neuron0x15bb930()*-0.506225);
}

double NNfunction_sb_cLuR::synapse0x15cd660() {
   return (neuron0x15bbc70()*0.0679416);
}

double NNfunction_sb_cLuR::synapse0x15cd6a0() {
   return (neuron0x15bbfb0()*0.0525074);
}

double NNfunction_sb_cLuR::synapse0x15cd6e0() {
   return (neuron0x15bc2f0()*-0.151133);
}

double NNfunction_sb_cLuR::synapse0x15cd720() {
   return (neuron0x15bc630()*-0.125785);
}

double NNfunction_sb_cLuR::synapse0x15cd1b0() {
   return (neuron0x15bc970()*0.159262);
}

double NNfunction_sb_cLuR::synapse0x15cd1f0() {
   return (neuron0x15bced0()*0.0161563);
}

double NNfunction_sb_cLuR::synapse0x15cd870() {
   return (neuron0x15bd0f0()*0.057631);
}

double NNfunction_sb_cLuR::synapse0x15cd8b0() {
   return (neuron0x15bd430()*-0.0446349);
}

double NNfunction_sb_cLuR::synapse0x15cd8f0() {
   return (neuron0x15bd770()*-0.0388716);
}

double NNfunction_sb_cLuR::synapse0x15cd930() {
   return (neuron0x15bdab0()*-0.00656121);
}

double NNfunction_sb_cLuR::synapse0x15cd970() {
   return (neuron0x15bddf0()*-0.0535118);
}

double NNfunction_sb_cLuR::synapse0x15cd9b0() {
   return (neuron0x15be130()*-0.0861881);
}

double NNfunction_sb_cLuR::synapse0x15cdd30() {
   return (neuron0x15b9570()*0.0355018);
}

double NNfunction_sb_cLuR::synapse0x15cdd70() {
   return (neuron0x15b98b0()*-0.16056);
}

double NNfunction_sb_cLuR::synapse0x15cddb0() {
   return (neuron0x15b9bf0()*-0.00379862);
}

double NNfunction_sb_cLuR::synapse0x15cddf0() {
   return (neuron0x15b9f30()*0.00974772);
}

double NNfunction_sb_cLuR::synapse0x15cde30() {
   return (neuron0x15ba270()*0.535068);
}

double NNfunction_sb_cLuR::synapse0x15cde70() {
   return (neuron0x15ba5b0()*-0.345419);
}

double NNfunction_sb_cLuR::synapse0x15cdeb0() {
   return (neuron0x15ba8f0()*0.223705);
}

double NNfunction_sb_cLuR::synapse0x15cdef0() {
   return (neuron0x15bac30()*0.174839);
}

double NNfunction_sb_cLuR::synapse0x15cdf30() {
   return (neuron0x15baf70()*0.0334837);
}

double NNfunction_sb_cLuR::synapse0x15cdf70() {
   return (neuron0x15bb2b0()*0.1244);
}

double NNfunction_sb_cLuR::synapse0x15cdfb0() {
   return (neuron0x15bb5f0()*0.086464);
}

double NNfunction_sb_cLuR::synapse0x15cdff0() {
   return (neuron0x15bb930()*0.0721129);
}

double NNfunction_sb_cLuR::synapse0x15ce030() {
   return (neuron0x15bbc70()*-0.11459);
}

double NNfunction_sb_cLuR::synapse0x15ce070() {
   return (neuron0x15bbfb0()*0.132968);
}

double NNfunction_sb_cLuR::synapse0x15ce0b0() {
   return (neuron0x15bc2f0()*-0.682672);
}

double NNfunction_sb_cLuR::synapse0x15ce0f0() {
   return (neuron0x15bc630()*-0.0245725);
}

double NNfunction_sb_cLuR::synapse0x15cdb80() {
   return (neuron0x15bc970()*-0.0680641);
}

double NNfunction_sb_cLuR::synapse0x15cdbc0() {
   return (neuron0x15bced0()*0.124607);
}

double NNfunction_sb_cLuR::synapse0x15ce240() {
   return (neuron0x15bd0f0()*0.0259947);
}

double NNfunction_sb_cLuR::synapse0x15ce280() {
   return (neuron0x15bd430()*-0.140866);
}

double NNfunction_sb_cLuR::synapse0x15ce2c0() {
   return (neuron0x15bd770()*0.029695);
}

double NNfunction_sb_cLuR::synapse0x15ce300() {
   return (neuron0x15bdab0()*-0.0700233);
}

double NNfunction_sb_cLuR::synapse0x15ce340() {
   return (neuron0x15bddf0()*0.0110106);
}

double NNfunction_sb_cLuR::synapse0x15ce380() {
   return (neuron0x15be130()*-0.0905221);
}

double NNfunction_sb_cLuR::synapse0x15ce700() {
   return (neuron0x15b9570()*-0.0151941);
}

double NNfunction_sb_cLuR::synapse0x15ce740() {
   return (neuron0x15b98b0()*0.00766326);
}

double NNfunction_sb_cLuR::synapse0x15ce780() {
   return (neuron0x15b9bf0()*0.0410111);
}

double NNfunction_sb_cLuR::synapse0x15ce7c0() {
   return (neuron0x15b9f30()*-0.0798006);
}

double NNfunction_sb_cLuR::synapse0x15ce800() {
   return (neuron0x15ba270()*-0.0050542);
}

double NNfunction_sb_cLuR::synapse0x15ce840() {
   return (neuron0x15ba5b0()*-0.0550487);
}

double NNfunction_sb_cLuR::synapse0x15ce880() {
   return (neuron0x15ba8f0()*-0.0257019);
}

double NNfunction_sb_cLuR::synapse0x15ce8c0() {
   return (neuron0x15bac30()*-0.00216941);
}

double NNfunction_sb_cLuR::synapse0x15ce900() {
   return (neuron0x15baf70()*0.0189414);
}

double NNfunction_sb_cLuR::synapse0x15ce940() {
   return (neuron0x15bb2b0()*-0.00243079);
}

double NNfunction_sb_cLuR::synapse0x15ce980() {
   return (neuron0x15bb5f0()*0.00519601);
}

double NNfunction_sb_cLuR::synapse0x15ce9c0() {
   return (neuron0x15bb930()*-0.0271325);
}

double NNfunction_sb_cLuR::synapse0x15cea00() {
   return (neuron0x15bbc70()*-2.48482);
}

double NNfunction_sb_cLuR::synapse0x15cea40() {
   return (neuron0x15bbfb0()*-0.0412925);
}

double NNfunction_sb_cLuR::synapse0x15cea80() {
   return (neuron0x15bc2f0()*0.173072);
}

double NNfunction_sb_cLuR::synapse0x15ceac0() {
   return (neuron0x15bc630()*-0.0411246);
}

double NNfunction_sb_cLuR::synapse0x15ce550() {
   return (neuron0x15bc970()*-9.70535e-05);
}

double NNfunction_sb_cLuR::synapse0x15ce590() {
   return (neuron0x15bced0()*-0.00225942);
}

double NNfunction_sb_cLuR::synapse0x15cec10() {
   return (neuron0x15bd0f0()*-0.0535468);
}

double NNfunction_sb_cLuR::synapse0x15cec50() {
   return (neuron0x15bd430()*-0.0125131);
}

double NNfunction_sb_cLuR::synapse0x15cec90() {
   return (neuron0x15bd770()*0.0221525);
}

double NNfunction_sb_cLuR::synapse0x15cecd0() {
   return (neuron0x15bdab0()*-0.0214821);
}

double NNfunction_sb_cLuR::synapse0x15ced10() {
   return (neuron0x15bddf0()*-0.00831744);
}

double NNfunction_sb_cLuR::synapse0x15ced50() {
   return (neuron0x15be130()*0.0346841);
}

double NNfunction_sb_cLuR::synapse0x15e0c20() {
   return (neuron0x15b9570()*0.00842067);
}

double NNfunction_sb_cLuR::synapse0x15e0c60() {
   return (neuron0x15b98b0()*0.0544147);
}

double NNfunction_sb_cLuR::synapse0x15e0ca0() {
   return (neuron0x15b9bf0()*-0.0201893);
}

double NNfunction_sb_cLuR::synapse0x15e0ce0() {
   return (neuron0x15b9f30()*-0.0382077);
}

double NNfunction_sb_cLuR::synapse0x15e0d20() {
   return (neuron0x15ba270()*-0.0178726);
}

double NNfunction_sb_cLuR::synapse0x15e0d60() {
   return (neuron0x15ba5b0()*-0.0594741);
}

double NNfunction_sb_cLuR::synapse0x15e0da0() {
   return (neuron0x15ba8f0()*-0.0141806);
}

double NNfunction_sb_cLuR::synapse0x15e0de0() {
   return (neuron0x15bac30()*-0.0804076);
}

double NNfunction_sb_cLuR::synapse0x15e0e20() {
   return (neuron0x15baf70()*0.0268545);
}

double NNfunction_sb_cLuR::synapse0x15e0e60() {
   return (neuron0x15bb2b0()*-0.0236269);
}

double NNfunction_sb_cLuR::synapse0x15e0ea0() {
   return (neuron0x15bb5f0()*0.0167231);
}

double NNfunction_sb_cLuR::synapse0x15e0ee0() {
   return (neuron0x15bb930()*-0.0343893);
}

double NNfunction_sb_cLuR::synapse0x15e0f20() {
   return (neuron0x15bbc70()*-1.28638);
}

double NNfunction_sb_cLuR::synapse0x15e0f60() {
   return (neuron0x15bbfb0()*-0.018222);
}

double NNfunction_sb_cLuR::synapse0x15e0fa0() {
   return (neuron0x15bc2f0()*0.406525);
}

double NNfunction_sb_cLuR::synapse0x15e0fe0() {
   return (neuron0x15bc630()*-0.0316277);
}

double NNfunction_sb_cLuR::synapse0x15ced90() {
   return (neuron0x15bc970()*-0.00554449);
}

double NNfunction_sb_cLuR::synapse0x15cedd0() {
   return (neuron0x15bced0()*-0.00694255);
}

double NNfunction_sb_cLuR::synapse0x15e1130() {
   return (neuron0x15bd0f0()*-0.0272499);
}

double NNfunction_sb_cLuR::synapse0x15e1170() {
   return (neuron0x15bd430()*-0.0254777);
}

double NNfunction_sb_cLuR::synapse0x15e11b0() {
   return (neuron0x15bd770()*-0.0039176);
}

double NNfunction_sb_cLuR::synapse0x15e11f0() {
   return (neuron0x15bdab0()*-0.00278974);
}

double NNfunction_sb_cLuR::synapse0x15e1230() {
   return (neuron0x15bddf0()*-0.0125003);
}

double NNfunction_sb_cLuR::synapse0x15e1270() {
   return (neuron0x15be130()*0.00376797);
}

double NNfunction_sb_cLuR::synapse0x15e15f0() {
   return (neuron0x15b9570()*-0.00964465);
}

double NNfunction_sb_cLuR::synapse0x15e1630() {
   return (neuron0x15b98b0()*0.0193232);
}

double NNfunction_sb_cLuR::synapse0x15e1670() {
   return (neuron0x15b9bf0()*0.0585404);
}

double NNfunction_sb_cLuR::synapse0x15e16b0() {
   return (neuron0x15b9f30()*4.02408);
}

double NNfunction_sb_cLuR::synapse0x15e16f0() {
   return (neuron0x15ba270()*0.00993042);
}

double NNfunction_sb_cLuR::synapse0x15e1730() {
   return (neuron0x15ba5b0()*0.029117);
}

double NNfunction_sb_cLuR::synapse0x15e1770() {
   return (neuron0x15ba8f0()*0.0011167);
}

double NNfunction_sb_cLuR::synapse0x15e17b0() {
   return (neuron0x15bac30()*-0.0472862);
}

double NNfunction_sb_cLuR::synapse0x15e17f0() {
   return (neuron0x15baf70()*-0.0337594);
}

double NNfunction_sb_cLuR::synapse0x15e1830() {
   return (neuron0x15bb2b0()*0.0386945);
}

double NNfunction_sb_cLuR::synapse0x15e1870() {
   return (neuron0x15bb5f0()*-0.0103964);
}

double NNfunction_sb_cLuR::synapse0x15e18b0() {
   return (neuron0x15bb930()*0.0389184);
}

double NNfunction_sb_cLuR::synapse0x15e18f0() {
   return (neuron0x15bbc70()*0.0696543);
}

double NNfunction_sb_cLuR::synapse0x15e1930() {
   return (neuron0x15bbfb0()*0.021124);
}

double NNfunction_sb_cLuR::synapse0x15e1970() {
   return (neuron0x15bc2f0()*0.0518074);
}

double NNfunction_sb_cLuR::synapse0x15e19b0() {
   return (neuron0x15bc630()*0.0182154);
}

double NNfunction_sb_cLuR::synapse0x15e1440() {
   return (neuron0x15bc970()*0.0019136);
}

double NNfunction_sb_cLuR::synapse0x15e1480() {
   return (neuron0x15bced0()*0.00351219);
}

double NNfunction_sb_cLuR::synapse0x15e1b00() {
   return (neuron0x15bd0f0()*0.0484849);
}

double NNfunction_sb_cLuR::synapse0x15e1b40() {
   return (neuron0x15bd430()*0.0304476);
}

double NNfunction_sb_cLuR::synapse0x15e1b80() {
   return (neuron0x15bd770()*0.00249466);
}

double NNfunction_sb_cLuR::synapse0x15e1bc0() {
   return (neuron0x15bdab0()*-0.00949768);
}

double NNfunction_sb_cLuR::synapse0x15e1c00() {
   return (neuron0x15bddf0()*-0.00665874);
}

double NNfunction_sb_cLuR::synapse0x15e1c40() {
   return (neuron0x15be130()*-0.019931);
}

double NNfunction_sb_cLuR::synapse0x15e1fc0() {
   return (neuron0x15b9570()*0.0161353);
}

double NNfunction_sb_cLuR::synapse0x15e2000() {
   return (neuron0x15b98b0()*0.123853);
}

double NNfunction_sb_cLuR::synapse0x15e2040() {
   return (neuron0x15b9bf0()*0.473592);
}

double NNfunction_sb_cLuR::synapse0x15e2080() {
   return (neuron0x15b9f30()*-0.182235);
}

double NNfunction_sb_cLuR::synapse0x15e20c0() {
   return (neuron0x15ba270()*-0.0520089);
}

double NNfunction_sb_cLuR::synapse0x15e2100() {
   return (neuron0x15ba5b0()*-0.0228789);
}

double NNfunction_sb_cLuR::synapse0x15e2140() {
   return (neuron0x15ba8f0()*0.000744291);
}

double NNfunction_sb_cLuR::synapse0x15e2180() {
   return (neuron0x15bac30()*-0.113618);
}

double NNfunction_sb_cLuR::synapse0x15e21c0() {
   return (neuron0x15baf70()*-0.0623475);
}

double NNfunction_sb_cLuR::synapse0x15e2200() {
   return (neuron0x15bb2b0()*0.080092);
}

double NNfunction_sb_cLuR::synapse0x15e2240() {
   return (neuron0x15bb5f0()*-0.0186072);
}

double NNfunction_sb_cLuR::synapse0x15e2280() {
   return (neuron0x15bb930()*0.149367);
}

double NNfunction_sb_cLuR::synapse0x15e22c0() {
   return (neuron0x15bbc70()*-0.326806);
}

double NNfunction_sb_cLuR::synapse0x15e2300() {
   return (neuron0x15bbfb0()*-0.0478299);
}

double NNfunction_sb_cLuR::synapse0x15e2340() {
   return (neuron0x15bc2f0()*-0.203888);
}

double NNfunction_sb_cLuR::synapse0x15e2380() {
   return (neuron0x15bc630()*0.102553);
}

double NNfunction_sb_cLuR::synapse0x15e1e10() {
   return (neuron0x15bc970()*-0.0489157);
}

double NNfunction_sb_cLuR::synapse0x15e1e50() {
   return (neuron0x15bced0()*0.136245);
}

double NNfunction_sb_cLuR::synapse0x15e24d0() {
   return (neuron0x15bd0f0()*0.0380113);
}

double NNfunction_sb_cLuR::synapse0x15e2510() {
   return (neuron0x15bd430()*0.101633);
}

double NNfunction_sb_cLuR::synapse0x15e2550() {
   return (neuron0x15bd770()*-0.0426504);
}

double NNfunction_sb_cLuR::synapse0x15e2590() {
   return (neuron0x15bdab0()*0.0438158);
}

double NNfunction_sb_cLuR::synapse0x15e25d0() {
   return (neuron0x15bddf0()*-0.0159939);
}

double NNfunction_sb_cLuR::synapse0x15e2610() {
   return (neuron0x15be130()*0.0208302);
}

double NNfunction_sb_cLuR::synapse0x15e2990() {
   return (neuron0x15b9570()*-0.0916806);
}

double NNfunction_sb_cLuR::synapse0x15e29d0() {
   return (neuron0x15b98b0()*-0.303793);
}

double NNfunction_sb_cLuR::synapse0x15e2a10() {
   return (neuron0x15b9bf0()*1.40816);
}

double NNfunction_sb_cLuR::synapse0x15e2a50() {
   return (neuron0x15b9f30()*0.43266);
}

double NNfunction_sb_cLuR::synapse0x15e2a90() {
   return (neuron0x15ba270()*0.140962);
}

double NNfunction_sb_cLuR::synapse0x15e2ad0() {
   return (neuron0x15ba5b0()*-0.0427961);
}

double NNfunction_sb_cLuR::synapse0x15e2b10() {
   return (neuron0x15ba8f0()*-0.0917155);
}

double NNfunction_sb_cLuR::synapse0x15e2b50() {
   return (neuron0x15bac30()*0.157804);
}

double NNfunction_sb_cLuR::synapse0x15e2b90() {
   return (neuron0x15baf70()*0.0941507);
}

double NNfunction_sb_cLuR::synapse0x15e2bd0() {
   return (neuron0x15bb2b0()*0.0866005);
}

double NNfunction_sb_cLuR::synapse0x15e2c10() {
   return (neuron0x15bb5f0()*0.0162171);
}

double NNfunction_sb_cLuR::synapse0x15e2c50() {
   return (neuron0x15bb930()*-0.312336);
}

double NNfunction_sb_cLuR::synapse0x15e2c90() {
   return (neuron0x15bbc70()*0.0973002);
}

double NNfunction_sb_cLuR::synapse0x15e2cd0() {
   return (neuron0x15bbfb0()*0.179545);
}

double NNfunction_sb_cLuR::synapse0x15e2d10() {
   return (neuron0x15bc2f0()*0.0930759);
}

double NNfunction_sb_cLuR::synapse0x15e2d50() {
   return (neuron0x15bc630()*-0.226136);
}

double NNfunction_sb_cLuR::synapse0x15e27e0() {
   return (neuron0x15bc970()*0.209081);
}

double NNfunction_sb_cLuR::synapse0x15e2820() {
   return (neuron0x15bced0()*-0.286966);
}

double NNfunction_sb_cLuR::synapse0x15e2ea0() {
   return (neuron0x15bd0f0()*-0.25417);
}

double NNfunction_sb_cLuR::synapse0x15e2ee0() {
   return (neuron0x15bd430()*-0.191178);
}

double NNfunction_sb_cLuR::synapse0x15e2f20() {
   return (neuron0x15bd770()*0.149709);
}

double NNfunction_sb_cLuR::synapse0x15e2f60() {
   return (neuron0x15bdab0()*-0.122501);
}

double NNfunction_sb_cLuR::synapse0x15e2fa0() {
   return (neuron0x15bddf0()*0.00935994);
}

double NNfunction_sb_cLuR::synapse0x15e2fe0() {
   return (neuron0x15be130()*-0.120626);
}

double NNfunction_sb_cLuR::synapse0x15bf580() {
   return (neuron0x15be5d0()*0.0876099);
}

double NNfunction_sb_cLuR::synapse0x15bf5c0() {
   return (neuron0x15beee0()*0.546194);
}

double NNfunction_sb_cLuR::synapse0x15c0a90() {
   return (neuron0x15bf9c0()*-0.0178277);
}

double NNfunction_sb_cLuR::synapse0x15c0ad0() {
   return (neuron0x1379250()*-0.310924);
}

double NNfunction_sb_cLuR::synapse0x15c1460() {
   return (neuron0x15c07e0()*-0.785654);
}

double NNfunction_sb_cLuR::synapse0x15c14a0() {
   return (neuron0x15c11b0()*-0.17131);
}

double NNfunction_sb_cLuR::synapse0x15c2230() {
   return (neuron0x15c1f80()*-0.427689);
}

double NNfunction_sb_cLuR::synapse0x15c2270() {
   return (neuron0x15c2950()*-0.406281);
}

double NNfunction_sb_cLuR::synapse0x15c2c00() {
   return (neuron0x15c3320()*0.221579);
}

double NNfunction_sb_cLuR::synapse0x15c2c40() {
   return (neuron0x15c3e00()*0.244367);
}

double NNfunction_sb_cLuR::synapse0x15c35d0() {
   return (neuron0x15c47d0()*-0.231552);
}

double NNfunction_sb_cLuR::synapse0x15c3610() {
   return (neuron0x15c18b0()*-0.284954);
}

double NNfunction_sb_cLuR::synapse0x15c40b0() {
   return (neuron0x15c6380()*0.315966);
}

double NNfunction_sb_cLuR::synapse0x15c40f0() {
   return (neuron0x15c6d50()*0.169812);
}

double NNfunction_sb_cLuR::synapse0x15c4a80() {
   return (neuron0x15c7720()*-0.775974);
}

double NNfunction_sb_cLuR::synapse0x15c4ac0() {
   return (neuron0x15c80f0()*-0.277429);
}

double NNfunction_sb_cLuR::synapse0x15c1b60() {
   return (neuron0x15c9f00()*1.61723);
}

double NNfunction_sb_cLuR::synapse0x15c1ba0() {
   return (neuron0x15ca1e0()*-0.0307022);
}

double NNfunction_sb_cLuR::synapse0x15c6630() {
   return (neuron0x15cabb0()*0.306327);
}

double NNfunction_sb_cLuR::synapse0x15c6670() {
   return (neuron0x15cb580()*0.335212);
}

double NNfunction_sb_cLuR::synapse0x15c7000() {
   return (neuron0x15cbf50()*-1.21829);
}

double NNfunction_sb_cLuR::synapse0x15c7040() {
   return (neuron0x15cc920()*0.154229);
}

double NNfunction_sb_cLuR::synapse0x15c79d0() {
   return (neuron0x15c5470()*0.133776);
}

double NNfunction_sb_cLuR::synapse0x15c7a10() {
   return (neuron0x15c5e40()*-0.493313);
}

double NNfunction_sb_cLuR::synapse0x15c83a0() {
   return (neuron0x15cf6b0()*-0.419586);
}

double NNfunction_sb_cLuR::synapse0x15c83e0() {
   return (neuron0x15d0080()*1.11256);
}

double NNfunction_sb_cLuR::synapse0x15bc510() {
   return (neuron0x15d0a50()*0.469661);
}

double NNfunction_sb_cLuR::synapse0x15bc550() {
   return (neuron0x15d1420()*0.240733);
}

double NNfunction_sb_cLuR::synapse0x15ca490() {
   return (neuron0x15d1df0()*0.378021);
}

double NNfunction_sb_cLuR::synapse0x15ca4d0() {
   return (neuron0x15d27c0()*-0.759092);
}

double NNfunction_sb_cLuR::synapse0x15cae60() {
   return (neuron0x15d3190()*0.491052);
}

double NNfunction_sb_cLuR::synapse0x15caea0() {
   return (neuron0x15d3b60()*-0.616604);
}

double NNfunction_sb_cLuR::synapse0x15cb830() {
   return (neuron0x15c9bf0()*-1.7997);
}

double NNfunction_sb_cLuR::synapse0x15cb870() {
   return (neuron0x15d6740()*-0.28164);
}

double NNfunction_sb_cLuR::synapse0x15cc200() {
   return (neuron0x15d7110()*1.26584);
}

double NNfunction_sb_cLuR::synapse0x15cc240() {
   return (neuron0x15d7ae0()*7.28887);
}

double NNfunction_sb_cLuR::synapse0x15ccbd0() {
   return (neuron0x15d84b0()*0.161429);
}

double NNfunction_sb_cLuR::synapse0x15ccc10() {
   return (neuron0x15d8e80()*-0.0853057);
}

double NNfunction_sb_cLuR::synapse0x15c5720() {
   return (neuron0x15d9850()*-0.275727);
}

double NNfunction_sb_cLuR::synapse0x15c5760() {
   return (neuron0x15da220()*-0.209897);
}

double NNfunction_sb_cLuR::synapse0x15cefd0() {
   return (neuron0x15dabf0()*-0.130302);
}

double NNfunction_sb_cLuR::synapse0x15cf010() {
   return (neuron0x15db7d0()*-0.276829);
}

double NNfunction_sb_cLuR::synapse0x15cf960() {
   return (neuron0x15dc1a0()*0.119748);
}

double NNfunction_sb_cLuR::synapse0x15cf9a0() {
   return (neuron0x15cd020()*0.415173);
}

double NNfunction_sb_cLuR::synapse0x15d0330() {
   return (neuron0x15cd9f0()*0.427466);
}

double NNfunction_sb_cLuR::synapse0x15d0370() {
   return (neuron0x15ce3c0()*-0.257453);
}

double NNfunction_sb_cLuR::synapse0x15d0d00() {
   return (neuron0x15e0a00()*-0.627);
}

double NNfunction_sb_cLuR::synapse0x15d0d40() {
   return (neuron0x15e12b0()*-0.617648);
}

double NNfunction_sb_cLuR::synapse0x15d16d0() {
   return (neuron0x15e1c80()*0.387331);
}

double NNfunction_sb_cLuR::synapse0x15d1710() {
   return (neuron0x15e2650()*0.0586747);
}

double NNfunction_sb_cLuR::synapse0x15d3e10() {
   return (neuron0x15be5d0()*1.67047);
}

double NNfunction_sb_cLuR::synapse0x15d3e50() {
   return (neuron0x15beee0()*0.0765304);
}

double NNfunction_sb_cLuR::synapse0x15c93d0() {
   return (neuron0x15bf9c0()*-1.03769);
}

double NNfunction_sb_cLuR::synapse0x15c9410() {
   return (neuron0x1379250()*-0.142842);
}

double NNfunction_sb_cLuR::synapse0x15d69f0() {
   return (neuron0x15c07e0()*1.74985);
}

double NNfunction_sb_cLuR::synapse0x15d6a30() {
   return (neuron0x15c11b0()*1.00966);
}

double NNfunction_sb_cLuR::synapse0x15d73c0() {
   return (neuron0x15c1f80()*1.06049);
}

double NNfunction_sb_cLuR::synapse0x15d7400() {
   return (neuron0x15c2950()*1.21089);
}

double NNfunction_sb_cLuR::synapse0x15d7d90() {
   return (neuron0x15c3320()*-1.43715);
}

double NNfunction_sb_cLuR::synapse0x15d7dd0() {
   return (neuron0x15c3e00()*-0.0669678);
}

double NNfunction_sb_cLuR::synapse0x15d8760() {
   return (neuron0x15c47d0()*-1.00747);
}

double NNfunction_sb_cLuR::synapse0x15d87a0() {
   return (neuron0x15c18b0()*0.217672);
}

double NNfunction_sb_cLuR::synapse0x15d9130() {
   return (neuron0x15c6380()*1.4752);
}

double NNfunction_sb_cLuR::synapse0x15d9170() {
   return (neuron0x15c6d50()*0.771601);
}

double NNfunction_sb_cLuR::synapse0x15d9b00() {
   return (neuron0x15c7720()*-2.19542);
}

double NNfunction_sb_cLuR::synapse0x15d9b40() {
   return (neuron0x15c80f0()*0.60177);
}

double NNfunction_sb_cLuR::synapse0x15da4d0() {
   return (neuron0x15c9f00()*3.84444);
}

double NNfunction_sb_cLuR::synapse0x15da510() {
   return (neuron0x15ca1e0()*-1.619);
}

double NNfunction_sb_cLuR::synapse0x15daea0() {
   return (neuron0x15cabb0()*0.733938);
}

double NNfunction_sb_cLuR::synapse0x15daee0() {
   return (neuron0x15cb580()*-1.25578);
}

double NNfunction_sb_cLuR::synapse0x15dba80() {
   return (neuron0x15cbf50()*0.861687);
}

double NNfunction_sb_cLuR::synapse0x15dbac0() {
   return (neuron0x15cc920()*1.50791);
}

double NNfunction_sb_cLuR::synapse0x15dc450() {
   return (neuron0x15c5470()*0.662998);
}

double NNfunction_sb_cLuR::synapse0x15dc490() {
   return (neuron0x15c5e40()*0.268458);
}

double NNfunction_sb_cLuR::synapse0x15cd2d0() {
   return (neuron0x15cf6b0()*1.33971);
}

double NNfunction_sb_cLuR::synapse0x15cd310() {
   return (neuron0x15d0080()*-2.84366);
}

double NNfunction_sb_cLuR::synapse0x15cdca0() {
   return (neuron0x15d0a50()*-1.31672);
}

double NNfunction_sb_cLuR::synapse0x15cdce0() {
   return (neuron0x15d1420()*-1.22655);
}

double NNfunction_sb_cLuR::synapse0x15ce670() {
   return (neuron0x15d1df0()*0.67313);
}

double NNfunction_sb_cLuR::synapse0x15ce6b0() {
   return (neuron0x15d27c0()*1.02438);
}

double NNfunction_sb_cLuR::synapse0x15e0b90() {
   return (neuron0x15d3190()*-0.978537);
}

double NNfunction_sb_cLuR::synapse0x15e0bd0() {
   return (neuron0x15d3b60()*-0.152099);
}

double NNfunction_sb_cLuR::synapse0x15e1560() {
   return (neuron0x15c9bf0()*0.282779);
}

double NNfunction_sb_cLuR::synapse0x15e15a0() {
   return (neuron0x15d6740()*0.808251);
}

double NNfunction_sb_cLuR::synapse0x15e1f30() {
   return (neuron0x15d7110()*-1.97806);
}

double NNfunction_sb_cLuR::synapse0x15e1f70() {
   return (neuron0x15d7ae0()*4.77202);
}

double NNfunction_sb_cLuR::synapse0x15e2900() {
   return (neuron0x15d84b0()*-1.81029);
}

double NNfunction_sb_cLuR::synapse0x15e2940() {
   return (neuron0x15d8e80()*2.09291);
}

double NNfunction_sb_cLuR::synapse0x15be7f0() {
   return (neuron0x15d9850()*0.0920451);
}

double NNfunction_sb_cLuR::synapse0x15be830() {
   return (neuron0x15da220()*0.951661);
}

double NNfunction_sb_cLuR::synapse0x15d20a0() {
   return (neuron0x15dabf0()*-0.0215688);
}

double NNfunction_sb_cLuR::synapse0x15d20e0() {
   return (neuron0x15db7d0()*0.564679);
}

double NNfunction_sb_cLuR::synapse0x15e3020() {
   return (neuron0x15dc1a0()*2.93244);
}

double NNfunction_sb_cLuR::synapse0x15e3060() {
   return (neuron0x15cd020()*3.46352);
}

double NNfunction_sb_cLuR::synapse0x15e30a0() {
   return (neuron0x15cd9f0()*-1.86671);
}

double NNfunction_sb_cLuR::synapse0x15e30e0() {
   return (neuron0x15ce3c0()*-1.28568);
}

double NNfunction_sb_cLuR::synapse0x15e9f90() {
   return (neuron0x15e0a00()*-1.28195);
}

double NNfunction_sb_cLuR::synapse0x15e9fd0() {
   return (neuron0x15e12b0()*-4.6397);
}

double NNfunction_sb_cLuR::synapse0x15ea010() {
   return (neuron0x15e1c80()*-1.26167);
}

double NNfunction_sb_cLuR::synapse0x15ea050() {
   return (neuron0x15e2650()*1.5815);
}

double NNfunction_sb_cLuR::synapse0x15ea3d0() {
   return (neuron0x15be5d0()*0.0047897);
}

double NNfunction_sb_cLuR::synapse0x15ea410() {
   return (neuron0x15beee0()*-0.916571);
}

double NNfunction_sb_cLuR::synapse0x15ea450() {
   return (neuron0x15bf9c0()*0.351576);
}

double NNfunction_sb_cLuR::synapse0x15ea490() {
   return (neuron0x1379250()*0.38779);
}

double NNfunction_sb_cLuR::synapse0x15ea4d0() {
   return (neuron0x15c07e0()*-0.237172);
}

double NNfunction_sb_cLuR::synapse0x15ea510() {
   return (neuron0x15c11b0()*0.0694289);
}

double NNfunction_sb_cLuR::synapse0x15ea550() {
   return (neuron0x15c1f80()*0.651648);
}

double NNfunction_sb_cLuR::synapse0x15ea590() {
   return (neuron0x15c2950()*0.554028);
}

double NNfunction_sb_cLuR::synapse0x15ea5d0() {
   return (neuron0x15c3320()*-0.13487);
}

double NNfunction_sb_cLuR::synapse0x15ea610() {
   return (neuron0x15c3e00()*-0.329937);
}

double NNfunction_sb_cLuR::synapse0x15ea650() {
   return (neuron0x15c47d0()*-0.054552);
}

double NNfunction_sb_cLuR::synapse0x15ea690() {
   return (neuron0x15c18b0()*0.654144);
}

double NNfunction_sb_cLuR::synapse0x15ea6d0() {
   return (neuron0x15c6380()*-0.054204);
}

double NNfunction_sb_cLuR::synapse0x15ea710() {
   return (neuron0x15c6d50()*-0.128405);
}

double NNfunction_sb_cLuR::synapse0x15ea750() {
   return (neuron0x15c7720()*-1.72715);
}

double NNfunction_sb_cLuR::synapse0x15ea790() {
   return (neuron0x15c80f0()*-0.0732787);
}

double NNfunction_sb_cLuR::synapse0x15ea220() {
   return (neuron0x15c9f00()*0.66039);
}

double NNfunction_sb_cLuR::synapse0x15ea260() {
   return (neuron0x15ca1e0()*0.221047);
}

double NNfunction_sb_cLuR::synapse0x15ea8e0() {
   return (neuron0x15cabb0()*0.22252);
}

double NNfunction_sb_cLuR::synapse0x15ea920() {
   return (neuron0x15cb580()*0.710802);
}

double NNfunction_sb_cLuR::synapse0x15ea960() {
   return (neuron0x15cbf50()*0.211798);
}

double NNfunction_sb_cLuR::synapse0x15ea9a0() {
   return (neuron0x15cc920()*0.33115);
}

double NNfunction_sb_cLuR::synapse0x15ea9e0() {
   return (neuron0x15c5470()*-1.00033);
}

double NNfunction_sb_cLuR::synapse0x15eaa20() {
   return (neuron0x15c5e40()*0.770585);
}

double NNfunction_sb_cLuR::synapse0x15eaa60() {
   return (neuron0x15cf6b0()*-0.261889);
}

double NNfunction_sb_cLuR::synapse0x15eaaa0() {
   return (neuron0x15d0080()*0.152204);
}

double NNfunction_sb_cLuR::synapse0x15eaae0() {
   return (neuron0x15d0a50()*-0.674502);
}

double NNfunction_sb_cLuR::synapse0x15eab20() {
   return (neuron0x15d1420()*0.133079);
}

double NNfunction_sb_cLuR::synapse0x15eab60() {
   return (neuron0x15d1df0()*-0.241499);
}

double NNfunction_sb_cLuR::synapse0x15eaba0() {
   return (neuron0x15d27c0()*0.748723);
}

double NNfunction_sb_cLuR::synapse0x15eabe0() {
   return (neuron0x15d3190()*-0.440769);
}

double NNfunction_sb_cLuR::synapse0x15eac20() {
   return (neuron0x15d3b60()*-0.0504145);
}

double NNfunction_sb_cLuR::synapse0x15ea7d0() {
   return (neuron0x15c9bf0()*0.77631);
}

double NNfunction_sb_cLuR::synapse0x15ea810() {
   return (neuron0x15d6740()*0.544351);
}

double NNfunction_sb_cLuR::synapse0x15ea850() {
   return (neuron0x15d7110()*0.374263);
}

double NNfunction_sb_cLuR::synapse0x15ea890() {
   return (neuron0x15d7ae0()*3.28072);
}

double NNfunction_sb_cLuR::synapse0x15eae70() {
   return (neuron0x15d84b0()*-0.591937);
}

double NNfunction_sb_cLuR::synapse0x15eaeb0() {
   return (neuron0x15d8e80()*-0.0699903);
}

double NNfunction_sb_cLuR::synapse0x15eaef0() {
   return (neuron0x15d9850()*-0.640694);
}

double NNfunction_sb_cLuR::synapse0x15eaf30() {
   return (neuron0x15da220()*0.455026);
}

double NNfunction_sb_cLuR::synapse0x15eaf70() {
   return (neuron0x15dabf0()*1.04853);
}

double NNfunction_sb_cLuR::synapse0x15eafb0() {
   return (neuron0x15db7d0()*0.239788);
}

double NNfunction_sb_cLuR::synapse0x15eaff0() {
   return (neuron0x15dc1a0()*-0.552914);
}

double NNfunction_sb_cLuR::synapse0x15eb030() {
   return (neuron0x15cd020()*0.108602);
}

double NNfunction_sb_cLuR::synapse0x15eb070() {
   return (neuron0x15cd9f0()*-0.510578);
}

double NNfunction_sb_cLuR::synapse0x15eb0b0() {
   return (neuron0x15ce3c0()*-0.593411);
}

double NNfunction_sb_cLuR::synapse0x15eb0f0() {
   return (neuron0x15e0a00()*0.113431);
}

double NNfunction_sb_cLuR::synapse0x15eb130() {
   return (neuron0x15e12b0()*-0.469813);
}

double NNfunction_sb_cLuR::synapse0x15eb170() {
   return (neuron0x15e1c80()*0.162586);
}

double NNfunction_sb_cLuR::synapse0x15eb1b0() {
   return (neuron0x15e2650()*0.350918);
}

double NNfunction_sb_cLuR::synapse0x15eb530() {
   return (neuron0x15be5d0()*0.0610502);
}

double NNfunction_sb_cLuR::synapse0x15eb570() {
   return (neuron0x15beee0()*-0.838463);
}

double NNfunction_sb_cLuR::synapse0x15eb5b0() {
   return (neuron0x15bf9c0()*0.953894);
}

double NNfunction_sb_cLuR::synapse0x15eb5f0() {
   return (neuron0x1379250()*0.403667);
}

double NNfunction_sb_cLuR::synapse0x15eb630() {
   return (neuron0x15c07e0()*-1.27565);
}

double NNfunction_sb_cLuR::synapse0x15eb670() {
   return (neuron0x15c11b0()*0.413446);
}

double NNfunction_sb_cLuR::synapse0x15eb6b0() {
   return (neuron0x15c1f80()*0.503024);
}

double NNfunction_sb_cLuR::synapse0x15eb6f0() {
   return (neuron0x15c2950()*0.489512);
}

double NNfunction_sb_cLuR::synapse0x15eb730() {
   return (neuron0x15c3320()*-0.384726);
}

double NNfunction_sb_cLuR::synapse0x15eb770() {
   return (neuron0x15c3e00()*-0.440688);
}

double NNfunction_sb_cLuR::synapse0x15eb7b0() {
   return (neuron0x15c47d0()*0.164722);
}

double NNfunction_sb_cLuR::synapse0x15eb7f0() {
   return (neuron0x15c18b0()*0.343236);
}

double NNfunction_sb_cLuR::synapse0x15eb830() {
   return (neuron0x15c6380()*-0.25522);
}

double NNfunction_sb_cLuR::synapse0x15eb870() {
   return (neuron0x15c6d50()*-2.6628);
}

double NNfunction_sb_cLuR::synapse0x15eb8b0() {
   return (neuron0x15c7720()*0.980729);
}

double NNfunction_sb_cLuR::synapse0x15eb8f0() {
   return (neuron0x15c80f0()*0.448333);
}

double NNfunction_sb_cLuR::synapse0x15eb380() {
   return (neuron0x15c9f00()*-6.63317);
}

double NNfunction_sb_cLuR::synapse0x15eb3c0() {
   return (neuron0x15ca1e0()*-0.077367);
}

double NNfunction_sb_cLuR::synapse0x15eba40() {
   return (neuron0x15cabb0()*-1.21595);
}

double NNfunction_sb_cLuR::synapse0x15eba80() {
   return (neuron0x15cb580()*-0.5);
}

double NNfunction_sb_cLuR::synapse0x15ebac0() {
   return (neuron0x15cbf50()*0.209102);
}

double NNfunction_sb_cLuR::synapse0x15ebb00() {
   return (neuron0x15cc920()*-0.0663392);
}

double NNfunction_sb_cLuR::synapse0x15ebb40() {
   return (neuron0x15c5470()*-1.48961);
}

double NNfunction_sb_cLuR::synapse0x15ebb80() {
   return (neuron0x15c5e40()*0.157451);
}

double NNfunction_sb_cLuR::synapse0x15ebbc0() {
   return (neuron0x15cf6b0()*0.582414);
}

double NNfunction_sb_cLuR::synapse0x15ebc00() {
   return (neuron0x15d0080()*-1.1231);
}

double NNfunction_sb_cLuR::synapse0x15ebc40() {
   return (neuron0x15d0a50()*-0.653516);
}

double NNfunction_sb_cLuR::synapse0x15ebc80() {
   return (neuron0x15d1420()*-0.362835);
}

double NNfunction_sb_cLuR::synapse0x15ebcc0() {
   return (neuron0x15d1df0()*-0.404868);
}

double NNfunction_sb_cLuR::synapse0x15ebd00() {
   return (neuron0x15d27c0()*1.59808);
}

double NNfunction_sb_cLuR::synapse0x15ebd40() {
   return (neuron0x15d3190()*1.71508);
}

double NNfunction_sb_cLuR::synapse0x15ebd80() {
   return (neuron0x15d3b60()*-3.14372);
}

double NNfunction_sb_cLuR::synapse0x15eb930() {
   return (neuron0x15c9bf0()*2.3387);
}

double NNfunction_sb_cLuR::synapse0x15eb970() {
   return (neuron0x15d6740()*0.66047);
}

double NNfunction_sb_cLuR::synapse0x15eb9b0() {
   return (neuron0x15d7110()*1.40702);
}

double NNfunction_sb_cLuR::synapse0x15eb9f0() {
   return (neuron0x15d7ae0()*-0.521366);
}

double NNfunction_sb_cLuR::synapse0x15ebfd0() {
   return (neuron0x15d84b0()*-0.294977);
}

double NNfunction_sb_cLuR::synapse0x15ec010() {
   return (neuron0x15d8e80()*0.355557);
}

double NNfunction_sb_cLuR::synapse0x15ec050() {
   return (neuron0x15d9850()*0.315256);
}

double NNfunction_sb_cLuR::synapse0x15ec090() {
   return (neuron0x15da220()*0.139444);
}

double NNfunction_sb_cLuR::synapse0x15ec0d0() {
   return (neuron0x15dabf0()*1.26508);
}

double NNfunction_sb_cLuR::synapse0x15ec110() {
   return (neuron0x15db7d0()*0.440049);
}

double NNfunction_sb_cLuR::synapse0x15ec150() {
   return (neuron0x15dc1a0()*0.0317065);
}

double NNfunction_sb_cLuR::synapse0x15ec190() {
   return (neuron0x15cd020()*-0.0936276);
}

double NNfunction_sb_cLuR::synapse0x15ec1d0() {
   return (neuron0x15cd9f0()*-0.837787);
}

double NNfunction_sb_cLuR::synapse0x15ec210() {
   return (neuron0x15ce3c0()*0.00676407);
}

double NNfunction_sb_cLuR::synapse0x15ec250() {
   return (neuron0x15e0a00()*0.31988);
}

double NNfunction_sb_cLuR::synapse0x15ec290() {
   return (neuron0x15e12b0()*2.9944);
}

double NNfunction_sb_cLuR::synapse0x15ec2d0() {
   return (neuron0x15e1c80()*-0.795381);
}

double NNfunction_sb_cLuR::synapse0x15ec310() {
   return (neuron0x15e2650()*0.131307);
}

double NNfunction_sb_cLuR::synapse0x15ec690() {
   return (neuron0x15be5d0()*0.00633444);
}

double NNfunction_sb_cLuR::synapse0x15ec6d0() {
   return (neuron0x15beee0()*-0.203564);
}

double NNfunction_sb_cLuR::synapse0x15ec710() {
   return (neuron0x15bf9c0()*-0.657816);
}

double NNfunction_sb_cLuR::synapse0x15ec750() {
   return (neuron0x1379250()*0.135937);
}

double NNfunction_sb_cLuR::synapse0x15ec790() {
   return (neuron0x15c07e0()*0.202701);
}

double NNfunction_sb_cLuR::synapse0x15ec7d0() {
   return (neuron0x15c11b0()*0.0626211);
}

double NNfunction_sb_cLuR::synapse0x15ec810() {
   return (neuron0x15c1f80()*-0.0163802);
}

double NNfunction_sb_cLuR::synapse0x15ec850() {
   return (neuron0x15c2950()*0.218686);
}

double NNfunction_sb_cLuR::synapse0x15ec890() {
   return (neuron0x15c3320()*-0.124354);
}

double NNfunction_sb_cLuR::synapse0x15ec8d0() {
   return (neuron0x15c3e00()*-0.103703);
}

double NNfunction_sb_cLuR::synapse0x15ec910() {
   return (neuron0x15c47d0()*0.08239);
}

double NNfunction_sb_cLuR::synapse0x15ec950() {
   return (neuron0x15c18b0()*0.147516);
}

double NNfunction_sb_cLuR::synapse0x15ec990() {
   return (neuron0x15c6380()*-0.0844306);
}

double NNfunction_sb_cLuR::synapse0x15ec9d0() {
   return (neuron0x15c6d50()*-0.651893);
}

double NNfunction_sb_cLuR::synapse0x15eca10() {
   return (neuron0x15c7720()*0.593708);
}

double NNfunction_sb_cLuR::synapse0x15eca50() {
   return (neuron0x15c80f0()*0.146874);
}

double NNfunction_sb_cLuR::synapse0x15ec4e0() {
   return (neuron0x15c9f00()*-0.896543);
}

double NNfunction_sb_cLuR::synapse0x15ec520() {
   return (neuron0x15ca1e0()*-0.031476);
}

double NNfunction_sb_cLuR::synapse0x15ecba0() {
   return (neuron0x15cabb0()*0.0556854);
}

double NNfunction_sb_cLuR::synapse0x15ecbe0() {
   return (neuron0x15cb580()*-0.140162);
}

double NNfunction_sb_cLuR::synapse0x15ecc20() {
   return (neuron0x15cbf50()*-0.0755846);
}

double NNfunction_sb_cLuR::synapse0x15ecc60() {
   return (neuron0x15cc920()*-0.00975278);
}

double NNfunction_sb_cLuR::synapse0x15ecca0() {
   return (neuron0x15c5470()*0.991912);
}

double NNfunction_sb_cLuR::synapse0x15ecce0() {
   return (neuron0x15c5e40()*-0.851058);
}

double NNfunction_sb_cLuR::synapse0x15ecd20() {
   return (neuron0x15cf6b0()*0.224431);
}

double NNfunction_sb_cLuR::synapse0x15ecd60() {
   return (neuron0x15d0080()*0.140474);
}

double NNfunction_sb_cLuR::synapse0x15ecda0() {
   return (neuron0x15d0a50()*1.16436);
}

double NNfunction_sb_cLuR::synapse0x15ecde0() {
   return (neuron0x15d1420()*-0.151552);
}

double NNfunction_sb_cLuR::synapse0x15ece20() {
   return (neuron0x15d1df0()*-0.169648);
}

double NNfunction_sb_cLuR::synapse0x15ece60() {
   return (neuron0x15d27c0()*-2.07549);
}

double NNfunction_sb_cLuR::synapse0x15ecea0() {
   return (neuron0x15d3190()*0.305237);
}

double NNfunction_sb_cLuR::synapse0x15ecee0() {
   return (neuron0x15d3b60()*2.93278);
}

double NNfunction_sb_cLuR::synapse0x15eca90() {
   return (neuron0x15c9bf0()*-1.57079);
}

double NNfunction_sb_cLuR::synapse0x15ecad0() {
   return (neuron0x15d6740()*0.201611);
}

double NNfunction_sb_cLuR::synapse0x15ecb10() {
   return (neuron0x15d7110()*-0.0345534);
}

double NNfunction_sb_cLuR::synapse0x15ecb50() {
   return (neuron0x15d7ae0()*-0.990655);
}

double NNfunction_sb_cLuR::synapse0x15ed130() {
   return (neuron0x15d84b0()*-0.116848);
}

double NNfunction_sb_cLuR::synapse0x15ed170() {
   return (neuron0x15d8e80()*0.106957);
}

double NNfunction_sb_cLuR::synapse0x15ed1b0() {
   return (neuron0x15d9850()*0.0932333);
}

double NNfunction_sb_cLuR::synapse0x15ed1f0() {
   return (neuron0x15da220()*0.0836186);
}

double NNfunction_sb_cLuR::synapse0x15ed230() {
   return (neuron0x15dabf0()*-1.04126);
}

double NNfunction_sb_cLuR::synapse0x15ed270() {
   return (neuron0x15db7d0()*0.147187);
}

double NNfunction_sb_cLuR::synapse0x15ed2b0() {
   return (neuron0x15dc1a0()*0.0296113);
}

double NNfunction_sb_cLuR::synapse0x15ed2f0() {
   return (neuron0x15cd020()*-0.0813685);
}

double NNfunction_sb_cLuR::synapse0x15ed330() {
   return (neuron0x15cd9f0()*-0.110945);
}

double NNfunction_sb_cLuR::synapse0x15ed370() {
   return (neuron0x15ce3c0()*0.813575);
}

double NNfunction_sb_cLuR::synapse0x15ed3b0() {
   return (neuron0x15e0a00()*-1.49842);
}

double NNfunction_sb_cLuR::synapse0x15ed3f0() {
   return (neuron0x15e12b0()*0.540045);
}

double NNfunction_sb_cLuR::synapse0x15ed430() {
   return (neuron0x15e1c80()*0.431166);
}

double NNfunction_sb_cLuR::synapse0x15ed470() {
   return (neuron0x15e2650()*-0.0749535);
}

double NNfunction_sb_cLuR::synapse0x15be590() {
   return (neuron0x15e9850()*8.03113);
}

double NNfunction_sb_cLuR::synapse0x15ed6d0() {
   return (neuron0x15e9bf0()*-6.32093);
}

double NNfunction_sb_cLuR::synapse0x15ed710() {
   return (neuron0x15ea090()*-1.14704);
}

double NNfunction_sb_cLuR::synapse0x15ed750() {
   return (neuron0x15eb1f0()*-7.72738);
}

double NNfunction_sb_cLuR::synapse0x15ed790() {
   return (neuron0x15ec350()*6.79207);
}

