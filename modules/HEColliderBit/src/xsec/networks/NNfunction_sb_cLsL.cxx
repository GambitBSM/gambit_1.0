#include "NNfunction_sb_cLsL.h"
#include <cmath>

double NNfunction_sb_cLsL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6525)/15.3932;
   input1 = (in1 - -0.0113769)/1159.16;
   input2 = (in2 - 665.913)/619.168;
   input3 = (in3 - -52.0338)/788.938;
   input4 = (in4 - 1048.18)/943.338;
   input5 = (in5 - 890.745)/944.871;
   input6 = (in6 - 900.064)/944.099;
   input7 = (in7 - 926.453)/935.665;
   input8 = (in8 - 923.304)/972.744;
   input9 = (in9 - 894.987)/949.532;
   input10 = (in10 - 997.237)/962.475;
   input11 = (in11 - 718.901)/867.932;
   input12 = (in12 - 186.319)/145.232;
   input13 = (in13 - 499.332)/513.635;
   input14 = (in14 - 718.727)/814.477;
   input15 = (in15 - 713.053)/815.265;
   input16 = (in16 - 530.312)/554.693;
   input17 = (in17 - 758.572)/900.508;
   input18 = (in18 - 758.631)/907.122;
   input19 = (in19 - 801.118)/879.013;
   input20 = (in20 - -3.75194)/482.864;
   input21 = (in21 - 3.47739)/1144.33;
   input22 = (in22 - -1.00759)/1199.68;
   input23 = (in23 - -203.985)/601.909;
   switch(index) {
     case 0:
         return neuron0x29e94b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLsL::Value(int index, double* input) {
   input0 = (input[0] - 23.6525)/15.3932;
   input1 = (input[1] - -0.0113769)/1159.16;
   input2 = (input[2] - 665.913)/619.168;
   input3 = (input[3] - -52.0338)/788.938;
   input4 = (input[4] - 1048.18)/943.338;
   input5 = (input[5] - 890.745)/944.871;
   input6 = (input[6] - 900.064)/944.099;
   input7 = (input[7] - 926.453)/935.665;
   input8 = (input[8] - 923.304)/972.744;
   input9 = (input[9] - 894.987)/949.532;
   input10 = (input[10] - 997.237)/962.475;
   input11 = (input[11] - 718.901)/867.932;
   input12 = (input[12] - 186.319)/145.232;
   input13 = (input[13] - 499.332)/513.635;
   input14 = (input[14] - 718.727)/814.477;
   input15 = (input[15] - 713.053)/815.265;
   input16 = (input[16] - 530.312)/554.693;
   input17 = (input[17] - 758.572)/900.508;
   input18 = (input[18] - 758.631)/907.122;
   input19 = (input[19] - 801.118)/879.013;
   input20 = (input[20] - -3.75194)/482.864;
   input21 = (input[21] - 3.47739)/1144.33;
   input22 = (input[22] - -1.00759)/1199.68;
   input23 = (input[23] - -203.985)/601.909;
   switch(index) {
     case 0:
         return neuron0x29e94b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLsL::neuron0x29b5570() {
   return input0;
}

double NNfunction_sb_cLsL::neuron0x29b58b0() {
   return input1;
}

double NNfunction_sb_cLsL::neuron0x29b5bf0() {
   return input2;
}

double NNfunction_sb_cLsL::neuron0x29b5f30() {
   return input3;
}

double NNfunction_sb_cLsL::neuron0x29b6270() {
   return input4;
}

double NNfunction_sb_cLsL::neuron0x29b65b0() {
   return input5;
}

double NNfunction_sb_cLsL::neuron0x29b68f0() {
   return input6;
}

double NNfunction_sb_cLsL::neuron0x29b6c30() {
   return input7;
}

double NNfunction_sb_cLsL::neuron0x29b6f70() {
   return input8;
}

double NNfunction_sb_cLsL::neuron0x29b72b0() {
   return input9;
}

double NNfunction_sb_cLsL::neuron0x29b75f0() {
   return input10;
}

double NNfunction_sb_cLsL::neuron0x29b7930() {
   return input11;
}

double NNfunction_sb_cLsL::neuron0x29b7c70() {
   return input12;
}

double NNfunction_sb_cLsL::neuron0x29b7fb0() {
   return input13;
}

double NNfunction_sb_cLsL::neuron0x29b82f0() {
   return input14;
}

double NNfunction_sb_cLsL::neuron0x29b8630() {
   return input15;
}

double NNfunction_sb_cLsL::neuron0x29b8970() {
   return input16;
}

double NNfunction_sb_cLsL::neuron0x29b8ed0() {
   return input17;
}

double NNfunction_sb_cLsL::neuron0x29b90f0() {
   return input18;
}

double NNfunction_sb_cLsL::neuron0x29b9430() {
   return input19;
}

double NNfunction_sb_cLsL::neuron0x29b9770() {
   return input20;
}

double NNfunction_sb_cLsL::neuron0x29b9ab0() {
   return input21;
}

double NNfunction_sb_cLsL::neuron0x29b9df0() {
   return input22;
}

double NNfunction_sb_cLsL::neuron0x29ba130() {
   return input23;
}

double NNfunction_sb_cLsL::input0x29ba5d0() {
   double input = 1.77911;
   input += synapse0x27753e0();
   input += synapse0x29b5430();
   input += synapse0x29b5470();
   input += synapse0x29ba880();
   input += synapse0x29ba8c0();
   input += synapse0x29ba900();
   input += synapse0x29ba940();
   input += synapse0x29ba980();
   input += synapse0x29ba9c0();
   input += synapse0x29baa00();
   input += synapse0x29baa40();
   input += synapse0x29baa80();
   input += synapse0x29baac0();
   input += synapse0x29bab00();
   input += synapse0x29bab40();
   input += synapse0x29bab80();
   input += synapse0x29b53a0();
   input += synapse0x29b53e0();
   input += synapse0x2766c80();
   input += synapse0x2766cc0();
   input += synapse0x29bade0();
   input += synapse0x29bae20();
   input += synapse0x29bae60();
   input += synapse0x29baea0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29ba5d0() {
   double input = input0x29ba5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29baee0() {
   double input = 0.222305;
   input += synapse0x29bb220();
   input += synapse0x29bb260();
   input += synapse0x29bb2a0();
   input += synapse0x29bb2e0();
   input += synapse0x29bb320();
   input += synapse0x29bb360();
   input += synapse0x29bb3a0();
   input += synapse0x29bb3e0();
   input += synapse0x29bb420();
   input += synapse0x29bacd0();
   input += synapse0x29bad10();
   input += synapse0x29bad50();
   input += synapse0x29bad90();
   input += synapse0x29bb670();
   input += synapse0x29bb6b0();
   input += synapse0x29bb6f0();
   input += synapse0x29bb070();
   input += synapse0x29bb0b0();
   input += synapse0x29bb840();
   input += synapse0x29bb880();
   input += synapse0x29bb8c0();
   input += synapse0x29bb900();
   input += synapse0x29bb940();
   input += synapse0x29bb980();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29baee0() {
   double input = input0x29baee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29bb9c0() {
   double input = -0.496268;
   input += synapse0x29bbd00();
   input += synapse0x29bbd40();
   input += synapse0x29bbd80();
   input += synapse0x29bbdc0();
   input += synapse0x29bbe00();
   input += synapse0x29bbe40();
   input += synapse0x29bbe80();
   input += synapse0x29bbec0();
   input += synapse0x29bbf00();
   input += synapse0x29bbf40();
   input += synapse0x29bbf80();
   input += synapse0x29bbfc0();
   input += synapse0x29bc000();
   input += synapse0x29bc040();
   input += synapse0x29bc080();
   input += synapse0x29bc0c0();
   input += synapse0x29bbb50();
   input += synapse0x29bbb90();
   input += synapse0x2774ad0();
   input += synapse0x2774b10();
   input += synapse0x29a4600();
   input += synapse0x29a4640();
   input += synapse0x29a4680();
   input += synapse0x29b54b0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29bb9c0() {
   double input = input0x29bb9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x2775250() {
   double input = -5.83332;
   input += synapse0x29bb610();
   input += synapse0x29b54f0();
   input += synapse0x29b5530();
   input += synapse0x29bc210();
   input += synapse0x29bc250();
   input += synapse0x29bc290();
   input += synapse0x29bc2d0();
   input += synapse0x29bc310();
   input += synapse0x29bc350();
   input += synapse0x29bc390();
   input += synapse0x29bc3d0();
   input += synapse0x29bc410();
   input += synapse0x29bc450();
   input += synapse0x29bc490();
   input += synapse0x29bc4d0();
   input += synapse0x29bc510();
   input += synapse0x29bb460();
   input += synapse0x29bb4a0();
   input += synapse0x29bc660();
   input += synapse0x29bc6a0();
   input += synapse0x29bc6e0();
   input += synapse0x29bc720();
   input += synapse0x29bc760();
   input += synapse0x29bc7a0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x2775250() {
   double input = input0x2775250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29bc7e0() {
   double input = -4.58409;
   input += synapse0x29bcb20();
   input += synapse0x29bcb60();
   input += synapse0x29bcba0();
   input += synapse0x29bcbe0();
   input += synapse0x29bcc20();
   input += synapse0x29bcc60();
   input += synapse0x29bcca0();
   input += synapse0x29bcce0();
   input += synapse0x29bcd20();
   input += synapse0x29bcd60();
   input += synapse0x29bcda0();
   input += synapse0x29bcde0();
   input += synapse0x29bce20();
   input += synapse0x29bce60();
   input += synapse0x29bcea0();
   input += synapse0x29bcee0();
   input += synapse0x29bc970();
   input += synapse0x29bc9b0();
   input += synapse0x29bd030();
   input += synapse0x29bd070();
   input += synapse0x29bd0b0();
   input += synapse0x29bd0f0();
   input += synapse0x29bd130();
   input += synapse0x29bd170();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29bc7e0() {
   double input = input0x29bc7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29bd1b0() {
   double input = -2.33353;
   input += synapse0x29bd4f0();
   input += synapse0x29bd530();
   input += synapse0x29bd570();
   input += synapse0x29bd5b0();
   input += synapse0x29bd5f0();
   input += synapse0x29bd630();
   input += synapse0x29bd670();
   input += synapse0x29bd6b0();
   input += synapse0x29bd6f0();
   input += synapse0x2774e40();
   input += synapse0x2774e80();
   input += synapse0x2774ec0();
   input += synapse0x2774f00();
   input += synapse0x2774f40();
   input += synapse0x2774f80();
   input += synapse0x2774fc0();
   input += synapse0x29bd340();
   input += synapse0x29bd380();
   input += synapse0x2775110();
   input += synapse0x2775150();
   input += synapse0x2775190();
   input += synapse0x27751d0();
   input += synapse0x2775210();
   input += synapse0x29bdf40();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29bd1b0() {
   double input = input0x29bd1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29bdf80() {
   double input = 1.68764;
   input += synapse0x29be2c0();
   input += synapse0x29be300();
   input += synapse0x29be340();
   input += synapse0x29be380();
   input += synapse0x29be3c0();
   input += synapse0x29be400();
   input += synapse0x29be440();
   input += synapse0x29be480();
   input += synapse0x29be4c0();
   input += synapse0x29be500();
   input += synapse0x29be540();
   input += synapse0x29be580();
   input += synapse0x29be5c0();
   input += synapse0x29be600();
   input += synapse0x29be640();
   input += synapse0x29be680();
   input += synapse0x29be110();
   input += synapse0x29be150();
   input += synapse0x29be7d0();
   input += synapse0x29be810();
   input += synapse0x29be850();
   input += synapse0x29be890();
   input += synapse0x29be8d0();
   input += synapse0x29be910();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29bdf80() {
   double input = input0x29bdf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29be950() {
   double input = -2.03186;
   input += synapse0x29bec90();
   input += synapse0x29becd0();
   input += synapse0x29bed10();
   input += synapse0x29bed50();
   input += synapse0x29bed90();
   input += synapse0x29bedd0();
   input += synapse0x29bee10();
   input += synapse0x29bee50();
   input += synapse0x29bee90();
   input += synapse0x29beed0();
   input += synapse0x29bef10();
   input += synapse0x29bef50();
   input += synapse0x29bef90();
   input += synapse0x29befd0();
   input += synapse0x29bf010();
   input += synapse0x29bf050();
   input += synapse0x29beae0();
   input += synapse0x29beb20();
   input += synapse0x29bf1a0();
   input += synapse0x29bf1e0();
   input += synapse0x29bf220();
   input += synapse0x29bf260();
   input += synapse0x29bf2a0();
   input += synapse0x29bf2e0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29be950() {
   double input = input0x29be950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29bf320() {
   double input = -0.245315;
   input += synapse0x29b8dc0();
   input += synapse0x29b8e00();
   input += synapse0x29b8e40();
   input += synapse0x29b8e80();
   input += synapse0x29bf870();
   input += synapse0x29bf8b0();
   input += synapse0x29bf8f0();
   input += synapse0x29bf930();
   input += synapse0x29bf970();
   input += synapse0x29bf9b0();
   input += synapse0x29bf9f0();
   input += synapse0x29bfa30();
   input += synapse0x29bfa70();
   input += synapse0x29bfab0();
   input += synapse0x29bfaf0();
   input += synapse0x29bfb30();
   input += synapse0x29bf4b0();
   input += synapse0x29bf4f0();
   input += synapse0x29bfc80();
   input += synapse0x29bfcc0();
   input += synapse0x29bfd00();
   input += synapse0x29bfd40();
   input += synapse0x29bfd80();
   input += synapse0x29bfdc0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29bf320() {
   double input = input0x29bf320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29bfe00() {
   double input = 0.013835;
   input += synapse0x29c0140();
   input += synapse0x29c0180();
   input += synapse0x29c01c0();
   input += synapse0x29c0200();
   input += synapse0x29c0240();
   input += synapse0x29c0280();
   input += synapse0x29c02c0();
   input += synapse0x29c0300();
   input += synapse0x29c0340();
   input += synapse0x29c0380();
   input += synapse0x29c03c0();
   input += synapse0x29c0400();
   input += synapse0x29c0440();
   input += synapse0x29c0480();
   input += synapse0x29c04c0();
   input += synapse0x29c0500();
   input += synapse0x29bff90();
   input += synapse0x29bffd0();
   input += synapse0x29c0650();
   input += synapse0x29c0690();
   input += synapse0x29c06d0();
   input += synapse0x29c0710();
   input += synapse0x29c0750();
   input += synapse0x29c0790();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29bfe00() {
   double input = input0x29bfe00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c07d0() {
   double input = 2.53068;
   input += synapse0x29c0b10();
   input += synapse0x29c0b50();
   input += synapse0x29c0b90();
   input += synapse0x29c0bd0();
   input += synapse0x29c0c10();
   input += synapse0x29c0c50();
   input += synapse0x29c0c90();
   input += synapse0x29c0cd0();
   input += synapse0x29c0d10();
   input += synapse0x29c0d50();
   input += synapse0x29c0d90();
   input += synapse0x29c0dd0();
   input += synapse0x29c0e10();
   input += synapse0x29c0e50();
   input += synapse0x29c0e90();
   input += synapse0x29c0ed0();
   input += synapse0x29c0960();
   input += synapse0x29c09a0();
   input += synapse0x29bd730();
   input += synapse0x29bd770();
   input += synapse0x29bd7b0();
   input += synapse0x29bd7f0();
   input += synapse0x29bd830();
   input += synapse0x29bd870();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c07d0() {
   double input = input0x29c07d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29bd8b0() {
   double input = 0.072886;
   input += synapse0x29bdbf0();
   input += synapse0x29bdc30();
   input += synapse0x29bdc70();
   input += synapse0x29bdcb0();
   input += synapse0x29bdcf0();
   input += synapse0x29bdd30();
   input += synapse0x29bdd70();
   input += synapse0x29bddb0();
   input += synapse0x29bddf0();
   input += synapse0x29bde30();
   input += synapse0x29bde70();
   input += synapse0x29bdeb0();
   input += synapse0x29bdef0();
   input += synapse0x29c2030();
   input += synapse0x29c2070();
   input += synapse0x29c20b0();
   input += synapse0x29bda40();
   input += synapse0x29bda80();
   input += synapse0x29c2200();
   input += synapse0x29c2240();
   input += synapse0x29c2280();
   input += synapse0x29c22c0();
   input += synapse0x29c2300();
   input += synapse0x29c2340();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29bd8b0() {
   double input = input0x29bd8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c2380() {
   double input = -1.07504;
   input += synapse0x29c26c0();
   input += synapse0x29c2700();
   input += synapse0x29c2740();
   input += synapse0x29c2780();
   input += synapse0x29c27c0();
   input += synapse0x29c2800();
   input += synapse0x29c2840();
   input += synapse0x29c2880();
   input += synapse0x29c28c0();
   input += synapse0x29c2900();
   input += synapse0x29c2940();
   input += synapse0x29c2980();
   input += synapse0x29c29c0();
   input += synapse0x29c2a00();
   input += synapse0x29c2a40();
   input += synapse0x29c2a80();
   input += synapse0x29c2510();
   input += synapse0x29c2550();
   input += synapse0x29c2bd0();
   input += synapse0x29c2c10();
   input += synapse0x29c2c50();
   input += synapse0x29c2c90();
   input += synapse0x29c2cd0();
   input += synapse0x29c2d10();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c2380() {
   double input = input0x29c2380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c2d50() {
   double input = 0.92463;
   input += synapse0x29c3090();
   input += synapse0x29c30d0();
   input += synapse0x29c3110();
   input += synapse0x29c3150();
   input += synapse0x29c3190();
   input += synapse0x29c31d0();
   input += synapse0x29c3210();
   input += synapse0x29c3250();
   input += synapse0x29c3290();
   input += synapse0x29c32d0();
   input += synapse0x29c3310();
   input += synapse0x29c3350();
   input += synapse0x29c3390();
   input += synapse0x29c33d0();
   input += synapse0x29c3410();
   input += synapse0x29c3450();
   input += synapse0x29c2ee0();
   input += synapse0x29c2f20();
   input += synapse0x29c35a0();
   input += synapse0x29c35e0();
   input += synapse0x29c3620();
   input += synapse0x29c3660();
   input += synapse0x29c36a0();
   input += synapse0x29c36e0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c2d50() {
   double input = input0x29c2d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c3720() {
   double input = -0.0500209;
   input += synapse0x29c3a60();
   input += synapse0x29c3aa0();
   input += synapse0x29c3ae0();
   input += synapse0x29c3b20();
   input += synapse0x29c3b60();
   input += synapse0x29c3ba0();
   input += synapse0x29c3be0();
   input += synapse0x29c3c20();
   input += synapse0x29c3c60();
   input += synapse0x29c3ca0();
   input += synapse0x29c3ce0();
   input += synapse0x29c3d20();
   input += synapse0x29c3d60();
   input += synapse0x29c3da0();
   input += synapse0x29c3de0();
   input += synapse0x29c3e20();
   input += synapse0x29c38b0();
   input += synapse0x29c38f0();
   input += synapse0x29c3f70();
   input += synapse0x29c3fb0();
   input += synapse0x29c3ff0();
   input += synapse0x29c4030();
   input += synapse0x29c4070();
   input += synapse0x29c40b0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c3720() {
   double input = input0x29c3720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c40f0() {
   double input = 0.690096;
   input += synapse0x29c4430();
   input += synapse0x29b5790();
   input += synapse0x29b57d0();
   input += synapse0x29b5ad0();
   input += synapse0x29b5b10();
   input += synapse0x29b5e10();
   input += synapse0x29b5e50();
   input += synapse0x29b6150();
   input += synapse0x29b6190();
   input += synapse0x29b6490();
   input += synapse0x29b64d0();
   input += synapse0x29b67d0();
   input += synapse0x29b6810();
   input += synapse0x29b6b10();
   input += synapse0x29b6b50();
   input += synapse0x29b6e50();
   input += synapse0x29b6e90();
   input += synapse0x29b7190();
   input += synapse0x29b71d0();
   input += synapse0x29b74d0();
   input += synapse0x29b7510();
   input += synapse0x29b7810();
   input += synapse0x29b7850();
   input += synapse0x29b7b50();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c40f0() {
   double input = input0x29c40f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c5f00() {
   double input = 0.103572;
   input += synapse0x29b7b90();
   input += synapse0x29b8850();
   input += synapse0x29b8890();
   input += synapse0x29c4280();
   input += synapse0x29c42c0();
   input += synapse0x29b8b90();
   input += synapse0x29b8bd0();
   input += synapse0x2766b60();
   input += synapse0x2766ba0();
   input += synapse0x29b9310();
   input += synapse0x29b9350();
   input += synapse0x29b9650();
   input += synapse0x29b9690();
   input += synapse0x29b9990();
   input += synapse0x29b99d0();
   input += synapse0x29b9cd0();
   input += synapse0x29b9d10();
   input += synapse0x29ba010();
   input += synapse0x29ba050();
   input += synapse0x29ba350();
   input += synapse0x29ba390();
   input += synapse0x29b7e90();
   input += synapse0x29b7ed0();
   input += synapse0x29c61a0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c5f00() {
   double input = input0x29c5f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c61e0() {
   double input = -0.623588;
   input += synapse0x29c6520();
   input += synapse0x29c6560();
   input += synapse0x29c65a0();
   input += synapse0x29c65e0();
   input += synapse0x29c6620();
   input += synapse0x29c6660();
   input += synapse0x29c66a0();
   input += synapse0x29c66e0();
   input += synapse0x29c6720();
   input += synapse0x29c6760();
   input += synapse0x29c67a0();
   input += synapse0x29c67e0();
   input += synapse0x29c6820();
   input += synapse0x29c6860();
   input += synapse0x29c68a0();
   input += synapse0x29c68e0();
   input += synapse0x29c6370();
   input += synapse0x29c63b0();
   input += synapse0x29c6a30();
   input += synapse0x29c6a70();
   input += synapse0x29c6ab0();
   input += synapse0x29c6af0();
   input += synapse0x29c6b30();
   input += synapse0x29c6b70();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c61e0() {
   double input = input0x29c61e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c6bb0() {
   double input = 1.18351;
   input += synapse0x29c6ef0();
   input += synapse0x29c6f30();
   input += synapse0x29c6f70();
   input += synapse0x29c6fb0();
   input += synapse0x29c6ff0();
   input += synapse0x29c7030();
   input += synapse0x29c7070();
   input += synapse0x29c70b0();
   input += synapse0x29c70f0();
   input += synapse0x29c7130();
   input += synapse0x29c7170();
   input += synapse0x29c71b0();
   input += synapse0x29c71f0();
   input += synapse0x29c7230();
   input += synapse0x29c7270();
   input += synapse0x29c72b0();
   input += synapse0x29c6d40();
   input += synapse0x29c6d80();
   input += synapse0x29c7400();
   input += synapse0x29c7440();
   input += synapse0x29c7480();
   input += synapse0x29c74c0();
   input += synapse0x29c7500();
   input += synapse0x29c7540();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c6bb0() {
   double input = input0x29c6bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c7580() {
   double input = -0.724253;
   input += synapse0x29c78c0();
   input += synapse0x29c7900();
   input += synapse0x29c7940();
   input += synapse0x29c7980();
   input += synapse0x29c79c0();
   input += synapse0x29c7a00();
   input += synapse0x29c7a40();
   input += synapse0x29c7a80();
   input += synapse0x29c7ac0();
   input += synapse0x29c7b00();
   input += synapse0x29c7b40();
   input += synapse0x29c7b80();
   input += synapse0x29c7bc0();
   input += synapse0x29c7c00();
   input += synapse0x29c7c40();
   input += synapse0x29c7c80();
   input += synapse0x29c7710();
   input += synapse0x29c7750();
   input += synapse0x29c7dd0();
   input += synapse0x29c7e10();
   input += synapse0x29c7e50();
   input += synapse0x29c7e90();
   input += synapse0x29c7ed0();
   input += synapse0x29c7f10();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c7580() {
   double input = input0x29c7580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c7f50() {
   double input = -0.209189;
   input += synapse0x29c8290();
   input += synapse0x29c82d0();
   input += synapse0x29c8310();
   input += synapse0x29c8350();
   input += synapse0x29c8390();
   input += synapse0x29c83d0();
   input += synapse0x29c8410();
   input += synapse0x29c8450();
   input += synapse0x29c8490();
   input += synapse0x29c84d0();
   input += synapse0x29c8510();
   input += synapse0x29c8550();
   input += synapse0x29c8590();
   input += synapse0x29c85d0();
   input += synapse0x29c8610();
   input += synapse0x29c8650();
   input += synapse0x29c80e0();
   input += synapse0x29c8120();
   input += synapse0x29c87a0();
   input += synapse0x29c87e0();
   input += synapse0x29c8820();
   input += synapse0x29c8860();
   input += synapse0x29c88a0();
   input += synapse0x29c88e0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c7f50() {
   double input = input0x29c7f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c8920() {
   double input = -0.674593;
   input += synapse0x29c8c60();
   input += synapse0x29c8ca0();
   input += synapse0x29c8ce0();
   input += synapse0x29c8d20();
   input += synapse0x29c8d60();
   input += synapse0x29c8da0();
   input += synapse0x29c8de0();
   input += synapse0x29c8e20();
   input += synapse0x29c8e60();
   input += synapse0x29c1020();
   input += synapse0x29c1060();
   input += synapse0x29c10a0();
   input += synapse0x29c10e0();
   input += synapse0x29c1120();
   input += synapse0x29c1160();
   input += synapse0x29c11a0();
   input += synapse0x29c8ab0();
   input += synapse0x29c8af0();
   input += synapse0x29c12f0();
   input += synapse0x29c1330();
   input += synapse0x29c1370();
   input += synapse0x29c13b0();
   input += synapse0x29c13f0();
   input += synapse0x29c1430();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c8920() {
   double input = input0x29c8920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c1470() {
   double input = 2.27046;
   input += synapse0x29c17b0();
   input += synapse0x29c17f0();
   input += synapse0x29c1830();
   input += synapse0x29c1870();
   input += synapse0x29c18b0();
   input += synapse0x29c18f0();
   input += synapse0x29c1930();
   input += synapse0x29c1970();
   input += synapse0x29c19b0();
   input += synapse0x29c19f0();
   input += synapse0x29c1a30();
   input += synapse0x29c1a70();
   input += synapse0x29c1ab0();
   input += synapse0x29c1af0();
   input += synapse0x29c1b30();
   input += synapse0x29c1b70();
   input += synapse0x29c1600();
   input += synapse0x29c1640();
   input += synapse0x29c1cc0();
   input += synapse0x29c1d00();
   input += synapse0x29c1d40();
   input += synapse0x29c1d80();
   input += synapse0x29c1dc0();
   input += synapse0x29c1e00();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c1470() {
   double input = input0x29c1470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c1e40() {
   double input = -0.664705;
   input += synapse0x29c1fd0();
   input += synapse0x29cb060();
   input += synapse0x29cb0a0();
   input += synapse0x29cb0e0();
   input += synapse0x29cb120();
   input += synapse0x29cb160();
   input += synapse0x29cb1a0();
   input += synapse0x29cb1e0();
   input += synapse0x29cb220();
   input += synapse0x29cb260();
   input += synapse0x29cb2a0();
   input += synapse0x29cb2e0();
   input += synapse0x29cb320();
   input += synapse0x29cb360();
   input += synapse0x29cb3a0();
   input += synapse0x29cb3e0();
   input += synapse0x29caeb0();
   input += synapse0x29caef0();
   input += synapse0x29cb530();
   input += synapse0x29cb570();
   input += synapse0x29cb5b0();
   input += synapse0x29cb5f0();
   input += synapse0x29cb630();
   input += synapse0x29cb670();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c1e40() {
   double input = input0x29c1e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29cb6b0() {
   double input = -0.542594;
   input += synapse0x29cb9f0();
   input += synapse0x29cba30();
   input += synapse0x29cba70();
   input += synapse0x29cbab0();
   input += synapse0x29cbaf0();
   input += synapse0x29cbb30();
   input += synapse0x29cbb70();
   input += synapse0x29cbbb0();
   input += synapse0x29cbbf0();
   input += synapse0x29cbc30();
   input += synapse0x29cbc70();
   input += synapse0x29cbcb0();
   input += synapse0x29cbcf0();
   input += synapse0x29cbd30();
   input += synapse0x29cbd70();
   input += synapse0x29cbdb0();
   input += synapse0x29cb840();
   input += synapse0x29cb880();
   input += synapse0x29cbf00();
   input += synapse0x29cbf40();
   input += synapse0x29cbf80();
   input += synapse0x29cbfc0();
   input += synapse0x29cc000();
   input += synapse0x29cc040();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29cb6b0() {
   double input = input0x29cb6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29cc080() {
   double input = 0.430728;
   input += synapse0x29cc3c0();
   input += synapse0x29cc400();
   input += synapse0x29cc440();
   input += synapse0x29cc480();
   input += synapse0x29cc4c0();
   input += synapse0x29cc500();
   input += synapse0x29cc540();
   input += synapse0x29cc580();
   input += synapse0x29cc5c0();
   input += synapse0x29cc600();
   input += synapse0x29cc640();
   input += synapse0x29cc680();
   input += synapse0x29cc6c0();
   input += synapse0x29cc700();
   input += synapse0x29cc740();
   input += synapse0x29cc780();
   input += synapse0x29cc210();
   input += synapse0x29cc250();
   input += synapse0x29cc8d0();
   input += synapse0x29cc910();
   input += synapse0x29cc950();
   input += synapse0x29cc990();
   input += synapse0x29cc9d0();
   input += synapse0x29cca10();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29cc080() {
   double input = input0x29cc080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29cca50() {
   double input = 0.29588;
   input += synapse0x29ccd90();
   input += synapse0x29ccdd0();
   input += synapse0x29cce10();
   input += synapse0x29cce50();
   input += synapse0x29cce90();
   input += synapse0x29cced0();
   input += synapse0x29ccf10();
   input += synapse0x29ccf50();
   input += synapse0x29ccf90();
   input += synapse0x29ccfd0();
   input += synapse0x29cd010();
   input += synapse0x29cd050();
   input += synapse0x29cd090();
   input += synapse0x29cd0d0();
   input += synapse0x29cd110();
   input += synapse0x29cd150();
   input += synapse0x29ccbe0();
   input += synapse0x29ccc20();
   input += synapse0x29cd2a0();
   input += synapse0x29cd2e0();
   input += synapse0x29cd320();
   input += synapse0x29cd360();
   input += synapse0x29cd3a0();
   input += synapse0x29cd3e0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29cca50() {
   double input = input0x29cca50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29cd420() {
   double input = 0.1821;
   input += synapse0x29cd760();
   input += synapse0x29cd7a0();
   input += synapse0x29cd7e0();
   input += synapse0x29cd820();
   input += synapse0x29cd860();
   input += synapse0x29cd8a0();
   input += synapse0x29cd8e0();
   input += synapse0x29cd920();
   input += synapse0x29cd960();
   input += synapse0x29cd9a0();
   input += synapse0x29cd9e0();
   input += synapse0x29cda20();
   input += synapse0x29cda60();
   input += synapse0x29cdaa0();
   input += synapse0x29cdae0();
   input += synapse0x29cdb20();
   input += synapse0x29cd5b0();
   input += synapse0x29cd5f0();
   input += synapse0x29cdc70();
   input += synapse0x29cdcb0();
   input += synapse0x29cdcf0();
   input += synapse0x29cdd30();
   input += synapse0x29cdd70();
   input += synapse0x29cddb0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29cd420() {
   double input = input0x29cd420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29cddf0() {
   double input = 7.94583;
   input += synapse0x29ce130();
   input += synapse0x29ce170();
   input += synapse0x29ce1b0();
   input += synapse0x29ce1f0();
   input += synapse0x29ce230();
   input += synapse0x29ce270();
   input += synapse0x29ce2b0();
   input += synapse0x29ce2f0();
   input += synapse0x29ce330();
   input += synapse0x29ce370();
   input += synapse0x29ce3b0();
   input += synapse0x29ce3f0();
   input += synapse0x29ce430();
   input += synapse0x29ce470();
   input += synapse0x29ce4b0();
   input += synapse0x29ce4f0();
   input += synapse0x29cdf80();
   input += synapse0x29cdfc0();
   input += synapse0x29ce640();
   input += synapse0x29ce680();
   input += synapse0x29ce6c0();
   input += synapse0x29ce700();
   input += synapse0x29ce740();
   input += synapse0x29ce780();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29cddf0() {
   double input = input0x29cddf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29ce7c0() {
   double input = 0.364341;
   input += synapse0x29ceb00();
   input += synapse0x29ceb40();
   input += synapse0x29ceb80();
   input += synapse0x29cebc0();
   input += synapse0x29cec00();
   input += synapse0x29cec40();
   input += synapse0x29cec80();
   input += synapse0x29cecc0();
   input += synapse0x29ced00();
   input += synapse0x29ced40();
   input += synapse0x29ced80();
   input += synapse0x29cedc0();
   input += synapse0x29cee00();
   input += synapse0x29cee40();
   input += synapse0x29cee80();
   input += synapse0x29ceec0();
   input += synapse0x29ce950();
   input += synapse0x29ce990();
   input += synapse0x29cf010();
   input += synapse0x29cf050();
   input += synapse0x29cf090();
   input += synapse0x29cf0d0();
   input += synapse0x29cf110();
   input += synapse0x29cf150();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29ce7c0() {
   double input = input0x29ce7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29cf190() {
   double input = -1.00668;
   input += synapse0x29cf4d0();
   input += synapse0x29cf510();
   input += synapse0x29cf550();
   input += synapse0x29cf590();
   input += synapse0x29cf5d0();
   input += synapse0x29cf610();
   input += synapse0x29cf650();
   input += synapse0x29cf690();
   input += synapse0x29cf6d0();
   input += synapse0x29cf710();
   input += synapse0x29cf750();
   input += synapse0x29cf790();
   input += synapse0x29cf7d0();
   input += synapse0x29cf810();
   input += synapse0x29cf850();
   input += synapse0x29cf890();
   input += synapse0x29cf320();
   input += synapse0x29cf360();
   input += synapse0x29cf9e0();
   input += synapse0x29cfa20();
   input += synapse0x29cfa60();
   input += synapse0x29cfaa0();
   input += synapse0x29cfae0();
   input += synapse0x29cfb20();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29cf190() {
   double input = input0x29cf190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29cfb60() {
   double input = -6.62577;
   input += synapse0x29cfea0();
   input += synapse0x29c4470();
   input += synapse0x29c44b0();
   input += synapse0x29c44f0();
   input += synapse0x29c4740();
   input += synapse0x29c4780();
   input += synapse0x29c47c0();
   input += synapse0x29c4a10();
   input += synapse0x29c4a50();
   input += synapse0x29c4ca0();
   input += synapse0x29c4ce0();
   input += synapse0x29c4d20();
   input += synapse0x29c4f70();
   input += synapse0x29c4fb0();
   input += synapse0x29c5200();
   input += synapse0x29c5240();
   input += synapse0x29cfcf0();
   input += synapse0x29cfd30();
   input += synapse0x29c5390();
   input += synapse0x29c58a0();
   input += synapse0x29c58e0();
   input += synapse0x29c5920();
   input += synapse0x29c5b70();
   input += synapse0x29c5bb0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29cfb60() {
   double input = input0x29cfb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c5bf0() {
   double input = -0.758635;
   input += synapse0x29c5460();
   input += synapse0x29c54a0();
   input += synapse0x29c54e0();
   input += synapse0x29c5520();
   input += synapse0x29c5ea0();
   input += synapse0x29d21f0();
   input += synapse0x29d2230();
   input += synapse0x29d2270();
   input += synapse0x29d22b0();
   input += synapse0x29d22f0();
   input += synapse0x29d2330();
   input += synapse0x29d2370();
   input += synapse0x29d23b0();
   input += synapse0x29d23f0();
   input += synapse0x29d2430();
   input += synapse0x29d2470();
   input += synapse0x29c5d80();
   input += synapse0x29c5dc0();
   input += synapse0x29d25c0();
   input += synapse0x29d2600();
   input += synapse0x29d2640();
   input += synapse0x29d2680();
   input += synapse0x29d26c0();
   input += synapse0x29d2700();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c5bf0() {
   double input = input0x29c5bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d2740() {
   double input = 0.0278704;
   input += synapse0x29d2a80();
   input += synapse0x29d2ac0();
   input += synapse0x29d2b00();
   input += synapse0x29d2b40();
   input += synapse0x29d2b80();
   input += synapse0x29d2bc0();
   input += synapse0x29d2c00();
   input += synapse0x29d2c40();
   input += synapse0x29d2c80();
   input += synapse0x29d2cc0();
   input += synapse0x29d2d00();
   input += synapse0x29d2d40();
   input += synapse0x29d2d80();
   input += synapse0x29d2dc0();
   input += synapse0x29d2e00();
   input += synapse0x29d2e40();
   input += synapse0x29d28d0();
   input += synapse0x29d2910();
   input += synapse0x29d2f90();
   input += synapse0x29d2fd0();
   input += synapse0x29d3010();
   input += synapse0x29d3050();
   input += synapse0x29d3090();
   input += synapse0x29d30d0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d2740() {
   double input = input0x29d2740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d3110() {
   double input = 0.0841514;
   input += synapse0x29d3450();
   input += synapse0x29d3490();
   input += synapse0x29d34d0();
   input += synapse0x29d3510();
   input += synapse0x29d3550();
   input += synapse0x29d3590();
   input += synapse0x29d35d0();
   input += synapse0x29d3610();
   input += synapse0x29d3650();
   input += synapse0x29d3690();
   input += synapse0x29d36d0();
   input += synapse0x29d3710();
   input += synapse0x29d3750();
   input += synapse0x29d3790();
   input += synapse0x29d37d0();
   input += synapse0x29d3810();
   input += synapse0x29d32a0();
   input += synapse0x29d32e0();
   input += synapse0x29d3960();
   input += synapse0x29d39a0();
   input += synapse0x29d39e0();
   input += synapse0x29d3a20();
   input += synapse0x29d3a60();
   input += synapse0x29d3aa0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d3110() {
   double input = input0x29d3110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d3ae0() {
   double input = 0.425253;
   input += synapse0x29d3e20();
   input += synapse0x29d3e60();
   input += synapse0x29d3ea0();
   input += synapse0x29d3ee0();
   input += synapse0x29d3f20();
   input += synapse0x29d3f60();
   input += synapse0x29d3fa0();
   input += synapse0x29d3fe0();
   input += synapse0x29d4020();
   input += synapse0x29d4060();
   input += synapse0x29d40a0();
   input += synapse0x29d40e0();
   input += synapse0x29d4120();
   input += synapse0x29d4160();
   input += synapse0x29d41a0();
   input += synapse0x29d41e0();
   input += synapse0x29d3c70();
   input += synapse0x29d3cb0();
   input += synapse0x29d4330();
   input += synapse0x29d4370();
   input += synapse0x29d43b0();
   input += synapse0x29d43f0();
   input += synapse0x29d4430();
   input += synapse0x29d4470();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d3ae0() {
   double input = input0x29d3ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d44b0() {
   double input = 2.11832;
   input += synapse0x29d47f0();
   input += synapse0x29d4830();
   input += synapse0x29d4870();
   input += synapse0x29d48b0();
   input += synapse0x29d48f0();
   input += synapse0x29d4930();
   input += synapse0x29d4970();
   input += synapse0x29d49b0();
   input += synapse0x29d49f0();
   input += synapse0x29d4a30();
   input += synapse0x29d4a70();
   input += synapse0x29d4ab0();
   input += synapse0x29d4af0();
   input += synapse0x29d4b30();
   input += synapse0x29d4b70();
   input += synapse0x29d4bb0();
   input += synapse0x29d4640();
   input += synapse0x29d4680();
   input += synapse0x29d4d00();
   input += synapse0x29d4d40();
   input += synapse0x29d4d80();
   input += synapse0x29d4dc0();
   input += synapse0x29d4e00();
   input += synapse0x29d4e40();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d44b0() {
   double input = input0x29d44b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d4e80() {
   double input = 0.166091;
   input += synapse0x29d51c0();
   input += synapse0x29d5200();
   input += synapse0x29d5240();
   input += synapse0x29d5280();
   input += synapse0x29d52c0();
   input += synapse0x29d5300();
   input += synapse0x29d5340();
   input += synapse0x29d5380();
   input += synapse0x29d53c0();
   input += synapse0x29d5400();
   input += synapse0x29d5440();
   input += synapse0x29d5480();
   input += synapse0x29d54c0();
   input += synapse0x29d5500();
   input += synapse0x29d5540();
   input += synapse0x29d5580();
   input += synapse0x29d5010();
   input += synapse0x29d5050();
   input += synapse0x29d56d0();
   input += synapse0x29d5710();
   input += synapse0x29d5750();
   input += synapse0x29d5790();
   input += synapse0x29d57d0();
   input += synapse0x29d5810();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d4e80() {
   double input = input0x29d4e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d5850() {
   double input = 1.6332;
   input += synapse0x29d5b90();
   input += synapse0x29d5bd0();
   input += synapse0x29d5c10();
   input += synapse0x29d5c50();
   input += synapse0x29d5c90();
   input += synapse0x29d5cd0();
   input += synapse0x29d5d10();
   input += synapse0x29d5d50();
   input += synapse0x29d5d90();
   input += synapse0x29d5dd0();
   input += synapse0x29d5e10();
   input += synapse0x29d5e50();
   input += synapse0x29d5e90();
   input += synapse0x29d5ed0();
   input += synapse0x29d5f10();
   input += synapse0x29d5f50();
   input += synapse0x29d59e0();
   input += synapse0x29d5a20();
   input += synapse0x29d60a0();
   input += synapse0x29d60e0();
   input += synapse0x29d6120();
   input += synapse0x29d6160();
   input += synapse0x29d61a0();
   input += synapse0x29d61e0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d5850() {
   double input = input0x29d5850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d6220() {
   double input = -0.215972;
   input += synapse0x29d6560();
   input += synapse0x29d65a0();
   input += synapse0x29d65e0();
   input += synapse0x29d6620();
   input += synapse0x29d6660();
   input += synapse0x29d66a0();
   input += synapse0x29d66e0();
   input += synapse0x29d6720();
   input += synapse0x29d6760();
   input += synapse0x29d67a0();
   input += synapse0x29d67e0();
   input += synapse0x29d6820();
   input += synapse0x29d6860();
   input += synapse0x29d68a0();
   input += synapse0x29d68e0();
   input += synapse0x29d6920();
   input += synapse0x29d63b0();
   input += synapse0x29d63f0();
   input += synapse0x29d6a70();
   input += synapse0x29d6ab0();
   input += synapse0x29d6af0();
   input += synapse0x29d6b30();
   input += synapse0x29d6b70();
   input += synapse0x29d6bb0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d6220() {
   double input = input0x29d6220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d6bf0() {
   double input = 0.436803;
   input += synapse0x29bf660();
   input += synapse0x29bf6a0();
   input += synapse0x29bf6e0();
   input += synapse0x29bf720();
   input += synapse0x29bf760();
   input += synapse0x29bf7a0();
   input += synapse0x29bf7e0();
   input += synapse0x29bf820();
   input += synapse0x29d7340();
   input += synapse0x29d7380();
   input += synapse0x29d73c0();
   input += synapse0x29d7400();
   input += synapse0x29d7440();
   input += synapse0x29d7480();
   input += synapse0x29d74c0();
   input += synapse0x29d7500();
   input += synapse0x29d6d80();
   input += synapse0x29d6dc0();
   input += synapse0x29d7650();
   input += synapse0x29d7690();
   input += synapse0x29d76d0();
   input += synapse0x29d7710();
   input += synapse0x29d7750();
   input += synapse0x29d7790();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d6bf0() {
   double input = input0x29d6bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d77d0() {
   double input = -5.43302;
   input += synapse0x29d7b10();
   input += synapse0x29d7b50();
   input += synapse0x29d7b90();
   input += synapse0x29d7bd0();
   input += synapse0x29d7c10();
   input += synapse0x29d7c50();
   input += synapse0x29d7c90();
   input += synapse0x29d7cd0();
   input += synapse0x29d7d10();
   input += synapse0x29d7d50();
   input += synapse0x29d7d90();
   input += synapse0x29d7dd0();
   input += synapse0x29d7e10();
   input += synapse0x29d7e50();
   input += synapse0x29d7e90();
   input += synapse0x29d7ed0();
   input += synapse0x29d7960();
   input += synapse0x29d79a0();
   input += synapse0x29d8020();
   input += synapse0x29d8060();
   input += synapse0x29d80a0();
   input += synapse0x29d80e0();
   input += synapse0x29d8120();
   input += synapse0x29d8160();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d77d0() {
   double input = input0x29d77d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29d81a0() {
   double input = -1.94644;
   input += synapse0x29d84e0();
   input += synapse0x29d8520();
   input += synapse0x29d8560();
   input += synapse0x29d85a0();
   input += synapse0x29d85e0();
   input += synapse0x29d8620();
   input += synapse0x29d8660();
   input += synapse0x29d86a0();
   input += synapse0x29d86e0();
   input += synapse0x29d8720();
   input += synapse0x29d8760();
   input += synapse0x29d87a0();
   input += synapse0x29d87e0();
   input += synapse0x29d8820();
   input += synapse0x29d8860();
   input += synapse0x29d88a0();
   input += synapse0x29d8330();
   input += synapse0x29d8370();
   input += synapse0x29c8ea0();
   input += synapse0x29c8ee0();
   input += synapse0x29c8f20();
   input += synapse0x29c8f60();
   input += synapse0x29c8fa0();
   input += synapse0x29c8fe0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29d81a0() {
   double input = input0x29d81a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c9020() {
   double input = -0.383228;
   input += synapse0x29c9360();
   input += synapse0x29c93a0();
   input += synapse0x29c93e0();
   input += synapse0x29c9420();
   input += synapse0x29c9460();
   input += synapse0x29c94a0();
   input += synapse0x29c94e0();
   input += synapse0x29c9520();
   input += synapse0x29c9560();
   input += synapse0x29c95a0();
   input += synapse0x29c95e0();
   input += synapse0x29c9620();
   input += synapse0x29c9660();
   input += synapse0x29c96a0();
   input += synapse0x29c96e0();
   input += synapse0x29c9720();
   input += synapse0x29c91b0();
   input += synapse0x29c91f0();
   input += synapse0x29c9870();
   input += synapse0x29c98b0();
   input += synapse0x29c98f0();
   input += synapse0x29c9930();
   input += synapse0x29c9970();
   input += synapse0x29c99b0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c9020() {
   double input = input0x29c9020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29c99f0() {
   double input = 0.626541;
   input += synapse0x29c9d30();
   input += synapse0x29c9d70();
   input += synapse0x29c9db0();
   input += synapse0x29c9df0();
   input += synapse0x29c9e30();
   input += synapse0x29c9e70();
   input += synapse0x29c9eb0();
   input += synapse0x29c9ef0();
   input += synapse0x29c9f30();
   input += synapse0x29c9f70();
   input += synapse0x29c9fb0();
   input += synapse0x29c9ff0();
   input += synapse0x29ca030();
   input += synapse0x29ca070();
   input += synapse0x29ca0b0();
   input += synapse0x29ca0f0();
   input += synapse0x29c9b80();
   input += synapse0x29c9bc0();
   input += synapse0x29ca240();
   input += synapse0x29ca280();
   input += synapse0x29ca2c0();
   input += synapse0x29ca300();
   input += synapse0x29ca340();
   input += synapse0x29ca380();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29c99f0() {
   double input = input0x29c99f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29ca3c0() {
   double input = -0.631399;
   input += synapse0x29ca700();
   input += synapse0x29ca740();
   input += synapse0x29ca780();
   input += synapse0x29ca7c0();
   input += synapse0x29ca800();
   input += synapse0x29ca840();
   input += synapse0x29ca880();
   input += synapse0x29ca8c0();
   input += synapse0x29ca900();
   input += synapse0x29ca940();
   input += synapse0x29ca980();
   input += synapse0x29ca9c0();
   input += synapse0x29caa00();
   input += synapse0x29caa40();
   input += synapse0x29caa80();
   input += synapse0x29caac0();
   input += synapse0x29ca550();
   input += synapse0x29ca590();
   input += synapse0x29cac10();
   input += synapse0x29cac50();
   input += synapse0x29cac90();
   input += synapse0x29cacd0();
   input += synapse0x29cad10();
   input += synapse0x29cad50();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29ca3c0() {
   double input = input0x29ca3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29dca00() {
   double input = 1.70569;
   input += synapse0x29dcc20();
   input += synapse0x29dcc60();
   input += synapse0x29dcca0();
   input += synapse0x29dcce0();
   input += synapse0x29dcd20();
   input += synapse0x29dcd60();
   input += synapse0x29dcda0();
   input += synapse0x29dcde0();
   input += synapse0x29dce20();
   input += synapse0x29dce60();
   input += synapse0x29dcea0();
   input += synapse0x29dcee0();
   input += synapse0x29dcf20();
   input += synapse0x29dcf60();
   input += synapse0x29dcfa0();
   input += synapse0x29dcfe0();
   input += synapse0x29cad90();
   input += synapse0x29cadd0();
   input += synapse0x29dd130();
   input += synapse0x29dd170();
   input += synapse0x29dd1b0();
   input += synapse0x29dd1f0();
   input += synapse0x29dd230();
   input += synapse0x29dd270();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29dca00() {
   double input = input0x29dca00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29dd2b0() {
   double input = 1.14032;
   input += synapse0x29dd5f0();
   input += synapse0x29dd630();
   input += synapse0x29dd670();
   input += synapse0x29dd6b0();
   input += synapse0x29dd6f0();
   input += synapse0x29dd730();
   input += synapse0x29dd770();
   input += synapse0x29dd7b0();
   input += synapse0x29dd7f0();
   input += synapse0x29dd830();
   input += synapse0x29dd870();
   input += synapse0x29dd8b0();
   input += synapse0x29dd8f0();
   input += synapse0x29dd930();
   input += synapse0x29dd970();
   input += synapse0x29dd9b0();
   input += synapse0x29dd440();
   input += synapse0x29dd480();
   input += synapse0x29ddb00();
   input += synapse0x29ddb40();
   input += synapse0x29ddb80();
   input += synapse0x29ddbc0();
   input += synapse0x29ddc00();
   input += synapse0x29ddc40();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29dd2b0() {
   double input = input0x29dd2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29ddc80() {
   double input = 0.564962;
   input += synapse0x29ddfc0();
   input += synapse0x29de000();
   input += synapse0x29de040();
   input += synapse0x29de080();
   input += synapse0x29de0c0();
   input += synapse0x29de100();
   input += synapse0x29de140();
   input += synapse0x29de180();
   input += synapse0x29de1c0();
   input += synapse0x29de200();
   input += synapse0x29de240();
   input += synapse0x29de280();
   input += synapse0x29de2c0();
   input += synapse0x29de300();
   input += synapse0x29de340();
   input += synapse0x29de380();
   input += synapse0x29dde10();
   input += synapse0x29dde50();
   input += synapse0x29de4d0();
   input += synapse0x29de510();
   input += synapse0x29de550();
   input += synapse0x29de590();
   input += synapse0x29de5d0();
   input += synapse0x29de610();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29ddc80() {
   double input = input0x29ddc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29de650() {
   double input = 0.744774;
   input += synapse0x29de990();
   input += synapse0x29de9d0();
   input += synapse0x29dea10();
   input += synapse0x29dea50();
   input += synapse0x29dea90();
   input += synapse0x29dead0();
   input += synapse0x29deb10();
   input += synapse0x29deb50();
   input += synapse0x29deb90();
   input += synapse0x29debd0();
   input += synapse0x29dec10();
   input += synapse0x29dec50();
   input += synapse0x29dec90();
   input += synapse0x29decd0();
   input += synapse0x29ded10();
   input += synapse0x29ded50();
   input += synapse0x29de7e0();
   input += synapse0x29de820();
   input += synapse0x29deea0();
   input += synapse0x29deee0();
   input += synapse0x29def20();
   input += synapse0x29def60();
   input += synapse0x29defa0();
   input += synapse0x29defe0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29de650() {
   double input = input0x29de650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29e5850() {
   double input = -0.50052;
   input += synapse0x29bb580();
   input += synapse0x29bb5c0();
   input += synapse0x29bca90();
   input += synapse0x29bcad0();
   input += synapse0x29bd460();
   input += synapse0x29bd4a0();
   input += synapse0x29be230();
   input += synapse0x29be270();
   input += synapse0x29bec00();
   input += synapse0x29bec40();
   input += synapse0x29bf5d0();
   input += synapse0x29bf610();
   input += synapse0x29c00b0();
   input += synapse0x29c00f0();
   input += synapse0x29c0a80();
   input += synapse0x29c0ac0();
   input += synapse0x29bdb60();
   input += synapse0x29bdba0();
   input += synapse0x29c2630();
   input += synapse0x29c2670();
   input += synapse0x29c3000();
   input += synapse0x29c3040();
   input += synapse0x29c39d0();
   input += synapse0x29c3a10();
   input += synapse0x29c43a0();
   input += synapse0x29c43e0();
   input += synapse0x29b8510();
   input += synapse0x29b8550();
   input += synapse0x29c6490();
   input += synapse0x29c64d0();
   input += synapse0x29c6e60();
   input += synapse0x29c6ea0();
   input += synapse0x29c7830();
   input += synapse0x29c7870();
   input += synapse0x29c8200();
   input += synapse0x29c8240();
   input += synapse0x29c8bd0();
   input += synapse0x29c8c10();
   input += synapse0x29c1720();
   input += synapse0x29c1760();
   input += synapse0x29cafd0();
   input += synapse0x29cb010();
   input += synapse0x29cb960();
   input += synapse0x29cb9a0();
   input += synapse0x29cc330();
   input += synapse0x29cc370();
   input += synapse0x29ccd00();
   input += synapse0x29ccd40();
   input += synapse0x29cd6d0();
   input += synapse0x29cd710();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29e5850() {
   double input = input0x29e5850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29e5bf0() {
   double input = 0.658349;
   input += synapse0x29cfe10();
   input += synapse0x29cfe50();
   input += synapse0x29c53d0();
   input += synapse0x29c5410();
   input += synapse0x29d29f0();
   input += synapse0x29d2a30();
   input += synapse0x29d33c0();
   input += synapse0x29d3400();
   input += synapse0x29d3d90();
   input += synapse0x29d3dd0();
   input += synapse0x29d4760();
   input += synapse0x29d47a0();
   input += synapse0x29d5130();
   input += synapse0x29d5170();
   input += synapse0x29d5b00();
   input += synapse0x29d5b40();
   input += synapse0x29d64d0();
   input += synapse0x29d6510();
   input += synapse0x29d6ea0();
   input += synapse0x29d6ee0();
   input += synapse0x29d7a80();
   input += synapse0x29d7ac0();
   input += synapse0x29d8450();
   input += synapse0x29d8490();
   input += synapse0x29c92d0();
   input += synapse0x29c9310();
   input += synapse0x29c9ca0();
   input += synapse0x29c9ce0();
   input += synapse0x29ca670();
   input += synapse0x29ca6b0();
   input += synapse0x29dcb90();
   input += synapse0x29dcbd0();
   input += synapse0x29dd560();
   input += synapse0x29dd5a0();
   input += synapse0x29ddf30();
   input += synapse0x29ddf70();
   input += synapse0x29de900();
   input += synapse0x29de940();
   input += synapse0x29ba7f0();
   input += synapse0x29ba830();
   input += synapse0x29ce0a0();
   input += synapse0x29ce0e0();
   input += synapse0x29df020();
   input += synapse0x29df060();
   input += synapse0x29df0a0();
   input += synapse0x29df0e0();
   input += synapse0x29e5f90();
   input += synapse0x29e5fd0();
   input += synapse0x29e6010();
   input += synapse0x29e6050();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29e5bf0() {
   double input = input0x29e5bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29e6090() {
   double input = -1.4169;
   input += synapse0x29e63d0();
   input += synapse0x29e6410();
   input += synapse0x29e6450();
   input += synapse0x29e6490();
   input += synapse0x29e64d0();
   input += synapse0x29e6510();
   input += synapse0x29e6550();
   input += synapse0x29e6590();
   input += synapse0x29e65d0();
   input += synapse0x29e6610();
   input += synapse0x29e6650();
   input += synapse0x29e6690();
   input += synapse0x29e66d0();
   input += synapse0x29e6710();
   input += synapse0x29e6750();
   input += synapse0x29e6790();
   input += synapse0x29e6220();
   input += synapse0x29e6260();
   input += synapse0x29e68e0();
   input += synapse0x29e6920();
   input += synapse0x29e6960();
   input += synapse0x29e69a0();
   input += synapse0x29e69e0();
   input += synapse0x29e6a20();
   input += synapse0x29e6a60();
   input += synapse0x29e6aa0();
   input += synapse0x29e6ae0();
   input += synapse0x29e6b20();
   input += synapse0x29e6b60();
   input += synapse0x29e6ba0();
   input += synapse0x29e6be0();
   input += synapse0x29e6c20();
   input += synapse0x29e67d0();
   input += synapse0x29e6810();
   input += synapse0x29e6850();
   input += synapse0x29e6890();
   input += synapse0x29e6e70();
   input += synapse0x29e6eb0();
   input += synapse0x29e6ef0();
   input += synapse0x29e6f30();
   input += synapse0x29e6f70();
   input += synapse0x29e6fb0();
   input += synapse0x29e6ff0();
   input += synapse0x29e7030();
   input += synapse0x29e7070();
   input += synapse0x29e70b0();
   input += synapse0x29e70f0();
   input += synapse0x29e7130();
   input += synapse0x29e7170();
   input += synapse0x29e71b0();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29e6090() {
   double input = input0x29e6090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29e71f0() {
   double input = -0.278946;
   input += synapse0x29e7530();
   input += synapse0x29e7570();
   input += synapse0x29e75b0();
   input += synapse0x29e75f0();
   input += synapse0x29e7630();
   input += synapse0x29e7670();
   input += synapse0x29e76b0();
   input += synapse0x29e76f0();
   input += synapse0x29e7730();
   input += synapse0x29e7770();
   input += synapse0x29e77b0();
   input += synapse0x29e77f0();
   input += synapse0x29e7830();
   input += synapse0x29e7870();
   input += synapse0x29e78b0();
   input += synapse0x29e78f0();
   input += synapse0x29e7380();
   input += synapse0x29e73c0();
   input += synapse0x29e7a40();
   input += synapse0x29e7a80();
   input += synapse0x29e7ac0();
   input += synapse0x29e7b00();
   input += synapse0x29e7b40();
   input += synapse0x29e7b80();
   input += synapse0x29e7bc0();
   input += synapse0x29e7c00();
   input += synapse0x29e7c40();
   input += synapse0x29e7c80();
   input += synapse0x29e7cc0();
   input += synapse0x29e7d00();
   input += synapse0x29e7d40();
   input += synapse0x29e7d80();
   input += synapse0x29e7930();
   input += synapse0x29e7970();
   input += synapse0x29e79b0();
   input += synapse0x29e79f0();
   input += synapse0x29e7fd0();
   input += synapse0x29e8010();
   input += synapse0x29e8050();
   input += synapse0x29e8090();
   input += synapse0x29e80d0();
   input += synapse0x29e8110();
   input += synapse0x29e8150();
   input += synapse0x29e8190();
   input += synapse0x29e81d0();
   input += synapse0x29e8210();
   input += synapse0x29e8250();
   input += synapse0x29e8290();
   input += synapse0x29e82d0();
   input += synapse0x29e8310();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29e71f0() {
   double input = input0x29e71f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29e8350() {
   double input = -0.0703694;
   input += synapse0x29e8690();
   input += synapse0x29e86d0();
   input += synapse0x29e8710();
   input += synapse0x29e8750();
   input += synapse0x29e8790();
   input += synapse0x29e87d0();
   input += synapse0x29e8810();
   input += synapse0x29e8850();
   input += synapse0x29e8890();
   input += synapse0x29e88d0();
   input += synapse0x29e8910();
   input += synapse0x29e8950();
   input += synapse0x29e8990();
   input += synapse0x29e89d0();
   input += synapse0x29e8a10();
   input += synapse0x29e8a50();
   input += synapse0x29e84e0();
   input += synapse0x29e8520();
   input += synapse0x29e8ba0();
   input += synapse0x29e8be0();
   input += synapse0x29e8c20();
   input += synapse0x29e8c60();
   input += synapse0x29e8ca0();
   input += synapse0x29e8ce0();
   input += synapse0x29e8d20();
   input += synapse0x29e8d60();
   input += synapse0x29e8da0();
   input += synapse0x29e8de0();
   input += synapse0x29e8e20();
   input += synapse0x29e8e60();
   input += synapse0x29e8ea0();
   input += synapse0x29e8ee0();
   input += synapse0x29e8a90();
   input += synapse0x29e8ad0();
   input += synapse0x29e8b10();
   input += synapse0x29e8b50();
   input += synapse0x29e9130();
   input += synapse0x29e9170();
   input += synapse0x29e91b0();
   input += synapse0x29e91f0();
   input += synapse0x29e9230();
   input += synapse0x29e9270();
   input += synapse0x29e92b0();
   input += synapse0x29e92f0();
   input += synapse0x29e9330();
   input += synapse0x29e9370();
   input += synapse0x29e93b0();
   input += synapse0x29e93f0();
   input += synapse0x29e9430();
   input += synapse0x29e9470();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29e8350() {
   double input = input0x29e8350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLsL::input0x29e94b0() {
   double input = 8.49778;
   input += synapse0x29ba590();
   input += synapse0x29e96d0();
   input += synapse0x29e9710();
   input += synapse0x29e9750();
   input += synapse0x29e9790();
   return input;
}

double NNfunction_sb_cLsL::neuron0x29e94b0() {
   double input = input0x29e94b0();
   return (input * 1)+0;
}

double NNfunction_sb_cLsL::synapse0x27753e0() {
   return (neuron0x29b5570()*-0.77022);
}

double NNfunction_sb_cLsL::synapse0x29b5430() {
   return (neuron0x29b58b0()*0.980577);
}

double NNfunction_sb_cLsL::synapse0x29b5470() {
   return (neuron0x29b5bf0()*0.625689);
}

double NNfunction_sb_cLsL::synapse0x29ba880() {
   return (neuron0x29b5f30()*0.261603);
}

double NNfunction_sb_cLsL::synapse0x29ba8c0() {
   return (neuron0x29b6270()*0.458782);
}

double NNfunction_sb_cLsL::synapse0x29ba900() {
   return (neuron0x29b65b0()*-0.345081);
}

double NNfunction_sb_cLsL::synapse0x29ba940() {
   return (neuron0x29b68f0()*-0.0991119);
}

double NNfunction_sb_cLsL::synapse0x29ba980() {
   return (neuron0x29b6c30()*0.0354202);
}

double NNfunction_sb_cLsL::synapse0x29ba9c0() {
   return (neuron0x29b6f70()*0.974708);
}

double NNfunction_sb_cLsL::synapse0x29baa00() {
   return (neuron0x29b72b0()*0.504534);
}

double NNfunction_sb_cLsL::synapse0x29baa40() {
   return (neuron0x29b75f0()*0.5266);
}

double NNfunction_sb_cLsL::synapse0x29baa80() {
   return (neuron0x29b7930()*0.19312);
}

double NNfunction_sb_cLsL::synapse0x29baac0() {
   return (neuron0x29b7c70()*0.485185);
}

double NNfunction_sb_cLsL::synapse0x29bab00() {
   return (neuron0x29b7fb0()*0.311638);
}

double NNfunction_sb_cLsL::synapse0x29bab40() {
   return (neuron0x29b82f0()*0.347934);
}

double NNfunction_sb_cLsL::synapse0x29bab80() {
   return (neuron0x29b8630()*-0.522416);
}

double NNfunction_sb_cLsL::synapse0x29b53a0() {
   return (neuron0x29b8970()*0.365363);
}

double NNfunction_sb_cLsL::synapse0x29b53e0() {
   return (neuron0x29b8ed0()*-0.0477171);
}

double NNfunction_sb_cLsL::synapse0x2766c80() {
   return (neuron0x29b90f0()*0.533525);
}

double NNfunction_sb_cLsL::synapse0x2766cc0() {
   return (neuron0x29b9430()*0.432307);
}

double NNfunction_sb_cLsL::synapse0x29bade0() {
   return (neuron0x29b9770()*0.00229262);
}

double NNfunction_sb_cLsL::synapse0x29bae20() {
   return (neuron0x29b9ab0()*0.169683);
}

double NNfunction_sb_cLsL::synapse0x29bae60() {
   return (neuron0x29b9df0()*0.559514);
}

double NNfunction_sb_cLsL::synapse0x29baea0() {
   return (neuron0x29ba130()*-0.00157654);
}

double NNfunction_sb_cLsL::synapse0x29bb220() {
   return (neuron0x29b5570()*0.0991019);
}

double NNfunction_sb_cLsL::synapse0x29bb260() {
   return (neuron0x29b58b0()*-0.154467);
}

double NNfunction_sb_cLsL::synapse0x29bb2a0() {
   return (neuron0x29b5bf0()*-0.319876);
}

double NNfunction_sb_cLsL::synapse0x29bb2e0() {
   return (neuron0x29b5f30()*-0.201784);
}

double NNfunction_sb_cLsL::synapse0x29bb320() {
   return (neuron0x29b6270()*0.152584);
}

double NNfunction_sb_cLsL::synapse0x29bb360() {
   return (neuron0x29b65b0()*-0.0340587);
}

double NNfunction_sb_cLsL::synapse0x29bb3a0() {
   return (neuron0x29b68f0()*0.41746);
}

double NNfunction_sb_cLsL::synapse0x29bb3e0() {
   return (neuron0x29b6c30()*0.852117);
}

double NNfunction_sb_cLsL::synapse0x29bb420() {
   return (neuron0x29b6f70()*-0.0753992);
}

double NNfunction_sb_cLsL::synapse0x29bacd0() {
   return (neuron0x29b72b0()*-0.31851);
}

double NNfunction_sb_cLsL::synapse0x29bad10() {
   return (neuron0x29b75f0()*-0.9088);
}

double NNfunction_sb_cLsL::synapse0x29bad50() {
   return (neuron0x29b7930()*1.57067);
}

double NNfunction_sb_cLsL::synapse0x29bad90() {
   return (neuron0x29b7c70()*-0.187933);
}

double NNfunction_sb_cLsL::synapse0x29bb670() {
   return (neuron0x29b7fb0()*0.329896);
}

double NNfunction_sb_cLsL::synapse0x29bb6b0() {
   return (neuron0x29b82f0()*0.0162123);
}

double NNfunction_sb_cLsL::synapse0x29bb6f0() {
   return (neuron0x29b8630()*0.346931);
}

double NNfunction_sb_cLsL::synapse0x29bb070() {
   return (neuron0x29b8970()*0.12863);
}

double NNfunction_sb_cLsL::synapse0x29bb0b0() {
   return (neuron0x29b8ed0()*-0.384763);
}

double NNfunction_sb_cLsL::synapse0x29bb840() {
   return (neuron0x29b90f0()*0.210806);
}

double NNfunction_sb_cLsL::synapse0x29bb880() {
   return (neuron0x29b9430()*1.0709);
}

double NNfunction_sb_cLsL::synapse0x29bb8c0() {
   return (neuron0x29b9770()*-0.448502);
}

double NNfunction_sb_cLsL::synapse0x29bb900() {
   return (neuron0x29b9ab0()*-0.828285);
}

double NNfunction_sb_cLsL::synapse0x29bb940() {
   return (neuron0x29b9df0()*-0.240108);
}

double NNfunction_sb_cLsL::synapse0x29bb980() {
   return (neuron0x29ba130()*-0.30265);
}

double NNfunction_sb_cLsL::synapse0x29bbd00() {
   return (neuron0x29b5570()*-0.517168);
}

double NNfunction_sb_cLsL::synapse0x29bbd40() {
   return (neuron0x29b58b0()*-0.658845);
}

double NNfunction_sb_cLsL::synapse0x29bbd80() {
   return (neuron0x29b5bf0()*-0.0477222);
}

double NNfunction_sb_cLsL::synapse0x29bbdc0() {
   return (neuron0x29b5f30()*0.970212);
}

double NNfunction_sb_cLsL::synapse0x29bbe00() {
   return (neuron0x29b6270()*-0.382438);
}

double NNfunction_sb_cLsL::synapse0x29bbe40() {
   return (neuron0x29b65b0()*0.660435);
}

double NNfunction_sb_cLsL::synapse0x29bbe80() {
   return (neuron0x29b68f0()*-0.898899);
}

double NNfunction_sb_cLsL::synapse0x29bbec0() {
   return (neuron0x29b6c30()*-0.148259);
}

double NNfunction_sb_cLsL::synapse0x29bbf00() {
   return (neuron0x29b6f70()*-0.458915);
}

double NNfunction_sb_cLsL::synapse0x29bbf40() {
   return (neuron0x29b72b0()*0.210854);
}

double NNfunction_sb_cLsL::synapse0x29bbf80() {
   return (neuron0x29b75f0()*0.572498);
}

double NNfunction_sb_cLsL::synapse0x29bbfc0() {
   return (neuron0x29b7930()*0.100618);
}

double NNfunction_sb_cLsL::synapse0x29bc000() {
   return (neuron0x29b7c70()*0.972712);
}

double NNfunction_sb_cLsL::synapse0x29bc040() {
   return (neuron0x29b7fb0()*-0.288266);
}

double NNfunction_sb_cLsL::synapse0x29bc080() {
   return (neuron0x29b82f0()*-0.572776);
}

double NNfunction_sb_cLsL::synapse0x29bc0c0() {
   return (neuron0x29b8630()*-0.332243);
}

double NNfunction_sb_cLsL::synapse0x29bbb50() {
   return (neuron0x29b8970()*-0.0978851);
}

double NNfunction_sb_cLsL::synapse0x29bbb90() {
   return (neuron0x29b8ed0()*-0.433039);
}

double NNfunction_sb_cLsL::synapse0x2774ad0() {
   return (neuron0x29b90f0()*-0.5446);
}

double NNfunction_sb_cLsL::synapse0x2774b10() {
   return (neuron0x29b9430()*0.430829);
}

double NNfunction_sb_cLsL::synapse0x29a4600() {
   return (neuron0x29b9770()*0.693526);
}

double NNfunction_sb_cLsL::synapse0x29a4640() {
   return (neuron0x29b9ab0()*-0.525614);
}

double NNfunction_sb_cLsL::synapse0x29a4680() {
   return (neuron0x29b9df0()*-0.171773);
}

double NNfunction_sb_cLsL::synapse0x29b54b0() {
   return (neuron0x29ba130()*0.101249);
}

double NNfunction_sb_cLsL::synapse0x29bb610() {
   return (neuron0x29b5570()*-0.0472856);
}

double NNfunction_sb_cLsL::synapse0x29b54f0() {
   return (neuron0x29b58b0()*-0.0117489);
}

double NNfunction_sb_cLsL::synapse0x29b5530() {
   return (neuron0x29b5bf0()*-0.162872);
}

double NNfunction_sb_cLsL::synapse0x29bc210() {
   return (neuron0x29b5f30()*-3.23848);
}

double NNfunction_sb_cLsL::synapse0x29bc250() {
   return (neuron0x29b6270()*0.0861161);
}

double NNfunction_sb_cLsL::synapse0x29bc290() {
   return (neuron0x29b65b0()*-0.0871709);
}

double NNfunction_sb_cLsL::synapse0x29bc2d0() {
   return (neuron0x29b68f0()*0.0768825);
}

double NNfunction_sb_cLsL::synapse0x29bc310() {
   return (neuron0x29b6c30()*-0.222894);
}

double NNfunction_sb_cLsL::synapse0x29bc350() {
   return (neuron0x29b6f70()*0.0620434);
}

double NNfunction_sb_cLsL::synapse0x29bc390() {
   return (neuron0x29b72b0()*-0.372696);
}

double NNfunction_sb_cLsL::synapse0x29bc3d0() {
   return (neuron0x29b75f0()*-0.000740913);
}

double NNfunction_sb_cLsL::synapse0x29bc410() {
   return (neuron0x29b7930()*0.136478);
}

double NNfunction_sb_cLsL::synapse0x29bc450() {
   return (neuron0x29b7c70()*-0.219555);
}

double NNfunction_sb_cLsL::synapse0x29bc490() {
   return (neuron0x29b7fb0()*0.0939357);
}

double NNfunction_sb_cLsL::synapse0x29bc4d0() {
   return (neuron0x29b82f0()*-0.0622384);
}

double NNfunction_sb_cLsL::synapse0x29bc510() {
   return (neuron0x29b8630()*0.14259);
}

double NNfunction_sb_cLsL::synapse0x29bb460() {
   return (neuron0x29b8970()*-0.35372);
}

double NNfunction_sb_cLsL::synapse0x29bb4a0() {
   return (neuron0x29b8ed0()*0.0509445);
}

double NNfunction_sb_cLsL::synapse0x29bc660() {
   return (neuron0x29b90f0()*0.062746);
}

double NNfunction_sb_cLsL::synapse0x29bc6a0() {
   return (neuron0x29b9430()*0.202625);
}

double NNfunction_sb_cLsL::synapse0x29bc6e0() {
   return (neuron0x29b9770()*-0.272314);
}

double NNfunction_sb_cLsL::synapse0x29bc720() {
   return (neuron0x29b9ab0()*0.17803);
}

double NNfunction_sb_cLsL::synapse0x29bc760() {
   return (neuron0x29b9df0()*-0.134941);
}

double NNfunction_sb_cLsL::synapse0x29bc7a0() {
   return (neuron0x29ba130()*0.182466);
}

double NNfunction_sb_cLsL::synapse0x29bcb20() {
   return (neuron0x29b5570()*-0.00547186);
}

double NNfunction_sb_cLsL::synapse0x29bcb60() {
   return (neuron0x29b58b0()*0.0152905);
}

double NNfunction_sb_cLsL::synapse0x29bcba0() {
   return (neuron0x29b5bf0()*0.0303934);
}

double NNfunction_sb_cLsL::synapse0x29bcbe0() {
   return (neuron0x29b5f30()*2.25583);
}

double NNfunction_sb_cLsL::synapse0x29bcc20() {
   return (neuron0x29b6270()*-0.0278016);
}

double NNfunction_sb_cLsL::synapse0x29bcc60() {
   return (neuron0x29b65b0()*-0.00805984);
}

double NNfunction_sb_cLsL::synapse0x29bcca0() {
   return (neuron0x29b68f0()*0.00480374);
}

double NNfunction_sb_cLsL::synapse0x29bcce0() {
   return (neuron0x29b6c30()*-0.032369);
}

double NNfunction_sb_cLsL::synapse0x29bcd20() {
   return (neuron0x29b6f70()*0.03662);
}

double NNfunction_sb_cLsL::synapse0x29bcd60() {
   return (neuron0x29b72b0()*-0.0290797);
}

double NNfunction_sb_cLsL::synapse0x29bcda0() {
   return (neuron0x29b75f0()*-0.0127998);
}

double NNfunction_sb_cLsL::synapse0x29bcde0() {
   return (neuron0x29b7930()*0.02231);
}

double NNfunction_sb_cLsL::synapse0x29bce20() {
   return (neuron0x29b7c70()*0.99921);
}

double NNfunction_sb_cLsL::synapse0x29bce60() {
   return (neuron0x29b7fb0()*-0.00494682);
}

double NNfunction_sb_cLsL::synapse0x29bcea0() {
   return (neuron0x29b82f0()*0.0168041);
}

double NNfunction_sb_cLsL::synapse0x29bcee0() {
   return (neuron0x29b8630()*0.00747239);
}

double NNfunction_sb_cLsL::synapse0x29bc970() {
   return (neuron0x29b8970()*-0.0143816);
}

double NNfunction_sb_cLsL::synapse0x29bc9b0() {
   return (neuron0x29b8ed0()*0.00820096);
}

double NNfunction_sb_cLsL::synapse0x29bd030() {
   return (neuron0x29b90f0()*0.00210276);
}

double NNfunction_sb_cLsL::synapse0x29bd070() {
   return (neuron0x29b9430()*-0.00839933);
}

double NNfunction_sb_cLsL::synapse0x29bd0b0() {
   return (neuron0x29b9770()*-0.0345847);
}

double NNfunction_sb_cLsL::synapse0x29bd0f0() {
   return (neuron0x29b9ab0()*0.0190211);
}

double NNfunction_sb_cLsL::synapse0x29bd130() {
   return (neuron0x29b9df0()*0.0188361);
}

double NNfunction_sb_cLsL::synapse0x29bd170() {
   return (neuron0x29ba130()*-0.0327909);
}

double NNfunction_sb_cLsL::synapse0x29bd4f0() {
   return (neuron0x29b5570()*-0.0103186);
}

double NNfunction_sb_cLsL::synapse0x29bd530() {
   return (neuron0x29b58b0()*-0.0321912);
}

double NNfunction_sb_cLsL::synapse0x29bd570() {
   return (neuron0x29b5bf0()*0.0572142);
}

double NNfunction_sb_cLsL::synapse0x29bd5b0() {
   return (neuron0x29b5f30()*2.18911);
}

double NNfunction_sb_cLsL::synapse0x29bd5f0() {
   return (neuron0x29b6270()*-0.0642542);
}

double NNfunction_sb_cLsL::synapse0x29bd630() {
   return (neuron0x29b65b0()*0.0251044);
}

double NNfunction_sb_cLsL::synapse0x29bd670() {
   return (neuron0x29b68f0()*0.0993945);
}

double NNfunction_sb_cLsL::synapse0x29bd6b0() {
   return (neuron0x29b6c30()*0.032724);
}

double NNfunction_sb_cLsL::synapse0x29bd6f0() {
   return (neuron0x29b6f70()*-0.0555067);
}

double NNfunction_sb_cLsL::synapse0x2774e40() {
   return (neuron0x29b72b0()*-0.0381832);
}

double NNfunction_sb_cLsL::synapse0x2774e80() {
   return (neuron0x29b75f0()*-0.0517188);
}

double NNfunction_sb_cLsL::synapse0x2774ec0() {
   return (neuron0x29b7930()*0.0441338);
}

double NNfunction_sb_cLsL::synapse0x2774f00() {
   return (neuron0x29b7c70()*-1.19719);
}

double NNfunction_sb_cLsL::synapse0x2774f40() {
   return (neuron0x29b7fb0()*-0.10318);
}

double NNfunction_sb_cLsL::synapse0x2774f80() {
   return (neuron0x29b82f0()*0.124561);
}

double NNfunction_sb_cLsL::synapse0x2774fc0() {
   return (neuron0x29b8630()*0.190226);
}

double NNfunction_sb_cLsL::synapse0x29bd340() {
   return (neuron0x29b8970()*-0.188499);
}

double NNfunction_sb_cLsL::synapse0x29bd380() {
   return (neuron0x29b8ed0()*0.00413998);
}

double NNfunction_sb_cLsL::synapse0x2775110() {
   return (neuron0x29b90f0()*0.0726597);
}

double NNfunction_sb_cLsL::synapse0x2775150() {
   return (neuron0x29b9430()*0.0333451);
}

double NNfunction_sb_cLsL::synapse0x2775190() {
   return (neuron0x29b9770()*0.0317905);
}

double NNfunction_sb_cLsL::synapse0x27751d0() {
   return (neuron0x29b9ab0()*0.0274341);
}

double NNfunction_sb_cLsL::synapse0x2775210() {
   return (neuron0x29b9df0()*0.0149427);
}

double NNfunction_sb_cLsL::synapse0x29bdf40() {
   return (neuron0x29ba130()*-0.0125095);
}

double NNfunction_sb_cLsL::synapse0x29be2c0() {
   return (neuron0x29b5570()*0.0161069);
}

double NNfunction_sb_cLsL::synapse0x29be300() {
   return (neuron0x29b58b0()*0.042153);
}

double NNfunction_sb_cLsL::synapse0x29be340() {
   return (neuron0x29b5bf0()*-0.0511162);
}

double NNfunction_sb_cLsL::synapse0x29be380() {
   return (neuron0x29b5f30()*0.0723565);
}

double NNfunction_sb_cLsL::synapse0x29be3c0() {
   return (neuron0x29b6270()*0.0572364);
}

double NNfunction_sb_cLsL::synapse0x29be400() {
   return (neuron0x29b65b0()*-0.0210209);
}

double NNfunction_sb_cLsL::synapse0x29be440() {
   return (neuron0x29b68f0()*0.108124);
}

double NNfunction_sb_cLsL::synapse0x29be480() {
   return (neuron0x29b6c30()*-0.0562635);
}

double NNfunction_sb_cLsL::synapse0x29be4c0() {
   return (neuron0x29b6f70()*0.0336425);
}

double NNfunction_sb_cLsL::synapse0x29be500() {
   return (neuron0x29b72b0()*0.00381624);
}

double NNfunction_sb_cLsL::synapse0x29be540() {
   return (neuron0x29b75f0()*0.0535279);
}

double NNfunction_sb_cLsL::synapse0x29be580() {
   return (neuron0x29b7930()*-0.0326735);
}

double NNfunction_sb_cLsL::synapse0x29be5c0() {
   return (neuron0x29b7c70()*-0.919442);
}

double NNfunction_sb_cLsL::synapse0x29be600() {
   return (neuron0x29b7fb0()*-0.0479175);
}

double NNfunction_sb_cLsL::synapse0x29be640() {
   return (neuron0x29b82f0()*-0.0469917);
}

double NNfunction_sb_cLsL::synapse0x29be680() {
   return (neuron0x29b8630()*-0.00250793);
}

double NNfunction_sb_cLsL::synapse0x29be110() {
   return (neuron0x29b8970()*-0.0280419);
}

double NNfunction_sb_cLsL::synapse0x29be150() {
   return (neuron0x29b8ed0()*0.030613);
}

double NNfunction_sb_cLsL::synapse0x29be7d0() {
   return (neuron0x29b90f0()*0.0301083);
}

double NNfunction_sb_cLsL::synapse0x29be810() {
   return (neuron0x29b9430()*-0.057433);
}

double NNfunction_sb_cLsL::synapse0x29be850() {
   return (neuron0x29b9770()*-0.0223909);
}

double NNfunction_sb_cLsL::synapse0x29be890() {
   return (neuron0x29b9ab0()*-0.0543038);
}

double NNfunction_sb_cLsL::synapse0x29be8d0() {
   return (neuron0x29b9df0()*0.0596647);
}

double NNfunction_sb_cLsL::synapse0x29be910() {
   return (neuron0x29ba130()*-0.120718);
}

double NNfunction_sb_cLsL::synapse0x29bec90() {
   return (neuron0x29b5570()*0.044751);
}

double NNfunction_sb_cLsL::synapse0x29becd0() {
   return (neuron0x29b58b0()*-0.00268525);
}

double NNfunction_sb_cLsL::synapse0x29bed10() {
   return (neuron0x29b5bf0()*0.757479);
}

double NNfunction_sb_cLsL::synapse0x29bed50() {
   return (neuron0x29b5f30()*-0.22501);
}

double NNfunction_sb_cLsL::synapse0x29bed90() {
   return (neuron0x29b6270()*-0.0277831);
}

double NNfunction_sb_cLsL::synapse0x29bedd0() {
   return (neuron0x29b65b0()*-0.00206374);
}

double NNfunction_sb_cLsL::synapse0x29bee10() {
   return (neuron0x29b68f0()*-0.0352058);
}

double NNfunction_sb_cLsL::synapse0x29bee50() {
   return (neuron0x29b6c30()*0.00750126);
}

double NNfunction_sb_cLsL::synapse0x29bee90() {
   return (neuron0x29b6f70()*-0.00680657);
}

double NNfunction_sb_cLsL::synapse0x29beed0() {
   return (neuron0x29b72b0()*0.00950446);
}

double NNfunction_sb_cLsL::synapse0x29bef10() {
   return (neuron0x29b75f0()*-0.00159666);
}

double NNfunction_sb_cLsL::synapse0x29bef50() {
   return (neuron0x29b7930()*0.255148);
}

double NNfunction_sb_cLsL::synapse0x29bef90() {
   return (neuron0x29b7c70()*0.0200783);
}

double NNfunction_sb_cLsL::synapse0x29befd0() {
   return (neuron0x29b7fb0()*-0.0531887);
}

double NNfunction_sb_cLsL::synapse0x29bf010() {
   return (neuron0x29b82f0()*0.229607);
}

double NNfunction_sb_cLsL::synapse0x29bf050() {
   return (neuron0x29b8630()*0.105895);
}

double NNfunction_sb_cLsL::synapse0x29beae0() {
   return (neuron0x29b8970()*-0.0857968);
}

double NNfunction_sb_cLsL::synapse0x29beb20() {
   return (neuron0x29b8ed0()*0.132679);
}

double NNfunction_sb_cLsL::synapse0x29bf1a0() {
   return (neuron0x29b90f0()*0.151945);
}

double NNfunction_sb_cLsL::synapse0x29bf1e0() {
   return (neuron0x29b9430()*0.0107298);
}

double NNfunction_sb_cLsL::synapse0x29bf220() {
   return (neuron0x29b9770()*-0.0187701);
}

double NNfunction_sb_cLsL::synapse0x29bf260() {
   return (neuron0x29b9ab0()*0.00830247);
}

double NNfunction_sb_cLsL::synapse0x29bf2a0() {
   return (neuron0x29b9df0()*0.0115553);
}

double NNfunction_sb_cLsL::synapse0x29bf2e0() {
   return (neuron0x29ba130()*-0.0225249);
}

double NNfunction_sb_cLsL::synapse0x29b8dc0() {
   return (neuron0x29b5570()*-0.872563);
}

double NNfunction_sb_cLsL::synapse0x29b8e00() {
   return (neuron0x29b58b0()*0.775765);
}

double NNfunction_sb_cLsL::synapse0x29b8e40() {
   return (neuron0x29b5bf0()*0.28826);
}

double NNfunction_sb_cLsL::synapse0x29b8e80() {
   return (neuron0x29b5f30()*0.514876);
}

double NNfunction_sb_cLsL::synapse0x29bf870() {
   return (neuron0x29b6270()*0.327184);
}

double NNfunction_sb_cLsL::synapse0x29bf8b0() {
   return (neuron0x29b65b0()*-0.616844);
}

double NNfunction_sb_cLsL::synapse0x29bf8f0() {
   return (neuron0x29b68f0()*0.0668989);
}

double NNfunction_sb_cLsL::synapse0x29bf930() {
   return (neuron0x29b6c30()*0.392005);
}

double NNfunction_sb_cLsL::synapse0x29bf970() {
   return (neuron0x29b6f70()*-0.409319);
}

double NNfunction_sb_cLsL::synapse0x29bf9b0() {
   return (neuron0x29b72b0()*0.0832102);
}

double NNfunction_sb_cLsL::synapse0x29bf9f0() {
   return (neuron0x29b75f0()*-0.454078);
}

double NNfunction_sb_cLsL::synapse0x29bfa30() {
   return (neuron0x29b7930()*0.0271437);
}

double NNfunction_sb_cLsL::synapse0x29bfa70() {
   return (neuron0x29b7c70()*0.852654);
}

double NNfunction_sb_cLsL::synapse0x29bfab0() {
   return (neuron0x29b7fb0()*0.0314444);
}

double NNfunction_sb_cLsL::synapse0x29bfaf0() {
   return (neuron0x29b82f0()*0.207769);
}

double NNfunction_sb_cLsL::synapse0x29bfb30() {
   return (neuron0x29b8630()*0.632552);
}

double NNfunction_sb_cLsL::synapse0x29bf4b0() {
   return (neuron0x29b8970()*-0.052786);
}

double NNfunction_sb_cLsL::synapse0x29bf4f0() {
   return (neuron0x29b8ed0()*-0.36748);
}

double NNfunction_sb_cLsL::synapse0x29bfc80() {
   return (neuron0x29b90f0()*-0.502042);
}

double NNfunction_sb_cLsL::synapse0x29bfcc0() {
   return (neuron0x29b9430()*0.524245);
}

double NNfunction_sb_cLsL::synapse0x29bfd00() {
   return (neuron0x29b9770()*0.122393);
}

double NNfunction_sb_cLsL::synapse0x29bfd40() {
   return (neuron0x29b9ab0()*0.648412);
}

double NNfunction_sb_cLsL::synapse0x29bfd80() {
   return (neuron0x29b9df0()*0.135576);
}

double NNfunction_sb_cLsL::synapse0x29bfdc0() {
   return (neuron0x29ba130()*-0.0933248);
}

double NNfunction_sb_cLsL::synapse0x29c0140() {
   return (neuron0x29b5570()*-1.03153);
}

double NNfunction_sb_cLsL::synapse0x29c0180() {
   return (neuron0x29b58b0()*-0.408229);
}

double NNfunction_sb_cLsL::synapse0x29c01c0() {
   return (neuron0x29b5bf0()*0.930042);
}

double NNfunction_sb_cLsL::synapse0x29c0200() {
   return (neuron0x29b5f30()*-0.443458);
}

double NNfunction_sb_cLsL::synapse0x29c0240() {
   return (neuron0x29b6270()*-0.509748);
}

double NNfunction_sb_cLsL::synapse0x29c0280() {
   return (neuron0x29b65b0()*0.884742);
}

double NNfunction_sb_cLsL::synapse0x29c02c0() {
   return (neuron0x29b68f0()*-0.316293);
}

double NNfunction_sb_cLsL::synapse0x29c0300() {
   return (neuron0x29b6c30()*0.0766947);
}

double NNfunction_sb_cLsL::synapse0x29c0340() {
   return (neuron0x29b6f70()*-0.708129);
}

double NNfunction_sb_cLsL::synapse0x29c0380() {
   return (neuron0x29b72b0()*-0.0960998);
}

double NNfunction_sb_cLsL::synapse0x29c03c0() {
   return (neuron0x29b75f0()*0.557529);
}

double NNfunction_sb_cLsL::synapse0x29c0400() {
   return (neuron0x29b7930()*0.24849);
}

double NNfunction_sb_cLsL::synapse0x29c0440() {
   return (neuron0x29b7c70()*-0.611443);
}

double NNfunction_sb_cLsL::synapse0x29c0480() {
   return (neuron0x29b7fb0()*0.358075);
}

double NNfunction_sb_cLsL::synapse0x29c04c0() {
   return (neuron0x29b82f0()*0.085757);
}

double NNfunction_sb_cLsL::synapse0x29c0500() {
   return (neuron0x29b8630()*-0.0778891);
}

double NNfunction_sb_cLsL::synapse0x29bff90() {
   return (neuron0x29b8970()*-0.388491);
}

double NNfunction_sb_cLsL::synapse0x29bffd0() {
   return (neuron0x29b8ed0()*-0.921533);
}

double NNfunction_sb_cLsL::synapse0x29c0650() {
   return (neuron0x29b90f0()*-0.143784);
}

double NNfunction_sb_cLsL::synapse0x29c0690() {
   return (neuron0x29b9430()*-0.0123447);
}

double NNfunction_sb_cLsL::synapse0x29c06d0() {
   return (neuron0x29b9770()*0.360673);
}

double NNfunction_sb_cLsL::synapse0x29c0710() {
   return (neuron0x29b9ab0()*0.476006);
}

double NNfunction_sb_cLsL::synapse0x29c0750() {
   return (neuron0x29b9df0()*0.443512);
}

double NNfunction_sb_cLsL::synapse0x29c0790() {
   return (neuron0x29ba130()*-0.172786);
}

double NNfunction_sb_cLsL::synapse0x29c0b10() {
   return (neuron0x29b5570()*0.0209075);
}

double NNfunction_sb_cLsL::synapse0x29c0b50() {
   return (neuron0x29b58b0()*0.0389818);
}

double NNfunction_sb_cLsL::synapse0x29c0b90() {
   return (neuron0x29b5bf0()*-0.0214244);
}

double NNfunction_sb_cLsL::synapse0x29c0bd0() {
   return (neuron0x29b5f30()*2.33321);
}

double NNfunction_sb_cLsL::synapse0x29c0c10() {
   return (neuron0x29b6270()*-0.00156592);
}

double NNfunction_sb_cLsL::synapse0x29c0c50() {
   return (neuron0x29b65b0()*0.0379702);
}

double NNfunction_sb_cLsL::synapse0x29c0c90() {
   return (neuron0x29b68f0()*0.025198);
}

double NNfunction_sb_cLsL::synapse0x29c0cd0() {
   return (neuron0x29b6c30()*-0.0102216);
}

double NNfunction_sb_cLsL::synapse0x29c0d10() {
   return (neuron0x29b6f70()*-0.0279878);
}

double NNfunction_sb_cLsL::synapse0x29c0d50() {
   return (neuron0x29b72b0()*-0.00222476);
}

double NNfunction_sb_cLsL::synapse0x29c0d90() {
   return (neuron0x29b75f0()*-0.0259144);
}

double NNfunction_sb_cLsL::synapse0x29c0dd0() {
   return (neuron0x29b7930()*-0.0900296);
}

double NNfunction_sb_cLsL::synapse0x29c0e10() {
   return (neuron0x29b7c70()*0.971114);
}

double NNfunction_sb_cLsL::synapse0x29c0e50() {
   return (neuron0x29b7fb0()*-0.0311786);
}

double NNfunction_sb_cLsL::synapse0x29c0e90() {
   return (neuron0x29b82f0()*0.0050008);
}

double NNfunction_sb_cLsL::synapse0x29c0ed0() {
   return (neuron0x29b8630()*-0.030666);
}

double NNfunction_sb_cLsL::synapse0x29c0960() {
   return (neuron0x29b8970()*-0.0116897);
}

double NNfunction_sb_cLsL::synapse0x29c09a0() {
   return (neuron0x29b8ed0()*-0.0316392);
}

double NNfunction_sb_cLsL::synapse0x29bd730() {
   return (neuron0x29b90f0()*-0.0451687);
}

double NNfunction_sb_cLsL::synapse0x29bd770() {
   return (neuron0x29b9430()*-0.0266458);
}

double NNfunction_sb_cLsL::synapse0x29bd7b0() {
   return (neuron0x29b9770()*-0.0443623);
}

double NNfunction_sb_cLsL::synapse0x29bd7f0() {
   return (neuron0x29b9ab0()*-0.0264436);
}

double NNfunction_sb_cLsL::synapse0x29bd830() {
   return (neuron0x29b9df0()*0.00304394);
}

double NNfunction_sb_cLsL::synapse0x29bd870() {
   return (neuron0x29ba130()*-0.0689385);
}

double NNfunction_sb_cLsL::synapse0x29bdbf0() {
   return (neuron0x29b5570()*0.551724);
}

double NNfunction_sb_cLsL::synapse0x29bdc30() {
   return (neuron0x29b58b0()*0.0436423);
}

double NNfunction_sb_cLsL::synapse0x29bdc70() {
   return (neuron0x29b5bf0()*-1.85339);
}

double NNfunction_sb_cLsL::synapse0x29bdcb0() {
   return (neuron0x29b5f30()*-0.965787);
}

double NNfunction_sb_cLsL::synapse0x29bdcf0() {
   return (neuron0x29b6270()*-0.220548);
}

double NNfunction_sb_cLsL::synapse0x29bdd30() {
   return (neuron0x29b65b0()*-0.0652199);
}

double NNfunction_sb_cLsL::synapse0x29bdd70() {
   return (neuron0x29b68f0()*0.239365);
}

double NNfunction_sb_cLsL::synapse0x29bddb0() {
   return (neuron0x29b6c30()*-0.457593);
}

double NNfunction_sb_cLsL::synapse0x29bddf0() {
   return (neuron0x29b6f70()*-0.111753);
}

double NNfunction_sb_cLsL::synapse0x29bde30() {
   return (neuron0x29b72b0()*-0.154528);
}

double NNfunction_sb_cLsL::synapse0x29bde70() {
   return (neuron0x29b75f0()*-0.620072);
}

double NNfunction_sb_cLsL::synapse0x29bdeb0() {
   return (neuron0x29b7930()*-0.0654287);
}

double NNfunction_sb_cLsL::synapse0x29bdef0() {
   return (neuron0x29b7c70()*0.138448);
}

double NNfunction_sb_cLsL::synapse0x29c2030() {
   return (neuron0x29b7fb0()*0.0981973);
}

double NNfunction_sb_cLsL::synapse0x29c2070() {
   return (neuron0x29b82f0()*-0.37852);
}

double NNfunction_sb_cLsL::synapse0x29c20b0() {
   return (neuron0x29b8630()*0.907584);
}

double NNfunction_sb_cLsL::synapse0x29bda40() {
   return (neuron0x29b8970()*0.274787);
}

double NNfunction_sb_cLsL::synapse0x29bda80() {
   return (neuron0x29b8ed0()*0.0876943);
}

double NNfunction_sb_cLsL::synapse0x29c2200() {
   return (neuron0x29b90f0()*-0.665277);
}

double NNfunction_sb_cLsL::synapse0x29c2240() {
   return (neuron0x29b9430()*0.503181);
}

double NNfunction_sb_cLsL::synapse0x29c2280() {
   return (neuron0x29b9770()*-0.352363);
}

double NNfunction_sb_cLsL::synapse0x29c22c0() {
   return (neuron0x29b9ab0()*0.264228);
}

double NNfunction_sb_cLsL::synapse0x29c2300() {
   return (neuron0x29b9df0()*0.344172);
}

double NNfunction_sb_cLsL::synapse0x29c2340() {
   return (neuron0x29ba130()*0.44777);
}

double NNfunction_sb_cLsL::synapse0x29c26c0() {
   return (neuron0x29b5570()*0.625296);
}

double NNfunction_sb_cLsL::synapse0x29c2700() {
   return (neuron0x29b58b0()*-0.261453);
}

double NNfunction_sb_cLsL::synapse0x29c2740() {
   return (neuron0x29b5bf0()*-0.0978229);
}

double NNfunction_sb_cLsL::synapse0x29c2780() {
   return (neuron0x29b5f30()*-0.891577);
}

double NNfunction_sb_cLsL::synapse0x29c27c0() {
   return (neuron0x29b6270()*0.864393);
}

double NNfunction_sb_cLsL::synapse0x29c2800() {
   return (neuron0x29b65b0()*0.989117);
}

double NNfunction_sb_cLsL::synapse0x29c2840() {
   return (neuron0x29b68f0()*0.0441284);
}

double NNfunction_sb_cLsL::synapse0x29c2880() {
   return (neuron0x29b6c30()*-0.453686);
}

double NNfunction_sb_cLsL::synapse0x29c28c0() {
   return (neuron0x29b6f70()*-0.294204);
}

double NNfunction_sb_cLsL::synapse0x29c2900() {
   return (neuron0x29b72b0()*0.200109);
}

double NNfunction_sb_cLsL::synapse0x29c2940() {
   return (neuron0x29b75f0()*0.264028);
}

double NNfunction_sb_cLsL::synapse0x29c2980() {
   return (neuron0x29b7930()*-0.995522);
}

double NNfunction_sb_cLsL::synapse0x29c29c0() {
   return (neuron0x29b7c70()*1.04269);
}

double NNfunction_sb_cLsL::synapse0x29c2a00() {
   return (neuron0x29b7fb0()*0.087876);
}

double NNfunction_sb_cLsL::synapse0x29c2a40() {
   return (neuron0x29b82f0()*0.419823);
}

double NNfunction_sb_cLsL::synapse0x29c2a80() {
   return (neuron0x29b8630()*-0.249671);
}

double NNfunction_sb_cLsL::synapse0x29c2510() {
   return (neuron0x29b8970()*0.590709);
}

double NNfunction_sb_cLsL::synapse0x29c2550() {
   return (neuron0x29b8ed0()*-0.327241);
}

double NNfunction_sb_cLsL::synapse0x29c2bd0() {
   return (neuron0x29b90f0()*-0.0256351);
}

double NNfunction_sb_cLsL::synapse0x29c2c10() {
   return (neuron0x29b9430()*0.0357186);
}

double NNfunction_sb_cLsL::synapse0x29c2c50() {
   return (neuron0x29b9770()*-0.108642);
}

double NNfunction_sb_cLsL::synapse0x29c2c90() {
   return (neuron0x29b9ab0()*-0.237551);
}

double NNfunction_sb_cLsL::synapse0x29c2cd0() {
   return (neuron0x29b9df0()*-0.37817);
}

double NNfunction_sb_cLsL::synapse0x29c2d10() {
   return (neuron0x29ba130()*0.240434);
}

double NNfunction_sb_cLsL::synapse0x29c3090() {
   return (neuron0x29b5570()*-0.0105869);
}

double NNfunction_sb_cLsL::synapse0x29c30d0() {
   return (neuron0x29b58b0()*0.739044);
}

double NNfunction_sb_cLsL::synapse0x29c3110() {
   return (neuron0x29b5bf0()*0.180077);
}

double NNfunction_sb_cLsL::synapse0x29c3150() {
   return (neuron0x29b5f30()*0.354241);
}

double NNfunction_sb_cLsL::synapse0x29c3190() {
   return (neuron0x29b6270()*-0.944081);
}

double NNfunction_sb_cLsL::synapse0x29c31d0() {
   return (neuron0x29b65b0()*-0.451123);
}

double NNfunction_sb_cLsL::synapse0x29c3210() {
   return (neuron0x29b68f0()*0.292943);
}

double NNfunction_sb_cLsL::synapse0x29c3250() {
   return (neuron0x29b6c30()*0.285667);
}

double NNfunction_sb_cLsL::synapse0x29c3290() {
   return (neuron0x29b6f70()*0.0454052);
}

double NNfunction_sb_cLsL::synapse0x29c32d0() {
   return (neuron0x29b72b0()*-0.474095);
}

double NNfunction_sb_cLsL::synapse0x29c3310() {
   return (neuron0x29b75f0()*-0.147327);
}

double NNfunction_sb_cLsL::synapse0x29c3350() {
   return (neuron0x29b7930()*0.236575);
}

double NNfunction_sb_cLsL::synapse0x29c3390() {
   return (neuron0x29b7c70()*-0.960432);
}

double NNfunction_sb_cLsL::synapse0x29c33d0() {
   return (neuron0x29b7fb0()*-0.310833);
}

double NNfunction_sb_cLsL::synapse0x29c3410() {
   return (neuron0x29b82f0()*-0.113556);
}

double NNfunction_sb_cLsL::synapse0x29c3450() {
   return (neuron0x29b8630()*-0.429262);
}

double NNfunction_sb_cLsL::synapse0x29c2ee0() {
   return (neuron0x29b8970()*-0.118347);
}

double NNfunction_sb_cLsL::synapse0x29c2f20() {
   return (neuron0x29b8ed0()*0.266043);
}

double NNfunction_sb_cLsL::synapse0x29c35a0() {
   return (neuron0x29b90f0()*-0.142246);
}

double NNfunction_sb_cLsL::synapse0x29c35e0() {
   return (neuron0x29b9430()*0.11688);
}

double NNfunction_sb_cLsL::synapse0x29c3620() {
   return (neuron0x29b9770()*-0.35813);
}

double NNfunction_sb_cLsL::synapse0x29c3660() {
   return (neuron0x29b9ab0()*0.497095);
}

double NNfunction_sb_cLsL::synapse0x29c36a0() {
   return (neuron0x29b9df0()*-0.187215);
}

double NNfunction_sb_cLsL::synapse0x29c36e0() {
   return (neuron0x29ba130()*0.365759);
}

double NNfunction_sb_cLsL::synapse0x29c3a60() {
   return (neuron0x29b5570()*0.266398);
}

double NNfunction_sb_cLsL::synapse0x29c3aa0() {
   return (neuron0x29b58b0()*0.32063);
}

double NNfunction_sb_cLsL::synapse0x29c3ae0() {
   return (neuron0x29b5bf0()*-0.224946);
}

double NNfunction_sb_cLsL::synapse0x29c3b20() {
   return (neuron0x29b5f30()*0.811904);
}

double NNfunction_sb_cLsL::synapse0x29c3b60() {
   return (neuron0x29b6270()*0.110835);
}

double NNfunction_sb_cLsL::synapse0x29c3ba0() {
   return (neuron0x29b65b0()*-0.865271);
}

double NNfunction_sb_cLsL::synapse0x29c3be0() {
   return (neuron0x29b68f0()*0.7403);
}

double NNfunction_sb_cLsL::synapse0x29c3c20() {
   return (neuron0x29b6c30()*-0.851606);
}

double NNfunction_sb_cLsL::synapse0x29c3c60() {
   return (neuron0x29b6f70()*0.36072);
}

double NNfunction_sb_cLsL::synapse0x29c3ca0() {
   return (neuron0x29b72b0()*0.284082);
}

double NNfunction_sb_cLsL::synapse0x29c3ce0() {
   return (neuron0x29b75f0()*-0.151882);
}

double NNfunction_sb_cLsL::synapse0x29c3d20() {
   return (neuron0x29b7930()*1.17726);
}

double NNfunction_sb_cLsL::synapse0x29c3d60() {
   return (neuron0x29b7c70()*0.21065);
}

double NNfunction_sb_cLsL::synapse0x29c3da0() {
   return (neuron0x29b7fb0()*-0.0107702);
}

double NNfunction_sb_cLsL::synapse0x29c3de0() {
   return (neuron0x29b82f0()*0.336101);
}

double NNfunction_sb_cLsL::synapse0x29c3e20() {
   return (neuron0x29b8630()*1.5461);
}

double NNfunction_sb_cLsL::synapse0x29c38b0() {
   return (neuron0x29b8970()*0.20245);
}

double NNfunction_sb_cLsL::synapse0x29c38f0() {
   return (neuron0x29b8ed0()*-0.239475);
}

double NNfunction_sb_cLsL::synapse0x29c3f70() {
   return (neuron0x29b90f0()*-0.218455);
}

double NNfunction_sb_cLsL::synapse0x29c3fb0() {
   return (neuron0x29b9430()*0.687789);
}

double NNfunction_sb_cLsL::synapse0x29c3ff0() {
   return (neuron0x29b9770()*-0.38458);
}

double NNfunction_sb_cLsL::synapse0x29c4030() {
   return (neuron0x29b9ab0()*0.740746);
}

double NNfunction_sb_cLsL::synapse0x29c4070() {
   return (neuron0x29b9df0()*-0.0117762);
}

double NNfunction_sb_cLsL::synapse0x29c40b0() {
   return (neuron0x29ba130()*-0.706205);
}

double NNfunction_sb_cLsL::synapse0x29c4430() {
   return (neuron0x29b5570()*0.130622);
}

double NNfunction_sb_cLsL::synapse0x29b5790() {
   return (neuron0x29b58b0()*0.202498);
}

double NNfunction_sb_cLsL::synapse0x29b57d0() {
   return (neuron0x29b5bf0()*-0.581972);
}

double NNfunction_sb_cLsL::synapse0x29b5ad0() {
   return (neuron0x29b5f30()*-1.90168);
}

double NNfunction_sb_cLsL::synapse0x29b5b10() {
   return (neuron0x29b6270()*0.0599273);
}

double NNfunction_sb_cLsL::synapse0x29b5e10() {
   return (neuron0x29b65b0()*-0.0950141);
}

double NNfunction_sb_cLsL::synapse0x29b5e50() {
   return (neuron0x29b68f0()*0.0258493);
}

double NNfunction_sb_cLsL::synapse0x29b6150() {
   return (neuron0x29b6c30()*0.33143);
}

double NNfunction_sb_cLsL::synapse0x29b6190() {
   return (neuron0x29b6f70()*-0.119578);
}

double NNfunction_sb_cLsL::synapse0x29b6490() {
   return (neuron0x29b72b0()*0.0628085);
}

double NNfunction_sb_cLsL::synapse0x29b64d0() {
   return (neuron0x29b75f0()*-0.543708);
}

double NNfunction_sb_cLsL::synapse0x29b67d0() {
   return (neuron0x29b7930()*0.918102);
}

double NNfunction_sb_cLsL::synapse0x29b6810() {
   return (neuron0x29b7c70()*-0.416839);
}

double NNfunction_sb_cLsL::synapse0x29b6b10() {
   return (neuron0x29b7fb0()*-0.139038);
}

double NNfunction_sb_cLsL::synapse0x29b6b50() {
   return (neuron0x29b82f0()*-0.0327194);
}

double NNfunction_sb_cLsL::synapse0x29b6e50() {
   return (neuron0x29b8630()*0.388378);
}

double NNfunction_sb_cLsL::synapse0x29b6e90() {
   return (neuron0x29b8970()*0.202456);
}

double NNfunction_sb_cLsL::synapse0x29b7190() {
   return (neuron0x29b8ed0()*0.240494);
}

double NNfunction_sb_cLsL::synapse0x29b71d0() {
   return (neuron0x29b90f0()*0.527811);
}

double NNfunction_sb_cLsL::synapse0x29b74d0() {
   return (neuron0x29b9430()*0.401867);
}

double NNfunction_sb_cLsL::synapse0x29b7510() {
   return (neuron0x29b9770()*-0.107739);
}

double NNfunction_sb_cLsL::synapse0x29b7810() {
   return (neuron0x29b9ab0()*-0.543558);
}

double NNfunction_sb_cLsL::synapse0x29b7850() {
   return (neuron0x29b9df0()*-0.187248);
}

double NNfunction_sb_cLsL::synapse0x29b7b50() {
   return (neuron0x29ba130()*-0.311849);
}

double NNfunction_sb_cLsL::synapse0x29b7b90() {
   return (neuron0x29b5570()*-0.102186);
}

double NNfunction_sb_cLsL::synapse0x29b8850() {
   return (neuron0x29b58b0()*0.39811);
}

double NNfunction_sb_cLsL::synapse0x29b8890() {
   return (neuron0x29b5bf0()*-0.36966);
}

double NNfunction_sb_cLsL::synapse0x29c4280() {
   return (neuron0x29b5f30()*0.426343);
}

double NNfunction_sb_cLsL::synapse0x29c42c0() {
   return (neuron0x29b6270()*-0.476118);
}

double NNfunction_sb_cLsL::synapse0x29b8b90() {
   return (neuron0x29b65b0()*0.635329);
}

double NNfunction_sb_cLsL::synapse0x29b8bd0() {
   return (neuron0x29b68f0()*-0.557914);
}

double NNfunction_sb_cLsL::synapse0x2766b60() {
   return (neuron0x29b6c30()*0.223608);
}

double NNfunction_sb_cLsL::synapse0x2766ba0() {
   return (neuron0x29b6f70()*0.58885);
}

double NNfunction_sb_cLsL::synapse0x29b9310() {
   return (neuron0x29b72b0()*0.240852);
}

double NNfunction_sb_cLsL::synapse0x29b9350() {
   return (neuron0x29b75f0()*0.40748);
}

double NNfunction_sb_cLsL::synapse0x29b9650() {
   return (neuron0x29b7930()*0.0151085);
}

double NNfunction_sb_cLsL::synapse0x29b9690() {
   return (neuron0x29b7c70()*-0.146258);
}

double NNfunction_sb_cLsL::synapse0x29b9990() {
   return (neuron0x29b7fb0()*-0.0172944);
}

double NNfunction_sb_cLsL::synapse0x29b99d0() {
   return (neuron0x29b82f0()*0.419839);
}

double NNfunction_sb_cLsL::synapse0x29b9cd0() {
   return (neuron0x29b8630()*0.0758616);
}

double NNfunction_sb_cLsL::synapse0x29b9d10() {
   return (neuron0x29b8970()*-0.783612);
}

double NNfunction_sb_cLsL::synapse0x29ba010() {
   return (neuron0x29b8ed0()*0.627531);
}

double NNfunction_sb_cLsL::synapse0x29ba050() {
   return (neuron0x29b90f0()*0.272564);
}

double NNfunction_sb_cLsL::synapse0x29ba350() {
   return (neuron0x29b9430()*-0.103115);
}

double NNfunction_sb_cLsL::synapse0x29ba390() {
   return (neuron0x29b9770()*-0.545018);
}

double NNfunction_sb_cLsL::synapse0x29b7e90() {
   return (neuron0x29b9ab0()*-0.32317);
}

double NNfunction_sb_cLsL::synapse0x29b7ed0() {
   return (neuron0x29b9df0()*-0.404626);
}

double NNfunction_sb_cLsL::synapse0x29c61a0() {
   return (neuron0x29ba130()*0.135146);
}

double NNfunction_sb_cLsL::synapse0x29c6520() {
   return (neuron0x29b5570()*0.0150744);
}

double NNfunction_sb_cLsL::synapse0x29c6560() {
   return (neuron0x29b58b0()*-0.00835097);
}

double NNfunction_sb_cLsL::synapse0x29c65a0() {
   return (neuron0x29b5bf0()*0.0259281);
}

double NNfunction_sb_cLsL::synapse0x29c65e0() {
   return (neuron0x29b5f30()*9.97113);
}

double NNfunction_sb_cLsL::synapse0x29c6620() {
   return (neuron0x29b6270()*-0.00611497);
}

double NNfunction_sb_cLsL::synapse0x29c6660() {
   return (neuron0x29b65b0()*0.0125051);
}

double NNfunction_sb_cLsL::synapse0x29c66a0() {
   return (neuron0x29b68f0()*-0.00457317);
}

double NNfunction_sb_cLsL::synapse0x29c66e0() {
   return (neuron0x29b6c30()*-0.0193881);
}

double NNfunction_sb_cLsL::synapse0x29c6720() {
   return (neuron0x29b6f70()*0.00735731);
}

double NNfunction_sb_cLsL::synapse0x29c6760() {
   return (neuron0x29b72b0()*0.0108425);
}

double NNfunction_sb_cLsL::synapse0x29c67a0() {
   return (neuron0x29b75f0()*-0.00436986);
}

double NNfunction_sb_cLsL::synapse0x29c67e0() {
   return (neuron0x29b7930()*-0.0531703);
}

double NNfunction_sb_cLsL::synapse0x29c6820() {
   return (neuron0x29b7c70()*0.25703);
}

double NNfunction_sb_cLsL::synapse0x29c6860() {
   return (neuron0x29b7fb0()*-0.0334945);
}

double NNfunction_sb_cLsL::synapse0x29c68a0() {
   return (neuron0x29b82f0()*0.0085384);
}

double NNfunction_sb_cLsL::synapse0x29c68e0() {
   return (neuron0x29b8630()*-0.0174388);
}

double NNfunction_sb_cLsL::synapse0x29c6370() {
   return (neuron0x29b8970()*-0.0206441);
}

double NNfunction_sb_cLsL::synapse0x29c63b0() {
   return (neuron0x29b8ed0()*-0.0460558);
}

double NNfunction_sb_cLsL::synapse0x29c6a30() {
   return (neuron0x29b90f0()*-0.0419747);
}

double NNfunction_sb_cLsL::synapse0x29c6a70() {
   return (neuron0x29b9430()*-0.00869933);
}

double NNfunction_sb_cLsL::synapse0x29c6ab0() {
   return (neuron0x29b9770()*0.0162924);
}

double NNfunction_sb_cLsL::synapse0x29c6af0() {
   return (neuron0x29b9ab0()*0.0211407);
}

double NNfunction_sb_cLsL::synapse0x29c6b30() {
   return (neuron0x29b9df0()*0.00123908);
}

double NNfunction_sb_cLsL::synapse0x29c6b70() {
   return (neuron0x29ba130()*0.0226563);
}

double NNfunction_sb_cLsL::synapse0x29c6ef0() {
   return (neuron0x29b5570()*0.0881739);
}

double NNfunction_sb_cLsL::synapse0x29c6f30() {
   return (neuron0x29b58b0()*-0.0969053);
}

double NNfunction_sb_cLsL::synapse0x29c6f70() {
   return (neuron0x29b5bf0()*-0.559668);
}

double NNfunction_sb_cLsL::synapse0x29c6fb0() {
   return (neuron0x29b5f30()*-0.642512);
}

double NNfunction_sb_cLsL::synapse0x29c6ff0() {
   return (neuron0x29b6270()*0.0237618);
}

double NNfunction_sb_cLsL::synapse0x29c7030() {
   return (neuron0x29b65b0()*0.191811);
}

double NNfunction_sb_cLsL::synapse0x29c7070() {
   return (neuron0x29b68f0()*-0.463739);
}

double NNfunction_sb_cLsL::synapse0x29c70b0() {
   return (neuron0x29b6c30()*0.452973);
}

double NNfunction_sb_cLsL::synapse0x29c70f0() {
   return (neuron0x29b6f70()*-0.0331675);
}

double NNfunction_sb_cLsL::synapse0x29c7130() {
   return (neuron0x29b72b0()*-0.465261);
}

double NNfunction_sb_cLsL::synapse0x29c7170() {
   return (neuron0x29b75f0()*0.388727);
}

double NNfunction_sb_cLsL::synapse0x29c71b0() {
   return (neuron0x29b7930()*0.668761);
}

double NNfunction_sb_cLsL::synapse0x29c71f0() {
   return (neuron0x29b7c70()*1.20922);
}

double NNfunction_sb_cLsL::synapse0x29c7230() {
   return (neuron0x29b7fb0()*0.54812);
}

double NNfunction_sb_cLsL::synapse0x29c7270() {
   return (neuron0x29b82f0()*-0.328637);
}

double NNfunction_sb_cLsL::synapse0x29c72b0() {
   return (neuron0x29b8630()*-0.687204);
}

double NNfunction_sb_cLsL::synapse0x29c6d40() {
   return (neuron0x29b8970()*0.530316);
}

double NNfunction_sb_cLsL::synapse0x29c6d80() {
   return (neuron0x29b8ed0()*0.669249);
}

double NNfunction_sb_cLsL::synapse0x29c7400() {
   return (neuron0x29b90f0()*-0.098508);
}

double NNfunction_sb_cLsL::synapse0x29c7440() {
   return (neuron0x29b9430()*0.529359);
}

double NNfunction_sb_cLsL::synapse0x29c7480() {
   return (neuron0x29b9770()*-0.525527);
}

double NNfunction_sb_cLsL::synapse0x29c74c0() {
   return (neuron0x29b9ab0()*0.12912);
}

double NNfunction_sb_cLsL::synapse0x29c7500() {
   return (neuron0x29b9df0()*0.0932102);
}

double NNfunction_sb_cLsL::synapse0x29c7540() {
   return (neuron0x29ba130()*-0.221093);
}

double NNfunction_sb_cLsL::synapse0x29c78c0() {
   return (neuron0x29b5570()*0.0376963);
}

double NNfunction_sb_cLsL::synapse0x29c7900() {
   return (neuron0x29b58b0()*0.0477706);
}

double NNfunction_sb_cLsL::synapse0x29c7940() {
   return (neuron0x29b5bf0()*-0.098767);
}

double NNfunction_sb_cLsL::synapse0x29c7980() {
   return (neuron0x29b5f30()*-0.903283);
}

double NNfunction_sb_cLsL::synapse0x29c79c0() {
   return (neuron0x29b6270()*0.0592872);
}

double NNfunction_sb_cLsL::synapse0x29c7a00() {
   return (neuron0x29b65b0()*0.0344589);
}

double NNfunction_sb_cLsL::synapse0x29c7a40() {
   return (neuron0x29b68f0()*0.041531);
}

double NNfunction_sb_cLsL::synapse0x29c7a80() {
   return (neuron0x29b6c30()*-0.0361612);
}

double NNfunction_sb_cLsL::synapse0x29c7ac0() {
   return (neuron0x29b6f70()*-0.0862356);
}

double NNfunction_sb_cLsL::synapse0x29c7b00() {
   return (neuron0x29b72b0()*0.146558);
}

double NNfunction_sb_cLsL::synapse0x29c7b40() {
   return (neuron0x29b75f0()*0.0597212);
}

double NNfunction_sb_cLsL::synapse0x29c7b80() {
   return (neuron0x29b7930()*0.129472);
}

double NNfunction_sb_cLsL::synapse0x29c7bc0() {
   return (neuron0x29b7c70()*0.521726);
}

double NNfunction_sb_cLsL::synapse0x29c7c00() {
   return (neuron0x29b7fb0()*0.15195);
}

double NNfunction_sb_cLsL::synapse0x29c7c40() {
   return (neuron0x29b82f0()*-0.0175367);
}

double NNfunction_sb_cLsL::synapse0x29c7c80() {
   return (neuron0x29b8630()*0.0169197);
}

double NNfunction_sb_cLsL::synapse0x29c7710() {
   return (neuron0x29b8970()*0.108172);
}

double NNfunction_sb_cLsL::synapse0x29c7750() {
   return (neuron0x29b8ed0()*0.153426);
}

double NNfunction_sb_cLsL::synapse0x29c7dd0() {
   return (neuron0x29b90f0()*0.0903583);
}

double NNfunction_sb_cLsL::synapse0x29c7e10() {
   return (neuron0x29b9430()*0.0766548);
}

double NNfunction_sb_cLsL::synapse0x29c7e50() {
   return (neuron0x29b9770()*0.0390629);
}

double NNfunction_sb_cLsL::synapse0x29c7e90() {
   return (neuron0x29b9ab0()*-0.110415);
}

double NNfunction_sb_cLsL::synapse0x29c7ed0() {
   return (neuron0x29b9df0()*0.0653568);
}

double NNfunction_sb_cLsL::synapse0x29c7f10() {
   return (neuron0x29ba130()*-0.0254695);
}

double NNfunction_sb_cLsL::synapse0x29c8290() {
   return (neuron0x29b5570()*-0.396868);
}

double NNfunction_sb_cLsL::synapse0x29c82d0() {
   return (neuron0x29b58b0()*-0.21796);
}

double NNfunction_sb_cLsL::synapse0x29c8310() {
   return (neuron0x29b5bf0()*0.172726);
}

double NNfunction_sb_cLsL::synapse0x29c8350() {
   return (neuron0x29b5f30()*-0.728425);
}

double NNfunction_sb_cLsL::synapse0x29c8390() {
   return (neuron0x29b6270()*0.03379);
}

double NNfunction_sb_cLsL::synapse0x29c83d0() {
   return (neuron0x29b65b0()*0.172786);
}

double NNfunction_sb_cLsL::synapse0x29c8410() {
   return (neuron0x29b68f0()*-0.656049);
}

double NNfunction_sb_cLsL::synapse0x29c8450() {
   return (neuron0x29b6c30()*-0.652841);
}

double NNfunction_sb_cLsL::synapse0x29c8490() {
   return (neuron0x29b6f70()*0.402188);
}

double NNfunction_sb_cLsL::synapse0x29c84d0() {
   return (neuron0x29b72b0()*0.414857);
}

double NNfunction_sb_cLsL::synapse0x29c8510() {
   return (neuron0x29b75f0()*0.0222002);
}

double NNfunction_sb_cLsL::synapse0x29c8550() {
   return (neuron0x29b7930()*-1.12358);
}

double NNfunction_sb_cLsL::synapse0x29c8590() {
   return (neuron0x29b7c70()*0.447509);
}

double NNfunction_sb_cLsL::synapse0x29c85d0() {
   return (neuron0x29b7fb0()*0.72122);
}

double NNfunction_sb_cLsL::synapse0x29c8610() {
   return (neuron0x29b82f0()*0.184083);
}

double NNfunction_sb_cLsL::synapse0x29c8650() {
   return (neuron0x29b8630()*0.155288);
}

double NNfunction_sb_cLsL::synapse0x29c80e0() {
   return (neuron0x29b8970()*0.0195118);
}

double NNfunction_sb_cLsL::synapse0x29c8120() {
   return (neuron0x29b8ed0()*0.130679);
}

double NNfunction_sb_cLsL::synapse0x29c87a0() {
   return (neuron0x29b90f0()*0.14101);
}

double NNfunction_sb_cLsL::synapse0x29c87e0() {
   return (neuron0x29b9430()*-0.370207);
}

double NNfunction_sb_cLsL::synapse0x29c8820() {
   return (neuron0x29b9770()*0.060505);
}

double NNfunction_sb_cLsL::synapse0x29c8860() {
   return (neuron0x29b9ab0()*0.108997);
}

double NNfunction_sb_cLsL::synapse0x29c88a0() {
   return (neuron0x29b9df0()*0.0329936);
}

double NNfunction_sb_cLsL::synapse0x29c88e0() {
   return (neuron0x29ba130()*-0.228718);
}

double NNfunction_sb_cLsL::synapse0x29c8c60() {
   return (neuron0x29b5570()*0.0820298);
}

double NNfunction_sb_cLsL::synapse0x29c8ca0() {
   return (neuron0x29b58b0()*-0.0647755);
}

double NNfunction_sb_cLsL::synapse0x29c8ce0() {
   return (neuron0x29b5bf0()*1.24812);
}

double NNfunction_sb_cLsL::synapse0x29c8d20() {
   return (neuron0x29b5f30()*0.533697);
}

double NNfunction_sb_cLsL::synapse0x29c8d60() {
   return (neuron0x29b6270()*0.18);
}

double NNfunction_sb_cLsL::synapse0x29c8da0() {
   return (neuron0x29b65b0()*0.074991);
}

double NNfunction_sb_cLsL::synapse0x29c8de0() {
   return (neuron0x29b68f0()*-0.0144285);
}

double NNfunction_sb_cLsL::synapse0x29c8e20() {
   return (neuron0x29b6c30()*0.235971);
}

double NNfunction_sb_cLsL::synapse0x29c8e60() {
   return (neuron0x29b6f70()*0.0401168);
}

double NNfunction_sb_cLsL::synapse0x29c1020() {
   return (neuron0x29b72b0()*0.349574);
}

double NNfunction_sb_cLsL::synapse0x29c1060() {
   return (neuron0x29b75f0()*0.0936063);
}

double NNfunction_sb_cLsL::synapse0x29c10a0() {
   return (neuron0x29b7930()*-0.294018);
}

double NNfunction_sb_cLsL::synapse0x29c10e0() {
   return (neuron0x29b7c70()*-0.303494);
}

double NNfunction_sb_cLsL::synapse0x29c1120() {
   return (neuron0x29b7fb0()*0.010147);
}

double NNfunction_sb_cLsL::synapse0x29c1160() {
   return (neuron0x29b82f0()*0.338658);
}

double NNfunction_sb_cLsL::synapse0x29c11a0() {
   return (neuron0x29b8630()*-0.533385);
}

double NNfunction_sb_cLsL::synapse0x29c8ab0() {
   return (neuron0x29b8970()*-0.0800912);
}

double NNfunction_sb_cLsL::synapse0x29c8af0() {
   return (neuron0x29b8ed0()*-0.0587778);
}

double NNfunction_sb_cLsL::synapse0x29c12f0() {
   return (neuron0x29b90f0()*-0.138602);
}

double NNfunction_sb_cLsL::synapse0x29c1330() {
   return (neuron0x29b9430()*0.0274964);
}

double NNfunction_sb_cLsL::synapse0x29c1370() {
   return (neuron0x29b9770()*0.0940173);
}

double NNfunction_sb_cLsL::synapse0x29c13b0() {
   return (neuron0x29b9ab0()*0.000204517);
}

double NNfunction_sb_cLsL::synapse0x29c13f0() {
   return (neuron0x29b9df0()*0.0396726);
}

double NNfunction_sb_cLsL::synapse0x29c1430() {
   return (neuron0x29ba130()*-0.00573383);
}

double NNfunction_sb_cLsL::synapse0x29c17b0() {
   return (neuron0x29b5570()*-0.352479);
}

double NNfunction_sb_cLsL::synapse0x29c17f0() {
   return (neuron0x29b58b0()*0.00755134);
}

double NNfunction_sb_cLsL::synapse0x29c1830() {
   return (neuron0x29b5bf0()*0.0680409);
}

double NNfunction_sb_cLsL::synapse0x29c1870() {
   return (neuron0x29b5f30()*-0.862858);
}

double NNfunction_sb_cLsL::synapse0x29c18b0() {
   return (neuron0x29b6270()*0.141053);
}

double NNfunction_sb_cLsL::synapse0x29c18f0() {
   return (neuron0x29b65b0()*-0.292146);
}

double NNfunction_sb_cLsL::synapse0x29c1930() {
   return (neuron0x29b68f0()*-0.107494);
}

double NNfunction_sb_cLsL::synapse0x29c1970() {
   return (neuron0x29b6c30()*0.0839518);
}

double NNfunction_sb_cLsL::synapse0x29c19b0() {
   return (neuron0x29b6f70()*0.231632);
}

double NNfunction_sb_cLsL::synapse0x29c19f0() {
   return (neuron0x29b72b0()*0.139496);
}

double NNfunction_sb_cLsL::synapse0x29c1a30() {
   return (neuron0x29b75f0()*0.276281);
}

double NNfunction_sb_cLsL::synapse0x29c1a70() {
   return (neuron0x29b7930()*0.217599);
}

double NNfunction_sb_cLsL::synapse0x29c1ab0() {
   return (neuron0x29b7c70()*0.774127);
}

double NNfunction_sb_cLsL::synapse0x29c1af0() {
   return (neuron0x29b7fb0()*0.337004);
}

double NNfunction_sb_cLsL::synapse0x29c1b30() {
   return (neuron0x29b82f0()*-0.375606);
}

double NNfunction_sb_cLsL::synapse0x29c1b70() {
   return (neuron0x29b8630()*-0.0539835);
}

double NNfunction_sb_cLsL::synapse0x29c1600() {
   return (neuron0x29b8970()*0.203597);
}

double NNfunction_sb_cLsL::synapse0x29c1640() {
   return (neuron0x29b8ed0()*-0.0756309);
}

double NNfunction_sb_cLsL::synapse0x29c1cc0() {
   return (neuron0x29b90f0()*-0.0294759);
}

double NNfunction_sb_cLsL::synapse0x29c1d00() {
   return (neuron0x29b9430()*0.0622779);
}

double NNfunction_sb_cLsL::synapse0x29c1d40() {
   return (neuron0x29b9770()*0.104284);
}

double NNfunction_sb_cLsL::synapse0x29c1d80() {
   return (neuron0x29b9ab0()*-0.155517);
}

double NNfunction_sb_cLsL::synapse0x29c1dc0() {
   return (neuron0x29b9df0()*-0.15147);
}

double NNfunction_sb_cLsL::synapse0x29c1e00() {
   return (neuron0x29ba130()*0.447187);
}

double NNfunction_sb_cLsL::synapse0x29c1fd0() {
   return (neuron0x29b5570()*-0.625691);
}

double NNfunction_sb_cLsL::synapse0x29cb060() {
   return (neuron0x29b58b0()*0.570306);
}

double NNfunction_sb_cLsL::synapse0x29cb0a0() {
   return (neuron0x29b5bf0()*-0.106976);
}

double NNfunction_sb_cLsL::synapse0x29cb0e0() {
   return (neuron0x29b5f30()*-0.0178101);
}

double NNfunction_sb_cLsL::synapse0x29cb120() {
   return (neuron0x29b6270()*-0.407986);
}

double NNfunction_sb_cLsL::synapse0x29cb160() {
   return (neuron0x29b65b0()*-0.477383);
}

double NNfunction_sb_cLsL::synapse0x29cb1a0() {
   return (neuron0x29b68f0()*-0.198571);
}

double NNfunction_sb_cLsL::synapse0x29cb1e0() {
   return (neuron0x29b6c30()*-0.277713);
}

double NNfunction_sb_cLsL::synapse0x29cb220() {
   return (neuron0x29b6f70()*0.445649);
}

double NNfunction_sb_cLsL::synapse0x29cb260() {
   return (neuron0x29b72b0()*0.470857);
}

double NNfunction_sb_cLsL::synapse0x29cb2a0() {
   return (neuron0x29b75f0()*0.133625);
}

double NNfunction_sb_cLsL::synapse0x29cb2e0() {
   return (neuron0x29b7930()*-0.259073);
}

double NNfunction_sb_cLsL::synapse0x29cb320() {
   return (neuron0x29b7c70()*-0.541965);
}

double NNfunction_sb_cLsL::synapse0x29cb360() {
   return (neuron0x29b7fb0()*-0.115334);
}

double NNfunction_sb_cLsL::synapse0x29cb3a0() {
   return (neuron0x29b82f0()*0.297171);
}

double NNfunction_sb_cLsL::synapse0x29cb3e0() {
   return (neuron0x29b8630()*-0.501085);
}

double NNfunction_sb_cLsL::synapse0x29caeb0() {
   return (neuron0x29b8970()*0.272975);
}

double NNfunction_sb_cLsL::synapse0x29caef0() {
   return (neuron0x29b8ed0()*-0.468621);
}

double NNfunction_sb_cLsL::synapse0x29cb530() {
   return (neuron0x29b90f0()*0.68708);
}

double NNfunction_sb_cLsL::synapse0x29cb570() {
   return (neuron0x29b9430()*-0.0936855);
}

double NNfunction_sb_cLsL::synapse0x29cb5b0() {
   return (neuron0x29b9770()*0.056559);
}

double NNfunction_sb_cLsL::synapse0x29cb5f0() {
   return (neuron0x29b9ab0()*0.0543452);
}

double NNfunction_sb_cLsL::synapse0x29cb630() {
   return (neuron0x29b9df0()*0.0803233);
}

double NNfunction_sb_cLsL::synapse0x29cb670() {
   return (neuron0x29ba130()*-0.20571);
}

double NNfunction_sb_cLsL::synapse0x29cb9f0() {
   return (neuron0x29b5570()*-0.00978502);
}

double NNfunction_sb_cLsL::synapse0x29cba30() {
   return (neuron0x29b58b0()*-0.0112307);
}

double NNfunction_sb_cLsL::synapse0x29cba70() {
   return (neuron0x29b5bf0()*1.02799);
}

double NNfunction_sb_cLsL::synapse0x29cbab0() {
   return (neuron0x29b5f30()*0.0180925);
}

double NNfunction_sb_cLsL::synapse0x29cbaf0() {
   return (neuron0x29b6270()*-0.0268921);
}

double NNfunction_sb_cLsL::synapse0x29cbb30() {
   return (neuron0x29b65b0()*0.00106325);
}

double NNfunction_sb_cLsL::synapse0x29cbb70() {
   return (neuron0x29b68f0()*-0.0359244);
}

double NNfunction_sb_cLsL::synapse0x29cbbb0() {
   return (neuron0x29b6c30()*0.0297984);
}

double NNfunction_sb_cLsL::synapse0x29cbbf0() {
   return (neuron0x29b6f70()*-0.0278592);
}

double NNfunction_sb_cLsL::synapse0x29cbc30() {
   return (neuron0x29b72b0()*-0.00271329);
}

double NNfunction_sb_cLsL::synapse0x29cbc70() {
   return (neuron0x29b75f0()*0.0179484);
}

double NNfunction_sb_cLsL::synapse0x29cbcb0() {
   return (neuron0x29b7930()*0.0169645);
}

double NNfunction_sb_cLsL::synapse0x29cbcf0() {
   return (neuron0x29b7c70()*-0.548216);
}

double NNfunction_sb_cLsL::synapse0x29cbd30() {
   return (neuron0x29b7fb0()*0.0310791);
}

double NNfunction_sb_cLsL::synapse0x29cbd70() {
   return (neuron0x29b82f0()*0.0517267);
}

double NNfunction_sb_cLsL::synapse0x29cbdb0() {
   return (neuron0x29b8630()*0.012642);
}

double NNfunction_sb_cLsL::synapse0x29cb840() {
   return (neuron0x29b8970()*0.0154578);
}

double NNfunction_sb_cLsL::synapse0x29cb880() {
   return (neuron0x29b8ed0()*-0.0292147);
}

double NNfunction_sb_cLsL::synapse0x29cbf00() {
   return (neuron0x29b90f0()*0.0119716);
}

double NNfunction_sb_cLsL::synapse0x29cbf40() {
   return (neuron0x29b9430()*0.00556635);
}

double NNfunction_sb_cLsL::synapse0x29cbf80() {
   return (neuron0x29b9770()*0.0008188);
}

double NNfunction_sb_cLsL::synapse0x29cbfc0() {
   return (neuron0x29b9ab0()*-0.00270045);
}

double NNfunction_sb_cLsL::synapse0x29cc000() {
   return (neuron0x29b9df0()*-0.0239442);
}

double NNfunction_sb_cLsL::synapse0x29cc040() {
   return (neuron0x29ba130()*-0.0234252);
}

double NNfunction_sb_cLsL::synapse0x29cc3c0() {
   return (neuron0x29b5570()*-0.572908);
}

double NNfunction_sb_cLsL::synapse0x29cc400() {
   return (neuron0x29b58b0()*-0.0547046);
}

double NNfunction_sb_cLsL::synapse0x29cc440() {
   return (neuron0x29b5bf0()*-0.687584);
}

double NNfunction_sb_cLsL::synapse0x29cc480() {
   return (neuron0x29b5f30()*0.15737);
}

double NNfunction_sb_cLsL::synapse0x29cc4c0() {
   return (neuron0x29b6270()*-0.011058);
}

double NNfunction_sb_cLsL::synapse0x29cc500() {
   return (neuron0x29b65b0()*0.481822);
}

double NNfunction_sb_cLsL::synapse0x29cc540() {
   return (neuron0x29b68f0()*0.111269);
}

double NNfunction_sb_cLsL::synapse0x29cc580() {
   return (neuron0x29b6c30()*-0.191391);
}

double NNfunction_sb_cLsL::synapse0x29cc5c0() {
   return (neuron0x29b6f70()*-0.134438);
}

double NNfunction_sb_cLsL::synapse0x29cc600() {
   return (neuron0x29b72b0()*-1.13204);
}

double NNfunction_sb_cLsL::synapse0x29cc640() {
   return (neuron0x29b75f0()*0.028518);
}

double NNfunction_sb_cLsL::synapse0x29cc680() {
   return (neuron0x29b7930()*-0.0734581);
}

double NNfunction_sb_cLsL::synapse0x29cc6c0() {
   return (neuron0x29b7c70()*0.545667);
}

double NNfunction_sb_cLsL::synapse0x29cc700() {
   return (neuron0x29b7fb0()*0.0475178);
}

double NNfunction_sb_cLsL::synapse0x29cc740() {
   return (neuron0x29b82f0()*-0.300326);
}

double NNfunction_sb_cLsL::synapse0x29cc780() {
   return (neuron0x29b8630()*1.09179);
}

double NNfunction_sb_cLsL::synapse0x29cc210() {
   return (neuron0x29b8970()*0.0552769);
}

double NNfunction_sb_cLsL::synapse0x29cc250() {
   return (neuron0x29b8ed0()*1.22296);
}

double NNfunction_sb_cLsL::synapse0x29cc8d0() {
   return (neuron0x29b90f0()*0.507623);
}

double NNfunction_sb_cLsL::synapse0x29cc910() {
   return (neuron0x29b9430()*0.24831);
}

double NNfunction_sb_cLsL::synapse0x29cc950() {
   return (neuron0x29b9770()*-0.167796);
}

double NNfunction_sb_cLsL::synapse0x29cc990() {
   return (neuron0x29b9ab0()*-0.303929);
}

double NNfunction_sb_cLsL::synapse0x29cc9d0() {
   return (neuron0x29b9df0()*0.23611);
}

double NNfunction_sb_cLsL::synapse0x29cca10() {
   return (neuron0x29ba130()*0.521265);
}

double NNfunction_sb_cLsL::synapse0x29ccd90() {
   return (neuron0x29b5570()*-0.164516);
}

double NNfunction_sb_cLsL::synapse0x29ccdd0() {
   return (neuron0x29b58b0()*-0.105537);
}

double NNfunction_sb_cLsL::synapse0x29cce10() {
   return (neuron0x29b5bf0()*-0.486543);
}

double NNfunction_sb_cLsL::synapse0x29cce50() {
   return (neuron0x29b5f30()*-0.0017013);
}

double NNfunction_sb_cLsL::synapse0x29cce90() {
   return (neuron0x29b6270()*0.229179);
}

double NNfunction_sb_cLsL::synapse0x29cced0() {
   return (neuron0x29b65b0()*-0.0430168);
}

double NNfunction_sb_cLsL::synapse0x29ccf10() {
   return (neuron0x29b68f0()*-0.45685);
}

double NNfunction_sb_cLsL::synapse0x29ccf50() {
   return (neuron0x29b6c30()*-0.130734);
}

double NNfunction_sb_cLsL::synapse0x29ccf90() {
   return (neuron0x29b6f70()*0.329456);
}

double NNfunction_sb_cLsL::synapse0x29ccfd0() {
   return (neuron0x29b72b0()*-0.0593244);
}

double NNfunction_sb_cLsL::synapse0x29cd010() {
   return (neuron0x29b75f0()*0.243333);
}

double NNfunction_sb_cLsL::synapse0x29cd050() {
   return (neuron0x29b7930()*0.241984);
}

double NNfunction_sb_cLsL::synapse0x29cd090() {
   return (neuron0x29b7c70()*0.426751);
}

double NNfunction_sb_cLsL::synapse0x29cd0d0() {
   return (neuron0x29b7fb0()*-0.327955);
}

double NNfunction_sb_cLsL::synapse0x29cd110() {
   return (neuron0x29b82f0()*-0.0752087);
}

double NNfunction_sb_cLsL::synapse0x29cd150() {
   return (neuron0x29b8630()*-0.573738);
}

double NNfunction_sb_cLsL::synapse0x29ccbe0() {
   return (neuron0x29b8970()*0.164914);
}

double NNfunction_sb_cLsL::synapse0x29ccc20() {
   return (neuron0x29b8ed0()*0.865582);
}

double NNfunction_sb_cLsL::synapse0x29cd2a0() {
   return (neuron0x29b90f0()*0.0317257);
}

double NNfunction_sb_cLsL::synapse0x29cd2e0() {
   return (neuron0x29b9430()*0.791684);
}

double NNfunction_sb_cLsL::synapse0x29cd320() {
   return (neuron0x29b9770()*-0.458449);
}

double NNfunction_sb_cLsL::synapse0x29cd360() {
   return (neuron0x29b9ab0()*-0.290363);
}

double NNfunction_sb_cLsL::synapse0x29cd3a0() {
   return (neuron0x29b9df0()*-0.0115306);
}

double NNfunction_sb_cLsL::synapse0x29cd3e0() {
   return (neuron0x29ba130()*0.0935563);
}

double NNfunction_sb_cLsL::synapse0x29cd760() {
   return (neuron0x29b5570()*-0.0126168);
}

double NNfunction_sb_cLsL::synapse0x29cd7a0() {
   return (neuron0x29b58b0()*-0.323772);
}

double NNfunction_sb_cLsL::synapse0x29cd7e0() {
   return (neuron0x29b5bf0()*0.0941961);
}

double NNfunction_sb_cLsL::synapse0x29cd820() {
   return (neuron0x29b5f30()*-2.31867);
}

double NNfunction_sb_cLsL::synapse0x29cd860() {
   return (neuron0x29b6270()*0.241794);
}

double NNfunction_sb_cLsL::synapse0x29cd8a0() {
   return (neuron0x29b65b0()*0.0370777);
}

double NNfunction_sb_cLsL::synapse0x29cd8e0() {
   return (neuron0x29b68f0()*0.150915);
}

double NNfunction_sb_cLsL::synapse0x29cd920() {
   return (neuron0x29b6c30()*0.0243776);
}

double NNfunction_sb_cLsL::synapse0x29cd960() {
   return (neuron0x29b6f70()*0.117012);
}

double NNfunction_sb_cLsL::synapse0x29cd9a0() {
   return (neuron0x29b72b0()*0.0314754);
}

double NNfunction_sb_cLsL::synapse0x29cd9e0() {
   return (neuron0x29b75f0()*0.0764103);
}

double NNfunction_sb_cLsL::synapse0x29cda20() {
   return (neuron0x29b7930()*0.555326);
}

double NNfunction_sb_cLsL::synapse0x29cda60() {
   return (neuron0x29b7c70()*-0.163346);
}

double NNfunction_sb_cLsL::synapse0x29cdaa0() {
   return (neuron0x29b7fb0()*-0.329693);
}

double NNfunction_sb_cLsL::synapse0x29cdae0() {
   return (neuron0x29b82f0()*0.0509703);
}

double NNfunction_sb_cLsL::synapse0x29cdb20() {
   return (neuron0x29b8630()*0.291519);
}

double NNfunction_sb_cLsL::synapse0x29cd5b0() {
   return (neuron0x29b8970()*-0.401569);
}

double NNfunction_sb_cLsL::synapse0x29cd5f0() {
   return (neuron0x29b8ed0()*0.201838);
}

double NNfunction_sb_cLsL::synapse0x29cdc70() {
   return (neuron0x29b90f0()*0.0972958);
}

double NNfunction_sb_cLsL::synapse0x29cdcb0() {
   return (neuron0x29b9430()*0.00445238);
}

double NNfunction_sb_cLsL::synapse0x29cdcf0() {
   return (neuron0x29b9770()*-0.0103637);
}

double NNfunction_sb_cLsL::synapse0x29cdd30() {
   return (neuron0x29b9ab0()*-0.0376846);
}

double NNfunction_sb_cLsL::synapse0x29cdd70() {
   return (neuron0x29b9df0()*-0.066326);
}

double NNfunction_sb_cLsL::synapse0x29cddb0() {
   return (neuron0x29ba130()*0.180579);
}

double NNfunction_sb_cLsL::synapse0x29ce130() {
   return (neuron0x29b5570()*0.0506246);
}

double NNfunction_sb_cLsL::synapse0x29ce170() {
   return (neuron0x29b58b0()*0.058913);
}

double NNfunction_sb_cLsL::synapse0x29ce1b0() {
   return (neuron0x29b5bf0()*-0.0437917);
}

double NNfunction_sb_cLsL::synapse0x29ce1f0() {
   return (neuron0x29b5f30()*4.14673);
}

double NNfunction_sb_cLsL::synapse0x29ce230() {
   return (neuron0x29b6270()*-0.0323837);
}

double NNfunction_sb_cLsL::synapse0x29ce270() {
   return (neuron0x29b65b0()*-0.0363721);
}

double NNfunction_sb_cLsL::synapse0x29ce2b0() {
   return (neuron0x29b68f0()*-0.0633935);
}

double NNfunction_sb_cLsL::synapse0x29ce2f0() {
   return (neuron0x29b6c30()*0.0504026);
}

double NNfunction_sb_cLsL::synapse0x29ce330() {
   return (neuron0x29b6f70()*-0.0610968);
}

double NNfunction_sb_cLsL::synapse0x29ce370() {
   return (neuron0x29b72b0()*0.285823);
}

double NNfunction_sb_cLsL::synapse0x29ce3b0() {
   return (neuron0x29b75f0()*-0.0283586);
}

double NNfunction_sb_cLsL::synapse0x29ce3f0() {
   return (neuron0x29b7930()*-0.146168);
}

double NNfunction_sb_cLsL::synapse0x29ce430() {
   return (neuron0x29b7c70()*-0.412538);
}

double NNfunction_sb_cLsL::synapse0x29ce470() {
   return (neuron0x29b7fb0()*-0.0174678);
}

double NNfunction_sb_cLsL::synapse0x29ce4b0() {
   return (neuron0x29b82f0()*0.0175975);
}

double NNfunction_sb_cLsL::synapse0x29ce4f0() {
   return (neuron0x29b8630()*-0.139891);
}

double NNfunction_sb_cLsL::synapse0x29cdf80() {
   return (neuron0x29b8970()*0.218762);
}

double NNfunction_sb_cLsL::synapse0x29cdfc0() {
   return (neuron0x29b8ed0()*-0.0459123);
}

double NNfunction_sb_cLsL::synapse0x29ce640() {
   return (neuron0x29b90f0()*-0.043704);
}

double NNfunction_sb_cLsL::synapse0x29ce680() {
   return (neuron0x29b9430()*-0.204325);
}

double NNfunction_sb_cLsL::synapse0x29ce6c0() {
   return (neuron0x29b9770()*0.238609);
}

double NNfunction_sb_cLsL::synapse0x29ce700() {
   return (neuron0x29b9ab0()*-0.0928972);
}

double NNfunction_sb_cLsL::synapse0x29ce740() {
   return (neuron0x29b9df0()*0.0168871);
}

double NNfunction_sb_cLsL::synapse0x29ce780() {
   return (neuron0x29ba130()*-0.20748);
}

double NNfunction_sb_cLsL::synapse0x29ceb00() {
   return (neuron0x29b5570()*0.0456852);
}

double NNfunction_sb_cLsL::synapse0x29ceb40() {
   return (neuron0x29b58b0()*0.0703095);
}

double NNfunction_sb_cLsL::synapse0x29ceb80() {
   return (neuron0x29b5bf0()*-0.117735);
}

double NNfunction_sb_cLsL::synapse0x29cebc0() {
   return (neuron0x29b5f30()*-1.12832);
}

double NNfunction_sb_cLsL::synapse0x29cec00() {
   return (neuron0x29b6270()*-0.148777);
}

double NNfunction_sb_cLsL::synapse0x29cec40() {
   return (neuron0x29b65b0()*-0.0417652);
}

double NNfunction_sb_cLsL::synapse0x29cec80() {
   return (neuron0x29b68f0()*0.112299);
}

double NNfunction_sb_cLsL::synapse0x29cecc0() {
   return (neuron0x29b6c30()*-0.161538);
}

double NNfunction_sb_cLsL::synapse0x29ced00() {
   return (neuron0x29b6f70()*0.0133589);
}

double NNfunction_sb_cLsL::synapse0x29ced40() {
   return (neuron0x29b72b0()*-0.065466);
}

double NNfunction_sb_cLsL::synapse0x29ced80() {
   return (neuron0x29b75f0()*-0.0824465);
}

double NNfunction_sb_cLsL::synapse0x29cedc0() {
   return (neuron0x29b7930()*-0.388674);
}

double NNfunction_sb_cLsL::synapse0x29cee00() {
   return (neuron0x29b7c70()*0.0219118);
}

double NNfunction_sb_cLsL::synapse0x29cee40() {
   return (neuron0x29b7fb0()*-0.192011);
}

double NNfunction_sb_cLsL::synapse0x29cee80() {
   return (neuron0x29b82f0()*0.0943526);
}

double NNfunction_sb_cLsL::synapse0x29ceec0() {
   return (neuron0x29b8630()*-0.254458);
}

double NNfunction_sb_cLsL::synapse0x29ce950() {
   return (neuron0x29b8970()*-0.161496);
}

double NNfunction_sb_cLsL::synapse0x29ce990() {
   return (neuron0x29b8ed0()*-0.135208);
}

double NNfunction_sb_cLsL::synapse0x29cf010() {
   return (neuron0x29b90f0()*-0.160308);
}

double NNfunction_sb_cLsL::synapse0x29cf050() {
   return (neuron0x29b9430()*0.0597849);
}

double NNfunction_sb_cLsL::synapse0x29cf090() {
   return (neuron0x29b9770()*-0.0230725);
}

double NNfunction_sb_cLsL::synapse0x29cf0d0() {
   return (neuron0x29b9ab0()*0.0651321);
}

double NNfunction_sb_cLsL::synapse0x29cf110() {
   return (neuron0x29b9df0()*0.0476946);
}

double NNfunction_sb_cLsL::synapse0x29cf150() {
   return (neuron0x29ba130()*-0.148811);
}

double NNfunction_sb_cLsL::synapse0x29cf4d0() {
   return (neuron0x29b5570()*0.690821);
}

double NNfunction_sb_cLsL::synapse0x29cf510() {
   return (neuron0x29b58b0()*-0.534119);
}

double NNfunction_sb_cLsL::synapse0x29cf550() {
   return (neuron0x29b5bf0()*-0.583577);
}

double NNfunction_sb_cLsL::synapse0x29cf590() {
   return (neuron0x29b5f30()*0.331177);
}

double NNfunction_sb_cLsL::synapse0x29cf5d0() {
   return (neuron0x29b6270()*-0.0332073);
}

double NNfunction_sb_cLsL::synapse0x29cf610() {
   return (neuron0x29b65b0()*0.635908);
}

double NNfunction_sb_cLsL::synapse0x29cf650() {
   return (neuron0x29b68f0()*-0.0078142);
}

double NNfunction_sb_cLsL::synapse0x29cf690() {
   return (neuron0x29b6c30()*-0.258119);
}

double NNfunction_sb_cLsL::synapse0x29cf6d0() {
   return (neuron0x29b6f70()*-0.711037);
}

double NNfunction_sb_cLsL::synapse0x29cf710() {
   return (neuron0x29b72b0()*-0.0974819);
}

double NNfunction_sb_cLsL::synapse0x29cf750() {
   return (neuron0x29b75f0()*-0.588812);
}

double NNfunction_sb_cLsL::synapse0x29cf790() {
   return (neuron0x29b7930()*-0.186969);
}

double NNfunction_sb_cLsL::synapse0x29cf7d0() {
   return (neuron0x29b7c70()*-1.03024);
}

double NNfunction_sb_cLsL::synapse0x29cf810() {
   return (neuron0x29b7fb0()*-0.388182);
}

double NNfunction_sb_cLsL::synapse0x29cf850() {
   return (neuron0x29b82f0()*0.142369);
}

double NNfunction_sb_cLsL::synapse0x29cf890() {
   return (neuron0x29b8630()*0.113852);
}

double NNfunction_sb_cLsL::synapse0x29cf320() {
   return (neuron0x29b8970()*-0.29515);
}

double NNfunction_sb_cLsL::synapse0x29cf360() {
   return (neuron0x29b8ed0()*0.296679);
}

double NNfunction_sb_cLsL::synapse0x29cf9e0() {
   return (neuron0x29b90f0()*-0.292622);
}

double NNfunction_sb_cLsL::synapse0x29cfa20() {
   return (neuron0x29b9430()*-0.18789);
}

double NNfunction_sb_cLsL::synapse0x29cfa60() {
   return (neuron0x29b9770()*0.0457437);
}

double NNfunction_sb_cLsL::synapse0x29cfaa0() {
   return (neuron0x29b9ab0()*-0.0686365);
}

double NNfunction_sb_cLsL::synapse0x29cfae0() {
   return (neuron0x29b9df0()*-0.0454086);
}

double NNfunction_sb_cLsL::synapse0x29cfb20() {
   return (neuron0x29ba130()*-0.471887);
}

double NNfunction_sb_cLsL::synapse0x29cfea0() {
   return (neuron0x29b5570()*-0.0476405);
}

double NNfunction_sb_cLsL::synapse0x29c4470() {
   return (neuron0x29b58b0()*0.019146);
}

double NNfunction_sb_cLsL::synapse0x29c44b0() {
   return (neuron0x29b5bf0()*0.0671445);
}

double NNfunction_sb_cLsL::synapse0x29c44f0() {
   return (neuron0x29b5f30()*2.99339);
}

double NNfunction_sb_cLsL::synapse0x29c4740() {
   return (neuron0x29b6270()*0.0487192);
}

double NNfunction_sb_cLsL::synapse0x29c4780() {
   return (neuron0x29b65b0()*-0.0356916);
}

double NNfunction_sb_cLsL::synapse0x29c47c0() {
   return (neuron0x29b68f0()*-0.022909);
}

double NNfunction_sb_cLsL::synapse0x29c4a10() {
   return (neuron0x29b6c30()*-0.0258597);
}

double NNfunction_sb_cLsL::synapse0x29c4a50() {
   return (neuron0x29b6f70()*0.0547294);
}

double NNfunction_sb_cLsL::synapse0x29c4ca0() {
   return (neuron0x29b72b0()*-0.0296425);
}

double NNfunction_sb_cLsL::synapse0x29c4ce0() {
   return (neuron0x29b75f0()*0.110156);
}

double NNfunction_sb_cLsL::synapse0x29c4d20() {
   return (neuron0x29b7930()*-0.0679655);
}

double NNfunction_sb_cLsL::synapse0x29c4f70() {
   return (neuron0x29b7c70()*0.24087);
}

double NNfunction_sb_cLsL::synapse0x29c4fb0() {
   return (neuron0x29b7fb0()*0.0858937);
}

double NNfunction_sb_cLsL::synapse0x29c5200() {
   return (neuron0x29b82f0()*-0.110041);
}

double NNfunction_sb_cLsL::synapse0x29c5240() {
   return (neuron0x29b8630()*-0.14973);
}

double NNfunction_sb_cLsL::synapse0x29cfcf0() {
   return (neuron0x29b8970()*0.0438506);
}

double NNfunction_sb_cLsL::synapse0x29cfd30() {
   return (neuron0x29b8ed0()*-0.0427561);
}

double NNfunction_sb_cLsL::synapse0x29c5390() {
   return (neuron0x29b90f0()*-0.00644253);
}

double NNfunction_sb_cLsL::synapse0x29c58a0() {
   return (neuron0x29b9430()*-0.0315813);
}

double NNfunction_sb_cLsL::synapse0x29c58e0() {
   return (neuron0x29b9770()*0.0483819);
}

double NNfunction_sb_cLsL::synapse0x29c5920() {
   return (neuron0x29b9ab0()*-0.0301253);
}

double NNfunction_sb_cLsL::synapse0x29c5b70() {
   return (neuron0x29b9df0()*0.0157236);
}

double NNfunction_sb_cLsL::synapse0x29c5bb0() {
   return (neuron0x29ba130()*-0.000291203);
}

double NNfunction_sb_cLsL::synapse0x29c5460() {
   return (neuron0x29b5570()*-0.000972311);
}

double NNfunction_sb_cLsL::synapse0x29c54a0() {
   return (neuron0x29b58b0()*-0.130214);
}

double NNfunction_sb_cLsL::synapse0x29c54e0() {
   return (neuron0x29b5bf0()*-0.809028);
}

double NNfunction_sb_cLsL::synapse0x29c5520() {
   return (neuron0x29b5f30()*1.45363);
}

double NNfunction_sb_cLsL::synapse0x29c5ea0() {
   return (neuron0x29b6270()*-0.0566864);
}

double NNfunction_sb_cLsL::synapse0x29d21f0() {
   return (neuron0x29b65b0()*0.136638);
}

double NNfunction_sb_cLsL::synapse0x29d2230() {
   return (neuron0x29b68f0()*-0.0567016);
}

double NNfunction_sb_cLsL::synapse0x29d2270() {
   return (neuron0x29b6c30()*0.149379);
}

double NNfunction_sb_cLsL::synapse0x29d22b0() {
   return (neuron0x29b6f70()*0.00207948);
}

double NNfunction_sb_cLsL::synapse0x29d22f0() {
   return (neuron0x29b72b0()*0.014174);
}

double NNfunction_sb_cLsL::synapse0x29d2330() {
   return (neuron0x29b75f0()*0.0237164);
}

double NNfunction_sb_cLsL::synapse0x29d2370() {
   return (neuron0x29b7930()*-0.0520605);
}

double NNfunction_sb_cLsL::synapse0x29d23b0() {
   return (neuron0x29b7c70()*0.199906);
}

double NNfunction_sb_cLsL::synapse0x29d23f0() {
   return (neuron0x29b7fb0()*0.158707);
}

double NNfunction_sb_cLsL::synapse0x29d2430() {
   return (neuron0x29b82f0()*0.106074);
}

double NNfunction_sb_cLsL::synapse0x29d2470() {
   return (neuron0x29b8630()*-0.177894);
}

double NNfunction_sb_cLsL::synapse0x29c5d80() {
   return (neuron0x29b8970()*-0.260009);
}

double NNfunction_sb_cLsL::synapse0x29c5dc0() {
   return (neuron0x29b8ed0()*-0.0426079);
}

double NNfunction_sb_cLsL::synapse0x29d25c0() {
   return (neuron0x29b90f0()*-0.0828689);
}

double NNfunction_sb_cLsL::synapse0x29d2600() {
   return (neuron0x29b9430()*0.086564);
}

double NNfunction_sb_cLsL::synapse0x29d2640() {
   return (neuron0x29b9770()*-0.150228);
}

double NNfunction_sb_cLsL::synapse0x29d2680() {
   return (neuron0x29b9ab0()*0.118645);
}

double NNfunction_sb_cLsL::synapse0x29d26c0() {
   return (neuron0x29b9df0()*-0.0103096);
}

double NNfunction_sb_cLsL::synapse0x29d2700() {
   return (neuron0x29ba130()*0.03817);
}

double NNfunction_sb_cLsL::synapse0x29d2a80() {
   return (neuron0x29b5570()*0.198091);
}

double NNfunction_sb_cLsL::synapse0x29d2ac0() {
   return (neuron0x29b58b0()*0.0361795);
}

double NNfunction_sb_cLsL::synapse0x29d2b00() {
   return (neuron0x29b5bf0()*0.362843);
}

double NNfunction_sb_cLsL::synapse0x29d2b40() {
   return (neuron0x29b5f30()*0.66584);
}

double NNfunction_sb_cLsL::synapse0x29d2b80() {
   return (neuron0x29b6270()*-0.0858648);
}

double NNfunction_sb_cLsL::synapse0x29d2bc0() {
   return (neuron0x29b65b0()*0.219861);
}

double NNfunction_sb_cLsL::synapse0x29d2c00() {
   return (neuron0x29b68f0()*0.299561);
}

double NNfunction_sb_cLsL::synapse0x29d2c40() {
   return (neuron0x29b6c30()*-0.161632);
}

double NNfunction_sb_cLsL::synapse0x29d2c80() {
   return (neuron0x29b6f70()*-0.122147);
}

double NNfunction_sb_cLsL::synapse0x29d2cc0() {
   return (neuron0x29b72b0()*0.19537);
}

double NNfunction_sb_cLsL::synapse0x29d2d00() {
   return (neuron0x29b75f0()*0.207546);
}

double NNfunction_sb_cLsL::synapse0x29d2d40() {
   return (neuron0x29b7930()*0.022267);
}

double NNfunction_sb_cLsL::synapse0x29d2d80() {
   return (neuron0x29b7c70()*0.697006);
}

double NNfunction_sb_cLsL::synapse0x29d2dc0() {
   return (neuron0x29b7fb0()*0.0133354);
}

double NNfunction_sb_cLsL::synapse0x29d2e00() {
   return (neuron0x29b82f0()*0.272119);
}

double NNfunction_sb_cLsL::synapse0x29d2e40() {
   return (neuron0x29b8630()*-0.253602);
}

double NNfunction_sb_cLsL::synapse0x29d28d0() {
   return (neuron0x29b8970()*0.109585);
}

double NNfunction_sb_cLsL::synapse0x29d2910() {
   return (neuron0x29b8ed0()*0.146653);
}

double NNfunction_sb_cLsL::synapse0x29d2f90() {
   return (neuron0x29b90f0()*0.00440392);
}

double NNfunction_sb_cLsL::synapse0x29d2fd0() {
   return (neuron0x29b9430()*0.231297);
}

double NNfunction_sb_cLsL::synapse0x29d3010() {
   return (neuron0x29b9770()*0.0199985);
}

double NNfunction_sb_cLsL::synapse0x29d3050() {
   return (neuron0x29b9ab0()*-0.129923);
}

double NNfunction_sb_cLsL::synapse0x29d3090() {
   return (neuron0x29b9df0()*0.0135314);
}

double NNfunction_sb_cLsL::synapse0x29d30d0() {
   return (neuron0x29ba130()*-0.0399129);
}

double NNfunction_sb_cLsL::synapse0x29d3450() {
   return (neuron0x29b5570()*0.089636);
}

double NNfunction_sb_cLsL::synapse0x29d3490() {
   return (neuron0x29b58b0()*0.139887);
}

double NNfunction_sb_cLsL::synapse0x29d34d0() {
   return (neuron0x29b5bf0()*0.52477);
}

double NNfunction_sb_cLsL::synapse0x29d3510() {
   return (neuron0x29b5f30()*-0.356148);
}

double NNfunction_sb_cLsL::synapse0x29d3550() {
   return (neuron0x29b6270()*-0.225831);
}

double NNfunction_sb_cLsL::synapse0x29d3590() {
   return (neuron0x29b65b0()*-0.976359);
}

double NNfunction_sb_cLsL::synapse0x29d35d0() {
   return (neuron0x29b68f0()*0.448655);
}

double NNfunction_sb_cLsL::synapse0x29d3610() {
   return (neuron0x29b6c30()*-0.463458);
}

double NNfunction_sb_cLsL::synapse0x29d3650() {
   return (neuron0x29b6f70()*0.919347);
}

double NNfunction_sb_cLsL::synapse0x29d3690() {
   return (neuron0x29b72b0()*0.263802);
}

double NNfunction_sb_cLsL::synapse0x29d36d0() {
   return (neuron0x29b75f0()*-0.265367);
}

double NNfunction_sb_cLsL::synapse0x29d3710() {
   return (neuron0x29b7930()*-0.115921);
}

double NNfunction_sb_cLsL::synapse0x29d3750() {
   return (neuron0x29b7c70()*-0.102861);
}

double NNfunction_sb_cLsL::synapse0x29d3790() {
   return (neuron0x29b7fb0()*0.883689);
}

double NNfunction_sb_cLsL::synapse0x29d37d0() {
   return (neuron0x29b82f0()*-0.417626);
}

double NNfunction_sb_cLsL::synapse0x29d3810() {
   return (neuron0x29b8630()*-0.601239);
}

double NNfunction_sb_cLsL::synapse0x29d32a0() {
   return (neuron0x29b8970()*-0.346692);
}

double NNfunction_sb_cLsL::synapse0x29d32e0() {
   return (neuron0x29b8ed0()*0.291988);
}

double NNfunction_sb_cLsL::synapse0x29d3960() {
   return (neuron0x29b90f0()*-0.432659);
}

double NNfunction_sb_cLsL::synapse0x29d39a0() {
   return (neuron0x29b9430()*-0.00589976);
}

double NNfunction_sb_cLsL::synapse0x29d39e0() {
   return (neuron0x29b9770()*0.210021);
}

double NNfunction_sb_cLsL::synapse0x29d3a20() {
   return (neuron0x29b9ab0()*-0.291834);
}

double NNfunction_sb_cLsL::synapse0x29d3a60() {
   return (neuron0x29b9df0()*-0.692018);
}

double NNfunction_sb_cLsL::synapse0x29d3aa0() {
   return (neuron0x29ba130()*-0.852268);
}

double NNfunction_sb_cLsL::synapse0x29d3e20() {
   return (neuron0x29b5570()*0.510031);
}

double NNfunction_sb_cLsL::synapse0x29d3e60() {
   return (neuron0x29b58b0()*0.400324);
}

double NNfunction_sb_cLsL::synapse0x29d3ea0() {
   return (neuron0x29b5bf0()*-1.65584);
}

double NNfunction_sb_cLsL::synapse0x29d3ee0() {
   return (neuron0x29b5f30()*-0.171902);
}

double NNfunction_sb_cLsL::synapse0x29d3f20() {
   return (neuron0x29b6270()*-0.319552);
}

double NNfunction_sb_cLsL::synapse0x29d3f60() {
   return (neuron0x29b65b0()*0.106165);
}

double NNfunction_sb_cLsL::synapse0x29d3fa0() {
   return (neuron0x29b68f0()*0.33174);
}

double NNfunction_sb_cLsL::synapse0x29d3fe0() {
   return (neuron0x29b6c30()*-0.438669);
}

double NNfunction_sb_cLsL::synapse0x29d4020() {
   return (neuron0x29b6f70()*-0.133579);
}

double NNfunction_sb_cLsL::synapse0x29d4060() {
   return (neuron0x29b72b0()*-0.0326633);
}

double NNfunction_sb_cLsL::synapse0x29d40a0() {
   return (neuron0x29b75f0()*-0.748741);
}

double NNfunction_sb_cLsL::synapse0x29d40e0() {
   return (neuron0x29b7930()*-0.0281826);
}

double NNfunction_sb_cLsL::synapse0x29d4120() {
   return (neuron0x29b7c70()*-0.15661);
}

double NNfunction_sb_cLsL::synapse0x29d4160() {
   return (neuron0x29b7fb0()*0.206753);
}

double NNfunction_sb_cLsL::synapse0x29d41a0() {
   return (neuron0x29b82f0()*-0.0230929);
}

double NNfunction_sb_cLsL::synapse0x29d41e0() {
   return (neuron0x29b8630()*0.815415);
}

double NNfunction_sb_cLsL::synapse0x29d3c70() {
   return (neuron0x29b8970()*0.129807);
}

double NNfunction_sb_cLsL::synapse0x29d3cb0() {
   return (neuron0x29b8ed0()*0.211067);
}

double NNfunction_sb_cLsL::synapse0x29d4330() {
   return (neuron0x29b90f0()*-0.470946);
}

double NNfunction_sb_cLsL::synapse0x29d4370() {
   return (neuron0x29b9430()*0.503957);
}

double NNfunction_sb_cLsL::synapse0x29d43b0() {
   return (neuron0x29b9770()*-0.0303627);
}

double NNfunction_sb_cLsL::synapse0x29d43f0() {
   return (neuron0x29b9ab0()*0.0961202);
}

double NNfunction_sb_cLsL::synapse0x29d4430() {
   return (neuron0x29b9df0()*0.191314);
}

double NNfunction_sb_cLsL::synapse0x29d4470() {
   return (neuron0x29ba130()*0.595356);
}

double NNfunction_sb_cLsL::synapse0x29d47f0() {
   return (neuron0x29b5570()*-0.0113256);
}

double NNfunction_sb_cLsL::synapse0x29d4830() {
   return (neuron0x29b58b0()*0.0218472);
}

double NNfunction_sb_cLsL::synapse0x29d4870() {
   return (neuron0x29b5bf0()*-0.00268877);
}

double NNfunction_sb_cLsL::synapse0x29d48b0() {
   return (neuron0x29b5f30()*-3.78914);
}

double NNfunction_sb_cLsL::synapse0x29d48f0() {
   return (neuron0x29b6270()*0.0160192);
}

double NNfunction_sb_cLsL::synapse0x29d4930() {
   return (neuron0x29b65b0()*0.011298);
}

double NNfunction_sb_cLsL::synapse0x29d4970() {
   return (neuron0x29b68f0()*-0.0138094);
}

double NNfunction_sb_cLsL::synapse0x29d49b0() {
   return (neuron0x29b6c30()*0.022081);
}

double NNfunction_sb_cLsL::synapse0x29d49f0() {
   return (neuron0x29b6f70()*-0.00221482);
}

double NNfunction_sb_cLsL::synapse0x29d4a30() {
   return (neuron0x29b72b0()*0.00609278);
}

double NNfunction_sb_cLsL::synapse0x29d4a70() {
   return (neuron0x29b75f0()*0.0267586);
}

double NNfunction_sb_cLsL::synapse0x29d4ab0() {
   return (neuron0x29b7930()*0.0415735);
}

double NNfunction_sb_cLsL::synapse0x29d4af0() {
   return (neuron0x29b7c70()*-0.141904);
}

double NNfunction_sb_cLsL::synapse0x29d4b30() {
   return (neuron0x29b7fb0()*0.0577264);
}

double NNfunction_sb_cLsL::synapse0x29d4b70() {
   return (neuron0x29b82f0()*-0.0357024);
}

double NNfunction_sb_cLsL::synapse0x29d4bb0() {
   return (neuron0x29b8630()*0.000148133);
}

double NNfunction_sb_cLsL::synapse0x29d4640() {
   return (neuron0x29b8970()*0.0662973);
}

double NNfunction_sb_cLsL::synapse0x29d4680() {
   return (neuron0x29b8ed0()*0.0207709);
}

double NNfunction_sb_cLsL::synapse0x29d4d00() {
   return (neuron0x29b90f0()*0.023924);
}

double NNfunction_sb_cLsL::synapse0x29d4d40() {
   return (neuron0x29b9430()*0.00566611);
}

double NNfunction_sb_cLsL::synapse0x29d4d80() {
   return (neuron0x29b9770()*0.020939);
}

double NNfunction_sb_cLsL::synapse0x29d4dc0() {
   return (neuron0x29b9ab0()*-0.00274876);
}

double NNfunction_sb_cLsL::synapse0x29d4e00() {
   return (neuron0x29b9df0()*0.000920031);
}

double NNfunction_sb_cLsL::synapse0x29d4e40() {
   return (neuron0x29ba130()*0.0249521);
}

double NNfunction_sb_cLsL::synapse0x29d51c0() {
   return (neuron0x29b5570()*-0.692898);
}

double NNfunction_sb_cLsL::synapse0x29d5200() {
   return (neuron0x29b58b0()*0.114669);
}

double NNfunction_sb_cLsL::synapse0x29d5240() {
   return (neuron0x29b5bf0()*-0.429437);
}

double NNfunction_sb_cLsL::synapse0x29d5280() {
   return (neuron0x29b5f30()*-0.0304356);
}

double NNfunction_sb_cLsL::synapse0x29d52c0() {
   return (neuron0x29b6270()*0.405612);
}

double NNfunction_sb_cLsL::synapse0x29d5300() {
   return (neuron0x29b65b0()*0.688566);
}

double NNfunction_sb_cLsL::synapse0x29d5340() {
   return (neuron0x29b68f0()*0.325939);
}

double NNfunction_sb_cLsL::synapse0x29d5380() {
   return (neuron0x29b6c30()*0.0784587);
}

double NNfunction_sb_cLsL::synapse0x29d53c0() {
   return (neuron0x29b6f70()*-1.13441);
}

double NNfunction_sb_cLsL::synapse0x29d5400() {
   return (neuron0x29b72b0()*-0.732924);
}

double NNfunction_sb_cLsL::synapse0x29d5440() {
   return (neuron0x29b75f0()*0.0978122);
}

double NNfunction_sb_cLsL::synapse0x29d5480() {
   return (neuron0x29b7930()*-0.0724267);
}

double NNfunction_sb_cLsL::synapse0x29d54c0() {
   return (neuron0x29b7c70()*-0.124822);
}

double NNfunction_sb_cLsL::synapse0x29d5500() {
   return (neuron0x29b7fb0()*0.693308);
}

double NNfunction_sb_cLsL::synapse0x29d5540() {
   return (neuron0x29b82f0()*-0.0828658);
}

double NNfunction_sb_cLsL::synapse0x29d5580() {
   return (neuron0x29b8630()*0.106784);
}

double NNfunction_sb_cLsL::synapse0x29d5010() {
   return (neuron0x29b8970()*0.304586);
}

double NNfunction_sb_cLsL::synapse0x29d5050() {
   return (neuron0x29b8ed0()*-0.446331);
}

double NNfunction_sb_cLsL::synapse0x29d56d0() {
   return (neuron0x29b90f0()*0.218855);
}

double NNfunction_sb_cLsL::synapse0x29d5710() {
   return (neuron0x29b9430()*-0.235865);
}

double NNfunction_sb_cLsL::synapse0x29d5750() {
   return (neuron0x29b9770()*-0.345877);
}

double NNfunction_sb_cLsL::synapse0x29d5790() {
   return (neuron0x29b9ab0()*0.475858);
}

double NNfunction_sb_cLsL::synapse0x29d57d0() {
   return (neuron0x29b9df0()*0.426486);
}

double NNfunction_sb_cLsL::synapse0x29d5810() {
   return (neuron0x29ba130()*0.453264);
}

double NNfunction_sb_cLsL::synapse0x29d5b90() {
   return (neuron0x29b5570()*0.000395173);
}

double NNfunction_sb_cLsL::synapse0x29d5bd0() {
   return (neuron0x29b58b0()*-0.00725786);
}

double NNfunction_sb_cLsL::synapse0x29d5c10() {
   return (neuron0x29b5bf0()*-0.0943257);
}

double NNfunction_sb_cLsL::synapse0x29d5c50() {
   return (neuron0x29b5f30()*1.39288);
}

double NNfunction_sb_cLsL::synapse0x29d5c90() {
   return (neuron0x29b6270()*-0.0125542);
}

double NNfunction_sb_cLsL::synapse0x29d5cd0() {
   return (neuron0x29b65b0()*0.00236802);
}

double NNfunction_sb_cLsL::synapse0x29d5d10() {
   return (neuron0x29b68f0()*-0.00551844);
}

double NNfunction_sb_cLsL::synapse0x29d5d50() {
   return (neuron0x29b6c30()*0.00947415);
}

double NNfunction_sb_cLsL::synapse0x29d5d90() {
   return (neuron0x29b6f70()*-0.0361422);
}

double NNfunction_sb_cLsL::synapse0x29d5dd0() {
   return (neuron0x29b72b0()*0.0270758);
}

double NNfunction_sb_cLsL::synapse0x29d5e10() {
   return (neuron0x29b75f0()*-0.00344982);
}

double NNfunction_sb_cLsL::synapse0x29d5e50() {
   return (neuron0x29b7930()*-0.0181113);
}

double NNfunction_sb_cLsL::synapse0x29d5e90() {
   return (neuron0x29b7c70()*-0.479925);
}

double NNfunction_sb_cLsL::synapse0x29d5ed0() {
   return (neuron0x29b7fb0()*0.041193);
}

double NNfunction_sb_cLsL::synapse0x29d5f10() {
   return (neuron0x29b82f0()*-0.0467094);
}

double NNfunction_sb_cLsL::synapse0x29d5f50() {
   return (neuron0x29b8630()*-0.0292531);
}

double NNfunction_sb_cLsL::synapse0x29d59e0() {
   return (neuron0x29b8970()*0.0385721);
}

double NNfunction_sb_cLsL::synapse0x29d5a20() {
   return (neuron0x29b8ed0()*-0.019018);
}

double NNfunction_sb_cLsL::synapse0x29d60a0() {
   return (neuron0x29b90f0()*-0.0158225);
}

double NNfunction_sb_cLsL::synapse0x29d60e0() {
   return (neuron0x29b9430()*0.0179846);
}

double NNfunction_sb_cLsL::synapse0x29d6120() {
   return (neuron0x29b9770()*0.0507343);
}

double NNfunction_sb_cLsL::synapse0x29d6160() {
   return (neuron0x29b9ab0()*0.0011053);
}

double NNfunction_sb_cLsL::synapse0x29d61a0() {
   return (neuron0x29b9df0()*0.0103083);
}

double NNfunction_sb_cLsL::synapse0x29d61e0() {
   return (neuron0x29ba130()*0.0326208);
}

double NNfunction_sb_cLsL::synapse0x29d6560() {
   return (neuron0x29b5570()*0.00392082);
}

double NNfunction_sb_cLsL::synapse0x29d65a0() {
   return (neuron0x29b58b0()*-0.0327545);
}

double NNfunction_sb_cLsL::synapse0x29d65e0() {
   return (neuron0x29b5bf0()*0.050637);
}

double NNfunction_sb_cLsL::synapse0x29d6620() {
   return (neuron0x29b5f30()*-0.115896);
}

double NNfunction_sb_cLsL::synapse0x29d6660() {
   return (neuron0x29b6270()*0.0360794);
}

double NNfunction_sb_cLsL::synapse0x29d66a0() {
   return (neuron0x29b65b0()*-0.0103572);
}

double NNfunction_sb_cLsL::synapse0x29d66e0() {
   return (neuron0x29b68f0()*-0.0184304);
}

double NNfunction_sb_cLsL::synapse0x29d6720() {
   return (neuron0x29b6c30()*-0.0431759);
}

double NNfunction_sb_cLsL::synapse0x29d6760() {
   return (neuron0x29b6f70()*-0.019397);
}

double NNfunction_sb_cLsL::synapse0x29d67a0() {
   return (neuron0x29b72b0()*0.008886);
}

double NNfunction_sb_cLsL::synapse0x29d67e0() {
   return (neuron0x29b75f0()*0.0305793);
}

double NNfunction_sb_cLsL::synapse0x29d6820() {
   return (neuron0x29b7930()*0.0104063);
}

double NNfunction_sb_cLsL::synapse0x29d6860() {
   return (neuron0x29b7c70()*-1.54126);
}

double NNfunction_sb_cLsL::synapse0x29d68a0() {
   return (neuron0x29b7fb0()*-0.00637352);
}

double NNfunction_sb_cLsL::synapse0x29d68e0() {
   return (neuron0x29b82f0()*-0.0114365);
}

double NNfunction_sb_cLsL::synapse0x29d6920() {
   return (neuron0x29b8630()*-0.0458236);
}

double NNfunction_sb_cLsL::synapse0x29d63b0() {
   return (neuron0x29b8970()*0.0102711);
}

double NNfunction_sb_cLsL::synapse0x29d63f0() {
   return (neuron0x29b8ed0()*-0.00675079);
}

double NNfunction_sb_cLsL::synapse0x29d6a70() {
   return (neuron0x29b90f0()*0.00650846);
}

double NNfunction_sb_cLsL::synapse0x29d6ab0() {
   return (neuron0x29b9430()*-0.0156565);
}

double NNfunction_sb_cLsL::synapse0x29d6af0() {
   return (neuron0x29b9770()*0.0509662);
}

double NNfunction_sb_cLsL::synapse0x29d6b30() {
   return (neuron0x29b9ab0()*-0.00607318);
}

double NNfunction_sb_cLsL::synapse0x29d6b70() {
   return (neuron0x29b9df0()*0.00406694);
}

double NNfunction_sb_cLsL::synapse0x29d6bb0() {
   return (neuron0x29ba130()*-0.00412526);
}

double NNfunction_sb_cLsL::synapse0x29bf660() {
   return (neuron0x29b5570()*0.425837);
}

double NNfunction_sb_cLsL::synapse0x29bf6a0() {
   return (neuron0x29b58b0()*0.278707);
}

double NNfunction_sb_cLsL::synapse0x29bf6e0() {
   return (neuron0x29b5bf0()*0.136942);
}

double NNfunction_sb_cLsL::synapse0x29bf720() {
   return (neuron0x29b5f30()*0.00062298);
}

double NNfunction_sb_cLsL::synapse0x29bf760() {
   return (neuron0x29b6270()*-1.02267);
}

double NNfunction_sb_cLsL::synapse0x29bf7a0() {
   return (neuron0x29b65b0()*-0.972559);
}

double NNfunction_sb_cLsL::synapse0x29bf7e0() {
   return (neuron0x29b68f0()*-0.125422);
}

double NNfunction_sb_cLsL::synapse0x29bf820() {
   return (neuron0x29b6c30()*-0.374237);
}

double NNfunction_sb_cLsL::synapse0x29d7340() {
   return (neuron0x29b6f70()*0.331522);
}

double NNfunction_sb_cLsL::synapse0x29d7380() {
   return (neuron0x29b72b0()*0.298854);
}

double NNfunction_sb_cLsL::synapse0x29d73c0() {
   return (neuron0x29b75f0()*0.10039);
}

double NNfunction_sb_cLsL::synapse0x29d7400() {
   return (neuron0x29b7930()*0.54774);
}

double NNfunction_sb_cLsL::synapse0x29d7440() {
   return (neuron0x29b7c70()*-0.332974);
}

double NNfunction_sb_cLsL::synapse0x29d7480() {
   return (neuron0x29b7fb0()*0.677037);
}

double NNfunction_sb_cLsL::synapse0x29d74c0() {
   return (neuron0x29b82f0()*0.0695741);
}

double NNfunction_sb_cLsL::synapse0x29d7500() {
   return (neuron0x29b8630()*0.0639574);
}

double NNfunction_sb_cLsL::synapse0x29d6d80() {
   return (neuron0x29b8970()*0.55274);
}

double NNfunction_sb_cLsL::synapse0x29d6dc0() {
   return (neuron0x29b8ed0()*-0.220814);
}

double NNfunction_sb_cLsL::synapse0x29d7650() {
   return (neuron0x29b90f0()*0.528999);
}

double NNfunction_sb_cLsL::synapse0x29d7690() {
   return (neuron0x29b9430()*-0.884682);
}

double NNfunction_sb_cLsL::synapse0x29d76d0() {
   return (neuron0x29b9770()*0.358307);
}

double NNfunction_sb_cLsL::synapse0x29d7710() {
   return (neuron0x29b9ab0()*0.315752);
}

double NNfunction_sb_cLsL::synapse0x29d7750() {
   return (neuron0x29b9df0()*-0.279856);
}

double NNfunction_sb_cLsL::synapse0x29d7790() {
   return (neuron0x29ba130()*-0.64317);
}

double NNfunction_sb_cLsL::synapse0x29d7b10() {
   return (neuron0x29b5570()*0.126538);
}

double NNfunction_sb_cLsL::synapse0x29d7b50() {
   return (neuron0x29b58b0()*0.190236);
}

double NNfunction_sb_cLsL::synapse0x29d7b90() {
   return (neuron0x29b5bf0()*0.0288293);
}

double NNfunction_sb_cLsL::synapse0x29d7bd0() {
   return (neuron0x29b5f30()*-2.5173);
}

double NNfunction_sb_cLsL::synapse0x29d7c10() {
   return (neuron0x29b6270()*0.0230411);
}

double NNfunction_sb_cLsL::synapse0x29d7c50() {
   return (neuron0x29b65b0()*-0.0793861);
}

double NNfunction_sb_cLsL::synapse0x29d7c90() {
   return (neuron0x29b68f0()*0.116278);
}

double NNfunction_sb_cLsL::synapse0x29d7cd0() {
   return (neuron0x29b6c30()*-0.14935);
}

double NNfunction_sb_cLsL::synapse0x29d7d10() {
   return (neuron0x29b6f70()*-0.10554);
}

double NNfunction_sb_cLsL::synapse0x29d7d50() {
   return (neuron0x29b72b0()*0.0591773);
}

double NNfunction_sb_cLsL::synapse0x29d7d90() {
   return (neuron0x29b75f0()*-0.0204617);
}

double NNfunction_sb_cLsL::synapse0x29d7dd0() {
   return (neuron0x29b7930()*-0.102857);
}

double NNfunction_sb_cLsL::synapse0x29d7e10() {
   return (neuron0x29b7c70()*-0.860817);
}

double NNfunction_sb_cLsL::synapse0x29d7e50() {
   return (neuron0x29b7fb0()*-0.111311);
}

double NNfunction_sb_cLsL::synapse0x29d7e90() {
   return (neuron0x29b82f0()*0.0908296);
}

double NNfunction_sb_cLsL::synapse0x29d7ed0() {
   return (neuron0x29b8630()*-0.0159692);
}

double NNfunction_sb_cLsL::synapse0x29d7960() {
   return (neuron0x29b8970()*-0.0623946);
}

double NNfunction_sb_cLsL::synapse0x29d79a0() {
   return (neuron0x29b8ed0()*0.0840882);
}

double NNfunction_sb_cLsL::synapse0x29d8020() {
   return (neuron0x29b90f0()*-0.0377327);
}

double NNfunction_sb_cLsL::synapse0x29d8060() {
   return (neuron0x29b9430()*-0.28943);
}

double NNfunction_sb_cLsL::synapse0x29d80a0() {
   return (neuron0x29b9770()*0.148767);
}

double NNfunction_sb_cLsL::synapse0x29d80e0() {
   return (neuron0x29b9ab0()*-0.0449315);
}

double NNfunction_sb_cLsL::synapse0x29d8120() {
   return (neuron0x29b9df0()*0.0187198);
}

double NNfunction_sb_cLsL::synapse0x29d8160() {
   return (neuron0x29ba130()*-0.259274);
}

double NNfunction_sb_cLsL::synapse0x29d84e0() {
   return (neuron0x29b5570()*0.110825);
}

double NNfunction_sb_cLsL::synapse0x29d8520() {
   return (neuron0x29b58b0()*0.209696);
}

double NNfunction_sb_cLsL::synapse0x29d8560() {
   return (neuron0x29b5bf0()*-0.0558039);
}

double NNfunction_sb_cLsL::synapse0x29d85a0() {
   return (neuron0x29b5f30()*-1.08661);
}

double NNfunction_sb_cLsL::synapse0x29d85e0() {
   return (neuron0x29b6270()*-0.157333);
}

double NNfunction_sb_cLsL::synapse0x29d8620() {
   return (neuron0x29b65b0()*0.0346155);
}

double NNfunction_sb_cLsL::synapse0x29d8660() {
   return (neuron0x29b68f0()*0.145693);
}

double NNfunction_sb_cLsL::synapse0x29d86a0() {
   return (neuron0x29b6c30()*0.0470202);
}

double NNfunction_sb_cLsL::synapse0x29d86e0() {
   return (neuron0x29b6f70()*-0.210923);
}

double NNfunction_sb_cLsL::synapse0x29d8720() {
   return (neuron0x29b72b0()*0.14108);
}

double NNfunction_sb_cLsL::synapse0x29d8760() {
   return (neuron0x29b75f0()*-0.114546);
}

double NNfunction_sb_cLsL::synapse0x29d87a0() {
   return (neuron0x29b7930()*0.165326);
}

double NNfunction_sb_cLsL::synapse0x29d87e0() {
   return (neuron0x29b7c70()*-0.951722);
}

double NNfunction_sb_cLsL::synapse0x29d8820() {
   return (neuron0x29b7fb0()*-0.489703);
}

double NNfunction_sb_cLsL::synapse0x29d8860() {
   return (neuron0x29b82f0()*0.377922);
}

double NNfunction_sb_cLsL::synapse0x29d88a0() {
   return (neuron0x29b8630()*0.48763);
}

double NNfunction_sb_cLsL::synapse0x29d8330() {
   return (neuron0x29b8970()*-0.312285);
}

double NNfunction_sb_cLsL::synapse0x29d8370() {
   return (neuron0x29b8ed0()*0.103635);
}

double NNfunction_sb_cLsL::synapse0x29c8ea0() {
   return (neuron0x29b90f0()*-0.0149569);
}

double NNfunction_sb_cLsL::synapse0x29c8ee0() {
   return (neuron0x29b9430()*-0.140163);
}

double NNfunction_sb_cLsL::synapse0x29c8f20() {
   return (neuron0x29b9770()*-0.0183439);
}

double NNfunction_sb_cLsL::synapse0x29c8f60() {
   return (neuron0x29b9ab0()*-0.144248);
}

double NNfunction_sb_cLsL::synapse0x29c8fa0() {
   return (neuron0x29b9df0()*-0.124778);
}

double NNfunction_sb_cLsL::synapse0x29c8fe0() {
   return (neuron0x29ba130()*-0.259249);
}

double NNfunction_sb_cLsL::synapse0x29c9360() {
   return (neuron0x29b5570()*0.969409);
}

double NNfunction_sb_cLsL::synapse0x29c93a0() {
   return (neuron0x29b58b0()*0.327909);
}

double NNfunction_sb_cLsL::synapse0x29c93e0() {
   return (neuron0x29b5bf0()*-0.243456);
}

double NNfunction_sb_cLsL::synapse0x29c9420() {
   return (neuron0x29b5f30()*0.130028);
}

double NNfunction_sb_cLsL::synapse0x29c9460() {
   return (neuron0x29b6270()*0.127146);
}

double NNfunction_sb_cLsL::synapse0x29c94a0() {
   return (neuron0x29b65b0()*0.677373);
}

double NNfunction_sb_cLsL::synapse0x29c94e0() {
   return (neuron0x29b68f0()*0.178013);
}

double NNfunction_sb_cLsL::synapse0x29c9520() {
   return (neuron0x29b6c30()*0.15649);
}

double NNfunction_sb_cLsL::synapse0x29c9560() {
   return (neuron0x29b6f70()*-0.64247);
}

double NNfunction_sb_cLsL::synapse0x29c95a0() {
   return (neuron0x29b72b0()*0.565456);
}

double NNfunction_sb_cLsL::synapse0x29c95e0() {
   return (neuron0x29b75f0()*0.0298653);
}

double NNfunction_sb_cLsL::synapse0x29c9620() {
   return (neuron0x29b7930()*-0.730799);
}

double NNfunction_sb_cLsL::synapse0x29c9660() {
   return (neuron0x29b7c70()*0.940089);
}

double NNfunction_sb_cLsL::synapse0x29c96a0() {
   return (neuron0x29b7fb0()*0.104927);
}

double NNfunction_sb_cLsL::synapse0x29c96e0() {
   return (neuron0x29b82f0()*1.14824);
}

double NNfunction_sb_cLsL::synapse0x29c9720() {
   return (neuron0x29b8630()*0.122742);
}

double NNfunction_sb_cLsL::synapse0x29c91b0() {
   return (neuron0x29b8970()*0.524324);
}

double NNfunction_sb_cLsL::synapse0x29c91f0() {
   return (neuron0x29b8ed0()*-0.332584);
}

double NNfunction_sb_cLsL::synapse0x29c9870() {
   return (neuron0x29b90f0()*0.125931);
}

double NNfunction_sb_cLsL::synapse0x29c98b0() {
   return (neuron0x29b9430()*-0.167319);
}

double NNfunction_sb_cLsL::synapse0x29c98f0() {
   return (neuron0x29b9770()*-0.217774);
}

double NNfunction_sb_cLsL::synapse0x29c9930() {
   return (neuron0x29b9ab0()*-0.146122);
}

double NNfunction_sb_cLsL::synapse0x29c9970() {
   return (neuron0x29b9df0()*-0.192344);
}

double NNfunction_sb_cLsL::synapse0x29c99b0() {
   return (neuron0x29ba130()*-0.127961);
}

double NNfunction_sb_cLsL::synapse0x29c9d30() {
   return (neuron0x29b5570()*0.0206891);
}

double NNfunction_sb_cLsL::synapse0x29c9d70() {
   return (neuron0x29b58b0()*-0.136115);
}

double NNfunction_sb_cLsL::synapse0x29c9db0() {
   return (neuron0x29b5bf0()*0.16464);
}

double NNfunction_sb_cLsL::synapse0x29c9df0() {
   return (neuron0x29b5f30()*-0.593661);
}

double NNfunction_sb_cLsL::synapse0x29c9e30() {
   return (neuron0x29b6270()*-0.0524521);
}

double NNfunction_sb_cLsL::synapse0x29c9e70() {
   return (neuron0x29b65b0()*0.0804388);
}

double NNfunction_sb_cLsL::synapse0x29c9eb0() {
   return (neuron0x29b68f0()*-0.00212561);
}

double NNfunction_sb_cLsL::synapse0x29c9ef0() {
   return (neuron0x29b6c30()*0.131743);
}

double NNfunction_sb_cLsL::synapse0x29c9f30() {
   return (neuron0x29b6f70()*0.0364695);
}

double NNfunction_sb_cLsL::synapse0x29c9f70() {
   return (neuron0x29b72b0()*-0.000667746);
}

double NNfunction_sb_cLsL::synapse0x29c9fb0() {
   return (neuron0x29b75f0()*0.0368538);
}

double NNfunction_sb_cLsL::synapse0x29c9ff0() {
   return (neuron0x29b7930()*-0.271166);
}

double NNfunction_sb_cLsL::synapse0x29ca030() {
   return (neuron0x29b7c70()*-0.304906);
}

double NNfunction_sb_cLsL::synapse0x29ca070() {
   return (neuron0x29b7fb0()*0.254069);
}

double NNfunction_sb_cLsL::synapse0x29ca0b0() {
   return (neuron0x29b82f0()*-0.190039);
}

double NNfunction_sb_cLsL::synapse0x29ca0f0() {
   return (neuron0x29b8630()*-0.28743);
}

double NNfunction_sb_cLsL::synapse0x29c9b80() {
   return (neuron0x29b8970()*0.0876006);
}

double NNfunction_sb_cLsL::synapse0x29c9bc0() {
   return (neuron0x29b8ed0()*-0.208279);
}

double NNfunction_sb_cLsL::synapse0x29ca240() {
   return (neuron0x29b90f0()*-0.0895919);
}

double NNfunction_sb_cLsL::synapse0x29ca280() {
   return (neuron0x29b9430()*-0.121243);
}

double NNfunction_sb_cLsL::synapse0x29ca2c0() {
   return (neuron0x29b9770()*0.0658128);
}

double NNfunction_sb_cLsL::synapse0x29ca300() {
   return (neuron0x29b9ab0()*0.0464898);
}

double NNfunction_sb_cLsL::synapse0x29ca340() {
   return (neuron0x29b9df0()*0.0235846);
}

double NNfunction_sb_cLsL::synapse0x29ca380() {
   return (neuron0x29ba130()*0.0681733);
}

double NNfunction_sb_cLsL::synapse0x29ca700() {
   return (neuron0x29b5570()*-0.369989);
}

double NNfunction_sb_cLsL::synapse0x29ca740() {
   return (neuron0x29b58b0()*-0.915601);
}

double NNfunction_sb_cLsL::synapse0x29ca780() {
   return (neuron0x29b5bf0()*-0.0128402);
}

double NNfunction_sb_cLsL::synapse0x29ca7c0() {
   return (neuron0x29b5f30()*0.0746311);
}

double NNfunction_sb_cLsL::synapse0x29ca800() {
   return (neuron0x29b6270()*0.552041);
}

double NNfunction_sb_cLsL::synapse0x29ca840() {
   return (neuron0x29b65b0()*0.488739);
}

double NNfunction_sb_cLsL::synapse0x29ca880() {
   return (neuron0x29b68f0()*-0.52814);
}

double NNfunction_sb_cLsL::synapse0x29ca8c0() {
   return (neuron0x29b6c30()*0.193578);
}

double NNfunction_sb_cLsL::synapse0x29ca900() {
   return (neuron0x29b6f70()*-0.507209);
}

double NNfunction_sb_cLsL::synapse0x29ca940() {
   return (neuron0x29b72b0()*0.171811);
}

double NNfunction_sb_cLsL::synapse0x29ca980() {
   return (neuron0x29b75f0()*-0.0803475);
}

double NNfunction_sb_cLsL::synapse0x29ca9c0() {
   return (neuron0x29b7930()*0.0106155);
}

double NNfunction_sb_cLsL::synapse0x29caa00() {
   return (neuron0x29b7c70()*0.944071);
}

double NNfunction_sb_cLsL::synapse0x29caa40() {
   return (neuron0x29b7fb0()*0.115635);
}

double NNfunction_sb_cLsL::synapse0x29caa80() {
   return (neuron0x29b82f0()*-0.0272472);
}

double NNfunction_sb_cLsL::synapse0x29caac0() {
   return (neuron0x29b8630()*0.187064);
}

double NNfunction_sb_cLsL::synapse0x29ca550() {
   return (neuron0x29b8970()*0.0762833);
}

double NNfunction_sb_cLsL::synapse0x29ca590() {
   return (neuron0x29b8ed0()*-0.534743);
}

double NNfunction_sb_cLsL::synapse0x29cac10() {
   return (neuron0x29b90f0()*-0.251776);
}

double NNfunction_sb_cLsL::synapse0x29cac50() {
   return (neuron0x29b9430()*-0.189051);
}

double NNfunction_sb_cLsL::synapse0x29cac90() {
   return (neuron0x29b9770()*0.723234);
}

double NNfunction_sb_cLsL::synapse0x29cacd0() {
   return (neuron0x29b9ab0()*-0.318218);
}

double NNfunction_sb_cLsL::synapse0x29cad10() {
   return (neuron0x29b9df0()*0.174167);
}

double NNfunction_sb_cLsL::synapse0x29cad50() {
   return (neuron0x29ba130()*0.0293509);
}

double NNfunction_sb_cLsL::synapse0x29dcc20() {
   return (neuron0x29b5570()*0.0296646);
}

double NNfunction_sb_cLsL::synapse0x29dcc60() {
   return (neuron0x29b58b0()*-0.0288738);
}

double NNfunction_sb_cLsL::synapse0x29dcca0() {
   return (neuron0x29b5bf0()*-0.646183);
}

double NNfunction_sb_cLsL::synapse0x29dcce0() {
   return (neuron0x29b5f30()*-0.0714303);
}

double NNfunction_sb_cLsL::synapse0x29dcd20() {
   return (neuron0x29b6270()*-0.0103433);
}

double NNfunction_sb_cLsL::synapse0x29dcd60() {
   return (neuron0x29b65b0()*0.0093019);
}

double NNfunction_sb_cLsL::synapse0x29dcda0() {
   return (neuron0x29b68f0()*0.0021775);
}

double NNfunction_sb_cLsL::synapse0x29dcde0() {
   return (neuron0x29b6c30()*-0.0215656);
}

double NNfunction_sb_cLsL::synapse0x29dce20() {
   return (neuron0x29b6f70()*0.0017236);
}

double NNfunction_sb_cLsL::synapse0x29dce60() {
   return (neuron0x29b72b0()*0.0249131);
}

double NNfunction_sb_cLsL::synapse0x29dcea0() {
   return (neuron0x29b75f0()*0.00659584);
}

double NNfunction_sb_cLsL::synapse0x29dcee0() {
   return (neuron0x29b7930()*0.2337);
}

double NNfunction_sb_cLsL::synapse0x29dcf20() {
   return (neuron0x29b7c70()*0.0476746);
}

double NNfunction_sb_cLsL::synapse0x29dcf60() {
   return (neuron0x29b7fb0()*-0.0843106);
}

double NNfunction_sb_cLsL::synapse0x29dcfa0() {
   return (neuron0x29b82f0()*0.192106);
}

double NNfunction_sb_cLsL::synapse0x29dcfe0() {
   return (neuron0x29b8630()*0.0654562);
}

double NNfunction_sb_cLsL::synapse0x29cad90() {
   return (neuron0x29b8970()*-0.0806452);
}

double NNfunction_sb_cLsL::synapse0x29cadd0() {
   return (neuron0x29b8ed0()*0.131715);
}

double NNfunction_sb_cLsL::synapse0x29dd130() {
   return (neuron0x29b90f0()*0.132475);
}

double NNfunction_sb_cLsL::synapse0x29dd170() {
   return (neuron0x29b9430()*0.00488915);
}

double NNfunction_sb_cLsL::synapse0x29dd1b0() {
   return (neuron0x29b9770()*0.0339737);
}

double NNfunction_sb_cLsL::synapse0x29dd1f0() {
   return (neuron0x29b9ab0()*0.0159044);
}

double NNfunction_sb_cLsL::synapse0x29dd230() {
   return (neuron0x29b9df0()*0.0277435);
}

double NNfunction_sb_cLsL::synapse0x29dd270() {
   return (neuron0x29ba130()*0.0177173);
}

double NNfunction_sb_cLsL::synapse0x29dd5f0() {
   return (neuron0x29b5570()*-0.863306);
}

double NNfunction_sb_cLsL::synapse0x29dd630() {
   return (neuron0x29b58b0()*0.338066);
}

double NNfunction_sb_cLsL::synapse0x29dd670() {
   return (neuron0x29b5bf0()*0.916405);
}

double NNfunction_sb_cLsL::synapse0x29dd6b0() {
   return (neuron0x29b5f30()*-0.080752);
}

double NNfunction_sb_cLsL::synapse0x29dd6f0() {
   return (neuron0x29b6270()*-0.607698);
}

double NNfunction_sb_cLsL::synapse0x29dd730() {
   return (neuron0x29b65b0()*0.831294);
}

double NNfunction_sb_cLsL::synapse0x29dd770() {
   return (neuron0x29b68f0()*-0.363149);
}

double NNfunction_sb_cLsL::synapse0x29dd7b0() {
   return (neuron0x29b6c30()*0.00682736);
}

double NNfunction_sb_cLsL::synapse0x29dd7f0() {
   return (neuron0x29b6f70()*-0.203612);
}

double NNfunction_sb_cLsL::synapse0x29dd830() {
   return (neuron0x29b72b0()*-0.277376);
}

double NNfunction_sb_cLsL::synapse0x29dd870() {
   return (neuron0x29b75f0()*0.307622);
}

double NNfunction_sb_cLsL::synapse0x29dd8b0() {
   return (neuron0x29b7930()*0.168595);
}

double NNfunction_sb_cLsL::synapse0x29dd8f0() {
   return (neuron0x29b7c70()*-0.658392);
}

double NNfunction_sb_cLsL::synapse0x29dd930() {
   return (neuron0x29b7fb0()*0.166066);
}

double NNfunction_sb_cLsL::synapse0x29dd970() {
   return (neuron0x29b82f0()*0.373645);
}

double NNfunction_sb_cLsL::synapse0x29dd9b0() {
   return (neuron0x29b8630()*-0.594095);
}

double NNfunction_sb_cLsL::synapse0x29dd440() {
   return (neuron0x29b8970()*-0.576165);
}

double NNfunction_sb_cLsL::synapse0x29dd480() {
   return (neuron0x29b8ed0()*0.457426);
}

double NNfunction_sb_cLsL::synapse0x29ddb00() {
   return (neuron0x29b90f0()*-0.380673);
}

double NNfunction_sb_cLsL::synapse0x29ddb40() {
   return (neuron0x29b9430()*0.143304);
}

double NNfunction_sb_cLsL::synapse0x29ddb80() {
   return (neuron0x29b9770()*0.205484);
}

double NNfunction_sb_cLsL::synapse0x29ddbc0() {
   return (neuron0x29b9ab0()*-0.0816702);
}

double NNfunction_sb_cLsL::synapse0x29ddc00() {
   return (neuron0x29b9df0()*-0.222359);
}

double NNfunction_sb_cLsL::synapse0x29ddc40() {
   return (neuron0x29ba130()*0.384091);
}

double NNfunction_sb_cLsL::synapse0x29ddfc0() {
   return (neuron0x29b5570()*-0.0148188);
}

double NNfunction_sb_cLsL::synapse0x29de000() {
   return (neuron0x29b58b0()*-0.0595571);
}

double NNfunction_sb_cLsL::synapse0x29de040() {
   return (neuron0x29b5bf0()*-0.0935388);
}

double NNfunction_sb_cLsL::synapse0x29de080() {
   return (neuron0x29b5f30()*1.33408);
}

double NNfunction_sb_cLsL::synapse0x29de0c0() {
   return (neuron0x29b6270()*0.0773323);
}

double NNfunction_sb_cLsL::synapse0x29de100() {
   return (neuron0x29b65b0()*0.00863933);
}

double NNfunction_sb_cLsL::synapse0x29de140() {
   return (neuron0x29b68f0()*-0.0726588);
}

double NNfunction_sb_cLsL::synapse0x29de180() {
   return (neuron0x29b6c30()*-0.11785);
}

double NNfunction_sb_cLsL::synapse0x29de1c0() {
   return (neuron0x29b6f70()*-0.0111488);
}

double NNfunction_sb_cLsL::synapse0x29de200() {
   return (neuron0x29b72b0()*0.0212773);
}

double NNfunction_sb_cLsL::synapse0x29de240() {
   return (neuron0x29b75f0()*0.0954621);
}

double NNfunction_sb_cLsL::synapse0x29de280() {
   return (neuron0x29b7930()*0.0339077);
}

double NNfunction_sb_cLsL::synapse0x29de2c0() {
   return (neuron0x29b7c70()*-1.73266);
}

double NNfunction_sb_cLsL::synapse0x29de300() {
   return (neuron0x29b7fb0()*-0.018058);
}

double NNfunction_sb_cLsL::synapse0x29de340() {
   return (neuron0x29b82f0()*0.0155382);
}

double NNfunction_sb_cLsL::synapse0x29de380() {
   return (neuron0x29b8630()*-0.101963);
}

double NNfunction_sb_cLsL::synapse0x29dde10() {
   return (neuron0x29b8970()*0.043348);
}

double NNfunction_sb_cLsL::synapse0x29dde50() {
   return (neuron0x29b8ed0()*0.014097);
}

double NNfunction_sb_cLsL::synapse0x29de4d0() {
   return (neuron0x29b90f0()*0.0146289);
}

double NNfunction_sb_cLsL::synapse0x29de510() {
   return (neuron0x29b9430()*0.00918585);
}

double NNfunction_sb_cLsL::synapse0x29de550() {
   return (neuron0x29b9770()*0.0524932);
}

double NNfunction_sb_cLsL::synapse0x29de590() {
   return (neuron0x29b9ab0()*-0.0070302);
}

double NNfunction_sb_cLsL::synapse0x29de5d0() {
   return (neuron0x29b9df0()*-0.0201193);
}

double NNfunction_sb_cLsL::synapse0x29de610() {
   return (neuron0x29ba130()*-0.00313989);
}

double NNfunction_sb_cLsL::synapse0x29de990() {
   return (neuron0x29b5570()*-0.277554);
}

double NNfunction_sb_cLsL::synapse0x29de9d0() {
   return (neuron0x29b58b0()*0.186295);
}

double NNfunction_sb_cLsL::synapse0x29dea10() {
   return (neuron0x29b5bf0()*-0.518603);
}

double NNfunction_sb_cLsL::synapse0x29dea50() {
   return (neuron0x29b5f30()*0.877591);
}

double NNfunction_sb_cLsL::synapse0x29dea90() {
   return (neuron0x29b6270()*0.307434);
}

double NNfunction_sb_cLsL::synapse0x29dead0() {
   return (neuron0x29b65b0()*-0.463053);
}

double NNfunction_sb_cLsL::synapse0x29deb10() {
   return (neuron0x29b68f0()*0.448316);
}

double NNfunction_sb_cLsL::synapse0x29deb50() {
   return (neuron0x29b6c30()*0.26015);
}

double NNfunction_sb_cLsL::synapse0x29deb90() {
   return (neuron0x29b6f70()*-0.133867);
}

double NNfunction_sb_cLsL::synapse0x29debd0() {
   return (neuron0x29b72b0()*-0.0853253);
}

double NNfunction_sb_cLsL::synapse0x29dec10() {
   return (neuron0x29b75f0()*0.13873);
}

double NNfunction_sb_cLsL::synapse0x29dec50() {
   return (neuron0x29b7930()*0.604689);
}

double NNfunction_sb_cLsL::synapse0x29dec90() {
   return (neuron0x29b7c70()*-0.48782);
}

double NNfunction_sb_cLsL::synapse0x29decd0() {
   return (neuron0x29b7fb0()*-0.8445);
}

double NNfunction_sb_cLsL::synapse0x29ded10() {
   return (neuron0x29b82f0()*0.0187682);
}

double NNfunction_sb_cLsL::synapse0x29ded50() {
   return (neuron0x29b8630()*0.363109);
}

double NNfunction_sb_cLsL::synapse0x29de7e0() {
   return (neuron0x29b8970()*-0.738441);
}

double NNfunction_sb_cLsL::synapse0x29de820() {
   return (neuron0x29b8ed0()*-0.142508);
}

double NNfunction_sb_cLsL::synapse0x29deea0() {
   return (neuron0x29b90f0()*0.33894);
}

double NNfunction_sb_cLsL::synapse0x29deee0() {
   return (neuron0x29b9430()*0.467919);
}

double NNfunction_sb_cLsL::synapse0x29def20() {
   return (neuron0x29b9770()*-0.254939);
}

double NNfunction_sb_cLsL::synapse0x29def60() {
   return (neuron0x29b9ab0()*0.193623);
}

double NNfunction_sb_cLsL::synapse0x29defa0() {
   return (neuron0x29b9df0()*-0.0120562);
}

double NNfunction_sb_cLsL::synapse0x29defe0() {
   return (neuron0x29ba130()*-0.3229);
}

double NNfunction_sb_cLsL::synapse0x29bb580() {
   return (neuron0x29ba5d0()*-0.166276);
}

double NNfunction_sb_cLsL::synapse0x29bb5c0() {
   return (neuron0x29baee0()*0.175163);
}

double NNfunction_sb_cLsL::synapse0x29bca90() {
   return (neuron0x29bb9c0()*-0.188654);
}

double NNfunction_sb_cLsL::synapse0x29bcad0() {
   return (neuron0x2775250()*0.173231);
}

double NNfunction_sb_cLsL::synapse0x29bd460() {
   return (neuron0x29bc7e0()*1.47657);
}

double NNfunction_sb_cLsL::synapse0x29bd4a0() {
   return (neuron0x29bd1b0()*-0.252805);
}

double NNfunction_sb_cLsL::synapse0x29be230() {
   return (neuron0x29bdf80()*-0.0255644);
}

double NNfunction_sb_cLsL::synapse0x29be270() {
   return (neuron0x29be950()*-0.45972);
}

double NNfunction_sb_cLsL::synapse0x29bec00() {
   return (neuron0x29bf320()*0.169289);
}

double NNfunction_sb_cLsL::synapse0x29bec40() {
   return (neuron0x29bfe00()*0.145786);
}

double NNfunction_sb_cLsL::synapse0x29bf5d0() {
   return (neuron0x29c07d0()*0.708486);
}

double NNfunction_sb_cLsL::synapse0x29bf610() {
   return (neuron0x29bd8b0()*-0.223956);
}

double NNfunction_sb_cLsL::synapse0x29c00b0() {
   return (neuron0x29c2380()*0.135429);
}

double NNfunction_sb_cLsL::synapse0x29c00f0() {
   return (neuron0x29c2d50()*0.251056);
}

double NNfunction_sb_cLsL::synapse0x29c0a80() {
   return (neuron0x29c3720()*-0.118655);
}

double NNfunction_sb_cLsL::synapse0x29c0ac0() {
   return (neuron0x29c40f0()*-0.233328);
}

double NNfunction_sb_cLsL::synapse0x29bdb60() {
   return (neuron0x29c5f00()*0.194715);
}

double NNfunction_sb_cLsL::synapse0x29bdba0() {
   return (neuron0x29c61e0()*2.39834);
}

double NNfunction_sb_cLsL::synapse0x29c2630() {
   return (neuron0x29c6bb0()*-0.202272);
}

double NNfunction_sb_cLsL::synapse0x29c2670() {
   return (neuron0x29c7580()*0.425241);
}

double NNfunction_sb_cLsL::synapse0x29c3000() {
   return (neuron0x29c7f50()*0.156482);
}

double NNfunction_sb_cLsL::synapse0x29c3040() {
   return (neuron0x29c8920()*-0.316324);
}

double NNfunction_sb_cLsL::synapse0x29c39d0() {
   return (neuron0x29c1470()*-0.552073);
}

double NNfunction_sb_cLsL::synapse0x29c3a10() {
   return (neuron0x29c1e40()*-0.223116);
}

double NNfunction_sb_cLsL::synapse0x29c43a0() {
   return (neuron0x29cb6b0()*0.152335);
}

double NNfunction_sb_cLsL::synapse0x29c43e0() {
   return (neuron0x29cc080()*-0.137286);
}

double NNfunction_sb_cLsL::synapse0x29b8510() {
   return (neuron0x29cca50()*0.252754);
}

double NNfunction_sb_cLsL::synapse0x29b8550() {
   return (neuron0x29cd420()*-0.192554);
}

double NNfunction_sb_cLsL::synapse0x29c6490() {
   return (neuron0x29cddf0()*0.395632);
}

double NNfunction_sb_cLsL::synapse0x29c64d0() {
   return (neuron0x29ce7c0()*-0.415812);
}

double NNfunction_sb_cLsL::synapse0x29c6e60() {
   return (neuron0x29cf190()*-0.264538);
}

double NNfunction_sb_cLsL::synapse0x29c6ea0() {
   return (neuron0x29cfb60()*1.55442);
}

double NNfunction_sb_cLsL::synapse0x29c7830() {
   return (neuron0x29c5bf0()*-0.334398);
}

double NNfunction_sb_cLsL::synapse0x29c7870() {
   return (neuron0x29d2740()*0.420172);
}

double NNfunction_sb_cLsL::synapse0x29c8200() {
   return (neuron0x29d3110()*-0.098474);
}

double NNfunction_sb_cLsL::synapse0x29c8240() {
   return (neuron0x29d3ae0()*0.219303);
}

double NNfunction_sb_cLsL::synapse0x29c8bd0() {
   return (neuron0x29d44b0()*-1.07604);
}

double NNfunction_sb_cLsL::synapse0x29c8c10() {
   return (neuron0x29d4e80()*-0.110097);
}

double NNfunction_sb_cLsL::synapse0x29c1720() {
   return (neuron0x29d5850()*-1.15795);
}

double NNfunction_sb_cLsL::synapse0x29c1760() {
   return (neuron0x29d6220()*0.340693);
}

double NNfunction_sb_cLsL::synapse0x29cafd0() {
   return (neuron0x29d6bf0()*0.135979);
}

double NNfunction_sb_cLsL::synapse0x29cb010() {
   return (neuron0x29d77d0()*0.585846);
}

double NNfunction_sb_cLsL::synapse0x29cb960() {
   return (neuron0x29d81a0()*-0.450737);
}

double NNfunction_sb_cLsL::synapse0x29cb9a0() {
   return (neuron0x29c9020()*-0.167002);
}

double NNfunction_sb_cLsL::synapse0x29cc330() {
   return (neuron0x29c99f0()*-0.0503471);
}

double NNfunction_sb_cLsL::synapse0x29cc370() {
   return (neuron0x29ca3c0()*0.266404);
}

double NNfunction_sb_cLsL::synapse0x29ccd00() {
   return (neuron0x29dca00()*0.476171);
}

double NNfunction_sb_cLsL::synapse0x29ccd40() {
   return (neuron0x29dd2b0()*-0.159687);
}

double NNfunction_sb_cLsL::synapse0x29cd6d0() {
   return (neuron0x29ddc80()*-0.395992);
}

double NNfunction_sb_cLsL::synapse0x29cd710() {
   return (neuron0x29de650()*0.139399);
}

double NNfunction_sb_cLsL::synapse0x29cfe10() {
   return (neuron0x29ba5d0()*0.831934);
}

double NNfunction_sb_cLsL::synapse0x29cfe50() {
   return (neuron0x29baee0()*-0.55211);
}

double NNfunction_sb_cLsL::synapse0x29c53d0() {
   return (neuron0x29bb9c0()*-0.062551);
}

double NNfunction_sb_cLsL::synapse0x29c5410() {
   return (neuron0x2775250()*1.24914);
}

double NNfunction_sb_cLsL::synapse0x29d29f0() {
   return (neuron0x29bc7e0()*0.34383);
}

double NNfunction_sb_cLsL::synapse0x29d2a30() {
   return (neuron0x29bd1b0()*0.790241);
}

double NNfunction_sb_cLsL::synapse0x29d33c0() {
   return (neuron0x29bdf80()*0.313272);
}

double NNfunction_sb_cLsL::synapse0x29d3400() {
   return (neuron0x29be950()*0.661003);
}

double NNfunction_sb_cLsL::synapse0x29d3d90() {
   return (neuron0x29bf320()*-0.66686);
}

double NNfunction_sb_cLsL::synapse0x29d3dd0() {
   return (neuron0x29bfe00()*0.584788);
}

double NNfunction_sb_cLsL::synapse0x29d4760() {
   return (neuron0x29c07d0()*-0.0736262);
}

double NNfunction_sb_cLsL::synapse0x29d47a0() {
   return (neuron0x29bd8b0()*1.30363);
}

double NNfunction_sb_cLsL::synapse0x29d5130() {
   return (neuron0x29c2380()*1.0694);
}

double NNfunction_sb_cLsL::synapse0x29d5170() {
   return (neuron0x29c2d50()*-0.321607);
}

double NNfunction_sb_cLsL::synapse0x29d5b00() {
   return (neuron0x29c3720()*1.93454);
}

double NNfunction_sb_cLsL::synapse0x29d5b40() {
   return (neuron0x29c40f0()*1.01048);
}

double NNfunction_sb_cLsL::synapse0x29d64d0() {
   return (neuron0x29c5f00()*0.405572);
}

double NNfunction_sb_cLsL::synapse0x29d6510() {
   return (neuron0x29c61e0()*0.54633);
}

double NNfunction_sb_cLsL::synapse0x29d6ea0() {
   return (neuron0x29c6bb0()*0.825424);
}

double NNfunction_sb_cLsL::synapse0x29d6ee0() {
   return (neuron0x29c7580()*0.898639);
}

double NNfunction_sb_cLsL::synapse0x29d7a80() {
   return (neuron0x29c7f50()*-0.0531049);
}

double NNfunction_sb_cLsL::synapse0x29d7ac0() {
   return (neuron0x29c8920()*0.76004);
}

double NNfunction_sb_cLsL::synapse0x29d8450() {
   return (neuron0x29c1470()*-0.148147);
}

double NNfunction_sb_cLsL::synapse0x29d8490() {
   return (neuron0x29c1e40()*0.267042);
}

double NNfunction_sb_cLsL::synapse0x29c92d0() {
   return (neuron0x29cb6b0()*0.597182);
}

double NNfunction_sb_cLsL::synapse0x29c9310() {
   return (neuron0x29cc080()*0.0211272);
}

double NNfunction_sb_cLsL::synapse0x29c9ca0() {
   return (neuron0x29cca50()*0.294858);
}

double NNfunction_sb_cLsL::synapse0x29c9ce0() {
   return (neuron0x29cd420()*1.52999);
}

double NNfunction_sb_cLsL::synapse0x29ca670() {
   return (neuron0x29cddf0()*0.714773);
}

double NNfunction_sb_cLsL::synapse0x29ca6b0() {
   return (neuron0x29ce7c0()*0.011027);
}

double NNfunction_sb_cLsL::synapse0x29dcb90() {
   return (neuron0x29cf190()*0.177852);
}

double NNfunction_sb_cLsL::synapse0x29dcbd0() {
   return (neuron0x29cfb60()*-0.391461);
}

double NNfunction_sb_cLsL::synapse0x29dd560() {
   return (neuron0x29c5bf0()*0.230369);
}

double NNfunction_sb_cLsL::synapse0x29dd5a0() {
   return (neuron0x29d2740()*0.606948);
}

double NNfunction_sb_cLsL::synapse0x29ddf30() {
   return (neuron0x29d3110()*0.0955538);
}

double NNfunction_sb_cLsL::synapse0x29ddf70() {
   return (neuron0x29d3ae0()*0.730866);
}

double NNfunction_sb_cLsL::synapse0x29de900() {
   return (neuron0x29d44b0()*0.160102);
}

double NNfunction_sb_cLsL::synapse0x29de940() {
   return (neuron0x29d4e80()*0.491014);
}

double NNfunction_sb_cLsL::synapse0x29ba7f0() {
   return (neuron0x29d5850()*-0.138042);
}

double NNfunction_sb_cLsL::synapse0x29ba830() {
   return (neuron0x29d6220()*0.182852);
}

double NNfunction_sb_cLsL::synapse0x29ce0a0() {
   return (neuron0x29d6bf0()*-0.152424);
}

double NNfunction_sb_cLsL::synapse0x29ce0e0() {
   return (neuron0x29d77d0()*0.89553);
}

double NNfunction_sb_cLsL::synapse0x29df020() {
   return (neuron0x29d81a0()*0.27154);
}

double NNfunction_sb_cLsL::synapse0x29df060() {
   return (neuron0x29c9020()*0.245177);
}

double NNfunction_sb_cLsL::synapse0x29df0a0() {
   return (neuron0x29c99f0()*0.683202);
}

double NNfunction_sb_cLsL::synapse0x29df0e0() {
   return (neuron0x29ca3c0()*0.11387);
}

double NNfunction_sb_cLsL::synapse0x29e5f90() {
   return (neuron0x29dca00()*0.388266);
}

double NNfunction_sb_cLsL::synapse0x29e5fd0() {
   return (neuron0x29dd2b0()*-0.0999652);
}

double NNfunction_sb_cLsL::synapse0x29e6010() {
   return (neuron0x29ddc80()*0.0615298);
}

double NNfunction_sb_cLsL::synapse0x29e6050() {
   return (neuron0x29de650()*1.34517);
}

double NNfunction_sb_cLsL::synapse0x29e63d0() {
   return (neuron0x29ba5d0()*0.773554);
}

double NNfunction_sb_cLsL::synapse0x29e6410() {
   return (neuron0x29baee0()*-0.829559);
}

double NNfunction_sb_cLsL::synapse0x29e6450() {
   return (neuron0x29bb9c0()*0.902904);
}

double NNfunction_sb_cLsL::synapse0x29e6490() {
   return (neuron0x2775250()*2.75879);
}

double NNfunction_sb_cLsL::synapse0x29e64d0() {
   return (neuron0x29bc7e0()*1.45214);
}

double NNfunction_sb_cLsL::synapse0x29e6510() {
   return (neuron0x29bd1b0()*0.509296);
}

double NNfunction_sb_cLsL::synapse0x29e6550() {
   return (neuron0x29bdf80()*-2.41697);
}

double NNfunction_sb_cLsL::synapse0x29e6590() {
   return (neuron0x29be950()*-2.12698);
}

double NNfunction_sb_cLsL::synapse0x29e65d0() {
   return (neuron0x29bf320()*-0.837118);
}

double NNfunction_sb_cLsL::synapse0x29e6610() {
   return (neuron0x29bfe00()*-0.745034);
}

double NNfunction_sb_cLsL::synapse0x29e6650() {
   return (neuron0x29c07d0()*-1.34644);
}

double NNfunction_sb_cLsL::synapse0x29e6690() {
   return (neuron0x29bd8b0()*1.08526);
}

double NNfunction_sb_cLsL::synapse0x29e66d0() {
   return (neuron0x29c2380()*-0.709191);
}

double NNfunction_sb_cLsL::synapse0x29e6710() {
   return (neuron0x29c2d50()*-1.24387);
}

double NNfunction_sb_cLsL::synapse0x29e6750() {
   return (neuron0x29c3720()*0.655524);
}

double NNfunction_sb_cLsL::synapse0x29e6790() {
   return (neuron0x29c40f0()*0.904727);
}

double NNfunction_sb_cLsL::synapse0x29e6220() {
   return (neuron0x29c5f00()*-0.949663);
}

double NNfunction_sb_cLsL::synapse0x29e6260() {
   return (neuron0x29c61e0()*-0.289103);
}

double NNfunction_sb_cLsL::synapse0x29e68e0() {
   return (neuron0x29c6bb0()*1.01868);
}

double NNfunction_sb_cLsL::synapse0x29e6920() {
   return (neuron0x29c7580()*-0.295203);
}

double NNfunction_sb_cLsL::synapse0x29e6960() {
   return (neuron0x29c7f50()*-0.812415);
}

double NNfunction_sb_cLsL::synapse0x29e69a0() {
   return (neuron0x29c8920()*1.46602);
}

double NNfunction_sb_cLsL::synapse0x29e69e0() {
   return (neuron0x29c1470()*2.22304);
}

double NNfunction_sb_cLsL::synapse0x29e6a20() {
   return (neuron0x29c1e40()*1.22425);
}

double NNfunction_sb_cLsL::synapse0x29e6a60() {
   return (neuron0x29cb6b0()*2.42841);
}

double NNfunction_sb_cLsL::synapse0x29e6aa0() {
   return (neuron0x29cc080()*0.849992);
}

double NNfunction_sb_cLsL::synapse0x29e6ae0() {
   return (neuron0x29cca50()*-1.37288);
}

double NNfunction_sb_cLsL::synapse0x29e6b20() {
   return (neuron0x29cd420()*0.153922);
}

double NNfunction_sb_cLsL::synapse0x29e6b60() {
   return (neuron0x29cddf0()*6.40428);
}

double NNfunction_sb_cLsL::synapse0x29e6ba0() {
   return (neuron0x29ce7c0()*-0.109942);
}

double NNfunction_sb_cLsL::synapse0x29e6be0() {
   return (neuron0x29cf190()*1.25888);
}

double NNfunction_sb_cLsL::synapse0x29e6c20() {
   return (neuron0x29cfb60()*-6.26263);
}

double NNfunction_sb_cLsL::synapse0x29e67d0() {
   return (neuron0x29c5bf0()*1.1406);
}

double NNfunction_sb_cLsL::synapse0x29e6810() {
   return (neuron0x29d2740()*-1.72066);
}

double NNfunction_sb_cLsL::synapse0x29e6850() {
   return (neuron0x29d3110()*0.609733);
}

double NNfunction_sb_cLsL::synapse0x29e6890() {
   return (neuron0x29d3ae0()*-1.04977);
}

double NNfunction_sb_cLsL::synapse0x29e6e70() {
   return (neuron0x29d44b0()*-2.27835);
}

double NNfunction_sb_cLsL::synapse0x29e6eb0() {
   return (neuron0x29d4e80()*0.406129);
}

double NNfunction_sb_cLsL::synapse0x29e6ef0() {
   return (neuron0x29d5850()*-2.80888);
}

double NNfunction_sb_cLsL::synapse0x29e6f30() {
   return (neuron0x29d6220()*-1.4863);
}

double NNfunction_sb_cLsL::synapse0x29e6f70() {
   return (neuron0x29d6bf0()*-0.774894);
}

double NNfunction_sb_cLsL::synapse0x29e6fb0() {
   return (neuron0x29d77d0()*-4.877);
}

double NNfunction_sb_cLsL::synapse0x29e6ff0() {
   return (neuron0x29d81a0()*1.31825);
}

double NNfunction_sb_cLsL::synapse0x29e7030() {
   return (neuron0x29c9020()*0.796812);
}

double NNfunction_sb_cLsL::synapse0x29e7070() {
   return (neuron0x29c99f0()*0.441709);
}

double NNfunction_sb_cLsL::synapse0x29e70b0() {
   return (neuron0x29ca3c0()*-1.34686);
}

double NNfunction_sb_cLsL::synapse0x29e70f0() {
   return (neuron0x29dca00()*2.73214);
}

double NNfunction_sb_cLsL::synapse0x29e7130() {
   return (neuron0x29dd2b0()*0.860653);
}

double NNfunction_sb_cLsL::synapse0x29e7170() {
   return (neuron0x29ddc80()*0.861275);
}

double NNfunction_sb_cLsL::synapse0x29e71b0() {
   return (neuron0x29de650()*-0.383867);
}

double NNfunction_sb_cLsL::synapse0x29e7530() {
   return (neuron0x29ba5d0()*0.524954);
}

double NNfunction_sb_cLsL::synapse0x29e7570() {
   return (neuron0x29baee0()*-0.143741);
}

double NNfunction_sb_cLsL::synapse0x29e75b0() {
   return (neuron0x29bb9c0()*-0.0411465);
}

double NNfunction_sb_cLsL::synapse0x29e75f0() {
   return (neuron0x2775250()*2.90328);
}

double NNfunction_sb_cLsL::synapse0x29e7630() {
   return (neuron0x29bc7e0()*-1.13393);
}

double NNfunction_sb_cLsL::synapse0x29e7670() {
   return (neuron0x29bd1b0()*-1.44544);
}

double NNfunction_sb_cLsL::synapse0x29e76b0() {
   return (neuron0x29bdf80()*-1.09051);
}

double NNfunction_sb_cLsL::synapse0x29e76f0() {
   return (neuron0x29be950()*-0.0259375);
}

double NNfunction_sb_cLsL::synapse0x29e7730() {
   return (neuron0x29bf320()*-0.272985);
}

double NNfunction_sb_cLsL::synapse0x29e7770() {
   return (neuron0x29bfe00()*0.0196016);
}

double NNfunction_sb_cLsL::synapse0x29e77b0() {
   return (neuron0x29c07d0()*-0.87933);
}

double NNfunction_sb_cLsL::synapse0x29e77f0() {
   return (neuron0x29bd8b0()*0.170281);
}

double NNfunction_sb_cLsL::synapse0x29e7830() {
   return (neuron0x29c2380()*-0.656966);
}

double NNfunction_sb_cLsL::synapse0x29e7870() {
   return (neuron0x29c2d50()*-0.579651);
}

double NNfunction_sb_cLsL::synapse0x29e78b0() {
   return (neuron0x29c3720()*-0.0118356);
}

double NNfunction_sb_cLsL::synapse0x29e78f0() {
   return (neuron0x29c40f0()*0.126929);
}

double NNfunction_sb_cLsL::synapse0x29e7380() {
   return (neuron0x29c5f00()*-0.256572);
}

double NNfunction_sb_cLsL::synapse0x29e73c0() {
   return (neuron0x29c61e0()*-1.3362);
}

double NNfunction_sb_cLsL::synapse0x29e7a40() {
   return (neuron0x29c6bb0()*-0.288569);
}

double NNfunction_sb_cLsL::synapse0x29e7a80() {
   return (neuron0x29c7580()*1.44514);
}

double NNfunction_sb_cLsL::synapse0x29e7ac0() {
   return (neuron0x29c7f50()*-1.01104);
}

double NNfunction_sb_cLsL::synapse0x29e7b00() {
   return (neuron0x29c8920()*-0.00626199);
}

double NNfunction_sb_cLsL::synapse0x29e7b40() {
   return (neuron0x29c1470()*-0.886824);
}

double NNfunction_sb_cLsL::synapse0x29e7b80() {
   return (neuron0x29c1e40()*0.0721321);
}

double NNfunction_sb_cLsL::synapse0x29e7bc0() {
   return (neuron0x29cb6b0()*-0.0239124);
}

double NNfunction_sb_cLsL::synapse0x29e7c00() {
   return (neuron0x29cc080()*0.158147);
}

double NNfunction_sb_cLsL::synapse0x29e7c40() {
   return (neuron0x29cca50()*-0.285448);
}

double NNfunction_sb_cLsL::synapse0x29e7c80() {
   return (neuron0x29cd420()*0.482018);
}

double NNfunction_sb_cLsL::synapse0x29e7cc0() {
   return (neuron0x29cddf0()*-1.07823);
}

double NNfunction_sb_cLsL::synapse0x29e7d00() {
   return (neuron0x29ce7c0()*1.17233);
}

double NNfunction_sb_cLsL::synapse0x29e7d40() {
   return (neuron0x29cf190()*0.277782);
}

double NNfunction_sb_cLsL::synapse0x29e7d80() {
   return (neuron0x29cfb60()*0.353495);
}

double NNfunction_sb_cLsL::synapse0x29e7930() {
   return (neuron0x29c5bf0()*-0.734869);
}

double NNfunction_sb_cLsL::synapse0x29e7970() {
   return (neuron0x29d2740()*0.405254);
}

double NNfunction_sb_cLsL::synapse0x29e79b0() {
   return (neuron0x29d3110()*-0.79067);
}

double NNfunction_sb_cLsL::synapse0x29e79f0() {
   return (neuron0x29d3ae0()*-0.631705);
}

double NNfunction_sb_cLsL::synapse0x29e7fd0() {
   return (neuron0x29d44b0()*0.00180718);
}

double NNfunction_sb_cLsL::synapse0x29e8010() {
   return (neuron0x29d4e80()*-0.563414);
}

double NNfunction_sb_cLsL::synapse0x29e8050() {
   return (neuron0x29d5850()*-1.18942);
}

double NNfunction_sb_cLsL::synapse0x29e8090() {
   return (neuron0x29d6220()*-0.410069);
}

double NNfunction_sb_cLsL::synapse0x29e80d0() {
   return (neuron0x29d6bf0()*-0.246132);
}

double NNfunction_sb_cLsL::synapse0x29e8110() {
   return (neuron0x29d77d0()*0.0772128);
}

double NNfunction_sb_cLsL::synapse0x29e8150() {
   return (neuron0x29d81a0()*0.866051);
}

double NNfunction_sb_cLsL::synapse0x29e8190() {
   return (neuron0x29c9020()*-0.101499);
}

double NNfunction_sb_cLsL::synapse0x29e81d0() {
   return (neuron0x29c99f0()*0.333422);
}

double NNfunction_sb_cLsL::synapse0x29e8210() {
   return (neuron0x29ca3c0()*-0.174848);
}

double NNfunction_sb_cLsL::synapse0x29e8250() {
   return (neuron0x29dca00()*-0.404056);
}

double NNfunction_sb_cLsL::synapse0x29e8290() {
   return (neuron0x29dd2b0()*0.0819204);
}

double NNfunction_sb_cLsL::synapse0x29e82d0() {
   return (neuron0x29ddc80()*-0.264415);
}

double NNfunction_sb_cLsL::synapse0x29e8310() {
   return (neuron0x29de650()*-1.42601);
}

double NNfunction_sb_cLsL::synapse0x29e8690() {
   return (neuron0x29ba5d0()*-0.147987);
}

double NNfunction_sb_cLsL::synapse0x29e86d0() {
   return (neuron0x29baee0()*0.12942);
}

double NNfunction_sb_cLsL::synapse0x29e8710() {
   return (neuron0x29bb9c0()*-0.167636);
}

double NNfunction_sb_cLsL::synapse0x29e8750() {
   return (neuron0x2775250()*-1.01215);
}

double NNfunction_sb_cLsL::synapse0x29e8790() {
   return (neuron0x29bc7e0()*-2.12245);
}

double NNfunction_sb_cLsL::synapse0x29e87d0() {
   return (neuron0x29bd1b0()*-1.91171);
}

double NNfunction_sb_cLsL::synapse0x29e8810() {
   return (neuron0x29bdf80()*0.173215);
}

double NNfunction_sb_cLsL::synapse0x29e8850() {
   return (neuron0x29be950()*-0.434008);
}

double NNfunction_sb_cLsL::synapse0x29e8890() {
   return (neuron0x29bf320()*0.184717);
}

double NNfunction_sb_cLsL::synapse0x29e88d0() {
   return (neuron0x29bfe00()*0.139045);
}

double NNfunction_sb_cLsL::synapse0x29e8910() {
   return (neuron0x29c07d0()*-2.07541);
}

double NNfunction_sb_cLsL::synapse0x29e8950() {
   return (neuron0x29bd8b0()*-0.261599);
}

double NNfunction_sb_cLsL::synapse0x29e8990() {
   return (neuron0x29c2380()*0.129591);
}

double NNfunction_sb_cLsL::synapse0x29e89d0() {
   return (neuron0x29c2d50()*0.249261);
}

double NNfunction_sb_cLsL::synapse0x29e8a10() {
   return (neuron0x29c3720()*-0.119895);
}

double NNfunction_sb_cLsL::synapse0x29e8a50() {
   return (neuron0x29c40f0()*-0.108453);
}

double NNfunction_sb_cLsL::synapse0x29e84e0() {
   return (neuron0x29c5f00()*0.164161);
}

double NNfunction_sb_cLsL::synapse0x29e8520() {
   return (neuron0x29c61e0()*-2.47961);
}

double NNfunction_sb_cLsL::synapse0x29e8ba0() {
   return (neuron0x29c6bb0()*-0.209885);
}

double NNfunction_sb_cLsL::synapse0x29e8be0() {
   return (neuron0x29c7580()*1.0215);
}

double NNfunction_sb_cLsL::synapse0x29e8c20() {
   return (neuron0x29c7f50()*0.139026);
}

double NNfunction_sb_cLsL::synapse0x29e8c60() {
   return (neuron0x29c8920()*-0.399746);
}

double NNfunction_sb_cLsL::synapse0x29e8ca0() {
   return (neuron0x29c1470()*-0.50394);
}

double NNfunction_sb_cLsL::synapse0x29e8ce0() {
   return (neuron0x29c1e40()*-0.273956);
}

double NNfunction_sb_cLsL::synapse0x29e8d20() {
   return (neuron0x29cb6b0()*0.82772);
}

double NNfunction_sb_cLsL::synapse0x29e8d60() {
   return (neuron0x29cc080()*-0.170978);
}

double NNfunction_sb_cLsL::synapse0x29e8da0() {
   return (neuron0x29cca50()*0.264712);
}

double NNfunction_sb_cLsL::synapse0x29e8de0() {
   return (neuron0x29cd420()*0.34974);
}

double NNfunction_sb_cLsL::synapse0x29e8e20() {
   return (neuron0x29cddf0()*0.121999);
}

double NNfunction_sb_cLsL::synapse0x29e8e60() {
   return (neuron0x29ce7c0()*1.07564);
}

double NNfunction_sb_cLsL::synapse0x29e8ea0() {
   return (neuron0x29cf190()*-0.235589);
}

double NNfunction_sb_cLsL::synapse0x29e8ee0() {
   return (neuron0x29cfb60()*0.280586);
}

double NNfunction_sb_cLsL::synapse0x29e8a90() {
   return (neuron0x29c5bf0()*-0.427823);
}

double NNfunction_sb_cLsL::synapse0x29e8ad0() {
   return (neuron0x29d2740()*-0.0766301);
}

double NNfunction_sb_cLsL::synapse0x29e8b10() {
   return (neuron0x29d3110()*-0.143865);
}

double NNfunction_sb_cLsL::synapse0x29e8b50() {
   return (neuron0x29d3ae0()*0.280375);
}

double NNfunction_sb_cLsL::synapse0x29e9130() {
   return (neuron0x29d44b0()*2.69184);
}

double NNfunction_sb_cLsL::synapse0x29e9170() {
   return (neuron0x29d4e80()*-0.0414194);
}

double NNfunction_sb_cLsL::synapse0x29e91b0() {
   return (neuron0x29d5850()*-1.004);
}

double NNfunction_sb_cLsL::synapse0x29e91f0() {
   return (neuron0x29d6220()*-3.05833);
}

double NNfunction_sb_cLsL::synapse0x29e9230() {
   return (neuron0x29d6bf0()*0.169084);
}

double NNfunction_sb_cLsL::synapse0x29e9270() {
   return (neuron0x29d77d0()*1.27744);
}

double NNfunction_sb_cLsL::synapse0x29e92b0() {
   return (neuron0x29d81a0()*0.0546294);
}

double NNfunction_sb_cLsL::synapse0x29e92f0() {
   return (neuron0x29c9020()*-0.11435);
}

double NNfunction_sb_cLsL::synapse0x29e9330() {
   return (neuron0x29c99f0()*0.722708);
}

double NNfunction_sb_cLsL::synapse0x29e9370() {
   return (neuron0x29ca3c0()*0.271563);
}

double NNfunction_sb_cLsL::synapse0x29e93b0() {
   return (neuron0x29dca00()*0.484638);
}

double NNfunction_sb_cLsL::synapse0x29e93f0() {
   return (neuron0x29dd2b0()*-0.172086);
}

double NNfunction_sb_cLsL::synapse0x29e9430() {
   return (neuron0x29ddc80()*1.31372);
}

double NNfunction_sb_cLsL::synapse0x29e9470() {
   return (neuron0x29de650()*0.0602302);
}

double NNfunction_sb_cLsL::synapse0x29ba590() {
   return (neuron0x29e5850()*-9.01257);
}

double NNfunction_sb_cLsL::synapse0x29e96d0() {
   return (neuron0x29e5bf0()*6.1724);
}

double NNfunction_sb_cLsL::synapse0x29e9710() {
   return (neuron0x29e6090()*-10.5519);
}

double NNfunction_sb_cLsL::synapse0x29e9750() {
   return (neuron0x29e71f0()*-4.83564);
}

double NNfunction_sb_cLsL::synapse0x29e9790() {
   return (neuron0x29e8350()*-6.89794);
}

