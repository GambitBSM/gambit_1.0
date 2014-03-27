#include "NNfunction_NN_2_3.h"
#include <cmath>

double NNfunction_NN_2_3::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.7625)/15.2788;
   input1 = (in1 - -6.5135)/1060.81;
   input2 = (in2 - 515.596)/562.077;
   input3 = (in3 - -27.9013)/842.731;
   input4 = (in4 - 1058.4)/944.258;
   input5 = (in5 - 914.816)/958.683;
   input6 = (in6 - 918.9)/956.891;
   input7 = (in7 - 931.402)/939.707;
   input8 = (in8 - 929.322)/973.092;
   input9 = (in9 - 913.239)/959.025;
   input10 = (in10 - 969.667)/947.366;
   input11 = (in11 - 708.15)/860.807;
   input12 = (in12 - 729.981)/870.465;
   input13 = (in13 - 492.97)/514.837;
   input14 = (in14 - 725.24)/821.795;
   input15 = (in15 - 732.907)/826.623;
   input16 = (in16 - 540.178)/573.643;
   input17 = (in17 - 757.785)/898.593;
   input18 = (in18 - 754.205)/898.559;
   input19 = (in19 - 769.876)/859.151;
   input20 = (in20 - -3.51425)/495.16;
   input21 = (in21 - -9.2498)/1144.1;
   input22 = (in22 - 0.569329)/1194.33;
   input23 = (in23 - -68.9981)/237.665;
   switch(index) {
     case 0:
         return neuron0x29e5b40();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_3::Value(int index, double* input) {
   input0 = (input[0] - 23.7625)/15.2788;
   input1 = (input[1] - -6.5135)/1060.81;
   input2 = (input[2] - 515.596)/562.077;
   input3 = (input[3] - -27.9013)/842.731;
   input4 = (input[4] - 1058.4)/944.258;
   input5 = (input[5] - 914.816)/958.683;
   input6 = (input[6] - 918.9)/956.891;
   input7 = (input[7] - 931.402)/939.707;
   input8 = (input[8] - 929.322)/973.092;
   input9 = (input[9] - 913.239)/959.025;
   input10 = (input[10] - 969.667)/947.366;
   input11 = (input[11] - 708.15)/860.807;
   input12 = (input[12] - 729.981)/870.465;
   input13 = (input[13] - 492.97)/514.837;
   input14 = (input[14] - 725.24)/821.795;
   input15 = (input[15] - 732.907)/826.623;
   input16 = (input[16] - 540.178)/573.643;
   input17 = (input[17] - 757.785)/898.593;
   input18 = (input[18] - 754.205)/898.559;
   input19 = (input[19] - 769.876)/859.151;
   input20 = (input[20] - -3.51425)/495.16;
   input21 = (input[21] - -9.2498)/1144.1;
   input22 = (input[22] - 0.569329)/1194.33;
   input23 = (input[23] - -68.9981)/237.665;
   switch(index) {
     case 0:
         return neuron0x29e5b40();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_3::neuron0x29b1c00() {
   return input0;
}

double NNfunction_NN_2_3::neuron0x29b1f40() {
   return input1;
}

double NNfunction_NN_2_3::neuron0x29b2280() {
   return input2;
}

double NNfunction_NN_2_3::neuron0x29b25c0() {
   return input3;
}

double NNfunction_NN_2_3::neuron0x29b2900() {
   return input4;
}

double NNfunction_NN_2_3::neuron0x29b2c40() {
   return input5;
}

double NNfunction_NN_2_3::neuron0x29b2f80() {
   return input6;
}

double NNfunction_NN_2_3::neuron0x29b32c0() {
   return input7;
}

double NNfunction_NN_2_3::neuron0x29b3600() {
   return input8;
}

double NNfunction_NN_2_3::neuron0x29b3940() {
   return input9;
}

double NNfunction_NN_2_3::neuron0x29b3c80() {
   return input10;
}

double NNfunction_NN_2_3::neuron0x29b3fc0() {
   return input11;
}

double NNfunction_NN_2_3::neuron0x29b4300() {
   return input12;
}

double NNfunction_NN_2_3::neuron0x29b4640() {
   return input13;
}

double NNfunction_NN_2_3::neuron0x29b4980() {
   return input14;
}

double NNfunction_NN_2_3::neuron0x29b4cc0() {
   return input15;
}

double NNfunction_NN_2_3::neuron0x29b5000() {
   return input16;
}

double NNfunction_NN_2_3::neuron0x29b5560() {
   return input17;
}

double NNfunction_NN_2_3::neuron0x29b5780() {
   return input18;
}

double NNfunction_NN_2_3::neuron0x29b5ac0() {
   return input19;
}

double NNfunction_NN_2_3::neuron0x29b5e00() {
   return input20;
}

double NNfunction_NN_2_3::neuron0x29b6140() {
   return input21;
}

double NNfunction_NN_2_3::neuron0x29b6480() {
   return input22;
}

double NNfunction_NN_2_3::neuron0x29b67c0() {
   return input23;
}

double NNfunction_NN_2_3::input0x29b6c60() {
   double input = 0.0372089;
   input += synapse0x2771a70();
   input += synapse0x29b1ac0();
   input += synapse0x29b1b00();
   input += synapse0x29b6f10();
   input += synapse0x29b6f50();
   input += synapse0x29b6f90();
   input += synapse0x29b6fd0();
   input += synapse0x29b7010();
   input += synapse0x29b7050();
   input += synapse0x29b7090();
   input += synapse0x29b70d0();
   input += synapse0x29b7110();
   input += synapse0x29b7150();
   input += synapse0x29b7190();
   input += synapse0x29b71d0();
   input += synapse0x29b7210();
   input += synapse0x29b1a30();
   input += synapse0x29b1a70();
   input += synapse0x27632d0();
   input += synapse0x2763310();
   input += synapse0x29b7470();
   input += synapse0x29b74b0();
   input += synapse0x29b74f0();
   input += synapse0x29b7530();
   return input;
}

double NNfunction_NN_2_3::neuron0x29b6c60() {
   double input = input0x29b6c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29b7570() {
   double input = 1.33325;
   input += synapse0x29b78b0();
   input += synapse0x29b78f0();
   input += synapse0x29b7930();
   input += synapse0x29b7970();
   input += synapse0x29b79b0();
   input += synapse0x29b79f0();
   input += synapse0x29b7a30();
   input += synapse0x29b7a70();
   input += synapse0x29b7ab0();
   input += synapse0x29b7360();
   input += synapse0x29b73a0();
   input += synapse0x29b73e0();
   input += synapse0x29b7420();
   input += synapse0x29b7d00();
   input += synapse0x29b7d40();
   input += synapse0x29b7d80();
   input += synapse0x29b7700();
   input += synapse0x29b7740();
   input += synapse0x29b7ed0();
   input += synapse0x29b7f10();
   input += synapse0x29b7f50();
   input += synapse0x29b7f90();
   input += synapse0x29b7fd0();
   input += synapse0x29b8010();
   return input;
}

double NNfunction_NN_2_3::neuron0x29b7570() {
   double input = input0x29b7570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29b8050() {
   double input = -0.11025;
   input += synapse0x29b8390();
   input += synapse0x29b83d0();
   input += synapse0x29b8410();
   input += synapse0x29b8450();
   input += synapse0x29b8490();
   input += synapse0x29b84d0();
   input += synapse0x29b8510();
   input += synapse0x29b8550();
   input += synapse0x29b8590();
   input += synapse0x29b85d0();
   input += synapse0x29b8610();
   input += synapse0x29b8650();
   input += synapse0x29b8690();
   input += synapse0x29b86d0();
   input += synapse0x29b8710();
   input += synapse0x29b8750();
   input += synapse0x29b81e0();
   input += synapse0x29b8220();
   input += synapse0x2771140();
   input += synapse0x2771180();
   input += synapse0x29a0c90();
   input += synapse0x29a0cd0();
   input += synapse0x29a0d10();
   input += synapse0x29b1b40();
   return input;
}

double NNfunction_NN_2_3::neuron0x29b8050() {
   double input = input0x29b8050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x27718e0() {
   double input = 1.47118;
   input += synapse0x29b7ca0();
   input += synapse0x29b1b80();
   input += synapse0x29b1bc0();
   input += synapse0x29b88a0();
   input += synapse0x29b88e0();
   input += synapse0x29b8920();
   input += synapse0x29b8960();
   input += synapse0x29b89a0();
   input += synapse0x29b89e0();
   input += synapse0x29b8a20();
   input += synapse0x29b8a60();
   input += synapse0x29b8aa0();
   input += synapse0x29b8ae0();
   input += synapse0x29b8b20();
   input += synapse0x29b8b60();
   input += synapse0x29b8ba0();
   input += synapse0x29b7af0();
   input += synapse0x29b7b30();
   input += synapse0x29b8cf0();
   input += synapse0x29b8d30();
   input += synapse0x29b8d70();
   input += synapse0x29b8db0();
   input += synapse0x29b8df0();
   input += synapse0x29b8e30();
   return input;
}

double NNfunction_NN_2_3::neuron0x27718e0() {
   double input = input0x27718e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29b8e70() {
   double input = -1.22107;
   input += synapse0x29b91b0();
   input += synapse0x29b91f0();
   input += synapse0x29b9230();
   input += synapse0x29b9270();
   input += synapse0x29b92b0();
   input += synapse0x29b92f0();
   input += synapse0x29b9330();
   input += synapse0x29b9370();
   input += synapse0x29b93b0();
   input += synapse0x29b93f0();
   input += synapse0x29b9430();
   input += synapse0x29b9470();
   input += synapse0x29b94b0();
   input += synapse0x29b94f0();
   input += synapse0x29b9530();
   input += synapse0x29b9570();
   input += synapse0x29b9000();
   input += synapse0x29b9040();
   input += synapse0x29b96c0();
   input += synapse0x29b9700();
   input += synapse0x29b9740();
   input += synapse0x29b9780();
   input += synapse0x29b97c0();
   input += synapse0x29b9800();
   return input;
}

double NNfunction_NN_2_3::neuron0x29b8e70() {
   double input = input0x29b8e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29b9840() {
   double input = 0.233535;
   input += synapse0x29b9b80();
   input += synapse0x29b9bc0();
   input += synapse0x29b9c00();
   input += synapse0x29b9c40();
   input += synapse0x29b9c80();
   input += synapse0x29b9cc0();
   input += synapse0x29b9d00();
   input += synapse0x29b9d40();
   input += synapse0x29b9d80();
   input += synapse0x27714d0();
   input += synapse0x2771510();
   input += synapse0x2771550();
   input += synapse0x2771590();
   input += synapse0x27715d0();
   input += synapse0x2771610();
   input += synapse0x2771650();
   input += synapse0x29b99d0();
   input += synapse0x29b9a10();
   input += synapse0x27717a0();
   input += synapse0x27717e0();
   input += synapse0x2771820();
   input += synapse0x2771860();
   input += synapse0x27718a0();
   input += synapse0x29ba5d0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29b9840() {
   double input = input0x29b9840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29ba610() {
   double input = -0.285706;
   input += synapse0x29ba950();
   input += synapse0x29ba990();
   input += synapse0x29ba9d0();
   input += synapse0x29baa10();
   input += synapse0x29baa50();
   input += synapse0x29baa90();
   input += synapse0x29baad0();
   input += synapse0x29bab10();
   input += synapse0x29bab50();
   input += synapse0x29bab90();
   input += synapse0x29babd0();
   input += synapse0x29bac10();
   input += synapse0x29bac50();
   input += synapse0x29bac90();
   input += synapse0x29bacd0();
   input += synapse0x29bad10();
   input += synapse0x29ba7a0();
   input += synapse0x29ba7e0();
   input += synapse0x29bae60();
   input += synapse0x29baea0();
   input += synapse0x29baee0();
   input += synapse0x29baf20();
   input += synapse0x29baf60();
   input += synapse0x29bafa0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29ba610() {
   double input = input0x29ba610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29bafe0() {
   double input = 2.65477;
   input += synapse0x29bb320();
   input += synapse0x29bb360();
   input += synapse0x29bb3a0();
   input += synapse0x29bb3e0();
   input += synapse0x29bb420();
   input += synapse0x29bb460();
   input += synapse0x29bb4a0();
   input += synapse0x29bb4e0();
   input += synapse0x29bb520();
   input += synapse0x29bb560();
   input += synapse0x29bb5a0();
   input += synapse0x29bb5e0();
   input += synapse0x29bb620();
   input += synapse0x29bb660();
   input += synapse0x29bb6a0();
   input += synapse0x29bb6e0();
   input += synapse0x29bb170();
   input += synapse0x29bb1b0();
   input += synapse0x29bb830();
   input += synapse0x29bb870();
   input += synapse0x29bb8b0();
   input += synapse0x29bb8f0();
   input += synapse0x29bb930();
   input += synapse0x29bb970();
   return input;
}

double NNfunction_NN_2_3::neuron0x29bafe0() {
   double input = input0x29bafe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29bb9b0() {
   double input = -6.59341;
   input += synapse0x29b5450();
   input += synapse0x29b5490();
   input += synapse0x29b54d0();
   input += synapse0x29b5510();
   input += synapse0x29bbf00();
   input += synapse0x29bbf40();
   input += synapse0x29bbf80();
   input += synapse0x29bbfc0();
   input += synapse0x29bc000();
   input += synapse0x29bc040();
   input += synapse0x29bc080();
   input += synapse0x29bc0c0();
   input += synapse0x29bc100();
   input += synapse0x29bc140();
   input += synapse0x29bc180();
   input += synapse0x29bc1c0();
   input += synapse0x29bbb40();
   input += synapse0x29bbb80();
   input += synapse0x29bc310();
   input += synapse0x29bc350();
   input += synapse0x29bc390();
   input += synapse0x29bc3d0();
   input += synapse0x29bc410();
   input += synapse0x29bc450();
   return input;
}

double NNfunction_NN_2_3::neuron0x29bb9b0() {
   double input = input0x29bb9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29bc490() {
   double input = 0.422345;
   input += synapse0x29bc7d0();
   input += synapse0x29bc810();
   input += synapse0x29bc850();
   input += synapse0x29bc890();
   input += synapse0x29bc8d0();
   input += synapse0x29bc910();
   input += synapse0x29bc950();
   input += synapse0x29bc990();
   input += synapse0x29bc9d0();
   input += synapse0x29bca10();
   input += synapse0x29bca50();
   input += synapse0x29bca90();
   input += synapse0x29bcad0();
   input += synapse0x29bcb10();
   input += synapse0x29bcb50();
   input += synapse0x29bcb90();
   input += synapse0x29bc620();
   input += synapse0x29bc660();
   input += synapse0x29bcce0();
   input += synapse0x29bcd20();
   input += synapse0x29bcd60();
   input += synapse0x29bcda0();
   input += synapse0x29bcde0();
   input += synapse0x29bce20();
   return input;
}

double NNfunction_NN_2_3::neuron0x29bc490() {
   double input = input0x29bc490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29bce60() {
   double input = 0.383691;
   input += synapse0x29bd1a0();
   input += synapse0x29bd1e0();
   input += synapse0x29bd220();
   input += synapse0x29bd260();
   input += synapse0x29bd2a0();
   input += synapse0x29bd2e0();
   input += synapse0x29bd320();
   input += synapse0x29bd360();
   input += synapse0x29bd3a0();
   input += synapse0x29bd3e0();
   input += synapse0x29bd420();
   input += synapse0x29bd460();
   input += synapse0x29bd4a0();
   input += synapse0x29bd4e0();
   input += synapse0x29bd520();
   input += synapse0x29bd560();
   input += synapse0x29bcff0();
   input += synapse0x29bd030();
   input += synapse0x29b9dc0();
   input += synapse0x29b9e00();
   input += synapse0x29b9e40();
   input += synapse0x29b9e80();
   input += synapse0x29b9ec0();
   input += synapse0x29b9f00();
   return input;
}

double NNfunction_NN_2_3::neuron0x29bce60() {
   double input = input0x29bce60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29b9f40() {
   double input = 0.271563;
   input += synapse0x29ba280();
   input += synapse0x29ba2c0();
   input += synapse0x29ba300();
   input += synapse0x29ba340();
   input += synapse0x29ba380();
   input += synapse0x29ba3c0();
   input += synapse0x29ba400();
   input += synapse0x29ba440();
   input += synapse0x29ba480();
   input += synapse0x29ba4c0();
   input += synapse0x29ba500();
   input += synapse0x29ba540();
   input += synapse0x29ba580();
   input += synapse0x29be6c0();
   input += synapse0x29be700();
   input += synapse0x29be740();
   input += synapse0x29ba0d0();
   input += synapse0x29ba110();
   input += synapse0x29be890();
   input += synapse0x29be8d0();
   input += synapse0x29be910();
   input += synapse0x29be950();
   input += synapse0x29be990();
   input += synapse0x29be9d0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29b9f40() {
   double input = input0x29b9f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29bea10() {
   double input = 0.104831;
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
   input += synapse0x29bf090();
   input += synapse0x29bf0d0();
   input += synapse0x29bf110();
   input += synapse0x29beba0();
   input += synapse0x29bebe0();
   input += synapse0x29bf260();
   input += synapse0x29bf2a0();
   input += synapse0x29bf2e0();
   input += synapse0x29bf320();
   input += synapse0x29bf360();
   input += synapse0x29bf3a0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29bea10() {
   double input = input0x29bea10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29bf3e0() {
   double input = -1.88471;
   input += synapse0x29bf720();
   input += synapse0x29bf760();
   input += synapse0x29bf7a0();
   input += synapse0x29bf7e0();
   input += synapse0x29bf820();
   input += synapse0x29bf860();
   input += synapse0x29bf8a0();
   input += synapse0x29bf8e0();
   input += synapse0x29bf920();
   input += synapse0x29bf960();
   input += synapse0x29bf9a0();
   input += synapse0x29bf9e0();
   input += synapse0x29bfa20();
   input += synapse0x29bfa60();
   input += synapse0x29bfaa0();
   input += synapse0x29bfae0();
   input += synapse0x29bf570();
   input += synapse0x29bf5b0();
   input += synapse0x29bfc30();
   input += synapse0x29bfc70();
   input += synapse0x29bfcb0();
   input += synapse0x29bfcf0();
   input += synapse0x29bfd30();
   input += synapse0x29bfd70();
   return input;
}

double NNfunction_NN_2_3::neuron0x29bf3e0() {
   double input = input0x29bf3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29bfdb0() {
   double input = 3.09421;
   input += synapse0x29c00f0();
   input += synapse0x29c0130();
   input += synapse0x29c0170();
   input += synapse0x29c01b0();
   input += synapse0x29c01f0();
   input += synapse0x29c0230();
   input += synapse0x29c0270();
   input += synapse0x29c02b0();
   input += synapse0x29c02f0();
   input += synapse0x29c0330();
   input += synapse0x29c0370();
   input += synapse0x29c03b0();
   input += synapse0x29c03f0();
   input += synapse0x29c0430();
   input += synapse0x29c0470();
   input += synapse0x29c04b0();
   input += synapse0x29bff40();
   input += synapse0x29bff80();
   input += synapse0x29c0600();
   input += synapse0x29c0640();
   input += synapse0x29c0680();
   input += synapse0x29c06c0();
   input += synapse0x29c0700();
   input += synapse0x29c0740();
   return input;
}

double NNfunction_NN_2_3::neuron0x29bfdb0() {
   double input = input0x29bfdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c0780() {
   double input = 1.49396;
   input += synapse0x29c0ac0();
   input += synapse0x29b1e20();
   input += synapse0x29b1e60();
   input += synapse0x29b2160();
   input += synapse0x29b21a0();
   input += synapse0x29b24a0();
   input += synapse0x29b24e0();
   input += synapse0x29b27e0();
   input += synapse0x29b2820();
   input += synapse0x29b2b20();
   input += synapse0x29b2b60();
   input += synapse0x29b2e60();
   input += synapse0x29b2ea0();
   input += synapse0x29b31a0();
   input += synapse0x29b31e0();
   input += synapse0x29b34e0();
   input += synapse0x29b3520();
   input += synapse0x29b3820();
   input += synapse0x29b3860();
   input += synapse0x29b3b60();
   input += synapse0x29b3ba0();
   input += synapse0x29b3ea0();
   input += synapse0x29b3ee0();
   input += synapse0x29b41e0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c0780() {
   double input = input0x29c0780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c2590() {
   double input = -0.747568;
   input += synapse0x29b4220();
   input += synapse0x29b4ee0();
   input += synapse0x29b4f20();
   input += synapse0x29c0910();
   input += synapse0x29c0950();
   input += synapse0x29b5220();
   input += synapse0x29b5260();
   input += synapse0x27631b0();
   input += synapse0x27631f0();
   input += synapse0x29b59a0();
   input += synapse0x29b59e0();
   input += synapse0x29b5ce0();
   input += synapse0x29b5d20();
   input += synapse0x29b6020();
   input += synapse0x29b6060();
   input += synapse0x29b6360();
   input += synapse0x29b63a0();
   input += synapse0x29b66a0();
   input += synapse0x29b66e0();
   input += synapse0x29b69e0();
   input += synapse0x29b6a20();
   input += synapse0x29b4520();
   input += synapse0x29b4560();
   input += synapse0x29c2830();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c2590() {
   double input = input0x29c2590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c2870() {
   double input = 2.40237;
   input += synapse0x29c2bb0();
   input += synapse0x29c2bf0();
   input += synapse0x29c2c30();
   input += synapse0x29c2c70();
   input += synapse0x29c2cb0();
   input += synapse0x29c2cf0();
   input += synapse0x29c2d30();
   input += synapse0x29c2d70();
   input += synapse0x29c2db0();
   input += synapse0x29c2df0();
   input += synapse0x29c2e30();
   input += synapse0x29c2e70();
   input += synapse0x29c2eb0();
   input += synapse0x29c2ef0();
   input += synapse0x29c2f30();
   input += synapse0x29c2f70();
   input += synapse0x29c2a00();
   input += synapse0x29c2a40();
   input += synapse0x29c30c0();
   input += synapse0x29c3100();
   input += synapse0x29c3140();
   input += synapse0x29c3180();
   input += synapse0x29c31c0();
   input += synapse0x29c3200();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c2870() {
   double input = input0x29c2870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c3240() {
   double input = -2.21831;
   input += synapse0x29c3580();
   input += synapse0x29c35c0();
   input += synapse0x29c3600();
   input += synapse0x29c3640();
   input += synapse0x29c3680();
   input += synapse0x29c36c0();
   input += synapse0x29c3700();
   input += synapse0x29c3740();
   input += synapse0x29c3780();
   input += synapse0x29c37c0();
   input += synapse0x29c3800();
   input += synapse0x29c3840();
   input += synapse0x29c3880();
   input += synapse0x29c38c0();
   input += synapse0x29c3900();
   input += synapse0x29c3940();
   input += synapse0x29c33d0();
   input += synapse0x29c3410();
   input += synapse0x29c3a90();
   input += synapse0x29c3ad0();
   input += synapse0x29c3b10();
   input += synapse0x29c3b50();
   input += synapse0x29c3b90();
   input += synapse0x29c3bd0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c3240() {
   double input = input0x29c3240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c3c10() {
   double input = 0.0820726;
   input += synapse0x29c3f50();
   input += synapse0x29c3f90();
   input += synapse0x29c3fd0();
   input += synapse0x29c4010();
   input += synapse0x29c4050();
   input += synapse0x29c4090();
   input += synapse0x29c40d0();
   input += synapse0x29c4110();
   input += synapse0x29c4150();
   input += synapse0x29c4190();
   input += synapse0x29c41d0();
   input += synapse0x29c4210();
   input += synapse0x29c4250();
   input += synapse0x29c4290();
   input += synapse0x29c42d0();
   input += synapse0x29c4310();
   input += synapse0x29c3da0();
   input += synapse0x29c3de0();
   input += synapse0x29c4460();
   input += synapse0x29c44a0();
   input += synapse0x29c44e0();
   input += synapse0x29c4520();
   input += synapse0x29c4560();
   input += synapse0x29c45a0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c3c10() {
   double input = input0x29c3c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c45e0() {
   double input = 5.20866;
   input += synapse0x29c4920();
   input += synapse0x29c4960();
   input += synapse0x29c49a0();
   input += synapse0x29c49e0();
   input += synapse0x29c4a20();
   input += synapse0x29c4a60();
   input += synapse0x29c4aa0();
   input += synapse0x29c4ae0();
   input += synapse0x29c4b20();
   input += synapse0x29c4b60();
   input += synapse0x29c4ba0();
   input += synapse0x29c4be0();
   input += synapse0x29c4c20();
   input += synapse0x29c4c60();
   input += synapse0x29c4ca0();
   input += synapse0x29c4ce0();
   input += synapse0x29c4770();
   input += synapse0x29c47b0();
   input += synapse0x29c4e30();
   input += synapse0x29c4e70();
   input += synapse0x29c4eb0();
   input += synapse0x29c4ef0();
   input += synapse0x29c4f30();
   input += synapse0x29c4f70();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c45e0() {
   double input = input0x29c45e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c4fb0() {
   double input = -0.232133;
   input += synapse0x29c52f0();
   input += synapse0x29c5330();
   input += synapse0x29c5370();
   input += synapse0x29c53b0();
   input += synapse0x29c53f0();
   input += synapse0x29c5430();
   input += synapse0x29c5470();
   input += synapse0x29c54b0();
   input += synapse0x29c54f0();
   input += synapse0x29bd6b0();
   input += synapse0x29bd6f0();
   input += synapse0x29bd730();
   input += synapse0x29bd770();
   input += synapse0x29bd7b0();
   input += synapse0x29bd7f0();
   input += synapse0x29bd830();
   input += synapse0x29c5140();
   input += synapse0x29c5180();
   input += synapse0x29bd980();
   input += synapse0x29bd9c0();
   input += synapse0x29bda00();
   input += synapse0x29bda40();
   input += synapse0x29bda80();
   input += synapse0x29bdac0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c4fb0() {
   double input = input0x29c4fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29bdb00() {
   double input = -1.68332;
   input += synapse0x29bde40();
   input += synapse0x29bde80();
   input += synapse0x29bdec0();
   input += synapse0x29bdf00();
   input += synapse0x29bdf40();
   input += synapse0x29bdf80();
   input += synapse0x29bdfc0();
   input += synapse0x29be000();
   input += synapse0x29be040();
   input += synapse0x29be080();
   input += synapse0x29be0c0();
   input += synapse0x29be100();
   input += synapse0x29be140();
   input += synapse0x29be180();
   input += synapse0x29be1c0();
   input += synapse0x29be200();
   input += synapse0x29bdc90();
   input += synapse0x29bdcd0();
   input += synapse0x29be350();
   input += synapse0x29be390();
   input += synapse0x29be3d0();
   input += synapse0x29be410();
   input += synapse0x29be450();
   input += synapse0x29be490();
   return input;
}

double NNfunction_NN_2_3::neuron0x29bdb00() {
   double input = input0x29bdb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29be4d0() {
   double input = 0.226655;
   input += synapse0x29be660();
   input += synapse0x29c76f0();
   input += synapse0x29c7730();
   input += synapse0x29c7770();
   input += synapse0x29c77b0();
   input += synapse0x29c77f0();
   input += synapse0x29c7830();
   input += synapse0x29c7870();
   input += synapse0x29c78b0();
   input += synapse0x29c78f0();
   input += synapse0x29c7930();
   input += synapse0x29c7970();
   input += synapse0x29c79b0();
   input += synapse0x29c79f0();
   input += synapse0x29c7a30();
   input += synapse0x29c7a70();
   input += synapse0x29c7540();
   input += synapse0x29c7580();
   input += synapse0x29c7bc0();
   input += synapse0x29c7c00();
   input += synapse0x29c7c40();
   input += synapse0x29c7c80();
   input += synapse0x29c7cc0();
   input += synapse0x29c7d00();
   return input;
}

double NNfunction_NN_2_3::neuron0x29be4d0() {
   double input = input0x29be4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c7d40() {
   double input = -1.17262;
   input += synapse0x29c8080();
   input += synapse0x29c80c0();
   input += synapse0x29c8100();
   input += synapse0x29c8140();
   input += synapse0x29c8180();
   input += synapse0x29c81c0();
   input += synapse0x29c8200();
   input += synapse0x29c8240();
   input += synapse0x29c8280();
   input += synapse0x29c82c0();
   input += synapse0x29c8300();
   input += synapse0x29c8340();
   input += synapse0x29c8380();
   input += synapse0x29c83c0();
   input += synapse0x29c8400();
   input += synapse0x29c8440();
   input += synapse0x29c7ed0();
   input += synapse0x29c7f10();
   input += synapse0x29c8590();
   input += synapse0x29c85d0();
   input += synapse0x29c8610();
   input += synapse0x29c8650();
   input += synapse0x29c8690();
   input += synapse0x29c86d0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c7d40() {
   double input = input0x29c7d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c8710() {
   double input = 1.07103;
   input += synapse0x29c8a50();
   input += synapse0x29c8a90();
   input += synapse0x29c8ad0();
   input += synapse0x29c8b10();
   input += synapse0x29c8b50();
   input += synapse0x29c8b90();
   input += synapse0x29c8bd0();
   input += synapse0x29c8c10();
   input += synapse0x29c8c50();
   input += synapse0x29c8c90();
   input += synapse0x29c8cd0();
   input += synapse0x29c8d10();
   input += synapse0x29c8d50();
   input += synapse0x29c8d90();
   input += synapse0x29c8dd0();
   input += synapse0x29c8e10();
   input += synapse0x29c88a0();
   input += synapse0x29c88e0();
   input += synapse0x29c8f60();
   input += synapse0x29c8fa0();
   input += synapse0x29c8fe0();
   input += synapse0x29c9020();
   input += synapse0x29c9060();
   input += synapse0x29c90a0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c8710() {
   double input = input0x29c8710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c90e0() {
   double input = -0.238518;
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
   input += synapse0x29c9760();
   input += synapse0x29c97a0();
   input += synapse0x29c97e0();
   input += synapse0x29c9270();
   input += synapse0x29c92b0();
   input += synapse0x29c9930();
   input += synapse0x29c9970();
   input += synapse0x29c99b0();
   input += synapse0x29c99f0();
   input += synapse0x29c9a30();
   input += synapse0x29c9a70();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c90e0() {
   double input = input0x29c90e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c9ab0() {
   double input = -0.0449191;
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
   input += synapse0x29ca130();
   input += synapse0x29ca170();
   input += synapse0x29ca1b0();
   input += synapse0x29c9c40();
   input += synapse0x29c9c80();
   input += synapse0x29ca300();
   input += synapse0x29ca340();
   input += synapse0x29ca380();
   input += synapse0x29ca3c0();
   input += synapse0x29ca400();
   input += synapse0x29ca440();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c9ab0() {
   double input = input0x29c9ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29ca480() {
   double input = -0.875337;
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
   input += synapse0x29cab00();
   input += synapse0x29cab40();
   input += synapse0x29cab80();
   input += synapse0x29ca610();
   input += synapse0x29ca650();
   input += synapse0x29cacd0();
   input += synapse0x29cad10();
   input += synapse0x29cad50();
   input += synapse0x29cad90();
   input += synapse0x29cadd0();
   input += synapse0x29cae10();
   return input;
}

double NNfunction_NN_2_3::neuron0x29ca480() {
   double input = input0x29ca480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29cae50() {
   double input = 5.83976;
   input += synapse0x29cb190();
   input += synapse0x29cb1d0();
   input += synapse0x29cb210();
   input += synapse0x29cb250();
   input += synapse0x29cb290();
   input += synapse0x29cb2d0();
   input += synapse0x29cb310();
   input += synapse0x29cb350();
   input += synapse0x29cb390();
   input += synapse0x29cb3d0();
   input += synapse0x29cb410();
   input += synapse0x29cb450();
   input += synapse0x29cb490();
   input += synapse0x29cb4d0();
   input += synapse0x29cb510();
   input += synapse0x29cb550();
   input += synapse0x29cafe0();
   input += synapse0x29cb020();
   input += synapse0x29cb6a0();
   input += synapse0x29cb6e0();
   input += synapse0x29cb720();
   input += synapse0x29cb760();
   input += synapse0x29cb7a0();
   input += synapse0x29cb7e0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29cae50() {
   double input = input0x29cae50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29cb820() {
   double input = 0.395956;
   input += synapse0x29cbb60();
   input += synapse0x29cbba0();
   input += synapse0x29cbbe0();
   input += synapse0x29cbc20();
   input += synapse0x29cbc60();
   input += synapse0x29cbca0();
   input += synapse0x29cbce0();
   input += synapse0x29cbd20();
   input += synapse0x29cbd60();
   input += synapse0x29cbda0();
   input += synapse0x29cbde0();
   input += synapse0x29cbe20();
   input += synapse0x29cbe60();
   input += synapse0x29cbea0();
   input += synapse0x29cbee0();
   input += synapse0x29cbf20();
   input += synapse0x29cb9b0();
   input += synapse0x29cb9f0();
   input += synapse0x29cc070();
   input += synapse0x29cc0b0();
   input += synapse0x29cc0f0();
   input += synapse0x29cc130();
   input += synapse0x29cc170();
   input += synapse0x29cc1b0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29cb820() {
   double input = input0x29cb820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29cc1f0() {
   double input = 0.575303;
   input += synapse0x29cc530();
   input += synapse0x29c0b00();
   input += synapse0x29c0b40();
   input += synapse0x29c0b80();
   input += synapse0x29c0dd0();
   input += synapse0x29c0e10();
   input += synapse0x29c0e50();
   input += synapse0x29c10a0();
   input += synapse0x29c10e0();
   input += synapse0x29c1330();
   input += synapse0x29c1370();
   input += synapse0x29c13b0();
   input += synapse0x29c1600();
   input += synapse0x29c1640();
   input += synapse0x29c1890();
   input += synapse0x29c18d0();
   input += synapse0x29cc380();
   input += synapse0x29cc3c0();
   input += synapse0x29c1a20();
   input += synapse0x29c1f30();
   input += synapse0x29c1f70();
   input += synapse0x29c1fb0();
   input += synapse0x29c2200();
   input += synapse0x29c2240();
   return input;
}

double NNfunction_NN_2_3::neuron0x29cc1f0() {
   double input = input0x29cc1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c2280() {
   double input = 1.92561;
   input += synapse0x29c1af0();
   input += synapse0x29c1b30();
   input += synapse0x29c1b70();
   input += synapse0x29c1bb0();
   input += synapse0x29c2530();
   input += synapse0x29ce880();
   input += synapse0x29ce8c0();
   input += synapse0x29ce900();
   input += synapse0x29ce940();
   input += synapse0x29ce980();
   input += synapse0x29ce9c0();
   input += synapse0x29cea00();
   input += synapse0x29cea40();
   input += synapse0x29cea80();
   input += synapse0x29ceac0();
   input += synapse0x29ceb00();
   input += synapse0x29c2410();
   input += synapse0x29c2450();
   input += synapse0x29cec50();
   input += synapse0x29cec90();
   input += synapse0x29cecd0();
   input += synapse0x29ced10();
   input += synapse0x29ced50();
   input += synapse0x29ced90();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c2280() {
   double input = input0x29c2280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29cedd0() {
   double input = -1.54705;
   input += synapse0x29cf110();
   input += synapse0x29cf150();
   input += synapse0x29cf190();
   input += synapse0x29cf1d0();
   input += synapse0x29cf210();
   input += synapse0x29cf250();
   input += synapse0x29cf290();
   input += synapse0x29cf2d0();
   input += synapse0x29cf310();
   input += synapse0x29cf350();
   input += synapse0x29cf390();
   input += synapse0x29cf3d0();
   input += synapse0x29cf410();
   input += synapse0x29cf450();
   input += synapse0x29cf490();
   input += synapse0x29cf4d0();
   input += synapse0x29cef60();
   input += synapse0x29cefa0();
   input += synapse0x29cf620();
   input += synapse0x29cf660();
   input += synapse0x29cf6a0();
   input += synapse0x29cf6e0();
   input += synapse0x29cf720();
   input += synapse0x29cf760();
   return input;
}

double NNfunction_NN_2_3::neuron0x29cedd0() {
   double input = input0x29cedd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29cf7a0() {
   double input = -0.723421;
   input += synapse0x29cfae0();
   input += synapse0x29cfb20();
   input += synapse0x29cfb60();
   input += synapse0x29cfba0();
   input += synapse0x29cfbe0();
   input += synapse0x29cfc20();
   input += synapse0x29cfc60();
   input += synapse0x29cfca0();
   input += synapse0x29cfce0();
   input += synapse0x29cfd20();
   input += synapse0x29cfd60();
   input += synapse0x29cfda0();
   input += synapse0x29cfde0();
   input += synapse0x29cfe20();
   input += synapse0x29cfe60();
   input += synapse0x29cfea0();
   input += synapse0x29cf930();
   input += synapse0x29cf970();
   input += synapse0x29cfff0();
   input += synapse0x29d0030();
   input += synapse0x29d0070();
   input += synapse0x29d00b0();
   input += synapse0x29d00f0();
   input += synapse0x29d0130();
   return input;
}

double NNfunction_NN_2_3::neuron0x29cf7a0() {
   double input = input0x29cf7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d0170() {
   double input = 4.37502;
   input += synapse0x29d04b0();
   input += synapse0x29d04f0();
   input += synapse0x29d0530();
   input += synapse0x29d0570();
   input += synapse0x29d05b0();
   input += synapse0x29d05f0();
   input += synapse0x29d0630();
   input += synapse0x29d0670();
   input += synapse0x29d06b0();
   input += synapse0x29d06f0();
   input += synapse0x29d0730();
   input += synapse0x29d0770();
   input += synapse0x29d07b0();
   input += synapse0x29d07f0();
   input += synapse0x29d0830();
   input += synapse0x29d0870();
   input += synapse0x29d0300();
   input += synapse0x29d0340();
   input += synapse0x29d09c0();
   input += synapse0x29d0a00();
   input += synapse0x29d0a40();
   input += synapse0x29d0a80();
   input += synapse0x29d0ac0();
   input += synapse0x29d0b00();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d0170() {
   double input = input0x29d0170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d0b40() {
   double input = 3.52613;
   input += synapse0x29d0e80();
   input += synapse0x29d0ec0();
   input += synapse0x29d0f00();
   input += synapse0x29d0f40();
   input += synapse0x29d0f80();
   input += synapse0x29d0fc0();
   input += synapse0x29d1000();
   input += synapse0x29d1040();
   input += synapse0x29d1080();
   input += synapse0x29d10c0();
   input += synapse0x29d1100();
   input += synapse0x29d1140();
   input += synapse0x29d1180();
   input += synapse0x29d11c0();
   input += synapse0x29d1200();
   input += synapse0x29d1240();
   input += synapse0x29d0cd0();
   input += synapse0x29d0d10();
   input += synapse0x29d1390();
   input += synapse0x29d13d0();
   input += synapse0x29d1410();
   input += synapse0x29d1450();
   input += synapse0x29d1490();
   input += synapse0x29d14d0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d0b40() {
   double input = input0x29d0b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d1510() {
   double input = -4.26951;
   input += synapse0x29d1850();
   input += synapse0x29d1890();
   input += synapse0x29d18d0();
   input += synapse0x29d1910();
   input += synapse0x29d1950();
   input += synapse0x29d1990();
   input += synapse0x29d19d0();
   input += synapse0x29d1a10();
   input += synapse0x29d1a50();
   input += synapse0x29d1a90();
   input += synapse0x29d1ad0();
   input += synapse0x29d1b10();
   input += synapse0x29d1b50();
   input += synapse0x29d1b90();
   input += synapse0x29d1bd0();
   input += synapse0x29d1c10();
   input += synapse0x29d16a0();
   input += synapse0x29d16e0();
   input += synapse0x29d1d60();
   input += synapse0x29d1da0();
   input += synapse0x29d1de0();
   input += synapse0x29d1e20();
   input += synapse0x29d1e60();
   input += synapse0x29d1ea0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d1510() {
   double input = input0x29d1510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d1ee0() {
   double input = -1.41586;
   input += synapse0x29d2220();
   input += synapse0x29d2260();
   input += synapse0x29d22a0();
   input += synapse0x29d22e0();
   input += synapse0x29d2320();
   input += synapse0x29d2360();
   input += synapse0x29d23a0();
   input += synapse0x29d23e0();
   input += synapse0x29d2420();
   input += synapse0x29d2460();
   input += synapse0x29d24a0();
   input += synapse0x29d24e0();
   input += synapse0x29d2520();
   input += synapse0x29d2560();
   input += synapse0x29d25a0();
   input += synapse0x29d25e0();
   input += synapse0x29d2070();
   input += synapse0x29d20b0();
   input += synapse0x29d2730();
   input += synapse0x29d2770();
   input += synapse0x29d27b0();
   input += synapse0x29d27f0();
   input += synapse0x29d2830();
   input += synapse0x29d2870();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d1ee0() {
   double input = input0x29d1ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d28b0() {
   double input = 0.190526;
   input += synapse0x29d2bf0();
   input += synapse0x29d2c30();
   input += synapse0x29d2c70();
   input += synapse0x29d2cb0();
   input += synapse0x29d2cf0();
   input += synapse0x29d2d30();
   input += synapse0x29d2d70();
   input += synapse0x29d2db0();
   input += synapse0x29d2df0();
   input += synapse0x29d2e30();
   input += synapse0x29d2e70();
   input += synapse0x29d2eb0();
   input += synapse0x29d2ef0();
   input += synapse0x29d2f30();
   input += synapse0x29d2f70();
   input += synapse0x29d2fb0();
   input += synapse0x29d2a40();
   input += synapse0x29d2a80();
   input += synapse0x29d3100();
   input += synapse0x29d3140();
   input += synapse0x29d3180();
   input += synapse0x29d31c0();
   input += synapse0x29d3200();
   input += synapse0x29d3240();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d28b0() {
   double input = input0x29d28b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d3280() {
   double input = -4.38994;
   input += synapse0x29bbcf0();
   input += synapse0x29bbd30();
   input += synapse0x29bbd70();
   input += synapse0x29bbdb0();
   input += synapse0x29bbdf0();
   input += synapse0x29bbe30();
   input += synapse0x29bbe70();
   input += synapse0x29bbeb0();
   input += synapse0x29d39d0();
   input += synapse0x29d3a10();
   input += synapse0x29d3a50();
   input += synapse0x29d3a90();
   input += synapse0x29d3ad0();
   input += synapse0x29d3b10();
   input += synapse0x29d3b50();
   input += synapse0x29d3b90();
   input += synapse0x29d3410();
   input += synapse0x29d3450();
   input += synapse0x29d3ce0();
   input += synapse0x29d3d20();
   input += synapse0x29d3d60();
   input += synapse0x29d3da0();
   input += synapse0x29d3de0();
   input += synapse0x29d3e20();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d3280() {
   double input = input0x29d3280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d3e60() {
   double input = 0.16474;
   input += synapse0x29d41a0();
   input += synapse0x29d41e0();
   input += synapse0x29d4220();
   input += synapse0x29d4260();
   input += synapse0x29d42a0();
   input += synapse0x29d42e0();
   input += synapse0x29d4320();
   input += synapse0x29d4360();
   input += synapse0x29d43a0();
   input += synapse0x29d43e0();
   input += synapse0x29d4420();
   input += synapse0x29d4460();
   input += synapse0x29d44a0();
   input += synapse0x29d44e0();
   input += synapse0x29d4520();
   input += synapse0x29d4560();
   input += synapse0x29d3ff0();
   input += synapse0x29d4030();
   input += synapse0x29d46b0();
   input += synapse0x29d46f0();
   input += synapse0x29d4730();
   input += synapse0x29d4770();
   input += synapse0x29d47b0();
   input += synapse0x29d47f0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d3e60() {
   double input = input0x29d3e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d4830() {
   double input = -2.24466;
   input += synapse0x29d4b70();
   input += synapse0x29d4bb0();
   input += synapse0x29d4bf0();
   input += synapse0x29d4c30();
   input += synapse0x29d4c70();
   input += synapse0x29d4cb0();
   input += synapse0x29d4cf0();
   input += synapse0x29d4d30();
   input += synapse0x29d4d70();
   input += synapse0x29d4db0();
   input += synapse0x29d4df0();
   input += synapse0x29d4e30();
   input += synapse0x29d4e70();
   input += synapse0x29d4eb0();
   input += synapse0x29d4ef0();
   input += synapse0x29d4f30();
   input += synapse0x29d49c0();
   input += synapse0x29d4a00();
   input += synapse0x29c5530();
   input += synapse0x29c5570();
   input += synapse0x29c55b0();
   input += synapse0x29c55f0();
   input += synapse0x29c5630();
   input += synapse0x29c5670();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d4830() {
   double input = input0x29d4830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c56b0() {
   double input = -2.91212;
   input += synapse0x29c59f0();
   input += synapse0x29c5a30();
   input += synapse0x29c5a70();
   input += synapse0x29c5ab0();
   input += synapse0x29c5af0();
   input += synapse0x29c5b30();
   input += synapse0x29c5b70();
   input += synapse0x29c5bb0();
   input += synapse0x29c5bf0();
   input += synapse0x29c5c30();
   input += synapse0x29c5c70();
   input += synapse0x29c5cb0();
   input += synapse0x29c5cf0();
   input += synapse0x29c5d30();
   input += synapse0x29c5d70();
   input += synapse0x29c5db0();
   input += synapse0x29c5840();
   input += synapse0x29c5880();
   input += synapse0x29c5f00();
   input += synapse0x29c5f40();
   input += synapse0x29c5f80();
   input += synapse0x29c5fc0();
   input += synapse0x29c6000();
   input += synapse0x29c6040();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c56b0() {
   double input = input0x29c56b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c6080() {
   double input = 2.39623;
   input += synapse0x29c63c0();
   input += synapse0x29c6400();
   input += synapse0x29c6440();
   input += synapse0x29c6480();
   input += synapse0x29c64c0();
   input += synapse0x29c6500();
   input += synapse0x29c6540();
   input += synapse0x29c6580();
   input += synapse0x29c65c0();
   input += synapse0x29c6600();
   input += synapse0x29c6640();
   input += synapse0x29c6680();
   input += synapse0x29c66c0();
   input += synapse0x29c6700();
   input += synapse0x29c6740();
   input += synapse0x29c6780();
   input += synapse0x29c6210();
   input += synapse0x29c6250();
   input += synapse0x29c68d0();
   input += synapse0x29c6910();
   input += synapse0x29c6950();
   input += synapse0x29c6990();
   input += synapse0x29c69d0();
   input += synapse0x29c6a10();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c6080() {
   double input = input0x29c6080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29c6a50() {
   double input = 1.94191;
   input += synapse0x29c6d90();
   input += synapse0x29c6dd0();
   input += synapse0x29c6e10();
   input += synapse0x29c6e50();
   input += synapse0x29c6e90();
   input += synapse0x29c6ed0();
   input += synapse0x29c6f10();
   input += synapse0x29c6f50();
   input += synapse0x29c6f90();
   input += synapse0x29c6fd0();
   input += synapse0x29c7010();
   input += synapse0x29c7050();
   input += synapse0x29c7090();
   input += synapse0x29c70d0();
   input += synapse0x29c7110();
   input += synapse0x29c7150();
   input += synapse0x29c6be0();
   input += synapse0x29c6c20();
   input += synapse0x29c72a0();
   input += synapse0x29c72e0();
   input += synapse0x29c7320();
   input += synapse0x29c7360();
   input += synapse0x29c73a0();
   input += synapse0x29c73e0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29c6a50() {
   double input = input0x29c6a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d9090() {
   double input = 1.21902;
   input += synapse0x29d92b0();
   input += synapse0x29d92f0();
   input += synapse0x29d9330();
   input += synapse0x29d9370();
   input += synapse0x29d93b0();
   input += synapse0x29d93f0();
   input += synapse0x29d9430();
   input += synapse0x29d9470();
   input += synapse0x29d94b0();
   input += synapse0x29d94f0();
   input += synapse0x29d9530();
   input += synapse0x29d9570();
   input += synapse0x29d95b0();
   input += synapse0x29d95f0();
   input += synapse0x29d9630();
   input += synapse0x29d9670();
   input += synapse0x29c7420();
   input += synapse0x29c7460();
   input += synapse0x29d97c0();
   input += synapse0x29d9800();
   input += synapse0x29d9840();
   input += synapse0x29d9880();
   input += synapse0x29d98c0();
   input += synapse0x29d9900();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d9090() {
   double input = input0x29d9090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29d9940() {
   double input = 0.15588;
   input += synapse0x29d9c80();
   input += synapse0x29d9cc0();
   input += synapse0x29d9d00();
   input += synapse0x29d9d40();
   input += synapse0x29d9d80();
   input += synapse0x29d9dc0();
   input += synapse0x29d9e00();
   input += synapse0x29d9e40();
   input += synapse0x29d9e80();
   input += synapse0x29d9ec0();
   input += synapse0x29d9f00();
   input += synapse0x29d9f40();
   input += synapse0x29d9f80();
   input += synapse0x29d9fc0();
   input += synapse0x29da000();
   input += synapse0x29da040();
   input += synapse0x29d9ad0();
   input += synapse0x29d9b10();
   input += synapse0x29da190();
   input += synapse0x29da1d0();
   input += synapse0x29da210();
   input += synapse0x29da250();
   input += synapse0x29da290();
   input += synapse0x29da2d0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29d9940() {
   double input = input0x29d9940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29da310() {
   double input = -0.272611;
   input += synapse0x29da650();
   input += synapse0x29da690();
   input += synapse0x29da6d0();
   input += synapse0x29da710();
   input += synapse0x29da750();
   input += synapse0x29da790();
   input += synapse0x29da7d0();
   input += synapse0x29da810();
   input += synapse0x29da850();
   input += synapse0x29da890();
   input += synapse0x29da8d0();
   input += synapse0x29da910();
   input += synapse0x29da950();
   input += synapse0x29da990();
   input += synapse0x29da9d0();
   input += synapse0x29daa10();
   input += synapse0x29da4a0();
   input += synapse0x29da4e0();
   input += synapse0x29dab60();
   input += synapse0x29daba0();
   input += synapse0x29dabe0();
   input += synapse0x29dac20();
   input += synapse0x29dac60();
   input += synapse0x29daca0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29da310() {
   double input = input0x29da310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29dace0() {
   double input = -0.184115;
   input += synapse0x29db020();
   input += synapse0x29db060();
   input += synapse0x29db0a0();
   input += synapse0x29db0e0();
   input += synapse0x29db120();
   input += synapse0x29db160();
   input += synapse0x29db1a0();
   input += synapse0x29db1e0();
   input += synapse0x29db220();
   input += synapse0x29db260();
   input += synapse0x29db2a0();
   input += synapse0x29db2e0();
   input += synapse0x29db320();
   input += synapse0x29db360();
   input += synapse0x29db3a0();
   input += synapse0x29db3e0();
   input += synapse0x29dae70();
   input += synapse0x29daeb0();
   input += synapse0x29db530();
   input += synapse0x29db570();
   input += synapse0x29db5b0();
   input += synapse0x29db5f0();
   input += synapse0x29db630();
   input += synapse0x29db670();
   return input;
}

double NNfunction_NN_2_3::neuron0x29dace0() {
   double input = input0x29dace0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29e1ee0() {
   double input = 2.15227;
   input += synapse0x29b7c10();
   input += synapse0x29b7c50();
   input += synapse0x29b9120();
   input += synapse0x29b9160();
   input += synapse0x29b9af0();
   input += synapse0x29b9b30();
   input += synapse0x29ba8c0();
   input += synapse0x29ba900();
   input += synapse0x29bb290();
   input += synapse0x29bb2d0();
   input += synapse0x29bbc60();
   input += synapse0x29bbca0();
   input += synapse0x29bc740();
   input += synapse0x29bc780();
   input += synapse0x29bd110();
   input += synapse0x29bd150();
   input += synapse0x29ba1f0();
   input += synapse0x29ba230();
   input += synapse0x29becc0();
   input += synapse0x29bed00();
   input += synapse0x29bf690();
   input += synapse0x29bf6d0();
   input += synapse0x29c0060();
   input += synapse0x29c00a0();
   input += synapse0x29c0a30();
   input += synapse0x29c0a70();
   input += synapse0x29b4ba0();
   input += synapse0x29b4be0();
   input += synapse0x29c2b20();
   input += synapse0x29c2b60();
   input += synapse0x29c34f0();
   input += synapse0x29c3530();
   input += synapse0x29c3ec0();
   input += synapse0x29c3f00();
   input += synapse0x29c4890();
   input += synapse0x29c48d0();
   input += synapse0x29c5260();
   input += synapse0x29c52a0();
   input += synapse0x29bddb0();
   input += synapse0x29bddf0();
   input += synapse0x29c7660();
   input += synapse0x29c76a0();
   input += synapse0x29c7ff0();
   input += synapse0x29c8030();
   input += synapse0x29c89c0();
   input += synapse0x29c8a00();
   input += synapse0x29c9390();
   input += synapse0x29c93d0();
   input += synapse0x29c9d60();
   input += synapse0x29c9da0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29e1ee0() {
   double input = input0x29e1ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29e2280() {
   double input = 0.826642;
   input += synapse0x29cc4a0();
   input += synapse0x29cc4e0();
   input += synapse0x29c1a60();
   input += synapse0x29c1aa0();
   input += synapse0x29cf080();
   input += synapse0x29cf0c0();
   input += synapse0x29cfa50();
   input += synapse0x29cfa90();
   input += synapse0x29d0420();
   input += synapse0x29d0460();
   input += synapse0x29d0df0();
   input += synapse0x29d0e30();
   input += synapse0x29d17c0();
   input += synapse0x29d1800();
   input += synapse0x29d2190();
   input += synapse0x29d21d0();
   input += synapse0x29d2b60();
   input += synapse0x29d2ba0();
   input += synapse0x29d3530();
   input += synapse0x29d3570();
   input += synapse0x29d4110();
   input += synapse0x29d4150();
   input += synapse0x29d4ae0();
   input += synapse0x29d4b20();
   input += synapse0x29c5960();
   input += synapse0x29c59a0();
   input += synapse0x29c6330();
   input += synapse0x29c6370();
   input += synapse0x29c6d00();
   input += synapse0x29c6d40();
   input += synapse0x29d9220();
   input += synapse0x29d9260();
   input += synapse0x29d9bf0();
   input += synapse0x29d9c30();
   input += synapse0x29da5c0();
   input += synapse0x29da600();
   input += synapse0x29daf90();
   input += synapse0x29dafd0();
   input += synapse0x29b6e80();
   input += synapse0x29b6ec0();
   input += synapse0x29ca730();
   input += synapse0x29ca770();
   input += synapse0x29db6b0();
   input += synapse0x29db6f0();
   input += synapse0x29db730();
   input += synapse0x29db770();
   input += synapse0x29e2620();
   input += synapse0x29e2660();
   input += synapse0x29e26a0();
   input += synapse0x29e26e0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29e2280() {
   double input = input0x29e2280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29e2720() {
   double input = -1.63436;
   input += synapse0x29e2a60();
   input += synapse0x29e2aa0();
   input += synapse0x29e2ae0();
   input += synapse0x29e2b20();
   input += synapse0x29e2b60();
   input += synapse0x29e2ba0();
   input += synapse0x29e2be0();
   input += synapse0x29e2c20();
   input += synapse0x29e2c60();
   input += synapse0x29e2ca0();
   input += synapse0x29e2ce0();
   input += synapse0x29e2d20();
   input += synapse0x29e2d60();
   input += synapse0x29e2da0();
   input += synapse0x29e2de0();
   input += synapse0x29e2e20();
   input += synapse0x29e28b0();
   input += synapse0x29e28f0();
   input += synapse0x29e2f70();
   input += synapse0x29e2fb0();
   input += synapse0x29e2ff0();
   input += synapse0x29e3030();
   input += synapse0x29e3070();
   input += synapse0x29e30b0();
   input += synapse0x29e30f0();
   input += synapse0x29e3130();
   input += synapse0x29e3170();
   input += synapse0x29e31b0();
   input += synapse0x29e31f0();
   input += synapse0x29e3230();
   input += synapse0x29e3270();
   input += synapse0x29e32b0();
   input += synapse0x29e2e60();
   input += synapse0x29e2ea0();
   input += synapse0x29e2ee0();
   input += synapse0x29e2f20();
   input += synapse0x29e3500();
   input += synapse0x29e3540();
   input += synapse0x29e3580();
   input += synapse0x29e35c0();
   input += synapse0x29e3600();
   input += synapse0x29e3640();
   input += synapse0x29e3680();
   input += synapse0x29e36c0();
   input += synapse0x29e3700();
   input += synapse0x29e3740();
   input += synapse0x29e3780();
   input += synapse0x29e37c0();
   input += synapse0x29e3800();
   input += synapse0x29e3840();
   return input;
}

double NNfunction_NN_2_3::neuron0x29e2720() {
   double input = input0x29e2720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29e3880() {
   double input = -1.28672;
   input += synapse0x29e3bc0();
   input += synapse0x29e3c00();
   input += synapse0x29e3c40();
   input += synapse0x29e3c80();
   input += synapse0x29e3cc0();
   input += synapse0x29e3d00();
   input += synapse0x29e3d40();
   input += synapse0x29e3d80();
   input += synapse0x29e3dc0();
   input += synapse0x29e3e00();
   input += synapse0x29e3e40();
   input += synapse0x29e3e80();
   input += synapse0x29e3ec0();
   input += synapse0x29e3f00();
   input += synapse0x29e3f40();
   input += synapse0x29e3f80();
   input += synapse0x29e3a10();
   input += synapse0x29e3a50();
   input += synapse0x29e40d0();
   input += synapse0x29e4110();
   input += synapse0x29e4150();
   input += synapse0x29e4190();
   input += synapse0x29e41d0();
   input += synapse0x29e4210();
   input += synapse0x29e4250();
   input += synapse0x29e4290();
   input += synapse0x29e42d0();
   input += synapse0x29e4310();
   input += synapse0x29e4350();
   input += synapse0x29e4390();
   input += synapse0x29e43d0();
   input += synapse0x29e4410();
   input += synapse0x29e3fc0();
   input += synapse0x29e4000();
   input += synapse0x29e4040();
   input += synapse0x29e4080();
   input += synapse0x29e4660();
   input += synapse0x29e46a0();
   input += synapse0x29e46e0();
   input += synapse0x29e4720();
   input += synapse0x29e4760();
   input += synapse0x29e47a0();
   input += synapse0x29e47e0();
   input += synapse0x29e4820();
   input += synapse0x29e4860();
   input += synapse0x29e48a0();
   input += synapse0x29e48e0();
   input += synapse0x29e4920();
   input += synapse0x29e4960();
   input += synapse0x29e49a0();
   return input;
}

double NNfunction_NN_2_3::neuron0x29e3880() {
   double input = input0x29e3880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29e49e0() {
   double input = 0.124256;
   input += synapse0x29e4d20();
   input += synapse0x29e4d60();
   input += synapse0x29e4da0();
   input += synapse0x29e4de0();
   input += synapse0x29e4e20();
   input += synapse0x29e4e60();
   input += synapse0x29e4ea0();
   input += synapse0x29e4ee0();
   input += synapse0x29e4f20();
   input += synapse0x29e4f60();
   input += synapse0x29e4fa0();
   input += synapse0x29e4fe0();
   input += synapse0x29e5020();
   input += synapse0x29e5060();
   input += synapse0x29e50a0();
   input += synapse0x29e50e0();
   input += synapse0x29e4b70();
   input += synapse0x29e4bb0();
   input += synapse0x29e5230();
   input += synapse0x29e5270();
   input += synapse0x29e52b0();
   input += synapse0x29e52f0();
   input += synapse0x29e5330();
   input += synapse0x29e5370();
   input += synapse0x29e53b0();
   input += synapse0x29e53f0();
   input += synapse0x29e5430();
   input += synapse0x29e5470();
   input += synapse0x29e54b0();
   input += synapse0x29e54f0();
   input += synapse0x29e5530();
   input += synapse0x29e5570();
   input += synapse0x29e5120();
   input += synapse0x29e5160();
   input += synapse0x29e51a0();
   input += synapse0x29e51e0();
   input += synapse0x29e57c0();
   input += synapse0x29e5800();
   input += synapse0x29e5840();
   input += synapse0x29e5880();
   input += synapse0x29e58c0();
   input += synapse0x29e5900();
   input += synapse0x29e5940();
   input += synapse0x29e5980();
   input += synapse0x29e59c0();
   input += synapse0x29e5a00();
   input += synapse0x29e5a40();
   input += synapse0x29e5a80();
   input += synapse0x29e5ac0();
   input += synapse0x29e5b00();
   return input;
}

double NNfunction_NN_2_3::neuron0x29e49e0() {
   double input = input0x29e49e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_3::input0x29e5b40() {
   double input = 4.17992;
   input += synapse0x29b6c20();
   input += synapse0x29e5d60();
   input += synapse0x29e5da0();
   input += synapse0x29e5de0();
   input += synapse0x29e5e20();
   return input;
}

double NNfunction_NN_2_3::neuron0x29e5b40() {
   double input = input0x29e5b40();
   return (input * 1)+0;
}

double NNfunction_NN_2_3::synapse0x2771a70() {
   return (neuron0x29b1c00()*-0.191442);
}

double NNfunction_NN_2_3::synapse0x29b1ac0() {
   return (neuron0x29b1f40()*0.183063);
}

double NNfunction_NN_2_3::synapse0x29b1b00() {
   return (neuron0x29b2280()*0.34823);
}

double NNfunction_NN_2_3::synapse0x29b6f10() {
   return (neuron0x29b25c0()*0.142426);
}

double NNfunction_NN_2_3::synapse0x29b6f50() {
   return (neuron0x29b2900()*0.359283);
}

double NNfunction_NN_2_3::synapse0x29b6f90() {
   return (neuron0x29b2c40()*-0.301749);
}

double NNfunction_NN_2_3::synapse0x29b6fd0() {
   return (neuron0x29b2f80()*-0.0822422);
}

double NNfunction_NN_2_3::synapse0x29b7010() {
   return (neuron0x29b32c0()*-0.526969);
}

double NNfunction_NN_2_3::synapse0x29b7050() {
   return (neuron0x29b3600()*-0.45196);
}

double NNfunction_NN_2_3::synapse0x29b7090() {
   return (neuron0x29b3940()*0.382185);
}

double NNfunction_NN_2_3::synapse0x29b70d0() {
   return (neuron0x29b3c80()*-0.144374);
}

double NNfunction_NN_2_3::synapse0x29b7110() {
   return (neuron0x29b3fc0()*-0.240716);
}

double NNfunction_NN_2_3::synapse0x29b7150() {
   return (neuron0x29b4300()*-0.267001);
}

double NNfunction_NN_2_3::synapse0x29b7190() {
   return (neuron0x29b4640()*0.473398);
}

double NNfunction_NN_2_3::synapse0x29b71d0() {
   return (neuron0x29b4980()*-0.364493);
}

double NNfunction_NN_2_3::synapse0x29b7210() {
   return (neuron0x29b4cc0()*-0.180479);
}

double NNfunction_NN_2_3::synapse0x29b1a30() {
   return (neuron0x29b5000()*-0.0573767);
}

double NNfunction_NN_2_3::synapse0x29b1a70() {
   return (neuron0x29b5560()*-0.00028604);
}

double NNfunction_NN_2_3::synapse0x27632d0() {
   return (neuron0x29b5780()*0.219141);
}

double NNfunction_NN_2_3::synapse0x2763310() {
   return (neuron0x29b5ac0()*0.510612);
}

double NNfunction_NN_2_3::synapse0x29b7470() {
   return (neuron0x29b5e00()*-0.10169);
}

double NNfunction_NN_2_3::synapse0x29b74b0() {
   return (neuron0x29b6140()*0.308917);
}

double NNfunction_NN_2_3::synapse0x29b74f0() {
   return (neuron0x29b6480()*0.501039);
}

double NNfunction_NN_2_3::synapse0x29b7530() {
   return (neuron0x29b67c0()*0.656488);
}

double NNfunction_NN_2_3::synapse0x29b78b0() {
   return (neuron0x29b1c00()*-0.000433632);
}

double NNfunction_NN_2_3::synapse0x29b78f0() {
   return (neuron0x29b1f40()*0.0211419);
}

double NNfunction_NN_2_3::synapse0x29b7930() {
   return (neuron0x29b2280()*-0.430297);
}

double NNfunction_NN_2_3::synapse0x29b7970() {
   return (neuron0x29b25c0()*-0.00659816);
}

double NNfunction_NN_2_3::synapse0x29b79b0() {
   return (neuron0x29b2900()*0.00631531);
}

double NNfunction_NN_2_3::synapse0x29b79f0() {
   return (neuron0x29b2c40()*0.00172695);
}

double NNfunction_NN_2_3::synapse0x29b7a30() {
   return (neuron0x29b2f80()*0.0146117);
}

double NNfunction_NN_2_3::synapse0x29b7a70() {
   return (neuron0x29b32c0()*0.00969459);
}

double NNfunction_NN_2_3::synapse0x29b7ab0() {
   return (neuron0x29b3600()*0.00593778);
}

double NNfunction_NN_2_3::synapse0x29b7360() {
   return (neuron0x29b3940()*-0.00946283);
}

double NNfunction_NN_2_3::synapse0x29b73a0() {
   return (neuron0x29b3c80()*-0.000847079);
}

double NNfunction_NN_2_3::synapse0x29b73e0() {
   return (neuron0x29b3fc0()*0.0350491);
}

double NNfunction_NN_2_3::synapse0x29b7420() {
   return (neuron0x29b4300()*0.00707333);
}

double NNfunction_NN_2_3::synapse0x29b7d00() {
   return (neuron0x29b4640()*0.00476371);
}

double NNfunction_NN_2_3::synapse0x29b7d40() {
   return (neuron0x29b4980()*0.00251908);
}

double NNfunction_NN_2_3::synapse0x29b7d80() {
   return (neuron0x29b4cc0()*0.0217576);
}

double NNfunction_NN_2_3::synapse0x29b7700() {
   return (neuron0x29b5000()*0.0100607);
}

double NNfunction_NN_2_3::synapse0x29b7740() {
   return (neuron0x29b5560()*0.000415167);
}

double NNfunction_NN_2_3::synapse0x29b7ed0() {
   return (neuron0x29b5780()*-0.0198024);
}

double NNfunction_NN_2_3::synapse0x29b7f10() {
   return (neuron0x29b5ac0()*-0.00883792);
}

double NNfunction_NN_2_3::synapse0x29b7f50() {
   return (neuron0x29b5e00()*0.00758214);
}

double NNfunction_NN_2_3::synapse0x29b7f90() {
   return (neuron0x29b6140()*0.0242694);
}

double NNfunction_NN_2_3::synapse0x29b7fd0() {
   return (neuron0x29b6480()*-0.00399697);
}

double NNfunction_NN_2_3::synapse0x29b8010() {
   return (neuron0x29b67c0()*-7.19139);
}

double NNfunction_NN_2_3::synapse0x29b8390() {
   return (neuron0x29b1c00()*-0.237781);
}

double NNfunction_NN_2_3::synapse0x29b83d0() {
   return (neuron0x29b1f40()*-0.0987579);
}

double NNfunction_NN_2_3::synapse0x29b8410() {
   return (neuron0x29b2280()*0.190591);
}

double NNfunction_NN_2_3::synapse0x29b8450() {
   return (neuron0x29b25c0()*-0.18226);
}

double NNfunction_NN_2_3::synapse0x29b8490() {
   return (neuron0x29b2900()*0.347374);
}

double NNfunction_NN_2_3::synapse0x29b84d0() {
   return (neuron0x29b2c40()*-0.035582);
}

double NNfunction_NN_2_3::synapse0x29b8510() {
   return (neuron0x29b2f80()*0.986569);
}

double NNfunction_NN_2_3::synapse0x29b8550() {
   return (neuron0x29b32c0()*-0.182428);
}

double NNfunction_NN_2_3::synapse0x29b8590() {
   return (neuron0x29b3600()*-0.138585);
}

double NNfunction_NN_2_3::synapse0x29b85d0() {
   return (neuron0x29b3940()*0.206904);
}

double NNfunction_NN_2_3::synapse0x29b8610() {
   return (neuron0x29b3c80()*0.504747);
}

double NNfunction_NN_2_3::synapse0x29b8650() {
   return (neuron0x29b3fc0()*-0.00530795);
}

double NNfunction_NN_2_3::synapse0x29b8690() {
   return (neuron0x29b4300()*0.912538);
}

double NNfunction_NN_2_3::synapse0x29b86d0() {
   return (neuron0x29b4640()*0.0127281);
}

double NNfunction_NN_2_3::synapse0x29b8710() {
   return (neuron0x29b4980()*0.659218);
}

double NNfunction_NN_2_3::synapse0x29b8750() {
   return (neuron0x29b4cc0()*-0.693992);
}

double NNfunction_NN_2_3::synapse0x29b81e0() {
   return (neuron0x29b5000()*0.288564);
}

double NNfunction_NN_2_3::synapse0x29b8220() {
   return (neuron0x29b5560()*-0.427925);
}

double NNfunction_NN_2_3::synapse0x2771140() {
   return (neuron0x29b5780()*0.169304);
}

double NNfunction_NN_2_3::synapse0x2771180() {
   return (neuron0x29b5ac0()*-0.403324);
}

double NNfunction_NN_2_3::synapse0x29a0c90() {
   return (neuron0x29b5e00()*-0.297744);
}

double NNfunction_NN_2_3::synapse0x29a0cd0() {
   return (neuron0x29b6140()*0.138425);
}

double NNfunction_NN_2_3::synapse0x29a0d10() {
   return (neuron0x29b6480()*0.150849);
}

double NNfunction_NN_2_3::synapse0x29b1b40() {
   return (neuron0x29b67c0()*-0.402387);
}

double NNfunction_NN_2_3::synapse0x29b7ca0() {
   return (neuron0x29b1c00()*0.0327321);
}

double NNfunction_NN_2_3::synapse0x29b1b80() {
   return (neuron0x29b1f40()*-0.0143072);
}

double NNfunction_NN_2_3::synapse0x29b1bc0() {
   return (neuron0x29b2280()*0.0591051);
}

double NNfunction_NN_2_3::synapse0x29b88a0() {
   return (neuron0x29b25c0()*-0.0602454);
}

double NNfunction_NN_2_3::synapse0x29b88e0() {
   return (neuron0x29b2900()*-0.00516287);
}

double NNfunction_NN_2_3::synapse0x29b8920() {
   return (neuron0x29b2c40()*0.0335454);
}

double NNfunction_NN_2_3::synapse0x29b8960() {
   return (neuron0x29b2f80()*-0.0381444);
}

double NNfunction_NN_2_3::synapse0x29b89a0() {
   return (neuron0x29b32c0()*0.0238945);
}

double NNfunction_NN_2_3::synapse0x29b89e0() {
   return (neuron0x29b3600()*0.00156413);
}

double NNfunction_NN_2_3::synapse0x29b8a20() {
   return (neuron0x29b3940()*0.00102554);
}

double NNfunction_NN_2_3::synapse0x29b8a60() {
   return (neuron0x29b3c80()*-0.0675551);
}

double NNfunction_NN_2_3::synapse0x29b8aa0() {
   return (neuron0x29b3fc0()*-0.0297821);
}

double NNfunction_NN_2_3::synapse0x29b8ae0() {
   return (neuron0x29b4300()*0.00499347);
}

double NNfunction_NN_2_3::synapse0x29b8b20() {
   return (neuron0x29b4640()*0.0122815);
}

double NNfunction_NN_2_3::synapse0x29b8b60() {
   return (neuron0x29b4980()*0.019134);
}

double NNfunction_NN_2_3::synapse0x29b8ba0() {
   return (neuron0x29b4cc0()*-0.0281494);
}

double NNfunction_NN_2_3::synapse0x29b7af0() {
   return (neuron0x29b5000()*0.0159013);
}

double NNfunction_NN_2_3::synapse0x29b7b30() {
   return (neuron0x29b5560()*-0.0132719);
}

double NNfunction_NN_2_3::synapse0x29b8cf0() {
   return (neuron0x29b5780()*-0.0361477);
}

double NNfunction_NN_2_3::synapse0x29b8d30() {
   return (neuron0x29b5ac0()*-0.00480389);
}

double NNfunction_NN_2_3::synapse0x29b8d70() {
   return (neuron0x29b5e00()*-0.0270134);
}

double NNfunction_NN_2_3::synapse0x29b8db0() {
   return (neuron0x29b6140()*-0.013164);
}

double NNfunction_NN_2_3::synapse0x29b8df0() {
   return (neuron0x29b6480()*0.0296138);
}

double NNfunction_NN_2_3::synapse0x29b8e30() {
   return (neuron0x29b67c0()*0.756601);
}

double NNfunction_NN_2_3::synapse0x29b91b0() {
   return (neuron0x29b1c00()*0.0713434);
}

double NNfunction_NN_2_3::synapse0x29b91f0() {
   return (neuron0x29b1f40()*-0.00674646);
}

double NNfunction_NN_2_3::synapse0x29b9230() {
   return (neuron0x29b2280()*0.848414);
}

double NNfunction_NN_2_3::synapse0x29b9270() {
   return (neuron0x29b25c0()*0.116046);
}

double NNfunction_NN_2_3::synapse0x29b92b0() {
   return (neuron0x29b2900()*0.0791746);
}

double NNfunction_NN_2_3::synapse0x29b92f0() {
   return (neuron0x29b2c40()*-0.00734495);
}

double NNfunction_NN_2_3::synapse0x29b9330() {
   return (neuron0x29b2f80()*0.0106553);
}

double NNfunction_NN_2_3::synapse0x29b9370() {
   return (neuron0x29b32c0()*-0.0952255);
}

double NNfunction_NN_2_3::synapse0x29b93b0() {
   return (neuron0x29b3600()*-0.0120218);
}

double NNfunction_NN_2_3::synapse0x29b93f0() {
   return (neuron0x29b3940()*-0.0133363);
}

double NNfunction_NN_2_3::synapse0x29b9430() {
   return (neuron0x29b3c80()*0.0359698);
}

double NNfunction_NN_2_3::synapse0x29b9470() {
   return (neuron0x29b3fc0()*-0.331895);
}

double NNfunction_NN_2_3::synapse0x29b94b0() {
   return (neuron0x29b4300()*-0.00978185);
}

double NNfunction_NN_2_3::synapse0x29b94f0() {
   return (neuron0x29b4640()*-0.0113836);
}

double NNfunction_NN_2_3::synapse0x29b9530() {
   return (neuron0x29b4980()*0.115365);
}

double NNfunction_NN_2_3::synapse0x29b9570() {
   return (neuron0x29b4cc0()*0.0440768);
}

double NNfunction_NN_2_3::synapse0x29b9000() {
   return (neuron0x29b5000()*0.0197143);
}

double NNfunction_NN_2_3::synapse0x29b9040() {
   return (neuron0x29b5560()*-0.0151636);
}

double NNfunction_NN_2_3::synapse0x29b96c0() {
   return (neuron0x29b5780()*-0.0516234);
}

double NNfunction_NN_2_3::synapse0x29b9700() {
   return (neuron0x29b5ac0()*-0.0675515);
}

double NNfunction_NN_2_3::synapse0x29b9740() {
   return (neuron0x29b5e00()*0.0747039);
}

double NNfunction_NN_2_3::synapse0x29b9780() {
   return (neuron0x29b6140()*-0.0908137);
}

double NNfunction_NN_2_3::synapse0x29b97c0() {
   return (neuron0x29b6480()*0.00931392);
}

double NNfunction_NN_2_3::synapse0x29b9800() {
   return (neuron0x29b67c0()*-0.342566);
}

double NNfunction_NN_2_3::synapse0x29b9b80() {
   return (neuron0x29b1c00()*-0.119304);
}

double NNfunction_NN_2_3::synapse0x29b9bc0() {
   return (neuron0x29b1f40()*-0.0291939);
}

double NNfunction_NN_2_3::synapse0x29b9c00() {
   return (neuron0x29b2280()*-0.118234);
}

double NNfunction_NN_2_3::synapse0x29b9c40() {
   return (neuron0x29b25c0()*-0.303097);
}

double NNfunction_NN_2_3::synapse0x29b9c80() {
   return (neuron0x29b2900()*-0.173492);
}

double NNfunction_NN_2_3::synapse0x29b9cc0() {
   return (neuron0x29b2c40()*-0.0047265);
}

double NNfunction_NN_2_3::synapse0x29b9d00() {
   return (neuron0x29b2f80()*0.094199);
}

double NNfunction_NN_2_3::synapse0x29b9d40() {
   return (neuron0x29b32c0()*-0.0343511);
}

double NNfunction_NN_2_3::synapse0x29b9d80() {
   return (neuron0x29b3600()*0.104655);
}

double NNfunction_NN_2_3::synapse0x27714d0() {
   return (neuron0x29b3940()*-0.12631);
}

double NNfunction_NN_2_3::synapse0x2771510() {
   return (neuron0x29b3c80()*0.187677);
}

double NNfunction_NN_2_3::synapse0x2771550() {
   return (neuron0x29b3fc0()*-0.390458);
}

double NNfunction_NN_2_3::synapse0x2771590() {
   return (neuron0x29b4300()*0.0974306);
}

double NNfunction_NN_2_3::synapse0x27715d0() {
   return (neuron0x29b4640()*-0.108517);
}

double NNfunction_NN_2_3::synapse0x2771610() {
   return (neuron0x29b4980()*0.0702061);
}

double NNfunction_NN_2_3::synapse0x2771650() {
   return (neuron0x29b4cc0()*0.0106715);
}

double NNfunction_NN_2_3::synapse0x29b99d0() {
   return (neuron0x29b5000()*0.205658);
}

double NNfunction_NN_2_3::synapse0x29b9a10() {
   return (neuron0x29b5560()*-0.0565484);
}

double NNfunction_NN_2_3::synapse0x27717a0() {
   return (neuron0x29b5780()*-0.17689);
}

double NNfunction_NN_2_3::synapse0x27717e0() {
   return (neuron0x29b5ac0()*0.145366);
}

double NNfunction_NN_2_3::synapse0x2771820() {
   return (neuron0x29b5e00()*0.227302);
}

double NNfunction_NN_2_3::synapse0x2771860() {
   return (neuron0x29b6140()*-0.124836);
}

double NNfunction_NN_2_3::synapse0x27718a0() {
   return (neuron0x29b6480()*0.0439978);
}

double NNfunction_NN_2_3::synapse0x29ba5d0() {
   return (neuron0x29b67c0()*0.140599);
}

double NNfunction_NN_2_3::synapse0x29ba950() {
   return (neuron0x29b1c00()*-0.249255);
}

double NNfunction_NN_2_3::synapse0x29ba990() {
   return (neuron0x29b1f40()*-0.162542);
}

double NNfunction_NN_2_3::synapse0x29ba9d0() {
   return (neuron0x29b2280()*-0.109943);
}

double NNfunction_NN_2_3::synapse0x29baa10() {
   return (neuron0x29b25c0()*-0.110889);
}

double NNfunction_NN_2_3::synapse0x29baa50() {
   return (neuron0x29b2900()*-0.0204125);
}

double NNfunction_NN_2_3::synapse0x29baa90() {
   return (neuron0x29b2c40()*0.168081);
}

double NNfunction_NN_2_3::synapse0x29baad0() {
   return (neuron0x29b2f80()*0.0102004);
}

double NNfunction_NN_2_3::synapse0x29bab10() {
   return (neuron0x29b32c0()*-0.458987);
}

double NNfunction_NN_2_3::synapse0x29bab50() {
   return (neuron0x29b3600()*0.0237514);
}

double NNfunction_NN_2_3::synapse0x29bab90() {
   return (neuron0x29b3940()*0.110324);
}

double NNfunction_NN_2_3::synapse0x29babd0() {
   return (neuron0x29b3c80()*0.80326);
}

double NNfunction_NN_2_3::synapse0x29bac10() {
   return (neuron0x29b3fc0()*0.496169);
}

double NNfunction_NN_2_3::synapse0x29bac50() {
   return (neuron0x29b4300()*-0.309186);
}

double NNfunction_NN_2_3::synapse0x29bac90() {
   return (neuron0x29b4640()*-0.423264);
}

double NNfunction_NN_2_3::synapse0x29bacd0() {
   return (neuron0x29b4980()*0.111771);
}

double NNfunction_NN_2_3::synapse0x29bad10() {
   return (neuron0x29b4cc0()*-0.201545);
}

double NNfunction_NN_2_3::synapse0x29ba7a0() {
   return (neuron0x29b5000()*0.167878);
}

double NNfunction_NN_2_3::synapse0x29ba7e0() {
   return (neuron0x29b5560()*-0.167431);
}

double NNfunction_NN_2_3::synapse0x29bae60() {
   return (neuron0x29b5780()*-0.374966);
}

double NNfunction_NN_2_3::synapse0x29baea0() {
   return (neuron0x29b5ac0()*-0.428558);
}

double NNfunction_NN_2_3::synapse0x29baee0() {
   return (neuron0x29b5e00()*0.0145322);
}

double NNfunction_NN_2_3::synapse0x29baf20() {
   return (neuron0x29b6140()*-0.0931224);
}

double NNfunction_NN_2_3::synapse0x29baf60() {
   return (neuron0x29b6480()*0.363556);
}

double NNfunction_NN_2_3::synapse0x29bafa0() {
   return (neuron0x29b67c0()*-0.203422);
}

double NNfunction_NN_2_3::synapse0x29bb320() {
   return (neuron0x29b1c00()*0.0326324);
}

double NNfunction_NN_2_3::synapse0x29bb360() {
   return (neuron0x29b1f40()*0.0147314);
}

double NNfunction_NN_2_3::synapse0x29bb3a0() {
   return (neuron0x29b2280()*2.36337);
}

double NNfunction_NN_2_3::synapse0x29bb3e0() {
   return (neuron0x29b25c0()*0.00190873);
}

double NNfunction_NN_2_3::synapse0x29bb420() {
   return (neuron0x29b2900()*0.0151758);
}

double NNfunction_NN_2_3::synapse0x29bb460() {
   return (neuron0x29b2c40()*-0.0313184);
}

double NNfunction_NN_2_3::synapse0x29bb4a0() {
   return (neuron0x29b2f80()*-0.000839397);
}

double NNfunction_NN_2_3::synapse0x29bb4e0() {
   return (neuron0x29b32c0()*0.00286455);
}

double NNfunction_NN_2_3::synapse0x29bb520() {
   return (neuron0x29b3600()*0.0104634);
}

double NNfunction_NN_2_3::synapse0x29bb560() {
   return (neuron0x29b3940()*-0.0027532);
}

double NNfunction_NN_2_3::synapse0x29bb5a0() {
   return (neuron0x29b3c80()*-0.000263933);
}

double NNfunction_NN_2_3::synapse0x29bb5e0() {
   return (neuron0x29b3fc0()*0.208938);
}

double NNfunction_NN_2_3::synapse0x29bb620() {
   return (neuron0x29b4300()*0.0289282);
}

double NNfunction_NN_2_3::synapse0x29bb660() {
   return (neuron0x29b4640()*0.028589);
}

double NNfunction_NN_2_3::synapse0x29bb6a0() {
   return (neuron0x29b4980()*-0.0463057);
}

double NNfunction_NN_2_3::synapse0x29bb6e0() {
   return (neuron0x29b4cc0()*6.25537e-05);
}

double NNfunction_NN_2_3::synapse0x29bb170() {
   return (neuron0x29b5000()*-0.0256138);
}

double NNfunction_NN_2_3::synapse0x29bb1b0() {
   return (neuron0x29b5560()*-0.0246011);
}

double NNfunction_NN_2_3::synapse0x29bb830() {
   return (neuron0x29b5780()*-0.0193548);
}

double NNfunction_NN_2_3::synapse0x29bb870() {
   return (neuron0x29b5ac0()*0.00933146);
}

double NNfunction_NN_2_3::synapse0x29bb8b0() {
   return (neuron0x29b5e00()*-0.0187027);
}

double NNfunction_NN_2_3::synapse0x29bb8f0() {
   return (neuron0x29b6140()*-0.0108035);
}

double NNfunction_NN_2_3::synapse0x29bb930() {
   return (neuron0x29b6480()*-0.0128791);
}

double NNfunction_NN_2_3::synapse0x29bb970() {
   return (neuron0x29b67c0()*-3.74768);
}

double NNfunction_NN_2_3::synapse0x29b5450() {
   return (neuron0x29b1c00()*-0.0563689);
}

double NNfunction_NN_2_3::synapse0x29b5490() {
   return (neuron0x29b1f40()*-0.0273355);
}

double NNfunction_NN_2_3::synapse0x29b54d0() {
   return (neuron0x29b2280()*-7.59177);
}

double NNfunction_NN_2_3::synapse0x29b5510() {
   return (neuron0x29b25c0()*-0.00939681);
}

double NNfunction_NN_2_3::synapse0x29bbf00() {
   return (neuron0x29b2900()*0.00620872);
}

double NNfunction_NN_2_3::synapse0x29bbf40() {
   return (neuron0x29b2c40()*0.0358417);
}

double NNfunction_NN_2_3::synapse0x29bbf80() {
   return (neuron0x29b2f80()*-0.00916265);
}

double NNfunction_NN_2_3::synapse0x29bbfc0() {
   return (neuron0x29b32c0()*-0.00134331);
}

double NNfunction_NN_2_3::synapse0x29bc000() {
   return (neuron0x29b3600()*-0.0230074);
}

double NNfunction_NN_2_3::synapse0x29bc040() {
   return (neuron0x29b3940()*-0.0163258);
}

double NNfunction_NN_2_3::synapse0x29bc080() {
   return (neuron0x29b3c80()*-0.0231693);
}

double NNfunction_NN_2_3::synapse0x29bc0c0() {
   return (neuron0x29b3fc0()*0.106909);
}

double NNfunction_NN_2_3::synapse0x29bc100() {
   return (neuron0x29b4300()*0.00864869);
}

double NNfunction_NN_2_3::synapse0x29bc140() {
   return (neuron0x29b4640()*0.0232015);
}

double NNfunction_NN_2_3::synapse0x29bc180() {
   return (neuron0x29b4980()*0.00970754);
}

double NNfunction_NN_2_3::synapse0x29bc1c0() {
   return (neuron0x29b4cc0()*-0.00581561);
}

double NNfunction_NN_2_3::synapse0x29bbb40() {
   return (neuron0x29b5000()*-0.0100022);
}

double NNfunction_NN_2_3::synapse0x29bbb80() {
   return (neuron0x29b5560()*0.0136563);
}

double NNfunction_NN_2_3::synapse0x29bc310() {
   return (neuron0x29b5780()*-0.00240514);
}

double NNfunction_NN_2_3::synapse0x29bc350() {
   return (neuron0x29b5ac0()*0.00866212);
}

double NNfunction_NN_2_3::synapse0x29bc390() {
   return (neuron0x29b5e00()*0.00897422);
}

double NNfunction_NN_2_3::synapse0x29bc3d0() {
   return (neuron0x29b6140()*0.00397604);
}

double NNfunction_NN_2_3::synapse0x29bc410() {
   return (neuron0x29b6480()*-0.0195586);
}

double NNfunction_NN_2_3::synapse0x29bc450() {
   return (neuron0x29b67c0()*2.02247);
}

double NNfunction_NN_2_3::synapse0x29bc7d0() {
   return (neuron0x29b1c00()*0.0452062);
}

double NNfunction_NN_2_3::synapse0x29bc810() {
   return (neuron0x29b1f40()*-8.08619);
}

double NNfunction_NN_2_3::synapse0x29bc850() {
   return (neuron0x29b2280()*0.267179);
}

double NNfunction_NN_2_3::synapse0x29bc890() {
   return (neuron0x29b25c0()*0.0314029);
}

double NNfunction_NN_2_3::synapse0x29bc8d0() {
   return (neuron0x29b2900()*0.0593772);
}

double NNfunction_NN_2_3::synapse0x29bc910() {
   return (neuron0x29b2c40()*-0.00235704);
}

double NNfunction_NN_2_3::synapse0x29bc950() {
   return (neuron0x29b2f80()*-0.00788117);
}

double NNfunction_NN_2_3::synapse0x29bc990() {
   return (neuron0x29b32c0()*-0.0175092);
}

double NNfunction_NN_2_3::synapse0x29bc9d0() {
   return (neuron0x29b3600()*0.0114327);
}

double NNfunction_NN_2_3::synapse0x29bca10() {
   return (neuron0x29b3940()*-0.00770516);
}

double NNfunction_NN_2_3::synapse0x29bca50() {
   return (neuron0x29b3c80()*-0.0270187);
}

double NNfunction_NN_2_3::synapse0x29bca90() {
   return (neuron0x29b3fc0()*0.0145671);
}

double NNfunction_NN_2_3::synapse0x29bcad0() {
   return (neuron0x29b4300()*-0.0263413);
}

double NNfunction_NN_2_3::synapse0x29bcb10() {
   return (neuron0x29b4640()*0.0163869);
}

double NNfunction_NN_2_3::synapse0x29bcb50() {
   return (neuron0x29b4980()*0.044689);
}

double NNfunction_NN_2_3::synapse0x29bcb90() {
   return (neuron0x29b4cc0()*0.0243085);
}

double NNfunction_NN_2_3::synapse0x29bc620() {
   return (neuron0x29b5000()*0.0442058);
}

double NNfunction_NN_2_3::synapse0x29bc660() {
   return (neuron0x29b5560()*0.00178978);
}

double NNfunction_NN_2_3::synapse0x29bcce0() {
   return (neuron0x29b5780()*0.0214734);
}

double NNfunction_NN_2_3::synapse0x29bcd20() {
   return (neuron0x29b5ac0()*-0.00298668);
}

double NNfunction_NN_2_3::synapse0x29bcd60() {
   return (neuron0x29b5e00()*0.00455939);
}

double NNfunction_NN_2_3::synapse0x29bcda0() {
   return (neuron0x29b6140()*0.0133494);
}

double NNfunction_NN_2_3::synapse0x29bcde0() {
   return (neuron0x29b6480()*-0.00260359);
}

double NNfunction_NN_2_3::synapse0x29bce20() {
   return (neuron0x29b67c0()*-1.27041);
}

double NNfunction_NN_2_3::synapse0x29bd1a0() {
   return (neuron0x29b1c00()*-0.264285);
}

double NNfunction_NN_2_3::synapse0x29bd1e0() {
   return (neuron0x29b1f40()*0.164801);
}

double NNfunction_NN_2_3::synapse0x29bd220() {
   return (neuron0x29b2280()*0.789784);
}

double NNfunction_NN_2_3::synapse0x29bd260() {
   return (neuron0x29b25c0()*0.180059);
}

double NNfunction_NN_2_3::synapse0x29bd2a0() {
   return (neuron0x29b2900()*-0.61166);
}

double NNfunction_NN_2_3::synapse0x29bd2e0() {
   return (neuron0x29b2c40()*-0.0273666);
}

double NNfunction_NN_2_3::synapse0x29bd320() {
   return (neuron0x29b2f80()*0.283576);
}

double NNfunction_NN_2_3::synapse0x29bd360() {
   return (neuron0x29b32c0()*0.20775);
}

double NNfunction_NN_2_3::synapse0x29bd3a0() {
   return (neuron0x29b3600()*-0.524919);
}

double NNfunction_NN_2_3::synapse0x29bd3e0() {
   return (neuron0x29b3940()*-0.348822);
}

double NNfunction_NN_2_3::synapse0x29bd420() {
   return (neuron0x29b3c80()*0.241301);
}

double NNfunction_NN_2_3::synapse0x29bd460() {
   return (neuron0x29b3fc0()*-0.407409);
}

double NNfunction_NN_2_3::synapse0x29bd4a0() {
   return (neuron0x29b4300()*-0.174507);
}

double NNfunction_NN_2_3::synapse0x29bd4e0() {
   return (neuron0x29b4640()*0.0751948);
}

double NNfunction_NN_2_3::synapse0x29bd520() {
   return (neuron0x29b4980()*-0.841803);
}

double NNfunction_NN_2_3::synapse0x29bd560() {
   return (neuron0x29b4cc0()*0.239587);
}

double NNfunction_NN_2_3::synapse0x29bcff0() {
   return (neuron0x29b5000()*-0.188876);
}

double NNfunction_NN_2_3::synapse0x29bd030() {
   return (neuron0x29b5560()*0.312929);
}

double NNfunction_NN_2_3::synapse0x29b9dc0() {
   return (neuron0x29b5780()*-0.112746);
}

double NNfunction_NN_2_3::synapse0x29b9e00() {
   return (neuron0x29b5ac0()*0.561386);
}

double NNfunction_NN_2_3::synapse0x29b9e40() {
   return (neuron0x29b5e00()*0.267323);
}

double NNfunction_NN_2_3::synapse0x29b9e80() {
   return (neuron0x29b6140()*0.0872371);
}

double NNfunction_NN_2_3::synapse0x29b9ec0() {
   return (neuron0x29b6480()*-0.489377);
}

double NNfunction_NN_2_3::synapse0x29b9f00() {
   return (neuron0x29b67c0()*0.436903);
}

double NNfunction_NN_2_3::synapse0x29ba280() {
   return (neuron0x29b1c00()*-0.152441);
}

double NNfunction_NN_2_3::synapse0x29ba2c0() {
   return (neuron0x29b1f40()*0.0785103);
}

double NNfunction_NN_2_3::synapse0x29ba300() {
   return (neuron0x29b2280()*0.253765);
}

double NNfunction_NN_2_3::synapse0x29ba340() {
   return (neuron0x29b25c0()*-0.113595);
}

double NNfunction_NN_2_3::synapse0x29ba380() {
   return (neuron0x29b2900()*0.352533);
}

double NNfunction_NN_2_3::synapse0x29ba3c0() {
   return (neuron0x29b2c40()*-0.225123);
}

double NNfunction_NN_2_3::synapse0x29ba400() {
   return (neuron0x29b2f80()*0.264693);
}

double NNfunction_NN_2_3::synapse0x29ba440() {
   return (neuron0x29b32c0()*-0.29211);
}

double NNfunction_NN_2_3::synapse0x29ba480() {
   return (neuron0x29b3600()*-0.00382527);
}

double NNfunction_NN_2_3::synapse0x29ba4c0() {
   return (neuron0x29b3940()*0.362177);
}

double NNfunction_NN_2_3::synapse0x29ba500() {
   return (neuron0x29b3c80()*0.108248);
}

double NNfunction_NN_2_3::synapse0x29ba540() {
   return (neuron0x29b3fc0()*-0.33085);
}

double NNfunction_NN_2_3::synapse0x29ba580() {
   return (neuron0x29b4300()*-0.218907);
}

double NNfunction_NN_2_3::synapse0x29be6c0() {
   return (neuron0x29b4640()*-0.462528);
}

double NNfunction_NN_2_3::synapse0x29be700() {
   return (neuron0x29b4980()*0.222482);
}

double NNfunction_NN_2_3::synapse0x29be740() {
   return (neuron0x29b4cc0()*-0.175609);
}

double NNfunction_NN_2_3::synapse0x29ba0d0() {
   return (neuron0x29b5000()*0.0051938);
}

double NNfunction_NN_2_3::synapse0x29ba110() {
   return (neuron0x29b5560()*-0.108552);
}

double NNfunction_NN_2_3::synapse0x29be890() {
   return (neuron0x29b5780()*0.526302);
}

double NNfunction_NN_2_3::synapse0x29be8d0() {
   return (neuron0x29b5ac0()*0.147415);
}

double NNfunction_NN_2_3::synapse0x29be910() {
   return (neuron0x29b5e00()*0.182618);
}

double NNfunction_NN_2_3::synapse0x29be950() {
   return (neuron0x29b6140()*-0.112284);
}

double NNfunction_NN_2_3::synapse0x29be990() {
   return (neuron0x29b6480()*-0.219409);
}

double NNfunction_NN_2_3::synapse0x29be9d0() {
   return (neuron0x29b67c0()*0.57343);
}

double NNfunction_NN_2_3::synapse0x29bed50() {
   return (neuron0x29b1c00()*0.0632815);
}

double NNfunction_NN_2_3::synapse0x29bed90() {
   return (neuron0x29b1f40()*-8.39305);
}

double NNfunction_NN_2_3::synapse0x29bedd0() {
   return (neuron0x29b2280()*-1.37477);
}

double NNfunction_NN_2_3::synapse0x29bee10() {
   return (neuron0x29b25c0()*0.0234547);
}

double NNfunction_NN_2_3::synapse0x29bee50() {
   return (neuron0x29b2900()*0.00928924);
}

double NNfunction_NN_2_3::synapse0x29bee90() {
   return (neuron0x29b2c40()*0.0131961);
}

double NNfunction_NN_2_3::synapse0x29beed0() {
   return (neuron0x29b2f80()*0.0396911);
}

double NNfunction_NN_2_3::synapse0x29bef10() {
   return (neuron0x29b32c0()*0.0580024);
}

double NNfunction_NN_2_3::synapse0x29bef50() {
   return (neuron0x29b3600()*0.0237538);
}

double NNfunction_NN_2_3::synapse0x29bef90() {
   return (neuron0x29b3940()*-0.0163259);
}

double NNfunction_NN_2_3::synapse0x29befd0() {
   return (neuron0x29b3c80()*-0.0043876);
}

double NNfunction_NN_2_3::synapse0x29bf010() {
   return (neuron0x29b3fc0()*-0.257609);
}

double NNfunction_NN_2_3::synapse0x29bf050() {
   return (neuron0x29b4300()*-0.0308252);
}

double NNfunction_NN_2_3::synapse0x29bf090() {
   return (neuron0x29b4640()*-0.0379355);
}

double NNfunction_NN_2_3::synapse0x29bf0d0() {
   return (neuron0x29b4980()*0.0443286);
}

double NNfunction_NN_2_3::synapse0x29bf110() {
   return (neuron0x29b4cc0()*0.0448637);
}

double NNfunction_NN_2_3::synapse0x29beba0() {
   return (neuron0x29b5000()*-0.0282222);
}

double NNfunction_NN_2_3::synapse0x29bebe0() {
   return (neuron0x29b5560()*0.0184078);
}

double NNfunction_NN_2_3::synapse0x29bf260() {
   return (neuron0x29b5780()*0.0542253);
}

double NNfunction_NN_2_3::synapse0x29bf2a0() {
   return (neuron0x29b5ac0()*-0.0203318);
}

double NNfunction_NN_2_3::synapse0x29bf2e0() {
   return (neuron0x29b5e00()*-0.0321845);
}

double NNfunction_NN_2_3::synapse0x29bf320() {
   return (neuron0x29b6140()*-0.0491628);
}

double NNfunction_NN_2_3::synapse0x29bf360() {
   return (neuron0x29b6480()*0.0309665);
}

double NNfunction_NN_2_3::synapse0x29bf3a0() {
   return (neuron0x29b67c0()*1.34892);
}

double NNfunction_NN_2_3::synapse0x29bf720() {
   return (neuron0x29b1c00()*-0.0266204);
}

double NNfunction_NN_2_3::synapse0x29bf760() {
   return (neuron0x29b1f40()*-1.46484);
}

double NNfunction_NN_2_3::synapse0x29bf7a0() {
   return (neuron0x29b2280()*-0.101523);
}

double NNfunction_NN_2_3::synapse0x29bf7e0() {
   return (neuron0x29b25c0()*0.00307158);
}

double NNfunction_NN_2_3::synapse0x29bf820() {
   return (neuron0x29b2900()*0.0537259);
}

double NNfunction_NN_2_3::synapse0x29bf860() {
   return (neuron0x29b2c40()*-0.00596615);
}

double NNfunction_NN_2_3::synapse0x29bf8a0() {
   return (neuron0x29b2f80()*0.00814944);
}

double NNfunction_NN_2_3::synapse0x29bf8e0() {
   return (neuron0x29b32c0()*0.0258236);
}

double NNfunction_NN_2_3::synapse0x29bf920() {
   return (neuron0x29b3600()*-0.00807422);
}

double NNfunction_NN_2_3::synapse0x29bf960() {
   return (neuron0x29b3940()*0.0195406);
}

double NNfunction_NN_2_3::synapse0x29bf9a0() {
   return (neuron0x29b3c80()*-0.0564387);
}

double NNfunction_NN_2_3::synapse0x29bf9e0() {
   return (neuron0x29b3fc0()*-0.095668);
}

double NNfunction_NN_2_3::synapse0x29bfa20() {
   return (neuron0x29b4300()*-0.028676);
}

double NNfunction_NN_2_3::synapse0x29bfa60() {
   return (neuron0x29b4640()*0.0374458);
}

double NNfunction_NN_2_3::synapse0x29bfaa0() {
   return (neuron0x29b4980()*0.0463921);
}

double NNfunction_NN_2_3::synapse0x29bfae0() {
   return (neuron0x29b4cc0()*0.0130858);
}

double NNfunction_NN_2_3::synapse0x29bf570() {
   return (neuron0x29b5000()*-0.0021683);
}

double NNfunction_NN_2_3::synapse0x29bf5b0() {
   return (neuron0x29b5560()*-0.0236266);
}

double NNfunction_NN_2_3::synapse0x29bfc30() {
   return (neuron0x29b5780()*0.0433742);
}

double NNfunction_NN_2_3::synapse0x29bfc70() {
   return (neuron0x29b5ac0()*-0.049561);
}

double NNfunction_NN_2_3::synapse0x29bfcb0() {
   return (neuron0x29b5e00()*-0.00189721);
}

double NNfunction_NN_2_3::synapse0x29bfcf0() {
   return (neuron0x29b6140()*0.0312718);
}

double NNfunction_NN_2_3::synapse0x29bfd30() {
   return (neuron0x29b6480()*-0.0372499);
}

double NNfunction_NN_2_3::synapse0x29bfd70() {
   return (neuron0x29b67c0()*-1.51287);
}

double NNfunction_NN_2_3::synapse0x29c00f0() {
   return (neuron0x29b1c00()*0.1382);
}

double NNfunction_NN_2_3::synapse0x29c0130() {
   return (neuron0x29b1f40()*-0.123466);
}

double NNfunction_NN_2_3::synapse0x29c0170() {
   return (neuron0x29b2280()*3.2816);
}

double NNfunction_NN_2_3::synapse0x29c01b0() {
   return (neuron0x29b25c0()*-0.04749);
}

double NNfunction_NN_2_3::synapse0x29c01f0() {
   return (neuron0x29b2900()*0.0313528);
}

double NNfunction_NN_2_3::synapse0x29c0230() {
   return (neuron0x29b2c40()*-0.00792719);
}

double NNfunction_NN_2_3::synapse0x29c0270() {
   return (neuron0x29b2f80()*-0.0159204);
}

double NNfunction_NN_2_3::synapse0x29c02b0() {
   return (neuron0x29b32c0()*0.00494468);
}

double NNfunction_NN_2_3::synapse0x29c02f0() {
   return (neuron0x29b3600()*-0.00703597);
}

double NNfunction_NN_2_3::synapse0x29c0330() {
   return (neuron0x29b3940()*-0.0333341);
}

double NNfunction_NN_2_3::synapse0x29c0370() {
   return (neuron0x29b3c80()*0.0318784);
}

double NNfunction_NN_2_3::synapse0x29c03b0() {
   return (neuron0x29b3fc0()*-0.114074);
}

double NNfunction_NN_2_3::synapse0x29c03f0() {
   return (neuron0x29b4300()*-0.0154162);
}

double NNfunction_NN_2_3::synapse0x29c0430() {
   return (neuron0x29b4640()*-0.0452365);
}

double NNfunction_NN_2_3::synapse0x29c0470() {
   return (neuron0x29b4980()*0.0352365);
}

double NNfunction_NN_2_3::synapse0x29c04b0() {
   return (neuron0x29b4cc0()*0.0134897);
}

double NNfunction_NN_2_3::synapse0x29bff40() {
   return (neuron0x29b5000()*-0.0070873);
}

double NNfunction_NN_2_3::synapse0x29bff80() {
   return (neuron0x29b5560()*0.0204233);
}

double NNfunction_NN_2_3::synapse0x29c0600() {
   return (neuron0x29b5780()*0.0294408);
}

double NNfunction_NN_2_3::synapse0x29c0640() {
   return (neuron0x29b5ac0()*-0.0308813);
}

double NNfunction_NN_2_3::synapse0x29c0680() {
   return (neuron0x29b5e00()*-0.0399349);
}

double NNfunction_NN_2_3::synapse0x29c06c0() {
   return (neuron0x29b6140()*0.016581);
}

double NNfunction_NN_2_3::synapse0x29c0700() {
   return (neuron0x29b6480()*0.0020602);
}

double NNfunction_NN_2_3::synapse0x29c0740() {
   return (neuron0x29b67c0()*2.97793);
}

double NNfunction_NN_2_3::synapse0x29c0ac0() {
   return (neuron0x29b1c00()*0.00669114);
}

double NNfunction_NN_2_3::synapse0x29b1e20() {
   return (neuron0x29b1f40()*-0.194625);
}

double NNfunction_NN_2_3::synapse0x29b1e60() {
   return (neuron0x29b2280()*0.0580634);
}

double NNfunction_NN_2_3::synapse0x29b2160() {
   return (neuron0x29b25c0()*-0.198085);
}

double NNfunction_NN_2_3::synapse0x29b21a0() {
   return (neuron0x29b2900()*0.0309612);
}

double NNfunction_NN_2_3::synapse0x29b24a0() {
   return (neuron0x29b2c40()*0.111354);
}

double NNfunction_NN_2_3::synapse0x29b24e0() {
   return (neuron0x29b2f80()*-0.045677);
}

double NNfunction_NN_2_3::synapse0x29b27e0() {
   return (neuron0x29b32c0()*0.0717823);
}

double NNfunction_NN_2_3::synapse0x29b2820() {
   return (neuron0x29b3600()*0.0308057);
}

double NNfunction_NN_2_3::synapse0x29b2b20() {
   return (neuron0x29b3940()*-0.0825948);
}

double NNfunction_NN_2_3::synapse0x29b2b60() {
   return (neuron0x29b3c80()*-0.0882682);
}

double NNfunction_NN_2_3::synapse0x29b2e60() {
   return (neuron0x29b3fc0()*-0.0976861);
}

double NNfunction_NN_2_3::synapse0x29b2ea0() {
   return (neuron0x29b4300()*-0.0031036);
}

double NNfunction_NN_2_3::synapse0x29b31a0() {
   return (neuron0x29b4640()*-0.0255025);
}

double NNfunction_NN_2_3::synapse0x29b31e0() {
   return (neuron0x29b4980()*0.896139);
}

double NNfunction_NN_2_3::synapse0x29b34e0() {
   return (neuron0x29b4cc0()*-0.115733);
}

double NNfunction_NN_2_3::synapse0x29b3520() {
   return (neuron0x29b5000()*0.0840835);
}

double NNfunction_NN_2_3::synapse0x29b3820() {
   return (neuron0x29b5560()*-0.0142979);
}

double NNfunction_NN_2_3::synapse0x29b3860() {
   return (neuron0x29b5780()*-0.0820896);
}

double NNfunction_NN_2_3::synapse0x29b3b60() {
   return (neuron0x29b5ac0()*-0.0613832);
}

double NNfunction_NN_2_3::synapse0x29b3ba0() {
   return (neuron0x29b5e00()*0.056468);
}

double NNfunction_NN_2_3::synapse0x29b3ea0() {
   return (neuron0x29b6140()*-0.0206315);
}

double NNfunction_NN_2_3::synapse0x29b3ee0() {
   return (neuron0x29b6480()*0.0116095);
}

double NNfunction_NN_2_3::synapse0x29b41e0() {
   return (neuron0x29b67c0()*-1.62558);
}

double NNfunction_NN_2_3::synapse0x29b4220() {
   return (neuron0x29b1c00()*-0.0278044);
}

double NNfunction_NN_2_3::synapse0x29b4ee0() {
   return (neuron0x29b1f40()*-0.00412504);
}

double NNfunction_NN_2_3::synapse0x29b4f20() {
   return (neuron0x29b2280()*0.185342);
}

double NNfunction_NN_2_3::synapse0x29c0910() {
   return (neuron0x29b25c0()*-0.0236558);
}

double NNfunction_NN_2_3::synapse0x29c0950() {
   return (neuron0x29b2900()*-0.0437909);
}

double NNfunction_NN_2_3::synapse0x29b5220() {
   return (neuron0x29b2c40()*0.00766187);
}

double NNfunction_NN_2_3::synapse0x29b5260() {
   return (neuron0x29b2f80()*-0.022848);
}

double NNfunction_NN_2_3::synapse0x27631b0() {
   return (neuron0x29b32c0()*-0.00760781);
}

double NNfunction_NN_2_3::synapse0x27631f0() {
   return (neuron0x29b3600()*-0.00578244);
}

double NNfunction_NN_2_3::synapse0x29b59a0() {
   return (neuron0x29b3940()*-0.00130041);
}

double NNfunction_NN_2_3::synapse0x29b59e0() {
   return (neuron0x29b3c80()*-0.0100471);
}

double NNfunction_NN_2_3::synapse0x29b5ce0() {
   return (neuron0x29b3fc0()*0.266636);
}

double NNfunction_NN_2_3::synapse0x29b5d20() {
   return (neuron0x29b4300()*-0.0156561);
}

double NNfunction_NN_2_3::synapse0x29b6020() {
   return (neuron0x29b4640()*0.0200078);
}

double NNfunction_NN_2_3::synapse0x29b6060() {
   return (neuron0x29b4980()*0.058201);
}

double NNfunction_NN_2_3::synapse0x29b6360() {
   return (neuron0x29b4cc0()*-0.015737);
}

double NNfunction_NN_2_3::synapse0x29b63a0() {
   return (neuron0x29b5000()*-0.000993013);
}

double NNfunction_NN_2_3::synapse0x29b66a0() {
   return (neuron0x29b5560()*0.0221762);
}

double NNfunction_NN_2_3::synapse0x29b66e0() {
   return (neuron0x29b5780()*0.038296);
}

double NNfunction_NN_2_3::synapse0x29b69e0() {
   return (neuron0x29b5ac0()*0.00104776);
}

double NNfunction_NN_2_3::synapse0x29b6a20() {
   return (neuron0x29b5e00()*-0.0242949);
}

double NNfunction_NN_2_3::synapse0x29b4520() {
   return (neuron0x29b6140()*-0.0133134);
}

double NNfunction_NN_2_3::synapse0x29b4560() {
   return (neuron0x29b6480()*-0.000581962);
}

double NNfunction_NN_2_3::synapse0x29c2830() {
   return (neuron0x29b67c0()*3.35211);
}

double NNfunction_NN_2_3::synapse0x29c2bb0() {
   return (neuron0x29b1c00()*0.0116024);
}

double NNfunction_NN_2_3::synapse0x29c2bf0() {
   return (neuron0x29b1f40()*0.00695716);
}

double NNfunction_NN_2_3::synapse0x29c2c30() {
   return (neuron0x29b2280()*0.366326);
}

double NNfunction_NN_2_3::synapse0x29c2c70() {
   return (neuron0x29b25c0()*-0.0427878);
}

double NNfunction_NN_2_3::synapse0x29c2cb0() {
   return (neuron0x29b2900()*0.00533735);
}

double NNfunction_NN_2_3::synapse0x29c2cf0() {
   return (neuron0x29b2c40()*-0.00199956);
}

double NNfunction_NN_2_3::synapse0x29c2d30() {
   return (neuron0x29b2f80()*0.0405189);
}

double NNfunction_NN_2_3::synapse0x29c2d70() {
   return (neuron0x29b32c0()*0.0210408);
}

double NNfunction_NN_2_3::synapse0x29c2db0() {
   return (neuron0x29b3600()*0.0109686);
}

double NNfunction_NN_2_3::synapse0x29c2df0() {
   return (neuron0x29b3940()*-0.0181453);
}

double NNfunction_NN_2_3::synapse0x29c2e30() {
   return (neuron0x29b3c80()*-0.0277469);
}

double NNfunction_NN_2_3::synapse0x29c2e70() {
   return (neuron0x29b3fc0()*0.0494691);
}

double NNfunction_NN_2_3::synapse0x29c2eb0() {
   return (neuron0x29b4300()*-0.0105147);
}

double NNfunction_NN_2_3::synapse0x29c2ef0() {
   return (neuron0x29b4640()*0.0119023);
}

double NNfunction_NN_2_3::synapse0x29c2f30() {
   return (neuron0x29b4980()*0.0376464);
}

double NNfunction_NN_2_3::synapse0x29c2f70() {
   return (neuron0x29b4cc0()*-0.0281835);
}

double NNfunction_NN_2_3::synapse0x29c2a00() {
   return (neuron0x29b5000()*-0.0281049);
}

double NNfunction_NN_2_3::synapse0x29c2a40() {
   return (neuron0x29b5560()*0.020319);
}

double NNfunction_NN_2_3::synapse0x29c30c0() {
   return (neuron0x29b5780()*-0.000880478);
}

double NNfunction_NN_2_3::synapse0x29c3100() {
   return (neuron0x29b5ac0()*-0.0275845);
}

double NNfunction_NN_2_3::synapse0x29c3140() {
   return (neuron0x29b5e00()*-0.0251699);
}

double NNfunction_NN_2_3::synapse0x29c3180() {
   return (neuron0x29b6140()*0.0121983);
}

double NNfunction_NN_2_3::synapse0x29c31c0() {
   return (neuron0x29b6480()*-0.0225575);
}

double NNfunction_NN_2_3::synapse0x29c3200() {
   return (neuron0x29b67c0()*-6.62168);
}

double NNfunction_NN_2_3::synapse0x29c3580() {
   return (neuron0x29b1c00()*-0.0775125);
}

double NNfunction_NN_2_3::synapse0x29c35c0() {
   return (neuron0x29b1f40()*0.0201687);
}

double NNfunction_NN_2_3::synapse0x29c3600() {
   return (neuron0x29b2280()*-0.495996);
}

double NNfunction_NN_2_3::synapse0x29c3640() {
   return (neuron0x29b25c0()*-0.0543243);
}

double NNfunction_NN_2_3::synapse0x29c3680() {
   return (neuron0x29b2900()*-0.0357266);
}

double NNfunction_NN_2_3::synapse0x29c36c0() {
   return (neuron0x29b2c40()*0.0950542);
}

double NNfunction_NN_2_3::synapse0x29c3700() {
   return (neuron0x29b2f80()*-0.0160154);
}

double NNfunction_NN_2_3::synapse0x29c3740() {
   return (neuron0x29b32c0()*-0.0220164);
}

double NNfunction_NN_2_3::synapse0x29c3780() {
   return (neuron0x29b3600()*-0.0327521);
}

double NNfunction_NN_2_3::synapse0x29c37c0() {
   return (neuron0x29b3940()*-0.00481851);
}

double NNfunction_NN_2_3::synapse0x29c3800() {
   return (neuron0x29b3c80()*-0.0677139);
}

double NNfunction_NN_2_3::synapse0x29c3840() {
   return (neuron0x29b3fc0()*-4.76777);
}

double NNfunction_NN_2_3::synapse0x29c3880() {
   return (neuron0x29b4300()*0.0621984);
}

double NNfunction_NN_2_3::synapse0x29c38c0() {
   return (neuron0x29b4640()*-0.0298685);
}

double NNfunction_NN_2_3::synapse0x29c3900() {
   return (neuron0x29b4980()*0.0740518);
}

double NNfunction_NN_2_3::synapse0x29c3940() {
   return (neuron0x29b4cc0()*0.12502);
}

double NNfunction_NN_2_3::synapse0x29c33d0() {
   return (neuron0x29b5000()*-0.0996193);
}

double NNfunction_NN_2_3::synapse0x29c3410() {
   return (neuron0x29b5560()*0.017804);
}

double NNfunction_NN_2_3::synapse0x29c3a90() {
   return (neuron0x29b5780()*-0.00750564);
}

double NNfunction_NN_2_3::synapse0x29c3ad0() {
   return (neuron0x29b5ac0()*-0.0444579);
}

double NNfunction_NN_2_3::synapse0x29c3b10() {
   return (neuron0x29b5e00()*0.0484607);
}

double NNfunction_NN_2_3::synapse0x29c3b50() {
   return (neuron0x29b6140()*-0.0132906);
}

double NNfunction_NN_2_3::synapse0x29c3b90() {
   return (neuron0x29b6480()*0.0344846);
}

double NNfunction_NN_2_3::synapse0x29c3bd0() {
   return (neuron0x29b67c0()*-3.96133);
}

double NNfunction_NN_2_3::synapse0x29c3f50() {
   return (neuron0x29b1c00()*0.362308);
}

double NNfunction_NN_2_3::synapse0x29c3f90() {
   return (neuron0x29b1f40()*0.0843323);
}

double NNfunction_NN_2_3::synapse0x29c3fd0() {
   return (neuron0x29b2280()*0.0362077);
}

double NNfunction_NN_2_3::synapse0x29c4010() {
   return (neuron0x29b25c0()*0.00170162);
}

double NNfunction_NN_2_3::synapse0x29c4050() {
   return (neuron0x29b2900()*0.398314);
}

double NNfunction_NN_2_3::synapse0x29c4090() {
   return (neuron0x29b2c40()*0.293001);
}

double NNfunction_NN_2_3::synapse0x29c40d0() {
   return (neuron0x29b2f80()*0.130139);
}

double NNfunction_NN_2_3::synapse0x29c4110() {
   return (neuron0x29b32c0()*0.277116);
}

double NNfunction_NN_2_3::synapse0x29c4150() {
   return (neuron0x29b3600()*-0.0453812);
}

double NNfunction_NN_2_3::synapse0x29c4190() {
   return (neuron0x29b3940()*-0.0906443);
}

double NNfunction_NN_2_3::synapse0x29c41d0() {
   return (neuron0x29b3c80()*-0.24019);
}

double NNfunction_NN_2_3::synapse0x29c4210() {
   return (neuron0x29b3fc0()*-0.190201);
}

double NNfunction_NN_2_3::synapse0x29c4250() {
   return (neuron0x29b4300()*0.232562);
}

double NNfunction_NN_2_3::synapse0x29c4290() {
   return (neuron0x29b4640()*0.0772302);
}

double NNfunction_NN_2_3::synapse0x29c42d0() {
   return (neuron0x29b4980()*0.386677);
}

double NNfunction_NN_2_3::synapse0x29c4310() {
   return (neuron0x29b4cc0()*0.30271);
}

double NNfunction_NN_2_3::synapse0x29c3da0() {
   return (neuron0x29b5000()*-0.304781);
}

double NNfunction_NN_2_3::synapse0x29c3de0() {
   return (neuron0x29b5560()*-0.0518319);
}

double NNfunction_NN_2_3::synapse0x29c4460() {
   return (neuron0x29b5780()*0.519035);
}

double NNfunction_NN_2_3::synapse0x29c44a0() {
   return (neuron0x29b5ac0()*-0.0148608);
}

double NNfunction_NN_2_3::synapse0x29c44e0() {
   return (neuron0x29b5e00()*-0.498413);
}

double NNfunction_NN_2_3::synapse0x29c4520() {
   return (neuron0x29b6140()*0.254866);
}

double NNfunction_NN_2_3::synapse0x29c4560() {
   return (neuron0x29b6480()*0.0731521);
}

double NNfunction_NN_2_3::synapse0x29c45a0() {
   return (neuron0x29b67c0()*0.880106);
}

double NNfunction_NN_2_3::synapse0x29c4920() {
   return (neuron0x29b1c00()*-0.032197);
}

double NNfunction_NN_2_3::synapse0x29c4960() {
   return (neuron0x29b1f40()*-0.0402405);
}

double NNfunction_NN_2_3::synapse0x29c49a0() {
   return (neuron0x29b2280()*6.5223);
}

double NNfunction_NN_2_3::synapse0x29c49e0() {
   return (neuron0x29b25c0()*0.0107553);
}

double NNfunction_NN_2_3::synapse0x29c4a20() {
   return (neuron0x29b2900()*0.00114357);
}

double NNfunction_NN_2_3::synapse0x29c4a60() {
   return (neuron0x29b2c40()*0.00280325);
}

double NNfunction_NN_2_3::synapse0x29c4aa0() {
   return (neuron0x29b2f80()*-0.00312389);
}

double NNfunction_NN_2_3::synapse0x29c4ae0() {
   return (neuron0x29b32c0()*-0.00780661);
}

double NNfunction_NN_2_3::synapse0x29c4b20() {
   return (neuron0x29b3600()*-0.00522847);
}

double NNfunction_NN_2_3::synapse0x29c4b60() {
   return (neuron0x29b3940()*-0.00219349);
}

double NNfunction_NN_2_3::synapse0x29c4ba0() {
   return (neuron0x29b3c80()*0.0153591);
}

double NNfunction_NN_2_3::synapse0x29c4be0() {
   return (neuron0x29b3fc0()*-0.0306581);
}

double NNfunction_NN_2_3::synapse0x29c4c20() {
   return (neuron0x29b4300()*-0.00224337);
}

double NNfunction_NN_2_3::synapse0x29c4c60() {
   return (neuron0x29b4640()*-0.0228346);
}

double NNfunction_NN_2_3::synapse0x29c4ca0() {
   return (neuron0x29b4980()*0.00249058);
}

double NNfunction_NN_2_3::synapse0x29c4ce0() {
   return (neuron0x29b4cc0()*-1.16682e-05);
}

double NNfunction_NN_2_3::synapse0x29c4770() {
   return (neuron0x29b5000()*0.00044575);
}

double NNfunction_NN_2_3::synapse0x29c47b0() {
   return (neuron0x29b5560()*0.00651972);
}

double NNfunction_NN_2_3::synapse0x29c4e30() {
   return (neuron0x29b5780()*0.0217872);
}

double NNfunction_NN_2_3::synapse0x29c4e70() {
   return (neuron0x29b5ac0()*-0.000827985);
}

double NNfunction_NN_2_3::synapse0x29c4eb0() {
   return (neuron0x29b5e00()*-0.00781311);
}

double NNfunction_NN_2_3::synapse0x29c4ef0() {
   return (neuron0x29b6140()*0.00983235);
}

double NNfunction_NN_2_3::synapse0x29c4f30() {
   return (neuron0x29b6480()*-1.08078e-05);
}

double NNfunction_NN_2_3::synapse0x29c4f70() {
   return (neuron0x29b67c0()*2.39999);
}

double NNfunction_NN_2_3::synapse0x29c52f0() {
   return (neuron0x29b1c00()*-0.204628);
}

double NNfunction_NN_2_3::synapse0x29c5330() {
   return (neuron0x29b1f40()*-0.168448);
}

double NNfunction_NN_2_3::synapse0x29c5370() {
   return (neuron0x29b2280()*0.0313997);
}

double NNfunction_NN_2_3::synapse0x29c53b0() {
   return (neuron0x29b25c0()*0.209969);
}

double NNfunction_NN_2_3::synapse0x29c53f0() {
   return (neuron0x29b2900()*0.175673);
}

double NNfunction_NN_2_3::synapse0x29c5430() {
   return (neuron0x29b2c40()*-0.116483);
}

double NNfunction_NN_2_3::synapse0x29c5470() {
   return (neuron0x29b2f80()*0.354001);
}

double NNfunction_NN_2_3::synapse0x29c54b0() {
   return (neuron0x29b32c0()*0.354649);
}

double NNfunction_NN_2_3::synapse0x29c54f0() {
   return (neuron0x29b3600()*0.118519);
}

double NNfunction_NN_2_3::synapse0x29bd6b0() {
   return (neuron0x29b3940()*0.0150473);
}

double NNfunction_NN_2_3::synapse0x29bd6f0() {
   return (neuron0x29b3c80()*-0.0964304);
}

double NNfunction_NN_2_3::synapse0x29bd730() {
   return (neuron0x29b3fc0()*-0.110237);
}

double NNfunction_NN_2_3::synapse0x29bd770() {
   return (neuron0x29b4300()*-0.296326);
}

double NNfunction_NN_2_3::synapse0x29bd7b0() {
   return (neuron0x29b4640()*-0.228966);
}

double NNfunction_NN_2_3::synapse0x29bd7f0() {
   return (neuron0x29b4980()*-0.0517596);
}

double NNfunction_NN_2_3::synapse0x29bd830() {
   return (neuron0x29b4cc0()*0.486582);
}

double NNfunction_NN_2_3::synapse0x29c5140() {
   return (neuron0x29b5000()*0.33488);
}

double NNfunction_NN_2_3::synapse0x29c5180() {
   return (neuron0x29b5560()*0.129716);
}

double NNfunction_NN_2_3::synapse0x29bd980() {
   return (neuron0x29b5780()*0.350801);
}

double NNfunction_NN_2_3::synapse0x29bd9c0() {
   return (neuron0x29b5ac0()*0.312046);
}

double NNfunction_NN_2_3::synapse0x29bda00() {
   return (neuron0x29b5e00()*0.181525);
}

double NNfunction_NN_2_3::synapse0x29bda40() {
   return (neuron0x29b6140()*0.112042);
}

double NNfunction_NN_2_3::synapse0x29bda80() {
   return (neuron0x29b6480()*-0.341299);
}

double NNfunction_NN_2_3::synapse0x29bdac0() {
   return (neuron0x29b67c0()*0.163021);
}

double NNfunction_NN_2_3::synapse0x29bde40() {
   return (neuron0x29b1c00()*-0.106091);
}

double NNfunction_NN_2_3::synapse0x29bde80() {
   return (neuron0x29b1f40()*5.68332);
}

double NNfunction_NN_2_3::synapse0x29bdec0() {
   return (neuron0x29b2280()*-0.469764);
}

double NNfunction_NN_2_3::synapse0x29bdf00() {
   return (neuron0x29b25c0()*-0.0172229);
}

double NNfunction_NN_2_3::synapse0x29bdf40() {
   return (neuron0x29b2900()*-0.0149388);
}

double NNfunction_NN_2_3::synapse0x29bdf80() {
   return (neuron0x29b2c40()*0.00473799);
}

double NNfunction_NN_2_3::synapse0x29bdfc0() {
   return (neuron0x29b2f80()*-0.000403278);
}

double NNfunction_NN_2_3::synapse0x29be000() {
   return (neuron0x29b32c0()*0.00514796);
}

double NNfunction_NN_2_3::synapse0x29be040() {
   return (neuron0x29b3600()*0.0074644);
}

double NNfunction_NN_2_3::synapse0x29be080() {
   return (neuron0x29b3940()*-0.0260145);
}

double NNfunction_NN_2_3::synapse0x29be0c0() {
   return (neuron0x29b3c80()*-0.0241471);
}

double NNfunction_NN_2_3::synapse0x29be100() {
   return (neuron0x29b3fc0()*0.0227952);
}

double NNfunction_NN_2_3::synapse0x29be140() {
   return (neuron0x29b4300()*0.0210325);
}

double NNfunction_NN_2_3::synapse0x29be180() {
   return (neuron0x29b4640()*0.0321054);
}

double NNfunction_NN_2_3::synapse0x29be1c0() {
   return (neuron0x29b4980()*-0.00189202);
}

double NNfunction_NN_2_3::synapse0x29be200() {
   return (neuron0x29b4cc0()*-0.0337224);
}

double NNfunction_NN_2_3::synapse0x29bdc90() {
   return (neuron0x29b5000()*0.0203049);
}

double NNfunction_NN_2_3::synapse0x29bdcd0() {
   return (neuron0x29b5560()*-0.00527802);
}

double NNfunction_NN_2_3::synapse0x29be350() {
   return (neuron0x29b5780()*-0.00525924);
}

double NNfunction_NN_2_3::synapse0x29be390() {
   return (neuron0x29b5ac0()*-0.00825393);
}

double NNfunction_NN_2_3::synapse0x29be3d0() {
   return (neuron0x29b5e00()*0.0294657);
}

double NNfunction_NN_2_3::synapse0x29be410() {
   return (neuron0x29b6140()*0.00626912);
}

double NNfunction_NN_2_3::synapse0x29be450() {
   return (neuron0x29b6480()*0.01807);
}

double NNfunction_NN_2_3::synapse0x29be490() {
   return (neuron0x29b67c0()*-0.0492711);
}

double NNfunction_NN_2_3::synapse0x29be660() {
   return (neuron0x29b1c00()*-0.0142294);
}

double NNfunction_NN_2_3::synapse0x29c76f0() {
   return (neuron0x29b1f40()*-0.0171045);
}

double NNfunction_NN_2_3::synapse0x29c7730() {
   return (neuron0x29b2280()*3.6623);
}

double NNfunction_NN_2_3::synapse0x29c7770() {
   return (neuron0x29b25c0()*0.0347661);
}

double NNfunction_NN_2_3::synapse0x29c77b0() {
   return (neuron0x29b2900()*-0.0131961);
}

double NNfunction_NN_2_3::synapse0x29c77f0() {
   return (neuron0x29b2c40()*-0.00539972);
}

double NNfunction_NN_2_3::synapse0x29c7830() {
   return (neuron0x29b2f80()*-0.000950313);
}

double NNfunction_NN_2_3::synapse0x29c7870() {
   return (neuron0x29b32c0()*0.0176995);
}

double NNfunction_NN_2_3::synapse0x29c78b0() {
   return (neuron0x29b3600()*-0.0166404);
}

double NNfunction_NN_2_3::synapse0x29c78f0() {
   return (neuron0x29b3940()*0.0145875);
}

double NNfunction_NN_2_3::synapse0x29c7930() {
   return (neuron0x29b3c80()*0.00709782);
}

double NNfunction_NN_2_3::synapse0x29c7970() {
   return (neuron0x29b3fc0()*0.0957392);
}

double NNfunction_NN_2_3::synapse0x29c79b0() {
   return (neuron0x29b4300()*0.00635856);
}

double NNfunction_NN_2_3::synapse0x29c79f0() {
   return (neuron0x29b4640()*0.013431);
}

double NNfunction_NN_2_3::synapse0x29c7a30() {
   return (neuron0x29b4980()*-0.0501253);
}

double NNfunction_NN_2_3::synapse0x29c7a70() {
   return (neuron0x29b4cc0()*-0.01133);
}

double NNfunction_NN_2_3::synapse0x29c7540() {
   return (neuron0x29b5000()*-0.00858849);
}

double NNfunction_NN_2_3::synapse0x29c7580() {
   return (neuron0x29b5560()*0.0104848);
}

double NNfunction_NN_2_3::synapse0x29c7bc0() {
   return (neuron0x29b5780()*0.027897);
}

double NNfunction_NN_2_3::synapse0x29c7c00() {
   return (neuron0x29b5ac0()*0.00739283);
}

double NNfunction_NN_2_3::synapse0x29c7c40() {
   return (neuron0x29b5e00()*-0.0258538);
}

double NNfunction_NN_2_3::synapse0x29c7c80() {
   return (neuron0x29b6140()*-0.00245749);
}

double NNfunction_NN_2_3::synapse0x29c7cc0() {
   return (neuron0x29b6480()*0.00025265);
}

double NNfunction_NN_2_3::synapse0x29c7d00() {
   return (neuron0x29b67c0()*0.666601);
}

double NNfunction_NN_2_3::synapse0x29c8080() {
   return (neuron0x29b1c00()*-0.130499);
}

double NNfunction_NN_2_3::synapse0x29c80c0() {
   return (neuron0x29b1f40()*-0.020679);
}

double NNfunction_NN_2_3::synapse0x29c8100() {
   return (neuron0x29b2280()*-0.0973889);
}

double NNfunction_NN_2_3::synapse0x29c8140() {
   return (neuron0x29b25c0()*-0.360969);
}

double NNfunction_NN_2_3::synapse0x29c8180() {
   return (neuron0x29b2900()*0.0801219);
}

double NNfunction_NN_2_3::synapse0x29c81c0() {
   return (neuron0x29b2c40()*0.119823);
}

double NNfunction_NN_2_3::synapse0x29c8200() {
   return (neuron0x29b2f80()*-0.0307855);
}

double NNfunction_NN_2_3::synapse0x29c8240() {
   return (neuron0x29b32c0()*0.0646495);
}

double NNfunction_NN_2_3::synapse0x29c8280() {
   return (neuron0x29b3600()*0.0514985);
}

double NNfunction_NN_2_3::synapse0x29c82c0() {
   return (neuron0x29b3940()*0.184638);
}

double NNfunction_NN_2_3::synapse0x29c8300() {
   return (neuron0x29b3c80()*0.105407);
}

double NNfunction_NN_2_3::synapse0x29c8340() {
   return (neuron0x29b3fc0()*0.00963965);
}

double NNfunction_NN_2_3::synapse0x29c8380() {
   return (neuron0x29b4300()*0.165219);
}

double NNfunction_NN_2_3::synapse0x29c83c0() {
   return (neuron0x29b4640()*-0.197253);
}

double NNfunction_NN_2_3::synapse0x29c8400() {
   return (neuron0x29b4980()*-0.0352952);
}

double NNfunction_NN_2_3::synapse0x29c8440() {
   return (neuron0x29b4cc0()*-0.191178);
}

double NNfunction_NN_2_3::synapse0x29c7ed0() {
   return (neuron0x29b5000()*-0.17771);
}

double NNfunction_NN_2_3::synapse0x29c7f10() {
   return (neuron0x29b5560()*0.145627);
}

double NNfunction_NN_2_3::synapse0x29c8590() {
   return (neuron0x29b5780()*0.0219045);
}

double NNfunction_NN_2_3::synapse0x29c85d0() {
   return (neuron0x29b5ac0()*-0.307298);
}

double NNfunction_NN_2_3::synapse0x29c8610() {
   return (neuron0x29b5e00()*0.0208297);
}

double NNfunction_NN_2_3::synapse0x29c8650() {
   return (neuron0x29b6140()*0.104333);
}

double NNfunction_NN_2_3::synapse0x29c8690() {
   return (neuron0x29b6480()*-0.0972139);
}

double NNfunction_NN_2_3::synapse0x29c86d0() {
   return (neuron0x29b67c0()*0.653257);
}

double NNfunction_NN_2_3::synapse0x29c8a50() {
   return (neuron0x29b1c00()*0.0234598);
}

double NNfunction_NN_2_3::synapse0x29c8a90() {
   return (neuron0x29b1f40()*0.0263481);
}

double NNfunction_NN_2_3::synapse0x29c8ad0() {
   return (neuron0x29b2280()*-0.0565618);
}

double NNfunction_NN_2_3::synapse0x29c8b10() {
   return (neuron0x29b25c0()*-0.040297);
}

double NNfunction_NN_2_3::synapse0x29c8b50() {
   return (neuron0x29b2900()*0.0297826);
}

double NNfunction_NN_2_3::synapse0x29c8b90() {
   return (neuron0x29b2c40()*0.0371836);
}

double NNfunction_NN_2_3::synapse0x29c8bd0() {
   return (neuron0x29b2f80()*-0.0159759);
}

double NNfunction_NN_2_3::synapse0x29c8c10() {
   return (neuron0x29b32c0()*0.0259003);
}

double NNfunction_NN_2_3::synapse0x29c8c50() {
   return (neuron0x29b3600()*-0.0454604);
}

double NNfunction_NN_2_3::synapse0x29c8c90() {
   return (neuron0x29b3940()*-0.0050866);
}

double NNfunction_NN_2_3::synapse0x29c8cd0() {
   return (neuron0x29b3c80()*-0.0472672);
}

double NNfunction_NN_2_3::synapse0x29c8d10() {
   return (neuron0x29b3fc0()*-0.183885);
}

double NNfunction_NN_2_3::synapse0x29c8d50() {
   return (neuron0x29b4300()*-0.016942);
}

double NNfunction_NN_2_3::synapse0x29c8d90() {
   return (neuron0x29b4640()*-0.0174532);
}

double NNfunction_NN_2_3::synapse0x29c8dd0() {
   return (neuron0x29b4980()*0.112808);
}

double NNfunction_NN_2_3::synapse0x29c8e10() {
   return (neuron0x29b4cc0()*-0.0256115);
}

double NNfunction_NN_2_3::synapse0x29c88a0() {
   return (neuron0x29b5000()*-0.0239787);
}

double NNfunction_NN_2_3::synapse0x29c88e0() {
   return (neuron0x29b5560()*-0.00118469);
}

double NNfunction_NN_2_3::synapse0x29c8f60() {
   return (neuron0x29b5780()*0.0143136);
}

double NNfunction_NN_2_3::synapse0x29c8fa0() {
   return (neuron0x29b5ac0()*-0.053172);
}

double NNfunction_NN_2_3::synapse0x29c8fe0() {
   return (neuron0x29b5e00()*-0.00840513);
}

double NNfunction_NN_2_3::synapse0x29c9020() {
   return (neuron0x29b6140()*-0.0234917);
}

double NNfunction_NN_2_3::synapse0x29c9060() {
   return (neuron0x29b6480()*0.027468);
}

double NNfunction_NN_2_3::synapse0x29c90a0() {
   return (neuron0x29b67c0()*-0.656809);
}

double NNfunction_NN_2_3::synapse0x29c9420() {
   return (neuron0x29b1c00()*0.23238);
}

double NNfunction_NN_2_3::synapse0x29c9460() {
   return (neuron0x29b1f40()*0.0130104);
}

double NNfunction_NN_2_3::synapse0x29c94a0() {
   return (neuron0x29b2280()*-0.0658201);
}

double NNfunction_NN_2_3::synapse0x29c94e0() {
   return (neuron0x29b25c0()*-0.0421403);
}

double NNfunction_NN_2_3::synapse0x29c9520() {
   return (neuron0x29b2900()*-0.40934);
}

double NNfunction_NN_2_3::synapse0x29c9560() {
   return (neuron0x29b2c40()*0.0175797);
}

double NNfunction_NN_2_3::synapse0x29c95a0() {
   return (neuron0x29b2f80()*-0.0200484);
}

double NNfunction_NN_2_3::synapse0x29c95e0() {
   return (neuron0x29b32c0()*0.00629709);
}

double NNfunction_NN_2_3::synapse0x29c9620() {
   return (neuron0x29b3600()*0.0423857);
}

double NNfunction_NN_2_3::synapse0x29c9660() {
   return (neuron0x29b3940()*-0.506451);
}

double NNfunction_NN_2_3::synapse0x29c96a0() {
   return (neuron0x29b3c80()*0.0409878);
}

double NNfunction_NN_2_3::synapse0x29c96e0() {
   return (neuron0x29b3fc0()*0.18712);
}

double NNfunction_NN_2_3::synapse0x29c9720() {
   return (neuron0x29b4300()*0.18593);
}

double NNfunction_NN_2_3::synapse0x29c9760() {
   return (neuron0x29b4640()*-0.255248);
}

double NNfunction_NN_2_3::synapse0x29c97a0() {
   return (neuron0x29b4980()*0.037257);
}

double NNfunction_NN_2_3::synapse0x29c97e0() {
   return (neuron0x29b4cc0()*0.457709);
}

double NNfunction_NN_2_3::synapse0x29c9270() {
   return (neuron0x29b5000()*-0.0892727);
}

double NNfunction_NN_2_3::synapse0x29c92b0() {
   return (neuron0x29b5560()*0.0275248);
}

double NNfunction_NN_2_3::synapse0x29c9930() {
   return (neuron0x29b5780()*-0.0710606);
}

double NNfunction_NN_2_3::synapse0x29c9970() {
   return (neuron0x29b5ac0()*-0.131614);
}

double NNfunction_NN_2_3::synapse0x29c99b0() {
   return (neuron0x29b5e00()*0.201057);
}

double NNfunction_NN_2_3::synapse0x29c99f0() {
   return (neuron0x29b6140()*-0.182959);
}

double NNfunction_NN_2_3::synapse0x29c9a30() {
   return (neuron0x29b6480()*-0.588003);
}

double NNfunction_NN_2_3::synapse0x29c9a70() {
   return (neuron0x29b67c0()*-0.655919);
}

double NNfunction_NN_2_3::synapse0x29c9df0() {
   return (neuron0x29b1c00()*-0.0217101);
}

double NNfunction_NN_2_3::synapse0x29c9e30() {
   return (neuron0x29b1f40()*-0.504715);
}

double NNfunction_NN_2_3::synapse0x29c9e70() {
   return (neuron0x29b2280()*0.297568);
}

double NNfunction_NN_2_3::synapse0x29c9eb0() {
   return (neuron0x29b25c0()*0.0244436);
}

double NNfunction_NN_2_3::synapse0x29c9ef0() {
   return (neuron0x29b2900()*0.0598858);
}

double NNfunction_NN_2_3::synapse0x29c9f30() {
   return (neuron0x29b2c40()*0.00805181);
}

double NNfunction_NN_2_3::synapse0x29c9f70() {
   return (neuron0x29b2f80()*0.0143285);
}

double NNfunction_NN_2_3::synapse0x29c9fb0() {
   return (neuron0x29b32c0()*0.0119764);
}

double NNfunction_NN_2_3::synapse0x29c9ff0() {
   return (neuron0x29b3600()*0.0308117);
}

double NNfunction_NN_2_3::synapse0x29ca030() {
   return (neuron0x29b3940()*-0.0160179);
}

double NNfunction_NN_2_3::synapse0x29ca070() {
   return (neuron0x29b3c80()*-0.00815421);
}

double NNfunction_NN_2_3::synapse0x29ca0b0() {
   return (neuron0x29b3fc0()*-0.0444058);
}

double NNfunction_NN_2_3::synapse0x29ca0f0() {
   return (neuron0x29b4300()*0.00560035);
}

double NNfunction_NN_2_3::synapse0x29ca130() {
   return (neuron0x29b4640()*-0.0144044);
}

double NNfunction_NN_2_3::synapse0x29ca170() {
   return (neuron0x29b4980()*0.109442);
}

double NNfunction_NN_2_3::synapse0x29ca1b0() {
   return (neuron0x29b4cc0()*-0.00796124);
}

double NNfunction_NN_2_3::synapse0x29c9c40() {
   return (neuron0x29b5000()*0.0510263);
}

double NNfunction_NN_2_3::synapse0x29c9c80() {
   return (neuron0x29b5560()*0.0445098);
}

double NNfunction_NN_2_3::synapse0x29ca300() {
   return (neuron0x29b5780()*-0.0254544);
}

double NNfunction_NN_2_3::synapse0x29ca340() {
   return (neuron0x29b5ac0()*0.0101906);
}

double NNfunction_NN_2_3::synapse0x29ca380() {
   return (neuron0x29b5e00()*-0.049471);
}

double NNfunction_NN_2_3::synapse0x29ca3c0() {
   return (neuron0x29b6140()*-0.00863588);
}

double NNfunction_NN_2_3::synapse0x29ca400() {
   return (neuron0x29b6480()*0.00681846);
}

double NNfunction_NN_2_3::synapse0x29ca440() {
   return (neuron0x29b67c0()*2.88147);
}

double NNfunction_NN_2_3::synapse0x29ca7c0() {
   return (neuron0x29b1c00()*0.0199738);
}

double NNfunction_NN_2_3::synapse0x29ca800() {
   return (neuron0x29b1f40()*-22.3924);
}

double NNfunction_NN_2_3::synapse0x29ca840() {
   return (neuron0x29b2280()*0.124326);
}

double NNfunction_NN_2_3::synapse0x29ca880() {
   return (neuron0x29b25c0()*0.000547573);
}

double NNfunction_NN_2_3::synapse0x29ca8c0() {
   return (neuron0x29b2900()*-0.0420296);
}

double NNfunction_NN_2_3::synapse0x29ca900() {
   return (neuron0x29b2c40()*-0.00269369);
}

double NNfunction_NN_2_3::synapse0x29ca940() {
   return (neuron0x29b2f80()*-0.0493561);
}

double NNfunction_NN_2_3::synapse0x29ca980() {
   return (neuron0x29b32c0()*-0.0233824);
}

double NNfunction_NN_2_3::synapse0x29ca9c0() {
   return (neuron0x29b3600()*-0.0160178);
}

double NNfunction_NN_2_3::synapse0x29caa00() {
   return (neuron0x29b3940()*-0.0210918);
}

double NNfunction_NN_2_3::synapse0x29caa40() {
   return (neuron0x29b3c80()*0.0137172);
}

double NNfunction_NN_2_3::synapse0x29caa80() {
   return (neuron0x29b3fc0()*0.0172889);
}

double NNfunction_NN_2_3::synapse0x29caac0() {
   return (neuron0x29b4300()*-0.00898479);
}

double NNfunction_NN_2_3::synapse0x29cab00() {
   return (neuron0x29b4640()*-0.00485567);
}

double NNfunction_NN_2_3::synapse0x29cab40() {
   return (neuron0x29b4980()*-0.0303242);
}

double NNfunction_NN_2_3::synapse0x29cab80() {
   return (neuron0x29b4cc0()*-0.00099131);
}

double NNfunction_NN_2_3::synapse0x29ca610() {
   return (neuron0x29b5000()*0.00854362);
}

double NNfunction_NN_2_3::synapse0x29ca650() {
   return (neuron0x29b5560()*-0.0150853);
}

double NNfunction_NN_2_3::synapse0x29cacd0() {
   return (neuron0x29b5780()*0.0301157);
}

double NNfunction_NN_2_3::synapse0x29cad10() {
   return (neuron0x29b5ac0()*0.00336403);
}

double NNfunction_NN_2_3::synapse0x29cad50() {
   return (neuron0x29b5e00()*0.0347652);
}

double NNfunction_NN_2_3::synapse0x29cad90() {
   return (neuron0x29b6140()*-0.00880218);
}

double NNfunction_NN_2_3::synapse0x29cadd0() {
   return (neuron0x29b6480()*-0.0161508);
}

double NNfunction_NN_2_3::synapse0x29cae10() {
   return (neuron0x29b67c0()*-1.14395);
}

double NNfunction_NN_2_3::synapse0x29cb190() {
   return (neuron0x29b1c00()*0.0154289);
}

double NNfunction_NN_2_3::synapse0x29cb1d0() {
   return (neuron0x29b1f40()*0.0309241);
}

double NNfunction_NN_2_3::synapse0x29cb210() {
   return (neuron0x29b2280()*7.88306);
}

double NNfunction_NN_2_3::synapse0x29cb250() {
   return (neuron0x29b25c0()*-0.0480369);
}

double NNfunction_NN_2_3::synapse0x29cb290() {
   return (neuron0x29b2900()*0.0225272);
}

double NNfunction_NN_2_3::synapse0x29cb2d0() {
   return (neuron0x29b2c40()*-0.0240816);
}

double NNfunction_NN_2_3::synapse0x29cb310() {
   return (neuron0x29b2f80()*0.0141059);
}

double NNfunction_NN_2_3::synapse0x29cb350() {
   return (neuron0x29b32c0()*-0.0258594);
}

double NNfunction_NN_2_3::synapse0x29cb390() {
   return (neuron0x29b3600()*-0.0263378);
}

double NNfunction_NN_2_3::synapse0x29cb3d0() {
   return (neuron0x29b3940()*-0.0314644);
}

double NNfunction_NN_2_3::synapse0x29cb410() {
   return (neuron0x29b3c80()*-0.0199069);
}

double NNfunction_NN_2_3::synapse0x29cb450() {
   return (neuron0x29b3fc0()*-0.00953344);
}

double NNfunction_NN_2_3::synapse0x29cb490() {
   return (neuron0x29b4300()*0.0245642);
}

double NNfunction_NN_2_3::synapse0x29cb4d0() {
   return (neuron0x29b4640()*-0.0175419);
}

double NNfunction_NN_2_3::synapse0x29cb510() {
   return (neuron0x29b4980()*0.002108);
}

double NNfunction_NN_2_3::synapse0x29cb550() {
   return (neuron0x29b4cc0()*0.00465414);
}

double NNfunction_NN_2_3::synapse0x29cafe0() {
   return (neuron0x29b5000()*0.0134195);
}

double NNfunction_NN_2_3::synapse0x29cb020() {
   return (neuron0x29b5560()*0.00335327);
}

double NNfunction_NN_2_3::synapse0x29cb6a0() {
   return (neuron0x29b5780()*0.00358953);
}

double NNfunction_NN_2_3::synapse0x29cb6e0() {
   return (neuron0x29b5ac0()*-0.00151651);
}

double NNfunction_NN_2_3::synapse0x29cb720() {
   return (neuron0x29b5e00()*-0.0257883);
}

double NNfunction_NN_2_3::synapse0x29cb760() {
   return (neuron0x29b6140()*-0.00674146);
}

double NNfunction_NN_2_3::synapse0x29cb7a0() {
   return (neuron0x29b6480()*-0.00752443);
}

double NNfunction_NN_2_3::synapse0x29cb7e0() {
   return (neuron0x29b67c0()*-0.496194);
}

double NNfunction_NN_2_3::synapse0x29cbb60() {
   return (neuron0x29b1c00()*-0.0290188);
}

double NNfunction_NN_2_3::synapse0x29cbba0() {
   return (neuron0x29b1f40()*-0.265567);
}

double NNfunction_NN_2_3::synapse0x29cbbe0() {
   return (neuron0x29b2280()*-0.0662487);
}

double NNfunction_NN_2_3::synapse0x29cbc20() {
   return (neuron0x29b25c0()*0.273243);
}

double NNfunction_NN_2_3::synapse0x29cbc60() {
   return (neuron0x29b2900()*-0.148854);
}

double NNfunction_NN_2_3::synapse0x29cbca0() {
   return (neuron0x29b2c40()*-0.037794);
}

double NNfunction_NN_2_3::synapse0x29cbce0() {
   return (neuron0x29b2f80()*-0.224305);
}

double NNfunction_NN_2_3::synapse0x29cbd20() {
   return (neuron0x29b32c0()*-0.0178197);
}

double NNfunction_NN_2_3::synapse0x29cbd60() {
   return (neuron0x29b3600()*-0.0466975);
}

double NNfunction_NN_2_3::synapse0x29cbda0() {
   return (neuron0x29b3940()*0.193616);
}

double NNfunction_NN_2_3::synapse0x29cbde0() {
   return (neuron0x29b3c80()*0.0202462);
}

double NNfunction_NN_2_3::synapse0x29cbe20() {
   return (neuron0x29b3fc0()*-0.27752);
}

double NNfunction_NN_2_3::synapse0x29cbe60() {
   return (neuron0x29b4300()*-0.351559);
}

double NNfunction_NN_2_3::synapse0x29cbea0() {
   return (neuron0x29b4640()*0.432021);
}

double NNfunction_NN_2_3::synapse0x29cbee0() {
   return (neuron0x29b4980()*0.214695);
}

double NNfunction_NN_2_3::synapse0x29cbf20() {
   return (neuron0x29b4cc0()*-0.112616);
}

double NNfunction_NN_2_3::synapse0x29cb9b0() {
   return (neuron0x29b5000()*-0.144796);
}

double NNfunction_NN_2_3::synapse0x29cb9f0() {
   return (neuron0x29b5560()*0.638832);
}

double NNfunction_NN_2_3::synapse0x29cc070() {
   return (neuron0x29b5780()*-0.376513);
}

double NNfunction_NN_2_3::synapse0x29cc0b0() {
   return (neuron0x29b5ac0()*0.159216);
}

double NNfunction_NN_2_3::synapse0x29cc0f0() {
   return (neuron0x29b5e00()*-0.0764894);
}

double NNfunction_NN_2_3::synapse0x29cc130() {
   return (neuron0x29b6140()*-0.496695);
}

double NNfunction_NN_2_3::synapse0x29cc170() {
   return (neuron0x29b6480()*0.147259);
}

double NNfunction_NN_2_3::synapse0x29cc1b0() {
   return (neuron0x29b67c0()*0.0395587);
}

double NNfunction_NN_2_3::synapse0x29cc530() {
   return (neuron0x29b1c00()*-0.030203);
}

double NNfunction_NN_2_3::synapse0x29c0b00() {
   return (neuron0x29b1f40()*0.0568293);
}

double NNfunction_NN_2_3::synapse0x29c0b40() {
   return (neuron0x29b2280()*-0.227832);
}

double NNfunction_NN_2_3::synapse0x29c0b80() {
   return (neuron0x29b25c0()*0.247711);
}

double NNfunction_NN_2_3::synapse0x29c0dd0() {
   return (neuron0x29b2900()*0.068544);
}

double NNfunction_NN_2_3::synapse0x29c0e10() {
   return (neuron0x29b2c40()*-0.0763076);
}

double NNfunction_NN_2_3::synapse0x29c0e50() {
   return (neuron0x29b2f80()*0.0565768);
}

double NNfunction_NN_2_3::synapse0x29c10a0() {
   return (neuron0x29b32c0()*-0.0884432);
}

double NNfunction_NN_2_3::synapse0x29c10e0() {
   return (neuron0x29b3600()*-0.0232605);
}

double NNfunction_NN_2_3::synapse0x29c1330() {
   return (neuron0x29b3940()*0.0133844);
}

double NNfunction_NN_2_3::synapse0x29c1370() {
   return (neuron0x29b3c80()*0.0994516);
}

double NNfunction_NN_2_3::synapse0x29c13b0() {
   return (neuron0x29b3fc0()*0.091249);
}

double NNfunction_NN_2_3::synapse0x29c1600() {
   return (neuron0x29b4300()*-0.0529719);
}

double NNfunction_NN_2_3::synapse0x29c1640() {
   return (neuron0x29b4640()*-0.0192978);
}

double NNfunction_NN_2_3::synapse0x29c1890() {
   return (neuron0x29b4980()*-0.0286106);
}

double NNfunction_NN_2_3::synapse0x29c18d0() {
   return (neuron0x29b4cc0()*0.0551399);
}

double NNfunction_NN_2_3::synapse0x29cc380() {
   return (neuron0x29b5000()*-0.0928224);
}

double NNfunction_NN_2_3::synapse0x29cc3c0() {
   return (neuron0x29b5560()*0.0379299);
}

double NNfunction_NN_2_3::synapse0x29c1a20() {
   return (neuron0x29b5780()*0.109366);
}

double NNfunction_NN_2_3::synapse0x29c1f30() {
   return (neuron0x29b5ac0()*-0.0524952);
}

double NNfunction_NN_2_3::synapse0x29c1f70() {
   return (neuron0x29b5e00()*0.0220056);
}

double NNfunction_NN_2_3::synapse0x29c1fb0() {
   return (neuron0x29b6140()*0.025083);
}

double NNfunction_NN_2_3::synapse0x29c2200() {
   return (neuron0x29b6480()*-0.0840565);
}

double NNfunction_NN_2_3::synapse0x29c2240() {
   return (neuron0x29b67c0()*0.264707);
}

double NNfunction_NN_2_3::synapse0x29c1af0() {
   return (neuron0x29b1c00()*0.0190828);
}

double NNfunction_NN_2_3::synapse0x29c1b30() {
   return (neuron0x29b1f40()*-0.0268762);
}

double NNfunction_NN_2_3::synapse0x29c1b70() {
   return (neuron0x29b2280()*3.72763);
}

double NNfunction_NN_2_3::synapse0x29c1bb0() {
   return (neuron0x29b25c0()*0.00784934);
}

double NNfunction_NN_2_3::synapse0x29c2530() {
   return (neuron0x29b2900()*0.0511907);
}

double NNfunction_NN_2_3::synapse0x29ce880() {
   return (neuron0x29b2c40()*-0.00220151);
}

double NNfunction_NN_2_3::synapse0x29ce8c0() {
   return (neuron0x29b2f80()*0.0426362);
}

double NNfunction_NN_2_3::synapse0x29ce900() {
   return (neuron0x29b32c0()*-0.00164644);
}

double NNfunction_NN_2_3::synapse0x29ce940() {
   return (neuron0x29b3600()*-0.0101486);
}

double NNfunction_NN_2_3::synapse0x29ce980() {
   return (neuron0x29b3940()*-0.00537478);
}

double NNfunction_NN_2_3::synapse0x29ce9c0() {
   return (neuron0x29b3c80()*0.0196344);
}

double NNfunction_NN_2_3::synapse0x29cea00() {
   return (neuron0x29b3fc0()*-0.0874939);
}

double NNfunction_NN_2_3::synapse0x29cea40() {
   return (neuron0x29b4300()*-0.0416158);
}

double NNfunction_NN_2_3::synapse0x29cea80() {
   return (neuron0x29b4640()*-0.0333869);
}

double NNfunction_NN_2_3::synapse0x29ceac0() {
   return (neuron0x29b4980()*0.0640423);
}

double NNfunction_NN_2_3::synapse0x29ceb00() {
   return (neuron0x29b4cc0()*0.0145441);
}

double NNfunction_NN_2_3::synapse0x29c2410() {
   return (neuron0x29b5000()*-0.0352499);
}

double NNfunction_NN_2_3::synapse0x29c2450() {
   return (neuron0x29b5560()*0.0439655);
}

double NNfunction_NN_2_3::synapse0x29cec50() {
   return (neuron0x29b5780()*0.034494);
}

double NNfunction_NN_2_3::synapse0x29cec90() {
   return (neuron0x29b5ac0()*-0.0186757);
}

double NNfunction_NN_2_3::synapse0x29cecd0() {
   return (neuron0x29b5e00()*-0.0424164);
}

double NNfunction_NN_2_3::synapse0x29ced10() {
   return (neuron0x29b6140()*-0.0218235);
}

double NNfunction_NN_2_3::synapse0x29ced50() {
   return (neuron0x29b6480()*0.0129531);
}

double NNfunction_NN_2_3::synapse0x29ced90() {
   return (neuron0x29b67c0()*-1.16491);
}

double NNfunction_NN_2_3::synapse0x29cf110() {
   return (neuron0x29b1c00()*-0.0433357);
}

double NNfunction_NN_2_3::synapse0x29cf150() {
   return (neuron0x29b1f40()*-7.03714);
}

double NNfunction_NN_2_3::synapse0x29cf190() {
   return (neuron0x29b2280()*-0.458372);
}

double NNfunction_NN_2_3::synapse0x29cf1d0() {
   return (neuron0x29b25c0()*-0.0134679);
}

double NNfunction_NN_2_3::synapse0x29cf210() {
   return (neuron0x29b2900()*-0.00766242);
}

double NNfunction_NN_2_3::synapse0x29cf250() {
   return (neuron0x29b2c40()*0.00946722);
}

double NNfunction_NN_2_3::synapse0x29cf290() {
   return (neuron0x29b2f80()*0.00443525);
}

double NNfunction_NN_2_3::synapse0x29cf2d0() {
   return (neuron0x29b32c0()*0.00509557);
}

double NNfunction_NN_2_3::synapse0x29cf310() {
   return (neuron0x29b3600()*0.00100218);
}

double NNfunction_NN_2_3::synapse0x29cf350() {
   return (neuron0x29b3940()*-0.00554258);
}

double NNfunction_NN_2_3::synapse0x29cf390() {
   return (neuron0x29b3c80()*-0.0140669);
}

double NNfunction_NN_2_3::synapse0x29cf3d0() {
   return (neuron0x29b3fc0()*0.00379056);
}

double NNfunction_NN_2_3::synapse0x29cf410() {
   return (neuron0x29b4300()*0.0182653);
}

double NNfunction_NN_2_3::synapse0x29cf450() {
   return (neuron0x29b4640()*0.0189034);
}

double NNfunction_NN_2_3::synapse0x29cf490() {
   return (neuron0x29b4980()*0.00512779);
}

double NNfunction_NN_2_3::synapse0x29cf4d0() {
   return (neuron0x29b4cc0()*-0.0204423);
}

double NNfunction_NN_2_3::synapse0x29cef60() {
   return (neuron0x29b5000()*0.00609291);
}

double NNfunction_NN_2_3::synapse0x29cefa0() {
   return (neuron0x29b5560()*-0.00909193);
}

double NNfunction_NN_2_3::synapse0x29cf620() {
   return (neuron0x29b5780()*-0.00122812);
}

double NNfunction_NN_2_3::synapse0x29cf660() {
   return (neuron0x29b5ac0()*0.00237945);
}

double NNfunction_NN_2_3::synapse0x29cf6a0() {
   return (neuron0x29b5e00()*0.0025605);
}

double NNfunction_NN_2_3::synapse0x29cf6e0() {
   return (neuron0x29b6140()*0.00464268);
}

double NNfunction_NN_2_3::synapse0x29cf720() {
   return (neuron0x29b6480()*0.00609584);
}

double NNfunction_NN_2_3::synapse0x29cf760() {
   return (neuron0x29b67c0()*0.290689);
}

double NNfunction_NN_2_3::synapse0x29cfae0() {
   return (neuron0x29b1c00()*-0.0198385);
}

double NNfunction_NN_2_3::synapse0x29cfb20() {
   return (neuron0x29b1f40()*0.0226354);
}

double NNfunction_NN_2_3::synapse0x29cfb60() {
   return (neuron0x29b2280()*-0.0308392);
}

double NNfunction_NN_2_3::synapse0x29cfba0() {
   return (neuron0x29b25c0()*0.0250408);
}

double NNfunction_NN_2_3::synapse0x29cfbe0() {
   return (neuron0x29b2900()*-0.0422228);
}

double NNfunction_NN_2_3::synapse0x29cfc20() {
   return (neuron0x29b2c40()*-0.0242088);
}

double NNfunction_NN_2_3::synapse0x29cfc60() {
   return (neuron0x29b2f80()*-0.0190127);
}

double NNfunction_NN_2_3::synapse0x29cfca0() {
   return (neuron0x29b32c0()*-0.022346);
}

double NNfunction_NN_2_3::synapse0x29cfce0() {
   return (neuron0x29b3600()*0.0183692);
}

double NNfunction_NN_2_3::synapse0x29cfd20() {
   return (neuron0x29b3940()*0.00309137);
}

double NNfunction_NN_2_3::synapse0x29cfd60() {
   return (neuron0x29b3c80()*0.0357969);
}

double NNfunction_NN_2_3::synapse0x29cfda0() {
   return (neuron0x29b3fc0()*0.409315);
}

double NNfunction_NN_2_3::synapse0x29cfde0() {
   return (neuron0x29b4300()*-0.013695);
}

double NNfunction_NN_2_3::synapse0x29cfe20() {
   return (neuron0x29b4640()*0.0246643);
}

double NNfunction_NN_2_3::synapse0x29cfe60() {
   return (neuron0x29b4980()*-0.0460412);
}

double NNfunction_NN_2_3::synapse0x29cfea0() {
   return (neuron0x29b4cc0()*0.0243971);
}

double NNfunction_NN_2_3::synapse0x29cf930() {
   return (neuron0x29b5000()*-0.0330425);
}

double NNfunction_NN_2_3::synapse0x29cf970() {
   return (neuron0x29b5560()*0.0295991);
}

double NNfunction_NN_2_3::synapse0x29cfff0() {
   return (neuron0x29b5780()*0.0666308);
}

double NNfunction_NN_2_3::synapse0x29d0030() {
   return (neuron0x29b5ac0()*0.00757087);
}

double NNfunction_NN_2_3::synapse0x29d0070() {
   return (neuron0x29b5e00()*-0.0114125);
}

double NNfunction_NN_2_3::synapse0x29d00b0() {
   return (neuron0x29b6140()*0.0186623);
}

double NNfunction_NN_2_3::synapse0x29d00f0() {
   return (neuron0x29b6480()*-0.0275262);
}

double NNfunction_NN_2_3::synapse0x29d0130() {
   return (neuron0x29b67c0()*-3.4159);
}

double NNfunction_NN_2_3::synapse0x29d04b0() {
   return (neuron0x29b1c00()*0.0188435);
}

double NNfunction_NN_2_3::synapse0x29d04f0() {
   return (neuron0x29b1f40()*-4.64777);
}

double NNfunction_NN_2_3::synapse0x29d0530() {
   return (neuron0x29b2280()*5.54506);
}

double NNfunction_NN_2_3::synapse0x29d0570() {
   return (neuron0x29b25c0()*-0.0816987);
}

double NNfunction_NN_2_3::synapse0x29d05b0() {
   return (neuron0x29b2900()*0.065365);
}

double NNfunction_NN_2_3::synapse0x29d05f0() {
   return (neuron0x29b2c40()*-0.0220022);
}

double NNfunction_NN_2_3::synapse0x29d0630() {
   return (neuron0x29b2f80()*0.0308152);
}

double NNfunction_NN_2_3::synapse0x29d0670() {
   return (neuron0x29b32c0()*-0.0157658);
}

double NNfunction_NN_2_3::synapse0x29d06b0() {
   return (neuron0x29b3600()*-0.0244389);
}

double NNfunction_NN_2_3::synapse0x29d06f0() {
   return (neuron0x29b3940()*-0.0839677);
}

double NNfunction_NN_2_3::synapse0x29d0730() {
   return (neuron0x29b3c80()*-0.019257);
}

double NNfunction_NN_2_3::synapse0x29d0770() {
   return (neuron0x29b3fc0()*0.0105249);
}

double NNfunction_NN_2_3::synapse0x29d07b0() {
   return (neuron0x29b4300()*-0.0224237);
}

double NNfunction_NN_2_3::synapse0x29d07f0() {
   return (neuron0x29b4640()*-0.0208427);
}

double NNfunction_NN_2_3::synapse0x29d0830() {
   return (neuron0x29b4980()*0.083426);
}

double NNfunction_NN_2_3::synapse0x29d0870() {
   return (neuron0x29b4cc0()*0.0258459);
}

double NNfunction_NN_2_3::synapse0x29d0300() {
   return (neuron0x29b5000()*0.0445897);
}

double NNfunction_NN_2_3::synapse0x29d0340() {
   return (neuron0x29b5560()*-0.0083522);
}

double NNfunction_NN_2_3::synapse0x29d09c0() {
   return (neuron0x29b5780()*0.0802157);
}

double NNfunction_NN_2_3::synapse0x29d0a00() {
   return (neuron0x29b5ac0()*0.0066997);
}

double NNfunction_NN_2_3::synapse0x29d0a40() {
   return (neuron0x29b5e00()*-0.0458981);
}

double NNfunction_NN_2_3::synapse0x29d0a80() {
   return (neuron0x29b6140()*0.0293572);
}

double NNfunction_NN_2_3::synapse0x29d0ac0() {
   return (neuron0x29b6480()*-0.0246414);
}

double NNfunction_NN_2_3::synapse0x29d0b00() {
   return (neuron0x29b67c0()*1.49498);
}

double NNfunction_NN_2_3::synapse0x29d0e80() {
   return (neuron0x29b1c00()*-0.0142884);
}

double NNfunction_NN_2_3::synapse0x29d0ec0() {
   return (neuron0x29b1f40()*-9.90253);
}

double NNfunction_NN_2_3::synapse0x29d0f00() {
   return (neuron0x29b2280()*3.25501);
}

double NNfunction_NN_2_3::synapse0x29d0f40() {
   return (neuron0x29b25c0()*0.0125584);
}

double NNfunction_NN_2_3::synapse0x29d0f80() {
   return (neuron0x29b2900()*0.00611231);
}

double NNfunction_NN_2_3::synapse0x29d0fc0() {
   return (neuron0x29b2c40()*0.0015438);
}

double NNfunction_NN_2_3::synapse0x29d1000() {
   return (neuron0x29b2f80()*0.0259338);
}

double NNfunction_NN_2_3::synapse0x29d1040() {
   return (neuron0x29b32c0()*0.0123784);
}

double NNfunction_NN_2_3::synapse0x29d1080() {
   return (neuron0x29b3600()*-0.0170321);
}

double NNfunction_NN_2_3::synapse0x29d10c0() {
   return (neuron0x29b3940()*0.0034244);
}

double NNfunction_NN_2_3::synapse0x29d1100() {
   return (neuron0x29b3c80()*-0.00250591);
}

double NNfunction_NN_2_3::synapse0x29d1140() {
   return (neuron0x29b3fc0()*0.0431952);
}

double NNfunction_NN_2_3::synapse0x29d1180() {
   return (neuron0x29b4300()*-0.0104833);
}

double NNfunction_NN_2_3::synapse0x29d11c0() {
   return (neuron0x29b4640()*-0.000558235);
}

double NNfunction_NN_2_3::synapse0x29d1200() {
   return (neuron0x29b4980()*-0.0276763);
}

double NNfunction_NN_2_3::synapse0x29d1240() {
   return (neuron0x29b4cc0()*-0.021659);
}

double NNfunction_NN_2_3::synapse0x29d0cd0() {
   return (neuron0x29b5000()*0.00610539);
}

double NNfunction_NN_2_3::synapse0x29d0d10() {
   return (neuron0x29b5560()*0.0340943);
}

double NNfunction_NN_2_3::synapse0x29d1390() {
   return (neuron0x29b5780()*0.0163007);
}

double NNfunction_NN_2_3::synapse0x29d13d0() {
   return (neuron0x29b5ac0()*0.00461777);
}

double NNfunction_NN_2_3::synapse0x29d1410() {
   return (neuron0x29b5e00()*-0.0218994);
}

double NNfunction_NN_2_3::synapse0x29d1450() {
   return (neuron0x29b6140()*-0.0277911);
}

double NNfunction_NN_2_3::synapse0x29d1490() {
   return (neuron0x29b6480()*0.011847);
}

double NNfunction_NN_2_3::synapse0x29d14d0() {
   return (neuron0x29b67c0()*0.159652);
}

double NNfunction_NN_2_3::synapse0x29d1850() {
   return (neuron0x29b1c00()*0.0210004);
}

double NNfunction_NN_2_3::synapse0x29d1890() {
   return (neuron0x29b1f40()*0.0265465);
}

double NNfunction_NN_2_3::synapse0x29d18d0() {
   return (neuron0x29b2280()*-0.870685);
}

double NNfunction_NN_2_3::synapse0x29d1910() {
   return (neuron0x29b25c0()*-0.000988007);
}

double NNfunction_NN_2_3::synapse0x29d1950() {
   return (neuron0x29b2900()*-0.0251278);
}

double NNfunction_NN_2_3::synapse0x29d1990() {
   return (neuron0x29b2c40()*0.0780555);
}

double NNfunction_NN_2_3::synapse0x29d19d0() {
   return (neuron0x29b2f80()*-0.0511638);
}

double NNfunction_NN_2_3::synapse0x29d1a10() {
   return (neuron0x29b32c0()*0.0220386);
}

double NNfunction_NN_2_3::synapse0x29d1a50() {
   return (neuron0x29b3600()*-0.030068);
}

double NNfunction_NN_2_3::synapse0x29d1a90() {
   return (neuron0x29b3940()*-0.0293415);
}

double NNfunction_NN_2_3::synapse0x29d1ad0() {
   return (neuron0x29b3c80()*-0.0147459);
}

double NNfunction_NN_2_3::synapse0x29d1b10() {
   return (neuron0x29b3fc0()*-0.0252819);
}

double NNfunction_NN_2_3::synapse0x29d1b50() {
   return (neuron0x29b4300()*-0.0409006);
}

double NNfunction_NN_2_3::synapse0x29d1b90() {
   return (neuron0x29b4640()*-0.0273403);
}

double NNfunction_NN_2_3::synapse0x29d1bd0() {
   return (neuron0x29b4980()*0.0180581);
}

double NNfunction_NN_2_3::synapse0x29d1c10() {
   return (neuron0x29b4cc0()*0.0144146);
}

double NNfunction_NN_2_3::synapse0x29d16a0() {
   return (neuron0x29b5000()*0.0332913);
}

double NNfunction_NN_2_3::synapse0x29d16e0() {
   return (neuron0x29b5560()*-0.0615415);
}

double NNfunction_NN_2_3::synapse0x29d1d60() {
   return (neuron0x29b5780()*0.0473847);
}

double NNfunction_NN_2_3::synapse0x29d1da0() {
   return (neuron0x29b5ac0()*-0.012579);
}

double NNfunction_NN_2_3::synapse0x29d1de0() {
   return (neuron0x29b5e00()*0.0513569);
}

double NNfunction_NN_2_3::synapse0x29d1e20() {
   return (neuron0x29b6140()*0.0248126);
}

double NNfunction_NN_2_3::synapse0x29d1e60() {
   return (neuron0x29b6480()*0.00280675);
}

double NNfunction_NN_2_3::synapse0x29d1ea0() {
   return (neuron0x29b67c0()*4.07459);
}

double NNfunction_NN_2_3::synapse0x29d2220() {
   return (neuron0x29b1c00()*-0.0143964);
}

double NNfunction_NN_2_3::synapse0x29d2260() {
   return (neuron0x29b1f40()*-16.3733);
}

double NNfunction_NN_2_3::synapse0x29d22a0() {
   return (neuron0x29b2280()*-0.0206409);
}

double NNfunction_NN_2_3::synapse0x29d22e0() {
   return (neuron0x29b25c0()*-0.00568591);
}

double NNfunction_NN_2_3::synapse0x29d2320() {
   return (neuron0x29b2900()*-0.00181096);
}

double NNfunction_NN_2_3::synapse0x29d2360() {
   return (neuron0x29b2c40()*-0.00960685);
}

double NNfunction_NN_2_3::synapse0x29d23a0() {
   return (neuron0x29b2f80()*0.0200783);
}

double NNfunction_NN_2_3::synapse0x29d23e0() {
   return (neuron0x29b32c0()*0.0246539);
}

double NNfunction_NN_2_3::synapse0x29d2420() {
   return (neuron0x29b3600()*4.61878e-05);
}

double NNfunction_NN_2_3::synapse0x29d2460() {
   return (neuron0x29b3940()*-0.00144337);
}

double NNfunction_NN_2_3::synapse0x29d24a0() {
   return (neuron0x29b3c80()*-0.0180967);
}

double NNfunction_NN_2_3::synapse0x29d24e0() {
   return (neuron0x29b3fc0()*0.0267964);
}

double NNfunction_NN_2_3::synapse0x29d2520() {
   return (neuron0x29b4300()*0.0148419);
}

double NNfunction_NN_2_3::synapse0x29d2560() {
   return (neuron0x29b4640()*0.0141419);
}

double NNfunction_NN_2_3::synapse0x29d25a0() {
   return (neuron0x29b4980()*-0.0632379);
}

double NNfunction_NN_2_3::synapse0x29d25e0() {
   return (neuron0x29b4cc0()*-0.0108789);
}

double NNfunction_NN_2_3::synapse0x29d2070() {
   return (neuron0x29b5000()*-0.0112317);
}

double NNfunction_NN_2_3::synapse0x29d20b0() {
   return (neuron0x29b5560()*0.0139118);
}

double NNfunction_NN_2_3::synapse0x29d2730() {
   return (neuron0x29b5780()*-0.000398422);
}

double NNfunction_NN_2_3::synapse0x29d2770() {
   return (neuron0x29b5ac0()*-0.00333882);
}

double NNfunction_NN_2_3::synapse0x29d27b0() {
   return (neuron0x29b5e00()*-0.0259127);
}

double NNfunction_NN_2_3::synapse0x29d27f0() {
   return (neuron0x29b6140()*0.0108534);
}

double NNfunction_NN_2_3::synapse0x29d2830() {
   return (neuron0x29b6480()*0.00883228);
}

double NNfunction_NN_2_3::synapse0x29d2870() {
   return (neuron0x29b67c0()*1.94888);
}

double NNfunction_NN_2_3::synapse0x29d2bf0() {
   return (neuron0x29b1c00()*-0.117254);
}

double NNfunction_NN_2_3::synapse0x29d2c30() {
   return (neuron0x29b1f40()*0.611679);
}

double NNfunction_NN_2_3::synapse0x29d2c70() {
   return (neuron0x29b2280()*-0.244615);
}

double NNfunction_NN_2_3::synapse0x29d2cb0() {
   return (neuron0x29b25c0()*-0.108792);
}

double NNfunction_NN_2_3::synapse0x29d2cf0() {
   return (neuron0x29b2900()*0.379646);
}

double NNfunction_NN_2_3::synapse0x29d2d30() {
   return (neuron0x29b2c40()*0.194368);
}

double NNfunction_NN_2_3::synapse0x29d2d70() {
   return (neuron0x29b2f80()*0.0752656);
}

double NNfunction_NN_2_3::synapse0x29d2db0() {
   return (neuron0x29b32c0()*-0.126494);
}

double NNfunction_NN_2_3::synapse0x29d2df0() {
   return (neuron0x29b3600()*0.270471);
}

double NNfunction_NN_2_3::synapse0x29d2e30() {
   return (neuron0x29b3940()*-0.611005);
}

double NNfunction_NN_2_3::synapse0x29d2e70() {
   return (neuron0x29b3c80()*-0.15363);
}

double NNfunction_NN_2_3::synapse0x29d2eb0() {
   return (neuron0x29b3fc0()*0.0901475);
}

double NNfunction_NN_2_3::synapse0x29d2ef0() {
   return (neuron0x29b4300()*0.444573);
}

double NNfunction_NN_2_3::synapse0x29d2f30() {
   return (neuron0x29b4640()*-0.386589);
}

double NNfunction_NN_2_3::synapse0x29d2f70() {
   return (neuron0x29b4980()*-0.168806);
}

double NNfunction_NN_2_3::synapse0x29d2fb0() {
   return (neuron0x29b4cc0()*-0.0574223);
}

double NNfunction_NN_2_3::synapse0x29d2a40() {
   return (neuron0x29b5000()*-0.234464);
}

double NNfunction_NN_2_3::synapse0x29d2a80() {
   return (neuron0x29b5560()*-0.488938);
}

double NNfunction_NN_2_3::synapse0x29d3100() {
   return (neuron0x29b5780()*0.0269347);
}

double NNfunction_NN_2_3::synapse0x29d3140() {
   return (neuron0x29b5ac0()*0.135634);
}

double NNfunction_NN_2_3::synapse0x29d3180() {
   return (neuron0x29b5e00()*-0.193257);
}

double NNfunction_NN_2_3::synapse0x29d31c0() {
   return (neuron0x29b6140()*0.273793);
}

double NNfunction_NN_2_3::synapse0x29d3200() {
   return (neuron0x29b6480()*0.019558);
}

double NNfunction_NN_2_3::synapse0x29d3240() {
   return (neuron0x29b67c0()*-1.22007);
}

double NNfunction_NN_2_3::synapse0x29bbcf0() {
   return (neuron0x29b1c00()*0.0205423);
}

double NNfunction_NN_2_3::synapse0x29bbd30() {
   return (neuron0x29b1f40()*-11.1117);
}

double NNfunction_NN_2_3::synapse0x29bbd70() {
   return (neuron0x29b2280()*-4.4053);
}

double NNfunction_NN_2_3::synapse0x29bbdb0() {
   return (neuron0x29b25c0()*0.000879642);
}

double NNfunction_NN_2_3::synapse0x29bbdf0() {
   return (neuron0x29b2900()*0.0453478);
}

double NNfunction_NN_2_3::synapse0x29bbe30() {
   return (neuron0x29b2c40()*-0.0422513);
}

double NNfunction_NN_2_3::synapse0x29bbe70() {
   return (neuron0x29b2f80()*0.00666024);
}

double NNfunction_NN_2_3::synapse0x29bbeb0() {
   return (neuron0x29b32c0()*0.0421005);
}

double NNfunction_NN_2_3::synapse0x29d39d0() {
   return (neuron0x29b3600()*0.0141306);
}

double NNfunction_NN_2_3::synapse0x29d3a10() {
   return (neuron0x29b3940()*-0.00474483);
}

double NNfunction_NN_2_3::synapse0x29d3a50() {
   return (neuron0x29b3c80()*0.00164964);
}

double NNfunction_NN_2_3::synapse0x29d3a90() {
   return (neuron0x29b3fc0()*0.0355662);
}

double NNfunction_NN_2_3::synapse0x29d3ad0() {
   return (neuron0x29b4300()*-0.0334067);
}

double NNfunction_NN_2_3::synapse0x29d3b10() {
   return (neuron0x29b4640()*-0.0449056);
}

double NNfunction_NN_2_3::synapse0x29d3b50() {
   return (neuron0x29b4980()*0.0371399);
}

double NNfunction_NN_2_3::synapse0x29d3b90() {
   return (neuron0x29b4cc0()*0.0160173);
}

double NNfunction_NN_2_3::synapse0x29d3410() {
   return (neuron0x29b5000()*0.0527796);
}

double NNfunction_NN_2_3::synapse0x29d3450() {
   return (neuron0x29b5560()*0.00766339);
}

double NNfunction_NN_2_3::synapse0x29d3ce0() {
   return (neuron0x29b5780()*0.0127737);
}

double NNfunction_NN_2_3::synapse0x29d3d20() {
   return (neuron0x29b5ac0()*-0.012029);
}

double NNfunction_NN_2_3::synapse0x29d3d60() {
   return (neuron0x29b5e00()*0.000641216);
}

double NNfunction_NN_2_3::synapse0x29d3da0() {
   return (neuron0x29b6140()*-0.00241307);
}

double NNfunction_NN_2_3::synapse0x29d3de0() {
   return (neuron0x29b6480()*0.000121518);
}

double NNfunction_NN_2_3::synapse0x29d3e20() {
   return (neuron0x29b67c0()*-0.20638);
}

double NNfunction_NN_2_3::synapse0x29d41a0() {
   return (neuron0x29b1c00()*0.86464);
}

double NNfunction_NN_2_3::synapse0x29d41e0() {
   return (neuron0x29b1f40()*-0.253724);
}

double NNfunction_NN_2_3::synapse0x29d4220() {
   return (neuron0x29b2280()*-0.284575);
}

double NNfunction_NN_2_3::synapse0x29d4260() {
   return (neuron0x29b25c0()*-0.187965);
}

double NNfunction_NN_2_3::synapse0x29d42a0() {
   return (neuron0x29b2900()*-0.574484);
}

double NNfunction_NN_2_3::synapse0x29d42e0() {
   return (neuron0x29b2c40()*0.174512);
}

double NNfunction_NN_2_3::synapse0x29d4320() {
   return (neuron0x29b2f80()*-0.387463);
}

double NNfunction_NN_2_3::synapse0x29d4360() {
   return (neuron0x29b32c0()*0.403513);
}

double NNfunction_NN_2_3::synapse0x29d43a0() {
   return (neuron0x29b3600()*-0.151952);
}

double NNfunction_NN_2_3::synapse0x29d43e0() {
   return (neuron0x29b3940()*0.0094831);
}

double NNfunction_NN_2_3::synapse0x29d4420() {
   return (neuron0x29b3c80()*0.144622);
}

double NNfunction_NN_2_3::synapse0x29d4460() {
   return (neuron0x29b3fc0()*-0.0801164);
}

double NNfunction_NN_2_3::synapse0x29d44a0() {
   return (neuron0x29b4300()*0.231151);
}

double NNfunction_NN_2_3::synapse0x29d44e0() {
   return (neuron0x29b4640()*-0.206167);
}

double NNfunction_NN_2_3::synapse0x29d4520() {
   return (neuron0x29b4980()*0.624731);
}

double NNfunction_NN_2_3::synapse0x29d4560() {
   return (neuron0x29b4cc0()*-0.240923);
}

double NNfunction_NN_2_3::synapse0x29d3ff0() {
   return (neuron0x29b5000()*0.148389);
}

double NNfunction_NN_2_3::synapse0x29d4030() {
   return (neuron0x29b5560()*0.165977);
}

double NNfunction_NN_2_3::synapse0x29d46b0() {
   return (neuron0x29b5780()*-0.233763);
}

double NNfunction_NN_2_3::synapse0x29d46f0() {
   return (neuron0x29b5ac0()*-0.935902);
}

double NNfunction_NN_2_3::synapse0x29d4730() {
   return (neuron0x29b5e00()*0.15655);
}

double NNfunction_NN_2_3::synapse0x29d4770() {
   return (neuron0x29b6140()*0.287778);
}

double NNfunction_NN_2_3::synapse0x29d47b0() {
   return (neuron0x29b6480()*0.23121);
}

double NNfunction_NN_2_3::synapse0x29d47f0() {
   return (neuron0x29b67c0()*0.0205378);
}

double NNfunction_NN_2_3::synapse0x29d4b70() {
   return (neuron0x29b1c00()*-0.101886);
}

double NNfunction_NN_2_3::synapse0x29d4bb0() {
   return (neuron0x29b1f40()*10.6558);
}

double NNfunction_NN_2_3::synapse0x29d4bf0() {
   return (neuron0x29b2280()*-3.40084);
}

double NNfunction_NN_2_3::synapse0x29d4c30() {
   return (neuron0x29b25c0()*0.00119946);
}

double NNfunction_NN_2_3::synapse0x29d4c70() {
   return (neuron0x29b2900()*-0.0240829);
}

double NNfunction_NN_2_3::synapse0x29d4cb0() {
   return (neuron0x29b2c40()*-0.0186407);
}

double NNfunction_NN_2_3::synapse0x29d4cf0() {
   return (neuron0x29b2f80()*0.00450395);
}

double NNfunction_NN_2_3::synapse0x29d4d30() {
   return (neuron0x29b32c0()*-0.0028388);
}

double NNfunction_NN_2_3::synapse0x29d4d70() {
   return (neuron0x29b3600()*0.00564189);
}

double NNfunction_NN_2_3::synapse0x29d4db0() {
   return (neuron0x29b3940()*0.0234706);
}

double NNfunction_NN_2_3::synapse0x29d4df0() {
   return (neuron0x29b3c80()*0.000292983);
}

double NNfunction_NN_2_3::synapse0x29d4e30() {
   return (neuron0x29b3fc0()*0.00121853);
}

double NNfunction_NN_2_3::synapse0x29d4e70() {
   return (neuron0x29b4300()*0.00756851);
}

double NNfunction_NN_2_3::synapse0x29d4eb0() {
   return (neuron0x29b4640()*0.0343067);
}

double NNfunction_NN_2_3::synapse0x29d4ef0() {
   return (neuron0x29b4980()*0.0244345);
}

double NNfunction_NN_2_3::synapse0x29d4f30() {
   return (neuron0x29b4cc0()*-0.0211272);
}

double NNfunction_NN_2_3::synapse0x29d49c0() {
   return (neuron0x29b5000()*-0.00677432);
}

double NNfunction_NN_2_3::synapse0x29d4a00() {
   return (neuron0x29b5560()*0.00746677);
}

double NNfunction_NN_2_3::synapse0x29c5530() {
   return (neuron0x29b5780()*-0.0353653);
}

double NNfunction_NN_2_3::synapse0x29c5570() {
   return (neuron0x29b5ac0()*0.000121691);
}

double NNfunction_NN_2_3::synapse0x29c55b0() {
   return (neuron0x29b5e00()*0.0373478);
}

double NNfunction_NN_2_3::synapse0x29c55f0() {
   return (neuron0x29b6140()*0.0189943);
}

double NNfunction_NN_2_3::synapse0x29c5630() {
   return (neuron0x29b6480()*-0.00140044);
}

double NNfunction_NN_2_3::synapse0x29c5670() {
   return (neuron0x29b67c0()*-1.4661);
}

double NNfunction_NN_2_3::synapse0x29c59f0() {
   return (neuron0x29b1c00()*0.0564413);
}

double NNfunction_NN_2_3::synapse0x29c5a30() {
   return (neuron0x29b1f40()*-0.007174);
}

double NNfunction_NN_2_3::synapse0x29c5a70() {
   return (neuron0x29b2280()*-0.177444);
}

double NNfunction_NN_2_3::synapse0x29c5ab0() {
   return (neuron0x29b25c0()*0.071103);
}

double NNfunction_NN_2_3::synapse0x29c5af0() {
   return (neuron0x29b2900()*0.0218342);
}

double NNfunction_NN_2_3::synapse0x29c5b30() {
   return (neuron0x29b2c40()*0.0150787);
}

double NNfunction_NN_2_3::synapse0x29c5b70() {
   return (neuron0x29b2f80()*-0.0344888);
}

double NNfunction_NN_2_3::synapse0x29c5bb0() {
   return (neuron0x29b32c0()*-0.0292486);
}

double NNfunction_NN_2_3::synapse0x29c5bf0() {
   return (neuron0x29b3600()*-0.047383);
}

double NNfunction_NN_2_3::synapse0x29c5c30() {
   return (neuron0x29b3940()*-0.00427302);
}

double NNfunction_NN_2_3::synapse0x29c5c70() {
   return (neuron0x29b3c80()*-0.00813888);
}

double NNfunction_NN_2_3::synapse0x29c5cb0() {
   return (neuron0x29b3fc0()*-2.95053);
}

double NNfunction_NN_2_3::synapse0x29c5cf0() {
   return (neuron0x29b4300()*-0.0337253);
}

double NNfunction_NN_2_3::synapse0x29c5d30() {
   return (neuron0x29b4640()*0.0183675);
}

double NNfunction_NN_2_3::synapse0x29c5d70() {
   return (neuron0x29b4980()*0.0985841);
}

double NNfunction_NN_2_3::synapse0x29c5db0() {
   return (neuron0x29b4cc0()*-0.0291006);
}

double NNfunction_NN_2_3::synapse0x29c5840() {
   return (neuron0x29b5000()*0.0628157);
}

double NNfunction_NN_2_3::synapse0x29c5880() {
   return (neuron0x29b5560()*-0.0473226);
}

double NNfunction_NN_2_3::synapse0x29c5f00() {
   return (neuron0x29b5780()*-0.0451027);
}

double NNfunction_NN_2_3::synapse0x29c5f40() {
   return (neuron0x29b5ac0()*-0.0330175);
}

double NNfunction_NN_2_3::synapse0x29c5f80() {
   return (neuron0x29b5e00()*0.008907);
}

double NNfunction_NN_2_3::synapse0x29c5fc0() {
   return (neuron0x29b6140()*-0.0394739);
}

double NNfunction_NN_2_3::synapse0x29c6000() {
   return (neuron0x29b6480()*-0.0542173);
}

double NNfunction_NN_2_3::synapse0x29c6040() {
   return (neuron0x29b67c0()*0.199674);
}

double NNfunction_NN_2_3::synapse0x29c63c0() {
   return (neuron0x29b1c00()*-0.0726984);
}

double NNfunction_NN_2_3::synapse0x29c6400() {
   return (neuron0x29b1f40()*-0.038898);
}

double NNfunction_NN_2_3::synapse0x29c6440() {
   return (neuron0x29b2280()*-0.116341);
}

double NNfunction_NN_2_3::synapse0x29c6480() {
   return (neuron0x29b25c0()*-0.0663459);
}

double NNfunction_NN_2_3::synapse0x29c64c0() {
   return (neuron0x29b2900()*-0.0544928);
}

double NNfunction_NN_2_3::synapse0x29c6500() {
   return (neuron0x29b2c40()*0.0927787);
}

double NNfunction_NN_2_3::synapse0x29c6540() {
   return (neuron0x29b2f80()*-0.0427919);
}

double NNfunction_NN_2_3::synapse0x29c6580() {
   return (neuron0x29b32c0()*-0.0164082);
}

double NNfunction_NN_2_3::synapse0x29c65c0() {
   return (neuron0x29b3600()*-0.0170059);
}

double NNfunction_NN_2_3::synapse0x29c6600() {
   return (neuron0x29b3940()*0.0831208);
}

double NNfunction_NN_2_3::synapse0x29c6640() {
   return (neuron0x29b3c80()*0.0708499);
}

double NNfunction_NN_2_3::synapse0x29c6680() {
   return (neuron0x29b3fc0()*-0.0832106);
}

double NNfunction_NN_2_3::synapse0x29c66c0() {
   return (neuron0x29b4300()*0.102641);
}

double NNfunction_NN_2_3::synapse0x29c6700() {
   return (neuron0x29b4640()*-0.0946233);
}

double NNfunction_NN_2_3::synapse0x29c6740() {
   return (neuron0x29b4980()*-0.370909);
}

double NNfunction_NN_2_3::synapse0x29c6780() {
   return (neuron0x29b4cc0()*-0.0372099);
}

double NNfunction_NN_2_3::synapse0x29c6210() {
   return (neuron0x29b5000()*0.00158959);
}

double NNfunction_NN_2_3::synapse0x29c6250() {
   return (neuron0x29b5560()*0.0497558);
}

double NNfunction_NN_2_3::synapse0x29c68d0() {
   return (neuron0x29b5780()*0.0133442);
}

double NNfunction_NN_2_3::synapse0x29c6910() {
   return (neuron0x29b5ac0()*-0.00149537);
}

double NNfunction_NN_2_3::synapse0x29c6950() {
   return (neuron0x29b5e00()*0.0660199);
}

double NNfunction_NN_2_3::synapse0x29c6990() {
   return (neuron0x29b6140()*-0.0209766);
}

double NNfunction_NN_2_3::synapse0x29c69d0() {
   return (neuron0x29b6480()*-0.0144164);
}

double NNfunction_NN_2_3::synapse0x29c6a10() {
   return (neuron0x29b67c0()*-1.07999);
}

double NNfunction_NN_2_3::synapse0x29c6d90() {
   return (neuron0x29b1c00()*0.00455094);
}

double NNfunction_NN_2_3::synapse0x29c6dd0() {
   return (neuron0x29b1f40()*-0.0170707);
}

double NNfunction_NN_2_3::synapse0x29c6e10() {
   return (neuron0x29b2280()*2.94439);
}

double NNfunction_NN_2_3::synapse0x29c6e50() {
   return (neuron0x29b25c0()*-8.25327e-05);
}

double NNfunction_NN_2_3::synapse0x29c6e90() {
   return (neuron0x29b2900()*0.00425159);
}

double NNfunction_NN_2_3::synapse0x29c6ed0() {
   return (neuron0x29b2c40()*-0.0149702);
}

double NNfunction_NN_2_3::synapse0x29c6f10() {
   return (neuron0x29b2f80()*-0.00194941);
}

double NNfunction_NN_2_3::synapse0x29c6f50() {
   return (neuron0x29b32c0()*-0.00238984);
}

double NNfunction_NN_2_3::synapse0x29c6f90() {
   return (neuron0x29b3600()*0.0227789);
}

double NNfunction_NN_2_3::synapse0x29c6fd0() {
   return (neuron0x29b3940()*0.0265042);
}

double NNfunction_NN_2_3::synapse0x29c7010() {
   return (neuron0x29b3c80()*0.024543);
}

double NNfunction_NN_2_3::synapse0x29c7050() {
   return (neuron0x29b3fc0()*0.192113);
}

double NNfunction_NN_2_3::synapse0x29c7090() {
   return (neuron0x29b4300()*-0.0044101);
}

double NNfunction_NN_2_3::synapse0x29c70d0() {
   return (neuron0x29b4640()*-0.0103052);
}

double NNfunction_NN_2_3::synapse0x29c7110() {
   return (neuron0x29b4980()*-0.00463766);
}

double NNfunction_NN_2_3::synapse0x29c7150() {
   return (neuron0x29b4cc0()*0.00252011);
}

double NNfunction_NN_2_3::synapse0x29c6be0() {
   return (neuron0x29b5000()*0.00658037);
}

double NNfunction_NN_2_3::synapse0x29c6c20() {
   return (neuron0x29b5560()*0.00533417);
}

double NNfunction_NN_2_3::synapse0x29c72a0() {
   return (neuron0x29b5780()*0.0287171);
}

double NNfunction_NN_2_3::synapse0x29c72e0() {
   return (neuron0x29b5ac0()*0.00693751);
}

double NNfunction_NN_2_3::synapse0x29c7320() {
   return (neuron0x29b5e00()*-0.0314533);
}

double NNfunction_NN_2_3::synapse0x29c7360() {
   return (neuron0x29b6140()*0.0264113);
}

double NNfunction_NN_2_3::synapse0x29c73a0() {
   return (neuron0x29b6480()*0.00446822);
}

double NNfunction_NN_2_3::synapse0x29c73e0() {
   return (neuron0x29b67c0()*-0.27605);
}

double NNfunction_NN_2_3::synapse0x29d92b0() {
   return (neuron0x29b1c00()*-0.00666842);
}

double NNfunction_NN_2_3::synapse0x29d92f0() {
   return (neuron0x29b1f40()*-22.3285);
}

double NNfunction_NN_2_3::synapse0x29d9330() {
   return (neuron0x29b2280()*-0.0600961);
}

double NNfunction_NN_2_3::synapse0x29d9370() {
   return (neuron0x29b25c0()*0.0138398);
}

double NNfunction_NN_2_3::synapse0x29d93b0() {
   return (neuron0x29b2900()*0.018432);
}

double NNfunction_NN_2_3::synapse0x29d93f0() {
   return (neuron0x29b2c40()*-0.0047288);
}

double NNfunction_NN_2_3::synapse0x29d9430() {
   return (neuron0x29b2f80()*0.0102085);
}

double NNfunction_NN_2_3::synapse0x29d9470() {
   return (neuron0x29b32c0()*0.0123794);
}

double NNfunction_NN_2_3::synapse0x29d94b0() {
   return (neuron0x29b3600()*0.000913637);
}

double NNfunction_NN_2_3::synapse0x29d94f0() {
   return (neuron0x29b3940()*0.00184004);
}

double NNfunction_NN_2_3::synapse0x29d9530() {
   return (neuron0x29b3c80()*0.000758912);
}

double NNfunction_NN_2_3::synapse0x29d9570() {
   return (neuron0x29b3fc0()*-0.0135254);
}

double NNfunction_NN_2_3::synapse0x29d95b0() {
   return (neuron0x29b4300()*0.000928426);
}

double NNfunction_NN_2_3::synapse0x29d95f0() {
   return (neuron0x29b4640()*-0.00538607);
}

double NNfunction_NN_2_3::synapse0x29d9630() {
   return (neuron0x29b4980()*0.0371177);
}

double NNfunction_NN_2_3::synapse0x29d9670() {
   return (neuron0x29b4cc0()*0.00207286);
}

double NNfunction_NN_2_3::synapse0x29c7420() {
   return (neuron0x29b5000()*0.00158696);
}

double NNfunction_NN_2_3::synapse0x29c7460() {
   return (neuron0x29b5560()*0.0144315);
}

double NNfunction_NN_2_3::synapse0x29d97c0() {
   return (neuron0x29b5780()*-0.0104244);
}

double NNfunction_NN_2_3::synapse0x29d9800() {
   return (neuron0x29b5ac0()*-0.000820426);
}

double NNfunction_NN_2_3::synapse0x29d9840() {
   return (neuron0x29b5e00()*0.0120055);
}

double NNfunction_NN_2_3::synapse0x29d9880() {
   return (neuron0x29b6140()*-0.0117598);
}

double NNfunction_NN_2_3::synapse0x29d98c0() {
   return (neuron0x29b6480()*0.00775711);
}

double NNfunction_NN_2_3::synapse0x29d9900() {
   return (neuron0x29b67c0()*0.265487);
}

double NNfunction_NN_2_3::synapse0x29d9c80() {
   return (neuron0x29b1c00()*0.195177);
}

double NNfunction_NN_2_3::synapse0x29d9cc0() {
   return (neuron0x29b1f40()*-0.0352221);
}

double NNfunction_NN_2_3::synapse0x29d9d00() {
   return (neuron0x29b2280()*-0.286945);
}

double NNfunction_NN_2_3::synapse0x29d9d40() {
   return (neuron0x29b25c0()*0.344643);
}

double NNfunction_NN_2_3::synapse0x29d9d80() {
   return (neuron0x29b2900()*-0.394109);
}

double NNfunction_NN_2_3::synapse0x29d9dc0() {
   return (neuron0x29b2c40()*0.305764);
}

double NNfunction_NN_2_3::synapse0x29d9e00() {
   return (neuron0x29b2f80()*-0.757882);
}

double NNfunction_NN_2_3::synapse0x29d9e40() {
   return (neuron0x29b32c0()*0.320791);
}

double NNfunction_NN_2_3::synapse0x29d9e80() {
   return (neuron0x29b3600()*0.418776);
}

double NNfunction_NN_2_3::synapse0x29d9ec0() {
   return (neuron0x29b3940()*-0.399535);
}

double NNfunction_NN_2_3::synapse0x29d9f00() {
   return (neuron0x29b3c80()*-0.175483);
}

double NNfunction_NN_2_3::synapse0x29d9f40() {
   return (neuron0x29b3fc0()*0.126901);
}

double NNfunction_NN_2_3::synapse0x29d9f80() {
   return (neuron0x29b4300()*0.45894);
}

double NNfunction_NN_2_3::synapse0x29d9fc0() {
   return (neuron0x29b4640()*0.659548);
}

double NNfunction_NN_2_3::synapse0x29da000() {
   return (neuron0x29b4980()*-0.230656);
}

double NNfunction_NN_2_3::synapse0x29da040() {
   return (neuron0x29b4cc0()*0.113749);
}

double NNfunction_NN_2_3::synapse0x29d9ad0() {
   return (neuron0x29b5000()*-0.016173);
}

double NNfunction_NN_2_3::synapse0x29d9b10() {
   return (neuron0x29b5560()*0.172359);
}

double NNfunction_NN_2_3::synapse0x29da190() {
   return (neuron0x29b5780()*-0.78357);
}

double NNfunction_NN_2_3::synapse0x29da1d0() {
   return (neuron0x29b5ac0()*-0.284035);
}

double NNfunction_NN_2_3::synapse0x29da210() {
   return (neuron0x29b5e00()*-0.488269);
}

double NNfunction_NN_2_3::synapse0x29da250() {
   return (neuron0x29b6140()*0.271482);
}

double NNfunction_NN_2_3::synapse0x29da290() {
   return (neuron0x29b6480()*0.318822);
}

double NNfunction_NN_2_3::synapse0x29da2d0() {
   return (neuron0x29b67c0()*-0.51089);
}

double NNfunction_NN_2_3::synapse0x29da650() {
   return (neuron0x29b1c00()*-0.216288);
}

double NNfunction_NN_2_3::synapse0x29da690() {
   return (neuron0x29b1f40()*0.523995);
}

double NNfunction_NN_2_3::synapse0x29da6d0() {
   return (neuron0x29b2280()*0.368939);
}

double NNfunction_NN_2_3::synapse0x29da710() {
   return (neuron0x29b25c0()*-0.202868);
}

double NNfunction_NN_2_3::synapse0x29da750() {
   return (neuron0x29b2900()*0.148395);
}

double NNfunction_NN_2_3::synapse0x29da790() {
   return (neuron0x29b2c40()*-0.152158);
}

double NNfunction_NN_2_3::synapse0x29da7d0() {
   return (neuron0x29b2f80()*0.0548551);
}

double NNfunction_NN_2_3::synapse0x29da810() {
   return (neuron0x29b32c0()*0.0101537);
}

double NNfunction_NN_2_3::synapse0x29da850() {
   return (neuron0x29b3600()*0.483117);
}

double NNfunction_NN_2_3::synapse0x29da890() {
   return (neuron0x29b3940()*0.0323756);
}

double NNfunction_NN_2_3::synapse0x29da8d0() {
   return (neuron0x29b3c80()*0.0393606);
}

double NNfunction_NN_2_3::synapse0x29da910() {
   return (neuron0x29b3fc0()*0.10832);
}

double NNfunction_NN_2_3::synapse0x29da950() {
   return (neuron0x29b4300()*0.139386);
}

double NNfunction_NN_2_3::synapse0x29da990() {
   return (neuron0x29b4640()*0.170646);
}

double NNfunction_NN_2_3::synapse0x29da9d0() {
   return (neuron0x29b4980()*-0.148045);
}

double NNfunction_NN_2_3::synapse0x29daa10() {
   return (neuron0x29b4cc0()*-0.118419);
}

double NNfunction_NN_2_3::synapse0x29da4a0() {
   return (neuron0x29b5000()*-0.492816);
}

double NNfunction_NN_2_3::synapse0x29da4e0() {
   return (neuron0x29b5560()*-0.137946);
}

double NNfunction_NN_2_3::synapse0x29dab60() {
   return (neuron0x29b5780()*-0.265779);
}

double NNfunction_NN_2_3::synapse0x29daba0() {
   return (neuron0x29b5ac0()*0.0586366);
}

double NNfunction_NN_2_3::synapse0x29dabe0() {
   return (neuron0x29b5e00()*0.102383);
}

double NNfunction_NN_2_3::synapse0x29dac20() {
   return (neuron0x29b6140()*-0.219534);
}

double NNfunction_NN_2_3::synapse0x29dac60() {
   return (neuron0x29b6480()*-0.0356329);
}

double NNfunction_NN_2_3::synapse0x29daca0() {
   return (neuron0x29b67c0()*0.545164);
}

double NNfunction_NN_2_3::synapse0x29db020() {
   return (neuron0x29b1c00()*0.0803206);
}

double NNfunction_NN_2_3::synapse0x29db060() {
   return (neuron0x29b1f40()*0.128168);
}

double NNfunction_NN_2_3::synapse0x29db0a0() {
   return (neuron0x29b2280()*-3.51295);
}

double NNfunction_NN_2_3::synapse0x29db0e0() {
   return (neuron0x29b25c0()*-0.000178046);
}

double NNfunction_NN_2_3::synapse0x29db120() {
   return (neuron0x29b2900()*0.0142097);
}

double NNfunction_NN_2_3::synapse0x29db160() {
   return (neuron0x29b2c40()*-0.0559958);
}

double NNfunction_NN_2_3::synapse0x29db1a0() {
   return (neuron0x29b2f80()*-0.00133961);
}

double NNfunction_NN_2_3::synapse0x29db1e0() {
   return (neuron0x29b32c0()*-0.0157569);
}

double NNfunction_NN_2_3::synapse0x29db220() {
   return (neuron0x29b3600()*0.00730022);
}

double NNfunction_NN_2_3::synapse0x29db260() {
   return (neuron0x29b3940()*-0.000423321);
}

double NNfunction_NN_2_3::synapse0x29db2a0() {
   return (neuron0x29b3c80()*-0.00514717);
}

double NNfunction_NN_2_3::synapse0x29db2e0() {
   return (neuron0x29b3fc0()*-0.0506869);
}

double NNfunction_NN_2_3::synapse0x29db320() {
   return (neuron0x29b4300()*0.0197103);
}

double NNfunction_NN_2_3::synapse0x29db360() {
   return (neuron0x29b4640()*0.00601516);
}

double NNfunction_NN_2_3::synapse0x29db3a0() {
   return (neuron0x29b4980()*-0.027208);
}

double NNfunction_NN_2_3::synapse0x29db3e0() {
   return (neuron0x29b4cc0()*0.00599325);
}

double NNfunction_NN_2_3::synapse0x29dae70() {
   return (neuron0x29b5000()*0.00350525);
}

double NNfunction_NN_2_3::synapse0x29daeb0() {
   return (neuron0x29b5560()*-0.024866);
}

double NNfunction_NN_2_3::synapse0x29db530() {
   return (neuron0x29b5780()*-0.0834336);
}

double NNfunction_NN_2_3::synapse0x29db570() {
   return (neuron0x29b5ac0()*0.0178577);
}

double NNfunction_NN_2_3::synapse0x29db5b0() {
   return (neuron0x29b5e00()*-0.0157675);
}

double NNfunction_NN_2_3::synapse0x29db5f0() {
   return (neuron0x29b6140()*-0.0543511);
}

double NNfunction_NN_2_3::synapse0x29db630() {
   return (neuron0x29b6480()*-0.0176312);
}

double NNfunction_NN_2_3::synapse0x29db670() {
   return (neuron0x29b67c0()*-3.29255);
}

double NNfunction_NN_2_3::synapse0x29b7c10() {
   return (neuron0x29b6c60()*0.320322);
}

double NNfunction_NN_2_3::synapse0x29b7c50() {
   return (neuron0x29b7570()*3.72185);
}

double NNfunction_NN_2_3::synapse0x29b9120() {
   return (neuron0x29b8050()*0.323959);
}

double NNfunction_NN_2_3::synapse0x29b9160() {
   return (neuron0x27718e0()*0.555117);
}

double NNfunction_NN_2_3::synapse0x29b9af0() {
   return (neuron0x29b8e70()*0.972632);
}

double NNfunction_NN_2_3::synapse0x29b9b30() {
   return (neuron0x29b9840()*-0.417313);
}

double NNfunction_NN_2_3::synapse0x29ba8c0() {
   return (neuron0x29ba610()*0.259962);
}

double NNfunction_NN_2_3::synapse0x29ba900() {
   return (neuron0x29bafe0()*-3.12319);
}

double NNfunction_NN_2_3::synapse0x29bb290() {
   return (neuron0x29bb9b0()*1.90141);
}

double NNfunction_NN_2_3::synapse0x29bb2d0() {
   return (neuron0x29bc490()*-0.124003);
}

double NNfunction_NN_2_3::synapse0x29bbc60() {
   return (neuron0x29bce60()*0.126095);
}

double NNfunction_NN_2_3::synapse0x29bbca0() {
   return (neuron0x29b9f40()*0.472451);
}

double NNfunction_NN_2_3::synapse0x29bc740() {
   return (neuron0x29bea10()*-1.28699);
}

double NNfunction_NN_2_3::synapse0x29bc780() {
   return (neuron0x29bf3e0()*1.86358);
}

double NNfunction_NN_2_3::synapse0x29bd110() {
   return (neuron0x29bfdb0()*0.279975);
}

double NNfunction_NN_2_3::synapse0x29bd150() {
   return (neuron0x29c0780()*0.501384);
}

double NNfunction_NN_2_3::synapse0x29ba1f0() {
   return (neuron0x29c2590()*-0.133133);
}

double NNfunction_NN_2_3::synapse0x29ba230() {
   return (neuron0x29c2870()*-3.40794);
}

double NNfunction_NN_2_3::synapse0x29becc0() {
   return (neuron0x29c3240()*0.478103);
}

double NNfunction_NN_2_3::synapse0x29bed00() {
   return (neuron0x29c3c10()*0.296335);
}

double NNfunction_NN_2_3::synapse0x29bf690() {
   return (neuron0x29c45e0()*-0.87551);
}

double NNfunction_NN_2_3::synapse0x29bf6d0() {
   return (neuron0x29c4fb0()*0.684772);
}

double NNfunction_NN_2_3::synapse0x29c0060() {
   return (neuron0x29bdb00()*0.582657);
}

double NNfunction_NN_2_3::synapse0x29c00a0() {
   return (neuron0x29be4d0()*1.14343);
}

double NNfunction_NN_2_3::synapse0x29c0a30() {
   return (neuron0x29c7d40()*-0.311789);
}

double NNfunction_NN_2_3::synapse0x29c0a70() {
   return (neuron0x29c8710()*0.621638);
}

double NNfunction_NN_2_3::synapse0x29b4ba0() {
   return (neuron0x29c90e0()*0.370715);
}

double NNfunction_NN_2_3::synapse0x29b4be0() {
   return (neuron0x29c9ab0()*-0.378033);
}

double NNfunction_NN_2_3::synapse0x29c2b20() {
   return (neuron0x29ca480()*3.88298);
}

double NNfunction_NN_2_3::synapse0x29c2b60() {
   return (neuron0x29cae50()*5.15333);
}

double NNfunction_NN_2_3::synapse0x29c34f0() {
   return (neuron0x29cb820()*0.645291);
}

double NNfunction_NN_2_3::synapse0x29c3530() {
   return (neuron0x29cc1f0()*-0.551919);
}

double NNfunction_NN_2_3::synapse0x29c3ec0() {
   return (neuron0x29c2280()*1.4551);
}

double NNfunction_NN_2_3::synapse0x29c3f00() {
   return (neuron0x29cedd0()*1.28002);
}

double NNfunction_NN_2_3::synapse0x29c4890() {
   return (neuron0x29cf7a0()*0.762036);
}

double NNfunction_NN_2_3::synapse0x29c48d0() {
   return (neuron0x29d0170()*-3.52801);
}

double NNfunction_NN_2_3::synapse0x29c5260() {
   return (neuron0x29d0b40()*-2.2912);
}

double NNfunction_NN_2_3::synapse0x29c52a0() {
   return (neuron0x29d1510()*2.93873);
}

double NNfunction_NN_2_3::synapse0x29bddb0() {
   return (neuron0x29d1ee0()*4.73762);
}

double NNfunction_NN_2_3::synapse0x29bddf0() {
   return (neuron0x29d28b0()*0.227639);
}

double NNfunction_NN_2_3::synapse0x29c7660() {
   return (neuron0x29d3280()*1.52894);
}

double NNfunction_NN_2_3::synapse0x29c76a0() {
   return (neuron0x29d3e60()*0.372758);
}

double NNfunction_NN_2_3::synapse0x29c7ff0() {
   return (neuron0x29d4830()*0.690905);
}

double NNfunction_NN_2_3::synapse0x29c8030() {
   return (neuron0x29c56b0()*-0.560198);
}

double NNfunction_NN_2_3::synapse0x29c89c0() {
   return (neuron0x29c6080()*0.0102403);
}

double NNfunction_NN_2_3::synapse0x29c8a00() {
   return (neuron0x29c6a50()*1.90955);
}

double NNfunction_NN_2_3::synapse0x29c9390() {
   return (neuron0x29d9090()*-7.25619);
}

double NNfunction_NN_2_3::synapse0x29c93d0() {
   return (neuron0x29d9940()*0.20571);
}

double NNfunction_NN_2_3::synapse0x29c9d60() {
   return (neuron0x29da310()*0.653224);
}

double NNfunction_NN_2_3::synapse0x29c9da0() {
   return (neuron0x29dace0()*1.43259);
}

double NNfunction_NN_2_3::synapse0x29cc4a0() {
   return (neuron0x29b6c60()*-0.365359);
}

double NNfunction_NN_2_3::synapse0x29cc4e0() {
   return (neuron0x29b7570()*-2.43347);
}

double NNfunction_NN_2_3::synapse0x29c1a60() {
   return (neuron0x29b8050()*-0.24193);
}

double NNfunction_NN_2_3::synapse0x29c1aa0() {
   return (neuron0x27718e0()*-0.849566);
}

double NNfunction_NN_2_3::synapse0x29cf080() {
   return (neuron0x29b8e70()*-1.18955);
}

double NNfunction_NN_2_3::synapse0x29cf0c0() {
   return (neuron0x29b9840()*0.684701);
}

double NNfunction_NN_2_3::synapse0x29cfa50() {
   return (neuron0x29ba610()*-0.156772);
}

double NNfunction_NN_2_3::synapse0x29cfa90() {
   return (neuron0x29bafe0()*-1.17121);
}

double NNfunction_NN_2_3::synapse0x29d0420() {
   return (neuron0x29bb9b0()*2.61915);
}

double NNfunction_NN_2_3::synapse0x29d0460() {
   return (neuron0x29bc490()*-1.59997);
}

double NNfunction_NN_2_3::synapse0x29d0df0() {
   return (neuron0x29bce60()*-0.292928);
}

double NNfunction_NN_2_3::synapse0x29d0e30() {
   return (neuron0x29b9f40()*-0.622515);
}

double NNfunction_NN_2_3::synapse0x29d17c0() {
   return (neuron0x29bea10()*2.33926);
}

double NNfunction_NN_2_3::synapse0x29d1800() {
   return (neuron0x29bf3e0()*-0.307408);
}

double NNfunction_NN_2_3::synapse0x29d2190() {
   return (neuron0x29bfdb0()*-0.694558);
}

double NNfunction_NN_2_3::synapse0x29d21d0() {
   return (neuron0x29c0780()*-0.595273);
}

double NNfunction_NN_2_3::synapse0x29d2b60() {
   return (neuron0x29c2590()*-0.981581);
}

double NNfunction_NN_2_3::synapse0x29d2ba0() {
   return (neuron0x29c2870()*2.76734);
}

double NNfunction_NN_2_3::synapse0x29d3530() {
   return (neuron0x29c3240()*0.0182023);
}

double NNfunction_NN_2_3::synapse0x29d3570() {
   return (neuron0x29c3c10()*-0.033247);
}

double NNfunction_NN_2_3::synapse0x29d4110() {
   return (neuron0x29c45e0()*-2.00631);
}

double NNfunction_NN_2_3::synapse0x29d4150() {
   return (neuron0x29c4fb0()*-0.289297);
}

double NNfunction_NN_2_3::synapse0x29d4ae0() {
   return (neuron0x29bdb00()*-0.552915);
}

double NNfunction_NN_2_3::synapse0x29d4b20() {
   return (neuron0x29be4d0()*-0.449527);
}

double NNfunction_NN_2_3::synapse0x29c5960() {
   return (neuron0x29c7d40()*0.385706);
}

double NNfunction_NN_2_3::synapse0x29c59a0() {
   return (neuron0x29c8710()*0.345661);
}

double NNfunction_NN_2_3::synapse0x29c6330() {
   return (neuron0x29c90e0()*-0.459697);
}

double NNfunction_NN_2_3::synapse0x29c6370() {
   return (neuron0x29c9ab0()*0.607595);
}

double NNfunction_NN_2_3::synapse0x29c6d00() {
   return (neuron0x29ca480()*6.1204);
}

double NNfunction_NN_2_3::synapse0x29c6d40() {
   return (neuron0x29cae50()*0.262692);
}

double NNfunction_NN_2_3::synapse0x29d9220() {
   return (neuron0x29cb820()*0.123102);
}

double NNfunction_NN_2_3::synapse0x29d9260() {
   return (neuron0x29cc1f0()*1.24459);
}

double NNfunction_NN_2_3::synapse0x29d9bf0() {
   return (neuron0x29c2280()*-1.07087);
}

double NNfunction_NN_2_3::synapse0x29d9c30() {
   return (neuron0x29cedd0()*-0.360931);
}

double NNfunction_NN_2_3::synapse0x29da5c0() {
   return (neuron0x29cf7a0()*-0.305052);
}

double NNfunction_NN_2_3::synapse0x29da600() {
   return (neuron0x29d0170()*-0.00412343);
}

double NNfunction_NN_2_3::synapse0x29daf90() {
   return (neuron0x29d0b40()*-4.70969);
}

double NNfunction_NN_2_3::synapse0x29dafd0() {
   return (neuron0x29d1510()*0.22521);
}

double NNfunction_NN_2_3::synapse0x29b6e80() {
   return (neuron0x29d1ee0()*4.54593);
}

double NNfunction_NN_2_3::synapse0x29b6ec0() {
   return (neuron0x29d28b0()*0.107965);
}

double NNfunction_NN_2_3::synapse0x29ca730() {
   return (neuron0x29d3280()*2.62369);
}

double NNfunction_NN_2_3::synapse0x29ca770() {
   return (neuron0x29d3e60()*-0.206616);
}

double NNfunction_NN_2_3::synapse0x29db6b0() {
   return (neuron0x29d4830()*3.24151);
}

double NNfunction_NN_2_3::synapse0x29db6f0() {
   return (neuron0x29c56b0()*1.31541);
}

double NNfunction_NN_2_3::synapse0x29db730() {
   return (neuron0x29c6080()*-1.07824);
}

double NNfunction_NN_2_3::synapse0x29db770() {
   return (neuron0x29c6a50()*2.15706);
}

double NNfunction_NN_2_3::synapse0x29e2620() {
   return (neuron0x29d9090()*-6.16896);
}

double NNfunction_NN_2_3::synapse0x29e2660() {
   return (neuron0x29d9940()*-0.457409);
}

double NNfunction_NN_2_3::synapse0x29e26a0() {
   return (neuron0x29da310()*-0.515393);
}

double NNfunction_NN_2_3::synapse0x29e26e0() {
   return (neuron0x29dace0()*1.8805);
}

double NNfunction_NN_2_3::synapse0x29e2a60() {
   return (neuron0x29b6c60()*-0.0881751);
}

double NNfunction_NN_2_3::synapse0x29e2aa0() {
   return (neuron0x29b7570()*3.00262);
}

double NNfunction_NN_2_3::synapse0x29e2ae0() {
   return (neuron0x29b8050()*-0.0173249);
}

double NNfunction_NN_2_3::synapse0x29e2b20() {
   return (neuron0x27718e0()*-2.90074);
}

double NNfunction_NN_2_3::synapse0x29e2b60() {
   return (neuron0x29b8e70()*0.0455632);
}

double NNfunction_NN_2_3::synapse0x29e2ba0() {
   return (neuron0x29b9840()*-0.304526);
}

double NNfunction_NN_2_3::synapse0x29e2be0() {
   return (neuron0x29ba610()*-0.0342358);
}

double NNfunction_NN_2_3::synapse0x29e2c20() {
   return (neuron0x29bafe0()*-1.01052);
}

double NNfunction_NN_2_3::synapse0x29e2c60() {
   return (neuron0x29bb9b0()*0.438332);
}

double NNfunction_NN_2_3::synapse0x29e2ca0() {
   return (neuron0x29bc490()*1.08612);
}

double NNfunction_NN_2_3::synapse0x29e2ce0() {
   return (neuron0x29bce60()*-0.0583954);
}

double NNfunction_NN_2_3::synapse0x29e2d20() {
   return (neuron0x29b9f40()*-0.0650815);
}

double NNfunction_NN_2_3::synapse0x29e2d60() {
   return (neuron0x29bea10()*-0.144536);
}

double NNfunction_NN_2_3::synapse0x29e2da0() {
   return (neuron0x29bf3e0()*-0.0407394);
}

double NNfunction_NN_2_3::synapse0x29e2de0() {
   return (neuron0x29bfdb0()*0.141285);
}

double NNfunction_NN_2_3::synapse0x29e2e20() {
   return (neuron0x29c0780()*0.0944504);
}

double NNfunction_NN_2_3::synapse0x29e28b0() {
   return (neuron0x29c2590()*-2.48602);
}

double NNfunction_NN_2_3::synapse0x29e28f0() {
   return (neuron0x29c2870()*0.259273);
}

double NNfunction_NN_2_3::synapse0x29e2f70() {
   return (neuron0x29c3240()*0.0807148);
}

double NNfunction_NN_2_3::synapse0x29e2fb0() {
   return (neuron0x29c3c10()*-0.0967406);
}

double NNfunction_NN_2_3::synapse0x29e2ff0() {
   return (neuron0x29c45e0()*-0.739993);
}

double NNfunction_NN_2_3::synapse0x29e3030() {
   return (neuron0x29c4fb0()*-0.0722268);
}

double NNfunction_NN_2_3::synapse0x29e3070() {
   return (neuron0x29bdb00()*0.379493);
}

double NNfunction_NN_2_3::synapse0x29e30b0() {
   return (neuron0x29be4d0()*0.0575706);
}

double NNfunction_NN_2_3::synapse0x29e30f0() {
   return (neuron0x29c7d40()*0.00537695);
}

double NNfunction_NN_2_3::synapse0x29e3130() {
   return (neuron0x29c8710()*0.279008);
}

double NNfunction_NN_2_3::synapse0x29e3170() {
   return (neuron0x29c90e0()*-0.0379724);
}

double NNfunction_NN_2_3::synapse0x29e31b0() {
   return (neuron0x29c9ab0()*-0.146014);
}

double NNfunction_NN_2_3::synapse0x29e31f0() {
   return (neuron0x29ca480()*-0.172925);
}

double NNfunction_NN_2_3::synapse0x29e3230() {
   return (neuron0x29cae50()*-0.169932);
}

double NNfunction_NN_2_3::synapse0x29e3270() {
   return (neuron0x29cb820()*0.0254495);
}

double NNfunction_NN_2_3::synapse0x29e32b0() {
   return (neuron0x29cc1f0()*-1.11941);
}

double NNfunction_NN_2_3::synapse0x29e2e60() {
   return (neuron0x29c2280()*0.107985);
}

double NNfunction_NN_2_3::synapse0x29e2ea0() {
   return (neuron0x29cedd0()*0.223088);
}

double NNfunction_NN_2_3::synapse0x29e2ee0() {
   return (neuron0x29cf7a0()*1.06331);
}

double NNfunction_NN_2_3::synapse0x29e2f20() {
   return (neuron0x29d0170()*-0.122755);
}

double NNfunction_NN_2_3::synapse0x29e3500() {
   return (neuron0x29d0b40()*-0.165664);
}

double NNfunction_NN_2_3::synapse0x29e3540() {
   return (neuron0x29d1510()*-1.22529);
}

double NNfunction_NN_2_3::synapse0x29e3580() {
   return (neuron0x29d1ee0()*-0.271996);
}

double NNfunction_NN_2_3::synapse0x29e35c0() {
   return (neuron0x29d28b0()*0.0443476);
}

double NNfunction_NN_2_3::synapse0x29e3600() {
   return (neuron0x29d3280()*0.0403071);
}

double NNfunction_NN_2_3::synapse0x29e3640() {
   return (neuron0x29d3e60()*-0.0670912);
}

double NNfunction_NN_2_3::synapse0x29e3680() {
   return (neuron0x29d4830()*0.26659);
}

double NNfunction_NN_2_3::synapse0x29e36c0() {
   return (neuron0x29c56b0()*0.16452);
}

double NNfunction_NN_2_3::synapse0x29e3700() {
   return (neuron0x29c6080()*-0.37349);
}

double NNfunction_NN_2_3::synapse0x29e3740() {
   return (neuron0x29c6a50()*0.470435);
}

double NNfunction_NN_2_3::synapse0x29e3780() {
   return (neuron0x29d9090()*0.187457);
}

double NNfunction_NN_2_3::synapse0x29e37c0() {
   return (neuron0x29d9940()*-0.0615566);
}

double NNfunction_NN_2_3::synapse0x29e3800() {
   return (neuron0x29da310()*-0.0763167);
}

double NNfunction_NN_2_3::synapse0x29e3840() {
   return (neuron0x29dace0()*0.0291881);
}

double NNfunction_NN_2_3::synapse0x29e3bc0() {
   return (neuron0x29b6c60()*-0.166053);
}

double NNfunction_NN_2_3::synapse0x29e3c00() {
   return (neuron0x29b7570()*-0.296802);
}

double NNfunction_NN_2_3::synapse0x29e3c40() {
   return (neuron0x29b8050()*-0.148119);
}

double NNfunction_NN_2_3::synapse0x29e3c80() {
   return (neuron0x27718e0()*0.0872496);
}

double NNfunction_NN_2_3::synapse0x29e3cc0() {
   return (neuron0x29b8e70()*0.54966);
}

double NNfunction_NN_2_3::synapse0x29e3d00() {
   return (neuron0x29b9840()*0.316068);
}

double NNfunction_NN_2_3::synapse0x29e3d40() {
   return (neuron0x29ba610()*-0.110936);
}

double NNfunction_NN_2_3::synapse0x29e3d80() {
   return (neuron0x29bafe0()*0.845558);
}

double NNfunction_NN_2_3::synapse0x29e3dc0() {
   return (neuron0x29bb9b0()*0.143331);
}

double NNfunction_NN_2_3::synapse0x29e3e00() {
   return (neuron0x29bc490()*-1.53945);
}

double NNfunction_NN_2_3::synapse0x29e3e40() {
   return (neuron0x29bce60()*-0.158589);
}

double NNfunction_NN_2_3::synapse0x29e3e80() {
   return (neuron0x29b9f40()*-0.314101);
}

double NNfunction_NN_2_3::synapse0x29e3ec0() {
   return (neuron0x29bea10()*0.64033);
}

double NNfunction_NN_2_3::synapse0x29e3f00() {
   return (neuron0x29bf3e0()*-0.209699);
}

double NNfunction_NN_2_3::synapse0x29e3f40() {
   return (neuron0x29bfdb0()*-1.18105);
}

double NNfunction_NN_2_3::synapse0x29e3f80() {
   return (neuron0x29c0780()*-0.250615);
}

double NNfunction_NN_2_3::synapse0x29e3a10() {
   return (neuron0x29c2590()*0.747577);
}

double NNfunction_NN_2_3::synapse0x29e3a50() {
   return (neuron0x29c2870()*1.43189);
}

double NNfunction_NN_2_3::synapse0x29e40d0() {
   return (neuron0x29c3240()*-0.477196);
}

double NNfunction_NN_2_3::synapse0x29e4110() {
   return (neuron0x29c3c10()*0.0534274);
}

double NNfunction_NN_2_3::synapse0x29e4150() {
   return (neuron0x29c45e0()*3.39677);
}

double NNfunction_NN_2_3::synapse0x29e4190() {
   return (neuron0x29c4fb0()*-0.166311);
}

double NNfunction_NN_2_3::synapse0x29e41d0() {
   return (neuron0x29bdb00()*0.0709819);
}

double NNfunction_NN_2_3::synapse0x29e4210() {
   return (neuron0x29be4d0()*1.2069);
}

double NNfunction_NN_2_3::synapse0x29e4250() {
   return (neuron0x29c7d40()*0.534176);
}

double NNfunction_NN_2_3::synapse0x29e4290() {
   return (neuron0x29c8710()*-1.66368);
}

double NNfunction_NN_2_3::synapse0x29e42d0() {
   return (neuron0x29c90e0()*-0.261184);
}

double NNfunction_NN_2_3::synapse0x29e4310() {
   return (neuron0x29c9ab0()*0.359207);
}

double NNfunction_NN_2_3::synapse0x29e4350() {
   return (neuron0x29ca480()*0.0539601);
}

double NNfunction_NN_2_3::synapse0x29e4390() {
   return (neuron0x29cae50()*0.0162545);
}

double NNfunction_NN_2_3::synapse0x29e43d0() {
   return (neuron0x29cb820()*0.0120408);
}

double NNfunction_NN_2_3::synapse0x29e4410() {
   return (neuron0x29cc1f0()*0.206372);
}

double NNfunction_NN_2_3::synapse0x29e3fc0() {
   return (neuron0x29c2280()*0.232845);
}

double NNfunction_NN_2_3::synapse0x29e4000() {
   return (neuron0x29cedd0()*0.723442);
}

double NNfunction_NN_2_3::synapse0x29e4040() {
   return (neuron0x29cf7a0()*-0.601988);
}

double NNfunction_NN_2_3::synapse0x29e4080() {
   return (neuron0x29d0170()*-0.0230003);
}

double NNfunction_NN_2_3::synapse0x29e4660() {
   return (neuron0x29d0b40()*-2.37605);
}

double NNfunction_NN_2_3::synapse0x29e46a0() {
   return (neuron0x29d1510()*0.710741);
}

double NNfunction_NN_2_3::synapse0x29e46e0() {
   return (neuron0x29d1ee0()*0.768802);
}

double NNfunction_NN_2_3::synapse0x29e4720() {
   return (neuron0x29d28b0()*-0.000530625);
}

double NNfunction_NN_2_3::synapse0x29e4760() {
   return (neuron0x29d3280()*0.87385);
}

double NNfunction_NN_2_3::synapse0x29e47a0() {
   return (neuron0x29d3e60()*-0.127013);
}

double NNfunction_NN_2_3::synapse0x29e47e0() {
   return (neuron0x29d4830()*-1.32773);
}

double NNfunction_NN_2_3::synapse0x29e4820() {
   return (neuron0x29c56b0()*0.161343);
}

double NNfunction_NN_2_3::synapse0x29e4860() {
   return (neuron0x29c6080()*-0.953861);
}

double NNfunction_NN_2_3::synapse0x29e48a0() {
   return (neuron0x29c6a50()*-1.46099);
}

double NNfunction_NN_2_3::synapse0x29e48e0() {
   return (neuron0x29d9090()*-0.398726);
}

double NNfunction_NN_2_3::synapse0x29e4920() {
   return (neuron0x29d9940()*-0.238038);
}

double NNfunction_NN_2_3::synapse0x29e4960() {
   return (neuron0x29da310()*-0.334698);
}

double NNfunction_NN_2_3::synapse0x29e49a0() {
   return (neuron0x29dace0()*0.912993);
}

double NNfunction_NN_2_3::synapse0x29e4d20() {
   return (neuron0x29b6c60()*-0.61346);
}

double NNfunction_NN_2_3::synapse0x29e4d60() {
   return (neuron0x29b7570()*-1.43946);
}

double NNfunction_NN_2_3::synapse0x29e4da0() {
   return (neuron0x29b8050()*-0.156801);
}

double NNfunction_NN_2_3::synapse0x29e4de0() {
   return (neuron0x27718e0()*-1.19756);
}

double NNfunction_NN_2_3::synapse0x29e4e20() {
   return (neuron0x29b8e70()*-0.800026);
}

double NNfunction_NN_2_3::synapse0x29e4e60() {
   return (neuron0x29b9840()*1.3622);
}

double NNfunction_NN_2_3::synapse0x29e4ea0() {
   return (neuron0x29ba610()*-0.622469);
}

double NNfunction_NN_2_3::synapse0x29e4ee0() {
   return (neuron0x29bafe0()*1.79615);
}

double NNfunction_NN_2_3::synapse0x29e4f20() {
   return (neuron0x29bb9b0()*-3.52028);
}

double NNfunction_NN_2_3::synapse0x29e4f60() {
   return (neuron0x29bc490()*2.94801);
}

double NNfunction_NN_2_3::synapse0x29e4fa0() {
   return (neuron0x29bce60()*-0.336227);
}

double NNfunction_NN_2_3::synapse0x29e4fe0() {
   return (neuron0x29b9f40()*-1.06674);
}

double NNfunction_NN_2_3::synapse0x29e5020() {
   return (neuron0x29bea10()*0.571486);
}

double NNfunction_NN_2_3::synapse0x29e5060() {
   return (neuron0x29bf3e0()*3.81167);
}

double NNfunction_NN_2_3::synapse0x29e50a0() {
   return (neuron0x29bfdb0()*-3.30722);
}

double NNfunction_NN_2_3::synapse0x29e50e0() {
   return (neuron0x29c0780()*-1.3055);
}

double NNfunction_NN_2_3::synapse0x29e4b70() {
   return (neuron0x29c2590()*0.683372);
}

double NNfunction_NN_2_3::synapse0x29e4bb0() {
   return (neuron0x29c2870()*0.0963426);
}

double NNfunction_NN_2_3::synapse0x29e5230() {
   return (neuron0x29c3240()*-0.110905);
}

double NNfunction_NN_2_3::synapse0x29e5270() {
   return (neuron0x29c3c10()*-0.547124);
}

double NNfunction_NN_2_3::synapse0x29e52b0() {
   return (neuron0x29c45e0()*4.13075);
}

double NNfunction_NN_2_3::synapse0x29e52f0() {
   return (neuron0x29c4fb0()*-0.629087);
}

double NNfunction_NN_2_3::synapse0x29e5330() {
   return (neuron0x29bdb00()*-5.36808);
}

double NNfunction_NN_2_3::synapse0x29e5370() {
   return (neuron0x29be4d0()*-0.201285);
}

double NNfunction_NN_2_3::synapse0x29e53b0() {
   return (neuron0x29c7d40()*1.21603);
}

double NNfunction_NN_2_3::synapse0x29e53f0() {
   return (neuron0x29c8710()*0.308463);
}

double NNfunction_NN_2_3::synapse0x29e5430() {
   return (neuron0x29c90e0()*-0.840749);
}

double NNfunction_NN_2_3::synapse0x29e5470() {
   return (neuron0x29c9ab0()*-2.64565);
}

double NNfunction_NN_2_3::synapse0x29e54b0() {
   return (neuron0x29ca480()*-8.5985);
}

double NNfunction_NN_2_3::synapse0x29e54f0() {
   return (neuron0x29cae50()*1.54525);
}

double NNfunction_NN_2_3::synapse0x29e5530() {
   return (neuron0x29cb820()*0.262209);
}

double NNfunction_NN_2_3::synapse0x29e5570() {
   return (neuron0x29cc1f0()*1.21031);
}

double NNfunction_NN_2_3::synapse0x29e5120() {
   return (neuron0x29c2280()*-2.29543);
}

double NNfunction_NN_2_3::synapse0x29e5160() {
   return (neuron0x29cedd0()*-5.5963);
}

double NNfunction_NN_2_3::synapse0x29e51a0() {
   return (neuron0x29cf7a0()*-0.188153);
}

double NNfunction_NN_2_3::synapse0x29e51e0() {
   return (neuron0x29d0170()*2.52413);
}

double NNfunction_NN_2_3::synapse0x29e57c0() {
   return (neuron0x29d0b40()*3.03748);
}

double NNfunction_NN_2_3::synapse0x29e5800() {
   return (neuron0x29d1510()*3.73306);
}

double NNfunction_NN_2_3::synapse0x29e5840() {
   return (neuron0x29d1ee0()*-3.68259);
}

double NNfunction_NN_2_3::synapse0x29e5880() {
   return (neuron0x29d28b0()*0.476385);
}

double NNfunction_NN_2_3::synapse0x29e58c0() {
   return (neuron0x29d3280()*-5.35113);
}

double NNfunction_NN_2_3::synapse0x29e5900() {
   return (neuron0x29d3e60()*-0.409042);
}

double NNfunction_NN_2_3::synapse0x29e5940() {
   return (neuron0x29d4830()*1.12501);
}

double NNfunction_NN_2_3::synapse0x29e5980() {
   return (neuron0x29c56b0()*-0.271042);
}

double NNfunction_NN_2_3::synapse0x29e59c0() {
   return (neuron0x29c6080()*-2.18728);
}

double NNfunction_NN_2_3::synapse0x29e5a00() {
   return (neuron0x29c6a50()*0.640972);
}

double NNfunction_NN_2_3::synapse0x29e5a40() {
   return (neuron0x29d9090()*10.1829);
}

double NNfunction_NN_2_3::synapse0x29e5a80() {
   return (neuron0x29d9940()*-0.489471);
}

double NNfunction_NN_2_3::synapse0x29e5ac0() {
   return (neuron0x29da310()*-0.746482);
}

double NNfunction_NN_2_3::synapse0x29e5b00() {
   return (neuron0x29dace0()*-0.219953);
}

double NNfunction_NN_2_3::synapse0x29b6c20() {
   return (neuron0x29e1ee0()*-7.56155);
}

double NNfunction_NN_2_3::synapse0x29e5d60() {
   return (neuron0x29e2280()*4.09854);
}

double NNfunction_NN_2_3::synapse0x29e5da0() {
   return (neuron0x29e2720()*-5.94242);
}

double NNfunction_NN_2_3::synapse0x29e5de0() {
   return (neuron0x29e3880()*-5.76653);
}

double NNfunction_NN_2_3::synapse0x29e5e20() {
   return (neuron0x29e49e0()*3.47235);
}

