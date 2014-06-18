#include "NNfunction_NN_2_2.h"
#include <cmath>

double NNfunction_NN_2_2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5331)/15.2624;
   input1 = (in1 - 38.518)/1025.81;
   input2 = (in2 - 401.421)/488.614;
   input3 = (in3 - -23.509)/844.025;
   input4 = (in4 - 1080.64)/945.015;
   input5 = (in5 - 922.789)/959.021;
   input6 = (in6 - 932.657)/960.129;
   input7 = (in7 - 947.421)/935.79;
   input8 = (in8 - 935.07)/975.487;
   input9 = (in9 - 921.805)/964.445;
   input10 = (in10 - 982.122)/954.211;
   input11 = (in11 - 696.236)/847.477;
   input12 = (in12 - 728.749)/873.348;
   input13 = (in13 - 505.591)/526.685;
   input14 = (in14 - 704.953)/807.806;
   input15 = (in15 - 725.884)/822.444;
   input16 = (in16 - 543.686)/572.814;
   input17 = (in17 - 751.972)/895.81;
   input18 = (in18 - 762.092)/907.408;
   input19 = (in19 - 790.538)/876.284;
   input20 = (in20 - -10.7959)/487.845;
   input21 = (in21 - 0.791376)/1147.94;
   input22 = (in22 - 9.5035)/1200.45;
   input23 = (in23 - -82.1884)/496.945;
   switch(index) {
     case 0:
         return neuron0x25e7420();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_2::Value(int index, double* input) {
   input0 = (input[0] - 23.5331)/15.2624;
   input1 = (input[1] - 38.518)/1025.81;
   input2 = (input[2] - 401.421)/488.614;
   input3 = (input[3] - -23.509)/844.025;
   input4 = (input[4] - 1080.64)/945.015;
   input5 = (input[5] - 922.789)/959.021;
   input6 = (input[6] - 932.657)/960.129;
   input7 = (input[7] - 947.421)/935.79;
   input8 = (input[8] - 935.07)/975.487;
   input9 = (input[9] - 921.805)/964.445;
   input10 = (input[10] - 982.122)/954.211;
   input11 = (input[11] - 696.236)/847.477;
   input12 = (input[12] - 728.749)/873.348;
   input13 = (input[13] - 505.591)/526.685;
   input14 = (input[14] - 704.953)/807.806;
   input15 = (input[15] - 725.884)/822.444;
   input16 = (input[16] - 543.686)/572.814;
   input17 = (input[17] - 751.972)/895.81;
   input18 = (input[18] - 762.092)/907.408;
   input19 = (input[19] - 790.538)/876.284;
   input20 = (input[20] - -10.7959)/487.845;
   input21 = (input[21] - 0.791376)/1147.94;
   input22 = (input[22] - 9.5035)/1200.45;
   input23 = (input[23] - -82.1884)/496.945;
   switch(index) {
     case 0:
         return neuron0x25e7420();
     default:
         return 0.;
   }
}

double NNfunction_NN_2_2::neuron0x25b34e0() {
   return input0;
}

double NNfunction_NN_2_2::neuron0x25b3820() {
   return input1;
}

double NNfunction_NN_2_2::neuron0x25b3b60() {
   return input2;
}

double NNfunction_NN_2_2::neuron0x25b3ea0() {
   return input3;
}

double NNfunction_NN_2_2::neuron0x25b41e0() {
   return input4;
}

double NNfunction_NN_2_2::neuron0x25b4520() {
   return input5;
}

double NNfunction_NN_2_2::neuron0x25b4860() {
   return input6;
}

double NNfunction_NN_2_2::neuron0x25b4ba0() {
   return input7;
}

double NNfunction_NN_2_2::neuron0x25b4ee0() {
   return input8;
}

double NNfunction_NN_2_2::neuron0x25b5220() {
   return input9;
}

double NNfunction_NN_2_2::neuron0x25b5560() {
   return input10;
}

double NNfunction_NN_2_2::neuron0x25b58a0() {
   return input11;
}

double NNfunction_NN_2_2::neuron0x25b5be0() {
   return input12;
}

double NNfunction_NN_2_2::neuron0x25b5f20() {
   return input13;
}

double NNfunction_NN_2_2::neuron0x25b6260() {
   return input14;
}

double NNfunction_NN_2_2::neuron0x25b65a0() {
   return input15;
}

double NNfunction_NN_2_2::neuron0x25b68e0() {
   return input16;
}

double NNfunction_NN_2_2::neuron0x25b6e40() {
   return input17;
}

double NNfunction_NN_2_2::neuron0x25b7060() {
   return input18;
}

double NNfunction_NN_2_2::neuron0x25b73a0() {
   return input19;
}

double NNfunction_NN_2_2::neuron0x25b76e0() {
   return input20;
}

double NNfunction_NN_2_2::neuron0x25b7a20() {
   return input21;
}

double NNfunction_NN_2_2::neuron0x25b7d60() {
   return input22;
}

double NNfunction_NN_2_2::neuron0x25b80a0() {
   return input23;
}

double NNfunction_NN_2_2::input0x25b8540() {
   double input = 1.09413;
   input += synapse0x2373350();
   input += synapse0x25b33a0();
   input += synapse0x25b33e0();
   input += synapse0x25b87f0();
   input += synapse0x25b8830();
   input += synapse0x25b8870();
   input += synapse0x25b88b0();
   input += synapse0x25b88f0();
   input += synapse0x25b8930();
   input += synapse0x25b8970();
   input += synapse0x25b89b0();
   input += synapse0x25b89f0();
   input += synapse0x25b8a30();
   input += synapse0x25b8a70();
   input += synapse0x25b8ab0();
   input += synapse0x25b8af0();
   input += synapse0x25b3310();
   input += synapse0x25b3350();
   input += synapse0x2364bf0();
   input += synapse0x2364c30();
   input += synapse0x25b8d50();
   input += synapse0x25b8d90();
   input += synapse0x25b8dd0();
   input += synapse0x25b8e10();
   return input;
}

double NNfunction_NN_2_2::neuron0x25b8540() {
   double input = input0x25b8540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25b8e50() {
   double input = -0.350085;
   input += synapse0x25b9190();
   input += synapse0x25b91d0();
   input += synapse0x25b9210();
   input += synapse0x25b9250();
   input += synapse0x25b9290();
   input += synapse0x25b92d0();
   input += synapse0x25b9310();
   input += synapse0x25b9350();
   input += synapse0x25b9390();
   input += synapse0x25b8c40();
   input += synapse0x25b8c80();
   input += synapse0x25b8cc0();
   input += synapse0x25b8d00();
   input += synapse0x25b95e0();
   input += synapse0x25b9620();
   input += synapse0x25b9660();
   input += synapse0x25b8fe0();
   input += synapse0x25b9020();
   input += synapse0x25b97b0();
   input += synapse0x25b97f0();
   input += synapse0x25b9830();
   input += synapse0x25b9870();
   input += synapse0x25b98b0();
   input += synapse0x25b98f0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25b8e50() {
   double input = input0x25b8e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25b9930() {
   double input = -0.196218;
   input += synapse0x25b9c70();
   input += synapse0x25b9cb0();
   input += synapse0x25b9cf0();
   input += synapse0x25b9d30();
   input += synapse0x25b9d70();
   input += synapse0x25b9db0();
   input += synapse0x25b9df0();
   input += synapse0x25b9e30();
   input += synapse0x25b9e70();
   input += synapse0x25b9eb0();
   input += synapse0x25b9ef0();
   input += synapse0x25b9f30();
   input += synapse0x25b9f70();
   input += synapse0x25b9fb0();
   input += synapse0x25b9ff0();
   input += synapse0x25ba030();
   input += synapse0x25b9ac0();
   input += synapse0x25b9b00();
   input += synapse0x2372a40();
   input += synapse0x2372a80();
   input += synapse0x25a2570();
   input += synapse0x25a25b0();
   input += synapse0x25a25f0();
   input += synapse0x25b3420();
   return input;
}

double NNfunction_NN_2_2::neuron0x25b9930() {
   double input = input0x25b9930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x23731c0() {
   double input = -1.02579;
   input += synapse0x25b9580();
   input += synapse0x25b3460();
   input += synapse0x25b34a0();
   input += synapse0x25ba180();
   input += synapse0x25ba1c0();
   input += synapse0x25ba200();
   input += synapse0x25ba240();
   input += synapse0x25ba280();
   input += synapse0x25ba2c0();
   input += synapse0x25ba300();
   input += synapse0x25ba340();
   input += synapse0x25ba380();
   input += synapse0x25ba3c0();
   input += synapse0x25ba400();
   input += synapse0x25ba440();
   input += synapse0x25ba480();
   input += synapse0x25b93d0();
   input += synapse0x25b9410();
   input += synapse0x25ba5d0();
   input += synapse0x25ba610();
   input += synapse0x25ba650();
   input += synapse0x25ba690();
   input += synapse0x25ba6d0();
   input += synapse0x25ba710();
   return input;
}

double NNfunction_NN_2_2::neuron0x23731c0() {
   double input = input0x23731c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25ba750() {
   double input = -0.484817;
   input += synapse0x25baa90();
   input += synapse0x25baad0();
   input += synapse0x25bab10();
   input += synapse0x25bab50();
   input += synapse0x25bab90();
   input += synapse0x25babd0();
   input += synapse0x25bac10();
   input += synapse0x25bac50();
   input += synapse0x25bac90();
   input += synapse0x25bacd0();
   input += synapse0x25bad10();
   input += synapse0x25bad50();
   input += synapse0x25bad90();
   input += synapse0x25badd0();
   input += synapse0x25bae10();
   input += synapse0x25bae50();
   input += synapse0x25ba8e0();
   input += synapse0x25ba920();
   input += synapse0x25bafa0();
   input += synapse0x25bafe0();
   input += synapse0x25bb020();
   input += synapse0x25bb060();
   input += synapse0x25bb0a0();
   input += synapse0x25bb0e0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25ba750() {
   double input = input0x25ba750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25bb120() {
   double input = -0.194393;
   input += synapse0x25bb460();
   input += synapse0x25bb4a0();
   input += synapse0x25bb4e0();
   input += synapse0x25bb520();
   input += synapse0x25bb560();
   input += synapse0x25bb5a0();
   input += synapse0x25bb5e0();
   input += synapse0x25bb620();
   input += synapse0x25bb660();
   input += synapse0x2372db0();
   input += synapse0x2372df0();
   input += synapse0x2372e30();
   input += synapse0x2372e70();
   input += synapse0x2372eb0();
   input += synapse0x2372ef0();
   input += synapse0x2372f30();
   input += synapse0x25bb2b0();
   input += synapse0x25bb2f0();
   input += synapse0x2373080();
   input += synapse0x23730c0();
   input += synapse0x2373100();
   input += synapse0x2373140();
   input += synapse0x2373180();
   input += synapse0x25bbeb0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25bb120() {
   double input = input0x25bb120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25bbef0() {
   double input = -1.7705;
   input += synapse0x25bc230();
   input += synapse0x25bc270();
   input += synapse0x25bc2b0();
   input += synapse0x25bc2f0();
   input += synapse0x25bc330();
   input += synapse0x25bc370();
   input += synapse0x25bc3b0();
   input += synapse0x25bc3f0();
   input += synapse0x25bc430();
   input += synapse0x25bc470();
   input += synapse0x25bc4b0();
   input += synapse0x25bc4f0();
   input += synapse0x25bc530();
   input += synapse0x25bc570();
   input += synapse0x25bc5b0();
   input += synapse0x25bc5f0();
   input += synapse0x25bc080();
   input += synapse0x25bc0c0();
   input += synapse0x25bc740();
   input += synapse0x25bc780();
   input += synapse0x25bc7c0();
   input += synapse0x25bc800();
   input += synapse0x25bc840();
   input += synapse0x25bc880();
   return input;
}

double NNfunction_NN_2_2::neuron0x25bbef0() {
   double input = input0x25bbef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25bc8c0() {
   double input = 0.365843;
   input += synapse0x25bcc00();
   input += synapse0x25bcc40();
   input += synapse0x25bcc80();
   input += synapse0x25bccc0();
   input += synapse0x25bcd00();
   input += synapse0x25bcd40();
   input += synapse0x25bcd80();
   input += synapse0x25bcdc0();
   input += synapse0x25bce00();
   input += synapse0x25bce40();
   input += synapse0x25bce80();
   input += synapse0x25bcec0();
   input += synapse0x25bcf00();
   input += synapse0x25bcf40();
   input += synapse0x25bcf80();
   input += synapse0x25bcfc0();
   input += synapse0x25bca50();
   input += synapse0x25bca90();
   input += synapse0x25bd110();
   input += synapse0x25bd150();
   input += synapse0x25bd190();
   input += synapse0x25bd1d0();
   input += synapse0x25bd210();
   input += synapse0x25bd250();
   return input;
}

double NNfunction_NN_2_2::neuron0x25bc8c0() {
   double input = input0x25bc8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25bd290() {
   double input = -3.04441;
   input += synapse0x25b6d30();
   input += synapse0x25b6d70();
   input += synapse0x25b6db0();
   input += synapse0x25b6df0();
   input += synapse0x25bd7e0();
   input += synapse0x25bd820();
   input += synapse0x25bd860();
   input += synapse0x25bd8a0();
   input += synapse0x25bd8e0();
   input += synapse0x25bd920();
   input += synapse0x25bd960();
   input += synapse0x25bd9a0();
   input += synapse0x25bd9e0();
   input += synapse0x25bda20();
   input += synapse0x25bda60();
   input += synapse0x25bdaa0();
   input += synapse0x25bd420();
   input += synapse0x25bd460();
   input += synapse0x25bdbf0();
   input += synapse0x25bdc30();
   input += synapse0x25bdc70();
   input += synapse0x25bdcb0();
   input += synapse0x25bdcf0();
   input += synapse0x25bdd30();
   return input;
}

double NNfunction_NN_2_2::neuron0x25bd290() {
   double input = input0x25bd290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25bdd70() {
   double input = -2.91597;
   input += synapse0x25be0b0();
   input += synapse0x25be0f0();
   input += synapse0x25be130();
   input += synapse0x25be170();
   input += synapse0x25be1b0();
   input += synapse0x25be1f0();
   input += synapse0x25be230();
   input += synapse0x25be270();
   input += synapse0x25be2b0();
   input += synapse0x25be2f0();
   input += synapse0x25be330();
   input += synapse0x25be370();
   input += synapse0x25be3b0();
   input += synapse0x25be3f0();
   input += synapse0x25be430();
   input += synapse0x25be470();
   input += synapse0x25bdf00();
   input += synapse0x25bdf40();
   input += synapse0x25be5c0();
   input += synapse0x25be600();
   input += synapse0x25be640();
   input += synapse0x25be680();
   input += synapse0x25be6c0();
   input += synapse0x25be700();
   return input;
}

double NNfunction_NN_2_2::neuron0x25bdd70() {
   double input = input0x25bdd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25be740() {
   double input = -0.896202;
   input += synapse0x25bea80();
   input += synapse0x25beac0();
   input += synapse0x25beb00();
   input += synapse0x25beb40();
   input += synapse0x25beb80();
   input += synapse0x25bebc0();
   input += synapse0x25bec00();
   input += synapse0x25bec40();
   input += synapse0x25bec80();
   input += synapse0x25becc0();
   input += synapse0x25bed00();
   input += synapse0x25bed40();
   input += synapse0x25bed80();
   input += synapse0x25bedc0();
   input += synapse0x25bee00();
   input += synapse0x25bee40();
   input += synapse0x25be8d0();
   input += synapse0x25be910();
   input += synapse0x25bb6a0();
   input += synapse0x25bb6e0();
   input += synapse0x25bb720();
   input += synapse0x25bb760();
   input += synapse0x25bb7a0();
   input += synapse0x25bb7e0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25be740() {
   double input = input0x25be740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25bb820() {
   double input = 2.34847;
   input += synapse0x25bbb60();
   input += synapse0x25bbba0();
   input += synapse0x25bbbe0();
   input += synapse0x25bbc20();
   input += synapse0x25bbc60();
   input += synapse0x25bbca0();
   input += synapse0x25bbce0();
   input += synapse0x25bbd20();
   input += synapse0x25bbd60();
   input += synapse0x25bbda0();
   input += synapse0x25bbde0();
   input += synapse0x25bbe20();
   input += synapse0x25bbe60();
   input += synapse0x25bffa0();
   input += synapse0x25bffe0();
   input += synapse0x25c0020();
   input += synapse0x25bb9b0();
   input += synapse0x25bb9f0();
   input += synapse0x25c0170();
   input += synapse0x25c01b0();
   input += synapse0x25c01f0();
   input += synapse0x25c0230();
   input += synapse0x25c0270();
   input += synapse0x25c02b0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25bb820() {
   double input = input0x25bb820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c02f0() {
   double input = 0.962814;
   input += synapse0x25c0630();
   input += synapse0x25c0670();
   input += synapse0x25c06b0();
   input += synapse0x25c06f0();
   input += synapse0x25c0730();
   input += synapse0x25c0770();
   input += synapse0x25c07b0();
   input += synapse0x25c07f0();
   input += synapse0x25c0830();
   input += synapse0x25c0870();
   input += synapse0x25c08b0();
   input += synapse0x25c08f0();
   input += synapse0x25c0930();
   input += synapse0x25c0970();
   input += synapse0x25c09b0();
   input += synapse0x25c09f0();
   input += synapse0x25c0480();
   input += synapse0x25c04c0();
   input += synapse0x25c0b40();
   input += synapse0x25c0b80();
   input += synapse0x25c0bc0();
   input += synapse0x25c0c00();
   input += synapse0x25c0c40();
   input += synapse0x25c0c80();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c02f0() {
   double input = input0x25c02f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c0cc0() {
   double input = 0.532414;
   input += synapse0x25c1000();
   input += synapse0x25c1040();
   input += synapse0x25c1080();
   input += synapse0x25c10c0();
   input += synapse0x25c1100();
   input += synapse0x25c1140();
   input += synapse0x25c1180();
   input += synapse0x25c11c0();
   input += synapse0x25c1200();
   input += synapse0x25c1240();
   input += synapse0x25c1280();
   input += synapse0x25c12c0();
   input += synapse0x25c1300();
   input += synapse0x25c1340();
   input += synapse0x25c1380();
   input += synapse0x25c13c0();
   input += synapse0x25c0e50();
   input += synapse0x25c0e90();
   input += synapse0x25c1510();
   input += synapse0x25c1550();
   input += synapse0x25c1590();
   input += synapse0x25c15d0();
   input += synapse0x25c1610();
   input += synapse0x25c1650();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c0cc0() {
   double input = input0x25c0cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c1690() {
   double input = -1.92268;
   input += synapse0x25c19d0();
   input += synapse0x25c1a10();
   input += synapse0x25c1a50();
   input += synapse0x25c1a90();
   input += synapse0x25c1ad0();
   input += synapse0x25c1b10();
   input += synapse0x25c1b50();
   input += synapse0x25c1b90();
   input += synapse0x25c1bd0();
   input += synapse0x25c1c10();
   input += synapse0x25c1c50();
   input += synapse0x25c1c90();
   input += synapse0x25c1cd0();
   input += synapse0x25c1d10();
   input += synapse0x25c1d50();
   input += synapse0x25c1d90();
   input += synapse0x25c1820();
   input += synapse0x25c1860();
   input += synapse0x25c1ee0();
   input += synapse0x25c1f20();
   input += synapse0x25c1f60();
   input += synapse0x25c1fa0();
   input += synapse0x25c1fe0();
   input += synapse0x25c2020();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c1690() {
   double input = input0x25c1690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c2060() {
   double input = 0.713816;
   input += synapse0x25c23a0();
   input += synapse0x25b3700();
   input += synapse0x25b3740();
   input += synapse0x25b3a40();
   input += synapse0x25b3a80();
   input += synapse0x25b3d80();
   input += synapse0x25b3dc0();
   input += synapse0x25b40c0();
   input += synapse0x25b4100();
   input += synapse0x25b4400();
   input += synapse0x25b4440();
   input += synapse0x25b4740();
   input += synapse0x25b4780();
   input += synapse0x25b4a80();
   input += synapse0x25b4ac0();
   input += synapse0x25b4dc0();
   input += synapse0x25b4e00();
   input += synapse0x25b5100();
   input += synapse0x25b5140();
   input += synapse0x25b5440();
   input += synapse0x25b5480();
   input += synapse0x25b5780();
   input += synapse0x25b57c0();
   input += synapse0x25b5ac0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c2060() {
   double input = input0x25c2060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c3e70() {
   double input = 4.02556;
   input += synapse0x25b5b00();
   input += synapse0x25b67c0();
   input += synapse0x25b6800();
   input += synapse0x25c21f0();
   input += synapse0x25c2230();
   input += synapse0x25b6b00();
   input += synapse0x25b6b40();
   input += synapse0x2364ad0();
   input += synapse0x2364b10();
   input += synapse0x25b7280();
   input += synapse0x25b72c0();
   input += synapse0x25b75c0();
   input += synapse0x25b7600();
   input += synapse0x25b7900();
   input += synapse0x25b7940();
   input += synapse0x25b7c40();
   input += synapse0x25b7c80();
   input += synapse0x25b7f80();
   input += synapse0x25b7fc0();
   input += synapse0x25b82c0();
   input += synapse0x25b8300();
   input += synapse0x25b5e00();
   input += synapse0x25b5e40();
   input += synapse0x25c4110();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c3e70() {
   double input = input0x25c3e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c4150() {
   double input = -1.61467;
   input += synapse0x25c4490();
   input += synapse0x25c44d0();
   input += synapse0x25c4510();
   input += synapse0x25c4550();
   input += synapse0x25c4590();
   input += synapse0x25c45d0();
   input += synapse0x25c4610();
   input += synapse0x25c4650();
   input += synapse0x25c4690();
   input += synapse0x25c46d0();
   input += synapse0x25c4710();
   input += synapse0x25c4750();
   input += synapse0x25c4790();
   input += synapse0x25c47d0();
   input += synapse0x25c4810();
   input += synapse0x25c4850();
   input += synapse0x25c42e0();
   input += synapse0x25c4320();
   input += synapse0x25c49a0();
   input += synapse0x25c49e0();
   input += synapse0x25c4a20();
   input += synapse0x25c4a60();
   input += synapse0x25c4aa0();
   input += synapse0x25c4ae0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c4150() {
   double input = input0x25c4150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c4b20() {
   double input = -1.52284;
   input += synapse0x25c4e60();
   input += synapse0x25c4ea0();
   input += synapse0x25c4ee0();
   input += synapse0x25c4f20();
   input += synapse0x25c4f60();
   input += synapse0x25c4fa0();
   input += synapse0x25c4fe0();
   input += synapse0x25c5020();
   input += synapse0x25c5060();
   input += synapse0x25c50a0();
   input += synapse0x25c50e0();
   input += synapse0x25c5120();
   input += synapse0x25c5160();
   input += synapse0x25c51a0();
   input += synapse0x25c51e0();
   input += synapse0x25c5220();
   input += synapse0x25c4cb0();
   input += synapse0x25c4cf0();
   input += synapse0x25c5370();
   input += synapse0x25c53b0();
   input += synapse0x25c53f0();
   input += synapse0x25c5430();
   input += synapse0x25c5470();
   input += synapse0x25c54b0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c4b20() {
   double input = input0x25c4b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c54f0() {
   double input = -1.90702;
   input += synapse0x25c5830();
   input += synapse0x25c5870();
   input += synapse0x25c58b0();
   input += synapse0x25c58f0();
   input += synapse0x25c5930();
   input += synapse0x25c5970();
   input += synapse0x25c59b0();
   input += synapse0x25c59f0();
   input += synapse0x25c5a30();
   input += synapse0x25c5a70();
   input += synapse0x25c5ab0();
   input += synapse0x25c5af0();
   input += synapse0x25c5b30();
   input += synapse0x25c5b70();
   input += synapse0x25c5bb0();
   input += synapse0x25c5bf0();
   input += synapse0x25c5680();
   input += synapse0x25c56c0();
   input += synapse0x25c5d40();
   input += synapse0x25c5d80();
   input += synapse0x25c5dc0();
   input += synapse0x25c5e00();
   input += synapse0x25c5e40();
   input += synapse0x25c5e80();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c54f0() {
   double input = input0x25c54f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c5ec0() {
   double input = -0.0861603;
   input += synapse0x25c6200();
   input += synapse0x25c6240();
   input += synapse0x25c6280();
   input += synapse0x25c62c0();
   input += synapse0x25c6300();
   input += synapse0x25c6340();
   input += synapse0x25c6380();
   input += synapse0x25c63c0();
   input += synapse0x25c6400();
   input += synapse0x25c6440();
   input += synapse0x25c6480();
   input += synapse0x25c64c0();
   input += synapse0x25c6500();
   input += synapse0x25c6540();
   input += synapse0x25c6580();
   input += synapse0x25c65c0();
   input += synapse0x25c6050();
   input += synapse0x25c6090();
   input += synapse0x25c6710();
   input += synapse0x25c6750();
   input += synapse0x25c6790();
   input += synapse0x25c67d0();
   input += synapse0x25c6810();
   input += synapse0x25c6850();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c5ec0() {
   double input = input0x25c5ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c6890() {
   double input = 1.05698;
   input += synapse0x25c6bd0();
   input += synapse0x25c6c10();
   input += synapse0x25c6c50();
   input += synapse0x25c6c90();
   input += synapse0x25c6cd0();
   input += synapse0x25c6d10();
   input += synapse0x25c6d50();
   input += synapse0x25c6d90();
   input += synapse0x25c6dd0();
   input += synapse0x25bef90();
   input += synapse0x25befd0();
   input += synapse0x25bf010();
   input += synapse0x25bf050();
   input += synapse0x25bf090();
   input += synapse0x25bf0d0();
   input += synapse0x25bf110();
   input += synapse0x25c6a20();
   input += synapse0x25c6a60();
   input += synapse0x25bf260();
   input += synapse0x25bf2a0();
   input += synapse0x25bf2e0();
   input += synapse0x25bf320();
   input += synapse0x25bf360();
   input += synapse0x25bf3a0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c6890() {
   double input = input0x25c6890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25bf3e0() {
   double input = 1.09163;
   input += synapse0x25bf720();
   input += synapse0x25bf760();
   input += synapse0x25bf7a0();
   input += synapse0x25bf7e0();
   input += synapse0x25bf820();
   input += synapse0x25bf860();
   input += synapse0x25bf8a0();
   input += synapse0x25bf8e0();
   input += synapse0x25bf920();
   input += synapse0x25bf960();
   input += synapse0x25bf9a0();
   input += synapse0x25bf9e0();
   input += synapse0x25bfa20();
   input += synapse0x25bfa60();
   input += synapse0x25bfaa0();
   input += synapse0x25bfae0();
   input += synapse0x25bf570();
   input += synapse0x25bf5b0();
   input += synapse0x25bfc30();
   input += synapse0x25bfc70();
   input += synapse0x25bfcb0();
   input += synapse0x25bfcf0();
   input += synapse0x25bfd30();
   input += synapse0x25bfd70();
   return input;
}

double NNfunction_NN_2_2::neuron0x25bf3e0() {
   double input = input0x25bf3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25bfdb0() {
   double input = -0.724923;
   input += synapse0x25bff40();
   input += synapse0x25c8fd0();
   input += synapse0x25c9010();
   input += synapse0x25c9050();
   input += synapse0x25c9090();
   input += synapse0x25c90d0();
   input += synapse0x25c9110();
   input += synapse0x25c9150();
   input += synapse0x25c9190();
   input += synapse0x25c91d0();
   input += synapse0x25c9210();
   input += synapse0x25c9250();
   input += synapse0x25c9290();
   input += synapse0x25c92d0();
   input += synapse0x25c9310();
   input += synapse0x25c9350();
   input += synapse0x25c8e20();
   input += synapse0x25c8e60();
   input += synapse0x25c94a0();
   input += synapse0x25c94e0();
   input += synapse0x25c9520();
   input += synapse0x25c9560();
   input += synapse0x25c95a0();
   input += synapse0x25c95e0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25bfdb0() {
   double input = input0x25bfdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c9620() {
   double input = -0.978174;
   input += synapse0x25c9960();
   input += synapse0x25c99a0();
   input += synapse0x25c99e0();
   input += synapse0x25c9a20();
   input += synapse0x25c9a60();
   input += synapse0x25c9aa0();
   input += synapse0x25c9ae0();
   input += synapse0x25c9b20();
   input += synapse0x25c9b60();
   input += synapse0x25c9ba0();
   input += synapse0x25c9be0();
   input += synapse0x25c9c20();
   input += synapse0x25c9c60();
   input += synapse0x25c9ca0();
   input += synapse0x25c9ce0();
   input += synapse0x25c9d20();
   input += synapse0x25c97b0();
   input += synapse0x25c97f0();
   input += synapse0x25c9e70();
   input += synapse0x25c9eb0();
   input += synapse0x25c9ef0();
   input += synapse0x25c9f30();
   input += synapse0x25c9f70();
   input += synapse0x25c9fb0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c9620() {
   double input = input0x25c9620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c9ff0() {
   double input = -0.565938;
   input += synapse0x25ca330();
   input += synapse0x25ca370();
   input += synapse0x25ca3b0();
   input += synapse0x25ca3f0();
   input += synapse0x25ca430();
   input += synapse0x25ca470();
   input += synapse0x25ca4b0();
   input += synapse0x25ca4f0();
   input += synapse0x25ca530();
   input += synapse0x25ca570();
   input += synapse0x25ca5b0();
   input += synapse0x25ca5f0();
   input += synapse0x25ca630();
   input += synapse0x25ca670();
   input += synapse0x25ca6b0();
   input += synapse0x25ca6f0();
   input += synapse0x25ca180();
   input += synapse0x25ca1c0();
   input += synapse0x25ca840();
   input += synapse0x25ca880();
   input += synapse0x25ca8c0();
   input += synapse0x25ca900();
   input += synapse0x25ca940();
   input += synapse0x25ca980();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c9ff0() {
   double input = input0x25c9ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25ca9c0() {
   double input = 1.20274;
   input += synapse0x25cad00();
   input += synapse0x25cad40();
   input += synapse0x25cad80();
   input += synapse0x25cadc0();
   input += synapse0x25cae00();
   input += synapse0x25cae40();
   input += synapse0x25cae80();
   input += synapse0x25caec0();
   input += synapse0x25caf00();
   input += synapse0x25caf40();
   input += synapse0x25caf80();
   input += synapse0x25cafc0();
   input += synapse0x25cb000();
   input += synapse0x25cb040();
   input += synapse0x25cb080();
   input += synapse0x25cb0c0();
   input += synapse0x25cab50();
   input += synapse0x25cab90();
   input += synapse0x25cb210();
   input += synapse0x25cb250();
   input += synapse0x25cb290();
   input += synapse0x25cb2d0();
   input += synapse0x25cb310();
   input += synapse0x25cb350();
   return input;
}

double NNfunction_NN_2_2::neuron0x25ca9c0() {
   double input = input0x25ca9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25cb390() {
   double input = 1.25488;
   input += synapse0x25cb6d0();
   input += synapse0x25cb710();
   input += synapse0x25cb750();
   input += synapse0x25cb790();
   input += synapse0x25cb7d0();
   input += synapse0x25cb810();
   input += synapse0x25cb850();
   input += synapse0x25cb890();
   input += synapse0x25cb8d0();
   input += synapse0x25cb910();
   input += synapse0x25cb950();
   input += synapse0x25cb990();
   input += synapse0x25cb9d0();
   input += synapse0x25cba10();
   input += synapse0x25cba50();
   input += synapse0x25cba90();
   input += synapse0x25cb520();
   input += synapse0x25cb560();
   input += synapse0x25cbbe0();
   input += synapse0x25cbc20();
   input += synapse0x25cbc60();
   input += synapse0x25cbca0();
   input += synapse0x25cbce0();
   input += synapse0x25cbd20();
   return input;
}

double NNfunction_NN_2_2::neuron0x25cb390() {
   double input = input0x25cb390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25cbd60() {
   double input = -0.926217;
   input += synapse0x25cc0a0();
   input += synapse0x25cc0e0();
   input += synapse0x25cc120();
   input += synapse0x25cc160();
   input += synapse0x25cc1a0();
   input += synapse0x25cc1e0();
   input += synapse0x25cc220();
   input += synapse0x25cc260();
   input += synapse0x25cc2a0();
   input += synapse0x25cc2e0();
   input += synapse0x25cc320();
   input += synapse0x25cc360();
   input += synapse0x25cc3a0();
   input += synapse0x25cc3e0();
   input += synapse0x25cc420();
   input += synapse0x25cc460();
   input += synapse0x25cbef0();
   input += synapse0x25cbf30();
   input += synapse0x25cc5b0();
   input += synapse0x25cc5f0();
   input += synapse0x25cc630();
   input += synapse0x25cc670();
   input += synapse0x25cc6b0();
   input += synapse0x25cc6f0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25cbd60() {
   double input = input0x25cbd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25cc730() {
   double input = -1.1815;
   input += synapse0x25cca70();
   input += synapse0x25ccab0();
   input += synapse0x25ccaf0();
   input += synapse0x25ccb30();
   input += synapse0x25ccb70();
   input += synapse0x25ccbb0();
   input += synapse0x25ccbf0();
   input += synapse0x25ccc30();
   input += synapse0x25ccc70();
   input += synapse0x25cccb0();
   input += synapse0x25cccf0();
   input += synapse0x25ccd30();
   input += synapse0x25ccd70();
   input += synapse0x25ccdb0();
   input += synapse0x25ccdf0();
   input += synapse0x25cce30();
   input += synapse0x25cc8c0();
   input += synapse0x25cc900();
   input += synapse0x25ccf80();
   input += synapse0x25ccfc0();
   input += synapse0x25cd000();
   input += synapse0x25cd040();
   input += synapse0x25cd080();
   input += synapse0x25cd0c0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25cc730() {
   double input = input0x25cc730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25cd100() {
   double input = 4.78491;
   input += synapse0x25cd440();
   input += synapse0x25cd480();
   input += synapse0x25cd4c0();
   input += synapse0x25cd500();
   input += synapse0x25cd540();
   input += synapse0x25cd580();
   input += synapse0x25cd5c0();
   input += synapse0x25cd600();
   input += synapse0x25cd640();
   input += synapse0x25cd680();
   input += synapse0x25cd6c0();
   input += synapse0x25cd700();
   input += synapse0x25cd740();
   input += synapse0x25cd780();
   input += synapse0x25cd7c0();
   input += synapse0x25cd800();
   input += synapse0x25cd290();
   input += synapse0x25cd2d0();
   input += synapse0x25cd950();
   input += synapse0x25cd990();
   input += synapse0x25cd9d0();
   input += synapse0x25cda10();
   input += synapse0x25cda50();
   input += synapse0x25cda90();
   return input;
}

double NNfunction_NN_2_2::neuron0x25cd100() {
   double input = input0x25cd100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25cdad0() {
   double input = 1.09541;
   input += synapse0x25cde10();
   input += synapse0x25c23e0();
   input += synapse0x25c2420();
   input += synapse0x25c2460();
   input += synapse0x25c26b0();
   input += synapse0x25c26f0();
   input += synapse0x25c2730();
   input += synapse0x25c2980();
   input += synapse0x25c29c0();
   input += synapse0x25c2c10();
   input += synapse0x25c2c50();
   input += synapse0x25c2c90();
   input += synapse0x25c2ee0();
   input += synapse0x25c2f20();
   input += synapse0x25c3170();
   input += synapse0x25c31b0();
   input += synapse0x25cdc60();
   input += synapse0x25cdca0();
   input += synapse0x25c3300();
   input += synapse0x25c3810();
   input += synapse0x25c3850();
   input += synapse0x25c3890();
   input += synapse0x25c3ae0();
   input += synapse0x25c3b20();
   return input;
}

double NNfunction_NN_2_2::neuron0x25cdad0() {
   double input = input0x25cdad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c3b60() {
   double input = -1.15874;
   input += synapse0x25c33d0();
   input += synapse0x25c3410();
   input += synapse0x25c3450();
   input += synapse0x25c3490();
   input += synapse0x25c3e10();
   input += synapse0x25d0160();
   input += synapse0x25d01a0();
   input += synapse0x25d01e0();
   input += synapse0x25d0220();
   input += synapse0x25d0260();
   input += synapse0x25d02a0();
   input += synapse0x25d02e0();
   input += synapse0x25d0320();
   input += synapse0x25d0360();
   input += synapse0x25d03a0();
   input += synapse0x25d03e0();
   input += synapse0x25c3cf0();
   input += synapse0x25c3d30();
   input += synapse0x25d0530();
   input += synapse0x25d0570();
   input += synapse0x25d05b0();
   input += synapse0x25d05f0();
   input += synapse0x25d0630();
   input += synapse0x25d0670();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c3b60() {
   double input = input0x25c3b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d06b0() {
   double input = -1.6458;
   input += synapse0x25d09f0();
   input += synapse0x25d0a30();
   input += synapse0x25d0a70();
   input += synapse0x25d0ab0();
   input += synapse0x25d0af0();
   input += synapse0x25d0b30();
   input += synapse0x25d0b70();
   input += synapse0x25d0bb0();
   input += synapse0x25d0bf0();
   input += synapse0x25d0c30();
   input += synapse0x25d0c70();
   input += synapse0x25d0cb0();
   input += synapse0x25d0cf0();
   input += synapse0x25d0d30();
   input += synapse0x25d0d70();
   input += synapse0x25d0db0();
   input += synapse0x25d0840();
   input += synapse0x25d0880();
   input += synapse0x25d0f00();
   input += synapse0x25d0f40();
   input += synapse0x25d0f80();
   input += synapse0x25d0fc0();
   input += synapse0x25d1000();
   input += synapse0x25d1040();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d06b0() {
   double input = input0x25d06b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d1080() {
   double input = 1.84536;
   input += synapse0x25d13c0();
   input += synapse0x25d1400();
   input += synapse0x25d1440();
   input += synapse0x25d1480();
   input += synapse0x25d14c0();
   input += synapse0x25d1500();
   input += synapse0x25d1540();
   input += synapse0x25d1580();
   input += synapse0x25d15c0();
   input += synapse0x25d1600();
   input += synapse0x25d1640();
   input += synapse0x25d1680();
   input += synapse0x25d16c0();
   input += synapse0x25d1700();
   input += synapse0x25d1740();
   input += synapse0x25d1780();
   input += synapse0x25d1210();
   input += synapse0x25d1250();
   input += synapse0x25d18d0();
   input += synapse0x25d1910();
   input += synapse0x25d1950();
   input += synapse0x25d1990();
   input += synapse0x25d19d0();
   input += synapse0x25d1a10();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d1080() {
   double input = input0x25d1080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d1a50() {
   double input = 1.86069;
   input += synapse0x25d1d90();
   input += synapse0x25d1dd0();
   input += synapse0x25d1e10();
   input += synapse0x25d1e50();
   input += synapse0x25d1e90();
   input += synapse0x25d1ed0();
   input += synapse0x25d1f10();
   input += synapse0x25d1f50();
   input += synapse0x25d1f90();
   input += synapse0x25d1fd0();
   input += synapse0x25d2010();
   input += synapse0x25d2050();
   input += synapse0x25d2090();
   input += synapse0x25d20d0();
   input += synapse0x25d2110();
   input += synapse0x25d2150();
   input += synapse0x25d1be0();
   input += synapse0x25d1c20();
   input += synapse0x25d22a0();
   input += synapse0x25d22e0();
   input += synapse0x25d2320();
   input += synapse0x25d2360();
   input += synapse0x25d23a0();
   input += synapse0x25d23e0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d1a50() {
   double input = input0x25d1a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d2420() {
   double input = 0.738583;
   input += synapse0x25d2760();
   input += synapse0x25d27a0();
   input += synapse0x25d27e0();
   input += synapse0x25d2820();
   input += synapse0x25d2860();
   input += synapse0x25d28a0();
   input += synapse0x25d28e0();
   input += synapse0x25d2920();
   input += synapse0x25d2960();
   input += synapse0x25d29a0();
   input += synapse0x25d29e0();
   input += synapse0x25d2a20();
   input += synapse0x25d2a60();
   input += synapse0x25d2aa0();
   input += synapse0x25d2ae0();
   input += synapse0x25d2b20();
   input += synapse0x25d25b0();
   input += synapse0x25d25f0();
   input += synapse0x25d2c70();
   input += synapse0x25d2cb0();
   input += synapse0x25d2cf0();
   input += synapse0x25d2d30();
   input += synapse0x25d2d70();
   input += synapse0x25d2db0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d2420() {
   double input = input0x25d2420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d2df0() {
   double input = -0.780192;
   input += synapse0x25d3130();
   input += synapse0x25d3170();
   input += synapse0x25d31b0();
   input += synapse0x25d31f0();
   input += synapse0x25d3230();
   input += synapse0x25d3270();
   input += synapse0x25d32b0();
   input += synapse0x25d32f0();
   input += synapse0x25d3330();
   input += synapse0x25d3370();
   input += synapse0x25d33b0();
   input += synapse0x25d33f0();
   input += synapse0x25d3430();
   input += synapse0x25d3470();
   input += synapse0x25d34b0();
   input += synapse0x25d34f0();
   input += synapse0x25d2f80();
   input += synapse0x25d2fc0();
   input += synapse0x25d3640();
   input += synapse0x25d3680();
   input += synapse0x25d36c0();
   input += synapse0x25d3700();
   input += synapse0x25d3740();
   input += synapse0x25d3780();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d2df0() {
   double input = input0x25d2df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d37c0() {
   double input = -0.564822;
   input += synapse0x25d3b00();
   input += synapse0x25d3b40();
   input += synapse0x25d3b80();
   input += synapse0x25d3bc0();
   input += synapse0x25d3c00();
   input += synapse0x25d3c40();
   input += synapse0x25d3c80();
   input += synapse0x25d3cc0();
   input += synapse0x25d3d00();
   input += synapse0x25d3d40();
   input += synapse0x25d3d80();
   input += synapse0x25d3dc0();
   input += synapse0x25d3e00();
   input += synapse0x25d3e40();
   input += synapse0x25d3e80();
   input += synapse0x25d3ec0();
   input += synapse0x25d3950();
   input += synapse0x25d3990();
   input += synapse0x25d4010();
   input += synapse0x25d4050();
   input += synapse0x25d4090();
   input += synapse0x25d40d0();
   input += synapse0x25d4110();
   input += synapse0x25d4150();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d37c0() {
   double input = input0x25d37c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d4190() {
   double input = 0.70282;
   input += synapse0x25d44d0();
   input += synapse0x25d4510();
   input += synapse0x25d4550();
   input += synapse0x25d4590();
   input += synapse0x25d45d0();
   input += synapse0x25d4610();
   input += synapse0x25d4650();
   input += synapse0x25d4690();
   input += synapse0x25d46d0();
   input += synapse0x25d4710();
   input += synapse0x25d4750();
   input += synapse0x25d4790();
   input += synapse0x25d47d0();
   input += synapse0x25d4810();
   input += synapse0x25d4850();
   input += synapse0x25d4890();
   input += synapse0x25d4320();
   input += synapse0x25d4360();
   input += synapse0x25d49e0();
   input += synapse0x25d4a20();
   input += synapse0x25d4a60();
   input += synapse0x25d4aa0();
   input += synapse0x25d4ae0();
   input += synapse0x25d4b20();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d4190() {
   double input = input0x25d4190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d4b60() {
   double input = -2.10577;
   input += synapse0x25bd5d0();
   input += synapse0x25bd610();
   input += synapse0x25bd650();
   input += synapse0x25bd690();
   input += synapse0x25bd6d0();
   input += synapse0x25bd710();
   input += synapse0x25bd750();
   input += synapse0x25bd790();
   input += synapse0x25d52b0();
   input += synapse0x25d52f0();
   input += synapse0x25d5330();
   input += synapse0x25d5370();
   input += synapse0x25d53b0();
   input += synapse0x25d53f0();
   input += synapse0x25d5430();
   input += synapse0x25d5470();
   input += synapse0x25d4cf0();
   input += synapse0x25d4d30();
   input += synapse0x25d55c0();
   input += synapse0x25d5600();
   input += synapse0x25d5640();
   input += synapse0x25d5680();
   input += synapse0x25d56c0();
   input += synapse0x25d5700();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d4b60() {
   double input = input0x25d4b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d5740() {
   double input = 1.61103;
   input += synapse0x25d5a80();
   input += synapse0x25d5ac0();
   input += synapse0x25d5b00();
   input += synapse0x25d5b40();
   input += synapse0x25d5b80();
   input += synapse0x25d5bc0();
   input += synapse0x25d5c00();
   input += synapse0x25d5c40();
   input += synapse0x25d5c80();
   input += synapse0x25d5cc0();
   input += synapse0x25d5d00();
   input += synapse0x25d5d40();
   input += synapse0x25d5d80();
   input += synapse0x25d5dc0();
   input += synapse0x25d5e00();
   input += synapse0x25d5e40();
   input += synapse0x25d58d0();
   input += synapse0x25d5910();
   input += synapse0x25d5f90();
   input += synapse0x25d5fd0();
   input += synapse0x25d6010();
   input += synapse0x25d6050();
   input += synapse0x25d6090();
   input += synapse0x25d60d0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d5740() {
   double input = input0x25d5740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25d6110() {
   double input = -1.95592;
   input += synapse0x25d6450();
   input += synapse0x25d6490();
   input += synapse0x25d64d0();
   input += synapse0x25d6510();
   input += synapse0x25d6550();
   input += synapse0x25d6590();
   input += synapse0x25d65d0();
   input += synapse0x25d6610();
   input += synapse0x25d6650();
   input += synapse0x25d6690();
   input += synapse0x25d66d0();
   input += synapse0x25d6710();
   input += synapse0x25d6750();
   input += synapse0x25d6790();
   input += synapse0x25d67d0();
   input += synapse0x25d6810();
   input += synapse0x25d62a0();
   input += synapse0x25d62e0();
   input += synapse0x25c6e10();
   input += synapse0x25c6e50();
   input += synapse0x25c6e90();
   input += synapse0x25c6ed0();
   input += synapse0x25c6f10();
   input += synapse0x25c6f50();
   return input;
}

double NNfunction_NN_2_2::neuron0x25d6110() {
   double input = input0x25d6110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c6f90() {
   double input = -1.48349;
   input += synapse0x25c72d0();
   input += synapse0x25c7310();
   input += synapse0x25c7350();
   input += synapse0x25c7390();
   input += synapse0x25c73d0();
   input += synapse0x25c7410();
   input += synapse0x25c7450();
   input += synapse0x25c7490();
   input += synapse0x25c74d0();
   input += synapse0x25c7510();
   input += synapse0x25c7550();
   input += synapse0x25c7590();
   input += synapse0x25c75d0();
   input += synapse0x25c7610();
   input += synapse0x25c7650();
   input += synapse0x25c7690();
   input += synapse0x25c7120();
   input += synapse0x25c7160();
   input += synapse0x25c77e0();
   input += synapse0x25c7820();
   input += synapse0x25c7860();
   input += synapse0x25c78a0();
   input += synapse0x25c78e0();
   input += synapse0x25c7920();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c6f90() {
   double input = input0x25c6f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c7960() {
   double input = 0.228963;
   input += synapse0x25c7ca0();
   input += synapse0x25c7ce0();
   input += synapse0x25c7d20();
   input += synapse0x25c7d60();
   input += synapse0x25c7da0();
   input += synapse0x25c7de0();
   input += synapse0x25c7e20();
   input += synapse0x25c7e60();
   input += synapse0x25c7ea0();
   input += synapse0x25c7ee0();
   input += synapse0x25c7f20();
   input += synapse0x25c7f60();
   input += synapse0x25c7fa0();
   input += synapse0x25c7fe0();
   input += synapse0x25c8020();
   input += synapse0x25c8060();
   input += synapse0x25c7af0();
   input += synapse0x25c7b30();
   input += synapse0x25c81b0();
   input += synapse0x25c81f0();
   input += synapse0x25c8230();
   input += synapse0x25c8270();
   input += synapse0x25c82b0();
   input += synapse0x25c82f0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c7960() {
   double input = input0x25c7960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25c8330() {
   double input = 2.22308;
   input += synapse0x25c8670();
   input += synapse0x25c86b0();
   input += synapse0x25c86f0();
   input += synapse0x25c8730();
   input += synapse0x25c8770();
   input += synapse0x25c87b0();
   input += synapse0x25c87f0();
   input += synapse0x25c8830();
   input += synapse0x25c8870();
   input += synapse0x25c88b0();
   input += synapse0x25c88f0();
   input += synapse0x25c8930();
   input += synapse0x25c8970();
   input += synapse0x25c89b0();
   input += synapse0x25c89f0();
   input += synapse0x25c8a30();
   input += synapse0x25c84c0();
   input += synapse0x25c8500();
   input += synapse0x25c8b80();
   input += synapse0x25c8bc0();
   input += synapse0x25c8c00();
   input += synapse0x25c8c40();
   input += synapse0x25c8c80();
   input += synapse0x25c8cc0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25c8330() {
   double input = input0x25c8330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25da970() {
   double input = 1.13483;
   input += synapse0x25dab90();
   input += synapse0x25dabd0();
   input += synapse0x25dac10();
   input += synapse0x25dac50();
   input += synapse0x25dac90();
   input += synapse0x25dacd0();
   input += synapse0x25dad10();
   input += synapse0x25dad50();
   input += synapse0x25dad90();
   input += synapse0x25dadd0();
   input += synapse0x25dae10();
   input += synapse0x25dae50();
   input += synapse0x25dae90();
   input += synapse0x25daed0();
   input += synapse0x25daf10();
   input += synapse0x25daf50();
   input += synapse0x25c8d00();
   input += synapse0x25c8d40();
   input += synapse0x25db0a0();
   input += synapse0x25db0e0();
   input += synapse0x25db120();
   input += synapse0x25db160();
   input += synapse0x25db1a0();
   input += synapse0x25db1e0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25da970() {
   double input = input0x25da970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25db220() {
   double input = -4.913;
   input += synapse0x25db560();
   input += synapse0x25db5a0();
   input += synapse0x25db5e0();
   input += synapse0x25db620();
   input += synapse0x25db660();
   input += synapse0x25db6a0();
   input += synapse0x25db6e0();
   input += synapse0x25db720();
   input += synapse0x25db760();
   input += synapse0x25db7a0();
   input += synapse0x25db7e0();
   input += synapse0x25db820();
   input += synapse0x25db860();
   input += synapse0x25db8a0();
   input += synapse0x25db8e0();
   input += synapse0x25db920();
   input += synapse0x25db3b0();
   input += synapse0x25db3f0();
   input += synapse0x25dba70();
   input += synapse0x25dbab0();
   input += synapse0x25dbaf0();
   input += synapse0x25dbb30();
   input += synapse0x25dbb70();
   input += synapse0x25dbbb0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25db220() {
   double input = input0x25db220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25dbbf0() {
   double input = 1.77867;
   input += synapse0x25dbf30();
   input += synapse0x25dbf70();
   input += synapse0x25dbfb0();
   input += synapse0x25dbff0();
   input += synapse0x25dc030();
   input += synapse0x25dc070();
   input += synapse0x25dc0b0();
   input += synapse0x25dc0f0();
   input += synapse0x25dc130();
   input += synapse0x25dc170();
   input += synapse0x25dc1b0();
   input += synapse0x25dc1f0();
   input += synapse0x25dc230();
   input += synapse0x25dc270();
   input += synapse0x25dc2b0();
   input += synapse0x25dc2f0();
   input += synapse0x25dbd80();
   input += synapse0x25dbdc0();
   input += synapse0x25dc440();
   input += synapse0x25dc480();
   input += synapse0x25dc4c0();
   input += synapse0x25dc500();
   input += synapse0x25dc540();
   input += synapse0x25dc580();
   return input;
}

double NNfunction_NN_2_2::neuron0x25dbbf0() {
   double input = input0x25dbbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25dc5c0() {
   double input = 0.359022;
   input += synapse0x25dc900();
   input += synapse0x25dc940();
   input += synapse0x25dc980();
   input += synapse0x25dc9c0();
   input += synapse0x25dca00();
   input += synapse0x25dca40();
   input += synapse0x25dca80();
   input += synapse0x25dcac0();
   input += synapse0x25dcb00();
   input += synapse0x25dcb40();
   input += synapse0x25dcb80();
   input += synapse0x25dcbc0();
   input += synapse0x25dcc00();
   input += synapse0x25dcc40();
   input += synapse0x25dcc80();
   input += synapse0x25dccc0();
   input += synapse0x25dc750();
   input += synapse0x25dc790();
   input += synapse0x25dce10();
   input += synapse0x25dce50();
   input += synapse0x25dce90();
   input += synapse0x25dced0();
   input += synapse0x25dcf10();
   input += synapse0x25dcf50();
   return input;
}

double NNfunction_NN_2_2::neuron0x25dc5c0() {
   double input = input0x25dc5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25e37c0() {
   double input = 1.16783;
   input += synapse0x25b94f0();
   input += synapse0x25b9530();
   input += synapse0x25baa00();
   input += synapse0x25baa40();
   input += synapse0x25bb3d0();
   input += synapse0x25bb410();
   input += synapse0x25bc1a0();
   input += synapse0x25bc1e0();
   input += synapse0x25bcb70();
   input += synapse0x25bcbb0();
   input += synapse0x25bd540();
   input += synapse0x25bd580();
   input += synapse0x25be020();
   input += synapse0x25be060();
   input += synapse0x25be9f0();
   input += synapse0x25bea30();
   input += synapse0x25bbad0();
   input += synapse0x25bbb10();
   input += synapse0x25c05a0();
   input += synapse0x25c05e0();
   input += synapse0x25c0f70();
   input += synapse0x25c0fb0();
   input += synapse0x25c1940();
   input += synapse0x25c1980();
   input += synapse0x25c2310();
   input += synapse0x25c2350();
   input += synapse0x25b6480();
   input += synapse0x25b64c0();
   input += synapse0x25c4400();
   input += synapse0x25c4440();
   input += synapse0x25c4dd0();
   input += synapse0x25c4e10();
   input += synapse0x25c57a0();
   input += synapse0x25c57e0();
   input += synapse0x25c6170();
   input += synapse0x25c61b0();
   input += synapse0x25c6b40();
   input += synapse0x25c6b80();
   input += synapse0x25bf690();
   input += synapse0x25bf6d0();
   input += synapse0x25c8f40();
   input += synapse0x25c8f80();
   input += synapse0x25c98d0();
   input += synapse0x25c9910();
   input += synapse0x25ca2a0();
   input += synapse0x25ca2e0();
   input += synapse0x25cac70();
   input += synapse0x25cacb0();
   input += synapse0x25cb640();
   input += synapse0x25cb680();
   return input;
}

double NNfunction_NN_2_2::neuron0x25e37c0() {
   double input = input0x25e37c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25e3b60() {
   double input = -0.761876;
   input += synapse0x25cdd80();
   input += synapse0x25cddc0();
   input += synapse0x25c3340();
   input += synapse0x25c3380();
   input += synapse0x25d0960();
   input += synapse0x25d09a0();
   input += synapse0x25d1330();
   input += synapse0x25d1370();
   input += synapse0x25d1d00();
   input += synapse0x25d1d40();
   input += synapse0x25d26d0();
   input += synapse0x25d2710();
   input += synapse0x25d30a0();
   input += synapse0x25d30e0();
   input += synapse0x25d3a70();
   input += synapse0x25d3ab0();
   input += synapse0x25d4440();
   input += synapse0x25d4480();
   input += synapse0x25d4e10();
   input += synapse0x25d4e50();
   input += synapse0x25d59f0();
   input += synapse0x25d5a30();
   input += synapse0x25d63c0();
   input += synapse0x25d6400();
   input += synapse0x25c7240();
   input += synapse0x25c7280();
   input += synapse0x25c7c10();
   input += synapse0x25c7c50();
   input += synapse0x25c85e0();
   input += synapse0x25c8620();
   input += synapse0x25dab00();
   input += synapse0x25dab40();
   input += synapse0x25db4d0();
   input += synapse0x25db510();
   input += synapse0x25dbea0();
   input += synapse0x25dbee0();
   input += synapse0x25dc870();
   input += synapse0x25dc8b0();
   input += synapse0x25b8760();
   input += synapse0x25b87a0();
   input += synapse0x25cc010();
   input += synapse0x25cc050();
   input += synapse0x25dcf90();
   input += synapse0x25dcfd0();
   input += synapse0x25dd010();
   input += synapse0x25dd050();
   input += synapse0x25e3f00();
   input += synapse0x25e3f40();
   input += synapse0x25e3f80();
   input += synapse0x25e3fc0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25e3b60() {
   double input = input0x25e3b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25e4000() {
   double input = -0.588802;
   input += synapse0x25e4340();
   input += synapse0x25e4380();
   input += synapse0x25e43c0();
   input += synapse0x25e4400();
   input += synapse0x25e4440();
   input += synapse0x25e4480();
   input += synapse0x25e44c0();
   input += synapse0x25e4500();
   input += synapse0x25e4540();
   input += synapse0x25e4580();
   input += synapse0x25e45c0();
   input += synapse0x25e4600();
   input += synapse0x25e4640();
   input += synapse0x25e4680();
   input += synapse0x25e46c0();
   input += synapse0x25e4700();
   input += synapse0x25e4190();
   input += synapse0x25e41d0();
   input += synapse0x25e4850();
   input += synapse0x25e4890();
   input += synapse0x25e48d0();
   input += synapse0x25e4910();
   input += synapse0x25e4950();
   input += synapse0x25e4990();
   input += synapse0x25e49d0();
   input += synapse0x25e4a10();
   input += synapse0x25e4a50();
   input += synapse0x25e4a90();
   input += synapse0x25e4ad0();
   input += synapse0x25e4b10();
   input += synapse0x25e4b50();
   input += synapse0x25e4b90();
   input += synapse0x25e4740();
   input += synapse0x25e4780();
   input += synapse0x25e47c0();
   input += synapse0x25e4800();
   input += synapse0x25e4de0();
   input += synapse0x25e4e20();
   input += synapse0x25e4e60();
   input += synapse0x25e4ea0();
   input += synapse0x25e4ee0();
   input += synapse0x25e4f20();
   input += synapse0x25e4f60();
   input += synapse0x25e4fa0();
   input += synapse0x25e4fe0();
   input += synapse0x25e5020();
   input += synapse0x25e5060();
   input += synapse0x25e50a0();
   input += synapse0x25e50e0();
   input += synapse0x25e5120();
   return input;
}

double NNfunction_NN_2_2::neuron0x25e4000() {
   double input = input0x25e4000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25e5160() {
   double input = -1.80044;
   input += synapse0x25e54a0();
   input += synapse0x25e54e0();
   input += synapse0x25e5520();
   input += synapse0x25e5560();
   input += synapse0x25e55a0();
   input += synapse0x25e55e0();
   input += synapse0x25e5620();
   input += synapse0x25e5660();
   input += synapse0x25e56a0();
   input += synapse0x25e56e0();
   input += synapse0x25e5720();
   input += synapse0x25e5760();
   input += synapse0x25e57a0();
   input += synapse0x25e57e0();
   input += synapse0x25e5820();
   input += synapse0x25e5860();
   input += synapse0x25e52f0();
   input += synapse0x25e5330();
   input += synapse0x25e59b0();
   input += synapse0x25e59f0();
   input += synapse0x25e5a30();
   input += synapse0x25e5a70();
   input += synapse0x25e5ab0();
   input += synapse0x25e5af0();
   input += synapse0x25e5b30();
   input += synapse0x25e5b70();
   input += synapse0x25e5bb0();
   input += synapse0x25e5bf0();
   input += synapse0x25e5c30();
   input += synapse0x25e5c70();
   input += synapse0x25e5cb0();
   input += synapse0x25e5cf0();
   input += synapse0x25e58a0();
   input += synapse0x25e58e0();
   input += synapse0x25e5920();
   input += synapse0x25e5960();
   input += synapse0x25e5f40();
   input += synapse0x25e5f80();
   input += synapse0x25e5fc0();
   input += synapse0x25e6000();
   input += synapse0x25e6040();
   input += synapse0x25e6080();
   input += synapse0x25e60c0();
   input += synapse0x25e6100();
   input += synapse0x25e6140();
   input += synapse0x25e6180();
   input += synapse0x25e61c0();
   input += synapse0x25e6200();
   input += synapse0x25e6240();
   input += synapse0x25e6280();
   return input;
}

double NNfunction_NN_2_2::neuron0x25e5160() {
   double input = input0x25e5160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25e62c0() {
   double input = 1.38238;
   input += synapse0x25e6600();
   input += synapse0x25e6640();
   input += synapse0x25e6680();
   input += synapse0x25e66c0();
   input += synapse0x25e6700();
   input += synapse0x25e6740();
   input += synapse0x25e6780();
   input += synapse0x25e67c0();
   input += synapse0x25e6800();
   input += synapse0x25e6840();
   input += synapse0x25e6880();
   input += synapse0x25e68c0();
   input += synapse0x25e6900();
   input += synapse0x25e6940();
   input += synapse0x25e6980();
   input += synapse0x25e69c0();
   input += synapse0x25e6450();
   input += synapse0x25e6490();
   input += synapse0x25e6b10();
   input += synapse0x25e6b50();
   input += synapse0x25e6b90();
   input += synapse0x25e6bd0();
   input += synapse0x25e6c10();
   input += synapse0x25e6c50();
   input += synapse0x25e6c90();
   input += synapse0x25e6cd0();
   input += synapse0x25e6d10();
   input += synapse0x25e6d50();
   input += synapse0x25e6d90();
   input += synapse0x25e6dd0();
   input += synapse0x25e6e10();
   input += synapse0x25e6e50();
   input += synapse0x25e6a00();
   input += synapse0x25e6a40();
   input += synapse0x25e6a80();
   input += synapse0x25e6ac0();
   input += synapse0x25e70a0();
   input += synapse0x25e70e0();
   input += synapse0x25e7120();
   input += synapse0x25e7160();
   input += synapse0x25e71a0();
   input += synapse0x25e71e0();
   input += synapse0x25e7220();
   input += synapse0x25e7260();
   input += synapse0x25e72a0();
   input += synapse0x25e72e0();
   input += synapse0x25e7320();
   input += synapse0x25e7360();
   input += synapse0x25e73a0();
   input += synapse0x25e73e0();
   return input;
}

double NNfunction_NN_2_2::neuron0x25e62c0() {
   double input = input0x25e62c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_2_2::input0x25e7420() {
   double input = 3.91669;
   input += synapse0x25b8500();
   input += synapse0x25e7640();
   input += synapse0x25e7680();
   input += synapse0x25e76c0();
   input += synapse0x25e7700();
   return input;
}

double NNfunction_NN_2_2::neuron0x25e7420() {
   double input = input0x25e7420();
   return (input * 1)+0;
}

double NNfunction_NN_2_2::synapse0x2373350() {
   return (neuron0x25b34e0()*0.115603);
}

double NNfunction_NN_2_2::synapse0x25b33a0() {
   return (neuron0x25b3820()*0.217865);
}

double NNfunction_NN_2_2::synapse0x25b33e0() {
   return (neuron0x25b3b60()*2.20594);
}

double NNfunction_NN_2_2::synapse0x25b87f0() {
   return (neuron0x25b3ea0()*0.123168);
}

double NNfunction_NN_2_2::synapse0x25b8830() {
   return (neuron0x25b41e0()*0.152267);
}

double NNfunction_NN_2_2::synapse0x25b8870() {
   return (neuron0x25b4520()*-0.0840804);
}

double NNfunction_NN_2_2::synapse0x25b88b0() {
   return (neuron0x25b4860()*0.0202109);
}

double NNfunction_NN_2_2::synapse0x25b88f0() {
   return (neuron0x25b4ba0()*-0.112637);
}

double NNfunction_NN_2_2::synapse0x25b8930() {
   return (neuron0x25b4ee0()*-0.0432694);
}

double NNfunction_NN_2_2::synapse0x25b8970() {
   return (neuron0x25b5220()*-0.0803432);
}

double NNfunction_NN_2_2::synapse0x25b89b0() {
   return (neuron0x25b5560()*-0.143485);
}

double NNfunction_NN_2_2::synapse0x25b89f0() {
   return (neuron0x25b58a0()*0.701953);
}

double NNfunction_NN_2_2::synapse0x25b8a30() {
   return (neuron0x25b5be0()*0.0724503);
}

double NNfunction_NN_2_2::synapse0x25b8a70() {
   return (neuron0x25b5f20()*0.00722412);
}

double NNfunction_NN_2_2::synapse0x25b8ab0() {
   return (neuron0x25b6260()*-0.616481);
}

double NNfunction_NN_2_2::synapse0x25b8af0() {
   return (neuron0x25b65a0()*-0.0796243);
}

double NNfunction_NN_2_2::synapse0x25b3310() {
   return (neuron0x25b68e0()*0.098466);
}

double NNfunction_NN_2_2::synapse0x25b3350() {
   return (neuron0x25b6e40()*0.162302);
}

double NNfunction_NN_2_2::synapse0x2364bf0() {
   return (neuron0x25b7060()*0.099691);
}

double NNfunction_NN_2_2::synapse0x2364c30() {
   return (neuron0x25b73a0()*0.149611);
}

double NNfunction_NN_2_2::synapse0x25b8d50() {
   return (neuron0x25b76e0()*0.137122);
}

double NNfunction_NN_2_2::synapse0x25b8d90() {
   return (neuron0x25b7a20()*0.0372754);
}

double NNfunction_NN_2_2::synapse0x25b8dd0() {
   return (neuron0x25b7d60()*-0.147442);
}

double NNfunction_NN_2_2::synapse0x25b8e10() {
   return (neuron0x25b80a0()*-0.435042);
}

double NNfunction_NN_2_2::synapse0x25b9190() {
   return (neuron0x25b34e0()*0.0992582);
}

double NNfunction_NN_2_2::synapse0x25b91d0() {
   return (neuron0x25b3820()*-2.38791);
}

double NNfunction_NN_2_2::synapse0x25b9210() {
   return (neuron0x25b3b60()*3.48033);
}

double NNfunction_NN_2_2::synapse0x25b9250() {
   return (neuron0x25b3ea0()*0.116667);
}

double NNfunction_NN_2_2::synapse0x25b9290() {
   return (neuron0x25b41e0()*0.0537626);
}

double NNfunction_NN_2_2::synapse0x25b92d0() {
   return (neuron0x25b4520()*0.137725);
}

double NNfunction_NN_2_2::synapse0x25b9310() {
   return (neuron0x25b4860()*-0.00874491);
}

double NNfunction_NN_2_2::synapse0x25b9350() {
   return (neuron0x25b4ba0()*0.0361998);
}

double NNfunction_NN_2_2::synapse0x25b9390() {
   return (neuron0x25b4ee0()*-0.0464941);
}

double NNfunction_NN_2_2::synapse0x25b8c40() {
   return (neuron0x25b5220()*0.0228023);
}

double NNfunction_NN_2_2::synapse0x25b8c80() {
   return (neuron0x25b5560()*-0.208192);
}

double NNfunction_NN_2_2::synapse0x25b8cc0() {
   return (neuron0x25b58a0()*-0.342959);
}

double NNfunction_NN_2_2::synapse0x25b8d00() {
   return (neuron0x25b5be0()*0.127732);
}

double NNfunction_NN_2_2::synapse0x25b95e0() {
   return (neuron0x25b5f20()*-0.13885);
}

double NNfunction_NN_2_2::synapse0x25b9620() {
   return (neuron0x25b6260()*0.384441);
}

double NNfunction_NN_2_2::synapse0x25b9660() {
   return (neuron0x25b65a0()*0.100345);
}

double NNfunction_NN_2_2::synapse0x25b8fe0() {
   return (neuron0x25b68e0()*0.156656);
}

double NNfunction_NN_2_2::synapse0x25b9020() {
   return (neuron0x25b6e40()*-0.140637);
}

double NNfunction_NN_2_2::synapse0x25b97b0() {
   return (neuron0x25b7060()*-0.0231136);
}

double NNfunction_NN_2_2::synapse0x25b97f0() {
   return (neuron0x25b73a0()*-0.0457241);
}

double NNfunction_NN_2_2::synapse0x25b9830() {
   return (neuron0x25b76e0()*0.153522);
}

double NNfunction_NN_2_2::synapse0x25b9870() {
   return (neuron0x25b7a20()*-0.0890307);
}

double NNfunction_NN_2_2::synapse0x25b98b0() {
   return (neuron0x25b7d60()*0.0150129);
}

double NNfunction_NN_2_2::synapse0x25b98f0() {
   return (neuron0x25b80a0()*-1.46621);
}

double NNfunction_NN_2_2::synapse0x25b9c70() {
   return (neuron0x25b34e0()*0.0650739);
}

double NNfunction_NN_2_2::synapse0x25b9cb0() {
   return (neuron0x25b3820()*-5.83284);
}

double NNfunction_NN_2_2::synapse0x25b9cf0() {
   return (neuron0x25b3b60()*-1.57129);
}

double NNfunction_NN_2_2::synapse0x25b9d30() {
   return (neuron0x25b3ea0()*0.0228795);
}

double NNfunction_NN_2_2::synapse0x25b9d70() {
   return (neuron0x25b41e0()*0.000225772);
}

double NNfunction_NN_2_2::synapse0x25b9db0() {
   return (neuron0x25b4520()*0.0666243);
}

double NNfunction_NN_2_2::synapse0x25b9df0() {
   return (neuron0x25b4860()*-0.00853932);
}

double NNfunction_NN_2_2::synapse0x25b9e30() {
   return (neuron0x25b4ba0()*0.0433102);
}

double NNfunction_NN_2_2::synapse0x25b9e70() {
   return (neuron0x25b4ee0()*0.0078812);
}

double NNfunction_NN_2_2::synapse0x25b9eb0() {
   return (neuron0x25b5220()*0.0120627);
}

double NNfunction_NN_2_2::synapse0x25b9ef0() {
   return (neuron0x25b5560()*-0.0409845);
}

double NNfunction_NN_2_2::synapse0x25b9f30() {
   return (neuron0x25b58a0()*-0.0955748);
}

double NNfunction_NN_2_2::synapse0x25b9f70() {
   return (neuron0x25b5be0()*-0.0457022);
}

double NNfunction_NN_2_2::synapse0x25b9fb0() {
   return (neuron0x25b5f20()*-0.0563002);
}

double NNfunction_NN_2_2::synapse0x25b9ff0() {
   return (neuron0x25b6260()*0.132912);
}

double NNfunction_NN_2_2::synapse0x25ba030() {
   return (neuron0x25b65a0()*0.00182912);
}

double NNfunction_NN_2_2::synapse0x25b9ac0() {
   return (neuron0x25b68e0()*0.0415568);
}

double NNfunction_NN_2_2::synapse0x25b9b00() {
   return (neuron0x25b6e40()*-0.019358);
}

double NNfunction_NN_2_2::synapse0x2372a40() {
   return (neuron0x25b7060()*-0.0858236);
}

double NNfunction_NN_2_2::synapse0x2372a80() {
   return (neuron0x25b73a0()*-0.0497167);
}

double NNfunction_NN_2_2::synapse0x25a2570() {
   return (neuron0x25b76e0()*-0.0334094);
}

double NNfunction_NN_2_2::synapse0x25a25b0() {
   return (neuron0x25b7a20()*0.0242349);
}

double NNfunction_NN_2_2::synapse0x25a25f0() {
   return (neuron0x25b7d60()*0.0272966);
}

double NNfunction_NN_2_2::synapse0x25b3420() {
   return (neuron0x25b80a0()*-6.97244);
}

double NNfunction_NN_2_2::synapse0x25b9580() {
   return (neuron0x25b34e0()*0.00527991);
}

double NNfunction_NN_2_2::synapse0x25b3460() {
   return (neuron0x25b3820()*-0.376051);
}

double NNfunction_NN_2_2::synapse0x25b34a0() {
   return (neuron0x25b3b60()*-1.20998);
}

double NNfunction_NN_2_2::synapse0x25ba180() {
   return (neuron0x25b3ea0()*0.0893065);
}

double NNfunction_NN_2_2::synapse0x25ba1c0() {
   return (neuron0x25b41e0()*0.0179297);
}

double NNfunction_NN_2_2::synapse0x25ba200() {
   return (neuron0x25b4520()*0.260965);
}

double NNfunction_NN_2_2::synapse0x25ba240() {
   return (neuron0x25b4860()*0.190084);
}

double NNfunction_NN_2_2::synapse0x25ba280() {
   return (neuron0x25b4ba0()*-0.103075);
}

double NNfunction_NN_2_2::synapse0x25ba2c0() {
   return (neuron0x25b4ee0()*-0.049628);
}

double NNfunction_NN_2_2::synapse0x25ba300() {
   return (neuron0x25b5220()*0.46099);
}

double NNfunction_NN_2_2::synapse0x25ba340() {
   return (neuron0x25b5560()*-0.329145);
}

double NNfunction_NN_2_2::synapse0x25ba380() {
   return (neuron0x25b58a0()*0.262578);
}

double NNfunction_NN_2_2::synapse0x25ba3c0() {
   return (neuron0x25b5be0()*0.22036);
}

double NNfunction_NN_2_2::synapse0x25ba400() {
   return (neuron0x25b5f20()*0.331233);
}

double NNfunction_NN_2_2::synapse0x25ba440() {
   return (neuron0x25b6260()*1.01189);
}

double NNfunction_NN_2_2::synapse0x25ba480() {
   return (neuron0x25b65a0()*0.290905);
}

double NNfunction_NN_2_2::synapse0x25b93d0() {
   return (neuron0x25b68e0()*-0.11888);
}

double NNfunction_NN_2_2::synapse0x25b9410() {
   return (neuron0x25b6e40()*-0.12587);
}

double NNfunction_NN_2_2::synapse0x25ba5d0() {
   return (neuron0x25b7060()*-0.199549);
}

double NNfunction_NN_2_2::synapse0x25ba610() {
   return (neuron0x25b73a0()*-0.138566);
}

double NNfunction_NN_2_2::synapse0x25ba650() {
   return (neuron0x25b76e0()*0.133018);
}

double NNfunction_NN_2_2::synapse0x25ba690() {
   return (neuron0x25b7a20()*0.143371);
}

double NNfunction_NN_2_2::synapse0x25ba6d0() {
   return (neuron0x25b7d60()*0.172574);
}

double NNfunction_NN_2_2::synapse0x25ba710() {
   return (neuron0x25b80a0()*-0.479942);
}

double NNfunction_NN_2_2::synapse0x25baa90() {
   return (neuron0x25b34e0()*-0.0193625);
}

double NNfunction_NN_2_2::synapse0x25baad0() {
   return (neuron0x25b3820()*-0.135026);
}

double NNfunction_NN_2_2::synapse0x25bab10() {
   return (neuron0x25b3b60()*-0.30682);
}

double NNfunction_NN_2_2::synapse0x25bab50() {
   return (neuron0x25b3ea0()*0.181626);
}

double NNfunction_NN_2_2::synapse0x25bab90() {
   return (neuron0x25b41e0()*0.475017);
}

double NNfunction_NN_2_2::synapse0x25babd0() {
   return (neuron0x25b4520()*0.107326);
}

double NNfunction_NN_2_2::synapse0x25bac10() {
   return (neuron0x25b4860()*0.539554);
}

double NNfunction_NN_2_2::synapse0x25bac50() {
   return (neuron0x25b4ba0()*-0.330383);
}

double NNfunction_NN_2_2::synapse0x25bac90() {
   return (neuron0x25b4ee0()*-0.0767866);
}

double NNfunction_NN_2_2::synapse0x25bacd0() {
   return (neuron0x25b5220()*0.185928);
}

double NNfunction_NN_2_2::synapse0x25bad10() {
   return (neuron0x25b5560()*-0.234478);
}

double NNfunction_NN_2_2::synapse0x25bad50() {
   return (neuron0x25b58a0()*0.923091);
}

double NNfunction_NN_2_2::synapse0x25bad90() {
   return (neuron0x25b5be0()*-0.0523311);
}

double NNfunction_NN_2_2::synapse0x25badd0() {
   return (neuron0x25b5f20()*-0.201893);
}

double NNfunction_NN_2_2::synapse0x25bae10() {
   return (neuron0x25b6260()*0.0347005);
}

double NNfunction_NN_2_2::synapse0x25bae50() {
   return (neuron0x25b65a0()*-0.105513);
}

double NNfunction_NN_2_2::synapse0x25ba8e0() {
   return (neuron0x25b68e0()*0.00311499);
}

double NNfunction_NN_2_2::synapse0x25ba920() {
   return (neuron0x25b6e40()*0.115008);
}

double NNfunction_NN_2_2::synapse0x25bafa0() {
   return (neuron0x25b7060()*-0.0548526);
}

double NNfunction_NN_2_2::synapse0x25bafe0() {
   return (neuron0x25b73a0()*-0.154065);
}

double NNfunction_NN_2_2::synapse0x25bb020() {
   return (neuron0x25b76e0()*-0.0344742);
}

double NNfunction_NN_2_2::synapse0x25bb060() {
   return (neuron0x25b7a20()*0.0210977);
}

double NNfunction_NN_2_2::synapse0x25bb0a0() {
   return (neuron0x25b7d60()*-0.017832);
}

double NNfunction_NN_2_2::synapse0x25bb0e0() {
   return (neuron0x25b80a0()*1.88509);
}

double NNfunction_NN_2_2::synapse0x25bb460() {
   return (neuron0x25b34e0()*0.209831);
}

double NNfunction_NN_2_2::synapse0x25bb4a0() {
   return (neuron0x25b3820()*-0.852827);
}

double NNfunction_NN_2_2::synapse0x25bb4e0() {
   return (neuron0x25b3b60()*1.05454);
}

double NNfunction_NN_2_2::synapse0x25bb520() {
   return (neuron0x25b3ea0()*-0.0923558);
}

double NNfunction_NN_2_2::synapse0x25bb560() {
   return (neuron0x25b41e0()*0.0067769);
}

double NNfunction_NN_2_2::synapse0x25bb5a0() {
   return (neuron0x25b4520()*-0.466507);
}

double NNfunction_NN_2_2::synapse0x25bb5e0() {
   return (neuron0x25b4860()*-0.808927);
}

double NNfunction_NN_2_2::synapse0x25bb620() {
   return (neuron0x25b4ba0()*0.211507);
}

double NNfunction_NN_2_2::synapse0x25bb660() {
   return (neuron0x25b4ee0()*0.601812);
}

double NNfunction_NN_2_2::synapse0x2372db0() {
   return (neuron0x25b5220()*-0.656085);
}

double NNfunction_NN_2_2::synapse0x2372df0() {
   return (neuron0x25b5560()*0.0564194);
}

double NNfunction_NN_2_2::synapse0x2372e30() {
   return (neuron0x25b58a0()*-0.196052);
}

double NNfunction_NN_2_2::synapse0x2372e70() {
   return (neuron0x25b5be0()*0.275855);
}

double NNfunction_NN_2_2::synapse0x2372eb0() {
   return (neuron0x25b5f20()*-0.203458);
}

double NNfunction_NN_2_2::synapse0x2372ef0() {
   return (neuron0x25b6260()*0.0746455);
}

double NNfunction_NN_2_2::synapse0x2372f30() {
   return (neuron0x25b65a0()*-0.419276);
}

double NNfunction_NN_2_2::synapse0x25bb2b0() {
   return (neuron0x25b68e0()*-0.699314);
}

double NNfunction_NN_2_2::synapse0x25bb2f0() {
   return (neuron0x25b6e40()*-0.410742);
}

double NNfunction_NN_2_2::synapse0x2373080() {
   return (neuron0x25b7060()*-0.184051);
}

double NNfunction_NN_2_2::synapse0x23730c0() {
   return (neuron0x25b73a0()*0.450547);
}

double NNfunction_NN_2_2::synapse0x2373100() {
   return (neuron0x25b76e0()*-0.530271);
}

double NNfunction_NN_2_2::synapse0x2373140() {
   return (neuron0x25b7a20()*0.250073);
}

double NNfunction_NN_2_2::synapse0x2373180() {
   return (neuron0x25b7d60()*0.0625358);
}

double NNfunction_NN_2_2::synapse0x25bbeb0() {
   return (neuron0x25b80a0()*0.180288);
}

double NNfunction_NN_2_2::synapse0x25bc230() {
   return (neuron0x25b34e0()*0.00197825);
}

double NNfunction_NN_2_2::synapse0x25bc270() {
   return (neuron0x25b3820()*-8.82887);
}

double NNfunction_NN_2_2::synapse0x25bc2b0() {
   return (neuron0x25b3b60()*0.0283428);
}

double NNfunction_NN_2_2::synapse0x25bc2f0() {
   return (neuron0x25b3ea0()*0.00245013);
}

double NNfunction_NN_2_2::synapse0x25bc330() {
   return (neuron0x25b41e0()*0.00179694);
}

double NNfunction_NN_2_2::synapse0x25bc370() {
   return (neuron0x25b4520()*0.0162337);
}

double NNfunction_NN_2_2::synapse0x25bc3b0() {
   return (neuron0x25b4860()*0.000839117);
}

double NNfunction_NN_2_2::synapse0x25bc3f0() {
   return (neuron0x25b4ba0()*-0.0152492);
}

double NNfunction_NN_2_2::synapse0x25bc430() {
   return (neuron0x25b4ee0()*0.00805459);
}

double NNfunction_NN_2_2::synapse0x25bc470() {
   return (neuron0x25b5220()*-0.00107271);
}

double NNfunction_NN_2_2::synapse0x25bc4b0() {
   return (neuron0x25b5560()*-0.018152);
}

double NNfunction_NN_2_2::synapse0x25bc4f0() {
   return (neuron0x25b58a0()*-0.0275044);
}

double NNfunction_NN_2_2::synapse0x25bc530() {
   return (neuron0x25b5be0()*0.000821761);
}

double NNfunction_NN_2_2::synapse0x25bc570() {
   return (neuron0x25b5f20()*-0.0252342);
}

double NNfunction_NN_2_2::synapse0x25bc5b0() {
   return (neuron0x25b6260()*0.0597343);
}

double NNfunction_NN_2_2::synapse0x25bc5f0() {
   return (neuron0x25b65a0()*0.0209513);
}

double NNfunction_NN_2_2::synapse0x25bc080() {
   return (neuron0x25b68e0()*-6.08012e-06);
}

double NNfunction_NN_2_2::synapse0x25bc0c0() {
   return (neuron0x25b6e40()*0.000851353);
}

double NNfunction_NN_2_2::synapse0x25bc740() {
   return (neuron0x25b7060()*0.00222595);
}

double NNfunction_NN_2_2::synapse0x25bc780() {
   return (neuron0x25b73a0()*-0.00520295);
}

double NNfunction_NN_2_2::synapse0x25bc7c0() {
   return (neuron0x25b76e0()*-0.0452034);
}

double NNfunction_NN_2_2::synapse0x25bc800() {
   return (neuron0x25b7a20()*-0.00195123);
}

double NNfunction_NN_2_2::synapse0x25bc840() {
   return (neuron0x25b7d60()*-0.00170563);
}

double NNfunction_NN_2_2::synapse0x25bc880() {
   return (neuron0x25b80a0()*0.0368441);
}

double NNfunction_NN_2_2::synapse0x25bcc00() {
   return (neuron0x25b34e0()*0.118708);
}

double NNfunction_NN_2_2::synapse0x25bcc40() {
   return (neuron0x25b3820()*-0.274478);
}

double NNfunction_NN_2_2::synapse0x25bcc80() {
   return (neuron0x25b3b60()*-0.102395);
}

double NNfunction_NN_2_2::synapse0x25bccc0() {
   return (neuron0x25b3ea0()*-0.252256);
}

double NNfunction_NN_2_2::synapse0x25bcd00() {
   return (neuron0x25b41e0()*0.294167);
}

double NNfunction_NN_2_2::synapse0x25bcd40() {
   return (neuron0x25b4520()*-0.167459);
}

double NNfunction_NN_2_2::synapse0x25bcd80() {
   return (neuron0x25b4860()*-0.00708567);
}

double NNfunction_NN_2_2::synapse0x25bcdc0() {
   return (neuron0x25b4ba0()*-0.429544);
}

double NNfunction_NN_2_2::synapse0x25bce00() {
   return (neuron0x25b4ee0()*0.242044);
}

double NNfunction_NN_2_2::synapse0x25bce40() {
   return (neuron0x25b5220()*-0.223144);
}

double NNfunction_NN_2_2::synapse0x25bce80() {
   return (neuron0x25b5560()*-0.751176);
}

double NNfunction_NN_2_2::synapse0x25bcec0() {
   return (neuron0x25b58a0()*-0.248821);
}

double NNfunction_NN_2_2::synapse0x25bcf00() {
   return (neuron0x25b5be0()*0.140619);
}

double NNfunction_NN_2_2::synapse0x25bcf40() {
   return (neuron0x25b5f20()*-0.0851839);
}

double NNfunction_NN_2_2::synapse0x25bcf80() {
   return (neuron0x25b6260()*0.361262);
}

double NNfunction_NN_2_2::synapse0x25bcfc0() {
   return (neuron0x25b65a0()*0.245788);
}

double NNfunction_NN_2_2::synapse0x25bca50() {
   return (neuron0x25b68e0()*0.0113982);
}

double NNfunction_NN_2_2::synapse0x25bca90() {
   return (neuron0x25b6e40()*0.0529011);
}

double NNfunction_NN_2_2::synapse0x25bd110() {
   return (neuron0x25b7060()*-0.197563);
}

double NNfunction_NN_2_2::synapse0x25bd150() {
   return (neuron0x25b73a0()*-0.0437307);
}

double NNfunction_NN_2_2::synapse0x25bd190() {
   return (neuron0x25b76e0()*-0.678314);
}

double NNfunction_NN_2_2::synapse0x25bd1d0() {
   return (neuron0x25b7a20()*0.273702);
}

double NNfunction_NN_2_2::synapse0x25bd210() {
   return (neuron0x25b7d60()*-0.0952627);
}

double NNfunction_NN_2_2::synapse0x25bd250() {
   return (neuron0x25b80a0()*1.13632);
}

double NNfunction_NN_2_2::synapse0x25b6d30() {
   return (neuron0x25b34e0()*-2.50863);
}

double NNfunction_NN_2_2::synapse0x25b6d70() {
   return (neuron0x25b3820()*0.0362634);
}

double NNfunction_NN_2_2::synapse0x25b6db0() {
   return (neuron0x25b3b60()*-0.320287);
}

double NNfunction_NN_2_2::synapse0x25b6df0() {
   return (neuron0x25b3ea0()*-0.00306172);
}

double NNfunction_NN_2_2::synapse0x25bd7e0() {
   return (neuron0x25b41e0()*0.0795709);
}

double NNfunction_NN_2_2::synapse0x25bd820() {
   return (neuron0x25b4520()*-0.0435433);
}

double NNfunction_NN_2_2::synapse0x25bd860() {
   return (neuron0x25b4860()*-0.00301912);
}

double NNfunction_NN_2_2::synapse0x25bd8a0() {
   return (neuron0x25b4ba0()*0.0531848);
}

double NNfunction_NN_2_2::synapse0x25bd8e0() {
   return (neuron0x25b4ee0()*0.0077042);
}

double NNfunction_NN_2_2::synapse0x25bd920() {
   return (neuron0x25b5220()*-0.00124606);
}

double NNfunction_NN_2_2::synapse0x25bd960() {
   return (neuron0x25b5560()*0.00763256);
}

double NNfunction_NN_2_2::synapse0x25bd9a0() {
   return (neuron0x25b58a0()*0.0300233);
}

double NNfunction_NN_2_2::synapse0x25bd9e0() {
   return (neuron0x25b5be0()*-0.0169989);
}

double NNfunction_NN_2_2::synapse0x25bda20() {
   return (neuron0x25b5f20()*0.0177635);
}

double NNfunction_NN_2_2::synapse0x25bda60() {
   return (neuron0x25b6260()*-0.0340651);
}

double NNfunction_NN_2_2::synapse0x25bdaa0() {
   return (neuron0x25b65a0()*-0.0412458);
}

double NNfunction_NN_2_2::synapse0x25bd420() {
   return (neuron0x25b68e0()*0.0557339);
}

double NNfunction_NN_2_2::synapse0x25bd460() {
   return (neuron0x25b6e40()*0.00385471);
}

double NNfunction_NN_2_2::synapse0x25bdbf0() {
   return (neuron0x25b7060()*-0.0195371);
}

double NNfunction_NN_2_2::synapse0x25bdc30() {
   return (neuron0x25b73a0()*-0.0151972);
}

double NNfunction_NN_2_2::synapse0x25bdc70() {
   return (neuron0x25b76e0()*-0.0698631);
}

double NNfunction_NN_2_2::synapse0x25bdcb0() {
   return (neuron0x25b7a20()*-0.0130551);
}

double NNfunction_NN_2_2::synapse0x25bdcf0() {
   return (neuron0x25b7d60()*-0.000411343);
}

double NNfunction_NN_2_2::synapse0x25bdd30() {
   return (neuron0x25b80a0()*-3.75813);
}

double NNfunction_NN_2_2::synapse0x25be0b0() {
   return (neuron0x25b34e0()*-0.00174991);
}

double NNfunction_NN_2_2::synapse0x25be0f0() {
   return (neuron0x25b3820()*-11.3766);
}

double NNfunction_NN_2_2::synapse0x25be130() {
   return (neuron0x25b3b60()*-1.18277);
}

double NNfunction_NN_2_2::synapse0x25be170() {
   return (neuron0x25b3ea0()*0.00107215);
}

double NNfunction_NN_2_2::synapse0x25be1b0() {
   return (neuron0x25b41e0()*0.012639);
}

double NNfunction_NN_2_2::synapse0x25be1f0() {
   return (neuron0x25b4520()*-0.000158136);
}

double NNfunction_NN_2_2::synapse0x25be230() {
   return (neuron0x25b4860()*0.00469625);
}

double NNfunction_NN_2_2::synapse0x25be270() {
   return (neuron0x25b4ba0()*-0.00909105);
}

double NNfunction_NN_2_2::synapse0x25be2b0() {
   return (neuron0x25b4ee0()*0.0184536);
}

double NNfunction_NN_2_2::synapse0x25be2f0() {
   return (neuron0x25b5220()*-0.00848075);
}

double NNfunction_NN_2_2::synapse0x25be330() {
   return (neuron0x25b5560()*-0.00910297);
}

double NNfunction_NN_2_2::synapse0x25be370() {
   return (neuron0x25b58a0()*-0.0164414);
}

double NNfunction_NN_2_2::synapse0x25be3b0() {
   return (neuron0x25b5be0()*-0.0171738);
}

double NNfunction_NN_2_2::synapse0x25be3f0() {
   return (neuron0x25b5f20()*-0.0455796);
}

double NNfunction_NN_2_2::synapse0x25be430() {
   return (neuron0x25b6260()*0.0766434);
}

double NNfunction_NN_2_2::synapse0x25be470() {
   return (neuron0x25b65a0()*0.0428857);
}

double NNfunction_NN_2_2::synapse0x25bdf00() {
   return (neuron0x25b68e0()*0.00405149);
}

double NNfunction_NN_2_2::synapse0x25bdf40() {
   return (neuron0x25b6e40()*-0.00444819);
}

double NNfunction_NN_2_2::synapse0x25be5c0() {
   return (neuron0x25b7060()*-0.00704474);
}

double NNfunction_NN_2_2::synapse0x25be600() {
   return (neuron0x25b73a0()*0.00469948);
}

double NNfunction_NN_2_2::synapse0x25be640() {
   return (neuron0x25b76e0()*-0.0255164);
}

double NNfunction_NN_2_2::synapse0x25be680() {
   return (neuron0x25b7a20()*-0.0207051);
}

double NNfunction_NN_2_2::synapse0x25be6c0() {
   return (neuron0x25b7d60()*0.00952001);
}

double NNfunction_NN_2_2::synapse0x25be700() {
   return (neuron0x25b80a0()*5.81289);
}

double NNfunction_NN_2_2::synapse0x25bea80() {
   return (neuron0x25b34e0()*-0.0576452);
}

double NNfunction_NN_2_2::synapse0x25beac0() {
   return (neuron0x25b3820()*7.48207);
}

double NNfunction_NN_2_2::synapse0x25beb00() {
   return (neuron0x25b3b60()*1.17888);
}

double NNfunction_NN_2_2::synapse0x25beb40() {
   return (neuron0x25b3ea0()*-0.023274);
}

double NNfunction_NN_2_2::synapse0x25beb80() {
   return (neuron0x25b41e0()*-0.0291);
}

double NNfunction_NN_2_2::synapse0x25bebc0() {
   return (neuron0x25b4520()*0.0533003);
}

double NNfunction_NN_2_2::synapse0x25bec00() {
   return (neuron0x25b4860()*-0.0262355);
}

double NNfunction_NN_2_2::synapse0x25bec40() {
   return (neuron0x25b4ba0()*-0.00115174);
}

double NNfunction_NN_2_2::synapse0x25bec80() {
   return (neuron0x25b4ee0()*0.0313458);
}

double NNfunction_NN_2_2::synapse0x25becc0() {
   return (neuron0x25b5220()*-0.00533491);
}

double NNfunction_NN_2_2::synapse0x25bed00() {
   return (neuron0x25b5560()*-0.0295962);
}

double NNfunction_NN_2_2::synapse0x25bed40() {
   return (neuron0x25b58a0()*-0.143106);
}

double NNfunction_NN_2_2::synapse0x25bed80() {
   return (neuron0x25b5be0()*0.0533531);
}

double NNfunction_NN_2_2::synapse0x25bedc0() {
   return (neuron0x25b5f20()*-0.0154042);
}

double NNfunction_NN_2_2::synapse0x25bee00() {
   return (neuron0x25b6260()*0.568583);
}

double NNfunction_NN_2_2::synapse0x25bee40() {
   return (neuron0x25b65a0()*0.0395237);
}

double NNfunction_NN_2_2::synapse0x25be8d0() {
   return (neuron0x25b68e0()*0.0190713);
}

double NNfunction_NN_2_2::synapse0x25be910() {
   return (neuron0x25b6e40()*0.0285831);
}

double NNfunction_NN_2_2::synapse0x25bb6a0() {
   return (neuron0x25b7060()*0.0410339);
}

double NNfunction_NN_2_2::synapse0x25bb6e0() {
   return (neuron0x25b73a0()*-0.00612281);
}

double NNfunction_NN_2_2::synapse0x25bb720() {
   return (neuron0x25b76e0()*-0.0433872);
}

double NNfunction_NN_2_2::synapse0x25bb760() {
   return (neuron0x25b7a20()*-0.0135336);
}

double NNfunction_NN_2_2::synapse0x25bb7a0() {
   return (neuron0x25b7d60()*0.0118802);
}

double NNfunction_NN_2_2::synapse0x25bb7e0() {
   return (neuron0x25b80a0()*-0.00108846);
}

double NNfunction_NN_2_2::synapse0x25bbb60() {
   return (neuron0x25b34e0()*-0.0572563);
}

double NNfunction_NN_2_2::synapse0x25bbba0() {
   return (neuron0x25b3820()*0.0167793);
}

double NNfunction_NN_2_2::synapse0x25bbbe0() {
   return (neuron0x25b3b60()*0.0490141);
}

double NNfunction_NN_2_2::synapse0x25bbc20() {
   return (neuron0x25b3ea0()*0.0836638);
}

double NNfunction_NN_2_2::synapse0x25bbc60() {
   return (neuron0x25b41e0()*0.0149546);
}

double NNfunction_NN_2_2::synapse0x25bbca0() {
   return (neuron0x25b4520()*0.0408139);
}

double NNfunction_NN_2_2::synapse0x25bbce0() {
   return (neuron0x25b4860()*-0.000441258);
}

double NNfunction_NN_2_2::synapse0x25bbd20() {
   return (neuron0x25b4ba0()*-0.00260808);
}

double NNfunction_NN_2_2::synapse0x25bbd60() {
   return (neuron0x25b4ee0()*0.0452403);
}

double NNfunction_NN_2_2::synapse0x25bbda0() {
   return (neuron0x25b5220()*-0.0533581);
}

double NNfunction_NN_2_2::synapse0x25bbde0() {
   return (neuron0x25b5560()*0.0280842);
}

double NNfunction_NN_2_2::synapse0x25bbe20() {
   return (neuron0x25b58a0()*0.18532);
}

double NNfunction_NN_2_2::synapse0x25bbe60() {
   return (neuron0x25b5be0()*-0.0228387);
}

double NNfunction_NN_2_2::synapse0x25bffa0() {
   return (neuron0x25b5f20()*-0.0280989);
}

double NNfunction_NN_2_2::synapse0x25bffe0() {
   return (neuron0x25b6260()*0.204733);
}

double NNfunction_NN_2_2::synapse0x25c0020() {
   return (neuron0x25b65a0()*-0.00841226);
}

double NNfunction_NN_2_2::synapse0x25bb9b0() {
   return (neuron0x25b68e0()*-0.024552);
}

double NNfunction_NN_2_2::synapse0x25bb9f0() {
   return (neuron0x25b6e40()*-0.0187441);
}

double NNfunction_NN_2_2::synapse0x25c0170() {
   return (neuron0x25b7060()*-0.0385876);
}

double NNfunction_NN_2_2::synapse0x25c01b0() {
   return (neuron0x25b73a0()*0.017038);
}

double NNfunction_NN_2_2::synapse0x25c01f0() {
   return (neuron0x25b76e0()*-0.243947);
}

double NNfunction_NN_2_2::synapse0x25c0230() {
   return (neuron0x25b7a20()*0.0154121);
}

double NNfunction_NN_2_2::synapse0x25c0270() {
   return (neuron0x25b7d60()*-0.0415753);
}

double NNfunction_NN_2_2::synapse0x25c02b0() {
   return (neuron0x25b80a0()*-4.54986);
}

double NNfunction_NN_2_2::synapse0x25c0630() {
   return (neuron0x25b34e0()*-0.0271657);
}

double NNfunction_NN_2_2::synapse0x25c0670() {
   return (neuron0x25b3820()*-1.03055);
}

double NNfunction_NN_2_2::synapse0x25c06b0() {
   return (neuron0x25b3b60()*-2.01231);
}

double NNfunction_NN_2_2::synapse0x25c06f0() {
   return (neuron0x25b3ea0()*-0.0400247);
}

double NNfunction_NN_2_2::synapse0x25c0730() {
   return (neuron0x25b41e0()*-0.0732251);
}

double NNfunction_NN_2_2::synapse0x25c0770() {
   return (neuron0x25b4520()*-0.0404894);
}

double NNfunction_NN_2_2::synapse0x25c07b0() {
   return (neuron0x25b4860()*0.0244585);
}

double NNfunction_NN_2_2::synapse0x25c07f0() {
   return (neuron0x25b4ba0()*0.0433284);
}

double NNfunction_NN_2_2::synapse0x25c0830() {
   return (neuron0x25b4ee0()*0.0480407);
}

double NNfunction_NN_2_2::synapse0x25c0870() {
   return (neuron0x25b5220()*-0.00663068);
}

double NNfunction_NN_2_2::synapse0x25c08b0() {
   return (neuron0x25b5560()*-0.0351913);
}

double NNfunction_NN_2_2::synapse0x25c08f0() {
   return (neuron0x25b58a0()*1.22225);
}

double NNfunction_NN_2_2::synapse0x25c0930() {
   return (neuron0x25b5be0()*-0.0520609);
}

double NNfunction_NN_2_2::synapse0x25c0970() {
   return (neuron0x25b5f20()*0.0534074);
}

double NNfunction_NN_2_2::synapse0x25c09b0() {
   return (neuron0x25b6260()*-0.348209);
}

double NNfunction_NN_2_2::synapse0x25c09f0() {
   return (neuron0x25b65a0()*0.00695209);
}

double NNfunction_NN_2_2::synapse0x25c0480() {
   return (neuron0x25b68e0()*-0.0316016);
}

double NNfunction_NN_2_2::synapse0x25c04c0() {
   return (neuron0x25b6e40()*-0.050003);
}

double NNfunction_NN_2_2::synapse0x25c0b40() {
   return (neuron0x25b7060()*-0.02339);
}

double NNfunction_NN_2_2::synapse0x25c0b80() {
   return (neuron0x25b73a0()*-0.0139139);
}

double NNfunction_NN_2_2::synapse0x25c0bc0() {
   return (neuron0x25b76e0()*0.0256104);
}

double NNfunction_NN_2_2::synapse0x25c0c00() {
   return (neuron0x25b7a20()*0.0341441);
}

double NNfunction_NN_2_2::synapse0x25c0c40() {
   return (neuron0x25b7d60()*0.0157489);
}

double NNfunction_NN_2_2::synapse0x25c0c80() {
   return (neuron0x25b80a0()*0.10493);
}

double NNfunction_NN_2_2::synapse0x25c1000() {
   return (neuron0x25b34e0()*-0.00375074);
}

double NNfunction_NN_2_2::synapse0x25c1040() {
   return (neuron0x25b3820()*-12.7254);
}

double NNfunction_NN_2_2::synapse0x25c1080() {
   return (neuron0x25b3b60()*1.53529);
}

double NNfunction_NN_2_2::synapse0x25c10c0() {
   return (neuron0x25b3ea0()*-0.0183955);
}

double NNfunction_NN_2_2::synapse0x25c1100() {
   return (neuron0x25b41e0()*-0.0235922);
}

double NNfunction_NN_2_2::synapse0x25c1140() {
   return (neuron0x25b4520()*-0.0216454);
}

double NNfunction_NN_2_2::synapse0x25c1180() {
   return (neuron0x25b4860()*0.00194009);
}

double NNfunction_NN_2_2::synapse0x25c11c0() {
   return (neuron0x25b4ba0()*-0.00518403);
}

double NNfunction_NN_2_2::synapse0x25c1200() {
   return (neuron0x25b4ee0()*0.0276591);
}

double NNfunction_NN_2_2::synapse0x25c1240() {
   return (neuron0x25b5220()*0.014501);
}

double NNfunction_NN_2_2::synapse0x25c1280() {
   return (neuron0x25b5560()*-0.00263748);
}

double NNfunction_NN_2_2::synapse0x25c12c0() {
   return (neuron0x25b58a0()*0.184075);
}

double NNfunction_NN_2_2::synapse0x25c1300() {
   return (neuron0x25b5be0()*0.0312284);
}

double NNfunction_NN_2_2::synapse0x25c1340() {
   return (neuron0x25b5f20()*-0.02433);
}

double NNfunction_NN_2_2::synapse0x25c1380() {
   return (neuron0x25b6260()*-0.255611);
}

double NNfunction_NN_2_2::synapse0x25c13c0() {
   return (neuron0x25b65a0()*-0.000286005);
}

double NNfunction_NN_2_2::synapse0x25c0e50() {
   return (neuron0x25b68e0()*0.00603612);
}

double NNfunction_NN_2_2::synapse0x25c0e90() {
   return (neuron0x25b6e40()*0.000968424);
}

double NNfunction_NN_2_2::synapse0x25c1510() {
   return (neuron0x25b7060()*0.015725);
}

double NNfunction_NN_2_2::synapse0x25c1550() {
   return (neuron0x25b73a0()*-0.00161377);
}

double NNfunction_NN_2_2::synapse0x25c1590() {
   return (neuron0x25b76e0()*0.0279745);
}

double NNfunction_NN_2_2::synapse0x25c15d0() {
   return (neuron0x25b7a20()*0.00982231);
}

double NNfunction_NN_2_2::synapse0x25c1610() {
   return (neuron0x25b7d60()*-0.0276991);
}

double NNfunction_NN_2_2::synapse0x25c1650() {
   return (neuron0x25b80a0()*0.00442308);
}

double NNfunction_NN_2_2::synapse0x25c19d0() {
   return (neuron0x25b34e0()*-0.0101687);
}

double NNfunction_NN_2_2::synapse0x25c1a10() {
   return (neuron0x25b3820()*-0.0380134);
}

double NNfunction_NN_2_2::synapse0x25c1a50() {
   return (neuron0x25b3b60()*-4.04017);
}

double NNfunction_NN_2_2::synapse0x25c1a90() {
   return (neuron0x25b3ea0()*0.00782222);
}

double NNfunction_NN_2_2::synapse0x25c1ad0() {
   return (neuron0x25b41e0()*-0.0148106);
}

double NNfunction_NN_2_2::synapse0x25c1b10() {
   return (neuron0x25b4520()*0.00343321);
}

double NNfunction_NN_2_2::synapse0x25c1b50() {
   return (neuron0x25b4860()*-0.000894759);
}

double NNfunction_NN_2_2::synapse0x25c1b90() {
   return (neuron0x25b4ba0()*-0.007818);
}

double NNfunction_NN_2_2::synapse0x25c1bd0() {
   return (neuron0x25b4ee0()*0.0114978);
}

double NNfunction_NN_2_2::synapse0x25c1c10() {
   return (neuron0x25b5220()*-0.00620091);
}

double NNfunction_NN_2_2::synapse0x25c1c50() {
   return (neuron0x25b5560()*0.0113347);
}

double NNfunction_NN_2_2::synapse0x25c1c90() {
   return (neuron0x25b58a0()*-0.0136847);
}

double NNfunction_NN_2_2::synapse0x25c1cd0() {
   return (neuron0x25b5be0()*0.00281107);
}

double NNfunction_NN_2_2::synapse0x25c1d10() {
   return (neuron0x25b5f20()*-0.00416336);
}

double NNfunction_NN_2_2::synapse0x25c1d50() {
   return (neuron0x25b6260()*-0.0267817);
}

double NNfunction_NN_2_2::synapse0x25c1d90() {
   return (neuron0x25b65a0()*-0.002942);
}

double NNfunction_NN_2_2::synapse0x25c1820() {
   return (neuron0x25b68e0()*0.0196002);
}

double NNfunction_NN_2_2::synapse0x25c1860() {
   return (neuron0x25b6e40()*-0.00920762);
}

double NNfunction_NN_2_2::synapse0x25c1ee0() {
   return (neuron0x25b7060()*-0.00620773);
}

double NNfunction_NN_2_2::synapse0x25c1f20() {
   return (neuron0x25b73a0()*0.00740738);
}

double NNfunction_NN_2_2::synapse0x25c1f60() {
   return (neuron0x25b76e0()*0.0274407);
}

double NNfunction_NN_2_2::synapse0x25c1fa0() {
   return (neuron0x25b7a20()*0.0101368);
}

double NNfunction_NN_2_2::synapse0x25c1fe0() {
   return (neuron0x25b7d60()*0.000461949);
}

double NNfunction_NN_2_2::synapse0x25c2020() {
   return (neuron0x25b80a0()*3.09412);
}

double NNfunction_NN_2_2::synapse0x25c23a0() {
   return (neuron0x25b34e0()*-0.0650485);
}

double NNfunction_NN_2_2::synapse0x25b3700() {
   return (neuron0x25b3820()*-0.553715);
}

double NNfunction_NN_2_2::synapse0x25b3740() {
   return (neuron0x25b3b60()*-2.26568);
}

double NNfunction_NN_2_2::synapse0x25b3a40() {
   return (neuron0x25b3ea0()*0.128347);
}

double NNfunction_NN_2_2::synapse0x25b3a80() {
   return (neuron0x25b41e0()*-0.388756);
}

double NNfunction_NN_2_2::synapse0x25b3d80() {
   return (neuron0x25b4520()*0.505028);
}

double NNfunction_NN_2_2::synapse0x25b3dc0() {
   return (neuron0x25b4860()*0.213064);
}

double NNfunction_NN_2_2::synapse0x25b40c0() {
   return (neuron0x25b4ba0()*0.525903);
}

double NNfunction_NN_2_2::synapse0x25b4100() {
   return (neuron0x25b4ee0()*0.41097);
}

double NNfunction_NN_2_2::synapse0x25b4400() {
   return (neuron0x25b5220()*-0.150034);
}

double NNfunction_NN_2_2::synapse0x25b4440() {
   return (neuron0x25b5560()*-0.337413);
}

double NNfunction_NN_2_2::synapse0x25b4740() {
   return (neuron0x25b58a0()*0.145934);
}

double NNfunction_NN_2_2::synapse0x25b4780() {
   return (neuron0x25b5be0()*-0.115566);
}

double NNfunction_NN_2_2::synapse0x25b4a80() {
   return (neuron0x25b5f20()*0.114827);
}

double NNfunction_NN_2_2::synapse0x25b4ac0() {
   return (neuron0x25b6260()*-0.699788);
}

double NNfunction_NN_2_2::synapse0x25b4dc0() {
   return (neuron0x25b65a0()*0.203434);
}

double NNfunction_NN_2_2::synapse0x25b4e00() {
   return (neuron0x25b68e0()*0.15262);
}

double NNfunction_NN_2_2::synapse0x25b5100() {
   return (neuron0x25b6e40()*-0.533347);
}

double NNfunction_NN_2_2::synapse0x25b5140() {
   return (neuron0x25b7060()*-0.342593);
}

double NNfunction_NN_2_2::synapse0x25b5440() {
   return (neuron0x25b73a0()*0.138938);
}

double NNfunction_NN_2_2::synapse0x25b5480() {
   return (neuron0x25b76e0()*-0.200554);
}

double NNfunction_NN_2_2::synapse0x25b5780() {
   return (neuron0x25b7a20()*-0.0485437);
}

double NNfunction_NN_2_2::synapse0x25b57c0() {
   return (neuron0x25b7d60()*-0.281438);
}

double NNfunction_NN_2_2::synapse0x25b5ac0() {
   return (neuron0x25b80a0()*-1.87014);
}

double NNfunction_NN_2_2::synapse0x25b5b00() {
   return (neuron0x25b34e0()*0.0440727);
}

double NNfunction_NN_2_2::synapse0x25b67c0() {
   return (neuron0x25b3820()*0.0653213);
}

double NNfunction_NN_2_2::synapse0x25b6800() {
   return (neuron0x25b3b60()*-0.808881);
}

double NNfunction_NN_2_2::synapse0x25c21f0() {
   return (neuron0x25b3ea0()*0.0170866);
}

double NNfunction_NN_2_2::synapse0x25c2230() {
   return (neuron0x25b41e0()*0.00206794);
}

double NNfunction_NN_2_2::synapse0x25b6b00() {
   return (neuron0x25b4520()*0.00735411);
}

double NNfunction_NN_2_2::synapse0x25b6b40() {
   return (neuron0x25b4860()*0.00845814);
}

double NNfunction_NN_2_2::synapse0x2364ad0() {
   return (neuron0x25b4ba0()*-0.0051068);
}

double NNfunction_NN_2_2::synapse0x2364b10() {
   return (neuron0x25b4ee0()*-0.00544896);
}

double NNfunction_NN_2_2::synapse0x25b7280() {
   return (neuron0x25b5220()*-0.012933);
}

double NNfunction_NN_2_2::synapse0x25b72c0() {
   return (neuron0x25b5560()*-0.0137739);
}

double NNfunction_NN_2_2::synapse0x25b75c0() {
   return (neuron0x25b58a0()*-0.0104108);
}

double NNfunction_NN_2_2::synapse0x25b7600() {
   return (neuron0x25b5be0()*-0.00072078);
}

double NNfunction_NN_2_2::synapse0x25b7900() {
   return (neuron0x25b5f20()*-0.0048227);
}

double NNfunction_NN_2_2::synapse0x25b7940() {
   return (neuron0x25b6260()*0.0554096);
}

double NNfunction_NN_2_2::synapse0x25b7c40() {
   return (neuron0x25b65a0()*0.0087848);
}

double NNfunction_NN_2_2::synapse0x25b7c80() {
   return (neuron0x25b68e0()*-0.022699);
}

double NNfunction_NN_2_2::synapse0x25b7f80() {
   return (neuron0x25b6e40()*-0.00832283);
}

double NNfunction_NN_2_2::synapse0x25b7fc0() {
   return (neuron0x25b7060()*-0.0133185);
}

double NNfunction_NN_2_2::synapse0x25b82c0() {
   return (neuron0x25b73a0()*0.00801066);
}

double NNfunction_NN_2_2::synapse0x25b8300() {
   return (neuron0x25b76e0()*-0.0450558);
}

double NNfunction_NN_2_2::synapse0x25b5e00() {
   return (neuron0x25b7a20()*-0.00438993);
}

double NNfunction_NN_2_2::synapse0x25b5e40() {
   return (neuron0x25b7d60()*0.00513858);
}

double NNfunction_NN_2_2::synapse0x25c4110() {
   return (neuron0x25b80a0()*-5.91427);
}

double NNfunction_NN_2_2::synapse0x25c4490() {
   return (neuron0x25b34e0()*-0.0234673);
}

double NNfunction_NN_2_2::synapse0x25c44d0() {
   return (neuron0x25b3820()*0.00485526);
}

double NNfunction_NN_2_2::synapse0x25c4510() {
   return (neuron0x25b3b60()*3.35834);
}

double NNfunction_NN_2_2::synapse0x25c4550() {
   return (neuron0x25b3ea0()*-0.0145526);
}

double NNfunction_NN_2_2::synapse0x25c4590() {
   return (neuron0x25b41e0()*-0.0208392);
}

double NNfunction_NN_2_2::synapse0x25c45d0() {
   return (neuron0x25b4520()*-0.000848346);
}

double NNfunction_NN_2_2::synapse0x25c4610() {
   return (neuron0x25b4860()*-0.0287723);
}

double NNfunction_NN_2_2::synapse0x25c4650() {
   return (neuron0x25b4ba0()*-0.0489851);
}

double NNfunction_NN_2_2::synapse0x25c4690() {
   return (neuron0x25b4ee0()*-0.0194124);
}

double NNfunction_NN_2_2::synapse0x25c46d0() {
   return (neuron0x25b5220()*0.033074);
}

double NNfunction_NN_2_2::synapse0x25c4710() {
   return (neuron0x25b5560()*0.009853);
}

double NNfunction_NN_2_2::synapse0x25c4750() {
   return (neuron0x25b58a0()*0.0392612);
}

double NNfunction_NN_2_2::synapse0x25c4790() {
   return (neuron0x25b5be0()*0.0380959);
}

double NNfunction_NN_2_2::synapse0x25c47d0() {
   return (neuron0x25b5f20()*0.0643534);
}

double NNfunction_NN_2_2::synapse0x25c4810() {
   return (neuron0x25b6260()*0.0768413);
}

double NNfunction_NN_2_2::synapse0x25c4850() {
   return (neuron0x25b65a0()*0.0377978);
}

double NNfunction_NN_2_2::synapse0x25c42e0() {
   return (neuron0x25b68e0()*-7.32486e-05);
}

double NNfunction_NN_2_2::synapse0x25c4320() {
   return (neuron0x25b6e40()*0.0228338);
}

double NNfunction_NN_2_2::synapse0x25c49a0() {
   return (neuron0x25b7060()*0.0356637);
}

double NNfunction_NN_2_2::synapse0x25c49e0() {
   return (neuron0x25b73a0()*-0.00624265);
}

double NNfunction_NN_2_2::synapse0x25c4a20() {
   return (neuron0x25b76e0()*0.0871392);
}

double NNfunction_NN_2_2::synapse0x25c4a60() {
   return (neuron0x25b7a20()*0.0163227);
}

double NNfunction_NN_2_2::synapse0x25c4aa0() {
   return (neuron0x25b7d60()*-0.0134829);
}

double NNfunction_NN_2_2::synapse0x25c4ae0() {
   return (neuron0x25b80a0()*0.130533);
}

double NNfunction_NN_2_2::synapse0x25c4e60() {
   return (neuron0x25b34e0()*0.0721139);
}

double NNfunction_NN_2_2::synapse0x25c4ea0() {
   return (neuron0x25b3820()*-0.0650577);
}

double NNfunction_NN_2_2::synapse0x25c4ee0() {
   return (neuron0x25b3b60()*0.48627);
}

double NNfunction_NN_2_2::synapse0x25c4f20() {
   return (neuron0x25b3ea0()*0.0127234);
}

double NNfunction_NN_2_2::synapse0x25c4f60() {
   return (neuron0x25b41e0()*0.00300691);
}

double NNfunction_NN_2_2::synapse0x25c4fa0() {
   return (neuron0x25b4520()*0.0279724);
}

double NNfunction_NN_2_2::synapse0x25c4fe0() {
   return (neuron0x25b4860()*0.00308301);
}

double NNfunction_NN_2_2::synapse0x25c5020() {
   return (neuron0x25b4ba0()*-0.000460323);
}

double NNfunction_NN_2_2::synapse0x25c5060() {
   return (neuron0x25b4ee0()*0.0179828);
}

double NNfunction_NN_2_2::synapse0x25c50a0() {
   return (neuron0x25b5220()*-0.0141695);
}

double NNfunction_NN_2_2::synapse0x25c50e0() {
   return (neuron0x25b5560()*-0.00953874);
}

double NNfunction_NN_2_2::synapse0x25c5120() {
   return (neuron0x25b58a0()*0.0528429);
}

double NNfunction_NN_2_2::synapse0x25c5160() {
   return (neuron0x25b5be0()*0.0237618);
}

double NNfunction_NN_2_2::synapse0x25c51a0() {
   return (neuron0x25b5f20()*0.0318403);
}

double NNfunction_NN_2_2::synapse0x25c51e0() {
   return (neuron0x25b6260()*-0.0661566);
}

double NNfunction_NN_2_2::synapse0x25c5220() {
   return (neuron0x25b65a0()*0.00272531);
}

double NNfunction_NN_2_2::synapse0x25c4cb0() {
   return (neuron0x25b68e0()*0.0794164);
}

double NNfunction_NN_2_2::synapse0x25c4cf0() {
   return (neuron0x25b6e40()*0.00713292);
}

double NNfunction_NN_2_2::synapse0x25c5370() {
   return (neuron0x25b7060()*-0.0230052);
}

double NNfunction_NN_2_2::synapse0x25c53b0() {
   return (neuron0x25b73a0()*0.028672);
}

double NNfunction_NN_2_2::synapse0x25c53f0() {
   return (neuron0x25b76e0()*-0.031367);
}

double NNfunction_NN_2_2::synapse0x25c5430() {
   return (neuron0x25b7a20()*0.0283376);
}

double NNfunction_NN_2_2::synapse0x25c5470() {
   return (neuron0x25b7d60()*-0.00907411);
}

double NNfunction_NN_2_2::synapse0x25c54b0() {
   return (neuron0x25b80a0()*-8.64368);
}

double NNfunction_NN_2_2::synapse0x25c5830() {
   return (neuron0x25b34e0()*0.0456125);
}

double NNfunction_NN_2_2::synapse0x25c5870() {
   return (neuron0x25b3820()*-0.0184161);
}

double NNfunction_NN_2_2::synapse0x25c58b0() {
   return (neuron0x25b3b60()*0.213835);
}

double NNfunction_NN_2_2::synapse0x25c58f0() {
   return (neuron0x25b3ea0()*0.00729933);
}

double NNfunction_NN_2_2::synapse0x25c5930() {
   return (neuron0x25b41e0()*-0.0133537);
}

double NNfunction_NN_2_2::synapse0x25c5970() {
   return (neuron0x25b4520()*0.00386876);
}

double NNfunction_NN_2_2::synapse0x25c59b0() {
   return (neuron0x25b4860()*-0.000248171);
}

double NNfunction_NN_2_2::synapse0x25c59f0() {
   return (neuron0x25b4ba0()*0.00088109);
}

double NNfunction_NN_2_2::synapse0x25c5a30() {
   return (neuron0x25b4ee0()*0.00562606);
}

double NNfunction_NN_2_2::synapse0x25c5a70() {
   return (neuron0x25b5220()*0.00909907);
}

double NNfunction_NN_2_2::synapse0x25c5ab0() {
   return (neuron0x25b5560()*0.00286112);
}

double NNfunction_NN_2_2::synapse0x25c5af0() {
   return (neuron0x25b58a0()*0.0336062);
}

double NNfunction_NN_2_2::synapse0x25c5b30() {
   return (neuron0x25b5be0()*0.00514171);
}

double NNfunction_NN_2_2::synapse0x25c5b70() {
   return (neuron0x25b5f20()*-0.000683517);
}

double NNfunction_NN_2_2::synapse0x25c5bb0() {
   return (neuron0x25b6260()*0.0303771);
}

double NNfunction_NN_2_2::synapse0x25c5bf0() {
   return (neuron0x25b65a0()*0.000833696);
}

double NNfunction_NN_2_2::synapse0x25c5680() {
   return (neuron0x25b68e0()*0.00178192);
}

double NNfunction_NN_2_2::synapse0x25c56c0() {
   return (neuron0x25b6e40()*-0.014041);
}

double NNfunction_NN_2_2::synapse0x25c5d40() {
   return (neuron0x25b7060()*0.000523176);
}

double NNfunction_NN_2_2::synapse0x25c5d80() {
   return (neuron0x25b73a0()*0.0121212);
}

double NNfunction_NN_2_2::synapse0x25c5dc0() {
   return (neuron0x25b76e0()*-0.00416845);
}

double NNfunction_NN_2_2::synapse0x25c5e00() {
   return (neuron0x25b7a20()*-0.00322953);
}

double NNfunction_NN_2_2::synapse0x25c5e40() {
   return (neuron0x25b7d60()*-0.0090271);
}

double NNfunction_NN_2_2::synapse0x25c5e80() {
   return (neuron0x25b80a0()*10.8011);
}

double NNfunction_NN_2_2::synapse0x25c6200() {
   return (neuron0x25b34e0()*-0.136727);
}

double NNfunction_NN_2_2::synapse0x25c6240() {
   return (neuron0x25b3820()*2.40358);
}

double NNfunction_NN_2_2::synapse0x25c6280() {
   return (neuron0x25b3b60()*-0.163554);
}

double NNfunction_NN_2_2::synapse0x25c62c0() {
   return (neuron0x25b3ea0()*-0.00097254);
}

double NNfunction_NN_2_2::synapse0x25c6300() {
   return (neuron0x25b41e0()*0.051238);
}

double NNfunction_NN_2_2::synapse0x25c6340() {
   return (neuron0x25b4520()*-0.0221242);
}

double NNfunction_NN_2_2::synapse0x25c6380() {
   return (neuron0x25b4860()*-0.0647509);
}

double NNfunction_NN_2_2::synapse0x25c63c0() {
   return (neuron0x25b4ba0()*-0.149404);
}

double NNfunction_NN_2_2::synapse0x25c6400() {
   return (neuron0x25b4ee0()*-0.0204453);
}

double NNfunction_NN_2_2::synapse0x25c6440() {
   return (neuron0x25b5220()*-0.0886469);
}

double NNfunction_NN_2_2::synapse0x25c6480() {
   return (neuron0x25b5560()*0.0800522);
}

double NNfunction_NN_2_2::synapse0x25c64c0() {
   return (neuron0x25b58a0()*-0.300943);
}

double NNfunction_NN_2_2::synapse0x25c6500() {
   return (neuron0x25b5be0()*0.0657595);
}

double NNfunction_NN_2_2::synapse0x25c6540() {
   return (neuron0x25b5f20()*-0.0980922);
}

double NNfunction_NN_2_2::synapse0x25c6580() {
   return (neuron0x25b6260()*0.443147);
}

double NNfunction_NN_2_2::synapse0x25c65c0() {
   return (neuron0x25b65a0()*-0.0460054);
}

double NNfunction_NN_2_2::synapse0x25c6050() {
   return (neuron0x25b68e0()*0.0696811);
}

double NNfunction_NN_2_2::synapse0x25c6090() {
   return (neuron0x25b6e40()*0.210636);
}

double NNfunction_NN_2_2::synapse0x25c6710() {
   return (neuron0x25b7060()*0.297882);
}

double NNfunction_NN_2_2::synapse0x25c6750() {
   return (neuron0x25b73a0()*0.0297159);
}

double NNfunction_NN_2_2::synapse0x25c6790() {
   return (neuron0x25b76e0()*0.000359903);
}

double NNfunction_NN_2_2::synapse0x25c67d0() {
   return (neuron0x25b7a20()*-0.0689808);
}

double NNfunction_NN_2_2::synapse0x25c6810() {
   return (neuron0x25b7d60()*0.0292984);
}

double NNfunction_NN_2_2::synapse0x25c6850() {
   return (neuron0x25b80a0()*-0.35453);
}

double NNfunction_NN_2_2::synapse0x25c6bd0() {
   return (neuron0x25b34e0()*-0.292381);
}

double NNfunction_NN_2_2::synapse0x25c6c10() {
   return (neuron0x25b3820()*-0.563306);
}

double NNfunction_NN_2_2::synapse0x25c6c50() {
   return (neuron0x25b3b60()*0.963965);
}

double NNfunction_NN_2_2::synapse0x25c6c90() {
   return (neuron0x25b3ea0()*-0.044681);
}

double NNfunction_NN_2_2::synapse0x25c6cd0() {
   return (neuron0x25b41e0()*-0.368001);
}

double NNfunction_NN_2_2::synapse0x25c6d10() {
   return (neuron0x25b4520()*-0.172869);
}

double NNfunction_NN_2_2::synapse0x25c6d50() {
   return (neuron0x25b4860()*-0.0936689);
}

double NNfunction_NN_2_2::synapse0x25c6d90() {
   return (neuron0x25b4ba0()*-0.621047);
}

double NNfunction_NN_2_2::synapse0x25c6dd0() {
   return (neuron0x25b4ee0()*0.250785);
}

double NNfunction_NN_2_2::synapse0x25bef90() {
   return (neuron0x25b5220()*-0.0404728);
}

double NNfunction_NN_2_2::synapse0x25befd0() {
   return (neuron0x25b5560()*0.31517);
}

double NNfunction_NN_2_2::synapse0x25bf010() {
   return (neuron0x25b58a0()*0.642931);
}

double NNfunction_NN_2_2::synapse0x25bf050() {
   return (neuron0x25b5be0()*0.197088);
}

double NNfunction_NN_2_2::synapse0x25bf090() {
   return (neuron0x25b5f20()*-0.19274);
}

double NNfunction_NN_2_2::synapse0x25bf0d0() {
   return (neuron0x25b6260()*-0.256804);
}

double NNfunction_NN_2_2::synapse0x25bf110() {
   return (neuron0x25b65a0()*0.250234);
}

double NNfunction_NN_2_2::synapse0x25c6a20() {
   return (neuron0x25b68e0()*-0.371208);
}

double NNfunction_NN_2_2::synapse0x25c6a60() {
   return (neuron0x25b6e40()*-0.140085);
}

double NNfunction_NN_2_2::synapse0x25bf260() {
   return (neuron0x25b7060()*-0.138197);
}

double NNfunction_NN_2_2::synapse0x25bf2a0() {
   return (neuron0x25b73a0()*0.270889);
}

double NNfunction_NN_2_2::synapse0x25bf2e0() {
   return (neuron0x25b76e0()*-0.0845816);
}

double NNfunction_NN_2_2::synapse0x25bf320() {
   return (neuron0x25b7a20()*0.0837098);
}

double NNfunction_NN_2_2::synapse0x25bf360() {
   return (neuron0x25b7d60()*0.107698);
}

double NNfunction_NN_2_2::synapse0x25bf3a0() {
   return (neuron0x25b80a0()*0.0432113);
}

double NNfunction_NN_2_2::synapse0x25bf720() {
   return (neuron0x25b34e0()*-0.0311347);
}

double NNfunction_NN_2_2::synapse0x25bf760() {
   return (neuron0x25b3820()*0.532072);
}

double NNfunction_NN_2_2::synapse0x25bf7a0() {
   return (neuron0x25b3b60()*2.96214);
}

double NNfunction_NN_2_2::synapse0x25bf7e0() {
   return (neuron0x25b3ea0()*-0.0337097);
}

double NNfunction_NN_2_2::synapse0x25bf820() {
   return (neuron0x25b41e0()*-0.0200794);
}

double NNfunction_NN_2_2::synapse0x25bf860() {
   return (neuron0x25b4520()*-0.0168004);
}

double NNfunction_NN_2_2::synapse0x25bf8a0() {
   return (neuron0x25b4860()*0.0491981);
}

double NNfunction_NN_2_2::synapse0x25bf8e0() {
   return (neuron0x25b4ba0()*0.00931982);
}

double NNfunction_NN_2_2::synapse0x25bf920() {
   return (neuron0x25b4ee0()*-0.0565393);
}

double NNfunction_NN_2_2::synapse0x25bf960() {
   return (neuron0x25b5220()*-0.0508313);
}

double NNfunction_NN_2_2::synapse0x25bf9a0() {
   return (neuron0x25b5560()*-0.0129493);
}

double NNfunction_NN_2_2::synapse0x25bf9e0() {
   return (neuron0x25b58a0()*-0.19379);
}

double NNfunction_NN_2_2::synapse0x25bfa20() {
   return (neuron0x25b5be0()*-0.347818);
}

double NNfunction_NN_2_2::synapse0x25bfa60() {
   return (neuron0x25b5f20()*-0.0532995);
}

double NNfunction_NN_2_2::synapse0x25bfaa0() {
   return (neuron0x25b6260()*1.41362);
}

double NNfunction_NN_2_2::synapse0x25bfae0() {
   return (neuron0x25b65a0()*-0.178092);
}

double NNfunction_NN_2_2::synapse0x25bf570() {
   return (neuron0x25b68e0()*0.00247266);
}

double NNfunction_NN_2_2::synapse0x25bf5b0() {
   return (neuron0x25b6e40()*-0.0775221);
}

double NNfunction_NN_2_2::synapse0x25bfc30() {
   return (neuron0x25b7060()*-0.0550336);
}

double NNfunction_NN_2_2::synapse0x25bfc70() {
   return (neuron0x25b73a0()*0.0132558);
}

double NNfunction_NN_2_2::synapse0x25bfcb0() {
   return (neuron0x25b76e0()*0.0827369);
}

double NNfunction_NN_2_2::synapse0x25bfcf0() {
   return (neuron0x25b7a20()*0.029521);
}

double NNfunction_NN_2_2::synapse0x25bfd30() {
   return (neuron0x25b7d60()*-0.0347247);
}

double NNfunction_NN_2_2::synapse0x25bfd70() {
   return (neuron0x25b80a0()*0.106974);
}

double NNfunction_NN_2_2::synapse0x25bff40() {
   return (neuron0x25b34e0()*-0.13264);
}

double NNfunction_NN_2_2::synapse0x25c8fd0() {
   return (neuron0x25b3820()*0.724493);
}

double NNfunction_NN_2_2::synapse0x25c9010() {
   return (neuron0x25b3b60()*1.52505);
}

double NNfunction_NN_2_2::synapse0x25c9050() {
   return (neuron0x25b3ea0()*0.0292746);
}

double NNfunction_NN_2_2::synapse0x25c9090() {
   return (neuron0x25b41e0()*0.0587804);
}

double NNfunction_NN_2_2::synapse0x25c90d0() {
   return (neuron0x25b4520()*0.0239909);
}

double NNfunction_NN_2_2::synapse0x25c9110() {
   return (neuron0x25b4860()*-0.0628138);
}

double NNfunction_NN_2_2::synapse0x25c9150() {
   return (neuron0x25b4ba0()*0.0662044);
}

double NNfunction_NN_2_2::synapse0x25c9190() {
   return (neuron0x25b4ee0()*-0.0515019);
}

double NNfunction_NN_2_2::synapse0x25c91d0() {
   return (neuron0x25b5220()*0.0474644);
}

double NNfunction_NN_2_2::synapse0x25c9210() {
   return (neuron0x25b5560()*-0.496989);
}

double NNfunction_NN_2_2::synapse0x25c9250() {
   return (neuron0x25b58a0()*-1.29579);
}

double NNfunction_NN_2_2::synapse0x25c9290() {
   return (neuron0x25b5be0()*0.519816);
}

double NNfunction_NN_2_2::synapse0x25c92d0() {
   return (neuron0x25b5f20()*0.169881);
}

double NNfunction_NN_2_2::synapse0x25c9310() {
   return (neuron0x25b6260()*0.828815);
}

double NNfunction_NN_2_2::synapse0x25c9350() {
   return (neuron0x25b65a0()*0.167672);
}

double NNfunction_NN_2_2::synapse0x25c8e20() {
   return (neuron0x25b68e0()*-0.019241);
}

double NNfunction_NN_2_2::synapse0x25c8e60() {
   return (neuron0x25b6e40()*-0.0654351);
}

double NNfunction_NN_2_2::synapse0x25c94a0() {
   return (neuron0x25b7060()*0.0539987);
}

double NNfunction_NN_2_2::synapse0x25c94e0() {
   return (neuron0x25b73a0()*-0.15317);
}

double NNfunction_NN_2_2::synapse0x25c9520() {
   return (neuron0x25b76e0()*0.213974);
}

double NNfunction_NN_2_2::synapse0x25c9560() {
   return (neuron0x25b7a20()*-0.080429);
}

double NNfunction_NN_2_2::synapse0x25c95a0() {
   return (neuron0x25b7d60()*0.147653);
}

double NNfunction_NN_2_2::synapse0x25c95e0() {
   return (neuron0x25b80a0()*-0.126799);
}

double NNfunction_NN_2_2::synapse0x25c9960() {
   return (neuron0x25b34e0()*0.168659);
}

double NNfunction_NN_2_2::synapse0x25c99a0() {
   return (neuron0x25b3820()*3.25068);
}

double NNfunction_NN_2_2::synapse0x25c99e0() {
   return (neuron0x25b3b60()*-0.303577);
}

double NNfunction_NN_2_2::synapse0x25c9a20() {
   return (neuron0x25b3ea0()*0.0114903);
}

double NNfunction_NN_2_2::synapse0x25c9a60() {
   return (neuron0x25b41e0()*0.379564);
}

double NNfunction_NN_2_2::synapse0x25c9aa0() {
   return (neuron0x25b4520()*-0.0539339);
}

double NNfunction_NN_2_2::synapse0x25c9ae0() {
   return (neuron0x25b4860()*0.188585);
}

double NNfunction_NN_2_2::synapse0x25c9b20() {
   return (neuron0x25b4ba0()*-0.238828);
}

double NNfunction_NN_2_2::synapse0x25c9b60() {
   return (neuron0x25b4ee0()*0.164417);
}

double NNfunction_NN_2_2::synapse0x25c9ba0() {
   return (neuron0x25b5220()*0.315585);
}

double NNfunction_NN_2_2::synapse0x25c9be0() {
   return (neuron0x25b5560()*0.39714);
}

double NNfunction_NN_2_2::synapse0x25c9c20() {
   return (neuron0x25b58a0()*0.645642);
}

double NNfunction_NN_2_2::synapse0x25c9c60() {
   return (neuron0x25b5be0()*-0.156105);
}

double NNfunction_NN_2_2::synapse0x25c9ca0() {
   return (neuron0x25b5f20()*-0.390644);
}

double NNfunction_NN_2_2::synapse0x25c9ce0() {
   return (neuron0x25b6260()*0.0138732);
}

double NNfunction_NN_2_2::synapse0x25c9d20() {
   return (neuron0x25b65a0()*-0.178383);
}

double NNfunction_NN_2_2::synapse0x25c97b0() {
   return (neuron0x25b68e0()*0.167167);
}

double NNfunction_NN_2_2::synapse0x25c97f0() {
   return (neuron0x25b6e40()*0.0668552);
}

double NNfunction_NN_2_2::synapse0x25c9e70() {
   return (neuron0x25b7060()*-0.24913);
}

double NNfunction_NN_2_2::synapse0x25c9eb0() {
   return (neuron0x25b73a0()*-0.0297001);
}

double NNfunction_NN_2_2::synapse0x25c9ef0() {
   return (neuron0x25b76e0()*-0.114427);
}

double NNfunction_NN_2_2::synapse0x25c9f30() {
   return (neuron0x25b7a20()*0.569275);
}

double NNfunction_NN_2_2::synapse0x25c9f70() {
   return (neuron0x25b7d60()*-0.283282);
}

double NNfunction_NN_2_2::synapse0x25c9fb0() {
   return (neuron0x25b80a0()*-0.0117037);
}

double NNfunction_NN_2_2::synapse0x25ca330() {
   return (neuron0x25b34e0()*-0.0561624);
}

double NNfunction_NN_2_2::synapse0x25ca370() {
   return (neuron0x25b3820()*0.0685719);
}

double NNfunction_NN_2_2::synapse0x25ca3b0() {
   return (neuron0x25b3b60()*0.400387);
}

double NNfunction_NN_2_2::synapse0x25ca3f0() {
   return (neuron0x25b3ea0()*-0.0213562);
}

double NNfunction_NN_2_2::synapse0x25ca430() {
   return (neuron0x25b41e0()*-0.140259);
}

double NNfunction_NN_2_2::synapse0x25ca470() {
   return (neuron0x25b4520()*-0.191371);
}

double NNfunction_NN_2_2::synapse0x25ca4b0() {
   return (neuron0x25b4860()*-0.122502);
}

double NNfunction_NN_2_2::synapse0x25ca4f0() {
   return (neuron0x25b4ba0()*-0.0629383);
}

double NNfunction_NN_2_2::synapse0x25ca530() {
   return (neuron0x25b4ee0()*-0.0634473);
}

double NNfunction_NN_2_2::synapse0x25ca570() {
   return (neuron0x25b5220()*-0.119468);
}

double NNfunction_NN_2_2::synapse0x25ca5b0() {
   return (neuron0x25b5560()*0.190663);
}

double NNfunction_NN_2_2::synapse0x25ca5f0() {
   return (neuron0x25b58a0()*-0.237717);
}

double NNfunction_NN_2_2::synapse0x25ca630() {
   return (neuron0x25b5be0()*0.00368354);
}

double NNfunction_NN_2_2::synapse0x25ca670() {
   return (neuron0x25b5f20()*0.0717032);
}

double NNfunction_NN_2_2::synapse0x25ca6b0() {
   return (neuron0x25b6260()*-0.30996);
}

double NNfunction_NN_2_2::synapse0x25ca6f0() {
   return (neuron0x25b65a0()*-0.135867);
}

double NNfunction_NN_2_2::synapse0x25ca180() {
   return (neuron0x25b68e0()*-0.145163);
}

double NNfunction_NN_2_2::synapse0x25ca1c0() {
   return (neuron0x25b6e40()*0.14385);
}

double NNfunction_NN_2_2::synapse0x25ca840() {
   return (neuron0x25b7060()*0.0164937);
}

double NNfunction_NN_2_2::synapse0x25ca880() {
   return (neuron0x25b73a0()*0.115004);
}

double NNfunction_NN_2_2::synapse0x25ca8c0() {
   return (neuron0x25b76e0()*-0.0729172);
}

double NNfunction_NN_2_2::synapse0x25ca900() {
   return (neuron0x25b7a20()*0.0513021);
}

double NNfunction_NN_2_2::synapse0x25ca940() {
   return (neuron0x25b7d60()*0.0391626);
}

double NNfunction_NN_2_2::synapse0x25ca980() {
   return (neuron0x25b80a0()*3.84547);
}

double NNfunction_NN_2_2::synapse0x25cad00() {
   return (neuron0x25b34e0()*-0.036723);
}

double NNfunction_NN_2_2::synapse0x25cad40() {
   return (neuron0x25b3820()*-0.00287783);
}

double NNfunction_NN_2_2::synapse0x25cad80() {
   return (neuron0x25b3b60()*0.908262);
}

double NNfunction_NN_2_2::synapse0x25cadc0() {
   return (neuron0x25b3ea0()*-0.0102495);
}

double NNfunction_NN_2_2::synapse0x25cae00() {
   return (neuron0x25b41e0()*0.0172347);
}

double NNfunction_NN_2_2::synapse0x25cae40() {
   return (neuron0x25b4520()*-0.00735615);
}

double NNfunction_NN_2_2::synapse0x25cae80() {
   return (neuron0x25b4860()*0.00435826);
}

double NNfunction_NN_2_2::synapse0x25caec0() {
   return (neuron0x25b4ba0()*-0.00913004);
}

double NNfunction_NN_2_2::synapse0x25caf00() {
   return (neuron0x25b4ee0()*-0.004384);
}

double NNfunction_NN_2_2::synapse0x25caf40() {
   return (neuron0x25b5220()*0.000538891);
}

double NNfunction_NN_2_2::synapse0x25caf80() {
   return (neuron0x25b5560()*-0.00236373);
}

double NNfunction_NN_2_2::synapse0x25cafc0() {
   return (neuron0x25b58a0()*0.0179686);
}

double NNfunction_NN_2_2::synapse0x25cb000() {
   return (neuron0x25b5be0()*0.00229933);
}

double NNfunction_NN_2_2::synapse0x25cb040() {
   return (neuron0x25b5f20()*0.00724344);
}

double NNfunction_NN_2_2::synapse0x25cb080() {
   return (neuron0x25b6260()*0.0241716);
}

double NNfunction_NN_2_2::synapse0x25cb0c0() {
   return (neuron0x25b65a0()*-0.00480454);
}

double NNfunction_NN_2_2::synapse0x25cab50() {
   return (neuron0x25b68e0()*-0.0093041);
}

double NNfunction_NN_2_2::synapse0x25cab90() {
   return (neuron0x25b6e40()*0.00939313);
}

double NNfunction_NN_2_2::synapse0x25cb210() {
   return (neuron0x25b7060()*-0.00319978);
}

double NNfunction_NN_2_2::synapse0x25cb250() {
   return (neuron0x25b73a0()*-0.0153534);
}

double NNfunction_NN_2_2::synapse0x25cb290() {
   return (neuron0x25b76e0()*0.00853366);
}

double NNfunction_NN_2_2::synapse0x25cb2d0() {
   return (neuron0x25b7a20()*-0.0073474);
}

double NNfunction_NN_2_2::synapse0x25cb310() {
   return (neuron0x25b7d60()*-0.00152585);
}

double NNfunction_NN_2_2::synapse0x25cb350() {
   return (neuron0x25b80a0()*-9.40225);
}

double NNfunction_NN_2_2::synapse0x25cb6d0() {
   return (neuron0x25b34e0()*-0.0395258);
}

double NNfunction_NN_2_2::synapse0x25cb710() {
   return (neuron0x25b3820()*0.680061);
}

double NNfunction_NN_2_2::synapse0x25cb750() {
   return (neuron0x25b3b60()*0.653398);
}

double NNfunction_NN_2_2::synapse0x25cb790() {
   return (neuron0x25b3ea0()*-0.0764305);
}

double NNfunction_NN_2_2::synapse0x25cb7d0() {
   return (neuron0x25b41e0()*-0.185013);
}

double NNfunction_NN_2_2::synapse0x25cb810() {
   return (neuron0x25b4520()*-0.0237538);
}

double NNfunction_NN_2_2::synapse0x25cb850() {
   return (neuron0x25b4860()*0.0910062);
}

double NNfunction_NN_2_2::synapse0x25cb890() {
   return (neuron0x25b4ba0()*-0.0303908);
}

double NNfunction_NN_2_2::synapse0x25cb8d0() {
   return (neuron0x25b4ee0()*-0.173579);
}

double NNfunction_NN_2_2::synapse0x25cb910() {
   return (neuron0x25b5220()*-0.0451003);
}

double NNfunction_NN_2_2::synapse0x25cb950() {
   return (neuron0x25b5560()*0.0300059);
}

double NNfunction_NN_2_2::synapse0x25cb990() {
   return (neuron0x25b58a0()*-0.0941941);
}

double NNfunction_NN_2_2::synapse0x25cb9d0() {
   return (neuron0x25b5be0()*0.355952);
}

double NNfunction_NN_2_2::synapse0x25cba10() {
   return (neuron0x25b5f20()*0.0394935);
}

double NNfunction_NN_2_2::synapse0x25cba50() {
   return (neuron0x25b6260()*0.899975);
}

double NNfunction_NN_2_2::synapse0x25cba90() {
   return (neuron0x25b65a0()*0.218865);
}

double NNfunction_NN_2_2::synapse0x25cb520() {
   return (neuron0x25b68e0()*0.0254144);
}

double NNfunction_NN_2_2::synapse0x25cb560() {
   return (neuron0x25b6e40()*0.0232167);
}

double NNfunction_NN_2_2::synapse0x25cbbe0() {
   return (neuron0x25b7060()*-0.00360847);
}

double NNfunction_NN_2_2::synapse0x25cbc20() {
   return (neuron0x25b73a0()*0.0600703);
}

double NNfunction_NN_2_2::synapse0x25cbc60() {
   return (neuron0x25b76e0()*-0.0655531);
}

double NNfunction_NN_2_2::synapse0x25cbca0() {
   return (neuron0x25b7a20()*-0.019538);
}

double NNfunction_NN_2_2::synapse0x25cbce0() {
   return (neuron0x25b7d60()*0.0440749);
}

double NNfunction_NN_2_2::synapse0x25cbd20() {
   return (neuron0x25b80a0()*0.0472374);
}

double NNfunction_NN_2_2::synapse0x25cc0a0() {
   return (neuron0x25b34e0()*-0.0689206);
}

double NNfunction_NN_2_2::synapse0x25cc0e0() {
   return (neuron0x25b3820()*0.364352);
}

double NNfunction_NN_2_2::synapse0x25cc120() {
   return (neuron0x25b3b60()*-0.0367038);
}

double NNfunction_NN_2_2::synapse0x25cc160() {
   return (neuron0x25b3ea0()*-0.114296);
}

double NNfunction_NN_2_2::synapse0x25cc1a0() {
   return (neuron0x25b41e0()*-0.0204806);
}

double NNfunction_NN_2_2::synapse0x25cc1e0() {
   return (neuron0x25b4520()*-0.0964347);
}

double NNfunction_NN_2_2::synapse0x25cc220() {
   return (neuron0x25b4860()*-0.190005);
}

double NNfunction_NN_2_2::synapse0x25cc260() {
   return (neuron0x25b4ba0()*-0.107076);
}

double NNfunction_NN_2_2::synapse0x25cc2a0() {
   return (neuron0x25b4ee0()*0.0287364);
}

double NNfunction_NN_2_2::synapse0x25cc2e0() {
   return (neuron0x25b5220()*0.0797486);
}

double NNfunction_NN_2_2::synapse0x25cc320() {
   return (neuron0x25b5560()*0.0746296);
}

double NNfunction_NN_2_2::synapse0x25cc360() {
   return (neuron0x25b58a0()*-0.683909);
}

double NNfunction_NN_2_2::synapse0x25cc3a0() {
   return (neuron0x25b5be0()*0.0270598);
}

double NNfunction_NN_2_2::synapse0x25cc3e0() {
   return (neuron0x25b5f20()*0.0687839);
}

double NNfunction_NN_2_2::synapse0x25cc420() {
   return (neuron0x25b6260()*-0.0201273);
}

double NNfunction_NN_2_2::synapse0x25cc460() {
   return (neuron0x25b65a0()*0.0166279);
}

double NNfunction_NN_2_2::synapse0x25cbef0() {
   return (neuron0x25b68e0()*0.271532);
}

double NNfunction_NN_2_2::synapse0x25cbf30() {
   return (neuron0x25b6e40()*-0.0652704);
}

double NNfunction_NN_2_2::synapse0x25cc5b0() {
   return (neuron0x25b7060()*0.130676);
}

double NNfunction_NN_2_2::synapse0x25cc5f0() {
   return (neuron0x25b73a0()*-0.117845);
}

double NNfunction_NN_2_2::synapse0x25cc630() {
   return (neuron0x25b76e0()*-0.00939393);
}

double NNfunction_NN_2_2::synapse0x25cc670() {
   return (neuron0x25b7a20()*-0.0953853);
}

double NNfunction_NN_2_2::synapse0x25cc6b0() {
   return (neuron0x25b7d60()*0.0508054);
}

double NNfunction_NN_2_2::synapse0x25cc6f0() {
   return (neuron0x25b80a0()*-1.26565);
}

double NNfunction_NN_2_2::synapse0x25cca70() {
   return (neuron0x25b34e0()*-0.0148682);
}

double NNfunction_NN_2_2::synapse0x25ccab0() {
   return (neuron0x25b3820()*0.00978956);
}

double NNfunction_NN_2_2::synapse0x25ccaf0() {
   return (neuron0x25b3b60()*1.68944);
}

double NNfunction_NN_2_2::synapse0x25ccb30() {
   return (neuron0x25b3ea0()*-0.0365113);
}

double NNfunction_NN_2_2::synapse0x25ccb70() {
   return (neuron0x25b41e0()*0.00430849);
}

double NNfunction_NN_2_2::synapse0x25ccbb0() {
   return (neuron0x25b4520()*-0.00948361);
}

double NNfunction_NN_2_2::synapse0x25ccbf0() {
   return (neuron0x25b4860()*0.0155778);
}

double NNfunction_NN_2_2::synapse0x25ccc30() {
   return (neuron0x25b4ba0()*-0.0119062);
}

double NNfunction_NN_2_2::synapse0x25ccc70() {
   return (neuron0x25b4ee0()*-0.00903961);
}

double NNfunction_NN_2_2::synapse0x25cccb0() {
   return (neuron0x25b5220()*-0.00143314);
}

double NNfunction_NN_2_2::synapse0x25cccf0() {
   return (neuron0x25b5560()*-0.00809263);
}

double NNfunction_NN_2_2::synapse0x25ccd30() {
   return (neuron0x25b58a0()*-0.00041809);
}

double NNfunction_NN_2_2::synapse0x25ccd70() {
   return (neuron0x25b5be0()*-0.017658);
}

double NNfunction_NN_2_2::synapse0x25ccdb0() {
   return (neuron0x25b5f20()*0.0230984);
}

double NNfunction_NN_2_2::synapse0x25ccdf0() {
   return (neuron0x25b6260()*0.0454033);
}

double NNfunction_NN_2_2::synapse0x25cce30() {
   return (neuron0x25b65a0()*0.00728826);
}

double NNfunction_NN_2_2::synapse0x25cc8c0() {
   return (neuron0x25b68e0()*-0.0440726);
}

double NNfunction_NN_2_2::synapse0x25cc900() {
   return (neuron0x25b6e40()*0.00655468);
}

double NNfunction_NN_2_2::synapse0x25ccf80() {
   return (neuron0x25b7060()*-0.0115457);
}

double NNfunction_NN_2_2::synapse0x25ccfc0() {
   return (neuron0x25b73a0()*-0.0192188);
}

double NNfunction_NN_2_2::synapse0x25cd000() {
   return (neuron0x25b76e0()*0.0499783);
}

double NNfunction_NN_2_2::synapse0x25cd040() {
   return (neuron0x25b7a20()*-0.013695);
}

double NNfunction_NN_2_2::synapse0x25cd080() {
   return (neuron0x25b7d60()*0.00899915);
}

double NNfunction_NN_2_2::synapse0x25cd0c0() {
   return (neuron0x25b80a0()*-4.81493);
}

double NNfunction_NN_2_2::synapse0x25cd440() {
   return (neuron0x25b34e0()*0.00856514);
}

double NNfunction_NN_2_2::synapse0x25cd480() {
   return (neuron0x25b3820()*-0.234044);
}

double NNfunction_NN_2_2::synapse0x25cd4c0() {
   return (neuron0x25b3b60()*4.22961);
}

double NNfunction_NN_2_2::synapse0x25cd500() {
   return (neuron0x25b3ea0()*-0.0850068);
}

double NNfunction_NN_2_2::synapse0x25cd540() {
   return (neuron0x25b41e0()*-0.0106093);
}

double NNfunction_NN_2_2::synapse0x25cd580() {
   return (neuron0x25b4520()*0.0214447);
}

double NNfunction_NN_2_2::synapse0x25cd5c0() {
   return (neuron0x25b4860()*-0.0052547);
}

double NNfunction_NN_2_2::synapse0x25cd600() {
   return (neuron0x25b4ba0()*-0.00839477);
}

double NNfunction_NN_2_2::synapse0x25cd640() {
   return (neuron0x25b4ee0()*0.023417);
}

double NNfunction_NN_2_2::synapse0x25cd680() {
   return (neuron0x25b5220()*-0.0171077);
}

double NNfunction_NN_2_2::synapse0x25cd6c0() {
   return (neuron0x25b5560()*0.0629647);
}

double NNfunction_NN_2_2::synapse0x25cd700() {
   return (neuron0x25b58a0()*0.720324);
}

double NNfunction_NN_2_2::synapse0x25cd740() {
   return (neuron0x25b5be0()*0.0250301);
}

double NNfunction_NN_2_2::synapse0x25cd780() {
   return (neuron0x25b5f20()*0.0317236);
}

double NNfunction_NN_2_2::synapse0x25cd7c0() {
   return (neuron0x25b6260()*-0.422195);
}

double NNfunction_NN_2_2::synapse0x25cd800() {
   return (neuron0x25b65a0()*-0.0590708);
}

double NNfunction_NN_2_2::synapse0x25cd290() {
   return (neuron0x25b68e0()*0.0297043);
}

double NNfunction_NN_2_2::synapse0x25cd2d0() {
   return (neuron0x25b6e40()*-0.0056452);
}

double NNfunction_NN_2_2::synapse0x25cd950() {
   return (neuron0x25b7060()*-0.0277287);
}

double NNfunction_NN_2_2::synapse0x25cd990() {
   return (neuron0x25b73a0()*-0.0501778);
}

double NNfunction_NN_2_2::synapse0x25cd9d0() {
   return (neuron0x25b76e0()*-0.0352703);
}

double NNfunction_NN_2_2::synapse0x25cda10() {
   return (neuron0x25b7a20()*0.0082974);
}

double NNfunction_NN_2_2::synapse0x25cda50() {
   return (neuron0x25b7d60()*-0.0412551);
}

double NNfunction_NN_2_2::synapse0x25cda90() {
   return (neuron0x25b80a0()*-0.0246934);
}

double NNfunction_NN_2_2::synapse0x25cde10() {
   return (neuron0x25b34e0()*-0.100709);
}

double NNfunction_NN_2_2::synapse0x25c23e0() {
   return (neuron0x25b3820()*0.322755);
}

double NNfunction_NN_2_2::synapse0x25c2420() {
   return (neuron0x25b3b60()*0.636409);
}

double NNfunction_NN_2_2::synapse0x25c2460() {
   return (neuron0x25b3ea0()*0.051243);
}

double NNfunction_NN_2_2::synapse0x25c26b0() {
   return (neuron0x25b41e0()*0.0454616);
}

double NNfunction_NN_2_2::synapse0x25c26f0() {
   return (neuron0x25b4520()*0.00525094);
}

double NNfunction_NN_2_2::synapse0x25c2730() {
   return (neuron0x25b4860()*-0.0797261);
}

double NNfunction_NN_2_2::synapse0x25c2980() {
   return (neuron0x25b4ba0()*0.0863055);
}

double NNfunction_NN_2_2::synapse0x25c29c0() {
   return (neuron0x25b4ee0()*0.116434);
}

double NNfunction_NN_2_2::synapse0x25c2c10() {
   return (neuron0x25b5220()*-0.0455693);
}

double NNfunction_NN_2_2::synapse0x25c2c50() {
   return (neuron0x25b5560()*0.0498548);
}

double NNfunction_NN_2_2::synapse0x25c2c90() {
   return (neuron0x25b58a0()*0.171705);
}

double NNfunction_NN_2_2::synapse0x25c2ee0() {
   return (neuron0x25b5be0()*-0.369434);
}

double NNfunction_NN_2_2::synapse0x25c2f20() {
   return (neuron0x25b5f20()*-0.122695);
}

double NNfunction_NN_2_2::synapse0x25c3170() {
   return (neuron0x25b6260()*1.28394);
}

double NNfunction_NN_2_2::synapse0x25c31b0() {
   return (neuron0x25b65a0()*-0.256053);
}

double NNfunction_NN_2_2::synapse0x25cdc60() {
   return (neuron0x25b68e0()*0.0269998);
}

double NNfunction_NN_2_2::synapse0x25cdca0() {
   return (neuron0x25b6e40()*-0.0572835);
}

double NNfunction_NN_2_2::synapse0x25c3300() {
   return (neuron0x25b7060()*-0.0515582);
}

double NNfunction_NN_2_2::synapse0x25c3810() {
   return (neuron0x25b73a0()*-0.0157108);
}

double NNfunction_NN_2_2::synapse0x25c3850() {
   return (neuron0x25b76e0()*0.107281);
}

double NNfunction_NN_2_2::synapse0x25c3890() {
   return (neuron0x25b7a20()*-0.0111772);
}

double NNfunction_NN_2_2::synapse0x25c3ae0() {
   return (neuron0x25b7d60()*0.0425836);
}

double NNfunction_NN_2_2::synapse0x25c3b20() {
   return (neuron0x25b80a0()*0.0144543);
}

double NNfunction_NN_2_2::synapse0x25c33d0() {
   return (neuron0x25b34e0()*0.00296502);
}

double NNfunction_NN_2_2::synapse0x25c3410() {
   return (neuron0x25b3820()*11.0885);
}

double NNfunction_NN_2_2::synapse0x25c3450() {
   return (neuron0x25b3b60()*0.185642);
}

double NNfunction_NN_2_2::synapse0x25c3490() {
   return (neuron0x25b3ea0()*-0.00340762);
}

double NNfunction_NN_2_2::synapse0x25c3e10() {
   return (neuron0x25b41e0()*-0.0099198);
}

double NNfunction_NN_2_2::synapse0x25d0160() {
   return (neuron0x25b4520()*-0.0127274);
}

double NNfunction_NN_2_2::synapse0x25d01a0() {
   return (neuron0x25b4860()*-0.00306841);
}

double NNfunction_NN_2_2::synapse0x25d01e0() {
   return (neuron0x25b4ba0()*-0.0047041);
}

double NNfunction_NN_2_2::synapse0x25d0220() {
   return (neuron0x25b4ee0()*-0.00423413);
}

double NNfunction_NN_2_2::synapse0x25d0260() {
   return (neuron0x25b5220()*-0.029802);
}

double NNfunction_NN_2_2::synapse0x25d02a0() {
   return (neuron0x25b5560()*0.0104074);
}

double NNfunction_NN_2_2::synapse0x25d02e0() {
   return (neuron0x25b58a0()*0.0714487);
}

double NNfunction_NN_2_2::synapse0x25d0320() {
   return (neuron0x25b5be0()*0.00102828);
}

double NNfunction_NN_2_2::synapse0x25d0360() {
   return (neuron0x25b5f20()*0.0155682);
}

double NNfunction_NN_2_2::synapse0x25d03a0() {
   return (neuron0x25b6260()*0.0559856);
}

double NNfunction_NN_2_2::synapse0x25d03e0() {
   return (neuron0x25b65a0()*0.0134664);
}

double NNfunction_NN_2_2::synapse0x25c3cf0() {
   return (neuron0x25b68e0()*-0.00968098);
}

double NNfunction_NN_2_2::synapse0x25c3d30() {
   return (neuron0x25b6e40()*-0.0280057);
}

double NNfunction_NN_2_2::synapse0x25d0530() {
   return (neuron0x25b7060()*-0.00902317);
}

double NNfunction_NN_2_2::synapse0x25d0570() {
   return (neuron0x25b73a0()*0.0169566);
}

double NNfunction_NN_2_2::synapse0x25d05b0() {
   return (neuron0x25b76e0()*-0.0445439);
}

double NNfunction_NN_2_2::synapse0x25d05f0() {
   return (neuron0x25b7a20()*-0.0150547);
}

double NNfunction_NN_2_2::synapse0x25d0630() {
   return (neuron0x25b7d60()*-0.00410322);
}

double NNfunction_NN_2_2::synapse0x25d0670() {
   return (neuron0x25b80a0()*11.7656);
}

double NNfunction_NN_2_2::synapse0x25d09f0() {
   return (neuron0x25b34e0()*0.0760519);
}

double NNfunction_NN_2_2::synapse0x25d0a30() {
   return (neuron0x25b3820()*-0.0963908);
}

double NNfunction_NN_2_2::synapse0x25d0a70() {
   return (neuron0x25b3b60()*0.117772);
}

double NNfunction_NN_2_2::synapse0x25d0ab0() {
   return (neuron0x25b3ea0()*-0.0603152);
}

double NNfunction_NN_2_2::synapse0x25d0af0() {
   return (neuron0x25b41e0()*-0.056683);
}

double NNfunction_NN_2_2::synapse0x25d0b30() {
   return (neuron0x25b4520()*-0.10924);
}

double NNfunction_NN_2_2::synapse0x25d0b70() {
   return (neuron0x25b4860()*-0.0129649);
}

double NNfunction_NN_2_2::synapse0x25d0bb0() {
   return (neuron0x25b4ba0()*0.00619382);
}

double NNfunction_NN_2_2::synapse0x25d0bf0() {
   return (neuron0x25b4ee0()*-0.0266733);
}

double NNfunction_NN_2_2::synapse0x25d0c30() {
   return (neuron0x25b5220()*0.0826027);
}

double NNfunction_NN_2_2::synapse0x25d0c70() {
   return (neuron0x25b5560()*-0.00889096);
}

double NNfunction_NN_2_2::synapse0x25d0cb0() {
   return (neuron0x25b58a0()*-0.123661);
}

double NNfunction_NN_2_2::synapse0x25d0cf0() {
   return (neuron0x25b5be0()*0.00401792);
}

double NNfunction_NN_2_2::synapse0x25d0d30() {
   return (neuron0x25b5f20()*-0.0341068);
}

double NNfunction_NN_2_2::synapse0x25d0d70() {
   return (neuron0x25b6260()*-0.155888);
}

double NNfunction_NN_2_2::synapse0x25d0db0() {
   return (neuron0x25b65a0()*-0.0357809);
}

double NNfunction_NN_2_2::synapse0x25d0840() {
   return (neuron0x25b68e0()*-0.143642);
}

double NNfunction_NN_2_2::synapse0x25d0880() {
   return (neuron0x25b6e40()*0.00918133);
}

double NNfunction_NN_2_2::synapse0x25d0f00() {
   return (neuron0x25b7060()*0.0452488);
}

double NNfunction_NN_2_2::synapse0x25d0f40() {
   return (neuron0x25b73a0()*0.00517583);
}

double NNfunction_NN_2_2::synapse0x25d0f80() {
   return (neuron0x25b76e0()*0.239433);
}

double NNfunction_NN_2_2::synapse0x25d0fc0() {
   return (neuron0x25b7a20()*-0.00504696);
}

double NNfunction_NN_2_2::synapse0x25d1000() {
   return (neuron0x25b7d60()*0.007627);
}

double NNfunction_NN_2_2::synapse0x25d1040() {
   return (neuron0x25b80a0()*-3.11125);
}

double NNfunction_NN_2_2::synapse0x25d13c0() {
   return (neuron0x25b34e0()*-0.00467935);
}

double NNfunction_NN_2_2::synapse0x25d1400() {
   return (neuron0x25b3820()*4.26224);
}

double NNfunction_NN_2_2::synapse0x25d1440() {
   return (neuron0x25b3b60()*3.69551);
}

double NNfunction_NN_2_2::synapse0x25d1480() {
   return (neuron0x25b3ea0()*0.0356006);
}

double NNfunction_NN_2_2::synapse0x25d14c0() {
   return (neuron0x25b41e0()*0.16535);
}

double NNfunction_NN_2_2::synapse0x25d1500() {
   return (neuron0x25b4520()*-0.0667724);
}

double NNfunction_NN_2_2::synapse0x25d1540() {
   return (neuron0x25b4860()*0.0302144);
}

double NNfunction_NN_2_2::synapse0x25d1580() {
   return (neuron0x25b4ba0()*-0.114131);
}

double NNfunction_NN_2_2::synapse0x25d15c0() {
   return (neuron0x25b4ee0()*-0.0238272);
}

double NNfunction_NN_2_2::synapse0x25d1600() {
   return (neuron0x25b5220()*0.0878249);
}

double NNfunction_NN_2_2::synapse0x25d1640() {
   return (neuron0x25b5560()*-0.0588328);
}

double NNfunction_NN_2_2::synapse0x25d1680() {
   return (neuron0x25b58a0()*-0.107282);
}

double NNfunction_NN_2_2::synapse0x25d16c0() {
   return (neuron0x25b5be0()*0.0622877);
}

double NNfunction_NN_2_2::synapse0x25d1700() {
   return (neuron0x25b5f20()*0.126538);
}

double NNfunction_NN_2_2::synapse0x25d1740() {
   return (neuron0x25b6260()*-0.309379);
}

double NNfunction_NN_2_2::synapse0x25d1780() {
   return (neuron0x25b65a0()*-0.0255869);
}

double NNfunction_NN_2_2::synapse0x25d1210() {
   return (neuron0x25b68e0()*-0.0248668);
}

double NNfunction_NN_2_2::synapse0x25d1250() {
   return (neuron0x25b6e40()*0.00974467);
}

double NNfunction_NN_2_2::synapse0x25d18d0() {
   return (neuron0x25b7060()*-0.00324398);
}

double NNfunction_NN_2_2::synapse0x25d1910() {
   return (neuron0x25b73a0()*-0.0226611);
}

double NNfunction_NN_2_2::synapse0x25d1950() {
   return (neuron0x25b76e0()*0.238953);
}

double NNfunction_NN_2_2::synapse0x25d1990() {
   return (neuron0x25b7a20()*0.0259475);
}

double NNfunction_NN_2_2::synapse0x25d19d0() {
   return (neuron0x25b7d60()*-0.116728);
}

double NNfunction_NN_2_2::synapse0x25d1a10() {
   return (neuron0x25b80a0()*-0.330361);
}

double NNfunction_NN_2_2::synapse0x25d1d90() {
   return (neuron0x25b34e0()*-0.0283761);
}

double NNfunction_NN_2_2::synapse0x25d1dd0() {
   return (neuron0x25b3820()*-4.10329);
}

double NNfunction_NN_2_2::synapse0x25d1e10() {
   return (neuron0x25b3b60()*3.70321);
}

double NNfunction_NN_2_2::synapse0x25d1e50() {
   return (neuron0x25b3ea0()*0.0354571);
}

double NNfunction_NN_2_2::synapse0x25d1e90() {
   return (neuron0x25b41e0()*-0.0858347);
}

double NNfunction_NN_2_2::synapse0x25d1ed0() {
   return (neuron0x25b4520()*-0.0694484);
}

double NNfunction_NN_2_2::synapse0x25d1f10() {
   return (neuron0x25b4860()*-0.0307796);
}

double NNfunction_NN_2_2::synapse0x25d1f50() {
   return (neuron0x25b4ba0()*-0.0702387);
}

double NNfunction_NN_2_2::synapse0x25d1f90() {
   return (neuron0x25b4ee0()*-0.0119811);
}

double NNfunction_NN_2_2::synapse0x25d1fd0() {
   return (neuron0x25b5220()*-0.0923514);
}

double NNfunction_NN_2_2::synapse0x25d2010() {
   return (neuron0x25b5560()*0.143774);
}

double NNfunction_NN_2_2::synapse0x25d2050() {
   return (neuron0x25b58a0()*-0.339917);
}

double NNfunction_NN_2_2::synapse0x25d2090() {
   return (neuron0x25b5be0()*0.00494599);
}

double NNfunction_NN_2_2::synapse0x25d20d0() {
   return (neuron0x25b5f20()*0.0908078);
}

double NNfunction_NN_2_2::synapse0x25d2110() {
   return (neuron0x25b6260()*-0.0374251);
}

double NNfunction_NN_2_2::synapse0x25d2150() {
   return (neuron0x25b65a0()*-0.099123);
}

double NNfunction_NN_2_2::synapse0x25d1be0() {
   return (neuron0x25b68e0()*-0.0358375);
}

double NNfunction_NN_2_2::synapse0x25d1c20() {
   return (neuron0x25b6e40()*0.0828746);
}

double NNfunction_NN_2_2::synapse0x25d22a0() {
   return (neuron0x25b7060()*0.0272952);
}

double NNfunction_NN_2_2::synapse0x25d22e0() {
   return (neuron0x25b73a0()*0.0146003);
}

double NNfunction_NN_2_2::synapse0x25d2320() {
   return (neuron0x25b76e0()*-0.0446552);
}

double NNfunction_NN_2_2::synapse0x25d2360() {
   return (neuron0x25b7a20()*0.0369036);
}

double NNfunction_NN_2_2::synapse0x25d23a0() {
   return (neuron0x25b7d60()*-0.0171868);
}

double NNfunction_NN_2_2::synapse0x25d23e0() {
   return (neuron0x25b80a0()*5.82308);
}

double NNfunction_NN_2_2::synapse0x25d2760() {
   return (neuron0x25b34e0()*0.742263);
}

double NNfunction_NN_2_2::synapse0x25d27a0() {
   return (neuron0x25b3820()*-0.76717);
}

double NNfunction_NN_2_2::synapse0x25d27e0() {
   return (neuron0x25b3b60()*-0.323581);
}

double NNfunction_NN_2_2::synapse0x25d2820() {
   return (neuron0x25b3ea0()*0.136528);
}

double NNfunction_NN_2_2::synapse0x25d2860() {
   return (neuron0x25b41e0()*-0.286351);
}

double NNfunction_NN_2_2::synapse0x25d28a0() {
   return (neuron0x25b4520()*-0.163385);
}

double NNfunction_NN_2_2::synapse0x25d28e0() {
   return (neuron0x25b4860()*-0.278615);
}

double NNfunction_NN_2_2::synapse0x25d2920() {
   return (neuron0x25b4ba0()*-0.217875);
}

double NNfunction_NN_2_2::synapse0x25d2960() {
   return (neuron0x25b4ee0()*-0.0246862);
}

double NNfunction_NN_2_2::synapse0x25d29a0() {
   return (neuron0x25b5220()*-0.782014);
}

double NNfunction_NN_2_2::synapse0x25d29e0() {
   return (neuron0x25b5560()*-0.670655);
}

double NNfunction_NN_2_2::synapse0x25d2a20() {
   return (neuron0x25b58a0()*-0.412256);
}

double NNfunction_NN_2_2::synapse0x25d2a60() {
   return (neuron0x25b5be0()*0.0582382);
}

double NNfunction_NN_2_2::synapse0x25d2aa0() {
   return (neuron0x25b5f20()*0.461124);
}

double NNfunction_NN_2_2::synapse0x25d2ae0() {
   return (neuron0x25b6260()*0.446704);
}

double NNfunction_NN_2_2::synapse0x25d2b20() {
   return (neuron0x25b65a0()*0.030264);
}

double NNfunction_NN_2_2::synapse0x25d25b0() {
   return (neuron0x25b68e0()*0.197271);
}

double NNfunction_NN_2_2::synapse0x25d25f0() {
   return (neuron0x25b6e40()*-0.328919);
}

double NNfunction_NN_2_2::synapse0x25d2c70() {
   return (neuron0x25b7060()*-0.288945);
}

double NNfunction_NN_2_2::synapse0x25d2cb0() {
   return (neuron0x25b73a0()*-0.104339);
}

double NNfunction_NN_2_2::synapse0x25d2cf0() {
   return (neuron0x25b76e0()*-0.059432);
}

double NNfunction_NN_2_2::synapse0x25d2d30() {
   return (neuron0x25b7a20()*-0.532174);
}

double NNfunction_NN_2_2::synapse0x25d2d70() {
   return (neuron0x25b7d60()*-0.129854);
}

double NNfunction_NN_2_2::synapse0x25d2db0() {
   return (neuron0x25b80a0()*-0.298841);
}

double NNfunction_NN_2_2::synapse0x25d3130() {
   return (neuron0x25b34e0()*0.0259328);
}

double NNfunction_NN_2_2::synapse0x25d3170() {
   return (neuron0x25b3820()*-0.161017);
}

double NNfunction_NN_2_2::synapse0x25d31b0() {
   return (neuron0x25b3b60()*-2.22782);
}

double NNfunction_NN_2_2::synapse0x25d31f0() {
   return (neuron0x25b3ea0()*0.0305391);
}

double NNfunction_NN_2_2::synapse0x25d3230() {
   return (neuron0x25b41e0()*-0.115142);
}

double NNfunction_NN_2_2::synapse0x25d3270() {
   return (neuron0x25b4520()*0.121929);
}

double NNfunction_NN_2_2::synapse0x25d32b0() {
   return (neuron0x25b4860()*0.229685);
}

double NNfunction_NN_2_2::synapse0x25d32f0() {
   return (neuron0x25b4ba0()*0.282179);
}

double NNfunction_NN_2_2::synapse0x25d3330() {
   return (neuron0x25b4ee0()*-0.0263296);
}

double NNfunction_NN_2_2::synapse0x25d3370() {
   return (neuron0x25b5220()*0.0879822);
}

double NNfunction_NN_2_2::synapse0x25d33b0() {
   return (neuron0x25b5560()*0.032707);
}

double NNfunction_NN_2_2::synapse0x25d33f0() {
   return (neuron0x25b58a0()*-0.119579);
}

double NNfunction_NN_2_2::synapse0x25d3430() {
   return (neuron0x25b5be0()*-0.10668);
}

double NNfunction_NN_2_2::synapse0x25d3470() {
   return (neuron0x25b5f20()*0.0797491);
}

double NNfunction_NN_2_2::synapse0x25d34b0() {
   return (neuron0x25b6260()*-0.447806);
}

double NNfunction_NN_2_2::synapse0x25d34f0() {
   return (neuron0x25b65a0()*-0.124072);
}

double NNfunction_NN_2_2::synapse0x25d2f80() {
   return (neuron0x25b68e0()*0.227458);
}

double NNfunction_NN_2_2::synapse0x25d2fc0() {
   return (neuron0x25b6e40()*-0.156994);
}

double NNfunction_NN_2_2::synapse0x25d3640() {
   return (neuron0x25b7060()*-0.0472967);
}

double NNfunction_NN_2_2::synapse0x25d3680() {
   return (neuron0x25b73a0()*-0.0655596);
}

double NNfunction_NN_2_2::synapse0x25d36c0() {
   return (neuron0x25b76e0()*0.109542);
}

double NNfunction_NN_2_2::synapse0x25d3700() {
   return (neuron0x25b7a20()*-0.210098);
}

double NNfunction_NN_2_2::synapse0x25d3740() {
   return (neuron0x25b7d60()*-0.0559277);
}

double NNfunction_NN_2_2::synapse0x25d3780() {
   return (neuron0x25b80a0()*-1.96493);
}

double NNfunction_NN_2_2::synapse0x25d3b00() {
   return (neuron0x25b34e0()*0.0965981);
}

double NNfunction_NN_2_2::synapse0x25d3b40() {
   return (neuron0x25b3820()*-0.134948);
}

double NNfunction_NN_2_2::synapse0x25d3b80() {
   return (neuron0x25b3b60()*-0.985087);
}

double NNfunction_NN_2_2::synapse0x25d3bc0() {
   return (neuron0x25b3ea0()*0.0636102);
}

double NNfunction_NN_2_2::synapse0x25d3c00() {
   return (neuron0x25b41e0()*0.142589);
}

double NNfunction_NN_2_2::synapse0x25d3c40() {
   return (neuron0x25b4520()*-0.010503);
}

double NNfunction_NN_2_2::synapse0x25d3c80() {
   return (neuron0x25b4860()*-0.0599205);
}

double NNfunction_NN_2_2::synapse0x25d3cc0() {
   return (neuron0x25b4ba0()*-0.194922);
}

double NNfunction_NN_2_2::synapse0x25d3d00() {
   return (neuron0x25b4ee0()*-0.135939);
}

double NNfunction_NN_2_2::synapse0x25d3d40() {
   return (neuron0x25b5220()*0.0661521);
}

double NNfunction_NN_2_2::synapse0x25d3d80() {
   return (neuron0x25b5560()*-0.0926698);
}

double NNfunction_NN_2_2::synapse0x25d3dc0() {
   return (neuron0x25b58a0()*1.07021);
}

double NNfunction_NN_2_2::synapse0x25d3e00() {
   return (neuron0x25b5be0()*-0.129183);
}

double NNfunction_NN_2_2::synapse0x25d3e40() {
   return (neuron0x25b5f20()*0.184278);
}

double NNfunction_NN_2_2::synapse0x25d3e80() {
   return (neuron0x25b6260()*-0.527069);
}

double NNfunction_NN_2_2::synapse0x25d3ec0() {
   return (neuron0x25b65a0()*-0.113252);
}

double NNfunction_NN_2_2::synapse0x25d3950() {
   return (neuron0x25b68e0()*0.25268);
}

double NNfunction_NN_2_2::synapse0x25d3990() {
   return (neuron0x25b6e40()*0.212225);
}

double NNfunction_NN_2_2::synapse0x25d4010() {
   return (neuron0x25b7060()*0.202237);
}

double NNfunction_NN_2_2::synapse0x25d4050() {
   return (neuron0x25b73a0()*0.0775596);
}

double NNfunction_NN_2_2::synapse0x25d4090() {
   return (neuron0x25b76e0()*0.253528);
}

double NNfunction_NN_2_2::synapse0x25d40d0() {
   return (neuron0x25b7a20()*-0.175771);
}

double NNfunction_NN_2_2::synapse0x25d4110() {
   return (neuron0x25b7d60()*-0.03927);
}

double NNfunction_NN_2_2::synapse0x25d4150() {
   return (neuron0x25b80a0()*-0.501386);
}

double NNfunction_NN_2_2::synapse0x25d44d0() {
   return (neuron0x25b34e0()*0.113275);
}

double NNfunction_NN_2_2::synapse0x25d4510() {
   return (neuron0x25b3820()*-0.134518);
}

double NNfunction_NN_2_2::synapse0x25d4550() {
   return (neuron0x25b3b60()*1.13808);
}

double NNfunction_NN_2_2::synapse0x25d4590() {
   return (neuron0x25b3ea0()*-0.0489776);
}

double NNfunction_NN_2_2::synapse0x25d45d0() {
   return (neuron0x25b41e0()*-0.00785908);
}

double NNfunction_NN_2_2::synapse0x25d4610() {
   return (neuron0x25b4520()*0.139867);
}

double NNfunction_NN_2_2::synapse0x25d4650() {
   return (neuron0x25b4860()*0.0588874);
}

double NNfunction_NN_2_2::synapse0x25d4690() {
   return (neuron0x25b4ba0()*0.138995);
}

double NNfunction_NN_2_2::synapse0x25d46d0() {
   return (neuron0x25b4ee0()*0.0601333);
}

double NNfunction_NN_2_2::synapse0x25d4710() {
   return (neuron0x25b5220()*-0.0430708);
}

double NNfunction_NN_2_2::synapse0x25d4750() {
   return (neuron0x25b5560()*0.0590559);
}

double NNfunction_NN_2_2::synapse0x25d4790() {
   return (neuron0x25b58a0()*-0.311803);
}

double NNfunction_NN_2_2::synapse0x25d47d0() {
   return (neuron0x25b5be0()*-0.145729);
}

double NNfunction_NN_2_2::synapse0x25d4810() {
   return (neuron0x25b5f20()*0.143261);
}

double NNfunction_NN_2_2::synapse0x25d4850() {
   return (neuron0x25b6260()*0.51779);
}

double NNfunction_NN_2_2::synapse0x25d4890() {
   return (neuron0x25b65a0()*-0.0177724);
}

double NNfunction_NN_2_2::synapse0x25d4320() {
   return (neuron0x25b68e0()*0.0537498);
}

double NNfunction_NN_2_2::synapse0x25d4360() {
   return (neuron0x25b6e40()*-0.0890411);
}

double NNfunction_NN_2_2::synapse0x25d49e0() {
   return (neuron0x25b7060()*-0.0182191);
}

double NNfunction_NN_2_2::synapse0x25d4a20() {
   return (neuron0x25b73a0()*-0.0889714);
}

double NNfunction_NN_2_2::synapse0x25d4a60() {
   return (neuron0x25b76e0()*-0.0578676);
}

double NNfunction_NN_2_2::synapse0x25d4aa0() {
   return (neuron0x25b7a20()*-0.0503764);
}

double NNfunction_NN_2_2::synapse0x25d4ae0() {
   return (neuron0x25b7d60()*-0.116747);
}

double NNfunction_NN_2_2::synapse0x25d4b20() {
   return (neuron0x25b80a0()*2.57914);
}

double NNfunction_NN_2_2::synapse0x25bd5d0() {
   return (neuron0x25b34e0()*0.020759);
}

double NNfunction_NN_2_2::synapse0x25bd610() {
   return (neuron0x25b3820()*-13.5653);
}

double NNfunction_NN_2_2::synapse0x25bd650() {
   return (neuron0x25b3b60()*-1.58418);
}

double NNfunction_NN_2_2::synapse0x25bd690() {
   return (neuron0x25b3ea0()*0.0148349);
}

double NNfunction_NN_2_2::synapse0x25bd6d0() {
   return (neuron0x25b41e0()*0.00562582);
}

double NNfunction_NN_2_2::synapse0x25bd710() {
   return (neuron0x25b4520()*-0.0173949);
}

double NNfunction_NN_2_2::synapse0x25bd750() {
   return (neuron0x25b4860()*0.000322263);
}

double NNfunction_NN_2_2::synapse0x25bd790() {
   return (neuron0x25b4ba0()*0.00316785);
}

double NNfunction_NN_2_2::synapse0x25d52b0() {
   return (neuron0x25b4ee0()*0.00529929);
}

double NNfunction_NN_2_2::synapse0x25d52f0() {
   return (neuron0x25b5220()*0.00184328);
}

double NNfunction_NN_2_2::synapse0x25d5330() {
   return (neuron0x25b5560()*0.0219862);
}

double NNfunction_NN_2_2::synapse0x25d5370() {
   return (neuron0x25b58a0()*0.0324327);
}

double NNfunction_NN_2_2::synapse0x25d53b0() {
   return (neuron0x25b5be0()*0.00114496);
}

double NNfunction_NN_2_2::synapse0x25d53f0() {
   return (neuron0x25b5f20()*-0.0550537);
}

double NNfunction_NN_2_2::synapse0x25d5430() {
   return (neuron0x25b6260()*-0.0729218);
}

double NNfunction_NN_2_2::synapse0x25d5470() {
   return (neuron0x25b65a0()*0.023393);
}

double NNfunction_NN_2_2::synapse0x25d4cf0() {
   return (neuron0x25b68e0()*0.0307038);
}

double NNfunction_NN_2_2::synapse0x25d4d30() {
   return (neuron0x25b6e40()*0.0221995);
}

double NNfunction_NN_2_2::synapse0x25d55c0() {
   return (neuron0x25b7060()*-0.013494);
}

double NNfunction_NN_2_2::synapse0x25d5600() {
   return (neuron0x25b73a0()*0.0109602);
}

double NNfunction_NN_2_2::synapse0x25d5640() {
   return (neuron0x25b76e0()*-0.040232);
}

double NNfunction_NN_2_2::synapse0x25d5680() {
   return (neuron0x25b7a20()*-0.0253482);
}

double NNfunction_NN_2_2::synapse0x25d56c0() {
   return (neuron0x25b7d60()*-0.00430593);
}

double NNfunction_NN_2_2::synapse0x25d5700() {
   return (neuron0x25b80a0()*6.25583);
}

double NNfunction_NN_2_2::synapse0x25d5a80() {
   return (neuron0x25b34e0()*-0.000449324);
}

double NNfunction_NN_2_2::synapse0x25d5ac0() {
   return (neuron0x25b3820()*-0.0395285);
}

double NNfunction_NN_2_2::synapse0x25d5b00() {
   return (neuron0x25b3b60()*-2.58709);
}

double NNfunction_NN_2_2::synapse0x25d5b40() {
   return (neuron0x25b3ea0()*0.0155093);
}

double NNfunction_NN_2_2::synapse0x25d5b80() {
   return (neuron0x25b41e0()*0.0128836);
}

double NNfunction_NN_2_2::synapse0x25d5bc0() {
   return (neuron0x25b4520()*0.00355885);
}

double NNfunction_NN_2_2::synapse0x25d5c00() {
   return (neuron0x25b4860()*0.01401);
}

double NNfunction_NN_2_2::synapse0x25d5c40() {
   return (neuron0x25b4ba0()*0.0286633);
}

double NNfunction_NN_2_2::synapse0x25d5c80() {
   return (neuron0x25b4ee0()*0.00365375);
}

double NNfunction_NN_2_2::synapse0x25d5cc0() {
   return (neuron0x25b5220()*-0.0148774);
}

double NNfunction_NN_2_2::synapse0x25d5d00() {
   return (neuron0x25b5560()*-0.00129194);
}

double NNfunction_NN_2_2::synapse0x25d5d40() {
   return (neuron0x25b58a0()*-0.0254777);
}

double NNfunction_NN_2_2::synapse0x25d5d80() {
   return (neuron0x25b5be0()*-0.00482841);
}

double NNfunction_NN_2_2::synapse0x25d5dc0() {
   return (neuron0x25b5f20()*-0.0276289);
}

double NNfunction_NN_2_2::synapse0x25d5e00() {
   return (neuron0x25b6260()*-0.0391736);
}

double NNfunction_NN_2_2::synapse0x25d5e40() {
   return (neuron0x25b65a0()*-0.0274788);
}

double NNfunction_NN_2_2::synapse0x25d58d0() {
   return (neuron0x25b68e0()*0.0201556);
}

double NNfunction_NN_2_2::synapse0x25d5910() {
   return (neuron0x25b6e40()*-0.0212808);
}

double NNfunction_NN_2_2::synapse0x25d5f90() {
   return (neuron0x25b7060()*-0.00575651);
}

double NNfunction_NN_2_2::synapse0x25d5fd0() {
   return (neuron0x25b73a0()*-0.00318575);
}

double NNfunction_NN_2_2::synapse0x25d6010() {
   return (neuron0x25b76e0()*-0.0501934);
}

double NNfunction_NN_2_2::synapse0x25d6050() {
   return (neuron0x25b7a20()*-0.00965813);
}

double NNfunction_NN_2_2::synapse0x25d6090() {
   return (neuron0x25b7d60()*-0.00224982);
}

double NNfunction_NN_2_2::synapse0x25d60d0() {
   return (neuron0x25b80a0()*-5.7081);
}

double NNfunction_NN_2_2::synapse0x25d6450() {
   return (neuron0x25b34e0()*0.067897);
}

double NNfunction_NN_2_2::synapse0x25d6490() {
   return (neuron0x25b3820()*3.96432);
}

double NNfunction_NN_2_2::synapse0x25d64d0() {
   return (neuron0x25b3b60()*2.21928);
}

double NNfunction_NN_2_2::synapse0x25d6510() {
   return (neuron0x25b3ea0()*0.0489732);
}

double NNfunction_NN_2_2::synapse0x25d6550() {
   return (neuron0x25b41e0()*0.149098);
}

double NNfunction_NN_2_2::synapse0x25d6590() {
   return (neuron0x25b4520()*-0.0152361);
}

double NNfunction_NN_2_2::synapse0x25d65d0() {
   return (neuron0x25b4860()*0.0366307);
}

double NNfunction_NN_2_2::synapse0x25d6610() {
   return (neuron0x25b4ba0()*-0.0633639);
}

double NNfunction_NN_2_2::synapse0x25d6650() {
   return (neuron0x25b4ee0()*-0.0900612);
}

double NNfunction_NN_2_2::synapse0x25d6690() {
   return (neuron0x25b5220()*0.00136461);
}

double NNfunction_NN_2_2::synapse0x25d66d0() {
   return (neuron0x25b5560()*-0.072954);
}

double NNfunction_NN_2_2::synapse0x25d6710() {
   return (neuron0x25b58a0()*-0.188559);
}

double NNfunction_NN_2_2::synapse0x25d6750() {
   return (neuron0x25b5be0()*-0.0265578);
}

double NNfunction_NN_2_2::synapse0x25d6790() {
   return (neuron0x25b5f20()*0.00076604);
}

double NNfunction_NN_2_2::synapse0x25d67d0() {
   return (neuron0x25b6260()*-0.732161);
}

double NNfunction_NN_2_2::synapse0x25d6810() {
   return (neuron0x25b65a0()*-0.0094484);
}

double NNfunction_NN_2_2::synapse0x25d62a0() {
   return (neuron0x25b68e0()*-0.204029);
}

double NNfunction_NN_2_2::synapse0x25d62e0() {
   return (neuron0x25b6e40()*-0.0827036);
}

double NNfunction_NN_2_2::synapse0x25c6e10() {
   return (neuron0x25b7060()*-0.111794);
}

double NNfunction_NN_2_2::synapse0x25c6e50() {
   return (neuron0x25b73a0()*-0.0090486);
}

double NNfunction_NN_2_2::synapse0x25c6e90() {
   return (neuron0x25b76e0()*0.0812229);
}

double NNfunction_NN_2_2::synapse0x25c6ed0() {
   return (neuron0x25b7a20()*-0.0291344);
}

double NNfunction_NN_2_2::synapse0x25c6f10() {
   return (neuron0x25b7d60()*-0.0146419);
}

double NNfunction_NN_2_2::synapse0x25c6f50() {
   return (neuron0x25b80a0()*0.0174239);
}

double NNfunction_NN_2_2::synapse0x25c72d0() {
   return (neuron0x25b34e0()*0.00864507);
}

double NNfunction_NN_2_2::synapse0x25c7310() {
   return (neuron0x25b3820()*-12.9087);
}

double NNfunction_NN_2_2::synapse0x25c7350() {
   return (neuron0x25b3b60()*-1.79433);
}

double NNfunction_NN_2_2::synapse0x25c7390() {
   return (neuron0x25b3ea0()*-0.0216148);
}

double NNfunction_NN_2_2::synapse0x25c73d0() {
   return (neuron0x25b41e0()*-1.52227e-05);
}

double NNfunction_NN_2_2::synapse0x25c7410() {
   return (neuron0x25b4520()*-0.00907564);
}

double NNfunction_NN_2_2::synapse0x25c7450() {
   return (neuron0x25b4860()*-0.00196234);
}

double NNfunction_NN_2_2::synapse0x25c7490() {
   return (neuron0x25b4ba0()*0.00141712);
}

double NNfunction_NN_2_2::synapse0x25c74d0() {
   return (neuron0x25b4ee0()*0.00640878);
}

double NNfunction_NN_2_2::synapse0x25c7510() {
   return (neuron0x25b5220()*0.0211375);
}

double NNfunction_NN_2_2::synapse0x25c7550() {
   return (neuron0x25b5560()*-0.00844934);
}

double NNfunction_NN_2_2::synapse0x25c7590() {
   return (neuron0x25b58a0()*-0.172244);
}

double NNfunction_NN_2_2::synapse0x25c75d0() {
   return (neuron0x25b5be0()*-0.0197201);
}

double NNfunction_NN_2_2::synapse0x25c7610() {
   return (neuron0x25b5f20()*-0.0203101);
}

double NNfunction_NN_2_2::synapse0x25c7650() {
   return (neuron0x25b6260()*0.29057);
}

double NNfunction_NN_2_2::synapse0x25c7690() {
   return (neuron0x25b65a0()*0.0145758);
}

double NNfunction_NN_2_2::synapse0x25c7120() {
   return (neuron0x25b68e0()*0.0205192);
}

double NNfunction_NN_2_2::synapse0x25c7160() {
   return (neuron0x25b6e40()*0.0204556);
}

double NNfunction_NN_2_2::synapse0x25c77e0() {
   return (neuron0x25b7060()*0.005343);
}

double NNfunction_NN_2_2::synapse0x25c7820() {
   return (neuron0x25b73a0()*-0.00769223);
}

double NNfunction_NN_2_2::synapse0x25c7860() {
   return (neuron0x25b76e0()*0.00640094);
}

double NNfunction_NN_2_2::synapse0x25c78a0() {
   return (neuron0x25b7a20()*0.008481);
}

double NNfunction_NN_2_2::synapse0x25c78e0() {
   return (neuron0x25b7d60()*-0.0147765);
}

double NNfunction_NN_2_2::synapse0x25c7920() {
   return (neuron0x25b80a0()*0.0428021);
}

double NNfunction_NN_2_2::synapse0x25c7ca0() {
   return (neuron0x25b34e0()*0.315324);
}

double NNfunction_NN_2_2::synapse0x25c7ce0() {
   return (neuron0x25b3820()*0.216571);
}

double NNfunction_NN_2_2::synapse0x25c7d20() {
   return (neuron0x25b3b60()*1.43672);
}

double NNfunction_NN_2_2::synapse0x25c7d60() {
   return (neuron0x25b3ea0()*-0.0508435);
}

double NNfunction_NN_2_2::synapse0x25c7da0() {
   return (neuron0x25b41e0()*-0.280405);
}

double NNfunction_NN_2_2::synapse0x25c7de0() {
   return (neuron0x25b4520()*-0.0924015);
}

double NNfunction_NN_2_2::synapse0x25c7e20() {
   return (neuron0x25b4860()*-0.119955);
}

double NNfunction_NN_2_2::synapse0x25c7e60() {
   return (neuron0x25b4ba0()*-0.202345);
}

double NNfunction_NN_2_2::synapse0x25c7ea0() {
   return (neuron0x25b4ee0()*-0.15678);
}

double NNfunction_NN_2_2::synapse0x25c7ee0() {
   return (neuron0x25b5220()*0.649353);
}

double NNfunction_NN_2_2::synapse0x25c7f20() {
   return (neuron0x25b5560()*0.246632);
}

double NNfunction_NN_2_2::synapse0x25c7f60() {
   return (neuron0x25b58a0()*0.474113);
}

double NNfunction_NN_2_2::synapse0x25c7fa0() {
   return (neuron0x25b5be0()*-0.283824);
}

double NNfunction_NN_2_2::synapse0x25c7fe0() {
   return (neuron0x25b5f20()*-0.11434);
}

double NNfunction_NN_2_2::synapse0x25c8020() {
   return (neuron0x25b6260()*0.600946);
}

double NNfunction_NN_2_2::synapse0x25c8060() {
   return (neuron0x25b65a0()*0.0340665);
}

double NNfunction_NN_2_2::synapse0x25c7af0() {
   return (neuron0x25b68e0()*-0.170689);
}

double NNfunction_NN_2_2::synapse0x25c7b30() {
   return (neuron0x25b6e40()*0.122853);
}

double NNfunction_NN_2_2::synapse0x25c81b0() {
   return (neuron0x25b7060()*0.215113);
}

double NNfunction_NN_2_2::synapse0x25c81f0() {
   return (neuron0x25b73a0()*-0.126328);
}

double NNfunction_NN_2_2::synapse0x25c8230() {
   return (neuron0x25b76e0()*0.109521);
}

double NNfunction_NN_2_2::synapse0x25c8270() {
   return (neuron0x25b7a20()*0.0942056);
}

double NNfunction_NN_2_2::synapse0x25c82b0() {
   return (neuron0x25b7d60()*0.0270006);
}

double NNfunction_NN_2_2::synapse0x25c82f0() {
   return (neuron0x25b80a0()*-1.53404);
}

double NNfunction_NN_2_2::synapse0x25c8670() {
   return (neuron0x25b34e0()*-0.0286829);
}

double NNfunction_NN_2_2::synapse0x25c86b0() {
   return (neuron0x25b3820()*0.289785);
}

double NNfunction_NN_2_2::synapse0x25c86f0() {
   return (neuron0x25b3b60()*-0.329806);
}

double NNfunction_NN_2_2::synapse0x25c8730() {
   return (neuron0x25b3ea0()*-0.0163509);
}

double NNfunction_NN_2_2::synapse0x25c8770() {
   return (neuron0x25b41e0()*0.0441194);
}

double NNfunction_NN_2_2::synapse0x25c87b0() {
   return (neuron0x25b4520()*0.00680568);
}

double NNfunction_NN_2_2::synapse0x25c87f0() {
   return (neuron0x25b4860()*0.0291851);
}

double NNfunction_NN_2_2::synapse0x25c8830() {
   return (neuron0x25b4ba0()*-0.0518138);
}

double NNfunction_NN_2_2::synapse0x25c8870() {
   return (neuron0x25b4ee0()*0.00826321);
}

double NNfunction_NN_2_2::synapse0x25c88b0() {
   return (neuron0x25b5220()*-0.0158742);
}

double NNfunction_NN_2_2::synapse0x25c88f0() {
   return (neuron0x25b5560()*-0.00248538);
}

double NNfunction_NN_2_2::synapse0x25c8930() {
   return (neuron0x25b58a0()*0.0835054);
}

double NNfunction_NN_2_2::synapse0x25c8970() {
   return (neuron0x25b5be0()*0.0171084);
}

double NNfunction_NN_2_2::synapse0x25c89b0() {
   return (neuron0x25b5f20()*0.0268975);
}

double NNfunction_NN_2_2::synapse0x25c89f0() {
   return (neuron0x25b6260()*0.366611);
}

double NNfunction_NN_2_2::synapse0x25c8a30() {
   return (neuron0x25b65a0()*0.0114714);
}

double NNfunction_NN_2_2::synapse0x25c84c0() {
   return (neuron0x25b68e0()*0.066186);
}

double NNfunction_NN_2_2::synapse0x25c8500() {
   return (neuron0x25b6e40()*-0.0388928);
}

double NNfunction_NN_2_2::synapse0x25c8b80() {
   return (neuron0x25b7060()*0.00102742);
}

double NNfunction_NN_2_2::synapse0x25c8bc0() {
   return (neuron0x25b73a0()*0.0295565);
}

double NNfunction_NN_2_2::synapse0x25c8c00() {
   return (neuron0x25b76e0()*0.0456396);
}

double NNfunction_NN_2_2::synapse0x25c8c40() {
   return (neuron0x25b7a20()*0.00046654);
}

double NNfunction_NN_2_2::synapse0x25c8c80() {
   return (neuron0x25b7d60()*-0.0188683);
}

double NNfunction_NN_2_2::synapse0x25c8cc0() {
   return (neuron0x25b80a0()*5.6508);
}

double NNfunction_NN_2_2::synapse0x25dab90() {
   return (neuron0x25b34e0()*-0.127758);
}

double NNfunction_NN_2_2::synapse0x25dabd0() {
   return (neuron0x25b3820()*1.29986);
}

double NNfunction_NN_2_2::synapse0x25dac10() {
   return (neuron0x25b3b60()*1.75457);
}

double NNfunction_NN_2_2::synapse0x25dac50() {
   return (neuron0x25b3ea0()*0.0359221);
}

double NNfunction_NN_2_2::synapse0x25dac90() {
   return (neuron0x25b41e0()*-0.0339676);
}

double NNfunction_NN_2_2::synapse0x25dacd0() {
   return (neuron0x25b4520()*-0.102287);
}

double NNfunction_NN_2_2::synapse0x25dad10() {
   return (neuron0x25b4860()*-0.0225567);
}

double NNfunction_NN_2_2::synapse0x25dad50() {
   return (neuron0x25b4ba0()*-0.103719);
}

double NNfunction_NN_2_2::synapse0x25dad90() {
   return (neuron0x25b4ee0()*-0.103501);
}

double NNfunction_NN_2_2::synapse0x25dadd0() {
   return (neuron0x25b5220()*0.0144157);
}

double NNfunction_NN_2_2::synapse0x25dae10() {
   return (neuron0x25b5560()*-0.117783);
}

double NNfunction_NN_2_2::synapse0x25dae50() {
   return (neuron0x25b58a0()*0.274431);
}

double NNfunction_NN_2_2::synapse0x25dae90() {
   return (neuron0x25b5be0()*0.215531);
}

double NNfunction_NN_2_2::synapse0x25daed0() {
   return (neuron0x25b5f20()*0.014447);
}

double NNfunction_NN_2_2::synapse0x25daf10() {
   return (neuron0x25b6260()*0.163279);
}

double NNfunction_NN_2_2::synapse0x25daf50() {
   return (neuron0x25b65a0()*0.0174662);
}

double NNfunction_NN_2_2::synapse0x25c8d00() {
   return (neuron0x25b68e0()*0.117429);
}

double NNfunction_NN_2_2::synapse0x25c8d40() {
   return (neuron0x25b6e40()*0.0115075);
}

double NNfunction_NN_2_2::synapse0x25db0a0() {
   return (neuron0x25b7060()*-0.088207);
}

double NNfunction_NN_2_2::synapse0x25db0e0() {
   return (neuron0x25b73a0()*0.053273);
}

double NNfunction_NN_2_2::synapse0x25db120() {
   return (neuron0x25b76e0()*0.156115);
}

double NNfunction_NN_2_2::synapse0x25db160() {
   return (neuron0x25b7a20()*-0.0174831);
}

double NNfunction_NN_2_2::synapse0x25db1a0() {
   return (neuron0x25b7d60()*0.171992);
}

double NNfunction_NN_2_2::synapse0x25db1e0() {
   return (neuron0x25b80a0()*-3.28251);
}

double NNfunction_NN_2_2::synapse0x25db560() {
   return (neuron0x25b34e0()*0.035488);
}

double NNfunction_NN_2_2::synapse0x25db5a0() {
   return (neuron0x25b3820()*0.024913);
}

double NNfunction_NN_2_2::synapse0x25db5e0() {
   return (neuron0x25b3b60()*-4.74315);
}

double NNfunction_NN_2_2::synapse0x25db620() {
   return (neuron0x25b3ea0()*-0.00139725);
}

double NNfunction_NN_2_2::synapse0x25db660() {
   return (neuron0x25b41e0()*-0.00321057);
}

double NNfunction_NN_2_2::synapse0x25db6a0() {
   return (neuron0x25b4520()*-0.00277324);
}

double NNfunction_NN_2_2::synapse0x25db6e0() {
   return (neuron0x25b4860()*-0.0116919);
}

double NNfunction_NN_2_2::synapse0x25db720() {
   return (neuron0x25b4ba0()*-0.0206503);
}

double NNfunction_NN_2_2::synapse0x25db760() {
   return (neuron0x25b4ee0()*-0.00755142);
}

double NNfunction_NN_2_2::synapse0x25db7a0() {
   return (neuron0x25b5220()*0.0035013);
}

double NNfunction_NN_2_2::synapse0x25db7e0() {
   return (neuron0x25b5560()*0.0039399);
}

double NNfunction_NN_2_2::synapse0x25db820() {
   return (neuron0x25b58a0()*0.0170577);
}

double NNfunction_NN_2_2::synapse0x25db860() {
   return (neuron0x25b5be0()*0.00382795);
}

double NNfunction_NN_2_2::synapse0x25db8a0() {
   return (neuron0x25b5f20()*-0.00668475);
}

double NNfunction_NN_2_2::synapse0x25db8e0() {
   return (neuron0x25b6260()*0.110694);
}

double NNfunction_NN_2_2::synapse0x25db920() {
   return (neuron0x25b65a0()*0.00657854);
}

double NNfunction_NN_2_2::synapse0x25db3b0() {
   return (neuron0x25b68e0()*-0.000936703);
}

double NNfunction_NN_2_2::synapse0x25db3f0() {
   return (neuron0x25b6e40()*0.0130664);
}

double NNfunction_NN_2_2::synapse0x25dba70() {
   return (neuron0x25b7060()*0.00265812);
}

double NNfunction_NN_2_2::synapse0x25dbab0() {
   return (neuron0x25b73a0()*0.00535387);
}

double NNfunction_NN_2_2::synapse0x25dbaf0() {
   return (neuron0x25b76e0()*0.0252902);
}

double NNfunction_NN_2_2::synapse0x25dbb30() {
   return (neuron0x25b7a20()*0.0128467);
}

double NNfunction_NN_2_2::synapse0x25dbb70() {
   return (neuron0x25b7d60()*-0.00512786);
}

double NNfunction_NN_2_2::synapse0x25dbbb0() {
   return (neuron0x25b80a0()*0.0953092);
}

double NNfunction_NN_2_2::synapse0x25dbf30() {
   return (neuron0x25b34e0()*0.0659057);
}

double NNfunction_NN_2_2::synapse0x25dbf70() {
   return (neuron0x25b3820()*0.0682387);
}

double NNfunction_NN_2_2::synapse0x25dbfb0() {
   return (neuron0x25b3b60()*5.26994);
}

double NNfunction_NN_2_2::synapse0x25dbff0() {
   return (neuron0x25b3ea0()*0.00586774);
}

double NNfunction_NN_2_2::synapse0x25dc030() {
   return (neuron0x25b41e0()*0.0251861);
}

double NNfunction_NN_2_2::synapse0x25dc070() {
   return (neuron0x25b4520()*0.00956451);
}

double NNfunction_NN_2_2::synapse0x25dc0b0() {
   return (neuron0x25b4860()*-0.0116542);
}

double NNfunction_NN_2_2::synapse0x25dc0f0() {
   return (neuron0x25b4ba0()*0.0237573);
}

double NNfunction_NN_2_2::synapse0x25dc130() {
   return (neuron0x25b4ee0()*-0.0183348);
}

double NNfunction_NN_2_2::synapse0x25dc170() {
   return (neuron0x25b5220()*0.00376859);
}

double NNfunction_NN_2_2::synapse0x25dc1b0() {
   return (neuron0x25b5560()*-0.0191324);
}

double NNfunction_NN_2_2::synapse0x25dc1f0() {
   return (neuron0x25b58a0()*0.0530934);
}

double NNfunction_NN_2_2::synapse0x25dc230() {
   return (neuron0x25b5be0()*-0.00162367);
}

double NNfunction_NN_2_2::synapse0x25dc270() {
   return (neuron0x25b5f20()*-0.020913);
}

double NNfunction_NN_2_2::synapse0x25dc2b0() {
   return (neuron0x25b6260()*-0.0222949);
}

double NNfunction_NN_2_2::synapse0x25dc2f0() {
   return (neuron0x25b65a0()*0.00999235);
}

double NNfunction_NN_2_2::synapse0x25dbd80() {
   return (neuron0x25b68e0()*-0.0146259);
}

double NNfunction_NN_2_2::synapse0x25dbdc0() {
   return (neuron0x25b6e40()*-0.000945318);
}

double NNfunction_NN_2_2::synapse0x25dc440() {
   return (neuron0x25b7060()*0.00799225);
}

double NNfunction_NN_2_2::synapse0x25dc480() {
   return (neuron0x25b73a0()*0.00649839);
}

double NNfunction_NN_2_2::synapse0x25dc4c0() {
   return (neuron0x25b76e0()*-0.0467968);
}

double NNfunction_NN_2_2::synapse0x25dc500() {
   return (neuron0x25b7a20()*-0.00542781);
}

double NNfunction_NN_2_2::synapse0x25dc540() {
   return (neuron0x25b7d60()*-0.00719792);
}

double NNfunction_NN_2_2::synapse0x25dc580() {
   return (neuron0x25b80a0()*4.26633);
}

double NNfunction_NN_2_2::synapse0x25dc900() {
   return (neuron0x25b34e0()*-0.0459258);
}

double NNfunction_NN_2_2::synapse0x25dc940() {
   return (neuron0x25b3820()*-0.0845947);
}

double NNfunction_NN_2_2::synapse0x25dc980() {
   return (neuron0x25b3b60()*-0.671582);
}

double NNfunction_NN_2_2::synapse0x25dc9c0() {
   return (neuron0x25b3ea0()*0.505953);
}

double NNfunction_NN_2_2::synapse0x25dca00() {
   return (neuron0x25b41e0()*-0.123512);
}

double NNfunction_NN_2_2::synapse0x25dca40() {
   return (neuron0x25b4520()*-0.58307);
}

double NNfunction_NN_2_2::synapse0x25dca80() {
   return (neuron0x25b4860()*0.288455);
}

double NNfunction_NN_2_2::synapse0x25dcac0() {
   return (neuron0x25b4ba0()*-0.290383);
}

double NNfunction_NN_2_2::synapse0x25dcb00() {
   return (neuron0x25b4ee0()*-0.207813);
}

double NNfunction_NN_2_2::synapse0x25dcb40() {
   return (neuron0x25b5220()*-0.764932);
}

double NNfunction_NN_2_2::synapse0x25dcb80() {
   return (neuron0x25b5560()*-0.453588);
}

double NNfunction_NN_2_2::synapse0x25dcbc0() {
   return (neuron0x25b58a0()*-0.712929);
}

double NNfunction_NN_2_2::synapse0x25dcc00() {
   return (neuron0x25b5be0()*0.445352);
}

double NNfunction_NN_2_2::synapse0x25dcc40() {
   return (neuron0x25b5f20()*-0.119862);
}

double NNfunction_NN_2_2::synapse0x25dcc80() {
   return (neuron0x25b6260()*-0.229951);
}

double NNfunction_NN_2_2::synapse0x25dccc0() {
   return (neuron0x25b65a0()*-0.527954);
}

double NNfunction_NN_2_2::synapse0x25dc750() {
   return (neuron0x25b68e0()*-0.216132);
}

double NNfunction_NN_2_2::synapse0x25dc790() {
   return (neuron0x25b6e40()*-0.337792);
}

double NNfunction_NN_2_2::synapse0x25dce10() {
   return (neuron0x25b7060()*-0.050963);
}

double NNfunction_NN_2_2::synapse0x25dce50() {
   return (neuron0x25b73a0()*-0.248761);
}

double NNfunction_NN_2_2::synapse0x25dce90() {
   return (neuron0x25b76e0()*0.0116734);
}

double NNfunction_NN_2_2::synapse0x25dced0() {
   return (neuron0x25b7a20()*-0.0865431);
}

double NNfunction_NN_2_2::synapse0x25dcf10() {
   return (neuron0x25b7d60()*0.761113);
}

double NNfunction_NN_2_2::synapse0x25dcf50() {
   return (neuron0x25b80a0()*-1.24893);
}

double NNfunction_NN_2_2::synapse0x25b94f0() {
   return (neuron0x25b8540()*-0.259307);
}

double NNfunction_NN_2_2::synapse0x25b9530() {
   return (neuron0x25b8e50()*0.0295172);
}

double NNfunction_NN_2_2::synapse0x25baa00() {
   return (neuron0x25b9930()*-0.948718);
}

double NNfunction_NN_2_2::synapse0x25baa40() {
   return (neuron0x23731c0()*0.037813);
}

double NNfunction_NN_2_2::synapse0x25bb3d0() {
   return (neuron0x25ba750()*0.139985);
}

double NNfunction_NN_2_2::synapse0x25bb410() {
   return (neuron0x25bb120()*0.0161508);
}

double NNfunction_NN_2_2::synapse0x25bc1a0() {
   return (neuron0x25bbef0()*0.793541);
}

double NNfunction_NN_2_2::synapse0x25bc1e0() {
   return (neuron0x25bc8c0()*0.0146993);
}

double NNfunction_NN_2_2::synapse0x25bcb70() {
   return (neuron0x25bd290()*-0.330589);
}

double NNfunction_NN_2_2::synapse0x25bcbb0() {
   return (neuron0x25bdd70()*-0.705533);
}

double NNfunction_NN_2_2::synapse0x25bd540() {
   return (neuron0x25be740()*0.108009);
}

double NNfunction_NN_2_2::synapse0x25bd580() {
   return (neuron0x25bb820()*0.777761);
}

double NNfunction_NN_2_2::synapse0x25be020() {
   return (neuron0x25c02f0()*0.109633);
}

double NNfunction_NN_2_2::synapse0x25be060() {
   return (neuron0x25c0cc0()*-0.687417);
}

double NNfunction_NN_2_2::synapse0x25be9f0() {
   return (neuron0x25c1690()*1.71081);
}

double NNfunction_NN_2_2::synapse0x25bea30() {
   return (neuron0x25c2060()*-0.0781766);
}

double NNfunction_NN_2_2::synapse0x25bbad0() {
   return (neuron0x25c3e70()*-4.18156);
}

double NNfunction_NN_2_2::synapse0x25bbb10() {
   return (neuron0x25c4150()*-0.692815);
}

double NNfunction_NN_2_2::synapse0x25c05a0() {
   return (neuron0x25c4b20()*-1.66778);
}

double NNfunction_NN_2_2::synapse0x25c05e0() {
   return (neuron0x25c54f0()*0.539947);
}

double NNfunction_NN_2_2::synapse0x25c0f70() {
   return (neuron0x25c5ec0()*-0.139222);
}

double NNfunction_NN_2_2::synapse0x25c0fb0() {
   return (neuron0x25c6890()*-0.0925517);
}

double NNfunction_NN_2_2::synapse0x25c1940() {
   return (neuron0x25bf3e0()*0.0504247);
}

double NNfunction_NN_2_2::synapse0x25c1980() {
   return (neuron0x25bfdb0()*0.0929584);
}

double NNfunction_NN_2_2::synapse0x25c2310() {
   return (neuron0x25c9620()*-0.0308941);
}

double NNfunction_NN_2_2::synapse0x25c2350() {
   return (neuron0x25c9ff0()*0.191059);
}

double NNfunction_NN_2_2::synapse0x25b6480() {
   return (neuron0x25ca9c0()*-5.25129);
}

double NNfunction_NN_2_2::synapse0x25b64c0() {
   return (neuron0x25cb390()*-0.0707579);
}

double NNfunction_NN_2_2::synapse0x25c4400() {
   return (neuron0x25cbd60()*0.185724);
}

double NNfunction_NN_2_2::synapse0x25c4440() {
   return (neuron0x25cc730()*1.93601);
}

double NNfunction_NN_2_2::synapse0x25c4dd0() {
   return (neuron0x25cd100()*0.242124);
}

double NNfunction_NN_2_2::synapse0x25c4e10() {
   return (neuron0x25cdad0()*-0.0885771);
}

double NNfunction_NN_2_2::synapse0x25c57a0() {
   return (neuron0x25c3b60()*0.532292);
}

double NNfunction_NN_2_2::synapse0x25c57e0() {
   return (neuron0x25d06b0()*0.953268);
}

double NNfunction_NN_2_2::synapse0x25c6170() {
   return (neuron0x25d1080()*-0.00550032);
}

double NNfunction_NN_2_2::synapse0x25c61b0() {
   return (neuron0x25d1a50()*-0.139234);
}

double NNfunction_NN_2_2::synapse0x25c6b40() {
   return (neuron0x25d2420()*-0.0111623);
}

double NNfunction_NN_2_2::synapse0x25c6b80() {
   return (neuron0x25d2df0()*0.242901);
}

double NNfunction_NN_2_2::synapse0x25bf690() {
   return (neuron0x25d37c0()*0.0326629);
}

double NNfunction_NN_2_2::synapse0x25bf6d0() {
   return (neuron0x25d4190()*-0.196508);
}

double NNfunction_NN_2_2::synapse0x25c8f40() {
   return (neuron0x25d4b60()*1.73787);
}

double NNfunction_NN_2_2::synapse0x25c8f80() {
   return (neuron0x25d5740()*-3.16745);
}

double NNfunction_NN_2_2::synapse0x25c98d0() {
   return (neuron0x25d6110()*-0.0357579);
}

double NNfunction_NN_2_2::synapse0x25c9910() {
   return (neuron0x25c6f90()*0.373984);
}

double NNfunction_NN_2_2::synapse0x25ca2a0() {
   return (neuron0x25c7960()*-0.191126);
}

double NNfunction_NN_2_2::synapse0x25ca2e0() {
   return (neuron0x25c8330()*2.71538);
}

double NNfunction_NN_2_2::synapse0x25cac70() {
   return (neuron0x25da970()*-0.072993);
}

double NNfunction_NN_2_2::synapse0x25cacb0() {
   return (neuron0x25db220()*1.76733);
}

double NNfunction_NN_2_2::synapse0x25cb640() {
   return (neuron0x25dbbf0()*1.44811);
}

double NNfunction_NN_2_2::synapse0x25cb680() {
   return (neuron0x25dc5c0()*-0.00542097);
}

double NNfunction_NN_2_2::synapse0x25cdd80() {
   return (neuron0x25b8540()*0.090832);
}

double NNfunction_NN_2_2::synapse0x25cddc0() {
   return (neuron0x25b8e50()*-0.000507203);
}

double NNfunction_NN_2_2::synapse0x25c3340() {
   return (neuron0x25b9930()*0.533765);
}

double NNfunction_NN_2_2::synapse0x25c3380() {
   return (neuron0x23731c0()*0.0234015);
}

double NNfunction_NN_2_2::synapse0x25d0960() {
   return (neuron0x25ba750()*-0.0618421);
}

double NNfunction_NN_2_2::synapse0x25d09a0() {
   return (neuron0x25bb120()*0.0353585);
}

double NNfunction_NN_2_2::synapse0x25d1330() {
   return (neuron0x25bbef0()*2.09099);
}

double NNfunction_NN_2_2::synapse0x25d1370() {
   return (neuron0x25bc8c0()*-0.117072);
}

double NNfunction_NN_2_2::synapse0x25d1d00() {
   return (neuron0x25bd290()*0.323366);
}

double NNfunction_NN_2_2::synapse0x25d1d40() {
   return (neuron0x25bdd70()*-4.48829);
}

double NNfunction_NN_2_2::synapse0x25d26d0() {
   return (neuron0x25be740()*-0.308851);
}

double NNfunction_NN_2_2::synapse0x25d2710() {
   return (neuron0x25bb820()*1.2986);
}

double NNfunction_NN_2_2::synapse0x25d30a0() {
   return (neuron0x25c02f0()*-0.083716);
}

double NNfunction_NN_2_2::synapse0x25d30e0() {
   return (neuron0x25c0cc0()*0.136489);
}

double NNfunction_NN_2_2::synapse0x25d3a70() {
   return (neuron0x25c1690()*-4.66399);
}

double NNfunction_NN_2_2::synapse0x25d3ab0() {
   return (neuron0x25c2060()*-0.00926255);
}

double NNfunction_NN_2_2::synapse0x25d4440() {
   return (neuron0x25c3e70()*1.27039);
}

double NNfunction_NN_2_2::synapse0x25d4480() {
   return (neuron0x25c4150()*2.05478);
}

double NNfunction_NN_2_2::synapse0x25d4e10() {
   return (neuron0x25c4b20()*2.65658);
}

double NNfunction_NN_2_2::synapse0x25d4e50() {
   return (neuron0x25c54f0()*-5.39899);
}

double NNfunction_NN_2_2::synapse0x25d59f0() {
   return (neuron0x25c5ec0()*0.211073);
}

double NNfunction_NN_2_2::synapse0x25d5a30() {
   return (neuron0x25c6890()*0.0775732);
}

double NNfunction_NN_2_2::synapse0x25d63c0() {
   return (neuron0x25bf3e0()*0.00573846);
}

double NNfunction_NN_2_2::synapse0x25d6400() {
   return (neuron0x25bfdb0()*-0.0321721);
}

double NNfunction_NN_2_2::synapse0x25c7240() {
   return (neuron0x25c9620()*0.0607996);
}

double NNfunction_NN_2_2::synapse0x25c7280() {
   return (neuron0x25c9ff0()*-0.329718);
}

double NNfunction_NN_2_2::synapse0x25c7c10() {
   return (neuron0x25ca9c0()*-3.02811);
}

double NNfunction_NN_2_2::synapse0x25c7c50() {
   return (neuron0x25cb390()*0.0335108);
}

double NNfunction_NN_2_2::synapse0x25c85e0() {
   return (neuron0x25cbd60()*-0.026493);
}

double NNfunction_NN_2_2::synapse0x25c8620() {
   return (neuron0x25cc730()*2.19265);
}

double NNfunction_NN_2_2::synapse0x25dab00() {
   return (neuron0x25cd100()*0.424853);
}

double NNfunction_NN_2_2::synapse0x25dab40() {
   return (neuron0x25cdad0()*0.00744396);
}

double NNfunction_NN_2_2::synapse0x25db4d0() {
   return (neuron0x25c3b60()*0.928205);
}

double NNfunction_NN_2_2::synapse0x25db510() {
   return (neuron0x25d06b0()*1.16622);
}

double NNfunction_NN_2_2::synapse0x25dbea0() {
   return (neuron0x25d1080()*0.204836);
}

double NNfunction_NN_2_2::synapse0x25dbee0() {
   return (neuron0x25d1a50()*-0.12624);
}

double NNfunction_NN_2_2::synapse0x25dc870() {
   return (neuron0x25d2420()*0.038665);
}

double NNfunction_NN_2_2::synapse0x25dc8b0() {
   return (neuron0x25d2df0()*-0.0448201);
}

double NNfunction_NN_2_2::synapse0x25b8760() {
   return (neuron0x25d37c0()*0.0434919);
}

double NNfunction_NN_2_2::synapse0x25b87a0() {
   return (neuron0x25d4190()*0.0141907);
}

double NNfunction_NN_2_2::synapse0x25cc010() {
   return (neuron0x25d4b60()*1.72742);
}

double NNfunction_NN_2_2::synapse0x25cc050() {
   return (neuron0x25d5740()*3.47518);
}

double NNfunction_NN_2_2::synapse0x25dcf90() {
   return (neuron0x25d6110()*-0.0464592);
}

double NNfunction_NN_2_2::synapse0x25dcfd0() {
   return (neuron0x25c6f90()*1.18973);
}

double NNfunction_NN_2_2::synapse0x25dd010() {
   return (neuron0x25c7960()*-0.0375639);
}

double NNfunction_NN_2_2::synapse0x25dd050() {
   return (neuron0x25c8330()*-0.244843);
}

double NNfunction_NN_2_2::synapse0x25e3f00() {
   return (neuron0x25da970()*0.0833492);
}

double NNfunction_NN_2_2::synapse0x25e3f40() {
   return (neuron0x25db220()*1.74528);
}

double NNfunction_NN_2_2::synapse0x25e3f80() {
   return (neuron0x25dbbf0()*-2.51531);
}

double NNfunction_NN_2_2::synapse0x25e3fc0() {
   return (neuron0x25dc5c0()*-0.0125305);
}

double NNfunction_NN_2_2::synapse0x25e4340() {
   return (neuron0x25b8540()*-1.5316);
}

double NNfunction_NN_2_2::synapse0x25e4380() {
   return (neuron0x25b8e50()*0.304012);
}

double NNfunction_NN_2_2::synapse0x25e43c0() {
   return (neuron0x25b9930()*1.53634);
}

double NNfunction_NN_2_2::synapse0x25e4400() {
   return (neuron0x23731c0()*0.142916);
}

double NNfunction_NN_2_2::synapse0x25e4440() {
   return (neuron0x25ba750()*-0.716447);
}

double NNfunction_NN_2_2::synapse0x25e4480() {
   return (neuron0x25bb120()*0.333087);
}

double NNfunction_NN_2_2::synapse0x25e44c0() {
   return (neuron0x25bbef0()*5.65111);
}

double NNfunction_NN_2_2::synapse0x25e4500() {
   return (neuron0x25bc8c0()*0.323914);
}

double NNfunction_NN_2_2::synapse0x25e4540() {
   return (neuron0x25bd290()*-0.0221027);
}

double NNfunction_NN_2_2::synapse0x25e4580() {
   return (neuron0x25bdd70()*6.58734);
}

double NNfunction_NN_2_2::synapse0x25e45c0() {
   return (neuron0x25be740()*3.31309);
}

double NNfunction_NN_2_2::synapse0x25e4600() {
   return (neuron0x25bb820()*-1.94181);
}

double NNfunction_NN_2_2::synapse0x25e4640() {
   return (neuron0x25c02f0()*2.61828);
}

double NNfunction_NN_2_2::synapse0x25e4680() {
   return (neuron0x25c0cc0()*3.50219);
}

double NNfunction_NN_2_2::synapse0x25e46c0() {
   return (neuron0x25c1690()*0.385383);
}

double NNfunction_NN_2_2::synapse0x25e4700() {
   return (neuron0x25c2060()*-0.471727);
}

double NNfunction_NN_2_2::synapse0x25e4190() {
   return (neuron0x25c3e70()*-3.15155);
}

double NNfunction_NN_2_2::synapse0x25e41d0() {
   return (neuron0x25c4150()*3.45608);
}

double NNfunction_NN_2_2::synapse0x25e4850() {
   return (neuron0x25c4b20()*0.638841);
}

double NNfunction_NN_2_2::synapse0x25e4890() {
   return (neuron0x25c54f0()*-0.248578);
}

double NNfunction_NN_2_2::synapse0x25e48d0() {
   return (neuron0x25c5ec0()*0.700912);
}

double NNfunction_NN_2_2::synapse0x25e4910() {
   return (neuron0x25c6890()*-0.702729);
}

double NNfunction_NN_2_2::synapse0x25e4950() {
   return (neuron0x25bf3e0()*-1.44853);
}

double NNfunction_NN_2_2::synapse0x25e4990() {
   return (neuron0x25bfdb0()*-0.749634);
}

double NNfunction_NN_2_2::synapse0x25e49d0() {
   return (neuron0x25c9620()*0.430725);
}

double NNfunction_NN_2_2::synapse0x25e4a10() {
   return (neuron0x25c9ff0()*-0.611622);
}

double NNfunction_NN_2_2::synapse0x25e4a50() {
   return (neuron0x25ca9c0()*1.70133);
}

double NNfunction_NN_2_2::synapse0x25e4a90() {
   return (neuron0x25cb390()*1.91452);
}

double NNfunction_NN_2_2::synapse0x25e4ad0() {
   return (neuron0x25cbd60()*-1.09555);
}

double NNfunction_NN_2_2::synapse0x25e4b10() {
   return (neuron0x25cc730()*2.58029);
}

double NNfunction_NN_2_2::synapse0x25e4b50() {
   return (neuron0x25cd100()*-2.92468);
}

double NNfunction_NN_2_2::synapse0x25e4b90() {
   return (neuron0x25cdad0()*1.46738);
}

double NNfunction_NN_2_2::synapse0x25e4740() {
   return (neuron0x25c3b60()*7.82116);
}

double NNfunction_NN_2_2::synapse0x25e4780() {
   return (neuron0x25d06b0()*-1.45681);
}

double NNfunction_NN_2_2::synapse0x25e47c0() {
   return (neuron0x25d1080()*1.7775);
}

double NNfunction_NN_2_2::synapse0x25e4800() {
   return (neuron0x25d1a50()*1.45249);
}

double NNfunction_NN_2_2::synapse0x25e4de0() {
   return (neuron0x25d2420()*0.0802861);
}

double NNfunction_NN_2_2::synapse0x25e4e20() {
   return (neuron0x25d2df0()*1.51042);
}

double NNfunction_NN_2_2::synapse0x25e4e60() {
   return (neuron0x25d37c0()*0.774077);
}

double NNfunction_NN_2_2::synapse0x25e4ea0() {
   return (neuron0x25d4190()*-2.12894);
}

double NNfunction_NN_2_2::synapse0x25e4ee0() {
   return (neuron0x25d4b60()*-3.16722);
}

double NNfunction_NN_2_2::synapse0x25e4f20() {
   return (neuron0x25d5740()*-1.76692);
}

double NNfunction_NN_2_2::synapse0x25e4f60() {
   return (neuron0x25d6110()*2.11546);
}

double NNfunction_NN_2_2::synapse0x25e4fa0() {
   return (neuron0x25c6f90()*-4.43374);
}

double NNfunction_NN_2_2::synapse0x25e4fe0() {
   return (neuron0x25c7960()*0.323938);
}

double NNfunction_NN_2_2::synapse0x25e5020() {
   return (neuron0x25c8330()*2.05462);
}

double NNfunction_NN_2_2::synapse0x25e5060() {
   return (neuron0x25da970()*-1.28805);
}

double NNfunction_NN_2_2::synapse0x25e50a0() {
   return (neuron0x25db220()*3.16368);
}

double NNfunction_NN_2_2::synapse0x25e50e0() {
   return (neuron0x25dbbf0()*1.22243);
}

double NNfunction_NN_2_2::synapse0x25e5120() {
   return (neuron0x25dc5c0()*0.117807);
}

double NNfunction_NN_2_2::synapse0x25e54a0() {
   return (neuron0x25b8540()*-0.130607);
}

double NNfunction_NN_2_2::synapse0x25e54e0() {
   return (neuron0x25b8e50()*-2.46662);
}

double NNfunction_NN_2_2::synapse0x25e5520() {
   return (neuron0x25b9930()*-1.37041);
}

double NNfunction_NN_2_2::synapse0x25e5560() {
   return (neuron0x23731c0()*-0.727519);
}

double NNfunction_NN_2_2::synapse0x25e55a0() {
   return (neuron0x25ba750()*-0.361924);
}

double NNfunction_NN_2_2::synapse0x25e55e0() {
   return (neuron0x25bb120()*-0.0899653);
}

double NNfunction_NN_2_2::synapse0x25e5620() {
   return (neuron0x25bbef0()*-4.52125);
}

double NNfunction_NN_2_2::synapse0x25e5660() {
   return (neuron0x25bc8c0()*0.0667636);
}

double NNfunction_NN_2_2::synapse0x25e56a0() {
   return (neuron0x25bd290()*-0.0453622);
}

double NNfunction_NN_2_2::synapse0x25e56e0() {
   return (neuron0x25bdd70()*-2.27468);
}

double NNfunction_NN_2_2::synapse0x25e5720() {
   return (neuron0x25be740()*-2.09767);
}

double NNfunction_NN_2_2::synapse0x25e5760() {
   return (neuron0x25bb820()*0.204676);
}

double NNfunction_NN_2_2::synapse0x25e57a0() {
   return (neuron0x25c02f0()*-3.74149);
}

double NNfunction_NN_2_2::synapse0x25e57e0() {
   return (neuron0x25c0cc0()*-3.27145);
}

double NNfunction_NN_2_2::synapse0x25e5820() {
   return (neuron0x25c1690()*0.852546);
}

double NNfunction_NN_2_2::synapse0x25e5860() {
   return (neuron0x25c2060()*0.253992);
}

double NNfunction_NN_2_2::synapse0x25e52f0() {
   return (neuron0x25c3e70()*-0.979506);
}

double NNfunction_NN_2_2::synapse0x25e5330() {
   return (neuron0x25c4150()*-2.08212);
}

double NNfunction_NN_2_2::synapse0x25e59b0() {
   return (neuron0x25c4b20()*-0.878207);
}

double NNfunction_NN_2_2::synapse0x25e59f0() {
   return (neuron0x25c54f0()*0.17698);
}

double NNfunction_NN_2_2::synapse0x25e5a30() {
   return (neuron0x25c5ec0()*-0.963002);
}

double NNfunction_NN_2_2::synapse0x25e5a70() {
   return (neuron0x25c6890()*0.470847);
}

double NNfunction_NN_2_2::synapse0x25e5ab0() {
   return (neuron0x25bf3e0()*1.45348);
}

double NNfunction_NN_2_2::synapse0x25e5af0() {
   return (neuron0x25bfdb0()*0.862164);
}

double NNfunction_NN_2_2::synapse0x25e5b30() {
   return (neuron0x25c9620()*-0.412706);
}

double NNfunction_NN_2_2::synapse0x25e5b70() {
   return (neuron0x25c9ff0()*-2.23793);
}

double NNfunction_NN_2_2::synapse0x25e5bb0() {
   return (neuron0x25ca9c0()*-2.91852);
}

double NNfunction_NN_2_2::synapse0x25e5bf0() {
   return (neuron0x25cb390()*-1.78037);
}

double NNfunction_NN_2_2::synapse0x25e5c30() {
   return (neuron0x25cbd60()*-0.724863);
}

double NNfunction_NN_2_2::synapse0x25e5c70() {
   return (neuron0x25cc730()*-0.588457);
}

double NNfunction_NN_2_2::synapse0x25e5cb0() {
   return (neuron0x25cd100()*2.53585);
}

double NNfunction_NN_2_2::synapse0x25e5cf0() {
   return (neuron0x25cdad0()*-1.85682);
}

double NNfunction_NN_2_2::synapse0x25e58a0() {
   return (neuron0x25c3b60()*3.28692);
}

double NNfunction_NN_2_2::synapse0x25e58e0() {
   return (neuron0x25d06b0()*-0.824763);
}

double NNfunction_NN_2_2::synapse0x25e5920() {
   return (neuron0x25d1080()*-0.500104);
}

double NNfunction_NN_2_2::synapse0x25e5960() {
   return (neuron0x25d1a50()*2.64575);
}

double NNfunction_NN_2_2::synapse0x25e5f40() {
   return (neuron0x25d2420()*-0.388562);
}

double NNfunction_NN_2_2::synapse0x25e5f80() {
   return (neuron0x25d2df0()*-0.409011);
}

double NNfunction_NN_2_2::synapse0x25e5fc0() {
   return (neuron0x25d37c0()*0.592446);
}

double NNfunction_NN_2_2::synapse0x25e6000() {
   return (neuron0x25d4190()*0.0155031);
}

double NNfunction_NN_2_2::synapse0x25e6040() {
   return (neuron0x25d4b60()*4.4669);
}

double NNfunction_NN_2_2::synapse0x25e6080() {
   return (neuron0x25d5740()*0.73128);
}

double NNfunction_NN_2_2::synapse0x25e60c0() {
   return (neuron0x25d6110()*-2.08308);
}

double NNfunction_NN_2_2::synapse0x25e6100() {
   return (neuron0x25c6f90()*4.67829);
}

double NNfunction_NN_2_2::synapse0x25e6140() {
   return (neuron0x25c7960()*0.373806);
}

double NNfunction_NN_2_2::synapse0x25e6180() {
   return (neuron0x25c8330()*-1.4812);
}

double NNfunction_NN_2_2::synapse0x25e61c0() {
   return (neuron0x25da970()*1.05102);
}

double NNfunction_NN_2_2::synapse0x25e6200() {
   return (neuron0x25db220()*-1.66816);
}

double NNfunction_NN_2_2::synapse0x25e6240() {
   return (neuron0x25dbbf0()*-0.117367);
}

double NNfunction_NN_2_2::synapse0x25e6280() {
   return (neuron0x25dc5c0()*0.299314);
}

double NNfunction_NN_2_2::synapse0x25e6600() {
   return (neuron0x25b8540()*0.779104);
}

double NNfunction_NN_2_2::synapse0x25e6640() {
   return (neuron0x25b8e50()*1.22916);
}

double NNfunction_NN_2_2::synapse0x25e6680() {
   return (neuron0x25b9930()*0.639594);
}

double NNfunction_NN_2_2::synapse0x25e66c0() {
   return (neuron0x23731c0()*0.756879);
}

double NNfunction_NN_2_2::synapse0x25e6700() {
   return (neuron0x25ba750()*0.825762);
}

double NNfunction_NN_2_2::synapse0x25e6740() {
   return (neuron0x25bb120()*0.251817);
}

double NNfunction_NN_2_2::synapse0x25e6780() {
   return (neuron0x25bbef0()*1.53853);
}

double NNfunction_NN_2_2::synapse0x25e67c0() {
   return (neuron0x25bc8c0()*1.2834);
}

double NNfunction_NN_2_2::synapse0x25e6800() {
   return (neuron0x25bd290()*0.225406);
}

double NNfunction_NN_2_2::synapse0x25e6840() {
   return (neuron0x25bdd70()*1.46162);
}

double NNfunction_NN_2_2::synapse0x25e6880() {
   return (neuron0x25be740()*1.0788);
}

double NNfunction_NN_2_2::synapse0x25e68c0() {
   return (neuron0x25bb820()*0.472992);
}

double NNfunction_NN_2_2::synapse0x25e6900() {
   return (neuron0x25c02f0()*1.51757);
}

double NNfunction_NN_2_2::synapse0x25e6940() {
   return (neuron0x25c0cc0()*1.24424);
}

double NNfunction_NN_2_2::synapse0x25e6980() {
   return (neuron0x25c1690()*-0.411599);
}

double NNfunction_NN_2_2::synapse0x25e69c0() {
   return (neuron0x25c2060()*0.933058);
}

double NNfunction_NN_2_2::synapse0x25e6450() {
   return (neuron0x25c3e70()*0.464718);
}

double NNfunction_NN_2_2::synapse0x25e6490() {
   return (neuron0x25c4150()*1.77756);
}

double NNfunction_NN_2_2::synapse0x25e6b10() {
   return (neuron0x25c4b20()*1.93887);
}

double NNfunction_NN_2_2::synapse0x25e6b50() {
   return (neuron0x25c54f0()*1.89302);
}

double NNfunction_NN_2_2::synapse0x25e6b90() {
   return (neuron0x25c5ec0()*1.42812);
}

double NNfunction_NN_2_2::synapse0x25e6bd0() {
   return (neuron0x25c6890()*0.676621);
}

double NNfunction_NN_2_2::synapse0x25e6c10() {
   return (neuron0x25bf3e0()*1.09723);
}

double NNfunction_NN_2_2::synapse0x25e6c50() {
   return (neuron0x25bfdb0()*0.582454);
}

double NNfunction_NN_2_2::synapse0x25e6c90() {
   return (neuron0x25c9620()*1.28785);
}

double NNfunction_NN_2_2::synapse0x25e6cd0() {
   return (neuron0x25c9ff0()*1.21143);
}

double NNfunction_NN_2_2::synapse0x25e6d10() {
   return (neuron0x25ca9c0()*0.632854);
}

double NNfunction_NN_2_2::synapse0x25e6d50() {
   return (neuron0x25cb390()*1.62692);
}

double NNfunction_NN_2_2::synapse0x25e6d90() {
   return (neuron0x25cbd60()*0.617593);
}

double NNfunction_NN_2_2::synapse0x25e6dd0() {
   return (neuron0x25cc730()*2.45792);
}

double NNfunction_NN_2_2::synapse0x25e6e10() {
   return (neuron0x25cd100()*1.52048);
}

double NNfunction_NN_2_2::synapse0x25e6e50() {
   return (neuron0x25cdad0()*0.00491442);
}

double NNfunction_NN_2_2::synapse0x25e6a00() {
   return (neuron0x25c3b60()*1.72477);
}

double NNfunction_NN_2_2::synapse0x25e6a40() {
   return (neuron0x25d06b0()*-0.163413);
}

double NNfunction_NN_2_2::synapse0x25e6a80() {
   return (neuron0x25d1080()*1.60084);
}

double NNfunction_NN_2_2::synapse0x25e6ac0() {
   return (neuron0x25d1a50()*2.39152);
}

double NNfunction_NN_2_2::synapse0x25e70a0() {
   return (neuron0x25d2420()*0.907718);
}

double NNfunction_NN_2_2::synapse0x25e70e0() {
   return (neuron0x25d2df0()*0.868436);
}

double NNfunction_NN_2_2::synapse0x25e7120() {
   return (neuron0x25d37c0()*0.613566);
}

double NNfunction_NN_2_2::synapse0x25e7160() {
   return (neuron0x25d4190()*0.454053);
}

double NNfunction_NN_2_2::synapse0x25e71a0() {
   return (neuron0x25d4b60()*-0.133961);
}

double NNfunction_NN_2_2::synapse0x25e71e0() {
   return (neuron0x25d5740()*0.702471);
}

double NNfunction_NN_2_2::synapse0x25e7220() {
   return (neuron0x25d6110()*2.0188);
}

double NNfunction_NN_2_2::synapse0x25e7260() {
   return (neuron0x25c6f90()*-0.0248427);
}

double NNfunction_NN_2_2::synapse0x25e72a0() {
   return (neuron0x25c7960()*0.605501);
}

double NNfunction_NN_2_2::synapse0x25e72e0() {
   return (neuron0x25c8330()*0.653636);
}

double NNfunction_NN_2_2::synapse0x25e7320() {
   return (neuron0x25da970()*1.48001);
}

double NNfunction_NN_2_2::synapse0x25e7360() {
   return (neuron0x25db220()*1.35555);
}

double NNfunction_NN_2_2::synapse0x25e73a0() {
   return (neuron0x25dbbf0()*0.898997);
}

double NNfunction_NN_2_2::synapse0x25e73e0() {
   return (neuron0x25dc5c0()*0.728501);
}

double NNfunction_NN_2_2::synapse0x25b8500() {
   return (neuron0x25e37c0()*-8.83827);
}

double NNfunction_NN_2_2::synapse0x25e7640() {
   return (neuron0x25e3b60()*-8.76487);
}

double NNfunction_NN_2_2::synapse0x25e7680() {
   return (neuron0x25e4000()*-7.22008);
}

double NNfunction_NN_2_2::synapse0x25e76c0() {
   return (neuron0x25e5160()*8.24598);
}

double NNfunction_NN_2_2::synapse0x25e7700() {
   return (neuron0x25e62c0()*7.94816);
}

